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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00054286 };

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
0x5433,	// (0x000596b9) Screen

0x543f,	// (0x000596c5) application_window_ParamLimits

0x543f,	// (0x000596c5) application_window

0xeda4,	// (0x0006302a) screen_g1

0x549b,	// (0x00059721) area_bottom_pane_ParamLimits

0x549b,	// (0x00059721) area_bottom_pane

0x555b,	// (0x000597e1) area_top_pane_ParamLimits

0x555b,	// (0x000597e1) area_top_pane

0x55f9,	// (0x0005987f) main_pane_ParamLimits

0x55f9,	// (0x0005987f) main_pane

0xedae,	// (0x00063034) misc_graphics

0x8e9a,	// (0x0005d120) battery_pane_ParamLimits

0x8e9a,	// (0x0005d120) battery_pane

0x9b80,	// (0x0005de06) bg_status_flat_pane_g8

0x9b88,	// (0x0005de0e) bg_status_flat_pane_g9

0x8f62,	// (0x0005d1e8) context_pane_ParamLimits

0x8f62,	// (0x0005d1e8) context_pane

0x9078,	// (0x0005d2fe) navi_pane_ParamLimits

0x9078,	// (0x0005d2fe) navi_pane

0x90fc,	// (0x0005d382) signal_pane_ParamLimits

0x90fc,	// (0x0005d382) signal_pane

0x0008,

0xf874,	// (0x00063afa) bg_status_flat_pane_g

0x9169,	// (0x0005d3ef) status_pane_g1_ParamLimits

0x9169,	// (0x0005d3ef) status_pane_g1

0x917d,	// (0x0005d403) status_pane_g2_ParamLimits

0x917d,	// (0x0005d403) status_pane_g2

0x9189,	// (0x0005d40f) status_pane_g3_ParamLimits

0x9189,	// (0x0005d40f) status_pane_g3

0x0004,

0xf79b,	// (0x00063a21) status_pane_g_ParamLimits

0xf79b,	// (0x00063a21) status_pane_g

0x91bd,	// (0x0005d443) title_pane_ParamLimits

0x91bd,	// (0x0005d443) title_pane

0x91fa,	// (0x0005d480) uni_indicator_pane_ParamLimits

0x91fa,	// (0x0005d480) uni_indicator_pane

0x8dca,	// (0x0005d050) bg_list_pane_ParamLimits

0x8dca,	// (0x0005d050) bg_list_pane

0x7019,	// (0x0005b29f) find_pane

0x8dea,	// (0x0005d070) listscroll_app_pane_ParamLimits

0x8dea,	// (0x0005d070) listscroll_app_pane

0x8df6,	// (0x0005d07c) listscroll_form_pane

0x7021,	// (0x0005b2a7) listscroll_gen_pane_ParamLimits

0x7021,	// (0x0005b2a7) listscroll_gen_pane

0x7035,	// (0x0005b2bb) listscroll_set_pane

0x64e4,	// (0x0005a76a) main_idle_act_pane

0x38c5,	// (0x00057b4b) main_idle_trad_pane

0x38c5,	// (0x00057b4b) main_list_empty_pane

0x8dea,	// (0x0005d070) main_midp_pane

0x8e10,	// (0x0005d096) main_pane_g1_ParamLimits

0x8e10,	// (0x0005d096) main_pane_g1

0x704b,	// (0x0005b2d1) popup_ai_message_window_ParamLimits

0x704b,	// (0x0005b2d1) popup_ai_message_window

0x70ef,	// (0x0005b375) popup_fep_china_uni_window_ParamLimits

0x70ef,	// (0x0005b375) popup_fep_china_uni_window

0x7149,	// (0x0005b3cf) popup_fep_japan_candidate_window_ParamLimits

0x7149,	// (0x0005b3cf) popup_fep_japan_candidate_window

0x7167,	// (0x0005b3ed) popup_fep_japan_predictive_window_ParamLimits

0x7167,	// (0x0005b3ed) popup_fep_japan_predictive_window

0x7197,	// (0x0005b41d) popup_find_window

0x71a4,	// (0x0005b42a) popup_grid_graphic_window_ParamLimits

0x71a4,	// (0x0005b42a) popup_grid_graphic_window

0x71ce,	// (0x0005b454) popup_large_graphic_colour_window

0x71f4,	// (0x0005b47a) popup_menu_window_ParamLimits

0x71f4,	// (0x0005b47a) popup_menu_window

0x73b0,	// (0x0005b636) popup_note_image_window

0x739c,	// (0x0005b622) popup_note_wait_window_ParamLimits

0x739c,	// (0x0005b622) popup_note_wait_window

0x739c,	// (0x0005b622) popup_note_window_ParamLimits

0x739c,	// (0x0005b622) popup_note_window

0x7406,	// (0x0005b68c) popup_query_code_window_ParamLimits

0x7406,	// (0x0005b68c) popup_query_code_window

0x741a,	// (0x0005b6a0) popup_query_data_code_window_ParamLimits

0x741a,	// (0x0005b6a0) popup_query_data_code_window

0x7437,	// (0x0005b6bd) popup_query_data_window_ParamLimits

0x7437,	// (0x0005b6bd) popup_query_data_window

0x7453,	// (0x0005b6d9) popup_query_sat_info_window_ParamLimits

0x7453,	// (0x0005b6d9) popup_query_sat_info_window

0x748c,	// (0x0005b712) popup_snote_single_graphic_window_ParamLimits

0x748c,	// (0x0005b712) popup_snote_single_graphic_window

0x748c,	// (0x0005b712) popup_snote_single_text_window_ParamLimits

0x748c,	// (0x0005b712) popup_snote_single_text_window

0x74a1,	// (0x0005b727) popup_sub_window_general

0x75d1,	// (0x0005b857) popup_window_general_ParamLimits

0x75d1,	// (0x0005b857) popup_window_general

0x8e1e,	// (0x0005d0a4) power_save_pane

0x6eab,	// (0x0005b131) control_pane_g1_ParamLimits

0x6eab,	// (0x0005b131) control_pane_g1

0x6ed2,	// (0x0005b158) control_pane_g2_ParamLimits

0x6ed2,	// (0x0005b158) control_pane_g2

0x8d8d,	// (0x0005d013) control_pane_g3_ParamLimits

0x8d8d,	// (0x0005d013) control_pane_g3

0x0007,

0xf783,	// (0x00063a09) control_pane_g_ParamLimits

0xf783,	// (0x00063a09) control_pane_g

0x6f1c,	// (0x0005b1a2) control_pane_t1_ParamLimits

0x6f1c,	// (0x0005b1a2) control_pane_t1

0x6f70,	// (0x0005b1f6) control_pane_t2_ParamLimits

0x6f70,	// (0x0005b1f6) control_pane_t2

0x0002,

0xf794,	// (0x00063a1a) control_pane_t_ParamLimits

0xf794,	// (0x00063a1a) control_pane_t

0x8cb2,	// (0x0005cf38) navi_navi_volume_pane_cp1

0x8cba,	// (0x0005cf40) status_small_icon_pane

0x8cc2,	// (0x0005cf48) status_small_pane_g1_ParamLimits

0x8cc2,	// (0x0005cf48) status_small_pane_g1

0x8cf6,	// (0x0005cf7c) status_small_pane_g2_ParamLimits

0x8cf6,	// (0x0005cf7c) status_small_pane_g2

0x8d02,	// (0x0005cf88) status_small_pane_g3_ParamLimits

0x8d02,	// (0x0005cf88) status_small_pane_g3

0x8d0e,	// (0x0005cf94) status_small_pane_g4_ParamLimits

0x8d0e,	// (0x0005cf94) status_small_pane_g4

0x8d1a,	// (0x0005cfa0) status_small_pane_g5_ParamLimits

0x8d1a,	// (0x0005cfa0) status_small_pane_g5

0x8d28,	// (0x0005cfae) status_small_pane_g6_ParamLimits

0x8d28,	// (0x0005cfae) status_small_pane_g6

0x0007,

0xf772,	// (0x000639f8) status_small_pane_g_ParamLimits

0xf772,	// (0x000639f8) status_small_pane_g

0x8d57,	// (0x0005cfdd) status_small_pane_t1

0x8d79,	// (0x0005cfff) status_small_wait_pane_ParamLimits

0x8d79,	// (0x0005cfff) status_small_wait_pane

0x68b7,	// (0x0005ab3d) aid_levels_signal_ParamLimits

0x68b7,	// (0x0005ab3d) aid_levels_signal

0x68c9,	// (0x0005ab4f) signal_pane_g1_ParamLimits

0x68c9,	// (0x0005ab4f) signal_pane_g1

0x68de,	// (0x0005ab64) signal_pane_g2_ParamLimits

0x68de,	// (0x0005ab64) signal_pane_g2

0x0003,

0xf703,	// (0x00063989) signal_pane_g_ParamLimits

0xf703,	// (0x00063989) signal_pane_g

0x13d7,	// (0x0005565d) context_pane_g1

0x583a,	// (0x00059ac0) title_pane_g1

0x5864,	// (0x00059aea) title_pane_t1

0xedc4,	// (0x0006304a) title_pane_t2

0xedea,	// (0x00063070) title_pane_t3

0x0002,

0xf557,	// (0x000637dd) title_pane_t

0x9212,	// (0x0005d498) aid_levels_battery_ParamLimits

0x9212,	// (0x0005d498) aid_levels_battery

0x9226,	// (0x0005d4ac) battery_pane_g1_ParamLimits

0x9226,	// (0x0005d4ac) battery_pane_g1

0x923c,	// (0x0005d4c2) battery_pane_g2_ParamLimits

0x923c,	// (0x0005d4c2) battery_pane_g2

0x0001,

0xf7a6,	// (0x00063a2c) battery_pane_g_ParamLimits

0xf7a6,	// (0x00063a2c) battery_pane_g

0xa4a4,	// (0x0005e72a) uni_indicator_pane_g1

0xa4b7,	// (0x0005e73d) uni_indicator_pane_g2

0xa4c9,	// (0x0005e74f) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x00063ba2) uni_indicator_pane_g

0x3765,	// (0x000579eb) navi_icon_pane_ParamLimits

0x3765,	// (0x000579eb) navi_icon_pane

0x36ba,	// (0x00057940) navi_midp_pane

0x3781,	// (0x00057a07) navi_navi_pane

0x378b,	// (0x00057a11) navi_text_pane_ParamLimits

0x378b,	// (0x00057a11) navi_text_pane

0xeda4,	// (0x0006302a) status_small_wait_pane_g1

0xf03b,	// (0x000632c1) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x00063b9d) status_small_wait_pane_g

0xa1cb,	// (0x0005e451) navi_navi_icon_text_pane

0xa1d3,	// (0x0005e459) navi_navi_pane_g1_ParamLimits

0xa1d3,	// (0x0005e459) navi_navi_pane_g1

0xa1e5,	// (0x0005e46b) navi_navi_pane_g2_ParamLimits

0xa1e5,	// (0x0005e46b) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00063b6b) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00063b6b) navi_navi_pane_g

0xa1f7,	// (0x0005e47d) navi_navi_tabs_pane

0xa200,	// (0x0005e486) navi_navi_text_pane

0xa1cb,	// (0x0005e451) navi_navi_volume_pane

0xa1a7,	// (0x0005e42d) navi_text_pane_t1

0xa19b,	// (0x0005e421) navi_icon_pane_g1

0xa0ee,	// (0x0005e374) navi_navi_text_pane_t1

0x78b1,	// (0x0005bb37) navi_navi_volume_pane_g1

0x78b9,	// (0x0005bb3f) volume_small_pane

0xa054,	// (0x0005e2da) navi_navi_icon_text_pane_g1

0xa05c,	// (0x0005e2e2) navi_navi_icon_text_pane_t1

0x3781,	// (0x00057a07) navi_tabs_2_long_pane

0x3781,	// (0x00057a07) navi_tabs_2_pane

0x3781,	// (0x00057a07) navi_tabs_3_long_pane

0x3781,	// (0x00057a07) navi_tabs_3_pane

0x3781,	// (0x00057a07) navi_tabs_4_pane

0x7891,	// (0x0005bb17) tabs_2_active_pane_ParamLimits

0x7891,	// (0x0005bb17) tabs_2_active_pane

0x78a1,	// (0x0005bb27) tabs_2_passive_pane_ParamLimits

0x78a1,	// (0x0005bb27) tabs_2_passive_pane

0x785f,	// (0x0005bae5) tabs_3_active_pane_ParamLimits

0x785f,	// (0x0005bae5) tabs_3_active_pane

0x786f,	// (0x0005baf5) tabs_3_passive_pane_ParamLimits

0x786f,	// (0x0005baf5) tabs_3_passive_pane

0x7880,	// (0x0005bb06) tabs_3_passive_pane_cp_ParamLimits

0x7880,	// (0x0005bb06) tabs_3_passive_pane_cp

0x781b,	// (0x0005baa1) tabs_4_active_pane_ParamLimits

0x781b,	// (0x0005baa1) tabs_4_active_pane

0x782c,	// (0x0005bab2) tabs_4_passive_pane_ParamLimits

0x782c,	// (0x0005bab2) tabs_4_passive_pane

0x783d,	// (0x0005bac3) tabs_4_passive_pane_cp_ParamLimits

0x783d,	// (0x0005bac3) tabs_4_passive_pane_cp

0x784e,	// (0x0005bad4) tabs_4_passive_pane_cp2_ParamLimits

0x784e,	// (0x0005bad4) tabs_4_passive_pane_cp2

0x77f7,	// (0x0005ba7d) tabs_2_long_active_pane_ParamLimits

0x77f7,	// (0x0005ba7d) tabs_2_long_active_pane

0x7809,	// (0x0005ba8f) tabs_2_long_passive_pane_ParamLimits

0x7809,	// (0x0005ba8f) tabs_2_long_passive_pane

0x77b2,	// (0x0005ba38) tabs_3_long_active_pane_ParamLimits

0x77b2,	// (0x0005ba38) tabs_3_long_active_pane

0x77cb,	// (0x0005ba51) tabs_3_long_passive_pane_ParamLimits

0x77cb,	// (0x0005ba51) tabs_3_long_passive_pane

0x77de,	// (0x0005ba64) tabs_3_long_passive_pane_cp_ParamLimits

0x77de,	// (0x0005ba64) tabs_3_long_passive_pane_cp

0x7758,	// (0x0005b9de) volume_small_pane_g1

0x7761,	// (0x0005b9e7) volume_small_pane_g2

0x776a,	// (0x0005b9f0) volume_small_pane_g3

0x7773,	// (0x0005b9f9) volume_small_pane_g4

0x777c,	// (0x0005ba02) volume_small_pane_g5

0x7785,	// (0x0005ba0b) volume_small_pane_g6

0x778e,	// (0x0005ba14) volume_small_pane_g7

0x7797,	// (0x0005ba1d) volume_small_pane_g8

0x77a0,	// (0x0005ba26) volume_small_pane_g9

0x77a9,	// (0x0005ba2f) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00063b37) volume_small_pane_g

0xedfc,	// (0x00063082) bg_active_tab_pane_cp2_ParamLimits

0xedfc,	// (0x00063082) bg_active_tab_pane_cp2

0x58cc,	// (0x00059b52) tabs_3_active_pane_g1

0x58d4,	// (0x00059b5a) tabs_3_active_pane_t1

0xedfc,	// (0x00063082) bg_passive_tab_pane_cp2_ParamLimits

0xedfc,	// (0x00063082) bg_passive_tab_pane_cp2

0x58cc,	// (0x00059b52) tabs_3_passive_pane_g1

0x58d4,	// (0x00059b5a) tabs_3_passive_pane_t1

0xedfc,	// (0x00063082) bg_active_tab_pane_cp3_ParamLimits

0xedfc,	// (0x00063082) bg_active_tab_pane_cp3

0x58e6,	// (0x00059b6c) tabs_4_active_pane_g1

0x58ee,	// (0x00059b74) tabs_4_active_pane_t1

0xedfc,	// (0x00063082) bg_passive_tab_pane_cp3_ParamLimits

0xedfc,	// (0x00063082) bg_passive_tab_pane_cp3

0x58e6,	// (0x00059b6c) tabs_4_1_passive_pane_g1

0x58ee,	// (0x00059b74) tabs_4_1_passive_pane_t1

0x8dea,	// (0x0005d070) list_highlight_pane_cp2

0xa70c,	// (0x0005e992) list_set_pane_ParamLimits

0xa70c,	// (0x0005e992) list_set_pane

0xa7ae,	// (0x0005ea34) main_pane_set_t1_ParamLimits

0xa7ae,	// (0x0005ea34) main_pane_set_t1

0xa7ce,	// (0x0005ea54) main_pane_set_t2_ParamLimits

0xa7ce,	// (0x0005ea54) main_pane_set_t2

0xa7e2,	// (0x0005ea68) main_pane_set_t3_ParamLimits

0xa7e2,	// (0x0005ea68) main_pane_set_t3

0xa7f4,	// (0x0005ea7a) main_pane_set_t4_ParamLimits

0xa7f4,	// (0x0005ea7a) main_pane_set_t4

0x0003,

0xf981,	// (0x00063c07) main_pane_set_t_ParamLimits

0xf981,	// (0x00063c07) main_pane_set_t

0xa806,	// (0x0005ea8c) setting_code_pane

0xa812,	// (0x0005ea98) setting_slider_graphic_pane

0xa812,	// (0x0005ea98) setting_slider_pane

0xa812,	// (0x0005ea98) setting_text_pane

0xa812,	// (0x0005ea98) setting_volume_pane

0x5900,	// (0x00059b86) volume_set_pane

0xedfc,	// (0x00063082) bg_set_opt_pane_cp

0x5908,	// (0x00059b8e) setting_slider_pane_t1

0x5921,	// (0x00059ba7) setting_slider_pane_t2

0x593b,	// (0x00059bc1) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000637e4) setting_slider_pane_t

0x5953,	// (0x00059bd9) slider_set_pane

0xedae,	// (0x00063034) bg_set_opt_pane_cp2

0xee0a,	// (0x00063090) setting_slider_graphic_pane_g1

0x5969,	// (0x00059bef) setting_slider_graphic_pane_t1

0x5979,	// (0x00059bff) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000637eb) setting_slider_graphic_pane_t

0x5989,	// (0x00059c0f) slider_set_pane_cp

0xedae,	// (0x00063034) input_focus_pane_cp1

0xa6cb,	// (0x0005e951) list_set_text_pane

0xeda4,	// (0x0006302a) setting_text_pane_g1

0xedae,	// (0x00063034) input_focus_pane_cp2

0xeda4,	// (0x0006302a) setting_code_pane_g1

0xee13,	// (0x00063099) setting_code_pane_t1

0x3527,	// (0x000577ad) set_text_pane_t1_ParamLimits

0x3527,	// (0x000577ad) set_text_pane_t1

0xf214,	// (0x0006349a) set_opt_bg_pane_g1

0xf21c,	// (0x000634a2) set_opt_bg_pane_g2

0xa6a5,	// (0x0005e92b) set_opt_bg_pane_g3

0xf22c,	// (0x000634b2) set_opt_bg_pane_g4

0xf234,	// (0x000634ba) set_opt_bg_pane_g5

0xf23c,	// (0x000634c2) set_opt_bg_pane_g6

0xa6af,	// (0x0005e935) set_opt_bg_pane_g7

0xa6b7,	// (0x0005e93d) set_opt_bg_pane_g8

0xa6c1,	// (0x0005e947) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x00063bf4) set_opt_bg_pane_g

0xa698,	// (0x0005e91e) slider_set_pane_g1

0x7938,	// (0x0005bbbe) slider_set_pane_g2

0x0006,

0xf95f,	// (0x00063be5) slider_set_pane_g

0x78c2,	// (0x0005bb48) volume_set_pane_g1

0x78ca,	// (0x0005bb50) volume_set_pane_g2

0x78d2,	// (0x0005bb58) volume_set_pane_g3

0x78da,	// (0x0005bb60) volume_set_pane_g4

0x78e2,	// (0x0005bb68) volume_set_pane_g5

0x78ea,	// (0x0005bb70) volume_set_pane_g6

0x78f2,	// (0x0005bb78) volume_set_pane_g7

0x78fa,	// (0x0005bb80) volume_set_pane_g8

0x7902,	// (0x0005bb88) volume_set_pane_g9

0x790a,	// (0x0005bb90) volume_set_pane_g10

0x0009,

0xf937,	// (0x00063bbd) volume_set_pane_g

0x5991,	// (0x00059c17) indicator_pane_ParamLimits

0x5991,	// (0x00059c17) indicator_pane

0x599d,	// (0x00059c23) main_idle_pane_g2_ParamLimits

0x599d,	// (0x00059c23) main_idle_pane_g2

0x59c5,	// (0x00059c4b) main_pane_idle_g1_ParamLimits

0x59c5,	// (0x00059c4b) main_pane_idle_g1

0xee21,	// (0x000630a7) popup_clock_digital_analogue_window_ParamLimits

0xee21,	// (0x000630a7) popup_clock_digital_analogue_window

0x59d2,	// (0x00059c58) soft_indicator_pane_ParamLimits

0x59d2,	// (0x00059c58) soft_indicator_pane

0x59de,	// (0x00059c64) wallpaper_pane_ParamLimits

0x59de,	// (0x00059c64) wallpaper_pane

0xeda4,	// (0x0006302a) wallpaper_pane_g1

0x59ea,	// (0x00059c70) indicator_pane_g1_ParamLimits

0x59ea,	// (0x00059c70) indicator_pane_g1

0xab30,	// (0x0005edb6) navi_navi_icon_text_pane_srt_g1

0xee4f,	// (0x000630d5) soft_indicator_pane_t1

0xee69,	// (0x000630ef) aid_ps_area_pane

0x59f6,	// (0x00059c7c) aid_ps_clock_pane

0xee7a,	// (0x00063100) aid_ps_indicator_pane

0xee86,	// (0x0006310c) indicator_ps_pane_ParamLimits

0xee86,	// (0x0006310c) indicator_ps_pane

0xee95,	// (0x0006311b) power_save_pane_g1_ParamLimits

0xee95,	// (0x0006311b) power_save_pane_g1

0xeea1,	// (0x00063127) power_save_pane_g2_ParamLimits

0xeea1,	// (0x00063127) power_save_pane_g2

0x544f,	// (0x000596d5) aid_navinavi_width_pane

0xee69,	// (0x000630ef) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000637f0) power_save_pane_g_ParamLimits

0xf56a,	// (0x000637f0) power_save_pane_g

0xeeaf,	// (0x00063135) power_save_pane_t1_ParamLimits

0xeeaf,	// (0x00063135) power_save_pane_t1

0x59f6,	// (0x00059c7c) aid_ps_clock_pane_ParamLimits

0xee7a,	// (0x00063100) aid_ps_indicator_pane_ParamLimits

0xeec1,	// (0x00063147) power_save_pane_t4_ParamLimits

0xeec1,	// (0x00063147) power_save_pane_t4

0x0001,

0xf56f,	// (0x000637f5) power_save_pane_t_ParamLimits

0xf56f,	// (0x000637f5) power_save_pane_t

0xeeeb,	// (0x00063171) power_save_t3_ParamLimits

0xeeeb,	// (0x00063171) power_save_t3

0xeed6,	// (0x0006315c) power_save_t2_ParamLimits

0xeed6,	// (0x0006315c) power_save_t2

0xef00,	// (0x00063186) indicator_ps_pane_g1

0x5a04,	// (0x00059c8a) ai_gene_pane_ParamLimits

0x5a04,	// (0x00059c8a) ai_gene_pane

0x5a10,	// (0x00059c96) ai_links_pane_ParamLimits

0x5a10,	// (0x00059c96) ai_links_pane

0x5a1c,	// (0x00059ca2) indicator_pane_cp1_ParamLimits

0x5a1c,	// (0x00059ca2) indicator_pane_cp1

0x5a28,	// (0x00059cae) main_pane_idle_g1_cp_ParamLimits

0x5a28,	// (0x00059cae) main_pane_idle_g1_cp

0x5a34,	// (0x00059cba) popup_ai_links_title_window

0x5a3d,	// (0x00059cc3) soft_indicator_pane_cp1_ParamLimits

0x5a3d,	// (0x00059cc3) soft_indicator_pane_cp1

0xa492,	// (0x0005e718) ai_links_pane_g1

0xa49b,	// (0x0005e721) grid_ai_links_pane

0xa475,	// (0x0005e6fb) ai_gene_pane_1

0xa480,	// (0x0005e706) ai_gene_pane_2

0xa489,	// (0x0005e70f) list_highlight_pane_cp4

0xa459,	// (0x0005e6df) cell_ai_link_pane_ParamLimits

0xa459,	// (0x0005e6df) cell_ai_link_pane

0xa451,	// (0x0005e6d7) cell_ai_link_pane_g1

0xf03b,	// (0x000632c1) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x00063b98) cell_ai_link_pane_g

0xedae,	// (0x00063034) grid_highlight_cp2

0xedae,	// (0x00063034) bg_popup_sub_pane_cp1

0xef17,	// (0x0006319d) popup_ai_links_title_window_t1

0xa3a1,	// (0x0005e627) ai_gene_pane_1_g1_ParamLimits

0xa3a1,	// (0x0005e627) ai_gene_pane_1_g1

0xa3ad,	// (0x0005e633) ai_gene_pane_1_g2_ParamLimits

0xa3ad,	// (0x0005e633) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x00063b8e) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x00063b8e) ai_gene_pane_1_g

0xa3ba,	// (0x0005e640) ai_gene_pane_1_t1_ParamLimits

0xa3ba,	// (0x0005e640) ai_gene_pane_1_t1

0xa3ee,	// (0x0005e674) grid_ai_soft_ind_pane

0xa38c,	// (0x0005e612) ai_gene_pane_2_t1_ParamLimits

0xa38c,	// (0x0005e612) ai_gene_pane_2_t1

0x5a49,	// (0x00059ccf) main_pane_empty_t1_ParamLimits

0x5a49,	// (0x00059ccf) main_pane_empty_t1

0x5a61,	// (0x00059ce7) main_pane_empty_t2_ParamLimits

0x5a61,	// (0x00059ce7) main_pane_empty_t2

0x5a76,	// (0x00059cfc) main_pane_empty_t3_ParamLimits

0x5a76,	// (0x00059cfc) main_pane_empty_t3

0x5a88,	// (0x00059d0e) main_pane_empty_t4_ParamLimits

0x5a88,	// (0x00059d0e) main_pane_empty_t4

0x5a9a,	// (0x00059d20) main_pane_empty_t5_ParamLimits

0x5a9a,	// (0x00059d20) main_pane_empty_t5

0x0004,

0xf574,	// (0x000637fa) main_pane_empty_t_ParamLimits

0xf574,	// (0x000637fa) main_pane_empty_t

0xf265,	// (0x000634eb) bg_popup_window_pane_ParamLimits

0xf265,	// (0x000634eb) bg_popup_window_pane

0xa0fc,	// (0x0005e382) find_popup_pane_cp2_ParamLimits

0xa0fc,	// (0x0005e382) find_popup_pane_cp2

0xa108,	// (0x0005e38e) heading_pane_ParamLimits

0xa108,	// (0x0005e38e) heading_pane

0xedae,	// (0x00063034) bg_popup_sub_pane

0xa076,	// (0x0005e2fc) bg_popup_window_pane_g1_ParamLimits

0xa076,	// (0x0005e2fc) bg_popup_window_pane_g1

0xa082,	// (0x0005e308) bg_popup_window_pane_g2_ParamLimits

0xa082,	// (0x0005e308) bg_popup_window_pane_g2

0xa08e,	// (0x0005e314) bg_popup_window_pane_g3_ParamLimits

0xa08e,	// (0x0005e314) bg_popup_window_pane_g3

0xa09a,	// (0x0005e320) bg_popup_window_pane_g4_ParamLimits

0xa09a,	// (0x0005e320) bg_popup_window_pane_g4

0xa0a6,	// (0x0005e32c) bg_popup_window_pane_g5_ParamLimits

0xa0a6,	// (0x0005e32c) bg_popup_window_pane_g5

0xa0b2,	// (0x0005e338) bg_popup_window_pane_g6_ParamLimits

0xa0b2,	// (0x0005e338) bg_popup_window_pane_g6

0xa0be,	// (0x0005e344) bg_popup_window_pane_g7_ParamLimits

0xa0be,	// (0x0005e344) bg_popup_window_pane_g7

0xa0ca,	// (0x0005e350) bg_popup_window_pane_g8_ParamLimits

0xa0ca,	// (0x0005e350) bg_popup_window_pane_g8

0xa0d6,	// (0x0005e35c) bg_popup_window_pane_g9_ParamLimits

0xa0d6,	// (0x0005e35c) bg_popup_window_pane_g9

0xa0e2,	// (0x0005e368) bg_popup_window_pane_g10_ParamLimits

0xa0e2,	// (0x0005e368) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x00063b56) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x00063b56) bg_popup_window_pane_g

0xa00b,	// (0x0005e291) bg_popup_heading_pane_ParamLimits

0xa00b,	// (0x0005e291) bg_popup_heading_pane

0x7a3f,	// (0x0005bcc5) tabs_4_passive_pane_cp_srt_ParamLimits

0x7a3f,	// (0x0005bcc5) tabs_4_passive_pane_cp_srt

0x7a51,	// (0x0005bcd7) tabs_4_passive_pane_srt_ParamLimits

0xa01f,	// (0x0005e2a5) heading_pane_g2

0x7a51,	// (0x0005bcd7) tabs_4_passive_pane_srt

0x8dea,	// (0x0005d070) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8dea,	// (0x0005d070) bg_passive_tab_pane_cp3_srt

0xa027,	// (0x0005e2ad) heading_pane_t1_ParamLimits

0xa027,	// (0x0005e2ad) heading_pane_t1

0xa03e,	// (0x0005e2c4) heading_pane_t2_ParamLimits

0xa03e,	// (0x0005e2c4) heading_pane_t2

0x0001,

0xf8cb,	// (0x00063b51) heading_pane_t_ParamLimits

0xf8cb,	// (0x00063b51) heading_pane_t

0x9b48,	// (0x0005ddce) bg_popup_heading_pane_g1

0x9bf7,	// (0x0005de7d) bg_popup_heading_pane_g2

0x9c01,	// (0x0005de87) bg_popup_heading_pane_g3

0x9c0b,	// (0x0005de91) bg_popup_heading_pane_g4

0x9c15,	// (0x0005de9b) bg_popup_heading_pane_g5

0x9c1f,	// (0x0005dea5) bg_popup_heading_pane_g6

0x9c27,	// (0x0005dead) bg_popup_heading_pane_g7

0x9c2f,	// (0x0005deb5) bg_popup_heading_pane_g8

0x9c39,	// (0x0005debf) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x00063b0d) bg_popup_heading_pane_g

0x9311,	// (0x0005d597) bg_popup_sub_pane_g1

0x9321,	// (0x0005d5a7) bg_popup_sub_pane_g2

0x9319,	// (0x0005d59f) bg_popup_sub_pane_g3

0x9331,	// (0x0005d5b7) bg_popup_sub_pane_g4

0x9329,	// (0x0005d5af) bg_popup_sub_pane_g5

0x9339,	// (0x0005d5bf) bg_popup_sub_pane_g6

0x9341,	// (0x0005d5c7) bg_popup_sub_pane_g7

0x9351,	// (0x0005d5d7) bg_popup_sub_pane_g8

0x9349,	// (0x0005d5cf) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x00063ae7) bg_popup_sub_pane_g

0xef26,	// (0x000631ac) bg_popup_window_pane_cp5_ParamLimits

0xef26,	// (0x000631ac) bg_popup_window_pane_cp5

0xef42,	// (0x000631c8) popup_note_window_g1_ParamLimits

0xef42,	// (0x000631c8) popup_note_window_g1

0xef4e,	// (0x000631d4) popup_note_window_t1_ParamLimits

0xef4e,	// (0x000631d4) popup_note_window_t1

0xef64,	// (0x000631ea) popup_note_window_t2_ParamLimits

0xef64,	// (0x000631ea) popup_note_window_t2

0xef7a,	// (0x00063200) popup_note_window_t3_ParamLimits

0xef7a,	// (0x00063200) popup_note_window_t3

0xef90,	// (0x00063216) popup_note_window_t4_ParamLimits

0xef90,	// (0x00063216) popup_note_window_t4

0xefb8,	// (0x0006323e) popup_note_window_t5_ParamLimits

0xefb8,	// (0x0006323e) popup_note_window_t5

0x0004,

0xf57f,	// (0x00063805) popup_note_window_t_ParamLimits

0xf57f,	// (0x00063805) popup_note_window_t

0xefdc,	// (0x00063262) bg_popup_window_pane_cp6_ParamLimits

0xefdc,	// (0x00063262) bg_popup_window_pane_cp6

0x9ac4,	// (0x0005dd4a) popup_note_image_window_g1_ParamLimits

0x9ac4,	// (0x0005dd4a) popup_note_image_window_g1

0x9ad0,	// (0x0005dd56) popup_note_image_window_g2_ParamLimits

0x9ad0,	// (0x0005dd56) popup_note_image_window_g2

0x0001,

0xf855,	// (0x00063adb) popup_note_image_window_g_ParamLimits

0xf855,	// (0x00063adb) popup_note_image_window_g

0x9ae9,	// (0x0005dd6f) popup_note_image_window_t1_ParamLimits

0x9ae9,	// (0x0005dd6f) popup_note_image_window_t1

0x9b02,	// (0x0005dd88) popup_note_image_window_t2_ParamLimits

0x9b02,	// (0x0005dd88) popup_note_image_window_t2

0x9b1b,	// (0x0005dda1) popup_note_image_window_t3_ParamLimits

0x9b1b,	// (0x0005dda1) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x00063ae0) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x00063ae0) popup_note_image_window_t

0x998d,	// (0x0005dc13) bg_popup_window_pane_cp7_ParamLimits

0x998d,	// (0x0005dc13) bg_popup_window_pane_cp7

0x99bd,	// (0x0005dc43) popup_note_wait_window_g1_ParamLimits

0x99bd,	// (0x0005dc43) popup_note_wait_window_g1

0x99c9,	// (0x0005dc4f) popup_note_wait_window_g2_ParamLimits

0x99c9,	// (0x0005dc4f) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x00063ac9) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x00063ac9) popup_note_wait_window_g

0x99e1,	// (0x0005dc67) popup_note_wait_window_t1_ParamLimits

0x99e1,	// (0x0005dc67) popup_note_wait_window_t1

0x9a08,	// (0x0005dc8e) popup_note_wait_window_t2_ParamLimits

0x9a08,	// (0x0005dc8e) popup_note_wait_window_t2

0x9a25,	// (0x0005dcab) popup_note_wait_window_t3_ParamLimits

0x9a25,	// (0x0005dcab) popup_note_wait_window_t3

0x9a38,	// (0x0005dcbe) popup_note_wait_window_t4_ParamLimits

0x9a38,	// (0x0005dcbe) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x00063ad0) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x00063ad0) popup_note_wait_window_t

0x9a5d,	// (0x0005dce3) wait_bar_pane_ParamLimits

0x9a5d,	// (0x0005dce3) wait_bar_pane

0xedae,	// (0x00063034) wait_anim_pane

0xedae,	// (0x00063034) wait_border_pane

0xeda4,	// (0x0006302a) wait_anim_pane_g1

0xeda4,	// (0x0006302a) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00063984) wait_anim_pane_g

0x9939,	// (0x0005dbbf) wait_border_pane_g1

0x9944,	// (0x0005dbca) wait_border_pane_g2

0x994d,	// (0x0005dbd3) wait_border_pane_g3

0x0002,

0xf83c,	// (0x00063ac2) wait_border_pane_g

0x97a4,	// (0x0005da2a) bg_popup_window_pane_cp16_ParamLimits

0x97a4,	// (0x0005da2a) bg_popup_window_pane_cp16

0x98a4,	// (0x0005db2a) indicator_popup_pane_cp4_ParamLimits

0x98a4,	// (0x0005db2a) indicator_popup_pane_cp4

0x98b8,	// (0x0005db3e) popup_query_data_window_t1_ParamLimits

0x98b8,	// (0x0005db3e) popup_query_data_window_t1

0x98ca,	// (0x0005db50) popup_query_data_window_t2_ParamLimits

0x98ca,	// (0x0005db50) popup_query_data_window_t2

0x98e3,	// (0x0005db69) popup_query_data_window_t3_ParamLimits

0x98e3,	// (0x0005db69) popup_query_data_window_t3

0x0002,

0xf835,	// (0x00063abb) popup_query_data_window_t_ParamLimits

0xf835,	// (0x00063abb) popup_query_data_window_t

0x98fd,	// (0x0005db83) query_popup_data_pane_ParamLimits

0x98fd,	// (0x0005db83) query_popup_data_pane

0x9911,	// (0x0005db97) query_popup_data_pane_cp1_ParamLimits

0x9911,	// (0x0005db97) query_popup_data_pane_cp1

0x97a4,	// (0x0005da2a) bg_popup_window_pane_cp10_ParamLimits

0x97a4,	// (0x0005da2a) bg_popup_window_pane_cp10

0x97d6,	// (0x0005da5c) indicator_popup_pane_ParamLimits

0x97d6,	// (0x0005da5c) indicator_popup_pane

0x97f8,	// (0x0005da7e) popup_query_code_window_t1_ParamLimits

0x97f8,	// (0x0005da7e) popup_query_code_window_t1

0x9812,	// (0x0005da98) popup_query_code_window_t2_ParamLimits

0x9812,	// (0x0005da98) popup_query_code_window_t2

0x985b,	// (0x0005dae1) popup_query_code_window_t3_ParamLimits

0x985b,	// (0x0005dae1) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x00063ab4) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x00063ab4) popup_query_code_window_t

0x988a,	// (0x0005db10) query_popup_pane_ParamLimits

0x988a,	// (0x0005db10) query_popup_pane

0xefdc,	// (0x00063262) bg_popup_window_pane_cp15_ParamLimits

0xefdc,	// (0x00063262) bg_popup_window_pane_cp15

0x5ad4,	// (0x00059d5a) indicator_popup_pane_cp1_ParamLimits

0x5ad4,	// (0x00059d5a) indicator_popup_pane_cp1

0x5ae7,	// (0x00059d6d) indicator_popup_pane_cp2_ParamLimits

0x5ae7,	// (0x00059d6d) indicator_popup_pane_cp2

0x5afa,	// (0x00059d80) popup_query_data_code_window_g1_ParamLimits

0x5afa,	// (0x00059d80) popup_query_data_code_window_g1

0xeffa,	// (0x00063280) popup_query_data_code_window_t1_ParamLimits

0xeffa,	// (0x00063280) popup_query_data_code_window_t1

0xf00c,	// (0x00063292) popup_query_data_code_window_t2_ParamLimits

0xf00c,	// (0x00063292) popup_query_data_code_window_t2

0x5b0d,	// (0x00059d93) popup_query_data_code_window_t3_ParamLimits

0x5b0d,	// (0x00059d93) popup_query_data_code_window_t3

0x5b23,	// (0x00059da9) popup_query_data_code_window_t4_ParamLimits

0x5b23,	// (0x00059da9) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00063810) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00063810) popup_query_data_code_window_t

0x763b,	// (0x0005b8c1) list_single_midp_graphic_pane_g3

0x5b3b,	// (0x00059dc1) query_popup_data_pane_cp2_ParamLimits

0x5b4e,	// (0x00059dd4) query_popup_pane_cp2_ParamLimits

0x5b4e,	// (0x00059dd4) query_popup_pane_cp2

0xedae,	// (0x00063034) bg_popup_window_pane_cp11

0x9790,	// (0x0005da16) heading_pane_cp5

0xf068,	// (0x000632ee) listscroll_popup_info_pane

0xedae,	// (0x00063034) input_focus_pane_cp3

0xf01e,	// (0x000632a4) query_popup_pane_t1

0xf02c,	// (0x000632b2) list_popup_info_pane_ParamLimits

0xf02c,	// (0x000632b2) list_popup_info_pane

0xf03b,	// (0x000632c1) listscroll_popup_info_pane_g1

0xf043,	// (0x000632c9) scroll_pane_cp7

0x5b61,	// (0x00059de7) popup_info_list_pane_t1_ParamLimits

0x5b61,	// (0x00059de7) popup_info_list_pane_t1

0x5b7b,	// (0x00059e01) popup_info_list_pane_t2_ParamLimits

0x5b7b,	// (0x00059e01) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00063819) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00063819) popup_info_list_pane_t

0xedae,	// (0x00063034) bg_popup_window_pane_cp12

0xab4a,	// (0x0005edd0) find_popup_pane

0xedfc,	// (0x00063082) bg_popup_window_pane_cp3

0xf04d,	// (0x000632d3) heading_pane_cp3

0xf059,	// (0x000632df) listscroll_popup_graphic_pane

0xedae,	// (0x00063034) bg_popup_window_pane_cp4

0x5be5,	// (0x00059e6b) heading_pane_cp4

0xf068,	// (0x000632ee) listscroll_popup_colour_pane

0x5bef,	// (0x00059e75) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5bef,	// (0x00059e75) cell_large_graphic_colour_none_popup_pane

0x5c03,	// (0x00059e89) grid_large_graphic_colour_popup_pane_ParamLimits

0x5c03,	// (0x00059e89) grid_large_graphic_colour_popup_pane

0x5c2b,	// (0x00059eb1) listscroll_popup_colour_pane_g1_ParamLimits

0x5c2b,	// (0x00059eb1) listscroll_popup_colour_pane_g1

0x5c42,	// (0x00059ec8) listscroll_popup_colour_pane_g2_ParamLimits

0x5c42,	// (0x00059ec8) listscroll_popup_colour_pane_g2

0x5c59,	// (0x00059edf) listscroll_popup_colour_pane_g3_ParamLimits

0x5c59,	// (0x00059edf) listscroll_popup_colour_pane_g3

0x5c69,	// (0x00059eef) listscroll_popup_colour_pane_g4_ParamLimits

0x5c69,	// (0x00059eef) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0006381e) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0006381e) listscroll_popup_colour_pane_g

0xf070,	// (0x000632f6) scroll_pane_cp6_ParamLimits

0xf070,	// (0x000632f6) scroll_pane_cp6

0x5c79,	// (0x00059eff) cell_large_graphic_colour_popup_pane_ParamLimits

0x5c79,	// (0x00059eff) cell_large_graphic_colour_popup_pane

0x5c98,	// (0x00059f1e) cell_large_graphic_colour_none_popup_pane_t1

0xedae,	// (0x00063034) grid_highlight_pane_cp5

0xf082,	// (0x00063308) cell_large_graphic_colour_popup_pane_g1

0xf08a,	// (0x00063310) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00063827) cell_large_graphic_colour_popup_pane_g

0xf092,	// (0x00063318) cell_large_graphic_colour_popup_pane_g2_copy1

0xf09b,	// (0x00063321) grid_highlight_pane_cp4

0xf0a3,	// (0x00063329) bg_popup_window_pane_cp8_ParamLimits

0xf0a3,	// (0x00063329) bg_popup_window_pane_cp8

0x5ca7,	// (0x00059f2d) popup_snote_single_text_window_g1_ParamLimits

0x5ca7,	// (0x00059f2d) popup_snote_single_text_window_g1

0x5cb9,	// (0x00059f3f) popup_snote_single_text_window_t1_ParamLimits

0x5cb9,	// (0x00059f3f) popup_snote_single_text_window_t1

0x5ccc,	// (0x00059f52) popup_snote_single_text_window_t2_ParamLimits

0x5ccc,	// (0x00059f52) popup_snote_single_text_window_t2

0x5cdf,	// (0x00059f65) popup_snote_single_text_window_t3_ParamLimits

0x5cdf,	// (0x00059f65) popup_snote_single_text_window_t3

0x5d18,	// (0x00059f9e) popup_snote_single_text_window_t4_ParamLimits

0x5d18,	// (0x00059f9e) popup_snote_single_text_window_t4

0x5d4c,	// (0x00059fd2) popup_snote_single_text_window_t5_ParamLimits

0x5d4c,	// (0x00059fd2) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0006382c) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0006382c) popup_snote_single_text_window_t

0xf0be,	// (0x00063344) bg_popup_window_pane_cp9_ParamLimits

0xf0be,	// (0x00063344) bg_popup_window_pane_cp9

0x5ca7,	// (0x00059f2d) popup_snote_single_graphic_window_g1_ParamLimits

0x5ca7,	// (0x00059f2d) popup_snote_single_graphic_window_g1

0xf0cc,	// (0x00063352) popup_snote_single_graphic_window_g2_ParamLimits

0xf0cc,	// (0x00063352) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00063837) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00063837) popup_snote_single_graphic_window_g

0xf0d8,	// (0x0006335e) popup_snote_single_graphic_window_t1_ParamLimits

0xf0d8,	// (0x0006335e) popup_snote_single_graphic_window_t1

0xf0eb,	// (0x00063371) popup_snote_single_graphic_window_t2_ParamLimits

0xf0eb,	// (0x00063371) popup_snote_single_graphic_window_t2

0x5d7b,	// (0x0005a001) popup_snote_single_graphic_window_t3_ParamLimits

0x5d7b,	// (0x0005a001) popup_snote_single_graphic_window_t3

0x5db4,	// (0x0005a03a) popup_snote_single_graphic_window_t4_ParamLimits

0x5db4,	// (0x0005a03a) popup_snote_single_graphic_window_t4

0x5de8,	// (0x0005a06e) popup_snote_single_graphic_window_t5_ParamLimits

0x5de8,	// (0x0005a06e) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0006383c) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0006383c) popup_snote_single_graphic_window_t

0xaa8c,	// (0x0005ed12) grid_graphic_popup_pane_ParamLimits

0xaa8c,	// (0x0005ed12) grid_graphic_popup_pane

0xaab6,	// (0x0005ed3c) listscroll_popup_graphic_pane_g1_ParamLimits

0xaab6,	// (0x0005ed3c) listscroll_popup_graphic_pane_g1

0xaaca,	// (0x0005ed50) listscroll_popup_graphic_pane_g2_ParamLimits

0xaaca,	// (0x0005ed50) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x00063c31) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x00063c31) listscroll_popup_graphic_pane_g

0xaade,	// (0x0005ed64) scroll_pane_cp5

0xaa2b,	// (0x0005ecb1) cell_graphic_popup_pane_ParamLimits

0xaa2b,	// (0x0005ecb1) cell_graphic_popup_pane

0xaa0c,	// (0x0005ec92) cell_graphic_popup_pane_g1

0xaa14,	// (0x0005ec9a) cell_graphic_popup_pane_g2

0xf092,	// (0x00063318) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00063c2a) cell_graphic_popup_pane_g

0xaa1d,	// (0x0005eca3) cell_graphic_popup_pane_t2

0xf09b,	// (0x00063321) grid_highlight_pane_cp3

0xf110,	// (0x00063396) list_gen_pane_ParamLimits

0xf110,	// (0x00063396) list_gen_pane

0xf138,	// (0x000633be) scroll_pane

0xa964,	// (0x0005ebea) bg_list_pane_g1_ParamLimits

0xa964,	// (0x0005ebea) bg_list_pane_g1

0xa981,	// (0x0005ec07) bg_list_pane_g2_ParamLimits

0xa981,	// (0x0005ec07) bg_list_pane_g2

0xa996,	// (0x0005ec1c) bg_list_pane_g3_ParamLimits

0xa996,	// (0x0005ec1c) bg_list_pane_g3

0xa9aa,	// (0x0005ec30) bg_list_pane_g4_ParamLimits

0xa9aa,	// (0x0005ec30) bg_list_pane_g4

0xa9be,	// (0x0005ec44) bg_list_pane_g5_ParamLimits

0xa9be,	// (0x0005ec44) bg_list_pane_g5

0x0004,

0xf999,	// (0x00063c1f) bg_list_pane_g_ParamLimits

0xf999,	// (0x00063c1f) bg_list_pane_g

0x79e2,	// (0x0005bc68) list_double2_graphic_large_graphic_pane_ParamLimits

0x79e2,	// (0x0005bc68) list_double2_graphic_large_graphic_pane

0x79e2,	// (0x0005bc68) list_double2_graphic_pane_ParamLimits

0x79e2,	// (0x0005bc68) list_double2_graphic_pane

0x79e2,	// (0x0005bc68) list_double2_large_graphic_pane_ParamLimits

0x79e2,	// (0x0005bc68) list_double2_large_graphic_pane

0x79e2,	// (0x0005bc68) list_double2_pane_ParamLimits

0x79e2,	// (0x0005bc68) list_double2_pane

0x79e2,	// (0x0005bc68) list_double_graphic_heading_pane_ParamLimits

0x79e2,	// (0x0005bc68) list_double_graphic_heading_pane

0x79e2,	// (0x0005bc68) list_double_graphic_pane_ParamLimits

0x79e2,	// (0x0005bc68) list_double_graphic_pane

0x79e2,	// (0x0005bc68) list_double_heading_pane_ParamLimits

0x79e2,	// (0x0005bc68) list_double_heading_pane

0x79e2,	// (0x0005bc68) list_double_large_graphic_pane_ParamLimits

0x79e2,	// (0x0005bc68) list_double_large_graphic_pane

0x79e2,	// (0x0005bc68) list_double_number_pane_ParamLimits

0x79e2,	// (0x0005bc68) list_double_number_pane

0x79e2,	// (0x0005bc68) list_double_pane_ParamLimits

0x79e2,	// (0x0005bc68) list_double_pane

0x79e2,	// (0x0005bc68) list_double_time_pane_ParamLimits

0x79e2,	// (0x0005bc68) list_double_time_pane

0x79e2,	// (0x0005bc68) list_setting_number_pane_ParamLimits

0x79e2,	// (0x0005bc68) list_setting_number_pane

0x79e2,	// (0x0005bc68) list_setting_pane_ParamLimits

0x79e2,	// (0x0005bc68) list_setting_pane

0xa8e7,	// (0x0005eb6d) list_single_2graphic_pane_ParamLimits

0xa8e7,	// (0x0005eb6d) list_single_2graphic_pane

0xa8e7,	// (0x0005eb6d) list_single_graphic_heading_pane_ParamLimits

0xa8e7,	// (0x0005eb6d) list_single_graphic_heading_pane

0xa8e7,	// (0x0005eb6d) list_single_graphic_pane_ParamLimits

0xa8e7,	// (0x0005eb6d) list_single_graphic_pane

0xa8e7,	// (0x0005eb6d) list_single_heading_pane_ParamLimits

0xa8e7,	// (0x0005eb6d) list_single_heading_pane

0xa942,	// (0x0005ebc8) list_single_large_graphic_pane_ParamLimits

0xa942,	// (0x0005ebc8) list_single_large_graphic_pane

0xa8e7,	// (0x0005eb6d) list_single_number_heading_pane_ParamLimits

0xa8e7,	// (0x0005eb6d) list_single_number_heading_pane

0xa8e7,	// (0x0005eb6d) list_single_number_pane_ParamLimits

0xa8e7,	// (0x0005eb6d) list_single_number_pane

0xa8e7,	// (0x0005eb6d) list_single_pane_ParamLimits

0xa8e7,	// (0x0005eb6d) list_single_pane

0xedae,	// (0x00063034) list_highlight_pane_cp1

0x5e2d,	// (0x0005a0b3) list_single_pane_g1_ParamLimits

0x5e2d,	// (0x0005a0b3) list_single_pane_g1

0x5e39,	// (0x0005a0bf) list_single_pane_g2_ParamLimits

0x5e39,	// (0x0005a0bf) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00063858) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00063858) list_single_pane_g

0x79cc,	// (0x0005bc52) list_single_pane_t1_ParamLimits

0x79cc,	// (0x0005bc52) list_single_pane_t1

0x5e2d,	// (0x0005a0b3) list_single_number_pane_g1_ParamLimits

0x5e2d,	// (0x0005a0b3) list_single_number_pane_g1

0x5e39,	// (0x0005a0bf) list_single_number_pane_g2_ParamLimits

0x5e39,	// (0x0005a0bf) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00063858) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00063858) list_single_number_pane_g

0x5e45,	// (0x0005a0cb) list_single_number_pane_t1_ParamLimits

0x5e45,	// (0x0005a0cb) list_single_number_pane_t1

0x7912,	// (0x0005bb98) list_single_number_pane_t2_ParamLimits

0x7912,	// (0x0005bb98) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x00063be0) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x00063be0) list_single_number_pane_t

0x5e21,	// (0x0005a0a7) list_single_graphic_pane_g1_ParamLimits

0x5e21,	// (0x0005a0a7) list_single_graphic_pane_g1

0x5e2d,	// (0x0005a0b3) list_single_graphic_pane_g2_ParamLimits

0x5e2d,	// (0x0005a0b3) list_single_graphic_pane_g2

0x5e39,	// (0x0005a0bf) list_single_graphic_pane_g3_ParamLimits

0x5e39,	// (0x0005a0bf) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00063847) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00063847) list_single_graphic_pane_g

0x5e45,	// (0x0005a0cb) list_single_graphic_pane_t1_ParamLimits

0x5e45,	// (0x0005a0cb) list_single_graphic_pane_t1

0x5e5b,	// (0x0005a0e1) list_single_heading_pane_g1_ParamLimits

0x5e5b,	// (0x0005a0e1) list_single_heading_pane_g1

0x5e39,	// (0x0005a0bf) list_single_heading_pane_g2_ParamLimits

0x5e39,	// (0x0005a0bf) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0006384e) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0006384e) list_single_heading_pane_g

0x5e6e,	// (0x0005a0f4) list_single_heading_pane_t1_ParamLimits

0x5e6e,	// (0x0005a0f4) list_single_heading_pane_t1

0x5e84,	// (0x0005a10a) list_single_heading_pane_t2_ParamLimits

0x5e84,	// (0x0005a10a) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00063853) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00063853) list_single_heading_pane_t

0x5e2d,	// (0x0005a0b3) list_single_number_heading_pane_g1_ParamLimits

0x5e2d,	// (0x0005a0b3) list_single_number_heading_pane_g1

0x5e39,	// (0x0005a0bf) list_single_number_heading_pane_g2_ParamLimits

0x5e39,	// (0x0005a0bf) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00063858) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00063858) list_single_number_heading_pane_g

0x5e96,	// (0x0005a11c) list_single_number_heading_pane_t1_ParamLimits

0x5e96,	// (0x0005a11c) list_single_number_heading_pane_t1

0x5eac,	// (0x0005a132) list_single_number_heading_pane_t2_ParamLimits

0x5eac,	// (0x0005a132) list_single_number_heading_pane_t2

0x5ebe,	// (0x0005a144) list_single_number_heading_pane_t3_ParamLimits

0x5ebe,	// (0x0005a144) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0006385d) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0006385d) list_single_number_heading_pane_t

0x5ed0,	// (0x0005a156) list_single_graphic_heading_pane_g1_ParamLimits

0x5ed0,	// (0x0005a156) list_single_graphic_heading_pane_g1

0x5ee6,	// (0x0005a16c) list_single_graphic_heading_pane_g4_ParamLimits

0x5ee6,	// (0x0005a16c) list_single_graphic_heading_pane_g4

0x5e39,	// (0x0005a0bf) list_single_graphic_heading_pane_g5_ParamLimits

0x5e39,	// (0x0005a0bf) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00063864) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00063864) list_single_graphic_heading_pane_g

0x5e96,	// (0x0005a11c) list_single_graphic_heading_pane_t1_ParamLimits

0x5e96,	// (0x0005a11c) list_single_graphic_heading_pane_t1

0x5ef7,	// (0x0005a17d) list_single_graphic_heading_pane_t2_ParamLimits

0x5ef7,	// (0x0005a17d) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0006386b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0006386b) list_single_graphic_heading_pane_t

0x5f0f,	// (0x0005a195) list_single_large_graphic_pane_g1_ParamLimits

0x5f0f,	// (0x0005a195) list_single_large_graphic_pane_g1

0x482c,	// (0x00058ab2) list_single_large_graphic_pane_g2_ParamLimits

0x482c,	// (0x00058ab2) list_single_large_graphic_pane_g2

0x4838,	// (0x00058abe) list_single_large_graphic_pane_g3_ParamLimits

0x4838,	// (0x00058abe) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00063870) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00063870) list_single_large_graphic_pane_g

0x9944,	// (0x0005dbca) wait_border_pane_g2_copy1

0x5f1b,	// (0x0005a1a1) list_single_large_graphic_pane_g4_cp2

0x5f23,	// (0x0005a1a9) list_single_large_graphic_pane_t1_ParamLimits

0x5f23,	// (0x0005a1a9) list_single_large_graphic_pane_t1

0x5f39,	// (0x0005a1bf) list_double_pane_g1_ParamLimits

0x5f39,	// (0x0005a1bf) list_double_pane_g1

0x5f45,	// (0x0005a1cb) list_double_pane_g2_ParamLimits

0x5f45,	// (0x0005a1cb) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00063877) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00063877) list_double_pane_g

0x5f51,	// (0x0005a1d7) list_double_pane_t1_ParamLimits

0x5f51,	// (0x0005a1d7) list_double_pane_t1

0x5f67,	// (0x0005a1ed) list_double_pane_t2_ParamLimits

0x5f67,	// (0x0005a1ed) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0006387c) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0006387c) list_double_pane_t

0x5f79,	// (0x0005a1ff) list_double2_pane_g1_ParamLimits

0x5f79,	// (0x0005a1ff) list_double2_pane_g1

0x3562,	// (0x000577e8) list_double2_pane_g2_ParamLimits

0x3562,	// (0x000577e8) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00063881) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00063881) list_double2_pane_g

0x5f8a,	// (0x0005a210) list_double2_pane_t1_ParamLimits

0x5f8a,	// (0x0005a210) list_double2_pane_t1

0x5fa0,	// (0x0005a226) list_double2_pane_t2_ParamLimits

0x5fa0,	// (0x0005a226) list_double2_pane_t2

0x0001,

0xf600,	// (0x00063886) list_double2_pane_t_ParamLimits

0xf600,	// (0x00063886) list_double2_pane_t

0x5f39,	// (0x0005a1bf) list_double_number_pane_g1_ParamLimits

0x5f39,	// (0x0005a1bf) list_double_number_pane_g1

0x5f45,	// (0x0005a1cb) list_double_number_pane_g2_ParamLimits

0x5f45,	// (0x0005a1cb) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00063877) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00063877) list_double_number_pane_g

0x5fb2,	// (0x0005a238) list_double_number_pane_t1_ParamLimits

0x5fb2,	// (0x0005a238) list_double_number_pane_t1

0x5fc4,	// (0x0005a24a) list_double_number_pane_t2_ParamLimits

0x5fc4,	// (0x0005a24a) list_double_number_pane_t2

0x5fda,	// (0x0005a260) list_double_number_pane_t3_ParamLimits

0x5fda,	// (0x0005a260) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0006388b) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0006388b) list_double_number_pane_t

0x5fec,	// (0x0005a272) list_double_graphic_pane_g1_ParamLimits

0x5fec,	// (0x0005a272) list_double_graphic_pane_g1

0x5ff8,	// (0x0005a27e) list_double_graphic_pane_g2_ParamLimits

0x5ff8,	// (0x0005a27e) list_double_graphic_pane_g2

0x6007,	// (0x0005a28d) list_double_graphic_pane_g3_ParamLimits

0x6007,	// (0x0005a28d) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00063892) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00063892) list_double_graphic_pane_g

0x5fc4,	// (0x0005a24a) list_double_graphic_pane_t1_ParamLimits

0x5fc4,	// (0x0005a24a) list_double_graphic_pane_t1

0x5fda,	// (0x0005a260) list_double_graphic_pane_t2_ParamLimits

0x5fda,	// (0x0005a260) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0006389b) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0006389b) list_double_graphic_pane_t

0x601f,	// (0x0005a2a5) list_double2_graphic_pane_g1_ParamLimits

0x601f,	// (0x0005a2a5) list_double2_graphic_pane_g1

0xadac,	// (0x0005f032) list_double2_graphic_pane_g2_ParamLimits

0xadac,	// (0x0005f032) list_double2_graphic_pane_g2

0x4844,	// (0x00058aca) list_double2_graphic_pane_g3_ParamLimits

0x4844,	// (0x00058aca) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x000638a0) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x000638a0) list_double2_graphic_pane_g

0x602b,	// (0x0005a2b1) list_double2_graphic_pane_t1_ParamLimits

0x602b,	// (0x0005a2b1) list_double2_graphic_pane_t1

0x6041,	// (0x0005a2c7) list_double2_graphic_pane_t2_ParamLimits

0x6041,	// (0x0005a2c7) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x000638a7) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x000638a7) list_double2_graphic_pane_t

0x6053,	// (0x0005a2d9) list_double_large_graphic_pane_g1_ParamLimits

0x6053,	// (0x0005a2d9) list_double_large_graphic_pane_g1

0x6072,	// (0x0005a2f8) list_double_large_graphic_pane_g2_ParamLimits

0x6072,	// (0x0005a2f8) list_double_large_graphic_pane_g2

0x5f45,	// (0x0005a1cb) list_double_large_graphic_pane_g3_ParamLimits

0x5f45,	// (0x0005a1cb) list_double_large_graphic_pane_g3

0x6088,	// (0x0005a30e) list_double_large_graphic_pane_g4_ParamLimits

0x6088,	// (0x0005a30e) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x000638ac) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x000638ac) list_double_large_graphic_pane_g

0x609a,	// (0x0005a320) list_double_large_graphic_pane_t1_ParamLimits

0x609a,	// (0x0005a320) list_double_large_graphic_pane_t1

0x60b3,	// (0x0005a339) list_double_large_graphic_pane_t2_ParamLimits

0x60b3,	// (0x0005a339) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x000638b7) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x000638b7) list_double_large_graphic_pane_t

0x60c5,	// (0x0005a34b) list_double2_large_graphic_pane_g1_ParamLimits

0x60c5,	// (0x0005a34b) list_double2_large_graphic_pane_g1

0x60d1,	// (0x0005a357) list_double2_large_graphic_pane_g2_ParamLimits

0x60d1,	// (0x0005a357) list_double2_large_graphic_pane_g2

0x4844,	// (0x00058aca) list_double2_large_graphic_pane_g3_ParamLimits

0x4844,	// (0x00058aca) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x000638bc) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x000638bc) list_double2_large_graphic_pane_g

0x602b,	// (0x0005a2b1) list_double2_large_graphic_pane_t1_ParamLimits

0x602b,	// (0x0005a2b1) list_double2_large_graphic_pane_t1

0x6041,	// (0x0005a2c7) list_double2_large_graphic_pane_t2_ParamLimits

0x6041,	// (0x0005a2c7) list_double2_large_graphic_pane_t2

0x0001,

0xf621,	// (0x000638a7) list_double2_large_graphic_pane_t_ParamLimits

0xf621,	// (0x000638a7) list_double2_large_graphic_pane_t

0x60e2,	// (0x0005a368) list_double_heading_pane_g1_ParamLimits

0x60e2,	// (0x0005a368) list_double_heading_pane_g1

0x60f3,	// (0x0005a379) list_double_heading_pane_g2_ParamLimits

0x60f3,	// (0x0005a379) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x000638c3) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x000638c3) list_double_heading_pane_g

0x60ff,	// (0x0005a385) list_double_heading_pane_t1_ParamLimits

0x60ff,	// (0x0005a385) list_double_heading_pane_t1

0x6041,	// (0x0005a2c7) list_double_heading_pane_t2_ParamLimits

0x6041,	// (0x0005a2c7) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x000638c8) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x000638c8) list_double_heading_pane_t

0x6115,	// (0x0005a39b) list_double_graphic_heading_pane_g1_ParamLimits

0x6115,	// (0x0005a39b) list_double_graphic_heading_pane_g1

0x60e2,	// (0x0005a368) list_double_graphic_heading_pane_g2_ParamLimits

0x60e2,	// (0x0005a368) list_double_graphic_heading_pane_g2

0x60f3,	// (0x0005a379) list_double_graphic_heading_pane_g3_ParamLimits

0x60f3,	// (0x0005a379) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x000638cd) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x000638cd) list_double_graphic_heading_pane_g

0x60ff,	// (0x0005a385) list_double_graphic_heading_pane_t1_ParamLimits

0x60ff,	// (0x0005a385) list_double_graphic_heading_pane_t1

0x6041,	// (0x0005a2c7) list_double_graphic_heading_pane_t2_ParamLimits

0x6041,	// (0x0005a2c7) list_double_graphic_heading_pane_t2

0x0001,

0xf642,	// (0x000638c8) list_double_graphic_heading_pane_t_ParamLimits

0xf642,	// (0x000638c8) list_double_graphic_heading_pane_t

0x6121,	// (0x0005a3a7) list_double_time_pane_g1_ParamLimits

0x6121,	// (0x0005a3a7) list_double_time_pane_g1

0x6132,	// (0x0005a3b8) list_double_time_pane_g2_ParamLimits

0x6132,	// (0x0005a3b8) list_double_time_pane_g2

0x0001,

0xf64e,	// (0x000638d4) list_double_time_pane_g_ParamLimits

0xf64e,	// (0x000638d4) list_double_time_pane_g

0x613e,	// (0x0005a3c4) list_double_time_pane_t1_ParamLimits

0x613e,	// (0x0005a3c4) list_double_time_pane_t1

0x6154,	// (0x0005a3da) list_double_time_pane_t2_ParamLimits

0x6154,	// (0x0005a3da) list_double_time_pane_t2

0x6166,	// (0x0005a3ec) list_double_time_pane_t3_ParamLimits

0x6166,	// (0x0005a3ec) list_double_time_pane_t3

0x6178,	// (0x0005a3fe) list_double_time_pane_t4_ParamLimits

0x6178,	// (0x0005a3fe) list_double_time_pane_t4

0x0003,

0xf653,	// (0x000638d9) list_double_time_pane_t_ParamLimits

0xf653,	// (0x000638d9) list_double_time_pane_t

0x618a,	// (0x0005a410) list_setting_pane_g1_ParamLimits

0x618a,	// (0x0005a410) list_setting_pane_g1

0x3562,	// (0x000577e8) list_setting_pane_g2_ParamLimits

0x3562,	// (0x000577e8) list_setting_pane_g2

0x0001,

0xf65c,	// (0x000638e2) list_setting_pane_g_ParamLimits

0xf65c,	// (0x000638e2) list_setting_pane_g

0x6196,	// (0x0005a41c) list_setting_pane_t1_ParamLimits

0x6196,	// (0x0005a41c) list_setting_pane_t1

0x61b0,	// (0x0005a436) list_setting_pane_t2_ParamLimits

0x61b0,	// (0x0005a436) list_setting_pane_t2

0x0002,

0xf661,	// (0x000638e7) list_setting_pane_t_ParamLimits

0xf661,	// (0x000638e7) list_setting_pane_t

0x61ed,	// (0x0005a473) set_value_pane_cp_ParamLimits

0x61ed,	// (0x0005a473) set_value_pane_cp

0x61f9,	// (0x0005a47f) list_setting_number_pane_g1_ParamLimits

0x61f9,	// (0x0005a47f) list_setting_number_pane_g1

0x6205,	// (0x0005a48b) list_setting_number_pane_g2_ParamLimits

0x6205,	// (0x0005a48b) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x000638ee) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x000638ee) list_setting_number_pane_g

0x6211,	// (0x0005a497) list_setting_number_pane_t1_ParamLimits

0x6211,	// (0x0005a497) list_setting_number_pane_t1

0x622a,	// (0x0005a4b0) list_setting_number_pane_t2_ParamLimits

0x622a,	// (0x0005a4b0) list_setting_number_pane_t2

0x6244,	// (0x0005a4ca) list_setting_number_pane_t3_ParamLimits

0x6244,	// (0x0005a4ca) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x000638f3) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x000638f3) list_setting_number_pane_t

0x61ed,	// (0x0005a473) set_value_pane_ParamLimits

0x61ed,	// (0x0005a473) set_value_pane

0xf16c,	// (0x000633f2) bg_set_opt_pane_ParamLimits

0xf16c,	// (0x000633f2) bg_set_opt_pane

0x356e,	// (0x000577f4) set_value_pane_t1

0xf18d,	// (0x00063413) slider_set_pane_cp3

0x6287,	// (0x0005a50d) volume_small_pane_cp

0xf196,	// (0x0006341c) list_form_gen_pane

0xf19f,	// (0x00063425) scroll_pane_cp8

0x6290,	// (0x0005a516) form_field_data_pane_ParamLimits

0x6290,	// (0x0005a516) form_field_data_pane

0x62aa,	// (0x0005a530) form_field_data_wide_pane_ParamLimits

0x62aa,	// (0x0005a530) form_field_data_wide_pane

0x62cd,	// (0x0005a553) form_field_popup_pane_ParamLimits

0x62cd,	// (0x0005a553) form_field_popup_pane

0x62ed,	// (0x0005a573) form_field_popup_wide_pane_ParamLimits

0x62ed,	// (0x0005a573) form_field_popup_wide_pane

0x358c,	// (0x00057812) form_field_slider_pane_ParamLimits

0x358c,	// (0x00057812) form_field_slider_pane

0x630a,	// (0x0005a590) form_field_slider_wide_pane_ParamLimits

0x630a,	// (0x0005a590) form_field_slider_wide_pane

0xf1b0,	// (0x00063436) data_form_pane

0x6327,	// (0x0005a5ad) form_field_data_pane_t1

0xf1bc,	// (0x00063442) input_focus_pane

0x359f,	// (0x00057825) data_form_wide_pane

0x35bc,	// (0x00057842) form_field_data_wide_pane_t1

0xf0b0,	// (0x00063336) input_focus_pane_cp6

0x633f,	// (0x0005a5c5) form_field_popup_pane_t1

0xf1bc,	// (0x00063442) input_focus_pane_cp7

0xf1ea,	// (0x00063470) list_form_pane

0x35e6,	// (0x0005786c) form_field_popup_wide_pane_t1

0xf1bc,	// (0x00063442) input_focus_pane_cp8

0xf1f6,	// (0x0006347c) list_form_wide_pane

0x635f,	// (0x0005a5e5) form_field_slider_pane_t1_ParamLimits

0x635f,	// (0x0005a5e5) form_field_slider_pane_t1

0x6375,	// (0x0005a5fb) form_field_slider_pane_t2_ParamLimits

0x6375,	// (0x0005a5fb) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00063903) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00063903) form_field_slider_pane_t

0xef26,	// (0x000631ac) input_focus_pane_cp9_ParamLimits

0xef26,	// (0x000631ac) input_focus_pane_cp9

0x638a,	// (0x0005a610) slider_cont_pane_ParamLimits

0x638a,	// (0x0005a610) slider_cont_pane

0xf202,	// (0x00063488) form_field_slider_wide_pane_t1_ParamLimits

0xf202,	// (0x00063488) form_field_slider_wide_pane_t1

0x35fb,	// (0x00057881) form_field_slider_wide_pane_t2_ParamLimits

0x35fb,	// (0x00057881) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00063908) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00063908) form_field_slider_wide_pane_t

0xef26,	// (0x000631ac) input_focus_pane_cp10_ParamLimits

0xef26,	// (0x000631ac) input_focus_pane_cp10

0x639e,	// (0x0005a624) slider_cont_pane_cp1_ParamLimits

0x639e,	// (0x0005a624) slider_cont_pane_cp1

0x63b2,	// (0x0005a638) slider_form_pane_cp

0xf214,	// (0x0006349a) input_focus_pane_g1

0xf21c,	// (0x000634a2) input_focus_pane_g2

0xf224,	// (0x000634aa) input_focus_pane_g3

0xf22c,	// (0x000634b2) input_focus_pane_g4

0xf234,	// (0x000634ba) input_focus_pane_g5

0xf23c,	// (0x000634c2) input_focus_pane_g6

0xf244,	// (0x000634ca) input_focus_pane_g7

0xf24c,	// (0x000634d2) input_focus_pane_g8

0xf254,	// (0x000634da) input_focus_pane_g9

0xeda4,	// (0x0006302a) input_focus_pane_g10

0x0009,

0xf687,	// (0x0006390d) input_focus_pane_g

0x994d,	// (0x0005dbd3) wait_border_pane_g3_copy1

0x63ba,	// (0x0005a640) data_form_pane_t1

0xeda4,	// (0x0006302a) wait_anim_pane_g1_copy1

0x799c,	// (0x0005bc22) data_form_wide_pane_t1

0x63d5,	// (0x0005a65b) list_form_graphic_pane_cp_ParamLimits

0x63d5,	// (0x0005a65b) list_form_graphic_pane_cp

0xa83c,	// (0x0005eac2) slider_form_pane_g1

0xa845,	// (0x0005eacb) slider_form_pane_g2

0x0006,

0xf98a,	// (0x00063c10) slider_form_pane_g

0x63d5,	// (0x0005a65b) list_form_graphic_pane_ParamLimits

0x63d5,	// (0x0005a65b) list_form_graphic_pane

0x63ee,	// (0x0005a674) list_form_graphic_pane_g1

0x63f6,	// (0x0005a67c) list_form_graphic_pane_t1_ParamLimits

0x63f6,	// (0x0005a67c) list_form_graphic_pane_t1

0xedfc,	// (0x00063082) list_highlight_pane_cp5_ParamLimits

0xedfc,	// (0x00063082) list_highlight_pane_cp5

0x640b,	// (0x0005a691) find_pane_g1

0xf25c,	// (0x000634e2) input_find_pane

0x6414,	// (0x0005a69a) input_find_pane_g1_ParamLimits

0x6414,	// (0x0005a69a) input_find_pane_g1

0x6420,	// (0x0005a6a6) input_find_pane_t1_ParamLimits

0x6420,	// (0x0005a6a6) input_find_pane_t1

0x6435,	// (0x0005a6bb) input_find_pane_t2_ParamLimits

0x6435,	// (0x0005a6bb) input_find_pane_t2

0x0001,

0xf69c,	// (0x00063922) input_find_pane_t_ParamLimits

0xf69c,	// (0x00063922) input_find_pane_t

0xf265,	// (0x000634eb) input_focus_pane_cp5_ParamLimits

0xf265,	// (0x000634eb) input_focus_pane_cp5

0xf273,	// (0x000634f9) bg_popup_window_pane_cp2_ParamLimits

0xf273,	// (0x000634f9) bg_popup_window_pane_cp2

0xf280,	// (0x00063506) listscroll_menu_pane_ParamLimits

0xf280,	// (0x00063506) listscroll_menu_pane

0x6456,	// (0x0005a6dc) popup_submenu_window_ParamLimits

0x6456,	// (0x0005a6dc) popup_submenu_window

0xf28c,	// (0x00063512) find_popup_pane_g1

0x647e,	// (0x0005a704) input_popup_find_pane_cp

0xf265,	// (0x000634eb) input_focus_pane_cp4_ParamLimits

0xf265,	// (0x000634eb) input_focus_pane_cp4

0xf294,	// (0x0006351a) input_popup_find_pane_t1_ParamLimits

0xf294,	// (0x0006351a) input_popup_find_pane_t1

0xedae,	// (0x00063034) bg_popup_sub_pane_cp

0xf2c2,	// (0x00063548) listscroll_popup_sub_pane

0xf2ca,	// (0x00063550) list_submenu_pane_ParamLimits

0xf2ca,	// (0x00063550) list_submenu_pane

0xf2db,	// (0x00063561) scroll_pane_cp4

0x6496,	// (0x0005a71c) list_single_popup_submenu_pane_ParamLimits

0x6496,	// (0x0005a71c) list_single_popup_submenu_pane

0x24b6,	// (0x0005673c) list_single_popup_submenu_pane_g1

0x64aa,	// (0x0005a730) list_single_popup_submenu_pane_t1_ParamLimits

0x64aa,	// (0x0005a730) list_single_popup_submenu_pane_t1

0xedfc,	// (0x00063082) bg_active_tab_pane_cp1_ParamLimits

0xedfc,	// (0x00063082) bg_active_tab_pane_cp1

0xf2e3,	// (0x00063569) tabs_2_active_pane_g1

0x64bf,	// (0x0005a745) tabs_2_active_pane_t1

0xedfc,	// (0x00063082) bg_passive_tab_pane_cp1_ParamLimits

0xedfc,	// (0x00063082) bg_passive_tab_pane_cp1

0xf2e3,	// (0x00063569) tabs_2_passive_pane_g1

0x64bf,	// (0x0005a745) tabs_2_passive_pane_t1

0x2276,	// (0x000564fc) bg_active_tab_pane_cp4

0x64d1,	// (0x0005a757) tabs_2_long_active_pane_t1

0x64e4,	// (0x0005a76a) bg_passive_tab_pane_cp4

0x7643,	// (0x0005b8c9) list_single_midp_graphic_pane_g4_ParamLimits

0x2276,	// (0x000564fc) bg_active_tab_pane_cp5

0x64f0,	// (0x0005a776) tabs_3_long_active_pane_t1

0x64e4,	// (0x0005a76a) bg_passive_tab_pane_cp5

0x7643,	// (0x0005b8c9) list_single_midp_graphic_pane_g4

0xedfc,	// (0x00063082) bg_popup_window_pane_cp13_ParamLimits

0xedfc,	// (0x00063082) bg_popup_window_pane_cp13

0xf2eb,	// (0x00063571) listscroll_popup_fast_pane_ParamLimits

0xf2eb,	// (0x00063571) listscroll_popup_fast_pane

0xf2f7,	// (0x0006357d) grid_popup_fast_pane_ParamLimits

0xf2f7,	// (0x0006357d) grid_popup_fast_pane

0xf309,	// (0x0006358f) scroll_pane_cp9_ParamLimits

0xf309,	// (0x0006358f) scroll_pane_cp9

0xc323,	// (0x000605a9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc323,	// (0x000605a9) list_single_graphic_hl_pane_t1_cp2

0xf31c,	// (0x000635a2) input_focus_pane_cp20_ParamLimits

0xf31c,	// (0x000635a2) input_focus_pane_cp20

0xf32a,	// (0x000635b0) query_popup_data_pane_t1_ParamLimits

0xf32a,	// (0x000635b0) query_popup_data_pane_t1

0xf33d,	// (0x000635c3) query_popup_data_pane_t2_ParamLimits

0xf33d,	// (0x000635c3) query_popup_data_pane_t2

0xf383,	// (0x00063609) query_popup_data_pane_t3_ParamLimits

0xf383,	// (0x00063609) query_popup_data_pane_t3

0xf3c4,	// (0x0006364a) query_popup_data_pane_t4_ParamLimits

0xf3c4,	// (0x0006364a) query_popup_data_pane_t4

0xf400,	// (0x00063686) query_popup_data_pane_t5_ParamLimits

0xf400,	// (0x00063686) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00063927) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00063927) query_popup_data_pane_t

0xf214,	// (0x0006349a) bg_set_opt_pane_g1

0xf21c,	// (0x000634a2) bg_set_opt_pane_g2

0xf224,	// (0x000634aa) bg_set_opt_pane_g3

0xf22c,	// (0x000634b2) bg_set_opt_pane_g4

0xf234,	// (0x000634ba) bg_set_opt_pane_g5

0xf23c,	// (0x000634c2) bg_set_opt_pane_g6

0xf244,	// (0x000634ca) bg_set_opt_pane_g7

0xf24c,	// (0x000634d2) bg_set_opt_pane_g8

0xf254,	// (0x000634da) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00063932) bg_set_opt_pane_g

0x6a65,	// (0x0005aceb) control_top_pane_stacon_ParamLimits

0x6a65,	// (0x0005aceb) control_top_pane_stacon

0x6ab8,	// (0x0005ad3e) signal_pane_stacon_ParamLimits

0x6ab8,	// (0x0005ad3e) signal_pane_stacon

0x360d,	// (0x00057893) stacon_top_pane_g1_ParamLimits

0x360d,	// (0x00057893) stacon_top_pane_g1

0x6add,	// (0x0005ad63) title_pane_stacon_ParamLimits

0x6add,	// (0x0005ad63) title_pane_stacon

0x6b07,	// (0x0005ad8d) uni_indicator_pane_stacon_ParamLimits

0x6b07,	// (0x0005ad8d) uni_indicator_pane_stacon

0x6b1c,	// (0x0005ada2) battery_pane_stacon_ParamLimits

0x6b1c,	// (0x0005ada2) battery_pane_stacon

0x6b60,	// (0x0005ade6) control_bottom_pane_stacon_ParamLimits

0x6b60,	// (0x0005ade6) control_bottom_pane_stacon

0x6b83,	// (0x0005ae09) navi_pane_stacon_ParamLimits

0x6b83,	// (0x0005ae09) navi_pane_stacon

0x362f,	// (0x000578b5) stacon_bottom_pane_g1_ParamLimits

0x362f,	// (0x000578b5) stacon_bottom_pane_g1

0x651c,	// (0x0005a7a2) aid_levels_signal_lsc_ParamLimits

0x651c,	// (0x0005a7a2) aid_levels_signal_lsc

0x6532,	// (0x0005a7b8) signal_pane_stacon_g1_ParamLimits

0x6532,	// (0x0005a7b8) signal_pane_stacon_g1

0x6546,	// (0x0005a7cc) signal_pane_stacon_g2_ParamLimits

0x6546,	// (0x0005a7cc) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00063945) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00063945) signal_pane_stacon_g

0x657b,	// (0x0005a801) title_pane_stacon_t1_ParamLimits

0x657b,	// (0x0005a801) title_pane_stacon_t1

0xf444,	// (0x000636ca) uni_indicator_pane_stacon_g1

0xf44e,	// (0x000636d4) uni_indicator_pane_stacon_g2

0xf458,	// (0x000636de) uni_indicator_pane_stacon_g3

0xf462,	// (0x000636e8) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00063951) uni_indicator_pane_stacon_g

0x65a0,	// (0x0005a826) control_top_pane_stacon_g1

0x65a8,	// (0x0005a82e) control_top_pane_stacon_t1_ParamLimits

0x65a8,	// (0x0005a82e) control_top_pane_stacon_t1

0x65df,	// (0x0005a865) aid_levels_battery_lsc_ParamLimits

0x65df,	// (0x0005a865) aid_levels_battery_lsc

0x65f6,	// (0x0005a87c) battery_pane_stacon_g1_ParamLimits

0x65f6,	// (0x0005a87c) battery_pane_stacon_g1

0x6609,	// (0x0005a88f) battery_pane_stacon_g2_ParamLimits

0x6609,	// (0x0005a88f) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0006395a) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0006395a) battery_pane_stacon_g

0x6647,	// (0x0005a8cd) navi_icon_pane_stacon

0x665b,	// (0x0005a8e1) navi_navi_pane_stacon

0x6647,	// (0x0005a8cd) navi_text_pane_stacon

0x65a0,	// (0x0005a826) control_bottom_pane_stacon_g1

0x666f,	// (0x0005a8f5) control_bottom_pane_stacon_t1_ParamLimits

0x666f,	// (0x0005a8f5) control_bottom_pane_stacon_t1

0x66a6,	// (0x0005a92c) grid_app_pane_ParamLimits

0x66a6,	// (0x0005a92c) grid_app_pane

0x66c8,	// (0x0005a94e) scroll_pane_cp15_ParamLimits

0x66c8,	// (0x0005a94e) scroll_pane_cp15

0x66db,	// (0x0005a961) cell_app_pane_ParamLimits

0x66db,	// (0x0005a961) cell_app_pane

0x6703,	// (0x0005a989) cell_app_pane_g1_ParamLimits

0x6703,	// (0x0005a989) cell_app_pane_g1

0xf486,	// (0x0006370c) cell_app_pane_g2_ParamLimits

0xf486,	// (0x0006370c) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0006395f) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0006395f) cell_app_pane_g

0x6727,	// (0x0005a9ad) cell_app_pane_t1_ParamLimits

0x6727,	// (0x0005a9ad) cell_app_pane_t1

0xf492,	// (0x00063718) grid_highlight_pane_ParamLimits

0xf492,	// (0x00063718) grid_highlight_pane

0xf214,	// (0x0006349a) cell_highlight_pane_g1

0xf21c,	// (0x000634a2) cell_highlight_pane_g2

0xf224,	// (0x000634aa) cell_highlight_pane_g3

0xf22c,	// (0x000634b2) cell_highlight_pane_g4

0xf234,	// (0x000634ba) cell_highlight_pane_g5

0xf23c,	// (0x000634c2) cell_highlight_pane_g6

0xf244,	// (0x000634ca) cell_highlight_pane_g7

0xf24c,	// (0x000634d2) cell_highlight_pane_g8

0xf254,	// (0x000634da) cell_highlight_pane_g9

0xeda4,	// (0x0006302a) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0006390d) cell_highlight_pane_g

0xf4a3,	// (0x00063729) bg_scroll_pane

0x6751,	// (0x0005a9d7) scroll_handle_pane

0xf4ea,	// (0x00063770) scroll_bg_pane_g1

0xf4ff,	// (0x00063785) scroll_bg_pane_g2

0xf517,	// (0x0006379d) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00063964) scroll_bg_pane_g

0x677a,	// (0x0005aa00) scroll_handle_focus_pane_ParamLimits

0x677a,	// (0x0005aa00) scroll_handle_focus_pane

0xf4ea,	// (0x00063770) scroll_handle_pane_g1

0xf52c,	// (0x000637b2) scroll_handle_pane_g2

0xf517,	// (0x0006379d) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0006396b) scroll_handle_pane_g

0xf265,	// (0x000634eb) bg_popup_sub_pane_cp21_ParamLimits

0xf265,	// (0x000634eb) bg_popup_sub_pane_cp21

0x6787,	// (0x0005aa0d) popup_fep_japan_predictive_window_t1_ParamLimits

0x6787,	// (0x0005aa0d) popup_fep_japan_predictive_window_t1

0x67a1,	// (0x0005aa27) popup_fep_japan_predictive_window_t2_ParamLimits

0x67a1,	// (0x0005aa27) popup_fep_japan_predictive_window_t2

0x67d4,	// (0x0005aa5a) popup_fep_japan_predictive_window_t3_ParamLimits

0x67d4,	// (0x0005aa5a) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00063972) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00063972) popup_fep_japan_predictive_window_t

0xedae,	// (0x00063034) bg_popup_sub_pane_cp23

0x2df2,	// (0x00057078) listscroll_japin_cand_pane

0xf540,	// (0x000637c6) popup_fep_japan_candidate_window_t1

0x12de,	// (0x00055564) candidate_pane_ParamLimits

0x12de,	// (0x00055564) candidate_pane

0x680b,	// (0x0005aa91) scroll_pane_cp30

0x12f0,	// (0x00055576) list_single_popup_jap_candidate_pane_ParamLimits

0x12f0,	// (0x00055576) list_single_popup_jap_candidate_pane

0xedae,	// (0x00063034) list_highlight_pane_cp30

0x1305,	// (0x0005558b) list_single_popup_jap_candidate_pane_t1

0x1314,	// (0x0005559a) level_1_signal

0x1321,	// (0x000555a7) level_2_signal

0x132e,	// (0x000555b4) level_3_signal

0x133b,	// (0x000555c1) level_4_signal

0x1348,	// (0x000555ce) level_5_signal

0x1355,	// (0x000555db) level_6_signal

0x1362,	// (0x000555e8) level_7_signal

0x1314,	// (0x0005559a) level_1_battery

0x1321,	// (0x000555a7) level_2_battery

0x132e,	// (0x000555b4) level_3_battery

0x133b,	// (0x000555c1) level_4_battery

0x1348,	// (0x000555ce) level_5_battery

0x1355,	// (0x000555db) level_6_battery

0x1362,	// (0x000555e8) level_7_battery

0x1387,	// (0x0005560d) list_menu_pane_ParamLimits

0x1387,	// (0x0005560d) list_menu_pane

0x139d,	// (0x00055623) scroll_pane_cp25_ParamLimits

0x139d,	// (0x00055623) scroll_pane_cp25

0x13b6,	// (0x0005563c) list_double2_graphic_pane_cp2_ParamLimits

0x13b6,	// (0x0005563c) list_double2_graphic_pane_cp2

0x13b6,	// (0x0005563c) list_double2_large_graphic_pane_cp2_ParamLimits

0x13b6,	// (0x0005563c) list_double2_large_graphic_pane_cp2

0x13b6,	// (0x0005563c) list_double2_pane_cp2_ParamLimits

0x13b6,	// (0x0005563c) list_double2_pane_cp2

0x13b6,	// (0x0005563c) list_double_graphic_pane_cp2_ParamLimits

0x13b6,	// (0x0005563c) list_double_graphic_pane_cp2

0x13b6,	// (0x0005563c) list_double_large_graphic_pane_cp2_ParamLimits

0x13b6,	// (0x0005563c) list_double_large_graphic_pane_cp2

0x13b6,	// (0x0005563c) list_double_number_pane_cp2_ParamLimits

0x13b6,	// (0x0005563c) list_double_number_pane_cp2

0x13b6,	// (0x0005563c) list_double_pane_cp2_ParamLimits

0x13b6,	// (0x0005563c) list_double_pane_cp2

0x6846,	// (0x0005aacc) list_single_2graphic_pane_cp2_ParamLimits

0x6846,	// (0x0005aacc) list_single_2graphic_pane_cp2

0x6846,	// (0x0005aacc) list_single_graphic_heading_pane_cp2_ParamLimits

0x6846,	// (0x0005aacc) list_single_graphic_heading_pane_cp2

0x6846,	// (0x0005aacc) list_single_graphic_pane_cp2_ParamLimits

0x6846,	// (0x0005aacc) list_single_graphic_pane_cp2

0x6846,	// (0x0005aacc) list_single_heading_pane_cp2_ParamLimits

0x6846,	// (0x0005aacc) list_single_heading_pane_cp2

0x13c6,	// (0x0005564c) list_single_large_graphic_pane_cp2_ParamLimits

0x13c6,	// (0x0005564c) list_single_large_graphic_pane_cp2

0x6846,	// (0x0005aacc) list_single_number_heading_pane_cp2_ParamLimits

0x6846,	// (0x0005aacc) list_single_number_heading_pane_cp2

0x6846,	// (0x0005aacc) list_single_number_pane_cp2_ParamLimits

0x6846,	// (0x0005aacc) list_single_number_pane_cp2

0x6846,	// (0x0005aacc) list_single_pane_cp2_ParamLimits

0x6846,	// (0x0005aacc) list_single_pane_cp2

0x13e0,	// (0x00055666) bg_popup_sub_pane_cp22

0x691e,	// (0x0005aba4) popup_side_volume_key_window_g1

0x6942,	// (0x0005abc8) popup_side_volume_key_window_t1

0x695e,	// (0x0005abe4) volume_small_pane_cp1

0xef26,	// (0x000631ac) bg_popup_sub_pane_cp24_ParamLimits

0xef26,	// (0x000631ac) bg_popup_sub_pane_cp24

0x13f6,	// (0x0005567c) fep_china_uni_candidate_pane_ParamLimits

0x13f6,	// (0x0005567c) fep_china_uni_candidate_pane

0x140a,	// (0x00055690) fep_china_uni_entry_pane

0x141a,	// (0x000556a0) popup_fep_china_uni_window_g1

0x6966,	// (0x0005abec) fep_china_uni_entry_pane_g1

0x696e,	// (0x0005abf4) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x000639a3) fep_china_uni_entry_pane_g

0x1436,	// (0x000556bc) fep_entry_item_pane

0x1440,	// (0x000556c6) fep_candidate_item_pane

0x6976,	// (0x0005abfc) fep_china_uni_candidate_pane_g1

0x1448,	// (0x000556ce) fep_china_uni_candidate_pane_g2

0x1450,	// (0x000556d6) fep_china_uni_candidate_pane_g3

0x697e,	// (0x0005ac04) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x000639a8) fep_china_uni_candidate_pane_g

0xeda4,	// (0x0006302a) fep_entry_item_pane_g1

0x1458,	// (0x000556de) fep_entry_item_pane_t1_ParamLimits

0x1458,	// (0x000556de) fep_entry_item_pane_t1

0x146e,	// (0x000556f4) fep_candidate_item_pane_t1_ParamLimits

0x146e,	// (0x000556f4) fep_candidate_item_pane_t1

0x1483,	// (0x00055709) fep_candidate_item_pane_t2_ParamLimits

0x1483,	// (0x00055709) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x000639b1) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x000639b1) fep_candidate_item_pane_t

0xedfc,	// (0x00063082) list_highlight_pane_cp31_ParamLimits

0xedfc,	// (0x00063082) list_highlight_pane_cp31

0x1495,	// (0x0005571b) level_1_signal_lsc

0x149e,	// (0x00055724) level_2_signal_lsc

0x14a7,	// (0x0005572d) level_3_signal_lsc

0x14b0,	// (0x00055736) level_4_signal_lsc

0x14b9,	// (0x0005573f) level_5_signal_lsc

0x14c2,	// (0x00055748) level_6_signal_lsc

0x14cb,	// (0x00055751) level_7_signal_lsc

0x14cb,	// (0x00055751) level_1_battery_lsc

0x14d4,	// (0x0005575a) level_2_battery_lsc

0x14dd,	// (0x00055763) level_3_battery_lsc

0x14e6,	// (0x0005576c) level_4_battery_lsc

0x14ef,	// (0x00055775) level_5_battery_lsc

0x14f8,	// (0x0005577e) level_6_battery_lsc

0x1495,	// (0x0005571b) level_7_battery_lsc

0x1501,	// (0x00055787) scroll_handle_focus_pane_g1

0x150a,	// (0x00055790) scroll_handle_focus_pane_g2

0x1513,	// (0x00055799) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x000639b6) scroll_handle_focus_pane_g

0x6986,	// (0x0005ac0c) list_single_2graphic_pane_g1_ParamLimits

0x6986,	// (0x0005ac0c) list_single_2graphic_pane_g1

0x5ee6,	// (0x0005a16c) list_single_2graphic_pane_g2_ParamLimits

0x5ee6,	// (0x0005a16c) list_single_2graphic_pane_g2

0x5e39,	// (0x0005a0bf) list_single_2graphic_pane_g3_ParamLimits

0x5e39,	// (0x0005a0bf) list_single_2graphic_pane_g3

0x6992,	// (0x0005ac18) list_single_2graphic_pane_g4_ParamLimits

0x6992,	// (0x0005ac18) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x000639bd) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x000639bd) list_single_2graphic_pane_g

0x699e,	// (0x0005ac24) list_single_2graphic_pane_t1_ParamLimits

0x699e,	// (0x0005ac24) list_single_2graphic_pane_t1

0x69cc,	// (0x0005ac52) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x69cc,	// (0x0005ac52) list_double2_graphic_large_graphic_pane_g1

0x60d1,	// (0x0005a357) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x60d1,	// (0x0005a357) list_double2_graphic_large_graphic_pane_g2

0x4844,	// (0x00058aca) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4844,	// (0x00058aca) list_double2_graphic_large_graphic_pane_g3

0x69dc,	// (0x0005ac62) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x69dc,	// (0x0005ac62) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x000639c6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x000639c6) list_double2_graphic_large_graphic_pane_g

0x69e8,	// (0x0005ac6e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x69e8,	// (0x0005ac6e) list_double2_graphic_large_graphic_pane_t1

0x69fe,	// (0x0005ac84) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x69fe,	// (0x0005ac84) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x000639cf) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x000639cf) list_double2_graphic_large_graphic_pane_t

0x6be2,	// (0x0005ae68) popup_fast_swap_window_ParamLimits

0x6be2,	// (0x0005ae68) popup_fast_swap_window

0x6bfe,	// (0x0005ae84) popup_side_volume_key_window

0x36ba,	// (0x00057940) stacon_top_pane

0x36c4,	// (0x0005794a) status_pane_ParamLimits

0x36c4,	// (0x0005794a) status_pane

0x6c18,	// (0x0005ae9e) status_small_pane

0xedae,	// (0x00063034) control_pane

0xedae,	// (0x00063034) stacon_bottom_pane

0xf19f,	// (0x00063425) scroll_pane_cp121

0xf196,	// (0x0006341c) set_content_pane

0x6a10,	// (0x0005ac96) bg_active_tab_pane_g1_cp1

0x6a19,	// (0x0005ac9f) bg_active_tab_pane_g2_cp1

0x6a22,	// (0x0005aca8) bg_active_tab_pane_g3_cp1

0x6a10,	// (0x0005ac96) bg_passive_tab_pane_g1_cp1

0x6a19,	// (0x0005ac9f) bg_passive_tab_pane_g2_cp1

0x6a22,	// (0x0005aca8) bg_passive_tab_pane_g3_cp1

0x6a2b,	// (0x0005acb1) bg_active_tab_pane_g1_cp2

0x6a19,	// (0x0005ac9f) bg_active_tab_pane_g2_cp2

0x6a34,	// (0x0005acba) bg_active_tab_pane_g3_cp2

0x6a2b,	// (0x0005acb1) bg_passive_tab_pane_g1_cp2

0x6a19,	// (0x0005ac9f) bg_passive_tab_pane_g2_cp2

0x6a34,	// (0x0005acba) bg_passive_tab_pane_g3_cp2

0x6a3d,	// (0x0005acc3) bg_active_tab_pane_g1_cp3

0x6a19,	// (0x0005ac9f) bg_active_tab_pane_g2_cp3

0x6a46,	// (0x0005accc) bg_active_tab_pane_g3_cp3

0x6a3d,	// (0x0005acc3) bg_passive_tab_pane_g1_cp3

0x6a19,	// (0x0005ac9f) bg_passive_tab_pane_g2_cp3

0x6a46,	// (0x0005accc) bg_passive_tab_pane_g3_cp3

0x6a4f,	// (0x0005acd5) bg_active_tab_pane_g1_cp4

0x6a19,	// (0x0005ac9f) bg_active_tab_pane_g2_cp4

0x6a5a,	// (0x0005ace0) bg_active_tab_pane_g3_cp4

0x6a4f,	// (0x0005acd5) bg_passive_tab_pane_g1_cp4

0x6a19,	// (0x0005ac9f) bg_passive_tab_pane_g2_cp4

0x6a5a,	// (0x0005ace0) bg_passive_tab_pane_g3_cp4

0x6ba6,	// (0x0005ae2c) bg_active_tab_pane_g1_cp5

0x6a19,	// (0x0005ac9f) bg_active_tab_pane_g2_cp5

0x6baf,	// (0x0005ae35) bg_active_tab_pane_g3_cp5

0x6ba6,	// (0x0005ae2c) bg_passive_tab_pane_g1_cp5

0x6a19,	// (0x0005ac9f) bg_passive_tab_pane_g2_cp5

0x6baf,	// (0x0005ae35) bg_passive_tab_pane_g3_cp5

0x6bb8,	// (0x0005ae3e) list_set_graphic_pane_ParamLimits

0x6bb8,	// (0x0005ae3e) list_set_graphic_pane

0xedae,	// (0x00063034) bg_set_opt_pane_cp4

0x364b,	// (0x000578d1) list_set_graphic_pane_g1_ParamLimits

0x364b,	// (0x000578d1) list_set_graphic_pane_g1

0x3657,	// (0x000578dd) list_set_graphic_pane_g2_ParamLimits

0x3657,	// (0x000578dd) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x000639d4) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x000639d4) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x00063d6c) volume_small_pane_cp_g

0x6bd6,	// (0x0005ae5c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6bd6,	// (0x0005ae5c) list_double2_large_graphic_pane_g1_cp2

0x3679,	// (0x000578ff) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3679,	// (0x000578ff) list_double2_large_graphic_pane_g2_cp2

0x368a,	// (0x00057910) list_double2_large_graphic_pane_g3_cp2

0x3692,	// (0x00057918) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3692,	// (0x00057918) list_double2_large_graphic_pane_t1_cp2

0x36a8,	// (0x0005792e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x36a8,	// (0x0005792e) list_double2_large_graphic_pane_t2_cp2

0xa3fe,	// (0x0005e684) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa3fe,	// (0x0005e684) list_double_large_graphic_pane_g1_cp2

0xa40f,	// (0x0005e695) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa40f,	// (0x0005e695) list_double_large_graphic_pane_g2_cp2

0x37d4,	// (0x00057a5a) list_double_large_graphic_pane_g3_cp2

0xa420,	// (0x0005e6a6) list_double_large_graphic_pane_g4_cp

0xa428,	// (0x0005e6ae) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa428,	// (0x0005e6ae) list_double_large_graphic_pane_t1_cp2

0xa43f,	// (0x0005e6c5) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa43f,	// (0x0005e6c5) list_double_large_graphic_pane_t2_cp2

0x36d2,	// (0x00057958) list_double2_graphic_pane_g1_cp2_ParamLimits

0x36d2,	// (0x00057958) list_double2_graphic_pane_g1_cp2

0x36e0,	// (0x00057966) list_double2_graphic_pane_g2_cp2_ParamLimits

0x36e0,	// (0x00057966) list_double2_graphic_pane_g2_cp2

0x36f1,	// (0x00057977) list_double2_graphic_pane_g3_cp2

0x36fb,	// (0x00057981) list_double2_graphic_pane_t1_cp2_ParamLimits

0x36fb,	// (0x00057981) list_double2_graphic_pane_t1_cp2

0x3711,	// (0x00057997) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3711,	// (0x00057997) list_double2_graphic_pane_t2_cp2

0x151c,	// (0x000557a2) list_single_number_heading_pane_g1_cp2_ParamLimits

0x151c,	// (0x000557a2) list_single_number_heading_pane_g1_cp2

0x3723,	// (0x000579a9) list_single_number_heading_pane_g2_cp2

0x372b,	// (0x000579b1) list_single_number_heading_pane_t1_cp2_ParamLimits

0x372b,	// (0x000579b1) list_single_number_heading_pane_t1_cp2

0x3741,	// (0x000579c7) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3741,	// (0x000579c7) list_single_number_heading_pane_t2_cp2

0x3753,	// (0x000579d9) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3753,	// (0x000579d9) list_single_number_heading_pane_t3_cp2

0x151c,	// (0x000557a2) list_single_heading_pane_g1_cp2_ParamLimits

0x151c,	// (0x000557a2) list_single_heading_pane_g1_cp2

0x3723,	// (0x000579a9) list_single_heading_pane_g2_cp2

0x372b,	// (0x000579b1) list_single_heading_pane_t1_cp2_ParamLimits

0x372b,	// (0x000579b1) list_single_heading_pane_t1_cp2

0xa208,	// (0x0005e48e) list_single_heading_pane_t2_cp2_ParamLimits

0xa208,	// (0x0005e48e) list_single_heading_pane_t2_cp2

0xa150,	// (0x0005e3d6) list_double_graphic_pane_g1_cp2_ParamLimits

0xa150,	// (0x0005e3d6) list_double_graphic_pane_g1_cp2

0xa15c,	// (0x0005e3e2) list_double_graphic_pane_g2_cp2_ParamLimits

0xa15c,	// (0x0005e3e2) list_double_graphic_pane_g2_cp2

0xa16b,	// (0x0005e3f1) list_double_graphic_pane_g3_cp2

0xa173,	// (0x0005e3f9) list_double_graphic_pane_t1_cp2_ParamLimits

0xa173,	// (0x0005e3f9) list_double_graphic_pane_t1_cp2

0xa189,	// (0x0005e40f) list_double_graphic_pane_t2_cp2_ParamLimits

0xa189,	// (0x0005e40f) list_double_graphic_pane_t2_cp2

0x37c8,	// (0x00057a4e) list_double_number_pane_g1_cp2_ParamLimits

0x37c8,	// (0x00057a4e) list_double_number_pane_g1_cp2

0x37d4,	// (0x00057a5a) list_double_number_pane_g2_cp2

0xa114,	// (0x0005e39a) list_double_number_pane_t1_cp2_ParamLimits

0xa114,	// (0x0005e39a) list_double_number_pane_t1_cp2

0xa128,	// (0x0005e3ae) list_double_number_pane_t2_cp2_ParamLimits

0xa128,	// (0x0005e3ae) list_double_number_pane_t2_cp2

0xa13e,	// (0x0005e3c4) list_double_number_pane_t3_cp2_ParamLimits

0xa13e,	// (0x0005e3c4) list_double_number_pane_t3_cp2

0x9ffd,	// (0x0005e283) list_single_graphic_pane_g1_cp2_ParamLimits

0x9ffd,	// (0x0005e283) list_single_graphic_pane_g1_cp2

0x3824,	// (0x00057aaa) list_single_graphic_pane_g2_cp2_ParamLimits

0x3824,	// (0x00057aaa) list_single_graphic_pane_g2_cp2

0x3830,	// (0x00057ab6) list_single_graphic_pane_g3_cp2

0x9fd3,	// (0x0005e259) list_single_graphic_pane_t1_cp2_ParamLimits

0x9fd3,	// (0x0005e259) list_single_graphic_pane_t1_cp2

0x3824,	// (0x00057aaa) list_single_number_pane_g1_cp2_ParamLimits

0x3824,	// (0x00057aaa) list_single_number_pane_g1_cp2

0x3830,	// (0x00057ab6) list_single_number_pane_g2_cp2

0x9fd3,	// (0x0005e259) list_single_number_pane_t1_cp2_ParamLimits

0x9fd3,	// (0x0005e259) list_single_number_pane_t1_cp2

0x9fe9,	// (0x0005e26f) list_single_number_pane_t2_cp2_ParamLimits

0x9fe9,	// (0x0005e26f) list_single_number_pane_t2_cp2

0x3679,	// (0x000578ff) list_double2_pane_g1_cp2_ParamLimits

0x3679,	// (0x000578ff) list_double2_pane_g1_cp2

0x368a,	// (0x00057910) list_double2_pane_g2_cp2

0x37a0,	// (0x00057a26) list_double2_pane_t1_cp2_ParamLimits

0x37a0,	// (0x00057a26) list_double2_pane_t1_cp2

0x37b6,	// (0x00057a3c) list_double2_pane_t2_cp2_ParamLimits

0x37b6,	// (0x00057a3c) list_double2_pane_t2_cp2

0x37c8,	// (0x00057a4e) list_double_pane_g1_cp2_ParamLimits

0x37c8,	// (0x00057a4e) list_double_pane_g1_cp2

0x37d4,	// (0x00057a5a) list_double_pane_g2_cp2

0x37dc,	// (0x00057a62) list_double_pane_t1_cp2_ParamLimits

0x37dc,	// (0x00057a62) list_double_pane_t1_cp2

0x37f2,	// (0x00057a78) list_double_pane_t2_cp2_ParamLimits

0x37f2,	// (0x00057a78) list_double_pane_t2_cp2

0x6c23,	// (0x0005aea9) list_single_pane_cp2_g3

0x3824,	// (0x00057aaa) list_single_pane_g1_cp2_ParamLimits

0x3824,	// (0x00057aaa) list_single_pane_g1_cp2

0x3830,	// (0x00057ab6) list_single_pane_g2_cp2

0x3838,	// (0x00057abe) list_single_pane_t1_cp2_ParamLimits

0x3838,	// (0x00057abe) list_single_pane_t1_cp2

0x6c2b,	// (0x0005aeb1) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6c2b,	// (0x0005aeb1) list_single_large_graphic_pane_g1_cp2

0x3850,	// (0x00057ad6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3850,	// (0x00057ad6) list_single_large_graphic_pane_g2_cp2

0x385c,	// (0x00057ae2) list_single_large_graphic_pane_g3_cp2

0x6c37,	// (0x0005aebd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x6c37,	// (0x0005aebd) list_single_large_graphic_pane_g4_cp1

0x3864,	// (0x00057aea) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3864,	// (0x00057aea) list_single_large_graphic_pane_t1_cp2

0x9f9f,	// (0x0005e225) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9f9f,	// (0x0005e225) list_single_graphic_heading_pane_g1_cp2

0x9f6c,	// (0x0005e1f2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9f6c,	// (0x0005e1f2) list_single_graphic_heading_pane_g4_cp2

0x3830,	// (0x00057ab6) list_single_graphic_heading_pane_g5_cp2

0x9fab,	// (0x0005e231) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9fab,	// (0x0005e231) list_single_graphic_heading_pane_t1_cp2

0x9fc1,	// (0x0005e247) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9fc1,	// (0x0005e247) list_single_graphic_heading_pane_t2_cp2

0x9f60,	// (0x0005e1e6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9f60,	// (0x0005e1e6) list_single_2graphic_pane_g1_cp2

0x9f6c,	// (0x0005e1f2) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9f6c,	// (0x0005e1f2) list_single_2graphic_pane_g2_cp2

0x3830,	// (0x00057ab6) list_single_2graphic_pane_g3_cp2

0x9f7d,	// (0x0005e203) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9f7d,	// (0x0005e203) list_single_2graphic_pane_g4_cp2

0x9f89,	// (0x0005e20f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9f89,	// (0x0005e20f) list_single_2graphic_pane_t1_cp2

0xeda4,	// (0x0006302a) list_highlight_pane_g10_cp1

0x9b48,	// (0x0005ddce) list_highlight_pane_g1_cp1

0x9b50,	// (0x0005ddd6) list_highlight_pane_g2_cp1

0x9b58,	// (0x0005ddde) list_highlight_pane_g3_cp1

0x9b60,	// (0x0005dde6) list_highlight_pane_g4_cp1

0x9b68,	// (0x0005ddee) list_highlight_pane_g5_cp1

0x9b70,	// (0x0005ddf6) list_highlight_pane_g6_cp1

0x9b78,	// (0x0005ddfe) list_highlight_pane_g7_cp1

0x9b80,	// (0x0005de06) list_highlight_pane_g8_cp1

0x9b88,	// (0x0005de0e) list_highlight_pane_g9_cp1

0x9a70,	// (0x0005dcf6) form_field_slider_pane_t3

0x9a7e,	// (0x0005dd04) form_field_slider_pane_t4

0x9a8c,	// (0x0005dd12) slider_form_pane_ParamLimits

0x9a8c,	// (0x0005dd12) slider_form_pane

0xedae,	// (0x00063034) control_abbreviations

0xedae,	// (0x00063034) control_conventions

0xedae,	// (0x00063034) control_definitions

0xedae,	// (0x00063034) format_table_attribute

0xa252,	// (0x0005e4d8) bg_popup_preview_window_pane_g9

0xedae,	// (0x00063034) format_table_data2

0xedae,	// (0x00063034) format_table_data3

0xedae,	// (0x00063034) format_table_data_example

0x0008,

0xedae,	// (0x00063034) intro_purpose

0xf8ea,	// (0x00063b70) bg_popup_preview_window_pane_g

0xedae,	// (0x00063034) texts_category

0xedae,	// (0x00063034) texts_graphics

0x387a,	// (0x00057b00) text_digital

0x3889,	// (0x00057b0f) text_primary

0x3898,	// (0x00057b1e) text_primary_small

0x38a7,	// (0x00057b2d) text_secondary

0x38b6,	// (0x00057b3c) text_title

0xa9e0,	// (0x0005ec66) bg_passive_tab_pane_g1_cp3_srt

0x6a19,	// (0x0005ac9f) bg_passive_tab_pane_g2_cp3_srt

0xa9e9,	// (0x0005ec6f) bg_passive_tab_pane_g3_cp3_srt

0xedfc,	// (0x00063082) bg_active_tab_pane_cp3_srt_ParamLimits

0xedfc,	// (0x00063082) bg_active_tab_pane_cp3_srt

0xa9f2,	// (0x0005ec78) tabs_4_active_pane_srt_g1

0xa9fa,	// (0x0005ec80) tabs_4_active_pane_srt_t1_ParamLimits

0xa9fa,	// (0x0005ec80) tabs_4_active_pane_srt_t1

0xa9e0,	// (0x0005ec66) bg_active_tab_pane_g1_cp3_copy1

0x6a19,	// (0x0005ac9f) bg_active_tab_pane_g2_cp3_copy1

0xa9e9,	// (0x0005ec6f) bg_active_tab_pane_g3_cp3_copy1

0xedfc,	// (0x00063082) tabs_2_long_active_pane_srt_ParamLimits

0xedfc,	// (0x00063082) tabs_2_long_active_pane_srt

0xedfc,	// (0x00063082) tabs_2_long_passive_pane_srt_ParamLimits

0xedfc,	// (0x00063082) tabs_2_long_passive_pane_srt

0x64e4,	// (0x0005a76a) bg_passive_tab_pane_cp4_srt_ParamLimits

0x64e4,	// (0x0005a76a) bg_passive_tab_pane_cp4_srt

0xa673,	// (0x0005e8f9) bg_passive_tab_pane_g1_cp4_srt

0x6a19,	// (0x0005ac9f) bg_passive_tab_pane_g2_cp4_srt

0xa67c,	// (0x0005e902) bg_passive_tab_pane_g3_cp4_srt

0x2276,	// (0x000564fc) bg_active_tab_pane_cp4_srt_ParamLimits

0x2276,	// (0x000564fc) bg_active_tab_pane_cp4_srt

0xa685,	// (0x0005e90b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa685,	// (0x0005e90b) tabs_2_long_active_pane_srt_t1

0xa673,	// (0x0005e8f9) bg_active_tab_pane_g1_cp4_srt

0x6a19,	// (0x0005ac9f) bg_active_tab_pane_g2_cp4_srt

0xa67c,	// (0x0005e902) bg_active_tab_pane_g3_cp4_srt

0xef26,	// (0x000631ac) tabs_3_long_active_pane_srt_ParamLimits

0xef26,	// (0x000631ac) tabs_3_long_active_pane_srt

0xef26,	// (0x000631ac) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xef26,	// (0x000631ac) tabs_3_long_passive_pane_cp_srt

0xef26,	// (0x000631ac) tabs_3_long_passive_pane_srt_ParamLimits

0xef26,	// (0x000631ac) tabs_3_long_passive_pane_srt

0x64e4,	// (0x0005a76a) bg_passive_tab_pane_cp5_srt_ParamLimits

0x64e4,	// (0x0005a76a) bg_passive_tab_pane_cp5_srt

0x6ba6,	// (0x0005ae2c) bg_passive_tab_pane_g1_cp5_srt

0x6a19,	// (0x0005ac9f) bg_passive_tab_pane_g2_cp5_srt

0x6baf,	// (0x0005ae35) bg_passive_tab_pane_g3_cp5_srt

0x2276,	// (0x000564fc) bg_active_tab_pane_cp5_srt_ParamLimits

0x2276,	// (0x000564fc) bg_active_tab_pane_cp5_srt

0xa661,	// (0x0005e8e7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa661,	// (0x0005e8e7) tabs_3_long_active_pane_srt_t1

0x6ba6,	// (0x0005ae2c) bg_active_tab_pane_g1_cp5_srt

0x6a19,	// (0x0005ac9f) bg_active_tab_pane_g2_cp5_srt

0x6baf,	// (0x0005ae35) bg_active_tab_pane_g3_cp5_srt

0xa653,	// (0x0005e8d9) navi_text_pane_srt_t1

0xa64b,	// (0x0005e8d1) navi_icon_pane_srt_g1

0x8c8c,	// (0x0005cf12) midp_editing_number_pane_srt

0x38c5,	// (0x00057b4b) midp_ticker_pane_srt

0x8c94,	// (0x0005cf1a) midp_ticker_pane_srt_g1

0x8c9c,	// (0x0005cf22) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x000639f3) midp_ticker_pane_srt_g

0x8ca4,	// (0x0005cf2a) midp_ticker_pane_srt_t1

0xa63c,	// (0x0005e8c2) midp_editing_number_pane_t1_copy1

0x6c51,	// (0x0005aed7) listscroll_midp_pane

0x6c51,	// (0x0005aed7) midp_form_pane

0x6cc3,	// (0x0005af49) midp_info_popup_window_ParamLimits

0x6cc3,	// (0x0005af49) midp_info_popup_window

0xf265,	// (0x000634eb) bg_popup_sub_pane_cp50_ParamLimits

0xf265,	// (0x000634eb) bg_popup_sub_pane_cp50

0x9784,	// (0x0005da0a) listscroll_midp_info_pane_ParamLimits

0x9784,	// (0x0005da0a) listscroll_midp_info_pane

0x9764,	// (0x0005d9ea) listscroll_form_midp_pane_ParamLimits

0x9764,	// (0x0005d9ea) listscroll_form_midp_pane

0x9770,	// (0x0005d9f6) scroll_bar_cp050

0x9744,	// (0x0005d9ca) list_midp_pane

0xb57e,	// (0x0005f804) signal_pane_g2_cp

0x967e,	// (0x0005d904) listscroll_midp_info_pane_t1_ParamLimits

0x967e,	// (0x0005d904) listscroll_midp_info_pane_t1

0x9696,	// (0x0005d91c) listscroll_midp_info_pane_t2_ParamLimits

0x9696,	// (0x0005d91c) listscroll_midp_info_pane_t2

0x96d4,	// (0x0005d95a) listscroll_midp_info_pane_t3_ParamLimits

0x96d4,	// (0x0005d95a) listscroll_midp_info_pane_t3

0x970e,	// (0x0005d994) listscroll_midp_info_pane_t4_ParamLimits

0x970e,	// (0x0005d994) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00063aab) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00063aab) listscroll_midp_info_pane_t

0xf2db,	// (0x00063561) scroll_pane_cp21

0x961e,	// (0x0005d8a4) form_midp_field_choice_group_pane

0x9627,	// (0x0005d8ad) form_midp_field_text_pane

0x9664,	// (0x0005d8ea) form_midp_field_time_pane

0x966c,	// (0x0005d8f2) form_midp_gauge_slider_pane

0x9675,	// (0x0005d8fb) form_midp_gauge_wait_pane

0xedae,	// (0x00063034) form_midp_image_pane

0x772a,	// (0x0005b9b0) list_single_midp_pane_ParamLimits

0x772a,	// (0x0005b9b0) list_single_midp_pane

0x95d3,	// (0x0005d859) form_midp_field_text_pane_t1

0x939d,	// (0x0005d623) input_focus_pane_cp050

0x960d,	// (0x0005d893) list_midp_form_text_pane

0x95a2,	// (0x0005d828) form_midp_field_choice_group_pane_t1

0x95b0,	// (0x0005d836) input_focus_pane_cp051

0x95c4,	// (0x0005d84a) list_midp_choice_pane

0xedae,	// (0x00063034) status_idle_pane

0x9586,	// (0x0005d80c) form_midp_field_time_pane_t1

0xeda4,	// (0x0006302a) wait_anim_pane_g2_copy1

0x9594,	// (0x0005d81a) form_midp_field_time_pane_t2

0x0001,

0x6d73,	// (0x0005aff9) aid_navinavi_width_2_pane

0xf820,	// (0x00063aa6) form_midp_field_time_pane_t

0xedae,	// (0x00063034) input_focus_pane_cp052

0xedae,	// (0x00063034) bg_input_focus_pane_cp040

0x9546,	// (0x0005d7cc) form_midp_gauge_slider_pane_t1

0x9554,	// (0x0005d7da) form_midp_gauge_slider_pane_t2

0x9562,	// (0x0005d7e8) form_midp_gauge_slider_pane_t3

0x9570,	// (0x0005d7f6) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x00063a9d) form_midp_gauge_slider_pane_t

0x957e,	// (0x0005d804) form_midp_slider_pane

0xedfc,	// (0x00063082) bg_input_focus_pane_cp041_ParamLimits

0xedfc,	// (0x00063082) bg_input_focus_pane_cp041

0x9513,	// (0x0005d799) form_midp_gauge_wait_pane_t1_ParamLimits

0x9513,	// (0x0005d799) form_midp_gauge_wait_pane_t1

0x9525,	// (0x0005d7ab) form_midp_gauge_wait_pane_t2_ParamLimits

0x9525,	// (0x0005d7ab) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x00063a98) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x00063a98) form_midp_gauge_wait_pane_t

0x9537,	// (0x0005d7bd) form_midp_wait_pane_ParamLimits

0x9537,	// (0x0005d7bd) form_midp_wait_pane

0x94dd,	// (0x0005d763) form_midp_image_pane_g1

0x94e6,	// (0x0005d76c) form_midp_image_pane_t1

0x94f5,	// (0x0005d77b) form_midp_image_pane_t2

0x9504,	// (0x0005d78a) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x00063a91) form_midp_image_pane_t

0x94d4,	// (0x0005d75a) list_single_midp_pane_g1

0x43c1,	// (0x00058647) list_single_midp_pane_t1

0x94ab,	// (0x0005d731) list_midp_form_item_pane_ParamLimits

0x94ab,	// (0x0005d731) list_midp_form_item_pane

0x6d1b,	// (0x0005afa1) list_midp_form_item_pane_t1

0x6d2a,	// (0x0005afb0) midp_ticker_pane_g1

0x6d36,	// (0x0005afbc) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x000639d9) midp_ticker_pane_g

0x6d42,	// (0x0005afc8) midp_ticker_pane_t1

0xa889,	// (0x0005eb0f) midp_editing_number_pane_t1

0xa867,	// (0x0005eaed) midp_editing_number_pane

0xa876,	// (0x0005eafc) midp_ticker_pane

0xa62c,	// (0x0005e8b2) ai_message_heading_pane

0xedae,	// (0x00063034) bg_popup_window_pane_cp14

0xa634,	// (0x0005e8ba) listscroll_ai_message_pane

0xa5b6,	// (0x0005e83c) ai_message_heading_pane_g1_ParamLimits

0xa5b6,	// (0x0005e83c) ai_message_heading_pane_g1

0xa5c2,	// (0x0005e848) ai_message_heading_pane_g2_ParamLimits

0xa5c2,	// (0x0005e848) ai_message_heading_pane_g2

0xa5ce,	// (0x0005e854) ai_message_heading_pane_g3_ParamLimits

0xa5ce,	// (0x0005e854) ai_message_heading_pane_g3

0xa5da,	// (0x0005e860) ai_message_heading_pane_g4_ParamLimits

0xa5da,	// (0x0005e860) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x00063bd2) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x00063bd2) ai_message_heading_pane_g

0xa5e6,	// (0x0005e86c) ai_message_heading_pane_t1_ParamLimits

0xa5e6,	// (0x0005e86c) ai_message_heading_pane_t1

0xa600,	// (0x0005e886) ai_message_heading_pane_t2_ParamLimits

0xa600,	// (0x0005e886) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x00063bdb) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x00063bdb) ai_message_heading_pane_t

0xa612,	// (0x0005e898) bg_popup_heading_pane_cp1_ParamLimits

0xa612,	// (0x0005e898) bg_popup_heading_pane_cp1

0xa5a4,	// (0x0005e82a) list_ai_message_pane_ParamLimits

0xa5a4,	// (0x0005e82a) list_ai_message_pane

0xf2db,	// (0x00063561) scroll_pane_cp10

0xa540,	// (0x0005e7c6) list_ai_message_pane_g1

0xa548,	// (0x0005e7ce) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x00063baf) list_ai_message_pane_g

0xa550,	// (0x0005e7d6) list_ai_message_pane_t1_ParamLimits

0xa550,	// (0x0005e7d6) list_ai_message_pane_t1

0xa565,	// (0x0005e7eb) list_ai_message_pane_t2_ParamLimits

0xa565,	// (0x0005e7eb) list_ai_message_pane_t2

0xa57a,	// (0x0005e800) list_ai_message_pane_t3_ParamLimits

0xa57a,	// (0x0005e800) list_ai_message_pane_t3

0xa58f,	// (0x0005e815) list_ai_message_pane_t4_ParamLimits

0xa58f,	// (0x0005e815) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x00063bb4) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x00063bb4) list_ai_message_pane_t

0xa52b,	// (0x0005e7b1) cell_ai_soft_ind_pane_ParamLimits

0xa52b,	// (0x0005e7b1) cell_ai_soft_ind_pane

0x6d54,	// (0x0005afda) cell_ai_soft_ind_pane_g1_ParamLimits

0x6d54,	// (0x0005afda) cell_ai_soft_ind_pane_g1

0xedae,	// (0x00063034) grid_highlight_cp1

0x6d61,	// (0x0005afe7) text_secondary_cp56_ParamLimits

0x6d61,	// (0x0005afe7) text_secondary_cp56

0xa500,	// (0x0005e786) example_general_pane_ParamLimits

0xa500,	// (0x0005e786) example_general_pane

0xa50c,	// (0x0005e792) example_parent_pane_g1_ParamLimits

0xa50c,	// (0x0005e792) example_parent_pane_g1

0xa518,	// (0x0005e79e) example_parent_pane_t1_ParamLimits

0xa518,	// (0x0005e79e) example_parent_pane_t1

0x73be,	// (0x0005b644) popup_preview_text_window_ParamLimits

0x73be,	// (0x0005b644) popup_preview_text_window

0x381c,	// (0x00057aa2) list_single_pane_cp2_g4

0xefdc,	// (0x00063262) bg_popup_preview_window_pane_ParamLimits

0xefdc,	// (0x00063262) bg_popup_preview_window_pane

0xa25a,	// (0x0005e4e0) popup_preview_text_window_t1_ParamLimits

0xa25a,	// (0x0005e4e0) popup_preview_text_window_t1

0xa278,	// (0x0005e4fe) popup_preview_text_window_t2_ParamLimits

0xa278,	// (0x0005e4fe) popup_preview_text_window_t2

0xa2c1,	// (0x0005e547) popup_preview_text_window_t3_ParamLimits

0xa2c1,	// (0x0005e547) popup_preview_text_window_t3

0xa306,	// (0x0005e58c) popup_preview_text_window_t4_ParamLimits

0xa306,	// (0x0005e58c) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x00063b83) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x00063b83) popup_preview_text_window_t

0xa384,	// (0x0005e60a) scroll_pane_cp11

0x9311,	// (0x0005d597) bg_popup_preview_window_pane_g1

0xa21a,	// (0x0005e4a0) bg_popup_preview_window_pane_g2

0xa222,	// (0x0005e4a8) bg_popup_preview_window_pane_g3

0xa22a,	// (0x0005e4b0) bg_popup_preview_window_pane_g4

0xa232,	// (0x0005e4b8) bg_popup_preview_window_pane_g5

0xa23a,	// (0x0005e4c0) bg_popup_preview_window_pane_g6

0xa242,	// (0x0005e4c8) bg_popup_preview_window_pane_g7

0xa24a,	// (0x0005e4d0) bg_popup_preview_window_pane_g8

0x545b,	// (0x000596e1) aid_popup_width_pane

0x739c,	// (0x0005b622) popup_midp_note_alarm_window_ParamLimits

0x739c,	// (0x0005b622) popup_midp_note_alarm_window

0xf1b0,	// (0x00063436) data_form_pane_ParamLimits

0x631d,	// (0x0005a5a3) form_field_data_pane_g1

0x6327,	// (0x0005a5ad) form_field_data_pane_t1_ParamLimits

0xf1bc,	// (0x00063442) input_focus_pane_ParamLimits

0x359f,	// (0x00057825) data_form_wide_pane_ParamLimits

0x35b0,	// (0x00057836) form_field_data_wide_pane_g1

0x35bc,	// (0x00057842) form_field_data_wide_pane_t1_ParamLimits

0xf0b0,	// (0x00063336) input_focus_pane_cp6_ParamLimits

0x6488,	// (0x0005a70e) input_popup_find_pane_g1_ParamLimits

0x6488,	// (0x0005a70e) input_popup_find_pane_g1

0x661a,	// (0x0005a8a0) aid_navi_side_left_pane

0x662f,	// (0x0005a8b5) aid_navi_side_right_pane

0x9c43,	// (0x0005dec9) bg_popup_window_pane_cp30_ParamLimits

0x9c43,	// (0x0005dec9) bg_popup_window_pane_cp30

0x9cbd,	// (0x0005df43) popup_midp_note_alarm_window_g1_ParamLimits

0x9cbd,	// (0x0005df43) popup_midp_note_alarm_window_g1

0x9ced,	// (0x0005df73) popup_midp_note_alarm_window_t1_ParamLimits

0x9ced,	// (0x0005df73) popup_midp_note_alarm_window_t1

0x9d8e,	// (0x0005e014) popup_midp_note_alarm_window_t2_ParamLimits

0x9d8e,	// (0x0005e014) popup_midp_note_alarm_window_t2

0x9e3c,	// (0x0005e0c2) popup_midp_note_alarm_window_t3_ParamLimits

0x9e3c,	// (0x0005e0c2) popup_midp_note_alarm_window_t3

0x9e64,	// (0x0005e0ea) popup_midp_note_alarm_window_t4_ParamLimits

0x9e64,	// (0x0005e0ea) popup_midp_note_alarm_window_t4

0x9e84,	// (0x0005e10a) popup_midp_note_alarm_window_t5_ParamLimits

0x9e84,	// (0x0005e10a) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x00063b20) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x00063b20) popup_midp_note_alarm_window_t

0x9f30,	// (0x0005e1b6) wait_bar_pane_cp1_ParamLimits

0x9f30,	// (0x0005e1b6) wait_bar_pane_cp1

0xedae,	// (0x00063034) wait_anim_pane_copy1

0xedae,	// (0x00063034) wait_border_pane_copy1

0x9939,	// (0x0005dbbf) wait_border_pane_g1_copy1

0x35d6,	// (0x0005785c) form_field_popup_pane_g1

0x633f,	// (0x0005a5c5) form_field_popup_pane_t1_ParamLimits

0xf1bc,	// (0x00063442) input_focus_pane_cp7_ParamLimits

0xf1ea,	// (0x00063470) list_form_pane_ParamLimits

0x35de,	// (0x00057864) form_field_popup_wide_pane_g1

0x35e6,	// (0x0005786c) form_field_popup_wide_pane_t1_ParamLimits

0xf1bc,	// (0x00063442) input_focus_pane_cp8_ParamLimits

0xf1f6,	// (0x0006347c) list_form_wide_pane_ParamLimits

0xaa74,	// (0x0005ecfa) aid_size_cell_graphic_pane

0x63ba,	// (0x0005a640) data_form_pane_t1_ParamLimits

0x799c,	// (0x0005bc22) data_form_wide_pane_t1_ParamLimits

0x8edb,	// (0x0005d161) bg_status_flat_pane

0x5864,	// (0x00059aea) title_pane_t1_ParamLimits

0xedc4,	// (0x0006304a) title_pane_t2_ParamLimits

0xedea,	// (0x00063070) title_pane_t3_ParamLimits

0xf557,	// (0x000637dd) title_pane_t_ParamLimits

0x1314,	// (0x0005559a) level_1_signal_ParamLimits

0x1321,	// (0x000555a7) level_2_signal_ParamLimits

0x132e,	// (0x000555b4) level_3_signal_ParamLimits

0x133b,	// (0x000555c1) level_4_signal_ParamLimits

0x1348,	// (0x000555ce) level_5_signal_ParamLimits

0x1355,	// (0x000555db) level_6_signal_ParamLimits

0x1362,	// (0x000555e8) level_7_signal_ParamLimits

0x1314,	// (0x0005559a) level_1_battery_ParamLimits

0x1321,	// (0x000555a7) level_2_battery_ParamLimits

0x132e,	// (0x000555b4) level_3_battery_ParamLimits

0x133b,	// (0x000555c1) level_4_battery_ParamLimits

0x1348,	// (0x000555ce) level_5_battery_ParamLimits

0x1355,	// (0x000555db) level_6_battery_ParamLimits

0x1362,	// (0x000555e8) level_7_battery_ParamLimits

0x9b48,	// (0x0005ddce) bg_status_flat_pane_g1

0x9b50,	// (0x0005ddd6) bg_status_flat_pane_g2

0x9b58,	// (0x0005ddde) bg_status_flat_pane_g3

0x9b60,	// (0x0005dde6) bg_status_flat_pane_g4

0x9b68,	// (0x0005ddee) bg_status_flat_pane_g5

0x9b70,	// (0x0005ddf6) bg_status_flat_pane_g6

0x9b78,	// (0x0005ddfe) bg_status_flat_pane_g7

0x58d4,	// (0x00059b5a) tabs_3_active_pane_t1_ParamLimits

0x58d4,	// (0x00059b5a) tabs_3_passive_pane_t1_ParamLimits

0x58ee,	// (0x00059b74) tabs_4_active_pane_t1_ParamLimits

0x58ee,	// (0x00059b74) tabs_4_1_passive_pane_t1_ParamLimits

0x64bf,	// (0x0005a745) tabs_2_active_pane_t1_ParamLimits

0x64bf,	// (0x0005a745) tabs_2_passive_pane_t1_ParamLimits

0x2276,	// (0x000564fc) bg_active_tab_pane_cp4_ParamLimits

0x64d1,	// (0x0005a757) tabs_2_long_active_pane_t1_ParamLimits

0x64e4,	// (0x0005a76a) bg_passive_tab_pane_cp4_ParamLimits

0x7677,	// (0x0005b8fd) list_single_midp_graphic_pane_t1_ParamLimits

0x2276,	// (0x000564fc) bg_active_tab_pane_cp5_ParamLimits

0x64f0,	// (0x0005a776) tabs_3_long_active_pane_t1_ParamLimits

0x64e4,	// (0x0005a76a) bg_passive_tab_pane_cp5_ParamLimits

0x7677,	// (0x0005b8fd) list_single_midp_graphic_pane_t1

0x8edb,	// (0x0005d161) bg_status_flat_pane_ParamLimits

0x8fa4,	// (0x0005d22a) indicator_pane_cp2_ParamLimits

0x8fa4,	// (0x0005d22a) indicator_pane_cp2

0x90cf,	// (0x0005d355) navi_pane_srt_ParamLimits

0x90cf,	// (0x0005d355) navi_pane_srt

0x90f3,	// (0x0005d379) popup_clock_digital_analogue_window_cp1

0xee40,	// (0x000630c6) indicator_pane_t1

0x38c5,	// (0x00057b4b) copy_highlight_pane

0x38c5,	// (0x00057b4b) cursor_graphics_pane

0x38c5,	// (0x00057b4b) graphic_within_text_pane

0x38c5,	// (0x00057b4b) link_highlight_pane

0xa347,	// (0x0005e5cd) popup_preview_text_window_t5_ParamLimits

0xa347,	// (0x0005e5cd) popup_preview_text_window_t5

0x6d7b,	// (0x0005b001) cursor_digital_pane

0x6d7b,	// (0x0005b001) cursor_primary_pane

0x6d8c,	// (0x0005b012) cursor_primary_small_pane

0x6d94,	// (0x0005b01a) cursor_secondary_pane

0x6d9c,	// (0x0005b022) cursor_title_pane

0x6d7b,	// (0x0005b001) link_highlight_digital_pane

0x6d83,	// (0x0005b009) link_highlight_primary_pane

0x6d8c,	// (0x0005b012) link_highlight_primary_small_pane

0x6d94,	// (0x0005b01a) link_highlight_secondary_pane

0x6d9c,	// (0x0005b022) link_highlight_title_pane

0x6d7b,	// (0x0005b001) copy_highlight_digital_pane

0x6d7b,	// (0x0005b001) copy_highlight_primary_pane

0x6d8c,	// (0x0005b012) copy_highlight_primary_small_pane

0x6d94,	// (0x0005b01a) copy_highlight_secondary_pane

0x6d9c,	// (0x0005b022) copy_highlight_title_pane

0x6d94,	// (0x0005b01a) graphic_text_digital_pane

0x9be6,	// (0x0005de6c) graphic_text_primary_pane

0x9bef,	// (0x0005de75) graphic_text_primary_small_pane

0x6d8c,	// (0x0005b012) graphic_text_secondary_pane

0x6d7b,	// (0x0005b001) graphic_text_title_pane

0x6da4,	// (0x0005b02a) cursor_primary_pane_g1

0x9bd8,	// (0x0005de5e) cursor_text_primary_t1

0x9bc0,	// (0x0005de46) cursor_primary_small_pane_g1

0x9bca,	// (0x0005de50) cursor_text_primary_small_t1

0x9ba8,	// (0x0005de2e) cursor_primary_small_pane_g1_copy1

0x9bb2,	// (0x0005de38) cursor_text_primary_small_t1_copy1

0x9b90,	// (0x0005de16) cursor_text_title_t1

0x9b9e,	// (0x0005de24) cursor_title_pane_g1

0x6da4,	// (0x0005b02a) cursor_digital_pane_g1

0x6dae,	// (0x0005b034) cursor_text_digital_t1

0x6dbc,	// (0x0005b042) link_highlight_primary_pane_g1

0x9b39,	// (0x0005ddbf) link_highlight_primary_pane_t1

0x6dbc,	// (0x0005b042) link_highlight_primary_small_pane_g1

0x6dc4,	// (0x0005b04a) link_highlight_primary_small_pane_t1

0x6dbc,	// (0x0005b042) link_highlight_secondary_pane_g1

0x6dd3,	// (0x0005b059) link_highlight_secondary_pane_t1

0x9a9e,	// (0x0005dd24) link_highlight_title_pane_g1

0x9ab5,	// (0x0005dd3b) link_highlight_title_pane_t1

0x9a9e,	// (0x0005dd24) link_highlight_digital_pane_g1

0x9aa6,	// (0x0005dd2c) link_highlight_digital_pane_t1

0x9958,	// (0x0005dbde) copy_highlight_primary_pane_g1

0x997e,	// (0x0005dc04) copy_highlight_primary_pane_t1

0x9958,	// (0x0005dbde) copy_highlight_primary_small_pane_g1

0x996f,	// (0x0005dbf5) copy_highlight_primary_small_pane_t1

0x6de2,	// (0x0005b068) copy_highlight_secondary_pane_g1

0x6dea,	// (0x0005b070) copy_highlight_secondary_pane_t1

0x9958,	// (0x0005dbde) copy_highlight_title_pane_g1

0x9960,	// (0x0005dbe6) copy_highlight_title_pane_t1

0x9958,	// (0x0005dbde) copy_highlight_digital_pane_g1

0xac42,	// (0x0005eec8) copy_highlight_digital_pane_t1

0xab96,	// (0x0005ee1c) graphic_text_primary_pane_g1

0xac26,	// (0x0005eeac) graphic_text_primary_pane_t1

0xac34,	// (0x0005eeba) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x00063c4f) graphic_text_primary_pane_t

0xac02,	// (0x0005ee88) graphic_text_primary_small_pane_g1

0xac0a,	// (0x0005ee90) graphic_text_primary_small_pane_t1

0xac18,	// (0x0005ee9e) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x00063c4a) graphic_text_primary_small_pane_t

0xabde,	// (0x0005ee64) graphic_text_secondary_pane_g1

0xabe6,	// (0x0005ee6c) graphic_text_secondary_pane_t1

0xabf4,	// (0x0005ee7a) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x00063c45) graphic_text_secondary_pane_t

0xabba,	// (0x0005ee40) graphic_text_title_pane_g1

0xabc2,	// (0x0005ee48) graphic_text_title_pane_t1

0xabd0,	// (0x0005ee56) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x00063c40) graphic_text_title_pane_t

0xab96,	// (0x0005ee1c) graphic_text_digital_pane_g1

0xab9e,	// (0x0005ee24) graphic_text_digital_pane_t1

0xabac,	// (0x0005ee32) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00063c3b) graphic_text_digital_pane_t

0xedfc,	// (0x00063082) navi_icon_pane_srt_ParamLimits

0xedfc,	// (0x00063082) navi_icon_pane_srt

0xedae,	// (0x00063034) navi_midp_pane_srt

0xedae,	// (0x00063034) navi_navi_pane_srt

0xedfc,	// (0x00063082) navi_text_pane_srt_ParamLimits

0xedfc,	// (0x00063082) navi_text_pane_srt

0xab61,	// (0x0005ede7) navi_navi_icon_text_pane_srt

0xab69,	// (0x0005edef) navi_navi_pane_srt_g1_ParamLimits

0xab69,	// (0x0005edef) navi_navi_pane_srt_g1

0xab7b,	// (0x0005ee01) navi_navi_pane_srt_g2_ParamLimits

0xab7b,	// (0x0005ee01) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x00063c36) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x00063c36) navi_navi_pane_srt_g

0xab8d,	// (0x0005ee13) navi_navi_tabs_pane_srt

0xab61,	// (0x0005ede7) navi_navi_text_pane_srt

0xab61,	// (0x0005ede7) navi_navi_volume_pane_srt

0xab52,	// (0x0005edd8) navi_navi_text_pane_srt_t1

0x7ab6,	// (0x0005bd3c) navi_navi_volume_pane_srt_g1

0x7abe,	// (0x0005bd44) volume_small_pane_srt_ParamLimits

0x7abe,	// (0x0005bd44) volume_small_pane_srt

0x6df9,	// (0x0005b07f) volume_small_pane_srt_g1_ParamLimits

0x6df9,	// (0x0005b07f) volume_small_pane_srt_g1

0x6e09,	// (0x0005b08f) volume_small_pane_srt_g2_ParamLimits

0x6e09,	// (0x0005b08f) volume_small_pane_srt_g2

0x6e1a,	// (0x0005b0a0) volume_small_pane_srt_g3_ParamLimits

0x6e1a,	// (0x0005b0a0) volume_small_pane_srt_g3

0x6e2b,	// (0x0005b0b1) volume_small_pane_srt_g4_ParamLimits

0x6e2b,	// (0x0005b0b1) volume_small_pane_srt_g4

0x6e3c,	// (0x0005b0c2) volume_small_pane_srt_g5_ParamLimits

0x6e3c,	// (0x0005b0c2) volume_small_pane_srt_g5

0x6e4d,	// (0x0005b0d3) volume_small_pane_srt_g6_ParamLimits

0x6e4d,	// (0x0005b0d3) volume_small_pane_srt_g6

0x6e5e,	// (0x0005b0e4) volume_small_pane_srt_g7_ParamLimits

0x6e5e,	// (0x0005b0e4) volume_small_pane_srt_g7

0x6e6f,	// (0x0005b0f5) volume_small_pane_srt_g8_ParamLimits

0x6e6f,	// (0x0005b0f5) volume_small_pane_srt_g8

0x6e80,	// (0x0005b106) volume_small_pane_srt_g9_ParamLimits

0x6e80,	// (0x0005b106) volume_small_pane_srt_g9

0x6e91,	// (0x0005b117) volume_small_pane_srt_g10_ParamLimits

0x6e91,	// (0x0005b117) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x000639de) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x000639de) volume_small_pane_srt_g

0x5b3b,	// (0x00059dc1) query_popup_data_pane_cp2

0xab38,	// (0x0005edbe) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xab38,	// (0x0005edbe) navi_navi_icon_text_pane_srt_t1

0x9be6,	// (0x0005de6c) navi_tabs_2_long_pane_srt

0x9be6,	// (0x0005de6c) navi_tabs_2_pane_srt

0x9be6,	// (0x0005de6c) navi_tabs_3_long_pane_srt

0x9be6,	// (0x0005de6c) navi_tabs_3_pane_srt

0x9be6,	// (0x0005de6c) navi_tabs_4_pane_srt

0x7a96,	// (0x0005bd1c) tabs_2_active_pane_srt_ParamLimits

0x7a96,	// (0x0005bd1c) tabs_2_active_pane_srt

0x7aa6,	// (0x0005bd2c) tabs_2_passive_pane_srt_ParamLimits

0x7aa6,	// (0x0005bd2c) tabs_2_passive_pane_srt

0x8dea,	// (0x0005d070) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8dea,	// (0x0005d070) bg_passive_tab_pane_cp1_srt

0xab04,	// (0x0005ed8a) bg_passive_tab_pane_g1_cp1_srt

0x6a19,	// (0x0005ac9f) bg_passive_tab_pane_g2_cp1_srt

0xab0d,	// (0x0005ed93) bg_passive_tab_pane_g3_cp1_srt

0xedfc,	// (0x00063082) bg_active_tab_pane_cp1_srt_ParamLimits

0xedfc,	// (0x00063082) bg_active_tab_pane_cp1_srt

0xab16,	// (0x0005ed9c) tabs_2_active_pane_srt_g1

0xab1e,	// (0x0005eda4) tabs_2_active_pane_srt_t1_ParamLimits

0xab1e,	// (0x0005eda4) tabs_2_active_pane_srt_t1

0xab04,	// (0x0005ed8a) bg_active_tab_pane_g1_cp1_srt

0x6a19,	// (0x0005ac9f) bg_active_tab_pane_g2_cp1_srt

0xab0d,	// (0x0005ed93) bg_active_tab_pane_g3_cp1_srt

0x7a63,	// (0x0005bce9) tabs_3_active_pane_srt_ParamLimits

0x7a63,	// (0x0005bce9) tabs_3_active_pane_srt

0x7a74,	// (0x0005bcfa) tabs_3_passive_pane_cp_srt_ParamLimits

0x7a74,	// (0x0005bcfa) tabs_3_passive_pane_cp_srt

0x7a85,	// (0x0005bd0b) tabs_3_passive_pane_srt_ParamLimits

0x7a85,	// (0x0005bd0b) tabs_3_passive_pane_srt

0x8dea,	// (0x0005d070) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8dea,	// (0x0005d070) bg_passive_tab_pane_cp2_srt

0x8c83,	// (0x0005cf09) bg_passive_tab_pane_g1_cp2_srt

0x6a19,	// (0x0005ac9f) bg_passive_tab_pane_g2_cp2_srt

0x6ea2,	// (0x0005b128) bg_passive_tab_pane_g3_cp2_srt

0xedfc,	// (0x00063082) bg_active_tab_pane_cp2_srt_ParamLimits

0xedfc,	// (0x00063082) bg_active_tab_pane_cp2_srt

0xaaea,	// (0x0005ed70) tabs_3_active_pane_srt_g1

0xaaf2,	// (0x0005ed78) tabs_3_active_pane_srt_t1_ParamLimits

0xaaf2,	// (0x0005ed78) tabs_3_active_pane_srt_t1

0x8c83,	// (0x0005cf09) bg_active_tab_pane_g1_cp2_srt

0x6a19,	// (0x0005ac9f) bg_active_tab_pane_g2_cp2_srt

0x6ea2,	// (0x0005b128) bg_active_tab_pane_g3_cp2_srt

0x7a1b,	// (0x0005bca1) tabs_4_active_pane_srt_ParamLimits

0x7a1b,	// (0x0005bca1) tabs_4_active_pane_srt

0x7a2d,	// (0x0005bcb3) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7a2d,	// (0x0005bcb3) tabs_4_passive_pane_cp2_srt

0x7009,	// (0x0005b28f) aid_size_cell_toolbar

0x64e4,	// (0x0005a76a) main_idle_act_pane_ParamLimits

0x71ce,	// (0x0005b454) popup_large_graphic_colour_window_ParamLimits

0x7539,	// (0x0005b7bf) popup_toolbar_window_ParamLimits

0x7539,	// (0x0005b7bf) popup_toolbar_window

0xa898,	// (0x0005eb1e) list_single_graphic_2heading_pane_ParamLimits

0xa898,	// (0x0005eb1e) list_single_graphic_2heading_pane

0xf46c,	// (0x000636f2) aid_size_cell_apps_grid_lsc_pane

0xf47e,	// (0x00063704) aid_size_cell_apps_grid_prt_pane

0x8dea,	// (0x0005d070) bg_wml_button_pane_cp1_ParamLimits

0x8dea,	// (0x0005d070) bg_wml_button_pane_cp1

0x95d3,	// (0x0005d859) form_midp_field_text_pane_t1_ParamLimits

0x939d,	// (0x0005d623) input_focus_pane_cp050_ParamLimits

0x960d,	// (0x0005d893) list_midp_form_text_pane_ParamLimits

0x95b0,	// (0x0005d836) input_focus_pane_cp051_ParamLimits

0x95c4,	// (0x0005d84a) list_midp_choice_pane_ParamLimits

0x9453,	// (0x0005d6d9) list_single_2graphic_pane_cp3_ParamLimits

0x9453,	// (0x0005d6d9) list_single_2graphic_pane_cp3

0x9478,	// (0x0005d6fe) list_single_midp_graphic_pane_ParamLimits

0x9478,	// (0x0005d6fe) list_single_midp_graphic_pane

0x53c9,	// (0x0005964f) list_single_graphic_2heading_pane_g1_ParamLimits

0x53c9,	// (0x0005964f) list_single_graphic_2heading_pane_g1

0x53d5,	// (0x0005965b) list_single_graphic_2heading_pane_g4_ParamLimits

0x53d5,	// (0x0005965b) list_single_graphic_2heading_pane_g4

0x53e1,	// (0x00059667) list_single_graphic_2heading_pane_g5_ParamLimits

0x53e1,	// (0x00059667) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00063a31) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00063a31) list_single_graphic_2heading_pane_g

0x53ed,	// (0x00059673) list_single_graphic_2heading_pane_t1_ParamLimits

0x53ed,	// (0x00059673) list_single_graphic_2heading_pane_t1

0x5401,	// (0x00059687) list_single_graphic_2heading_pane_t2_ParamLimits

0x5401,	// (0x00059687) list_single_graphic_2heading_pane_t2

0x541b,	// (0x000596a1) list_single_graphic_2heading_pane_t3_ParamLimits

0x541b,	// (0x000596a1) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x00063a38) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x00063a38) list_single_graphic_2heading_pane_t

0x924f,	// (0x0005d4d5) bg_popup_sub_pane_cp2

0x9279,	// (0x0005d4ff) grid_toobar_pane

0x75e6,	// (0x0005b86c) cell_toolbar_pane_ParamLimits

0x75e6,	// (0x0005b86c) cell_toolbar_pane

0x92b5,	// (0x0005d53b) cell_toolbar_pane_g1_ParamLimits

0x92b5,	// (0x0005d53b) cell_toolbar_pane_g1

0x92c9,	// (0x0005d54f) cell_toolbar_pane_g2_ParamLimits

0x92c9,	// (0x0005d54f) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x00063a46) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x00063a46) cell_toolbar_pane_g

0x92eb,	// (0x0005d571) grid_highlight_pane_cp2_ParamLimits

0x92eb,	// (0x0005d571) grid_highlight_pane_cp2

0x9305,	// (0x0005d58b) toolbar_button_pane

0x9311,	// (0x0005d597) toolbar_button_pane_g1

0x9319,	// (0x0005d59f) toolbar_button_pane_g2

0x9321,	// (0x0005d5a7) toolbar_button_pane_g3

0x9329,	// (0x0005d5af) toolbar_button_pane_g4

0x9331,	// (0x0005d5b7) toolbar_button_pane_g5

0x9339,	// (0x0005d5bf) toolbar_button_pane_g6

0x9341,	// (0x0005d5c7) toolbar_button_pane_g7

0x9349,	// (0x0005d5cf) toolbar_button_pane_g8

0x9351,	// (0x0005d5d7) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x00063a4b) toolbar_button_pane_g

0x761e,	// (0x0005b8a4) list_single_2graphic_pane_g1_cp3_ParamLimits

0x761e,	// (0x0005b8a4) list_single_2graphic_pane_g1_cp3

0x762a,	// (0x0005b8b0) list_single_2graphic_pane_g2_cp3_ParamLimits

0x762a,	// (0x0005b8b0) list_single_2graphic_pane_g2_cp3

0x763b,	// (0x0005b8c1) list_single_2graphic_pane_g3_cp3

0x7643,	// (0x0005b8c9) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7643,	// (0x0005b8c9) list_single_2graphic_pane_g4_cp3

0x764f,	// (0x0005b8d5) list_single_2graphic_pane_t1_cp3_ParamLimits

0x764f,	// (0x0005b8d5) list_single_2graphic_pane_t1_cp3

0x766b,	// (0x0005b8f1) list_single_midp_graphic_pane_g2_ParamLimits

0x766b,	// (0x0005b8f1) list_single_midp_graphic_pane_g2

0x53c1,	// (0x00059647) aid_zoom_text_primary

0x7011,	// (0x0005b297) aid_zoom_text_secondary

0x8d34,	// (0x0005cfba) status_small_pane_g7_ParamLimits

0x8d34,	// (0x0005cfba) status_small_pane_g7

0x8d57,	// (0x0005cfdd) status_small_pane_t1_ParamLimits

0x5847,	// (0x00059acd) title_pane_g2

0x0003,

0xf54e,	// (0x000637d4) title_pane_g

0x5b95,	// (0x00059e1b) aid_size_cell_colour_1_pane_ParamLimits

0x5b95,	// (0x00059e1b) aid_size_cell_colour_1_pane

0x5ba9,	// (0x00059e2f) aid_size_cell_colour_2_pane_ParamLimits

0x5ba9,	// (0x00059e2f) aid_size_cell_colour_2_pane

0x5bbd,	// (0x00059e43) aid_size_cell_colour_3_pane_ParamLimits

0x5bbd,	// (0x00059e43) aid_size_cell_colour_3_pane

0x5bd1,	// (0x00059e57) aid_size_cell_colour_4_pane_ParamLimits

0x5bd1,	// (0x00059e57) aid_size_cell_colour_4_pane

0x6557,	// (0x0005a7dd) title_pane_stacon_g1_ParamLimits

0x6557,	// (0x0005a7dd) title_pane_stacon_g1

0x99d5,	// (0x0005dc5b) popup_note_wait_window_g3_ParamLimits

0x99d5,	// (0x0005dc5b) popup_note_wait_window_g3

0x9a4b,	// (0x0005dcd1) popup_note_wait_window_t5_ParamLimits

0x9a4b,	// (0x0005dcd1) popup_note_wait_window_t5

0xedae,	// (0x00063034) main_feb_china_hwr_fs_writing_pane

0x70b5,	// (0x0005b33b) popup_feb_china_hwr_fs_window_ParamLimits

0x70b5,	// (0x0005b33b) popup_feb_china_hwr_fs_window

0x768d,	// (0x0005b913) aid_size_cell_hwr_fs_ParamLimits

0x768d,	// (0x0005b913) aid_size_cell_hwr_fs

0x939d,	// (0x0005d623) bg_popup_sub_pane_cp3_ParamLimits

0x939d,	// (0x0005d623) bg_popup_sub_pane_cp3

0x76a2,	// (0x0005b928) grid_hwr_fs_pane_ParamLimits

0x76a2,	// (0x0005b928) grid_hwr_fs_pane

0x76ba,	// (0x0005b940) linegrid_hwr_fs_pane_ParamLimits

0x76ba,	// (0x0005b940) linegrid_hwr_fs_pane

0x76ca,	// (0x0005b950) cell_hwr_fs_pane_ParamLimits

0x76ca,	// (0x0005b950) cell_hwr_fs_pane

0x93a9,	// (0x0005d62f) linegrid_hwr_fs_pane_g1_ParamLimits

0x93a9,	// (0x0005d62f) linegrid_hwr_fs_pane_g1

0x93b5,	// (0x0005d63b) linegrid_hwr_fs_pane_g2_ParamLimits

0x93b5,	// (0x0005d63b) linegrid_hwr_fs_pane_g2

0x93c7,	// (0x0005d64d) linegrid_hwr_fs_pane_g3_ParamLimits

0x93c7,	// (0x0005d64d) linegrid_hwr_fs_pane_g3

0x76ec,	// (0x0005b972) linegrid_hwr_fs_pane_g4_ParamLimits

0x76ec,	// (0x0005b972) linegrid_hwr_fs_pane_g4

0x7706,	// (0x0005b98c) linegrid_hwr_fs_pane_g5_ParamLimits

0x7706,	// (0x0005b98c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x00063a76) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x00063a76) linegrid_hwr_fs_pane_g

0x93d3,	// (0x0005d659) cell_hwr_fs_pane_g1_ParamLimits

0x93d3,	// (0x0005d659) cell_hwr_fs_pane_g1

0x9189,	// (0x0005d40f) cell_hwr_fs_pane_g2_ParamLimits

0x9189,	// (0x0005d40f) cell_hwr_fs_pane_g2

0x93e9,	// (0x0005d66f) cell_hwr_fs_pane_g3_ParamLimits

0x93e9,	// (0x0005d66f) cell_hwr_fs_pane_g3

0x93f6,	// (0x0005d67c) cell_hwr_fs_pane_g4_ParamLimits

0x93f6,	// (0x0005d67c) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x00063a81) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x00063a81) cell_hwr_fs_pane_g

0x771c,	// (0x0005b9a2) cell_hwr_fs_pane_t1

0xedae,	// (0x00063034) grid_highlight_pane_cp6

0xedae,	// (0x00063034) main_idle_act2_pane

0xf2c2,	// (0x00063548) aid_inside_area_popup_secondary

0xa06a,	// (0x0005e2f0) aid_inside_area_window_primary_ParamLimits

0xa06a,	// (0x0005e2f0) aid_inside_area_window_primary

0xadb8,	// (0x0005f03e) ai2_news_ticker_pane

0xadc0,	// (0x0005f046) aid_size_cell_ai1_link_ParamLimits

0xadc0,	// (0x0005f046) aid_size_cell_ai1_link

0xadda,	// (0x0005f060) popup_ai2_data_window_ParamLimits

0xadda,	// (0x0005f060) popup_ai2_data_window

0xadf0,	// (0x0005f076) popup_ai2_link_window_ParamLimits

0xadf0,	// (0x0005f076) popup_ai2_link_window

0x939d,	// (0x0005d623) bg_popup_sub_pane_cp4_ParamLimits

0x939d,	// (0x0005d623) bg_popup_sub_pane_cp4

0xae04,	// (0x0005f08a) grid_ai2_link_pane_ParamLimits

0xae04,	// (0x0005f08a) grid_ai2_link_pane

0xae1b,	// (0x0005f0a1) popup_ai2_link_window_g1_ParamLimits

0xae1b,	// (0x0005f0a1) popup_ai2_link_window_g1

0xae27,	// (0x0005f0ad) popup_ai2_link_window_g2_ParamLimits

0xae27,	// (0x0005f0ad) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00063c54) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00063c54) popup_ai2_link_window_g

0xae36,	// (0x0005f0bc) ai2_mp_button_pane

0xae3e,	// (0x0005f0c4) ai2_mp_volume_pane

0x95b0,	// (0x0005d836) bg_popup_sub_pane_cp5_ParamLimits

0x95b0,	// (0x0005d836) bg_popup_sub_pane_cp5

0xae46,	// (0x0005f0cc) heading_ai2_gene_pane_ParamLimits

0xae46,	// (0x0005f0cc) heading_ai2_gene_pane

0xae52,	// (0x0005f0d8) list_ai2_gene_pane_ParamLimits

0xae52,	// (0x0005f0d8) list_ai2_gene_pane

0xae9a,	// (0x0005f120) cell_ai2_link_pane_ParamLimits

0xae9a,	// (0x0005f120) cell_ai2_link_pane

0xaeb0,	// (0x0005f136) cell_ai2_link_pane_g1

0xedae,	// (0x00063034) grid_highlight_pane_cp7

0x7ad3,	// (0x0005bd59) ai2_mp_volume_pane_g1

0xaf80,	// (0x0005f206) ai2_mp_volume_pane_g2

0xaef5,	// (0x0005f17b) list_ai2_gene_pane_t1

0xaf88,	// (0x0005f20e) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x00063c6d) ai2_mp_volume_pane_g

0x7adb,	// (0x0005bd61) volume_small_pane_cp3

0xaf90,	// (0x0005f216) aid_size_cell_ai2_button

0xaf98,	// (0x0005f21e) grid_ai2_button_pane

0xafa1,	// (0x0005f227) cell_ai2_button_pane_ParamLimits

0xafa1,	// (0x0005f227) cell_ai2_button_pane

0xeda4,	// (0x0006302a) cell_ai2_button_pane_g1

0xedae,	// (0x00063034) grid_highlight_pane_cp8

0xaf40,	// (0x0005f1c6) ai2_gene_pane_t1_ParamLimits

0xaf40,	// (0x0005f1c6) ai2_gene_pane_t1

0x6fff,	// (0x0005b285) aid_height_parent_landscape

0xa6d3,	// (0x0005e959) aid_height_set_list

0xa6e4,	// (0x0005e96a) aid_size_parent

0xaa74,	// (0x0005ecfa) aid_size_cell_graphic_pane_ParamLimits

0xae62,	// (0x0005f0e8) popup_ai2_data_window_g1_ParamLimits

0xae62,	// (0x0005f0e8) popup_ai2_data_window_g1

0xae6e,	// (0x0005f0f4) ai2_news_ticker_pane_g1

0xae76,	// (0x0005f0fc) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x00063c59) ai2_news_ticker_pane_g

0xae7e,	// (0x0005f104) ai2_news_ticker_pane_t1

0xae8c,	// (0x0005f112) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x00063c5e) ai2_news_ticker_pane_t

0xaeb9,	// (0x0005f13f) heading_ai2_gene_pane_g1

0xaec1,	// (0x0005f147) heading_ai2_gene_pane_t1_ParamLimits

0xaec1,	// (0x0005f147) heading_ai2_gene_pane_t1

0xaed6,	// (0x0005f15c) list_highlight_pane_cp6

0xaede,	// (0x0005f164) ai2_gene_pane_ParamLimits

0xaede,	// (0x0005f164) ai2_gene_pane

0xaf03,	// (0x0005f189) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00063c63) list_ai2_gene_pane_t

0xaf11,	// (0x0005f197) list_highlight_pane_cp8_ParamLimits

0xaf11,	// (0x0005f197) list_highlight_pane_cp8

0xaf22,	// (0x0005f1a8) ai2_gene_pane_g1_ParamLimits

0xaf22,	// (0x0005f1a8) ai2_gene_pane_g1

0xaf34,	// (0x0005f1ba) ai2_gene_pane_g2_ParamLimits

0xaf34,	// (0x0005f1ba) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x00063c68) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x00063c68) ai2_gene_pane_g

0xf15b,	// (0x000633e1) scroll_pane_cp12

0x6fbc,	// (0x0005b242) control_pane_t3_ParamLimits

0x6fbc,	// (0x0005b242) control_pane_t3

0x8d48,	// (0x0005cfce) status_small_pane_g8_ParamLimits

0x8d48,	// (0x0005cfce) status_small_pane_g8

0x7197,	// (0x0005b41d) popup_find_window_ParamLimits

0x73b0,	// (0x0005b636) popup_note_image_window_ParamLimits

0x3540,	// (0x000577c6) list_double2_graphic_pane_vc_g1_ParamLimits

0x3540,	// (0x000577c6) list_double2_graphic_pane_vc_g1

0x482c,	// (0x00058ab2) list_double2_graphic_pane_vc_g2_ParamLimits

0x482c,	// (0x00058ab2) list_double2_graphic_pane_vc_g2

0x4838,	// (0x00058abe) list_double2_graphic_pane_vc_g3_ParamLimits

0x4838,	// (0x00058abe) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x00063a3f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x00063a3f) list_double2_graphic_pane_vc_g

0x354c,	// (0x000577d2) list_double2_graphic_pane_vc_t1_ParamLimits

0x354c,	// (0x000577d2) list_double2_graphic_pane_vc_t1

0x482c,	// (0x00058ab2) list_single_heading_pane_vc_g1_ParamLimits

0x482c,	// (0x00058ab2) list_single_heading_pane_vc_g1

0x4838,	// (0x00058abe) list_single_heading_pane_vc_g2_ParamLimits

0x4838,	// (0x00058abe) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00063a60) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00063a60) list_single_heading_pane_vc_g

0x3947,	// (0x00057bcd) list_single_heading_pane_vc_t1_ParamLimits

0x3947,	// (0x00057bcd) list_single_heading_pane_vc_t1

0x395d,	// (0x00057be3) list_single_heading_pane_vc_t2_ParamLimits

0x395d,	// (0x00057be3) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x00063a65) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x00063a65) list_single_heading_pane_vc_t

0x9359,	// (0x0005d5df) list_setting_number_pane_vc_g1_ParamLimits

0x9359,	// (0x0005d5df) list_setting_number_pane_vc_g1

0x9365,	// (0x0005d5eb) list_setting_number_pane_vc_g2_ParamLimits

0x9365,	// (0x0005d5eb) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00063a6a) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00063a6a) list_setting_number_pane_vc_g

0x396f,	// (0x00057bf5) list_setting_number_pane_vc_t1_ParamLimits

0x396f,	// (0x00057bf5) list_setting_number_pane_vc_t1

0x436b,	// (0x000585f1) list_setting_number_pane_vc_t2_ParamLimits

0x436b,	// (0x000585f1) list_setting_number_pane_vc_t2

0x4387,	// (0x0005860d) list_setting_number_pane_vc_t3_ParamLimits

0x4387,	// (0x0005860d) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x00063a6f) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x00063a6f) list_setting_number_pane_vc_t

0x43b1,	// (0x00058637) set_value_pane_vc_ParamLimits

0x43b1,	// (0x00058637) set_value_pane_vc

0xa898,	// (0x0005eb1e) list_double2_graphic_pane_vc_ParamLimits

0xa898,	// (0x0005eb1e) list_double2_graphic_pane_vc

0xa898,	// (0x0005eb1e) list_double2_large_graphic_pane_vc_ParamLimits

0xa898,	// (0x0005eb1e) list_double2_large_graphic_pane_vc

0xa898,	// (0x0005eb1e) list_double2_pane_vc_ParamLimits

0xa898,	// (0x0005eb1e) list_double2_pane_vc

0xa898,	// (0x0005eb1e) list_double_graphic_heading_pane_vc_ParamLimits

0xa898,	// (0x0005eb1e) list_double_graphic_heading_pane_vc

0xa898,	// (0x0005eb1e) list_double_graphic_pane_vc_ParamLimits

0xa898,	// (0x0005eb1e) list_double_graphic_pane_vc

0xa898,	// (0x0005eb1e) list_double_heading_pane_vc_ParamLimits

0xa898,	// (0x0005eb1e) list_double_heading_pane_vc

0xa8aa,	// (0x0005eb30) list_double_large_graphic_pane_vc_ParamLimits

0xa8aa,	// (0x0005eb30) list_double_large_graphic_pane_vc

0xa898,	// (0x0005eb1e) list_double_number_pane_vc_ParamLimits

0xa898,	// (0x0005eb1e) list_double_number_pane_vc

0xa898,	// (0x0005eb1e) list_double_pane_vc_ParamLimits

0xa898,	// (0x0005eb1e) list_double_pane_vc

0xa898,	// (0x0005eb1e) list_double_time_pane_vc_ParamLimits

0xa898,	// (0x0005eb1e) list_double_time_pane_vc

0xa898,	// (0x0005eb1e) list_setting_number_pane_vc_ParamLimits

0xa898,	// (0x0005eb1e) list_setting_number_pane_vc

0xa898,	// (0x0005eb1e) list_setting_pane_vc_ParamLimits

0xa898,	// (0x0005eb1e) list_setting_pane_vc

0xa898,	// (0x0005eb1e) list_single_graphic_heading_pane_vc_ParamLimits

0xa898,	// (0x0005eb1e) list_single_graphic_heading_pane_vc

0xa898,	// (0x0005eb1e) list_single_heading_pane_vc_ParamLimits

0xa898,	// (0x0005eb1e) list_single_heading_pane_vc

0xa8c8,	// (0x0005eb4e) list_single_number_heading_pane_vc_ParamLimits

0xa8c8,	// (0x0005eb4e) list_single_number_heading_pane_vc

0x43d0,	// (0x00058656) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x43d0,	// (0x00058656) list_double_graphic_heading_pane_vc_g1

0x482c,	// (0x00058ab2) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x482c,	// (0x00058ab2) list_double_graphic_heading_pane_vc_g2

0x4838,	// (0x00058abe) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4838,	// (0x00058abe) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x00063c74) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00063c74) list_double_graphic_heading_pane_vc_g

0x43dc,	// (0x00058662) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x43dc,	// (0x00058662) list_double_graphic_heading_pane_vc_t1

0x43f0,	// (0x00058676) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x43f0,	// (0x00058676) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x00063c7b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x00063c7b) list_double_graphic_heading_pane_vc_t

0x9359,	// (0x0005d5df) list_setting_pane_vc_g1_ParamLimits

0x9359,	// (0x0005d5df) list_setting_pane_vc_g1

0x9365,	// (0x0005d5eb) list_setting_pane_vc_g2_ParamLimits

0x9365,	// (0x0005d5eb) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x00063a6a) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x00063a6a) list_setting_pane_vc_g

0x4408,	// (0x0005868e) list_setting_pane_vc_t1_ParamLimits

0x4408,	// (0x0005868e) list_setting_pane_vc_t1

0x4424,	// (0x000586aa) list_setting_pane_vc_t2_ParamLimits

0x4424,	// (0x000586aa) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x00063cbe) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x00063cbe) list_setting_pane_vc_t

0x43b1,	// (0x00058637) set_value_pane_cp_vc_ParamLimits

0x43b1,	// (0x00058637) set_value_pane_cp_vc

0x482c,	// (0x00058ab2) list_single_number_heading_pane_vc_g1_ParamLimits

0x482c,	// (0x00058ab2) list_single_number_heading_pane_vc_g1

0x4838,	// (0x00058abe) list_single_number_heading_pane_vc_g2_ParamLimits

0x4838,	// (0x00058abe) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00063a60) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00063a60) list_single_number_heading_pane_vc_g

0x443e,	// (0x000586c4) list_single_number_heading_pane_vc_t1_ParamLimits

0x443e,	// (0x000586c4) list_single_number_heading_pane_vc_t1

0x4454,	// (0x000586da) list_single_number_heading_pane_vc_t2_ParamLimits

0x4454,	// (0x000586da) list_single_number_heading_pane_vc_t2

0x4466,	// (0x000586ec) list_single_number_heading_pane_vc_t3_ParamLimits

0x4466,	// (0x000586ec) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x00063cc3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x00063cc3) list_single_number_heading_pane_vc_t

0x4478,	// (0x000586fe) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4478,	// (0x000586fe) list_single_graphic_heading_pane_vc_g1

0x482c,	// (0x00058ab2) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x482c,	// (0x00058ab2) list_single_graphic_heading_pane_vc_g4

0x4838,	// (0x00058abe) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4838,	// (0x00058abe) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa44,	// (0x00063cca) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x00063cca) list_single_graphic_heading_pane_vc_g

0x3947,	// (0x00057bcd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3947,	// (0x00057bcd) list_single_graphic_heading_pane_vc_t1

0x4484,	// (0x0005870a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4484,	// (0x0005870a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4b,	// (0x00063cd1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4b,	// (0x00063cd1) list_single_graphic_heading_pane_vc_t

0x482c,	// (0x00058ab2) list_double2_pane_vc_g1_ParamLimits

0x482c,	// (0x00058ab2) list_double2_pane_vc_g1

0x4838,	// (0x00058abe) list_double2_pane_vc_g2_ParamLimits

0x4838,	// (0x00058abe) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x00063a60) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x00063a60) list_double2_pane_vc_g

0x4496,	// (0x0005871c) list_double2_pane_vc_t1_ParamLimits

0x4496,	// (0x0005871c) list_double2_pane_vc_t1

0xac51,	// (0x0005eed7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xac51,	// (0x0005eed7) list_double2_large_graphic_pane_vc_g1

0x482c,	// (0x00058ab2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x482c,	// (0x00058ab2) list_double2_large_graphic_pane_vc_g2

0x4838,	// (0x00058abe) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4838,	// (0x00058abe) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa50,	// (0x00063cd6) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa50,	// (0x00063cd6) list_double2_large_graphic_pane_vc_g

0x354c,	// (0x000577d2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x354c,	// (0x000577d2) list_double2_large_graphic_pane_vc_t1

0xac5d,	// (0x0005eee3) list_double_time_pane_vc_g1_ParamLimits

0xac5d,	// (0x0005eee3) list_double_time_pane_vc_g1

0xac69,	// (0x0005eeef) list_double_time_pane_vc_g2_ParamLimits

0xac69,	// (0x0005eeef) list_double_time_pane_vc_g2

0x0001,

0xfa57,	// (0x00063cdd) list_double_time_pane_vc_g_ParamLimits

0xfa57,	// (0x00063cdd) list_double_time_pane_vc_g

0x44ae,	// (0x00058734) list_double_time_pane_vc_t1_ParamLimits

0x44ae,	// (0x00058734) list_double_time_pane_vc_t1

0x44d2,	// (0x00058758) list_double_time_pane_vc_t2_ParamLimits

0x44d2,	// (0x00058758) list_double_time_pane_vc_t2

0x4521,	// (0x000587a7) list_double_time_pane_vc_t3_ParamLimits

0x4521,	// (0x000587a7) list_double_time_pane_vc_t3

0x4533,	// (0x000587b9) list_double_time_pane_vc_t4_ParamLimits

0x4533,	// (0x000587b9) list_double_time_pane_vc_t4

0x0003,

0xfa5c,	// (0x00063ce2) list_double_time_pane_vc_t_ParamLimits

0xfa5c,	// (0x00063ce2) list_double_time_pane_vc_t

0x482c,	// (0x00058ab2) list_double_pane_vc_g1_ParamLimits

0x482c,	// (0x00058ab2) list_double_pane_vc_g1

0x4838,	// (0x00058abe) list_double_pane_vc_g2_ParamLimits

0x4838,	// (0x00058abe) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x00063a60) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x00063a60) list_double_pane_vc_g

0x4547,	// (0x000587cd) list_double_pane_vc_t1_ParamLimits

0x4547,	// (0x000587cd) list_double_pane_vc_t1

0x455b,	// (0x000587e1) list_double_pane_vc_t2_ParamLimits

0x455b,	// (0x000587e1) list_double_pane_vc_t2

0x0001,

0xfa65,	// (0x00063ceb) list_double_pane_vc_t_ParamLimits

0xfa65,	// (0x00063ceb) list_double_pane_vc_t

0x482c,	// (0x00058ab2) list_double_number_pane_vc_g1_ParamLimits

0x482c,	// (0x00058ab2) list_double_number_pane_vc_g1

0x4838,	// (0x00058abe) list_double_number_pane_vc_g2_ParamLimits

0x4838,	// (0x00058abe) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x00063a60) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x00063a60) list_double_number_pane_vc_g

0x4573,	// (0x000587f9) list_double_number_pane_vc_t1_ParamLimits

0x4573,	// (0x000587f9) list_double_number_pane_vc_t1

0x4547,	// (0x000587cd) list_double_number_pane_vc_t2_ParamLimits

0x4547,	// (0x000587cd) list_double_number_pane_vc_t2

0x4585,	// (0x0005880b) list_double_number_pane_vc_t3_ParamLimits

0x4585,	// (0x0005880b) list_double_number_pane_vc_t3

0x0002,

0xfa6a,	// (0x00063cf0) list_double_number_pane_vc_t_ParamLimits

0xfa6a,	// (0x00063cf0) list_double_number_pane_vc_t

0xac75,	// (0x0005eefb) list_double_large_graphic_pane_vc_g1_ParamLimits

0xac75,	// (0x0005eefb) list_double_large_graphic_pane_vc_g1

0xac97,	// (0x0005ef1d) list_double_large_graphic_pane_vc_g2_ParamLimits

0xac97,	// (0x0005ef1d) list_double_large_graphic_pane_vc_g2

0xacab,	// (0x0005ef31) list_double_large_graphic_pane_vc_g3_ParamLimits

0xacab,	// (0x0005ef31) list_double_large_graphic_pane_vc_g3

0x459d,	// (0x00058823) list_double_large_graphic_pane_vc_g4_ParamLimits

0x459d,	// (0x00058823) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa71,	// (0x00063cf7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x00063cf7) list_double_large_graphic_pane_vc_g

0x45a9,	// (0x0005882f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x45a9,	// (0x0005882f) list_double_large_graphic_pane_vc_t1

0x45c5,	// (0x0005884b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x45c5,	// (0x0005884b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x00063d00) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x00063d00) list_double_large_graphic_pane_vc_t

0x482c,	// (0x00058ab2) list_double_heading_pane_vc_g1_ParamLimits

0x482c,	// (0x00058ab2) list_double_heading_pane_vc_g1

0x4838,	// (0x00058abe) list_double_heading_pane_vc_g2_ParamLimits

0x4838,	// (0x00058abe) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00063a60) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00063a60) list_double_heading_pane_vc_g

0x45e7,	// (0x0005886d) list_double_heading_pane_vc_t1_ParamLimits

0x45e7,	// (0x0005886d) list_double_heading_pane_vc_t1

0x45fb,	// (0x00058881) list_double_heading_pane_vc_t2_ParamLimits

0x45fb,	// (0x00058881) list_double_heading_pane_vc_t2

0x0001,

0xfa7f,	// (0x00063d05) list_double_heading_pane_vc_t_ParamLimits

0xfa7f,	// (0x00063d05) list_double_heading_pane_vc_t

0x4613,	// (0x00058899) list_double_graphic_pane_vc_g1_ParamLimits

0x4613,	// (0x00058899) list_double_graphic_pane_vc_g1

0xacba,	// (0x0005ef40) list_double_graphic_pane_vc_g2_ParamLimits

0xacba,	// (0x0005ef40) list_double_graphic_pane_vc_g2

0x482c,	// (0x00058ab2) list_double_graphic_pane_vc_g3_ParamLimits

0x482c,	// (0x00058ab2) list_double_graphic_pane_vc_g3

0x0003,

0xfa84,	// (0x00063d0a) list_double_graphic_pane_vc_g_ParamLimits

0xfa84,	// (0x00063d0a) list_double_graphic_pane_vc_g

0x4626,	// (0x000588ac) list_double_graphic_pane_vc_t1_ParamLimits

0x4626,	// (0x000588ac) list_double_graphic_pane_vc_t1

0x4645,	// (0x000588cb) list_double_graphic_pane_vc_t2_ParamLimits

0x4645,	// (0x000588cb) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x00063d13) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x00063d13) list_double_graphic_pane_vc_t

0x5467,	// (0x000596ed) aid_size_cell_fastswap

0x546f,	// (0x000596f5) aid_size_cell_touch_ParamLimits

0x546f,	// (0x000596f5) aid_size_cell_touch

0x56d4,	// (0x0005995a) popup_fast_swap_wide_window_ParamLimits

0x56d4,	// (0x0005995a) popup_fast_swap_wide_window

0x57da,	// (0x00059a60) touch_pane_ParamLimits

0x57da,	// (0x00059a60) touch_pane

0xf1a8,	// (0x0006342e) button_value_adjust_pane_cp2

0x357c,	// (0x00057802) button_value_adjust_pane_cp4

0x3584,	// (0x0005780a) form_field_data_pane_cp2

0x62c3,	// (0x0005a549) form_field_data_wide_pane_cp2

0xf4a3,	// (0x00063729) bg_scroll_pane_ParamLimits

0x6751,	// (0x0005a9d7) scroll_handle_pane_ParamLimits

0x6765,	// (0x0005a9eb) scroll_sc2_down_pane_ParamLimits

0x6765,	// (0x0005a9eb) scroll_sc2_down_pane

0xf4d4,	// (0x0006375a) scroll_sc2_up_pane_ParamLimits

0xf4d4,	// (0x0006375a) scroll_sc2_up_pane

0xb657,	// (0x0005f8dd) grid_wheel_folder_pane_g1_ParamLimits

0xb657,	// (0x0005f8dd) grid_wheel_folder_pane_g1

0x6b3e,	// (0x0005adc4) clock_nsta_pane_cp2_ParamLimits

0x6b3e,	// (0x0005adc4) clock_nsta_pane_cp2

0x6c51,	// (0x0005aed7) listscroll_midp_pane_ParamLimits

0x6c5d,	// (0x0005aee3) midp_canvas_pane

0x8dc2,	// (0x0005d048) nsta_clock_indic_pane

0x8df6,	// (0x0005d07c) listscroll_form_pane_vc

0x8dfe,	// (0x0005d084) listscroll_set_pane_vc_ParamLimits

0x8dfe,	// (0x0005d084) listscroll_set_pane_vc

0x8ef7,	// (0x0005d17d) clock_nsta_pane

0x8f72,	// (0x0005d1f8) indicator_nsta_pane

0x924f,	// (0x0005d4d5) bg_popup_sub_pane_cp2_ParamLimits

0x9263,	// (0x0005d4e9) find_pane_cp2_ParamLimits

0x9263,	// (0x0005d4e9) find_pane_cp2

0x9279,	// (0x0005d4ff) grid_toobar_pane_ParamLimits

0x9371,	// (0x0005d5f7) list_form_gen_pane_vc_ParamLimits

0x9371,	// (0x0005d5f7) list_form_gen_pane_vc

0x9387,	// (0x0005d60d) scroll_pane_cp8_vc_ParamLimits

0x9387,	// (0x0005d60d) scroll_pane_cp8_vc

0x9403,	// (0x0005d689) data_form_wide_pane_vc_ParamLimits

0x9403,	// (0x0005d689) data_form_wide_pane_vc

0x940f,	// (0x0005d695) form_field_data_wide_pane_vc_g1

0x9417,	// (0x0005d69d) form_field_data_wide_pane_vc_t1_ParamLimits

0x9417,	// (0x0005d69d) form_field_data_wide_pane_vc_t1

0xf1bc,	// (0x00063442) input_focus_pane_cp6_vc_ParamLimits

0xf1bc,	// (0x00063442) input_focus_pane_cp6_vc

0x9744,	// (0x0005d9ca) list_midp_pane_ParamLimits

0x9750,	// (0x0005d9d6) scroll_pane_cp16_ParamLimits

0x9750,	// (0x0005d9d6) scroll_pane_cp16

0x97b2,	// (0x0005da38) button_value_adjust_pane_ParamLimits

0x97b2,	// (0x0005da38) button_value_adjust_pane

0xa6f6,	// (0x0005e97c) button_value_adjust_pane_cp6_ParamLimits

0xa6f6,	// (0x0005e97c) button_value_adjust_pane_cp6

0xa81c,	// (0x0005eaa2) settings_code_pane_cp_ParamLimits

0xa81c,	// (0x0005eaa2) settings_code_pane_cp

0xeda4,	// (0x0006302a) cell_touch_pane_g1

0xeda4,	// (0x0006302a) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00063984) cell_touch_pane_g

0xafb3,	// (0x0005f239) cell_touch_pane_cp_ParamLimits

0xafb3,	// (0x0005f239) cell_touch_pane_cp

0xafc3,	// (0x0005f249) cell_touch_pane_ParamLimits

0xafc3,	// (0x0005f249) cell_touch_pane

0xeda4,	// (0x0006302a) scroll_sc2_down_pane_g1

0xeda4,	// (0x0006302a) scroll_sc2_up_pane_g1

0xedae,	// (0x00063034) bg_set_opt_pane_cp4_vc

0xafd5,	// (0x0005f25b) list_set_graphic_pane_vc_g1_ParamLimits

0xafd5,	// (0x0005f25b) list_set_graphic_pane_vc_g1

0xafe1,	// (0x0005f267) list_set_graphic_pane_vc_g2_ParamLimits

0xafe1,	// (0x0005f267) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x00063c80) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x00063c80) list_set_graphic_pane_vc_g

0xafed,	// (0x0005f273) text_primary_small_cp13_vc_ParamLimits

0xafed,	// (0x0005f273) text_primary_small_cp13_vc

0xb005,	// (0x0005f28b) list_set_graphic_pane_vc_ParamLimits

0xb005,	// (0x0005f28b) list_set_graphic_pane_vc

0xedae,	// (0x00063034) input_focus_pane_cp2_vc

0xeda4,	// (0x0006302a) setting_code_pane_vc_g1

0xee13,	// (0x00063099) setting_code_pane_vc_t1

0xb018,	// (0x0005f29e) set_text_pane_vc_t1_ParamLimits

0xb018,	// (0x0005f29e) set_text_pane_vc_t1

0xedae,	// (0x00063034) input_focus_pane_cp1_vc

0xb034,	// (0x0005f2ba) list_set_text_pane_vc

0xeda4,	// (0x0006302a) setting_text_pane_vc_g1

0xedae,	// (0x00063034) bg_set_opt_pane_cp2_vc

0xee0a,	// (0x00063090) setting_slider_graphic_pane_vc_g1

0xb03e,	// (0x0005f2c4) setting_slider_graphic_pane_vc_t1

0xb04e,	// (0x0005f2d4) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x00063c85) setting_slider_graphic_pane_vc_t

0xb05e,	// (0x0005f2e4) slider_set_pane_cp_vc

0xb066,	// (0x0005f2ec) slider_set_pane_vc_g1

0xb06f,	// (0x0005f2f5) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x00063c8a) slider_set_pane_vc_g

0xf214,	// (0x0006349a) set_opt_bg_pane_g1_copy1

0xf21c,	// (0x000634a2) set_opt_bg_pane_g2_copy1

0xb09b,	// (0x0005f321) set_opt_bg_pane_g3_copy1

0xf22c,	// (0x000634b2) set_opt_bg_pane_g4_copy1

0xf234,	// (0x000634ba) set_opt_bg_pane_g5_copy1

0xf23c,	// (0x000634c2) set_opt_bg_pane_g6_copy1

0xb0a3,	// (0x0005f329) set_opt_bg_pane_g7_copy1

0xb0ab,	// (0x0005f331) set_opt_bg_pane_g8_copy1

0xb0b3,	// (0x0005f339) set_opt_bg_pane_g9_copy1

0xedae,	// (0x00063034) bg_set_opt_pane_cp_vc

0xb0bb,	// (0x0005f341) setting_slider_pane_vc_t1

0xb0ca,	// (0x0005f350) setting_slider_pane_vc_t2

0xb0da,	// (0x0005f360) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x00063c99) setting_slider_pane_vc_t

0xb0ea,	// (0x0005f370) slider_set_pane_vc

0x7758,	// (0x0005b9de) volume_set_pane_vc_g1

0x7ae4,	// (0x0005bd6a) volume_set_pane_vc_g2

0x7aed,	// (0x0005bd73) volume_set_pane_vc_g3

0x7af6,	// (0x0005bd7c) volume_set_pane_vc_g4

0x7aff,	// (0x0005bd85) volume_set_pane_vc_g5

0x7b08,	// (0x0005bd8e) volume_set_pane_vc_g6

0x7b11,	// (0x0005bd97) volume_set_pane_vc_g7

0x7b1a,	// (0x0005bda0) volume_set_pane_vc_g8

0x7b23,	// (0x0005bda9) volume_set_pane_vc_g9

0x7b2c,	// (0x0005bdb2) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x00063ca0) volume_set_pane_vc_g

0xb0f2,	// (0x0005f378) volume_set_pane_vc

0xb0fa,	// (0x0005f380) button_value_adjust_pane_cp1_vc

0xb104,	// (0x0005f38a) list_highlight_pane_cp2_vc

0xb10d,	// (0x0005f393) list_set_pane_vc_ParamLimits

0xb10d,	// (0x0005f393) list_set_pane_vc

0xb16b,	// (0x0005f3f1) main_pane_set_vc_t1_ParamLimits

0xb16b,	// (0x0005f3f1) main_pane_set_vc_t1

0xb180,	// (0x0005f406) main_pane_set_vc_t2_ParamLimits

0xb180,	// (0x0005f406) main_pane_set_vc_t2

0xb192,	// (0x0005f418) main_pane_set_vc_t3_ParamLimits

0xb192,	// (0x0005f418) main_pane_set_vc_t3

0xb1a4,	// (0x0005f42a) main_pane_set_vc_t4_ParamLimits

0xb1a4,	// (0x0005f42a) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x00063cb5) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x00063cb5) main_pane_set_vc_t

0xb1b6,	// (0x0005f43c) setting_code_pane_vc_ParamLimits

0xb1b6,	// (0x0005f43c) setting_code_pane_vc

0xb1c5,	// (0x0005f44b) setting_slider_graphic_pane_vc

0xb1c5,	// (0x0005f44b) setting_slider_pane_vc

0xb1c5,	// (0x0005f44b) setting_text_pane_vc

0xb1c5,	// (0x0005f44b) setting_volume_pane_vc

0xb1cd,	// (0x0005f453) scroll_pane_cp121_vc

0xf196,	// (0x0006341c) set_content_pane_vc

0xb1d5,	// (0x0005f45b) button_value_adjust_pane_g1

0xb1de,	// (0x0005f464) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x00063d18) button_value_adjust_pane_g

0xb1e7,	// (0x0005f46d) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb1e7,	// (0x0005f46d) form_field_slider_wide_pane_vc_t1

0xb1fb,	// (0x0005f481) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb1fb,	// (0x0005f481) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x00063d1d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x00063d1d) form_field_slider_wide_pane_vc_t

0xef26,	// (0x000631ac) input_focus_pane_cp10_vc_ParamLimits

0xef26,	// (0x000631ac) input_focus_pane_cp10_vc

0xb229,	// (0x0005f4af) slider_cont_pane_cp1_vc_ParamLimits

0xb229,	// (0x0005f4af) slider_cont_pane_cp1_vc

0xb23b,	// (0x0005f4c1) slider_form_pane_g1_cp2

0xb06f,	// (0x0005f2f5) slider_form_pane_g2_cp2

0xb268,	// (0x0005f4ee) form_field_slider_pane_vc_t3

0xb276,	// (0x0005f4fc) form_field_slider_pane_vc_t4

0xb284,	// (0x0005f50a) slider_form_pane_vc_ParamLimits

0xb284,	// (0x0005f50a) slider_form_pane_vc

0xb291,	// (0x0005f517) form_field_slider_pane_vc_t1_ParamLimits

0xb291,	// (0x0005f517) form_field_slider_pane_vc_t1

0xb1fb,	// (0x0005f481) form_field_slider_pane_vc_t2_ParamLimits

0xb1fb,	// (0x0005f481) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x00063d2f) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x00063d2f) form_field_slider_pane_vc_t

0xef26,	// (0x000631ac) input_focus_pane_cp9_vc_ParamLimits

0xef26,	// (0x000631ac) input_focus_pane_cp9_vc

0xb2ad,	// (0x0005f533) slider_cont_pane_vc_ParamLimits

0xb2ad,	// (0x0005f533) slider_cont_pane_vc

0xb2c1,	// (0x0005f547) list_form_graphic_pane_cp_vc_ParamLimits

0xb2c1,	// (0x0005f547) list_form_graphic_pane_cp_vc

0x940f,	// (0x0005d695) form_field_popup_wide_pane_vc_g1

0xb2d6,	// (0x0005f55c) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb2d6,	// (0x0005f55c) form_field_popup_wide_pane_vc_t1

0xf1bc,	// (0x00063442) input_focus_pane_cp8_vc_ParamLimits

0xf1bc,	// (0x00063442) input_focus_pane_cp8_vc

0xb31b,	// (0x0005f5a1) list_form_wide_pane_vc_ParamLimits

0xb31b,	// (0x0005f5a1) list_form_wide_pane_vc

0xb327,	// (0x0005f5ad) list_form_graphic_pane_vc_g1

0xb32f,	// (0x0005f5b5) list_form_graphic_pane_vc_t1_ParamLimits

0xb32f,	// (0x0005f5b5) list_form_graphic_pane_vc_t1

0xedfc,	// (0x00063082) list_highlight_pane_cp5_vc_ParamLimits

0xedfc,	// (0x00063082) list_highlight_pane_cp5_vc

0xb34b,	// (0x0005f5d1) list_form_graphic_pane_vc_ParamLimits

0xb34b,	// (0x0005f5d1) list_form_graphic_pane_vc

0x940f,	// (0x0005d695) form_field_popup_pane_vc_g1

0xb361,	// (0x0005f5e7) form_field_popup_pane_vc_t1_ParamLimits

0xb361,	// (0x0005f5e7) form_field_popup_pane_vc_t1

0xf1bc,	// (0x00063442) input_focus_pane_cp7_vc_ParamLimits

0xf1bc,	// (0x00063442) input_focus_pane_cp7_vc

0xb378,	// (0x0005f5fe) list_form_pane_vc_ParamLimits

0xb378,	// (0x0005f5fe) list_form_pane_vc

0xb384,	// (0x0005f60a) data_form_pane_vc_t1_ParamLimits

0xb384,	// (0x0005f60a) data_form_pane_vc_t1

0xf214,	// (0x0006349a) input_focus_pane_vc_g1

0xf21c,	// (0x000634a2) input_focus_pane_vc_g2

0xf224,	// (0x000634aa) input_focus_pane_vc_g3

0xf22c,	// (0x000634b2) input_focus_pane_vc_g4

0xf234,	// (0x000634ba) input_focus_pane_vc_g5

0xf23c,	// (0x000634c2) input_focus_pane_vc_g6

0xf244,	// (0x000634ca) input_focus_pane_vc_g7

0xf24c,	// (0x000634d2) input_focus_pane_vc_g8

0xf254,	// (0x000634da) input_focus_pane_vc_g9

0xeda4,	// (0x0006302a) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0006390d) input_focus_pane_vc_g

0x9403,	// (0x0005d689) data_form_pane_vc_ParamLimits

0x9403,	// (0x0005d689) data_form_pane_vc

0x940f,	// (0x0005d695) form_field_data_pane_vc_g1

0xb39f,	// (0x0005f625) form_field_data_pane_vc_t1_ParamLimits

0xb39f,	// (0x0005f625) form_field_data_pane_vc_t1

0xf1bc,	// (0x00063442) input_focus_pane_vc_ParamLimits

0xf1bc,	// (0x00063442) input_focus_pane_vc

0xb3b9,	// (0x0005f63f) button_value_adjust_pane_cp3_vc

0xb3c1,	// (0x0005f647) button_value_adjust_pane_cp5_vc

0xb3c9,	// (0x0005f64f) form_field_data_pane_vc_ParamLimits

0xb3c9,	// (0x0005f64f) form_field_data_pane_vc

0xb3e0,	// (0x0005f666) form_field_data_pane_vc_cp2

0xb3e8,	// (0x0005f66e) form_field_data_wide_pane_vc_ParamLimits

0xb3e8,	// (0x0005f66e) form_field_data_wide_pane_vc

0xb3fe,	// (0x0005f684) form_field_data_wide_pane_vc_cp2

0xb406,	// (0x0005f68c) form_field_popup_pane_vc_ParamLimits

0xb406,	// (0x0005f68c) form_field_popup_pane_vc

0xb41d,	// (0x0005f6a3) form_field_popup_wide_pane_vc_ParamLimits

0xb41d,	// (0x0005f6a3) form_field_popup_wide_pane_vc

0xb433,	// (0x0005f6b9) form_field_slider_pane_vc_ParamLimits

0xb433,	// (0x0005f6b9) form_field_slider_pane_vc

0xb446,	// (0x0005f6cc) form_field_slider_wide_pane_vc_ParamLimits

0xb446,	// (0x0005f6cc) form_field_slider_wide_pane_vc

0xb459,	// (0x0005f6df) grid_touch_1_pane_ParamLimits

0xb459,	// (0x0005f6df) grid_touch_1_pane

0xb465,	// (0x0005f6eb) grid_touch_2_pane_ParamLimits

0xb465,	// (0x0005f6eb) grid_touch_2_pane

0x8d8d,	// (0x0005d013) touch_pane_g1_ParamLimits

0x8d8d,	// (0x0005d013) touch_pane_g1

0xb47d,	// (0x0005f703) cell_app_pane_cp_wide_ParamLimits

0xb47d,	// (0x0005f703) cell_app_pane_cp_wide

0xb48e,	// (0x0005f714) grid_popup_fast_wide_pane_ParamLimits

0xb48e,	// (0x0005f714) grid_popup_fast_wide_pane

0xb4a2,	// (0x0005f728) scroll_pane_cp19_ParamLimits

0xb4a2,	// (0x0005f728) scroll_pane_cp19

0xedae,	// (0x00063034) bg_popup_window_pane_cp20

0xb4b6,	// (0x0005f73c) listscroll_popup_fast_wide_pane

0xedfc,	// (0x00063082) grid_indicator_nsta_pane

0xb4be,	// (0x0005f744) clock_nsta_pane_g1

0xb4c7,	// (0x0005f74d) clock_nsta_pane_t1

0xb4e3,	// (0x0005f769) cell_indicator_nsta_pane_ParamLimits

0xb4e3,	// (0x0005f769) cell_indicator_nsta_pane

0xb514,	// (0x0005f79a) cell_indicator_nsta_pane_g1

0xb522,	// (0x0005f7a8) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x00063d40) cell_indicator_nsta_pane_g

0xb52f,	// (0x0005f7b5) clock_nsta_pane_cp

0xb538,	// (0x0005f7be) indicator_nsta_pane_cp

0xb540,	// (0x0005f7c6) nsta_clock_indic_pane_g1

0xee38,	// (0x000630be) grid_indicator_pane

0x6803,	// (0x0005aa89) scroll_pane_cp29

0x6a8d,	// (0x0005ad13) indicator_nsta_pane_cp2_ParamLimits

0x6a8d,	// (0x0005ad13) indicator_nsta_pane_cp2

0xedfc,	// (0x00063082) main_apps_wheel_pane

0x9627,	// (0x0005d8ad) form_midp_field_text_pane_ParamLimits

0x9770,	// (0x0005d9f6) scroll_bar_cp050_ParamLimits

0xb590,	// (0x0005f816) cell_indicator_pane_ParamLimits

0xb590,	// (0x0005f816) cell_indicator_pane

0xb5a9,	// (0x0005f82f) cell_indicator_pane_g1

0xb5b3,	// (0x0005f839) grid_wheel_folder_pane_ParamLimits

0xb5b3,	// (0x0005f839) grid_wheel_folder_pane

0xb5c9,	// (0x0005f84f) list_wheel_apps_pane_ParamLimits

0xb5c9,	// (0x0005f84f) list_wheel_apps_pane

0xb5da,	// (0x0005f860) main_apps_wheel_pane_g1_ParamLimits

0xb5da,	// (0x0005f860) main_apps_wheel_pane_g1

0xb5ee,	// (0x0005f874) main_apps_wheel_pane_g2_ParamLimits

0xb5ee,	// (0x0005f874) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x00063d5c) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x00063d5c) main_apps_wheel_pane_g

0xb606,	// (0x0005f88c) main_apps_wheel_pane_t1_ParamLimits

0xb606,	// (0x0005f88c) main_apps_wheel_pane_t1

0xb629,	// (0x0005f8af) list_wheel_apps_pane_g1

0xb631,	// (0x0005f8b7) list_wheel_apps_pane_g2

0xb639,	// (0x0005f8bf) list_wheel_apps_pane_g3

0xb643,	// (0x0005f8c9) list_wheel_apps_pane_g4

0xb64d,	// (0x0005f8d3) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x00063d61) list_wheel_apps_pane_g

0x3773,	// (0x000579f9) navi_icon_text_pane

0x8e26,	// (0x0005d0ac) aid_fill_nsta

0xb670,	// (0x0005f8f6) navi_icon_text_pane_g1

0xb67c,	// (0x0005f902) navi_icon_text_pane_t1

0x3663,	// (0x000578e9) list_set_graphic_pane_t1_ParamLimits

0x3663,	// (0x000578e9) list_set_graphic_pane_t1

0x9eb3,	// (0x0005e139) popup_midp_note_alarm_window_t6_ParamLimits

0x9eb3,	// (0x0005e139) popup_midp_note_alarm_window_t6

0x9ec5,	// (0x0005e14b) popup_midp_note_alarm_window_t7_ParamLimits

0x9ec5,	// (0x0005e14b) popup_midp_note_alarm_window_t7

0x9ed7,	// (0x0005e15d) popup_midp_note_alarm_window_t8_ParamLimits

0x9ed7,	// (0x0005e15d) popup_midp_note_alarm_window_t8

0x9ee9,	// (0x0005e16f) popup_midp_note_alarm_window_t9_ParamLimits

0x9ee9,	// (0x0005e16f) popup_midp_note_alarm_window_t9

0x9efb,	// (0x0005e181) popup_midp_note_alarm_window_t10_ParamLimits

0x9efb,	// (0x0005e181) popup_midp_note_alarm_window_t10

0x9f0d,	// (0x0005e193) popup_midp_note_alarm_window_t11_ParamLimits

0x9f0d,	// (0x0005e193) popup_midp_note_alarm_window_t11

0x9f1f,	// (0x0005e1a5) scroll_pane_cp17_ParamLimits

0x9f1f,	// (0x0005e1a5) scroll_pane_cp17

0x7758,	// (0x0005b9de) volume_small_pane_cp_g1

0x7b35,	// (0x0005bdbb) volume_small_pane_cp_g2

0x7b3e,	// (0x0005bdc4) volume_small_pane_cp_g3

0x7b47,	// (0x0005bdcd) volume_small_pane_cp_g4

0x7b50,	// (0x0005bdd6) volume_small_pane_cp_g5

0x7aff,	// (0x0005bd85) volume_small_pane_cp_g6

0x7b59,	// (0x0005bddf) volume_small_pane_cp_g7

0x7b62,	// (0x0005bde8) volume_small_pane_cp_g8

0x7b6b,	// (0x0005bdf1) volume_small_pane_cp_g9

0x7b74,	// (0x0005bdfa) volume_small_pane_cp_g10

0x6d2a,	// (0x0005afb0) midp_ticker_pane_g1_ParamLimits

0x6d36,	// (0x0005afbc) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x000639d9) midp_ticker_pane_g_ParamLimits

0x6d42,	// (0x0005afc8) midp_ticker_pane_t1_ParamLimits

0x8e3c,	// (0x0005d0c2) aid_fill_nsta_2

0x975c,	// (0x0005d9e2) list_form2_midp_pane

0xa867,	// (0x0005eaed) midp_editing_number_pane_ParamLimits

0xa876,	// (0x0005eafc) midp_ticker_pane_ParamLimits

0xb68e,	// (0x0005f914) form2_midp_field_pane

0xb6b2,	// (0x0005f938) scroll_pane_cp51

0xb6d2,	// (0x0005f958) form2_midp_button_pane_ParamLimits

0xb6d2,	// (0x0005f958) form2_midp_button_pane

0xb6e4,	// (0x0005f96a) form2_midp_content_pane_ParamLimits

0xb6e4,	// (0x0005f96a) form2_midp_content_pane

0xb6fe,	// (0x0005f984) form2_midp_field_choice_group_pane

0xb706,	// (0x0005f98c) form2_midp_field_pane_g1

0xb70e,	// (0x0005f994) form2_midp_field_pane_g2

0xb716,	// (0x0005f99c) form2_midp_field_pane_g3

0xb71e,	// (0x0005f9a4) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x00063d86) form2_midp_field_pane_g

0xb726,	// (0x0005f9ac) form2_midp_gauge_slider_pane

0xb72e,	// (0x0005f9b4) form2_midp_gauge_wait_pane

0xb736,	// (0x0005f9bc) form2_midp_image_pane_ParamLimits

0xb736,	// (0x0005f9bc) form2_midp_image_pane

0xb751,	// (0x0005f9d7) form2_midp_label_pane_ParamLimits

0xb751,	// (0x0005f9d7) form2_midp_label_pane

0xb76a,	// (0x0005f9f0) form2_midp_label_pane_cp_ParamLimits

0xb76a,	// (0x0005f9f0) form2_midp_label_pane_cp

0xb78b,	// (0x0005fa11) form2_midp_string_pane_ParamLimits

0xb78b,	// (0x0005fa11) form2_midp_string_pane

0x7b7d,	// (0x0005be03) form2_midp_text_pane_ParamLimits

0x7b7d,	// (0x0005be03) form2_midp_text_pane

0xb79d,	// (0x0005fa23) form2_midp_time_pane

0xb7ad,	// (0x0005fa33) input_focus_pane_cp51_ParamLimits

0xb7ad,	// (0x0005fa33) input_focus_pane_cp51

0xb7c5,	// (0x0005fa4b) form2_midp_label_pane_t1_ParamLimits

0xb7c5,	// (0x0005fa4b) form2_midp_label_pane_t1

0x7b9a,	// (0x0005be20) form2_mdip_text_pane_t1_ParamLimits

0x7b9a,	// (0x0005be20) form2_mdip_text_pane_t1

0x466f,	// (0x000588f5) form2_midp_time_pane_t1

0xb80e,	// (0x0005fa94) form2_midp_gauge_slider_pane_t1

0xb820,	// (0x0005faa6) form2_midp_gauge_slider_pane_t2

0xb832,	// (0x0005fab8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x00063d8f) form2_midp_gauge_slider_pane_t

0xb844,	// (0x0005faca) form2_midp_slider_pane

0xb850,	// (0x0005fad6) form2_midp_gauge_wait_pane_t1

0xb85e,	// (0x0005fae4) form2_midp_wait_pane_ParamLimits

0xb85e,	// (0x0005fae4) form2_midp_wait_pane

0xb889,	// (0x0005fb0f) list_single_2graphic_pane_cp4_ParamLimits

0xb889,	// (0x0005fb0f) list_single_2graphic_pane_cp4

0x9478,	// (0x0005d6fe) list_single_midp_graphic_pane_cp_ParamLimits

0x9478,	// (0x0005d6fe) list_single_midp_graphic_pane_cp

0xedae,	// (0x00063034) list_highlight_pane_cp20

0xb8b1,	// (0x0005fb37) list_single_2graphic_pane_g1_cp4

0xaeb9,	// (0x0005f13f) list_single_2graphic_pane_g2_cp4

0xb8b9,	// (0x0005fb3f) list_single_2graphic_pane_t1_cp4

0xedfc,	// (0x00063082) list_highlight_pane_cp21

0xb8c8,	// (0x0005fb4e) list_single_midp_graphic_pane_g4_cp

0xb8d7,	// (0x0005fb5d) list_single_midp_graphic_pane_t1_cp

0xb8ec,	// (0x0005fb72) form2_mdip_string_pane_t1_ParamLimits

0xb8ec,	// (0x0005fb72) form2_mdip_string_pane_t1

0xedae,	// (0x00063034) bg_wml_button_pane_cp2

0xeda4,	// (0x0006302a) form2_midp_image_pane_g1

0x4850,	// (0x00058ad6) list_double_large_graphic_pane_g5_ParamLimits

0x4850,	// (0x00058ad6) list_double_large_graphic_pane_g5

0x6c51,	// (0x0005aed7) midp_form_pane_ParamLimits

0xedfc,	// (0x00063082) main_apps_wheel_pane_ParamLimits

0x73d6,	// (0x0005b65c) popup_preview_window_ParamLimits

0x73d6,	// (0x0005b65c) popup_preview_window

0x7591,	// (0x0005b817) popup_touch_info_window_ParamLimits

0x7591,	// (0x0005b817) popup_touch_info_window

0x75af,	// (0x0005b835) popup_touch_menu_window_ParamLimits

0x75af,	// (0x0005b835) popup_touch_menu_window

0xed9a,	// (0x00063020) bg_popup_sub_pane_cp6

0xb9f3,	// (0x0005fc79) list_touch_menu_pane

0xb9fb,	// (0x0005fc81) list_single_touch_menu_pane_ParamLimits

0xb9fb,	// (0x0005fc81) list_single_touch_menu_pane

0xba11,	// (0x0005fc97) list_single_touch_menu_pane_t1

0xedfc,	// (0x00063082) bg_popup_sub_pane_cp7_ParamLimits

0xedfc,	// (0x00063082) bg_popup_sub_pane_cp7

0xba1f,	// (0x0005fca5) heading_sub_pane

0xba27,	// (0x0005fcad) list_touch_info_pane_ParamLimits

0xba27,	// (0x0005fcad) list_touch_info_pane

0xba36,	// (0x0005fcbc) list_single_touch_info_pane_ParamLimits

0xba36,	// (0x0005fcbc) list_single_touch_info_pane

0xba48,	// (0x0005fcce) list_single_touch_info_pane_t1

0xba56,	// (0x0005fcdc) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x00063d9d) list_single_touch_info_pane_t

0x38c5,	// (0x00057b4b) bg_popup_heading_pane_cp

0xba64,	// (0x0005fcea) heading_sub_pane_t1

0x939d,	// (0x0005d623) bg_popup_preview_window_pane_cp_ParamLimits

0x939d,	// (0x0005d623) bg_popup_preview_window_pane_cp

0xba1f,	// (0x0005fca5) heading_preview_pane

0xba27,	// (0x0005fcad) list_preview_pane_ParamLimits

0xba27,	// (0x0005fcad) list_preview_pane

0xba72,	// (0x0005fcf8) popup_preview_window_g1

0xba36,	// (0x0005fcbc) list_single_preview_pane_ParamLimits

0xba36,	// (0x0005fcbc) list_single_preview_pane

0xba7a,	// (0x0005fd00) list_single_preview_pane_g1

0xba82,	// (0x0005fd08) list_single_preview_pane_t1

0xba48,	// (0x0005fcce) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x00063da2) list_single_preview_pane_t

0xba90,	// (0x0005fd16) bg_popup_heading_pane_cp2_ParamLimits

0xba90,	// (0x0005fd16) bg_popup_heading_pane_cp2

0xbaa6,	// (0x0005fd2c) heading_preview_pane_g1

0xbaae,	// (0x0005fd34) heading_preview_pane_t1_ParamLimits

0xbaae,	// (0x0005fd34) heading_preview_pane_t1

0xee4f,	// (0x000630d5) soft_indicator_pane_t1_ParamLimits

0xf138,	// (0x000633be) scroll_pane_ParamLimits

0xf4c2,	// (0x00063748) scroll_sc2_left_pane

0xf4cb,	// (0x00063751) scroll_sc2_right_pane

0xf4ea,	// (0x00063770) scroll_bg_pane_g1_ParamLimits

0xf4ff,	// (0x00063785) scroll_bg_pane_g2_ParamLimits

0xf517,	// (0x0006379d) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00063964) scroll_bg_pane_g_ParamLimits

0xf4ea,	// (0x00063770) scroll_handle_pane_g1_ParamLimits

0xf52c,	// (0x000637b2) scroll_handle_pane_g2_ParamLimits

0xf517,	// (0x0006379d) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0006396b) scroll_handle_pane_g_ParamLimits

0x7059,	// (0x0005b2df) popup_choice_list_window_ParamLimits

0x7059,	// (0x0005b2df) popup_choice_list_window

0x925b,	// (0x0005d4e1) choice_list_pane

0x92dd,	// (0x0005d563) cell_toolbar_pane_t1

0x9305,	// (0x0005d58b) toolbar_button_pane_ParamLimits

0xa3d9,	// (0x0005e65f) ai_gene_pane_1_t2_ParamLimits

0xa3d9,	// (0x0005e65f) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x00063b93) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x00063b93) ai_gene_pane_1_t

0xbacb,	// (0x0005fd51) scroll_sc2_left_pane_g1

0xbacb,	// (0x0005fd51) scroll_sc2_right_pane_g1

0x8dea,	// (0x0005d070) bg_popup_sub_pane_cp10

0xbad5,	// (0x0005fd5b) list_choice_list_pane

0xbaee,	// (0x0005fd74) list_single_choice_list_pane_ParamLimits

0xbaee,	// (0x0005fd74) list_single_choice_list_pane

0xbb01,	// (0x0005fd87) list_single_choice_list_pane_g1

0x64aa,	// (0x0005a730) list_single_choice_list_pane_t1_ParamLimits

0x64aa,	// (0x0005a730) list_single_choice_list_pane_t1

0xbb09,	// (0x0005fd8f) choice_list_pane_g1

0xbb11,	// (0x0005fd97) choice_list_pane_t1

0xed9a,	// (0x00063020) input_focus_pane_cp11

0xf437,	// (0x000636bd) title_pane_stacon_g2_ParamLimits

0xf437,	// (0x000636bd) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0006394a) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0006394a) title_pane_stacon_g

0x38c5,	// (0x00057b4b) cursor_press_pane

0x7101,	// (0x0005b387) popup_fep_hwr_window_ParamLimits

0x7101,	// (0x0005b387) popup_fep_hwr_window

0x7179,	// (0x0005b3ff) popup_fep_vkb_window_ParamLimits

0x7179,	// (0x0005b3ff) popup_fep_vkb_window

0xbb1f,	// (0x0005fda5) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x00063dcb) fep_vkb_side_pane_g_ParamLimits

0x7bf1,	// (0x0005be77) fep_hwr_candidate_pane_ParamLimits

0x7bf1,	// (0x0005be77) fep_hwr_candidate_pane

0x7c1b,	// (0x0005bea1) fep_hwr_side_pane_ParamLimits

0x7c1b,	// (0x0005bea1) fep_hwr_side_pane

0x7c3b,	// (0x0005bec1) fep_hwr_top_pane_ParamLimits

0x7c3b,	// (0x0005bec1) fep_hwr_top_pane

0x7c53,	// (0x0005bed9) fep_hwr_write_pane_ParamLimits

0x7c53,	// (0x0005bed9) fep_hwr_write_pane

0xfb45,	// (0x00063dcb) fep_vkb_side_pane_g

0xbb27,	// (0x0005fdad) fep_hwr_top_pane_g1

0xbb39,	// (0x0005fdbf) fep_hwr_top_pane_g2

0x7c8d,	// (0x0005bf13) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x00063da7) fep_hwr_top_pane_g

0x7ca2,	// (0x0005bf28) fep_hwr_top_text_pane

0x137f,	// (0x00055605) fep_hwr_top_text_pane_g1

0xbb6f,	// (0x0005fdf5) fep_hwr_top_text_pane_t1

0x7d98,	// (0x0005c01e) fep_hwr_candidate_pane_g1

0xbdb4,	// (0x0006003a) fep_vkb_keypad_pane_g3_ParamLimits

0xbdb4,	// (0x0006003a) fep_vkb_keypad_pane_g3

0xbddc,	// (0x00060062) fep_vkb_keypad_pane_g4_ParamLimits

0xbddc,	// (0x00060062) fep_vkb_keypad_pane_g4

0xbe4b,	// (0x000600d1) fep_vkb_bottom_pane_g2_ParamLimits

0xbe4b,	// (0x000600d1) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x00063dd2) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x00063dd2) fep_vkb_bottom_pane_g

0xbacb,	// (0x0005fd51) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x00063ddc) cell_vkb_side_pane_g

0xbed6,	// (0x0006015c) cell_vkb_side_pane_t1

0xbee4,	// (0x0006016a) cell_vkb_side_pane_t1_copy1

0xbacb,	// (0x0005fd51) bg_fep_vkb_candidate_pane_g2

0xc010,	// (0x00060296) cell_vkb_candidate_pane_ParamLimits

0xbb7d,	// (0x0005fe03) aid_size_cell_vkb_ParamLimits

0xbb7d,	// (0x0005fe03) aid_size_cell_vkb

0xc010,	// (0x00060296) cell_vkb_candidate_pane

0x7dbf,	// (0x0005c045) bg_popup_fep_shadow_pane_g1

0xbc0b,	// (0x0005fe91) fep_vkb_bottom_pane_ParamLimits

0xbc0b,	// (0x0005fe91) fep_vkb_bottom_pane

0xbc41,	// (0x0005fec7) fep_vkb_candidate_pane_ParamLimits

0xbc41,	// (0x0005fec7) fep_vkb_candidate_pane

0xbc5d,	// (0x0005fee3) fep_vkb_keypad_pane_ParamLimits

0xbc5d,	// (0x0005fee3) fep_vkb_keypad_pane

0xbc9c,	// (0x0005ff22) fep_vkb_side_pane_ParamLimits

0xbc9c,	// (0x0005ff22) fep_vkb_side_pane

0xbcd8,	// (0x0005ff5e) fep_vkb_top_pane_ParamLimits

0xbcd8,	// (0x0005ff5e) fep_vkb_top_pane

0xbd0d,	// (0x0005ff93) fep_vkb_top_pane_g1_ParamLimits

0xbd0d,	// (0x0005ff93) fep_vkb_top_pane_g1

0xbd1c,	// (0x0005ffa2) fep_vkb_top_pane_g2_ParamLimits

0xbd1c,	// (0x0005ffa2) fep_vkb_top_pane_g2

0xbd2b,	// (0x0005ffb1) fep_vkb_top_pane_g3_ParamLimits

0xbd2b,	// (0x0005ffb1) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x00063dc2) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x00063dc2) fep_vkb_top_pane_g

0xbd49,	// (0x0005ffcf) fep_vkb_top_text_pane_ParamLimits

0xbd49,	// (0x0005ffcf) fep_vkb_top_text_pane

0xbd5a,	// (0x0005ffe0) fep_vkb_side_pane_g1_ParamLimits

0xbd5a,	// (0x0005ffe0) fep_vkb_side_pane_g1

0xbda3,	// (0x00060029) grid_vkb_side_pane_ParamLimits

0xbda3,	// (0x00060029) grid_vkb_side_pane

0x7dc7,	// (0x0005c04d) bg_popup_fep_shadow_pane_g2

0x7dd0,	// (0x0005c056) bg_popup_fep_shadow_pane_g3

0x7dd8,	// (0x0005c05e) bg_popup_fep_shadow_pane_g4

0x7de1,	// (0x0005c067) bg_popup_fep_shadow_pane_g5

0x7deb,	// (0x0005c071) bg_popup_fep_shadow_pane_g6

0x7df3,	// (0x0005c079) bg_popup_fep_shadow_pane_g7

0xf22c,	// (0x000634b2) bg_popup_fep_shadow_pane_g8

0xbdfa,	// (0x00060080) grid_vkb_keypad_number_pane_ParamLimits

0xbdfa,	// (0x00060080) grid_vkb_keypad_number_pane

0xbe0a,	// (0x00060090) grid_vkb_keypad_pane_ParamLimits

0xbe0a,	// (0x00060090) grid_vkb_keypad_pane

0xbe30,	// (0x000600b6) fep_vkb_bottom_pane_g1_ParamLimits

0xbe30,	// (0x000600b6) fep_vkb_bottom_pane_g1

0xbe59,	// (0x000600df) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbe59,	// (0x000600df) grid_vkb_keypad_bottom_left_pane

0xbe6e,	// (0x000600f4) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbe6e,	// (0x000600f4) grid_vkb_keypad_bottom_right_pane

0xbe83,	// (0x00060109) fep_vkb_top_text_pane_g1

0xbe9e,	// (0x00060124) fep_vkb_top_text_pane_t1

0xbeb3,	// (0x00060139) cell_vkb_side_pane_ParamLimits

0xbeb3,	// (0x00060139) cell_vkb_side_pane

0xbacb,	// (0x0005fd51) cell_vkb_side_pane_g1

0xbef2,	// (0x00060178) cell_vkb_keypad_pane_ParamLimits

0xbef2,	// (0x00060178) cell_vkb_keypad_pane

0xbf67,	// (0x000601ed) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x00063def) bg_popup_fep_shadow_pane_g

0x7e05,	// (0x0005c08b) cell_hwr_side_pane_g1

0x7e05,	// (0x0005c08b) cell_hwr_side_pane_g2

0xbf71,	// (0x000601f7) cell_vkb_keypad_pane_t1

0xbf7f,	// (0x00060205) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbf7f,	// (0x00060205) cell_vkb_keypad_bottom_left_pane

0xbf9c,	// (0x00060222) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbf9c,	// (0x00060222) cell_vkb_keypad_bottom_right_pane

0xbacb,	// (0x0005fd51) cell_vkb_keypad_bottom_left_pane_g1

0xbacb,	// (0x0005fd51) cell_vkb_keypad_bottom_right_pane_g1

0xbfd5,	// (0x0006025b) cell_vkb_keypad_number_pane_ParamLimits

0xbfd5,	// (0x0006025b) cell_vkb_keypad_number_pane

0xbff4,	// (0x0006027a) cell_vkb_keypad_number_pane_g1

0xbffe,	// (0x00060284) cell_vkb_keypad_number_pane_g2

0xc007,	// (0x0006028d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x00063de1) cell_vkb_keypad_number_pane_g

0xbf71,	// (0x000601f7) cell_vkb_keypad_number_pane_t1

0xc02b,	// (0x000602b1) fep_vkb_candidate_pane_g1

0x0001,

0xfb7c,	// (0x00063e02) cell_hwr_side_pane_g

0xc044,	// (0x000602ca) cell_hwr_side_pane_t1

0x7e0f,	// (0x0005c095) cell_hwr_side_pane_t1_copy1

0x7e1d,	// (0x0005c0a3) cell_hwr_candidate_pane_g1

0x7e4c,	// (0x0005c0d2) cell_hwr_candidate_pane_t1

0xbacb,	// (0x0005fd51) cell_vkb_candidate_pane_g2

0xc088,	// (0x0006030e) cell_vkb_candidate_pane_t1

0x7bb8,	// (0x0005be3e) bg_popup_fep_shadow_pane_ParamLimits

0x7bb8,	// (0x0005be3e) bg_popup_fep_shadow_pane

0x7c6d,	// (0x0005bef3) bg_fep_hwr_top_pane_g4

0xbb4b,	// (0x0005fdd1) bg_hwr_side_pane_g1_ParamLimits

0xbb4b,	// (0x0005fdd1) bg_hwr_side_pane_g1

0x7cde,	// (0x0005bf64) cell_hwr_side_pane_ParamLimits

0x7cde,	// (0x0005bf64) cell_hwr_side_pane

0x7d19,	// (0x0005bf9f) fep_hwr_write_pane_g1_ParamLimits

0x7d19,	// (0x0005bf9f) fep_hwr_write_pane_g1

0x7d26,	// (0x0005bfac) fep_hwr_write_pane_g2_ParamLimits

0x7d26,	// (0x0005bfac) fep_hwr_write_pane_g2

0x7d33,	// (0x0005bfb9) fep_hwr_write_pane_g3_ParamLimits

0x7d33,	// (0x0005bfb9) fep_hwr_write_pane_g3

0x7d41,	// (0x0005bfc7) fep_hwr_write_pane_g4_ParamLimits

0x7d41,	// (0x0005bfc7) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x00063dae) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x00063dae) fep_hwr_write_pane_g

0x7c6d,	// (0x0005bef3) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7c6d,	// (0x0005bef3) bg_fep_hwr_candidate_pane_g2

0x7d56,	// (0x0005bfdc) cell_hwr_candidate_pane_ParamLimits

0x7d56,	// (0x0005bfdc) cell_hwr_candidate_pane

0x7d98,	// (0x0005c01e) fep_hwr_candidate_pane_g1_ParamLimits

0xbbab,	// (0x0005fe31) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbbab,	// (0x0005fe31) bg_popup_fep_shadow_pane_cp2

0xbd3b,	// (0x0005ffc1) fep_vkb_top_pane_g4_ParamLimits

0xbd3b,	// (0x0005ffc1) fep_vkb_top_pane_g4

0xbd81,	// (0x00060007) fep_vkb_side_pane_g2_ParamLimits

0xbd81,	// (0x00060007) fep_vkb_side_pane_g2

0x61c2,	// (0x0005a448) list_setting_pane_t4_ParamLimits

0x61c2,	// (0x0005a448) list_setting_pane_t4

0x625c,	// (0x0005a4e2) list_setting_number_pane_t5_ParamLimits

0x625c,	// (0x0005a4e2) list_setting_number_pane_t5

0x6832,	// (0x0005aab8) list_double_heading_pane_cp2_ParamLimits

0x6832,	// (0x0005aab8) list_double_heading_pane_cp2

0xadac,	// (0x0005f032) list_double_heading_pane_g1_cp2_ParamLimits

0xadac,	// (0x0005f032) list_double_heading_pane_g1_cp2

0xc096,	// (0x0006031c) list_double_heading_pane_g2_cp2_ParamLimits

0xc096,	// (0x0006031c) list_double_heading_pane_g2_cp2

0xc0aa,	// (0x00060330) list_double_heading_pane_t1_cp2_ParamLimits

0xc0aa,	// (0x00060330) list_double_heading_pane_t1_cp2

0xc0c0,	// (0x00060346) list_double_heading_pane_t2_cp2_ParamLimits

0xc0c0,	// (0x00060346) list_double_heading_pane_t2_cp2

0xed92,	// (0x00063018) aid_value_unit2

0x5720,	// (0x000599a6) popup_preview_fixed_window

0xef34,	// (0x000631ba) bg_popup_preview_window_pane_cp02

0xc0d2,	// (0x00060358) list_preview_fixed_pane

0xc118,	// (0x0006039e) list_empty_pane_fp_ParamLimits

0xc118,	// (0x0006039e) list_empty_pane_fp

0xc118,	// (0x0006039e) list_single_cale_day_pane_fp_ParamLimits

0xc118,	// (0x0006039e) list_single_cale_day_pane_fp

0xc118,	// (0x0006039e) list_single_graphic_heading_pane_fp_ParamLimits

0xc118,	// (0x0006039e) list_single_graphic_heading_pane_fp

0xc118,	// (0x0006039e) list_single_graphic_pane_fp_ParamLimits

0xc118,	// (0x0006039e) list_single_graphic_pane_fp

0xc118,	// (0x0006039e) list_single_heading_pane_fp_ParamLimits

0xc118,	// (0x0006039e) list_single_heading_pane_fp

0xc118,	// (0x0006039e) list_single_pane_fp_ParamLimits

0xc118,	// (0x0006039e) list_single_pane_fp

0xc12e,	// (0x000603b4) list_single_pane_fp_g1_ParamLimits

0xc12e,	// (0x000603b4) list_single_pane_fp_g1

0xc13a,	// (0x000603c0) list_single_pane_fp_g2_ParamLimits

0xc13a,	// (0x000603c0) list_single_pane_fp_g2

0xc146,	// (0x000603cc) list_single_pane_fp_g3_ParamLimits

0xc146,	// (0x000603cc) list_single_pane_fp_g3

0xc15a,	// (0x000603e0) list_single_pane_fp_g4_ParamLimits

0xc15a,	// (0x000603e0) list_single_pane_fp_g4

0x0003,

0xfb8f,	// (0x00063e15) list_single_pane_fp_g_ParamLimits

0xfb8f,	// (0x00063e15) list_single_pane_fp_g

0x4682,	// (0x00058908) list_single_pane_fp_t1_ParamLimits

0x4682,	// (0x00058908) list_single_pane_fp_t1

0x4699,	// (0x0005891f) list_single_graphic_pane_fp_g1_ParamLimits

0x4699,	// (0x0005891f) list_single_graphic_pane_fp_g1

0xc12e,	// (0x000603b4) list_single_graphic_pane_fp_g2_ParamLimits

0xc12e,	// (0x000603b4) list_single_graphic_pane_fp_g2

0xc13a,	// (0x000603c0) list_single_graphic_pane_fp_g3_ParamLimits

0xc13a,	// (0x000603c0) list_single_graphic_pane_fp_g3

0xc146,	// (0x000603cc) list_single_graphic_pane_fp_g4_ParamLimits

0xc146,	// (0x000603cc) list_single_graphic_pane_fp_g4

0xc15a,	// (0x000603e0) list_single_graphic_pane_fp_g5_ParamLimits

0xc15a,	// (0x000603e0) list_single_graphic_pane_fp_g5

0x0004,

0xfb98,	// (0x00063e1e) list_single_graphic_pane_fp_g_ParamLimits

0xfb98,	// (0x00063e1e) list_single_graphic_pane_fp_g

0x46a5,	// (0x0005892b) list_single_graphic_pane_fp_t1_ParamLimits

0x46a5,	// (0x0005892b) list_single_graphic_pane_fp_t1

0x4699,	// (0x0005891f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4699,	// (0x0005891f) list_single_graphic_heading_pane_fp_g1

0xc12e,	// (0x000603b4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc12e,	// (0x000603b4) list_single_graphic_heading_pane_fp_g2

0xc13a,	// (0x000603c0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc13a,	// (0x000603c0) list_single_graphic_heading_pane_fp_g3

0xc146,	// (0x000603cc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc146,	// (0x000603cc) list_single_graphic_heading_pane_fp_g4

0xc15a,	// (0x000603e0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc15a,	// (0x000603e0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00063e1e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00063e1e) list_single_graphic_heading_pane_fp_g

0x46bb,	// (0x00058941) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x46bb,	// (0x00058941) list_single_graphic_heading_pane_fp_t1

0x46d1,	// (0x00058957) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x46d1,	// (0x00058957) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x00063e29) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x00063e29) list_single_graphic_heading_pane_fp_t

0x46e3,	// (0x00058969) list_single_cale_day_pane_fp_g1_ParamLimits

0x46e3,	// (0x00058969) list_single_cale_day_pane_fp_g1

0xc166,	// (0x000603ec) list_single_cale_day_pane_fp_g2_ParamLimits

0xc166,	// (0x000603ec) list_single_cale_day_pane_fp_g2

0xacd7,	// (0x0005ef5d) list_single_cale_day_pane_fp_g3_ParamLimits

0xacd7,	// (0x0005ef5d) list_single_cale_day_pane_fp_g3

0xacff,	// (0x0005ef85) list_single_cale_day_pane_fp_g4_ParamLimits

0xacff,	// (0x0005ef85) list_single_cale_day_pane_fp_g4

0xad23,	// (0x0005efa9) list_single_cale_day_pane_fp_g5_ParamLimits

0xad23,	// (0x0005efa9) list_single_cale_day_pane_fp_g5

0x0004,

0xfba8,	// (0x00063e2e) list_single_cale_day_pane_fp_g_ParamLimits

0xfba8,	// (0x00063e2e) list_single_cale_day_pane_fp_g

0x471b,	// (0x000589a1) list_single_cale_day_pane_fp_t1_ParamLimits

0x471b,	// (0x000589a1) list_single_cale_day_pane_fp_t1

0x4741,	// (0x000589c7) list_single_cale_day_pane_fp_t2_ParamLimits

0x4741,	// (0x000589c7) list_single_cale_day_pane_fp_t2

0x475a,	// (0x000589e0) list_single_cale_day_pane_fp_t3_ParamLimits

0x475a,	// (0x000589e0) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb3,	// (0x00063e39) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb3,	// (0x00063e39) list_single_cale_day_pane_fp_t

0xc12e,	// (0x000603b4) list_empty_pane_fp_g1_ParamLimits

0xc12e,	// (0x000603b4) list_empty_pane_fp_g1

0x4773,	// (0x000589f9) list_empty_pane_fp_t1

0x4781,	// (0x00058a07) list_empty_pane_fp_t2

0x0001,

0xfbba,	// (0x00063e40) list_empty_pane_fp_t

0xc12e,	// (0x000603b4) list_single_heading_pane_fp_g1_ParamLimits

0xc12e,	// (0x000603b4) list_single_heading_pane_fp_g1

0xc13a,	// (0x000603c0) list_single_heading_pane_fp_g2_ParamLimits

0xc13a,	// (0x000603c0) list_single_heading_pane_fp_g2

0xc146,	// (0x000603cc) list_single_heading_pane_fp_g3_ParamLimits

0xc146,	// (0x000603cc) list_single_heading_pane_fp_g3

0x0002,

0xfbbf,	// (0x00063e45) list_single_heading_pane_fp_g_ParamLimits

0xfbbf,	// (0x00063e45) list_single_heading_pane_fp_g

0x478f,	// (0x00058a15) list_single_heading_pane_fp_t1_ParamLimits

0x478f,	// (0x00058a15) list_single_heading_pane_fp_t1

0x47a1,	// (0x00058a27) list_single_heading_pane_fp_t2_ParamLimits

0x47a1,	// (0x00058a27) list_single_heading_pane_fp_t2

0x0001,

0xfbc6,	// (0x00063e4c) list_single_heading_pane_fp_t_ParamLimits

0xfbc6,	// (0x00063e4c) list_single_heading_pane_fp_t

0x6502,	// (0x0005a788) aid_size_cell_fast

0xef09,	// (0x0006318f) soft_indicator_pane_cp1_t1

0x650b,	// (0x0005a791) cell_app_pane_cp2_ParamLimits

0x650b,	// (0x0005a791) cell_app_pane_cp2

0x7bda,	// (0x0005be60) fep_hwr_candidate_drop_down_list_pane

0x7db2,	// (0x0005c038) fep_hwr_candidate_pane_g3_ParamLimits

0x7db2,	// (0x0005c038) fep_hwr_candidate_pane_g3

0x351a,	// (0x000577a0) fep_hwr_candidate_pane_g4_ParamLimits

0x351a,	// (0x000577a0) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x00063dbb) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x00063dbb) fep_hwr_candidate_pane_g

0xbc30,	// (0x0005feb6) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbc30,	// (0x0005feb6) fep_vkb_candidate_drop_down_list_pane

0xc033,	// (0x000602b9) fep_vkb_candidate_pane_g3

0xc03b,	// (0x000602c1) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x00063de8) fep_vkb_candidate_pane_g

0x7e1d,	// (0x0005c0a3) cell_hwr_candidate_pane_g1_ParamLimits

0x7e2b,	// (0x0005c0b1) cell_hwr_candidate_pane_g3_ParamLimits

0x7e2b,	// (0x0005c0b1) cell_hwr_candidate_pane_g3

0xcf2a,	// (0x000611b0) cell_hwr_candidate_pane_g4_ParamLimits

0xcf2a,	// (0x000611b0) cell_hwr_candidate_pane_g4

0x0002,

0xfb81,	// (0x00063e07) cell_hwr_candidate_pane_g_ParamLimits

0xfb81,	// (0x00063e07) cell_hwr_candidate_pane_g

0xc052,	// (0x000602d8) cell_vkb_candidate_pane_g3_ParamLimits

0xc052,	// (0x000602d8) cell_vkb_candidate_pane_g3

0xc06d,	// (0x000602f3) cell_vkb_candidate_pane_g4_ParamLimits

0xc06d,	// (0x000602f3) cell_vkb_candidate_pane_g4

0xc172,	// (0x000603f8) cell_app_pane_cp2_g1_ParamLimits

0xc172,	// (0x000603f8) cell_app_pane_cp2_g1

0xc190,	// (0x00060416) cell_app_pane_cp2_g2_ParamLimits

0xc190,	// (0x00060416) cell_app_pane_cp2_g2

0x0001,

0xfbcb,	// (0x00063e51) cell_app_pane_cp2_g_ParamLimits

0xfbcb,	// (0x00063e51) cell_app_pane_cp2_g

0xc19c,	// (0x00060422) cell_app_pane_cp2_t1_ParamLimits

0xc19c,	// (0x00060422) cell_app_pane_cp2_t1

0xf1bc,	// (0x00063442) grid_highlight_pane_cp1_ParamLimits

0xf1bc,	// (0x00063442) grid_highlight_pane_cp1

0x7e6a,	// (0x0005c0f0) cell_hwr_candidate_pane_cp1_ParamLimits

0x7e6a,	// (0x0005c0f0) cell_hwr_candidate_pane_cp1

0x7e1d,	// (0x0005c0a3) fep_hwr_candidate_drop_down_list_pane_g1

0x7e89,	// (0x0005c10f) fep_hwr_candidate_drop_down_list_pane_g2

0x7e96,	// (0x0005c11c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x00063e56) fep_hwr_candidate_drop_down_list_pane_g

0x7ea3,	// (0x0005c129) fep_hwr_candidate_drop_down_list_scroll_pane

0x7eac,	// (0x0005c132) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7eac,	// (0x0005c132) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7eb9,	// (0x0005c13f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7eb9,	// (0x0005c13f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7ec6,	// (0x0005c14c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7ec6,	// (0x0005c14c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7ed3,	// (0x0005c159) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7ed3,	// (0x0005c159) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7eee,	// (0x0005c174) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7eee,	// (0x0005c174) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7f09,	// (0x0005c18f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f09,	// (0x0005c18f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7f24,	// (0x0005c1aa) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f24,	// (0x0005c1aa) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7f3f,	// (0x0005c1c5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7f3f,	// (0x0005c1c5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x00063e5d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x00063e5d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc1ae,	// (0x00060434) cell_vkb_candidate_pane_cp1_ParamLimits

0xc1ae,	// (0x00060434) cell_vkb_candidate_pane_cp1

0xbd3b,	// (0x0005ffc1) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbd3b,	// (0x0005ffc1) fep_vkb_candidate_drop_down_list_pane_g1

0xc1ce,	// (0x00060454) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc1ce,	// (0x00060454) fep_vkb_candidate_drop_down_list_pane_g2

0xc1db,	// (0x00060461) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc1db,	// (0x00060461) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x00063e6e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe8,	// (0x00063e6e) fep_vkb_candidate_drop_down_list_pane_g

0xc1e8,	// (0x0006046e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc1e8,	// (0x0006046e) fep_vkb_candidate_drop_down_list_scroll_pane

0xc1f5,	// (0x0006047b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc1f5,	// (0x0006047b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc202,	// (0x00060488) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc202,	// (0x00060488) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc20e,	// (0x00060494) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc20e,	// (0x00060494) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc21a,	// (0x000604a0) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc21a,	// (0x000604a0) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc23b,	// (0x000604c1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc23b,	// (0x000604c1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc25c,	// (0x000604e2) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc25c,	// (0x000604e2) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc27d,	// (0x00060503) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc27d,	// (0x00060503) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc29e,	// (0x00060524) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc29e,	// (0x00060524) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x00063e75) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x00063e75) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x583a,	// (0x00059ac0) title_pane_g1_ParamLimits

0x5847,	// (0x00059acd) title_pane_g2_ParamLimits

0xf54e,	// (0x000637d4) title_pane_g_ParamLimits

0x1377,	// (0x000555fd) aid_call2_pane

0x136f,	// (0x000555f5) aid_call_pane

0x137f,	// (0x00055605) popup_clock_analogue_window_g1

0x137f,	// (0x00055605) popup_clock_analogue_window_g2

0x6813,	// (0x0005aa99) popup_clock_analogue_window_g3

0x681c,	// (0x0005aaa2) popup_clock_analogue_window_g4

0xeda4,	// (0x0006302a) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00063979) popup_clock_analogue_window_g

0x6824,	// (0x0005aaaa) popup_clock_analogue_window_t1

0x685c,	// (0x0005aae2) clock_digital_number_pane_ParamLimits

0x685c,	// (0x0005aae2) clock_digital_number_pane

0x6868,	// (0x0005aaee) clock_digital_number_pane_cp02_ParamLimits

0x6868,	// (0x0005aaee) clock_digital_number_pane_cp02

0x6874,	// (0x0005aafa) clock_digital_number_pane_cp03_ParamLimits

0x6874,	// (0x0005aafa) clock_digital_number_pane_cp03

0x6880,	// (0x0005ab06) clock_digital_number_pane_cp04_ParamLimits

0x6880,	// (0x0005ab06) clock_digital_number_pane_cp04

0x688c,	// (0x0005ab12) clock_digital_separator_pane_ParamLimits

0x688c,	// (0x0005ab12) clock_digital_separator_pane

0x6898,	// (0x0005ab1e) popup_clock_digital_window_t1_ParamLimits

0x6898,	// (0x0005ab1e) popup_clock_digital_window_t1

0xeda4,	// (0x0006302a) clock_digital_number_pane_g1

0xeda4,	// (0x0006302a) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00063984) clock_digital_number_pane_g

0xeda4,	// (0x0006302a) clock_digital_separator_pane_g1

0xeda4,	// (0x0006302a) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00063984) clock_digital_separator_pane_g

0x8e26,	// (0x0005d0ac) aid_fill_nsta_ParamLimits

0x8f72,	// (0x0005d1f8) indicator_nsta_pane_ParamLimits

0x90eb,	// (0x0005d371) popup_clock_analogue_window

0x90eb,	// (0x0005d371) popup_clock_digital_window

0xedfc,	// (0x00063082) grid_indicator_nsta_pane_ParamLimits

0xb4d5,	// (0x0005f75b) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x00063d3b) clock_nsta_pane_t

0x673e,	// (0x0005a9c4) aid_size_max_handle

0x6748,	// (0x0005a9ce) aid_size_min_handle

0x38c5,	// (0x00057b4b) editor_scroll_pane

0xc2b9,	// (0x0006053f) ex_editor_pane

0xf2db,	// (0x00063561) scroll_pane_cp13

0xf164,	// (0x000633ea) scroll_pane_cp14

0x13ae,	// (0x00055634) scroll_pane_cp36

0x6846,	// (0x0005aacc) list_single_graphic_hl_pane_cp2_ParamLimits

0x6846,	// (0x0005aacc) list_single_graphic_hl_pane_cp2

0x79fd,	// (0x0005bc83) list_single_graphic_hl_pane_ParamLimits

0x79fd,	// (0x0005bc83) list_single_graphic_hl_pane

0x7f5a,	// (0x0005c1e0) aid_size_min_hl_cp1

0xc2c1,	// (0x00060547) list_highlight_pane_cp34_ParamLimits

0xc2c1,	// (0x00060547) list_highlight_pane_cp34

0xc2d2,	// (0x00060558) list_single_graphic_hl_pane_g1_ParamLimits

0xc2d2,	// (0x00060558) list_single_graphic_hl_pane_g1

0x7f63,	// (0x0005c1e9) list_single_graphic_hl_pane_g2_ParamLimits

0x7f63,	// (0x0005c1e9) list_single_graphic_hl_pane_g2

0x7f63,	// (0x0005c1e9) list_single_graphic_hl_pane_g3_ParamLimits

0x7f63,	// (0x0005c1e9) list_single_graphic_hl_pane_g3

0x3850,	// (0x00057ad6) list_single_graphic_hl_pane_g4_ParamLimits

0x3850,	// (0x00057ad6) list_single_graphic_hl_pane_g4

0x7f6f,	// (0x0005c1f5) list_single_graphic_hl_pane_g5_ParamLimits

0x7f6f,	// (0x0005c1f5) list_single_graphic_hl_pane_g5

0x0004,

0xfc00,	// (0x00063e86) list_single_graphic_hl_pane_g_ParamLimits

0xfc00,	// (0x00063e86) list_single_graphic_hl_pane_g

0x7f83,	// (0x0005c209) list_single_graphic_hl_pane_t1_ParamLimits

0x7f83,	// (0x0005c209) list_single_graphic_hl_pane_t1

0xc2df,	// (0x00060565) aid_size_min_hl_cp2

0xc2e8,	// (0x0006056e) list_highlight_pane_cp34_cp2_ParamLimits

0xc2e8,	// (0x0006056e) list_highlight_pane_cp34_cp2

0xc2d2,	// (0x00060558) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc2d2,	// (0x00060558) list_single_graphic_hl_pane_g1_cp2

0xc2f5,	// (0x0006057b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc2f5,	// (0x0006057b) list_single_graphic_hl_pane_g2_cp2

0xc301,	// (0x00060587) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc301,	// (0x00060587) list_single_graphic_hl_pane_g3_cp2

0x3824,	// (0x00057aaa) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3824,	// (0x00057aaa) list_single_graphic_hl_pane_g4_cp2

0xc30f,	// (0x00060595) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc30f,	// (0x00060595) list_single_graphic_hl_pane_g5_cp2

0x6ef9,	// (0x0005b17f) control_pane_g4_ParamLimits

0x6ef9,	// (0x0005b17f) control_pane_g4

0x8dea,	// (0x0005d070) bg_popup_sub_pane_cp10_ParamLimits

0xbad5,	// (0x0005fd5b) list_choice_list_pane_ParamLimits

0xbae4,	// (0x0005fd6a) scroll_pane_cp23

0xef34,	// (0x000631ba) bg_popup_preview_window_pane_cp02_ParamLimits

0xc0d2,	// (0x00060358) list_preview_fixed_pane_ParamLimits

0xc0e8,	// (0x0006036e) list_preview_fixed_pane_cp_ParamLimits

0xc0e8,	// (0x0006036e) list_preview_fixed_pane_cp

0xc0f4,	// (0x0006037a) popup_preview_fixed_window_g1_ParamLimits

0xc0f4,	// (0x0006037a) popup_preview_fixed_window_g1

0xc100,	// (0x00060386) popup_preview_fixed_window_g2_ParamLimits

0xc100,	// (0x00060386) popup_preview_fixed_window_g2

0x0002,

0xfb88,	// (0x00063e0e) popup_preview_fixed_window_g_ParamLimits

0xfb88,	// (0x00063e0e) popup_preview_fixed_window_g

0x661a,	// (0x0005a8a0) aid_navi_side_left_pane_ParamLimits

0x662f,	// (0x0005a8b5) aid_navi_side_right_pane_ParamLimits

0x6647,	// (0x0005a8cd) navi_icon_pane_stacon_ParamLimits

0x665b,	// (0x0005a8e1) navi_navi_pane_stacon_ParamLimits

0x6647,	// (0x0005a8cd) navi_text_pane_stacon_ParamLimits

0x55ef,	// (0x00059875) main_text_info_pane

0xc339,	// (0x000605bf) listscroll_text_info_pane

0xc341,	// (0x000605c7) list_text_info_pane_ParamLimits

0xc341,	// (0x000605c7) list_text_info_pane

0xc350,	// (0x000605d6) scroll_pane_cp24_ParamLimits

0xc350,	// (0x000605d6) scroll_pane_cp24

0xc36e,	// (0x000605f4) list_text_info_pane_t1_ParamLimits

0xc36e,	// (0x000605f4) list_text_info_pane_t1

0x7075,	// (0x0005b2fb) popup_fast_swap2_window_ParamLimits

0x7075,	// (0x0005b2fb) popup_fast_swap2_window

0xc3a2,	// (0x00060628) aid_size_cell_fast2

0xed9a,	// (0x00063020) bg_popup_window_pane_cp17

0x9790,	// (0x0005da16) heading_pane_cp2

0xf068,	// (0x000632ee) listscroll_fast2_pane

0xc3ac,	// (0x00060632) grid_fast2_pane

0xc3b6,	// (0x0006063c) listscroll_fast2_pane_g1

0xc3be,	// (0x00060644) listscroll_fast2_pane_g2

0x0001,

0xfc0b,	// (0x00063e91) listscroll_fast2_pane_g

0xf2db,	// (0x00063561) scroll_pane_cp26

0xc3c8,	// (0x0006064e) cell_fast2_pane_ParamLimits

0xc3c8,	// (0x0006064e) cell_fast2_pane

0xc3dd,	// (0x00060663) cell_fast2_pane_g1

0xc3e6,	// (0x0006066c) cell_fast2_pane_g2

0xc3ef,	// (0x00060675) cell_fast2_pane_g3

0x0002,

0xfc10,	// (0x00063e96) cell_fast2_pane_g

0xf09b,	// (0x00063321) grid_highlight_pane_cp9

0x703d,	// (0x0005b2c3) main_eswt_pane_ParamLimits

0x703d,	// (0x0005b2c3) main_eswt_pane

0xc365,	// (0x000605eb) list_single_text_info_pane

0xc3f7,	// (0x0006067d) eswt_ctrl_button_pane

0xc3f7,	// (0x0006067d) eswt_ctrl_canvas_pane

0xc3ff,	// (0x00060685) eswt_ctrl_combo_pane

0xc3f7,	// (0x0006067d) eswt_ctrl_default_pane

0xc3f7,	// (0x0006067d) eswt_ctrl_label_pane

0xc407,	// (0x0006068d) eswt_ctrl_wait_pane

0xc40f,	// (0x00060695) eswt_shell_pane

0xed9a,	// (0x00063020) listscroll_eswt_app_pane

0xc42f,	// (0x000606b5) popup_eswt_tasktip_window_ParamLimits

0xc42f,	// (0x000606b5) popup_eswt_tasktip_window

0x939d,	// (0x0005d623) bg_popup_window_pane_cp18

0xc440,	// (0x000606c6) eswt_control_pane_g1_ParamLimits

0xc440,	// (0x000606c6) eswt_control_pane_g1

0xc44d,	// (0x000606d3) eswt_control_pane_g2_ParamLimits

0xc44d,	// (0x000606d3) eswt_control_pane_g2

0xc45a,	// (0x000606e0) eswt_control_pane_g3_ParamLimits

0xc45a,	// (0x000606e0) eswt_control_pane_g3

0xc467,	// (0x000606ed) eswt_control_pane_g4_ParamLimits

0xc467,	// (0x000606ed) eswt_control_pane_g4

0x0003,

0xfc17,	// (0x00063e9d) eswt_control_pane_g_ParamLimits

0xfc17,	// (0x00063e9d) eswt_control_pane_g

0xf1bc,	// (0x00063442) bg_button_pane_ParamLimits

0xf1bc,	// (0x00063442) bg_button_pane

0xf0b0,	// (0x00063336) common_borders_pane_copy2_ParamLimits

0xf0b0,	// (0x00063336) common_borders_pane_copy2

0xc474,	// (0x000606fa) control_button_pane_g1_ParamLimits

0xc474,	// (0x000606fa) control_button_pane_g1

0xc480,	// (0x00060706) control_button_pane_g2_ParamLimits

0xc480,	// (0x00060706) control_button_pane_g2

0xc48c,	// (0x00060712) control_button_pane_g3_ParamLimits

0xc48c,	// (0x00060712) control_button_pane_g3

0x0002,

0xfc20,	// (0x00063ea6) control_button_pane_g_ParamLimits

0xfc20,	// (0x00063ea6) control_button_pane_g

0xc4a0,	// (0x00060726) control_button_pane_t1

0xc4ae,	// (0x00060734) control_button_pane_t2

0x0001,

0xfc27,	// (0x00063ead) control_button_pane_t

0x9311,	// (0x0005d597) bg_button_pane_g1

0x9321,	// (0x0005d5a7) bg_button_pane_g2

0x9319,	// (0x0005d59f) bg_button_pane_g3

0x9331,	// (0x0005d5b7) bg_button_pane_g4

0x9329,	// (0x0005d5af) bg_button_pane_g5

0x9339,	// (0x0005d5bf) bg_button_pane_g6

0x9341,	// (0x0005d5c7) bg_button_pane_g7

0x9351,	// (0x0005d5d7) bg_button_pane_g8

0x9349,	// (0x0005d5cf) bg_button_pane_g9

0x0008,

0xf861,	// (0x00063ae7) bg_button_pane_g

0xba90,	// (0x0005fd16) common_borders_pane_ParamLimits

0xba90,	// (0x0005fd16) common_borders_pane

0xc440,	// (0x000606c6) eswt_control_pane_g1_copy1_ParamLimits

0xc440,	// (0x000606c6) eswt_control_pane_g1_copy1

0xc44d,	// (0x000606d3) eswt_control_pane_g2_copy1_ParamLimits

0xc44d,	// (0x000606d3) eswt_control_pane_g2_copy1

0xc45a,	// (0x000606e0) eswt_control_pane_g3_copy1_ParamLimits

0xc45a,	// (0x000606e0) eswt_control_pane_g3_copy1

0xc467,	// (0x000606ed) eswt_control_pane_g4_copy1_ParamLimits

0xc467,	// (0x000606ed) eswt_control_pane_g4_copy1

0xbacb,	// (0x0005fd51) bg_eswt_ctrl_canvas_pane_g1

0xba90,	// (0x0005fd16) common_borders_pane_cp2_ParamLimits

0xba90,	// (0x0005fd16) common_borders_pane_cp2

0xba90,	// (0x0005fd16) common_borders_pane_cp3_ParamLimits

0xba90,	// (0x0005fd16) common_borders_pane_cp3

0xc4bc,	// (0x00060742) separator_horizontal_pane

0xc4c4,	// (0x0006074a) separator_vertical_pane

0xc440,	// (0x000606c6) eswt_control_pane_g1_copy2_ParamLimits

0xc440,	// (0x000606c6) eswt_control_pane_g1_copy2

0xc44d,	// (0x000606d3) eswt_control_pane_g2_copy2_ParamLimits

0xc44d,	// (0x000606d3) eswt_control_pane_g2_copy2

0xc45a,	// (0x000606e0) eswt_control_pane_g3_copy2_ParamLimits

0xc45a,	// (0x000606e0) eswt_control_pane_g3_copy2

0xc467,	// (0x000606ed) eswt_control_pane_g4_copy2_ParamLimits

0xc467,	// (0x000606ed) eswt_control_pane_g4_copy2

0xed9a,	// (0x00063020) common_borders_pane_cp4

0xc4cd,	// (0x00060753) separator_horizontal_pane_g1

0xc4d6,	// (0x0006075c) separator_horizontal_pane_g2

0xc4df,	// (0x00060765) separator_horizontal_pane_g3

0x0002,

0xfc2c,	// (0x00063eb2) separator_horizontal_pane_g

0xc440,	// (0x000606c6) eswt_control_pane_g1_copy3_ParamLimits

0xc440,	// (0x000606c6) eswt_control_pane_g1_copy3

0xc44d,	// (0x000606d3) eswt_control_pane_g2_copy3_ParamLimits

0xc44d,	// (0x000606d3) eswt_control_pane_g2_copy3

0xc45a,	// (0x000606e0) eswt_control_pane_g3_copy3_ParamLimits

0xc45a,	// (0x000606e0) eswt_control_pane_g3_copy3

0xc467,	// (0x000606ed) eswt_control_pane_g4_copy3_ParamLimits

0xc467,	// (0x000606ed) eswt_control_pane_g4_copy3

0xed9a,	// (0x00063020) common_borders_pane_cp5

0xc4e8,	// (0x0006076e) separator_vertical_pane_g1

0xc4f1,	// (0x00060777) separator_vertical_pane_g2

0xc4fa,	// (0x00060780) separator_vertical_pane_g3

0x0002,

0xfc33,	// (0x00063eb9) separator_vertical_pane_g

0xc440,	// (0x000606c6) eswt_control_pane_g1_copy4_ParamLimits

0xc440,	// (0x000606c6) eswt_control_pane_g1_copy4

0xc44d,	// (0x000606d3) eswt_control_pane_g2_copy4_ParamLimits

0xc44d,	// (0x000606d3) eswt_control_pane_g2_copy4

0xc45a,	// (0x000606e0) eswt_control_pane_g3_copy4_ParamLimits

0xc45a,	// (0x000606e0) eswt_control_pane_g3_copy4

0xc467,	// (0x000606ed) eswt_control_pane_g4_copy4_ParamLimits

0xc467,	// (0x000606ed) eswt_control_pane_g4_copy4

0xc503,	// (0x00060789) eswt_ctrl_combo_button_pane

0xc50b,	// (0x00060791) eswt_ctrl_input_pane

0xc513,	// (0x00060799) popup_choice_list_window_cp70

0xc51b,	// (0x000607a1) eswt_ctrl_input_pane_t1

0xed9a,	// (0x00063020) input_focus_pane_cp70

0xba90,	// (0x0005fd16) bg_button_pane_cp70_ParamLimits

0xba90,	// (0x0005fd16) bg_button_pane_cp70

0xc529,	// (0x000607af) eswt_ctrl_combo_button_pane_g1

0xc531,	// (0x000607b7) wait_bar_pane_cp70

0x939d,	// (0x0005d623) bg_popup_window_pane_cp70_ParamLimits

0x939d,	// (0x0005d623) bg_popup_window_pane_cp70

0xc539,	// (0x000607bf) popup_eswt_tasktip_window_t1

0xc54f,	// (0x000607d5) wait_bar_pane_cp71_ParamLimits

0xc54f,	// (0x000607d5) wait_bar_pane_cp71

0xc55b,	// (0x000607e1) grid_eswt_app_pane

0xf4c2,	// (0x00063748) scroll_pane_cp70

0xc564,	// (0x000607ea) cell_eswt_app_pane_ParamLimits

0xc564,	// (0x000607ea) cell_eswt_app_pane

0xc594,	// (0x0006081a) cell_eswt_app_pane_g1_ParamLimits

0xc594,	// (0x0006081a) cell_eswt_app_pane_g1

0xc5c3,	// (0x00060849) cell_eswt_app_pane_g2_ParamLimits

0xc5c3,	// (0x00060849) cell_eswt_app_pane_g2

0x0001,

0xfc3a,	// (0x00063ec0) cell_eswt_app_pane_g_ParamLimits

0xfc3a,	// (0x00063ec0) cell_eswt_app_pane_g

0xc5e7,	// (0x0006086d) cell_eswt_app_pane_t1_ParamLimits

0xc5e7,	// (0x0006086d) cell_eswt_app_pane_t1

0xc619,	// (0x0006089f) grid_highlight_pane_cp70_ParamLimits

0xc619,	// (0x0006089f) grid_highlight_pane_cp70

0x37c8,	// (0x00057a4e) set_content_pane_g1

0x8d71,	// (0x0005cff7) status_small_volume_pane

0x7f99,	// (0x0005c21f) status_small_volume_pane_g1

0x7fa1,	// (0x0005c227) volume_small2_pane

0x7faa,	// (0x0005c230) volume_small2_pane_g1

0x7fb3,	// (0x0005c239) volume_small2_pane_g2

0x7fbc,	// (0x0005c242) volume_small2_pane_g3

0x7fc5,	// (0x0005c24b) volume_small2_pane_g4

0x7fce,	// (0x0005c254) volume_small2_pane_g5

0x7fd7,	// (0x0005c25d) volume_small2_pane_g6

0x7fe0,	// (0x0005c266) volume_small2_pane_g7

0x7fe9,	// (0x0005c26f) volume_small2_pane_g8

0x7ff2,	// (0x0005c278) volume_small2_pane_g9

0x7ffb,	// (0x0005c281) volume_small2_pane_g10

0x0009,

0xfc3f,	// (0x00063ec5) volume_small2_pane_g

0xbe83,	// (0x00060109) fep_vkb_top_text_pane_g1_ParamLimits

0xbe9e,	// (0x00060124) fep_vkb_top_text_pane_t1_ParamLimits

0xc10c,	// (0x00060392) popup_preview_fixed_window_g3_ParamLimits

0xc10c,	// (0x00060392) popup_preview_fixed_window_g3

0x7524,	// (0x0005b7aa) popup_toolbar_trans_pane

0xa6d3,	// (0x0005e959) aid_height_set_list_ParamLimits

0xa6e4,	// (0x0005e96a) aid_size_parent_ParamLimits

0x8dea,	// (0x0005d070) list_highlight_pane_cp2_ParamLimits

0x37c8,	// (0x00057a4e) set_content_pane_g1_ParamLimits

0xa927,	// (0x0005ebad) list_single_image_pane_ParamLimits

0xa927,	// (0x0005ebad) list_single_image_pane

0xc625,	// (0x000608ab) aid_size_cell_image_ParamLimits

0xc625,	// (0x000608ab) aid_size_cell_image

0xc632,	// (0x000608b8) grid_single_image_pane_ParamLimits

0xc632,	// (0x000608b8) grid_single_image_pane

0xc13a,	// (0x000603c0) list_single_image_pane_g1_ParamLimits

0xc13a,	// (0x000603c0) list_single_image_pane_g1

0xc146,	// (0x000603cc) list_single_image_pane_g2_ParamLimits

0xc146,	// (0x000603cc) list_single_image_pane_g2

0x0001,

0xfc54,	// (0x00063eda) list_single_image_pane_g_ParamLimits

0xfc54,	// (0x00063eda) list_single_image_pane_g

0xc640,	// (0x000608c6) list_single_image_pane_t1_ParamLimits

0xc640,	// (0x000608c6) list_single_image_pane_t1

0xc656,	// (0x000608dc) cell_image_list_pane_ParamLimits

0xc656,	// (0x000608dc) cell_image_list_pane

0xc66a,	// (0x000608f0) cell_image_list_pane_g1

0xc673,	// (0x000608f9) cell_image_list_pane_g2

0x0001,

0xfc59,	// (0x00063edf) cell_image_list_pane_g

0xc67c,	// (0x00060902) aid_size_cell_tb_trans_pane

0xf1bc,	// (0x00063442) bg_tb_trans_pane

0xc68e,	// (0x00060914) grid_tb_trans_pane

0x9311,	// (0x0005d597) bg_tb_trans_pane_g1

0x9321,	// (0x0005d5a7) bg_tb_trans_pane_g2

0x9319,	// (0x0005d59f) bg_tb_trans_pane_g3

0x9331,	// (0x0005d5b7) bg_tb_trans_pane_g4

0x9329,	// (0x0005d5af) bg_tb_trans_pane_g5

0x9351,	// (0x0005d5d7) bg_tb_trans_pane_g6

0x9349,	// (0x0005d5cf) bg_tb_trans_pane_g7

0x9339,	// (0x0005d5bf) bg_tb_trans_pane_g8

0x9341,	// (0x0005d5c7) bg_tb_trans_pane_g9

0x0008,

0xfc5e,	// (0x00063ee4) bg_tb_trans_pane_g

0xc6a2,	// (0x00060928) cell_toolbar_trans_pane_ParamLimits

0xc6a2,	// (0x00060928) cell_toolbar_trans_pane

0xbacb,	// (0x0005fd51) cell_toolbar_trans_pane_g1

0xb696,	// (0x0005f91c) list_form2_midp_pane_t1

0xb6a4,	// (0x0005f92a) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x00063d81) list_form2_midp_pane_t

0xb6b2,	// (0x0005f938) scroll_pane_cp51_ParamLimits

0xb86e,	// (0x0005faf4) form2_midp_wait_pane_g1

0xb877,	// (0x0005fafd) form2_midp_wait_pane_g2

0xb880,	// (0x0005fb06) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x00063d96) form2_midp_wait_pane_g

0xedfc,	// (0x00063082) list_highlight_pane_cp21_ParamLimits

0xb8c8,	// (0x0005fb4e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb8d7,	// (0x0005fb5d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa8c8,	// (0x0005eb4e) list_single_2graphic_im_pane_ParamLimits

0xa8c8,	// (0x0005eb4e) list_single_2graphic_im_pane

0xc6c8,	// (0x0006094e) list_single_2graphic_im_pane_g1_ParamLimits

0xc6c8,	// (0x0006094e) list_single_2graphic_im_pane_g1

0xc6d9,	// (0x0006095f) list_single_2graphic_im_pane_g2_ParamLimits

0xc6d9,	// (0x0006095f) list_single_2graphic_im_pane_g2

0xc6e5,	// (0x0006096b) list_single_2graphic_im_pane_g3_ParamLimits

0xc6e5,	// (0x0006096b) list_single_2graphic_im_pane_g3

0x0003,

0xfc71,	// (0x00063ef7) list_single_2graphic_im_pane_g_ParamLimits

0xfc71,	// (0x00063ef7) list_single_2graphic_im_pane_g

0xc705,	// (0x0006098b) list_single_2graphic_im_pane_t1_ParamLimits

0xc705,	// (0x0006098b) list_single_2graphic_im_pane_t1

0xc118,	// (0x0006039e) list_single_graphic_2heading_pane_fp_ParamLimits

0xc118,	// (0x0006039e) list_single_graphic_2heading_pane_fp

0x4699,	// (0x0005891f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4699,	// (0x0005891f) list_single_graphic_2heading_pane_fp_g1

0xc12e,	// (0x000603b4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc12e,	// (0x000603b4) list_single_graphic_2heading_pane_fp_g2

0xc13a,	// (0x000603c0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc13a,	// (0x000603c0) list_single_graphic_2heading_pane_fp_g3

0xc146,	// (0x000603cc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc146,	// (0x000603cc) list_single_graphic_2heading_pane_fp_g4

0xc15a,	// (0x000603e0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc15a,	// (0x000603e0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00063e1e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00063e1e) list_single_graphic_2heading_pane_fp_g

0x47b7,	// (0x00058a3d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x47b7,	// (0x00058a3d) list_single_graphic_2heading_pane_fp_t1

0x46d1,	// (0x00058957) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x46d1,	// (0x00058957) list_single_graphic_2heading_pane_fp_t2

0x47cd,	// (0x00058a53) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x47cd,	// (0x00058a53) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7a,	// (0x00063f00) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7a,	// (0x00063f00) list_single_graphic_2heading_pane_fp_t

0xbb57,	// (0x0005fddd) fep_hwr_write_pane_g5_ParamLimits

0xbb57,	// (0x0005fddd) fep_hwr_write_pane_g5

0xbb63,	// (0x0005fde9) fep_hwr_write_pane_g6_ParamLimits

0xbb63,	// (0x0005fde9) fep_hwr_write_pane_g6

0xc40f,	// (0x00060695) eswt_shell_pane_ParamLimits

0x939d,	// (0x0005d623) bg_popup_window_pane_cp18_ParamLimits

0xa62c,	// (0x0005e8b2) heading_pane_cp70

0xc539,	// (0x000607bf) popup_eswt_tasktip_window_t1_ParamLimits

0x8e7b,	// (0x0005d101) aid_touch_tab_arrow_left

0x8e8a,	// (0x0005d110) aid_touch_tab_arrow_right

0x5858,	// (0x00059ade) title_pane_g3_ParamLimits

0x5858,	// (0x00059ade) title_pane_g3

0xf184,	// (0x0006340a) set_value_pane_g1

0x7524,	// (0x0005b7aa) popup_toolbar_trans_pane_ParamLimits

0xc67c,	// (0x00060902) aid_size_cell_tb_trans_pane_ParamLimits

0xf1bc,	// (0x00063442) bg_tb_trans_pane_ParamLimits

0xc68e,	// (0x00060914) grid_tb_trans_pane_ParamLimits

0xef34,	// (0x000631ba) cont_note_pane_ParamLimits

0xef34,	// (0x000631ba) cont_note_pane

0xf0b0,	// (0x00063336) cont_snote2_single_text_pane_ParamLimits

0xf0b0,	// (0x00063336) cont_snote2_single_text_pane

0xf0b0,	// (0x00063336) cont_snote2_single_graphic_pane_ParamLimits

0xf0b0,	// (0x00063336) cont_snote2_single_graphic_pane

0x99af,	// (0x0005dc35) cont_note_wait_pane_ParamLimits

0x99af,	// (0x0005dc35) cont_note_wait_pane

0x99af,	// (0x0005dc35) cont_note_image_pane_ParamLimits

0x99af,	// (0x0005dc35) cont_note_image_pane

0xc736,	// (0x000609bc) popup_note2_window_g1_ParamLimits

0xc736,	// (0x000609bc) popup_note2_window_g1

0xc767,	// (0x000609ed) popup_note2_window_t1_ParamLimits

0xc767,	// (0x000609ed) popup_note2_window_t1

0xc7ac,	// (0x00060a32) popup_note2_window_t2_ParamLimits

0xc7ac,	// (0x00060a32) popup_note2_window_t2

0xc7f1,	// (0x00060a77) popup_note2_window_t3_ParamLimits

0xc7f1,	// (0x00060a77) popup_note2_window_t3

0xc836,	// (0x00060abc) popup_note2_window_t4_ParamLimits

0xc836,	// (0x00060abc) popup_note2_window_t4

0xefb8,	// (0x0006323e) popup_note2_window_t5_ParamLimits

0xefb8,	// (0x0006323e) popup_note2_window_t5

0x0004,

0xfc86,	// (0x00063f0c) popup_note2_window_t_ParamLimits

0xfc86,	// (0x00063f0c) popup_note2_window_t

0xc865,	// (0x00060aeb) popup_note2_image_window_g1_ParamLimits

0xc865,	// (0x00060aeb) popup_note2_image_window_g1

0xc871,	// (0x00060af7) popup_note2_image_window_g2_ParamLimits

0xc871,	// (0x00060af7) popup_note2_image_window_g2

0x0001,

0xfc91,	// (0x00063f17) popup_note2_image_window_g_ParamLimits

0xfc91,	// (0x00063f17) popup_note2_image_window_g

0xc883,	// (0x00060b09) popup_note2_image_window_t1_ParamLimits

0xc883,	// (0x00060b09) popup_note2_image_window_t1

0xc89b,	// (0x00060b21) popup_note2_image_window_t2_ParamLimits

0xc89b,	// (0x00060b21) popup_note2_image_window_t2

0xc8b3,	// (0x00060b39) popup_note2_image_window_t3_ParamLimits

0xc8b3,	// (0x00060b39) popup_note2_image_window_t3

0x0002,

0xfc96,	// (0x00063f1c) popup_note2_image_window_t_ParamLimits

0xfc96,	// (0x00063f1c) popup_note2_image_window_t

0x99bd,	// (0x0005dc43) popup_note2_wait_window_g1_ParamLimits

0x99bd,	// (0x0005dc43) popup_note2_wait_window_g1

0x99c9,	// (0x0005dc4f) popup_note2_wait_window_g2_ParamLimits

0x99c9,	// (0x0005dc4f) popup_note2_wait_window_g2

0x99d5,	// (0x0005dc5b) popup_note2_wait_window_g3_ParamLimits

0x99d5,	// (0x0005dc5b) popup_note2_wait_window_g3

0x0002,

0xf843,	// (0x00063ac9) popup_note2_wait_window_g_ParamLimits

0xf843,	// (0x00063ac9) popup_note2_wait_window_g

0xc8cf,	// (0x00060b55) popup_note2_wait_window_t1_ParamLimits

0xc8cf,	// (0x00060b55) popup_note2_wait_window_t1

0xc8ed,	// (0x00060b73) popup_note2_wait_window_t2_ParamLimits

0xc8ed,	// (0x00060b73) popup_note2_wait_window_t2

0xc90b,	// (0x00060b91) popup_note2_wait_window_t3_ParamLimits

0xc90b,	// (0x00060b91) popup_note2_wait_window_t3

0xc91d,	// (0x00060ba3) popup_note2_wait_window_t4_ParamLimits

0xc91d,	// (0x00060ba3) popup_note2_wait_window_t4

0x0003,

0xfc9d,	// (0x00063f23) popup_note2_wait_window_t_ParamLimits

0xfc9d,	// (0x00063f23) popup_note2_wait_window_t

0xc92f,	// (0x00060bb5) wait_bar2_pane_ParamLimits

0xc92f,	// (0x00060bb5) wait_bar2_pane

0xc947,	// (0x00060bcd) popup_snote2_single_text_window_g1_ParamLimits

0xc947,	// (0x00060bcd) popup_snote2_single_text_window_g1

0xc96f,	// (0x00060bf5) popup_snote2_single_text_window_t1_ParamLimits

0xc96f,	// (0x00060bf5) popup_snote2_single_text_window_t1

0xc9bb,	// (0x00060c41) popup_snote2_single_text_window_t2_ParamLimits

0xc9bb,	// (0x00060c41) popup_snote2_single_text_window_t2

0xca07,	// (0x00060c8d) popup_snote2_single_text_window_t3_ParamLimits

0xca07,	// (0x00060c8d) popup_snote2_single_text_window_t3

0xca48,	// (0x00060cce) popup_snote2_single_text_window_t4_ParamLimits

0xca48,	// (0x00060cce) popup_snote2_single_text_window_t4

0xca7e,	// (0x00060d04) popup_snote2_single_text_window_t5_ParamLimits

0xca7e,	// (0x00060d04) popup_snote2_single_text_window_t5

0x0004,

0xfca6,	// (0x00063f2c) popup_snote2_single_text_window_t_ParamLimits

0xfca6,	// (0x00063f2c) popup_snote2_single_text_window_t

0xcaa9,	// (0x00060d2f) popup_snote2_single_graphic_window_g1_ParamLimits

0xcaa9,	// (0x00060d2f) popup_snote2_single_graphic_window_g1

0xcad1,	// (0x00060d57) popup_snote2_single_graphic_window_g2_ParamLimits

0xcad1,	// (0x00060d57) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb1,	// (0x00063f37) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb1,	// (0x00063f37) popup_snote2_single_graphic_window_g

0xcaf9,	// (0x00060d7f) popup_snote2_single_graphic_window_t1_ParamLimits

0xcaf9,	// (0x00060d7f) popup_snote2_single_graphic_window_t1

0xcb45,	// (0x00060dcb) popup_snote2_single_graphic_window_t2_ParamLimits

0xcb45,	// (0x00060dcb) popup_snote2_single_graphic_window_t2

0xca07,	// (0x00060c8d) popup_snote2_single_graphic_window_t3_ParamLimits

0xca07,	// (0x00060c8d) popup_snote2_single_graphic_window_t3

0xca48,	// (0x00060cce) popup_snote2_single_graphic_window_t4_ParamLimits

0xca48,	// (0x00060cce) popup_snote2_single_graphic_window_t4

0xca7e,	// (0x00060d04) popup_snote2_single_graphic_window_t5_ParamLimits

0xca7e,	// (0x00060d04) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb6,	// (0x00063f3c) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb6,	// (0x00063f3c) popup_snote2_single_graphic_window_t

0xb56f,	// (0x0005f7f5) clock_nsta_pane_cp2_t1

0xb56f,	// (0x0005f7f5) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x00063d57) clock_nsta_pane_cp2_t

0x35b0,	// (0x00057836) form_field_data_wide_pane_g1_ParamLimits

0xf1ca,	// (0x00063450) form_field_data_wide_pane_g2_ParamLimits

0xf1ca,	// (0x00063450) form_field_data_wide_pane_g2

0xf1d6,	// (0x0006345c) form_field_data_wide_pane_g3_ParamLimits

0xf1d6,	// (0x0006345c) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x000638fc) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x000638fc) form_field_data_wide_pane_g

0xb471,	// (0x0005f6f7) grid_touch_3_pane_ParamLimits

0xb471,	// (0x0005f6f7) grid_touch_3_pane

0xcb91,	// (0x00060e17) cell_touch_3_pane_ParamLimits

0xcb91,	// (0x00060e17) cell_touch_3_pane

0xbacb,	// (0x0005fd51) cell_touch_3_pane_g1

0xbacb,	// (0x0005fd51) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x00063ddc) cell_touch_3_pane_g

0xefea,	// (0x00063270) cont_query_data_pane

0xeff2,	// (0x00063278) cont_query_data_pane_cp1

0xcbbf,	// (0x00060e45) button_value_adjust_pane_cp7

0xcbc7,	// (0x00060e4d) query_popup_pane_cp3

0x13e0,	// (0x00055666) bg_popup_sub_pane_cp22_ParamLimits

0x6912,	// (0x0005ab98) navi_navi_volume_pane_cp2

0x692a,	// (0x0005abb0) popup_side_volume_key_window_g2

0x6936,	// (0x0005abbc) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00063992) popup_side_volume_key_window_g

0x6950,	// (0x0005abd6) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00063999) popup_side_volume_key_window_t

0x6bfe,	// (0x0005ae84) popup_side_volume_key_window_ParamLimits

0x6013,	// (0x0005a299) list_double_graphic_pane_g4_ParamLimits

0x6013,	// (0x0005a299) list_double_graphic_pane_g4

0xa907,	// (0x0005eb8d) list_single_2heading_msg_pane_ParamLimits

0xa907,	// (0x0005eb8d) list_single_2heading_msg_pane

0xad47,	// (0x0005efcd) list_single_2heading_msg_pane_g1_ParamLimits

0xad47,	// (0x0005efcd) list_single_2heading_msg_pane_g1

0x5e2d,	// (0x0005a0b3) list_single_2heading_msg_pane_g2_ParamLimits

0x5e2d,	// (0x0005a0b3) list_single_2heading_msg_pane_g2

0xad53,	// (0x0005efd9) list_single_2heading_msg_pane_g3_ParamLimits

0xad53,	// (0x0005efd9) list_single_2heading_msg_pane_g3

0xad5f,	// (0x0005efe5) list_single_2heading_msg_pane_g4_ParamLimits

0xad5f,	// (0x0005efe5) list_single_2heading_msg_pane_g4

0x0003,

0xfcc1,	// (0x00063f47) list_single_2heading_msg_pane_g_ParamLimits

0xfcc1,	// (0x00063f47) list_single_2heading_msg_pane_g

0x8004,	// (0x0005c28a) list_single_2heading_msg_pane_t1_ParamLimits

0x8004,	// (0x0005c28a) list_single_2heading_msg_pane_t1

0x802c,	// (0x0005c2b2) list_single_2heading_msg_pane_t2_ParamLimits

0x802c,	// (0x0005c2b2) list_single_2heading_msg_pane_t2

0x805b,	// (0x0005c2e1) list_single_2heading_msg_pane_t3_ParamLimits

0x805b,	// (0x0005c2e1) list_single_2heading_msg_pane_t3

0x47ed,	// (0x00058a73) list_single_2heading_msg_pane_t4_ParamLimits

0x47ed,	// (0x00058a73) list_single_2heading_msg_pane_t4

0x0003,

0xfcca,	// (0x00063f50) list_single_2heading_msg_pane_t_ParamLimits

0xfcca,	// (0x00063f50) list_single_2heading_msg_pane_t

0xedb8,	// (0x0006303e) title_pane_g4_ParamLimits

0xedb8,	// (0x0006303e) title_pane_g4

0x656b,	// (0x0005a7f1) title_pane_stacon_g3_ParamLimits

0x656b,	// (0x0005a7f1) title_pane_stacon_g3

0xc6f9,	// (0x0006097f) list_single_2graphic_im_pane_g4_ParamLimits

0xc6f9,	// (0x0006097f) list_single_2graphic_im_pane_g4

0xa3f6,	// (0x0005e67c) popup_side_volume_key_window_cp

0xadcc,	// (0x0005f052) main_idle_act2_pane_t1

0x7616,	// (0x0005b89c) toolbar_button_pane_g10

0x5e17,	// (0x0005a09d) popup_toolbar_window_cp1

0xb560,	// (0x0005f7e6) clock_nsta_pane_cp_t1

0xb560,	// (0x0005f7e6) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x00063d52) clock_nsta_pane_cp_t

0x6912,	// (0x0005ab98) navi_navi_volume_pane_cp2_ParamLimits

0x691e,	// (0x0005aba4) popup_side_volume_key_window_g1_ParamLimits

0x692a,	// (0x0005abb0) popup_side_volume_key_window_g2_ParamLimits

0x6936,	// (0x0005abbc) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00063992) popup_side_volume_key_window_g_ParamLimits

0x7bc6,	// (0x0005be4c) fep_hwr_aid_pane

0x7c6d,	// (0x0005bef3) bg_fep_hwr_top_pane_g4_ParamLimits

0xbb27,	// (0x0005fdad) fep_hwr_top_pane_g1_ParamLimits

0xbb39,	// (0x0005fdbf) fep_hwr_top_pane_g2_ParamLimits

0x7c8d,	// (0x0005bf13) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x00063da7) fep_hwr_top_pane_g_ParamLimits

0x7ca2,	// (0x0005bf28) fep_hwr_top_text_pane_ParamLimits

0xa1b9,	// (0x0005e43f) aid_touch_tab_arrow_arrow_2

0xa1c2,	// (0x0005e448) aid_touch_tab_arrow_left_2

0x7bda,	// (0x0005be60) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7c11,	// (0x0005be97) fep_hwr_prediction_pane

0xbc92,	// (0x0005ff18) fep_vkb_prediction_pane

0xbd8f,	// (0x00060015) fep_vkb_side_pane_g3_ParamLimits

0xbd8f,	// (0x00060015) fep_vkb_side_pane_g3

0x7e1d,	// (0x0005c0a3) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7e89,	// (0x0005c10f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7e96,	// (0x0005c11c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd0,	// (0x00063e56) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8094,	// (0x0005c31a) fep_hwr_prediction_pane_g1

0x809e,	// (0x0005c324) fep_hwr_prediction_pane_g2

0x80a6,	// (0x0005c32c) fep_hwr_prediction_pane_g3

0x80ae,	// (0x0005c334) fep_hwr_prediction_pane_g4

0x0003,

0xfcd3,	// (0x00063f59) fep_hwr_prediction_pane_g

0xcbec,	// (0x00060e72) fep_vkb_prediction_pane_g1

0xcbf6,	// (0x00060e7c) fep_vkb_prediction_pane_g2

0xcbfe,	// (0x00060e84) fep_vkb_prediction_pane_g3

0xcc06,	// (0x00060e8c) fep_vkb_prediction_pane_g4

0x0003,

0xfcdc,	// (0x00063f62) fep_vkb_prediction_pane_g

0x7944,	// (0x0005bbca) slider_set_pane_g3

0x7958,	// (0x0005bbde) slider_set_pane_g4

0x7970,	// (0x0005bbf6) slider_set_pane_g5

0x7944,	// (0x0005bbca) slider_set_pane_g6

0x7986,	// (0x0005bc0c) slider_set_pane_g7

0xa845,	// (0x0005eacb) slider_form_pane_g3

0xa84e,	// (0x0005ead4) slider_form_pane_g4

0xa856,	// (0x0005eadc) slider_form_pane_g5

0xa845,	// (0x0005eacb) slider_form_pane_g6

0xa85e,	// (0x0005eae4) slider_form_pane_g7

0xb077,	// (0x0005f2fd) slider_set_pane_vc_g3

0xb080,	// (0x0005f306) slider_set_pane_vc_g4

0xb089,	// (0x0005f30f) slider_set_pane_vc_g5

0xb077,	// (0x0005f2fd) slider_set_pane_vc_g6

0xb092,	// (0x0005f318) slider_set_pane_vc_g7

0xb244,	// (0x0005f4ca) slider_form_pane_vc_g1

0xb24d,	// (0x0005f4d3) slider_form_pane_vc_g2

0xb256,	// (0x0005f4dc) slider_form_pane_vc_g3

0xb244,	// (0x0005f4ca) slider_form_pane_vc_g4

0xb25f,	// (0x0005f4e5) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x00063d24) slider_form_pane_vc_g

0x55ef,	// (0x00059875) main_idle_act3_pane

0xcc0e,	// (0x00060e94) ai3_links_pane

0xcc17,	// (0x00060e9d) popup_ai3_data_window_ParamLimits

0xcc17,	// (0x00060e9d) popup_ai3_data_window

0xed9a,	// (0x00063020) grid_ai3_links_pane

0xcc2f,	// (0x00060eb5) cell_ai3_links_pane_ParamLimits

0xcc2f,	// (0x00060eb5) cell_ai3_links_pane

0xcc47,	// (0x00060ecd) bg_popup_sub_pane_cp11

0xcc54,	// (0x00060eda) cell_ai3_links_pane_g1

0xed9a,	// (0x00063020) bg_popup_sub_pane_cp12

0xcc79,	// (0x00060eff) heading_ai3_data_pane

0xcc81,	// (0x00060f07) list_ai3_gene_pane

0xcc8d,	// (0x00060f13) popup_ai3_data_window_g1

0xcc95,	// (0x00060f1b) heading_ai3_data_pane_g1

0xcc9d,	// (0x00060f23) heading_ai3_data_pane_t1

0xccab,	// (0x00060f31) list_double_ai3_gene_pane_ParamLimits

0xccab,	// (0x00060f31) list_double_ai3_gene_pane

0xccb8,	// (0x00060f3e) list_single_ai3_gene_pane_ParamLimits

0xccb8,	// (0x00060f3e) list_single_ai3_gene_pane

0xba90,	// (0x0005fd16) list_highlight_pane_cp7_ParamLimits

0xba90,	// (0x0005fd16) list_highlight_pane_cp7

0xccc5,	// (0x00060f4b) list_single_a13_gene_pane_t1_ParamLimits

0xccc5,	// (0x00060f4b) list_single_a13_gene_pane_t1

0xccdc,	// (0x00060f62) list_single_ai3_gene_pane_g1

0xcce5,	// (0x00060f6b) list_single_ai3_gene_pane_g2

0x0001,

0xfce5,	// (0x00063f6b) list_single_ai3_gene_pane_g

0xcced,	// (0x00060f73) list_double_ai3_gene_pane_g1_ParamLimits

0xcced,	// (0x00060f73) list_double_ai3_gene_pane_g1

0xccf9,	// (0x00060f7f) list_double_ai3_gene_pane_t1_ParamLimits

0xccf9,	// (0x00060f7f) list_double_ai3_gene_pane_t1

0xcd15,	// (0x00060f9b) list_double_ai3_gene_pane_t2_ParamLimits

0xcd15,	// (0x00060f9b) list_double_ai3_gene_pane_t2

0xcd2a,	// (0x00060fb0) list_double_ai3_gene_pane_t3_ParamLimits

0xcd2a,	// (0x00060fb0) list_double_ai3_gene_pane_t3

0x0002,

0xfcea,	// (0x00063f70) list_double_ai3_gene_pane_t_ParamLimits

0xfcea,	// (0x00063f70) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x47e3,	// (0x00058a69) aid_size_min_col_2

0xcbd8,	// (0x00060e5e) aid_size_min_msg_ParamLimits

0xcbd8,	// (0x00060e5e) aid_size_min_msg

0xbe8f,	// (0x00060115) fep_vkb_top_text_pane_g2_ParamLimits

0xbe8f,	// (0x00060115) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x00063dd7) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x00063dd7) fep_vkb_top_text_pane_g

0x55ef,	// (0x00059875) main_hc_apps_shell_pane

0xcd47,	// (0x00060fcd) grid_hc_apps_pane_ParamLimits

0xcd47,	// (0x00060fcd) grid_hc_apps_pane

0xcd56,	// (0x00060fdc) list_hc_apps_pane

0xcd5e,	// (0x00060fe4) scroll_pane_cp37_ParamLimits

0xcd5e,	// (0x00060fe4) scroll_pane_cp37

0xcd6a,	// (0x00060ff0) cell_hc_apps_pane_ParamLimits

0xcd6a,	// (0x00060ff0) cell_hc_apps_pane

0xce18,	// (0x0006109e) cell_hc_apps_pane_g1_ParamLimits

0xce18,	// (0x0006109e) cell_hc_apps_pane_g1

0xce49,	// (0x000610cf) cell_hc_apps_pane_g2_ParamLimits

0xce49,	// (0x000610cf) cell_hc_apps_pane_g2

0xce65,	// (0x000610eb) cell_hc_apps_pane_g3_ParamLimits

0xce65,	// (0x000610eb) cell_hc_apps_pane_g3

0x0002,

0xfcf1,	// (0x00063f77) cell_hc_apps_pane_g_ParamLimits

0xfcf1,	// (0x00063f77) cell_hc_apps_pane_g

0xce87,	// (0x0006110d) cell_hc_apps_pane_t1_ParamLimits

0xce87,	// (0x0006110d) cell_hc_apps_pane_t1

0xef34,	// (0x000631ba) grid_highlight_pane_cp10_ParamLimits

0xef34,	// (0x000631ba) grid_highlight_pane_cp10

0xcec7,	// (0x0006114d) list_single_hc_apps_pane_ParamLimits

0xcec7,	// (0x0006114d) list_single_hc_apps_pane

0xcf4b,	// (0x000611d1) list_single_hc_apps_pane_g1

0xad77,	// (0x0005effd) list_single_hc_apps_pane_g2

0x0001,

0xfcf8,	// (0x00063f7e) list_single_hc_apps_pane_g

0xad90,	// (0x0005f016) list_single_hc_apps_pane_g2_copy1

0x80b6,	// (0x0005c33c) list_single_hc_apps_pane_t1

0xedfc,	// (0x00063082) bg_set_opt_pane_cp_ParamLimits

0x5908,	// (0x00059b8e) setting_slider_pane_t1_ParamLimits

0x5921,	// (0x00059ba7) setting_slider_pane_t2_ParamLimits

0x593b,	// (0x00059bc1) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000637e4) setting_slider_pane_t_ParamLimits

0x5953,	// (0x00059bd9) slider_set_pane_ParamLimits

0x6f0d,	// (0x0005b193) control_pane_g5_ParamLimits

0x6f0d,	// (0x0005b193) control_pane_g5

0xa698,	// (0x0005e91e) slider_set_pane_g1_ParamLimits

0x7938,	// (0x0005bbbe) slider_set_pane_g2_ParamLimits

0x7944,	// (0x0005bbca) slider_set_pane_g3_ParamLimits

0x7958,	// (0x0005bbde) slider_set_pane_g4_ParamLimits

0x7970,	// (0x0005bbf6) slider_set_pane_g5_ParamLimits

0x7944,	// (0x0005bbca) slider_set_pane_g6_ParamLimits

0x7986,	// (0x0005bc0c) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x00063be5) slider_set_pane_g_ParamLimits

0x3773,	// (0x000579f9) navi_icon_text_pane_ParamLimits

0x8e3c,	// (0x0005d0c2) aid_fill_nsta_2_ParamLimits

0x8e7b,	// (0x0005d101) aid_touch_tab_arrow_left_ParamLimits

0x8e8a,	// (0x0005d110) aid_touch_tab_arrow_right_ParamLimits

0x8ef7,	// (0x0005d17d) clock_nsta_pane_ParamLimits

0xa19b,	// (0x0005e421) navi_icon_pane_g1_ParamLimits

0xa1a7,	// (0x0005e42d) navi_text_pane_t1_ParamLimits

0xb670,	// (0x0005f8f6) navi_icon_text_pane_g1_ParamLimits

0xb67c,	// (0x0005f902) navi_icon_text_pane_t1_ParamLimits

0xcf4b,	// (0x000611d1) list_single_hc_apps_pane_g1_ParamLimits

0xad77,	// (0x0005effd) list_single_hc_apps_pane_g2_ParamLimits

0xfcf8,	// (0x00063f7e) list_single_hc_apps_pane_g_ParamLimits

0xad90,	// (0x0005f016) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x80b6,	// (0x0005c33c) list_single_hc_apps_pane_t1_ParamLimits

0x574c,	// (0x000599d2) popup_toolbar2_fixed_window_ParamLimits

0x574c,	// (0x000599d2) popup_toolbar2_fixed_window

0x751a,	// (0x0005b7a0) popup_toolbar2_float_window

0xed9a,	// (0x00063020) bg_popup_sub_pane_cp27

0xcf64,	// (0x000611ea) grid_toolbar2_float_pane

0xed9a,	// (0x00063020) bg_popup_sub_pane_cp26

0xcf64,	// (0x000611ea) grid_toolbar2_fixed_pane

0xcf6c,	// (0x000611f2) cell_toolbar2_fixed_pane_ParamLimits

0xcf6c,	// (0x000611f2) cell_toolbar2_fixed_pane

0xcf7c,	// (0x00061202) cell_toolbar2_fixed_pane_g1

0x73ec,	// (0x0005b672) toolbar2_fixed_button_pane

0x9311,	// (0x0005d597) toolbar2_fixed_button_pane_g1

0x9321,	// (0x0005d5a7) toolbar2_fixed_button_pane_g2

0x9319,	// (0x0005d59f) toolbar2_fixed_button_pane_g3

0x9331,	// (0x0005d5b7) toolbar2_fixed_button_pane_g4

0x9329,	// (0x0005d5af) toolbar2_fixed_button_pane_g5

0x9339,	// (0x0005d5bf) toolbar2_fixed_button_pane_g6

0x9341,	// (0x0005d5c7) toolbar2_fixed_button_pane_g7

0x9351,	// (0x0005d5d7) toolbar2_fixed_button_pane_g8

0x9349,	// (0x0005d5cf) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x00063ae7) toolbar2_fixed_button_pane_g

0xcf85,	// (0x0006120b) cell_toolbar2_float_pane_ParamLimits

0xcf85,	// (0x0006120b) cell_toolbar2_float_pane

0xcf96,	// (0x0006121c) cell_toolbar2_float_pane_g1

0x73ec,	// (0x0005b672) toolbar2_fixed_button_pane_cp

0xbbf9,	// (0x0005fe7f) fep_vkb_accented_list_pane_ParamLimits

0xbbf9,	// (0x0005fe7f) fep_vkb_accented_list_pane

0x7dfd,	// (0x0005c083) bg_popup_fep_shadow_pane_g9

0x38c5,	// (0x00057b4b) bg_popup_fep_shadow_pane_cp3

0xf2c2,	// (0x00063548) list_accented_list_pane

0xcf9f,	// (0x00061225) list_single_accented_list_pane_ParamLimits

0xcf9f,	// (0x00061225) list_single_accented_list_pane

0x38c5,	// (0x00057b4b) list_highlight_pane_cp10

0xcfb0,	// (0x00061236) list_single_accented_list_pane_t1

0x746a,	// (0x0005b6f0) popup_slider_window_ParamLimits

0x746a,	// (0x0005b6f0) popup_slider_window

0xcbcf,	// (0x00060e55) aid_indentation_list_msg

0xd06e,	// (0x000612f4) bg_popup_window_pane_cp19

0xd0d6,	// (0x0006135c) popup_slider_window_g1

0xd0f2,	// (0x00061378) popup_slider_window_g2

0xd10e,	// (0x00061394) popup_slider_window_g3

0x0005,

0xfcfd,	// (0x00063f83) popup_slider_window_g

0xd174,	// (0x000613fa) popup_slider_window_t1

0xd1e8,	// (0x0006146e) small_volume_slider_vertical_pane

0xbacb,	// (0x0005fd51) small_volume_slider_vertical_pane_g1

0xbacb,	// (0x0005fd51) small_volume_slider_vertical_pane_g2

0xd204,	// (0x0006148a) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0f,	// (0x00063f95) small_volume_slider_vertical_pane_g

0x5512,	// (0x00059798) area_side_right_pane_ParamLimits

0x5512,	// (0x00059798) area_side_right_pane

0x80e4,	// (0x0005c36a) aid_size_side_button_ParamLimits

0x80e4,	// (0x0005c36a) aid_size_side_button

0x80f8,	// (0x0005c37e) grid_sctrl_middle_pane_ParamLimits

0x80f8,	// (0x0005c37e) grid_sctrl_middle_pane

0x8117,	// (0x0005c39d) sctrl_sk_bottom_pane

0x8128,	// (0x0005c3ae) sctrl_sk_top_pane

0x813a,	// (0x0005c3c0) aid_touch_sctrl_top

0x8147,	// (0x0005c3cd) bg_sctrl_sk_pane_ParamLimits

0x8147,	// (0x0005c3cd) bg_sctrl_sk_pane

0x8155,	// (0x0005c3db) sctrl_sk_top_pane_g1

0x8162,	// (0x0005c3e8) sctrl_sk_top_pane_t1

0x813a,	// (0x0005c3c0) aid_touch_sctrl_bottom

0x8147,	// (0x0005c3cd) bg_sctrl_sk_pane_cp_ParamLimits

0x8147,	// (0x0005c3cd) bg_sctrl_sk_pane_cp

0x817d,	// (0x0005c403) sctrl_sk_bottom_pane_g1

0x8162,	// (0x0005c3e8) sctrl_sk_bottom_pane_t1

0x8186,	// (0x0005c40c) cell_sctrl_middle_pane_ParamLimits

0x8186,	// (0x0005c40c) cell_sctrl_middle_pane

0x81a1,	// (0x0005c427) aid_touch_sctrl_middle_ParamLimits

0x81a1,	// (0x0005c427) aid_touch_sctrl_middle

0x81b3,	// (0x0005c439) bg_sctrl_middle_pane_ParamLimits

0x81b3,	// (0x0005c439) bg_sctrl_middle_pane

0x7e1d,	// (0x0005c0a3) cell_sctrl_middle_pane_g1_ParamLimits

0x7e1d,	// (0x0005c0a3) cell_sctrl_middle_pane_g1

0x81c1,	// (0x0005c447) cell_sctrl_middle_pane_g2_ParamLimits

0x81c1,	// (0x0005c447) cell_sctrl_middle_pane_g2

0x0001,

0xfd1b,	// (0x00063fa1) cell_sctrl_middle_pane_g_ParamLimits

0xfd1b,	// (0x00063fa1) cell_sctrl_middle_pane_g

0x9311,	// (0x0005d597) bg_sctrl_middle_pane_g1

0x9319,	// (0x0005d59f) bg_sctrl_middle_pane_g2

0x9321,	// (0x0005d5a7) bg_sctrl_middle_pane_g3

0x9329,	// (0x0005d5af) bg_sctrl_middle_pane_g4

0x9331,	// (0x0005d5b7) bg_sctrl_middle_pane_g5

0x9339,	// (0x0005d5bf) bg_sctrl_middle_pane_g6

0x9341,	// (0x0005d5c7) bg_sctrl_middle_pane_g7

0x9349,	// (0x0005d5cf) bg_sctrl_middle_pane_g8

0x0007,

0xfd20,	// (0x00063fa6) bg_sctrl_middle_pane_g

0x9351,	// (0x0005d5d7) bg_sctrl_middle_pane_g8_copy1

0x9311,	// (0x0005d597) bg_sctrl_sk_pane_g1

0x9321,	// (0x0005d5a7) bg_sctrl_sk_pane_g2

0x9319,	// (0x0005d59f) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x00063ae7) bg_sctrl_sk_pane_g

0xf0fe,	// (0x00063384) aid_size_touch_scroll_bar

0x9331,	// (0x0005d5b7) bg_sctrl_sk_pane_g4

0x9329,	// (0x0005d5af) bg_sctrl_sk_pane_g5

0x9339,	// (0x0005d5bf) bg_sctrl_sk_pane_g6

0x9341,	// (0x0005d5c7) bg_sctrl_sk_pane_g7

0x9351,	// (0x0005d5d7) bg_sctrl_sk_pane_g8

0x9349,	// (0x0005d5cf) bg_sctrl_sk_pane_g9

0x70d3,	// (0x0005b359) popup_fep_china_hwr2_fs_candidate_window

0x70dd,	// (0x0005b363) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x70dd,	// (0x0005b363) popup_fep_china_hwr2_fs_control_window

0x7e1d,	// (0x0005c0a3) sctrl_sk_top_pane_g2

0x0001,

0xfd16,	// (0x00063f9c) sctrl_sk_top_pane_g

0xd20d,	// (0x00061493) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd20d,	// (0x00061493) aid_fep_china_hwr2_fs_cell

0xd21f,	// (0x000614a5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd21f,	// (0x000614a5) bg_popup_fep_shadow_pane_cp4

0xd236,	// (0x000614bc) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd236,	// (0x000614bc) bg_popup_fep_shadow_pane_cp5

0xd248,	// (0x000614ce) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd248,	// (0x000614ce) popup_fep_china_hwr2_fs_control_bar_grid

0xd258,	// (0x000614de) popup_fep_china_hwr2_fs_control_funtion_grid

0xd260,	// (0x000614e6) aid_fep_china_hwr2_fs_candi_cell

0xed9a,	// (0x00063020) bg_popup_fep_shadow_pane_cp6

0xd26a,	// (0x000614f0) popup_fep_china_hwr2_fs_candidate_grid

0xd274,	// (0x000614fa) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd274,	// (0x000614fa) cell_fep_china_hwr2_fs_funtion_grid

0xbacb,	// (0x0005fd51) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd28c,	// (0x00061512) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd28c,	// (0x00061512) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd29a,	// (0x00061520) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd29a,	// (0x00061520) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd31,	// (0x00063fb7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd31,	// (0x00063fb7) cell_fep_china_hwr2_fs_funtion_grid_g

0xd2b0,	// (0x00061536) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd2b0,	// (0x00061536) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd2c5,	// (0x0006154b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd2c5,	// (0x0006154b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd36,	// (0x00063fbc) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd36,	// (0x00063fbc) cell_fep_china_hwr2_fs_funtion_grid_t

0xd2e1,	// (0x00061567) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd2e9,	// (0x0006156f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd2f1,	// (0x00061577) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3b,	// (0x00063fc1) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd2f9,	// (0x0006157f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd2f9,	// (0x0006157f) cell_fep_china_hwr2_fs_candidate_grid

0xd312,	// (0x00061598) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd31a,	// (0x000615a0) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbacb,	// (0x0005fd51) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbacb,	// (0x0005fd51) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x00063ddc) cell_fep_china_hwr2_fs_candidate_grid_g

0xd322,	// (0x000615a8) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8f0a,	// (0x0005d190) clock_nsta_pane_cp_24_ParamLimits

0x8f0a,	// (0x0005d190) clock_nsta_pane_cp_24

0x8f88,	// (0x0005d20e) indicator_nsta_pane_cp_24_ParamLimits

0x8f88,	// (0x0005d20e) indicator_nsta_pane_cp_24

0xa017,	// (0x0005e29d) heading_pane_g1

0x0001,

0xf8c6,	// (0x00063b4c) heading_pane_g

0xaaae,	// (0x0005ed34) grid_sct_catagory_button_pane

0xaade,	// (0x0005ed64) scroll_pane_cp5_ParamLimits

0xb6be,	// (0x0005f944) button_value_adjust_pane_cp5_ParamLimits

0xb6be,	// (0x0005f944) button_value_adjust_pane_cp5

0xb79d,	// (0x0005fa23) form2_midp_time_pane_ParamLimits

0xd330,	// (0x000615b6) cell_sct_catagory_button_pane_ParamLimits

0xd330,	// (0x000615b6) cell_sct_catagory_button_pane

0xba90,	// (0x0005fd16) bg_button_pane_cp01_ParamLimits

0xba90,	// (0x0005fd16) bg_button_pane_cp01

0xbacb,	// (0x0005fd51) cell_sct_catagory_button_pane_g1

0x74a9,	// (0x0005b72f) popup_tb_extension_window

0xd342,	// (0x000615c8) aid_size_cell_ext_ParamLimits

0xd342,	// (0x000615c8) aid_size_cell_ext

0xef34,	// (0x000631ba) bg_tb_trans_pane_cp1_ParamLimits

0xef34,	// (0x000631ba) bg_tb_trans_pane_cp1

0xd362,	// (0x000615e8) grid_tb_ext_pane_ParamLimits

0xd362,	// (0x000615e8) grid_tb_ext_pane

0xd392,	// (0x00061618) cell_tb_ext_pane_ParamLimits

0xd392,	// (0x00061618) cell_tb_ext_pane

0xd3a9,	// (0x0006162f) cell_tb_ext_pane_g1_ParamLimits

0xd3a9,	// (0x0006162f) cell_tb_ext_pane_g1

0xd3c6,	// (0x0006164c) cell_tb_ext_pane_t1

0xef34,	// (0x000631ba) list_highlight_pane_cp11_ParamLimits

0xef34,	// (0x000631ba) list_highlight_pane_cp11

0x576b,	// (0x000599f1) popup_uni_indicator_window_ParamLimits

0x576b,	// (0x000599f1) popup_uni_indicator_window

0xf1bc,	// (0x00063442) bg_popup_sub_pane_cp14

0xd3e2,	// (0x00061668) list_uniindi_pane

0xd3ee,	// (0x00061674) uniindi_top_pane

0xef34,	// (0x000631ba) bg_uniindi_top_pane

0xd40d,	// (0x00061693) uniindi_top_pane_g1

0xd423,	// (0x000616a9) uniindi_top_pane_g2

0x0003,

0xfd42,	// (0x00063fc8) uniindi_top_pane_g

0xd44d,	// (0x000616d3) uniindi_top_pane_t1

0xd477,	// (0x000616fd) list_single_uniindi_pane_ParamLimits

0xd477,	// (0x000616fd) list_single_uniindi_pane

0xbacb,	// (0x0005fd51) bg_uniindi_top_pane_g1

0xd489,	// (0x0006170f) list_single_uniindi_pane_g1

0xd49c,	// (0x00061722) list_single_uniindi_pane_t1

0x55ef,	// (0x00059875) control_bg_pane

0xd4c1,	// (0x00061747) bg_sctrl_sk_pane_cp1

0xd4ca,	// (0x00061750) bg_sctrl_sk_pane_cp2

0xd4d3,	// (0x00061759) control_bg_pane_g1

0xd4dc,	// (0x00061762) control_bg_pane_g2

0x0001,

0xfd4b,	// (0x00063fd1) control_bg_pane_g

0xb514,	// (0x0005f79a) cell_indicator_nsta_pane_g1_ParamLimits

0xb522,	// (0x0005f7a8) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x00063d40) cell_indicator_nsta_pane_g_ParamLimits

0x466f,	// (0x000588f5) form2_midp_time_pane_t1_ParamLimits

0x703d,	// (0x0005b2c3) main_idle_act4_pane_ParamLimits

0x703d,	// (0x0005b2c3) main_idle_act4_pane

0x74a9,	// (0x0005b72f) popup_tb_extension_window_ParamLimits

0xd382,	// (0x00061608) tb_ext_find_pane_ParamLimits

0xd382,	// (0x00061608) tb_ext_find_pane

0xd4e5,	// (0x0006176b) ai_gene_pane_1_cp1

0x6d94,	// (0x0005b01a) ai_gene_pane_2_cp1

0xd4ed,	// (0x00061773) list_single_idle_plugin_calendar_pane

0xd4f6,	// (0x0006177c) list_single_idle_plugin_notification_pane

0xd4ff,	// (0x00061785) list_single_idle_plugin_player_pane

0xd508,	// (0x0006178e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd508,	// (0x0006178e) list_single_idle_plugin_shortcut_pane

0xd52a,	// (0x000617b0) main_idle_act4_pane_t1

0xd53c,	// (0x000617c2) main_idle_act4_pane_t2

0x0001,

0xfd50,	// (0x00063fd6) main_idle_act4_pane_t

0xd54e,	// (0x000617d4) middle_sk_idle_act4_pane_ParamLimits

0xd54e,	// (0x000617d4) middle_sk_idle_act4_pane

0xd564,	// (0x000617ea) popup_clock_digital_analogue_window_cp2

0xd57e,	// (0x00061804) shortcut_wheel_idle_act4_pane_ParamLimits

0xd57e,	// (0x00061804) shortcut_wheel_idle_act4_pane

0xbacb,	// (0x0005fd51) shortcut_wheel_idle_act4_pane_g1

0xbacb,	// (0x0005fd51) shortcut_wheel_idle_act4_pane_g2

0xbacb,	// (0x0005fd51) shortcut_wheel_idle_act4_pane_g3

0xbacb,	// (0x0005fd51) shortcut_wheel_idle_act4_pane_g4

0xbacb,	// (0x0005fd51) shortcut_wheel_idle_act4_pane_g5

0xd592,	// (0x00061818) shortcut_wheel_idle_act4_pane_g6

0xd59a,	// (0x00061820) shortcut_wheel_idle_act4_pane_g7

0xd5a2,	// (0x00061828) shortcut_wheel_idle_act4_pane_g8

0xd5aa,	// (0x00061830) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd55,	// (0x00063fdb) shortcut_wheel_idle_act4_pane_g

0xbd3b,	// (0x0005ffc1) middle_sk_idle_act4_pane_g1_ParamLimits

0xbd3b,	// (0x0005ffc1) middle_sk_idle_act4_pane_g1

0xd60e,	// (0x00061894) middle_sk_idle_act4_pane_g2_ParamLimits

0xd60e,	// (0x00061894) middle_sk_idle_act4_pane_g2

0x0001,

0xfd78,	// (0x00063ffe) middle_sk_idle_act4_pane_g_ParamLimits

0xfd78,	// (0x00063ffe) middle_sk_idle_act4_pane_g

0xd61a,	// (0x000618a0) middle_sk_idle_act4_pane_t1_ParamLimits

0xd61a,	// (0x000618a0) middle_sk_idle_act4_pane_t1

0xd637,	// (0x000618bd) grid_ai_shortcut_pane_ParamLimits

0xd637,	// (0x000618bd) grid_ai_shortcut_pane

0xd650,	// (0x000618d6) list_highlight_pane_cp16_ParamLimits

0xd650,	// (0x000618d6) list_highlight_pane_cp16

0xd65d,	// (0x000618e3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd65d,	// (0x000618e3) list_single_idle_plugin_shortcut_pane_g1

0xd669,	// (0x000618ef) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd669,	// (0x000618ef) list_single_idle_plugin_shortcut_pane_g2

0xd681,	// (0x00061907) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd681,	// (0x00061907) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7d,	// (0x00064003) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7d,	// (0x00064003) list_single_idle_plugin_shortcut_pane_g

0xd694,	// (0x0006191a) cell_ai_shortcut_pane_ParamLimits

0xd694,	// (0x0006191a) cell_ai_shortcut_pane

0xd6b8,	// (0x0006193e) cell_ai_shortcut_pane_g1_ParamLimits

0xd6b8,	// (0x0006193e) cell_ai_shortcut_pane_g1

0xd4e5,	// (0x0006176b) ai_gene_pane_1_cp2

0xd6da,	// (0x00061960) ai_gene_pane_2_cp2

0xd6e2,	// (0x00061968) list_highlight_pane_cp15

0xd6eb,	// (0x00061971) list_single_idle_plugin_calendar_pane_g1

0xd6e2,	// (0x00061968) list_highlight_pane_cp17

0xd6f3,	// (0x00061979) list_single_idle_plugin_calendar_pane_g1_copy1

0xd6fb,	// (0x00061981) list_single_idle_plugin_player_pane_g1

0xae6e,	// (0x0005f0f4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd84,	// (0x0006400a) list_single_idle_plugin_player_pane_g

0xd703,	// (0x00061989) list_single_idle_plugin_player_pane_t1

0xd711,	// (0x00061997) list_single_idle_plugin_player_pane_t2

0xd71f,	// (0x000619a5) list_single_idle_plugin_player_pane_t3

0xd72d,	// (0x000619b3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd89,	// (0x0006400f) list_single_idle_plugin_player_pane_t

0xd73b,	// (0x000619c1) wait_bar_pane_cp15

0xd743,	// (0x000619c9) grid_ai_notification_pane

0xae6e,	// (0x0005f0f4) list_single_idle_plugin_notification_pane_g1

0xd74c,	// (0x000619d2) cell_ai_notification_pane_ParamLimits

0xd74c,	// (0x000619d2) cell_ai_notification_pane

0xd759,	// (0x000619df) cell_ai_notification_pane_g1

0xd761,	// (0x000619e7) cell_ai_notification_pane_t1

0xd76f,	// (0x000619f5) tb_ext_find_button_pane

0xd777,	// (0x000619fd) tb_ext_find_pane_g1

0xd77f,	// (0x00061a05) tb_ext_find_pane_t1

0x137f,	// (0x00055605) tb_ext_find_button_pane_g1

0xd78d,	// (0x00061a13) tb_ext_find_button_pane_g2

0x0001,

0xfd92,	// (0x00064018) tb_ext_find_button_pane_g

0xd52a,	// (0x000617b0) main_idle_act4_pane_t1_ParamLimits

0xd53c,	// (0x000617c2) main_idle_act4_pane_t2_ParamLimits

0xfd50,	// (0x00063fd6) main_idle_act4_pane_t_ParamLimits

0xd564,	// (0x000617ea) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd572,	// (0x000617f8) sat_plugin_idle_act4_pane_ParamLimits

0xd572,	// (0x000617f8) sat_plugin_idle_act4_pane

0xd796,	// (0x00061a1c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd796,	// (0x00061a1c) sat_plugin_idle_act4_pane_t1

0xd7a9,	// (0x00061a2f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd7a9,	// (0x00061a2f) sat_plugin_idle_act4_pane_t2

0xd7bc,	// (0x00061a42) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd7bc,	// (0x00061a42) sat_plugin_idle_act4_pane_t3

0xd7cf,	// (0x00061a55) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd7cf,	// (0x00061a55) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd97,	// (0x0006401d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd97,	// (0x0006401d) sat_plugin_idle_act4_pane_t

0x56b4,	// (0x0005993a) popup_battery_window_ParamLimits

0x56b4,	// (0x0005993a) popup_battery_window

0xef34,	// (0x000631ba) bg_popup_sub_pane_cp25_ParamLimits

0xef34,	// (0x000631ba) bg_popup_sub_pane_cp25

0xd7e2,	// (0x00061a68) popup_battery_window_g1_ParamLimits

0xd7e2,	// (0x00061a68) popup_battery_window_g1

0xd7ee,	// (0x00061a74) popup_battery_window_t1_ParamLimits

0xd7ee,	// (0x00061a74) popup_battery_window_t1

0xd800,	// (0x00061a86) popup_battery_window_t2_ParamLimits

0xd800,	// (0x00061a86) popup_battery_window_t2

0x0001,

0xfda0,	// (0x00064026) popup_battery_window_t_ParamLimits

0xfda0,	// (0x00064026) popup_battery_window_t

0x6c5d,	// (0x0005aee3) midp_canvas_pane_ParamLimits

0x6cd6,	// (0x0005af5c) midp_keypad_pane_ParamLimits

0x6cd6,	// (0x0005af5c) midp_keypad_pane

0x8dea,	// (0x0005d070) main_midp_pane_ParamLimits

0xb57e,	// (0x0005f804) signal_pane_g2_cp_ParamLimits

0xd81d,	// (0x00061aa3) aid_size_cell_midp_keypad_ParamLimits

0xd81d,	// (0x00061aa3) aid_size_cell_midp_keypad

0xd837,	// (0x00061abd) midp_keyp_game_grid_pane_ParamLimits

0xd837,	// (0x00061abd) midp_keyp_game_grid_pane

0xd857,	// (0x00061add) midp_keyp_rocker_pane_ParamLimits

0xd857,	// (0x00061add) midp_keyp_rocker_pane

0xd890,	// (0x00061b16) midp_keyp_sk_left_pane_ParamLimits

0xd890,	// (0x00061b16) midp_keyp_sk_left_pane

0xd8ea,	// (0x00061b70) midp_keyp_sk_right_pane_ParamLimits

0xd8ea,	// (0x00061b70) midp_keyp_sk_right_pane

0xed9a,	// (0x00063020) bg_button_pane_cp03

0xd944,	// (0x00061bca) midp_keyp_sk_left_pane_g1

0xed9a,	// (0x00063020) bg_button_pane_cp04

0xd944,	// (0x00061bca) midp_keyp_sk_right_pane_g1

0xbacb,	// (0x0005fd51) midp_keyp_rocker_pane_g1

0xd94d,	// (0x00061bd3) keyp_game_cell_pane_ParamLimits

0xd94d,	// (0x00061bd3) keyp_game_cell_pane

0xed9a,	// (0x00063020) bg_button_pane_cp02

0xd960,	// (0x00061be6) keyp_game_cell_pane_g1

0x56ea,	// (0x00059970) popup_fep_vkb2_window_ParamLimits

0x56ea,	// (0x00059970) popup_fep_vkb2_window

0x81df,	// (0x0005c465) aid_size_cell_vkb2_ParamLimits

0x81df,	// (0x0005c465) aid_size_cell_vkb2

0x8233,	// (0x0005c4b9) popup_fep_vkb2_window_g1_ParamLimits

0x8233,	// (0x0005c4b9) popup_fep_vkb2_window_g1

0x827b,	// (0x0005c501) vkb2_area_bottom_pane_ParamLimits

0x827b,	// (0x0005c501) vkb2_area_bottom_pane

0x82c7,	// (0x0005c54d) vkb2_area_keypad_pane_ParamLimits

0x82c7,	// (0x0005c54d) vkb2_area_keypad_pane

0x8309,	// (0x0005c58f) vkb2_area_top_pane_ParamLimits

0x8309,	// (0x0005c58f) vkb2_area_top_pane

0x8383,	// (0x0005c609) vkb2_top_entry_pane_ParamLimits

0x8383,	// (0x0005c609) vkb2_top_entry_pane

0x83ad,	// (0x0005c633) vkb2_top_grid_left_pane_ParamLimits

0x83ad,	// (0x0005c633) vkb2_top_grid_left_pane

0x83cb,	// (0x0005c651) vkb2_top_grid_right_pane_ParamLimits

0x83cb,	// (0x0005c651) vkb2_top_grid_right_pane

0x83e9,	// (0x0005c66f) vkb2_cell_keypad_pane_ParamLimits

0x83e9,	// (0x0005c66f) vkb2_cell_keypad_pane

0x84ba,	// (0x0005c740) vkb2_area_bottom_grid_pane_ParamLimits

0x84ba,	// (0x0005c740) vkb2_area_bottom_grid_pane

0x84e0,	// (0x0005c766) vkb2_area_bottom_pane_g1_ParamLimits

0x84e0,	// (0x0005c766) vkb2_area_bottom_pane_g1

0x8504,	// (0x0005c78a) vkb2_area_bottom_pane_g2_ParamLimits

0x8504,	// (0x0005c78a) vkb2_area_bottom_pane_g2

0x8532,	// (0x0005c7b8) vkb2_area_bottom_pane_g3_ParamLimits

0x8532,	// (0x0005c7b8) vkb2_area_bottom_pane_g3

0x0002,

0xfda5,	// (0x0006402b) vkb2_area_bottom_pane_g_ParamLimits

0xfda5,	// (0x0006402b) vkb2_area_bottom_pane_g

0x8593,	// (0x0005c819) vkb2_top_cell_left_pane_ParamLimits

0x8593,	// (0x0005c819) vkb2_top_cell_left_pane

0xd971,	// (0x00061bf7) vkb2_top_entry_pane_g1_ParamLimits

0xd971,	// (0x00061bf7) vkb2_top_entry_pane_g1

0xd97f,	// (0x00061c05) vkb2_top_entry_pane_t1_ParamLimits

0xd97f,	// (0x00061c05) vkb2_top_entry_pane_t1

0xd9b1,	// (0x00061c37) vkb2_top_entry_pane_t2_ParamLimits

0xd9b1,	// (0x00061c37) vkb2_top_entry_pane_t2

0xd9e3,	// (0x00061c69) vkb2_top_entry_pane_t3_ParamLimits

0xd9e3,	// (0x00061c69) vkb2_top_entry_pane_t3

0x0002,

0xfdac,	// (0x00064032) vkb2_top_entry_pane_t_ParamLimits

0xfdac,	// (0x00064032) vkb2_top_entry_pane_t

0x85e0,	// (0x0005c866) vkb2_top_grid_right_pane_g1_ParamLimits

0x85e0,	// (0x0005c866) vkb2_top_grid_right_pane_g1

0x85f6,	// (0x0005c87c) vkb2_top_grid_right_pane_g2_ParamLimits

0x85f6,	// (0x0005c87c) vkb2_top_grid_right_pane_g2

0x860e,	// (0x0005c894) vkb2_top_grid_right_pane_g3_ParamLimits

0x860e,	// (0x0005c894) vkb2_top_grid_right_pane_g3

0x8626,	// (0x0005c8ac) vkb2_top_grid_right_pane_g4_ParamLimits

0x8626,	// (0x0005c8ac) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb3,	// (0x00064039) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb3,	// (0x00064039) vkb2_top_grid_right_pane_g

0x863c,	// (0x0005c8c2) vkb2_top_cell_left_pane_g1

0x8653,	// (0x0005c8d9) vkb2_cell_keypad_pane_g1_ParamLimits

0x8653,	// (0x0005c8d9) vkb2_cell_keypad_pane_g1

0xda07,	// (0x00061c8d) vkb2_cell_keypad_pane_t1_ParamLimits

0xda07,	// (0x00061c8d) vkb2_cell_keypad_pane_t1

0x8661,	// (0x0005c8e7) vkb2_cell_bottom_grid_pane_ParamLimits

0x8661,	// (0x0005c8e7) vkb2_cell_bottom_grid_pane

0x869a,	// (0x0005c920) vkb2_cell_bottom_grid_pane_g1

0xd5b2,	// (0x00061838) aid_call2_pane_cp02

0xd5ba,	// (0x00061840) aid_call_pane_cp02

0xd5c2,	// (0x00061848) clock_digital_number_pane_cp10

0xd5ca,	// (0x00061850) clock_digital_number_pane_cp11

0xd5d2,	// (0x00061858) clock_digital_number_pane_cp12

0xd5da,	// (0x00061860) clock_digital_number_pane_cp13

0xd5e2,	// (0x00061868) clock_digital_separator_pane_cp10

0x137f,	// (0x00055605) popup_clock_digital_analogue_window_cp2_g1

0x137f,	// (0x00055605) popup_clock_digital_analogue_window_cp2_g2

0xd5ea,	// (0x00061870) popup_clock_digital_analogue_window_cp2_g3

0x137f,	// (0x00055605) popup_clock_digital_analogue_window_cp2_g4

0xd5ea,	// (0x00061870) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd68,	// (0x00063fee) popup_clock_digital_analogue_window_cp2_g

0xd5f2,	// (0x00061878) popup_clock_digital_analogue_window_cp2_t1

0xd600,	// (0x00061886) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd73,	// (0x00063ff9) popup_clock_digital_analogue_window_cp2_t

0xbacb,	// (0x0005fd51) clock_digital_number_pane_cp10_g1

0xbacb,	// (0x0005fd51) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x00063ddc) clock_digital_number_pane_cp10_g

0xbacb,	// (0x0005fd51) clock_digital_separator_pane_cp10_g1

0xbacb,	// (0x0005fd51) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x00063ddc) clock_digital_separator_pane_cp10_g

0xd42f,	// (0x000616b5) uniindi_top_pane_g3

0xd440,	// (0x000616c6) uniindi_top_pane_g4

0x8474,	// (0x0005c6fa) vkb2_row_keypad_pane_ParamLimits

0x8474,	// (0x0005c6fa) vkb2_row_keypad_pane

0x86b6,	// (0x0005c93c) vkb2_cell_t_keypad_pane_ParamLimits

0x86b6,	// (0x0005c93c) vkb2_cell_t_keypad_pane

0x86c6,	// (0x0005c94c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x86c6,	// (0x0005c94c) vkb2_cell_t_keypad_pane_cp08

0x86d9,	// (0x0005c95f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x86d9,	// (0x0005c95f) vkb2_cell_t_keypad_pane_cp09

0x86ed,	// (0x0005c973) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x86ed,	// (0x0005c973) vkb2_cell_t_keypad_pane_cp01

0x86fe,	// (0x0005c984) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x86fe,	// (0x0005c984) vkb2_cell_t_keypad_pane_cp02

0x870f,	// (0x0005c995) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x870f,	// (0x0005c995) vkb2_cell_t_keypad_pane_cp03

0x8720,	// (0x0005c9a6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8720,	// (0x0005c9a6) vkb2_cell_t_keypad_pane_cp04

0x8731,	// (0x0005c9b7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8731,	// (0x0005c9b7) vkb2_cell_t_keypad_pane_cp05

0x8742,	// (0x0005c9c8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8742,	// (0x0005c9c8) vkb2_cell_t_keypad_pane_cp06

0x8753,	// (0x0005c9d9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8753,	// (0x0005c9d9) vkb2_cell_t_keypad_pane_cp07

0x8764,	// (0x0005c9ea) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8764,	// (0x0005c9ea) vkb2_cell_t_keypad_pane_cp10

0x7e1d,	// (0x0005c0a3) vkb2_cell_t_keypad_pane_g1

0xda1e,	// (0x00061ca4) vkb2_cell_t_keypad_pane_t1

0x55ef,	// (0x00059875) popup_grid_graphic2_window

0xda30,	// (0x00061cb6) aid_size_cell_graphic2_ParamLimits

0xda30,	// (0x00061cb6) aid_size_cell_graphic2

0xda68,	// (0x00061cee) bg_popup_window_pane_cp21_ParamLimits

0xda68,	// (0x00061cee) bg_popup_window_pane_cp21

0xda76,	// (0x00061cfc) graphic2_pages_pane_ParamLimits

0xda76,	// (0x00061cfc) graphic2_pages_pane

0xdabc,	// (0x00061d42) grid_graphic2_control_pane_ParamLimits

0xdabc,	// (0x00061d42) grid_graphic2_control_pane

0xdafa,	// (0x00061d80) grid_graphic2_pane_ParamLimits

0xdafa,	// (0x00061d80) grid_graphic2_pane

0xdb6e,	// (0x00061df4) cell_graphic2_pane

0x55ef,	// (0x00059875) main_comp_mode_pane

0xcc81,	// (0x00060f07) list_ai3_gene_pane_ParamLimits

0xd06e,	// (0x000612f4) bg_popup_window_pane_cp19_ParamLimits

0xd07a,	// (0x00061300) bg_touch_area_indi_pane_ParamLimits

0xd07a,	// (0x00061300) bg_touch_area_indi_pane

0xd090,	// (0x00061316) bg_touch_area_indi_pane_cp01_ParamLimits

0xd090,	// (0x00061316) bg_touch_area_indi_pane_cp01

0xd0a6,	// (0x0006132c) bg_touch_area_indi_pane_cp02_ParamLimits

0xd0a6,	// (0x0006132c) bg_touch_area_indi_pane_cp02

0xd0bc,	// (0x00061342) bg_touch_area_indi_pane_cp03_ParamLimits

0xd0bc,	// (0x00061342) bg_touch_area_indi_pane_cp03

0xd0d6,	// (0x0006135c) popup_slider_window_g1_ParamLimits

0xd0f2,	// (0x00061378) popup_slider_window_g2_ParamLimits

0xd10e,	// (0x00061394) popup_slider_window_g3_ParamLimits

0xfcfd,	// (0x00063f83) popup_slider_window_g_ParamLimits

0xd174,	// (0x000613fa) popup_slider_window_t1_ParamLimits

0xd1e8,	// (0x0006146e) small_volume_slider_vertical_pane_ParamLimits

0xdb6e,	// (0x00061df4) cell_graphic2_pane_ParamLimits

0xdbbd,	// (0x00061e43) bg_button_pane_cp10_ParamLimits

0xdbbd,	// (0x00061e43) bg_button_pane_cp10

0xdbd0,	// (0x00061e56) bg_button_pane_cp11_ParamLimits

0xdbd0,	// (0x00061e56) bg_button_pane_cp11

0xdbe3,	// (0x00061e69) graphic2_pages_pane_g1_ParamLimits

0xdbe3,	// (0x00061e69) graphic2_pages_pane_g1

0xdbfe,	// (0x00061e84) graphic2_pages_pane_g2_ParamLimits

0xdbfe,	// (0x00061e84) graphic2_pages_pane_g2

0x0001,

0xfdc1,	// (0x00064047) graphic2_pages_pane_g_ParamLimits

0xfdc1,	// (0x00064047) graphic2_pages_pane_g

0xdc16,	// (0x00061e9c) graphic2_pages_pane_t1_ParamLimits

0xdc16,	// (0x00061e9c) graphic2_pages_pane_t1

0xdc2e,	// (0x00061eb4) cell_graphic2_control_pane_ParamLimits

0xdc2e,	// (0x00061eb4) cell_graphic2_control_pane

0xdc4c,	// (0x00061ed2) cell_graphic2_pane_g1_ParamLimits

0xdc4c,	// (0x00061ed2) cell_graphic2_pane_g1

0xdc59,	// (0x00061edf) cell_graphic2_pane_g2_ParamLimits

0xdc59,	// (0x00061edf) cell_graphic2_pane_g2

0xdc66,	// (0x00061eec) cell_graphic2_pane_g3_ParamLimits

0xdc66,	// (0x00061eec) cell_graphic2_pane_g3

0xdc73,	// (0x00061ef9) cell_graphic2_pane_g4_ParamLimits

0xdc73,	// (0x00061ef9) cell_graphic2_pane_g4

0xdc80,	// (0x00061f06) cell_graphic2_pane_g5_ParamLimits

0xdc80,	// (0x00061f06) cell_graphic2_pane_g5

0x0004,

0xfdc6,	// (0x0006404c) cell_graphic2_pane_g_ParamLimits

0xfdc6,	// (0x0006404c) cell_graphic2_pane_g

0xdc9b,	// (0x00061f21) cell_graphic2_pane_t1_ParamLimits

0xdc9b,	// (0x00061f21) cell_graphic2_pane_t1

0x939d,	// (0x0005d623) grid_highlight_pane_cp11_ParamLimits

0x939d,	// (0x0005d623) grid_highlight_pane_cp11

0xef34,	// (0x000631ba) bg_button_pane_cp05

0xdcd2,	// (0x00061f58) cell_graphic2_control_pane_g1

0xbacb,	// (0x0005fd51) bg_touch_area_indi_pane_g1

0xdcfa,	// (0x00061f80) aid_cmod_rocker_key_size

0xdd04,	// (0x00061f8a) aid_cmode_itu_key_size

0xdd0e,	// (0x00061f94) main_cmode_video_pane

0xdd18,	// (0x00061f9e) main_comp_mode_itu_pane

0xdd24,	// (0x00061faa) main_comp_mode_rocker_pane

0xdd30,	// (0x00061fb6) cell_cmode_rocker_pane_ParamLimits

0xdd30,	// (0x00061fb6) cell_cmode_rocker_pane

0xdd42,	// (0x00061fc8) cell_cmode_itu_pane_ParamLimits

0xdd42,	// (0x00061fc8) cell_cmode_itu_pane

0xf1bc,	// (0x00063442) bg_button_pane_cp06_ParamLimits

0xf1bc,	// (0x00063442) bg_button_pane_cp06

0xbd3b,	// (0x0005ffc1) cell_cmode_rocker_pane_g1_ParamLimits

0xbd3b,	// (0x0005ffc1) cell_cmode_rocker_pane_g1

0xd28c,	// (0x00061512) cell_cmode_rocker_pane_g2_ParamLimits

0xd28c,	// (0x00061512) cell_cmode_rocker_pane_g2

0x0001,

0xfdd6,	// (0x0006405c) cell_cmode_rocker_pane_g_ParamLimits

0xfdd6,	// (0x0006405c) cell_cmode_rocker_pane_g

0xed9a,	// (0x00063020) bg_button_pane_cp07

0xdd57,	// (0x00061fdd) cell_cmode_itu_pane_g1

0xdd60,	// (0x00061fe6) cell_cmode_itu_pane_t1

0xdd6e,	// (0x00061ff4) cell_cmode_itu_pane_t2

0x0001,

0xfddb,	// (0x00064061) cell_cmode_itu_pane_t

0xd4b1,	// (0x00061737) aid_touch_ctrl_left

0xd4b9,	// (0x0006173f) aid_touch_ctrl_right

0xed9a,	// (0x00063020) compa_mode_pane

0xdd7c,	// (0x00062002) aid_cmod_rocker_key_size_cp

0xdd86,	// (0x0006200c) aid_cmode_itu_key_size_cp

0xdd90,	// (0x00062016) compa_mode_pane_g1

0xdd98,	// (0x0006201e) compa_mode_pane_g2

0xdda0,	// (0x00062026) compa_mode_pane_g3

0x0002,

0xfde0,	// (0x00064066) compa_mode_pane_g

0xdda8,	// (0x0006202e) main_comp_mode_itu_pane_cp

0xddb0,	// (0x00062036) main_comp_mode_rocker_pane_cp

0xddb8,	// (0x0006203e) cell_cmode_itu_pane_cp_ParamLimits

0xddb8,	// (0x0006203e) cell_cmode_itu_pane_cp

0xddcd,	// (0x00062053) cell_cmode_rocker_pane_cp_ParamLimits

0xddcd,	// (0x00062053) cell_cmode_rocker_pane_cp

0xf1bc,	// (0x00063442) bg_button_pane_cp06_cp_ParamLimits

0xf1bc,	// (0x00063442) bg_button_pane_cp06_cp

0xbd3b,	// (0x0005ffc1) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbd3b,	// (0x0005ffc1) cell_cmode_rocker_pane_g1_cp

0xbacb,	// (0x0005fd51) cell_cmode_rocker_pane_g2_cp

0xed9a,	// (0x00063020) bg_button_pane_cp07_cp

0xdddf,	// (0x00062065) cell_cmode_itu_pane_g1_cp

0xdde8,	// (0x0006206e) cell_cmode_itu_pane_t1_cp

0xdde8,	// (0x0006206e) cell_cmode_itu_pane_t2_cp

0xa832,	// (0x0005eab8) settings_code_pane_cp2

0xedfc,	// (0x00063082) bg_popup_window_pane_cp3_ParamLimits

0xf04d,	// (0x000632d3) heading_pane_cp3_ParamLimits

0xf059,	// (0x000632df) listscroll_popup_graphic_pane_ParamLimits

0x7bc6,	// (0x0005be4c) fep_hwr_aid_pane_ParamLimits

0x813a,	// (0x0005c3c0) aid_touch_sctrl_top_ParamLimits

0x8155,	// (0x0005c3db) sctrl_sk_top_pane_g1_ParamLimits

0x7e1d,	// (0x0005c0a3) sctrl_sk_top_pane_g2_ParamLimits

0xfd16,	// (0x00063f9c) sctrl_sk_top_pane_g_ParamLimits

0x8162,	// (0x0005c3e8) sctrl_sk_top_pane_t1_ParamLimits

0x813a,	// (0x0005c3c0) aid_touch_sctrl_bottom_ParamLimits

0x8162,	// (0x0005c3e8) sctrl_sk_bottom_pane_t1_ParamLimits

0xd3fb,	// (0x00061681) aid_area_touch_clock

0x834b,	// (0x0005c5d1) aid_vkb2_area_top_pane_cell_ParamLimits

0x834b,	// (0x0005c5d1) aid_vkb2_area_top_pane_cell

0x8496,	// (0x0005c71c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8496,	// (0x0005c71c) aid_vkb2_area_bottom_pane_cell

0xd969,	// (0x00061bef) popup_char_count_window

0xddf6,	// (0x0006207c) popup_char_count_window_g1

0xddff,	// (0x00062085) popup_char_count_window_g2

0xde08,	// (0x0006208e) popup_char_count_window_g3

0x0002,

0xfde7,	// (0x0006406d) popup_char_count_window_g

0xde11,	// (0x00062097) popup_char_count_window_t1

0x8211,	// (0x0005c497) popup_fep_char_preview_window_ParamLimits

0x8211,	// (0x0005c497) popup_fep_char_preview_window

0x8369,	// (0x0005c5ef) vkb2_top_candi_pane_ParamLimits

0x8369,	// (0x0005c5ef) vkb2_top_candi_pane

0xde1f,	// (0x000620a5) cell_vkb2_top_candi_pane_ParamLimits

0xde1f,	// (0x000620a5) cell_vkb2_top_candi_pane

0x8779,	// (0x0005c9ff) bg_popup_fep_char_preview_window_ParamLimits

0x8779,	// (0x0005c9ff) bg_popup_fep_char_preview_window

0x8787,	// (0x0005ca0d) popup_fep_char_preview_window_t1_ParamLimits

0x8787,	// (0x0005ca0d) popup_fep_char_preview_window_t1

0xde6c,	// (0x000620f2) bg_popup_fep_char_preview_window_g1

0xde74,	// (0x000620fa) bg_popup_fep_char_preview_window_g2

0xde7c,	// (0x00062102) bg_popup_fep_char_preview_window_g3

0xde84,	// (0x0006210a) bg_popup_fep_char_preview_window_g4

0xde8c,	// (0x00062112) bg_popup_fep_char_preview_window_g5

0x87c1,	// (0x0005ca47) bg_popup_fep_char_preview_window_g6

0xde94,	// (0x0006211a) bg_popup_fep_char_preview_window_g7

0xde9c,	// (0x00062122) bg_popup_fep_char_preview_window_g8

0xdea4,	// (0x0006212a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdee,	// (0x00064074) bg_popup_fep_char_preview_window_g

0x7e1d,	// (0x0005c0a3) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7e1d,	// (0x0005c0a3) cell_vkb2_top_candi_pane_g1

0x7e2b,	// (0x0005c0b1) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7e2b,	// (0x0005c0b1) cell_vkb2_top_candi_pane_g2

0xcf2a,	// (0x000611b0) cell_vkb2_top_candi_pane_g3_ParamLimits

0xcf2a,	// (0x000611b0) cell_vkb2_top_candi_pane_g3

0x87c9,	// (0x0005ca4f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x87c9,	// (0x0005ca4f) cell_vkb2_top_candi_pane_g4

0xc23b,	// (0x000604c1) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc23b,	// (0x000604c1) cell_vkb2_top_candi_pane_g5

0x87ea,	// (0x0005ca70) cell_vkb2_top_candi_pane_g6_ParamLimits

0x87ea,	// (0x0005ca70) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe01,	// (0x00064087) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe01,	// (0x00064087) cell_vkb2_top_candi_pane_g

0x87f8,	// (0x0005ca7e) cell_vkb2_top_candi_pane_t1

0x7924,	// (0x0005bbaa) aid_size_touch_slider_mark_ParamLimits

0x7924,	// (0x0005bbaa) aid_size_touch_slider_mark

0xdaac,	// (0x00061d32) grid_graphic2_catg_pane_ParamLimits

0xdaac,	// (0x00061d32) grid_graphic2_catg_pane

0xdb4a,	// (0x00061dd0) popup_grid_graphic2_window_t1_ParamLimits

0xdb4a,	// (0x00061dd0) popup_grid_graphic2_window_t1

0xdb5c,	// (0x00061de2) popup_grid_graphic2_window_t2_ParamLimits

0xdb5c,	// (0x00061de2) popup_grid_graphic2_window_t2

0x0001,

0xfdbc,	// (0x00064042) popup_grid_graphic2_window_t_ParamLimits

0xfdbc,	// (0x00064042) popup_grid_graphic2_window_t

0xef34,	// (0x000631ba) bg_button_pane_cp05_ParamLimits

0xdcd2,	// (0x00061f58) cell_graphic2_control_pane_g1_ParamLimits

0xdeac,	// (0x00062132) cell_graphic2_catg_pane_ParamLimits

0xdeac,	// (0x00062132) cell_graphic2_catg_pane

0xed9a,	// (0x00063020) bg_button_pane_cp12

0xdebe,	// (0x00062144) cell_graphic2_catg_pane_g1

0xd3c6,	// (0x0006164c) cell_tb_ext_pane_t1_ParamLimits

0x85b3,	// (0x0005c839) vkb2_top_cell_right_narrow_pane_ParamLimits

0x85b3,	// (0x0005c839) vkb2_top_cell_right_narrow_pane

0x85cb,	// (0x0005c851) vkb2_top_cell_right_wide_pane_ParamLimits

0x85cb,	// (0x0005c851) vkb2_top_cell_right_wide_pane

0x7bb8,	// (0x0005be3e) bg_vkb2_func_pane_ParamLimits

0x7bb8,	// (0x0005be3e) bg_vkb2_func_pane

0x863c,	// (0x0005c8c2) vkb2_top_cell_left_pane_g1_ParamLimits

0x7bb8,	// (0x0005be3e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7bb8,	// (0x0005be3e) bg_vkb2_fuc_pane_cp03

0x869a,	// (0x0005c920) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9319,	// (0x0005d59f) bg_vkb2_func_pane_g1

0x9321,	// (0x0005d5a7) bg_vkb2_func_pane_g2

0x9331,	// (0x0005d5b7) bg_vkb2_func_pane_g3

0x9329,	// (0x0005d5af) bg_vkb2_func_pane_g4

0x9339,	// (0x0005d5bf) bg_vkb2_func_pane_g5

0x9341,	// (0x0005d5c7) bg_vkb2_func_pane_g6

0x9349,	// (0x0005d5cf) bg_vkb2_func_pane_g7

0x9351,	// (0x0005d5d7) bg_vkb2_func_pane_g8

0x9311,	// (0x0005d597) bg_vkb2_func_pane_g9

0x0008,

0xfe0e,	// (0x00064094) bg_vkb2_func_pane_g

0x7bb8,	// (0x0005be3e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7bb8,	// (0x0005be3e) bg_vkb2_fuc_pane_cp01

0x863c,	// (0x0005c8c2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x863c,	// (0x0005c8c2) vkb2_top_cell_right_wide_pane_g1

0x7bb8,	// (0x0005be3e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7bb8,	// (0x0005be3e) bg_vkb2_fuc_pane_cp02

0x869a,	// (0x0005c920) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x869a,	// (0x0005c920) vkb2_top_cell_right_narrow_pane_g1

0xcfe8,	// (0x0006126e) aid_touch_area_decrease_ParamLimits

0xcfe8,	// (0x0006126e) aid_touch_area_decrease

0xd00c,	// (0x00061292) aid_touch_area_increase_ParamLimits

0xd00c,	// (0x00061292) aid_touch_area_increase

0xd024,	// (0x000612aa) aid_touch_area_mute_ParamLimits

0xd024,	// (0x000612aa) aid_touch_area_mute

0xd040,	// (0x000612c6) aid_touch_area_slider_ParamLimits

0xd040,	// (0x000612c6) aid_touch_area_slider

0xd12a,	// (0x000613b0) popup_slider_window_g4_ParamLimits

0xd12a,	// (0x000613b0) popup_slider_window_g4

0xd142,	// (0x000613c8) popup_slider_window_g5_ParamLimits

0xd142,	// (0x000613c8) popup_slider_window_g5

0xd164,	// (0x000613ea) popup_slider_window_g6_ParamLimits

0xd164,	// (0x000613ea) popup_slider_window_g6

0xd1a2,	// (0x00061428) popup_slider_window_t2_ParamLimits

0xd1a2,	// (0x00061428) popup_slider_window_t2

0x0001,

0xfd0a,	// (0x00063f90) popup_slider_window_t_ParamLimits

0xfd0a,	// (0x00063f90) popup_slider_window_t

0xd1ba,	// (0x00061440) slider_pane_ParamLimits

0xd1ba,	// (0x00061440) slider_pane

0xdec7,	// (0x0006214d) slider_pane_g1_ParamLimits

0xdec7,	// (0x0006214d) slider_pane_g1

0xdedb,	// (0x00062161) slider_pane_g2_ParamLimits

0xdedb,	// (0x00062161) slider_pane_g2

0xdef1,	// (0x00062177) slider_pane_g3_ParamLimits

0xdef1,	// (0x00062177) slider_pane_g3

0x0003,

0xfe21,	// (0x000640a7) slider_pane_g_ParamLimits

0xfe21,	// (0x000640a7) slider_pane_g

0x7505,	// (0x0005b78b) popup_tb_float_extension_window_ParamLimits

0x7505,	// (0x0005b78b) popup_tb_float_extension_window

0xdf1d,	// (0x000621a3) aid_size_cell_tb_float_ext

0xed9a,	// (0x00063020) bg_popup_sub_window_cp28

0xdf29,	// (0x000621af) grid_tb_float_ext_pane

0xdf33,	// (0x000621b9) cell_tb_float_ext_pane_ParamLimits

0xdf33,	// (0x000621b9) cell_tb_float_ext_pane

0xdf4d,	// (0x000621d3) cell_tb_float_ext_pane_g1

0xdf56,	// (0x000621dc) grid_highlight_pane_cp12

0x7d07,	// (0x0005bf8d) cell_last_hwr_side_pane_ParamLimits

0x7d07,	// (0x0005bf8d) cell_last_hwr_side_pane

0xbacb,	// (0x0005fd51) cell_last_hwr_side_pane_g1

0xdf5f,	// (0x000621e5) cell_last_hwr_side_pane_g2

0x0001,

0xfe2a,	// (0x000640b0) cell_last_hwr_side_pane_g

0x8562,	// (0x0005c7e8) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8562,	// (0x0005c7e8) vkb2_area_bottom_space_btn_pane

0x7e1d,	// (0x0005c0a3) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xda1e,	// (0x00061ca4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x87f8,	// (0x0005ca7e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8817,	// (0x0005ca9d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8817,	// (0x0005ca9d) vkb2_area_bottom_space_btn_pane_g1

0x8851,	// (0x0005cad7) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8851,	// (0x0005cad7) vkb2_area_bottom_space_btn_pane_g2

0x8887,	// (0x0005cb0d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8887,	// (0x0005cb0d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2f,	// (0x000640b5) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2f,	// (0x000640b5) vkb2_area_bottom_space_btn_pane_g

0x7c7b,	// (0x0005bf01) cel_fep_hwr_func_pane_ParamLimits

0x7c7b,	// (0x0005bf01) cel_fep_hwr_func_pane

0x7cb7,	// (0x0005bf3d) cell_hwr_side_button_pane_ParamLimits

0x7cb7,	// (0x0005bf3d) cell_hwr_side_button_pane

0xd3fb,	// (0x00061681) aid_area_touch_clock_ParamLimits

0xef34,	// (0x000631ba) bg_uniindi_top_pane_ParamLimits

0xd40d,	// (0x00061693) uniindi_top_pane_g1_ParamLimits

0xd423,	// (0x000616a9) uniindi_top_pane_g2_ParamLimits

0xd42f,	// (0x000616b5) uniindi_top_pane_g3_ParamLimits

0xd440,	// (0x000616c6) uniindi_top_pane_g4_ParamLimits

0xfd42,	// (0x00063fc8) uniindi_top_pane_g_ParamLimits

0xd44d,	// (0x000616d3) uniindi_top_pane_t1_ParamLimits

0xef34,	// (0x000631ba) bg_vkb2_func_pane_cp01_ParamLimits

0xef34,	// (0x000631ba) bg_vkb2_func_pane_cp01

0xdf68,	// (0x000621ee) cel_fep_hwr_func_pane_g1_ParamLimits

0xdf68,	// (0x000621ee) cel_fep_hwr_func_pane_g1

0xef34,	// (0x000631ba) bg_vkb2_func_pane_cp02_ParamLimits

0xef34,	// (0x000631ba) bg_vkb2_func_pane_cp02

0xdf68,	// (0x000621ee) cell_hwr_side_button_pane_g1_ParamLimits

0xdf68,	// (0x000621ee) cell_hwr_side_button_pane_g1

0x9195,	// (0x0005d41b) status_pane_g4_ParamLimits

0x9195,	// (0x0005d41b) status_pane_g4

0x91af,	// (0x0005d435) status_pane_t1

0xb806,	// (0x0005fa8c) form2_midp_gauge_slider_cont_pane

0xb80e,	// (0x0005fa94) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb820,	// (0x0005faa6) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb832,	// (0x0005fab8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x00063d8f) form2_midp_gauge_slider_pane_t_ParamLimits

0xb844,	// (0x0005faca) form2_midp_slider_pane_ParamLimits

0x81d1,	// (0x0005c457) aid_size_cell_func_vkb2_ParamLimits

0x81d1,	// (0x0005c457) aid_size_cell_func_vkb2

0xdf09,	// (0x0006218f) slider_pane_g4_ParamLimits

0xdf09,	// (0x0006218f) slider_pane_g4

0x88d1,	// (0x0005cb57) form2_midp_gauge_slider_pane_t2_cp01

0x88df,	// (0x0005cb65) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x88df,	// (0x0005cb65) form2_midp_gauge_slider_pane_t3_cp01

0x88fc,	// (0x0005cb82) form2_midp_slider_pane_cp01

0xed9a,	// (0x00063020) navi_smil_pane

0xdfa1,	// (0x00062227) navi_smil_pane_g1

0xdfa9,	// (0x0006222f) navi_smil_pane_t1

0xdf76,	// (0x000621fc) form2_midp_slider_pane_g1

0xdf7f,	// (0x00062205) form2_midp_slider_pane_g2

0xdf87,	// (0x0006220d) form2_midp_slider_pane_g3

0xdf76,	// (0x000621fc) form2_midp_slider_pane_g4

0xdf8f,	// (0x00062215) form2_midp_slider_pane_g5

0x0004,

0xfe38,	// (0x000640be) form2_midp_slider_pane_g

0x88c1,	// (0x0005cb47) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x88c1,	// (0x0005cb47) vkb2_area_bottom_space_btn_pane_g4

0x8fc4,	// (0x0005d24a) lc0_navi_pane_ParamLimits

0x8fc4,	// (0x0005d24a) lc0_navi_pane

0x903a,	// (0x0005d2c0) lc0_stat_indi_pane_ParamLimits

0x903a,	// (0x0005d2c0) lc0_stat_indi_pane

0x9051,	// (0x0005d2d7) ls0_title_pane_ParamLimits

0x9051,	// (0x0005d2d7) ls0_title_pane

0xf1bc,	// (0x00063442) bg_popup_sub_pane_cp14_ParamLimits

0xd3e2,	// (0x00061668) list_uniindi_pane_ParamLimits

0xd3ee,	// (0x00061674) uniindi_top_pane_ParamLimits

0xd489,	// (0x0006170f) list_single_uniindi_pane_g1_ParamLimits

0xd49c,	// (0x00061722) list_single_uniindi_pane_t1_ParamLimits

0x8905,	// (0x0005cb8b) lc0_stat_clock_pane_ParamLimits

0x8905,	// (0x0005cb8b) lc0_stat_clock_pane

0xdfb7,	// (0x0006223d) lc0_stat_indi_pane_g1_ParamLimits

0xdfb7,	// (0x0006223d) lc0_stat_indi_pane_g1

0xdfc4,	// (0x0006224a) lc0_stat_indi_pane_g2_ParamLimits

0xdfc4,	// (0x0006224a) lc0_stat_indi_pane_g2

0x0001,

0xfe43,	// (0x000640c9) lc0_stat_indi_pane_g_ParamLimits

0xfe43,	// (0x000640c9) lc0_stat_indi_pane_g

0x8912,	// (0x0005cb98) lc0_uni_indicator_pane_ParamLimits

0x8912,	// (0x0005cb98) lc0_uni_indicator_pane

0xdfd1,	// (0x00062257) ls0_title_pane_g1_ParamLimits

0xdfd1,	// (0x00062257) ls0_title_pane_g1

0xdfe5,	// (0x0006226b) ls0_title_pane_t1_ParamLimits

0xdfe5,	// (0x0006226b) ls0_title_pane_t1

0x891f,	// (0x0005cba5) lc0_uni_indicator_pane_g1_ParamLimits

0x891f,	// (0x0005cba5) lc0_uni_indicator_pane_g1

0xe01b,	// (0x000622a1) lc0_stat_clock_pane_t1

0x55ef,	// (0x00059875) main_ai5_pane

0xe029,	// (0x000622af) ai5_sk_pane_ParamLimits

0xe029,	// (0x000622af) ai5_sk_pane

0xe036,	// (0x000622bc) cell_ai5_widget_pane_ParamLimits

0xe036,	// (0x000622bc) cell_ai5_widget_pane

0xe0f1,	// (0x00062377) aid_size_cell_widget_grid

0xe0ff,	// (0x00062385) bg_ai5_widget_pane_ParamLimits

0xe0ff,	// (0x00062385) bg_ai5_widget_pane

0xe177,	// (0x000623fd) cell_ai5_widget_pane_g2

0xe18b,	// (0x00062411) cell_ai5_widget_pane_g3

0xe1a5,	// (0x0006242b) cell_ai5_widget_pane_g4

0xe1b5,	// (0x0006243b) cell_ai5_widget_pane_g5

0xe1c5,	// (0x0006244b) cell_ai5_widget_pane_g6

0xe1d1,	// (0x00062457) cell_ai5_widget_pane_g7

0xe219,	// (0x0006249f) cell_ai5_widget_pane_t1_ParamLimits

0xe219,	// (0x0006249f) cell_ai5_widget_pane_t1

0xe236,	// (0x000624bc) cell_ai5_widget_pane_t2_ParamLimits

0xe236,	// (0x000624bc) cell_ai5_widget_pane_t2

0xe24e,	// (0x000624d4) cell_ai5_widget_pane_t3_ParamLimits

0xe24e,	// (0x000624d4) cell_ai5_widget_pane_t3

0xe266,	// (0x000624ec) cell_ai5_widget_pane_t4_ParamLimits

0xe266,	// (0x000624ec) cell_ai5_widget_pane_t4

0xe28c,	// (0x00062512) cell_ai5_widget_pane_t5_ParamLimits

0xe28c,	// (0x00062512) cell_ai5_widget_pane_t5

0xe2ac,	// (0x00062532) cell_ai5_widget_pane_t6_ParamLimits

0xe2ac,	// (0x00062532) cell_ai5_widget_pane_t6

0xe2be,	// (0x00062544) cell_ai5_widget_pane_t7_ParamLimits

0xe2be,	// (0x00062544) cell_ai5_widget_pane_t7

0xe2d7,	// (0x0006255d) cell_ai5_widget_pane_t8_ParamLimits

0xe2d7,	// (0x0006255d) cell_ai5_widget_pane_t8

0x0009,

0xfe5d,	// (0x000640e3) cell_ai5_widget_pane_t_ParamLimits

0xfe5d,	// (0x000640e3) cell_ai5_widget_pane_t

0xe336,	// (0x000625bc) grid_ai5_widget_pane

0xf1bc,	// (0x00063442) highlight_cell_ai5_widget_pane_ParamLimits

0xf1bc,	// (0x00063442) highlight_cell_ai5_widget_pane

0xe344,	// (0x000625ca) ai5_sk_left_pane

0xe34e,	// (0x000625d4) ai5_sk_middle_pane

0xe358,	// (0x000625de) ai5_sk_right_pane

0xe362,	// (0x000625e8) bg_ai5_widget_pane_g1_ParamLimits

0xe362,	// (0x000625e8) bg_ai5_widget_pane_g1

0xe36e,	// (0x000625f4) bg_ai5_widget_pane_g2_ParamLimits

0xe36e,	// (0x000625f4) bg_ai5_widget_pane_g2

0xe37a,	// (0x00062600) bg_ai5_widget_pane_g3_ParamLimits

0xe37a,	// (0x00062600) bg_ai5_widget_pane_g3

0xe386,	// (0x0006260c) bg_ai5_widget_pane_g4_ParamLimits

0xe386,	// (0x0006260c) bg_ai5_widget_pane_g4

0xe392,	// (0x00062618) bg_ai5_widget_pane_g5_ParamLimits

0xe392,	// (0x00062618) bg_ai5_widget_pane_g5

0xe39e,	// (0x00062624) bg_ai5_widget_pane_g6_ParamLimits

0xe39e,	// (0x00062624) bg_ai5_widget_pane_g6

0xe3aa,	// (0x00062630) bg_ai5_widget_pane_g7_ParamLimits

0xe3aa,	// (0x00062630) bg_ai5_widget_pane_g7

0xe3b6,	// (0x0006263c) bg_ai5_widget_pane_g8_ParamLimits

0xe3b6,	// (0x0006263c) bg_ai5_widget_pane_g8

0xe3c2,	// (0x00062648) bg_ai5_widget_pane_g9_ParamLimits

0xe3c2,	// (0x00062648) bg_ai5_widget_pane_g9

0x0008,

0xfe72,	// (0x000640f8) bg_ai5_widget_pane_g_ParamLimits

0xfe72,	// (0x000640f8) bg_ai5_widget_pane_g

0xe3f4,	// (0x0006267a) cell_shortcut_ai5_widget_pane_ParamLimits

0xe3f4,	// (0x0006267a) cell_shortcut_ai5_widget_pane

0x38c5,	// (0x00057b4b) bg_cell_shortcut_ai5_widget_pane

0xe405,	// (0x0006268b) cell_grid_ai5_widget_pane_g1

0x38c5,	// (0x00057b4b) highlight_cell_shortcut_ai5_widget_pane

0x9319,	// (0x0005d59f) ai5_sk_left_pane_g1

0xe40e,	// (0x00062694) ai5_sk_left_pane_g2

0xe416,	// (0x0006269c) ai5_sk_left_pane_g3

0xe41e,	// (0x000626a4) ai5_sk_left_pane_g4

0x0003,

0xfe85,	// (0x0006410b) ai5_sk_left_pane_g

0xe426,	// (0x000626ac) ai5_sk_left_pane_t1

0x9321,	// (0x0005d5a7) ai5_sk_right_pane_g1

0xe434,	// (0x000626ba) ai5_sk_right_pane_g2

0xe43c,	// (0x000626c2) ai5_sk_right_pane_g3

0xe444,	// (0x000626ca) ai5_sk_right_pane_g4

0x0003,

0xfe8e,	// (0x00064114) ai5_sk_right_pane_g

0xe44c,	// (0x000626d2) ai5_sk_right_pane_t1

0x9321,	// (0x0005d5a7) ai5_sk_middle_pane_g1

0x9319,	// (0x0005d59f) ai5_sk_middle_pane_g2

0x9339,	// (0x0005d5bf) ai5_sk_middle_pane_g3

0xe43c,	// (0x000626c2) ai5_sk_middle_pane_g4

0xe416,	// (0x0006269c) ai5_sk_middle_pane_g5

0xe45a,	// (0x000626e0) ai5_sk_middle_pane_g6

0xe462,	// (0x000626e8) ai5_sk_middle_pane_g7

0x0006,

0xfe97,	// (0x0006411d) ai5_sk_middle_pane_g

0x8e4a,	// (0x0005d0d0) aid_touch_area_size_lc0_ParamLimits

0x8e4a,	// (0x0005d0d0) aid_touch_area_size_lc0

0x7e4c,	// (0x0005c0d2) cell_hwr_candidate_pane_t1_ParamLimits

0x8e66,	// (0x0005d0ec) aid_touch_navi_pane

0x913f,	// (0x0005d3c5) status_dt_navi_pane_ParamLimits

0x913f,	// (0x0005d3c5) status_dt_navi_pane

0x914c,	// (0x0005d3d2) status_dt_sta_pane_ParamLimits

0x914c,	// (0x0005d3d2) status_dt_sta_pane

0xe46a,	// (0x000626f0) dt_sta_controll_pane

0xe477,	// (0x000626fd) dt_sta_indi_pane

0xe488,	// (0x0006270e) dt_sta_title_pane

0xef34,	// (0x000631ba) bg_dt_sta_indi_pane_ParamLimits

0xef34,	// (0x000631ba) bg_dt_sta_indi_pane

0xe49b,	// (0x00062721) dt_sta_battery_pane

0xe4a3,	// (0x00062729) dt_sta_indi_pane_g1

0xe4ac,	// (0x00062732) dt_sta_indi_pane_g2

0xe4b5,	// (0x0006273b) dt_sta_indi_pane_g3

0x0002,

0xfea6,	// (0x0006412c) dt_sta_indi_pane_g

0xe4be,	// (0x00062744) dt_sta_signal_pane

0xf1bc,	// (0x00063442) bg_dt_sta_title_pane_ParamLimits

0xf1bc,	// (0x00063442) bg_dt_sta_title_pane

0xa16b,	// (0x0005e3f1) dt_sta_title_pane_g1

0xe4c7,	// (0x0006274d) dt_sta_title_pane_t1_ParamLimits

0xe4c7,	// (0x0006274d) dt_sta_title_pane_t1

0xed9a,	// (0x00063020) bg_dt_sta_control_pane

0xe4dc,	// (0x00062762) dt_sta_controll_pane_g1

0xe4e5,	// (0x0006276b) bg_dt_sta_title_pane_g1

0xe4ee,	// (0x00062774) bg_dt_sta_title_pane_g2

0xe4f7,	// (0x0006277d) bg_dt_sta_title_pane_g3

0x0002,

0xfead,	// (0x00064133) bg_dt_sta_title_pane_g

0xbacb,	// (0x0005fd51) bg_dt_sta_indi_pane_g1

0xe500,	// (0x00062786) dt_sta_signal_pane_g1

0xe508,	// (0x0006278e) dt_sta_signal_pane_g2

0x0001,

0xfeb4,	// (0x0006413a) dt_sta_signal_pane_g

0xe510,	// (0x00062796) dt_sta_battery_pane_g1

0xe519,	// (0x0006279f) dt_sta_battery_pane_t1

0xbacb,	// (0x0005fd51) bg_dt_sta_control_pane_g1

0x1402,	// (0x00055688) fep_china_uni_eep_pane

0x140a,	// (0x00055690) fep_china_uni_entry_pane_ParamLimits

0x141a,	// (0x000556a0) popup_fep_china_uni_window_g1_ParamLimits

0x142a,	// (0x000556b0) popup_fep_china_uni_window_g2_ParamLimits

0x142a,	// (0x000556b0) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0006399e) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0006399e) popup_fep_china_uni_window_g

0xe528,	// (0x000627ae) fep_china_uni_eep_pane_g1

0xe530,	// (0x000627b6) fep_china_uni_eep_pane_t1

0xdf98,	// (0x0006221e) aid_touch_area_size_smil_player

0x8fbc,	// (0x0005d242) lc0_clock_pane

0x91a3,	// (0x0005d429) status_pane_g5_ParamLimits

0x91a3,	// (0x0005d429) status_pane_g5

0x71c6,	// (0x0005b44c) popup_keymap_window

0x9161,	// (0x0005d3e7) status_icon_pane

0xe18b,	// (0x00062411) cell_ai5_widget_pane_g3_ParamLimits

0xe1a5,	// (0x0006242b) cell_ai5_widget_pane_g4_ParamLimits

0xe1b5,	// (0x0006243b) cell_ai5_widget_pane_g5_ParamLimits

0xe1dd,	// (0x00062463) cell_ai5_widget_pane_g8_ParamLimits

0xe1dd,	// (0x00062463) cell_ai5_widget_pane_g8

0xe1f1,	// (0x00062477) cell_ai5_widget_pane_g9_ParamLimits

0xe1f1,	// (0x00062477) cell_ai5_widget_pane_g9

0xe205,	// (0x0006248b) cell_ai5_widget_pane_g10_ParamLimits

0xe205,	// (0x0006248b) cell_ai5_widget_pane_g10

0xe53f,	// (0x000627c5) status_icon_pane_g1

0xed9a,	// (0x00063020) bg_popup_sub_pane_cp13

0xe547,	// (0x000627cd) popup_keymap_window_t1

0x8d9b,	// (0x0005d021) control_pane_g6_ParamLimits

0x8d9b,	// (0x0005d021) control_pane_g6

0x8da8,	// (0x0005d02e) control_pane_g7_ParamLimits

0x8da8,	// (0x0005d02e) control_pane_g7

0x8db5,	// (0x0005d03b) control_pane_g8_ParamLimits

0x8db5,	// (0x0005d03b) control_pane_g8

0xe46a,	// (0x000626f0) dt_sta_controll_pane_ParamLimits

0xe477,	// (0x000626fd) dt_sta_indi_pane_ParamLimits

0xe488,	// (0x0006270e) dt_sta_title_pane_ParamLimits

0xf107,	// (0x0006338d) aid_size_touch_scroll_bar_cale

0x56c8,	// (0x0005994e) popup_discreet_window_ParamLimits

0x56c8,	// (0x0005994e) popup_discreet_window

0x5742,	// (0x000599c8) popup_sk_window

0x99af,	// (0x0005dc35) bg_popup_sub_pane_cp28_ParamLimits

0x99af,	// (0x0005dc35) bg_popup_sub_pane_cp28

0xe555,	// (0x000627db) popup_discreet_window_g1_ParamLimits

0xe555,	// (0x000627db) popup_discreet_window_g1

0xe575,	// (0x000627fb) popup_discreet_window_t1_ParamLimits

0xe575,	// (0x000627fb) popup_discreet_window_t1

0xe593,	// (0x00062819) popup_discreet_window_t2_ParamLimits

0xe593,	// (0x00062819) popup_discreet_window_t2

0x0002,

0xfeb9,	// (0x0006413f) popup_discreet_window_t_ParamLimits

0xfeb9,	// (0x0006413f) popup_discreet_window_t

0x8933,	// (0x0005cbb9) popup_sk_window_g1

0x893d,	// (0x0005cbc3) popup_sk_window_g2

0x0001,

0xfec0,	// (0x00064146) popup_sk_window_g

0x8945,	// (0x0005cbcb) popup_sk_window_t1

0x8953,	// (0x0005cbd9) popup_sk_window_t1_copy1

0xe177,	// (0x000623fd) cell_ai5_widget_pane_g2_ParamLimits

0xe2e9,	// (0x0006256f) cell_ai5_widget_pane_t9_ParamLimits

0xe2e9,	// (0x0006256f) cell_ai5_widget_pane_t9

0xed9a,	// (0x00063020) main_fep_fshwr2_pane

0x8961,	// (0x0005cbe7) aid_fshwr2_btn_pane

0x896d,	// (0x0005cbf3) aid_fshwr2_syb_pane

0x897e,	// (0x0005cc04) aid_fshwr2_txt_pane

0x898a,	// (0x0005cc10) fshwr2_func_candi_pane

0x89a2,	// (0x0005cc28) fshwr2_hwr_syb_pane

0x89b9,	// (0x0005cc3f) fshwr2_icf_pane

0x55ef,	// (0x00059875) fshwr2_icf_bg_pane

0x89e2,	// (0x0005cc68) fshwr2_icf_pane_t1_ParamLimits

0x89e2,	// (0x0005cc68) fshwr2_icf_pane_t1

0x137f,	// (0x00055605) fshwr2_func_candi_pane_g1

0xe5e5,	// (0x0006286b) fshwr2_func_candi_row_pane_ParamLimits

0xe5e5,	// (0x0006286b) fshwr2_func_candi_row_pane

0x89fb,	// (0x0005cc81) cell_fshwr2_syb_pane_ParamLimits

0x89fb,	// (0x0005cc81) cell_fshwr2_syb_pane

0x7e1d,	// (0x0005c0a3) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7e1d,	// (0x0005c0a3) fshwr2_hwr_syb_pane_g1

0x55ef,	// (0x00059875) bg_popup_call_pane_cp01

0x8a11,	// (0x0005cc97) fshwr2_func_candi_cell_pane_ParamLimits

0x8a11,	// (0x0005cc97) fshwr2_func_candi_cell_pane

0xa00b,	// (0x0005e291) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa00b,	// (0x0005e291) fshwr2_func_candi_cell_bg_pane

0x8a5c,	// (0x0005cce2) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8a5c,	// (0x0005cce2) fshwr2_func_candi_cell_pane_g1

0x8a84,	// (0x0005cd0a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8a84,	// (0x0005cd0a) fshwr2_func_candi_cell_pane_t1

0x55ef,	// (0x00059875) bg_button_pane_cp08

0xe5f5,	// (0x0006287b) cell_fshwr2_syb_bg_pane

0x8a97,	// (0x0005cd1d) cell_fshwr2_syb_bg_pane_g1

0x8a9f,	// (0x0005cd25) cell_fshwr2_syb_bg_pane_t1

0xf1bc,	// (0x00063442) main_tmo_pane

0xa4a4,	// (0x0005e72a) uni_indicator_pane_g1_ParamLimits

0xa4b7,	// (0x0005e73d) uni_indicator_pane_g2_ParamLimits

0xa4c9,	// (0x0005e74f) uni_indicator_pane_g3_ParamLimits

0xa4d8,	// (0x0005e75e) uni_indicator_pane_g4_ParamLimits

0xa4d8,	// (0x0005e75e) uni_indicator_pane_g4

0xa4ec,	// (0x0005e772) uni_indicator_pane_g5_ParamLimits

0xa4ec,	// (0x0005e772) uni_indicator_pane_g5

0xa4ec,	// (0x0005e772) uni_indicator_pane_g6_ParamLimits

0xa4ec,	// (0x0005e772) uni_indicator_pane_g6

0xf91c,	// (0x00063ba2) uni_indicator_pane_g_ParamLimits

0xcfca,	// (0x00061250) popup_tmo_note_window_ParamLimits

0xcfca,	// (0x00061250) popup_tmo_note_window

0x81b3,	// (0x0005c439) fshwr2_bg_pane

0x8a75,	// (0x0005ccfb) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8a75,	// (0x0005ccfb) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec5,	// (0x0006414b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec5,	// (0x0006414b) fshwr2_func_candi_cell_pane_g

0x7e05,	// (0x0005c08b) bg_popup_window_pane_cp01

0x8aae,	// (0x0005cd34) bg_popup_window_pane_g1_cp01

0xe5fd,	// (0x00062883) bg_popup_window_pane_cp22_ParamLimits

0xe5fd,	// (0x00062883) bg_popup_window_pane_cp22

0xe60b,	// (0x00062891) listscroll_tmo_link_pane_ParamLimits

0xe60b,	// (0x00062891) listscroll_tmo_link_pane

0xe64b,	// (0x000628d1) popup_tmo_note_window_g1_ParamLimits

0xe64b,	// (0x000628d1) popup_tmo_note_window_g1

0xe658,	// (0x000628de) tmo_note_info_pane_ParamLimits

0xe658,	// (0x000628de) tmo_note_info_pane

0xe672,	// (0x000628f8) list_tmo_note_info_pane_g1_ParamLimits

0xe672,	// (0x000628f8) list_tmo_note_info_pane_g1

0xe689,	// (0x0006290f) list_tmo_note_info_pane_g2_ParamLimits

0xe689,	// (0x0006290f) list_tmo_note_info_pane_g2

0x0001,

0xfeca,	// (0x00064150) list_tmo_note_info_pane_g_ParamLimits

0xfeca,	// (0x00064150) list_tmo_note_info_pane_g

0xe6a5,	// (0x0006292b) list_tmo_note_info_text_pane_ParamLimits

0xe6a5,	// (0x0006292b) list_tmo_note_info_text_pane

0xe726,	// (0x000629ac) list_tmo_link_pane

0xe733,	// (0x000629b9) scroll_pane_cp20

0xe740,	// (0x000629c6) list_single_tmo_link_pane_ParamLimits

0xe740,	// (0x000629c6) list_single_tmo_link_pane

0xe750,	// (0x000629d6) list_single_tmo_link_pane_t1

0xe75e,	// (0x000629e4) list_tmo_note_info_text_pane_t1_ParamLimits

0xe75e,	// (0x000629e4) list_tmo_note_info_text_pane_t1

0x644a,	// (0x0005a6d0) aid_size_touch_scroll_bar_cp01_ParamLimits

0x644a,	// (0x0005a6d0) aid_size_touch_scroll_bar_cp01

0x6357,	// (0x0005a5dd) aid_size_touch_slider_marker

0x572a,	// (0x000599b0) popup_settings_window_ParamLimits

0x572a,	// (0x000599b0) popup_settings_window

0x38d5,	// (0x00057b5b) popup_candi_list_indi_window

0x8e66,	// (0x0005d0ec) aid_touch_navi_pane_ParamLimits

0x810e,	// (0x0005c394) rs_clock_indi_pane

0x8117,	// (0x0005c39d) sctrl_sk_bottom_pane_ParamLimits

0x8128,	// (0x0005c3ae) sctrl_sk_top_pane_ParamLimits

0x822b,	// (0x0005c4b1) popup_fep_tooltip_window

0xe0f1,	// (0x00062377) aid_size_cell_widget_grid_ParamLimits

0xe162,	// (0x000623e8) cell_ai5_widget_pane_g1_ParamLimits

0xe162,	// (0x000623e8) cell_ai5_widget_pane_g1

0xe1c5,	// (0x0006244b) cell_ai5_widget_pane_g6_ParamLimits

0xe1d1,	// (0x00062457) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe48,	// (0x000640ce) cell_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x000640ce) cell_ai5_widget_pane_g

0xe318,	// (0x0006259e) cell_ai5_widget_pane_t10_ParamLimits

0xe318,	// (0x0006259e) cell_ai5_widget_pane_t10

0xe336,	// (0x000625bc) grid_ai5_widget_pane_ParamLimits

0xe3ce,	// (0x00062654) cell_contacts_ai5_widget_pane_ParamLimits

0xe3ce,	// (0x00062654) cell_contacts_ai5_widget_pane

0xe5a8,	// (0x0006282e) popup_discreet_window_t3_ParamLimits

0xe5a8,	// (0x0006282e) popup_discreet_window_t3

0x89ce,	// (0x0005cc54) popup_fshwr2_char_preview_window_ParamLimits

0x89ce,	// (0x0005cc54) popup_fshwr2_char_preview_window

0xe6c3,	// (0x00062949) tmo_note_info_pane_t1

0xe6d8,	// (0x0006295e) tmo_note_info_pane_t2

0xe6ed,	// (0x00062973) tmo_note_info_pane_t3

0xe702,	// (0x00062988) tmo_note_info_pane_t4

0xe714,	// (0x0006299a) tmo_note_info_pane_t5

0x0004,

0xfecf,	// (0x00064155) tmo_note_info_pane_t

0xe726,	// (0x000629ac) list_tmo_link_pane_ParamLimits

0xe733,	// (0x000629b9) scroll_pane_cp20_ParamLimits

0x55ef,	// (0x00059875) bg_popup_fep_char_preview_window_cp01

0xe777,	// (0x000629fd) popup_fshwr2_char_preview_window_t1

0xe785,	// (0x00062a0b) popup_candi_list_indi_window_g1

0xe78e,	// (0x00062a14) bg_cell_contacts_ai5_widget_pane

0xe79a,	// (0x00062a20) cell_contacts_ai5_widget_pane_g1

0xc190,	// (0x00060416) cell_contacts_ai5_widget_pane_g2

0xe7af,	// (0x00062a35) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeda,	// (0x00064160) cell_contacts_ai5_widget_pane_g

0xe7bb,	// (0x00062a41) cell_contacts_ai5_widget_pane_t1

0xf1bc,	// (0x00063442) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe832,	// (0x00062ab8) settings_container_pane

0x38c5,	// (0x00057b4b) listscroll_set_pane_copy1

0xb1cd,	// (0x0005f453) scroll_pane_cp121_copy1

0x975c,	// (0x0005d9e2) set_content_pane_copy1

0xe83e,	// (0x00062ac4) aid_height_set_list_copy1_ParamLimits

0xe83e,	// (0x00062ac4) aid_height_set_list_copy1

0xa6e4,	// (0x0005e96a) aid_size_parent_copy1_ParamLimits

0xa6e4,	// (0x0005e96a) aid_size_parent_copy1

0xe84a,	// (0x00062ad0) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe84a,	// (0x00062ad0) button_value_adjust_pane_cp6_copy1

0x8dea,	// (0x0005d070) list_highlight_pane_cp2_copy1_ParamLimits

0x8dea,	// (0x0005d070) list_highlight_pane_cp2_copy1

0xe85e,	// (0x00062ae4) list_set_pane_copy1_ParamLimits

0xe85e,	// (0x00062ae4) list_set_pane_copy1

0xe7cd,	// (0x00062a53) main_pane_set_t1_copy1_ParamLimits

0xe7cd,	// (0x00062a53) main_pane_set_t1_copy1

0xe807,	// (0x00062a8d) main_pane_set_t2_copy1_ParamLimits

0xe807,	// (0x00062a8d) main_pane_set_t2_copy1

0xe90b,	// (0x00062b91) main_pane_set_t3_copy1

0xe919,	// (0x00062b9f) main_pane_set_t4_copy1

0xe826,	// (0x00062aac) set_content_pane_g1_copy1_ParamLimits

0xe826,	// (0x00062aac) set_content_pane_g1_copy1

0xe927,	// (0x00062bad) setting_code_pane_copy1

0xe92f,	// (0x00062bb5) setting_slider_graphic_pane_copy1

0xe92f,	// (0x00062bb5) setting_slider_pane_copy1

0xe92f,	// (0x00062bb5) setting_text_pane_copy1

0xe92f,	// (0x00062bb5) setting_volume_pane_copy1

0xe927,	// (0x00062bad) settings_code_pane_cp2_copy1

0xe937,	// (0x00062bbd) settings_code_pane_cp_copy1_ParamLimits

0xe937,	// (0x00062bbd) settings_code_pane_cp_copy1

0x8ab7,	// (0x0005cd3d) volume_set_pane_copy1

0xe94b,	// (0x00062bd1) volume_set_pane_g10_copy1

0xe953,	// (0x00062bd9) volume_set_pane_g1_copy1

0xe95b,	// (0x00062be1) volume_set_pane_g2_copy1

0xe963,	// (0x00062be9) volume_set_pane_g3_copy1

0xe96b,	// (0x00062bf1) volume_set_pane_g4_copy1

0xe973,	// (0x00062bf9) volume_set_pane_g5_copy1

0xe97b,	// (0x00062c01) volume_set_pane_g6_copy1

0xe983,	// (0x00062c09) volume_set_pane_g7_copy1

0xe98b,	// (0x00062c11) volume_set_pane_g8_copy1

0xe993,	// (0x00062c19) volume_set_pane_g9_copy1

0xedfc,	// (0x00063082) bg_set_opt_pane_cp_copy1_ParamLimits

0xedfc,	// (0x00063082) bg_set_opt_pane_cp_copy1

0x8abf,	// (0x0005cd45) setting_slider_pane_t1_copy1_ParamLimits

0x8abf,	// (0x0005cd45) setting_slider_pane_t1_copy1

0x8add,	// (0x0005cd63) setting_slider_pane_t2_copy1_ParamLimits

0x8add,	// (0x0005cd63) setting_slider_pane_t2_copy1

0x8af7,	// (0x0005cd7d) setting_slider_pane_t3_copy1_ParamLimits

0x8af7,	// (0x0005cd7d) setting_slider_pane_t3_copy1

0x8b0f,	// (0x0005cd95) slider_set_pane_copy1_ParamLimits

0x8b0f,	// (0x0005cd95) slider_set_pane_copy1

0xf214,	// (0x0006349a) set_opt_bg_pane_g1_copy2

0xf21c,	// (0x000634a2) set_opt_bg_pane_g2_copy2

0xe99b,	// (0x00062c21) set_opt_bg_pane_g3_copy2

0xf22c,	// (0x000634b2) set_opt_bg_pane_g4_copy2

0xf234,	// (0x000634ba) set_opt_bg_pane_g5_copy2

0xf23c,	// (0x000634c2) set_opt_bg_pane_g6_copy2

0xe9a5,	// (0x00062c2b) set_opt_bg_pane_g7_copy2

0xe9ad,	// (0x00062c33) set_opt_bg_pane_g8_copy2

0xe9b7,	// (0x00062c3d) set_opt_bg_pane_g9_copy2

0x8b25,	// (0x0005cdab) aid_size_touch_slider_mark_copy1_ParamLimits

0x8b25,	// (0x0005cdab) aid_size_touch_slider_mark_copy1

0xe9c1,	// (0x00062c47) slider_set_pane_g1_copy1

0x8b39,	// (0x0005cdbf) slider_set_pane_g2_copy1

0x7944,	// (0x0005bbca) slider_set_pane_g3_copy1_ParamLimits

0x7944,	// (0x0005bbca) slider_set_pane_g3_copy1

0x7958,	// (0x0005bbde) slider_set_pane_g4_copy1_ParamLimits

0x7958,	// (0x0005bbde) slider_set_pane_g4_copy1

0x7970,	// (0x0005bbf6) slider_set_pane_g5_copy1_ParamLimits

0x7970,	// (0x0005bbf6) slider_set_pane_g5_copy1

0x7944,	// (0x0005bbca) slider_set_pane_g6_copy1_ParamLimits

0x7944,	// (0x0005bbca) slider_set_pane_g6_copy1

0x8b41,	// (0x0005cdc7) slider_set_pane_g7_copy1_ParamLimits

0x8b41,	// (0x0005cdc7) slider_set_pane_g7_copy1

0xedae,	// (0x00063034) bg_set_opt_pane_cp2_copy1

0xe9ca,	// (0x00062c50) setting_slider_graphic_pane_g1_copy1

0xe9d3,	// (0x00062c59) setting_slider_graphic_pane_t1_copy1

0xe9e3,	// (0x00062c69) setting_slider_graphic_pane_t2_copy1

0xe9f3,	// (0x00062c79) slider_set_pane_cp_copy1

0xea03,	// (0x00062c89) input_focus_pane_cp1_copy1

0xea0c,	// (0x00062c92) list_set_text_pane_copy1

0xea14,	// (0x00062c9a) setting_text_pane_g1_copy1

0x4812,	// (0x00058a98) set_text_pane_t1_copy1

0xea03,	// (0x00062c89) input_focus_pane_cp2_copy1

0xea14,	// (0x00062c9a) setting_code_pane_g1_copy1

0xea1d,	// (0x00062ca3) setting_code_pane_t1_copy1

0xea2b,	// (0x00062cb1) list_set_graphic_pane_copy1

0xedae,	// (0x00063034) bg_set_opt_pane_cp4_copy1

0x364b,	// (0x000578d1) list_set_graphic_pane_g1_copy1_ParamLimits

0x364b,	// (0x000578d1) list_set_graphic_pane_g1_copy1

0xea3f,	// (0x00062cc5) list_set_graphic_pane_g2_copy1

0x3663,	// (0x000578e9) list_set_graphic_pane_t1_copy1_ParamLimits

0x3663,	// (0x000578e9) list_set_graphic_pane_t1_copy1

0xbacb,	// (0x0005fd51) rs_clock_indi_pane_g1

0xea47,	// (0x00062ccd) rs_clock_indi_pane_t1

0xea55,	// (0x00062cdb) rs_indi_pane

0xea5d,	// (0x00062ce3) rs_indi_pane_g1

0xea66,	// (0x00062cec) rs_indi_pane_g2

0xe785,	// (0x00062a0b) rs_indi_pane_g3

0x0002,

0xfee1,	// (0x00064167) rs_indi_pane_g

0x38c5,	// (0x00057b4b) bg_popup_preview_window_pane_cp03

0xea6f,	// (0x00062cf5) popup_fep_tooltip_window_t1

0xc75a,	// (0x000609e0) popup_note2_window_g2_ParamLimits

0xc75a,	// (0x000609e0) popup_note2_window_g2

0x0001,

0xfc81,	// (0x00063f07) popup_note2_window_g_ParamLimits

0xfc81,	// (0x00063f07) popup_note2_window_g

0xcc47,	// (0x00060ecd) bg_popup_sub_pane_cp11_ParamLimits

0xcc54,	// (0x00060eda) cell_ai3_links_pane_g1_ParamLimits

0xcc6b,	// (0x00060ef1) cell_ai3_links_pane_t1

0x4812,	// (0x00058a98) set_text_pane_t1_copy1_ParamLimits

0x3804,	// (0x00057a8a) cell_graphic_popup_pane_cp2_ParamLimits

0x3804,	// (0x00057a8a) cell_graphic_popup_pane_cp2

0xea7d,	// (0x00062d03) cell_graphic_popup_pane_g1_cp2

0xf08a,	// (0x00063310) cell_graphic_popup_pane_g2_cp2

0xea85,	// (0x00062d0b) cell_graphic_popup_pane_g3_cp2

0xea8d,	// (0x00062d13) cell_graphic_popup_pane_t2_cp2

0xf09b,	// (0x00063321) grid_highlight_pane_cp3_cp2

0xf46c,	// (0x000636f2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf1bc,	// (0x00063442) main_tmo_pane_ParamLimits

0xcfbe,	// (0x00061244) popup_tmo_big_image_note_window

0xe151,	// (0x000623d7) cell_ai5_widget_list_pane

0xe159,	// (0x000623df) cell_ai5_widget_lrg_icon_pane

0xe6c3,	// (0x00062949) tmo_note_info_pane_t1_ParamLimits

0xe6d8,	// (0x0006295e) tmo_note_info_pane_t2_ParamLimits

0xe6ed,	// (0x00062973) tmo_note_info_pane_t3_ParamLimits

0xe702,	// (0x00062988) tmo_note_info_pane_t4_ParamLimits

0xe714,	// (0x0006299a) tmo_note_info_pane_t5_ParamLimits

0xfecf,	// (0x00064155) tmo_note_info_pane_t_ParamLimits

0xe832,	// (0x00062ab8) settings_container_pane_ParamLimits

0xe9fb,	// (0x00062c81) indicator_popup_pane_cp5

0xe9fb,	// (0x00062c81) indicator_popup_pane_cp6

0xea2b,	// (0x00062cb1) list_set_graphic_pane_copy1_ParamLimits

0xed9a,	// (0x00063020) bg_popup_window_pane_cp23

0xea9b,	// (0x00062d21) popup_tmo_big_image_note_window_g1

0xeaa4,	// (0x00062d2a) popup_tmo_big_image_note_window_t1

0xeab4,	// (0x00062d3a) popup_tmo_big_image_note_window_t2

0xeac4,	// (0x00062d4a) popup_tmo_big_image_note_window_t3

0x0002,

0xfee8,	// (0x0006416e) popup_tmo_big_image_note_window_t

0xbacb,	// (0x0005fd51) cell_ai5_widget_lrg_icon_pane_g1

0xead4,	// (0x00062d5a) cell_ai5_widget_lrg_icon_pane_t1

0xeae2,	// (0x00062d68) cell_ai5_widget_list_row_pane_ParamLimits

0xeae2,	// (0x00062d68) cell_ai5_widget_list_row_pane

0xeaf9,	// (0x00062d7f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeaf9,	// (0x00062d7f) cell_ai5_widget_list_row_pane_g1

0xeb06,	// (0x00062d8c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeb06,	// (0x00062d8c) cell_ai5_widget_list_row_pane_t1

0xeb31,	// (0x00062db7) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xeb31,	// (0x00062db7) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeef,	// (0x00064175) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeef,	// (0x00064175) cell_ai5_widget_list_row_pane_t

0x55ef,	// (0x00059875) main_fep_vtchi_ss_pane

0xeb79,	// (0x00062dff) popup_fep_char_pre_window

0xeb81,	// (0x00062e07) popup_fep_ituss_window

0xeba2,	// (0x00062e28) popup_fep_vkbss_window

0xebcc,	// (0x00062e52) grid_vkbss_keypad_pane_ParamLimits

0xebcc,	// (0x00062e52) grid_vkbss_keypad_pane

0xebdc,	// (0x00062e62) ituss_keypad_pane

0x8b63,	// (0x0005cde9) aid_vkbss_key_offset_ParamLimits

0x8b63,	// (0x0005cde9) aid_vkbss_key_offset

0x8b6f,	// (0x0005cdf5) cell_vkbss_key_pane_ParamLimits

0x8b6f,	// (0x0005cdf5) cell_vkbss_key_pane

0x917d,	// (0x0005d403) bg_cell_vkbss_key_g1_ParamLimits

0x917d,	// (0x0005d403) bg_cell_vkbss_key_g1

0xebeb,	// (0x00062e71) cell_vkbss_key_3p_pane_ParamLimits

0xebeb,	// (0x00062e71) cell_vkbss_key_3p_pane

0xebff,	// (0x00062e85) cell_vkbss_key_g1_ParamLimits

0xebff,	// (0x00062e85) cell_vkbss_key_g1

0xec13,	// (0x00062e99) cell_vkbss_key_t1_ParamLimits

0xec13,	// (0x00062e99) cell_vkbss_key_t1

0x8b85,	// (0x0005ce0b) cell_ituss_key_pane_ParamLimits

0x8b85,	// (0x0005ce0b) cell_ituss_key_pane

0xec3e,	// (0x00062ec4) bg_cell_ituss_key_g1_ParamLimits

0xec3e,	// (0x00062ec4) bg_cell_ituss_key_g1

0xec4a,	// (0x00062ed0) cell_ituss_key_pane_g1_ParamLimits

0xec4a,	// (0x00062ed0) cell_ituss_key_pane_g1

0x8b96,	// (0x0005ce1c) cell_ituss_key_pane_g2_ParamLimits

0x8b96,	// (0x0005ce1c) cell_ituss_key_pane_g2

0x0002,

0xfef6,	// (0x0006417c) cell_ituss_key_pane_g_ParamLimits

0xfef6,	// (0x0006417c) cell_ituss_key_pane_g

0x8bc2,	// (0x0005ce48) cell_ituss_key_t1_ParamLimits

0x8bc2,	// (0x0005ce48) cell_ituss_key_t1

0x8bfc,	// (0x0005ce82) cell_ituss_key_t2_ParamLimits

0x8bfc,	// (0x0005ce82) cell_ituss_key_t2

0x8c2d,	// (0x0005ceb3) cell_ituss_key_t3_ParamLimits

0x8c2d,	// (0x0005ceb3) cell_ituss_key_t3

0x8bfc,	// (0x0005ce82) cell_ituss_key_t4_ParamLimits

0x8bfc,	// (0x0005ce82) cell_ituss_key_t4

0x0004,

0xfefd,	// (0x00064183) cell_ituss_key_t_ParamLimits

0xfefd,	// (0x00064183) cell_ituss_key_t

0xec70,	// (0x00062ef6) cell_vkbss_key_3p_pane_g1

0xec78,	// (0x00062efe) cell_vkbss_key_3p_pane_g2

0xec80,	// (0x00062f06) cell_vkbss_key_3p_pane_g3

0x0002,

0xff08,	// (0x0006418e) cell_vkbss_key_3p_pane_g

0x38c5,	// (0x00057b4b) bg_popup_fep_char_preview_window_cp02

0xec88,	// (0x00062f0e) popup_fep_char_pre_window_t1

0xe0de,	// (0x00062364) main_ai5_sk_pane

0xe78e,	// (0x00062a14) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe79a,	// (0x00062a20) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc190,	// (0x00060416) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe7af,	// (0x00062a35) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeda,	// (0x00064160) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe7bb,	// (0x00062a41) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf1bc,	// (0x00063442) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xec96,	// (0x00062f1c) main_ai5_sk_pane_g1

0x97f0,	// (0x0005da76) popup_query_code_window_g1

0xeb97,	// (0x00062e1d) popup_fep_vkb_icf_pane

0xebb6,	// (0x00062e3c) popup_fep_vtchi_icf_pane

0xec9f,	// (0x00062f25) bg_icf_pane

0xecab,	// (0x00062f31) list_vkb_icf_pane

0xecba,	// (0x00062f40) bg_icf_pane_cp01

0xeccd,	// (0x00062f53) vtchi_icf_list_pane

0xecdd,	// (0x00062f63) list_vkb_icf_pane_t1_ParamLimits

0xecdd,	// (0x00062f63) list_vkb_icf_pane_t1

0xecf4,	// (0x00062f7a) vtchi_icf_list_pane_t1_ParamLimits

0xecf4,	// (0x00062f7a) vtchi_icf_list_pane_t1

0xeb81,	// (0x00062e07) popup_fep_ituss_window_ParamLimits

0xebb6,	// (0x00062e3c) popup_fep_vtchi_icf_pane_ParamLimits

0xebdc,	// (0x00062e62) ituss_keypad_pane_ParamLimits

0x8b57,	// (0x0005cddd) ituss_sks_pane

0xec9f,	// (0x00062f25) bg_icf_pane_ParamLimits

0xeb59,	// (0x00062ddf) icf_edit_indi_pane_ParamLimits

0xeb59,	// (0x00062ddf) icf_edit_indi_pane

0xecab,	// (0x00062f31) list_vkb_icf_pane_ParamLimits

0xecba,	// (0x00062f40) bg_icf_pane_cp01_ParamLimits

0xeb6c,	// (0x00062df2) icf_edit_indi_pane_cp01_ParamLimits

0xeb6c,	// (0x00062df2) icf_edit_indi_pane_cp01

0xecd5,	// (0x00062f5b) vtchi_query_pane

0xdf68,	// (0x000621ee) icf_edit_indi_pane_g1_ParamLimits

0xdf68,	// (0x000621ee) icf_edit_indi_pane_g1

0xed69,	// (0x00062fef) icf_edit_indi_pane_g2_ParamLimits

0xed69,	// (0x00062fef) icf_edit_indi_pane_g2

0x0001,

0xff20,	// (0x000641a6) icf_edit_indi_pane_g_ParamLimits

0xff20,	// (0x000641a6) icf_edit_indi_pane_g

0xed7b,	// (0x00063001) icf_edit_indi_pane_t1

0xed12,	// (0x00062f98) bg_input_focus_pane_cp042

0xf0fe,	// (0x00063384) vtchi_button_pane

0xed1b,	// (0x00062fa1) vtchi_query_pane_t1

0xed29,	// (0x00062faf) vtchi_query_pane_t2

0xed37,	// (0x00062fbd) vtchi_query_pane_t3

0x0002,

0xff0f,	// (0x00064195) vtchi_query_pane_t

0x55ef,	// (0x00059875) bg_button_pane_cp13

0xed45,	// (0x00062fcb) vtchi_button_pane_g1

0x8c70,	// (0x0005cef6) ituss_sks_pane_g1

0x8c7b,	// (0x0005cf01) ituss_sks_pane_g2

0x0001,

0xff16,	// (0x0006419c) ituss_sks_pane_g

0xed4d,	// (0x00062fd3) ituss_sks_pane_t1

0xed5b,	// (0x00062fe1) ituss_sks_pane_t2

0x0001,

0xff1b,	// (0x000641a1) ituss_sks_pane_t

0xb548,	// (0x0005f7ce) indicator_nsta_pane_cp_g1

0xb550,	// (0x0005f7d6) indicator_nsta_pane_cp_g2

0xb558,	// (0x0005f7de) indicator_nsta_pane_cp_g3

0xb548,	// (0x0005f7ce) indicator_nsta_pane_cp_g4

0xb550,	// (0x0005f7d6) indicator_nsta_pane_cp_g5

0xb558,	// (0x0005f7de) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x00063d45) indicator_nsta_pane_cp_g

0xdcbf,	// (0x00061f45) cell_graphic2_pane_t2_ParamLimits

0xdcbf,	// (0x00061f45) cell_graphic2_pane_t2

0x0001,

0xfdd1,	// (0x00064057) cell_graphic2_pane_t_ParamLimits

0xfdd1,	// (0x00064057) cell_graphic2_pane_t

0xdcec,	// (0x00061f72) cell_graphic2_control_pane_t1

0x68f0,	// (0x0005ab76) signal_pane_g3_ParamLimits

0x68f0,	// (0x0005ab76) signal_pane_g3

0x6902,	// (0x0005ab88) signal_pane_g4_ParamLimits

0x6902,	// (0x0005ab88) signal_pane_g4

0xeb43,	// (0x00062dc9) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xeb43,	// (0x00062dc9) cell_ai5_widget_list_row_pane_t3

0xec5e,	// (0x00062ee4) cell_ituss_key_pane_t1_ParamLimits

0xec5e,	// (0x00062ee4) cell_ituss_key_pane_t1

0x942b,	// (0x0005d6b1) form_field_data_wide_pane_vc_t2_ParamLimits

0x942b,	// (0x0005d6b1) form_field_data_wide_pane_vc_t2

0x943f,	// (0x0005d6c5) form_field_data_wide_pane_vc_t3_ParamLimits

0x943f,	// (0x0005d6c5) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x00063a8a) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x00063a8a) form_field_data_wide_pane_vc_t

0xb20f,	// (0x0005f495) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb20f,	// (0x0005f495) form_field_slider_wide_pane_vc_t3

0xb2ed,	// (0x0005f573) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb2ed,	// (0x0005f573) form_field_popup_wide_pane_vc_t2

0xb304,	// (0x0005f58a) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb304,	// (0x0005f58a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x00063d34) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x00063d34) form_field_popup_wide_pane_vc_t

0x8961,	// (0x0005cbe7) aid_fshwr2_btn_pane_ParamLimits

0x896d,	// (0x0005cbf3) aid_fshwr2_syb_pane_ParamLimits

0x897e,	// (0x0005cc04) aid_fshwr2_txt_pane_ParamLimits

0x81b3,	// (0x0005c439) fshwr2_bg_pane_ParamLimits

0x898a,	// (0x0005cc10) fshwr2_func_candi_pane_ParamLimits

0x89a2,	// (0x0005cc28) fshwr2_hwr_syb_pane_ParamLimits

0x89b9,	// (0x0005cc3f) fshwr2_icf_pane_ParamLimits

0xaccb,	// (0x0005ef51) list_double_graphic_pane_vc_g4_ParamLimits

0xaccb,	// (0x0005ef51) list_double_graphic_pane_vc_g4

0x8bb6,	// (0x0005ce3c) cell_ituss_key_pane_g3_ParamLimits

0x8bb6,	// (0x0005ce3c) cell_ituss_key_pane_g3

0x8c5e,	// (0x0005cee4) cell_ituss_key_t5_ParamLimits

0x8c5e,	// (0x0005cee4) cell_ituss_key_t5

0xeba2,	// (0x00062e28) popup_fep_vkbss_window_ParamLimits

0xe0e8,	// (0x0006236e) aid_cell_ai5_quarter

0xed7b,	// (0x00063001) icf_edit_indi_pane_t1_ParamLimits

0x5aae,	// (0x00059d34) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x5aae,	// (0x00059d34) aid_tch_indicator_popup_pane_cp2

0x5ac1,	// (0x00059d47) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x5ac1,	// (0x00059d47) aid_tch_query_popup_data_pane_cp2

0x9798,	// (0x0005da1e) aid_tch_query_popup_pane_ParamLimits

0x9798,	// (0x0005da1e) aid_tch_query_popup_pane

0x9798,	// (0x0005da1e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9798,	// (0x0005da1e) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large

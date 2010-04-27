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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002f5c0 };

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
0xb53d,	// (0x0003aafd) Screen

0xb549,	// (0x0003ab09) application_window_ParamLimits

0xb549,	// (0x0003ab09) application_window

0x2cd3,	// (0x00032293) screen_g1

0xb581,	// (0x0003ab41) area_bottom_pane_ParamLimits

0xb581,	// (0x0003ab41) area_bottom_pane

0x0016,	// (0x0002f5d6) area_top_pane_ParamLimits

0x0016,	// (0x0002f5d6) area_top_pane

0x00b4,	// (0x0002f674) main_pane_ParamLimits

0x00b4,	// (0x0002f674) main_pane

0x2cdd,	// (0x0003229d) misc_graphics

0xd612,	// (0x0003cbd2) battery_pane_ParamLimits

0xd612,	// (0x0003cbd2) battery_pane

0x5b0d,	// (0x000350cd) bg_status_flat_pane_g8

0x5b15,	// (0x000350d5) bg_status_flat_pane_g9

0x4f09,	// (0x000344c9) context_pane_ParamLimits

0x4f09,	// (0x000344c9) context_pane

0xd77d,	// (0x0003cd3d) navi_pane_ParamLimits

0xd77d,	// (0x0003cd3d) navi_pane

0xd7fb,	// (0x0003cdbb) signal_pane_ParamLimits

0xd7fb,	// (0x0003cdbb) signal_pane

0x0008,

0xf874,	// (0x0003ee34) bg_status_flat_pane_g

0xd88b,	// (0x0003ce4b) status_pane_g1_ParamLimits

0xd88b,	// (0x0003ce4b) status_pane_g1

0xd8a1,	// (0x0003ce61) status_pane_g2_ParamLimits

0xd8a1,	// (0x0003ce61) status_pane_g2

0x5130,	// (0x000346f0) status_pane_g3_ParamLimits

0x5130,	// (0x000346f0) status_pane_g3

0x0004,

0xf7a0,	// (0x0003ed60) status_pane_g_ParamLimits

0xf7a0,	// (0x0003ed60) status_pane_g

0xd8ad,	// (0x0003ce6d) title_pane_ParamLimits

0xd8ad,	// (0x0003ce6d) title_pane

0xd910,	// (0x0003ced0) uni_indicator_pane_ParamLimits

0xd910,	// (0x0003ced0) uni_indicator_pane

0x4d6b,	// (0x0003432b) bg_list_pane_ParamLimits

0x4d6b,	// (0x0003432b) bg_list_pane

0xd585,	// (0x0003cb45) find_pane

0xbed8,	// (0x0003b498) listscroll_app_pane_ParamLimits

0xbed8,	// (0x0003b498) listscroll_app_pane

0x4d97,	// (0x00034357) listscroll_form_pane

0xbee8,	// (0x0003b4a8) listscroll_gen_pane_ParamLimits

0xbee8,	// (0x0003b4a8) listscroll_gen_pane

0x112c,	// (0x000306ec) listscroll_set_pane

0x669b,	// (0x00035c5b) main_idle_act_pane

0x4a73,	// (0x00034033) main_idle_trad_pane

0x4a73,	// (0x00034033) main_list_empty_pane

0x4db1,	// (0x00034371) main_midp_pane

0x4dbd,	// (0x0003437d) main_pane_g1_ParamLimits

0x4dbd,	// (0x0003437d) main_pane_g1

0xbefc,	// (0x0003b4bc) popup_ai_message_window_ParamLimits

0xbefc,	// (0x0003b4bc) popup_ai_message_window

0xbf8d,	// (0x0003b54d) popup_fep_china_uni_window_ParamLimits

0xbf8d,	// (0x0003b54d) popup_fep_china_uni_window

0x124c,	// (0x0003080c) popup_fep_japan_candidate_window_ParamLimits

0x124c,	// (0x0003080c) popup_fep_japan_candidate_window

0x126c,	// (0x0003082c) popup_fep_japan_predictive_window_ParamLimits

0x126c,	// (0x0003082c) popup_fep_japan_predictive_window

0xbfe9,	// (0x0003b5a9) popup_find_window

0xc006,	// (0x0003b5c6) popup_grid_graphic_window_ParamLimits

0xc006,	// (0x0003b5c6) popup_grid_graphic_window

0x12d3,	// (0x00030893) popup_large_graphic_colour_window

0xc0a4,	// (0x0003b664) popup_menu_window_ParamLimits

0xc0a4,	// (0x0003b664) popup_menu_window

0xc276,	// (0x0003b836) popup_note_image_window

0xc23c,	// (0x0003b7fc) popup_note_wait_window_ParamLimits

0xc23c,	// (0x0003b7fc) popup_note_wait_window

0xc28e,	// (0x0003b84e) popup_note_window_ParamLimits

0xc28e,	// (0x0003b84e) popup_note_window

0xc334,	// (0x0003b8f4) popup_query_code_window_ParamLimits

0xc334,	// (0x0003b8f4) popup_query_code_window

0x151b,	// (0x00030adb) popup_query_data_code_window_ParamLimits

0x151b,	// (0x00030adb) popup_query_data_code_window

0xc36e,	// (0x0003b92e) popup_query_data_window_ParamLimits

0xc36e,	// (0x0003b92e) popup_query_data_window

0xc3f0,	// (0x0003b9b0) popup_query_sat_info_window_ParamLimits

0xc3f0,	// (0x0003b9b0) popup_query_sat_info_window

0xc487,	// (0x0003ba47) popup_snote_single_graphic_window_ParamLimits

0xc487,	// (0x0003ba47) popup_snote_single_graphic_window

0xc487,	// (0x0003ba47) popup_snote_single_text_window_ParamLimits

0xc487,	// (0x0003ba47) popup_snote_single_text_window

0x15a2,	// (0x00030b62) popup_sub_window_general

0x16d2,	// (0x00030c92) popup_window_general_ParamLimits

0x16d2,	// (0x00030c92) popup_window_general

0x4dcb,	// (0x0003438b) power_save_pane

0xbd67,	// (0x0003b327) control_pane_g1_ParamLimits

0xbd67,	// (0x0003b327) control_pane_g1

0xbd90,	// (0x0003b350) control_pane_g2_ParamLimits

0xbd90,	// (0x0003b350) control_pane_g2

0x4d2e,	// (0x000342ee) control_pane_g3_ParamLimits

0x4d2e,	// (0x000342ee) control_pane_g3

0x0007,

0xf788,	// (0x0003ed48) control_pane_g_ParamLimits

0xf788,	// (0x0003ed48) control_pane_g

0xbdd1,	// (0x0003b391) control_pane_t1_ParamLimits

0xbdd1,	// (0x0003b391) control_pane_t1

0xbe2f,	// (0x0003b3ef) control_pane_t2_ParamLimits

0xbe2f,	// (0x0003b3ef) control_pane_t2

0x0002,

0xf799,	// (0x0003ed59) control_pane_t_ParamLimits

0xf799,	// (0x0003ed59) control_pane_t

0xd4b7,	// (0x0003ca77) navi_navi_volume_pane_cp1

0xd4bf,	// (0x0003ca7f) status_small_icon_pane

0x4c63,	// (0x00034223) status_small_pane_g1_ParamLimits

0x4c63,	// (0x00034223) status_small_pane_g1

0xd4c7,	// (0x0003ca87) status_small_pane_g2_ParamLimits

0xd4c7,	// (0x0003ca87) status_small_pane_g2

0xd4d3,	// (0x0003ca93) status_small_pane_g3_ParamLimits

0xd4d3,	// (0x0003ca93) status_small_pane_g3

0xd4df,	// (0x0003ca9f) status_small_pane_g4_ParamLimits

0xd4df,	// (0x0003ca9f) status_small_pane_g4

0xd4eb,	// (0x0003caab) status_small_pane_g5_ParamLimits

0xd4eb,	// (0x0003caab) status_small_pane_g5

0xd4f9,	// (0x0003cab9) status_small_pane_g6_ParamLimits

0xd4f9,	// (0x0003cab9) status_small_pane_g6

0x0007,

0xf777,	// (0x0003ed37) status_small_pane_g_ParamLimits

0xf777,	// (0x0003ed37) status_small_pane_g

0xd528,	// (0x0003cae8) status_small_pane_t1

0xd54a,	// (0x0003cb0a) status_small_wait_pane_ParamLimits

0xd54a,	// (0x0003cb0a) status_small_wait_pane

0xd35e,	// (0x0003c91e) aid_levels_signal_ParamLimits

0xd35e,	// (0x0003c91e) aid_levels_signal

0xd376,	// (0x0003c936) signal_pane_g1_ParamLimits

0xd376,	// (0x0003c936) signal_pane_g1

0xd391,	// (0x0003c951) signal_pane_g2_ParamLimits

0xd391,	// (0x0003c951) signal_pane_g2

0x0003,

0xf708,	// (0x0003ecc8) signal_pane_g_ParamLimits

0xf708,	// (0x0003ecc8) signal_pane_g

0x4547,	// (0x00033b07) context_pane_g1

0xcec2,	// (0x0003c482) title_pane_g1

0xcef9,	// (0x0003c4b9) title_pane_t1

0x2d85,	// (0x00032345) title_pane_t2

0x2dab,	// (0x0003236b) title_pane_t3

0x0002,

0xf557,	// (0x0003eb17) title_pane_t

0xd938,	// (0x0003cef8) aid_levels_battery_ParamLimits

0xd938,	// (0x0003cef8) aid_levels_battery

0xd954,	// (0x0003cf14) battery_pane_g1_ParamLimits

0xd954,	// (0x0003cf14) battery_pane_g1

0xd971,	// (0x0003cf31) battery_pane_g2_ParamLimits

0xd971,	// (0x0003cf31) battery_pane_g2

0x0001,

0xf7ab,	// (0x0003ed6b) battery_pane_g_ParamLimits

0xf7ab,	// (0x0003ed6b) battery_pane_g

0xdb40,	// (0x0003d100) uni_indicator_pane_g1

0xdb56,	// (0x0003d116) uni_indicator_pane_g2

0xdb6c,	// (0x0003d12c) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0003eedc) uni_indicator_pane_g

0x48e5,	// (0x00033ea5) navi_icon_pane_ParamLimits

0x48e5,	// (0x00033ea5) navi_icon_pane

0x4823,	// (0x00033de3) navi_midp_pane

0x4901,	// (0x00033ec1) navi_navi_pane

0x490b,	// (0x00033ecb) navi_text_pane_ParamLimits

0x490b,	// (0x00033ecb) navi_text_pane

0x2cd3,	// (0x00032293) status_small_wait_pane_g1

0x398b,	// (0x00032f4b) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0003eed7) status_small_wait_pane_g

0x6174,	// (0x00035734) navi_navi_icon_text_pane

0x617c,	// (0x0003573c) navi_navi_pane_g1_ParamLimits

0x617c,	// (0x0003573c) navi_navi_pane_g1

0x618e,	// (0x0003574e) navi_navi_pane_g2_ParamLimits

0x618e,	// (0x0003574e) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0003eea5) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0003eea5) navi_navi_pane_g

0x61a0,	// (0x00035760) navi_navi_tabs_pane

0x61a9,	// (0x00035769) navi_navi_text_pane

0x6174,	// (0x00035734) navi_navi_volume_pane

0x6150,	// (0x00035710) navi_text_pane_t1

0x6144,	// (0x00035704) navi_icon_pane_g1

0x6097,	// (0x00035657) navi_navi_text_pane_t1

0x1aa3,	// (0x00031063) navi_navi_volume_pane_g1

0x1aab,	// (0x0003106b) volume_small_pane

0x5ff1,	// (0x000355b1) navi_navi_icon_text_pane_g1

0x5ff9,	// (0x000355b9) navi_navi_icon_text_pane_t1

0x4901,	// (0x00033ec1) navi_tabs_2_long_pane

0x4901,	// (0x00033ec1) navi_tabs_2_pane

0x4901,	// (0x00033ec1) navi_tabs_3_long_pane

0x4901,	// (0x00033ec1) navi_tabs_3_pane

0x4901,	// (0x00033ec1) navi_tabs_4_pane

0x1a83,	// (0x00031043) tabs_2_active_pane_ParamLimits

0x1a83,	// (0x00031043) tabs_2_active_pane

0x1a93,	// (0x00031053) tabs_2_passive_pane_ParamLimits

0x1a93,	// (0x00031053) tabs_2_passive_pane

0x1a51,	// (0x00031011) tabs_3_active_pane_ParamLimits

0x1a51,	// (0x00031011) tabs_3_active_pane

0x1a61,	// (0x00031021) tabs_3_passive_pane_ParamLimits

0x1a61,	// (0x00031021) tabs_3_passive_pane

0x1a72,	// (0x00031032) tabs_3_passive_pane_cp_ParamLimits

0x1a72,	// (0x00031032) tabs_3_passive_pane_cp

0x1a0d,	// (0x00030fcd) tabs_4_active_pane_ParamLimits

0x1a0d,	// (0x00030fcd) tabs_4_active_pane

0x1a1e,	// (0x00030fde) tabs_4_passive_pane_ParamLimits

0x1a1e,	// (0x00030fde) tabs_4_passive_pane

0x1a2f,	// (0x00030fef) tabs_4_passive_pane_cp_ParamLimits

0x1a2f,	// (0x00030fef) tabs_4_passive_pane_cp

0x1a40,	// (0x00031000) tabs_4_passive_pane_cp2_ParamLimits

0x1a40,	// (0x00031000) tabs_4_passive_pane_cp2

0x19e9,	// (0x00030fa9) tabs_2_long_active_pane_ParamLimits

0x19e9,	// (0x00030fa9) tabs_2_long_active_pane

0x19fb,	// (0x00030fbb) tabs_2_long_passive_pane_ParamLimits

0x19fb,	// (0x00030fbb) tabs_2_long_passive_pane

0x19aa,	// (0x00030f6a) tabs_3_long_active_pane_ParamLimits

0x19aa,	// (0x00030f6a) tabs_3_long_active_pane

0x19bd,	// (0x00030f7d) tabs_3_long_passive_pane_ParamLimits

0x19bd,	// (0x00030f7d) tabs_3_long_passive_pane

0x19d6,	// (0x00030f96) tabs_3_long_passive_pane_cp_ParamLimits

0x19d6,	// (0x00030f96) tabs_3_long_passive_pane_cp

0x1950,	// (0x00030f10) volume_small_pane_g1

0x1959,	// (0x00030f19) volume_small_pane_g2

0x1962,	// (0x00030f22) volume_small_pane_g3

0x196b,	// (0x00030f2b) volume_small_pane_g4

0x1974,	// (0x00030f34) volume_small_pane_g5

0x197d,	// (0x00030f3d) volume_small_pane_g6

0x1986,	// (0x00030f46) volume_small_pane_g7

0x198f,	// (0x00030f4f) volume_small_pane_g8

0x1998,	// (0x00030f58) volume_small_pane_g9

0x19a1,	// (0x00030f61) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0003ee71) volume_small_pane_g

0x37e9,	// (0x00032da9) bg_active_tab_pane_cp2_ParamLimits

0x37e9,	// (0x00032da9) bg_active_tab_pane_cp2

0x2dcb,	// (0x0003238b) tabs_3_active_pane_g1

0xcf85,	// (0x0003c545) tabs_3_active_pane_t1

0x37e9,	// (0x00032da9) bg_passive_tab_pane_cp2_ParamLimits

0x37e9,	// (0x00032da9) bg_passive_tab_pane_cp2

0x2dcb,	// (0x0003238b) tabs_3_passive_pane_g1

0xcf85,	// (0x0003c545) tabs_3_passive_pane_t1

0x37e9,	// (0x00032da9) bg_active_tab_pane_cp3_ParamLimits

0x37e9,	// (0x00032da9) bg_active_tab_pane_cp3

0x2de5,	// (0x000323a5) tabs_4_active_pane_g1

0xcf97,	// (0x0003c557) tabs_4_active_pane_t1

0x37e9,	// (0x00032da9) bg_passive_tab_pane_cp3_ParamLimits

0x37e9,	// (0x00032da9) bg_passive_tab_pane_cp3

0x2de5,	// (0x000323a5) tabs_4_1_passive_pane_g1

0xcf97,	// (0x0003c557) tabs_4_1_passive_pane_t1

0x4db1,	// (0x00034371) list_highlight_pane_cp2

0xdbf4,	// (0x0003d1b4) list_set_pane_ParamLimits

0xdbf4,	// (0x0003d1b4) list_set_pane

0xdc8e,	// (0x0003d24e) main_pane_set_t1_ParamLimits

0xdc8e,	// (0x0003d24e) main_pane_set_t1

0xdcae,	// (0x0003d26e) main_pane_set_t2_ParamLimits

0xdcae,	// (0x0003d26e) main_pane_set_t2

0xdcc2,	// (0x0003d282) main_pane_set_t3_ParamLimits

0xdcc2,	// (0x0003d282) main_pane_set_t3

0xdcd4,	// (0x0003d294) main_pane_set_t4_ParamLimits

0xdcd4,	// (0x0003d294) main_pane_set_t4

0x0003,

0xf981,	// (0x0003ef41) main_pane_set_t_ParamLimits

0xf981,	// (0x0003ef41) main_pane_set_t

0xdce6,	// (0x0003d2a6) setting_code_pane

0xdcf0,	// (0x0003d2b0) setting_slider_graphic_pane

0xdcf0,	// (0x0003d2b0) setting_slider_pane

0xdcf0,	// (0x0003d2b0) setting_text_pane

0xdcf0,	// (0x0003d2b0) setting_volume_pane

0x0303,	// (0x0002f8c3) volume_set_pane

0x2dbd,	// (0x0003237d) bg_set_opt_pane_cp

0x030b,	// (0x0002f8cb) setting_slider_pane_t1

0x0324,	// (0x0002f8e4) setting_slider_pane_t2

0x033e,	// (0x0002f8fe) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003eb1e) setting_slider_pane_t

0x0356,	// (0x0002f916) slider_set_pane

0x2cdd,	// (0x0003229d) bg_set_opt_pane_cp2

0x2dff,	// (0x000323bf) setting_slider_graphic_pane_g1

0x036c,	// (0x0002f92c) setting_slider_graphic_pane_t1

0x037c,	// (0x0002f93c) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003eb25) setting_slider_graphic_pane_t

0x038c,	// (0x0002f94c) slider_set_pane_cp

0x2cdd,	// (0x0003229d) input_focus_pane_cp1

0x6682,	// (0x00035c42) list_set_text_pane

0x2cd3,	// (0x00032293) setting_text_pane_g1

0x2cdd,	// (0x0003229d) input_focus_pane_cp2

0x2cd3,	// (0x00032293) setting_code_pane_g1

0x2e08,	// (0x000323c8) setting_code_pane_t1

0x0394,	// (0x0002f954) set_text_pane_t1_ParamLimits

0x0394,	// (0x0002f954) set_text_pane_t1

0x3e38,	// (0x000333f8) set_opt_bg_pane_g1

0x3e40,	// (0x00033400) set_opt_bg_pane_g2

0x665c,	// (0x00035c1c) set_opt_bg_pane_g3

0x3e50,	// (0x00033410) set_opt_bg_pane_g4

0x3e58,	// (0x00033418) set_opt_bg_pane_g5

0x3e60,	// (0x00033420) set_opt_bg_pane_g6

0x6666,	// (0x00035c26) set_opt_bg_pane_g7

0x666e,	// (0x00035c2e) set_opt_bg_pane_g8

0x6678,	// (0x00035c38) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0003ef2e) set_opt_bg_pane_g

0x664f,	// (0x00035c0f) slider_set_pane_g1

0x1b40,	// (0x00031100) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0003ef1f) slider_set_pane_g

0x1ab4,	// (0x00031074) volume_set_pane_g1

0x1abc,	// (0x0003107c) volume_set_pane_g2

0x1ac4,	// (0x00031084) volume_set_pane_g3

0x1acc,	// (0x0003108c) volume_set_pane_g4

0x1ad4,	// (0x00031094) volume_set_pane_g5

0x1adc,	// (0x0003109c) volume_set_pane_g6

0x1ae4,	// (0x000310a4) volume_set_pane_g7

0x1aec,	// (0x000310ac) volume_set_pane_g8

0x1af4,	// (0x000310b4) volume_set_pane_g9

0x1afc,	// (0x000310bc) volume_set_pane_g10

0x0009,

0xf937,	// (0x0003eef7) volume_set_pane_g

0xcfa9,	// (0x0003c569) indicator_pane_ParamLimits

0xcfa9,	// (0x0003c569) indicator_pane

0xcfd1,	// (0x0003c591) main_idle_pane_g2_ParamLimits

0xcfd1,	// (0x0003c591) main_idle_pane_g2

0xd009,	// (0x0003c5c9) main_pane_idle_g1_ParamLimits

0xd009,	// (0x0003c5c9) main_pane_idle_g1

0x2e57,	// (0x00032417) popup_clock_digital_analogue_window_ParamLimits

0x2e57,	// (0x00032417) popup_clock_digital_analogue_window

0xd030,	// (0x0003c5f0) soft_indicator_pane_ParamLimits

0xd030,	// (0x0003c5f0) soft_indicator_pane

0xd04a,	// (0x0003c60a) wallpaper_pane_ParamLimits

0xd04a,	// (0x0003c60a) wallpaper_pane

0x2cd3,	// (0x00032293) wallpaper_pane_g1

0xd05c,	// (0x0003c61c) indicator_pane_g1_ParamLimits

0xd05c,	// (0x0003c61c) indicator_pane_g1

0x6a86,	// (0x00036046) navi_navi_icon_text_pane_srt_g1

0x2ea9,	// (0x00032469) soft_indicator_pane_t1

0x2ec3,	// (0x00032483) aid_ps_area_pane

0xd072,	// (0x0003c632) aid_ps_clock_pane

0x2ee2,	// (0x000324a2) aid_ps_indicator_pane

0x2eee,	// (0x000324ae) indicator_ps_pane_ParamLimits

0x2eee,	// (0x000324ae) indicator_ps_pane

0x2efd,	// (0x000324bd) power_save_pane_g1_ParamLimits

0x2efd,	// (0x000324bd) power_save_pane_g1

0x2f09,	// (0x000324c9) power_save_pane_g2_ParamLimits

0x2f09,	// (0x000324c9) power_save_pane_g2

0xf4bc,	// (0x0003ea7c) aid_navinavi_width_pane

0x2ec3,	// (0x00032483) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003eb2a) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003eb2a) power_save_pane_g

0x2f17,	// (0x000324d7) power_save_pane_t1_ParamLimits

0x2f17,	// (0x000324d7) power_save_pane_t1

0xd072,	// (0x0003c632) aid_ps_clock_pane_ParamLimits

0x2ee2,	// (0x000324a2) aid_ps_indicator_pane_ParamLimits

0x2f29,	// (0x000324e9) power_save_pane_t4_ParamLimits

0x2f29,	// (0x000324e9) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003eb2f) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003eb2f) power_save_pane_t

0x3704,	// (0x00032cc4) power_save_t3_ParamLimits

0x3704,	// (0x00032cc4) power_save_t3

0x36ef,	// (0x00032caf) power_save_t2_ParamLimits

0x36ef,	// (0x00032caf) power_save_t2

0x3719,	// (0x00032cd9) indicator_ps_pane_g1

0xd080,	// (0x0003c640) ai_gene_pane_ParamLimits

0xd080,	// (0x0003c640) ai_gene_pane

0xd097,	// (0x0003c657) ai_links_pane_ParamLimits

0xd097,	// (0x0003c657) ai_links_pane

0xd0af,	// (0x0003c66f) indicator_pane_cp1_ParamLimits

0xd0af,	// (0x0003c66f) indicator_pane_cp1

0xd0be,	// (0x0003c67e) main_pane_idle_g1_cp_ParamLimits

0xd0be,	// (0x0003c67e) main_pane_idle_g1_cp

0x3752,	// (0x00032d12) popup_ai_links_title_window

0xd0d6,	// (0x0003c696) soft_indicator_pane_cp1_ParamLimits

0xd0d6,	// (0x0003c696) soft_indicator_pane_cp1

0x643d,	// (0x000359fd) ai_links_pane_g1

0x6446,	// (0x00035a06) grid_ai_links_pane

0xdb37,	// (0x0003d0f7) ai_gene_pane_1

0x642b,	// (0x000359eb) ai_gene_pane_2

0x6434,	// (0x000359f4) list_highlight_pane_cp4

0xdb13,	// (0x0003d0d3) cell_ai_link_pane_ParamLimits

0xdb13,	// (0x0003d0d3) cell_ai_link_pane

0x63fc,	// (0x000359bc) cell_ai_link_pane_g1

0x398b,	// (0x00032f4b) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0003eed2) cell_ai_link_pane_g

0x2cdd,	// (0x0003229d) grid_highlight_cp2

0x2cdd,	// (0x0003229d) bg_popup_sub_pane_cp1

0x3775,	// (0x00032d35) popup_ai_links_title_window_t1

0x634a,	// (0x0003590a) ai_gene_pane_1_g1_ParamLimits

0x634a,	// (0x0003590a) ai_gene_pane_1_g1

0x6356,	// (0x00035916) ai_gene_pane_1_g2_ParamLimits

0x6356,	// (0x00035916) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0003eec8) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0003eec8) ai_gene_pane_1_g

0x6363,	// (0x00035923) ai_gene_pane_1_t1_ParamLimits

0x6363,	// (0x00035923) ai_gene_pane_1_t1

0x6397,	// (0x00035957) grid_ai_soft_ind_pane

0x6335,	// (0x000358f5) ai_gene_pane_2_t1_ParamLimits

0x6335,	// (0x000358f5) ai_gene_pane_2_t1

0xd0ea,	// (0x0003c6aa) main_pane_empty_t1_ParamLimits

0xd0ea,	// (0x0003c6aa) main_pane_empty_t1

0xd102,	// (0x0003c6c2) main_pane_empty_t2_ParamLimits

0xd102,	// (0x0003c6c2) main_pane_empty_t2

0xd117,	// (0x0003c6d7) main_pane_empty_t3_ParamLimits

0xd117,	// (0x0003c6d7) main_pane_empty_t3

0xd129,	// (0x0003c6e9) main_pane_empty_t4_ParamLimits

0xd129,	// (0x0003c6e9) main_pane_empty_t4

0xd13b,	// (0x0003c6fb) main_pane_empty_t5_ParamLimits

0xd13b,	// (0x0003c6fb) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003eb34) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003eb34) main_pane_empty_t

0x3e89,	// (0x00033449) bg_popup_window_pane_ParamLimits

0x3e89,	// (0x00033449) bg_popup_window_pane

0x60a5,	// (0x00035665) find_popup_pane_cp2_ParamLimits

0x60a5,	// (0x00035665) find_popup_pane_cp2

0x60b1,	// (0x00035671) heading_pane_ParamLimits

0x60b1,	// (0x00035671) heading_pane

0x2cdd,	// (0x0003229d) bg_popup_sub_pane

0xda94,	// (0x0003d054) bg_popup_window_pane_g1_ParamLimits

0xda94,	// (0x0003d054) bg_popup_window_pane_g1

0xdaa3,	// (0x0003d063) bg_popup_window_pane_g2_ParamLimits

0xdaa3,	// (0x0003d063) bg_popup_window_pane_g2

0xdaaf,	// (0x0003d06f) bg_popup_window_pane_g3_ParamLimits

0xdaaf,	// (0x0003d06f) bg_popup_window_pane_g3

0xdabb,	// (0x0003d07b) bg_popup_window_pane_g4_ParamLimits

0xdabb,	// (0x0003d07b) bg_popup_window_pane_g4

0xdaca,	// (0x0003d08a) bg_popup_window_pane_g5_ParamLimits

0xdaca,	// (0x0003d08a) bg_popup_window_pane_g5

0xdada,	// (0x0003d09a) bg_popup_window_pane_g6_ParamLimits

0xdada,	// (0x0003d09a) bg_popup_window_pane_g6

0xdae6,	// (0x0003d0a6) bg_popup_window_pane_g7_ParamLimits

0xdae6,	// (0x0003d0a6) bg_popup_window_pane_g7

0xdaf5,	// (0x0003d0b5) bg_popup_window_pane_g8_ParamLimits

0xdaf5,	// (0x0003d0b5) bg_popup_window_pane_g8

0xdb04,	// (0x0003d0c4) bg_popup_window_pane_g9_ParamLimits

0xdb04,	// (0x0003d0c4) bg_popup_window_pane_g9

0x608b,	// (0x0003564b) bg_popup_window_pane_g10_ParamLimits

0x608b,	// (0x0003564b) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0003ee90) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0003ee90) bg_popup_window_pane_g

0x5fa8,	// (0x00035568) bg_popup_heading_pane_ParamLimits

0x5fa8,	// (0x00035568) bg_popup_heading_pane

0x1bf6,	// (0x000311b6) tabs_4_passive_pane_cp_srt_ParamLimits

0x1bf6,	// (0x000311b6) tabs_4_passive_pane_cp_srt

0x1c08,	// (0x000311c8) tabs_4_passive_pane_srt_ParamLimits

0x5fbc,	// (0x0003557c) heading_pane_g2

0x1c08,	// (0x000311c8) tabs_4_passive_pane_srt

0x532f,	// (0x000348ef) bg_passive_tab_pane_cp3_srt_ParamLimits

0x532f,	// (0x000348ef) bg_passive_tab_pane_cp3_srt

0x5fc4,	// (0x00035584) heading_pane_t1_ParamLimits

0x5fc4,	// (0x00035584) heading_pane_t1

0x5fdb,	// (0x0003559b) heading_pane_t2_ParamLimits

0x5fdb,	// (0x0003559b) heading_pane_t2

0x0001,

0xf8cb,	// (0x0003ee8b) heading_pane_t_ParamLimits

0xf8cb,	// (0x0003ee8b) heading_pane_t

0x5ad5,	// (0x00035095) bg_popup_heading_pane_g1

0x5b84,	// (0x00035144) bg_popup_heading_pane_g2

0x5b8e,	// (0x0003514e) bg_popup_heading_pane_g3

0x5b98,	// (0x00035158) bg_popup_heading_pane_g4

0x5ba2,	// (0x00035162) bg_popup_heading_pane_g5

0x5bac,	// (0x0003516c) bg_popup_heading_pane_g6

0x5bb4,	// (0x00035174) bg_popup_heading_pane_g7

0x5bbc,	// (0x0003517c) bg_popup_heading_pane_g8

0x5bc6,	// (0x00035186) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0003ee47) bg_popup_heading_pane_g

0x52bb,	// (0x0003487b) bg_popup_sub_pane_g1

0x52cb,	// (0x0003488b) bg_popup_sub_pane_g2

0x52c3,	// (0x00034883) bg_popup_sub_pane_g3

0x52db,	// (0x0003489b) bg_popup_sub_pane_g4

0x52d3,	// (0x00034893) bg_popup_sub_pane_g5

0x52e3,	// (0x000348a3) bg_popup_sub_pane_g6

0x52eb,	// (0x000348ab) bg_popup_sub_pane_g7

0x52fb,	// (0x000348bb) bg_popup_sub_pane_g8

0x52f3,	// (0x000348b3) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0003ee21) bg_popup_sub_pane_g

0x37e9,	// (0x00032da9) bg_popup_window_pane_cp5_ParamLimits

0x37e9,	// (0x00032da9) bg_popup_window_pane_cp5

0x3805,	// (0x00032dc5) popup_note_window_g1_ParamLimits

0x3805,	// (0x00032dc5) popup_note_window_g1

0x3811,	// (0x00032dd1) popup_note_window_t1_ParamLimits

0x3811,	// (0x00032dd1) popup_note_window_t1

0x3827,	// (0x00032de7) popup_note_window_t2_ParamLimits

0x3827,	// (0x00032de7) popup_note_window_t2

0x383d,	// (0x00032dfd) popup_note_window_t3_ParamLimits

0x383d,	// (0x00032dfd) popup_note_window_t3

0x3853,	// (0x00032e13) popup_note_window_t4_ParamLimits

0x3853,	// (0x00032e13) popup_note_window_t4

0x387b,	// (0x00032e3b) popup_note_window_t5_ParamLimits

0x387b,	// (0x00032e3b) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003eb3f) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003eb3f) popup_note_window_t

0x389f,	// (0x00032e5f) bg_popup_window_pane_cp6_ParamLimits

0x389f,	// (0x00032e5f) bg_popup_window_pane_cp6

0x5a51,	// (0x00035011) popup_note_image_window_g1_ParamLimits

0x5a51,	// (0x00035011) popup_note_image_window_g1

0x5a5d,	// (0x0003501d) popup_note_image_window_g2_ParamLimits

0x5a5d,	// (0x0003501d) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0003ee15) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0003ee15) popup_note_image_window_g

0x5a76,	// (0x00035036) popup_note_image_window_t1_ParamLimits

0x5a76,	// (0x00035036) popup_note_image_window_t1

0x5a8f,	// (0x0003504f) popup_note_image_window_t2_ParamLimits

0x5a8f,	// (0x0003504f) popup_note_image_window_t2

0x5aa8,	// (0x00035068) popup_note_image_window_t3_ParamLimits

0x5aa8,	// (0x00035068) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0003ee1a) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0003ee1a) popup_note_image_window_t

0x5912,	// (0x00034ed2) bg_popup_window_pane_cp7_ParamLimits

0x5912,	// (0x00034ed2) bg_popup_window_pane_cp7

0x5942,	// (0x00034f02) popup_note_wait_window_g1_ParamLimits

0x5942,	// (0x00034f02) popup_note_wait_window_g1

0x594e,	// (0x00034f0e) popup_note_wait_window_g2_ParamLimits

0x594e,	// (0x00034f0e) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0003ee03) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0003ee03) popup_note_wait_window_g

0x5966,	// (0x00034f26) popup_note_wait_window_t1_ParamLimits

0x5966,	// (0x00034f26) popup_note_wait_window_t1

0x598d,	// (0x00034f4d) popup_note_wait_window_t2_ParamLimits

0x598d,	// (0x00034f4d) popup_note_wait_window_t2

0x59aa,	// (0x00034f6a) popup_note_wait_window_t3_ParamLimits

0x59aa,	// (0x00034f6a) popup_note_wait_window_t3

0x59bd,	// (0x00034f7d) popup_note_wait_window_t4_ParamLimits

0x59bd,	// (0x00034f7d) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0003ee0a) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0003ee0a) popup_note_wait_window_t

0x59e2,	// (0x00034fa2) wait_bar_pane_ParamLimits

0x59e2,	// (0x00034fa2) wait_bar_pane

0x2cdd,	// (0x0003229d) wait_anim_pane

0x2cdd,	// (0x0003229d) wait_border_pane

0x2cd3,	// (0x00032293) wait_anim_pane_g1

0x2cd3,	// (0x00032293) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0003ecc3) wait_anim_pane_g

0x58b6,	// (0x00034e76) wait_border_pane_g1

0x58c1,	// (0x00034e81) wait_border_pane_g2

0x58ca,	// (0x00034e8a) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0003edfc) wait_border_pane_g

0x5721,	// (0x00034ce1) bg_popup_window_pane_cp16_ParamLimits

0x5721,	// (0x00034ce1) bg_popup_window_pane_cp16

0x5821,	// (0x00034de1) indicator_popup_pane_cp4_ParamLimits

0x5821,	// (0x00034de1) indicator_popup_pane_cp4

0x5835,	// (0x00034df5) popup_query_data_window_t1_ParamLimits

0x5835,	// (0x00034df5) popup_query_data_window_t1

0x5847,	// (0x00034e07) popup_query_data_window_t2_ParamLimits

0x5847,	// (0x00034e07) popup_query_data_window_t2

0x5860,	// (0x00034e20) popup_query_data_window_t3_ParamLimits

0x5860,	// (0x00034e20) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0003edf5) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0003edf5) popup_query_data_window_t

0x587a,	// (0x00034e3a) query_popup_data_pane_ParamLimits

0x587a,	// (0x00034e3a) query_popup_data_pane

0x588e,	// (0x00034e4e) query_popup_data_pane_cp1_ParamLimits

0x588e,	// (0x00034e4e) query_popup_data_pane_cp1

0x5721,	// (0x00034ce1) bg_popup_window_pane_cp10_ParamLimits

0x5721,	// (0x00034ce1) bg_popup_window_pane_cp10

0x5753,	// (0x00034d13) indicator_popup_pane_ParamLimits

0x5753,	// (0x00034d13) indicator_popup_pane

0x5775,	// (0x00034d35) popup_query_code_window_t1_ParamLimits

0x5775,	// (0x00034d35) popup_query_code_window_t1

0x578f,	// (0x00034d4f) popup_query_code_window_t2_ParamLimits

0x578f,	// (0x00034d4f) popup_query_code_window_t2

0x57d8,	// (0x00034d98) popup_query_code_window_t3_ParamLimits

0x57d8,	// (0x00034d98) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0003edee) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0003edee) popup_query_code_window_t

0x5807,	// (0x00034dc7) query_popup_pane_ParamLimits

0x5807,	// (0x00034dc7) query_popup_pane

0x389f,	// (0x00032e5f) bg_popup_window_pane_cp15_ParamLimits

0x389f,	// (0x00032e5f) bg_popup_window_pane_cp15

0x38bd,	// (0x00032e7d) indicator_popup_pane_cp1_ParamLimits

0x38bd,	// (0x00032e7d) indicator_popup_pane_cp1

0x38d0,	// (0x00032e90) indicator_popup_pane_cp2_ParamLimits

0x38d0,	// (0x00032e90) indicator_popup_pane_cp2

0x38e3,	// (0x00032ea3) popup_query_data_code_window_g1_ParamLimits

0x38e3,	// (0x00032ea3) popup_query_data_code_window_g1

0x38f6,	// (0x00032eb6) popup_query_data_code_window_t1_ParamLimits

0x38f6,	// (0x00032eb6) popup_query_data_code_window_t1

0x3908,	// (0x00032ec8) popup_query_data_code_window_t2_ParamLimits

0x3908,	// (0x00032ec8) popup_query_data_code_window_t2

0x391a,	// (0x00032eda) popup_query_data_code_window_t3_ParamLimits

0x391a,	// (0x00032eda) popup_query_data_code_window_t3

0x3930,	// (0x00032ef0) popup_query_data_code_window_t4_ParamLimits

0x3930,	// (0x00032ef0) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003eb4a) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003eb4a) popup_query_data_code_window_t

0x1776,	// (0x00030d36) list_single_midp_graphic_pane_g3

0x3948,	// (0x00032f08) query_popup_data_pane_cp2_ParamLimits

0x395b,	// (0x00032f1b) query_popup_pane_cp2_ParamLimits

0x395b,	// (0x00032f1b) query_popup_pane_cp2

0x2cdd,	// (0x0003229d) bg_popup_window_pane_cp11

0x5719,	// (0x00034cd9) heading_pane_cp5

0x3a46,	// (0x00033006) listscroll_popup_info_pane

0x2cdd,	// (0x0003229d) input_focus_pane_cp3

0x396e,	// (0x00032f2e) query_popup_pane_t1

0x397c,	// (0x00032f3c) list_popup_info_pane_ParamLimits

0x397c,	// (0x00032f3c) list_popup_info_pane

0x398b,	// (0x00032f4b) listscroll_popup_info_pane_g1

0x3993,	// (0x00032f53) scroll_pane_cp7

0x399d,	// (0x00032f5d) popup_info_list_pane_t1_ParamLimits

0x399d,	// (0x00032f5d) popup_info_list_pane_t1

0x39b7,	// (0x00032f77) popup_info_list_pane_t2_ParamLimits

0x39b7,	// (0x00032f77) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003eb53) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003eb53) popup_info_list_pane_t

0x2cdd,	// (0x0003229d) bg_popup_window_pane_cp12

0x6aa0,	// (0x00036060) find_popup_pane

0x2dbd,	// (0x0003237d) bg_popup_window_pane_cp3

0x39d1,	// (0x00032f91) heading_pane_cp3

0x39dd,	// (0x00032f9d) listscroll_popup_graphic_pane

0x2cdd,	// (0x0003229d) bg_popup_window_pane_cp4

0xd19d,	// (0x0003c75d) heading_pane_cp4

0x3a46,	// (0x00033006) listscroll_popup_colour_pane

0x3a4e,	// (0x0003300e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3a4e,	// (0x0003300e) cell_large_graphic_colour_none_popup_pane

0xd1a5,	// (0x0003c765) grid_large_graphic_colour_popup_pane_ParamLimits

0xd1a5,	// (0x0003c765) grid_large_graphic_colour_popup_pane

0x3a8e,	// (0x0003304e) listscroll_popup_colour_pane_g1_ParamLimits

0x3a8e,	// (0x0003304e) listscroll_popup_colour_pane_g1

0x3aa5,	// (0x00033065) listscroll_popup_colour_pane_g2_ParamLimits

0x3aa5,	// (0x00033065) listscroll_popup_colour_pane_g2

0x3abc,	// (0x0003307c) listscroll_popup_colour_pane_g3_ParamLimits

0x3abc,	// (0x0003307c) listscroll_popup_colour_pane_g3

0xd1c9,	// (0x0003c789) listscroll_popup_colour_pane_g4_ParamLimits

0xd1c9,	// (0x0003c789) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003eb58) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003eb58) listscroll_popup_colour_pane_g

0x3ae0,	// (0x000330a0) scroll_pane_cp6_ParamLimits

0x3ae0,	// (0x000330a0) scroll_pane_cp6

0xd1d9,	// (0x0003c799) cell_large_graphic_colour_popup_pane_ParamLimits

0xd1d9,	// (0x0003c799) cell_large_graphic_colour_popup_pane

0x3b11,	// (0x000330d1) cell_large_graphic_colour_none_popup_pane_t1

0x2cdd,	// (0x0003229d) grid_highlight_pane_cp5

0x3b20,	// (0x000330e0) cell_large_graphic_colour_popup_pane_g1

0x3b28,	// (0x000330e8) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003eb61) cell_large_graphic_colour_popup_pane_g

0x3b30,	// (0x000330f0) cell_large_graphic_colour_popup_pane_g2_copy1

0x3b39,	// (0x000330f9) grid_highlight_pane_cp4

0x3b41,	// (0x00033101) bg_popup_window_pane_cp8_ParamLimits

0x3b41,	// (0x00033101) bg_popup_window_pane_cp8

0x3b5c,	// (0x0003311c) popup_snote_single_text_window_g1_ParamLimits

0x3b5c,	// (0x0003311c) popup_snote_single_text_window_g1

0x3b6e,	// (0x0003312e) popup_snote_single_text_window_t1_ParamLimits

0x3b6e,	// (0x0003312e) popup_snote_single_text_window_t1

0x3b81,	// (0x00033141) popup_snote_single_text_window_t2_ParamLimits

0x3b81,	// (0x00033141) popup_snote_single_text_window_t2

0x3b94,	// (0x00033154) popup_snote_single_text_window_t3_ParamLimits

0x3b94,	// (0x00033154) popup_snote_single_text_window_t3

0x3bcd,	// (0x0003318d) popup_snote_single_text_window_t4_ParamLimits

0x3bcd,	// (0x0003318d) popup_snote_single_text_window_t4

0x3c01,	// (0x000331c1) popup_snote_single_text_window_t5_ParamLimits

0x3c01,	// (0x000331c1) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003eb66) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003eb66) popup_snote_single_text_window_t

0x3c30,	// (0x000331f0) bg_popup_window_pane_cp9_ParamLimits

0x3c30,	// (0x000331f0) bg_popup_window_pane_cp9

0x3b5c,	// (0x0003311c) popup_snote_single_graphic_window_g1_ParamLimits

0x3b5c,	// (0x0003311c) popup_snote_single_graphic_window_g1

0x3c3e,	// (0x000331fe) popup_snote_single_graphic_window_g2_ParamLimits

0x3c3e,	// (0x000331fe) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003eb71) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003eb71) popup_snote_single_graphic_window_g

0x3c4a,	// (0x0003320a) popup_snote_single_graphic_window_t1_ParamLimits

0x3c4a,	// (0x0003320a) popup_snote_single_graphic_window_t1

0x3c5d,	// (0x0003321d) popup_snote_single_graphic_window_t2_ParamLimits

0x3c5d,	// (0x0003321d) popup_snote_single_graphic_window_t2

0x3c70,	// (0x00033230) popup_snote_single_graphic_window_t3_ParamLimits

0x3c70,	// (0x00033230) popup_snote_single_graphic_window_t3

0x3ca9,	// (0x00033269) popup_snote_single_graphic_window_t4_ParamLimits

0x3ca9,	// (0x00033269) popup_snote_single_graphic_window_t4

0x3cdd,	// (0x0003329d) popup_snote_single_graphic_window_t5_ParamLimits

0x3cdd,	// (0x0003329d) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003eb76) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003eb76) popup_snote_single_graphic_window_t

0x69e4,	// (0x00035fa4) grid_graphic_popup_pane_ParamLimits

0x69e4,	// (0x00035fa4) grid_graphic_popup_pane

0x6a0c,	// (0x00035fcc) listscroll_popup_graphic_pane_g1_ParamLimits

0x6a0c,	// (0x00035fcc) listscroll_popup_graphic_pane_g1

0xdde8,	// (0x0003d3a8) listscroll_popup_graphic_pane_g2_ParamLimits

0xdde8,	// (0x0003d3a8) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0003ef6b) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0003ef6b) listscroll_popup_graphic_pane_g

0x6a34,	// (0x00035ff4) scroll_pane_cp5

0xdda4,	// (0x0003d364) cell_graphic_popup_pane_ParamLimits

0xdda4,	// (0x0003d364) cell_graphic_popup_pane

0x6962,	// (0x00035f22) cell_graphic_popup_pane_g1

0x696a,	// (0x00035f2a) cell_graphic_popup_pane_g2

0x3b30,	// (0x000330f0) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0003ef64) cell_graphic_popup_pane_g

0x6973,	// (0x00035f33) cell_graphic_popup_pane_t2

0x3b39,	// (0x000330f9) grid_highlight_pane_cp3

0x3d1e,	// (0x000332de) list_gen_pane_ParamLimits

0x3d1e,	// (0x000332de) list_gen_pane

0x3d50,	// (0x00033310) scroll_pane

0xdd5b,	// (0x0003d31b) bg_list_pane_g1_ParamLimits

0xdd5b,	// (0x0003d31b) bg_list_pane_g1

0x68d7,	// (0x00035e97) bg_list_pane_g2_ParamLimits

0x68d7,	// (0x00035e97) bg_list_pane_g2

0x68ec,	// (0x00035eac) bg_list_pane_g3_ParamLimits

0x68ec,	// (0x00035eac) bg_list_pane_g3

0x6900,	// (0x00035ec0) bg_list_pane_g4_ParamLimits

0x6900,	// (0x00035ec0) bg_list_pane_g4

0xdd78,	// (0x0003d338) bg_list_pane_g5_ParamLimits

0xdd78,	// (0x0003d338) bg_list_pane_g5

0x0004,

0xf999,	// (0x0003ef59) bg_list_pane_g_ParamLimits

0xf999,	// (0x0003ef59) bg_list_pane_g

0xdd23,	// (0x0003d2e3) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd23,	// (0x0003d2e3) list_double2_graphic_large_graphic_pane

0xdd23,	// (0x0003d2e3) list_double2_graphic_pane_ParamLimits

0xdd23,	// (0x0003d2e3) list_double2_graphic_pane

0xdd23,	// (0x0003d2e3) list_double2_large_graphic_pane_ParamLimits

0xdd23,	// (0x0003d2e3) list_double2_large_graphic_pane

0xdd23,	// (0x0003d2e3) list_double2_pane_ParamLimits

0xdd23,	// (0x0003d2e3) list_double2_pane

0xdd23,	// (0x0003d2e3) list_double_graphic_heading_pane_ParamLimits

0xdd23,	// (0x0003d2e3) list_double_graphic_heading_pane

0xdd23,	// (0x0003d2e3) list_double_graphic_pane_ParamLimits

0xdd23,	// (0x0003d2e3) list_double_graphic_pane

0xdd23,	// (0x0003d2e3) list_double_heading_pane_ParamLimits

0xdd23,	// (0x0003d2e3) list_double_heading_pane

0xdd23,	// (0x0003d2e3) list_double_large_graphic_pane_ParamLimits

0xdd23,	// (0x0003d2e3) list_double_large_graphic_pane

0xdd23,	// (0x0003d2e3) list_double_number_pane_ParamLimits

0xdd23,	// (0x0003d2e3) list_double_number_pane

0xdd23,	// (0x0003d2e3) list_double_pane_ParamLimits

0xdd23,	// (0x0003d2e3) list_double_pane

0xdd23,	// (0x0003d2e3) list_double_time_pane_ParamLimits

0xdd23,	// (0x0003d2e3) list_double_time_pane

0xdd23,	// (0x0003d2e3) list_setting_number_pane_ParamLimits

0xdd23,	// (0x0003d2e3) list_setting_number_pane

0xdd23,	// (0x0003d2e3) list_setting_pane_ParamLimits

0xdd23,	// (0x0003d2e3) list_setting_pane

0xdd35,	// (0x0003d2f5) list_single_2graphic_pane_ParamLimits

0xdd35,	// (0x0003d2f5) list_single_2graphic_pane

0xdd35,	// (0x0003d2f5) list_single_graphic_heading_pane_ParamLimits

0xdd35,	// (0x0003d2f5) list_single_graphic_heading_pane

0xdd35,	// (0x0003d2f5) list_single_graphic_pane_ParamLimits

0xdd35,	// (0x0003d2f5) list_single_graphic_pane

0xdd35,	// (0x0003d2f5) list_single_heading_pane_ParamLimits

0xdd35,	// (0x0003d2f5) list_single_heading_pane

0xdd35,	// (0x0003d2f5) list_single_large_graphic_pane_ParamLimits

0xdd35,	// (0x0003d2f5) list_single_large_graphic_pane

0xdd35,	// (0x0003d2f5) list_single_number_heading_pane_ParamLimits

0xdd35,	// (0x0003d2f5) list_single_number_heading_pane

0xdd35,	// (0x0003d2f5) list_single_number_pane_ParamLimits

0xdd35,	// (0x0003d2f5) list_single_number_pane

0xdd35,	// (0x0003d2f5) list_single_pane_ParamLimits

0xdd35,	// (0x0003d2f5) list_single_pane

0x2cdd,	// (0x0003229d) list_highlight_pane_cp1

0x1723,	// (0x00030ce3) list_single_pane_g1_ParamLimits

0x1723,	// (0x00030ce3) list_single_pane_g1

0x172f,	// (0x00030cef) list_single_pane_g2_ParamLimits

0x172f,	// (0x00030cef) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003eb88) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003eb88) list_single_pane_g

0x309d,	// (0x0003265d) list_single_pane_t1_ParamLimits

0x309d,	// (0x0003265d) list_single_pane_t1

0x1723,	// (0x00030ce3) list_single_number_pane_g1_ParamLimits

0x1723,	// (0x00030ce3) list_single_number_pane_g1

0x172f,	// (0x00030cef) list_single_number_pane_g2_ParamLimits

0x172f,	// (0x00030cef) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003eb88) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003eb88) list_single_number_pane_g

0x173b,	// (0x00030cfb) list_single_number_pane_t1_ParamLimits

0x173b,	// (0x00030cfb) list_single_number_pane_t1

0xc62d,	// (0x0003bbed) list_single_number_pane_t2_ParamLimits

0xc62d,	// (0x0003bbed) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0003ef1a) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0003ef1a) list_single_number_pane_t

0xb75f,	// (0x0003ad1f) list_single_graphic_pane_g1_ParamLimits

0xb75f,	// (0x0003ad1f) list_single_graphic_pane_g1

0x1723,	// (0x00030ce3) list_single_graphic_pane_g2_ParamLimits

0x1723,	// (0x00030ce3) list_single_graphic_pane_g2

0x172f,	// (0x00030cef) list_single_graphic_pane_g3_ParamLimits

0x172f,	// (0x00030cef) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003eb81) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003eb81) list_single_graphic_pane_g

0xb76b,	// (0x0003ad2b) list_single_graphic_pane_t1_ParamLimits

0xb76b,	// (0x0003ad2b) list_single_graphic_pane_t1

0x1723,	// (0x00030ce3) list_single_heading_pane_g1_ParamLimits

0x1723,	// (0x00030ce3) list_single_heading_pane_g1

0x172f,	// (0x00030cef) list_single_heading_pane_g2_ParamLimits

0x172f,	// (0x00030cef) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003eb88) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003eb88) list_single_heading_pane_g

0xb781,	// (0x0003ad41) list_single_heading_pane_t1_ParamLimits

0xb781,	// (0x0003ad41) list_single_heading_pane_t1

0xb797,	// (0x0003ad57) list_single_heading_pane_t2_ParamLimits

0xb797,	// (0x0003ad57) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003eb8d) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003eb8d) list_single_heading_pane_t

0x1723,	// (0x00030ce3) list_single_number_heading_pane_g1_ParamLimits

0x1723,	// (0x00030ce3) list_single_number_heading_pane_g1

0x172f,	// (0x00030cef) list_single_number_heading_pane_g2_ParamLimits

0x172f,	// (0x00030cef) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003eb88) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003eb88) list_single_number_heading_pane_g

0xb781,	// (0x0003ad41) list_single_number_heading_pane_t1_ParamLimits

0xb781,	// (0x0003ad41) list_single_number_heading_pane_t1

0xb7a9,	// (0x0003ad69) list_single_number_heading_pane_t2_ParamLimits

0xb7a9,	// (0x0003ad69) list_single_number_heading_pane_t2

0x3077,	// (0x00032637) list_single_number_heading_pane_t3_ParamLimits

0x3077,	// (0x00032637) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003eb92) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003eb92) list_single_number_heading_pane_t

0x1717,	// (0x00030cd7) list_single_graphic_heading_pane_g1_ParamLimits

0x1717,	// (0x00030cd7) list_single_graphic_heading_pane_g1

0xb7bb,	// (0x0003ad7b) list_single_graphic_heading_pane_g4_ParamLimits

0xb7bb,	// (0x0003ad7b) list_single_graphic_heading_pane_g4

0x172f,	// (0x00030cef) list_single_graphic_heading_pane_g5_ParamLimits

0x172f,	// (0x00030cef) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003eb99) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003eb99) list_single_graphic_heading_pane_g

0xb781,	// (0x0003ad41) list_single_graphic_heading_pane_t1_ParamLimits

0xb781,	// (0x0003ad41) list_single_graphic_heading_pane_t1

0xb7cc,	// (0x0003ad8c) list_single_graphic_heading_pane_t2_ParamLimits

0xb7cc,	// (0x0003ad8c) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003eba0) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003eba0) list_single_graphic_heading_pane_t

0x30b3,	// (0x00032673) list_single_large_graphic_pane_g1_ParamLimits

0x30b3,	// (0x00032673) list_single_large_graphic_pane_g1

0x1723,	// (0x00030ce3) list_single_large_graphic_pane_g2_ParamLimits

0x1723,	// (0x00030ce3) list_single_large_graphic_pane_g2

0x172f,	// (0x00030cef) list_single_large_graphic_pane_g3_ParamLimits

0x172f,	// (0x00030cef) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003eba5) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003eba5) list_single_large_graphic_pane_g

0x58c1,	// (0x00034e81) wait_border_pane_g2_copy1

0xb7de,	// (0x0003ad9e) list_single_large_graphic_pane_g4_cp2

0x30bf,	// (0x0003267f) list_single_large_graphic_pane_t1_ParamLimits

0x30bf,	// (0x0003267f) list_single_large_graphic_pane_t1

0xb7e6,	// (0x0003ada6) list_double_pane_g1_ParamLimits

0xb7e6,	// (0x0003ada6) list_double_pane_g1

0xb7f2,	// (0x0003adb2) list_double_pane_g2_ParamLimits

0xb7f2,	// (0x0003adb2) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003ebac) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003ebac) list_double_pane_g

0xb7fe,	// (0x0003adbe) list_double_pane_t1_ParamLimits

0xb7fe,	// (0x0003adbe) list_double_pane_t1

0xb814,	// (0x0003add4) list_double_pane_t2_ParamLimits

0xb814,	// (0x0003add4) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003ebb1) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003ebb1) list_double_pane_t

0xb826,	// (0x0003ade6) list_double2_pane_g1_ParamLimits

0xb826,	// (0x0003ade6) list_double2_pane_g1

0xb837,	// (0x0003adf7) list_double2_pane_g2_ParamLimits

0xb837,	// (0x0003adf7) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003ebb6) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003ebb6) list_double2_pane_g

0xb843,	// (0x0003ae03) list_double2_pane_t1_ParamLimits

0xb843,	// (0x0003ae03) list_double2_pane_t1

0xb859,	// (0x0003ae19) list_double2_pane_t2_ParamLimits

0xb859,	// (0x0003ae19) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003ebbb) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003ebbb) list_double2_pane_t

0xb7e6,	// (0x0003ada6) list_double_number_pane_g1_ParamLimits

0xb7e6,	// (0x0003ada6) list_double_number_pane_g1

0xb7f2,	// (0x0003adb2) list_double_number_pane_g2_ParamLimits

0xb7f2,	// (0x0003adb2) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003ebac) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003ebac) list_double_number_pane_g

0xb86b,	// (0x0003ae2b) list_double_number_pane_t1_ParamLimits

0xb86b,	// (0x0003ae2b) list_double_number_pane_t1

0xb87d,	// (0x0003ae3d) list_double_number_pane_t2_ParamLimits

0xb87d,	// (0x0003ae3d) list_double_number_pane_t2

0xb893,	// (0x0003ae53) list_double_number_pane_t3_ParamLimits

0xb893,	// (0x0003ae53) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003ebc0) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003ebc0) list_double_number_pane_t

0xb8a5,	// (0x0003ae65) list_double_graphic_pane_g1_ParamLimits

0xb8a5,	// (0x0003ae65) list_double_graphic_pane_g1

0xb8b1,	// (0x0003ae71) list_double_graphic_pane_g2_ParamLimits

0xb8b1,	// (0x0003ae71) list_double_graphic_pane_g2

0xb8c0,	// (0x0003ae80) list_double_graphic_pane_g3_ParamLimits

0xb8c0,	// (0x0003ae80) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003ebc7) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003ebc7) list_double_graphic_pane_g

0xb8d8,	// (0x0003ae98) list_double_graphic_pane_t1_ParamLimits

0xb8d8,	// (0x0003ae98) list_double_graphic_pane_t1

0xb8ee,	// (0x0003aeae) list_double_graphic_pane_t2_ParamLimits

0xb8ee,	// (0x0003aeae) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003ebd0) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003ebd0) list_double_graphic_pane_t

0x06dd,	// (0x0002fc9d) list_double2_graphic_pane_g1_ParamLimits

0x06dd,	// (0x0002fc9d) list_double2_graphic_pane_g1

0x335c,	// (0x0003291c) list_double2_graphic_pane_g2_ParamLimits

0x335c,	// (0x0003291c) list_double2_graphic_pane_g2

0xb837,	// (0x0003adf7) list_double2_graphic_pane_g3_ParamLimits

0xb837,	// (0x0003adf7) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003ebd5) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003ebd5) list_double2_graphic_pane_g

0xb900,	// (0x0003aec0) list_double2_graphic_pane_t1_ParamLimits

0xb900,	// (0x0003aec0) list_double2_graphic_pane_t1

0xb916,	// (0x0003aed6) list_double2_graphic_pane_t2_ParamLimits

0xb916,	// (0x0003aed6) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003ebdc) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003ebdc) list_double2_graphic_pane_t

0xb928,	// (0x0003aee8) list_double_large_graphic_pane_g1_ParamLimits

0xb928,	// (0x0003aee8) list_double_large_graphic_pane_g1

0xb947,	// (0x0003af07) list_double_large_graphic_pane_g2_ParamLimits

0xb947,	// (0x0003af07) list_double_large_graphic_pane_g2

0xb7f2,	// (0x0003adb2) list_double_large_graphic_pane_g3_ParamLimits

0xb7f2,	// (0x0003adb2) list_double_large_graphic_pane_g3

0xb958,	// (0x0003af18) list_double_large_graphic_pane_g4_ParamLimits

0xb958,	// (0x0003af18) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003ebe1) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003ebe1) list_double_large_graphic_pane_g

0xb96b,	// (0x0003af2b) list_double_large_graphic_pane_t1_ParamLimits

0xb96b,	// (0x0003af2b) list_double_large_graphic_pane_t1

0xb984,	// (0x0003af44) list_double_large_graphic_pane_t2_ParamLimits

0xb984,	// (0x0003af44) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003ebec) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003ebec) list_double_large_graphic_pane_t

0xb996,	// (0x0003af56) list_double2_large_graphic_pane_g1_ParamLimits

0xb996,	// (0x0003af56) list_double2_large_graphic_pane_g1

0xb826,	// (0x0003ade6) list_double2_large_graphic_pane_g2_ParamLimits

0xb826,	// (0x0003ade6) list_double2_large_graphic_pane_g2

0xb837,	// (0x0003adf7) list_double2_large_graphic_pane_g3_ParamLimits

0xb837,	// (0x0003adf7) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003ebf1) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003ebf1) list_double2_large_graphic_pane_g

0xb9a2,	// (0x0003af62) list_double2_large_graphic_pane_t1_ParamLimits

0xb9a2,	// (0x0003af62) list_double2_large_graphic_pane_t1

0xb9b8,	// (0x0003af78) list_double2_large_graphic_pane_t2_ParamLimits

0xb9b8,	// (0x0003af78) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0003ebf8) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0003ebf8) list_double2_large_graphic_pane_t

0xb9ca,	// (0x0003af8a) list_double_heading_pane_g1_ParamLimits

0xb9ca,	// (0x0003af8a) list_double_heading_pane_g1

0x04b2,	// (0x0002fa72) list_double_heading_pane_g2_ParamLimits

0x04b2,	// (0x0002fa72) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003ebfd) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003ebfd) list_double_heading_pane_g

0xb9db,	// (0x0003af9b) list_double_heading_pane_t1_ParamLimits

0xb9db,	// (0x0003af9b) list_double_heading_pane_t1

0xb859,	// (0x0003ae19) list_double_heading_pane_t2_ParamLimits

0xb859,	// (0x0003ae19) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0003ec02) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0003ec02) list_double_heading_pane_t

0x06dd,	// (0x0002fc9d) list_double_graphic_heading_pane_g1_ParamLimits

0x06dd,	// (0x0002fc9d) list_double_graphic_heading_pane_g1

0xb9ca,	// (0x0003af8a) list_double_graphic_heading_pane_g2_ParamLimits

0xb9ca,	// (0x0003af8a) list_double_graphic_heading_pane_g2

0x04b2,	// (0x0002fa72) list_double_graphic_heading_pane_g3_ParamLimits

0x04b2,	// (0x0002fa72) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0003ec07) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0003ec07) list_double_graphic_heading_pane_g

0xb9f1,	// (0x0003afb1) list_double_graphic_heading_pane_t1_ParamLimits

0xb9f1,	// (0x0003afb1) list_double_graphic_heading_pane_t1

0xb916,	// (0x0003aed6) list_double_graphic_heading_pane_t2_ParamLimits

0xb916,	// (0x0003aed6) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003ec0e) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003ec0e) list_double_graphic_heading_pane_t

0xb947,	// (0x0003af07) list_double_time_pane_g1_ParamLimits

0xb947,	// (0x0003af07) list_double_time_pane_g1

0xb7f2,	// (0x0003adb2) list_double_time_pane_g2_ParamLimits

0xb7f2,	// (0x0003adb2) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0003ec13) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0003ec13) list_double_time_pane_g

0xba07,	// (0x0003afc7) list_double_time_pane_t1_ParamLimits

0xba07,	// (0x0003afc7) list_double_time_pane_t1

0xba1d,	// (0x0003afdd) list_double_time_pane_t2_ParamLimits

0xba1d,	// (0x0003afdd) list_double_time_pane_t2

0xba2f,	// (0x0003afef) list_double_time_pane_t3_ParamLimits

0xba2f,	// (0x0003afef) list_double_time_pane_t3

0xba41,	// (0x0003b001) list_double_time_pane_t4_ParamLimits

0xba41,	// (0x0003b001) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0003ec18) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0003ec18) list_double_time_pane_t

0xba53,	// (0x0003b013) list_setting_pane_g1_ParamLimits

0xba53,	// (0x0003b013) list_setting_pane_g1

0xba5f,	// (0x0003b01f) list_setting_pane_g2_ParamLimits

0xba5f,	// (0x0003b01f) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003ec21) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003ec21) list_setting_pane_g

0xba6b,	// (0x0003b02b) list_setting_pane_t1_ParamLimits

0xba6b,	// (0x0003b02b) list_setting_pane_t1

0xba85,	// (0x0003b045) list_setting_pane_t2_ParamLimits

0xba85,	// (0x0003b045) list_setting_pane_t2

0x0002,

0xf666,	// (0x0003ec26) list_setting_pane_t_ParamLimits

0xf666,	// (0x0003ec26) list_setting_pane_t

0xbac4,	// (0x0003b084) set_value_pane_cp_ParamLimits

0xbac4,	// (0x0003b084) set_value_pane_cp

0xbad0,	// (0x0003b090) list_setting_number_pane_g1_ParamLimits

0xbad0,	// (0x0003b090) list_setting_number_pane_g1

0xbadc,	// (0x0003b09c) list_setting_number_pane_g2_ParamLimits

0xbadc,	// (0x0003b09c) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0003ec2d) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0003ec2d) list_setting_number_pane_g

0xbae8,	// (0x0003b0a8) list_setting_number_pane_t1_ParamLimits

0xbae8,	// (0x0003b0a8) list_setting_number_pane_t1

0xbb01,	// (0x0003b0c1) list_setting_number_pane_t2_ParamLimits

0xbb01,	// (0x0003b0c1) list_setting_number_pane_t2

0xbb1b,	// (0x0003b0db) list_setting_number_pane_t3_ParamLimits

0xbb1b,	// (0x0003b0db) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003ec32) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003ec32) list_setting_number_pane_t

0xbac4,	// (0x0003b084) set_value_pane_ParamLimits

0xbac4,	// (0x0003b084) set_value_pane

0x3d84,	// (0x00033344) bg_set_opt_pane_ParamLimits

0x3d84,	// (0x00033344) bg_set_opt_pane

0x083e,	// (0x0002fdfe) set_value_pane_t1

0x3da5,	// (0x00033365) slider_set_pane_cp3

0x3dae,	// (0x0003336e) volume_small_pane_cp

0x3db7,	// (0x00033377) list_form_gen_pane

0x3dc0,	// (0x00033380) scroll_pane_cp8

0xbb5e,	// (0x0003b11e) form_field_data_pane_ParamLimits

0xbb5e,	// (0x0003b11e) form_field_data_pane

0xbb75,	// (0x0003b135) form_field_data_wide_pane_ParamLimits

0xbb75,	// (0x0003b135) form_field_data_wide_pane

0xbb95,	// (0x0003b155) form_field_popup_pane_ParamLimits

0xbb95,	// (0x0003b155) form_field_popup_pane

0xbbad,	// (0x0003b16d) form_field_popup_wide_pane_ParamLimits

0xbbad,	// (0x0003b16d) form_field_popup_wide_pane

0x08d2,	// (0x0002fe92) form_field_slider_pane_ParamLimits

0x08d2,	// (0x0002fe92) form_field_slider_pane

0x08e5,	// (0x0002fea5) form_field_slider_wide_pane_ParamLimits

0x08e5,	// (0x0002fea5) form_field_slider_wide_pane

0x3dd1,	// (0x00033391) data_form_pane

0xbbce,	// (0x0003b18e) form_field_data_pane_t1

0x3ddd,	// (0x0003339d) input_focus_pane

0x091a,	// (0x0002feda) data_form_wide_pane

0x0937,	// (0x0002fef7) form_field_data_wide_pane_t1

0x3b4e,	// (0x0003310e) input_focus_pane_cp6

0xbbe8,	// (0x0003b1a8) form_field_popup_pane_t1

0x3ddd,	// (0x0003339d) input_focus_pane_cp7

0x3e0b,	// (0x000333cb) list_form_pane

0x0979,	// (0x0002ff39) form_field_popup_wide_pane_t1

0x3ddd,	// (0x0003339d) input_focus_pane_cp8

0x3e17,	// (0x000333d7) list_form_wide_pane

0xbc0a,	// (0x0003b1ca) form_field_slider_pane_t1_ParamLimits

0xbc0a,	// (0x0003b1ca) form_field_slider_pane_t1

0xbc22,	// (0x0003b1e2) form_field_slider_pane_t2_ParamLimits

0xbc22,	// (0x0003b1e2) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003ec42) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003ec42) form_field_slider_pane_t

0x37e9,	// (0x00032da9) input_focus_pane_cp9_ParamLimits

0x37e9,	// (0x00032da9) input_focus_pane_cp9

0xbc37,	// (0x0003b1f7) slider_cont_pane_ParamLimits

0xbc37,	// (0x0003b1f7) slider_cont_pane

0x3e26,	// (0x000333e6) form_field_slider_wide_pane_t1_ParamLimits

0x3e26,	// (0x000333e6) form_field_slider_wide_pane_t1

0x09d5,	// (0x0002ff95) form_field_slider_wide_pane_t2_ParamLimits

0x09d5,	// (0x0002ff95) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0003ec47) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0003ec47) form_field_slider_wide_pane_t

0x37e9,	// (0x00032da9) input_focus_pane_cp10_ParamLimits

0x37e9,	// (0x00032da9) input_focus_pane_cp10

0xbc4b,	// (0x0003b20b) slider_cont_pane_cp1_ParamLimits

0xbc4b,	// (0x0003b20b) slider_cont_pane_cp1

0xbc5f,	// (0x0003b21f) slider_form_pane_cp

0x3e38,	// (0x000333f8) input_focus_pane_g1

0x3e40,	// (0x00033400) input_focus_pane_g2

0x3e48,	// (0x00033408) input_focus_pane_g3

0x3e50,	// (0x00033410) input_focus_pane_g4

0x3e58,	// (0x00033418) input_focus_pane_g5

0x3e60,	// (0x00033420) input_focus_pane_g6

0x3e68,	// (0x00033428) input_focus_pane_g7

0x3e70,	// (0x00033430) input_focus_pane_g8

0x3e78,	// (0x00033438) input_focus_pane_g9

0x2cd3,	// (0x00032293) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0003ec4c) input_focus_pane_g

0x58ca,	// (0x00034e8a) wait_border_pane_g3_copy1

0xbc67,	// (0x0003b227) data_form_pane_t1

0x2cd3,	// (0x00032293) wait_anim_pane_g1_copy1

0xc63f,	// (0x0003bbff) data_form_wide_pane_t1

0xbc81,	// (0x0003b241) list_form_graphic_pane_cp_ParamLimits

0xbc81,	// (0x0003b241) list_form_graphic_pane_cp

0x67f7,	// (0x00035db7) slider_form_pane_g1

0x6800,	// (0x00035dc0) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0003ef4a) slider_form_pane_g

0xbc81,	// (0x0003b241) list_form_graphic_pane_ParamLimits

0xbc81,	// (0x0003b241) list_form_graphic_pane

0x0a53,	// (0x00030013) list_form_graphic_pane_g1

0x0a5b,	// (0x0003001b) list_form_graphic_pane_t1_ParamLimits

0x0a5b,	// (0x0003001b) list_form_graphic_pane_t1

0x2dbd,	// (0x0003237d) list_highlight_pane_cp5_ParamLimits

0x2dbd,	// (0x0003237d) list_highlight_pane_cp5

0xbc93,	// (0x0003b253) find_pane_g1

0x3e80,	// (0x00033440) input_find_pane

0xbc9c,	// (0x0003b25c) input_find_pane_g1_ParamLimits

0xbc9c,	// (0x0003b25c) input_find_pane_g1

0xbca8,	// (0x0003b268) input_find_pane_t1_ParamLimits

0xbca8,	// (0x0003b268) input_find_pane_t1

0xbcbd,	// (0x0003b27d) input_find_pane_t2_ParamLimits

0xbcbd,	// (0x0003b27d) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003ec61) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003ec61) input_find_pane_t

0x3e89,	// (0x00033449) input_focus_pane_cp5_ParamLimits

0x3e89,	// (0x00033449) input_focus_pane_cp5

0x3ea3,	// (0x00033463) bg_popup_window_pane_cp2_ParamLimits

0x3ea3,	// (0x00033463) bg_popup_window_pane_cp2

0x3eb0,	// (0x00033470) listscroll_menu_pane_ParamLimits

0x3eb0,	// (0x00033470) listscroll_menu_pane

0xd20e,	// (0x0003c7ce) popup_submenu_window_ParamLimits

0xd20e,	// (0x0003c7ce) popup_submenu_window

0x3ee8,	// (0x000334a8) find_popup_pane_g1

0x3ef0,	// (0x000334b0) input_popup_find_pane_cp

0x3e89,	// (0x00033449) input_focus_pane_cp4_ParamLimits

0x3e89,	// (0x00033449) input_focus_pane_cp4

0x3f06,	// (0x000334c6) input_popup_find_pane_t1_ParamLimits

0x3f06,	// (0x000334c6) input_popup_find_pane_t1

0x2cdd,	// (0x0003229d) bg_popup_sub_pane_cp

0x3f34,	// (0x000334f4) listscroll_popup_sub_pane

0x3f3c,	// (0x000334fc) list_submenu_pane_ParamLimits

0x3f3c,	// (0x000334fc) list_submenu_pane

0x3f4d,	// (0x0003350d) scroll_pane_cp4

0x3f55,	// (0x00033515) list_single_popup_submenu_pane_ParamLimits

0x3f55,	// (0x00033515) list_single_popup_submenu_pane

0x3f69,	// (0x00033529) list_single_popup_submenu_pane_g1

0x3f71,	// (0x00033531) list_single_popup_submenu_pane_t1_ParamLimits

0x3f71,	// (0x00033531) list_single_popup_submenu_pane_t1

0x37e9,	// (0x00032da9) bg_active_tab_pane_cp1_ParamLimits

0x37e9,	// (0x00032da9) bg_active_tab_pane_cp1

0x3f86,	// (0x00033546) tabs_2_active_pane_g1

0xd248,	// (0x0003c808) tabs_2_active_pane_t1

0x37e9,	// (0x00032da9) bg_passive_tab_pane_cp1_ParamLimits

0x37e9,	// (0x00032da9) bg_passive_tab_pane_cp1

0x3f86,	// (0x00033546) tabs_2_passive_pane_g1

0xd248,	// (0x0003c808) tabs_2_passive_pane_t1

0x2dbd,	// (0x0003237d) bg_active_tab_pane_cp4

0xd25a,	// (0x0003c81a) tabs_2_long_active_pane_t1

0x4db1,	// (0x00034371) bg_passive_tab_pane_cp4

0x177e,	// (0x00030d3e) list_single_midp_graphic_pane_g4_ParamLimits

0x2dbd,	// (0x0003237d) bg_active_tab_pane_cp5

0xd26d,	// (0x0003c82d) tabs_3_long_active_pane_t1

0x4db1,	// (0x00034371) bg_passive_tab_pane_cp5

0x177e,	// (0x00030d3e) list_single_midp_graphic_pane_g4

0x2dbd,	// (0x0003237d) bg_popup_window_pane_cp13_ParamLimits

0x2dbd,	// (0x0003237d) bg_popup_window_pane_cp13

0x3fe8,	// (0x000335a8) listscroll_popup_fast_pane_ParamLimits

0x3fe8,	// (0x000335a8) listscroll_popup_fast_pane

0x3ff7,	// (0x000335b7) grid_popup_fast_pane_ParamLimits

0x3ff7,	// (0x000335b7) grid_popup_fast_pane

0x4009,	// (0x000335c9) scroll_pane_cp9_ParamLimits

0x4009,	// (0x000335c9) scroll_pane_cp9

0x8112,	// (0x000376d2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8112,	// (0x000376d2) list_single_graphic_hl_pane_t1_cp2

0x402d,	// (0x000335ed) input_focus_pane_cp20_ParamLimits

0x402d,	// (0x000335ed) input_focus_pane_cp20

0x403b,	// (0x000335fb) query_popup_data_pane_t1_ParamLimits

0x403b,	// (0x000335fb) query_popup_data_pane_t1

0x404e,	// (0x0003360e) query_popup_data_pane_t2_ParamLimits

0x404e,	// (0x0003360e) query_popup_data_pane_t2

0x4094,	// (0x00033654) query_popup_data_pane_t3_ParamLimits

0x4094,	// (0x00033654) query_popup_data_pane_t3

0x40d5,	// (0x00033695) query_popup_data_pane_t4_ParamLimits

0x40d5,	// (0x00033695) query_popup_data_pane_t4

0x4111,	// (0x000336d1) query_popup_data_pane_t5_ParamLimits

0x4111,	// (0x000336d1) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0003ec66) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0003ec66) query_popup_data_pane_t

0x3e38,	// (0x000333f8) bg_set_opt_pane_g1

0x3e40,	// (0x00033400) bg_set_opt_pane_g2

0x3e48,	// (0x00033408) bg_set_opt_pane_g3

0x3e50,	// (0x00033410) bg_set_opt_pane_g4

0x3e58,	// (0x00033418) bg_set_opt_pane_g5

0x3e60,	// (0x00033420) bg_set_opt_pane_g6

0x3e68,	// (0x00033428) bg_set_opt_pane_g7

0x3e70,	// (0x00033430) bg_set_opt_pane_g8

0x3e78,	// (0x00033438) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0003ec71) bg_set_opt_pane_g

0x0dd6,	// (0x00030396) control_top_pane_stacon_ParamLimits

0x0dd6,	// (0x00030396) control_top_pane_stacon

0x0e29,	// (0x000303e9) signal_pane_stacon_ParamLimits

0x0e29,	// (0x000303e9) signal_pane_stacon

0x4701,	// (0x00033cc1) stacon_top_pane_g1_ParamLimits

0x4701,	// (0x00033cc1) stacon_top_pane_g1

0x0e4e,	// (0x0003040e) title_pane_stacon_ParamLimits

0x0e4e,	// (0x0003040e) title_pane_stacon

0x0e78,	// (0x00030438) uni_indicator_pane_stacon_ParamLimits

0x0e78,	// (0x00030438) uni_indicator_pane_stacon

0x0e8d,	// (0x0003044d) battery_pane_stacon_ParamLimits

0x0e8d,	// (0x0003044d) battery_pane_stacon

0x0ed1,	// (0x00030491) control_bottom_pane_stacon_ParamLimits

0x0ed1,	// (0x00030491) control_bottom_pane_stacon

0x0ef4,	// (0x000304b4) navi_pane_stacon_ParamLimits

0x0ef4,	// (0x000304b4) navi_pane_stacon

0x4723,	// (0x00033ce3) stacon_bottom_pane_g1_ParamLimits

0x4723,	// (0x00033ce3) stacon_bottom_pane_g1

0x0aaf,	// (0x0003006f) aid_levels_signal_lsc_ParamLimits

0x0aaf,	// (0x0003006f) aid_levels_signal_lsc

0x0ac5,	// (0x00030085) signal_pane_stacon_g1_ParamLimits

0x0ac5,	// (0x00030085) signal_pane_stacon_g1

0x0ad9,	// (0x00030099) signal_pane_stacon_g2_ParamLimits

0x0ad9,	// (0x00030099) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0003ec84) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003ec84) signal_pane_stacon_g

0x0b0e,	// (0x000300ce) title_pane_stacon_t1_ParamLimits

0x0b0e,	// (0x000300ce) title_pane_stacon_t1

0x4155,	// (0x00033715) uni_indicator_pane_stacon_g1

0x415f,	// (0x0003371f) uni_indicator_pane_stacon_g2

0x4169,	// (0x00033729) uni_indicator_pane_stacon_g3

0x4173,	// (0x00033733) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0003ec90) uni_indicator_pane_stacon_g

0x0b33,	// (0x000300f3) control_top_pane_stacon_g1

0x0b3b,	// (0x000300fb) control_top_pane_stacon_t1_ParamLimits

0x0b3b,	// (0x000300fb) control_top_pane_stacon_t1

0x0b72,	// (0x00030132) aid_levels_battery_lsc_ParamLimits

0x0b72,	// (0x00030132) aid_levels_battery_lsc

0x0b89,	// (0x00030149) battery_pane_stacon_g1_ParamLimits

0x0b89,	// (0x00030149) battery_pane_stacon_g1

0x0b9c,	// (0x0003015c) battery_pane_stacon_g2_ParamLimits

0x0b9c,	// (0x0003015c) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0003ec99) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0003ec99) battery_pane_stacon_g

0x0bda,	// (0x0003019a) navi_icon_pane_stacon

0x0bee,	// (0x000301ae) navi_navi_pane_stacon

0x0bda,	// (0x0003019a) navi_text_pane_stacon

0x0b33,	// (0x000300f3) control_bottom_pane_stacon_g1

0x0c02,	// (0x000301c2) control_bottom_pane_stacon_t1_ParamLimits

0x0c02,	// (0x000301c2) control_bottom_pane_stacon_t1

0xd27f,	// (0x0003c83f) grid_app_pane_ParamLimits

0xd27f,	// (0x0003c83f) grid_app_pane

0xd2b7,	// (0x0003c877) scroll_pane_cp15_ParamLimits

0xd2b7,	// (0x0003c877) scroll_pane_cp15

0xd2cc,	// (0x0003c88c) cell_app_pane_ParamLimits

0xd2cc,	// (0x0003c88c) cell_app_pane

0xd311,	// (0x0003c8d1) cell_app_pane_g1_ParamLimits

0xd311,	// (0x0003c8d1) cell_app_pane_g1

0x4216,	// (0x000337d6) cell_app_pane_g2_ParamLimits

0x4216,	// (0x000337d6) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0003ec9e) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0003ec9e) cell_app_pane_g

0xd335,	// (0x0003c8f5) cell_app_pane_t1_ParamLimits

0xd335,	// (0x0003c8f5) cell_app_pane_t1

0x4239,	// (0x000337f9) grid_highlight_pane_ParamLimits

0x4239,	// (0x000337f9) grid_highlight_pane

0x3e38,	// (0x000333f8) cell_highlight_pane_g1

0x3e40,	// (0x00033400) cell_highlight_pane_g2

0x3e48,	// (0x00033408) cell_highlight_pane_g3

0x3e50,	// (0x00033410) cell_highlight_pane_g4

0x3e58,	// (0x00033418) cell_highlight_pane_g5

0x3e60,	// (0x00033420) cell_highlight_pane_g6

0x3e68,	// (0x00033428) cell_highlight_pane_g7

0x3e70,	// (0x00033430) cell_highlight_pane_g8

0x3e78,	// (0x00033438) cell_highlight_pane_g9

0x2cd3,	// (0x00032293) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0003ec4c) cell_highlight_pane_g

0x424a,	// (0x0003380a) bg_scroll_pane

0x0c4c,	// (0x0003020c) scroll_handle_pane

0x4291,	// (0x00033851) scroll_bg_pane_g1

0x42a6,	// (0x00033866) scroll_bg_pane_g2

0x42be,	// (0x0003387e) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0003eca3) scroll_bg_pane_g

0x42d3,	// (0x00033893) scroll_handle_focus_pane_ParamLimits

0x42d3,	// (0x00033893) scroll_handle_focus_pane

0x4291,	// (0x00033851) scroll_handle_pane_g1

0x42e0,	// (0x000338a0) scroll_handle_pane_g2

0x42be,	// (0x0003387e) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0003ecaa) scroll_handle_pane_g

0x3e89,	// (0x00033449) bg_popup_sub_pane_cp21_ParamLimits

0x3e89,	// (0x00033449) bg_popup_sub_pane_cp21

0x42f4,	// (0x000338b4) popup_fep_japan_predictive_window_t1_ParamLimits

0x42f4,	// (0x000338b4) popup_fep_japan_predictive_window_t1

0x430e,	// (0x000338ce) popup_fep_japan_predictive_window_t2_ParamLimits

0x430e,	// (0x000338ce) popup_fep_japan_predictive_window_t2

0x4341,	// (0x00033901) popup_fep_japan_predictive_window_t3_ParamLimits

0x4341,	// (0x00033901) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0003ecb1) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0003ecb1) popup_fep_japan_predictive_window_t

0x2cdd,	// (0x0003229d) bg_popup_sub_pane_cp23

0x4378,	// (0x00033938) listscroll_japin_cand_pane

0x4380,	// (0x00033940) popup_fep_japan_candidate_window_t1

0x438e,	// (0x0003394e) candidate_pane_ParamLimits

0x438e,	// (0x0003394e) candidate_pane

0x43a0,	// (0x00033960) scroll_pane_cp30

0x43a8,	// (0x00033968) list_single_popup_jap_candidate_pane_ParamLimits

0x43a8,	// (0x00033968) list_single_popup_jap_candidate_pane

0x2cdd,	// (0x0003229d) list_highlight_pane_cp30

0x43bd,	// (0x0003397d) list_single_popup_jap_candidate_pane_t1

0x43cc,	// (0x0003398c) level_1_signal

0x43de,	// (0x0003399e) level_2_signal

0x43f1,	// (0x000339b1) level_3_signal

0x4404,	// (0x000339c4) level_4_signal

0x4417,	// (0x000339d7) level_5_signal

0x442a,	// (0x000339ea) level_6_signal

0x443d,	// (0x000339fd) level_7_signal

0x43cc,	// (0x0003398c) level_1_battery

0x43de,	// (0x0003399e) level_2_battery

0x43f1,	// (0x000339b1) level_3_battery

0x4404,	// (0x000339c4) level_4_battery

0x4417,	// (0x000339d7) level_5_battery

0x442a,	// (0x000339ea) level_6_battery

0x443d,	// (0x000339fd) level_7_battery

0x4468,	// (0x00033a28) list_menu_pane_ParamLimits

0x4468,	// (0x00033a28) list_menu_pane

0x447e,	// (0x00033a3e) scroll_pane_cp25_ParamLimits

0x447e,	// (0x00033a3e) scroll_pane_cp25

0x4497,	// (0x00033a57) list_double2_graphic_pane_cp2_ParamLimits

0x4497,	// (0x00033a57) list_double2_graphic_pane_cp2

0x4497,	// (0x00033a57) list_double2_large_graphic_pane_cp2_ParamLimits

0x4497,	// (0x00033a57) list_double2_large_graphic_pane_cp2

0x4497,	// (0x00033a57) list_double2_pane_cp2_ParamLimits

0x4497,	// (0x00033a57) list_double2_pane_cp2

0x4497,	// (0x00033a57) list_double_graphic_pane_cp2_ParamLimits

0x4497,	// (0x00033a57) list_double_graphic_pane_cp2

0x4497,	// (0x00033a57) list_double_large_graphic_pane_cp2_ParamLimits

0x4497,	// (0x00033a57) list_double_large_graphic_pane_cp2

0x4497,	// (0x00033a57) list_double_number_pane_cp2_ParamLimits

0x4497,	// (0x00033a57) list_double_number_pane_cp2

0x4497,	// (0x00033a57) list_double_pane_cp2_ParamLimits

0x4497,	// (0x00033a57) list_double_pane_cp2

0xd34c,	// (0x0003c90c) list_single_2graphic_pane_cp2_ParamLimits

0xd34c,	// (0x0003c90c) list_single_2graphic_pane_cp2

0xd34c,	// (0x0003c90c) list_single_graphic_heading_pane_cp2_ParamLimits

0xd34c,	// (0x0003c90c) list_single_graphic_heading_pane_cp2

0xd34c,	// (0x0003c90c) list_single_graphic_pane_cp2_ParamLimits

0xd34c,	// (0x0003c90c) list_single_graphic_pane_cp2

0xd34c,	// (0x0003c90c) list_single_heading_pane_cp2_ParamLimits

0xd34c,	// (0x0003c90c) list_single_heading_pane_cp2

0x44d4,	// (0x00033a94) list_single_large_graphic_pane_cp2_ParamLimits

0x44d4,	// (0x00033a94) list_single_large_graphic_pane_cp2

0xd34c,	// (0x0003c90c) list_single_number_heading_pane_cp2_ParamLimits

0xd34c,	// (0x0003c90c) list_single_number_heading_pane_cp2

0xd34c,	// (0x0003c90c) list_single_number_pane_cp2_ParamLimits

0xd34c,	// (0x0003c90c) list_single_number_pane_cp2

0xd34c,	// (0x0003c90c) list_single_pane_cp2_ParamLimits

0xd34c,	// (0x0003c90c) list_single_pane_cp2

0x4550,	// (0x00033b10) bg_popup_sub_pane_cp22

0x0cfe,	// (0x000302be) popup_side_volume_key_window_g1

0x0d28,	// (0x000302e8) popup_side_volume_key_window_t1

0x0d44,	// (0x00030304) volume_small_pane_cp1

0x37e9,	// (0x00032da9) bg_popup_sub_pane_cp24_ParamLimits

0x37e9,	// (0x00032da9) bg_popup_sub_pane_cp24

0x4566,	// (0x00033b26) fep_china_uni_candidate_pane_ParamLimits

0x4566,	// (0x00033b26) fep_china_uni_candidate_pane

0x457a,	// (0x00033b3a) fep_china_uni_entry_pane

0x458a,	// (0x00033b4a) popup_fep_china_uni_window_g1

0x45a6,	// (0x00033b66) fep_china_uni_entry_pane_g1

0x45ae,	// (0x00033b6e) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0003ece2) fep_china_uni_entry_pane_g

0x45b6,	// (0x00033b76) fep_entry_item_pane

0x45c0,	// (0x00033b80) fep_candidate_item_pane

0x45c8,	// (0x00033b88) fep_china_uni_candidate_pane_g1

0x45d0,	// (0x00033b90) fep_china_uni_candidate_pane_g2

0x45d8,	// (0x00033b98) fep_china_uni_candidate_pane_g3

0x45e0,	// (0x00033ba0) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0003ece7) fep_china_uni_candidate_pane_g

0x2cd3,	// (0x00032293) fep_entry_item_pane_g1

0x45e8,	// (0x00033ba8) fep_entry_item_pane_t1_ParamLimits

0x45e8,	// (0x00033ba8) fep_entry_item_pane_t1

0x45fe,	// (0x00033bbe) fep_candidate_item_pane_t1_ParamLimits

0x45fe,	// (0x00033bbe) fep_candidate_item_pane_t1

0x4613,	// (0x00033bd3) fep_candidate_item_pane_t2_ParamLimits

0x4613,	// (0x00033bd3) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003ecf0) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003ecf0) fep_candidate_item_pane_t

0x2dbd,	// (0x0003237d) list_highlight_pane_cp31_ParamLimits

0x2dbd,	// (0x0003237d) list_highlight_pane_cp31

0x4625,	// (0x00033be5) level_1_signal_lsc

0x462e,	// (0x00033bee) level_2_signal_lsc

0x4637,	// (0x00033bf7) level_3_signal_lsc

0x4640,	// (0x00033c00) level_4_signal_lsc

0x4649,	// (0x00033c09) level_5_signal_lsc

0x4652,	// (0x00033c12) level_6_signal_lsc

0x465b,	// (0x00033c1b) level_7_signal_lsc

0x465b,	// (0x00033c1b) level_1_battery_lsc

0x4664,	// (0x00033c24) level_2_battery_lsc

0x466d,	// (0x00033c2d) level_3_battery_lsc

0x4676,	// (0x00033c36) level_4_battery_lsc

0x467f,	// (0x00033c3f) level_5_battery_lsc

0x4688,	// (0x00033c48) level_6_battery_lsc

0x4625,	// (0x00033be5) level_7_battery_lsc

0x4691,	// (0x00033c51) scroll_handle_focus_pane_g1

0x469a,	// (0x00033c5a) scroll_handle_focus_pane_g2

0x46a3,	// (0x00033c63) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0003ecf5) scroll_handle_focus_pane_g

0xbcdb,	// (0x0003b29b) list_single_2graphic_pane_g1_ParamLimits

0xbcdb,	// (0x0003b29b) list_single_2graphic_pane_g1

0xb7bb,	// (0x0003ad7b) list_single_2graphic_pane_g2_ParamLimits

0xb7bb,	// (0x0003ad7b) list_single_2graphic_pane_g2

0x172f,	// (0x00030cef) list_single_2graphic_pane_g3_ParamLimits

0x172f,	// (0x00030cef) list_single_2graphic_pane_g3

0xbce7,	// (0x0003b2a7) list_single_2graphic_pane_g4_ParamLimits

0xbce7,	// (0x0003b2a7) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0003ecfc) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0003ecfc) list_single_2graphic_pane_g

0xbcf3,	// (0x0003b2b3) list_single_2graphic_pane_t1_ParamLimits

0xbcf3,	// (0x0003b2b3) list_single_2graphic_pane_t1

0xbd21,	// (0x0003b2e1) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbd21,	// (0x0003b2e1) list_double2_graphic_large_graphic_pane_g1

0xb826,	// (0x0003ade6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb826,	// (0x0003ade6) list_double2_graphic_large_graphic_pane_g2

0xb837,	// (0x0003adf7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb837,	// (0x0003adf7) list_double2_graphic_large_graphic_pane_g3

0xbd33,	// (0x0003b2f3) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbd33,	// (0x0003b2f3) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0003ed05) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0003ed05) list_double2_graphic_large_graphic_pane_g

0xbd3f,	// (0x0003b2ff) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbd3f,	// (0x0003b2ff) list_double2_graphic_large_graphic_pane_t1

0xbd55,	// (0x0003b315) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbd55,	// (0x0003b315) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003ed0e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003ed0e) list_double2_graphic_large_graphic_pane_t

0x47eb,	// (0x00033dab) popup_fast_swap_window_ParamLimits

0x47eb,	// (0x00033dab) popup_fast_swap_window

0x4807,	// (0x00033dc7) popup_side_volume_key_window

0x4823,	// (0x00033de3) stacon_top_pane

0x482d,	// (0x00033ded) status_pane_ParamLimits

0x482d,	// (0x00033ded) status_pane

0xd409,	// (0x0003c9c9) status_small_pane

0x2cdd,	// (0x0003229d) control_pane

0x2cdd,	// (0x0003229d) stacon_bottom_pane

0x3dc0,	// (0x00033380) scroll_pane_cp121

0x3db7,	// (0x00033377) set_content_pane

0x46ac,	// (0x00033c6c) bg_active_tab_pane_g1_cp1

0x46b5,	// (0x00033c75) bg_active_tab_pane_g2_cp1

0x46be,	// (0x00033c7e) bg_active_tab_pane_g3_cp1

0x46ac,	// (0x00033c6c) bg_passive_tab_pane_g1_cp1

0x46b5,	// (0x00033c75) bg_passive_tab_pane_g2_cp1

0x46be,	// (0x00033c7e) bg_passive_tab_pane_g3_cp1

0x46c7,	// (0x00033c87) bg_active_tab_pane_g1_cp2

0x46b5,	// (0x00033c75) bg_active_tab_pane_g2_cp2

0x46d0,	// (0x00033c90) bg_active_tab_pane_g3_cp2

0x46c7,	// (0x00033c87) bg_passive_tab_pane_g1_cp2

0x46b5,	// (0x00033c75) bg_passive_tab_pane_g2_cp2

0x46d0,	// (0x00033c90) bg_passive_tab_pane_g3_cp2

0x46d9,	// (0x00033c99) bg_active_tab_pane_g1_cp3

0x46b5,	// (0x00033c75) bg_active_tab_pane_g2_cp3

0x46e2,	// (0x00033ca2) bg_active_tab_pane_g3_cp3

0x46d9,	// (0x00033c99) bg_passive_tab_pane_g1_cp3

0x46b5,	// (0x00033c75) bg_passive_tab_pane_g2_cp3

0x46e2,	// (0x00033ca2) bg_passive_tab_pane_g3_cp3

0x46eb,	// (0x00033cab) bg_active_tab_pane_g1_cp4

0x46b5,	// (0x00033c75) bg_active_tab_pane_g2_cp4

0x46f6,	// (0x00033cb6) bg_active_tab_pane_g3_cp4

0x46eb,	// (0x00033cab) bg_passive_tab_pane_g1_cp4

0x46b5,	// (0x00033c75) bg_passive_tab_pane_g2_cp4

0x46f6,	// (0x00033cb6) bg_passive_tab_pane_g3_cp4

0x473f,	// (0x00033cff) bg_active_tab_pane_g1_cp5

0x46b5,	// (0x00033c75) bg_active_tab_pane_g2_cp5

0x4748,	// (0x00033d08) bg_active_tab_pane_g3_cp5

0x473f,	// (0x00033cff) bg_passive_tab_pane_g1_cp5

0x46b5,	// (0x00033c75) bg_passive_tab_pane_g2_cp5

0x4748,	// (0x00033d08) bg_passive_tab_pane_g3_cp5

0x6df4,	// (0x000363b4) list_set_graphic_pane_ParamLimits

0x6df4,	// (0x000363b4) list_set_graphic_pane

0x2cdd,	// (0x0003229d) bg_set_opt_pane_cp4

0xd3d9,	// (0x0003c999) list_set_graphic_pane_g1_ParamLimits

0xd3d9,	// (0x0003c999) list_set_graphic_pane_g1

0xd3e5,	// (0x0003c9a5) list_set_graphic_pane_g2_ParamLimits

0xd3e5,	// (0x0003c9a5) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003ed13) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003ed13) list_set_graphic_pane_g

0x0009,

0xfabc,	// (0x0003f07c) volume_small_pane_cp_g

0x479e,	// (0x00033d5e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x479e,	// (0x00033d5e) list_double2_large_graphic_pane_g1_cp2

0x47aa,	// (0x00033d6a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x47aa,	// (0x00033d6a) list_double2_large_graphic_pane_g2_cp2

0x47bb,	// (0x00033d7b) list_double2_large_graphic_pane_g3_cp2

0x47c3,	// (0x00033d83) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x47c3,	// (0x00033d83) list_double2_large_graphic_pane_t1_cp2

0x47d9,	// (0x00033d99) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x47d9,	// (0x00033d99) list_double2_large_graphic_pane_t2_cp2

0x63a9,	// (0x00035969) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x63a9,	// (0x00035969) list_double_large_graphic_pane_g1_cp2

0x63ba,	// (0x0003597a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x63ba,	// (0x0003597a) list_double_large_graphic_pane_g2_cp2

0x4954,	// (0x00033f14) list_double_large_graphic_pane_g3_cp2

0x63cb,	// (0x0003598b) list_double_large_graphic_pane_g4_cp

0x63d3,	// (0x00035993) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x63d3,	// (0x00035993) list_double_large_graphic_pane_t1_cp2

0x63ea,	// (0x000359aa) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x63ea,	// (0x000359aa) list_double_large_graphic_pane_t2_cp2

0x4846,	// (0x00033e06) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4846,	// (0x00033e06) list_double2_graphic_pane_g1_cp2

0x4854,	// (0x00033e14) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4854,	// (0x00033e14) list_double2_graphic_pane_g2_cp2

0x4865,	// (0x00033e25) list_double2_graphic_pane_g3_cp2

0x486f,	// (0x00033e2f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x486f,	// (0x00033e2f) list_double2_graphic_pane_t1_cp2

0x4885,	// (0x00033e45) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4885,	// (0x00033e45) list_double2_graphic_pane_t2_cp2

0x4897,	// (0x00033e57) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4897,	// (0x00033e57) list_single_number_heading_pane_g1_cp2

0x48a3,	// (0x00033e63) list_single_number_heading_pane_g2_cp2

0x48ab,	// (0x00033e6b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x48ab,	// (0x00033e6b) list_single_number_heading_pane_t1_cp2

0x48c1,	// (0x00033e81) list_single_number_heading_pane_t2_cp2_ParamLimits

0x48c1,	// (0x00033e81) list_single_number_heading_pane_t2_cp2

0x48d3,	// (0x00033e93) list_single_number_heading_pane_t3_cp2_ParamLimits

0x48d3,	// (0x00033e93) list_single_number_heading_pane_t3_cp2

0x4897,	// (0x00033e57) list_single_heading_pane_g1_cp2_ParamLimits

0x4897,	// (0x00033e57) list_single_heading_pane_g1_cp2

0x48a3,	// (0x00033e63) list_single_heading_pane_g2_cp2

0x48ab,	// (0x00033e6b) list_single_heading_pane_t1_cp2_ParamLimits

0x48ab,	// (0x00033e6b) list_single_heading_pane_t1_cp2

0x61b1,	// (0x00035771) list_single_heading_pane_t2_cp2_ParamLimits

0x61b1,	// (0x00035771) list_single_heading_pane_t2_cp2

0x60f9,	// (0x000356b9) list_double_graphic_pane_g1_cp2_ParamLimits

0x60f9,	// (0x000356b9) list_double_graphic_pane_g1_cp2

0x6105,	// (0x000356c5) list_double_graphic_pane_g2_cp2_ParamLimits

0x6105,	// (0x000356c5) list_double_graphic_pane_g2_cp2

0x6114,	// (0x000356d4) list_double_graphic_pane_g3_cp2

0x611c,	// (0x000356dc) list_double_graphic_pane_t1_cp2_ParamLimits

0x611c,	// (0x000356dc) list_double_graphic_pane_t1_cp2

0x6132,	// (0x000356f2) list_double_graphic_pane_t2_cp2_ParamLimits

0x6132,	// (0x000356f2) list_double_graphic_pane_t2_cp2

0x4948,	// (0x00033f08) list_double_number_pane_g1_cp2_ParamLimits

0x4948,	// (0x00033f08) list_double_number_pane_g1_cp2

0x4954,	// (0x00033f14) list_double_number_pane_g2_cp2

0x60bd,	// (0x0003567d) list_double_number_pane_t1_cp2_ParamLimits

0x60bd,	// (0x0003567d) list_double_number_pane_t1_cp2

0x60d1,	// (0x00035691) list_double_number_pane_t2_cp2_ParamLimits

0x60d1,	// (0x00035691) list_double_number_pane_t2_cp2

0x60e7,	// (0x000356a7) list_double_number_pane_t3_cp2_ParamLimits

0x60e7,	// (0x000356a7) list_double_number_pane_t3_cp2

0x5f9a,	// (0x0003555a) list_single_graphic_pane_g1_cp2_ParamLimits

0x5f9a,	// (0x0003555a) list_single_graphic_pane_g1_cp2

0x49ac,	// (0x00033f6c) list_single_graphic_pane_g2_cp2_ParamLimits

0x49ac,	// (0x00033f6c) list_single_graphic_pane_g2_cp2

0x49b8,	// (0x00033f78) list_single_graphic_pane_g3_cp2

0x5f70,	// (0x00035530) list_single_graphic_pane_t1_cp2_ParamLimits

0x5f70,	// (0x00035530) list_single_graphic_pane_t1_cp2

0x49ac,	// (0x00033f6c) list_single_number_pane_g1_cp2_ParamLimits

0x49ac,	// (0x00033f6c) list_single_number_pane_g1_cp2

0x49b8,	// (0x00033f78) list_single_number_pane_g2_cp2

0x5f70,	// (0x00035530) list_single_number_pane_t1_cp2_ParamLimits

0x5f70,	// (0x00035530) list_single_number_pane_t1_cp2

0x5f86,	// (0x00035546) list_single_number_pane_t2_cp2_ParamLimits

0x5f86,	// (0x00035546) list_single_number_pane_t2_cp2

0x47aa,	// (0x00033d6a) list_double2_pane_g1_cp2_ParamLimits

0x47aa,	// (0x00033d6a) list_double2_pane_g1_cp2

0x47bb,	// (0x00033d7b) list_double2_pane_g2_cp2

0x4920,	// (0x00033ee0) list_double2_pane_t1_cp2_ParamLimits

0x4920,	// (0x00033ee0) list_double2_pane_t1_cp2

0x4936,	// (0x00033ef6) list_double2_pane_t2_cp2_ParamLimits

0x4936,	// (0x00033ef6) list_double2_pane_t2_cp2

0x4948,	// (0x00033f08) list_double_pane_g1_cp2_ParamLimits

0x4948,	// (0x00033f08) list_double_pane_g1_cp2

0x4954,	// (0x00033f14) list_double_pane_g2_cp2

0x495c,	// (0x00033f1c) list_double_pane_t1_cp2_ParamLimits

0x495c,	// (0x00033f1c) list_double_pane_t1_cp2

0x4972,	// (0x00033f32) list_double_pane_t2_cp2_ParamLimits

0x4972,	// (0x00033f32) list_double_pane_t2_cp2

0x499c,	// (0x00033f5c) list_single_pane_cp2_g3

0x49ac,	// (0x00033f6c) list_single_pane_g1_cp2_ParamLimits

0x49ac,	// (0x00033f6c) list_single_pane_g1_cp2

0x49b8,	// (0x00033f78) list_single_pane_g2_cp2

0x49c0,	// (0x00033f80) list_single_pane_t1_cp2_ParamLimits

0x49c0,	// (0x00033f80) list_single_pane_t1_cp2

0x49d8,	// (0x00033f98) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x49d8,	// (0x00033f98) list_single_large_graphic_pane_g1_cp2

0x49e4,	// (0x00033fa4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x49e4,	// (0x00033fa4) list_single_large_graphic_pane_g2_cp2

0x49f0,	// (0x00033fb0) list_single_large_graphic_pane_g3_cp2

0x49f8,	// (0x00033fb8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x49f8,	// (0x00033fb8) list_single_large_graphic_pane_g4_cp1

0x4a12,	// (0x00033fd2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4a12,	// (0x00033fd2) list_single_large_graphic_pane_t1_cp2

0x5f3c,	// (0x000354fc) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5f3c,	// (0x000354fc) list_single_graphic_heading_pane_g1_cp2

0x5f09,	// (0x000354c9) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5f09,	// (0x000354c9) list_single_graphic_heading_pane_g4_cp2

0x49b8,	// (0x00033f78) list_single_graphic_heading_pane_g5_cp2

0x5f48,	// (0x00035508) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5f48,	// (0x00035508) list_single_graphic_heading_pane_t1_cp2

0x5f5e,	// (0x0003551e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5f5e,	// (0x0003551e) list_single_graphic_heading_pane_t2_cp2

0x5efd,	// (0x000354bd) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5efd,	// (0x000354bd) list_single_2graphic_pane_g1_cp2

0x5f09,	// (0x000354c9) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5f09,	// (0x000354c9) list_single_2graphic_pane_g2_cp2

0x49b8,	// (0x00033f78) list_single_2graphic_pane_g3_cp2

0x5f1a,	// (0x000354da) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5f1a,	// (0x000354da) list_single_2graphic_pane_g4_cp2

0x5f26,	// (0x000354e6) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5f26,	// (0x000354e6) list_single_2graphic_pane_t1_cp2

0x2cd3,	// (0x00032293) list_highlight_pane_g10_cp1

0x5ad5,	// (0x00035095) list_highlight_pane_g1_cp1

0x5add,	// (0x0003509d) list_highlight_pane_g2_cp1

0x5ae5,	// (0x000350a5) list_highlight_pane_g3_cp1

0x5aed,	// (0x000350ad) list_highlight_pane_g4_cp1

0x5af5,	// (0x000350b5) list_highlight_pane_g5_cp1

0x5afd,	// (0x000350bd) list_highlight_pane_g6_cp1

0x5b05,	// (0x000350c5) list_highlight_pane_g7_cp1

0x5b0d,	// (0x000350cd) list_highlight_pane_g8_cp1

0x5b15,	// (0x000350d5) list_highlight_pane_g9_cp1

0xda4b,	// (0x0003d00b) form_field_slider_pane_t3

0xda59,	// (0x0003d019) form_field_slider_pane_t4

0x5a11,	// (0x00034fd1) slider_form_pane_ParamLimits

0x5a11,	// (0x00034fd1) slider_form_pane

0x2cdd,	// (0x0003229d) control_abbreviations

0x2cdd,	// (0x0003229d) control_conventions

0x2cdd,	// (0x0003229d) control_definitions

0x2cdd,	// (0x0003229d) format_table_attribute

0x61fb,	// (0x000357bb) bg_popup_preview_window_pane_g9

0x2cdd,	// (0x0003229d) format_table_data2

0x2cdd,	// (0x0003229d) format_table_data3

0x2cdd,	// (0x0003229d) format_table_data_example

0x0008,

0x2cdd,	// (0x0003229d) intro_purpose

0xf8ea,	// (0x0003eeaa) bg_popup_preview_window_pane_g

0x2cdd,	// (0x0003229d) texts_category

0x2cdd,	// (0x0003229d) texts_graphics

0x4a28,	// (0x00033fe8) text_digital

0x4a37,	// (0x00033ff7) text_primary

0x4a46,	// (0x00034006) text_primary_small

0x4a55,	// (0x00034015) text_secondary

0x4a64,	// (0x00034024) text_title

0x6936,	// (0x00035ef6) bg_passive_tab_pane_g1_cp3_srt

0x46b5,	// (0x00033c75) bg_passive_tab_pane_g2_cp3_srt

0x693f,	// (0x00035eff) bg_passive_tab_pane_g3_cp3_srt

0x37e9,	// (0x00032da9) bg_active_tab_pane_cp3_srt_ParamLimits

0x37e9,	// (0x00032da9) bg_active_tab_pane_cp3_srt

0x6948,	// (0x00035f08) tabs_4_active_pane_srt_g1

0xdd8e,	// (0x0003d34e) tabs_4_active_pane_srt_t1_ParamLimits

0xdd8e,	// (0x0003d34e) tabs_4_active_pane_srt_t1

0x6936,	// (0x00035ef6) bg_active_tab_pane_g1_cp3_copy1

0x46b5,	// (0x00033c75) bg_active_tab_pane_g2_cp3_copy1

0x693f,	// (0x00035eff) bg_active_tab_pane_g3_cp3_copy1

0x2dbd,	// (0x0003237d) tabs_2_long_active_pane_srt_ParamLimits

0x2dbd,	// (0x0003237d) tabs_2_long_active_pane_srt

0x2dbd,	// (0x0003237d) tabs_2_long_passive_pane_srt_ParamLimits

0x2dbd,	// (0x0003237d) tabs_2_long_passive_pane_srt

0x4db1,	// (0x00034371) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4db1,	// (0x00034371) bg_passive_tab_pane_cp4_srt

0x662a,	// (0x00035bea) bg_passive_tab_pane_g1_cp4_srt

0x46b5,	// (0x00033c75) bg_passive_tab_pane_g2_cp4_srt

0x6633,	// (0x00035bf3) bg_passive_tab_pane_g3_cp4_srt

0x2dbd,	// (0x0003237d) bg_active_tab_pane_cp4_srt_ParamLimits

0x2dbd,	// (0x0003237d) bg_active_tab_pane_cp4_srt

0xdbb8,	// (0x0003d178) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdbb8,	// (0x0003d178) tabs_2_long_active_pane_srt_t1

0x662a,	// (0x00035bea) bg_active_tab_pane_g1_cp4_srt

0x46b5,	// (0x00033c75) bg_active_tab_pane_g2_cp4_srt

0x6633,	// (0x00035bf3) bg_active_tab_pane_g3_cp4_srt

0x37e9,	// (0x00032da9) tabs_3_long_active_pane_srt_ParamLimits

0x37e9,	// (0x00032da9) tabs_3_long_active_pane_srt

0x37e9,	// (0x00032da9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x37e9,	// (0x00032da9) tabs_3_long_passive_pane_cp_srt

0x37e9,	// (0x00032da9) tabs_3_long_passive_pane_srt_ParamLimits

0x37e9,	// (0x00032da9) tabs_3_long_passive_pane_srt

0x4db1,	// (0x00034371) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4db1,	// (0x00034371) bg_passive_tab_pane_cp5_srt

0x473f,	// (0x00033cff) bg_passive_tab_pane_g1_cp5_srt

0x46b5,	// (0x00033c75) bg_passive_tab_pane_g2_cp5_srt

0x4748,	// (0x00033d08) bg_passive_tab_pane_g3_cp5_srt

0x2dbd,	// (0x0003237d) bg_active_tab_pane_cp5_srt_ParamLimits

0x2dbd,	// (0x0003237d) bg_active_tab_pane_cp5_srt

0xdba2,	// (0x0003d162) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdba2,	// (0x0003d162) tabs_3_long_active_pane_srt_t1

0x473f,	// (0x00033cff) bg_active_tab_pane_g1_cp5_srt

0x46b5,	// (0x00033c75) bg_active_tab_pane_g2_cp5_srt

0x4748,	// (0x00033d08) bg_active_tab_pane_g3_cp5_srt

0x660a,	// (0x00035bca) navi_text_pane_srt_t1

0x6602,	// (0x00035bc2) navi_icon_pane_srt_g1

0x4c2d,	// (0x000341ed) midp_editing_number_pane_srt

0x4a73,	// (0x00034033) midp_ticker_pane_srt

0x4c35,	// (0x000341f5) midp_ticker_pane_srt_g1

0x4c3d,	// (0x000341fd) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003ed32) midp_ticker_pane_srt_g

0x4c45,	// (0x00034205) midp_ticker_pane_srt_t1

0x65f3,	// (0x00035bb3) midp_editing_number_pane_t1_copy1

0x4db1,	// (0x00034371) listscroll_midp_pane

0x4db1,	// (0x00034371) midp_form_pane

0x4adf,	// (0x0003409f) midp_info_popup_window_ParamLimits

0x4adf,	// (0x0003409f) midp_info_popup_window

0x3e89,	// (0x00033449) bg_popup_sub_pane_cp50_ParamLimits

0x3e89,	// (0x00033449) bg_popup_sub_pane_cp50

0x570d,	// (0x00034ccd) listscroll_midp_info_pane_ParamLimits

0x570d,	// (0x00034ccd) listscroll_midp_info_pane

0x56f5,	// (0x00034cb5) listscroll_form_midp_pane_ParamLimits

0x56f5,	// (0x00034cb5) listscroll_form_midp_pane

0x5701,	// (0x00034cc1) scroll_bar_cp050

0xda3f,	// (0x0003cfff) list_midp_pane

0x738b,	// (0x0003694b) signal_pane_g2_cp

0x560f,	// (0x00034bcf) listscroll_midp_info_pane_t1_ParamLimits

0x560f,	// (0x00034bcf) listscroll_midp_info_pane_t1

0x5627,	// (0x00034be7) listscroll_midp_info_pane_t2_ParamLimits

0x5627,	// (0x00034be7) listscroll_midp_info_pane_t2

0x5665,	// (0x00034c25) listscroll_midp_info_pane_t3_ParamLimits

0x5665,	// (0x00034c25) listscroll_midp_info_pane_t3

0x569f,	// (0x00034c5f) listscroll_midp_info_pane_t4_ParamLimits

0x569f,	// (0x00034c5f) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0003ede5) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0003ede5) listscroll_midp_info_pane_t

0x3f4d,	// (0x0003350d) scroll_pane_cp21

0x55ad,	// (0x00034b6d) form_midp_field_choice_group_pane

0x55b6,	// (0x00034b76) form_midp_field_text_pane

0x55f5,	// (0x00034bb5) form_midp_field_time_pane

0x55fd,	// (0x00034bbd) form_midp_gauge_slider_pane

0x5606,	// (0x00034bc6) form_midp_gauge_wait_pane

0x2cdd,	// (0x0003229d) form_midp_image_pane

0xc616,	// (0x0003bbd6) list_single_midp_pane_ParamLimits

0xc616,	// (0x0003bbd6) list_single_midp_pane

0xda1d,	// (0x0003cfdd) form_midp_field_text_pane_t1

0x532f,	// (0x000348ef) input_focus_pane_cp050

0x559c,	// (0x00034b5c) list_midp_form_text_pane

0x5534,	// (0x00034af4) form_midp_field_choice_group_pane_t1

0x5542,	// (0x00034b02) input_focus_pane_cp051

0x5556,	// (0x00034b16) list_midp_choice_pane

0x2cdd,	// (0x0003229d) status_idle_pane

0x5518,	// (0x00034ad8) form_midp_field_time_pane_t1

0x2cd3,	// (0x00032293) wait_anim_pane_g2_copy1

0x5526,	// (0x00034ae6) form_midp_field_time_pane_t2

0x0001,

0x4b8d,	// (0x0003414d) aid_navinavi_width_2_pane

0xf820,	// (0x0003ede0) form_midp_field_time_pane_t

0x2cdd,	// (0x0003229d) input_focus_pane_cp052

0x2cdd,	// (0x0003229d) bg_input_focus_pane_cp040

0x54d8,	// (0x00034a98) form_midp_gauge_slider_pane_t1

0x54e6,	// (0x00034aa6) form_midp_gauge_slider_pane_t2

0xda01,	// (0x0003cfc1) form_midp_gauge_slider_pane_t3

0xda0f,	// (0x0003cfcf) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0003edd7) form_midp_gauge_slider_pane_t

0x5510,	// (0x00034ad0) form_midp_slider_pane

0x2dbd,	// (0x0003237d) bg_input_focus_pane_cp041_ParamLimits

0x2dbd,	// (0x0003237d) bg_input_focus_pane_cp041

0x54a5,	// (0x00034a65) form_midp_gauge_wait_pane_t1_ParamLimits

0x54a5,	// (0x00034a65) form_midp_gauge_wait_pane_t1

0x54b7,	// (0x00034a77) form_midp_gauge_wait_pane_t2_ParamLimits

0x54b7,	// (0x00034a77) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0003edd2) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0003edd2) form_midp_gauge_wait_pane_t

0x54c9,	// (0x00034a89) form_midp_wait_pane_ParamLimits

0x54c9,	// (0x00034a89) form_midp_wait_pane

0x546f,	// (0x00034a2f) form_midp_image_pane_g1

0x5478,	// (0x00034a38) form_midp_image_pane_t1

0x5487,	// (0x00034a47) form_midp_image_pane_t2

0x5496,	// (0x00034a56) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0003edcb) form_midp_image_pane_t

0x5466,	// (0x00034a26) list_single_midp_pane_g1

0x190f,	// (0x00030ecf) list_single_midp_pane_t1

0xd9ec,	// (0x0003cfac) list_midp_form_item_pane_ParamLimits

0xd9ec,	// (0x0003cfac) list_midp_form_item_pane

0x4b35,	// (0x000340f5) list_midp_form_item_pane_t1

0x4b44,	// (0x00034104) midp_ticker_pane_g1

0x4b50,	// (0x00034110) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0003ed18) midp_ticker_pane_g

0x4b5c,	// (0x0003411c) midp_ticker_pane_t1

0x6844,	// (0x00035e04) midp_editing_number_pane_t1

0x6822,	// (0x00035de2) midp_editing_number_pane

0x6831,	// (0x00035df1) midp_ticker_pane

0x65e3,	// (0x00035ba3) ai_message_heading_pane

0x2cdd,	// (0x0003229d) bg_popup_window_pane_cp14

0x65eb,	// (0x00035bab) listscroll_ai_message_pane

0x656d,	// (0x00035b2d) ai_message_heading_pane_g1_ParamLimits

0x656d,	// (0x00035b2d) ai_message_heading_pane_g1

0x6579,	// (0x00035b39) ai_message_heading_pane_g2_ParamLimits

0x6579,	// (0x00035b39) ai_message_heading_pane_g2

0x6585,	// (0x00035b45) ai_message_heading_pane_g3_ParamLimits

0x6585,	// (0x00035b45) ai_message_heading_pane_g3

0x6591,	// (0x00035b51) ai_message_heading_pane_g4_ParamLimits

0x6591,	// (0x00035b51) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0003ef0c) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0003ef0c) ai_message_heading_pane_g

0x659d,	// (0x00035b5d) ai_message_heading_pane_t1_ParamLimits

0x659d,	// (0x00035b5d) ai_message_heading_pane_t1

0x65b7,	// (0x00035b77) ai_message_heading_pane_t2_ParamLimits

0x65b7,	// (0x00035b77) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0003ef15) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0003ef15) ai_message_heading_pane_t

0x65c9,	// (0x00035b89) bg_popup_heading_pane_cp1_ParamLimits

0x65c9,	// (0x00035b89) bg_popup_heading_pane_cp1

0x655b,	// (0x00035b1b) list_ai_message_pane_ParamLimits

0x655b,	// (0x00035b1b) list_ai_message_pane

0x3f4d,	// (0x0003350d) scroll_pane_cp10

0x64f7,	// (0x00035ab7) list_ai_message_pane_g1

0x64ff,	// (0x00035abf) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0003eee9) list_ai_message_pane_g

0x6507,	// (0x00035ac7) list_ai_message_pane_t1_ParamLimits

0x6507,	// (0x00035ac7) list_ai_message_pane_t1

0x651c,	// (0x00035adc) list_ai_message_pane_t2_ParamLimits

0x651c,	// (0x00035adc) list_ai_message_pane_t2

0x6531,	// (0x00035af1) list_ai_message_pane_t3_ParamLimits

0x6531,	// (0x00035af1) list_ai_message_pane_t3

0x6546,	// (0x00035b06) list_ai_message_pane_t4_ParamLimits

0x6546,	// (0x00035b06) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0003eeee) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0003eeee) list_ai_message_pane_t

0xdb81,	// (0x0003d141) cell_ai_soft_ind_pane_ParamLimits

0xdb81,	// (0x0003d141) cell_ai_soft_ind_pane

0x4b6e,	// (0x0003412e) cell_ai_soft_ind_pane_g1_ParamLimits

0x4b6e,	// (0x0003412e) cell_ai_soft_ind_pane_g1

0x2cdd,	// (0x0003229d) grid_highlight_cp1

0x4b7b,	// (0x0003413b) text_secondary_cp56_ParamLimits

0x4b7b,	// (0x0003413b) text_secondary_cp56

0x64b7,	// (0x00035a77) example_general_pane_ParamLimits

0x64b7,	// (0x00035a77) example_general_pane

0x64c3,	// (0x00035a83) example_parent_pane_g1_ParamLimits

0x64c3,	// (0x00035a83) example_parent_pane_g1

0x64cf,	// (0x00035a8f) example_parent_pane_t1_ParamLimits

0x64cf,	// (0x00035a8f) example_parent_pane_t1

0xc2c0,	// (0x0003b880) popup_preview_text_window_ParamLimits

0xc2c0,	// (0x0003b880) popup_preview_text_window

0x49a4,	// (0x00033f64) list_single_pane_cp2_g4

0x389f,	// (0x00032e5f) bg_popup_preview_window_pane_ParamLimits

0x389f,	// (0x00032e5f) bg_popup_preview_window_pane

0x6203,	// (0x000357c3) popup_preview_text_window_t1_ParamLimits

0x6203,	// (0x000357c3) popup_preview_text_window_t1

0x6221,	// (0x000357e1) popup_preview_text_window_t2_ParamLimits

0x6221,	// (0x000357e1) popup_preview_text_window_t2

0x626a,	// (0x0003582a) popup_preview_text_window_t3_ParamLimits

0x626a,	// (0x0003582a) popup_preview_text_window_t3

0x62af,	// (0x0003586f) popup_preview_text_window_t4_ParamLimits

0x62af,	// (0x0003586f) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0003eebd) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0003eebd) popup_preview_text_window_t

0x632d,	// (0x000358ed) scroll_pane_cp11

0x52bb,	// (0x0003487b) bg_popup_preview_window_pane_g1

0x61c3,	// (0x00035783) bg_popup_preview_window_pane_g2

0x61cb,	// (0x0003578b) bg_popup_preview_window_pane_g3

0x61d3,	// (0x00035793) bg_popup_preview_window_pane_g4

0x61db,	// (0x0003579b) bg_popup_preview_window_pane_g5

0x61e3,	// (0x000357a3) bg_popup_preview_window_pane_g6

0x61eb,	// (0x000357ab) bg_popup_preview_window_pane_g7

0x61f3,	// (0x000357b3) bg_popup_preview_window_pane_g8

0xf4c8,	// (0x0003ea88) aid_popup_width_pane

0xc23c,	// (0x0003b7fc) popup_midp_note_alarm_window_ParamLimits

0xc23c,	// (0x0003b7fc) popup_midp_note_alarm_window

0x3dd1,	// (0x00033391) data_form_pane_ParamLimits

0xbbc4,	// (0x0003b184) form_field_data_pane_g1

0xbbce,	// (0x0003b18e) form_field_data_pane_t1_ParamLimits

0x3ddd,	// (0x0003339d) input_focus_pane_ParamLimits

0x091a,	// (0x0002feda) data_form_wide_pane_ParamLimits

0x092b,	// (0x0002feeb) form_field_data_wide_pane_g1

0x0937,	// (0x0002fef7) form_field_data_wide_pane_t1_ParamLimits

0x3b4e,	// (0x0003310e) input_focus_pane_cp6_ParamLimits

0xd23a,	// (0x0003c7fa) input_popup_find_pane_g1_ParamLimits

0xd23a,	// (0x0003c7fa) input_popup_find_pane_g1

0x0bad,	// (0x0003016d) aid_navi_side_left_pane

0x0bc2,	// (0x00030182) aid_navi_side_right_pane

0x5bd0,	// (0x00035190) bg_popup_window_pane_cp30_ParamLimits

0x5bd0,	// (0x00035190) bg_popup_window_pane_cp30

0x5c4a,	// (0x0003520a) popup_midp_note_alarm_window_g1_ParamLimits

0x5c4a,	// (0x0003520a) popup_midp_note_alarm_window_g1

0x5c7a,	// (0x0003523a) popup_midp_note_alarm_window_t1_ParamLimits

0x5c7a,	// (0x0003523a) popup_midp_note_alarm_window_t1

0x5d1b,	// (0x000352db) popup_midp_note_alarm_window_t2_ParamLimits

0x5d1b,	// (0x000352db) popup_midp_note_alarm_window_t2

0x5dc9,	// (0x00035389) popup_midp_note_alarm_window_t3_ParamLimits

0x5dc9,	// (0x00035389) popup_midp_note_alarm_window_t3

0x5dfb,	// (0x000353bb) popup_midp_note_alarm_window_t4_ParamLimits

0x5dfb,	// (0x000353bb) popup_midp_note_alarm_window_t4

0x5e21,	// (0x000353e1) popup_midp_note_alarm_window_t5_ParamLimits

0x5e21,	// (0x000353e1) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0003ee5a) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0003ee5a) popup_midp_note_alarm_window_t

0x5ecd,	// (0x0003548d) wait_bar_pane_cp1_ParamLimits

0x5ecd,	// (0x0003548d) wait_bar_pane_cp1

0x2cdd,	// (0x0003229d) wait_anim_pane_copy1

0x2cdd,	// (0x0003229d) wait_border_pane_copy1

0x58b6,	// (0x00034e76) wait_border_pane_g1_copy1

0x0951,	// (0x0002ff11) form_field_popup_pane_g1

0xbbe8,	// (0x0003b1a8) form_field_popup_pane_t1_ParamLimits

0x3ddd,	// (0x0003339d) input_focus_pane_cp7_ParamLimits

0x3e0b,	// (0x000333cb) list_form_pane_ParamLimits

0x0971,	// (0x0002ff31) form_field_popup_wide_pane_g1

0x0979,	// (0x0002ff39) form_field_popup_wide_pane_t1_ParamLimits

0x3ddd,	// (0x0003339d) input_focus_pane_cp8_ParamLimits

0x3e17,	// (0x000333d7) list_form_wide_pane_ParamLimits

0x69ce,	// (0x00035f8e) aid_size_cell_graphic_pane

0xbc67,	// (0x0003b227) data_form_pane_t1_ParamLimits

0xc63f,	// (0x0003bbff) data_form_wide_pane_t1_ParamLimits

0xd671,	// (0x0003cc31) bg_status_flat_pane

0xcef9,	// (0x0003c4b9) title_pane_t1_ParamLimits

0x2d85,	// (0x00032345) title_pane_t2_ParamLimits

0x2dab,	// (0x0003236b) title_pane_t3_ParamLimits

0xf557,	// (0x0003eb17) title_pane_t_ParamLimits

0x43cc,	// (0x0003398c) level_1_signal_ParamLimits

0x43de,	// (0x0003399e) level_2_signal_ParamLimits

0x43f1,	// (0x000339b1) level_3_signal_ParamLimits

0x4404,	// (0x000339c4) level_4_signal_ParamLimits

0x4417,	// (0x000339d7) level_5_signal_ParamLimits

0x442a,	// (0x000339ea) level_6_signal_ParamLimits

0x443d,	// (0x000339fd) level_7_signal_ParamLimits

0x43cc,	// (0x0003398c) level_1_battery_ParamLimits

0x43de,	// (0x0003399e) level_2_battery_ParamLimits

0x43f1,	// (0x000339b1) level_3_battery_ParamLimits

0x4404,	// (0x000339c4) level_4_battery_ParamLimits

0x4417,	// (0x000339d7) level_5_battery_ParamLimits

0x442a,	// (0x000339ea) level_6_battery_ParamLimits

0x443d,	// (0x000339fd) level_7_battery_ParamLimits

0x5ad5,	// (0x00035095) bg_status_flat_pane_g1

0x5add,	// (0x0003509d) bg_status_flat_pane_g2

0x5ae5,	// (0x000350a5) bg_status_flat_pane_g3

0x5aed,	// (0x000350ad) bg_status_flat_pane_g4

0x5af5,	// (0x000350b5) bg_status_flat_pane_g5

0x5afd,	// (0x000350bd) bg_status_flat_pane_g6

0x5b05,	// (0x000350c5) bg_status_flat_pane_g7

0xcf85,	// (0x0003c545) tabs_3_active_pane_t1_ParamLimits

0xcf85,	// (0x0003c545) tabs_3_passive_pane_t1_ParamLimits

0xcf97,	// (0x0003c557) tabs_4_active_pane_t1_ParamLimits

0xcf97,	// (0x0003c557) tabs_4_1_passive_pane_t1_ParamLimits

0xd248,	// (0x0003c808) tabs_2_active_pane_t1_ParamLimits

0xd248,	// (0x0003c808) tabs_2_passive_pane_t1_ParamLimits

0x2dbd,	// (0x0003237d) bg_active_tab_pane_cp4_ParamLimits

0xd25a,	// (0x0003c81a) tabs_2_long_active_pane_t1_ParamLimits

0x4db1,	// (0x00034371) bg_passive_tab_pane_cp4_ParamLimits

0x17e6,	// (0x00030da6) list_single_midp_graphic_pane_t1_ParamLimits

0x2dbd,	// (0x0003237d) bg_active_tab_pane_cp5_ParamLimits

0xd26d,	// (0x0003c82d) tabs_3_long_active_pane_t1_ParamLimits

0x4db1,	// (0x00034371) bg_passive_tab_pane_cp5_ParamLimits

0x17e6,	// (0x00030da6) list_single_midp_graphic_pane_t1

0xd671,	// (0x0003cc31) bg_status_flat_pane_ParamLimits

0x4f4b,	// (0x0003450b) indicator_pane_cp2_ParamLimits

0x4f4b,	// (0x0003450b) indicator_pane_cp2

0xd7ef,	// (0x0003cdaf) navi_pane_srt_ParamLimits

0xd7ef,	// (0x0003cdaf) navi_pane_srt

0x509a,	// (0x0003465a) popup_clock_digital_analogue_window_cp1

0x2e9a,	// (0x0003245a) indicator_pane_t1

0x4a73,	// (0x00034033) copy_highlight_pane

0x4a73,	// (0x00034033) cursor_graphics_pane

0x4a73,	// (0x00034033) graphic_within_text_pane

0x4a73,	// (0x00034033) link_highlight_pane

0x62f0,	// (0x000358b0) popup_preview_text_window_t5_ParamLimits

0x62f0,	// (0x000358b0) popup_preview_text_window_t5

0x4b95,	// (0x00034155) cursor_digital_pane

0x4b95,	// (0x00034155) cursor_primary_pane

0x4ba6,	// (0x00034166) cursor_primary_small_pane

0x4bae,	// (0x0003416e) cursor_secondary_pane

0x4bb6,	// (0x00034176) cursor_title_pane

0x4b95,	// (0x00034155) link_highlight_digital_pane

0x4b9d,	// (0x0003415d) link_highlight_primary_pane

0x4ba6,	// (0x00034166) link_highlight_primary_small_pane

0x4bae,	// (0x0003416e) link_highlight_secondary_pane

0x4bb6,	// (0x00034176) link_highlight_title_pane

0x4b95,	// (0x00034155) copy_highlight_digital_pane

0x4b95,	// (0x00034155) copy_highlight_primary_pane

0x4ba6,	// (0x00034166) copy_highlight_primary_small_pane

0x4bae,	// (0x0003416e) copy_highlight_secondary_pane

0x4bb6,	// (0x00034176) copy_highlight_title_pane

0x4bae,	// (0x0003416e) graphic_text_digital_pane

0x5b73,	// (0x00035133) graphic_text_primary_pane

0x5b7c,	// (0x0003513c) graphic_text_primary_small_pane

0x4ba6,	// (0x00034166) graphic_text_secondary_pane

0x4b95,	// (0x00034155) graphic_text_title_pane

0xd4ad,	// (0x0003ca6d) cursor_primary_pane_g1

0x5b65,	// (0x00035125) cursor_text_primary_t1

0xda7b,	// (0x0003d03b) cursor_primary_small_pane_g1

0x5b57,	// (0x00035117) cursor_text_primary_small_t1

0xda71,	// (0x0003d031) cursor_primary_small_pane_g1_copy1

0x5b3f,	// (0x000350ff) cursor_text_primary_small_t1_copy1

0x5b1d,	// (0x000350dd) cursor_text_title_t1

0xda67,	// (0x0003d027) cursor_title_pane_g1

0xd4ad,	// (0x0003ca6d) cursor_digital_pane_g1

0x4bc8,	// (0x00034188) cursor_text_digital_t1

0x4bed,	// (0x000341ad) link_highlight_primary_pane_g1

0x5ac6,	// (0x00035086) link_highlight_primary_pane_t1

0x4bd6,	// (0x00034196) link_highlight_primary_small_pane_g1

0x4bde,	// (0x0003419e) link_highlight_primary_small_pane_t1

0x4bed,	// (0x000341ad) link_highlight_secondary_pane_g1

0x4bf5,	// (0x000341b5) link_highlight_secondary_pane_t1

0x5a3a,	// (0x00034ffa) link_highlight_title_pane_g1

0x5a42,	// (0x00035002) link_highlight_title_pane_t1

0x5a23,	// (0x00034fe3) link_highlight_digital_pane_g1

0x5a2b,	// (0x00034feb) link_highlight_digital_pane_t1

0x58fb,	// (0x00034ebb) copy_highlight_primary_pane_g1

0x5903,	// (0x00034ec3) copy_highlight_primary_pane_t1

0x58d5,	// (0x00034e95) copy_highlight_primary_small_pane_g1

0x58ec,	// (0x00034eac) copy_highlight_primary_small_pane_t1

0x4c04,	// (0x000341c4) copy_highlight_secondary_pane_g1

0x4c0c,	// (0x000341cc) copy_highlight_secondary_pane_t1

0x58d5,	// (0x00034e95) copy_highlight_title_pane_g1

0x58dd,	// (0x00034e9d) copy_highlight_title_pane_t1

0x58fb,	// (0x00034ebb) copy_highlight_digital_pane_g1

0x6b98,	// (0x00036158) copy_highlight_digital_pane_t1

0x6aec,	// (0x000360ac) graphic_text_primary_pane_g1

0x6b7c,	// (0x0003613c) graphic_text_primary_pane_t1

0x6b8a,	// (0x0003614a) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0003ef89) graphic_text_primary_pane_t

0x6b58,	// (0x00036118) graphic_text_primary_small_pane_g1

0x6b60,	// (0x00036120) graphic_text_primary_small_pane_t1

0x6b6e,	// (0x0003612e) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0003ef84) graphic_text_primary_small_pane_t

0x6b34,	// (0x000360f4) graphic_text_secondary_pane_g1

0x6b3c,	// (0x000360fc) graphic_text_secondary_pane_t1

0x6b4a,	// (0x0003610a) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0003ef7f) graphic_text_secondary_pane_t

0x6b10,	// (0x000360d0) graphic_text_title_pane_g1

0x6b18,	// (0x000360d8) graphic_text_title_pane_t1

0x6b26,	// (0x000360e6) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0003ef7a) graphic_text_title_pane_t

0x6aec,	// (0x000360ac) graphic_text_digital_pane_g1

0x6af4,	// (0x000360b4) graphic_text_digital_pane_t1

0x6b02,	// (0x000360c2) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0003ef75) graphic_text_digital_pane_t

0x2dbd,	// (0x0003237d) navi_icon_pane_srt_ParamLimits

0x2dbd,	// (0x0003237d) navi_icon_pane_srt

0x2cdd,	// (0x0003229d) navi_midp_pane_srt

0x2cdd,	// (0x0003229d) navi_navi_pane_srt

0x2dbd,	// (0x0003237d) navi_text_pane_srt_ParamLimits

0x2dbd,	// (0x0003237d) navi_text_pane_srt

0x6ab7,	// (0x00036077) navi_navi_icon_text_pane_srt

0x6abf,	// (0x0003607f) navi_navi_pane_srt_g1_ParamLimits

0x6abf,	// (0x0003607f) navi_navi_pane_srt_g1

0x6ad1,	// (0x00036091) navi_navi_pane_srt_g2_ParamLimits

0x6ad1,	// (0x00036091) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0003ef70) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0003ef70) navi_navi_pane_srt_g

0x6ae3,	// (0x000360a3) navi_navi_tabs_pane_srt

0x6ab7,	// (0x00036077) navi_navi_text_pane_srt

0x6ab7,	// (0x00036077) navi_navi_volume_pane_srt

0x6aa8,	// (0x00036068) navi_navi_text_pane_srt_t1

0x1c6d,	// (0x0003122d) navi_navi_volume_pane_srt_g1

0x1c75,	// (0x00031235) volume_small_pane_srt_ParamLimits

0x1c75,	// (0x00031235) volume_small_pane_srt

0x0f17,	// (0x000304d7) volume_small_pane_srt_g1_ParamLimits

0x0f17,	// (0x000304d7) volume_small_pane_srt_g1

0x0f27,	// (0x000304e7) volume_small_pane_srt_g2_ParamLimits

0x0f27,	// (0x000304e7) volume_small_pane_srt_g2

0x0f38,	// (0x000304f8) volume_small_pane_srt_g3_ParamLimits

0x0f38,	// (0x000304f8) volume_small_pane_srt_g3

0x0f49,	// (0x00030509) volume_small_pane_srt_g4_ParamLimits

0x0f49,	// (0x00030509) volume_small_pane_srt_g4

0x0f5a,	// (0x0003051a) volume_small_pane_srt_g5_ParamLimits

0x0f5a,	// (0x0003051a) volume_small_pane_srt_g5

0x0f6b,	// (0x0003052b) volume_small_pane_srt_g6_ParamLimits

0x0f6b,	// (0x0003052b) volume_small_pane_srt_g6

0x0f7c,	// (0x0003053c) volume_small_pane_srt_g7_ParamLimits

0x0f7c,	// (0x0003053c) volume_small_pane_srt_g7

0x0f8d,	// (0x0003054d) volume_small_pane_srt_g8_ParamLimits

0x0f8d,	// (0x0003054d) volume_small_pane_srt_g8

0x0f9e,	// (0x0003055e) volume_small_pane_srt_g9_ParamLimits

0x0f9e,	// (0x0003055e) volume_small_pane_srt_g9

0x0faf,	// (0x0003056f) volume_small_pane_srt_g10_ParamLimits

0x0faf,	// (0x0003056f) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003ed1d) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003ed1d) volume_small_pane_srt_g

0x3948,	// (0x00032f08) query_popup_data_pane_cp2

0x6a8e,	// (0x0003604e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6a8e,	// (0x0003604e) navi_navi_icon_text_pane_srt_t1

0x5b73,	// (0x00035133) navi_tabs_2_long_pane_srt

0x5b73,	// (0x00035133) navi_tabs_2_pane_srt

0x5b73,	// (0x00035133) navi_tabs_3_long_pane_srt

0x5b73,	// (0x00035133) navi_tabs_3_pane_srt

0x5b73,	// (0x00035133) navi_tabs_4_pane_srt

0x1c4d,	// (0x0003120d) tabs_2_active_pane_srt_ParamLimits

0x1c4d,	// (0x0003120d) tabs_2_active_pane_srt

0x1c5d,	// (0x0003121d) tabs_2_passive_pane_srt_ParamLimits

0x1c5d,	// (0x0003121d) tabs_2_passive_pane_srt

0x532f,	// (0x000348ef) bg_passive_tab_pane_cp1_srt_ParamLimits

0x532f,	// (0x000348ef) bg_passive_tab_pane_cp1_srt

0x6a5a,	// (0x0003601a) bg_passive_tab_pane_g1_cp1_srt

0x46b5,	// (0x00033c75) bg_passive_tab_pane_g2_cp1_srt

0x6a63,	// (0x00036023) bg_passive_tab_pane_g3_cp1_srt

0x37e9,	// (0x00032da9) bg_active_tab_pane_cp1_srt_ParamLimits

0x37e9,	// (0x00032da9) bg_active_tab_pane_cp1_srt

0x6a6c,	// (0x0003602c) tabs_2_active_pane_srt_g1

0xde12,	// (0x0003d3d2) tabs_2_active_pane_srt_t1_ParamLimits

0xde12,	// (0x0003d3d2) tabs_2_active_pane_srt_t1

0x6a5a,	// (0x0003601a) bg_active_tab_pane_g1_cp1_srt

0x46b5,	// (0x00033c75) bg_active_tab_pane_g2_cp1_srt

0x6a63,	// (0x00036023) bg_active_tab_pane_g3_cp1_srt

0x1c1a,	// (0x000311da) tabs_3_active_pane_srt_ParamLimits

0x1c1a,	// (0x000311da) tabs_3_active_pane_srt

0x1c2b,	// (0x000311eb) tabs_3_passive_pane_cp_srt_ParamLimits

0x1c2b,	// (0x000311eb) tabs_3_passive_pane_cp_srt

0x1c3c,	// (0x000311fc) tabs_3_passive_pane_srt_ParamLimits

0x1c3c,	// (0x000311fc) tabs_3_passive_pane_srt

0x532f,	// (0x000348ef) bg_passive_tab_pane_cp2_srt_ParamLimits

0x532f,	// (0x000348ef) bg_passive_tab_pane_cp2_srt

0x4c1b,	// (0x000341db) bg_passive_tab_pane_g1_cp2_srt

0x46b5,	// (0x00033c75) bg_passive_tab_pane_g2_cp2_srt

0x4c24,	// (0x000341e4) bg_passive_tab_pane_g3_cp2_srt

0x37e9,	// (0x00032da9) bg_active_tab_pane_cp2_srt_ParamLimits

0x37e9,	// (0x00032da9) bg_active_tab_pane_cp2_srt

0x6a40,	// (0x00036000) tabs_3_active_pane_srt_g1

0xddfc,	// (0x0003d3bc) tabs_3_active_pane_srt_t1_ParamLimits

0xddfc,	// (0x0003d3bc) tabs_3_active_pane_srt_t1

0x4c1b,	// (0x000341db) bg_active_tab_pane_g1_cp2_srt

0x46b5,	// (0x00033c75) bg_active_tab_pane_g2_cp2_srt

0x4c24,	// (0x000341e4) bg_active_tab_pane_g3_cp2_srt

0x1bd2,	// (0x00031192) tabs_4_active_pane_srt_ParamLimits

0x1bd2,	// (0x00031192) tabs_4_active_pane_srt

0x1be4,	// (0x000311a4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1be4,	// (0x000311a4) tabs_4_passive_pane_cp2_srt

0x1114,	// (0x000306d4) aid_size_cell_toolbar

0x669b,	// (0x00035c5b) main_idle_act_pane_ParamLimits

0x12d3,	// (0x00030893) popup_large_graphic_colour_window_ParamLimits

0xc54c,	// (0x0003bb0c) popup_toolbar_window_ParamLimits

0xc54c,	// (0x0003bb0c) popup_toolbar_window

0x6853,	// (0x00035e13) list_single_graphic_2heading_pane_ParamLimits

0x6853,	// (0x00035e13) list_single_graphic_2heading_pane

0x417d,	// (0x0003373d) aid_size_cell_apps_grid_lsc_pane

0x418f,	// (0x0003374f) aid_size_cell_apps_grid_prt_pane

0x4db1,	// (0x00034371) bg_wml_button_pane_cp1_ParamLimits

0x4db1,	// (0x00034371) bg_wml_button_pane_cp1

0xda1d,	// (0x0003cfdd) form_midp_field_text_pane_t1_ParamLimits

0x532f,	// (0x000348ef) input_focus_pane_cp050_ParamLimits

0x559c,	// (0x00034b5c) list_midp_form_text_pane_ParamLimits

0x5542,	// (0x00034b02) input_focus_pane_cp051_ParamLimits

0x5556,	// (0x00034b16) list_midp_choice_pane_ParamLimits

0xd9ba,	// (0x0003cf7a) list_single_2graphic_pane_cp3_ParamLimits

0xd9ba,	// (0x0003cf7a) list_single_2graphic_pane_cp3

0xd9cd,	// (0x0003cf8d) list_single_midp_graphic_pane_ParamLimits

0xd9cd,	// (0x0003cf8d) list_single_midp_graphic_pane

0xf4e4,	// (0x0003eaa4) list_single_graphic_2heading_pane_g1_ParamLimits

0xf4e4,	// (0x0003eaa4) list_single_graphic_2heading_pane_g1

0xf4f0,	// (0x0003eab0) list_single_graphic_2heading_pane_g4_ParamLimits

0xf4f0,	// (0x0003eab0) list_single_graphic_2heading_pane_g4

0xf4fc,	// (0x0003eabc) list_single_graphic_2heading_pane_g5_ParamLimits

0xf4fc,	// (0x0003eabc) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003ed70) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003ed70) list_single_graphic_2heading_pane_g

0xf508,	// (0x0003eac8) list_single_graphic_2heading_pane_t1_ParamLimits

0xf508,	// (0x0003eac8) list_single_graphic_2heading_pane_t1

0xf51c,	// (0x0003eadc) list_single_graphic_2heading_pane_t2_ParamLimits

0xf51c,	// (0x0003eadc) list_single_graphic_2heading_pane_t2

0xf536,	// (0x0003eaf6) list_single_graphic_2heading_pane_t3_ParamLimits

0xf536,	// (0x0003eaf6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003ed77) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003ed77) list_single_graphic_2heading_pane_t

0x51f9,	// (0x000347b9) bg_popup_sub_pane_cp2

0x5223,	// (0x000347e3) grid_toobar_pane

0x16e7,	// (0x00030ca7) cell_toolbar_pane_ParamLimits

0x16e7,	// (0x00030ca7) cell_toolbar_pane

0x525f,	// (0x0003481f) cell_toolbar_pane_g1_ParamLimits

0x525f,	// (0x0003481f) cell_toolbar_pane_g1

0x5273,	// (0x00034833) cell_toolbar_pane_g2_ParamLimits

0x5273,	// (0x00034833) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003ed85) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003ed85) cell_toolbar_pane_g

0x5295,	// (0x00034855) grid_highlight_pane_cp2_ParamLimits

0x5295,	// (0x00034855) grid_highlight_pane_cp2

0x52af,	// (0x0003486f) toolbar_button_pane

0x52bb,	// (0x0003487b) toolbar_button_pane_g1

0x52c3,	// (0x00034883) toolbar_button_pane_g2

0x52cb,	// (0x0003488b) toolbar_button_pane_g3

0x52d3,	// (0x00034893) toolbar_button_pane_g4

0x52db,	// (0x0003489b) toolbar_button_pane_g5

0x52e3,	// (0x000348a3) toolbar_button_pane_g6

0x52eb,	// (0x000348ab) toolbar_button_pane_g7

0x52f3,	// (0x000348b3) toolbar_button_pane_g8

0x52fb,	// (0x000348bb) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0003ed8a) toolbar_button_pane_g

0x1759,	// (0x00030d19) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1759,	// (0x00030d19) list_single_2graphic_pane_g1_cp3

0xc5a4,	// (0x0003bb64) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc5a4,	// (0x0003bb64) list_single_2graphic_pane_g2_cp3

0x1776,	// (0x00030d36) list_single_2graphic_pane_g3_cp3

0x177e,	// (0x00030d3e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x177e,	// (0x00030d3e) list_single_2graphic_pane_g4_cp3

0x178a,	// (0x00030d4a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x178a,	// (0x00030d4a) list_single_2graphic_pane_t1_cp3

0x17da,	// (0x00030d9a) list_single_midp_graphic_pane_g2_ParamLimits

0x17da,	// (0x00030d9a) list_single_midp_graphic_pane_g2

0x111c,	// (0x000306dc) aid_zoom_text_primary

0xf4dc,	// (0x0003ea9c) aid_zoom_text_secondary

0xd505,	// (0x0003cac5) status_small_pane_g7_ParamLimits

0xd505,	// (0x0003cac5) status_small_pane_g7

0xd528,	// (0x0003cae8) status_small_pane_t1_ParamLimits

0xced5,	// (0x0003c495) title_pane_g2

0x0003,

0xf54e,	// (0x0003eb0e) title_pane_g

0xd14d,	// (0x0003c70d) aid_size_cell_colour_1_pane_ParamLimits

0xd14d,	// (0x0003c70d) aid_size_cell_colour_1_pane

0xd161,	// (0x0003c721) aid_size_cell_colour_2_pane_ParamLimits

0xd161,	// (0x0003c721) aid_size_cell_colour_2_pane

0xd175,	// (0x0003c735) aid_size_cell_colour_3_pane_ParamLimits

0xd175,	// (0x0003c735) aid_size_cell_colour_3_pane

0xd189,	// (0x0003c749) aid_size_cell_colour_4_pane_ParamLimits

0xd189,	// (0x0003c749) aid_size_cell_colour_4_pane

0x0aea,	// (0x000300aa) title_pane_stacon_g1_ParamLimits

0x0aea,	// (0x000300aa) title_pane_stacon_g1

0x595a,	// (0x00034f1a) popup_note_wait_window_g3_ParamLimits

0x595a,	// (0x00034f1a) popup_note_wait_window_g3

0x59d0,	// (0x00034f90) popup_note_wait_window_t5_ParamLimits

0x59d0,	// (0x00034f90) popup_note_wait_window_t5

0x2cdd,	// (0x0003229d) main_feb_china_hwr_fs_writing_pane

0xbf54,	// (0x0003b514) popup_feb_china_hwr_fs_window_ParamLimits

0xbf54,	// (0x0003b514) popup_feb_china_hwr_fs_window

0xc5b5,	// (0x0003bb75) aid_size_cell_hwr_fs_ParamLimits

0xc5b5,	// (0x0003bb75) aid_size_cell_hwr_fs

0x532f,	// (0x000348ef) bg_popup_sub_pane_cp3_ParamLimits

0x532f,	// (0x000348ef) bg_popup_sub_pane_cp3

0xc5ca,	// (0x0003bb8a) grid_hwr_fs_pane_ParamLimits

0xc5ca,	// (0x0003bb8a) grid_hwr_fs_pane

0x189f,	// (0x00030e5f) linegrid_hwr_fs_pane_ParamLimits

0x189f,	// (0x00030e5f) linegrid_hwr_fs_pane

0xc5e2,	// (0x0003bba2) cell_hwr_fs_pane_ParamLimits

0xc5e2,	// (0x0003bba2) cell_hwr_fs_pane

0x533b,	// (0x000348fb) linegrid_hwr_fs_pane_g1_ParamLimits

0x533b,	// (0x000348fb) linegrid_hwr_fs_pane_g1

0xd98e,	// (0x0003cf4e) linegrid_hwr_fs_pane_g2_ParamLimits

0xd98e,	// (0x0003cf4e) linegrid_hwr_fs_pane_g2

0x5359,	// (0x00034919) linegrid_hwr_fs_pane_g3_ParamLimits

0x5359,	// (0x00034919) linegrid_hwr_fs_pane_g3

0x18d1,	// (0x00030e91) linegrid_hwr_fs_pane_g4_ParamLimits

0x18d1,	// (0x00030e91) linegrid_hwr_fs_pane_g4

0x18eb,	// (0x00030eab) linegrid_hwr_fs_pane_g5_ParamLimits

0x18eb,	// (0x00030eab) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0003edb0) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0003edb0) linegrid_hwr_fs_pane_g

0x5365,	// (0x00034925) cell_hwr_fs_pane_g1_ParamLimits

0x5365,	// (0x00034925) cell_hwr_fs_pane_g1

0x5130,	// (0x000346f0) cell_hwr_fs_pane_g2_ParamLimits

0x5130,	// (0x000346f0) cell_hwr_fs_pane_g2

0xd9a0,	// (0x0003cf60) cell_hwr_fs_pane_g3_ParamLimits

0xd9a0,	// (0x0003cf60) cell_hwr_fs_pane_g3

0xd9ad,	// (0x0003cf6d) cell_hwr_fs_pane_g4_ParamLimits

0xd9ad,	// (0x0003cf6d) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0003edbb) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003edbb) cell_hwr_fs_pane_g

0xc608,	// (0x0003bbc8) cell_hwr_fs_pane_t1

0x2cdd,	// (0x0003229d) grid_highlight_pane_cp6

0x2cdd,	// (0x0003229d) main_idle_act2_pane

0x3f34,	// (0x000334f4) aid_inside_area_popup_secondary

0xda85,	// (0x0003d045) aid_inside_area_window_primary_ParamLimits

0xda85,	// (0x0003d045) aid_inside_area_window_primary

0x6ba7,	// (0x00036167) ai2_news_ticker_pane

0x6baf,	// (0x0003616f) aid_size_cell_ai1_link_ParamLimits

0x6baf,	// (0x0003616f) aid_size_cell_ai1_link

0xde28,	// (0x0003d3e8) popup_ai2_data_window_ParamLimits

0xde28,	// (0x0003d3e8) popup_ai2_data_window

0x6bdf,	// (0x0003619f) popup_ai2_link_window_ParamLimits

0x6bdf,	// (0x0003619f) popup_ai2_link_window

0x532f,	// (0x000348ef) bg_popup_sub_pane_cp4_ParamLimits

0x532f,	// (0x000348ef) bg_popup_sub_pane_cp4

0x6bf3,	// (0x000361b3) grid_ai2_link_pane_ParamLimits

0x6bf3,	// (0x000361b3) grid_ai2_link_pane

0x6c0a,	// (0x000361ca) popup_ai2_link_window_g1_ParamLimits

0x6c0a,	// (0x000361ca) popup_ai2_link_window_g1

0x6c16,	// (0x000361d6) popup_ai2_link_window_g2_ParamLimits

0x6c16,	// (0x000361d6) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0003ef8e) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0003ef8e) popup_ai2_link_window_g

0x6c25,	// (0x000361e5) ai2_mp_button_pane

0x6c2d,	// (0x000361ed) ai2_mp_volume_pane

0x5542,	// (0x00034b02) bg_popup_sub_pane_cp5_ParamLimits

0x5542,	// (0x00034b02) bg_popup_sub_pane_cp5

0x6c35,	// (0x000361f5) heading_ai2_gene_pane_ParamLimits

0x6c35,	// (0x000361f5) heading_ai2_gene_pane

0x6c41,	// (0x00036201) list_ai2_gene_pane_ParamLimits

0x6c41,	// (0x00036201) list_ai2_gene_pane

0x6c89,	// (0x00036249) cell_ai2_link_pane_ParamLimits

0x6c89,	// (0x00036249) cell_ai2_link_pane

0x6c9f,	// (0x0003625f) cell_ai2_link_pane_g1

0x2cdd,	// (0x0003229d) grid_highlight_pane_cp7

0x1c8a,	// (0x0003124a) ai2_mp_volume_pane_g1

0x6d6f,	// (0x0003632f) ai2_mp_volume_pane_g2

0xde52,	// (0x0003d412) list_ai2_gene_pane_t1

0x6d77,	// (0x00036337) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0003efa7) ai2_mp_volume_pane_g

0x1c92,	// (0x00031252) volume_small_pane_cp3

0x6d7f,	// (0x0003633f) aid_size_cell_ai2_button

0x6d87,	// (0x00036347) grid_ai2_button_pane

0x6d90,	// (0x00036350) cell_ai2_button_pane_ParamLimits

0x6d90,	// (0x00036350) cell_ai2_button_pane

0x2cd3,	// (0x00032293) cell_ai2_button_pane_g1

0x2cdd,	// (0x0003229d) grid_highlight_pane_cp8

0x6d2f,	// (0x000362ef) ai2_gene_pane_t1_ParamLimits

0x6d2f,	// (0x000362ef) ai2_gene_pane_t1

0xbece,	// (0x0003b48e) aid_height_parent_landscape

0xdbcf,	// (0x0003d18f) aid_height_set_list

0x669b,	// (0x00035c5b) aid_size_parent

0x69ce,	// (0x00035f8e) aid_size_cell_graphic_pane_ParamLimits

0x6c51,	// (0x00036211) popup_ai2_data_window_g1_ParamLimits

0x6c51,	// (0x00036211) popup_ai2_data_window_g1

0x6c5d,	// (0x0003621d) ai2_news_ticker_pane_g1

0x6c65,	// (0x00036225) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0003ef93) ai2_news_ticker_pane_g

0x6c6d,	// (0x0003622d) ai2_news_ticker_pane_t1

0x6c7b,	// (0x0003623b) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0003ef98) ai2_news_ticker_pane_t

0x6ca8,	// (0x00036268) heading_ai2_gene_pane_g1

0x6cb0,	// (0x00036270) heading_ai2_gene_pane_t1_ParamLimits

0x6cb0,	// (0x00036270) heading_ai2_gene_pane_t1

0x6cc5,	// (0x00036285) list_highlight_pane_cp6

0xde3c,	// (0x0003d3fc) ai2_gene_pane_ParamLimits

0xde3c,	// (0x0003d3fc) ai2_gene_pane

0xde60,	// (0x0003d420) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0003ef9d) list_ai2_gene_pane_t

0x6d00,	// (0x000362c0) list_highlight_pane_cp8_ParamLimits

0x6d00,	// (0x000362c0) list_highlight_pane_cp8

0x6d11,	// (0x000362d1) ai2_gene_pane_g1_ParamLimits

0x6d11,	// (0x000362d1) ai2_gene_pane_g1

0x6d23,	// (0x000362e3) ai2_gene_pane_g2_ParamLimits

0x6d23,	// (0x000362e3) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0003efa2) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0003efa2) ai2_gene_pane_g

0x3d73,	// (0x00033333) scroll_pane_cp12

0xbe8d,	// (0x0003b44d) control_pane_t3_ParamLimits

0xbe8d,	// (0x0003b44d) control_pane_t3

0xd519,	// (0x0003cad9) status_small_pane_g8_ParamLimits

0xd519,	// (0x0003cad9) status_small_pane_g8

0xbfe9,	// (0x0003b5a9) popup_find_window_ParamLimits

0xc276,	// (0x0003b836) popup_note_image_window_ParamLimits

0x1717,	// (0x00030cd7) list_double2_graphic_pane_vc_g1_ParamLimits

0x1717,	// (0x00030cd7) list_double2_graphic_pane_vc_g1

0x1723,	// (0x00030ce3) list_double2_graphic_pane_vc_g2_ParamLimits

0x1723,	// (0x00030ce3) list_double2_graphic_pane_vc_g2

0x172f,	// (0x00030cef) list_double2_graphic_pane_vc_g3_ParamLimits

0x172f,	// (0x00030cef) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0003ed7e) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0003ed7e) list_double2_graphic_pane_vc_g

0x173b,	// (0x00030cfb) list_double2_graphic_pane_vc_t1_ParamLimits

0x173b,	// (0x00030cfb) list_double2_graphic_pane_vc_t1

0x1723,	// (0x00030ce3) list_single_heading_pane_vc_g1_ParamLimits

0x1723,	// (0x00030ce3) list_single_heading_pane_vc_g1

0x172f,	// (0x00030cef) list_single_heading_pane_vc_g2_ParamLimits

0x172f,	// (0x00030cef) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003eb88) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003eb88) list_single_heading_pane_vc_g

0x17a6,	// (0x00030d66) list_single_heading_pane_vc_t1_ParamLimits

0x17a6,	// (0x00030d66) list_single_heading_pane_vc_t1

0x17be,	// (0x00030d7e) list_single_heading_pane_vc_t2_ParamLimits

0x17be,	// (0x00030d7e) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0003ed9f) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0003ed9f) list_single_heading_pane_vc_t

0x17fc,	// (0x00030dbc) list_setting_number_pane_vc_g1_ParamLimits

0x17fc,	// (0x00030dbc) list_setting_number_pane_vc_g1

0x1808,	// (0x00030dc8) list_setting_number_pane_vc_g2_ParamLimits

0x1808,	// (0x00030dc8) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003eda4) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003eda4) list_setting_number_pane_vc_g

0x1814,	// (0x00030dd4) list_setting_number_pane_vc_t1_ParamLimits

0x1814,	// (0x00030dd4) list_setting_number_pane_vc_t1

0x1828,	// (0x00030de8) list_setting_number_pane_vc_t2_ParamLimits

0x1828,	// (0x00030de8) list_setting_number_pane_vc_t2

0x1844,	// (0x00030e04) list_setting_number_pane_vc_t3_ParamLimits

0x1844,	// (0x00030e04) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0003eda9) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0003eda9) list_setting_number_pane_vc_t

0x1862,	// (0x00030e22) set_value_pane_vc_ParamLimits

0x1862,	// (0x00030e22) set_value_pane_vc

0x6853,	// (0x00035e13) list_double2_graphic_pane_vc_ParamLimits

0x6853,	// (0x00035e13) list_double2_graphic_pane_vc

0x6853,	// (0x00035e13) list_double2_large_graphic_pane_vc_ParamLimits

0x6853,	// (0x00035e13) list_double2_large_graphic_pane_vc

0x6853,	// (0x00035e13) list_double2_pane_vc_ParamLimits

0x6853,	// (0x00035e13) list_double2_pane_vc

0x6853,	// (0x00035e13) list_double_graphic_heading_pane_vc_ParamLimits

0x6853,	// (0x00035e13) list_double_graphic_heading_pane_vc

0x6853,	// (0x00035e13) list_double_graphic_pane_vc_ParamLimits

0x6853,	// (0x00035e13) list_double_graphic_pane_vc

0x6853,	// (0x00035e13) list_double_heading_pane_vc_ParamLimits

0x6853,	// (0x00035e13) list_double_heading_pane_vc

0x6865,	// (0x00035e25) list_double_large_graphic_pane_vc_ParamLimits

0x6865,	// (0x00035e25) list_double_large_graphic_pane_vc

0x6853,	// (0x00035e13) list_double_number_pane_vc_ParamLimits

0x6853,	// (0x00035e13) list_double_number_pane_vc

0x6853,	// (0x00035e13) list_double_pane_vc_ParamLimits

0x6853,	// (0x00035e13) list_double_pane_vc

0x6853,	// (0x00035e13) list_double_time_pane_vc_ParamLimits

0x6853,	// (0x00035e13) list_double_time_pane_vc

0x6853,	// (0x00035e13) list_setting_number_pane_vc_ParamLimits

0x6853,	// (0x00035e13) list_setting_number_pane_vc

0x6853,	// (0x00035e13) list_setting_pane_vc_ParamLimits

0x6853,	// (0x00035e13) list_setting_pane_vc

0x6853,	// (0x00035e13) list_single_graphic_heading_pane_vc_ParamLimits

0x6853,	// (0x00035e13) list_single_graphic_heading_pane_vc

0x6853,	// (0x00035e13) list_single_heading_pane_vc_ParamLimits

0x6853,	// (0x00035e13) list_single_heading_pane_vc

0x6853,	// (0x00035e13) list_single_number_heading_pane_vc_ParamLimits

0x6853,	// (0x00035e13) list_single_number_heading_pane_vc

0x1717,	// (0x00030cd7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1717,	// (0x00030cd7) list_double_graphic_heading_pane_vc_g1

0x1723,	// (0x00030ce3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1723,	// (0x00030ce3) list_double_graphic_heading_pane_vc_g2

0x172f,	// (0x00030cef) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x172f,	// (0x00030cef) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0003ed7e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003ed7e) list_double_graphic_heading_pane_vc_g

0x2ff1,	// (0x000325b1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2ff1,	// (0x000325b1) list_double_graphic_heading_pane_vc_t1

0x300d,	// (0x000325cd) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x300d,	// (0x000325cd) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0003efae) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0003efae) list_double_graphic_heading_pane_vc_t

0x17fc,	// (0x00030dbc) list_setting_pane_vc_g1_ParamLimits

0x17fc,	// (0x00030dbc) list_setting_pane_vc_g1

0x1808,	// (0x00030dc8) list_setting_pane_vc_g2_ParamLimits

0x1808,	// (0x00030dc8) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003eda4) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003eda4) list_setting_pane_vc_g

0x302b,	// (0x000325eb) list_setting_pane_vc_t1_ParamLimits

0x302b,	// (0x000325eb) list_setting_pane_vc_t1

0x3047,	// (0x00032607) list_setting_pane_vc_t2_ParamLimits

0x3047,	// (0x00032607) list_setting_pane_vc_t2

0x0001,

0xfa1c,	// (0x0003efdc) list_setting_pane_vc_t_ParamLimits

0xfa1c,	// (0x0003efdc) list_setting_pane_vc_t

0x1862,	// (0x00030e22) set_value_pane_cp_vc_ParamLimits

0x1862,	// (0x00030e22) set_value_pane_cp_vc

0x1723,	// (0x00030ce3) list_single_number_heading_pane_vc_g1_ParamLimits

0x1723,	// (0x00030ce3) list_single_number_heading_pane_vc_g1

0x172f,	// (0x00030cef) list_single_number_heading_pane_vc_g2_ParamLimits

0x172f,	// (0x00030cef) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003eb88) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003eb88) list_single_number_heading_pane_vc_g

0x17a6,	// (0x00030d66) list_single_number_heading_pane_vc_t1_ParamLimits

0x17a6,	// (0x00030d66) list_single_number_heading_pane_vc_t1

0x3063,	// (0x00032623) list_single_number_heading_pane_vc_t2_ParamLimits

0x3063,	// (0x00032623) list_single_number_heading_pane_vc_t2

0x3077,	// (0x00032637) list_single_number_heading_pane_vc_t3_ParamLimits

0x3077,	// (0x00032637) list_single_number_heading_pane_vc_t3

0x0002,

0xfa21,	// (0x0003efe1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa21,	// (0x0003efe1) list_single_number_heading_pane_vc_t

0x1717,	// (0x00030cd7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1717,	// (0x00030cd7) list_single_graphic_heading_pane_vc_g1

0x1723,	// (0x00030ce3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1723,	// (0x00030ce3) list_single_graphic_heading_pane_vc_g4

0x172f,	// (0x00030cef) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x172f,	// (0x00030cef) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0003ed7e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003ed7e) list_single_graphic_heading_pane_vc_g

0x17a6,	// (0x00030d66) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x17a6,	// (0x00030d66) list_single_graphic_heading_pane_vc_t1

0x3089,	// (0x00032649) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3089,	// (0x00032649) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa28,	// (0x0003efe8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0003efe8) list_single_graphic_heading_pane_vc_t

0x1723,	// (0x00030ce3) list_double2_pane_vc_g1_ParamLimits

0x1723,	// (0x00030ce3) list_double2_pane_vc_g1

0x172f,	// (0x00030cef) list_double2_pane_vc_g2_ParamLimits

0x172f,	// (0x00030cef) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003eb88) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003eb88) list_double2_pane_vc_g

0x309d,	// (0x0003265d) list_double2_pane_vc_t1_ParamLimits

0x309d,	// (0x0003265d) list_double2_pane_vc_t1

0x30b3,	// (0x00032673) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x30b3,	// (0x00032673) list_double2_large_graphic_pane_vc_g1

0x1723,	// (0x00030ce3) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1723,	// (0x00030ce3) list_double2_large_graphic_pane_vc_g2

0x172f,	// (0x00030cef) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x172f,	// (0x00030cef) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0003eba5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0003eba5) list_double2_large_graphic_pane_vc_g

0x30bf,	// (0x0003267f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x30bf,	// (0x0003267f) list_double2_large_graphic_pane_vc_t1

0x30d5,	// (0x00032695) list_double_time_pane_vc_g1_ParamLimits

0x30d5,	// (0x00032695) list_double_time_pane_vc_g1

0x30e1,	// (0x000326a1) list_double_time_pane_vc_g2_ParamLimits

0x30e1,	// (0x000326a1) list_double_time_pane_vc_g2

0x0001,

0xfa2d,	// (0x0003efed) list_double_time_pane_vc_g_ParamLimits

0xfa2d,	// (0x0003efed) list_double_time_pane_vc_g

0x30ed,	// (0x000326ad) list_double_time_pane_vc_t1_ParamLimits

0x30ed,	// (0x000326ad) list_double_time_pane_vc_t1

0x3111,	// (0x000326d1) list_double_time_pane_vc_t2_ParamLimits

0x3111,	// (0x000326d1) list_double_time_pane_vc_t2

0x3160,	// (0x00032720) list_double_time_pane_vc_t3_ParamLimits

0x3160,	// (0x00032720) list_double_time_pane_vc_t3

0x3172,	// (0x00032732) list_double_time_pane_vc_t4_ParamLimits

0x3172,	// (0x00032732) list_double_time_pane_vc_t4

0x0003,

0xfa32,	// (0x0003eff2) list_double_time_pane_vc_t_ParamLimits

0xfa32,	// (0x0003eff2) list_double_time_pane_vc_t

0x1723,	// (0x00030ce3) list_double_pane_vc_g1_ParamLimits

0x1723,	// (0x00030ce3) list_double_pane_vc_g1

0x172f,	// (0x00030cef) list_double_pane_vc_g2_ParamLimits

0x172f,	// (0x00030cef) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003eb88) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003eb88) list_double_pane_vc_g

0x3186,	// (0x00032746) list_double_pane_vc_t1_ParamLimits

0x3186,	// (0x00032746) list_double_pane_vc_t1

0x319a,	// (0x0003275a) list_double_pane_vc_t2_ParamLimits

0x319a,	// (0x0003275a) list_double_pane_vc_t2

0x0001,

0xfa3b,	// (0x0003effb) list_double_pane_vc_t_ParamLimits

0xfa3b,	// (0x0003effb) list_double_pane_vc_t

0x1723,	// (0x00030ce3) list_double_number_pane_vc_g1_ParamLimits

0x1723,	// (0x00030ce3) list_double_number_pane_vc_g1

0x172f,	// (0x00030cef) list_double_number_pane_vc_g2_ParamLimits

0x172f,	// (0x00030cef) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003eb88) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003eb88) list_double_number_pane_vc_g

0x31b2,	// (0x00032772) list_double_number_pane_vc_t1_ParamLimits

0x31b2,	// (0x00032772) list_double_number_pane_vc_t1

0x31c4,	// (0x00032784) list_double_number_pane_vc_t2_ParamLimits

0x31c4,	// (0x00032784) list_double_number_pane_vc_t2

0x31d8,	// (0x00032798) list_double_number_pane_vc_t3_ParamLimits

0x31d8,	// (0x00032798) list_double_number_pane_vc_t3

0x0002,

0xfa40,	// (0x0003f000) list_double_number_pane_vc_t_ParamLimits

0xfa40,	// (0x0003f000) list_double_number_pane_vc_t

0x31f0,	// (0x000327b0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x31f0,	// (0x000327b0) list_double_large_graphic_pane_vc_g1

0x3212,	// (0x000327d2) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3212,	// (0x000327d2) list_double_large_graphic_pane_vc_g2

0x3226,	// (0x000327e6) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3226,	// (0x000327e6) list_double_large_graphic_pane_vc_g3

0x3235,	// (0x000327f5) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3235,	// (0x000327f5) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa47,	// (0x0003f007) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0003f007) list_double_large_graphic_pane_vc_g

0x3241,	// (0x00032801) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3241,	// (0x00032801) list_double_large_graphic_pane_vc_t1

0x325d,	// (0x0003281d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x325d,	// (0x0003281d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0003f010) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0003f010) list_double_large_graphic_pane_vc_t

0x1723,	// (0x00030ce3) list_double_heading_pane_vc_g1_ParamLimits

0x1723,	// (0x00030ce3) list_double_heading_pane_vc_g1

0x172f,	// (0x00030cef) list_double_heading_pane_vc_g2_ParamLimits

0x172f,	// (0x00030cef) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003eb88) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003eb88) list_double_heading_pane_vc_g

0x327f,	// (0x0003283f) list_double_heading_pane_vc_t1_ParamLimits

0x327f,	// (0x0003283f) list_double_heading_pane_vc_t1

0x17a6,	// (0x00030d66) list_double_heading_pane_vc_t2_ParamLimits

0x17a6,	// (0x00030d66) list_double_heading_pane_vc_t2

0x0001,

0xfa55,	// (0x0003f015) list_double_heading_pane_vc_t_ParamLimits

0xfa55,	// (0x0003f015) list_double_heading_pane_vc_t

0x3293,	// (0x00032853) list_double_graphic_pane_vc_g1_ParamLimits

0x3293,	// (0x00032853) list_double_graphic_pane_vc_g1

0x329f,	// (0x0003285f) list_double_graphic_pane_vc_g2_ParamLimits

0x329f,	// (0x0003285f) list_double_graphic_pane_vc_g2

0x1723,	// (0x00030ce3) list_double_graphic_pane_vc_g3_ParamLimits

0x1723,	// (0x00030ce3) list_double_graphic_pane_vc_g3

0x0003,

0xfa5a,	// (0x0003f01a) list_double_graphic_pane_vc_g_ParamLimits

0xfa5a,	// (0x0003f01a) list_double_graphic_pane_vc_g

0x32bc,	// (0x0003287c) list_double_graphic_pane_vc_t1_ParamLimits

0x32bc,	// (0x0003287c) list_double_graphic_pane_vc_t1

0x32e6,	// (0x000328a6) list_double_graphic_pane_vc_t2_ParamLimits

0x32e6,	// (0x000328a6) list_double_graphic_pane_vc_t2

0x0001,

0xfa63,	// (0x0003f023) list_double_graphic_pane_vc_t_ParamLimits

0xfa63,	// (0x0003f023) list_double_graphic_pane_vc_t

0xf4d4,	// (0x0003ea94) aid_size_cell_fastswap

0xb559,	// (0x0003ab19) aid_size_cell_touch_ParamLimits

0xb559,	// (0x0003ab19) aid_size_cell_touch

0x018f,	// (0x0002f74f) popup_fast_swap_wide_window_ParamLimits

0x018f,	// (0x0002f74f) popup_fast_swap_wide_window

0xb709,	// (0x0003acc9) touch_pane_ParamLimits

0xb709,	// (0x0003acc9) touch_pane

0x3dc9,	// (0x00033389) button_value_adjust_pane_cp2

0x084c,	// (0x0002fe0c) button_value_adjust_pane_cp4

0x086c,	// (0x0002fe2c) form_field_data_pane_cp2

0xbb8b,	// (0x0003b14b) form_field_data_wide_pane_cp2

0x424a,	// (0x0003380a) bg_scroll_pane_ParamLimits

0x0c4c,	// (0x0003020c) scroll_handle_pane_ParamLimits

0x0c60,	// (0x00030220) scroll_sc2_down_pane_ParamLimits

0x0c60,	// (0x00030220) scroll_sc2_down_pane

0x427b,	// (0x0003383b) scroll_sc2_up_pane_ParamLimits

0x427b,	// (0x0003383b) scroll_sc2_up_pane

0xdf80,	// (0x0003d540) grid_wheel_folder_pane_g1_ParamLimits

0xdf80,	// (0x0003d540) grid_wheel_folder_pane_g1

0x0eaf,	// (0x0003046f) clock_nsta_pane_cp2_ParamLimits

0x0eaf,	// (0x0003046f) clock_nsta_pane_cp2

0x4db1,	// (0x00034371) listscroll_midp_pane_ParamLimits

0xd414,	// (0x0003c9d4) midp_canvas_pane

0x4d63,	// (0x00034323) nsta_clock_indic_pane

0x4d97,	// (0x00034357) listscroll_form_pane_vc

0x4d9f,	// (0x0003435f) listscroll_set_pane_vc_ParamLimits

0x4d9f,	// (0x0003435f) listscroll_set_pane_vc

0xd699,	// (0x0003cc59) clock_nsta_pane

0xd6c3,	// (0x0003cc83) indicator_nsta_pane

0x51f9,	// (0x000347b9) bg_popup_sub_pane_cp2_ParamLimits

0x520d,	// (0x000347cd) find_pane_cp2_ParamLimits

0x520d,	// (0x000347cd) find_pane_cp2

0x5223,	// (0x000347e3) grid_toobar_pane_ParamLimits

0x5303,	// (0x000348c3) list_form_gen_pane_vc_ParamLimits

0x5303,	// (0x000348c3) list_form_gen_pane_vc

0x5319,	// (0x000348d9) scroll_pane_cp8_vc_ParamLimits

0x5319,	// (0x000348d9) scroll_pane_cp8_vc

0x5395,	// (0x00034955) data_form_wide_pane_vc_ParamLimits

0x5395,	// (0x00034955) data_form_wide_pane_vc

0x53a1,	// (0x00034961) form_field_data_wide_pane_vc_g1

0x53a9,	// (0x00034969) form_field_data_wide_pane_vc_t1_ParamLimits

0x53a9,	// (0x00034969) form_field_data_wide_pane_vc_t1

0x3ddd,	// (0x0003339d) input_focus_pane_cp6_vc_ParamLimits

0x3ddd,	// (0x0003339d) input_focus_pane_cp6_vc

0xda3f,	// (0x0003cfff) list_midp_pane_ParamLimits

0x6a34,	// (0x00035ff4) scroll_pane_cp16_ParamLimits

0x6a34,	// (0x00035ff4) scroll_pane_cp16

0x572f,	// (0x00034cef) button_value_adjust_pane_ParamLimits

0x572f,	// (0x00034cef) button_value_adjust_pane

0xdbe0,	// (0x0003d1a0) button_value_adjust_pane_cp6_ParamLimits

0xdbe0,	// (0x0003d1a0) button_value_adjust_pane_cp6

0xdcfa,	// (0x0003d2ba) settings_code_pane_cp_ParamLimits

0xdcfa,	// (0x0003d2ba) settings_code_pane_cp

0x2cd3,	// (0x00032293) cell_touch_pane_g1

0x2cd3,	// (0x00032293) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0003ecc3) cell_touch_pane_g

0xde6e,	// (0x0003d42e) cell_touch_pane_cp_ParamLimits

0xde6e,	// (0x0003d42e) cell_touch_pane_cp

0xde8a,	// (0x0003d44a) cell_touch_pane_ParamLimits

0xde8a,	// (0x0003d44a) cell_touch_pane

0x2cd3,	// (0x00032293) scroll_sc2_down_pane_g1

0x2cd3,	// (0x00032293) scroll_sc2_up_pane_g1

0x2cdd,	// (0x0003229d) bg_set_opt_pane_cp4_vc

0x6dc4,	// (0x00036384) list_set_graphic_pane_vc_g1_ParamLimits

0x6dc4,	// (0x00036384) list_set_graphic_pane_vc_g1

0x6dd0,	// (0x00036390) list_set_graphic_pane_vc_g2_ParamLimits

0x6dd0,	// (0x00036390) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0003efb3) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0003efb3) list_set_graphic_pane_vc_g

0x6ddc,	// (0x0003639c) text_primary_small_cp13_vc_ParamLimits

0x6ddc,	// (0x0003639c) text_primary_small_cp13_vc

0x6df4,	// (0x000363b4) list_set_graphic_pane_vc_ParamLimits

0x6df4,	// (0x000363b4) list_set_graphic_pane_vc

0x2cdd,	// (0x0003229d) input_focus_pane_cp2_vc

0x2cd3,	// (0x00032293) setting_code_pane_vc_g1

0x2e08,	// (0x000323c8) setting_code_pane_vc_t1

0x6e07,	// (0x000363c7) set_text_pane_vc_t1_ParamLimits

0x6e07,	// (0x000363c7) set_text_pane_vc_t1

0x2cdd,	// (0x0003229d) input_focus_pane_cp1_vc

0x6e23,	// (0x000363e3) list_set_text_pane_vc

0x2cd3,	// (0x00032293) setting_text_pane_vc_g1

0x2cdd,	// (0x0003229d) bg_set_opt_pane_cp2_vc

0x2dff,	// (0x000323bf) setting_slider_graphic_pane_vc_g1

0x6e2d,	// (0x000363ed) setting_slider_graphic_pane_vc_t1

0x6e3d,	// (0x000363fd) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0003efb8) setting_slider_graphic_pane_vc_t

0x6e4d,	// (0x0003640d) slider_set_pane_cp_vc

0x6e55,	// (0x00036415) slider_set_pane_vc_g1

0x6e5e,	// (0x0003641e) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0003efbd) slider_set_pane_vc_g

0x3e38,	// (0x000333f8) set_opt_bg_pane_g1_copy1

0x3e40,	// (0x00033400) set_opt_bg_pane_g2_copy1

0x6e8a,	// (0x0003644a) set_opt_bg_pane_g3_copy1

0x3e50,	// (0x00033410) set_opt_bg_pane_g4_copy1

0x3e58,	// (0x00033418) set_opt_bg_pane_g5_copy1

0x3e60,	// (0x00033420) set_opt_bg_pane_g6_copy1

0x6e94,	// (0x00036454) set_opt_bg_pane_g7_copy1

0x6e9c,	// (0x0003645c) set_opt_bg_pane_g8_copy1

0x6ea6,	// (0x00036466) set_opt_bg_pane_g9_copy1

0x2cdd,	// (0x0003229d) bg_set_opt_pane_cp_vc

0x6eb0,	// (0x00036470) setting_slider_pane_vc_t1

0x6ebf,	// (0x0003647f) setting_slider_pane_vc_t2

0x6ecf,	// (0x0003648f) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0003efcc) setting_slider_pane_vc_t

0x6edf,	// (0x0003649f) slider_set_pane_vc

0x1950,	// (0x00030f10) volume_set_pane_vc_g1

0x1959,	// (0x00030f19) volume_set_pane_vc_g2

0x1962,	// (0x00030f22) volume_set_pane_vc_g3

0x196b,	// (0x00030f2b) volume_set_pane_vc_g4

0x1974,	// (0x00030f34) volume_set_pane_vc_g5

0x197d,	// (0x00030f3d) volume_set_pane_vc_g6

0x1986,	// (0x00030f46) volume_set_pane_vc_g7

0x198f,	// (0x00030f4f) volume_set_pane_vc_g8

0x1998,	// (0x00030f58) volume_set_pane_vc_g9

0x19a1,	// (0x00030f61) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0003ee71) volume_set_pane_vc_g

0x6ee7,	// (0x000364a7) volume_set_pane_vc

0x6eef,	// (0x000364af) button_value_adjust_pane_cp1_vc

0x6ef9,	// (0x000364b9) list_highlight_pane_cp2_vc

0x6f02,	// (0x000364c2) list_set_pane_vc_ParamLimits

0x6f02,	// (0x000364c2) list_set_pane_vc

0x6f60,	// (0x00036520) main_pane_set_vc_t1_ParamLimits

0x6f60,	// (0x00036520) main_pane_set_vc_t1

0x6f75,	// (0x00036535) main_pane_set_vc_t2_ParamLimits

0x6f75,	// (0x00036535) main_pane_set_vc_t2

0x6f87,	// (0x00036547) main_pane_set_vc_t3_ParamLimits

0x6f87,	// (0x00036547) main_pane_set_vc_t3

0x6f9b,	// (0x0003655b) main_pane_set_vc_t4_ParamLimits

0x6f9b,	// (0x0003655b) main_pane_set_vc_t4

0x0003,

0xfa13,	// (0x0003efd3) main_pane_set_vc_t_ParamLimits

0xfa13,	// (0x0003efd3) main_pane_set_vc_t

0x6faf,	// (0x0003656f) setting_code_pane_vc_ParamLimits

0x6faf,	// (0x0003656f) setting_code_pane_vc

0x6fc0,	// (0x00036580) setting_slider_graphic_pane_vc

0x6fc0,	// (0x00036580) setting_slider_pane_vc

0x6fc0,	// (0x00036580) setting_text_pane_vc

0x6fc0,	// (0x00036580) setting_volume_pane_vc

0x6fca,	// (0x0003658a) scroll_pane_cp121_vc

0x3db7,	// (0x00033377) set_content_pane_vc

0x6fd2,	// (0x00036592) button_value_adjust_pane_g1

0x6fdb,	// (0x0003659b) button_value_adjust_pane_g2

0x0001,

0xfa68,	// (0x0003f028) button_value_adjust_pane_g

0x6fe4,	// (0x000365a4) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6fe4,	// (0x000365a4) form_field_slider_wide_pane_vc_t1

0x6ff8,	// (0x000365b8) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6ff8,	// (0x000365b8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6d,	// (0x0003f02d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003f02d) form_field_slider_wide_pane_vc_t

0x37e9,	// (0x00032da9) input_focus_pane_cp10_vc_ParamLimits

0x37e9,	// (0x00032da9) input_focus_pane_cp10_vc

0x7026,	// (0x000365e6) slider_cont_pane_cp1_vc_ParamLimits

0x7026,	// (0x000365e6) slider_cont_pane_cp1_vc

0x7038,	// (0x000365f8) slider_form_pane_g1_cp2

0x6e5e,	// (0x0003641e) slider_form_pane_g2_cp2

0x7065,	// (0x00036625) form_field_slider_pane_vc_t3

0x7073,	// (0x00036633) form_field_slider_pane_vc_t4

0x7081,	// (0x00036641) slider_form_pane_vc_ParamLimits

0x7081,	// (0x00036641) slider_form_pane_vc

0x708e,	// (0x0003664e) form_field_slider_pane_vc_t1_ParamLimits

0x708e,	// (0x0003664e) form_field_slider_pane_vc_t1

0x6ff8,	// (0x000365b8) form_field_slider_pane_vc_t2_ParamLimits

0x6ff8,	// (0x000365b8) form_field_slider_pane_vc_t2

0x0001,

0xfa7f,	// (0x0003f03f) form_field_slider_pane_vc_t_ParamLimits

0xfa7f,	// (0x0003f03f) form_field_slider_pane_vc_t

0x37e9,	// (0x00032da9) input_focus_pane_cp9_vc_ParamLimits

0x37e9,	// (0x00032da9) input_focus_pane_cp9_vc

0x70aa,	// (0x0003666a) slider_cont_pane_vc_ParamLimits

0x70aa,	// (0x0003666a) slider_cont_pane_vc

0x70be,	// (0x0003667e) list_form_graphic_pane_cp_vc_ParamLimits

0x70be,	// (0x0003667e) list_form_graphic_pane_cp_vc

0x53a1,	// (0x00034961) form_field_popup_wide_pane_vc_g1

0x70d3,	// (0x00036693) form_field_popup_wide_pane_vc_t1_ParamLimits

0x70d3,	// (0x00036693) form_field_popup_wide_pane_vc_t1

0x3ddd,	// (0x0003339d) input_focus_pane_cp8_vc_ParamLimits

0x3ddd,	// (0x0003339d) input_focus_pane_cp8_vc

0x7118,	// (0x000366d8) list_form_wide_pane_vc_ParamLimits

0x7118,	// (0x000366d8) list_form_wide_pane_vc

0x7124,	// (0x000366e4) list_form_graphic_pane_vc_g1

0x712c,	// (0x000366ec) list_form_graphic_pane_vc_t1_ParamLimits

0x712c,	// (0x000366ec) list_form_graphic_pane_vc_t1

0x2dbd,	// (0x0003237d) list_highlight_pane_cp5_vc_ParamLimits

0x2dbd,	// (0x0003237d) list_highlight_pane_cp5_vc

0x7148,	// (0x00036708) list_form_graphic_pane_vc_ParamLimits

0x7148,	// (0x00036708) list_form_graphic_pane_vc

0x53a1,	// (0x00034961) form_field_popup_pane_vc_g1

0x715e,	// (0x0003671e) form_field_popup_pane_vc_t1_ParamLimits

0x715e,	// (0x0003671e) form_field_popup_pane_vc_t1

0x3ddd,	// (0x0003339d) input_focus_pane_cp7_vc_ParamLimits

0x3ddd,	// (0x0003339d) input_focus_pane_cp7_vc

0x7175,	// (0x00036735) list_form_pane_vc_ParamLimits

0x7175,	// (0x00036735) list_form_pane_vc

0x7181,	// (0x00036741) data_form_pane_vc_t1_ParamLimits

0x7181,	// (0x00036741) data_form_pane_vc_t1

0x3e38,	// (0x000333f8) input_focus_pane_vc_g1

0x3e40,	// (0x00033400) input_focus_pane_vc_g2

0x3e48,	// (0x00033408) input_focus_pane_vc_g3

0x3e50,	// (0x00033410) input_focus_pane_vc_g4

0x3e58,	// (0x00033418) input_focus_pane_vc_g5

0x3e60,	// (0x00033420) input_focus_pane_vc_g6

0x3e68,	// (0x00033428) input_focus_pane_vc_g7

0x3e70,	// (0x00033430) input_focus_pane_vc_g8

0x3e78,	// (0x00033438) input_focus_pane_vc_g9

0x2cd3,	// (0x00032293) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0003ec4c) input_focus_pane_vc_g

0x5395,	// (0x00034955) data_form_pane_vc_ParamLimits

0x5395,	// (0x00034955) data_form_pane_vc

0x53a1,	// (0x00034961) form_field_data_pane_vc_g1

0x719c,	// (0x0003675c) form_field_data_pane_vc_t1_ParamLimits

0x719c,	// (0x0003675c) form_field_data_pane_vc_t1

0x3ddd,	// (0x0003339d) input_focus_pane_vc_ParamLimits

0x3ddd,	// (0x0003339d) input_focus_pane_vc

0x71b6,	// (0x00036776) button_value_adjust_pane_cp3_vc

0x71be,	// (0x0003677e) button_value_adjust_pane_cp5_vc

0x71c6,	// (0x00036786) form_field_data_pane_vc_ParamLimits

0x71c6,	// (0x00036786) form_field_data_pane_vc

0x71dd,	// (0x0003679d) form_field_data_pane_vc_cp2

0x71e5,	// (0x000367a5) form_field_data_wide_pane_vc_ParamLimits

0x71e5,	// (0x000367a5) form_field_data_wide_pane_vc

0x71fb,	// (0x000367bb) form_field_data_wide_pane_vc_cp2

0x7203,	// (0x000367c3) form_field_popup_pane_vc_ParamLimits

0x7203,	// (0x000367c3) form_field_popup_pane_vc

0x721a,	// (0x000367da) form_field_popup_wide_pane_vc_ParamLimits

0x721a,	// (0x000367da) form_field_popup_wide_pane_vc

0x7230,	// (0x000367f0) form_field_slider_pane_vc_ParamLimits

0x7230,	// (0x000367f0) form_field_slider_pane_vc

0x7243,	// (0x00036803) form_field_slider_wide_pane_vc_ParamLimits

0x7243,	// (0x00036803) form_field_slider_wide_pane_vc

0xdea8,	// (0x0003d468) grid_touch_1_pane_ParamLimits

0xdea8,	// (0x0003d468) grid_touch_1_pane

0xdebc,	// (0x0003d47c) grid_touch_2_pane_ParamLimits

0xdebc,	// (0x0003d47c) grid_touch_2_pane

0x7311,	// (0x000368d1) touch_pane_g1_ParamLimits

0x7311,	// (0x000368d1) touch_pane_g1

0x727a,	// (0x0003683a) cell_app_pane_cp_wide_ParamLimits

0x727a,	// (0x0003683a) cell_app_pane_cp_wide

0x728b,	// (0x0003684b) grid_popup_fast_wide_pane_ParamLimits

0x728b,	// (0x0003684b) grid_popup_fast_wide_pane

0x729f,	// (0x0003685f) scroll_pane_cp19_ParamLimits

0x729f,	// (0x0003685f) scroll_pane_cp19

0x2cdd,	// (0x0003229d) bg_popup_window_pane_cp20

0x72b3,	// (0x00036873) listscroll_popup_fast_wide_pane

0x3fa0,	// (0x00033560) grid_indicator_nsta_pane

0x72bb,	// (0x0003687b) clock_nsta_pane_g1

0x72c4,	// (0x00036884) clock_nsta_pane_t1

0xdee6,	// (0x0003d4a6) cell_indicator_nsta_pane_ParamLimits

0xdee6,	// (0x0003d4a6) cell_indicator_nsta_pane

0x7311,	// (0x000368d1) cell_indicator_nsta_pane_g1

0xdefd,	// (0x0003d4bd) cell_indicator_nsta_pane_g2

0x0001,

0xfa90,	// (0x0003f050) cell_indicator_nsta_pane_g

0x732c,	// (0x000368ec) clock_nsta_pane_cp

0x7334,	// (0x000368f4) indicator_nsta_pane_cp

0x733c,	// (0x000368fc) nsta_clock_indic_pane_g1

0x2e86,	// (0x00032446) grid_indicator_pane

0x4370,	// (0x00033930) scroll_pane_cp29

0x0dfe,	// (0x000303be) indicator_nsta_pane_cp2_ParamLimits

0x0dfe,	// (0x000303be) indicator_nsta_pane_cp2

0x2dbd,	// (0x0003237d) main_apps_wheel_pane

0x55b6,	// (0x00034b76) form_midp_field_text_pane_ParamLimits

0x5701,	// (0x00034cc1) scroll_bar_cp050_ParamLimits

0x739d,	// (0x0003695d) cell_indicator_pane_ParamLimits

0x739d,	// (0x0003695d) cell_indicator_pane

0x73b4,	// (0x00036974) cell_indicator_pane_g1

0xdf0a,	// (0x0003d4ca) grid_wheel_folder_pane_ParamLimits

0xdf0a,	// (0x0003d4ca) grid_wheel_folder_pane

0xdf18,	// (0x0003d4d8) list_wheel_apps_pane_ParamLimits

0xdf18,	// (0x0003d4d8) list_wheel_apps_pane

0xdf26,	// (0x0003d4e6) main_apps_wheel_pane_g1_ParamLimits

0xdf26,	// (0x0003d4e6) main_apps_wheel_pane_g1

0xdf32,	// (0x0003d4f2) main_apps_wheel_pane_g2_ParamLimits

0xdf32,	// (0x0003d4f2) main_apps_wheel_pane_g2

0x0001,

0xfaac,	// (0x0003f06c) main_apps_wheel_pane_g_ParamLimits

0xfaac,	// (0x0003f06c) main_apps_wheel_pane_g

0xdf40,	// (0x0003d500) main_apps_wheel_pane_t1_ParamLimits

0xdf40,	// (0x0003d500) main_apps_wheel_pane_t1

0xdf54,	// (0x0003d514) list_wheel_apps_pane_g1

0xdf5c,	// (0x0003d51c) list_wheel_apps_pane_g2

0xdf64,	// (0x0003d524) list_wheel_apps_pane_g3

0xdf6c,	// (0x0003d52c) list_wheel_apps_pane_g4

0xdf76,	// (0x0003d536) list_wheel_apps_pane_g5

0x0004,

0xfab1,	// (0x0003f071) list_wheel_apps_pane_g

0x48f3,	// (0x00033eb3) navi_icon_text_pane

0xd58d,	// (0x0003cb4d) aid_fill_nsta

0x7479,	// (0x00036a39) navi_icon_text_pane_g1

0x7485,	// (0x00036a45) navi_icon_text_pane_t1

0xd3f1,	// (0x0003c9b1) list_set_graphic_pane_t1_ParamLimits

0xd3f1,	// (0x0003c9b1) list_set_graphic_pane_t1

0x5e50,	// (0x00035410) popup_midp_note_alarm_window_t6_ParamLimits

0x5e50,	// (0x00035410) popup_midp_note_alarm_window_t6

0x5e62,	// (0x00035422) popup_midp_note_alarm_window_t7_ParamLimits

0x5e62,	// (0x00035422) popup_midp_note_alarm_window_t7

0x5e74,	// (0x00035434) popup_midp_note_alarm_window_t8_ParamLimits

0x5e74,	// (0x00035434) popup_midp_note_alarm_window_t8

0x5e86,	// (0x00035446) popup_midp_note_alarm_window_t9_ParamLimits

0x5e86,	// (0x00035446) popup_midp_note_alarm_window_t9

0x5e98,	// (0x00035458) popup_midp_note_alarm_window_t10_ParamLimits

0x5e98,	// (0x00035458) popup_midp_note_alarm_window_t10

0x5eaa,	// (0x0003546a) popup_midp_note_alarm_window_t11_ParamLimits

0x5eaa,	// (0x0003546a) popup_midp_note_alarm_window_t11

0x5ebc,	// (0x0003547c) scroll_pane_cp17_ParamLimits

0x5ebc,	// (0x0003547c) scroll_pane_cp17

0x1950,	// (0x00030f10) volume_small_pane_cp_g1

0x1c9b,	// (0x0003125b) volume_small_pane_cp_g2

0x1ca4,	// (0x00031264) volume_small_pane_cp_g3

0x1cad,	// (0x0003126d) volume_small_pane_cp_g4

0x1cb6,	// (0x00031276) volume_small_pane_cp_g5

0x1cbf,	// (0x0003127f) volume_small_pane_cp_g6

0x1cc8,	// (0x00031288) volume_small_pane_cp_g7

0x1cd1,	// (0x00031291) volume_small_pane_cp_g8

0x1cda,	// (0x0003129a) volume_small_pane_cp_g9

0x1ce3,	// (0x000312a3) volume_small_pane_cp_g10

0x4b44,	// (0x00034104) midp_ticker_pane_g1_ParamLimits

0x4b50,	// (0x00034110) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0003ed18) midp_ticker_pane_g_ParamLimits

0x4b5c,	// (0x0003411c) midp_ticker_pane_t1_ParamLimits

0xd5b1,	// (0x0003cb71) aid_fill_nsta_2

0x56ed,	// (0x00034cad) list_form2_midp_pane

0x6822,	// (0x00035de2) midp_editing_number_pane_ParamLimits

0x6831,	// (0x00035df1) midp_ticker_pane_ParamLimits

0x7497,	// (0x00036a57) form2_midp_field_pane

0x74c7,	// (0x00036a87) scroll_pane_cp51

0x74e7,	// (0x00036aa7) form2_midp_button_pane_ParamLimits

0x74e7,	// (0x00036aa7) form2_midp_button_pane

0x74f9,	// (0x00036ab9) form2_midp_content_pane_ParamLimits

0x74f9,	// (0x00036ab9) form2_midp_content_pane

0x7513,	// (0x00036ad3) form2_midp_field_choice_group_pane

0x751b,	// (0x00036adb) form2_midp_field_pane_g1

0x7523,	// (0x00036ae3) form2_midp_field_pane_g2

0x752b,	// (0x00036aeb) form2_midp_field_pane_g3

0x7533,	// (0x00036af3) form2_midp_field_pane_g4

0x0003,

0xfad6,	// (0x0003f096) form2_midp_field_pane_g

0x753b,	// (0x00036afb) form2_midp_gauge_slider_pane

0x7543,	// (0x00036b03) form2_midp_gauge_wait_pane

0x754b,	// (0x00036b0b) form2_midp_image_pane_ParamLimits

0x754b,	// (0x00036b0b) form2_midp_image_pane

0x7566,	// (0x00036b26) form2_midp_label_pane_ParamLimits

0x7566,	// (0x00036b26) form2_midp_label_pane

0xdfa9,	// (0x0003d569) form2_midp_label_pane_cp_ParamLimits

0xdfa9,	// (0x0003d569) form2_midp_label_pane_cp

0x75a0,	// (0x00036b60) form2_midp_string_pane_ParamLimits

0x75a0,	// (0x00036b60) form2_midp_string_pane

0xc68f,	// (0x0003bc4f) form2_midp_text_pane_ParamLimits

0xc68f,	// (0x0003bc4f) form2_midp_text_pane

0x75b2,	// (0x00036b72) form2_midp_time_pane

0x75c2,	// (0x00036b82) input_focus_pane_cp51_ParamLimits

0x75c2,	// (0x00036b82) input_focus_pane_cp51

0x75da,	// (0x00036b9a) form2_midp_label_pane_t1_ParamLimits

0x75da,	// (0x00036b9a) form2_midp_label_pane_t1

0xc6a8,	// (0x0003bc68) form2_mdip_text_pane_t1_ParamLimits

0xc6a8,	// (0x0003bc68) form2_mdip_text_pane_t1

0x3349,	// (0x00032909) form2_midp_time_pane_t1

0x7623,	// (0x00036be3) form2_midp_gauge_slider_pane_t1

0xdfc8,	// (0x0003d588) form2_midp_gauge_slider_pane_t2

0xdfda,	// (0x0003d59a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfadf,	// (0x0003f09f) form2_midp_gauge_slider_pane_t

0x7659,	// (0x00036c19) form2_midp_slider_pane

0x7665,	// (0x00036c25) form2_midp_gauge_wait_pane_t1

0x7673,	// (0x00036c33) form2_midp_wait_pane_ParamLimits

0x7673,	// (0x00036c33) form2_midp_wait_pane

0xdfec,	// (0x0003d5ac) list_single_2graphic_pane_cp4_ParamLimits

0xdfec,	// (0x0003d5ac) list_single_2graphic_pane_cp4

0xd9cd,	// (0x0003cf8d) list_single_midp_graphic_pane_cp_ParamLimits

0xd9cd,	// (0x0003cf8d) list_single_midp_graphic_pane_cp

0x2cdd,	// (0x0003229d) list_highlight_pane_cp20

0x76cd,	// (0x00036c8d) list_single_2graphic_pane_g1_cp4

0x76d5,	// (0x00036c95) list_single_2graphic_pane_g2_cp4

0x76dd,	// (0x00036c9d) list_single_2graphic_pane_t1_cp4

0x2dbd,	// (0x0003237d) list_highlight_pane_cp21

0x76ec,	// (0x00036cac) list_single_midp_graphic_pane_g4_cp

0x76fb,	// (0x00036cbb) list_single_midp_graphic_pane_t1_cp

0xe000,	// (0x0003d5c0) form2_mdip_string_pane_t1_ParamLimits

0xe000,	// (0x0003d5c0) form2_mdip_string_pane_t1

0x2cdd,	// (0x0003229d) bg_wml_button_pane_cp2

0x2cd3,	// (0x00032293) form2_midp_image_pane_g1

0x0636,	// (0x0002fbf6) list_double_large_graphic_pane_g5_ParamLimits

0x0636,	// (0x0002fbf6) list_double_large_graphic_pane_g5

0x4db1,	// (0x00034371) midp_form_pane_ParamLimits

0x2dbd,	// (0x0003237d) main_apps_wheel_pane_ParamLimits

0xc2f4,	// (0x0003b8b4) popup_preview_window_ParamLimits

0xc2f4,	// (0x0003b8b4) popup_preview_window

0x1692,	// (0x00030c52) popup_touch_info_window_ParamLimits

0x1692,	// (0x00030c52) popup_touch_info_window

0x16b0,	// (0x00030c70) popup_touch_menu_window_ParamLimits

0x16b0,	// (0x00030c70) popup_touch_menu_window

0x2cc9,	// (0x00032289) bg_popup_sub_pane_cp6

0x7809,	// (0x00036dc9) list_touch_menu_pane

0x7811,	// (0x00036dd1) list_single_touch_menu_pane_ParamLimits

0x7811,	// (0x00036dd1) list_single_touch_menu_pane

0x7827,	// (0x00036de7) list_single_touch_menu_pane_t1

0x2dbd,	// (0x0003237d) bg_popup_sub_pane_cp7_ParamLimits

0x2dbd,	// (0x0003237d) bg_popup_sub_pane_cp7

0x7835,	// (0x00036df5) heading_sub_pane

0x783d,	// (0x00036dfd) list_touch_info_pane_ParamLimits

0x783d,	// (0x00036dfd) list_touch_info_pane

0x784c,	// (0x00036e0c) list_single_touch_info_pane_ParamLimits

0x784c,	// (0x00036e0c) list_single_touch_info_pane

0x785e,	// (0x00036e1e) list_single_touch_info_pane_t1

0x786c,	// (0x00036e2c) list_single_touch_info_pane_t2

0x0001,

0xfaed,	// (0x0003f0ad) list_single_touch_info_pane_t

0x4a73,	// (0x00034033) bg_popup_heading_pane_cp

0x787a,	// (0x00036e3a) heading_sub_pane_t1

0x532f,	// (0x000348ef) bg_popup_preview_window_pane_cp_ParamLimits

0x532f,	// (0x000348ef) bg_popup_preview_window_pane_cp

0x7835,	// (0x00036df5) heading_preview_pane

0x783d,	// (0x00036dfd) list_preview_pane_ParamLimits

0x783d,	// (0x00036dfd) list_preview_pane

0x7888,	// (0x00036e48) popup_preview_window_g1

0x784c,	// (0x00036e0c) list_single_preview_pane_ParamLimits

0x784c,	// (0x00036e0c) list_single_preview_pane

0x7890,	// (0x00036e50) list_single_preview_pane_g1

0x7898,	// (0x00036e58) list_single_preview_pane_t1

0x785e,	// (0x00036e1e) list_single_preview_pane_t2

0x0001,

0xfaf2,	// (0x0003f0b2) list_single_preview_pane_t

0x78a6,	// (0x00036e66) bg_popup_heading_pane_cp2_ParamLimits

0x78a6,	// (0x00036e66) bg_popup_heading_pane_cp2

0x78bc,	// (0x00036e7c) heading_preview_pane_g1

0x78c4,	// (0x00036e84) heading_preview_pane_t1_ParamLimits

0x78c4,	// (0x00036e84) heading_preview_pane_t1

0x2ea9,	// (0x00032469) soft_indicator_pane_t1_ParamLimits

0x3d50,	// (0x00033310) scroll_pane_ParamLimits

0x4269,	// (0x00033829) scroll_sc2_left_pane

0x4272,	// (0x00033832) scroll_sc2_right_pane

0x4291,	// (0x00033851) scroll_bg_pane_g1_ParamLimits

0x42a6,	// (0x00033866) scroll_bg_pane_g2_ParamLimits

0x42be,	// (0x0003387e) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0003eca3) scroll_bg_pane_g_ParamLimits

0x4291,	// (0x00033851) scroll_handle_pane_g1_ParamLimits

0x42e0,	// (0x000338a0) scroll_handle_pane_g2_ParamLimits

0x42be,	// (0x0003387e) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0003ecaa) scroll_handle_pane_g_ParamLimits

0x1158,	// (0x00030718) popup_choice_list_window_ParamLimits

0x1158,	// (0x00030718) popup_choice_list_window

0x5205,	// (0x000347c5) choice_list_pane

0x5287,	// (0x00034847) cell_toolbar_pane_t1

0x52af,	// (0x0003486f) toolbar_button_pane_ParamLimits

0x6382,	// (0x00035942) ai_gene_pane_1_t2_ParamLimits

0x6382,	// (0x00035942) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0003eecd) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0003eecd) ai_gene_pane_1_t

0x78e1,	// (0x00036ea1) scroll_sc2_left_pane_g1

0x78e1,	// (0x00036ea1) scroll_sc2_right_pane_g1

0x4db1,	// (0x00034371) bg_popup_sub_pane_cp10

0x78eb,	// (0x00036eab) list_choice_list_pane

0x7904,	// (0x00036ec4) list_single_choice_list_pane_ParamLimits

0x7904,	// (0x00036ec4) list_single_choice_list_pane

0x7917,	// (0x00036ed7) list_single_choice_list_pane_g1

0x3f71,	// (0x00033531) list_single_choice_list_pane_t1_ParamLimits

0x3f71,	// (0x00033531) list_single_choice_list_pane_t1

0x791f,	// (0x00036edf) choice_list_pane_g1

0x7927,	// (0x00036ee7) choice_list_pane_t1

0x2cc9,	// (0x00032289) input_focus_pane_cp11

0x4148,	// (0x00033708) title_pane_stacon_g2_ParamLimits

0x4148,	// (0x00033708) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0003ec89) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003ec89) title_pane_stacon_g

0x4a73,	// (0x00034033) cursor_press_pane

0xbfa1,	// (0x0003b561) popup_fep_hwr_window_ParamLimits

0xbfa1,	// (0x0003b561) popup_fep_hwr_window

0x127e,	// (0x0003083e) popup_fep_vkb_window_ParamLimits

0x127e,	// (0x0003083e) popup_fep_vkb_window

0x7935,	// (0x00036ef5) cursor_press_pane_g1

0x0002,

0xfb1b,	// (0x0003f0db) fep_vkb_side_pane_g_ParamLimits

0x1d25,	// (0x000312e5) fep_hwr_candidate_pane_ParamLimits

0x1d25,	// (0x000312e5) fep_hwr_candidate_pane

0x1d4f,	// (0x0003130f) fep_hwr_side_pane_ParamLimits

0x1d4f,	// (0x0003130f) fep_hwr_side_pane

0x1d6f,	// (0x0003132f) fep_hwr_top_pane_ParamLimits

0x1d6f,	// (0x0003132f) fep_hwr_top_pane

0x1d87,	// (0x00031347) fep_hwr_write_pane_ParamLimits

0x1d87,	// (0x00031347) fep_hwr_write_pane

0xfb1b,	// (0x0003f0db) fep_vkb_side_pane_g

0x793d,	// (0x00036efd) fep_hwr_top_pane_g1

0x794f,	// (0x00036f0f) fep_hwr_top_pane_g2

0x1dc1,	// (0x00031381) fep_hwr_top_pane_g3

0x0002,

0xfaf7,	// (0x0003f0b7) fep_hwr_top_pane_g

0x1dd6,	// (0x00031396) fep_hwr_top_text_pane

0x4460,	// (0x00033a20) fep_hwr_top_text_pane_g1

0x7985,	// (0x00036f45) fep_hwr_top_text_pane_t1

0x1ecc,	// (0x0003148c) fep_hwr_candidate_pane_g1

0x7bd8,	// (0x00037198) fep_vkb_keypad_pane_g3_ParamLimits

0x7bd8,	// (0x00037198) fep_vkb_keypad_pane_g3

0x7c00,	// (0x000371c0) fep_vkb_keypad_pane_g4_ParamLimits

0x7c00,	// (0x000371c0) fep_vkb_keypad_pane_g4

0x7c6f,	// (0x0003722f) fep_vkb_bottom_pane_g2_ParamLimits

0x7c6f,	// (0x0003722f) fep_vkb_bottom_pane_g2

0x0001,

0xfb22,	// (0x0003f0e2) fep_vkb_bottom_pane_g_ParamLimits

0xfb22,	// (0x0003f0e2) fep_vkb_bottom_pane_g

0x78e1,	// (0x00036ea1) cell_vkb_side_pane_g2

0x0001,

0xfb2c,	// (0x0003f0ec) cell_vkb_side_pane_g

0x7cfa,	// (0x000372ba) cell_vkb_side_pane_t1

0x7d08,	// (0x000372c8) cell_vkb_side_pane_t1_copy1

0x78e1,	// (0x00036ea1) bg_fep_vkb_candidate_pane_g2

0x7e34,	// (0x000373f4) cell_vkb_candidate_pane_ParamLimits

0x7993,	// (0x00036f53) aid_size_cell_vkb_ParamLimits

0x7993,	// (0x00036f53) aid_size_cell_vkb

0x7e34,	// (0x000373f4) cell_vkb_candidate_pane

0x1ef3,	// (0x000314b3) bg_popup_fep_shadow_pane_g1

0xe084,	// (0x0003d644) fep_vkb_bottom_pane_ParamLimits

0xe084,	// (0x0003d644) fep_vkb_bottom_pane

0x7a57,	// (0x00037017) fep_vkb_candidate_pane_ParamLimits

0x7a57,	// (0x00037017) fep_vkb_candidate_pane

0xe0a9,	// (0x0003d669) fep_vkb_keypad_pane_ParamLimits

0xe0a9,	// (0x0003d669) fep_vkb_keypad_pane

0xe0e5,	// (0x0003d6a5) fep_vkb_side_pane_ParamLimits

0xe0e5,	// (0x0003d6a5) fep_vkb_side_pane

0xe121,	// (0x0003d6e1) fep_vkb_top_pane_ParamLimits

0xe121,	// (0x0003d6e1) fep_vkb_top_pane

0x7b31,	// (0x000370f1) fep_vkb_top_pane_g1_ParamLimits

0x7b31,	// (0x000370f1) fep_vkb_top_pane_g1

0x7b40,	// (0x00037100) fep_vkb_top_pane_g2_ParamLimits

0x7b40,	// (0x00037100) fep_vkb_top_pane_g2

0x7b4f,	// (0x0003710f) fep_vkb_top_pane_g3_ParamLimits

0x7b4f,	// (0x0003710f) fep_vkb_top_pane_g3

0x0003,

0xfb12,	// (0x0003f0d2) fep_vkb_top_pane_g_ParamLimits

0xfb12,	// (0x0003f0d2) fep_vkb_top_pane_g

0x7b6d,	// (0x0003712d) fep_vkb_top_text_pane_ParamLimits

0x7b6d,	// (0x0003712d) fep_vkb_top_text_pane

0xe15d,	// (0x0003d71d) fep_vkb_side_pane_g1_ParamLimits

0xe15d,	// (0x0003d71d) fep_vkb_side_pane_g1

0x7bc7,	// (0x00037187) grid_vkb_side_pane_ParamLimits

0x7bc7,	// (0x00037187) grid_vkb_side_pane

0x1efb,	// (0x000314bb) bg_popup_fep_shadow_pane_g2

0x1f04,	// (0x000314c4) bg_popup_fep_shadow_pane_g3

0x1f0c,	// (0x000314cc) bg_popup_fep_shadow_pane_g4

0x1f15,	// (0x000314d5) bg_popup_fep_shadow_pane_g5

0x1f1f,	// (0x000314df) bg_popup_fep_shadow_pane_g6

0x1f27,	// (0x000314e7) bg_popup_fep_shadow_pane_g7

0x3e50,	// (0x00033410) bg_popup_fep_shadow_pane_g8

0x7c1e,	// (0x000371de) grid_vkb_keypad_number_pane_ParamLimits

0x7c1e,	// (0x000371de) grid_vkb_keypad_number_pane

0x7c2e,	// (0x000371ee) grid_vkb_keypad_pane_ParamLimits

0x7c2e,	// (0x000371ee) grid_vkb_keypad_pane

0x7c54,	// (0x00037214) fep_vkb_bottom_pane_g1_ParamLimits

0x7c54,	// (0x00037214) fep_vkb_bottom_pane_g1

0x7c7d,	// (0x0003723d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7c7d,	// (0x0003723d) grid_vkb_keypad_bottom_left_pane

0x7c92,	// (0x00037252) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7c92,	// (0x00037252) grid_vkb_keypad_bottom_right_pane

0x7ca7,	// (0x00037267) fep_vkb_top_text_pane_g1

0xe1a4,	// (0x0003d764) fep_vkb_top_text_pane_t1

0xe1b6,	// (0x0003d776) cell_vkb_side_pane_ParamLimits

0xe1b6,	// (0x0003d776) cell_vkb_side_pane

0x78e1,	// (0x00036ea1) cell_vkb_side_pane_g1

0x7d16,	// (0x000372d6) cell_vkb_keypad_pane_ParamLimits

0x7d16,	// (0x000372d6) cell_vkb_keypad_pane

0x7d8b,	// (0x0003734b) cell_vkb_keypad_pane_g1

0x0008,

0xfb3f,	// (0x0003f0ff) bg_popup_fep_shadow_pane_g

0x1f39,	// (0x000314f9) cell_hwr_side_pane_g1

0x1f39,	// (0x000314f9) cell_hwr_side_pane_g2

0x7d95,	// (0x00037355) cell_vkb_keypad_pane_t1

0xe1cc,	// (0x0003d78c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe1cc,	// (0x0003d78c) cell_vkb_keypad_bottom_left_pane

0xe1e1,	// (0x0003d7a1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe1e1,	// (0x0003d7a1) cell_vkb_keypad_bottom_right_pane

0x78e1,	// (0x00036ea1) cell_vkb_keypad_bottom_left_pane_g1

0x78e1,	// (0x00036ea1) cell_vkb_keypad_bottom_right_pane_g1

0x7df9,	// (0x000373b9) cell_vkb_keypad_number_pane_ParamLimits

0x7df9,	// (0x000373b9) cell_vkb_keypad_number_pane

0x7e18,	// (0x000373d8) cell_vkb_keypad_number_pane_g1

0x7e22,	// (0x000373e2) cell_vkb_keypad_number_pane_g2

0x7e2b,	// (0x000373eb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb31,	// (0x0003f0f1) cell_vkb_keypad_number_pane_g

0x7d95,	// (0x00037355) cell_vkb_keypad_number_pane_t1

0x7e4f,	// (0x0003740f) fep_vkb_candidate_pane_g1

0x0001,

0xfb52,	// (0x0003f112) cell_hwr_side_pane_g

0x7e68,	// (0x00037428) cell_hwr_side_pane_t1

0x1f43,	// (0x00031503) cell_hwr_side_pane_t1_copy1

0x1f51,	// (0x00031511) cell_hwr_candidate_pane_g1

0x1f80,	// (0x00031540) cell_hwr_candidate_pane_t1

0x78e1,	// (0x00036ea1) cell_vkb_candidate_pane_g2

0x7eac,	// (0x0003746c) cell_vkb_candidate_pane_t1

0x1cec,	// (0x000312ac) bg_popup_fep_shadow_pane_ParamLimits

0x1cec,	// (0x000312ac) bg_popup_fep_shadow_pane

0x1da1,	// (0x00031361) bg_fep_hwr_top_pane_g4

0x7961,	// (0x00036f21) bg_hwr_side_pane_g1_ParamLimits

0x7961,	// (0x00036f21) bg_hwr_side_pane_g1

0xc6dd,	// (0x0003bc9d) cell_hwr_side_pane_ParamLimits

0xc6dd,	// (0x0003bc9d) cell_hwr_side_pane

0x1e4d,	// (0x0003140d) fep_hwr_write_pane_g1_ParamLimits

0x1e4d,	// (0x0003140d) fep_hwr_write_pane_g1

0x1e5a,	// (0x0003141a) fep_hwr_write_pane_g2_ParamLimits

0x1e5a,	// (0x0003141a) fep_hwr_write_pane_g2

0x1e67,	// (0x00031427) fep_hwr_write_pane_g3_ParamLimits

0x1e67,	// (0x00031427) fep_hwr_write_pane_g3

0xc6fd,	// (0x0003bcbd) fep_hwr_write_pane_g4_ParamLimits

0xc6fd,	// (0x0003bcbd) fep_hwr_write_pane_g4

0x0005,

0xfafe,	// (0x0003f0be) fep_hwr_write_pane_g_ParamLimits

0xfafe,	// (0x0003f0be) fep_hwr_write_pane_g

0x1da1,	// (0x00031361) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1da1,	// (0x00031361) bg_fep_hwr_candidate_pane_g2

0x1e8a,	// (0x0003144a) cell_hwr_candidate_pane_ParamLimits

0x1e8a,	// (0x0003144a) cell_hwr_candidate_pane

0x1ecc,	// (0x0003148c) fep_hwr_candidate_pane_g1_ParamLimits

0x79c1,	// (0x00036f81) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x79c1,	// (0x00036f81) bg_popup_fep_shadow_pane_cp2

0x7b5f,	// (0x0003711f) fep_vkb_top_pane_g4_ParamLimits

0x7b5f,	// (0x0003711f) fep_vkb_top_pane_g4

0x7ba5,	// (0x00037165) fep_vkb_side_pane_g2_ParamLimits

0x7ba5,	// (0x00037165) fep_vkb_side_pane_g2

0xba99,	// (0x0003b059) list_setting_pane_t4_ParamLimits

0xba99,	// (0x0003b059) list_setting_pane_t4

0xbb33,	// (0x0003b0f3) list_setting_number_pane_t5_ParamLimits

0xbb33,	// (0x0003b0f3) list_setting_number_pane_t5

0x4497,	// (0x00033a57) list_double_heading_pane_cp2_ParamLimits

0x4497,	// (0x00033a57) list_double_heading_pane_cp2

0x3deb,	// (0x000333ab) list_double_heading_pane_g1_cp2_ParamLimits

0x3deb,	// (0x000333ab) list_double_heading_pane_g1_cp2

0x3df7,	// (0x000333b7) list_double_heading_pane_g2_cp2_ParamLimits

0x3df7,	// (0x000333b7) list_double_heading_pane_g2_cp2

0x7eba,	// (0x0003747a) list_double_heading_pane_t1_cp2_ParamLimits

0x7eba,	// (0x0003747a) list_double_heading_pane_t1_cp2

0x7ed0,	// (0x00037490) list_double_heading_pane_t2_cp2_ParamLimits

0x7ed0,	// (0x00037490) list_double_heading_pane_t2_cp2

0x2cb1,	// (0x00032271) aid_value_unit2

0x01e9,	// (0x0002f7a9) popup_preview_fixed_window

0x37f7,	// (0x00032db7) bg_popup_preview_window_pane_cp02

0x7ee2,	// (0x000374a2) list_preview_fixed_pane

0x7f28,	// (0x000374e8) list_empty_pane_fp_ParamLimits

0x7f28,	// (0x000374e8) list_empty_pane_fp

0x7f28,	// (0x000374e8) list_single_cale_day_pane_fp_ParamLimits

0x7f28,	// (0x000374e8) list_single_cale_day_pane_fp

0x7f28,	// (0x000374e8) list_single_graphic_heading_pane_fp_ParamLimits

0x7f28,	// (0x000374e8) list_single_graphic_heading_pane_fp

0x7f28,	// (0x000374e8) list_single_graphic_pane_fp_ParamLimits

0x7f28,	// (0x000374e8) list_single_graphic_pane_fp

0x7f28,	// (0x000374e8) list_single_heading_pane_fp_ParamLimits

0x7f28,	// (0x000374e8) list_single_heading_pane_fp

0x7f28,	// (0x000374e8) list_single_pane_fp_ParamLimits

0x7f28,	// (0x000374e8) list_single_pane_fp

0x7f3d,	// (0x000374fd) list_single_pane_fp_g1_ParamLimits

0x7f3d,	// (0x000374fd) list_single_pane_fp_g1

0x335c,	// (0x0003291c) list_single_pane_fp_g2_ParamLimits

0x335c,	// (0x0003291c) list_single_pane_fp_g2

0x3368,	// (0x00032928) list_single_pane_fp_g3_ParamLimits

0x3368,	// (0x00032928) list_single_pane_fp_g3

0x7f49,	// (0x00037509) list_single_pane_fp_g4_ParamLimits

0x7f49,	// (0x00037509) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0003f125) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0003f125) list_single_pane_fp_g

0x337c,	// (0x0003293c) list_single_pane_fp_t1_ParamLimits

0x337c,	// (0x0003293c) list_single_pane_fp_t1

0x3393,	// (0x00032953) list_single_graphic_pane_fp_g1_ParamLimits

0x3393,	// (0x00032953) list_single_graphic_pane_fp_g1

0x7f3d,	// (0x000374fd) list_single_graphic_pane_fp_g2_ParamLimits

0x7f3d,	// (0x000374fd) list_single_graphic_pane_fp_g2

0x335c,	// (0x0003291c) list_single_graphic_pane_fp_g3_ParamLimits

0x335c,	// (0x0003291c) list_single_graphic_pane_fp_g3

0x3368,	// (0x00032928) list_single_graphic_pane_fp_g4_ParamLimits

0x3368,	// (0x00032928) list_single_graphic_pane_fp_g4

0x7f49,	// (0x00037509) list_single_graphic_pane_fp_g5_ParamLimits

0x7f49,	// (0x00037509) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003f12e) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003f12e) list_single_graphic_pane_fp_g

0x339f,	// (0x0003295f) list_single_graphic_pane_fp_t1_ParamLimits

0x339f,	// (0x0003295f) list_single_graphic_pane_fp_t1

0x3393,	// (0x00032953) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3393,	// (0x00032953) list_single_graphic_heading_pane_fp_g1

0x7f3d,	// (0x000374fd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7f3d,	// (0x000374fd) list_single_graphic_heading_pane_fp_g2

0x335c,	// (0x0003291c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x335c,	// (0x0003291c) list_single_graphic_heading_pane_fp_g3

0x3368,	// (0x00032928) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3368,	// (0x00032928) list_single_graphic_heading_pane_fp_g4

0x7f49,	// (0x00037509) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7f49,	// (0x00037509) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003f12e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003f12e) list_single_graphic_heading_pane_fp_g

0x33b5,	// (0x00032975) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x33b5,	// (0x00032975) list_single_graphic_heading_pane_fp_t1

0x33cb,	// (0x0003298b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x33cb,	// (0x0003298b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0003f139) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0003f139) list_single_graphic_heading_pane_fp_t

0x33dd,	// (0x0003299d) list_single_cale_day_pane_fp_g1_ParamLimits

0x33dd,	// (0x0003299d) list_single_cale_day_pane_fp_g1

0x7f55,	// (0x00037515) list_single_cale_day_pane_fp_g2_ParamLimits

0x7f55,	// (0x00037515) list_single_cale_day_pane_fp_g2

0x3415,	// (0x000329d5) list_single_cale_day_pane_fp_g3_ParamLimits

0x3415,	// (0x000329d5) list_single_cale_day_pane_fp_g3

0x343d,	// (0x000329fd) list_single_cale_day_pane_fp_g4_ParamLimits

0x343d,	// (0x000329fd) list_single_cale_day_pane_fp_g4

0x3461,	// (0x00032a21) list_single_cale_day_pane_fp_g5_ParamLimits

0x3461,	// (0x00032a21) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003f13e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003f13e) list_single_cale_day_pane_fp_g

0x3485,	// (0x00032a45) list_single_cale_day_pane_fp_t1_ParamLimits

0x3485,	// (0x00032a45) list_single_cale_day_pane_fp_t1

0x34ab,	// (0x00032a6b) list_single_cale_day_pane_fp_t2_ParamLimits

0x34ab,	// (0x00032a6b) list_single_cale_day_pane_fp_t2

0x34c4,	// (0x00032a84) list_single_cale_day_pane_fp_t3_ParamLimits

0x34c4,	// (0x00032a84) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0003f149) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0003f149) list_single_cale_day_pane_fp_t

0x7f3d,	// (0x000374fd) list_empty_pane_fp_g1_ParamLimits

0x7f3d,	// (0x000374fd) list_empty_pane_fp_g1

0x34dd,	// (0x00032a9d) list_empty_pane_fp_t1

0x34eb,	// (0x00032aab) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0003f150) list_empty_pane_fp_t

0x7f3d,	// (0x000374fd) list_single_heading_pane_fp_g1_ParamLimits

0x7f3d,	// (0x000374fd) list_single_heading_pane_fp_g1

0x335c,	// (0x0003291c) list_single_heading_pane_fp_g2_ParamLimits

0x335c,	// (0x0003291c) list_single_heading_pane_fp_g2

0x3368,	// (0x00032928) list_single_heading_pane_fp_g3_ParamLimits

0x3368,	// (0x00032928) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0003f155) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0003f155) list_single_heading_pane_fp_g

0x34f9,	// (0x00032ab9) list_single_heading_pane_fp_t1_ParamLimits

0x34f9,	// (0x00032ab9) list_single_heading_pane_fp_t1

0x350b,	// (0x00032acb) list_single_heading_pane_fp_t2_ParamLimits

0x350b,	// (0x00032acb) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0003f15c) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0003f15c) list_single_heading_pane_fp_t

0x3fdf,	// (0x0003359f) aid_size_cell_fast

0x3767,	// (0x00032d27) soft_indicator_pane_cp1_t1

0x401c,	// (0x000335dc) cell_app_pane_cp2_ParamLimits

0x401c,	// (0x000335dc) cell_app_pane_cp2

0x1d0e,	// (0x000312ce) fep_hwr_candidate_drop_down_list_pane

0x1ee6,	// (0x000314a6) fep_hwr_candidate_pane_g3_ParamLimits

0x1ee6,	// (0x000314a6) fep_hwr_candidate_pane_g3

0xe40e,	// (0x0003d9ce) fep_hwr_candidate_pane_g4_ParamLimits

0xe40e,	// (0x0003d9ce) fep_hwr_candidate_pane_g4

0x0002,

0xfb0b,	// (0x0003f0cb) fep_hwr_candidate_pane_g_ParamLimits

0xfb0b,	// (0x0003f0cb) fep_hwr_candidate_pane_g

0x7a46,	// (0x00037006) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7a46,	// (0x00037006) fep_vkb_candidate_drop_down_list_pane

0x7e57,	// (0x00037417) fep_vkb_candidate_pane_g3

0x7e5f,	// (0x0003741f) fep_vkb_candidate_pane_g4

0x0002,

0xfb38,	// (0x0003f0f8) fep_vkb_candidate_pane_g

0x1f51,	// (0x00031511) cell_hwr_candidate_pane_g1_ParamLimits

0x1f5f,	// (0x0003151f) cell_hwr_candidate_pane_g3_ParamLimits

0x1f5f,	// (0x0003151f) cell_hwr_candidate_pane_g3

0x9396,	// (0x00038956) cell_hwr_candidate_pane_g4_ParamLimits

0x9396,	// (0x00038956) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0003f117) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0003f117) cell_hwr_candidate_pane_g

0x7e76,	// (0x00037436) cell_vkb_candidate_pane_g3_ParamLimits

0x7e76,	// (0x00037436) cell_vkb_candidate_pane_g3

0x7e91,	// (0x00037451) cell_vkb_candidate_pane_g4_ParamLimits

0x7e91,	// (0x00037451) cell_vkb_candidate_pane_g4

0x7f61,	// (0x00037521) cell_app_pane_cp2_g1_ParamLimits

0x7f61,	// (0x00037521) cell_app_pane_cp2_g1

0x7f7f,	// (0x0003753f) cell_app_pane_cp2_g2_ParamLimits

0x7f7f,	// (0x0003753f) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0003f161) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0003f161) cell_app_pane_cp2_g

0x7f8b,	// (0x0003754b) cell_app_pane_cp2_t1_ParamLimits

0x7f8b,	// (0x0003754b) cell_app_pane_cp2_t1

0x3ddd,	// (0x0003339d) grid_highlight_pane_cp1_ParamLimits

0x3ddd,	// (0x0003339d) grid_highlight_pane_cp1

0x1f9e,	// (0x0003155e) cell_hwr_candidate_pane_cp1_ParamLimits

0x1f9e,	// (0x0003155e) cell_hwr_candidate_pane_cp1

0x1f51,	// (0x00031511) fep_hwr_candidate_drop_down_list_pane_g1

0x1fbd,	// (0x0003157d) fep_hwr_candidate_drop_down_list_pane_g2

0x1fca,	// (0x0003158a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0003f166) fep_hwr_candidate_drop_down_list_pane_g

0x1fd7,	// (0x00031597) fep_hwr_candidate_drop_down_list_scroll_pane

0x1fe0,	// (0x000315a0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1fe0,	// (0x000315a0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1fed,	// (0x000315ad) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1fed,	// (0x000315ad) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1ffa,	// (0x000315ba) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1ffa,	// (0x000315ba) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x2007,	// (0x000315c7) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x2007,	// (0x000315c7) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x2022,	// (0x000315e2) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x2022,	// (0x000315e2) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x203d,	// (0x000315fd) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x203d,	// (0x000315fd) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2058,	// (0x00031618) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2058,	// (0x00031618) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2073,	// (0x00031633) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2073,	// (0x00031633) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0003f16d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0003f16d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7f9d,	// (0x0003755d) cell_vkb_candidate_pane_cp1_ParamLimits

0x7f9d,	// (0x0003755d) cell_vkb_candidate_pane_cp1

0x7b5f,	// (0x0003711f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7b5f,	// (0x0003711f) fep_vkb_candidate_drop_down_list_pane_g1

0x7fbd,	// (0x0003757d) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7fbd,	// (0x0003757d) fep_vkb_candidate_drop_down_list_pane_g2

0x7fca,	// (0x0003758a) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7fca,	// (0x0003758a) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x0003f17e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x0003f17e) fep_vkb_candidate_drop_down_list_pane_g

0x7fd7,	// (0x00037597) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7fd7,	// (0x00037597) fep_vkb_candidate_drop_down_list_scroll_pane

0x7fe4,	// (0x000375a4) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7fe4,	// (0x000375a4) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7ff1,	// (0x000375b1) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7ff1,	// (0x000375b1) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7ffd,	// (0x000375bd) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7ffd,	// (0x000375bd) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8009,	// (0x000375c9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8009,	// (0x000375c9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x802a,	// (0x000375ea) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x802a,	// (0x000375ea) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x804b,	// (0x0003760b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x804b,	// (0x0003760b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x806c,	// (0x0003762c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x806c,	// (0x0003762c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x808d,	// (0x0003764d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x808d,	// (0x0003764d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x0003f185) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x0003f185) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcec2,	// (0x0003c482) title_pane_g1_ParamLimits

0xced5,	// (0x0003c495) title_pane_g2_ParamLimits

0xf54e,	// (0x0003eb0e) title_pane_g_ParamLimits

0x4450,	// (0x00033a10) aid_call2_pane

0x4458,	// (0x00033a18) aid_call_pane

0x4460,	// (0x00033a20) popup_clock_analogue_window_g1

0x4460,	// (0x00033a20) popup_clock_analogue_window_g2

0x0c75,	// (0x00030235) popup_clock_analogue_window_g3

0x0c7e,	// (0x0003023e) popup_clock_analogue_window_g4

0x2cd3,	// (0x00032293) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0003ecb8) popup_clock_analogue_window_g

0x0c86,	// (0x00030246) popup_clock_analogue_window_t1

0x0c94,	// (0x00030254) clock_digital_number_pane_ParamLimits

0x0c94,	// (0x00030254) clock_digital_number_pane

0x0ca0,	// (0x00030260) clock_digital_number_pane_cp02_ParamLimits

0x0ca0,	// (0x00030260) clock_digital_number_pane_cp02

0x0cac,	// (0x0003026c) clock_digital_number_pane_cp03_ParamLimits

0x0cac,	// (0x0003026c) clock_digital_number_pane_cp03

0x0cb8,	// (0x00030278) clock_digital_number_pane_cp04_ParamLimits

0x0cb8,	// (0x00030278) clock_digital_number_pane_cp04

0x0cc4,	// (0x00030284) clock_digital_separator_pane_ParamLimits

0x0cc4,	// (0x00030284) clock_digital_separator_pane

0x0cd0,	// (0x00030290) popup_clock_digital_window_t1_ParamLimits

0x0cd0,	// (0x00030290) popup_clock_digital_window_t1

0x2cd3,	// (0x00032293) clock_digital_number_pane_g1

0x2cd3,	// (0x00032293) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0003ecc3) clock_digital_number_pane_g

0x2cd3,	// (0x00032293) clock_digital_separator_pane_g1

0x2cd3,	// (0x00032293) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0003ecc3) clock_digital_separator_pane_g

0xd58d,	// (0x0003cb4d) aid_fill_nsta_ParamLimits

0xd6c3,	// (0x0003cc83) indicator_nsta_pane_ParamLimits

0x5092,	// (0x00034652) popup_clock_analogue_window

0x5092,	// (0x00034652) popup_clock_digital_window

0x3fa0,	// (0x00033560) grid_indicator_nsta_pane_ParamLimits

0x72d2,	// (0x00036892) clock_nsta_pane_t2

0x0001,

0xfa8b,	// (0x0003f04b) clock_nsta_pane_t

0x0c39,	// (0x000301f9) aid_size_max_handle

0xbcd2,	// (0x0003b292) aid_size_min_handle

0x4a73,	// (0x00034033) editor_scroll_pane

0x80a8,	// (0x00037668) ex_editor_pane

0x3f4d,	// (0x0003350d) scroll_pane_cp13

0x3d7c,	// (0x0003333c) scroll_pane_cp14

0x448f,	// (0x00033a4f) scroll_pane_cp36

0xd34c,	// (0x0003c90c) list_single_graphic_hl_pane_cp2_ParamLimits

0xd34c,	// (0x0003c90c) list_single_graphic_hl_pane_cp2

0xc66b,	// (0x0003bc2b) list_single_graphic_hl_pane_ParamLimits

0xc66b,	// (0x0003bc2b) list_single_graphic_hl_pane

0x3521,	// (0x00032ae1) aid_size_min_hl_cp1

0x80b0,	// (0x00037670) list_highlight_pane_cp34_ParamLimits

0x80b0,	// (0x00037670) list_highlight_pane_cp34

0x80c1,	// (0x00037681) list_single_graphic_hl_pane_g1_ParamLimits

0x80c1,	// (0x00037681) list_single_graphic_hl_pane_g1

0xc712,	// (0x0003bcd2) list_single_graphic_hl_pane_g2_ParamLimits

0xc712,	// (0x0003bcd2) list_single_graphic_hl_pane_g2

0xc712,	// (0x0003bcd2) list_single_graphic_hl_pane_g3_ParamLimits

0xc712,	// (0x0003bcd2) list_single_graphic_hl_pane_g3

0xc71e,	// (0x0003bcde) list_single_graphic_hl_pane_g4_ParamLimits

0xc71e,	// (0x0003bcde) list_single_graphic_hl_pane_g4

0xc72a,	// (0x0003bcea) list_single_graphic_hl_pane_g5_ParamLimits

0xc72a,	// (0x0003bcea) list_single_graphic_hl_pane_g5

0x0004,

0xfbd6,	// (0x0003f196) list_single_graphic_hl_pane_g_ParamLimits

0xfbd6,	// (0x0003f196) list_single_graphic_hl_pane_g

0xc73e,	// (0x0003bcfe) list_single_graphic_hl_pane_t1_ParamLimits

0xc73e,	// (0x0003bcfe) list_single_graphic_hl_pane_t1

0x80ce,	// (0x0003768e) aid_size_min_hl_cp2

0x80d7,	// (0x00037697) list_highlight_pane_cp34_cp2_ParamLimits

0x80d7,	// (0x00037697) list_highlight_pane_cp34_cp2

0x80c1,	// (0x00037681) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x80c1,	// (0x00037681) list_single_graphic_hl_pane_g1_cp2

0x80e4,	// (0x000376a4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x80e4,	// (0x000376a4) list_single_graphic_hl_pane_g2_cp2

0x80f0,	// (0x000376b0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x80f0,	// (0x000376b0) list_single_graphic_hl_pane_g3_cp2

0x74ad,	// (0x00036a6d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x74ad,	// (0x00036a6d) list_single_graphic_hl_pane_g4_cp2

0x80fe,	// (0x000376be) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x80fe,	// (0x000376be) list_single_graphic_hl_pane_g5_cp2

0xbdb9,	// (0x0003b379) control_pane_g4_ParamLimits

0xbdb9,	// (0x0003b379) control_pane_g4

0x4db1,	// (0x00034371) bg_popup_sub_pane_cp10_ParamLimits

0x78eb,	// (0x00036eab) list_choice_list_pane_ParamLimits

0x78fa,	// (0x00036eba) scroll_pane_cp23

0x37f7,	// (0x00032db7) bg_popup_preview_window_pane_cp02_ParamLimits

0x7ee2,	// (0x000374a2) list_preview_fixed_pane_ParamLimits

0x7ef8,	// (0x000374b8) list_preview_fixed_pane_cp_ParamLimits

0x7ef8,	// (0x000374b8) list_preview_fixed_pane_cp

0x7f04,	// (0x000374c4) popup_preview_fixed_window_g1_ParamLimits

0x7f04,	// (0x000374c4) popup_preview_fixed_window_g1

0x7f10,	// (0x000374d0) popup_preview_fixed_window_g2_ParamLimits

0x7f10,	// (0x000374d0) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0003f11e) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0003f11e) popup_preview_fixed_window_g

0x0bad,	// (0x0003016d) aid_navi_side_left_pane_ParamLimits

0x0bc2,	// (0x00030182) aid_navi_side_right_pane_ParamLimits

0x0bda,	// (0x0003019a) navi_icon_pane_stacon_ParamLimits

0x0bee,	// (0x000301ae) navi_navi_pane_stacon_ParamLimits

0x0bda,	// (0x0003019a) navi_text_pane_stacon_ParamLimits

0x00aa,	// (0x0002f66a) main_text_info_pane

0x8128,	// (0x000376e8) listscroll_text_info_pane

0x8130,	// (0x000376f0) list_text_info_pane_ParamLimits

0x8130,	// (0x000376f0) list_text_info_pane

0x813f,	// (0x000376ff) scroll_pane_cp24_ParamLimits

0x813f,	// (0x000376ff) scroll_pane_cp24

0xe1fc,	// (0x0003d7bc) list_text_info_pane_t1_ParamLimits

0xe1fc,	// (0x0003d7bc) list_text_info_pane_t1

0xbf14,	// (0x0003b4d4) popup_fast_swap2_window_ParamLimits

0xbf14,	// (0x0003b4d4) popup_fast_swap2_window

0x818e,	// (0x0003774e) aid_size_cell_fast2

0x2cc9,	// (0x00032289) bg_popup_window_pane_cp17

0x5719,	// (0x00034cd9) heading_pane_cp2

0x3a46,	// (0x00033006) listscroll_fast2_pane

0x8198,	// (0x00037758) grid_fast2_pane

0x81a2,	// (0x00037762) listscroll_fast2_pane_g1

0x81aa,	// (0x0003776a) listscroll_fast2_pane_g2

0x0001,

0xfbe1,	// (0x0003f1a1) listscroll_fast2_pane_g

0x3f4d,	// (0x0003350d) scroll_pane_cp26

0x81b4,	// (0x00037774) cell_fast2_pane_ParamLimits

0x81b4,	// (0x00037774) cell_fast2_pane

0x81c9,	// (0x00037789) cell_fast2_pane_g1

0x81d2,	// (0x00037792) cell_fast2_pane_g2

0x81db,	// (0x0003779b) cell_fast2_pane_g3

0x0002,

0xfbe6,	// (0x0003f1a6) cell_fast2_pane_g

0x3b39,	// (0x000330f9) grid_highlight_pane_cp9

0x1134,	// (0x000306f4) main_eswt_pane_ParamLimits

0x1134,	// (0x000306f4) main_eswt_pane

0x8154,	// (0x00037714) list_single_text_info_pane

0x81e3,	// (0x000377a3) eswt_ctrl_button_pane

0x81e3,	// (0x000377a3) eswt_ctrl_canvas_pane

0x81eb,	// (0x000377ab) eswt_ctrl_combo_pane

0x81e3,	// (0x000377a3) eswt_ctrl_default_pane

0x81e3,	// (0x000377a3) eswt_ctrl_label_pane

0x81f3,	// (0x000377b3) eswt_ctrl_wait_pane

0x81fb,	// (0x000377bb) eswt_shell_pane

0x2cc9,	// (0x00032289) listscroll_eswt_app_pane

0x821b,	// (0x000377db) popup_eswt_tasktip_window_ParamLimits

0x821b,	// (0x000377db) popup_eswt_tasktip_window

0x532f,	// (0x000348ef) bg_popup_window_pane_cp18

0x822c,	// (0x000377ec) eswt_control_pane_g1_ParamLimits

0x822c,	// (0x000377ec) eswt_control_pane_g1

0x8239,	// (0x000377f9) eswt_control_pane_g2_ParamLimits

0x8239,	// (0x000377f9) eswt_control_pane_g2

0x8246,	// (0x00037806) eswt_control_pane_g3_ParamLimits

0x8246,	// (0x00037806) eswt_control_pane_g3

0x8253,	// (0x00037813) eswt_control_pane_g4_ParamLimits

0x8253,	// (0x00037813) eswt_control_pane_g4

0x0003,

0xfbed,	// (0x0003f1ad) eswt_control_pane_g_ParamLimits

0xfbed,	// (0x0003f1ad) eswt_control_pane_g

0x3ddd,	// (0x0003339d) bg_button_pane_ParamLimits

0x3ddd,	// (0x0003339d) bg_button_pane

0x3b4e,	// (0x0003310e) common_borders_pane_copy2_ParamLimits

0x3b4e,	// (0x0003310e) common_borders_pane_copy2

0x8260,	// (0x00037820) control_button_pane_g1_ParamLimits

0x8260,	// (0x00037820) control_button_pane_g1

0x826c,	// (0x0003782c) control_button_pane_g2_ParamLimits

0x826c,	// (0x0003782c) control_button_pane_g2

0x8278,	// (0x00037838) control_button_pane_g3_ParamLimits

0x8278,	// (0x00037838) control_button_pane_g3

0x0002,

0xfbf6,	// (0x0003f1b6) control_button_pane_g_ParamLimits

0xfbf6,	// (0x0003f1b6) control_button_pane_g

0x828c,	// (0x0003784c) control_button_pane_t1

0x829a,	// (0x0003785a) control_button_pane_t2

0x0001,

0xfbfd,	// (0x0003f1bd) control_button_pane_t

0x52bb,	// (0x0003487b) bg_button_pane_g1

0x52cb,	// (0x0003488b) bg_button_pane_g2

0x52c3,	// (0x00034883) bg_button_pane_g3

0x52db,	// (0x0003489b) bg_button_pane_g4

0x52d3,	// (0x00034893) bg_button_pane_g5

0x52e3,	// (0x000348a3) bg_button_pane_g6

0x52eb,	// (0x000348ab) bg_button_pane_g7

0x52fb,	// (0x000348bb) bg_button_pane_g8

0x52f3,	// (0x000348b3) bg_button_pane_g9

0x0008,

0xf861,	// (0x0003ee21) bg_button_pane_g

0x78a6,	// (0x00036e66) common_borders_pane_ParamLimits

0x78a6,	// (0x00036e66) common_borders_pane

0x822c,	// (0x000377ec) eswt_control_pane_g1_copy1_ParamLimits

0x822c,	// (0x000377ec) eswt_control_pane_g1_copy1

0x8239,	// (0x000377f9) eswt_control_pane_g2_copy1_ParamLimits

0x8239,	// (0x000377f9) eswt_control_pane_g2_copy1

0x8246,	// (0x00037806) eswt_control_pane_g3_copy1_ParamLimits

0x8246,	// (0x00037806) eswt_control_pane_g3_copy1

0x8253,	// (0x00037813) eswt_control_pane_g4_copy1_ParamLimits

0x8253,	// (0x00037813) eswt_control_pane_g4_copy1

0x78e1,	// (0x00036ea1) bg_eswt_ctrl_canvas_pane_g1

0x78a6,	// (0x00036e66) common_borders_pane_cp2_ParamLimits

0x78a6,	// (0x00036e66) common_borders_pane_cp2

0x78a6,	// (0x00036e66) common_borders_pane_cp3_ParamLimits

0x78a6,	// (0x00036e66) common_borders_pane_cp3

0x82a8,	// (0x00037868) separator_horizontal_pane

0x82b0,	// (0x00037870) separator_vertical_pane

0x822c,	// (0x000377ec) eswt_control_pane_g1_copy2_ParamLimits

0x822c,	// (0x000377ec) eswt_control_pane_g1_copy2

0x8239,	// (0x000377f9) eswt_control_pane_g2_copy2_ParamLimits

0x8239,	// (0x000377f9) eswt_control_pane_g2_copy2

0x8246,	// (0x00037806) eswt_control_pane_g3_copy2_ParamLimits

0x8246,	// (0x00037806) eswt_control_pane_g3_copy2

0x8253,	// (0x00037813) eswt_control_pane_g4_copy2_ParamLimits

0x8253,	// (0x00037813) eswt_control_pane_g4_copy2

0x2cc9,	// (0x00032289) common_borders_pane_cp4

0x82b9,	// (0x00037879) separator_horizontal_pane_g1

0x82c2,	// (0x00037882) separator_horizontal_pane_g2

0x82cb,	// (0x0003788b) separator_horizontal_pane_g3

0x0002,

0xfc02,	// (0x0003f1c2) separator_horizontal_pane_g

0x822c,	// (0x000377ec) eswt_control_pane_g1_copy3_ParamLimits

0x822c,	// (0x000377ec) eswt_control_pane_g1_copy3

0x8239,	// (0x000377f9) eswt_control_pane_g2_copy3_ParamLimits

0x8239,	// (0x000377f9) eswt_control_pane_g2_copy3

0x8246,	// (0x00037806) eswt_control_pane_g3_copy3_ParamLimits

0x8246,	// (0x00037806) eswt_control_pane_g3_copy3

0x8253,	// (0x00037813) eswt_control_pane_g4_copy3_ParamLimits

0x8253,	// (0x00037813) eswt_control_pane_g4_copy3

0x2cc9,	// (0x00032289) common_borders_pane_cp5

0x82d4,	// (0x00037894) separator_vertical_pane_g1

0x82dd,	// (0x0003789d) separator_vertical_pane_g2

0x82e6,	// (0x000378a6) separator_vertical_pane_g3

0x0002,

0xfc09,	// (0x0003f1c9) separator_vertical_pane_g

0x822c,	// (0x000377ec) eswt_control_pane_g1_copy4_ParamLimits

0x822c,	// (0x000377ec) eswt_control_pane_g1_copy4

0x8239,	// (0x000377f9) eswt_control_pane_g2_copy4_ParamLimits

0x8239,	// (0x000377f9) eswt_control_pane_g2_copy4

0x8246,	// (0x00037806) eswt_control_pane_g3_copy4_ParamLimits

0x8246,	// (0x00037806) eswt_control_pane_g3_copy4

0x8253,	// (0x00037813) eswt_control_pane_g4_copy4_ParamLimits

0x8253,	// (0x00037813) eswt_control_pane_g4_copy4

0xe217,	// (0x0003d7d7) eswt_ctrl_combo_button_pane

0xe21f,	// (0x0003d7df) eswt_ctrl_input_pane

0xe227,	// (0x0003d7e7) popup_choice_list_window_cp70

0xe22f,	// (0x0003d7ef) eswt_ctrl_input_pane_t1

0x2cc9,	// (0x00032289) input_focus_pane_cp70

0x78a6,	// (0x00036e66) bg_button_pane_cp70_ParamLimits

0x78a6,	// (0x00036e66) bg_button_pane_cp70

0xe23d,	// (0x0003d7fd) eswt_ctrl_combo_button_pane_g1

0x831d,	// (0x000378dd) wait_bar_pane_cp70

0x532f,	// (0x000348ef) bg_popup_window_pane_cp70_ParamLimits

0x532f,	// (0x000348ef) bg_popup_window_pane_cp70

0x8325,	// (0x000378e5) popup_eswt_tasktip_window_t1

0x833b,	// (0x000378fb) wait_bar_pane_cp71_ParamLimits

0x833b,	// (0x000378fb) wait_bar_pane_cp71

0x8347,	// (0x00037907) grid_eswt_app_pane

0x4269,	// (0x00033829) scroll_pane_cp70

0xe245,	// (0x0003d805) cell_eswt_app_pane_ParamLimits

0xe245,	// (0x0003d805) cell_eswt_app_pane

0xe26f,	// (0x0003d82f) cell_eswt_app_pane_g1_ParamLimits

0xe26f,	// (0x0003d82f) cell_eswt_app_pane_g1

0xe29e,	// (0x0003d85e) cell_eswt_app_pane_g2_ParamLimits

0xe29e,	// (0x0003d85e) cell_eswt_app_pane_g2

0x0001,

0xfc10,	// (0x0003f1d0) cell_eswt_app_pane_g_ParamLimits

0xfc10,	// (0x0003f1d0) cell_eswt_app_pane_g

0xe2c7,	// (0x0003d887) cell_eswt_app_pane_t1_ParamLimits

0xe2c7,	// (0x0003d887) cell_eswt_app_pane_t1

0x840a,	// (0x000379ca) grid_highlight_pane_cp70_ParamLimits

0x840a,	// (0x000379ca) grid_highlight_pane_cp70

0x4948,	// (0x00033f08) set_content_pane_g1

0xd542,	// (0x0003cb02) status_small_volume_pane

0x208e,	// (0x0003164e) status_small_volume_pane_g1

0x2096,	// (0x00031656) volume_small2_pane

0x209f,	// (0x0003165f) volume_small2_pane_g1

0x20a8,	// (0x00031668) volume_small2_pane_g2

0x20b1,	// (0x00031671) volume_small2_pane_g3

0x20ba,	// (0x0003167a) volume_small2_pane_g4

0x20c3,	// (0x00031683) volume_small2_pane_g5

0x20cc,	// (0x0003168c) volume_small2_pane_g6

0x20d5,	// (0x00031695) volume_small2_pane_g7

0x20de,	// (0x0003169e) volume_small2_pane_g8

0x20e7,	// (0x000316a7) volume_small2_pane_g9

0x20f0,	// (0x000316b0) volume_small2_pane_g10

0x0009,

0xfc15,	// (0x0003f1d5) volume_small2_pane_g

0x7ca7,	// (0x00037267) fep_vkb_top_text_pane_g1_ParamLimits

0xe1a4,	// (0x0003d764) fep_vkb_top_text_pane_t1_ParamLimits

0x7f1c,	// (0x000374dc) popup_preview_fixed_window_g3_ParamLimits

0x7f1c,	// (0x000374dc) popup_preview_fixed_window_g3

0xc537,	// (0x0003baf7) popup_toolbar_trans_pane

0xdbcf,	// (0x0003d18f) aid_height_set_list_ParamLimits

0x669b,	// (0x00035c5b) aid_size_parent_ParamLimits

0x4db1,	// (0x00034371) list_highlight_pane_cp2_ParamLimits

0x4948,	// (0x00033f08) set_content_pane_g1_ParamLimits

0xc67d,	// (0x0003bc3d) list_single_image_pane_ParamLimits

0xc67d,	// (0x0003bc3d) list_single_image_pane

0xe2f9,	// (0x0003d8b9) aid_size_cell_image_ParamLimits

0xe2f9,	// (0x0003d8b9) aid_size_cell_image

0xe306,	// (0x0003d8c6) grid_single_image_pane_ParamLimits

0xe306,	// (0x0003d8c6) grid_single_image_pane

0x602b,	// (0x000355eb) list_single_image_pane_g1_ParamLimits

0x602b,	// (0x000355eb) list_single_image_pane_g1

0x842f,	// (0x000379ef) list_single_image_pane_g2_ParamLimits

0x842f,	// (0x000379ef) list_single_image_pane_g2

0x0001,

0xfc2a,	// (0x0003f1ea) list_single_image_pane_g_ParamLimits

0xfc2a,	// (0x0003f1ea) list_single_image_pane_g

0x8443,	// (0x00037a03) list_single_image_pane_t1_ParamLimits

0x8443,	// (0x00037a03) list_single_image_pane_t1

0xe314,	// (0x0003d8d4) cell_image_list_pane_ParamLimits

0xe314,	// (0x0003d8d4) cell_image_list_pane

0xe32a,	// (0x0003d8ea) cell_image_list_pane_g1

0xe333,	// (0x0003d8f3) cell_image_list_pane_g2

0x0001,

0xfc2f,	// (0x0003f1ef) cell_image_list_pane_g

0x847f,	// (0x00037a3f) aid_size_cell_tb_trans_pane

0x3ddd,	// (0x0003339d) bg_tb_trans_pane

0x8491,	// (0x00037a51) grid_tb_trans_pane

0x52bb,	// (0x0003487b) bg_tb_trans_pane_g1

0x52cb,	// (0x0003488b) bg_tb_trans_pane_g2

0x52c3,	// (0x00034883) bg_tb_trans_pane_g3

0x52db,	// (0x0003489b) bg_tb_trans_pane_g4

0x52d3,	// (0x00034893) bg_tb_trans_pane_g5

0x52fb,	// (0x000348bb) bg_tb_trans_pane_g6

0x52f3,	// (0x000348b3) bg_tb_trans_pane_g7

0x52e3,	// (0x000348a3) bg_tb_trans_pane_g8

0x52eb,	// (0x000348ab) bg_tb_trans_pane_g9

0x0008,

0xfc34,	// (0x0003f1f4) bg_tb_trans_pane_g

0x84a5,	// (0x00037a65) cell_toolbar_trans_pane_ParamLimits

0x84a5,	// (0x00037a65) cell_toolbar_trans_pane

0x78e1,	// (0x00036ea1) cell_toolbar_trans_pane_g1

0xdf8d,	// (0x0003d54d) list_form2_midp_pane_t1

0xdf9b,	// (0x0003d55b) list_form2_midp_pane_t2

0x0001,

0xfad1,	// (0x0003f091) list_form2_midp_pane_t

0x74c7,	// (0x00036a87) scroll_pane_cp51_ParamLimits

0x7683,	// (0x00036c43) form2_midp_wait_pane_g1

0x768c,	// (0x00036c4c) form2_midp_wait_pane_g2

0x7695,	// (0x00036c55) form2_midp_wait_pane_g3

0x0002,

0xfae6,	// (0x0003f0a6) form2_midp_wait_pane_g

0x2dbd,	// (0x0003237d) list_highlight_pane_cp21_ParamLimits

0x76ec,	// (0x00036cac) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x76fb,	// (0x00036cbb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6853,	// (0x00035e13) list_single_2graphic_im_pane_ParamLimits

0x6853,	// (0x00035e13) list_single_2graphic_im_pane

0xe33c,	// (0x0003d8fc) list_single_2graphic_im_pane_g1_ParamLimits

0xe33c,	// (0x0003d8fc) list_single_2graphic_im_pane_g1

0xe34d,	// (0x0003d90d) list_single_2graphic_im_pane_g2_ParamLimits

0xe34d,	// (0x0003d90d) list_single_2graphic_im_pane_g2

0xe359,	// (0x0003d919) list_single_2graphic_im_pane_g3_ParamLimits

0xe359,	// (0x0003d919) list_single_2graphic_im_pane_g3

0x0003,

0xfc47,	// (0x0003f207) list_single_2graphic_im_pane_g_ParamLimits

0xfc47,	// (0x0003f207) list_single_2graphic_im_pane_g

0xe36d,	// (0x0003d92d) list_single_2graphic_im_pane_t1_ParamLimits

0xe36d,	// (0x0003d92d) list_single_2graphic_im_pane_t1

0x7f28,	// (0x000374e8) list_single_graphic_2heading_pane_fp_ParamLimits

0x7f28,	// (0x000374e8) list_single_graphic_2heading_pane_fp

0x3393,	// (0x00032953) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3393,	// (0x00032953) list_single_graphic_2heading_pane_fp_g1

0x7f3d,	// (0x000374fd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7f3d,	// (0x000374fd) list_single_graphic_2heading_pane_fp_g2

0x335c,	// (0x0003291c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x335c,	// (0x0003291c) list_single_graphic_2heading_pane_fp_g3

0x3368,	// (0x00032928) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3368,	// (0x00032928) list_single_graphic_2heading_pane_fp_g4

0x7f49,	// (0x00037509) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7f49,	// (0x00037509) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003f12e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003f12e) list_single_graphic_2heading_pane_fp_g

0x356c,	// (0x00032b2c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x356c,	// (0x00032b2c) list_single_graphic_2heading_pane_fp_t1

0x33cb,	// (0x0003298b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x33cb,	// (0x0003298b) list_single_graphic_2heading_pane_fp_t2

0x3582,	// (0x00032b42) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3582,	// (0x00032b42) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc50,	// (0x0003f210) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc50,	// (0x0003f210) list_single_graphic_2heading_pane_fp_t

0x796d,	// (0x00036f2d) fep_hwr_write_pane_g5_ParamLimits

0x796d,	// (0x00036f2d) fep_hwr_write_pane_g5

0x7979,	// (0x00036f39) fep_hwr_write_pane_g6_ParamLimits

0x7979,	// (0x00036f39) fep_hwr_write_pane_g6

0x81fb,	// (0x000377bb) eswt_shell_pane_ParamLimits

0x532f,	// (0x000348ef) bg_popup_window_pane_cp18_ParamLimits

0x65e3,	// (0x00035ba3) heading_pane_cp70

0x8325,	// (0x000378e5) popup_eswt_tasktip_window_t1_ParamLimits

0xd5e8,	// (0x0003cba8) aid_touch_tab_arrow_left

0xd5fe,	// (0x0003cbbe) aid_touch_tab_arrow_right

0xceed,	// (0x0003c4ad) title_pane_g3_ParamLimits

0xceed,	// (0x0003c4ad) title_pane_g3

0x3d9c,	// (0x0003335c) set_value_pane_g1

0xc537,	// (0x0003baf7) popup_toolbar_trans_pane_ParamLimits

0x847f,	// (0x00037a3f) aid_size_cell_tb_trans_pane_ParamLimits

0x3ddd,	// (0x0003339d) bg_tb_trans_pane_ParamLimits

0x8491,	// (0x00037a51) grid_tb_trans_pane_ParamLimits

0x37f7,	// (0x00032db7) cont_note_pane_ParamLimits

0x37f7,	// (0x00032db7) cont_note_pane

0x3b4e,	// (0x0003310e) cont_snote2_single_text_pane_ParamLimits

0x3b4e,	// (0x0003310e) cont_snote2_single_text_pane

0x3b4e,	// (0x0003310e) cont_snote2_single_graphic_pane_ParamLimits

0x3b4e,	// (0x0003310e) cont_snote2_single_graphic_pane

0x5934,	// (0x00034ef4) cont_note_wait_pane_ParamLimits

0x5934,	// (0x00034ef4) cont_note_wait_pane

0x5934,	// (0x00034ef4) cont_note_image_pane_ParamLimits

0x5934,	// (0x00034ef4) cont_note_image_pane

0x8539,	// (0x00037af9) popup_note2_window_g1_ParamLimits

0x8539,	// (0x00037af9) popup_note2_window_g1

0x856a,	// (0x00037b2a) popup_note2_window_t1_ParamLimits

0x856a,	// (0x00037b2a) popup_note2_window_t1

0x85af,	// (0x00037b6f) popup_note2_window_t2_ParamLimits

0x85af,	// (0x00037b6f) popup_note2_window_t2

0x85f4,	// (0x00037bb4) popup_note2_window_t3_ParamLimits

0x85f4,	// (0x00037bb4) popup_note2_window_t3

0x8639,	// (0x00037bf9) popup_note2_window_t4_ParamLimits

0x8639,	// (0x00037bf9) popup_note2_window_t4

0x387b,	// (0x00032e3b) popup_note2_window_t5_ParamLimits

0x387b,	// (0x00032e3b) popup_note2_window_t5

0x0004,

0xfc5c,	// (0x0003f21c) popup_note2_window_t_ParamLimits

0xfc5c,	// (0x0003f21c) popup_note2_window_t

0x8668,	// (0x00037c28) popup_note2_image_window_g1_ParamLimits

0x8668,	// (0x00037c28) popup_note2_image_window_g1

0x8674,	// (0x00037c34) popup_note2_image_window_g2_ParamLimits

0x8674,	// (0x00037c34) popup_note2_image_window_g2

0x0001,

0xfc67,	// (0x0003f227) popup_note2_image_window_g_ParamLimits

0xfc67,	// (0x0003f227) popup_note2_image_window_g

0x8686,	// (0x00037c46) popup_note2_image_window_t1_ParamLimits

0x8686,	// (0x00037c46) popup_note2_image_window_t1

0x869e,	// (0x00037c5e) popup_note2_image_window_t2_ParamLimits

0x869e,	// (0x00037c5e) popup_note2_image_window_t2

0x86b6,	// (0x00037c76) popup_note2_image_window_t3_ParamLimits

0x86b6,	// (0x00037c76) popup_note2_image_window_t3

0x0002,

0xfc6c,	// (0x0003f22c) popup_note2_image_window_t_ParamLimits

0xfc6c,	// (0x0003f22c) popup_note2_image_window_t

0x5942,	// (0x00034f02) popup_note2_wait_window_g1_ParamLimits

0x5942,	// (0x00034f02) popup_note2_wait_window_g1

0x86d2,	// (0x00037c92) popup_note2_wait_window_g2_ParamLimits

0x86d2,	// (0x00037c92) popup_note2_wait_window_g2

0x595a,	// (0x00034f1a) popup_note2_wait_window_g3_ParamLimits

0x595a,	// (0x00034f1a) popup_note2_wait_window_g3

0x0002,

0xfc73,	// (0x0003f233) popup_note2_wait_window_g_ParamLimits

0xfc73,	// (0x0003f233) popup_note2_wait_window_g

0x86de,	// (0x00037c9e) popup_note2_wait_window_t1_ParamLimits

0x86de,	// (0x00037c9e) popup_note2_wait_window_t1

0x86fc,	// (0x00037cbc) popup_note2_wait_window_t2_ParamLimits

0x86fc,	// (0x00037cbc) popup_note2_wait_window_t2

0x871a,	// (0x00037cda) popup_note2_wait_window_t3_ParamLimits

0x871a,	// (0x00037cda) popup_note2_wait_window_t3

0x872c,	// (0x00037cec) popup_note2_wait_window_t4_ParamLimits

0x872c,	// (0x00037cec) popup_note2_wait_window_t4

0x0003,

0xfc7a,	// (0x0003f23a) popup_note2_wait_window_t_ParamLimits

0xfc7a,	// (0x0003f23a) popup_note2_wait_window_t

0x873e,	// (0x00037cfe) wait_bar2_pane_ParamLimits

0x873e,	// (0x00037cfe) wait_bar2_pane

0x8756,	// (0x00037d16) popup_snote2_single_text_window_g1_ParamLimits

0x8756,	// (0x00037d16) popup_snote2_single_text_window_g1

0x877e,	// (0x00037d3e) popup_snote2_single_text_window_t1_ParamLimits

0x877e,	// (0x00037d3e) popup_snote2_single_text_window_t1

0x87ca,	// (0x00037d8a) popup_snote2_single_text_window_t2_ParamLimits

0x87ca,	// (0x00037d8a) popup_snote2_single_text_window_t2

0x8816,	// (0x00037dd6) popup_snote2_single_text_window_t3_ParamLimits

0x8816,	// (0x00037dd6) popup_snote2_single_text_window_t3

0x8857,	// (0x00037e17) popup_snote2_single_text_window_t4_ParamLimits

0x8857,	// (0x00037e17) popup_snote2_single_text_window_t4

0x888d,	// (0x00037e4d) popup_snote2_single_text_window_t5_ParamLimits

0x888d,	// (0x00037e4d) popup_snote2_single_text_window_t5

0x0004,

0xfc83,	// (0x0003f243) popup_snote2_single_text_window_t_ParamLimits

0xfc83,	// (0x0003f243) popup_snote2_single_text_window_t

0x88b8,	// (0x00037e78) popup_snote2_single_graphic_window_g1_ParamLimits

0x88b8,	// (0x00037e78) popup_snote2_single_graphic_window_g1

0x88e0,	// (0x00037ea0) popup_snote2_single_graphic_window_g2_ParamLimits

0x88e0,	// (0x00037ea0) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8e,	// (0x0003f24e) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8e,	// (0x0003f24e) popup_snote2_single_graphic_window_g

0x8908,	// (0x00037ec8) popup_snote2_single_graphic_window_t1_ParamLimits

0x8908,	// (0x00037ec8) popup_snote2_single_graphic_window_t1

0x8954,	// (0x00037f14) popup_snote2_single_graphic_window_t2_ParamLimits

0x8954,	// (0x00037f14) popup_snote2_single_graphic_window_t2

0x8816,	// (0x00037dd6) popup_snote2_single_graphic_window_t3_ParamLimits

0x8816,	// (0x00037dd6) popup_snote2_single_graphic_window_t3

0x8857,	// (0x00037e17) popup_snote2_single_graphic_window_t4_ParamLimits

0x8857,	// (0x00037e17) popup_snote2_single_graphic_window_t4

0x888d,	// (0x00037e4d) popup_snote2_single_graphic_window_t5_ParamLimits

0x888d,	// (0x00037e4d) popup_snote2_single_graphic_window_t5

0x0004,

0xfc93,	// (0x0003f253) popup_snote2_single_graphic_window_t_ParamLimits

0xfc93,	// (0x0003f253) popup_snote2_single_graphic_window_t

0x737c,	// (0x0003693c) clock_nsta_pane_cp2_t1

0x737c,	// (0x0003693c) clock_nsta_pane_cp2_t2

0x0001,

0xfaa7,	// (0x0003f067) clock_nsta_pane_cp2_t

0x092b,	// (0x0002feeb) form_field_data_wide_pane_g1_ParamLimits

0x3deb,	// (0x000333ab) form_field_data_wide_pane_g2_ParamLimits

0x3deb,	// (0x000333ab) form_field_data_wide_pane_g2

0x3df7,	// (0x000333b7) form_field_data_wide_pane_g3_ParamLimits

0x3df7,	// (0x000333b7) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0003ec3b) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0003ec3b) form_field_data_wide_pane_g

0xded0,	// (0x0003d490) grid_touch_3_pane_ParamLimits

0xded0,	// (0x0003d490) grid_touch_3_pane

0xe39e,	// (0x0003d95e) cell_touch_3_pane_ParamLimits

0xe39e,	// (0x0003d95e) cell_touch_3_pane

0x78e1,	// (0x00036ea1) cell_touch_3_pane_g1

0x78e1,	// (0x00036ea1) cell_touch_3_pane_g2

0x0001,

0xfb2c,	// (0x0003f0ec) cell_touch_3_pane_g

0x38ad,	// (0x00032e6d) cont_query_data_pane

0x38b5,	// (0x00032e75) cont_query_data_pane_cp1

0x89ce,	// (0x00037f8e) button_value_adjust_pane_cp7

0x89d6,	// (0x00037f96) query_popup_pane_cp3

0x4550,	// (0x00033b10) bg_popup_sub_pane_cp22_ParamLimits

0x0cef,	// (0x000302af) navi_navi_volume_pane_cp2

0x0d0a,	// (0x000302ca) popup_side_volume_key_window_g2

0x0d19,	// (0x000302d9) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0003ecd1) popup_side_volume_key_window_g

0x0d36,	// (0x000302f6) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0003ecd8) popup_side_volume_key_window_t

0x4807,	// (0x00033dc7) popup_side_volume_key_window_ParamLimits

0xb8cc,	// (0x0003ae8c) list_double_graphic_pane_g4_ParamLimits

0xb8cc,	// (0x0003ae8c) list_double_graphic_pane_g4

0xdd48,	// (0x0003d308) list_single_2heading_msg_pane_ParamLimits

0xdd48,	// (0x0003d308) list_single_2heading_msg_pane

0xc754,	// (0x0003bd14) list_single_2heading_msg_pane_g1_ParamLimits

0xc754,	// (0x0003bd14) list_single_2heading_msg_pane_g1

0xc760,	// (0x0003bd20) list_single_2heading_msg_pane_g2_ParamLimits

0xc760,	// (0x0003bd20) list_single_2heading_msg_pane_g2

0xc773,	// (0x0003bd33) list_single_2heading_msg_pane_g3_ParamLimits

0xc773,	// (0x0003bd33) list_single_2heading_msg_pane_g3

0xc77f,	// (0x0003bd3f) list_single_2heading_msg_pane_g4_ParamLimits

0xc77f,	// (0x0003bd3f) list_single_2heading_msg_pane_g4

0x0003,

0xfc9e,	// (0x0003f25e) list_single_2heading_msg_pane_g_ParamLimits

0xfc9e,	// (0x0003f25e) list_single_2heading_msg_pane_g

0xc797,	// (0x0003bd57) list_single_2heading_msg_pane_t1_ParamLimits

0xc797,	// (0x0003bd57) list_single_2heading_msg_pane_t1

0xc7bf,	// (0x0003bd7f) list_single_2heading_msg_pane_t2_ParamLimits

0xc7bf,	// (0x0003bd7f) list_single_2heading_msg_pane_t2

0xc82a,	// (0x0003bdea) list_single_2heading_msg_pane_t3_ParamLimits

0xc82a,	// (0x0003bdea) list_single_2heading_msg_pane_t3

0x3667,	// (0x00032c27) list_single_2heading_msg_pane_t4_ParamLimits

0x3667,	// (0x00032c27) list_single_2heading_msg_pane_t4

0x0003,

0xfca7,	// (0x0003f267) list_single_2heading_msg_pane_t_ParamLimits

0xfca7,	// (0x0003f267) list_single_2heading_msg_pane_t

0x2d11,	// (0x000322d1) title_pane_g4_ParamLimits

0x2d11,	// (0x000322d1) title_pane_g4

0x0afe,	// (0x000300be) title_pane_stacon_g3_ParamLimits

0x0afe,	// (0x000300be) title_pane_stacon_g3

0x84fc,	// (0x00037abc) list_single_2graphic_im_pane_g4_ParamLimits

0x84fc,	// (0x00037abc) list_single_2graphic_im_pane_g4

0x639f,	// (0x0003595f) popup_side_volume_key_window_cp

0x6bbb,	// (0x0003617b) main_idle_act2_pane_t1

0x1751,	// (0x00030d11) toolbar_button_pane_g10

0xd1f8,	// (0x0003c7b8) popup_toolbar_window_cp1

0x736d,	// (0x0003692d) clock_nsta_pane_cp_t1

0x736d,	// (0x0003692d) clock_nsta_pane_cp_t2

0x0001,

0xfaa2,	// (0x0003f062) clock_nsta_pane_cp_t

0x0cef,	// (0x000302af) navi_navi_volume_pane_cp2_ParamLimits

0x0cfe,	// (0x000302be) popup_side_volume_key_window_g1_ParamLimits

0x0d0a,	// (0x000302ca) popup_side_volume_key_window_g2_ParamLimits

0x0d19,	// (0x000302d9) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0003ecd1) popup_side_volume_key_window_g_ParamLimits

0x1cfa,	// (0x000312ba) fep_hwr_aid_pane

0x1da1,	// (0x00031361) bg_fep_hwr_top_pane_g4_ParamLimits

0x793d,	// (0x00036efd) fep_hwr_top_pane_g1_ParamLimits

0x794f,	// (0x00036f0f) fep_hwr_top_pane_g2_ParamLimits

0x1dc1,	// (0x00031381) fep_hwr_top_pane_g3_ParamLimits

0xfaf7,	// (0x0003f0b7) fep_hwr_top_pane_g_ParamLimits

0x1dd6,	// (0x00031396) fep_hwr_top_text_pane_ParamLimits

0x6162,	// (0x00035722) aid_touch_tab_arrow_arrow_2

0x616b,	// (0x0003572b) aid_touch_tab_arrow_left_2

0x1d0e,	// (0x000312ce) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1d45,	// (0x00031305) fep_hwr_prediction_pane

0x7aaf,	// (0x0003706f) fep_vkb_prediction_pane

0xe184,	// (0x0003d744) fep_vkb_side_pane_g3_ParamLimits

0xe184,	// (0x0003d744) fep_vkb_side_pane_g3

0x1f51,	// (0x00031511) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1fbd,	// (0x0003157d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1fca,	// (0x0003158a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0003f166) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x20f9,	// (0x000316b9) fep_hwr_prediction_pane_g1

0x2103,	// (0x000316c3) fep_hwr_prediction_pane_g2

0x210b,	// (0x000316cb) fep_hwr_prediction_pane_g3

0x2113,	// (0x000316d3) fep_hwr_prediction_pane_g4

0x0003,

0xfcb0,	// (0x0003f270) fep_hwr_prediction_pane_g

0x89fb,	// (0x00037fbb) fep_vkb_prediction_pane_g1

0x8a05,	// (0x00037fc5) fep_vkb_prediction_pane_g2

0x8a0d,	// (0x00037fcd) fep_vkb_prediction_pane_g3

0x8a15,	// (0x00037fd5) fep_vkb_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0003f279) fep_vkb_prediction_pane_g

0x1b4c,	// (0x0003110c) slider_set_pane_g3

0x1b60,	// (0x00031120) slider_set_pane_g4

0x1b78,	// (0x00031138) slider_set_pane_g5

0x1b4c,	// (0x0003110c) slider_set_pane_g6

0x1b8e,	// (0x0003114e) slider_set_pane_g7

0x6800,	// (0x00035dc0) slider_form_pane_g3

0x6809,	// (0x00035dc9) slider_form_pane_g4

0x6811,	// (0x00035dd1) slider_form_pane_g5

0x6800,	// (0x00035dc0) slider_form_pane_g6

0xdd1a,	// (0x0003d2da) slider_form_pane_g7

0x6e66,	// (0x00036426) slider_set_pane_vc_g3

0x6e6f,	// (0x0003642f) slider_set_pane_vc_g4

0x6e78,	// (0x00036438) slider_set_pane_vc_g5

0x6e66,	// (0x00036426) slider_set_pane_vc_g6

0x6e81,	// (0x00036441) slider_set_pane_vc_g7

0x7041,	// (0x00036601) slider_form_pane_vc_g1

0x704a,	// (0x0003660a) slider_form_pane_vc_g2

0x7053,	// (0x00036613) slider_form_pane_vc_g3

0x7041,	// (0x00036601) slider_form_pane_vc_g4

0x705c,	// (0x0003661c) slider_form_pane_vc_g5

0x0004,

0xfa74,	// (0x0003f034) slider_form_pane_vc_g

0x00aa,	// (0x0002f66a) main_idle_act3_pane

0x8a1d,	// (0x00037fdd) ai3_links_pane

0xe41b,	// (0x0003d9db) popup_ai3_data_window_ParamLimits

0xe41b,	// (0x0003d9db) popup_ai3_data_window

0x2cc9,	// (0x00032289) grid_ai3_links_pane

0xe435,	// (0x0003d9f5) cell_ai3_links_pane_ParamLimits

0xe435,	// (0x0003d9f5) cell_ai3_links_pane

0x8a58,	// (0x00038018) bg_popup_sub_pane_cp11

0x8a65,	// (0x00038025) cell_ai3_links_pane_g1

0x2cc9,	// (0x00032289) bg_popup_sub_pane_cp12

0x8a8a,	// (0x0003804a) heading_ai3_data_pane

0x8a92,	// (0x00038052) list_ai3_gene_pane

0x8a9e,	// (0x0003805e) popup_ai3_data_window_g1

0x8aa6,	// (0x00038066) heading_ai3_data_pane_g1

0x8aae,	// (0x0003806e) heading_ai3_data_pane_t1

0x8abc,	// (0x0003807c) list_double_ai3_gene_pane_ParamLimits

0x8abc,	// (0x0003807c) list_double_ai3_gene_pane

0x8ac9,	// (0x00038089) list_single_ai3_gene_pane_ParamLimits

0x8ac9,	// (0x00038089) list_single_ai3_gene_pane

0x78a6,	// (0x00036e66) list_highlight_pane_cp7_ParamLimits

0x78a6,	// (0x00036e66) list_highlight_pane_cp7

0x8ad6,	// (0x00038096) list_single_a13_gene_pane_t1_ParamLimits

0x8ad6,	// (0x00038096) list_single_a13_gene_pane_t1

0x8aed,	// (0x000380ad) list_single_ai3_gene_pane_g1

0x8af6,	// (0x000380b6) list_single_ai3_gene_pane_g2

0x0001,

0xfcc2,	// (0x0003f282) list_single_ai3_gene_pane_g

0x8afe,	// (0x000380be) list_double_ai3_gene_pane_g1_ParamLimits

0x8afe,	// (0x000380be) list_double_ai3_gene_pane_g1

0x8b0a,	// (0x000380ca) list_double_ai3_gene_pane_t1_ParamLimits

0x8b0a,	// (0x000380ca) list_double_ai3_gene_pane_t1

0x8b26,	// (0x000380e6) list_double_ai3_gene_pane_t2_ParamLimits

0x8b26,	// (0x000380e6) list_double_ai3_gene_pane_t2

0x8b3c,	// (0x000380fc) list_double_ai3_gene_pane_t3_ParamLimits

0x8b3c,	// (0x000380fc) list_double_ai3_gene_pane_t3

0x0002,

0xfcc7,	// (0x0003f287) list_double_ai3_gene_pane_t_ParamLimits

0xfcc7,	// (0x0003f287) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3598,	// (0x00032b58) aid_size_min_col_2

0xe3d0,	// (0x0003d990) aid_size_min_msg_ParamLimits

0xe3d0,	// (0x0003d990) aid_size_min_msg

0xe198,	// (0x0003d758) fep_vkb_top_text_pane_g2_ParamLimits

0xe198,	// (0x0003d758) fep_vkb_top_text_pane_g2

0x0001,

0xfb27,	// (0x0003f0e7) fep_vkb_top_text_pane_g_ParamLimits

0xfb27,	// (0x0003f0e7) fep_vkb_top_text_pane_g

0x00aa,	// (0x0002f66a) main_hc_apps_shell_pane

0x8b59,	// (0x00038119) grid_hc_apps_pane_ParamLimits

0x8b59,	// (0x00038119) grid_hc_apps_pane

0x8b68,	// (0x00038128) list_hc_apps_pane

0x8b70,	// (0x00038130) scroll_pane_cp37_ParamLimits

0x8b70,	// (0x00038130) scroll_pane_cp37

0xe44f,	// (0x0003da0f) cell_hc_apps_pane_ParamLimits

0xe44f,	// (0x0003da0f) cell_hc_apps_pane

0xe50d,	// (0x0003dacd) cell_hc_apps_pane_g1_ParamLimits

0xe50d,	// (0x0003dacd) cell_hc_apps_pane_g1

0x8c5b,	// (0x0003821b) cell_hc_apps_pane_g2_ParamLimits

0x8c5b,	// (0x0003821b) cell_hc_apps_pane_g2

0x8c77,	// (0x00038237) cell_hc_apps_pane_g3_ParamLimits

0x8c77,	// (0x00038237) cell_hc_apps_pane_g3

0x0002,

0xfcce,	// (0x0003f28e) cell_hc_apps_pane_g_ParamLimits

0xfcce,	// (0x0003f28e) cell_hc_apps_pane_g

0xe53a,	// (0x0003dafa) cell_hc_apps_pane_t1_ParamLimits

0xe53a,	// (0x0003dafa) cell_hc_apps_pane_t1

0x37f7,	// (0x00032db7) grid_highlight_pane_cp10_ParamLimits

0x37f7,	// (0x00032db7) grid_highlight_pane_cp10

0xe578,	// (0x0003db38) list_single_hc_apps_pane_ParamLimits

0xe578,	// (0x0003db38) list_single_hc_apps_pane

0xe5a5,	// (0x0003db65) list_single_hc_apps_pane_g1

0xc898,	// (0x0003be58) list_single_hc_apps_pane_g2

0x0001,

0xfcd5,	// (0x0003f295) list_single_hc_apps_pane_g

0xc8b1,	// (0x0003be71) list_single_hc_apps_pane_g2_copy1

0xc8cd,	// (0x0003be8d) list_single_hc_apps_pane_t1

0x2dbd,	// (0x0003237d) bg_set_opt_pane_cp_ParamLimits

0x030b,	// (0x0002f8cb) setting_slider_pane_t1_ParamLimits

0x0324,	// (0x0002f8e4) setting_slider_pane_t2_ParamLimits

0x033e,	// (0x0002f8fe) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003eb1e) setting_slider_pane_t_ParamLimits

0x0356,	// (0x0002f916) slider_set_pane_ParamLimits

0x1022,	// (0x000305e2) control_pane_g5_ParamLimits

0x1022,	// (0x000305e2) control_pane_g5

0x664f,	// (0x00035c0f) slider_set_pane_g1_ParamLimits

0x1b40,	// (0x00031100) slider_set_pane_g2_ParamLimits

0x1b4c,	// (0x0003110c) slider_set_pane_g3_ParamLimits

0x1b60,	// (0x00031120) slider_set_pane_g4_ParamLimits

0x1b78,	// (0x00031138) slider_set_pane_g5_ParamLimits

0x1b4c,	// (0x0003110c) slider_set_pane_g6_ParamLimits

0x1b8e,	// (0x0003114e) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0003ef1f) slider_set_pane_g_ParamLimits

0x48f3,	// (0x00033eb3) navi_icon_text_pane_ParamLimits

0xd5b1,	// (0x0003cb71) aid_fill_nsta_2_ParamLimits

0xd5e8,	// (0x0003cba8) aid_touch_tab_arrow_left_ParamLimits

0xd5fe,	// (0x0003cbbe) aid_touch_tab_arrow_right_ParamLimits

0xd699,	// (0x0003cc59) clock_nsta_pane_ParamLimits

0x6144,	// (0x00035704) navi_icon_pane_g1_ParamLimits

0x6150,	// (0x00035710) navi_text_pane_t1_ParamLimits

0x7479,	// (0x00036a39) navi_icon_text_pane_g1_ParamLimits

0x7485,	// (0x00036a45) navi_icon_text_pane_t1_ParamLimits

0xe5a5,	// (0x0003db65) list_single_hc_apps_pane_g1_ParamLimits

0xc898,	// (0x0003be58) list_single_hc_apps_pane_g2_ParamLimits

0xfcd5,	// (0x0003f295) list_single_hc_apps_pane_g_ParamLimits

0xc8b1,	// (0x0003be71) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc8cd,	// (0x0003be8d) list_single_hc_apps_pane_t1_ParamLimits

0xb68f,	// (0x0003ac4f) popup_toolbar2_fixed_window_ParamLimits

0xb68f,	// (0x0003ac4f) popup_toolbar2_fixed_window

0xc52d,	// (0x0003baed) popup_toolbar2_float_window

0x2cc9,	// (0x00032289) bg_popup_sub_pane_cp27

0x8d4e,	// (0x0003830e) grid_toolbar2_float_pane

0x2cc9,	// (0x00032289) bg_popup_sub_pane_cp26

0x8d4e,	// (0x0003830e) grid_toolbar2_fixed_pane

0xe5be,	// (0x0003db7e) cell_toolbar2_fixed_pane_ParamLimits

0xe5be,	// (0x0003db7e) cell_toolbar2_fixed_pane

0xe5d8,	// (0x0003db98) cell_toolbar2_fixed_pane_g1

0x8d6f,	// (0x0003832f) toolbar2_fixed_button_pane

0x52bb,	// (0x0003487b) toolbar2_fixed_button_pane_g1

0x52cb,	// (0x0003488b) toolbar2_fixed_button_pane_g2

0x52c3,	// (0x00034883) toolbar2_fixed_button_pane_g3

0x52db,	// (0x0003489b) toolbar2_fixed_button_pane_g4

0x52d3,	// (0x00034893) toolbar2_fixed_button_pane_g5

0x52e3,	// (0x000348a3) toolbar2_fixed_button_pane_g6

0x52eb,	// (0x000348ab) toolbar2_fixed_button_pane_g7

0x52fb,	// (0x000348bb) toolbar2_fixed_button_pane_g8

0x52f3,	// (0x000348b3) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0003ee21) toolbar2_fixed_button_pane_g

0x8d77,	// (0x00038337) cell_toolbar2_float_pane_ParamLimits

0x8d77,	// (0x00038337) cell_toolbar2_float_pane

0x8d88,	// (0x00038348) cell_toolbar2_float_pane_g1

0x8d6f,	// (0x0003832f) toolbar2_fixed_button_pane_cp

0xe072,	// (0x0003d632) fep_vkb_accented_list_pane_ParamLimits

0xe072,	// (0x0003d632) fep_vkb_accented_list_pane

0x1f31,	// (0x000314f1) bg_popup_fep_shadow_pane_g9

0x4a73,	// (0x00034033) bg_popup_fep_shadow_pane_cp3

0x3f34,	// (0x000334f4) list_accented_list_pane

0x8d91,	// (0x00038351) list_single_accented_list_pane_ParamLimits

0x8d91,	// (0x00038351) list_single_accented_list_pane

0x4a73,	// (0x00034033) list_highlight_pane_cp10

0x8da2,	// (0x00038362) list_single_accented_list_pane_t1

0xc457,	// (0x0003ba17) popup_slider_window_ParamLimits

0xc457,	// (0x0003ba17) popup_slider_window

0x89de,	// (0x00037f9e) aid_indentation_list_msg

0xe6d1,	// (0x0003dc91) bg_popup_window_pane_cp19

0x8ec6,	// (0x00038486) popup_slider_window_g1

0x8ee2,	// (0x000384a2) popup_slider_window_g2

0x8efe,	// (0x000384be) popup_slider_window_g3

0x0005,

0xfcda,	// (0x0003f29a) popup_slider_window_g

0x8f5a,	// (0x0003851a) popup_slider_window_t1

0x8fce,	// (0x0003858e) small_volume_slider_vertical_pane

0x78e1,	// (0x00036ea1) small_volume_slider_vertical_pane_g1

0x78e1,	// (0x00036ea1) small_volume_slider_vertical_pane_g2

0x8fea,	// (0x000385aa) small_volume_slider_vertical_pane_g3

0x0002,

0xfcec,	// (0x0003f2ac) small_volume_slider_vertical_pane_g

0xb5fd,	// (0x0003abbd) area_side_right_pane_ParamLimits

0xb5fd,	// (0x0003abbd) area_side_right_pane

0xc8fb,	// (0x0003bebb) aid_size_side_button_ParamLimits

0xc8fb,	// (0x0003bebb) aid_size_side_button

0xc914,	// (0x0003bed4) grid_sctrl_middle_pane_ParamLimits

0xc914,	// (0x0003bed4) grid_sctrl_middle_pane

0x214e,	// (0x0003170e) sctrl_sk_bottom_pane

0x215f,	// (0x0003171f) sctrl_sk_top_pane

0x2171,	// (0x00031731) aid_touch_sctrl_top

0x217e,	// (0x0003173e) bg_sctrl_sk_pane_ParamLimits

0x217e,	// (0x0003173e) bg_sctrl_sk_pane

0x218c,	// (0x0003174c) sctrl_sk_top_pane_g1

0x2199,	// (0x00031759) sctrl_sk_top_pane_t1

0x2171,	// (0x00031731) aid_touch_sctrl_bottom

0x217e,	// (0x0003173e) bg_sctrl_sk_pane_cp_ParamLimits

0x217e,	// (0x0003173e) bg_sctrl_sk_pane_cp

0x21b4,	// (0x00031774) sctrl_sk_bottom_pane_g1

0x2199,	// (0x00031759) sctrl_sk_bottom_pane_t1

0xc92e,	// (0x0003beee) cell_sctrl_middle_pane_ParamLimits

0xc92e,	// (0x0003beee) cell_sctrl_middle_pane

0xc93f,	// (0x0003beff) aid_touch_sctrl_middle_ParamLimits

0xc93f,	// (0x0003beff) aid_touch_sctrl_middle

0xc94c,	// (0x0003bf0c) bg_sctrl_middle_pane_ParamLimits

0xc94c,	// (0x0003bf0c) bg_sctrl_middle_pane

0x2821,	// (0x00031de1) cell_sctrl_middle_pane_g1_ParamLimits

0x2821,	// (0x00031de1) cell_sctrl_middle_pane_g1

0xc95a,	// (0x0003bf1a) cell_sctrl_middle_pane_g2_ParamLimits

0xc95a,	// (0x0003bf1a) cell_sctrl_middle_pane_g2

0x0001,

0xfcf8,	// (0x0003f2b8) cell_sctrl_middle_pane_g_ParamLimits

0xfcf8,	// (0x0003f2b8) cell_sctrl_middle_pane_g

0x52bb,	// (0x0003487b) bg_sctrl_middle_pane_g1

0x52c3,	// (0x00034883) bg_sctrl_middle_pane_g2

0x52cb,	// (0x0003488b) bg_sctrl_middle_pane_g3

0x52d3,	// (0x00034893) bg_sctrl_middle_pane_g4

0x52db,	// (0x0003489b) bg_sctrl_middle_pane_g5

0x52e3,	// (0x000348a3) bg_sctrl_middle_pane_g6

0x52eb,	// (0x000348ab) bg_sctrl_middle_pane_g7

0x52f3,	// (0x000348b3) bg_sctrl_middle_pane_g8

0x0007,

0xfcfd,	// (0x0003f2bd) bg_sctrl_middle_pane_g

0x52fb,	// (0x000348bb) bg_sctrl_middle_pane_g8_copy1

0x52bb,	// (0x0003487b) bg_sctrl_sk_pane_g1

0x52cb,	// (0x0003488b) bg_sctrl_sk_pane_g2

0x52c3,	// (0x00034883) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0003ee21) bg_sctrl_sk_pane_g

0x3d0c,	// (0x000332cc) aid_size_touch_scroll_bar

0x52db,	// (0x0003489b) bg_sctrl_sk_pane_g4

0x52d3,	// (0x00034893) bg_sctrl_sk_pane_g5

0x52e3,	// (0x000348a3) bg_sctrl_sk_pane_g6

0x52eb,	// (0x000348ab) bg_sctrl_sk_pane_g7

0x52fb,	// (0x000348bb) bg_sctrl_sk_pane_g8

0x52f3,	// (0x000348b3) bg_sctrl_sk_pane_g9

0x11d4,	// (0x00030794) popup_fep_china_hwr2_fs_candidate_window

0xbf71,	// (0x0003b531) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbf71,	// (0x0003b531) popup_fep_china_hwr2_fs_control_window

0x1f51,	// (0x00031511) sctrl_sk_top_pane_g2

0x0001,

0xfcf3,	// (0x0003f2b3) sctrl_sk_top_pane_g

0xe789,	// (0x0003dd49) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe789,	// (0x0003dd49) aid_fep_china_hwr2_fs_cell

0xe79d,	// (0x0003dd5d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe79d,	// (0x0003dd5d) bg_popup_fep_shadow_pane_cp4

0xe7b4,	// (0x0003dd74) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe7b4,	// (0x0003dd74) bg_popup_fep_shadow_pane_cp5

0xe7c6,	// (0x0003dd86) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe7c6,	// (0x0003dd86) popup_fep_china_hwr2_fs_control_bar_grid

0xe7da,	// (0x0003dd9a) popup_fep_china_hwr2_fs_control_funtion_grid

0x9046,	// (0x00038606) aid_fep_china_hwr2_fs_candi_cell

0x2cc9,	// (0x00032289) bg_popup_fep_shadow_pane_cp6

0x9050,	// (0x00038610) popup_fep_china_hwr2_fs_candidate_grid

0xe7e2,	// (0x0003dda2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe7e2,	// (0x0003dda2) cell_fep_china_hwr2_fs_funtion_grid

0x78e1,	// (0x00036ea1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9072,	// (0x00038632) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9072,	// (0x00038632) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9080,	// (0x00038640) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9080,	// (0x00038640) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0e,	// (0x0003f2ce) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0e,	// (0x0003f2ce) cell_fep_china_hwr2_fs_funtion_grid_g

0xe7fa,	// (0x0003ddba) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe7fa,	// (0x0003ddba) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe80f,	// (0x0003ddcf) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe80f,	// (0x0003ddcf) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd13,	// (0x0003f2d3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd13,	// (0x0003f2d3) cell_fep_china_hwr2_fs_funtion_grid_t

0x90c7,	// (0x00038687) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x90cf,	// (0x0003868f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x90d7,	// (0x00038697) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd18,	// (0x0003f2d8) popup_fep_china_hwr2_fs_control_bar_grid_g

0x90df,	// (0x0003869f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x90df,	// (0x0003869f) cell_fep_china_hwr2_fs_candidate_grid

0x90f8,	// (0x000386b8) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9100,	// (0x000386c0) popup_fep_china_hwr2_fs_candidate_grid_g21

0x78e1,	// (0x00036ea1) cell_fep_china_hwr2_fs_candidate_grid_g1

0x78e1,	// (0x00036ea1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2c,	// (0x0003f0ec) cell_fep_china_hwr2_fs_candidate_grid_g

0x9108,	// (0x000386c8) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4eb1,	// (0x00034471) clock_nsta_pane_cp_24_ParamLimits

0x4eb1,	// (0x00034471) clock_nsta_pane_cp_24

0x4f2f,	// (0x000344ef) indicator_nsta_pane_cp_24_ParamLimits

0x4f2f,	// (0x000344ef) indicator_nsta_pane_cp_24

0x5fb4,	// (0x00035574) heading_pane_g1

0x0001,

0xf8c6,	// (0x0003ee86) heading_pane_g

0x6a04,	// (0x00035fc4) grid_sct_catagory_button_pane

0x6a34,	// (0x00035ff4) scroll_pane_cp5_ParamLimits

0x74d3,	// (0x00036a93) button_value_adjust_pane_cp5_ParamLimits

0x74d3,	// (0x00036a93) button_value_adjust_pane_cp5

0x75b2,	// (0x00036b72) form2_midp_time_pane_ParamLimits

0x9116,	// (0x000386d6) cell_sct_catagory_button_pane_ParamLimits

0x9116,	// (0x000386d6) cell_sct_catagory_button_pane

0x78a6,	// (0x00036e66) bg_button_pane_cp01_ParamLimits

0x78a6,	// (0x00036e66) bg_button_pane_cp01

0x78e1,	// (0x00036ea1) cell_sct_catagory_button_pane_g1

0xc4d0,	// (0x0003ba90) popup_tb_extension_window

0xe82b,	// (0x0003ddeb) aid_size_cell_ext_ParamLimits

0xe82b,	// (0x0003ddeb) aid_size_cell_ext

0x3b4e,	// (0x0003310e) bg_tb_trans_pane_cp1_ParamLimits

0x3b4e,	// (0x0003310e) bg_tb_trans_pane_cp1

0xe851,	// (0x0003de11) grid_tb_ext_pane_ParamLimits

0xe851,	// (0x0003de11) grid_tb_ext_pane

0xe88c,	// (0x0003de4c) cell_tb_ext_pane_ParamLimits

0xe88c,	// (0x0003de4c) cell_tb_ext_pane

0xe8b4,	// (0x0003de74) cell_tb_ext_pane_g1_ParamLimits

0xe8b4,	// (0x0003de74) cell_tb_ext_pane_g1

0x91aa,	// (0x0003876a) cell_tb_ext_pane_t1

0x37f7,	// (0x00032db7) list_highlight_pane_cp11_ParamLimits

0x37f7,	// (0x00032db7) list_highlight_pane_cp11

0xb6a4,	// (0x0003ac64) popup_uni_indicator_window_ParamLimits

0xb6a4,	// (0x0003ac64) popup_uni_indicator_window

0x3ddd,	// (0x0003339d) bg_popup_sub_pane_cp14

0x91c5,	// (0x00038785) list_uniindi_pane

0x91d1,	// (0x00038791) uniindi_top_pane

0x37f7,	// (0x00032db7) bg_uniindi_top_pane

0x91f0,	// (0x000387b0) uniindi_top_pane_g1

0x9206,	// (0x000387c6) uniindi_top_pane_g2

0x0003,

0xfd1f,	// (0x0003f2df) uniindi_top_pane_g

0x9230,	// (0x000387f0) uniindi_top_pane_t1

0x925a,	// (0x0003881a) list_single_uniindi_pane_ParamLimits

0x925a,	// (0x0003881a) list_single_uniindi_pane

0x78e1,	// (0x00036ea1) bg_uniindi_top_pane_g1

0x926d,	// (0x0003882d) list_single_uniindi_pane_g1

0x9280,	// (0x00038840) list_single_uniindi_pane_t1

0x00aa,	// (0x0002f66a) control_bg_pane

0x92a5,	// (0x00038865) bg_sctrl_sk_pane_cp1

0x92ae,	// (0x0003886e) bg_sctrl_sk_pane_cp2

0x92b7,	// (0x00038877) control_bg_pane_g1

0x92c0,	// (0x00038880) control_bg_pane_g2

0x0001,

0xfd28,	// (0x0003f2e8) control_bg_pane_g

0x7311,	// (0x000368d1) cell_indicator_nsta_pane_g1_ParamLimits

0xdefd,	// (0x0003d4bd) cell_indicator_nsta_pane_g2_ParamLimits

0xfa90,	// (0x0003f050) cell_indicator_nsta_pane_g_ParamLimits

0x3349,	// (0x00032909) form2_midp_time_pane_t1_ParamLimits

0x1cec,	// (0x000312ac) main_idle_act4_pane_ParamLimits

0x1cec,	// (0x000312ac) main_idle_act4_pane

0xc4d0,	// (0x0003ba90) popup_tb_extension_window_ParamLimits

0xe873,	// (0x0003de33) tb_ext_find_pane_ParamLimits

0xe873,	// (0x0003de33) tb_ext_find_pane

0x92c9,	// (0x00038889) ai_gene_pane_1_cp1

0x4bae,	// (0x0003416e) ai_gene_pane_2_cp1

0x92d1,	// (0x00038891) list_single_idle_plugin_calendar_pane

0x92da,	// (0x0003889a) list_single_idle_plugin_notification_pane

0x92e3,	// (0x000388a3) list_single_idle_plugin_player_pane

0xe8d1,	// (0x0003de91) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe8d1,	// (0x0003de91) list_single_idle_plugin_shortcut_pane

0xe8f9,	// (0x0003deb9) main_idle_act4_pane_t1

0xe90f,	// (0x0003decf) main_idle_act4_pane_t2

0x0001,

0xfd2d,	// (0x0003f2ed) main_idle_act4_pane_t

0xe925,	// (0x0003dee5) middle_sk_idle_act4_pane_ParamLimits

0xe925,	// (0x0003dee5) middle_sk_idle_act4_pane

0xe941,	// (0x0003df01) popup_clock_digital_analogue_window_cp2

0xe969,	// (0x0003df29) shortcut_wheel_idle_act4_pane_ParamLimits

0xe969,	// (0x0003df29) shortcut_wheel_idle_act4_pane

0x78e1,	// (0x00036ea1) shortcut_wheel_idle_act4_pane_g1

0x78e1,	// (0x00036ea1) shortcut_wheel_idle_act4_pane_g2

0x78e1,	// (0x00036ea1) shortcut_wheel_idle_act4_pane_g3

0x78e1,	// (0x00036ea1) shortcut_wheel_idle_act4_pane_g4

0x78e1,	// (0x00036ea1) shortcut_wheel_idle_act4_pane_g5

0x9376,	// (0x00038936) shortcut_wheel_idle_act4_pane_g6

0x937e,	// (0x0003893e) shortcut_wheel_idle_act4_pane_g7

0x9386,	// (0x00038946) shortcut_wheel_idle_act4_pane_g8

0x938e,	// (0x0003894e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd32,	// (0x0003f2f2) shortcut_wheel_idle_act4_pane_g

0xe3e6,	// (0x0003d9a6) middle_sk_idle_act4_pane_g1_ParamLimits

0xe3e6,	// (0x0003d9a6) middle_sk_idle_act4_pane_g1

0xe9e6,	// (0x0003dfa6) middle_sk_idle_act4_pane_g2_ParamLimits

0xe9e6,	// (0x0003dfa6) middle_sk_idle_act4_pane_g2

0x0001,

0xfd55,	// (0x0003f315) middle_sk_idle_act4_pane_g_ParamLimits

0xfd55,	// (0x0003f315) middle_sk_idle_act4_pane_g

0xe9fe,	// (0x0003dfbe) middle_sk_idle_act4_pane_t1_ParamLimits

0xe9fe,	// (0x0003dfbe) middle_sk_idle_act4_pane_t1

0xea2d,	// (0x0003dfed) grid_ai_shortcut_pane_ParamLimits

0xea2d,	// (0x0003dfed) grid_ai_shortcut_pane

0xea4a,	// (0x0003e00a) list_highlight_pane_cp16_ParamLimits

0xea4a,	// (0x0003e00a) list_highlight_pane_cp16

0xea57,	// (0x0003e017) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea57,	// (0x0003e017) list_single_idle_plugin_shortcut_pane_g1

0xea63,	// (0x0003e023) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea63,	// (0x0003e023) list_single_idle_plugin_shortcut_pane_g2

0xea7f,	// (0x0003e03f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xea7f,	// (0x0003e03f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5a,	// (0x0003f31a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5a,	// (0x0003f31a) list_single_idle_plugin_shortcut_pane_g

0xea94,	// (0x0003e054) cell_ai_shortcut_pane_ParamLimits

0xea94,	// (0x0003e054) cell_ai_shortcut_pane

0xeaaa,	// (0x0003e06a) cell_ai_shortcut_pane_g1_ParamLimits

0xeaaa,	// (0x0003e06a) cell_ai_shortcut_pane_g1

0x92c9,	// (0x00038889) ai_gene_pane_1_cp2

0x94df,	// (0x00038a9f) ai_gene_pane_2_cp2

0x94e7,	// (0x00038aa7) list_highlight_pane_cp15

0x94f0,	// (0x00038ab0) list_single_idle_plugin_calendar_pane_g1

0x94e7,	// (0x00038aa7) list_highlight_pane_cp17

0x94f8,	// (0x00038ab8) list_single_idle_plugin_calendar_pane_g1_copy1

0x9500,	// (0x00038ac0) list_single_idle_plugin_player_pane_g1

0x6c5d,	// (0x0003621d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd61,	// (0x0003f321) list_single_idle_plugin_player_pane_g

0x9508,	// (0x00038ac8) list_single_idle_plugin_player_pane_t1

0x9516,	// (0x00038ad6) list_single_idle_plugin_player_pane_t2

0x9524,	// (0x00038ae4) list_single_idle_plugin_player_pane_t3

0x9532,	// (0x00038af2) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd66,	// (0x0003f326) list_single_idle_plugin_player_pane_t

0x9540,	// (0x00038b00) wait_bar_pane_cp15

0x9548,	// (0x00038b08) grid_ai_notification_pane

0x6c5d,	// (0x0003621d) list_single_idle_plugin_notification_pane_g1

0xeacc,	// (0x0003e08c) cell_ai_notification_pane_ParamLimits

0xeacc,	// (0x0003e08c) cell_ai_notification_pane

0x955e,	// (0x00038b1e) cell_ai_notification_pane_g1

0x9566,	// (0x00038b26) cell_ai_notification_pane_t1

0xead9,	// (0x0003e099) tb_ext_find_button_pane

0xeae1,	// (0x0003e0a1) tb_ext_find_pane_g1

0xeae9,	// (0x0003e0a9) tb_ext_find_pane_t1

0x4460,	// (0x00033a20) tb_ext_find_button_pane_g1

0x9592,	// (0x00038b52) tb_ext_find_button_pane_g2

0x0001,

0xfd6f,	// (0x0003f32f) tb_ext_find_button_pane_g

0xe8f9,	// (0x0003deb9) main_idle_act4_pane_t1_ParamLimits

0xe90f,	// (0x0003decf) main_idle_act4_pane_t2_ParamLimits

0xfd2d,	// (0x0003f2ed) main_idle_act4_pane_t_ParamLimits

0xe941,	// (0x0003df01) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe959,	// (0x0003df19) sat_plugin_idle_act4_pane_ParamLimits

0xe959,	// (0x0003df19) sat_plugin_idle_act4_pane

0xeaf7,	// (0x0003e0b7) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeaf7,	// (0x0003e0b7) sat_plugin_idle_act4_pane_t1

0xeb0f,	// (0x0003e0cf) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb0f,	// (0x0003e0cf) sat_plugin_idle_act4_pane_t2

0xeb27,	// (0x0003e0e7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb27,	// (0x0003e0e7) sat_plugin_idle_act4_pane_t3

0xeb3f,	// (0x0003e0ff) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb3f,	// (0x0003e0ff) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd74,	// (0x0003f334) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd74,	// (0x0003f334) sat_plugin_idle_act4_pane_t

0x016f,	// (0x0002f72f) popup_battery_window_ParamLimits

0x016f,	// (0x0002f72f) popup_battery_window

0x37f7,	// (0x00032db7) bg_popup_sub_pane_cp25_ParamLimits

0x37f7,	// (0x00032db7) bg_popup_sub_pane_cp25

0x95e7,	// (0x00038ba7) popup_battery_window_g1_ParamLimits

0x95e7,	// (0x00038ba7) popup_battery_window_g1

0x95f3,	// (0x00038bb3) popup_battery_window_t1_ParamLimits

0x95f3,	// (0x00038bb3) popup_battery_window_t1

0x9605,	// (0x00038bc5) popup_battery_window_t2_ParamLimits

0x9605,	// (0x00038bc5) popup_battery_window_t2

0x0001,

0xfd7d,	// (0x0003f33d) popup_battery_window_t_ParamLimits

0xfd7d,	// (0x0003f33d) popup_battery_window_t

0xd414,	// (0x0003c9d4) midp_canvas_pane_ParamLimits

0xd471,	// (0x0003ca31) midp_keypad_pane_ParamLimits

0xd471,	// (0x0003ca31) midp_keypad_pane

0x4db1,	// (0x00034371) main_midp_pane_ParamLimits

0x738b,	// (0x0003694b) signal_pane_g2_cp_ParamLimits

0xeb57,	// (0x0003e117) aid_size_cell_midp_keypad_ParamLimits

0xeb57,	// (0x0003e117) aid_size_cell_midp_keypad

0xeb75,	// (0x0003e135) midp_keyp_game_grid_pane_ParamLimits

0xeb75,	// (0x0003e135) midp_keyp_game_grid_pane

0xeb9c,	// (0x0003e15c) midp_keyp_rocker_pane_ParamLimits

0xeb9c,	// (0x0003e15c) midp_keyp_rocker_pane

0xebed,	// (0x0003e1ad) midp_keyp_sk_left_pane_ParamLimits

0xebed,	// (0x0003e1ad) midp_keyp_sk_left_pane

0xec41,	// (0x0003e201) midp_keyp_sk_right_pane_ParamLimits

0xec41,	// (0x0003e201) midp_keyp_sk_right_pane

0x2cc9,	// (0x00032289) bg_button_pane_cp03

0xec95,	// (0x0003e255) midp_keyp_sk_left_pane_g1

0x2cc9,	// (0x00032289) bg_button_pane_cp04

0xec95,	// (0x0003e255) midp_keyp_sk_right_pane_g1

0x78e1,	// (0x00036ea1) midp_keyp_rocker_pane_g1

0xec9e,	// (0x0003e25e) keyp_game_cell_pane_ParamLimits

0xec9e,	// (0x0003e25e) keyp_game_cell_pane

0x2cc9,	// (0x00032289) bg_button_pane_cp02

0xecc2,	// (0x0003e282) keyp_game_cell_pane_g1

0xb63f,	// (0x0003abff) popup_fep_vkb2_window_ParamLimits

0xb63f,	// (0x0003abff) popup_fep_vkb2_window

0xc966,	// (0x0003bf26) aid_size_cell_vkb2_ParamLimits

0xc966,	// (0x0003bf26) aid_size_cell_vkb2

0xc99c,	// (0x0003bf5c) popup_fep_vkb2_window_g1_ParamLimits

0xc99c,	// (0x0003bf5c) popup_fep_vkb2_window_g1

0xc9ec,	// (0x0003bfac) vkb2_area_bottom_pane_ParamLimits

0xc9ec,	// (0x0003bfac) vkb2_area_bottom_pane

0xca40,	// (0x0003c000) vkb2_area_keypad_pane_ParamLimits

0xca40,	// (0x0003c000) vkb2_area_keypad_pane

0xca88,	// (0x0003c048) vkb2_area_top_pane_ParamLimits

0xca88,	// (0x0003c048) vkb2_area_top_pane

0xcb0e,	// (0x0003c0ce) vkb2_top_entry_pane_ParamLimits

0xcb0e,	// (0x0003c0ce) vkb2_top_entry_pane

0xcb3b,	// (0x0003c0fb) vkb2_top_grid_left_pane_ParamLimits

0xcb3b,	// (0x0003c0fb) vkb2_top_grid_left_pane

0xcb5b,	// (0x0003c11b) vkb2_top_grid_right_pane_ParamLimits

0xcb5b,	// (0x0003c11b) vkb2_top_grid_right_pane

0x2420,	// (0x000319e0) vkb2_cell_keypad_pane_ParamLimits

0x2420,	// (0x000319e0) vkb2_cell_keypad_pane

0xcba1,	// (0x0003c161) vkb2_area_bottom_grid_pane_ParamLimits

0xcba1,	// (0x0003c161) vkb2_area_bottom_grid_pane

0xcbcb,	// (0x0003c18b) vkb2_area_bottom_pane_g1_ParamLimits

0xcbcb,	// (0x0003c18b) vkb2_area_bottom_pane_g1

0xcbf1,	// (0x0003c1b1) vkb2_area_bottom_pane_g2_ParamLimits

0xcbf1,	// (0x0003c1b1) vkb2_area_bottom_pane_g2

0xcc22,	// (0x0003c1e2) vkb2_area_bottom_pane_g3_ParamLimits

0xcc22,	// (0x0003c1e2) vkb2_area_bottom_pane_g3

0x0002,

0xfd82,	// (0x0003f342) vkb2_area_bottom_pane_g_ParamLimits

0xfd82,	// (0x0003f342) vkb2_area_bottom_pane_g

0x25ca,	// (0x00031b8a) vkb2_top_cell_left_pane_ParamLimits

0x25ca,	// (0x00031b8a) vkb2_top_cell_left_pane

0xeccb,	// (0x0003e28b) vkb2_top_entry_pane_g1_ParamLimits

0xeccb,	// (0x0003e28b) vkb2_top_entry_pane_g1

0xecd9,	// (0x0003e299) vkb2_top_entry_pane_t1_ParamLimits

0xecd9,	// (0x0003e299) vkb2_top_entry_pane_t1

0x97b6,	// (0x00038d76) vkb2_top_entry_pane_t2_ParamLimits

0x97b6,	// (0x00038d76) vkb2_top_entry_pane_t2

0x97e8,	// (0x00038da8) vkb2_top_entry_pane_t3_ParamLimits

0x97e8,	// (0x00038da8) vkb2_top_entry_pane_t3

0x0002,

0xfd89,	// (0x0003f349) vkb2_top_entry_pane_t_ParamLimits

0xfd89,	// (0x0003f349) vkb2_top_entry_pane_t

0xcc8c,	// (0x0003c24c) vkb2_top_grid_right_pane_g1_ParamLimits

0xcc8c,	// (0x0003c24c) vkb2_top_grid_right_pane_g1

0x262d,	// (0x00031bed) vkb2_top_grid_right_pane_g2_ParamLimits

0x262d,	// (0x00031bed) vkb2_top_grid_right_pane_g2

0x2645,	// (0x00031c05) vkb2_top_grid_right_pane_g3_ParamLimits

0x2645,	// (0x00031c05) vkb2_top_grid_right_pane_g3

0xcca2,	// (0x0003c262) vkb2_top_grid_right_pane_g4_ParamLimits

0xcca2,	// (0x0003c262) vkb2_top_grid_right_pane_g4

0x0003,

0xfd90,	// (0x0003f350) vkb2_top_grid_right_pane_g_ParamLimits

0xfd90,	// (0x0003f350) vkb2_top_grid_right_pane_g

0x2673,	// (0x00031c33) vkb2_top_cell_left_pane_g1

0x268a,	// (0x00031c4a) vkb2_cell_keypad_pane_g1_ParamLimits

0x268a,	// (0x00031c4a) vkb2_cell_keypad_pane_g1

0x980c,	// (0x00038dcc) vkb2_cell_keypad_pane_t1_ParamLimits

0x980c,	// (0x00038dcc) vkb2_cell_keypad_pane_t1

0x2698,	// (0x00031c58) vkb2_cell_bottom_grid_pane_ParamLimits

0x2698,	// (0x00031c58) vkb2_cell_bottom_grid_pane

0x26d1,	// (0x00031c91) vkb2_cell_bottom_grid_pane_g1

0xe98a,	// (0x0003df4a) aid_call2_pane_cp02

0xe992,	// (0x0003df52) aid_call_pane_cp02

0xe99a,	// (0x0003df5a) clock_digital_number_pane_cp10

0xe9a2,	// (0x0003df62) clock_digital_number_pane_cp11

0xe9aa,	// (0x0003df6a) clock_digital_number_pane_cp12

0xe9b2,	// (0x0003df72) clock_digital_number_pane_cp13

0xe9ba,	// (0x0003df7a) clock_digital_separator_pane_cp10

0x4460,	// (0x00033a20) popup_clock_digital_analogue_window_cp2_g1

0x4460,	// (0x00033a20) popup_clock_digital_analogue_window_cp2_g2

0xe9c2,	// (0x0003df82) popup_clock_digital_analogue_window_cp2_g3

0x4460,	// (0x00033a20) popup_clock_digital_analogue_window_cp2_g4

0xe9c2,	// (0x0003df82) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd45,	// (0x0003f305) popup_clock_digital_analogue_window_cp2_g

0xe9ca,	// (0x0003df8a) popup_clock_digital_analogue_window_cp2_t1

0xe9d8,	// (0x0003df98) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd50,	// (0x0003f310) popup_clock_digital_analogue_window_cp2_t

0x78e1,	// (0x00036ea1) clock_digital_number_pane_cp10_g1

0x78e1,	// (0x00036ea1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0003f0ec) clock_digital_number_pane_cp10_g

0x78e1,	// (0x00036ea1) clock_digital_separator_pane_cp10_g1

0x78e1,	// (0x00036ea1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0003f0ec) clock_digital_separator_pane_cp10_g

0x9212,	// (0x000387d2) uniindi_top_pane_g3

0x9223,	// (0x000387e3) uniindi_top_pane_g4

0x24ab,	// (0x00031a6b) vkb2_row_keypad_pane_ParamLimits

0x24ab,	// (0x00031a6b) vkb2_row_keypad_pane

0x26ed,	// (0x00031cad) vkb2_cell_t_keypad_pane_ParamLimits

0x26ed,	// (0x00031cad) vkb2_cell_t_keypad_pane

0x26fd,	// (0x00031cbd) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x26fd,	// (0x00031cbd) vkb2_cell_t_keypad_pane_cp08

0x2710,	// (0x00031cd0) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2710,	// (0x00031cd0) vkb2_cell_t_keypad_pane_cp09

0x2724,	// (0x00031ce4) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2724,	// (0x00031ce4) vkb2_cell_t_keypad_pane_cp01

0x2735,	// (0x00031cf5) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2735,	// (0x00031cf5) vkb2_cell_t_keypad_pane_cp02

0x2746,	// (0x00031d06) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2746,	// (0x00031d06) vkb2_cell_t_keypad_pane_cp03

0x2757,	// (0x00031d17) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2757,	// (0x00031d17) vkb2_cell_t_keypad_pane_cp04

0x2768,	// (0x00031d28) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2768,	// (0x00031d28) vkb2_cell_t_keypad_pane_cp05

0x2779,	// (0x00031d39) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2779,	// (0x00031d39) vkb2_cell_t_keypad_pane_cp06

0x278a,	// (0x00031d4a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x278a,	// (0x00031d4a) vkb2_cell_t_keypad_pane_cp07

0x279b,	// (0x00031d5b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x279b,	// (0x00031d5b) vkb2_cell_t_keypad_pane_cp10

0x1f51,	// (0x00031511) vkb2_cell_t_keypad_pane_g1

0x9823,	// (0x00038de3) vkb2_cell_t_keypad_pane_t1

0x00aa,	// (0x0002f66a) popup_grid_graphic2_window

0xed12,	// (0x0003e2d2) aid_size_cell_graphic2_ParamLimits

0xed12,	// (0x0003e2d2) aid_size_cell_graphic2

0xed50,	// (0x0003e310) bg_popup_window_pane_cp21_ParamLimits

0xed50,	// (0x0003e310) bg_popup_window_pane_cp21

0xed5e,	// (0x0003e31e) graphic2_pages_pane_ParamLimits

0xed5e,	// (0x0003e31e) graphic2_pages_pane

0xedb4,	// (0x0003e374) grid_graphic2_control_pane_ParamLimits

0xedb4,	// (0x0003e374) grid_graphic2_control_pane

0xedfc,	// (0x0003e3bc) grid_graphic2_pane_ParamLimits

0xedfc,	// (0x0003e3bc) grid_graphic2_pane

0xee83,	// (0x0003e443) cell_graphic2_pane

0x00aa,	// (0x0002f66a) main_comp_mode_pane

0x8a92,	// (0x00038052) list_ai3_gene_pane_ParamLimits

0xe6d1,	// (0x0003dc91) bg_popup_window_pane_cp19_ParamLimits

0x8e68,	// (0x00038428) bg_touch_area_indi_pane_ParamLimits

0x8e68,	// (0x00038428) bg_touch_area_indi_pane

0x8e7e,	// (0x0003843e) bg_touch_area_indi_pane_cp01_ParamLimits

0x8e7e,	// (0x0003843e) bg_touch_area_indi_pane_cp01

0x8e94,	// (0x00038454) bg_touch_area_indi_pane_cp02_ParamLimits

0x8e94,	// (0x00038454) bg_touch_area_indi_pane_cp02

0x8eac,	// (0x0003846c) bg_touch_area_indi_pane_cp03_ParamLimits

0x8eac,	// (0x0003846c) bg_touch_area_indi_pane_cp03

0x8ec6,	// (0x00038486) popup_slider_window_g1_ParamLimits

0x8ee2,	// (0x000384a2) popup_slider_window_g2_ParamLimits

0x8efe,	// (0x000384be) popup_slider_window_g3_ParamLimits

0xfcda,	// (0x0003f29a) popup_slider_window_g_ParamLimits

0x8f5a,	// (0x0003851a) popup_slider_window_t1_ParamLimits

0x8fce,	// (0x0003858e) small_volume_slider_vertical_pane_ParamLimits

0xee83,	// (0x0003e443) cell_graphic2_pane_ParamLimits

0xeee0,	// (0x0003e4a0) bg_button_pane_cp10_ParamLimits

0xeee0,	// (0x0003e4a0) bg_button_pane_cp10

0xeef3,	// (0x0003e4b3) bg_button_pane_cp11_ParamLimits

0xeef3,	// (0x0003e4b3) bg_button_pane_cp11

0xef06,	// (0x0003e4c6) graphic2_pages_pane_g1_ParamLimits

0xef06,	// (0x0003e4c6) graphic2_pages_pane_g1

0xef21,	// (0x0003e4e1) graphic2_pages_pane_g2_ParamLimits

0xef21,	// (0x0003e4e1) graphic2_pages_pane_g2

0x0001,

0xfd9e,	// (0x0003f35e) graphic2_pages_pane_g_ParamLimits

0xfd9e,	// (0x0003f35e) graphic2_pages_pane_g

0xef39,	// (0x0003e4f9) graphic2_pages_pane_t1_ParamLimits

0xef39,	// (0x0003e4f9) graphic2_pages_pane_t1

0xef51,	// (0x0003e511) cell_graphic2_control_pane_ParamLimits

0xef51,	// (0x0003e511) cell_graphic2_control_pane

0xef83,	// (0x0003e543) cell_graphic2_pane_g1_ParamLimits

0xef83,	// (0x0003e543) cell_graphic2_pane_g1

0xe3f4,	// (0x0003d9b4) cell_graphic2_pane_g2_ParamLimits

0xe3f4,	// (0x0003d9b4) cell_graphic2_pane_g2

0xe40e,	// (0x0003d9ce) cell_graphic2_pane_g3_ParamLimits

0xe40e,	// (0x0003d9ce) cell_graphic2_pane_g3

0xe401,	// (0x0003d9c1) cell_graphic2_pane_g4_ParamLimits

0xe401,	// (0x0003d9c1) cell_graphic2_pane_g4

0xef90,	// (0x0003e550) cell_graphic2_pane_g5_ParamLimits

0xef90,	// (0x0003e550) cell_graphic2_pane_g5

0x0004,

0xfda3,	// (0x0003f363) cell_graphic2_pane_g_ParamLimits

0xfda3,	// (0x0003f363) cell_graphic2_pane_g

0xefb0,	// (0x0003e570) cell_graphic2_pane_t1_ParamLimits

0xefb0,	// (0x0003e570) cell_graphic2_pane_t1

0x5fa8,	// (0x00035568) grid_highlight_pane_cp11_ParamLimits

0x5fa8,	// (0x00035568) grid_highlight_pane_cp11

0x37f7,	// (0x00032db7) bg_button_pane_cp05

0xefe5,	// (0x0003e5a5) cell_graphic2_control_pane_g1

0x78e1,	// (0x00036ea1) bg_touch_area_indi_pane_g1

0x9af3,	// (0x000390b3) aid_cmod_rocker_key_size

0x9afd,	// (0x000390bd) aid_cmode_itu_key_size

0x9b07,	// (0x000390c7) main_cmode_video_pane

0x9b11,	// (0x000390d1) main_comp_mode_itu_pane

0x9b1d,	// (0x000390dd) main_comp_mode_rocker_pane

0x9b29,	// (0x000390e9) cell_cmode_rocker_pane_ParamLimits

0x9b29,	// (0x000390e9) cell_cmode_rocker_pane

0x9b3b,	// (0x000390fb) cell_cmode_itu_pane_ParamLimits

0x9b3b,	// (0x000390fb) cell_cmode_itu_pane

0x3ddd,	// (0x0003339d) bg_button_pane_cp06_ParamLimits

0x3ddd,	// (0x0003339d) bg_button_pane_cp06

0x7b5f,	// (0x0003711f) cell_cmode_rocker_pane_g1_ParamLimits

0x7b5f,	// (0x0003711f) cell_cmode_rocker_pane_g1

0x9072,	// (0x00038632) cell_cmode_rocker_pane_g2_ParamLimits

0x9072,	// (0x00038632) cell_cmode_rocker_pane_g2

0x0001,

0xfdb3,	// (0x0003f373) cell_cmode_rocker_pane_g_ParamLimits

0xfdb3,	// (0x0003f373) cell_cmode_rocker_pane_g

0x2cc9,	// (0x00032289) bg_button_pane_cp07

0x9b50,	// (0x00039110) cell_cmode_itu_pane_g1

0x9b59,	// (0x00039119) cell_cmode_itu_pane_t1

0x9b67,	// (0x00039127) cell_cmode_itu_pane_t2

0x0001,

0xfdb8,	// (0x0003f378) cell_cmode_itu_pane_t

0x9295,	// (0x00038855) aid_touch_ctrl_left

0x929d,	// (0x0003885d) aid_touch_ctrl_right

0x2cc9,	// (0x00032289) compa_mode_pane

0xf00b,	// (0x0003e5cb) aid_cmod_rocker_key_size_cp

0xf015,	// (0x0003e5d5) aid_cmode_itu_key_size_cp

0x9b89,	// (0x00039149) compa_mode_pane_g1

0x9b91,	// (0x00039151) compa_mode_pane_g2

0x9b99,	// (0x00039159) compa_mode_pane_g3

0x0002,

0xfdbd,	// (0x0003f37d) compa_mode_pane_g

0xf01f,	// (0x0003e5df) main_comp_mode_itu_pane_cp

0xf027,	// (0x0003e5e7) main_comp_mode_rocker_pane_cp

0xf02f,	// (0x0003e5ef) cell_cmode_itu_pane_cp_ParamLimits

0xf02f,	// (0x0003e5ef) cell_cmode_itu_pane_cp

0xf044,	// (0x0003e604) cell_cmode_rocker_pane_cp_ParamLimits

0xf044,	// (0x0003e604) cell_cmode_rocker_pane_cp

0x3ddd,	// (0x0003339d) bg_button_pane_cp06_cp_ParamLimits

0x3ddd,	// (0x0003339d) bg_button_pane_cp06_cp

0x7b5f,	// (0x0003711f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7b5f,	// (0x0003711f) cell_cmode_rocker_pane_g1_cp

0x78e1,	// (0x00036ea1) cell_cmode_rocker_pane_g2_cp

0x2cc9,	// (0x00032289) bg_button_pane_cp07_cp

0xf056,	// (0x0003e616) cell_cmode_itu_pane_g1_cp

0xf05f,	// (0x0003e61f) cell_cmode_itu_pane_t1_cp

0xf05f,	// (0x0003e61f) cell_cmode_itu_pane_t2_cp

0xdd10,	// (0x0003d2d0) settings_code_pane_cp2

0x2dbd,	// (0x0003237d) bg_popup_window_pane_cp3_ParamLimits

0x39d1,	// (0x00032f91) heading_pane_cp3_ParamLimits

0x39dd,	// (0x00032f9d) listscroll_popup_graphic_pane_ParamLimits

0x1cfa,	// (0x000312ba) fep_hwr_aid_pane_ParamLimits

0x2171,	// (0x00031731) aid_touch_sctrl_top_ParamLimits

0x218c,	// (0x0003174c) sctrl_sk_top_pane_g1_ParamLimits

0x1f51,	// (0x00031511) sctrl_sk_top_pane_g2_ParamLimits

0xfcf3,	// (0x0003f2b3) sctrl_sk_top_pane_g_ParamLimits

0x2199,	// (0x00031759) sctrl_sk_top_pane_t1_ParamLimits

0x2171,	// (0x00031731) aid_touch_sctrl_bottom_ParamLimits

0x2199,	// (0x00031759) sctrl_sk_bottom_pane_t1_ParamLimits

0x91de,	// (0x0003879e) aid_area_touch_clock

0xcad0,	// (0x0003c090) aid_vkb2_area_top_pane_cell_ParamLimits

0xcad0,	// (0x0003c090) aid_vkb2_area_top_pane_cell

0xcb7b,	// (0x0003c13b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcb7b,	// (0x0003c13b) aid_vkb2_area_bottom_pane_cell

0x976e,	// (0x00038d2e) popup_char_count_window

0x9be6,	// (0x000391a6) popup_char_count_window_g1

0x9bef,	// (0x000391af) popup_char_count_window_g2

0x9bf8,	// (0x000391b8) popup_char_count_window_g3

0x0002,

0xfdc4,	// (0x0003f384) popup_char_count_window_g

0x9c01,	// (0x000391c1) popup_char_count_window_t1

0x2248,	// (0x00031808) popup_fep_char_preview_window_ParamLimits

0x2248,	// (0x00031808) popup_fep_char_preview_window

0xcaf0,	// (0x0003c0b0) vkb2_top_candi_pane_ParamLimits

0xcaf0,	// (0x0003c0b0) vkb2_top_candi_pane

0xf06d,	// (0x0003e62d) cell_vkb2_top_candi_pane_ParamLimits

0xf06d,	// (0x0003e62d) cell_vkb2_top_candi_pane

0x27b0,	// (0x00031d70) bg_popup_fep_char_preview_window_ParamLimits

0x27b0,	// (0x00031d70) bg_popup_fep_char_preview_window

0x27be,	// (0x00031d7e) popup_fep_char_preview_window_t1_ParamLimits

0x27be,	// (0x00031d7e) popup_fep_char_preview_window_t1

0x9c5c,	// (0x0003921c) bg_popup_fep_char_preview_window_g1

0x9c64,	// (0x00039224) bg_popup_fep_char_preview_window_g2

0x9c6c,	// (0x0003922c) bg_popup_fep_char_preview_window_g3

0x9c74,	// (0x00039234) bg_popup_fep_char_preview_window_g4

0x9c7c,	// (0x0003923c) bg_popup_fep_char_preview_window_g5

0x27f8,	// (0x00031db8) bg_popup_fep_char_preview_window_g6

0x9c84,	// (0x00039244) bg_popup_fep_char_preview_window_g7

0x9c8c,	// (0x0003924c) bg_popup_fep_char_preview_window_g8

0x9c94,	// (0x00039254) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcb,	// (0x0003f38b) bg_popup_fep_char_preview_window_g

0x1f51,	// (0x00031511) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1f51,	// (0x00031511) cell_vkb2_top_candi_pane_g1

0x1f5f,	// (0x0003151f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1f5f,	// (0x0003151f) cell_vkb2_top_candi_pane_g2

0x9396,	// (0x00038956) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9396,	// (0x00038956) cell_vkb2_top_candi_pane_g3

0x2800,	// (0x00031dc0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2800,	// (0x00031dc0) cell_vkb2_top_candi_pane_g4

0x802a,	// (0x000375ea) cell_vkb2_top_candi_pane_g5_ParamLimits

0x802a,	// (0x000375ea) cell_vkb2_top_candi_pane_g5

0x2821,	// (0x00031de1) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2821,	// (0x00031de1) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdde,	// (0x0003f39e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdde,	// (0x0003f39e) cell_vkb2_top_candi_pane_g

0x282f,	// (0x00031def) cell_vkb2_top_candi_pane_t1

0x1b2c,	// (0x000310ec) aid_size_touch_slider_mark_ParamLimits

0x1b2c,	// (0x000310ec) aid_size_touch_slider_mark

0xed9a,	// (0x0003e35a) grid_graphic2_catg_pane_ParamLimits

0xed9a,	// (0x0003e35a) grid_graphic2_catg_pane

0xee56,	// (0x0003e416) popup_grid_graphic2_window_t1_ParamLimits

0xee56,	// (0x0003e416) popup_grid_graphic2_window_t1

0xee6c,	// (0x0003e42c) popup_grid_graphic2_window_t2_ParamLimits

0xee6c,	// (0x0003e42c) popup_grid_graphic2_window_t2

0x0001,

0xfd99,	// (0x0003f359) popup_grid_graphic2_window_t_ParamLimits

0xfd99,	// (0x0003f359) popup_grid_graphic2_window_t

0x37f7,	// (0x00032db7) bg_button_pane_cp05_ParamLimits

0xefe5,	// (0x0003e5a5) cell_graphic2_control_pane_g1_ParamLimits

0xf0d3,	// (0x0003e693) cell_graphic2_catg_pane_ParamLimits

0xf0d3,	// (0x0003e693) cell_graphic2_catg_pane

0x2cc9,	// (0x00032289) bg_button_pane_cp12

0xf0e5,	// (0x0003e6a5) cell_graphic2_catg_pane_g1

0x91aa,	// (0x0003876a) cell_tb_ext_pane_t1_ParamLimits

0x25ea,	// (0x00031baa) vkb2_top_cell_right_narrow_pane_ParamLimits

0x25ea,	// (0x00031baa) vkb2_top_cell_right_narrow_pane

0x2602,	// (0x00031bc2) vkb2_top_cell_right_wide_pane_ParamLimits

0x2602,	// (0x00031bc2) vkb2_top_cell_right_wide_pane

0x1cec,	// (0x000312ac) bg_vkb2_func_pane_ParamLimits

0x1cec,	// (0x000312ac) bg_vkb2_func_pane

0x2673,	// (0x00031c33) vkb2_top_cell_left_pane_g1_ParamLimits

0x1cec,	// (0x000312ac) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1cec,	// (0x000312ac) bg_vkb2_fuc_pane_cp03

0x26d1,	// (0x00031c91) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x52c3,	// (0x00034883) bg_vkb2_func_pane_g1

0x52cb,	// (0x0003488b) bg_vkb2_func_pane_g2

0x52db,	// (0x0003489b) bg_vkb2_func_pane_g3

0x52d3,	// (0x00034893) bg_vkb2_func_pane_g4

0x52e3,	// (0x000348a3) bg_vkb2_func_pane_g5

0x52eb,	// (0x000348ab) bg_vkb2_func_pane_g6

0x52f3,	// (0x000348b3) bg_vkb2_func_pane_g7

0x52fb,	// (0x000348bb) bg_vkb2_func_pane_g8

0x52bb,	// (0x0003487b) bg_vkb2_func_pane_g9

0x0008,

0xfdeb,	// (0x0003f3ab) bg_vkb2_func_pane_g

0x1cec,	// (0x000312ac) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1cec,	// (0x000312ac) bg_vkb2_fuc_pane_cp01

0x2673,	// (0x00031c33) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2673,	// (0x00031c33) vkb2_top_cell_right_wide_pane_g1

0x1cec,	// (0x000312ac) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1cec,	// (0x000312ac) bg_vkb2_fuc_pane_cp02

0x26d1,	// (0x00031c91) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x26d1,	// (0x00031c91) vkb2_top_cell_right_narrow_pane_g1

0xe611,	// (0x0003dbd1) aid_touch_area_decrease_ParamLimits

0xe611,	// (0x0003dbd1) aid_touch_area_decrease

0xe645,	// (0x0003dc05) aid_touch_area_increase_ParamLimits

0xe645,	// (0x0003dc05) aid_touch_area_increase

0xe66d,	// (0x0003dc2d) aid_touch_area_mute_ParamLimits

0xe66d,	// (0x0003dc2d) aid_touch_area_mute

0xe69d,	// (0x0003dc5d) aid_touch_area_slider_ParamLimits

0xe69d,	// (0x0003dc5d) aid_touch_area_slider

0xe6dd,	// (0x0003dc9d) popup_slider_window_g4_ParamLimits

0xe6dd,	// (0x0003dc9d) popup_slider_window_g4

0xe705,	// (0x0003dcc5) popup_slider_window_g5_ParamLimits

0xe705,	// (0x0003dcc5) popup_slider_window_g5

0xe739,	// (0x0003dcf9) popup_slider_window_g6_ParamLimits

0xe739,	// (0x0003dcf9) popup_slider_window_g6

0x8f88,	// (0x00038548) popup_slider_window_t2_ParamLimits

0x8f88,	// (0x00038548) popup_slider_window_t2

0x0001,

0xfce7,	// (0x0003f2a7) popup_slider_window_t_ParamLimits

0xfce7,	// (0x0003f2a7) popup_slider_window_t

0xe755,	// (0x0003dd15) slider_pane_ParamLimits

0xe755,	// (0x0003dd15) slider_pane

0x9cb7,	// (0x00039277) slider_pane_g1_ParamLimits

0x9cb7,	// (0x00039277) slider_pane_g1

0x9ccb,	// (0x0003928b) slider_pane_g2_ParamLimits

0x9ccb,	// (0x0003928b) slider_pane_g2

0x9ce1,	// (0x000392a1) slider_pane_g3_ParamLimits

0x9ce1,	// (0x000392a1) slider_pane_g3

0x0003,

0xfdfe,	// (0x0003f3be) slider_pane_g_ParamLimits

0xfdfe,	// (0x0003f3be) slider_pane_g

0xc518,	// (0x0003bad8) popup_tb_float_extension_window_ParamLimits

0xc518,	// (0x0003bad8) popup_tb_float_extension_window

0x9d0d,	// (0x000392cd) aid_size_cell_tb_float_ext

0x2cc9,	// (0x00032289) bg_popup_sub_window_cp28

0x9d19,	// (0x000392d9) grid_tb_float_ext_pane

0x9d23,	// (0x000392e3) cell_tb_float_ext_pane_ParamLimits

0x9d23,	// (0x000392e3) cell_tb_float_ext_pane

0x9d3d,	// (0x000392fd) cell_tb_float_ext_pane_g1

0x9d46,	// (0x00039306) grid_highlight_pane_cp12

0xc6f0,	// (0x0003bcb0) cell_last_hwr_side_pane_ParamLimits

0xc6f0,	// (0x0003bcb0) cell_last_hwr_side_pane

0x78e1,	// (0x00036ea1) cell_last_hwr_side_pane_g1

0x9d4f,	// (0x0003930f) cell_last_hwr_side_pane_g2

0x0001,

0xfe07,	// (0x0003f3c7) cell_last_hwr_side_pane_g

0xcc57,	// (0x0003c217) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcc57,	// (0x0003c217) vkb2_area_bottom_space_btn_pane

0x1f51,	// (0x00031511) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9823,	// (0x00038de3) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x282f,	// (0x00031def) cell_vkb2_top_candi_pane_t1_ParamLimits

0x284e,	// (0x00031e0e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x284e,	// (0x00031e0e) vkb2_area_bottom_space_btn_pane_g1

0x2888,	// (0x00031e48) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2888,	// (0x00031e48) vkb2_area_bottom_space_btn_pane_g2

0x28be,	// (0x00031e7e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x28be,	// (0x00031e7e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0c,	// (0x0003f3cc) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0c,	// (0x0003f3cc) vkb2_area_bottom_space_btn_pane_g

0x1daf,	// (0x0003136f) cel_fep_hwr_func_pane_ParamLimits

0x1daf,	// (0x0003136f) cel_fep_hwr_func_pane

0xc6c5,	// (0x0003bc85) cell_hwr_side_button_pane_ParamLimits

0xc6c5,	// (0x0003bc85) cell_hwr_side_button_pane

0x91de,	// (0x0003879e) aid_area_touch_clock_ParamLimits

0x37f7,	// (0x00032db7) bg_uniindi_top_pane_ParamLimits

0x91f0,	// (0x000387b0) uniindi_top_pane_g1_ParamLimits

0x9206,	// (0x000387c6) uniindi_top_pane_g2_ParamLimits

0x9212,	// (0x000387d2) uniindi_top_pane_g3_ParamLimits

0x9223,	// (0x000387e3) uniindi_top_pane_g4_ParamLimits

0xfd1f,	// (0x0003f2df) uniindi_top_pane_g_ParamLimits

0x9230,	// (0x000387f0) uniindi_top_pane_t1_ParamLimits

0x37f7,	// (0x00032db7) bg_vkb2_func_pane_cp01_ParamLimits

0x37f7,	// (0x00032db7) bg_vkb2_func_pane_cp01

0x9d58,	// (0x00039318) cel_fep_hwr_func_pane_g1_ParamLimits

0x9d58,	// (0x00039318) cel_fep_hwr_func_pane_g1

0x37f7,	// (0x00032db7) bg_vkb2_func_pane_cp02_ParamLimits

0x37f7,	// (0x00032db7) bg_vkb2_func_pane_cp02

0x9d58,	// (0x00039318) cell_hwr_side_button_pane_g1_ParamLimits

0x9d58,	// (0x00039318) cell_hwr_side_button_pane_g1

0x513c,	// (0x000346fc) status_pane_g4_ParamLimits

0x513c,	// (0x000346fc) status_pane_g4

0x5156,	// (0x00034716) status_pane_t1

0x761b,	// (0x00036bdb) form2_midp_gauge_slider_cont_pane

0x7623,	// (0x00036be3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdfc8,	// (0x0003d588) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdfda,	// (0x0003d59a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfadf,	// (0x0003f09f) form2_midp_gauge_slider_pane_t_ParamLimits

0x7659,	// (0x00036c19) form2_midp_slider_pane_ParamLimits

0x2208,	// (0x000317c8) aid_size_cell_func_vkb2_ParamLimits

0x2208,	// (0x000317c8) aid_size_cell_func_vkb2

0x9cf9,	// (0x000392b9) slider_pane_g4_ParamLimits

0x9cf9,	// (0x000392b9) slider_pane_g4

0xccb8,	// (0x0003c278) form2_midp_gauge_slider_pane_t2_cp01

0xccc6,	// (0x0003c286) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xccc6,	// (0x0003c286) form2_midp_gauge_slider_pane_t3_cp01

0x2933,	// (0x00031ef3) form2_midp_slider_pane_cp01

0x2cc9,	// (0x00032289) navi_smil_pane

0x9d91,	// (0x00039351) navi_smil_pane_g1

0x9d99,	// (0x00039359) navi_smil_pane_t1

0x9d66,	// (0x00039326) form2_midp_slider_pane_g1

0x9d6f,	// (0x0003932f) form2_midp_slider_pane_g2

0x9d77,	// (0x00039337) form2_midp_slider_pane_g3

0x9d66,	// (0x00039326) form2_midp_slider_pane_g4

0xf0ee,	// (0x0003e6ae) form2_midp_slider_pane_g5

0x0004,

0xfe15,	// (0x0003f3d5) form2_midp_slider_pane_g

0x28f8,	// (0x00031eb8) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x28f8,	// (0x00031eb8) vkb2_area_bottom_space_btn_pane_g4

0xd6e4,	// (0x0003cca4) lc0_navi_pane_ParamLimits

0xd6e4,	// (0x0003cca4) lc0_navi_pane

0xd74e,	// (0x0003cd0e) lc0_stat_indi_pane_ParamLimits

0xd74e,	// (0x0003cd0e) lc0_stat_indi_pane

0xd763,	// (0x0003cd23) ls0_title_pane_ParamLimits

0xd763,	// (0x0003cd23) ls0_title_pane

0x3ddd,	// (0x0003339d) bg_popup_sub_pane_cp14_ParamLimits

0x91c5,	// (0x00038785) list_uniindi_pane_ParamLimits

0x91d1,	// (0x00038791) uniindi_top_pane_ParamLimits

0x926d,	// (0x0003882d) list_single_uniindi_pane_g1_ParamLimits

0x9280,	// (0x00038840) list_single_uniindi_pane_t1_ParamLimits

0xcce3,	// (0x0003c2a3) lc0_stat_clock_pane_ParamLimits

0xcce3,	// (0x0003c2a3) lc0_stat_clock_pane

0xf0f9,	// (0x0003e6b9) lc0_stat_indi_pane_g1_ParamLimits

0xf0f9,	// (0x0003e6b9) lc0_stat_indi_pane_g1

0xf106,	// (0x0003e6c6) lc0_stat_indi_pane_g2_ParamLimits

0xf106,	// (0x0003e6c6) lc0_stat_indi_pane_g2

0x0001,

0xfe20,	// (0x0003f3e0) lc0_stat_indi_pane_g_ParamLimits

0xfe20,	// (0x0003f3e0) lc0_stat_indi_pane_g

0xccf0,	// (0x0003c2b0) lc0_uni_indicator_pane_ParamLimits

0xccf0,	// (0x0003c2b0) lc0_uni_indicator_pane

0xf113,	// (0x0003e6d3) ls0_title_pane_g1_ParamLimits

0xf113,	// (0x0003e6d3) ls0_title_pane_g1

0xf127,	// (0x0003e6e7) ls0_title_pane_t1_ParamLimits

0xf127,	// (0x0003e6e7) ls0_title_pane_t1

0xccfd,	// (0x0003c2bd) lc0_uni_indicator_pane_g1_ParamLimits

0xccfd,	// (0x0003c2bd) lc0_uni_indicator_pane_g1

0x9e0b,	// (0x000393cb) lc0_stat_clock_pane_t1

0x00aa,	// (0x0002f66a) main_ai5_pane

0x9e19,	// (0x000393d9) ai5_sk_pane_ParamLimits

0x9e19,	// (0x000393d9) ai5_sk_pane

0xf155,	// (0x0003e715) cell_ai5_widget_pane_ParamLimits

0xf155,	// (0x0003e715) cell_ai5_widget_pane

0x9edc,	// (0x0003949c) aid_size_cell_widget_grid

0x9ef2,	// (0x000394b2) bg_ai5_widget_pane_ParamLimits

0x9ef2,	// (0x000394b2) bg_ai5_widget_pane

0x9f66,	// (0x00039526) cell_ai5_widget_pane_g2

0x9f76,	// (0x00039536) cell_ai5_widget_pane_g3

0x9f8d,	// (0x0003954d) cell_ai5_widget_pane_g4

0x9f99,	// (0x00039559) cell_ai5_widget_pane_g5

0x9fa5,	// (0x00039565) cell_ai5_widget_pane_g6

0x9fb1,	// (0x00039571) cell_ai5_widget_pane_g7

0x9ff9,	// (0x000395b9) cell_ai5_widget_pane_t1_ParamLimits

0x9ff9,	// (0x000395b9) cell_ai5_widget_pane_t1

0xa016,	// (0x000395d6) cell_ai5_widget_pane_t2_ParamLimits

0xa016,	// (0x000395d6) cell_ai5_widget_pane_t2

0xa02e,	// (0x000395ee) cell_ai5_widget_pane_t3_ParamLimits

0xa02e,	// (0x000395ee) cell_ai5_widget_pane_t3

0xa046,	// (0x00039606) cell_ai5_widget_pane_t4_ParamLimits

0xa046,	// (0x00039606) cell_ai5_widget_pane_t4

0xa063,	// (0x00039623) cell_ai5_widget_pane_t5_ParamLimits

0xa063,	// (0x00039623) cell_ai5_widget_pane_t5

0xa082,	// (0x00039642) cell_ai5_widget_pane_t6_ParamLimits

0xa082,	// (0x00039642) cell_ai5_widget_pane_t6

0xa094,	// (0x00039654) cell_ai5_widget_pane_t7_ParamLimits

0xa094,	// (0x00039654) cell_ai5_widget_pane_t7

0xa0ad,	// (0x0003966d) cell_ai5_widget_pane_t8_ParamLimits

0xa0ad,	// (0x0003966d) cell_ai5_widget_pane_t8

0x0009,

0xfe3a,	// (0x0003f3fa) cell_ai5_widget_pane_t_ParamLimits

0xfe3a,	// (0x0003f3fa) cell_ai5_widget_pane_t

0xa101,	// (0x000396c1) grid_ai5_widget_pane

0x3ddd,	// (0x0003339d) highlight_cell_ai5_widget_pane_ParamLimits

0x3ddd,	// (0x0003339d) highlight_cell_ai5_widget_pane

0xf1bf,	// (0x0003e77f) ai5_sk_left_pane

0xf1c9,	// (0x0003e789) ai5_sk_middle_pane

0xf1d3,	// (0x0003e793) ai5_sk_right_pane

0xa136,	// (0x000396f6) bg_ai5_widget_pane_g1_ParamLimits

0xa136,	// (0x000396f6) bg_ai5_widget_pane_g1

0xa142,	// (0x00039702) bg_ai5_widget_pane_g2_ParamLimits

0xa142,	// (0x00039702) bg_ai5_widget_pane_g2

0xa14e,	// (0x0003970e) bg_ai5_widget_pane_g3_ParamLimits

0xa14e,	// (0x0003970e) bg_ai5_widget_pane_g3

0xa15a,	// (0x0003971a) bg_ai5_widget_pane_g4_ParamLimits

0xa15a,	// (0x0003971a) bg_ai5_widget_pane_g4

0xa166,	// (0x00039726) bg_ai5_widget_pane_g5_ParamLimits

0xa166,	// (0x00039726) bg_ai5_widget_pane_g5

0xa172,	// (0x00039732) bg_ai5_widget_pane_g6_ParamLimits

0xa172,	// (0x00039732) bg_ai5_widget_pane_g6

0xa17e,	// (0x0003973e) bg_ai5_widget_pane_g7_ParamLimits

0xa17e,	// (0x0003973e) bg_ai5_widget_pane_g7

0xa18a,	// (0x0003974a) bg_ai5_widget_pane_g8_ParamLimits

0xa18a,	// (0x0003974a) bg_ai5_widget_pane_g8

0xa196,	// (0x00039756) bg_ai5_widget_pane_g9_ParamLimits

0xa196,	// (0x00039756) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x0003f40f) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0003f40f) bg_ai5_widget_pane_g

0xa1c8,	// (0x00039788) cell_shortcut_ai5_widget_pane_ParamLimits

0xa1c8,	// (0x00039788) cell_shortcut_ai5_widget_pane

0x4a73,	// (0x00034033) bg_cell_shortcut_ai5_widget_pane

0xa1d9,	// (0x00039799) cell_grid_ai5_widget_pane_g1

0x4a73,	// (0x00034033) highlight_cell_shortcut_ai5_widget_pane

0x52c3,	// (0x00034883) ai5_sk_left_pane_g1

0xa1e2,	// (0x000397a2) ai5_sk_left_pane_g2

0xa1ea,	// (0x000397aa) ai5_sk_left_pane_g3

0xa1f2,	// (0x000397b2) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x0003f422) ai5_sk_left_pane_g

0xa1fa,	// (0x000397ba) ai5_sk_left_pane_t1

0x52cb,	// (0x0003488b) ai5_sk_right_pane_g1

0xa208,	// (0x000397c8) ai5_sk_right_pane_g2

0xa210,	// (0x000397d0) ai5_sk_right_pane_g3

0xa218,	// (0x000397d8) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x0003f42b) ai5_sk_right_pane_g

0xa220,	// (0x000397e0) ai5_sk_right_pane_t1

0x52cb,	// (0x0003488b) ai5_sk_middle_pane_g1

0x52c3,	// (0x00034883) ai5_sk_middle_pane_g2

0x52e3,	// (0x000348a3) ai5_sk_middle_pane_g3

0xa210,	// (0x000397d0) ai5_sk_middle_pane_g4

0xa1ea,	// (0x000397aa) ai5_sk_middle_pane_g5

0xa22e,	// (0x000397ee) ai5_sk_middle_pane_g6

0xf1dd,	// (0x0003e79d) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x0003f434) ai5_sk_middle_pane_g

0xd5d0,	// (0x0003cb90) aid_touch_area_size_lc0_ParamLimits

0xd5d0,	// (0x0003cb90) aid_touch_area_size_lc0

0x1f80,	// (0x00031540) cell_hwr_candidate_pane_t1_ParamLimits

0x4e13,	// (0x000343d3) aid_touch_navi_pane

0xd85c,	// (0x0003ce1c) status_dt_navi_pane_ParamLimits

0xd85c,	// (0x0003ce1c) status_dt_navi_pane

0xd874,	// (0x0003ce34) status_dt_sta_pane_ParamLimits

0xd874,	// (0x0003ce34) status_dt_sta_pane

0xf1e5,	// (0x0003e7a5) dt_sta_controll_pane

0xf1f2,	// (0x0003e7b2) dt_sta_indi_pane

0xf1ff,	// (0x0003e7bf) dt_sta_title_pane

0x37f7,	// (0x00032db7) bg_dt_sta_indi_pane_ParamLimits

0x37f7,	// (0x00032db7) bg_dt_sta_indi_pane

0xf211,	// (0x0003e7d1) dt_sta_battery_pane

0xf219,	// (0x0003e7d9) dt_sta_indi_pane_g1

0xa280,	// (0x00039840) dt_sta_indi_pane_g2

0xa289,	// (0x00039849) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x0003f443) dt_sta_indi_pane_g

0xa292,	// (0x00039852) dt_sta_signal_pane

0x3ddd,	// (0x0003339d) bg_dt_sta_title_pane_ParamLimits

0x3ddd,	// (0x0003339d) bg_dt_sta_title_pane

0xa29b,	// (0x0003985b) dt_sta_title_pane_g1

0xa2a3,	// (0x00039863) dt_sta_title_pane_t1_ParamLimits

0xa2a3,	// (0x00039863) dt_sta_title_pane_t1

0x2cc9,	// (0x00032289) bg_dt_sta_control_pane

0xf222,	// (0x0003e7e2) dt_sta_controll_pane_g1

0xa2c1,	// (0x00039881) bg_dt_sta_title_pane_g1

0xa2ca,	// (0x0003988a) bg_dt_sta_title_pane_g2

0xa2d3,	// (0x00039893) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x0003f44a) bg_dt_sta_title_pane_g

0x78e1,	// (0x00036ea1) bg_dt_sta_indi_pane_g1

0xa2dc,	// (0x0003989c) dt_sta_signal_pane_g1

0xa2e4,	// (0x000398a4) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x0003f451) dt_sta_signal_pane_g

0xa2ec,	// (0x000398ac) dt_sta_battery_pane_g1

0xa2f5,	// (0x000398b5) dt_sta_battery_pane_t1

0x78e1,	// (0x00036ea1) bg_dt_sta_control_pane_g1

0x4572,	// (0x00033b32) fep_china_uni_eep_pane

0x457a,	// (0x00033b3a) fep_china_uni_entry_pane_ParamLimits

0x458a,	// (0x00033b4a) popup_fep_china_uni_window_g1_ParamLimits

0x459a,	// (0x00033b5a) popup_fep_china_uni_window_g2_ParamLimits

0x459a,	// (0x00033b5a) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0003ecdd) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0003ecdd) popup_fep_china_uni_window_g

0xa304,	// (0x000398c4) fep_china_uni_eep_pane_g1

0xa30c,	// (0x000398cc) fep_china_uni_eep_pane_t1

0x9d88,	// (0x00039348) aid_touch_area_size_smil_player

0x4f63,	// (0x00034523) lc0_clock_pane

0x514a,	// (0x0003470a) status_pane_g5_ParamLimits

0x514a,	// (0x0003470a) status_pane_g5

0xc09a,	// (0x0003b65a) popup_keymap_window

0x5108,	// (0x000346c8) status_icon_pane

0x9f76,	// (0x00039536) cell_ai5_widget_pane_g3_ParamLimits

0x9f8d,	// (0x0003954d) cell_ai5_widget_pane_g4_ParamLimits

0x9f99,	// (0x00039559) cell_ai5_widget_pane_g5_ParamLimits

0x9fbd,	// (0x0003957d) cell_ai5_widget_pane_g8_ParamLimits

0x9fbd,	// (0x0003957d) cell_ai5_widget_pane_g8

0x9fd1,	// (0x00039591) cell_ai5_widget_pane_g9_ParamLimits

0x9fd1,	// (0x00039591) cell_ai5_widget_pane_g9

0x9fe5,	// (0x000395a5) cell_ai5_widget_pane_g10_ParamLimits

0x9fe5,	// (0x000395a5) cell_ai5_widget_pane_g10

0xa31b,	// (0x000398db) status_icon_pane_g1

0x2cc9,	// (0x00032289) bg_popup_sub_pane_cp13

0xa323,	// (0x000398e3) popup_keymap_window_t1

0xd55e,	// (0x0003cb1e) control_pane_g6_ParamLimits

0xd55e,	// (0x0003cb1e) control_pane_g6

0xd56b,	// (0x0003cb2b) control_pane_g7_ParamLimits

0xd56b,	// (0x0003cb2b) control_pane_g7

0xd578,	// (0x0003cb38) control_pane_g8_ParamLimits

0xd578,	// (0x0003cb38) control_pane_g8

0xf1e5,	// (0x0003e7a5) dt_sta_controll_pane_ParamLimits

0xf1f2,	// (0x0003e7b2) dt_sta_indi_pane_ParamLimits

0xf1ff,	// (0x0003e7bf) dt_sta_title_pane_ParamLimits

0x3d15,	// (0x000332d5) aid_size_touch_scroll_bar_cale

0x0183,	// (0x0002f743) popup_discreet_window_ParamLimits

0x0183,	// (0x0002f743) popup_discreet_window

0xb685,	// (0x0003ac45) popup_sk_window

0x5934,	// (0x00034ef4) bg_popup_sub_pane_cp28_ParamLimits

0x5934,	// (0x00034ef4) bg_popup_sub_pane_cp28

0xa331,	// (0x000398f1) popup_discreet_window_g1_ParamLimits

0xa331,	// (0x000398f1) popup_discreet_window_g1

0xa351,	// (0x00039911) popup_discreet_window_t1_ParamLimits

0xa351,	// (0x00039911) popup_discreet_window_t1

0xa36f,	// (0x0003992f) popup_discreet_window_t2_ParamLimits

0xa36f,	// (0x0003992f) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x0003f456) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x0003f456) popup_discreet_window_t

0x296a,	// (0x00031f2a) popup_sk_window_g1

0x2974,	// (0x00031f34) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x0003f45d) popup_sk_window_g

0x297e,	// (0x00031f3e) popup_sk_window_t1

0x298c,	// (0x00031f4c) popup_sk_window_t1_copy1

0x9f66,	// (0x00039526) cell_ai5_widget_pane_g2_ParamLimits

0xa0bf,	// (0x0003967f) cell_ai5_widget_pane_t9_ParamLimits

0xa0bf,	// (0x0003967f) cell_ai5_widget_pane_t9

0x2cc9,	// (0x00032289) main_fep_fshwr2_pane

0xcd24,	// (0x0003c2e4) aid_fshwr2_btn_pane

0xcd35,	// (0x0003c2f5) aid_fshwr2_syb_pane

0xcd46,	// (0x0003c306) aid_fshwr2_txt_pane

0xcd52,	// (0x0003c312) fshwr2_func_candi_pane

0xcd71,	// (0x0003c331) fshwr2_hwr_syb_pane

0xcd8c,	// (0x0003c34c) fshwr2_icf_pane

0x00aa,	// (0x0002f66a) fshwr2_icf_bg_pane

0x2a0c,	// (0x00031fcc) fshwr2_icf_pane_t1_ParamLimits

0x2a0c,	// (0x00031fcc) fshwr2_icf_pane_t1

0x4460,	// (0x00033a20) fshwr2_func_candi_pane_g1

0xf22b,	// (0x0003e7eb) fshwr2_func_candi_row_pane_ParamLimits

0xf22b,	// (0x0003e7eb) fshwr2_func_candi_row_pane

0xcdb8,	// (0x0003c378) cell_fshwr2_syb_pane_ParamLimits

0xcdb8,	// (0x0003c378) cell_fshwr2_syb_pane

0x1f51,	// (0x00031511) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1f51,	// (0x00031511) fshwr2_hwr_syb_pane_g1

0x00aa,	// (0x0002f66a) bg_popup_call_pane_cp01

0xcdce,	// (0x0003c38e) fshwr2_func_candi_cell_pane_ParamLimits

0xcdce,	// (0x0003c38e) fshwr2_func_candi_cell_pane

0xf243,	// (0x0003e803) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf243,	// (0x0003e803) fshwr2_func_candi_cell_bg_pane

0xce03,	// (0x0003c3c3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xce03,	// (0x0003c3c3) fshwr2_func_candi_cell_pane_g1

0xce32,	// (0x0003c3f2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xce32,	// (0x0003c3f2) fshwr2_func_candi_cell_pane_t1

0x00aa,	// (0x0002f66a) bg_button_pane_cp08

0xa3dd,	// (0x0003999d) cell_fshwr2_syb_bg_pane

0xce45,	// (0x0003c405) cell_fshwr2_syb_bg_pane_g1

0xce4d,	// (0x0003c40d) cell_fshwr2_syb_bg_pane_t1

0x3ddd,	// (0x0003339d) main_tmo_pane

0xdb40,	// (0x0003d100) uni_indicator_pane_g1_ParamLimits

0xdb56,	// (0x0003d116) uni_indicator_pane_g2_ParamLimits

0xdb6c,	// (0x0003d12c) uni_indicator_pane_g3_ParamLimits

0x648f,	// (0x00035a4f) uni_indicator_pane_g4_ParamLimits

0x648f,	// (0x00035a4f) uni_indicator_pane_g4

0x64a3,	// (0x00035a63) uni_indicator_pane_g5_ParamLimits

0x64a3,	// (0x00035a63) uni_indicator_pane_g5

0x64a3,	// (0x00035a63) uni_indicator_pane_g6_ParamLimits

0x64a3,	// (0x00035a63) uni_indicator_pane_g6

0xf91c,	// (0x0003eedc) uni_indicator_pane_g_ParamLimits

0xe5ed,	// (0x0003dbad) popup_tmo_note_window_ParamLimits

0xe5ed,	// (0x0003dbad) popup_tmo_note_window

0x21ea,	// (0x000317aa) fshwr2_bg_pane

0xce23,	// (0x0003c3e3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xce23,	// (0x0003c3e3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x0003f462) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x0003f462) fshwr2_func_candi_cell_pane_g

0x1f39,	// (0x000314f9) bg_popup_window_pane_cp01

0x2ac1,	// (0x00032081) bg_popup_window_pane_g1_cp01

0xa3e5,	// (0x000399a5) bg_popup_window_pane_cp22_ParamLimits

0xa3e5,	// (0x000399a5) bg_popup_window_pane_cp22

0xa3f3,	// (0x000399b3) listscroll_tmo_link_pane_ParamLimits

0xa3f3,	// (0x000399b3) listscroll_tmo_link_pane

0xa433,	// (0x000399f3) popup_tmo_note_window_g1_ParamLimits

0xa433,	// (0x000399f3) popup_tmo_note_window_g1

0xa440,	// (0x00039a00) tmo_note_info_pane_ParamLimits

0xa440,	// (0x00039a00) tmo_note_info_pane

0xf24f,	// (0x0003e80f) list_tmo_note_info_pane_g1_ParamLimits

0xf24f,	// (0x0003e80f) list_tmo_note_info_pane_g1

0xa471,	// (0x00039a31) list_tmo_note_info_pane_g2_ParamLimits

0xa471,	// (0x00039a31) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x0003f467) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x0003f467) list_tmo_note_info_pane_g

0xa48d,	// (0x00039a4d) list_tmo_note_info_text_pane_ParamLimits

0xa48d,	// (0x00039a4d) list_tmo_note_info_text_pane

0xa50e,	// (0x00039ace) list_tmo_link_pane

0xa51b,	// (0x00039adb) scroll_pane_cp20

0xa528,	// (0x00039ae8) list_single_tmo_link_pane_ParamLimits

0xa528,	// (0x00039ae8) list_single_tmo_link_pane

0xa538,	// (0x00039af8) list_single_tmo_link_pane_t1

0xa546,	// (0x00039b06) list_tmo_note_info_text_pane_t1_ParamLimits

0xa546,	// (0x00039b06) list_tmo_note_info_text_pane_t1

0xd202,	// (0x0003c7c2) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd202,	// (0x0003c7c2) aid_size_touch_scroll_bar_cp01

0xbc02,	// (0x0003b1c2) aid_size_touch_slider_marker

0xb675,	// (0x0003ac35) popup_settings_window_ParamLimits

0xb675,	// (0x0003ac35) popup_settings_window

0x1150,	// (0x00030710) popup_candi_list_indi_window

0x4e13,	// (0x000343d3) aid_touch_navi_pane_ParamLimits

0x2145,	// (0x00031705) rs_clock_indi_pane

0x214e,	// (0x0003170e) sctrl_sk_bottom_pane_ParamLimits

0x215f,	// (0x0003171f) sctrl_sk_top_pane_ParamLimits

0x2262,	// (0x00031822) popup_fep_tooltip_window

0x9edc,	// (0x0003949c) aid_size_cell_widget_grid_ParamLimits

0x9f51,	// (0x00039511) cell_ai5_widget_pane_g1_ParamLimits

0x9f51,	// (0x00039511) cell_ai5_widget_pane_g1

0x9fa5,	// (0x00039565) cell_ai5_widget_pane_g6_ParamLimits

0x9fb1,	// (0x00039571) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe25,	// (0x0003f3e5) cell_ai5_widget_pane_g_ParamLimits

0xfe25,	// (0x0003f3e5) cell_ai5_widget_pane_g

0xa0e3,	// (0x000396a3) cell_ai5_widget_pane_t10_ParamLimits

0xa0e3,	// (0x000396a3) cell_ai5_widget_pane_t10

0xa101,	// (0x000396c1) grid_ai5_widget_pane_ParamLimits

0xa1a2,	// (0x00039762) cell_contacts_ai5_widget_pane_ParamLimits

0xa1a2,	// (0x00039762) cell_contacts_ai5_widget_pane

0xa384,	// (0x00039944) popup_discreet_window_t3_ParamLimits

0xa384,	// (0x00039944) popup_discreet_window_t3

0xcda4,	// (0x0003c364) popup_fshwr2_char_preview_window_ParamLimits

0xcda4,	// (0x0003c364) popup_fshwr2_char_preview_window

0xf266,	// (0x0003e826) tmo_note_info_pane_t1

0xf27b,	// (0x0003e83b) tmo_note_info_pane_t2

0xf292,	// (0x0003e852) tmo_note_info_pane_t3

0xa4ea,	// (0x00039aaa) tmo_note_info_pane_t4

0xa4fc,	// (0x00039abc) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x0003f46c) tmo_note_info_pane_t

0xa50e,	// (0x00039ace) list_tmo_link_pane_ParamLimits

0xa51b,	// (0x00039adb) scroll_pane_cp20_ParamLimits

0x00aa,	// (0x0002f66a) bg_popup_fep_char_preview_window_cp01

0xa55f,	// (0x00039b1f) popup_fshwr2_char_preview_window_t1

0xa56d,	// (0x00039b2d) popup_candi_list_indi_window_g1

0xa576,	// (0x00039b36) bg_cell_contacts_ai5_widget_pane

0xa582,	// (0x00039b42) cell_contacts_ai5_widget_pane_g1

0x7f7f,	// (0x0003753f) cell_contacts_ai5_widget_pane_g2

0xa597,	// (0x00039b57) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x0003f477) cell_contacts_ai5_widget_pane_g

0xa5a3,	// (0x00039b63) cell_contacts_ai5_widget_pane_t1

0x3ddd,	// (0x0003339d) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf30c,	// (0x0003e8cc) settings_container_pane

0x4a73,	// (0x00034033) listscroll_set_pane_copy1

0x6fca,	// (0x0003658a) scroll_pane_cp121_copy1

0xa626,	// (0x00039be6) set_content_pane_copy1

0xf318,	// (0x0003e8d8) aid_height_set_list_copy1_ParamLimits

0xf318,	// (0x0003e8d8) aid_height_set_list_copy1

0x669b,	// (0x00035c5b) aid_size_parent_copy1_ParamLimits

0x669b,	// (0x00035c5b) aid_size_parent_copy1

0xf324,	// (0x0003e8e4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf324,	// (0x0003e8e4) button_value_adjust_pane_cp6_copy1

0x4db1,	// (0x00034371) list_highlight_pane_cp2_copy1_ParamLimits

0x4db1,	// (0x00034371) list_highlight_pane_cp2_copy1

0xf338,	// (0x0003e8f8) list_set_pane_copy1_ParamLimits

0xf338,	// (0x0003e8f8) list_set_pane_copy1

0xf2a7,	// (0x0003e867) main_pane_set_t1_copy1_ParamLimits

0xf2a7,	// (0x0003e867) main_pane_set_t1_copy1

0xf2e1,	// (0x0003e8a1) main_pane_set_t2_copy1_ParamLimits

0xf2e1,	// (0x0003e8a1) main_pane_set_t2_copy1

0xf3e5,	// (0x0003e9a5) main_pane_set_t3_copy1

0xf3f3,	// (0x0003e9b3) main_pane_set_t4_copy1

0xf300,	// (0x0003e8c0) set_content_pane_g1_copy1_ParamLimits

0xf300,	// (0x0003e8c0) set_content_pane_g1_copy1

0xf401,	// (0x0003e9c1) setting_code_pane_copy1

0xa71f,	// (0x00039cdf) setting_slider_graphic_pane_copy1

0xa71f,	// (0x00039cdf) setting_slider_pane_copy1

0xa71f,	// (0x00039cdf) setting_text_pane_copy1

0xa71f,	// (0x00039cdf) setting_volume_pane_copy1

0xf401,	// (0x0003e9c1) settings_code_pane_cp2_copy1

0xf409,	// (0x0003e9c9) settings_code_pane_cp_copy1_ParamLimits

0xf409,	// (0x0003e9c9) settings_code_pane_cp_copy1

0xce5c,	// (0x0003c41c) volume_set_pane_copy1

0xf41d,	// (0x0003e9dd) volume_set_pane_g10_copy1

0xf425,	// (0x0003e9e5) volume_set_pane_g1_copy1

0xf42d,	// (0x0003e9ed) volume_set_pane_g2_copy1

0xf435,	// (0x0003e9f5) volume_set_pane_g3_copy1

0xf43d,	// (0x0003e9fd) volume_set_pane_g4_copy1

0xf445,	// (0x0003ea05) volume_set_pane_g5_copy1

0xf44d,	// (0x0003ea0d) volume_set_pane_g6_copy1

0xf455,	// (0x0003ea15) volume_set_pane_g7_copy1

0xf45d,	// (0x0003ea1d) volume_set_pane_g8_copy1

0xf465,	// (0x0003ea25) volume_set_pane_g9_copy1

0x2dbd,	// (0x0003237d) bg_set_opt_pane_cp_copy1_ParamLimits

0x2dbd,	// (0x0003237d) bg_set_opt_pane_cp_copy1

0x2ad2,	// (0x00032092) setting_slider_pane_t1_copy1_ParamLimits

0x2ad2,	// (0x00032092) setting_slider_pane_t1_copy1

0xce64,	// (0x0003c424) setting_slider_pane_t2_copy1_ParamLimits

0xce64,	// (0x0003c424) setting_slider_pane_t2_copy1

0xce7e,	// (0x0003c43e) setting_slider_pane_t3_copy1_ParamLimits

0xce7e,	// (0x0003c43e) setting_slider_pane_t3_copy1

0xce96,	// (0x0003c456) slider_set_pane_copy1_ParamLimits

0xce96,	// (0x0003c456) slider_set_pane_copy1

0x3e38,	// (0x000333f8) set_opt_bg_pane_g1_copy2

0x3e40,	// (0x00033400) set_opt_bg_pane_g2_copy2

0xa78b,	// (0x00039d4b) set_opt_bg_pane_g3_copy2

0x3e50,	// (0x00033410) set_opt_bg_pane_g4_copy2

0x3e58,	// (0x00033418) set_opt_bg_pane_g5_copy2

0x3e60,	// (0x00033420) set_opt_bg_pane_g6_copy2

0xf46d,	// (0x0003ea2d) set_opt_bg_pane_g7_copy2

0xa79d,	// (0x00039d5d) set_opt_bg_pane_g8_copy2

0xa7a7,	// (0x00039d67) set_opt_bg_pane_g9_copy2

0x2b38,	// (0x000320f8) aid_size_touch_slider_mark_copy1_ParamLimits

0x2b38,	// (0x000320f8) aid_size_touch_slider_mark_copy1

0xa7b1,	// (0x00039d71) slider_set_pane_g1_copy1

0x2b4c,	// (0x0003210c) slider_set_pane_g2_copy1

0x1b4c,	// (0x0003110c) slider_set_pane_g3_copy1_ParamLimits

0x1b4c,	// (0x0003110c) slider_set_pane_g3_copy1

0x1b60,	// (0x00031120) slider_set_pane_g4_copy1_ParamLimits

0x1b60,	// (0x00031120) slider_set_pane_g4_copy1

0x1b78,	// (0x00031138) slider_set_pane_g5_copy1_ParamLimits

0x1b78,	// (0x00031138) slider_set_pane_g5_copy1

0x1b4c,	// (0x0003110c) slider_set_pane_g6_copy1_ParamLimits

0x1b4c,	// (0x0003110c) slider_set_pane_g6_copy1

0xceac,	// (0x0003c46c) slider_set_pane_g7_copy1_ParamLimits

0xceac,	// (0x0003c46c) slider_set_pane_g7_copy1

0x2cdd,	// (0x0003229d) bg_set_opt_pane_cp2_copy1

0xa7ba,	// (0x00039d7a) setting_slider_graphic_pane_g1_copy1

0xf475,	// (0x0003ea35) setting_slider_graphic_pane_t1_copy1

0xf485,	// (0x0003ea45) setting_slider_graphic_pane_t2_copy1

0xf495,	// (0x0003ea55) slider_set_pane_cp_copy1

0xa7f3,	// (0x00039db3) input_focus_pane_cp1_copy1

0xa7fc,	// (0x00039dbc) list_set_text_pane_copy1

0xa804,	// (0x00039dc4) setting_text_pane_g1_copy1

0x0394,	// (0x0002f954) set_text_pane_t1_copy1

0xa7f3,	// (0x00039db3) input_focus_pane_cp2_copy1

0xa804,	// (0x00039dc4) setting_code_pane_g1_copy1

0xf49d,	// (0x0003ea5d) setting_code_pane_t1_copy1

0x6df4,	// (0x000363b4) list_set_graphic_pane_copy1

0x2cdd,	// (0x0003229d) bg_set_opt_pane_cp4_copy1

0xd3d9,	// (0x0003c999) list_set_graphic_pane_g1_copy1_ParamLimits

0xd3d9,	// (0x0003c999) list_set_graphic_pane_g1_copy1

0xf4ab,	// (0x0003ea6b) list_set_graphic_pane_g2_copy1

0xd3f1,	// (0x0003c9b1) list_set_graphic_pane_t1_copy1_ParamLimits

0xd3f1,	// (0x0003c9b1) list_set_graphic_pane_t1_copy1

0x78e1,	// (0x00036ea1) rs_clock_indi_pane_g1

0xa835,	// (0x00039df5) rs_clock_indi_pane_t1

0xa843,	// (0x00039e03) rs_indi_pane

0xa84b,	// (0x00039e0b) rs_indi_pane_g1

0xa854,	// (0x00039e14) rs_indi_pane_g2

0xa85d,	// (0x00039e1d) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x0003f47e) rs_indi_pane_g

0x4a73,	// (0x00034033) bg_popup_preview_window_pane_cp03

0xa866,	// (0x00039e26) popup_fep_tooltip_window_t1

0x855d,	// (0x00037b1d) popup_note2_window_g2_ParamLimits

0x855d,	// (0x00037b1d) popup_note2_window_g2

0x0001,

0xfc57,	// (0x0003f217) popup_note2_window_g_ParamLimits

0xfc57,	// (0x0003f217) popup_note2_window_g

0x8a58,	// (0x00038018) bg_popup_sub_pane_cp11_ParamLimits

0x8a65,	// (0x00038025) cell_ai3_links_pane_g1_ParamLimits

0x8a7c,	// (0x0003803c) cell_ai3_links_pane_t1

0x0394,	// (0x0002f954) set_text_pane_t1_copy1_ParamLimits

0x4984,	// (0x00033f44) cell_graphic_popup_pane_cp2_ParamLimits

0x4984,	// (0x00033f44) cell_graphic_popup_pane_cp2

0xa874,	// (0x00039e34) cell_graphic_popup_pane_g1_cp2

0x3b28,	// (0x000330e8) cell_graphic_popup_pane_g2_cp2

0xa87c,	// (0x00039e3c) cell_graphic_popup_pane_g3_cp2

0xa884,	// (0x00039e44) cell_graphic_popup_pane_t2_cp2

0x3b39,	// (0x000330f9) grid_highlight_pane_cp3_cp2

0x417d,	// (0x0003373d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3ddd,	// (0x0003339d) main_tmo_pane_ParamLimits

0xe5e1,	// (0x0003dba1) popup_tmo_big_image_note_window

0x9f40,	// (0x00039500) cell_ai5_widget_list_pane

0x9f48,	// (0x00039508) cell_ai5_widget_lrg_icon_pane

0xf266,	// (0x0003e826) tmo_note_info_pane_t1_ParamLimits

0xf27b,	// (0x0003e83b) tmo_note_info_pane_t2_ParamLimits

0xf292,	// (0x0003e852) tmo_note_info_pane_t3_ParamLimits

0xa4ea,	// (0x00039aaa) tmo_note_info_pane_t4_ParamLimits

0xa4fc,	// (0x00039abc) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x0003f46c) tmo_note_info_pane_t_ParamLimits

0xf30c,	// (0x0003e8cc) settings_container_pane_ParamLimits

0xa7eb,	// (0x00039dab) indicator_popup_pane_cp5

0xa7eb,	// (0x00039dab) indicator_popup_pane_cp6

0x6df4,	// (0x000363b4) list_set_graphic_pane_copy1_ParamLimits

0x2cc9,	// (0x00032289) bg_popup_window_pane_cp23

0xa892,	// (0x00039e52) popup_tmo_big_image_note_window_g1

0xa89c,	// (0x00039e5c) popup_tmo_big_image_note_window_t1

0xa8ac,	// (0x00039e6c) popup_tmo_big_image_note_window_t2

0xa8bc,	// (0x00039e7c) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x0003f485) popup_tmo_big_image_note_window_t

0x78e1,	// (0x00036ea1) cell_ai5_widget_lrg_icon_pane_g1

0xa8cc,	// (0x00039e8c) cell_ai5_widget_lrg_icon_pane_t1

0xa8da,	// (0x00039e9a) cell_ai5_widget_list_row_pane_ParamLimits

0xa8da,	// (0x00039e9a) cell_ai5_widget_list_row_pane

0xa8f1,	// (0x00039eb1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa8f1,	// (0x00039eb1) cell_ai5_widget_list_row_pane_g1

0xa8fe,	// (0x00039ebe) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa8fe,	// (0x00039ebe) cell_ai5_widget_list_row_pane_t1

0xa92f,	// (0x00039eef) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa92f,	// (0x00039eef) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x0003f48c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x0003f48c) cell_ai5_widget_list_row_pane_t

0x00aa,	// (0x0002f66a) main_fep_vtchi_ss_pane

0xa973,	// (0x00039f33) popup_fep_char_pre_window

0xa97b,	// (0x00039f3b) popup_fep_ituss_window

0xa99c,	// (0x00039f5c) popup_fep_vkbss_window

0xa9bb,	// (0x00039f7b) grid_vkbss_keypad_pane_ParamLimits

0xa9bb,	// (0x00039f7b) grid_vkbss_keypad_pane

0xa9cb,	// (0x00039f8b) ituss_keypad_pane

0x2b76,	// (0x00032136) aid_vkbss_key_offset_ParamLimits

0x2b76,	// (0x00032136) aid_vkbss_key_offset

0x2b82,	// (0x00032142) cell_vkbss_key_pane_ParamLimits

0x2b82,	// (0x00032142) cell_vkbss_key_pane

0xa9da,	// (0x00039f9a) bg_cell_vkbss_key_g1_ParamLimits

0xa9da,	// (0x00039f9a) bg_cell_vkbss_key_g1

0xa9e6,	// (0x00039fa6) cell_vkbss_key_3p_pane_ParamLimits

0xa9e6,	// (0x00039fa6) cell_vkbss_key_3p_pane

0xaa00,	// (0x00039fc0) cell_vkbss_key_g1_ParamLimits

0xaa00,	// (0x00039fc0) cell_vkbss_key_g1

0xaa1a,	// (0x00039fda) cell_vkbss_key_t1_ParamLimits

0xaa1a,	// (0x00039fda) cell_vkbss_key_t1

0x2b98,	// (0x00032158) cell_ituss_key_pane_ParamLimits

0x2b98,	// (0x00032158) cell_ituss_key_pane

0xaa45,	// (0x0003a005) bg_cell_ituss_key_g1_ParamLimits

0xaa45,	// (0x0003a005) bg_cell_ituss_key_g1

0xaa51,	// (0x0003a011) cell_ituss_key_pane_g1_ParamLimits

0xaa51,	// (0x0003a011) cell_ituss_key_pane_g1

0x2ba9,	// (0x00032169) cell_ituss_key_pane_g2_ParamLimits

0x2ba9,	// (0x00032169) cell_ituss_key_pane_g2

0x0002,

0xfed3,	// (0x0003f493) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0003f493) cell_ituss_key_pane_g

0x2bd5,	// (0x00032195) cell_ituss_key_t1_ParamLimits

0x2bd5,	// (0x00032195) cell_ituss_key_t1

0x2c0f,	// (0x000321cf) cell_ituss_key_t2_ParamLimits

0x2c0f,	// (0x000321cf) cell_ituss_key_t2

0x2c40,	// (0x00032200) cell_ituss_key_t3_ParamLimits

0x2c40,	// (0x00032200) cell_ituss_key_t3

0x2c0f,	// (0x000321cf) cell_ituss_key_t4_ParamLimits

0x2c0f,	// (0x000321cf) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0003f49a) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0003f49a) cell_ituss_key_t

0xaa7d,	// (0x0003a03d) cell_vkbss_key_3p_pane_g1

0xaa85,	// (0x0003a045) cell_vkbss_key_3p_pane_g2

0xaa8d,	// (0x0003a04d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0003f4a5) cell_vkbss_key_3p_pane_g

0x00aa,	// (0x0002f66a) bg_popup_fep_char_preview_window_cp02

0x2c83,	// (0x00032243) popup_fep_char_pre_window_t1

0xf1b5,	// (0x0003e775) main_ai5_sk_pane

0xa576,	// (0x00039b36) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa582,	// (0x00039b42) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7f7f,	// (0x0003753f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa597,	// (0x00039b57) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x0003f477) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa5a3,	// (0x00039b63) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3ddd,	// (0x0003339d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf4b3,	// (0x0003ea73) main_ai5_sk_pane_g1

0x576d,	// (0x00034d2d) popup_query_code_window_g1

0xa991,	// (0x00039f51) popup_fep_vkb_icf_pane

0xa9a5,	// (0x00039f65) popup_fep_vtchi_icf_pane

0xaa9e,	// (0x0003a05e) bg_icf_pane

0xaaaa,	// (0x0003a06a) list_vkb_icf_pane

0xaab6,	// (0x0003a076) bg_icf_pane_cp01

0xaac9,	// (0x0003a089) vtchi_icf_list_pane

0xaad9,	// (0x0003a099) list_vkb_icf_pane_t1_ParamLimits

0xaad9,	// (0x0003a099) list_vkb_icf_pane_t1

0xaaef,	// (0x0003a0af) vtchi_icf_list_pane_t1_ParamLimits

0xaaef,	// (0x0003a0af) vtchi_icf_list_pane_t1

0xa97b,	// (0x00039f3b) popup_fep_ituss_window_ParamLimits

0xa9a5,	// (0x00039f65) popup_fep_vtchi_icf_pane_ParamLimits

0xa9cb,	// (0x00039f8b) ituss_keypad_pane_ParamLimits

0x2b6a,	// (0x0003212a) ituss_sks_pane

0xaa9e,	// (0x0003a05e) bg_icf_pane_ParamLimits

0xa957,	// (0x00039f17) icf_edit_indi_pane_ParamLimits

0xa957,	// (0x00039f17) icf_edit_indi_pane

0xaaaa,	// (0x0003a06a) list_vkb_icf_pane_ParamLimits

0xaab6,	// (0x0003a076) bg_icf_pane_cp01_ParamLimits

0xa966,	// (0x00039f26) icf_edit_indi_pane_cp01_ParamLimits

0xa966,	// (0x00039f26) icf_edit_indi_pane_cp01

0xaad1,	// (0x0003a091) vtchi_query_pane

0x7b5f,	// (0x0003711f) icf_edit_indi_pane_g1_ParamLimits

0x7b5f,	// (0x0003711f) icf_edit_indi_pane_g1

0xab60,	// (0x0003a120) icf_edit_indi_pane_g2_ParamLimits

0xab60,	// (0x0003a120) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0003f4bd) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0003f4bd) icf_edit_indi_pane_g

0xab6f,	// (0x0003a12f) icf_edit_indi_pane_t1

0xab09,	// (0x0003a0c9) bg_input_focus_pane_cp042

0x3d0c,	// (0x000332cc) vtchi_button_pane

0xab12,	// (0x0003a0d2) vtchi_query_pane_t1

0xab20,	// (0x0003a0e0) vtchi_query_pane_t2

0xab2e,	// (0x0003a0ee) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0003f4ac) vtchi_query_pane_t

0x00aa,	// (0x0002f66a) bg_button_pane_cp13

0xab3c,	// (0x0003a0fc) vtchi_button_pane_g1

0x2c92,	// (0x00032252) ituss_sks_pane_g1

0x2c9d,	// (0x0003225d) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0003f4b3) ituss_sks_pane_g

0xab44,	// (0x0003a104) ituss_sks_pane_t1

0xab52,	// (0x0003a112) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0003f4b8) ituss_sks_pane_t

0x7344,	// (0x00036904) indicator_nsta_pane_cp_g1

0x734d,	// (0x0003690d) indicator_nsta_pane_cp_g2

0x7355,	// (0x00036915) indicator_nsta_pane_cp_g3

0x735d,	// (0x0003691d) indicator_nsta_pane_cp_g4

0x7365,	// (0x00036925) indicator_nsta_pane_cp_g5

0x7365,	// (0x00036925) indicator_nsta_pane_cp_g6

0x0005,

0xfa95,	// (0x0003f055) indicator_nsta_pane_cp_g

0xefc7,	// (0x0003e587) cell_graphic2_pane_t2_ParamLimits

0xefc7,	// (0x0003e587) cell_graphic2_pane_t2

0x0001,

0xfdae,	// (0x0003f36e) cell_graphic2_pane_t_ParamLimits

0xfdae,	// (0x0003f36e) cell_graphic2_pane_t

0xeffd,	// (0x0003e5bd) cell_graphic2_control_pane_t1

0xd3ad,	// (0x0003c96d) signal_pane_g3_ParamLimits

0xd3ad,	// (0x0003c96d) signal_pane_g3

0xd3c1,	// (0x0003c981) signal_pane_g4_ParamLimits

0xd3c1,	// (0x0003c981) signal_pane_g4

0xa941,	// (0x00039f01) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa941,	// (0x00039f01) cell_ai5_widget_list_row_pane_t3

0xaa6b,	// (0x0003a02b) cell_ituss_key_pane_t1_ParamLimits

0xaa6b,	// (0x0003a02b) cell_ituss_key_pane_t1

0x53c0,	// (0x00034980) form_field_data_wide_pane_vc_t2_ParamLimits

0x53c0,	// (0x00034980) form_field_data_wide_pane_vc_t2

0x53d4,	// (0x00034994) form_field_data_wide_pane_vc_t3_ParamLimits

0x53d4,	// (0x00034994) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0003edc4) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0003edc4) form_field_data_wide_pane_vc_t

0x700c,	// (0x000365cc) form_field_slider_wide_pane_vc_t3_ParamLimits

0x700c,	// (0x000365cc) form_field_slider_wide_pane_vc_t3

0x70ea,	// (0x000366aa) form_field_popup_wide_pane_vc_t2_ParamLimits

0x70ea,	// (0x000366aa) form_field_popup_wide_pane_vc_t2

0x7101,	// (0x000366c1) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7101,	// (0x000366c1) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa84,	// (0x0003f044) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0003f044) form_field_popup_wide_pane_vc_t

0xcd24,	// (0x0003c2e4) aid_fshwr2_btn_pane_ParamLimits

0xcd35,	// (0x0003c2f5) aid_fshwr2_syb_pane_ParamLimits

0xcd46,	// (0x0003c306) aid_fshwr2_txt_pane_ParamLimits

0x21ea,	// (0x000317aa) fshwr2_bg_pane_ParamLimits

0xcd52,	// (0x0003c312) fshwr2_func_candi_pane_ParamLimits

0xcd71,	// (0x0003c331) fshwr2_hwr_syb_pane_ParamLimits

0xcd8c,	// (0x0003c34c) fshwr2_icf_pane_ParamLimits

0x32b0,	// (0x00032870) list_double_graphic_pane_vc_g4_ParamLimits

0x32b0,	// (0x00032870) list_double_graphic_pane_vc_g4

0x2bc9,	// (0x00032189) cell_ituss_key_pane_g3_ParamLimits

0x2bc9,	// (0x00032189) cell_ituss_key_pane_g3

0x2c71,	// (0x00032231) cell_ituss_key_t5_ParamLimits

0x2c71,	// (0x00032231) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small

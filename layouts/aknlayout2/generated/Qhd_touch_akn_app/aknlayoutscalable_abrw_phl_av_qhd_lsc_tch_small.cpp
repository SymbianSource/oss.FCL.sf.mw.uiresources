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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002f897 };

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
0xb36f,	// (0x0003ac06) Screen

0xb37b,	// (0x0003ac12) application_window_ParamLimits

0xb37b,	// (0x0003ac12) application_window

0x2b53,	// (0x000323ea) screen_g1

0xb3b3,	// (0x0003ac4a) area_bottom_pane_ParamLimits

0xb3b3,	// (0x0003ac4a) area_bottom_pane

0xf3b1,	// (0x0003ec48) area_top_pane_ParamLimits

0xf3b1,	// (0x0003ec48) area_top_pane

0xf44f,	// (0x0003ece6) main_pane_ParamLimits

0xf44f,	// (0x0003ece6) main_pane

0x2b5d,	// (0x000323f4) misc_graphics

0xd46a,	// (0x0003cd01) battery_pane_ParamLimits

0xd46a,	// (0x0003cd01) battery_pane

0x593c,	// (0x000351d3) bg_status_flat_pane_g8

0x5944,	// (0x000351db) bg_status_flat_pane_g9

0x4d38,	// (0x000345cf) context_pane_ParamLimits

0x4d38,	// (0x000345cf) context_pane

0xd5d5,	// (0x0003ce6c) navi_pane_ParamLimits

0xd5d5,	// (0x0003ce6c) navi_pane

0xd653,	// (0x0003ceea) signal_pane_ParamLimits

0xd653,	// (0x0003ceea) signal_pane

0x0008,

0xf874,	// (0x0003f10b) bg_status_flat_pane_g

0xd6e3,	// (0x0003cf7a) status_pane_g1_ParamLimits

0xd6e3,	// (0x0003cf7a) status_pane_g1

0xd6f9,	// (0x0003cf90) status_pane_g2_ParamLimits

0xd6f9,	// (0x0003cf90) status_pane_g2

0x4f5f,	// (0x000347f6) status_pane_g3_ParamLimits

0x4f5f,	// (0x000347f6) status_pane_g3

0x0004,

0xf7a0,	// (0x0003f037) status_pane_g_ParamLimits

0xf7a0,	// (0x0003f037) status_pane_g

0xd705,	// (0x0003cf9c) title_pane_ParamLimits

0xd705,	// (0x0003cf9c) title_pane

0xd768,	// (0x0003cfff) uni_indicator_pane_ParamLimits

0xd768,	// (0x0003cfff) uni_indicator_pane

0x4b9a,	// (0x00034431) bg_list_pane_ParamLimits

0x4b9a,	// (0x00034431) bg_list_pane

0xd3dd,	// (0x0003cc74) find_pane

0xbd41,	// (0x0003b5d8) listscroll_app_pane_ParamLimits

0xbd41,	// (0x0003b5d8) listscroll_app_pane

0x4bc6,	// (0x0003445d) listscroll_form_pane

0xbd51,	// (0x0003b5e8) listscroll_gen_pane_ParamLimits

0xbd51,	// (0x0003b5e8) listscroll_gen_pane

0x0f47,	// (0x000307de) listscroll_set_pane

0x64ca,	// (0x00035d61) main_idle_act_pane

0x48a2,	// (0x00034139) main_idle_trad_pane

0x48a2,	// (0x00034139) main_list_empty_pane

0x4be0,	// (0x00034477) main_midp_pane

0x4bec,	// (0x00034483) main_pane_g1_ParamLimits

0x4bec,	// (0x00034483) main_pane_g1

0xbd65,	// (0x0003b5fc) popup_ai_message_window_ParamLimits

0xbd65,	// (0x0003b5fc) popup_ai_message_window

0xbdf6,	// (0x0003b68d) popup_fep_china_uni_window_ParamLimits

0xbdf6,	// (0x0003b68d) popup_fep_china_uni_window

0x1067,	// (0x000308fe) popup_fep_japan_candidate_window_ParamLimits

0x1067,	// (0x000308fe) popup_fep_japan_candidate_window

0x1087,	// (0x0003091e) popup_fep_japan_predictive_window_ParamLimits

0x1087,	// (0x0003091e) popup_fep_japan_predictive_window

0xbe52,	// (0x0003b6e9) popup_find_window

0xbe6f,	// (0x0003b706) popup_grid_graphic_window_ParamLimits

0xbe6f,	// (0x0003b706) popup_grid_graphic_window

0x10ee,	// (0x00030985) popup_large_graphic_colour_window

0xbf0d,	// (0x0003b7a4) popup_menu_window_ParamLimits

0xbf0d,	// (0x0003b7a4) popup_menu_window

0xc0df,	// (0x0003b976) popup_note_image_window

0xc0a5,	// (0x0003b93c) popup_note_wait_window_ParamLimits

0xc0a5,	// (0x0003b93c) popup_note_wait_window

0xc0f7,	// (0x0003b98e) popup_note_window_ParamLimits

0xc0f7,	// (0x0003b98e) popup_note_window

0xc19d,	// (0x0003ba34) popup_query_code_window_ParamLimits

0xc19d,	// (0x0003ba34) popup_query_code_window

0x1336,	// (0x00030bcd) popup_query_data_code_window_ParamLimits

0x1336,	// (0x00030bcd) popup_query_data_code_window

0xc1d7,	// (0x0003ba6e) popup_query_data_window_ParamLimits

0xc1d7,	// (0x0003ba6e) popup_query_data_window

0xc259,	// (0x0003baf0) popup_query_sat_info_window_ParamLimits

0xc259,	// (0x0003baf0) popup_query_sat_info_window

0xc2f0,	// (0x0003bb87) popup_snote_single_graphic_window_ParamLimits

0xc2f0,	// (0x0003bb87) popup_snote_single_graphic_window

0xc2f0,	// (0x0003bb87) popup_snote_single_text_window_ParamLimits

0xc2f0,	// (0x0003bb87) popup_snote_single_text_window

0x13bd,	// (0x00030c54) popup_sub_window_general

0x14ed,	// (0x00030d84) popup_window_general_ParamLimits

0x14ed,	// (0x00030d84) popup_window_general

0x4bfa,	// (0x00034491) power_save_pane

0xbbd0,	// (0x0003b467) control_pane_g1_ParamLimits

0xbbd0,	// (0x0003b467) control_pane_g1

0xbbf9,	// (0x0003b490) control_pane_g2_ParamLimits

0xbbf9,	// (0x0003b490) control_pane_g2

0x4b5d,	// (0x000343f4) control_pane_g3_ParamLimits

0x4b5d,	// (0x000343f4) control_pane_g3

0x0007,

0xf788,	// (0x0003f01f) control_pane_g_ParamLimits

0xf788,	// (0x0003f01f) control_pane_g

0xbc3a,	// (0x0003b4d1) control_pane_t1_ParamLimits

0xbc3a,	// (0x0003b4d1) control_pane_t1

0xbc98,	// (0x0003b52f) control_pane_t2_ParamLimits

0xbc98,	// (0x0003b52f) control_pane_t2

0x0002,

0xf799,	// (0x0003f030) control_pane_t_ParamLimits

0xf799,	// (0x0003f030) control_pane_t

0xd30f,	// (0x0003cba6) navi_navi_volume_pane_cp1

0xd317,	// (0x0003cbae) status_small_icon_pane

0x4a92,	// (0x00034329) status_small_pane_g1_ParamLimits

0x4a92,	// (0x00034329) status_small_pane_g1

0xd31f,	// (0x0003cbb6) status_small_pane_g2_ParamLimits

0xd31f,	// (0x0003cbb6) status_small_pane_g2

0xd32b,	// (0x0003cbc2) status_small_pane_g3_ParamLimits

0xd32b,	// (0x0003cbc2) status_small_pane_g3

0xd337,	// (0x0003cbce) status_small_pane_g4_ParamLimits

0xd337,	// (0x0003cbce) status_small_pane_g4

0xd343,	// (0x0003cbda) status_small_pane_g5_ParamLimits

0xd343,	// (0x0003cbda) status_small_pane_g5

0xd351,	// (0x0003cbe8) status_small_pane_g6_ParamLimits

0xd351,	// (0x0003cbe8) status_small_pane_g6

0x0007,

0xf777,	// (0x0003f00e) status_small_pane_g_ParamLimits

0xf777,	// (0x0003f00e) status_small_pane_g

0xd380,	// (0x0003cc17) status_small_pane_t1

0xd3a2,	// (0x0003cc39) status_small_wait_pane_ParamLimits

0xd3a2,	// (0x0003cc39) status_small_wait_pane

0xd1b6,	// (0x0003ca4d) aid_levels_signal_ParamLimits

0xd1b6,	// (0x0003ca4d) aid_levels_signal

0xd1ce,	// (0x0003ca65) signal_pane_g1_ParamLimits

0xd1ce,	// (0x0003ca65) signal_pane_g1

0xd1e9,	// (0x0003ca80) signal_pane_g2_ParamLimits

0xd1e9,	// (0x0003ca80) signal_pane_g2

0x0003,

0xf708,	// (0x0003ef9f) signal_pane_g_ParamLimits

0xf708,	// (0x0003ef9f) signal_pane_g

0x4376,	// (0x00033c0d) context_pane_g1

0xb591,	// (0x0003ae28) title_pane_g1

0xcd51,	// (0x0003c5e8) title_pane_t1

0x2c05,	// (0x0003249c) title_pane_t2

0x2c2b,	// (0x000324c2) title_pane_t3

0x0002,

0xf557,	// (0x0003edee) title_pane_t

0xd790,	// (0x0003d027) aid_levels_battery_ParamLimits

0xd790,	// (0x0003d027) aid_levels_battery

0xd7ac,	// (0x0003d043) battery_pane_g1_ParamLimits

0xd7ac,	// (0x0003d043) battery_pane_g1

0xd7c9,	// (0x0003d060) battery_pane_g2_ParamLimits

0xd7c9,	// (0x0003d060) battery_pane_g2

0x0001,

0xf7ab,	// (0x0003f042) battery_pane_g_ParamLimits

0xf7ab,	// (0x0003f042) battery_pane_g

0xd998,	// (0x0003d22f) uni_indicator_pane_g1

0xd9ae,	// (0x0003d245) uni_indicator_pane_g2

0xd9c4,	// (0x0003d25b) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0003f1b3) uni_indicator_pane_g

0x4714,	// (0x00033fab) navi_icon_pane_ParamLimits

0x4714,	// (0x00033fab) navi_icon_pane

0x4652,	// (0x00033ee9) navi_midp_pane

0x4730,	// (0x00033fc7) navi_navi_pane

0x473a,	// (0x00033fd1) navi_text_pane_ParamLimits

0x473a,	// (0x00033fd1) navi_text_pane

0x2b53,	// (0x000323ea) status_small_wait_pane_g1

0x37ba,	// (0x00033051) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0003f1ae) status_small_wait_pane_g

0x5f97,	// (0x0003582e) navi_navi_icon_text_pane

0x5f9f,	// (0x00035836) navi_navi_pane_g1_ParamLimits

0x5f9f,	// (0x00035836) navi_navi_pane_g1

0x5fb1,	// (0x00035848) navi_navi_pane_g2_ParamLimits

0x5fb1,	// (0x00035848) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0003f17c) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0003f17c) navi_navi_pane_g

0x5fc3,	// (0x0003585a) navi_navi_tabs_pane

0x5fcc,	// (0x00035863) navi_navi_text_pane

0x5f97,	// (0x0003582e) navi_navi_volume_pane

0x5f73,	// (0x0003580a) navi_text_pane_t1

0x5f67,	// (0x000357fe) navi_icon_pane_g1

0x5eba,	// (0x00035751) navi_navi_text_pane_t1

0x18be,	// (0x00031155) navi_navi_volume_pane_g1

0x18c6,	// (0x0003115d) volume_small_pane

0x5e20,	// (0x000356b7) navi_navi_icon_text_pane_g1

0x5e28,	// (0x000356bf) navi_navi_icon_text_pane_t1

0x4730,	// (0x00033fc7) navi_tabs_2_long_pane

0x4730,	// (0x00033fc7) navi_tabs_2_pane

0x4730,	// (0x00033fc7) navi_tabs_3_long_pane

0x4730,	// (0x00033fc7) navi_tabs_3_pane

0x4730,	// (0x00033fc7) navi_tabs_4_pane

0x189e,	// (0x00031135) tabs_2_active_pane_ParamLimits

0x189e,	// (0x00031135) tabs_2_active_pane

0x18ae,	// (0x00031145) tabs_2_passive_pane_ParamLimits

0x18ae,	// (0x00031145) tabs_2_passive_pane

0x186c,	// (0x00031103) tabs_3_active_pane_ParamLimits

0x186c,	// (0x00031103) tabs_3_active_pane

0x187c,	// (0x00031113) tabs_3_passive_pane_ParamLimits

0x187c,	// (0x00031113) tabs_3_passive_pane

0x188d,	// (0x00031124) tabs_3_passive_pane_cp_ParamLimits

0x188d,	// (0x00031124) tabs_3_passive_pane_cp

0x1828,	// (0x000310bf) tabs_4_active_pane_ParamLimits

0x1828,	// (0x000310bf) tabs_4_active_pane

0x1839,	// (0x000310d0) tabs_4_passive_pane_ParamLimits

0x1839,	// (0x000310d0) tabs_4_passive_pane

0x184a,	// (0x000310e1) tabs_4_passive_pane_cp_ParamLimits

0x184a,	// (0x000310e1) tabs_4_passive_pane_cp

0x185b,	// (0x000310f2) tabs_4_passive_pane_cp2_ParamLimits

0x185b,	// (0x000310f2) tabs_4_passive_pane_cp2

0x1804,	// (0x0003109b) tabs_2_long_active_pane_ParamLimits

0x1804,	// (0x0003109b) tabs_2_long_active_pane

0x1816,	// (0x000310ad) tabs_2_long_passive_pane_ParamLimits

0x1816,	// (0x000310ad) tabs_2_long_passive_pane

0x17c5,	// (0x0003105c) tabs_3_long_active_pane_ParamLimits

0x17c5,	// (0x0003105c) tabs_3_long_active_pane

0x17d8,	// (0x0003106f) tabs_3_long_passive_pane_ParamLimits

0x17d8,	// (0x0003106f) tabs_3_long_passive_pane

0x17f1,	// (0x00031088) tabs_3_long_passive_pane_cp_ParamLimits

0x17f1,	// (0x00031088) tabs_3_long_passive_pane_cp

0x176b,	// (0x00031002) volume_small_pane_g1

0x1774,	// (0x0003100b) volume_small_pane_g2

0x177d,	// (0x00031014) volume_small_pane_g3

0x1786,	// (0x0003101d) volume_small_pane_g4

0x178f,	// (0x00031026) volume_small_pane_g5

0x1798,	// (0x0003102f) volume_small_pane_g6

0x17a1,	// (0x00031038) volume_small_pane_g7

0x17aa,	// (0x00031041) volume_small_pane_g8

0x17b3,	// (0x0003104a) volume_small_pane_g9

0x17bc,	// (0x00031053) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0003f148) volume_small_pane_g

0x3618,	// (0x00032eaf) bg_active_tab_pane_cp2_ParamLimits

0x3618,	// (0x00032eaf) bg_active_tab_pane_cp2

0x2c4b,	// (0x000324e2) tabs_3_active_pane_g1

0xcddd,	// (0x0003c674) tabs_3_active_pane_t1

0x3618,	// (0x00032eaf) bg_passive_tab_pane_cp2_ParamLimits

0x3618,	// (0x00032eaf) bg_passive_tab_pane_cp2

0x2c4b,	// (0x000324e2) tabs_3_passive_pane_g1

0xcddd,	// (0x0003c674) tabs_3_passive_pane_t1

0x3618,	// (0x00032eaf) bg_active_tab_pane_cp3_ParamLimits

0x3618,	// (0x00032eaf) bg_active_tab_pane_cp3

0x2c65,	// (0x000324fc) tabs_4_active_pane_g1

0xcdef,	// (0x0003c686) tabs_4_active_pane_t1

0x3618,	// (0x00032eaf) bg_passive_tab_pane_cp3_ParamLimits

0x3618,	// (0x00032eaf) bg_passive_tab_pane_cp3

0x2c65,	// (0x000324fc) tabs_4_1_passive_pane_g1

0xcdef,	// (0x0003c686) tabs_4_1_passive_pane_t1

0x4be0,	// (0x00034477) list_highlight_pane_cp2

0xda4c,	// (0x0003d2e3) list_set_pane_ParamLimits

0xda4c,	// (0x0003d2e3) list_set_pane

0xdae6,	// (0x0003d37d) main_pane_set_t1_ParamLimits

0xdae6,	// (0x0003d37d) main_pane_set_t1

0xdb06,	// (0x0003d39d) main_pane_set_t2_ParamLimits

0xdb06,	// (0x0003d39d) main_pane_set_t2

0xdb1a,	// (0x0003d3b1) main_pane_set_t3_ParamLimits

0xdb1a,	// (0x0003d3b1) main_pane_set_t3

0xdb2c,	// (0x0003d3c3) main_pane_set_t4_ParamLimits

0xdb2c,	// (0x0003d3c3) main_pane_set_t4

0x0003,

0xf981,	// (0x0003f218) main_pane_set_t_ParamLimits

0xf981,	// (0x0003f218) main_pane_set_t

0xdb3e,	// (0x0003d3d5) setting_code_pane

0xdb48,	// (0x0003d3df) setting_slider_graphic_pane

0xdb48,	// (0x0003d3df) setting_slider_pane

0xdb48,	// (0x0003d3df) setting_text_pane

0xdb48,	// (0x0003d3df) setting_volume_pane

0x011e,	// (0x0002f9b5) volume_set_pane

0x2c3d,	// (0x000324d4) bg_set_opt_pane_cp

0x0126,	// (0x0002f9bd) setting_slider_pane_t1

0x013f,	// (0x0002f9d6) setting_slider_pane_t2

0x0159,	// (0x0002f9f0) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003edf5) setting_slider_pane_t

0x0171,	// (0x0002fa08) slider_set_pane

0x2b5d,	// (0x000323f4) bg_set_opt_pane_cp2

0x2c7f,	// (0x00032516) setting_slider_graphic_pane_g1

0x0187,	// (0x0002fa1e) setting_slider_graphic_pane_t1

0x0197,	// (0x0002fa2e) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003edfc) setting_slider_graphic_pane_t

0x01a7,	// (0x0002fa3e) slider_set_pane_cp

0x2b5d,	// (0x000323f4) input_focus_pane_cp1

0x64b1,	// (0x00035d48) list_set_text_pane

0x2b53,	// (0x000323ea) setting_text_pane_g1

0x2b5d,	// (0x000323f4) input_focus_pane_cp2

0x2b53,	// (0x000323ea) setting_code_pane_g1

0x2c88,	// (0x0003251f) setting_code_pane_t1

0x01af,	// (0x0002fa46) set_text_pane_t1_ParamLimits

0x01af,	// (0x0002fa46) set_text_pane_t1

0x3c67,	// (0x000334fe) set_opt_bg_pane_g1

0x3c6f,	// (0x00033506) set_opt_bg_pane_g2

0x648b,	// (0x00035d22) set_opt_bg_pane_g3

0x3c7f,	// (0x00033516) set_opt_bg_pane_g4

0x3c87,	// (0x0003351e) set_opt_bg_pane_g5

0x3c8f,	// (0x00033526) set_opt_bg_pane_g6

0x6495,	// (0x00035d2c) set_opt_bg_pane_g7

0x649d,	// (0x00035d34) set_opt_bg_pane_g8

0x64a7,	// (0x00035d3e) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0003f205) set_opt_bg_pane_g

0x647e,	// (0x00035d15) slider_set_pane_g1

0x195b,	// (0x000311f2) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0003f1f6) slider_set_pane_g

0x18cf,	// (0x00031166) volume_set_pane_g1

0x18d7,	// (0x0003116e) volume_set_pane_g2

0x18df,	// (0x00031176) volume_set_pane_g3

0x18e7,	// (0x0003117e) volume_set_pane_g4

0x18ef,	// (0x00031186) volume_set_pane_g5

0x18f7,	// (0x0003118e) volume_set_pane_g6

0x18ff,	// (0x00031196) volume_set_pane_g7

0x1907,	// (0x0003119e) volume_set_pane_g8

0x190f,	// (0x000311a6) volume_set_pane_g9

0x1917,	// (0x000311ae) volume_set_pane_g10

0x0009,

0xf937,	// (0x0003f1ce) volume_set_pane_g

0xce01,	// (0x0003c698) indicator_pane_ParamLimits

0xce01,	// (0x0003c698) indicator_pane

0xce29,	// (0x0003c6c0) main_idle_pane_g2_ParamLimits

0xce29,	// (0x0003c6c0) main_idle_pane_g2

0xce61,	// (0x0003c6f8) main_pane_idle_g1_ParamLimits

0xce61,	// (0x0003c6f8) main_pane_idle_g1

0x2cd7,	// (0x0003256e) popup_clock_digital_analogue_window_ParamLimits

0x2cd7,	// (0x0003256e) popup_clock_digital_analogue_window

0xce88,	// (0x0003c71f) soft_indicator_pane_ParamLimits

0xce88,	// (0x0003c71f) soft_indicator_pane

0xcea2,	// (0x0003c739) wallpaper_pane_ParamLimits

0xcea2,	// (0x0003c739) wallpaper_pane

0x2b53,	// (0x000323ea) wallpaper_pane_g1

0xceb4,	// (0x0003c74b) indicator_pane_g1_ParamLimits

0xceb4,	// (0x0003c74b) indicator_pane_g1

0x68b5,	// (0x0003614c) navi_navi_icon_text_pane_srt_g1

0x2d29,	// (0x000325c0) soft_indicator_pane_t1

0x2d43,	// (0x000325da) aid_ps_area_pane

0xceca,	// (0x0003c761) aid_ps_clock_pane

0x2d62,	// (0x000325f9) aid_ps_indicator_pane

0x2d6e,	// (0x00032605) indicator_ps_pane_ParamLimits

0x2d6e,	// (0x00032605) indicator_ps_pane

0x2d7d,	// (0x00032614) power_save_pane_g1_ParamLimits

0x2d7d,	// (0x00032614) power_save_pane_g1

0x2d89,	// (0x00032620) power_save_pane_g2_ParamLimits

0x2d89,	// (0x00032620) power_save_pane_g2

0xf31f,	// (0x0003ebb6) aid_navinavi_width_pane

0x2d43,	// (0x000325da) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003ee01) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003ee01) power_save_pane_g

0x2d97,	// (0x0003262e) power_save_pane_t1_ParamLimits

0x2d97,	// (0x0003262e) power_save_pane_t1

0xceca,	// (0x0003c761) aid_ps_clock_pane_ParamLimits

0x2d62,	// (0x000325f9) aid_ps_indicator_pane_ParamLimits

0x2da9,	// (0x00032640) power_save_pane_t4_ParamLimits

0x2da9,	// (0x00032640) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003ee06) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003ee06) power_save_pane_t

0x2dd3,	// (0x0003266a) power_save_t3_ParamLimits

0x2dd3,	// (0x0003266a) power_save_t3

0x2dbe,	// (0x00032655) power_save_t2_ParamLimits

0x2dbe,	// (0x00032655) power_save_t2

0x2de8,	// (0x0003267f) indicator_ps_pane_g1

0xced8,	// (0x0003c76f) ai_gene_pane_ParamLimits

0xced8,	// (0x0003c76f) ai_gene_pane

0xceef,	// (0x0003c786) ai_links_pane_ParamLimits

0xceef,	// (0x0003c786) ai_links_pane

0xcf07,	// (0x0003c79e) indicator_pane_cp1_ParamLimits

0xcf07,	// (0x0003c79e) indicator_pane_cp1

0xcf16,	// (0x0003c7ad) main_pane_idle_g1_cp_ParamLimits

0xcf16,	// (0x0003c7ad) main_pane_idle_g1_cp

0x2e21,	// (0x000326b8) popup_ai_links_title_window

0xcf2e,	// (0x0003c7c5) soft_indicator_pane_cp1_ParamLimits

0xcf2e,	// (0x0003c7c5) soft_indicator_pane_cp1

0x626c,	// (0x00035b03) ai_links_pane_g1

0x6275,	// (0x00035b0c) grid_ai_links_pane

0xd98f,	// (0x0003d226) ai_gene_pane_1

0x625a,	// (0x00035af1) ai_gene_pane_2

0x6263,	// (0x00035afa) list_highlight_pane_cp4

0xd96b,	// (0x0003d202) cell_ai_link_pane_ParamLimits

0xd96b,	// (0x0003d202) cell_ai_link_pane

0x622b,	// (0x00035ac2) cell_ai_link_pane_g1

0x37ba,	// (0x00033051) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0003f1a9) cell_ai_link_pane_g

0x2b5d,	// (0x000323f4) grid_highlight_cp2

0x2b5d,	// (0x000323f4) bg_popup_sub_pane_cp1

0x2e44,	// (0x000326db) popup_ai_links_title_window_t1

0x6179,	// (0x00035a10) ai_gene_pane_1_g1_ParamLimits

0x6179,	// (0x00035a10) ai_gene_pane_1_g1

0x6185,	// (0x00035a1c) ai_gene_pane_1_g2_ParamLimits

0x6185,	// (0x00035a1c) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0003f19f) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0003f19f) ai_gene_pane_1_g

0x6192,	// (0x00035a29) ai_gene_pane_1_t1_ParamLimits

0x6192,	// (0x00035a29) ai_gene_pane_1_t1

0x61c6,	// (0x00035a5d) grid_ai_soft_ind_pane

0x6164,	// (0x000359fb) ai_gene_pane_2_t1_ParamLimits

0x6164,	// (0x000359fb) ai_gene_pane_2_t1

0xcf42,	// (0x0003c7d9) main_pane_empty_t1_ParamLimits

0xcf42,	// (0x0003c7d9) main_pane_empty_t1

0xcf5a,	// (0x0003c7f1) main_pane_empty_t2_ParamLimits

0xcf5a,	// (0x0003c7f1) main_pane_empty_t2

0xcf6f,	// (0x0003c806) main_pane_empty_t3_ParamLimits

0xcf6f,	// (0x0003c806) main_pane_empty_t3

0xcf81,	// (0x0003c818) main_pane_empty_t4_ParamLimits

0xcf81,	// (0x0003c818) main_pane_empty_t4

0xcf93,	// (0x0003c82a) main_pane_empty_t5_ParamLimits

0xcf93,	// (0x0003c82a) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003ee0b) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003ee0b) main_pane_empty_t

0x3cb8,	// (0x0003354f) bg_popup_window_pane_ParamLimits

0x3cb8,	// (0x0003354f) bg_popup_window_pane

0x5ec8,	// (0x0003575f) find_popup_pane_cp2_ParamLimits

0x5ec8,	// (0x0003575f) find_popup_pane_cp2

0x5ed4,	// (0x0003576b) heading_pane_ParamLimits

0x5ed4,	// (0x0003576b) heading_pane

0x2b5d,	// (0x000323f4) bg_popup_sub_pane

0xd8ec,	// (0x0003d183) bg_popup_window_pane_g1_ParamLimits

0xd8ec,	// (0x0003d183) bg_popup_window_pane_g1

0xd8fb,	// (0x0003d192) bg_popup_window_pane_g2_ParamLimits

0xd8fb,	// (0x0003d192) bg_popup_window_pane_g2

0xd907,	// (0x0003d19e) bg_popup_window_pane_g3_ParamLimits

0xd907,	// (0x0003d19e) bg_popup_window_pane_g3

0xd913,	// (0x0003d1aa) bg_popup_window_pane_g4_ParamLimits

0xd913,	// (0x0003d1aa) bg_popup_window_pane_g4

0xd922,	// (0x0003d1b9) bg_popup_window_pane_g5_ParamLimits

0xd922,	// (0x0003d1b9) bg_popup_window_pane_g5

0xd932,	// (0x0003d1c9) bg_popup_window_pane_g6_ParamLimits

0xd932,	// (0x0003d1c9) bg_popup_window_pane_g6

0xd93e,	// (0x0003d1d5) bg_popup_window_pane_g7_ParamLimits

0xd93e,	// (0x0003d1d5) bg_popup_window_pane_g7

0xd94d,	// (0x0003d1e4) bg_popup_window_pane_g8_ParamLimits

0xd94d,	// (0x0003d1e4) bg_popup_window_pane_g8

0xd95c,	// (0x0003d1f3) bg_popup_window_pane_g9_ParamLimits

0xd95c,	// (0x0003d1f3) bg_popup_window_pane_g9

0x5eae,	// (0x00035745) bg_popup_window_pane_g10_ParamLimits

0x5eae,	// (0x00035745) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0003f167) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0003f167) bg_popup_window_pane_g

0x5dd7,	// (0x0003566e) bg_popup_heading_pane_ParamLimits

0x5dd7,	// (0x0003566e) bg_popup_heading_pane

0x1a62,	// (0x000312f9) tabs_4_passive_pane_cp_srt_ParamLimits

0x1a62,	// (0x000312f9) tabs_4_passive_pane_cp_srt

0x1a74,	// (0x0003130b) tabs_4_passive_pane_srt_ParamLimits

0x5deb,	// (0x00035682) heading_pane_g2

0x1a74,	// (0x0003130b) tabs_4_passive_pane_srt

0x515e,	// (0x000349f5) bg_passive_tab_pane_cp3_srt_ParamLimits

0x515e,	// (0x000349f5) bg_passive_tab_pane_cp3_srt

0x5df3,	// (0x0003568a) heading_pane_t1_ParamLimits

0x5df3,	// (0x0003568a) heading_pane_t1

0x5e0a,	// (0x000356a1) heading_pane_t2_ParamLimits

0x5e0a,	// (0x000356a1) heading_pane_t2

0x0001,

0xf8cb,	// (0x0003f162) heading_pane_t_ParamLimits

0xf8cb,	// (0x0003f162) heading_pane_t

0x5904,	// (0x0003519b) bg_popup_heading_pane_g1

0x59b3,	// (0x0003524a) bg_popup_heading_pane_g2

0x59bd,	// (0x00035254) bg_popup_heading_pane_g3

0x59c7,	// (0x0003525e) bg_popup_heading_pane_g4

0x59d1,	// (0x00035268) bg_popup_heading_pane_g5

0x59db,	// (0x00035272) bg_popup_heading_pane_g6

0x59e3,	// (0x0003527a) bg_popup_heading_pane_g7

0x59eb,	// (0x00035282) bg_popup_heading_pane_g8

0x59f5,	// (0x0003528c) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0003f11e) bg_popup_heading_pane_g

0x50ea,	// (0x00034981) bg_popup_sub_pane_g1

0x50fa,	// (0x00034991) bg_popup_sub_pane_g2

0x50f2,	// (0x00034989) bg_popup_sub_pane_g3

0x510a,	// (0x000349a1) bg_popup_sub_pane_g4

0x5102,	// (0x00034999) bg_popup_sub_pane_g5

0x5112,	// (0x000349a9) bg_popup_sub_pane_g6

0x511a,	// (0x000349b1) bg_popup_sub_pane_g7

0x512a,	// (0x000349c1) bg_popup_sub_pane_g8

0x5122,	// (0x000349b9) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0003f0f8) bg_popup_sub_pane_g

0x3618,	// (0x00032eaf) bg_popup_window_pane_cp5_ParamLimits

0x3618,	// (0x00032eaf) bg_popup_window_pane_cp5

0x3634,	// (0x00032ecb) popup_note_window_g1_ParamLimits

0x3634,	// (0x00032ecb) popup_note_window_g1

0x3640,	// (0x00032ed7) popup_note_window_t1_ParamLimits

0x3640,	// (0x00032ed7) popup_note_window_t1

0x3656,	// (0x00032eed) popup_note_window_t2_ParamLimits

0x3656,	// (0x00032eed) popup_note_window_t2

0x366c,	// (0x00032f03) popup_note_window_t3_ParamLimits

0x366c,	// (0x00032f03) popup_note_window_t3

0x3682,	// (0x00032f19) popup_note_window_t4_ParamLimits

0x3682,	// (0x00032f19) popup_note_window_t4

0x36aa,	// (0x00032f41) popup_note_window_t5_ParamLimits

0x36aa,	// (0x00032f41) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003ee16) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003ee16) popup_note_window_t

0x36ce,	// (0x00032f65) bg_popup_window_pane_cp6_ParamLimits

0x36ce,	// (0x00032f65) bg_popup_window_pane_cp6

0x5880,	// (0x00035117) popup_note_image_window_g1_ParamLimits

0x5880,	// (0x00035117) popup_note_image_window_g1

0x588c,	// (0x00035123) popup_note_image_window_g2_ParamLimits

0x588c,	// (0x00035123) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0003f0ec) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0003f0ec) popup_note_image_window_g

0x58a5,	// (0x0003513c) popup_note_image_window_t1_ParamLimits

0x58a5,	// (0x0003513c) popup_note_image_window_t1

0x58be,	// (0x00035155) popup_note_image_window_t2_ParamLimits

0x58be,	// (0x00035155) popup_note_image_window_t2

0x58d7,	// (0x0003516e) popup_note_image_window_t3_ParamLimits

0x58d7,	// (0x0003516e) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0003f0f1) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0003f0f1) popup_note_image_window_t

0x5741,	// (0x00034fd8) bg_popup_window_pane_cp7_ParamLimits

0x5741,	// (0x00034fd8) bg_popup_window_pane_cp7

0x5771,	// (0x00035008) popup_note_wait_window_g1_ParamLimits

0x5771,	// (0x00035008) popup_note_wait_window_g1

0x577d,	// (0x00035014) popup_note_wait_window_g2_ParamLimits

0x577d,	// (0x00035014) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0003f0da) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0003f0da) popup_note_wait_window_g

0x5795,	// (0x0003502c) popup_note_wait_window_t1_ParamLimits

0x5795,	// (0x0003502c) popup_note_wait_window_t1

0x57bc,	// (0x00035053) popup_note_wait_window_t2_ParamLimits

0x57bc,	// (0x00035053) popup_note_wait_window_t2

0x57d9,	// (0x00035070) popup_note_wait_window_t3_ParamLimits

0x57d9,	// (0x00035070) popup_note_wait_window_t3

0x57ec,	// (0x00035083) popup_note_wait_window_t4_ParamLimits

0x57ec,	// (0x00035083) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0003f0e1) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0003f0e1) popup_note_wait_window_t

0x5811,	// (0x000350a8) wait_bar_pane_ParamLimits

0x5811,	// (0x000350a8) wait_bar_pane

0x2b5d,	// (0x000323f4) wait_anim_pane

0x2b5d,	// (0x000323f4) wait_border_pane

0x2b53,	// (0x000323ea) wait_anim_pane_g1

0x2b53,	// (0x000323ea) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0003ef9a) wait_anim_pane_g

0x56e5,	// (0x00034f7c) wait_border_pane_g1

0x56f0,	// (0x00034f87) wait_border_pane_g2

0x56f9,	// (0x00034f90) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0003f0d3) wait_border_pane_g

0x5550,	// (0x00034de7) bg_popup_window_pane_cp16_ParamLimits

0x5550,	// (0x00034de7) bg_popup_window_pane_cp16

0x5650,	// (0x00034ee7) indicator_popup_pane_cp4_ParamLimits

0x5650,	// (0x00034ee7) indicator_popup_pane_cp4

0x5664,	// (0x00034efb) popup_query_data_window_t1_ParamLimits

0x5664,	// (0x00034efb) popup_query_data_window_t1

0x5676,	// (0x00034f0d) popup_query_data_window_t2_ParamLimits

0x5676,	// (0x00034f0d) popup_query_data_window_t2

0x568f,	// (0x00034f26) popup_query_data_window_t3_ParamLimits

0x568f,	// (0x00034f26) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0003f0cc) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0003f0cc) popup_query_data_window_t

0x56a9,	// (0x00034f40) query_popup_data_pane_ParamLimits

0x56a9,	// (0x00034f40) query_popup_data_pane

0x56bd,	// (0x00034f54) query_popup_data_pane_cp1_ParamLimits

0x56bd,	// (0x00034f54) query_popup_data_pane_cp1

0x5550,	// (0x00034de7) bg_popup_window_pane_cp10_ParamLimits

0x5550,	// (0x00034de7) bg_popup_window_pane_cp10

0x5582,	// (0x00034e19) indicator_popup_pane_ParamLimits

0x5582,	// (0x00034e19) indicator_popup_pane

0x55a4,	// (0x00034e3b) popup_query_code_window_t1_ParamLimits

0x55a4,	// (0x00034e3b) popup_query_code_window_t1

0x55be,	// (0x00034e55) popup_query_code_window_t2_ParamLimits

0x55be,	// (0x00034e55) popup_query_code_window_t2

0x5607,	// (0x00034e9e) popup_query_code_window_t3_ParamLimits

0x5607,	// (0x00034e9e) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0003f0c5) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0003f0c5) popup_query_code_window_t

0x5636,	// (0x00034ecd) query_popup_pane_ParamLimits

0x5636,	// (0x00034ecd) query_popup_pane

0x36ce,	// (0x00032f65) bg_popup_window_pane_cp15_ParamLimits

0x36ce,	// (0x00032f65) bg_popup_window_pane_cp15

0x36ec,	// (0x00032f83) indicator_popup_pane_cp1_ParamLimits

0x36ec,	// (0x00032f83) indicator_popup_pane_cp1

0x36ff,	// (0x00032f96) indicator_popup_pane_cp2_ParamLimits

0x36ff,	// (0x00032f96) indicator_popup_pane_cp2

0x3712,	// (0x00032fa9) popup_query_data_code_window_g1_ParamLimits

0x3712,	// (0x00032fa9) popup_query_data_code_window_g1

0x3725,	// (0x00032fbc) popup_query_data_code_window_t1_ParamLimits

0x3725,	// (0x00032fbc) popup_query_data_code_window_t1

0x3737,	// (0x00032fce) popup_query_data_code_window_t2_ParamLimits

0x3737,	// (0x00032fce) popup_query_data_code_window_t2

0x3749,	// (0x00032fe0) popup_query_data_code_window_t3_ParamLimits

0x3749,	// (0x00032fe0) popup_query_data_code_window_t3

0x375f,	// (0x00032ff6) popup_query_data_code_window_t4_ParamLimits

0x375f,	// (0x00032ff6) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003ee21) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003ee21) popup_query_data_code_window_t

0x1591,	// (0x00030e28) list_single_midp_graphic_pane_g3

0x3777,	// (0x0003300e) query_popup_data_pane_cp2_ParamLimits

0x378a,	// (0x00033021) query_popup_pane_cp2_ParamLimits

0x378a,	// (0x00033021) query_popup_pane_cp2

0x2b5d,	// (0x000323f4) bg_popup_window_pane_cp11

0x5548,	// (0x00034ddf) heading_pane_cp5

0x3875,	// (0x0003310c) listscroll_popup_info_pane

0x2b5d,	// (0x000323f4) input_focus_pane_cp3

0x379d,	// (0x00033034) query_popup_pane_t1

0x37ab,	// (0x00033042) list_popup_info_pane_ParamLimits

0x37ab,	// (0x00033042) list_popup_info_pane

0x37ba,	// (0x00033051) listscroll_popup_info_pane_g1

0x37c2,	// (0x00033059) scroll_pane_cp7

0x37cc,	// (0x00033063) popup_info_list_pane_t1_ParamLimits

0x37cc,	// (0x00033063) popup_info_list_pane_t1

0x37e6,	// (0x0003307d) popup_info_list_pane_t2_ParamLimits

0x37e6,	// (0x0003307d) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003ee2a) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003ee2a) popup_info_list_pane_t

0x2b5d,	// (0x000323f4) bg_popup_window_pane_cp12

0x68cf,	// (0x00036166) find_popup_pane

0x2c3d,	// (0x000324d4) bg_popup_window_pane_cp3

0x3800,	// (0x00033097) heading_pane_cp3

0x380c,	// (0x000330a3) listscroll_popup_graphic_pane

0x2b5d,	// (0x000323f4) bg_popup_window_pane_cp4

0xcff5,	// (0x0003c88c) heading_pane_cp4

0x3875,	// (0x0003310c) listscroll_popup_colour_pane

0x387d,	// (0x00033114) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x387d,	// (0x00033114) cell_large_graphic_colour_none_popup_pane

0xcffd,	// (0x0003c894) grid_large_graphic_colour_popup_pane_ParamLimits

0xcffd,	// (0x0003c894) grid_large_graphic_colour_popup_pane

0x38bd,	// (0x00033154) listscroll_popup_colour_pane_g1_ParamLimits

0x38bd,	// (0x00033154) listscroll_popup_colour_pane_g1

0x38d4,	// (0x0003316b) listscroll_popup_colour_pane_g2_ParamLimits

0x38d4,	// (0x0003316b) listscroll_popup_colour_pane_g2

0x38eb,	// (0x00033182) listscroll_popup_colour_pane_g3_ParamLimits

0x38eb,	// (0x00033182) listscroll_popup_colour_pane_g3

0xd021,	// (0x0003c8b8) listscroll_popup_colour_pane_g4_ParamLimits

0xd021,	// (0x0003c8b8) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003ee2f) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003ee2f) listscroll_popup_colour_pane_g

0x390f,	// (0x000331a6) scroll_pane_cp6_ParamLimits

0x390f,	// (0x000331a6) scroll_pane_cp6

0xd031,	// (0x0003c8c8) cell_large_graphic_colour_popup_pane_ParamLimits

0xd031,	// (0x0003c8c8) cell_large_graphic_colour_popup_pane

0x3940,	// (0x000331d7) cell_large_graphic_colour_none_popup_pane_t1

0x2b5d,	// (0x000323f4) grid_highlight_pane_cp5

0x394f,	// (0x000331e6) cell_large_graphic_colour_popup_pane_g1

0x3957,	// (0x000331ee) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003ee38) cell_large_graphic_colour_popup_pane_g

0x395f,	// (0x000331f6) cell_large_graphic_colour_popup_pane_g2_copy1

0x3968,	// (0x000331ff) grid_highlight_pane_cp4

0x3970,	// (0x00033207) bg_popup_window_pane_cp8_ParamLimits

0x3970,	// (0x00033207) bg_popup_window_pane_cp8

0x398b,	// (0x00033222) popup_snote_single_text_window_g1_ParamLimits

0x398b,	// (0x00033222) popup_snote_single_text_window_g1

0x399d,	// (0x00033234) popup_snote_single_text_window_t1_ParamLimits

0x399d,	// (0x00033234) popup_snote_single_text_window_t1

0x39b0,	// (0x00033247) popup_snote_single_text_window_t2_ParamLimits

0x39b0,	// (0x00033247) popup_snote_single_text_window_t2

0x39c3,	// (0x0003325a) popup_snote_single_text_window_t3_ParamLimits

0x39c3,	// (0x0003325a) popup_snote_single_text_window_t3

0x39fc,	// (0x00033293) popup_snote_single_text_window_t4_ParamLimits

0x39fc,	// (0x00033293) popup_snote_single_text_window_t4

0x3a30,	// (0x000332c7) popup_snote_single_text_window_t5_ParamLimits

0x3a30,	// (0x000332c7) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003ee3d) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003ee3d) popup_snote_single_text_window_t

0x3a5f,	// (0x000332f6) bg_popup_window_pane_cp9_ParamLimits

0x3a5f,	// (0x000332f6) bg_popup_window_pane_cp9

0x398b,	// (0x00033222) popup_snote_single_graphic_window_g1_ParamLimits

0x398b,	// (0x00033222) popup_snote_single_graphic_window_g1

0x3a6d,	// (0x00033304) popup_snote_single_graphic_window_g2_ParamLimits

0x3a6d,	// (0x00033304) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003ee48) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003ee48) popup_snote_single_graphic_window_g

0x3a79,	// (0x00033310) popup_snote_single_graphic_window_t1_ParamLimits

0x3a79,	// (0x00033310) popup_snote_single_graphic_window_t1

0x3a8c,	// (0x00033323) popup_snote_single_graphic_window_t2_ParamLimits

0x3a8c,	// (0x00033323) popup_snote_single_graphic_window_t2

0x3a9f,	// (0x00033336) popup_snote_single_graphic_window_t3_ParamLimits

0x3a9f,	// (0x00033336) popup_snote_single_graphic_window_t3

0x3ad8,	// (0x0003336f) popup_snote_single_graphic_window_t4_ParamLimits

0x3ad8,	// (0x0003336f) popup_snote_single_graphic_window_t4

0x3b0c,	// (0x000333a3) popup_snote_single_graphic_window_t5_ParamLimits

0x3b0c,	// (0x000333a3) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003ee4d) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003ee4d) popup_snote_single_graphic_window_t

0x6813,	// (0x000360aa) grid_graphic_popup_pane_ParamLimits

0x6813,	// (0x000360aa) grid_graphic_popup_pane

0x683b,	// (0x000360d2) listscroll_popup_graphic_pane_g1_ParamLimits

0x683b,	// (0x000360d2) listscroll_popup_graphic_pane_g1

0xdc40,	// (0x0003d4d7) listscroll_popup_graphic_pane_g2_ParamLimits

0xdc40,	// (0x0003d4d7) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0003f242) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0003f242) listscroll_popup_graphic_pane_g

0x6863,	// (0x000360fa) scroll_pane_cp5

0xdbfc,	// (0x0003d493) cell_graphic_popup_pane_ParamLimits

0xdbfc,	// (0x0003d493) cell_graphic_popup_pane

0x6791,	// (0x00036028) cell_graphic_popup_pane_g1

0x6799,	// (0x00036030) cell_graphic_popup_pane_g2

0x395f,	// (0x000331f6) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0003f23b) cell_graphic_popup_pane_g

0x67a2,	// (0x00036039) cell_graphic_popup_pane_t2

0x3968,	// (0x000331ff) grid_highlight_pane_cp3

0x3b4d,	// (0x000333e4) list_gen_pane_ParamLimits

0x3b4d,	// (0x000333e4) list_gen_pane

0x3b7f,	// (0x00033416) scroll_pane

0xdbb3,	// (0x0003d44a) bg_list_pane_g1_ParamLimits

0xdbb3,	// (0x0003d44a) bg_list_pane_g1

0x6706,	// (0x00035f9d) bg_list_pane_g2_ParamLimits

0x6706,	// (0x00035f9d) bg_list_pane_g2

0x671b,	// (0x00035fb2) bg_list_pane_g3_ParamLimits

0x671b,	// (0x00035fb2) bg_list_pane_g3

0x672f,	// (0x00035fc6) bg_list_pane_g4_ParamLimits

0x672f,	// (0x00035fc6) bg_list_pane_g4

0xdbd0,	// (0x0003d467) bg_list_pane_g5_ParamLimits

0xdbd0,	// (0x0003d467) bg_list_pane_g5

0x0004,

0xf999,	// (0x0003f230) bg_list_pane_g_ParamLimits

0xf999,	// (0x0003f230) bg_list_pane_g

0xdb7b,	// (0x0003d412) list_double2_graphic_large_graphic_pane_ParamLimits

0xdb7b,	// (0x0003d412) list_double2_graphic_large_graphic_pane

0xdb7b,	// (0x0003d412) list_double2_graphic_pane_ParamLimits

0xdb7b,	// (0x0003d412) list_double2_graphic_pane

0xdb7b,	// (0x0003d412) list_double2_large_graphic_pane_ParamLimits

0xdb7b,	// (0x0003d412) list_double2_large_graphic_pane

0xdb7b,	// (0x0003d412) list_double2_pane_ParamLimits

0xdb7b,	// (0x0003d412) list_double2_pane

0xdb7b,	// (0x0003d412) list_double_graphic_heading_pane_ParamLimits

0xdb7b,	// (0x0003d412) list_double_graphic_heading_pane

0xdb7b,	// (0x0003d412) list_double_graphic_pane_ParamLimits

0xdb7b,	// (0x0003d412) list_double_graphic_pane

0xdb7b,	// (0x0003d412) list_double_heading_pane_ParamLimits

0xdb7b,	// (0x0003d412) list_double_heading_pane

0xdb7b,	// (0x0003d412) list_double_large_graphic_pane_ParamLimits

0xdb7b,	// (0x0003d412) list_double_large_graphic_pane

0xdb7b,	// (0x0003d412) list_double_number_pane_ParamLimits

0xdb7b,	// (0x0003d412) list_double_number_pane

0xdb7b,	// (0x0003d412) list_double_pane_ParamLimits

0xdb7b,	// (0x0003d412) list_double_pane

0xdb7b,	// (0x0003d412) list_double_time_pane_ParamLimits

0xdb7b,	// (0x0003d412) list_double_time_pane

0xdb7b,	// (0x0003d412) list_setting_number_pane_ParamLimits

0xdb7b,	// (0x0003d412) list_setting_number_pane

0xdb7b,	// (0x0003d412) list_setting_pane_ParamLimits

0xdb7b,	// (0x0003d412) list_setting_pane

0xdb8d,	// (0x0003d424) list_single_2graphic_pane_ParamLimits

0xdb8d,	// (0x0003d424) list_single_2graphic_pane

0xdb8d,	// (0x0003d424) list_single_graphic_heading_pane_ParamLimits

0xdb8d,	// (0x0003d424) list_single_graphic_heading_pane

0xdb8d,	// (0x0003d424) list_single_graphic_pane_ParamLimits

0xdb8d,	// (0x0003d424) list_single_graphic_pane

0xdb8d,	// (0x0003d424) list_single_heading_pane_ParamLimits

0xdb8d,	// (0x0003d424) list_single_heading_pane

0xdb8d,	// (0x0003d424) list_single_large_graphic_pane_ParamLimits

0xdb8d,	// (0x0003d424) list_single_large_graphic_pane

0xdb8d,	// (0x0003d424) list_single_number_heading_pane_ParamLimits

0xdb8d,	// (0x0003d424) list_single_number_heading_pane

0xdb8d,	// (0x0003d424) list_single_number_pane_ParamLimits

0xdb8d,	// (0x0003d424) list_single_number_pane

0xdb8d,	// (0x0003d424) list_single_pane_ParamLimits

0xdb8d,	// (0x0003d424) list_single_pane

0x2b5d,	// (0x000323f4) list_highlight_pane_cp1

0x153e,	// (0x00030dd5) list_single_pane_g1_ParamLimits

0x153e,	// (0x00030dd5) list_single_pane_g1

0x154a,	// (0x00030de1) list_single_pane_g2_ParamLimits

0x154a,	// (0x00030de1) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003ee5f) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003ee5f) list_single_pane_g

0x2f79,	// (0x00032810) list_single_pane_t1_ParamLimits

0x2f79,	// (0x00032810) list_single_pane_t1

0x153e,	// (0x00030dd5) list_single_number_pane_g1_ParamLimits

0x153e,	// (0x00030dd5) list_single_number_pane_g1

0x154a,	// (0x00030de1) list_single_number_pane_g2_ParamLimits

0x154a,	// (0x00030de1) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003ee5f) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003ee5f) list_single_number_pane_g

0x1556,	// (0x00030ded) list_single_number_pane_t1_ParamLimits

0x1556,	// (0x00030ded) list_single_number_pane_t1

0xc496,	// (0x0003bd2d) list_single_number_pane_t2_ParamLimits

0xc496,	// (0x0003bd2d) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0003f1f1) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0003f1f1) list_single_number_pane_t

0xb5c8,	// (0x0003ae5f) list_single_graphic_pane_g1_ParamLimits

0xb5c8,	// (0x0003ae5f) list_single_graphic_pane_g1

0x153e,	// (0x00030dd5) list_single_graphic_pane_g2_ParamLimits

0x153e,	// (0x00030dd5) list_single_graphic_pane_g2

0x154a,	// (0x00030de1) list_single_graphic_pane_g3_ParamLimits

0x154a,	// (0x00030de1) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003ee58) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003ee58) list_single_graphic_pane_g

0xb5d4,	// (0x0003ae6b) list_single_graphic_pane_t1_ParamLimits

0xb5d4,	// (0x0003ae6b) list_single_graphic_pane_t1

0x153e,	// (0x00030dd5) list_single_heading_pane_g1_ParamLimits

0x153e,	// (0x00030dd5) list_single_heading_pane_g1

0x154a,	// (0x00030de1) list_single_heading_pane_g2_ParamLimits

0x154a,	// (0x00030de1) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003ee5f) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003ee5f) list_single_heading_pane_g

0xb5ea,	// (0x0003ae81) list_single_heading_pane_t1_ParamLimits

0xb5ea,	// (0x0003ae81) list_single_heading_pane_t1

0xb600,	// (0x0003ae97) list_single_heading_pane_t2_ParamLimits

0xb600,	// (0x0003ae97) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003ee64) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003ee64) list_single_heading_pane_t

0x153e,	// (0x00030dd5) list_single_number_heading_pane_g1_ParamLimits

0x153e,	// (0x00030dd5) list_single_number_heading_pane_g1

0x154a,	// (0x00030de1) list_single_number_heading_pane_g2_ParamLimits

0x154a,	// (0x00030de1) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003ee5f) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003ee5f) list_single_number_heading_pane_g

0xb5ea,	// (0x0003ae81) list_single_number_heading_pane_t1_ParamLimits

0xb5ea,	// (0x0003ae81) list_single_number_heading_pane_t1

0xb612,	// (0x0003aea9) list_single_number_heading_pane_t2_ParamLimits

0xb612,	// (0x0003aea9) list_single_number_heading_pane_t2

0x2f53,	// (0x000327ea) list_single_number_heading_pane_t3_ParamLimits

0x2f53,	// (0x000327ea) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003ee69) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003ee69) list_single_number_heading_pane_t

0x1532,	// (0x00030dc9) list_single_graphic_heading_pane_g1_ParamLimits

0x1532,	// (0x00030dc9) list_single_graphic_heading_pane_g1

0xb624,	// (0x0003aebb) list_single_graphic_heading_pane_g4_ParamLimits

0xb624,	// (0x0003aebb) list_single_graphic_heading_pane_g4

0x154a,	// (0x00030de1) list_single_graphic_heading_pane_g5_ParamLimits

0x154a,	// (0x00030de1) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003ee70) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003ee70) list_single_graphic_heading_pane_g

0xb5ea,	// (0x0003ae81) list_single_graphic_heading_pane_t1_ParamLimits

0xb5ea,	// (0x0003ae81) list_single_graphic_heading_pane_t1

0xb635,	// (0x0003aecc) list_single_graphic_heading_pane_t2_ParamLimits

0xb635,	// (0x0003aecc) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003ee77) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003ee77) list_single_graphic_heading_pane_t

0x2f8f,	// (0x00032826) list_single_large_graphic_pane_g1_ParamLimits

0x2f8f,	// (0x00032826) list_single_large_graphic_pane_g1

0x153e,	// (0x00030dd5) list_single_large_graphic_pane_g2_ParamLimits

0x153e,	// (0x00030dd5) list_single_large_graphic_pane_g2

0x154a,	// (0x00030de1) list_single_large_graphic_pane_g3_ParamLimits

0x154a,	// (0x00030de1) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003ee7c) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003ee7c) list_single_large_graphic_pane_g

0x56f0,	// (0x00034f87) wait_border_pane_g2_copy1

0xb647,	// (0x0003aede) list_single_large_graphic_pane_g4_cp2

0x2f9b,	// (0x00032832) list_single_large_graphic_pane_t1_ParamLimits

0x2f9b,	// (0x00032832) list_single_large_graphic_pane_t1

0xb64f,	// (0x0003aee6) list_double_pane_g1_ParamLimits

0xb64f,	// (0x0003aee6) list_double_pane_g1

0xb65b,	// (0x0003aef2) list_double_pane_g2_ParamLimits

0xb65b,	// (0x0003aef2) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003ee83) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003ee83) list_double_pane_g

0xb667,	// (0x0003aefe) list_double_pane_t1_ParamLimits

0xb667,	// (0x0003aefe) list_double_pane_t1

0xb67d,	// (0x0003af14) list_double_pane_t2_ParamLimits

0xb67d,	// (0x0003af14) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003ee88) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003ee88) list_double_pane_t

0xb68f,	// (0x0003af26) list_double2_pane_g1_ParamLimits

0xb68f,	// (0x0003af26) list_double2_pane_g1

0xb6a0,	// (0x0003af37) list_double2_pane_g2_ParamLimits

0xb6a0,	// (0x0003af37) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003ee8d) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003ee8d) list_double2_pane_g

0xb6ac,	// (0x0003af43) list_double2_pane_t1_ParamLimits

0xb6ac,	// (0x0003af43) list_double2_pane_t1

0xb6c2,	// (0x0003af59) list_double2_pane_t2_ParamLimits

0xb6c2,	// (0x0003af59) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003ee92) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003ee92) list_double2_pane_t

0xb64f,	// (0x0003aee6) list_double_number_pane_g1_ParamLimits

0xb64f,	// (0x0003aee6) list_double_number_pane_g1

0xb65b,	// (0x0003aef2) list_double_number_pane_g2_ParamLimits

0xb65b,	// (0x0003aef2) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003ee83) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003ee83) list_double_number_pane_g

0xb6d4,	// (0x0003af6b) list_double_number_pane_t1_ParamLimits

0xb6d4,	// (0x0003af6b) list_double_number_pane_t1

0xb6e6,	// (0x0003af7d) list_double_number_pane_t2_ParamLimits

0xb6e6,	// (0x0003af7d) list_double_number_pane_t2

0xb6fc,	// (0x0003af93) list_double_number_pane_t3_ParamLimits

0xb6fc,	// (0x0003af93) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003ee97) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003ee97) list_double_number_pane_t

0xb70e,	// (0x0003afa5) list_double_graphic_pane_g1_ParamLimits

0xb70e,	// (0x0003afa5) list_double_graphic_pane_g1

0xb71a,	// (0x0003afb1) list_double_graphic_pane_g2_ParamLimits

0xb71a,	// (0x0003afb1) list_double_graphic_pane_g2

0xb729,	// (0x0003afc0) list_double_graphic_pane_g3_ParamLimits

0xb729,	// (0x0003afc0) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003ee9e) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003ee9e) list_double_graphic_pane_g

0xb741,	// (0x0003afd8) list_double_graphic_pane_t1_ParamLimits

0xb741,	// (0x0003afd8) list_double_graphic_pane_t1

0xb757,	// (0x0003afee) list_double_graphic_pane_t2_ParamLimits

0xb757,	// (0x0003afee) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003eea7) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003eea7) list_double_graphic_pane_t

0x04f8,	// (0x0002fd8f) list_double2_graphic_pane_g1_ParamLimits

0x04f8,	// (0x0002fd8f) list_double2_graphic_pane_g1

0x3238,	// (0x00032acf) list_double2_graphic_pane_g2_ParamLimits

0x3238,	// (0x00032acf) list_double2_graphic_pane_g2

0xb6a0,	// (0x0003af37) list_double2_graphic_pane_g3_ParamLimits

0xb6a0,	// (0x0003af37) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003eeac) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003eeac) list_double2_graphic_pane_g

0xb769,	// (0x0003b000) list_double2_graphic_pane_t1_ParamLimits

0xb769,	// (0x0003b000) list_double2_graphic_pane_t1

0xb77f,	// (0x0003b016) list_double2_graphic_pane_t2_ParamLimits

0xb77f,	// (0x0003b016) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003eeb3) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003eeb3) list_double2_graphic_pane_t

0xb791,	// (0x0003b028) list_double_large_graphic_pane_g1_ParamLimits

0xb791,	// (0x0003b028) list_double_large_graphic_pane_g1

0xb7b0,	// (0x0003b047) list_double_large_graphic_pane_g2_ParamLimits

0xb7b0,	// (0x0003b047) list_double_large_graphic_pane_g2

0xb65b,	// (0x0003aef2) list_double_large_graphic_pane_g3_ParamLimits

0xb65b,	// (0x0003aef2) list_double_large_graphic_pane_g3

0xb7c1,	// (0x0003b058) list_double_large_graphic_pane_g4_ParamLimits

0xb7c1,	// (0x0003b058) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003eeb8) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003eeb8) list_double_large_graphic_pane_g

0xb7d4,	// (0x0003b06b) list_double_large_graphic_pane_t1_ParamLimits

0xb7d4,	// (0x0003b06b) list_double_large_graphic_pane_t1

0xb7ed,	// (0x0003b084) list_double_large_graphic_pane_t2_ParamLimits

0xb7ed,	// (0x0003b084) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003eec3) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003eec3) list_double_large_graphic_pane_t

0xb7ff,	// (0x0003b096) list_double2_large_graphic_pane_g1_ParamLimits

0xb7ff,	// (0x0003b096) list_double2_large_graphic_pane_g1

0xb68f,	// (0x0003af26) list_double2_large_graphic_pane_g2_ParamLimits

0xb68f,	// (0x0003af26) list_double2_large_graphic_pane_g2

0xb6a0,	// (0x0003af37) list_double2_large_graphic_pane_g3_ParamLimits

0xb6a0,	// (0x0003af37) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003eec8) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003eec8) list_double2_large_graphic_pane_g

0xb80b,	// (0x0003b0a2) list_double2_large_graphic_pane_t1_ParamLimits

0xb80b,	// (0x0003b0a2) list_double2_large_graphic_pane_t1

0xb821,	// (0x0003b0b8) list_double2_large_graphic_pane_t2_ParamLimits

0xb821,	// (0x0003b0b8) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0003eecf) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0003eecf) list_double2_large_graphic_pane_t

0xb833,	// (0x0003b0ca) list_double_heading_pane_g1_ParamLimits

0xb833,	// (0x0003b0ca) list_double_heading_pane_g1

0x02cd,	// (0x0002fb64) list_double_heading_pane_g2_ParamLimits

0x02cd,	// (0x0002fb64) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003eed4) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003eed4) list_double_heading_pane_g

0xb844,	// (0x0003b0db) list_double_heading_pane_t1_ParamLimits

0xb844,	// (0x0003b0db) list_double_heading_pane_t1

0xb6c2,	// (0x0003af59) list_double_heading_pane_t2_ParamLimits

0xb6c2,	// (0x0003af59) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0003eed9) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0003eed9) list_double_heading_pane_t

0x04f8,	// (0x0002fd8f) list_double_graphic_heading_pane_g1_ParamLimits

0x04f8,	// (0x0002fd8f) list_double_graphic_heading_pane_g1

0xb833,	// (0x0003b0ca) list_double_graphic_heading_pane_g2_ParamLimits

0xb833,	// (0x0003b0ca) list_double_graphic_heading_pane_g2

0x02cd,	// (0x0002fb64) list_double_graphic_heading_pane_g3_ParamLimits

0x02cd,	// (0x0002fb64) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0003eede) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0003eede) list_double_graphic_heading_pane_g

0xb85a,	// (0x0003b0f1) list_double_graphic_heading_pane_t1_ParamLimits

0xb85a,	// (0x0003b0f1) list_double_graphic_heading_pane_t1

0xb77f,	// (0x0003b016) list_double_graphic_heading_pane_t2_ParamLimits

0xb77f,	// (0x0003b016) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003eee5) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003eee5) list_double_graphic_heading_pane_t

0xb7b0,	// (0x0003b047) list_double_time_pane_g1_ParamLimits

0xb7b0,	// (0x0003b047) list_double_time_pane_g1

0xb65b,	// (0x0003aef2) list_double_time_pane_g2_ParamLimits

0xb65b,	// (0x0003aef2) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0003eeea) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0003eeea) list_double_time_pane_g

0xb870,	// (0x0003b107) list_double_time_pane_t1_ParamLimits

0xb870,	// (0x0003b107) list_double_time_pane_t1

0xb886,	// (0x0003b11d) list_double_time_pane_t2_ParamLimits

0xb886,	// (0x0003b11d) list_double_time_pane_t2

0xb898,	// (0x0003b12f) list_double_time_pane_t3_ParamLimits

0xb898,	// (0x0003b12f) list_double_time_pane_t3

0xb8aa,	// (0x0003b141) list_double_time_pane_t4_ParamLimits

0xb8aa,	// (0x0003b141) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0003eeef) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0003eeef) list_double_time_pane_t

0xb8bc,	// (0x0003b153) list_setting_pane_g1_ParamLimits

0xb8bc,	// (0x0003b153) list_setting_pane_g1

0xb8c8,	// (0x0003b15f) list_setting_pane_g2_ParamLimits

0xb8c8,	// (0x0003b15f) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003eef8) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003eef8) list_setting_pane_g

0xb8d4,	// (0x0003b16b) list_setting_pane_t1_ParamLimits

0xb8d4,	// (0x0003b16b) list_setting_pane_t1

0xb8ee,	// (0x0003b185) list_setting_pane_t2_ParamLimits

0xb8ee,	// (0x0003b185) list_setting_pane_t2

0x0002,

0xf666,	// (0x0003eefd) list_setting_pane_t_ParamLimits

0xf666,	// (0x0003eefd) list_setting_pane_t

0xb92d,	// (0x0003b1c4) set_value_pane_cp_ParamLimits

0xb92d,	// (0x0003b1c4) set_value_pane_cp

0xb939,	// (0x0003b1d0) list_setting_number_pane_g1_ParamLimits

0xb939,	// (0x0003b1d0) list_setting_number_pane_g1

0xb945,	// (0x0003b1dc) list_setting_number_pane_g2_ParamLimits

0xb945,	// (0x0003b1dc) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0003ef04) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0003ef04) list_setting_number_pane_g

0xb951,	// (0x0003b1e8) list_setting_number_pane_t1_ParamLimits

0xb951,	// (0x0003b1e8) list_setting_number_pane_t1

0xb96a,	// (0x0003b201) list_setting_number_pane_t2_ParamLimits

0xb96a,	// (0x0003b201) list_setting_number_pane_t2

0xb984,	// (0x0003b21b) list_setting_number_pane_t3_ParamLimits

0xb984,	// (0x0003b21b) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003ef09) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003ef09) list_setting_number_pane_t

0xb92d,	// (0x0003b1c4) set_value_pane_ParamLimits

0xb92d,	// (0x0003b1c4) set_value_pane

0x3bb3,	// (0x0003344a) bg_set_opt_pane_ParamLimits

0x3bb3,	// (0x0003344a) bg_set_opt_pane

0x0659,	// (0x0002fef0) set_value_pane_t1

0x3bd4,	// (0x0003346b) slider_set_pane_cp3

0x3bdd,	// (0x00033474) volume_small_pane_cp

0x3be6,	// (0x0003347d) list_form_gen_pane

0x3bef,	// (0x00033486) scroll_pane_cp8

0xb9c7,	// (0x0003b25e) form_field_data_pane_ParamLimits

0xb9c7,	// (0x0003b25e) form_field_data_pane

0xb9de,	// (0x0003b275) form_field_data_wide_pane_ParamLimits

0xb9de,	// (0x0003b275) form_field_data_wide_pane

0xb9fe,	// (0x0003b295) form_field_popup_pane_ParamLimits

0xb9fe,	// (0x0003b295) form_field_popup_pane

0xba16,	// (0x0003b2ad) form_field_popup_wide_pane_ParamLimits

0xba16,	// (0x0003b2ad) form_field_popup_wide_pane

0x06ed,	// (0x0002ff84) form_field_slider_pane_ParamLimits

0x06ed,	// (0x0002ff84) form_field_slider_pane

0x0700,	// (0x0002ff97) form_field_slider_wide_pane_ParamLimits

0x0700,	// (0x0002ff97) form_field_slider_wide_pane

0x3c00,	// (0x00033497) data_form_pane

0xba37,	// (0x0003b2ce) form_field_data_pane_t1

0x3c0c,	// (0x000334a3) input_focus_pane

0x0735,	// (0x0002ffcc) data_form_wide_pane

0x0752,	// (0x0002ffe9) form_field_data_wide_pane_t1

0x397d,	// (0x00033214) input_focus_pane_cp6

0xba51,	// (0x0003b2e8) form_field_popup_pane_t1

0x3c0c,	// (0x000334a3) input_focus_pane_cp7

0x3c3a,	// (0x000334d1) list_form_pane

0x0794,	// (0x0003002b) form_field_popup_wide_pane_t1

0x3c0c,	// (0x000334a3) input_focus_pane_cp8

0x3c46,	// (0x000334dd) list_form_wide_pane

0xba73,	// (0x0003b30a) form_field_slider_pane_t1_ParamLimits

0xba73,	// (0x0003b30a) form_field_slider_pane_t1

0xba8b,	// (0x0003b322) form_field_slider_pane_t2_ParamLimits

0xba8b,	// (0x0003b322) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003ef19) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003ef19) form_field_slider_pane_t

0x3618,	// (0x00032eaf) input_focus_pane_cp9_ParamLimits

0x3618,	// (0x00032eaf) input_focus_pane_cp9

0xbaa0,	// (0x0003b337) slider_cont_pane_ParamLimits

0xbaa0,	// (0x0003b337) slider_cont_pane

0x3c55,	// (0x000334ec) form_field_slider_wide_pane_t1_ParamLimits

0x3c55,	// (0x000334ec) form_field_slider_wide_pane_t1

0x07f0,	// (0x00030087) form_field_slider_wide_pane_t2_ParamLimits

0x07f0,	// (0x00030087) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0003ef1e) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0003ef1e) form_field_slider_wide_pane_t

0x3618,	// (0x00032eaf) input_focus_pane_cp10_ParamLimits

0x3618,	// (0x00032eaf) input_focus_pane_cp10

0xbab4,	// (0x0003b34b) slider_cont_pane_cp1_ParamLimits

0xbab4,	// (0x0003b34b) slider_cont_pane_cp1

0xbac8,	// (0x0003b35f) slider_form_pane_cp

0x3c67,	// (0x000334fe) input_focus_pane_g1

0x3c6f,	// (0x00033506) input_focus_pane_g2

0x3c77,	// (0x0003350e) input_focus_pane_g3

0x3c7f,	// (0x00033516) input_focus_pane_g4

0x3c87,	// (0x0003351e) input_focus_pane_g5

0x3c8f,	// (0x00033526) input_focus_pane_g6

0x3c97,	// (0x0003352e) input_focus_pane_g7

0x3c9f,	// (0x00033536) input_focus_pane_g8

0x3ca7,	// (0x0003353e) input_focus_pane_g9

0x2b53,	// (0x000323ea) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0003ef23) input_focus_pane_g

0x56f9,	// (0x00034f90) wait_border_pane_g3_copy1

0xbad0,	// (0x0003b367) data_form_pane_t1

0x2b53,	// (0x000323ea) wait_anim_pane_g1_copy1

0xc4a8,	// (0x0003bd3f) data_form_wide_pane_t1

0xbaea,	// (0x0003b381) list_form_graphic_pane_cp_ParamLimits

0xbaea,	// (0x0003b381) list_form_graphic_pane_cp

0x6626,	// (0x00035ebd) slider_form_pane_g1

0x662f,	// (0x00035ec6) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0003f221) slider_form_pane_g

0xbaea,	// (0x0003b381) list_form_graphic_pane_ParamLimits

0xbaea,	// (0x0003b381) list_form_graphic_pane

0x086e,	// (0x00030105) list_form_graphic_pane_g1

0x0876,	// (0x0003010d) list_form_graphic_pane_t1_ParamLimits

0x0876,	// (0x0003010d) list_form_graphic_pane_t1

0x2c3d,	// (0x000324d4) list_highlight_pane_cp5_ParamLimits

0x2c3d,	// (0x000324d4) list_highlight_pane_cp5

0xbafc,	// (0x0003b393) find_pane_g1

0x3caf,	// (0x00033546) input_find_pane

0xbb05,	// (0x0003b39c) input_find_pane_g1_ParamLimits

0xbb05,	// (0x0003b39c) input_find_pane_g1

0xbb11,	// (0x0003b3a8) input_find_pane_t1_ParamLimits

0xbb11,	// (0x0003b3a8) input_find_pane_t1

0xbb26,	// (0x0003b3bd) input_find_pane_t2_ParamLimits

0xbb26,	// (0x0003b3bd) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003ef38) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003ef38) input_find_pane_t

0x3cb8,	// (0x0003354f) input_focus_pane_cp5_ParamLimits

0x3cb8,	// (0x0003354f) input_focus_pane_cp5

0x3cd2,	// (0x00033569) bg_popup_window_pane_cp2_ParamLimits

0x3cd2,	// (0x00033569) bg_popup_window_pane_cp2

0x3cdf,	// (0x00033576) listscroll_menu_pane_ParamLimits

0x3cdf,	// (0x00033576) listscroll_menu_pane

0xd066,	// (0x0003c8fd) popup_submenu_window_ParamLimits

0xd066,	// (0x0003c8fd) popup_submenu_window

0x3d17,	// (0x000335ae) find_popup_pane_g1

0x3d1f,	// (0x000335b6) input_popup_find_pane_cp

0x3cb8,	// (0x0003354f) input_focus_pane_cp4_ParamLimits

0x3cb8,	// (0x0003354f) input_focus_pane_cp4

0x3d35,	// (0x000335cc) input_popup_find_pane_t1_ParamLimits

0x3d35,	// (0x000335cc) input_popup_find_pane_t1

0x2b5d,	// (0x000323f4) bg_popup_sub_pane_cp

0x3d63,	// (0x000335fa) listscroll_popup_sub_pane

0x3d6b,	// (0x00033602) list_submenu_pane_ParamLimits

0x3d6b,	// (0x00033602) list_submenu_pane

0x3d7c,	// (0x00033613) scroll_pane_cp4

0x3d84,	// (0x0003361b) list_single_popup_submenu_pane_ParamLimits

0x3d84,	// (0x0003361b) list_single_popup_submenu_pane

0x3d98,	// (0x0003362f) list_single_popup_submenu_pane_g1

0x3da0,	// (0x00033637) list_single_popup_submenu_pane_t1_ParamLimits

0x3da0,	// (0x00033637) list_single_popup_submenu_pane_t1

0x3618,	// (0x00032eaf) bg_active_tab_pane_cp1_ParamLimits

0x3618,	// (0x00032eaf) bg_active_tab_pane_cp1

0x3db5,	// (0x0003364c) tabs_2_active_pane_g1

0xd0a0,	// (0x0003c937) tabs_2_active_pane_t1

0x3618,	// (0x00032eaf) bg_passive_tab_pane_cp1_ParamLimits

0x3618,	// (0x00032eaf) bg_passive_tab_pane_cp1

0x3db5,	// (0x0003364c) tabs_2_passive_pane_g1

0xd0a0,	// (0x0003c937) tabs_2_passive_pane_t1

0x2c3d,	// (0x000324d4) bg_active_tab_pane_cp4

0xd0b2,	// (0x0003c949) tabs_2_long_active_pane_t1

0x4be0,	// (0x00034477) bg_passive_tab_pane_cp4

0x1599,	// (0x00030e30) list_single_midp_graphic_pane_g4_ParamLimits

0x2c3d,	// (0x000324d4) bg_active_tab_pane_cp5

0xd0c5,	// (0x0003c95c) tabs_3_long_active_pane_t1

0x4be0,	// (0x00034477) bg_passive_tab_pane_cp5

0x1599,	// (0x00030e30) list_single_midp_graphic_pane_g4

0x2c3d,	// (0x000324d4) bg_popup_window_pane_cp13_ParamLimits

0x2c3d,	// (0x000324d4) bg_popup_window_pane_cp13

0x3e17,	// (0x000336ae) listscroll_popup_fast_pane_ParamLimits

0x3e17,	// (0x000336ae) listscroll_popup_fast_pane

0x3e26,	// (0x000336bd) grid_popup_fast_pane_ParamLimits

0x3e26,	// (0x000336bd) grid_popup_fast_pane

0x3e38,	// (0x000336cf) scroll_pane_cp9_ParamLimits

0x3e38,	// (0x000336cf) scroll_pane_cp9

0x7f41,	// (0x000377d8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7f41,	// (0x000377d8) list_single_graphic_hl_pane_t1_cp2

0x3e5c,	// (0x000336f3) input_focus_pane_cp20_ParamLimits

0x3e5c,	// (0x000336f3) input_focus_pane_cp20

0x3e6a,	// (0x00033701) query_popup_data_pane_t1_ParamLimits

0x3e6a,	// (0x00033701) query_popup_data_pane_t1

0x3e7d,	// (0x00033714) query_popup_data_pane_t2_ParamLimits

0x3e7d,	// (0x00033714) query_popup_data_pane_t2

0x3ec3,	// (0x0003375a) query_popup_data_pane_t3_ParamLimits

0x3ec3,	// (0x0003375a) query_popup_data_pane_t3

0x3f04,	// (0x0003379b) query_popup_data_pane_t4_ParamLimits

0x3f04,	// (0x0003379b) query_popup_data_pane_t4

0x3f40,	// (0x000337d7) query_popup_data_pane_t5_ParamLimits

0x3f40,	// (0x000337d7) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0003ef3d) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0003ef3d) query_popup_data_pane_t

0x3c67,	// (0x000334fe) bg_set_opt_pane_g1

0x3c6f,	// (0x00033506) bg_set_opt_pane_g2

0x3c77,	// (0x0003350e) bg_set_opt_pane_g3

0x3c7f,	// (0x00033516) bg_set_opt_pane_g4

0x3c87,	// (0x0003351e) bg_set_opt_pane_g5

0x3c8f,	// (0x00033526) bg_set_opt_pane_g6

0x3c97,	// (0x0003352e) bg_set_opt_pane_g7

0x3c9f,	// (0x00033536) bg_set_opt_pane_g8

0x3ca7,	// (0x0003353e) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0003ef48) bg_set_opt_pane_g

0x0bf1,	// (0x00030488) control_top_pane_stacon_ParamLimits

0x0bf1,	// (0x00030488) control_top_pane_stacon

0x0c44,	// (0x000304db) signal_pane_stacon_ParamLimits

0x0c44,	// (0x000304db) signal_pane_stacon

0x4530,	// (0x00033dc7) stacon_top_pane_g1_ParamLimits

0x4530,	// (0x00033dc7) stacon_top_pane_g1

0x0c69,	// (0x00030500) title_pane_stacon_ParamLimits

0x0c69,	// (0x00030500) title_pane_stacon

0x0c93,	// (0x0003052a) uni_indicator_pane_stacon_ParamLimits

0x0c93,	// (0x0003052a) uni_indicator_pane_stacon

0x0ca8,	// (0x0003053f) battery_pane_stacon_ParamLimits

0x0ca8,	// (0x0003053f) battery_pane_stacon

0x0cec,	// (0x00030583) control_bottom_pane_stacon_ParamLimits

0x0cec,	// (0x00030583) control_bottom_pane_stacon

0x0d0f,	// (0x000305a6) navi_pane_stacon_ParamLimits

0x0d0f,	// (0x000305a6) navi_pane_stacon

0x4552,	// (0x00033de9) stacon_bottom_pane_g1_ParamLimits

0x4552,	// (0x00033de9) stacon_bottom_pane_g1

0x08ca,	// (0x00030161) aid_levels_signal_lsc_ParamLimits

0x08ca,	// (0x00030161) aid_levels_signal_lsc

0x08e0,	// (0x00030177) signal_pane_stacon_g1_ParamLimits

0x08e0,	// (0x00030177) signal_pane_stacon_g1

0x08f4,	// (0x0003018b) signal_pane_stacon_g2_ParamLimits

0x08f4,	// (0x0003018b) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0003ef5b) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003ef5b) signal_pane_stacon_g

0x0929,	// (0x000301c0) title_pane_stacon_t1_ParamLimits

0x0929,	// (0x000301c0) title_pane_stacon_t1

0x3f84,	// (0x0003381b) uni_indicator_pane_stacon_g1

0x3f8e,	// (0x00033825) uni_indicator_pane_stacon_g2

0x3f98,	// (0x0003382f) uni_indicator_pane_stacon_g3

0x3fa2,	// (0x00033839) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0003ef67) uni_indicator_pane_stacon_g

0x094e,	// (0x000301e5) control_top_pane_stacon_g1

0x0956,	// (0x000301ed) control_top_pane_stacon_t1_ParamLimits

0x0956,	// (0x000301ed) control_top_pane_stacon_t1

0x098d,	// (0x00030224) aid_levels_battery_lsc_ParamLimits

0x098d,	// (0x00030224) aid_levels_battery_lsc

0x09a4,	// (0x0003023b) battery_pane_stacon_g1_ParamLimits

0x09a4,	// (0x0003023b) battery_pane_stacon_g1

0x09b7,	// (0x0003024e) battery_pane_stacon_g2_ParamLimits

0x09b7,	// (0x0003024e) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0003ef70) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0003ef70) battery_pane_stacon_g

0x09f5,	// (0x0003028c) navi_icon_pane_stacon

0x0a09,	// (0x000302a0) navi_navi_pane_stacon

0x09f5,	// (0x0003028c) navi_text_pane_stacon

0x094e,	// (0x000301e5) control_bottom_pane_stacon_g1

0x0a1d,	// (0x000302b4) control_bottom_pane_stacon_t1_ParamLimits

0x0a1d,	// (0x000302b4) control_bottom_pane_stacon_t1

0xd0d7,	// (0x0003c96e) grid_app_pane_ParamLimits

0xd0d7,	// (0x0003c96e) grid_app_pane

0xd10f,	// (0x0003c9a6) scroll_pane_cp15_ParamLimits

0xd10f,	// (0x0003c9a6) scroll_pane_cp15

0xd124,	// (0x0003c9bb) cell_app_pane_ParamLimits

0xd124,	// (0x0003c9bb) cell_app_pane

0xd169,	// (0x0003ca00) cell_app_pane_g1_ParamLimits

0xd169,	// (0x0003ca00) cell_app_pane_g1

0x4045,	// (0x000338dc) cell_app_pane_g2_ParamLimits

0x4045,	// (0x000338dc) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0003ef75) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0003ef75) cell_app_pane_g

0xd18d,	// (0x0003ca24) cell_app_pane_t1_ParamLimits

0xd18d,	// (0x0003ca24) cell_app_pane_t1

0x4068,	// (0x000338ff) grid_highlight_pane_ParamLimits

0x4068,	// (0x000338ff) grid_highlight_pane

0x3c67,	// (0x000334fe) cell_highlight_pane_g1

0x3c6f,	// (0x00033506) cell_highlight_pane_g2

0x3c77,	// (0x0003350e) cell_highlight_pane_g3

0x3c7f,	// (0x00033516) cell_highlight_pane_g4

0x3c87,	// (0x0003351e) cell_highlight_pane_g5

0x3c8f,	// (0x00033526) cell_highlight_pane_g6

0x3c97,	// (0x0003352e) cell_highlight_pane_g7

0x3c9f,	// (0x00033536) cell_highlight_pane_g8

0x3ca7,	// (0x0003353e) cell_highlight_pane_g9

0x2b53,	// (0x000323ea) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0003ef23) cell_highlight_pane_g

0x4079,	// (0x00033910) bg_scroll_pane

0x0a67,	// (0x000302fe) scroll_handle_pane

0x40c0,	// (0x00033957) scroll_bg_pane_g1

0x40d5,	// (0x0003396c) scroll_bg_pane_g2

0x40ed,	// (0x00033984) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0003ef7a) scroll_bg_pane_g

0x4102,	// (0x00033999) scroll_handle_focus_pane_ParamLimits

0x4102,	// (0x00033999) scroll_handle_focus_pane

0x40c0,	// (0x00033957) scroll_handle_pane_g1

0x410f,	// (0x000339a6) scroll_handle_pane_g2

0x40ed,	// (0x00033984) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0003ef81) scroll_handle_pane_g

0x3cb8,	// (0x0003354f) bg_popup_sub_pane_cp21_ParamLimits

0x3cb8,	// (0x0003354f) bg_popup_sub_pane_cp21

0x4123,	// (0x000339ba) popup_fep_japan_predictive_window_t1_ParamLimits

0x4123,	// (0x000339ba) popup_fep_japan_predictive_window_t1

0x413d,	// (0x000339d4) popup_fep_japan_predictive_window_t2_ParamLimits

0x413d,	// (0x000339d4) popup_fep_japan_predictive_window_t2

0x4170,	// (0x00033a07) popup_fep_japan_predictive_window_t3_ParamLimits

0x4170,	// (0x00033a07) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0003ef88) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0003ef88) popup_fep_japan_predictive_window_t

0x2b5d,	// (0x000323f4) bg_popup_sub_pane_cp23

0x41a7,	// (0x00033a3e) listscroll_japin_cand_pane

0x41af,	// (0x00033a46) popup_fep_japan_candidate_window_t1

0x41bd,	// (0x00033a54) candidate_pane_ParamLimits

0x41bd,	// (0x00033a54) candidate_pane

0x41cf,	// (0x00033a66) scroll_pane_cp30

0x41d7,	// (0x00033a6e) list_single_popup_jap_candidate_pane_ParamLimits

0x41d7,	// (0x00033a6e) list_single_popup_jap_candidate_pane

0x2b5d,	// (0x000323f4) list_highlight_pane_cp30

0x41ec,	// (0x00033a83) list_single_popup_jap_candidate_pane_t1

0x41fb,	// (0x00033a92) level_1_signal

0x420d,	// (0x00033aa4) level_2_signal

0x4220,	// (0x00033ab7) level_3_signal

0x4233,	// (0x00033aca) level_4_signal

0x4246,	// (0x00033add) level_5_signal

0x4259,	// (0x00033af0) level_6_signal

0x426c,	// (0x00033b03) level_7_signal

0x41fb,	// (0x00033a92) level_1_battery

0x420d,	// (0x00033aa4) level_2_battery

0x4220,	// (0x00033ab7) level_3_battery

0x4233,	// (0x00033aca) level_4_battery

0x4246,	// (0x00033add) level_5_battery

0x4259,	// (0x00033af0) level_6_battery

0x426c,	// (0x00033b03) level_7_battery

0x4297,	// (0x00033b2e) list_menu_pane_ParamLimits

0x4297,	// (0x00033b2e) list_menu_pane

0x42ad,	// (0x00033b44) scroll_pane_cp25_ParamLimits

0x42ad,	// (0x00033b44) scroll_pane_cp25

0x42c6,	// (0x00033b5d) list_double2_graphic_pane_cp2_ParamLimits

0x42c6,	// (0x00033b5d) list_double2_graphic_pane_cp2

0x42c6,	// (0x00033b5d) list_double2_large_graphic_pane_cp2_ParamLimits

0x42c6,	// (0x00033b5d) list_double2_large_graphic_pane_cp2

0x42c6,	// (0x00033b5d) list_double2_pane_cp2_ParamLimits

0x42c6,	// (0x00033b5d) list_double2_pane_cp2

0x42c6,	// (0x00033b5d) list_double_graphic_pane_cp2_ParamLimits

0x42c6,	// (0x00033b5d) list_double_graphic_pane_cp2

0x42c6,	// (0x00033b5d) list_double_large_graphic_pane_cp2_ParamLimits

0x42c6,	// (0x00033b5d) list_double_large_graphic_pane_cp2

0x42c6,	// (0x00033b5d) list_double_number_pane_cp2_ParamLimits

0x42c6,	// (0x00033b5d) list_double_number_pane_cp2

0x42c6,	// (0x00033b5d) list_double_pane_cp2_ParamLimits

0x42c6,	// (0x00033b5d) list_double_pane_cp2

0xd1a4,	// (0x0003ca3b) list_single_2graphic_pane_cp2_ParamLimits

0xd1a4,	// (0x0003ca3b) list_single_2graphic_pane_cp2

0xd1a4,	// (0x0003ca3b) list_single_graphic_heading_pane_cp2_ParamLimits

0xd1a4,	// (0x0003ca3b) list_single_graphic_heading_pane_cp2

0xd1a4,	// (0x0003ca3b) list_single_graphic_pane_cp2_ParamLimits

0xd1a4,	// (0x0003ca3b) list_single_graphic_pane_cp2

0xd1a4,	// (0x0003ca3b) list_single_heading_pane_cp2_ParamLimits

0xd1a4,	// (0x0003ca3b) list_single_heading_pane_cp2

0x4303,	// (0x00033b9a) list_single_large_graphic_pane_cp2_ParamLimits

0x4303,	// (0x00033b9a) list_single_large_graphic_pane_cp2

0xd1a4,	// (0x0003ca3b) list_single_number_heading_pane_cp2_ParamLimits

0xd1a4,	// (0x0003ca3b) list_single_number_heading_pane_cp2

0xd1a4,	// (0x0003ca3b) list_single_number_pane_cp2_ParamLimits

0xd1a4,	// (0x0003ca3b) list_single_number_pane_cp2

0xd1a4,	// (0x0003ca3b) list_single_pane_cp2_ParamLimits

0xd1a4,	// (0x0003ca3b) list_single_pane_cp2

0x437f,	// (0x00033c16) bg_popup_sub_pane_cp22

0x0b19,	// (0x000303b0) popup_side_volume_key_window_g1

0x0b43,	// (0x000303da) popup_side_volume_key_window_t1

0x0b5f,	// (0x000303f6) volume_small_pane_cp1

0x3618,	// (0x00032eaf) bg_popup_sub_pane_cp24_ParamLimits

0x3618,	// (0x00032eaf) bg_popup_sub_pane_cp24

0x4395,	// (0x00033c2c) fep_china_uni_candidate_pane_ParamLimits

0x4395,	// (0x00033c2c) fep_china_uni_candidate_pane

0x43a9,	// (0x00033c40) fep_china_uni_entry_pane

0x43b9,	// (0x00033c50) popup_fep_china_uni_window_g1

0x43d5,	// (0x00033c6c) fep_china_uni_entry_pane_g1

0x43dd,	// (0x00033c74) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0003efb9) fep_china_uni_entry_pane_g

0x43e5,	// (0x00033c7c) fep_entry_item_pane

0x43ef,	// (0x00033c86) fep_candidate_item_pane

0x43f7,	// (0x00033c8e) fep_china_uni_candidate_pane_g1

0x43ff,	// (0x00033c96) fep_china_uni_candidate_pane_g2

0x4407,	// (0x00033c9e) fep_china_uni_candidate_pane_g3

0x440f,	// (0x00033ca6) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0003efbe) fep_china_uni_candidate_pane_g

0x2b53,	// (0x000323ea) fep_entry_item_pane_g1

0x4417,	// (0x00033cae) fep_entry_item_pane_t1_ParamLimits

0x4417,	// (0x00033cae) fep_entry_item_pane_t1

0x442d,	// (0x00033cc4) fep_candidate_item_pane_t1_ParamLimits

0x442d,	// (0x00033cc4) fep_candidate_item_pane_t1

0x4442,	// (0x00033cd9) fep_candidate_item_pane_t2_ParamLimits

0x4442,	// (0x00033cd9) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003efc7) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003efc7) fep_candidate_item_pane_t

0x2c3d,	// (0x000324d4) list_highlight_pane_cp31_ParamLimits

0x2c3d,	// (0x000324d4) list_highlight_pane_cp31

0x4454,	// (0x00033ceb) level_1_signal_lsc

0x445d,	// (0x00033cf4) level_2_signal_lsc

0x4466,	// (0x00033cfd) level_3_signal_lsc

0x446f,	// (0x00033d06) level_4_signal_lsc

0x4478,	// (0x00033d0f) level_5_signal_lsc

0x4481,	// (0x00033d18) level_6_signal_lsc

0x448a,	// (0x00033d21) level_7_signal_lsc

0x448a,	// (0x00033d21) level_1_battery_lsc

0x4493,	// (0x00033d2a) level_2_battery_lsc

0x449c,	// (0x00033d33) level_3_battery_lsc

0x44a5,	// (0x00033d3c) level_4_battery_lsc

0x44ae,	// (0x00033d45) level_5_battery_lsc

0x44b7,	// (0x00033d4e) level_6_battery_lsc

0x4454,	// (0x00033ceb) level_7_battery_lsc

0x44c0,	// (0x00033d57) scroll_handle_focus_pane_g1

0x44c9,	// (0x00033d60) scroll_handle_focus_pane_g2

0x44d2,	// (0x00033d69) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0003efcc) scroll_handle_focus_pane_g

0xbb44,	// (0x0003b3db) list_single_2graphic_pane_g1_ParamLimits

0xbb44,	// (0x0003b3db) list_single_2graphic_pane_g1

0xb624,	// (0x0003aebb) list_single_2graphic_pane_g2_ParamLimits

0xb624,	// (0x0003aebb) list_single_2graphic_pane_g2

0x154a,	// (0x00030de1) list_single_2graphic_pane_g3_ParamLimits

0x154a,	// (0x00030de1) list_single_2graphic_pane_g3

0xbb50,	// (0x0003b3e7) list_single_2graphic_pane_g4_ParamLimits

0xbb50,	// (0x0003b3e7) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0003efd3) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0003efd3) list_single_2graphic_pane_g

0xbb5c,	// (0x0003b3f3) list_single_2graphic_pane_t1_ParamLimits

0xbb5c,	// (0x0003b3f3) list_single_2graphic_pane_t1

0xbb8a,	// (0x0003b421) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbb8a,	// (0x0003b421) list_double2_graphic_large_graphic_pane_g1

0xb68f,	// (0x0003af26) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb68f,	// (0x0003af26) list_double2_graphic_large_graphic_pane_g2

0xb6a0,	// (0x0003af37) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb6a0,	// (0x0003af37) list_double2_graphic_large_graphic_pane_g3

0xbb9c,	// (0x0003b433) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbb9c,	// (0x0003b433) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0003efdc) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0003efdc) list_double2_graphic_large_graphic_pane_g

0xbba8,	// (0x0003b43f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbba8,	// (0x0003b43f) list_double2_graphic_large_graphic_pane_t1

0xbbbe,	// (0x0003b455) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbbbe,	// (0x0003b455) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003efe5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003efe5) list_double2_graphic_large_graphic_pane_t

0x461a,	// (0x00033eb1) popup_fast_swap_window_ParamLimits

0x461a,	// (0x00033eb1) popup_fast_swap_window

0x4636,	// (0x00033ecd) popup_side_volume_key_window

0x4652,	// (0x00033ee9) stacon_top_pane

0x465c,	// (0x00033ef3) status_pane_ParamLimits

0x465c,	// (0x00033ef3) status_pane

0xd261,	// (0x0003caf8) status_small_pane

0x2b5d,	// (0x000323f4) control_pane

0x2b5d,	// (0x000323f4) stacon_bottom_pane

0x3bef,	// (0x00033486) scroll_pane_cp121

0x3be6,	// (0x0003347d) set_content_pane

0x44db,	// (0x00033d72) bg_active_tab_pane_g1_cp1

0x44e4,	// (0x00033d7b) bg_active_tab_pane_g2_cp1

0x44ed,	// (0x00033d84) bg_active_tab_pane_g3_cp1

0x44db,	// (0x00033d72) bg_passive_tab_pane_g1_cp1

0x44e4,	// (0x00033d7b) bg_passive_tab_pane_g2_cp1

0x44ed,	// (0x00033d84) bg_passive_tab_pane_g3_cp1

0x44f6,	// (0x00033d8d) bg_active_tab_pane_g1_cp2

0x44e4,	// (0x00033d7b) bg_active_tab_pane_g2_cp2

0x44ff,	// (0x00033d96) bg_active_tab_pane_g3_cp2

0x44f6,	// (0x00033d8d) bg_passive_tab_pane_g1_cp2

0x44e4,	// (0x00033d7b) bg_passive_tab_pane_g2_cp2

0x44ff,	// (0x00033d96) bg_passive_tab_pane_g3_cp2

0x4508,	// (0x00033d9f) bg_active_tab_pane_g1_cp3

0x44e4,	// (0x00033d7b) bg_active_tab_pane_g2_cp3

0x4511,	// (0x00033da8) bg_active_tab_pane_g3_cp3

0x4508,	// (0x00033d9f) bg_passive_tab_pane_g1_cp3

0x44e4,	// (0x00033d7b) bg_passive_tab_pane_g2_cp3

0x4511,	// (0x00033da8) bg_passive_tab_pane_g3_cp3

0x451a,	// (0x00033db1) bg_active_tab_pane_g1_cp4

0x44e4,	// (0x00033d7b) bg_active_tab_pane_g2_cp4

0x4525,	// (0x00033dbc) bg_active_tab_pane_g3_cp4

0x451a,	// (0x00033db1) bg_passive_tab_pane_g1_cp4

0x44e4,	// (0x00033d7b) bg_passive_tab_pane_g2_cp4

0x4525,	// (0x00033dbc) bg_passive_tab_pane_g3_cp4

0x456e,	// (0x00033e05) bg_active_tab_pane_g1_cp5

0x44e4,	// (0x00033d7b) bg_active_tab_pane_g2_cp5

0x4577,	// (0x00033e0e) bg_active_tab_pane_g3_cp5

0x456e,	// (0x00033e05) bg_passive_tab_pane_g1_cp5

0x44e4,	// (0x00033d7b) bg_passive_tab_pane_g2_cp5

0x4577,	// (0x00033e0e) bg_passive_tab_pane_g3_cp5

0x6c23,	// (0x000364ba) list_set_graphic_pane_ParamLimits

0x6c23,	// (0x000364ba) list_set_graphic_pane

0x2b5d,	// (0x000323f4) bg_set_opt_pane_cp4

0xd231,	// (0x0003cac8) list_set_graphic_pane_g1_ParamLimits

0xd231,	// (0x0003cac8) list_set_graphic_pane_g1

0xd23d,	// (0x0003cad4) list_set_graphic_pane_g2_ParamLimits

0xd23d,	// (0x0003cad4) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003efea) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003efea) list_set_graphic_pane_g

0x0009,

0xfabc,	// (0x0003f353) volume_small_pane_cp_g

0x45cd,	// (0x00033e64) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x45cd,	// (0x00033e64) list_double2_large_graphic_pane_g1_cp2

0x45d9,	// (0x00033e70) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x45d9,	// (0x00033e70) list_double2_large_graphic_pane_g2_cp2

0x45ea,	// (0x00033e81) list_double2_large_graphic_pane_g3_cp2

0x45f2,	// (0x00033e89) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x45f2,	// (0x00033e89) list_double2_large_graphic_pane_t1_cp2

0x4608,	// (0x00033e9f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4608,	// (0x00033e9f) list_double2_large_graphic_pane_t2_cp2

0x61d8,	// (0x00035a6f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x61d8,	// (0x00035a6f) list_double_large_graphic_pane_g1_cp2

0x61e9,	// (0x00035a80) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x61e9,	// (0x00035a80) list_double_large_graphic_pane_g2_cp2

0x4783,	// (0x0003401a) list_double_large_graphic_pane_g3_cp2

0x61fa,	// (0x00035a91) list_double_large_graphic_pane_g4_cp

0x6202,	// (0x00035a99) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6202,	// (0x00035a99) list_double_large_graphic_pane_t1_cp2

0x6219,	// (0x00035ab0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6219,	// (0x00035ab0) list_double_large_graphic_pane_t2_cp2

0x4675,	// (0x00033f0c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4675,	// (0x00033f0c) list_double2_graphic_pane_g1_cp2

0x4683,	// (0x00033f1a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4683,	// (0x00033f1a) list_double2_graphic_pane_g2_cp2

0x4694,	// (0x00033f2b) list_double2_graphic_pane_g3_cp2

0x469e,	// (0x00033f35) list_double2_graphic_pane_t1_cp2_ParamLimits

0x469e,	// (0x00033f35) list_double2_graphic_pane_t1_cp2

0x46b4,	// (0x00033f4b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x46b4,	// (0x00033f4b) list_double2_graphic_pane_t2_cp2

0x46c6,	// (0x00033f5d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x46c6,	// (0x00033f5d) list_single_number_heading_pane_g1_cp2

0x46d2,	// (0x00033f69) list_single_number_heading_pane_g2_cp2

0x46da,	// (0x00033f71) list_single_number_heading_pane_t1_cp2_ParamLimits

0x46da,	// (0x00033f71) list_single_number_heading_pane_t1_cp2

0x46f0,	// (0x00033f87) list_single_number_heading_pane_t2_cp2_ParamLimits

0x46f0,	// (0x00033f87) list_single_number_heading_pane_t2_cp2

0x4702,	// (0x00033f99) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4702,	// (0x00033f99) list_single_number_heading_pane_t3_cp2

0x46c6,	// (0x00033f5d) list_single_heading_pane_g1_cp2_ParamLimits

0x46c6,	// (0x00033f5d) list_single_heading_pane_g1_cp2

0x46d2,	// (0x00033f69) list_single_heading_pane_g2_cp2

0x46da,	// (0x00033f71) list_single_heading_pane_t1_cp2_ParamLimits

0x46da,	// (0x00033f71) list_single_heading_pane_t1_cp2

0x5fd4,	// (0x0003586b) list_single_heading_pane_t2_cp2_ParamLimits

0x5fd4,	// (0x0003586b) list_single_heading_pane_t2_cp2

0x5f1c,	// (0x000357b3) list_double_graphic_pane_g1_cp2_ParamLimits

0x5f1c,	// (0x000357b3) list_double_graphic_pane_g1_cp2

0x5f28,	// (0x000357bf) list_double_graphic_pane_g2_cp2_ParamLimits

0x5f28,	// (0x000357bf) list_double_graphic_pane_g2_cp2

0x5f37,	// (0x000357ce) list_double_graphic_pane_g3_cp2

0x5f3f,	// (0x000357d6) list_double_graphic_pane_t1_cp2_ParamLimits

0x5f3f,	// (0x000357d6) list_double_graphic_pane_t1_cp2

0x5f55,	// (0x000357ec) list_double_graphic_pane_t2_cp2_ParamLimits

0x5f55,	// (0x000357ec) list_double_graphic_pane_t2_cp2

0x4777,	// (0x0003400e) list_double_number_pane_g1_cp2_ParamLimits

0x4777,	// (0x0003400e) list_double_number_pane_g1_cp2

0x4783,	// (0x0003401a) list_double_number_pane_g2_cp2

0x5ee0,	// (0x00035777) list_double_number_pane_t1_cp2_ParamLimits

0x5ee0,	// (0x00035777) list_double_number_pane_t1_cp2

0x5ef4,	// (0x0003578b) list_double_number_pane_t2_cp2_ParamLimits

0x5ef4,	// (0x0003578b) list_double_number_pane_t2_cp2

0x5f0a,	// (0x000357a1) list_double_number_pane_t3_cp2_ParamLimits

0x5f0a,	// (0x000357a1) list_double_number_pane_t3_cp2

0x5dc9,	// (0x00035660) list_single_graphic_pane_g1_cp2_ParamLimits

0x5dc9,	// (0x00035660) list_single_graphic_pane_g1_cp2

0x47db,	// (0x00034072) list_single_graphic_pane_g2_cp2_ParamLimits

0x47db,	// (0x00034072) list_single_graphic_pane_g2_cp2

0x47e7,	// (0x0003407e) list_single_graphic_pane_g3_cp2

0x5d9f,	// (0x00035636) list_single_graphic_pane_t1_cp2_ParamLimits

0x5d9f,	// (0x00035636) list_single_graphic_pane_t1_cp2

0x47db,	// (0x00034072) list_single_number_pane_g1_cp2_ParamLimits

0x47db,	// (0x00034072) list_single_number_pane_g1_cp2

0x47e7,	// (0x0003407e) list_single_number_pane_g2_cp2

0x5d9f,	// (0x00035636) list_single_number_pane_t1_cp2_ParamLimits

0x5d9f,	// (0x00035636) list_single_number_pane_t1_cp2

0x5db5,	// (0x0003564c) list_single_number_pane_t2_cp2_ParamLimits

0x5db5,	// (0x0003564c) list_single_number_pane_t2_cp2

0x45d9,	// (0x00033e70) list_double2_pane_g1_cp2_ParamLimits

0x45d9,	// (0x00033e70) list_double2_pane_g1_cp2

0x45ea,	// (0x00033e81) list_double2_pane_g2_cp2

0x474f,	// (0x00033fe6) list_double2_pane_t1_cp2_ParamLimits

0x474f,	// (0x00033fe6) list_double2_pane_t1_cp2

0x4765,	// (0x00033ffc) list_double2_pane_t2_cp2_ParamLimits

0x4765,	// (0x00033ffc) list_double2_pane_t2_cp2

0x4777,	// (0x0003400e) list_double_pane_g1_cp2_ParamLimits

0x4777,	// (0x0003400e) list_double_pane_g1_cp2

0x4783,	// (0x0003401a) list_double_pane_g2_cp2

0x478b,	// (0x00034022) list_double_pane_t1_cp2_ParamLimits

0x478b,	// (0x00034022) list_double_pane_t1_cp2

0x47a1,	// (0x00034038) list_double_pane_t2_cp2_ParamLimits

0x47a1,	// (0x00034038) list_double_pane_t2_cp2

0x47cb,	// (0x00034062) list_single_pane_cp2_g3

0x47db,	// (0x00034072) list_single_pane_g1_cp2_ParamLimits

0x47db,	// (0x00034072) list_single_pane_g1_cp2

0x47e7,	// (0x0003407e) list_single_pane_g2_cp2

0x47ef,	// (0x00034086) list_single_pane_t1_cp2_ParamLimits

0x47ef,	// (0x00034086) list_single_pane_t1_cp2

0x4807,	// (0x0003409e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4807,	// (0x0003409e) list_single_large_graphic_pane_g1_cp2

0x4813,	// (0x000340aa) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4813,	// (0x000340aa) list_single_large_graphic_pane_g2_cp2

0x481f,	// (0x000340b6) list_single_large_graphic_pane_g3_cp2

0x4827,	// (0x000340be) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4827,	// (0x000340be) list_single_large_graphic_pane_g4_cp1

0x4841,	// (0x000340d8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4841,	// (0x000340d8) list_single_large_graphic_pane_t1_cp2

0x5d6b,	// (0x00035602) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5d6b,	// (0x00035602) list_single_graphic_heading_pane_g1_cp2

0x5d38,	// (0x000355cf) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5d38,	// (0x000355cf) list_single_graphic_heading_pane_g4_cp2

0x47e7,	// (0x0003407e) list_single_graphic_heading_pane_g5_cp2

0x5d77,	// (0x0003560e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5d77,	// (0x0003560e) list_single_graphic_heading_pane_t1_cp2

0x5d8d,	// (0x00035624) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5d8d,	// (0x00035624) list_single_graphic_heading_pane_t2_cp2

0x5d2c,	// (0x000355c3) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5d2c,	// (0x000355c3) list_single_2graphic_pane_g1_cp2

0x5d38,	// (0x000355cf) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5d38,	// (0x000355cf) list_single_2graphic_pane_g2_cp2

0x47e7,	// (0x0003407e) list_single_2graphic_pane_g3_cp2

0x5d49,	// (0x000355e0) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5d49,	// (0x000355e0) list_single_2graphic_pane_g4_cp2

0x5d55,	// (0x000355ec) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5d55,	// (0x000355ec) list_single_2graphic_pane_t1_cp2

0x2b53,	// (0x000323ea) list_highlight_pane_g10_cp1

0x5904,	// (0x0003519b) list_highlight_pane_g1_cp1

0x590c,	// (0x000351a3) list_highlight_pane_g2_cp1

0x5914,	// (0x000351ab) list_highlight_pane_g3_cp1

0x591c,	// (0x000351b3) list_highlight_pane_g4_cp1

0x5924,	// (0x000351bb) list_highlight_pane_g5_cp1

0x592c,	// (0x000351c3) list_highlight_pane_g6_cp1

0x5934,	// (0x000351cb) list_highlight_pane_g7_cp1

0x593c,	// (0x000351d3) list_highlight_pane_g8_cp1

0x5944,	// (0x000351db) list_highlight_pane_g9_cp1

0xd8a3,	// (0x0003d13a) form_field_slider_pane_t3

0xd8b1,	// (0x0003d148) form_field_slider_pane_t4

0x5840,	// (0x000350d7) slider_form_pane_ParamLimits

0x5840,	// (0x000350d7) slider_form_pane

0x2b5d,	// (0x000323f4) control_abbreviations

0x2b5d,	// (0x000323f4) control_conventions

0x2b5d,	// (0x000323f4) control_definitions

0x2b5d,	// (0x000323f4) format_table_attribute

0x601e,	// (0x000358b5) bg_popup_preview_window_pane_g9

0x2b5d,	// (0x000323f4) format_table_data2

0x2b5d,	// (0x000323f4) format_table_data3

0x2b5d,	// (0x000323f4) format_table_data_example

0x0008,

0x2b5d,	// (0x000323f4) intro_purpose

0xf8ea,	// (0x0003f181) bg_popup_preview_window_pane_g

0x2b5d,	// (0x000323f4) texts_category

0x2b5d,	// (0x000323f4) texts_graphics

0x4857,	// (0x000340ee) text_digital

0x4866,	// (0x000340fd) text_primary

0x4875,	// (0x0003410c) text_primary_small

0x4884,	// (0x0003411b) text_secondary

0x4893,	// (0x0003412a) text_title

0x6765,	// (0x00035ffc) bg_passive_tab_pane_g1_cp3_srt

0x44e4,	// (0x00033d7b) bg_passive_tab_pane_g2_cp3_srt

0x676e,	// (0x00036005) bg_passive_tab_pane_g3_cp3_srt

0x3618,	// (0x00032eaf) bg_active_tab_pane_cp3_srt_ParamLimits

0x3618,	// (0x00032eaf) bg_active_tab_pane_cp3_srt

0x6777,	// (0x0003600e) tabs_4_active_pane_srt_g1

0xdbe6,	// (0x0003d47d) tabs_4_active_pane_srt_t1_ParamLimits

0xdbe6,	// (0x0003d47d) tabs_4_active_pane_srt_t1

0x6765,	// (0x00035ffc) bg_active_tab_pane_g1_cp3_copy1

0x44e4,	// (0x00033d7b) bg_active_tab_pane_g2_cp3_copy1

0x676e,	// (0x00036005) bg_active_tab_pane_g3_cp3_copy1

0x2c3d,	// (0x000324d4) tabs_2_long_active_pane_srt_ParamLimits

0x2c3d,	// (0x000324d4) tabs_2_long_active_pane_srt

0x2c3d,	// (0x000324d4) tabs_2_long_passive_pane_srt_ParamLimits

0x2c3d,	// (0x000324d4) tabs_2_long_passive_pane_srt

0x4be0,	// (0x00034477) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4be0,	// (0x00034477) bg_passive_tab_pane_cp4_srt

0x6459,	// (0x00035cf0) bg_passive_tab_pane_g1_cp4_srt

0x44e4,	// (0x00033d7b) bg_passive_tab_pane_g2_cp4_srt

0x6462,	// (0x00035cf9) bg_passive_tab_pane_g3_cp4_srt

0x2c3d,	// (0x000324d4) bg_active_tab_pane_cp4_srt_ParamLimits

0x2c3d,	// (0x000324d4) bg_active_tab_pane_cp4_srt

0xda10,	// (0x0003d2a7) tabs_2_long_active_pane_srt_t1_ParamLimits

0xda10,	// (0x0003d2a7) tabs_2_long_active_pane_srt_t1

0x6459,	// (0x00035cf0) bg_active_tab_pane_g1_cp4_srt

0x44e4,	// (0x00033d7b) bg_active_tab_pane_g2_cp4_srt

0x6462,	// (0x00035cf9) bg_active_tab_pane_g3_cp4_srt

0x3618,	// (0x00032eaf) tabs_3_long_active_pane_srt_ParamLimits

0x3618,	// (0x00032eaf) tabs_3_long_active_pane_srt

0x3618,	// (0x00032eaf) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3618,	// (0x00032eaf) tabs_3_long_passive_pane_cp_srt

0x3618,	// (0x00032eaf) tabs_3_long_passive_pane_srt_ParamLimits

0x3618,	// (0x00032eaf) tabs_3_long_passive_pane_srt

0x4be0,	// (0x00034477) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4be0,	// (0x00034477) bg_passive_tab_pane_cp5_srt

0x456e,	// (0x00033e05) bg_passive_tab_pane_g1_cp5_srt

0x44e4,	// (0x00033d7b) bg_passive_tab_pane_g2_cp5_srt

0x4577,	// (0x00033e0e) bg_passive_tab_pane_g3_cp5_srt

0x2c3d,	// (0x000324d4) bg_active_tab_pane_cp5_srt_ParamLimits

0x2c3d,	// (0x000324d4) bg_active_tab_pane_cp5_srt

0xd9fa,	// (0x0003d291) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd9fa,	// (0x0003d291) tabs_3_long_active_pane_srt_t1

0x456e,	// (0x00033e05) bg_active_tab_pane_g1_cp5_srt

0x44e4,	// (0x00033d7b) bg_active_tab_pane_g2_cp5_srt

0x4577,	// (0x00033e0e) bg_active_tab_pane_g3_cp5_srt

0x6439,	// (0x00035cd0) navi_text_pane_srt_t1

0x6431,	// (0x00035cc8) navi_icon_pane_srt_g1

0x4a5c,	// (0x000342f3) midp_editing_number_pane_srt

0x48a2,	// (0x00034139) midp_ticker_pane_srt

0x4a64,	// (0x000342fb) midp_ticker_pane_srt_g1

0x4a6c,	// (0x00034303) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003f009) midp_ticker_pane_srt_g

0x4a74,	// (0x0003430b) midp_ticker_pane_srt_t1

0x6422,	// (0x00035cb9) midp_editing_number_pane_t1_copy1

0x4be0,	// (0x00034477) listscroll_midp_pane

0x4be0,	// (0x00034477) midp_form_pane

0x490e,	// (0x000341a5) midp_info_popup_window_ParamLimits

0x490e,	// (0x000341a5) midp_info_popup_window

0x3cb8,	// (0x0003354f) bg_popup_sub_pane_cp50_ParamLimits

0x3cb8,	// (0x0003354f) bg_popup_sub_pane_cp50

0x553c,	// (0x00034dd3) listscroll_midp_info_pane_ParamLimits

0x553c,	// (0x00034dd3) listscroll_midp_info_pane

0x5524,	// (0x00034dbb) listscroll_form_midp_pane_ParamLimits

0x5524,	// (0x00034dbb) listscroll_form_midp_pane

0x5530,	// (0x00034dc7) scroll_bar_cp050

0xd897,	// (0x0003d12e) list_midp_pane

0x71ba,	// (0x00036a51) signal_pane_g2_cp

0x543e,	// (0x00034cd5) listscroll_midp_info_pane_t1_ParamLimits

0x543e,	// (0x00034cd5) listscroll_midp_info_pane_t1

0x5456,	// (0x00034ced) listscroll_midp_info_pane_t2_ParamLimits

0x5456,	// (0x00034ced) listscroll_midp_info_pane_t2

0x5494,	// (0x00034d2b) listscroll_midp_info_pane_t3_ParamLimits

0x5494,	// (0x00034d2b) listscroll_midp_info_pane_t3

0x54ce,	// (0x00034d65) listscroll_midp_info_pane_t4_ParamLimits

0x54ce,	// (0x00034d65) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0003f0bc) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0003f0bc) listscroll_midp_info_pane_t

0x3d7c,	// (0x00033613) scroll_pane_cp21

0x53dc,	// (0x00034c73) form_midp_field_choice_group_pane

0x53e5,	// (0x00034c7c) form_midp_field_text_pane

0x5424,	// (0x00034cbb) form_midp_field_time_pane

0x542c,	// (0x00034cc3) form_midp_gauge_slider_pane

0x5435,	// (0x00034ccc) form_midp_gauge_wait_pane

0x2b5d,	// (0x000323f4) form_midp_image_pane

0xc47f,	// (0x0003bd16) list_single_midp_pane_ParamLimits

0xc47f,	// (0x0003bd16) list_single_midp_pane

0xd875,	// (0x0003d10c) form_midp_field_text_pane_t1

0x515e,	// (0x000349f5) input_focus_pane_cp050

0x53cb,	// (0x00034c62) list_midp_form_text_pane

0x5363,	// (0x00034bfa) form_midp_field_choice_group_pane_t1

0x5371,	// (0x00034c08) input_focus_pane_cp051

0x5385,	// (0x00034c1c) list_midp_choice_pane

0x2b5d,	// (0x000323f4) status_idle_pane

0x5347,	// (0x00034bde) form_midp_field_time_pane_t1

0x2b53,	// (0x000323ea) wait_anim_pane_g2_copy1

0x5355,	// (0x00034bec) form_midp_field_time_pane_t2

0x0001,

0x49bc,	// (0x00034253) aid_navinavi_width_2_pane

0xf820,	// (0x0003f0b7) form_midp_field_time_pane_t

0x2b5d,	// (0x000323f4) input_focus_pane_cp052

0x2b5d,	// (0x000323f4) bg_input_focus_pane_cp040

0x5307,	// (0x00034b9e) form_midp_gauge_slider_pane_t1

0x5315,	// (0x00034bac) form_midp_gauge_slider_pane_t2

0xd859,	// (0x0003d0f0) form_midp_gauge_slider_pane_t3

0xd867,	// (0x0003d0fe) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0003f0ae) form_midp_gauge_slider_pane_t

0x533f,	// (0x00034bd6) form_midp_slider_pane

0x2c3d,	// (0x000324d4) bg_input_focus_pane_cp041_ParamLimits

0x2c3d,	// (0x000324d4) bg_input_focus_pane_cp041

0x52d4,	// (0x00034b6b) form_midp_gauge_wait_pane_t1_ParamLimits

0x52d4,	// (0x00034b6b) form_midp_gauge_wait_pane_t1

0x52e6,	// (0x00034b7d) form_midp_gauge_wait_pane_t2_ParamLimits

0x52e6,	// (0x00034b7d) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0003f0a9) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0003f0a9) form_midp_gauge_wait_pane_t

0x52f8,	// (0x00034b8f) form_midp_wait_pane_ParamLimits

0x52f8,	// (0x00034b8f) form_midp_wait_pane

0x529e,	// (0x00034b35) form_midp_image_pane_g1

0x52a7,	// (0x00034b3e) form_midp_image_pane_t1

0x52b6,	// (0x00034b4d) form_midp_image_pane_t2

0x52c5,	// (0x00034b5c) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0003f0a2) form_midp_image_pane_t

0x5295,	// (0x00034b2c) list_single_midp_pane_g1

0x172a,	// (0x00030fc1) list_single_midp_pane_t1

0xd844,	// (0x0003d0db) list_midp_form_item_pane_ParamLimits

0xd844,	// (0x0003d0db) list_midp_form_item_pane

0x4964,	// (0x000341fb) list_midp_form_item_pane_t1

0x4973,	// (0x0003420a) midp_ticker_pane_g1

0x497f,	// (0x00034216) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0003efef) midp_ticker_pane_g

0x498b,	// (0x00034222) midp_ticker_pane_t1

0x6673,	// (0x00035f0a) midp_editing_number_pane_t1

0x6651,	// (0x00035ee8) midp_editing_number_pane

0x6660,	// (0x00035ef7) midp_ticker_pane

0x6412,	// (0x00035ca9) ai_message_heading_pane

0x2b5d,	// (0x000323f4) bg_popup_window_pane_cp14

0x641a,	// (0x00035cb1) listscroll_ai_message_pane

0x639c,	// (0x00035c33) ai_message_heading_pane_g1_ParamLimits

0x639c,	// (0x00035c33) ai_message_heading_pane_g1

0x63a8,	// (0x00035c3f) ai_message_heading_pane_g2_ParamLimits

0x63a8,	// (0x00035c3f) ai_message_heading_pane_g2

0x63b4,	// (0x00035c4b) ai_message_heading_pane_g3_ParamLimits

0x63b4,	// (0x00035c4b) ai_message_heading_pane_g3

0x63c0,	// (0x00035c57) ai_message_heading_pane_g4_ParamLimits

0x63c0,	// (0x00035c57) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0003f1e3) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0003f1e3) ai_message_heading_pane_g

0x63cc,	// (0x00035c63) ai_message_heading_pane_t1_ParamLimits

0x63cc,	// (0x00035c63) ai_message_heading_pane_t1

0x63e6,	// (0x00035c7d) ai_message_heading_pane_t2_ParamLimits

0x63e6,	// (0x00035c7d) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0003f1ec) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0003f1ec) ai_message_heading_pane_t

0x63f8,	// (0x00035c8f) bg_popup_heading_pane_cp1_ParamLimits

0x63f8,	// (0x00035c8f) bg_popup_heading_pane_cp1

0x638a,	// (0x00035c21) list_ai_message_pane_ParamLimits

0x638a,	// (0x00035c21) list_ai_message_pane

0x3d7c,	// (0x00033613) scroll_pane_cp10

0x6326,	// (0x00035bbd) list_ai_message_pane_g1

0x632e,	// (0x00035bc5) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0003f1c0) list_ai_message_pane_g

0x6336,	// (0x00035bcd) list_ai_message_pane_t1_ParamLimits

0x6336,	// (0x00035bcd) list_ai_message_pane_t1

0x634b,	// (0x00035be2) list_ai_message_pane_t2_ParamLimits

0x634b,	// (0x00035be2) list_ai_message_pane_t2

0x6360,	// (0x00035bf7) list_ai_message_pane_t3_ParamLimits

0x6360,	// (0x00035bf7) list_ai_message_pane_t3

0x6375,	// (0x00035c0c) list_ai_message_pane_t4_ParamLimits

0x6375,	// (0x00035c0c) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0003f1c5) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0003f1c5) list_ai_message_pane_t

0xd9d9,	// (0x0003d270) cell_ai_soft_ind_pane_ParamLimits

0xd9d9,	// (0x0003d270) cell_ai_soft_ind_pane

0x499d,	// (0x00034234) cell_ai_soft_ind_pane_g1_ParamLimits

0x499d,	// (0x00034234) cell_ai_soft_ind_pane_g1

0x2b5d,	// (0x000323f4) grid_highlight_cp1

0x49aa,	// (0x00034241) text_secondary_cp56_ParamLimits

0x49aa,	// (0x00034241) text_secondary_cp56

0x62e6,	// (0x00035b7d) example_general_pane_ParamLimits

0x62e6,	// (0x00035b7d) example_general_pane

0x62f2,	// (0x00035b89) example_parent_pane_g1_ParamLimits

0x62f2,	// (0x00035b89) example_parent_pane_g1

0x62fe,	// (0x00035b95) example_parent_pane_t1_ParamLimits

0x62fe,	// (0x00035b95) example_parent_pane_t1

0xc129,	// (0x0003b9c0) popup_preview_text_window_ParamLimits

0xc129,	// (0x0003b9c0) popup_preview_text_window

0x47d3,	// (0x0003406a) list_single_pane_cp2_g4

0x36ce,	// (0x00032f65) bg_popup_preview_window_pane_ParamLimits

0x36ce,	// (0x00032f65) bg_popup_preview_window_pane

0x6026,	// (0x000358bd) popup_preview_text_window_t1_ParamLimits

0x6026,	// (0x000358bd) popup_preview_text_window_t1

0x6044,	// (0x000358db) popup_preview_text_window_t2_ParamLimits

0x6044,	// (0x000358db) popup_preview_text_window_t2

0x6099,	// (0x00035930) popup_preview_text_window_t3_ParamLimits

0x6099,	// (0x00035930) popup_preview_text_window_t3

0x60de,	// (0x00035975) popup_preview_text_window_t4_ParamLimits

0x60de,	// (0x00035975) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0003f194) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0003f194) popup_preview_text_window_t

0x615c,	// (0x000359f3) scroll_pane_cp11

0x50ea,	// (0x00034981) bg_popup_preview_window_pane_g1

0x5fe6,	// (0x0003587d) bg_popup_preview_window_pane_g2

0x5fee,	// (0x00035885) bg_popup_preview_window_pane_g3

0x5ff6,	// (0x0003588d) bg_popup_preview_window_pane_g4

0x5ffe,	// (0x00035895) bg_popup_preview_window_pane_g5

0x6006,	// (0x0003589d) bg_popup_preview_window_pane_g6

0x600e,	// (0x000358a5) bg_popup_preview_window_pane_g7

0x6016,	// (0x000358ad) bg_popup_preview_window_pane_g8

0xf32b,	// (0x0003ebc2) aid_popup_width_pane

0xc0a5,	// (0x0003b93c) popup_midp_note_alarm_window_ParamLimits

0xc0a5,	// (0x0003b93c) popup_midp_note_alarm_window

0x3c00,	// (0x00033497) data_form_pane_ParamLimits

0xba2d,	// (0x0003b2c4) form_field_data_pane_g1

0xba37,	// (0x0003b2ce) form_field_data_pane_t1_ParamLimits

0x3c0c,	// (0x000334a3) input_focus_pane_ParamLimits

0x0735,	// (0x0002ffcc) data_form_wide_pane_ParamLimits

0x0746,	// (0x0002ffdd) form_field_data_wide_pane_g1

0x0752,	// (0x0002ffe9) form_field_data_wide_pane_t1_ParamLimits

0x397d,	// (0x00033214) input_focus_pane_cp6_ParamLimits

0xd092,	// (0x0003c929) input_popup_find_pane_g1_ParamLimits

0xd092,	// (0x0003c929) input_popup_find_pane_g1

0x09c8,	// (0x0003025f) aid_navi_side_left_pane

0x09dd,	// (0x00030274) aid_navi_side_right_pane

0x59ff,	// (0x00035296) bg_popup_window_pane_cp30_ParamLimits

0x59ff,	// (0x00035296) bg_popup_window_pane_cp30

0x5a79,	// (0x00035310) popup_midp_note_alarm_window_g1_ParamLimits

0x5a79,	// (0x00035310) popup_midp_note_alarm_window_g1

0x5aa9,	// (0x00035340) popup_midp_note_alarm_window_t1_ParamLimits

0x5aa9,	// (0x00035340) popup_midp_note_alarm_window_t1

0x5b4a,	// (0x000353e1) popup_midp_note_alarm_window_t2_ParamLimits

0x5b4a,	// (0x000353e1) popup_midp_note_alarm_window_t2

0x5bf8,	// (0x0003548f) popup_midp_note_alarm_window_t3_ParamLimits

0x5bf8,	// (0x0003548f) popup_midp_note_alarm_window_t3

0x5c2a,	// (0x000354c1) popup_midp_note_alarm_window_t4_ParamLimits

0x5c2a,	// (0x000354c1) popup_midp_note_alarm_window_t4

0x5c50,	// (0x000354e7) popup_midp_note_alarm_window_t5_ParamLimits

0x5c50,	// (0x000354e7) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0003f131) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0003f131) popup_midp_note_alarm_window_t

0x5cfc,	// (0x00035593) wait_bar_pane_cp1_ParamLimits

0x5cfc,	// (0x00035593) wait_bar_pane_cp1

0x2b5d,	// (0x000323f4) wait_anim_pane_copy1

0x2b5d,	// (0x000323f4) wait_border_pane_copy1

0x56e5,	// (0x00034f7c) wait_border_pane_g1_copy1

0x076c,	// (0x00030003) form_field_popup_pane_g1

0xba51,	// (0x0003b2e8) form_field_popup_pane_t1_ParamLimits

0x3c0c,	// (0x000334a3) input_focus_pane_cp7_ParamLimits

0x3c3a,	// (0x000334d1) list_form_pane_ParamLimits

0x078c,	// (0x00030023) form_field_popup_wide_pane_g1

0x0794,	// (0x0003002b) form_field_popup_wide_pane_t1_ParamLimits

0x3c0c,	// (0x000334a3) input_focus_pane_cp8_ParamLimits

0x3c46,	// (0x000334dd) list_form_wide_pane_ParamLimits

0x67fd,	// (0x00036094) aid_size_cell_graphic_pane

0xbad0,	// (0x0003b367) data_form_pane_t1_ParamLimits

0xc4a8,	// (0x0003bd3f) data_form_wide_pane_t1_ParamLimits

0xd4c9,	// (0x0003cd60) bg_status_flat_pane

0xcd51,	// (0x0003c5e8) title_pane_t1_ParamLimits

0x2c05,	// (0x0003249c) title_pane_t2_ParamLimits

0x2c2b,	// (0x000324c2) title_pane_t3_ParamLimits

0xf557,	// (0x0003edee) title_pane_t_ParamLimits

0x41fb,	// (0x00033a92) level_1_signal_ParamLimits

0x420d,	// (0x00033aa4) level_2_signal_ParamLimits

0x4220,	// (0x00033ab7) level_3_signal_ParamLimits

0x4233,	// (0x00033aca) level_4_signal_ParamLimits

0x4246,	// (0x00033add) level_5_signal_ParamLimits

0x4259,	// (0x00033af0) level_6_signal_ParamLimits

0x426c,	// (0x00033b03) level_7_signal_ParamLimits

0x41fb,	// (0x00033a92) level_1_battery_ParamLimits

0x420d,	// (0x00033aa4) level_2_battery_ParamLimits

0x4220,	// (0x00033ab7) level_3_battery_ParamLimits

0x4233,	// (0x00033aca) level_4_battery_ParamLimits

0x4246,	// (0x00033add) level_5_battery_ParamLimits

0x4259,	// (0x00033af0) level_6_battery_ParamLimits

0x426c,	// (0x00033b03) level_7_battery_ParamLimits

0x5904,	// (0x0003519b) bg_status_flat_pane_g1

0x590c,	// (0x000351a3) bg_status_flat_pane_g2

0x5914,	// (0x000351ab) bg_status_flat_pane_g3

0x591c,	// (0x000351b3) bg_status_flat_pane_g4

0x5924,	// (0x000351bb) bg_status_flat_pane_g5

0x592c,	// (0x000351c3) bg_status_flat_pane_g6

0x5934,	// (0x000351cb) bg_status_flat_pane_g7

0xcddd,	// (0x0003c674) tabs_3_active_pane_t1_ParamLimits

0xcddd,	// (0x0003c674) tabs_3_passive_pane_t1_ParamLimits

0xcdef,	// (0x0003c686) tabs_4_active_pane_t1_ParamLimits

0xcdef,	// (0x0003c686) tabs_4_1_passive_pane_t1_ParamLimits

0xd0a0,	// (0x0003c937) tabs_2_active_pane_t1_ParamLimits

0xd0a0,	// (0x0003c937) tabs_2_passive_pane_t1_ParamLimits

0x2c3d,	// (0x000324d4) bg_active_tab_pane_cp4_ParamLimits

0xd0b2,	// (0x0003c949) tabs_2_long_active_pane_t1_ParamLimits

0x4be0,	// (0x00034477) bg_passive_tab_pane_cp4_ParamLimits

0x1601,	// (0x00030e98) list_single_midp_graphic_pane_t1_ParamLimits

0x2c3d,	// (0x000324d4) bg_active_tab_pane_cp5_ParamLimits

0xd0c5,	// (0x0003c95c) tabs_3_long_active_pane_t1_ParamLimits

0x4be0,	// (0x00034477) bg_passive_tab_pane_cp5_ParamLimits

0x1601,	// (0x00030e98) list_single_midp_graphic_pane_t1

0xd4c9,	// (0x0003cd60) bg_status_flat_pane_ParamLimits

0x4d7a,	// (0x00034611) indicator_pane_cp2_ParamLimits

0x4d7a,	// (0x00034611) indicator_pane_cp2

0xd647,	// (0x0003cede) navi_pane_srt_ParamLimits

0xd647,	// (0x0003cede) navi_pane_srt

0x4ec9,	// (0x00034760) popup_clock_digital_analogue_window_cp1

0x2d1a,	// (0x000325b1) indicator_pane_t1

0x48a2,	// (0x00034139) copy_highlight_pane

0x48a2,	// (0x00034139) cursor_graphics_pane

0x48a2,	// (0x00034139) graphic_within_text_pane

0x48a2,	// (0x00034139) link_highlight_pane

0x611f,	// (0x000359b6) popup_preview_text_window_t5_ParamLimits

0x611f,	// (0x000359b6) popup_preview_text_window_t5

0x49c4,	// (0x0003425b) cursor_digital_pane

0x49c4,	// (0x0003425b) cursor_primary_pane

0x49d5,	// (0x0003426c) cursor_primary_small_pane

0x49dd,	// (0x00034274) cursor_secondary_pane

0x49e5,	// (0x0003427c) cursor_title_pane

0x49c4,	// (0x0003425b) link_highlight_digital_pane

0x49cc,	// (0x00034263) link_highlight_primary_pane

0x49d5,	// (0x0003426c) link_highlight_primary_small_pane

0x49dd,	// (0x00034274) link_highlight_secondary_pane

0x49e5,	// (0x0003427c) link_highlight_title_pane

0x49c4,	// (0x0003425b) copy_highlight_digital_pane

0x49c4,	// (0x0003425b) copy_highlight_primary_pane

0x49d5,	// (0x0003426c) copy_highlight_primary_small_pane

0x49dd,	// (0x00034274) copy_highlight_secondary_pane

0x49e5,	// (0x0003427c) copy_highlight_title_pane

0x49dd,	// (0x00034274) graphic_text_digital_pane

0x59a2,	// (0x00035239) graphic_text_primary_pane

0x59ab,	// (0x00035242) graphic_text_primary_small_pane

0x49d5,	// (0x0003426c) graphic_text_secondary_pane

0x49c4,	// (0x0003425b) graphic_text_title_pane

0xd305,	// (0x0003cb9c) cursor_primary_pane_g1

0x5994,	// (0x0003522b) cursor_text_primary_t1

0xd8d3,	// (0x0003d16a) cursor_primary_small_pane_g1

0x5986,	// (0x0003521d) cursor_text_primary_small_t1

0xd8c9,	// (0x0003d160) cursor_primary_small_pane_g1_copy1

0x596e,	// (0x00035205) cursor_text_primary_small_t1_copy1

0x594c,	// (0x000351e3) cursor_text_title_t1

0xd8bf,	// (0x0003d156) cursor_title_pane_g1

0xd305,	// (0x0003cb9c) cursor_digital_pane_g1

0x49f7,	// (0x0003428e) cursor_text_digital_t1

0x4a1c,	// (0x000342b3) link_highlight_primary_pane_g1

0x58f5,	// (0x0003518c) link_highlight_primary_pane_t1

0x4a05,	// (0x0003429c) link_highlight_primary_small_pane_g1

0x4a0d,	// (0x000342a4) link_highlight_primary_small_pane_t1

0x4a1c,	// (0x000342b3) link_highlight_secondary_pane_g1

0x4a24,	// (0x000342bb) link_highlight_secondary_pane_t1

0x5869,	// (0x00035100) link_highlight_title_pane_g1

0x5871,	// (0x00035108) link_highlight_title_pane_t1

0x5852,	// (0x000350e9) link_highlight_digital_pane_g1

0x585a,	// (0x000350f1) link_highlight_digital_pane_t1

0x572a,	// (0x00034fc1) copy_highlight_primary_pane_g1

0x5732,	// (0x00034fc9) copy_highlight_primary_pane_t1

0x5704,	// (0x00034f9b) copy_highlight_primary_small_pane_g1

0x571b,	// (0x00034fb2) copy_highlight_primary_small_pane_t1

0x4a33,	// (0x000342ca) copy_highlight_secondary_pane_g1

0x4a3b,	// (0x000342d2) copy_highlight_secondary_pane_t1

0x5704,	// (0x00034f9b) copy_highlight_title_pane_g1

0x570c,	// (0x00034fa3) copy_highlight_title_pane_t1

0x572a,	// (0x00034fc1) copy_highlight_digital_pane_g1

0x69c7,	// (0x0003625e) copy_highlight_digital_pane_t1

0x691b,	// (0x000361b2) graphic_text_primary_pane_g1

0x69ab,	// (0x00036242) graphic_text_primary_pane_t1

0x69b9,	// (0x00036250) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0003f260) graphic_text_primary_pane_t

0x6987,	// (0x0003621e) graphic_text_primary_small_pane_g1

0x698f,	// (0x00036226) graphic_text_primary_small_pane_t1

0x699d,	// (0x00036234) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0003f25b) graphic_text_primary_small_pane_t

0x6963,	// (0x000361fa) graphic_text_secondary_pane_g1

0x696b,	// (0x00036202) graphic_text_secondary_pane_t1

0x6979,	// (0x00036210) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0003f256) graphic_text_secondary_pane_t

0x693f,	// (0x000361d6) graphic_text_title_pane_g1

0x6947,	// (0x000361de) graphic_text_title_pane_t1

0x6955,	// (0x000361ec) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0003f251) graphic_text_title_pane_t

0x691b,	// (0x000361b2) graphic_text_digital_pane_g1

0x6923,	// (0x000361ba) graphic_text_digital_pane_t1

0x6931,	// (0x000361c8) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0003f24c) graphic_text_digital_pane_t

0x2c3d,	// (0x000324d4) navi_icon_pane_srt_ParamLimits

0x2c3d,	// (0x000324d4) navi_icon_pane_srt

0x2b5d,	// (0x000323f4) navi_midp_pane_srt

0x2b5d,	// (0x000323f4) navi_navi_pane_srt

0x2c3d,	// (0x000324d4) navi_text_pane_srt_ParamLimits

0x2c3d,	// (0x000324d4) navi_text_pane_srt

0x68e6,	// (0x0003617d) navi_navi_icon_text_pane_srt

0x68ee,	// (0x00036185) navi_navi_pane_srt_g1_ParamLimits

0x68ee,	// (0x00036185) navi_navi_pane_srt_g1

0x6900,	// (0x00036197) navi_navi_pane_srt_g2_ParamLimits

0x6900,	// (0x00036197) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0003f247) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0003f247) navi_navi_pane_srt_g

0x6912,	// (0x000361a9) navi_navi_tabs_pane_srt

0x68e6,	// (0x0003617d) navi_navi_text_pane_srt

0x68e6,	// (0x0003617d) navi_navi_volume_pane_srt

0x68d7,	// (0x0003616e) navi_navi_text_pane_srt_t1

0x1ad9,	// (0x00031370) navi_navi_volume_pane_srt_g1

0x1ae1,	// (0x00031378) volume_small_pane_srt_ParamLimits

0x1ae1,	// (0x00031378) volume_small_pane_srt

0x0d32,	// (0x000305c9) volume_small_pane_srt_g1_ParamLimits

0x0d32,	// (0x000305c9) volume_small_pane_srt_g1

0x0d42,	// (0x000305d9) volume_small_pane_srt_g2_ParamLimits

0x0d42,	// (0x000305d9) volume_small_pane_srt_g2

0x0d53,	// (0x000305ea) volume_small_pane_srt_g3_ParamLimits

0x0d53,	// (0x000305ea) volume_small_pane_srt_g3

0x0d64,	// (0x000305fb) volume_small_pane_srt_g4_ParamLimits

0x0d64,	// (0x000305fb) volume_small_pane_srt_g4

0x0d75,	// (0x0003060c) volume_small_pane_srt_g5_ParamLimits

0x0d75,	// (0x0003060c) volume_small_pane_srt_g5

0x0d86,	// (0x0003061d) volume_small_pane_srt_g6_ParamLimits

0x0d86,	// (0x0003061d) volume_small_pane_srt_g6

0x0d97,	// (0x0003062e) volume_small_pane_srt_g7_ParamLimits

0x0d97,	// (0x0003062e) volume_small_pane_srt_g7

0x0da8,	// (0x0003063f) volume_small_pane_srt_g8_ParamLimits

0x0da8,	// (0x0003063f) volume_small_pane_srt_g8

0x0db9,	// (0x00030650) volume_small_pane_srt_g9_ParamLimits

0x0db9,	// (0x00030650) volume_small_pane_srt_g9

0x0dca,	// (0x00030661) volume_small_pane_srt_g10_ParamLimits

0x0dca,	// (0x00030661) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003eff4) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003eff4) volume_small_pane_srt_g

0x3777,	// (0x0003300e) query_popup_data_pane_cp2

0x68bd,	// (0x00036154) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x68bd,	// (0x00036154) navi_navi_icon_text_pane_srt_t1

0x59a2,	// (0x00035239) navi_tabs_2_long_pane_srt

0x59a2,	// (0x00035239) navi_tabs_2_pane_srt

0x59a2,	// (0x00035239) navi_tabs_3_long_pane_srt

0x59a2,	// (0x00035239) navi_tabs_3_pane_srt

0x59a2,	// (0x00035239) navi_tabs_4_pane_srt

0x1ab9,	// (0x00031350) tabs_2_active_pane_srt_ParamLimits

0x1ab9,	// (0x00031350) tabs_2_active_pane_srt

0x1ac9,	// (0x00031360) tabs_2_passive_pane_srt_ParamLimits

0x1ac9,	// (0x00031360) tabs_2_passive_pane_srt

0x515e,	// (0x000349f5) bg_passive_tab_pane_cp1_srt_ParamLimits

0x515e,	// (0x000349f5) bg_passive_tab_pane_cp1_srt

0x6889,	// (0x00036120) bg_passive_tab_pane_g1_cp1_srt

0x44e4,	// (0x00033d7b) bg_passive_tab_pane_g2_cp1_srt

0x6892,	// (0x00036129) bg_passive_tab_pane_g3_cp1_srt

0x3618,	// (0x00032eaf) bg_active_tab_pane_cp1_srt_ParamLimits

0x3618,	// (0x00032eaf) bg_active_tab_pane_cp1_srt

0x689b,	// (0x00036132) tabs_2_active_pane_srt_g1

0xdc6a,	// (0x0003d501) tabs_2_active_pane_srt_t1_ParamLimits

0xdc6a,	// (0x0003d501) tabs_2_active_pane_srt_t1

0x6889,	// (0x00036120) bg_active_tab_pane_g1_cp1_srt

0x44e4,	// (0x00033d7b) bg_active_tab_pane_g2_cp1_srt

0x6892,	// (0x00036129) bg_active_tab_pane_g3_cp1_srt

0x1a86,	// (0x0003131d) tabs_3_active_pane_srt_ParamLimits

0x1a86,	// (0x0003131d) tabs_3_active_pane_srt

0x1a97,	// (0x0003132e) tabs_3_passive_pane_cp_srt_ParamLimits

0x1a97,	// (0x0003132e) tabs_3_passive_pane_cp_srt

0x1aa8,	// (0x0003133f) tabs_3_passive_pane_srt_ParamLimits

0x1aa8,	// (0x0003133f) tabs_3_passive_pane_srt

0x515e,	// (0x000349f5) bg_passive_tab_pane_cp2_srt_ParamLimits

0x515e,	// (0x000349f5) bg_passive_tab_pane_cp2_srt

0x4a4a,	// (0x000342e1) bg_passive_tab_pane_g1_cp2_srt

0x44e4,	// (0x00033d7b) bg_passive_tab_pane_g2_cp2_srt

0x4a53,	// (0x000342ea) bg_passive_tab_pane_g3_cp2_srt

0x3618,	// (0x00032eaf) bg_active_tab_pane_cp2_srt_ParamLimits

0x3618,	// (0x00032eaf) bg_active_tab_pane_cp2_srt

0x686f,	// (0x00036106) tabs_3_active_pane_srt_g1

0xdc54,	// (0x0003d4eb) tabs_3_active_pane_srt_t1_ParamLimits

0xdc54,	// (0x0003d4eb) tabs_3_active_pane_srt_t1

0x4a4a,	// (0x000342e1) bg_active_tab_pane_g1_cp2_srt

0x44e4,	// (0x00033d7b) bg_active_tab_pane_g2_cp2_srt

0x4a53,	// (0x000342ea) bg_active_tab_pane_g3_cp2_srt

0x1a3e,	// (0x000312d5) tabs_4_active_pane_srt_ParamLimits

0x1a3e,	// (0x000312d5) tabs_4_active_pane_srt

0x1a50,	// (0x000312e7) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1a50,	// (0x000312e7) tabs_4_passive_pane_cp2_srt

0x0f2f,	// (0x000307c6) aid_size_cell_toolbar

0x64ca,	// (0x00035d61) main_idle_act_pane_ParamLimits

0x10ee,	// (0x00030985) popup_large_graphic_colour_window_ParamLimits

0xc3b5,	// (0x0003bc4c) popup_toolbar_window_ParamLimits

0xc3b5,	// (0x0003bc4c) popup_toolbar_window

0x6682,	// (0x00035f19) list_single_graphic_2heading_pane_ParamLimits

0x6682,	// (0x00035f19) list_single_graphic_2heading_pane

0x3fac,	// (0x00033843) aid_size_cell_apps_grid_lsc_pane

0x3fbe,	// (0x00033855) aid_size_cell_apps_grid_prt_pane

0x4be0,	// (0x00034477) bg_wml_button_pane_cp1_ParamLimits

0x4be0,	// (0x00034477) bg_wml_button_pane_cp1

0xd875,	// (0x0003d10c) form_midp_field_text_pane_t1_ParamLimits

0x515e,	// (0x000349f5) input_focus_pane_cp050_ParamLimits

0x53cb,	// (0x00034c62) list_midp_form_text_pane_ParamLimits

0x5371,	// (0x00034c08) input_focus_pane_cp051_ParamLimits

0x5385,	// (0x00034c1c) list_midp_choice_pane_ParamLimits

0xd812,	// (0x0003d0a9) list_single_2graphic_pane_cp3_ParamLimits

0xd812,	// (0x0003d0a9) list_single_2graphic_pane_cp3

0xd825,	// (0x0003d0bc) list_single_midp_graphic_pane_ParamLimits

0xd825,	// (0x0003d0bc) list_single_midp_graphic_pane

0xf347,	// (0x0003ebde) list_single_graphic_2heading_pane_g1_ParamLimits

0xf347,	// (0x0003ebde) list_single_graphic_2heading_pane_g1

0xf353,	// (0x0003ebea) list_single_graphic_2heading_pane_g4_ParamLimits

0xf353,	// (0x0003ebea) list_single_graphic_2heading_pane_g4

0xf35f,	// (0x0003ebf6) list_single_graphic_2heading_pane_g5_ParamLimits

0xf35f,	// (0x0003ebf6) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003f047) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003f047) list_single_graphic_2heading_pane_g

0xf36b,	// (0x0003ec02) list_single_graphic_2heading_pane_t1_ParamLimits

0xf36b,	// (0x0003ec02) list_single_graphic_2heading_pane_t1

0xf37f,	// (0x0003ec16) list_single_graphic_2heading_pane_t2_ParamLimits

0xf37f,	// (0x0003ec16) list_single_graphic_2heading_pane_t2

0xf399,	// (0x0003ec30) list_single_graphic_2heading_pane_t3_ParamLimits

0xf399,	// (0x0003ec30) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003f04e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003f04e) list_single_graphic_2heading_pane_t

0x5028,	// (0x000348bf) bg_popup_sub_pane_cp2

0x5052,	// (0x000348e9) grid_toobar_pane

0x1502,	// (0x00030d99) cell_toolbar_pane_ParamLimits

0x1502,	// (0x00030d99) cell_toolbar_pane

0x508e,	// (0x00034925) cell_toolbar_pane_g1_ParamLimits

0x508e,	// (0x00034925) cell_toolbar_pane_g1

0x50a2,	// (0x00034939) cell_toolbar_pane_g2_ParamLimits

0x50a2,	// (0x00034939) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003f05c) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003f05c) cell_toolbar_pane_g

0x50c4,	// (0x0003495b) grid_highlight_pane_cp2_ParamLimits

0x50c4,	// (0x0003495b) grid_highlight_pane_cp2

0x50de,	// (0x00034975) toolbar_button_pane

0x50ea,	// (0x00034981) toolbar_button_pane_g1

0x50f2,	// (0x00034989) toolbar_button_pane_g2

0x50fa,	// (0x00034991) toolbar_button_pane_g3

0x5102,	// (0x00034999) toolbar_button_pane_g4

0x510a,	// (0x000349a1) toolbar_button_pane_g5

0x5112,	// (0x000349a9) toolbar_button_pane_g6

0x511a,	// (0x000349b1) toolbar_button_pane_g7

0x5122,	// (0x000349b9) toolbar_button_pane_g8

0x512a,	// (0x000349c1) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0003f061) toolbar_button_pane_g

0x1574,	// (0x00030e0b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1574,	// (0x00030e0b) list_single_2graphic_pane_g1_cp3

0xc40d,	// (0x0003bca4) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc40d,	// (0x0003bca4) list_single_2graphic_pane_g2_cp3

0x1591,	// (0x00030e28) list_single_2graphic_pane_g3_cp3

0x1599,	// (0x00030e30) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1599,	// (0x00030e30) list_single_2graphic_pane_g4_cp3

0x15a5,	// (0x00030e3c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x15a5,	// (0x00030e3c) list_single_2graphic_pane_t1_cp3

0x15f5,	// (0x00030e8c) list_single_midp_graphic_pane_g2_ParamLimits

0x15f5,	// (0x00030e8c) list_single_midp_graphic_pane_g2

0x0f37,	// (0x000307ce) aid_zoom_text_primary

0xf33f,	// (0x0003ebd6) aid_zoom_text_secondary

0xd35d,	// (0x0003cbf4) status_small_pane_g7_ParamLimits

0xd35d,	// (0x0003cbf4) status_small_pane_g7

0xd380,	// (0x0003cc17) status_small_pane_t1_ParamLimits

0xb5a4,	// (0x0003ae3b) title_pane_g2

0x0003,

0xf54e,	// (0x0003ede5) title_pane_g

0xcfa5,	// (0x0003c83c) aid_size_cell_colour_1_pane_ParamLimits

0xcfa5,	// (0x0003c83c) aid_size_cell_colour_1_pane

0xcfb9,	// (0x0003c850) aid_size_cell_colour_2_pane_ParamLimits

0xcfb9,	// (0x0003c850) aid_size_cell_colour_2_pane

0xcfcd,	// (0x0003c864) aid_size_cell_colour_3_pane_ParamLimits

0xcfcd,	// (0x0003c864) aid_size_cell_colour_3_pane

0xcfe1,	// (0x0003c878) aid_size_cell_colour_4_pane_ParamLimits

0xcfe1,	// (0x0003c878) aid_size_cell_colour_4_pane

0x0905,	// (0x0003019c) title_pane_stacon_g1_ParamLimits

0x0905,	// (0x0003019c) title_pane_stacon_g1

0x5789,	// (0x00035020) popup_note_wait_window_g3_ParamLimits

0x5789,	// (0x00035020) popup_note_wait_window_g3

0x57ff,	// (0x00035096) popup_note_wait_window_t5_ParamLimits

0x57ff,	// (0x00035096) popup_note_wait_window_t5

0x2b5d,	// (0x000323f4) main_feb_china_hwr_fs_writing_pane

0xbdbd,	// (0x0003b654) popup_feb_china_hwr_fs_window_ParamLimits

0xbdbd,	// (0x0003b654) popup_feb_china_hwr_fs_window

0xc41e,	// (0x0003bcb5) aid_size_cell_hwr_fs_ParamLimits

0xc41e,	// (0x0003bcb5) aid_size_cell_hwr_fs

0x515e,	// (0x000349f5) bg_popup_sub_pane_cp3_ParamLimits

0x515e,	// (0x000349f5) bg_popup_sub_pane_cp3

0xc433,	// (0x0003bcca) grid_hwr_fs_pane_ParamLimits

0xc433,	// (0x0003bcca) grid_hwr_fs_pane

0x16ba,	// (0x00030f51) linegrid_hwr_fs_pane_ParamLimits

0x16ba,	// (0x00030f51) linegrid_hwr_fs_pane

0xc44b,	// (0x0003bce2) cell_hwr_fs_pane_ParamLimits

0xc44b,	// (0x0003bce2) cell_hwr_fs_pane

0x516a,	// (0x00034a01) linegrid_hwr_fs_pane_g1_ParamLimits

0x516a,	// (0x00034a01) linegrid_hwr_fs_pane_g1

0xd7e6,	// (0x0003d07d) linegrid_hwr_fs_pane_g2_ParamLimits

0xd7e6,	// (0x0003d07d) linegrid_hwr_fs_pane_g2

0x5188,	// (0x00034a1f) linegrid_hwr_fs_pane_g3_ParamLimits

0x5188,	// (0x00034a1f) linegrid_hwr_fs_pane_g3

0x16ec,	// (0x00030f83) linegrid_hwr_fs_pane_g4_ParamLimits

0x16ec,	// (0x00030f83) linegrid_hwr_fs_pane_g4

0x1706,	// (0x00030f9d) linegrid_hwr_fs_pane_g5_ParamLimits

0x1706,	// (0x00030f9d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0003f087) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0003f087) linegrid_hwr_fs_pane_g

0x5194,	// (0x00034a2b) cell_hwr_fs_pane_g1_ParamLimits

0x5194,	// (0x00034a2b) cell_hwr_fs_pane_g1

0x4f5f,	// (0x000347f6) cell_hwr_fs_pane_g2_ParamLimits

0x4f5f,	// (0x000347f6) cell_hwr_fs_pane_g2

0xd7f8,	// (0x0003d08f) cell_hwr_fs_pane_g3_ParamLimits

0xd7f8,	// (0x0003d08f) cell_hwr_fs_pane_g3

0xd805,	// (0x0003d09c) cell_hwr_fs_pane_g4_ParamLimits

0xd805,	// (0x0003d09c) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0003f092) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003f092) cell_hwr_fs_pane_g

0xc471,	// (0x0003bd08) cell_hwr_fs_pane_t1

0x2b5d,	// (0x000323f4) grid_highlight_pane_cp6

0x2b5d,	// (0x000323f4) main_idle_act2_pane

0x3d63,	// (0x000335fa) aid_inside_area_popup_secondary

0xd8dd,	// (0x0003d174) aid_inside_area_window_primary_ParamLimits

0xd8dd,	// (0x0003d174) aid_inside_area_window_primary

0x69d6,	// (0x0003626d) ai2_news_ticker_pane

0x69de,	// (0x00036275) aid_size_cell_ai1_link_ParamLimits

0x69de,	// (0x00036275) aid_size_cell_ai1_link

0xdc80,	// (0x0003d517) popup_ai2_data_window_ParamLimits

0xdc80,	// (0x0003d517) popup_ai2_data_window

0x6a0e,	// (0x000362a5) popup_ai2_link_window_ParamLimits

0x6a0e,	// (0x000362a5) popup_ai2_link_window

0x515e,	// (0x000349f5) bg_popup_sub_pane_cp4_ParamLimits

0x515e,	// (0x000349f5) bg_popup_sub_pane_cp4

0x6a22,	// (0x000362b9) grid_ai2_link_pane_ParamLimits

0x6a22,	// (0x000362b9) grid_ai2_link_pane

0x6a39,	// (0x000362d0) popup_ai2_link_window_g1_ParamLimits

0x6a39,	// (0x000362d0) popup_ai2_link_window_g1

0x6a45,	// (0x000362dc) popup_ai2_link_window_g2_ParamLimits

0x6a45,	// (0x000362dc) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0003f265) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0003f265) popup_ai2_link_window_g

0x6a54,	// (0x000362eb) ai2_mp_button_pane

0x6a5c,	// (0x000362f3) ai2_mp_volume_pane

0x5371,	// (0x00034c08) bg_popup_sub_pane_cp5_ParamLimits

0x5371,	// (0x00034c08) bg_popup_sub_pane_cp5

0x6a64,	// (0x000362fb) heading_ai2_gene_pane_ParamLimits

0x6a64,	// (0x000362fb) heading_ai2_gene_pane

0x6a70,	// (0x00036307) list_ai2_gene_pane_ParamLimits

0x6a70,	// (0x00036307) list_ai2_gene_pane

0x6ab8,	// (0x0003634f) cell_ai2_link_pane_ParamLimits

0x6ab8,	// (0x0003634f) cell_ai2_link_pane

0x6ace,	// (0x00036365) cell_ai2_link_pane_g1

0x2b5d,	// (0x000323f4) grid_highlight_pane_cp7

0x1af6,	// (0x0003138d) ai2_mp_volume_pane_g1

0x6b9e,	// (0x00036435) ai2_mp_volume_pane_g2

0xdcaa,	// (0x0003d541) list_ai2_gene_pane_t1

0x6ba6,	// (0x0003643d) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0003f27e) ai2_mp_volume_pane_g

0x1afe,	// (0x00031395) volume_small_pane_cp3

0x6bae,	// (0x00036445) aid_size_cell_ai2_button

0x6bb6,	// (0x0003644d) grid_ai2_button_pane

0x6bbf,	// (0x00036456) cell_ai2_button_pane_ParamLimits

0x6bbf,	// (0x00036456) cell_ai2_button_pane

0x2b53,	// (0x000323ea) cell_ai2_button_pane_g1

0x2b5d,	// (0x000323f4) grid_highlight_pane_cp8

0x6b5e,	// (0x000363f5) ai2_gene_pane_t1_ParamLimits

0x6b5e,	// (0x000363f5) ai2_gene_pane_t1

0xbd37,	// (0x0003b5ce) aid_height_parent_landscape

0xda27,	// (0x0003d2be) aid_height_set_list

0x64ca,	// (0x00035d61) aid_size_parent

0x67fd,	// (0x00036094) aid_size_cell_graphic_pane_ParamLimits

0x6a80,	// (0x00036317) popup_ai2_data_window_g1_ParamLimits

0x6a80,	// (0x00036317) popup_ai2_data_window_g1

0x6a8c,	// (0x00036323) ai2_news_ticker_pane_g1

0x6a94,	// (0x0003632b) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0003f26a) ai2_news_ticker_pane_g

0x6a9c,	// (0x00036333) ai2_news_ticker_pane_t1

0x6aaa,	// (0x00036341) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0003f26f) ai2_news_ticker_pane_t

0x6ad7,	// (0x0003636e) heading_ai2_gene_pane_g1

0x6adf,	// (0x00036376) heading_ai2_gene_pane_t1_ParamLimits

0x6adf,	// (0x00036376) heading_ai2_gene_pane_t1

0x6af4,	// (0x0003638b) list_highlight_pane_cp6

0xdc94,	// (0x0003d52b) ai2_gene_pane_ParamLimits

0xdc94,	// (0x0003d52b) ai2_gene_pane

0xdcb8,	// (0x0003d54f) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0003f274) list_ai2_gene_pane_t

0x6b2f,	// (0x000363c6) list_highlight_pane_cp8_ParamLimits

0x6b2f,	// (0x000363c6) list_highlight_pane_cp8

0x6b40,	// (0x000363d7) ai2_gene_pane_g1_ParamLimits

0x6b40,	// (0x000363d7) ai2_gene_pane_g1

0x6b52,	// (0x000363e9) ai2_gene_pane_g2_ParamLimits

0x6b52,	// (0x000363e9) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0003f279) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0003f279) ai2_gene_pane_g

0x3ba2,	// (0x00033439) scroll_pane_cp12

0xbcf6,	// (0x0003b58d) control_pane_t3_ParamLimits

0xbcf6,	// (0x0003b58d) control_pane_t3

0xd371,	// (0x0003cc08) status_small_pane_g8_ParamLimits

0xd371,	// (0x0003cc08) status_small_pane_g8

0xbe52,	// (0x0003b6e9) popup_find_window_ParamLimits

0xc0df,	// (0x0003b976) popup_note_image_window_ParamLimits

0x1532,	// (0x00030dc9) list_double2_graphic_pane_vc_g1_ParamLimits

0x1532,	// (0x00030dc9) list_double2_graphic_pane_vc_g1

0x153e,	// (0x00030dd5) list_double2_graphic_pane_vc_g2_ParamLimits

0x153e,	// (0x00030dd5) list_double2_graphic_pane_vc_g2

0x154a,	// (0x00030de1) list_double2_graphic_pane_vc_g3_ParamLimits

0x154a,	// (0x00030de1) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0003f055) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0003f055) list_double2_graphic_pane_vc_g

0x1556,	// (0x00030ded) list_double2_graphic_pane_vc_t1_ParamLimits

0x1556,	// (0x00030ded) list_double2_graphic_pane_vc_t1

0x153e,	// (0x00030dd5) list_single_heading_pane_vc_g1_ParamLimits

0x153e,	// (0x00030dd5) list_single_heading_pane_vc_g1

0x154a,	// (0x00030de1) list_single_heading_pane_vc_g2_ParamLimits

0x154a,	// (0x00030de1) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ee5f) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ee5f) list_single_heading_pane_vc_g

0x15c1,	// (0x00030e58) list_single_heading_pane_vc_t1_ParamLimits

0x15c1,	// (0x00030e58) list_single_heading_pane_vc_t1

0x15d9,	// (0x00030e70) list_single_heading_pane_vc_t2_ParamLimits

0x15d9,	// (0x00030e70) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0003f076) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0003f076) list_single_heading_pane_vc_t

0x1617,	// (0x00030eae) list_setting_number_pane_vc_g1_ParamLimits

0x1617,	// (0x00030eae) list_setting_number_pane_vc_g1

0x1623,	// (0x00030eba) list_setting_number_pane_vc_g2_ParamLimits

0x1623,	// (0x00030eba) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003f07b) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003f07b) list_setting_number_pane_vc_g

0x162f,	// (0x00030ec6) list_setting_number_pane_vc_t1_ParamLimits

0x162f,	// (0x00030ec6) list_setting_number_pane_vc_t1

0x1643,	// (0x00030eda) list_setting_number_pane_vc_t2_ParamLimits

0x1643,	// (0x00030eda) list_setting_number_pane_vc_t2

0x165f,	// (0x00030ef6) list_setting_number_pane_vc_t3_ParamLimits

0x165f,	// (0x00030ef6) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0003f080) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0003f080) list_setting_number_pane_vc_t

0x167d,	// (0x00030f14) set_value_pane_vc_ParamLimits

0x167d,	// (0x00030f14) set_value_pane_vc

0x6682,	// (0x00035f19) list_double2_graphic_pane_vc_ParamLimits

0x6682,	// (0x00035f19) list_double2_graphic_pane_vc

0x6682,	// (0x00035f19) list_double2_large_graphic_pane_vc_ParamLimits

0x6682,	// (0x00035f19) list_double2_large_graphic_pane_vc

0x6682,	// (0x00035f19) list_double2_pane_vc_ParamLimits

0x6682,	// (0x00035f19) list_double2_pane_vc

0x6682,	// (0x00035f19) list_double_graphic_heading_pane_vc_ParamLimits

0x6682,	// (0x00035f19) list_double_graphic_heading_pane_vc

0x6682,	// (0x00035f19) list_double_graphic_pane_vc_ParamLimits

0x6682,	// (0x00035f19) list_double_graphic_pane_vc

0x6682,	// (0x00035f19) list_double_heading_pane_vc_ParamLimits

0x6682,	// (0x00035f19) list_double_heading_pane_vc

0x6694,	// (0x00035f2b) list_double_large_graphic_pane_vc_ParamLimits

0x6694,	// (0x00035f2b) list_double_large_graphic_pane_vc

0x6682,	// (0x00035f19) list_double_number_pane_vc_ParamLimits

0x6682,	// (0x00035f19) list_double_number_pane_vc

0x6682,	// (0x00035f19) list_double_pane_vc_ParamLimits

0x6682,	// (0x00035f19) list_double_pane_vc

0x6682,	// (0x00035f19) list_double_time_pane_vc_ParamLimits

0x6682,	// (0x00035f19) list_double_time_pane_vc

0x6682,	// (0x00035f19) list_setting_number_pane_vc_ParamLimits

0x6682,	// (0x00035f19) list_setting_number_pane_vc

0x6682,	// (0x00035f19) list_setting_pane_vc_ParamLimits

0x6682,	// (0x00035f19) list_setting_pane_vc

0x6682,	// (0x00035f19) list_single_graphic_heading_pane_vc_ParamLimits

0x6682,	// (0x00035f19) list_single_graphic_heading_pane_vc

0x6682,	// (0x00035f19) list_single_heading_pane_vc_ParamLimits

0x6682,	// (0x00035f19) list_single_heading_pane_vc

0x6682,	// (0x00035f19) list_single_number_heading_pane_vc_ParamLimits

0x6682,	// (0x00035f19) list_single_number_heading_pane_vc

0x1532,	// (0x00030dc9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1532,	// (0x00030dc9) list_double_graphic_heading_pane_vc_g1

0x153e,	// (0x00030dd5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x153e,	// (0x00030dd5) list_double_graphic_heading_pane_vc_g2

0x154a,	// (0x00030de1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x154a,	// (0x00030de1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0003f055) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003f055) list_double_graphic_heading_pane_vc_g

0x2ecd,	// (0x00032764) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2ecd,	// (0x00032764) list_double_graphic_heading_pane_vc_t1

0x2ee9,	// (0x00032780) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2ee9,	// (0x00032780) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0003f285) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0003f285) list_double_graphic_heading_pane_vc_t

0x1617,	// (0x00030eae) list_setting_pane_vc_g1_ParamLimits

0x1617,	// (0x00030eae) list_setting_pane_vc_g1

0x1623,	// (0x00030eba) list_setting_pane_vc_g2_ParamLimits

0x1623,	// (0x00030eba) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003f07b) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003f07b) list_setting_pane_vc_g

0x2f07,	// (0x0003279e) list_setting_pane_vc_t1_ParamLimits

0x2f07,	// (0x0003279e) list_setting_pane_vc_t1

0x2f23,	// (0x000327ba) list_setting_pane_vc_t2_ParamLimits

0x2f23,	// (0x000327ba) list_setting_pane_vc_t2

0x0001,

0xfa1c,	// (0x0003f2b3) list_setting_pane_vc_t_ParamLimits

0xfa1c,	// (0x0003f2b3) list_setting_pane_vc_t

0x167d,	// (0x00030f14) set_value_pane_cp_vc_ParamLimits

0x167d,	// (0x00030f14) set_value_pane_cp_vc

0x153e,	// (0x00030dd5) list_single_number_heading_pane_vc_g1_ParamLimits

0x153e,	// (0x00030dd5) list_single_number_heading_pane_vc_g1

0x154a,	// (0x00030de1) list_single_number_heading_pane_vc_g2_ParamLimits

0x154a,	// (0x00030de1) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ee5f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ee5f) list_single_number_heading_pane_vc_g

0x15c1,	// (0x00030e58) list_single_number_heading_pane_vc_t1_ParamLimits

0x15c1,	// (0x00030e58) list_single_number_heading_pane_vc_t1

0x2f3f,	// (0x000327d6) list_single_number_heading_pane_vc_t2_ParamLimits

0x2f3f,	// (0x000327d6) list_single_number_heading_pane_vc_t2

0x2f53,	// (0x000327ea) list_single_number_heading_pane_vc_t3_ParamLimits

0x2f53,	// (0x000327ea) list_single_number_heading_pane_vc_t3

0x0002,

0xfa21,	// (0x0003f2b8) list_single_number_heading_pane_vc_t_ParamLimits

0xfa21,	// (0x0003f2b8) list_single_number_heading_pane_vc_t

0x1532,	// (0x00030dc9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1532,	// (0x00030dc9) list_single_graphic_heading_pane_vc_g1

0x153e,	// (0x00030dd5) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x153e,	// (0x00030dd5) list_single_graphic_heading_pane_vc_g4

0x154a,	// (0x00030de1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x154a,	// (0x00030de1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0003f055) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003f055) list_single_graphic_heading_pane_vc_g

0x15c1,	// (0x00030e58) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x15c1,	// (0x00030e58) list_single_graphic_heading_pane_vc_t1

0x2f65,	// (0x000327fc) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2f65,	// (0x000327fc) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa28,	// (0x0003f2bf) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0003f2bf) list_single_graphic_heading_pane_vc_t

0x153e,	// (0x00030dd5) list_double2_pane_vc_g1_ParamLimits

0x153e,	// (0x00030dd5) list_double2_pane_vc_g1

0x154a,	// (0x00030de1) list_double2_pane_vc_g2_ParamLimits

0x154a,	// (0x00030de1) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ee5f) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ee5f) list_double2_pane_vc_g

0x2f79,	// (0x00032810) list_double2_pane_vc_t1_ParamLimits

0x2f79,	// (0x00032810) list_double2_pane_vc_t1

0x2f8f,	// (0x00032826) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2f8f,	// (0x00032826) list_double2_large_graphic_pane_vc_g1

0x153e,	// (0x00030dd5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x153e,	// (0x00030dd5) list_double2_large_graphic_pane_vc_g2

0x154a,	// (0x00030de1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x154a,	// (0x00030de1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0003ee7c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0003ee7c) list_double2_large_graphic_pane_vc_g

0x2f9b,	// (0x00032832) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2f9b,	// (0x00032832) list_double2_large_graphic_pane_vc_t1

0x2fb1,	// (0x00032848) list_double_time_pane_vc_g1_ParamLimits

0x2fb1,	// (0x00032848) list_double_time_pane_vc_g1

0x2fbd,	// (0x00032854) list_double_time_pane_vc_g2_ParamLimits

0x2fbd,	// (0x00032854) list_double_time_pane_vc_g2

0x0001,

0xfa2d,	// (0x0003f2c4) list_double_time_pane_vc_g_ParamLimits

0xfa2d,	// (0x0003f2c4) list_double_time_pane_vc_g

0x2fc9,	// (0x00032860) list_double_time_pane_vc_t1_ParamLimits

0x2fc9,	// (0x00032860) list_double_time_pane_vc_t1

0x2fed,	// (0x00032884) list_double_time_pane_vc_t2_ParamLimits

0x2fed,	// (0x00032884) list_double_time_pane_vc_t2

0x303c,	// (0x000328d3) list_double_time_pane_vc_t3_ParamLimits

0x303c,	// (0x000328d3) list_double_time_pane_vc_t3

0x304e,	// (0x000328e5) list_double_time_pane_vc_t4_ParamLimits

0x304e,	// (0x000328e5) list_double_time_pane_vc_t4

0x0003,

0xfa32,	// (0x0003f2c9) list_double_time_pane_vc_t_ParamLimits

0xfa32,	// (0x0003f2c9) list_double_time_pane_vc_t

0x153e,	// (0x00030dd5) list_double_pane_vc_g1_ParamLimits

0x153e,	// (0x00030dd5) list_double_pane_vc_g1

0x154a,	// (0x00030de1) list_double_pane_vc_g2_ParamLimits

0x154a,	// (0x00030de1) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ee5f) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ee5f) list_double_pane_vc_g

0x3062,	// (0x000328f9) list_double_pane_vc_t1_ParamLimits

0x3062,	// (0x000328f9) list_double_pane_vc_t1

0x3076,	// (0x0003290d) list_double_pane_vc_t2_ParamLimits

0x3076,	// (0x0003290d) list_double_pane_vc_t2

0x0001,

0xfa3b,	// (0x0003f2d2) list_double_pane_vc_t_ParamLimits

0xfa3b,	// (0x0003f2d2) list_double_pane_vc_t

0x153e,	// (0x00030dd5) list_double_number_pane_vc_g1_ParamLimits

0x153e,	// (0x00030dd5) list_double_number_pane_vc_g1

0x154a,	// (0x00030de1) list_double_number_pane_vc_g2_ParamLimits

0x154a,	// (0x00030de1) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ee5f) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ee5f) list_double_number_pane_vc_g

0x308e,	// (0x00032925) list_double_number_pane_vc_t1_ParamLimits

0x308e,	// (0x00032925) list_double_number_pane_vc_t1

0x30a0,	// (0x00032937) list_double_number_pane_vc_t2_ParamLimits

0x30a0,	// (0x00032937) list_double_number_pane_vc_t2

0x30b4,	// (0x0003294b) list_double_number_pane_vc_t3_ParamLimits

0x30b4,	// (0x0003294b) list_double_number_pane_vc_t3

0x0002,

0xfa40,	// (0x0003f2d7) list_double_number_pane_vc_t_ParamLimits

0xfa40,	// (0x0003f2d7) list_double_number_pane_vc_t

0x30cc,	// (0x00032963) list_double_large_graphic_pane_vc_g1_ParamLimits

0x30cc,	// (0x00032963) list_double_large_graphic_pane_vc_g1

0x30ee,	// (0x00032985) list_double_large_graphic_pane_vc_g2_ParamLimits

0x30ee,	// (0x00032985) list_double_large_graphic_pane_vc_g2

0x3102,	// (0x00032999) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3102,	// (0x00032999) list_double_large_graphic_pane_vc_g3

0x3111,	// (0x000329a8) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3111,	// (0x000329a8) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa47,	// (0x0003f2de) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0003f2de) list_double_large_graphic_pane_vc_g

0x311d,	// (0x000329b4) list_double_large_graphic_pane_vc_t1_ParamLimits

0x311d,	// (0x000329b4) list_double_large_graphic_pane_vc_t1

0x3139,	// (0x000329d0) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3139,	// (0x000329d0) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0003f2e7) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0003f2e7) list_double_large_graphic_pane_vc_t

0x153e,	// (0x00030dd5) list_double_heading_pane_vc_g1_ParamLimits

0x153e,	// (0x00030dd5) list_double_heading_pane_vc_g1

0x154a,	// (0x00030de1) list_double_heading_pane_vc_g2_ParamLimits

0x154a,	// (0x00030de1) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ee5f) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ee5f) list_double_heading_pane_vc_g

0x315b,	// (0x000329f2) list_double_heading_pane_vc_t1_ParamLimits

0x315b,	// (0x000329f2) list_double_heading_pane_vc_t1

0x15c1,	// (0x00030e58) list_double_heading_pane_vc_t2_ParamLimits

0x15c1,	// (0x00030e58) list_double_heading_pane_vc_t2

0x0001,

0xfa55,	// (0x0003f2ec) list_double_heading_pane_vc_t_ParamLimits

0xfa55,	// (0x0003f2ec) list_double_heading_pane_vc_t

0x316f,	// (0x00032a06) list_double_graphic_pane_vc_g1_ParamLimits

0x316f,	// (0x00032a06) list_double_graphic_pane_vc_g1

0x317b,	// (0x00032a12) list_double_graphic_pane_vc_g2_ParamLimits

0x317b,	// (0x00032a12) list_double_graphic_pane_vc_g2

0x153e,	// (0x00030dd5) list_double_graphic_pane_vc_g3_ParamLimits

0x153e,	// (0x00030dd5) list_double_graphic_pane_vc_g3

0x0003,

0xfa5a,	// (0x0003f2f1) list_double_graphic_pane_vc_g_ParamLimits

0xfa5a,	// (0x0003f2f1) list_double_graphic_pane_vc_g

0x3198,	// (0x00032a2f) list_double_graphic_pane_vc_t1_ParamLimits

0x3198,	// (0x00032a2f) list_double_graphic_pane_vc_t1

0x31c2,	// (0x00032a59) list_double_graphic_pane_vc_t2_ParamLimits

0x31c2,	// (0x00032a59) list_double_graphic_pane_vc_t2

0x0001,

0xfa63,	// (0x0003f2fa) list_double_graphic_pane_vc_t_ParamLimits

0xfa63,	// (0x0003f2fa) list_double_graphic_pane_vc_t

0xf337,	// (0x0003ebce) aid_size_cell_fastswap

0xb38b,	// (0x0003ac22) aid_size_cell_touch_ParamLimits

0xb38b,	// (0x0003ac22) aid_size_cell_touch

0xf52a,	// (0x0003edc1) popup_fast_swap_wide_window_ParamLimits

0xf52a,	// (0x0003edc1) popup_fast_swap_wide_window

0xb53b,	// (0x0003add2) touch_pane_ParamLimits

0xb53b,	// (0x0003add2) touch_pane

0x3bf8,	// (0x0003348f) button_value_adjust_pane_cp2

0x0667,	// (0x0002fefe) button_value_adjust_pane_cp4

0x0687,	// (0x0002ff1e) form_field_data_pane_cp2

0xb9f4,	// (0x0003b28b) form_field_data_wide_pane_cp2

0x4079,	// (0x00033910) bg_scroll_pane_ParamLimits

0x0a67,	// (0x000302fe) scroll_handle_pane_ParamLimits

0x0a7b,	// (0x00030312) scroll_sc2_down_pane_ParamLimits

0x0a7b,	// (0x00030312) scroll_sc2_down_pane

0x40aa,	// (0x00033941) scroll_sc2_up_pane_ParamLimits

0x40aa,	// (0x00033941) scroll_sc2_up_pane

0xddd8,	// (0x0003d66f) grid_wheel_folder_pane_g1_ParamLimits

0xddd8,	// (0x0003d66f) grid_wheel_folder_pane_g1

0x0cca,	// (0x00030561) clock_nsta_pane_cp2_ParamLimits

0x0cca,	// (0x00030561) clock_nsta_pane_cp2

0x4be0,	// (0x00034477) listscroll_midp_pane_ParamLimits

0xd26c,	// (0x0003cb03) midp_canvas_pane

0x4b92,	// (0x00034429) nsta_clock_indic_pane

0x4bc6,	// (0x0003445d) listscroll_form_pane_vc

0x4bce,	// (0x00034465) listscroll_set_pane_vc_ParamLimits

0x4bce,	// (0x00034465) listscroll_set_pane_vc

0xd4f1,	// (0x0003cd88) clock_nsta_pane

0xd51b,	// (0x0003cdb2) indicator_nsta_pane

0x5028,	// (0x000348bf) bg_popup_sub_pane_cp2_ParamLimits

0x503c,	// (0x000348d3) find_pane_cp2_ParamLimits

0x503c,	// (0x000348d3) find_pane_cp2

0x5052,	// (0x000348e9) grid_toobar_pane_ParamLimits

0x5132,	// (0x000349c9) list_form_gen_pane_vc_ParamLimits

0x5132,	// (0x000349c9) list_form_gen_pane_vc

0x5148,	// (0x000349df) scroll_pane_cp8_vc_ParamLimits

0x5148,	// (0x000349df) scroll_pane_cp8_vc

0x51c4,	// (0x00034a5b) data_form_wide_pane_vc_ParamLimits

0x51c4,	// (0x00034a5b) data_form_wide_pane_vc

0x51d0,	// (0x00034a67) form_field_data_wide_pane_vc_g1

0x51d8,	// (0x00034a6f) form_field_data_wide_pane_vc_t1_ParamLimits

0x51d8,	// (0x00034a6f) form_field_data_wide_pane_vc_t1

0x3c0c,	// (0x000334a3) input_focus_pane_cp6_vc_ParamLimits

0x3c0c,	// (0x000334a3) input_focus_pane_cp6_vc

0xd897,	// (0x0003d12e) list_midp_pane_ParamLimits

0x6863,	// (0x000360fa) scroll_pane_cp16_ParamLimits

0x6863,	// (0x000360fa) scroll_pane_cp16

0x555e,	// (0x00034df5) button_value_adjust_pane_ParamLimits

0x555e,	// (0x00034df5) button_value_adjust_pane

0xda38,	// (0x0003d2cf) button_value_adjust_pane_cp6_ParamLimits

0xda38,	// (0x0003d2cf) button_value_adjust_pane_cp6

0xdb52,	// (0x0003d3e9) settings_code_pane_cp_ParamLimits

0xdb52,	// (0x0003d3e9) settings_code_pane_cp

0x2b53,	// (0x000323ea) cell_touch_pane_g1

0x2b53,	// (0x000323ea) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0003ef9a) cell_touch_pane_g

0xdcc6,	// (0x0003d55d) cell_touch_pane_cp_ParamLimits

0xdcc6,	// (0x0003d55d) cell_touch_pane_cp

0xdce2,	// (0x0003d579) cell_touch_pane_ParamLimits

0xdce2,	// (0x0003d579) cell_touch_pane

0x2b53,	// (0x000323ea) scroll_sc2_down_pane_g1

0x2b53,	// (0x000323ea) scroll_sc2_up_pane_g1

0x2b5d,	// (0x000323f4) bg_set_opt_pane_cp4_vc

0x6bf3,	// (0x0003648a) list_set_graphic_pane_vc_g1_ParamLimits

0x6bf3,	// (0x0003648a) list_set_graphic_pane_vc_g1

0x6bff,	// (0x00036496) list_set_graphic_pane_vc_g2_ParamLimits

0x6bff,	// (0x00036496) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0003f28a) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0003f28a) list_set_graphic_pane_vc_g

0x6c0b,	// (0x000364a2) text_primary_small_cp13_vc_ParamLimits

0x6c0b,	// (0x000364a2) text_primary_small_cp13_vc

0x6c23,	// (0x000364ba) list_set_graphic_pane_vc_ParamLimits

0x6c23,	// (0x000364ba) list_set_graphic_pane_vc

0x2b5d,	// (0x000323f4) input_focus_pane_cp2_vc

0x2b53,	// (0x000323ea) setting_code_pane_vc_g1

0x2c88,	// (0x0003251f) setting_code_pane_vc_t1

0x6c36,	// (0x000364cd) set_text_pane_vc_t1_ParamLimits

0x6c36,	// (0x000364cd) set_text_pane_vc_t1

0x2b5d,	// (0x000323f4) input_focus_pane_cp1_vc

0x6c52,	// (0x000364e9) list_set_text_pane_vc

0x2b53,	// (0x000323ea) setting_text_pane_vc_g1

0x2b5d,	// (0x000323f4) bg_set_opt_pane_cp2_vc

0x2c7f,	// (0x00032516) setting_slider_graphic_pane_vc_g1

0x6c5c,	// (0x000364f3) setting_slider_graphic_pane_vc_t1

0x6c6c,	// (0x00036503) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0003f28f) setting_slider_graphic_pane_vc_t

0x6c7c,	// (0x00036513) slider_set_pane_cp_vc

0x6c84,	// (0x0003651b) slider_set_pane_vc_g1

0x6c8d,	// (0x00036524) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0003f294) slider_set_pane_vc_g

0x3c67,	// (0x000334fe) set_opt_bg_pane_g1_copy1

0x3c6f,	// (0x00033506) set_opt_bg_pane_g2_copy1

0x6cb9,	// (0x00036550) set_opt_bg_pane_g3_copy1

0x3c7f,	// (0x00033516) set_opt_bg_pane_g4_copy1

0x3c87,	// (0x0003351e) set_opt_bg_pane_g5_copy1

0x3c8f,	// (0x00033526) set_opt_bg_pane_g6_copy1

0x6cc3,	// (0x0003655a) set_opt_bg_pane_g7_copy1

0x6ccb,	// (0x00036562) set_opt_bg_pane_g8_copy1

0x6cd5,	// (0x0003656c) set_opt_bg_pane_g9_copy1

0x2b5d,	// (0x000323f4) bg_set_opt_pane_cp_vc

0x6cdf,	// (0x00036576) setting_slider_pane_vc_t1

0x6cee,	// (0x00036585) setting_slider_pane_vc_t2

0x6cfe,	// (0x00036595) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0003f2a3) setting_slider_pane_vc_t

0x6d0e,	// (0x000365a5) slider_set_pane_vc

0x176b,	// (0x00031002) volume_set_pane_vc_g1

0x1774,	// (0x0003100b) volume_set_pane_vc_g2

0x177d,	// (0x00031014) volume_set_pane_vc_g3

0x1786,	// (0x0003101d) volume_set_pane_vc_g4

0x178f,	// (0x00031026) volume_set_pane_vc_g5

0x1798,	// (0x0003102f) volume_set_pane_vc_g6

0x17a1,	// (0x00031038) volume_set_pane_vc_g7

0x17aa,	// (0x00031041) volume_set_pane_vc_g8

0x17b3,	// (0x0003104a) volume_set_pane_vc_g9

0x17bc,	// (0x00031053) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0003f148) volume_set_pane_vc_g

0x6d16,	// (0x000365ad) volume_set_pane_vc

0x6d1e,	// (0x000365b5) button_value_adjust_pane_cp1_vc

0x6d28,	// (0x000365bf) list_highlight_pane_cp2_vc

0x6d31,	// (0x000365c8) list_set_pane_vc_ParamLimits

0x6d31,	// (0x000365c8) list_set_pane_vc

0x6d8f,	// (0x00036626) main_pane_set_vc_t1_ParamLimits

0x6d8f,	// (0x00036626) main_pane_set_vc_t1

0x6da4,	// (0x0003663b) main_pane_set_vc_t2_ParamLimits

0x6da4,	// (0x0003663b) main_pane_set_vc_t2

0x6db6,	// (0x0003664d) main_pane_set_vc_t3_ParamLimits

0x6db6,	// (0x0003664d) main_pane_set_vc_t3

0x6dca,	// (0x00036661) main_pane_set_vc_t4_ParamLimits

0x6dca,	// (0x00036661) main_pane_set_vc_t4

0x0003,

0xfa13,	// (0x0003f2aa) main_pane_set_vc_t_ParamLimits

0xfa13,	// (0x0003f2aa) main_pane_set_vc_t

0x6dde,	// (0x00036675) setting_code_pane_vc_ParamLimits

0x6dde,	// (0x00036675) setting_code_pane_vc

0x6def,	// (0x00036686) setting_slider_graphic_pane_vc

0x6def,	// (0x00036686) setting_slider_pane_vc

0x6def,	// (0x00036686) setting_text_pane_vc

0x6def,	// (0x00036686) setting_volume_pane_vc

0x6df9,	// (0x00036690) scroll_pane_cp121_vc

0x3be6,	// (0x0003347d) set_content_pane_vc

0x6e01,	// (0x00036698) button_value_adjust_pane_g1

0x6e0a,	// (0x000366a1) button_value_adjust_pane_g2

0x0001,

0xfa68,	// (0x0003f2ff) button_value_adjust_pane_g

0x6e13,	// (0x000366aa) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6e13,	// (0x000366aa) form_field_slider_wide_pane_vc_t1

0x6e27,	// (0x000366be) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6e27,	// (0x000366be) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6d,	// (0x0003f304) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003f304) form_field_slider_wide_pane_vc_t

0x3618,	// (0x00032eaf) input_focus_pane_cp10_vc_ParamLimits

0x3618,	// (0x00032eaf) input_focus_pane_cp10_vc

0x6e55,	// (0x000366ec) slider_cont_pane_cp1_vc_ParamLimits

0x6e55,	// (0x000366ec) slider_cont_pane_cp1_vc

0x6e67,	// (0x000366fe) slider_form_pane_g1_cp2

0x6c8d,	// (0x00036524) slider_form_pane_g2_cp2

0x6e94,	// (0x0003672b) form_field_slider_pane_vc_t3

0x6ea2,	// (0x00036739) form_field_slider_pane_vc_t4

0x6eb0,	// (0x00036747) slider_form_pane_vc_ParamLimits

0x6eb0,	// (0x00036747) slider_form_pane_vc

0x6ebd,	// (0x00036754) form_field_slider_pane_vc_t1_ParamLimits

0x6ebd,	// (0x00036754) form_field_slider_pane_vc_t1

0x6e27,	// (0x000366be) form_field_slider_pane_vc_t2_ParamLimits

0x6e27,	// (0x000366be) form_field_slider_pane_vc_t2

0x0001,

0xfa7f,	// (0x0003f316) form_field_slider_pane_vc_t_ParamLimits

0xfa7f,	// (0x0003f316) form_field_slider_pane_vc_t

0x3618,	// (0x00032eaf) input_focus_pane_cp9_vc_ParamLimits

0x3618,	// (0x00032eaf) input_focus_pane_cp9_vc

0x6ed9,	// (0x00036770) slider_cont_pane_vc_ParamLimits

0x6ed9,	// (0x00036770) slider_cont_pane_vc

0x6eed,	// (0x00036784) list_form_graphic_pane_cp_vc_ParamLimits

0x6eed,	// (0x00036784) list_form_graphic_pane_cp_vc

0x51d0,	// (0x00034a67) form_field_popup_wide_pane_vc_g1

0x6f02,	// (0x00036799) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6f02,	// (0x00036799) form_field_popup_wide_pane_vc_t1

0x3c0c,	// (0x000334a3) input_focus_pane_cp8_vc_ParamLimits

0x3c0c,	// (0x000334a3) input_focus_pane_cp8_vc

0x6f47,	// (0x000367de) list_form_wide_pane_vc_ParamLimits

0x6f47,	// (0x000367de) list_form_wide_pane_vc

0x6f53,	// (0x000367ea) list_form_graphic_pane_vc_g1

0x6f5b,	// (0x000367f2) list_form_graphic_pane_vc_t1_ParamLimits

0x6f5b,	// (0x000367f2) list_form_graphic_pane_vc_t1

0x2c3d,	// (0x000324d4) list_highlight_pane_cp5_vc_ParamLimits

0x2c3d,	// (0x000324d4) list_highlight_pane_cp5_vc

0x6f77,	// (0x0003680e) list_form_graphic_pane_vc_ParamLimits

0x6f77,	// (0x0003680e) list_form_graphic_pane_vc

0x51d0,	// (0x00034a67) form_field_popup_pane_vc_g1

0x6f8d,	// (0x00036824) form_field_popup_pane_vc_t1_ParamLimits

0x6f8d,	// (0x00036824) form_field_popup_pane_vc_t1

0x3c0c,	// (0x000334a3) input_focus_pane_cp7_vc_ParamLimits

0x3c0c,	// (0x000334a3) input_focus_pane_cp7_vc

0x6fa4,	// (0x0003683b) list_form_pane_vc_ParamLimits

0x6fa4,	// (0x0003683b) list_form_pane_vc

0x6fb0,	// (0x00036847) data_form_pane_vc_t1_ParamLimits

0x6fb0,	// (0x00036847) data_form_pane_vc_t1

0x3c67,	// (0x000334fe) input_focus_pane_vc_g1

0x3c6f,	// (0x00033506) input_focus_pane_vc_g2

0x3c77,	// (0x0003350e) input_focus_pane_vc_g3

0x3c7f,	// (0x00033516) input_focus_pane_vc_g4

0x3c87,	// (0x0003351e) input_focus_pane_vc_g5

0x3c8f,	// (0x00033526) input_focus_pane_vc_g6

0x3c97,	// (0x0003352e) input_focus_pane_vc_g7

0x3c9f,	// (0x00033536) input_focus_pane_vc_g8

0x3ca7,	// (0x0003353e) input_focus_pane_vc_g9

0x2b53,	// (0x000323ea) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0003ef23) input_focus_pane_vc_g

0x51c4,	// (0x00034a5b) data_form_pane_vc_ParamLimits

0x51c4,	// (0x00034a5b) data_form_pane_vc

0x51d0,	// (0x00034a67) form_field_data_pane_vc_g1

0x6fcb,	// (0x00036862) form_field_data_pane_vc_t1_ParamLimits

0x6fcb,	// (0x00036862) form_field_data_pane_vc_t1

0x3c0c,	// (0x000334a3) input_focus_pane_vc_ParamLimits

0x3c0c,	// (0x000334a3) input_focus_pane_vc

0x6fe5,	// (0x0003687c) button_value_adjust_pane_cp3_vc

0x6fed,	// (0x00036884) button_value_adjust_pane_cp5_vc

0x6ff5,	// (0x0003688c) form_field_data_pane_vc_ParamLimits

0x6ff5,	// (0x0003688c) form_field_data_pane_vc

0x700c,	// (0x000368a3) form_field_data_pane_vc_cp2

0x7014,	// (0x000368ab) form_field_data_wide_pane_vc_ParamLimits

0x7014,	// (0x000368ab) form_field_data_wide_pane_vc

0x702a,	// (0x000368c1) form_field_data_wide_pane_vc_cp2

0x7032,	// (0x000368c9) form_field_popup_pane_vc_ParamLimits

0x7032,	// (0x000368c9) form_field_popup_pane_vc

0x7049,	// (0x000368e0) form_field_popup_wide_pane_vc_ParamLimits

0x7049,	// (0x000368e0) form_field_popup_wide_pane_vc

0x705f,	// (0x000368f6) form_field_slider_pane_vc_ParamLimits

0x705f,	// (0x000368f6) form_field_slider_pane_vc

0x7072,	// (0x00036909) form_field_slider_wide_pane_vc_ParamLimits

0x7072,	// (0x00036909) form_field_slider_wide_pane_vc

0xdd00,	// (0x0003d597) grid_touch_1_pane_ParamLimits

0xdd00,	// (0x0003d597) grid_touch_1_pane

0xdd14,	// (0x0003d5ab) grid_touch_2_pane_ParamLimits

0xdd14,	// (0x0003d5ab) grid_touch_2_pane

0x7140,	// (0x000369d7) touch_pane_g1_ParamLimits

0x7140,	// (0x000369d7) touch_pane_g1

0x70a9,	// (0x00036940) cell_app_pane_cp_wide_ParamLimits

0x70a9,	// (0x00036940) cell_app_pane_cp_wide

0x70ba,	// (0x00036951) grid_popup_fast_wide_pane_ParamLimits

0x70ba,	// (0x00036951) grid_popup_fast_wide_pane

0x70ce,	// (0x00036965) scroll_pane_cp19_ParamLimits

0x70ce,	// (0x00036965) scroll_pane_cp19

0x2b5d,	// (0x000323f4) bg_popup_window_pane_cp20

0x70e2,	// (0x00036979) listscroll_popup_fast_wide_pane

0x3dcf,	// (0x00033666) grid_indicator_nsta_pane

0x70ea,	// (0x00036981) clock_nsta_pane_g1

0x70f3,	// (0x0003698a) clock_nsta_pane_t1

0xdd3e,	// (0x0003d5d5) cell_indicator_nsta_pane_ParamLimits

0xdd3e,	// (0x0003d5d5) cell_indicator_nsta_pane

0x7140,	// (0x000369d7) cell_indicator_nsta_pane_g1

0xdd55,	// (0x0003d5ec) cell_indicator_nsta_pane_g2

0x0001,

0xfa90,	// (0x0003f327) cell_indicator_nsta_pane_g

0x715b,	// (0x000369f2) clock_nsta_pane_cp

0x7163,	// (0x000369fa) indicator_nsta_pane_cp

0x716b,	// (0x00036a02) nsta_clock_indic_pane_g1

0x2d06,	// (0x0003259d) grid_indicator_pane

0x419f,	// (0x00033a36) scroll_pane_cp29

0x0c19,	// (0x000304b0) indicator_nsta_pane_cp2_ParamLimits

0x0c19,	// (0x000304b0) indicator_nsta_pane_cp2

0x2c3d,	// (0x000324d4) main_apps_wheel_pane

0x53e5,	// (0x00034c7c) form_midp_field_text_pane_ParamLimits

0x5530,	// (0x00034dc7) scroll_bar_cp050_ParamLimits

0x71cc,	// (0x00036a63) cell_indicator_pane_ParamLimits

0x71cc,	// (0x00036a63) cell_indicator_pane

0x71e3,	// (0x00036a7a) cell_indicator_pane_g1

0xdd62,	// (0x0003d5f9) grid_wheel_folder_pane_ParamLimits

0xdd62,	// (0x0003d5f9) grid_wheel_folder_pane

0xdd70,	// (0x0003d607) list_wheel_apps_pane_ParamLimits

0xdd70,	// (0x0003d607) list_wheel_apps_pane

0xdd7e,	// (0x0003d615) main_apps_wheel_pane_g1_ParamLimits

0xdd7e,	// (0x0003d615) main_apps_wheel_pane_g1

0xdd8a,	// (0x0003d621) main_apps_wheel_pane_g2_ParamLimits

0xdd8a,	// (0x0003d621) main_apps_wheel_pane_g2

0x0001,

0xfaac,	// (0x0003f343) main_apps_wheel_pane_g_ParamLimits

0xfaac,	// (0x0003f343) main_apps_wheel_pane_g

0xdd98,	// (0x0003d62f) main_apps_wheel_pane_t1_ParamLimits

0xdd98,	// (0x0003d62f) main_apps_wheel_pane_t1

0xddac,	// (0x0003d643) list_wheel_apps_pane_g1

0xddb4,	// (0x0003d64b) list_wheel_apps_pane_g2

0xddbc,	// (0x0003d653) list_wheel_apps_pane_g3

0xddc4,	// (0x0003d65b) list_wheel_apps_pane_g4

0xddce,	// (0x0003d665) list_wheel_apps_pane_g5

0x0004,

0xfab1,	// (0x0003f348) list_wheel_apps_pane_g

0x4722,	// (0x00033fb9) navi_icon_text_pane

0xd3e5,	// (0x0003cc7c) aid_fill_nsta

0x72a8,	// (0x00036b3f) navi_icon_text_pane_g1

0x72b4,	// (0x00036b4b) navi_icon_text_pane_t1

0xd249,	// (0x0003cae0) list_set_graphic_pane_t1_ParamLimits

0xd249,	// (0x0003cae0) list_set_graphic_pane_t1

0x5c7f,	// (0x00035516) popup_midp_note_alarm_window_t6_ParamLimits

0x5c7f,	// (0x00035516) popup_midp_note_alarm_window_t6

0x5c91,	// (0x00035528) popup_midp_note_alarm_window_t7_ParamLimits

0x5c91,	// (0x00035528) popup_midp_note_alarm_window_t7

0x5ca3,	// (0x0003553a) popup_midp_note_alarm_window_t8_ParamLimits

0x5ca3,	// (0x0003553a) popup_midp_note_alarm_window_t8

0x5cb5,	// (0x0003554c) popup_midp_note_alarm_window_t9_ParamLimits

0x5cb5,	// (0x0003554c) popup_midp_note_alarm_window_t9

0x5cc7,	// (0x0003555e) popup_midp_note_alarm_window_t10_ParamLimits

0x5cc7,	// (0x0003555e) popup_midp_note_alarm_window_t10

0x5cd9,	// (0x00035570) popup_midp_note_alarm_window_t11_ParamLimits

0x5cd9,	// (0x00035570) popup_midp_note_alarm_window_t11

0x5ceb,	// (0x00035582) scroll_pane_cp17_ParamLimits

0x5ceb,	// (0x00035582) scroll_pane_cp17

0x176b,	// (0x00031002) volume_small_pane_cp_g1

0x1b07,	// (0x0003139e) volume_small_pane_cp_g2

0x1b10,	// (0x000313a7) volume_small_pane_cp_g3

0x1b19,	// (0x000313b0) volume_small_pane_cp_g4

0x1b22,	// (0x000313b9) volume_small_pane_cp_g5

0x1b2b,	// (0x000313c2) volume_small_pane_cp_g6

0x1b34,	// (0x000313cb) volume_small_pane_cp_g7

0x1b3d,	// (0x000313d4) volume_small_pane_cp_g8

0x1b46,	// (0x000313dd) volume_small_pane_cp_g9

0x1b4f,	// (0x000313e6) volume_small_pane_cp_g10

0x4973,	// (0x0003420a) midp_ticker_pane_g1_ParamLimits

0x497f,	// (0x00034216) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0003efef) midp_ticker_pane_g_ParamLimits

0x498b,	// (0x00034222) midp_ticker_pane_t1_ParamLimits

0xd409,	// (0x0003cca0) aid_fill_nsta_2

0x551c,	// (0x00034db3) list_form2_midp_pane

0x6651,	// (0x00035ee8) midp_editing_number_pane_ParamLimits

0x6660,	// (0x00035ef7) midp_ticker_pane_ParamLimits

0x72c6,	// (0x00036b5d) form2_midp_field_pane

0x72ea,	// (0x00036b81) scroll_pane_cp51

0x730a,	// (0x00036ba1) form2_midp_button_pane_ParamLimits

0x730a,	// (0x00036ba1) form2_midp_button_pane

0x731c,	// (0x00036bb3) form2_midp_content_pane_ParamLimits

0x731c,	// (0x00036bb3) form2_midp_content_pane

0x7336,	// (0x00036bcd) form2_midp_field_choice_group_pane

0x733e,	// (0x00036bd5) form2_midp_field_pane_g1

0x7346,	// (0x00036bdd) form2_midp_field_pane_g2

0x734e,	// (0x00036be5) form2_midp_field_pane_g3

0x7356,	// (0x00036bed) form2_midp_field_pane_g4

0x0003,

0xfad6,	// (0x0003f36d) form2_midp_field_pane_g

0x735e,	// (0x00036bf5) form2_midp_gauge_slider_pane

0x7366,	// (0x00036bfd) form2_midp_gauge_wait_pane

0x736e,	// (0x00036c05) form2_midp_image_pane_ParamLimits

0x736e,	// (0x00036c05) form2_midp_image_pane

0x7389,	// (0x00036c20) form2_midp_label_pane_ParamLimits

0x7389,	// (0x00036c20) form2_midp_label_pane

0xde01,	// (0x0003d698) form2_midp_label_pane_cp_ParamLimits

0xde01,	// (0x0003d698) form2_midp_label_pane_cp

0x73c3,	// (0x00036c5a) form2_midp_string_pane_ParamLimits

0x73c3,	// (0x00036c5a) form2_midp_string_pane

0xc4f8,	// (0x0003bd8f) form2_midp_text_pane_ParamLimits

0xc4f8,	// (0x0003bd8f) form2_midp_text_pane

0x73d5,	// (0x00036c6c) form2_midp_time_pane

0x73e5,	// (0x00036c7c) input_focus_pane_cp51_ParamLimits

0x73e5,	// (0x00036c7c) input_focus_pane_cp51

0x73fd,	// (0x00036c94) form2_midp_label_pane_t1_ParamLimits

0x73fd,	// (0x00036c94) form2_midp_label_pane_t1

0xc511,	// (0x0003bda8) form2_mdip_text_pane_t1_ParamLimits

0xc511,	// (0x0003bda8) form2_mdip_text_pane_t1

0x3225,	// (0x00032abc) form2_midp_time_pane_t1

0x7446,	// (0x00036cdd) form2_midp_gauge_slider_pane_t1

0xde20,	// (0x0003d6b7) form2_midp_gauge_slider_pane_t2

0xde32,	// (0x0003d6c9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfadf,	// (0x0003f376) form2_midp_gauge_slider_pane_t

0x747c,	// (0x00036d13) form2_midp_slider_pane

0x7488,	// (0x00036d1f) form2_midp_gauge_wait_pane_t1

0x7496,	// (0x00036d2d) form2_midp_wait_pane_ParamLimits

0x7496,	// (0x00036d2d) form2_midp_wait_pane

0xde44,	// (0x0003d6db) list_single_2graphic_pane_cp4_ParamLimits

0xde44,	// (0x0003d6db) list_single_2graphic_pane_cp4

0xd825,	// (0x0003d0bc) list_single_midp_graphic_pane_cp_ParamLimits

0xd825,	// (0x0003d0bc) list_single_midp_graphic_pane_cp

0x2b5d,	// (0x000323f4) list_highlight_pane_cp20

0x74f0,	// (0x00036d87) list_single_2graphic_pane_g1_cp4

0x74f8,	// (0x00036d8f) list_single_2graphic_pane_g2_cp4

0x7500,	// (0x00036d97) list_single_2graphic_pane_t1_cp4

0x2c3d,	// (0x000324d4) list_highlight_pane_cp21

0x750f,	// (0x00036da6) list_single_midp_graphic_pane_g4_cp

0x751e,	// (0x00036db5) list_single_midp_graphic_pane_t1_cp

0xde58,	// (0x0003d6ef) form2_mdip_string_pane_t1_ParamLimits

0xde58,	// (0x0003d6ef) form2_mdip_string_pane_t1

0x2b5d,	// (0x000323f4) bg_wml_button_pane_cp2

0x2b53,	// (0x000323ea) form2_midp_image_pane_g1

0x0451,	// (0x0002fce8) list_double_large_graphic_pane_g5_ParamLimits

0x0451,	// (0x0002fce8) list_double_large_graphic_pane_g5

0x4be0,	// (0x00034477) midp_form_pane_ParamLimits

0x2c3d,	// (0x000324d4) main_apps_wheel_pane_ParamLimits

0xc15d,	// (0x0003b9f4) popup_preview_window_ParamLimits

0xc15d,	// (0x0003b9f4) popup_preview_window

0x14ad,	// (0x00030d44) popup_touch_info_window_ParamLimits

0x14ad,	// (0x00030d44) popup_touch_info_window

0x14cb,	// (0x00030d62) popup_touch_menu_window_ParamLimits

0x14cb,	// (0x00030d62) popup_touch_menu_window

0x2b49,	// (0x000323e0) bg_popup_sub_pane_cp6

0x7638,	// (0x00036ecf) list_touch_menu_pane

0x7640,	// (0x00036ed7) list_single_touch_menu_pane_ParamLimits

0x7640,	// (0x00036ed7) list_single_touch_menu_pane

0x7656,	// (0x00036eed) list_single_touch_menu_pane_t1

0x2c3d,	// (0x000324d4) bg_popup_sub_pane_cp7_ParamLimits

0x2c3d,	// (0x000324d4) bg_popup_sub_pane_cp7

0x7664,	// (0x00036efb) heading_sub_pane

0x766c,	// (0x00036f03) list_touch_info_pane_ParamLimits

0x766c,	// (0x00036f03) list_touch_info_pane

0x767b,	// (0x00036f12) list_single_touch_info_pane_ParamLimits

0x767b,	// (0x00036f12) list_single_touch_info_pane

0x768d,	// (0x00036f24) list_single_touch_info_pane_t1

0x769b,	// (0x00036f32) list_single_touch_info_pane_t2

0x0001,

0xfaed,	// (0x0003f384) list_single_touch_info_pane_t

0x48a2,	// (0x00034139) bg_popup_heading_pane_cp

0x76a9,	// (0x00036f40) heading_sub_pane_t1

0x515e,	// (0x000349f5) bg_popup_preview_window_pane_cp_ParamLimits

0x515e,	// (0x000349f5) bg_popup_preview_window_pane_cp

0x7664,	// (0x00036efb) heading_preview_pane

0x766c,	// (0x00036f03) list_preview_pane_ParamLimits

0x766c,	// (0x00036f03) list_preview_pane

0x76b7,	// (0x00036f4e) popup_preview_window_g1

0x767b,	// (0x00036f12) list_single_preview_pane_ParamLimits

0x767b,	// (0x00036f12) list_single_preview_pane

0x76bf,	// (0x00036f56) list_single_preview_pane_g1

0x76c7,	// (0x00036f5e) list_single_preview_pane_t1

0x768d,	// (0x00036f24) list_single_preview_pane_t2

0x0001,

0xfaf2,	// (0x0003f389) list_single_preview_pane_t

0x76d5,	// (0x00036f6c) bg_popup_heading_pane_cp2_ParamLimits

0x76d5,	// (0x00036f6c) bg_popup_heading_pane_cp2

0x76eb,	// (0x00036f82) heading_preview_pane_g1

0x76f3,	// (0x00036f8a) heading_preview_pane_t1_ParamLimits

0x76f3,	// (0x00036f8a) heading_preview_pane_t1

0x2d29,	// (0x000325c0) soft_indicator_pane_t1_ParamLimits

0x3b7f,	// (0x00033416) scroll_pane_ParamLimits

0x4098,	// (0x0003392f) scroll_sc2_left_pane

0x40a1,	// (0x00033938) scroll_sc2_right_pane

0x40c0,	// (0x00033957) scroll_bg_pane_g1_ParamLimits

0x40d5,	// (0x0003396c) scroll_bg_pane_g2_ParamLimits

0x40ed,	// (0x00033984) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0003ef7a) scroll_bg_pane_g_ParamLimits

0x40c0,	// (0x00033957) scroll_handle_pane_g1_ParamLimits

0x410f,	// (0x000339a6) scroll_handle_pane_g2_ParamLimits

0x40ed,	// (0x00033984) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0003ef81) scroll_handle_pane_g_ParamLimits

0x0f73,	// (0x0003080a) popup_choice_list_window_ParamLimits

0x0f73,	// (0x0003080a) popup_choice_list_window

0x5034,	// (0x000348cb) choice_list_pane

0x50b6,	// (0x0003494d) cell_toolbar_pane_t1

0x50de,	// (0x00034975) toolbar_button_pane_ParamLimits

0x61b1,	// (0x00035a48) ai_gene_pane_1_t2_ParamLimits

0x61b1,	// (0x00035a48) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0003f1a4) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0003f1a4) ai_gene_pane_1_t

0x7710,	// (0x00036fa7) scroll_sc2_left_pane_g1

0x7710,	// (0x00036fa7) scroll_sc2_right_pane_g1

0x4be0,	// (0x00034477) bg_popup_sub_pane_cp10

0x771a,	// (0x00036fb1) list_choice_list_pane

0x7733,	// (0x00036fca) list_single_choice_list_pane_ParamLimits

0x7733,	// (0x00036fca) list_single_choice_list_pane

0x7746,	// (0x00036fdd) list_single_choice_list_pane_g1

0x3da0,	// (0x00033637) list_single_choice_list_pane_t1_ParamLimits

0x3da0,	// (0x00033637) list_single_choice_list_pane_t1

0x774e,	// (0x00036fe5) choice_list_pane_g1

0x7756,	// (0x00036fed) choice_list_pane_t1

0x2b49,	// (0x000323e0) input_focus_pane_cp11

0x3f77,	// (0x0003380e) title_pane_stacon_g2_ParamLimits

0x3f77,	// (0x0003380e) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0003ef60) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003ef60) title_pane_stacon_g

0x48a2,	// (0x00034139) cursor_press_pane

0xbe0a,	// (0x0003b6a1) popup_fep_hwr_window_ParamLimits

0xbe0a,	// (0x0003b6a1) popup_fep_hwr_window

0x1099,	// (0x00030930) popup_fep_vkb_window_ParamLimits

0x1099,	// (0x00030930) popup_fep_vkb_window

0x7764,	// (0x00036ffb) cursor_press_pane_g1

0x0002,

0xfb1b,	// (0x0003f3b2) fep_vkb_side_pane_g_ParamLimits

0x1b91,	// (0x00031428) fep_hwr_candidate_pane_ParamLimits

0x1b91,	// (0x00031428) fep_hwr_candidate_pane

0x1bbb,	// (0x00031452) fep_hwr_side_pane_ParamLimits

0x1bbb,	// (0x00031452) fep_hwr_side_pane

0x1bdb,	// (0x00031472) fep_hwr_top_pane_ParamLimits

0x1bdb,	// (0x00031472) fep_hwr_top_pane

0x1bf3,	// (0x0003148a) fep_hwr_write_pane_ParamLimits

0x1bf3,	// (0x0003148a) fep_hwr_write_pane

0xfb1b,	// (0x0003f3b2) fep_vkb_side_pane_g

0x776c,	// (0x00037003) fep_hwr_top_pane_g1

0x777e,	// (0x00037015) fep_hwr_top_pane_g2

0x1c2d,	// (0x000314c4) fep_hwr_top_pane_g3

0x0002,

0xfaf7,	// (0x0003f38e) fep_hwr_top_pane_g

0x1c42,	// (0x000314d9) fep_hwr_top_text_pane

0x428f,	// (0x00033b26) fep_hwr_top_text_pane_g1

0x77b4,	// (0x0003704b) fep_hwr_top_text_pane_t1

0x1d38,	// (0x000315cf) fep_hwr_candidate_pane_g1

0x7a07,	// (0x0003729e) fep_vkb_keypad_pane_g3_ParamLimits

0x7a07,	// (0x0003729e) fep_vkb_keypad_pane_g3

0x7a2f,	// (0x000372c6) fep_vkb_keypad_pane_g4_ParamLimits

0x7a2f,	// (0x000372c6) fep_vkb_keypad_pane_g4

0x7a9e,	// (0x00037335) fep_vkb_bottom_pane_g2_ParamLimits

0x7a9e,	// (0x00037335) fep_vkb_bottom_pane_g2

0x0001,

0xfb22,	// (0x0003f3b9) fep_vkb_bottom_pane_g_ParamLimits

0xfb22,	// (0x0003f3b9) fep_vkb_bottom_pane_g

0x7710,	// (0x00036fa7) cell_vkb_side_pane_g2

0x0001,

0xfb2c,	// (0x0003f3c3) cell_vkb_side_pane_g

0x7b29,	// (0x000373c0) cell_vkb_side_pane_t1

0x7b37,	// (0x000373ce) cell_vkb_side_pane_t1_copy1

0x7710,	// (0x00036fa7) bg_fep_vkb_candidate_pane_g2

0x7c63,	// (0x000374fa) cell_vkb_candidate_pane_ParamLimits

0x77c2,	// (0x00037059) aid_size_cell_vkb_ParamLimits

0x77c2,	// (0x00037059) aid_size_cell_vkb

0x7c63,	// (0x000374fa) cell_vkb_candidate_pane

0x1d5f,	// (0x000315f6) bg_popup_fep_shadow_pane_g1

0xdedc,	// (0x0003d773) fep_vkb_bottom_pane_ParamLimits

0xdedc,	// (0x0003d773) fep_vkb_bottom_pane

0x7886,	// (0x0003711d) fep_vkb_candidate_pane_ParamLimits

0x7886,	// (0x0003711d) fep_vkb_candidate_pane

0xdf01,	// (0x0003d798) fep_vkb_keypad_pane_ParamLimits

0xdf01,	// (0x0003d798) fep_vkb_keypad_pane

0xdf3d,	// (0x0003d7d4) fep_vkb_side_pane_ParamLimits

0xdf3d,	// (0x0003d7d4) fep_vkb_side_pane

0xdf79,	// (0x0003d810) fep_vkb_top_pane_ParamLimits

0xdf79,	// (0x0003d810) fep_vkb_top_pane

0x7960,	// (0x000371f7) fep_vkb_top_pane_g1_ParamLimits

0x7960,	// (0x000371f7) fep_vkb_top_pane_g1

0x796f,	// (0x00037206) fep_vkb_top_pane_g2_ParamLimits

0x796f,	// (0x00037206) fep_vkb_top_pane_g2

0x797e,	// (0x00037215) fep_vkb_top_pane_g3_ParamLimits

0x797e,	// (0x00037215) fep_vkb_top_pane_g3

0x0003,

0xfb12,	// (0x0003f3a9) fep_vkb_top_pane_g_ParamLimits

0xfb12,	// (0x0003f3a9) fep_vkb_top_pane_g

0x799c,	// (0x00037233) fep_vkb_top_text_pane_ParamLimits

0x799c,	// (0x00037233) fep_vkb_top_text_pane

0xdfb5,	// (0x0003d84c) fep_vkb_side_pane_g1_ParamLimits

0xdfb5,	// (0x0003d84c) fep_vkb_side_pane_g1

0x79f6,	// (0x0003728d) grid_vkb_side_pane_ParamLimits

0x79f6,	// (0x0003728d) grid_vkb_side_pane

0x1d67,	// (0x000315fe) bg_popup_fep_shadow_pane_g2

0x1d70,	// (0x00031607) bg_popup_fep_shadow_pane_g3

0x1d78,	// (0x0003160f) bg_popup_fep_shadow_pane_g4

0x1d81,	// (0x00031618) bg_popup_fep_shadow_pane_g5

0x1d8b,	// (0x00031622) bg_popup_fep_shadow_pane_g6

0x1d93,	// (0x0003162a) bg_popup_fep_shadow_pane_g7

0x3c7f,	// (0x00033516) bg_popup_fep_shadow_pane_g8

0x7a4d,	// (0x000372e4) grid_vkb_keypad_number_pane_ParamLimits

0x7a4d,	// (0x000372e4) grid_vkb_keypad_number_pane

0x7a5d,	// (0x000372f4) grid_vkb_keypad_pane_ParamLimits

0x7a5d,	// (0x000372f4) grid_vkb_keypad_pane

0x7a83,	// (0x0003731a) fep_vkb_bottom_pane_g1_ParamLimits

0x7a83,	// (0x0003731a) fep_vkb_bottom_pane_g1

0x7aac,	// (0x00037343) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7aac,	// (0x00037343) grid_vkb_keypad_bottom_left_pane

0x7ac1,	// (0x00037358) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7ac1,	// (0x00037358) grid_vkb_keypad_bottom_right_pane

0x7ad6,	// (0x0003736d) fep_vkb_top_text_pane_g1

0xdffc,	// (0x0003d893) fep_vkb_top_text_pane_t1

0xe00e,	// (0x0003d8a5) cell_vkb_side_pane_ParamLimits

0xe00e,	// (0x0003d8a5) cell_vkb_side_pane

0x7710,	// (0x00036fa7) cell_vkb_side_pane_g1

0x7b45,	// (0x000373dc) cell_vkb_keypad_pane_ParamLimits

0x7b45,	// (0x000373dc) cell_vkb_keypad_pane

0x7bba,	// (0x00037451) cell_vkb_keypad_pane_g1

0x0008,

0xfb3f,	// (0x0003f3d6) bg_popup_fep_shadow_pane_g

0x1da5,	// (0x0003163c) cell_hwr_side_pane_g1

0x1da5,	// (0x0003163c) cell_hwr_side_pane_g2

0x7bc4,	// (0x0003745b) cell_vkb_keypad_pane_t1

0xe024,	// (0x0003d8bb) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe024,	// (0x0003d8bb) cell_vkb_keypad_bottom_left_pane

0xe039,	// (0x0003d8d0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe039,	// (0x0003d8d0) cell_vkb_keypad_bottom_right_pane

0x7710,	// (0x00036fa7) cell_vkb_keypad_bottom_left_pane_g1

0x7710,	// (0x00036fa7) cell_vkb_keypad_bottom_right_pane_g1

0x7c28,	// (0x000374bf) cell_vkb_keypad_number_pane_ParamLimits

0x7c28,	// (0x000374bf) cell_vkb_keypad_number_pane

0x7c47,	// (0x000374de) cell_vkb_keypad_number_pane_g1

0x7c51,	// (0x000374e8) cell_vkb_keypad_number_pane_g2

0x7c5a,	// (0x000374f1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb31,	// (0x0003f3c8) cell_vkb_keypad_number_pane_g

0x7bc4,	// (0x0003745b) cell_vkb_keypad_number_pane_t1

0x7c7e,	// (0x00037515) fep_vkb_candidate_pane_g1

0x0001,

0xfb52,	// (0x0003f3e9) cell_hwr_side_pane_g

0x7c97,	// (0x0003752e) cell_hwr_side_pane_t1

0x1daf,	// (0x00031646) cell_hwr_side_pane_t1_copy1

0x1dbd,	// (0x00031654) cell_hwr_candidate_pane_g1

0x1dec,	// (0x00031683) cell_hwr_candidate_pane_t1

0x7710,	// (0x00036fa7) cell_vkb_candidate_pane_g2

0x7cdb,	// (0x00037572) cell_vkb_candidate_pane_t1

0x1b58,	// (0x000313ef) bg_popup_fep_shadow_pane_ParamLimits

0x1b58,	// (0x000313ef) bg_popup_fep_shadow_pane

0x1c0d,	// (0x000314a4) bg_fep_hwr_top_pane_g4

0x7790,	// (0x00037027) bg_hwr_side_pane_g1_ParamLimits

0x7790,	// (0x00037027) bg_hwr_side_pane_g1

0xc546,	// (0x0003bddd) cell_hwr_side_pane_ParamLimits

0xc546,	// (0x0003bddd) cell_hwr_side_pane

0x1cb9,	// (0x00031550) fep_hwr_write_pane_g1_ParamLimits

0x1cb9,	// (0x00031550) fep_hwr_write_pane_g1

0x1cc6,	// (0x0003155d) fep_hwr_write_pane_g2_ParamLimits

0x1cc6,	// (0x0003155d) fep_hwr_write_pane_g2

0x1cd3,	// (0x0003156a) fep_hwr_write_pane_g3_ParamLimits

0x1cd3,	// (0x0003156a) fep_hwr_write_pane_g3

0xc566,	// (0x0003bdfd) fep_hwr_write_pane_g4_ParamLimits

0xc566,	// (0x0003bdfd) fep_hwr_write_pane_g4

0x0005,

0xfafe,	// (0x0003f395) fep_hwr_write_pane_g_ParamLimits

0xfafe,	// (0x0003f395) fep_hwr_write_pane_g

0x1c0d,	// (0x000314a4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1c0d,	// (0x000314a4) bg_fep_hwr_candidate_pane_g2

0x1cf6,	// (0x0003158d) cell_hwr_candidate_pane_ParamLimits

0x1cf6,	// (0x0003158d) cell_hwr_candidate_pane

0x1d38,	// (0x000315cf) fep_hwr_candidate_pane_g1_ParamLimits

0x77f0,	// (0x00037087) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x77f0,	// (0x00037087) bg_popup_fep_shadow_pane_cp2

0x798e,	// (0x00037225) fep_vkb_top_pane_g4_ParamLimits

0x798e,	// (0x00037225) fep_vkb_top_pane_g4

0x79d4,	// (0x0003726b) fep_vkb_side_pane_g2_ParamLimits

0x79d4,	// (0x0003726b) fep_vkb_side_pane_g2

0xb902,	// (0x0003b199) list_setting_pane_t4_ParamLimits

0xb902,	// (0x0003b199) list_setting_pane_t4

0xb99c,	// (0x0003b233) list_setting_number_pane_t5_ParamLimits

0xb99c,	// (0x0003b233) list_setting_number_pane_t5

0x42c6,	// (0x00033b5d) list_double_heading_pane_cp2_ParamLimits

0x42c6,	// (0x00033b5d) list_double_heading_pane_cp2

0x3c1a,	// (0x000334b1) list_double_heading_pane_g1_cp2_ParamLimits

0x3c1a,	// (0x000334b1) list_double_heading_pane_g1_cp2

0x3c26,	// (0x000334bd) list_double_heading_pane_g2_cp2_ParamLimits

0x3c26,	// (0x000334bd) list_double_heading_pane_g2_cp2

0x7ce9,	// (0x00037580) list_double_heading_pane_t1_cp2_ParamLimits

0x7ce9,	// (0x00037580) list_double_heading_pane_t1_cp2

0x7cff,	// (0x00037596) list_double_heading_pane_t2_cp2_ParamLimits

0x7cff,	// (0x00037596) list_double_heading_pane_t2_cp2

0x2b31,	// (0x000323c8) aid_value_unit2

0x0004,	// (0x0002f89b) popup_preview_fixed_window

0x3626,	// (0x00032ebd) bg_popup_preview_window_pane_cp02

0x7d11,	// (0x000375a8) list_preview_fixed_pane

0x7d57,	// (0x000375ee) list_empty_pane_fp_ParamLimits

0x7d57,	// (0x000375ee) list_empty_pane_fp

0x7d57,	// (0x000375ee) list_single_cale_day_pane_fp_ParamLimits

0x7d57,	// (0x000375ee) list_single_cale_day_pane_fp

0x7d57,	// (0x000375ee) list_single_graphic_heading_pane_fp_ParamLimits

0x7d57,	// (0x000375ee) list_single_graphic_heading_pane_fp

0x7d57,	// (0x000375ee) list_single_graphic_pane_fp_ParamLimits

0x7d57,	// (0x000375ee) list_single_graphic_pane_fp

0x7d57,	// (0x000375ee) list_single_heading_pane_fp_ParamLimits

0x7d57,	// (0x000375ee) list_single_heading_pane_fp

0x7d57,	// (0x000375ee) list_single_pane_fp_ParamLimits

0x7d57,	// (0x000375ee) list_single_pane_fp

0x7d6c,	// (0x00037603) list_single_pane_fp_g1_ParamLimits

0x7d6c,	// (0x00037603) list_single_pane_fp_g1

0x3238,	// (0x00032acf) list_single_pane_fp_g2_ParamLimits

0x3238,	// (0x00032acf) list_single_pane_fp_g2

0x3244,	// (0x00032adb) list_single_pane_fp_g3_ParamLimits

0x3244,	// (0x00032adb) list_single_pane_fp_g3

0x7d78,	// (0x0003760f) list_single_pane_fp_g4_ParamLimits

0x7d78,	// (0x0003760f) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0003f3fc) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0003f3fc) list_single_pane_fp_g

0x3258,	// (0x00032aef) list_single_pane_fp_t1_ParamLimits

0x3258,	// (0x00032aef) list_single_pane_fp_t1

0x326f,	// (0x00032b06) list_single_graphic_pane_fp_g1_ParamLimits

0x326f,	// (0x00032b06) list_single_graphic_pane_fp_g1

0x7d6c,	// (0x00037603) list_single_graphic_pane_fp_g2_ParamLimits

0x7d6c,	// (0x00037603) list_single_graphic_pane_fp_g2

0x3238,	// (0x00032acf) list_single_graphic_pane_fp_g3_ParamLimits

0x3238,	// (0x00032acf) list_single_graphic_pane_fp_g3

0x3244,	// (0x00032adb) list_single_graphic_pane_fp_g4_ParamLimits

0x3244,	// (0x00032adb) list_single_graphic_pane_fp_g4

0x7d78,	// (0x0003760f) list_single_graphic_pane_fp_g5_ParamLimits

0x7d78,	// (0x0003760f) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003f405) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003f405) list_single_graphic_pane_fp_g

0x327b,	// (0x00032b12) list_single_graphic_pane_fp_t1_ParamLimits

0x327b,	// (0x00032b12) list_single_graphic_pane_fp_t1

0x326f,	// (0x00032b06) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x326f,	// (0x00032b06) list_single_graphic_heading_pane_fp_g1

0x7d6c,	// (0x00037603) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7d6c,	// (0x00037603) list_single_graphic_heading_pane_fp_g2

0x3238,	// (0x00032acf) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3238,	// (0x00032acf) list_single_graphic_heading_pane_fp_g3

0x3244,	// (0x00032adb) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3244,	// (0x00032adb) list_single_graphic_heading_pane_fp_g4

0x7d78,	// (0x0003760f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7d78,	// (0x0003760f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003f405) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003f405) list_single_graphic_heading_pane_fp_g

0x3291,	// (0x00032b28) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3291,	// (0x00032b28) list_single_graphic_heading_pane_fp_t1

0x32a7,	// (0x00032b3e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x32a7,	// (0x00032b3e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0003f410) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0003f410) list_single_graphic_heading_pane_fp_t

0x32b9,	// (0x00032b50) list_single_cale_day_pane_fp_g1_ParamLimits

0x32b9,	// (0x00032b50) list_single_cale_day_pane_fp_g1

0x7d84,	// (0x0003761b) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d84,	// (0x0003761b) list_single_cale_day_pane_fp_g2

0x32f1,	// (0x00032b88) list_single_cale_day_pane_fp_g3_ParamLimits

0x32f1,	// (0x00032b88) list_single_cale_day_pane_fp_g3

0x3319,	// (0x00032bb0) list_single_cale_day_pane_fp_g4_ParamLimits

0x3319,	// (0x00032bb0) list_single_cale_day_pane_fp_g4

0x333d,	// (0x00032bd4) list_single_cale_day_pane_fp_g5_ParamLimits

0x333d,	// (0x00032bd4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003f415) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003f415) list_single_cale_day_pane_fp_g

0x3361,	// (0x00032bf8) list_single_cale_day_pane_fp_t1_ParamLimits

0x3361,	// (0x00032bf8) list_single_cale_day_pane_fp_t1

0x3387,	// (0x00032c1e) list_single_cale_day_pane_fp_t2_ParamLimits

0x3387,	// (0x00032c1e) list_single_cale_day_pane_fp_t2

0x33a0,	// (0x00032c37) list_single_cale_day_pane_fp_t3_ParamLimits

0x33a0,	// (0x00032c37) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0003f420) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0003f420) list_single_cale_day_pane_fp_t

0x7d6c,	// (0x00037603) list_empty_pane_fp_g1_ParamLimits

0x7d6c,	// (0x00037603) list_empty_pane_fp_g1

0x33b9,	// (0x00032c50) list_empty_pane_fp_t1

0x33c7,	// (0x00032c5e) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0003f427) list_empty_pane_fp_t

0x7d6c,	// (0x00037603) list_single_heading_pane_fp_g1_ParamLimits

0x7d6c,	// (0x00037603) list_single_heading_pane_fp_g1

0x3238,	// (0x00032acf) list_single_heading_pane_fp_g2_ParamLimits

0x3238,	// (0x00032acf) list_single_heading_pane_fp_g2

0x3244,	// (0x00032adb) list_single_heading_pane_fp_g3_ParamLimits

0x3244,	// (0x00032adb) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0003f42c) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0003f42c) list_single_heading_pane_fp_g

0x33d5,	// (0x00032c6c) list_single_heading_pane_fp_t1_ParamLimits

0x33d5,	// (0x00032c6c) list_single_heading_pane_fp_t1

0x33e7,	// (0x00032c7e) list_single_heading_pane_fp_t2_ParamLimits

0x33e7,	// (0x00032c7e) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0003f433) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0003f433) list_single_heading_pane_fp_t

0x3e0e,	// (0x000336a5) aid_size_cell_fast

0x2e36,	// (0x000326cd) soft_indicator_pane_cp1_t1

0x3e4b,	// (0x000336e2) cell_app_pane_cp2_ParamLimits

0x3e4b,	// (0x000336e2) cell_app_pane_cp2

0x1b7a,	// (0x00031411) fep_hwr_candidate_drop_down_list_pane

0x1d52,	// (0x000315e9) fep_hwr_candidate_pane_g3_ParamLimits

0x1d52,	// (0x000315e9) fep_hwr_candidate_pane_g3

0xe358,	// (0x0003dbef) fep_hwr_candidate_pane_g4_ParamLimits

0xe358,	// (0x0003dbef) fep_hwr_candidate_pane_g4

0x0002,

0xfb0b,	// (0x0003f3a2) fep_hwr_candidate_pane_g_ParamLimits

0xfb0b,	// (0x0003f3a2) fep_hwr_candidate_pane_g

0x7875,	// (0x0003710c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7875,	// (0x0003710c) fep_vkb_candidate_drop_down_list_pane

0x7c86,	// (0x0003751d) fep_vkb_candidate_pane_g3

0x7c8e,	// (0x00037525) fep_vkb_candidate_pane_g4

0x0002,

0xfb38,	// (0x0003f3cf) fep_vkb_candidate_pane_g

0x1dbd,	// (0x00031654) cell_hwr_candidate_pane_g1_ParamLimits

0x1dcb,	// (0x00031662) cell_hwr_candidate_pane_g3_ParamLimits

0x1dcb,	// (0x00031662) cell_hwr_candidate_pane_g3

0x9631,	// (0x00038ec8) cell_hwr_candidate_pane_g4_ParamLimits

0x9631,	// (0x00038ec8) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0003f3ee) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0003f3ee) cell_hwr_candidate_pane_g

0x7ca5,	// (0x0003753c) cell_vkb_candidate_pane_g3_ParamLimits

0x7ca5,	// (0x0003753c) cell_vkb_candidate_pane_g3

0x7cc0,	// (0x00037557) cell_vkb_candidate_pane_g4_ParamLimits

0x7cc0,	// (0x00037557) cell_vkb_candidate_pane_g4

0x7d90,	// (0x00037627) cell_app_pane_cp2_g1_ParamLimits

0x7d90,	// (0x00037627) cell_app_pane_cp2_g1

0x7dae,	// (0x00037645) cell_app_pane_cp2_g2_ParamLimits

0x7dae,	// (0x00037645) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0003f438) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0003f438) cell_app_pane_cp2_g

0x7dba,	// (0x00037651) cell_app_pane_cp2_t1_ParamLimits

0x7dba,	// (0x00037651) cell_app_pane_cp2_t1

0x3c0c,	// (0x000334a3) grid_highlight_pane_cp1_ParamLimits

0x3c0c,	// (0x000334a3) grid_highlight_pane_cp1

0x1e0a,	// (0x000316a1) cell_hwr_candidate_pane_cp1_ParamLimits

0x1e0a,	// (0x000316a1) cell_hwr_candidate_pane_cp1

0x1dbd,	// (0x00031654) fep_hwr_candidate_drop_down_list_pane_g1

0x1e29,	// (0x000316c0) fep_hwr_candidate_drop_down_list_pane_g2

0x1e36,	// (0x000316cd) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0003f43d) fep_hwr_candidate_drop_down_list_pane_g

0x1e43,	// (0x000316da) fep_hwr_candidate_drop_down_list_scroll_pane

0x1e4c,	// (0x000316e3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1e4c,	// (0x000316e3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1e59,	// (0x000316f0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1e59,	// (0x000316f0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1e66,	// (0x000316fd) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1e66,	// (0x000316fd) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1e73,	// (0x0003170a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1e73,	// (0x0003170a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1e8e,	// (0x00031725) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1e8e,	// (0x00031725) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1ea9,	// (0x00031740) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1ea9,	// (0x00031740) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1ec4,	// (0x0003175b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1ec4,	// (0x0003175b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1edf,	// (0x00031776) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1edf,	// (0x00031776) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0003f444) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0003f444) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7dcc,	// (0x00037663) cell_vkb_candidate_pane_cp1_ParamLimits

0x7dcc,	// (0x00037663) cell_vkb_candidate_pane_cp1

0x798e,	// (0x00037225) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x798e,	// (0x00037225) fep_vkb_candidate_drop_down_list_pane_g1

0x7dec,	// (0x00037683) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7dec,	// (0x00037683) fep_vkb_candidate_drop_down_list_pane_g2

0x7df9,	// (0x00037690) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7df9,	// (0x00037690) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x0003f455) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x0003f455) fep_vkb_candidate_drop_down_list_pane_g

0x7e06,	// (0x0003769d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7e06,	// (0x0003769d) fep_vkb_candidate_drop_down_list_scroll_pane

0x7e13,	// (0x000376aa) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7e13,	// (0x000376aa) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7e20,	// (0x000376b7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7e20,	// (0x000376b7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7e2c,	// (0x000376c3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7e2c,	// (0x000376c3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7e38,	// (0x000376cf) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7e38,	// (0x000376cf) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7e59,	// (0x000376f0) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7e59,	// (0x000376f0) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7e7a,	// (0x00037711) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7e7a,	// (0x00037711) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7e9b,	// (0x00037732) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7e9b,	// (0x00037732) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7ebc,	// (0x00037753) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7ebc,	// (0x00037753) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x0003f45c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x0003f45c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb591,	// (0x0003ae28) title_pane_g1_ParamLimits

0xb5a4,	// (0x0003ae3b) title_pane_g2_ParamLimits

0xf54e,	// (0x0003ede5) title_pane_g_ParamLimits

0x427f,	// (0x00033b16) aid_call2_pane

0x4287,	// (0x00033b1e) aid_call_pane

0x428f,	// (0x00033b26) popup_clock_analogue_window_g1

0x428f,	// (0x00033b26) popup_clock_analogue_window_g2

0x0a90,	// (0x00030327) popup_clock_analogue_window_g3

0x0a99,	// (0x00030330) popup_clock_analogue_window_g4

0x2b53,	// (0x000323ea) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0003ef8f) popup_clock_analogue_window_g

0x0aa1,	// (0x00030338) popup_clock_analogue_window_t1

0x0aaf,	// (0x00030346) clock_digital_number_pane_ParamLimits

0x0aaf,	// (0x00030346) clock_digital_number_pane

0x0abb,	// (0x00030352) clock_digital_number_pane_cp02_ParamLimits

0x0abb,	// (0x00030352) clock_digital_number_pane_cp02

0x0ac7,	// (0x0003035e) clock_digital_number_pane_cp03_ParamLimits

0x0ac7,	// (0x0003035e) clock_digital_number_pane_cp03

0x0ad3,	// (0x0003036a) clock_digital_number_pane_cp04_ParamLimits

0x0ad3,	// (0x0003036a) clock_digital_number_pane_cp04

0x0adf,	// (0x00030376) clock_digital_separator_pane_ParamLimits

0x0adf,	// (0x00030376) clock_digital_separator_pane

0x0aeb,	// (0x00030382) popup_clock_digital_window_t1_ParamLimits

0x0aeb,	// (0x00030382) popup_clock_digital_window_t1

0x2b53,	// (0x000323ea) clock_digital_number_pane_g1

0x2b53,	// (0x000323ea) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0003ef9a) clock_digital_number_pane_g

0x2b53,	// (0x000323ea) clock_digital_separator_pane_g1

0x2b53,	// (0x000323ea) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0003ef9a) clock_digital_separator_pane_g

0xd3e5,	// (0x0003cc7c) aid_fill_nsta_ParamLimits

0xd51b,	// (0x0003cdb2) indicator_nsta_pane_ParamLimits

0x4ec1,	// (0x00034758) popup_clock_analogue_window

0x4ec1,	// (0x00034758) popup_clock_digital_window

0x3dcf,	// (0x00033666) grid_indicator_nsta_pane_ParamLimits

0x7101,	// (0x00036998) clock_nsta_pane_t2

0x0001,

0xfa8b,	// (0x0003f322) clock_nsta_pane_t

0x0a54,	// (0x000302eb) aid_size_max_handle

0xbb3b,	// (0x0003b3d2) aid_size_min_handle

0x48a2,	// (0x00034139) editor_scroll_pane

0x7ed7,	// (0x0003776e) ex_editor_pane

0x3d7c,	// (0x00033613) scroll_pane_cp13

0x3bab,	// (0x00033442) scroll_pane_cp14

0x42be,	// (0x00033b55) scroll_pane_cp36

0xd1a4,	// (0x0003ca3b) list_single_graphic_hl_pane_cp2_ParamLimits

0xd1a4,	// (0x0003ca3b) list_single_graphic_hl_pane_cp2

0xc4d4,	// (0x0003bd6b) list_single_graphic_hl_pane_ParamLimits

0xc4d4,	// (0x0003bd6b) list_single_graphic_hl_pane

0x33fd,	// (0x00032c94) aid_size_min_hl_cp1

0x7edf,	// (0x00037776) list_highlight_pane_cp34_ParamLimits

0x7edf,	// (0x00037776) list_highlight_pane_cp34

0x7ef0,	// (0x00037787) list_single_graphic_hl_pane_g1_ParamLimits

0x7ef0,	// (0x00037787) list_single_graphic_hl_pane_g1

0xc57b,	// (0x0003be12) list_single_graphic_hl_pane_g2_ParamLimits

0xc57b,	// (0x0003be12) list_single_graphic_hl_pane_g2

0xc57b,	// (0x0003be12) list_single_graphic_hl_pane_g3_ParamLimits

0xc57b,	// (0x0003be12) list_single_graphic_hl_pane_g3

0xc587,	// (0x0003be1e) list_single_graphic_hl_pane_g4_ParamLimits

0xc587,	// (0x0003be1e) list_single_graphic_hl_pane_g4

0xc593,	// (0x0003be2a) list_single_graphic_hl_pane_g5_ParamLimits

0xc593,	// (0x0003be2a) list_single_graphic_hl_pane_g5

0x0004,

0xfbd6,	// (0x0003f46d) list_single_graphic_hl_pane_g_ParamLimits

0xfbd6,	// (0x0003f46d) list_single_graphic_hl_pane_g

0xc5a7,	// (0x0003be3e) list_single_graphic_hl_pane_t1_ParamLimits

0xc5a7,	// (0x0003be3e) list_single_graphic_hl_pane_t1

0x7efd,	// (0x00037794) aid_size_min_hl_cp2

0x7f06,	// (0x0003779d) list_highlight_pane_cp34_cp2_ParamLimits

0x7f06,	// (0x0003779d) list_highlight_pane_cp34_cp2

0x7ef0,	// (0x00037787) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7ef0,	// (0x00037787) list_single_graphic_hl_pane_g1_cp2

0x7f13,	// (0x000377aa) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7f13,	// (0x000377aa) list_single_graphic_hl_pane_g2_cp2

0x7f1f,	// (0x000377b6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7f1f,	// (0x000377b6) list_single_graphic_hl_pane_g3_cp2

0x762c,	// (0x00036ec3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x762c,	// (0x00036ec3) list_single_graphic_hl_pane_g4_cp2

0x7f2d,	// (0x000377c4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7f2d,	// (0x000377c4) list_single_graphic_hl_pane_g5_cp2

0xbc22,	// (0x0003b4b9) control_pane_g4_ParamLimits

0xbc22,	// (0x0003b4b9) control_pane_g4

0x4be0,	// (0x00034477) bg_popup_sub_pane_cp10_ParamLimits

0x771a,	// (0x00036fb1) list_choice_list_pane_ParamLimits

0x7729,	// (0x00036fc0) scroll_pane_cp23

0x3626,	// (0x00032ebd) bg_popup_preview_window_pane_cp02_ParamLimits

0x7d11,	// (0x000375a8) list_preview_fixed_pane_ParamLimits

0x7d27,	// (0x000375be) list_preview_fixed_pane_cp_ParamLimits

0x7d27,	// (0x000375be) list_preview_fixed_pane_cp

0x7d33,	// (0x000375ca) popup_preview_fixed_window_g1_ParamLimits

0x7d33,	// (0x000375ca) popup_preview_fixed_window_g1

0x7d3f,	// (0x000375d6) popup_preview_fixed_window_g2_ParamLimits

0x7d3f,	// (0x000375d6) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0003f3f5) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0003f3f5) popup_preview_fixed_window_g

0x09c8,	// (0x0003025f) aid_navi_side_left_pane_ParamLimits

0x09dd,	// (0x00030274) aid_navi_side_right_pane_ParamLimits

0x09f5,	// (0x0003028c) navi_icon_pane_stacon_ParamLimits

0x0a09,	// (0x000302a0) navi_navi_pane_stacon_ParamLimits

0x09f5,	// (0x0003028c) navi_text_pane_stacon_ParamLimits

0xf445,	// (0x0003ecdc) main_text_info_pane

0x7f57,	// (0x000377ee) listscroll_text_info_pane

0x7f5f,	// (0x000377f6) list_text_info_pane_ParamLimits

0x7f5f,	// (0x000377f6) list_text_info_pane

0x7f6e,	// (0x00037805) scroll_pane_cp24_ParamLimits

0x7f6e,	// (0x00037805) scroll_pane_cp24

0xe054,	// (0x0003d8eb) list_text_info_pane_t1_ParamLimits

0xe054,	// (0x0003d8eb) list_text_info_pane_t1

0xbd7d,	// (0x0003b614) popup_fast_swap2_window_ParamLimits

0xbd7d,	// (0x0003b614) popup_fast_swap2_window

0x7fbd,	// (0x00037854) aid_size_cell_fast2

0x2b49,	// (0x000323e0) bg_popup_window_pane_cp17

0x5548,	// (0x00034ddf) heading_pane_cp2

0x3875,	// (0x0003310c) listscroll_fast2_pane

0x7fc7,	// (0x0003785e) grid_fast2_pane

0x7fd1,	// (0x00037868) listscroll_fast2_pane_g1

0x7fd9,	// (0x00037870) listscroll_fast2_pane_g2

0x0001,

0xfbe1,	// (0x0003f478) listscroll_fast2_pane_g

0x3d7c,	// (0x00033613) scroll_pane_cp26

0x7fe3,	// (0x0003787a) cell_fast2_pane_ParamLimits

0x7fe3,	// (0x0003787a) cell_fast2_pane

0x7ff8,	// (0x0003788f) cell_fast2_pane_g1

0x8001,	// (0x00037898) cell_fast2_pane_g2

0x800a,	// (0x000378a1) cell_fast2_pane_g3

0x0002,

0xfbe6,	// (0x0003f47d) cell_fast2_pane_g

0x3968,	// (0x000331ff) grid_highlight_pane_cp9

0x0f4f,	// (0x000307e6) main_eswt_pane_ParamLimits

0x0f4f,	// (0x000307e6) main_eswt_pane

0x7f83,	// (0x0003781a) list_single_text_info_pane

0x8012,	// (0x000378a9) eswt_ctrl_button_pane

0x8012,	// (0x000378a9) eswt_ctrl_canvas_pane

0x801a,	// (0x000378b1) eswt_ctrl_combo_pane

0x8012,	// (0x000378a9) eswt_ctrl_default_pane

0x8012,	// (0x000378a9) eswt_ctrl_label_pane

0x8022,	// (0x000378b9) eswt_ctrl_wait_pane

0x802a,	// (0x000378c1) eswt_shell_pane

0x2b49,	// (0x000323e0) listscroll_eswt_app_pane

0x804a,	// (0x000378e1) popup_eswt_tasktip_window_ParamLimits

0x804a,	// (0x000378e1) popup_eswt_tasktip_window

0x515e,	// (0x000349f5) bg_popup_window_pane_cp18

0x805b,	// (0x000378f2) eswt_control_pane_g1_ParamLimits

0x805b,	// (0x000378f2) eswt_control_pane_g1

0x8068,	// (0x000378ff) eswt_control_pane_g2_ParamLimits

0x8068,	// (0x000378ff) eswt_control_pane_g2

0x8075,	// (0x0003790c) eswt_control_pane_g3_ParamLimits

0x8075,	// (0x0003790c) eswt_control_pane_g3

0x8082,	// (0x00037919) eswt_control_pane_g4_ParamLimits

0x8082,	// (0x00037919) eswt_control_pane_g4

0x0003,

0xfbed,	// (0x0003f484) eswt_control_pane_g_ParamLimits

0xfbed,	// (0x0003f484) eswt_control_pane_g

0x3c0c,	// (0x000334a3) bg_button_pane_ParamLimits

0x3c0c,	// (0x000334a3) bg_button_pane

0x397d,	// (0x00033214) common_borders_pane_copy2_ParamLimits

0x397d,	// (0x00033214) common_borders_pane_copy2

0x808f,	// (0x00037926) control_button_pane_g1_ParamLimits

0x808f,	// (0x00037926) control_button_pane_g1

0x809b,	// (0x00037932) control_button_pane_g2_ParamLimits

0x809b,	// (0x00037932) control_button_pane_g2

0x80a7,	// (0x0003793e) control_button_pane_g3_ParamLimits

0x80a7,	// (0x0003793e) control_button_pane_g3

0x0002,

0xfbf6,	// (0x0003f48d) control_button_pane_g_ParamLimits

0xfbf6,	// (0x0003f48d) control_button_pane_g

0x80bb,	// (0x00037952) control_button_pane_t1

0x80c9,	// (0x00037960) control_button_pane_t2

0x0001,

0xfbfd,	// (0x0003f494) control_button_pane_t

0x50ea,	// (0x00034981) bg_button_pane_g1

0x50fa,	// (0x00034991) bg_button_pane_g2

0x50f2,	// (0x00034989) bg_button_pane_g3

0x510a,	// (0x000349a1) bg_button_pane_g4

0x5102,	// (0x00034999) bg_button_pane_g5

0x5112,	// (0x000349a9) bg_button_pane_g6

0x511a,	// (0x000349b1) bg_button_pane_g7

0x512a,	// (0x000349c1) bg_button_pane_g8

0x5122,	// (0x000349b9) bg_button_pane_g9

0x0008,

0xf861,	// (0x0003f0f8) bg_button_pane_g

0x76d5,	// (0x00036f6c) common_borders_pane_ParamLimits

0x76d5,	// (0x00036f6c) common_borders_pane

0x805b,	// (0x000378f2) eswt_control_pane_g1_copy1_ParamLimits

0x805b,	// (0x000378f2) eswt_control_pane_g1_copy1

0x8068,	// (0x000378ff) eswt_control_pane_g2_copy1_ParamLimits

0x8068,	// (0x000378ff) eswt_control_pane_g2_copy1

0x8075,	// (0x0003790c) eswt_control_pane_g3_copy1_ParamLimits

0x8075,	// (0x0003790c) eswt_control_pane_g3_copy1

0x8082,	// (0x00037919) eswt_control_pane_g4_copy1_ParamLimits

0x8082,	// (0x00037919) eswt_control_pane_g4_copy1

0x7710,	// (0x00036fa7) bg_eswt_ctrl_canvas_pane_g1

0x76d5,	// (0x00036f6c) common_borders_pane_cp2_ParamLimits

0x76d5,	// (0x00036f6c) common_borders_pane_cp2

0x76d5,	// (0x00036f6c) common_borders_pane_cp3_ParamLimits

0x76d5,	// (0x00036f6c) common_borders_pane_cp3

0x80d7,	// (0x0003796e) separator_horizontal_pane

0x80df,	// (0x00037976) separator_vertical_pane

0x805b,	// (0x000378f2) eswt_control_pane_g1_copy2_ParamLimits

0x805b,	// (0x000378f2) eswt_control_pane_g1_copy2

0x8068,	// (0x000378ff) eswt_control_pane_g2_copy2_ParamLimits

0x8068,	// (0x000378ff) eswt_control_pane_g2_copy2

0x8075,	// (0x0003790c) eswt_control_pane_g3_copy2_ParamLimits

0x8075,	// (0x0003790c) eswt_control_pane_g3_copy2

0x8082,	// (0x00037919) eswt_control_pane_g4_copy2_ParamLimits

0x8082,	// (0x00037919) eswt_control_pane_g4_copy2

0x2b49,	// (0x000323e0) common_borders_pane_cp4

0x80e8,	// (0x0003797f) separator_horizontal_pane_g1

0x80f1,	// (0x00037988) separator_horizontal_pane_g2

0x80fa,	// (0x00037991) separator_horizontal_pane_g3

0x0002,

0xfc02,	// (0x0003f499) separator_horizontal_pane_g

0x805b,	// (0x000378f2) eswt_control_pane_g1_copy3_ParamLimits

0x805b,	// (0x000378f2) eswt_control_pane_g1_copy3

0x8068,	// (0x000378ff) eswt_control_pane_g2_copy3_ParamLimits

0x8068,	// (0x000378ff) eswt_control_pane_g2_copy3

0x8075,	// (0x0003790c) eswt_control_pane_g3_copy3_ParamLimits

0x8075,	// (0x0003790c) eswt_control_pane_g3_copy3

0x8082,	// (0x00037919) eswt_control_pane_g4_copy3_ParamLimits

0x8082,	// (0x00037919) eswt_control_pane_g4_copy3

0x2b49,	// (0x000323e0) common_borders_pane_cp5

0x8103,	// (0x0003799a) separator_vertical_pane_g1

0x810c,	// (0x000379a3) separator_vertical_pane_g2

0x8115,	// (0x000379ac) separator_vertical_pane_g3

0x0002,

0xfc09,	// (0x0003f4a0) separator_vertical_pane_g

0x805b,	// (0x000378f2) eswt_control_pane_g1_copy4_ParamLimits

0x805b,	// (0x000378f2) eswt_control_pane_g1_copy4

0x8068,	// (0x000378ff) eswt_control_pane_g2_copy4_ParamLimits

0x8068,	// (0x000378ff) eswt_control_pane_g2_copy4

0x8075,	// (0x0003790c) eswt_control_pane_g3_copy4_ParamLimits

0x8075,	// (0x0003790c) eswt_control_pane_g3_copy4

0x8082,	// (0x00037919) eswt_control_pane_g4_copy4_ParamLimits

0x8082,	// (0x00037919) eswt_control_pane_g4_copy4

0xe06f,	// (0x0003d906) eswt_ctrl_combo_button_pane

0xe077,	// (0x0003d90e) eswt_ctrl_input_pane

0xe07f,	// (0x0003d916) popup_choice_list_window_cp70

0xe087,	// (0x0003d91e) eswt_ctrl_input_pane_t1

0x2b49,	// (0x000323e0) input_focus_pane_cp70

0x76d5,	// (0x00036f6c) bg_button_pane_cp70_ParamLimits

0x76d5,	// (0x00036f6c) bg_button_pane_cp70

0xe095,	// (0x0003d92c) eswt_ctrl_combo_button_pane_g1

0x814c,	// (0x000379e3) wait_bar_pane_cp70

0x515e,	// (0x000349f5) bg_popup_window_pane_cp70_ParamLimits

0x515e,	// (0x000349f5) bg_popup_window_pane_cp70

0x8154,	// (0x000379eb) popup_eswt_tasktip_window_t1

0x816a,	// (0x00037a01) wait_bar_pane_cp71_ParamLimits

0x816a,	// (0x00037a01) wait_bar_pane_cp71

0x8176,	// (0x00037a0d) grid_eswt_app_pane

0x4098,	// (0x0003392f) scroll_pane_cp70

0xe09d,	// (0x0003d934) cell_eswt_app_pane_ParamLimits

0xe09d,	// (0x0003d934) cell_eswt_app_pane

0xe0c7,	// (0x0003d95e) cell_eswt_app_pane_g1_ParamLimits

0xe0c7,	// (0x0003d95e) cell_eswt_app_pane_g1

0xe0f6,	// (0x0003d98d) cell_eswt_app_pane_g2_ParamLimits

0xe0f6,	// (0x0003d98d) cell_eswt_app_pane_g2

0x0001,

0xfc10,	// (0x0003f4a7) cell_eswt_app_pane_g_ParamLimits

0xfc10,	// (0x0003f4a7) cell_eswt_app_pane_g

0xe11f,	// (0x0003d9b6) cell_eswt_app_pane_t1_ParamLimits

0xe11f,	// (0x0003d9b6) cell_eswt_app_pane_t1

0x8239,	// (0x00037ad0) grid_highlight_pane_cp70_ParamLimits

0x8239,	// (0x00037ad0) grid_highlight_pane_cp70

0x4777,	// (0x0003400e) set_content_pane_g1

0xd39a,	// (0x0003cc31) status_small_volume_pane

0x1efa,	// (0x00031791) status_small_volume_pane_g1

0x1f02,	// (0x00031799) volume_small2_pane

0x1f0b,	// (0x000317a2) volume_small2_pane_g1

0x1f14,	// (0x000317ab) volume_small2_pane_g2

0x1f1d,	// (0x000317b4) volume_small2_pane_g3

0x1f26,	// (0x000317bd) volume_small2_pane_g4

0x1f2f,	// (0x000317c6) volume_small2_pane_g5

0x1f38,	// (0x000317cf) volume_small2_pane_g6

0x1f41,	// (0x000317d8) volume_small2_pane_g7

0x1f4a,	// (0x000317e1) volume_small2_pane_g8

0x1f53,	// (0x000317ea) volume_small2_pane_g9

0x1f5c,	// (0x000317f3) volume_small2_pane_g10

0x0009,

0xfc15,	// (0x0003f4ac) volume_small2_pane_g

0x7ad6,	// (0x0003736d) fep_vkb_top_text_pane_g1_ParamLimits

0xdffc,	// (0x0003d893) fep_vkb_top_text_pane_t1_ParamLimits

0x7d4b,	// (0x000375e2) popup_preview_fixed_window_g3_ParamLimits

0x7d4b,	// (0x000375e2) popup_preview_fixed_window_g3

0xc3a0,	// (0x0003bc37) popup_toolbar_trans_pane

0xda27,	// (0x0003d2be) aid_height_set_list_ParamLimits

0x64ca,	// (0x00035d61) aid_size_parent_ParamLimits

0x4be0,	// (0x00034477) list_highlight_pane_cp2_ParamLimits

0x4777,	// (0x0003400e) set_content_pane_g1_ParamLimits

0xc4e6,	// (0x0003bd7d) list_single_image_pane_ParamLimits

0xc4e6,	// (0x0003bd7d) list_single_image_pane

0xe151,	// (0x0003d9e8) aid_size_cell_image_ParamLimits

0xe151,	// (0x0003d9e8) aid_size_cell_image

0xe15e,	// (0x0003d9f5) grid_single_image_pane_ParamLimits

0xe15e,	// (0x0003d9f5) grid_single_image_pane

0x608d,	// (0x00035924) list_single_image_pane_g1_ParamLimits

0x608d,	// (0x00035924) list_single_image_pane_g1

0x825e,	// (0x00037af5) list_single_image_pane_g2_ParamLimits

0x825e,	// (0x00037af5) list_single_image_pane_g2

0x0001,

0xfc2a,	// (0x0003f4c1) list_single_image_pane_g_ParamLimits

0xfc2a,	// (0x0003f4c1) list_single_image_pane_g

0x8272,	// (0x00037b09) list_single_image_pane_t1_ParamLimits

0x8272,	// (0x00037b09) list_single_image_pane_t1

0xe16c,	// (0x0003da03) cell_image_list_pane_ParamLimits

0xe16c,	// (0x0003da03) cell_image_list_pane

0xe182,	// (0x0003da19) cell_image_list_pane_g1

0xe18b,	// (0x0003da22) cell_image_list_pane_g2

0x0001,

0xfc2f,	// (0x0003f4c6) cell_image_list_pane_g

0x82ae,	// (0x00037b45) aid_size_cell_tb_trans_pane

0x3c0c,	// (0x000334a3) bg_tb_trans_pane

0x82c0,	// (0x00037b57) grid_tb_trans_pane

0x50ea,	// (0x00034981) bg_tb_trans_pane_g1

0x50fa,	// (0x00034991) bg_tb_trans_pane_g2

0x50f2,	// (0x00034989) bg_tb_trans_pane_g3

0x510a,	// (0x000349a1) bg_tb_trans_pane_g4

0x5102,	// (0x00034999) bg_tb_trans_pane_g5

0x512a,	// (0x000349c1) bg_tb_trans_pane_g6

0x5122,	// (0x000349b9) bg_tb_trans_pane_g7

0x5112,	// (0x000349a9) bg_tb_trans_pane_g8

0x511a,	// (0x000349b1) bg_tb_trans_pane_g9

0x0008,

0xfc34,	// (0x0003f4cb) bg_tb_trans_pane_g

0x82d4,	// (0x00037b6b) cell_toolbar_trans_pane_ParamLimits

0x82d4,	// (0x00037b6b) cell_toolbar_trans_pane

0x7710,	// (0x00036fa7) cell_toolbar_trans_pane_g1

0xdde5,	// (0x0003d67c) list_form2_midp_pane_t1

0xddf3,	// (0x0003d68a) list_form2_midp_pane_t2

0x0001,

0xfad1,	// (0x0003f368) list_form2_midp_pane_t

0x72ea,	// (0x00036b81) scroll_pane_cp51_ParamLimits

0x74a6,	// (0x00036d3d) form2_midp_wait_pane_g1

0x74af,	// (0x00036d46) form2_midp_wait_pane_g2

0x74b8,	// (0x00036d4f) form2_midp_wait_pane_g3

0x0002,

0xfae6,	// (0x0003f37d) form2_midp_wait_pane_g

0x2c3d,	// (0x000324d4) list_highlight_pane_cp21_ParamLimits

0x750f,	// (0x00036da6) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x751e,	// (0x00036db5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6682,	// (0x00035f19) list_single_2graphic_im_pane_ParamLimits

0x6682,	// (0x00035f19) list_single_2graphic_im_pane

0xe194,	// (0x0003da2b) list_single_2graphic_im_pane_g1_ParamLimits

0xe194,	// (0x0003da2b) list_single_2graphic_im_pane_g1

0xe1a5,	// (0x0003da3c) list_single_2graphic_im_pane_g2_ParamLimits

0xe1a5,	// (0x0003da3c) list_single_2graphic_im_pane_g2

0xe1b1,	// (0x0003da48) list_single_2graphic_im_pane_g3_ParamLimits

0xe1b1,	// (0x0003da48) list_single_2graphic_im_pane_g3

0x0003,

0xfc47,	// (0x0003f4de) list_single_2graphic_im_pane_g_ParamLimits

0xfc47,	// (0x0003f4de) list_single_2graphic_im_pane_g

0xe1c5,	// (0x0003da5c) list_single_2graphic_im_pane_t1_ParamLimits

0xe1c5,	// (0x0003da5c) list_single_2graphic_im_pane_t1

0x7d57,	// (0x000375ee) list_single_graphic_2heading_pane_fp_ParamLimits

0x7d57,	// (0x000375ee) list_single_graphic_2heading_pane_fp

0x326f,	// (0x00032b06) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x326f,	// (0x00032b06) list_single_graphic_2heading_pane_fp_g1

0x7d6c,	// (0x00037603) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7d6c,	// (0x00037603) list_single_graphic_2heading_pane_fp_g2

0x3238,	// (0x00032acf) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3238,	// (0x00032acf) list_single_graphic_2heading_pane_fp_g3

0x3244,	// (0x00032adb) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3244,	// (0x00032adb) list_single_graphic_2heading_pane_fp_g4

0x7d78,	// (0x0003760f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7d78,	// (0x0003760f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003f405) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003f405) list_single_graphic_2heading_pane_fp_g

0x3448,	// (0x00032cdf) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3448,	// (0x00032cdf) list_single_graphic_2heading_pane_fp_t1

0x32a7,	// (0x00032b3e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x32a7,	// (0x00032b3e) list_single_graphic_2heading_pane_fp_t2

0x345e,	// (0x00032cf5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x345e,	// (0x00032cf5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc50,	// (0x0003f4e7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc50,	// (0x0003f4e7) list_single_graphic_2heading_pane_fp_t

0x779c,	// (0x00037033) fep_hwr_write_pane_g5_ParamLimits

0x779c,	// (0x00037033) fep_hwr_write_pane_g5

0x77a8,	// (0x0003703f) fep_hwr_write_pane_g6_ParamLimits

0x77a8,	// (0x0003703f) fep_hwr_write_pane_g6

0x802a,	// (0x000378c1) eswt_shell_pane_ParamLimits

0x515e,	// (0x000349f5) bg_popup_window_pane_cp18_ParamLimits

0x6412,	// (0x00035ca9) heading_pane_cp70

0x8154,	// (0x000379eb) popup_eswt_tasktip_window_t1_ParamLimits

0xd440,	// (0x0003ccd7) aid_touch_tab_arrow_left

0xd456,	// (0x0003cced) aid_touch_tab_arrow_right

0xb5bc,	// (0x0003ae53) title_pane_g3_ParamLimits

0xb5bc,	// (0x0003ae53) title_pane_g3

0x3bcb,	// (0x00033462) set_value_pane_g1

0xc3a0,	// (0x0003bc37) popup_toolbar_trans_pane_ParamLimits

0x82ae,	// (0x00037b45) aid_size_cell_tb_trans_pane_ParamLimits

0x3c0c,	// (0x000334a3) bg_tb_trans_pane_ParamLimits

0x82c0,	// (0x00037b57) grid_tb_trans_pane_ParamLimits

0x3626,	// (0x00032ebd) cont_note_pane_ParamLimits

0x3626,	// (0x00032ebd) cont_note_pane

0x397d,	// (0x00033214) cont_snote2_single_text_pane_ParamLimits

0x397d,	// (0x00033214) cont_snote2_single_text_pane

0x397d,	// (0x00033214) cont_snote2_single_graphic_pane_ParamLimits

0x397d,	// (0x00033214) cont_snote2_single_graphic_pane

0x5763,	// (0x00034ffa) cont_note_wait_pane_ParamLimits

0x5763,	// (0x00034ffa) cont_note_wait_pane

0x5763,	// (0x00034ffa) cont_note_image_pane_ParamLimits

0x5763,	// (0x00034ffa) cont_note_image_pane

0x8368,	// (0x00037bff) popup_note2_window_g1_ParamLimits

0x8368,	// (0x00037bff) popup_note2_window_g1

0x8399,	// (0x00037c30) popup_note2_window_t1_ParamLimits

0x8399,	// (0x00037c30) popup_note2_window_t1

0x83de,	// (0x00037c75) popup_note2_window_t2_ParamLimits

0x83de,	// (0x00037c75) popup_note2_window_t2

0x8423,	// (0x00037cba) popup_note2_window_t3_ParamLimits

0x8423,	// (0x00037cba) popup_note2_window_t3

0x8468,	// (0x00037cff) popup_note2_window_t4_ParamLimits

0x8468,	// (0x00037cff) popup_note2_window_t4

0x36aa,	// (0x00032f41) popup_note2_window_t5_ParamLimits

0x36aa,	// (0x00032f41) popup_note2_window_t5

0x0004,

0xfc5c,	// (0x0003f4f3) popup_note2_window_t_ParamLimits

0xfc5c,	// (0x0003f4f3) popup_note2_window_t

0x8497,	// (0x00037d2e) popup_note2_image_window_g1_ParamLimits

0x8497,	// (0x00037d2e) popup_note2_image_window_g1

0x84a3,	// (0x00037d3a) popup_note2_image_window_g2_ParamLimits

0x84a3,	// (0x00037d3a) popup_note2_image_window_g2

0x0001,

0xfc67,	// (0x0003f4fe) popup_note2_image_window_g_ParamLimits

0xfc67,	// (0x0003f4fe) popup_note2_image_window_g

0x84b5,	// (0x00037d4c) popup_note2_image_window_t1_ParamLimits

0x84b5,	// (0x00037d4c) popup_note2_image_window_t1

0x84cd,	// (0x00037d64) popup_note2_image_window_t2_ParamLimits

0x84cd,	// (0x00037d64) popup_note2_image_window_t2

0x84e5,	// (0x00037d7c) popup_note2_image_window_t3_ParamLimits

0x84e5,	// (0x00037d7c) popup_note2_image_window_t3

0x0002,

0xfc6c,	// (0x0003f503) popup_note2_image_window_t_ParamLimits

0xfc6c,	// (0x0003f503) popup_note2_image_window_t

0x5771,	// (0x00035008) popup_note2_wait_window_g1_ParamLimits

0x5771,	// (0x00035008) popup_note2_wait_window_g1

0x8501,	// (0x00037d98) popup_note2_wait_window_g2_ParamLimits

0x8501,	// (0x00037d98) popup_note2_wait_window_g2

0x5789,	// (0x00035020) popup_note2_wait_window_g3_ParamLimits

0x5789,	// (0x00035020) popup_note2_wait_window_g3

0x0002,

0xfc73,	// (0x0003f50a) popup_note2_wait_window_g_ParamLimits

0xfc73,	// (0x0003f50a) popup_note2_wait_window_g

0x850d,	// (0x00037da4) popup_note2_wait_window_t1_ParamLimits

0x850d,	// (0x00037da4) popup_note2_wait_window_t1

0x852b,	// (0x00037dc2) popup_note2_wait_window_t2_ParamLimits

0x852b,	// (0x00037dc2) popup_note2_wait_window_t2

0x8549,	// (0x00037de0) popup_note2_wait_window_t3_ParamLimits

0x8549,	// (0x00037de0) popup_note2_wait_window_t3

0x855b,	// (0x00037df2) popup_note2_wait_window_t4_ParamLimits

0x855b,	// (0x00037df2) popup_note2_wait_window_t4

0x0003,

0xfc7a,	// (0x0003f511) popup_note2_wait_window_t_ParamLimits

0xfc7a,	// (0x0003f511) popup_note2_wait_window_t

0x856d,	// (0x00037e04) wait_bar2_pane_ParamLimits

0x856d,	// (0x00037e04) wait_bar2_pane

0x8585,	// (0x00037e1c) popup_snote2_single_text_window_g1_ParamLimits

0x8585,	// (0x00037e1c) popup_snote2_single_text_window_g1

0x85ad,	// (0x00037e44) popup_snote2_single_text_window_t1_ParamLimits

0x85ad,	// (0x00037e44) popup_snote2_single_text_window_t1

0x85f9,	// (0x00037e90) popup_snote2_single_text_window_t2_ParamLimits

0x85f9,	// (0x00037e90) popup_snote2_single_text_window_t2

0x8645,	// (0x00037edc) popup_snote2_single_text_window_t3_ParamLimits

0x8645,	// (0x00037edc) popup_snote2_single_text_window_t3

0x8686,	// (0x00037f1d) popup_snote2_single_text_window_t4_ParamLimits

0x8686,	// (0x00037f1d) popup_snote2_single_text_window_t4

0x86bc,	// (0x00037f53) popup_snote2_single_text_window_t5_ParamLimits

0x86bc,	// (0x00037f53) popup_snote2_single_text_window_t5

0x0004,

0xfc83,	// (0x0003f51a) popup_snote2_single_text_window_t_ParamLimits

0xfc83,	// (0x0003f51a) popup_snote2_single_text_window_t

0x86e7,	// (0x00037f7e) popup_snote2_single_graphic_window_g1_ParamLimits

0x86e7,	// (0x00037f7e) popup_snote2_single_graphic_window_g1

0x870f,	// (0x00037fa6) popup_snote2_single_graphic_window_g2_ParamLimits

0x870f,	// (0x00037fa6) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8e,	// (0x0003f525) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8e,	// (0x0003f525) popup_snote2_single_graphic_window_g

0x8737,	// (0x00037fce) popup_snote2_single_graphic_window_t1_ParamLimits

0x8737,	// (0x00037fce) popup_snote2_single_graphic_window_t1

0x8783,	// (0x0003801a) popup_snote2_single_graphic_window_t2_ParamLimits

0x8783,	// (0x0003801a) popup_snote2_single_graphic_window_t2

0x8645,	// (0x00037edc) popup_snote2_single_graphic_window_t3_ParamLimits

0x8645,	// (0x00037edc) popup_snote2_single_graphic_window_t3

0x8686,	// (0x00037f1d) popup_snote2_single_graphic_window_t4_ParamLimits

0x8686,	// (0x00037f1d) popup_snote2_single_graphic_window_t4

0x86bc,	// (0x00037f53) popup_snote2_single_graphic_window_t5_ParamLimits

0x86bc,	// (0x00037f53) popup_snote2_single_graphic_window_t5

0x0004,

0xfc93,	// (0x0003f52a) popup_snote2_single_graphic_window_t_ParamLimits

0xfc93,	// (0x0003f52a) popup_snote2_single_graphic_window_t

0x71ab,	// (0x00036a42) clock_nsta_pane_cp2_t1

0x71ab,	// (0x00036a42) clock_nsta_pane_cp2_t2

0x0001,

0xfaa7,	// (0x0003f33e) clock_nsta_pane_cp2_t

0x0746,	// (0x0002ffdd) form_field_data_wide_pane_g1_ParamLimits

0x3c1a,	// (0x000334b1) form_field_data_wide_pane_g2_ParamLimits

0x3c1a,	// (0x000334b1) form_field_data_wide_pane_g2

0x3c26,	// (0x000334bd) form_field_data_wide_pane_g3_ParamLimits

0x3c26,	// (0x000334bd) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0003ef12) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0003ef12) form_field_data_wide_pane_g

0xdd28,	// (0x0003d5bf) grid_touch_3_pane_ParamLimits

0xdd28,	// (0x0003d5bf) grid_touch_3_pane

0xe1f6,	// (0x0003da8d) cell_touch_3_pane_ParamLimits

0xe1f6,	// (0x0003da8d) cell_touch_3_pane

0x7710,	// (0x00036fa7) cell_touch_3_pane_g1

0x7710,	// (0x00036fa7) cell_touch_3_pane_g2

0x0001,

0xfb2c,	// (0x0003f3c3) cell_touch_3_pane_g

0x36dc,	// (0x00032f73) cont_query_data_pane

0x36e4,	// (0x00032f7b) cont_query_data_pane_cp1

0x87fd,	// (0x00038094) button_value_adjust_pane_cp7

0x8805,	// (0x0003809c) query_popup_pane_cp3

0x437f,	// (0x00033c16) bg_popup_sub_pane_cp22_ParamLimits

0x0b0a,	// (0x000303a1) navi_navi_volume_pane_cp2

0x0b25,	// (0x000303bc) popup_side_volume_key_window_g2

0x0b34,	// (0x000303cb) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0003efa8) popup_side_volume_key_window_g

0x0b51,	// (0x000303e8) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0003efaf) popup_side_volume_key_window_t

0x4636,	// (0x00033ecd) popup_side_volume_key_window_ParamLimits

0xb735,	// (0x0003afcc) list_double_graphic_pane_g4_ParamLimits

0xb735,	// (0x0003afcc) list_double_graphic_pane_g4

0xdba0,	// (0x0003d437) list_single_2heading_msg_pane_ParamLimits

0xdba0,	// (0x0003d437) list_single_2heading_msg_pane

0xc5bd,	// (0x0003be54) list_single_2heading_msg_pane_g1_ParamLimits

0xc5bd,	// (0x0003be54) list_single_2heading_msg_pane_g1

0xc5c9,	// (0x0003be60) list_single_2heading_msg_pane_g2_ParamLimits

0xc5c9,	// (0x0003be60) list_single_2heading_msg_pane_g2

0xc5dc,	// (0x0003be73) list_single_2heading_msg_pane_g3_ParamLimits

0xc5dc,	// (0x0003be73) list_single_2heading_msg_pane_g3

0xc5e8,	// (0x0003be7f) list_single_2heading_msg_pane_g4_ParamLimits

0xc5e8,	// (0x0003be7f) list_single_2heading_msg_pane_g4

0x0003,

0xfc9e,	// (0x0003f535) list_single_2heading_msg_pane_g_ParamLimits

0xfc9e,	// (0x0003f535) list_single_2heading_msg_pane_g

0xc600,	// (0x0003be97) list_single_2heading_msg_pane_t1_ParamLimits

0xc600,	// (0x0003be97) list_single_2heading_msg_pane_t1

0xc628,	// (0x0003bebf) list_single_2heading_msg_pane_t2_ParamLimits

0xc628,	// (0x0003bebf) list_single_2heading_msg_pane_t2

0xc693,	// (0x0003bf2a) list_single_2heading_msg_pane_t3_ParamLimits

0xc693,	// (0x0003bf2a) list_single_2heading_msg_pane_t3

0x3543,	// (0x00032dda) list_single_2heading_msg_pane_t4_ParamLimits

0x3543,	// (0x00032dda) list_single_2heading_msg_pane_t4

0x0003,

0xfca7,	// (0x0003f53e) list_single_2heading_msg_pane_t_ParamLimits

0xfca7,	// (0x0003f53e) list_single_2heading_msg_pane_t

0x2b91,	// (0x00032428) title_pane_g4_ParamLimits

0x2b91,	// (0x00032428) title_pane_g4

0x0919,	// (0x000301b0) title_pane_stacon_g3_ParamLimits

0x0919,	// (0x000301b0) title_pane_stacon_g3

0x832b,	// (0x00037bc2) list_single_2graphic_im_pane_g4_ParamLimits

0x832b,	// (0x00037bc2) list_single_2graphic_im_pane_g4

0x61ce,	// (0x00035a65) popup_side_volume_key_window_cp

0x69ea,	// (0x00036281) main_idle_act2_pane_t1

0x156c,	// (0x00030e03) toolbar_button_pane_g10

0xd050,	// (0x0003c8e7) popup_toolbar_window_cp1

0x719c,	// (0x00036a33) clock_nsta_pane_cp_t1

0x719c,	// (0x00036a33) clock_nsta_pane_cp_t2

0x0001,

0xfaa2,	// (0x0003f339) clock_nsta_pane_cp_t

0x0b0a,	// (0x000303a1) navi_navi_volume_pane_cp2_ParamLimits

0x0b19,	// (0x000303b0) popup_side_volume_key_window_g1_ParamLimits

0x0b25,	// (0x000303bc) popup_side_volume_key_window_g2_ParamLimits

0x0b34,	// (0x000303cb) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0003efa8) popup_side_volume_key_window_g_ParamLimits

0x1b66,	// (0x000313fd) fep_hwr_aid_pane

0x1c0d,	// (0x000314a4) bg_fep_hwr_top_pane_g4_ParamLimits

0x776c,	// (0x00037003) fep_hwr_top_pane_g1_ParamLimits

0x777e,	// (0x00037015) fep_hwr_top_pane_g2_ParamLimits

0x1c2d,	// (0x000314c4) fep_hwr_top_pane_g3_ParamLimits

0xfaf7,	// (0x0003f38e) fep_hwr_top_pane_g_ParamLimits

0x1c42,	// (0x000314d9) fep_hwr_top_text_pane_ParamLimits

0x5f85,	// (0x0003581c) aid_touch_tab_arrow_arrow_2

0x5f8e,	// (0x00035825) aid_touch_tab_arrow_left_2

0x1b7a,	// (0x00031411) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1bb1,	// (0x00031448) fep_hwr_prediction_pane

0x78de,	// (0x00037175) fep_vkb_prediction_pane

0xdfdc,	// (0x0003d873) fep_vkb_side_pane_g3_ParamLimits

0xdfdc,	// (0x0003d873) fep_vkb_side_pane_g3

0x1dbd,	// (0x00031654) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1e29,	// (0x000316c0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1e36,	// (0x000316cd) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0003f43d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1f65,	// (0x000317fc) fep_hwr_prediction_pane_g1

0x1f6f,	// (0x00031806) fep_hwr_prediction_pane_g2

0x1f77,	// (0x0003180e) fep_hwr_prediction_pane_g3

0x1f7f,	// (0x00031816) fep_hwr_prediction_pane_g4

0x0003,

0xfcb0,	// (0x0003f547) fep_hwr_prediction_pane_g

0x882a,	// (0x000380c1) fep_vkb_prediction_pane_g1

0x8834,	// (0x000380cb) fep_vkb_prediction_pane_g2

0x883c,	// (0x000380d3) fep_vkb_prediction_pane_g3

0x8844,	// (0x000380db) fep_vkb_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0003f550) fep_vkb_prediction_pane_g

0x1967,	// (0x000311fe) slider_set_pane_g3

0x197b,	// (0x00031212) slider_set_pane_g4

0x1993,	// (0x0003122a) slider_set_pane_g5

0x1967,	// (0x000311fe) slider_set_pane_g6

0x19a9,	// (0x00031240) slider_set_pane_g7

0x662f,	// (0x00035ec6) slider_form_pane_g3

0x6638,	// (0x00035ecf) slider_form_pane_g4

0x6640,	// (0x00035ed7) slider_form_pane_g5

0x662f,	// (0x00035ec6) slider_form_pane_g6

0xdb72,	// (0x0003d409) slider_form_pane_g7

0x6c95,	// (0x0003652c) slider_set_pane_vc_g3

0x6c9e,	// (0x00036535) slider_set_pane_vc_g4

0x6ca7,	// (0x0003653e) slider_set_pane_vc_g5

0x6c95,	// (0x0003652c) slider_set_pane_vc_g6

0x6cb0,	// (0x00036547) slider_set_pane_vc_g7

0x6e70,	// (0x00036707) slider_form_pane_vc_g1

0x6e79,	// (0x00036710) slider_form_pane_vc_g2

0x6e82,	// (0x00036719) slider_form_pane_vc_g3

0x6e70,	// (0x00036707) slider_form_pane_vc_g4

0x6e8b,	// (0x00036722) slider_form_pane_vc_g5

0x0004,

0xfa74,	// (0x0003f30b) slider_form_pane_vc_g

0xf445,	// (0x0003ecdc) main_idle_act3_pane

0x884c,	// (0x000380e3) ai3_links_pane

0xe23e,	// (0x0003dad5) popup_ai3_data_window_ParamLimits

0xe23e,	// (0x0003dad5) popup_ai3_data_window

0x2b49,	// (0x000323e0) grid_ai3_links_pane

0xe258,	// (0x0003daef) cell_ai3_links_pane_ParamLimits

0xe258,	// (0x0003daef) cell_ai3_links_pane

0x8887,	// (0x0003811e) bg_popup_sub_pane_cp11

0x8894,	// (0x0003812b) cell_ai3_links_pane_g1

0x2b49,	// (0x000323e0) bg_popup_sub_pane_cp12

0x88b9,	// (0x00038150) heading_ai3_data_pane

0x88c1,	// (0x00038158) list_ai3_gene_pane

0x88cd,	// (0x00038164) popup_ai3_data_window_g1

0x88d5,	// (0x0003816c) heading_ai3_data_pane_g1

0x88dd,	// (0x00038174) heading_ai3_data_pane_t1

0x88eb,	// (0x00038182) list_double_ai3_gene_pane_ParamLimits

0x88eb,	// (0x00038182) list_double_ai3_gene_pane

0x88f8,	// (0x0003818f) list_single_ai3_gene_pane_ParamLimits

0x88f8,	// (0x0003818f) list_single_ai3_gene_pane

0x76d5,	// (0x00036f6c) list_highlight_pane_cp7_ParamLimits

0x76d5,	// (0x00036f6c) list_highlight_pane_cp7

0x8905,	// (0x0003819c) list_single_a13_gene_pane_t1_ParamLimits

0x8905,	// (0x0003819c) list_single_a13_gene_pane_t1

0x891c,	// (0x000381b3) list_single_ai3_gene_pane_g1

0x8925,	// (0x000381bc) list_single_ai3_gene_pane_g2

0x0001,

0xfcc2,	// (0x0003f559) list_single_ai3_gene_pane_g

0x892d,	// (0x000381c4) list_double_ai3_gene_pane_g1_ParamLimits

0x892d,	// (0x000381c4) list_double_ai3_gene_pane_g1

0x8939,	// (0x000381d0) list_double_ai3_gene_pane_t1_ParamLimits

0x8939,	// (0x000381d0) list_double_ai3_gene_pane_t1

0x8955,	// (0x000381ec) list_double_ai3_gene_pane_t2_ParamLimits

0x8955,	// (0x000381ec) list_double_ai3_gene_pane_t2

0x896b,	// (0x00038202) list_double_ai3_gene_pane_t3_ParamLimits

0x896b,	// (0x00038202) list_double_ai3_gene_pane_t3

0x0002,

0xfcc7,	// (0x0003f55e) list_double_ai3_gene_pane_t_ParamLimits

0xfcc7,	// (0x0003f55e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3474,	// (0x00032d0b) aid_size_min_col_2

0xe228,	// (0x0003dabf) aid_size_min_msg_ParamLimits

0xe228,	// (0x0003dabf) aid_size_min_msg

0xdff0,	// (0x0003d887) fep_vkb_top_text_pane_g2_ParamLimits

0xdff0,	// (0x0003d887) fep_vkb_top_text_pane_g2

0x0001,

0xfb27,	// (0x0003f3be) fep_vkb_top_text_pane_g_ParamLimits

0xfb27,	// (0x0003f3be) fep_vkb_top_text_pane_g

0xf445,	// (0x0003ecdc) main_hc_apps_shell_pane

0x8988,	// (0x0003821f) grid_hc_apps_pane_ParamLimits

0x8988,	// (0x0003821f) grid_hc_apps_pane

0x8997,	// (0x0003822e) list_hc_apps_pane

0x899f,	// (0x00038236) scroll_pane_cp37_ParamLimits

0x899f,	// (0x00038236) scroll_pane_cp37

0xe272,	// (0x0003db09) cell_hc_apps_pane_ParamLimits

0xe272,	// (0x0003db09) cell_hc_apps_pane

0xe365,	// (0x0003dbfc) cell_hc_apps_pane_g1_ParamLimits

0xe365,	// (0x0003dbfc) cell_hc_apps_pane_g1

0x8a8a,	// (0x00038321) cell_hc_apps_pane_g2_ParamLimits

0x8a8a,	// (0x00038321) cell_hc_apps_pane_g2

0x8aa6,	// (0x0003833d) cell_hc_apps_pane_g3_ParamLimits

0x8aa6,	// (0x0003833d) cell_hc_apps_pane_g3

0x0002,

0xfcce,	// (0x0003f565) cell_hc_apps_pane_g_ParamLimits

0xfcce,	// (0x0003f565) cell_hc_apps_pane_g

0xe392,	// (0x0003dc29) cell_hc_apps_pane_t1_ParamLimits

0xe392,	// (0x0003dc29) cell_hc_apps_pane_t1

0x3626,	// (0x00032ebd) grid_highlight_pane_cp10_ParamLimits

0x3626,	// (0x00032ebd) grid_highlight_pane_cp10

0xe3d0,	// (0x0003dc67) list_single_hc_apps_pane_ParamLimits

0xe3d0,	// (0x0003dc67) list_single_hc_apps_pane

0xe3fd,	// (0x0003dc94) list_single_hc_apps_pane_g1

0xc701,	// (0x0003bf98) list_single_hc_apps_pane_g2

0x0001,

0xfcd5,	// (0x0003f56c) list_single_hc_apps_pane_g

0xc71a,	// (0x0003bfb1) list_single_hc_apps_pane_g2_copy1

0xc736,	// (0x0003bfcd) list_single_hc_apps_pane_t1

0x2c3d,	// (0x000324d4) bg_set_opt_pane_cp_ParamLimits

0x0126,	// (0x0002f9bd) setting_slider_pane_t1_ParamLimits

0x013f,	// (0x0002f9d6) setting_slider_pane_t2_ParamLimits

0x0159,	// (0x0002f9f0) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003edf5) setting_slider_pane_t_ParamLimits

0x0171,	// (0x0002fa08) slider_set_pane_ParamLimits

0x0e3d,	// (0x000306d4) control_pane_g5_ParamLimits

0x0e3d,	// (0x000306d4) control_pane_g5

0x647e,	// (0x00035d15) slider_set_pane_g1_ParamLimits

0x195b,	// (0x000311f2) slider_set_pane_g2_ParamLimits

0x1967,	// (0x000311fe) slider_set_pane_g3_ParamLimits

0x197b,	// (0x00031212) slider_set_pane_g4_ParamLimits

0x1993,	// (0x0003122a) slider_set_pane_g5_ParamLimits

0x1967,	// (0x000311fe) slider_set_pane_g6_ParamLimits

0x19a9,	// (0x00031240) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0003f1f6) slider_set_pane_g_ParamLimits

0x4722,	// (0x00033fb9) navi_icon_text_pane_ParamLimits

0xd409,	// (0x0003cca0) aid_fill_nsta_2_ParamLimits

0xd440,	// (0x0003ccd7) aid_touch_tab_arrow_left_ParamLimits

0xd456,	// (0x0003cced) aid_touch_tab_arrow_right_ParamLimits

0xd4f1,	// (0x0003cd88) clock_nsta_pane_ParamLimits

0x5f67,	// (0x000357fe) navi_icon_pane_g1_ParamLimits

0x5f73,	// (0x0003580a) navi_text_pane_t1_ParamLimits

0x72a8,	// (0x00036b3f) navi_icon_text_pane_g1_ParamLimits

0x72b4,	// (0x00036b4b) navi_icon_text_pane_t1_ParamLimits

0xe3fd,	// (0x0003dc94) list_single_hc_apps_pane_g1_ParamLimits

0xc701,	// (0x0003bf98) list_single_hc_apps_pane_g2_ParamLimits

0xfcd5,	// (0x0003f56c) list_single_hc_apps_pane_g_ParamLimits

0xc71a,	// (0x0003bfb1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc736,	// (0x0003bfcd) list_single_hc_apps_pane_t1_ParamLimits

0xb4c1,	// (0x0003ad58) popup_toolbar2_fixed_window_ParamLimits

0xb4c1,	// (0x0003ad58) popup_toolbar2_fixed_window

0xc396,	// (0x0003bc2d) popup_toolbar2_float_window

0x2b49,	// (0x000323e0) bg_popup_sub_pane_cp27

0x8b7d,	// (0x00038414) grid_toolbar2_float_pane

0x2b49,	// (0x000323e0) bg_popup_sub_pane_cp26

0x8b7d,	// (0x00038414) grid_toolbar2_fixed_pane

0xe416,	// (0x0003dcad) cell_toolbar2_fixed_pane_ParamLimits

0xe416,	// (0x0003dcad) cell_toolbar2_fixed_pane

0xe430,	// (0x0003dcc7) cell_toolbar2_fixed_pane_g1

0x8b9e,	// (0x00038435) toolbar2_fixed_button_pane

0x50ea,	// (0x00034981) toolbar2_fixed_button_pane_g1

0x50fa,	// (0x00034991) toolbar2_fixed_button_pane_g2

0x50f2,	// (0x00034989) toolbar2_fixed_button_pane_g3

0x510a,	// (0x000349a1) toolbar2_fixed_button_pane_g4

0x5102,	// (0x00034999) toolbar2_fixed_button_pane_g5

0x5112,	// (0x000349a9) toolbar2_fixed_button_pane_g6

0x511a,	// (0x000349b1) toolbar2_fixed_button_pane_g7

0x512a,	// (0x000349c1) toolbar2_fixed_button_pane_g8

0x5122,	// (0x000349b9) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0003f0f8) toolbar2_fixed_button_pane_g

0x8ba6,	// (0x0003843d) cell_toolbar2_float_pane_ParamLimits

0x8ba6,	// (0x0003843d) cell_toolbar2_float_pane

0x8bb7,	// (0x0003844e) cell_toolbar2_float_pane_g1

0x8b9e,	// (0x00038435) toolbar2_fixed_button_pane_cp

0xdeca,	// (0x0003d761) fep_vkb_accented_list_pane_ParamLimits

0xdeca,	// (0x0003d761) fep_vkb_accented_list_pane

0x1d9d,	// (0x00031634) bg_popup_fep_shadow_pane_g9

0x48a2,	// (0x00034139) bg_popup_fep_shadow_pane_cp3

0x3d63,	// (0x000335fa) list_accented_list_pane

0x8bc0,	// (0x00038457) list_single_accented_list_pane_ParamLimits

0x8bc0,	// (0x00038457) list_single_accented_list_pane

0x48a2,	// (0x00034139) list_highlight_pane_cp10

0x8bd1,	// (0x00038468) list_single_accented_list_pane_t1

0xc2c0,	// (0x0003bb57) popup_slider_window_ParamLimits

0xc2c0,	// (0x0003bb57) popup_slider_window

0x880d,	// (0x000380a4) aid_indentation_list_msg

0xe529,	// (0x0003ddc0) bg_popup_window_pane_cp19

0x8cf5,	// (0x0003858c) popup_slider_window_g1

0x8d11,	// (0x000385a8) popup_slider_window_g2

0x8d2d,	// (0x000385c4) popup_slider_window_g3

0x0005,

0xfcda,	// (0x0003f571) popup_slider_window_g

0x8d89,	// (0x00038620) popup_slider_window_t1

0x8dfd,	// (0x00038694) small_volume_slider_vertical_pane

0x7710,	// (0x00036fa7) small_volume_slider_vertical_pane_g1

0x7710,	// (0x00036fa7) small_volume_slider_vertical_pane_g2

0x8e19,	// (0x000386b0) small_volume_slider_vertical_pane_g3

0x0002,

0xfcec,	// (0x0003f583) small_volume_slider_vertical_pane_g

0xb42f,	// (0x0003acc6) area_side_right_pane_ParamLimits

0xb42f,	// (0x0003acc6) area_side_right_pane

0xc764,	// (0x0003bffb) aid_size_side_button_ParamLimits

0xc764,	// (0x0003bffb) aid_size_side_button

0xc77d,	// (0x0003c014) grid_sctrl_middle_pane_ParamLimits

0xc77d,	// (0x0003c014) grid_sctrl_middle_pane

0x1fba,	// (0x00031851) sctrl_sk_bottom_pane

0x1fcb,	// (0x00031862) sctrl_sk_top_pane

0x1fdd,	// (0x00031874) aid_touch_sctrl_top

0x1fea,	// (0x00031881) bg_sctrl_sk_pane_ParamLimits

0x1fea,	// (0x00031881) bg_sctrl_sk_pane

0x1ff8,	// (0x0003188f) sctrl_sk_top_pane_g1

0x2005,	// (0x0003189c) sctrl_sk_top_pane_t1

0x1fdd,	// (0x00031874) aid_touch_sctrl_bottom

0x1fea,	// (0x00031881) bg_sctrl_sk_pane_cp_ParamLimits

0x1fea,	// (0x00031881) bg_sctrl_sk_pane_cp

0x2020,	// (0x000318b7) sctrl_sk_bottom_pane_g1

0x2005,	// (0x0003189c) sctrl_sk_bottom_pane_t1

0xc797,	// (0x0003c02e) cell_sctrl_middle_pane_ParamLimits

0xc797,	// (0x0003c02e) cell_sctrl_middle_pane

0xc7a8,	// (0x0003c03f) aid_touch_sctrl_middle_ParamLimits

0xc7a8,	// (0x0003c03f) aid_touch_sctrl_middle

0xc7b5,	// (0x0003c04c) bg_sctrl_middle_pane_ParamLimits

0xc7b5,	// (0x0003c04c) bg_sctrl_middle_pane

0x268d,	// (0x00031f24) cell_sctrl_middle_pane_g1_ParamLimits

0x268d,	// (0x00031f24) cell_sctrl_middle_pane_g1

0xc7c3,	// (0x0003c05a) cell_sctrl_middle_pane_g2_ParamLimits

0xc7c3,	// (0x0003c05a) cell_sctrl_middle_pane_g2

0x0001,

0xfcf8,	// (0x0003f58f) cell_sctrl_middle_pane_g_ParamLimits

0xfcf8,	// (0x0003f58f) cell_sctrl_middle_pane_g

0x50ea,	// (0x00034981) bg_sctrl_middle_pane_g1

0x50f2,	// (0x00034989) bg_sctrl_middle_pane_g2

0x50fa,	// (0x00034991) bg_sctrl_middle_pane_g3

0x5102,	// (0x00034999) bg_sctrl_middle_pane_g4

0x510a,	// (0x000349a1) bg_sctrl_middle_pane_g5

0x5112,	// (0x000349a9) bg_sctrl_middle_pane_g6

0x511a,	// (0x000349b1) bg_sctrl_middle_pane_g7

0x5122,	// (0x000349b9) bg_sctrl_middle_pane_g8

0x0007,

0xfcfd,	// (0x0003f594) bg_sctrl_middle_pane_g

0x512a,	// (0x000349c1) bg_sctrl_middle_pane_g8_copy1

0x50ea,	// (0x00034981) bg_sctrl_sk_pane_g1

0x50fa,	// (0x00034991) bg_sctrl_sk_pane_g2

0x50f2,	// (0x00034989) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0003f0f8) bg_sctrl_sk_pane_g

0x3b3b,	// (0x000333d2) aid_size_touch_scroll_bar

0x510a,	// (0x000349a1) bg_sctrl_sk_pane_g4

0x5102,	// (0x00034999) bg_sctrl_sk_pane_g5

0x5112,	// (0x000349a9) bg_sctrl_sk_pane_g6

0x511a,	// (0x000349b1) bg_sctrl_sk_pane_g7

0x512a,	// (0x000349c1) bg_sctrl_sk_pane_g8

0x5122,	// (0x000349b9) bg_sctrl_sk_pane_g9

0x0fef,	// (0x00030886) popup_fep_china_hwr2_fs_candidate_window

0xbdda,	// (0x0003b671) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbdda,	// (0x0003b671) popup_fep_china_hwr2_fs_control_window

0x1dbd,	// (0x00031654) sctrl_sk_top_pane_g2

0x0001,

0xfcf3,	// (0x0003f58a) sctrl_sk_top_pane_g

0xe5e1,	// (0x0003de78) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe5e1,	// (0x0003de78) aid_fep_china_hwr2_fs_cell

0xe5f5,	// (0x0003de8c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe5f5,	// (0x0003de8c) bg_popup_fep_shadow_pane_cp4

0xe60c,	// (0x0003dea3) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe60c,	// (0x0003dea3) bg_popup_fep_shadow_pane_cp5

0xe61e,	// (0x0003deb5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe61e,	// (0x0003deb5) popup_fep_china_hwr2_fs_control_bar_grid

0xe632,	// (0x0003dec9) popup_fep_china_hwr2_fs_control_funtion_grid

0x8e75,	// (0x0003870c) aid_fep_china_hwr2_fs_candi_cell

0x2b49,	// (0x000323e0) bg_popup_fep_shadow_pane_cp6

0x8e7f,	// (0x00038716) popup_fep_china_hwr2_fs_candidate_grid

0xe63a,	// (0x0003ded1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe63a,	// (0x0003ded1) cell_fep_china_hwr2_fs_funtion_grid

0x7710,	// (0x00036fa7) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8ea1,	// (0x00038738) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8ea1,	// (0x00038738) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8eaf,	// (0x00038746) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8eaf,	// (0x00038746) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0e,	// (0x0003f5a5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0e,	// (0x0003f5a5) cell_fep_china_hwr2_fs_funtion_grid_g

0xe652,	// (0x0003dee9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe652,	// (0x0003dee9) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe667,	// (0x0003defe) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe667,	// (0x0003defe) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd13,	// (0x0003f5aa) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd13,	// (0x0003f5aa) cell_fep_china_hwr2_fs_funtion_grid_t

0x8ef6,	// (0x0003878d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8efe,	// (0x00038795) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8f06,	// (0x0003879d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd18,	// (0x0003f5af) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8f0e,	// (0x000387a5) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8f0e,	// (0x000387a5) cell_fep_china_hwr2_fs_candidate_grid

0x8f27,	// (0x000387be) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8f2f,	// (0x000387c6) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7710,	// (0x00036fa7) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7710,	// (0x00036fa7) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2c,	// (0x0003f3c3) cell_fep_china_hwr2_fs_candidate_grid_g

0x8f37,	// (0x000387ce) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4ce0,	// (0x00034577) clock_nsta_pane_cp_24_ParamLimits

0x4ce0,	// (0x00034577) clock_nsta_pane_cp_24

0x4d5e,	// (0x000345f5) indicator_nsta_pane_cp_24_ParamLimits

0x4d5e,	// (0x000345f5) indicator_nsta_pane_cp_24

0x5de3,	// (0x0003567a) heading_pane_g1

0x0001,

0xf8c6,	// (0x0003f15d) heading_pane_g

0x6833,	// (0x000360ca) grid_sct_catagory_button_pane

0x6863,	// (0x000360fa) scroll_pane_cp5_ParamLimits

0x72f6,	// (0x00036b8d) button_value_adjust_pane_cp5_ParamLimits

0x72f6,	// (0x00036b8d) button_value_adjust_pane_cp5

0x73d5,	// (0x00036c6c) form2_midp_time_pane_ParamLimits

0x8f45,	// (0x000387dc) cell_sct_catagory_button_pane_ParamLimits

0x8f45,	// (0x000387dc) cell_sct_catagory_button_pane

0x76d5,	// (0x00036f6c) bg_button_pane_cp01_ParamLimits

0x76d5,	// (0x00036f6c) bg_button_pane_cp01

0x7710,	// (0x00036fa7) cell_sct_catagory_button_pane_g1

0xc339,	// (0x0003bbd0) popup_tb_extension_window

0xe683,	// (0x0003df1a) aid_size_cell_ext_ParamLimits

0xe683,	// (0x0003df1a) aid_size_cell_ext

0x397d,	// (0x00033214) bg_tb_trans_pane_cp1_ParamLimits

0x397d,	// (0x00033214) bg_tb_trans_pane_cp1

0xe6a9,	// (0x0003df40) grid_tb_ext_pane_ParamLimits

0xe6a9,	// (0x0003df40) grid_tb_ext_pane

0xe6e4,	// (0x0003df7b) cell_tb_ext_pane_ParamLimits

0xe6e4,	// (0x0003df7b) cell_tb_ext_pane

0xe70c,	// (0x0003dfa3) cell_tb_ext_pane_g1_ParamLimits

0xe70c,	// (0x0003dfa3) cell_tb_ext_pane_g1

0x8fd9,	// (0x00038870) cell_tb_ext_pane_t1

0x3626,	// (0x00032ebd) list_highlight_pane_cp11_ParamLimits

0x3626,	// (0x00032ebd) list_highlight_pane_cp11

0xb4d6,	// (0x0003ad6d) popup_uni_indicator_window_ParamLimits

0xb4d6,	// (0x0003ad6d) popup_uni_indicator_window

0x3c0c,	// (0x000334a3) bg_popup_sub_pane_cp14

0x8ff4,	// (0x0003888b) list_uniindi_pane

0x9000,	// (0x00038897) uniindi_top_pane

0x3626,	// (0x00032ebd) bg_uniindi_top_pane

0x901f,	// (0x000388b6) uniindi_top_pane_g1

0x9035,	// (0x000388cc) uniindi_top_pane_g2

0x0003,

0xfd1f,	// (0x0003f5b6) uniindi_top_pane_g

0x905f,	// (0x000388f6) uniindi_top_pane_t1

0x9089,	// (0x00038920) list_single_uniindi_pane_ParamLimits

0x9089,	// (0x00038920) list_single_uniindi_pane

0x7710,	// (0x00036fa7) bg_uniindi_top_pane_g1

0x909c,	// (0x00038933) list_single_uniindi_pane_g1

0x90af,	// (0x00038946) list_single_uniindi_pane_t1

0xf445,	// (0x0003ecdc) control_bg_pane

0x90d4,	// (0x0003896b) bg_sctrl_sk_pane_cp1

0x90dd,	// (0x00038974) bg_sctrl_sk_pane_cp2

0x90e6,	// (0x0003897d) control_bg_pane_g1

0x90ef,	// (0x00038986) control_bg_pane_g2

0x0001,

0xfd28,	// (0x0003f5bf) control_bg_pane_g

0x7140,	// (0x000369d7) cell_indicator_nsta_pane_g1_ParamLimits

0xdd55,	// (0x0003d5ec) cell_indicator_nsta_pane_g2_ParamLimits

0xfa90,	// (0x0003f327) cell_indicator_nsta_pane_g_ParamLimits

0x3225,	// (0x00032abc) form2_midp_time_pane_t1_ParamLimits

0x1b58,	// (0x000313ef) main_idle_act4_pane_ParamLimits

0x1b58,	// (0x000313ef) main_idle_act4_pane

0xc339,	// (0x0003bbd0) popup_tb_extension_window_ParamLimits

0xe6cb,	// (0x0003df62) tb_ext_find_pane_ParamLimits

0xe6cb,	// (0x0003df62) tb_ext_find_pane

0x90f8,	// (0x0003898f) ai_gene_pane_1_cp1

0x49dd,	// (0x00034274) ai_gene_pane_2_cp1

0x9100,	// (0x00038997) list_single_idle_plugin_calendar_pane

0x9109,	// (0x000389a0) list_single_idle_plugin_notification_pane

0x9112,	// (0x000389a9) list_single_idle_plugin_player_pane

0xe729,	// (0x0003dfc0) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe729,	// (0x0003dfc0) list_single_idle_plugin_shortcut_pane

0xe751,	// (0x0003dfe8) main_idle_act4_pane_t1

0xe767,	// (0x0003dffe) main_idle_act4_pane_t2

0x0001,

0xfd2d,	// (0x0003f5c4) main_idle_act4_pane_t

0xe77d,	// (0x0003e014) middle_sk_idle_act4_pane_ParamLimits

0xe77d,	// (0x0003e014) middle_sk_idle_act4_pane

0xe799,	// (0x0003e030) popup_clock_digital_analogue_window_cp2

0xe7c1,	// (0x0003e058) shortcut_wheel_idle_act4_pane_ParamLimits

0xe7c1,	// (0x0003e058) shortcut_wheel_idle_act4_pane

0x7710,	// (0x00036fa7) shortcut_wheel_idle_act4_pane_g1

0x7710,	// (0x00036fa7) shortcut_wheel_idle_act4_pane_g2

0x7710,	// (0x00036fa7) shortcut_wheel_idle_act4_pane_g3

0x7710,	// (0x00036fa7) shortcut_wheel_idle_act4_pane_g4

0x7710,	// (0x00036fa7) shortcut_wheel_idle_act4_pane_g5

0x91a5,	// (0x00038a3c) shortcut_wheel_idle_act4_pane_g6

0x91ad,	// (0x00038a44) shortcut_wheel_idle_act4_pane_g7

0x91b5,	// (0x00038a4c) shortcut_wheel_idle_act4_pane_g8

0x91bd,	// (0x00038a54) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd32,	// (0x0003f5c9) shortcut_wheel_idle_act4_pane_g

0xe330,	// (0x0003dbc7) middle_sk_idle_act4_pane_g1_ParamLimits

0xe330,	// (0x0003dbc7) middle_sk_idle_act4_pane_g1

0xe83e,	// (0x0003e0d5) middle_sk_idle_act4_pane_g2_ParamLimits

0xe83e,	// (0x0003e0d5) middle_sk_idle_act4_pane_g2

0x0001,

0xfd55,	// (0x0003f5ec) middle_sk_idle_act4_pane_g_ParamLimits

0xfd55,	// (0x0003f5ec) middle_sk_idle_act4_pane_g

0xe856,	// (0x0003e0ed) middle_sk_idle_act4_pane_t1_ParamLimits

0xe856,	// (0x0003e0ed) middle_sk_idle_act4_pane_t1

0xe885,	// (0x0003e11c) grid_ai_shortcut_pane_ParamLimits

0xe885,	// (0x0003e11c) grid_ai_shortcut_pane

0xe8a2,	// (0x0003e139) list_highlight_pane_cp16_ParamLimits

0xe8a2,	// (0x0003e139) list_highlight_pane_cp16

0xe8af,	// (0x0003e146) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe8af,	// (0x0003e146) list_single_idle_plugin_shortcut_pane_g1

0xe8bb,	// (0x0003e152) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe8bb,	// (0x0003e152) list_single_idle_plugin_shortcut_pane_g2

0xe8d7,	// (0x0003e16e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe8d7,	// (0x0003e16e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5a,	// (0x0003f5f1) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5a,	// (0x0003f5f1) list_single_idle_plugin_shortcut_pane_g

0xe8ec,	// (0x0003e183) cell_ai_shortcut_pane_ParamLimits

0xe8ec,	// (0x0003e183) cell_ai_shortcut_pane

0xe902,	// (0x0003e199) cell_ai_shortcut_pane_g1_ParamLimits

0xe902,	// (0x0003e199) cell_ai_shortcut_pane_g1

0x90f8,	// (0x0003898f) ai_gene_pane_1_cp2

0x92ed,	// (0x00038b84) ai_gene_pane_2_cp2

0x92f5,	// (0x00038b8c) list_highlight_pane_cp15

0x92fe,	// (0x00038b95) list_single_idle_plugin_calendar_pane_g1

0x92f5,	// (0x00038b8c) list_highlight_pane_cp17

0x9306,	// (0x00038b9d) list_single_idle_plugin_calendar_pane_g1_copy1

0x930e,	// (0x00038ba5) list_single_idle_plugin_player_pane_g1

0x6a8c,	// (0x00036323) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd61,	// (0x0003f5f8) list_single_idle_plugin_player_pane_g

0x9316,	// (0x00038bad) list_single_idle_plugin_player_pane_t1

0x9324,	// (0x00038bbb) list_single_idle_plugin_player_pane_t2

0x9332,	// (0x00038bc9) list_single_idle_plugin_player_pane_t3

0x9340,	// (0x00038bd7) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd66,	// (0x0003f5fd) list_single_idle_plugin_player_pane_t

0x934e,	// (0x00038be5) wait_bar_pane_cp15

0x9356,	// (0x00038bed) grid_ai_notification_pane

0x6a8c,	// (0x00036323) list_single_idle_plugin_notification_pane_g1

0xe924,	// (0x0003e1bb) cell_ai_notification_pane_ParamLimits

0xe924,	// (0x0003e1bb) cell_ai_notification_pane

0x936c,	// (0x00038c03) cell_ai_notification_pane_g1

0x9374,	// (0x00038c0b) cell_ai_notification_pane_t1

0xe931,	// (0x0003e1c8) tb_ext_find_button_pane

0xe939,	// (0x0003e1d0) tb_ext_find_pane_g1

0xe941,	// (0x0003e1d8) tb_ext_find_pane_t1

0x428f,	// (0x00033b26) tb_ext_find_button_pane_g1

0x93a0,	// (0x00038c37) tb_ext_find_button_pane_g2

0x0001,

0xfd6f,	// (0x0003f606) tb_ext_find_button_pane_g

0xe751,	// (0x0003dfe8) main_idle_act4_pane_t1_ParamLimits

0xe767,	// (0x0003dffe) main_idle_act4_pane_t2_ParamLimits

0xfd2d,	// (0x0003f5c4) main_idle_act4_pane_t_ParamLimits

0xe799,	// (0x0003e030) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe7b1,	// (0x0003e048) sat_plugin_idle_act4_pane_ParamLimits

0xe7b1,	// (0x0003e048) sat_plugin_idle_act4_pane

0xe94f,	// (0x0003e1e6) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe94f,	// (0x0003e1e6) sat_plugin_idle_act4_pane_t1

0xe967,	// (0x0003e1fe) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe967,	// (0x0003e1fe) sat_plugin_idle_act4_pane_t2

0xe97f,	// (0x0003e216) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe97f,	// (0x0003e216) sat_plugin_idle_act4_pane_t3

0xe997,	// (0x0003e22e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe997,	// (0x0003e22e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd74,	// (0x0003f60b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd74,	// (0x0003f60b) sat_plugin_idle_act4_pane_t

0xf50a,	// (0x0003eda1) popup_battery_window_ParamLimits

0xf50a,	// (0x0003eda1) popup_battery_window

0x3626,	// (0x00032ebd) bg_popup_sub_pane_cp25_ParamLimits

0x3626,	// (0x00032ebd) bg_popup_sub_pane_cp25

0x93f5,	// (0x00038c8c) popup_battery_window_g1_ParamLimits

0x93f5,	// (0x00038c8c) popup_battery_window_g1

0x9401,	// (0x00038c98) popup_battery_window_t1_ParamLimits

0x9401,	// (0x00038c98) popup_battery_window_t1

0x9413,	// (0x00038caa) popup_battery_window_t2_ParamLimits

0x9413,	// (0x00038caa) popup_battery_window_t2

0x0001,

0xfd7d,	// (0x0003f614) popup_battery_window_t_ParamLimits

0xfd7d,	// (0x0003f614) popup_battery_window_t

0xd26c,	// (0x0003cb03) midp_canvas_pane_ParamLimits

0xd2c9,	// (0x0003cb60) midp_keypad_pane_ParamLimits

0xd2c9,	// (0x0003cb60) midp_keypad_pane

0x4be0,	// (0x00034477) main_midp_pane_ParamLimits

0x71ba,	// (0x00036a51) signal_pane_g2_cp_ParamLimits

0xe9af,	// (0x0003e246) aid_size_cell_midp_keypad_ParamLimits

0xe9af,	// (0x0003e246) aid_size_cell_midp_keypad

0xe9cd,	// (0x0003e264) midp_keyp_game_grid_pane_ParamLimits

0xe9cd,	// (0x0003e264) midp_keyp_game_grid_pane

0xe9f4,	// (0x0003e28b) midp_keyp_rocker_pane_ParamLimits

0xe9f4,	// (0x0003e28b) midp_keyp_rocker_pane

0xea45,	// (0x0003e2dc) midp_keyp_sk_left_pane_ParamLimits

0xea45,	// (0x0003e2dc) midp_keyp_sk_left_pane

0xea99,	// (0x0003e330) midp_keyp_sk_right_pane_ParamLimits

0xea99,	// (0x0003e330) midp_keyp_sk_right_pane

0x2b49,	// (0x000323e0) bg_button_pane_cp03

0xeaed,	// (0x0003e384) midp_keyp_sk_left_pane_g1

0x2b49,	// (0x000323e0) bg_button_pane_cp04

0xeaed,	// (0x0003e384) midp_keyp_sk_right_pane_g1

0x7710,	// (0x00036fa7) midp_keyp_rocker_pane_g1

0xeaf6,	// (0x0003e38d) keyp_game_cell_pane_ParamLimits

0xeaf6,	// (0x0003e38d) keyp_game_cell_pane

0x2b49,	// (0x000323e0) bg_button_pane_cp02

0xeb1a,	// (0x0003e3b1) keyp_game_cell_pane_g1

0xb471,	// (0x0003ad08) popup_fep_vkb2_window_ParamLimits

0xb471,	// (0x0003ad08) popup_fep_vkb2_window

0xc7cf,	// (0x0003c066) aid_size_cell_vkb2_ParamLimits

0xc7cf,	// (0x0003c066) aid_size_cell_vkb2

0xc805,	// (0x0003c09c) popup_fep_vkb2_window_g1_ParamLimits

0xc805,	// (0x0003c09c) popup_fep_vkb2_window_g1

0xc855,	// (0x0003c0ec) vkb2_area_bottom_pane_ParamLimits

0xc855,	// (0x0003c0ec) vkb2_area_bottom_pane

0xc8a9,	// (0x0003c140) vkb2_area_keypad_pane_ParamLimits

0xc8a9,	// (0x0003c140) vkb2_area_keypad_pane

0xc8f1,	// (0x0003c188) vkb2_area_top_pane_ParamLimits

0xc8f1,	// (0x0003c188) vkb2_area_top_pane

0xc977,	// (0x0003c20e) vkb2_top_entry_pane_ParamLimits

0xc977,	// (0x0003c20e) vkb2_top_entry_pane

0xc9a4,	// (0x0003c23b) vkb2_top_grid_left_pane_ParamLimits

0xc9a4,	// (0x0003c23b) vkb2_top_grid_left_pane

0xc9c4,	// (0x0003c25b) vkb2_top_grid_right_pane_ParamLimits

0xc9c4,	// (0x0003c25b) vkb2_top_grid_right_pane

0x228c,	// (0x00031b23) vkb2_cell_keypad_pane_ParamLimits

0x228c,	// (0x00031b23) vkb2_cell_keypad_pane

0xca0a,	// (0x0003c2a1) vkb2_area_bottom_grid_pane_ParamLimits

0xca0a,	// (0x0003c2a1) vkb2_area_bottom_grid_pane

0xca34,	// (0x0003c2cb) vkb2_area_bottom_pane_g1_ParamLimits

0xca34,	// (0x0003c2cb) vkb2_area_bottom_pane_g1

0xca5a,	// (0x0003c2f1) vkb2_area_bottom_pane_g2_ParamLimits

0xca5a,	// (0x0003c2f1) vkb2_area_bottom_pane_g2

0xca8b,	// (0x0003c322) vkb2_area_bottom_pane_g3_ParamLimits

0xca8b,	// (0x0003c322) vkb2_area_bottom_pane_g3

0x0002,

0xfd82,	// (0x0003f619) vkb2_area_bottom_pane_g_ParamLimits

0xfd82,	// (0x0003f619) vkb2_area_bottom_pane_g

0x2436,	// (0x00031ccd) vkb2_top_cell_left_pane_ParamLimits

0x2436,	// (0x00031ccd) vkb2_top_cell_left_pane

0xeb23,	// (0x0003e3ba) vkb2_top_entry_pane_g1_ParamLimits

0xeb23,	// (0x0003e3ba) vkb2_top_entry_pane_g1

0xeb31,	// (0x0003e3c8) vkb2_top_entry_pane_t1_ParamLimits

0xeb31,	// (0x0003e3c8) vkb2_top_entry_pane_t1

0x95c4,	// (0x00038e5b) vkb2_top_entry_pane_t2_ParamLimits

0x95c4,	// (0x00038e5b) vkb2_top_entry_pane_t2

0x95f6,	// (0x00038e8d) vkb2_top_entry_pane_t3_ParamLimits

0x95f6,	// (0x00038e8d) vkb2_top_entry_pane_t3

0x0002,

0xfd89,	// (0x0003f620) vkb2_top_entry_pane_t_ParamLimits

0xfd89,	// (0x0003f620) vkb2_top_entry_pane_t

0xcaf5,	// (0x0003c38c) vkb2_top_grid_right_pane_g1_ParamLimits

0xcaf5,	// (0x0003c38c) vkb2_top_grid_right_pane_g1

0x2499,	// (0x00031d30) vkb2_top_grid_right_pane_g2_ParamLimits

0x2499,	// (0x00031d30) vkb2_top_grid_right_pane_g2

0x24b1,	// (0x00031d48) vkb2_top_grid_right_pane_g3_ParamLimits

0x24b1,	// (0x00031d48) vkb2_top_grid_right_pane_g3

0xcb0b,	// (0x0003c3a2) vkb2_top_grid_right_pane_g4_ParamLimits

0xcb0b,	// (0x0003c3a2) vkb2_top_grid_right_pane_g4

0x0003,

0xfd90,	// (0x0003f627) vkb2_top_grid_right_pane_g_ParamLimits

0xfd90,	// (0x0003f627) vkb2_top_grid_right_pane_g

0x24df,	// (0x00031d76) vkb2_top_cell_left_pane_g1

0x24f6,	// (0x00031d8d) vkb2_cell_keypad_pane_g1_ParamLimits

0x24f6,	// (0x00031d8d) vkb2_cell_keypad_pane_g1

0x961a,	// (0x00038eb1) vkb2_cell_keypad_pane_t1_ParamLimits

0x961a,	// (0x00038eb1) vkb2_cell_keypad_pane_t1

0x2504,	// (0x00031d9b) vkb2_cell_bottom_grid_pane_ParamLimits

0x2504,	// (0x00031d9b) vkb2_cell_bottom_grid_pane

0x253d,	// (0x00031dd4) vkb2_cell_bottom_grid_pane_g1

0xe7e2,	// (0x0003e079) aid_call2_pane_cp02

0xe7ea,	// (0x0003e081) aid_call_pane_cp02

0xe7f2,	// (0x0003e089) clock_digital_number_pane_cp10

0xe7fa,	// (0x0003e091) clock_digital_number_pane_cp11

0xe802,	// (0x0003e099) clock_digital_number_pane_cp12

0xe80a,	// (0x0003e0a1) clock_digital_number_pane_cp13

0xe812,	// (0x0003e0a9) clock_digital_separator_pane_cp10

0x428f,	// (0x00033b26) popup_clock_digital_analogue_window_cp2_g1

0x428f,	// (0x00033b26) popup_clock_digital_analogue_window_cp2_g2

0xe81a,	// (0x0003e0b1) popup_clock_digital_analogue_window_cp2_g3

0x428f,	// (0x00033b26) popup_clock_digital_analogue_window_cp2_g4

0xe81a,	// (0x0003e0b1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd45,	// (0x0003f5dc) popup_clock_digital_analogue_window_cp2_g

0xe822,	// (0x0003e0b9) popup_clock_digital_analogue_window_cp2_t1

0xe830,	// (0x0003e0c7) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd50,	// (0x0003f5e7) popup_clock_digital_analogue_window_cp2_t

0x7710,	// (0x00036fa7) clock_digital_number_pane_cp10_g1

0x7710,	// (0x00036fa7) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0003f3c3) clock_digital_number_pane_cp10_g

0x7710,	// (0x00036fa7) clock_digital_separator_pane_cp10_g1

0x7710,	// (0x00036fa7) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0003f3c3) clock_digital_separator_pane_cp10_g

0x9041,	// (0x000388d8) uniindi_top_pane_g3

0x9052,	// (0x000388e9) uniindi_top_pane_g4

0x2317,	// (0x00031bae) vkb2_row_keypad_pane_ParamLimits

0x2317,	// (0x00031bae) vkb2_row_keypad_pane

0x2559,	// (0x00031df0) vkb2_cell_t_keypad_pane_ParamLimits

0x2559,	// (0x00031df0) vkb2_cell_t_keypad_pane

0x2569,	// (0x00031e00) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2569,	// (0x00031e00) vkb2_cell_t_keypad_pane_cp08

0x257c,	// (0x00031e13) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x257c,	// (0x00031e13) vkb2_cell_t_keypad_pane_cp09

0x2590,	// (0x00031e27) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2590,	// (0x00031e27) vkb2_cell_t_keypad_pane_cp01

0x25a1,	// (0x00031e38) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x25a1,	// (0x00031e38) vkb2_cell_t_keypad_pane_cp02

0x25b2,	// (0x00031e49) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x25b2,	// (0x00031e49) vkb2_cell_t_keypad_pane_cp03

0x25c3,	// (0x00031e5a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x25c3,	// (0x00031e5a) vkb2_cell_t_keypad_pane_cp04

0x25d4,	// (0x00031e6b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x25d4,	// (0x00031e6b) vkb2_cell_t_keypad_pane_cp05

0x25e5,	// (0x00031e7c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x25e5,	// (0x00031e7c) vkb2_cell_t_keypad_pane_cp06

0x25f6,	// (0x00031e8d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x25f6,	// (0x00031e8d) vkb2_cell_t_keypad_pane_cp07

0x2607,	// (0x00031e9e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2607,	// (0x00031e9e) vkb2_cell_t_keypad_pane_cp10

0x1dbd,	// (0x00031654) vkb2_cell_t_keypad_pane_g1

0x9652,	// (0x00038ee9) vkb2_cell_t_keypad_pane_t1

0xf445,	// (0x0003ecdc) popup_grid_graphic2_window

0xeb6a,	// (0x0003e401) aid_size_cell_graphic2_ParamLimits

0xeb6a,	// (0x0003e401) aid_size_cell_graphic2

0xeba8,	// (0x0003e43f) bg_popup_window_pane_cp21_ParamLimits

0xeba8,	// (0x0003e43f) bg_popup_window_pane_cp21

0xebb6,	// (0x0003e44d) graphic2_pages_pane_ParamLimits

0xebb6,	// (0x0003e44d) graphic2_pages_pane

0xec0c,	// (0x0003e4a3) grid_graphic2_control_pane_ParamLimits

0xec0c,	// (0x0003e4a3) grid_graphic2_control_pane

0xec54,	// (0x0003e4eb) grid_graphic2_pane_ParamLimits

0xec54,	// (0x0003e4eb) grid_graphic2_pane

0xecdb,	// (0x0003e572) cell_graphic2_pane

0xf445,	// (0x0003ecdc) main_comp_mode_pane

0x88c1,	// (0x00038158) list_ai3_gene_pane_ParamLimits

0xe529,	// (0x0003ddc0) bg_popup_window_pane_cp19_ParamLimits

0x8c97,	// (0x0003852e) bg_touch_area_indi_pane_ParamLimits

0x8c97,	// (0x0003852e) bg_touch_area_indi_pane

0x8cad,	// (0x00038544) bg_touch_area_indi_pane_cp01_ParamLimits

0x8cad,	// (0x00038544) bg_touch_area_indi_pane_cp01

0x8cc3,	// (0x0003855a) bg_touch_area_indi_pane_cp02_ParamLimits

0x8cc3,	// (0x0003855a) bg_touch_area_indi_pane_cp02

0x8cdb,	// (0x00038572) bg_touch_area_indi_pane_cp03_ParamLimits

0x8cdb,	// (0x00038572) bg_touch_area_indi_pane_cp03

0x8cf5,	// (0x0003858c) popup_slider_window_g1_ParamLimits

0x8d11,	// (0x000385a8) popup_slider_window_g2_ParamLimits

0x8d2d,	// (0x000385c4) popup_slider_window_g3_ParamLimits

0xfcda,	// (0x0003f571) popup_slider_window_g_ParamLimits

0x8d89,	// (0x00038620) popup_slider_window_t1_ParamLimits

0x8dfd,	// (0x00038694) small_volume_slider_vertical_pane_ParamLimits

0xecdb,	// (0x0003e572) cell_graphic2_pane_ParamLimits

0xed38,	// (0x0003e5cf) bg_button_pane_cp10_ParamLimits

0xed38,	// (0x0003e5cf) bg_button_pane_cp10

0xed4b,	// (0x0003e5e2) bg_button_pane_cp11_ParamLimits

0xed4b,	// (0x0003e5e2) bg_button_pane_cp11

0xed5e,	// (0x0003e5f5) graphic2_pages_pane_g1_ParamLimits

0xed5e,	// (0x0003e5f5) graphic2_pages_pane_g1

0xed79,	// (0x0003e610) graphic2_pages_pane_g2_ParamLimits

0xed79,	// (0x0003e610) graphic2_pages_pane_g2

0x0001,

0xfd9e,	// (0x0003f635) graphic2_pages_pane_g_ParamLimits

0xfd9e,	// (0x0003f635) graphic2_pages_pane_g

0xed91,	// (0x0003e628) graphic2_pages_pane_t1_ParamLimits

0xed91,	// (0x0003e628) graphic2_pages_pane_t1

0xeda9,	// (0x0003e640) cell_graphic2_control_pane_ParamLimits

0xeda9,	// (0x0003e640) cell_graphic2_control_pane

0xeddb,	// (0x0003e672) cell_graphic2_pane_g1_ParamLimits

0xeddb,	// (0x0003e672) cell_graphic2_pane_g1

0xe33e,	// (0x0003dbd5) cell_graphic2_pane_g2_ParamLimits

0xe33e,	// (0x0003dbd5) cell_graphic2_pane_g2

0xe358,	// (0x0003dbef) cell_graphic2_pane_g3_ParamLimits

0xe358,	// (0x0003dbef) cell_graphic2_pane_g3

0xe34b,	// (0x0003dbe2) cell_graphic2_pane_g4_ParamLimits

0xe34b,	// (0x0003dbe2) cell_graphic2_pane_g4

0xede8,	// (0x0003e67f) cell_graphic2_pane_g5_ParamLimits

0xede8,	// (0x0003e67f) cell_graphic2_pane_g5

0x0004,

0xfda3,	// (0x0003f63a) cell_graphic2_pane_g_ParamLimits

0xfda3,	// (0x0003f63a) cell_graphic2_pane_g

0xee08,	// (0x0003e69f) cell_graphic2_pane_t1_ParamLimits

0xee08,	// (0x0003e69f) cell_graphic2_pane_t1

0x5dd7,	// (0x0003566e) grid_highlight_pane_cp11_ParamLimits

0x5dd7,	// (0x0003566e) grid_highlight_pane_cp11

0x3626,	// (0x00032ebd) bg_button_pane_cp05

0xee3d,	// (0x0003e6d4) cell_graphic2_control_pane_g1

0x7710,	// (0x00036fa7) bg_touch_area_indi_pane_g1

0x9922,	// (0x000391b9) aid_cmod_rocker_key_size

0x992c,	// (0x000391c3) aid_cmode_itu_key_size

0x9936,	// (0x000391cd) main_cmode_video_pane

0x9940,	// (0x000391d7) main_comp_mode_itu_pane

0x994c,	// (0x000391e3) main_comp_mode_rocker_pane

0x9958,	// (0x000391ef) cell_cmode_rocker_pane_ParamLimits

0x9958,	// (0x000391ef) cell_cmode_rocker_pane

0x996a,	// (0x00039201) cell_cmode_itu_pane_ParamLimits

0x996a,	// (0x00039201) cell_cmode_itu_pane

0x3c0c,	// (0x000334a3) bg_button_pane_cp06_ParamLimits

0x3c0c,	// (0x000334a3) bg_button_pane_cp06

0x798e,	// (0x00037225) cell_cmode_rocker_pane_g1_ParamLimits

0x798e,	// (0x00037225) cell_cmode_rocker_pane_g1

0x8ea1,	// (0x00038738) cell_cmode_rocker_pane_g2_ParamLimits

0x8ea1,	// (0x00038738) cell_cmode_rocker_pane_g2

0x0001,

0xfdb3,	// (0x0003f64a) cell_cmode_rocker_pane_g_ParamLimits

0xfdb3,	// (0x0003f64a) cell_cmode_rocker_pane_g

0x2b49,	// (0x000323e0) bg_button_pane_cp07

0x997f,	// (0x00039216) cell_cmode_itu_pane_g1

0x9988,	// (0x0003921f) cell_cmode_itu_pane_t1

0x9996,	// (0x0003922d) cell_cmode_itu_pane_t2

0x0001,

0xfdb8,	// (0x0003f64f) cell_cmode_itu_pane_t

0x90c4,	// (0x0003895b) aid_touch_ctrl_left

0x90cc,	// (0x00038963) aid_touch_ctrl_right

0x2b49,	// (0x000323e0) compa_mode_pane

0xee63,	// (0x0003e6fa) aid_cmod_rocker_key_size_cp

0xee6d,	// (0x0003e704) aid_cmode_itu_key_size_cp

0x99b8,	// (0x0003924f) compa_mode_pane_g1

0x99c0,	// (0x00039257) compa_mode_pane_g2

0x99c8,	// (0x0003925f) compa_mode_pane_g3

0x0002,

0xfdbd,	// (0x0003f654) compa_mode_pane_g

0xee77,	// (0x0003e70e) main_comp_mode_itu_pane_cp

0xee7f,	// (0x0003e716) main_comp_mode_rocker_pane_cp

0xee87,	// (0x0003e71e) cell_cmode_itu_pane_cp_ParamLimits

0xee87,	// (0x0003e71e) cell_cmode_itu_pane_cp

0xee9c,	// (0x0003e733) cell_cmode_rocker_pane_cp_ParamLimits

0xee9c,	// (0x0003e733) cell_cmode_rocker_pane_cp

0x3c0c,	// (0x000334a3) bg_button_pane_cp06_cp_ParamLimits

0x3c0c,	// (0x000334a3) bg_button_pane_cp06_cp

0x798e,	// (0x00037225) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x798e,	// (0x00037225) cell_cmode_rocker_pane_g1_cp

0x7710,	// (0x00036fa7) cell_cmode_rocker_pane_g2_cp

0x2b49,	// (0x000323e0) bg_button_pane_cp07_cp

0xeeae,	// (0x0003e745) cell_cmode_itu_pane_g1_cp

0xeeb7,	// (0x0003e74e) cell_cmode_itu_pane_t1_cp

0xeeb7,	// (0x0003e74e) cell_cmode_itu_pane_t2_cp

0xdb68,	// (0x0003d3ff) settings_code_pane_cp2

0x2c3d,	// (0x000324d4) bg_popup_window_pane_cp3_ParamLimits

0x3800,	// (0x00033097) heading_pane_cp3_ParamLimits

0x380c,	// (0x000330a3) listscroll_popup_graphic_pane_ParamLimits

0x1b66,	// (0x000313fd) fep_hwr_aid_pane_ParamLimits

0x1fdd,	// (0x00031874) aid_touch_sctrl_top_ParamLimits

0x1ff8,	// (0x0003188f) sctrl_sk_top_pane_g1_ParamLimits

0x1dbd,	// (0x00031654) sctrl_sk_top_pane_g2_ParamLimits

0xfcf3,	// (0x0003f58a) sctrl_sk_top_pane_g_ParamLimits

0x2005,	// (0x0003189c) sctrl_sk_top_pane_t1_ParamLimits

0x1fdd,	// (0x00031874) aid_touch_sctrl_bottom_ParamLimits

0x2005,	// (0x0003189c) sctrl_sk_bottom_pane_t1_ParamLimits

0x900d,	// (0x000388a4) aid_area_touch_clock

0xc939,	// (0x0003c1d0) aid_vkb2_area_top_pane_cell_ParamLimits

0xc939,	// (0x0003c1d0) aid_vkb2_area_top_pane_cell

0xc9e4,	// (0x0003c27b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc9e4,	// (0x0003c27b) aid_vkb2_area_bottom_pane_cell

0x957c,	// (0x00038e13) popup_char_count_window

0x9a15,	// (0x000392ac) popup_char_count_window_g1

0x9a1e,	// (0x000392b5) popup_char_count_window_g2

0x9a27,	// (0x000392be) popup_char_count_window_g3

0x0002,

0xfdc4,	// (0x0003f65b) popup_char_count_window_g

0x9a30,	// (0x000392c7) popup_char_count_window_t1

0x20b4,	// (0x0003194b) popup_fep_char_preview_window_ParamLimits

0x20b4,	// (0x0003194b) popup_fep_char_preview_window

0xc959,	// (0x0003c1f0) vkb2_top_candi_pane_ParamLimits

0xc959,	// (0x0003c1f0) vkb2_top_candi_pane

0xeec5,	// (0x0003e75c) cell_vkb2_top_candi_pane_ParamLimits

0xeec5,	// (0x0003e75c) cell_vkb2_top_candi_pane

0x261c,	// (0x00031eb3) bg_popup_fep_char_preview_window_ParamLimits

0x261c,	// (0x00031eb3) bg_popup_fep_char_preview_window

0x262a,	// (0x00031ec1) popup_fep_char_preview_window_t1_ParamLimits

0x262a,	// (0x00031ec1) popup_fep_char_preview_window_t1

0x9a8b,	// (0x00039322) bg_popup_fep_char_preview_window_g1

0x9a93,	// (0x0003932a) bg_popup_fep_char_preview_window_g2

0x9a9b,	// (0x00039332) bg_popup_fep_char_preview_window_g3

0x9aa3,	// (0x0003933a) bg_popup_fep_char_preview_window_g4

0x9aab,	// (0x00039342) bg_popup_fep_char_preview_window_g5

0x2664,	// (0x00031efb) bg_popup_fep_char_preview_window_g6

0x9ab3,	// (0x0003934a) bg_popup_fep_char_preview_window_g7

0x9abb,	// (0x00039352) bg_popup_fep_char_preview_window_g8

0x9ac3,	// (0x0003935a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcb,	// (0x0003f662) bg_popup_fep_char_preview_window_g

0x1dbd,	// (0x00031654) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1dbd,	// (0x00031654) cell_vkb2_top_candi_pane_g1

0x1dcb,	// (0x00031662) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1dcb,	// (0x00031662) cell_vkb2_top_candi_pane_g2

0x9631,	// (0x00038ec8) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9631,	// (0x00038ec8) cell_vkb2_top_candi_pane_g3

0x266c,	// (0x00031f03) cell_vkb2_top_candi_pane_g4_ParamLimits

0x266c,	// (0x00031f03) cell_vkb2_top_candi_pane_g4

0x7e59,	// (0x000376f0) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7e59,	// (0x000376f0) cell_vkb2_top_candi_pane_g5

0x268d,	// (0x00031f24) cell_vkb2_top_candi_pane_g6_ParamLimits

0x268d,	// (0x00031f24) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdde,	// (0x0003f675) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdde,	// (0x0003f675) cell_vkb2_top_candi_pane_g

0x269b,	// (0x00031f32) cell_vkb2_top_candi_pane_t1

0x1947,	// (0x000311de) aid_size_touch_slider_mark_ParamLimits

0x1947,	// (0x000311de) aid_size_touch_slider_mark

0xebf2,	// (0x0003e489) grid_graphic2_catg_pane_ParamLimits

0xebf2,	// (0x0003e489) grid_graphic2_catg_pane

0xecae,	// (0x0003e545) popup_grid_graphic2_window_t1_ParamLimits

0xecae,	// (0x0003e545) popup_grid_graphic2_window_t1

0xecc4,	// (0x0003e55b) popup_grid_graphic2_window_t2_ParamLimits

0xecc4,	// (0x0003e55b) popup_grid_graphic2_window_t2

0x0001,

0xfd99,	// (0x0003f630) popup_grid_graphic2_window_t_ParamLimits

0xfd99,	// (0x0003f630) popup_grid_graphic2_window_t

0x3626,	// (0x00032ebd) bg_button_pane_cp05_ParamLimits

0xee3d,	// (0x0003e6d4) cell_graphic2_control_pane_g1_ParamLimits

0xef2b,	// (0x0003e7c2) cell_graphic2_catg_pane_ParamLimits

0xef2b,	// (0x0003e7c2) cell_graphic2_catg_pane

0x2b49,	// (0x000323e0) bg_button_pane_cp12

0xef3d,	// (0x0003e7d4) cell_graphic2_catg_pane_g1

0x8fd9,	// (0x00038870) cell_tb_ext_pane_t1_ParamLimits

0x2456,	// (0x00031ced) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2456,	// (0x00031ced) vkb2_top_cell_right_narrow_pane

0x246e,	// (0x00031d05) vkb2_top_cell_right_wide_pane_ParamLimits

0x246e,	// (0x00031d05) vkb2_top_cell_right_wide_pane

0x1b58,	// (0x000313ef) bg_vkb2_func_pane_ParamLimits

0x1b58,	// (0x000313ef) bg_vkb2_func_pane

0x24df,	// (0x00031d76) vkb2_top_cell_left_pane_g1_ParamLimits

0x1b58,	// (0x000313ef) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1b58,	// (0x000313ef) bg_vkb2_fuc_pane_cp03

0x253d,	// (0x00031dd4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x50f2,	// (0x00034989) bg_vkb2_func_pane_g1

0x50fa,	// (0x00034991) bg_vkb2_func_pane_g2

0x510a,	// (0x000349a1) bg_vkb2_func_pane_g3

0x5102,	// (0x00034999) bg_vkb2_func_pane_g4

0x5112,	// (0x000349a9) bg_vkb2_func_pane_g5

0x511a,	// (0x000349b1) bg_vkb2_func_pane_g6

0x5122,	// (0x000349b9) bg_vkb2_func_pane_g7

0x512a,	// (0x000349c1) bg_vkb2_func_pane_g8

0x50ea,	// (0x00034981) bg_vkb2_func_pane_g9

0x0008,

0xfdeb,	// (0x0003f682) bg_vkb2_func_pane_g

0x1b58,	// (0x000313ef) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1b58,	// (0x000313ef) bg_vkb2_fuc_pane_cp01

0x24df,	// (0x00031d76) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x24df,	// (0x00031d76) vkb2_top_cell_right_wide_pane_g1

0x1b58,	// (0x000313ef) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1b58,	// (0x000313ef) bg_vkb2_fuc_pane_cp02

0x253d,	// (0x00031dd4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x253d,	// (0x00031dd4) vkb2_top_cell_right_narrow_pane_g1

0xe469,	// (0x0003dd00) aid_touch_area_decrease_ParamLimits

0xe469,	// (0x0003dd00) aid_touch_area_decrease

0xe49d,	// (0x0003dd34) aid_touch_area_increase_ParamLimits

0xe49d,	// (0x0003dd34) aid_touch_area_increase

0xe4c5,	// (0x0003dd5c) aid_touch_area_mute_ParamLimits

0xe4c5,	// (0x0003dd5c) aid_touch_area_mute

0xe4f5,	// (0x0003dd8c) aid_touch_area_slider_ParamLimits

0xe4f5,	// (0x0003dd8c) aid_touch_area_slider

0xe535,	// (0x0003ddcc) popup_slider_window_g4_ParamLimits

0xe535,	// (0x0003ddcc) popup_slider_window_g4

0xe55d,	// (0x0003ddf4) popup_slider_window_g5_ParamLimits

0xe55d,	// (0x0003ddf4) popup_slider_window_g5

0xe591,	// (0x0003de28) popup_slider_window_g6_ParamLimits

0xe591,	// (0x0003de28) popup_slider_window_g6

0x8db7,	// (0x0003864e) popup_slider_window_t2_ParamLimits

0x8db7,	// (0x0003864e) popup_slider_window_t2

0x0001,

0xfce7,	// (0x0003f57e) popup_slider_window_t_ParamLimits

0xfce7,	// (0x0003f57e) popup_slider_window_t

0xe5ad,	// (0x0003de44) slider_pane_ParamLimits

0xe5ad,	// (0x0003de44) slider_pane

0x9ae6,	// (0x0003937d) slider_pane_g1_ParamLimits

0x9ae6,	// (0x0003937d) slider_pane_g1

0x9afa,	// (0x00039391) slider_pane_g2_ParamLimits

0x9afa,	// (0x00039391) slider_pane_g2

0x9b10,	// (0x000393a7) slider_pane_g3_ParamLimits

0x9b10,	// (0x000393a7) slider_pane_g3

0x0003,

0xfdfe,	// (0x0003f695) slider_pane_g_ParamLimits

0xfdfe,	// (0x0003f695) slider_pane_g

0xc381,	// (0x0003bc18) popup_tb_float_extension_window_ParamLimits

0xc381,	// (0x0003bc18) popup_tb_float_extension_window

0x9b3c,	// (0x000393d3) aid_size_cell_tb_float_ext

0x2b49,	// (0x000323e0) bg_popup_sub_window_cp28

0x9b48,	// (0x000393df) grid_tb_float_ext_pane

0x9b52,	// (0x000393e9) cell_tb_float_ext_pane_ParamLimits

0x9b52,	// (0x000393e9) cell_tb_float_ext_pane

0x9b6c,	// (0x00039403) cell_tb_float_ext_pane_g1

0x9b75,	// (0x0003940c) grid_highlight_pane_cp12

0xc559,	// (0x0003bdf0) cell_last_hwr_side_pane_ParamLimits

0xc559,	// (0x0003bdf0) cell_last_hwr_side_pane

0x7710,	// (0x00036fa7) cell_last_hwr_side_pane_g1

0x9b7e,	// (0x00039415) cell_last_hwr_side_pane_g2

0x0001,

0xfe07,	// (0x0003f69e) cell_last_hwr_side_pane_g

0xcac0,	// (0x0003c357) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcac0,	// (0x0003c357) vkb2_area_bottom_space_btn_pane

0x1dbd,	// (0x00031654) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9652,	// (0x00038ee9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x269b,	// (0x00031f32) cell_vkb2_top_candi_pane_t1_ParamLimits

0x26ba,	// (0x00031f51) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x26ba,	// (0x00031f51) vkb2_area_bottom_space_btn_pane_g1

0x26f4,	// (0x00031f8b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x26f4,	// (0x00031f8b) vkb2_area_bottom_space_btn_pane_g2

0x272a,	// (0x00031fc1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x272a,	// (0x00031fc1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0c,	// (0x0003f6a3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0c,	// (0x0003f6a3) vkb2_area_bottom_space_btn_pane_g

0x1c1b,	// (0x000314b2) cel_fep_hwr_func_pane_ParamLimits

0x1c1b,	// (0x000314b2) cel_fep_hwr_func_pane

0xc52e,	// (0x0003bdc5) cell_hwr_side_button_pane_ParamLimits

0xc52e,	// (0x0003bdc5) cell_hwr_side_button_pane

0x900d,	// (0x000388a4) aid_area_touch_clock_ParamLimits

0x3626,	// (0x00032ebd) bg_uniindi_top_pane_ParamLimits

0x901f,	// (0x000388b6) uniindi_top_pane_g1_ParamLimits

0x9035,	// (0x000388cc) uniindi_top_pane_g2_ParamLimits

0x9041,	// (0x000388d8) uniindi_top_pane_g3_ParamLimits

0x9052,	// (0x000388e9) uniindi_top_pane_g4_ParamLimits

0xfd1f,	// (0x0003f5b6) uniindi_top_pane_g_ParamLimits

0x905f,	// (0x000388f6) uniindi_top_pane_t1_ParamLimits

0x3626,	// (0x00032ebd) bg_vkb2_func_pane_cp01_ParamLimits

0x3626,	// (0x00032ebd) bg_vkb2_func_pane_cp01

0x9b87,	// (0x0003941e) cel_fep_hwr_func_pane_g1_ParamLimits

0x9b87,	// (0x0003941e) cel_fep_hwr_func_pane_g1

0x3626,	// (0x00032ebd) bg_vkb2_func_pane_cp02_ParamLimits

0x3626,	// (0x00032ebd) bg_vkb2_func_pane_cp02

0x9b87,	// (0x0003941e) cell_hwr_side_button_pane_g1_ParamLimits

0x9b87,	// (0x0003941e) cell_hwr_side_button_pane_g1

0x4f6b,	// (0x00034802) status_pane_g4_ParamLimits

0x4f6b,	// (0x00034802) status_pane_g4

0x4f85,	// (0x0003481c) status_pane_t1

0x743e,	// (0x00036cd5) form2_midp_gauge_slider_cont_pane

0x7446,	// (0x00036cdd) form2_midp_gauge_slider_pane_t1_ParamLimits

0xde20,	// (0x0003d6b7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xde32,	// (0x0003d6c9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfadf,	// (0x0003f376) form2_midp_gauge_slider_pane_t_ParamLimits

0x747c,	// (0x00036d13) form2_midp_slider_pane_ParamLimits

0x2074,	// (0x0003190b) aid_size_cell_func_vkb2_ParamLimits

0x2074,	// (0x0003190b) aid_size_cell_func_vkb2

0x9b28,	// (0x000393bf) slider_pane_g4_ParamLimits

0x9b28,	// (0x000393bf) slider_pane_g4

0xcb21,	// (0x0003c3b8) form2_midp_gauge_slider_pane_t2_cp01

0xcb2f,	// (0x0003c3c6) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcb2f,	// (0x0003c3c6) form2_midp_gauge_slider_pane_t3_cp01

0x279f,	// (0x00032036) form2_midp_slider_pane_cp01

0x2b49,	// (0x000323e0) navi_smil_pane

0x9bc0,	// (0x00039457) navi_smil_pane_g1

0x9bc8,	// (0x0003945f) navi_smil_pane_t1

0x9b95,	// (0x0003942c) form2_midp_slider_pane_g1

0x9b9e,	// (0x00039435) form2_midp_slider_pane_g2

0x9ba6,	// (0x0003943d) form2_midp_slider_pane_g3

0x9b95,	// (0x0003942c) form2_midp_slider_pane_g4

0xef46,	// (0x0003e7dd) form2_midp_slider_pane_g5

0x0004,

0xfe15,	// (0x0003f6ac) form2_midp_slider_pane_g

0x2764,	// (0x00031ffb) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2764,	// (0x00031ffb) vkb2_area_bottom_space_btn_pane_g4

0xd53c,	// (0x0003cdd3) lc0_navi_pane_ParamLimits

0xd53c,	// (0x0003cdd3) lc0_navi_pane

0xd5a6,	// (0x0003ce3d) lc0_stat_indi_pane_ParamLimits

0xd5a6,	// (0x0003ce3d) lc0_stat_indi_pane

0xd5bb,	// (0x0003ce52) ls0_title_pane_ParamLimits

0xd5bb,	// (0x0003ce52) ls0_title_pane

0x3c0c,	// (0x000334a3) bg_popup_sub_pane_cp14_ParamLimits

0x8ff4,	// (0x0003888b) list_uniindi_pane_ParamLimits

0x9000,	// (0x00038897) uniindi_top_pane_ParamLimits

0x909c,	// (0x00038933) list_single_uniindi_pane_g1_ParamLimits

0x90af,	// (0x00038946) list_single_uniindi_pane_t1_ParamLimits

0xcb4c,	// (0x0003c3e3) lc0_stat_clock_pane_ParamLimits

0xcb4c,	// (0x0003c3e3) lc0_stat_clock_pane

0xef51,	// (0x0003e7e8) lc0_stat_indi_pane_g1_ParamLimits

0xef51,	// (0x0003e7e8) lc0_stat_indi_pane_g1

0xef5e,	// (0x0003e7f5) lc0_stat_indi_pane_g2_ParamLimits

0xef5e,	// (0x0003e7f5) lc0_stat_indi_pane_g2

0x0001,

0xfe20,	// (0x0003f6b7) lc0_stat_indi_pane_g_ParamLimits

0xfe20,	// (0x0003f6b7) lc0_stat_indi_pane_g

0xcb59,	// (0x0003c3f0) lc0_uni_indicator_pane_ParamLimits

0xcb59,	// (0x0003c3f0) lc0_uni_indicator_pane

0xef6b,	// (0x0003e802) ls0_title_pane_g1_ParamLimits

0xef6b,	// (0x0003e802) ls0_title_pane_g1

0xef7f,	// (0x0003e816) ls0_title_pane_t1_ParamLimits

0xef7f,	// (0x0003e816) ls0_title_pane_t1

0xcb66,	// (0x0003c3fd) lc0_uni_indicator_pane_g1_ParamLimits

0xcb66,	// (0x0003c3fd) lc0_uni_indicator_pane_g1

0x9c3a,	// (0x000394d1) lc0_stat_clock_pane_t1

0xf445,	// (0x0003ecdc) main_ai5_pane

0x9c48,	// (0x000394df) ai5_sk_pane_ParamLimits

0x9c48,	// (0x000394df) ai5_sk_pane

0xefad,	// (0x0003e844) cell_ai5_widget_pane_ParamLimits

0xefad,	// (0x0003e844) cell_ai5_widget_pane

0x9d0b,	// (0x000395a2) aid_size_cell_widget_grid

0x9d21,	// (0x000395b8) bg_ai5_widget_pane_ParamLimits

0x9d21,	// (0x000395b8) bg_ai5_widget_pane

0x9d95,	// (0x0003962c) cell_ai5_widget_pane_g2

0x9da5,	// (0x0003963c) cell_ai5_widget_pane_g3

0x9dbc,	// (0x00039653) cell_ai5_widget_pane_g4

0x9dc8,	// (0x0003965f) cell_ai5_widget_pane_g5

0x9dd4,	// (0x0003966b) cell_ai5_widget_pane_g6

0x9de0,	// (0x00039677) cell_ai5_widget_pane_g7

0x9e28,	// (0x000396bf) cell_ai5_widget_pane_t1_ParamLimits

0x9e28,	// (0x000396bf) cell_ai5_widget_pane_t1

0x9e45,	// (0x000396dc) cell_ai5_widget_pane_t2_ParamLimits

0x9e45,	// (0x000396dc) cell_ai5_widget_pane_t2

0x9e5d,	// (0x000396f4) cell_ai5_widget_pane_t3_ParamLimits

0x9e5d,	// (0x000396f4) cell_ai5_widget_pane_t3

0x9e75,	// (0x0003970c) cell_ai5_widget_pane_t4_ParamLimits

0x9e75,	// (0x0003970c) cell_ai5_widget_pane_t4

0x9e92,	// (0x00039729) cell_ai5_widget_pane_t5_ParamLimits

0x9e92,	// (0x00039729) cell_ai5_widget_pane_t5

0x9eb1,	// (0x00039748) cell_ai5_widget_pane_t6_ParamLimits

0x9eb1,	// (0x00039748) cell_ai5_widget_pane_t6

0x9ec3,	// (0x0003975a) cell_ai5_widget_pane_t7_ParamLimits

0x9ec3,	// (0x0003975a) cell_ai5_widget_pane_t7

0x9edc,	// (0x00039773) cell_ai5_widget_pane_t8_ParamLimits

0x9edc,	// (0x00039773) cell_ai5_widget_pane_t8

0x0009,

0xfe3a,	// (0x0003f6d1) cell_ai5_widget_pane_t_ParamLimits

0xfe3a,	// (0x0003f6d1) cell_ai5_widget_pane_t

0x9f30,	// (0x000397c7) grid_ai5_widget_pane

0x3c0c,	// (0x000334a3) highlight_cell_ai5_widget_pane_ParamLimits

0x3c0c,	// (0x000334a3) highlight_cell_ai5_widget_pane

0xf017,	// (0x0003e8ae) ai5_sk_left_pane

0xf021,	// (0x0003e8b8) ai5_sk_middle_pane

0xf02b,	// (0x0003e8c2) ai5_sk_right_pane

0x9f65,	// (0x000397fc) bg_ai5_widget_pane_g1_ParamLimits

0x9f65,	// (0x000397fc) bg_ai5_widget_pane_g1

0x9f71,	// (0x00039808) bg_ai5_widget_pane_g2_ParamLimits

0x9f71,	// (0x00039808) bg_ai5_widget_pane_g2

0x9f7d,	// (0x00039814) bg_ai5_widget_pane_g3_ParamLimits

0x9f7d,	// (0x00039814) bg_ai5_widget_pane_g3

0x9f89,	// (0x00039820) bg_ai5_widget_pane_g4_ParamLimits

0x9f89,	// (0x00039820) bg_ai5_widget_pane_g4

0x9f95,	// (0x0003982c) bg_ai5_widget_pane_g5_ParamLimits

0x9f95,	// (0x0003982c) bg_ai5_widget_pane_g5

0x9fa1,	// (0x00039838) bg_ai5_widget_pane_g6_ParamLimits

0x9fa1,	// (0x00039838) bg_ai5_widget_pane_g6

0x9fad,	// (0x00039844) bg_ai5_widget_pane_g7_ParamLimits

0x9fad,	// (0x00039844) bg_ai5_widget_pane_g7

0x9fb9,	// (0x00039850) bg_ai5_widget_pane_g8_ParamLimits

0x9fb9,	// (0x00039850) bg_ai5_widget_pane_g8

0x9fc5,	// (0x0003985c) bg_ai5_widget_pane_g9_ParamLimits

0x9fc5,	// (0x0003985c) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x0003f6e6) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0003f6e6) bg_ai5_widget_pane_g

0x9ff7,	// (0x0003988e) cell_shortcut_ai5_widget_pane_ParamLimits

0x9ff7,	// (0x0003988e) cell_shortcut_ai5_widget_pane

0x48a2,	// (0x00034139) bg_cell_shortcut_ai5_widget_pane

0xa008,	// (0x0003989f) cell_grid_ai5_widget_pane_g1

0x48a2,	// (0x00034139) highlight_cell_shortcut_ai5_widget_pane

0x50f2,	// (0x00034989) ai5_sk_left_pane_g1

0xa011,	// (0x000398a8) ai5_sk_left_pane_g2

0xa019,	// (0x000398b0) ai5_sk_left_pane_g3

0xa021,	// (0x000398b8) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x0003f6f9) ai5_sk_left_pane_g

0xa029,	// (0x000398c0) ai5_sk_left_pane_t1

0x50fa,	// (0x00034991) ai5_sk_right_pane_g1

0xa037,	// (0x000398ce) ai5_sk_right_pane_g2

0xa03f,	// (0x000398d6) ai5_sk_right_pane_g3

0xa047,	// (0x000398de) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x0003f702) ai5_sk_right_pane_g

0xa04f,	// (0x000398e6) ai5_sk_right_pane_t1

0x50fa,	// (0x00034991) ai5_sk_middle_pane_g1

0x50f2,	// (0x00034989) ai5_sk_middle_pane_g2

0x5112,	// (0x000349a9) ai5_sk_middle_pane_g3

0xa03f,	// (0x000398d6) ai5_sk_middle_pane_g4

0xa019,	// (0x000398b0) ai5_sk_middle_pane_g5

0xa05d,	// (0x000398f4) ai5_sk_middle_pane_g6

0xf035,	// (0x0003e8cc) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x0003f70b) ai5_sk_middle_pane_g

0xd428,	// (0x0003ccbf) aid_touch_area_size_lc0_ParamLimits

0xd428,	// (0x0003ccbf) aid_touch_area_size_lc0

0x1dec,	// (0x00031683) cell_hwr_candidate_pane_t1_ParamLimits

0x4c42,	// (0x000344d9) aid_touch_navi_pane

0xd6b4,	// (0x0003cf4b) status_dt_navi_pane_ParamLimits

0xd6b4,	// (0x0003cf4b) status_dt_navi_pane

0xd6cc,	// (0x0003cf63) status_dt_sta_pane_ParamLimits

0xd6cc,	// (0x0003cf63) status_dt_sta_pane

0xf03d,	// (0x0003e8d4) dt_sta_controll_pane

0xf04a,	// (0x0003e8e1) dt_sta_indi_pane

0xf057,	// (0x0003e8ee) dt_sta_title_pane

0x3626,	// (0x00032ebd) bg_dt_sta_indi_pane_ParamLimits

0x3626,	// (0x00032ebd) bg_dt_sta_indi_pane

0xf069,	// (0x0003e900) dt_sta_battery_pane

0xf071,	// (0x0003e908) dt_sta_indi_pane_g1

0xa0af,	// (0x00039946) dt_sta_indi_pane_g2

0xa0b8,	// (0x0003994f) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x0003f71a) dt_sta_indi_pane_g

0xa0c1,	// (0x00039958) dt_sta_signal_pane

0x3c0c,	// (0x000334a3) bg_dt_sta_title_pane_ParamLimits

0x3c0c,	// (0x000334a3) bg_dt_sta_title_pane

0xa0ca,	// (0x00039961) dt_sta_title_pane_g1

0xa0d2,	// (0x00039969) dt_sta_title_pane_t1_ParamLimits

0xa0d2,	// (0x00039969) dt_sta_title_pane_t1

0x2b49,	// (0x000323e0) bg_dt_sta_control_pane

0xf07a,	// (0x0003e911) dt_sta_controll_pane_g1

0xa0f0,	// (0x00039987) bg_dt_sta_title_pane_g1

0xa0f9,	// (0x00039990) bg_dt_sta_title_pane_g2

0xa102,	// (0x00039999) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x0003f721) bg_dt_sta_title_pane_g

0x7710,	// (0x00036fa7) bg_dt_sta_indi_pane_g1

0xa10b,	// (0x000399a2) dt_sta_signal_pane_g1

0xa113,	// (0x000399aa) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x0003f728) dt_sta_signal_pane_g

0xa11b,	// (0x000399b2) dt_sta_battery_pane_g1

0xa124,	// (0x000399bb) dt_sta_battery_pane_t1

0x7710,	// (0x00036fa7) bg_dt_sta_control_pane_g1

0x43a1,	// (0x00033c38) fep_china_uni_eep_pane

0x43a9,	// (0x00033c40) fep_china_uni_entry_pane_ParamLimits

0x43b9,	// (0x00033c50) popup_fep_china_uni_window_g1_ParamLimits

0x43c9,	// (0x00033c60) popup_fep_china_uni_window_g2_ParamLimits

0x43c9,	// (0x00033c60) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0003efb4) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0003efb4) popup_fep_china_uni_window_g

0xa133,	// (0x000399ca) fep_china_uni_eep_pane_g1

0xa13b,	// (0x000399d2) fep_china_uni_eep_pane_t1

0x9bb7,	// (0x0003944e) aid_touch_area_size_smil_player

0x4d92,	// (0x00034629) lc0_clock_pane

0x4f79,	// (0x00034810) status_pane_g5_ParamLimits

0x4f79,	// (0x00034810) status_pane_g5

0xbf03,	// (0x0003b79a) popup_keymap_window

0x4f37,	// (0x000347ce) status_icon_pane

0x9da5,	// (0x0003963c) cell_ai5_widget_pane_g3_ParamLimits

0x9dbc,	// (0x00039653) cell_ai5_widget_pane_g4_ParamLimits

0x9dc8,	// (0x0003965f) cell_ai5_widget_pane_g5_ParamLimits

0x9dec,	// (0x00039683) cell_ai5_widget_pane_g8_ParamLimits

0x9dec,	// (0x00039683) cell_ai5_widget_pane_g8

0x9e00,	// (0x00039697) cell_ai5_widget_pane_g9_ParamLimits

0x9e00,	// (0x00039697) cell_ai5_widget_pane_g9

0x9e14,	// (0x000396ab) cell_ai5_widget_pane_g10_ParamLimits

0x9e14,	// (0x000396ab) cell_ai5_widget_pane_g10

0xa14a,	// (0x000399e1) status_icon_pane_g1

0x2b49,	// (0x000323e0) bg_popup_sub_pane_cp13

0xa152,	// (0x000399e9) popup_keymap_window_t1

0xd3b6,	// (0x0003cc4d) control_pane_g6_ParamLimits

0xd3b6,	// (0x0003cc4d) control_pane_g6

0xd3c3,	// (0x0003cc5a) control_pane_g7_ParamLimits

0xd3c3,	// (0x0003cc5a) control_pane_g7

0xd3d0,	// (0x0003cc67) control_pane_g8_ParamLimits

0xd3d0,	// (0x0003cc67) control_pane_g8

0xf03d,	// (0x0003e8d4) dt_sta_controll_pane_ParamLimits

0xf04a,	// (0x0003e8e1) dt_sta_indi_pane_ParamLimits

0xf057,	// (0x0003e8ee) dt_sta_title_pane_ParamLimits

0x3b44,	// (0x000333db) aid_size_touch_scroll_bar_cale

0xf51e,	// (0x0003edb5) popup_discreet_window_ParamLimits

0xf51e,	// (0x0003edb5) popup_discreet_window

0xb4b7,	// (0x0003ad4e) popup_sk_window

0x5763,	// (0x00034ffa) bg_popup_sub_pane_cp28_ParamLimits

0x5763,	// (0x00034ffa) bg_popup_sub_pane_cp28

0xa160,	// (0x000399f7) popup_discreet_window_g1_ParamLimits

0xa160,	// (0x000399f7) popup_discreet_window_g1

0xa180,	// (0x00039a17) popup_discreet_window_t1_ParamLimits

0xa180,	// (0x00039a17) popup_discreet_window_t1

0xa19e,	// (0x00039a35) popup_discreet_window_t2_ParamLimits

0xa19e,	// (0x00039a35) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x0003f72d) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x0003f72d) popup_discreet_window_t

0x27d6,	// (0x0003206d) popup_sk_window_g1

0x27e0,	// (0x00032077) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x0003f734) popup_sk_window_g

0x27ea,	// (0x00032081) popup_sk_window_t1

0x27f8,	// (0x0003208f) popup_sk_window_t1_copy1

0x9d95,	// (0x0003962c) cell_ai5_widget_pane_g2_ParamLimits

0x9eee,	// (0x00039785) cell_ai5_widget_pane_t9_ParamLimits

0x9eee,	// (0x00039785) cell_ai5_widget_pane_t9

0x2b49,	// (0x000323e0) main_fep_fshwr2_pane

0xcb8d,	// (0x0003c424) aid_fshwr2_btn_pane

0xcb9e,	// (0x0003c435) aid_fshwr2_syb_pane

0xcbaf,	// (0x0003c446) aid_fshwr2_txt_pane

0xcbbb,	// (0x0003c452) fshwr2_func_candi_pane

0xcbda,	// (0x0003c471) fshwr2_hwr_syb_pane

0xcbf5,	// (0x0003c48c) fshwr2_icf_pane

0xf445,	// (0x0003ecdc) fshwr2_icf_bg_pane

0x2878,	// (0x0003210f) fshwr2_icf_pane_t1_ParamLimits

0x2878,	// (0x0003210f) fshwr2_icf_pane_t1

0x428f,	// (0x00033b26) fshwr2_func_candi_pane_g1

0xf083,	// (0x0003e91a) fshwr2_func_candi_row_pane_ParamLimits

0xf083,	// (0x0003e91a) fshwr2_func_candi_row_pane

0xcc21,	// (0x0003c4b8) cell_fshwr2_syb_pane_ParamLimits

0xcc21,	// (0x0003c4b8) cell_fshwr2_syb_pane

0x1dbd,	// (0x00031654) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1dbd,	// (0x00031654) fshwr2_hwr_syb_pane_g1

0xf445,	// (0x0003ecdc) bg_popup_call_pane_cp01

0xcc37,	// (0x0003c4ce) fshwr2_func_candi_cell_pane_ParamLimits

0xcc37,	// (0x0003c4ce) fshwr2_func_candi_cell_pane

0xf0a6,	// (0x0003e93d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf0a6,	// (0x0003e93d) fshwr2_func_candi_cell_bg_pane

0xcc82,	// (0x0003c519) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcc82,	// (0x0003c519) fshwr2_func_candi_cell_pane_g1

0xccb9,	// (0x0003c550) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xccb9,	// (0x0003c550) fshwr2_func_candi_cell_pane_t1

0xf445,	// (0x0003ecdc) bg_button_pane_cp08

0xa20c,	// (0x00039aa3) cell_fshwr2_syb_bg_pane

0xccd4,	// (0x0003c56b) cell_fshwr2_syb_bg_pane_g1

0xccdc,	// (0x0003c573) cell_fshwr2_syb_bg_pane_t1

0x3c0c,	// (0x000334a3) main_tmo_pane

0xd998,	// (0x0003d22f) uni_indicator_pane_g1_ParamLimits

0xd9ae,	// (0x0003d245) uni_indicator_pane_g2_ParamLimits

0xd9c4,	// (0x0003d25b) uni_indicator_pane_g3_ParamLimits

0x62be,	// (0x00035b55) uni_indicator_pane_g4_ParamLimits

0x62be,	// (0x00035b55) uni_indicator_pane_g4

0x62d2,	// (0x00035b69) uni_indicator_pane_g5_ParamLimits

0x62d2,	// (0x00035b69) uni_indicator_pane_g5

0x62d2,	// (0x00035b69) uni_indicator_pane_g6_ParamLimits

0x62d2,	// (0x00035b69) uni_indicator_pane_g6

0xf91c,	// (0x0003f1b3) uni_indicator_pane_g_ParamLimits

0xe445,	// (0x0003dcdc) popup_tmo_note_window_ParamLimits

0xe445,	// (0x0003dcdc) popup_tmo_note_window

0x2056,	// (0x000318ed) fshwr2_bg_pane

0xccaa,	// (0x0003c541) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xccaa,	// (0x0003c541) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x0003f739) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x0003f739) fshwr2_func_candi_cell_pane_g

0x1da5,	// (0x0003163c) bg_popup_window_pane_cp01

0x2941,	// (0x000321d8) bg_popup_window_pane_g1_cp01

0xa214,	// (0x00039aab) bg_popup_window_pane_cp22_ParamLimits

0xa214,	// (0x00039aab) bg_popup_window_pane_cp22

0xa222,	// (0x00039ab9) listscroll_tmo_link_pane_ParamLimits

0xa222,	// (0x00039ab9) listscroll_tmo_link_pane

0xa262,	// (0x00039af9) popup_tmo_note_window_g1_ParamLimits

0xa262,	// (0x00039af9) popup_tmo_note_window_g1

0xa26f,	// (0x00039b06) tmo_note_info_pane_ParamLimits

0xa26f,	// (0x00039b06) tmo_note_info_pane

0xf0b2,	// (0x0003e949) list_tmo_note_info_pane_g1_ParamLimits

0xf0b2,	// (0x0003e949) list_tmo_note_info_pane_g1

0xa2a0,	// (0x00039b37) list_tmo_note_info_pane_g2_ParamLimits

0xa2a0,	// (0x00039b37) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x0003f73e) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x0003f73e) list_tmo_note_info_pane_g

0xa2bc,	// (0x00039b53) list_tmo_note_info_text_pane_ParamLimits

0xa2bc,	// (0x00039b53) list_tmo_note_info_text_pane

0xa33d,	// (0x00039bd4) list_tmo_link_pane

0xa34a,	// (0x00039be1) scroll_pane_cp20

0xa357,	// (0x00039bee) list_single_tmo_link_pane_ParamLimits

0xa357,	// (0x00039bee) list_single_tmo_link_pane

0xa367,	// (0x00039bfe) list_single_tmo_link_pane_t1

0xa375,	// (0x00039c0c) list_tmo_note_info_text_pane_t1_ParamLimits

0xa375,	// (0x00039c0c) list_tmo_note_info_text_pane_t1

0xd05a,	// (0x0003c8f1) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd05a,	// (0x0003c8f1) aid_size_touch_scroll_bar_cp01

0xba6b,	// (0x0003b302) aid_size_touch_slider_marker

0xb4a7,	// (0x0003ad3e) popup_settings_window_ParamLimits

0xb4a7,	// (0x0003ad3e) popup_settings_window

0x0f6b,	// (0x00030802) popup_candi_list_indi_window

0x4c42,	// (0x000344d9) aid_touch_navi_pane_ParamLimits

0x1fb1,	// (0x00031848) rs_clock_indi_pane

0x1fba,	// (0x00031851) sctrl_sk_bottom_pane_ParamLimits

0x1fcb,	// (0x00031862) sctrl_sk_top_pane_ParamLimits

0x20ce,	// (0x00031965) popup_fep_tooltip_window

0x9d0b,	// (0x000395a2) aid_size_cell_widget_grid_ParamLimits

0x9d80,	// (0x00039617) cell_ai5_widget_pane_g1_ParamLimits

0x9d80,	// (0x00039617) cell_ai5_widget_pane_g1

0x9dd4,	// (0x0003966b) cell_ai5_widget_pane_g6_ParamLimits

0x9de0,	// (0x00039677) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe25,	// (0x0003f6bc) cell_ai5_widget_pane_g_ParamLimits

0xfe25,	// (0x0003f6bc) cell_ai5_widget_pane_g

0x9f12,	// (0x000397a9) cell_ai5_widget_pane_t10_ParamLimits

0x9f12,	// (0x000397a9) cell_ai5_widget_pane_t10

0x9f30,	// (0x000397c7) grid_ai5_widget_pane_ParamLimits

0x9fd1,	// (0x00039868) cell_contacts_ai5_widget_pane_ParamLimits

0x9fd1,	// (0x00039868) cell_contacts_ai5_widget_pane

0xa1b3,	// (0x00039a4a) popup_discreet_window_t3_ParamLimits

0xa1b3,	// (0x00039a4a) popup_discreet_window_t3

0xcc0d,	// (0x0003c4a4) popup_fshwr2_char_preview_window_ParamLimits

0xcc0d,	// (0x0003c4a4) popup_fshwr2_char_preview_window

0xf0c9,	// (0x0003e960) tmo_note_info_pane_t1

0xf0de,	// (0x0003e975) tmo_note_info_pane_t2

0xf0f5,	// (0x0003e98c) tmo_note_info_pane_t3

0xa319,	// (0x00039bb0) tmo_note_info_pane_t4

0xa32b,	// (0x00039bc2) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x0003f743) tmo_note_info_pane_t

0xa33d,	// (0x00039bd4) list_tmo_link_pane_ParamLimits

0xa34a,	// (0x00039be1) scroll_pane_cp20_ParamLimits

0xf445,	// (0x0003ecdc) bg_popup_fep_char_preview_window_cp01

0xa38e,	// (0x00039c25) popup_fshwr2_char_preview_window_t1

0xa39c,	// (0x00039c33) popup_candi_list_indi_window_g1

0xa3a5,	// (0x00039c3c) bg_cell_contacts_ai5_widget_pane

0xa3b1,	// (0x00039c48) cell_contacts_ai5_widget_pane_g1

0x7dae,	// (0x00037645) cell_contacts_ai5_widget_pane_g2

0xa3c6,	// (0x00039c5d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x0003f74e) cell_contacts_ai5_widget_pane_g

0xa3d2,	// (0x00039c69) cell_contacts_ai5_widget_pane_t1

0x3c0c,	// (0x000334a3) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf16f,	// (0x0003ea06) settings_container_pane

0x48a2,	// (0x00034139) listscroll_set_pane_copy1

0x6df9,	// (0x00036690) scroll_pane_cp121_copy1

0xa455,	// (0x00039cec) set_content_pane_copy1

0xf17b,	// (0x0003ea12) aid_height_set_list_copy1_ParamLimits

0xf17b,	// (0x0003ea12) aid_height_set_list_copy1

0x64ca,	// (0x00035d61) aid_size_parent_copy1_ParamLimits

0x64ca,	// (0x00035d61) aid_size_parent_copy1

0xf187,	// (0x0003ea1e) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf187,	// (0x0003ea1e) button_value_adjust_pane_cp6_copy1

0x4be0,	// (0x00034477) list_highlight_pane_cp2_copy1_ParamLimits

0x4be0,	// (0x00034477) list_highlight_pane_cp2_copy1

0xf19b,	// (0x0003ea32) list_set_pane_copy1_ParamLimits

0xf19b,	// (0x0003ea32) list_set_pane_copy1

0xf10a,	// (0x0003e9a1) main_pane_set_t1_copy1_ParamLimits

0xf10a,	// (0x0003e9a1) main_pane_set_t1_copy1

0xf144,	// (0x0003e9db) main_pane_set_t2_copy1_ParamLimits

0xf144,	// (0x0003e9db) main_pane_set_t2_copy1

0xf248,	// (0x0003eadf) main_pane_set_t3_copy1

0xf256,	// (0x0003eaed) main_pane_set_t4_copy1

0xf163,	// (0x0003e9fa) set_content_pane_g1_copy1_ParamLimits

0xf163,	// (0x0003e9fa) set_content_pane_g1_copy1

0xf264,	// (0x0003eafb) setting_code_pane_copy1

0xa54e,	// (0x00039de5) setting_slider_graphic_pane_copy1

0xa54e,	// (0x00039de5) setting_slider_pane_copy1

0xa54e,	// (0x00039de5) setting_text_pane_copy1

0xa54e,	// (0x00039de5) setting_volume_pane_copy1

0xf264,	// (0x0003eafb) settings_code_pane_cp2_copy1

0xf26c,	// (0x0003eb03) settings_code_pane_cp_copy1_ParamLimits

0xf26c,	// (0x0003eb03) settings_code_pane_cp_copy1

0xcceb,	// (0x0003c582) volume_set_pane_copy1

0xf280,	// (0x0003eb17) volume_set_pane_g10_copy1

0xf288,	// (0x0003eb1f) volume_set_pane_g1_copy1

0xf290,	// (0x0003eb27) volume_set_pane_g2_copy1

0xf298,	// (0x0003eb2f) volume_set_pane_g3_copy1

0xf2a0,	// (0x0003eb37) volume_set_pane_g4_copy1

0xf2a8,	// (0x0003eb3f) volume_set_pane_g5_copy1

0xf2b0,	// (0x0003eb47) volume_set_pane_g6_copy1

0xf2b8,	// (0x0003eb4f) volume_set_pane_g7_copy1

0xf2c0,	// (0x0003eb57) volume_set_pane_g8_copy1

0xf2c8,	// (0x0003eb5f) volume_set_pane_g9_copy1

0x2c3d,	// (0x000324d4) bg_set_opt_pane_cp_copy1_ParamLimits

0x2c3d,	// (0x000324d4) bg_set_opt_pane_cp_copy1

0x2952,	// (0x000321e9) setting_slider_pane_t1_copy1_ParamLimits

0x2952,	// (0x000321e9) setting_slider_pane_t1_copy1

0xccf3,	// (0x0003c58a) setting_slider_pane_t2_copy1_ParamLimits

0xccf3,	// (0x0003c58a) setting_slider_pane_t2_copy1

0xcd0d,	// (0x0003c5a4) setting_slider_pane_t3_copy1_ParamLimits

0xcd0d,	// (0x0003c5a4) setting_slider_pane_t3_copy1

0xcd25,	// (0x0003c5bc) slider_set_pane_copy1_ParamLimits

0xcd25,	// (0x0003c5bc) slider_set_pane_copy1

0x3c67,	// (0x000334fe) set_opt_bg_pane_g1_copy2

0x3c6f,	// (0x00033506) set_opt_bg_pane_g2_copy2

0xa5ba,	// (0x00039e51) set_opt_bg_pane_g3_copy2

0x3c7f,	// (0x00033516) set_opt_bg_pane_g4_copy2

0x3c87,	// (0x0003351e) set_opt_bg_pane_g5_copy2

0x3c8f,	// (0x00033526) set_opt_bg_pane_g6_copy2

0xf2d0,	// (0x0003eb67) set_opt_bg_pane_g7_copy2

0xa5cc,	// (0x00039e63) set_opt_bg_pane_g8_copy2

0xa5d6,	// (0x00039e6d) set_opt_bg_pane_g9_copy2

0x29b8,	// (0x0003224f) aid_size_touch_slider_mark_copy1_ParamLimits

0x29b8,	// (0x0003224f) aid_size_touch_slider_mark_copy1

0xa5e0,	// (0x00039e77) slider_set_pane_g1_copy1

0x29cc,	// (0x00032263) slider_set_pane_g2_copy1

0x1967,	// (0x000311fe) slider_set_pane_g3_copy1_ParamLimits

0x1967,	// (0x000311fe) slider_set_pane_g3_copy1

0x197b,	// (0x00031212) slider_set_pane_g4_copy1_ParamLimits

0x197b,	// (0x00031212) slider_set_pane_g4_copy1

0x1993,	// (0x0003122a) slider_set_pane_g5_copy1_ParamLimits

0x1993,	// (0x0003122a) slider_set_pane_g5_copy1

0x1967,	// (0x000311fe) slider_set_pane_g6_copy1_ParamLimits

0x1967,	// (0x000311fe) slider_set_pane_g6_copy1

0xcd3b,	// (0x0003c5d2) slider_set_pane_g7_copy1_ParamLimits

0xcd3b,	// (0x0003c5d2) slider_set_pane_g7_copy1

0x2b5d,	// (0x000323f4) bg_set_opt_pane_cp2_copy1

0xa5e9,	// (0x00039e80) setting_slider_graphic_pane_g1_copy1

0xf2d8,	// (0x0003eb6f) setting_slider_graphic_pane_t1_copy1

0xf2e8,	// (0x0003eb7f) setting_slider_graphic_pane_t2_copy1

0xf2f8,	// (0x0003eb8f) slider_set_pane_cp_copy1

0xa622,	// (0x00039eb9) input_focus_pane_cp1_copy1

0xa62b,	// (0x00039ec2) list_set_text_pane_copy1

0xa633,	// (0x00039eca) setting_text_pane_g1_copy1

0x01af,	// (0x0002fa46) set_text_pane_t1_copy1

0xa622,	// (0x00039eb9) input_focus_pane_cp2_copy1

0xa633,	// (0x00039eca) setting_code_pane_g1_copy1

0xf300,	// (0x0003eb97) setting_code_pane_t1_copy1

0x6c23,	// (0x000364ba) list_set_graphic_pane_copy1

0x2b5d,	// (0x000323f4) bg_set_opt_pane_cp4_copy1

0xd231,	// (0x0003cac8) list_set_graphic_pane_g1_copy1_ParamLimits

0xd231,	// (0x0003cac8) list_set_graphic_pane_g1_copy1

0xf30e,	// (0x0003eba5) list_set_graphic_pane_g2_copy1

0xd249,	// (0x0003cae0) list_set_graphic_pane_t1_copy1_ParamLimits

0xd249,	// (0x0003cae0) list_set_graphic_pane_t1_copy1

0x7710,	// (0x00036fa7) rs_clock_indi_pane_g1

0xa664,	// (0x00039efb) rs_clock_indi_pane_t1

0xa672,	// (0x00039f09) rs_indi_pane

0xa67a,	// (0x00039f11) rs_indi_pane_g1

0xa683,	// (0x00039f1a) rs_indi_pane_g2

0xa68c,	// (0x00039f23) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x0003f755) rs_indi_pane_g

0x48a2,	// (0x00034139) bg_popup_preview_window_pane_cp03

0xa695,	// (0x00039f2c) popup_fep_tooltip_window_t1

0x838c,	// (0x00037c23) popup_note2_window_g2_ParamLimits

0x838c,	// (0x00037c23) popup_note2_window_g2

0x0001,

0xfc57,	// (0x0003f4ee) popup_note2_window_g_ParamLimits

0xfc57,	// (0x0003f4ee) popup_note2_window_g

0x8887,	// (0x0003811e) bg_popup_sub_pane_cp11_ParamLimits

0x8894,	// (0x0003812b) cell_ai3_links_pane_g1_ParamLimits

0x88ab,	// (0x00038142) cell_ai3_links_pane_t1

0x01af,	// (0x0002fa46) set_text_pane_t1_copy1_ParamLimits

0x47b3,	// (0x0003404a) cell_graphic_popup_pane_cp2_ParamLimits

0x47b3,	// (0x0003404a) cell_graphic_popup_pane_cp2

0xa6a3,	// (0x00039f3a) cell_graphic_popup_pane_g1_cp2

0x3957,	// (0x000331ee) cell_graphic_popup_pane_g2_cp2

0xa6ab,	// (0x00039f42) cell_graphic_popup_pane_g3_cp2

0xa6b3,	// (0x00039f4a) cell_graphic_popup_pane_t2_cp2

0x3968,	// (0x000331ff) grid_highlight_pane_cp3_cp2

0x3fac,	// (0x00033843) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3c0c,	// (0x000334a3) main_tmo_pane_ParamLimits

0xe439,	// (0x0003dcd0) popup_tmo_big_image_note_window

0x9d6f,	// (0x00039606) cell_ai5_widget_list_pane

0x9d77,	// (0x0003960e) cell_ai5_widget_lrg_icon_pane

0xf0c9,	// (0x0003e960) tmo_note_info_pane_t1_ParamLimits

0xf0de,	// (0x0003e975) tmo_note_info_pane_t2_ParamLimits

0xf0f5,	// (0x0003e98c) tmo_note_info_pane_t3_ParamLimits

0xa319,	// (0x00039bb0) tmo_note_info_pane_t4_ParamLimits

0xa32b,	// (0x00039bc2) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x0003f743) tmo_note_info_pane_t_ParamLimits

0xf16f,	// (0x0003ea06) settings_container_pane_ParamLimits

0xa61a,	// (0x00039eb1) indicator_popup_pane_cp5

0xa61a,	// (0x00039eb1) indicator_popup_pane_cp6

0x6c23,	// (0x000364ba) list_set_graphic_pane_copy1_ParamLimits

0x2b49,	// (0x000323e0) bg_popup_window_pane_cp23

0xa6c1,	// (0x00039f58) popup_tmo_big_image_note_window_g1

0xa6cb,	// (0x00039f62) popup_tmo_big_image_note_window_t1

0xa6db,	// (0x00039f72) popup_tmo_big_image_note_window_t2

0xa6eb,	// (0x00039f82) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x0003f75c) popup_tmo_big_image_note_window_t

0x7710,	// (0x00036fa7) cell_ai5_widget_lrg_icon_pane_g1

0xa6fb,	// (0x00039f92) cell_ai5_widget_lrg_icon_pane_t1

0xa709,	// (0x00039fa0) cell_ai5_widget_list_row_pane_ParamLimits

0xa709,	// (0x00039fa0) cell_ai5_widget_list_row_pane

0xa720,	// (0x00039fb7) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa720,	// (0x00039fb7) cell_ai5_widget_list_row_pane_g1

0xa72d,	// (0x00039fc4) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa72d,	// (0x00039fc4) cell_ai5_widget_list_row_pane_t1

0xa75e,	// (0x00039ff5) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa75e,	// (0x00039ff5) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x0003f763) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x0003f763) cell_ai5_widget_list_row_pane_t

0xf445,	// (0x0003ecdc) main_fep_vtchi_ss_pane

0xa7a2,	// (0x0003a039) popup_fep_char_pre_window

0xa7aa,	// (0x0003a041) popup_fep_ituss_window

0xa7cb,	// (0x0003a062) popup_fep_vkbss_window

0xa7ea,	// (0x0003a081) grid_vkbss_keypad_pane_ParamLimits

0xa7ea,	// (0x0003a081) grid_vkbss_keypad_pane

0xa7fa,	// (0x0003a091) ituss_keypad_pane

0x29f6,	// (0x0003228d) aid_vkbss_key_offset_ParamLimits

0x29f6,	// (0x0003228d) aid_vkbss_key_offset

0x2a02,	// (0x00032299) cell_vkbss_key_pane_ParamLimits

0x2a02,	// (0x00032299) cell_vkbss_key_pane

0xa809,	// (0x0003a0a0) bg_cell_vkbss_key_g1_ParamLimits

0xa809,	// (0x0003a0a0) bg_cell_vkbss_key_g1

0xa815,	// (0x0003a0ac) cell_vkbss_key_3p_pane_ParamLimits

0xa815,	// (0x0003a0ac) cell_vkbss_key_3p_pane

0xa82f,	// (0x0003a0c6) cell_vkbss_key_g1_ParamLimits

0xa82f,	// (0x0003a0c6) cell_vkbss_key_g1

0xa849,	// (0x0003a0e0) cell_vkbss_key_t1_ParamLimits

0xa849,	// (0x0003a0e0) cell_vkbss_key_t1

0x2a18,	// (0x000322af) cell_ituss_key_pane_ParamLimits

0x2a18,	// (0x000322af) cell_ituss_key_pane

0xa874,	// (0x0003a10b) bg_cell_ituss_key_g1_ParamLimits

0xa874,	// (0x0003a10b) bg_cell_ituss_key_g1

0xa880,	// (0x0003a117) cell_ituss_key_pane_g1_ParamLimits

0xa880,	// (0x0003a117) cell_ituss_key_pane_g1

0x2a29,	// (0x000322c0) cell_ituss_key_pane_g2_ParamLimits

0x2a29,	// (0x000322c0) cell_ituss_key_pane_g2

0x0002,

0xfed3,	// (0x0003f76a) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0003f76a) cell_ituss_key_pane_g

0x2a55,	// (0x000322ec) cell_ituss_key_t1_ParamLimits

0x2a55,	// (0x000322ec) cell_ituss_key_t1

0x2a8f,	// (0x00032326) cell_ituss_key_t2_ParamLimits

0x2a8f,	// (0x00032326) cell_ituss_key_t2

0x2ac0,	// (0x00032357) cell_ituss_key_t3_ParamLimits

0x2ac0,	// (0x00032357) cell_ituss_key_t3

0x2a8f,	// (0x00032326) cell_ituss_key_t4_ParamLimits

0x2a8f,	// (0x00032326) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0003f771) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0003f771) cell_ituss_key_t

0xa8ac,	// (0x0003a143) cell_vkbss_key_3p_pane_g1

0xa8b4,	// (0x0003a14b) cell_vkbss_key_3p_pane_g2

0xa8bc,	// (0x0003a153) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0003f77c) cell_vkbss_key_3p_pane_g

0xf445,	// (0x0003ecdc) bg_popup_fep_char_preview_window_cp02

0x2b03,	// (0x0003239a) popup_fep_char_pre_window_t1

0xf00d,	// (0x0003e8a4) main_ai5_sk_pane

0xa3a5,	// (0x00039c3c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa3b1,	// (0x00039c48) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7dae,	// (0x00037645) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa3c6,	// (0x00039c5d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x0003f74e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa3d2,	// (0x00039c69) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3c0c,	// (0x000334a3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf316,	// (0x0003ebad) main_ai5_sk_pane_g1

0x559c,	// (0x00034e33) popup_query_code_window_g1

0xa7c0,	// (0x0003a057) popup_fep_vkb_icf_pane

0xa7d4,	// (0x0003a06b) popup_fep_vtchi_icf_pane

0xa8cd,	// (0x0003a164) bg_icf_pane

0xa8d9,	// (0x0003a170) list_vkb_icf_pane

0xa8e8,	// (0x0003a17f) bg_icf_pane_cp01

0xa8fb,	// (0x0003a192) vtchi_icf_list_pane

0xa90b,	// (0x0003a1a2) list_vkb_icf_pane_t1_ParamLimits

0xa90b,	// (0x0003a1a2) list_vkb_icf_pane_t1

0xa921,	// (0x0003a1b8) vtchi_icf_list_pane_t1_ParamLimits

0xa921,	// (0x0003a1b8) vtchi_icf_list_pane_t1

0xa7aa,	// (0x0003a041) popup_fep_ituss_window_ParamLimits

0xa7d4,	// (0x0003a06b) popup_fep_vtchi_icf_pane_ParamLimits

0xa7fa,	// (0x0003a091) ituss_keypad_pane_ParamLimits

0x29ea,	// (0x00032281) ituss_sks_pane

0xa8cd,	// (0x0003a164) bg_icf_pane_ParamLimits

0xa786,	// (0x0003a01d) icf_edit_indi_pane_ParamLimits

0xa786,	// (0x0003a01d) icf_edit_indi_pane

0xa8d9,	// (0x0003a170) list_vkb_icf_pane_ParamLimits

0xa8e8,	// (0x0003a17f) bg_icf_pane_cp01_ParamLimits

0xa795,	// (0x0003a02c) icf_edit_indi_pane_cp01_ParamLimits

0xa795,	// (0x0003a02c) icf_edit_indi_pane_cp01

0xa903,	// (0x0003a19a) vtchi_query_pane

0x798e,	// (0x00037225) icf_edit_indi_pane_g1_ParamLimits

0x798e,	// (0x00037225) icf_edit_indi_pane_g1

0xa992,	// (0x0003a229) icf_edit_indi_pane_g2_ParamLimits

0xa992,	// (0x0003a229) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0003f794) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0003f794) icf_edit_indi_pane_g

0xa9a1,	// (0x0003a238) icf_edit_indi_pane_t1

0xa93b,	// (0x0003a1d2) bg_input_focus_pane_cp042

0x3b3b,	// (0x000333d2) vtchi_button_pane

0xa944,	// (0x0003a1db) vtchi_query_pane_t1

0xa952,	// (0x0003a1e9) vtchi_query_pane_t2

0xa960,	// (0x0003a1f7) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0003f783) vtchi_query_pane_t

0xf445,	// (0x0003ecdc) bg_button_pane_cp13

0xa96e,	// (0x0003a205) vtchi_button_pane_g1

0x2b12,	// (0x000323a9) ituss_sks_pane_g1

0x2b1d,	// (0x000323b4) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0003f78a) ituss_sks_pane_g

0xa976,	// (0x0003a20d) ituss_sks_pane_t1

0xa984,	// (0x0003a21b) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0003f78f) ituss_sks_pane_t

0x7173,	// (0x00036a0a) indicator_nsta_pane_cp_g1

0x717c,	// (0x00036a13) indicator_nsta_pane_cp_g2

0x7184,	// (0x00036a1b) indicator_nsta_pane_cp_g3

0x718c,	// (0x00036a23) indicator_nsta_pane_cp_g4

0x7194,	// (0x00036a2b) indicator_nsta_pane_cp_g5

0x7194,	// (0x00036a2b) indicator_nsta_pane_cp_g6

0x0005,

0xfa95,	// (0x0003f32c) indicator_nsta_pane_cp_g

0xee1f,	// (0x0003e6b6) cell_graphic2_pane_t2_ParamLimits

0xee1f,	// (0x0003e6b6) cell_graphic2_pane_t2

0x0001,

0xfdae,	// (0x0003f645) cell_graphic2_pane_t_ParamLimits

0xfdae,	// (0x0003f645) cell_graphic2_pane_t

0xee55,	// (0x0003e6ec) cell_graphic2_control_pane_t1

0xd205,	// (0x0003ca9c) signal_pane_g3_ParamLimits

0xd205,	// (0x0003ca9c) signal_pane_g3

0xd219,	// (0x0003cab0) signal_pane_g4_ParamLimits

0xd219,	// (0x0003cab0) signal_pane_g4

0xa770,	// (0x0003a007) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa770,	// (0x0003a007) cell_ai5_widget_list_row_pane_t3

0xa89a,	// (0x0003a131) cell_ituss_key_pane_t1_ParamLimits

0xa89a,	// (0x0003a131) cell_ituss_key_pane_t1

0x51ef,	// (0x00034a86) form_field_data_wide_pane_vc_t2_ParamLimits

0x51ef,	// (0x00034a86) form_field_data_wide_pane_vc_t2

0x5203,	// (0x00034a9a) form_field_data_wide_pane_vc_t3_ParamLimits

0x5203,	// (0x00034a9a) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0003f09b) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0003f09b) form_field_data_wide_pane_vc_t

0x6e3b,	// (0x000366d2) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6e3b,	// (0x000366d2) form_field_slider_wide_pane_vc_t3

0x6f19,	// (0x000367b0) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6f19,	// (0x000367b0) form_field_popup_wide_pane_vc_t2

0x6f30,	// (0x000367c7) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6f30,	// (0x000367c7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa84,	// (0x0003f31b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0003f31b) form_field_popup_wide_pane_vc_t

0xcb8d,	// (0x0003c424) aid_fshwr2_btn_pane_ParamLimits

0xcb9e,	// (0x0003c435) aid_fshwr2_syb_pane_ParamLimits

0xcbaf,	// (0x0003c446) aid_fshwr2_txt_pane_ParamLimits

0x2056,	// (0x000318ed) fshwr2_bg_pane_ParamLimits

0xcbbb,	// (0x0003c452) fshwr2_func_candi_pane_ParamLimits

0xcbda,	// (0x0003c471) fshwr2_hwr_syb_pane_ParamLimits

0xcbf5,	// (0x0003c48c) fshwr2_icf_pane_ParamLimits

0x318c,	// (0x00032a23) list_double_graphic_pane_vc_g4_ParamLimits

0x318c,	// (0x00032a23) list_double_graphic_pane_vc_g4

0x2a49,	// (0x000322e0) cell_ituss_key_pane_g3_ParamLimits

0x2a49,	// (0x000322e0) cell_ituss_key_pane_g3

0x2af1,	// (0x00032388) cell_ituss_key_t5_ParamLimits

0x2af1,	// (0x00032388) cell_ituss_key_t5
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

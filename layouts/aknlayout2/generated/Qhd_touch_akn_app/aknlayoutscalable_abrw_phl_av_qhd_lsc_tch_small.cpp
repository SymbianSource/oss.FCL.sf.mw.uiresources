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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002f601 };

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
0xb522,	// (0x0003ab23) Screen

0xb52e,	// (0x0003ab2f) application_window_ParamLimits

0xb52e,	// (0x0003ab2f) application_window

0x2d49,	// (0x0003234a) screen_g1

0xb566,	// (0x0003ab67) area_bottom_pane_ParamLimits

0xb566,	// (0x0003ab67) area_bottom_pane

0x000b,	// (0x0002f60c) area_top_pane_ParamLimits

0x000b,	// (0x0002f60c) area_top_pane

0x00a9,	// (0x0002f6aa) main_pane_ParamLimits

0x00a9,	// (0x0002f6aa) main_pane

0x2d53,	// (0x00032354) misc_graphics

0xd5f3,	// (0x0003cbf4) battery_pane_ParamLimits

0xd5f3,	// (0x0003cbf4) battery_pane

0x5b7f,	// (0x00035180) bg_status_flat_pane_g8

0x5b87,	// (0x00035188) bg_status_flat_pane_g9

0x4f7b,	// (0x0003457c) context_pane_ParamLimits

0x4f7b,	// (0x0003457c) context_pane

0xd75e,	// (0x0003cd5f) navi_pane_ParamLimits

0xd75e,	// (0x0003cd5f) navi_pane

0xd7dc,	// (0x0003cddd) signal_pane_ParamLimits

0xd7dc,	// (0x0003cddd) signal_pane

0x0008,

0xf874,	// (0x0003ee75) bg_status_flat_pane_g

0xd86c,	// (0x0003ce6d) status_pane_g1_ParamLimits

0xd86c,	// (0x0003ce6d) status_pane_g1

0xd882,	// (0x0003ce83) status_pane_g2_ParamLimits

0xd882,	// (0x0003ce83) status_pane_g2

0x51a2,	// (0x000347a3) status_pane_g3_ParamLimits

0x51a2,	// (0x000347a3) status_pane_g3

0x0004,

0xf7a0,	// (0x0003eda1) status_pane_g_ParamLimits

0xf7a0,	// (0x0003eda1) status_pane_g

0xd88e,	// (0x0003ce8f) title_pane_ParamLimits

0xd88e,	// (0x0003ce8f) title_pane

0xd8f1,	// (0x0003cef2) uni_indicator_pane_ParamLimits

0xd8f1,	// (0x0003cef2) uni_indicator_pane

0x4ddd,	// (0x000343de) bg_list_pane_ParamLimits

0x4ddd,	// (0x000343de) bg_list_pane

0xd566,	// (0x0003cb67) find_pane

0xbebd,	// (0x0003b4be) listscroll_app_pane_ParamLimits

0xbebd,	// (0x0003b4be) listscroll_app_pane

0x4e09,	// (0x0003440a) listscroll_form_pane

0xbecd,	// (0x0003b4ce) listscroll_gen_pane_ParamLimits

0xbecd,	// (0x0003b4ce) listscroll_gen_pane

0x1121,	// (0x00030722) listscroll_set_pane

0x670d,	// (0x00035d0e) main_idle_act_pane

0x4ae5,	// (0x000340e6) main_idle_trad_pane

0x4ae5,	// (0x000340e6) main_list_empty_pane

0x4e23,	// (0x00034424) main_midp_pane

0x4e2f,	// (0x00034430) main_pane_g1_ParamLimits

0x4e2f,	// (0x00034430) main_pane_g1

0xbee1,	// (0x0003b4e2) popup_ai_message_window_ParamLimits

0xbee1,	// (0x0003b4e2) popup_ai_message_window

0xbf72,	// (0x0003b573) popup_fep_china_uni_window_ParamLimits

0xbf72,	// (0x0003b573) popup_fep_china_uni_window

0x1241,	// (0x00030842) popup_fep_japan_candidate_window_ParamLimits

0x1241,	// (0x00030842) popup_fep_japan_candidate_window

0x1261,	// (0x00030862) popup_fep_japan_predictive_window_ParamLimits

0x1261,	// (0x00030862) popup_fep_japan_predictive_window

0xbfce,	// (0x0003b5cf) popup_find_window

0xbfeb,	// (0x0003b5ec) popup_grid_graphic_window_ParamLimits

0xbfeb,	// (0x0003b5ec) popup_grid_graphic_window

0x12c8,	// (0x000308c9) popup_large_graphic_colour_window

0xc089,	// (0x0003b68a) popup_menu_window_ParamLimits

0xc089,	// (0x0003b68a) popup_menu_window

0xc25b,	// (0x0003b85c) popup_note_image_window

0xc221,	// (0x0003b822) popup_note_wait_window_ParamLimits

0xc221,	// (0x0003b822) popup_note_wait_window

0xc273,	// (0x0003b874) popup_note_window_ParamLimits

0xc273,	// (0x0003b874) popup_note_window

0xc319,	// (0x0003b91a) popup_query_code_window_ParamLimits

0xc319,	// (0x0003b91a) popup_query_code_window

0x1510,	// (0x00030b11) popup_query_data_code_window_ParamLimits

0x1510,	// (0x00030b11) popup_query_data_code_window

0xc353,	// (0x0003b954) popup_query_data_window_ParamLimits

0xc353,	// (0x0003b954) popup_query_data_window

0xc3d5,	// (0x0003b9d6) popup_query_sat_info_window_ParamLimits

0xc3d5,	// (0x0003b9d6) popup_query_sat_info_window

0xc46c,	// (0x0003ba6d) popup_snote_single_graphic_window_ParamLimits

0xc46c,	// (0x0003ba6d) popup_snote_single_graphic_window

0xc46c,	// (0x0003ba6d) popup_snote_single_text_window_ParamLimits

0xc46c,	// (0x0003ba6d) popup_snote_single_text_window

0x1597,	// (0x00030b98) popup_sub_window_general

0x16c7,	// (0x00030cc8) popup_window_general_ParamLimits

0x16c7,	// (0x00030cc8) popup_window_general

0x4e3d,	// (0x0003443e) power_save_pane

0xbd4c,	// (0x0003b34d) control_pane_g1_ParamLimits

0xbd4c,	// (0x0003b34d) control_pane_g1

0xbd75,	// (0x0003b376) control_pane_g2_ParamLimits

0xbd75,	// (0x0003b376) control_pane_g2

0x4da0,	// (0x000343a1) control_pane_g3_ParamLimits

0x4da0,	// (0x000343a1) control_pane_g3

0x0007,

0xf788,	// (0x0003ed89) control_pane_g_ParamLimits

0xf788,	// (0x0003ed89) control_pane_g

0xbdb6,	// (0x0003b3b7) control_pane_t1_ParamLimits

0xbdb6,	// (0x0003b3b7) control_pane_t1

0xbe14,	// (0x0003b415) control_pane_t2_ParamLimits

0xbe14,	// (0x0003b415) control_pane_t2

0x0002,

0xf799,	// (0x0003ed9a) control_pane_t_ParamLimits

0xf799,	// (0x0003ed9a) control_pane_t

0xd498,	// (0x0003ca99) navi_navi_volume_pane_cp1

0xd4a0,	// (0x0003caa1) status_small_icon_pane

0x4cd5,	// (0x000342d6) status_small_pane_g1_ParamLimits

0x4cd5,	// (0x000342d6) status_small_pane_g1

0xd4a8,	// (0x0003caa9) status_small_pane_g2_ParamLimits

0xd4a8,	// (0x0003caa9) status_small_pane_g2

0xd4b4,	// (0x0003cab5) status_small_pane_g3_ParamLimits

0xd4b4,	// (0x0003cab5) status_small_pane_g3

0xd4c0,	// (0x0003cac1) status_small_pane_g4_ParamLimits

0xd4c0,	// (0x0003cac1) status_small_pane_g4

0xd4cc,	// (0x0003cacd) status_small_pane_g5_ParamLimits

0xd4cc,	// (0x0003cacd) status_small_pane_g5

0xd4da,	// (0x0003cadb) status_small_pane_g6_ParamLimits

0xd4da,	// (0x0003cadb) status_small_pane_g6

0x0007,

0xf777,	// (0x0003ed78) status_small_pane_g_ParamLimits

0xf777,	// (0x0003ed78) status_small_pane_g

0xd509,	// (0x0003cb0a) status_small_pane_t1

0xd52b,	// (0x0003cb2c) status_small_wait_pane_ParamLimits

0xd52b,	// (0x0003cb2c) status_small_wait_pane

0xd33f,	// (0x0003c940) aid_levels_signal_ParamLimits

0xd33f,	// (0x0003c940) aid_levels_signal

0xd357,	// (0x0003c958) signal_pane_g1_ParamLimits

0xd357,	// (0x0003c958) signal_pane_g1

0xd372,	// (0x0003c973) signal_pane_g2_ParamLimits

0xd372,	// (0x0003c973) signal_pane_g2

0x0003,

0xf708,	// (0x0003ed09) signal_pane_g_ParamLimits

0xf708,	// (0x0003ed09) signal_pane_g

0x45b9,	// (0x00033bba) context_pane_g1

0xcea7,	// (0x0003c4a8) title_pane_g1

0xcede,	// (0x0003c4df) title_pane_t1

0x2dfb,	// (0x000323fc) title_pane_t2

0x2e21,	// (0x00032422) title_pane_t3

0x0002,

0xf557,	// (0x0003eb58) title_pane_t

0xd919,	// (0x0003cf1a) aid_levels_battery_ParamLimits

0xd919,	// (0x0003cf1a) aid_levels_battery

0xd935,	// (0x0003cf36) battery_pane_g1_ParamLimits

0xd935,	// (0x0003cf36) battery_pane_g1

0xd952,	// (0x0003cf53) battery_pane_g2_ParamLimits

0xd952,	// (0x0003cf53) battery_pane_g2

0x0001,

0xf7ab,	// (0x0003edac) battery_pane_g_ParamLimits

0xf7ab,	// (0x0003edac) battery_pane_g

0xdb21,	// (0x0003d122) uni_indicator_pane_g1

0xdb37,	// (0x0003d138) uni_indicator_pane_g2

0xdb4d,	// (0x0003d14e) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0003ef1d) uni_indicator_pane_g

0x4957,	// (0x00033f58) navi_icon_pane_ParamLimits

0x4957,	// (0x00033f58) navi_icon_pane

0x4895,	// (0x00033e96) navi_midp_pane

0x4973,	// (0x00033f74) navi_navi_pane

0x497d,	// (0x00033f7e) navi_text_pane_ParamLimits

0x497d,	// (0x00033f7e) navi_text_pane

0x2d49,	// (0x0003234a) status_small_wait_pane_g1

0x3a01,	// (0x00033002) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0003ef18) status_small_wait_pane_g

0x61e6,	// (0x000357e7) navi_navi_icon_text_pane

0x61ee,	// (0x000357ef) navi_navi_pane_g1_ParamLimits

0x61ee,	// (0x000357ef) navi_navi_pane_g1

0x6200,	// (0x00035801) navi_navi_pane_g2_ParamLimits

0x6200,	// (0x00035801) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0003eee6) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0003eee6) navi_navi_pane_g

0x6212,	// (0x00035813) navi_navi_tabs_pane

0x621b,	// (0x0003581c) navi_navi_text_pane

0x61e6,	// (0x000357e7) navi_navi_volume_pane

0x61c2,	// (0x000357c3) navi_text_pane_t1

0x61b6,	// (0x000357b7) navi_icon_pane_g1

0x6109,	// (0x0003570a) navi_navi_text_pane_t1

0x1a98,	// (0x00031099) navi_navi_volume_pane_g1

0x1aa0,	// (0x000310a1) volume_small_pane

0x6063,	// (0x00035664) navi_navi_icon_text_pane_g1

0x606b,	// (0x0003566c) navi_navi_icon_text_pane_t1

0x4973,	// (0x00033f74) navi_tabs_2_long_pane

0x4973,	// (0x00033f74) navi_tabs_2_pane

0x4973,	// (0x00033f74) navi_tabs_3_long_pane

0x4973,	// (0x00033f74) navi_tabs_3_pane

0x4973,	// (0x00033f74) navi_tabs_4_pane

0x1a78,	// (0x00031079) tabs_2_active_pane_ParamLimits

0x1a78,	// (0x00031079) tabs_2_active_pane

0x1a88,	// (0x00031089) tabs_2_passive_pane_ParamLimits

0x1a88,	// (0x00031089) tabs_2_passive_pane

0x1a46,	// (0x00031047) tabs_3_active_pane_ParamLimits

0x1a46,	// (0x00031047) tabs_3_active_pane

0x1a56,	// (0x00031057) tabs_3_passive_pane_ParamLimits

0x1a56,	// (0x00031057) tabs_3_passive_pane

0x1a67,	// (0x00031068) tabs_3_passive_pane_cp_ParamLimits

0x1a67,	// (0x00031068) tabs_3_passive_pane_cp

0x1a02,	// (0x00031003) tabs_4_active_pane_ParamLimits

0x1a02,	// (0x00031003) tabs_4_active_pane

0x1a13,	// (0x00031014) tabs_4_passive_pane_ParamLimits

0x1a13,	// (0x00031014) tabs_4_passive_pane

0x1a24,	// (0x00031025) tabs_4_passive_pane_cp_ParamLimits

0x1a24,	// (0x00031025) tabs_4_passive_pane_cp

0x1a35,	// (0x00031036) tabs_4_passive_pane_cp2_ParamLimits

0x1a35,	// (0x00031036) tabs_4_passive_pane_cp2

0x19de,	// (0x00030fdf) tabs_2_long_active_pane_ParamLimits

0x19de,	// (0x00030fdf) tabs_2_long_active_pane

0x19f0,	// (0x00030ff1) tabs_2_long_passive_pane_ParamLimits

0x19f0,	// (0x00030ff1) tabs_2_long_passive_pane

0x199f,	// (0x00030fa0) tabs_3_long_active_pane_ParamLimits

0x199f,	// (0x00030fa0) tabs_3_long_active_pane

0x19b2,	// (0x00030fb3) tabs_3_long_passive_pane_ParamLimits

0x19b2,	// (0x00030fb3) tabs_3_long_passive_pane

0x19cb,	// (0x00030fcc) tabs_3_long_passive_pane_cp_ParamLimits

0x19cb,	// (0x00030fcc) tabs_3_long_passive_pane_cp

0x1945,	// (0x00030f46) volume_small_pane_g1

0x194e,	// (0x00030f4f) volume_small_pane_g2

0x1957,	// (0x00030f58) volume_small_pane_g3

0x1960,	// (0x00030f61) volume_small_pane_g4

0x1969,	// (0x00030f6a) volume_small_pane_g5

0x1972,	// (0x00030f73) volume_small_pane_g6

0x197b,	// (0x00030f7c) volume_small_pane_g7

0x1984,	// (0x00030f85) volume_small_pane_g8

0x198d,	// (0x00030f8e) volume_small_pane_g9

0x1996,	// (0x00030f97) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0003eeb2) volume_small_pane_g

0x385f,	// (0x00032e60) bg_active_tab_pane_cp2_ParamLimits

0x385f,	// (0x00032e60) bg_active_tab_pane_cp2

0x2e41,	// (0x00032442) tabs_3_active_pane_g1

0xcf6a,	// (0x0003c56b) tabs_3_active_pane_t1

0x385f,	// (0x00032e60) bg_passive_tab_pane_cp2_ParamLimits

0x385f,	// (0x00032e60) bg_passive_tab_pane_cp2

0x2e41,	// (0x00032442) tabs_3_passive_pane_g1

0xcf6a,	// (0x0003c56b) tabs_3_passive_pane_t1

0x385f,	// (0x00032e60) bg_active_tab_pane_cp3_ParamLimits

0x385f,	// (0x00032e60) bg_active_tab_pane_cp3

0x2e5b,	// (0x0003245c) tabs_4_active_pane_g1

0xcf7c,	// (0x0003c57d) tabs_4_active_pane_t1

0x385f,	// (0x00032e60) bg_passive_tab_pane_cp3_ParamLimits

0x385f,	// (0x00032e60) bg_passive_tab_pane_cp3

0x2e5b,	// (0x0003245c) tabs_4_1_passive_pane_g1

0xcf7c,	// (0x0003c57d) tabs_4_1_passive_pane_t1

0x4e23,	// (0x00034424) list_highlight_pane_cp2

0xdbd5,	// (0x0003d1d6) list_set_pane_ParamLimits

0xdbd5,	// (0x0003d1d6) list_set_pane

0xdc6f,	// (0x0003d270) main_pane_set_t1_ParamLimits

0xdc6f,	// (0x0003d270) main_pane_set_t1

0xdc8f,	// (0x0003d290) main_pane_set_t2_ParamLimits

0xdc8f,	// (0x0003d290) main_pane_set_t2

0xdca3,	// (0x0003d2a4) main_pane_set_t3_ParamLimits

0xdca3,	// (0x0003d2a4) main_pane_set_t3

0xdcb5,	// (0x0003d2b6) main_pane_set_t4_ParamLimits

0xdcb5,	// (0x0003d2b6) main_pane_set_t4

0x0003,

0xf981,	// (0x0003ef82) main_pane_set_t_ParamLimits

0xf981,	// (0x0003ef82) main_pane_set_t

0xdcc7,	// (0x0003d2c8) setting_code_pane

0xdcd1,	// (0x0003d2d2) setting_slider_graphic_pane

0xdcd1,	// (0x0003d2d2) setting_slider_pane

0xdcd1,	// (0x0003d2d2) setting_text_pane

0xdcd1,	// (0x0003d2d2) setting_volume_pane

0x02f8,	// (0x0002f8f9) volume_set_pane

0x2e33,	// (0x00032434) bg_set_opt_pane_cp

0x0300,	// (0x0002f901) setting_slider_pane_t1

0x0319,	// (0x0002f91a) setting_slider_pane_t2

0x0333,	// (0x0002f934) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003eb5f) setting_slider_pane_t

0x034b,	// (0x0002f94c) slider_set_pane

0x2d53,	// (0x00032354) bg_set_opt_pane_cp2

0x2e75,	// (0x00032476) setting_slider_graphic_pane_g1

0x0361,	// (0x0002f962) setting_slider_graphic_pane_t1

0x0371,	// (0x0002f972) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003eb66) setting_slider_graphic_pane_t

0x0381,	// (0x0002f982) slider_set_pane_cp

0x2d53,	// (0x00032354) input_focus_pane_cp1

0x66f4,	// (0x00035cf5) list_set_text_pane

0x2d49,	// (0x0003234a) setting_text_pane_g1

0x2d53,	// (0x00032354) input_focus_pane_cp2

0x2d49,	// (0x0003234a) setting_code_pane_g1

0x2e7e,	// (0x0003247f) setting_code_pane_t1

0x0389,	// (0x0002f98a) set_text_pane_t1_ParamLimits

0x0389,	// (0x0002f98a) set_text_pane_t1

0x3eae,	// (0x000334af) set_opt_bg_pane_g1

0x3eb6,	// (0x000334b7) set_opt_bg_pane_g2

0x66ce,	// (0x00035ccf) set_opt_bg_pane_g3

0x3ec6,	// (0x000334c7) set_opt_bg_pane_g4

0x3ece,	// (0x000334cf) set_opt_bg_pane_g5

0x3ed6,	// (0x000334d7) set_opt_bg_pane_g6

0x66d8,	// (0x00035cd9) set_opt_bg_pane_g7

0x66e0,	// (0x00035ce1) set_opt_bg_pane_g8

0x66ea,	// (0x00035ceb) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0003ef6f) set_opt_bg_pane_g

0x66c1,	// (0x00035cc2) slider_set_pane_g1

0x1b35,	// (0x00031136) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0003ef60) slider_set_pane_g

0x1aa9,	// (0x000310aa) volume_set_pane_g1

0x1ab1,	// (0x000310b2) volume_set_pane_g2

0x1ab9,	// (0x000310ba) volume_set_pane_g3

0x1ac1,	// (0x000310c2) volume_set_pane_g4

0x1ac9,	// (0x000310ca) volume_set_pane_g5

0x1ad1,	// (0x000310d2) volume_set_pane_g6

0x1ad9,	// (0x000310da) volume_set_pane_g7

0x1ae1,	// (0x000310e2) volume_set_pane_g8

0x1ae9,	// (0x000310ea) volume_set_pane_g9

0x1af1,	// (0x000310f2) volume_set_pane_g10

0x0009,

0xf937,	// (0x0003ef38) volume_set_pane_g

0xcf8e,	// (0x0003c58f) indicator_pane_ParamLimits

0xcf8e,	// (0x0003c58f) indicator_pane

0xcfb6,	// (0x0003c5b7) main_idle_pane_g2_ParamLimits

0xcfb6,	// (0x0003c5b7) main_idle_pane_g2

0xcfee,	// (0x0003c5ef) main_pane_idle_g1_ParamLimits

0xcfee,	// (0x0003c5ef) main_pane_idle_g1

0x2ecd,	// (0x000324ce) popup_clock_digital_analogue_window_ParamLimits

0x2ecd,	// (0x000324ce) popup_clock_digital_analogue_window

0xd015,	// (0x0003c616) soft_indicator_pane_ParamLimits

0xd015,	// (0x0003c616) soft_indicator_pane

0xd02f,	// (0x0003c630) wallpaper_pane_ParamLimits

0xd02f,	// (0x0003c630) wallpaper_pane

0x2d49,	// (0x0003234a) wallpaper_pane_g1

0xd041,	// (0x0003c642) indicator_pane_g1_ParamLimits

0xd041,	// (0x0003c642) indicator_pane_g1

0x6af9,	// (0x000360fa) navi_navi_icon_text_pane_srt_g1

0x2f1f,	// (0x00032520) soft_indicator_pane_t1

0x2f39,	// (0x0003253a) aid_ps_area_pane

0xd057,	// (0x0003c658) aid_ps_clock_pane

0x2f58,	// (0x00032559) aid_ps_indicator_pane

0x2f64,	// (0x00032565) indicator_ps_pane_ParamLimits

0x2f64,	// (0x00032565) indicator_ps_pane

0x2f73,	// (0x00032574) power_save_pane_g1_ParamLimits

0x2f73,	// (0x00032574) power_save_pane_g1

0x2f7f,	// (0x00032580) power_save_pane_g2_ParamLimits

0x2f7f,	// (0x00032580) power_save_pane_g2

0xf4bc,	// (0x0003eabd) aid_navinavi_width_pane

0x2f39,	// (0x0003253a) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003eb6b) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003eb6b) power_save_pane_g

0x2f8d,	// (0x0003258e) power_save_pane_t1_ParamLimits

0x2f8d,	// (0x0003258e) power_save_pane_t1

0xd057,	// (0x0003c658) aid_ps_clock_pane_ParamLimits

0x2f58,	// (0x00032559) aid_ps_indicator_pane_ParamLimits

0x2f9f,	// (0x000325a0) power_save_pane_t4_ParamLimits

0x2f9f,	// (0x000325a0) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003eb70) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003eb70) power_save_pane_t

0x377a,	// (0x00032d7b) power_save_t3_ParamLimits

0x377a,	// (0x00032d7b) power_save_t3

0x2fb4,	// (0x000325b5) power_save_t2_ParamLimits

0x2fb4,	// (0x000325b5) power_save_t2

0x378f,	// (0x00032d90) indicator_ps_pane_g1

0xd065,	// (0x0003c666) ai_gene_pane_ParamLimits

0xd065,	// (0x0003c666) ai_gene_pane

0xd07c,	// (0x0003c67d) ai_links_pane_ParamLimits

0xd07c,	// (0x0003c67d) ai_links_pane

0xd094,	// (0x0003c695) indicator_pane_cp1_ParamLimits

0xd094,	// (0x0003c695) indicator_pane_cp1

0xd0a3,	// (0x0003c6a4) main_pane_idle_g1_cp_ParamLimits

0xd0a3,	// (0x0003c6a4) main_pane_idle_g1_cp

0x37c8,	// (0x00032dc9) popup_ai_links_title_window

0xd0bb,	// (0x0003c6bc) soft_indicator_pane_cp1_ParamLimits

0xd0bb,	// (0x0003c6bc) soft_indicator_pane_cp1

0x64af,	// (0x00035ab0) ai_links_pane_g1

0x64b8,	// (0x00035ab9) grid_ai_links_pane

0xdb18,	// (0x0003d119) ai_gene_pane_1

0x649d,	// (0x00035a9e) ai_gene_pane_2

0x64a6,	// (0x00035aa7) list_highlight_pane_cp4

0xdaf4,	// (0x0003d0f5) cell_ai_link_pane_ParamLimits

0xdaf4,	// (0x0003d0f5) cell_ai_link_pane

0x646e,	// (0x00035a6f) cell_ai_link_pane_g1

0x3a01,	// (0x00033002) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0003ef13) cell_ai_link_pane_g

0x2d53,	// (0x00032354) grid_highlight_cp2

0x2d53,	// (0x00032354) bg_popup_sub_pane_cp1

0x37eb,	// (0x00032dec) popup_ai_links_title_window_t1

0x63bc,	// (0x000359bd) ai_gene_pane_1_g1_ParamLimits

0x63bc,	// (0x000359bd) ai_gene_pane_1_g1

0x63c8,	// (0x000359c9) ai_gene_pane_1_g2_ParamLimits

0x63c8,	// (0x000359c9) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0003ef09) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0003ef09) ai_gene_pane_1_g

0x63d5,	// (0x000359d6) ai_gene_pane_1_t1_ParamLimits

0x63d5,	// (0x000359d6) ai_gene_pane_1_t1

0x6409,	// (0x00035a0a) grid_ai_soft_ind_pane

0x63a7,	// (0x000359a8) ai_gene_pane_2_t1_ParamLimits

0x63a7,	// (0x000359a8) ai_gene_pane_2_t1

0xd0cf,	// (0x0003c6d0) main_pane_empty_t1_ParamLimits

0xd0cf,	// (0x0003c6d0) main_pane_empty_t1

0xd0e7,	// (0x0003c6e8) main_pane_empty_t2_ParamLimits

0xd0e7,	// (0x0003c6e8) main_pane_empty_t2

0xd0fc,	// (0x0003c6fd) main_pane_empty_t3_ParamLimits

0xd0fc,	// (0x0003c6fd) main_pane_empty_t3

0xd10e,	// (0x0003c70f) main_pane_empty_t4_ParamLimits

0xd10e,	// (0x0003c70f) main_pane_empty_t4

0xd120,	// (0x0003c721) main_pane_empty_t5_ParamLimits

0xd120,	// (0x0003c721) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003eb75) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003eb75) main_pane_empty_t

0x3eff,	// (0x00033500) bg_popup_window_pane_ParamLimits

0x3eff,	// (0x00033500) bg_popup_window_pane

0x6117,	// (0x00035718) find_popup_pane_cp2_ParamLimits

0x6117,	// (0x00035718) find_popup_pane_cp2

0x6123,	// (0x00035724) heading_pane_ParamLimits

0x6123,	// (0x00035724) heading_pane

0x2d53,	// (0x00032354) bg_popup_sub_pane

0xda75,	// (0x0003d076) bg_popup_window_pane_g1_ParamLimits

0xda75,	// (0x0003d076) bg_popup_window_pane_g1

0xda84,	// (0x0003d085) bg_popup_window_pane_g2_ParamLimits

0xda84,	// (0x0003d085) bg_popup_window_pane_g2

0xda90,	// (0x0003d091) bg_popup_window_pane_g3_ParamLimits

0xda90,	// (0x0003d091) bg_popup_window_pane_g3

0xda9c,	// (0x0003d09d) bg_popup_window_pane_g4_ParamLimits

0xda9c,	// (0x0003d09d) bg_popup_window_pane_g4

0xdaab,	// (0x0003d0ac) bg_popup_window_pane_g5_ParamLimits

0xdaab,	// (0x0003d0ac) bg_popup_window_pane_g5

0xdabb,	// (0x0003d0bc) bg_popup_window_pane_g6_ParamLimits

0xdabb,	// (0x0003d0bc) bg_popup_window_pane_g6

0xdac7,	// (0x0003d0c8) bg_popup_window_pane_g7_ParamLimits

0xdac7,	// (0x0003d0c8) bg_popup_window_pane_g7

0xdad6,	// (0x0003d0d7) bg_popup_window_pane_g8_ParamLimits

0xdad6,	// (0x0003d0d7) bg_popup_window_pane_g8

0xdae5,	// (0x0003d0e6) bg_popup_window_pane_g9_ParamLimits

0xdae5,	// (0x0003d0e6) bg_popup_window_pane_g9

0x60fd,	// (0x000356fe) bg_popup_window_pane_g10_ParamLimits

0x60fd,	// (0x000356fe) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0003eed1) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0003eed1) bg_popup_window_pane_g

0x601a,	// (0x0003561b) bg_popup_heading_pane_ParamLimits

0x601a,	// (0x0003561b) bg_popup_heading_pane

0x1beb,	// (0x000311ec) tabs_4_passive_pane_cp_srt_ParamLimits

0x1beb,	// (0x000311ec) tabs_4_passive_pane_cp_srt

0x1bfd,	// (0x000311fe) tabs_4_passive_pane_srt_ParamLimits

0x602e,	// (0x0003562f) heading_pane_g2

0x1bfd,	// (0x000311fe) tabs_4_passive_pane_srt

0x53a1,	// (0x000349a2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x53a1,	// (0x000349a2) bg_passive_tab_pane_cp3_srt

0x6036,	// (0x00035637) heading_pane_t1_ParamLimits

0x6036,	// (0x00035637) heading_pane_t1

0x604d,	// (0x0003564e) heading_pane_t2_ParamLimits

0x604d,	// (0x0003564e) heading_pane_t2

0x0001,

0xf8cb,	// (0x0003eecc) heading_pane_t_ParamLimits

0xf8cb,	// (0x0003eecc) heading_pane_t

0x5b47,	// (0x00035148) bg_popup_heading_pane_g1

0x5bf6,	// (0x000351f7) bg_popup_heading_pane_g2

0x5c00,	// (0x00035201) bg_popup_heading_pane_g3

0x5c0a,	// (0x0003520b) bg_popup_heading_pane_g4

0x5c14,	// (0x00035215) bg_popup_heading_pane_g5

0x5c1e,	// (0x0003521f) bg_popup_heading_pane_g6

0x5c26,	// (0x00035227) bg_popup_heading_pane_g7

0x5c2e,	// (0x0003522f) bg_popup_heading_pane_g8

0x5c38,	// (0x00035239) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0003ee88) bg_popup_heading_pane_g

0x532d,	// (0x0003492e) bg_popup_sub_pane_g1

0x533d,	// (0x0003493e) bg_popup_sub_pane_g2

0x5335,	// (0x00034936) bg_popup_sub_pane_g3

0x534d,	// (0x0003494e) bg_popup_sub_pane_g4

0x5345,	// (0x00034946) bg_popup_sub_pane_g5

0x5355,	// (0x00034956) bg_popup_sub_pane_g6

0x535d,	// (0x0003495e) bg_popup_sub_pane_g7

0x536d,	// (0x0003496e) bg_popup_sub_pane_g8

0x5365,	// (0x00034966) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0003ee62) bg_popup_sub_pane_g

0x385f,	// (0x00032e60) bg_popup_window_pane_cp5_ParamLimits

0x385f,	// (0x00032e60) bg_popup_window_pane_cp5

0x387b,	// (0x00032e7c) popup_note_window_g1_ParamLimits

0x387b,	// (0x00032e7c) popup_note_window_g1

0x3887,	// (0x00032e88) popup_note_window_t1_ParamLimits

0x3887,	// (0x00032e88) popup_note_window_t1

0x389d,	// (0x00032e9e) popup_note_window_t2_ParamLimits

0x389d,	// (0x00032e9e) popup_note_window_t2

0x38b3,	// (0x00032eb4) popup_note_window_t3_ParamLimits

0x38b3,	// (0x00032eb4) popup_note_window_t3

0x38c9,	// (0x00032eca) popup_note_window_t4_ParamLimits

0x38c9,	// (0x00032eca) popup_note_window_t4

0x38f1,	// (0x00032ef2) popup_note_window_t5_ParamLimits

0x38f1,	// (0x00032ef2) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003eb80) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003eb80) popup_note_window_t

0x3915,	// (0x00032f16) bg_popup_window_pane_cp6_ParamLimits

0x3915,	// (0x00032f16) bg_popup_window_pane_cp6

0x5ac3,	// (0x000350c4) popup_note_image_window_g1_ParamLimits

0x5ac3,	// (0x000350c4) popup_note_image_window_g1

0x5acf,	// (0x000350d0) popup_note_image_window_g2_ParamLimits

0x5acf,	// (0x000350d0) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0003ee56) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0003ee56) popup_note_image_window_g

0x5ae8,	// (0x000350e9) popup_note_image_window_t1_ParamLimits

0x5ae8,	// (0x000350e9) popup_note_image_window_t1

0x5b01,	// (0x00035102) popup_note_image_window_t2_ParamLimits

0x5b01,	// (0x00035102) popup_note_image_window_t2

0x5b1a,	// (0x0003511b) popup_note_image_window_t3_ParamLimits

0x5b1a,	// (0x0003511b) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0003ee5b) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0003ee5b) popup_note_image_window_t

0x5984,	// (0x00034f85) bg_popup_window_pane_cp7_ParamLimits

0x5984,	// (0x00034f85) bg_popup_window_pane_cp7

0x59b4,	// (0x00034fb5) popup_note_wait_window_g1_ParamLimits

0x59b4,	// (0x00034fb5) popup_note_wait_window_g1

0x59c0,	// (0x00034fc1) popup_note_wait_window_g2_ParamLimits

0x59c0,	// (0x00034fc1) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0003ee44) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0003ee44) popup_note_wait_window_g

0x59d8,	// (0x00034fd9) popup_note_wait_window_t1_ParamLimits

0x59d8,	// (0x00034fd9) popup_note_wait_window_t1

0x59ff,	// (0x00035000) popup_note_wait_window_t2_ParamLimits

0x59ff,	// (0x00035000) popup_note_wait_window_t2

0x5a1c,	// (0x0003501d) popup_note_wait_window_t3_ParamLimits

0x5a1c,	// (0x0003501d) popup_note_wait_window_t3

0x5a2f,	// (0x00035030) popup_note_wait_window_t4_ParamLimits

0x5a2f,	// (0x00035030) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0003ee4b) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0003ee4b) popup_note_wait_window_t

0x5a54,	// (0x00035055) wait_bar_pane_ParamLimits

0x5a54,	// (0x00035055) wait_bar_pane

0x2d53,	// (0x00032354) wait_anim_pane

0x2d53,	// (0x00032354) wait_border_pane

0x2d49,	// (0x0003234a) wait_anim_pane_g1

0x2d49,	// (0x0003234a) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0003ed04) wait_anim_pane_g

0x5928,	// (0x00034f29) wait_border_pane_g1

0x5933,	// (0x00034f34) wait_border_pane_g2

0x593c,	// (0x00034f3d) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0003ee3d) wait_border_pane_g

0x5793,	// (0x00034d94) bg_popup_window_pane_cp16_ParamLimits

0x5793,	// (0x00034d94) bg_popup_window_pane_cp16

0x5893,	// (0x00034e94) indicator_popup_pane_cp4_ParamLimits

0x5893,	// (0x00034e94) indicator_popup_pane_cp4

0x58a7,	// (0x00034ea8) popup_query_data_window_t1_ParamLimits

0x58a7,	// (0x00034ea8) popup_query_data_window_t1

0x58b9,	// (0x00034eba) popup_query_data_window_t2_ParamLimits

0x58b9,	// (0x00034eba) popup_query_data_window_t2

0x58d2,	// (0x00034ed3) popup_query_data_window_t3_ParamLimits

0x58d2,	// (0x00034ed3) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0003ee36) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0003ee36) popup_query_data_window_t

0x58ec,	// (0x00034eed) query_popup_data_pane_ParamLimits

0x58ec,	// (0x00034eed) query_popup_data_pane

0x5900,	// (0x00034f01) query_popup_data_pane_cp1_ParamLimits

0x5900,	// (0x00034f01) query_popup_data_pane_cp1

0x5793,	// (0x00034d94) bg_popup_window_pane_cp10_ParamLimits

0x5793,	// (0x00034d94) bg_popup_window_pane_cp10

0x57c5,	// (0x00034dc6) indicator_popup_pane_ParamLimits

0x57c5,	// (0x00034dc6) indicator_popup_pane

0x57e7,	// (0x00034de8) popup_query_code_window_t1_ParamLimits

0x57e7,	// (0x00034de8) popup_query_code_window_t1

0x5801,	// (0x00034e02) popup_query_code_window_t2_ParamLimits

0x5801,	// (0x00034e02) popup_query_code_window_t2

0x584a,	// (0x00034e4b) popup_query_code_window_t3_ParamLimits

0x584a,	// (0x00034e4b) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0003ee2f) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0003ee2f) popup_query_code_window_t

0x5879,	// (0x00034e7a) query_popup_pane_ParamLimits

0x5879,	// (0x00034e7a) query_popup_pane

0x3915,	// (0x00032f16) bg_popup_window_pane_cp15_ParamLimits

0x3915,	// (0x00032f16) bg_popup_window_pane_cp15

0x3933,	// (0x00032f34) indicator_popup_pane_cp1_ParamLimits

0x3933,	// (0x00032f34) indicator_popup_pane_cp1

0x3946,	// (0x00032f47) indicator_popup_pane_cp2_ParamLimits

0x3946,	// (0x00032f47) indicator_popup_pane_cp2

0x3959,	// (0x00032f5a) popup_query_data_code_window_g1_ParamLimits

0x3959,	// (0x00032f5a) popup_query_data_code_window_g1

0x396c,	// (0x00032f6d) popup_query_data_code_window_t1_ParamLimits

0x396c,	// (0x00032f6d) popup_query_data_code_window_t1

0x397e,	// (0x00032f7f) popup_query_data_code_window_t2_ParamLimits

0x397e,	// (0x00032f7f) popup_query_data_code_window_t2

0x3990,	// (0x00032f91) popup_query_data_code_window_t3_ParamLimits

0x3990,	// (0x00032f91) popup_query_data_code_window_t3

0x39a6,	// (0x00032fa7) popup_query_data_code_window_t4_ParamLimits

0x39a6,	// (0x00032fa7) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003eb8b) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003eb8b) popup_query_data_code_window_t

0x176b,	// (0x00030d6c) list_single_midp_graphic_pane_g3

0x39be,	// (0x00032fbf) query_popup_data_pane_cp2_ParamLimits

0x39d1,	// (0x00032fd2) query_popup_pane_cp2_ParamLimits

0x39d1,	// (0x00032fd2) query_popup_pane_cp2

0x2d53,	// (0x00032354) bg_popup_window_pane_cp11

0x578b,	// (0x00034d8c) heading_pane_cp5

0x3abc,	// (0x000330bd) listscroll_popup_info_pane

0x2d53,	// (0x00032354) input_focus_pane_cp3

0x39e4,	// (0x00032fe5) query_popup_pane_t1

0x39f2,	// (0x00032ff3) list_popup_info_pane_ParamLimits

0x39f2,	// (0x00032ff3) list_popup_info_pane

0x3a01,	// (0x00033002) listscroll_popup_info_pane_g1

0x3a09,	// (0x0003300a) scroll_pane_cp7

0x3a13,	// (0x00033014) popup_info_list_pane_t1_ParamLimits

0x3a13,	// (0x00033014) popup_info_list_pane_t1

0x3a2d,	// (0x0003302e) popup_info_list_pane_t2_ParamLimits

0x3a2d,	// (0x0003302e) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003eb94) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003eb94) popup_info_list_pane_t

0x2d53,	// (0x00032354) bg_popup_window_pane_cp12

0x6b13,	// (0x00036114) find_popup_pane

0x2e33,	// (0x00032434) bg_popup_window_pane_cp3

0x3a47,	// (0x00033048) heading_pane_cp3

0x3a53,	// (0x00033054) listscroll_popup_graphic_pane

0x2d53,	// (0x00032354) bg_popup_window_pane_cp4

0xd182,	// (0x0003c783) heading_pane_cp4

0x3abc,	// (0x000330bd) listscroll_popup_colour_pane

0x3ac4,	// (0x000330c5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3ac4,	// (0x000330c5) cell_large_graphic_colour_none_popup_pane

0xd18a,	// (0x0003c78b) grid_large_graphic_colour_popup_pane_ParamLimits

0xd18a,	// (0x0003c78b) grid_large_graphic_colour_popup_pane

0x3b04,	// (0x00033105) listscroll_popup_colour_pane_g1_ParamLimits

0x3b04,	// (0x00033105) listscroll_popup_colour_pane_g1

0x3b1b,	// (0x0003311c) listscroll_popup_colour_pane_g2_ParamLimits

0x3b1b,	// (0x0003311c) listscroll_popup_colour_pane_g2

0x3b32,	// (0x00033133) listscroll_popup_colour_pane_g3_ParamLimits

0x3b32,	// (0x00033133) listscroll_popup_colour_pane_g3

0xd1ae,	// (0x0003c7af) listscroll_popup_colour_pane_g4_ParamLimits

0xd1ae,	// (0x0003c7af) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003eb99) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003eb99) listscroll_popup_colour_pane_g

0x3b56,	// (0x00033157) scroll_pane_cp6_ParamLimits

0x3b56,	// (0x00033157) scroll_pane_cp6

0xd1be,	// (0x0003c7bf) cell_large_graphic_colour_popup_pane_ParamLimits

0xd1be,	// (0x0003c7bf) cell_large_graphic_colour_popup_pane

0x3b87,	// (0x00033188) cell_large_graphic_colour_none_popup_pane_t1

0x2d53,	// (0x00032354) grid_highlight_pane_cp5

0x3b96,	// (0x00033197) cell_large_graphic_colour_popup_pane_g1

0x3b9e,	// (0x0003319f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003eba2) cell_large_graphic_colour_popup_pane_g

0x3ba6,	// (0x000331a7) cell_large_graphic_colour_popup_pane_g2_copy1

0x3baf,	// (0x000331b0) grid_highlight_pane_cp4

0x3bb7,	// (0x000331b8) bg_popup_window_pane_cp8_ParamLimits

0x3bb7,	// (0x000331b8) bg_popup_window_pane_cp8

0x3bd2,	// (0x000331d3) popup_snote_single_text_window_g1_ParamLimits

0x3bd2,	// (0x000331d3) popup_snote_single_text_window_g1

0x3be4,	// (0x000331e5) popup_snote_single_text_window_t1_ParamLimits

0x3be4,	// (0x000331e5) popup_snote_single_text_window_t1

0x3bf7,	// (0x000331f8) popup_snote_single_text_window_t2_ParamLimits

0x3bf7,	// (0x000331f8) popup_snote_single_text_window_t2

0x3c0a,	// (0x0003320b) popup_snote_single_text_window_t3_ParamLimits

0x3c0a,	// (0x0003320b) popup_snote_single_text_window_t3

0x3c43,	// (0x00033244) popup_snote_single_text_window_t4_ParamLimits

0x3c43,	// (0x00033244) popup_snote_single_text_window_t4

0x3c77,	// (0x00033278) popup_snote_single_text_window_t5_ParamLimits

0x3c77,	// (0x00033278) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003eba7) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003eba7) popup_snote_single_text_window_t

0x3ca6,	// (0x000332a7) bg_popup_window_pane_cp9_ParamLimits

0x3ca6,	// (0x000332a7) bg_popup_window_pane_cp9

0x3bd2,	// (0x000331d3) popup_snote_single_graphic_window_g1_ParamLimits

0x3bd2,	// (0x000331d3) popup_snote_single_graphic_window_g1

0x3cb4,	// (0x000332b5) popup_snote_single_graphic_window_g2_ParamLimits

0x3cb4,	// (0x000332b5) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003ebb2) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003ebb2) popup_snote_single_graphic_window_g

0x3cc0,	// (0x000332c1) popup_snote_single_graphic_window_t1_ParamLimits

0x3cc0,	// (0x000332c1) popup_snote_single_graphic_window_t1

0x3cd3,	// (0x000332d4) popup_snote_single_graphic_window_t2_ParamLimits

0x3cd3,	// (0x000332d4) popup_snote_single_graphic_window_t2

0x3ce6,	// (0x000332e7) popup_snote_single_graphic_window_t3_ParamLimits

0x3ce6,	// (0x000332e7) popup_snote_single_graphic_window_t3

0x3d1f,	// (0x00033320) popup_snote_single_graphic_window_t4_ParamLimits

0x3d1f,	// (0x00033320) popup_snote_single_graphic_window_t4

0x3d53,	// (0x00033354) popup_snote_single_graphic_window_t5_ParamLimits

0x3d53,	// (0x00033354) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003ebb7) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003ebb7) popup_snote_single_graphic_window_t

0xddc9,	// (0x0003d3ca) grid_graphic_popup_pane_ParamLimits

0xddc9,	// (0x0003d3ca) grid_graphic_popup_pane

0x6a7f,	// (0x00036080) listscroll_popup_graphic_pane_g1_ParamLimits

0x6a7f,	// (0x00036080) listscroll_popup_graphic_pane_g1

0xdde8,	// (0x0003d3e9) listscroll_popup_graphic_pane_g2_ParamLimits

0xdde8,	// (0x0003d3e9) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0003efac) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0003efac) listscroll_popup_graphic_pane_g

0x6aa7,	// (0x000360a8) scroll_pane_cp5

0xdd85,	// (0x0003d386) cell_graphic_popup_pane_ParamLimits

0xdd85,	// (0x0003d386) cell_graphic_popup_pane

0x69d4,	// (0x00035fd5) cell_graphic_popup_pane_g1

0x69dc,	// (0x00035fdd) cell_graphic_popup_pane_g2

0x3ba6,	// (0x000331a7) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0003efa5) cell_graphic_popup_pane_g

0x69e5,	// (0x00035fe6) cell_graphic_popup_pane_t2

0x3baf,	// (0x000331b0) grid_highlight_pane_cp3

0x3d94,	// (0x00033395) list_gen_pane_ParamLimits

0x3d94,	// (0x00033395) list_gen_pane

0x3dc6,	// (0x000333c7) scroll_pane

0xdd3c,	// (0x0003d33d) bg_list_pane_g1_ParamLimits

0xdd3c,	// (0x0003d33d) bg_list_pane_g1

0x6949,	// (0x00035f4a) bg_list_pane_g2_ParamLimits

0x6949,	// (0x00035f4a) bg_list_pane_g2

0x695e,	// (0x00035f5f) bg_list_pane_g3_ParamLimits

0x695e,	// (0x00035f5f) bg_list_pane_g3

0x6972,	// (0x00035f73) bg_list_pane_g4_ParamLimits

0x6972,	// (0x00035f73) bg_list_pane_g4

0xdd59,	// (0x0003d35a) bg_list_pane_g5_ParamLimits

0xdd59,	// (0x0003d35a) bg_list_pane_g5

0x0004,

0xf999,	// (0x0003ef9a) bg_list_pane_g_ParamLimits

0xf999,	// (0x0003ef9a) bg_list_pane_g

0xdd04,	// (0x0003d305) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd04,	// (0x0003d305) list_double2_graphic_large_graphic_pane

0xdd04,	// (0x0003d305) list_double2_graphic_pane_ParamLimits

0xdd04,	// (0x0003d305) list_double2_graphic_pane

0xdd04,	// (0x0003d305) list_double2_large_graphic_pane_ParamLimits

0xdd04,	// (0x0003d305) list_double2_large_graphic_pane

0xdd04,	// (0x0003d305) list_double2_pane_ParamLimits

0xdd04,	// (0x0003d305) list_double2_pane

0xdd04,	// (0x0003d305) list_double_graphic_heading_pane_ParamLimits

0xdd04,	// (0x0003d305) list_double_graphic_heading_pane

0xdd04,	// (0x0003d305) list_double_graphic_pane_ParamLimits

0xdd04,	// (0x0003d305) list_double_graphic_pane

0xdd04,	// (0x0003d305) list_double_heading_pane_ParamLimits

0xdd04,	// (0x0003d305) list_double_heading_pane

0xdd04,	// (0x0003d305) list_double_large_graphic_pane_ParamLimits

0xdd04,	// (0x0003d305) list_double_large_graphic_pane

0xdd04,	// (0x0003d305) list_double_number_pane_ParamLimits

0xdd04,	// (0x0003d305) list_double_number_pane

0xdd04,	// (0x0003d305) list_double_pane_ParamLimits

0xdd04,	// (0x0003d305) list_double_pane

0xdd04,	// (0x0003d305) list_double_time_pane_ParamLimits

0xdd04,	// (0x0003d305) list_double_time_pane

0xdd04,	// (0x0003d305) list_setting_number_pane_ParamLimits

0xdd04,	// (0x0003d305) list_setting_number_pane

0xdd04,	// (0x0003d305) list_setting_pane_ParamLimits

0xdd04,	// (0x0003d305) list_setting_pane

0xdd16,	// (0x0003d317) list_single_2graphic_pane_ParamLimits

0xdd16,	// (0x0003d317) list_single_2graphic_pane

0xdd16,	// (0x0003d317) list_single_graphic_heading_pane_ParamLimits

0xdd16,	// (0x0003d317) list_single_graphic_heading_pane

0xdd16,	// (0x0003d317) list_single_graphic_pane_ParamLimits

0xdd16,	// (0x0003d317) list_single_graphic_pane

0xdd16,	// (0x0003d317) list_single_heading_pane_ParamLimits

0xdd16,	// (0x0003d317) list_single_heading_pane

0xdd16,	// (0x0003d317) list_single_large_graphic_pane_ParamLimits

0xdd16,	// (0x0003d317) list_single_large_graphic_pane

0xdd16,	// (0x0003d317) list_single_number_heading_pane_ParamLimits

0xdd16,	// (0x0003d317) list_single_number_heading_pane

0xdd16,	// (0x0003d317) list_single_number_pane_ParamLimits

0xdd16,	// (0x0003d317) list_single_number_pane

0xdd16,	// (0x0003d317) list_single_pane_ParamLimits

0xdd16,	// (0x0003d317) list_single_pane

0x2d53,	// (0x00032354) list_highlight_pane_cp1

0x1718,	// (0x00030d19) list_single_pane_g1_ParamLimits

0x1718,	// (0x00030d19) list_single_pane_g1

0x1724,	// (0x00030d25) list_single_pane_g2_ParamLimits

0x1724,	// (0x00030d25) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003ebc9) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003ebc9) list_single_pane_g

0x3128,	// (0x00032729) list_single_pane_t1_ParamLimits

0x3128,	// (0x00032729) list_single_pane_t1

0x1718,	// (0x00030d19) list_single_number_pane_g1_ParamLimits

0x1718,	// (0x00030d19) list_single_number_pane_g1

0x1724,	// (0x00030d25) list_single_number_pane_g2_ParamLimits

0x1724,	// (0x00030d25) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003ebc9) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003ebc9) list_single_number_pane_g

0x1730,	// (0x00030d31) list_single_number_pane_t1_ParamLimits

0x1730,	// (0x00030d31) list_single_number_pane_t1

0xc612,	// (0x0003bc13) list_single_number_pane_t2_ParamLimits

0xc612,	// (0x0003bc13) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0003ef5b) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0003ef5b) list_single_number_pane_t

0xb744,	// (0x0003ad45) list_single_graphic_pane_g1_ParamLimits

0xb744,	// (0x0003ad45) list_single_graphic_pane_g1

0x1718,	// (0x00030d19) list_single_graphic_pane_g2_ParamLimits

0x1718,	// (0x00030d19) list_single_graphic_pane_g2

0x1724,	// (0x00030d25) list_single_graphic_pane_g3_ParamLimits

0x1724,	// (0x00030d25) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003ebc2) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003ebc2) list_single_graphic_pane_g

0xb750,	// (0x0003ad51) list_single_graphic_pane_t1_ParamLimits

0xb750,	// (0x0003ad51) list_single_graphic_pane_t1

0x1718,	// (0x00030d19) list_single_heading_pane_g1_ParamLimits

0x1718,	// (0x00030d19) list_single_heading_pane_g1

0x1724,	// (0x00030d25) list_single_heading_pane_g2_ParamLimits

0x1724,	// (0x00030d25) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003ebc9) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003ebc9) list_single_heading_pane_g

0xb766,	// (0x0003ad67) list_single_heading_pane_t1_ParamLimits

0xb766,	// (0x0003ad67) list_single_heading_pane_t1

0xb77c,	// (0x0003ad7d) list_single_heading_pane_t2_ParamLimits

0xb77c,	// (0x0003ad7d) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003ebce) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003ebce) list_single_heading_pane_t

0x1718,	// (0x00030d19) list_single_number_heading_pane_g1_ParamLimits

0x1718,	// (0x00030d19) list_single_number_heading_pane_g1

0x1724,	// (0x00030d25) list_single_number_heading_pane_g2_ParamLimits

0x1724,	// (0x00030d25) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003ebc9) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003ebc9) list_single_number_heading_pane_g

0xb766,	// (0x0003ad67) list_single_number_heading_pane_t1_ParamLimits

0xb766,	// (0x0003ad67) list_single_number_heading_pane_t1

0xb78e,	// (0x0003ad8f) list_single_number_heading_pane_t2_ParamLimits

0xb78e,	// (0x0003ad8f) list_single_number_heading_pane_t2

0x3102,	// (0x00032703) list_single_number_heading_pane_t3_ParamLimits

0x3102,	// (0x00032703) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003ebd3) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003ebd3) list_single_number_heading_pane_t

0x170c,	// (0x00030d0d) list_single_graphic_heading_pane_g1_ParamLimits

0x170c,	// (0x00030d0d) list_single_graphic_heading_pane_g1

0xb7a0,	// (0x0003ada1) list_single_graphic_heading_pane_g4_ParamLimits

0xb7a0,	// (0x0003ada1) list_single_graphic_heading_pane_g4

0x1724,	// (0x00030d25) list_single_graphic_heading_pane_g5_ParamLimits

0x1724,	// (0x00030d25) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003ebda) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003ebda) list_single_graphic_heading_pane_g

0xb766,	// (0x0003ad67) list_single_graphic_heading_pane_t1_ParamLimits

0xb766,	// (0x0003ad67) list_single_graphic_heading_pane_t1

0xb7b1,	// (0x0003adb2) list_single_graphic_heading_pane_t2_ParamLimits

0xb7b1,	// (0x0003adb2) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003ebe1) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003ebe1) list_single_graphic_heading_pane_t

0x313e,	// (0x0003273f) list_single_large_graphic_pane_g1_ParamLimits

0x313e,	// (0x0003273f) list_single_large_graphic_pane_g1

0x1718,	// (0x00030d19) list_single_large_graphic_pane_g2_ParamLimits

0x1718,	// (0x00030d19) list_single_large_graphic_pane_g2

0x1724,	// (0x00030d25) list_single_large_graphic_pane_g3_ParamLimits

0x1724,	// (0x00030d25) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003ebe6) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003ebe6) list_single_large_graphic_pane_g

0x5933,	// (0x00034f34) wait_border_pane_g2_copy1

0xb7c3,	// (0x0003adc4) list_single_large_graphic_pane_g4_cp2

0x314a,	// (0x0003274b) list_single_large_graphic_pane_t1_ParamLimits

0x314a,	// (0x0003274b) list_single_large_graphic_pane_t1

0xb7cb,	// (0x0003adcc) list_double_pane_g1_ParamLimits

0xb7cb,	// (0x0003adcc) list_double_pane_g1

0xb7d7,	// (0x0003add8) list_double_pane_g2_ParamLimits

0xb7d7,	// (0x0003add8) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003ebed) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003ebed) list_double_pane_g

0xb7e3,	// (0x0003ade4) list_double_pane_t1_ParamLimits

0xb7e3,	// (0x0003ade4) list_double_pane_t1

0xb7f9,	// (0x0003adfa) list_double_pane_t2_ParamLimits

0xb7f9,	// (0x0003adfa) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003ebf2) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003ebf2) list_double_pane_t

0xb80b,	// (0x0003ae0c) list_double2_pane_g1_ParamLimits

0xb80b,	// (0x0003ae0c) list_double2_pane_g1

0xb81c,	// (0x0003ae1d) list_double2_pane_g2_ParamLimits

0xb81c,	// (0x0003ae1d) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003ebf7) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003ebf7) list_double2_pane_g

0xb828,	// (0x0003ae29) list_double2_pane_t1_ParamLimits

0xb828,	// (0x0003ae29) list_double2_pane_t1

0xb83e,	// (0x0003ae3f) list_double2_pane_t2_ParamLimits

0xb83e,	// (0x0003ae3f) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003ebfc) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003ebfc) list_double2_pane_t

0xb7cb,	// (0x0003adcc) list_double_number_pane_g1_ParamLimits

0xb7cb,	// (0x0003adcc) list_double_number_pane_g1

0xb7d7,	// (0x0003add8) list_double_number_pane_g2_ParamLimits

0xb7d7,	// (0x0003add8) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003ebed) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003ebed) list_double_number_pane_g

0xb850,	// (0x0003ae51) list_double_number_pane_t1_ParamLimits

0xb850,	// (0x0003ae51) list_double_number_pane_t1

0xb862,	// (0x0003ae63) list_double_number_pane_t2_ParamLimits

0xb862,	// (0x0003ae63) list_double_number_pane_t2

0xb878,	// (0x0003ae79) list_double_number_pane_t3_ParamLimits

0xb878,	// (0x0003ae79) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003ec01) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003ec01) list_double_number_pane_t

0xb88a,	// (0x0003ae8b) list_double_graphic_pane_g1_ParamLimits

0xb88a,	// (0x0003ae8b) list_double_graphic_pane_g1

0xb896,	// (0x0003ae97) list_double_graphic_pane_g2_ParamLimits

0xb896,	// (0x0003ae97) list_double_graphic_pane_g2

0xb8a5,	// (0x0003aea6) list_double_graphic_pane_g3_ParamLimits

0xb8a5,	// (0x0003aea6) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003ec08) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003ec08) list_double_graphic_pane_g

0xb8bd,	// (0x0003aebe) list_double_graphic_pane_t1_ParamLimits

0xb8bd,	// (0x0003aebe) list_double_graphic_pane_t1

0xb8d3,	// (0x0003aed4) list_double_graphic_pane_t2_ParamLimits

0xb8d3,	// (0x0003aed4) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003ec11) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003ec11) list_double_graphic_pane_t

0x06d2,	// (0x0002fcd3) list_double2_graphic_pane_g1_ParamLimits

0x06d2,	// (0x0002fcd3) list_double2_graphic_pane_g1

0x33e7,	// (0x000329e8) list_double2_graphic_pane_g2_ParamLimits

0x33e7,	// (0x000329e8) list_double2_graphic_pane_g2

0xb81c,	// (0x0003ae1d) list_double2_graphic_pane_g3_ParamLimits

0xb81c,	// (0x0003ae1d) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003ec16) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003ec16) list_double2_graphic_pane_g

0xb8e5,	// (0x0003aee6) list_double2_graphic_pane_t1_ParamLimits

0xb8e5,	// (0x0003aee6) list_double2_graphic_pane_t1

0xb8fb,	// (0x0003aefc) list_double2_graphic_pane_t2_ParamLimits

0xb8fb,	// (0x0003aefc) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003ec1d) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003ec1d) list_double2_graphic_pane_t

0xb90d,	// (0x0003af0e) list_double_large_graphic_pane_g1_ParamLimits

0xb90d,	// (0x0003af0e) list_double_large_graphic_pane_g1

0xb92c,	// (0x0003af2d) list_double_large_graphic_pane_g2_ParamLimits

0xb92c,	// (0x0003af2d) list_double_large_graphic_pane_g2

0xb7d7,	// (0x0003add8) list_double_large_graphic_pane_g3_ParamLimits

0xb7d7,	// (0x0003add8) list_double_large_graphic_pane_g3

0xb93d,	// (0x0003af3e) list_double_large_graphic_pane_g4_ParamLimits

0xb93d,	// (0x0003af3e) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003ec22) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003ec22) list_double_large_graphic_pane_g

0xb950,	// (0x0003af51) list_double_large_graphic_pane_t1_ParamLimits

0xb950,	// (0x0003af51) list_double_large_graphic_pane_t1

0xb969,	// (0x0003af6a) list_double_large_graphic_pane_t2_ParamLimits

0xb969,	// (0x0003af6a) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003ec2d) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003ec2d) list_double_large_graphic_pane_t

0xb97b,	// (0x0003af7c) list_double2_large_graphic_pane_g1_ParamLimits

0xb97b,	// (0x0003af7c) list_double2_large_graphic_pane_g1

0xb80b,	// (0x0003ae0c) list_double2_large_graphic_pane_g2_ParamLimits

0xb80b,	// (0x0003ae0c) list_double2_large_graphic_pane_g2

0xb81c,	// (0x0003ae1d) list_double2_large_graphic_pane_g3_ParamLimits

0xb81c,	// (0x0003ae1d) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003ec32) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003ec32) list_double2_large_graphic_pane_g

0xb987,	// (0x0003af88) list_double2_large_graphic_pane_t1_ParamLimits

0xb987,	// (0x0003af88) list_double2_large_graphic_pane_t1

0xb99d,	// (0x0003af9e) list_double2_large_graphic_pane_t2_ParamLimits

0xb99d,	// (0x0003af9e) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0003ec39) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0003ec39) list_double2_large_graphic_pane_t

0xb9af,	// (0x0003afb0) list_double_heading_pane_g1_ParamLimits

0xb9af,	// (0x0003afb0) list_double_heading_pane_g1

0x04a7,	// (0x0002faa8) list_double_heading_pane_g2_ParamLimits

0x04a7,	// (0x0002faa8) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003ec3e) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003ec3e) list_double_heading_pane_g

0xb9c0,	// (0x0003afc1) list_double_heading_pane_t1_ParamLimits

0xb9c0,	// (0x0003afc1) list_double_heading_pane_t1

0xb83e,	// (0x0003ae3f) list_double_heading_pane_t2_ParamLimits

0xb83e,	// (0x0003ae3f) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0003ec43) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0003ec43) list_double_heading_pane_t

0x06d2,	// (0x0002fcd3) list_double_graphic_heading_pane_g1_ParamLimits

0x06d2,	// (0x0002fcd3) list_double_graphic_heading_pane_g1

0xb9af,	// (0x0003afb0) list_double_graphic_heading_pane_g2_ParamLimits

0xb9af,	// (0x0003afb0) list_double_graphic_heading_pane_g2

0x04a7,	// (0x0002faa8) list_double_graphic_heading_pane_g3_ParamLimits

0x04a7,	// (0x0002faa8) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0003ec48) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0003ec48) list_double_graphic_heading_pane_g

0xb9d6,	// (0x0003afd7) list_double_graphic_heading_pane_t1_ParamLimits

0xb9d6,	// (0x0003afd7) list_double_graphic_heading_pane_t1

0xb8fb,	// (0x0003aefc) list_double_graphic_heading_pane_t2_ParamLimits

0xb8fb,	// (0x0003aefc) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003ec4f) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003ec4f) list_double_graphic_heading_pane_t

0xb92c,	// (0x0003af2d) list_double_time_pane_g1_ParamLimits

0xb92c,	// (0x0003af2d) list_double_time_pane_g1

0xb7d7,	// (0x0003add8) list_double_time_pane_g2_ParamLimits

0xb7d7,	// (0x0003add8) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0003ec54) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0003ec54) list_double_time_pane_g

0xb9ec,	// (0x0003afed) list_double_time_pane_t1_ParamLimits

0xb9ec,	// (0x0003afed) list_double_time_pane_t1

0xba02,	// (0x0003b003) list_double_time_pane_t2_ParamLimits

0xba02,	// (0x0003b003) list_double_time_pane_t2

0xba14,	// (0x0003b015) list_double_time_pane_t3_ParamLimits

0xba14,	// (0x0003b015) list_double_time_pane_t3

0xba26,	// (0x0003b027) list_double_time_pane_t4_ParamLimits

0xba26,	// (0x0003b027) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0003ec59) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0003ec59) list_double_time_pane_t

0xba38,	// (0x0003b039) list_setting_pane_g1_ParamLimits

0xba38,	// (0x0003b039) list_setting_pane_g1

0xba44,	// (0x0003b045) list_setting_pane_g2_ParamLimits

0xba44,	// (0x0003b045) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003ec62) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003ec62) list_setting_pane_g

0xba50,	// (0x0003b051) list_setting_pane_t1_ParamLimits

0xba50,	// (0x0003b051) list_setting_pane_t1

0xba6a,	// (0x0003b06b) list_setting_pane_t2_ParamLimits

0xba6a,	// (0x0003b06b) list_setting_pane_t2

0x0002,

0xf666,	// (0x0003ec67) list_setting_pane_t_ParamLimits

0xf666,	// (0x0003ec67) list_setting_pane_t

0xbaa9,	// (0x0003b0aa) set_value_pane_cp_ParamLimits

0xbaa9,	// (0x0003b0aa) set_value_pane_cp

0xbab5,	// (0x0003b0b6) list_setting_number_pane_g1_ParamLimits

0xbab5,	// (0x0003b0b6) list_setting_number_pane_g1

0xbac1,	// (0x0003b0c2) list_setting_number_pane_g2_ParamLimits

0xbac1,	// (0x0003b0c2) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0003ec6e) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0003ec6e) list_setting_number_pane_g

0xbacd,	// (0x0003b0ce) list_setting_number_pane_t1_ParamLimits

0xbacd,	// (0x0003b0ce) list_setting_number_pane_t1

0xbae6,	// (0x0003b0e7) list_setting_number_pane_t2_ParamLimits

0xbae6,	// (0x0003b0e7) list_setting_number_pane_t2

0xbb00,	// (0x0003b101) list_setting_number_pane_t3_ParamLimits

0xbb00,	// (0x0003b101) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003ec73) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003ec73) list_setting_number_pane_t

0xbaa9,	// (0x0003b0aa) set_value_pane_ParamLimits

0xbaa9,	// (0x0003b0aa) set_value_pane

0x3dfa,	// (0x000333fb) bg_set_opt_pane_ParamLimits

0x3dfa,	// (0x000333fb) bg_set_opt_pane

0x0833,	// (0x0002fe34) set_value_pane_t1

0x3e1b,	// (0x0003341c) slider_set_pane_cp3

0x3e24,	// (0x00033425) volume_small_pane_cp

0x3e2d,	// (0x0003342e) list_form_gen_pane

0x3e36,	// (0x00033437) scroll_pane_cp8

0xbb43,	// (0x0003b144) form_field_data_pane_ParamLimits

0xbb43,	// (0x0003b144) form_field_data_pane

0xbb5a,	// (0x0003b15b) form_field_data_wide_pane_ParamLimits

0xbb5a,	// (0x0003b15b) form_field_data_wide_pane

0xbb7a,	// (0x0003b17b) form_field_popup_pane_ParamLimits

0xbb7a,	// (0x0003b17b) form_field_popup_pane

0xbb92,	// (0x0003b193) form_field_popup_wide_pane_ParamLimits

0xbb92,	// (0x0003b193) form_field_popup_wide_pane

0x08c7,	// (0x0002fec8) form_field_slider_pane_ParamLimits

0x08c7,	// (0x0002fec8) form_field_slider_pane

0x08da,	// (0x0002fedb) form_field_slider_wide_pane_ParamLimits

0x08da,	// (0x0002fedb) form_field_slider_wide_pane

0x3e47,	// (0x00033448) data_form_pane

0xbbb3,	// (0x0003b1b4) form_field_data_pane_t1

0x3e53,	// (0x00033454) input_focus_pane

0x090f,	// (0x0002ff10) data_form_wide_pane

0x092c,	// (0x0002ff2d) form_field_data_wide_pane_t1

0x3bc4,	// (0x000331c5) input_focus_pane_cp6

0xbbcd,	// (0x0003b1ce) form_field_popup_pane_t1

0x3e53,	// (0x00033454) input_focus_pane_cp7

0x3e81,	// (0x00033482) list_form_pane

0x096e,	// (0x0002ff6f) form_field_popup_wide_pane_t1

0x3e53,	// (0x00033454) input_focus_pane_cp8

0x3e8d,	// (0x0003348e) list_form_wide_pane

0xbbef,	// (0x0003b1f0) form_field_slider_pane_t1_ParamLimits

0xbbef,	// (0x0003b1f0) form_field_slider_pane_t1

0xbc07,	// (0x0003b208) form_field_slider_pane_t2_ParamLimits

0xbc07,	// (0x0003b208) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003ec83) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003ec83) form_field_slider_pane_t

0x385f,	// (0x00032e60) input_focus_pane_cp9_ParamLimits

0x385f,	// (0x00032e60) input_focus_pane_cp9

0xbc1c,	// (0x0003b21d) slider_cont_pane_ParamLimits

0xbc1c,	// (0x0003b21d) slider_cont_pane

0x3e9c,	// (0x0003349d) form_field_slider_wide_pane_t1_ParamLimits

0x3e9c,	// (0x0003349d) form_field_slider_wide_pane_t1

0x09ca,	// (0x0002ffcb) form_field_slider_wide_pane_t2_ParamLimits

0x09ca,	// (0x0002ffcb) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0003ec88) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0003ec88) form_field_slider_wide_pane_t

0x385f,	// (0x00032e60) input_focus_pane_cp10_ParamLimits

0x385f,	// (0x00032e60) input_focus_pane_cp10

0xbc30,	// (0x0003b231) slider_cont_pane_cp1_ParamLimits

0xbc30,	// (0x0003b231) slider_cont_pane_cp1

0xbc44,	// (0x0003b245) slider_form_pane_cp

0x3eae,	// (0x000334af) input_focus_pane_g1

0x3eb6,	// (0x000334b7) input_focus_pane_g2

0x3ebe,	// (0x000334bf) input_focus_pane_g3

0x3ec6,	// (0x000334c7) input_focus_pane_g4

0x3ece,	// (0x000334cf) input_focus_pane_g5

0x3ed6,	// (0x000334d7) input_focus_pane_g6

0x3ede,	// (0x000334df) input_focus_pane_g7

0x3ee6,	// (0x000334e7) input_focus_pane_g8

0x3eee,	// (0x000334ef) input_focus_pane_g9

0x2d49,	// (0x0003234a) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0003ec8d) input_focus_pane_g

0x593c,	// (0x00034f3d) wait_border_pane_g3_copy1

0xbc4c,	// (0x0003b24d) data_form_pane_t1

0x2d49,	// (0x0003234a) wait_anim_pane_g1_copy1

0xc624,	// (0x0003bc25) data_form_wide_pane_t1

0xbc66,	// (0x0003b267) list_form_graphic_pane_cp_ParamLimits

0xbc66,	// (0x0003b267) list_form_graphic_pane_cp

0x6869,	// (0x00035e6a) slider_form_pane_g1

0x6872,	// (0x00035e73) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0003ef8b) slider_form_pane_g

0xbc66,	// (0x0003b267) list_form_graphic_pane_ParamLimits

0xbc66,	// (0x0003b267) list_form_graphic_pane

0x0a48,	// (0x00030049) list_form_graphic_pane_g1

0x0a50,	// (0x00030051) list_form_graphic_pane_t1_ParamLimits

0x0a50,	// (0x00030051) list_form_graphic_pane_t1

0x2e33,	// (0x00032434) list_highlight_pane_cp5_ParamLimits

0x2e33,	// (0x00032434) list_highlight_pane_cp5

0xbc78,	// (0x0003b279) find_pane_g1

0x3ef6,	// (0x000334f7) input_find_pane

0xbc81,	// (0x0003b282) input_find_pane_g1_ParamLimits

0xbc81,	// (0x0003b282) input_find_pane_g1

0xbc8d,	// (0x0003b28e) input_find_pane_t1_ParamLimits

0xbc8d,	// (0x0003b28e) input_find_pane_t1

0xbca2,	// (0x0003b2a3) input_find_pane_t2_ParamLimits

0xbca2,	// (0x0003b2a3) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003eca2) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003eca2) input_find_pane_t

0x3eff,	// (0x00033500) input_focus_pane_cp5_ParamLimits

0x3eff,	// (0x00033500) input_focus_pane_cp5

0x3f19,	// (0x0003351a) bg_popup_window_pane_cp2_ParamLimits

0x3f19,	// (0x0003351a) bg_popup_window_pane_cp2

0x3f26,	// (0x00033527) listscroll_menu_pane_ParamLimits

0x3f26,	// (0x00033527) listscroll_menu_pane

0xd1f3,	// (0x0003c7f4) popup_submenu_window_ParamLimits

0xd1f3,	// (0x0003c7f4) popup_submenu_window

0x3f5e,	// (0x0003355f) find_popup_pane_g1

0x3f66,	// (0x00033567) input_popup_find_pane_cp

0x3eff,	// (0x00033500) input_focus_pane_cp4_ParamLimits

0x3eff,	// (0x00033500) input_focus_pane_cp4

0x3f7c,	// (0x0003357d) input_popup_find_pane_t1_ParamLimits

0x3f7c,	// (0x0003357d) input_popup_find_pane_t1

0x2d53,	// (0x00032354) bg_popup_sub_pane_cp

0x3faa,	// (0x000335ab) listscroll_popup_sub_pane

0x3fb2,	// (0x000335b3) list_submenu_pane_ParamLimits

0x3fb2,	// (0x000335b3) list_submenu_pane

0x3fc3,	// (0x000335c4) scroll_pane_cp4

0x3fcb,	// (0x000335cc) list_single_popup_submenu_pane_ParamLimits

0x3fcb,	// (0x000335cc) list_single_popup_submenu_pane

0x3fdf,	// (0x000335e0) list_single_popup_submenu_pane_g1

0x3fe7,	// (0x000335e8) list_single_popup_submenu_pane_t1_ParamLimits

0x3fe7,	// (0x000335e8) list_single_popup_submenu_pane_t1

0x385f,	// (0x00032e60) bg_active_tab_pane_cp1_ParamLimits

0x385f,	// (0x00032e60) bg_active_tab_pane_cp1

0x3ffc,	// (0x000335fd) tabs_2_active_pane_g1

0xd22d,	// (0x0003c82e) tabs_2_active_pane_t1

0x385f,	// (0x00032e60) bg_passive_tab_pane_cp1_ParamLimits

0x385f,	// (0x00032e60) bg_passive_tab_pane_cp1

0x3ffc,	// (0x000335fd) tabs_2_passive_pane_g1

0xd22d,	// (0x0003c82e) tabs_2_passive_pane_t1

0x2e33,	// (0x00032434) bg_active_tab_pane_cp4

0xd23f,	// (0x0003c840) tabs_2_long_active_pane_t1

0x4e23,	// (0x00034424) bg_passive_tab_pane_cp4

0x1773,	// (0x00030d74) list_single_midp_graphic_pane_g4_ParamLimits

0x2e33,	// (0x00032434) bg_active_tab_pane_cp5

0xd252,	// (0x0003c853) tabs_3_long_active_pane_t1

0x4e23,	// (0x00034424) bg_passive_tab_pane_cp5

0x1773,	// (0x00030d74) list_single_midp_graphic_pane_g4

0x2e33,	// (0x00032434) bg_popup_window_pane_cp13_ParamLimits

0x2e33,	// (0x00032434) bg_popup_window_pane_cp13

0x405e,	// (0x0003365f) listscroll_popup_fast_pane_ParamLimits

0x405e,	// (0x0003365f) listscroll_popup_fast_pane

0x406d,	// (0x0003366e) grid_popup_fast_pane_ParamLimits

0x406d,	// (0x0003366e) grid_popup_fast_pane

0x407f,	// (0x00033680) scroll_pane_cp9_ParamLimits

0x407f,	// (0x00033680) scroll_pane_cp9

0x8185,	// (0x00037786) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8185,	// (0x00037786) list_single_graphic_hl_pane_t1_cp2

0x40a3,	// (0x000336a4) input_focus_pane_cp20_ParamLimits

0x40a3,	// (0x000336a4) input_focus_pane_cp20

0x40b1,	// (0x000336b2) query_popup_data_pane_t1_ParamLimits

0x40b1,	// (0x000336b2) query_popup_data_pane_t1

0x40c4,	// (0x000336c5) query_popup_data_pane_t2_ParamLimits

0x40c4,	// (0x000336c5) query_popup_data_pane_t2

0x410a,	// (0x0003370b) query_popup_data_pane_t3_ParamLimits

0x410a,	// (0x0003370b) query_popup_data_pane_t3

0x414b,	// (0x0003374c) query_popup_data_pane_t4_ParamLimits

0x414b,	// (0x0003374c) query_popup_data_pane_t4

0x4187,	// (0x00033788) query_popup_data_pane_t5_ParamLimits

0x4187,	// (0x00033788) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0003eca7) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0003eca7) query_popup_data_pane_t

0x3eae,	// (0x000334af) bg_set_opt_pane_g1

0x3eb6,	// (0x000334b7) bg_set_opt_pane_g2

0x3ebe,	// (0x000334bf) bg_set_opt_pane_g3

0x3ec6,	// (0x000334c7) bg_set_opt_pane_g4

0x3ece,	// (0x000334cf) bg_set_opt_pane_g5

0x3ed6,	// (0x000334d7) bg_set_opt_pane_g6

0x3ede,	// (0x000334df) bg_set_opt_pane_g7

0x3ee6,	// (0x000334e7) bg_set_opt_pane_g8

0x3eee,	// (0x000334ef) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0003ecb2) bg_set_opt_pane_g

0x0dcb,	// (0x000303cc) control_top_pane_stacon_ParamLimits

0x0dcb,	// (0x000303cc) control_top_pane_stacon

0x0e1e,	// (0x0003041f) signal_pane_stacon_ParamLimits

0x0e1e,	// (0x0003041f) signal_pane_stacon

0x4773,	// (0x00033d74) stacon_top_pane_g1_ParamLimits

0x4773,	// (0x00033d74) stacon_top_pane_g1

0x0e43,	// (0x00030444) title_pane_stacon_ParamLimits

0x0e43,	// (0x00030444) title_pane_stacon

0x0e6d,	// (0x0003046e) uni_indicator_pane_stacon_ParamLimits

0x0e6d,	// (0x0003046e) uni_indicator_pane_stacon

0x0e82,	// (0x00030483) battery_pane_stacon_ParamLimits

0x0e82,	// (0x00030483) battery_pane_stacon

0x0ec6,	// (0x000304c7) control_bottom_pane_stacon_ParamLimits

0x0ec6,	// (0x000304c7) control_bottom_pane_stacon

0x0ee9,	// (0x000304ea) navi_pane_stacon_ParamLimits

0x0ee9,	// (0x000304ea) navi_pane_stacon

0x4795,	// (0x00033d96) stacon_bottom_pane_g1_ParamLimits

0x4795,	// (0x00033d96) stacon_bottom_pane_g1

0x0aa4,	// (0x000300a5) aid_levels_signal_lsc_ParamLimits

0x0aa4,	// (0x000300a5) aid_levels_signal_lsc

0x0aba,	// (0x000300bb) signal_pane_stacon_g1_ParamLimits

0x0aba,	// (0x000300bb) signal_pane_stacon_g1

0x0ace,	// (0x000300cf) signal_pane_stacon_g2_ParamLimits

0x0ace,	// (0x000300cf) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0003ecc5) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003ecc5) signal_pane_stacon_g

0x0b03,	// (0x00030104) title_pane_stacon_t1_ParamLimits

0x0b03,	// (0x00030104) title_pane_stacon_t1

0x41cb,	// (0x000337cc) uni_indicator_pane_stacon_g1

0x41d5,	// (0x000337d6) uni_indicator_pane_stacon_g2

0x41df,	// (0x000337e0) uni_indicator_pane_stacon_g3

0x41e9,	// (0x000337ea) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0003ecd1) uni_indicator_pane_stacon_g

0x0b28,	// (0x00030129) control_top_pane_stacon_g1

0x0b30,	// (0x00030131) control_top_pane_stacon_t1_ParamLimits

0x0b30,	// (0x00030131) control_top_pane_stacon_t1

0x0b67,	// (0x00030168) aid_levels_battery_lsc_ParamLimits

0x0b67,	// (0x00030168) aid_levels_battery_lsc

0x0b7e,	// (0x0003017f) battery_pane_stacon_g1_ParamLimits

0x0b7e,	// (0x0003017f) battery_pane_stacon_g1

0x0b91,	// (0x00030192) battery_pane_stacon_g2_ParamLimits

0x0b91,	// (0x00030192) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0003ecda) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0003ecda) battery_pane_stacon_g

0x0bcf,	// (0x000301d0) navi_icon_pane_stacon

0x0be3,	// (0x000301e4) navi_navi_pane_stacon

0x0bcf,	// (0x000301d0) navi_text_pane_stacon

0x0b28,	// (0x00030129) control_bottom_pane_stacon_g1

0x0bf7,	// (0x000301f8) control_bottom_pane_stacon_t1_ParamLimits

0x0bf7,	// (0x000301f8) control_bottom_pane_stacon_t1

0xd264,	// (0x0003c865) grid_app_pane_ParamLimits

0xd264,	// (0x0003c865) grid_app_pane

0xd29c,	// (0x0003c89d) scroll_pane_cp15_ParamLimits

0xd29c,	// (0x0003c89d) scroll_pane_cp15

0xd2b1,	// (0x0003c8b2) cell_app_pane_ParamLimits

0xd2b1,	// (0x0003c8b2) cell_app_pane

0xd2f6,	// (0x0003c8f7) cell_app_pane_g1_ParamLimits

0xd2f6,	// (0x0003c8f7) cell_app_pane_g1

0x4288,	// (0x00033889) cell_app_pane_g2_ParamLimits

0x4288,	// (0x00033889) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0003ecdf) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0003ecdf) cell_app_pane_g

0xd316,	// (0x0003c917) cell_app_pane_t1_ParamLimits

0xd316,	// (0x0003c917) cell_app_pane_t1

0x42ab,	// (0x000338ac) grid_highlight_pane_ParamLimits

0x42ab,	// (0x000338ac) grid_highlight_pane

0x3eae,	// (0x000334af) cell_highlight_pane_g1

0x3eb6,	// (0x000334b7) cell_highlight_pane_g2

0x3ebe,	// (0x000334bf) cell_highlight_pane_g3

0x3ec6,	// (0x000334c7) cell_highlight_pane_g4

0x3ece,	// (0x000334cf) cell_highlight_pane_g5

0x3ed6,	// (0x000334d7) cell_highlight_pane_g6

0x3ede,	// (0x000334df) cell_highlight_pane_g7

0x3ee6,	// (0x000334e7) cell_highlight_pane_g8

0x3eee,	// (0x000334ef) cell_highlight_pane_g9

0x2d49,	// (0x0003234a) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0003ec8d) cell_highlight_pane_g

0x42bc,	// (0x000338bd) bg_scroll_pane

0x0c41,	// (0x00030242) scroll_handle_pane

0x4303,	// (0x00033904) scroll_bg_pane_g1

0x4318,	// (0x00033919) scroll_bg_pane_g2

0x4330,	// (0x00033931) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0003ece4) scroll_bg_pane_g

0x4345,	// (0x00033946) scroll_handle_focus_pane_ParamLimits

0x4345,	// (0x00033946) scroll_handle_focus_pane

0x4303,	// (0x00033904) scroll_handle_pane_g1

0x4352,	// (0x00033953) scroll_handle_pane_g2

0x4330,	// (0x00033931) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0003eceb) scroll_handle_pane_g

0x3eff,	// (0x00033500) bg_popup_sub_pane_cp21_ParamLimits

0x3eff,	// (0x00033500) bg_popup_sub_pane_cp21

0x4366,	// (0x00033967) popup_fep_japan_predictive_window_t1_ParamLimits

0x4366,	// (0x00033967) popup_fep_japan_predictive_window_t1

0x4380,	// (0x00033981) popup_fep_japan_predictive_window_t2_ParamLimits

0x4380,	// (0x00033981) popup_fep_japan_predictive_window_t2

0x43b3,	// (0x000339b4) popup_fep_japan_predictive_window_t3_ParamLimits

0x43b3,	// (0x000339b4) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0003ecf2) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0003ecf2) popup_fep_japan_predictive_window_t

0x2d53,	// (0x00032354) bg_popup_sub_pane_cp23

0x43ea,	// (0x000339eb) listscroll_japin_cand_pane

0x43f2,	// (0x000339f3) popup_fep_japan_candidate_window_t1

0x4400,	// (0x00033a01) candidate_pane_ParamLimits

0x4400,	// (0x00033a01) candidate_pane

0x4412,	// (0x00033a13) scroll_pane_cp30

0x441a,	// (0x00033a1b) list_single_popup_jap_candidate_pane_ParamLimits

0x441a,	// (0x00033a1b) list_single_popup_jap_candidate_pane

0x2d53,	// (0x00032354) list_highlight_pane_cp30

0x442f,	// (0x00033a30) list_single_popup_jap_candidate_pane_t1

0x443e,	// (0x00033a3f) level_1_signal

0x4450,	// (0x00033a51) level_2_signal

0x4463,	// (0x00033a64) level_3_signal

0x4476,	// (0x00033a77) level_4_signal

0x4489,	// (0x00033a8a) level_5_signal

0x449c,	// (0x00033a9d) level_6_signal

0x44af,	// (0x00033ab0) level_7_signal

0x443e,	// (0x00033a3f) level_1_battery

0x4450,	// (0x00033a51) level_2_battery

0x4463,	// (0x00033a64) level_3_battery

0x4476,	// (0x00033a77) level_4_battery

0x4489,	// (0x00033a8a) level_5_battery

0x449c,	// (0x00033a9d) level_6_battery

0x44af,	// (0x00033ab0) level_7_battery

0x44da,	// (0x00033adb) list_menu_pane_ParamLimits

0x44da,	// (0x00033adb) list_menu_pane

0x44f0,	// (0x00033af1) scroll_pane_cp25_ParamLimits

0x44f0,	// (0x00033af1) scroll_pane_cp25

0x4509,	// (0x00033b0a) list_double2_graphic_pane_cp2_ParamLimits

0x4509,	// (0x00033b0a) list_double2_graphic_pane_cp2

0x4509,	// (0x00033b0a) list_double2_large_graphic_pane_cp2_ParamLimits

0x4509,	// (0x00033b0a) list_double2_large_graphic_pane_cp2

0x4509,	// (0x00033b0a) list_double2_pane_cp2_ParamLimits

0x4509,	// (0x00033b0a) list_double2_pane_cp2

0x4509,	// (0x00033b0a) list_double_graphic_pane_cp2_ParamLimits

0x4509,	// (0x00033b0a) list_double_graphic_pane_cp2

0x4509,	// (0x00033b0a) list_double_large_graphic_pane_cp2_ParamLimits

0x4509,	// (0x00033b0a) list_double_large_graphic_pane_cp2

0x4509,	// (0x00033b0a) list_double_number_pane_cp2_ParamLimits

0x4509,	// (0x00033b0a) list_double_number_pane_cp2

0x4509,	// (0x00033b0a) list_double_pane_cp2_ParamLimits

0x4509,	// (0x00033b0a) list_double_pane_cp2

0xd32d,	// (0x0003c92e) list_single_2graphic_pane_cp2_ParamLimits

0xd32d,	// (0x0003c92e) list_single_2graphic_pane_cp2

0xd32d,	// (0x0003c92e) list_single_graphic_heading_pane_cp2_ParamLimits

0xd32d,	// (0x0003c92e) list_single_graphic_heading_pane_cp2

0xd32d,	// (0x0003c92e) list_single_graphic_pane_cp2_ParamLimits

0xd32d,	// (0x0003c92e) list_single_graphic_pane_cp2

0xd32d,	// (0x0003c92e) list_single_heading_pane_cp2_ParamLimits

0xd32d,	// (0x0003c92e) list_single_heading_pane_cp2

0x4546,	// (0x00033b47) list_single_large_graphic_pane_cp2_ParamLimits

0x4546,	// (0x00033b47) list_single_large_graphic_pane_cp2

0xd32d,	// (0x0003c92e) list_single_number_heading_pane_cp2_ParamLimits

0xd32d,	// (0x0003c92e) list_single_number_heading_pane_cp2

0xd32d,	// (0x0003c92e) list_single_number_pane_cp2_ParamLimits

0xd32d,	// (0x0003c92e) list_single_number_pane_cp2

0xd32d,	// (0x0003c92e) list_single_pane_cp2_ParamLimits

0xd32d,	// (0x0003c92e) list_single_pane_cp2

0x45c2,	// (0x00033bc3) bg_popup_sub_pane_cp22

0x0cf3,	// (0x000302f4) popup_side_volume_key_window_g1

0x0d1d,	// (0x0003031e) popup_side_volume_key_window_t1

0x0d39,	// (0x0003033a) volume_small_pane_cp1

0x385f,	// (0x00032e60) bg_popup_sub_pane_cp24_ParamLimits

0x385f,	// (0x00032e60) bg_popup_sub_pane_cp24

0x45d8,	// (0x00033bd9) fep_china_uni_candidate_pane_ParamLimits

0x45d8,	// (0x00033bd9) fep_china_uni_candidate_pane

0x45ec,	// (0x00033bed) fep_china_uni_entry_pane

0x45fc,	// (0x00033bfd) popup_fep_china_uni_window_g1

0x4618,	// (0x00033c19) fep_china_uni_entry_pane_g1

0x4620,	// (0x00033c21) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0003ed23) fep_china_uni_entry_pane_g

0x4628,	// (0x00033c29) fep_entry_item_pane

0x4632,	// (0x00033c33) fep_candidate_item_pane

0x463a,	// (0x00033c3b) fep_china_uni_candidate_pane_g1

0x4642,	// (0x00033c43) fep_china_uni_candidate_pane_g2

0x464a,	// (0x00033c4b) fep_china_uni_candidate_pane_g3

0x4652,	// (0x00033c53) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0003ed28) fep_china_uni_candidate_pane_g

0x2d49,	// (0x0003234a) fep_entry_item_pane_g1

0x465a,	// (0x00033c5b) fep_entry_item_pane_t1_ParamLimits

0x465a,	// (0x00033c5b) fep_entry_item_pane_t1

0x4670,	// (0x00033c71) fep_candidate_item_pane_t1_ParamLimits

0x4670,	// (0x00033c71) fep_candidate_item_pane_t1

0x4685,	// (0x00033c86) fep_candidate_item_pane_t2_ParamLimits

0x4685,	// (0x00033c86) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003ed31) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003ed31) fep_candidate_item_pane_t

0x2e33,	// (0x00032434) list_highlight_pane_cp31_ParamLimits

0x2e33,	// (0x00032434) list_highlight_pane_cp31

0x4697,	// (0x00033c98) level_1_signal_lsc

0x46a0,	// (0x00033ca1) level_2_signal_lsc

0x46a9,	// (0x00033caa) level_3_signal_lsc

0x46b2,	// (0x00033cb3) level_4_signal_lsc

0x46bb,	// (0x00033cbc) level_5_signal_lsc

0x46c4,	// (0x00033cc5) level_6_signal_lsc

0x46cd,	// (0x00033cce) level_7_signal_lsc

0x46cd,	// (0x00033cce) level_1_battery_lsc

0x46d6,	// (0x00033cd7) level_2_battery_lsc

0x46df,	// (0x00033ce0) level_3_battery_lsc

0x46e8,	// (0x00033ce9) level_4_battery_lsc

0x46f1,	// (0x00033cf2) level_5_battery_lsc

0x46fa,	// (0x00033cfb) level_6_battery_lsc

0x4697,	// (0x00033c98) level_7_battery_lsc

0x4703,	// (0x00033d04) scroll_handle_focus_pane_g1

0x470c,	// (0x00033d0d) scroll_handle_focus_pane_g2

0x4715,	// (0x00033d16) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0003ed36) scroll_handle_focus_pane_g

0xbcc0,	// (0x0003b2c1) list_single_2graphic_pane_g1_ParamLimits

0xbcc0,	// (0x0003b2c1) list_single_2graphic_pane_g1

0xb7a0,	// (0x0003ada1) list_single_2graphic_pane_g2_ParamLimits

0xb7a0,	// (0x0003ada1) list_single_2graphic_pane_g2

0x1724,	// (0x00030d25) list_single_2graphic_pane_g3_ParamLimits

0x1724,	// (0x00030d25) list_single_2graphic_pane_g3

0xbccc,	// (0x0003b2cd) list_single_2graphic_pane_g4_ParamLimits

0xbccc,	// (0x0003b2cd) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0003ed3d) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0003ed3d) list_single_2graphic_pane_g

0xbcd8,	// (0x0003b2d9) list_single_2graphic_pane_t1_ParamLimits

0xbcd8,	// (0x0003b2d9) list_single_2graphic_pane_t1

0xbd06,	// (0x0003b307) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbd06,	// (0x0003b307) list_double2_graphic_large_graphic_pane_g1

0xb80b,	// (0x0003ae0c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb80b,	// (0x0003ae0c) list_double2_graphic_large_graphic_pane_g2

0xb81c,	// (0x0003ae1d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb81c,	// (0x0003ae1d) list_double2_graphic_large_graphic_pane_g3

0xbd18,	// (0x0003b319) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbd18,	// (0x0003b319) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0003ed46) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0003ed46) list_double2_graphic_large_graphic_pane_g

0xbd24,	// (0x0003b325) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbd24,	// (0x0003b325) list_double2_graphic_large_graphic_pane_t1

0xbd3a,	// (0x0003b33b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbd3a,	// (0x0003b33b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003ed4f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003ed4f) list_double2_graphic_large_graphic_pane_t

0x485d,	// (0x00033e5e) popup_fast_swap_window_ParamLimits

0x485d,	// (0x00033e5e) popup_fast_swap_window

0x4879,	// (0x00033e7a) popup_side_volume_key_window

0x4895,	// (0x00033e96) stacon_top_pane

0x489f,	// (0x00033ea0) status_pane_ParamLimits

0x489f,	// (0x00033ea0) status_pane

0xd3ea,	// (0x0003c9eb) status_small_pane

0x2d53,	// (0x00032354) control_pane

0x2d53,	// (0x00032354) stacon_bottom_pane

0x3e36,	// (0x00033437) scroll_pane_cp121

0x3e2d,	// (0x0003342e) set_content_pane

0x471e,	// (0x00033d1f) bg_active_tab_pane_g1_cp1

0x4727,	// (0x00033d28) bg_active_tab_pane_g2_cp1

0x4730,	// (0x00033d31) bg_active_tab_pane_g3_cp1

0x471e,	// (0x00033d1f) bg_passive_tab_pane_g1_cp1

0x4727,	// (0x00033d28) bg_passive_tab_pane_g2_cp1

0x4730,	// (0x00033d31) bg_passive_tab_pane_g3_cp1

0x4739,	// (0x00033d3a) bg_active_tab_pane_g1_cp2

0x4727,	// (0x00033d28) bg_active_tab_pane_g2_cp2

0x4742,	// (0x00033d43) bg_active_tab_pane_g3_cp2

0x4739,	// (0x00033d3a) bg_passive_tab_pane_g1_cp2

0x4727,	// (0x00033d28) bg_passive_tab_pane_g2_cp2

0x4742,	// (0x00033d43) bg_passive_tab_pane_g3_cp2

0x474b,	// (0x00033d4c) bg_active_tab_pane_g1_cp3

0x4727,	// (0x00033d28) bg_active_tab_pane_g2_cp3

0x4754,	// (0x00033d55) bg_active_tab_pane_g3_cp3

0x474b,	// (0x00033d4c) bg_passive_tab_pane_g1_cp3

0x4727,	// (0x00033d28) bg_passive_tab_pane_g2_cp3

0x4754,	// (0x00033d55) bg_passive_tab_pane_g3_cp3

0x475d,	// (0x00033d5e) bg_active_tab_pane_g1_cp4

0x4727,	// (0x00033d28) bg_active_tab_pane_g2_cp4

0x4768,	// (0x00033d69) bg_active_tab_pane_g3_cp4

0x475d,	// (0x00033d5e) bg_passive_tab_pane_g1_cp4

0x4727,	// (0x00033d28) bg_passive_tab_pane_g2_cp4

0x4768,	// (0x00033d69) bg_passive_tab_pane_g3_cp4

0x47b1,	// (0x00033db2) bg_active_tab_pane_g1_cp5

0x4727,	// (0x00033d28) bg_active_tab_pane_g2_cp5

0x47ba,	// (0x00033dbb) bg_active_tab_pane_g3_cp5

0x47b1,	// (0x00033db2) bg_passive_tab_pane_g1_cp5

0x4727,	// (0x00033d28) bg_passive_tab_pane_g2_cp5

0x47ba,	// (0x00033dbb) bg_passive_tab_pane_g3_cp5

0x6e67,	// (0x00036468) list_set_graphic_pane_ParamLimits

0x6e67,	// (0x00036468) list_set_graphic_pane

0x2d53,	// (0x00032354) bg_set_opt_pane_cp4

0xd3ba,	// (0x0003c9bb) list_set_graphic_pane_g1_ParamLimits

0xd3ba,	// (0x0003c9bb) list_set_graphic_pane_g1

0xd3c6,	// (0x0003c9c7) list_set_graphic_pane_g2_ParamLimits

0xd3c6,	// (0x0003c9c7) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003ed54) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003ed54) list_set_graphic_pane_g

0x0009,

0xfabc,	// (0x0003f0bd) volume_small_pane_cp_g

0x4810,	// (0x00033e11) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4810,	// (0x00033e11) list_double2_large_graphic_pane_g1_cp2

0x481c,	// (0x00033e1d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x481c,	// (0x00033e1d) list_double2_large_graphic_pane_g2_cp2

0x482d,	// (0x00033e2e) list_double2_large_graphic_pane_g3_cp2

0x4835,	// (0x00033e36) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4835,	// (0x00033e36) list_double2_large_graphic_pane_t1_cp2

0x484b,	// (0x00033e4c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x484b,	// (0x00033e4c) list_double2_large_graphic_pane_t2_cp2

0x641b,	// (0x00035a1c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x641b,	// (0x00035a1c) list_double_large_graphic_pane_g1_cp2

0x642c,	// (0x00035a2d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x642c,	// (0x00035a2d) list_double_large_graphic_pane_g2_cp2

0x49c6,	// (0x00033fc7) list_double_large_graphic_pane_g3_cp2

0x643d,	// (0x00035a3e) list_double_large_graphic_pane_g4_cp

0x6445,	// (0x00035a46) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6445,	// (0x00035a46) list_double_large_graphic_pane_t1_cp2

0x645c,	// (0x00035a5d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x645c,	// (0x00035a5d) list_double_large_graphic_pane_t2_cp2

0x48b8,	// (0x00033eb9) list_double2_graphic_pane_g1_cp2_ParamLimits

0x48b8,	// (0x00033eb9) list_double2_graphic_pane_g1_cp2

0x48c6,	// (0x00033ec7) list_double2_graphic_pane_g2_cp2_ParamLimits

0x48c6,	// (0x00033ec7) list_double2_graphic_pane_g2_cp2

0x48d7,	// (0x00033ed8) list_double2_graphic_pane_g3_cp2

0x48e1,	// (0x00033ee2) list_double2_graphic_pane_t1_cp2_ParamLimits

0x48e1,	// (0x00033ee2) list_double2_graphic_pane_t1_cp2

0x48f7,	// (0x00033ef8) list_double2_graphic_pane_t2_cp2_ParamLimits

0x48f7,	// (0x00033ef8) list_double2_graphic_pane_t2_cp2

0x4909,	// (0x00033f0a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4909,	// (0x00033f0a) list_single_number_heading_pane_g1_cp2

0x4915,	// (0x00033f16) list_single_number_heading_pane_g2_cp2

0x491d,	// (0x00033f1e) list_single_number_heading_pane_t1_cp2_ParamLimits

0x491d,	// (0x00033f1e) list_single_number_heading_pane_t1_cp2

0x4933,	// (0x00033f34) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4933,	// (0x00033f34) list_single_number_heading_pane_t2_cp2

0x4945,	// (0x00033f46) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4945,	// (0x00033f46) list_single_number_heading_pane_t3_cp2

0x4909,	// (0x00033f0a) list_single_heading_pane_g1_cp2_ParamLimits

0x4909,	// (0x00033f0a) list_single_heading_pane_g1_cp2

0x4915,	// (0x00033f16) list_single_heading_pane_g2_cp2

0x491d,	// (0x00033f1e) list_single_heading_pane_t1_cp2_ParamLimits

0x491d,	// (0x00033f1e) list_single_heading_pane_t1_cp2

0x6223,	// (0x00035824) list_single_heading_pane_t2_cp2_ParamLimits

0x6223,	// (0x00035824) list_single_heading_pane_t2_cp2

0x616b,	// (0x0003576c) list_double_graphic_pane_g1_cp2_ParamLimits

0x616b,	// (0x0003576c) list_double_graphic_pane_g1_cp2

0x6177,	// (0x00035778) list_double_graphic_pane_g2_cp2_ParamLimits

0x6177,	// (0x00035778) list_double_graphic_pane_g2_cp2

0x6186,	// (0x00035787) list_double_graphic_pane_g3_cp2

0x618e,	// (0x0003578f) list_double_graphic_pane_t1_cp2_ParamLimits

0x618e,	// (0x0003578f) list_double_graphic_pane_t1_cp2

0x61a4,	// (0x000357a5) list_double_graphic_pane_t2_cp2_ParamLimits

0x61a4,	// (0x000357a5) list_double_graphic_pane_t2_cp2

0x49ba,	// (0x00033fbb) list_double_number_pane_g1_cp2_ParamLimits

0x49ba,	// (0x00033fbb) list_double_number_pane_g1_cp2

0x49c6,	// (0x00033fc7) list_double_number_pane_g2_cp2

0x612f,	// (0x00035730) list_double_number_pane_t1_cp2_ParamLimits

0x612f,	// (0x00035730) list_double_number_pane_t1_cp2

0x6143,	// (0x00035744) list_double_number_pane_t2_cp2_ParamLimits

0x6143,	// (0x00035744) list_double_number_pane_t2_cp2

0x6159,	// (0x0003575a) list_double_number_pane_t3_cp2_ParamLimits

0x6159,	// (0x0003575a) list_double_number_pane_t3_cp2

0x600c,	// (0x0003560d) list_single_graphic_pane_g1_cp2_ParamLimits

0x600c,	// (0x0003560d) list_single_graphic_pane_g1_cp2

0x4a1e,	// (0x0003401f) list_single_graphic_pane_g2_cp2_ParamLimits

0x4a1e,	// (0x0003401f) list_single_graphic_pane_g2_cp2

0x4a2a,	// (0x0003402b) list_single_graphic_pane_g3_cp2

0x5fe2,	// (0x000355e3) list_single_graphic_pane_t1_cp2_ParamLimits

0x5fe2,	// (0x000355e3) list_single_graphic_pane_t1_cp2

0x4a1e,	// (0x0003401f) list_single_number_pane_g1_cp2_ParamLimits

0x4a1e,	// (0x0003401f) list_single_number_pane_g1_cp2

0x4a2a,	// (0x0003402b) list_single_number_pane_g2_cp2

0x5fe2,	// (0x000355e3) list_single_number_pane_t1_cp2_ParamLimits

0x5fe2,	// (0x000355e3) list_single_number_pane_t1_cp2

0x5ff8,	// (0x000355f9) list_single_number_pane_t2_cp2_ParamLimits

0x5ff8,	// (0x000355f9) list_single_number_pane_t2_cp2

0x481c,	// (0x00033e1d) list_double2_pane_g1_cp2_ParamLimits

0x481c,	// (0x00033e1d) list_double2_pane_g1_cp2

0x482d,	// (0x00033e2e) list_double2_pane_g2_cp2

0x4992,	// (0x00033f93) list_double2_pane_t1_cp2_ParamLimits

0x4992,	// (0x00033f93) list_double2_pane_t1_cp2

0x49a8,	// (0x00033fa9) list_double2_pane_t2_cp2_ParamLimits

0x49a8,	// (0x00033fa9) list_double2_pane_t2_cp2

0x49ba,	// (0x00033fbb) list_double_pane_g1_cp2_ParamLimits

0x49ba,	// (0x00033fbb) list_double_pane_g1_cp2

0x49c6,	// (0x00033fc7) list_double_pane_g2_cp2

0x49ce,	// (0x00033fcf) list_double_pane_t1_cp2_ParamLimits

0x49ce,	// (0x00033fcf) list_double_pane_t1_cp2

0x49e4,	// (0x00033fe5) list_double_pane_t2_cp2_ParamLimits

0x49e4,	// (0x00033fe5) list_double_pane_t2_cp2

0x4a0e,	// (0x0003400f) list_single_pane_cp2_g3

0x4a1e,	// (0x0003401f) list_single_pane_g1_cp2_ParamLimits

0x4a1e,	// (0x0003401f) list_single_pane_g1_cp2

0x4a2a,	// (0x0003402b) list_single_pane_g2_cp2

0x4a32,	// (0x00034033) list_single_pane_t1_cp2_ParamLimits

0x4a32,	// (0x00034033) list_single_pane_t1_cp2

0x4a4a,	// (0x0003404b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4a4a,	// (0x0003404b) list_single_large_graphic_pane_g1_cp2

0x4a56,	// (0x00034057) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4a56,	// (0x00034057) list_single_large_graphic_pane_g2_cp2

0x4a62,	// (0x00034063) list_single_large_graphic_pane_g3_cp2

0x4a6a,	// (0x0003406b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4a6a,	// (0x0003406b) list_single_large_graphic_pane_g4_cp1

0x4a84,	// (0x00034085) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4a84,	// (0x00034085) list_single_large_graphic_pane_t1_cp2

0x5fae,	// (0x000355af) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5fae,	// (0x000355af) list_single_graphic_heading_pane_g1_cp2

0x5f7b,	// (0x0003557c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5f7b,	// (0x0003557c) list_single_graphic_heading_pane_g4_cp2

0x4a2a,	// (0x0003402b) list_single_graphic_heading_pane_g5_cp2

0x5fba,	// (0x000355bb) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5fba,	// (0x000355bb) list_single_graphic_heading_pane_t1_cp2

0x5fd0,	// (0x000355d1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5fd0,	// (0x000355d1) list_single_graphic_heading_pane_t2_cp2

0x5f6f,	// (0x00035570) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5f6f,	// (0x00035570) list_single_2graphic_pane_g1_cp2

0x5f7b,	// (0x0003557c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5f7b,	// (0x0003557c) list_single_2graphic_pane_g2_cp2

0x4a2a,	// (0x0003402b) list_single_2graphic_pane_g3_cp2

0x5f8c,	// (0x0003558d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5f8c,	// (0x0003558d) list_single_2graphic_pane_g4_cp2

0x5f98,	// (0x00035599) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5f98,	// (0x00035599) list_single_2graphic_pane_t1_cp2

0x2d49,	// (0x0003234a) list_highlight_pane_g10_cp1

0x5b47,	// (0x00035148) list_highlight_pane_g1_cp1

0x5b4f,	// (0x00035150) list_highlight_pane_g2_cp1

0x5b57,	// (0x00035158) list_highlight_pane_g3_cp1

0x5b5f,	// (0x00035160) list_highlight_pane_g4_cp1

0x5b67,	// (0x00035168) list_highlight_pane_g5_cp1

0x5b6f,	// (0x00035170) list_highlight_pane_g6_cp1

0x5b77,	// (0x00035178) list_highlight_pane_g7_cp1

0x5b7f,	// (0x00035180) list_highlight_pane_g8_cp1

0x5b87,	// (0x00035188) list_highlight_pane_g9_cp1

0xda2c,	// (0x0003d02d) form_field_slider_pane_t3

0xda3a,	// (0x0003d03b) form_field_slider_pane_t4

0x5a83,	// (0x00035084) slider_form_pane_ParamLimits

0x5a83,	// (0x00035084) slider_form_pane

0x2d53,	// (0x00032354) control_abbreviations

0x2d53,	// (0x00032354) control_conventions

0x2d53,	// (0x00032354) control_definitions

0x2d53,	// (0x00032354) format_table_attribute

0x626d,	// (0x0003586e) bg_popup_preview_window_pane_g9

0x2d53,	// (0x00032354) format_table_data2

0x2d53,	// (0x00032354) format_table_data3

0x2d53,	// (0x00032354) format_table_data_example

0x0008,

0x2d53,	// (0x00032354) intro_purpose

0xf8ea,	// (0x0003eeeb) bg_popup_preview_window_pane_g

0x2d53,	// (0x00032354) texts_category

0x2d53,	// (0x00032354) texts_graphics

0x4a9a,	// (0x0003409b) text_digital

0x4aa9,	// (0x000340aa) text_primary

0x4ab8,	// (0x000340b9) text_primary_small

0x4ac7,	// (0x000340c8) text_secondary

0x4ad6,	// (0x000340d7) text_title

0x69a8,	// (0x00035fa9) bg_passive_tab_pane_g1_cp3_srt

0x4727,	// (0x00033d28) bg_passive_tab_pane_g2_cp3_srt

0x69b1,	// (0x00035fb2) bg_passive_tab_pane_g3_cp3_srt

0x385f,	// (0x00032e60) bg_active_tab_pane_cp3_srt_ParamLimits

0x385f,	// (0x00032e60) bg_active_tab_pane_cp3_srt

0x69ba,	// (0x00035fbb) tabs_4_active_pane_srt_g1

0xdd6f,	// (0x0003d370) tabs_4_active_pane_srt_t1_ParamLimits

0xdd6f,	// (0x0003d370) tabs_4_active_pane_srt_t1

0x69a8,	// (0x00035fa9) bg_active_tab_pane_g1_cp3_copy1

0x4727,	// (0x00033d28) bg_active_tab_pane_g2_cp3_copy1

0x69b1,	// (0x00035fb2) bg_active_tab_pane_g3_cp3_copy1

0x2e33,	// (0x00032434) tabs_2_long_active_pane_srt_ParamLimits

0x2e33,	// (0x00032434) tabs_2_long_active_pane_srt

0x2e33,	// (0x00032434) tabs_2_long_passive_pane_srt_ParamLimits

0x2e33,	// (0x00032434) tabs_2_long_passive_pane_srt

0x4e23,	// (0x00034424) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4e23,	// (0x00034424) bg_passive_tab_pane_cp4_srt

0x669c,	// (0x00035c9d) bg_passive_tab_pane_g1_cp4_srt

0x4727,	// (0x00033d28) bg_passive_tab_pane_g2_cp4_srt

0x66a5,	// (0x00035ca6) bg_passive_tab_pane_g3_cp4_srt

0x2e33,	// (0x00032434) bg_active_tab_pane_cp4_srt_ParamLimits

0x2e33,	// (0x00032434) bg_active_tab_pane_cp4_srt

0xdb99,	// (0x0003d19a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdb99,	// (0x0003d19a) tabs_2_long_active_pane_srt_t1

0x669c,	// (0x00035c9d) bg_active_tab_pane_g1_cp4_srt

0x4727,	// (0x00033d28) bg_active_tab_pane_g2_cp4_srt

0x66a5,	// (0x00035ca6) bg_active_tab_pane_g3_cp4_srt

0x385f,	// (0x00032e60) tabs_3_long_active_pane_srt_ParamLimits

0x385f,	// (0x00032e60) tabs_3_long_active_pane_srt

0x385f,	// (0x00032e60) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x385f,	// (0x00032e60) tabs_3_long_passive_pane_cp_srt

0x385f,	// (0x00032e60) tabs_3_long_passive_pane_srt_ParamLimits

0x385f,	// (0x00032e60) tabs_3_long_passive_pane_srt

0x4e23,	// (0x00034424) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4e23,	// (0x00034424) bg_passive_tab_pane_cp5_srt

0x47b1,	// (0x00033db2) bg_passive_tab_pane_g1_cp5_srt

0x4727,	// (0x00033d28) bg_passive_tab_pane_g2_cp5_srt

0x47ba,	// (0x00033dbb) bg_passive_tab_pane_g3_cp5_srt

0x2e33,	// (0x00032434) bg_active_tab_pane_cp5_srt_ParamLimits

0x2e33,	// (0x00032434) bg_active_tab_pane_cp5_srt

0xdb83,	// (0x0003d184) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdb83,	// (0x0003d184) tabs_3_long_active_pane_srt_t1

0x47b1,	// (0x00033db2) bg_active_tab_pane_g1_cp5_srt

0x4727,	// (0x00033d28) bg_active_tab_pane_g2_cp5_srt

0x47ba,	// (0x00033dbb) bg_active_tab_pane_g3_cp5_srt

0x667c,	// (0x00035c7d) navi_text_pane_srt_t1

0x6674,	// (0x00035c75) navi_icon_pane_srt_g1

0x4c9f,	// (0x000342a0) midp_editing_number_pane_srt

0x4ae5,	// (0x000340e6) midp_ticker_pane_srt

0x4ca7,	// (0x000342a8) midp_ticker_pane_srt_g1

0x4caf,	// (0x000342b0) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003ed73) midp_ticker_pane_srt_g

0x4cb7,	// (0x000342b8) midp_ticker_pane_srt_t1

0x6665,	// (0x00035c66) midp_editing_number_pane_t1_copy1

0x4e23,	// (0x00034424) listscroll_midp_pane

0x4e23,	// (0x00034424) midp_form_pane

0x4b51,	// (0x00034152) midp_info_popup_window_ParamLimits

0x4b51,	// (0x00034152) midp_info_popup_window

0x3eff,	// (0x00033500) bg_popup_sub_pane_cp50_ParamLimits

0x3eff,	// (0x00033500) bg_popup_sub_pane_cp50

0x577f,	// (0x00034d80) listscroll_midp_info_pane_ParamLimits

0x577f,	// (0x00034d80) listscroll_midp_info_pane

0x5767,	// (0x00034d68) listscroll_form_midp_pane_ParamLimits

0x5767,	// (0x00034d68) listscroll_form_midp_pane

0x5773,	// (0x00034d74) scroll_bar_cp050

0xda20,	// (0x0003d021) list_midp_pane

0x73fe,	// (0x000369ff) signal_pane_g2_cp

0x5681,	// (0x00034c82) listscroll_midp_info_pane_t1_ParamLimits

0x5681,	// (0x00034c82) listscroll_midp_info_pane_t1

0x5699,	// (0x00034c9a) listscroll_midp_info_pane_t2_ParamLimits

0x5699,	// (0x00034c9a) listscroll_midp_info_pane_t2

0x56d7,	// (0x00034cd8) listscroll_midp_info_pane_t3_ParamLimits

0x56d7,	// (0x00034cd8) listscroll_midp_info_pane_t3

0x5711,	// (0x00034d12) listscroll_midp_info_pane_t4_ParamLimits

0x5711,	// (0x00034d12) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0003ee26) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0003ee26) listscroll_midp_info_pane_t

0x3fc3,	// (0x000335c4) scroll_pane_cp21

0x561f,	// (0x00034c20) form_midp_field_choice_group_pane

0x5628,	// (0x00034c29) form_midp_field_text_pane

0x5667,	// (0x00034c68) form_midp_field_time_pane

0x566f,	// (0x00034c70) form_midp_gauge_slider_pane

0x5678,	// (0x00034c79) form_midp_gauge_wait_pane

0x2d53,	// (0x00032354) form_midp_image_pane

0xc5fb,	// (0x0003bbfc) list_single_midp_pane_ParamLimits

0xc5fb,	// (0x0003bbfc) list_single_midp_pane

0xd9fe,	// (0x0003cfff) form_midp_field_text_pane_t1

0x53a1,	// (0x000349a2) input_focus_pane_cp050

0x560e,	// (0x00034c0f) list_midp_form_text_pane

0x55a6,	// (0x00034ba7) form_midp_field_choice_group_pane_t1

0x55b4,	// (0x00034bb5) input_focus_pane_cp051

0x55c8,	// (0x00034bc9) list_midp_choice_pane

0x2d53,	// (0x00032354) status_idle_pane

0x558a,	// (0x00034b8b) form_midp_field_time_pane_t1

0x2d49,	// (0x0003234a) wait_anim_pane_g2_copy1

0x5598,	// (0x00034b99) form_midp_field_time_pane_t2

0x0001,

0x4bff,	// (0x00034200) aid_navinavi_width_2_pane

0xf820,	// (0x0003ee21) form_midp_field_time_pane_t

0x2d53,	// (0x00032354) input_focus_pane_cp052

0x2d53,	// (0x00032354) bg_input_focus_pane_cp040

0x554a,	// (0x00034b4b) form_midp_gauge_slider_pane_t1

0x5558,	// (0x00034b59) form_midp_gauge_slider_pane_t2

0xd9e2,	// (0x0003cfe3) form_midp_gauge_slider_pane_t3

0xd9f0,	// (0x0003cff1) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0003ee18) form_midp_gauge_slider_pane_t

0x5582,	// (0x00034b83) form_midp_slider_pane

0x2e33,	// (0x00032434) bg_input_focus_pane_cp041_ParamLimits

0x2e33,	// (0x00032434) bg_input_focus_pane_cp041

0x5517,	// (0x00034b18) form_midp_gauge_wait_pane_t1_ParamLimits

0x5517,	// (0x00034b18) form_midp_gauge_wait_pane_t1

0x5529,	// (0x00034b2a) form_midp_gauge_wait_pane_t2_ParamLimits

0x5529,	// (0x00034b2a) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0003ee13) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0003ee13) form_midp_gauge_wait_pane_t

0x553b,	// (0x00034b3c) form_midp_wait_pane_ParamLimits

0x553b,	// (0x00034b3c) form_midp_wait_pane

0x54e1,	// (0x00034ae2) form_midp_image_pane_g1

0x54ea,	// (0x00034aeb) form_midp_image_pane_t1

0x54f9,	// (0x00034afa) form_midp_image_pane_t2

0x5508,	// (0x00034b09) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0003ee0c) form_midp_image_pane_t

0x54d8,	// (0x00034ad9) list_single_midp_pane_g1

0x1904,	// (0x00030f05) list_single_midp_pane_t1

0xd9cd,	// (0x0003cfce) list_midp_form_item_pane_ParamLimits

0xd9cd,	// (0x0003cfce) list_midp_form_item_pane

0x4ba7,	// (0x000341a8) list_midp_form_item_pane_t1

0x4bb6,	// (0x000341b7) midp_ticker_pane_g1

0x4bc2,	// (0x000341c3) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0003ed59) midp_ticker_pane_g

0x4bce,	// (0x000341cf) midp_ticker_pane_t1

0x68b6,	// (0x00035eb7) midp_editing_number_pane_t1

0x6894,	// (0x00035e95) midp_editing_number_pane

0x68a3,	// (0x00035ea4) midp_ticker_pane

0x6655,	// (0x00035c56) ai_message_heading_pane

0x2d53,	// (0x00032354) bg_popup_window_pane_cp14

0x665d,	// (0x00035c5e) listscroll_ai_message_pane

0x65df,	// (0x00035be0) ai_message_heading_pane_g1_ParamLimits

0x65df,	// (0x00035be0) ai_message_heading_pane_g1

0x65eb,	// (0x00035bec) ai_message_heading_pane_g2_ParamLimits

0x65eb,	// (0x00035bec) ai_message_heading_pane_g2

0x65f7,	// (0x00035bf8) ai_message_heading_pane_g3_ParamLimits

0x65f7,	// (0x00035bf8) ai_message_heading_pane_g3

0x6603,	// (0x00035c04) ai_message_heading_pane_g4_ParamLimits

0x6603,	// (0x00035c04) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0003ef4d) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0003ef4d) ai_message_heading_pane_g

0x660f,	// (0x00035c10) ai_message_heading_pane_t1_ParamLimits

0x660f,	// (0x00035c10) ai_message_heading_pane_t1

0x6629,	// (0x00035c2a) ai_message_heading_pane_t2_ParamLimits

0x6629,	// (0x00035c2a) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0003ef56) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0003ef56) ai_message_heading_pane_t

0x663b,	// (0x00035c3c) bg_popup_heading_pane_cp1_ParamLimits

0x663b,	// (0x00035c3c) bg_popup_heading_pane_cp1

0x65cd,	// (0x00035bce) list_ai_message_pane_ParamLimits

0x65cd,	// (0x00035bce) list_ai_message_pane

0x3fc3,	// (0x000335c4) scroll_pane_cp10

0x6569,	// (0x00035b6a) list_ai_message_pane_g1

0x6571,	// (0x00035b72) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0003ef2a) list_ai_message_pane_g

0x6579,	// (0x00035b7a) list_ai_message_pane_t1_ParamLimits

0x6579,	// (0x00035b7a) list_ai_message_pane_t1

0x658e,	// (0x00035b8f) list_ai_message_pane_t2_ParamLimits

0x658e,	// (0x00035b8f) list_ai_message_pane_t2

0x65a3,	// (0x00035ba4) list_ai_message_pane_t3_ParamLimits

0x65a3,	// (0x00035ba4) list_ai_message_pane_t3

0x65b8,	// (0x00035bb9) list_ai_message_pane_t4_ParamLimits

0x65b8,	// (0x00035bb9) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0003ef2f) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0003ef2f) list_ai_message_pane_t

0xdb62,	// (0x0003d163) cell_ai_soft_ind_pane_ParamLimits

0xdb62,	// (0x0003d163) cell_ai_soft_ind_pane

0x4be0,	// (0x000341e1) cell_ai_soft_ind_pane_g1_ParamLimits

0x4be0,	// (0x000341e1) cell_ai_soft_ind_pane_g1

0x2d53,	// (0x00032354) grid_highlight_cp1

0x4bed,	// (0x000341ee) text_secondary_cp56_ParamLimits

0x4bed,	// (0x000341ee) text_secondary_cp56

0x6529,	// (0x00035b2a) example_general_pane_ParamLimits

0x6529,	// (0x00035b2a) example_general_pane

0x6535,	// (0x00035b36) example_parent_pane_g1_ParamLimits

0x6535,	// (0x00035b36) example_parent_pane_g1

0x6541,	// (0x00035b42) example_parent_pane_t1_ParamLimits

0x6541,	// (0x00035b42) example_parent_pane_t1

0xc2a5,	// (0x0003b8a6) popup_preview_text_window_ParamLimits

0xc2a5,	// (0x0003b8a6) popup_preview_text_window

0x4a16,	// (0x00034017) list_single_pane_cp2_g4

0x3915,	// (0x00032f16) bg_popup_preview_window_pane_ParamLimits

0x3915,	// (0x00032f16) bg_popup_preview_window_pane

0x6275,	// (0x00035876) popup_preview_text_window_t1_ParamLimits

0x6275,	// (0x00035876) popup_preview_text_window_t1

0x6293,	// (0x00035894) popup_preview_text_window_t2_ParamLimits

0x6293,	// (0x00035894) popup_preview_text_window_t2

0x62dc,	// (0x000358dd) popup_preview_text_window_t3_ParamLimits

0x62dc,	// (0x000358dd) popup_preview_text_window_t3

0x6321,	// (0x00035922) popup_preview_text_window_t4_ParamLimits

0x6321,	// (0x00035922) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0003eefe) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0003eefe) popup_preview_text_window_t

0x639f,	// (0x000359a0) scroll_pane_cp11

0x532d,	// (0x0003492e) bg_popup_preview_window_pane_g1

0x6235,	// (0x00035836) bg_popup_preview_window_pane_g2

0x623d,	// (0x0003583e) bg_popup_preview_window_pane_g3

0x6245,	// (0x00035846) bg_popup_preview_window_pane_g4

0x624d,	// (0x0003584e) bg_popup_preview_window_pane_g5

0x6255,	// (0x00035856) bg_popup_preview_window_pane_g6

0x625d,	// (0x0003585e) bg_popup_preview_window_pane_g7

0x6265,	// (0x00035866) bg_popup_preview_window_pane_g8

0xf4c8,	// (0x0003eac9) aid_popup_width_pane

0xc221,	// (0x0003b822) popup_midp_note_alarm_window_ParamLimits

0xc221,	// (0x0003b822) popup_midp_note_alarm_window

0x3e47,	// (0x00033448) data_form_pane_ParamLimits

0xbba9,	// (0x0003b1aa) form_field_data_pane_g1

0xbbb3,	// (0x0003b1b4) form_field_data_pane_t1_ParamLimits

0x3e53,	// (0x00033454) input_focus_pane_ParamLimits

0x090f,	// (0x0002ff10) data_form_wide_pane_ParamLimits

0x0920,	// (0x0002ff21) form_field_data_wide_pane_g1

0x092c,	// (0x0002ff2d) form_field_data_wide_pane_t1_ParamLimits

0x3bc4,	// (0x000331c5) input_focus_pane_cp6_ParamLimits

0xd21f,	// (0x0003c820) input_popup_find_pane_g1_ParamLimits

0xd21f,	// (0x0003c820) input_popup_find_pane_g1

0x0ba2,	// (0x000301a3) aid_navi_side_left_pane

0x0bb7,	// (0x000301b8) aid_navi_side_right_pane

0x5c42,	// (0x00035243) bg_popup_window_pane_cp30_ParamLimits

0x5c42,	// (0x00035243) bg_popup_window_pane_cp30

0x5cbc,	// (0x000352bd) popup_midp_note_alarm_window_g1_ParamLimits

0x5cbc,	// (0x000352bd) popup_midp_note_alarm_window_g1

0x5cec,	// (0x000352ed) popup_midp_note_alarm_window_t1_ParamLimits

0x5cec,	// (0x000352ed) popup_midp_note_alarm_window_t1

0x5d8d,	// (0x0003538e) popup_midp_note_alarm_window_t2_ParamLimits

0x5d8d,	// (0x0003538e) popup_midp_note_alarm_window_t2

0x5e3b,	// (0x0003543c) popup_midp_note_alarm_window_t3_ParamLimits

0x5e3b,	// (0x0003543c) popup_midp_note_alarm_window_t3

0x5e6d,	// (0x0003546e) popup_midp_note_alarm_window_t4_ParamLimits

0x5e6d,	// (0x0003546e) popup_midp_note_alarm_window_t4

0x5e93,	// (0x00035494) popup_midp_note_alarm_window_t5_ParamLimits

0x5e93,	// (0x00035494) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0003ee9b) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0003ee9b) popup_midp_note_alarm_window_t

0x5f3f,	// (0x00035540) wait_bar_pane_cp1_ParamLimits

0x5f3f,	// (0x00035540) wait_bar_pane_cp1

0x2d53,	// (0x00032354) wait_anim_pane_copy1

0x2d53,	// (0x00032354) wait_border_pane_copy1

0x5928,	// (0x00034f29) wait_border_pane_g1_copy1

0x0946,	// (0x0002ff47) form_field_popup_pane_g1

0xbbcd,	// (0x0003b1ce) form_field_popup_pane_t1_ParamLimits

0x3e53,	// (0x00033454) input_focus_pane_cp7_ParamLimits

0x3e81,	// (0x00033482) list_form_pane_ParamLimits

0x0966,	// (0x0002ff67) form_field_popup_wide_pane_g1

0x096e,	// (0x0002ff6f) form_field_popup_wide_pane_t1_ParamLimits

0x3e53,	// (0x00033454) input_focus_pane_cp8_ParamLimits

0x3e8d,	// (0x0003348e) list_form_wide_pane_ParamLimits

0x6a40,	// (0x00036041) aid_size_cell_graphic_pane

0xbc4c,	// (0x0003b24d) data_form_pane_t1_ParamLimits

0xc624,	// (0x0003bc25) data_form_wide_pane_t1_ParamLimits

0xd652,	// (0x0003cc53) bg_status_flat_pane

0xcede,	// (0x0003c4df) title_pane_t1_ParamLimits

0x2dfb,	// (0x000323fc) title_pane_t2_ParamLimits

0x2e21,	// (0x00032422) title_pane_t3_ParamLimits

0xf557,	// (0x0003eb58) title_pane_t_ParamLimits

0x443e,	// (0x00033a3f) level_1_signal_ParamLimits

0x4450,	// (0x00033a51) level_2_signal_ParamLimits

0x4463,	// (0x00033a64) level_3_signal_ParamLimits

0x4476,	// (0x00033a77) level_4_signal_ParamLimits

0x4489,	// (0x00033a8a) level_5_signal_ParamLimits

0x449c,	// (0x00033a9d) level_6_signal_ParamLimits

0x44af,	// (0x00033ab0) level_7_signal_ParamLimits

0x443e,	// (0x00033a3f) level_1_battery_ParamLimits

0x4450,	// (0x00033a51) level_2_battery_ParamLimits

0x4463,	// (0x00033a64) level_3_battery_ParamLimits

0x4476,	// (0x00033a77) level_4_battery_ParamLimits

0x4489,	// (0x00033a8a) level_5_battery_ParamLimits

0x449c,	// (0x00033a9d) level_6_battery_ParamLimits

0x44af,	// (0x00033ab0) level_7_battery_ParamLimits

0x5b47,	// (0x00035148) bg_status_flat_pane_g1

0x5b4f,	// (0x00035150) bg_status_flat_pane_g2

0x5b57,	// (0x00035158) bg_status_flat_pane_g3

0x5b5f,	// (0x00035160) bg_status_flat_pane_g4

0x5b67,	// (0x00035168) bg_status_flat_pane_g5

0x5b6f,	// (0x00035170) bg_status_flat_pane_g6

0x5b77,	// (0x00035178) bg_status_flat_pane_g7

0xcf6a,	// (0x0003c56b) tabs_3_active_pane_t1_ParamLimits

0xcf6a,	// (0x0003c56b) tabs_3_passive_pane_t1_ParamLimits

0xcf7c,	// (0x0003c57d) tabs_4_active_pane_t1_ParamLimits

0xcf7c,	// (0x0003c57d) tabs_4_1_passive_pane_t1_ParamLimits

0xd22d,	// (0x0003c82e) tabs_2_active_pane_t1_ParamLimits

0xd22d,	// (0x0003c82e) tabs_2_passive_pane_t1_ParamLimits

0x2e33,	// (0x00032434) bg_active_tab_pane_cp4_ParamLimits

0xd23f,	// (0x0003c840) tabs_2_long_active_pane_t1_ParamLimits

0x4e23,	// (0x00034424) bg_passive_tab_pane_cp4_ParamLimits

0x17db,	// (0x00030ddc) list_single_midp_graphic_pane_t1_ParamLimits

0x2e33,	// (0x00032434) bg_active_tab_pane_cp5_ParamLimits

0xd252,	// (0x0003c853) tabs_3_long_active_pane_t1_ParamLimits

0x4e23,	// (0x00034424) bg_passive_tab_pane_cp5_ParamLimits

0x17db,	// (0x00030ddc) list_single_midp_graphic_pane_t1

0xd652,	// (0x0003cc53) bg_status_flat_pane_ParamLimits

0x4fbd,	// (0x000345be) indicator_pane_cp2_ParamLimits

0x4fbd,	// (0x000345be) indicator_pane_cp2

0xd7d0,	// (0x0003cdd1) navi_pane_srt_ParamLimits

0xd7d0,	// (0x0003cdd1) navi_pane_srt

0x510c,	// (0x0003470d) popup_clock_digital_analogue_window_cp1

0x2f10,	// (0x00032511) indicator_pane_t1

0x4ae5,	// (0x000340e6) copy_highlight_pane

0x4ae5,	// (0x000340e6) cursor_graphics_pane

0x4ae5,	// (0x000340e6) graphic_within_text_pane

0x4ae5,	// (0x000340e6) link_highlight_pane

0x6362,	// (0x00035963) popup_preview_text_window_t5_ParamLimits

0x6362,	// (0x00035963) popup_preview_text_window_t5

0x4c07,	// (0x00034208) cursor_digital_pane

0x4c07,	// (0x00034208) cursor_primary_pane

0x4c18,	// (0x00034219) cursor_primary_small_pane

0x4c20,	// (0x00034221) cursor_secondary_pane

0x4c28,	// (0x00034229) cursor_title_pane

0x4c07,	// (0x00034208) link_highlight_digital_pane

0x4c0f,	// (0x00034210) link_highlight_primary_pane

0x4c18,	// (0x00034219) link_highlight_primary_small_pane

0x4c20,	// (0x00034221) link_highlight_secondary_pane

0x4c28,	// (0x00034229) link_highlight_title_pane

0x4c07,	// (0x00034208) copy_highlight_digital_pane

0x4c07,	// (0x00034208) copy_highlight_primary_pane

0x4c18,	// (0x00034219) copy_highlight_primary_small_pane

0x4c20,	// (0x00034221) copy_highlight_secondary_pane

0x4c28,	// (0x00034229) copy_highlight_title_pane

0x4c20,	// (0x00034221) graphic_text_digital_pane

0x5be5,	// (0x000351e6) graphic_text_primary_pane

0x5bee,	// (0x000351ef) graphic_text_primary_small_pane

0x4c18,	// (0x00034219) graphic_text_secondary_pane

0x4c07,	// (0x00034208) graphic_text_title_pane

0xd48e,	// (0x0003ca8f) cursor_primary_pane_g1

0x5bd7,	// (0x000351d8) cursor_text_primary_t1

0xda5c,	// (0x0003d05d) cursor_primary_small_pane_g1

0x5bc9,	// (0x000351ca) cursor_text_primary_small_t1

0xda52,	// (0x0003d053) cursor_primary_small_pane_g1_copy1

0x5bb1,	// (0x000351b2) cursor_text_primary_small_t1_copy1

0x5b8f,	// (0x00035190) cursor_text_title_t1

0xda48,	// (0x0003d049) cursor_title_pane_g1

0xd48e,	// (0x0003ca8f) cursor_digital_pane_g1

0x4c3a,	// (0x0003423b) cursor_text_digital_t1

0x4c5f,	// (0x00034260) link_highlight_primary_pane_g1

0x5b38,	// (0x00035139) link_highlight_primary_pane_t1

0x4c48,	// (0x00034249) link_highlight_primary_small_pane_g1

0x4c50,	// (0x00034251) link_highlight_primary_small_pane_t1

0x4c5f,	// (0x00034260) link_highlight_secondary_pane_g1

0x4c67,	// (0x00034268) link_highlight_secondary_pane_t1

0x5aac,	// (0x000350ad) link_highlight_title_pane_g1

0x5ab4,	// (0x000350b5) link_highlight_title_pane_t1

0x5a95,	// (0x00035096) link_highlight_digital_pane_g1

0x5a9d,	// (0x0003509e) link_highlight_digital_pane_t1

0x596d,	// (0x00034f6e) copy_highlight_primary_pane_g1

0x5975,	// (0x00034f76) copy_highlight_primary_pane_t1

0x5947,	// (0x00034f48) copy_highlight_primary_small_pane_g1

0x595e,	// (0x00034f5f) copy_highlight_primary_small_pane_t1

0x4c76,	// (0x00034277) copy_highlight_secondary_pane_g1

0x4c7e,	// (0x0003427f) copy_highlight_secondary_pane_t1

0x5947,	// (0x00034f48) copy_highlight_title_pane_g1

0x594f,	// (0x00034f50) copy_highlight_title_pane_t1

0x596d,	// (0x00034f6e) copy_highlight_digital_pane_g1

0x6c0b,	// (0x0003620c) copy_highlight_digital_pane_t1

0x6b5f,	// (0x00036160) graphic_text_primary_pane_g1

0x6bef,	// (0x000361f0) graphic_text_primary_pane_t1

0x6bfd,	// (0x000361fe) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0003efca) graphic_text_primary_pane_t

0x6bcb,	// (0x000361cc) graphic_text_primary_small_pane_g1

0x6bd3,	// (0x000361d4) graphic_text_primary_small_pane_t1

0x6be1,	// (0x000361e2) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0003efc5) graphic_text_primary_small_pane_t

0x6ba7,	// (0x000361a8) graphic_text_secondary_pane_g1

0x6baf,	// (0x000361b0) graphic_text_secondary_pane_t1

0x6bbd,	// (0x000361be) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0003efc0) graphic_text_secondary_pane_t

0x6b83,	// (0x00036184) graphic_text_title_pane_g1

0x6b8b,	// (0x0003618c) graphic_text_title_pane_t1

0x6b99,	// (0x0003619a) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0003efbb) graphic_text_title_pane_t

0x6b5f,	// (0x00036160) graphic_text_digital_pane_g1

0x6b67,	// (0x00036168) graphic_text_digital_pane_t1

0x6b75,	// (0x00036176) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0003efb6) graphic_text_digital_pane_t

0x2e33,	// (0x00032434) navi_icon_pane_srt_ParamLimits

0x2e33,	// (0x00032434) navi_icon_pane_srt

0x2d53,	// (0x00032354) navi_midp_pane_srt

0x2d53,	// (0x00032354) navi_navi_pane_srt

0x2e33,	// (0x00032434) navi_text_pane_srt_ParamLimits

0x2e33,	// (0x00032434) navi_text_pane_srt

0x6b2a,	// (0x0003612b) navi_navi_icon_text_pane_srt

0x6b32,	// (0x00036133) navi_navi_pane_srt_g1_ParamLimits

0x6b32,	// (0x00036133) navi_navi_pane_srt_g1

0x6b44,	// (0x00036145) navi_navi_pane_srt_g2_ParamLimits

0x6b44,	// (0x00036145) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0003efb1) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0003efb1) navi_navi_pane_srt_g

0x6b56,	// (0x00036157) navi_navi_tabs_pane_srt

0x6b2a,	// (0x0003612b) navi_navi_text_pane_srt

0x6b2a,	// (0x0003612b) navi_navi_volume_pane_srt

0x6b1b,	// (0x0003611c) navi_navi_text_pane_srt_t1

0x1c62,	// (0x00031263) navi_navi_volume_pane_srt_g1

0x1c6a,	// (0x0003126b) volume_small_pane_srt_ParamLimits

0x1c6a,	// (0x0003126b) volume_small_pane_srt

0x0f0c,	// (0x0003050d) volume_small_pane_srt_g1_ParamLimits

0x0f0c,	// (0x0003050d) volume_small_pane_srt_g1

0x0f1c,	// (0x0003051d) volume_small_pane_srt_g2_ParamLimits

0x0f1c,	// (0x0003051d) volume_small_pane_srt_g2

0x0f2d,	// (0x0003052e) volume_small_pane_srt_g3_ParamLimits

0x0f2d,	// (0x0003052e) volume_small_pane_srt_g3

0x0f3e,	// (0x0003053f) volume_small_pane_srt_g4_ParamLimits

0x0f3e,	// (0x0003053f) volume_small_pane_srt_g4

0x0f4f,	// (0x00030550) volume_small_pane_srt_g5_ParamLimits

0x0f4f,	// (0x00030550) volume_small_pane_srt_g5

0x0f60,	// (0x00030561) volume_small_pane_srt_g6_ParamLimits

0x0f60,	// (0x00030561) volume_small_pane_srt_g6

0x0f71,	// (0x00030572) volume_small_pane_srt_g7_ParamLimits

0x0f71,	// (0x00030572) volume_small_pane_srt_g7

0x0f82,	// (0x00030583) volume_small_pane_srt_g8_ParamLimits

0x0f82,	// (0x00030583) volume_small_pane_srt_g8

0x0f93,	// (0x00030594) volume_small_pane_srt_g9_ParamLimits

0x0f93,	// (0x00030594) volume_small_pane_srt_g9

0x0fa4,	// (0x000305a5) volume_small_pane_srt_g10_ParamLimits

0x0fa4,	// (0x000305a5) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003ed5e) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003ed5e) volume_small_pane_srt_g

0x39be,	// (0x00032fbf) query_popup_data_pane_cp2

0x6b01,	// (0x00036102) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6b01,	// (0x00036102) navi_navi_icon_text_pane_srt_t1

0x5be5,	// (0x000351e6) navi_tabs_2_long_pane_srt

0x5be5,	// (0x000351e6) navi_tabs_2_pane_srt

0x5be5,	// (0x000351e6) navi_tabs_3_long_pane_srt

0x5be5,	// (0x000351e6) navi_tabs_3_pane_srt

0x5be5,	// (0x000351e6) navi_tabs_4_pane_srt

0x1c42,	// (0x00031243) tabs_2_active_pane_srt_ParamLimits

0x1c42,	// (0x00031243) tabs_2_active_pane_srt

0x1c52,	// (0x00031253) tabs_2_passive_pane_srt_ParamLimits

0x1c52,	// (0x00031253) tabs_2_passive_pane_srt

0x53a1,	// (0x000349a2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x53a1,	// (0x000349a2) bg_passive_tab_pane_cp1_srt

0x6acd,	// (0x000360ce) bg_passive_tab_pane_g1_cp1_srt

0x4727,	// (0x00033d28) bg_passive_tab_pane_g2_cp1_srt

0x6ad6,	// (0x000360d7) bg_passive_tab_pane_g3_cp1_srt

0x385f,	// (0x00032e60) bg_active_tab_pane_cp1_srt_ParamLimits

0x385f,	// (0x00032e60) bg_active_tab_pane_cp1_srt

0x6adf,	// (0x000360e0) tabs_2_active_pane_srt_g1

0xde12,	// (0x0003d413) tabs_2_active_pane_srt_t1_ParamLimits

0xde12,	// (0x0003d413) tabs_2_active_pane_srt_t1

0x6acd,	// (0x000360ce) bg_active_tab_pane_g1_cp1_srt

0x4727,	// (0x00033d28) bg_active_tab_pane_g2_cp1_srt

0x6ad6,	// (0x000360d7) bg_active_tab_pane_g3_cp1_srt

0x1c0f,	// (0x00031210) tabs_3_active_pane_srt_ParamLimits

0x1c0f,	// (0x00031210) tabs_3_active_pane_srt

0x1c20,	// (0x00031221) tabs_3_passive_pane_cp_srt_ParamLimits

0x1c20,	// (0x00031221) tabs_3_passive_pane_cp_srt

0x1c31,	// (0x00031232) tabs_3_passive_pane_srt_ParamLimits

0x1c31,	// (0x00031232) tabs_3_passive_pane_srt

0x53a1,	// (0x000349a2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x53a1,	// (0x000349a2) bg_passive_tab_pane_cp2_srt

0x4c8d,	// (0x0003428e) bg_passive_tab_pane_g1_cp2_srt

0x4727,	// (0x00033d28) bg_passive_tab_pane_g2_cp2_srt

0x4c96,	// (0x00034297) bg_passive_tab_pane_g3_cp2_srt

0x385f,	// (0x00032e60) bg_active_tab_pane_cp2_srt_ParamLimits

0x385f,	// (0x00032e60) bg_active_tab_pane_cp2_srt

0x6ab3,	// (0x000360b4) tabs_3_active_pane_srt_g1

0xddfc,	// (0x0003d3fd) tabs_3_active_pane_srt_t1_ParamLimits

0xddfc,	// (0x0003d3fd) tabs_3_active_pane_srt_t1

0x4c8d,	// (0x0003428e) bg_active_tab_pane_g1_cp2_srt

0x4727,	// (0x00033d28) bg_active_tab_pane_g2_cp2_srt

0x4c96,	// (0x00034297) bg_active_tab_pane_g3_cp2_srt

0x1bc7,	// (0x000311c8) tabs_4_active_pane_srt_ParamLimits

0x1bc7,	// (0x000311c8) tabs_4_active_pane_srt

0x1bd9,	// (0x000311da) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1bd9,	// (0x000311da) tabs_4_passive_pane_cp2_srt

0x1109,	// (0x0003070a) aid_size_cell_toolbar

0x670d,	// (0x00035d0e) main_idle_act_pane_ParamLimits

0x12c8,	// (0x000308c9) popup_large_graphic_colour_window_ParamLimits

0xc531,	// (0x0003bb32) popup_toolbar_window_ParamLimits

0xc531,	// (0x0003bb32) popup_toolbar_window

0x68c5,	// (0x00035ec6) list_single_graphic_2heading_pane_ParamLimits

0x68c5,	// (0x00035ec6) list_single_graphic_2heading_pane

0x41f3,	// (0x000337f4) aid_size_cell_apps_grid_lsc_pane

0x4205,	// (0x00033806) aid_size_cell_apps_grid_prt_pane

0x4e23,	// (0x00034424) bg_wml_button_pane_cp1_ParamLimits

0x4e23,	// (0x00034424) bg_wml_button_pane_cp1

0xd9fe,	// (0x0003cfff) form_midp_field_text_pane_t1_ParamLimits

0x53a1,	// (0x000349a2) input_focus_pane_cp050_ParamLimits

0x560e,	// (0x00034c0f) list_midp_form_text_pane_ParamLimits

0x55b4,	// (0x00034bb5) input_focus_pane_cp051_ParamLimits

0x55c8,	// (0x00034bc9) list_midp_choice_pane_ParamLimits

0xd99b,	// (0x0003cf9c) list_single_2graphic_pane_cp3_ParamLimits

0xd99b,	// (0x0003cf9c) list_single_2graphic_pane_cp3

0xd9ae,	// (0x0003cfaf) list_single_midp_graphic_pane_ParamLimits

0xd9ae,	// (0x0003cfaf) list_single_midp_graphic_pane

0xf4e4,	// (0x0003eae5) list_single_graphic_2heading_pane_g1_ParamLimits

0xf4e4,	// (0x0003eae5) list_single_graphic_2heading_pane_g1

0xf4f0,	// (0x0003eaf1) list_single_graphic_2heading_pane_g4_ParamLimits

0xf4f0,	// (0x0003eaf1) list_single_graphic_2heading_pane_g4

0xf4fc,	// (0x0003eafd) list_single_graphic_2heading_pane_g5_ParamLimits

0xf4fc,	// (0x0003eafd) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003edb1) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003edb1) list_single_graphic_2heading_pane_g

0xf508,	// (0x0003eb09) list_single_graphic_2heading_pane_t1_ParamLimits

0xf508,	// (0x0003eb09) list_single_graphic_2heading_pane_t1

0xf51c,	// (0x0003eb1d) list_single_graphic_2heading_pane_t2_ParamLimits

0xf51c,	// (0x0003eb1d) list_single_graphic_2heading_pane_t2

0xf536,	// (0x0003eb37) list_single_graphic_2heading_pane_t3_ParamLimits

0xf536,	// (0x0003eb37) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003edb8) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003edb8) list_single_graphic_2heading_pane_t

0x526b,	// (0x0003486c) bg_popup_sub_pane_cp2

0x5295,	// (0x00034896) grid_toobar_pane

0x16dc,	// (0x00030cdd) cell_toolbar_pane_ParamLimits

0x16dc,	// (0x00030cdd) cell_toolbar_pane

0x52d1,	// (0x000348d2) cell_toolbar_pane_g1_ParamLimits

0x52d1,	// (0x000348d2) cell_toolbar_pane_g1

0x52e5,	// (0x000348e6) cell_toolbar_pane_g2_ParamLimits

0x52e5,	// (0x000348e6) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003edc6) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003edc6) cell_toolbar_pane_g

0x5307,	// (0x00034908) grid_highlight_pane_cp2_ParamLimits

0x5307,	// (0x00034908) grid_highlight_pane_cp2

0x5321,	// (0x00034922) toolbar_button_pane

0x532d,	// (0x0003492e) toolbar_button_pane_g1

0x5335,	// (0x00034936) toolbar_button_pane_g2

0x533d,	// (0x0003493e) toolbar_button_pane_g3

0x5345,	// (0x00034946) toolbar_button_pane_g4

0x534d,	// (0x0003494e) toolbar_button_pane_g5

0x5355,	// (0x00034956) toolbar_button_pane_g6

0x535d,	// (0x0003495e) toolbar_button_pane_g7

0x5365,	// (0x00034966) toolbar_button_pane_g8

0x536d,	// (0x0003496e) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0003edcb) toolbar_button_pane_g

0x174e,	// (0x00030d4f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x174e,	// (0x00030d4f) list_single_2graphic_pane_g1_cp3

0xc589,	// (0x0003bb8a) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc589,	// (0x0003bb8a) list_single_2graphic_pane_g2_cp3

0x176b,	// (0x00030d6c) list_single_2graphic_pane_g3_cp3

0x1773,	// (0x00030d74) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1773,	// (0x00030d74) list_single_2graphic_pane_g4_cp3

0x177f,	// (0x00030d80) list_single_2graphic_pane_t1_cp3_ParamLimits

0x177f,	// (0x00030d80) list_single_2graphic_pane_t1_cp3

0x17cf,	// (0x00030dd0) list_single_midp_graphic_pane_g2_ParamLimits

0x17cf,	// (0x00030dd0) list_single_midp_graphic_pane_g2

0x1111,	// (0x00030712) aid_zoom_text_primary

0xf4dc,	// (0x0003eadd) aid_zoom_text_secondary

0xd4e6,	// (0x0003cae7) status_small_pane_g7_ParamLimits

0xd4e6,	// (0x0003cae7) status_small_pane_g7

0xd509,	// (0x0003cb0a) status_small_pane_t1_ParamLimits

0xceba,	// (0x0003c4bb) title_pane_g2

0x0003,

0xf54e,	// (0x0003eb4f) title_pane_g

0xd132,	// (0x0003c733) aid_size_cell_colour_1_pane_ParamLimits

0xd132,	// (0x0003c733) aid_size_cell_colour_1_pane

0xd146,	// (0x0003c747) aid_size_cell_colour_2_pane_ParamLimits

0xd146,	// (0x0003c747) aid_size_cell_colour_2_pane

0xd15a,	// (0x0003c75b) aid_size_cell_colour_3_pane_ParamLimits

0xd15a,	// (0x0003c75b) aid_size_cell_colour_3_pane

0xd16e,	// (0x0003c76f) aid_size_cell_colour_4_pane_ParamLimits

0xd16e,	// (0x0003c76f) aid_size_cell_colour_4_pane

0x0adf,	// (0x000300e0) title_pane_stacon_g1_ParamLimits

0x0adf,	// (0x000300e0) title_pane_stacon_g1

0x59cc,	// (0x00034fcd) popup_note_wait_window_g3_ParamLimits

0x59cc,	// (0x00034fcd) popup_note_wait_window_g3

0x5a42,	// (0x00035043) popup_note_wait_window_t5_ParamLimits

0x5a42,	// (0x00035043) popup_note_wait_window_t5

0x2d53,	// (0x00032354) main_feb_china_hwr_fs_writing_pane

0xbf39,	// (0x0003b53a) popup_feb_china_hwr_fs_window_ParamLimits

0xbf39,	// (0x0003b53a) popup_feb_china_hwr_fs_window

0xc59a,	// (0x0003bb9b) aid_size_cell_hwr_fs_ParamLimits

0xc59a,	// (0x0003bb9b) aid_size_cell_hwr_fs

0x53a1,	// (0x000349a2) bg_popup_sub_pane_cp3_ParamLimits

0x53a1,	// (0x000349a2) bg_popup_sub_pane_cp3

0xc5af,	// (0x0003bbb0) grid_hwr_fs_pane_ParamLimits

0xc5af,	// (0x0003bbb0) grid_hwr_fs_pane

0x1894,	// (0x00030e95) linegrid_hwr_fs_pane_ParamLimits

0x1894,	// (0x00030e95) linegrid_hwr_fs_pane

0xc5c7,	// (0x0003bbc8) cell_hwr_fs_pane_ParamLimits

0xc5c7,	// (0x0003bbc8) cell_hwr_fs_pane

0x53ad,	// (0x000349ae) linegrid_hwr_fs_pane_g1_ParamLimits

0x53ad,	// (0x000349ae) linegrid_hwr_fs_pane_g1

0xd96f,	// (0x0003cf70) linegrid_hwr_fs_pane_g2_ParamLimits

0xd96f,	// (0x0003cf70) linegrid_hwr_fs_pane_g2

0x53cb,	// (0x000349cc) linegrid_hwr_fs_pane_g3_ParamLimits

0x53cb,	// (0x000349cc) linegrid_hwr_fs_pane_g3

0x18c6,	// (0x00030ec7) linegrid_hwr_fs_pane_g4_ParamLimits

0x18c6,	// (0x00030ec7) linegrid_hwr_fs_pane_g4

0x18e0,	// (0x00030ee1) linegrid_hwr_fs_pane_g5_ParamLimits

0x18e0,	// (0x00030ee1) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0003edf1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0003edf1) linegrid_hwr_fs_pane_g

0x53d7,	// (0x000349d8) cell_hwr_fs_pane_g1_ParamLimits

0x53d7,	// (0x000349d8) cell_hwr_fs_pane_g1

0x51a2,	// (0x000347a3) cell_hwr_fs_pane_g2_ParamLimits

0x51a2,	// (0x000347a3) cell_hwr_fs_pane_g2

0xd981,	// (0x0003cf82) cell_hwr_fs_pane_g3_ParamLimits

0xd981,	// (0x0003cf82) cell_hwr_fs_pane_g3

0xd98e,	// (0x0003cf8f) cell_hwr_fs_pane_g4_ParamLimits

0xd98e,	// (0x0003cf8f) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0003edfc) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003edfc) cell_hwr_fs_pane_g

0xc5ed,	// (0x0003bbee) cell_hwr_fs_pane_t1

0x2d53,	// (0x00032354) grid_highlight_pane_cp6

0x2d53,	// (0x00032354) main_idle_act2_pane

0x3faa,	// (0x000335ab) aid_inside_area_popup_secondary

0xda66,	// (0x0003d067) aid_inside_area_window_primary_ParamLimits

0xda66,	// (0x0003d067) aid_inside_area_window_primary

0x6c1a,	// (0x0003621b) ai2_news_ticker_pane

0x6c22,	// (0x00036223) aid_size_cell_ai1_link_ParamLimits

0x6c22,	// (0x00036223) aid_size_cell_ai1_link

0xde28,	// (0x0003d429) popup_ai2_data_window_ParamLimits

0xde28,	// (0x0003d429) popup_ai2_data_window

0x6c52,	// (0x00036253) popup_ai2_link_window_ParamLimits

0x6c52,	// (0x00036253) popup_ai2_link_window

0x53a1,	// (0x000349a2) bg_popup_sub_pane_cp4_ParamLimits

0x53a1,	// (0x000349a2) bg_popup_sub_pane_cp4

0x6c66,	// (0x00036267) grid_ai2_link_pane_ParamLimits

0x6c66,	// (0x00036267) grid_ai2_link_pane

0x6c7d,	// (0x0003627e) popup_ai2_link_window_g1_ParamLimits

0x6c7d,	// (0x0003627e) popup_ai2_link_window_g1

0x6c89,	// (0x0003628a) popup_ai2_link_window_g2_ParamLimits

0x6c89,	// (0x0003628a) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0003efcf) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0003efcf) popup_ai2_link_window_g

0x6c98,	// (0x00036299) ai2_mp_button_pane

0x6ca0,	// (0x000362a1) ai2_mp_volume_pane

0x55b4,	// (0x00034bb5) bg_popup_sub_pane_cp5_ParamLimits

0x55b4,	// (0x00034bb5) bg_popup_sub_pane_cp5

0x6ca8,	// (0x000362a9) heading_ai2_gene_pane_ParamLimits

0x6ca8,	// (0x000362a9) heading_ai2_gene_pane

0x6cb4,	// (0x000362b5) list_ai2_gene_pane_ParamLimits

0x6cb4,	// (0x000362b5) list_ai2_gene_pane

0x6cfc,	// (0x000362fd) cell_ai2_link_pane_ParamLimits

0x6cfc,	// (0x000362fd) cell_ai2_link_pane

0x6d12,	// (0x00036313) cell_ai2_link_pane_g1

0x2d53,	// (0x00032354) grid_highlight_pane_cp7

0x1c7f,	// (0x00031280) ai2_mp_volume_pane_g1

0x6de2,	// (0x000363e3) ai2_mp_volume_pane_g2

0xde52,	// (0x0003d453) list_ai2_gene_pane_t1

0x6dea,	// (0x000363eb) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0003efe8) ai2_mp_volume_pane_g

0x1c87,	// (0x00031288) volume_small_pane_cp3

0x6df2,	// (0x000363f3) aid_size_cell_ai2_button

0x6dfa,	// (0x000363fb) grid_ai2_button_pane

0x6e03,	// (0x00036404) cell_ai2_button_pane_ParamLimits

0x6e03,	// (0x00036404) cell_ai2_button_pane

0x2d49,	// (0x0003234a) cell_ai2_button_pane_g1

0x2d53,	// (0x00032354) grid_highlight_pane_cp8

0x6da2,	// (0x000363a3) ai2_gene_pane_t1_ParamLimits

0x6da2,	// (0x000363a3) ai2_gene_pane_t1

0xbeb3,	// (0x0003b4b4) aid_height_parent_landscape

0xdbb0,	// (0x0003d1b1) aid_height_set_list

0x670d,	// (0x00035d0e) aid_size_parent

0x6a40,	// (0x00036041) aid_size_cell_graphic_pane_ParamLimits

0x6cc4,	// (0x000362c5) popup_ai2_data_window_g1_ParamLimits

0x6cc4,	// (0x000362c5) popup_ai2_data_window_g1

0x6cd0,	// (0x000362d1) ai2_news_ticker_pane_g1

0x6cd8,	// (0x000362d9) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0003efd4) ai2_news_ticker_pane_g

0x6ce0,	// (0x000362e1) ai2_news_ticker_pane_t1

0x6cee,	// (0x000362ef) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0003efd9) ai2_news_ticker_pane_t

0x6d1b,	// (0x0003631c) heading_ai2_gene_pane_g1

0x6d23,	// (0x00036324) heading_ai2_gene_pane_t1_ParamLimits

0x6d23,	// (0x00036324) heading_ai2_gene_pane_t1

0x6d38,	// (0x00036339) list_highlight_pane_cp6

0xde3c,	// (0x0003d43d) ai2_gene_pane_ParamLimits

0xde3c,	// (0x0003d43d) ai2_gene_pane

0xde60,	// (0x0003d461) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0003efde) list_ai2_gene_pane_t

0x6d73,	// (0x00036374) list_highlight_pane_cp8_ParamLimits

0x6d73,	// (0x00036374) list_highlight_pane_cp8

0x6d84,	// (0x00036385) ai2_gene_pane_g1_ParamLimits

0x6d84,	// (0x00036385) ai2_gene_pane_g1

0x6d96,	// (0x00036397) ai2_gene_pane_g2_ParamLimits

0x6d96,	// (0x00036397) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0003efe3) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0003efe3) ai2_gene_pane_g

0x3de9,	// (0x000333ea) scroll_pane_cp12

0xbe72,	// (0x0003b473) control_pane_t3_ParamLimits

0xbe72,	// (0x0003b473) control_pane_t3

0xd4fa,	// (0x0003cafb) status_small_pane_g8_ParamLimits

0xd4fa,	// (0x0003cafb) status_small_pane_g8

0xbfce,	// (0x0003b5cf) popup_find_window_ParamLimits

0xc25b,	// (0x0003b85c) popup_note_image_window_ParamLimits

0x170c,	// (0x00030d0d) list_double2_graphic_pane_vc_g1_ParamLimits

0x170c,	// (0x00030d0d) list_double2_graphic_pane_vc_g1

0x1718,	// (0x00030d19) list_double2_graphic_pane_vc_g2_ParamLimits

0x1718,	// (0x00030d19) list_double2_graphic_pane_vc_g2

0x1724,	// (0x00030d25) list_double2_graphic_pane_vc_g3_ParamLimits

0x1724,	// (0x00030d25) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0003edbf) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0003edbf) list_double2_graphic_pane_vc_g

0x1730,	// (0x00030d31) list_double2_graphic_pane_vc_t1_ParamLimits

0x1730,	// (0x00030d31) list_double2_graphic_pane_vc_t1

0x1718,	// (0x00030d19) list_single_heading_pane_vc_g1_ParamLimits

0x1718,	// (0x00030d19) list_single_heading_pane_vc_g1

0x1724,	// (0x00030d25) list_single_heading_pane_vc_g2_ParamLimits

0x1724,	// (0x00030d25) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ebc9) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ebc9) list_single_heading_pane_vc_g

0x179b,	// (0x00030d9c) list_single_heading_pane_vc_t1_ParamLimits

0x179b,	// (0x00030d9c) list_single_heading_pane_vc_t1

0x17b3,	// (0x00030db4) list_single_heading_pane_vc_t2_ParamLimits

0x17b3,	// (0x00030db4) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0003ede0) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0003ede0) list_single_heading_pane_vc_t

0x17f1,	// (0x00030df2) list_setting_number_pane_vc_g1_ParamLimits

0x17f1,	// (0x00030df2) list_setting_number_pane_vc_g1

0x17fd,	// (0x00030dfe) list_setting_number_pane_vc_g2_ParamLimits

0x17fd,	// (0x00030dfe) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003ede5) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003ede5) list_setting_number_pane_vc_g

0x1809,	// (0x00030e0a) list_setting_number_pane_vc_t1_ParamLimits

0x1809,	// (0x00030e0a) list_setting_number_pane_vc_t1

0x181d,	// (0x00030e1e) list_setting_number_pane_vc_t2_ParamLimits

0x181d,	// (0x00030e1e) list_setting_number_pane_vc_t2

0x1839,	// (0x00030e3a) list_setting_number_pane_vc_t3_ParamLimits

0x1839,	// (0x00030e3a) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0003edea) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0003edea) list_setting_number_pane_vc_t

0x1857,	// (0x00030e58) set_value_pane_vc_ParamLimits

0x1857,	// (0x00030e58) set_value_pane_vc

0x68c5,	// (0x00035ec6) list_double2_graphic_pane_vc_ParamLimits

0x68c5,	// (0x00035ec6) list_double2_graphic_pane_vc

0x68c5,	// (0x00035ec6) list_double2_large_graphic_pane_vc_ParamLimits

0x68c5,	// (0x00035ec6) list_double2_large_graphic_pane_vc

0x68c5,	// (0x00035ec6) list_double2_pane_vc_ParamLimits

0x68c5,	// (0x00035ec6) list_double2_pane_vc

0x68c5,	// (0x00035ec6) list_double_graphic_heading_pane_vc_ParamLimits

0x68c5,	// (0x00035ec6) list_double_graphic_heading_pane_vc

0x68c5,	// (0x00035ec6) list_double_graphic_pane_vc_ParamLimits

0x68c5,	// (0x00035ec6) list_double_graphic_pane_vc

0x68c5,	// (0x00035ec6) list_double_heading_pane_vc_ParamLimits

0x68c5,	// (0x00035ec6) list_double_heading_pane_vc

0x68d7,	// (0x00035ed8) list_double_large_graphic_pane_vc_ParamLimits

0x68d7,	// (0x00035ed8) list_double_large_graphic_pane_vc

0x68c5,	// (0x00035ec6) list_double_number_pane_vc_ParamLimits

0x68c5,	// (0x00035ec6) list_double_number_pane_vc

0x68c5,	// (0x00035ec6) list_double_pane_vc_ParamLimits

0x68c5,	// (0x00035ec6) list_double_pane_vc

0x68c5,	// (0x00035ec6) list_double_time_pane_vc_ParamLimits

0x68c5,	// (0x00035ec6) list_double_time_pane_vc

0x68c5,	// (0x00035ec6) list_setting_number_pane_vc_ParamLimits

0x68c5,	// (0x00035ec6) list_setting_number_pane_vc

0x68c5,	// (0x00035ec6) list_setting_pane_vc_ParamLimits

0x68c5,	// (0x00035ec6) list_setting_pane_vc

0x68c5,	// (0x00035ec6) list_single_graphic_heading_pane_vc_ParamLimits

0x68c5,	// (0x00035ec6) list_single_graphic_heading_pane_vc

0x68c5,	// (0x00035ec6) list_single_heading_pane_vc_ParamLimits

0x68c5,	// (0x00035ec6) list_single_heading_pane_vc

0x68c5,	// (0x00035ec6) list_single_number_heading_pane_vc_ParamLimits

0x68c5,	// (0x00035ec6) list_single_number_heading_pane_vc

0x170c,	// (0x00030d0d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x170c,	// (0x00030d0d) list_double_graphic_heading_pane_vc_g1

0x1718,	// (0x00030d19) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1718,	// (0x00030d19) list_double_graphic_heading_pane_vc_g2

0x1724,	// (0x00030d25) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1724,	// (0x00030d25) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0003edbf) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003edbf) list_double_graphic_heading_pane_vc_g

0x307c,	// (0x0003267d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x307c,	// (0x0003267d) list_double_graphic_heading_pane_vc_t1

0x3098,	// (0x00032699) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3098,	// (0x00032699) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0003efef) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0003efef) list_double_graphic_heading_pane_vc_t

0x17f1,	// (0x00030df2) list_setting_pane_vc_g1_ParamLimits

0x17f1,	// (0x00030df2) list_setting_pane_vc_g1

0x17fd,	// (0x00030dfe) list_setting_pane_vc_g2_ParamLimits

0x17fd,	// (0x00030dfe) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003ede5) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003ede5) list_setting_pane_vc_g

0x30b6,	// (0x000326b7) list_setting_pane_vc_t1_ParamLimits

0x30b6,	// (0x000326b7) list_setting_pane_vc_t1

0x30d2,	// (0x000326d3) list_setting_pane_vc_t2_ParamLimits

0x30d2,	// (0x000326d3) list_setting_pane_vc_t2

0x0001,

0xfa1c,	// (0x0003f01d) list_setting_pane_vc_t_ParamLimits

0xfa1c,	// (0x0003f01d) list_setting_pane_vc_t

0x1857,	// (0x00030e58) set_value_pane_cp_vc_ParamLimits

0x1857,	// (0x00030e58) set_value_pane_cp_vc

0x1718,	// (0x00030d19) list_single_number_heading_pane_vc_g1_ParamLimits

0x1718,	// (0x00030d19) list_single_number_heading_pane_vc_g1

0x1724,	// (0x00030d25) list_single_number_heading_pane_vc_g2_ParamLimits

0x1724,	// (0x00030d25) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ebc9) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ebc9) list_single_number_heading_pane_vc_g

0x179b,	// (0x00030d9c) list_single_number_heading_pane_vc_t1_ParamLimits

0x179b,	// (0x00030d9c) list_single_number_heading_pane_vc_t1

0x30ee,	// (0x000326ef) list_single_number_heading_pane_vc_t2_ParamLimits

0x30ee,	// (0x000326ef) list_single_number_heading_pane_vc_t2

0x3102,	// (0x00032703) list_single_number_heading_pane_vc_t3_ParamLimits

0x3102,	// (0x00032703) list_single_number_heading_pane_vc_t3

0x0002,

0xfa21,	// (0x0003f022) list_single_number_heading_pane_vc_t_ParamLimits

0xfa21,	// (0x0003f022) list_single_number_heading_pane_vc_t

0x170c,	// (0x00030d0d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x170c,	// (0x00030d0d) list_single_graphic_heading_pane_vc_g1

0x1718,	// (0x00030d19) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1718,	// (0x00030d19) list_single_graphic_heading_pane_vc_g4

0x1724,	// (0x00030d25) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1724,	// (0x00030d25) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0003edbf) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003edbf) list_single_graphic_heading_pane_vc_g

0x179b,	// (0x00030d9c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x179b,	// (0x00030d9c) list_single_graphic_heading_pane_vc_t1

0x3114,	// (0x00032715) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3114,	// (0x00032715) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa28,	// (0x0003f029) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0003f029) list_single_graphic_heading_pane_vc_t

0x1718,	// (0x00030d19) list_double2_pane_vc_g1_ParamLimits

0x1718,	// (0x00030d19) list_double2_pane_vc_g1

0x1724,	// (0x00030d25) list_double2_pane_vc_g2_ParamLimits

0x1724,	// (0x00030d25) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ebc9) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ebc9) list_double2_pane_vc_g

0x3128,	// (0x00032729) list_double2_pane_vc_t1_ParamLimits

0x3128,	// (0x00032729) list_double2_pane_vc_t1

0x313e,	// (0x0003273f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x313e,	// (0x0003273f) list_double2_large_graphic_pane_vc_g1

0x1718,	// (0x00030d19) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1718,	// (0x00030d19) list_double2_large_graphic_pane_vc_g2

0x1724,	// (0x00030d25) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1724,	// (0x00030d25) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0003ebe6) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0003ebe6) list_double2_large_graphic_pane_vc_g

0x314a,	// (0x0003274b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x314a,	// (0x0003274b) list_double2_large_graphic_pane_vc_t1

0x3160,	// (0x00032761) list_double_time_pane_vc_g1_ParamLimits

0x3160,	// (0x00032761) list_double_time_pane_vc_g1

0x316c,	// (0x0003276d) list_double_time_pane_vc_g2_ParamLimits

0x316c,	// (0x0003276d) list_double_time_pane_vc_g2

0x0001,

0xfa2d,	// (0x0003f02e) list_double_time_pane_vc_g_ParamLimits

0xfa2d,	// (0x0003f02e) list_double_time_pane_vc_g

0x3178,	// (0x00032779) list_double_time_pane_vc_t1_ParamLimits

0x3178,	// (0x00032779) list_double_time_pane_vc_t1

0x319c,	// (0x0003279d) list_double_time_pane_vc_t2_ParamLimits

0x319c,	// (0x0003279d) list_double_time_pane_vc_t2

0x31eb,	// (0x000327ec) list_double_time_pane_vc_t3_ParamLimits

0x31eb,	// (0x000327ec) list_double_time_pane_vc_t3

0x31fd,	// (0x000327fe) list_double_time_pane_vc_t4_ParamLimits

0x31fd,	// (0x000327fe) list_double_time_pane_vc_t4

0x0003,

0xfa32,	// (0x0003f033) list_double_time_pane_vc_t_ParamLimits

0xfa32,	// (0x0003f033) list_double_time_pane_vc_t

0x1718,	// (0x00030d19) list_double_pane_vc_g1_ParamLimits

0x1718,	// (0x00030d19) list_double_pane_vc_g1

0x1724,	// (0x00030d25) list_double_pane_vc_g2_ParamLimits

0x1724,	// (0x00030d25) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ebc9) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ebc9) list_double_pane_vc_g

0x3211,	// (0x00032812) list_double_pane_vc_t1_ParamLimits

0x3211,	// (0x00032812) list_double_pane_vc_t1

0x3225,	// (0x00032826) list_double_pane_vc_t2_ParamLimits

0x3225,	// (0x00032826) list_double_pane_vc_t2

0x0001,

0xfa3b,	// (0x0003f03c) list_double_pane_vc_t_ParamLimits

0xfa3b,	// (0x0003f03c) list_double_pane_vc_t

0x1718,	// (0x00030d19) list_double_number_pane_vc_g1_ParamLimits

0x1718,	// (0x00030d19) list_double_number_pane_vc_g1

0x1724,	// (0x00030d25) list_double_number_pane_vc_g2_ParamLimits

0x1724,	// (0x00030d25) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ebc9) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ebc9) list_double_number_pane_vc_g

0x323d,	// (0x0003283e) list_double_number_pane_vc_t1_ParamLimits

0x323d,	// (0x0003283e) list_double_number_pane_vc_t1

0x324f,	// (0x00032850) list_double_number_pane_vc_t2_ParamLimits

0x324f,	// (0x00032850) list_double_number_pane_vc_t2

0x3263,	// (0x00032864) list_double_number_pane_vc_t3_ParamLimits

0x3263,	// (0x00032864) list_double_number_pane_vc_t3

0x0002,

0xfa40,	// (0x0003f041) list_double_number_pane_vc_t_ParamLimits

0xfa40,	// (0x0003f041) list_double_number_pane_vc_t

0x327b,	// (0x0003287c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x327b,	// (0x0003287c) list_double_large_graphic_pane_vc_g1

0x329d,	// (0x0003289e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x329d,	// (0x0003289e) list_double_large_graphic_pane_vc_g2

0x32b1,	// (0x000328b2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x32b1,	// (0x000328b2) list_double_large_graphic_pane_vc_g3

0x32c0,	// (0x000328c1) list_double_large_graphic_pane_vc_g4_ParamLimits

0x32c0,	// (0x000328c1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa47,	// (0x0003f048) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0003f048) list_double_large_graphic_pane_vc_g

0x32cc,	// (0x000328cd) list_double_large_graphic_pane_vc_t1_ParamLimits

0x32cc,	// (0x000328cd) list_double_large_graphic_pane_vc_t1

0x32e8,	// (0x000328e9) list_double_large_graphic_pane_vc_t2_ParamLimits

0x32e8,	// (0x000328e9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0003f051) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0003f051) list_double_large_graphic_pane_vc_t

0x1718,	// (0x00030d19) list_double_heading_pane_vc_g1_ParamLimits

0x1718,	// (0x00030d19) list_double_heading_pane_vc_g1

0x1724,	// (0x00030d25) list_double_heading_pane_vc_g2_ParamLimits

0x1724,	// (0x00030d25) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ebc9) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ebc9) list_double_heading_pane_vc_g

0x330a,	// (0x0003290b) list_double_heading_pane_vc_t1_ParamLimits

0x330a,	// (0x0003290b) list_double_heading_pane_vc_t1

0x179b,	// (0x00030d9c) list_double_heading_pane_vc_t2_ParamLimits

0x179b,	// (0x00030d9c) list_double_heading_pane_vc_t2

0x0001,

0xfa55,	// (0x0003f056) list_double_heading_pane_vc_t_ParamLimits

0xfa55,	// (0x0003f056) list_double_heading_pane_vc_t

0x331e,	// (0x0003291f) list_double_graphic_pane_vc_g1_ParamLimits

0x331e,	// (0x0003291f) list_double_graphic_pane_vc_g1

0x332a,	// (0x0003292b) list_double_graphic_pane_vc_g2_ParamLimits

0x332a,	// (0x0003292b) list_double_graphic_pane_vc_g2

0x1718,	// (0x00030d19) list_double_graphic_pane_vc_g3_ParamLimits

0x1718,	// (0x00030d19) list_double_graphic_pane_vc_g3

0x0003,

0xfa5a,	// (0x0003f05b) list_double_graphic_pane_vc_g_ParamLimits

0xfa5a,	// (0x0003f05b) list_double_graphic_pane_vc_g

0x3347,	// (0x00032948) list_double_graphic_pane_vc_t1_ParamLimits

0x3347,	// (0x00032948) list_double_graphic_pane_vc_t1

0x3371,	// (0x00032972) list_double_graphic_pane_vc_t2_ParamLimits

0x3371,	// (0x00032972) list_double_graphic_pane_vc_t2

0x0001,

0xfa63,	// (0x0003f064) list_double_graphic_pane_vc_t_ParamLimits

0xfa63,	// (0x0003f064) list_double_graphic_pane_vc_t

0xf4d4,	// (0x0003ead5) aid_size_cell_fastswap

0xb53e,	// (0x0003ab3f) aid_size_cell_touch_ParamLimits

0xb53e,	// (0x0003ab3f) aid_size_cell_touch

0x0184,	// (0x0002f785) popup_fast_swap_wide_window_ParamLimits

0x0184,	// (0x0002f785) popup_fast_swap_wide_window

0xb6ee,	// (0x0003acef) touch_pane_ParamLimits

0xb6ee,	// (0x0003acef) touch_pane

0x3e3f,	// (0x00033440) button_value_adjust_pane_cp2

0x0841,	// (0x0002fe42) button_value_adjust_pane_cp4

0x0861,	// (0x0002fe62) form_field_data_pane_cp2

0xbb70,	// (0x0003b171) form_field_data_wide_pane_cp2

0x42bc,	// (0x000338bd) bg_scroll_pane_ParamLimits

0x0c41,	// (0x00030242) scroll_handle_pane_ParamLimits

0x0c55,	// (0x00030256) scroll_sc2_down_pane_ParamLimits

0x0c55,	// (0x00030256) scroll_sc2_down_pane

0x42ed,	// (0x000338ee) scroll_sc2_up_pane_ParamLimits

0x42ed,	// (0x000338ee) scroll_sc2_up_pane

0xdf80,	// (0x0003d581) grid_wheel_folder_pane_g1_ParamLimits

0xdf80,	// (0x0003d581) grid_wheel_folder_pane_g1

0x0ea4,	// (0x000304a5) clock_nsta_pane_cp2_ParamLimits

0x0ea4,	// (0x000304a5) clock_nsta_pane_cp2

0x4e23,	// (0x00034424) listscroll_midp_pane_ParamLimits

0xd3f5,	// (0x0003c9f6) midp_canvas_pane

0x4dd5,	// (0x000343d6) nsta_clock_indic_pane

0x4e09,	// (0x0003440a) listscroll_form_pane_vc

0x4e11,	// (0x00034412) listscroll_set_pane_vc_ParamLimits

0x4e11,	// (0x00034412) listscroll_set_pane_vc

0xd67a,	// (0x0003cc7b) clock_nsta_pane

0xd6a4,	// (0x0003cca5) indicator_nsta_pane

0x526b,	// (0x0003486c) bg_popup_sub_pane_cp2_ParamLimits

0x527f,	// (0x00034880) find_pane_cp2_ParamLimits

0x527f,	// (0x00034880) find_pane_cp2

0x5295,	// (0x00034896) grid_toobar_pane_ParamLimits

0x5375,	// (0x00034976) list_form_gen_pane_vc_ParamLimits

0x5375,	// (0x00034976) list_form_gen_pane_vc

0x538b,	// (0x0003498c) scroll_pane_cp8_vc_ParamLimits

0x538b,	// (0x0003498c) scroll_pane_cp8_vc

0x5407,	// (0x00034a08) data_form_wide_pane_vc_ParamLimits

0x5407,	// (0x00034a08) data_form_wide_pane_vc

0x5413,	// (0x00034a14) form_field_data_wide_pane_vc_g1

0x541b,	// (0x00034a1c) form_field_data_wide_pane_vc_t1_ParamLimits

0x541b,	// (0x00034a1c) form_field_data_wide_pane_vc_t1

0x3e53,	// (0x00033454) input_focus_pane_cp6_vc_ParamLimits

0x3e53,	// (0x00033454) input_focus_pane_cp6_vc

0xda20,	// (0x0003d021) list_midp_pane_ParamLimits

0x6aa7,	// (0x000360a8) scroll_pane_cp16_ParamLimits

0x6aa7,	// (0x000360a8) scroll_pane_cp16

0x57a1,	// (0x00034da2) button_value_adjust_pane_ParamLimits

0x57a1,	// (0x00034da2) button_value_adjust_pane

0xdbc1,	// (0x0003d1c2) button_value_adjust_pane_cp6_ParamLimits

0xdbc1,	// (0x0003d1c2) button_value_adjust_pane_cp6

0xdcdb,	// (0x0003d2dc) settings_code_pane_cp_ParamLimits

0xdcdb,	// (0x0003d2dc) settings_code_pane_cp

0x2d49,	// (0x0003234a) cell_touch_pane_g1

0x2d49,	// (0x0003234a) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0003ed04) cell_touch_pane_g

0xde6e,	// (0x0003d46f) cell_touch_pane_cp_ParamLimits

0xde6e,	// (0x0003d46f) cell_touch_pane_cp

0xde8a,	// (0x0003d48b) cell_touch_pane_ParamLimits

0xde8a,	// (0x0003d48b) cell_touch_pane

0x2d49,	// (0x0003234a) scroll_sc2_down_pane_g1

0x2d49,	// (0x0003234a) scroll_sc2_up_pane_g1

0x2d53,	// (0x00032354) bg_set_opt_pane_cp4_vc

0x6e37,	// (0x00036438) list_set_graphic_pane_vc_g1_ParamLimits

0x6e37,	// (0x00036438) list_set_graphic_pane_vc_g1

0x6e43,	// (0x00036444) list_set_graphic_pane_vc_g2_ParamLimits

0x6e43,	// (0x00036444) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0003eff4) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0003eff4) list_set_graphic_pane_vc_g

0x6e4f,	// (0x00036450) text_primary_small_cp13_vc_ParamLimits

0x6e4f,	// (0x00036450) text_primary_small_cp13_vc

0x6e67,	// (0x00036468) list_set_graphic_pane_vc_ParamLimits

0x6e67,	// (0x00036468) list_set_graphic_pane_vc

0x2d53,	// (0x00032354) input_focus_pane_cp2_vc

0x2d49,	// (0x0003234a) setting_code_pane_vc_g1

0x2e7e,	// (0x0003247f) setting_code_pane_vc_t1

0x6e7a,	// (0x0003647b) set_text_pane_vc_t1_ParamLimits

0x6e7a,	// (0x0003647b) set_text_pane_vc_t1

0x2d53,	// (0x00032354) input_focus_pane_cp1_vc

0x6e96,	// (0x00036497) list_set_text_pane_vc

0x2d49,	// (0x0003234a) setting_text_pane_vc_g1

0x2d53,	// (0x00032354) bg_set_opt_pane_cp2_vc

0x2e75,	// (0x00032476) setting_slider_graphic_pane_vc_g1

0x6ea0,	// (0x000364a1) setting_slider_graphic_pane_vc_t1

0x6eb0,	// (0x000364b1) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0003eff9) setting_slider_graphic_pane_vc_t

0x6ec0,	// (0x000364c1) slider_set_pane_cp_vc

0x6ec8,	// (0x000364c9) slider_set_pane_vc_g1

0x6ed1,	// (0x000364d2) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0003effe) slider_set_pane_vc_g

0x3eae,	// (0x000334af) set_opt_bg_pane_g1_copy1

0x3eb6,	// (0x000334b7) set_opt_bg_pane_g2_copy1

0x6efd,	// (0x000364fe) set_opt_bg_pane_g3_copy1

0x3ec6,	// (0x000334c7) set_opt_bg_pane_g4_copy1

0x3ece,	// (0x000334cf) set_opt_bg_pane_g5_copy1

0x3ed6,	// (0x000334d7) set_opt_bg_pane_g6_copy1

0x6f07,	// (0x00036508) set_opt_bg_pane_g7_copy1

0x6f0f,	// (0x00036510) set_opt_bg_pane_g8_copy1

0x6f19,	// (0x0003651a) set_opt_bg_pane_g9_copy1

0x2d53,	// (0x00032354) bg_set_opt_pane_cp_vc

0x6f23,	// (0x00036524) setting_slider_pane_vc_t1

0x6f32,	// (0x00036533) setting_slider_pane_vc_t2

0x6f42,	// (0x00036543) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0003f00d) setting_slider_pane_vc_t

0x6f52,	// (0x00036553) slider_set_pane_vc

0x1945,	// (0x00030f46) volume_set_pane_vc_g1

0x194e,	// (0x00030f4f) volume_set_pane_vc_g2

0x1957,	// (0x00030f58) volume_set_pane_vc_g3

0x1960,	// (0x00030f61) volume_set_pane_vc_g4

0x1969,	// (0x00030f6a) volume_set_pane_vc_g5

0x1972,	// (0x00030f73) volume_set_pane_vc_g6

0x197b,	// (0x00030f7c) volume_set_pane_vc_g7

0x1984,	// (0x00030f85) volume_set_pane_vc_g8

0x198d,	// (0x00030f8e) volume_set_pane_vc_g9

0x1996,	// (0x00030f97) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0003eeb2) volume_set_pane_vc_g

0x6f5a,	// (0x0003655b) volume_set_pane_vc

0x6f62,	// (0x00036563) button_value_adjust_pane_cp1_vc

0x6f6c,	// (0x0003656d) list_highlight_pane_cp2_vc

0x6f75,	// (0x00036576) list_set_pane_vc_ParamLimits

0x6f75,	// (0x00036576) list_set_pane_vc

0x6fd3,	// (0x000365d4) main_pane_set_vc_t1_ParamLimits

0x6fd3,	// (0x000365d4) main_pane_set_vc_t1

0x6fe8,	// (0x000365e9) main_pane_set_vc_t2_ParamLimits

0x6fe8,	// (0x000365e9) main_pane_set_vc_t2

0x6ffa,	// (0x000365fb) main_pane_set_vc_t3_ParamLimits

0x6ffa,	// (0x000365fb) main_pane_set_vc_t3

0x700e,	// (0x0003660f) main_pane_set_vc_t4_ParamLimits

0x700e,	// (0x0003660f) main_pane_set_vc_t4

0x0003,

0xfa13,	// (0x0003f014) main_pane_set_vc_t_ParamLimits

0xfa13,	// (0x0003f014) main_pane_set_vc_t

0x7022,	// (0x00036623) setting_code_pane_vc_ParamLimits

0x7022,	// (0x00036623) setting_code_pane_vc

0x7033,	// (0x00036634) setting_slider_graphic_pane_vc

0x7033,	// (0x00036634) setting_slider_pane_vc

0x7033,	// (0x00036634) setting_text_pane_vc

0x7033,	// (0x00036634) setting_volume_pane_vc

0x703d,	// (0x0003663e) scroll_pane_cp121_vc

0x3e2d,	// (0x0003342e) set_content_pane_vc

0x7045,	// (0x00036646) button_value_adjust_pane_g1

0x704e,	// (0x0003664f) button_value_adjust_pane_g2

0x0001,

0xfa68,	// (0x0003f069) button_value_adjust_pane_g

0x7057,	// (0x00036658) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7057,	// (0x00036658) form_field_slider_wide_pane_vc_t1

0x706b,	// (0x0003666c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x706b,	// (0x0003666c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6d,	// (0x0003f06e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003f06e) form_field_slider_wide_pane_vc_t

0x385f,	// (0x00032e60) input_focus_pane_cp10_vc_ParamLimits

0x385f,	// (0x00032e60) input_focus_pane_cp10_vc

0x7099,	// (0x0003669a) slider_cont_pane_cp1_vc_ParamLimits

0x7099,	// (0x0003669a) slider_cont_pane_cp1_vc

0x70ab,	// (0x000366ac) slider_form_pane_g1_cp2

0x6ed1,	// (0x000364d2) slider_form_pane_g2_cp2

0x70d8,	// (0x000366d9) form_field_slider_pane_vc_t3

0x70e6,	// (0x000366e7) form_field_slider_pane_vc_t4

0x70f4,	// (0x000366f5) slider_form_pane_vc_ParamLimits

0x70f4,	// (0x000366f5) slider_form_pane_vc

0x7101,	// (0x00036702) form_field_slider_pane_vc_t1_ParamLimits

0x7101,	// (0x00036702) form_field_slider_pane_vc_t1

0x706b,	// (0x0003666c) form_field_slider_pane_vc_t2_ParamLimits

0x706b,	// (0x0003666c) form_field_slider_pane_vc_t2

0x0001,

0xfa7f,	// (0x0003f080) form_field_slider_pane_vc_t_ParamLimits

0xfa7f,	// (0x0003f080) form_field_slider_pane_vc_t

0x385f,	// (0x00032e60) input_focus_pane_cp9_vc_ParamLimits

0x385f,	// (0x00032e60) input_focus_pane_cp9_vc

0x711d,	// (0x0003671e) slider_cont_pane_vc_ParamLimits

0x711d,	// (0x0003671e) slider_cont_pane_vc

0x7131,	// (0x00036732) list_form_graphic_pane_cp_vc_ParamLimits

0x7131,	// (0x00036732) list_form_graphic_pane_cp_vc

0x5413,	// (0x00034a14) form_field_popup_wide_pane_vc_g1

0x7146,	// (0x00036747) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7146,	// (0x00036747) form_field_popup_wide_pane_vc_t1

0x3e53,	// (0x00033454) input_focus_pane_cp8_vc_ParamLimits

0x3e53,	// (0x00033454) input_focus_pane_cp8_vc

0x718b,	// (0x0003678c) list_form_wide_pane_vc_ParamLimits

0x718b,	// (0x0003678c) list_form_wide_pane_vc

0x7197,	// (0x00036798) list_form_graphic_pane_vc_g1

0x719f,	// (0x000367a0) list_form_graphic_pane_vc_t1_ParamLimits

0x719f,	// (0x000367a0) list_form_graphic_pane_vc_t1

0x2e33,	// (0x00032434) list_highlight_pane_cp5_vc_ParamLimits

0x2e33,	// (0x00032434) list_highlight_pane_cp5_vc

0x71bb,	// (0x000367bc) list_form_graphic_pane_vc_ParamLimits

0x71bb,	// (0x000367bc) list_form_graphic_pane_vc

0x5413,	// (0x00034a14) form_field_popup_pane_vc_g1

0x71d1,	// (0x000367d2) form_field_popup_pane_vc_t1_ParamLimits

0x71d1,	// (0x000367d2) form_field_popup_pane_vc_t1

0x3e53,	// (0x00033454) input_focus_pane_cp7_vc_ParamLimits

0x3e53,	// (0x00033454) input_focus_pane_cp7_vc

0x71e8,	// (0x000367e9) list_form_pane_vc_ParamLimits

0x71e8,	// (0x000367e9) list_form_pane_vc

0x71f4,	// (0x000367f5) data_form_pane_vc_t1_ParamLimits

0x71f4,	// (0x000367f5) data_form_pane_vc_t1

0x3eae,	// (0x000334af) input_focus_pane_vc_g1

0x3eb6,	// (0x000334b7) input_focus_pane_vc_g2

0x3ebe,	// (0x000334bf) input_focus_pane_vc_g3

0x3ec6,	// (0x000334c7) input_focus_pane_vc_g4

0x3ece,	// (0x000334cf) input_focus_pane_vc_g5

0x3ed6,	// (0x000334d7) input_focus_pane_vc_g6

0x3ede,	// (0x000334df) input_focus_pane_vc_g7

0x3ee6,	// (0x000334e7) input_focus_pane_vc_g8

0x3eee,	// (0x000334ef) input_focus_pane_vc_g9

0x2d49,	// (0x0003234a) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0003ec8d) input_focus_pane_vc_g

0x5407,	// (0x00034a08) data_form_pane_vc_ParamLimits

0x5407,	// (0x00034a08) data_form_pane_vc

0x5413,	// (0x00034a14) form_field_data_pane_vc_g1

0x720f,	// (0x00036810) form_field_data_pane_vc_t1_ParamLimits

0x720f,	// (0x00036810) form_field_data_pane_vc_t1

0x3e53,	// (0x00033454) input_focus_pane_vc_ParamLimits

0x3e53,	// (0x00033454) input_focus_pane_vc

0x7229,	// (0x0003682a) button_value_adjust_pane_cp3_vc

0x7231,	// (0x00036832) button_value_adjust_pane_cp5_vc

0x7239,	// (0x0003683a) form_field_data_pane_vc_ParamLimits

0x7239,	// (0x0003683a) form_field_data_pane_vc

0x7250,	// (0x00036851) form_field_data_pane_vc_cp2

0x7258,	// (0x00036859) form_field_data_wide_pane_vc_ParamLimits

0x7258,	// (0x00036859) form_field_data_wide_pane_vc

0x726e,	// (0x0003686f) form_field_data_wide_pane_vc_cp2

0x7276,	// (0x00036877) form_field_popup_pane_vc_ParamLimits

0x7276,	// (0x00036877) form_field_popup_pane_vc

0x728d,	// (0x0003688e) form_field_popup_wide_pane_vc_ParamLimits

0x728d,	// (0x0003688e) form_field_popup_wide_pane_vc

0x72a3,	// (0x000368a4) form_field_slider_pane_vc_ParamLimits

0x72a3,	// (0x000368a4) form_field_slider_pane_vc

0x72b6,	// (0x000368b7) form_field_slider_wide_pane_vc_ParamLimits

0x72b6,	// (0x000368b7) form_field_slider_wide_pane_vc

0xdea8,	// (0x0003d4a9) grid_touch_1_pane_ParamLimits

0xdea8,	// (0x0003d4a9) grid_touch_1_pane

0xdebc,	// (0x0003d4bd) grid_touch_2_pane_ParamLimits

0xdebc,	// (0x0003d4bd) grid_touch_2_pane

0x7384,	// (0x00036985) touch_pane_g1_ParamLimits

0x7384,	// (0x00036985) touch_pane_g1

0x72ed,	// (0x000368ee) cell_app_pane_cp_wide_ParamLimits

0x72ed,	// (0x000368ee) cell_app_pane_cp_wide

0x72fe,	// (0x000368ff) grid_popup_fast_wide_pane_ParamLimits

0x72fe,	// (0x000368ff) grid_popup_fast_wide_pane

0x7312,	// (0x00036913) scroll_pane_cp19_ParamLimits

0x7312,	// (0x00036913) scroll_pane_cp19

0x2d53,	// (0x00032354) bg_popup_window_pane_cp20

0x7326,	// (0x00036927) listscroll_popup_fast_wide_pane

0x4016,	// (0x00033617) grid_indicator_nsta_pane

0x732e,	// (0x0003692f) clock_nsta_pane_g1

0x7337,	// (0x00036938) clock_nsta_pane_t1

0xdee6,	// (0x0003d4e7) cell_indicator_nsta_pane_ParamLimits

0xdee6,	// (0x0003d4e7) cell_indicator_nsta_pane

0x7384,	// (0x00036985) cell_indicator_nsta_pane_g1

0xdefd,	// (0x0003d4fe) cell_indicator_nsta_pane_g2

0x0001,

0xfa90,	// (0x0003f091) cell_indicator_nsta_pane_g

0x739f,	// (0x000369a0) clock_nsta_pane_cp

0x73a7,	// (0x000369a8) indicator_nsta_pane_cp

0x73af,	// (0x000369b0) nsta_clock_indic_pane_g1

0x2efc,	// (0x000324fd) grid_indicator_pane

0x43e2,	// (0x000339e3) scroll_pane_cp29

0x0df3,	// (0x000303f4) indicator_nsta_pane_cp2_ParamLimits

0x0df3,	// (0x000303f4) indicator_nsta_pane_cp2

0x2e33,	// (0x00032434) main_apps_wheel_pane

0x5628,	// (0x00034c29) form_midp_field_text_pane_ParamLimits

0x5773,	// (0x00034d74) scroll_bar_cp050_ParamLimits

0x7410,	// (0x00036a11) cell_indicator_pane_ParamLimits

0x7410,	// (0x00036a11) cell_indicator_pane

0x7427,	// (0x00036a28) cell_indicator_pane_g1

0xdf0a,	// (0x0003d50b) grid_wheel_folder_pane_ParamLimits

0xdf0a,	// (0x0003d50b) grid_wheel_folder_pane

0xdf18,	// (0x0003d519) list_wheel_apps_pane_ParamLimits

0xdf18,	// (0x0003d519) list_wheel_apps_pane

0xdf26,	// (0x0003d527) main_apps_wheel_pane_g1_ParamLimits

0xdf26,	// (0x0003d527) main_apps_wheel_pane_g1

0xdf32,	// (0x0003d533) main_apps_wheel_pane_g2_ParamLimits

0xdf32,	// (0x0003d533) main_apps_wheel_pane_g2

0x0001,

0xfaac,	// (0x0003f0ad) main_apps_wheel_pane_g_ParamLimits

0xfaac,	// (0x0003f0ad) main_apps_wheel_pane_g

0xdf40,	// (0x0003d541) main_apps_wheel_pane_t1_ParamLimits

0xdf40,	// (0x0003d541) main_apps_wheel_pane_t1

0xdf54,	// (0x0003d555) list_wheel_apps_pane_g1

0xdf5c,	// (0x0003d55d) list_wheel_apps_pane_g2

0xdf64,	// (0x0003d565) list_wheel_apps_pane_g3

0xdf6c,	// (0x0003d56d) list_wheel_apps_pane_g4

0xdf76,	// (0x0003d577) list_wheel_apps_pane_g5

0x0004,

0xfab1,	// (0x0003f0b2) list_wheel_apps_pane_g

0x4965,	// (0x00033f66) navi_icon_text_pane

0xd56e,	// (0x0003cb6f) aid_fill_nsta

0x74ec,	// (0x00036aed) navi_icon_text_pane_g1

0x74f8,	// (0x00036af9) navi_icon_text_pane_t1

0xd3d2,	// (0x0003c9d3) list_set_graphic_pane_t1_ParamLimits

0xd3d2,	// (0x0003c9d3) list_set_graphic_pane_t1

0x5ec2,	// (0x000354c3) popup_midp_note_alarm_window_t6_ParamLimits

0x5ec2,	// (0x000354c3) popup_midp_note_alarm_window_t6

0x5ed4,	// (0x000354d5) popup_midp_note_alarm_window_t7_ParamLimits

0x5ed4,	// (0x000354d5) popup_midp_note_alarm_window_t7

0x5ee6,	// (0x000354e7) popup_midp_note_alarm_window_t8_ParamLimits

0x5ee6,	// (0x000354e7) popup_midp_note_alarm_window_t8

0x5ef8,	// (0x000354f9) popup_midp_note_alarm_window_t9_ParamLimits

0x5ef8,	// (0x000354f9) popup_midp_note_alarm_window_t9

0x5f0a,	// (0x0003550b) popup_midp_note_alarm_window_t10_ParamLimits

0x5f0a,	// (0x0003550b) popup_midp_note_alarm_window_t10

0x5f1c,	// (0x0003551d) popup_midp_note_alarm_window_t11_ParamLimits

0x5f1c,	// (0x0003551d) popup_midp_note_alarm_window_t11

0x5f2e,	// (0x0003552f) scroll_pane_cp17_ParamLimits

0x5f2e,	// (0x0003552f) scroll_pane_cp17

0x1945,	// (0x00030f46) volume_small_pane_cp_g1

0x1c90,	// (0x00031291) volume_small_pane_cp_g2

0x1c99,	// (0x0003129a) volume_small_pane_cp_g3

0x1ca2,	// (0x000312a3) volume_small_pane_cp_g4

0x1cab,	// (0x000312ac) volume_small_pane_cp_g5

0x1cb4,	// (0x000312b5) volume_small_pane_cp_g6

0x1cbd,	// (0x000312be) volume_small_pane_cp_g7

0x1cc6,	// (0x000312c7) volume_small_pane_cp_g8

0x1ccf,	// (0x000312d0) volume_small_pane_cp_g9

0x1cd8,	// (0x000312d9) volume_small_pane_cp_g10

0x4bb6,	// (0x000341b7) midp_ticker_pane_g1_ParamLimits

0x4bc2,	// (0x000341c3) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0003ed59) midp_ticker_pane_g_ParamLimits

0x4bce,	// (0x000341cf) midp_ticker_pane_t1_ParamLimits

0xd592,	// (0x0003cb93) aid_fill_nsta_2

0x575f,	// (0x00034d60) list_form2_midp_pane

0x6894,	// (0x00035e95) midp_editing_number_pane_ParamLimits

0x68a3,	// (0x00035ea4) midp_ticker_pane_ParamLimits

0x750a,	// (0x00036b0b) form2_midp_field_pane

0x752e,	// (0x00036b2f) scroll_pane_cp51

0x754e,	// (0x00036b4f) form2_midp_button_pane_ParamLimits

0x754e,	// (0x00036b4f) form2_midp_button_pane

0x756c,	// (0x00036b6d) form2_midp_content_pane_ParamLimits

0x756c,	// (0x00036b6d) form2_midp_content_pane

0x7586,	// (0x00036b87) form2_midp_field_choice_group_pane

0x758e,	// (0x00036b8f) form2_midp_field_pane_g1

0x7596,	// (0x00036b97) form2_midp_field_pane_g2

0x759e,	// (0x00036b9f) form2_midp_field_pane_g3

0x75a6,	// (0x00036ba7) form2_midp_field_pane_g4

0x0003,

0xfad6,	// (0x0003f0d7) form2_midp_field_pane_g

0x75ae,	// (0x00036baf) form2_midp_gauge_slider_pane

0x75b6,	// (0x00036bb7) form2_midp_gauge_wait_pane

0x75be,	// (0x00036bbf) form2_midp_image_pane_ParamLimits

0x75be,	// (0x00036bbf) form2_midp_image_pane

0x75d9,	// (0x00036bda) form2_midp_label_pane_ParamLimits

0x75d9,	// (0x00036bda) form2_midp_label_pane

0xdfa9,	// (0x0003d5aa) form2_midp_label_pane_cp_ParamLimits

0xdfa9,	// (0x0003d5aa) form2_midp_label_pane_cp

0x7613,	// (0x00036c14) form2_midp_string_pane_ParamLimits

0x7613,	// (0x00036c14) form2_midp_string_pane

0xc674,	// (0x0003bc75) form2_midp_text_pane_ParamLimits

0xc674,	// (0x0003bc75) form2_midp_text_pane

0x7625,	// (0x00036c26) form2_midp_time_pane

0x7635,	// (0x00036c36) input_focus_pane_cp51_ParamLimits

0x7635,	// (0x00036c36) input_focus_pane_cp51

0x764d,	// (0x00036c4e) form2_midp_label_pane_t1_ParamLimits

0x764d,	// (0x00036c4e) form2_midp_label_pane_t1

0xc68d,	// (0x0003bc8e) form2_mdip_text_pane_t1_ParamLimits

0xc68d,	// (0x0003bc8e) form2_mdip_text_pane_t1

0x33d4,	// (0x000329d5) form2_midp_time_pane_t1

0x7696,	// (0x00036c97) form2_midp_gauge_slider_pane_t1

0xdfc8,	// (0x0003d5c9) form2_midp_gauge_slider_pane_t2

0xdfda,	// (0x0003d5db) form2_midp_gauge_slider_pane_t3

0x0002,

0xfadf,	// (0x0003f0e0) form2_midp_gauge_slider_pane_t

0x76cc,	// (0x00036ccd) form2_midp_slider_pane

0x76d8,	// (0x00036cd9) form2_midp_gauge_wait_pane_t1

0x76e6,	// (0x00036ce7) form2_midp_wait_pane_ParamLimits

0x76e6,	// (0x00036ce7) form2_midp_wait_pane

0xdfec,	// (0x0003d5ed) list_single_2graphic_pane_cp4_ParamLimits

0xdfec,	// (0x0003d5ed) list_single_2graphic_pane_cp4

0xd9ae,	// (0x0003cfaf) list_single_midp_graphic_pane_cp_ParamLimits

0xd9ae,	// (0x0003cfaf) list_single_midp_graphic_pane_cp

0x2d53,	// (0x00032354) list_highlight_pane_cp20

0x7740,	// (0x00036d41) list_single_2graphic_pane_g1_cp4

0x7748,	// (0x00036d49) list_single_2graphic_pane_g2_cp4

0x7750,	// (0x00036d51) list_single_2graphic_pane_t1_cp4

0x2e33,	// (0x00032434) list_highlight_pane_cp21

0x775f,	// (0x00036d60) list_single_midp_graphic_pane_g4_cp

0x776e,	// (0x00036d6f) list_single_midp_graphic_pane_t1_cp

0xe000,	// (0x0003d601) form2_mdip_string_pane_t1_ParamLimits

0xe000,	// (0x0003d601) form2_mdip_string_pane_t1

0x2d53,	// (0x00032354) bg_wml_button_pane_cp2

0x2d49,	// (0x0003234a) form2_midp_image_pane_g1

0x062b,	// (0x0002fc2c) list_double_large_graphic_pane_g5_ParamLimits

0x062b,	// (0x0002fc2c) list_double_large_graphic_pane_g5

0x4e23,	// (0x00034424) midp_form_pane_ParamLimits

0x2e33,	// (0x00032434) main_apps_wheel_pane_ParamLimits

0xc2d9,	// (0x0003b8da) popup_preview_window_ParamLimits

0xc2d9,	// (0x0003b8da) popup_preview_window

0x1687,	// (0x00030c88) popup_touch_info_window_ParamLimits

0x1687,	// (0x00030c88) popup_touch_info_window

0x16a5,	// (0x00030ca6) popup_touch_menu_window_ParamLimits

0x16a5,	// (0x00030ca6) popup_touch_menu_window

0x2d3f,	// (0x00032340) bg_popup_sub_pane_cp6

0x787c,	// (0x00036e7d) list_touch_menu_pane

0x7884,	// (0x00036e85) list_single_touch_menu_pane_ParamLimits

0x7884,	// (0x00036e85) list_single_touch_menu_pane

0x789a,	// (0x00036e9b) list_single_touch_menu_pane_t1

0x2e33,	// (0x00032434) bg_popup_sub_pane_cp7_ParamLimits

0x2e33,	// (0x00032434) bg_popup_sub_pane_cp7

0x78a8,	// (0x00036ea9) heading_sub_pane

0x78b0,	// (0x00036eb1) list_touch_info_pane_ParamLimits

0x78b0,	// (0x00036eb1) list_touch_info_pane

0x78bf,	// (0x00036ec0) list_single_touch_info_pane_ParamLimits

0x78bf,	// (0x00036ec0) list_single_touch_info_pane

0x78d1,	// (0x00036ed2) list_single_touch_info_pane_t1

0x78df,	// (0x00036ee0) list_single_touch_info_pane_t2

0x0001,

0xfaed,	// (0x0003f0ee) list_single_touch_info_pane_t

0x4ae5,	// (0x000340e6) bg_popup_heading_pane_cp

0x78ed,	// (0x00036eee) heading_sub_pane_t1

0x53a1,	// (0x000349a2) bg_popup_preview_window_pane_cp_ParamLimits

0x53a1,	// (0x000349a2) bg_popup_preview_window_pane_cp

0x78a8,	// (0x00036ea9) heading_preview_pane

0x78b0,	// (0x00036eb1) list_preview_pane_ParamLimits

0x78b0,	// (0x00036eb1) list_preview_pane

0x78fb,	// (0x00036efc) popup_preview_window_g1

0x78bf,	// (0x00036ec0) list_single_preview_pane_ParamLimits

0x78bf,	// (0x00036ec0) list_single_preview_pane

0x7903,	// (0x00036f04) list_single_preview_pane_g1

0x790b,	// (0x00036f0c) list_single_preview_pane_t1

0x78d1,	// (0x00036ed2) list_single_preview_pane_t2

0x0001,

0xfaf2,	// (0x0003f0f3) list_single_preview_pane_t

0x7919,	// (0x00036f1a) bg_popup_heading_pane_cp2_ParamLimits

0x7919,	// (0x00036f1a) bg_popup_heading_pane_cp2

0x792f,	// (0x00036f30) heading_preview_pane_g1

0x7937,	// (0x00036f38) heading_preview_pane_t1_ParamLimits

0x7937,	// (0x00036f38) heading_preview_pane_t1

0x2f1f,	// (0x00032520) soft_indicator_pane_t1_ParamLimits

0x3dc6,	// (0x000333c7) scroll_pane_ParamLimits

0x42db,	// (0x000338dc) scroll_sc2_left_pane

0x42e4,	// (0x000338e5) scroll_sc2_right_pane

0x4303,	// (0x00033904) scroll_bg_pane_g1_ParamLimits

0x4318,	// (0x00033919) scroll_bg_pane_g2_ParamLimits

0x4330,	// (0x00033931) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0003ece4) scroll_bg_pane_g_ParamLimits

0x4303,	// (0x00033904) scroll_handle_pane_g1_ParamLimits

0x4352,	// (0x00033953) scroll_handle_pane_g2_ParamLimits

0x4330,	// (0x00033931) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0003eceb) scroll_handle_pane_g_ParamLimits

0x114d,	// (0x0003074e) popup_choice_list_window_ParamLimits

0x114d,	// (0x0003074e) popup_choice_list_window

0x5277,	// (0x00034878) choice_list_pane

0x52f9,	// (0x000348fa) cell_toolbar_pane_t1

0x5321,	// (0x00034922) toolbar_button_pane_ParamLimits

0x63f4,	// (0x000359f5) ai_gene_pane_1_t2_ParamLimits

0x63f4,	// (0x000359f5) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0003ef0e) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0003ef0e) ai_gene_pane_1_t

0x7954,	// (0x00036f55) scroll_sc2_left_pane_g1

0x7954,	// (0x00036f55) scroll_sc2_right_pane_g1

0x4e23,	// (0x00034424) bg_popup_sub_pane_cp10

0x795e,	// (0x00036f5f) list_choice_list_pane

0x7977,	// (0x00036f78) list_single_choice_list_pane_ParamLimits

0x7977,	// (0x00036f78) list_single_choice_list_pane

0x798a,	// (0x00036f8b) list_single_choice_list_pane_g1

0x3fe7,	// (0x000335e8) list_single_choice_list_pane_t1_ParamLimits

0x3fe7,	// (0x000335e8) list_single_choice_list_pane_t1

0x7992,	// (0x00036f93) choice_list_pane_g1

0x799a,	// (0x00036f9b) choice_list_pane_t1

0x2d3f,	// (0x00032340) input_focus_pane_cp11

0x41be,	// (0x000337bf) title_pane_stacon_g2_ParamLimits

0x41be,	// (0x000337bf) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0003ecca) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003ecca) title_pane_stacon_g

0x4ae5,	// (0x000340e6) cursor_press_pane

0xbf86,	// (0x0003b587) popup_fep_hwr_window_ParamLimits

0xbf86,	// (0x0003b587) popup_fep_hwr_window

0x1273,	// (0x00030874) popup_fep_vkb_window_ParamLimits

0x1273,	// (0x00030874) popup_fep_vkb_window

0x79a8,	// (0x00036fa9) cursor_press_pane_g1

0x0002,

0xfb1b,	// (0x0003f11c) fep_vkb_side_pane_g_ParamLimits

0x1d1a,	// (0x0003131b) fep_hwr_candidate_pane_ParamLimits

0x1d1a,	// (0x0003131b) fep_hwr_candidate_pane

0x1d44,	// (0x00031345) fep_hwr_side_pane_ParamLimits

0x1d44,	// (0x00031345) fep_hwr_side_pane

0x1d64,	// (0x00031365) fep_hwr_top_pane_ParamLimits

0x1d64,	// (0x00031365) fep_hwr_top_pane

0x1d7c,	// (0x0003137d) fep_hwr_write_pane_ParamLimits

0x1d7c,	// (0x0003137d) fep_hwr_write_pane

0xfb1b,	// (0x0003f11c) fep_vkb_side_pane_g

0x79b0,	// (0x00036fb1) fep_hwr_top_pane_g1

0x79c2,	// (0x00036fc3) fep_hwr_top_pane_g2

0x1db6,	// (0x000313b7) fep_hwr_top_pane_g3

0x0002,

0xfaf7,	// (0x0003f0f8) fep_hwr_top_pane_g

0x1dcb,	// (0x000313cc) fep_hwr_top_text_pane

0x44d2,	// (0x00033ad3) fep_hwr_top_text_pane_g1

0x79f8,	// (0x00036ff9) fep_hwr_top_text_pane_t1

0x1ec1,	// (0x000314c2) fep_hwr_candidate_pane_g1

0x7c4b,	// (0x0003724c) fep_vkb_keypad_pane_g3_ParamLimits

0x7c4b,	// (0x0003724c) fep_vkb_keypad_pane_g3

0x7c73,	// (0x00037274) fep_vkb_keypad_pane_g4_ParamLimits

0x7c73,	// (0x00037274) fep_vkb_keypad_pane_g4

0x7ce2,	// (0x000372e3) fep_vkb_bottom_pane_g2_ParamLimits

0x7ce2,	// (0x000372e3) fep_vkb_bottom_pane_g2

0x0001,

0xfb22,	// (0x0003f123) fep_vkb_bottom_pane_g_ParamLimits

0xfb22,	// (0x0003f123) fep_vkb_bottom_pane_g

0x7954,	// (0x00036f55) cell_vkb_side_pane_g2

0x0001,

0xfb2c,	// (0x0003f12d) cell_vkb_side_pane_g

0x7d6d,	// (0x0003736e) cell_vkb_side_pane_t1

0x7d7b,	// (0x0003737c) cell_vkb_side_pane_t1_copy1

0x7954,	// (0x00036f55) bg_fep_vkb_candidate_pane_g2

0x7ea7,	// (0x000374a8) cell_vkb_candidate_pane_ParamLimits

0x7a06,	// (0x00037007) aid_size_cell_vkb_ParamLimits

0x7a06,	// (0x00037007) aid_size_cell_vkb

0x7ea7,	// (0x000374a8) cell_vkb_candidate_pane

0x1ee8,	// (0x000314e9) bg_popup_fep_shadow_pane_g1

0xe084,	// (0x0003d685) fep_vkb_bottom_pane_ParamLimits

0xe084,	// (0x0003d685) fep_vkb_bottom_pane

0x7aca,	// (0x000370cb) fep_vkb_candidate_pane_ParamLimits

0x7aca,	// (0x000370cb) fep_vkb_candidate_pane

0xe0a9,	// (0x0003d6aa) fep_vkb_keypad_pane_ParamLimits

0xe0a9,	// (0x0003d6aa) fep_vkb_keypad_pane

0xe0e5,	// (0x0003d6e6) fep_vkb_side_pane_ParamLimits

0xe0e5,	// (0x0003d6e6) fep_vkb_side_pane

0xe121,	// (0x0003d722) fep_vkb_top_pane_ParamLimits

0xe121,	// (0x0003d722) fep_vkb_top_pane

0x7ba4,	// (0x000371a5) fep_vkb_top_pane_g1_ParamLimits

0x7ba4,	// (0x000371a5) fep_vkb_top_pane_g1

0x7bb3,	// (0x000371b4) fep_vkb_top_pane_g2_ParamLimits

0x7bb3,	// (0x000371b4) fep_vkb_top_pane_g2

0x7bc2,	// (0x000371c3) fep_vkb_top_pane_g3_ParamLimits

0x7bc2,	// (0x000371c3) fep_vkb_top_pane_g3

0x0003,

0xfb12,	// (0x0003f113) fep_vkb_top_pane_g_ParamLimits

0xfb12,	// (0x0003f113) fep_vkb_top_pane_g

0x7be0,	// (0x000371e1) fep_vkb_top_text_pane_ParamLimits

0x7be0,	// (0x000371e1) fep_vkb_top_text_pane

0xe15d,	// (0x0003d75e) fep_vkb_side_pane_g1_ParamLimits

0xe15d,	// (0x0003d75e) fep_vkb_side_pane_g1

0x7c3a,	// (0x0003723b) grid_vkb_side_pane_ParamLimits

0x7c3a,	// (0x0003723b) grid_vkb_side_pane

0x1ef0,	// (0x000314f1) bg_popup_fep_shadow_pane_g2

0x1ef9,	// (0x000314fa) bg_popup_fep_shadow_pane_g3

0x1f01,	// (0x00031502) bg_popup_fep_shadow_pane_g4

0x1f0a,	// (0x0003150b) bg_popup_fep_shadow_pane_g5

0x1f14,	// (0x00031515) bg_popup_fep_shadow_pane_g6

0x1f1c,	// (0x0003151d) bg_popup_fep_shadow_pane_g7

0x3ec6,	// (0x000334c7) bg_popup_fep_shadow_pane_g8

0x7c91,	// (0x00037292) grid_vkb_keypad_number_pane_ParamLimits

0x7c91,	// (0x00037292) grid_vkb_keypad_number_pane

0x7ca1,	// (0x000372a2) grid_vkb_keypad_pane_ParamLimits

0x7ca1,	// (0x000372a2) grid_vkb_keypad_pane

0x7cc7,	// (0x000372c8) fep_vkb_bottom_pane_g1_ParamLimits

0x7cc7,	// (0x000372c8) fep_vkb_bottom_pane_g1

0x7cf0,	// (0x000372f1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7cf0,	// (0x000372f1) grid_vkb_keypad_bottom_left_pane

0x7d05,	// (0x00037306) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7d05,	// (0x00037306) grid_vkb_keypad_bottom_right_pane

0x7d1a,	// (0x0003731b) fep_vkb_top_text_pane_g1

0xe1a4,	// (0x0003d7a5) fep_vkb_top_text_pane_t1

0xe1b6,	// (0x0003d7b7) cell_vkb_side_pane_ParamLimits

0xe1b6,	// (0x0003d7b7) cell_vkb_side_pane

0x7954,	// (0x00036f55) cell_vkb_side_pane_g1

0x7d89,	// (0x0003738a) cell_vkb_keypad_pane_ParamLimits

0x7d89,	// (0x0003738a) cell_vkb_keypad_pane

0x7dfe,	// (0x000373ff) cell_vkb_keypad_pane_g1

0x0008,

0xfb3f,	// (0x0003f140) bg_popup_fep_shadow_pane_g

0x1f2e,	// (0x0003152f) cell_hwr_side_pane_g1

0x1f2e,	// (0x0003152f) cell_hwr_side_pane_g2

0x7e08,	// (0x00037409) cell_vkb_keypad_pane_t1

0xe1cc,	// (0x0003d7cd) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe1cc,	// (0x0003d7cd) cell_vkb_keypad_bottom_left_pane

0xe1e1,	// (0x0003d7e2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe1e1,	// (0x0003d7e2) cell_vkb_keypad_bottom_right_pane

0x7954,	// (0x00036f55) cell_vkb_keypad_bottom_left_pane_g1

0x7954,	// (0x00036f55) cell_vkb_keypad_bottom_right_pane_g1

0x7e6c,	// (0x0003746d) cell_vkb_keypad_number_pane_ParamLimits

0x7e6c,	// (0x0003746d) cell_vkb_keypad_number_pane

0x7e8b,	// (0x0003748c) cell_vkb_keypad_number_pane_g1

0x7e95,	// (0x00037496) cell_vkb_keypad_number_pane_g2

0x7e9e,	// (0x0003749f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb31,	// (0x0003f132) cell_vkb_keypad_number_pane_g

0x7e08,	// (0x00037409) cell_vkb_keypad_number_pane_t1

0x7ec2,	// (0x000374c3) fep_vkb_candidate_pane_g1

0x0001,

0xfb52,	// (0x0003f153) cell_hwr_side_pane_g

0x7edb,	// (0x000374dc) cell_hwr_side_pane_t1

0x1f38,	// (0x00031539) cell_hwr_side_pane_t1_copy1

0x1f46,	// (0x00031547) cell_hwr_candidate_pane_g1

0x1f75,	// (0x00031576) cell_hwr_candidate_pane_t1

0x7954,	// (0x00036f55) cell_vkb_candidate_pane_g2

0x7f1f,	// (0x00037520) cell_vkb_candidate_pane_t1

0x1ce1,	// (0x000312e2) bg_popup_fep_shadow_pane_ParamLimits

0x1ce1,	// (0x000312e2) bg_popup_fep_shadow_pane

0x1d96,	// (0x00031397) bg_fep_hwr_top_pane_g4

0x79d4,	// (0x00036fd5) bg_hwr_side_pane_g1_ParamLimits

0x79d4,	// (0x00036fd5) bg_hwr_side_pane_g1

0xc6c2,	// (0x0003bcc3) cell_hwr_side_pane_ParamLimits

0xc6c2,	// (0x0003bcc3) cell_hwr_side_pane

0x1e42,	// (0x00031443) fep_hwr_write_pane_g1_ParamLimits

0x1e42,	// (0x00031443) fep_hwr_write_pane_g1

0x1e4f,	// (0x00031450) fep_hwr_write_pane_g2_ParamLimits

0x1e4f,	// (0x00031450) fep_hwr_write_pane_g2

0x1e5c,	// (0x0003145d) fep_hwr_write_pane_g3_ParamLimits

0x1e5c,	// (0x0003145d) fep_hwr_write_pane_g3

0xc6e2,	// (0x0003bce3) fep_hwr_write_pane_g4_ParamLimits

0xc6e2,	// (0x0003bce3) fep_hwr_write_pane_g4

0x0005,

0xfafe,	// (0x0003f0ff) fep_hwr_write_pane_g_ParamLimits

0xfafe,	// (0x0003f0ff) fep_hwr_write_pane_g

0x1d96,	// (0x00031397) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1d96,	// (0x00031397) bg_fep_hwr_candidate_pane_g2

0x1e7f,	// (0x00031480) cell_hwr_candidate_pane_ParamLimits

0x1e7f,	// (0x00031480) cell_hwr_candidate_pane

0x1ec1,	// (0x000314c2) fep_hwr_candidate_pane_g1_ParamLimits

0x7a34,	// (0x00037035) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7a34,	// (0x00037035) bg_popup_fep_shadow_pane_cp2

0x7bd2,	// (0x000371d3) fep_vkb_top_pane_g4_ParamLimits

0x7bd2,	// (0x000371d3) fep_vkb_top_pane_g4

0x7c18,	// (0x00037219) fep_vkb_side_pane_g2_ParamLimits

0x7c18,	// (0x00037219) fep_vkb_side_pane_g2

0xba7e,	// (0x0003b07f) list_setting_pane_t4_ParamLimits

0xba7e,	// (0x0003b07f) list_setting_pane_t4

0xbb18,	// (0x0003b119) list_setting_number_pane_t5_ParamLimits

0xbb18,	// (0x0003b119) list_setting_number_pane_t5

0x4509,	// (0x00033b0a) list_double_heading_pane_cp2_ParamLimits

0x4509,	// (0x00033b0a) list_double_heading_pane_cp2

0x3e61,	// (0x00033462) list_double_heading_pane_g1_cp2_ParamLimits

0x3e61,	// (0x00033462) list_double_heading_pane_g1_cp2

0x3e6d,	// (0x0003346e) list_double_heading_pane_g2_cp2_ParamLimits

0x3e6d,	// (0x0003346e) list_double_heading_pane_g2_cp2

0x7f2d,	// (0x0003752e) list_double_heading_pane_t1_cp2_ParamLimits

0x7f2d,	// (0x0003752e) list_double_heading_pane_t1_cp2

0x7f43,	// (0x00037544) list_double_heading_pane_t2_cp2_ParamLimits

0x7f43,	// (0x00037544) list_double_heading_pane_t2_cp2

0x2d27,	// (0x00032328) aid_value_unit2

0x01de,	// (0x0002f7df) popup_preview_fixed_window

0x386d,	// (0x00032e6e) bg_popup_preview_window_pane_cp02

0x7f55,	// (0x00037556) list_preview_fixed_pane

0x7f9b,	// (0x0003759c) list_empty_pane_fp_ParamLimits

0x7f9b,	// (0x0003759c) list_empty_pane_fp

0x7f9b,	// (0x0003759c) list_single_cale_day_pane_fp_ParamLimits

0x7f9b,	// (0x0003759c) list_single_cale_day_pane_fp

0x7f9b,	// (0x0003759c) list_single_graphic_heading_pane_fp_ParamLimits

0x7f9b,	// (0x0003759c) list_single_graphic_heading_pane_fp

0x7f9b,	// (0x0003759c) list_single_graphic_pane_fp_ParamLimits

0x7f9b,	// (0x0003759c) list_single_graphic_pane_fp

0x7f9b,	// (0x0003759c) list_single_heading_pane_fp_ParamLimits

0x7f9b,	// (0x0003759c) list_single_heading_pane_fp

0x7f9b,	// (0x0003759c) list_single_pane_fp_ParamLimits

0x7f9b,	// (0x0003759c) list_single_pane_fp

0x7fb0,	// (0x000375b1) list_single_pane_fp_g1_ParamLimits

0x7fb0,	// (0x000375b1) list_single_pane_fp_g1

0x33e7,	// (0x000329e8) list_single_pane_fp_g2_ParamLimits

0x33e7,	// (0x000329e8) list_single_pane_fp_g2

0x33f3,	// (0x000329f4) list_single_pane_fp_g3_ParamLimits

0x33f3,	// (0x000329f4) list_single_pane_fp_g3

0x7fbc,	// (0x000375bd) list_single_pane_fp_g4_ParamLimits

0x7fbc,	// (0x000375bd) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0003f166) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0003f166) list_single_pane_fp_g

0x3407,	// (0x00032a08) list_single_pane_fp_t1_ParamLimits

0x3407,	// (0x00032a08) list_single_pane_fp_t1

0x341e,	// (0x00032a1f) list_single_graphic_pane_fp_g1_ParamLimits

0x341e,	// (0x00032a1f) list_single_graphic_pane_fp_g1

0x7fb0,	// (0x000375b1) list_single_graphic_pane_fp_g2_ParamLimits

0x7fb0,	// (0x000375b1) list_single_graphic_pane_fp_g2

0x33e7,	// (0x000329e8) list_single_graphic_pane_fp_g3_ParamLimits

0x33e7,	// (0x000329e8) list_single_graphic_pane_fp_g3

0x33f3,	// (0x000329f4) list_single_graphic_pane_fp_g4_ParamLimits

0x33f3,	// (0x000329f4) list_single_graphic_pane_fp_g4

0x7fbc,	// (0x000375bd) list_single_graphic_pane_fp_g5_ParamLimits

0x7fbc,	// (0x000375bd) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003f16f) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003f16f) list_single_graphic_pane_fp_g

0x342a,	// (0x00032a2b) list_single_graphic_pane_fp_t1_ParamLimits

0x342a,	// (0x00032a2b) list_single_graphic_pane_fp_t1

0x341e,	// (0x00032a1f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x341e,	// (0x00032a1f) list_single_graphic_heading_pane_fp_g1

0x7fb0,	// (0x000375b1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7fb0,	// (0x000375b1) list_single_graphic_heading_pane_fp_g2

0x33e7,	// (0x000329e8) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x33e7,	// (0x000329e8) list_single_graphic_heading_pane_fp_g3

0x33f3,	// (0x000329f4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x33f3,	// (0x000329f4) list_single_graphic_heading_pane_fp_g4

0x7fbc,	// (0x000375bd) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7fbc,	// (0x000375bd) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003f16f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003f16f) list_single_graphic_heading_pane_fp_g

0x3440,	// (0x00032a41) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3440,	// (0x00032a41) list_single_graphic_heading_pane_fp_t1

0x3456,	// (0x00032a57) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3456,	// (0x00032a57) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0003f17a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0003f17a) list_single_graphic_heading_pane_fp_t

0x3468,	// (0x00032a69) list_single_cale_day_pane_fp_g1_ParamLimits

0x3468,	// (0x00032a69) list_single_cale_day_pane_fp_g1

0x7fc8,	// (0x000375c9) list_single_cale_day_pane_fp_g2_ParamLimits

0x7fc8,	// (0x000375c9) list_single_cale_day_pane_fp_g2

0x34a0,	// (0x00032aa1) list_single_cale_day_pane_fp_g3_ParamLimits

0x34a0,	// (0x00032aa1) list_single_cale_day_pane_fp_g3

0x34c8,	// (0x00032ac9) list_single_cale_day_pane_fp_g4_ParamLimits

0x34c8,	// (0x00032ac9) list_single_cale_day_pane_fp_g4

0x34ec,	// (0x00032aed) list_single_cale_day_pane_fp_g5_ParamLimits

0x34ec,	// (0x00032aed) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003f17f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003f17f) list_single_cale_day_pane_fp_g

0x3510,	// (0x00032b11) list_single_cale_day_pane_fp_t1_ParamLimits

0x3510,	// (0x00032b11) list_single_cale_day_pane_fp_t1

0x3536,	// (0x00032b37) list_single_cale_day_pane_fp_t2_ParamLimits

0x3536,	// (0x00032b37) list_single_cale_day_pane_fp_t2

0x354f,	// (0x00032b50) list_single_cale_day_pane_fp_t3_ParamLimits

0x354f,	// (0x00032b50) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0003f18a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0003f18a) list_single_cale_day_pane_fp_t

0x7fb0,	// (0x000375b1) list_empty_pane_fp_g1_ParamLimits

0x7fb0,	// (0x000375b1) list_empty_pane_fp_g1

0x3568,	// (0x00032b69) list_empty_pane_fp_t1

0x3576,	// (0x00032b77) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0003f191) list_empty_pane_fp_t

0x7fb0,	// (0x000375b1) list_single_heading_pane_fp_g1_ParamLimits

0x7fb0,	// (0x000375b1) list_single_heading_pane_fp_g1

0x33e7,	// (0x000329e8) list_single_heading_pane_fp_g2_ParamLimits

0x33e7,	// (0x000329e8) list_single_heading_pane_fp_g2

0x33f3,	// (0x000329f4) list_single_heading_pane_fp_g3_ParamLimits

0x33f3,	// (0x000329f4) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0003f196) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0003f196) list_single_heading_pane_fp_g

0x3584,	// (0x00032b85) list_single_heading_pane_fp_t1_ParamLimits

0x3584,	// (0x00032b85) list_single_heading_pane_fp_t1

0x3596,	// (0x00032b97) list_single_heading_pane_fp_t2_ParamLimits

0x3596,	// (0x00032b97) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0003f19d) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0003f19d) list_single_heading_pane_fp_t

0x4055,	// (0x00033656) aid_size_cell_fast

0x37dd,	// (0x00032dde) soft_indicator_pane_cp1_t1

0x4092,	// (0x00033693) cell_app_pane_cp2_ParamLimits

0x4092,	// (0x00033693) cell_app_pane_cp2

0x1d03,	// (0x00031304) fep_hwr_candidate_drop_down_list_pane

0x1edb,	// (0x000314dc) fep_hwr_candidate_pane_g3_ParamLimits

0x1edb,	// (0x000314dc) fep_hwr_candidate_pane_g3

0xe40e,	// (0x0003da0f) fep_hwr_candidate_pane_g4_ParamLimits

0xe40e,	// (0x0003da0f) fep_hwr_candidate_pane_g4

0x0002,

0xfb0b,	// (0x0003f10c) fep_hwr_candidate_pane_g_ParamLimits

0xfb0b,	// (0x0003f10c) fep_hwr_candidate_pane_g

0x7ab9,	// (0x000370ba) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7ab9,	// (0x000370ba) fep_vkb_candidate_drop_down_list_pane

0x7eca,	// (0x000374cb) fep_vkb_candidate_pane_g3

0x7ed2,	// (0x000374d3) fep_vkb_candidate_pane_g4

0x0002,

0xfb38,	// (0x0003f139) fep_vkb_candidate_pane_g

0x1f46,	// (0x00031547) cell_hwr_candidate_pane_g1_ParamLimits

0x1f54,	// (0x00031555) cell_hwr_candidate_pane_g3_ParamLimits

0x1f54,	// (0x00031555) cell_hwr_candidate_pane_g3

0x9465,	// (0x00038a66) cell_hwr_candidate_pane_g4_ParamLimits

0x9465,	// (0x00038a66) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0003f158) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0003f158) cell_hwr_candidate_pane_g

0x7ee9,	// (0x000374ea) cell_vkb_candidate_pane_g3_ParamLimits

0x7ee9,	// (0x000374ea) cell_vkb_candidate_pane_g3

0x7f04,	// (0x00037505) cell_vkb_candidate_pane_g4_ParamLimits

0x7f04,	// (0x00037505) cell_vkb_candidate_pane_g4

0x7fd4,	// (0x000375d5) cell_app_pane_cp2_g1_ParamLimits

0x7fd4,	// (0x000375d5) cell_app_pane_cp2_g1

0x7ff2,	// (0x000375f3) cell_app_pane_cp2_g2_ParamLimits

0x7ff2,	// (0x000375f3) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0003f1a2) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0003f1a2) cell_app_pane_cp2_g

0x7ffe,	// (0x000375ff) cell_app_pane_cp2_t1_ParamLimits

0x7ffe,	// (0x000375ff) cell_app_pane_cp2_t1

0x3e53,	// (0x00033454) grid_highlight_pane_cp1_ParamLimits

0x3e53,	// (0x00033454) grid_highlight_pane_cp1

0x1f93,	// (0x00031594) cell_hwr_candidate_pane_cp1_ParamLimits

0x1f93,	// (0x00031594) cell_hwr_candidate_pane_cp1

0x1f46,	// (0x00031547) fep_hwr_candidate_drop_down_list_pane_g1

0x1fb2,	// (0x000315b3) fep_hwr_candidate_drop_down_list_pane_g2

0x1fbf,	// (0x000315c0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0003f1a7) fep_hwr_candidate_drop_down_list_pane_g

0x1fcc,	// (0x000315cd) fep_hwr_candidate_drop_down_list_scroll_pane

0x1fd5,	// (0x000315d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1fd5,	// (0x000315d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1fe2,	// (0x000315e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1fe2,	// (0x000315e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1fef,	// (0x000315f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1fef,	// (0x000315f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1ffc,	// (0x000315fd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1ffc,	// (0x000315fd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x2017,	// (0x00031618) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x2017,	// (0x00031618) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2032,	// (0x00031633) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2032,	// (0x00031633) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x204d,	// (0x0003164e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x204d,	// (0x0003164e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2068,	// (0x00031669) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2068,	// (0x00031669) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0003f1ae) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0003f1ae) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8010,	// (0x00037611) cell_vkb_candidate_pane_cp1_ParamLimits

0x8010,	// (0x00037611) cell_vkb_candidate_pane_cp1

0x7bd2,	// (0x000371d3) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7bd2,	// (0x000371d3) fep_vkb_candidate_drop_down_list_pane_g1

0x8030,	// (0x00037631) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8030,	// (0x00037631) fep_vkb_candidate_drop_down_list_pane_g2

0x803d,	// (0x0003763e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x803d,	// (0x0003763e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x0003f1bf) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x0003f1bf) fep_vkb_candidate_drop_down_list_pane_g

0x804a,	// (0x0003764b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x804a,	// (0x0003764b) fep_vkb_candidate_drop_down_list_scroll_pane

0x8057,	// (0x00037658) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8057,	// (0x00037658) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8064,	// (0x00037665) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8064,	// (0x00037665) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8070,	// (0x00037671) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8070,	// (0x00037671) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x807c,	// (0x0003767d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x807c,	// (0x0003767d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x809d,	// (0x0003769e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x809d,	// (0x0003769e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x80be,	// (0x000376bf) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x80be,	// (0x000376bf) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x80df,	// (0x000376e0) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x80df,	// (0x000376e0) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8100,	// (0x00037701) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8100,	// (0x00037701) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x0003f1c6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x0003f1c6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcea7,	// (0x0003c4a8) title_pane_g1_ParamLimits

0xceba,	// (0x0003c4bb) title_pane_g2_ParamLimits

0xf54e,	// (0x0003eb4f) title_pane_g_ParamLimits

0x44c2,	// (0x00033ac3) aid_call2_pane

0x44ca,	// (0x00033acb) aid_call_pane

0x44d2,	// (0x00033ad3) popup_clock_analogue_window_g1

0x44d2,	// (0x00033ad3) popup_clock_analogue_window_g2

0x0c6a,	// (0x0003026b) popup_clock_analogue_window_g3

0x0c73,	// (0x00030274) popup_clock_analogue_window_g4

0x2d49,	// (0x0003234a) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0003ecf9) popup_clock_analogue_window_g

0x0c7b,	// (0x0003027c) popup_clock_analogue_window_t1

0x0c89,	// (0x0003028a) clock_digital_number_pane_ParamLimits

0x0c89,	// (0x0003028a) clock_digital_number_pane

0x0c95,	// (0x00030296) clock_digital_number_pane_cp02_ParamLimits

0x0c95,	// (0x00030296) clock_digital_number_pane_cp02

0x0ca1,	// (0x000302a2) clock_digital_number_pane_cp03_ParamLimits

0x0ca1,	// (0x000302a2) clock_digital_number_pane_cp03

0x0cad,	// (0x000302ae) clock_digital_number_pane_cp04_ParamLimits

0x0cad,	// (0x000302ae) clock_digital_number_pane_cp04

0x0cb9,	// (0x000302ba) clock_digital_separator_pane_ParamLimits

0x0cb9,	// (0x000302ba) clock_digital_separator_pane

0x0cc5,	// (0x000302c6) popup_clock_digital_window_t1_ParamLimits

0x0cc5,	// (0x000302c6) popup_clock_digital_window_t1

0x2d49,	// (0x0003234a) clock_digital_number_pane_g1

0x2d49,	// (0x0003234a) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0003ed04) clock_digital_number_pane_g

0x2d49,	// (0x0003234a) clock_digital_separator_pane_g1

0x2d49,	// (0x0003234a) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0003ed04) clock_digital_separator_pane_g

0xd56e,	// (0x0003cb6f) aid_fill_nsta_ParamLimits

0xd6a4,	// (0x0003cca5) indicator_nsta_pane_ParamLimits

0x5104,	// (0x00034705) popup_clock_analogue_window

0x5104,	// (0x00034705) popup_clock_digital_window

0x4016,	// (0x00033617) grid_indicator_nsta_pane_ParamLimits

0x7345,	// (0x00036946) clock_nsta_pane_t2

0x0001,

0xfa8b,	// (0x0003f08c) clock_nsta_pane_t

0x0c2e,	// (0x0003022f) aid_size_max_handle

0xbcb7,	// (0x0003b2b8) aid_size_min_handle

0x4ae5,	// (0x000340e6) editor_scroll_pane

0x811b,	// (0x0003771c) ex_editor_pane

0x3fc3,	// (0x000335c4) scroll_pane_cp13

0x3df2,	// (0x000333f3) scroll_pane_cp14

0x4501,	// (0x00033b02) scroll_pane_cp36

0xd32d,	// (0x0003c92e) list_single_graphic_hl_pane_cp2_ParamLimits

0xd32d,	// (0x0003c92e) list_single_graphic_hl_pane_cp2

0xc650,	// (0x0003bc51) list_single_graphic_hl_pane_ParamLimits

0xc650,	// (0x0003bc51) list_single_graphic_hl_pane

0x35ac,	// (0x00032bad) aid_size_min_hl_cp1

0x8123,	// (0x00037724) list_highlight_pane_cp34_ParamLimits

0x8123,	// (0x00037724) list_highlight_pane_cp34

0x8134,	// (0x00037735) list_single_graphic_hl_pane_g1_ParamLimits

0x8134,	// (0x00037735) list_single_graphic_hl_pane_g1

0xc6f7,	// (0x0003bcf8) list_single_graphic_hl_pane_g2_ParamLimits

0xc6f7,	// (0x0003bcf8) list_single_graphic_hl_pane_g2

0xc6f7,	// (0x0003bcf8) list_single_graphic_hl_pane_g3_ParamLimits

0xc6f7,	// (0x0003bcf8) list_single_graphic_hl_pane_g3

0xc703,	// (0x0003bd04) list_single_graphic_hl_pane_g4_ParamLimits

0xc703,	// (0x0003bd04) list_single_graphic_hl_pane_g4

0xc70f,	// (0x0003bd10) list_single_graphic_hl_pane_g5_ParamLimits

0xc70f,	// (0x0003bd10) list_single_graphic_hl_pane_g5

0x0004,

0xfbd6,	// (0x0003f1d7) list_single_graphic_hl_pane_g_ParamLimits

0xfbd6,	// (0x0003f1d7) list_single_graphic_hl_pane_g

0xc723,	// (0x0003bd24) list_single_graphic_hl_pane_t1_ParamLimits

0xc723,	// (0x0003bd24) list_single_graphic_hl_pane_t1

0x8141,	// (0x00037742) aid_size_min_hl_cp2

0x814a,	// (0x0003774b) list_highlight_pane_cp34_cp2_ParamLimits

0x814a,	// (0x0003774b) list_highlight_pane_cp34_cp2

0x8134,	// (0x00037735) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8134,	// (0x00037735) list_single_graphic_hl_pane_g1_cp2

0x8157,	// (0x00037758) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8157,	// (0x00037758) list_single_graphic_hl_pane_g2_cp2

0x8163,	// (0x00037764) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8163,	// (0x00037764) list_single_graphic_hl_pane_g3_cp2

0x7560,	// (0x00036b61) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7560,	// (0x00036b61) list_single_graphic_hl_pane_g4_cp2

0x8171,	// (0x00037772) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8171,	// (0x00037772) list_single_graphic_hl_pane_g5_cp2

0xbd9e,	// (0x0003b39f) control_pane_g4_ParamLimits

0xbd9e,	// (0x0003b39f) control_pane_g4

0x4e23,	// (0x00034424) bg_popup_sub_pane_cp10_ParamLimits

0x795e,	// (0x00036f5f) list_choice_list_pane_ParamLimits

0x796d,	// (0x00036f6e) scroll_pane_cp23

0x386d,	// (0x00032e6e) bg_popup_preview_window_pane_cp02_ParamLimits

0x7f55,	// (0x00037556) list_preview_fixed_pane_ParamLimits

0x7f6b,	// (0x0003756c) list_preview_fixed_pane_cp_ParamLimits

0x7f6b,	// (0x0003756c) list_preview_fixed_pane_cp

0x7f77,	// (0x00037578) popup_preview_fixed_window_g1_ParamLimits

0x7f77,	// (0x00037578) popup_preview_fixed_window_g1

0x7f83,	// (0x00037584) popup_preview_fixed_window_g2_ParamLimits

0x7f83,	// (0x00037584) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0003f15f) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0003f15f) popup_preview_fixed_window_g

0x0ba2,	// (0x000301a3) aid_navi_side_left_pane_ParamLimits

0x0bb7,	// (0x000301b8) aid_navi_side_right_pane_ParamLimits

0x0bcf,	// (0x000301d0) navi_icon_pane_stacon_ParamLimits

0x0be3,	// (0x000301e4) navi_navi_pane_stacon_ParamLimits

0x0bcf,	// (0x000301d0) navi_text_pane_stacon_ParamLimits

0x009f,	// (0x0002f6a0) main_text_info_pane

0x819b,	// (0x0003779c) listscroll_text_info_pane

0x81a3,	// (0x000377a4) list_text_info_pane_ParamLimits

0x81a3,	// (0x000377a4) list_text_info_pane

0x81b2,	// (0x000377b3) scroll_pane_cp24_ParamLimits

0x81b2,	// (0x000377b3) scroll_pane_cp24

0xe1fc,	// (0x0003d7fd) list_text_info_pane_t1_ParamLimits

0xe1fc,	// (0x0003d7fd) list_text_info_pane_t1

0xbef9,	// (0x0003b4fa) popup_fast_swap2_window_ParamLimits

0xbef9,	// (0x0003b4fa) popup_fast_swap2_window

0x8201,	// (0x00037802) aid_size_cell_fast2

0x2d3f,	// (0x00032340) bg_popup_window_pane_cp17

0x578b,	// (0x00034d8c) heading_pane_cp2

0x3abc,	// (0x000330bd) listscroll_fast2_pane

0x820b,	// (0x0003780c) grid_fast2_pane

0x8215,	// (0x00037816) listscroll_fast2_pane_g1

0x821d,	// (0x0003781e) listscroll_fast2_pane_g2

0x0001,

0xfbe1,	// (0x0003f1e2) listscroll_fast2_pane_g

0x3fc3,	// (0x000335c4) scroll_pane_cp26

0x8227,	// (0x00037828) cell_fast2_pane_ParamLimits

0x8227,	// (0x00037828) cell_fast2_pane

0x823c,	// (0x0003783d) cell_fast2_pane_g1

0x8245,	// (0x00037846) cell_fast2_pane_g2

0x824e,	// (0x0003784f) cell_fast2_pane_g3

0x0002,

0xfbe6,	// (0x0003f1e7) cell_fast2_pane_g

0x3baf,	// (0x000331b0) grid_highlight_pane_cp9

0x1129,	// (0x0003072a) main_eswt_pane_ParamLimits

0x1129,	// (0x0003072a) main_eswt_pane

0x81c7,	// (0x000377c8) list_single_text_info_pane

0x8256,	// (0x00037857) eswt_ctrl_button_pane

0x8256,	// (0x00037857) eswt_ctrl_canvas_pane

0x825e,	// (0x0003785f) eswt_ctrl_combo_pane

0x8256,	// (0x00037857) eswt_ctrl_default_pane

0x8256,	// (0x00037857) eswt_ctrl_label_pane

0x8266,	// (0x00037867) eswt_ctrl_wait_pane

0x826e,	// (0x0003786f) eswt_shell_pane

0x2d3f,	// (0x00032340) listscroll_eswt_app_pane

0x828e,	// (0x0003788f) popup_eswt_tasktip_window_ParamLimits

0x828e,	// (0x0003788f) popup_eswt_tasktip_window

0x53a1,	// (0x000349a2) bg_popup_window_pane_cp18

0x829f,	// (0x000378a0) eswt_control_pane_g1_ParamLimits

0x829f,	// (0x000378a0) eswt_control_pane_g1

0x82ac,	// (0x000378ad) eswt_control_pane_g2_ParamLimits

0x82ac,	// (0x000378ad) eswt_control_pane_g2

0x82b9,	// (0x000378ba) eswt_control_pane_g3_ParamLimits

0x82b9,	// (0x000378ba) eswt_control_pane_g3

0x82c6,	// (0x000378c7) eswt_control_pane_g4_ParamLimits

0x82c6,	// (0x000378c7) eswt_control_pane_g4

0x0003,

0xfbed,	// (0x0003f1ee) eswt_control_pane_g_ParamLimits

0xfbed,	// (0x0003f1ee) eswt_control_pane_g

0x3e53,	// (0x00033454) bg_button_pane_ParamLimits

0x3e53,	// (0x00033454) bg_button_pane

0x3bc4,	// (0x000331c5) common_borders_pane_copy2_ParamLimits

0x3bc4,	// (0x000331c5) common_borders_pane_copy2

0x82d3,	// (0x000378d4) control_button_pane_g1_ParamLimits

0x82d3,	// (0x000378d4) control_button_pane_g1

0x82df,	// (0x000378e0) control_button_pane_g2_ParamLimits

0x82df,	// (0x000378e0) control_button_pane_g2

0x82eb,	// (0x000378ec) control_button_pane_g3_ParamLimits

0x82eb,	// (0x000378ec) control_button_pane_g3

0x0002,

0xfbf6,	// (0x0003f1f7) control_button_pane_g_ParamLimits

0xfbf6,	// (0x0003f1f7) control_button_pane_g

0x82ff,	// (0x00037900) control_button_pane_t1

0x830d,	// (0x0003790e) control_button_pane_t2

0x0001,

0xfbfd,	// (0x0003f1fe) control_button_pane_t

0x532d,	// (0x0003492e) bg_button_pane_g1

0x533d,	// (0x0003493e) bg_button_pane_g2

0x5335,	// (0x00034936) bg_button_pane_g3

0x534d,	// (0x0003494e) bg_button_pane_g4

0x5345,	// (0x00034946) bg_button_pane_g5

0x5355,	// (0x00034956) bg_button_pane_g6

0x535d,	// (0x0003495e) bg_button_pane_g7

0x536d,	// (0x0003496e) bg_button_pane_g8

0x5365,	// (0x00034966) bg_button_pane_g9

0x0008,

0xf861,	// (0x0003ee62) bg_button_pane_g

0x7919,	// (0x00036f1a) common_borders_pane_ParamLimits

0x7919,	// (0x00036f1a) common_borders_pane

0x829f,	// (0x000378a0) eswt_control_pane_g1_copy1_ParamLimits

0x829f,	// (0x000378a0) eswt_control_pane_g1_copy1

0x82ac,	// (0x000378ad) eswt_control_pane_g2_copy1_ParamLimits

0x82ac,	// (0x000378ad) eswt_control_pane_g2_copy1

0x82b9,	// (0x000378ba) eswt_control_pane_g3_copy1_ParamLimits

0x82b9,	// (0x000378ba) eswt_control_pane_g3_copy1

0x82c6,	// (0x000378c7) eswt_control_pane_g4_copy1_ParamLimits

0x82c6,	// (0x000378c7) eswt_control_pane_g4_copy1

0x7954,	// (0x00036f55) bg_eswt_ctrl_canvas_pane_g1

0x7919,	// (0x00036f1a) common_borders_pane_cp2_ParamLimits

0x7919,	// (0x00036f1a) common_borders_pane_cp2

0x7919,	// (0x00036f1a) common_borders_pane_cp3_ParamLimits

0x7919,	// (0x00036f1a) common_borders_pane_cp3

0x831b,	// (0x0003791c) separator_horizontal_pane

0x8323,	// (0x00037924) separator_vertical_pane

0x829f,	// (0x000378a0) eswt_control_pane_g1_copy2_ParamLimits

0x829f,	// (0x000378a0) eswt_control_pane_g1_copy2

0x82ac,	// (0x000378ad) eswt_control_pane_g2_copy2_ParamLimits

0x82ac,	// (0x000378ad) eswt_control_pane_g2_copy2

0x82b9,	// (0x000378ba) eswt_control_pane_g3_copy2_ParamLimits

0x82b9,	// (0x000378ba) eswt_control_pane_g3_copy2

0x82c6,	// (0x000378c7) eswt_control_pane_g4_copy2_ParamLimits

0x82c6,	// (0x000378c7) eswt_control_pane_g4_copy2

0x2d3f,	// (0x00032340) common_borders_pane_cp4

0x832c,	// (0x0003792d) separator_horizontal_pane_g1

0x8335,	// (0x00037936) separator_horizontal_pane_g2

0x833e,	// (0x0003793f) separator_horizontal_pane_g3

0x0002,

0xfc02,	// (0x0003f203) separator_horizontal_pane_g

0x829f,	// (0x000378a0) eswt_control_pane_g1_copy3_ParamLimits

0x829f,	// (0x000378a0) eswt_control_pane_g1_copy3

0x82ac,	// (0x000378ad) eswt_control_pane_g2_copy3_ParamLimits

0x82ac,	// (0x000378ad) eswt_control_pane_g2_copy3

0x82b9,	// (0x000378ba) eswt_control_pane_g3_copy3_ParamLimits

0x82b9,	// (0x000378ba) eswt_control_pane_g3_copy3

0x82c6,	// (0x000378c7) eswt_control_pane_g4_copy3_ParamLimits

0x82c6,	// (0x000378c7) eswt_control_pane_g4_copy3

0x2d3f,	// (0x00032340) common_borders_pane_cp5

0x8347,	// (0x00037948) separator_vertical_pane_g1

0x8350,	// (0x00037951) separator_vertical_pane_g2

0x8359,	// (0x0003795a) separator_vertical_pane_g3

0x0002,

0xfc09,	// (0x0003f20a) separator_vertical_pane_g

0x829f,	// (0x000378a0) eswt_control_pane_g1_copy4_ParamLimits

0x829f,	// (0x000378a0) eswt_control_pane_g1_copy4

0x82ac,	// (0x000378ad) eswt_control_pane_g2_copy4_ParamLimits

0x82ac,	// (0x000378ad) eswt_control_pane_g2_copy4

0x82b9,	// (0x000378ba) eswt_control_pane_g3_copy4_ParamLimits

0x82b9,	// (0x000378ba) eswt_control_pane_g3_copy4

0x82c6,	// (0x000378c7) eswt_control_pane_g4_copy4_ParamLimits

0x82c6,	// (0x000378c7) eswt_control_pane_g4_copy4

0xe217,	// (0x0003d818) eswt_ctrl_combo_button_pane

0xe21f,	// (0x0003d820) eswt_ctrl_input_pane

0xe227,	// (0x0003d828) popup_choice_list_window_cp70

0xe22f,	// (0x0003d830) eswt_ctrl_input_pane_t1

0x2d3f,	// (0x00032340) input_focus_pane_cp70

0x7919,	// (0x00036f1a) bg_button_pane_cp70_ParamLimits

0x7919,	// (0x00036f1a) bg_button_pane_cp70

0xe23d,	// (0x0003d83e) eswt_ctrl_combo_button_pane_g1

0x8390,	// (0x00037991) wait_bar_pane_cp70

0x53a1,	// (0x000349a2) bg_popup_window_pane_cp70_ParamLimits

0x53a1,	// (0x000349a2) bg_popup_window_pane_cp70

0x8398,	// (0x00037999) popup_eswt_tasktip_window_t1

0x83ae,	// (0x000379af) wait_bar_pane_cp71_ParamLimits

0x83ae,	// (0x000379af) wait_bar_pane_cp71

0x83ba,	// (0x000379bb) grid_eswt_app_pane

0x42db,	// (0x000338dc) scroll_pane_cp70

0xe245,	// (0x0003d846) cell_eswt_app_pane_ParamLimits

0xe245,	// (0x0003d846) cell_eswt_app_pane

0xe26f,	// (0x0003d870) cell_eswt_app_pane_g1_ParamLimits

0xe26f,	// (0x0003d870) cell_eswt_app_pane_g1

0xe29e,	// (0x0003d89f) cell_eswt_app_pane_g2_ParamLimits

0xe29e,	// (0x0003d89f) cell_eswt_app_pane_g2

0x0001,

0xfc10,	// (0x0003f211) cell_eswt_app_pane_g_ParamLimits

0xfc10,	// (0x0003f211) cell_eswt_app_pane_g

0xe2c7,	// (0x0003d8c8) cell_eswt_app_pane_t1_ParamLimits

0xe2c7,	// (0x0003d8c8) cell_eswt_app_pane_t1

0x847d,	// (0x00037a7e) grid_highlight_pane_cp70_ParamLimits

0x847d,	// (0x00037a7e) grid_highlight_pane_cp70

0x49ba,	// (0x00033fbb) set_content_pane_g1

0xd523,	// (0x0003cb24) status_small_volume_pane

0x2083,	// (0x00031684) status_small_volume_pane_g1

0x208b,	// (0x0003168c) volume_small2_pane

0x2094,	// (0x00031695) volume_small2_pane_g1

0x209d,	// (0x0003169e) volume_small2_pane_g2

0x20a6,	// (0x000316a7) volume_small2_pane_g3

0x20af,	// (0x000316b0) volume_small2_pane_g4

0x20b8,	// (0x000316b9) volume_small2_pane_g5

0x20c1,	// (0x000316c2) volume_small2_pane_g6

0x20ca,	// (0x000316cb) volume_small2_pane_g7

0x20d3,	// (0x000316d4) volume_small2_pane_g8

0x20dc,	// (0x000316dd) volume_small2_pane_g9

0x20e5,	// (0x000316e6) volume_small2_pane_g10

0x0009,

0xfc15,	// (0x0003f216) volume_small2_pane_g

0x7d1a,	// (0x0003731b) fep_vkb_top_text_pane_g1_ParamLimits

0xe1a4,	// (0x0003d7a5) fep_vkb_top_text_pane_t1_ParamLimits

0x7f8f,	// (0x00037590) popup_preview_fixed_window_g3_ParamLimits

0x7f8f,	// (0x00037590) popup_preview_fixed_window_g3

0xc51c,	// (0x0003bb1d) popup_toolbar_trans_pane

0xdbb0,	// (0x0003d1b1) aid_height_set_list_ParamLimits

0x670d,	// (0x00035d0e) aid_size_parent_ParamLimits

0x4e23,	// (0x00034424) list_highlight_pane_cp2_ParamLimits

0x49ba,	// (0x00033fbb) set_content_pane_g1_ParamLimits

0xc662,	// (0x0003bc63) list_single_image_pane_ParamLimits

0xc662,	// (0x0003bc63) list_single_image_pane

0xe2f9,	// (0x0003d8fa) aid_size_cell_image_ParamLimits

0xe2f9,	// (0x0003d8fa) aid_size_cell_image

0xe306,	// (0x0003d907) grid_single_image_pane_ParamLimits

0xe306,	// (0x0003d907) grid_single_image_pane

0x60b5,	// (0x000356b6) list_single_image_pane_g1_ParamLimits

0x60b5,	// (0x000356b6) list_single_image_pane_g1

0x84a2,	// (0x00037aa3) list_single_image_pane_g2_ParamLimits

0x84a2,	// (0x00037aa3) list_single_image_pane_g2

0x0001,

0xfc2a,	// (0x0003f22b) list_single_image_pane_g_ParamLimits

0xfc2a,	// (0x0003f22b) list_single_image_pane_g

0x84b6,	// (0x00037ab7) list_single_image_pane_t1_ParamLimits

0x84b6,	// (0x00037ab7) list_single_image_pane_t1

0xe314,	// (0x0003d915) cell_image_list_pane_ParamLimits

0xe314,	// (0x0003d915) cell_image_list_pane

0xe32a,	// (0x0003d92b) cell_image_list_pane_g1

0xe333,	// (0x0003d934) cell_image_list_pane_g2

0x0001,

0xfc2f,	// (0x0003f230) cell_image_list_pane_g

0x84f2,	// (0x00037af3) aid_size_cell_tb_trans_pane

0x3e53,	// (0x00033454) bg_tb_trans_pane

0x8504,	// (0x00037b05) grid_tb_trans_pane

0x532d,	// (0x0003492e) bg_tb_trans_pane_g1

0x533d,	// (0x0003493e) bg_tb_trans_pane_g2

0x5335,	// (0x00034936) bg_tb_trans_pane_g3

0x534d,	// (0x0003494e) bg_tb_trans_pane_g4

0x5345,	// (0x00034946) bg_tb_trans_pane_g5

0x536d,	// (0x0003496e) bg_tb_trans_pane_g6

0x5365,	// (0x00034966) bg_tb_trans_pane_g7

0x5355,	// (0x00034956) bg_tb_trans_pane_g8

0x535d,	// (0x0003495e) bg_tb_trans_pane_g9

0x0008,

0xfc34,	// (0x0003f235) bg_tb_trans_pane_g

0x8518,	// (0x00037b19) cell_toolbar_trans_pane_ParamLimits

0x8518,	// (0x00037b19) cell_toolbar_trans_pane

0x7954,	// (0x00036f55) cell_toolbar_trans_pane_g1

0xdf8d,	// (0x0003d58e) list_form2_midp_pane_t1

0xdf9b,	// (0x0003d59c) list_form2_midp_pane_t2

0x0001,

0xfad1,	// (0x0003f0d2) list_form2_midp_pane_t

0x752e,	// (0x00036b2f) scroll_pane_cp51_ParamLimits

0x76f6,	// (0x00036cf7) form2_midp_wait_pane_g1

0x76ff,	// (0x00036d00) form2_midp_wait_pane_g2

0x7708,	// (0x00036d09) form2_midp_wait_pane_g3

0x0002,

0xfae6,	// (0x0003f0e7) form2_midp_wait_pane_g

0x2e33,	// (0x00032434) list_highlight_pane_cp21_ParamLimits

0x775f,	// (0x00036d60) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x776e,	// (0x00036d6f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x68c5,	// (0x00035ec6) list_single_2graphic_im_pane_ParamLimits

0x68c5,	// (0x00035ec6) list_single_2graphic_im_pane

0xe33c,	// (0x0003d93d) list_single_2graphic_im_pane_g1_ParamLimits

0xe33c,	// (0x0003d93d) list_single_2graphic_im_pane_g1

0xe34d,	// (0x0003d94e) list_single_2graphic_im_pane_g2_ParamLimits

0xe34d,	// (0x0003d94e) list_single_2graphic_im_pane_g2

0xe359,	// (0x0003d95a) list_single_2graphic_im_pane_g3_ParamLimits

0xe359,	// (0x0003d95a) list_single_2graphic_im_pane_g3

0x0003,

0xfc47,	// (0x0003f248) list_single_2graphic_im_pane_g_ParamLimits

0xfc47,	// (0x0003f248) list_single_2graphic_im_pane_g

0xe36d,	// (0x0003d96e) list_single_2graphic_im_pane_t1_ParamLimits

0xe36d,	// (0x0003d96e) list_single_2graphic_im_pane_t1

0x7f9b,	// (0x0003759c) list_single_graphic_2heading_pane_fp_ParamLimits

0x7f9b,	// (0x0003759c) list_single_graphic_2heading_pane_fp

0x341e,	// (0x00032a1f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x341e,	// (0x00032a1f) list_single_graphic_2heading_pane_fp_g1

0x7fb0,	// (0x000375b1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7fb0,	// (0x000375b1) list_single_graphic_2heading_pane_fp_g2

0x33e7,	// (0x000329e8) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x33e7,	// (0x000329e8) list_single_graphic_2heading_pane_fp_g3

0x33f3,	// (0x000329f4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x33f3,	// (0x000329f4) list_single_graphic_2heading_pane_fp_g4

0x7fbc,	// (0x000375bd) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7fbc,	// (0x000375bd) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003f16f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003f16f) list_single_graphic_2heading_pane_fp_g

0x35f7,	// (0x00032bf8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x35f7,	// (0x00032bf8) list_single_graphic_2heading_pane_fp_t1

0x3456,	// (0x00032a57) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3456,	// (0x00032a57) list_single_graphic_2heading_pane_fp_t2

0x360d,	// (0x00032c0e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x360d,	// (0x00032c0e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc50,	// (0x0003f251) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc50,	// (0x0003f251) list_single_graphic_2heading_pane_fp_t

0x79e0,	// (0x00036fe1) fep_hwr_write_pane_g5_ParamLimits

0x79e0,	// (0x00036fe1) fep_hwr_write_pane_g5

0x79ec,	// (0x00036fed) fep_hwr_write_pane_g6_ParamLimits

0x79ec,	// (0x00036fed) fep_hwr_write_pane_g6

0x826e,	// (0x0003786f) eswt_shell_pane_ParamLimits

0x53a1,	// (0x000349a2) bg_popup_window_pane_cp18_ParamLimits

0x6655,	// (0x00035c56) heading_pane_cp70

0x8398,	// (0x00037999) popup_eswt_tasktip_window_t1_ParamLimits

0xd5c9,	// (0x0003cbca) aid_touch_tab_arrow_left

0xd5df,	// (0x0003cbe0) aid_touch_tab_arrow_right

0xced2,	// (0x0003c4d3) title_pane_g3_ParamLimits

0xced2,	// (0x0003c4d3) title_pane_g3

0x3e12,	// (0x00033413) set_value_pane_g1

0xc51c,	// (0x0003bb1d) popup_toolbar_trans_pane_ParamLimits

0x84f2,	// (0x00037af3) aid_size_cell_tb_trans_pane_ParamLimits

0x3e53,	// (0x00033454) bg_tb_trans_pane_ParamLimits

0x8504,	// (0x00037b05) grid_tb_trans_pane_ParamLimits

0x386d,	// (0x00032e6e) cont_note_pane_ParamLimits

0x386d,	// (0x00032e6e) cont_note_pane

0x3bc4,	// (0x000331c5) cont_snote2_single_text_pane_ParamLimits

0x3bc4,	// (0x000331c5) cont_snote2_single_text_pane

0x3bc4,	// (0x000331c5) cont_snote2_single_graphic_pane_ParamLimits

0x3bc4,	// (0x000331c5) cont_snote2_single_graphic_pane

0x59a6,	// (0x00034fa7) cont_note_wait_pane_ParamLimits

0x59a6,	// (0x00034fa7) cont_note_wait_pane

0x59a6,	// (0x00034fa7) cont_note_image_pane_ParamLimits

0x59a6,	// (0x00034fa7) cont_note_image_pane

0x85ac,	// (0x00037bad) popup_note2_window_g1_ParamLimits

0x85ac,	// (0x00037bad) popup_note2_window_g1

0x85dd,	// (0x00037bde) popup_note2_window_t1_ParamLimits

0x85dd,	// (0x00037bde) popup_note2_window_t1

0x8622,	// (0x00037c23) popup_note2_window_t2_ParamLimits

0x8622,	// (0x00037c23) popup_note2_window_t2

0x8667,	// (0x00037c68) popup_note2_window_t3_ParamLimits

0x8667,	// (0x00037c68) popup_note2_window_t3

0x86ac,	// (0x00037cad) popup_note2_window_t4_ParamLimits

0x86ac,	// (0x00037cad) popup_note2_window_t4

0x38f1,	// (0x00032ef2) popup_note2_window_t5_ParamLimits

0x38f1,	// (0x00032ef2) popup_note2_window_t5

0x0004,

0xfc5c,	// (0x0003f25d) popup_note2_window_t_ParamLimits

0xfc5c,	// (0x0003f25d) popup_note2_window_t

0x86db,	// (0x00037cdc) popup_note2_image_window_g1_ParamLimits

0x86db,	// (0x00037cdc) popup_note2_image_window_g1

0x86e7,	// (0x00037ce8) popup_note2_image_window_g2_ParamLimits

0x86e7,	// (0x00037ce8) popup_note2_image_window_g2

0x0001,

0xfc67,	// (0x0003f268) popup_note2_image_window_g_ParamLimits

0xfc67,	// (0x0003f268) popup_note2_image_window_g

0x86f9,	// (0x00037cfa) popup_note2_image_window_t1_ParamLimits

0x86f9,	// (0x00037cfa) popup_note2_image_window_t1

0x8711,	// (0x00037d12) popup_note2_image_window_t2_ParamLimits

0x8711,	// (0x00037d12) popup_note2_image_window_t2

0x8729,	// (0x00037d2a) popup_note2_image_window_t3_ParamLimits

0x8729,	// (0x00037d2a) popup_note2_image_window_t3

0x0002,

0xfc6c,	// (0x0003f26d) popup_note2_image_window_t_ParamLimits

0xfc6c,	// (0x0003f26d) popup_note2_image_window_t

0x59b4,	// (0x00034fb5) popup_note2_wait_window_g1_ParamLimits

0x59b4,	// (0x00034fb5) popup_note2_wait_window_g1

0x8745,	// (0x00037d46) popup_note2_wait_window_g2_ParamLimits

0x8745,	// (0x00037d46) popup_note2_wait_window_g2

0x59cc,	// (0x00034fcd) popup_note2_wait_window_g3_ParamLimits

0x59cc,	// (0x00034fcd) popup_note2_wait_window_g3

0x0002,

0xfc73,	// (0x0003f274) popup_note2_wait_window_g_ParamLimits

0xfc73,	// (0x0003f274) popup_note2_wait_window_g

0x8751,	// (0x00037d52) popup_note2_wait_window_t1_ParamLimits

0x8751,	// (0x00037d52) popup_note2_wait_window_t1

0x876f,	// (0x00037d70) popup_note2_wait_window_t2_ParamLimits

0x876f,	// (0x00037d70) popup_note2_wait_window_t2

0x878d,	// (0x00037d8e) popup_note2_wait_window_t3_ParamLimits

0x878d,	// (0x00037d8e) popup_note2_wait_window_t3

0x879f,	// (0x00037da0) popup_note2_wait_window_t4_ParamLimits

0x879f,	// (0x00037da0) popup_note2_wait_window_t4

0x0003,

0xfc7a,	// (0x0003f27b) popup_note2_wait_window_t_ParamLimits

0xfc7a,	// (0x0003f27b) popup_note2_wait_window_t

0x87b1,	// (0x00037db2) wait_bar2_pane_ParamLimits

0x87b1,	// (0x00037db2) wait_bar2_pane

0x87c9,	// (0x00037dca) popup_snote2_single_text_window_g1_ParamLimits

0x87c9,	// (0x00037dca) popup_snote2_single_text_window_g1

0x87f1,	// (0x00037df2) popup_snote2_single_text_window_t1_ParamLimits

0x87f1,	// (0x00037df2) popup_snote2_single_text_window_t1

0x883d,	// (0x00037e3e) popup_snote2_single_text_window_t2_ParamLimits

0x883d,	// (0x00037e3e) popup_snote2_single_text_window_t2

0x8889,	// (0x00037e8a) popup_snote2_single_text_window_t3_ParamLimits

0x8889,	// (0x00037e8a) popup_snote2_single_text_window_t3

0x88ca,	// (0x00037ecb) popup_snote2_single_text_window_t4_ParamLimits

0x88ca,	// (0x00037ecb) popup_snote2_single_text_window_t4

0x8900,	// (0x00037f01) popup_snote2_single_text_window_t5_ParamLimits

0x8900,	// (0x00037f01) popup_snote2_single_text_window_t5

0x0004,

0xfc83,	// (0x0003f284) popup_snote2_single_text_window_t_ParamLimits

0xfc83,	// (0x0003f284) popup_snote2_single_text_window_t

0x892b,	// (0x00037f2c) popup_snote2_single_graphic_window_g1_ParamLimits

0x892b,	// (0x00037f2c) popup_snote2_single_graphic_window_g1

0x8953,	// (0x00037f54) popup_snote2_single_graphic_window_g2_ParamLimits

0x8953,	// (0x00037f54) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8e,	// (0x0003f28f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8e,	// (0x0003f28f) popup_snote2_single_graphic_window_g

0x897b,	// (0x00037f7c) popup_snote2_single_graphic_window_t1_ParamLimits

0x897b,	// (0x00037f7c) popup_snote2_single_graphic_window_t1

0x89c7,	// (0x00037fc8) popup_snote2_single_graphic_window_t2_ParamLimits

0x89c7,	// (0x00037fc8) popup_snote2_single_graphic_window_t2

0x8889,	// (0x00037e8a) popup_snote2_single_graphic_window_t3_ParamLimits

0x8889,	// (0x00037e8a) popup_snote2_single_graphic_window_t3

0x88ca,	// (0x00037ecb) popup_snote2_single_graphic_window_t4_ParamLimits

0x88ca,	// (0x00037ecb) popup_snote2_single_graphic_window_t4

0x8900,	// (0x00037f01) popup_snote2_single_graphic_window_t5_ParamLimits

0x8900,	// (0x00037f01) popup_snote2_single_graphic_window_t5

0x0004,

0xfc93,	// (0x0003f294) popup_snote2_single_graphic_window_t_ParamLimits

0xfc93,	// (0x0003f294) popup_snote2_single_graphic_window_t

0x73ef,	// (0x000369f0) clock_nsta_pane_cp2_t1

0x73ef,	// (0x000369f0) clock_nsta_pane_cp2_t2

0x0001,

0xfaa7,	// (0x0003f0a8) clock_nsta_pane_cp2_t

0x0920,	// (0x0002ff21) form_field_data_wide_pane_g1_ParamLimits

0x3e61,	// (0x00033462) form_field_data_wide_pane_g2_ParamLimits

0x3e61,	// (0x00033462) form_field_data_wide_pane_g2

0x3e6d,	// (0x0003346e) form_field_data_wide_pane_g3_ParamLimits

0x3e6d,	// (0x0003346e) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0003ec7c) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0003ec7c) form_field_data_wide_pane_g

0xded0,	// (0x0003d4d1) grid_touch_3_pane_ParamLimits

0xded0,	// (0x0003d4d1) grid_touch_3_pane

0xe39e,	// (0x0003d99f) cell_touch_3_pane_ParamLimits

0xe39e,	// (0x0003d99f) cell_touch_3_pane

0x7954,	// (0x00036f55) cell_touch_3_pane_g1

0x7954,	// (0x00036f55) cell_touch_3_pane_g2

0x0001,

0xfb2c,	// (0x0003f12d) cell_touch_3_pane_g

0x3923,	// (0x00032f24) cont_query_data_pane

0x392b,	// (0x00032f2c) cont_query_data_pane_cp1

0x8a41,	// (0x00038042) button_value_adjust_pane_cp7

0x8a49,	// (0x0003804a) query_popup_pane_cp3

0x45c2,	// (0x00033bc3) bg_popup_sub_pane_cp22_ParamLimits

0x0ce4,	// (0x000302e5) navi_navi_volume_pane_cp2

0x0cff,	// (0x00030300) popup_side_volume_key_window_g2

0x0d0e,	// (0x0003030f) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0003ed12) popup_side_volume_key_window_g

0x0d2b,	// (0x0003032c) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0003ed19) popup_side_volume_key_window_t

0x4879,	// (0x00033e7a) popup_side_volume_key_window_ParamLimits

0xb8b1,	// (0x0003aeb2) list_double_graphic_pane_g4_ParamLimits

0xb8b1,	// (0x0003aeb2) list_double_graphic_pane_g4

0xdd29,	// (0x0003d32a) list_single_2heading_msg_pane_ParamLimits

0xdd29,	// (0x0003d32a) list_single_2heading_msg_pane

0xc739,	// (0x0003bd3a) list_single_2heading_msg_pane_g1_ParamLimits

0xc739,	// (0x0003bd3a) list_single_2heading_msg_pane_g1

0xc745,	// (0x0003bd46) list_single_2heading_msg_pane_g2_ParamLimits

0xc745,	// (0x0003bd46) list_single_2heading_msg_pane_g2

0xc758,	// (0x0003bd59) list_single_2heading_msg_pane_g3_ParamLimits

0xc758,	// (0x0003bd59) list_single_2heading_msg_pane_g3

0xc764,	// (0x0003bd65) list_single_2heading_msg_pane_g4_ParamLimits

0xc764,	// (0x0003bd65) list_single_2heading_msg_pane_g4

0x0003,

0xfc9e,	// (0x0003f29f) list_single_2heading_msg_pane_g_ParamLimits

0xfc9e,	// (0x0003f29f) list_single_2heading_msg_pane_g

0xc77c,	// (0x0003bd7d) list_single_2heading_msg_pane_t1_ParamLimits

0xc77c,	// (0x0003bd7d) list_single_2heading_msg_pane_t1

0xc7a4,	// (0x0003bda5) list_single_2heading_msg_pane_t2_ParamLimits

0xc7a4,	// (0x0003bda5) list_single_2heading_msg_pane_t2

0xc80f,	// (0x0003be10) list_single_2heading_msg_pane_t3_ParamLimits

0xc80f,	// (0x0003be10) list_single_2heading_msg_pane_t3

0x36f2,	// (0x00032cf3) list_single_2heading_msg_pane_t4_ParamLimits

0x36f2,	// (0x00032cf3) list_single_2heading_msg_pane_t4

0x0003,

0xfca7,	// (0x0003f2a8) list_single_2heading_msg_pane_t_ParamLimits

0xfca7,	// (0x0003f2a8) list_single_2heading_msg_pane_t

0x2d87,	// (0x00032388) title_pane_g4_ParamLimits

0x2d87,	// (0x00032388) title_pane_g4

0x0af3,	// (0x000300f4) title_pane_stacon_g3_ParamLimits

0x0af3,	// (0x000300f4) title_pane_stacon_g3

0x856f,	// (0x00037b70) list_single_2graphic_im_pane_g4_ParamLimits

0x856f,	// (0x00037b70) list_single_2graphic_im_pane_g4

0x6411,	// (0x00035a12) popup_side_volume_key_window_cp

0x6c2e,	// (0x0003622f) main_idle_act2_pane_t1

0x1746,	// (0x00030d47) toolbar_button_pane_g10

0xd1dd,	// (0x0003c7de) popup_toolbar_window_cp1

0x73e0,	// (0x000369e1) clock_nsta_pane_cp_t1

0x73e0,	// (0x000369e1) clock_nsta_pane_cp_t2

0x0001,

0xfaa2,	// (0x0003f0a3) clock_nsta_pane_cp_t

0x0ce4,	// (0x000302e5) navi_navi_volume_pane_cp2_ParamLimits

0x0cf3,	// (0x000302f4) popup_side_volume_key_window_g1_ParamLimits

0x0cff,	// (0x00030300) popup_side_volume_key_window_g2_ParamLimits

0x0d0e,	// (0x0003030f) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0003ed12) popup_side_volume_key_window_g_ParamLimits

0x1cef,	// (0x000312f0) fep_hwr_aid_pane

0x1d96,	// (0x00031397) bg_fep_hwr_top_pane_g4_ParamLimits

0x79b0,	// (0x00036fb1) fep_hwr_top_pane_g1_ParamLimits

0x79c2,	// (0x00036fc3) fep_hwr_top_pane_g2_ParamLimits

0x1db6,	// (0x000313b7) fep_hwr_top_pane_g3_ParamLimits

0xfaf7,	// (0x0003f0f8) fep_hwr_top_pane_g_ParamLimits

0x1dcb,	// (0x000313cc) fep_hwr_top_text_pane_ParamLimits

0x61d4,	// (0x000357d5) aid_touch_tab_arrow_arrow_2

0x61dd,	// (0x000357de) aid_touch_tab_arrow_left_2

0x1d03,	// (0x00031304) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1d3a,	// (0x0003133b) fep_hwr_prediction_pane

0x7b22,	// (0x00037123) fep_vkb_prediction_pane

0xe184,	// (0x0003d785) fep_vkb_side_pane_g3_ParamLimits

0xe184,	// (0x0003d785) fep_vkb_side_pane_g3

0x1f46,	// (0x00031547) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1fb2,	// (0x000315b3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1fbf,	// (0x000315c0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0003f1a7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x20ee,	// (0x000316ef) fep_hwr_prediction_pane_g1

0x20f8,	// (0x000316f9) fep_hwr_prediction_pane_g2

0x2100,	// (0x00031701) fep_hwr_prediction_pane_g3

0x2108,	// (0x00031709) fep_hwr_prediction_pane_g4

0x0003,

0xfcb0,	// (0x0003f2b1) fep_hwr_prediction_pane_g

0x8a6e,	// (0x0003806f) fep_vkb_prediction_pane_g1

0x8a78,	// (0x00038079) fep_vkb_prediction_pane_g2

0x8a80,	// (0x00038081) fep_vkb_prediction_pane_g3

0x8a88,	// (0x00038089) fep_vkb_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0003f2ba) fep_vkb_prediction_pane_g

0x1b41,	// (0x00031142) slider_set_pane_g3

0x1b55,	// (0x00031156) slider_set_pane_g4

0x1b6d,	// (0x0003116e) slider_set_pane_g5

0x1b41,	// (0x00031142) slider_set_pane_g6

0x1b83,	// (0x00031184) slider_set_pane_g7

0x6872,	// (0x00035e73) slider_form_pane_g3

0x687b,	// (0x00035e7c) slider_form_pane_g4

0x6883,	// (0x00035e84) slider_form_pane_g5

0x6872,	// (0x00035e73) slider_form_pane_g6

0xdcfb,	// (0x0003d2fc) slider_form_pane_g7

0x6ed9,	// (0x000364da) slider_set_pane_vc_g3

0x6ee2,	// (0x000364e3) slider_set_pane_vc_g4

0x6eeb,	// (0x000364ec) slider_set_pane_vc_g5

0x6ed9,	// (0x000364da) slider_set_pane_vc_g6

0x6ef4,	// (0x000364f5) slider_set_pane_vc_g7

0x70b4,	// (0x000366b5) slider_form_pane_vc_g1

0x70bd,	// (0x000366be) slider_form_pane_vc_g2

0x70c6,	// (0x000366c7) slider_form_pane_vc_g3

0x70b4,	// (0x000366b5) slider_form_pane_vc_g4

0x70cf,	// (0x000366d0) slider_form_pane_vc_g5

0x0004,

0xfa74,	// (0x0003f075) slider_form_pane_vc_g

0x009f,	// (0x0002f6a0) main_idle_act3_pane

0x8a90,	// (0x00038091) ai3_links_pane

0xe41b,	// (0x0003da1c) popup_ai3_data_window_ParamLimits

0xe41b,	// (0x0003da1c) popup_ai3_data_window

0x2d3f,	// (0x00032340) grid_ai3_links_pane

0xe435,	// (0x0003da36) cell_ai3_links_pane_ParamLimits

0xe435,	// (0x0003da36) cell_ai3_links_pane

0x8acb,	// (0x000380cc) bg_popup_sub_pane_cp11

0x8ad8,	// (0x000380d9) cell_ai3_links_pane_g1

0x2d3f,	// (0x00032340) bg_popup_sub_pane_cp12

0x8afd,	// (0x000380fe) heading_ai3_data_pane

0x8b05,	// (0x00038106) list_ai3_gene_pane

0x8b11,	// (0x00038112) popup_ai3_data_window_g1

0x8b19,	// (0x0003811a) heading_ai3_data_pane_g1

0x8b21,	// (0x00038122) heading_ai3_data_pane_t1

0x8b2f,	// (0x00038130) list_double_ai3_gene_pane_ParamLimits

0x8b2f,	// (0x00038130) list_double_ai3_gene_pane

0x8b3c,	// (0x0003813d) list_single_ai3_gene_pane_ParamLimits

0x8b3c,	// (0x0003813d) list_single_ai3_gene_pane

0x7919,	// (0x00036f1a) list_highlight_pane_cp7_ParamLimits

0x7919,	// (0x00036f1a) list_highlight_pane_cp7

0x8b49,	// (0x0003814a) list_single_a13_gene_pane_t1_ParamLimits

0x8b49,	// (0x0003814a) list_single_a13_gene_pane_t1

0x8b60,	// (0x00038161) list_single_ai3_gene_pane_g1

0x8b69,	// (0x0003816a) list_single_ai3_gene_pane_g2

0x0001,

0xfcc2,	// (0x0003f2c3) list_single_ai3_gene_pane_g

0x8b71,	// (0x00038172) list_double_ai3_gene_pane_g1_ParamLimits

0x8b71,	// (0x00038172) list_double_ai3_gene_pane_g1

0x8b7d,	// (0x0003817e) list_double_ai3_gene_pane_t1_ParamLimits

0x8b7d,	// (0x0003817e) list_double_ai3_gene_pane_t1

0x8b99,	// (0x0003819a) list_double_ai3_gene_pane_t2_ParamLimits

0x8b99,	// (0x0003819a) list_double_ai3_gene_pane_t2

0x8baf,	// (0x000381b0) list_double_ai3_gene_pane_t3_ParamLimits

0x8baf,	// (0x000381b0) list_double_ai3_gene_pane_t3

0x0002,

0xfcc7,	// (0x0003f2c8) list_double_ai3_gene_pane_t_ParamLimits

0xfcc7,	// (0x0003f2c8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3623,	// (0x00032c24) aid_size_min_col_2

0xe3d0,	// (0x0003d9d1) aid_size_min_msg_ParamLimits

0xe3d0,	// (0x0003d9d1) aid_size_min_msg

0xe198,	// (0x0003d799) fep_vkb_top_text_pane_g2_ParamLimits

0xe198,	// (0x0003d799) fep_vkb_top_text_pane_g2

0x0001,

0xfb27,	// (0x0003f128) fep_vkb_top_text_pane_g_ParamLimits

0xfb27,	// (0x0003f128) fep_vkb_top_text_pane_g

0x009f,	// (0x0002f6a0) main_hc_apps_shell_pane

0x8bcc,	// (0x000381cd) grid_hc_apps_pane_ParamLimits

0x8bcc,	// (0x000381cd) grid_hc_apps_pane

0x8bdb,	// (0x000381dc) list_hc_apps_pane

0x8be3,	// (0x000381e4) scroll_pane_cp37_ParamLimits

0x8be3,	// (0x000381e4) scroll_pane_cp37

0xe44f,	// (0x0003da50) cell_hc_apps_pane_ParamLimits

0xe44f,	// (0x0003da50) cell_hc_apps_pane

0xe50d,	// (0x0003db0e) cell_hc_apps_pane_g1_ParamLimits

0xe50d,	// (0x0003db0e) cell_hc_apps_pane_g1

0x8cce,	// (0x000382cf) cell_hc_apps_pane_g2_ParamLimits

0x8cce,	// (0x000382cf) cell_hc_apps_pane_g2

0x8cea,	// (0x000382eb) cell_hc_apps_pane_g3_ParamLimits

0x8cea,	// (0x000382eb) cell_hc_apps_pane_g3

0x0002,

0xfcce,	// (0x0003f2cf) cell_hc_apps_pane_g_ParamLimits

0xfcce,	// (0x0003f2cf) cell_hc_apps_pane_g

0xe53a,	// (0x0003db3b) cell_hc_apps_pane_t1_ParamLimits

0xe53a,	// (0x0003db3b) cell_hc_apps_pane_t1

0x386d,	// (0x00032e6e) grid_highlight_pane_cp10_ParamLimits

0x386d,	// (0x00032e6e) grid_highlight_pane_cp10

0xe578,	// (0x0003db79) list_single_hc_apps_pane_ParamLimits

0xe578,	// (0x0003db79) list_single_hc_apps_pane

0xe5a5,	// (0x0003dba6) list_single_hc_apps_pane_g1

0xc87d,	// (0x0003be7e) list_single_hc_apps_pane_g2

0x0001,

0xfcd5,	// (0x0003f2d6) list_single_hc_apps_pane_g

0xc896,	// (0x0003be97) list_single_hc_apps_pane_g2_copy1

0xc8b2,	// (0x0003beb3) list_single_hc_apps_pane_t1

0x2e33,	// (0x00032434) bg_set_opt_pane_cp_ParamLimits

0x0300,	// (0x0002f901) setting_slider_pane_t1_ParamLimits

0x0319,	// (0x0002f91a) setting_slider_pane_t2_ParamLimits

0x0333,	// (0x0002f934) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003eb5f) setting_slider_pane_t_ParamLimits

0x034b,	// (0x0002f94c) slider_set_pane_ParamLimits

0x1017,	// (0x00030618) control_pane_g5_ParamLimits

0x1017,	// (0x00030618) control_pane_g5

0x66c1,	// (0x00035cc2) slider_set_pane_g1_ParamLimits

0x1b35,	// (0x00031136) slider_set_pane_g2_ParamLimits

0x1b41,	// (0x00031142) slider_set_pane_g3_ParamLimits

0x1b55,	// (0x00031156) slider_set_pane_g4_ParamLimits

0x1b6d,	// (0x0003116e) slider_set_pane_g5_ParamLimits

0x1b41,	// (0x00031142) slider_set_pane_g6_ParamLimits

0x1b83,	// (0x00031184) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0003ef60) slider_set_pane_g_ParamLimits

0x4965,	// (0x00033f66) navi_icon_text_pane_ParamLimits

0xd592,	// (0x0003cb93) aid_fill_nsta_2_ParamLimits

0xd5c9,	// (0x0003cbca) aid_touch_tab_arrow_left_ParamLimits

0xd5df,	// (0x0003cbe0) aid_touch_tab_arrow_right_ParamLimits

0xd67a,	// (0x0003cc7b) clock_nsta_pane_ParamLimits

0x61b6,	// (0x000357b7) navi_icon_pane_g1_ParamLimits

0x61c2,	// (0x000357c3) navi_text_pane_t1_ParamLimits

0x74ec,	// (0x00036aed) navi_icon_text_pane_g1_ParamLimits

0x74f8,	// (0x00036af9) navi_icon_text_pane_t1_ParamLimits

0xe5a5,	// (0x0003dba6) list_single_hc_apps_pane_g1_ParamLimits

0xc87d,	// (0x0003be7e) list_single_hc_apps_pane_g2_ParamLimits

0xfcd5,	// (0x0003f2d6) list_single_hc_apps_pane_g_ParamLimits

0xc896,	// (0x0003be97) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc8b2,	// (0x0003beb3) list_single_hc_apps_pane_t1_ParamLimits

0xb674,	// (0x0003ac75) popup_toolbar2_fixed_window_ParamLimits

0xb674,	// (0x0003ac75) popup_toolbar2_fixed_window

0xc512,	// (0x0003bb13) popup_toolbar2_float_window

0x2d3f,	// (0x00032340) bg_popup_sub_pane_cp27

0x8dc1,	// (0x000383c2) grid_toolbar2_float_pane

0x2d3f,	// (0x00032340) bg_popup_sub_pane_cp26

0x8dc1,	// (0x000383c2) grid_toolbar2_fixed_pane

0xe5be,	// (0x0003dbbf) cell_toolbar2_fixed_pane_ParamLimits

0xe5be,	// (0x0003dbbf) cell_toolbar2_fixed_pane

0xe5d8,	// (0x0003dbd9) cell_toolbar2_fixed_pane_g1

0x8de2,	// (0x000383e3) toolbar2_fixed_button_pane

0x532d,	// (0x0003492e) toolbar2_fixed_button_pane_g1

0x533d,	// (0x0003493e) toolbar2_fixed_button_pane_g2

0x5335,	// (0x00034936) toolbar2_fixed_button_pane_g3

0x534d,	// (0x0003494e) toolbar2_fixed_button_pane_g4

0x5345,	// (0x00034946) toolbar2_fixed_button_pane_g5

0x5355,	// (0x00034956) toolbar2_fixed_button_pane_g6

0x535d,	// (0x0003495e) toolbar2_fixed_button_pane_g7

0x536d,	// (0x0003496e) toolbar2_fixed_button_pane_g8

0x5365,	// (0x00034966) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0003ee62) toolbar2_fixed_button_pane_g

0x8dea,	// (0x000383eb) cell_toolbar2_float_pane_ParamLimits

0x8dea,	// (0x000383eb) cell_toolbar2_float_pane

0x8dfb,	// (0x000383fc) cell_toolbar2_float_pane_g1

0x8de2,	// (0x000383e3) toolbar2_fixed_button_pane_cp

0xe072,	// (0x0003d673) fep_vkb_accented_list_pane_ParamLimits

0xe072,	// (0x0003d673) fep_vkb_accented_list_pane

0x1f26,	// (0x00031527) bg_popup_fep_shadow_pane_g9

0x4ae5,	// (0x000340e6) bg_popup_fep_shadow_pane_cp3

0x3faa,	// (0x000335ab) list_accented_list_pane

0x8e04,	// (0x00038405) list_single_accented_list_pane_ParamLimits

0x8e04,	// (0x00038405) list_single_accented_list_pane

0x4ae5,	// (0x000340e6) list_highlight_pane_cp10

0x8e15,	// (0x00038416) list_single_accented_list_pane_t1

0xc43c,	// (0x0003ba3d) popup_slider_window_ParamLimits

0xc43c,	// (0x0003ba3d) popup_slider_window

0x8a51,	// (0x00038052) aid_indentation_list_msg

0xe6d1,	// (0x0003dcd2) bg_popup_window_pane_cp19

0x8f39,	// (0x0003853a) popup_slider_window_g1

0x8f55,	// (0x00038556) popup_slider_window_g2

0x8f71,	// (0x00038572) popup_slider_window_g3

0x0005,

0xfcda,	// (0x0003f2db) popup_slider_window_g

0x8fcd,	// (0x000385ce) popup_slider_window_t1

0x9041,	// (0x00038642) small_volume_slider_vertical_pane

0x7954,	// (0x00036f55) small_volume_slider_vertical_pane_g1

0x7954,	// (0x00036f55) small_volume_slider_vertical_pane_g2

0x905d,	// (0x0003865e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcec,	// (0x0003f2ed) small_volume_slider_vertical_pane_g

0xb5e2,	// (0x0003abe3) area_side_right_pane_ParamLimits

0xb5e2,	// (0x0003abe3) area_side_right_pane

0xc8e0,	// (0x0003bee1) aid_size_side_button_ParamLimits

0xc8e0,	// (0x0003bee1) aid_size_side_button

0xc8f9,	// (0x0003befa) grid_sctrl_middle_pane_ParamLimits

0xc8f9,	// (0x0003befa) grid_sctrl_middle_pane

0x2143,	// (0x00031744) sctrl_sk_bottom_pane

0x2154,	// (0x00031755) sctrl_sk_top_pane

0x2166,	// (0x00031767) aid_touch_sctrl_top

0x2173,	// (0x00031774) bg_sctrl_sk_pane_ParamLimits

0x2173,	// (0x00031774) bg_sctrl_sk_pane

0x2181,	// (0x00031782) sctrl_sk_top_pane_g1

0x218e,	// (0x0003178f) sctrl_sk_top_pane_t1

0x2166,	// (0x00031767) aid_touch_sctrl_bottom

0x2173,	// (0x00031774) bg_sctrl_sk_pane_cp_ParamLimits

0x2173,	// (0x00031774) bg_sctrl_sk_pane_cp

0x21a9,	// (0x000317aa) sctrl_sk_bottom_pane_g1

0x218e,	// (0x0003178f) sctrl_sk_bottom_pane_t1

0xc913,	// (0x0003bf14) cell_sctrl_middle_pane_ParamLimits

0xc913,	// (0x0003bf14) cell_sctrl_middle_pane

0xc924,	// (0x0003bf25) aid_touch_sctrl_middle_ParamLimits

0xc924,	// (0x0003bf25) aid_touch_sctrl_middle

0xc931,	// (0x0003bf32) bg_sctrl_middle_pane_ParamLimits

0xc931,	// (0x0003bf32) bg_sctrl_middle_pane

0x2816,	// (0x00031e17) cell_sctrl_middle_pane_g1_ParamLimits

0x2816,	// (0x00031e17) cell_sctrl_middle_pane_g1

0xc93f,	// (0x0003bf40) cell_sctrl_middle_pane_g2_ParamLimits

0xc93f,	// (0x0003bf40) cell_sctrl_middle_pane_g2

0x0001,

0xfcf8,	// (0x0003f2f9) cell_sctrl_middle_pane_g_ParamLimits

0xfcf8,	// (0x0003f2f9) cell_sctrl_middle_pane_g

0x532d,	// (0x0003492e) bg_sctrl_middle_pane_g1

0x5335,	// (0x00034936) bg_sctrl_middle_pane_g2

0x533d,	// (0x0003493e) bg_sctrl_middle_pane_g3

0x5345,	// (0x00034946) bg_sctrl_middle_pane_g4

0x534d,	// (0x0003494e) bg_sctrl_middle_pane_g5

0x5355,	// (0x00034956) bg_sctrl_middle_pane_g6

0x535d,	// (0x0003495e) bg_sctrl_middle_pane_g7

0x5365,	// (0x00034966) bg_sctrl_middle_pane_g8

0x0007,

0xfcfd,	// (0x0003f2fe) bg_sctrl_middle_pane_g

0x536d,	// (0x0003496e) bg_sctrl_middle_pane_g8_copy1

0x532d,	// (0x0003492e) bg_sctrl_sk_pane_g1

0x533d,	// (0x0003493e) bg_sctrl_sk_pane_g2

0x5335,	// (0x00034936) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0003ee62) bg_sctrl_sk_pane_g

0x3d82,	// (0x00033383) aid_size_touch_scroll_bar

0x534d,	// (0x0003494e) bg_sctrl_sk_pane_g4

0x5345,	// (0x00034946) bg_sctrl_sk_pane_g5

0x5355,	// (0x00034956) bg_sctrl_sk_pane_g6

0x535d,	// (0x0003495e) bg_sctrl_sk_pane_g7

0x536d,	// (0x0003496e) bg_sctrl_sk_pane_g8

0x5365,	// (0x00034966) bg_sctrl_sk_pane_g9

0x11c9,	// (0x000307ca) popup_fep_china_hwr2_fs_candidate_window

0xbf56,	// (0x0003b557) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbf56,	// (0x0003b557) popup_fep_china_hwr2_fs_control_window

0x1f46,	// (0x00031547) sctrl_sk_top_pane_g2

0x0001,

0xfcf3,	// (0x0003f2f4) sctrl_sk_top_pane_g

0xe789,	// (0x0003dd8a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe789,	// (0x0003dd8a) aid_fep_china_hwr2_fs_cell

0xe79d,	// (0x0003dd9e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe79d,	// (0x0003dd9e) bg_popup_fep_shadow_pane_cp4

0xe7b4,	// (0x0003ddb5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe7b4,	// (0x0003ddb5) bg_popup_fep_shadow_pane_cp5

0xe7c6,	// (0x0003ddc7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe7c6,	// (0x0003ddc7) popup_fep_china_hwr2_fs_control_bar_grid

0xe7da,	// (0x0003dddb) popup_fep_china_hwr2_fs_control_funtion_grid

0x90b9,	// (0x000386ba) aid_fep_china_hwr2_fs_candi_cell

0x2d3f,	// (0x00032340) bg_popup_fep_shadow_pane_cp6

0x90c3,	// (0x000386c4) popup_fep_china_hwr2_fs_candidate_grid

0xe7e2,	// (0x0003dde3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe7e2,	// (0x0003dde3) cell_fep_china_hwr2_fs_funtion_grid

0x7954,	// (0x00036f55) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x90e5,	// (0x000386e6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x90e5,	// (0x000386e6) cell_fep_china_hwr2_fs_funtion_grid_g1

0x90f3,	// (0x000386f4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x90f3,	// (0x000386f4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0e,	// (0x0003f30f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0e,	// (0x0003f30f) cell_fep_china_hwr2_fs_funtion_grid_g

0xe7fa,	// (0x0003ddfb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe7fa,	// (0x0003ddfb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe80f,	// (0x0003de10) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe80f,	// (0x0003de10) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd13,	// (0x0003f314) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd13,	// (0x0003f314) cell_fep_china_hwr2_fs_funtion_grid_t

0x913a,	// (0x0003873b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9142,	// (0x00038743) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x914a,	// (0x0003874b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd18,	// (0x0003f319) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9152,	// (0x00038753) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9152,	// (0x00038753) cell_fep_china_hwr2_fs_candidate_grid

0x916b,	// (0x0003876c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9173,	// (0x00038774) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7954,	// (0x00036f55) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7954,	// (0x00036f55) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2c,	// (0x0003f12d) cell_fep_china_hwr2_fs_candidate_grid_g

0x917b,	// (0x0003877c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4f23,	// (0x00034524) clock_nsta_pane_cp_24_ParamLimits

0x4f23,	// (0x00034524) clock_nsta_pane_cp_24

0x4fa1,	// (0x000345a2) indicator_nsta_pane_cp_24_ParamLimits

0x4fa1,	// (0x000345a2) indicator_nsta_pane_cp_24

0x6026,	// (0x00035627) heading_pane_g1

0x0001,

0xf8c6,	// (0x0003eec7) heading_pane_g

0x6a77,	// (0x00036078) grid_sct_catagory_button_pane

0x6aa7,	// (0x000360a8) scroll_pane_cp5_ParamLimits

0x753a,	// (0x00036b3b) button_value_adjust_pane_cp5_ParamLimits

0x753a,	// (0x00036b3b) button_value_adjust_pane_cp5

0x7625,	// (0x00036c26) form2_midp_time_pane_ParamLimits

0x9189,	// (0x0003878a) cell_sct_catagory_button_pane_ParamLimits

0x9189,	// (0x0003878a) cell_sct_catagory_button_pane

0x7919,	// (0x00036f1a) bg_button_pane_cp01_ParamLimits

0x7919,	// (0x00036f1a) bg_button_pane_cp01

0x7954,	// (0x00036f55) cell_sct_catagory_button_pane_g1

0xc4b5,	// (0x0003bab6) popup_tb_extension_window

0xe82b,	// (0x0003de2c) aid_size_cell_ext_ParamLimits

0xe82b,	// (0x0003de2c) aid_size_cell_ext

0x3bc4,	// (0x000331c5) bg_tb_trans_pane_cp1_ParamLimits

0x3bc4,	// (0x000331c5) bg_tb_trans_pane_cp1

0xe851,	// (0x0003de52) grid_tb_ext_pane_ParamLimits

0xe851,	// (0x0003de52) grid_tb_ext_pane

0xe88c,	// (0x0003de8d) cell_tb_ext_pane_ParamLimits

0xe88c,	// (0x0003de8d) cell_tb_ext_pane

0xe8b4,	// (0x0003deb5) cell_tb_ext_pane_g1_ParamLimits

0xe8b4,	// (0x0003deb5) cell_tb_ext_pane_g1

0x921d,	// (0x0003881e) cell_tb_ext_pane_t1

0x386d,	// (0x00032e6e) list_highlight_pane_cp11_ParamLimits

0x386d,	// (0x00032e6e) list_highlight_pane_cp11

0xb689,	// (0x0003ac8a) popup_uni_indicator_window_ParamLimits

0xb689,	// (0x0003ac8a) popup_uni_indicator_window

0x3e53,	// (0x00033454) bg_popup_sub_pane_cp14

0x9238,	// (0x00038839) list_uniindi_pane

0x9244,	// (0x00038845) uniindi_top_pane

0x386d,	// (0x00032e6e) bg_uniindi_top_pane

0x9263,	// (0x00038864) uniindi_top_pane_g1

0x9279,	// (0x0003887a) uniindi_top_pane_g2

0x0003,

0xfd1f,	// (0x0003f320) uniindi_top_pane_g

0x92a3,	// (0x000388a4) uniindi_top_pane_t1

0x92cd,	// (0x000388ce) list_single_uniindi_pane_ParamLimits

0x92cd,	// (0x000388ce) list_single_uniindi_pane

0x7954,	// (0x00036f55) bg_uniindi_top_pane_g1

0x92e0,	// (0x000388e1) list_single_uniindi_pane_g1

0x92f3,	// (0x000388f4) list_single_uniindi_pane_t1

0x009f,	// (0x0002f6a0) control_bg_pane

0x9318,	// (0x00038919) bg_sctrl_sk_pane_cp1

0x9321,	// (0x00038922) bg_sctrl_sk_pane_cp2

0x932a,	// (0x0003892b) control_bg_pane_g1

0x9333,	// (0x00038934) control_bg_pane_g2

0x0001,

0xfd28,	// (0x0003f329) control_bg_pane_g

0x7384,	// (0x00036985) cell_indicator_nsta_pane_g1_ParamLimits

0xdefd,	// (0x0003d4fe) cell_indicator_nsta_pane_g2_ParamLimits

0xfa90,	// (0x0003f091) cell_indicator_nsta_pane_g_ParamLimits

0x33d4,	// (0x000329d5) form2_midp_time_pane_t1_ParamLimits

0x1ce1,	// (0x000312e2) main_idle_act4_pane_ParamLimits

0x1ce1,	// (0x000312e2) main_idle_act4_pane

0xc4b5,	// (0x0003bab6) popup_tb_extension_window_ParamLimits

0xe873,	// (0x0003de74) tb_ext_find_pane_ParamLimits

0xe873,	// (0x0003de74) tb_ext_find_pane

0x933c,	// (0x0003893d) ai_gene_pane_1_cp1

0x4c20,	// (0x00034221) ai_gene_pane_2_cp1

0x9344,	// (0x00038945) list_single_idle_plugin_calendar_pane

0x934d,	// (0x0003894e) list_single_idle_plugin_notification_pane

0x9356,	// (0x00038957) list_single_idle_plugin_player_pane

0xe8d1,	// (0x0003ded2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe8d1,	// (0x0003ded2) list_single_idle_plugin_shortcut_pane

0xe8f9,	// (0x0003defa) main_idle_act4_pane_t1

0xe90f,	// (0x0003df10) main_idle_act4_pane_t2

0x0001,

0xfd2d,	// (0x0003f32e) main_idle_act4_pane_t

0xe925,	// (0x0003df26) middle_sk_idle_act4_pane_ParamLimits

0xe925,	// (0x0003df26) middle_sk_idle_act4_pane

0xe941,	// (0x0003df42) popup_clock_digital_analogue_window_cp2

0xe969,	// (0x0003df6a) shortcut_wheel_idle_act4_pane_ParamLimits

0xe969,	// (0x0003df6a) shortcut_wheel_idle_act4_pane

0x7954,	// (0x00036f55) shortcut_wheel_idle_act4_pane_g1

0x7954,	// (0x00036f55) shortcut_wheel_idle_act4_pane_g2

0x7954,	// (0x00036f55) shortcut_wheel_idle_act4_pane_g3

0x7954,	// (0x00036f55) shortcut_wheel_idle_act4_pane_g4

0x7954,	// (0x00036f55) shortcut_wheel_idle_act4_pane_g5

0x93e9,	// (0x000389ea) shortcut_wheel_idle_act4_pane_g6

0x93f1,	// (0x000389f2) shortcut_wheel_idle_act4_pane_g7

0x93f9,	// (0x000389fa) shortcut_wheel_idle_act4_pane_g8

0x9401,	// (0x00038a02) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd32,	// (0x0003f333) shortcut_wheel_idle_act4_pane_g

0xe3e6,	// (0x0003d9e7) middle_sk_idle_act4_pane_g1_ParamLimits

0xe3e6,	// (0x0003d9e7) middle_sk_idle_act4_pane_g1

0xe9e6,	// (0x0003dfe7) middle_sk_idle_act4_pane_g2_ParamLimits

0xe9e6,	// (0x0003dfe7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd55,	// (0x0003f356) middle_sk_idle_act4_pane_g_ParamLimits

0xfd55,	// (0x0003f356) middle_sk_idle_act4_pane_g

0xe9fe,	// (0x0003dfff) middle_sk_idle_act4_pane_t1_ParamLimits

0xe9fe,	// (0x0003dfff) middle_sk_idle_act4_pane_t1

0xea2d,	// (0x0003e02e) grid_ai_shortcut_pane_ParamLimits

0xea2d,	// (0x0003e02e) grid_ai_shortcut_pane

0xea4a,	// (0x0003e04b) list_highlight_pane_cp16_ParamLimits

0xea4a,	// (0x0003e04b) list_highlight_pane_cp16

0xea57,	// (0x0003e058) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea57,	// (0x0003e058) list_single_idle_plugin_shortcut_pane_g1

0xea63,	// (0x0003e064) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea63,	// (0x0003e064) list_single_idle_plugin_shortcut_pane_g2

0xea7f,	// (0x0003e080) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xea7f,	// (0x0003e080) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5a,	// (0x0003f35b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5a,	// (0x0003f35b) list_single_idle_plugin_shortcut_pane_g

0xea94,	// (0x0003e095) cell_ai_shortcut_pane_ParamLimits

0xea94,	// (0x0003e095) cell_ai_shortcut_pane

0xeaaa,	// (0x0003e0ab) cell_ai_shortcut_pane_g1_ParamLimits

0xeaaa,	// (0x0003e0ab) cell_ai_shortcut_pane_g1

0x933c,	// (0x0003893d) ai_gene_pane_1_cp2

0x9552,	// (0x00038b53) ai_gene_pane_2_cp2

0x955a,	// (0x00038b5b) list_highlight_pane_cp15

0x9563,	// (0x00038b64) list_single_idle_plugin_calendar_pane_g1

0x955a,	// (0x00038b5b) list_highlight_pane_cp17

0x956b,	// (0x00038b6c) list_single_idle_plugin_calendar_pane_g1_copy1

0x9573,	// (0x00038b74) list_single_idle_plugin_player_pane_g1

0x6cd0,	// (0x000362d1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd61,	// (0x0003f362) list_single_idle_plugin_player_pane_g

0x957b,	// (0x00038b7c) list_single_idle_plugin_player_pane_t1

0x9589,	// (0x00038b8a) list_single_idle_plugin_player_pane_t2

0x9597,	// (0x00038b98) list_single_idle_plugin_player_pane_t3

0x95a5,	// (0x00038ba6) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd66,	// (0x0003f367) list_single_idle_plugin_player_pane_t

0x95b3,	// (0x00038bb4) wait_bar_pane_cp15

0x95bb,	// (0x00038bbc) grid_ai_notification_pane

0x6cd0,	// (0x000362d1) list_single_idle_plugin_notification_pane_g1

0xeacc,	// (0x0003e0cd) cell_ai_notification_pane_ParamLimits

0xeacc,	// (0x0003e0cd) cell_ai_notification_pane

0x95d1,	// (0x00038bd2) cell_ai_notification_pane_g1

0x95d9,	// (0x00038bda) cell_ai_notification_pane_t1

0xead9,	// (0x0003e0da) tb_ext_find_button_pane

0xeae1,	// (0x0003e0e2) tb_ext_find_pane_g1

0xeae9,	// (0x0003e0ea) tb_ext_find_pane_t1

0x44d2,	// (0x00033ad3) tb_ext_find_button_pane_g1

0x9605,	// (0x00038c06) tb_ext_find_button_pane_g2

0x0001,

0xfd6f,	// (0x0003f370) tb_ext_find_button_pane_g

0xe8f9,	// (0x0003defa) main_idle_act4_pane_t1_ParamLimits

0xe90f,	// (0x0003df10) main_idle_act4_pane_t2_ParamLimits

0xfd2d,	// (0x0003f32e) main_idle_act4_pane_t_ParamLimits

0xe941,	// (0x0003df42) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe959,	// (0x0003df5a) sat_plugin_idle_act4_pane_ParamLimits

0xe959,	// (0x0003df5a) sat_plugin_idle_act4_pane

0xeaf7,	// (0x0003e0f8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeaf7,	// (0x0003e0f8) sat_plugin_idle_act4_pane_t1

0xeb0f,	// (0x0003e110) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb0f,	// (0x0003e110) sat_plugin_idle_act4_pane_t2

0xeb27,	// (0x0003e128) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb27,	// (0x0003e128) sat_plugin_idle_act4_pane_t3

0xeb3f,	// (0x0003e140) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb3f,	// (0x0003e140) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd74,	// (0x0003f375) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd74,	// (0x0003f375) sat_plugin_idle_act4_pane_t

0x0164,	// (0x0002f765) popup_battery_window_ParamLimits

0x0164,	// (0x0002f765) popup_battery_window

0x386d,	// (0x00032e6e) bg_popup_sub_pane_cp25_ParamLimits

0x386d,	// (0x00032e6e) bg_popup_sub_pane_cp25

0x965a,	// (0x00038c5b) popup_battery_window_g1_ParamLimits

0x965a,	// (0x00038c5b) popup_battery_window_g1

0x9666,	// (0x00038c67) popup_battery_window_t1_ParamLimits

0x9666,	// (0x00038c67) popup_battery_window_t1

0x9678,	// (0x00038c79) popup_battery_window_t2_ParamLimits

0x9678,	// (0x00038c79) popup_battery_window_t2

0x0001,

0xfd7d,	// (0x0003f37e) popup_battery_window_t_ParamLimits

0xfd7d,	// (0x0003f37e) popup_battery_window_t

0xd3f5,	// (0x0003c9f6) midp_canvas_pane_ParamLimits

0xd452,	// (0x0003ca53) midp_keypad_pane_ParamLimits

0xd452,	// (0x0003ca53) midp_keypad_pane

0x4e23,	// (0x00034424) main_midp_pane_ParamLimits

0x73fe,	// (0x000369ff) signal_pane_g2_cp_ParamLimits

0xeb57,	// (0x0003e158) aid_size_cell_midp_keypad_ParamLimits

0xeb57,	// (0x0003e158) aid_size_cell_midp_keypad

0xeb75,	// (0x0003e176) midp_keyp_game_grid_pane_ParamLimits

0xeb75,	// (0x0003e176) midp_keyp_game_grid_pane

0xeb9c,	// (0x0003e19d) midp_keyp_rocker_pane_ParamLimits

0xeb9c,	// (0x0003e19d) midp_keyp_rocker_pane

0xebed,	// (0x0003e1ee) midp_keyp_sk_left_pane_ParamLimits

0xebed,	// (0x0003e1ee) midp_keyp_sk_left_pane

0xec41,	// (0x0003e242) midp_keyp_sk_right_pane_ParamLimits

0xec41,	// (0x0003e242) midp_keyp_sk_right_pane

0x2d3f,	// (0x00032340) bg_button_pane_cp03

0xec95,	// (0x0003e296) midp_keyp_sk_left_pane_g1

0x2d3f,	// (0x00032340) bg_button_pane_cp04

0xec95,	// (0x0003e296) midp_keyp_sk_right_pane_g1

0x7954,	// (0x00036f55) midp_keyp_rocker_pane_g1

0xec9e,	// (0x0003e29f) keyp_game_cell_pane_ParamLimits

0xec9e,	// (0x0003e29f) keyp_game_cell_pane

0x2d3f,	// (0x00032340) bg_button_pane_cp02

0xecc2,	// (0x0003e2c3) keyp_game_cell_pane_g1

0xb624,	// (0x0003ac25) popup_fep_vkb2_window_ParamLimits

0xb624,	// (0x0003ac25) popup_fep_vkb2_window

0xc94b,	// (0x0003bf4c) aid_size_cell_vkb2_ParamLimits

0xc94b,	// (0x0003bf4c) aid_size_cell_vkb2

0xc981,	// (0x0003bf82) popup_fep_vkb2_window_g1_ParamLimits

0xc981,	// (0x0003bf82) popup_fep_vkb2_window_g1

0xc9d1,	// (0x0003bfd2) vkb2_area_bottom_pane_ParamLimits

0xc9d1,	// (0x0003bfd2) vkb2_area_bottom_pane

0xca25,	// (0x0003c026) vkb2_area_keypad_pane_ParamLimits

0xca25,	// (0x0003c026) vkb2_area_keypad_pane

0xca6d,	// (0x0003c06e) vkb2_area_top_pane_ParamLimits

0xca6d,	// (0x0003c06e) vkb2_area_top_pane

0xcaf3,	// (0x0003c0f4) vkb2_top_entry_pane_ParamLimits

0xcaf3,	// (0x0003c0f4) vkb2_top_entry_pane

0xcb20,	// (0x0003c121) vkb2_top_grid_left_pane_ParamLimits

0xcb20,	// (0x0003c121) vkb2_top_grid_left_pane

0xcb40,	// (0x0003c141) vkb2_top_grid_right_pane_ParamLimits

0xcb40,	// (0x0003c141) vkb2_top_grid_right_pane

0x2415,	// (0x00031a16) vkb2_cell_keypad_pane_ParamLimits

0x2415,	// (0x00031a16) vkb2_cell_keypad_pane

0xcb86,	// (0x0003c187) vkb2_area_bottom_grid_pane_ParamLimits

0xcb86,	// (0x0003c187) vkb2_area_bottom_grid_pane

0xcbb0,	// (0x0003c1b1) vkb2_area_bottom_pane_g1_ParamLimits

0xcbb0,	// (0x0003c1b1) vkb2_area_bottom_pane_g1

0xcbd6,	// (0x0003c1d7) vkb2_area_bottom_pane_g2_ParamLimits

0xcbd6,	// (0x0003c1d7) vkb2_area_bottom_pane_g2

0xcc07,	// (0x0003c208) vkb2_area_bottom_pane_g3_ParamLimits

0xcc07,	// (0x0003c208) vkb2_area_bottom_pane_g3

0x0002,

0xfd82,	// (0x0003f383) vkb2_area_bottom_pane_g_ParamLimits

0xfd82,	// (0x0003f383) vkb2_area_bottom_pane_g

0x25bf,	// (0x00031bc0) vkb2_top_cell_left_pane_ParamLimits

0x25bf,	// (0x00031bc0) vkb2_top_cell_left_pane

0xeccb,	// (0x0003e2cc) vkb2_top_entry_pane_g1_ParamLimits

0xeccb,	// (0x0003e2cc) vkb2_top_entry_pane_g1

0xecd9,	// (0x0003e2da) vkb2_top_entry_pane_t1_ParamLimits

0xecd9,	// (0x0003e2da) vkb2_top_entry_pane_t1

0x9829,	// (0x00038e2a) vkb2_top_entry_pane_t2_ParamLimits

0x9829,	// (0x00038e2a) vkb2_top_entry_pane_t2

0x985b,	// (0x00038e5c) vkb2_top_entry_pane_t3_ParamLimits

0x985b,	// (0x00038e5c) vkb2_top_entry_pane_t3

0x0002,

0xfd89,	// (0x0003f38a) vkb2_top_entry_pane_t_ParamLimits

0xfd89,	// (0x0003f38a) vkb2_top_entry_pane_t

0xcc71,	// (0x0003c272) vkb2_top_grid_right_pane_g1_ParamLimits

0xcc71,	// (0x0003c272) vkb2_top_grid_right_pane_g1

0x2622,	// (0x00031c23) vkb2_top_grid_right_pane_g2_ParamLimits

0x2622,	// (0x00031c23) vkb2_top_grid_right_pane_g2

0x263a,	// (0x00031c3b) vkb2_top_grid_right_pane_g3_ParamLimits

0x263a,	// (0x00031c3b) vkb2_top_grid_right_pane_g3

0xcc87,	// (0x0003c288) vkb2_top_grid_right_pane_g4_ParamLimits

0xcc87,	// (0x0003c288) vkb2_top_grid_right_pane_g4

0x0003,

0xfd90,	// (0x0003f391) vkb2_top_grid_right_pane_g_ParamLimits

0xfd90,	// (0x0003f391) vkb2_top_grid_right_pane_g

0x2668,	// (0x00031c69) vkb2_top_cell_left_pane_g1

0x267f,	// (0x00031c80) vkb2_cell_keypad_pane_g1_ParamLimits

0x267f,	// (0x00031c80) vkb2_cell_keypad_pane_g1

0x987f,	// (0x00038e80) vkb2_cell_keypad_pane_t1_ParamLimits

0x987f,	// (0x00038e80) vkb2_cell_keypad_pane_t1

0x268d,	// (0x00031c8e) vkb2_cell_bottom_grid_pane_ParamLimits

0x268d,	// (0x00031c8e) vkb2_cell_bottom_grid_pane

0x26c6,	// (0x00031cc7) vkb2_cell_bottom_grid_pane_g1

0xe98a,	// (0x0003df8b) aid_call2_pane_cp02

0xe992,	// (0x0003df93) aid_call_pane_cp02

0xe99a,	// (0x0003df9b) clock_digital_number_pane_cp10

0xe9a2,	// (0x0003dfa3) clock_digital_number_pane_cp11

0xe9aa,	// (0x0003dfab) clock_digital_number_pane_cp12

0xe9b2,	// (0x0003dfb3) clock_digital_number_pane_cp13

0xe9ba,	// (0x0003dfbb) clock_digital_separator_pane_cp10

0x44d2,	// (0x00033ad3) popup_clock_digital_analogue_window_cp2_g1

0x44d2,	// (0x00033ad3) popup_clock_digital_analogue_window_cp2_g2

0xe9c2,	// (0x0003dfc3) popup_clock_digital_analogue_window_cp2_g3

0x44d2,	// (0x00033ad3) popup_clock_digital_analogue_window_cp2_g4

0xe9c2,	// (0x0003dfc3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd45,	// (0x0003f346) popup_clock_digital_analogue_window_cp2_g

0xe9ca,	// (0x0003dfcb) popup_clock_digital_analogue_window_cp2_t1

0xe9d8,	// (0x0003dfd9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd50,	// (0x0003f351) popup_clock_digital_analogue_window_cp2_t

0x7954,	// (0x00036f55) clock_digital_number_pane_cp10_g1

0x7954,	// (0x00036f55) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0003f12d) clock_digital_number_pane_cp10_g

0x7954,	// (0x00036f55) clock_digital_separator_pane_cp10_g1

0x7954,	// (0x00036f55) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0003f12d) clock_digital_separator_pane_cp10_g

0x9285,	// (0x00038886) uniindi_top_pane_g3

0x9296,	// (0x00038897) uniindi_top_pane_g4

0x24a0,	// (0x00031aa1) vkb2_row_keypad_pane_ParamLimits

0x24a0,	// (0x00031aa1) vkb2_row_keypad_pane

0x26e2,	// (0x00031ce3) vkb2_cell_t_keypad_pane_ParamLimits

0x26e2,	// (0x00031ce3) vkb2_cell_t_keypad_pane

0x26f2,	// (0x00031cf3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x26f2,	// (0x00031cf3) vkb2_cell_t_keypad_pane_cp08

0x2705,	// (0x00031d06) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2705,	// (0x00031d06) vkb2_cell_t_keypad_pane_cp09

0x2719,	// (0x00031d1a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2719,	// (0x00031d1a) vkb2_cell_t_keypad_pane_cp01

0x272a,	// (0x00031d2b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x272a,	// (0x00031d2b) vkb2_cell_t_keypad_pane_cp02

0x273b,	// (0x00031d3c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x273b,	// (0x00031d3c) vkb2_cell_t_keypad_pane_cp03

0x274c,	// (0x00031d4d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x274c,	// (0x00031d4d) vkb2_cell_t_keypad_pane_cp04

0x275d,	// (0x00031d5e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x275d,	// (0x00031d5e) vkb2_cell_t_keypad_pane_cp05

0x276e,	// (0x00031d6f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x276e,	// (0x00031d6f) vkb2_cell_t_keypad_pane_cp06

0x277f,	// (0x00031d80) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x277f,	// (0x00031d80) vkb2_cell_t_keypad_pane_cp07

0x2790,	// (0x00031d91) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2790,	// (0x00031d91) vkb2_cell_t_keypad_pane_cp10

0x1f46,	// (0x00031547) vkb2_cell_t_keypad_pane_g1

0x9896,	// (0x00038e97) vkb2_cell_t_keypad_pane_t1

0x009f,	// (0x0002f6a0) popup_grid_graphic2_window

0xed12,	// (0x0003e313) aid_size_cell_graphic2_ParamLimits

0xed12,	// (0x0003e313) aid_size_cell_graphic2

0xed50,	// (0x0003e351) bg_popup_window_pane_cp21_ParamLimits

0xed50,	// (0x0003e351) bg_popup_window_pane_cp21

0xed5e,	// (0x0003e35f) graphic2_pages_pane_ParamLimits

0xed5e,	// (0x0003e35f) graphic2_pages_pane

0xedb4,	// (0x0003e3b5) grid_graphic2_control_pane_ParamLimits

0xedb4,	// (0x0003e3b5) grid_graphic2_control_pane

0xedfc,	// (0x0003e3fd) grid_graphic2_pane_ParamLimits

0xedfc,	// (0x0003e3fd) grid_graphic2_pane

0xee83,	// (0x0003e484) cell_graphic2_pane

0x009f,	// (0x0002f6a0) main_comp_mode_pane

0x8b05,	// (0x00038106) list_ai3_gene_pane_ParamLimits

0xe6d1,	// (0x0003dcd2) bg_popup_window_pane_cp19_ParamLimits

0x8edb,	// (0x000384dc) bg_touch_area_indi_pane_ParamLimits

0x8edb,	// (0x000384dc) bg_touch_area_indi_pane

0x8ef1,	// (0x000384f2) bg_touch_area_indi_pane_cp01_ParamLimits

0x8ef1,	// (0x000384f2) bg_touch_area_indi_pane_cp01

0x8f07,	// (0x00038508) bg_touch_area_indi_pane_cp02_ParamLimits

0x8f07,	// (0x00038508) bg_touch_area_indi_pane_cp02

0x8f1f,	// (0x00038520) bg_touch_area_indi_pane_cp03_ParamLimits

0x8f1f,	// (0x00038520) bg_touch_area_indi_pane_cp03

0x8f39,	// (0x0003853a) popup_slider_window_g1_ParamLimits

0x8f55,	// (0x00038556) popup_slider_window_g2_ParamLimits

0x8f71,	// (0x00038572) popup_slider_window_g3_ParamLimits

0xfcda,	// (0x0003f2db) popup_slider_window_g_ParamLimits

0x8fcd,	// (0x000385ce) popup_slider_window_t1_ParamLimits

0x9041,	// (0x00038642) small_volume_slider_vertical_pane_ParamLimits

0xee83,	// (0x0003e484) cell_graphic2_pane_ParamLimits

0xeee0,	// (0x0003e4e1) bg_button_pane_cp10_ParamLimits

0xeee0,	// (0x0003e4e1) bg_button_pane_cp10

0xeef3,	// (0x0003e4f4) bg_button_pane_cp11_ParamLimits

0xeef3,	// (0x0003e4f4) bg_button_pane_cp11

0xef06,	// (0x0003e507) graphic2_pages_pane_g1_ParamLimits

0xef06,	// (0x0003e507) graphic2_pages_pane_g1

0xef21,	// (0x0003e522) graphic2_pages_pane_g2_ParamLimits

0xef21,	// (0x0003e522) graphic2_pages_pane_g2

0x0001,

0xfd9e,	// (0x0003f39f) graphic2_pages_pane_g_ParamLimits

0xfd9e,	// (0x0003f39f) graphic2_pages_pane_g

0xef39,	// (0x0003e53a) graphic2_pages_pane_t1_ParamLimits

0xef39,	// (0x0003e53a) graphic2_pages_pane_t1

0xef51,	// (0x0003e552) cell_graphic2_control_pane_ParamLimits

0xef51,	// (0x0003e552) cell_graphic2_control_pane

0xef83,	// (0x0003e584) cell_graphic2_pane_g1_ParamLimits

0xef83,	// (0x0003e584) cell_graphic2_pane_g1

0xe3f4,	// (0x0003d9f5) cell_graphic2_pane_g2_ParamLimits

0xe3f4,	// (0x0003d9f5) cell_graphic2_pane_g2

0xe40e,	// (0x0003da0f) cell_graphic2_pane_g3_ParamLimits

0xe40e,	// (0x0003da0f) cell_graphic2_pane_g3

0xe401,	// (0x0003da02) cell_graphic2_pane_g4_ParamLimits

0xe401,	// (0x0003da02) cell_graphic2_pane_g4

0xef90,	// (0x0003e591) cell_graphic2_pane_g5_ParamLimits

0xef90,	// (0x0003e591) cell_graphic2_pane_g5

0x0004,

0xfda3,	// (0x0003f3a4) cell_graphic2_pane_g_ParamLimits

0xfda3,	// (0x0003f3a4) cell_graphic2_pane_g

0xefb0,	// (0x0003e5b1) cell_graphic2_pane_t1_ParamLimits

0xefb0,	// (0x0003e5b1) cell_graphic2_pane_t1

0x601a,	// (0x0003561b) grid_highlight_pane_cp11_ParamLimits

0x601a,	// (0x0003561b) grid_highlight_pane_cp11

0x386d,	// (0x00032e6e) bg_button_pane_cp05

0xefe5,	// (0x0003e5e6) cell_graphic2_control_pane_g1

0x7954,	// (0x00036f55) bg_touch_area_indi_pane_g1

0x9b66,	// (0x00039167) aid_cmod_rocker_key_size

0x9b70,	// (0x00039171) aid_cmode_itu_key_size

0x9b7a,	// (0x0003917b) main_cmode_video_pane

0x9b84,	// (0x00039185) main_comp_mode_itu_pane

0x9b90,	// (0x00039191) main_comp_mode_rocker_pane

0x9b9c,	// (0x0003919d) cell_cmode_rocker_pane_ParamLimits

0x9b9c,	// (0x0003919d) cell_cmode_rocker_pane

0x9bae,	// (0x000391af) cell_cmode_itu_pane_ParamLimits

0x9bae,	// (0x000391af) cell_cmode_itu_pane

0x3e53,	// (0x00033454) bg_button_pane_cp06_ParamLimits

0x3e53,	// (0x00033454) bg_button_pane_cp06

0x7bd2,	// (0x000371d3) cell_cmode_rocker_pane_g1_ParamLimits

0x7bd2,	// (0x000371d3) cell_cmode_rocker_pane_g1

0x90e5,	// (0x000386e6) cell_cmode_rocker_pane_g2_ParamLimits

0x90e5,	// (0x000386e6) cell_cmode_rocker_pane_g2

0x0001,

0xfdb3,	// (0x0003f3b4) cell_cmode_rocker_pane_g_ParamLimits

0xfdb3,	// (0x0003f3b4) cell_cmode_rocker_pane_g

0x2d3f,	// (0x00032340) bg_button_pane_cp07

0x9bc3,	// (0x000391c4) cell_cmode_itu_pane_g1

0x9bcc,	// (0x000391cd) cell_cmode_itu_pane_t1

0x9bda,	// (0x000391db) cell_cmode_itu_pane_t2

0x0001,

0xfdb8,	// (0x0003f3b9) cell_cmode_itu_pane_t

0x9308,	// (0x00038909) aid_touch_ctrl_left

0x9310,	// (0x00038911) aid_touch_ctrl_right

0x2d3f,	// (0x00032340) compa_mode_pane

0xf00b,	// (0x0003e60c) aid_cmod_rocker_key_size_cp

0xf015,	// (0x0003e616) aid_cmode_itu_key_size_cp

0x9bfc,	// (0x000391fd) compa_mode_pane_g1

0x9c04,	// (0x00039205) compa_mode_pane_g2

0x9c0c,	// (0x0003920d) compa_mode_pane_g3

0x0002,

0xfdbd,	// (0x0003f3be) compa_mode_pane_g

0xf01f,	// (0x0003e620) main_comp_mode_itu_pane_cp

0xf027,	// (0x0003e628) main_comp_mode_rocker_pane_cp

0xf02f,	// (0x0003e630) cell_cmode_itu_pane_cp_ParamLimits

0xf02f,	// (0x0003e630) cell_cmode_itu_pane_cp

0xf044,	// (0x0003e645) cell_cmode_rocker_pane_cp_ParamLimits

0xf044,	// (0x0003e645) cell_cmode_rocker_pane_cp

0x3e53,	// (0x00033454) bg_button_pane_cp06_cp_ParamLimits

0x3e53,	// (0x00033454) bg_button_pane_cp06_cp

0x7bd2,	// (0x000371d3) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7bd2,	// (0x000371d3) cell_cmode_rocker_pane_g1_cp

0x7954,	// (0x00036f55) cell_cmode_rocker_pane_g2_cp

0x2d3f,	// (0x00032340) bg_button_pane_cp07_cp

0xf056,	// (0x0003e657) cell_cmode_itu_pane_g1_cp

0xf05f,	// (0x0003e660) cell_cmode_itu_pane_t1_cp

0xf05f,	// (0x0003e660) cell_cmode_itu_pane_t2_cp

0xdcf1,	// (0x0003d2f2) settings_code_pane_cp2

0x2e33,	// (0x00032434) bg_popup_window_pane_cp3_ParamLimits

0x3a47,	// (0x00033048) heading_pane_cp3_ParamLimits

0x3a53,	// (0x00033054) listscroll_popup_graphic_pane_ParamLimits

0x1cef,	// (0x000312f0) fep_hwr_aid_pane_ParamLimits

0x2166,	// (0x00031767) aid_touch_sctrl_top_ParamLimits

0x2181,	// (0x00031782) sctrl_sk_top_pane_g1_ParamLimits

0x1f46,	// (0x00031547) sctrl_sk_top_pane_g2_ParamLimits

0xfcf3,	// (0x0003f2f4) sctrl_sk_top_pane_g_ParamLimits

0x218e,	// (0x0003178f) sctrl_sk_top_pane_t1_ParamLimits

0x2166,	// (0x00031767) aid_touch_sctrl_bottom_ParamLimits

0x218e,	// (0x0003178f) sctrl_sk_bottom_pane_t1_ParamLimits

0x9251,	// (0x00038852) aid_area_touch_clock

0xcab5,	// (0x0003c0b6) aid_vkb2_area_top_pane_cell_ParamLimits

0xcab5,	// (0x0003c0b6) aid_vkb2_area_top_pane_cell

0xcb60,	// (0x0003c161) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcb60,	// (0x0003c161) aid_vkb2_area_bottom_pane_cell

0x97e1,	// (0x00038de2) popup_char_count_window

0x9c59,	// (0x0003925a) popup_char_count_window_g1

0x9c62,	// (0x00039263) popup_char_count_window_g2

0x9c6b,	// (0x0003926c) popup_char_count_window_g3

0x0002,

0xfdc4,	// (0x0003f3c5) popup_char_count_window_g

0x9c74,	// (0x00039275) popup_char_count_window_t1

0x223d,	// (0x0003183e) popup_fep_char_preview_window_ParamLimits

0x223d,	// (0x0003183e) popup_fep_char_preview_window

0xcad5,	// (0x0003c0d6) vkb2_top_candi_pane_ParamLimits

0xcad5,	// (0x0003c0d6) vkb2_top_candi_pane

0xf06d,	// (0x0003e66e) cell_vkb2_top_candi_pane_ParamLimits

0xf06d,	// (0x0003e66e) cell_vkb2_top_candi_pane

0x27a5,	// (0x00031da6) bg_popup_fep_char_preview_window_ParamLimits

0x27a5,	// (0x00031da6) bg_popup_fep_char_preview_window

0x27b3,	// (0x00031db4) popup_fep_char_preview_window_t1_ParamLimits

0x27b3,	// (0x00031db4) popup_fep_char_preview_window_t1

0x9ccf,	// (0x000392d0) bg_popup_fep_char_preview_window_g1

0x9cd7,	// (0x000392d8) bg_popup_fep_char_preview_window_g2

0x9cdf,	// (0x000392e0) bg_popup_fep_char_preview_window_g3

0x9ce7,	// (0x000392e8) bg_popup_fep_char_preview_window_g4

0x9cef,	// (0x000392f0) bg_popup_fep_char_preview_window_g5

0x27ed,	// (0x00031dee) bg_popup_fep_char_preview_window_g6

0x9cf7,	// (0x000392f8) bg_popup_fep_char_preview_window_g7

0x9cff,	// (0x00039300) bg_popup_fep_char_preview_window_g8

0x9d07,	// (0x00039308) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcb,	// (0x0003f3cc) bg_popup_fep_char_preview_window_g

0x1f46,	// (0x00031547) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1f46,	// (0x00031547) cell_vkb2_top_candi_pane_g1

0x1f54,	// (0x00031555) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1f54,	// (0x00031555) cell_vkb2_top_candi_pane_g2

0x9465,	// (0x00038a66) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9465,	// (0x00038a66) cell_vkb2_top_candi_pane_g3

0x27f5,	// (0x00031df6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x27f5,	// (0x00031df6) cell_vkb2_top_candi_pane_g4

0x809d,	// (0x0003769e) cell_vkb2_top_candi_pane_g5_ParamLimits

0x809d,	// (0x0003769e) cell_vkb2_top_candi_pane_g5

0x2816,	// (0x00031e17) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2816,	// (0x00031e17) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdde,	// (0x0003f3df) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdde,	// (0x0003f3df) cell_vkb2_top_candi_pane_g

0x2824,	// (0x00031e25) cell_vkb2_top_candi_pane_t1

0x1b21,	// (0x00031122) aid_size_touch_slider_mark_ParamLimits

0x1b21,	// (0x00031122) aid_size_touch_slider_mark

0xed9a,	// (0x0003e39b) grid_graphic2_catg_pane_ParamLimits

0xed9a,	// (0x0003e39b) grid_graphic2_catg_pane

0xee56,	// (0x0003e457) popup_grid_graphic2_window_t1_ParamLimits

0xee56,	// (0x0003e457) popup_grid_graphic2_window_t1

0xee6c,	// (0x0003e46d) popup_grid_graphic2_window_t2_ParamLimits

0xee6c,	// (0x0003e46d) popup_grid_graphic2_window_t2

0x0001,

0xfd99,	// (0x0003f39a) popup_grid_graphic2_window_t_ParamLimits

0xfd99,	// (0x0003f39a) popup_grid_graphic2_window_t

0x386d,	// (0x00032e6e) bg_button_pane_cp05_ParamLimits

0xefe5,	// (0x0003e5e6) cell_graphic2_control_pane_g1_ParamLimits

0xf0d3,	// (0x0003e6d4) cell_graphic2_catg_pane_ParamLimits

0xf0d3,	// (0x0003e6d4) cell_graphic2_catg_pane

0x2d3f,	// (0x00032340) bg_button_pane_cp12

0xf0e5,	// (0x0003e6e6) cell_graphic2_catg_pane_g1

0x921d,	// (0x0003881e) cell_tb_ext_pane_t1_ParamLimits

0x25df,	// (0x00031be0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x25df,	// (0x00031be0) vkb2_top_cell_right_narrow_pane

0x25f7,	// (0x00031bf8) vkb2_top_cell_right_wide_pane_ParamLimits

0x25f7,	// (0x00031bf8) vkb2_top_cell_right_wide_pane

0x1ce1,	// (0x000312e2) bg_vkb2_func_pane_ParamLimits

0x1ce1,	// (0x000312e2) bg_vkb2_func_pane

0x2668,	// (0x00031c69) vkb2_top_cell_left_pane_g1_ParamLimits

0x1ce1,	// (0x000312e2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1ce1,	// (0x000312e2) bg_vkb2_fuc_pane_cp03

0x26c6,	// (0x00031cc7) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5335,	// (0x00034936) bg_vkb2_func_pane_g1

0x533d,	// (0x0003493e) bg_vkb2_func_pane_g2

0x534d,	// (0x0003494e) bg_vkb2_func_pane_g3

0x5345,	// (0x00034946) bg_vkb2_func_pane_g4

0x5355,	// (0x00034956) bg_vkb2_func_pane_g5

0x535d,	// (0x0003495e) bg_vkb2_func_pane_g6

0x5365,	// (0x00034966) bg_vkb2_func_pane_g7

0x536d,	// (0x0003496e) bg_vkb2_func_pane_g8

0x532d,	// (0x0003492e) bg_vkb2_func_pane_g9

0x0008,

0xfdeb,	// (0x0003f3ec) bg_vkb2_func_pane_g

0x1ce1,	// (0x000312e2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1ce1,	// (0x000312e2) bg_vkb2_fuc_pane_cp01

0x2668,	// (0x00031c69) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2668,	// (0x00031c69) vkb2_top_cell_right_wide_pane_g1

0x1ce1,	// (0x000312e2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1ce1,	// (0x000312e2) bg_vkb2_fuc_pane_cp02

0x26c6,	// (0x00031cc7) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x26c6,	// (0x00031cc7) vkb2_top_cell_right_narrow_pane_g1

0xe611,	// (0x0003dc12) aid_touch_area_decrease_ParamLimits

0xe611,	// (0x0003dc12) aid_touch_area_decrease

0xe645,	// (0x0003dc46) aid_touch_area_increase_ParamLimits

0xe645,	// (0x0003dc46) aid_touch_area_increase

0xe66d,	// (0x0003dc6e) aid_touch_area_mute_ParamLimits

0xe66d,	// (0x0003dc6e) aid_touch_area_mute

0xe69d,	// (0x0003dc9e) aid_touch_area_slider_ParamLimits

0xe69d,	// (0x0003dc9e) aid_touch_area_slider

0xe6dd,	// (0x0003dcde) popup_slider_window_g4_ParamLimits

0xe6dd,	// (0x0003dcde) popup_slider_window_g4

0xe705,	// (0x0003dd06) popup_slider_window_g5_ParamLimits

0xe705,	// (0x0003dd06) popup_slider_window_g5

0xe739,	// (0x0003dd3a) popup_slider_window_g6_ParamLimits

0xe739,	// (0x0003dd3a) popup_slider_window_g6

0x8ffb,	// (0x000385fc) popup_slider_window_t2_ParamLimits

0x8ffb,	// (0x000385fc) popup_slider_window_t2

0x0001,

0xfce7,	// (0x0003f2e8) popup_slider_window_t_ParamLimits

0xfce7,	// (0x0003f2e8) popup_slider_window_t

0xe755,	// (0x0003dd56) slider_pane_ParamLimits

0xe755,	// (0x0003dd56) slider_pane

0x9d2a,	// (0x0003932b) slider_pane_g1_ParamLimits

0x9d2a,	// (0x0003932b) slider_pane_g1

0x9d3e,	// (0x0003933f) slider_pane_g2_ParamLimits

0x9d3e,	// (0x0003933f) slider_pane_g2

0x9d54,	// (0x00039355) slider_pane_g3_ParamLimits

0x9d54,	// (0x00039355) slider_pane_g3

0x0003,

0xfdfe,	// (0x0003f3ff) slider_pane_g_ParamLimits

0xfdfe,	// (0x0003f3ff) slider_pane_g

0xc4fd,	// (0x0003bafe) popup_tb_float_extension_window_ParamLimits

0xc4fd,	// (0x0003bafe) popup_tb_float_extension_window

0x9d80,	// (0x00039381) aid_size_cell_tb_float_ext

0x2d3f,	// (0x00032340) bg_popup_sub_window_cp28

0x9d8c,	// (0x0003938d) grid_tb_float_ext_pane

0x9d96,	// (0x00039397) cell_tb_float_ext_pane_ParamLimits

0x9d96,	// (0x00039397) cell_tb_float_ext_pane

0x9db0,	// (0x000393b1) cell_tb_float_ext_pane_g1

0x9db9,	// (0x000393ba) grid_highlight_pane_cp12

0xc6d5,	// (0x0003bcd6) cell_last_hwr_side_pane_ParamLimits

0xc6d5,	// (0x0003bcd6) cell_last_hwr_side_pane

0x7954,	// (0x00036f55) cell_last_hwr_side_pane_g1

0x9dc2,	// (0x000393c3) cell_last_hwr_side_pane_g2

0x0001,

0xfe07,	// (0x0003f408) cell_last_hwr_side_pane_g

0xcc3c,	// (0x0003c23d) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcc3c,	// (0x0003c23d) vkb2_area_bottom_space_btn_pane

0x1f46,	// (0x00031547) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9896,	// (0x00038e97) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2824,	// (0x00031e25) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2843,	// (0x00031e44) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2843,	// (0x00031e44) vkb2_area_bottom_space_btn_pane_g1

0x287d,	// (0x00031e7e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x287d,	// (0x00031e7e) vkb2_area_bottom_space_btn_pane_g2

0x28b3,	// (0x00031eb4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x28b3,	// (0x00031eb4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0c,	// (0x0003f40d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0c,	// (0x0003f40d) vkb2_area_bottom_space_btn_pane_g

0x1da4,	// (0x000313a5) cel_fep_hwr_func_pane_ParamLimits

0x1da4,	// (0x000313a5) cel_fep_hwr_func_pane

0xc6aa,	// (0x0003bcab) cell_hwr_side_button_pane_ParamLimits

0xc6aa,	// (0x0003bcab) cell_hwr_side_button_pane

0x9251,	// (0x00038852) aid_area_touch_clock_ParamLimits

0x386d,	// (0x00032e6e) bg_uniindi_top_pane_ParamLimits

0x9263,	// (0x00038864) uniindi_top_pane_g1_ParamLimits

0x9279,	// (0x0003887a) uniindi_top_pane_g2_ParamLimits

0x9285,	// (0x00038886) uniindi_top_pane_g3_ParamLimits

0x9296,	// (0x00038897) uniindi_top_pane_g4_ParamLimits

0xfd1f,	// (0x0003f320) uniindi_top_pane_g_ParamLimits

0x92a3,	// (0x000388a4) uniindi_top_pane_t1_ParamLimits

0x386d,	// (0x00032e6e) bg_vkb2_func_pane_cp01_ParamLimits

0x386d,	// (0x00032e6e) bg_vkb2_func_pane_cp01

0x9dcb,	// (0x000393cc) cel_fep_hwr_func_pane_g1_ParamLimits

0x9dcb,	// (0x000393cc) cel_fep_hwr_func_pane_g1

0x386d,	// (0x00032e6e) bg_vkb2_func_pane_cp02_ParamLimits

0x386d,	// (0x00032e6e) bg_vkb2_func_pane_cp02

0x9dcb,	// (0x000393cc) cell_hwr_side_button_pane_g1_ParamLimits

0x9dcb,	// (0x000393cc) cell_hwr_side_button_pane_g1

0x51ae,	// (0x000347af) status_pane_g4_ParamLimits

0x51ae,	// (0x000347af) status_pane_g4

0x51c8,	// (0x000347c9) status_pane_t1

0x768e,	// (0x00036c8f) form2_midp_gauge_slider_cont_pane

0x7696,	// (0x00036c97) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdfc8,	// (0x0003d5c9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdfda,	// (0x0003d5db) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfadf,	// (0x0003f0e0) form2_midp_gauge_slider_pane_t_ParamLimits

0x76cc,	// (0x00036ccd) form2_midp_slider_pane_ParamLimits

0x21fd,	// (0x000317fe) aid_size_cell_func_vkb2_ParamLimits

0x21fd,	// (0x000317fe) aid_size_cell_func_vkb2

0x9d6c,	// (0x0003936d) slider_pane_g4_ParamLimits

0x9d6c,	// (0x0003936d) slider_pane_g4

0xcc9d,	// (0x0003c29e) form2_midp_gauge_slider_pane_t2_cp01

0xccab,	// (0x0003c2ac) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xccab,	// (0x0003c2ac) form2_midp_gauge_slider_pane_t3_cp01

0x2928,	// (0x00031f29) form2_midp_slider_pane_cp01

0x2d3f,	// (0x00032340) navi_smil_pane

0x9e04,	// (0x00039405) navi_smil_pane_g1

0x9e0c,	// (0x0003940d) navi_smil_pane_t1

0x9dd9,	// (0x000393da) form2_midp_slider_pane_g1

0x9de2,	// (0x000393e3) form2_midp_slider_pane_g2

0x9dea,	// (0x000393eb) form2_midp_slider_pane_g3

0x9dd9,	// (0x000393da) form2_midp_slider_pane_g4

0xf0ee,	// (0x0003e6ef) form2_midp_slider_pane_g5

0x0004,

0xfe15,	// (0x0003f416) form2_midp_slider_pane_g

0x28ed,	// (0x00031eee) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x28ed,	// (0x00031eee) vkb2_area_bottom_space_btn_pane_g4

0xd6c5,	// (0x0003ccc6) lc0_navi_pane_ParamLimits

0xd6c5,	// (0x0003ccc6) lc0_navi_pane

0xd72f,	// (0x0003cd30) lc0_stat_indi_pane_ParamLimits

0xd72f,	// (0x0003cd30) lc0_stat_indi_pane

0xd744,	// (0x0003cd45) ls0_title_pane_ParamLimits

0xd744,	// (0x0003cd45) ls0_title_pane

0x3e53,	// (0x00033454) bg_popup_sub_pane_cp14_ParamLimits

0x9238,	// (0x00038839) list_uniindi_pane_ParamLimits

0x9244,	// (0x00038845) uniindi_top_pane_ParamLimits

0x92e0,	// (0x000388e1) list_single_uniindi_pane_g1_ParamLimits

0x92f3,	// (0x000388f4) list_single_uniindi_pane_t1_ParamLimits

0xccc8,	// (0x0003c2c9) lc0_stat_clock_pane_ParamLimits

0xccc8,	// (0x0003c2c9) lc0_stat_clock_pane

0xf0f9,	// (0x0003e6fa) lc0_stat_indi_pane_g1_ParamLimits

0xf0f9,	// (0x0003e6fa) lc0_stat_indi_pane_g1

0xf106,	// (0x0003e707) lc0_stat_indi_pane_g2_ParamLimits

0xf106,	// (0x0003e707) lc0_stat_indi_pane_g2

0x0001,

0xfe20,	// (0x0003f421) lc0_stat_indi_pane_g_ParamLimits

0xfe20,	// (0x0003f421) lc0_stat_indi_pane_g

0xccd5,	// (0x0003c2d6) lc0_uni_indicator_pane_ParamLimits

0xccd5,	// (0x0003c2d6) lc0_uni_indicator_pane

0xf113,	// (0x0003e714) ls0_title_pane_g1_ParamLimits

0xf113,	// (0x0003e714) ls0_title_pane_g1

0xf127,	// (0x0003e728) ls0_title_pane_t1_ParamLimits

0xf127,	// (0x0003e728) ls0_title_pane_t1

0xcce2,	// (0x0003c2e3) lc0_uni_indicator_pane_g1_ParamLimits

0xcce2,	// (0x0003c2e3) lc0_uni_indicator_pane_g1

0x9e7e,	// (0x0003947f) lc0_stat_clock_pane_t1

0x009f,	// (0x0002f6a0) main_ai5_pane

0x9e8c,	// (0x0003948d) ai5_sk_pane_ParamLimits

0x9e8c,	// (0x0003948d) ai5_sk_pane

0xf155,	// (0x0003e756) cell_ai5_widget_pane_ParamLimits

0xf155,	// (0x0003e756) cell_ai5_widget_pane

0x9f4f,	// (0x00039550) aid_size_cell_widget_grid

0x9f65,	// (0x00039566) bg_ai5_widget_pane_ParamLimits

0x9f65,	// (0x00039566) bg_ai5_widget_pane

0x9fd9,	// (0x000395da) cell_ai5_widget_pane_g2

0x9fe9,	// (0x000395ea) cell_ai5_widget_pane_g3

0xa000,	// (0x00039601) cell_ai5_widget_pane_g4

0xa00c,	// (0x0003960d) cell_ai5_widget_pane_g5

0xa018,	// (0x00039619) cell_ai5_widget_pane_g6

0xa024,	// (0x00039625) cell_ai5_widget_pane_g7

0xa06c,	// (0x0003966d) cell_ai5_widget_pane_t1_ParamLimits

0xa06c,	// (0x0003966d) cell_ai5_widget_pane_t1

0xa089,	// (0x0003968a) cell_ai5_widget_pane_t2_ParamLimits

0xa089,	// (0x0003968a) cell_ai5_widget_pane_t2

0xa0a1,	// (0x000396a2) cell_ai5_widget_pane_t3_ParamLimits

0xa0a1,	// (0x000396a2) cell_ai5_widget_pane_t3

0xa0b9,	// (0x000396ba) cell_ai5_widget_pane_t4_ParamLimits

0xa0b9,	// (0x000396ba) cell_ai5_widget_pane_t4

0xa0d6,	// (0x000396d7) cell_ai5_widget_pane_t5_ParamLimits

0xa0d6,	// (0x000396d7) cell_ai5_widget_pane_t5

0xa0f5,	// (0x000396f6) cell_ai5_widget_pane_t6_ParamLimits

0xa0f5,	// (0x000396f6) cell_ai5_widget_pane_t6

0xa107,	// (0x00039708) cell_ai5_widget_pane_t7_ParamLimits

0xa107,	// (0x00039708) cell_ai5_widget_pane_t7

0xa120,	// (0x00039721) cell_ai5_widget_pane_t8_ParamLimits

0xa120,	// (0x00039721) cell_ai5_widget_pane_t8

0x0009,

0xfe3a,	// (0x0003f43b) cell_ai5_widget_pane_t_ParamLimits

0xfe3a,	// (0x0003f43b) cell_ai5_widget_pane_t

0xa174,	// (0x00039775) grid_ai5_widget_pane

0x3e53,	// (0x00033454) highlight_cell_ai5_widget_pane_ParamLimits

0x3e53,	// (0x00033454) highlight_cell_ai5_widget_pane

0xf1bf,	// (0x0003e7c0) ai5_sk_left_pane

0xf1c9,	// (0x0003e7ca) ai5_sk_middle_pane

0xf1d3,	// (0x0003e7d4) ai5_sk_right_pane

0xa1a9,	// (0x000397aa) bg_ai5_widget_pane_g1_ParamLimits

0xa1a9,	// (0x000397aa) bg_ai5_widget_pane_g1

0xa1b5,	// (0x000397b6) bg_ai5_widget_pane_g2_ParamLimits

0xa1b5,	// (0x000397b6) bg_ai5_widget_pane_g2

0xa1c1,	// (0x000397c2) bg_ai5_widget_pane_g3_ParamLimits

0xa1c1,	// (0x000397c2) bg_ai5_widget_pane_g3

0xa1cd,	// (0x000397ce) bg_ai5_widget_pane_g4_ParamLimits

0xa1cd,	// (0x000397ce) bg_ai5_widget_pane_g4

0xa1d9,	// (0x000397da) bg_ai5_widget_pane_g5_ParamLimits

0xa1d9,	// (0x000397da) bg_ai5_widget_pane_g5

0xa1e5,	// (0x000397e6) bg_ai5_widget_pane_g6_ParamLimits

0xa1e5,	// (0x000397e6) bg_ai5_widget_pane_g6

0xa1f1,	// (0x000397f2) bg_ai5_widget_pane_g7_ParamLimits

0xa1f1,	// (0x000397f2) bg_ai5_widget_pane_g7

0xa1fd,	// (0x000397fe) bg_ai5_widget_pane_g8_ParamLimits

0xa1fd,	// (0x000397fe) bg_ai5_widget_pane_g8

0xa209,	// (0x0003980a) bg_ai5_widget_pane_g9_ParamLimits

0xa209,	// (0x0003980a) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x0003f450) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0003f450) bg_ai5_widget_pane_g

0xa23b,	// (0x0003983c) cell_shortcut_ai5_widget_pane_ParamLimits

0xa23b,	// (0x0003983c) cell_shortcut_ai5_widget_pane

0x4ae5,	// (0x000340e6) bg_cell_shortcut_ai5_widget_pane

0xa24c,	// (0x0003984d) cell_grid_ai5_widget_pane_g1

0x4ae5,	// (0x000340e6) highlight_cell_shortcut_ai5_widget_pane

0x5335,	// (0x00034936) ai5_sk_left_pane_g1

0xa255,	// (0x00039856) ai5_sk_left_pane_g2

0xa25d,	// (0x0003985e) ai5_sk_left_pane_g3

0xa265,	// (0x00039866) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x0003f463) ai5_sk_left_pane_g

0xa26d,	// (0x0003986e) ai5_sk_left_pane_t1

0x533d,	// (0x0003493e) ai5_sk_right_pane_g1

0xa27b,	// (0x0003987c) ai5_sk_right_pane_g2

0xa283,	// (0x00039884) ai5_sk_right_pane_g3

0xa28b,	// (0x0003988c) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x0003f46c) ai5_sk_right_pane_g

0xa293,	// (0x00039894) ai5_sk_right_pane_t1

0x533d,	// (0x0003493e) ai5_sk_middle_pane_g1

0x5335,	// (0x00034936) ai5_sk_middle_pane_g2

0x5355,	// (0x00034956) ai5_sk_middle_pane_g3

0xa283,	// (0x00039884) ai5_sk_middle_pane_g4

0xa25d,	// (0x0003985e) ai5_sk_middle_pane_g5

0xa2a1,	// (0x000398a2) ai5_sk_middle_pane_g6

0xf1dd,	// (0x0003e7de) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x0003f475) ai5_sk_middle_pane_g

0xd5b1,	// (0x0003cbb2) aid_touch_area_size_lc0_ParamLimits

0xd5b1,	// (0x0003cbb2) aid_touch_area_size_lc0

0x1f75,	// (0x00031576) cell_hwr_candidate_pane_t1_ParamLimits

0x4e85,	// (0x00034486) aid_touch_navi_pane

0xd83d,	// (0x0003ce3e) status_dt_navi_pane_ParamLimits

0xd83d,	// (0x0003ce3e) status_dt_navi_pane

0xd855,	// (0x0003ce56) status_dt_sta_pane_ParamLimits

0xd855,	// (0x0003ce56) status_dt_sta_pane

0xf1e5,	// (0x0003e7e6) dt_sta_controll_pane

0xf1f2,	// (0x0003e7f3) dt_sta_indi_pane

0xf1ff,	// (0x0003e800) dt_sta_title_pane

0x386d,	// (0x00032e6e) bg_dt_sta_indi_pane_ParamLimits

0x386d,	// (0x00032e6e) bg_dt_sta_indi_pane

0xf211,	// (0x0003e812) dt_sta_battery_pane

0xf219,	// (0x0003e81a) dt_sta_indi_pane_g1

0xa2f3,	// (0x000398f4) dt_sta_indi_pane_g2

0xa2fc,	// (0x000398fd) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x0003f484) dt_sta_indi_pane_g

0xa305,	// (0x00039906) dt_sta_signal_pane

0x3e53,	// (0x00033454) bg_dt_sta_title_pane_ParamLimits

0x3e53,	// (0x00033454) bg_dt_sta_title_pane

0xa30e,	// (0x0003990f) dt_sta_title_pane_g1

0xa316,	// (0x00039917) dt_sta_title_pane_t1_ParamLimits

0xa316,	// (0x00039917) dt_sta_title_pane_t1

0x2d3f,	// (0x00032340) bg_dt_sta_control_pane

0xf222,	// (0x0003e823) dt_sta_controll_pane_g1

0xa334,	// (0x00039935) bg_dt_sta_title_pane_g1

0xa33d,	// (0x0003993e) bg_dt_sta_title_pane_g2

0xa346,	// (0x00039947) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x0003f48b) bg_dt_sta_title_pane_g

0x7954,	// (0x00036f55) bg_dt_sta_indi_pane_g1

0xa34f,	// (0x00039950) dt_sta_signal_pane_g1

0xa357,	// (0x00039958) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x0003f492) dt_sta_signal_pane_g

0xa35f,	// (0x00039960) dt_sta_battery_pane_g1

0xa368,	// (0x00039969) dt_sta_battery_pane_t1

0x7954,	// (0x00036f55) bg_dt_sta_control_pane_g1

0x45e4,	// (0x00033be5) fep_china_uni_eep_pane

0x45ec,	// (0x00033bed) fep_china_uni_entry_pane_ParamLimits

0x45fc,	// (0x00033bfd) popup_fep_china_uni_window_g1_ParamLimits

0x460c,	// (0x00033c0d) popup_fep_china_uni_window_g2_ParamLimits

0x460c,	// (0x00033c0d) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0003ed1e) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0003ed1e) popup_fep_china_uni_window_g

0xa377,	// (0x00039978) fep_china_uni_eep_pane_g1

0xa37f,	// (0x00039980) fep_china_uni_eep_pane_t1

0x9dfb,	// (0x000393fc) aid_touch_area_size_smil_player

0x4fd5,	// (0x000345d6) lc0_clock_pane

0x51bc,	// (0x000347bd) status_pane_g5_ParamLimits

0x51bc,	// (0x000347bd) status_pane_g5

0xc07f,	// (0x0003b680) popup_keymap_window

0x517a,	// (0x0003477b) status_icon_pane

0x9fe9,	// (0x000395ea) cell_ai5_widget_pane_g3_ParamLimits

0xa000,	// (0x00039601) cell_ai5_widget_pane_g4_ParamLimits

0xa00c,	// (0x0003960d) cell_ai5_widget_pane_g5_ParamLimits

0xa030,	// (0x00039631) cell_ai5_widget_pane_g8_ParamLimits

0xa030,	// (0x00039631) cell_ai5_widget_pane_g8

0xa044,	// (0x00039645) cell_ai5_widget_pane_g9_ParamLimits

0xa044,	// (0x00039645) cell_ai5_widget_pane_g9

0xa058,	// (0x00039659) cell_ai5_widget_pane_g10_ParamLimits

0xa058,	// (0x00039659) cell_ai5_widget_pane_g10

0xa38e,	// (0x0003998f) status_icon_pane_g1

0x2d3f,	// (0x00032340) bg_popup_sub_pane_cp13

0xa396,	// (0x00039997) popup_keymap_window_t1

0xd53f,	// (0x0003cb40) control_pane_g6_ParamLimits

0xd53f,	// (0x0003cb40) control_pane_g6

0xd54c,	// (0x0003cb4d) control_pane_g7_ParamLimits

0xd54c,	// (0x0003cb4d) control_pane_g7

0xd559,	// (0x0003cb5a) control_pane_g8_ParamLimits

0xd559,	// (0x0003cb5a) control_pane_g8

0xf1e5,	// (0x0003e7e6) dt_sta_controll_pane_ParamLimits

0xf1f2,	// (0x0003e7f3) dt_sta_indi_pane_ParamLimits

0xf1ff,	// (0x0003e800) dt_sta_title_pane_ParamLimits

0x3d8b,	// (0x0003338c) aid_size_touch_scroll_bar_cale

0x0178,	// (0x0002f779) popup_discreet_window_ParamLimits

0x0178,	// (0x0002f779) popup_discreet_window

0xb66a,	// (0x0003ac6b) popup_sk_window

0x59a6,	// (0x00034fa7) bg_popup_sub_pane_cp28_ParamLimits

0x59a6,	// (0x00034fa7) bg_popup_sub_pane_cp28

0xa3a4,	// (0x000399a5) popup_discreet_window_g1_ParamLimits

0xa3a4,	// (0x000399a5) popup_discreet_window_g1

0xa3c4,	// (0x000399c5) popup_discreet_window_t1_ParamLimits

0xa3c4,	// (0x000399c5) popup_discreet_window_t1

0xa3e2,	// (0x000399e3) popup_discreet_window_t2_ParamLimits

0xa3e2,	// (0x000399e3) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x0003f497) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x0003f497) popup_discreet_window_t

0x295f,	// (0x00031f60) popup_sk_window_g1

0x2969,	// (0x00031f6a) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x0003f49e) popup_sk_window_g

0x2973,	// (0x00031f74) popup_sk_window_t1

0x2981,	// (0x00031f82) popup_sk_window_t1_copy1

0x9fd9,	// (0x000395da) cell_ai5_widget_pane_g2_ParamLimits

0xa132,	// (0x00039733) cell_ai5_widget_pane_t9_ParamLimits

0xa132,	// (0x00039733) cell_ai5_widget_pane_t9

0x2d3f,	// (0x00032340) main_fep_fshwr2_pane

0xcd09,	// (0x0003c30a) aid_fshwr2_btn_pane

0xcd1a,	// (0x0003c31b) aid_fshwr2_syb_pane

0xcd2b,	// (0x0003c32c) aid_fshwr2_txt_pane

0xcd37,	// (0x0003c338) fshwr2_func_candi_pane

0xcd56,	// (0x0003c357) fshwr2_hwr_syb_pane

0xcd71,	// (0x0003c372) fshwr2_icf_pane

0x009f,	// (0x0002f6a0) fshwr2_icf_bg_pane

0x2a01,	// (0x00032002) fshwr2_icf_pane_t1_ParamLimits

0x2a01,	// (0x00032002) fshwr2_icf_pane_t1

0x44d2,	// (0x00033ad3) fshwr2_func_candi_pane_g1

0xf22b,	// (0x0003e82c) fshwr2_func_candi_row_pane_ParamLimits

0xf22b,	// (0x0003e82c) fshwr2_func_candi_row_pane

0xcd9d,	// (0x0003c39e) cell_fshwr2_syb_pane_ParamLimits

0xcd9d,	// (0x0003c39e) cell_fshwr2_syb_pane

0x1f46,	// (0x00031547) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1f46,	// (0x00031547) fshwr2_hwr_syb_pane_g1

0x009f,	// (0x0002f6a0) bg_popup_call_pane_cp01

0xcdb3,	// (0x0003c3b4) fshwr2_func_candi_cell_pane_ParamLimits

0xcdb3,	// (0x0003c3b4) fshwr2_func_candi_cell_pane

0xf243,	// (0x0003e844) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf243,	// (0x0003e844) fshwr2_func_candi_cell_bg_pane

0xcde8,	// (0x0003c3e9) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcde8,	// (0x0003c3e9) fshwr2_func_candi_cell_pane_g1

0xce17,	// (0x0003c418) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xce17,	// (0x0003c418) fshwr2_func_candi_cell_pane_t1

0x009f,	// (0x0002f6a0) bg_button_pane_cp08

0xa450,	// (0x00039a51) cell_fshwr2_syb_bg_pane

0xce2a,	// (0x0003c42b) cell_fshwr2_syb_bg_pane_g1

0xce32,	// (0x0003c433) cell_fshwr2_syb_bg_pane_t1

0x3e53,	// (0x00033454) main_tmo_pane

0xdb21,	// (0x0003d122) uni_indicator_pane_g1_ParamLimits

0xdb37,	// (0x0003d138) uni_indicator_pane_g2_ParamLimits

0xdb4d,	// (0x0003d14e) uni_indicator_pane_g3_ParamLimits

0x6501,	// (0x00035b02) uni_indicator_pane_g4_ParamLimits

0x6501,	// (0x00035b02) uni_indicator_pane_g4

0x6515,	// (0x00035b16) uni_indicator_pane_g5_ParamLimits

0x6515,	// (0x00035b16) uni_indicator_pane_g5

0x6515,	// (0x00035b16) uni_indicator_pane_g6_ParamLimits

0x6515,	// (0x00035b16) uni_indicator_pane_g6

0xf91c,	// (0x0003ef1d) uni_indicator_pane_g_ParamLimits

0xe5ed,	// (0x0003dbee) popup_tmo_note_window_ParamLimits

0xe5ed,	// (0x0003dbee) popup_tmo_note_window

0x21df,	// (0x000317e0) fshwr2_bg_pane

0xce08,	// (0x0003c409) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xce08,	// (0x0003c409) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x0003f4a3) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x0003f4a3) fshwr2_func_candi_cell_pane_g

0x1f2e,	// (0x0003152f) bg_popup_window_pane_cp01

0x2ab6,	// (0x000320b7) bg_popup_window_pane_g1_cp01

0xa458,	// (0x00039a59) bg_popup_window_pane_cp22_ParamLimits

0xa458,	// (0x00039a59) bg_popup_window_pane_cp22

0xa466,	// (0x00039a67) listscroll_tmo_link_pane_ParamLimits

0xa466,	// (0x00039a67) listscroll_tmo_link_pane

0xa4a6,	// (0x00039aa7) popup_tmo_note_window_g1_ParamLimits

0xa4a6,	// (0x00039aa7) popup_tmo_note_window_g1

0xa4b3,	// (0x00039ab4) tmo_note_info_pane_ParamLimits

0xa4b3,	// (0x00039ab4) tmo_note_info_pane

0xf24f,	// (0x0003e850) list_tmo_note_info_pane_g1_ParamLimits

0xf24f,	// (0x0003e850) list_tmo_note_info_pane_g1

0xa4e4,	// (0x00039ae5) list_tmo_note_info_pane_g2_ParamLimits

0xa4e4,	// (0x00039ae5) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x0003f4a8) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x0003f4a8) list_tmo_note_info_pane_g

0xa500,	// (0x00039b01) list_tmo_note_info_text_pane_ParamLimits

0xa500,	// (0x00039b01) list_tmo_note_info_text_pane

0xa581,	// (0x00039b82) list_tmo_link_pane

0xa58e,	// (0x00039b8f) scroll_pane_cp20

0xa59b,	// (0x00039b9c) list_single_tmo_link_pane_ParamLimits

0xa59b,	// (0x00039b9c) list_single_tmo_link_pane

0xa5ab,	// (0x00039bac) list_single_tmo_link_pane_t1

0xa5b9,	// (0x00039bba) list_tmo_note_info_text_pane_t1_ParamLimits

0xa5b9,	// (0x00039bba) list_tmo_note_info_text_pane_t1

0xd1e7,	// (0x0003c7e8) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd1e7,	// (0x0003c7e8) aid_size_touch_scroll_bar_cp01

0xbbe7,	// (0x0003b1e8) aid_size_touch_slider_marker

0xb65a,	// (0x0003ac5b) popup_settings_window_ParamLimits

0xb65a,	// (0x0003ac5b) popup_settings_window

0x1145,	// (0x00030746) popup_candi_list_indi_window

0x4e85,	// (0x00034486) aid_touch_navi_pane_ParamLimits

0x213a,	// (0x0003173b) rs_clock_indi_pane

0x2143,	// (0x00031744) sctrl_sk_bottom_pane_ParamLimits

0x2154,	// (0x00031755) sctrl_sk_top_pane_ParamLimits

0x2257,	// (0x00031858) popup_fep_tooltip_window

0x9f4f,	// (0x00039550) aid_size_cell_widget_grid_ParamLimits

0x9fc4,	// (0x000395c5) cell_ai5_widget_pane_g1_ParamLimits

0x9fc4,	// (0x000395c5) cell_ai5_widget_pane_g1

0xa018,	// (0x00039619) cell_ai5_widget_pane_g6_ParamLimits

0xa024,	// (0x00039625) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe25,	// (0x0003f426) cell_ai5_widget_pane_g_ParamLimits

0xfe25,	// (0x0003f426) cell_ai5_widget_pane_g

0xa156,	// (0x00039757) cell_ai5_widget_pane_t10_ParamLimits

0xa156,	// (0x00039757) cell_ai5_widget_pane_t10

0xa174,	// (0x00039775) grid_ai5_widget_pane_ParamLimits

0xa215,	// (0x00039816) cell_contacts_ai5_widget_pane_ParamLimits

0xa215,	// (0x00039816) cell_contacts_ai5_widget_pane

0xa3f7,	// (0x000399f8) popup_discreet_window_t3_ParamLimits

0xa3f7,	// (0x000399f8) popup_discreet_window_t3

0xcd89,	// (0x0003c38a) popup_fshwr2_char_preview_window_ParamLimits

0xcd89,	// (0x0003c38a) popup_fshwr2_char_preview_window

0xf266,	// (0x0003e867) tmo_note_info_pane_t1

0xf27b,	// (0x0003e87c) tmo_note_info_pane_t2

0xf292,	// (0x0003e893) tmo_note_info_pane_t3

0xa55d,	// (0x00039b5e) tmo_note_info_pane_t4

0xa56f,	// (0x00039b70) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x0003f4ad) tmo_note_info_pane_t

0xa581,	// (0x00039b82) list_tmo_link_pane_ParamLimits

0xa58e,	// (0x00039b8f) scroll_pane_cp20_ParamLimits

0x009f,	// (0x0002f6a0) bg_popup_fep_char_preview_window_cp01

0xa5d2,	// (0x00039bd3) popup_fshwr2_char_preview_window_t1

0xa5e0,	// (0x00039be1) popup_candi_list_indi_window_g1

0xa5e9,	// (0x00039bea) bg_cell_contacts_ai5_widget_pane

0xa5f5,	// (0x00039bf6) cell_contacts_ai5_widget_pane_g1

0x7ff2,	// (0x000375f3) cell_contacts_ai5_widget_pane_g2

0xa60a,	// (0x00039c0b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x0003f4b8) cell_contacts_ai5_widget_pane_g

0xa616,	// (0x00039c17) cell_contacts_ai5_widget_pane_t1

0x3e53,	// (0x00033454) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf30c,	// (0x0003e90d) settings_container_pane

0x4ae5,	// (0x000340e6) listscroll_set_pane_copy1

0x703d,	// (0x0003663e) scroll_pane_cp121_copy1

0xa699,	// (0x00039c9a) set_content_pane_copy1

0xf318,	// (0x0003e919) aid_height_set_list_copy1_ParamLimits

0xf318,	// (0x0003e919) aid_height_set_list_copy1

0x670d,	// (0x00035d0e) aid_size_parent_copy1_ParamLimits

0x670d,	// (0x00035d0e) aid_size_parent_copy1

0xf324,	// (0x0003e925) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf324,	// (0x0003e925) button_value_adjust_pane_cp6_copy1

0x4e23,	// (0x00034424) list_highlight_pane_cp2_copy1_ParamLimits

0x4e23,	// (0x00034424) list_highlight_pane_cp2_copy1

0xf338,	// (0x0003e939) list_set_pane_copy1_ParamLimits

0xf338,	// (0x0003e939) list_set_pane_copy1

0xf2a7,	// (0x0003e8a8) main_pane_set_t1_copy1_ParamLimits

0xf2a7,	// (0x0003e8a8) main_pane_set_t1_copy1

0xf2e1,	// (0x0003e8e2) main_pane_set_t2_copy1_ParamLimits

0xf2e1,	// (0x0003e8e2) main_pane_set_t2_copy1

0xf3e5,	// (0x0003e9e6) main_pane_set_t3_copy1

0xf3f3,	// (0x0003e9f4) main_pane_set_t4_copy1

0xf300,	// (0x0003e901) set_content_pane_g1_copy1_ParamLimits

0xf300,	// (0x0003e901) set_content_pane_g1_copy1

0xf401,	// (0x0003ea02) setting_code_pane_copy1

0xa792,	// (0x00039d93) setting_slider_graphic_pane_copy1

0xa792,	// (0x00039d93) setting_slider_pane_copy1

0xa792,	// (0x00039d93) setting_text_pane_copy1

0xa792,	// (0x00039d93) setting_volume_pane_copy1

0xf401,	// (0x0003ea02) settings_code_pane_cp2_copy1

0xf409,	// (0x0003ea0a) settings_code_pane_cp_copy1_ParamLimits

0xf409,	// (0x0003ea0a) settings_code_pane_cp_copy1

0xce41,	// (0x0003c442) volume_set_pane_copy1

0xf41d,	// (0x0003ea1e) volume_set_pane_g10_copy1

0xf425,	// (0x0003ea26) volume_set_pane_g1_copy1

0xf42d,	// (0x0003ea2e) volume_set_pane_g2_copy1

0xf435,	// (0x0003ea36) volume_set_pane_g3_copy1

0xf43d,	// (0x0003ea3e) volume_set_pane_g4_copy1

0xf445,	// (0x0003ea46) volume_set_pane_g5_copy1

0xf44d,	// (0x0003ea4e) volume_set_pane_g6_copy1

0xf455,	// (0x0003ea56) volume_set_pane_g7_copy1

0xf45d,	// (0x0003ea5e) volume_set_pane_g8_copy1

0xf465,	// (0x0003ea66) volume_set_pane_g9_copy1

0x2e33,	// (0x00032434) bg_set_opt_pane_cp_copy1_ParamLimits

0x2e33,	// (0x00032434) bg_set_opt_pane_cp_copy1

0x2ac7,	// (0x000320c8) setting_slider_pane_t1_copy1_ParamLimits

0x2ac7,	// (0x000320c8) setting_slider_pane_t1_copy1

0xce49,	// (0x0003c44a) setting_slider_pane_t2_copy1_ParamLimits

0xce49,	// (0x0003c44a) setting_slider_pane_t2_copy1

0xce63,	// (0x0003c464) setting_slider_pane_t3_copy1_ParamLimits

0xce63,	// (0x0003c464) setting_slider_pane_t3_copy1

0xce7b,	// (0x0003c47c) slider_set_pane_copy1_ParamLimits

0xce7b,	// (0x0003c47c) slider_set_pane_copy1

0x3eae,	// (0x000334af) set_opt_bg_pane_g1_copy2

0x3eb6,	// (0x000334b7) set_opt_bg_pane_g2_copy2

0xa7fe,	// (0x00039dff) set_opt_bg_pane_g3_copy2

0x3ec6,	// (0x000334c7) set_opt_bg_pane_g4_copy2

0x3ece,	// (0x000334cf) set_opt_bg_pane_g5_copy2

0x3ed6,	// (0x000334d7) set_opt_bg_pane_g6_copy2

0xf46d,	// (0x0003ea6e) set_opt_bg_pane_g7_copy2

0xa810,	// (0x00039e11) set_opt_bg_pane_g8_copy2

0xa81a,	// (0x00039e1b) set_opt_bg_pane_g9_copy2

0x2b2d,	// (0x0003212e) aid_size_touch_slider_mark_copy1_ParamLimits

0x2b2d,	// (0x0003212e) aid_size_touch_slider_mark_copy1

0xa824,	// (0x00039e25) slider_set_pane_g1_copy1

0x2b41,	// (0x00032142) slider_set_pane_g2_copy1

0x1b41,	// (0x00031142) slider_set_pane_g3_copy1_ParamLimits

0x1b41,	// (0x00031142) slider_set_pane_g3_copy1

0x1b55,	// (0x00031156) slider_set_pane_g4_copy1_ParamLimits

0x1b55,	// (0x00031156) slider_set_pane_g4_copy1

0x1b6d,	// (0x0003116e) slider_set_pane_g5_copy1_ParamLimits

0x1b6d,	// (0x0003116e) slider_set_pane_g5_copy1

0x1b41,	// (0x00031142) slider_set_pane_g6_copy1_ParamLimits

0x1b41,	// (0x00031142) slider_set_pane_g6_copy1

0xce91,	// (0x0003c492) slider_set_pane_g7_copy1_ParamLimits

0xce91,	// (0x0003c492) slider_set_pane_g7_copy1

0x2d53,	// (0x00032354) bg_set_opt_pane_cp2_copy1

0xa82d,	// (0x00039e2e) setting_slider_graphic_pane_g1_copy1

0xf475,	// (0x0003ea76) setting_slider_graphic_pane_t1_copy1

0xf485,	// (0x0003ea86) setting_slider_graphic_pane_t2_copy1

0xf495,	// (0x0003ea96) slider_set_pane_cp_copy1

0xa866,	// (0x00039e67) input_focus_pane_cp1_copy1

0xa86f,	// (0x00039e70) list_set_text_pane_copy1

0xa877,	// (0x00039e78) setting_text_pane_g1_copy1

0x0389,	// (0x0002f98a) set_text_pane_t1_copy1

0xa866,	// (0x00039e67) input_focus_pane_cp2_copy1

0xa877,	// (0x00039e78) setting_code_pane_g1_copy1

0xf49d,	// (0x0003ea9e) setting_code_pane_t1_copy1

0x6e67,	// (0x00036468) list_set_graphic_pane_copy1

0x2d53,	// (0x00032354) bg_set_opt_pane_cp4_copy1

0xd3ba,	// (0x0003c9bb) list_set_graphic_pane_g1_copy1_ParamLimits

0xd3ba,	// (0x0003c9bb) list_set_graphic_pane_g1_copy1

0xf4ab,	// (0x0003eaac) list_set_graphic_pane_g2_copy1

0xd3d2,	// (0x0003c9d3) list_set_graphic_pane_t1_copy1_ParamLimits

0xd3d2,	// (0x0003c9d3) list_set_graphic_pane_t1_copy1

0x7954,	// (0x00036f55) rs_clock_indi_pane_g1

0xa8a8,	// (0x00039ea9) rs_clock_indi_pane_t1

0xa8b6,	// (0x00039eb7) rs_indi_pane

0xa8be,	// (0x00039ebf) rs_indi_pane_g1

0xa8c7,	// (0x00039ec8) rs_indi_pane_g2

0xa8d0,	// (0x00039ed1) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x0003f4bf) rs_indi_pane_g

0x4ae5,	// (0x000340e6) bg_popup_preview_window_pane_cp03

0xa8d9,	// (0x00039eda) popup_fep_tooltip_window_t1

0x85d0,	// (0x00037bd1) popup_note2_window_g2_ParamLimits

0x85d0,	// (0x00037bd1) popup_note2_window_g2

0x0001,

0xfc57,	// (0x0003f258) popup_note2_window_g_ParamLimits

0xfc57,	// (0x0003f258) popup_note2_window_g

0x8acb,	// (0x000380cc) bg_popup_sub_pane_cp11_ParamLimits

0x8ad8,	// (0x000380d9) cell_ai3_links_pane_g1_ParamLimits

0x8aef,	// (0x000380f0) cell_ai3_links_pane_t1

0x0389,	// (0x0002f98a) set_text_pane_t1_copy1_ParamLimits

0x49f6,	// (0x00033ff7) cell_graphic_popup_pane_cp2_ParamLimits

0x49f6,	// (0x00033ff7) cell_graphic_popup_pane_cp2

0xa8e7,	// (0x00039ee8) cell_graphic_popup_pane_g1_cp2

0x3b9e,	// (0x0003319f) cell_graphic_popup_pane_g2_cp2

0xa8ef,	// (0x00039ef0) cell_graphic_popup_pane_g3_cp2

0xa8f7,	// (0x00039ef8) cell_graphic_popup_pane_t2_cp2

0x3baf,	// (0x000331b0) grid_highlight_pane_cp3_cp2

0x41f3,	// (0x000337f4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3e53,	// (0x00033454) main_tmo_pane_ParamLimits

0xe5e1,	// (0x0003dbe2) popup_tmo_big_image_note_window

0x9fb3,	// (0x000395b4) cell_ai5_widget_list_pane

0x9fbb,	// (0x000395bc) cell_ai5_widget_lrg_icon_pane

0xf266,	// (0x0003e867) tmo_note_info_pane_t1_ParamLimits

0xf27b,	// (0x0003e87c) tmo_note_info_pane_t2_ParamLimits

0xf292,	// (0x0003e893) tmo_note_info_pane_t3_ParamLimits

0xa55d,	// (0x00039b5e) tmo_note_info_pane_t4_ParamLimits

0xa56f,	// (0x00039b70) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x0003f4ad) tmo_note_info_pane_t_ParamLimits

0xf30c,	// (0x0003e90d) settings_container_pane_ParamLimits

0xa85e,	// (0x00039e5f) indicator_popup_pane_cp5

0xa85e,	// (0x00039e5f) indicator_popup_pane_cp6

0x6e67,	// (0x00036468) list_set_graphic_pane_copy1_ParamLimits

0x2d3f,	// (0x00032340) bg_popup_window_pane_cp23

0xa905,	// (0x00039f06) popup_tmo_big_image_note_window_g1

0xa90f,	// (0x00039f10) popup_tmo_big_image_note_window_t1

0xa91f,	// (0x00039f20) popup_tmo_big_image_note_window_t2

0xa92f,	// (0x00039f30) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x0003f4c6) popup_tmo_big_image_note_window_t

0x7954,	// (0x00036f55) cell_ai5_widget_lrg_icon_pane_g1

0xa93f,	// (0x00039f40) cell_ai5_widget_lrg_icon_pane_t1

0xa94d,	// (0x00039f4e) cell_ai5_widget_list_row_pane_ParamLimits

0xa94d,	// (0x00039f4e) cell_ai5_widget_list_row_pane

0xa964,	// (0x00039f65) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa964,	// (0x00039f65) cell_ai5_widget_list_row_pane_g1

0xa971,	// (0x00039f72) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa971,	// (0x00039f72) cell_ai5_widget_list_row_pane_t1

0xa9a2,	// (0x00039fa3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa9a2,	// (0x00039fa3) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x0003f4cd) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x0003f4cd) cell_ai5_widget_list_row_pane_t

0x009f,	// (0x0002f6a0) main_fep_vtchi_ss_pane

0x2b7b,	// (0x0003217c) popup_fep_char_pre_window

0x2b83,	// (0x00032184) popup_fep_ituss_window

0x2ba4,	// (0x000321a5) popup_fep_vkbss_window

0xa9ca,	// (0x00039fcb) grid_vkbss_keypad_pane_ParamLimits

0xa9ca,	// (0x00039fcb) grid_vkbss_keypad_pane

0xa9da,	// (0x00039fdb) ituss_keypad_pane

0x2bcf,	// (0x000321d0) aid_vkbss_key_offset_ParamLimits

0x2bcf,	// (0x000321d0) aid_vkbss_key_offset

0x2bdb,	// (0x000321dc) cell_vkbss_key_pane_ParamLimits

0x2bdb,	// (0x000321dc) cell_vkbss_key_pane

0xa9e9,	// (0x00039fea) bg_cell_vkbss_key_g1_ParamLimits

0xa9e9,	// (0x00039fea) bg_cell_vkbss_key_g1

0xa9f5,	// (0x00039ff6) cell_vkbss_key_3p_pane_ParamLimits

0xa9f5,	// (0x00039ff6) cell_vkbss_key_3p_pane

0xaa0f,	// (0x0003a010) cell_vkbss_key_g1_ParamLimits

0xaa0f,	// (0x0003a010) cell_vkbss_key_g1

0xaa29,	// (0x0003a02a) cell_vkbss_key_t1_ParamLimits

0xaa29,	// (0x0003a02a) cell_vkbss_key_t1

0x2bf1,	// (0x000321f2) cell_ituss_key_pane_ParamLimits

0x2bf1,	// (0x000321f2) cell_ituss_key_pane

0xaa54,	// (0x0003a055) bg_cell_ituss_key_g1_ParamLimits

0xaa54,	// (0x0003a055) bg_cell_ituss_key_g1

0xaa60,	// (0x0003a061) cell_ituss_key_pane_g1_ParamLimits

0xaa60,	// (0x0003a061) cell_ituss_key_pane_g1

0x2c02,	// (0x00032203) cell_ituss_key_pane_g2_ParamLimits

0x2c02,	// (0x00032203) cell_ituss_key_pane_g2

0x0002,

0xfed3,	// (0x0003f4d4) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0003f4d4) cell_ituss_key_pane_g

0x2c2e,	// (0x0003222f) cell_ituss_key_t1_ParamLimits

0x2c2e,	// (0x0003222f) cell_ituss_key_t1

0x2c68,	// (0x00032269) cell_ituss_key_t2_ParamLimits

0x2c68,	// (0x00032269) cell_ituss_key_t2

0x2c99,	// (0x0003229a) cell_ituss_key_t3_ParamLimits

0x2c99,	// (0x0003229a) cell_ituss_key_t3

0x2c68,	// (0x00032269) cell_ituss_key_t4_ParamLimits

0x2c68,	// (0x00032269) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0003f4db) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0003f4db) cell_ituss_key_t

0xaa8c,	// (0x0003a08d) cell_vkbss_key_3p_pane_g1

0xaa94,	// (0x0003a095) cell_vkbss_key_3p_pane_g2

0xaa9c,	// (0x0003a09d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0003f4e6) cell_vkbss_key_3p_pane_g

0x009f,	// (0x0002f6a0) bg_popup_fep_char_preview_window_cp02

0x2cdc,	// (0x000322dd) popup_fep_char_pre_window_t1

0xf1b5,	// (0x0003e7b6) main_ai5_sk_pane

0xa5e9,	// (0x00039bea) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa5f5,	// (0x00039bf6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7ff2,	// (0x000375f3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa60a,	// (0x00039c0b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x0003f4b8) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa616,	// (0x00039c17) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3e53,	// (0x00033454) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf4b3,	// (0x0003eab4) main_ai5_sk_pane_g1

0x57df,	// (0x00034de0) popup_query_code_window_g1

0x2b99,	// (0x0003219a) popup_fep_vkb_icf_pane

0x2bad,	// (0x000321ae) popup_fep_vtchi_icf_pane

0xaaad,	// (0x0003a0ae) bg_icf_pane

0xaab9,	// (0x0003a0ba) list_vkb_icf_pane

0xaac5,	// (0x0003a0c6) bg_icf_pane_cp01

0xaad1,	// (0x0003a0d2) vtchi_icf_list_pane

0xaae2,	// (0x0003a0e3) list_vkb_icf_pane_t1_ParamLimits

0xaae2,	// (0x0003a0e3) list_vkb_icf_pane_t1

0xaaf8,	// (0x0003a0f9) vtchi_icf_list_pane_t1_ParamLimits

0xaaf8,	// (0x0003a0f9) vtchi_icf_list_pane_t1

0x2b83,	// (0x00032184) popup_fep_ituss_window_ParamLimits

0x2bad,	// (0x000321ae) popup_fep_vtchi_icf_pane_ParamLimits

0xa9da,	// (0x00039fdb) ituss_keypad_pane_ParamLimits

0x2bc3,	// (0x000321c4) ituss_sks_pane

0xaaad,	// (0x0003a0ae) bg_icf_pane_ParamLimits

0x2b5f,	// (0x00032160) icf_edit_indi_pane_ParamLimits

0x2b5f,	// (0x00032160) icf_edit_indi_pane

0xaab9,	// (0x0003a0ba) list_vkb_icf_pane_ParamLimits

0xaac5,	// (0x0003a0c6) bg_icf_pane_cp01_ParamLimits

0x2b6e,	// (0x0003216f) icf_edit_indi_pane_cp01_ParamLimits

0x2b6e,	// (0x0003216f) icf_edit_indi_pane_cp01

0xaad9,	// (0x0003a0da) vtchi_query_pane

0x1f46,	// (0x00031547) icf_edit_indi_pane_g1_ParamLimits

0x1f46,	// (0x00031547) icf_edit_indi_pane_g1

0x2cfe,	// (0x000322ff) icf_edit_indi_pane_g2_ParamLimits

0x2cfe,	// (0x000322ff) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0003f4fe) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0003f4fe) icf_edit_indi_pane_g

0x2d0d,	// (0x0003230e) icf_edit_indi_pane_t1

0xab12,	// (0x0003a113) bg_input_focus_pane_cp042

0x3d82,	// (0x00033383) vtchi_button_pane

0xab1b,	// (0x0003a11c) vtchi_query_pane_t1

0xab29,	// (0x0003a12a) vtchi_query_pane_t2

0xab37,	// (0x0003a138) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0003f4ed) vtchi_query_pane_t

0x009f,	// (0x0002f6a0) bg_button_pane_cp13

0xab45,	// (0x0003a146) vtchi_button_pane_g1

0x2ceb,	// (0x000322ec) ituss_sks_pane_g1

0x2cf6,	// (0x000322f7) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0003f4f4) ituss_sks_pane_g

0xab4d,	// (0x0003a14e) ituss_sks_pane_t1

0xab5b,	// (0x0003a15c) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0003f4f9) ituss_sks_pane_t

0x73b7,	// (0x000369b8) indicator_nsta_pane_cp_g1

0x73c0,	// (0x000369c1) indicator_nsta_pane_cp_g2

0x73c8,	// (0x000369c9) indicator_nsta_pane_cp_g3

0x73d0,	// (0x000369d1) indicator_nsta_pane_cp_g4

0x73d8,	// (0x000369d9) indicator_nsta_pane_cp_g5

0x73d8,	// (0x000369d9) indicator_nsta_pane_cp_g6

0x0005,

0xfa95,	// (0x0003f096) indicator_nsta_pane_cp_g

0xefc7,	// (0x0003e5c8) cell_graphic2_pane_t2_ParamLimits

0xefc7,	// (0x0003e5c8) cell_graphic2_pane_t2

0x0001,

0xfdae,	// (0x0003f3af) cell_graphic2_pane_t_ParamLimits

0xfdae,	// (0x0003f3af) cell_graphic2_pane_t

0xeffd,	// (0x0003e5fe) cell_graphic2_control_pane_t1

0xd38e,	// (0x0003c98f) signal_pane_g3_ParamLimits

0xd38e,	// (0x0003c98f) signal_pane_g3

0xd3a2,	// (0x0003c9a3) signal_pane_g4_ParamLimits

0xd3a2,	// (0x0003c9a3) signal_pane_g4

0xa9b4,	// (0x00039fb5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa9b4,	// (0x00039fb5) cell_ai5_widget_list_row_pane_t3

0xaa7a,	// (0x0003a07b) cell_ituss_key_pane_t1_ParamLimits

0xaa7a,	// (0x0003a07b) cell_ituss_key_pane_t1

0x5432,	// (0x00034a33) form_field_data_wide_pane_vc_t2_ParamLimits

0x5432,	// (0x00034a33) form_field_data_wide_pane_vc_t2

0x5446,	// (0x00034a47) form_field_data_wide_pane_vc_t3_ParamLimits

0x5446,	// (0x00034a47) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0003ee05) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0003ee05) form_field_data_wide_pane_vc_t

0x707f,	// (0x00036680) form_field_slider_wide_pane_vc_t3_ParamLimits

0x707f,	// (0x00036680) form_field_slider_wide_pane_vc_t3

0x715d,	// (0x0003675e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x715d,	// (0x0003675e) form_field_popup_wide_pane_vc_t2

0x7174,	// (0x00036775) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7174,	// (0x00036775) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa84,	// (0x0003f085) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0003f085) form_field_popup_wide_pane_vc_t

0xcd09,	// (0x0003c30a) aid_fshwr2_btn_pane_ParamLimits

0xcd1a,	// (0x0003c31b) aid_fshwr2_syb_pane_ParamLimits

0xcd2b,	// (0x0003c32c) aid_fshwr2_txt_pane_ParamLimits

0x21df,	// (0x000317e0) fshwr2_bg_pane_ParamLimits

0xcd37,	// (0x0003c338) fshwr2_func_candi_pane_ParamLimits

0xcd56,	// (0x0003c357) fshwr2_hwr_syb_pane_ParamLimits

0xcd71,	// (0x0003c372) fshwr2_icf_pane_ParamLimits

0x333b,	// (0x0003293c) list_double_graphic_pane_vc_g4_ParamLimits

0x333b,	// (0x0003293c) list_double_graphic_pane_vc_g4

0x2c22,	// (0x00032223) cell_ituss_key_pane_g3_ParamLimits

0x2c22,	// (0x00032223) cell_ituss_key_pane_g3

0x2cca,	// (0x000322cb) cell_ituss_key_t5_ParamLimits

0x2cca,	// (0x000322cb) cell_ituss_key_t5
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

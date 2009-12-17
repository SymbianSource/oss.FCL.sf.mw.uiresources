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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00038841 };

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
0x8762,	// (0x00040fa3) Screen

0x8776,	// (0x00040fb7) application_window_ParamLimits

0x8776,	// (0x00040fb7) application_window

0x8790,	// (0x00040fd1) screen_g1

0x87c2,	// (0x00041003) area_bottom_pane_ParamLimits

0x87c2,	// (0x00041003) area_bottom_pane

0x5b68,	// (0x0003e3a9) area_top_pane_ParamLimits

0x5b68,	// (0x0003e3a9) area_top_pane

0x5c06,	// (0x0003e447) main_pane_ParamLimits

0x5c06,	// (0x0003e447) main_pane

0x8880,	// (0x000410c1) misc_graphics

0x9ab8,	// (0x000422f9) battery_pane_ParamLimits

0x9ab8,	// (0x000422f9) battery_pane

0xd99b,	// (0x000461dc) bg_status_flat_pane_g8

0xd9a3,	// (0x000461e4) bg_status_flat_pane_g9

0xd0f5,	// (0x00045936) context_pane_ParamLimits

0xd0f5,	// (0x00045936) context_pane

0x9c23,	// (0x00042464) navi_pane_ParamLimits

0x9c23,	// (0x00042464) navi_pane

0x9c9a,	// (0x000424db) signal_pane_ParamLimits

0x9c9a,	// (0x000424db) signal_pane

0x0008,

0xf8b2,	// (0x000480f3) bg_status_flat_pane_g

0x9d2a,	// (0x0004256b) status_pane_g1_ParamLimits

0x9d2a,	// (0x0004256b) status_pane_g1

0x9d40,	// (0x00042581) status_pane_g2_ParamLimits

0x9d40,	// (0x00042581) status_pane_g2

0xd15a,	// (0x0004599b) status_pane_g3_ParamLimits

0xd15a,	// (0x0004599b) status_pane_g3

0x0004,

0xf7e5,	// (0x00048026) status_pane_g_ParamLimits

0xf7e5,	// (0x00048026) status_pane_g

0x9d4c,	// (0x0004258d) title_pane_ParamLimits

0x9d4c,	// (0x0004258d) title_pane

0x9dad,	// (0x000425ee) uni_indicator_pane_ParamLimits

0x9dad,	// (0x000425ee) uni_indicator_pane

0xcf1c,	// (0x0004575d) bg_list_pane_ParamLimits

0xcf1c,	// (0x0004575d) bg_list_pane

0x49b0,	// (0x0003d1f1) find_pane

0x93a6,	// (0x00041be7) listscroll_app_pane_ParamLimits

0x93a6,	// (0x00041be7) listscroll_app_pane

0xcf3c,	// (0x0004577d) listscroll_form_pane

0x49b8,	// (0x0003d1f9) listscroll_gen_pane_ParamLimits

0x49b8,	// (0x0003d1f9) listscroll_gen_pane

0xcf3c,	// (0x0004577d) listscroll_set_pane

0xcf56,	// (0x00045797) main_idle_act_pane

0xcd0a,	// (0x0004554b) main_idle_trad_pane

0xcd0a,	// (0x0004554b) main_list_empty_pane

0xc41f,	// (0x00044c60) main_midp_pane

0xcf68,	// (0x000457a9) main_pane_g1_ParamLimits

0xcf68,	// (0x000457a9) main_pane_g1

0x93b2,	// (0x00041bf3) popup_ai_message_window_ParamLimits

0x93b2,	// (0x00041bf3) popup_ai_message_window

0x9443,	// (0x00041c84) popup_fep_china_uni_window_ParamLimits

0x9443,	// (0x00041c84) popup_fep_china_uni_window

0xcf9a,	// (0x000457db) popup_fep_japan_candidate_window_ParamLimits

0xcf9a,	// (0x000457db) popup_fep_japan_candidate_window

0xcfb8,	// (0x000457f9) popup_fep_japan_predictive_window_ParamLimits

0xcfb8,	// (0x000457f9) popup_fep_japan_predictive_window

0x949d,	// (0x00041cde) popup_find_window

0x94ba,	// (0x00041cfb) popup_grid_graphic_window_ParamLimits

0x94ba,	// (0x00041cfb) popup_grid_graphic_window

0xcfe8,	// (0x00045829) popup_large_graphic_colour_window

0x954c,	// (0x00041d8d) popup_menu_window_ParamLimits

0x954c,	// (0x00041d8d) popup_menu_window

0x9718,	// (0x00041f59) popup_note_image_window

0x96de,	// (0x00041f1f) popup_note_wait_window_ParamLimits

0x96de,	// (0x00041f1f) popup_note_wait_window

0x9730,	// (0x00041f71) popup_note_window_ParamLimits

0x9730,	// (0x00041f71) popup_note_window

0x97d6,	// (0x00042017) popup_query_code_window_ParamLimits

0x97d6,	// (0x00042017) popup_query_code_window

0xd00e,	// (0x0004584f) popup_query_data_code_window_ParamLimits

0xd00e,	// (0x0004584f) popup_query_data_code_window

0x9810,	// (0x00042051) popup_query_data_window_ParamLimits

0x9810,	// (0x00042051) popup_query_data_window

0x9886,	// (0x000420c7) popup_query_sat_info_window_ParamLimits

0x9886,	// (0x000420c7) popup_query_sat_info_window

0x991d,	// (0x0004215e) popup_snote_single_graphic_window_ParamLimits

0x991d,	// (0x0004215e) popup_snote_single_graphic_window

0x991d,	// (0x0004215e) popup_snote_single_text_window_ParamLimits

0x991d,	// (0x0004215e) popup_snote_single_text_window

0xd025,	// (0x00045866) popup_sub_window_general

0xd06b,	// (0x000458ac) popup_window_general_ParamLimits

0xd06b,	// (0x000458ac) popup_window_general

0xd080,	// (0x000458c1) power_save_pane

0x923f,	// (0x00041a80) control_pane_g1_ParamLimits

0x923f,	// (0x00041a80) control_pane_g1

0x6376,	// (0x0003ebb7) control_pane_g2_ParamLimits

0x6376,	// (0x0003ebb7) control_pane_g2

0xcefe,	// (0x0004573f) control_pane_g3_ParamLimits

0xcefe,	// (0x0004573f) control_pane_g3

0x0007,

0xf7cd,	// (0x0004800e) control_pane_g_ParamLimits

0xf7cd,	// (0x0004800e) control_pane_g

0x929d,	// (0x00041ade) control_pane_t1_ParamLimits

0x929d,	// (0x00041ade) control_pane_t1

0x92fb,	// (0x00041b3c) control_pane_t2_ParamLimits

0x92fb,	// (0x00041b3c) control_pane_t2

0x0002,

0xf7de,	// (0x0004801f) control_pane_t_ParamLimits

0xf7de,	// (0x0004801f) control_pane_t

0xce1f,	// (0x00045660) navi_navi_volume_pane_cp1

0xce28,	// (0x00045669) status_small_icon_pane

0xce30,	// (0x00045671) status_small_pane_g1_ParamLimits

0xce30,	// (0x00045671) status_small_pane_g1

0xce64,	// (0x000456a5) status_small_pane_g2_ParamLimits

0xce64,	// (0x000456a5) status_small_pane_g2

0xce70,	// (0x000456b1) status_small_pane_g3_ParamLimits

0xce70,	// (0x000456b1) status_small_pane_g3

0xce7c,	// (0x000456bd) status_small_pane_g4_ParamLimits

0xce7c,	// (0x000456bd) status_small_pane_g4

0xce88,	// (0x000456c9) status_small_pane_g5_ParamLimits

0xce88,	// (0x000456c9) status_small_pane_g5

0xce97,	// (0x000456d8) status_small_pane_g6_ParamLimits

0xce97,	// (0x000456d8) status_small_pane_g6

0x0007,

0xf7bc,	// (0x00047ffd) status_small_pane_g_ParamLimits

0xf7bc,	// (0x00047ffd) status_small_pane_g

0xcec7,	// (0x00045708) status_small_pane_t1

0xceea,	// (0x0004572b) status_small_wait_pane_ParamLimits

0xceea,	// (0x0004572b) status_small_wait_pane

0x90e0,	// (0x00041921) aid_levels_signal_ParamLimits

0x90e0,	// (0x00041921) aid_levels_signal

0x90f8,	// (0x00041939) signal_pane_g1_ParamLimits

0x90f8,	// (0x00041939) signal_pane_g1

0x9113,	// (0x00041954) signal_pane_g2_ParamLimits

0x9113,	// (0x00041954) signal_pane_g2

0x0001,

0xf751,	// (0x00047f92) signal_pane_g_ParamLimits

0xf751,	// (0x00047f92) signal_pane_g

0xc84e,	// (0x0004508f) context_pane_g1

0x8945,	// (0x00041186) title_pane_g1

0x8986,	// (0x000411c7) title_pane_t1

0x8a12,	// (0x00041253) title_pane_t2

0x8a38,	// (0x00041279) title_pane_t3

0x0002,

0xf59b,	// (0x00047ddc) title_pane_t

0x9dd5,	// (0x00042616) aid_levels_battery_ParamLimits

0x9dd5,	// (0x00042616) aid_levels_battery

0x9df1,	// (0x00042632) battery_pane_g1_ParamLimits

0x9df1,	// (0x00042632) battery_pane_g1

0x9e0e,	// (0x0004264f) battery_pane_g2_ParamLimits

0x9e0e,	// (0x0004264f) battery_pane_g2

0x0001,

0xf7f0,	// (0x00048031) battery_pane_g_ParamLimits

0xf7f0,	// (0x00048031) battery_pane_g

0xa212,	// (0x00042a53) uni_indicator_pane_g1

0xa227,	// (0x00042a68) uni_indicator_pane_g2

0xa23c,	// (0x00042a7d) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0004819b) uni_indicator_pane_g

0xcb7a,	// (0x000453bb) navi_icon_pane_ParamLimits

0xcb7a,	// (0x000453bb) navi_icon_pane

0xcac1,	// (0x00045302) navi_midp_pane

0xcb96,	// (0x000453d7) navi_navi_pane

0xcba0,	// (0x000453e1) navi_text_pane_ParamLimits

0xcba0,	// (0x000453e1) navi_text_pane

0x8790,	// (0x00040fd1) status_small_wait_pane_g1

0xbf3c,	// (0x0004477d) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x00048196) status_small_wait_pane_g

0xa1b1,	// (0x000429f2) navi_navi_icon_text_pane

0xa1b9,	// (0x000429fa) navi_navi_pane_g1_ParamLimits

0xa1b9,	// (0x000429fa) navi_navi_pane_g1

0xa1cb,	// (0x00042a0c) navi_navi_pane_g2_ParamLimits

0xa1cb,	// (0x00042a0c) navi_navi_pane_g2

0x0001,

0xf923,	// (0x00048164) navi_navi_pane_g_ParamLimits

0xf923,	// (0x00048164) navi_navi_pane_g

0xdf1e,	// (0x0004675f) navi_navi_tabs_pane

0xa1dd,	// (0x00042a1e) navi_navi_text_pane

0xa1b1,	// (0x000429f2) navi_navi_volume_pane

0xa19f,	// (0x000429e0) navi_text_pane_t1

0xa193,	// (0x000429d4) navi_icon_pane_g1

0xde5f,	// (0x000466a0) navi_navi_text_pane_t1

0xa182,	// (0x000429c3) navi_navi_volume_pane_g1

0xa18a,	// (0x000429cb) volume_small_pane

0xa0de,	// (0x0004291f) navi_navi_icon_text_pane_g1

0xa0e6,	// (0x00042927) navi_navi_icon_text_pane_t1

0xcb96,	// (0x000453d7) navi_tabs_2_long_pane

0xcb96,	// (0x000453d7) navi_tabs_2_pane

0xcb96,	// (0x000453d7) navi_tabs_3_long_pane

0xcb96,	// (0x000453d7) navi_tabs_3_pane

0xcb96,	// (0x000453d7) navi_tabs_4_pane

0xa0be,	// (0x000428ff) tabs_2_active_pane_ParamLimits

0xa0be,	// (0x000428ff) tabs_2_active_pane

0xa0ce,	// (0x0004290f) tabs_2_passive_pane_ParamLimits

0xa0ce,	// (0x0004290f) tabs_2_passive_pane

0xa08c,	// (0x000428cd) tabs_3_active_pane_ParamLimits

0xa08c,	// (0x000428cd) tabs_3_active_pane

0xa09c,	// (0x000428dd) tabs_3_passive_pane_ParamLimits

0xa09c,	// (0x000428dd) tabs_3_passive_pane

0xa0ad,	// (0x000428ee) tabs_3_passive_pane_cp_ParamLimits

0xa0ad,	// (0x000428ee) tabs_3_passive_pane_cp

0xa048,	// (0x00042889) tabs_4_active_pane_ParamLimits

0xa048,	// (0x00042889) tabs_4_active_pane

0xa059,	// (0x0004289a) tabs_4_passive_pane_ParamLimits

0xa059,	// (0x0004289a) tabs_4_passive_pane

0xa06a,	// (0x000428ab) tabs_4_passive_pane_cp_ParamLimits

0xa06a,	// (0x000428ab) tabs_4_passive_pane_cp

0xa07b,	// (0x000428bc) tabs_4_passive_pane_cp2_ParamLimits

0xa07b,	// (0x000428bc) tabs_4_passive_pane_cp2

0xa028,	// (0x00042869) tabs_2_long_active_pane_ParamLimits

0xa028,	// (0x00042869) tabs_2_long_active_pane

0xa038,	// (0x00042879) tabs_2_long_passive_pane_ParamLimits

0xa038,	// (0x00042879) tabs_2_long_passive_pane

0x9ff3,	// (0x00042834) tabs_3_long_active_pane_ParamLimits

0x9ff3,	// (0x00042834) tabs_3_long_active_pane

0xa004,	// (0x00042845) tabs_3_long_passive_pane_ParamLimits

0xa004,	// (0x00042845) tabs_3_long_passive_pane

0xa017,	// (0x00042858) tabs_3_long_passive_pane_cp_ParamLimits

0xa017,	// (0x00042858) tabs_3_long_passive_pane_cp

0x65d9,	// (0x0003ee1a) volume_small_pane_g1

0x9fa2,	// (0x000427e3) volume_small_pane_g2

0x9fab,	// (0x000427ec) volume_small_pane_g3

0x9fb4,	// (0x000427f5) volume_small_pane_g4

0x9fbd,	// (0x000427fe) volume_small_pane_g5

0x9fc6,	// (0x00042807) volume_small_pane_g6

0x9fcf,	// (0x00042810) volume_small_pane_g7

0x9fd8,	// (0x00042819) volume_small_pane_g8

0x9fe1,	// (0x00042822) volume_small_pane_g9

0x9fea,	// (0x0004282b) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x00048130) volume_small_pane_g

0x8a4a,	// (0x0004128b) bg_active_tab_pane_cp2_ParamLimits

0x8a4a,	// (0x0004128b) bg_active_tab_pane_cp2

0x8a58,	// (0x00041299) tabs_3_active_pane_g1

0x8a60,	// (0x000412a1) tabs_3_active_pane_t1

0x8a4a,	// (0x0004128b) bg_passive_tab_pane_cp2_ParamLimits

0x8a4a,	// (0x0004128b) bg_passive_tab_pane_cp2

0x8a58,	// (0x00041299) tabs_3_passive_pane_g1

0x8a60,	// (0x000412a1) tabs_3_passive_pane_t1

0x8a4a,	// (0x0004128b) bg_active_tab_pane_cp3_ParamLimits

0x8a4a,	// (0x0004128b) bg_active_tab_pane_cp3

0x8a72,	// (0x000412b3) tabs_4_active_pane_g1

0x8a7a,	// (0x000412bb) tabs_4_active_pane_t1

0x8a4a,	// (0x0004128b) bg_passive_tab_pane_cp3_ParamLimits

0x8a4a,	// (0x0004128b) bg_passive_tab_pane_cp3

0x8a72,	// (0x000412b3) tabs_4_1_passive_pane_g1

0x8a7a,	// (0x000412bb) tabs_4_1_passive_pane_t1

0xc41f,	// (0x00044c60) list_highlight_pane_cp2

0xa2c9,	// (0x00042b0a) list_set_pane_ParamLimits

0xa2c9,	// (0x00042b0a) list_set_pane

0xa363,	// (0x00042ba4) main_pane_set_t1_ParamLimits

0xa363,	// (0x00042ba4) main_pane_set_t1

0xa383,	// (0x00042bc4) main_pane_set_t2_ParamLimits

0xa383,	// (0x00042bc4) main_pane_set_t2

0xa397,	// (0x00042bd8) main_pane_set_t3_ParamLimits

0xa397,	// (0x00042bd8) main_pane_set_t3

0xa3a9,	// (0x00042bea) main_pane_set_t4_ParamLimits

0xa3a9,	// (0x00042bea) main_pane_set_t4

0x0003,

0xf9bf,	// (0x00048200) main_pane_set_t_ParamLimits

0xf9bf,	// (0x00048200) main_pane_set_t

0xa3bb,	// (0x00042bfc) setting_code_pane

0xa3c3,	// (0x00042c04) setting_slider_graphic_pane

0xa3c3,	// (0x00042c04) setting_slider_pane

0xa3c3,	// (0x00042c04) setting_text_pane

0xa3c3,	// (0x00042c04) setting_volume_pane

0x5e37,	// (0x0003e678) volume_set_pane

0x8a8c,	// (0x000412cd) bg_set_opt_pane_cp

0x5e3f,	// (0x0003e680) setting_slider_pane_t1

0x5e58,	// (0x0003e699) setting_slider_pane_t2

0x5e71,	// (0x0003e6b2) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00047de3) setting_slider_pane_t

0x5e88,	// (0x0003e6c9) slider_set_pane

0x8880,	// (0x000410c1) bg_set_opt_pane_cp2

0x8a9a,	// (0x000412db) setting_slider_graphic_pane_g1

0x5e9e,	// (0x0003e6df) setting_slider_graphic_pane_t1

0x5ead,	// (0x0003e6ee) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00047dea) setting_slider_graphic_pane_t

0x5ebc,	// (0x0003e6fd) slider_set_pane_cp

0x8880,	// (0x000410c1) input_focus_pane_cp1

0xe367,	// (0x00046ba8) list_set_text_pane

0x8790,	// (0x00040fd1) setting_text_pane_g1

0x8880,	// (0x000410c1) input_focus_pane_cp2

0x8790,	// (0x00040fd1) setting_code_pane_g1

0x8aa3,	// (0x000412e4) setting_code_pane_t1

0xbee0,	// (0x00044721) set_text_pane_t1_ParamLimits

0xbee0,	// (0x00044721) set_text_pane_t1

0xc32f,	// (0x00044b70) set_opt_bg_pane_g1

0xc337,	// (0x00044b78) set_opt_bg_pane_g2

0xe347,	// (0x00046b88) set_opt_bg_pane_g3

0xc347,	// (0x00044b88) set_opt_bg_pane_g4

0xc34f,	// (0x00044b90) set_opt_bg_pane_g5

0xc357,	// (0x00044b98) set_opt_bg_pane_g6

0xe34f,	// (0x00046b90) set_opt_bg_pane_g7

0xe357,	// (0x00046b98) set_opt_bg_pane_g8

0xe35f,	// (0x00046ba0) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x000481ed) set_opt_bg_pane_g

0xe33a,	// (0x00046b7b) slider_set_pane_g1

0x67a7,	// (0x0003efe8) slider_set_pane_g2

0x0006,

0xf99d,	// (0x000481de) slider_set_pane_g

0x6743,	// (0x0003ef84) volume_set_pane_g1

0x674b,	// (0x0003ef8c) volume_set_pane_g2

0x6753,	// (0x0003ef94) volume_set_pane_g3

0x675b,	// (0x0003ef9c) volume_set_pane_g4

0x6763,	// (0x0003efa4) volume_set_pane_g5

0x676b,	// (0x0003efac) volume_set_pane_g6

0x6773,	// (0x0003efb4) volume_set_pane_g7

0x677b,	// (0x0003efbc) volume_set_pane_g8

0x6783,	// (0x0003efc4) volume_set_pane_g9

0x678b,	// (0x0003efcc) volume_set_pane_g10

0x0009,

0xf975,	// (0x000481b6) volume_set_pane_g

0x8ab1,	// (0x000412f2) indicator_pane_ParamLimits

0x8ab1,	// (0x000412f2) indicator_pane

0x8ad9,	// (0x0004131a) main_idle_pane_g2_ParamLimits

0x8ad9,	// (0x0004131a) main_idle_pane_g2

0x8b11,	// (0x00041352) main_pane_idle_g1_ParamLimits

0x8b11,	// (0x00041352) main_pane_idle_g1

0x8b38,	// (0x00041379) popup_clock_digital_analogue_window_ParamLimits

0x8b38,	// (0x00041379) popup_clock_digital_analogue_window

0x8b4f,	// (0x00041390) soft_indicator_pane_ParamLimits

0x8b4f,	// (0x00041390) soft_indicator_pane

0x8b69,	// (0x000413aa) wallpaper_pane_ParamLimits

0x8b69,	// (0x000413aa) wallpaper_pane

0x8790,	// (0x00040fd1) wallpaper_pane_g1

0x8b83,	// (0x000413c4) indicator_pane_g1_ParamLimits

0x8b83,	// (0x000413c4) indicator_pane_g1

0xe4ae,	// (0x00046cef) navi_navi_icon_text_pane_srt_g1

0x8bab,	// (0x000413ec) soft_indicator_pane_t1

0x8bc5,	// (0x00041406) aid_ps_area_pane

0x8bd6,	// (0x00041417) aid_ps_clock_pane

0x8be4,	// (0x00041425) aid_ps_indicator_pane

0x8bf0,	// (0x00041431) indicator_ps_pane_ParamLimits

0x8bf0,	// (0x00041431) indicator_ps_pane

0x8bff,	// (0x00041440) power_save_pane_g1_ParamLimits

0x8bff,	// (0x00041440) power_save_pane_g1

0x8c0b,	// (0x0004144c) power_save_pane_g2_ParamLimits

0x8c0b,	// (0x0004144c) power_save_pane_g2

0x5a5c,	// (0x0003e29d) aid_navinavi_width_pane

0x8bc5,	// (0x00041406) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00047def) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00047def) power_save_pane_g

0x8c19,	// (0x0004145a) power_save_pane_t1_ParamLimits

0x8c19,	// (0x0004145a) power_save_pane_t1

0x8bd6,	// (0x00041417) aid_ps_clock_pane_ParamLimits

0x8be4,	// (0x00041425) aid_ps_indicator_pane_ParamLimits

0x8c2b,	// (0x0004146c) power_save_pane_t4_ParamLimits

0x8c2b,	// (0x0004146c) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00047df4) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00047df4) power_save_pane_t

0x8c55,	// (0x00041496) power_save_t3_ParamLimits

0x8c55,	// (0x00041496) power_save_t3

0x8c40,	// (0x00041481) power_save_t2_ParamLimits

0x8c40,	// (0x00041481) power_save_t2

0x8c6a,	// (0x000414ab) indicator_ps_pane_g1

0x8c73,	// (0x000414b4) ai_gene_pane_ParamLimits

0x8c73,	// (0x000414b4) ai_gene_pane

0x8c8a,	// (0x000414cb) ai_links_pane_ParamLimits

0x8c8a,	// (0x000414cb) ai_links_pane

0x8ca2,	// (0x000414e3) indicator_pane_cp1_ParamLimits

0x8ca2,	// (0x000414e3) indicator_pane_cp1

0x8cb1,	// (0x000414f2) main_pane_idle_g1_cp_ParamLimits

0x8cb1,	// (0x000414f2) main_pane_idle_g1_cp

0x8cc9,	// (0x0004150a) popup_ai_links_title_window

0x8cd2,	// (0x00041513) soft_indicator_pane_cp1_ParamLimits

0x8cd2,	// (0x00041513) soft_indicator_pane_cp1

0xe18e,	// (0x000469cf) ai_links_pane_g1

0xe197,	// (0x000469d8) grid_ai_links_pane

0xa209,	// (0x00042a4a) ai_gene_pane_1

0xe17c,	// (0x000469bd) ai_gene_pane_2

0xe185,	// (0x000469c6) list_highlight_pane_cp4

0xa1e5,	// (0x00042a26) cell_ai_link_pane_ParamLimits

0xa1e5,	// (0x00042a26) cell_ai_link_pane

0xe174,	// (0x000469b5) cell_ai_link_pane_g1

0xbf3c,	// (0x0004477d) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x00048191) cell_ai_link_pane_g

0x8880,	// (0x000410c1) grid_highlight_cp2

0x8880,	// (0x000410c1) bg_popup_sub_pane_cp1

0x8cf4,	// (0x00041535) popup_ai_links_title_window_t1

0xe0c2,	// (0x00046903) ai_gene_pane_1_g1_ParamLimits

0xe0c2,	// (0x00046903) ai_gene_pane_1_g1

0xe0ce,	// (0x0004690f) ai_gene_pane_1_g2_ParamLimits

0xe0ce,	// (0x0004690f) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x00048187) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x00048187) ai_gene_pane_1_g

0xe0db,	// (0x0004691c) ai_gene_pane_1_t1_ParamLimits

0xe0db,	// (0x0004691c) ai_gene_pane_1_t1

0xe10f,	// (0x00046950) grid_ai_soft_ind_pane

0xe0ad,	// (0x000468ee) ai_gene_pane_2_t1_ParamLimits

0xe0ad,	// (0x000468ee) ai_gene_pane_2_t1

0x8d03,	// (0x00041544) main_pane_empty_t1_ParamLimits

0x8d03,	// (0x00041544) main_pane_empty_t1

0x8d1b,	// (0x0004155c) main_pane_empty_t2_ParamLimits

0x8d1b,	// (0x0004155c) main_pane_empty_t2

0x8d30,	// (0x00041571) main_pane_empty_t3_ParamLimits

0x8d30,	// (0x00041571) main_pane_empty_t3

0x8d42,	// (0x00041583) main_pane_empty_t4_ParamLimits

0x8d42,	// (0x00041583) main_pane_empty_t4

0x8d54,	// (0x00041595) main_pane_empty_t5_ParamLimits

0x8d54,	// (0x00041595) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00047df9) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00047df9) main_pane_empty_t

0xc380,	// (0x00044bc1) bg_popup_window_pane_ParamLimits

0xc380,	// (0x00044bc1) bg_popup_window_pane

0xde6d,	// (0x000466ae) find_popup_pane_cp2_ParamLimits

0xde6d,	// (0x000466ae) find_popup_pane_cp2

0xde79,	// (0x000466ba) heading_pane_ParamLimits

0xde79,	// (0x000466ba) heading_pane

0x8880,	// (0x000410c1) bg_popup_sub_pane

0xa103,	// (0x00042944) bg_popup_window_pane_g1_ParamLimits

0xa103,	// (0x00042944) bg_popup_window_pane_g1

0xa112,	// (0x00042953) bg_popup_window_pane_g2_ParamLimits

0xa112,	// (0x00042953) bg_popup_window_pane_g2

0xa11e,	// (0x0004295f) bg_popup_window_pane_g3_ParamLimits

0xa11e,	// (0x0004295f) bg_popup_window_pane_g3

0xa12a,	// (0x0004296b) bg_popup_window_pane_g4_ParamLimits

0xa12a,	// (0x0004296b) bg_popup_window_pane_g4

0xa139,	// (0x0004297a) bg_popup_window_pane_g5_ParamLimits

0xa139,	// (0x0004297a) bg_popup_window_pane_g5

0xa149,	// (0x0004298a) bg_popup_window_pane_g6_ParamLimits

0xa149,	// (0x0004298a) bg_popup_window_pane_g6

0xa155,	// (0x00042996) bg_popup_window_pane_g7_ParamLimits

0xa155,	// (0x00042996) bg_popup_window_pane_g7

0xa164,	// (0x000429a5) bg_popup_window_pane_g8_ParamLimits

0xa164,	// (0x000429a5) bg_popup_window_pane_g8

0xa173,	// (0x000429b4) bg_popup_window_pane_g9_ParamLimits

0xa173,	// (0x000429b4) bg_popup_window_pane_g9

0xde53,	// (0x00046694) bg_popup_window_pane_g10_ParamLimits

0xde53,	// (0x00046694) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0004814f) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0004814f) bg_popup_window_pane_g

0xde0a,	// (0x0004664b) bg_popup_heading_pane_ParamLimits

0xde0a,	// (0x0004664b) bg_popup_heading_pane

0x682f,	// (0x0003f070) tabs_4_passive_pane_cp_srt_ParamLimits

0x682f,	// (0x0003f070) tabs_4_passive_pane_cp_srt

0x6841,	// (0x0003f082) tabs_4_passive_pane_srt_ParamLimits

0xde1e,	// (0x0004665f) heading_pane_g2

0x6841,	// (0x0003f082) tabs_4_passive_pane_srt

0xd33e,	// (0x00045b7f) bg_passive_tab_pane_cp3_srt_ParamLimits

0xd33e,	// (0x00045b7f) bg_passive_tab_pane_cp3_srt

0xde26,	// (0x00046667) heading_pane_t1_ParamLimits

0xde26,	// (0x00046667) heading_pane_t1

0xde3d,	// (0x0004667e) heading_pane_t2_ParamLimits

0xde3d,	// (0x0004667e) heading_pane_t2

0x0001,

0xf909,	// (0x0004814a) heading_pane_t_ParamLimits

0xf909,	// (0x0004814a) heading_pane_t

0xd963,	// (0x000461a4) bg_popup_heading_pane_g1

0xd9f4,	// (0x00046235) bg_popup_heading_pane_g2

0xd9fe,	// (0x0004623f) bg_popup_heading_pane_g3

0xda08,	// (0x00046249) bg_popup_heading_pane_g4

0xda12,	// (0x00046253) bg_popup_heading_pane_g5

0xda1c,	// (0x0004625d) bg_popup_heading_pane_g6

0xda24,	// (0x00046265) bg_popup_heading_pane_g7

0xda2c,	// (0x0004626d) bg_popup_heading_pane_g8

0xda36,	// (0x00046277) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x00048106) bg_popup_heading_pane_g

0xd24e,	// (0x00045a8f) bg_popup_sub_pane_g1

0xd25e,	// (0x00045a9f) bg_popup_sub_pane_g2

0xd256,	// (0x00045a97) bg_popup_sub_pane_g3

0xd26e,	// (0x00045aaf) bg_popup_sub_pane_g4

0xd266,	// (0x00045aa7) bg_popup_sub_pane_g5

0xd276,	// (0x00045ab7) bg_popup_sub_pane_g6

0xd27e,	// (0x00045abf) bg_popup_sub_pane_g7

0xd28e,	// (0x00045acf) bg_popup_sub_pane_g8

0xd286,	// (0x00045ac7) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x000480e0) bg_popup_sub_pane_g

0x8a4a,	// (0x0004128b) bg_popup_window_pane_cp5_ParamLimits

0x8a4a,	// (0x0004128b) bg_popup_window_pane_cp5

0x8d74,	// (0x000415b5) popup_note_window_g1_ParamLimits

0x8d74,	// (0x000415b5) popup_note_window_g1

0x8d80,	// (0x000415c1) popup_note_window_t1_ParamLimits

0x8d80,	// (0x000415c1) popup_note_window_t1

0x8d92,	// (0x000415d3) popup_note_window_t2_ParamLimits

0x8d92,	// (0x000415d3) popup_note_window_t2

0x8da4,	// (0x000415e5) popup_note_window_t3_ParamLimits

0x8da4,	// (0x000415e5) popup_note_window_t3

0x8db6,	// (0x000415f7) popup_note_window_t4_ParamLimits

0x8db6,	// (0x000415f7) popup_note_window_t4

0x8dde,	// (0x0004161f) popup_note_window_t5_ParamLimits

0x8dde,	// (0x0004161f) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00047e04) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00047e04) popup_note_window_t

0x8e02,	// (0x00041643) bg_popup_window_pane_cp6_ParamLimits

0x8e02,	// (0x00041643) bg_popup_window_pane_cp6

0xd8d7,	// (0x00046118) popup_note_image_window_g1_ParamLimits

0xd8d7,	// (0x00046118) popup_note_image_window_g1

0xd8e3,	// (0x00046124) popup_note_image_window_g2_ParamLimits

0xd8e3,	// (0x00046124) popup_note_image_window_g2

0x0001,

0xf893,	// (0x000480d4) popup_note_image_window_g_ParamLimits

0xf893,	// (0x000480d4) popup_note_image_window_g

0xd8fc,	// (0x0004613d) popup_note_image_window_t1_ParamLimits

0xd8fc,	// (0x0004613d) popup_note_image_window_t1

0xd915,	// (0x00046156) popup_note_image_window_t2_ParamLimits

0xd915,	// (0x00046156) popup_note_image_window_t2

0xd92e,	// (0x0004616f) popup_note_image_window_t3_ParamLimits

0xd92e,	// (0x0004616f) popup_note_image_window_t3

0x0002,

0xf898,	// (0x000480d9) popup_note_image_window_t_ParamLimits

0xf898,	// (0x000480d9) popup_note_image_window_t

0xd7b4,	// (0x00045ff5) bg_popup_window_pane_cp7_ParamLimits

0xd7b4,	// (0x00045ff5) bg_popup_window_pane_cp7

0xd7e4,	// (0x00046025) popup_note_wait_window_g1_ParamLimits

0xd7e4,	// (0x00046025) popup_note_wait_window_g1

0xd7f0,	// (0x00046031) popup_note_wait_window_g2_ParamLimits

0xd7f0,	// (0x00046031) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x000480c2) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x000480c2) popup_note_wait_window_g

0xd808,	// (0x00046049) popup_note_wait_window_t1_ParamLimits

0xd808,	// (0x00046049) popup_note_wait_window_t1

0xd82f,	// (0x00046070) popup_note_wait_window_t2_ParamLimits

0xd82f,	// (0x00046070) popup_note_wait_window_t2

0xd84c,	// (0x0004608d) popup_note_wait_window_t3_ParamLimits

0xd84c,	// (0x0004608d) popup_note_wait_window_t3

0xd85f,	// (0x000460a0) popup_note_wait_window_t4_ParamLimits

0xd85f,	// (0x000460a0) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x000480c9) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x000480c9) popup_note_wait_window_t

0xd884,	// (0x000460c5) wait_bar_pane_ParamLimits

0xd884,	// (0x000460c5) wait_bar_pane

0x8880,	// (0x000410c1) wait_anim_pane

0x8880,	// (0x000410c1) wait_border_pane

0x8790,	// (0x00040fd1) wait_anim_pane_g1

0x8790,	// (0x00040fd1) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x00047f8d) wait_anim_pane_g

0xd758,	// (0x00045f99) wait_border_pane_g1

0xd763,	// (0x00045fa4) wait_border_pane_g2

0xd76c,	// (0x00045fad) wait_border_pane_g3

0x0002,

0xf87a,	// (0x000480bb) wait_border_pane_g

0xd6ba,	// (0x00045efb) bg_popup_window_pane_cp16_ParamLimits

0xd6ba,	// (0x00045efb) bg_popup_window_pane_cp16

0xd6c8,	// (0x00045f09) indicator_popup_pane_cp4_ParamLimits

0xd6c8,	// (0x00045f09) indicator_popup_pane_cp4

0xd6dc,	// (0x00045f1d) popup_query_data_window_t1_ParamLimits

0xd6dc,	// (0x00045f1d) popup_query_data_window_t1

0xd6ee,	// (0x00045f2f) popup_query_data_window_t2_ParamLimits

0xd6ee,	// (0x00045f2f) popup_query_data_window_t2

0xd707,	// (0x00045f48) popup_query_data_window_t3_ParamLimits

0xd707,	// (0x00045f48) popup_query_data_window_t3

0x0002,

0xf873,	// (0x000480b4) popup_query_data_window_t_ParamLimits

0xf873,	// (0x000480b4) popup_query_data_window_t

0xd721,	// (0x00045f62) query_popup_data_pane_ParamLimits

0xd721,	// (0x00045f62) query_popup_data_pane

0xd735,	// (0x00045f76) query_popup_data_pane_cp1_ParamLimits

0xd735,	// (0x00045f76) query_popup_data_pane_cp1

0x8e02,	// (0x00041643) bg_popup_window_pane_cp10_ParamLimits

0x8e02,	// (0x00041643) bg_popup_window_pane_cp10

0xd61d,	// (0x00045e5e) indicator_popup_pane_ParamLimits

0xd61d,	// (0x00045e5e) indicator_popup_pane

0x8e59,	// (0x0004169a) popup_query_code_window_t1_ParamLimits

0x8e59,	// (0x0004169a) popup_query_code_window_t1

0xd635,	// (0x00045e76) popup_query_code_window_t2_ParamLimits

0xd635,	// (0x00045e76) popup_query_code_window_t2

0xd673,	// (0x00045eb4) popup_query_code_window_t3_ParamLimits

0xd673,	// (0x00045eb4) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x000480ad) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x000480ad) popup_query_code_window_t

0xd6a2,	// (0x00045ee3) query_popup_pane_ParamLimits

0xd6a2,	// (0x00045ee3) query_popup_pane

0x8e02,	// (0x00041643) bg_popup_window_pane_cp15_ParamLimits

0x8e02,	// (0x00041643) bg_popup_window_pane_cp15

0x8e20,	// (0x00041661) indicator_popup_pane_cp1_ParamLimits

0x8e20,	// (0x00041661) indicator_popup_pane_cp1

0x8e33,	// (0x00041674) indicator_popup_pane_cp2_ParamLimits

0x8e33,	// (0x00041674) indicator_popup_pane_cp2

0x8e46,	// (0x00041687) popup_query_data_code_window_g1_ParamLimits

0x8e46,	// (0x00041687) popup_query_data_code_window_g1

0x8e59,	// (0x0004169a) popup_query_data_code_window_t1_ParamLimits

0x8e59,	// (0x0004169a) popup_query_data_code_window_t1

0x8e6b,	// (0x000416ac) popup_query_data_code_window_t2_ParamLimits

0x8e6b,	// (0x000416ac) popup_query_data_code_window_t2

0x8e7d,	// (0x000416be) popup_query_data_code_window_t3_ParamLimits

0x8e7d,	// (0x000416be) popup_query_data_code_window_t3

0x8e93,	// (0x000416d4) popup_query_data_code_window_t4_ParamLimits

0x8e93,	// (0x000416d4) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00047e0f) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00047e0f) popup_query_data_code_window_t

0x64ec,	// (0x0003ed2d) list_single_midp_graphic_pane_g3

0xbef9,	// (0x0004473a) query_popup_data_pane_cp2_ParamLimits

0xbf0c,	// (0x0004474d) query_popup_pane_cp2_ParamLimits

0xbf0c,	// (0x0004474d) query_popup_pane_cp2

0x8880,	// (0x000410c1) bg_popup_window_pane_cp11

0xd5f1,	// (0x00045e32) heading_pane_cp5

0xbf9a,	// (0x000447db) listscroll_popup_info_pane

0x8880,	// (0x000410c1) input_focus_pane_cp3

0xbf1f,	// (0x00044760) query_popup_pane_t1

0xbf2d,	// (0x0004476e) list_popup_info_pane_ParamLimits

0xbf2d,	// (0x0004476e) list_popup_info_pane

0xbf3c,	// (0x0004477d) listscroll_popup_info_pane_g1

0xbf44,	// (0x00044785) scroll_pane_cp7

0xbf4e,	// (0x0004478f) popup_info_list_pane_t1_ParamLimits

0xbf4e,	// (0x0004478f) popup_info_list_pane_t1

0xbf68,	// (0x000447a9) popup_info_list_pane_t2_ParamLimits

0xbf68,	// (0x000447a9) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00047e18) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00047e18) popup_info_list_pane_t

0x8880,	// (0x000410c1) bg_popup_window_pane_cp12

0xe4c8,	// (0x00046d09) find_popup_pane

0x8a8c,	// (0x000412cd) bg_popup_window_pane_cp3

0xbf82,	// (0x000447c3) heading_pane_cp3

0xbf8e,	// (0x000447cf) listscroll_popup_graphic_pane

0x8880,	// (0x000410c1) bg_popup_window_pane_cp4

0x8efb,	// (0x0004173c) heading_pane_cp4

0xbf9a,	// (0x000447db) listscroll_popup_colour_pane

0xbfa2,	// (0x000447e3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbfa2,	// (0x000447e3) cell_large_graphic_colour_none_popup_pane

0x8f03,	// (0x00041744) grid_large_graphic_colour_popup_pane_ParamLimits

0x8f03,	// (0x00041744) grid_large_graphic_colour_popup_pane

0xbfb6,	// (0x000447f7) listscroll_popup_colour_pane_g1_ParamLimits

0xbfb6,	// (0x000447f7) listscroll_popup_colour_pane_g1

0xbfcd,	// (0x0004480e) listscroll_popup_colour_pane_g2_ParamLimits

0xbfcd,	// (0x0004480e) listscroll_popup_colour_pane_g2

0xbfe4,	// (0x00044825) listscroll_popup_colour_pane_g3_ParamLimits

0xbfe4,	// (0x00044825) listscroll_popup_colour_pane_g3

0x8f27,	// (0x00041768) listscroll_popup_colour_pane_g4_ParamLimits

0x8f27,	// (0x00041768) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00047e1d) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00047e1d) listscroll_popup_colour_pane_g

0xbff4,	// (0x00044835) scroll_pane_cp6_ParamLimits

0xbff4,	// (0x00044835) scroll_pane_cp6

0x8f36,	// (0x00041777) cell_large_graphic_colour_popup_pane_ParamLimits

0x8f36,	// (0x00041777) cell_large_graphic_colour_popup_pane

0xc006,	// (0x00044847) cell_large_graphic_colour_none_popup_pane_t1

0x8880,	// (0x000410c1) grid_highlight_pane_cp5

0xc015,	// (0x00044856) cell_large_graphic_colour_popup_pane_g1

0xc01d,	// (0x0004485e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00047e26) cell_large_graphic_colour_popup_pane_g

0xc025,	// (0x00044866) cell_large_graphic_colour_popup_pane_g2_copy1

0xc02e,	// (0x0004486f) grid_highlight_pane_cp4

0xc036,	// (0x00044877) bg_popup_window_pane_cp8_ParamLimits

0xc036,	// (0x00044877) bg_popup_window_pane_cp8

0xc051,	// (0x00044892) popup_snote_single_text_window_g1_ParamLimits

0xc051,	// (0x00044892) popup_snote_single_text_window_g1

0xc063,	// (0x000448a4) popup_snote_single_text_window_t1_ParamLimits

0xc063,	// (0x000448a4) popup_snote_single_text_window_t1

0xc076,	// (0x000448b7) popup_snote_single_text_window_t2_ParamLimits

0xc076,	// (0x000448b7) popup_snote_single_text_window_t2

0xc089,	// (0x000448ca) popup_snote_single_text_window_t3_ParamLimits

0xc089,	// (0x000448ca) popup_snote_single_text_window_t3

0xc0c2,	// (0x00044903) popup_snote_single_text_window_t4_ParamLimits

0xc0c2,	// (0x00044903) popup_snote_single_text_window_t4

0xc0f6,	// (0x00044937) popup_snote_single_text_window_t5_ParamLimits

0xc0f6,	// (0x00044937) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00047e2b) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00047e2b) popup_snote_single_text_window_t

0xc125,	// (0x00044966) bg_popup_window_pane_cp9_ParamLimits

0xc125,	// (0x00044966) bg_popup_window_pane_cp9

0xc051,	// (0x00044892) popup_snote_single_graphic_window_g1_ParamLimits

0xc051,	// (0x00044892) popup_snote_single_graphic_window_g1

0xc133,	// (0x00044974) popup_snote_single_graphic_window_g2_ParamLimits

0xc133,	// (0x00044974) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00047e36) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00047e36) popup_snote_single_graphic_window_g

0xc13f,	// (0x00044980) popup_snote_single_graphic_window_t1_ParamLimits

0xc13f,	// (0x00044980) popup_snote_single_graphic_window_t1

0xc152,	// (0x00044993) popup_snote_single_graphic_window_t2_ParamLimits

0xc152,	// (0x00044993) popup_snote_single_graphic_window_t2

0xc165,	// (0x000449a6) popup_snote_single_graphic_window_t3_ParamLimits

0xc165,	// (0x000449a6) popup_snote_single_graphic_window_t3

0xc19e,	// (0x000449df) popup_snote_single_graphic_window_t4_ParamLimits

0xc19e,	// (0x000449df) popup_snote_single_graphic_window_t4

0xc1d2,	// (0x00044a13) popup_snote_single_graphic_window_t5_ParamLimits

0xc1d2,	// (0x00044a13) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00047e3b) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00047e3b) popup_snote_single_graphic_window_t

0xe44c,	// (0x00046c8d) grid_graphic_popup_pane_ParamLimits

0xe44c,	// (0x00046c8d) grid_graphic_popup_pane

0xe478,	// (0x00046cb9) listscroll_popup_graphic_pane_g1_ParamLimits

0xe478,	// (0x00046cb9) listscroll_popup_graphic_pane_g1

0xa4c1,	// (0x00042d02) listscroll_popup_graphic_pane_g2_ParamLimits

0xa4c1,	// (0x00042d02) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0004822a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0004822a) listscroll_popup_graphic_pane_g

0xd5b9,	// (0x00045dfa) scroll_pane_cp5

0xa484,	// (0x00042cc5) cell_graphic_popup_pane_ParamLimits

0xa484,	// (0x00042cc5) cell_graphic_popup_pane

0xe417,	// (0x00046c58) cell_graphic_popup_pane_g1

0xe41f,	// (0x00046c60) cell_graphic_popup_pane_g2

0xc025,	// (0x00044866) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x00048223) cell_graphic_popup_pane_g

0xe428,	// (0x00046c69) cell_graphic_popup_pane_t2

0xc02e,	// (0x0004486f) grid_highlight_pane_cp3

0xc213,	// (0x00044a54) list_gen_pane_ParamLimits

0xc213,	// (0x00044a54) list_gen_pane

0xc23b,	// (0x00044a7c) scroll_pane

0xa43f,	// (0x00042c80) bg_list_pane_g1_ParamLimits

0xa43f,	// (0x00042c80) bg_list_pane_g1

0xe3c6,	// (0x00046c07) bg_list_pane_g2_ParamLimits

0xe3c6,	// (0x00046c07) bg_list_pane_g2

0xe3d9,	// (0x00046c1a) bg_list_pane_g3_ParamLimits

0xe3d9,	// (0x00046c1a) bg_list_pane_g3

0xe3eb,	// (0x00046c2c) bg_list_pane_g4_ParamLimits

0xe3eb,	// (0x00046c2c) bg_list_pane_g4

0xa45a,	// (0x00042c9b) bg_list_pane_g5_ParamLimits

0xa45a,	// (0x00042c9b) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x00048218) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x00048218) bg_list_pane_g

0xa405,	// (0x00042c46) list_double2_graphic_large_graphic_pane_ParamLimits

0xa405,	// (0x00042c46) list_double2_graphic_large_graphic_pane

0xa405,	// (0x00042c46) list_double2_graphic_pane_ParamLimits

0xa405,	// (0x00042c46) list_double2_graphic_pane

0xa405,	// (0x00042c46) list_double2_large_graphic_pane_ParamLimits

0xa405,	// (0x00042c46) list_double2_large_graphic_pane

0xa405,	// (0x00042c46) list_double2_pane_ParamLimits

0xa405,	// (0x00042c46) list_double2_pane

0xa405,	// (0x00042c46) list_double_graphic_heading_pane_ParamLimits

0xa405,	// (0x00042c46) list_double_graphic_heading_pane

0xa405,	// (0x00042c46) list_double_graphic_pane_ParamLimits

0xa405,	// (0x00042c46) list_double_graphic_pane

0xa405,	// (0x00042c46) list_double_heading_pane_ParamLimits

0xa405,	// (0x00042c46) list_double_heading_pane

0xa405,	// (0x00042c46) list_double_large_graphic_pane_ParamLimits

0xa405,	// (0x00042c46) list_double_large_graphic_pane

0xa405,	// (0x00042c46) list_double_number_pane_ParamLimits

0xa405,	// (0x00042c46) list_double_number_pane

0xa405,	// (0x00042c46) list_double_pane_ParamLimits

0xa405,	// (0x00042c46) list_double_pane

0xa405,	// (0x00042c46) list_double_time_pane_ParamLimits

0xa405,	// (0x00042c46) list_double_time_pane

0xa405,	// (0x00042c46) list_setting_number_pane_ParamLimits

0xa405,	// (0x00042c46) list_setting_number_pane

0xa405,	// (0x00042c46) list_setting_pane_ParamLimits

0xa405,	// (0x00042c46) list_setting_pane

0xa418,	// (0x00042c59) list_single_2graphic_pane_ParamLimits

0xa418,	// (0x00042c59) list_single_2graphic_pane

0xa418,	// (0x00042c59) list_single_graphic_heading_pane_ParamLimits

0xa418,	// (0x00042c59) list_single_graphic_heading_pane

0xa418,	// (0x00042c59) list_single_graphic_pane_ParamLimits

0xa418,	// (0x00042c59) list_single_graphic_pane

0xa418,	// (0x00042c59) list_single_heading_pane_ParamLimits

0xa418,	// (0x00042c59) list_single_heading_pane

0xa418,	// (0x00042c59) list_single_large_graphic_pane_ParamLimits

0xa418,	// (0x00042c59) list_single_large_graphic_pane

0xa418,	// (0x00042c59) list_single_number_heading_pane_ParamLimits

0xa418,	// (0x00042c59) list_single_number_heading_pane

0xa418,	// (0x00042c59) list_single_number_pane_ParamLimits

0xa418,	// (0x00042c59) list_single_number_pane

0xa418,	// (0x00042c59) list_single_pane_ParamLimits

0xa418,	// (0x00042c59) list_single_pane

0x8880,	// (0x000410c1) list_highlight_pane_cp1

0xeeba,	// (0x000476fb) list_single_pane_g1_ParamLimits

0xeeba,	// (0x000476fb) list_single_pane_g1

0xeec6,	// (0x00047707) list_single_pane_g2_ParamLimits

0xeec6,	// (0x00047707) list_single_pane_g2

0x0001,

0xf616,	// (0x00047e57) list_single_pane_g_ParamLimits

0xf616,	// (0x00047e57) list_single_pane_g

0xf0ce,	// (0x0004790f) list_single_pane_t1_ParamLimits

0xf0ce,	// (0x0004790f) list_single_pane_t1

0xeeba,	// (0x000476fb) list_single_number_pane_g1_ParamLimits

0xeeba,	// (0x000476fb) list_single_number_pane_g1

0xeec6,	// (0x00047707) list_single_number_pane_g2_ParamLimits

0xeec6,	// (0x00047707) list_single_number_pane_g2

0x0001,

0xf616,	// (0x00047e57) list_single_number_pane_g_ParamLimits

0xf616,	// (0x00047e57) list_single_number_pane_g

0xf07f,	// (0x000478c0) list_single_number_pane_t1_ParamLimits

0xf07f,	// (0x000478c0) list_single_number_pane_t1

0x44ca,	// (0x0003cd0b) list_single_number_pane_t2_ParamLimits

0x44ca,	// (0x0003cd0b) list_single_number_pane_t2

0x0001,

0xf998,	// (0x000481d9) list_single_number_pane_t_ParamLimits

0xf998,	// (0x000481d9) list_single_number_pane_t

0x3f3c,	// (0x0003c77d) list_single_graphic_pane_g1_ParamLimits

0x3f3c,	// (0x0003c77d) list_single_graphic_pane_g1

0xeeba,	// (0x000476fb) list_single_graphic_pane_g2_ParamLimits

0xeeba,	// (0x000476fb) list_single_graphic_pane_g2

0xeec6,	// (0x00047707) list_single_graphic_pane_g3_ParamLimits

0xeec6,	// (0x00047707) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00047e46) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00047e46) list_single_graphic_pane_g

0x3f48,	// (0x0003c789) list_single_graphic_pane_t1_ParamLimits

0x3f48,	// (0x0003c789) list_single_graphic_pane_t1

0x3f5e,	// (0x0003c79f) list_single_heading_pane_g1_ParamLimits

0x3f5e,	// (0x0003c79f) list_single_heading_pane_g1

0xeec6,	// (0x00047707) list_single_heading_pane_g2_ParamLimits

0xeec6,	// (0x00047707) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00047e4d) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00047e4d) list_single_heading_pane_g

0x3f71,	// (0x0003c7b2) list_single_heading_pane_t1_ParamLimits

0x3f71,	// (0x0003c7b2) list_single_heading_pane_t1

0x3f87,	// (0x0003c7c8) list_single_heading_pane_t2_ParamLimits

0x3f87,	// (0x0003c7c8) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00047e52) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00047e52) list_single_heading_pane_t

0xeeba,	// (0x000476fb) list_single_number_heading_pane_g1_ParamLimits

0xeeba,	// (0x000476fb) list_single_number_heading_pane_g1

0xeec6,	// (0x00047707) list_single_number_heading_pane_g2_ParamLimits

0xeec6,	// (0x00047707) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x00047e57) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x00047e57) list_single_number_heading_pane_g

0xeed2,	// (0x00047713) list_single_number_heading_pane_t1_ParamLimits

0xeed2,	// (0x00047713) list_single_number_heading_pane_t1

0x3f99,	// (0x0003c7da) list_single_number_heading_pane_t2_ParamLimits

0x3f99,	// (0x0003c7da) list_single_number_heading_pane_t2

0xeee8,	// (0x00047729) list_single_number_heading_pane_t3_ParamLimits

0xeee8,	// (0x00047729) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x00047e5c) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x00047e5c) list_single_number_heading_pane_t

0x3fab,	// (0x0003c7ec) list_single_graphic_heading_pane_g1_ParamLimits

0x3fab,	// (0x0003c7ec) list_single_graphic_heading_pane_g1

0x47de,	// (0x0003d01f) list_single_graphic_heading_pane_g4_ParamLimits

0x47de,	// (0x0003d01f) list_single_graphic_heading_pane_g4

0xeec6,	// (0x00047707) list_single_graphic_heading_pane_g5_ParamLimits

0xeec6,	// (0x00047707) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x00047e63) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00047e63) list_single_graphic_heading_pane_g

0xeed2,	// (0x00047713) list_single_graphic_heading_pane_t1_ParamLimits

0xeed2,	// (0x00047713) list_single_graphic_heading_pane_t1

0x3fbf,	// (0x0003c800) list_single_graphic_heading_pane_t2_ParamLimits

0x3fbf,	// (0x0003c800) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00047e6a) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00047e6a) list_single_graphic_heading_pane_t

0xeefa,	// (0x0004773b) list_single_large_graphic_pane_g1_ParamLimits

0xeefa,	// (0x0004773b) list_single_large_graphic_pane_g1

0xeeba,	// (0x000476fb) list_single_large_graphic_pane_g2_ParamLimits

0xeeba,	// (0x000476fb) list_single_large_graphic_pane_g2

0xeec6,	// (0x00047707) list_single_large_graphic_pane_g3_ParamLimits

0xeec6,	// (0x00047707) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x00047e6f) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x00047e6f) list_single_large_graphic_pane_g

0xd763,	// (0x00045fa4) wait_border_pane_g2_copy1

0x47ef,	// (0x0003d030) list_single_large_graphic_pane_g4_cp2

0xeed2,	// (0x00047713) list_single_large_graphic_pane_t1_ParamLimits

0xeed2,	// (0x00047713) list_single_large_graphic_pane_t1

0xef06,	// (0x00047747) list_double_pane_g1_ParamLimits

0xef06,	// (0x00047747) list_double_pane_g1

0xef12,	// (0x00047753) list_double_pane_g2_ParamLimits

0xef12,	// (0x00047753) list_double_pane_g2

0x0001,

0xf635,	// (0x00047e76) list_double_pane_g_ParamLimits

0xf635,	// (0x00047e76) list_double_pane_g

0x3fd7,	// (0x0003c818) list_double_pane_t1_ParamLimits

0x3fd7,	// (0x0003c818) list_double_pane_t1

0x3fed,	// (0x0003c82e) list_double_pane_t2_ParamLimits

0x3fed,	// (0x0003c82e) list_double_pane_t2

0x0001,

0xf63a,	// (0x00047e7b) list_double_pane_t_ParamLimits

0xf63a,	// (0x00047e7b) list_double_pane_t

0x3fff,	// (0x0003c840) list_double2_pane_g1_ParamLimits

0x3fff,	// (0x0003c840) list_double2_pane_g1

0xef1e,	// (0x0004775f) list_double2_pane_g2_ParamLimits

0xef1e,	// (0x0004775f) list_double2_pane_g2

0x0001,

0xf63f,	// (0x00047e80) list_double2_pane_g_ParamLimits

0xf63f,	// (0x00047e80) list_double2_pane_g

0x4010,	// (0x0003c851) list_double2_pane_t1_ParamLimits

0x4010,	// (0x0003c851) list_double2_pane_t1

0x4026,	// (0x0003c867) list_double2_pane_t2_ParamLimits

0x4026,	// (0x0003c867) list_double2_pane_t2

0x0001,

0xf644,	// (0x00047e85) list_double2_pane_t_ParamLimits

0xf644,	// (0x00047e85) list_double2_pane_t

0xef06,	// (0x00047747) list_double_number_pane_g1_ParamLimits

0xef06,	// (0x00047747) list_double_number_pane_g1

0xef12,	// (0x00047753) list_double_number_pane_g2_ParamLimits

0xef12,	// (0x00047753) list_double_number_pane_g2

0x0001,

0xf635,	// (0x00047e76) list_double_number_pane_g_ParamLimits

0xf635,	// (0x00047e76) list_double_number_pane_g

0x4038,	// (0x0003c879) list_double_number_pane_t1_ParamLimits

0x4038,	// (0x0003c879) list_double_number_pane_t1

0xef2a,	// (0x0004776b) list_double_number_pane_t2_ParamLimits

0xef2a,	// (0x0004776b) list_double_number_pane_t2

0x404a,	// (0x0003c88b) list_double_number_pane_t3_ParamLimits

0x404a,	// (0x0003c88b) list_double_number_pane_t3

0x0002,

0xf649,	// (0x00047e8a) list_double_number_pane_t_ParamLimits

0xf649,	// (0x00047e8a) list_double_number_pane_t

0xef40,	// (0x00047781) list_double_graphic_pane_g1_ParamLimits

0xef40,	// (0x00047781) list_double_graphic_pane_g1

0x47f7,	// (0x0003d038) list_double_graphic_pane_g2_ParamLimits

0x47f7,	// (0x0003d038) list_double_graphic_pane_g2

0x4806,	// (0x0003d047) list_double_graphic_pane_g3_ParamLimits

0x4806,	// (0x0003d047) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x00047e91) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x00047e91) list_double_graphic_pane_g

0x405c,	// (0x0003c89d) list_double_graphic_pane_t1_ParamLimits

0x405c,	// (0x0003c89d) list_double_graphic_pane_t1

0x4072,	// (0x0003c8b3) list_double_graphic_pane_t2_ParamLimits

0x4072,	// (0x0003c8b3) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x00047e9a) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x00047e9a) list_double_graphic_pane_t

0x4084,	// (0x0003c8c5) list_double2_graphic_pane_g1_ParamLimits

0x4084,	// (0x0003c8c5) list_double2_graphic_pane_g1

0xc26f,	// (0x00044ab0) list_double2_graphic_pane_g2_ParamLimits

0xc26f,	// (0x00044ab0) list_double2_graphic_pane_g2

0x481e,	// (0x0003d05f) list_double2_graphic_pane_g3_ParamLimits

0x481e,	// (0x0003d05f) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x00047e9f) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x00047e9f) list_double2_graphic_pane_g

0x4090,	// (0x0003c8d1) list_double2_graphic_pane_t1_ParamLimits

0x4090,	// (0x0003c8d1) list_double2_graphic_pane_t1

0x40a6,	// (0x0003c8e7) list_double2_graphic_pane_t2_ParamLimits

0x40a6,	// (0x0003c8e7) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x00047ea6) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x00047ea6) list_double2_graphic_pane_t

0x40b8,	// (0x0003c8f9) list_double_large_graphic_pane_g1_ParamLimits

0x40b8,	// (0x0003c8f9) list_double_large_graphic_pane_g1

0x40d7,	// (0x0003c918) list_double_large_graphic_pane_g2_ParamLimits

0x40d7,	// (0x0003c918) list_double_large_graphic_pane_g2

0xef12,	// (0x00047753) list_double_large_graphic_pane_g3_ParamLimits

0xef12,	// (0x00047753) list_double_large_graphic_pane_g3

0x40ed,	// (0x0003c92e) list_double_large_graphic_pane_g4_ParamLimits

0x40ed,	// (0x0003c92e) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x00047eab) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x00047eab) list_double_large_graphic_pane_g

0x4100,	// (0x0003c941) list_double_large_graphic_pane_t1_ParamLimits

0x4100,	// (0x0003c941) list_double_large_graphic_pane_t1

0x4119,	// (0x0003c95a) list_double_large_graphic_pane_t2_ParamLimits

0x4119,	// (0x0003c95a) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x00047eb6) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x00047eb6) list_double_large_graphic_pane_t

0x482a,	// (0x0003d06b) list_double2_large_graphic_pane_g1_ParamLimits

0x482a,	// (0x0003d06b) list_double2_large_graphic_pane_g1

0x4836,	// (0x0003d077) list_double2_large_graphic_pane_g2_ParamLimits

0x4836,	// (0x0003d077) list_double2_large_graphic_pane_g2

0x481e,	// (0x0003d05f) list_double2_large_graphic_pane_g3_ParamLimits

0x481e,	// (0x0003d05f) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x00047ebb) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x00047ebb) list_double2_large_graphic_pane_g

0x412b,	// (0x0003c96c) list_double2_large_graphic_pane_t1_ParamLimits

0x412b,	// (0x0003c96c) list_double2_large_graphic_pane_t1

0x4141,	// (0x0003c982) list_double2_large_graphic_pane_t2_ParamLimits

0x4141,	// (0x0003c982) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x00047ec2) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x00047ec2) list_double2_large_graphic_pane_t

0x4153,	// (0x0003c994) list_double_heading_pane_g1_ParamLimits

0x4153,	// (0x0003c994) list_double_heading_pane_g1

0x4164,	// (0x0003c9a5) list_double_heading_pane_g2_ParamLimits

0x4164,	// (0x0003c9a5) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x00047ec7) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x00047ec7) list_double_heading_pane_g

0x4170,	// (0x0003c9b1) list_double_heading_pane_t1_ParamLimits

0x4170,	// (0x0003c9b1) list_double_heading_pane_t1

0x4026,	// (0x0003c867) list_double_heading_pane_t2_ParamLimits

0x4026,	// (0x0003c867) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x00047ecc) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x00047ecc) list_double_heading_pane_t

0xef61,	// (0x000477a2) list_double_graphic_heading_pane_g1_ParamLimits

0xef61,	// (0x000477a2) list_double_graphic_heading_pane_g1

0x4153,	// (0x0003c994) list_double_graphic_heading_pane_g2_ParamLimits

0x4153,	// (0x0003c994) list_double_graphic_heading_pane_g2

0x4164,	// (0x0003c9a5) list_double_graphic_heading_pane_g3_ParamLimits

0x4164,	// (0x0003c9a5) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x00047ed1) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x00047ed1) list_double_graphic_heading_pane_g

0x4186,	// (0x0003c9c7) list_double_graphic_heading_pane_t1_ParamLimits

0x4186,	// (0x0003c9c7) list_double_graphic_heading_pane_t1

0x40a6,	// (0x0003c8e7) list_double_graphic_heading_pane_t2_ParamLimits

0x40a6,	// (0x0003c8e7) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x00047ed8) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x00047ed8) list_double_graphic_heading_pane_t

0x419c,	// (0x0003c9dd) list_double_time_pane_g1_ParamLimits

0x419c,	// (0x0003c9dd) list_double_time_pane_g1

0xef6d,	// (0x000477ae) list_double_time_pane_g2_ParamLimits

0xef6d,	// (0x000477ae) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x00047edd) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x00047edd) list_double_time_pane_g

0x41ad,	// (0x0003c9ee) list_double_time_pane_t1_ParamLimits

0x41ad,	// (0x0003c9ee) list_double_time_pane_t1

0x41c3,	// (0x0003ca04) list_double_time_pane_t2_ParamLimits

0x41c3,	// (0x0003ca04) list_double_time_pane_t2

0x41d5,	// (0x0003ca16) list_double_time_pane_t3_ParamLimits

0x41d5,	// (0x0003ca16) list_double_time_pane_t3

0x41e7,	// (0x0003ca28) list_double_time_pane_t4_ParamLimits

0x41e7,	// (0x0003ca28) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x00047ee2) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x00047ee2) list_double_time_pane_t

0xef79,	// (0x000477ba) list_setting_pane_g1_ParamLimits

0xef79,	// (0x000477ba) list_setting_pane_g1

0xef1e,	// (0x0004775f) list_setting_pane_g2_ParamLimits

0xef1e,	// (0x0004775f) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x00047eeb) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x00047eeb) list_setting_pane_g

0x41f9,	// (0x0003ca3a) list_setting_pane_t1_ParamLimits

0x41f9,	// (0x0003ca3a) list_setting_pane_t1

0x4213,	// (0x0003ca54) list_setting_pane_t2_ParamLimits

0x4213,	// (0x0003ca54) list_setting_pane_t2

0x0002,

0xf6af,	// (0x00047ef0) list_setting_pane_t_ParamLimits

0xf6af,	// (0x00047ef0) list_setting_pane_t

0x4250,	// (0x0003ca91) set_value_pane_cp_ParamLimits

0x4250,	// (0x0003ca91) set_value_pane_cp

0xef85,	// (0x000477c6) list_setting_number_pane_g1_ParamLimits

0xef85,	// (0x000477c6) list_setting_number_pane_g1

0xef91,	// (0x000477d2) list_setting_number_pane_g2_ParamLimits

0xef91,	// (0x000477d2) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x00047ef7) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x00047ef7) list_setting_number_pane_g

0x425c,	// (0x0003ca9d) list_setting_number_pane_t1_ParamLimits

0x425c,	// (0x0003ca9d) list_setting_number_pane_t1

0x4275,	// (0x0003cab6) list_setting_number_pane_t2_ParamLimits

0x4275,	// (0x0003cab6) list_setting_number_pane_t2

0x428f,	// (0x0003cad0) list_setting_number_pane_t3_ParamLimits

0x428f,	// (0x0003cad0) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x00047efc) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x00047efc) list_setting_number_pane_t

0x4250,	// (0x0003ca91) set_value_pane_ParamLimits

0x4250,	// (0x0003ca91) set_value_pane

0xc27b,	// (0x00044abc) bg_set_opt_pane_ParamLimits

0xc27b,	// (0x00044abc) bg_set_opt_pane

0xef9d,	// (0x000477de) set_value_pane_t1

0xc29c,	// (0x00044add) slider_set_pane_cp3

0xc2a5,	// (0x00044ae6) volume_small_pane_cp

0xc2ae,	// (0x00044aef) list_form_gen_pane

0xc2b7,	// (0x00044af8) scroll_pane_cp8

0x42d2,	// (0x0003cb13) form_field_data_pane_ParamLimits

0x42d2,	// (0x0003cb13) form_field_data_pane

0x42e9,	// (0x0003cb2a) form_field_data_wide_pane_ParamLimits

0x42e9,	// (0x0003cb2a) form_field_data_wide_pane

0x4309,	// (0x0003cb4a) form_field_popup_pane_ParamLimits

0x4309,	// (0x0003cb4a) form_field_popup_pane

0x4321,	// (0x0003cb62) form_field_popup_wide_pane_ParamLimits

0x4321,	// (0x0003cb62) form_field_popup_wide_pane

0xefbb,	// (0x000477fc) form_field_slider_pane_ParamLimits

0xefbb,	// (0x000477fc) form_field_slider_pane

0xefce,	// (0x0004780f) form_field_slider_wide_pane_ParamLimits

0xefce,	// (0x0004780f) form_field_slider_wide_pane

0xc2c8,	// (0x00044b09) data_form_pane

0x4348,	// (0x0003cb89) form_field_data_pane_t1

0xc2d4,	// (0x00044b15) input_focus_pane

0xc2e2,	// (0x00044b23) data_form_wide_pane

0xefed,	// (0x0004782e) form_field_data_wide_pane_t1

0xc043,	// (0x00044884) input_focus_pane_cp6

0x4362,	// (0x0003cba3) form_field_popup_pane_t1

0xc2d4,	// (0x00044b15) input_focus_pane_cp7

0xc302,	// (0x00044b43) list_form_pane

0xf017,	// (0x00047858) form_field_popup_wide_pane_t1

0xc2d4,	// (0x00044b15) input_focus_pane_cp8

0xc30e,	// (0x00044b4f) list_form_wide_pane

0x4384,	// (0x0003cbc5) form_field_slider_pane_t1_ParamLimits

0x4384,	// (0x0003cbc5) form_field_slider_pane_t1

0x439c,	// (0x0003cbdd) form_field_slider_pane_t2_ParamLimits

0x439c,	// (0x0003cbdd) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x00047f0c) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x00047f0c) form_field_slider_pane_t

0x8a4a,	// (0x0004128b) input_focus_pane_cp9_ParamLimits

0x8a4a,	// (0x0004128b) input_focus_pane_cp9

0x43b1,	// (0x0003cbf2) slider_cont_pane_ParamLimits

0x43b1,	// (0x0003cbf2) slider_cont_pane

0xc31d,	// (0x00044b5e) form_field_slider_wide_pane_t1_ParamLimits

0xc31d,	// (0x00044b5e) form_field_slider_wide_pane_t1

0xf02c,	// (0x0004786d) form_field_slider_wide_pane_t2_ParamLimits

0xf02c,	// (0x0004786d) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x00047f11) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x00047f11) form_field_slider_wide_pane_t

0x8a4a,	// (0x0004128b) input_focus_pane_cp10_ParamLimits

0x8a4a,	// (0x0004128b) input_focus_pane_cp10

0x43c5,	// (0x0003cc06) slider_cont_pane_cp1_ParamLimits

0x43c5,	// (0x0003cc06) slider_cont_pane_cp1

0x43d9,	// (0x0003cc1a) slider_form_pane_cp

0xc32f,	// (0x00044b70) input_focus_pane_g1

0xc337,	// (0x00044b78) input_focus_pane_g2

0xc33f,	// (0x00044b80) input_focus_pane_g3

0xc347,	// (0x00044b88) input_focus_pane_g4

0xc34f,	// (0x00044b90) input_focus_pane_g5

0xc357,	// (0x00044b98) input_focus_pane_g6

0xc35f,	// (0x00044ba0) input_focus_pane_g7

0xc367,	// (0x00044ba8) input_focus_pane_g8

0xc36f,	// (0x00044bb0) input_focus_pane_g9

0x8790,	// (0x00040fd1) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x00047f16) input_focus_pane_g

0xd76c,	// (0x00045fad) wait_border_pane_g3_copy1

0x43e1,	// (0x0003cc22) data_form_pane_t1

0x8790,	// (0x00040fd1) wait_anim_pane_g1_copy1

0x44dc,	// (0x0003cd1d) data_form_wide_pane_t1

0x43fb,	// (0x0003cc3c) list_form_graphic_pane_cp_ParamLimits

0x43fb,	// (0x0003cc3c) list_form_graphic_pane_cp

0xe36f,	// (0x00046bb0) slider_form_pane_g1

0xe378,	// (0x00046bb9) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x00048209) slider_form_pane_g

0x43fb,	// (0x0003cc3c) list_form_graphic_pane_ParamLimits

0x43fb,	// (0x0003cc3c) list_form_graphic_pane

0xf03e,	// (0x0004787f) list_form_graphic_pane_g1

0xf046,	// (0x00047887) list_form_graphic_pane_t1_ParamLimits

0xf046,	// (0x00047887) list_form_graphic_pane_t1

0x8a8c,	// (0x000412cd) list_highlight_pane_cp5_ParamLimits

0x8a8c,	// (0x000412cd) list_highlight_pane_cp5

0x440e,	// (0x0003cc4f) find_pane_g1

0xc377,	// (0x00044bb8) input_find_pane

0x4417,	// (0x0003cc58) input_find_pane_g1_ParamLimits

0x4417,	// (0x0003cc58) input_find_pane_g1

0x4423,	// (0x0003cc64) input_find_pane_t1_ParamLimits

0x4423,	// (0x0003cc64) input_find_pane_t1

0x4438,	// (0x0003cc79) input_find_pane_t2_ParamLimits

0x4438,	// (0x0003cc79) input_find_pane_t2

0x0001,

0xf6ea,	// (0x00047f2b) input_find_pane_t_ParamLimits

0xf6ea,	// (0x00047f2b) input_find_pane_t

0xc380,	// (0x00044bc1) input_focus_pane_cp5_ParamLimits

0xc380,	// (0x00044bc1) input_focus_pane_cp5

0x8f6b,	// (0x000417ac) bg_popup_window_pane_cp2_ParamLimits

0x8f6b,	// (0x000417ac) bg_popup_window_pane_cp2

0x8f78,	// (0x000417b9) listscroll_menu_pane_ParamLimits

0x8f78,	// (0x000417b9) listscroll_menu_pane

0x8f84,	// (0x000417c5) popup_submenu_window_ParamLimits

0x8f84,	// (0x000417c5) popup_submenu_window

0xc38e,	// (0x00044bcf) find_popup_pane_g1

0xc396,	// (0x00044bd7) input_popup_find_pane_cp

0xc380,	// (0x00044bc1) input_focus_pane_cp4_ParamLimits

0xc380,	// (0x00044bc1) input_focus_pane_cp4

0xc3a0,	// (0x00044be1) input_popup_find_pane_t1_ParamLimits

0xc3a0,	// (0x00044be1) input_popup_find_pane_t1

0x8880,	// (0x000410c1) bg_popup_sub_pane_cp

0xc3ce,	// (0x00044c0f) listscroll_popup_sub_pane

0xc3d6,	// (0x00044c17) list_submenu_pane_ParamLimits

0xc3d6,	// (0x00044c17) list_submenu_pane

0xc3e7,	// (0x00044c28) scroll_pane_cp4

0xc3ef,	// (0x00044c30) list_single_popup_submenu_pane_ParamLimits

0xc3ef,	// (0x00044c30) list_single_popup_submenu_pane

0xc402,	// (0x00044c43) list_single_popup_submenu_pane_g1

0xc40a,	// (0x00044c4b) list_single_popup_submenu_pane_t1_ParamLimits

0xc40a,	// (0x00044c4b) list_single_popup_submenu_pane_t1

0x8a4a,	// (0x0004128b) bg_active_tab_pane_cp1_ParamLimits

0x8a4a,	// (0x0004128b) bg_active_tab_pane_cp1

0x8fb6,	// (0x000417f7) tabs_2_active_pane_g1

0x8fbe,	// (0x000417ff) tabs_2_active_pane_t1

0x8a4a,	// (0x0004128b) bg_passive_tab_pane_cp1_ParamLimits

0x8a4a,	// (0x0004128b) bg_passive_tab_pane_cp1

0x8fb6,	// (0x000417f7) tabs_2_passive_pane_g1

0x8fbe,	// (0x000417ff) tabs_2_passive_pane_t1

0x8a8c,	// (0x000412cd) bg_active_tab_pane_cp4

0x8fd0,	// (0x00041811) tabs_2_long_active_pane_t1

0xc41f,	// (0x00044c60) bg_passive_tab_pane_cp4

0x64f4,	// (0x0003ed35) list_single_midp_graphic_pane_g4_ParamLimits

0x8a8c,	// (0x000412cd) bg_active_tab_pane_cp5

0x8fe3,	// (0x00041824) tabs_3_long_active_pane_t1

0xc41f,	// (0x00044c60) bg_passive_tab_pane_cp5

0x64f4,	// (0x0003ed35) list_single_midp_graphic_pane_g4

0x8a8c,	// (0x000412cd) bg_popup_window_pane_cp13_ParamLimits

0x8a8c,	// (0x000412cd) bg_popup_window_pane_cp13

0xc434,	// (0x00044c75) listscroll_popup_fast_pane_ParamLimits

0xc434,	// (0x00044c75) listscroll_popup_fast_pane

0xc443,	// (0x00044c84) grid_popup_fast_pane_ParamLimits

0xc443,	// (0x00044c84) grid_popup_fast_pane

0xc455,	// (0x00044c96) scroll_pane_cp9_ParamLimits

0xc455,	// (0x00044c96) scroll_pane_cp9

0x12c8,	// (0x00039b09) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x12c8,	// (0x00039b09) list_single_graphic_hl_pane_t1_cp2

0xc479,	// (0x00044cba) input_focus_pane_cp20_ParamLimits

0xc479,	// (0x00044cba) input_focus_pane_cp20

0xc487,	// (0x00044cc8) query_popup_data_pane_t1_ParamLimits

0xc487,	// (0x00044cc8) query_popup_data_pane_t1

0xc49a,	// (0x00044cdb) query_popup_data_pane_t2_ParamLimits

0xc49a,	// (0x00044cdb) query_popup_data_pane_t2

0xc4e0,	// (0x00044d21) query_popup_data_pane_t3_ParamLimits

0xc4e0,	// (0x00044d21) query_popup_data_pane_t3

0xc521,	// (0x00044d62) query_popup_data_pane_t4_ParamLimits

0xc521,	// (0x00044d62) query_popup_data_pane_t4

0xc55d,	// (0x00044d9e) query_popup_data_pane_t5_ParamLimits

0xc55d,	// (0x00044d9e) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x00047f30) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x00047f30) query_popup_data_pane_t

0xc32f,	// (0x00044b70) bg_set_opt_pane_g1

0xc337,	// (0x00044b78) bg_set_opt_pane_g2

0xc33f,	// (0x00044b80) bg_set_opt_pane_g3

0xc347,	// (0x00044b88) bg_set_opt_pane_g4

0xc34f,	// (0x00044b90) bg_set_opt_pane_g5

0xc357,	// (0x00044b98) bg_set_opt_pane_g6

0xc35f,	// (0x00044ba0) bg_set_opt_pane_g7

0xc367,	// (0x00044ba8) bg_set_opt_pane_g8

0xc36f,	// (0x00044bb0) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x00047f3b) bg_set_opt_pane_g

0x6163,	// (0x0003e9a4) control_top_pane_stacon_ParamLimits

0x6163,	// (0x0003e9a4) control_top_pane_stacon

0x61b6,	// (0x0003e9f7) signal_pane_stacon_ParamLimits

0x61b6,	// (0x0003e9f7) signal_pane_stacon

0xc9bc,	// (0x000451fd) stacon_top_pane_g1_ParamLimits

0xc9bc,	// (0x000451fd) stacon_top_pane_g1

0x61db,	// (0x0003ea1c) title_pane_stacon_ParamLimits

0x61db,	// (0x0003ea1c) title_pane_stacon

0x6205,	// (0x0003ea46) uni_indicator_pane_stacon_ParamLimits

0x6205,	// (0x0003ea46) uni_indicator_pane_stacon

0x621a,	// (0x0003ea5b) battery_pane_stacon_ParamLimits

0x621a,	// (0x0003ea5b) battery_pane_stacon

0x625e,	// (0x0003ea9f) control_bottom_pane_stacon_ParamLimits

0x625e,	// (0x0003ea9f) control_bottom_pane_stacon

0x6281,	// (0x0003eac2) navi_pane_stacon_ParamLimits

0x6281,	// (0x0003eac2) navi_pane_stacon

0xc9de,	// (0x0004521f) stacon_bottom_pane_g1_ParamLimits

0xc9de,	// (0x0004521f) stacon_bottom_pane_g1

0x5ec4,	// (0x0003e705) aid_levels_signal_lsc_ParamLimits

0x5ec4,	// (0x0003e705) aid_levels_signal_lsc

0x5edb,	// (0x0003e71c) signal_pane_stacon_g1_ParamLimits

0x5edb,	// (0x0003e71c) signal_pane_stacon_g1

0x5eef,	// (0x0003e730) signal_pane_stacon_g2_ParamLimits

0x5eef,	// (0x0003e730) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x00047f4e) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x00047f4e) signal_pane_stacon_g

0x5f24,	// (0x0003e765) title_pane_stacon_t1_ParamLimits

0x5f24,	// (0x0003e765) title_pane_stacon_t1

0xc5a1,	// (0x00044de2) uni_indicator_pane_stacon_g1

0xc5ab,	// (0x00044dec) uni_indicator_pane_stacon_g2

0xc5b5,	// (0x00044df6) uni_indicator_pane_stacon_g3

0xc5bf,	// (0x00044e00) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x00047f5a) uni_indicator_pane_stacon_g

0x5f49,	// (0x0003e78a) control_top_pane_stacon_g1

0x5f51,	// (0x0003e792) control_top_pane_stacon_t1_ParamLimits

0x5f51,	// (0x0003e792) control_top_pane_stacon_t1

0x5f88,	// (0x0003e7c9) aid_levels_battery_lsc_ParamLimits

0x5f88,	// (0x0003e7c9) aid_levels_battery_lsc

0x5fa0,	// (0x0003e7e1) battery_pane_stacon_g1_ParamLimits

0x5fa0,	// (0x0003e7e1) battery_pane_stacon_g1

0x5fb3,	// (0x0003e7f4) battery_pane_stacon_g2_ParamLimits

0x5fb3,	// (0x0003e7f4) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x00047f63) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x00047f63) battery_pane_stacon_g

0x5ff1,	// (0x0003e832) navi_icon_pane_stacon

0x6005,	// (0x0003e846) navi_navi_pane_stacon

0x5ff1,	// (0x0003e832) navi_text_pane_stacon

0x5f49,	// (0x0003e78a) control_bottom_pane_stacon_g1

0x6019,	// (0x0003e85a) control_bottom_pane_stacon_t1_ParamLimits

0x6019,	// (0x0003e85a) control_bottom_pane_stacon_t1

0x8ff5,	// (0x00041836) grid_app_pane_ParamLimits

0x8ff5,	// (0x00041836) grid_app_pane

0x902b,	// (0x0004186c) scroll_pane_cp15_ParamLimits

0x902b,	// (0x0004186c) scroll_pane_cp15

0x9048,	// (0x00041889) cell_app_pane_ParamLimits

0x9048,	// (0x00041889) cell_app_pane

0x908f,	// (0x000418d0) cell_app_pane_g1_ParamLimits

0x908f,	// (0x000418d0) cell_app_pane_g1

0xc5e3,	// (0x00044e24) cell_app_pane_g2_ParamLimits

0xc5e3,	// (0x00044e24) cell_app_pane_g2

0x0001,

0xf727,	// (0x00047f68) cell_app_pane_g_ParamLimits

0xf727,	// (0x00047f68) cell_app_pane_g

0xc5ef,	// (0x00044e30) cell_app_pane_t1_ParamLimits

0xc5ef,	// (0x00044e30) cell_app_pane_t1

0xc601,	// (0x00044e42) grid_highlight_pane_ParamLimits

0xc601,	// (0x00044e42) grid_highlight_pane

0xc32f,	// (0x00044b70) cell_highlight_pane_g1

0xc337,	// (0x00044b78) cell_highlight_pane_g2

0xc33f,	// (0x00044b80) cell_highlight_pane_g3

0xc347,	// (0x00044b88) cell_highlight_pane_g4

0xc34f,	// (0x00044b90) cell_highlight_pane_g5

0xc357,	// (0x00044b98) cell_highlight_pane_g6

0xc35f,	// (0x00044ba0) cell_highlight_pane_g7

0xc367,	// (0x00044ba8) cell_highlight_pane_g8

0xc36f,	// (0x00044bb0) cell_highlight_pane_g9

0x8790,	// (0x00040fd1) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x00047f16) cell_highlight_pane_g

0xc612,	// (0x00044e53) bg_scroll_pane

0x6063,	// (0x0003e8a4) scroll_handle_pane

0xc659,	// (0x00044e9a) scroll_bg_pane_g1

0xc66e,	// (0x00044eaf) scroll_bg_pane_g2

0xc686,	// (0x00044ec7) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x00047f6d) scroll_bg_pane_g

0xc69b,	// (0x00044edc) scroll_handle_focus_pane_ParamLimits

0xc69b,	// (0x00044edc) scroll_handle_focus_pane

0xc659,	// (0x00044e9a) scroll_handle_pane_g1

0xc6a8,	// (0x00044ee9) scroll_handle_pane_g2

0xc686,	// (0x00044ec7) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x00047f74) scroll_handle_pane_g

0xc380,	// (0x00044bc1) bg_popup_sub_pane_cp21_ParamLimits

0xc380,	// (0x00044bc1) bg_popup_sub_pane_cp21

0xc6bc,	// (0x00044efd) popup_fep_japan_predictive_window_t1_ParamLimits

0xc6bc,	// (0x00044efd) popup_fep_japan_predictive_window_t1

0xc6d3,	// (0x00044f14) popup_fep_japan_predictive_window_t2_ParamLimits

0xc6d3,	// (0x00044f14) popup_fep_japan_predictive_window_t2

0xc706,	// (0x00044f47) popup_fep_japan_predictive_window_t3_ParamLimits

0xc706,	// (0x00044f47) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x00047f7b) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x00047f7b) popup_fep_japan_predictive_window_t

0x8880,	// (0x000410c1) bg_popup_sub_pane_cp23

0xc73d,	// (0x00044f7e) listscroll_japin_cand_pane

0xc745,	// (0x00044f86) popup_fep_japan_candidate_window_t1

0xc753,	// (0x00044f94) candidate_pane_ParamLimits

0xc753,	// (0x00044f94) candidate_pane

0xc765,	// (0x00044fa6) scroll_pane_cp30

0xc76d,	// (0x00044fae) list_single_popup_jap_candidate_pane_ParamLimits

0xc76d,	// (0x00044fae) list_single_popup_jap_candidate_pane

0x8880,	// (0x000410c1) list_highlight_pane_cp30

0xc781,	// (0x00044fc2) list_single_popup_jap_candidate_pane_t1

0xc790,	// (0x00044fd1) level_1_signal

0xc79d,	// (0x00044fde) level_2_signal

0xc7aa,	// (0x00044feb) level_3_signal

0xc7b7,	// (0x00044ff8) level_4_signal

0xc7c4,	// (0x00045005) level_5_signal

0xc7d1,	// (0x00045012) level_6_signal

0xc7de,	// (0x0004501f) level_7_signal

0xc790,	// (0x00044fd1) level_1_battery

0xc79d,	// (0x00044fde) level_2_battery

0xc7aa,	// (0x00044feb) level_3_battery

0xc7b7,	// (0x00044ff8) level_4_battery

0xc7c4,	// (0x00045005) level_5_battery

0xc7d1,	// (0x00045012) level_6_battery

0xc7de,	// (0x0004501f) level_7_battery

0xc803,	// (0x00045044) list_menu_pane_ParamLimits

0xc803,	// (0x00045044) list_menu_pane

0xc814,	// (0x00045055) scroll_pane_cp25_ParamLimits

0xc814,	// (0x00045055) scroll_pane_cp25

0xc82d,	// (0x0004506e) list_double2_graphic_pane_cp2_ParamLimits

0xc82d,	// (0x0004506e) list_double2_graphic_pane_cp2

0xc82d,	// (0x0004506e) list_double2_large_graphic_pane_cp2_ParamLimits

0xc82d,	// (0x0004506e) list_double2_large_graphic_pane_cp2

0xc82d,	// (0x0004506e) list_double2_pane_cp2_ParamLimits

0xc82d,	// (0x0004506e) list_double2_pane_cp2

0xc82d,	// (0x0004506e) list_double_graphic_pane_cp2_ParamLimits

0xc82d,	// (0x0004506e) list_double_graphic_pane_cp2

0xc82d,	// (0x0004506e) list_double_large_graphic_pane_cp2_ParamLimits

0xc82d,	// (0x0004506e) list_double_large_graphic_pane_cp2

0xc82d,	// (0x0004506e) list_double_number_pane_cp2_ParamLimits

0xc82d,	// (0x0004506e) list_double_number_pane_cp2

0xc82d,	// (0x0004506e) list_double_pane_cp2_ParamLimits

0xc82d,	// (0x0004506e) list_double_pane_cp2

0x90cd,	// (0x0004190e) list_single_2graphic_pane_cp2_ParamLimits

0x90cd,	// (0x0004190e) list_single_2graphic_pane_cp2

0x90cd,	// (0x0004190e) list_single_graphic_heading_pane_cp2_ParamLimits

0x90cd,	// (0x0004190e) list_single_graphic_heading_pane_cp2

0x90cd,	// (0x0004190e) list_single_graphic_pane_cp2_ParamLimits

0x90cd,	// (0x0004190e) list_single_graphic_pane_cp2

0x90cd,	// (0x0004190e) list_single_heading_pane_cp2_ParamLimits

0x90cd,	// (0x0004190e) list_single_heading_pane_cp2

0xc83d,	// (0x0004507e) list_single_large_graphic_pane_cp2_ParamLimits

0xc83d,	// (0x0004507e) list_single_large_graphic_pane_cp2

0x90cd,	// (0x0004190e) list_single_number_heading_pane_cp2_ParamLimits

0x90cd,	// (0x0004190e) list_single_number_heading_pane_cp2

0x90cd,	// (0x0004190e) list_single_number_pane_cp2_ParamLimits

0x90cd,	// (0x0004190e) list_single_number_pane_cp2

0x90cd,	// (0x0004190e) list_single_pane_cp2_ParamLimits

0x90cd,	// (0x0004190e) list_single_pane_cp2

0xc857,	// (0x00045098) bg_popup_sub_pane_cp22

0x6115,	// (0x0003e956) popup_side_volume_key_window_g1

0x613f,	// (0x0003e980) popup_side_volume_key_window_t1

0x615b,	// (0x0003e99c) volume_small_pane_cp1

0x8a4a,	// (0x0004128b) bg_popup_sub_pane_cp24_ParamLimits

0x8a4a,	// (0x0004128b) bg_popup_sub_pane_cp24

0xc86d,	// (0x000450ae) fep_china_uni_candidate_pane_ParamLimits

0xc86d,	// (0x000450ae) fep_china_uni_candidate_pane

0xc881,	// (0x000450c2) fep_china_uni_entry_pane

0xc891,	// (0x000450d2) popup_fep_china_uni_window_g1

0xc8ad,	// (0x000450ee) fep_china_uni_entry_pane_g1

0xc8b5,	// (0x000450f6) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x00047fa8) fep_china_uni_entry_pane_g

0xc8bd,	// (0x000450fe) fep_entry_item_pane

0xc8c7,	// (0x00045108) fep_candidate_item_pane

0xc8cf,	// (0x00045110) fep_china_uni_candidate_pane_g1

0xc8d7,	// (0x00045118) fep_china_uni_candidate_pane_g2

0xc8df,	// (0x00045120) fep_china_uni_candidate_pane_g3

0xc8e7,	// (0x00045128) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x00047fad) fep_china_uni_candidate_pane_g

0x8790,	// (0x00040fd1) fep_entry_item_pane_g1

0xc8ef,	// (0x00045130) fep_entry_item_pane_t1_ParamLimits

0xc8ef,	// (0x00045130) fep_entry_item_pane_t1

0xc905,	// (0x00045146) fep_candidate_item_pane_t1_ParamLimits

0xc905,	// (0x00045146) fep_candidate_item_pane_t1

0xc91a,	// (0x0004515b) fep_candidate_item_pane_t2_ParamLimits

0xc91a,	// (0x0004515b) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x00047fb6) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x00047fb6) fep_candidate_item_pane_t

0x8a8c,	// (0x000412cd) list_highlight_pane_cp31_ParamLimits

0x8a8c,	// (0x000412cd) list_highlight_pane_cp31

0xc92c,	// (0x0004516d) level_1_signal_lsc

0xc935,	// (0x00045176) level_2_signal_lsc

0xc93e,	// (0x0004517f) level_3_signal_lsc

0xc947,	// (0x00045188) level_4_signal_lsc

0xc950,	// (0x00045191) level_5_signal_lsc

0xc959,	// (0x0004519a) level_6_signal_lsc

0xc962,	// (0x000451a3) level_7_signal_lsc

0xc962,	// (0x000451a3) level_1_battery_lsc

0xc96b,	// (0x000451ac) level_2_battery_lsc

0xc974,	// (0x000451b5) level_3_battery_lsc

0xc97d,	// (0x000451be) level_4_battery_lsc

0xc986,	// (0x000451c7) level_5_battery_lsc

0xc98f,	// (0x000451d0) level_6_battery_lsc

0xc92c,	// (0x0004516d) level_7_battery_lsc

0xc998,	// (0x000451d9) scroll_handle_focus_pane_g1

0xc9a1,	// (0x000451e2) scroll_handle_focus_pane_g2

0xc9aa,	// (0x000451eb) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x00047fbb) scroll_handle_focus_pane_g

0x444d,	// (0x0003cc8e) list_single_2graphic_pane_g1_ParamLimits

0x444d,	// (0x0003cc8e) list_single_2graphic_pane_g1

0x47de,	// (0x0003d01f) list_single_2graphic_pane_g2_ParamLimits

0x47de,	// (0x0003d01f) list_single_2graphic_pane_g2

0xeec6,	// (0x00047707) list_single_2graphic_pane_g3_ParamLimits

0xeec6,	// (0x00047707) list_single_2graphic_pane_g3

0x4850,	// (0x0003d091) list_single_2graphic_pane_g4_ParamLimits

0x4850,	// (0x0003d091) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x00047fc2) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x00047fc2) list_single_2graphic_pane_g

0x4459,	// (0x0003cc9a) list_single_2graphic_pane_t1_ParamLimits

0x4459,	// (0x0003cc9a) list_single_2graphic_pane_t1

0x485c,	// (0x0003d09d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x485c,	// (0x0003d09d) list_double2_graphic_large_graphic_pane_g1

0x4836,	// (0x0003d077) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4836,	// (0x0003d077) list_double2_graphic_large_graphic_pane_g2

0x481e,	// (0x0003d05f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x481e,	// (0x0003d05f) list_double2_graphic_large_graphic_pane_g3

0x486e,	// (0x0003d0af) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x486e,	// (0x0003d0af) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x00047fcb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x00047fcb) list_double2_graphic_large_graphic_pane_g

0x4487,	// (0x0003ccc8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4487,	// (0x0003ccc8) list_double2_graphic_large_graphic_pane_t1

0x449d,	// (0x0003ccde) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x449d,	// (0x0003ccde) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x00047fd4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x00047fd4) list_double2_graphic_large_graphic_pane_t

0xca8b,	// (0x000452cc) popup_fast_swap_window_ParamLimits

0xca8b,	// (0x000452cc) popup_fast_swap_window

0xcaa7,	// (0x000452e8) popup_side_volume_key_window

0xcac1,	// (0x00045302) stacon_top_pane

0xcacb,	// (0x0004530c) status_pane_ParamLimits

0xcacb,	// (0x0004530c) status_pane

0xcac1,	// (0x00045302) status_small_pane

0x8880,	// (0x000410c1) control_pane

0x8880,	// (0x000410c1) stacon_bottom_pane

0xc2b7,	// (0x00044af8) scroll_pane_cp121

0xc2ae,	// (0x00044aef) set_content_pane

0x912f,	// (0x00041970) bg_active_tab_pane_g1_cp1

0xc9b3,	// (0x000451f4) bg_active_tab_pane_g2_cp1

0x9138,	// (0x00041979) bg_active_tab_pane_g3_cp1

0x912f,	// (0x00041970) bg_passive_tab_pane_g1_cp1

0xc9b3,	// (0x000451f4) bg_passive_tab_pane_g2_cp1

0x9138,	// (0x00041979) bg_passive_tab_pane_g3_cp1

0x9141,	// (0x00041982) bg_active_tab_pane_g1_cp2

0xc9b3,	// (0x000451f4) bg_active_tab_pane_g2_cp2

0x914a,	// (0x0004198b) bg_active_tab_pane_g3_cp2

0x9141,	// (0x00041982) bg_passive_tab_pane_g1_cp2

0xc9b3,	// (0x000451f4) bg_passive_tab_pane_g2_cp2

0x914a,	// (0x0004198b) bg_passive_tab_pane_g3_cp2

0x9153,	// (0x00041994) bg_active_tab_pane_g1_cp3

0xc9b3,	// (0x000451f4) bg_active_tab_pane_g2_cp3

0x915c,	// (0x0004199d) bg_active_tab_pane_g3_cp3

0x9153,	// (0x00041994) bg_passive_tab_pane_g1_cp3

0xc9b3,	// (0x000451f4) bg_passive_tab_pane_g2_cp3

0x915c,	// (0x0004199d) bg_passive_tab_pane_g3_cp3

0x9165,	// (0x000419a6) bg_active_tab_pane_g1_cp4

0xc9b3,	// (0x000451f4) bg_active_tab_pane_g2_cp4

0x916e,	// (0x000419af) bg_active_tab_pane_g3_cp4

0x9165,	// (0x000419a6) bg_passive_tab_pane_g1_cp4

0xc9b3,	// (0x000451f4) bg_passive_tab_pane_g2_cp4

0x916e,	// (0x000419af) bg_passive_tab_pane_g3_cp4

0xc9fa,	// (0x0004523b) bg_active_tab_pane_g1_cp5

0xc9b3,	// (0x000451f4) bg_active_tab_pane_g2_cp5

0xca03,	// (0x00045244) bg_active_tab_pane_g3_cp5

0xc9fa,	// (0x0004523b) bg_passive_tab_pane_g1_cp5

0xc9b3,	// (0x000451f4) bg_passive_tab_pane_g2_cp5

0xca03,	// (0x00045244) bg_passive_tab_pane_g3_cp5

0x3365,	// (0x0003bba6) list_set_graphic_pane_ParamLimits

0x3365,	// (0x0003bba6) list_set_graphic_pane

0x8880,	// (0x000410c1) bg_set_opt_pane_cp4

0xca0c,	// (0x0004524d) list_set_graphic_pane_g1_ParamLimits

0xca0c,	// (0x0004524d) list_set_graphic_pane_g1

0xca18,	// (0x00045259) list_set_graphic_pane_g2_ParamLimits

0xca18,	// (0x00045259) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x00047fd9) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x00047fd9) list_set_graphic_pane_g

0x0009,

0xfaf7,	// (0x00048338) volume_small_pane_cp_g

0xca3c,	// (0x0004527d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xca3c,	// (0x0004527d) list_double2_large_graphic_pane_g1_cp2

0xca4a,	// (0x0004528b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xca4a,	// (0x0004528b) list_double2_large_graphic_pane_g2_cp2

0xca5b,	// (0x0004529c) list_double2_large_graphic_pane_g3_cp2

0xca63,	// (0x000452a4) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xca63,	// (0x000452a4) list_double2_large_graphic_pane_t1_cp2

0xca79,	// (0x000452ba) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xca79,	// (0x000452ba) list_double2_large_graphic_pane_t2_cp2

0xe11f,	// (0x00046960) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe11f,	// (0x00046960) list_double_large_graphic_pane_g1_cp2

0xe132,	// (0x00046973) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe132,	// (0x00046973) list_double_large_graphic_pane_g2_cp2

0xcbe9,	// (0x0004542a) list_double_large_graphic_pane_g3_cp2

0xe143,	// (0x00046984) list_double_large_graphic_pane_g4_cp

0xe14b,	// (0x0004698c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe14b,	// (0x0004698c) list_double_large_graphic_pane_t1_cp2

0xe162,	// (0x000469a3) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe162,	// (0x000469a3) list_double_large_graphic_pane_t2_cp2

0xcad9,	// (0x0004531a) list_double2_graphic_pane_g1_cp2_ParamLimits

0xcad9,	// (0x0004531a) list_double2_graphic_pane_g1_cp2

0xcae7,	// (0x00045328) list_double2_graphic_pane_g2_cp2_ParamLimits

0xcae7,	// (0x00045328) list_double2_graphic_pane_g2_cp2

0xcaf8,	// (0x00045339) list_double2_graphic_pane_g3_cp2

0xcb02,	// (0x00045343) list_double2_graphic_pane_t1_cp2_ParamLimits

0xcb02,	// (0x00045343) list_double2_graphic_pane_t1_cp2

0xcb18,	// (0x00045359) list_double2_graphic_pane_t2_cp2_ParamLimits

0xcb18,	// (0x00045359) list_double2_graphic_pane_t2_cp2

0xcb2a,	// (0x0004536b) list_single_number_heading_pane_g1_cp2_ParamLimits

0xcb2a,	// (0x0004536b) list_single_number_heading_pane_g1_cp2

0xcb36,	// (0x00045377) list_single_number_heading_pane_g2_cp2

0xcb3e,	// (0x0004537f) list_single_number_heading_pane_t1_cp2_ParamLimits

0xcb3e,	// (0x0004537f) list_single_number_heading_pane_t1_cp2

0xcb54,	// (0x00045395) list_single_number_heading_pane_t2_cp2_ParamLimits

0xcb54,	// (0x00045395) list_single_number_heading_pane_t2_cp2

0xcb68,	// (0x000453a9) list_single_number_heading_pane_t3_cp2_ParamLimits

0xcb68,	// (0x000453a9) list_single_number_heading_pane_t3_cp2

0xcb2a,	// (0x0004536b) list_single_heading_pane_g1_cp2_ParamLimits

0xcb2a,	// (0x0004536b) list_single_heading_pane_g1_cp2

0xcb36,	// (0x00045377) list_single_heading_pane_g2_cp2

0xcb3e,	// (0x0004537f) list_single_heading_pane_t1_cp2_ParamLimits

0xcb3e,	// (0x0004537f) list_single_heading_pane_t1_cp2

0xdf27,	// (0x00046768) list_single_heading_pane_t2_cp2_ParamLimits

0xdf27,	// (0x00046768) list_single_heading_pane_t2_cp2

0xdec1,	// (0x00046702) list_double_graphic_pane_g1_cp2_ParamLimits

0xdec1,	// (0x00046702) list_double_graphic_pane_g1_cp2

0xdecd,	// (0x0004670e) list_double_graphic_pane_g2_cp2_ParamLimits

0xdecd,	// (0x0004670e) list_double_graphic_pane_g2_cp2

0xdedc,	// (0x0004671d) list_double_graphic_pane_g3_cp2

0xdee4,	// (0x00046725) list_double_graphic_pane_t1_cp2_ParamLimits

0xdee4,	// (0x00046725) list_double_graphic_pane_t1_cp2

0xdefa,	// (0x0004673b) list_double_graphic_pane_t2_cp2_ParamLimits

0xdefa,	// (0x0004673b) list_double_graphic_pane_t2_cp2

0xcbdd,	// (0x0004541e) list_double_number_pane_g1_cp2_ParamLimits

0xcbdd,	// (0x0004541e) list_double_number_pane_g1_cp2

0xcbe9,	// (0x0004542a) list_double_number_pane_g2_cp2

0xde85,	// (0x000466c6) list_double_number_pane_t1_cp2_ParamLimits

0xde85,	// (0x000466c6) list_double_number_pane_t1_cp2

0xde99,	// (0x000466da) list_double_number_pane_t2_cp2_ParamLimits

0xde99,	// (0x000466da) list_double_number_pane_t2_cp2

0xdeaf,	// (0x000466f0) list_double_number_pane_t3_cp2_ParamLimits

0xdeaf,	// (0x000466f0) list_double_number_pane_t3_cp2

0xddfc,	// (0x0004663d) list_single_graphic_pane_g1_cp2_ParamLimits

0xddfc,	// (0x0004663d) list_single_graphic_pane_g1_cp2

0xcc41,	// (0x00045482) list_single_graphic_pane_g2_cp2_ParamLimits

0xcc41,	// (0x00045482) list_single_graphic_pane_g2_cp2

0xcc4d,	// (0x0004548e) list_single_graphic_pane_g3_cp2

0xddd2,	// (0x00046613) list_single_graphic_pane_t1_cp2_ParamLimits

0xddd2,	// (0x00046613) list_single_graphic_pane_t1_cp2

0xcc41,	// (0x00045482) list_single_number_pane_g1_cp2_ParamLimits

0xcc41,	// (0x00045482) list_single_number_pane_g1_cp2

0xcc4d,	// (0x0004548e) list_single_number_pane_g2_cp2

0xddd2,	// (0x00046613) list_single_number_pane_t1_cp2_ParamLimits

0xddd2,	// (0x00046613) list_single_number_pane_t1_cp2

0xdde8,	// (0x00046629) list_single_number_pane_t2_cp2_ParamLimits

0xdde8,	// (0x00046629) list_single_number_pane_t2_cp2

0xca4a,	// (0x0004528b) list_double2_pane_g1_cp2_ParamLimits

0xca4a,	// (0x0004528b) list_double2_pane_g1_cp2

0xca5b,	// (0x0004529c) list_double2_pane_g2_cp2

0xcbb5,	// (0x000453f6) list_double2_pane_t1_cp2_ParamLimits

0xcbb5,	// (0x000453f6) list_double2_pane_t1_cp2

0xcbcb,	// (0x0004540c) list_double2_pane_t2_cp2_ParamLimits

0xcbcb,	// (0x0004540c) list_double2_pane_t2_cp2

0xcbdd,	// (0x0004541e) list_double_pane_g1_cp2_ParamLimits

0xcbdd,	// (0x0004541e) list_double_pane_g1_cp2

0xcbe9,	// (0x0004542a) list_double_pane_g2_cp2

0xcbf1,	// (0x00045432) list_double_pane_t1_cp2_ParamLimits

0xcbf1,	// (0x00045432) list_double_pane_t1_cp2

0xcc07,	// (0x00045448) list_double_pane_t2_cp2_ParamLimits

0xcc07,	// (0x00045448) list_double_pane_t2_cp2

0xcc31,	// (0x00045472) list_single_pane_cp2_g3

0xcc41,	// (0x00045482) list_single_pane_g1_cp2_ParamLimits

0xcc41,	// (0x00045482) list_single_pane_g1_cp2

0xcc4d,	// (0x0004548e) list_single_pane_g2_cp2

0xcc55,	// (0x00045496) list_single_pane_t1_cp2_ParamLimits

0xcc55,	// (0x00045496) list_single_pane_t1_cp2

0xcc6d,	// (0x000454ae) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xcc6d,	// (0x000454ae) list_single_large_graphic_pane_g1_cp2

0xcc7b,	// (0x000454bc) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcc7b,	// (0x000454bc) list_single_large_graphic_pane_g2_cp2

0xcc87,	// (0x000454c8) list_single_large_graphic_pane_g3_cp2

0xcc8f,	// (0x000454d0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xcc8f,	// (0x000454d0) list_single_large_graphic_pane_g4_cp1

0xcca9,	// (0x000454ea) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcca9,	// (0x000454ea) list_single_large_graphic_pane_t1_cp2

0xdd9c,	// (0x000465dd) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xdd9c,	// (0x000465dd) list_single_graphic_heading_pane_g1_cp2

0xdd69,	// (0x000465aa) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xdd69,	// (0x000465aa) list_single_graphic_heading_pane_g4_cp2

0xcc4d,	// (0x0004548e) list_single_graphic_heading_pane_g5_cp2

0xdda8,	// (0x000465e9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xdda8,	// (0x000465e9) list_single_graphic_heading_pane_t1_cp2

0xddbe,	// (0x000465ff) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xddbe,	// (0x000465ff) list_single_graphic_heading_pane_t2_cp2

0xdd5d,	// (0x0004659e) list_single_2graphic_pane_g1_cp2_ParamLimits

0xdd5d,	// (0x0004659e) list_single_2graphic_pane_g1_cp2

0xdd69,	// (0x000465aa) list_single_2graphic_pane_g2_cp2_ParamLimits

0xdd69,	// (0x000465aa) list_single_2graphic_pane_g2_cp2

0xcc4d,	// (0x0004548e) list_single_2graphic_pane_g3_cp2

0xdd7a,	// (0x000465bb) list_single_2graphic_pane_g4_cp2_ParamLimits

0xdd7a,	// (0x000465bb) list_single_2graphic_pane_g4_cp2

0xdd86,	// (0x000465c7) list_single_2graphic_pane_t1_cp2_ParamLimits

0xdd86,	// (0x000465c7) list_single_2graphic_pane_t1_cp2

0x8790,	// (0x00040fd1) list_highlight_pane_g10_cp1

0xd963,	// (0x000461a4) list_highlight_pane_g1_cp1

0xd96b,	// (0x000461ac) list_highlight_pane_g2_cp1

0xd973,	// (0x000461b4) list_highlight_pane_g3_cp1

0xd97b,	// (0x000461bc) list_highlight_pane_g4_cp1

0xd983,	// (0x000461c4) list_highlight_pane_g5_cp1

0xd98b,	// (0x000461cc) list_highlight_pane_g6_cp1

0xd993,	// (0x000461d4) list_highlight_pane_g7_cp1

0xd99b,	// (0x000461dc) list_highlight_pane_g8_cp1

0xd9a3,	// (0x000461e4) list_highlight_pane_g9_cp1

0x9f64,	// (0x000427a5) form_field_slider_pane_t3

0x9f74,	// (0x000427b5) form_field_slider_pane_t4

0xd897,	// (0x000460d8) slider_form_pane_ParamLimits

0xd897,	// (0x000460d8) slider_form_pane

0x8880,	// (0x000410c1) control_abbreviations

0x8880,	// (0x000410c1) control_conventions

0x8880,	// (0x000410c1) control_definitions

0x8880,	// (0x000410c1) format_table_attribute

0xdf73,	// (0x000467b4) bg_popup_preview_window_pane_g9

0x8880,	// (0x000410c1) format_table_data2

0x8880,	// (0x000410c1) format_table_data3

0x8880,	// (0x000410c1) format_table_data_example

0x0008,

0x8880,	// (0x000410c1) intro_purpose

0xf928,	// (0x00048169) bg_popup_preview_window_pane_g

0x8880,	// (0x000410c1) texts_category

0x8880,	// (0x000410c1) texts_graphics

0xccbf,	// (0x00045500) text_digital

0xccce,	// (0x0004550f) text_primary

0xccdd,	// (0x0004551e) text_primary_small

0xccec,	// (0x0004552d) text_secondary

0xccfb,	// (0x0004553c) text_title

0xe3fd,	// (0x00046c3e) bg_passive_tab_pane_g1_cp3_srt

0xc9b3,	// (0x000451f4) bg_passive_tab_pane_g2_cp3_srt

0xe406,	// (0x00046c47) bg_passive_tab_pane_g3_cp3_srt

0x8a4a,	// (0x0004128b) bg_active_tab_pane_cp3_srt_ParamLimits

0x8a4a,	// (0x0004128b) bg_active_tab_pane_cp3_srt

0xe40f,	// (0x00046c50) tabs_4_active_pane_srt_g1

0xa46e,	// (0x00042caf) tabs_4_active_pane_srt_t1_ParamLimits

0xa46e,	// (0x00042caf) tabs_4_active_pane_srt_t1

0xe3fd,	// (0x00046c3e) bg_active_tab_pane_g1_cp3_copy1

0xc9b3,	// (0x000451f4) bg_active_tab_pane_g2_cp3_copy1

0xe406,	// (0x00046c47) bg_active_tab_pane_g3_cp3_copy1

0x8a8c,	// (0x000412cd) tabs_2_long_active_pane_srt_ParamLimits

0x8a8c,	// (0x000412cd) tabs_2_long_active_pane_srt

0x8a8c,	// (0x000412cd) tabs_2_long_passive_pane_srt_ParamLimits

0x8a8c,	// (0x000412cd) tabs_2_long_passive_pane_srt

0xc41f,	// (0x00044c60) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc41f,	// (0x00044c60) bg_passive_tab_pane_cp4_srt

0xe328,	// (0x00046b69) bg_passive_tab_pane_g1_cp4_srt

0xc9b3,	// (0x000451f4) bg_passive_tab_pane_g2_cp4_srt

0xe331,	// (0x00046b72) bg_passive_tab_pane_g3_cp4_srt

0x8a8c,	// (0x000412cd) bg_active_tab_pane_cp4_srt_ParamLimits

0x8a8c,	// (0x000412cd) bg_active_tab_pane_cp4_srt

0xa28d,	// (0x00042ace) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa28d,	// (0x00042ace) tabs_2_long_active_pane_srt_t1

0xe328,	// (0x00046b69) bg_active_tab_pane_g1_cp4_srt

0xc9b3,	// (0x000451f4) bg_active_tab_pane_g2_cp4_srt

0xe331,	// (0x00046b72) bg_active_tab_pane_g3_cp4_srt

0x8a4a,	// (0x0004128b) tabs_3_long_active_pane_srt_ParamLimits

0x8a4a,	// (0x0004128b) tabs_3_long_active_pane_srt

0x8a4a,	// (0x0004128b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8a4a,	// (0x0004128b) tabs_3_long_passive_pane_cp_srt

0x8a4a,	// (0x0004128b) tabs_3_long_passive_pane_srt_ParamLimits

0x8a4a,	// (0x0004128b) tabs_3_long_passive_pane_srt

0xc41f,	// (0x00044c60) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc41f,	// (0x00044c60) bg_passive_tab_pane_cp5_srt

0xc9fa,	// (0x0004523b) bg_passive_tab_pane_g1_cp5_srt

0xc9b3,	// (0x000451f4) bg_passive_tab_pane_g2_cp5_srt

0xca03,	// (0x00045244) bg_passive_tab_pane_g3_cp5_srt

0x8a8c,	// (0x000412cd) bg_active_tab_pane_cp5_srt_ParamLimits

0x8a8c,	// (0x000412cd) bg_active_tab_pane_cp5_srt

0xa277,	// (0x00042ab8) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa277,	// (0x00042ab8) tabs_3_long_active_pane_srt_t1

0xc9fa,	// (0x0004523b) bg_active_tab_pane_g1_cp5_srt

0xc9b3,	// (0x000451f4) bg_active_tab_pane_g2_cp5_srt

0xca03,	// (0x00045244) bg_active_tab_pane_g3_cp5_srt

0xe31a,	// (0x00046b5b) navi_text_pane_srt_t1

0xe312,	// (0x00046b53) navi_icon_pane_srt_g1

0xcdf9,	// (0x0004563a) midp_editing_number_pane_srt

0xcd0a,	// (0x0004554b) midp_ticker_pane_srt

0xce01,	// (0x00045642) midp_ticker_pane_srt_g1

0xce09,	// (0x0004564a) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x00047ff8) midp_ticker_pane_srt_g

0xce11,	// (0x00045652) midp_ticker_pane_srt_t1

0xe303,	// (0x00046b44) midp_editing_number_pane_t1_copy1

0x9177,	// (0x000419b8) listscroll_midp_pane

0x9177,	// (0x000419b8) midp_form_pane

0xcd12,	// (0x00045553) midp_info_popup_window_ParamLimits

0xcd12,	// (0x00045553) midp_info_popup_window

0xc380,	// (0x00044bc1) bg_popup_sub_pane_cp50_ParamLimits

0xc380,	// (0x00044bc1) bg_popup_sub_pane_cp50

0xd5e5,	// (0x00045e26) listscroll_midp_info_pane_ParamLimits

0xd5e5,	// (0x00045e26) listscroll_midp_info_pane

0xd5cd,	// (0x00045e0e) listscroll_form_midp_pane_ParamLimits

0xd5cd,	// (0x00045e0e) listscroll_form_midp_pane

0xd5d9,	// (0x00045e1a) scroll_bar_cp050

0x9f58,	// (0x00042799) list_midp_pane

0xecad,	// (0x000474ee) signal_pane_g2_cp

0xd4f3,	// (0x00045d34) listscroll_midp_info_pane_t1_ParamLimits

0xd4f3,	// (0x00045d34) listscroll_midp_info_pane_t1

0xd50b,	// (0x00045d4c) listscroll_midp_info_pane_t2_ParamLimits

0xd50b,	// (0x00045d4c) listscroll_midp_info_pane_t2

0xd549,	// (0x00045d8a) listscroll_midp_info_pane_t3_ParamLimits

0xd549,	// (0x00045d8a) listscroll_midp_info_pane_t3

0xd583,	// (0x00045dc4) listscroll_midp_info_pane_t4_ParamLimits

0xd583,	// (0x00045dc4) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x000480a4) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x000480a4) listscroll_midp_info_pane_t

0xc3e7,	// (0x00044c28) scroll_pane_cp21

0xd497,	// (0x00045cd8) form_midp_field_choice_group_pane

0xd4a0,	// (0x00045ce1) form_midp_field_text_pane

0xd4d9,	// (0x00045d1a) form_midp_field_time_pane

0xd4e1,	// (0x00045d22) form_midp_gauge_slider_pane

0xd4ea,	// (0x00045d2b) form_midp_gauge_wait_pane

0x8880,	// (0x000410c1) form_midp_image_pane

0x44af,	// (0x0003ccf0) list_single_midp_pane_ParamLimits

0x44af,	// (0x0003ccf0) list_single_midp_pane

0x9f34,	// (0x00042775) form_midp_field_text_pane_t1

0xd33e,	// (0x00045b7f) input_focus_pane_cp050

0xd486,	// (0x00045cc7) list_midp_form_text_pane

0xd455,	// (0x00045c96) form_midp_field_choice_group_pane_t1

0xd463,	// (0x00045ca4) input_focus_pane_cp051

0xd477,	// (0x00045cb8) list_midp_choice_pane

0x8880,	// (0x000410c1) status_idle_pane

0xd439,	// (0x00045c7a) form_midp_field_time_pane_t1

0x8790,	// (0x00040fd1) wait_anim_pane_g2_copy1

0xd447,	// (0x00045c88) form_midp_field_time_pane_t2

0x0001,

0xcd6b,	// (0x000455ac) aid_navinavi_width_2_pane

0xf85e,	// (0x0004809f) form_midp_field_time_pane_t

0x8880,	// (0x000410c1) input_focus_pane_cp052

0x8880,	// (0x000410c1) bg_input_focus_pane_cp040

0xd415,	// (0x00045c56) form_midp_gauge_slider_pane_t1

0xd423,	// (0x00045c64) form_midp_gauge_slider_pane_t2

0x9f18,	// (0x00042759) form_midp_gauge_slider_pane_t3

0x9f26,	// (0x00042767) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x00048096) form_midp_gauge_slider_pane_t

0xd431,	// (0x00045c72) form_midp_slider_pane

0x8a8c,	// (0x000412cd) bg_input_focus_pane_cp041_ParamLimits

0x8a8c,	// (0x000412cd) bg_input_focus_pane_cp041

0xd3e2,	// (0x00045c23) form_midp_gauge_wait_pane_t1_ParamLimits

0xd3e2,	// (0x00045c23) form_midp_gauge_wait_pane_t1

0xd3f4,	// (0x00045c35) form_midp_gauge_wait_pane_t2_ParamLimits

0xd3f4,	// (0x00045c35) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x00048091) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x00048091) form_midp_gauge_wait_pane_t

0xd406,	// (0x00045c47) form_midp_wait_pane_ParamLimits

0xd406,	// (0x00045c47) form_midp_wait_pane

0xd3ac,	// (0x00045bed) form_midp_image_pane_g1

0xd3b5,	// (0x00045bf6) form_midp_image_pane_t1

0xd3c4,	// (0x00045c05) form_midp_image_pane_t2

0xd3d3,	// (0x00045c14) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0004808a) form_midp_image_pane_t

0xd3a3,	// (0x00045be4) list_single_midp_pane_g1

0xf0bf,	// (0x00047900) list_single_midp_pane_t1

0x9f01,	// (0x00042742) list_midp_form_item_pane_ParamLimits

0x9f01,	// (0x00042742) list_midp_form_item_pane

0xcd25,	// (0x00045566) list_midp_form_item_pane_t1

0xcd34,	// (0x00045575) midp_ticker_pane_g1

0xcd40,	// (0x00045581) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x00047fde) midp_ticker_pane_g

0x9223,	// (0x00041a64) midp_ticker_pane_t1

0xa3f6,	// (0x00042c37) midp_editing_number_pane_t1

0xe391,	// (0x00046bd2) midp_editing_number_pane

0xe3a0,	// (0x00046be1) midp_ticker_pane

0xe2f3,	// (0x00046b34) ai_message_heading_pane

0x8880,	// (0x000410c1) bg_popup_window_pane_cp14

0xe2fb,	// (0x00046b3c) listscroll_ai_message_pane

0xe27d,	// (0x00046abe) ai_message_heading_pane_g1_ParamLimits

0xe27d,	// (0x00046abe) ai_message_heading_pane_g1

0xe289,	// (0x00046aca) ai_message_heading_pane_g2_ParamLimits

0xe289,	// (0x00046aca) ai_message_heading_pane_g2

0xe295,	// (0x00046ad6) ai_message_heading_pane_g3_ParamLimits

0xe295,	// (0x00046ad6) ai_message_heading_pane_g3

0xe2a1,	// (0x00046ae2) ai_message_heading_pane_g4_ParamLimits

0xe2a1,	// (0x00046ae2) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x000481cb) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x000481cb) ai_message_heading_pane_g

0xe2ad,	// (0x00046aee) ai_message_heading_pane_t1_ParamLimits

0xe2ad,	// (0x00046aee) ai_message_heading_pane_t1

0xe2c7,	// (0x00046b08) ai_message_heading_pane_t2_ParamLimits

0xe2c7,	// (0x00046b08) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x000481d4) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x000481d4) ai_message_heading_pane_t

0xe2d9,	// (0x00046b1a) bg_popup_heading_pane_cp1_ParamLimits

0xe2d9,	// (0x00046b1a) bg_popup_heading_pane_cp1

0xe26b,	// (0x00046aac) list_ai_message_pane_ParamLimits

0xe26b,	// (0x00046aac) list_ai_message_pane

0xc3e7,	// (0x00044c28) scroll_pane_cp10

0xe207,	// (0x00046a48) list_ai_message_pane_g1

0xe20f,	// (0x00046a50) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x000481a8) list_ai_message_pane_g

0xe217,	// (0x00046a58) list_ai_message_pane_t1_ParamLimits

0xe217,	// (0x00046a58) list_ai_message_pane_t1

0xe22c,	// (0x00046a6d) list_ai_message_pane_t2_ParamLimits

0xe22c,	// (0x00046a6d) list_ai_message_pane_t2

0xe241,	// (0x00046a82) list_ai_message_pane_t3_ParamLimits

0xe241,	// (0x00046a82) list_ai_message_pane_t3

0xe256,	// (0x00046a97) list_ai_message_pane_t4_ParamLimits

0xe256,	// (0x00046a97) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x000481ad) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x000481ad) list_ai_message_pane_t

0xa252,	// (0x00042a93) cell_ai_soft_ind_pane_ParamLimits

0xa252,	// (0x00042a93) cell_ai_soft_ind_pane

0xcd4c,	// (0x0004558d) cell_ai_soft_ind_pane_g1_ParamLimits

0xcd4c,	// (0x0004558d) cell_ai_soft_ind_pane_g1

0x8880,	// (0x000410c1) grid_highlight_cp1

0xcd59,	// (0x0004559a) text_secondary_cp56_ParamLimits

0xcd59,	// (0x0004559a) text_secondary_cp56

0xe1dc,	// (0x00046a1d) example_general_pane_ParamLimits

0xe1dc,	// (0x00046a1d) example_general_pane

0xe1e8,	// (0x00046a29) example_parent_pane_g1_ParamLimits

0xe1e8,	// (0x00046a29) example_parent_pane_g1

0xe1f4,	// (0x00046a35) example_parent_pane_t1_ParamLimits

0xe1f4,	// (0x00046a35) example_parent_pane_t1

0x9762,	// (0x00041fa3) popup_preview_text_window_ParamLimits

0x9762,	// (0x00041fa3) popup_preview_text_window

0xcc39,	// (0x0004547a) list_single_pane_cp2_g4

0x8e02,	// (0x00041643) bg_popup_preview_window_pane_ParamLimits

0x8e02,	// (0x00041643) bg_popup_preview_window_pane

0xdf7b,	// (0x000467bc) popup_preview_text_window_t1_ParamLimits

0xdf7b,	// (0x000467bc) popup_preview_text_window_t1

0xdf99,	// (0x000467da) popup_preview_text_window_t2_ParamLimits

0xdf99,	// (0x000467da) popup_preview_text_window_t2

0xdfe2,	// (0x00046823) popup_preview_text_window_t3_ParamLimits

0xdfe2,	// (0x00046823) popup_preview_text_window_t3

0xe027,	// (0x00046868) popup_preview_text_window_t4_ParamLimits

0xe027,	// (0x00046868) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0004817c) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0004817c) popup_preview_text_window_t

0xe0a5,	// (0x000468e6) scroll_pane_cp11

0xd24e,	// (0x00045a8f) bg_popup_preview_window_pane_g1

0xdf3b,	// (0x0004677c) bg_popup_preview_window_pane_g2

0xdf43,	// (0x00046784) bg_popup_preview_window_pane_g3

0xdf4b,	// (0x0004678c) bg_popup_preview_window_pane_g4

0xdf53,	// (0x00046794) bg_popup_preview_window_pane_g5

0xdf5b,	// (0x0004679c) bg_popup_preview_window_pane_g6

0xdf63,	// (0x000467a4) bg_popup_preview_window_pane_g7

0xdf6b,	// (0x000467ac) bg_popup_preview_window_pane_g8

0x5a68,	// (0x0003e2a9) aid_popup_width_pane

0x96de,	// (0x00041f1f) popup_midp_note_alarm_window_ParamLimits

0x96de,	// (0x00041f1f) popup_midp_note_alarm_window

0xc2c8,	// (0x00044b09) data_form_pane_ParamLimits

0x433e,	// (0x0003cb7f) form_field_data_pane_g1

0x4348,	// (0x0003cb89) form_field_data_pane_t1_ParamLimits

0xc2d4,	// (0x00044b15) input_focus_pane_ParamLimits

0xc2e2,	// (0x00044b23) data_form_wide_pane_ParamLimits

0xefe1,	// (0x00047822) form_field_data_wide_pane_g1

0xefed,	// (0x0004782e) form_field_data_wide_pane_t1_ParamLimits

0xc043,	// (0x00044884) input_focus_pane_cp6_ParamLimits

0x8fa8,	// (0x000417e9) input_popup_find_pane_g1_ParamLimits

0x8fa8,	// (0x000417e9) input_popup_find_pane_g1

0x5fc4,	// (0x0003e805) aid_navi_side_left_pane

0x5fd9,	// (0x0003e81a) aid_navi_side_right_pane

0xda40,	// (0x00046281) bg_popup_window_pane_cp30_ParamLimits

0xda40,	// (0x00046281) bg_popup_window_pane_cp30

0xdaba,	// (0x000462fb) popup_midp_note_alarm_window_g1_ParamLimits

0xdaba,	// (0x000462fb) popup_midp_note_alarm_window_g1

0xdaea,	// (0x0004632b) popup_midp_note_alarm_window_t1_ParamLimits

0xdaea,	// (0x0004632b) popup_midp_note_alarm_window_t1

0xdb8b,	// (0x000463cc) popup_midp_note_alarm_window_t2_ParamLimits

0xdb8b,	// (0x000463cc) popup_midp_note_alarm_window_t2

0xdc39,	// (0x0004647a) popup_midp_note_alarm_window_t3_ParamLimits

0xdc39,	// (0x0004647a) popup_midp_note_alarm_window_t3

0xdc61,	// (0x000464a2) popup_midp_note_alarm_window_t4_ParamLimits

0xdc61,	// (0x000464a2) popup_midp_note_alarm_window_t4

0xdc81,	// (0x000464c2) popup_midp_note_alarm_window_t5_ParamLimits

0xdc81,	// (0x000464c2) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x00048119) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x00048119) popup_midp_note_alarm_window_t

0xdd2d,	// (0x0004656e) wait_bar_pane_cp1_ParamLimits

0xdd2d,	// (0x0004656e) wait_bar_pane_cp1

0x8880,	// (0x000410c1) wait_anim_pane_copy1

0x8880,	// (0x000410c1) wait_border_pane_copy1

0xd758,	// (0x00045f99) wait_border_pane_g1_copy1

0xf007,	// (0x00047848) form_field_popup_pane_g1

0x4362,	// (0x0003cba3) form_field_popup_pane_t1_ParamLimits

0xc2d4,	// (0x00044b15) input_focus_pane_cp7_ParamLimits

0xc302,	// (0x00044b43) list_form_pane_ParamLimits

0xf00f,	// (0x00047850) form_field_popup_wide_pane_g1

0xf017,	// (0x00047858) form_field_popup_wide_pane_t1_ParamLimits

0xc2d4,	// (0x00044b15) input_focus_pane_cp8_ParamLimits

0xc30e,	// (0x00044b4f) list_form_wide_pane_ParamLimits

0xe436,	// (0x00046c77) aid_size_cell_graphic_pane

0x43e1,	// (0x0003cc22) data_form_pane_t1_ParamLimits

0x44dc,	// (0x0003cd1d) data_form_wide_pane_t1_ParamLimits

0x9b17,	// (0x00042358) bg_status_flat_pane

0x8986,	// (0x000411c7) title_pane_t1_ParamLimits

0x8a12,	// (0x00041253) title_pane_t2_ParamLimits

0x8a38,	// (0x00041279) title_pane_t3_ParamLimits

0xf59b,	// (0x00047ddc) title_pane_t_ParamLimits

0xc790,	// (0x00044fd1) level_1_signal_ParamLimits

0xc79d,	// (0x00044fde) level_2_signal_ParamLimits

0xc7aa,	// (0x00044feb) level_3_signal_ParamLimits

0xc7b7,	// (0x00044ff8) level_4_signal_ParamLimits

0xc7c4,	// (0x00045005) level_5_signal_ParamLimits

0xc7d1,	// (0x00045012) level_6_signal_ParamLimits

0xc7de,	// (0x0004501f) level_7_signal_ParamLimits

0xc790,	// (0x00044fd1) level_1_battery_ParamLimits

0xc79d,	// (0x00044fde) level_2_battery_ParamLimits

0xc7aa,	// (0x00044feb) level_3_battery_ParamLimits

0xc7b7,	// (0x00044ff8) level_4_battery_ParamLimits

0xc7c4,	// (0x00045005) level_5_battery_ParamLimits

0xc7d1,	// (0x00045012) level_6_battery_ParamLimits

0xc7de,	// (0x0004501f) level_7_battery_ParamLimits

0xd963,	// (0x000461a4) bg_status_flat_pane_g1

0xd96b,	// (0x000461ac) bg_status_flat_pane_g2

0xd973,	// (0x000461b4) bg_status_flat_pane_g3

0xd97b,	// (0x000461bc) bg_status_flat_pane_g4

0xd983,	// (0x000461c4) bg_status_flat_pane_g5

0xd98b,	// (0x000461cc) bg_status_flat_pane_g6

0xd993,	// (0x000461d4) bg_status_flat_pane_g7

0x8a60,	// (0x000412a1) tabs_3_active_pane_t1_ParamLimits

0x8a60,	// (0x000412a1) tabs_3_passive_pane_t1_ParamLimits

0x8a7a,	// (0x000412bb) tabs_4_active_pane_t1_ParamLimits

0x8a7a,	// (0x000412bb) tabs_4_1_passive_pane_t1_ParamLimits

0x8fbe,	// (0x000417ff) tabs_2_active_pane_t1_ParamLimits

0x8fbe,	// (0x000417ff) tabs_2_passive_pane_t1_ParamLimits

0x8a8c,	// (0x000412cd) bg_active_tab_pane_cp4_ParamLimits

0x8fd0,	// (0x00041811) tabs_2_long_active_pane_t1_ParamLimits

0xc41f,	// (0x00044c60) bg_passive_tab_pane_cp4_ParamLimits

0x6526,	// (0x0003ed67) list_single_midp_graphic_pane_t1_ParamLimits

0x8a8c,	// (0x000412cd) bg_active_tab_pane_cp5_ParamLimits

0x8fe3,	// (0x00041824) tabs_3_long_active_pane_t1_ParamLimits

0xc41f,	// (0x00044c60) bg_passive_tab_pane_cp5_ParamLimits

0x6526,	// (0x0003ed67) list_single_midp_graphic_pane_t1

0x9b17,	// (0x00042358) bg_status_flat_pane_ParamLimits

0xd121,	// (0x00045962) indicator_pane_cp2_ParamLimits

0xd121,	// (0x00045962) indicator_pane_cp2

0x9c8e,	// (0x000424cf) navi_pane_srt_ParamLimits

0x9c8e,	// (0x000424cf) navi_pane_srt

0xd149,	// (0x0004598a) popup_clock_digital_analogue_window_cp1

0x8b9c,	// (0x000413dd) indicator_pane_t1

0xcd0a,	// (0x0004554b) copy_highlight_pane

0xcd0a,	// (0x0004554b) cursor_graphics_pane

0xcd0a,	// (0x0004554b) graphic_within_text_pane

0xcd0a,	// (0x0004554b) link_highlight_pane

0xe068,	// (0x000468a9) popup_preview_text_window_t5_ParamLimits

0xe068,	// (0x000468a9) popup_preview_text_window_t5

0xcd73,	// (0x000455b4) cursor_digital_pane

0xcd73,	// (0x000455b4) cursor_primary_pane

0xcd84,	// (0x000455c5) cursor_primary_small_pane

0xcd8c,	// (0x000455cd) cursor_secondary_pane

0xcd94,	// (0x000455d5) cursor_title_pane

0xcd73,	// (0x000455b4) link_highlight_digital_pane

0xcd7b,	// (0x000455bc) link_highlight_primary_pane

0xcd84,	// (0x000455c5) link_highlight_primary_small_pane

0xcd8c,	// (0x000455cd) link_highlight_secondary_pane

0xcd94,	// (0x000455d5) link_highlight_title_pane

0xcd73,	// (0x000455b4) copy_highlight_digital_pane

0xcd73,	// (0x000455b4) copy_highlight_primary_pane

0xcd84,	// (0x000455c5) copy_highlight_primary_small_pane

0xcd8c,	// (0x000455cd) copy_highlight_secondary_pane

0xcd94,	// (0x000455d5) copy_highlight_title_pane

0xcd8c,	// (0x000455cd) graphic_text_digital_pane

0xd9e3,	// (0x00046224) graphic_text_primary_pane

0xd9ec,	// (0x0004622d) graphic_text_primary_small_pane

0xcd84,	// (0x000455c5) graphic_text_secondary_pane

0xcd73,	// (0x000455b4) graphic_text_title_pane

0x9235,	// (0x00041a76) cursor_primary_pane_g1

0xd9d5,	// (0x00046216) cursor_text_primary_t1

0x9f98,	// (0x000427d9) cursor_primary_small_pane_g1

0xd9c7,	// (0x00046208) cursor_text_primary_small_t1

0x9f8e,	// (0x000427cf) cursor_primary_small_pane_g1_copy1

0xd9b9,	// (0x000461fa) cursor_text_primary_small_t1_copy1

0xd9ab,	// (0x000461ec) cursor_text_title_t1

0x9f84,	// (0x000427c5) cursor_title_pane_g1

0x9235,	// (0x00041a76) cursor_digital_pane_g1

0xcd9c,	// (0x000455dd) cursor_text_digital_t1

0xd94c,	// (0x0004618d) link_highlight_primary_pane_g1

0xd954,	// (0x00046195) link_highlight_primary_pane_t1

0xcdaa,	// (0x000455eb) link_highlight_primary_small_pane_g1

0xcdb2,	// (0x000455f3) link_highlight_primary_small_pane_t1

0xcdaa,	// (0x000455eb) link_highlight_secondary_pane_g1

0xcdc1,	// (0x00045602) link_highlight_secondary_pane_t1

0xd8c0,	// (0x00046101) link_highlight_title_pane_g1

0xd8c8,	// (0x00046109) link_highlight_title_pane_t1

0xd8a9,	// (0x000460ea) link_highlight_digital_pane_g1

0xd8b1,	// (0x000460f2) link_highlight_digital_pane_t1

0xd79d,	// (0x00045fde) copy_highlight_primary_pane_g1

0xd7a5,	// (0x00045fe6) copy_highlight_primary_pane_t1

0xd777,	// (0x00045fb8) copy_highlight_primary_small_pane_g1

0xd78e,	// (0x00045fcf) copy_highlight_primary_small_pane_t1

0xcdd0,	// (0x00045611) copy_highlight_secondary_pane_g1

0xcdd8,	// (0x00045619) copy_highlight_secondary_pane_t1

0xd777,	// (0x00045fb8) copy_highlight_title_pane_g1

0xd77f,	// (0x00045fc0) copy_highlight_title_pane_t1

0xd79d,	// (0x00045fde) copy_highlight_digital_pane_g1

0xe5c0,	// (0x00046e01) copy_highlight_digital_pane_t1

0xe514,	// (0x00046d55) graphic_text_primary_pane_g1

0xe5a4,	// (0x00046de5) graphic_text_primary_pane_t1

0xe5b2,	// (0x00046df3) graphic_text_primary_pane_t2

0x0001,

0xfa07,	// (0x00048248) graphic_text_primary_pane_t

0xe580,	// (0x00046dc1) graphic_text_primary_small_pane_g1

0xe588,	// (0x00046dc9) graphic_text_primary_small_pane_t1

0xe596,	// (0x00046dd7) graphic_text_primary_small_pane_t2

0x0001,

0xfa02,	// (0x00048243) graphic_text_primary_small_pane_t

0xe55c,	// (0x00046d9d) graphic_text_secondary_pane_g1

0xe564,	// (0x00046da5) graphic_text_secondary_pane_t1

0xe572,	// (0x00046db3) graphic_text_secondary_pane_t2

0x0001,

0xf9fd,	// (0x0004823e) graphic_text_secondary_pane_t

0xe538,	// (0x00046d79) graphic_text_title_pane_g1

0xe540,	// (0x00046d81) graphic_text_title_pane_t1

0xe54e,	// (0x00046d8f) graphic_text_title_pane_t2

0x0001,

0xf9f8,	// (0x00048239) graphic_text_title_pane_t

0xe514,	// (0x00046d55) graphic_text_digital_pane_g1

0xe51c,	// (0x00046d5d) graphic_text_digital_pane_t1

0xe52a,	// (0x00046d6b) graphic_text_digital_pane_t2

0x0001,

0xf9f3,	// (0x00048234) graphic_text_digital_pane_t

0x8a8c,	// (0x000412cd) navi_icon_pane_srt_ParamLimits

0x8a8c,	// (0x000412cd) navi_icon_pane_srt

0x8880,	// (0x000410c1) navi_midp_pane_srt

0x8880,	// (0x000410c1) navi_navi_pane_srt

0x8a8c,	// (0x000412cd) navi_text_pane_srt_ParamLimits

0x8a8c,	// (0x000412cd) navi_text_pane_srt

0xe4df,	// (0x00046d20) navi_navi_icon_text_pane_srt

0xe4e7,	// (0x00046d28) navi_navi_pane_srt_g1_ParamLimits

0xe4e7,	// (0x00046d28) navi_navi_pane_srt_g1

0xe4f9,	// (0x00046d3a) navi_navi_pane_srt_g2_ParamLimits

0xe4f9,	// (0x00046d3a) navi_navi_pane_srt_g2

0x0001,

0xf9ee,	// (0x0004822f) navi_navi_pane_srt_g_ParamLimits

0xf9ee,	// (0x0004822f) navi_navi_pane_srt_g

0xe50b,	// (0x00046d4c) navi_navi_tabs_pane_srt

0xe4df,	// (0x00046d20) navi_navi_text_pane_srt

0xe4df,	// (0x00046d20) navi_navi_volume_pane_srt

0xe4d0,	// (0x00046d11) navi_navi_text_pane_srt_t1

0x68a6,	// (0x0003f0e7) navi_navi_volume_pane_srt_g1

0x68ae,	// (0x0003f0ef) volume_small_pane_srt_ParamLimits

0x68ae,	// (0x0003f0ef) volume_small_pane_srt

0x62a4,	// (0x0003eae5) volume_small_pane_srt_g1_ParamLimits

0x62a4,	// (0x0003eae5) volume_small_pane_srt_g1

0x62b4,	// (0x0003eaf5) volume_small_pane_srt_g2_ParamLimits

0x62b4,	// (0x0003eaf5) volume_small_pane_srt_g2

0x62c5,	// (0x0003eb06) volume_small_pane_srt_g3_ParamLimits

0x62c5,	// (0x0003eb06) volume_small_pane_srt_g3

0x62d6,	// (0x0003eb17) volume_small_pane_srt_g4_ParamLimits

0x62d6,	// (0x0003eb17) volume_small_pane_srt_g4

0x62e7,	// (0x0003eb28) volume_small_pane_srt_g5_ParamLimits

0x62e7,	// (0x0003eb28) volume_small_pane_srt_g5

0x62f8,	// (0x0003eb39) volume_small_pane_srt_g6_ParamLimits

0x62f8,	// (0x0003eb39) volume_small_pane_srt_g6

0x6309,	// (0x0003eb4a) volume_small_pane_srt_g7_ParamLimits

0x6309,	// (0x0003eb4a) volume_small_pane_srt_g7

0x631a,	// (0x0003eb5b) volume_small_pane_srt_g8_ParamLimits

0x631a,	// (0x0003eb5b) volume_small_pane_srt_g8

0x632b,	// (0x0003eb6c) volume_small_pane_srt_g9_ParamLimits

0x632b,	// (0x0003eb6c) volume_small_pane_srt_g9

0x633c,	// (0x0003eb7d) volume_small_pane_srt_g10_ParamLimits

0x633c,	// (0x0003eb7d) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x00047fe3) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x00047fe3) volume_small_pane_srt_g

0xbef9,	// (0x0004473a) query_popup_data_pane_cp2

0xe4b6,	// (0x00046cf7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe4b6,	// (0x00046cf7) navi_navi_icon_text_pane_srt_t1

0xd9e3,	// (0x00046224) navi_tabs_2_long_pane_srt

0xd9e3,	// (0x00046224) navi_tabs_2_pane_srt

0xd9e3,	// (0x00046224) navi_tabs_3_long_pane_srt

0xd9e3,	// (0x00046224) navi_tabs_3_pane_srt

0xd9e3,	// (0x00046224) navi_tabs_4_pane_srt

0x6886,	// (0x0003f0c7) tabs_2_active_pane_srt_ParamLimits

0x6886,	// (0x0003f0c7) tabs_2_active_pane_srt

0x6896,	// (0x0003f0d7) tabs_2_passive_pane_srt_ParamLimits

0x6896,	// (0x0003f0d7) tabs_2_passive_pane_srt

0xd33e,	// (0x00045b7f) bg_passive_tab_pane_cp1_srt_ParamLimits

0xd33e,	// (0x00045b7f) bg_passive_tab_pane_cp1_srt

0xe494,	// (0x00046cd5) bg_passive_tab_pane_g1_cp1_srt

0xc9b3,	// (0x000451f4) bg_passive_tab_pane_g2_cp1_srt

0xe49d,	// (0x00046cde) bg_passive_tab_pane_g3_cp1_srt

0x8a4a,	// (0x0004128b) bg_active_tab_pane_cp1_srt_ParamLimits

0x8a4a,	// (0x0004128b) bg_active_tab_pane_cp1_srt

0xe4a6,	// (0x00046ce7) tabs_2_active_pane_srt_g1

0xa4eb,	// (0x00042d2c) tabs_2_active_pane_srt_t1_ParamLimits

0xa4eb,	// (0x00042d2c) tabs_2_active_pane_srt_t1

0xe494,	// (0x00046cd5) bg_active_tab_pane_g1_cp1_srt

0xc9b3,	// (0x000451f4) bg_active_tab_pane_g2_cp1_srt

0xe49d,	// (0x00046cde) bg_active_tab_pane_g3_cp1_srt

0x6853,	// (0x0003f094) tabs_3_active_pane_srt_ParamLimits

0x6853,	// (0x0003f094) tabs_3_active_pane_srt

0x6864,	// (0x0003f0a5) tabs_3_passive_pane_cp_srt_ParamLimits

0x6864,	// (0x0003f0a5) tabs_3_passive_pane_cp_srt

0x6875,	// (0x0003f0b6) tabs_3_passive_pane_srt_ParamLimits

0x6875,	// (0x0003f0b6) tabs_3_passive_pane_srt

0xd33e,	// (0x00045b7f) bg_passive_tab_pane_cp2_srt_ParamLimits

0xd33e,	// (0x00045b7f) bg_passive_tab_pane_cp2_srt

0xcde7,	// (0x00045628) bg_passive_tab_pane_g1_cp2_srt

0xc9b3,	// (0x000451f4) bg_passive_tab_pane_g2_cp2_srt

0xcdf0,	// (0x00045631) bg_passive_tab_pane_g3_cp2_srt

0x8a4a,	// (0x0004128b) bg_active_tab_pane_cp2_srt_ParamLimits

0x8a4a,	// (0x0004128b) bg_active_tab_pane_cp2_srt

0xe48c,	// (0x00046ccd) tabs_3_active_pane_srt_g1

0xa4d5,	// (0x00042d16) tabs_3_active_pane_srt_t1_ParamLimits

0xa4d5,	// (0x00042d16) tabs_3_active_pane_srt_t1

0xcde7,	// (0x00045628) bg_active_tab_pane_g1_cp2_srt

0xc9b3,	// (0x000451f4) bg_active_tab_pane_g2_cp2_srt

0xcdf0,	// (0x00045631) bg_active_tab_pane_g3_cp2_srt

0x680b,	// (0x0003f04c) tabs_4_active_pane_srt_ParamLimits

0x680b,	// (0x0003f04c) tabs_4_active_pane_srt

0x681d,	// (0x0003f05e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x681d,	// (0x0003f05e) tabs_4_passive_pane_cp2_srt

0xcf14,	// (0x00045755) aid_size_cell_toolbar

0xcf56,	// (0x00045797) main_idle_act_pane_ParamLimits

0xcfe8,	// (0x00045829) popup_large_graphic_colour_window_ParamLimits

0x99e2,	// (0x00042223) popup_toolbar_window_ParamLimits

0x99e2,	// (0x00042223) popup_toolbar_window

0xe3b3,	// (0x00046bf4) list_single_graphic_2heading_pane_ParamLimits

0xe3b3,	// (0x00046bf4) list_single_graphic_2heading_pane

0xc5c9,	// (0x00044e0a) aid_size_cell_apps_grid_lsc_pane

0xc5db,	// (0x00044e1c) aid_size_cell_apps_grid_prt_pane

0xc41f,	// (0x00044c60) bg_wml_button_pane_cp1_ParamLimits

0xc41f,	// (0x00044c60) bg_wml_button_pane_cp1

0x9f34,	// (0x00042775) form_midp_field_text_pane_t1_ParamLimits

0xd33e,	// (0x00045b7f) input_focus_pane_cp050_ParamLimits

0xd486,	// (0x00045cc7) list_midp_form_text_pane_ParamLimits

0xd463,	// (0x00045ca4) input_focus_pane_cp051_ParamLimits

0xd477,	// (0x00045cb8) list_midp_choice_pane_ParamLimits

0x9ec9,	// (0x0004270a) list_single_2graphic_pane_cp3_ParamLimits

0x9ec9,	// (0x0004270a) list_single_2graphic_pane_cp3

0x9edf,	// (0x00042720) list_single_midp_graphic_pane_ParamLimits

0x9edf,	// (0x00042720) list_single_midp_graphic_pane

0x59f0,	// (0x0003e231) list_single_graphic_2heading_pane_g1_ParamLimits

0x59f0,	// (0x0003e231) list_single_graphic_2heading_pane_g1

0x59fc,	// (0x0003e23d) list_single_graphic_2heading_pane_g4_ParamLimits

0x59fc,	// (0x0003e23d) list_single_graphic_2heading_pane_g4

0x5a08,	// (0x0003e249) list_single_graphic_2heading_pane_g5_ParamLimits

0x5a08,	// (0x0003e249) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x00048036) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x00048036) list_single_graphic_2heading_pane_g

0x5a14,	// (0x0003e255) list_single_graphic_2heading_pane_t1_ParamLimits

0x5a14,	// (0x0003e255) list_single_graphic_2heading_pane_t1

0x5a28,	// (0x0003e269) list_single_graphic_2heading_pane_t2_ParamLimits

0x5a28,	// (0x0003e269) list_single_graphic_2heading_pane_t2

0x5a44,	// (0x0003e285) list_single_graphic_2heading_pane_t3_ParamLimits

0x5a44,	// (0x0003e285) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0004803d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0004803d) list_single_graphic_2heading_pane_t

0xd18c,	// (0x000459cd) bg_popup_sub_pane_cp2

0xd1b6,	// (0x000459f7) grid_toobar_pane

0x6497,	// (0x0003ecd8) cell_toolbar_pane_ParamLimits

0x6497,	// (0x0003ecd8) cell_toolbar_pane

0xd1f2,	// (0x00045a33) cell_toolbar_pane_g1_ParamLimits

0xd1f2,	// (0x00045a33) cell_toolbar_pane_g1

0xd206,	// (0x00045a47) cell_toolbar_pane_g2_ParamLimits

0xd206,	// (0x00045a47) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0004804b) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0004804b) cell_toolbar_pane_g

0xd228,	// (0x00045a69) grid_highlight_pane_cp2_ParamLimits

0xd228,	// (0x00045a69) grid_highlight_pane_cp2

0xd242,	// (0x00045a83) toolbar_button_pane

0xd24e,	// (0x00045a8f) toolbar_button_pane_g1

0xd256,	// (0x00045a97) toolbar_button_pane_g2

0xd25e,	// (0x00045a9f) toolbar_button_pane_g3

0xd266,	// (0x00045aa7) toolbar_button_pane_g4

0xd26e,	// (0x00045aaf) toolbar_button_pane_g5

0xd276,	// (0x00045ab7) toolbar_button_pane_g6

0xd27e,	// (0x00045abf) toolbar_button_pane_g7

0xd286,	// (0x00045ac7) toolbar_button_pane_g8

0xd28e,	// (0x00045acf) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x00048050) toolbar_button_pane_g

0x64cf,	// (0x0003ed10) list_single_2graphic_pane_g1_cp3_ParamLimits

0x64cf,	// (0x0003ed10) list_single_2graphic_pane_g1_cp3

0x9e2b,	// (0x0004266c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9e2b,	// (0x0004266c) list_single_2graphic_pane_g2_cp3

0x64ec,	// (0x0003ed2d) list_single_2graphic_pane_g3_cp3

0x64f4,	// (0x0003ed35) list_single_2graphic_pane_g4_cp3_ParamLimits

0x64f4,	// (0x0003ed35) list_single_2graphic_pane_g4_cp3

0x6500,	// (0x0003ed41) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6500,	// (0x0003ed41) list_single_2graphic_pane_t1_cp3

0x651a,	// (0x0003ed5b) list_single_midp_graphic_pane_g2_ParamLimits

0x651a,	// (0x0003ed5b) list_single_midp_graphic_pane_g2

0xf05b,	// (0x0004789c) aid_zoom_text_primary

0xf063,	// (0x000478a4) aid_zoom_text_secondary

0xcea4,	// (0x000456e5) status_small_pane_g7_ParamLimits

0xcea4,	// (0x000456e5) status_small_pane_g7

0xcec7,	// (0x00045708) status_small_pane_t1_ParamLimits

0x8956,	// (0x00041197) title_pane_g2

0x0003,

0xf592,	// (0x00047dd3) title_pane_g

0x8eab,	// (0x000416ec) aid_size_cell_colour_1_pane_ParamLimits

0x8eab,	// (0x000416ec) aid_size_cell_colour_1_pane

0x8ebf,	// (0x00041700) aid_size_cell_colour_2_pane_ParamLimits

0x8ebf,	// (0x00041700) aid_size_cell_colour_2_pane

0x8ed3,	// (0x00041714) aid_size_cell_colour_3_pane_ParamLimits

0x8ed3,	// (0x00041714) aid_size_cell_colour_3_pane

0x8ee7,	// (0x00041728) aid_size_cell_colour_4_pane_ParamLimits

0x8ee7,	// (0x00041728) aid_size_cell_colour_4_pane

0x5f00,	// (0x0003e741) title_pane_stacon_g1_ParamLimits

0x5f00,	// (0x0003e741) title_pane_stacon_g1

0xd7fc,	// (0x0004603d) popup_note_wait_window_g3_ParamLimits

0xd7fc,	// (0x0004603d) popup_note_wait_window_g3

0xd872,	// (0x000460b3) popup_note_wait_window_t5_ParamLimits

0xd872,	// (0x000460b3) popup_note_wait_window_t5

0x8880,	// (0x000410c1) main_feb_china_hwr_fs_writing_pane

0x940a,	// (0x00041c4b) popup_feb_china_hwr_fs_window_ParamLimits

0x940a,	// (0x00041c4b) popup_feb_china_hwr_fs_window

0x9e3c,	// (0x0004267d) aid_size_cell_hwr_fs_ParamLimits

0x9e3c,	// (0x0004267d) aid_size_cell_hwr_fs

0xd33e,	// (0x00045b7f) bg_popup_sub_pane_cp3_ParamLimits

0xd33e,	// (0x00045b7f) bg_popup_sub_pane_cp3

0x9e51,	// (0x00042692) grid_hwr_fs_pane_ParamLimits

0x9e51,	// (0x00042692) grid_hwr_fs_pane

0x6569,	// (0x0003edaa) linegrid_hwr_fs_pane_ParamLimits

0x6569,	// (0x0003edaa) linegrid_hwr_fs_pane

0x9e69,	// (0x000426aa) cell_hwr_fs_pane_ParamLimits

0x9e69,	// (0x000426aa) cell_hwr_fs_pane

0xd34a,	// (0x00045b8b) linegrid_hwr_fs_pane_g1_ParamLimits

0xd34a,	// (0x00045b8b) linegrid_hwr_fs_pane_g1

0x9e8f,	// (0x000426d0) linegrid_hwr_fs_pane_g2_ParamLimits

0x9e8f,	// (0x000426d0) linegrid_hwr_fs_pane_g2

0xd356,	// (0x00045b97) linegrid_hwr_fs_pane_g3_ParamLimits

0xd356,	// (0x00045b97) linegrid_hwr_fs_pane_g3

0x659b,	// (0x0003eddc) linegrid_hwr_fs_pane_g4_ParamLimits

0x659b,	// (0x0003eddc) linegrid_hwr_fs_pane_g4

0x65b5,	// (0x0003edf6) linegrid_hwr_fs_pane_g5_ParamLimits

0x65b5,	// (0x0003edf6) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x00048076) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x00048076) linegrid_hwr_fs_pane_g

0xd362,	// (0x00045ba3) cell_hwr_fs_pane_g1_ParamLimits

0xd362,	// (0x00045ba3) cell_hwr_fs_pane_g1

0xd15a,	// (0x0004599b) cell_hwr_fs_pane_g2_ParamLimits

0xd15a,	// (0x0004599b) cell_hwr_fs_pane_g2

0x9ea1,	// (0x000426e2) cell_hwr_fs_pane_g3_ParamLimits

0x9ea1,	// (0x000426e2) cell_hwr_fs_pane_g3

0x9eae,	// (0x000426ef) cell_hwr_fs_pane_g4_ParamLimits

0x9eae,	// (0x000426ef) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x00048081) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x00048081) cell_hwr_fs_pane_g

0x9ebb,	// (0x000426fc) cell_hwr_fs_pane_t1

0x8880,	// (0x000410c1) grid_highlight_pane_cp6

0x8880,	// (0x000410c1) main_idle_act2_pane

0xc3ce,	// (0x00044c0f) aid_inside_area_popup_secondary

0xa0f4,	// (0x00042935) aid_inside_area_window_primary_ParamLimits

0xa0f4,	// (0x00042935) aid_inside_area_window_primary

0xe5cf,	// (0x00046e10) ai2_news_ticker_pane

0xe5d7,	// (0x00046e18) aid_size_cell_ai1_link_ParamLimits

0xe5d7,	// (0x00046e18) aid_size_cell_ai1_link

0xe5f1,	// (0x00046e32) popup_ai2_data_window_ParamLimits

0xe5f1,	// (0x00046e32) popup_ai2_data_window

0xe605,	// (0x00046e46) popup_ai2_link_window_ParamLimits

0xe605,	// (0x00046e46) popup_ai2_link_window

0xd33e,	// (0x00045b7f) bg_popup_sub_pane_cp4_ParamLimits

0xd33e,	// (0x00045b7f) bg_popup_sub_pane_cp4

0xe619,	// (0x00046e5a) grid_ai2_link_pane_ParamLimits

0xe619,	// (0x00046e5a) grid_ai2_link_pane

0xe630,	// (0x00046e71) popup_ai2_link_window_g1_ParamLimits

0xe630,	// (0x00046e71) popup_ai2_link_window_g1

0xe63c,	// (0x00046e7d) popup_ai2_link_window_g2_ParamLimits

0xe63c,	// (0x00046e7d) popup_ai2_link_window_g2

0x0001,

0xfa0c,	// (0x0004824d) popup_ai2_link_window_g_ParamLimits

0xfa0c,	// (0x0004824d) popup_ai2_link_window_g

0xe64b,	// (0x00046e8c) ai2_mp_button_pane

0xe653,	// (0x00046e94) ai2_mp_volume_pane

0xd463,	// (0x00045ca4) bg_popup_sub_pane_cp5_ParamLimits

0xd463,	// (0x00045ca4) bg_popup_sub_pane_cp5

0xe65b,	// (0x00046e9c) heading_ai2_gene_pane_ParamLimits

0xe65b,	// (0x00046e9c) heading_ai2_gene_pane

0xe667,	// (0x00046ea8) list_ai2_gene_pane_ParamLimits

0xe667,	// (0x00046ea8) list_ai2_gene_pane

0xe6af,	// (0x00046ef0) cell_ai2_link_pane_ParamLimits

0xe6af,	// (0x00046ef0) cell_ai2_link_pane

0xe6c5,	// (0x00046f06) cell_ai2_link_pane_g1

0x8880,	// (0x000410c1) grid_highlight_pane_cp7

0x68c3,	// (0x0003f104) ai2_mp_volume_pane_g1

0xe796,	// (0x00046fd7) ai2_mp_volume_pane_g2

0xe70b,	// (0x00046f4c) list_ai2_gene_pane_t1

0xe79e,	// (0x00046fdf) ai2_mp_volume_pane_g3

0x0002,

0xfa25,	// (0x00048266) ai2_mp_volume_pane_g

0x68cb,	// (0x0003f10c) volume_small_pane_cp3

0xe7a6,	// (0x00046fe7) aid_size_cell_ai2_button

0xe7ae,	// (0x00046fef) grid_ai2_button_pane

0xe7b7,	// (0x00046ff8) cell_ai2_button_pane_ParamLimits

0xe7b7,	// (0x00046ff8) cell_ai2_button_pane

0x8790,	// (0x00040fd1) cell_ai2_button_pane_g1

0x8880,	// (0x000410c1) grid_highlight_pane_cp8

0xe756,	// (0x00046f97) ai2_gene_pane_t1_ParamLimits

0xe756,	// (0x00046f97) ai2_gene_pane_t1

0x939c,	// (0x00041bdd) aid_height_parent_landscape

0xa2a4,	// (0x00042ae5) aid_height_set_list

0xcf56,	// (0x00045797) aid_size_parent

0xe436,	// (0x00046c77) aid_size_cell_graphic_pane_ParamLimits

0xe677,	// (0x00046eb8) popup_ai2_data_window_g1_ParamLimits

0xe677,	// (0x00046eb8) popup_ai2_data_window_g1

0xe683,	// (0x00046ec4) ai2_news_ticker_pane_g1

0xe68b,	// (0x00046ecc) ai2_news_ticker_pane_g2

0x0001,

0xfa11,	// (0x00048252) ai2_news_ticker_pane_g

0xe693,	// (0x00046ed4) ai2_news_ticker_pane_t1

0xe6a1,	// (0x00046ee2) ai2_news_ticker_pane_t2

0x0001,

0xfa16,	// (0x00048257) ai2_news_ticker_pane_t

0xe6ce,	// (0x00046f0f) heading_ai2_gene_pane_g1

0xe6d6,	// (0x00046f17) heading_ai2_gene_pane_t1_ParamLimits

0xe6d6,	// (0x00046f17) heading_ai2_gene_pane_t1

0xe6eb,	// (0x00046f2c) list_highlight_pane_cp6

0xe6f3,	// (0x00046f34) ai2_gene_pane_ParamLimits

0xe6f3,	// (0x00046f34) ai2_gene_pane

0xe719,	// (0x00046f5a) list_ai2_gene_pane_t2

0x0001,

0xfa1b,	// (0x0004825c) list_ai2_gene_pane_t

0xe727,	// (0x00046f68) list_highlight_pane_cp8_ParamLimits

0xe727,	// (0x00046f68) list_highlight_pane_cp8

0xe738,	// (0x00046f79) ai2_gene_pane_g1_ParamLimits

0xe738,	// (0x00046f79) ai2_gene_pane_g1

0xe74a,	// (0x00046f8b) ai2_gene_pane_g2_ParamLimits

0xe74a,	// (0x00046f8b) ai2_gene_pane_g2

0x0001,

0xfa20,	// (0x00048261) ai2_gene_pane_g_ParamLimits

0xfa20,	// (0x00048261) ai2_gene_pane_g

0xc25e,	// (0x00044a9f) scroll_pane_cp12

0x9359,	// (0x00041b9a) control_pane_t3_ParamLimits

0x9359,	// (0x00041b9a) control_pane_t3

0xceb8,	// (0x000456f9) status_small_pane_g8_ParamLimits

0xceb8,	// (0x000456f9) status_small_pane_g8

0x949d,	// (0x00041cde) popup_find_window_ParamLimits

0x9718,	// (0x00041f59) popup_note_image_window_ParamLimits

0xf073,	// (0x000478b4) list_double2_graphic_pane_vc_g1_ParamLimits

0xf073,	// (0x000478b4) list_double2_graphic_pane_vc_g1

0xeeba,	// (0x000476fb) list_double2_graphic_pane_vc_g2_ParamLimits

0xeeba,	// (0x000476fb) list_double2_graphic_pane_vc_g2

0xeec6,	// (0x00047707) list_double2_graphic_pane_vc_g3_ParamLimits

0xeec6,	// (0x00047707) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x00048044) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x00048044) list_double2_graphic_pane_vc_g

0xf07f,	// (0x000478c0) list_double2_graphic_pane_vc_t1_ParamLimits

0xf07f,	// (0x000478c0) list_double2_graphic_pane_vc_t1

0xeeba,	// (0x000476fb) list_single_heading_pane_vc_g1_ParamLimits

0xeeba,	// (0x000476fb) list_single_heading_pane_vc_g1

0xeec6,	// (0x00047707) list_single_heading_pane_vc_g2_ParamLimits

0xeec6,	// (0x00047707) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x00047e57) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x00047e57) list_single_heading_pane_vc_g

0xf095,	// (0x000478d6) list_single_heading_pane_vc_t1_ParamLimits

0xf095,	// (0x000478d6) list_single_heading_pane_vc_t1

0xf0ab,	// (0x000478ec) list_single_heading_pane_vc_t2_ParamLimits

0xf0ab,	// (0x000478ec) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x00048065) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x00048065) list_single_heading_pane_vc_t

0xd296,	// (0x00045ad7) list_setting_number_pane_vc_g1_ParamLimits

0xd296,	// (0x00045ad7) list_setting_number_pane_vc_g1

0xd2a2,	// (0x00045ae3) list_setting_number_pane_vc_g2_ParamLimits

0xd2a2,	// (0x00045ae3) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0004806a) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0004806a) list_setting_number_pane_vc_g

0xd2ae,	// (0x00045aef) list_setting_number_pane_vc_t1_ParamLimits

0xd2ae,	// (0x00045aef) list_setting_number_pane_vc_t1

0xd2c2,	// (0x00045b03) list_setting_number_pane_vc_t2_ParamLimits

0xd2c2,	// (0x00045b03) list_setting_number_pane_vc_t2

0xd2de,	// (0x00045b1f) list_setting_number_pane_vc_t3_ParamLimits

0xd2de,	// (0x00045b1f) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0004806f) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0004806f) list_setting_number_pane_vc_t

0xd306,	// (0x00045b47) set_value_pane_vc_ParamLimits

0xd306,	// (0x00045b47) set_value_pane_vc

0xe3b3,	// (0x00046bf4) list_double2_graphic_pane_vc_ParamLimits

0xe3b3,	// (0x00046bf4) list_double2_graphic_pane_vc

0xe3b3,	// (0x00046bf4) list_double2_large_graphic_pane_vc_ParamLimits

0xe3b3,	// (0x00046bf4) list_double2_large_graphic_pane_vc

0xe3b3,	// (0x00046bf4) list_double2_pane_vc_ParamLimits

0xe3b3,	// (0x00046bf4) list_double2_pane_vc

0xe3b3,	// (0x00046bf4) list_double_graphic_heading_pane_vc_ParamLimits

0xe3b3,	// (0x00046bf4) list_double_graphic_heading_pane_vc

0xe3b3,	// (0x00046bf4) list_double_graphic_pane_vc_ParamLimits

0xe3b3,	// (0x00046bf4) list_double_graphic_pane_vc

0xe3b3,	// (0x00046bf4) list_double_heading_pane_vc_ParamLimits

0xe3b3,	// (0x00046bf4) list_double_heading_pane_vc

0xe3b3,	// (0x00046bf4) list_double_large_graphic_pane_vc_ParamLimits

0xe3b3,	// (0x00046bf4) list_double_large_graphic_pane_vc

0xe3b3,	// (0x00046bf4) list_double_number_pane_vc_ParamLimits

0xe3b3,	// (0x00046bf4) list_double_number_pane_vc

0xe3b3,	// (0x00046bf4) list_double_pane_vc_ParamLimits

0xe3b3,	// (0x00046bf4) list_double_pane_vc

0xe3b3,	// (0x00046bf4) list_double_time_pane_vc_ParamLimits

0xe3b3,	// (0x00046bf4) list_double_time_pane_vc

0xe3b3,	// (0x00046bf4) list_setting_number_pane_vc_ParamLimits

0xe3b3,	// (0x00046bf4) list_setting_number_pane_vc

0xe3b3,	// (0x00046bf4) list_setting_pane_vc_ParamLimits

0xe3b3,	// (0x00046bf4) list_setting_pane_vc

0xe3b3,	// (0x00046bf4) list_single_graphic_heading_pane_vc_ParamLimits

0xe3b3,	// (0x00046bf4) list_single_graphic_heading_pane_vc

0xe3b3,	// (0x00046bf4) list_single_heading_pane_vc_ParamLimits

0xe3b3,	// (0x00046bf4) list_single_heading_pane_vc

0xe3b3,	// (0x00046bf4) list_single_number_heading_pane_vc_ParamLimits

0xe3b3,	// (0x00046bf4) list_single_number_heading_pane_vc

0xf073,	// (0x000478b4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xf073,	// (0x000478b4) list_double_graphic_heading_pane_vc_g1

0xeeba,	// (0x000476fb) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xeeba,	// (0x000476fb) list_double_graphic_heading_pane_vc_g2

0xeec6,	// (0x00047707) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xeec6,	// (0x00047707) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x00048044) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x00048044) list_double_graphic_heading_pane_vc_g

0xf0e4,	// (0x00047925) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xf0e4,	// (0x00047925) list_double_graphic_heading_pane_vc_t1

0xf095,	// (0x000478d6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xf095,	// (0x000478d6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa2c,	// (0x0004826d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x0004826d) list_double_graphic_heading_pane_vc_t

0xd296,	// (0x00045ad7) list_setting_pane_vc_g1_ParamLimits

0xd296,	// (0x00045ad7) list_setting_pane_vc_g1

0xd2a2,	// (0x00045ae3) list_setting_pane_vc_g2_ParamLimits

0xd2a2,	// (0x00045ae3) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0004806a) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0004806a) list_setting_pane_vc_g

0xe9ad,	// (0x000471ee) list_setting_pane_vc_t1_ParamLimits

0xe9ad,	// (0x000471ee) list_setting_pane_vc_t1

0xe9c1,	// (0x00047202) list_setting_pane_vc_t2_ParamLimits

0xe9c1,	// (0x00047202) list_setting_pane_vc_t2

0x0001,

0xfa6f,	// (0x000482b0) list_setting_pane_vc_t_ParamLimits

0xfa6f,	// (0x000482b0) list_setting_pane_vc_t

0xd306,	// (0x00045b47) set_value_pane_cp_vc_ParamLimits

0xd306,	// (0x00045b47) set_value_pane_cp_vc

0xeeba,	// (0x000476fb) list_single_number_heading_pane_vc_g1_ParamLimits

0xeeba,	// (0x000476fb) list_single_number_heading_pane_vc_g1

0xeec6,	// (0x00047707) list_single_number_heading_pane_vc_g2_ParamLimits

0xeec6,	// (0x00047707) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x00047e57) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x00047e57) list_single_number_heading_pane_vc_g

0xf095,	// (0x000478d6) list_single_number_heading_pane_vc_t1_ParamLimits

0xf095,	// (0x000478d6) list_single_number_heading_pane_vc_t1

0xf0f8,	// (0x00047939) list_single_number_heading_pane_vc_t2_ParamLimits

0xf0f8,	// (0x00047939) list_single_number_heading_pane_vc_t2

0xeee8,	// (0x00047729) list_single_number_heading_pane_vc_t3_ParamLimits

0xeee8,	// (0x00047729) list_single_number_heading_pane_vc_t3

0x0002,

0xfa74,	// (0x000482b5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x000482b5) list_single_number_heading_pane_vc_t

0xf073,	// (0x000478b4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xf073,	// (0x000478b4) list_single_graphic_heading_pane_vc_g1

0xeeba,	// (0x000476fb) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xeeba,	// (0x000476fb) list_single_graphic_heading_pane_vc_g4

0xeec6,	// (0x00047707) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xeec6,	// (0x00047707) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x00048044) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x00048044) list_single_graphic_heading_pane_vc_g

0xf095,	// (0x000478d6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xf095,	// (0x000478d6) list_single_graphic_heading_pane_vc_t1

0xf10c,	// (0x0004794d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xf10c,	// (0x0004794d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x000482bc) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x000482bc) list_single_graphic_heading_pane_vc_t

0xeeba,	// (0x000476fb) list_double2_pane_vc_g1_ParamLimits

0xeeba,	// (0x000476fb) list_double2_pane_vc_g1

0xeec6,	// (0x00047707) list_double2_pane_vc_g2_ParamLimits

0xeec6,	// (0x00047707) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x00047e57) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x00047e57) list_double2_pane_vc_g

0xf0ce,	// (0x0004790f) list_double2_pane_vc_t1_ParamLimits

0xf0ce,	// (0x0004790f) list_double2_pane_vc_t1

0xeefa,	// (0x0004773b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xeefa,	// (0x0004773b) list_double2_large_graphic_pane_vc_g1

0xeeba,	// (0x000476fb) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xeeba,	// (0x000476fb) list_double2_large_graphic_pane_vc_g2

0xeec6,	// (0x00047707) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xeec6,	// (0x00047707) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x00047e6f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x00047e6f) list_double2_large_graphic_pane_vc_g

0xeed2,	// (0x00047713) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xeed2,	// (0x00047713) list_double2_large_graphic_pane_vc_t1

0xf120,	// (0x00047961) list_double_time_pane_vc_g1_ParamLimits

0xf120,	// (0x00047961) list_double_time_pane_vc_g1

0xf12c,	// (0x0004796d) list_double_time_pane_vc_g2_ParamLimits

0xf12c,	// (0x0004796d) list_double_time_pane_vc_g2

0x0001,

0xfa80,	// (0x000482c1) list_double_time_pane_vc_g_ParamLimits

0xfa80,	// (0x000482c1) list_double_time_pane_vc_g

0xf138,	// (0x00047979) list_double_time_pane_vc_t1_ParamLimits

0xf138,	// (0x00047979) list_double_time_pane_vc_t1

0xf151,	// (0x00047992) list_double_time_pane_vc_t2_ParamLimits

0xf151,	// (0x00047992) list_double_time_pane_vc_t2

0xf191,	// (0x000479d2) list_double_time_pane_vc_t3_ParamLimits

0xf191,	// (0x000479d2) list_double_time_pane_vc_t3

0xf1a9,	// (0x000479ea) list_double_time_pane_vc_t4_ParamLimits

0xf1a9,	// (0x000479ea) list_double_time_pane_vc_t4

0x0003,

0xfa85,	// (0x000482c6) list_double_time_pane_vc_t_ParamLimits

0xfa85,	// (0x000482c6) list_double_time_pane_vc_t

0xeeba,	// (0x000476fb) list_double_pane_vc_g1_ParamLimits

0xeeba,	// (0x000476fb) list_double_pane_vc_g1

0xeec6,	// (0x00047707) list_double_pane_vc_g2_ParamLimits

0xeec6,	// (0x00047707) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x00047e57) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x00047e57) list_double_pane_vc_g

0xf1bd,	// (0x000479fe) list_double_pane_vc_t1_ParamLimits

0xf1bd,	// (0x000479fe) list_double_pane_vc_t1

0xf1cf,	// (0x00047a10) list_double_pane_vc_t2_ParamLimits

0xf1cf,	// (0x00047a10) list_double_pane_vc_t2

0x0001,

0xfa8e,	// (0x000482cf) list_double_pane_vc_t_ParamLimits

0xfa8e,	// (0x000482cf) list_double_pane_vc_t

0xeeba,	// (0x000476fb) list_double_number_pane_vc_g1_ParamLimits

0xeeba,	// (0x000476fb) list_double_number_pane_vc_g1

0xeec6,	// (0x00047707) list_double_number_pane_vc_g2_ParamLimits

0xeec6,	// (0x00047707) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x00047e57) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x00047e57) list_double_number_pane_vc_g

0xf1e7,	// (0x00047a28) list_double_number_pane_vc_t1_ParamLimits

0xf1e7,	// (0x00047a28) list_double_number_pane_vc_t1

0xf1fb,	// (0x00047a3c) list_double_number_pane_vc_t2_ParamLimits

0xf1fb,	// (0x00047a3c) list_double_number_pane_vc_t2

0xf1cf,	// (0x00047a10) list_double_number_pane_vc_t3_ParamLimits

0xf1cf,	// (0x00047a10) list_double_number_pane_vc_t3

0x0002,

0xfa93,	// (0x000482d4) list_double_number_pane_vc_t_ParamLimits

0xfa93,	// (0x000482d4) list_double_number_pane_vc_t

0xf20d,	// (0x00047a4e) list_double_large_graphic_pane_vc_g1_ParamLimits

0xf20d,	// (0x00047a4e) list_double_large_graphic_pane_vc_g1

0xf219,	// (0x00047a5a) list_double_large_graphic_pane_vc_g2_ParamLimits

0xf219,	// (0x00047a5a) list_double_large_graphic_pane_vc_g2

0xeec6,	// (0x00047707) list_double_large_graphic_pane_vc_g3_ParamLimits

0xeec6,	// (0x00047707) list_double_large_graphic_pane_vc_g3

0xf228,	// (0x00047a69) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf228,	// (0x00047a69) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa9a,	// (0x000482db) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa9a,	// (0x000482db) list_double_large_graphic_pane_vc_g

0xf234,	// (0x00047a75) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf234,	// (0x00047a75) list_double_large_graphic_pane_vc_t1

0xf246,	// (0x00047a87) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf246,	// (0x00047a87) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa3,	// (0x000482e4) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa3,	// (0x000482e4) list_double_large_graphic_pane_vc_t

0xeeba,	// (0x000476fb) list_double_heading_pane_vc_g1_ParamLimits

0xeeba,	// (0x000476fb) list_double_heading_pane_vc_g1

0xeec6,	// (0x00047707) list_double_heading_pane_vc_g2_ParamLimits

0xeec6,	// (0x00047707) list_double_heading_pane_vc_g2

0x0001,

0xf616,	// (0x00047e57) list_double_heading_pane_vc_g_ParamLimits

0xf616,	// (0x00047e57) list_double_heading_pane_vc_g

0xf25f,	// (0x00047aa0) list_double_heading_pane_vc_t1_ParamLimits

0xf25f,	// (0x00047aa0) list_double_heading_pane_vc_t1

0xf095,	// (0x000478d6) list_double_heading_pane_vc_t2_ParamLimits

0xf095,	// (0x000478d6) list_double_heading_pane_vc_t2

0x0001,

0xfaa8,	// (0x000482e9) list_double_heading_pane_vc_t_ParamLimits

0xfaa8,	// (0x000482e9) list_double_heading_pane_vc_t

0xf073,	// (0x000478b4) list_double_graphic_pane_vc_g1_ParamLimits

0xf073,	// (0x000478b4) list_double_graphic_pane_vc_g1

0xf273,	// (0x00047ab4) list_double_graphic_pane_vc_g2_ParamLimits

0xf273,	// (0x00047ab4) list_double_graphic_pane_vc_g2

0xf282,	// (0x00047ac3) list_double_graphic_pane_vc_g3_ParamLimits

0xf282,	// (0x00047ac3) list_double_graphic_pane_vc_g3

0x0002,

0xfaad,	// (0x000482ee) list_double_graphic_pane_vc_g_ParamLimits

0xfaad,	// (0x000482ee) list_double_graphic_pane_vc_g

0xf28e,	// (0x00047acf) list_double_graphic_pane_vc_t1_ParamLimits

0xf28e,	// (0x00047acf) list_double_graphic_pane_vc_t1

0xf1cf,	// (0x00047a10) list_double_graphic_pane_vc_t2_ParamLimits

0xf1cf,	// (0x00047a10) list_double_graphic_pane_vc_t2

0x0001,

0xfab4,	// (0x000482f5) list_double_graphic_pane_vc_t_ParamLimits

0xfab4,	// (0x000482f5) list_double_graphic_pane_vc_t

0x5a74,	// (0x0003e2b5) aid_size_cell_fastswap

0x879a,	// (0x00040fdb) aid_size_cell_touch_ParamLimits

0x879a,	// (0x00040fdb) aid_size_cell_touch

0x5ce1,	// (0x0003e522) popup_fast_swap_wide_window_ParamLimits

0x5ce1,	// (0x0003e522) popup_fast_swap_wide_window

0x88ef,	// (0x00041130) touch_pane_ParamLimits

0x88ef,	// (0x00041130) touch_pane

0xc2c0,	// (0x00044b01) button_value_adjust_pane_cp2

0xefab,	// (0x000477ec) button_value_adjust_pane_cp4

0xefb3,	// (0x000477f4) form_field_data_pane_cp2

0x42ff,	// (0x0003cb40) form_field_data_wide_pane_cp2

0xc612,	// (0x00044e53) bg_scroll_pane_ParamLimits

0x6063,	// (0x0003e8a4) scroll_handle_pane_ParamLimits

0x6077,	// (0x0003e8b8) scroll_sc2_down_pane_ParamLimits

0x6077,	// (0x0003e8b8) scroll_sc2_down_pane

0xc643,	// (0x00044e84) scroll_sc2_up_pane_ParamLimits

0xc643,	// (0x00044e84) scroll_sc2_up_pane

0xa622,	// (0x00042e63) grid_wheel_folder_pane_g1_ParamLimits

0xa622,	// (0x00042e63) grid_wheel_folder_pane_g1

0x623c,	// (0x0003ea7d) clock_nsta_pane_cp2_ParamLimits

0x623c,	// (0x0003ea7d) clock_nsta_pane_cp2

0x9177,	// (0x000419b8) listscroll_midp_pane_ParamLimits

0x9188,	// (0x000419c9) midp_canvas_pane

0xcf0c,	// (0x0004574d) nsta_clock_indic_pane

0xcf3c,	// (0x0004577d) listscroll_form_pane_vc

0xcf44,	// (0x00045785) listscroll_set_pane_vc_ParamLimits

0xcf44,	// (0x00045785) listscroll_set_pane_vc

0x9b3f,	// (0x00042380) clock_nsta_pane

0x9b69,	// (0x000423aa) indicator_nsta_pane

0xd18c,	// (0x000459cd) bg_popup_sub_pane_cp2_ParamLimits

0xd1a0,	// (0x000459e1) find_pane_cp2_ParamLimits

0xd1a0,	// (0x000459e1) find_pane_cp2

0xd1b6,	// (0x000459f7) grid_toobar_pane_ParamLimits

0xd312,	// (0x00045b53) list_form_gen_pane_vc_ParamLimits

0xd312,	// (0x00045b53) list_form_gen_pane_vc

0xd328,	// (0x00045b69) scroll_pane_cp8_vc_ParamLimits

0xd328,	// (0x00045b69) scroll_pane_cp8_vc

0xd378,	// (0x00045bb9) data_form_wide_pane_vc_ParamLimits

0xd378,	// (0x00045bb9) data_form_wide_pane_vc

0xd384,	// (0x00045bc5) form_field_data_wide_pane_vc_g1

0xd38c,	// (0x00045bcd) form_field_data_wide_pane_vc_t1_ParamLimits

0xd38c,	// (0x00045bcd) form_field_data_wide_pane_vc_t1

0xc2d4,	// (0x00044b15) input_focus_pane_cp6_vc_ParamLimits

0xc2d4,	// (0x00044b15) input_focus_pane_cp6_vc

0x9f58,	// (0x00042799) list_midp_pane_ParamLimits

0xd5b9,	// (0x00045dfa) scroll_pane_cp16_ParamLimits

0xd5b9,	// (0x00045dfa) scroll_pane_cp16

0xd5f9,	// (0x00045e3a) button_value_adjust_pane_ParamLimits

0xd5f9,	// (0x00045e3a) button_value_adjust_pane

0xa2b5,	// (0x00042af6) button_value_adjust_pane_cp6_ParamLimits

0xa2b5,	// (0x00042af6) button_value_adjust_pane_cp6

0xa3cb,	// (0x00042c0c) settings_code_pane_cp_ParamLimits

0xa3cb,	// (0x00042c0c) settings_code_pane_cp

0x8790,	// (0x00040fd1) cell_touch_pane_g1

0x8790,	// (0x00040fd1) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x00047f8d) cell_touch_pane_g

0xa501,	// (0x00042d42) cell_touch_pane_cp_ParamLimits

0xa501,	// (0x00042d42) cell_touch_pane_cp

0xa51d,	// (0x00042d5e) cell_touch_pane_ParamLimits

0xa51d,	// (0x00042d5e) cell_touch_pane

0x8790,	// (0x00040fd1) scroll_sc2_down_pane_g1

0x8790,	// (0x00040fd1) scroll_sc2_up_pane_g1

0x8880,	// (0x000410c1) bg_set_opt_pane_cp4_vc

0xe7c9,	// (0x0004700a) list_set_graphic_pane_vc_g1_ParamLimits

0xe7c9,	// (0x0004700a) list_set_graphic_pane_vc_g1

0xe7d5,	// (0x00047016) list_set_graphic_pane_vc_g2_ParamLimits

0xe7d5,	// (0x00047016) list_set_graphic_pane_vc_g2

0x0001,

0xfa31,	// (0x00048272) list_set_graphic_pane_vc_g_ParamLimits

0xfa31,	// (0x00048272) list_set_graphic_pane_vc_g

0xe7e1,	// (0x00047022) text_primary_small_cp13_vc_ParamLimits

0xe7e1,	// (0x00047022) text_primary_small_cp13_vc

0xe7f9,	// (0x0004703a) list_set_graphic_pane_vc_ParamLimits

0xe7f9,	// (0x0004703a) list_set_graphic_pane_vc

0x8880,	// (0x000410c1) input_focus_pane_cp2_vc

0x8790,	// (0x00040fd1) setting_code_pane_vc_g1

0xe80d,	// (0x0004704e) setting_code_pane_vc_t1

0xe81b,	// (0x0004705c) set_text_pane_vc_t1_ParamLimits

0xe81b,	// (0x0004705c) set_text_pane_vc_t1

0x8880,	// (0x000410c1) input_focus_pane_cp1_vc

0xe83a,	// (0x0004707b) list_set_text_pane_vc

0x8790,	// (0x00040fd1) setting_text_pane_vc_g1

0x8880,	// (0x000410c1) bg_set_opt_pane_cp2_vc

0xe844,	// (0x00047085) setting_slider_graphic_pane_vc_g1

0xe84c,	// (0x0004708d) setting_slider_graphic_pane_vc_t1

0xe85a,	// (0x0004709b) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa36,	// (0x00048277) setting_slider_graphic_pane_vc_t

0xe868,	// (0x000470a9) slider_set_pane_cp_vc

0xe870,	// (0x000470b1) slider_set_pane_vc_g1

0xe879,	// (0x000470ba) slider_set_pane_vc_g2

0x0006,

0xfa3b,	// (0x0004827c) slider_set_pane_vc_g

0xc32f,	// (0x00044b70) set_opt_bg_pane_g1_copy1

0xc337,	// (0x00044b78) set_opt_bg_pane_g2_copy1

0xe8a5,	// (0x000470e6) set_opt_bg_pane_g3_copy1

0xc347,	// (0x00044b88) set_opt_bg_pane_g4_copy1

0xc34f,	// (0x00044b90) set_opt_bg_pane_g5_copy1

0xc357,	// (0x00044b98) set_opt_bg_pane_g6_copy1

0xe8ad,	// (0x000470ee) set_opt_bg_pane_g7_copy1

0xe8b7,	// (0x000470f8) set_opt_bg_pane_g8_copy1

0xe8bf,	// (0x00047100) set_opt_bg_pane_g9_copy1

0x8880,	// (0x000410c1) bg_set_opt_pane_cp_vc

0xe8c7,	// (0x00047108) setting_slider_pane_vc_t1

0xe84c,	// (0x0004708d) setting_slider_pane_vc_t2

0xe85a,	// (0x0004709b) setting_slider_pane_vc_t3

0x0002,

0xfa4a,	// (0x0004828b) setting_slider_pane_vc_t

0xe868,	// (0x000470a9) slider_set_pane_vc

0x65d9,	// (0x0003ee1a) volume_set_pane_vc_g1

0x68d4,	// (0x0003f115) volume_set_pane_vc_g2

0x68dd,	// (0x0003f11e) volume_set_pane_vc_g3

0x68e6,	// (0x0003f127) volume_set_pane_vc_g4

0x68ef,	// (0x0003f130) volume_set_pane_vc_g5

0x68f8,	// (0x0003f139) volume_set_pane_vc_g6

0x6901,	// (0x0003f142) volume_set_pane_vc_g7

0x690a,	// (0x0003f14b) volume_set_pane_vc_g8

0x6913,	// (0x0003f154) volume_set_pane_vc_g9

0x691c,	// (0x0003f15d) volume_set_pane_vc_g10

0x0009,

0xfa51,	// (0x00048292) volume_set_pane_vc_g

0xe8d6,	// (0x00047117) volume_set_pane_vc

0xe8de,	// (0x0004711f) button_value_adjust_pane_cp1_vc

0xe8e8,	// (0x00047129) list_highlight_pane_cp2_vc

0xe8f1,	// (0x00047132) list_set_pane_vc_ParamLimits

0xe8f1,	// (0x00047132) list_set_pane_vc

0xe943,	// (0x00047184) main_pane_set_vc_t1_ParamLimits

0xe943,	// (0x00047184) main_pane_set_vc_t1

0xe958,	// (0x00047199) main_pane_set_vc_t2_ParamLimits

0xe958,	// (0x00047199) main_pane_set_vc_t2

0xe96a,	// (0x000471ab) main_pane_set_vc_t3_ParamLimits

0xe96a,	// (0x000471ab) main_pane_set_vc_t3

0xe97c,	// (0x000471bd) main_pane_set_vc_t4_ParamLimits

0xe97c,	// (0x000471bd) main_pane_set_vc_t4

0x0003,

0xfa66,	// (0x000482a7) main_pane_set_vc_t_ParamLimits

0xfa66,	// (0x000482a7) main_pane_set_vc_t

0xe98e,	// (0x000471cf) setting_code_pane_vc_ParamLimits

0xe98e,	// (0x000471cf) setting_code_pane_vc

0xe99d,	// (0x000471de) setting_slider_graphic_pane_vc

0xe99d,	// (0x000471de) setting_slider_pane_vc

0xe99d,	// (0x000471de) setting_text_pane_vc

0xe99d,	// (0x000471de) setting_volume_pane_vc

0xe9a5,	// (0x000471e6) scroll_pane_cp121_vc

0xc2ae,	// (0x00044aef) set_content_pane_vc

0xe9e3,	// (0x00047224) button_value_adjust_pane_g1

0xe9ec,	// (0x0004722d) button_value_adjust_pane_g2

0x0001,

0xfab9,	// (0x000482fa) button_value_adjust_pane_g

0xe9f5,	// (0x00047236) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe9f5,	// (0x00047236) form_field_slider_wide_pane_vc_t1

0xea09,	// (0x0004724a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xea09,	// (0x0004724a) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabe,	// (0x000482ff) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabe,	// (0x000482ff) form_field_slider_wide_pane_vc_t

0x8a4a,	// (0x0004128b) input_focus_pane_cp10_vc_ParamLimits

0x8a4a,	// (0x0004128b) input_focus_pane_cp10_vc

0xea1b,	// (0x0004725c) slider_cont_pane_cp1_vc_ParamLimits

0xea1b,	// (0x0004725c) slider_cont_pane_cp1_vc

0xe870,	// (0x000470b1) slider_form_pane_g1_cp2

0xe879,	// (0x000470ba) slider_form_pane_g2_cp2

0xea34,	// (0x00047275) form_field_slider_pane_vc_t3

0xea42,	// (0x00047283) form_field_slider_pane_vc_t4

0xea50,	// (0x00047291) slider_form_pane_vc_ParamLimits

0xea50,	// (0x00047291) slider_form_pane_vc

0xea5d,	// (0x0004729e) form_field_slider_pane_vc_t1_ParamLimits

0xea5d,	// (0x0004729e) form_field_slider_pane_vc_t1

0xea09,	// (0x0004724a) form_field_slider_pane_vc_t2_ParamLimits

0xea09,	// (0x0004724a) form_field_slider_pane_vc_t2

0x0001,

0xface,	// (0x0004830f) form_field_slider_pane_vc_t_ParamLimits

0xface,	// (0x0004830f) form_field_slider_pane_vc_t

0x8a4a,	// (0x0004128b) input_focus_pane_cp9_vc_ParamLimits

0x8a4a,	// (0x0004128b) input_focus_pane_cp9_vc

0xea79,	// (0x000472ba) slider_cont_pane_vc_ParamLimits

0xea79,	// (0x000472ba) slider_cont_pane_vc

0xea8b,	// (0x000472cc) list_form_graphic_pane_cp_vc_ParamLimits

0xea8b,	// (0x000472cc) list_form_graphic_pane_cp_vc

0xd384,	// (0x00045bc5) form_field_popup_wide_pane_vc_g1

0xeaa0,	// (0x000472e1) form_field_popup_wide_pane_vc_t1_ParamLimits

0xeaa0,	// (0x000472e1) form_field_popup_wide_pane_vc_t1

0xc2d4,	// (0x00044b15) input_focus_pane_cp8_vc_ParamLimits

0xc2d4,	// (0x00044b15) input_focus_pane_cp8_vc

0xeab7,	// (0x000472f8) list_form_wide_pane_vc_ParamLimits

0xeab7,	// (0x000472f8) list_form_wide_pane_vc

0xeac3,	// (0x00047304) list_form_graphic_pane_vc_g1

0xeacb,	// (0x0004730c) list_form_graphic_pane_vc_t1_ParamLimits

0xeacb,	// (0x0004730c) list_form_graphic_pane_vc_t1

0x8a8c,	// (0x000412cd) list_highlight_pane_cp5_vc_ParamLimits

0x8a8c,	// (0x000412cd) list_highlight_pane_cp5_vc

0xeae7,	// (0x00047328) list_form_graphic_pane_vc_ParamLimits

0xeae7,	// (0x00047328) list_form_graphic_pane_vc

0xd384,	// (0x00045bc5) form_field_popup_pane_vc_g1

0xeafd,	// (0x0004733e) form_field_popup_pane_vc_t1_ParamLimits

0xeafd,	// (0x0004733e) form_field_popup_pane_vc_t1

0xc2d4,	// (0x00044b15) input_focus_pane_cp7_vc_ParamLimits

0xc2d4,	// (0x00044b15) input_focus_pane_cp7_vc

0xeb14,	// (0x00047355) list_form_pane_vc_ParamLimits

0xeb14,	// (0x00047355) list_form_pane_vc

0xeb20,	// (0x00047361) data_form_pane_vc_t1_ParamLimits

0xeb20,	// (0x00047361) data_form_pane_vc_t1

0xc32f,	// (0x00044b70) input_focus_pane_vc_g1

0xc337,	// (0x00044b78) input_focus_pane_vc_g2

0xc33f,	// (0x00044b80) input_focus_pane_vc_g3

0xc347,	// (0x00044b88) input_focus_pane_vc_g4

0xc34f,	// (0x00044b90) input_focus_pane_vc_g5

0xc357,	// (0x00044b98) input_focus_pane_vc_g6

0xc35f,	// (0x00044ba0) input_focus_pane_vc_g7

0xc367,	// (0x00044ba8) input_focus_pane_vc_g8

0xc36f,	// (0x00044bb0) input_focus_pane_vc_g9

0x8790,	// (0x00040fd1) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x00047f16) input_focus_pane_vc_g

0xd378,	// (0x00045bb9) data_form_pane_vc_ParamLimits

0xd378,	// (0x00045bb9) data_form_pane_vc

0xd384,	// (0x00045bc5) form_field_data_pane_vc_g1

0xeb3b,	// (0x0004737c) form_field_data_pane_vc_t1_ParamLimits

0xeb3b,	// (0x0004737c) form_field_data_pane_vc_t1

0xc2d4,	// (0x00044b15) input_focus_pane_vc_ParamLimits

0xc2d4,	// (0x00044b15) input_focus_pane_vc

0xeb55,	// (0x00047396) button_value_adjust_pane_cp3_vc

0xeb5d,	// (0x0004739e) button_value_adjust_pane_cp5_vc

0xeb65,	// (0x000473a6) form_field_data_pane_vc_ParamLimits

0xeb65,	// (0x000473a6) form_field_data_pane_vc

0xeb7c,	// (0x000473bd) form_field_data_pane_vc_cp2

0xeb84,	// (0x000473c5) form_field_data_wide_pane_vc_ParamLimits

0xeb84,	// (0x000473c5) form_field_data_wide_pane_vc

0xeb9a,	// (0x000473db) form_field_data_wide_pane_vc_cp2

0xeba2,	// (0x000473e3) form_field_popup_pane_vc_ParamLimits

0xeba2,	// (0x000473e3) form_field_popup_pane_vc

0xebb9,	// (0x000473fa) form_field_popup_wide_pane_vc_ParamLimits

0xebb9,	// (0x000473fa) form_field_popup_wide_pane_vc

0xebcf,	// (0x00047410) form_field_slider_pane_vc_ParamLimits

0xebcf,	// (0x00047410) form_field_slider_pane_vc

0xebe2,	// (0x00047423) form_field_slider_wide_pane_vc_ParamLimits

0xebe2,	// (0x00047423) form_field_slider_wide_pane_vc

0xa53b,	// (0x00042d7c) grid_touch_1_pane_ParamLimits

0xa53b,	// (0x00042d7c) grid_touch_1_pane

0xa54f,	// (0x00042d90) grid_touch_2_pane_ParamLimits

0xa54f,	// (0x00042d90) grid_touch_2_pane

0xebf5,	// (0x00047436) touch_pane_g1_ParamLimits

0xebf5,	// (0x00047436) touch_pane_g1

0xec03,	// (0x00047444) cell_app_pane_cp_wide_ParamLimits

0xec03,	// (0x00047444) cell_app_pane_cp_wide

0xec14,	// (0x00047455) grid_popup_fast_wide_pane_ParamLimits

0xec14,	// (0x00047455) grid_popup_fast_wide_pane

0xec28,	// (0x00047469) scroll_pane_cp19_ParamLimits

0xec28,	// (0x00047469) scroll_pane_cp19

0x8880,	// (0x000410c1) bg_popup_window_pane_cp20

0xec3c,	// (0x0004747d) listscroll_popup_fast_wide_pane

0xec44,	// (0x00047485) grid_indicator_nsta_pane

0xec52,	// (0x00047493) clock_nsta_pane_g1

0xec5b,	// (0x0004749c) clock_nsta_pane_t1

0xa579,	// (0x00042dba) cell_indicator_nsta_pane_ParamLimits

0xa579,	// (0x00042dba) cell_indicator_nsta_pane

0xebf5,	// (0x00047436) cell_indicator_nsta_pane_g1

0xa596,	// (0x00042dd7) cell_indicator_nsta_pane_g2

0x0001,

0xfad8,	// (0x00048319) cell_indicator_nsta_pane_g

0xec77,	// (0x000474b8) clock_nsta_pane_cp

0xec7f,	// (0x000474c0) indicator_nsta_pane_cp

0xec87,	// (0x000474c8) nsta_clock_indic_pane_g1

0x8b7b,	// (0x000413bc) grid_indicator_pane

0xc735,	// (0x00044f76) scroll_pane_cp29

0x618b,	// (0x0003e9cc) indicator_nsta_pane_cp2_ParamLimits

0x618b,	// (0x0003e9cc) indicator_nsta_pane_cp2

0x8a8c,	// (0x000412cd) main_apps_wheel_pane

0xd4a0,	// (0x00045ce1) form_midp_field_text_pane_ParamLimits

0xd5d9,	// (0x00045e1a) scroll_bar_cp050_ParamLimits

0xecbf,	// (0x00047500) cell_indicator_pane_ParamLimits

0xecbf,	// (0x00047500) cell_indicator_pane

0xecdc,	// (0x0004751d) cell_indicator_pane_g1

0xa5ac,	// (0x00042ded) grid_wheel_folder_pane_ParamLimits

0xa5ac,	// (0x00042ded) grid_wheel_folder_pane

0xa5ba,	// (0x00042dfb) list_wheel_apps_pane_ParamLimits

0xa5ba,	// (0x00042dfb) list_wheel_apps_pane

0xa5c8,	// (0x00042e09) main_apps_wheel_pane_g1_ParamLimits

0xa5c8,	// (0x00042e09) main_apps_wheel_pane_g1

0xa5d4,	// (0x00042e15) main_apps_wheel_pane_g2_ParamLimits

0xa5d4,	// (0x00042e15) main_apps_wheel_pane_g2

0x0001,

0xfae7,	// (0x00048328) main_apps_wheel_pane_g_ParamLimits

0xfae7,	// (0x00048328) main_apps_wheel_pane_g

0xa5e2,	// (0x00042e23) main_apps_wheel_pane_t1_ParamLimits

0xa5e2,	// (0x00042e23) main_apps_wheel_pane_t1

0xa5f6,	// (0x00042e37) list_wheel_apps_pane_g1

0xa5fe,	// (0x00042e3f) list_wheel_apps_pane_g2

0xa606,	// (0x00042e47) list_wheel_apps_pane_g3

0xa60e,	// (0x00042e4f) list_wheel_apps_pane_g4

0xa618,	// (0x00042e59) list_wheel_apps_pane_g5

0x0004,

0xfaec,	// (0x0004832d) list_wheel_apps_pane_g

0xcb88,	// (0x000453c9) navi_icon_text_pane

0x9a3a,	// (0x0004227b) aid_fill_nsta

0xa62f,	// (0x00042e70) navi_icon_text_pane_g1

0xa63b,	// (0x00042e7c) navi_icon_text_pane_t1

0xca24,	// (0x00045265) list_set_graphic_pane_t1_ParamLimits

0xca24,	// (0x00045265) list_set_graphic_pane_t1

0xdcb0,	// (0x000464f1) popup_midp_note_alarm_window_t6_ParamLimits

0xdcb0,	// (0x000464f1) popup_midp_note_alarm_window_t6

0xdcc2,	// (0x00046503) popup_midp_note_alarm_window_t7_ParamLimits

0xdcc2,	// (0x00046503) popup_midp_note_alarm_window_t7

0xdcd4,	// (0x00046515) popup_midp_note_alarm_window_t8_ParamLimits

0xdcd4,	// (0x00046515) popup_midp_note_alarm_window_t8

0xdce6,	// (0x00046527) popup_midp_note_alarm_window_t9_ParamLimits

0xdce6,	// (0x00046527) popup_midp_note_alarm_window_t9

0xdcf8,	// (0x00046539) popup_midp_note_alarm_window_t10_ParamLimits

0xdcf8,	// (0x00046539) popup_midp_note_alarm_window_t10

0xdd0a,	// (0x0004654b) popup_midp_note_alarm_window_t11_ParamLimits

0xdd0a,	// (0x0004654b) popup_midp_note_alarm_window_t11

0xdd1c,	// (0x0004655d) scroll_pane_cp17_ParamLimits

0xdd1c,	// (0x0004655d) scroll_pane_cp17

0x65d9,	// (0x0003ee1a) volume_small_pane_cp_g1

0x6925,	// (0x0003f166) volume_small_pane_cp_g2

0x692e,	// (0x0003f16f) volume_small_pane_cp_g3

0x6937,	// (0x0003f178) volume_small_pane_cp_g4

0x6940,	// (0x0003f181) volume_small_pane_cp_g5

0x6949,	// (0x0003f18a) volume_small_pane_cp_g6

0x6952,	// (0x0003f193) volume_small_pane_cp_g7

0x695b,	// (0x0003f19c) volume_small_pane_cp_g8

0x6964,	// (0x0003f1a5) volume_small_pane_cp_g9

0x696d,	// (0x0003f1ae) volume_small_pane_cp_g10

0xcd34,	// (0x00045575) midp_ticker_pane_g1_ParamLimits

0xcd40,	// (0x00045581) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x00047fde) midp_ticker_pane_g_ParamLimits

0x9223,	// (0x00041a64) midp_ticker_pane_t1_ParamLimits

0x9a5a,	// (0x0004229b) aid_fill_nsta_2

0xd5c5,	// (0x00045e06) list_form2_midp_pane

0xe391,	// (0x00046bd2) midp_editing_number_pane_ParamLimits

0xe3a0,	// (0x00046be1) midp_ticker_pane_ParamLimits

0xece6,	// (0x00047527) form2_midp_field_pane

0xecee,	// (0x0004752f) scroll_pane_cp51

0xed0e,	// (0x0004754f) form2_midp_button_pane_ParamLimits

0xed0e,	// (0x0004754f) form2_midp_button_pane

0xed20,	// (0x00047561) form2_midp_content_pane_ParamLimits

0xed20,	// (0x00047561) form2_midp_content_pane

0xed3a,	// (0x0004757b) form2_midp_field_choice_group_pane

0xed42,	// (0x00047583) form2_midp_field_pane_g1

0xed4a,	// (0x0004758b) form2_midp_field_pane_g2

0xed52,	// (0x00047593) form2_midp_field_pane_g3

0xed5a,	// (0x0004759b) form2_midp_field_pane_g4

0x0003,

0xfb11,	// (0x00048352) form2_midp_field_pane_g

0xed62,	// (0x000475a3) form2_midp_gauge_slider_pane

0xed6a,	// (0x000475ab) form2_midp_gauge_wait_pane

0xed72,	// (0x000475b3) form2_midp_image_pane_ParamLimits

0xed72,	// (0x000475b3) form2_midp_image_pane

0xed8d,	// (0x000475ce) form2_midp_label_pane_ParamLimits

0xed8d,	// (0x000475ce) form2_midp_label_pane

0xa669,	// (0x00042eaa) form2_midp_label_pane_cp_ParamLimits

0xa669,	// (0x00042eaa) form2_midp_label_pane_cp

0xeda6,	// (0x000475e7) form2_midp_string_pane_ParamLimits

0xeda6,	// (0x000475e7) form2_midp_string_pane

0xf2a0,	// (0x00047ae1) form2_midp_text_pane_ParamLimits

0xf2a0,	// (0x00047ae1) form2_midp_text_pane

0xedb8,	// (0x000475f9) form2_midp_time_pane

0xedc8,	// (0x00047609) input_focus_pane_cp51_ParamLimits

0xedc8,	// (0x00047609) input_focus_pane_cp51

0xede0,	// (0x00047621) form2_midp_label_pane_t1_ParamLimits

0xede0,	// (0x00047621) form2_midp_label_pane_t1

0xf2bb,	// (0x00047afc) form2_mdip_text_pane_t1_ParamLimits

0xf2bb,	// (0x00047afc) form2_mdip_text_pane_t1

0xf2d7,	// (0x00047b18) form2_midp_time_pane_t1

0xee28,	// (0x00047669) form2_midp_gauge_slider_pane_t1

0xa68a,	// (0x00042ecb) form2_midp_gauge_slider_pane_t2

0xa69c,	// (0x00042edd) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1a,	// (0x0004835b) form2_midp_gauge_slider_pane_t

0xee3a,	// (0x0004767b) form2_midp_slider_pane

0xee46,	// (0x00047687) form2_midp_gauge_wait_pane_t1

0xee54,	// (0x00047695) form2_midp_wait_pane_ParamLimits

0xee54,	// (0x00047695) form2_midp_wait_pane

0xa6ae,	// (0x00042eef) list_single_2graphic_pane_cp4_ParamLimits

0xa6ae,	// (0x00042eef) list_single_2graphic_pane_cp4

0x9edf,	// (0x00042720) list_single_midp_graphic_pane_cp_ParamLimits

0x9edf,	// (0x00042720) list_single_midp_graphic_pane_cp

0x8880,	// (0x000410c1) list_highlight_pane_cp20

0xee7f,	// (0x000476c0) list_single_2graphic_pane_g1_cp4

0xe6ce,	// (0x00046f0f) list_single_2graphic_pane_g2_cp4

0xee87,	// (0x000476c8) list_single_2graphic_pane_t1_cp4

0x8a8c,	// (0x000412cd) list_highlight_pane_cp21

0xee96,	// (0x000476d7) list_single_midp_graphic_pane_g4_cp

0xeea5,	// (0x000476e6) list_single_midp_graphic_pane_t1_cp

0xa6c5,	// (0x00042f06) form2_mdip_string_pane_t1_ParamLimits

0xa6c5,	// (0x00042f06) form2_mdip_string_pane_t1

0x8880,	// (0x000410c1) bg_wml_button_pane_cp2

0x8790,	// (0x00040fd1) form2_midp_image_pane_g1

0xef4c,	// (0x0004778d) list_double_large_graphic_pane_g5_ParamLimits

0xef4c,	// (0x0004778d) list_double_large_graphic_pane_g5

0x9177,	// (0x000419b8) midp_form_pane_ParamLimits

0x8a8c,	// (0x000412cd) main_apps_wheel_pane_ParamLimits

0x9796,	// (0x00041fd7) popup_preview_window_ParamLimits

0x9796,	// (0x00041fd7) popup_preview_window

0xd02d,	// (0x0004586e) popup_touch_info_window_ParamLimits

0xd02d,	// (0x0004586e) popup_touch_info_window

0xd04b,	// (0x0004588c) popup_touch_menu_window_ParamLimits

0xd04b,	// (0x0004588c) popup_touch_menu_window

0x8786,	// (0x00040fc7) bg_popup_sub_pane_cp6

0x098d,	// (0x000391ce) list_touch_menu_pane

0x0995,	// (0x000391d6) list_single_touch_menu_pane_ParamLimits

0x0995,	// (0x000391d6) list_single_touch_menu_pane

0x09aa,	// (0x000391eb) list_single_touch_menu_pane_t1

0x8a8c,	// (0x000412cd) bg_popup_sub_pane_cp7_ParamLimits

0x8a8c,	// (0x000412cd) bg_popup_sub_pane_cp7

0x09b8,	// (0x000391f9) heading_sub_pane

0x09c0,	// (0x00039201) list_touch_info_pane_ParamLimits

0x09c0,	// (0x00039201) list_touch_info_pane

0x09cf,	// (0x00039210) list_single_touch_info_pane_ParamLimits

0x09cf,	// (0x00039210) list_single_touch_info_pane

0x09e1,	// (0x00039222) list_single_touch_info_pane_t1

0x09ef,	// (0x00039230) list_single_touch_info_pane_t2

0x0001,

0xfb28,	// (0x00048369) list_single_touch_info_pane_t

0xcd0a,	// (0x0004554b) bg_popup_heading_pane_cp

0x09fd,	// (0x0003923e) heading_sub_pane_t1

0xd33e,	// (0x00045b7f) bg_popup_preview_window_pane_cp_ParamLimits

0xd33e,	// (0x00045b7f) bg_popup_preview_window_pane_cp

0x09b8,	// (0x000391f9) heading_preview_pane

0x09c0,	// (0x00039201) list_preview_pane_ParamLimits

0x09c0,	// (0x00039201) list_preview_pane

0x0a0b,	// (0x0003924c) popup_preview_window_g1

0x09cf,	// (0x00039210) list_single_preview_pane_ParamLimits

0x09cf,	// (0x00039210) list_single_preview_pane

0x0a13,	// (0x00039254) list_single_preview_pane_g1

0x0a1b,	// (0x0003925c) list_single_preview_pane_t1

0x09e1,	// (0x00039222) list_single_preview_pane_t2

0x0001,

0xfb2d,	// (0x0004836e) list_single_preview_pane_t

0x0a29,	// (0x0003926a) bg_popup_heading_pane_cp2_ParamLimits

0x0a29,	// (0x0003926a) bg_popup_heading_pane_cp2

0x0a3f,	// (0x00039280) heading_preview_pane_g1

0x0a47,	// (0x00039288) heading_preview_pane_t1_ParamLimits

0x0a47,	// (0x00039288) heading_preview_pane_t1

0x8bab,	// (0x000413ec) soft_indicator_pane_t1_ParamLimits

0xc23b,	// (0x00044a7c) scroll_pane_ParamLimits

0xc631,	// (0x00044e72) scroll_sc2_left_pane

0xc63a,	// (0x00044e7b) scroll_sc2_right_pane

0xc659,	// (0x00044e9a) scroll_bg_pane_g1_ParamLimits

0xc66e,	// (0x00044eaf) scroll_bg_pane_g2_ParamLimits

0xc686,	// (0x00044ec7) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x00047f6d) scroll_bg_pane_g_ParamLimits

0xc659,	// (0x00044e9a) scroll_handle_pane_g1_ParamLimits

0xc6a8,	// (0x00044ee9) scroll_handle_pane_g2_ParamLimits

0xc686,	// (0x00044ec7) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x00047f74) scroll_handle_pane_g_ParamLimits

0xcf76,	// (0x000457b7) popup_choice_list_window_ParamLimits

0xcf76,	// (0x000457b7) popup_choice_list_window

0xd198,	// (0x000459d9) choice_list_pane

0xd21a,	// (0x00045a5b) cell_toolbar_pane_t1

0xd242,	// (0x00045a83) toolbar_button_pane_ParamLimits

0xe0fa,	// (0x0004693b) ai_gene_pane_1_t2_ParamLimits

0xe0fa,	// (0x0004693b) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0004818c) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0004818c) ai_gene_pane_1_t

0x0a64,	// (0x000392a5) scroll_sc2_left_pane_g1

0x0a64,	// (0x000392a5) scroll_sc2_right_pane_g1

0xc41f,	// (0x00044c60) bg_popup_sub_pane_cp10

0x0a6e,	// (0x000392af) list_choice_list_pane

0x0a85,	// (0x000392c6) list_single_choice_list_pane_ParamLimits

0x0a85,	// (0x000392c6) list_single_choice_list_pane

0x0a99,	// (0x000392da) list_single_choice_list_pane_g1

0x0aa1,	// (0x000392e2) list_single_choice_list_pane_t1_ParamLimits

0x0aa1,	// (0x000392e2) list_single_choice_list_pane_t1

0x0ab6,	// (0x000392f7) choice_list_pane_g1

0x0abe,	// (0x000392ff) choice_list_pane_t1

0x8786,	// (0x00040fc7) input_focus_pane_cp11

0xc594,	// (0x00044dd5) title_pane_stacon_g2_ParamLimits

0xc594,	// (0x00044dd5) title_pane_stacon_g2

0x0002,

0xf712,	// (0x00047f53) title_pane_stacon_g_ParamLimits

0xf712,	// (0x00047f53) title_pane_stacon_g

0xcd0a,	// (0x0004554b) cursor_press_pane

0x9455,	// (0x00041c96) popup_fep_hwr_window_ParamLimits

0x9455,	// (0x00041c96) popup_fep_hwr_window

0xcfca,	// (0x0004580b) popup_fep_vkb_window_ParamLimits

0xcfca,	// (0x0004580b) popup_fep_vkb_window

0x0acc,	// (0x0003930d) cursor_press_pane_g1

0x0002,

0xfb56,	// (0x00048397) fep_vkb_side_pane_g_ParamLimits

0x69af,	// (0x0003f1f0) fep_hwr_candidate_pane_ParamLimits

0x69af,	// (0x0003f1f0) fep_hwr_candidate_pane

0x69d9,	// (0x0003f21a) fep_hwr_side_pane_ParamLimits

0x69d9,	// (0x0003f21a) fep_hwr_side_pane

0x69f9,	// (0x0003f23a) fep_hwr_top_pane_ParamLimits

0x69f9,	// (0x0003f23a) fep_hwr_top_pane

0x6a11,	// (0x0003f252) fep_hwr_write_pane_ParamLimits

0x6a11,	// (0x0003f252) fep_hwr_write_pane

0xfb56,	// (0x00048397) fep_vkb_side_pane_g

0x0ae6,	// (0x00039327) fep_hwr_top_pane_g1

0x0ad4,	// (0x00039315) fep_hwr_top_pane_g2

0x6a4b,	// (0x0003f28c) fep_hwr_top_pane_g3

0x0002,

0xfb32,	// (0x00048373) fep_hwr_top_pane_g

0x6a60,	// (0x0003f2a1) fep_hwr_top_text_pane

0xc7fb,	// (0x0004503c) fep_hwr_top_text_pane_g1

0x0b1c,	// (0x0003935d) fep_hwr_top_text_pane_t1

0x6b56,	// (0x0003f397) fep_hwr_candidate_pane_g1

0x0d76,	// (0x000395b7) fep_vkb_keypad_pane_g3_ParamLimits

0x0d76,	// (0x000395b7) fep_vkb_keypad_pane_g3

0x0d9e,	// (0x000395df) fep_vkb_keypad_pane_g4_ParamLimits

0x0d9e,	// (0x000395df) fep_vkb_keypad_pane_g4

0x0e0d,	// (0x0003964e) fep_vkb_bottom_pane_g2_ParamLimits

0x0e0d,	// (0x0003964e) fep_vkb_bottom_pane_g2

0x0001,

0xfb5d,	// (0x0004839e) fep_vkb_bottom_pane_g_ParamLimits

0xfb5d,	// (0x0004839e) fep_vkb_bottom_pane_g

0x0a64,	// (0x000392a5) cell_vkb_side_pane_g2

0x0001,

0xfb67,	// (0x000483a8) cell_vkb_side_pane_g

0x0e98,	// (0x000396d9) cell_vkb_side_pane_t1

0x0ea6,	// (0x000396e7) cell_vkb_side_pane_t1_copy1

0x0a64,	// (0x000392a5) bg_fep_vkb_candidate_pane_g2

0x0fd8,	// (0x00039819) cell_vkb_candidate_pane_ParamLimits

0x0b2a,	// (0x0003936b) aid_size_cell_vkb_ParamLimits

0x0b2a,	// (0x0003936b) aid_size_cell_vkb

0x0fd8,	// (0x00039819) cell_vkb_candidate_pane

0x6b7d,	// (0x0003f3be) bg_popup_fep_shadow_pane_g1

0x0bb8,	// (0x000393f9) fep_vkb_bottom_pane_ParamLimits

0x0bb8,	// (0x000393f9) fep_vkb_bottom_pane

0x0bf5,	// (0x00039436) fep_vkb_candidate_pane_ParamLimits

0x0bf5,	// (0x00039436) fep_vkb_candidate_pane

0x0c11,	// (0x00039452) fep_vkb_keypad_pane_ParamLimits

0x0c11,	// (0x00039452) fep_vkb_keypad_pane

0x0c57,	// (0x00039498) fep_vkb_side_pane_ParamLimits

0x0c57,	// (0x00039498) fep_vkb_side_pane

0x0c93,	// (0x000394d4) fep_vkb_top_pane_ParamLimits

0x0c93,	// (0x000394d4) fep_vkb_top_pane

0x0ccf,	// (0x00039510) fep_vkb_top_pane_g1_ParamLimits

0x0ccf,	// (0x00039510) fep_vkb_top_pane_g1

0x0cde,	// (0x0003951f) fep_vkb_top_pane_g2_ParamLimits

0x0cde,	// (0x0003951f) fep_vkb_top_pane_g2

0x0ced,	// (0x0003952e) fep_vkb_top_pane_g3_ParamLimits

0x0ced,	// (0x0003952e) fep_vkb_top_pane_g3

0x0003,

0xfb4d,	// (0x0004838e) fep_vkb_top_pane_g_ParamLimits

0xfb4d,	// (0x0004838e) fep_vkb_top_pane_g

0x0d0b,	// (0x0003954c) fep_vkb_top_text_pane_ParamLimits

0x0d0b,	// (0x0003954c) fep_vkb_top_text_pane

0xa7b7,	// (0x00042ff8) fep_vkb_side_pane_g1_ParamLimits

0xa7b7,	// (0x00042ff8) fep_vkb_side_pane_g1

0x0d65,	// (0x000395a6) grid_vkb_side_pane_ParamLimits

0x0d65,	// (0x000395a6) grid_vkb_side_pane

0x6b85,	// (0x0003f3c6) bg_popup_fep_shadow_pane_g2

0x6b8e,	// (0x0003f3cf) bg_popup_fep_shadow_pane_g3

0x6b96,	// (0x0003f3d7) bg_popup_fep_shadow_pane_g4

0x6b9f,	// (0x0003f3e0) bg_popup_fep_shadow_pane_g5

0x6ba9,	// (0x0003f3ea) bg_popup_fep_shadow_pane_g6

0x6bb1,	// (0x0003f3f2) bg_popup_fep_shadow_pane_g7

0xc347,	// (0x00044b88) bg_popup_fep_shadow_pane_g8

0x0dbc,	// (0x000395fd) grid_vkb_keypad_number_pane_ParamLimits

0x0dbc,	// (0x000395fd) grid_vkb_keypad_number_pane

0x0dcc,	// (0x0003960d) grid_vkb_keypad_pane_ParamLimits

0x0dcc,	// (0x0003960d) grid_vkb_keypad_pane

0x0df2,	// (0x00039633) fep_vkb_bottom_pane_g1_ParamLimits

0x0df2,	// (0x00039633) fep_vkb_bottom_pane_g1

0x0e1b,	// (0x0003965c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x0e1b,	// (0x0003965c) grid_vkb_keypad_bottom_left_pane

0x0e30,	// (0x00039671) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x0e30,	// (0x00039671) grid_vkb_keypad_bottom_right_pane

0x0e45,	// (0x00039686) fep_vkb_top_text_pane_g1

0xa7fe,	// (0x0004303f) fep_vkb_top_text_pane_t1

0xa810,	// (0x00043051) cell_vkb_side_pane_ParamLimits

0xa810,	// (0x00043051) cell_vkb_side_pane

0x0a64,	// (0x000392a5) cell_vkb_side_pane_g1

0x0eb4,	// (0x000396f5) cell_vkb_keypad_pane_ParamLimits

0x0eb4,	// (0x000396f5) cell_vkb_keypad_pane

0x0f2f,	// (0x00039770) cell_vkb_keypad_pane_g1

0x0008,

0xfb7a,	// (0x000483bb) bg_popup_fep_shadow_pane_g

0x6bc3,	// (0x0003f404) cell_hwr_side_pane_g1

0x6bc3,	// (0x0003f404) cell_hwr_side_pane_g2

0x0f39,	// (0x0003977a) cell_vkb_keypad_pane_t1

0xa826,	// (0x00043067) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa826,	// (0x00043067) cell_vkb_keypad_bottom_left_pane

0xa83b,	// (0x0004307c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa83b,	// (0x0004307c) cell_vkb_keypad_bottom_right_pane

0x0a64,	// (0x000392a5) cell_vkb_keypad_bottom_left_pane_g1

0x0a64,	// (0x000392a5) cell_vkb_keypad_bottom_right_pane_g1

0x0f9d,	// (0x000397de) cell_vkb_keypad_number_pane_ParamLimits

0x0f9d,	// (0x000397de) cell_vkb_keypad_number_pane

0x0fbc,	// (0x000397fd) cell_vkb_keypad_number_pane_g1

0x0fc6,	// (0x00039807) cell_vkb_keypad_number_pane_g2

0x0fcf,	// (0x00039810) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6c,	// (0x000483ad) cell_vkb_keypad_number_pane_g

0x0f39,	// (0x0003977a) cell_vkb_keypad_number_pane_t1

0x1003,	// (0x00039844) fep_vkb_candidate_pane_g1

0x0001,

0xfb8d,	// (0x000483ce) cell_hwr_side_pane_g

0x101c,	// (0x0003985d) cell_hwr_side_pane_t1

0x6bcd,	// (0x0003f40e) cell_hwr_side_pane_t1_copy1

0x6bdb,	// (0x0003f41c) cell_hwr_candidate_pane_g1

0x6c0a,	// (0x0003f44b) cell_hwr_candidate_pane_t1

0x0a64,	// (0x000392a5) cell_vkb_candidate_pane_g2

0x10a2,	// (0x000398e3) cell_vkb_candidate_pane_t1

0x6976,	// (0x0003f1b7) bg_popup_fep_shadow_pane_ParamLimits

0x6976,	// (0x0003f1b7) bg_popup_fep_shadow_pane

0x6a2b,	// (0x0003f26c) bg_fep_hwr_top_pane_g4

0x0af8,	// (0x00039339) bg_hwr_side_pane_g1_ParamLimits

0x0af8,	// (0x00039339) bg_hwr_side_pane_g1

0xa763,	// (0x00042fa4) cell_hwr_side_pane_ParamLimits

0xa763,	// (0x00042fa4) cell_hwr_side_pane

0x6ad7,	// (0x0003f318) fep_hwr_write_pane_g1_ParamLimits

0x6ad7,	// (0x0003f318) fep_hwr_write_pane_g1

0x6ae4,	// (0x0003f325) fep_hwr_write_pane_g2_ParamLimits

0x6ae4,	// (0x0003f325) fep_hwr_write_pane_g2

0x6af1,	// (0x0003f332) fep_hwr_write_pane_g3_ParamLimits

0x6af1,	// (0x0003f332) fep_hwr_write_pane_g3

0xa783,	// (0x00042fc4) fep_hwr_write_pane_g4_ParamLimits

0xa783,	// (0x00042fc4) fep_hwr_write_pane_g4

0x0005,

0xfb39,	// (0x0004837a) fep_hwr_write_pane_g_ParamLimits

0xfb39,	// (0x0004837a) fep_hwr_write_pane_g

0x6a2b,	// (0x0003f26c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6a2b,	// (0x0003f26c) bg_fep_hwr_candidate_pane_g2

0x6b14,	// (0x0003f355) cell_hwr_candidate_pane_ParamLimits

0x6b14,	// (0x0003f355) cell_hwr_candidate_pane

0x6b56,	// (0x0003f397) fep_hwr_candidate_pane_g1_ParamLimits

0x0b58,	// (0x00039399) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x0b58,	// (0x00039399) bg_popup_fep_shadow_pane_cp2

0x0cfd,	// (0x0003953e) fep_vkb_top_pane_g4_ParamLimits

0x0cfd,	// (0x0003953e) fep_vkb_top_pane_g4

0x0d43,	// (0x00039584) fep_vkb_side_pane_g2_ParamLimits

0x0d43,	// (0x00039584) fep_vkb_side_pane_g2

0x4225,	// (0x0003ca66) list_setting_pane_t4_ParamLimits

0x4225,	// (0x0003ca66) list_setting_pane_t4

0x42a7,	// (0x0003cae8) list_setting_number_pane_t5_ParamLimits

0x42a7,	// (0x0003cae8) list_setting_number_pane_t5

0x90bc,	// (0x000418fd) list_double_heading_pane_cp2_ParamLimits

0x90bc,	// (0x000418fd) list_double_heading_pane_cp2

0xc26f,	// (0x00044ab0) list_double_heading_pane_g1_cp2_ParamLimits

0xc26f,	// (0x00044ab0) list_double_heading_pane_g1_cp2

0xc2ee,	// (0x00044b2f) list_double_heading_pane_g2_cp2_ParamLimits

0xc2ee,	// (0x00044b2f) list_double_heading_pane_g2_cp2

0x10b0,	// (0x000398f1) list_double_heading_pane_t1_cp2_ParamLimits

0x10b0,	// (0x000398f1) list_double_heading_pane_t1_cp2

0x10c6,	// (0x00039907) list_double_heading_pane_t2_cp2_ParamLimits

0x10c6,	// (0x00039907) list_double_heading_pane_t2_cp2

0x876e,	// (0x00040faf) aid_value_unit2

0x5d2d,	// (0x0003e56e) popup_preview_fixed_window

0x8d66,	// (0x000415a7) bg_popup_preview_window_pane_cp02

0x10d8,	// (0x00039919) list_preview_fixed_pane

0x111e,	// (0x0003995f) list_empty_pane_fp_ParamLimits

0x111e,	// (0x0003995f) list_empty_pane_fp

0x111e,	// (0x0003995f) list_single_cale_day_pane_fp_ParamLimits

0x111e,	// (0x0003995f) list_single_cale_day_pane_fp

0x111e,	// (0x0003995f) list_single_graphic_heading_pane_fp_ParamLimits

0x111e,	// (0x0003995f) list_single_graphic_heading_pane_fp

0x111e,	// (0x0003995f) list_single_graphic_pane_fp_ParamLimits

0x111e,	// (0x0003995f) list_single_graphic_pane_fp

0x111e,	// (0x0003995f) list_single_heading_pane_fp_ParamLimits

0x111e,	// (0x0003995f) list_single_heading_pane_fp

0x111e,	// (0x0003995f) list_single_pane_fp_ParamLimits

0x111e,	// (0x0003995f) list_single_pane_fp

0x1135,	// (0x00039976) list_single_pane_fp_g1_ParamLimits

0x1135,	// (0x00039976) list_single_pane_fp_g1

0xef06,	// (0x00047747) list_single_pane_fp_g2_ParamLimits

0xef06,	// (0x00047747) list_single_pane_fp_g2

0xf2ea,	// (0x00047b2b) list_single_pane_fp_g3_ParamLimits

0xf2ea,	// (0x00047b2b) list_single_pane_fp_g3

0x1141,	// (0x00039982) list_single_pane_fp_g4_ParamLimits

0x1141,	// (0x00039982) list_single_pane_fp_g4

0x0003,

0xfba0,	// (0x000483e1) list_single_pane_fp_g_ParamLimits

0xfba0,	// (0x000483e1) list_single_pane_fp_g

0xf2fe,	// (0x00047b3f) list_single_pane_fp_t1_ParamLimits

0xf2fe,	// (0x00047b3f) list_single_pane_fp_t1

0xf315,	// (0x00047b56) list_single_graphic_pane_fp_g1_ParamLimits

0xf315,	// (0x00047b56) list_single_graphic_pane_fp_g1

0x1135,	// (0x00039976) list_single_graphic_pane_fp_g2_ParamLimits

0x1135,	// (0x00039976) list_single_graphic_pane_fp_g2

0xef06,	// (0x00047747) list_single_graphic_pane_fp_g3_ParamLimits

0xef06,	// (0x00047747) list_single_graphic_pane_fp_g3

0xf2ea,	// (0x00047b2b) list_single_graphic_pane_fp_g4_ParamLimits

0xf2ea,	// (0x00047b2b) list_single_graphic_pane_fp_g4

0x1141,	// (0x00039982) list_single_graphic_pane_fp_g5_ParamLimits

0x1141,	// (0x00039982) list_single_graphic_pane_fp_g5

0x0004,

0xfba9,	// (0x000483ea) list_single_graphic_pane_fp_g_ParamLimits

0xfba9,	// (0x000483ea) list_single_graphic_pane_fp_g

0xf321,	// (0x00047b62) list_single_graphic_pane_fp_t1_ParamLimits

0xf321,	// (0x00047b62) list_single_graphic_pane_fp_t1

0xf315,	// (0x00047b56) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf315,	// (0x00047b56) list_single_graphic_heading_pane_fp_g1

0x1135,	// (0x00039976) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x1135,	// (0x00039976) list_single_graphic_heading_pane_fp_g2

0xef06,	// (0x00047747) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xef06,	// (0x00047747) list_single_graphic_heading_pane_fp_g3

0xf2ea,	// (0x00047b2b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf2ea,	// (0x00047b2b) list_single_graphic_heading_pane_fp_g4

0x1141,	// (0x00039982) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x1141,	// (0x00039982) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba9,	// (0x000483ea) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x000483ea) list_single_graphic_heading_pane_fp_g

0xf337,	// (0x00047b78) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf337,	// (0x00047b78) list_single_graphic_heading_pane_fp_t1

0xf34d,	// (0x00047b8e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf34d,	// (0x00047b8e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb4,	// (0x000483f5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb4,	// (0x000483f5) list_single_graphic_heading_pane_fp_t

0xf35f,	// (0x00047ba0) list_single_cale_day_pane_fp_g1_ParamLimits

0xf35f,	// (0x00047ba0) list_single_cale_day_pane_fp_g1

0x114d,	// (0x0003998e) list_single_cale_day_pane_fp_g2_ParamLimits

0x114d,	// (0x0003998e) list_single_cale_day_pane_fp_g2

0xf397,	// (0x00047bd8) list_single_cale_day_pane_fp_g3_ParamLimits

0xf397,	// (0x00047bd8) list_single_cale_day_pane_fp_g3

0xf3bf,	// (0x00047c00) list_single_cale_day_pane_fp_g4_ParamLimits

0xf3bf,	// (0x00047c00) list_single_cale_day_pane_fp_g4

0xf3e3,	// (0x00047c24) list_single_cale_day_pane_fp_g5_ParamLimits

0xf3e3,	// (0x00047c24) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb9,	// (0x000483fa) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb9,	// (0x000483fa) list_single_cale_day_pane_fp_g

0xf407,	// (0x00047c48) list_single_cale_day_pane_fp_t1_ParamLimits

0xf407,	// (0x00047c48) list_single_cale_day_pane_fp_t1

0xf42d,	// (0x00047c6e) list_single_cale_day_pane_fp_t2_ParamLimits

0xf42d,	// (0x00047c6e) list_single_cale_day_pane_fp_t2

0xf446,	// (0x00047c87) list_single_cale_day_pane_fp_t3_ParamLimits

0xf446,	// (0x00047c87) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc4,	// (0x00048405) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc4,	// (0x00048405) list_single_cale_day_pane_fp_t

0x1135,	// (0x00039976) list_empty_pane_fp_g1_ParamLimits

0x1135,	// (0x00039976) list_empty_pane_fp_g1

0xf45f,	// (0x00047ca0) list_empty_pane_fp_t1

0xf46d,	// (0x00047cae) list_empty_pane_fp_t2

0x0001,

0xfbcb,	// (0x0004840c) list_empty_pane_fp_t

0x1135,	// (0x00039976) list_single_heading_pane_fp_g1_ParamLimits

0x1135,	// (0x00039976) list_single_heading_pane_fp_g1

0xef06,	// (0x00047747) list_single_heading_pane_fp_g2_ParamLimits

0xef06,	// (0x00047747) list_single_heading_pane_fp_g2

0xf2ea,	// (0x00047b2b) list_single_heading_pane_fp_g3_ParamLimits

0xf2ea,	// (0x00047b2b) list_single_heading_pane_fp_g3

0x0002,

0xfbd0,	// (0x00048411) list_single_heading_pane_fp_g_ParamLimits

0xfbd0,	// (0x00048411) list_single_heading_pane_fp_g

0xf47b,	// (0x00047cbc) list_single_heading_pane_fp_t1_ParamLimits

0xf47b,	// (0x00047cbc) list_single_heading_pane_fp_t1

0xf48d,	// (0x00047cce) list_single_heading_pane_fp_t2_ParamLimits

0xf48d,	// (0x00047cce) list_single_heading_pane_fp_t2

0x0001,

0xfbd7,	// (0x00048418) list_single_heading_pane_fp_t_ParamLimits

0xfbd7,	// (0x00048418) list_single_heading_pane_fp_t

0xc42b,	// (0x00044c6c) aid_size_cell_fast

0x8ce6,	// (0x00041527) soft_indicator_pane_cp1_t1

0xc468,	// (0x00044ca9) cell_app_pane_cp2_ParamLimits

0xc468,	// (0x00044ca9) cell_app_pane_cp2

0x6998,	// (0x0003f1d9) fep_hwr_candidate_drop_down_list_pane

0x6b70,	// (0x0003f3b1) fep_hwr_candidate_pane_g3_ParamLimits

0x6b70,	// (0x0003f3b1) fep_hwr_candidate_pane_g3

0xa798,	// (0x00042fd9) fep_hwr_candidate_pane_g4_ParamLimits

0xa798,	// (0x00042fd9) fep_hwr_candidate_pane_g4

0x0002,

0xfb46,	// (0x00048387) fep_hwr_candidate_pane_g_ParamLimits

0xfb46,	// (0x00048387) fep_hwr_candidate_pane_g

0x0be4,	// (0x00039425) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x0be4,	// (0x00039425) fep_vkb_candidate_drop_down_list_pane

0x100b,	// (0x0003984c) fep_vkb_candidate_pane_g3

0x1013,	// (0x00039854) fep_vkb_candidate_pane_g4

0x0002,

0xfb73,	// (0x000483b4) fep_vkb_candidate_pane_g

0x6bdb,	// (0x0003f41c) cell_hwr_candidate_pane_g1_ParamLimits

0x6be9,	// (0x0003f42a) cell_hwr_candidate_pane_g3_ParamLimits

0x6be9,	// (0x0003f42a) cell_hwr_candidate_pane_g3

0x1c97,	// (0x0003a4d8) cell_hwr_candidate_pane_g4_ParamLimits

0x1c97,	// (0x0003a4d8) cell_hwr_candidate_pane_g4

0x0002,

0xfb92,	// (0x000483d3) cell_hwr_candidate_pane_g_ParamLimits

0xfb92,	// (0x000483d3) cell_hwr_candidate_pane_g

0x106c,	// (0x000398ad) cell_vkb_candidate_pane_g3_ParamLimits

0x106c,	// (0x000398ad) cell_vkb_candidate_pane_g3

0x1087,	// (0x000398c8) cell_vkb_candidate_pane_g4_ParamLimits

0x1087,	// (0x000398c8) cell_vkb_candidate_pane_g4

0x1159,	// (0x0003999a) cell_app_pane_cp2_g1_ParamLimits

0x1159,	// (0x0003999a) cell_app_pane_cp2_g1

0x1177,	// (0x000399b8) cell_app_pane_cp2_g2_ParamLimits

0x1177,	// (0x000399b8) cell_app_pane_cp2_g2

0x0001,

0xfbdc,	// (0x0004841d) cell_app_pane_cp2_g_ParamLimits

0xfbdc,	// (0x0004841d) cell_app_pane_cp2_g

0x1183,	// (0x000399c4) cell_app_pane_cp2_t1_ParamLimits

0x1183,	// (0x000399c4) cell_app_pane_cp2_t1

0xc2d4,	// (0x00044b15) grid_highlight_pane_cp1_ParamLimits

0xc2d4,	// (0x00044b15) grid_highlight_pane_cp1

0x6c28,	// (0x0003f469) cell_hwr_candidate_pane_cp1_ParamLimits

0x6c28,	// (0x0003f469) cell_hwr_candidate_pane_cp1

0x6bdb,	// (0x0003f41c) fep_hwr_candidate_drop_down_list_pane_g1

0x6c47,	// (0x0003f488) fep_hwr_candidate_drop_down_list_pane_g2

0x6c54,	// (0x0003f495) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe1,	// (0x00048422) fep_hwr_candidate_drop_down_list_pane_g

0x6c61,	// (0x0003f4a2) fep_hwr_candidate_drop_down_list_scroll_pane

0x6c6a,	// (0x0003f4ab) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6c6a,	// (0x0003f4ab) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6c77,	// (0x0003f4b8) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6c77,	// (0x0003f4b8) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6c84,	// (0x0003f4c5) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6c84,	// (0x0003f4c5) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6c91,	// (0x0003f4d2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6c91,	// (0x0003f4d2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6cac,	// (0x0003f4ed) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6cac,	// (0x0003f4ed) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6cc7,	// (0x0003f508) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6cc7,	// (0x0003f508) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6ce2,	// (0x0003f523) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6ce2,	// (0x0003f523) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6cfd,	// (0x0003f53e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6cfd,	// (0x0003f53e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe8,	// (0x00048429) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe8,	// (0x00048429) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x11ca,	// (0x00039a0b) cell_vkb_candidate_pane_cp1_ParamLimits

0x11ca,	// (0x00039a0b) cell_vkb_candidate_pane_cp1

0x0cfd,	// (0x0003953e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x0cfd,	// (0x0003953e) fep_vkb_candidate_drop_down_list_pane_g1

0x1195,	// (0x000399d6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x1195,	// (0x000399d6) fep_vkb_candidate_drop_down_list_pane_g2

0x11a2,	// (0x000399e3) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x11a2,	// (0x000399e3) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf9,	// (0x0004843a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf9,	// (0x0004843a) fep_vkb_candidate_drop_down_list_pane_g

0x11ea,	// (0x00039a2b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x11ea,	// (0x00039a2b) fep_vkb_candidate_drop_down_list_scroll_pane

0x11f7,	// (0x00039a38) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x11f7,	// (0x00039a38) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x1204,	// (0x00039a45) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1204,	// (0x00039a45) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x1210,	// (0x00039a51) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1210,	// (0x00039a51) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x102a,	// (0x0003986b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x102a,	// (0x0003986b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x104b,	// (0x0003988c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x104b,	// (0x0003988c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x121c,	// (0x00039a5d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x121c,	// (0x00039a5d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x123d,	// (0x00039a7e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x123d,	// (0x00039a7e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x11af,	// (0x000399f0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x11af,	// (0x000399f0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc00,	// (0x00048441) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc00,	// (0x00048441) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8945,	// (0x00041186) title_pane_g1_ParamLimits

0x8956,	// (0x00041197) title_pane_g2_ParamLimits

0xf592,	// (0x00047dd3) title_pane_g_ParamLimits

0xc7eb,	// (0x0004502c) aid_call2_pane

0xc7f3,	// (0x00045034) aid_call_pane

0xc7fb,	// (0x0004503c) popup_clock_analogue_window_g1

0xc7fb,	// (0x0004503c) popup_clock_analogue_window_g2

0x608c,	// (0x0003e8cd) popup_clock_analogue_window_g3

0x6095,	// (0x0003e8d6) popup_clock_analogue_window_g4

0x8790,	// (0x00040fd1) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x00047f82) popup_clock_analogue_window_g

0x609d,	// (0x0003e8de) popup_clock_analogue_window_t1

0x60ab,	// (0x0003e8ec) clock_digital_number_pane_ParamLimits

0x60ab,	// (0x0003e8ec) clock_digital_number_pane

0x60b7,	// (0x0003e8f8) clock_digital_number_pane_cp02_ParamLimits

0x60b7,	// (0x0003e8f8) clock_digital_number_pane_cp02

0x60c3,	// (0x0003e904) clock_digital_number_pane_cp03_ParamLimits

0x60c3,	// (0x0003e904) clock_digital_number_pane_cp03

0x60cf,	// (0x0003e910) clock_digital_number_pane_cp04_ParamLimits

0x60cf,	// (0x0003e910) clock_digital_number_pane_cp04

0x60db,	// (0x0003e91c) clock_digital_separator_pane_ParamLimits

0x60db,	// (0x0003e91c) clock_digital_separator_pane

0x60e7,	// (0x0003e928) popup_clock_digital_window_t1_ParamLimits

0x60e7,	// (0x0003e928) popup_clock_digital_window_t1

0x8790,	// (0x00040fd1) clock_digital_number_pane_g1

0x8790,	// (0x00040fd1) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x00047f8d) clock_digital_number_pane_g

0x8790,	// (0x00040fd1) clock_digital_separator_pane_g1

0x8790,	// (0x00040fd1) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x00047f8d) clock_digital_separator_pane_g

0x9a3a,	// (0x0004227b) aid_fill_nsta_ParamLimits

0x9b69,	// (0x000423aa) indicator_nsta_pane_ParamLimits

0xd141,	// (0x00045982) popup_clock_analogue_window

0xd141,	// (0x00045982) popup_clock_digital_window

0xec44,	// (0x00047485) grid_indicator_nsta_pane_ParamLimits

0xec69,	// (0x000474aa) clock_nsta_pane_t2

0x0001,

0xfad3,	// (0x00048314) clock_nsta_pane_t

0x6050,	// (0x0003e891) aid_size_max_handle

0x90b3,	// (0x000418f4) aid_size_min_handle

0xcd0a,	// (0x0004554b) editor_scroll_pane

0x125e,	// (0x00039a9f) ex_editor_pane

0xc3e7,	// (0x00044c28) scroll_pane_cp13

0xc267,	// (0x00044aa8) scroll_pane_cp14

0xc825,	// (0x00045066) scroll_pane_cp36

0x90cd,	// (0x0004190e) list_single_graphic_hl_pane_cp2_ParamLimits

0x90cd,	// (0x0004190e) list_single_graphic_hl_pane_cp2

0xa42c,	// (0x00042c6d) list_single_graphic_hl_pane_ParamLimits

0xa42c,	// (0x00042c6d) list_single_graphic_hl_pane

0xf4a3,	// (0x00047ce4) aid_size_min_hl_cp1

0x1266,	// (0x00039aa7) list_highlight_pane_cp34_ParamLimits

0x1266,	// (0x00039aa7) list_highlight_pane_cp34

0x1277,	// (0x00039ab8) list_single_graphic_hl_pane_g1_ParamLimits

0x1277,	// (0x00039ab8) list_single_graphic_hl_pane_g1

0x451a,	// (0x0003cd5b) list_single_graphic_hl_pane_g2_ParamLimits

0x451a,	// (0x0003cd5b) list_single_graphic_hl_pane_g2

0x451a,	// (0x0003cd5b) list_single_graphic_hl_pane_g3_ParamLimits

0x451a,	// (0x0003cd5b) list_single_graphic_hl_pane_g3

0xf4ac,	// (0x00047ced) list_single_graphic_hl_pane_g4_ParamLimits

0xf4ac,	// (0x00047ced) list_single_graphic_hl_pane_g4

0x4bec,	// (0x0003d42d) list_single_graphic_hl_pane_g5_ParamLimits

0x4bec,	// (0x0003d42d) list_single_graphic_hl_pane_g5

0x0004,

0xfc11,	// (0x00048452) list_single_graphic_hl_pane_g_ParamLimits

0xfc11,	// (0x00048452) list_single_graphic_hl_pane_g

0x4526,	// (0x0003cd67) list_single_graphic_hl_pane_t1_ParamLimits

0x4526,	// (0x0003cd67) list_single_graphic_hl_pane_t1

0x1284,	// (0x00039ac5) aid_size_min_hl_cp2

0x128d,	// (0x00039ace) list_highlight_pane_cp34_cp2_ParamLimits

0x128d,	// (0x00039ace) list_highlight_pane_cp34_cp2

0x1277,	// (0x00039ab8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x1277,	// (0x00039ab8) list_single_graphic_hl_pane_g1_cp2

0x129a,	// (0x00039adb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x129a,	// (0x00039adb) list_single_graphic_hl_pane_g2_cp2

0x12a6,	// (0x00039ae7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x12a6,	// (0x00039ae7) list_single_graphic_hl_pane_g3_cp2

0xcc41,	// (0x00045482) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcc41,	// (0x00045482) list_single_graphic_hl_pane_g4_cp2

0x12b4,	// (0x00039af5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x12b4,	// (0x00039af5) list_single_graphic_hl_pane_g5_cp2

0x9268,	// (0x00041aa9) control_pane_g4_ParamLimits

0x9268,	// (0x00041aa9) control_pane_g4

0xc41f,	// (0x00044c60) bg_popup_sub_pane_cp10_ParamLimits

0x0a6e,	// (0x000392af) list_choice_list_pane_ParamLimits

0x0a7d,	// (0x000392be) scroll_pane_cp23

0x8d66,	// (0x000415a7) bg_popup_preview_window_pane_cp02_ParamLimits

0x10d8,	// (0x00039919) list_preview_fixed_pane_ParamLimits

0x10ee,	// (0x0003992f) list_preview_fixed_pane_cp_ParamLimits

0x10ee,	// (0x0003992f) list_preview_fixed_pane_cp

0x10fa,	// (0x0003993b) popup_preview_fixed_window_g1_ParamLimits

0x10fa,	// (0x0003993b) popup_preview_fixed_window_g1

0x1106,	// (0x00039947) popup_preview_fixed_window_g2_ParamLimits

0x1106,	// (0x00039947) popup_preview_fixed_window_g2

0x0002,

0xfb99,	// (0x000483da) popup_preview_fixed_window_g_ParamLimits

0xfb99,	// (0x000483da) popup_preview_fixed_window_g

0x5fc4,	// (0x0003e805) aid_navi_side_left_pane_ParamLimits

0x5fd9,	// (0x0003e81a) aid_navi_side_right_pane_ParamLimits

0x5ff1,	// (0x0003e832) navi_icon_pane_stacon_ParamLimits

0x6005,	// (0x0003e846) navi_navi_pane_stacon_ParamLimits

0x5ff1,	// (0x0003e832) navi_text_pane_stacon_ParamLimits

0x8786,	// (0x00040fc7) main_text_info_pane

0x12de,	// (0x00039b1f) listscroll_text_info_pane

0x12e6,	// (0x00039b27) list_text_info_pane_ParamLimits

0x12e6,	// (0x00039b27) list_text_info_pane

0x12f5,	// (0x00039b36) scroll_pane_cp24_ParamLimits

0x12f5,	// (0x00039b36) scroll_pane_cp24

0xa856,	// (0x00043097) list_text_info_pane_t1_ParamLimits

0xa856,	// (0x00043097) list_text_info_pane_t1

0x93ca,	// (0x00041c0b) popup_fast_swap2_window_ParamLimits

0x93ca,	// (0x00041c0b) popup_fast_swap2_window

0x134c,	// (0x00039b8d) aid_size_cell_fast2

0x8786,	// (0x00040fc7) bg_popup_window_pane_cp17

0xd5f1,	// (0x00045e32) heading_pane_cp2

0xbf9a,	// (0x000447db) listscroll_fast2_pane

0x1356,	// (0x00039b97) grid_fast2_pane

0x1360,	// (0x00039ba1) listscroll_fast2_pane_g1

0x1368,	// (0x00039ba9) listscroll_fast2_pane_g2

0x0001,

0xfc1c,	// (0x0004845d) listscroll_fast2_pane_g

0xc3e7,	// (0x00044c28) scroll_pane_cp26

0x1372,	// (0x00039bb3) cell_fast2_pane_ParamLimits

0x1372,	// (0x00039bb3) cell_fast2_pane

0x1387,	// (0x00039bc8) cell_fast2_pane_g1

0x1390,	// (0x00039bd1) cell_fast2_pane_g2

0x1399,	// (0x00039bda) cell_fast2_pane_g3

0x0002,

0xfc21,	// (0x00048462) cell_fast2_pane_g

0xc02e,	// (0x0004486f) grid_highlight_pane_cp9

0xc043,	// (0x00044884) main_eswt_pane_ParamLimits

0xc043,	// (0x00044884) main_eswt_pane

0x130a,	// (0x00039b4b) list_single_text_info_pane

0x13a1,	// (0x00039be2) eswt_ctrl_button_pane

0x13a1,	// (0x00039be2) eswt_ctrl_canvas_pane

0x13a9,	// (0x00039bea) eswt_ctrl_combo_pane

0x13a1,	// (0x00039be2) eswt_ctrl_default_pane

0x13a1,	// (0x00039be2) eswt_ctrl_label_pane

0x13b1,	// (0x00039bf2) eswt_ctrl_wait_pane

0x13b9,	// (0x00039bfa) eswt_shell_pane

0x8786,	// (0x00040fc7) listscroll_eswt_app_pane

0x13d9,	// (0x00039c1a) popup_eswt_tasktip_window_ParamLimits

0x13d9,	// (0x00039c1a) popup_eswt_tasktip_window

0xd33e,	// (0x00045b7f) bg_popup_window_pane_cp18

0x13ea,	// (0x00039c2b) eswt_control_pane_g1_ParamLimits

0x13ea,	// (0x00039c2b) eswt_control_pane_g1

0x13f7,	// (0x00039c38) eswt_control_pane_g2_ParamLimits

0x13f7,	// (0x00039c38) eswt_control_pane_g2

0x1404,	// (0x00039c45) eswt_control_pane_g3_ParamLimits

0x1404,	// (0x00039c45) eswt_control_pane_g3

0x1411,	// (0x00039c52) eswt_control_pane_g4_ParamLimits

0x1411,	// (0x00039c52) eswt_control_pane_g4

0x0003,

0xfc28,	// (0x00048469) eswt_control_pane_g_ParamLimits

0xfc28,	// (0x00048469) eswt_control_pane_g

0xc2d4,	// (0x00044b15) bg_button_pane_ParamLimits

0xc2d4,	// (0x00044b15) bg_button_pane

0xc043,	// (0x00044884) common_borders_pane_copy2_ParamLimits

0xc043,	// (0x00044884) common_borders_pane_copy2

0x141e,	// (0x00039c5f) control_button_pane_g1_ParamLimits

0x141e,	// (0x00039c5f) control_button_pane_g1

0x142a,	// (0x00039c6b) control_button_pane_g2_ParamLimits

0x142a,	// (0x00039c6b) control_button_pane_g2

0x1436,	// (0x00039c77) control_button_pane_g3_ParamLimits

0x1436,	// (0x00039c77) control_button_pane_g3

0x0002,

0xfc31,	// (0x00048472) control_button_pane_g_ParamLimits

0xfc31,	// (0x00048472) control_button_pane_g

0x144a,	// (0x00039c8b) control_button_pane_t1

0x1458,	// (0x00039c99) control_button_pane_t2

0x0001,

0xfc38,	// (0x00048479) control_button_pane_t

0xd24e,	// (0x00045a8f) bg_button_pane_g1

0xd25e,	// (0x00045a9f) bg_button_pane_g2

0xd256,	// (0x00045a97) bg_button_pane_g3

0xd26e,	// (0x00045aaf) bg_button_pane_g4

0xd266,	// (0x00045aa7) bg_button_pane_g5

0xd276,	// (0x00045ab7) bg_button_pane_g6

0xd27e,	// (0x00045abf) bg_button_pane_g7

0xd28e,	// (0x00045acf) bg_button_pane_g8

0xd286,	// (0x00045ac7) bg_button_pane_g9

0x0008,

0xf89f,	// (0x000480e0) bg_button_pane_g

0x0a29,	// (0x0003926a) common_borders_pane_ParamLimits

0x0a29,	// (0x0003926a) common_borders_pane

0x13ea,	// (0x00039c2b) eswt_control_pane_g1_copy1_ParamLimits

0x13ea,	// (0x00039c2b) eswt_control_pane_g1_copy1

0x13f7,	// (0x00039c38) eswt_control_pane_g2_copy1_ParamLimits

0x13f7,	// (0x00039c38) eswt_control_pane_g2_copy1

0x1404,	// (0x00039c45) eswt_control_pane_g3_copy1_ParamLimits

0x1404,	// (0x00039c45) eswt_control_pane_g3_copy1

0x1411,	// (0x00039c52) eswt_control_pane_g4_copy1_ParamLimits

0x1411,	// (0x00039c52) eswt_control_pane_g4_copy1

0x0a64,	// (0x000392a5) bg_eswt_ctrl_canvas_pane_g1

0x0a29,	// (0x0003926a) common_borders_pane_cp2_ParamLimits

0x0a29,	// (0x0003926a) common_borders_pane_cp2

0x0a29,	// (0x0003926a) common_borders_pane_cp3_ParamLimits

0x0a29,	// (0x0003926a) common_borders_pane_cp3

0x1466,	// (0x00039ca7) separator_horizontal_pane

0x146e,	// (0x00039caf) separator_vertical_pane

0x13ea,	// (0x00039c2b) eswt_control_pane_g1_copy2_ParamLimits

0x13ea,	// (0x00039c2b) eswt_control_pane_g1_copy2

0x13f7,	// (0x00039c38) eswt_control_pane_g2_copy2_ParamLimits

0x13f7,	// (0x00039c38) eswt_control_pane_g2_copy2

0x1404,	// (0x00039c45) eswt_control_pane_g3_copy2_ParamLimits

0x1404,	// (0x00039c45) eswt_control_pane_g3_copy2

0x1411,	// (0x00039c52) eswt_control_pane_g4_copy2_ParamLimits

0x1411,	// (0x00039c52) eswt_control_pane_g4_copy2

0x8786,	// (0x00040fc7) common_borders_pane_cp4

0x1477,	// (0x00039cb8) separator_horizontal_pane_g1

0x1480,	// (0x00039cc1) separator_horizontal_pane_g2

0x1489,	// (0x00039cca) separator_horizontal_pane_g3

0x0002,

0xfc3d,	// (0x0004847e) separator_horizontal_pane_g

0x13ea,	// (0x00039c2b) eswt_control_pane_g1_copy3_ParamLimits

0x13ea,	// (0x00039c2b) eswt_control_pane_g1_copy3

0x13f7,	// (0x00039c38) eswt_control_pane_g2_copy3_ParamLimits

0x13f7,	// (0x00039c38) eswt_control_pane_g2_copy3

0x1404,	// (0x00039c45) eswt_control_pane_g3_copy3_ParamLimits

0x1404,	// (0x00039c45) eswt_control_pane_g3_copy3

0x1411,	// (0x00039c52) eswt_control_pane_g4_copy3_ParamLimits

0x1411,	// (0x00039c52) eswt_control_pane_g4_copy3

0x8786,	// (0x00040fc7) common_borders_pane_cp5

0x1492,	// (0x00039cd3) separator_vertical_pane_g1

0x149b,	// (0x00039cdc) separator_vertical_pane_g2

0x14a4,	// (0x00039ce5) separator_vertical_pane_g3

0x0002,

0xfc44,	// (0x00048485) separator_vertical_pane_g

0x13ea,	// (0x00039c2b) eswt_control_pane_g1_copy4_ParamLimits

0x13ea,	// (0x00039c2b) eswt_control_pane_g1_copy4

0x13f7,	// (0x00039c38) eswt_control_pane_g2_copy4_ParamLimits

0x13f7,	// (0x00039c38) eswt_control_pane_g2_copy4

0x1404,	// (0x00039c45) eswt_control_pane_g3_copy4_ParamLimits

0x1404,	// (0x00039c45) eswt_control_pane_g3_copy4

0x1411,	// (0x00039c52) eswt_control_pane_g4_copy4_ParamLimits

0x1411,	// (0x00039c52) eswt_control_pane_g4_copy4

0xa874,	// (0x000430b5) eswt_ctrl_combo_button_pane

0xa87c,	// (0x000430bd) eswt_ctrl_input_pane

0xa884,	// (0x000430c5) popup_choice_list_window_cp70

0xa88c,	// (0x000430cd) eswt_ctrl_input_pane_t1

0x8786,	// (0x00040fc7) input_focus_pane_cp70

0x0a29,	// (0x0003926a) bg_button_pane_cp70_ParamLimits

0x0a29,	// (0x0003926a) bg_button_pane_cp70

0xa89a,	// (0x000430db) eswt_ctrl_combo_button_pane_g1

0x14db,	// (0x00039d1c) wait_bar_pane_cp70

0xd33e,	// (0x00045b7f) bg_popup_window_pane_cp70_ParamLimits

0xd33e,	// (0x00045b7f) bg_popup_window_pane_cp70

0x14e3,	// (0x00039d24) popup_eswt_tasktip_window_t1

0x14f9,	// (0x00039d3a) wait_bar_pane_cp71_ParamLimits

0x14f9,	// (0x00039d3a) wait_bar_pane_cp71

0x1505,	// (0x00039d46) grid_eswt_app_pane

0xc631,	// (0x00044e72) scroll_pane_cp70

0xa8a2,	// (0x000430e3) cell_eswt_app_pane_ParamLimits

0xa8a2,	// (0x000430e3) cell_eswt_app_pane

0xa8cc,	// (0x0004310d) cell_eswt_app_pane_g1_ParamLimits

0xa8cc,	// (0x0004310d) cell_eswt_app_pane_g1

0xa8fb,	// (0x0004313c) cell_eswt_app_pane_g2_ParamLimits

0xa8fb,	// (0x0004313c) cell_eswt_app_pane_g2

0x0001,

0xfc4b,	// (0x0004848c) cell_eswt_app_pane_g_ParamLimits

0xfc4b,	// (0x0004848c) cell_eswt_app_pane_g

0xa924,	// (0x00043165) cell_eswt_app_pane_t1_ParamLimits

0xa924,	// (0x00043165) cell_eswt_app_pane_t1

0x15cc,	// (0x00039e0d) grid_highlight_pane_cp70_ParamLimits

0x15cc,	// (0x00039e0d) grid_highlight_pane_cp70

0xcbdd,	// (0x0004541e) set_content_pane_g1

0xcee1,	// (0x00045722) status_small_volume_pane

0x6d18,	// (0x0003f559) status_small_volume_pane_g1

0x6d20,	// (0x0003f561) volume_small2_pane

0x6d29,	// (0x0003f56a) volume_small2_pane_g1

0x6d32,	// (0x0003f573) volume_small2_pane_g2

0x6d3b,	// (0x0003f57c) volume_small2_pane_g3

0x6d44,	// (0x0003f585) volume_small2_pane_g4

0x6d4d,	// (0x0003f58e) volume_small2_pane_g5

0x6d56,	// (0x0003f597) volume_small2_pane_g6

0x6d5f,	// (0x0003f5a0) volume_small2_pane_g7

0x6d68,	// (0x0003f5a9) volume_small2_pane_g8

0x6d71,	// (0x0003f5b2) volume_small2_pane_g9

0x6d7a,	// (0x0003f5bb) volume_small2_pane_g10

0x0009,

0xfc50,	// (0x00048491) volume_small2_pane_g

0x0e45,	// (0x00039686) fep_vkb_top_text_pane_g1_ParamLimits

0xa7fe,	// (0x0004303f) fep_vkb_top_text_pane_t1_ParamLimits

0x1112,	// (0x00039953) popup_preview_fixed_window_g3_ParamLimits

0x1112,	// (0x00039953) popup_preview_fixed_window_g3

0x99cd,	// (0x0004220e) popup_toolbar_trans_pane

0xa2a4,	// (0x00042ae5) aid_height_set_list_ParamLimits

0xcf56,	// (0x00045797) aid_size_parent_ParamLimits

0xc41f,	// (0x00044c60) list_highlight_pane_cp2_ParamLimits

0xcbdd,	// (0x0004541e) set_content_pane_g1_ParamLimits

0x4508,	// (0x0003cd49) list_single_image_pane_ParamLimits

0x4508,	// (0x0003cd49) list_single_image_pane

0xa956,	// (0x00043197) aid_size_cell_image_ParamLimits

0xa956,	// (0x00043197) aid_size_cell_image

0xa963,	// (0x000431a4) grid_single_image_pane_ParamLimits

0xa963,	// (0x000431a4) grid_single_image_pane

0xc26f,	// (0x00044ab0) list_single_image_pane_g1_ParamLimits

0xc26f,	// (0x00044ab0) list_single_image_pane_g1

0xc2ee,	// (0x00044b2f) list_single_image_pane_g2_ParamLimits

0xc2ee,	// (0x00044b2f) list_single_image_pane_g2

0x0001,

0xfc65,	// (0x000484a6) list_single_image_pane_g_ParamLimits

0xfc65,	// (0x000484a6) list_single_image_pane_g

0x15f1,	// (0x00039e32) list_single_image_pane_t1_ParamLimits

0x15f1,	// (0x00039e32) list_single_image_pane_t1

0xa96f,	// (0x000431b0) cell_image_list_pane_ParamLimits

0xa96f,	// (0x000431b0) cell_image_list_pane

0xa983,	// (0x000431c4) cell_image_list_pane_g1

0xa98c,	// (0x000431cd) cell_image_list_pane_g2

0x0001,

0xfc6a,	// (0x000484ab) cell_image_list_pane_g

0x162d,	// (0x00039e6e) aid_size_cell_tb_trans_pane

0xc2d4,	// (0x00044b15) bg_tb_trans_pane

0x163f,	// (0x00039e80) grid_tb_trans_pane

0xd24e,	// (0x00045a8f) bg_tb_trans_pane_g1

0xd25e,	// (0x00045a9f) bg_tb_trans_pane_g2

0xd256,	// (0x00045a97) bg_tb_trans_pane_g3

0xd26e,	// (0x00045aaf) bg_tb_trans_pane_g4

0xd266,	// (0x00045aa7) bg_tb_trans_pane_g5

0xd28e,	// (0x00045acf) bg_tb_trans_pane_g6

0xd286,	// (0x00045ac7) bg_tb_trans_pane_g7

0xd276,	// (0x00045ab7) bg_tb_trans_pane_g8

0xd27e,	// (0x00045abf) bg_tb_trans_pane_g9

0x0008,

0xfc6f,	// (0x000484b0) bg_tb_trans_pane_g

0x1653,	// (0x00039e94) cell_toolbar_trans_pane_ParamLimits

0x1653,	// (0x00039e94) cell_toolbar_trans_pane

0x0a64,	// (0x000392a5) cell_toolbar_trans_pane_g1

0xa64d,	// (0x00042e8e) list_form2_midp_pane_t1

0xa65b,	// (0x00042e9c) list_form2_midp_pane_t2

0x0001,

0xfb0c,	// (0x0004834d) list_form2_midp_pane_t

0xecee,	// (0x0004752f) scroll_pane_cp51_ParamLimits

0xee64,	// (0x000476a5) form2_midp_wait_pane_g1

0xee6d,	// (0x000476ae) form2_midp_wait_pane_g2

0xee76,	// (0x000476b7) form2_midp_wait_pane_g3

0x0002,

0xfb21,	// (0x00048362) form2_midp_wait_pane_g

0x8a8c,	// (0x000412cd) list_highlight_pane_cp21_ParamLimits

0xee96,	// (0x000476d7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xeea5,	// (0x000476e6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe3b3,	// (0x00046bf4) list_single_2graphic_im_pane_ParamLimits

0xe3b3,	// (0x00046bf4) list_single_2graphic_im_pane

0xa995,	// (0x000431d6) list_single_2graphic_im_pane_g1_ParamLimits

0xa995,	// (0x000431d6) list_single_2graphic_im_pane_g1

0xa9a6,	// (0x000431e7) list_single_2graphic_im_pane_g2_ParamLimits

0xa9a6,	// (0x000431e7) list_single_2graphic_im_pane_g2

0xa9b2,	// (0x000431f3) list_single_2graphic_im_pane_g3_ParamLimits

0xa9b2,	// (0x000431f3) list_single_2graphic_im_pane_g3

0x0003,

0xfc82,	// (0x000484c3) list_single_2graphic_im_pane_g_ParamLimits

0xfc82,	// (0x000484c3) list_single_2graphic_im_pane_g

0xa9c6,	// (0x00043207) list_single_2graphic_im_pane_t1_ParamLimits

0xa9c6,	// (0x00043207) list_single_2graphic_im_pane_t1

0x111e,	// (0x0003995f) list_single_graphic_2heading_pane_fp_ParamLimits

0x111e,	// (0x0003995f) list_single_graphic_2heading_pane_fp

0xf315,	// (0x00047b56) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf315,	// (0x00047b56) list_single_graphic_2heading_pane_fp_g1

0x1135,	// (0x00039976) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x1135,	// (0x00039976) list_single_graphic_2heading_pane_fp_g2

0xef06,	// (0x00047747) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xef06,	// (0x00047747) list_single_graphic_2heading_pane_fp_g3

0xf2ea,	// (0x00047b2b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf2ea,	// (0x00047b2b) list_single_graphic_2heading_pane_fp_g4

0x1141,	// (0x00039982) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x1141,	// (0x00039982) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba9,	// (0x000483ea) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba9,	// (0x000483ea) list_single_graphic_2heading_pane_fp_g

0xf4b8,	// (0x00047cf9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf4b8,	// (0x00047cf9) list_single_graphic_2heading_pane_fp_t1

0xf34d,	// (0x00047b8e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf34d,	// (0x00047b8e) list_single_graphic_2heading_pane_fp_t2

0xf4ce,	// (0x00047d0f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf4ce,	// (0x00047d0f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8b,	// (0x000484cc) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8b,	// (0x000484cc) list_single_graphic_2heading_pane_fp_t

0x0b04,	// (0x00039345) fep_hwr_write_pane_g5_ParamLimits

0x0b04,	// (0x00039345) fep_hwr_write_pane_g5

0x0b10,	// (0x00039351) fep_hwr_write_pane_g6_ParamLimits

0x0b10,	// (0x00039351) fep_hwr_write_pane_g6

0x13b9,	// (0x00039bfa) eswt_shell_pane_ParamLimits

0xd33e,	// (0x00045b7f) bg_popup_window_pane_cp18_ParamLimits

0xe2f3,	// (0x00046b34) heading_pane_cp70

0x14e3,	// (0x00039d24) popup_eswt_tasktip_window_t1_ParamLimits

0x9a8e,	// (0x000422cf) aid_touch_tab_arrow_left

0x9aa4,	// (0x000422e5) aid_touch_tab_arrow_right

0x896e,	// (0x000411af) title_pane_g3_ParamLimits

0x896e,	// (0x000411af) title_pane_g3

0xc293,	// (0x00044ad4) set_value_pane_g1

0x99cd,	// (0x0004220e) popup_toolbar_trans_pane_ParamLimits

0x162d,	// (0x00039e6e) aid_size_cell_tb_trans_pane_ParamLimits

0xc2d4,	// (0x00044b15) bg_tb_trans_pane_ParamLimits

0x163f,	// (0x00039e80) grid_tb_trans_pane_ParamLimits

0x8d66,	// (0x000415a7) cont_note_pane_ParamLimits

0x8d66,	// (0x000415a7) cont_note_pane

0xc043,	// (0x00044884) cont_snote2_single_text_pane_ParamLimits

0xc043,	// (0x00044884) cont_snote2_single_text_pane

0xc043,	// (0x00044884) cont_snote2_single_graphic_pane_ParamLimits

0xc043,	// (0x00044884) cont_snote2_single_graphic_pane

0xd7d6,	// (0x00046017) cont_note_wait_pane_ParamLimits

0xd7d6,	// (0x00046017) cont_note_wait_pane

0xd7d6,	// (0x00046017) cont_note_image_pane_ParamLimits

0xd7d6,	// (0x00046017) cont_note_image_pane

0x16e7,	// (0x00039f28) popup_note2_window_g1_ParamLimits

0x16e7,	// (0x00039f28) popup_note2_window_g1

0x1718,	// (0x00039f59) popup_note2_window_t1_ParamLimits

0x1718,	// (0x00039f59) popup_note2_window_t1

0x175d,	// (0x00039f9e) popup_note2_window_t2_ParamLimits

0x175d,	// (0x00039f9e) popup_note2_window_t2

0x17a2,	// (0x00039fe3) popup_note2_window_t3_ParamLimits

0x17a2,	// (0x00039fe3) popup_note2_window_t3

0x17e7,	// (0x0003a028) popup_note2_window_t4_ParamLimits

0x17e7,	// (0x0003a028) popup_note2_window_t4

0x8dde,	// (0x0004161f) popup_note2_window_t5_ParamLimits

0x8dde,	// (0x0004161f) popup_note2_window_t5

0x0004,

0xfc97,	// (0x000484d8) popup_note2_window_t_ParamLimits

0xfc97,	// (0x000484d8) popup_note2_window_t

0x1816,	// (0x0003a057) popup_note2_image_window_g1_ParamLimits

0x1816,	// (0x0003a057) popup_note2_image_window_g1

0x1822,	// (0x0003a063) popup_note2_image_window_g2_ParamLimits

0x1822,	// (0x0003a063) popup_note2_image_window_g2

0x0001,

0xfca2,	// (0x000484e3) popup_note2_image_window_g_ParamLimits

0xfca2,	// (0x000484e3) popup_note2_image_window_g

0x1834,	// (0x0003a075) popup_note2_image_window_t1_ParamLimits

0x1834,	// (0x0003a075) popup_note2_image_window_t1

0x184c,	// (0x0003a08d) popup_note2_image_window_t2_ParamLimits

0x184c,	// (0x0003a08d) popup_note2_image_window_t2

0x1864,	// (0x0003a0a5) popup_note2_image_window_t3_ParamLimits

0x1864,	// (0x0003a0a5) popup_note2_image_window_t3

0x0002,

0xfca7,	// (0x000484e8) popup_note2_image_window_t_ParamLimits

0xfca7,	// (0x000484e8) popup_note2_image_window_t

0xd7e4,	// (0x00046025) popup_note2_wait_window_g1_ParamLimits

0xd7e4,	// (0x00046025) popup_note2_wait_window_g1

0xd7f0,	// (0x00046031) popup_note2_wait_window_g2_ParamLimits

0xd7f0,	// (0x00046031) popup_note2_wait_window_g2

0xd7fc,	// (0x0004603d) popup_note2_wait_window_g3_ParamLimits

0xd7fc,	// (0x0004603d) popup_note2_wait_window_g3

0x0002,

0xf881,	// (0x000480c2) popup_note2_wait_window_g_ParamLimits

0xf881,	// (0x000480c2) popup_note2_wait_window_g

0x1880,	// (0x0003a0c1) popup_note2_wait_window_t1_ParamLimits

0x1880,	// (0x0003a0c1) popup_note2_wait_window_t1

0x189e,	// (0x0003a0df) popup_note2_wait_window_t2_ParamLimits

0x189e,	// (0x0003a0df) popup_note2_wait_window_t2

0x18bc,	// (0x0003a0fd) popup_note2_wait_window_t3_ParamLimits

0x18bc,	// (0x0003a0fd) popup_note2_wait_window_t3

0x18ce,	// (0x0003a10f) popup_note2_wait_window_t4_ParamLimits

0x18ce,	// (0x0003a10f) popup_note2_wait_window_t4

0x0003,

0xfcae,	// (0x000484ef) popup_note2_wait_window_t_ParamLimits

0xfcae,	// (0x000484ef) popup_note2_wait_window_t

0x18e0,	// (0x0003a121) wait_bar2_pane_ParamLimits

0x18e0,	// (0x0003a121) wait_bar2_pane

0x18f8,	// (0x0003a139) popup_snote2_single_text_window_g1_ParamLimits

0x18f8,	// (0x0003a139) popup_snote2_single_text_window_g1

0x1920,	// (0x0003a161) popup_snote2_single_text_window_t1_ParamLimits

0x1920,	// (0x0003a161) popup_snote2_single_text_window_t1

0x196c,	// (0x0003a1ad) popup_snote2_single_text_window_t2_ParamLimits

0x196c,	// (0x0003a1ad) popup_snote2_single_text_window_t2

0x19b8,	// (0x0003a1f9) popup_snote2_single_text_window_t3_ParamLimits

0x19b8,	// (0x0003a1f9) popup_snote2_single_text_window_t3

0x19f9,	// (0x0003a23a) popup_snote2_single_text_window_t4_ParamLimits

0x19f9,	// (0x0003a23a) popup_snote2_single_text_window_t4

0x1a2f,	// (0x0003a270) popup_snote2_single_text_window_t5_ParamLimits

0x1a2f,	// (0x0003a270) popup_snote2_single_text_window_t5

0x0004,

0xfcb7,	// (0x000484f8) popup_snote2_single_text_window_t_ParamLimits

0xfcb7,	// (0x000484f8) popup_snote2_single_text_window_t

0x1a5a,	// (0x0003a29b) popup_snote2_single_graphic_window_g1_ParamLimits

0x1a5a,	// (0x0003a29b) popup_snote2_single_graphic_window_g1

0x1a82,	// (0x0003a2c3) popup_snote2_single_graphic_window_g2_ParamLimits

0x1a82,	// (0x0003a2c3) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc2,	// (0x00048503) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc2,	// (0x00048503) popup_snote2_single_graphic_window_g

0x1aaa,	// (0x0003a2eb) popup_snote2_single_graphic_window_t1_ParamLimits

0x1aaa,	// (0x0003a2eb) popup_snote2_single_graphic_window_t1

0x1af6,	// (0x0003a337) popup_snote2_single_graphic_window_t2_ParamLimits

0x1af6,	// (0x0003a337) popup_snote2_single_graphic_window_t2

0x19b8,	// (0x0003a1f9) popup_snote2_single_graphic_window_t3_ParamLimits

0x19b8,	// (0x0003a1f9) popup_snote2_single_graphic_window_t3

0x19f9,	// (0x0003a23a) popup_snote2_single_graphic_window_t4_ParamLimits

0x19f9,	// (0x0003a23a) popup_snote2_single_graphic_window_t4

0x1a2f,	// (0x0003a270) popup_snote2_single_graphic_window_t5_ParamLimits

0x1a2f,	// (0x0003a270) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc7,	// (0x00048508) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc7,	// (0x00048508) popup_snote2_single_graphic_window_t

0xec9e,	// (0x000474df) clock_nsta_pane_cp2_t1

0xec9e,	// (0x000474df) clock_nsta_pane_cp2_t2

0x0001,

0xfae2,	// (0x00048323) clock_nsta_pane_cp2_t

0xefe1,	// (0x00047822) form_field_data_wide_pane_g1_ParamLimits

0xc26f,	// (0x00044ab0) form_field_data_wide_pane_g2_ParamLimits

0xc26f,	// (0x00044ab0) form_field_data_wide_pane_g2

0xc2ee,	// (0x00044b2f) form_field_data_wide_pane_g3_ParamLimits

0xc2ee,	// (0x00044b2f) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x00047f05) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x00047f05) form_field_data_wide_pane_g

0xa563,	// (0x00042da4) grid_touch_3_pane_ParamLimits

0xa563,	// (0x00042da4) grid_touch_3_pane

0xa9f7,	// (0x00043238) cell_touch_3_pane_ParamLimits

0xa9f7,	// (0x00043238) cell_touch_3_pane

0x0a64,	// (0x000392a5) cell_touch_3_pane_g1

0x0a64,	// (0x000392a5) cell_touch_3_pane_g2

0x0001,

0xfb67,	// (0x000483a8) cell_touch_3_pane_g

0x8e10,	// (0x00041651) cont_query_data_pane

0x8e18,	// (0x00041659) cont_query_data_pane_cp1

0x1b71,	// (0x0003a3b2) button_value_adjust_pane_cp7

0x1b79,	// (0x0003a3ba) query_popup_pane_cp3

0xc857,	// (0x00045098) bg_popup_sub_pane_cp22_ParamLimits

0x6106,	// (0x0003e947) navi_navi_volume_pane_cp2

0x6121,	// (0x0003e962) popup_side_volume_key_window_g2

0x6130,	// (0x0003e971) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x00047f97) popup_side_volume_key_window_g

0x614d,	// (0x0003e98e) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x00047f9e) popup_side_volume_key_window_t

0xcaa7,	// (0x000452e8) popup_side_volume_key_window_ParamLimits

0x4812,	// (0x0003d053) list_double_graphic_pane_g4_ParamLimits

0x4812,	// (0x0003d053) list_double_graphic_pane_g4

0x4b8b,	// (0x0003d3cc) list_single_2heading_msg_pane_ParamLimits

0x4b8b,	// (0x0003d3cc) list_single_2heading_msg_pane

0x4c00,	// (0x0003d441) list_single_2heading_msg_pane_g1_ParamLimits

0x4c00,	// (0x0003d441) list_single_2heading_msg_pane_g1

0x4c0c,	// (0x0003d44d) list_single_2heading_msg_pane_g2_ParamLimits

0x4c0c,	// (0x0003d44d) list_single_2heading_msg_pane_g2

0x4c1f,	// (0x0003d460) list_single_2heading_msg_pane_g3_ParamLimits

0x4c1f,	// (0x0003d460) list_single_2heading_msg_pane_g3

0x4c2b,	// (0x0003d46c) list_single_2heading_msg_pane_g4_ParamLimits

0x4c2b,	// (0x0003d46c) list_single_2heading_msg_pane_g4

0x0003,

0xfcd2,	// (0x00048513) list_single_2heading_msg_pane_g_ParamLimits

0xfcd2,	// (0x00048513) list_single_2heading_msg_pane_g

0x453c,	// (0x0003cd7d) list_single_2heading_msg_pane_t1_ParamLimits

0x453c,	// (0x0003cd7d) list_single_2heading_msg_pane_t1

0x4564,	// (0x0003cda5) list_single_2heading_msg_pane_t2_ParamLimits

0x4564,	// (0x0003cda5) list_single_2heading_msg_pane_t2

0x45cf,	// (0x0003ce10) list_single_2heading_msg_pane_t3_ParamLimits

0x45cf,	// (0x0003ce10) list_single_2heading_msg_pane_t3

0xf4ee,	// (0x00047d2f) list_single_2heading_msg_pane_t4_ParamLimits

0xf4ee,	// (0x00047d2f) list_single_2heading_msg_pane_t4

0x0003,

0xfcdb,	// (0x0004851c) list_single_2heading_msg_pane_t_ParamLimits

0xfcdb,	// (0x0004851c) list_single_2heading_msg_pane_t

0x897a,	// (0x000411bb) title_pane_g4_ParamLimits

0x897a,	// (0x000411bb) title_pane_g4

0x5f14,	// (0x0003e755) title_pane_stacon_g3_ParamLimits

0x5f14,	// (0x0003e755) title_pane_stacon_g3

0x16aa,	// (0x00039eeb) list_single_2graphic_im_pane_g4_ParamLimits

0x16aa,	// (0x00039eeb) list_single_2graphic_im_pane_g4

0xe117,	// (0x00046958) popup_side_volume_key_window_cp

0xe5e3,	// (0x00046e24) main_idle_act2_pane_t1

0x64c7,	// (0x0003ed08) toolbar_button_pane_g10

0x8f55,	// (0x00041796) popup_toolbar_window_cp1

0xec8f,	// (0x000474d0) clock_nsta_pane_cp_t1

0xec8f,	// (0x000474d0) clock_nsta_pane_cp_t2

0x0001,

0xfadd,	// (0x0004831e) clock_nsta_pane_cp_t

0x6106,	// (0x0003e947) navi_navi_volume_pane_cp2_ParamLimits

0x6115,	// (0x0003e956) popup_side_volume_key_window_g1_ParamLimits

0x6121,	// (0x0003e962) popup_side_volume_key_window_g2_ParamLimits

0x6130,	// (0x0003e971) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x00047f97) popup_side_volume_key_window_g_ParamLimits

0x6984,	// (0x0003f1c5) fep_hwr_aid_pane

0x6a2b,	// (0x0003f26c) bg_fep_hwr_top_pane_g4_ParamLimits

0x0ae6,	// (0x00039327) fep_hwr_top_pane_g1_ParamLimits

0x0ad4,	// (0x00039315) fep_hwr_top_pane_g2_ParamLimits

0x6a4b,	// (0x0003f28c) fep_hwr_top_pane_g3_ParamLimits

0xfb32,	// (0x00048373) fep_hwr_top_pane_g_ParamLimits

0x6a60,	// (0x0003f2a1) fep_hwr_top_text_pane_ParamLimits

0xdf0c,	// (0x0004674d) aid_touch_tab_arrow_arrow_2

0xdf15,	// (0x00046756) aid_touch_tab_arrow_left_2

0x6998,	// (0x0003f1d9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x69cf,	// (0x0003f210) fep_hwr_prediction_pane

0x0c4d,	// (0x0003948e) fep_vkb_prediction_pane

0xa7de,	// (0x0004301f) fep_vkb_side_pane_g3_ParamLimits

0xa7de,	// (0x0004301f) fep_vkb_side_pane_g3

0x6bdb,	// (0x0003f41c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6c47,	// (0x0003f488) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6c54,	// (0x0003f495) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe1,	// (0x00048422) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6d83,	// (0x0003f5c4) fep_hwr_prediction_pane_g1

0x6d8d,	// (0x0003f5ce) fep_hwr_prediction_pane_g2

0x0acc,	// (0x0003930d) fep_hwr_prediction_pane_g3

0x6d95,	// (0x0003f5d6) fep_hwr_prediction_pane_g4

0x0003,

0xfce4,	// (0x00048525) fep_hwr_prediction_pane_g

0x1b9e,	// (0x0003a3df) fep_vkb_prediction_pane_g1

0x1ba8,	// (0x0003a3e9) fep_vkb_prediction_pane_g2

0x1bb0,	// (0x0003a3f1) fep_vkb_prediction_pane_g3

0x1bb8,	// (0x0003a3f9) fep_vkb_prediction_pane_g4

0x0003,

0xfced,	// (0x0004852e) fep_vkb_prediction_pane_g

0x67b3,	// (0x0003eff4) slider_set_pane_g3

0x67c7,	// (0x0003f008) slider_set_pane_g4

0x67df,	// (0x0003f020) slider_set_pane_g5

0x67b3,	// (0x0003eff4) slider_set_pane_g6

0x67f5,	// (0x0003f036) slider_set_pane_g7

0xe378,	// (0x00046bb9) slider_form_pane_g3

0xe381,	// (0x00046bc2) slider_form_pane_g4

0xe389,	// (0x00046bca) slider_form_pane_g5

0xe378,	// (0x00046bb9) slider_form_pane_g6

0xa3eb,	// (0x00042c2c) slider_form_pane_g7

0xe881,	// (0x000470c2) slider_set_pane_vc_g3

0xe88a,	// (0x000470cb) slider_set_pane_vc_g4

0xe893,	// (0x000470d4) slider_set_pane_vc_g5

0xe881,	// (0x000470c2) slider_set_pane_vc_g6

0xe89c,	// (0x000470dd) slider_set_pane_vc_g7

0xe881,	// (0x000470c2) slider_form_pane_vc_g1

0xe88a,	// (0x000470cb) slider_form_pane_vc_g2

0xe893,	// (0x000470d4) slider_form_pane_vc_g3

0xe881,	// (0x000470c2) slider_form_pane_vc_g4

0xea2b,	// (0x0004726c) slider_form_pane_vc_g5

0x0004,

0xfac3,	// (0x00048304) slider_form_pane_vc_g

0x8786,	// (0x00040fc7) main_idle_act3_pane

0x1bc0,	// (0x0003a401) ai3_links_pane

0xaa40,	// (0x00043281) popup_ai3_data_window_ParamLimits

0xaa40,	// (0x00043281) popup_ai3_data_window

0x8786,	// (0x00040fc7) grid_ai3_links_pane

0xaa58,	// (0x00043299) cell_ai3_links_pane_ParamLimits

0xaa58,	// (0x00043299) cell_ai3_links_pane

0x1bf9,	// (0x0003a43a) bg_popup_sub_pane_cp11

0x1c06,	// (0x0003a447) cell_ai3_links_pane_g1

0x8786,	// (0x00040fc7) bg_popup_sub_pane_cp12

0x1c2b,	// (0x0003a46c) heading_ai3_data_pane

0x1c33,	// (0x0003a474) list_ai3_gene_pane

0x1c3f,	// (0x0003a480) popup_ai3_data_window_g1

0x1c47,	// (0x0003a488) heading_ai3_data_pane_g1

0x1c4f,	// (0x0003a490) heading_ai3_data_pane_t1

0x1c5d,	// (0x0003a49e) list_double_ai3_gene_pane_ParamLimits

0x1c5d,	// (0x0003a49e) list_double_ai3_gene_pane

0x1c6a,	// (0x0003a4ab) list_single_ai3_gene_pane_ParamLimits

0x1c6a,	// (0x0003a4ab) list_single_ai3_gene_pane

0x0a29,	// (0x0003926a) list_highlight_pane_cp7_ParamLimits

0x0a29,	// (0x0003926a) list_highlight_pane_cp7

0x1c77,	// (0x0003a4b8) list_single_a13_gene_pane_t1_ParamLimits

0x1c77,	// (0x0003a4b8) list_single_a13_gene_pane_t1

0x1c8e,	// (0x0003a4cf) list_single_ai3_gene_pane_g1

0x1cb8,	// (0x0003a4f9) list_single_ai3_gene_pane_g2

0x0001,

0xfcf6,	// (0x00048537) list_single_ai3_gene_pane_g

0x1cc0,	// (0x0003a501) list_double_ai3_gene_pane_g1_ParamLimits

0x1cc0,	// (0x0003a501) list_double_ai3_gene_pane_g1

0x1ccc,	// (0x0003a50d) list_double_ai3_gene_pane_t1_ParamLimits

0x1ccc,	// (0x0003a50d) list_double_ai3_gene_pane_t1

0x1ce8,	// (0x0003a529) list_double_ai3_gene_pane_t2_ParamLimits

0x1ce8,	// (0x0003a529) list_double_ai3_gene_pane_t2

0x1cfd,	// (0x0003a53e) list_double_ai3_gene_pane_t3_ParamLimits

0x1cfd,	// (0x0003a53e) list_double_ai3_gene_pane_t3

0x0002,

0xfcfb,	// (0x0004853c) list_double_ai3_gene_pane_t_ParamLimits

0xfcfb,	// (0x0004853c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf4e4,	// (0x00047d25) aid_size_min_col_2

0xaa2a,	// (0x0004326b) aid_size_min_msg_ParamLimits

0xaa2a,	// (0x0004326b) aid_size_min_msg

0xa7f2,	// (0x00043033) fep_vkb_top_text_pane_g2_ParamLimits

0xa7f2,	// (0x00043033) fep_vkb_top_text_pane_g2

0x0001,

0xfb62,	// (0x000483a3) fep_vkb_top_text_pane_g_ParamLimits

0xfb62,	// (0x000483a3) fep_vkb_top_text_pane_g

0x8786,	// (0x00040fc7) main_hc_apps_shell_pane

0x1d1a,	// (0x0003a55b) grid_hc_apps_pane_ParamLimits

0x1d1a,	// (0x0003a55b) grid_hc_apps_pane

0x1d29,	// (0x0003a56a) list_hc_apps_pane

0x1d31,	// (0x0003a572) scroll_pane_cp37_ParamLimits

0x1d31,	// (0x0003a572) scroll_pane_cp37

0xaa72,	// (0x000432b3) cell_hc_apps_pane_ParamLimits

0xaa72,	// (0x000432b3) cell_hc_apps_pane

0xab32,	// (0x00043373) cell_hc_apps_pane_g1_ParamLimits

0xab32,	// (0x00043373) cell_hc_apps_pane_g1

0x1e1e,	// (0x0003a65f) cell_hc_apps_pane_g2_ParamLimits

0x1e1e,	// (0x0003a65f) cell_hc_apps_pane_g2

0x1e3a,	// (0x0003a67b) cell_hc_apps_pane_g3_ParamLimits

0x1e3a,	// (0x0003a67b) cell_hc_apps_pane_g3

0x0002,

0xfd02,	// (0x00048543) cell_hc_apps_pane_g_ParamLimits

0xfd02,	// (0x00048543) cell_hc_apps_pane_g

0xab5f,	// (0x000433a0) cell_hc_apps_pane_t1_ParamLimits

0xab5f,	// (0x000433a0) cell_hc_apps_pane_t1

0x8d66,	// (0x000415a7) grid_highlight_pane_cp10_ParamLimits

0x8d66,	// (0x000415a7) grid_highlight_pane_cp10

0xab9d,	// (0x000433de) list_single_hc_apps_pane_ParamLimits

0xab9d,	// (0x000433de) list_single_hc_apps_pane

0x1f0f,	// (0x0003a750) list_single_hc_apps_pane_g1

0xf513,	// (0x00047d54) list_single_hc_apps_pane_g2

0x0001,

0xfd09,	// (0x0004854a) list_single_hc_apps_pane_g

0xf52c,	// (0x00047d6d) list_single_hc_apps_pane_g2_copy1

0xf548,	// (0x00047d89) list_single_hc_apps_pane_t1

0x8a8c,	// (0x000412cd) bg_set_opt_pane_cp_ParamLimits

0x5e3f,	// (0x0003e680) setting_slider_pane_t1_ParamLimits

0x5e58,	// (0x0003e699) setting_slider_pane_t2_ParamLimits

0x5e71,	// (0x0003e6b2) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00047de3) setting_slider_pane_t_ParamLimits

0x5e88,	// (0x0003e6c9) slider_set_pane_ParamLimits

0x63a5,	// (0x0003ebe6) control_pane_g5_ParamLimits

0x63a5,	// (0x0003ebe6) control_pane_g5

0xe33a,	// (0x00046b7b) slider_set_pane_g1_ParamLimits

0x67a7,	// (0x0003efe8) slider_set_pane_g2_ParamLimits

0x67b3,	// (0x0003eff4) slider_set_pane_g3_ParamLimits

0x67c7,	// (0x0003f008) slider_set_pane_g4_ParamLimits

0x67df,	// (0x0003f020) slider_set_pane_g5_ParamLimits

0x67b3,	// (0x0003eff4) slider_set_pane_g6_ParamLimits

0x67f5,	// (0x0003f036) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x000481de) slider_set_pane_g_ParamLimits

0xcb88,	// (0x000453c9) navi_icon_text_pane_ParamLimits

0x9a5a,	// (0x0004229b) aid_fill_nsta_2_ParamLimits

0x9a8e,	// (0x000422cf) aid_touch_tab_arrow_left_ParamLimits

0x9aa4,	// (0x000422e5) aid_touch_tab_arrow_right_ParamLimits

0x9b3f,	// (0x00042380) clock_nsta_pane_ParamLimits

0xa193,	// (0x000429d4) navi_icon_pane_g1_ParamLimits

0xa19f,	// (0x000429e0) navi_text_pane_t1_ParamLimits

0xa62f,	// (0x00042e70) navi_icon_text_pane_g1_ParamLimits

0xa63b,	// (0x00042e7c) navi_icon_text_pane_t1_ParamLimits

0x1f0f,	// (0x0003a750) list_single_hc_apps_pane_g1_ParamLimits

0xf513,	// (0x00047d54) list_single_hc_apps_pane_g2_ParamLimits

0xfd09,	// (0x0004854a) list_single_hc_apps_pane_g_ParamLimits

0xf52c,	// (0x00047d6d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xf548,	// (0x00047d89) list_single_hc_apps_pane_t1_ParamLimits

0x88da,	// (0x0004111b) popup_toolbar2_fixed_window_ParamLimits

0x88da,	// (0x0004111b) popup_toolbar2_fixed_window

0x99c3,	// (0x00042204) popup_toolbar2_float_window

0x8786,	// (0x00040fc7) bg_popup_sub_pane_cp27

0x1f28,	// (0x0003a769) grid_toolbar2_float_pane

0x8786,	// (0x00040fc7) bg_popup_sub_pane_cp26

0x1f28,	// (0x0003a769) grid_toolbar2_fixed_pane

0xabd0,	// (0x00043411) cell_toolbar2_fixed_pane_ParamLimits

0xabd0,	// (0x00043411) cell_toolbar2_fixed_pane

0xabeb,	// (0x0004342c) cell_toolbar2_fixed_pane_g1

0x1f4a,	// (0x0003a78b) toolbar2_fixed_button_pane

0xd24e,	// (0x00045a8f) toolbar2_fixed_button_pane_g1

0xd25e,	// (0x00045a9f) toolbar2_fixed_button_pane_g2

0xd256,	// (0x00045a97) toolbar2_fixed_button_pane_g3

0xd26e,	// (0x00045aaf) toolbar2_fixed_button_pane_g4

0xd266,	// (0x00045aa7) toolbar2_fixed_button_pane_g5

0xd276,	// (0x00045ab7) toolbar2_fixed_button_pane_g6

0xd27e,	// (0x00045abf) toolbar2_fixed_button_pane_g7

0xd28e,	// (0x00045acf) toolbar2_fixed_button_pane_g8

0xd286,	// (0x00045ac7) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x000480e0) toolbar2_fixed_button_pane_g

0x1f52,	// (0x0003a793) cell_toolbar2_float_pane_ParamLimits

0x1f52,	// (0x0003a793) cell_toolbar2_float_pane

0x1f63,	// (0x0003a7a4) cell_toolbar2_float_pane_g1

0x1f4a,	// (0x0003a78b) toolbar2_fixed_button_pane_cp

0xa7a5,	// (0x00042fe6) fep_vkb_accented_list_pane_ParamLimits

0xa7a5,	// (0x00042fe6) fep_vkb_accented_list_pane

0x6bbb,	// (0x0003f3fc) bg_popup_fep_shadow_pane_g9

0xcd0a,	// (0x0004554b) bg_popup_fep_shadow_pane_cp3

0xc3ce,	// (0x00044c0f) list_accented_list_pane

0x1f6c,	// (0x0003a7ad) list_single_accented_list_pane_ParamLimits

0x1f6c,	// (0x0003a7ad) list_single_accented_list_pane

0xcd0a,	// (0x0004554b) list_highlight_pane_cp10

0x1f7d,	// (0x0003a7be) list_single_accented_list_pane_t1

0x98ed,	// (0x0004212e) popup_slider_window_ParamLimits

0x98ed,	// (0x0004212e) popup_slider_window

0x1b81,	// (0x0003a3c2) aid_indentation_list_msg

0xace4,	// (0x00043525) bg_popup_window_pane_cp19

0x20a1,	// (0x0003a8e2) popup_slider_window_g1

0x20bd,	// (0x0003a8fe) popup_slider_window_g2

0x20d9,	// (0x0003a91a) popup_slider_window_g3

0x0005,

0xfd0e,	// (0x0004854f) popup_slider_window_g

0x2135,	// (0x0003a976) popup_slider_window_t1

0x21a9,	// (0x0003a9ea) small_volume_slider_vertical_pane

0x0a64,	// (0x000392a5) small_volume_slider_vertical_pane_g1

0x0a64,	// (0x000392a5) small_volume_slider_vertical_pane_g2

0x21c5,	// (0x0003aa06) small_volume_slider_vertical_pane_g3

0x0002,

0xfd20,	// (0x00048561) small_volume_slider_vertical_pane_g

0x883e,	// (0x0004107f) area_side_right_pane_ParamLimits

0x883e,	// (0x0004107f) area_side_right_pane

0xad9c,	// (0x000435dd) aid_size_side_button_ParamLimits

0xad9c,	// (0x000435dd) aid_size_side_button

0xadb5,	// (0x000435f6) grid_sctrl_middle_pane_ParamLimits

0xadb5,	// (0x000435f6) grid_sctrl_middle_pane

0x6dd1,	// (0x0003f612) sctrl_sk_bottom_pane

0x6de2,	// (0x0003f623) sctrl_sk_top_pane

0x6df4,	// (0x0003f635) aid_touch_sctrl_top

0x6e01,	// (0x0003f642) bg_sctrl_sk_pane_ParamLimits

0x6e01,	// (0x0003f642) bg_sctrl_sk_pane

0x6e0f,	// (0x0003f650) sctrl_sk_top_pane_g1

0x6e1c,	// (0x0003f65d) sctrl_sk_top_pane_t1

0x6df4,	// (0x0003f635) aid_touch_sctrl_bottom

0x6e01,	// (0x0003f642) bg_sctrl_sk_pane_cp_ParamLimits

0x6e01,	// (0x0003f642) bg_sctrl_sk_pane_cp

0x6e37,	// (0x0003f678) sctrl_sk_bottom_pane_g1

0x6e1c,	// (0x0003f65d) sctrl_sk_bottom_pane_t1

0xadcf,	// (0x00043610) cell_sctrl_middle_pane_ParamLimits

0xadcf,	// (0x00043610) cell_sctrl_middle_pane

0xade0,	// (0x00043621) aid_touch_sctrl_middle_ParamLimits

0xade0,	// (0x00043621) aid_touch_sctrl_middle

0xaded,	// (0x0004362e) bg_sctrl_middle_pane_ParamLimits

0xaded,	// (0x0004362e) bg_sctrl_middle_pane

0x77dd,	// (0x0004001e) cell_sctrl_middle_pane_g1_ParamLimits

0x77dd,	// (0x0004001e) cell_sctrl_middle_pane_g1

0xadfb,	// (0x0004363c) cell_sctrl_middle_pane_g2_ParamLimits

0xadfb,	// (0x0004363c) cell_sctrl_middle_pane_g2

0x0001,

0xfd2c,	// (0x0004856d) cell_sctrl_middle_pane_g_ParamLimits

0xfd2c,	// (0x0004856d) cell_sctrl_middle_pane_g

0xd24e,	// (0x00045a8f) bg_sctrl_middle_pane_g1

0xd256,	// (0x00045a97) bg_sctrl_middle_pane_g2

0xd25e,	// (0x00045a9f) bg_sctrl_middle_pane_g3

0xd266,	// (0x00045aa7) bg_sctrl_middle_pane_g4

0xd26e,	// (0x00045aaf) bg_sctrl_middle_pane_g5

0xd276,	// (0x00045ab7) bg_sctrl_middle_pane_g6

0xd27e,	// (0x00045abf) bg_sctrl_middle_pane_g7

0xd286,	// (0x00045ac7) bg_sctrl_middle_pane_g8

0x0007,

0xfd31,	// (0x00048572) bg_sctrl_middle_pane_g

0xd28e,	// (0x00045acf) bg_sctrl_middle_pane_g8_copy1

0xd24e,	// (0x00045a8f) bg_sctrl_sk_pane_g1

0xd25e,	// (0x00045a9f) bg_sctrl_sk_pane_g2

0xd256,	// (0x00045a97) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x000480e0) bg_sctrl_sk_pane_g

0xc201,	// (0x00044a42) aid_size_touch_scroll_bar

0xd26e,	// (0x00045aaf) bg_sctrl_sk_pane_g4

0xd266,	// (0x00045aa7) bg_sctrl_sk_pane_g5

0xd276,	// (0x00045ab7) bg_sctrl_sk_pane_g6

0xd27e,	// (0x00045abf) bg_sctrl_sk_pane_g7

0xd28e,	// (0x00045acf) bg_sctrl_sk_pane_g8

0xd286,	// (0x00045ac7) bg_sctrl_sk_pane_g9

0xcf90,	// (0x000457d1) popup_fep_china_hwr2_fs_candidate_window

0x9427,	// (0x00041c68) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9427,	// (0x00041c68) popup_fep_china_hwr2_fs_control_window

0x6bdb,	// (0x0003f41c) sctrl_sk_top_pane_g2

0x0001,

0xfd27,	// (0x00048568) sctrl_sk_top_pane_g

0xae07,	// (0x00043648) aid_fep_china_hwr2_fs_cell_ParamLimits

0xae07,	// (0x00043648) aid_fep_china_hwr2_fs_cell

0xae1b,	// (0x0004365c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xae1b,	// (0x0004365c) bg_popup_fep_shadow_pane_cp4

0xae32,	// (0x00043673) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xae32,	// (0x00043673) bg_popup_fep_shadow_pane_cp5

0xae44,	// (0x00043685) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xae44,	// (0x00043685) popup_fep_china_hwr2_fs_control_bar_grid

0xae58,	// (0x00043699) popup_fep_china_hwr2_fs_control_funtion_grid

0x2221,	// (0x0003aa62) aid_fep_china_hwr2_fs_candi_cell

0x8786,	// (0x00040fc7) bg_popup_fep_shadow_pane_cp6

0x222b,	// (0x0003aa6c) popup_fep_china_hwr2_fs_candidate_grid

0xae60,	// (0x000436a1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xae60,	// (0x000436a1) cell_fep_china_hwr2_fs_funtion_grid

0x0a64,	// (0x000392a5) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x224d,	// (0x0003aa8e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x224d,	// (0x0003aa8e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x225b,	// (0x0003aa9c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x225b,	// (0x0003aa9c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd42,	// (0x00048583) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd42,	// (0x00048583) cell_fep_china_hwr2_fs_funtion_grid_g

0xae78,	// (0x000436b9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xae78,	// (0x000436b9) cell_fep_china_hwr2_fs_funtion_grid_t1

0xae8d,	// (0x000436ce) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xae8d,	// (0x000436ce) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd47,	// (0x00048588) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd47,	// (0x00048588) cell_fep_china_hwr2_fs_funtion_grid_t

0x22a2,	// (0x0003aae3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x22aa,	// (0x0003aaeb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x22b2,	// (0x0003aaf3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd4c,	// (0x0004858d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x22ba,	// (0x0003aafb) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x22ba,	// (0x0003aafb) cell_fep_china_hwr2_fs_candidate_grid

0x22d3,	// (0x0003ab14) popup_fep_china_hwr2_fs_candidate_grid_g20

0x22db,	// (0x0003ab1c) popup_fep_china_hwr2_fs_candidate_grid_g21

0x0a64,	// (0x000392a5) cell_fep_china_hwr2_fs_candidate_grid_g1

0x0a64,	// (0x000392a5) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb67,	// (0x000483a8) cell_fep_china_hwr2_fs_candidate_grid_g

0x22e3,	// (0x0003ab24) cell_fep_china_hwr2_fs_candidate_grid_t1

0xd09d,	// (0x000458de) clock_nsta_pane_cp_24_ParamLimits

0xd09d,	// (0x000458de) clock_nsta_pane_cp_24

0xd105,	// (0x00045946) indicator_nsta_pane_cp_24_ParamLimits

0xd105,	// (0x00045946) indicator_nsta_pane_cp_24

0xde16,	// (0x00046657) heading_pane_g1

0x0001,

0xf904,	// (0x00048145) heading_pane_g

0xe46e,	// (0x00046caf) grid_sct_catagory_button_pane

0xd5b9,	// (0x00045dfa) scroll_pane_cp5_ParamLimits

0xecfa,	// (0x0004753b) button_value_adjust_pane_cp5_ParamLimits

0xecfa,	// (0x0004753b) button_value_adjust_pane_cp5

0xedb8,	// (0x000475f9) form2_midp_time_pane_ParamLimits

0x22f1,	// (0x0003ab32) cell_sct_catagory_button_pane_ParamLimits

0x22f1,	// (0x0003ab32) cell_sct_catagory_button_pane

0x0a29,	// (0x0003926a) bg_button_pane_cp01_ParamLimits

0x0a29,	// (0x0003926a) bg_button_pane_cp01

0x0a64,	// (0x000392a5) cell_sct_catagory_button_pane_g1

0x9966,	// (0x000421a7) popup_tb_extension_window

0xaea9,	// (0x000436ea) aid_size_cell_ext_ParamLimits

0xaea9,	// (0x000436ea) aid_size_cell_ext

0xc043,	// (0x00044884) bg_tb_trans_pane_cp1_ParamLimits

0xc043,	// (0x00044884) bg_tb_trans_pane_cp1

0xaecf,	// (0x00043710) grid_tb_ext_pane_ParamLimits

0xaecf,	// (0x00043710) grid_tb_ext_pane

0xaf0f,	// (0x00043750) cell_tb_ext_pane_ParamLimits

0xaf0f,	// (0x00043750) cell_tb_ext_pane

0xaf37,	// (0x00043778) cell_tb_ext_pane_g1_ParamLimits

0xaf37,	// (0x00043778) cell_tb_ext_pane_g1

0x2389,	// (0x0003abca) cell_tb_ext_pane_t1

0x8d66,	// (0x000415a7) list_highlight_pane_cp11_ParamLimits

0x8d66,	// (0x000415a7) list_highlight_pane_cp11

0x5d78,	// (0x0003e5b9) popup_uni_indicator_window_ParamLimits

0x5d78,	// (0x0003e5b9) popup_uni_indicator_window

0xc2d4,	// (0x00044b15) bg_popup_sub_pane_cp14

0x23a4,	// (0x0003abe5) list_uniindi_pane

0x23b0,	// (0x0003abf1) uniindi_top_pane

0x8d66,	// (0x000415a7) bg_uniindi_top_pane

0x23cf,	// (0x0003ac10) uniindi_top_pane_g1

0x23e5,	// (0x0003ac26) uniindi_top_pane_g2

0x0003,

0xfd53,	// (0x00048594) uniindi_top_pane_g

0x240f,	// (0x0003ac50) uniindi_top_pane_t1

0x2439,	// (0x0003ac7a) list_single_uniindi_pane_ParamLimits

0x2439,	// (0x0003ac7a) list_single_uniindi_pane

0x0a64,	// (0x000392a5) bg_uniindi_top_pane_g1

0x244b,	// (0x0003ac8c) list_single_uniindi_pane_g1

0x245e,	// (0x0003ac9f) list_single_uniindi_pane_t1

0x5bfc,	// (0x0003e43d) control_bg_pane

0x2483,	// (0x0003acc4) bg_sctrl_sk_pane_cp1

0x248c,	// (0x0003accd) bg_sctrl_sk_pane_cp2

0x2495,	// (0x0003acd6) control_bg_pane_g1

0x249e,	// (0x0003acdf) control_bg_pane_g2

0x0001,

0xfd5c,	// (0x0004859d) control_bg_pane_g

0xebf5,	// (0x00047436) cell_indicator_nsta_pane_g1_ParamLimits

0xa596,	// (0x00042dd7) cell_indicator_nsta_pane_g2_ParamLimits

0xfad8,	// (0x00048319) cell_indicator_nsta_pane_g_ParamLimits

0xf2d7,	// (0x00047b18) form2_midp_time_pane_t1_ParamLimits

0x0ff5,	// (0x00039836) main_idle_act4_pane_ParamLimits

0x0ff5,	// (0x00039836) main_idle_act4_pane

0x9966,	// (0x000421a7) popup_tb_extension_window_ParamLimits

0xaef6,	// (0x00043737) tb_ext_find_pane_ParamLimits

0xaef6,	// (0x00043737) tb_ext_find_pane

0x24a7,	// (0x0003ace8) ai_gene_pane_1_cp1

0xcd8c,	// (0x000455cd) ai_gene_pane_2_cp1

0x24af,	// (0x0003acf0) list_single_idle_plugin_calendar_pane

0x24b8,	// (0x0003acf9) list_single_idle_plugin_notification_pane

0x24c1,	// (0x0003ad02) list_single_idle_plugin_player_pane

0xaf54,	// (0x00043795) list_single_idle_plugin_shortcut_pane_ParamLimits

0xaf54,	// (0x00043795) list_single_idle_plugin_shortcut_pane

0xaf7c,	// (0x000437bd) main_idle_act4_pane_t1

0xaf92,	// (0x000437d3) main_idle_act4_pane_t2

0x0001,

0xfd61,	// (0x000485a2) main_idle_act4_pane_t

0xafaa,	// (0x000437eb) middle_sk_idle_act4_pane_ParamLimits

0xafaa,	// (0x000437eb) middle_sk_idle_act4_pane

0xafc6,	// (0x00043807) popup_clock_digital_analogue_window_cp2

0xafed,	// (0x0004382e) shortcut_wheel_idle_act4_pane_ParamLimits

0xafed,	// (0x0004382e) shortcut_wheel_idle_act4_pane

0x0a64,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g1

0x0a64,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g2

0x0a64,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g3

0x0a64,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g4

0x0a64,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g5

0x2554,	// (0x0003ad95) shortcut_wheel_idle_act4_pane_g6

0x255c,	// (0x0003ad9d) shortcut_wheel_idle_act4_pane_g7

0x2564,	// (0x0003ada5) shortcut_wheel_idle_act4_pane_g8

0x256c,	// (0x0003adad) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd66,	// (0x000485a7) shortcut_wheel_idle_act4_pane_g

0x506b,	// (0x0003d8ac) middle_sk_idle_act4_pane_g1_ParamLimits

0x506b,	// (0x0003d8ac) middle_sk_idle_act4_pane_g1

0xb06a,	// (0x000438ab) middle_sk_idle_act4_pane_g2_ParamLimits

0xb06a,	// (0x000438ab) middle_sk_idle_act4_pane_g2

0x0001,

0xfd89,	// (0x000485ca) middle_sk_idle_act4_pane_g_ParamLimits

0xfd89,	// (0x000485ca) middle_sk_idle_act4_pane_g

0xb082,	// (0x000438c3) middle_sk_idle_act4_pane_t1_ParamLimits

0xb082,	// (0x000438c3) middle_sk_idle_act4_pane_t1

0xb0b1,	// (0x000438f2) grid_ai_shortcut_pane_ParamLimits

0xb0b1,	// (0x000438f2) grid_ai_shortcut_pane

0xb0ce,	// (0x0004390f) list_highlight_pane_cp16_ParamLimits

0xb0ce,	// (0x0004390f) list_highlight_pane_cp16

0xb0db,	// (0x0004391c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb0db,	// (0x0004391c) list_single_idle_plugin_shortcut_pane_g1

0xb0e7,	// (0x00043928) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb0e7,	// (0x00043928) list_single_idle_plugin_shortcut_pane_g2

0xb103,	// (0x00043944) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb103,	// (0x00043944) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd8e,	// (0x000485cf) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd8e,	// (0x000485cf) list_single_idle_plugin_shortcut_pane_g

0xb118,	// (0x00043959) cell_ai_shortcut_pane_ParamLimits

0xb118,	// (0x00043959) cell_ai_shortcut_pane

0xb12e,	// (0x0004396f) cell_ai_shortcut_pane_g1_ParamLimits

0xb12e,	// (0x0004396f) cell_ai_shortcut_pane_g1

0x24a7,	// (0x0003ace8) ai_gene_pane_1_cp2

0x2699,	// (0x0003aeda) ai_gene_pane_2_cp2

0x26a1,	// (0x0003aee2) list_highlight_pane_cp15

0x26aa,	// (0x0003aeeb) list_single_idle_plugin_calendar_pane_g1

0x26a1,	// (0x0003aee2) list_highlight_pane_cp17

0x26b2,	// (0x0003aef3) list_single_idle_plugin_calendar_pane_g1_copy1

0x26ba,	// (0x0003aefb) list_single_idle_plugin_player_pane_g1

0xe683,	// (0x00046ec4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd95,	// (0x000485d6) list_single_idle_plugin_player_pane_g

0x26c2,	// (0x0003af03) list_single_idle_plugin_player_pane_t1

0x26d0,	// (0x0003af11) list_single_idle_plugin_player_pane_t2

0x26de,	// (0x0003af1f) list_single_idle_plugin_player_pane_t3

0x26ec,	// (0x0003af2d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9a,	// (0x000485db) list_single_idle_plugin_player_pane_t

0x26fa,	// (0x0003af3b) wait_bar_pane_cp15

0x2702,	// (0x0003af43) grid_ai_notification_pane

0xe683,	// (0x00046ec4) list_single_idle_plugin_notification_pane_g1

0xb150,	// (0x00043991) cell_ai_notification_pane_ParamLimits

0xb150,	// (0x00043991) cell_ai_notification_pane

0x2718,	// (0x0003af59) cell_ai_notification_pane_g1

0x2720,	// (0x0003af61) cell_ai_notification_pane_t1

0xb15d,	// (0x0004399e) tb_ext_find_button_pane

0xb165,	// (0x000439a6) tb_ext_find_pane_g1

0xb16d,	// (0x000439ae) tb_ext_find_pane_t1

0xc7fb,	// (0x0004503c) tb_ext_find_button_pane_g1

0x274c,	// (0x0003af8d) tb_ext_find_button_pane_g2

0x0001,

0xfda3,	// (0x000485e4) tb_ext_find_button_pane_g

0xaf7c,	// (0x000437bd) main_idle_act4_pane_t1_ParamLimits

0xaf92,	// (0x000437d3) main_idle_act4_pane_t2_ParamLimits

0xfd61,	// (0x000485a2) main_idle_act4_pane_t_ParamLimits

0xafc6,	// (0x00043807) popup_clock_digital_analogue_window_cp2_ParamLimits

0xafdd,	// (0x0004381e) sat_plugin_idle_act4_pane_ParamLimits

0xafdd,	// (0x0004381e) sat_plugin_idle_act4_pane

0xb17b,	// (0x000439bc) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb17b,	// (0x000439bc) sat_plugin_idle_act4_pane_t1

0xb193,	// (0x000439d4) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb193,	// (0x000439d4) sat_plugin_idle_act4_pane_t2

0xb1ab,	// (0x000439ec) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb1ab,	// (0x000439ec) sat_plugin_idle_act4_pane_t3

0xb1c3,	// (0x00043a04) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb1c3,	// (0x00043a04) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda8,	// (0x000485e9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda8,	// (0x000485e9) sat_plugin_idle_act4_pane_t

0x5cc1,	// (0x0003e502) popup_battery_window_ParamLimits

0x5cc1,	// (0x0003e502) popup_battery_window

0x8d66,	// (0x000415a7) bg_popup_sub_pane_cp25_ParamLimits

0x8d66,	// (0x000415a7) bg_popup_sub_pane_cp25

0x27a1,	// (0x0003afe2) popup_battery_window_g1_ParamLimits

0x27a1,	// (0x0003afe2) popup_battery_window_g1

0x27ad,	// (0x0003afee) popup_battery_window_t1_ParamLimits

0x27ad,	// (0x0003afee) popup_battery_window_t1

0x27bf,	// (0x0003b000) popup_battery_window_t2_ParamLimits

0x27bf,	// (0x0003b000) popup_battery_window_t2

0x0001,

0xfdb1,	// (0x000485f2) popup_battery_window_t_ParamLimits

0xfdb1,	// (0x000485f2) popup_battery_window_t

0x9188,	// (0x000419c9) midp_canvas_pane_ParamLimits

0x91e5,	// (0x00041a26) midp_keypad_pane_ParamLimits

0x91e5,	// (0x00041a26) midp_keypad_pane

0xc41f,	// (0x00044c60) main_midp_pane_ParamLimits

0xecad,	// (0x000474ee) signal_pane_g2_cp_ParamLimits

0xb1db,	// (0x00043a1c) aid_size_cell_midp_keypad_ParamLimits

0xb1db,	// (0x00043a1c) aid_size_cell_midp_keypad

0xb1f9,	// (0x00043a3a) midp_keyp_game_grid_pane_ParamLimits

0xb1f9,	// (0x00043a3a) midp_keyp_game_grid_pane

0xb220,	// (0x00043a61) midp_keyp_rocker_pane_ParamLimits

0xb220,	// (0x00043a61) midp_keyp_rocker_pane

0xb279,	// (0x00043aba) midp_keyp_sk_left_pane_ParamLimits

0xb279,	// (0x00043aba) midp_keyp_sk_left_pane

0xb2cd,	// (0x00043b0e) midp_keyp_sk_right_pane_ParamLimits

0xb2cd,	// (0x00043b0e) midp_keyp_sk_right_pane

0x8786,	// (0x00040fc7) bg_button_pane_cp03

0xb321,	// (0x00043b62) midp_keyp_sk_left_pane_g1

0x8786,	// (0x00040fc7) bg_button_pane_cp04

0xb321,	// (0x00043b62) midp_keyp_sk_right_pane_g1

0x0a64,	// (0x000392a5) midp_keyp_rocker_pane_g1

0xb32a,	// (0x00043b6b) keyp_game_cell_pane_ParamLimits

0xb32a,	// (0x00043b6b) keyp_game_cell_pane

0x8786,	// (0x00040fc7) bg_button_pane_cp02

0xb34e,	// (0x00043b8f) keyp_game_cell_pane_g1

0x888a,	// (0x000410cb) popup_fep_vkb2_window_ParamLimits

0x888a,	// (0x000410cb) popup_fep_vkb2_window

0xb357,	// (0x00043b98) aid_size_cell_vkb2_ParamLimits

0xb357,	// (0x00043b98) aid_size_cell_vkb2

0xb38d,	// (0x00043bce) popup_fep_vkb2_window_g1_ParamLimits

0xb38d,	// (0x00043bce) popup_fep_vkb2_window_g1

0xb3d4,	// (0x00043c15) vkb2_area_bottom_pane_ParamLimits

0xb3d4,	// (0x00043c15) vkb2_area_bottom_pane

0xb428,	// (0x00043c69) vkb2_area_keypad_pane_ParamLimits

0xb428,	// (0x00043c69) vkb2_area_keypad_pane

0xb470,	// (0x00043cb1) vkb2_area_top_pane_ParamLimits

0xb470,	// (0x00043cb1) vkb2_area_top_pane

0xb4f6,	// (0x00043d37) vkb2_top_entry_pane_ParamLimits

0xb4f6,	// (0x00043d37) vkb2_top_entry_pane

0xb523,	// (0x00043d64) vkb2_top_grid_left_pane_ParamLimits

0xb523,	// (0x00043d64) vkb2_top_grid_left_pane

0xb543,	// (0x00043d84) vkb2_top_grid_right_pane_ParamLimits

0xb543,	// (0x00043d84) vkb2_top_grid_right_pane

0x709f,	// (0x0003f8e0) vkb2_cell_keypad_pane_ParamLimits

0x709f,	// (0x0003f8e0) vkb2_cell_keypad_pane

0xb589,	// (0x00043dca) vkb2_area_bottom_grid_pane_ParamLimits

0xb589,	// (0x00043dca) vkb2_area_bottom_grid_pane

0xb5b3,	// (0x00043df4) vkb2_area_bottom_pane_g1_ParamLimits

0xb5b3,	// (0x00043df4) vkb2_area_bottom_pane_g1

0xb5d9,	// (0x00043e1a) vkb2_area_bottom_pane_g2_ParamLimits

0xb5d9,	// (0x00043e1a) vkb2_area_bottom_pane_g2

0xb60a,	// (0x00043e4b) vkb2_area_bottom_pane_g3_ParamLimits

0xb60a,	// (0x00043e4b) vkb2_area_bottom_pane_g3

0x0002,

0xfdb6,	// (0x000485f7) vkb2_area_bottom_pane_g_ParamLimits

0xfdb6,	// (0x000485f7) vkb2_area_bottom_pane_g

0x7249,	// (0x0003fa8a) vkb2_top_cell_left_pane_ParamLimits

0x7249,	// (0x0003fa8a) vkb2_top_cell_left_pane

0xb674,	// (0x00043eb5) vkb2_top_entry_pane_g1_ParamLimits

0xb674,	// (0x00043eb5) vkb2_top_entry_pane_g1

0xb682,	// (0x00043ec3) vkb2_top_entry_pane_t1_ParamLimits

0xb682,	// (0x00043ec3) vkb2_top_entry_pane_t1

0x2930,	// (0x0003b171) vkb2_top_entry_pane_t2_ParamLimits

0x2930,	// (0x0003b171) vkb2_top_entry_pane_t2

0x2962,	// (0x0003b1a3) vkb2_top_entry_pane_t3_ParamLimits

0x2962,	// (0x0003b1a3) vkb2_top_entry_pane_t3

0x0002,

0xfdbd,	// (0x000485fe) vkb2_top_entry_pane_t_ParamLimits

0xfdbd,	// (0x000485fe) vkb2_top_entry_pane_t

0xb6bb,	// (0x00043efc) vkb2_top_grid_right_pane_g1_ParamLimits

0xb6bb,	// (0x00043efc) vkb2_top_grid_right_pane_g1

0x72ec,	// (0x0003fb2d) vkb2_top_grid_right_pane_g2_ParamLimits

0x72ec,	// (0x0003fb2d) vkb2_top_grid_right_pane_g2

0x7304,	// (0x0003fb45) vkb2_top_grid_right_pane_g3_ParamLimits

0x7304,	// (0x0003fb45) vkb2_top_grid_right_pane_g3

0xb6d1,	// (0x00043f12) vkb2_top_grid_right_pane_g4_ParamLimits

0xb6d1,	// (0x00043f12) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc4,	// (0x00048605) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc4,	// (0x00048605) vkb2_top_grid_right_pane_g

0x7332,	// (0x0003fb73) vkb2_top_cell_left_pane_g1

0x7349,	// (0x0003fb8a) vkb2_cell_keypad_pane_g1_ParamLimits

0x7349,	// (0x0003fb8a) vkb2_cell_keypad_pane_g1

0x2978,	// (0x0003b1b9) vkb2_cell_keypad_pane_t1_ParamLimits

0x2978,	// (0x0003b1b9) vkb2_cell_keypad_pane_t1

0x7357,	// (0x0003fb98) vkb2_cell_bottom_grid_pane_ParamLimits

0x7357,	// (0x0003fb98) vkb2_cell_bottom_grid_pane

0x7390,	// (0x0003fbd1) vkb2_cell_bottom_grid_pane_g1

0xb00e,	// (0x0004384f) aid_call2_pane_cp02

0xb016,	// (0x00043857) aid_call_pane_cp02

0xb01e,	// (0x0004385f) clock_digital_number_pane_cp10

0xb026,	// (0x00043867) clock_digital_number_pane_cp11

0xb02e,	// (0x0004386f) clock_digital_number_pane_cp12

0xb036,	// (0x00043877) clock_digital_number_pane_cp13

0xb03e,	// (0x0004387f) clock_digital_separator_pane_cp10

0xc7fb,	// (0x0004503c) popup_clock_digital_analogue_window_cp2_g1

0xc7fb,	// (0x0004503c) popup_clock_digital_analogue_window_cp2_g2

0xb046,	// (0x00043887) popup_clock_digital_analogue_window_cp2_g3

0xc7fb,	// (0x0004503c) popup_clock_digital_analogue_window_cp2_g4

0xb046,	// (0x00043887) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd79,	// (0x000485ba) popup_clock_digital_analogue_window_cp2_g

0xb04e,	// (0x0004388f) popup_clock_digital_analogue_window_cp2_t1

0xb05c,	// (0x0004389d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd84,	// (0x000485c5) popup_clock_digital_analogue_window_cp2_t

0x0a64,	// (0x000392a5) clock_digital_number_pane_cp10_g1

0x0a64,	// (0x000392a5) clock_digital_number_pane_cp10_g2

0x0001,

0xfb67,	// (0x000483a8) clock_digital_number_pane_cp10_g

0x0a64,	// (0x000392a5) clock_digital_separator_pane_cp10_g1

0x0a64,	// (0x000392a5) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb67,	// (0x000483a8) clock_digital_separator_pane_cp10_g

0x23f1,	// (0x0003ac32) uniindi_top_pane_g3

0x2402,	// (0x0003ac43) uniindi_top_pane_g4

0x712a,	// (0x0003f96b) vkb2_row_keypad_pane_ParamLimits

0x712a,	// (0x0003f96b) vkb2_row_keypad_pane

0x73b0,	// (0x0003fbf1) vkb2_cell_t_keypad_pane_ParamLimits

0x73b0,	// (0x0003fbf1) vkb2_cell_t_keypad_pane

0x73c0,	// (0x0003fc01) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x73c0,	// (0x0003fc01) vkb2_cell_t_keypad_pane_cp08

0x73d3,	// (0x0003fc14) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x73d3,	// (0x0003fc14) vkb2_cell_t_keypad_pane_cp09

0x73e7,	// (0x0003fc28) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x73e7,	// (0x0003fc28) vkb2_cell_t_keypad_pane_cp01

0x73f8,	// (0x0003fc39) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x73f8,	// (0x0003fc39) vkb2_cell_t_keypad_pane_cp02

0x7409,	// (0x0003fc4a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7409,	// (0x0003fc4a) vkb2_cell_t_keypad_pane_cp03

0x741a,	// (0x0003fc5b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x741a,	// (0x0003fc5b) vkb2_cell_t_keypad_pane_cp04

0x742b,	// (0x0003fc6c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x742b,	// (0x0003fc6c) vkb2_cell_t_keypad_pane_cp05

0x743c,	// (0x0003fc7d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x743c,	// (0x0003fc7d) vkb2_cell_t_keypad_pane_cp06

0x744d,	// (0x0003fc8e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x744d,	// (0x0003fc8e) vkb2_cell_t_keypad_pane_cp07

0x745e,	// (0x0003fc9f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x745e,	// (0x0003fc9f) vkb2_cell_t_keypad_pane_cp10

0x6bdb,	// (0x0003f41c) vkb2_cell_t_keypad_pane_g1

0x298f,	// (0x0003b1d0) vkb2_cell_t_keypad_pane_t1

0x5bfc,	// (0x0003e43d) popup_grid_graphic2_window

0xb6e7,	// (0x00043f28) aid_size_cell_graphic2_ParamLimits

0xb6e7,	// (0x00043f28) aid_size_cell_graphic2

0xd7d6,	// (0x00046017) bg_popup_window_pane_cp21_ParamLimits

0xd7d6,	// (0x00046017) bg_popup_window_pane_cp21

0xb719,	// (0x00043f5a) graphic2_pages_pane_ParamLimits

0xb719,	// (0x00043f5a) graphic2_pages_pane

0xb76f,	// (0x00043fb0) grid_graphic2_control_pane_ParamLimits

0xb76f,	// (0x00043fb0) grid_graphic2_control_pane

0xb7a3,	// (0x00043fe4) grid_graphic2_pane_ParamLimits

0xb7a3,	// (0x00043fe4) grid_graphic2_pane

0xb816,	// (0x00044057) cell_graphic2_pane

0x8786,	// (0x00040fc7) main_comp_mode_pane

0x1c33,	// (0x0003a474) list_ai3_gene_pane_ParamLimits

0xace4,	// (0x00043525) bg_popup_window_pane_cp19_ParamLimits

0x2043,	// (0x0003a884) bg_touch_area_indi_pane_ParamLimits

0x2043,	// (0x0003a884) bg_touch_area_indi_pane

0x2059,	// (0x0003a89a) bg_touch_area_indi_pane_cp01_ParamLimits

0x2059,	// (0x0003a89a) bg_touch_area_indi_pane_cp01

0x206f,	// (0x0003a8b0) bg_touch_area_indi_pane_cp02_ParamLimits

0x206f,	// (0x0003a8b0) bg_touch_area_indi_pane_cp02

0x2087,	// (0x0003a8c8) bg_touch_area_indi_pane_cp03_ParamLimits

0x2087,	// (0x0003a8c8) bg_touch_area_indi_pane_cp03

0x20a1,	// (0x0003a8e2) popup_slider_window_g1_ParamLimits

0x20bd,	// (0x0003a8fe) popup_slider_window_g2_ParamLimits

0x20d9,	// (0x0003a91a) popup_slider_window_g3_ParamLimits

0xfd0e,	// (0x0004854f) popup_slider_window_g_ParamLimits

0x2135,	// (0x0003a976) popup_slider_window_t1_ParamLimits

0x21a9,	// (0x0003a9ea) small_volume_slider_vertical_pane_ParamLimits

0xb816,	// (0x00044057) cell_graphic2_pane_ParamLimits

0xb871,	// (0x000440b2) bg_button_pane_cp10_ParamLimits

0xb871,	// (0x000440b2) bg_button_pane_cp10

0xb884,	// (0x000440c5) bg_button_pane_cp11_ParamLimits

0xb884,	// (0x000440c5) bg_button_pane_cp11

0xb897,	// (0x000440d8) graphic2_pages_pane_g1_ParamLimits

0xb897,	// (0x000440d8) graphic2_pages_pane_g1

0xb8b2,	// (0x000440f3) graphic2_pages_pane_g2_ParamLimits

0xb8b2,	// (0x000440f3) graphic2_pages_pane_g2

0x0001,

0xfdd2,	// (0x00048613) graphic2_pages_pane_g_ParamLimits

0xfdd2,	// (0x00048613) graphic2_pages_pane_g

0xb8ca,	// (0x0004410b) graphic2_pages_pane_t1_ParamLimits

0xb8ca,	// (0x0004410b) graphic2_pages_pane_t1

0xb8e2,	// (0x00044123) cell_graphic2_control_pane_ParamLimits

0xb8e2,	// (0x00044123) cell_graphic2_control_pane

0xb8fc,	// (0x0004413d) cell_graphic2_pane_g1_ParamLimits

0xb8fc,	// (0x0004413d) cell_graphic2_pane_g1

0xb909,	// (0x0004414a) cell_graphic2_pane_g2_ParamLimits

0xb909,	// (0x0004414a) cell_graphic2_pane_g2

0xa798,	// (0x00042fd9) cell_graphic2_pane_g3_ParamLimits

0xa798,	// (0x00042fd9) cell_graphic2_pane_g3

0xb916,	// (0x00044157) cell_graphic2_pane_g4_ParamLimits

0xb916,	// (0x00044157) cell_graphic2_pane_g4

0xb923,	// (0x00044164) cell_graphic2_pane_g5_ParamLimits

0xb923,	// (0x00044164) cell_graphic2_pane_g5

0x0004,

0xfdd7,	// (0x00048618) cell_graphic2_pane_g_ParamLimits

0xfdd7,	// (0x00048618) cell_graphic2_pane_g

0xb943,	// (0x00044184) cell_graphic2_pane_t1_ParamLimits

0xb943,	// (0x00044184) cell_graphic2_pane_t1

0xde0a,	// (0x0004664b) grid_highlight_pane_cp11_ParamLimits

0xde0a,	// (0x0004664b) grid_highlight_pane_cp11

0xc2d4,	// (0x00044b15) bg_button_pane_cp05

0xb95a,	// (0x0004419b) cell_graphic2_control_pane_g1

0x0a64,	// (0x000392a5) bg_touch_area_indi_pane_g1

0x29a1,	// (0x0003b1e2) aid_cmod_rocker_key_size

0x29ab,	// (0x0003b1ec) aid_cmode_itu_key_size

0x29b5,	// (0x0003b1f6) main_cmode_video_pane

0x29bf,	// (0x0003b200) main_comp_mode_itu_pane

0x29cb,	// (0x0003b20c) main_comp_mode_rocker_pane

0x29d7,	// (0x0003b218) cell_cmode_rocker_pane_ParamLimits

0x29d7,	// (0x0003b218) cell_cmode_rocker_pane

0x29e9,	// (0x0003b22a) cell_cmode_itu_pane_ParamLimits

0x29e9,	// (0x0003b22a) cell_cmode_itu_pane

0xc2d4,	// (0x00044b15) bg_button_pane_cp06_ParamLimits

0xc2d4,	// (0x00044b15) bg_button_pane_cp06

0x0cfd,	// (0x0003953e) cell_cmode_rocker_pane_g1_ParamLimits

0x0cfd,	// (0x0003953e) cell_cmode_rocker_pane_g1

0x224d,	// (0x0003aa8e) cell_cmode_rocker_pane_g2_ParamLimits

0x224d,	// (0x0003aa8e) cell_cmode_rocker_pane_g2

0x0001,

0xfde2,	// (0x00048623) cell_cmode_rocker_pane_g_ParamLimits

0xfde2,	// (0x00048623) cell_cmode_rocker_pane_g

0x8786,	// (0x00040fc7) bg_button_pane_cp07

0x29fe,	// (0x0003b23f) cell_cmode_itu_pane_g1

0x2a07,	// (0x0003b248) cell_cmode_itu_pane_t1

0x2a15,	// (0x0003b256) cell_cmode_itu_pane_t2

0x0001,

0xfde7,	// (0x00048628) cell_cmode_itu_pane_t

0x2473,	// (0x0003acb4) aid_touch_ctrl_left

0x247b,	// (0x0003acbc) aid_touch_ctrl_right

0x8786,	// (0x00040fc7) compa_mode_pane

0xb967,	// (0x000441a8) aid_cmod_rocker_key_size_cp

0xb971,	// (0x000441b2) aid_cmode_itu_key_size_cp

0x2a23,	// (0x0003b264) compa_mode_pane_g1

0x2a2b,	// (0x0003b26c) compa_mode_pane_g2

0x2a33,	// (0x0003b274) compa_mode_pane_g3

0x0002,

0xfdec,	// (0x0004862d) compa_mode_pane_g

0xb97b,	// (0x000441bc) main_comp_mode_itu_pane_cp

0xb983,	// (0x000441c4) main_comp_mode_rocker_pane_cp

0xb98b,	// (0x000441cc) cell_cmode_itu_pane_cp_ParamLimits

0xb98b,	// (0x000441cc) cell_cmode_itu_pane_cp

0xb9a0,	// (0x000441e1) cell_cmode_rocker_pane_cp_ParamLimits

0xb9a0,	// (0x000441e1) cell_cmode_rocker_pane_cp

0xc2d4,	// (0x00044b15) bg_button_pane_cp06_cp_ParamLimits

0xc2d4,	// (0x00044b15) bg_button_pane_cp06_cp

0x0cfd,	// (0x0003953e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x0cfd,	// (0x0003953e) cell_cmode_rocker_pane_g1_cp

0x0a64,	// (0x000392a5) cell_cmode_rocker_pane_g2_cp

0x8786,	// (0x00040fc7) bg_button_pane_cp07_cp

0xb9b2,	// (0x000441f3) cell_cmode_itu_pane_g1_cp

0xb9bb,	// (0x000441fc) cell_cmode_itu_pane_t1_cp

0xb9bb,	// (0x000441fc) cell_cmode_itu_pane_t2_cp

0xa3e1,	// (0x00042c22) settings_code_pane_cp2

0x8a8c,	// (0x000412cd) bg_popup_window_pane_cp3_ParamLimits

0xbf82,	// (0x000447c3) heading_pane_cp3_ParamLimits

0xbf8e,	// (0x000447cf) listscroll_popup_graphic_pane_ParamLimits

0x6984,	// (0x0003f1c5) fep_hwr_aid_pane_ParamLimits

0x6df4,	// (0x0003f635) aid_touch_sctrl_top_ParamLimits

0x6e0f,	// (0x0003f650) sctrl_sk_top_pane_g1_ParamLimits

0x6bdb,	// (0x0003f41c) sctrl_sk_top_pane_g2_ParamLimits

0xfd27,	// (0x00048568) sctrl_sk_top_pane_g_ParamLimits

0x6e1c,	// (0x0003f65d) sctrl_sk_top_pane_t1_ParamLimits

0x6df4,	// (0x0003f635) aid_touch_sctrl_bottom_ParamLimits

0x6e1c,	// (0x0003f65d) sctrl_sk_bottom_pane_t1_ParamLimits

0x23bd,	// (0x0003abfe) aid_area_touch_clock

0xb4b8,	// (0x00043cf9) aid_vkb2_area_top_pane_cell_ParamLimits

0xb4b8,	// (0x00043cf9) aid_vkb2_area_top_pane_cell

0xb563,	// (0x00043da4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb563,	// (0x00043da4) aid_vkb2_area_bottom_pane_cell

0x2928,	// (0x0003b169) popup_char_count_window

0x2a3b,	// (0x0003b27c) popup_char_count_window_g1

0x2a44,	// (0x0003b285) popup_char_count_window_g2

0x2a4d,	// (0x0003b28e) popup_char_count_window_g3

0x0002,

0xfdf3,	// (0x00048634) popup_char_count_window_g

0x2a56,	// (0x0003b297) popup_char_count_window_t1

0x6ecf,	// (0x0003f710) popup_fep_char_preview_window_ParamLimits

0x6ecf,	// (0x0003f710) popup_fep_char_preview_window

0xb4d8,	// (0x00043d19) vkb2_top_candi_pane_ParamLimits

0xb4d8,	// (0x00043d19) vkb2_top_candi_pane

0xb9c9,	// (0x0004420a) cell_vkb2_top_candi_pane_ParamLimits

0xb9c9,	// (0x0004420a) cell_vkb2_top_candi_pane

0x776c,	// (0x0003ffad) bg_popup_fep_char_preview_window_ParamLimits

0x776c,	// (0x0003ffad) bg_popup_fep_char_preview_window

0x777a,	// (0x0003ffbb) popup_fep_char_preview_window_t1_ParamLimits

0x777a,	// (0x0003ffbb) popup_fep_char_preview_window_t1

0x2a74,	// (0x0003b2b5) bg_popup_fep_char_preview_window_g1

0x2a6c,	// (0x0003b2ad) bg_popup_fep_char_preview_window_g2

0x2a64,	// (0x0003b2a5) bg_popup_fep_char_preview_window_g3

0x2a94,	// (0x0003b2d5) bg_popup_fep_char_preview_window_g4

0x2a8c,	// (0x0003b2cd) bg_popup_fep_char_preview_window_g5

0x77b4,	// (0x0003fff5) bg_popup_fep_char_preview_window_g6

0x2a84,	// (0x0003b2c5) bg_popup_fep_char_preview_window_g7

0x2a7c,	// (0x0003b2bd) bg_popup_fep_char_preview_window_g8

0x2a9c,	// (0x0003b2dd) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfa,	// (0x0004863b) bg_popup_fep_char_preview_window_g

0x6bdb,	// (0x0003f41c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6bdb,	// (0x0003f41c) cell_vkb2_top_candi_pane_g1

0x6be9,	// (0x0003f42a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6be9,	// (0x0003f42a) cell_vkb2_top_candi_pane_g2

0x1c97,	// (0x0003a4d8) cell_vkb2_top_candi_pane_g3_ParamLimits

0x1c97,	// (0x0003a4d8) cell_vkb2_top_candi_pane_g3

0x77bc,	// (0x0003fffd) cell_vkb2_top_candi_pane_g4_ParamLimits

0x77bc,	// (0x0003fffd) cell_vkb2_top_candi_pane_g4

0x104b,	// (0x0003988c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x104b,	// (0x0003988c) cell_vkb2_top_candi_pane_g5

0x77dd,	// (0x0004001e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x77dd,	// (0x0004001e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0d,	// (0x0004864e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0d,	// (0x0004864e) cell_vkb2_top_candi_pane_g

0x77eb,	// (0x0004002c) cell_vkb2_top_candi_pane_t1

0x6793,	// (0x0003efd4) aid_size_touch_slider_mark_ParamLimits

0x6793,	// (0x0003efd4) aid_size_touch_slider_mark

0xb755,	// (0x00043f96) grid_graphic2_catg_pane_ParamLimits

0xb755,	// (0x00043f96) grid_graphic2_catg_pane

0xb7e9,	// (0x0004402a) popup_grid_graphic2_window_t1_ParamLimits

0xb7e9,	// (0x0004402a) popup_grid_graphic2_window_t1

0xb7ff,	// (0x00044040) popup_grid_graphic2_window_t2_ParamLimits

0xb7ff,	// (0x00044040) popup_grid_graphic2_window_t2

0x0001,

0xfdcd,	// (0x0004860e) popup_grid_graphic2_window_t_ParamLimits

0xfdcd,	// (0x0004860e) popup_grid_graphic2_window_t

0xc2d4,	// (0x00044b15) bg_button_pane_cp05_ParamLimits

0xb95a,	// (0x0004419b) cell_graphic2_control_pane_g1_ParamLimits

0xba2f,	// (0x00044270) cell_graphic2_catg_pane_ParamLimits

0xba2f,	// (0x00044270) cell_graphic2_catg_pane

0x8786,	// (0x00040fc7) bg_button_pane_cp12

0xba41,	// (0x00044282) cell_graphic2_catg_pane_g1

0x2389,	// (0x0003abca) cell_tb_ext_pane_t1_ParamLimits

0x72a9,	// (0x0003faea) vkb2_top_cell_right_narrow_pane_ParamLimits

0x72a9,	// (0x0003faea) vkb2_top_cell_right_narrow_pane

0x72c1,	// (0x0003fb02) vkb2_top_cell_right_wide_pane_ParamLimits

0x72c1,	// (0x0003fb02) vkb2_top_cell_right_wide_pane

0x6976,	// (0x0003f1b7) bg_vkb2_func_pane_ParamLimits

0x6976,	// (0x0003f1b7) bg_vkb2_func_pane

0x7332,	// (0x0003fb73) vkb2_top_cell_left_pane_g1_ParamLimits

0x6976,	// (0x0003f1b7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6976,	// (0x0003f1b7) bg_vkb2_fuc_pane_cp03

0x7390,	// (0x0003fbd1) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd256,	// (0x00045a97) bg_vkb2_func_pane_g1

0xd25e,	// (0x00045a9f) bg_vkb2_func_pane_g2

0xd26e,	// (0x00045aaf) bg_vkb2_func_pane_g3

0xd266,	// (0x00045aa7) bg_vkb2_func_pane_g4

0xd276,	// (0x00045ab7) bg_vkb2_func_pane_g5

0xd27e,	// (0x00045abf) bg_vkb2_func_pane_g6

0xd286,	// (0x00045ac7) bg_vkb2_func_pane_g7

0xd28e,	// (0x00045acf) bg_vkb2_func_pane_g8

0xd24e,	// (0x00045a8f) bg_vkb2_func_pane_g9

0x0008,

0xfe1a,	// (0x0004865b) bg_vkb2_func_pane_g

0x6976,	// (0x0003f1b7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6976,	// (0x0003f1b7) bg_vkb2_fuc_pane_cp01

0x7332,	// (0x0003fb73) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7332,	// (0x0003fb73) vkb2_top_cell_right_wide_pane_g1

0x6976,	// (0x0003f1b7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6976,	// (0x0003f1b7) bg_vkb2_fuc_pane_cp02

0x7390,	// (0x0003fbd1) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7390,	// (0x0003fbd1) vkb2_top_cell_right_narrow_pane_g1

0xac1e,	// (0x0004345f) aid_touch_area_decrease_ParamLimits

0xac1e,	// (0x0004345f) aid_touch_area_decrease

0xac58,	// (0x00043499) aid_touch_area_increase_ParamLimits

0xac58,	// (0x00043499) aid_touch_area_increase

0xac80,	// (0x000434c1) aid_touch_area_mute_ParamLimits

0xac80,	// (0x000434c1) aid_touch_area_mute

0xacb0,	// (0x000434f1) aid_touch_area_slider_ParamLimits

0xacb0,	// (0x000434f1) aid_touch_area_slider

0xacf0,	// (0x00043531) popup_slider_window_g4_ParamLimits

0xacf0,	// (0x00043531) popup_slider_window_g4

0xad18,	// (0x00043559) popup_slider_window_g5_ParamLimits

0xad18,	// (0x00043559) popup_slider_window_g5

0xad4c,	// (0x0004358d) popup_slider_window_g6_ParamLimits

0xad4c,	// (0x0004358d) popup_slider_window_g6

0x2163,	// (0x0003a9a4) popup_slider_window_t2_ParamLimits

0x2163,	// (0x0003a9a4) popup_slider_window_t2

0x0001,

0xfd1b,	// (0x0004855c) popup_slider_window_t_ParamLimits

0xfd1b,	// (0x0004855c) popup_slider_window_t

0xad68,	// (0x000435a9) slider_pane_ParamLimits

0xad68,	// (0x000435a9) slider_pane

0x2aa4,	// (0x0003b2e5) slider_pane_g1_ParamLimits

0x2aa4,	// (0x0003b2e5) slider_pane_g1

0x2ab8,	// (0x0003b2f9) slider_pane_g2_ParamLimits

0x2ab8,	// (0x0003b2f9) slider_pane_g2

0x2ace,	// (0x0003b30f) slider_pane_g3_ParamLimits

0x2ace,	// (0x0003b30f) slider_pane_g3

0x0003,

0xfe2d,	// (0x0004866e) slider_pane_g_ParamLimits

0xfe2d,	// (0x0004866e) slider_pane_g

0x99ae,	// (0x000421ef) popup_tb_float_extension_window_ParamLimits

0x99ae,	// (0x000421ef) popup_tb_float_extension_window

0x2afa,	// (0x0003b33b) aid_size_cell_tb_float_ext

0x8786,	// (0x00040fc7) bg_popup_sub_window_cp28

0x2b06,	// (0x0003b347) grid_tb_float_ext_pane

0x2b10,	// (0x0003b351) cell_tb_float_ext_pane_ParamLimits

0x2b10,	// (0x0003b351) cell_tb_float_ext_pane

0x2b2a,	// (0x0003b36b) cell_tb_float_ext_pane_g1

0x2b33,	// (0x0003b374) grid_highlight_pane_cp12

0xa776,	// (0x00042fb7) cell_last_hwr_side_pane_ParamLimits

0xa776,	// (0x00042fb7) cell_last_hwr_side_pane

0x0a64,	// (0x000392a5) cell_last_hwr_side_pane_g1

0x2b3c,	// (0x0003b37d) cell_last_hwr_side_pane_g2

0x0001,

0xfe36,	// (0x00048677) cell_last_hwr_side_pane_g

0xb63f,	// (0x00043e80) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb63f,	// (0x00043e80) vkb2_area_bottom_space_btn_pane

0x6bdb,	// (0x0003f41c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x298f,	// (0x0003b1d0) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x77eb,	// (0x0004002c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7825,	// (0x00040066) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7825,	// (0x00040066) vkb2_area_bottom_space_btn_pane_g1

0x785f,	// (0x000400a0) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x785f,	// (0x000400a0) vkb2_area_bottom_space_btn_pane_g2

0x7895,	// (0x000400d6) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7895,	// (0x000400d6) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3b,	// (0x0004867c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3b,	// (0x0004867c) vkb2_area_bottom_space_btn_pane_g

0x6a39,	// (0x0003f27a) cel_fep_hwr_func_pane_ParamLimits

0x6a39,	// (0x0003f27a) cel_fep_hwr_func_pane

0xa74b,	// (0x00042f8c) cell_hwr_side_button_pane_ParamLimits

0xa74b,	// (0x00042f8c) cell_hwr_side_button_pane

0x23bd,	// (0x0003abfe) aid_area_touch_clock_ParamLimits

0x8d66,	// (0x000415a7) bg_uniindi_top_pane_ParamLimits

0x23cf,	// (0x0003ac10) uniindi_top_pane_g1_ParamLimits

0x23e5,	// (0x0003ac26) uniindi_top_pane_g2_ParamLimits

0x23f1,	// (0x0003ac32) uniindi_top_pane_g3_ParamLimits

0x2402,	// (0x0003ac43) uniindi_top_pane_g4_ParamLimits

0xfd53,	// (0x00048594) uniindi_top_pane_g_ParamLimits

0x240f,	// (0x0003ac50) uniindi_top_pane_t1_ParamLimits

0x8d66,	// (0x000415a7) bg_vkb2_func_pane_cp01_ParamLimits

0x8d66,	// (0x000415a7) bg_vkb2_func_pane_cp01

0x2b45,	// (0x0003b386) cel_fep_hwr_func_pane_g1_ParamLimits

0x2b45,	// (0x0003b386) cel_fep_hwr_func_pane_g1

0x8d66,	// (0x000415a7) bg_vkb2_func_pane_cp02_ParamLimits

0x8d66,	// (0x000415a7) bg_vkb2_func_pane_cp02

0x2b45,	// (0x0003b386) cell_hwr_side_button_pane_g1_ParamLimits

0x2b45,	// (0x0003b386) cell_hwr_side_button_pane_g1

0xd166,	// (0x000459a7) status_pane_g4_ParamLimits

0xd166,	// (0x000459a7) status_pane_g4

0xd17e,	// (0x000459bf) status_pane_t1

0xee20,	// (0x00047661) form2_midp_gauge_slider_cont_pane

0xee28,	// (0x00047669) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa68a,	// (0x00042ecb) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa69c,	// (0x00042edd) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1a,	// (0x0004835b) form2_midp_gauge_slider_pane_t_ParamLimits

0xee3a,	// (0x0004767b) form2_midp_slider_pane_ParamLimits

0x6e8f,	// (0x0003f6d0) aid_size_cell_func_vkb2_ParamLimits

0x6e8f,	// (0x0003f6d0) aid_size_cell_func_vkb2

0x2ae6,	// (0x0003b327) slider_pane_g4_ParamLimits

0x2ae6,	// (0x0003b327) slider_pane_g4

0xba4a,	// (0x0004428b) form2_midp_gauge_slider_pane_t2_cp01

0xba58,	// (0x00044299) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xba58,	// (0x00044299) form2_midp_gauge_slider_pane_t3_cp01

0x790a,	// (0x0004014b) form2_midp_slider_pane_cp01

0x8786,	// (0x00040fc7) navi_smil_pane

0x2b75,	// (0x0003b3b6) navi_smil_pane_g1

0x2b7d,	// (0x0003b3be) navi_smil_pane_t1

0x2b53,	// (0x0003b394) form2_midp_slider_pane_g1

0x2b5c,	// (0x0003b39d) form2_midp_slider_pane_g2

0x2b64,	// (0x0003b3a5) form2_midp_slider_pane_g3

0x2b53,	// (0x0003b394) form2_midp_slider_pane_g4

0xba75,	// (0x000442b6) form2_midp_slider_pane_g5

0x0004,

0xfe44,	// (0x00048685) form2_midp_slider_pane_g

0x78cf,	// (0x00040110) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x78cf,	// (0x00040110) vkb2_area_bottom_space_btn_pane_g4

0x9b8a,	// (0x000423cb) lc0_navi_pane_ParamLimits

0x9b8a,	// (0x000423cb) lc0_navi_pane

0x9bf4,	// (0x00042435) lc0_stat_indi_pane_ParamLimits

0x9bf4,	// (0x00042435) lc0_stat_indi_pane

0x9c09,	// (0x0004244a) ls0_title_pane_ParamLimits

0x9c09,	// (0x0004244a) ls0_title_pane

0xc2d4,	// (0x00044b15) bg_popup_sub_pane_cp14_ParamLimits

0x23a4,	// (0x0003abe5) list_uniindi_pane_ParamLimits

0x23b0,	// (0x0003abf1) uniindi_top_pane_ParamLimits

0x244b,	// (0x0003ac8c) list_single_uniindi_pane_g1_ParamLimits

0x245e,	// (0x0003ac9f) list_single_uniindi_pane_t1_ParamLimits

0xba7e,	// (0x000442bf) lc0_stat_clock_pane_ParamLimits

0xba7e,	// (0x000442bf) lc0_stat_clock_pane

0xba8b,	// (0x000442cc) lc0_stat_indi_pane_g1_ParamLimits

0xba8b,	// (0x000442cc) lc0_stat_indi_pane_g1

0xba98,	// (0x000442d9) lc0_stat_indi_pane_g2_ParamLimits

0xba98,	// (0x000442d9) lc0_stat_indi_pane_g2

0x0001,

0xfe4f,	// (0x00048690) lc0_stat_indi_pane_g_ParamLimits

0xfe4f,	// (0x00048690) lc0_stat_indi_pane_g

0xbaa5,	// (0x000442e6) lc0_uni_indicator_pane_ParamLimits

0xbaa5,	// (0x000442e6) lc0_uni_indicator_pane

0xbab2,	// (0x000442f3) ls0_title_pane_g1_ParamLimits

0xbab2,	// (0x000442f3) ls0_title_pane_g1

0xbac6,	// (0x00044307) ls0_title_pane_t1_ParamLimits

0xbac6,	// (0x00044307) ls0_title_pane_t1

0xbaf4,	// (0x00044335) lc0_uni_indicator_pane_g1_ParamLimits

0xbaf4,	// (0x00044335) lc0_uni_indicator_pane_g1

0x2b8b,	// (0x0003b3cc) lc0_stat_clock_pane_t1

0x8786,	// (0x00040fc7) main_ai5_pane

0x2b99,	// (0x0003b3da) ai5_sk_pane_ParamLimits

0x2b99,	// (0x0003b3da) ai5_sk_pane

0xbb23,	// (0x00044364) cell_ai5_widget_pane_ParamLimits

0xbb23,	// (0x00044364) cell_ai5_widget_pane

0x2ba6,	// (0x0003b3e7) aid_size_cell_widget_grid

0x2bb8,	// (0x0003b3f9) bg_ai5_widget_pane_ParamLimits

0x2bb8,	// (0x0003b3f9) bg_ai5_widget_pane

0xbbac,	// (0x000443ed) cell_ai5_widget_pane_g2

0xbbbc,	// (0x000443fd) cell_ai5_widget_pane_g3

0xbbd0,	// (0x00044411) cell_ai5_widget_pane_g4

0xbbdc,	// (0x0004441d) cell_ai5_widget_pane_g5

0xbbe8,	// (0x00044429) cell_ai5_widget_pane_g6

0xbbf4,	// (0x00044435) cell_ai5_widget_pane_g7

0xbc3c,	// (0x0004447d) cell_ai5_widget_pane_t1_ParamLimits

0xbc3c,	// (0x0004447d) cell_ai5_widget_pane_t1

0xbc59,	// (0x0004449a) cell_ai5_widget_pane_t2_ParamLimits

0xbc59,	// (0x0004449a) cell_ai5_widget_pane_t2

0xbc71,	// (0x000444b2) cell_ai5_widget_pane_t3_ParamLimits

0xbc71,	// (0x000444b2) cell_ai5_widget_pane_t3

0xbc89,	// (0x000444ca) cell_ai5_widget_pane_t4_ParamLimits

0xbc89,	// (0x000444ca) cell_ai5_widget_pane_t4

0xbca3,	// (0x000444e4) cell_ai5_widget_pane_t5_ParamLimits

0xbca3,	// (0x000444e4) cell_ai5_widget_pane_t5

0x2bc4,	// (0x0003b405) cell_ai5_widget_pane_t6_ParamLimits

0x2bc4,	// (0x0003b405) cell_ai5_widget_pane_t6

0x2bd6,	// (0x0003b417) cell_ai5_widget_pane_t7_ParamLimits

0x2bd6,	// (0x0003b417) cell_ai5_widget_pane_t7

0xbcc2,	// (0x00044503) cell_ai5_widget_pane_t8_ParamLimits

0xbcc2,	// (0x00044503) cell_ai5_widget_pane_t8

0x0009,

0xfe69,	// (0x000486aa) cell_ai5_widget_pane_t_ParamLimits

0xfe69,	// (0x000486aa) cell_ai5_widget_pane_t

0xbd0a,	// (0x0004454b) grid_ai5_widget_pane

0xc2d4,	// (0x00044b15) highlight_cell_ai5_widget_pane_ParamLimits

0xc2d4,	// (0x00044b15) highlight_cell_ai5_widget_pane

0xbd20,	// (0x00044561) ai5_sk_left_pane

0xbd2a,	// (0x0004456b) ai5_sk_middle_pane

0xbd34,	// (0x00044575) ai5_sk_right_pane

0x2bef,	// (0x0003b430) bg_ai5_widget_pane_g1_ParamLimits

0x2bef,	// (0x0003b430) bg_ai5_widget_pane_g1

0x2bfb,	// (0x0003b43c) bg_ai5_widget_pane_g2_ParamLimits

0x2bfb,	// (0x0003b43c) bg_ai5_widget_pane_g2

0x2c07,	// (0x0003b448) bg_ai5_widget_pane_g3_ParamLimits

0x2c07,	// (0x0003b448) bg_ai5_widget_pane_g3

0x2c13,	// (0x0003b454) bg_ai5_widget_pane_g4_ParamLimits

0x2c13,	// (0x0003b454) bg_ai5_widget_pane_g4

0x2c1f,	// (0x0003b460) bg_ai5_widget_pane_g5_ParamLimits

0x2c1f,	// (0x0003b460) bg_ai5_widget_pane_g5

0x2c2b,	// (0x0003b46c) bg_ai5_widget_pane_g6_ParamLimits

0x2c2b,	// (0x0003b46c) bg_ai5_widget_pane_g6

0x2c37,	// (0x0003b478) bg_ai5_widget_pane_g7_ParamLimits

0x2c37,	// (0x0003b478) bg_ai5_widget_pane_g7

0x2c43,	// (0x0003b484) bg_ai5_widget_pane_g8_ParamLimits

0x2c43,	// (0x0003b484) bg_ai5_widget_pane_g8

0x2c4f,	// (0x0003b490) bg_ai5_widget_pane_g9_ParamLimits

0x2c4f,	// (0x0003b490) bg_ai5_widget_pane_g9

0x0008,

0xfe7e,	// (0x000486bf) bg_ai5_widget_pane_g_ParamLimits

0xfe7e,	// (0x000486bf) bg_ai5_widget_pane_g

0x2c77,	// (0x0003b4b8) cell_shortcut_ai5_widget_pane_ParamLimits

0x2c77,	// (0x0003b4b8) cell_shortcut_ai5_widget_pane

0x8b7b,	// (0x000413bc) bg_cell_shortcut_ai5_widget_pane

0x2c89,	// (0x0003b4ca) cell_grid_ai5_widget_pane_g1

0x2c92,	// (0x0003b4d3) highlight_cell_shortcut_ai5_widget_pane

0xd256,	// (0x00045a97) ai5_sk_left_pane_g1

0x2c9a,	// (0x0003b4db) ai5_sk_left_pane_g2

0x2ca2,	// (0x0003b4e3) ai5_sk_left_pane_g3

0x2caa,	// (0x0003b4eb) ai5_sk_left_pane_g4

0x0003,

0xfe91,	// (0x000486d2) ai5_sk_left_pane_g

0x2cb2,	// (0x0003b4f3) ai5_sk_left_pane_t1

0xd25e,	// (0x00045a9f) ai5_sk_right_pane_g1

0x2cc0,	// (0x0003b501) ai5_sk_right_pane_g2

0x2cc8,	// (0x0003b509) ai5_sk_right_pane_g3

0x2cd0,	// (0x0003b511) ai5_sk_right_pane_g4

0x0003,

0xfe9a,	// (0x000486db) ai5_sk_right_pane_g

0x2cd8,	// (0x0003b519) ai5_sk_right_pane_t1

0xd25e,	// (0x00045a9f) ai5_sk_middle_pane_g1

0xd256,	// (0x00045a97) ai5_sk_middle_pane_g2

0xd276,	// (0x00045ab7) ai5_sk_middle_pane_g3

0x2cc8,	// (0x0003b509) ai5_sk_middle_pane_g4

0x2ca2,	// (0x0003b4e3) ai5_sk_middle_pane_g5

0x2ce6,	// (0x0003b527) ai5_sk_middle_pane_g6

0xbd3e,	// (0x0004457f) ai5_sk_middle_pane_g7

0x0006,

0xfea3,	// (0x000486e4) ai5_sk_middle_pane_g

0x9a76,	// (0x000422b7) aid_touch_area_size_lc0_ParamLimits

0x9a76,	// (0x000422b7) aid_touch_area_size_lc0

0x6c0a,	// (0x0003f44b) cell_hwr_candidate_pane_t1_ParamLimits

0xd088,	// (0x000458c9) aid_touch_navi_pane

0x9cfb,	// (0x0004253c) status_dt_navi_pane_ParamLimits

0x9cfb,	// (0x0004253c) status_dt_navi_pane

0x9d13,	// (0x00042554) status_dt_sta_pane_ParamLimits

0x9d13,	// (0x00042554) status_dt_sta_pane

0xbd46,	// (0x00044587) dt_sta_controll_pane

0xbd53,	// (0x00044594) dt_sta_indi_pane

0xbd60,	// (0x000445a1) dt_sta_title_pane

0x8d66,	// (0x000415a7) bg_dt_sta_indi_pane_ParamLimits

0x8d66,	// (0x000415a7) bg_dt_sta_indi_pane

0xbd72,	// (0x000445b3) dt_sta_battery_pane

0xbd7a,	// (0x000445bb) dt_sta_indi_pane_g1

0x2cee,	// (0x0003b52f) dt_sta_indi_pane_g2

0x2cf7,	// (0x0003b538) dt_sta_indi_pane_g3

0x0002,

0xfeb2,	// (0x000486f3) dt_sta_indi_pane_g

0x2d00,	// (0x0003b541) dt_sta_signal_pane

0xc2d4,	// (0x00044b15) bg_dt_sta_title_pane_ParamLimits

0xc2d4,	// (0x00044b15) bg_dt_sta_title_pane

0xdedc,	// (0x0004671d) dt_sta_title_pane_g1

0xbd83,	// (0x000445c4) dt_sta_title_pane_t1_ParamLimits

0xbd83,	// (0x000445c4) dt_sta_title_pane_t1

0x8786,	// (0x00040fc7) bg_dt_sta_control_pane

0xbd98,	// (0x000445d9) dt_sta_controll_pane_g1

0x2d09,	// (0x0003b54a) bg_dt_sta_title_pane_g1

0x2d12,	// (0x0003b553) bg_dt_sta_title_pane_g2

0x2d1b,	// (0x0003b55c) bg_dt_sta_title_pane_g3

0x0002,

0xfeb9,	// (0x000486fa) bg_dt_sta_title_pane_g

0x0a64,	// (0x000392a5) bg_dt_sta_indi_pane_g1

0x2d24,	// (0x0003b565) dt_sta_signal_pane_g1

0x2d2c,	// (0x0003b56d) dt_sta_signal_pane_g2

0x0001,

0xfec0,	// (0x00048701) dt_sta_signal_pane_g

0x2d34,	// (0x0003b575) dt_sta_battery_pane_g1

0x2d3d,	// (0x0003b57e) dt_sta_battery_pane_t1

0x0a64,	// (0x000392a5) bg_dt_sta_control_pane_g1

0xc879,	// (0x000450ba) fep_china_uni_eep_pane

0xc881,	// (0x000450c2) fep_china_uni_entry_pane_ParamLimits

0xc891,	// (0x000450d2) popup_fep_china_uni_window_g1_ParamLimits

0xc8a1,	// (0x000450e2) popup_fep_china_uni_window_g2_ParamLimits

0xc8a1,	// (0x000450e2) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x00047fa3) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x00047fa3) popup_fep_china_uni_window_g

0x2d4c,	// (0x0003b58d) fep_china_uni_eep_pane_g1

0x2d54,	// (0x0003b595) fep_china_uni_eep_pane_t1

0x2b6c,	// (0x0003b3ad) aid_touch_area_size_smil_player

0xd139,	// (0x0004597a) lc0_clock_pane

0xd172,	// (0x000459b3) status_pane_g5_ParamLimits

0xd172,	// (0x000459b3) status_pane_g5

0x9542,	// (0x00041d83) popup_keymap_window

0xd152,	// (0x00045993) status_icon_pane

0xbbbc,	// (0x000443fd) cell_ai5_widget_pane_g3_ParamLimits

0xbbd0,	// (0x00044411) cell_ai5_widget_pane_g4_ParamLimits

0xbbdc,	// (0x0004441d) cell_ai5_widget_pane_g5_ParamLimits

0xbc00,	// (0x00044441) cell_ai5_widget_pane_g8_ParamLimits

0xbc00,	// (0x00044441) cell_ai5_widget_pane_g8

0xbc14,	// (0x00044455) cell_ai5_widget_pane_g9_ParamLimits

0xbc14,	// (0x00044455) cell_ai5_widget_pane_g9

0xbc28,	// (0x00044469) cell_ai5_widget_pane_g10_ParamLimits

0xbc28,	// (0x00044469) cell_ai5_widget_pane_g10

0x2d63,	// (0x0003b5a4) status_icon_pane_g1

0x8786,	// (0x00040fc7) bg_popup_sub_pane_cp13

0x2d6b,	// (0x0003b5ac) popup_keymap_window_t1

0x9276,	// (0x00041ab7) control_pane_g6_ParamLimits

0x9276,	// (0x00041ab7) control_pane_g6

0x9283,	// (0x00041ac4) control_pane_g7_ParamLimits

0x9283,	// (0x00041ac4) control_pane_g7

0x9290,	// (0x00041ad1) control_pane_g8_ParamLimits

0x9290,	// (0x00041ad1) control_pane_g8

0xbd46,	// (0x00044587) dt_sta_controll_pane_ParamLimits

0xbd53,	// (0x00044594) dt_sta_indi_pane_ParamLimits

0xbd60,	// (0x000445a1) dt_sta_title_pane_ParamLimits

0xc20a,	// (0x00044a4b) aid_size_touch_scroll_bar_cale

0x5cd5,	// (0x0003e516) popup_discreet_window_ParamLimits

0x5cd5,	// (0x0003e516) popup_discreet_window

0x88d0,	// (0x00041111) popup_sk_window

0xd7d6,	// (0x00046017) bg_popup_sub_pane_cp28_ParamLimits

0xd7d6,	// (0x00046017) bg_popup_sub_pane_cp28

0x2d79,	// (0x0003b5ba) popup_discreet_window_g1_ParamLimits

0x2d79,	// (0x0003b5ba) popup_discreet_window_g1

0x2d99,	// (0x0003b5da) popup_discreet_window_t1_ParamLimits

0x2d99,	// (0x0003b5da) popup_discreet_window_t1

0x2db7,	// (0x0003b5f8) popup_discreet_window_t2_ParamLimits

0x2db7,	// (0x0003b5f8) popup_discreet_window_t2

0x0002,

0xfec5,	// (0x00048706) popup_discreet_window_t_ParamLimits

0xfec5,	// (0x00048706) popup_discreet_window_t

0x7c54,	// (0x00040495) popup_sk_window_g1

0x7c5e,	// (0x0004049f) popup_sk_window_g2

0x0001,

0xfecc,	// (0x0004870d) popup_sk_window_g

0x2e17,	// (0x0003b658) popup_sk_window_t1

0x2e09,	// (0x0003b64a) popup_sk_window_t1_copy1

0xbbac,	// (0x000443ed) cell_ai5_widget_pane_g2_ParamLimits

0xbcd4,	// (0x00044515) cell_ai5_widget_pane_t9_ParamLimits

0xbcd4,	// (0x00044515) cell_ai5_widget_pane_t9

0x8786,	// (0x00040fc7) main_fep_fshwr2_pane

0xbda1,	// (0x000445e2) aid_fshwr2_btn_pane

0xbda9,	// (0x000445ea) aid_fshwr2_syb_pane

0xbdb1,	// (0x000445f2) aid_fshwr2_txt_pane

0xbdb9,	// (0x000445fa) fshwr2_func_candi_pane

0xbdc3,	// (0x00044604) fshwr2_hwr_syb_pane

0xbdd1,	// (0x00044612) fshwr2_icf_pane

0x8786,	// (0x00040fc7) fshwr2_icf_bg_pane

0xbddb,	// (0x0004461c) fshwr2_icf_pane_t1_ParamLimits

0xbddb,	// (0x0004461c) fshwr2_icf_pane_t1

0x0a64,	// (0x000392a5) fshwr2_func_candi_pane_g1

0x2e39,	// (0x0003b67a) fshwr2_func_candi_row_pane_ParamLimits

0x2e39,	// (0x0003b67a) fshwr2_func_candi_row_pane

0xbdf5,	// (0x00044636) cell_fshwr2_syb_pane_ParamLimits

0xbdf5,	// (0x00044636) cell_fshwr2_syb_pane

0x0cfd,	// (0x0003953e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0cfd,	// (0x0003953e) fshwr2_hwr_syb_pane_g1

0x8786,	// (0x00040fc7) bg_popup_call_pane_cp01

0x2e4a,	// (0x0003b68b) fshwr2_func_candi_cell_pane_ParamLimits

0x2e4a,	// (0x0003b68b) fshwr2_func_candi_cell_pane

0x2e7b,	// (0x0003b6bc) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2e7b,	// (0x0003b6bc) fshwr2_func_candi_cell_bg_pane

0x2e95,	// (0x0003b6d6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x2e95,	// (0x0003b6d6) fshwr2_func_candi_cell_pane_g1

0x2eb5,	// (0x0003b6f6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x2eb5,	// (0x0003b6f6) fshwr2_func_candi_cell_pane_t1

0x8786,	// (0x00040fc7) bg_button_pane_cp08

0xcd0a,	// (0x0004554b) cell_fshwr2_syb_bg_pane

0xbe0f,	// (0x00044650) cell_fshwr2_syb_bg_pane_g1

0x2ec8,	// (0x0003b709) cell_fshwr2_syb_bg_pane_t1

0xc2d4,	// (0x00044b15) main_tmo_pane

0xa212,	// (0x00042a53) uni_indicator_pane_g1_ParamLimits

0xa227,	// (0x00042a68) uni_indicator_pane_g2_ParamLimits

0xa23c,	// (0x00042a7d) uni_indicator_pane_g3_ParamLimits

0xe1a0,	// (0x000469e1) uni_indicator_pane_g4_ParamLimits

0xe1a0,	// (0x000469e1) uni_indicator_pane_g4

0xe1b4,	// (0x000469f5) uni_indicator_pane_g5_ParamLimits

0xe1b4,	// (0x000469f5) uni_indicator_pane_g5

0xe1c8,	// (0x00046a09) uni_indicator_pane_g6_ParamLimits

0xe1c8,	// (0x00046a09) uni_indicator_pane_g6

0xf95a,	// (0x0004819b) uni_indicator_pane_g_ParamLimits

0xac00,	// (0x00043441) popup_tmo_note_window_ParamLimits

0xac00,	// (0x00043441) popup_tmo_note_window

0x8786,	// (0x00040fc7) fshwr2_bg_pane

0x2ea6,	// (0x0003b6e7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x2ea6,	// (0x0003b6e7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed1,	// (0x00048712) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed1,	// (0x00048712) fshwr2_func_candi_cell_pane_g

0x0a64,	// (0x000392a5) bg_popup_window_pane_cp01

0x2ed7,	// (0x0003b718) bg_popup_window_pane_g1_cp01

0x2ee0,	// (0x0003b721) bg_popup_window_pane_cp22_ParamLimits

0x2ee0,	// (0x0003b721) bg_popup_window_pane_cp22

0x2eee,	// (0x0003b72f) listscroll_tmo_link_pane_ParamLimits

0x2eee,	// (0x0003b72f) listscroll_tmo_link_pane

0x2f2e,	// (0x0003b76f) popup_tmo_note_window_g1_ParamLimits

0x2f2e,	// (0x0003b76f) popup_tmo_note_window_g1

0x2f3b,	// (0x0003b77c) tmo_note_info_pane_ParamLimits

0x2f3b,	// (0x0003b77c) tmo_note_info_pane

0xbe17,	// (0x00044658) list_tmo_note_info_pane_g1_ParamLimits

0xbe17,	// (0x00044658) list_tmo_note_info_pane_g1

0x2f55,	// (0x0003b796) list_tmo_note_info_pane_g2_ParamLimits

0x2f55,	// (0x0003b796) list_tmo_note_info_pane_g2

0x0001,

0xfed6,	// (0x00048717) list_tmo_note_info_pane_g_ParamLimits

0xfed6,	// (0x00048717) list_tmo_note_info_pane_g

0x2f71,	// (0x0003b7b2) list_tmo_note_info_text_pane_ParamLimits

0x2f71,	// (0x0003b7b2) list_tmo_note_info_text_pane

0x2fb3,	// (0x0003b7f4) list_tmo_link_pane

0x2fc0,	// (0x0003b801) scroll_pane_cp20

0x2fcd,	// (0x0003b80e) list_single_tmo_link_pane_ParamLimits

0x2fcd,	// (0x0003b80e) list_single_tmo_link_pane

0x2fdd,	// (0x0003b81e) list_single_tmo_link_pane_t1

0x2feb,	// (0x0003b82c) list_tmo_note_info_text_pane_t1_ParamLimits

0x2feb,	// (0x0003b82c) list_tmo_note_info_text_pane_t1

0x8f5f,	// (0x000417a0) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8f5f,	// (0x000417a0) aid_size_touch_scroll_bar_cp01

0x437c,	// (0x0003cbbd) aid_size_touch_slider_marker

0x88c0,	// (0x00041101) popup_settings_window_ParamLimits

0x88c0,	// (0x00041101) popup_settings_window

0xf06b,	// (0x000478ac) popup_candi_list_indi_window

0xd088,	// (0x000458c9) aid_touch_navi_pane_ParamLimits

0x6dc8,	// (0x0003f609) rs_clock_indi_pane

0x6dd1,	// (0x0003f612) sctrl_sk_bottom_pane_ParamLimits

0x6de2,	// (0x0003f623) sctrl_sk_top_pane_ParamLimits

0x6ee9,	// (0x0003f72a) popup_fep_tooltip_window

0x2ba6,	// (0x0003b3e7) aid_size_cell_widget_grid_ParamLimits

0xbba0,	// (0x000443e1) cell_ai5_widget_pane_g1_ParamLimits

0xbba0,	// (0x000443e1) cell_ai5_widget_pane_g1

0xbbe8,	// (0x00044429) cell_ai5_widget_pane_g6_ParamLimits

0xbbf4,	// (0x00044435) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe54,	// (0x00048695) cell_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x00048695) cell_ai5_widget_pane_g

0xbcf8,	// (0x00044539) cell_ai5_widget_pane_t10_ParamLimits

0xbcf8,	// (0x00044539) cell_ai5_widget_pane_t10

0xbd0a,	// (0x0004454b) grid_ai5_widget_pane_ParamLimits

0x2c5b,	// (0x0003b49c) cell_contacts_ai5_widget_pane_ParamLimits

0x2c5b,	// (0x0003b49c) cell_contacts_ai5_widget_pane

0x2dcc,	// (0x0003b60d) popup_discreet_window_t3_ParamLimits

0x2dcc,	// (0x0003b60d) popup_discreet_window_t3

0x2e25,	// (0x0003b666) popup_fshwr2_char_preview_window_ParamLimits

0x2e25,	// (0x0003b666) popup_fshwr2_char_preview_window

0xbe2e,	// (0x0004466f) tmo_note_info_pane_t1

0xbe43,	// (0x00044684) tmo_note_info_pane_t2

0xbe5c,	// (0x0004469d) tmo_note_info_pane_t3

0x2f8f,	// (0x0003b7d0) tmo_note_info_pane_t4

0x2fa1,	// (0x0003b7e2) tmo_note_info_pane_t5

0x0004,

0xfedb,	// (0x0004871c) tmo_note_info_pane_t

0x2fb3,	// (0x0003b7f4) list_tmo_link_pane_ParamLimits

0x2fc0,	// (0x0003b801) scroll_pane_cp20_ParamLimits

0x8786,	// (0x00040fc7) bg_popup_fep_char_preview_window_cp01

0x3004,	// (0x0003b845) popup_fshwr2_char_preview_window_t1

0x3012,	// (0x0003b853) popup_candi_list_indi_window_g1

0x301b,	// (0x0003b85c) bg_cell_contacts_ai5_widget_pane

0x3027,	// (0x0003b868) cell_contacts_ai5_widget_pane_g1

0x303b,	// (0x0003b87c) cell_contacts_ai5_widget_pane_g2

0x304a,	// (0x0003b88b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee6,	// (0x00048727) cell_contacts_ai5_widget_pane_g

0x305d,	// (0x0003b89e) cell_contacts_ai5_widget_pane_t1

0xc2d4,	// (0x00044b15) highlight_cell_shortcut_ai5_widget_pane_cp01

0x30d7,	// (0x0003b918) settings_container_pane

0xcd0a,	// (0x0004554b) listscroll_set_pane_copy1

0xe9a5,	// (0x000471e6) scroll_pane_cp121_copy1

0x30e3,	// (0x0003b924) set_content_pane_copy1

0x30eb,	// (0x0003b92c) aid_height_set_list_copy1_ParamLimits

0x30eb,	// (0x0003b92c) aid_height_set_list_copy1

0xcf56,	// (0x00045797) aid_size_parent_copy1_ParamLimits

0xcf56,	// (0x00045797) aid_size_parent_copy1

0x30f7,	// (0x0003b938) button_value_adjust_pane_cp6_copy1_ParamLimits

0x30f7,	// (0x0003b938) button_value_adjust_pane_cp6_copy1

0xc41f,	// (0x00044c60) list_highlight_pane_cp2_copy1_ParamLimits

0xc41f,	// (0x00044c60) list_highlight_pane_cp2_copy1

0x310b,	// (0x0003b94c) list_set_pane_copy1_ParamLimits

0x310b,	// (0x0003b94c) list_set_pane_copy1

0x3072,	// (0x0003b8b3) main_pane_set_t1_copy1_ParamLimits

0x3072,	// (0x0003b8b3) main_pane_set_t1_copy1

0x30ac,	// (0x0003b8ed) main_pane_set_t2_copy1_ParamLimits

0x30ac,	// (0x0003b8ed) main_pane_set_t2_copy1

0x31b8,	// (0x0003b9f9) main_pane_set_t3_copy1

0x31c6,	// (0x0003ba07) main_pane_set_t4_copy1

0x30cb,	// (0x0003b90c) set_content_pane_g1_copy1_ParamLimits

0x30cb,	// (0x0003b90c) set_content_pane_g1_copy1

0x31d4,	// (0x0003ba15) setting_code_pane_copy1

0x31de,	// (0x0003ba1f) setting_slider_graphic_pane_copy1

0x31de,	// (0x0003ba1f) setting_slider_pane_copy1

0x31e8,	// (0x0003ba29) setting_text_pane_copy1

0x31f2,	// (0x0003ba33) setting_volume_pane_copy1

0x31fb,	// (0x0003ba3c) settings_code_pane_cp2_copy1

0x3203,	// (0x0003ba44) settings_code_pane_cp_copy1_ParamLimits

0x3203,	// (0x0003ba44) settings_code_pane_cp_copy1

0x3217,	// (0x0003ba58) volume_set_pane_copy1

0x321f,	// (0x0003ba60) volume_set_pane_g10_copy1

0x3227,	// (0x0003ba68) volume_set_pane_g1_copy1

0x322f,	// (0x0003ba70) volume_set_pane_g2_copy1

0x3237,	// (0x0003ba78) volume_set_pane_g3_copy1

0x323f,	// (0x0003ba80) volume_set_pane_g4_copy1

0x3247,	// (0x0003ba88) volume_set_pane_g5_copy1

0x324f,	// (0x0003ba90) volume_set_pane_g6_copy1

0x3257,	// (0x0003ba98) volume_set_pane_g7_copy1

0x325f,	// (0x0003baa0) volume_set_pane_g8_copy1

0x3267,	// (0x0003baa8) volume_set_pane_g9_copy1

0x8a8c,	// (0x000412cd) bg_set_opt_pane_cp_copy1_ParamLimits

0x8a8c,	// (0x000412cd) bg_set_opt_pane_cp_copy1

0x326f,	// (0x0003bab0) setting_slider_pane_t1_copy1_ParamLimits

0x326f,	// (0x0003bab0) setting_slider_pane_t1_copy1

0x328d,	// (0x0003bace) setting_slider_pane_t2_copy1_ParamLimits

0x328d,	// (0x0003bace) setting_slider_pane_t2_copy1

0x32a7,	// (0x0003bae8) setting_slider_pane_t3_copy1_ParamLimits

0x32a7,	// (0x0003bae8) setting_slider_pane_t3_copy1

0x32bf,	// (0x0003bb00) slider_set_pane_copy1_ParamLimits

0x32bf,	// (0x0003bb00) slider_set_pane_copy1

0xc32f,	// (0x00044b70) set_opt_bg_pane_g1_copy2

0xc337,	// (0x00044b78) set_opt_bg_pane_g2_copy2

0x32d5,	// (0x0003bb16) set_opt_bg_pane_g3_copy2

0xc347,	// (0x00044b88) set_opt_bg_pane_g4_copy2

0xc34f,	// (0x00044b90) set_opt_bg_pane_g5_copy2

0xc357,	// (0x00044b98) set_opt_bg_pane_g6_copy2

0x32df,	// (0x0003bb20) set_opt_bg_pane_g7_copy2

0x32e7,	// (0x0003bb28) set_opt_bg_pane_g8_copy2

0x32f1,	// (0x0003bb32) set_opt_bg_pane_g9_copy2

0x7d37,	// (0x00040578) aid_size_touch_slider_mark_copy1_ParamLimits

0x7d37,	// (0x00040578) aid_size_touch_slider_mark_copy1

0x32fb,	// (0x0003bb3c) slider_set_pane_g1_copy1

0x7d4b,	// (0x0004058c) slider_set_pane_g2_copy1

0x67b3,	// (0x0003eff4) slider_set_pane_g3_copy1_ParamLimits

0x67b3,	// (0x0003eff4) slider_set_pane_g3_copy1

0x67c7,	// (0x0003f008) slider_set_pane_g4_copy1_ParamLimits

0x67c7,	// (0x0003f008) slider_set_pane_g4_copy1

0x67df,	// (0x0003f020) slider_set_pane_g5_copy1_ParamLimits

0x67df,	// (0x0003f020) slider_set_pane_g5_copy1

0x67b3,	// (0x0003eff4) slider_set_pane_g6_copy1_ParamLimits

0x67b3,	// (0x0003eff4) slider_set_pane_g6_copy1

0x7d53,	// (0x00040594) slider_set_pane_g7_copy1_ParamLimits

0x7d53,	// (0x00040594) slider_set_pane_g7_copy1

0x8880,	// (0x000410c1) bg_set_opt_pane_cp2_copy1

0x3304,	// (0x0003bb45) setting_slider_graphic_pane_g1_copy1

0x330d,	// (0x0003bb4e) setting_slider_graphic_pane_t1_copy1

0x331d,	// (0x0003bb5e) setting_slider_graphic_pane_t2_copy1

0x332d,	// (0x0003bb6e) slider_set_pane_cp_copy1

0x333d,	// (0x0003bb7e) input_focus_pane_cp1_copy1

0x3346,	// (0x0003bb87) list_set_text_pane_copy1

0x334e,	// (0x0003bb8f) setting_text_pane_g1_copy1

0xf576,	// (0x00047db7) set_text_pane_t1_copy1

0x333d,	// (0x0003bb7e) input_focus_pane_cp2_copy1

0x334e,	// (0x0003bb8f) setting_code_pane_g1_copy1

0x3357,	// (0x0003bb98) setting_code_pane_t1_copy1

0x3365,	// (0x0003bba6) list_set_graphic_pane_copy1

0x8880,	// (0x000410c1) bg_set_opt_pane_cp4_copy1

0xca0c,	// (0x0004524d) list_set_graphic_pane_g1_copy1_ParamLimits

0xca0c,	// (0x0004524d) list_set_graphic_pane_g1_copy1

0x3379,	// (0x0003bbba) list_set_graphic_pane_g2_copy1

0xca24,	// (0x00045265) list_set_graphic_pane_t1_copy1_ParamLimits

0xca24,	// (0x00045265) list_set_graphic_pane_t1_copy1

0x0a64,	// (0x000392a5) rs_clock_indi_pane_g1

0x3381,	// (0x0003bbc2) rs_clock_indi_pane_t1

0x338f,	// (0x0003bbd0) rs_indi_pane

0x3397,	// (0x0003bbd8) rs_indi_pane_g1

0x33a0,	// (0x0003bbe1) rs_indi_pane_g2

0x33a9,	// (0x0003bbea) rs_indi_pane_g3

0x0002,

0xfeed,	// (0x0004872e) rs_indi_pane_g

0xcd0a,	// (0x0004554b) bg_popup_preview_window_pane_cp03

0x33b2,	// (0x0003bbf3) popup_fep_tooltip_window_t1

0x170b,	// (0x00039f4c) popup_note2_window_g2_ParamLimits

0x170b,	// (0x00039f4c) popup_note2_window_g2

0x0001,

0xfc92,	// (0x000484d3) popup_note2_window_g_ParamLimits

0xfc92,	// (0x000484d3) popup_note2_window_g

0x1bf9,	// (0x0003a43a) bg_popup_sub_pane_cp11_ParamLimits

0x1c06,	// (0x0003a447) cell_ai3_links_pane_g1_ParamLimits

0x1c1d,	// (0x0003a45e) cell_ai3_links_pane_t1

0xf576,	// (0x00047db7) set_text_pane_t1_copy1_ParamLimits

0xcc19,	// (0x0004545a) cell_graphic_popup_pane_cp2_ParamLimits

0xcc19,	// (0x0004545a) cell_graphic_popup_pane_cp2

0x33c0,	// (0x0003bc01) cell_graphic_popup_pane_g1_cp2

0xc01d,	// (0x0004485e) cell_graphic_popup_pane_g2_cp2

0x33c8,	// (0x0003bc09) cell_graphic_popup_pane_g3_cp2

0x33d0,	// (0x0003bc11) cell_graphic_popup_pane_t2_cp2

0xc02e,	// (0x0004486f) grid_highlight_pane_cp3_cp2

0xc5c9,	// (0x00044e0a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc2d4,	// (0x00044b15) main_tmo_pane_ParamLimits

0xabf4,	// (0x00043435) popup_tmo_big_image_note_window

0xbb90,	// (0x000443d1) cell_ai5_widget_list_pane

0xbb98,	// (0x000443d9) cell_ai5_widget_lrg_icon_pane

0xbe2e,	// (0x0004466f) tmo_note_info_pane_t1_ParamLimits

0xbe43,	// (0x00044684) tmo_note_info_pane_t2_ParamLimits

0xbe5c,	// (0x0004469d) tmo_note_info_pane_t3_ParamLimits

0x2f8f,	// (0x0003b7d0) tmo_note_info_pane_t4_ParamLimits

0x2fa1,	// (0x0003b7e2) tmo_note_info_pane_t5_ParamLimits

0xfedb,	// (0x0004871c) tmo_note_info_pane_t_ParamLimits

0x30d7,	// (0x0003b918) settings_container_pane_ParamLimits

0x3335,	// (0x0003bb76) indicator_popup_pane_cp5

0x3335,	// (0x0003bb76) indicator_popup_pane_cp6

0x3365,	// (0x0003bba6) list_set_graphic_pane_copy1_ParamLimits

0x8786,	// (0x00040fc7) bg_popup_window_pane_cp23

0x33de,	// (0x0003bc1f) popup_tmo_big_image_note_window_g1

0x33e9,	// (0x0003bc2a) popup_tmo_big_image_note_window_t1

0x33f9,	// (0x0003bc3a) popup_tmo_big_image_note_window_t2

0x3409,	// (0x0003bc4a) popup_tmo_big_image_note_window_t3

0x0002,

0xfef4,	// (0x00048735) popup_tmo_big_image_note_window_t

0xbe71,	// (0x000446b2) cell_ai5_widget_lrg_icon_pane_g1

0xbe79,	// (0x000446ba) cell_ai5_widget_lrg_icon_pane_t1

0xbe87,	// (0x000446c8) cell_ai5_widget_list_row_pane_ParamLimits

0xbe87,	// (0x000446c8) cell_ai5_widget_list_row_pane

0xbea0,	// (0x000446e1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xbea0,	// (0x000446e1) cell_ai5_widget_list_row_pane_g1

0xbead,	// (0x000446ee) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xbead,	// (0x000446ee) cell_ai5_widget_list_row_pane_t1

0xbec5,	// (0x00044706) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xbec5,	// (0x00044706) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfefb,	// (0x0004873c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfefb,	// (0x0004873c) cell_ai5_widget_list_row_pane_t

0x5bfc,	// (0x0003e43d) main_fep_vtchi_ss_pane

0x3419,	// (0x0003bc5a) popup_fep_char_pre_window

0x3421,	// (0x0003bc62) popup_fep_ituss_window

0x342c,	// (0x0003bc6d) popup_fep_vkbss_window

0x3435,	// (0x0003bc76) grid_vkbss_keypad_pane_ParamLimits

0x3435,	// (0x0003bc76) grid_vkbss_keypad_pane

0x3445,	// (0x0003bc86) ituss_keypad_pane

0x344d,	// (0x0003bc8e) aid_vkbss_key_offset_ParamLimits

0x344d,	// (0x0003bc8e) aid_vkbss_key_offset

0x345c,	// (0x0003bc9d) cell_vkbss_key_pane_ParamLimits

0x345c,	// (0x0003bc9d) cell_vkbss_key_pane

0x3472,	// (0x0003bcb3) bg_cell_vkbss_key_g1_ParamLimits

0x3472,	// (0x0003bcb3) bg_cell_vkbss_key_g1

0x347e,	// (0x0003bcbf) cell_vkbss_key_3p_pane_ParamLimits

0x347e,	// (0x0003bcbf) cell_vkbss_key_3p_pane

0x3498,	// (0x0003bcd9) cell_vkbss_key_g1_ParamLimits

0x3498,	// (0x0003bcd9) cell_vkbss_key_g1

0x34b2,	// (0x0003bcf3) cell_vkbss_key_t1_ParamLimits

0x34b2,	// (0x0003bcf3) cell_vkbss_key_t1

0x34dd,	// (0x0003bd1e) cell_ituss_key_pane_ParamLimits

0x34dd,	// (0x0003bd1e) cell_ituss_key_pane

0x34ec,	// (0x0003bd2d) bg_cell_ituss_key_g1_ParamLimits

0x34ec,	// (0x0003bd2d) bg_cell_ituss_key_g1

0x34f8,	// (0x0003bd39) cell_ituss_key_pane_g1_ParamLimits

0x34f8,	// (0x0003bd39) cell_ituss_key_pane_g1

0x3504,	// (0x0003bd45) cell_ituss_key_pane_g2_ParamLimits

0x3504,	// (0x0003bd45) cell_ituss_key_pane_g2

0x0001,

0xff00,	// (0x00048741) cell_ituss_key_pane_g_ParamLimits

0xff00,	// (0x00048741) cell_ituss_key_pane_g

0x3517,	// (0x0003bd58) cell_ituss_key_t1_ParamLimits

0x3517,	// (0x0003bd58) cell_ituss_key_t1

0x3535,	// (0x0003bd76) cell_ituss_key_t2_ParamLimits

0x3535,	// (0x0003bd76) cell_ituss_key_t2

0x3554,	// (0x0003bd95) cell_ituss_key_t3_ParamLimits

0x3554,	// (0x0003bd95) cell_ituss_key_t3

0x3573,	// (0x0003bdb4) cell_ituss_key_t4_ParamLimits

0x3573,	// (0x0003bdb4) cell_ituss_key_t4

0x0003,

0xff05,	// (0x00048746) cell_ituss_key_t_ParamLimits

0xff05,	// (0x00048746) cell_ituss_key_t

0x3592,	// (0x0003bdd3) cell_vkbss_key_3p_pane_g1

0x359a,	// (0x0003bddb) cell_vkbss_key_3p_pane_g2

0x35a2,	// (0x0003bde3) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0e,	// (0x0004874f) cell_vkbss_key_3p_pane_g

0x8786,	// (0x00040fc7) bg_popup_fep_char_preview_window_cp02

0x35aa,	// (0x0003bdeb) popup_fep_char_pre_window_t1

0xbb86,	// (0x000443c7) main_ai5_sk_pane

0x301b,	// (0x0003b85c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x3027,	// (0x0003b868) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x303b,	// (0x0003b87c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x304a,	// (0x0003b88b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee6,	// (0x00048727) cell_contacts_ai5_widget_pane_g_ParamLimits

0x305d,	// (0x0003b89e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc2d4,	// (0x00044b15) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xbed7,	// (0x00044718) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large

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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0004b974 };

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
0x8e45,	// (0x000547b9) Screen

0x8e59,	// (0x000547cd) application_window_ParamLimits

0x8e59,	// (0x000547cd) application_window

0x8e73,	// (0x000547e7) screen_g1

0x8ea5,	// (0x00054819) area_bottom_pane_ParamLimits

0x8ea5,	// (0x00054819) area_bottom_pane

0x8f70,	// (0x000548e4) area_top_pane_ParamLimits

0x8f70,	// (0x000548e4) area_top_pane

0x9004,	// (0x00054978) main_pane_ParamLimits

0x9004,	// (0x00054978) main_pane

0x90bf,	// (0x00054a33) misc_graphics

0xafa8,	// (0x0005691c) battery_pane_ParamLimits

0xafa8,	// (0x0005691c) battery_pane

0x2a18,	// (0x0004e38c) bg_status_flat_pane_g8

0x2a20,	// (0x0004e394) bg_status_flat_pane_g9

0x06b4,	// (0x0004c028) context_pane_ParamLimits

0x06b4,	// (0x0004c028) context_pane

0xb113,	// (0x00056a87) navi_pane_ParamLimits

0xb113,	// (0x00056a87) navi_pane

0xb191,	// (0x00056b05) signal_pane_ParamLimits

0xb191,	// (0x00056b05) signal_pane

0x0008,

0xf848,	// (0x0005b1bc) bg_status_flat_pane_g

0xb221,	// (0x00056b95) status_pane_g1_ParamLimits

0xb221,	// (0x00056b95) status_pane_g1

0xb237,	// (0x00056bab) status_pane_g2_ParamLimits

0xb237,	// (0x00056bab) status_pane_g2

0x2019,	// (0x0004d98d) status_pane_g3_ParamLimits

0x2019,	// (0x0004d98d) status_pane_g3

0x0004,

0xf774,	// (0x0005b0e8) status_pane_g_ParamLimits

0xf774,	// (0x0005b0e8) status_pane_g

0xb243,	// (0x00056bb7) title_pane_ParamLimits

0xb243,	// (0x00056bb7) title_pane

0xb2a4,	// (0x00056c18) uni_indicator_pane_ParamLimits

0xb2a4,	// (0x00056c18) uni_indicator_pane

0xc618,	// (0x00057f8c) bg_list_pane_ParamLimits

0xc618,	// (0x00057f8c) bg_list_pane

0xa796,	// (0x0005610a) find_pane

0x222d,	// (0x0004dba1) listscroll_app_pane_ParamLimits

0x222d,	// (0x0004dba1) listscroll_app_pane

0xc638,	// (0x00057fac) listscroll_form_pane

0xa79e,	// (0x00056112) listscroll_gen_pane_ParamLimits

0xa79e,	// (0x00056112) listscroll_gen_pane

0xf51f,	// (0x0005ae93) listscroll_set_pane

0x356c,	// (0x0004eee0) main_idle_act_pane

0xc4ac,	// (0x00057e20) main_idle_trad_pane

0xc4ac,	// (0x00057e20) main_list_empty_pane

0x9e84,	// (0x000557f8) main_midp_pane

0xc652,	// (0x00057fc6) main_pane_g1_ParamLimits

0xc652,	// (0x00057fc6) main_pane_g1

0xa7b2,	// (0x00056126) popup_ai_message_window_ParamLimits

0xa7b2,	// (0x00056126) popup_ai_message_window

0xa863,	// (0x000561d7) popup_fep_china_uni_window_ParamLimits

0xa863,	// (0x000561d7) popup_fep_china_uni_window

0xa8bd,	// (0x00056231) popup_fep_japan_candidate_window_ParamLimits

0xa8bd,	// (0x00056231) popup_fep_japan_candidate_window

0xa8db,	// (0x0005624f) popup_fep_japan_predictive_window_ParamLimits

0xa8db,	// (0x0005624f) popup_fep_japan_predictive_window

0xa8ed,	// (0x00056261) popup_find_window

0xa90a,	// (0x0005627e) popup_grid_graphic_window_ParamLimits

0xa90a,	// (0x0005627e) popup_grid_graphic_window

0x0158,	// (0x0004bacc) popup_large_graphic_colour_window

0xa9a8,	// (0x0005631c) popup_menu_window_ParamLimits

0xa9a8,	// (0x0005631c) popup_menu_window

0xab7a,	// (0x000564ee) popup_note_image_window

0xab40,	// (0x000564b4) popup_note_wait_window_ParamLimits

0xab40,	// (0x000564b4) popup_note_wait_window

0xab92,	// (0x00056506) popup_note_window_ParamLimits

0xab92,	// (0x00056506) popup_note_window

0xac41,	// (0x000565b5) popup_query_code_window_ParamLimits

0xac41,	// (0x000565b5) popup_query_code_window

0xac7b,	// (0x000565ef) popup_query_data_code_window_ParamLimits

0xac7b,	// (0x000565ef) popup_query_data_code_window

0xac98,	// (0x0005660c) popup_query_data_window_ParamLimits

0xac98,	// (0x0005660c) popup_query_data_window

0xad1a,	// (0x0005668e) popup_query_sat_info_window_ParamLimits

0xad1a,	// (0x0005668e) popup_query_sat_info_window

0xadb1,	// (0x00056725) popup_snote_single_graphic_window_ParamLimits

0xadb1,	// (0x00056725) popup_snote_single_graphic_window

0xadb1,	// (0x00056725) popup_snote_single_text_window_ParamLimits

0xadb1,	// (0x00056725) popup_snote_single_text_window

0x042b,	// (0x0004bd9f) popup_sub_window_general

0xaf0e,	// (0x00056882) popup_window_general_ParamLimits

0xaf0e,	// (0x00056882) popup_window_general

0x0570,	// (0x0004bee4) power_save_pane

0xa5f0,	// (0x00055f64) control_pane_g1_ParamLimits

0xa5f0,	// (0x00055f64) control_pane_g1

0xa619,	// (0x00055f8d) control_pane_g2_ParamLimits

0xa619,	// (0x00055f8d) control_pane_g2

0xc602,	// (0x00057f76) control_pane_g3_ParamLimits

0xc602,	// (0x00057f76) control_pane_g3

0x0007,

0xf75c,	// (0x0005b0d0) control_pane_g_ParamLimits

0xf75c,	// (0x0005b0d0) control_pane_g

0xa681,	// (0x00055ff5) control_pane_t1_ParamLimits

0xa681,	// (0x00055ff5) control_pane_t1

0xa6e9,	// (0x0005605d) control_pane_t2_ParamLimits

0xa6e9,	// (0x0005605d) control_pane_t2

0x0002,

0xf76d,	// (0x0005b0e1) control_pane_t_ParamLimits

0xf76d,	// (0x0005b0e1) control_pane_t

0xa567,	// (0x00055edb) navi_navi_volume_pane_cp1

0xa56f,	// (0x00055ee3) status_small_icon_pane

0xc5ae,	// (0x00057f22) status_small_pane_g1_ParamLimits

0xc5ae,	// (0x00057f22) status_small_pane_g1

0xa577,	// (0x00055eeb) status_small_pane_g2_ParamLimits

0xa577,	// (0x00055eeb) status_small_pane_g2

0xc5e2,	// (0x00057f56) status_small_pane_g3_ParamLimits

0xc5e2,	// (0x00057f56) status_small_pane_g3

0xa583,	// (0x00055ef7) status_small_pane_g4_ParamLimits

0xa583,	// (0x00055ef7) status_small_pane_g4

0xa591,	// (0x00055f05) status_small_pane_g5_ParamLimits

0xa591,	// (0x00055f05) status_small_pane_g5

0xa59f,	// (0x00055f13) status_small_pane_g6_ParamLimits

0xa59f,	// (0x00055f13) status_small_pane_g6

0x0007,

0xf74b,	// (0x0005b0bf) status_small_pane_g_ParamLimits

0xf74b,	// (0x0005b0bf) status_small_pane_g

0xa5ba,	// (0x00055f2e) status_small_pane_t1

0xa5dc,	// (0x00055f50) status_small_wait_pane_ParamLimits

0xa5dc,	// (0x00055f50) status_small_wait_pane

0xa2da,	// (0x00055c4e) aid_levels_signal_ParamLimits

0xa2da,	// (0x00055c4e) aid_levels_signal

0xa2f2,	// (0x00055c66) signal_pane_g1_ParamLimits

0xa2f2,	// (0x00055c66) signal_pane_g1

0xa30d,	// (0x00055c81) signal_pane_g2_ParamLimits

0xa30d,	// (0x00055c81) signal_pane_g2

0x0003,

0xf6dc,	// (0x0005b050) signal_pane_g_ParamLimits

0xf6dc,	// (0x0005b050) signal_pane_g

0xc0a2,	// (0x00057a16) context_pane_g1

0x9209,	// (0x00054b7d) title_pane_g1

0x924c,	// (0x00054bc0) title_pane_t1

0x92d8,	// (0x00054c4c) title_pane_t2

0x92fe,	// (0x00054c72) title_pane_t3

0x0002,

0xf530,	// (0x0005aea4) title_pane_t

0xb2cc,	// (0x00056c40) aid_levels_battery_ParamLimits

0xb2cc,	// (0x00056c40) aid_levels_battery

0xb2e8,	// (0x00056c5c) battery_pane_g1_ParamLimits

0xb2e8,	// (0x00056c5c) battery_pane_g1

0xb305,	// (0x00056c79) battery_pane_g2_ParamLimits

0xb305,	// (0x00056c79) battery_pane_g2

0x0001,

0xf77f,	// (0x0005b0f3) battery_pane_g_ParamLimits

0xf77f,	// (0x0005b0f3) battery_pane_g

0xc9e5,	// (0x00058359) uni_indicator_pane_g1

0xc9fb,	// (0x0005836f) uni_indicator_pane_g2

0xca11,	// (0x00058385) uni_indicator_pane_g3

0x0005,

0xf8f0,	// (0x0005b264) uni_indicator_pane_g

0xc34b,	// (0x00057cbf) navi_icon_pane_ParamLimits

0xc34b,	// (0x00057cbf) navi_icon_pane

0xc294,	// (0x00057c08) navi_midp_pane

0xc367,	// (0x00057cdb) navi_navi_pane

0xc371,	// (0x00057ce5) navi_text_pane_ParamLimits

0xc371,	// (0x00057ce5) navi_text_pane

0x8e73,	// (0x000547e7) status_small_wait_pane_g1

0x987e,	// (0x000551f2) status_small_wait_pane_g2

0x0001,

0xf8eb,	// (0x0005b25f) status_small_wait_pane_g

0xc93e,	// (0x000582b2) navi_navi_icon_text_pane

0x306b,	// (0x0004e9df) navi_navi_pane_g1_ParamLimits

0x306b,	// (0x0004e9df) navi_navi_pane_g1

0x307d,	// (0x0004e9f1) navi_navi_pane_g2_ParamLimits

0x307d,	// (0x0004e9f1) navi_navi_pane_g2

0x0001,

0xf8b9,	// (0x0005b22d) navi_navi_pane_g_ParamLimits

0xf8b9,	// (0x0005b22d) navi_navi_pane_g

0x308f,	// (0x0004ea03) navi_navi_tabs_pane

0x3098,	// (0x0004ea0c) navi_navi_text_pane

0xc93e,	// (0x000582b2) navi_navi_volume_pane

0x303f,	// (0x0004e9b3) navi_text_pane_t1

0x3033,	// (0x0004e9a7) navi_icon_pane_g1

0x2f86,	// (0x0004e8fa) navi_navi_text_pane_t1

0xb5ee,	// (0x00056f62) navi_navi_volume_pane_g1

0x0b2e,	// (0x0004c4a2) volume_small_pane

0x2eec,	// (0x0004e860) navi_navi_icon_text_pane_g1

0xc896,	// (0x0005820a) navi_navi_icon_text_pane_t1

0xc367,	// (0x00057cdb) navi_tabs_2_long_pane

0xc367,	// (0x00057cdb) navi_tabs_2_pane

0xc367,	// (0x00057cdb) navi_tabs_3_long_pane

0xc367,	// (0x00057cdb) navi_tabs_3_pane

0xc367,	// (0x00057cdb) navi_tabs_4_pane

0x0b06,	// (0x0004c47a) tabs_2_active_pane_ParamLimits

0x0b06,	// (0x0004c47a) tabs_2_active_pane

0x0b16,	// (0x0004c48a) tabs_2_passive_pane_ParamLimits

0x0b16,	// (0x0004c48a) tabs_2_passive_pane

0x0ad4,	// (0x0004c448) tabs_3_active_pane_ParamLimits

0x0ad4,	// (0x0004c448) tabs_3_active_pane

0x0ae4,	// (0x0004c458) tabs_3_passive_pane_ParamLimits

0x0ae4,	// (0x0004c458) tabs_3_passive_pane

0x0af5,	// (0x0004c469) tabs_3_passive_pane_cp_ParamLimits

0x0af5,	// (0x0004c469) tabs_3_passive_pane_cp

0x0a90,	// (0x0004c404) tabs_4_active_pane_ParamLimits

0x0a90,	// (0x0004c404) tabs_4_active_pane

0x0aa1,	// (0x0004c415) tabs_4_passive_pane_ParamLimits

0x0aa1,	// (0x0004c415) tabs_4_passive_pane

0x0ab2,	// (0x0004c426) tabs_4_passive_pane_cp_ParamLimits

0x0ab2,	// (0x0004c426) tabs_4_passive_pane_cp

0x0ac3,	// (0x0004c437) tabs_4_passive_pane_cp2_ParamLimits

0x0ac3,	// (0x0004c437) tabs_4_passive_pane_cp2

0x0a6c,	// (0x0004c3e0) tabs_2_long_active_pane_ParamLimits

0x0a6c,	// (0x0004c3e0) tabs_2_long_active_pane

0x0a7e,	// (0x0004c3f2) tabs_2_long_passive_pane_ParamLimits

0x0a7e,	// (0x0004c3f2) tabs_2_long_passive_pane

0x0a27,	// (0x0004c39b) tabs_3_long_active_pane_ParamLimits

0x0a27,	// (0x0004c39b) tabs_3_long_active_pane

0x0a40,	// (0x0004c3b4) tabs_3_long_passive_pane_ParamLimits

0x0a40,	// (0x0004c3b4) tabs_3_long_passive_pane

0x0a53,	// (0x0004c3c7) tabs_3_long_passive_pane_cp_ParamLimits

0x0a53,	// (0x0004c3c7) tabs_3_long_passive_pane_cp

0x09cd,	// (0x0004c341) volume_small_pane_g1

0x09d6,	// (0x0004c34a) volume_small_pane_g2

0x09df,	// (0x0004c353) volume_small_pane_g3

0x09e8,	// (0x0004c35c) volume_small_pane_g4

0x09f1,	// (0x0004c365) volume_small_pane_g5

0x09fa,	// (0x0004c36e) volume_small_pane_g6

0x0a03,	// (0x0004c377) volume_small_pane_g7

0x0a0c,	// (0x0004c380) volume_small_pane_g8

0x0a15,	// (0x0004c389) volume_small_pane_g9

0x0a1e,	// (0x0004c392) volume_small_pane_g10

0x0009,

0xf885,	// (0x0005b1f9) volume_small_pane_g

0x9310,	// (0x00054c84) bg_active_tab_pane_cp2_ParamLimits

0x9310,	// (0x00054c84) bg_active_tab_pane_cp2

0x931e,	// (0x00054c92) tabs_3_active_pane_g1

0x9326,	// (0x00054c9a) tabs_3_active_pane_t1

0x9310,	// (0x00054c84) bg_passive_tab_pane_cp2_ParamLimits

0x9310,	// (0x00054c84) bg_passive_tab_pane_cp2

0x931e,	// (0x00054c92) tabs_3_passive_pane_g1

0x9326,	// (0x00054c9a) tabs_3_passive_pane_t1

0x9310,	// (0x00054c84) bg_active_tab_pane_cp3_ParamLimits

0x9310,	// (0x00054c84) bg_active_tab_pane_cp3

0x9338,	// (0x00054cac) tabs_4_active_pane_g1

0x9340,	// (0x00054cb4) tabs_4_active_pane_t1

0x9310,	// (0x00054c84) bg_passive_tab_pane_cp3_ParamLimits

0x9310,	// (0x00054c84) bg_passive_tab_pane_cp3

0x9338,	// (0x00054cac) tabs_4_1_passive_pane_g1

0x9340,	// (0x00054cb4) tabs_4_1_passive_pane_t1

0x9e84,	// (0x000557f8) list_highlight_pane_cp2

0xcb17,	// (0x0005848b) list_set_pane_ParamLimits

0xcb17,	// (0x0005848b) list_set_pane

0xcbb1,	// (0x00058525) main_pane_set_t1_ParamLimits

0xcbb1,	// (0x00058525) main_pane_set_t1

0xcbd1,	// (0x00058545) main_pane_set_t2_ParamLimits

0xcbd1,	// (0x00058545) main_pane_set_t2

0xcbe5,	// (0x00058559) main_pane_set_t3_ParamLimits

0xcbe5,	// (0x00058559) main_pane_set_t3

0xcbf7,	// (0x0005856b) main_pane_set_t4_ParamLimits

0xcbf7,	// (0x0005856b) main_pane_set_t4

0x0003,

0xf955,	// (0x0005b2c9) main_pane_set_t_ParamLimits

0xf955,	// (0x0005b2c9) main_pane_set_t

0xcc09,	// (0x0005857d) setting_code_pane

0xcc13,	// (0x00058587) setting_slider_graphic_pane

0xcc13,	// (0x00058587) setting_slider_pane

0xcc13,	// (0x00058587) setting_text_pane

0xcc13,	// (0x00058587) setting_volume_pane

0x9352,	// (0x00054cc6) volume_set_pane

0x935a,	// (0x00054cce) bg_set_opt_pane_cp

0x9368,	// (0x00054cdc) setting_slider_pane_t1

0x9381,	// (0x00054cf5) setting_slider_pane_t2

0x939b,	// (0x00054d0f) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0005aeab) setting_slider_pane_t

0x93b3,	// (0x00054d27) slider_set_pane

0x90bf,	// (0x00054a33) bg_set_opt_pane_cp2

0x93c9,	// (0x00054d3d) setting_slider_graphic_pane_g1

0x93d2,	// (0x00054d46) setting_slider_graphic_pane_t1

0x93e2,	// (0x00054d56) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x0005aeb2) setting_slider_graphic_pane_t

0x93f2,	// (0x00054d66) slider_set_pane_cp

0x90bf,	// (0x00054a33) input_focus_pane_cp1

0x3553,	// (0x0004eec7) list_set_text_pane

0x8e73,	// (0x000547e7) setting_text_pane_g1

0x90bf,	// (0x00054a33) input_focus_pane_cp2

0x8e73,	// (0x000547e7) setting_code_pane_g1

0x93fa,	// (0x00054d6e) setting_code_pane_t1

0xe81c,	// (0x0005a190) set_text_pane_t1_ParamLimits

0xe81c,	// (0x0005a190) set_text_pane_t1

0x9cf8,	// (0x0005566c) set_opt_bg_pane_g1

0x9d00,	// (0x00055674) set_opt_bg_pane_g2

0xcacc,	// (0x00058440) set_opt_bg_pane_g3

0x9d10,	// (0x00055684) set_opt_bg_pane_g4

0x9d18,	// (0x0005568c) set_opt_bg_pane_g5

0x9d20,	// (0x00055694) set_opt_bg_pane_g6

0xcad6,	// (0x0005844a) set_opt_bg_pane_g7

0xcade,	// (0x00058452) set_opt_bg_pane_g8

0xcae8,	// (0x0005845c) set_opt_bg_pane_g9

0x0008,

0xf942,	// (0x0005b2b6) set_opt_bg_pane_g

0xcabf,	// (0x00058433) slider_set_pane_g1

0x0b9b,	// (0x0004c50f) slider_set_pane_g2

0x0006,

0xf933,	// (0x0005b2a7) slider_set_pane_g

0xb5f6,	// (0x00056f6a) volume_set_pane_g1

0xb5fe,	// (0x00056f72) volume_set_pane_g2

0xb606,	// (0x00056f7a) volume_set_pane_g3

0xb60e,	// (0x00056f82) volume_set_pane_g4

0xb616,	// (0x00056f8a) volume_set_pane_g5

0xb61e,	// (0x00056f92) volume_set_pane_g6

0xb626,	// (0x00056f9a) volume_set_pane_g7

0xb62e,	// (0x00056fa2) volume_set_pane_g8

0xb636,	// (0x00056faa) volume_set_pane_g9

0xb63e,	// (0x00056fb2) volume_set_pane_g10

0x0009,

0xf90b,	// (0x0005b27f) volume_set_pane_g

0x9408,	// (0x00054d7c) indicator_pane_ParamLimits

0x9408,	// (0x00054d7c) indicator_pane

0x9430,	// (0x00054da4) main_idle_pane_g2_ParamLimits

0x9430,	// (0x00054da4) main_idle_pane_g2

0x9468,	// (0x00054ddc) main_pane_idle_g1_ParamLimits

0x9468,	// (0x00054ddc) main_pane_idle_g1

0x948f,	// (0x00054e03) popup_clock_digital_analogue_window_ParamLimits

0x948f,	// (0x00054e03) popup_clock_digital_analogue_window

0x94a6,	// (0x00054e1a) soft_indicator_pane_ParamLimits

0x94a6,	// (0x00054e1a) soft_indicator_pane

0x94ca,	// (0x00054e3e) wallpaper_pane_ParamLimits

0x94ca,	// (0x00054e3e) wallpaper_pane

0x8e73,	// (0x000547e7) wallpaper_pane_g1

0x94e4,	// (0x00054e58) indicator_pane_g1_ParamLimits

0x94e4,	// (0x00054e58) indicator_pane_g1

0x390f,	// (0x0004f283) navi_navi_icon_text_pane_srt_g1

0x9509,	// (0x00054e7d) soft_indicator_pane_t1

0x9523,	// (0x00054e97) aid_ps_area_pane

0x9534,	// (0x00054ea8) aid_ps_clock_pane

0x9542,	// (0x00054eb6) aid_ps_indicator_pane

0x954e,	// (0x00054ec2) indicator_ps_pane_ParamLimits

0x954e,	// (0x00054ec2) indicator_ps_pane

0x955d,	// (0x00054ed1) power_save_pane_g1_ParamLimits

0x955d,	// (0x00054ed1) power_save_pane_g1

0x9569,	// (0x00054edd) power_save_pane_g2_ParamLimits

0x9569,	// (0x00054edd) power_save_pane_g2

0xe7dc,	// (0x0005a150) aid_navinavi_width_pane

0x9523,	// (0x00054e97) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0005aeb7) power_save_pane_g_ParamLimits

0xf543,	// (0x0005aeb7) power_save_pane_g

0x9577,	// (0x00054eeb) power_save_pane_t1_ParamLimits

0x9577,	// (0x00054eeb) power_save_pane_t1

0x9534,	// (0x00054ea8) aid_ps_clock_pane_ParamLimits

0x9542,	// (0x00054eb6) aid_ps_indicator_pane_ParamLimits

0x9589,	// (0x00054efd) power_save_pane_t4_ParamLimits

0x9589,	// (0x00054efd) power_save_pane_t4

0x0001,

0xf548,	// (0x0005aebc) power_save_pane_t_ParamLimits

0xf548,	// (0x0005aebc) power_save_pane_t

0x95b3,	// (0x00054f27) power_save_t3_ParamLimits

0x95b3,	// (0x00054f27) power_save_t3

0x959e,	// (0x00054f12) power_save_t2_ParamLimits

0x959e,	// (0x00054f12) power_save_t2

0x95c8,	// (0x00054f3c) indicator_ps_pane_g1

0x95d1,	// (0x00054f45) ai_gene_pane_ParamLimits

0x95d1,	// (0x00054f45) ai_gene_pane

0x95e8,	// (0x00054f5c) ai_links_pane_ParamLimits

0x95e8,	// (0x00054f5c) ai_links_pane

0x9600,	// (0x00054f74) indicator_pane_cp1_ParamLimits

0x9600,	// (0x00054f74) indicator_pane_cp1

0x960f,	// (0x00054f83) main_pane_idle_g1_cp_ParamLimits

0x960f,	// (0x00054f83) main_pane_idle_g1_cp

0x9627,	// (0x00054f9b) popup_ai_links_title_window

0x9630,	// (0x00054fa4) soft_indicator_pane_cp1_ParamLimits

0x9630,	// (0x00054fa4) soft_indicator_pane_cp1

0x332a,	// (0x0004ec9e) ai_links_pane_g1

0x3333,	// (0x0004eca7) grid_ai_links_pane

0xc9dc,	// (0x00058350) ai_gene_pane_1

0x3318,	// (0x0004ec8c) ai_gene_pane_2

0x3321,	// (0x0004ec95) list_highlight_pane_cp4

0xc9b8,	// (0x0005832c) cell_ai_link_pane_ParamLimits

0xc9b8,	// (0x0005832c) cell_ai_link_pane

0x32e9,	// (0x0004ec5d) cell_ai_link_pane_g1

0x987e,	// (0x000551f2) cell_ai_link_pane_g2

0x0001,

0xf8e6,	// (0x0005b25a) cell_ai_link_pane_g

0x90bf,	// (0x00054a33) grid_highlight_cp2

0x90bf,	// (0x00054a33) bg_popup_sub_pane_cp1

0x9652,	// (0x00054fc6) popup_ai_links_title_window_t1

0x3239,	// (0x0004ebad) ai_gene_pane_1_g1_ParamLimits

0x3239,	// (0x0004ebad) ai_gene_pane_1_g1

0x3245,	// (0x0004ebb9) ai_gene_pane_1_g2_ParamLimits

0x3245,	// (0x0004ebb9) ai_gene_pane_1_g2

0x0001,

0xf8dc,	// (0x0005b250) ai_gene_pane_1_g_ParamLimits

0xf8dc,	// (0x0005b250) ai_gene_pane_1_g

0x3252,	// (0x0004ebc6) ai_gene_pane_1_t1_ParamLimits

0x3252,	// (0x0004ebc6) ai_gene_pane_1_t1

0x3286,	// (0x0004ebfa) grid_ai_soft_ind_pane

0x3224,	// (0x0004eb98) ai_gene_pane_2_t1_ParamLimits

0x3224,	// (0x0004eb98) ai_gene_pane_2_t1

0x9661,	// (0x00054fd5) main_pane_empty_t1_ParamLimits

0x9661,	// (0x00054fd5) main_pane_empty_t1

0x9679,	// (0x00054fed) main_pane_empty_t2_ParamLimits

0x9679,	// (0x00054fed) main_pane_empty_t2

0x968e,	// (0x00055002) main_pane_empty_t3_ParamLimits

0x968e,	// (0x00055002) main_pane_empty_t3

0x96a0,	// (0x00055014) main_pane_empty_t4_ParamLimits

0x96a0,	// (0x00055014) main_pane_empty_t4

0x96b2,	// (0x00055026) main_pane_empty_t5_ParamLimits

0x96b2,	// (0x00055026) main_pane_empty_t5

0x0004,

0xf54d,	// (0x0005aec1) main_pane_empty_t_ParamLimits

0xf54d,	// (0x0005aec1) main_pane_empty_t

0x9dbb,	// (0x0005572f) bg_popup_window_pane_ParamLimits

0x9dbb,	// (0x0005572f) bg_popup_window_pane

0xc932,	// (0x000582a6) find_popup_pane_cp2_ParamLimits

0xc932,	// (0x000582a6) find_popup_pane_cp2

0x2fa0,	// (0x0004e914) heading_pane_ParamLimits

0x2fa0,	// (0x0004e914) heading_pane

0x90bf,	// (0x00054a33) bg_popup_sub_pane

0xc8b3,	// (0x00058227) bg_popup_window_pane_g1_ParamLimits

0xc8b3,	// (0x00058227) bg_popup_window_pane_g1

0xc8c2,	// (0x00058236) bg_popup_window_pane_g2_ParamLimits

0xc8c2,	// (0x00058236) bg_popup_window_pane_g2

0xc8ce,	// (0x00058242) bg_popup_window_pane_g3_ParamLimits

0xc8ce,	// (0x00058242) bg_popup_window_pane_g3

0xc8da,	// (0x0005824e) bg_popup_window_pane_g4_ParamLimits

0xc8da,	// (0x0005824e) bg_popup_window_pane_g4

0xc8e9,	// (0x0005825d) bg_popup_window_pane_g5_ParamLimits

0xc8e9,	// (0x0005825d) bg_popup_window_pane_g5

0xc8f9,	// (0x0005826d) bg_popup_window_pane_g6_ParamLimits

0xc8f9,	// (0x0005826d) bg_popup_window_pane_g6

0xc905,	// (0x00058279) bg_popup_window_pane_g7_ParamLimits

0xc905,	// (0x00058279) bg_popup_window_pane_g7

0xc914,	// (0x00058288) bg_popup_window_pane_g8_ParamLimits

0xc914,	// (0x00058288) bg_popup_window_pane_g8

0xc923,	// (0x00058297) bg_popup_window_pane_g9_ParamLimits

0xc923,	// (0x00058297) bg_popup_window_pane_g9

0x2f7a,	// (0x0004e8ee) bg_popup_window_pane_g10_ParamLimits

0x2f7a,	// (0x0004e8ee) bg_popup_window_pane_g10

0x0009,

0xf8a4,	// (0x0005b218) bg_popup_window_pane_g_ParamLimits

0xf8a4,	// (0x0005b218) bg_popup_window_pane_g

0x2ea3,	// (0x0004e817) bg_popup_heading_pane_ParamLimits

0x2ea3,	// (0x0004e817) bg_popup_heading_pane

0x0cce,	// (0x0004c642) tabs_4_passive_pane_cp_srt_ParamLimits

0x0cce,	// (0x0004c642) tabs_4_passive_pane_cp_srt

0x0ce0,	// (0x0004c654) tabs_4_passive_pane_srt_ParamLimits

0x2eb7,	// (0x0004e82b) heading_pane_g2

0x0ce0,	// (0x0004c654) tabs_4_passive_pane_srt

0x222d,	// (0x0004dba1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x222d,	// (0x0004dba1) bg_passive_tab_pane_cp3_srt

0x2ebf,	// (0x0004e833) heading_pane_t1_ParamLimits

0x2ebf,	// (0x0004e833) heading_pane_t1

0x2ed6,	// (0x0004e84a) heading_pane_t2_ParamLimits

0x2ed6,	// (0x0004e84a) heading_pane_t2

0x0001,

0xf89f,	// (0x0005b213) heading_pane_t_ParamLimits

0xf89f,	// (0x0005b213) heading_pane_t

0x29e0,	// (0x0004e354) bg_popup_heading_pane_g1

0x2a8f,	// (0x0004e403) bg_popup_heading_pane_g2

0x2a99,	// (0x0004e40d) bg_popup_heading_pane_g3

0x2aa3,	// (0x0004e417) bg_popup_heading_pane_g4

0x2aad,	// (0x0004e421) bg_popup_heading_pane_g5

0x2ab7,	// (0x0004e42b) bg_popup_heading_pane_g6

0x2abf,	// (0x0004e433) bg_popup_heading_pane_g7

0x2ac7,	// (0x0004e43b) bg_popup_heading_pane_g8

0x2ad1,	// (0x0004e445) bg_popup_heading_pane_g9

0x0008,

0xf85b,	// (0x0005b1cf) bg_popup_heading_pane_g

0x21a1,	// (0x0004db15) bg_popup_sub_pane_g1

0x21a9,	// (0x0004db1d) bg_popup_sub_pane_g2

0x21b1,	// (0x0004db25) bg_popup_sub_pane_g3

0x21b9,	// (0x0004db2d) bg_popup_sub_pane_g4

0x21c1,	// (0x0004db35) bg_popup_sub_pane_g5

0x21c9,	// (0x0004db3d) bg_popup_sub_pane_g6

0x21d1,	// (0x0004db45) bg_popup_sub_pane_g7

0x21d9,	// (0x0004db4d) bg_popup_sub_pane_g8

0x21e1,	// (0x0004db55) bg_popup_sub_pane_g9

0x0008,

0xf835,	// (0x0005b1a9) bg_popup_sub_pane_g

0x9310,	// (0x00054c84) bg_popup_window_pane_cp5_ParamLimits

0x9310,	// (0x00054c84) bg_popup_window_pane_cp5

0x96d2,	// (0x00055046) popup_note_window_g1_ParamLimits

0x96d2,	// (0x00055046) popup_note_window_g1

0x96de,	// (0x00055052) popup_note_window_t1_ParamLimits

0x96de,	// (0x00055052) popup_note_window_t1

0x96f4,	// (0x00055068) popup_note_window_t2_ParamLimits

0x96f4,	// (0x00055068) popup_note_window_t2

0x970a,	// (0x0005507e) popup_note_window_t3_ParamLimits

0x970a,	// (0x0005507e) popup_note_window_t3

0x9720,	// (0x00055094) popup_note_window_t4_ParamLimits

0x9720,	// (0x00055094) popup_note_window_t4

0x9748,	// (0x000550bc) popup_note_window_t5_ParamLimits

0x9748,	// (0x000550bc) popup_note_window_t5

0x0004,

0xf558,	// (0x0005aecc) popup_note_window_t_ParamLimits

0xf558,	// (0x0005aecc) popup_note_window_t

0x9792,	// (0x00055106) bg_popup_window_pane_cp6_ParamLimits

0x9792,	// (0x00055106) bg_popup_window_pane_cp6

0x295c,	// (0x0004e2d0) popup_note_image_window_g1_ParamLimits

0x295c,	// (0x0004e2d0) popup_note_image_window_g1

0xc758,	// (0x000580cc) popup_note_image_window_g2_ParamLimits

0xc758,	// (0x000580cc) popup_note_image_window_g2

0x0001,

0xf829,	// (0x0005b19d) popup_note_image_window_g_ParamLimits

0xf829,	// (0x0005b19d) popup_note_image_window_g

0x2981,	// (0x0004e2f5) popup_note_image_window_t1_ParamLimits

0x2981,	// (0x0004e2f5) popup_note_image_window_t1

0x299a,	// (0x0004e30e) popup_note_image_window_t2_ParamLimits

0x299a,	// (0x0004e30e) popup_note_image_window_t2

0x29b3,	// (0x0004e327) popup_note_image_window_t3_ParamLimits

0x29b3,	// (0x0004e327) popup_note_image_window_t3

0x0002,

0xf82e,	// (0x0005b1a2) popup_note_image_window_t_ParamLimits

0xf82e,	// (0x0005b1a2) popup_note_image_window_t

0x2825,	// (0x0004e199) bg_popup_window_pane_cp7_ParamLimits

0x2825,	// (0x0004e199) bg_popup_window_pane_cp7

0x2855,	// (0x0004e1c9) popup_note_wait_window_g1_ParamLimits

0x2855,	// (0x0004e1c9) popup_note_wait_window_g1

0x2861,	// (0x0004e1d5) popup_note_wait_window_g2_ParamLimits

0x2861,	// (0x0004e1d5) popup_note_wait_window_g2

0x0002,

0xf817,	// (0x0005b18b) popup_note_wait_window_g_ParamLimits

0xf817,	// (0x0005b18b) popup_note_wait_window_g

0x2879,	// (0x0004e1ed) popup_note_wait_window_t1_ParamLimits

0x2879,	// (0x0004e1ed) popup_note_wait_window_t1

0xc6f9,	// (0x0005806d) popup_note_wait_window_t2_ParamLimits

0xc6f9,	// (0x0005806d) popup_note_wait_window_t2

0xc716,	// (0x0005808a) popup_note_wait_window_t3_ParamLimits

0xc716,	// (0x0005808a) popup_note_wait_window_t3

0xc729,	// (0x0005809d) popup_note_wait_window_t4_ParamLimits

0xc729,	// (0x0005809d) popup_note_wait_window_t4

0x0004,

0xf81e,	// (0x0005b192) popup_note_wait_window_t_ParamLimits

0xf81e,	// (0x0005b192) popup_note_wait_window_t

0x28f5,	// (0x0004e269) wait_bar_pane_ParamLimits

0x28f5,	// (0x0004e269) wait_bar_pane

0x90bf,	// (0x00054a33) wait_anim_pane

0x90bf,	// (0x00054a33) wait_border_pane

0x8e73,	// (0x000547e7) wait_anim_pane_g1

0x8e73,	// (0x000547e7) wait_anim_pane_g2

0x0001,

0xf6d7,	// (0x0005b04b) wait_anim_pane_g

0x27d1,	// (0x0004e145) wait_border_pane_g1

0x27dc,	// (0x0004e150) wait_border_pane_g2

0x27e5,	// (0x0004e159) wait_border_pane_g3

0x0002,

0xf810,	// (0x0005b184) wait_border_pane_g

0x263c,	// (0x0004dfb0) bg_popup_window_pane_cp16_ParamLimits

0x263c,	// (0x0004dfb0) bg_popup_window_pane_cp16

0xc6a9,	// (0x0005801d) indicator_popup_pane_cp4_ParamLimits

0xc6a9,	// (0x0005801d) indicator_popup_pane_cp4

0x2750,	// (0x0004e0c4) popup_query_data_window_t1_ParamLimits

0x2750,	// (0x0004e0c4) popup_query_data_window_t1

0x2762,	// (0x0004e0d6) popup_query_data_window_t2_ParamLimits

0x2762,	// (0x0004e0d6) popup_query_data_window_t2

0x277b,	// (0x0004e0ef) popup_query_data_window_t3_ParamLimits

0x277b,	// (0x0004e0ef) popup_query_data_window_t3

0x0002,

0xf809,	// (0x0005b17d) popup_query_data_window_t_ParamLimits

0xf809,	// (0x0005b17d) popup_query_data_window_t

0xc6bd,	// (0x00058031) query_popup_data_pane_ParamLimits

0xc6bd,	// (0x00058031) query_popup_data_pane

0xc6d1,	// (0x00058045) query_popup_data_pane_cp1_ParamLimits

0xc6d1,	// (0x00058045) query_popup_data_pane_cp1

0x263c,	// (0x0004dfb0) bg_popup_window_pane_cp10_ParamLimits

0x263c,	// (0x0004dfb0) bg_popup_window_pane_cp10

0xb5b2,	// (0x00056f26) indicator_popup_pane_ParamLimits

0xb5b2,	// (0x00056f26) indicator_popup_pane

0xb5d4,	// (0x00056f48) popup_query_code_window_t1_ParamLimits

0xb5d4,	// (0x00056f48) popup_query_code_window_t1

0xc660,	// (0x00057fd4) popup_query_code_window_t2_ParamLimits

0xc660,	// (0x00057fd4) popup_query_code_window_t2

0x26f3,	// (0x0004e067) popup_query_code_window_t3_ParamLimits

0x26f3,	// (0x0004e067) popup_query_code_window_t3

0x0002,

0xf802,	// (0x0005b176) popup_query_code_window_t_ParamLimits

0xf802,	// (0x0005b176) popup_query_code_window_t

0x2722,	// (0x0004e096) query_popup_pane_ParamLimits

0x2722,	// (0x0004e096) query_popup_pane

0x9792,	// (0x00055106) bg_popup_window_pane_cp15_ParamLimits

0x9792,	// (0x00055106) bg_popup_window_pane_cp15

0x97b0,	// (0x00055124) indicator_popup_pane_cp1_ParamLimits

0x97b0,	// (0x00055124) indicator_popup_pane_cp1

0x97c3,	// (0x00055137) indicator_popup_pane_cp2_ParamLimits

0x97c3,	// (0x00055137) indicator_popup_pane_cp2

0x97d6,	// (0x0005514a) popup_query_data_code_window_g1_ParamLimits

0x97d6,	// (0x0005514a) popup_query_data_code_window_g1

0x97e9,	// (0x0005515d) popup_query_data_code_window_t1_ParamLimits

0x97e9,	// (0x0005515d) popup_query_data_code_window_t1

0x97fb,	// (0x0005516f) popup_query_data_code_window_t2_ParamLimits

0x97fb,	// (0x0005516f) popup_query_data_code_window_t2

0x980d,	// (0x00055181) popup_query_data_code_window_t3_ParamLimits

0x980d,	// (0x00055181) popup_query_data_code_window_t3

0x9823,	// (0x00055197) popup_query_data_code_window_t4_ParamLimits

0x9823,	// (0x00055197) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0005aed7) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0005aed7) popup_query_data_code_window_t

0xc309,	// (0x00057c7d) list_single_midp_graphic_pane_g3

0x983b,	// (0x000551af) query_popup_data_pane_cp2_ParamLimits

0x984e,	// (0x000551c2) query_popup_pane_cp2_ParamLimits

0x984e,	// (0x000551c2) query_popup_pane_cp2

0x90bf,	// (0x00054a33) bg_popup_window_pane_cp11

0x2620,	// (0x0004df94) heading_pane_cp5

0x2628,	// (0x0004df9c) listscroll_popup_info_pane

0x90bf,	// (0x00054a33) input_focus_pane_cp3

0x9861,	// (0x000551d5) query_popup_pane_t1

0x986f,	// (0x000551e3) list_popup_info_pane_ParamLimits

0x986f,	// (0x000551e3) list_popup_info_pane

0x987e,	// (0x000551f2) listscroll_popup_info_pane_g1

0x9886,	// (0x000551fa) scroll_pane_cp7

0x9890,	// (0x00055204) popup_info_list_pane_t1_ParamLimits

0x9890,	// (0x00055204) popup_info_list_pane_t1

0x98aa,	// (0x0005521e) popup_info_list_pane_t2_ParamLimits

0x98aa,	// (0x0005521e) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x0005aee0) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x0005aee0) popup_info_list_pane_t

0x90bf,	// (0x00054a33) bg_popup_window_pane_cp12

0xcdbc,	// (0x00058730) find_popup_pane

0x935a,	// (0x00054cce) bg_popup_window_pane_cp3

0x98c4,	// (0x00055238) heading_pane_cp3

0x98d3,	// (0x00055247) listscroll_popup_graphic_pane

0x90bf,	// (0x00054a33) bg_popup_window_pane_cp4

0x9933,	// (0x000552a7) heading_pane_cp4

0x993d,	// (0x000552b1) listscroll_popup_colour_pane

0x9945,	// (0x000552b9) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9945,	// (0x000552b9) cell_large_graphic_colour_none_popup_pane

0x9959,	// (0x000552cd) grid_large_graphic_colour_popup_pane_ParamLimits

0x9959,	// (0x000552cd) grid_large_graphic_colour_popup_pane

0x997d,	// (0x000552f1) listscroll_popup_colour_pane_g1_ParamLimits

0x997d,	// (0x000552f1) listscroll_popup_colour_pane_g1

0x9994,	// (0x00055308) listscroll_popup_colour_pane_g2_ParamLimits

0x9994,	// (0x00055308) listscroll_popup_colour_pane_g2

0x99a8,	// (0x0005531c) listscroll_popup_colour_pane_g3_ParamLimits

0x99a8,	// (0x0005531c) listscroll_popup_colour_pane_g3

0x99b8,	// (0x0005532c) listscroll_popup_colour_pane_g4_ParamLimits

0x99b8,	// (0x0005532c) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x0005aee5) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x0005aee5) listscroll_popup_colour_pane_g

0x99c8,	// (0x0005533c) scroll_pane_cp6_ParamLimits

0x99c8,	// (0x0005533c) scroll_pane_cp6

0x99da,	// (0x0005534e) cell_large_graphic_colour_popup_pane_ParamLimits

0x99da,	// (0x0005534e) cell_large_graphic_colour_popup_pane

0x99f9,	// (0x0005536d) cell_large_graphic_colour_none_popup_pane_t1

0x90bf,	// (0x00054a33) grid_highlight_pane_cp5

0x9a08,	// (0x0005537c) cell_large_graphic_colour_popup_pane_g1

0x9a10,	// (0x00055384) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x0005aeee) cell_large_graphic_colour_popup_pane_g

0x9a18,	// (0x0005538c) cell_large_graphic_colour_popup_pane_g2_copy1

0x9a21,	// (0x00055395) grid_highlight_pane_cp4

0x9a29,	// (0x0005539d) bg_popup_window_pane_cp8_ParamLimits

0x9a29,	// (0x0005539d) bg_popup_window_pane_cp8

0x9a44,	// (0x000553b8) popup_snote_single_text_window_g1_ParamLimits

0x9a44,	// (0x000553b8) popup_snote_single_text_window_g1

0x9a56,	// (0x000553ca) popup_snote_single_text_window_t1_ParamLimits

0x9a56,	// (0x000553ca) popup_snote_single_text_window_t1

0x9a69,	// (0x000553dd) popup_snote_single_text_window_t2_ParamLimits

0x9a69,	// (0x000553dd) popup_snote_single_text_window_t2

0x9a7c,	// (0x000553f0) popup_snote_single_text_window_t3_ParamLimits

0x9a7c,	// (0x000553f0) popup_snote_single_text_window_t3

0x9ab5,	// (0x00055429) popup_snote_single_text_window_t4_ParamLimits

0x9ab5,	// (0x00055429) popup_snote_single_text_window_t4

0x9ae9,	// (0x0005545d) popup_snote_single_text_window_t5_ParamLimits

0x9ae9,	// (0x0005545d) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x0005aef3) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x0005aef3) popup_snote_single_text_window_t

0x9b18,	// (0x0005548c) bg_popup_window_pane_cp9_ParamLimits

0x9b18,	// (0x0005548c) bg_popup_window_pane_cp9

0x9a44,	// (0x000553b8) popup_snote_single_graphic_window_g1_ParamLimits

0x9a44,	// (0x000553b8) popup_snote_single_graphic_window_g1

0x9b26,	// (0x0005549a) popup_snote_single_graphic_window_g2_ParamLimits

0x9b26,	// (0x0005549a) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x0005aefe) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x0005aefe) popup_snote_single_graphic_window_g

0x9b32,	// (0x000554a6) popup_snote_single_graphic_window_t1_ParamLimits

0x9b32,	// (0x000554a6) popup_snote_single_graphic_window_t1

0x9b45,	// (0x000554b9) popup_snote_single_graphic_window_t2_ParamLimits

0x9b45,	// (0x000554b9) popup_snote_single_graphic_window_t2

0x9a7c,	// (0x000553f0) popup_snote_single_graphic_window_t3_ParamLimits

0x9a7c,	// (0x000553f0) popup_snote_single_graphic_window_t3

0x9ab5,	// (0x00055429) popup_snote_single_graphic_window_t4_ParamLimits

0x9ab5,	// (0x00055429) popup_snote_single_graphic_window_t4

0x9b58,	// (0x000554cc) popup_snote_single_graphic_window_t5_ParamLimits

0x9b58,	// (0x000554cc) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x0005af03) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x0005af03) popup_snote_single_graphic_window_t

0x386b,	// (0x0004f1df) grid_graphic_popup_pane_ParamLimits

0x386b,	// (0x0004f1df) grid_graphic_popup_pane

0x3895,	// (0x0004f209) listscroll_popup_graphic_pane_g1_ParamLimits

0x3895,	// (0x0004f209) listscroll_popup_graphic_pane_g1

0xcd5a,	// (0x000586ce) listscroll_popup_graphic_pane_g2_ParamLimits

0xcd5a,	// (0x000586ce) listscroll_popup_graphic_pane_g2

0x0001,

0xf97f,	// (0x0005b2f3) listscroll_popup_graphic_pane_g_ParamLimits

0xf97f,	// (0x0005b2f3) listscroll_popup_graphic_pane_g

0x38bd,	// (0x0004f231) scroll_pane_cp5

0xcd15,	// (0x00058689) cell_graphic_popup_pane_ParamLimits

0xcd15,	// (0x00058689) cell_graphic_popup_pane

0x37db,	// (0x0004f14f) cell_graphic_popup_pane_g1

0x37e3,	// (0x0004f157) cell_graphic_popup_pane_g2

0x9a18,	// (0x0005538c) cell_graphic_popup_pane_g3

0x0002,

0xf978,	// (0x0005b2ec) cell_graphic_popup_pane_g

0x37ec,	// (0x0004f160) cell_graphic_popup_pane_t2

0x9a21,	// (0x00055395) grid_highlight_pane_cp3

0x9b99,	// (0x0005550d) list_gen_pane_ParamLimits

0x9b99,	// (0x0005550d) list_gen_pane

0x9bcb,	// (0x0005553f) scroll_pane

0xcc7f,	// (0x000585f3) bg_list_pane_g1_ParamLimits

0xcc7f,	// (0x000585f3) bg_list_pane_g1

0xcc9a,	// (0x0005860e) bg_list_pane_g2_ParamLimits

0xcc9a,	// (0x0005860e) bg_list_pane_g2

0xccad,	// (0x00058621) bg_list_pane_g3_ParamLimits

0xccad,	// (0x00058621) bg_list_pane_g3

0xccbf,	// (0x00058633) bg_list_pane_g4_ParamLimits

0xccbf,	// (0x00058633) bg_list_pane_g4

0xccd1,	// (0x00058645) bg_list_pane_g5_ParamLimits

0xccd1,	// (0x00058645) bg_list_pane_g5

0x0004,

0xf96d,	// (0x0005b2e1) bg_list_pane_g_ParamLimits

0xf96d,	// (0x0005b2e1) bg_list_pane_g

0xb6b2,	// (0x00057026) list_double2_graphic_large_graphic_pane_ParamLimits

0xb6b2,	// (0x00057026) list_double2_graphic_large_graphic_pane

0xb6b2,	// (0x00057026) list_double2_graphic_pane_ParamLimits

0xb6b2,	// (0x00057026) list_double2_graphic_pane

0xb6b2,	// (0x00057026) list_double2_large_graphic_pane_ParamLimits

0xb6b2,	// (0x00057026) list_double2_large_graphic_pane

0xb6b2,	// (0x00057026) list_double2_pane_ParamLimits

0xb6b2,	// (0x00057026) list_double2_pane

0xb6b2,	// (0x00057026) list_double_graphic_heading_pane_ParamLimits

0xb6b2,	// (0x00057026) list_double_graphic_heading_pane

0xb6b2,	// (0x00057026) list_double_graphic_pane_ParamLimits

0xb6b2,	// (0x00057026) list_double_graphic_pane

0xb6b2,	// (0x00057026) list_double_heading_pane_ParamLimits

0xb6b2,	// (0x00057026) list_double_heading_pane

0xb6b2,	// (0x00057026) list_double_large_graphic_pane_ParamLimits

0xb6b2,	// (0x00057026) list_double_large_graphic_pane

0xb6b2,	// (0x00057026) list_double_number_pane_ParamLimits

0xb6b2,	// (0x00057026) list_double_number_pane

0xb6b2,	// (0x00057026) list_double_pane_ParamLimits

0xb6b2,	// (0x00057026) list_double_pane

0xb6b2,	// (0x00057026) list_double_time_pane_ParamLimits

0xb6b2,	// (0x00057026) list_double_time_pane

0xb6b2,	// (0x00057026) list_setting_number_pane_ParamLimits

0xb6b2,	// (0x00057026) list_setting_number_pane

0xb6b2,	// (0x00057026) list_setting_pane_ParamLimits

0xb6b2,	// (0x00057026) list_setting_pane

0x9e26,	// (0x0005579a) list_single_2graphic_pane_ParamLimits

0x9e26,	// (0x0005579a) list_single_2graphic_pane

0x9e26,	// (0x0005579a) list_single_graphic_heading_pane_ParamLimits

0x9e26,	// (0x0005579a) list_single_graphic_heading_pane

0x9e26,	// (0x0005579a) list_single_graphic_pane_ParamLimits

0x9e26,	// (0x0005579a) list_single_graphic_pane

0x9e26,	// (0x0005579a) list_single_heading_pane_ParamLimits

0x9e26,	// (0x0005579a) list_single_heading_pane

0xcc6c,	// (0x000585e0) list_single_large_graphic_pane_ParamLimits

0xcc6c,	// (0x000585e0) list_single_large_graphic_pane

0x9e26,	// (0x0005579a) list_single_number_heading_pane_ParamLimits

0x9e26,	// (0x0005579a) list_single_number_heading_pane

0x9e26,	// (0x0005579a) list_single_number_pane_ParamLimits

0x9e26,	// (0x0005579a) list_single_number_pane

0x9e26,	// (0x0005579a) list_single_pane_ParamLimits

0x9e26,	// (0x0005579a) list_single_pane

0x90bf,	// (0x00054a33) list_highlight_pane_cp1

0xbf9d,	// (0x00057911) list_single_pane_g1_ParamLimits

0xbf9d,	// (0x00057911) list_single_pane_g1

0x08c1,	// (0x0004c235) list_single_pane_g2_ParamLimits

0x08c1,	// (0x0004c235) list_single_pane_g2

0x0001,

0xf5ab,	// (0x0005af1f) list_single_pane_g_ParamLimits

0xf5ab,	// (0x0005af1f) list_single_pane_g

0x8674,	// (0x00053fe8) list_single_pane_t1_ParamLimits

0x8674,	// (0x00053fe8) list_single_pane_t1

0xbf9d,	// (0x00057911) list_single_number_pane_g1_ParamLimits

0xbf9d,	// (0x00057911) list_single_number_pane_g1

0x08c1,	// (0x0004c235) list_single_number_pane_g2_ParamLimits

0x08c1,	// (0x0004c235) list_single_number_pane_g2

0x0001,

0xf5ab,	// (0x0005af1f) list_single_number_pane_g_ParamLimits

0xf5ab,	// (0x0005af1f) list_single_number_pane_g

0x8674,	// (0x00053fe8) list_single_number_pane_t1_ParamLimits

0x8674,	// (0x00053fe8) list_single_number_pane_t1

0x8c78,	// (0x000545ec) list_single_number_pane_t2_ParamLimits

0x8c78,	// (0x000545ec) list_single_number_pane_t2

0x0001,

0xf92e,	// (0x0005b2a2) list_single_number_pane_t_ParamLimits

0xf92e,	// (0x0005b2a2) list_single_number_pane_t

0x8668,	// (0x00053fdc) list_single_graphic_pane_g1_ParamLimits

0x8668,	// (0x00053fdc) list_single_graphic_pane_g1

0xbf9d,	// (0x00057911) list_single_graphic_pane_g2_ParamLimits

0xbf9d,	// (0x00057911) list_single_graphic_pane_g2

0x08c1,	// (0x0004c235) list_single_graphic_pane_g3_ParamLimits

0x08c1,	// (0x0004c235) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x0005af0e) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x0005af0e) list_single_graphic_pane_g

0x8674,	// (0x00053fe8) list_single_graphic_pane_t1_ParamLimits

0x8674,	// (0x00053fe8) list_single_graphic_pane_t1

0x868a,	// (0x00053ffe) list_single_heading_pane_g1_ParamLimits

0x868a,	// (0x00053ffe) list_single_heading_pane_g1

0x08c1,	// (0x0004c235) list_single_heading_pane_g2_ParamLimits

0x08c1,	// (0x0004c235) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x0005af15) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x0005af15) list_single_heading_pane_g

0x869d,	// (0x00054011) list_single_heading_pane_t1_ParamLimits

0x869d,	// (0x00054011) list_single_heading_pane_t1

0x9bff,	// (0x00055573) list_single_heading_pane_t2_ParamLimits

0x9bff,	// (0x00055573) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0005af1a) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0005af1a) list_single_heading_pane_t

0xbf9d,	// (0x00057911) list_single_number_heading_pane_g1_ParamLimits

0xbf9d,	// (0x00057911) list_single_number_heading_pane_g1

0x08c1,	// (0x0004c235) list_single_number_heading_pane_g2_ParamLimits

0x08c1,	// (0x0004c235) list_single_number_heading_pane_g2

0x0001,

0xf5ab,	// (0x0005af1f) list_single_number_heading_pane_g_ParamLimits

0xf5ab,	// (0x0005af1f) list_single_number_heading_pane_g

0xe835,	// (0x0005a1a9) list_single_number_heading_pane_t1_ParamLimits

0xe835,	// (0x0005a1a9) list_single_number_heading_pane_t1

0x86b3,	// (0x00054027) list_single_number_heading_pane_t2_ParamLimits

0x86b3,	// (0x00054027) list_single_number_heading_pane_t2

0x86c5,	// (0x00054039) list_single_number_heading_pane_t3_ParamLimits

0x86c5,	// (0x00054039) list_single_number_heading_pane_t3

0x0002,

0xf5b0,	// (0x0005af24) list_single_number_heading_pane_t_ParamLimits

0xf5b0,	// (0x0005af24) list_single_number_heading_pane_t

0x86d7,	// (0x0005404b) list_single_graphic_heading_pane_g1_ParamLimits

0x86d7,	// (0x0005404b) list_single_graphic_heading_pane_g1

0x9c11,	// (0x00055585) list_single_graphic_heading_pane_g4_ParamLimits

0x9c11,	// (0x00055585) list_single_graphic_heading_pane_g4

0x08c1,	// (0x0004c235) list_single_graphic_heading_pane_g5_ParamLimits

0x08c1,	// (0x0004c235) list_single_graphic_heading_pane_g5

0x0002,

0xf5b7,	// (0x0005af2b) list_single_graphic_heading_pane_g_ParamLimits

0xf5b7,	// (0x0005af2b) list_single_graphic_heading_pane_g

0xe835,	// (0x0005a1a9) list_single_graphic_heading_pane_t1_ParamLimits

0xe835,	// (0x0005a1a9) list_single_graphic_heading_pane_t1

0x86e3,	// (0x00054057) list_single_graphic_heading_pane_t2_ParamLimits

0x86e3,	// (0x00054057) list_single_graphic_heading_pane_t2

0x0001,

0xf5be,	// (0x0005af32) list_single_graphic_heading_pane_t_ParamLimits

0xf5be,	// (0x0005af32) list_single_graphic_heading_pane_t

0x0dc4,	// (0x0004c738) list_single_large_graphic_pane_g1_ParamLimits

0x0dc4,	// (0x0004c738) list_single_large_graphic_pane_g1

0xf088,	// (0x0005a9fc) list_single_large_graphic_pane_g2_ParamLimits

0xf088,	// (0x0005a9fc) list_single_large_graphic_pane_g2

0xf094,	// (0x0005aa08) list_single_large_graphic_pane_g3_ParamLimits

0xf094,	// (0x0005aa08) list_single_large_graphic_pane_g3

0x0002,

0xf5c3,	// (0x0005af37) list_single_large_graphic_pane_g_ParamLimits

0xf5c3,	// (0x0005af37) list_single_large_graphic_pane_g

0x27dc,	// (0x0004e150) wait_border_pane_g2_copy1

0x9c22,	// (0x00055596) list_single_large_graphic_pane_g4_cp2

0xe84b,	// (0x0005a1bf) list_single_large_graphic_pane_t1_ParamLimits

0xe84b,	// (0x0005a1bf) list_single_large_graphic_pane_t1

0x86f5,	// (0x00054069) list_double_pane_g1_ParamLimits

0x86f5,	// (0x00054069) list_double_pane_g1

0x8701,	// (0x00054075) list_double_pane_g2_ParamLimits

0x8701,	// (0x00054075) list_double_pane_g2

0x0001,

0xf5ca,	// (0x0005af3e) list_double_pane_g_ParamLimits

0xf5ca,	// (0x0005af3e) list_double_pane_g

0x870d,	// (0x00054081) list_double_pane_t1_ParamLimits

0x870d,	// (0x00054081) list_double_pane_t1

0x8723,	// (0x00054097) list_double_pane_t2_ParamLimits

0x8723,	// (0x00054097) list_double_pane_t2

0x0001,

0xf5cf,	// (0x0005af43) list_double_pane_t_ParamLimits

0xf5cf,	// (0x0005af43) list_double_pane_t

0x8735,	// (0x000540a9) list_double2_pane_g1_ParamLimits

0x8735,	// (0x000540a9) list_double2_pane_g1

0x8746,	// (0x000540ba) list_double2_pane_g2_ParamLimits

0x8746,	// (0x000540ba) list_double2_pane_g2

0x0001,

0xf5d4,	// (0x0005af48) list_double2_pane_g_ParamLimits

0xf5d4,	// (0x0005af48) list_double2_pane_g

0x8752,	// (0x000540c6) list_double2_pane_t1_ParamLimits

0x8752,	// (0x000540c6) list_double2_pane_t1

0x8768,	// (0x000540dc) list_double2_pane_t2_ParamLimits

0x8768,	// (0x000540dc) list_double2_pane_t2

0x0001,

0xf5d9,	// (0x0005af4d) list_double2_pane_t_ParamLimits

0xf5d9,	// (0x0005af4d) list_double2_pane_t

0x86f5,	// (0x00054069) list_double_number_pane_g1_ParamLimits

0x86f5,	// (0x00054069) list_double_number_pane_g1

0x8701,	// (0x00054075) list_double_number_pane_g2_ParamLimits

0x8701,	// (0x00054075) list_double_number_pane_g2

0x0001,

0xf5ca,	// (0x0005af3e) list_double_number_pane_g_ParamLimits

0xf5ca,	// (0x0005af3e) list_double_number_pane_g

0x877a,	// (0x000540ee) list_double_number_pane_t1_ParamLimits

0x877a,	// (0x000540ee) list_double_number_pane_t1

0x870d,	// (0x00054081) list_double_number_pane_t2_ParamLimits

0x870d,	// (0x00054081) list_double_number_pane_t2

0x8723,	// (0x00054097) list_double_number_pane_t3_ParamLimits

0x8723,	// (0x00054097) list_double_number_pane_t3

0x0002,

0xf5de,	// (0x0005af52) list_double_number_pane_t_ParamLimits

0xf5de,	// (0x0005af52) list_double_number_pane_t

0x878c,	// (0x00054100) list_double_graphic_pane_g1_ParamLimits

0x878c,	// (0x00054100) list_double_graphic_pane_g1

0x8798,	// (0x0005410c) list_double_graphic_pane_g2_ParamLimits

0x8798,	// (0x0005410c) list_double_graphic_pane_g2

0x3c59,	// (0x0004f5cd) list_double_graphic_pane_g3_ParamLimits

0x3c59,	// (0x0004f5cd) list_double_graphic_pane_g3

0x0003,

0xf5e5,	// (0x0005af59) list_double_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0005af59) list_double_graphic_pane_g

0x870d,	// (0x00054081) list_double_graphic_pane_t1_ParamLimits

0x870d,	// (0x00054081) list_double_graphic_pane_t1

0x8723,	// (0x00054097) list_double_graphic_pane_t2_ParamLimits

0x8723,	// (0x00054097) list_double_graphic_pane_t2

0x0001,

0xf5cf,	// (0x0005af43) list_double_graphic_pane_t_ParamLimits

0xf5cf,	// (0x0005af43) list_double_graphic_pane_t

0x87b3,	// (0x00054127) list_double2_graphic_pane_g1_ParamLimits

0x87b3,	// (0x00054127) list_double2_graphic_pane_g1

0x87bf,	// (0x00054133) list_double2_graphic_pane_g2_ParamLimits

0x87bf,	// (0x00054133) list_double2_graphic_pane_g2

0x9c2a,	// (0x0005559e) list_double2_graphic_pane_g3_ParamLimits

0x9c2a,	// (0x0005559e) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x0005af62) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x0005af62) list_double2_graphic_pane_g

0x87cb,	// (0x0005413f) list_double2_graphic_pane_t1_ParamLimits

0x87cb,	// (0x0005413f) list_double2_graphic_pane_t1

0x8768,	// (0x000540dc) list_double2_graphic_pane_t2_ParamLimits

0x8768,	// (0x000540dc) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x0005af69) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x0005af69) list_double2_graphic_pane_t

0x87e1,	// (0x00054155) list_double_large_graphic_pane_g1_ParamLimits

0x87e1,	// (0x00054155) list_double_large_graphic_pane_g1

0x8800,	// (0x00054174) list_double_large_graphic_pane_g2_ParamLimits

0x8800,	// (0x00054174) list_double_large_graphic_pane_g2

0x8701,	// (0x00054075) list_double_large_graphic_pane_g3_ParamLimits

0x8701,	// (0x00054075) list_double_large_graphic_pane_g3

0x8816,	// (0x0005418a) list_double_large_graphic_pane_g4_ParamLimits

0x8816,	// (0x0005418a) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x0005af6e) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x0005af6e) list_double_large_graphic_pane_g

0x8829,	// (0x0005419d) list_double_large_graphic_pane_t1_ParamLimits

0x8829,	// (0x0005419d) list_double_large_graphic_pane_t1

0x8842,	// (0x000541b6) list_double_large_graphic_pane_t2_ParamLimits

0x8842,	// (0x000541b6) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x0005af79) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x0005af79) list_double_large_graphic_pane_t

0x8854,	// (0x000541c8) list_double2_large_graphic_pane_g1_ParamLimits

0x8854,	// (0x000541c8) list_double2_large_graphic_pane_g1

0x9c36,	// (0x000555aa) list_double2_large_graphic_pane_g2_ParamLimits

0x9c36,	// (0x000555aa) list_double2_large_graphic_pane_g2

0x9c2a,	// (0x0005559e) list_double2_large_graphic_pane_g3_ParamLimits

0x9c2a,	// (0x0005559e) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x0005af7e) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x0005af7e) list_double2_large_graphic_pane_g

0x8860,	// (0x000541d4) list_double2_large_graphic_pane_t1_ParamLimits

0x8860,	// (0x000541d4) list_double2_large_graphic_pane_t1

0x8876,	// (0x000541ea) list_double2_large_graphic_pane_t2_ParamLimits

0x8876,	// (0x000541ea) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x0005af85) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x0005af85) list_double2_large_graphic_pane_t

0x8888,	// (0x000541fc) list_double_heading_pane_g1_ParamLimits

0x8888,	// (0x000541fc) list_double_heading_pane_g1

0xf0b5,	// (0x0005aa29) list_double_heading_pane_g2_ParamLimits

0xf0b5,	// (0x0005aa29) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x0005af8a) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x0005af8a) list_double_heading_pane_g

0x8899,	// (0x0005420d) list_double_heading_pane_t1_ParamLimits

0x8899,	// (0x0005420d) list_double_heading_pane_t1

0x8768,	// (0x000540dc) list_double_heading_pane_t2_ParamLimits

0x8768,	// (0x000540dc) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x0005af8f) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x0005af8f) list_double_heading_pane_t

0x878c,	// (0x00054100) list_double_graphic_heading_pane_g1_ParamLimits

0x878c,	// (0x00054100) list_double_graphic_heading_pane_g1

0x8888,	// (0x000541fc) list_double_graphic_heading_pane_g2_ParamLimits

0x8888,	// (0x000541fc) list_double_graphic_heading_pane_g2

0xf0b5,	// (0x0005aa29) list_double_graphic_heading_pane_g3_ParamLimits

0xf0b5,	// (0x0005aa29) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x0005af94) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x0005af94) list_double_graphic_heading_pane_g

0x8899,	// (0x0005420d) list_double_graphic_heading_pane_t1_ParamLimits

0x8899,	// (0x0005420d) list_double_graphic_heading_pane_t1

0x8768,	// (0x000540dc) list_double_graphic_heading_pane_t2_ParamLimits

0x8768,	// (0x000540dc) list_double_graphic_heading_pane_t2

0x0001,

0xf61b,	// (0x0005af8f) list_double_graphic_heading_pane_t_ParamLimits

0xf61b,	// (0x0005af8f) list_double_graphic_heading_pane_t

0x88af,	// (0x00054223) list_double_time_pane_g1_ParamLimits

0x88af,	// (0x00054223) list_double_time_pane_g1

0xe861,	// (0x0005a1d5) list_double_time_pane_g2_ParamLimits

0xe861,	// (0x0005a1d5) list_double_time_pane_g2

0x0001,

0xf627,	// (0x0005af9b) list_double_time_pane_g_ParamLimits

0xf627,	// (0x0005af9b) list_double_time_pane_g

0x88c0,	// (0x00054234) list_double_time_pane_t1_ParamLimits

0x88c0,	// (0x00054234) list_double_time_pane_t1

0x88d6,	// (0x0005424a) list_double_time_pane_t2_ParamLimits

0x88d6,	// (0x0005424a) list_double_time_pane_t2

0x88e8,	// (0x0005425c) list_double_time_pane_t3_ParamLimits

0x88e8,	// (0x0005425c) list_double_time_pane_t3

0x88fa,	// (0x0005426e) list_double_time_pane_t4_ParamLimits

0x88fa,	// (0x0005426e) list_double_time_pane_t4

0x0003,

0xf62c,	// (0x0005afa0) list_double_time_pane_t_ParamLimits

0xf62c,	// (0x0005afa0) list_double_time_pane_t

0x890c,	// (0x00054280) list_setting_pane_g1_ParamLimits

0x890c,	// (0x00054280) list_setting_pane_g1

0x8918,	// (0x0005428c) list_setting_pane_g2_ParamLimits

0x8918,	// (0x0005428c) list_setting_pane_g2

0x0001,

0xf635,	// (0x0005afa9) list_setting_pane_g_ParamLimits

0xf635,	// (0x0005afa9) list_setting_pane_g

0x8924,	// (0x00054298) list_setting_pane_t1_ParamLimits

0x8924,	// (0x00054298) list_setting_pane_t1

0x893e,	// (0x000542b2) list_setting_pane_t2_ParamLimits

0x893e,	// (0x000542b2) list_setting_pane_t2

0x0002,

0xf63a,	// (0x0005afae) list_setting_pane_t_ParamLimits

0xf63a,	// (0x0005afae) list_setting_pane_t

0x897d,	// (0x000542f1) set_value_pane_cp_ParamLimits

0x897d,	// (0x000542f1) set_value_pane_cp

0x8989,	// (0x000542fd) list_setting_number_pane_g1_ParamLimits

0x8989,	// (0x000542fd) list_setting_number_pane_g1

0x8995,	// (0x00054309) list_setting_number_pane_g2_ParamLimits

0x8995,	// (0x00054309) list_setting_number_pane_g2

0x0001,

0xf641,	// (0x0005afb5) list_setting_number_pane_g_ParamLimits

0xf641,	// (0x0005afb5) list_setting_number_pane_g

0x89a1,	// (0x00054315) list_setting_number_pane_t1_ParamLimits

0x89a1,	// (0x00054315) list_setting_number_pane_t1

0x89ba,	// (0x0005432e) list_setting_number_pane_t2_ParamLimits

0x89ba,	// (0x0005432e) list_setting_number_pane_t2

0x89d4,	// (0x00054348) list_setting_number_pane_t3_ParamLimits

0x89d4,	// (0x00054348) list_setting_number_pane_t3

0x0003,

0xf646,	// (0x0005afba) list_setting_number_pane_t_ParamLimits

0xf646,	// (0x0005afba) list_setting_number_pane_t

0x897d,	// (0x000542f1) set_value_pane_ParamLimits

0x897d,	// (0x000542f1) set_value_pane

0x9c47,	// (0x000555bb) bg_set_opt_pane_ParamLimits

0x9c47,	// (0x000555bb) bg_set_opt_pane

0xe86d,	// (0x0005a1e1) set_value_pane_t1

0x9c68,	// (0x000555dc) slider_set_pane_cp3

0x9c71,	// (0x000555e5) volume_small_pane_cp

0x9c7a,	// (0x000555ee) list_form_gen_pane

0x9c83,	// (0x000555f7) scroll_pane_cp8

0x8a17,	// (0x0005438b) form_field_data_pane_ParamLimits

0x8a17,	// (0x0005438b) form_field_data_pane

0x8a2e,	// (0x000543a2) form_field_data_wide_pane_ParamLimits

0x8a2e,	// (0x000543a2) form_field_data_wide_pane

0x8a4e,	// (0x000543c2) form_field_popup_pane_ParamLimits

0x8a4e,	// (0x000543c2) form_field_popup_pane

0x8a6e,	// (0x000543e2) form_field_popup_wide_pane_ParamLimits

0x8a6e,	// (0x000543e2) form_field_popup_wide_pane

0xe88b,	// (0x0005a1ff) form_field_slider_pane_ParamLimits

0xe88b,	// (0x0005a1ff) form_field_slider_pane

0x8a85,	// (0x000543f9) form_field_slider_wide_pane_ParamLimits

0x8a85,	// (0x000543f9) form_field_slider_wide_pane

0x9c94,	// (0x00055608) data_form_pane

0x8aa2,	// (0x00054416) form_field_data_pane_t1

0x9ca0,	// (0x00055614) input_focus_pane

0xe89e,	// (0x0005a212) data_form_wide_pane

0xe8bb,	// (0x0005a22f) form_field_data_wide_pane_t1

0x9a36,	// (0x000553aa) input_focus_pane_cp6

0x8abc,	// (0x00054430) form_field_popup_pane_t1

0x9ca0,	// (0x00055614) input_focus_pane_cp7

0x9cce,	// (0x00055642) list_form_pane

0xe8e5,	// (0x0005a259) form_field_popup_wide_pane_t1

0x9ca0,	// (0x00055614) input_focus_pane_cp8

0x9cda,	// (0x0005564e) list_form_wide_pane

0x8ade,	// (0x00054452) form_field_slider_pane_t1_ParamLimits

0x8ade,	// (0x00054452) form_field_slider_pane_t1

0x8af6,	// (0x0005446a) form_field_slider_pane_t2_ParamLimits

0x8af6,	// (0x0005446a) form_field_slider_pane_t2

0x0001,

0xf656,	// (0x0005afca) form_field_slider_pane_t_ParamLimits

0xf656,	// (0x0005afca) form_field_slider_pane_t

0x9310,	// (0x00054c84) input_focus_pane_cp9_ParamLimits

0x9310,	// (0x00054c84) input_focus_pane_cp9

0x8b0b,	// (0x0005447f) slider_cont_pane_ParamLimits

0x8b0b,	// (0x0005447f) slider_cont_pane

0x9ce6,	// (0x0005565a) form_field_slider_wide_pane_t1_ParamLimits

0x9ce6,	// (0x0005565a) form_field_slider_wide_pane_t1

0xe8fa,	// (0x0005a26e) form_field_slider_wide_pane_t2_ParamLimits

0xe8fa,	// (0x0005a26e) form_field_slider_wide_pane_t2

0x0001,

0xf65b,	// (0x0005afcf) form_field_slider_wide_pane_t_ParamLimits

0xf65b,	// (0x0005afcf) form_field_slider_wide_pane_t

0x9310,	// (0x00054c84) input_focus_pane_cp10_ParamLimits

0x9310,	// (0x00054c84) input_focus_pane_cp10

0x8b1f,	// (0x00054493) slider_cont_pane_cp1_ParamLimits

0x8b1f,	// (0x00054493) slider_cont_pane_cp1

0x8b33,	// (0x000544a7) slider_form_pane_cp

0x9cf8,	// (0x0005566c) input_focus_pane_g1

0x9d00,	// (0x00055674) input_focus_pane_g2

0x9d08,	// (0x0005567c) input_focus_pane_g3

0x9d10,	// (0x00055684) input_focus_pane_g4

0x9d18,	// (0x0005568c) input_focus_pane_g5

0x9d20,	// (0x00055694) input_focus_pane_g6

0x9d28,	// (0x0005569c) input_focus_pane_g7

0x9d30,	// (0x000556a4) input_focus_pane_g8

0x9d38,	// (0x000556ac) input_focus_pane_g9

0x8e73,	// (0x000547e7) input_focus_pane_g10

0x0009,

0xf660,	// (0x0005afd4) input_focus_pane_g

0x27e5,	// (0x0004e159) wait_border_pane_g3_copy1

0x8b3b,	// (0x000544af) data_form_pane_t1

0x8e73,	// (0x000547e7) wait_anim_pane_g1_copy1

0x8c8a,	// (0x000545fe) data_form_wide_pane_t1

0x8b55,	// (0x000544c9) list_form_graphic_pane_cp_ParamLimits

0x8b55,	// (0x000544c9) list_form_graphic_pane_cp

0x36c4,	// (0x0004f038) slider_form_pane_g1

0x36cd,	// (0x0004f041) slider_form_pane_g2

0x0006,

0xf95e,	// (0x0005b2d2) slider_form_pane_g

0x8b67,	// (0x000544db) list_form_graphic_pane_ParamLimits

0x8b67,	// (0x000544db) list_form_graphic_pane

0x8b7a,	// (0x000544ee) list_form_graphic_pane_g1

0x8b82,	// (0x000544f6) list_form_graphic_pane_t1_ParamLimits

0x8b82,	// (0x000544f6) list_form_graphic_pane_t1

0x935a,	// (0x00054cce) list_highlight_pane_cp5_ParamLimits

0x935a,	// (0x00054cce) list_highlight_pane_cp5

0x8b97,	// (0x0005450b) find_pane_g1

0x9d40,	// (0x000556b4) input_find_pane

0x8ba0,	// (0x00054514) input_find_pane_g1_ParamLimits

0x8ba0,	// (0x00054514) input_find_pane_g1

0x8bac,	// (0x00054520) input_find_pane_t1_ParamLimits

0x8bac,	// (0x00054520) input_find_pane_t1

0x8bc1,	// (0x00054535) input_find_pane_t2_ParamLimits

0x8bc1,	// (0x00054535) input_find_pane_t2

0x0001,

0xf675,	// (0x0005afe9) input_find_pane_t_ParamLimits

0xf675,	// (0x0005afe9) input_find_pane_t

0x9d49,	// (0x000556bd) input_focus_pane_cp5_ParamLimits

0x9d49,	// (0x000556bd) input_focus_pane_cp5

0x9d68,	// (0x000556dc) bg_popup_window_pane_cp2_ParamLimits

0x9d68,	// (0x000556dc) bg_popup_window_pane_cp2

0x9d75,	// (0x000556e9) listscroll_menu_pane_ParamLimits

0x9d75,	// (0x000556e9) listscroll_menu_pane

0x9d81,	// (0x000556f5) popup_submenu_window_ParamLimits

0x9d81,	// (0x000556f5) popup_submenu_window

0x9da9,	// (0x0005571d) find_popup_pane_g1

0x9db1,	// (0x00055725) input_popup_find_pane_cp

0x9dbb,	// (0x0005572f) input_focus_pane_cp4_ParamLimits

0x9dbb,	// (0x0005572f) input_focus_pane_cp4

0x9dd7,	// (0x0005574b) input_popup_find_pane_t1_ParamLimits

0x9dd7,	// (0x0005574b) input_popup_find_pane_t1

0x90bf,	// (0x00054a33) bg_popup_sub_pane_cp

0x9e05,	// (0x00055779) listscroll_popup_sub_pane

0x9e0d,	// (0x00055781) list_submenu_pane_ParamLimits

0x9e0d,	// (0x00055781) list_submenu_pane

0x9e1e,	// (0x00055792) scroll_pane_cp4

0x9e26,	// (0x0005579a) list_single_popup_submenu_pane_ParamLimits

0x9e26,	// (0x0005579a) list_single_popup_submenu_pane

0x9e3a,	// (0x000557ae) list_single_popup_submenu_pane_g1

0x9e42,	// (0x000557b6) list_single_popup_submenu_pane_t1_ParamLimits

0x9e42,	// (0x000557b6) list_single_popup_submenu_pane_t1

0x9310,	// (0x00054c84) bg_active_tab_pane_cp1_ParamLimits

0x9310,	// (0x00054c84) bg_active_tab_pane_cp1

0x9e57,	// (0x000557cb) tabs_2_active_pane_g1

0x9e5f,	// (0x000557d3) tabs_2_active_pane_t1

0x9310,	// (0x00054c84) bg_passive_tab_pane_cp1_ParamLimits

0x9310,	// (0x00054c84) bg_passive_tab_pane_cp1

0x9e57,	// (0x000557cb) tabs_2_passive_pane_g1

0x9e5f,	// (0x000557d3) tabs_2_passive_pane_t1

0x935a,	// (0x00054cce) bg_active_tab_pane_cp4

0x9e71,	// (0x000557e5) tabs_2_long_active_pane_t1

0x9e84,	// (0x000557f8) bg_passive_tab_pane_cp4

0x08f2,	// (0x0004c266) list_single_midp_graphic_pane_g4_ParamLimits

0x935a,	// (0x00054cce) bg_active_tab_pane_cp5

0x9e90,	// (0x00055804) tabs_3_long_active_pane_t1

0x9e84,	// (0x000557f8) bg_passive_tab_pane_cp5

0x08f2,	// (0x0004c266) list_single_midp_graphic_pane_g4

0x935a,	// (0x00054cce) bg_popup_window_pane_cp13_ParamLimits

0x935a,	// (0x00054cce) bg_popup_window_pane_cp13

0x9eab,	// (0x0005581f) listscroll_popup_fast_pane_ParamLimits

0x9eab,	// (0x0005581f) listscroll_popup_fast_pane

0x9eb7,	// (0x0005582b) grid_popup_fast_pane_ParamLimits

0x9eb7,	// (0x0005582b) grid_popup_fast_pane

0x9ec9,	// (0x0005583d) scroll_pane_cp9_ParamLimits

0x9ec9,	// (0x0005583d) scroll_pane_cp9

0x4fd4,	// (0x00050948) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4fd4,	// (0x00050948) list_single_graphic_hl_pane_t1_cp2

0x9eed,	// (0x00055861) input_focus_pane_cp20_ParamLimits

0x9eed,	// (0x00055861) input_focus_pane_cp20

0x9efb,	// (0x0005586f) query_popup_data_pane_t1_ParamLimits

0x9efb,	// (0x0005586f) query_popup_data_pane_t1

0x9f0e,	// (0x00055882) query_popup_data_pane_t2_ParamLimits

0x9f0e,	// (0x00055882) query_popup_data_pane_t2

0x9f54,	// (0x000558c8) query_popup_data_pane_t3_ParamLimits

0x9f54,	// (0x000558c8) query_popup_data_pane_t3

0x9f95,	// (0x00055909) query_popup_data_pane_t4_ParamLimits

0x9f95,	// (0x00055909) query_popup_data_pane_t4

0x9fd1,	// (0x00055945) query_popup_data_pane_t5_ParamLimits

0x9fd1,	// (0x00055945) query_popup_data_pane_t5

0x0004,

0xf67a,	// (0x0005afee) query_popup_data_pane_t_ParamLimits

0xf67a,	// (0x0005afee) query_popup_data_pane_t

0x9cf8,	// (0x0005566c) bg_set_opt_pane_g1

0x9d00,	// (0x00055674) bg_set_opt_pane_g2

0x9d08,	// (0x0005567c) bg_set_opt_pane_g3

0x9d10,	// (0x00055684) bg_set_opt_pane_g4

0x9d18,	// (0x0005568c) bg_set_opt_pane_g5

0x9d20,	// (0x00055694) bg_set_opt_pane_g6

0x9d28,	// (0x0005569c) bg_set_opt_pane_g7

0x9d30,	// (0x000556a4) bg_set_opt_pane_g8

0x9d38,	// (0x000556ac) bg_set_opt_pane_g9

0x0008,

0xf685,	// (0x0005aff9) bg_set_opt_pane_g

0xf2fe,	// (0x0005ac72) control_top_pane_stacon_ParamLimits

0xf2fe,	// (0x0005ac72) control_top_pane_stacon

0xf351,	// (0x0005acc5) signal_pane_stacon_ParamLimits

0xf351,	// (0x0005acc5) signal_pane_stacon

0xc1e7,	// (0x00057b5b) stacon_top_pane_g1_ParamLimits

0xc1e7,	// (0x00057b5b) stacon_top_pane_g1

0xf376,	// (0x0005acea) title_pane_stacon_ParamLimits

0xf376,	// (0x0005acea) title_pane_stacon

0xf3a0,	// (0x0005ad14) uni_indicator_pane_stacon_ParamLimits

0xf3a0,	// (0x0005ad14) uni_indicator_pane_stacon

0xf3b5,	// (0x0005ad29) battery_pane_stacon_ParamLimits

0xf3b5,	// (0x0005ad29) battery_pane_stacon

0xf3f9,	// (0x0005ad6d) control_bottom_pane_stacon_ParamLimits

0xf3f9,	// (0x0005ad6d) control_bottom_pane_stacon

0xf41c,	// (0x0005ad90) navi_pane_stacon_ParamLimits

0xf41c,	// (0x0005ad90) navi_pane_stacon

0xc209,	// (0x00057b7d) stacon_bottom_pane_g1_ParamLimits

0xc209,	// (0x00057b7d) stacon_bottom_pane_g1

0xf0c1,	// (0x0005aa35) aid_levels_signal_lsc_ParamLimits

0xf0c1,	// (0x0005aa35) aid_levels_signal_lsc

0xf0d7,	// (0x0005aa4b) signal_pane_stacon_g1_ParamLimits

0xf0d7,	// (0x0005aa4b) signal_pane_stacon_g1

0xf0eb,	// (0x0005aa5f) signal_pane_stacon_g2_ParamLimits

0xf0eb,	// (0x0005aa5f) signal_pane_stacon_g2

0x0001,

0xf698,	// (0x0005b00c) signal_pane_stacon_g_ParamLimits

0xf698,	// (0x0005b00c) signal_pane_stacon_g

0xf120,	// (0x0005aa94) title_pane_stacon_t1_ParamLimits

0xf120,	// (0x0005aa94) title_pane_stacon_t1

0xa015,	// (0x00055989) uni_indicator_pane_stacon_g1

0xa01f,	// (0x00055993) uni_indicator_pane_stacon_g2

0xa029,	// (0x0005599d) uni_indicator_pane_stacon_g3

0xa033,	// (0x000559a7) uni_indicator_pane_stacon_g4

0x0003,

0xf6a4,	// (0x0005b018) uni_indicator_pane_stacon_g

0xf145,	// (0x0005aab9) control_top_pane_stacon_g1

0xf14d,	// (0x0005aac1) control_top_pane_stacon_t1_ParamLimits

0xf14d,	// (0x0005aac1) control_top_pane_stacon_t1

0xf184,	// (0x0005aaf8) aid_levels_battery_lsc_ParamLimits

0xf184,	// (0x0005aaf8) aid_levels_battery_lsc

0xf19b,	// (0x0005ab0f) battery_pane_stacon_g1_ParamLimits

0xf19b,	// (0x0005ab0f) battery_pane_stacon_g1

0xf1ae,	// (0x0005ab22) battery_pane_stacon_g2_ParamLimits

0xf1ae,	// (0x0005ab22) battery_pane_stacon_g2

0x0001,

0xf6ad,	// (0x0005b021) battery_pane_stacon_g_ParamLimits

0xf6ad,	// (0x0005b021) battery_pane_stacon_g

0xf1ec,	// (0x0005ab60) navi_icon_pane_stacon

0xf200,	// (0x0005ab74) navi_navi_pane_stacon

0xf1ec,	// (0x0005ab60) navi_text_pane_stacon

0xf145,	// (0x0005aab9) control_bottom_pane_stacon_g1

0xf214,	// (0x0005ab88) control_bottom_pane_stacon_t1_ParamLimits

0xf214,	// (0x0005ab88) control_bottom_pane_stacon_t1

0xa057,	// (0x000559cb) grid_app_pane_ParamLimits

0xa057,	// (0x000559cb) grid_app_pane

0xa08f,	// (0x00055a03) scroll_pane_cp15_ParamLimits

0xa08f,	// (0x00055a03) scroll_pane_cp15

0xa0a4,	// (0x00055a18) cell_app_pane_ParamLimits

0xa0a4,	// (0x00055a18) cell_app_pane

0xa0e9,	// (0x00055a5d) cell_app_pane_g1_ParamLimits

0xa0e9,	// (0x00055a5d) cell_app_pane_g1

0xa10d,	// (0x00055a81) cell_app_pane_g2_ParamLimits

0xa10d,	// (0x00055a81) cell_app_pane_g2

0x0001,

0xf6b2,	// (0x0005b026) cell_app_pane_g_ParamLimits

0xf6b2,	// (0x0005b026) cell_app_pane_g

0xa119,	// (0x00055a8d) cell_app_pane_t1_ParamLimits

0xa119,	// (0x00055a8d) cell_app_pane_t1

0xa130,	// (0x00055aa4) grid_highlight_pane_ParamLimits

0xa130,	// (0x00055aa4) grid_highlight_pane

0x9cf8,	// (0x0005566c) cell_highlight_pane_g1

0x9d00,	// (0x00055674) cell_highlight_pane_g2

0x9d08,	// (0x0005567c) cell_highlight_pane_g3

0x9d10,	// (0x00055684) cell_highlight_pane_g4

0x9d18,	// (0x0005568c) cell_highlight_pane_g5

0x9d20,	// (0x00055694) cell_highlight_pane_g6

0x9d28,	// (0x0005569c) cell_highlight_pane_g7

0x9d30,	// (0x000556a4) cell_highlight_pane_g8

0x9d38,	// (0x000556ac) cell_highlight_pane_g9

0x8e73,	// (0x000547e7) cell_highlight_pane_g10

0x0009,

0xf660,	// (0x0005afd4) cell_highlight_pane_g

0xa14a,	// (0x00055abe) bg_scroll_pane

0xa169,	// (0x00055add) scroll_handle_pane

0xa1a5,	// (0x00055b19) scroll_bg_pane_g1

0xa1ba,	// (0x00055b2e) scroll_bg_pane_g2

0xa1d2,	// (0x00055b46) scroll_bg_pane_g3

0x0002,

0xf6b7,	// (0x0005b02b) scroll_bg_pane_g

0xa1e7,	// (0x00055b5b) scroll_handle_focus_pane_ParamLimits

0xa1e7,	// (0x00055b5b) scroll_handle_focus_pane

0xa1a5,	// (0x00055b19) scroll_handle_pane_g1

0xa1f4,	// (0x00055b68) scroll_handle_pane_g2

0xa1d2,	// (0x00055b46) scroll_handle_pane_g3

0x0002,

0xf6be,	// (0x0005b032) scroll_handle_pane_g

0x9dbb,	// (0x0005572f) bg_popup_sub_pane_cp21_ParamLimits

0x9dbb,	// (0x0005572f) bg_popup_sub_pane_cp21

0xa208,	// (0x00055b7c) popup_fep_japan_predictive_window_t1_ParamLimits

0xa208,	// (0x00055b7c) popup_fep_japan_predictive_window_t1

0xa21f,	// (0x00055b93) popup_fep_japan_predictive_window_t2_ParamLimits

0xa21f,	// (0x00055b93) popup_fep_japan_predictive_window_t2

0xa252,	// (0x00055bc6) popup_fep_japan_predictive_window_t3_ParamLimits

0xa252,	// (0x00055bc6) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c5,	// (0x0005b039) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c5,	// (0x0005b039) popup_fep_japan_predictive_window_t

0x90bf,	// (0x00054a33) bg_popup_sub_pane_cp23

0xa289,	// (0x00055bfd) listscroll_japin_cand_pane

0xa291,	// (0x00055c05) popup_fep_japan_candidate_window_t1

0xbfa9,	// (0x0005791d) candidate_pane_ParamLimits

0xbfa9,	// (0x0005791d) candidate_pane

0xa29f,	// (0x00055c13) scroll_pane_cp30

0xbfbb,	// (0x0005792f) list_single_popup_jap_candidate_pane_ParamLimits

0xbfbb,	// (0x0005792f) list_single_popup_jap_candidate_pane

0x90bf,	// (0x00054a33) list_highlight_pane_cp30

0xbfd0,	// (0x00057944) list_single_popup_jap_candidate_pane_t1

0xbfdf,	// (0x00057953) level_1_signal

0xbfec,	// (0x00057960) level_2_signal

0xbff9,	// (0x0005796d) level_3_signal

0xc006,	// (0x0005797a) level_4_signal

0xc013,	// (0x00057987) level_5_signal

0xc020,	// (0x00057994) level_6_signal

0xc02d,	// (0x000579a1) level_7_signal

0xbfdf,	// (0x00057953) level_1_battery

0xbfec,	// (0x00057960) level_2_battery

0xbff9,	// (0x0005796d) level_3_battery

0xc006,	// (0x0005797a) level_4_battery

0xc013,	// (0x00057987) level_5_battery

0xc020,	// (0x00057994) level_6_battery

0xc02d,	// (0x000579a1) level_7_battery

0xc052,	// (0x000579c6) list_menu_pane_ParamLimits

0xc052,	// (0x000579c6) list_menu_pane

0xc068,	// (0x000579dc) scroll_pane_cp25_ParamLimits

0xc068,	// (0x000579dc) scroll_pane_cp25

0xa2a7,	// (0x00055c1b) list_double2_graphic_pane_cp2_ParamLimits

0xa2a7,	// (0x00055c1b) list_double2_graphic_pane_cp2

0xa2a7,	// (0x00055c1b) list_double2_large_graphic_pane_cp2_ParamLimits

0xa2a7,	// (0x00055c1b) list_double2_large_graphic_pane_cp2

0xa2a7,	// (0x00055c1b) list_double2_pane_cp2_ParamLimits

0xa2a7,	// (0x00055c1b) list_double2_pane_cp2

0xa2a7,	// (0x00055c1b) list_double_graphic_pane_cp2_ParamLimits

0xa2a7,	// (0x00055c1b) list_double_graphic_pane_cp2

0xa2a7,	// (0x00055c1b) list_double_large_graphic_pane_cp2_ParamLimits

0xa2a7,	// (0x00055c1b) list_double_large_graphic_pane_cp2

0xa2a7,	// (0x00055c1b) list_double_number_pane_cp2_ParamLimits

0xa2a7,	// (0x00055c1b) list_double_number_pane_cp2

0xa2a7,	// (0x00055c1b) list_double_pane_cp2_ParamLimits

0xa2a7,	// (0x00055c1b) list_double_pane_cp2

0xa2b6,	// (0x00055c2a) list_single_2graphic_pane_cp2_ParamLimits

0xa2b6,	// (0x00055c2a) list_single_2graphic_pane_cp2

0xa2b6,	// (0x00055c2a) list_single_graphic_heading_pane_cp2_ParamLimits

0xa2b6,	// (0x00055c2a) list_single_graphic_heading_pane_cp2

0xa2b6,	// (0x00055c2a) list_single_graphic_pane_cp2_ParamLimits

0xa2b6,	// (0x00055c2a) list_single_graphic_pane_cp2

0xa2b6,	// (0x00055c2a) list_single_heading_pane_cp2_ParamLimits

0xa2b6,	// (0x00055c2a) list_single_heading_pane_cp2

0xc091,	// (0x00057a05) list_single_large_graphic_pane_cp2_ParamLimits

0xc091,	// (0x00057a05) list_single_large_graphic_pane_cp2

0xa2b6,	// (0x00055c2a) list_single_number_heading_pane_cp2_ParamLimits

0xa2b6,	// (0x00055c2a) list_single_number_heading_pane_cp2

0xa2b6,	// (0x00055c2a) list_single_number_pane_cp2_ParamLimits

0xa2b6,	// (0x00055c2a) list_single_number_pane_cp2

0xa2c8,	// (0x00055c3c) list_single_pane_cp2_ParamLimits

0xa2c8,	// (0x00055c3c) list_single_pane_cp2

0xc0ab,	// (0x00057a1f) bg_popup_sub_pane_cp22

0xf2e4,	// (0x0005ac58) popup_side_volume_key_window_g1

0xf2f0,	// (0x0005ac64) popup_side_volume_key_window_t1

0xa390,	// (0x00055d04) volume_small_pane_cp1

0x9310,	// (0x00054c84) bg_popup_sub_pane_cp24_ParamLimits

0x9310,	// (0x00054c84) bg_popup_sub_pane_cp24

0xc0c1,	// (0x00057a35) fep_china_uni_candidate_pane_ParamLimits

0xc0c1,	// (0x00057a35) fep_china_uni_candidate_pane

0xc0d5,	// (0x00057a49) fep_china_uni_entry_pane

0xc0e5,	// (0x00057a59) popup_fep_china_uni_window_g1

0xa398,	// (0x00055d0c) fep_china_uni_entry_pane_g1

0xa3a0,	// (0x00055d14) fep_china_uni_entry_pane_g2

0x0001,

0xf6f6,	// (0x0005b06a) fep_china_uni_entry_pane_g

0xc101,	// (0x00057a75) fep_entry_item_pane

0xc10b,	// (0x00057a7f) fep_candidate_item_pane

0xa3a8,	// (0x00055d1c) fep_china_uni_candidate_pane_g1

0xc113,	// (0x00057a87) fep_china_uni_candidate_pane_g2

0xc11b,	// (0x00057a8f) fep_china_uni_candidate_pane_g3

0xa3b0,	// (0x00055d24) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fb,	// (0x0005b06f) fep_china_uni_candidate_pane_g

0x8e73,	// (0x000547e7) fep_entry_item_pane_g1

0xc123,	// (0x00057a97) fep_entry_item_pane_t1_ParamLimits

0xc123,	// (0x00057a97) fep_entry_item_pane_t1

0xc139,	// (0x00057aad) fep_candidate_item_pane_t1_ParamLimits

0xc139,	// (0x00057aad) fep_candidate_item_pane_t1

0xc14e,	// (0x00057ac2) fep_candidate_item_pane_t2_ParamLimits

0xc14e,	// (0x00057ac2) fep_candidate_item_pane_t2

0x0001,

0xf704,	// (0x0005b078) fep_candidate_item_pane_t_ParamLimits

0xf704,	// (0x0005b078) fep_candidate_item_pane_t

0x935a,	// (0x00054cce) list_highlight_pane_cp31_ParamLimits

0x935a,	// (0x00054cce) list_highlight_pane_cp31

0xc160,	// (0x00057ad4) level_1_signal_lsc

0xc169,	// (0x00057add) level_2_signal_lsc

0xc172,	// (0x00057ae6) level_3_signal_lsc

0xc17b,	// (0x00057aef) level_4_signal_lsc

0xc184,	// (0x00057af8) level_5_signal_lsc

0xc18d,	// (0x00057b01) level_6_signal_lsc

0xc196,	// (0x00057b0a) level_7_signal_lsc

0xc196,	// (0x00057b0a) level_1_battery_lsc

0xc19f,	// (0x00057b13) level_2_battery_lsc

0xc1a8,	// (0x00057b1c) level_3_battery_lsc

0xc1b1,	// (0x00057b25) level_4_battery_lsc

0xc1ba,	// (0x00057b2e) level_5_battery_lsc

0xc1c3,	// (0x00057b37) level_6_battery_lsc

0xc160,	// (0x00057ad4) level_7_battery_lsc

0xc1cc,	// (0x00057b40) scroll_handle_focus_pane_g1

0xc1d5,	// (0x00057b49) scroll_handle_focus_pane_g2

0xc1de,	// (0x00057b52) scroll_handle_focus_pane_g3

0x0002,

0xf709,	// (0x0005b07d) scroll_handle_focus_pane_g

0x8bd6,	// (0x0005454a) list_single_2graphic_pane_g1_ParamLimits

0x8bd6,	// (0x0005454a) list_single_2graphic_pane_g1

0x9c11,	// (0x00055585) list_single_2graphic_pane_g2_ParamLimits

0x9c11,	// (0x00055585) list_single_2graphic_pane_g2

0x08c1,	// (0x0004c235) list_single_2graphic_pane_g3_ParamLimits

0x08c1,	// (0x0004c235) list_single_2graphic_pane_g3

0x8be2,	// (0x00054556) list_single_2graphic_pane_g4_ParamLimits

0x8be2,	// (0x00054556) list_single_2graphic_pane_g4

0x0003,

0xf710,	// (0x0005b084) list_single_2graphic_pane_g_ParamLimits

0xf710,	// (0x0005b084) list_single_2graphic_pane_g

0x8bee,	// (0x00054562) list_single_2graphic_pane_t1_ParamLimits

0x8bee,	// (0x00054562) list_single_2graphic_pane_t1

0x8c1c,	// (0x00054590) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8c1c,	// (0x00054590) list_double2_graphic_large_graphic_pane_g1

0x9c36,	// (0x000555aa) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9c36,	// (0x000555aa) list_double2_graphic_large_graphic_pane_g2

0x9c2a,	// (0x0005559e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9c2a,	// (0x0005559e) list_double2_graphic_large_graphic_pane_g3

0x8c2e,	// (0x000545a2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8c2e,	// (0x000545a2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf719,	// (0x0005b08d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf719,	// (0x0005b08d) list_double2_graphic_large_graphic_pane_g

0x8c3a,	// (0x000545ae) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8c3a,	// (0x000545ae) list_double2_graphic_large_graphic_pane_t1

0x8c50,	// (0x000545c4) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8c50,	// (0x000545c4) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf722,	// (0x0005b096) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf722,	// (0x0005b096) list_double2_graphic_large_graphic_pane_t

0xa42b,	// (0x00055d9f) popup_fast_swap_window_ParamLimits

0xa42b,	// (0x00055d9f) popup_fast_swap_window

0xa447,	// (0x00055dbb) popup_side_volume_key_window

0xc294,	// (0x00057c08) stacon_top_pane

0xc29e,	// (0x00057c12) status_pane_ParamLimits

0xc29e,	// (0x00057c12) status_pane

0x8e69,	// (0x000547dd) status_small_pane

0x90bf,	// (0x00054a33) control_pane

0x90bf,	// (0x00054a33) stacon_bottom_pane

0x9c83,	// (0x000555f7) scroll_pane_cp121

0x9c7a,	// (0x000555ee) set_content_pane

0xa3b8,	// (0x00055d2c) bg_active_tab_pane_g1_cp1

0xa3c1,	// (0x00055d35) bg_active_tab_pane_g2_cp1

0xa3ca,	// (0x00055d3e) bg_active_tab_pane_g3_cp1

0xa3b8,	// (0x00055d2c) bg_passive_tab_pane_g1_cp1

0xa3c1,	// (0x00055d35) bg_passive_tab_pane_g2_cp1

0xa3ca,	// (0x00055d3e) bg_passive_tab_pane_g3_cp1

0xa3d3,	// (0x00055d47) bg_active_tab_pane_g1_cp2

0xa3c1,	// (0x00055d35) bg_active_tab_pane_g2_cp2

0xa3dc,	// (0x00055d50) bg_active_tab_pane_g3_cp2

0xa3d3,	// (0x00055d47) bg_passive_tab_pane_g1_cp2

0xa3c1,	// (0x00055d35) bg_passive_tab_pane_g2_cp2

0xa3dc,	// (0x00055d50) bg_passive_tab_pane_g3_cp2

0xa3e5,	// (0x00055d59) bg_active_tab_pane_g1_cp3

0xa3c1,	// (0x00055d35) bg_active_tab_pane_g2_cp3

0xa3ee,	// (0x00055d62) bg_active_tab_pane_g3_cp3

0xa3e5,	// (0x00055d59) bg_passive_tab_pane_g1_cp3

0xa3c1,	// (0x00055d35) bg_passive_tab_pane_g2_cp3

0xa3ee,	// (0x00055d62) bg_passive_tab_pane_g3_cp3

0xa3f7,	// (0x00055d6b) bg_active_tab_pane_g1_cp4

0xa3c1,	// (0x00055d35) bg_active_tab_pane_g2_cp4

0xa402,	// (0x00055d76) bg_active_tab_pane_g3_cp4

0xa3f7,	// (0x00055d6b) bg_passive_tab_pane_g1_cp4

0xa3c1,	// (0x00055d35) bg_passive_tab_pane_g2_cp4

0xa402,	// (0x00055d76) bg_passive_tab_pane_g3_cp4

0xa40d,	// (0x00055d81) bg_active_tab_pane_g1_cp5

0xa3c1,	// (0x00055d35) bg_active_tab_pane_g2_cp5

0xa416,	// (0x00055d8a) bg_active_tab_pane_g3_cp5

0xa40d,	// (0x00055d81) bg_passive_tab_pane_g1_cp5

0xa3c1,	// (0x00055d35) bg_passive_tab_pane_g2_cp5

0xa416,	// (0x00055d8a) bg_passive_tab_pane_g3_cp5

0x3c7d,	// (0x0004f5f1) list_set_graphic_pane_ParamLimits

0x3c7d,	// (0x0004f5f1) list_set_graphic_pane

0x90bf,	// (0x00054a33) bg_set_opt_pane_cp4

0xc225,	// (0x00057b99) list_set_graphic_pane_g1_ParamLimits

0xc225,	// (0x00057b99) list_set_graphic_pane_g1

0xc231,	// (0x00057ba5) list_set_graphic_pane_g2_ParamLimits

0xc231,	// (0x00057ba5) list_set_graphic_pane_g2

0x0001,

0xf727,	// (0x0005b09b) list_set_graphic_pane_g_ParamLimits

0xf727,	// (0x0005b09b) list_set_graphic_pane_g

0x0009,

0xfab8,	// (0x0005b42c) volume_small_pane_cp_g

0xa41f,	// (0x00055d93) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa41f,	// (0x00055d93) list_double2_large_graphic_pane_g1_cp2

0xc253,	// (0x00057bc7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc253,	// (0x00057bc7) list_double2_large_graphic_pane_g2_cp2

0xc264,	// (0x00057bd8) list_double2_large_graphic_pane_g3_cp2

0xc26c,	// (0x00057be0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc26c,	// (0x00057be0) list_double2_large_graphic_pane_t1_cp2

0xc282,	// (0x00057bf6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc282,	// (0x00057bf6) list_double2_large_graphic_pane_t2_cp2

0xc9a7,	// (0x0005831b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc9a7,	// (0x0005831b) list_double_large_graphic_pane_g1_cp2

0x32a7,	// (0x0004ec1b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x32a7,	// (0x0004ec1b) list_double_large_graphic_pane_g2_cp2

0xc3ba,	// (0x00057d2e) list_double_large_graphic_pane_g3_cp2

0x32b8,	// (0x0004ec2c) list_double_large_graphic_pane_g4_cp

0x32c0,	// (0x0004ec34) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x32c0,	// (0x0004ec34) list_double_large_graphic_pane_t1_cp2

0x32d7,	// (0x0004ec4b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x32d7,	// (0x0004ec4b) list_double_large_graphic_pane_t2_cp2

0xc2ac,	// (0x00057c20) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc2ac,	// (0x00057c20) list_double2_graphic_pane_g1_cp2

0xc2ba,	// (0x00057c2e) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc2ba,	// (0x00057c2e) list_double2_graphic_pane_g2_cp2

0xc2cb,	// (0x00057c3f) list_double2_graphic_pane_g3_cp2

0xc2d5,	// (0x00057c49) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc2d5,	// (0x00057c49) list_double2_graphic_pane_t1_cp2

0xc2eb,	// (0x00057c5f) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc2eb,	// (0x00057c5f) list_double2_graphic_pane_t2_cp2

0xc2fd,	// (0x00057c71) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc2fd,	// (0x00057c71) list_single_number_heading_pane_g1_cp2

0xc309,	// (0x00057c7d) list_single_number_heading_pane_g2_cp2

0xc311,	// (0x00057c85) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc311,	// (0x00057c85) list_single_number_heading_pane_t1_cp2

0xc327,	// (0x00057c9b) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc327,	// (0x00057c9b) list_single_number_heading_pane_t2_cp2

0xc339,	// (0x00057cad) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc339,	// (0x00057cad) list_single_number_heading_pane_t3_cp2

0xc2fd,	// (0x00057c71) list_single_heading_pane_g1_cp2_ParamLimits

0xc2fd,	// (0x00057c71) list_single_heading_pane_g1_cp2

0xc309,	// (0x00057c7d) list_single_heading_pane_g2_cp2

0xc311,	// (0x00057c85) list_single_heading_pane_t1_cp2_ParamLimits

0xc311,	// (0x00057c85) list_single_heading_pane_t1_cp2

0x30a0,	// (0x0004ea14) list_single_heading_pane_t2_cp2_ParamLimits

0x30a0,	// (0x0004ea14) list_single_heading_pane_t2_cp2

0x2fe8,	// (0x0004e95c) list_double_graphic_pane_g1_cp2_ParamLimits

0x2fe8,	// (0x0004e95c) list_double_graphic_pane_g1_cp2

0x2ff4,	// (0x0004e968) list_double_graphic_pane_g2_cp2_ParamLimits

0x2ff4,	// (0x0004e968) list_double_graphic_pane_g2_cp2

0x3003,	// (0x0004e977) list_double_graphic_pane_g3_cp2

0x300b,	// (0x0004e97f) list_double_graphic_pane_t1_cp2_ParamLimits

0x300b,	// (0x0004e97f) list_double_graphic_pane_t1_cp2

0x3021,	// (0x0004e995) list_double_graphic_pane_t2_cp2_ParamLimits

0x3021,	// (0x0004e995) list_double_graphic_pane_t2_cp2

0xc3ae,	// (0x00057d22) list_double_number_pane_g1_cp2_ParamLimits

0xc3ae,	// (0x00057d22) list_double_number_pane_g1_cp2

0xc3ba,	// (0x00057d2e) list_double_number_pane_g2_cp2

0x2fac,	// (0x0004e920) list_double_number_pane_t1_cp2_ParamLimits

0x2fac,	// (0x0004e920) list_double_number_pane_t1_cp2

0x2fc0,	// (0x0004e934) list_double_number_pane_t2_cp2_ParamLimits

0x2fc0,	// (0x0004e934) list_double_number_pane_t2_cp2

0x2fd6,	// (0x0004e94a) list_double_number_pane_t3_cp2_ParamLimits

0x2fd6,	// (0x0004e94a) list_double_number_pane_t3_cp2

0x2e95,	// (0x0004e809) list_single_graphic_pane_g1_cp2_ParamLimits

0x2e95,	// (0x0004e809) list_single_graphic_pane_g1_cp2

0xbf9d,	// (0x00057911) list_single_graphic_pane_g2_cp2_ParamLimits

0xbf9d,	// (0x00057911) list_single_graphic_pane_g2_cp2

0xc417,	// (0x00057d8b) list_single_graphic_pane_g3_cp2

0x2e6b,	// (0x0004e7df) list_single_graphic_pane_t1_cp2_ParamLimits

0x2e6b,	// (0x0004e7df) list_single_graphic_pane_t1_cp2

0xbf9d,	// (0x00057911) list_single_number_pane_g1_cp2_ParamLimits

0xbf9d,	// (0x00057911) list_single_number_pane_g1_cp2

0xc417,	// (0x00057d8b) list_single_number_pane_g2_cp2

0x2e6b,	// (0x0004e7df) list_single_number_pane_t1_cp2_ParamLimits

0x2e6b,	// (0x0004e7df) list_single_number_pane_t1_cp2

0x2e81,	// (0x0004e7f5) list_single_number_pane_t2_cp2_ParamLimits

0x2e81,	// (0x0004e7f5) list_single_number_pane_t2_cp2

0xc253,	// (0x00057bc7) list_double2_pane_g1_cp2_ParamLimits

0xc253,	// (0x00057bc7) list_double2_pane_g1_cp2

0xc264,	// (0x00057bd8) list_double2_pane_g2_cp2

0xc386,	// (0x00057cfa) list_double2_pane_t1_cp2_ParamLimits

0xc386,	// (0x00057cfa) list_double2_pane_t1_cp2

0xc39c,	// (0x00057d10) list_double2_pane_t2_cp2_ParamLimits

0xc39c,	// (0x00057d10) list_double2_pane_t2_cp2

0xc3ae,	// (0x00057d22) list_double_pane_g1_cp2_ParamLimits

0xc3ae,	// (0x00057d22) list_double_pane_g1_cp2

0xc3ba,	// (0x00057d2e) list_double_pane_g2_cp2

0xc3c2,	// (0x00057d36) list_double_pane_t1_cp2_ParamLimits

0xc3c2,	// (0x00057d36) list_double_pane_t1_cp2

0xc3d8,	// (0x00057d4c) list_double_pane_t2_cp2_ParamLimits

0xc3d8,	// (0x00057d4c) list_double_pane_t2_cp2

0xa461,	// (0x00055dd5) list_single_pane_cp2_g3

0xbf9d,	// (0x00057911) list_single_pane_g1_cp2_ParamLimits

0xbf9d,	// (0x00057911) list_single_pane_g1_cp2

0xc417,	// (0x00057d8b) list_single_pane_g2_cp2

0xc41f,	// (0x00057d93) list_single_pane_t1_cp2_ParamLimits

0xc41f,	// (0x00057d93) list_single_pane_t1_cp2

0xa469,	// (0x00055ddd) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa469,	// (0x00055ddd) list_single_large_graphic_pane_g1_cp2

0xc437,	// (0x00057dab) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc437,	// (0x00057dab) list_single_large_graphic_pane_g2_cp2

0xc443,	// (0x00057db7) list_single_large_graphic_pane_g3_cp2

0xa475,	// (0x00055de9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa475,	// (0x00055de9) list_single_large_graphic_pane_g4_cp1

0xc44b,	// (0x00057dbf) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc44b,	// (0x00057dbf) list_single_large_graphic_pane_t1_cp2

0x2e37,	// (0x0004e7ab) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2e37,	// (0x0004e7ab) list_single_graphic_heading_pane_g1_cp2

0x2e04,	// (0x0004e778) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2e04,	// (0x0004e778) list_single_graphic_heading_pane_g4_cp2

0xc417,	// (0x00057d8b) list_single_graphic_heading_pane_g5_cp2

0x2e43,	// (0x0004e7b7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2e43,	// (0x0004e7b7) list_single_graphic_heading_pane_t1_cp2

0x2e59,	// (0x0004e7cd) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2e59,	// (0x0004e7cd) list_single_graphic_heading_pane_t2_cp2

0x2df8,	// (0x0004e76c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2df8,	// (0x0004e76c) list_single_2graphic_pane_g1_cp2

0x2e04,	// (0x0004e778) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2e04,	// (0x0004e778) list_single_2graphic_pane_g2_cp2

0xc417,	// (0x00057d8b) list_single_2graphic_pane_g3_cp2

0x2e15,	// (0x0004e789) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2e15,	// (0x0004e789) list_single_2graphic_pane_g4_cp2

0x2e21,	// (0x0004e795) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2e21,	// (0x0004e795) list_single_2graphic_pane_t1_cp2

0x8e73,	// (0x000547e7) list_highlight_pane_g10_cp1

0x29e0,	// (0x0004e354) list_highlight_pane_g1_cp1

0x29e8,	// (0x0004e35c) list_highlight_pane_g2_cp1

0x29f0,	// (0x0004e364) list_highlight_pane_g3_cp1

0x29f8,	// (0x0004e36c) list_highlight_pane_g4_cp1

0x2a00,	// (0x0004e374) list_highlight_pane_g5_cp1

0x2a08,	// (0x0004e37c) list_highlight_pane_g6_cp1

0x2a10,	// (0x0004e384) list_highlight_pane_g7_cp1

0x2a18,	// (0x0004e38c) list_highlight_pane_g8_cp1

0x2a20,	// (0x0004e394) list_highlight_pane_g9_cp1

0xc73c,	// (0x000580b0) form_field_slider_pane_t3

0xc74a,	// (0x000580be) form_field_slider_pane_t4

0x2924,	// (0x0004e298) slider_form_pane_ParamLimits

0x2924,	// (0x0004e298) slider_form_pane

0x90bf,	// (0x00054a33) control_abbreviations

0x90bf,	// (0x00054a33) control_conventions

0x90bf,	// (0x00054a33) control_definitions

0x90bf,	// (0x00054a33) format_table_attribute

0xc97e,	// (0x000582f2) bg_popup_preview_window_pane_g9

0x90bf,	// (0x00054a33) format_table_data2

0x90bf,	// (0x00054a33) format_table_data3

0x90bf,	// (0x00054a33) format_table_data_example

0x0008,

0x90bf,	// (0x00054a33) intro_purpose

0xf8be,	// (0x0005b232) bg_popup_preview_window_pane_g

0x90bf,	// (0x00054a33) texts_category

0x90bf,	// (0x00054a33) texts_graphics

0xc461,	// (0x00057dd5) text_digital

0xc470,	// (0x00057de4) text_primary

0xc47f,	// (0x00057df3) text_primary_small

0xc48e,	// (0x00057e02) text_secondary

0xc49d,	// (0x00057e11) text_title

0xcce5,	// (0x00058659) bg_passive_tab_pane_g1_cp3_srt

0xa3c1,	// (0x00055d35) bg_passive_tab_pane_g2_cp3_srt

0xccee,	// (0x00058662) bg_passive_tab_pane_g3_cp3_srt

0x9310,	// (0x00054c84) bg_active_tab_pane_cp3_srt_ParamLimits

0x9310,	// (0x00054c84) bg_active_tab_pane_cp3_srt

0xccf7,	// (0x0005866b) tabs_4_active_pane_srt_g1

0xccff,	// (0x00058673) tabs_4_active_pane_srt_t1_ParamLimits

0xccff,	// (0x00058673) tabs_4_active_pane_srt_t1

0xcce5,	// (0x00058659) bg_active_tab_pane_g1_cp3_copy1

0xa3c1,	// (0x00055d35) bg_active_tab_pane_g2_cp3_copy1

0xccee,	// (0x00058662) bg_active_tab_pane_g3_cp3_copy1

0x935a,	// (0x00054cce) tabs_2_long_active_pane_srt_ParamLimits

0x935a,	// (0x00054cce) tabs_2_long_active_pane_srt

0x935a,	// (0x00054cce) tabs_2_long_passive_pane_srt_ParamLimits

0x935a,	// (0x00054cce) tabs_2_long_passive_pane_srt

0x9e84,	// (0x000557f8) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9e84,	// (0x000557f8) bg_passive_tab_pane_cp4_srt

0xca96,	// (0x0005840a) bg_passive_tab_pane_g1_cp4_srt

0xa3c1,	// (0x00055d35) bg_passive_tab_pane_g2_cp4_srt

0xca9f,	// (0x00058413) bg_passive_tab_pane_g3_cp4_srt

0x935a,	// (0x00054cce) bg_active_tab_pane_cp4_srt_ParamLimits

0x935a,	// (0x00054cce) bg_active_tab_pane_cp4_srt

0xcaa8,	// (0x0005841c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcaa8,	// (0x0005841c) tabs_2_long_active_pane_srt_t1

0xca96,	// (0x0005840a) bg_active_tab_pane_g1_cp4_srt

0xa3c1,	// (0x00055d35) bg_active_tab_pane_g2_cp4_srt

0xca9f,	// (0x00058413) bg_active_tab_pane_g3_cp4_srt

0x9310,	// (0x00054c84) tabs_3_long_active_pane_srt_ParamLimits

0x9310,	// (0x00054c84) tabs_3_long_active_pane_srt

0x9310,	// (0x00054c84) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x9310,	// (0x00054c84) tabs_3_long_passive_pane_cp_srt

0x9310,	// (0x00054c84) tabs_3_long_passive_pane_srt_ParamLimits

0x9310,	// (0x00054c84) tabs_3_long_passive_pane_srt

0x9e84,	// (0x000557f8) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9e84,	// (0x000557f8) bg_passive_tab_pane_cp5_srt

0xa40d,	// (0x00055d81) bg_passive_tab_pane_g1_cp5_srt

0xa3c1,	// (0x00055d35) bg_passive_tab_pane_g2_cp5_srt

0xa416,	// (0x00055d8a) bg_passive_tab_pane_g3_cp5_srt

0x935a,	// (0x00054cce) bg_active_tab_pane_cp5_srt_ParamLimits

0x935a,	// (0x00054cce) bg_active_tab_pane_cp5_srt

0xca80,	// (0x000583f4) tabs_3_long_active_pane_srt_t1_ParamLimits

0xca80,	// (0x000583f4) tabs_3_long_active_pane_srt_t1

0xa40d,	// (0x00055d81) bg_active_tab_pane_g1_cp5_srt

0xa3c1,	// (0x00055d35) bg_active_tab_pane_g2_cp5_srt

0xa416,	// (0x00055d8a) bg_active_tab_pane_g3_cp5_srt

0x34db,	// (0x0004ee4f) navi_text_pane_srt_t1

0x34d3,	// (0x0004ee47) navi_icon_pane_srt_g1

0xc588,	// (0x00057efc) midp_editing_number_pane_srt

0xc4ac,	// (0x00057e20) midp_ticker_pane_srt

0xc590,	// (0x00057f04) midp_ticker_pane_srt_g1

0xc598,	// (0x00057f0c) midp_ticker_pane_srt_g2

0x0001,

0xf746,	// (0x0005b0ba) midp_ticker_pane_srt_g

0xc5a0,	// (0x00057f14) midp_ticker_pane_srt_t1

0x34c4,	// (0x0004ee38) midp_editing_number_pane_t1_copy1

0xa48f,	// (0x00055e03) listscroll_midp_pane

0xa48f,	// (0x00055e03) midp_form_pane

0xa4fa,	// (0x00055e6e) midp_info_popup_window_ParamLimits

0xa4fa,	// (0x00055e6e) midp_info_popup_window

0x9dbb,	// (0x0005572f) bg_popup_sub_pane_cp50_ParamLimits

0x9dbb,	// (0x0005572f) bg_popup_sub_pane_cp50

0x2614,	// (0x0004df88) listscroll_midp_info_pane_ParamLimits

0x2614,	// (0x0004df88) listscroll_midp_info_pane

0x25f4,	// (0x0004df68) listscroll_form_midp_pane_ParamLimits

0x25f4,	// (0x0004df68) listscroll_form_midp_pane

0x2600,	// (0x0004df74) scroll_bar_cp050

0x25f4,	// (0x0004df68) list_midp_pane

0xce8d,	// (0x00058801) signal_pane_g2_cp

0x250e,	// (0x0004de82) listscroll_midp_info_pane_t1_ParamLimits

0x250e,	// (0x0004de82) listscroll_midp_info_pane_t1

0xb504,	// (0x00056e78) listscroll_midp_info_pane_t2_ParamLimits

0xb504,	// (0x00056e78) listscroll_midp_info_pane_t2

0xb542,	// (0x00056eb6) listscroll_midp_info_pane_t3_ParamLimits

0xb542,	// (0x00056eb6) listscroll_midp_info_pane_t3

0xb57c,	// (0x00056ef0) listscroll_midp_info_pane_t4_ParamLimits

0xb57c,	// (0x00056ef0) listscroll_midp_info_pane_t4

0x0003,

0xf7f9,	// (0x0005b16d) listscroll_midp_info_pane_t_ParamLimits

0xf7f9,	// (0x0005b16d) listscroll_midp_info_pane_t

0x9e1e,	// (0x00055792) scroll_pane_cp21

0x24ae,	// (0x0004de22) form_midp_field_choice_group_pane

0xb4c7,	// (0x00056e3b) form_midp_field_text_pane

0x24f4,	// (0x0004de68) form_midp_field_time_pane

0x24fc,	// (0x0004de70) form_midp_gauge_slider_pane

0x2505,	// (0x0004de79) form_midp_gauge_wait_pane

0x90bf,	// (0x00054a33) form_midp_image_pane

0x8c62,	// (0x000545d6) list_single_midp_pane_ParamLimits

0x8c62,	// (0x000545d6) list_single_midp_pane

0xb4a5,	// (0x00056e19) form_midp_field_text_pane_t1

0x222d,	// (0x0004dba1) input_focus_pane_cp050

0x249d,	// (0x0004de11) list_midp_form_text_pane

0x2432,	// (0x0004dda6) form_midp_field_choice_group_pane_t1

0x2440,	// (0x0004ddb4) input_focus_pane_cp051

0x2454,	// (0x0004ddc8) list_midp_choice_pane

0x90bf,	// (0x00054a33) status_idle_pane

0x2416,	// (0x0004dd8a) form_midp_field_time_pane_t1

0x8e73,	// (0x000547e7) wait_anim_pane_g2_copy1

0x2424,	// (0x0004dd98) form_midp_field_time_pane_t2

0x0001,

0xc50c,	// (0x00057e80) aid_navinavi_width_2_pane

0xf7f4,	// (0x0005b168) form_midp_field_time_pane_t

0x90bf,	// (0x00054a33) input_focus_pane_cp052

0x90bf,	// (0x00054a33) bg_input_focus_pane_cp040

0x23d6,	// (0x0004dd4a) form_midp_gauge_slider_pane_t1

0x23e4,	// (0x0004dd58) form_midp_gauge_slider_pane_t2

0xb489,	// (0x00056dfd) form_midp_gauge_slider_pane_t3

0xb497,	// (0x00056e0b) form_midp_gauge_slider_pane_t4

0x0003,

0xf7eb,	// (0x0005b15f) form_midp_gauge_slider_pane_t

0x240e,	// (0x0004dd82) form_midp_slider_pane

0x935a,	// (0x00054cce) bg_input_focus_pane_cp041_ParamLimits

0x935a,	// (0x00054cce) bg_input_focus_pane_cp041

0x23a3,	// (0x0004dd17) form_midp_gauge_wait_pane_t1_ParamLimits

0x23a3,	// (0x0004dd17) form_midp_gauge_wait_pane_t1

0x23b5,	// (0x0004dd29) form_midp_gauge_wait_pane_t2_ParamLimits

0x23b5,	// (0x0004dd29) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e6,	// (0x0005b15a) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e6,	// (0x0005b15a) form_midp_gauge_wait_pane_t

0x23c7,	// (0x0004dd3b) form_midp_wait_pane_ParamLimits

0x23c7,	// (0x0004dd3b) form_midp_wait_pane

0xb453,	// (0x00056dc7) form_midp_image_pane_g1

0xb45c,	// (0x00056dd0) form_midp_image_pane_t1

0xb46b,	// (0x00056ddf) form_midp_image_pane_t2

0xb47a,	// (0x00056dee) form_midp_image_pane_t3

0x0002,

0xf7df,	// (0x0005b153) form_midp_image_pane_t

0x2364,	// (0x0004dcd8) list_single_midp_pane_g1

0xea3e,	// (0x0005a3b2) list_single_midp_pane_t1

0xb43e,	// (0x00056db2) list_midp_form_item_pane_ParamLimits

0xb43e,	// (0x00056db2) list_midp_form_item_pane

0xc4b4,	// (0x00057e28) list_midp_form_item_pane_t1

0xc4c3,	// (0x00057e37) midp_ticker_pane_g1

0xc4cf,	// (0x00057e43) midp_ticker_pane_g2

0x0001,

0xf72c,	// (0x0005b0a0) midp_ticker_pane_g

0xc4db,	// (0x00057e4f) midp_ticker_pane_t1

0x3711,	// (0x0004f085) midp_editing_number_pane_t1

0x36ef,	// (0x0004f063) midp_editing_number_pane

0x36fe,	// (0x0004f072) midp_ticker_pane

0x2620,	// (0x0004df94) ai_message_heading_pane

0x90bf,	// (0x00054a33) bg_popup_window_pane_cp14

0x2628,	// (0x0004df9c) listscroll_ai_message_pane

0x344e,	// (0x0004edc2) ai_message_heading_pane_g1_ParamLimits

0x344e,	// (0x0004edc2) ai_message_heading_pane_g1

0xca48,	// (0x000583bc) ai_message_heading_pane_g2_ParamLimits

0xca48,	// (0x000583bc) ai_message_heading_pane_g2

0x3466,	// (0x0004edda) ai_message_heading_pane_g3_ParamLimits

0x3466,	// (0x0004edda) ai_message_heading_pane_g3

0x3472,	// (0x0004ede6) ai_message_heading_pane_g4_ParamLimits

0x3472,	// (0x0004ede6) ai_message_heading_pane_g4

0x0003,

0xf920,	// (0x0005b294) ai_message_heading_pane_g_ParamLimits

0xf920,	// (0x0005b294) ai_message_heading_pane_g

0xca54,	// (0x000583c8) ai_message_heading_pane_t1_ParamLimits

0xca54,	// (0x000583c8) ai_message_heading_pane_t1

0xca6e,	// (0x000583e2) ai_message_heading_pane_t2_ParamLimits

0xca6e,	// (0x000583e2) ai_message_heading_pane_t2

0x0001,

0xf929,	// (0x0005b29d) ai_message_heading_pane_t_ParamLimits

0xf929,	// (0x0005b29d) ai_message_heading_pane_t

0x34aa,	// (0x0004ee1e) bg_popup_heading_pane_cp1_ParamLimits

0x34aa,	// (0x0004ee1e) bg_popup_heading_pane_cp1

0x343c,	// (0x0004edb0) list_ai_message_pane_ParamLimits

0x343c,	// (0x0004edb0) list_ai_message_pane

0x9e1e,	// (0x00055792) scroll_pane_cp10

0x33d8,	// (0x0004ed4c) list_ai_message_pane_g1

0x33e0,	// (0x0004ed54) list_ai_message_pane_g2

0x0001,

0xf8fd,	// (0x0005b271) list_ai_message_pane_g

0x33e8,	// (0x0004ed5c) list_ai_message_pane_t1_ParamLimits

0x33e8,	// (0x0004ed5c) list_ai_message_pane_t1

0x33fd,	// (0x0004ed71) list_ai_message_pane_t2_ParamLimits

0x33fd,	// (0x0004ed71) list_ai_message_pane_t2

0x3412,	// (0x0004ed86) list_ai_message_pane_t3_ParamLimits

0x3412,	// (0x0004ed86) list_ai_message_pane_t3

0x3427,	// (0x0004ed9b) list_ai_message_pane_t4_ParamLimits

0x3427,	// (0x0004ed9b) list_ai_message_pane_t4

0x0003,

0xf902,	// (0x0005b276) list_ai_message_pane_t_ParamLimits

0xf902,	// (0x0005b276) list_ai_message_pane_t

0xca24,	// (0x00058398) cell_ai_soft_ind_pane_ParamLimits

0xca24,	// (0x00058398) cell_ai_soft_ind_pane

0xc4ed,	// (0x00057e61) cell_ai_soft_ind_pane_g1_ParamLimits

0xc4ed,	// (0x00057e61) cell_ai_soft_ind_pane_g1

0x90bf,	// (0x00054a33) grid_highlight_cp1

0xc4fa,	// (0x00057e6e) text_secondary_cp56_ParamLimits

0xc4fa,	// (0x00057e6e) text_secondary_cp56

0x3398,	// (0x0004ed0c) example_general_pane_ParamLimits

0x3398,	// (0x0004ed0c) example_general_pane

0x33a4,	// (0x0004ed18) example_parent_pane_g1_ParamLimits

0x33a4,	// (0x0004ed18) example_parent_pane_g1

0x33b0,	// (0x0004ed24) example_parent_pane_t1_ParamLimits

0x33b0,	// (0x0004ed24) example_parent_pane_t1

0xabc4,	// (0x00056538) popup_preview_text_window_ParamLimits

0xabc4,	// (0x00056538) popup_preview_text_window

0xc40f,	// (0x00057d83) list_single_pane_cp2_g4

0x9792,	// (0x00055106) bg_popup_preview_window_pane_ParamLimits

0x9792,	// (0x00055106) bg_popup_preview_window_pane

0xc986,	// (0x000582fa) popup_preview_text_window_t1_ParamLimits

0xc986,	// (0x000582fa) popup_preview_text_window_t1

0x3110,	// (0x0004ea84) popup_preview_text_window_t2_ParamLimits

0x3110,	// (0x0004ea84) popup_preview_text_window_t2

0x3159,	// (0x0004eacd) popup_preview_text_window_t3_ParamLimits

0x3159,	// (0x0004eacd) popup_preview_text_window_t3

0x319e,	// (0x0004eb12) popup_preview_text_window_t4_ParamLimits

0x319e,	// (0x0004eb12) popup_preview_text_window_t4

0x0004,

0xf8d1,	// (0x0005b245) popup_preview_text_window_t_ParamLimits

0xf8d1,	// (0x0005b245) popup_preview_text_window_t

0x321c,	// (0x0004eb90) scroll_pane_cp11

0x21a1,	// (0x0004db15) bg_popup_preview_window_pane_g1

0xc946,	// (0x000582ba) bg_popup_preview_window_pane_g2

0xc94e,	// (0x000582c2) bg_popup_preview_window_pane_g3

0xc956,	// (0x000582ca) bg_popup_preview_window_pane_g4

0xc95e,	// (0x000582d2) bg_popup_preview_window_pane_g5

0xc966,	// (0x000582da) bg_popup_preview_window_pane_g6

0xc96e,	// (0x000582e2) bg_popup_preview_window_pane_g7

0xc976,	// (0x000582ea) bg_popup_preview_window_pane_g8

0xe7e8,	// (0x0005a15c) aid_popup_width_pane

0xab40,	// (0x000564b4) popup_midp_note_alarm_window_ParamLimits

0xab40,	// (0x000564b4) popup_midp_note_alarm_window

0x9c94,	// (0x00055608) data_form_pane_ParamLimits

0x8a98,	// (0x0005440c) form_field_data_pane_g1

0x8aa2,	// (0x00054416) form_field_data_pane_t1_ParamLimits

0x9ca0,	// (0x00055614) input_focus_pane_ParamLimits

0xe89e,	// (0x0005a212) data_form_wide_pane_ParamLimits

0xe8af,	// (0x0005a223) form_field_data_wide_pane_g1

0xe8bb,	// (0x0005a22f) form_field_data_wide_pane_t1_ParamLimits

0x9a36,	// (0x000553aa) input_focus_pane_cp6_ParamLimits

0x9dc9,	// (0x0005573d) input_popup_find_pane_g1_ParamLimits

0x9dc9,	// (0x0005573d) input_popup_find_pane_g1

0xf1bf,	// (0x0005ab33) aid_navi_side_left_pane

0xf1d4,	// (0x0005ab48) aid_navi_side_right_pane

0x2adb,	// (0x0004e44f) bg_popup_window_pane_cp30_ParamLimits

0x2adb,	// (0x0004e44f) bg_popup_window_pane_cp30

0x2b55,	// (0x0004e4c9) popup_midp_note_alarm_window_g1_ParamLimits

0x2b55,	// (0x0004e4c9) popup_midp_note_alarm_window_g1

0x2b85,	// (0x0004e4f9) popup_midp_note_alarm_window_t1_ParamLimits

0x2b85,	// (0x0004e4f9) popup_midp_note_alarm_window_t1

0xc78f,	// (0x00058103) popup_midp_note_alarm_window_t2_ParamLimits

0xc78f,	// (0x00058103) popup_midp_note_alarm_window_t2

0xc83d,	// (0x000581b1) popup_midp_note_alarm_window_t3_ParamLimits

0xc83d,	// (0x000581b1) popup_midp_note_alarm_window_t3

0xc865,	// (0x000581d9) popup_midp_note_alarm_window_t4_ParamLimits

0xc865,	// (0x000581d9) popup_midp_note_alarm_window_t4

0x2d1c,	// (0x0004e690) popup_midp_note_alarm_window_t5_ParamLimits

0x2d1c,	// (0x0004e690) popup_midp_note_alarm_window_t5

0x000a,

0xf86e,	// (0x0005b1e2) popup_midp_note_alarm_window_t_ParamLimits

0xf86e,	// (0x0005b1e2) popup_midp_note_alarm_window_t

0x2dc8,	// (0x0004e73c) wait_bar_pane_cp1_ParamLimits

0x2dc8,	// (0x0004e73c) wait_bar_pane_cp1

0x90bf,	// (0x00054a33) wait_anim_pane_copy1

0x90bf,	// (0x00054a33) wait_border_pane_copy1

0x27d1,	// (0x0004e145) wait_border_pane_g1_copy1

0xe8d5,	// (0x0005a249) form_field_popup_pane_g1

0x8abc,	// (0x00054430) form_field_popup_pane_t1_ParamLimits

0x9ca0,	// (0x00055614) input_focus_pane_cp7_ParamLimits

0x9cce,	// (0x00055642) list_form_pane_ParamLimits

0xe8dd,	// (0x0005a251) form_field_popup_wide_pane_g1

0xe8e5,	// (0x0005a259) form_field_popup_wide_pane_t1_ParamLimits

0x9ca0,	// (0x00055614) input_focus_pane_cp8_ParamLimits

0x9cda,	// (0x0005564e) list_form_wide_pane_ParamLimits

0x3853,	// (0x0004f1c7) aid_size_cell_graphic_pane

0x8b3b,	// (0x000544af) data_form_pane_t1_ParamLimits

0x8c8a,	// (0x000545fe) data_form_wide_pane_t1_ParamLimits

0xb007,	// (0x0005697b) bg_status_flat_pane

0x924c,	// (0x00054bc0) title_pane_t1_ParamLimits

0x92d8,	// (0x00054c4c) title_pane_t2_ParamLimits

0x92fe,	// (0x00054c72) title_pane_t3_ParamLimits

0xf530,	// (0x0005aea4) title_pane_t_ParamLimits

0xbfdf,	// (0x00057953) level_1_signal_ParamLimits

0xbfec,	// (0x00057960) level_2_signal_ParamLimits

0xbff9,	// (0x0005796d) level_3_signal_ParamLimits

0xc006,	// (0x0005797a) level_4_signal_ParamLimits

0xc013,	// (0x00057987) level_5_signal_ParamLimits

0xc020,	// (0x00057994) level_6_signal_ParamLimits

0xc02d,	// (0x000579a1) level_7_signal_ParamLimits

0xbfdf,	// (0x00057953) level_1_battery_ParamLimits

0xbfec,	// (0x00057960) level_2_battery_ParamLimits

0xbff9,	// (0x0005796d) level_3_battery_ParamLimits

0xc006,	// (0x0005797a) level_4_battery_ParamLimits

0xc013,	// (0x00057987) level_5_battery_ParamLimits

0xc020,	// (0x00057994) level_6_battery_ParamLimits

0xc02d,	// (0x000579a1) level_7_battery_ParamLimits

0x29e0,	// (0x0004e354) bg_status_flat_pane_g1

0x29e8,	// (0x0004e35c) bg_status_flat_pane_g2

0x29f0,	// (0x0004e364) bg_status_flat_pane_g3

0x29f8,	// (0x0004e36c) bg_status_flat_pane_g4

0x2a00,	// (0x0004e374) bg_status_flat_pane_g5

0x2a08,	// (0x0004e37c) bg_status_flat_pane_g6

0x2a10,	// (0x0004e384) bg_status_flat_pane_g7

0x9326,	// (0x00054c9a) tabs_3_active_pane_t1_ParamLimits

0x9326,	// (0x00054c9a) tabs_3_passive_pane_t1_ParamLimits

0x9340,	// (0x00054cb4) tabs_4_active_pane_t1_ParamLimits

0x9340,	// (0x00054cb4) tabs_4_1_passive_pane_t1_ParamLimits

0x9e5f,	// (0x000557d3) tabs_2_active_pane_t1_ParamLimits

0x9e5f,	// (0x000557d3) tabs_2_passive_pane_t1_ParamLimits

0x935a,	// (0x00054cce) bg_active_tab_pane_cp4_ParamLimits

0x9e71,	// (0x000557e5) tabs_2_long_active_pane_t1_ParamLimits

0x9e84,	// (0x000557f8) bg_passive_tab_pane_cp4_ParamLimits

0x091a,	// (0x0004c28e) list_single_midp_graphic_pane_t1_ParamLimits

0x935a,	// (0x00054cce) bg_active_tab_pane_cp5_ParamLimits

0x9e90,	// (0x00055804) tabs_3_long_active_pane_t1_ParamLimits

0x9e84,	// (0x000557f8) bg_passive_tab_pane_cp5_ParamLimits

0x091a,	// (0x0004c28e) list_single_midp_graphic_pane_t1

0xb007,	// (0x0005697b) bg_status_flat_pane_ParamLimits

0x06f6,	// (0x0004c06a) indicator_pane_cp2_ParamLimits

0x06f6,	// (0x0004c06a) indicator_pane_cp2

0xb185,	// (0x00056af9) navi_pane_srt_ParamLimits

0xb185,	// (0x00056af9) navi_pane_srt

0x0845,	// (0x0004c1b9) popup_clock_digital_analogue_window_cp1

0x94fa,	// (0x00054e6e) indicator_pane_t1

0xc4ac,	// (0x00057e20) copy_highlight_pane

0xc4ac,	// (0x00057e20) cursor_graphics_pane

0xc4ac,	// (0x00057e20) graphic_within_text_pane

0xc4ac,	// (0x00057e20) link_highlight_pane

0x31df,	// (0x0004eb53) popup_preview_text_window_t5_ParamLimits

0x31df,	// (0x0004eb53) popup_preview_text_window_t5

0xc514,	// (0x00057e88) cursor_digital_pane

0xc514,	// (0x00057e88) cursor_primary_pane

0xc525,	// (0x00057e99) cursor_primary_small_pane

0xc52d,	// (0x00057ea1) cursor_secondary_pane

0xc535,	// (0x00057ea9) cursor_title_pane

0xc514,	// (0x00057e88) link_highlight_digital_pane

0xc51c,	// (0x00057e90) link_highlight_primary_pane

0xc525,	// (0x00057e99) link_highlight_primary_small_pane

0xc52d,	// (0x00057ea1) link_highlight_secondary_pane

0xc535,	// (0x00057ea9) link_highlight_title_pane

0xc514,	// (0x00057e88) copy_highlight_digital_pane

0xc514,	// (0x00057e88) copy_highlight_primary_pane

0xc525,	// (0x00057e99) copy_highlight_primary_small_pane

0xc52d,	// (0x00057ea1) copy_highlight_secondary_pane

0xc535,	// (0x00057ea9) copy_highlight_title_pane

0xc52d,	// (0x00057ea1) graphic_text_digital_pane

0x2a7e,	// (0x0004e3f2) graphic_text_primary_pane

0x2a87,	// (0x0004e3fb) graphic_text_primary_small_pane

0xc525,	// (0x00057e99) graphic_text_secondary_pane

0xc514,	// (0x00057e88) graphic_text_title_pane

0xa54b,	// (0x00055ebf) cursor_primary_pane_g1

0x2a70,	// (0x0004e3e4) cursor_text_primary_t1

0xc785,	// (0x000580f9) cursor_primary_small_pane_g1

0x2a62,	// (0x0004e3d6) cursor_text_primary_small_t1

0xc77b,	// (0x000580ef) cursor_primary_small_pane_g1_copy1

0x2a4a,	// (0x0004e3be) cursor_text_primary_small_t1_copy1

0x2a28,	// (0x0004e39c) cursor_text_title_t1

0xc771,	// (0x000580e5) cursor_title_pane_g1

0xa54b,	// (0x00055ebf) cursor_digital_pane_g1

0xc53d,	// (0x00057eb1) cursor_text_digital_t1

0xc54b,	// (0x00057ebf) link_highlight_primary_pane_g1

0x29d1,	// (0x0004e345) link_highlight_primary_pane_t1

0xc54b,	// (0x00057ebf) link_highlight_primary_small_pane_g1

0xc553,	// (0x00057ec7) link_highlight_primary_small_pane_t1

0xc54b,	// (0x00057ebf) link_highlight_secondary_pane_g1

0xc562,	// (0x00057ed6) link_highlight_secondary_pane_t1

0x2936,	// (0x0004e2aa) link_highlight_title_pane_g1

0x294d,	// (0x0004e2c1) link_highlight_title_pane_t1

0x2936,	// (0x0004e2aa) link_highlight_digital_pane_g1

0x293e,	// (0x0004e2b2) link_highlight_digital_pane_t1

0x27f0,	// (0x0004e164) copy_highlight_primary_pane_g1

0x2816,	// (0x0004e18a) copy_highlight_primary_pane_t1

0x27f0,	// (0x0004e164) copy_highlight_primary_small_pane_g1

0x2807,	// (0x0004e17b) copy_highlight_primary_small_pane_t1

0xc571,	// (0x00057ee5) copy_highlight_secondary_pane_g1

0xc579,	// (0x00057eed) copy_highlight_secondary_pane_t1

0x27f0,	// (0x0004e164) copy_highlight_title_pane_g1

0x27f8,	// (0x0004e16c) copy_highlight_title_pane_t1

0x27f0,	// (0x0004e164) copy_highlight_digital_pane_g1

0x3a21,	// (0x0004f395) copy_highlight_digital_pane_t1

0x3975,	// (0x0004f2e9) graphic_text_primary_pane_g1

0x3a05,	// (0x0004f379) graphic_text_primary_pane_t1

0x3a13,	// (0x0004f387) graphic_text_primary_pane_t2

0x0001,

0xf99d,	// (0x0005b311) graphic_text_primary_pane_t

0x39e1,	// (0x0004f355) graphic_text_primary_small_pane_g1

0x39e9,	// (0x0004f35d) graphic_text_primary_small_pane_t1

0x39f7,	// (0x0004f36b) graphic_text_primary_small_pane_t2

0x0001,

0xf998,	// (0x0005b30c) graphic_text_primary_small_pane_t

0x39bd,	// (0x0004f331) graphic_text_secondary_pane_g1

0x39c5,	// (0x0004f339) graphic_text_secondary_pane_t1

0x39d3,	// (0x0004f347) graphic_text_secondary_pane_t2

0x0001,

0xf993,	// (0x0005b307) graphic_text_secondary_pane_t

0x3999,	// (0x0004f30d) graphic_text_title_pane_g1

0x39a1,	// (0x0004f315) graphic_text_title_pane_t1

0x39af,	// (0x0004f323) graphic_text_title_pane_t2

0x0001,

0xf98e,	// (0x0005b302) graphic_text_title_pane_t

0x3975,	// (0x0004f2e9) graphic_text_digital_pane_g1

0x397d,	// (0x0004f2f1) graphic_text_digital_pane_t1

0x398b,	// (0x0004f2ff) graphic_text_digital_pane_t2

0x0001,

0xf989,	// (0x0005b2fd) graphic_text_digital_pane_t

0x935a,	// (0x00054cce) navi_icon_pane_srt_ParamLimits

0x935a,	// (0x00054cce) navi_icon_pane_srt

0x90bf,	// (0x00054a33) navi_midp_pane_srt

0x90bf,	// (0x00054a33) navi_navi_pane_srt

0x935a,	// (0x00054cce) navi_text_pane_srt_ParamLimits

0x935a,	// (0x00054cce) navi_text_pane_srt

0x3940,	// (0x0004f2b4) navi_navi_icon_text_pane_srt

0x3948,	// (0x0004f2bc) navi_navi_pane_srt_g1_ParamLimits

0x3948,	// (0x0004f2bc) navi_navi_pane_srt_g1

0x395a,	// (0x0004f2ce) navi_navi_pane_srt_g2_ParamLimits

0x395a,	// (0x0004f2ce) navi_navi_pane_srt_g2

0x0001,

0xf984,	// (0x0005b2f8) navi_navi_pane_srt_g_ParamLimits

0xf984,	// (0x0005b2f8) navi_navi_pane_srt_g

0x396c,	// (0x0004f2e0) navi_navi_tabs_pane_srt

0x3940,	// (0x0004f2b4) navi_navi_text_pane_srt

0x3940,	// (0x0004f2b4) navi_navi_volume_pane_srt

0x3931,	// (0x0004f2a5) navi_navi_text_pane_srt_t1

0x0d45,	// (0x0004c6b9) navi_navi_volume_pane_srt_g1

0x0d4d,	// (0x0004c6c1) volume_small_pane_srt_ParamLimits

0x0d4d,	// (0x0004c6c1) volume_small_pane_srt

0xf457,	// (0x0005adcb) volume_small_pane_srt_g1_ParamLimits

0xf457,	// (0x0005adcb) volume_small_pane_srt_g1

0xf467,	// (0x0005addb) volume_small_pane_srt_g2_ParamLimits

0xf467,	// (0x0005addb) volume_small_pane_srt_g2

0xf478,	// (0x0005adec) volume_small_pane_srt_g3_ParamLimits

0xf478,	// (0x0005adec) volume_small_pane_srt_g3

0xf489,	// (0x0005adfd) volume_small_pane_srt_g4_ParamLimits

0xf489,	// (0x0005adfd) volume_small_pane_srt_g4

0xf49a,	// (0x0005ae0e) volume_small_pane_srt_g5_ParamLimits

0xf49a,	// (0x0005ae0e) volume_small_pane_srt_g5

0xf4ab,	// (0x0005ae1f) volume_small_pane_srt_g6_ParamLimits

0xf4ab,	// (0x0005ae1f) volume_small_pane_srt_g6

0xf4bc,	// (0x0005ae30) volume_small_pane_srt_g7_ParamLimits

0xf4bc,	// (0x0005ae30) volume_small_pane_srt_g7

0xf4cd,	// (0x0005ae41) volume_small_pane_srt_g8_ParamLimits

0xf4cd,	// (0x0005ae41) volume_small_pane_srt_g8

0xf4de,	// (0x0005ae52) volume_small_pane_srt_g9_ParamLimits

0xf4de,	// (0x0005ae52) volume_small_pane_srt_g9

0xf4ef,	// (0x0005ae63) volume_small_pane_srt_g10_ParamLimits

0xf4ef,	// (0x0005ae63) volume_small_pane_srt_g10

0x0009,

0xf731,	// (0x0005b0a5) volume_small_pane_srt_g_ParamLimits

0xf731,	// (0x0005b0a5) volume_small_pane_srt_g

0x983b,	// (0x000551af) query_popup_data_pane_cp2

0x3917,	// (0x0004f28b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3917,	// (0x0004f28b) navi_navi_icon_text_pane_srt_t1

0x2a7e,	// (0x0004e3f2) navi_tabs_2_long_pane_srt

0x2a7e,	// (0x0004e3f2) navi_tabs_2_pane_srt

0x2a7e,	// (0x0004e3f2) navi_tabs_3_long_pane_srt

0x2a7e,	// (0x0004e3f2) navi_tabs_3_pane_srt

0x2a7e,	// (0x0004e3f2) navi_tabs_4_pane_srt

0xb709,	// (0x0005707d) tabs_2_active_pane_srt_ParamLimits

0xb709,	// (0x0005707d) tabs_2_active_pane_srt

0xb719,	// (0x0005708d) tabs_2_passive_pane_srt_ParamLimits

0xb719,	// (0x0005708d) tabs_2_passive_pane_srt

0x222d,	// (0x0004dba1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x222d,	// (0x0004dba1) bg_passive_tab_pane_cp1_srt

0xcd8c,	// (0x00058700) bg_passive_tab_pane_g1_cp1_srt

0xa3c1,	// (0x00055d35) bg_passive_tab_pane_g2_cp1_srt

0xcd95,	// (0x00058709) bg_passive_tab_pane_g3_cp1_srt

0x9310,	// (0x00054c84) bg_active_tab_pane_cp1_srt_ParamLimits

0x9310,	// (0x00054c84) bg_active_tab_pane_cp1_srt

0xcd9e,	// (0x00058712) tabs_2_active_pane_srt_g1

0xcda6,	// (0x0005871a) tabs_2_active_pane_srt_t1_ParamLimits

0xcda6,	// (0x0005871a) tabs_2_active_pane_srt_t1

0xcd8c,	// (0x00058700) bg_active_tab_pane_g1_cp1_srt

0xa3c1,	// (0x00055d35) bg_active_tab_pane_g2_cp1_srt

0xcd95,	// (0x00058709) bg_active_tab_pane_g3_cp1_srt

0xb6d6,	// (0x0005704a) tabs_3_active_pane_srt_ParamLimits

0xb6d6,	// (0x0005704a) tabs_3_active_pane_srt

0xb6e7,	// (0x0005705b) tabs_3_passive_pane_cp_srt_ParamLimits

0xb6e7,	// (0x0005705b) tabs_3_passive_pane_cp_srt

0xb6f8,	// (0x0005706c) tabs_3_passive_pane_srt_ParamLimits

0xb6f8,	// (0x0005706c) tabs_3_passive_pane_srt

0x222d,	// (0x0004dba1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x222d,	// (0x0004dba1) bg_passive_tab_pane_cp2_srt

0xa555,	// (0x00055ec9) bg_passive_tab_pane_g1_cp2_srt

0xa3c1,	// (0x00055d35) bg_passive_tab_pane_g2_cp2_srt

0xa55e,	// (0x00055ed2) bg_passive_tab_pane_g3_cp2_srt

0x9310,	// (0x00054c84) bg_active_tab_pane_cp2_srt_ParamLimits

0x9310,	// (0x00054c84) bg_active_tab_pane_cp2_srt

0xcd6e,	// (0x000586e2) tabs_3_active_pane_srt_g1

0xcd76,	// (0x000586ea) tabs_3_active_pane_srt_t1_ParamLimits

0xcd76,	// (0x000586ea) tabs_3_active_pane_srt_t1

0xa555,	// (0x00055ec9) bg_active_tab_pane_g1_cp2_srt

0xa3c1,	// (0x00055d35) bg_active_tab_pane_g2_cp2_srt

0xa55e,	// (0x00055ed2) bg_active_tab_pane_g3_cp2_srt

0x0caa,	// (0x0004c61e) tabs_4_active_pane_srt_ParamLimits

0x0caa,	// (0x0004c61e) tabs_4_active_pane_srt

0x0cbc,	// (0x0004c630) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0cbc,	// (0x0004c630) tabs_4_passive_pane_cp2_srt

0xf50f,	// (0x0005ae83) aid_size_cell_toolbar

0x356c,	// (0x0004eee0) main_idle_act_pane_ParamLimits

0x0158,	// (0x0004bacc) popup_large_graphic_colour_window_ParamLimits

0xae76,	// (0x000567ea) popup_toolbar_window_ParamLimits

0xae76,	// (0x000567ea) popup_toolbar_window

0x3720,	// (0x0004f094) list_single_graphic_2heading_pane_ParamLimits

0x3720,	// (0x0004f094) list_single_graphic_2heading_pane

0xa03d,	// (0x000559b1) aid_size_cell_apps_grid_lsc_pane

0xa04f,	// (0x000559c3) aid_size_cell_apps_grid_prt_pane

0x9e84,	// (0x000557f8) bg_wml_button_pane_cp1_ParamLimits

0x9e84,	// (0x000557f8) bg_wml_button_pane_cp1

0xb4a5,	// (0x00056e19) form_midp_field_text_pane_t1_ParamLimits

0x222d,	// (0x0004dba1) input_focus_pane_cp050_ParamLimits

0x249d,	// (0x0004de11) list_midp_form_text_pane_ParamLimits

0x2440,	// (0x0004ddb4) input_focus_pane_cp051_ParamLimits

0x2454,	// (0x0004ddc8) list_midp_choice_pane_ParamLimits

0xb40a,	// (0x00056d7e) list_single_2graphic_pane_cp3_ParamLimits

0xb40a,	// (0x00056d7e) list_single_2graphic_pane_cp3

0xb41e,	// (0x00056d92) list_single_midp_graphic_pane_ParamLimits

0xb41e,	// (0x00056d92) list_single_midp_graphic_pane

0xe91c,	// (0x0005a290) list_single_graphic_2heading_pane_g1_ParamLimits

0xe91c,	// (0x0005a290) list_single_graphic_2heading_pane_g1

0xe928,	// (0x0005a29c) list_single_graphic_2heading_pane_g4_ParamLimits

0xe928,	// (0x0005a29c) list_single_graphic_2heading_pane_g4

0xe934,	// (0x0005a2a8) list_single_graphic_2heading_pane_g5_ParamLimits

0xe934,	// (0x0005a2a8) list_single_graphic_2heading_pane_g5

0x0002,

0xf784,	// (0x0005b0f8) list_single_graphic_2heading_pane_g_ParamLimits

0xf784,	// (0x0005b0f8) list_single_graphic_2heading_pane_g

0xe940,	// (0x0005a2b4) list_single_graphic_2heading_pane_t1_ParamLimits

0xe940,	// (0x0005a2b4) list_single_graphic_2heading_pane_t1

0xe954,	// (0x0005a2c8) list_single_graphic_2heading_pane_t2_ParamLimits

0xe954,	// (0x0005a2c8) list_single_graphic_2heading_pane_t2

0xe96e,	// (0x0005a2e2) list_single_graphic_2heading_pane_t3_ParamLimits

0xe96e,	// (0x0005a2e2) list_single_graphic_2heading_pane_t3

0x0002,

0xf78b,	// (0x0005b0ff) list_single_graphic_2heading_pane_t_ParamLimits

0xf78b,	// (0x0005b0ff) list_single_graphic_2heading_pane_t

0x20df,	// (0x0004da53) bg_popup_sub_pane_cp2

0x2109,	// (0x0004da7d) grid_toobar_pane

0x0891,	// (0x0004c205) cell_toolbar_pane_ParamLimits

0x0891,	// (0x0004c205) cell_toolbar_pane

0x2145,	// (0x0004dab9) cell_toolbar_pane_g1_ParamLimits

0x2145,	// (0x0004dab9) cell_toolbar_pane_g1

0xb322,	// (0x00056c96) cell_toolbar_pane_g2_ParamLimits

0xb322,	// (0x00056c96) cell_toolbar_pane_g2

0x0001,

0xf799,	// (0x0005b10d) cell_toolbar_pane_g_ParamLimits

0xf799,	// (0x0005b10d) cell_toolbar_pane_g

0x217b,	// (0x0004daef) grid_highlight_pane_cp2_ParamLimits

0x217b,	// (0x0004daef) grid_highlight_pane_cp2

0x2195,	// (0x0004db09) toolbar_button_pane

0x21a1,	// (0x0004db15) toolbar_button_pane_g1

0x21a9,	// (0x0004db1d) toolbar_button_pane_g2

0x21b1,	// (0x0004db25) toolbar_button_pane_g3

0x21b9,	// (0x0004db2d) toolbar_button_pane_g4

0x21c1,	// (0x0004db35) toolbar_button_pane_g5

0x21c9,	// (0x0004db3d) toolbar_button_pane_g6

0x21d1,	// (0x0004db45) toolbar_button_pane_g7

0x21d9,	// (0x0004db4d) toolbar_button_pane_g8

0x21e1,	// (0x0004db55) toolbar_button_pane_g9

0x0009,

0xf79e,	// (0x0005b112) toolbar_button_pane_g

0x08d5,	// (0x0004c249) list_single_2graphic_pane_g1_cp3_ParamLimits

0x08d5,	// (0x0004c249) list_single_2graphic_pane_g1_cp3

0xb336,	// (0x00056caa) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb336,	// (0x00056caa) list_single_2graphic_pane_g2_cp3

0xc309,	// (0x00057c7d) list_single_2graphic_pane_g3_cp3

0x08f2,	// (0x0004c266) list_single_2graphic_pane_g4_cp3_ParamLimits

0x08f2,	// (0x0004c266) list_single_2graphic_pane_g4_cp3

0xb347,	// (0x00056cbb) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb347,	// (0x00056cbb) list_single_2graphic_pane_t1_cp3

0xc2fd,	// (0x00057c71) list_single_midp_graphic_pane_g2_ParamLimits

0xc2fd,	// (0x00057c71) list_single_midp_graphic_pane_g2

0xe90c,	// (0x0005a280) aid_zoom_text_primary

0xf517,	// (0x0005ae8b) aid_zoom_text_secondary

0xc5ee,	// (0x00057f62) status_small_pane_g7_ParamLimits

0xc5ee,	// (0x00057f62) status_small_pane_g7

0xa5ba,	// (0x00055f2e) status_small_pane_t1_ParamLimits

0x921c,	// (0x00054b90) title_pane_g2

0x0003,

0xf527,	// (0x0005ae9b) title_pane_g

0x98e3,	// (0x00055257) aid_size_cell_colour_1_pane_ParamLimits

0x98e3,	// (0x00055257) aid_size_cell_colour_1_pane

0x98f7,	// (0x0005526b) aid_size_cell_colour_2_pane_ParamLimits

0x98f7,	// (0x0005526b) aid_size_cell_colour_2_pane

0x990b,	// (0x0005527f) aid_size_cell_colour_3_pane_ParamLimits

0x990b,	// (0x0005527f) aid_size_cell_colour_3_pane

0x991f,	// (0x00055293) aid_size_cell_colour_4_pane_ParamLimits

0x991f,	// (0x00055293) aid_size_cell_colour_4_pane

0xf0fc,	// (0x0005aa70) title_pane_stacon_g1_ParamLimits

0xf0fc,	// (0x0005aa70) title_pane_stacon_g1

0x286d,	// (0x0004e1e1) popup_note_wait_window_g3_ParamLimits

0x286d,	// (0x0004e1e1) popup_note_wait_window_g3

0x28e3,	// (0x0004e257) popup_note_wait_window_t5_ParamLimits

0x28e3,	// (0x0004e257) popup_note_wait_window_t5

0x90bf,	// (0x00054a33) main_feb_china_hwr_fs_writing_pane

0xa82a,	// (0x0005619e) popup_feb_china_hwr_fs_window_ParamLimits

0xa82a,	// (0x0005619e) popup_feb_china_hwr_fs_window

0xb363,	// (0x00056cd7) aid_size_cell_hwr_fs_ParamLimits

0xb363,	// (0x00056cd7) aid_size_cell_hwr_fs

0x222d,	// (0x0004dba1) bg_popup_sub_pane_cp3_ParamLimits

0x222d,	// (0x0004dba1) bg_popup_sub_pane_cp3

0xb378,	// (0x00056cec) grid_hwr_fs_pane_ParamLimits

0xb378,	// (0x00056cec) grid_hwr_fs_pane

0x095d,	// (0x0004c2d1) linegrid_hwr_fs_pane_ParamLimits

0x095d,	// (0x0004c2d1) linegrid_hwr_fs_pane

0xb390,	// (0x00056d04) cell_hwr_fs_pane_ParamLimits

0xb390,	// (0x00056d04) cell_hwr_fs_pane

0x2239,	// (0x0004dbad) linegrid_hwr_fs_pane_g1_ParamLimits

0x2239,	// (0x0004dbad) linegrid_hwr_fs_pane_g1

0xb3b6,	// (0x00056d2a) linegrid_hwr_fs_pane_g2_ParamLimits

0xb3b6,	// (0x00056d2a) linegrid_hwr_fs_pane_g2

0x2257,	// (0x0004dbcb) linegrid_hwr_fs_pane_g3_ParamLimits

0x2257,	// (0x0004dbcb) linegrid_hwr_fs_pane_g3

0xb3c8,	// (0x00056d3c) linegrid_hwr_fs_pane_g4_ParamLimits

0xb3c8,	// (0x00056d3c) linegrid_hwr_fs_pane_g4

0x09a9,	// (0x0004c31d) linegrid_hwr_fs_pane_g5_ParamLimits

0x09a9,	// (0x0004c31d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c4,	// (0x0005b138) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c4,	// (0x0005b138) linegrid_hwr_fs_pane_g

0x2263,	// (0x0004dbd7) cell_hwr_fs_pane_g1_ParamLimits

0x2263,	// (0x0004dbd7) cell_hwr_fs_pane_g1

0x2019,	// (0x0004d98d) cell_hwr_fs_pane_g2_ParamLimits

0x2019,	// (0x0004d98d) cell_hwr_fs_pane_g2

0xb3e2,	// (0x00056d56) cell_hwr_fs_pane_g3_ParamLimits

0xb3e2,	// (0x00056d56) cell_hwr_fs_pane_g3

0xb3ef,	// (0x00056d63) cell_hwr_fs_pane_g4_ParamLimits

0xb3ef,	// (0x00056d63) cell_hwr_fs_pane_g4

0x0003,

0xf7cf,	// (0x0005b143) cell_hwr_fs_pane_g_ParamLimits

0xf7cf,	// (0x0005b143) cell_hwr_fs_pane_g

0xb3fc,	// (0x00056d70) cell_hwr_fs_pane_t1

0x90bf,	// (0x00054a33) grid_highlight_pane_cp6

0x90bf,	// (0x00054a33) main_idle_act2_pane

0x9e05,	// (0x00055779) aid_inside_area_popup_secondary

0xc8a4,	// (0x00058218) aid_inside_area_window_primary_ParamLimits

0xc8a4,	// (0x00058218) aid_inside_area_window_primary

0xcdc4,	// (0x00058738) ai2_news_ticker_pane

0x3a38,	// (0x0004f3ac) aid_size_cell_ai1_link_ParamLimits

0x3a38,	// (0x0004f3ac) aid_size_cell_ai1_link

0xcdcc,	// (0x00058740) popup_ai2_data_window_ParamLimits

0xcdcc,	// (0x00058740) popup_ai2_data_window

0x3a68,	// (0x0004f3dc) popup_ai2_link_window_ParamLimits

0x3a68,	// (0x0004f3dc) popup_ai2_link_window

0x222d,	// (0x0004dba1) bg_popup_sub_pane_cp4_ParamLimits

0x222d,	// (0x0004dba1) bg_popup_sub_pane_cp4

0x3a7c,	// (0x0004f3f0) grid_ai2_link_pane_ParamLimits

0x3a7c,	// (0x0004f3f0) grid_ai2_link_pane

0x3a93,	// (0x0004f407) popup_ai2_link_window_g1_ParamLimits

0x3a93,	// (0x0004f407) popup_ai2_link_window_g1

0x3a9f,	// (0x0004f413) popup_ai2_link_window_g2_ParamLimits

0x3a9f,	// (0x0004f413) popup_ai2_link_window_g2

0x0001,

0xf9a2,	// (0x0005b316) popup_ai2_link_window_g_ParamLimits

0xf9a2,	// (0x0005b316) popup_ai2_link_window_g

0x3aae,	// (0x0004f422) ai2_mp_button_pane

0x3ab6,	// (0x0004f42a) ai2_mp_volume_pane

0x2440,	// (0x0004ddb4) bg_popup_sub_pane_cp5_ParamLimits

0x2440,	// (0x0004ddb4) bg_popup_sub_pane_cp5

0x3abe,	// (0x0004f432) heading_ai2_gene_pane_ParamLimits

0x3abe,	// (0x0004f432) heading_ai2_gene_pane

0x3aca,	// (0x0004f43e) list_ai2_gene_pane_ParamLimits

0x3aca,	// (0x0004f43e) list_ai2_gene_pane

0x3b12,	// (0x0004f486) cell_ai2_link_pane_ParamLimits

0x3b12,	// (0x0004f486) cell_ai2_link_pane

0x3b28,	// (0x0004f49c) cell_ai2_link_pane_g1

0x90bf,	// (0x00054a33) grid_highlight_pane_cp7

0x0d62,	// (0x0004c6d6) ai2_mp_volume_pane_g1

0x3bf8,	// (0x0004f56c) ai2_mp_volume_pane_g2

0x3b6d,	// (0x0004f4e1) list_ai2_gene_pane_t1

0x3c00,	// (0x0004f574) ai2_mp_volume_pane_g3

0x0002,

0xf9bb,	// (0x0005b32f) ai2_mp_volume_pane_g

0xb729,	// (0x0005709d) volume_small_pane_cp3

0x3c08,	// (0x0004f57c) aid_size_cell_ai2_button

0x3c10,	// (0x0004f584) grid_ai2_button_pane

0x3c19,	// (0x0004f58d) cell_ai2_button_pane_ParamLimits

0x3c19,	// (0x0004f58d) cell_ai2_button_pane

0x8e73,	// (0x000547e7) cell_ai2_button_pane_g1

0x90bf,	// (0x00054a33) grid_highlight_pane_cp8

0x3bb8,	// (0x0004f52c) ai2_gene_pane_t1_ParamLimits

0x3bb8,	// (0x0004f52c) ai2_gene_pane_t1

0xa78c,	// (0x00056100) aid_height_parent_landscape

0xcaf2,	// (0x00058466) aid_height_set_list

0x356c,	// (0x0004eee0) aid_size_parent

0x3853,	// (0x0004f1c7) aid_size_cell_graphic_pane_ParamLimits

0x3ada,	// (0x0004f44e) popup_ai2_data_window_g1_ParamLimits

0x3ada,	// (0x0004f44e) popup_ai2_data_window_g1

0x3ae6,	// (0x0004f45a) ai2_news_ticker_pane_g1

0x3aee,	// (0x0004f462) ai2_news_ticker_pane_g2

0x0001,

0xf9a7,	// (0x0005b31b) ai2_news_ticker_pane_g

0x3af6,	// (0x0004f46a) ai2_news_ticker_pane_t1

0x3b04,	// (0x0004f478) ai2_news_ticker_pane_t2

0x0001,

0xf9ac,	// (0x0005b320) ai2_news_ticker_pane_t

0x3b31,	// (0x0004f4a5) heading_ai2_gene_pane_g1

0x3b39,	// (0x0004f4ad) heading_ai2_gene_pane_t1_ParamLimits

0x3b39,	// (0x0004f4ad) heading_ai2_gene_pane_t1

0x3b4e,	// (0x0004f4c2) list_highlight_pane_cp6

0x3b56,	// (0x0004f4ca) ai2_gene_pane_ParamLimits

0x3b56,	// (0x0004f4ca) ai2_gene_pane

0x3b7b,	// (0x0004f4ef) list_ai2_gene_pane_t2

0x0001,

0xf9b1,	// (0x0005b325) list_ai2_gene_pane_t

0x3b89,	// (0x0004f4fd) list_highlight_pane_cp8_ParamLimits

0x3b89,	// (0x0004f4fd) list_highlight_pane_cp8

0x3b9a,	// (0x0004f50e) ai2_gene_pane_g1_ParamLimits

0x3b9a,	// (0x0004f50e) ai2_gene_pane_g1

0x3bac,	// (0x0004f520) ai2_gene_pane_g2_ParamLimits

0x3bac,	// (0x0004f520) ai2_gene_pane_g2

0x0001,

0xf9b6,	// (0x0005b32a) ai2_gene_pane_g_ParamLimits

0xf9b6,	// (0x0005b32a) ai2_gene_pane_g

0x9bee,	// (0x00055562) scroll_pane_cp12

0xa749,	// (0x000560bd) control_pane_t3_ParamLimits

0xa749,	// (0x000560bd) control_pane_t3

0xa5ab,	// (0x00055f1f) status_small_pane_g8_ParamLimits

0xa5ab,	// (0x00055f1f) status_small_pane_g8

0xa8ed,	// (0x00056261) popup_find_window_ParamLimits

0xab7a,	// (0x000564ee) popup_note_image_window_ParamLimits

0xe986,	// (0x0005a2fa) list_double2_graphic_pane_vc_g1_ParamLimits

0xe986,	// (0x0005a2fa) list_double2_graphic_pane_vc_g1

0xbf9d,	// (0x00057911) list_double2_graphic_pane_vc_g2_ParamLimits

0xbf9d,	// (0x00057911) list_double2_graphic_pane_vc_g2

0x08c1,	// (0x0004c235) list_double2_graphic_pane_vc_g3_ParamLimits

0x08c1,	// (0x0004c235) list_double2_graphic_pane_vc_g3

0x0002,

0xf792,	// (0x0005b106) list_double2_graphic_pane_vc_g_ParamLimits

0xf792,	// (0x0005b106) list_double2_graphic_pane_vc_g

0xe992,	// (0x0005a306) list_double2_graphic_pane_vc_t1_ParamLimits

0xe992,	// (0x0005a306) list_double2_graphic_pane_vc_t1

0xbf9d,	// (0x00057911) list_single_heading_pane_vc_g1_ParamLimits

0xbf9d,	// (0x00057911) list_single_heading_pane_vc_g1

0x08c1,	// (0x0004c235) list_single_heading_pane_vc_g2_ParamLimits

0x08c1,	// (0x0004c235) list_single_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x0005af1f) list_single_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x0005af1f) list_single_heading_pane_vc_g

0xe9a8,	// (0x0005a31c) list_single_heading_pane_vc_t1_ParamLimits

0xe9a8,	// (0x0005a31c) list_single_heading_pane_vc_t1

0xe9be,	// (0x0005a332) list_single_heading_pane_vc_t2_ParamLimits

0xe9be,	// (0x0005a332) list_single_heading_pane_vc_t2

0x0001,

0xf7b3,	// (0x0005b127) list_single_heading_pane_vc_t_ParamLimits

0xf7b3,	// (0x0005b127) list_single_heading_pane_vc_t

0x21e9,	// (0x0004db5d) list_setting_number_pane_vc_g1_ParamLimits

0x21e9,	// (0x0004db5d) list_setting_number_pane_vc_g1

0x21f5,	// (0x0004db69) list_setting_number_pane_vc_g2_ParamLimits

0x21f5,	// (0x0004db69) list_setting_number_pane_vc_g2

0x0001,

0xf7b8,	// (0x0005b12c) list_setting_number_pane_vc_g_ParamLimits

0xf7b8,	// (0x0005b12c) list_setting_number_pane_vc_g

0xe9d4,	// (0x0005a348) list_setting_number_pane_vc_t1_ParamLimits

0xe9d4,	// (0x0005a348) list_setting_number_pane_vc_t1

0xe9e8,	// (0x0005a35c) list_setting_number_pane_vc_t2_ParamLimits

0xe9e8,	// (0x0005a35c) list_setting_number_pane_vc_t2

0xea04,	// (0x0005a378) list_setting_number_pane_vc_t3_ParamLimits

0xea04,	// (0x0005a378) list_setting_number_pane_vc_t3

0x0002,

0xf7bd,	// (0x0005b131) list_setting_number_pane_vc_t_ParamLimits

0xf7bd,	// (0x0005b131) list_setting_number_pane_vc_t

0xea2e,	// (0x0005a3a2) set_value_pane_vc_ParamLimits

0xea2e,	// (0x0005a3a2) set_value_pane_vc

0x3720,	// (0x0004f094) list_double2_graphic_pane_vc_ParamLimits

0x3720,	// (0x0004f094) list_double2_graphic_pane_vc

0x0c1b,	// (0x0004c58f) list_double2_large_graphic_pane_vc_ParamLimits

0x0c1b,	// (0x0004c58f) list_double2_large_graphic_pane_vc

0x3720,	// (0x0004f094) list_double2_pane_vc_ParamLimits

0x3720,	// (0x0004f094) list_double2_pane_vc

0x3720,	// (0x0004f094) list_double_graphic_heading_pane_vc_ParamLimits

0x3720,	// (0x0004f094) list_double_graphic_heading_pane_vc

0x3720,	// (0x0004f094) list_double_graphic_pane_vc_ParamLimits

0x3720,	// (0x0004f094) list_double_graphic_pane_vc

0x3720,	// (0x0004f094) list_double_heading_pane_vc_ParamLimits

0x3720,	// (0x0004f094) list_double_heading_pane_vc

0x0c2d,	// (0x0004c5a1) list_double_large_graphic_pane_vc_ParamLimits

0x0c2d,	// (0x0004c5a1) list_double_large_graphic_pane_vc

0x3720,	// (0x0004f094) list_double_number_pane_vc_ParamLimits

0x3720,	// (0x0004f094) list_double_number_pane_vc

0x3720,	// (0x0004f094) list_double_pane_vc_ParamLimits

0x3720,	// (0x0004f094) list_double_pane_vc

0x3720,	// (0x0004f094) list_double_time_pane_vc_ParamLimits

0x3720,	// (0x0004f094) list_double_time_pane_vc

0x3720,	// (0x0004f094) list_setting_number_pane_vc_ParamLimits

0x3720,	// (0x0004f094) list_setting_number_pane_vc

0x3720,	// (0x0004f094) list_setting_pane_vc_ParamLimits

0x3720,	// (0x0004f094) list_setting_pane_vc

0x3720,	// (0x0004f094) list_single_graphic_heading_pane_vc_ParamLimits

0x3720,	// (0x0004f094) list_single_graphic_heading_pane_vc

0x3720,	// (0x0004f094) list_single_heading_pane_vc_ParamLimits

0x3720,	// (0x0004f094) list_single_heading_pane_vc

0x3720,	// (0x0004f094) list_single_number_heading_pane_vc_ParamLimits

0x3720,	// (0x0004f094) list_single_number_heading_pane_vc

0xea4d,	// (0x0005a3c1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xea4d,	// (0x0005a3c1) list_double_graphic_heading_pane_vc_g1

0xf43f,	// (0x0005adb3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xf43f,	// (0x0005adb3) list_double_graphic_heading_pane_vc_g2

0xf44b,	// (0x0005adbf) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xf44b,	// (0x0005adbf) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c2,	// (0x0005b336) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c2,	// (0x0005b336) list_double_graphic_heading_pane_vc_g

0xea59,	// (0x0005a3cd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xea59,	// (0x0005a3cd) list_double_graphic_heading_pane_vc_t1

0xea6d,	// (0x0005a3e1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xea6d,	// (0x0005a3e1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c9,	// (0x0005b33d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c9,	// (0x0005b33d) list_double_graphic_heading_pane_vc_t

0x21e9,	// (0x0004db5d) list_setting_pane_vc_g1_ParamLimits

0x21e9,	// (0x0004db5d) list_setting_pane_vc_g1

0x21f5,	// (0x0004db69) list_setting_pane_vc_g2_ParamLimits

0x21f5,	// (0x0004db69) list_setting_pane_vc_g2

0x0001,

0xf7b8,	// (0x0005b12c) list_setting_pane_vc_g_ParamLimits

0xf7b8,	// (0x0005b12c) list_setting_pane_vc_g

0xea85,	// (0x0005a3f9) list_setting_pane_vc_t1_ParamLimits

0xea85,	// (0x0005a3f9) list_setting_pane_vc_t1

0xeaa1,	// (0x0005a415) list_setting_pane_vc_t2_ParamLimits

0xeaa1,	// (0x0005a415) list_setting_pane_vc_t2

0x0001,

0xfa0c,	// (0x0005b380) list_setting_pane_vc_t_ParamLimits

0xfa0c,	// (0x0005b380) list_setting_pane_vc_t

0xea2e,	// (0x0005a3a2) set_value_pane_cp_vc_ParamLimits

0xea2e,	// (0x0005a3a2) set_value_pane_cp_vc

0xbf9d,	// (0x00057911) list_single_number_heading_pane_vc_g1_ParamLimits

0xbf9d,	// (0x00057911) list_single_number_heading_pane_vc_g1

0x08c1,	// (0x0004c235) list_single_number_heading_pane_vc_g2_ParamLimits

0x08c1,	// (0x0004c235) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x0005af1f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x0005af1f) list_single_number_heading_pane_vc_g

0xe835,	// (0x0005a1a9) list_single_number_heading_pane_vc_t1_ParamLimits

0xe835,	// (0x0005a1a9) list_single_number_heading_pane_vc_t1

0xeabb,	// (0x0005a42f) list_single_number_heading_pane_vc_t2_ParamLimits

0xeabb,	// (0x0005a42f) list_single_number_heading_pane_vc_t2

0xead1,	// (0x0005a445) list_single_number_heading_pane_vc_t3_ParamLimits

0xead1,	// (0x0005a445) list_single_number_heading_pane_vc_t3

0x0002,

0xfa11,	// (0x0005b385) list_single_number_heading_pane_vc_t_ParamLimits

0xfa11,	// (0x0005b385) list_single_number_heading_pane_vc_t

0xeae3,	// (0x0005a457) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeae3,	// (0x0005a457) list_single_graphic_heading_pane_vc_g1

0xbf9d,	// (0x00057911) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xbf9d,	// (0x00057911) list_single_graphic_heading_pane_vc_g4

0x08c1,	// (0x0004c235) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x08c1,	// (0x0004c235) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa18,	// (0x0005b38c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa18,	// (0x0005b38c) list_single_graphic_heading_pane_vc_g

0xe835,	// (0x0005a1a9) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe835,	// (0x0005a1a9) list_single_graphic_heading_pane_vc_t1

0xeaef,	// (0x0005a463) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xeaef,	// (0x0005a463) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1f,	// (0x0005b393) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x0005b393) list_single_graphic_heading_pane_vc_t

0xbf9d,	// (0x00057911) list_double2_pane_vc_g1_ParamLimits

0xbf9d,	// (0x00057911) list_double2_pane_vc_g1

0x08c1,	// (0x0004c235) list_double2_pane_vc_g2_ParamLimits

0x08c1,	// (0x0004c235) list_double2_pane_vc_g2

0x0001,

0xf5ab,	// (0x0005af1f) list_double2_pane_vc_g_ParamLimits

0xf5ab,	// (0x0005af1f) list_double2_pane_vc_g

0xeb01,	// (0x0005a475) list_double2_pane_vc_t1_ParamLimits

0xeb01,	// (0x0005a475) list_double2_pane_vc_t1

0x0dc4,	// (0x0004c738) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0dc4,	// (0x0004c738) list_double2_large_graphic_pane_vc_g1

0xf088,	// (0x0005a9fc) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf088,	// (0x0005a9fc) list_double2_large_graphic_pane_vc_g2

0xf094,	// (0x0005aa08) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf094,	// (0x0005aa08) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c3,	// (0x0005af37) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c3,	// (0x0005af37) list_double2_large_graphic_pane_vc_g

0xe84b,	// (0x0005a1bf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe84b,	// (0x0005a1bf) list_double2_large_graphic_pane_vc_t1

0x0dd0,	// (0x0004c744) list_double_time_pane_vc_g1_ParamLimits

0x0dd0,	// (0x0004c744) list_double_time_pane_vc_g1

0x0ddc,	// (0x0004c750) list_double_time_pane_vc_g2_ParamLimits

0x0ddc,	// (0x0004c750) list_double_time_pane_vc_g2

0x0001,

0xfa24,	// (0x0005b398) list_double_time_pane_vc_g_ParamLimits

0xfa24,	// (0x0005b398) list_double_time_pane_vc_g

0xeb19,	// (0x0005a48d) list_double_time_pane_vc_t1_ParamLimits

0xeb19,	// (0x0005a48d) list_double_time_pane_vc_t1

0xeb3d,	// (0x0005a4b1) list_double_time_pane_vc_t2_ParamLimits

0xeb3d,	// (0x0005a4b1) list_double_time_pane_vc_t2

0xeb8c,	// (0x0005a500) list_double_time_pane_vc_t3_ParamLimits

0xeb8c,	// (0x0005a500) list_double_time_pane_vc_t3

0xeb9e,	// (0x0005a512) list_double_time_pane_vc_t4_ParamLimits

0xeb9e,	// (0x0005a512) list_double_time_pane_vc_t4

0x0003,

0xfa29,	// (0x0005b39d) list_double_time_pane_vc_t_ParamLimits

0xfa29,	// (0x0005b39d) list_double_time_pane_vc_t

0xbf9d,	// (0x00057911) list_double_pane_vc_g1_ParamLimits

0xbf9d,	// (0x00057911) list_double_pane_vc_g1

0x08c1,	// (0x0004c235) list_double_pane_vc_g2_ParamLimits

0x08c1,	// (0x0004c235) list_double_pane_vc_g2

0x0001,

0xf5ab,	// (0x0005af1f) list_double_pane_vc_g_ParamLimits

0xf5ab,	// (0x0005af1f) list_double_pane_vc_g

0xebb2,	// (0x0005a526) list_double_pane_vc_t1_ParamLimits

0xebb2,	// (0x0005a526) list_double_pane_vc_t1

0xebc6,	// (0x0005a53a) list_double_pane_vc_t2_ParamLimits

0xebc6,	// (0x0005a53a) list_double_pane_vc_t2

0x0001,

0xfa32,	// (0x0005b3a6) list_double_pane_vc_t_ParamLimits

0xfa32,	// (0x0005b3a6) list_double_pane_vc_t

0xbf9d,	// (0x00057911) list_double_number_pane_vc_g1_ParamLimits

0xbf9d,	// (0x00057911) list_double_number_pane_vc_g1

0x08c1,	// (0x0004c235) list_double_number_pane_vc_g2_ParamLimits

0x08c1,	// (0x0004c235) list_double_number_pane_vc_g2

0x0001,

0xf5ab,	// (0x0005af1f) list_double_number_pane_vc_g_ParamLimits

0xf5ab,	// (0x0005af1f) list_double_number_pane_vc_g

0xebde,	// (0x0005a552) list_double_number_pane_vc_t1_ParamLimits

0xebde,	// (0x0005a552) list_double_number_pane_vc_t1

0xebb2,	// (0x0005a526) list_double_number_pane_vc_t2_ParamLimits

0xebb2,	// (0x0005a526) list_double_number_pane_vc_t2

0xebf0,	// (0x0005a564) list_double_number_pane_vc_t3_ParamLimits

0xebf0,	// (0x0005a564) list_double_number_pane_vc_t3

0x0002,

0xfa37,	// (0x0005b3ab) list_double_number_pane_vc_t_ParamLimits

0xfa37,	// (0x0005b3ab) list_double_number_pane_vc_t

0x0de8,	// (0x0004c75c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0de8,	// (0x0004c75c) list_double_large_graphic_pane_vc_g1

0x0e04,	// (0x0004c778) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0e04,	// (0x0004c778) list_double_large_graphic_pane_vc_g2

0x0e18,	// (0x0004c78c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0e18,	// (0x0004c78c) list_double_large_graphic_pane_vc_g3

0xec0a,	// (0x0005a57e) list_double_large_graphic_pane_vc_g4_ParamLimits

0xec0a,	// (0x0005a57e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3e,	// (0x0005b3b2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x0005b3b2) list_double_large_graphic_pane_vc_g

0xec19,	// (0x0005a58d) list_double_large_graphic_pane_vc_t1_ParamLimits

0xec19,	// (0x0005a58d) list_double_large_graphic_pane_vc_t1

0xec35,	// (0x0005a5a9) list_double_large_graphic_pane_vc_t2_ParamLimits

0xec35,	// (0x0005a5a9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa47,	// (0x0005b3bb) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa47,	// (0x0005b3bb) list_double_large_graphic_pane_vc_t

0xf43f,	// (0x0005adb3) list_double_heading_pane_vc_g1_ParamLimits

0xf43f,	// (0x0005adb3) list_double_heading_pane_vc_g1

0xf44b,	// (0x0005adbf) list_double_heading_pane_vc_g2_ParamLimits

0xf44b,	// (0x0005adbf) list_double_heading_pane_vc_g2

0x0001,

0xfa4c,	// (0x0005b3c0) list_double_heading_pane_vc_g_ParamLimits

0xfa4c,	// (0x0005b3c0) list_double_heading_pane_vc_g

0xec57,	// (0x0005a5cb) list_double_heading_pane_vc_t1_ParamLimits

0xec57,	// (0x0005a5cb) list_double_heading_pane_vc_t1

0xec6b,	// (0x0005a5df) list_double_heading_pane_vc_t2_ParamLimits

0xec6b,	// (0x0005a5df) list_double_heading_pane_vc_t2

0x0001,

0xfa51,	// (0x0005b3c5) list_double_heading_pane_vc_t_ParamLimits

0xfa51,	// (0x0005b3c5) list_double_heading_pane_vc_t

0xec83,	// (0x0005a5f7) list_double_graphic_pane_vc_g1_ParamLimits

0xec83,	// (0x0005a5f7) list_double_graphic_pane_vc_g1

0x0e27,	// (0x0004c79b) list_double_graphic_pane_vc_g2_ParamLimits

0x0e27,	// (0x0004c79b) list_double_graphic_pane_vc_g2

0xbf9d,	// (0x00057911) list_double_graphic_pane_vc_g3_ParamLimits

0xbf9d,	// (0x00057911) list_double_graphic_pane_vc_g3

0x0003,

0xfa56,	// (0x0005b3ca) list_double_graphic_pane_vc_g_ParamLimits

0xfa56,	// (0x0005b3ca) list_double_graphic_pane_vc_g

0xec96,	// (0x0005a60a) list_double_graphic_pane_vc_t1_ParamLimits

0xec96,	// (0x0005a60a) list_double_graphic_pane_vc_t1

0xecb5,	// (0x0005a629) list_double_graphic_pane_vc_t2_ParamLimits

0xecb5,	// (0x0005a629) list_double_graphic_pane_vc_t2

0x0001,

0xfa5f,	// (0x0005b3d3) list_double_graphic_pane_vc_t_ParamLimits

0xfa5f,	// (0x0005b3d3) list_double_graphic_pane_vc_t

0xe7f4,	// (0x0005a168) aid_size_cell_fastswap

0x8e7d,	// (0x000547f1) aid_size_cell_touch_ParamLimits

0x8e7d,	// (0x000547f1) aid_size_cell_touch

0xe7fc,	// (0x0005a170) popup_fast_swap_wide_window_ParamLimits

0xe7fc,	// (0x0005a170) popup_fast_swap_wide_window

0x91b3,	// (0x00054b27) touch_pane_ParamLimits

0x91b3,	// (0x00054b27) touch_pane

0x9c8c,	// (0x00055600) button_value_adjust_pane_cp2

0xe87b,	// (0x0005a1ef) button_value_adjust_pane_cp4

0xe883,	// (0x0005a1f7) form_field_data_pane_cp2

0x8a44,	// (0x000543b8) form_field_data_wide_pane_cp2

0xa14a,	// (0x00055abe) bg_scroll_pane_ParamLimits

0xa169,	// (0x00055add) scroll_handle_pane_ParamLimits

0xf255,	// (0x0005abc9) scroll_sc2_down_pane_ParamLimits

0xf255,	// (0x0005abc9) scroll_sc2_down_pane

0xa18f,	// (0x00055b03) scroll_sc2_up_pane_ParamLimits

0xa18f,	// (0x00055b03) scroll_sc2_up_pane

0xcf15,	// (0x00058889) grid_wheel_folder_pane_g1_ParamLimits

0xcf15,	// (0x00058889) grid_wheel_folder_pane_g1

0xf3d7,	// (0x0005ad4b) clock_nsta_pane_cp2_ParamLimits

0xf3d7,	// (0x0005ad4b) clock_nsta_pane_cp2

0xa48f,	// (0x00055e03) listscroll_midp_pane_ParamLimits

0xa49b,	// (0x00055e0f) midp_canvas_pane

0xc610,	// (0x00057f84) nsta_clock_indic_pane

0xc638,	// (0x00057fac) listscroll_form_pane_vc

0xc640,	// (0x00057fb4) listscroll_set_pane_vc_ParamLimits

0xc640,	// (0x00057fb4) listscroll_set_pane_vc

0xb02f,	// (0x000569a3) clock_nsta_pane

0xb059,	// (0x000569cd) indicator_nsta_pane

0x20df,	// (0x0004da53) bg_popup_sub_pane_cp2_ParamLimits

0x20f3,	// (0x0004da67) find_pane_cp2_ParamLimits

0x20f3,	// (0x0004da67) find_pane_cp2

0x2109,	// (0x0004da7d) grid_toobar_pane_ParamLimits

0x2201,	// (0x0004db75) list_form_gen_pane_vc_ParamLimits

0x2201,	// (0x0004db75) list_form_gen_pane_vc

0x2217,	// (0x0004db8b) scroll_pane_cp8_vc_ParamLimits

0x2217,	// (0x0004db8b) scroll_pane_cp8_vc

0x2293,	// (0x0004dc07) data_form_wide_pane_vc_ParamLimits

0x2293,	// (0x0004dc07) data_form_wide_pane_vc

0x229f,	// (0x0004dc13) form_field_data_wide_pane_vc_g1

0x22a7,	// (0x0004dc1b) form_field_data_wide_pane_vc_t1_ParamLimits

0x22a7,	// (0x0004dc1b) form_field_data_wide_pane_vc_t1

0x9ca0,	// (0x00055614) input_focus_pane_cp6_vc_ParamLimits

0x9ca0,	// (0x00055614) input_focus_pane_cp6_vc

0x25f4,	// (0x0004df68) list_midp_pane_ParamLimits

0x38bd,	// (0x0004f231) scroll_pane_cp16_ParamLimits

0x38bd,	// (0x0004f231) scroll_pane_cp16

0x264a,	// (0x0004dfbe) button_value_adjust_pane_ParamLimits

0x264a,	// (0x0004dfbe) button_value_adjust_pane

0xcb03,	// (0x00058477) button_value_adjust_pane_cp6_ParamLimits

0xcb03,	// (0x00058477) button_value_adjust_pane_cp6

0xcc1d,	// (0x00058591) settings_code_pane_cp_ParamLimits

0xcc1d,	// (0x00058591) settings_code_pane_cp

0x8e73,	// (0x000547e7) cell_touch_pane_g1

0x8e73,	// (0x000547e7) cell_touch_pane_g2

0x0001,

0xf6d7,	// (0x0005b04b) cell_touch_pane_g

0xcde2,	// (0x00058756) cell_touch_pane_cp_ParamLimits

0xcde2,	// (0x00058756) cell_touch_pane_cp

0xcdfe,	// (0x00058772) cell_touch_pane_ParamLimits

0xcdfe,	// (0x00058772) cell_touch_pane

0x8e73,	// (0x000547e7) scroll_sc2_down_pane_g1

0x8e73,	// (0x000547e7) scroll_sc2_up_pane_g1

0x90bf,	// (0x00054a33) bg_set_opt_pane_cp4_vc

0x3c4d,	// (0x0004f5c1) list_set_graphic_pane_vc_g1_ParamLimits

0x3c4d,	// (0x0004f5c1) list_set_graphic_pane_vc_g1

0x3c59,	// (0x0004f5cd) list_set_graphic_pane_vc_g2_ParamLimits

0x3c59,	// (0x0004f5cd) list_set_graphic_pane_vc_g2

0x0001,

0xf9ce,	// (0x0005b342) list_set_graphic_pane_vc_g_ParamLimits

0xf9ce,	// (0x0005b342) list_set_graphic_pane_vc_g

0x3c65,	// (0x0004f5d9) text_primary_small_cp13_vc_ParamLimits

0x3c65,	// (0x0004f5d9) text_primary_small_cp13_vc

0x3c7d,	// (0x0004f5f1) list_set_graphic_pane_vc_ParamLimits

0x3c7d,	// (0x0004f5f1) list_set_graphic_pane_vc

0x90bf,	// (0x00054a33) input_focus_pane_cp2_vc

0x8e73,	// (0x000547e7) setting_code_pane_vc_g1

0x93fa,	// (0x00054d6e) setting_code_pane_vc_t1

0x3c90,	// (0x0004f604) set_text_pane_vc_t1_ParamLimits

0x3c90,	// (0x0004f604) set_text_pane_vc_t1

0x90bf,	// (0x00054a33) input_focus_pane_cp1_vc

0x3cad,	// (0x0004f621) list_set_text_pane_vc

0x8e73,	// (0x000547e7) setting_text_pane_vc_g1

0x90bf,	// (0x00054a33) bg_set_opt_pane_cp2_vc

0x93c9,	// (0x00054d3d) setting_slider_graphic_pane_vc_g1

0x3cb7,	// (0x0004f62b) setting_slider_graphic_pane_vc_t1

0x3cc7,	// (0x0004f63b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d3,	// (0x0005b347) setting_slider_graphic_pane_vc_t

0x3cd7,	// (0x0004f64b) slider_set_pane_cp_vc

0x3cdf,	// (0x0004f653) slider_set_pane_vc_g1

0x3ce8,	// (0x0004f65c) slider_set_pane_vc_g2

0x0006,

0xf9d8,	// (0x0005b34c) slider_set_pane_vc_g

0x9cf8,	// (0x0005566c) set_opt_bg_pane_g1_copy1

0x9d00,	// (0x00055674) set_opt_bg_pane_g2_copy1

0x3d14,	// (0x0004f688) set_opt_bg_pane_g3_copy1

0x9d10,	// (0x00055684) set_opt_bg_pane_g4_copy1

0x9d18,	// (0x0005568c) set_opt_bg_pane_g5_copy1

0x9d20,	// (0x00055694) set_opt_bg_pane_g6_copy1

0x3d1c,	// (0x0004f690) set_opt_bg_pane_g7_copy1

0x3d26,	// (0x0004f69a) set_opt_bg_pane_g8_copy1

0x3d2e,	// (0x0004f6a2) set_opt_bg_pane_g9_copy1

0x90bf,	// (0x00054a33) bg_set_opt_pane_cp_vc

0x3d36,	// (0x0004f6aa) setting_slider_pane_vc_t1

0x3d45,	// (0x0004f6b9) setting_slider_pane_vc_t2

0x3d55,	// (0x0004f6c9) setting_slider_pane_vc_t3

0x0002,

0xf9e7,	// (0x0005b35b) setting_slider_pane_vc_t

0x3d65,	// (0x0004f6d9) slider_set_pane_vc

0x09cd,	// (0x0004c341) volume_set_pane_vc_g1

0x0d73,	// (0x0004c6e7) volume_set_pane_vc_g2

0x0d7c,	// (0x0004c6f0) volume_set_pane_vc_g3

0x0d85,	// (0x0004c6f9) volume_set_pane_vc_g4

0x0d8e,	// (0x0004c702) volume_set_pane_vc_g5

0x0d97,	// (0x0004c70b) volume_set_pane_vc_g6

0x0da0,	// (0x0004c714) volume_set_pane_vc_g7

0x0da9,	// (0x0004c71d) volume_set_pane_vc_g8

0x0db2,	// (0x0004c726) volume_set_pane_vc_g9

0x0dbb,	// (0x0004c72f) volume_set_pane_vc_g10

0x0009,

0xf9ee,	// (0x0005b362) volume_set_pane_vc_g

0x3d6d,	// (0x0004f6e1) volume_set_pane_vc

0x3d77,	// (0x0004f6eb) button_value_adjust_pane_cp1_vc

0x3d81,	// (0x0004f6f5) list_highlight_pane_cp2_vc

0x3d8a,	// (0x0004f6fe) list_set_pane_vc_ParamLimits

0x3d8a,	// (0x0004f6fe) list_set_pane_vc

0x3de8,	// (0x0004f75c) main_pane_set_vc_t1_ParamLimits

0x3de8,	// (0x0004f75c) main_pane_set_vc_t1

0x3dfd,	// (0x0004f771) main_pane_set_vc_t2_ParamLimits

0x3dfd,	// (0x0004f771) main_pane_set_vc_t2

0x3e0f,	// (0x0004f783) main_pane_set_vc_t3_ParamLimits

0x3e0f,	// (0x0004f783) main_pane_set_vc_t3

0x3e21,	// (0x0004f795) main_pane_set_vc_t4_ParamLimits

0x3e21,	// (0x0004f795) main_pane_set_vc_t4

0x0003,

0xfa03,	// (0x0005b377) main_pane_set_vc_t_ParamLimits

0xfa03,	// (0x0005b377) main_pane_set_vc_t

0x3e33,	// (0x0004f7a7) setting_code_pane_vc_ParamLimits

0x3e33,	// (0x0004f7a7) setting_code_pane_vc

0x3e42,	// (0x0004f7b6) setting_slider_graphic_pane_vc

0x3e42,	// (0x0004f7b6) setting_slider_pane_vc

0x3e42,	// (0x0004f7b6) setting_text_pane_vc

0x3e42,	// (0x0004f7b6) setting_volume_pane_vc

0x3e4a,	// (0x0004f7be) scroll_pane_cp121_vc

0x9c7a,	// (0x000555ee) set_content_pane_vc

0x3e52,	// (0x0004f7c6) button_value_adjust_pane_g1

0x3e5b,	// (0x0004f7cf) button_value_adjust_pane_g2

0x0001,

0xfa64,	// (0x0005b3d8) button_value_adjust_pane_g

0x3e64,	// (0x0004f7d8) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3e64,	// (0x0004f7d8) form_field_slider_wide_pane_vc_t1

0x3e78,	// (0x0004f7ec) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3e78,	// (0x0004f7ec) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa69,	// (0x0005b3dd) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa69,	// (0x0005b3dd) form_field_slider_wide_pane_vc_t

0x9310,	// (0x00054c84) input_focus_pane_cp10_vc_ParamLimits

0x9310,	// (0x00054c84) input_focus_pane_cp10_vc

0x3ea6,	// (0x0004f81a) slider_cont_pane_cp1_vc_ParamLimits

0x3ea6,	// (0x0004f81a) slider_cont_pane_cp1_vc

0x3eb8,	// (0x0004f82c) slider_form_pane_g1_cp2

0x3ce8,	// (0x0004f65c) slider_form_pane_g2_cp2

0x3ee5,	// (0x0004f859) form_field_slider_pane_vc_t3

0x3ef3,	// (0x0004f867) form_field_slider_pane_vc_t4

0x3f01,	// (0x0004f875) slider_form_pane_vc_ParamLimits

0x3f01,	// (0x0004f875) slider_form_pane_vc

0x3f0e,	// (0x0004f882) form_field_slider_pane_vc_t1_ParamLimits

0x3f0e,	// (0x0004f882) form_field_slider_pane_vc_t1

0x3e78,	// (0x0004f7ec) form_field_slider_pane_vc_t2_ParamLimits

0x3e78,	// (0x0004f7ec) form_field_slider_pane_vc_t2

0x0001,

0xfa7b,	// (0x0005b3ef) form_field_slider_pane_vc_t_ParamLimits

0xfa7b,	// (0x0005b3ef) form_field_slider_pane_vc_t

0x9310,	// (0x00054c84) input_focus_pane_cp9_vc_ParamLimits

0x9310,	// (0x00054c84) input_focus_pane_cp9_vc

0x3f2a,	// (0x0004f89e) slider_cont_pane_vc_ParamLimits

0x3f2a,	// (0x0004f89e) slider_cont_pane_vc

0x3f3e,	// (0x0004f8b2) list_form_graphic_pane_cp_vc_ParamLimits

0x3f3e,	// (0x0004f8b2) list_form_graphic_pane_cp_vc

0x229f,	// (0x0004dc13) form_field_popup_wide_pane_vc_g1

0x3f53,	// (0x0004f8c7) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3f53,	// (0x0004f8c7) form_field_popup_wide_pane_vc_t1

0x9ca0,	// (0x00055614) input_focus_pane_cp8_vc_ParamLimits

0x9ca0,	// (0x00055614) input_focus_pane_cp8_vc

0x3f98,	// (0x0004f90c) list_form_wide_pane_vc_ParamLimits

0x3f98,	// (0x0004f90c) list_form_wide_pane_vc

0x3fa4,	// (0x0004f918) list_form_graphic_pane_vc_g1

0x3fac,	// (0x0004f920) list_form_graphic_pane_vc_t1_ParamLimits

0x3fac,	// (0x0004f920) list_form_graphic_pane_vc_t1

0x935a,	// (0x00054cce) list_highlight_pane_cp5_vc_ParamLimits

0x935a,	// (0x00054cce) list_highlight_pane_cp5_vc

0x3fc8,	// (0x0004f93c) list_form_graphic_pane_vc_ParamLimits

0x3fc8,	// (0x0004f93c) list_form_graphic_pane_vc

0x229f,	// (0x0004dc13) form_field_popup_pane_vc_g1

0x3fde,	// (0x0004f952) form_field_popup_pane_vc_t1_ParamLimits

0x3fde,	// (0x0004f952) form_field_popup_pane_vc_t1

0x9ca0,	// (0x00055614) input_focus_pane_cp7_vc_ParamLimits

0x9ca0,	// (0x00055614) input_focus_pane_cp7_vc

0x3ff5,	// (0x0004f969) list_form_pane_vc_ParamLimits

0x3ff5,	// (0x0004f969) list_form_pane_vc

0x4001,	// (0x0004f975) data_form_pane_vc_t1_ParamLimits

0x4001,	// (0x0004f975) data_form_pane_vc_t1

0x9cf8,	// (0x0005566c) input_focus_pane_vc_g1

0x9d00,	// (0x00055674) input_focus_pane_vc_g2

0x9d08,	// (0x0005567c) input_focus_pane_vc_g3

0x9d10,	// (0x00055684) input_focus_pane_vc_g4

0x9d18,	// (0x0005568c) input_focus_pane_vc_g5

0x9d20,	// (0x00055694) input_focus_pane_vc_g6

0x9d28,	// (0x0005569c) input_focus_pane_vc_g7

0x9d30,	// (0x000556a4) input_focus_pane_vc_g8

0x9d38,	// (0x000556ac) input_focus_pane_vc_g9

0x8e73,	// (0x000547e7) input_focus_pane_vc_g10

0x0009,

0xf660,	// (0x0005afd4) input_focus_pane_vc_g

0x2293,	// (0x0004dc07) data_form_pane_vc_ParamLimits

0x2293,	// (0x0004dc07) data_form_pane_vc

0x229f,	// (0x0004dc13) form_field_data_pane_vc_g1

0x401c,	// (0x0004f990) form_field_data_pane_vc_t1_ParamLimits

0x401c,	// (0x0004f990) form_field_data_pane_vc_t1

0x9ca0,	// (0x00055614) input_focus_pane_vc_ParamLimits

0x9ca0,	// (0x00055614) input_focus_pane_vc

0x4036,	// (0x0004f9aa) button_value_adjust_pane_cp3_vc

0x403e,	// (0x0004f9b2) button_value_adjust_pane_cp5_vc

0x4046,	// (0x0004f9ba) form_field_data_pane_vc_ParamLimits

0x4046,	// (0x0004f9ba) form_field_data_pane_vc

0x405d,	// (0x0004f9d1) form_field_data_pane_vc_cp2

0x4065,	// (0x0004f9d9) form_field_data_wide_pane_vc_ParamLimits

0x4065,	// (0x0004f9d9) form_field_data_wide_pane_vc

0x407b,	// (0x0004f9ef) form_field_data_wide_pane_vc_cp2

0x4083,	// (0x0004f9f7) form_field_popup_pane_vc_ParamLimits

0x4083,	// (0x0004f9f7) form_field_popup_pane_vc

0x409a,	// (0x0004fa0e) form_field_popup_wide_pane_vc_ParamLimits

0x409a,	// (0x0004fa0e) form_field_popup_wide_pane_vc

0x40b0,	// (0x0004fa24) form_field_slider_pane_vc_ParamLimits

0x40b0,	// (0x0004fa24) form_field_slider_pane_vc

0x40c3,	// (0x0004fa37) form_field_slider_wide_pane_vc_ParamLimits

0x40c3,	// (0x0004fa37) form_field_slider_wide_pane_vc

0xce1b,	// (0x0005878f) grid_touch_1_pane_ParamLimits

0xce1b,	// (0x0005878f) grid_touch_1_pane

0xce2f,	// (0x000587a3) grid_touch_2_pane_ParamLimits

0xce2f,	// (0x000587a3) grid_touch_2_pane

0x41a7,	// (0x0004fb1b) touch_pane_g1_ParamLimits

0x41a7,	// (0x0004fb1b) touch_pane_g1

0x40fa,	// (0x0004fa6e) cell_app_pane_cp_wide_ParamLimits

0x40fa,	// (0x0004fa6e) cell_app_pane_cp_wide

0x410b,	// (0x0004fa7f) grid_popup_fast_wide_pane_ParamLimits

0x410b,	// (0x0004fa7f) grid_popup_fast_wide_pane

0x411f,	// (0x0004fa93) scroll_pane_cp19_ParamLimits

0x411f,	// (0x0004fa93) scroll_pane_cp19

0x90bf,	// (0x00054a33) bg_popup_window_pane_cp20

0x4133,	// (0x0004faa7) listscroll_popup_fast_wide_pane

0xce59,	// (0x000587cd) grid_indicator_nsta_pane

0x414d,	// (0x0004fac1) clock_nsta_pane_g1

0x4156,	// (0x0004faca) clock_nsta_pane_t1

0xce65,	// (0x000587d9) cell_indicator_nsta_pane_ParamLimits

0xce65,	// (0x000587d9) cell_indicator_nsta_pane

0x41a7,	// (0x0004fb1b) cell_indicator_nsta_pane_g1

0xce80,	// (0x000587f4) cell_indicator_nsta_pane_g2

0x0001,

0xfa8c,	// (0x0005b400) cell_indicator_nsta_pane_g

0x41c7,	// (0x0004fb3b) clock_nsta_pane_cp

0x41d0,	// (0x0004fb44) indicator_nsta_pane_cp

0x41da,	// (0x0004fb4e) nsta_clock_indic_pane_g1

0x94dc,	// (0x00054e50) grid_indicator_pane

0xa281,	// (0x00055bf5) scroll_pane_cp29

0xf326,	// (0x0005ac9a) indicator_nsta_pane_cp2_ParamLimits

0xf326,	// (0x0005ac9a) indicator_nsta_pane_cp2

0x935a,	// (0x00054cce) main_apps_wheel_pane

0xb4c7,	// (0x00056e3b) form_midp_field_text_pane_ParamLimits

0x2600,	// (0x0004df74) scroll_bar_cp050_ParamLimits

0x4233,	// (0x0004fba7) cell_indicator_pane_ParamLimits

0x4233,	// (0x0004fba7) cell_indicator_pane

0x424c,	// (0x0004fbc0) cell_indicator_pane_g1

0xce9f,	// (0x00058813) grid_wheel_folder_pane_ParamLimits

0xce9f,	// (0x00058813) grid_wheel_folder_pane

0xcead,	// (0x00058821) list_wheel_apps_pane_ParamLimits

0xcead,	// (0x00058821) list_wheel_apps_pane

0xcebb,	// (0x0005882f) main_apps_wheel_pane_g1_ParamLimits

0xcebb,	// (0x0005882f) main_apps_wheel_pane_g1

0xcec7,	// (0x0005883b) main_apps_wheel_pane_g2_ParamLimits

0xcec7,	// (0x0005883b) main_apps_wheel_pane_g2

0x0001,

0xfaa8,	// (0x0005b41c) main_apps_wheel_pane_g_ParamLimits

0xfaa8,	// (0x0005b41c) main_apps_wheel_pane_g

0xced5,	// (0x00058849) main_apps_wheel_pane_t1_ParamLimits

0xced5,	// (0x00058849) main_apps_wheel_pane_t1

0xcee9,	// (0x0005885d) list_wheel_apps_pane_g1

0xcef1,	// (0x00058865) list_wheel_apps_pane_g2

0xcef9,	// (0x0005886d) list_wheel_apps_pane_g3

0xcf01,	// (0x00058875) list_wheel_apps_pane_g4

0xcf0b,	// (0x0005887f) list_wheel_apps_pane_g5

0x0004,

0xfaad,	// (0x0005b421) list_wheel_apps_pane_g

0xc359,	// (0x00057ccd) navi_icon_text_pane

0xaf23,	// (0x00056897) aid_fill_nsta

0x4313,	// (0x0004fc87) navi_icon_text_pane_g1

0x431f,	// (0x0004fc93) navi_icon_text_pane_t1

0xc23d,	// (0x00057bb1) list_set_graphic_pane_t1_ParamLimits

0xc23d,	// (0x00057bb1) list_set_graphic_pane_t1

0x2d4b,	// (0x0004e6bf) popup_midp_note_alarm_window_t6_ParamLimits

0x2d4b,	// (0x0004e6bf) popup_midp_note_alarm_window_t6

0x2d5d,	// (0x0004e6d1) popup_midp_note_alarm_window_t7_ParamLimits

0x2d5d,	// (0x0004e6d1) popup_midp_note_alarm_window_t7

0x2d6f,	// (0x0004e6e3) popup_midp_note_alarm_window_t8_ParamLimits

0x2d6f,	// (0x0004e6e3) popup_midp_note_alarm_window_t8

0x2d81,	// (0x0004e6f5) popup_midp_note_alarm_window_t9_ParamLimits

0x2d81,	// (0x0004e6f5) popup_midp_note_alarm_window_t9

0x2d93,	// (0x0004e707) popup_midp_note_alarm_window_t10_ParamLimits

0x2d93,	// (0x0004e707) popup_midp_note_alarm_window_t10

0x2da5,	// (0x0004e719) popup_midp_note_alarm_window_t11_ParamLimits

0x2da5,	// (0x0004e719) popup_midp_note_alarm_window_t11

0xc885,	// (0x000581f9) scroll_pane_cp17_ParamLimits

0xc885,	// (0x000581f9) scroll_pane_cp17

0x09cd,	// (0x0004c341) volume_small_pane_cp_g1

0x0e44,	// (0x0004c7b8) volume_small_pane_cp_g2

0x0e4d,	// (0x0004c7c1) volume_small_pane_cp_g3

0x0e56,	// (0x0004c7ca) volume_small_pane_cp_g4

0x0e5f,	// (0x0004c7d3) volume_small_pane_cp_g5

0x0d8e,	// (0x0004c702) volume_small_pane_cp_g6

0x0e68,	// (0x0004c7dc) volume_small_pane_cp_g7

0x0e71,	// (0x0004c7e5) volume_small_pane_cp_g8

0x0e7a,	// (0x0004c7ee) volume_small_pane_cp_g9

0x0e83,	// (0x0004c7f7) volume_small_pane_cp_g10

0xc4c3,	// (0x00057e37) midp_ticker_pane_g1_ParamLimits

0xc4cf,	// (0x00057e43) midp_ticker_pane_g2_ParamLimits

0xf72c,	// (0x0005b0a0) midp_ticker_pane_g_ParamLimits

0xc4db,	// (0x00057e4f) midp_ticker_pane_t1_ParamLimits

0xaf47,	// (0x000568bb) aid_fill_nsta_2

0x25ec,	// (0x0004df60) list_form2_midp_pane

0x36ef,	// (0x0004f063) midp_editing_number_pane_ParamLimits

0x36fe,	// (0x0004f072) midp_ticker_pane_ParamLimits

0x4331,	// (0x0004fca5) form2_midp_field_pane

0x4355,	// (0x0004fcc9) scroll_pane_cp51

0x4375,	// (0x0004fce9) form2_midp_button_pane_ParamLimits

0x4375,	// (0x0004fce9) form2_midp_button_pane

0x4387,	// (0x0004fcfb) form2_midp_content_pane_ParamLimits

0x4387,	// (0x0004fcfb) form2_midp_content_pane

0x43a1,	// (0x0004fd15) form2_midp_field_choice_group_pane

0x43a9,	// (0x0004fd1d) form2_midp_field_pane_g1

0x43b1,	// (0x0004fd25) form2_midp_field_pane_g2

0x43b9,	// (0x0004fd2d) form2_midp_field_pane_g3

0x43c1,	// (0x0004fd35) form2_midp_field_pane_g4

0x0003,

0xfad2,	// (0x0005b446) form2_midp_field_pane_g

0x43c9,	// (0x0004fd3d) form2_midp_gauge_slider_pane

0x43d1,	// (0x0004fd45) form2_midp_gauge_wait_pane

0x43d9,	// (0x0004fd4d) form2_midp_image_pane_ParamLimits

0x43d9,	// (0x0004fd4d) form2_midp_image_pane

0xcf3e,	// (0x000588b2) form2_midp_label_pane_ParamLimits

0xcf3e,	// (0x000588b2) form2_midp_label_pane

0xcf57,	// (0x000588cb) form2_midp_label_pane_cp_ParamLimits

0xcf57,	// (0x000588cb) form2_midp_label_pane_cp

0x442e,	// (0x0004fda2) form2_midp_string_pane_ParamLimits

0x442e,	// (0x0004fda2) form2_midp_string_pane

0x8cb8,	// (0x0005462c) form2_midp_text_pane_ParamLimits

0x8cb8,	// (0x0005462c) form2_midp_text_pane

0x4440,	// (0x0004fdb4) form2_midp_time_pane

0x4450,	// (0x0004fdc4) input_focus_pane_cp51_ParamLimits

0x4450,	// (0x0004fdc4) input_focus_pane_cp51

0xcf76,	// (0x000588ea) form2_midp_label_pane_t1_ParamLimits

0xcf76,	// (0x000588ea) form2_midp_label_pane_t1

0x8cd1,	// (0x00054645) form2_mdip_text_pane_t1_ParamLimits

0x8cd1,	// (0x00054645) form2_mdip_text_pane_t1

0xece4,	// (0x0005a658) form2_midp_time_pane_t1

0x44b1,	// (0x0004fe25) form2_midp_gauge_slider_pane_t1

0xcfb6,	// (0x0005892a) form2_midp_gauge_slider_pane_t2

0xcfc8,	// (0x0005893c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfadb,	// (0x0005b44f) form2_midp_gauge_slider_pane_t

0x44e7,	// (0x0004fe5b) form2_midp_slider_pane

0x44f3,	// (0x0004fe67) form2_midp_gauge_wait_pane_t1

0x4501,	// (0x0004fe75) form2_midp_wait_pane_ParamLimits

0x4501,	// (0x0004fe75) form2_midp_wait_pane

0xcfda,	// (0x0005894e) list_single_2graphic_pane_cp4_ParamLimits

0xcfda,	// (0x0005894e) list_single_2graphic_pane_cp4

0xb41e,	// (0x00056d92) list_single_midp_graphic_pane_cp_ParamLimits

0xb41e,	// (0x00056d92) list_single_midp_graphic_pane_cp

0x90bf,	// (0x00054a33) list_highlight_pane_cp20

0x4554,	// (0x0004fec8) list_single_2graphic_pane_g1_cp4

0x3b31,	// (0x0004f4a5) list_single_2graphic_pane_g2_cp4

0x455c,	// (0x0004fed0) list_single_2graphic_pane_t1_cp4

0x935a,	// (0x00054cce) list_highlight_pane_cp21

0x456b,	// (0x0004fedf) list_single_midp_graphic_pane_g4_cp

0x457a,	// (0x0004feee) list_single_midp_graphic_pane_t1_cp

0xcfef,	// (0x00058963) form2_mdip_string_pane_t1_ParamLimits

0xcfef,	// (0x00058963) form2_mdip_string_pane_t1

0x90bf,	// (0x00054a33) bg_wml_button_pane_cp2

0x8e73,	// (0x000547e7) form2_midp_image_pane_g1

0xf0a0,	// (0x0005aa14) list_double_large_graphic_pane_g5_ParamLimits

0xf0a0,	// (0x0005aa14) list_double_large_graphic_pane_g5

0xa48f,	// (0x00055e03) midp_form_pane_ParamLimits

0x935a,	// (0x00054cce) main_apps_wheel_pane_ParamLimits

0xac01,	// (0x00056575) popup_preview_window_ParamLimits

0xac01,	// (0x00056575) popup_preview_window

0xaece,	// (0x00056842) popup_touch_info_window_ParamLimits

0xaece,	// (0x00056842) popup_touch_info_window

0xaeec,	// (0x00056860) popup_touch_menu_window_ParamLimits

0xaeec,	// (0x00056860) popup_touch_menu_window

0x8e69,	// (0x000547dd) bg_popup_sub_pane_cp6

0x4696,	// (0x0005000a) list_touch_menu_pane

0xd065,	// (0x000589d9) list_single_touch_menu_pane_ParamLimits

0xd065,	// (0x000589d9) list_single_touch_menu_pane

0xd079,	// (0x000589ed) list_single_touch_menu_pane_t1

0x935a,	// (0x00054cce) bg_popup_sub_pane_cp7_ParamLimits

0x935a,	// (0x00054cce) bg_popup_sub_pane_cp7

0x2620,	// (0x0004df94) heading_sub_pane

0x46c2,	// (0x00050036) list_touch_info_pane_ParamLimits

0x46c2,	// (0x00050036) list_touch_info_pane

0x46d2,	// (0x00050046) list_single_touch_info_pane_ParamLimits

0x46d2,	// (0x00050046) list_single_touch_info_pane

0x46e4,	// (0x00050058) list_single_touch_info_pane_t1

0x46f2,	// (0x00050066) list_single_touch_info_pane_t2

0x0001,

0xfae9,	// (0x0005b45d) list_single_touch_info_pane_t

0xc4ac,	// (0x00057e20) bg_popup_heading_pane_cp

0x4700,	// (0x00050074) heading_sub_pane_t1

0x222d,	// (0x0004dba1) bg_popup_preview_window_pane_cp_ParamLimits

0x222d,	// (0x0004dba1) bg_popup_preview_window_pane_cp

0x2620,	// (0x0004df94) heading_preview_pane

0x46c2,	// (0x00050036) list_preview_pane_ParamLimits

0x46c2,	// (0x00050036) list_preview_pane

0x470e,	// (0x00050082) popup_preview_window_g1

0x46d2,	// (0x00050046) list_single_preview_pane_ParamLimits

0x46d2,	// (0x00050046) list_single_preview_pane

0x4716,	// (0x0005008a) list_single_preview_pane_g1

0x471e,	// (0x00050092) list_single_preview_pane_t1

0x46e4,	// (0x00050058) list_single_preview_pane_t2

0x0001,

0xfaee,	// (0x0005b462) list_single_preview_pane_t

0x472c,	// (0x000500a0) bg_popup_heading_pane_cp2_ParamLimits

0x472c,	// (0x000500a0) bg_popup_heading_pane_cp2

0x4742,	// (0x000500b6) heading_preview_pane_g1

0x474a,	// (0x000500be) heading_preview_pane_t1_ParamLimits

0x474a,	// (0x000500be) heading_preview_pane_t1

0x9509,	// (0x00054e7d) soft_indicator_pane_t1_ParamLimits

0x9bcb,	// (0x0005553f) scroll_pane_ParamLimits

0xa17d,	// (0x00055af1) scroll_sc2_left_pane

0xa186,	// (0x00055afa) scroll_sc2_right_pane

0xa1a5,	// (0x00055b19) scroll_bg_pane_g1_ParamLimits

0xa1ba,	// (0x00055b2e) scroll_bg_pane_g2_ParamLimits

0xa1d2,	// (0x00055b46) scroll_bg_pane_g3_ParamLimits

0xf6b7,	// (0x0005b02b) scroll_bg_pane_g_ParamLimits

0xa1a5,	// (0x00055b19) scroll_handle_pane_g1_ParamLimits

0xa1f4,	// (0x00055b68) scroll_handle_pane_g2_ParamLimits

0xa1d2,	// (0x00055b46) scroll_handle_pane_g3_ParamLimits

0xf6be,	// (0x0005b032) scroll_handle_pane_g_ParamLimits

0xa7ce,	// (0x00056142) popup_choice_list_window_ParamLimits

0xa7ce,	// (0x00056142) popup_choice_list_window

0x20eb,	// (0x0004da5f) choice_list_pane

0x216d,	// (0x0004dae1) cell_toolbar_pane_t1

0x2195,	// (0x0004db09) toolbar_button_pane_ParamLimits

0x3271,	// (0x0004ebe5) ai_gene_pane_1_t2_ParamLimits

0x3271,	// (0x0004ebe5) ai_gene_pane_1_t2

0x0001,

0xf8e1,	// (0x0005b255) ai_gene_pane_1_t_ParamLimits

0xf8e1,	// (0x0005b255) ai_gene_pane_1_t

0x4767,	// (0x000500db) scroll_sc2_left_pane_g1

0x4767,	// (0x000500db) scroll_sc2_right_pane_g1

0x9e84,	// (0x000557f8) bg_popup_sub_pane_cp10

0x4771,	// (0x000500e5) list_choice_list_pane

0xcc46,	// (0x000585ba) list_single_choice_list_pane_ParamLimits

0xcc46,	// (0x000585ba) list_single_choice_list_pane

0xd087,	// (0x000589fb) list_single_choice_list_pane_g1

0x9e42,	// (0x000557b6) list_single_choice_list_pane_t1_ParamLimits

0x9e42,	// (0x000557b6) list_single_choice_list_pane_t1

0x47a5,	// (0x00050119) choice_list_pane_g1

0xd08f,	// (0x00058a03) choice_list_pane_t1

0x8e69,	// (0x000547dd) input_focus_pane_cp11

0xa008,	// (0x0005597c) title_pane_stacon_g2_ParamLimits

0xa008,	// (0x0005597c) title_pane_stacon_g2

0x0002,

0xf69d,	// (0x0005b011) title_pane_stacon_g_ParamLimits

0xf69d,	// (0x0005b011) title_pane_stacon_g

0xc4ac,	// (0x00057e20) cursor_press_pane

0xa875,	// (0x000561e9) popup_fep_hwr_window_ParamLimits

0xa875,	// (0x000561e9) popup_fep_hwr_window

0x0103,	// (0x0004ba77) popup_fep_vkb_window_ParamLimits

0x0103,	// (0x0004ba77) popup_fep_vkb_window

0xd09d,	// (0x00058a11) cursor_press_pane_g1

0x0002,

0xfb17,	// (0x0005b48b) fep_vkb_side_pane_g_ParamLimits

0x0ec5,	// (0x0004c839) fep_hwr_candidate_pane_ParamLimits

0x0ec5,	// (0x0004c839) fep_hwr_candidate_pane

0x0eef,	// (0x0004c863) fep_hwr_side_pane_ParamLimits

0x0eef,	// (0x0004c863) fep_hwr_side_pane

0x0f0f,	// (0x0004c883) fep_hwr_top_pane_ParamLimits

0x0f0f,	// (0x0004c883) fep_hwr_top_pane

0x0f27,	// (0x0004c89b) fep_hwr_write_pane_ParamLimits

0x0f27,	// (0x0004c89b) fep_hwr_write_pane

0xfb17,	// (0x0005b48b) fep_vkb_side_pane_g

0x47c3,	// (0x00050137) fep_hwr_top_pane_g1

0x47d5,	// (0x00050149) fep_hwr_top_pane_g2

0x0f53,	// (0x0004c8c7) fep_hwr_top_pane_g3

0x0002,

0xfaf3,	// (0x0005b467) fep_hwr_top_pane_g

0x0f68,	// (0x0004c8dc) fep_hwr_top_text_pane

0xc04a,	// (0x000579be) fep_hwr_top_text_pane_g1

0x480b,	// (0x0005017f) fep_hwr_top_text_pane_t1

0x105e,	// (0x0004c9d2) fep_hwr_candidate_pane_g1

0x4a50,	// (0x000503c4) fep_vkb_keypad_pane_g3_ParamLimits

0x4a50,	// (0x000503c4) fep_vkb_keypad_pane_g3

0x4a78,	// (0x000503ec) fep_vkb_keypad_pane_g4_ParamLimits

0x4a78,	// (0x000503ec) fep_vkb_keypad_pane_g4

0x4ae7,	// (0x0005045b) fep_vkb_bottom_pane_g2_ParamLimits

0x4ae7,	// (0x0005045b) fep_vkb_bottom_pane_g2

0x0001,

0xfb1e,	// (0x0005b492) fep_vkb_bottom_pane_g_ParamLimits

0xfb1e,	// (0x0005b492) fep_vkb_bottom_pane_g

0x4767,	// (0x000500db) cell_vkb_side_pane_g2

0x0001,

0xfb28,	// (0x0005b49c) cell_vkb_side_pane_g

0x4b72,	// (0x000504e6) cell_vkb_side_pane_t1

0x4b80,	// (0x000504f4) cell_vkb_side_pane_t1_copy1

0x4767,	// (0x000500db) bg_fep_vkb_candidate_pane_g2

0x4cac,	// (0x00050620) cell_vkb_candidate_pane_ParamLimits

0x4819,	// (0x0005018d) aid_size_cell_vkb_ParamLimits

0x4819,	// (0x0005018d) aid_size_cell_vkb

0x4cac,	// (0x00050620) cell_vkb_candidate_pane

0x1078,	// (0x0004c9ec) bg_popup_fep_shadow_pane_g1

0xd0df,	// (0x00058a53) fep_vkb_bottom_pane_ParamLimits

0xd0df,	// (0x00058a53) fep_vkb_bottom_pane

0x48dd,	// (0x00050251) fep_vkb_candidate_pane_ParamLimits

0x48dd,	// (0x00050251) fep_vkb_candidate_pane

0xd104,	// (0x00058a78) fep_vkb_keypad_pane_ParamLimits

0xd104,	// (0x00058a78) fep_vkb_keypad_pane

0xd139,	// (0x00058aad) fep_vkb_side_pane_ParamLimits

0xd139,	// (0x00058aad) fep_vkb_side_pane

0xd175,	// (0x00058ae9) fep_vkb_top_pane_ParamLimits

0xd175,	// (0x00058ae9) fep_vkb_top_pane

0x49a9,	// (0x0005031d) fep_vkb_top_pane_g1_ParamLimits

0x49a9,	// (0x0005031d) fep_vkb_top_pane_g1

0x49b8,	// (0x0005032c) fep_vkb_top_pane_g2_ParamLimits

0x49b8,	// (0x0005032c) fep_vkb_top_pane_g2

0x49c7,	// (0x0005033b) fep_vkb_top_pane_g3_ParamLimits

0x49c7,	// (0x0005033b) fep_vkb_top_pane_g3

0x0003,

0xfb0e,	// (0x0005b482) fep_vkb_top_pane_g_ParamLimits

0xfb0e,	// (0x0005b482) fep_vkb_top_pane_g

0x49e5,	// (0x00050359) fep_vkb_top_text_pane_ParamLimits

0x49e5,	// (0x00050359) fep_vkb_top_text_pane

0xd1aa,	// (0x00058b1e) fep_vkb_side_pane_g1_ParamLimits

0xd1aa,	// (0x00058b1e) fep_vkb_side_pane_g1

0x4a3f,	// (0x000503b3) grid_vkb_side_pane_ParamLimits

0x4a3f,	// (0x000503b3) grid_vkb_side_pane

0x1080,	// (0x0004c9f4) bg_popup_fep_shadow_pane_g2

0x1089,	// (0x0004c9fd) bg_popup_fep_shadow_pane_g3

0x1091,	// (0x0004ca05) bg_popup_fep_shadow_pane_g4

0x109a,	// (0x0004ca0e) bg_popup_fep_shadow_pane_g5

0x10a4,	// (0x0004ca18) bg_popup_fep_shadow_pane_g6

0x10ac,	// (0x0004ca20) bg_popup_fep_shadow_pane_g7

0x9d18,	// (0x0005568c) bg_popup_fep_shadow_pane_g8

0x4a96,	// (0x0005040a) grid_vkb_keypad_number_pane_ParamLimits

0x4a96,	// (0x0005040a) grid_vkb_keypad_number_pane

0x4aa6,	// (0x0005041a) grid_vkb_keypad_pane_ParamLimits

0x4aa6,	// (0x0005041a) grid_vkb_keypad_pane

0x4acc,	// (0x00050440) fep_vkb_bottom_pane_g1_ParamLimits

0x4acc,	// (0x00050440) fep_vkb_bottom_pane_g1

0x4af5,	// (0x00050469) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4af5,	// (0x00050469) grid_vkb_keypad_bottom_left_pane

0x4b0a,	// (0x0005047e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4b0a,	// (0x0005047e) grid_vkb_keypad_bottom_right_pane

0x4b1f,	// (0x00050493) fep_vkb_top_text_pane_g1

0xd1f1,	// (0x00058b65) fep_vkb_top_text_pane_t1

0xd203,	// (0x00058b77) cell_vkb_side_pane_ParamLimits

0xd203,	// (0x00058b77) cell_vkb_side_pane

0x4767,	// (0x000500db) cell_vkb_side_pane_g1

0x4b8e,	// (0x00050502) cell_vkb_keypad_pane_ParamLimits

0x4b8e,	// (0x00050502) cell_vkb_keypad_pane

0x4c03,	// (0x00050577) cell_vkb_keypad_pane_g1

0x0008,

0xfb3b,	// (0x0005b4af) bg_popup_fep_shadow_pane_g

0x4767,	// (0x000500db) cell_hwr_side_pane_g1

0x4767,	// (0x000500db) cell_hwr_side_pane_g2

0x4c0d,	// (0x00050581) cell_vkb_keypad_pane_t1

0xd219,	// (0x00058b8d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd219,	// (0x00058b8d) cell_vkb_keypad_bottom_left_pane

0xd22e,	// (0x00058ba2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd22e,	// (0x00058ba2) cell_vkb_keypad_bottom_right_pane

0x4767,	// (0x000500db) cell_vkb_keypad_bottom_left_pane_g1

0x4767,	// (0x000500db) cell_vkb_keypad_bottom_right_pane_g1

0x4c71,	// (0x000505e5) cell_vkb_keypad_number_pane_ParamLimits

0x4c71,	// (0x000505e5) cell_vkb_keypad_number_pane

0x4c90,	// (0x00050604) cell_vkb_keypad_number_pane_g1

0x4c9a,	// (0x0005060e) cell_vkb_keypad_number_pane_g2

0x4ca3,	// (0x00050617) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2d,	// (0x0005b4a1) cell_vkb_keypad_number_pane_g

0x4c0d,	// (0x00050581) cell_vkb_keypad_number_pane_t1

0x4cc7,	// (0x0005063b) fep_vkb_candidate_pane_g1

0x0001,

0xfb28,	// (0x0005b49c) cell_hwr_side_pane_g

0x4ce0,	// (0x00050654) cell_hwr_side_pane_t1

0x10be,	// (0x0004ca32) cell_hwr_side_pane_t1_copy1

0x49d7,	// (0x0005034b) cell_hwr_candidate_pane_g1

0x10cc,	// (0x0004ca40) cell_hwr_candidate_pane_t1

0x4767,	// (0x000500db) cell_vkb_candidate_pane_g2

0x4d66,	// (0x000506da) cell_vkb_candidate_pane_t1

0x0e8c,	// (0x0004c800) bg_popup_fep_shadow_pane_ParamLimits

0x0e8c,	// (0x0004c800) bg_popup_fep_shadow_pane

0xd0a5,	// (0x00058a19) bg_fep_hwr_top_pane_g4

0x47e7,	// (0x0005015b) bg_hwr_side_pane_g1_ParamLimits

0x47e7,	// (0x0005015b) bg_hwr_side_pane_g1

0xb74a,	// (0x000570be) cell_hwr_side_pane_ParamLimits

0xb74a,	// (0x000570be) cell_hwr_side_pane

0x0fdf,	// (0x0004c953) fep_hwr_write_pane_g1_ParamLimits

0x0fdf,	// (0x0004c953) fep_hwr_write_pane_g1

0x0fec,	// (0x0004c960) fep_hwr_write_pane_g2_ParamLimits

0x0fec,	// (0x0004c960) fep_hwr_write_pane_g2

0x0ff9,	// (0x0004c96d) fep_hwr_write_pane_g3_ParamLimits

0x0ff9,	// (0x0004c96d) fep_hwr_write_pane_g3

0xb76a,	// (0x000570de) fep_hwr_write_pane_g4_ParamLimits

0xb76a,	// (0x000570de) fep_hwr_write_pane_g4

0x0005,

0xfafa,	// (0x0005b46e) fep_hwr_write_pane_g_ParamLimits

0xfafa,	// (0x0005b46e) fep_hwr_write_pane_g

0xd0a5,	// (0x00058a19) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd0a5,	// (0x00058a19) bg_fep_hwr_candidate_pane_g2

0x101c,	// (0x0004c990) cell_hwr_candidate_pane_ParamLimits

0x101c,	// (0x0004c990) cell_hwr_candidate_pane

0x105e,	// (0x0004c9d2) fep_hwr_candidate_pane_g1_ParamLimits

0x4847,	// (0x000501bb) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4847,	// (0x000501bb) bg_popup_fep_shadow_pane_cp2

0x49d7,	// (0x0005034b) fep_vkb_top_pane_g4_ParamLimits

0x49d7,	// (0x0005034b) fep_vkb_top_pane_g4

0x4a1d,	// (0x00050391) fep_vkb_side_pane_g2_ParamLimits

0x4a1d,	// (0x00050391) fep_vkb_side_pane_g2

0x8952,	// (0x000542c6) list_setting_pane_t4_ParamLimits

0x8952,	// (0x000542c6) list_setting_pane_t4

0x89ec,	// (0x00054360) list_setting_number_pane_t5_ParamLimits

0x89ec,	// (0x00054360) list_setting_number_pane_t5

0xc081,	// (0x000579f5) list_double_heading_pane_cp2_ParamLimits

0xc081,	// (0x000579f5) list_double_heading_pane_cp2

0xd249,	// (0x00058bbd) list_double_heading_pane_g1_cp2_ParamLimits

0xd249,	// (0x00058bbd) list_double_heading_pane_g1_cp2

0x4d74,	// (0x000506e8) list_double_heading_pane_g2_cp2_ParamLimits

0x4d74,	// (0x000506e8) list_double_heading_pane_g2_cp2

0x4d88,	// (0x000506fc) list_double_heading_pane_t1_cp2_ParamLimits

0x4d88,	// (0x000506fc) list_double_heading_pane_t1_cp2

0x4d9e,	// (0x00050712) list_double_heading_pane_t2_cp2_ParamLimits

0x4d9e,	// (0x00050712) list_double_heading_pane_t2_cp2

0x8e51,	// (0x000547c5) aid_value_unit2

0xe812,	// (0x0005a186) popup_preview_fixed_window

0x96c4,	// (0x00055038) bg_popup_preview_window_pane_cp02

0x4db0,	// (0x00050724) list_preview_fixed_pane

0x4df6,	// (0x0005076a) list_empty_pane_fp_ParamLimits

0x4df6,	// (0x0005076a) list_empty_pane_fp

0x4df6,	// (0x0005076a) list_single_cale_day_pane_fp_ParamLimits

0x4df6,	// (0x0005076a) list_single_cale_day_pane_fp

0x4df6,	// (0x0005076a) list_single_graphic_heading_pane_fp_ParamLimits

0x4df6,	// (0x0005076a) list_single_graphic_heading_pane_fp

0x4df6,	// (0x0005076a) list_single_graphic_pane_fp_ParamLimits

0x4df6,	// (0x0005076a) list_single_graphic_pane_fp

0x4df6,	// (0x0005076a) list_single_heading_pane_fp_ParamLimits

0x4df6,	// (0x0005076a) list_single_heading_pane_fp

0x4df6,	// (0x0005076a) list_single_pane_fp_ParamLimits

0x4df6,	// (0x0005076a) list_single_pane_fp

0x4e0c,	// (0x00050780) list_single_pane_fp_g1_ParamLimits

0x4e0c,	// (0x00050780) list_single_pane_fp_g1

0xd255,	// (0x00058bc9) list_single_pane_fp_g2_ParamLimits

0xd255,	// (0x00058bc9) list_single_pane_fp_g2

0x4f1a,	// (0x0005088e) list_single_pane_fp_g3_ParamLimits

0x4f1a,	// (0x0005088e) list_single_pane_fp_g3

0x4e18,	// (0x0005078c) list_single_pane_fp_g4_ParamLimits

0x4e18,	// (0x0005078c) list_single_pane_fp_g4

0x0003,

0xfb5c,	// (0x0005b4d0) list_single_pane_fp_g_ParamLimits

0xfb5c,	// (0x0005b4d0) list_single_pane_fp_g

0xecf7,	// (0x0005a66b) list_single_pane_fp_t1_ParamLimits

0xecf7,	// (0x0005a66b) list_single_pane_fp_t1

0xed0e,	// (0x0005a682) list_single_graphic_pane_fp_g1_ParamLimits

0xed0e,	// (0x0005a682) list_single_graphic_pane_fp_g1

0x4e0c,	// (0x00050780) list_single_graphic_pane_fp_g2_ParamLimits

0x4e0c,	// (0x00050780) list_single_graphic_pane_fp_g2

0xd255,	// (0x00058bc9) list_single_graphic_pane_fp_g3_ParamLimits

0xd255,	// (0x00058bc9) list_single_graphic_pane_fp_g3

0x4f1a,	// (0x0005088e) list_single_graphic_pane_fp_g4_ParamLimits

0x4f1a,	// (0x0005088e) list_single_graphic_pane_fp_g4

0x4e18,	// (0x0005078c) list_single_graphic_pane_fp_g5_ParamLimits

0x4e18,	// (0x0005078c) list_single_graphic_pane_fp_g5

0x0004,

0xfb65,	// (0x0005b4d9) list_single_graphic_pane_fp_g_ParamLimits

0xfb65,	// (0x0005b4d9) list_single_graphic_pane_fp_g

0xed1a,	// (0x0005a68e) list_single_graphic_pane_fp_t1_ParamLimits

0xed1a,	// (0x0005a68e) list_single_graphic_pane_fp_t1

0xed0e,	// (0x0005a682) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xed0e,	// (0x0005a682) list_single_graphic_heading_pane_fp_g1

0x4e0c,	// (0x00050780) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4e0c,	// (0x00050780) list_single_graphic_heading_pane_fp_g2

0xd255,	// (0x00058bc9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd255,	// (0x00058bc9) list_single_graphic_heading_pane_fp_g3

0x4f1a,	// (0x0005088e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4f1a,	// (0x0005088e) list_single_graphic_heading_pane_fp_g4

0x4e18,	// (0x0005078c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4e18,	// (0x0005078c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb65,	// (0x0005b4d9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb65,	// (0x0005b4d9) list_single_graphic_heading_pane_fp_g

0xed30,	// (0x0005a6a4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xed30,	// (0x0005a6a4) list_single_graphic_heading_pane_fp_t1

0xed46,	// (0x0005a6ba) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xed46,	// (0x0005a6ba) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb70,	// (0x0005b4e4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb70,	// (0x0005b4e4) list_single_graphic_heading_pane_fp_t

0xed58,	// (0x0005a6cc) list_single_cale_day_pane_fp_g1_ParamLimits

0xed58,	// (0x0005a6cc) list_single_cale_day_pane_fp_g1

0x4e24,	// (0x00050798) list_single_cale_day_pane_fp_g2_ParamLimits

0x4e24,	// (0x00050798) list_single_cale_day_pane_fp_g2

0x10ea,	// (0x0004ca5e) list_single_cale_day_pane_fp_g3_ParamLimits

0x10ea,	// (0x0004ca5e) list_single_cale_day_pane_fp_g3

0x1112,	// (0x0004ca86) list_single_cale_day_pane_fp_g4_ParamLimits

0x1112,	// (0x0004ca86) list_single_cale_day_pane_fp_g4

0x1136,	// (0x0004caaa) list_single_cale_day_pane_fp_g5_ParamLimits

0x1136,	// (0x0004caaa) list_single_cale_day_pane_fp_g5

0x0004,

0xfb75,	// (0x0005b4e9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb75,	// (0x0005b4e9) list_single_cale_day_pane_fp_g

0xed90,	// (0x0005a704) list_single_cale_day_pane_fp_t1_ParamLimits

0xed90,	// (0x0005a704) list_single_cale_day_pane_fp_t1

0xedb6,	// (0x0005a72a) list_single_cale_day_pane_fp_t2_ParamLimits

0xedb6,	// (0x0005a72a) list_single_cale_day_pane_fp_t2

0xedcf,	// (0x0005a743) list_single_cale_day_pane_fp_t3_ParamLimits

0xedcf,	// (0x0005a743) list_single_cale_day_pane_fp_t3

0x0002,

0xfb80,	// (0x0005b4f4) list_single_cale_day_pane_fp_t_ParamLimits

0xfb80,	// (0x0005b4f4) list_single_cale_day_pane_fp_t

0x4e0c,	// (0x00050780) list_empty_pane_fp_g1_ParamLimits

0x4e0c,	// (0x00050780) list_empty_pane_fp_g1

0xede8,	// (0x0005a75c) list_empty_pane_fp_t1

0xedf6,	// (0x0005a76a) list_empty_pane_fp_t2

0x0001,

0xfb87,	// (0x0005b4fb) list_empty_pane_fp_t

0x4e0c,	// (0x00050780) list_single_heading_pane_fp_g1_ParamLimits

0x4e0c,	// (0x00050780) list_single_heading_pane_fp_g1

0xd255,	// (0x00058bc9) list_single_heading_pane_fp_g2_ParamLimits

0xd255,	// (0x00058bc9) list_single_heading_pane_fp_g2

0x4f1a,	// (0x0005088e) list_single_heading_pane_fp_g3_ParamLimits

0x4f1a,	// (0x0005088e) list_single_heading_pane_fp_g3

0x0002,

0xfb8c,	// (0x0005b500) list_single_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0005b500) list_single_heading_pane_fp_g

0xee04,	// (0x0005a778) list_single_heading_pane_fp_t1_ParamLimits

0xee04,	// (0x0005a778) list_single_heading_pane_fp_t1

0xee16,	// (0x0005a78a) list_single_heading_pane_fp_t2_ParamLimits

0xee16,	// (0x0005a78a) list_single_heading_pane_fp_t2

0x0001,

0xfb93,	// (0x0005b507) list_single_heading_pane_fp_t_ParamLimits

0xfb93,	// (0x0005b507) list_single_heading_pane_fp_t

0x9ea2,	// (0x00055816) aid_size_cell_fast

0x9644,	// (0x00054fb8) soft_indicator_pane_cp1_t1

0x9edc,	// (0x00055850) cell_app_pane_cp2_ParamLimits

0x9edc,	// (0x00055850) cell_app_pane_cp2

0x0eae,	// (0x0004c822) fep_hwr_candidate_drop_down_list_pane

0xd0b3,	// (0x00058a27) fep_hwr_candidate_pane_g3_ParamLimits

0xd0b3,	// (0x00058a27) fep_hwr_candidate_pane_g3

0xd0c0,	// (0x00058a34) fep_hwr_candidate_pane_g4_ParamLimits

0xd0c0,	// (0x00058a34) fep_hwr_candidate_pane_g4

0x0002,

0xfb07,	// (0x0005b47b) fep_hwr_candidate_pane_g_ParamLimits

0xfb07,	// (0x0005b47b) fep_hwr_candidate_pane_g

0x48cc,	// (0x00050240) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x48cc,	// (0x00050240) fep_vkb_candidate_drop_down_list_pane

0x4ccf,	// (0x00050643) fep_vkb_candidate_pane_g3

0x4cd7,	// (0x0005064b) fep_vkb_candidate_pane_g4

0x0002,

0xfb34,	// (0x0005b4a8) fep_vkb_candidate_pane_g

0x49d7,	// (0x0005034b) cell_hwr_candidate_pane_g1_ParamLimits

0x4cee,	// (0x00050662) cell_hwr_candidate_pane_g3_ParamLimits

0x4cee,	// (0x00050662) cell_hwr_candidate_pane_g3

0x4d0f,	// (0x00050683) cell_hwr_candidate_pane_g4_ParamLimits

0x4d0f,	// (0x00050683) cell_hwr_candidate_pane_g4

0x0002,

0xfb4e,	// (0x0005b4c2) cell_hwr_candidate_pane_g_ParamLimits

0xfb4e,	// (0x0005b4c2) cell_hwr_candidate_pane_g

0x4d30,	// (0x000506a4) cell_vkb_candidate_pane_g3_ParamLimits

0x4d30,	// (0x000506a4) cell_vkb_candidate_pane_g3

0x4d4b,	// (0x000506bf) cell_vkb_candidate_pane_g4_ParamLimits

0x4d4b,	// (0x000506bf) cell_vkb_candidate_pane_g4

0xd261,	// (0x00058bd5) cell_app_pane_cp2_g1_ParamLimits

0xd261,	// (0x00058bd5) cell_app_pane_cp2_g1

0x4e4e,	// (0x000507c2) cell_app_pane_cp2_g2_ParamLimits

0x4e4e,	// (0x000507c2) cell_app_pane_cp2_g2

0x0001,

0xfb98,	// (0x0005b50c) cell_app_pane_cp2_g_ParamLimits

0xfb98,	// (0x0005b50c) cell_app_pane_cp2_g

0x4e5a,	// (0x000507ce) cell_app_pane_cp2_t1_ParamLimits

0x4e5a,	// (0x000507ce) cell_app_pane_cp2_t1

0x9ca0,	// (0x00055614) grid_highlight_pane_cp1_ParamLimits

0x9ca0,	// (0x00055614) grid_highlight_pane_cp1

0x115a,	// (0x0004cace) cell_hwr_candidate_pane_cp1_ParamLimits

0x115a,	// (0x0004cace) cell_hwr_candidate_pane_cp1

0x49d7,	// (0x0005034b) fep_hwr_candidate_drop_down_list_pane_g1

0x4e6c,	// (0x000507e0) fep_hwr_candidate_drop_down_list_pane_g2

0x4e79,	// (0x000507ed) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9d,	// (0x0005b511) fep_hwr_candidate_drop_down_list_pane_g

0x1179,	// (0x0004caed) fep_hwr_candidate_drop_down_list_scroll_pane

0x1182,	// (0x0004caf6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1182,	// (0x0004caf6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x118f,	// (0x0004cb03) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x118f,	// (0x0004cb03) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x119c,	// (0x0004cb10) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x119c,	// (0x0004cb10) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4d30,	// (0x000506a4) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d30,	// (0x000506a4) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4d4b,	// (0x000506bf) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d4b,	// (0x000506bf) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x11a9,	// (0x0004cb1d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x11a9,	// (0x0004cb1d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x11c4,	// (0x0004cb38) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x11c4,	// (0x0004cb38) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x11df,	// (0x0004cb53) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x11df,	// (0x0004cb53) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba4,	// (0x0005b518) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba4,	// (0x0005b518) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4e86,	// (0x000507fa) cell_vkb_candidate_pane_cp1_ParamLimits

0x4e86,	// (0x000507fa) cell_vkb_candidate_pane_cp1

0x49d7,	// (0x0005034b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x49d7,	// (0x0005034b) fep_vkb_candidate_drop_down_list_pane_g1

0x4e6c,	// (0x000507e0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4e6c,	// (0x000507e0) fep_vkb_candidate_drop_down_list_pane_g2

0x4e79,	// (0x000507ed) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4e79,	// (0x000507ed) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9d,	// (0x0005b511) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9d,	// (0x0005b511) fep_vkb_candidate_drop_down_list_pane_g

0x4ea6,	// (0x0005081a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4ea6,	// (0x0005081a) fep_vkb_candidate_drop_down_list_scroll_pane

0x4eb3,	// (0x00050827) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4eb3,	// (0x00050827) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4ec0,	// (0x00050834) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4ec0,	// (0x00050834) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4ecc,	// (0x00050840) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4ecc,	// (0x00050840) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4cee,	// (0x00050662) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4cee,	// (0x00050662) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4d0f,	// (0x00050683) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d0f,	// (0x00050683) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4ed8,	// (0x0005084c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4ed8,	// (0x0005084c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4f2e,	// (0x000508a2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4f2e,	// (0x000508a2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4f4f,	// (0x000508c3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4f4f,	// (0x000508c3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb5,	// (0x0005b529) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb5,	// (0x0005b529) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9209,	// (0x00054b7d) title_pane_g1_ParamLimits

0x921c,	// (0x00054b90) title_pane_g2_ParamLimits

0xf527,	// (0x0005ae9b) title_pane_g_ParamLimits

0xc03a,	// (0x000579ae) aid_call2_pane

0xc042,	// (0x000579b6) aid_call_pane

0xc04a,	// (0x000579be) popup_clock_analogue_window_g1

0xc04a,	// (0x000579be) popup_clock_analogue_window_g2

0xf26a,	// (0x0005abde) popup_clock_analogue_window_g3

0xf273,	// (0x0005abe7) popup_clock_analogue_window_g4

0x8e73,	// (0x000547e7) popup_clock_analogue_window_g5

0x0004,

0xf6cc,	// (0x0005b040) popup_clock_analogue_window_g

0xf27b,	// (0x0005abef) popup_clock_analogue_window_t1

0xf289,	// (0x0005abfd) clock_digital_number_pane_ParamLimits

0xf289,	// (0x0005abfd) clock_digital_number_pane

0xf295,	// (0x0005ac09) clock_digital_number_pane_cp02_ParamLimits

0xf295,	// (0x0005ac09) clock_digital_number_pane_cp02

0xf2a1,	// (0x0005ac15) clock_digital_number_pane_cp03_ParamLimits

0xf2a1,	// (0x0005ac15) clock_digital_number_pane_cp03

0xf2ad,	// (0x0005ac21) clock_digital_number_pane_cp04_ParamLimits

0xf2ad,	// (0x0005ac21) clock_digital_number_pane_cp04

0xf2b9,	// (0x0005ac2d) clock_digital_separator_pane_ParamLimits

0xf2b9,	// (0x0005ac2d) clock_digital_separator_pane

0xf2c5,	// (0x0005ac39) popup_clock_digital_window_t1_ParamLimits

0xf2c5,	// (0x0005ac39) popup_clock_digital_window_t1

0x8e73,	// (0x000547e7) clock_digital_number_pane_g1

0x8e73,	// (0x000547e7) clock_digital_number_pane_g2

0x0001,

0xf6d7,	// (0x0005b04b) clock_digital_number_pane_g

0x8e73,	// (0x000547e7) clock_digital_separator_pane_g1

0x8e73,	// (0x000547e7) clock_digital_separator_pane_g2

0x0001,

0xf6d7,	// (0x0005b04b) clock_digital_separator_pane_g

0xaf23,	// (0x00056897) aid_fill_nsta_ParamLimits

0xb059,	// (0x000569cd) indicator_nsta_pane_ParamLimits

0x083d,	// (0x0004c1b1) popup_clock_analogue_window

0x083d,	// (0x0004c1b1) popup_clock_digital_window

0xce59,	// (0x000587cd) grid_indicator_nsta_pane_ParamLimits

0x4164,	// (0x0004fad8) clock_nsta_pane_t2

0x0001,

0xfa87,	// (0x0005b3fb) clock_nsta_pane_t

0xf24b,	// (0x0005abbf) aid_size_max_handle

0xa141,	// (0x00055ab5) aid_size_min_handle

0xc4ac,	// (0x00057e20) editor_scroll_pane

0x4f6a,	// (0x000508de) ex_editor_pane

0x9e1e,	// (0x00055792) scroll_pane_cp13

0x9bf7,	// (0x0005556b) scroll_pane_cp14

0xc079,	// (0x000579ed) scroll_pane_cp36

0xa2b6,	// (0x00055c2a) list_single_graphic_hl_pane_cp2_ParamLimits

0xa2b6,	// (0x00055c2a) list_single_graphic_hl_pane_cp2

0xb6c4,	// (0x00057038) list_single_graphic_hl_pane_ParamLimits

0xb6c4,	// (0x00057038) list_single_graphic_hl_pane

0x8ceb,	// (0x0005465f) aid_size_min_hl_cp1

0x4f72,	// (0x000508e6) list_highlight_pane_cp34_ParamLimits

0x4f72,	// (0x000508e6) list_highlight_pane_cp34

0x4f83,	// (0x000508f7) list_single_graphic_hl_pane_g1_ParamLimits

0x4f83,	// (0x000508f7) list_single_graphic_hl_pane_g1

0x8cf4,	// (0x00054668) list_single_graphic_hl_pane_g2_ParamLimits

0x8cf4,	// (0x00054668) list_single_graphic_hl_pane_g2

0x8cf4,	// (0x00054668) list_single_graphic_hl_pane_g3_ParamLimits

0x8cf4,	// (0x00054668) list_single_graphic_hl_pane_g3

0xc437,	// (0x00057dab) list_single_graphic_hl_pane_g4_ParamLimits

0xc437,	// (0x00057dab) list_single_graphic_hl_pane_g4

0xb77f,	// (0x000570f3) list_single_graphic_hl_pane_g5_ParamLimits

0xb77f,	// (0x000570f3) list_single_graphic_hl_pane_g5

0x0004,

0xfbc6,	// (0x0005b53a) list_single_graphic_hl_pane_g_ParamLimits

0xfbc6,	// (0x0005b53a) list_single_graphic_hl_pane_g

0x8d00,	// (0x00054674) list_single_graphic_hl_pane_t1_ParamLimits

0x8d00,	// (0x00054674) list_single_graphic_hl_pane_t1

0x4f90,	// (0x00050904) aid_size_min_hl_cp2

0x4f99,	// (0x0005090d) list_highlight_pane_cp34_cp2_ParamLimits

0x4f99,	// (0x0005090d) list_highlight_pane_cp34_cp2

0x4f83,	// (0x000508f7) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f83,	// (0x000508f7) list_single_graphic_hl_pane_g1_cp2

0x4fa6,	// (0x0005091a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4fa6,	// (0x0005091a) list_single_graphic_hl_pane_g2_cp2

0xd27f,	// (0x00058bf3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd27f,	// (0x00058bf3) list_single_graphic_hl_pane_g3_cp2

0xbf9d,	// (0x00057911) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbf9d,	// (0x00057911) list_single_graphic_hl_pane_g4_cp2

0x4fc0,	// (0x00050934) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4fc0,	// (0x00050934) list_single_graphic_hl_pane_g5_cp2

0xa642,	// (0x00055fb6) control_pane_g4_ParamLimits

0xa642,	// (0x00055fb6) control_pane_g4

0x9e84,	// (0x000557f8) bg_popup_sub_pane_cp10_ParamLimits

0x4771,	// (0x000500e5) list_choice_list_pane_ParamLimits

0x4780,	// (0x000500f4) scroll_pane_cp23

0x96c4,	// (0x00055038) bg_popup_preview_window_pane_cp02_ParamLimits

0x4db0,	// (0x00050724) list_preview_fixed_pane_ParamLimits

0x4dc6,	// (0x0005073a) list_preview_fixed_pane_cp_ParamLimits

0x4dc6,	// (0x0005073a) list_preview_fixed_pane_cp

0x4dd2,	// (0x00050746) popup_preview_fixed_window_g1_ParamLimits

0x4dd2,	// (0x00050746) popup_preview_fixed_window_g1

0x4dde,	// (0x00050752) popup_preview_fixed_window_g2_ParamLimits

0x4dde,	// (0x00050752) popup_preview_fixed_window_g2

0x0002,

0xfb55,	// (0x0005b4c9) popup_preview_fixed_window_g_ParamLimits

0xfb55,	// (0x0005b4c9) popup_preview_fixed_window_g

0xf1bf,	// (0x0005ab33) aid_navi_side_left_pane_ParamLimits

0xf1d4,	// (0x0005ab48) aid_navi_side_right_pane_ParamLimits

0xf1ec,	// (0x0005ab60) navi_icon_pane_stacon_ParamLimits

0xf200,	// (0x0005ab74) navi_navi_pane_stacon_ParamLimits

0xf1ec,	// (0x0005ab60) navi_text_pane_stacon_ParamLimits

0x8e69,	// (0x000547dd) main_text_info_pane

0x4fea,	// (0x0005095e) listscroll_text_info_pane

0x4ff2,	// (0x00050966) list_text_info_pane_ParamLimits

0x4ff2,	// (0x00050966) list_text_info_pane

0x5001,	// (0x00050975) scroll_pane_cp24_ParamLimits

0x5001,	// (0x00050975) scroll_pane_cp24

0xd28d,	// (0x00058c01) list_text_info_pane_t1_ParamLimits

0xd28d,	// (0x00058c01) list_text_info_pane_t1

0xa7ea,	// (0x0005615e) popup_fast_swap2_window_ParamLimits

0xa7ea,	// (0x0005615e) popup_fast_swap2_window

0x5053,	// (0x000509c7) aid_size_cell_fast2

0x8e69,	// (0x000547dd) bg_popup_window_pane_cp17

0x2620,	// (0x0004df94) heading_pane_cp2

0x505d,	// (0x000509d1) listscroll_fast2_pane

0xd2a9,	// (0x00058c1d) grid_fast2_pane

0xd2b3,	// (0x00058c27) listscroll_fast2_pane_g1

0xd2bb,	// (0x00058c2f) listscroll_fast2_pane_g2

0x0001,

0xfbd1,	// (0x0005b545) listscroll_fast2_pane_g

0x9e1e,	// (0x00055792) scroll_pane_cp26

0x5081,	// (0x000509f5) cell_fast2_pane_ParamLimits

0x5081,	// (0x000509f5) cell_fast2_pane

0x5096,	// (0x00050a0a) cell_fast2_pane_g1

0x509f,	// (0x00050a13) cell_fast2_pane_g2

0x50a8,	// (0x00050a1c) cell_fast2_pane_g3

0x0002,

0xfbd6,	// (0x0005b54a) cell_fast2_pane_g

0x9a21,	// (0x00055395) grid_highlight_pane_cp9

0x9a36,	// (0x000553aa) main_eswt_pane_ParamLimits

0x9a36,	// (0x000553aa) main_eswt_pane

0x5016,	// (0x0005098a) list_single_text_info_pane

0x50b0,	// (0x00050a24) eswt_ctrl_button_pane

0x50b0,	// (0x00050a24) eswt_ctrl_canvas_pane

0xd2c5,	// (0x00058c39) eswt_ctrl_combo_pane

0x50b0,	// (0x00050a24) eswt_ctrl_default_pane

0x50b0,	// (0x00050a24) eswt_ctrl_label_pane

0x50c0,	// (0x00050a34) eswt_ctrl_wait_pane

0xd2cd,	// (0x00058c41) eswt_shell_pane

0x8e69,	// (0x000547dd) listscroll_eswt_app_pane

0x50e8,	// (0x00050a5c) popup_eswt_tasktip_window_ParamLimits

0x50e8,	// (0x00050a5c) popup_eswt_tasktip_window

0x222d,	// (0x0004dba1) bg_popup_window_pane_cp18

0x50f9,	// (0x00050a6d) eswt_control_pane_g1_ParamLimits

0x50f9,	// (0x00050a6d) eswt_control_pane_g1

0x5106,	// (0x00050a7a) eswt_control_pane_g2_ParamLimits

0x5106,	// (0x00050a7a) eswt_control_pane_g2

0x5113,	// (0x00050a87) eswt_control_pane_g3_ParamLimits

0x5113,	// (0x00050a87) eswt_control_pane_g3

0x5120,	// (0x00050a94) eswt_control_pane_g4_ParamLimits

0x5120,	// (0x00050a94) eswt_control_pane_g4

0x0003,

0xfbdd,	// (0x0005b551) eswt_control_pane_g_ParamLimits

0xfbdd,	// (0x0005b551) eswt_control_pane_g

0x9ca0,	// (0x00055614) bg_button_pane_ParamLimits

0x9ca0,	// (0x00055614) bg_button_pane

0x9a36,	// (0x000553aa) common_borders_pane_copy2_ParamLimits

0x9a36,	// (0x000553aa) common_borders_pane_copy2

0x512d,	// (0x00050aa1) control_button_pane_g1_ParamLimits

0x512d,	// (0x00050aa1) control_button_pane_g1

0x5139,	// (0x00050aad) control_button_pane_g2_ParamLimits

0x5139,	// (0x00050aad) control_button_pane_g2

0x5145,	// (0x00050ab9) control_button_pane_g3_ParamLimits

0x5145,	// (0x00050ab9) control_button_pane_g3

0x0002,

0xfbe6,	// (0x0005b55a) control_button_pane_g_ParamLimits

0xfbe6,	// (0x0005b55a) control_button_pane_g

0x5159,	// (0x00050acd) control_button_pane_t1

0x5167,	// (0x00050adb) control_button_pane_t2

0x0001,

0xfbed,	// (0x0005b561) control_button_pane_t

0x21a1,	// (0x0004db15) bg_button_pane_g1

0x21a9,	// (0x0004db1d) bg_button_pane_g2

0x21b1,	// (0x0004db25) bg_button_pane_g3

0x21b9,	// (0x0004db2d) bg_button_pane_g4

0x21c1,	// (0x0004db35) bg_button_pane_g5

0x21c9,	// (0x0004db3d) bg_button_pane_g6

0x21d1,	// (0x0004db45) bg_button_pane_g7

0x21d9,	// (0x0004db4d) bg_button_pane_g8

0x21e1,	// (0x0004db55) bg_button_pane_g9

0x0008,

0xf835,	// (0x0005b1a9) bg_button_pane_g

0x472c,	// (0x000500a0) common_borders_pane_ParamLimits

0x472c,	// (0x000500a0) common_borders_pane

0x50f9,	// (0x00050a6d) eswt_control_pane_g1_copy1_ParamLimits

0x50f9,	// (0x00050a6d) eswt_control_pane_g1_copy1

0x5106,	// (0x00050a7a) eswt_control_pane_g2_copy1_ParamLimits

0x5106,	// (0x00050a7a) eswt_control_pane_g2_copy1

0x5113,	// (0x00050a87) eswt_control_pane_g3_copy1_ParamLimits

0x5113,	// (0x00050a87) eswt_control_pane_g3_copy1

0x5120,	// (0x00050a94) eswt_control_pane_g4_copy1_ParamLimits

0x5120,	// (0x00050a94) eswt_control_pane_g4_copy1

0x4767,	// (0x000500db) bg_eswt_ctrl_canvas_pane_g1

0x472c,	// (0x000500a0) common_borders_pane_cp2_ParamLimits

0x472c,	// (0x000500a0) common_borders_pane_cp2

0x472c,	// (0x000500a0) common_borders_pane_cp3_ParamLimits

0x472c,	// (0x000500a0) common_borders_pane_cp3

0x5175,	// (0x00050ae9) separator_horizontal_pane

0x517d,	// (0x00050af1) separator_vertical_pane

0x50f9,	// (0x00050a6d) eswt_control_pane_g1_copy2_ParamLimits

0x50f9,	// (0x00050a6d) eswt_control_pane_g1_copy2

0x5106,	// (0x00050a7a) eswt_control_pane_g2_copy2_ParamLimits

0x5106,	// (0x00050a7a) eswt_control_pane_g2_copy2

0x5113,	// (0x00050a87) eswt_control_pane_g3_copy2_ParamLimits

0x5113,	// (0x00050a87) eswt_control_pane_g3_copy2

0x5120,	// (0x00050a94) eswt_control_pane_g4_copy2_ParamLimits

0x5120,	// (0x00050a94) eswt_control_pane_g4_copy2

0x8e69,	// (0x000547dd) common_borders_pane_cp4

0x5186,	// (0x00050afa) separator_horizontal_pane_g1

0x518f,	// (0x00050b03) separator_horizontal_pane_g2

0x5198,	// (0x00050b0c) separator_horizontal_pane_g3

0x0002,

0xfbf2,	// (0x0005b566) separator_horizontal_pane_g

0x50f9,	// (0x00050a6d) eswt_control_pane_g1_copy3_ParamLimits

0x50f9,	// (0x00050a6d) eswt_control_pane_g1_copy3

0x5106,	// (0x00050a7a) eswt_control_pane_g2_copy3_ParamLimits

0x5106,	// (0x00050a7a) eswt_control_pane_g2_copy3

0x5113,	// (0x00050a87) eswt_control_pane_g3_copy3_ParamLimits

0x5113,	// (0x00050a87) eswt_control_pane_g3_copy3

0x5120,	// (0x00050a94) eswt_control_pane_g4_copy3_ParamLimits

0x5120,	// (0x00050a94) eswt_control_pane_g4_copy3

0x8e69,	// (0x000547dd) common_borders_pane_cp5

0x51a1,	// (0x00050b15) separator_vertical_pane_g1

0x51aa,	// (0x00050b1e) separator_vertical_pane_g2

0x51b3,	// (0x00050b27) separator_vertical_pane_g3

0x0002,

0xfbf9,	// (0x0005b56d) separator_vertical_pane_g

0x50f9,	// (0x00050a6d) eswt_control_pane_g1_copy4_ParamLimits

0x50f9,	// (0x00050a6d) eswt_control_pane_g1_copy4

0x5106,	// (0x00050a7a) eswt_control_pane_g2_copy4_ParamLimits

0x5106,	// (0x00050a7a) eswt_control_pane_g2_copy4

0x5113,	// (0x00050a87) eswt_control_pane_g3_copy4_ParamLimits

0x5113,	// (0x00050a87) eswt_control_pane_g3_copy4

0x5120,	// (0x00050a94) eswt_control_pane_g4_copy4_ParamLimits

0x5120,	// (0x00050a94) eswt_control_pane_g4_copy4

0xd2ed,	// (0x00058c61) eswt_ctrl_combo_button_pane

0xd2f5,	// (0x00058c69) eswt_ctrl_input_pane

0xd2fd,	// (0x00058c71) popup_choice_list_window_cp70

0xd305,	// (0x00058c79) eswt_ctrl_input_pane_t1

0x8e69,	// (0x000547dd) input_focus_pane_cp70

0x472c,	// (0x000500a0) bg_button_pane_cp70_ParamLimits

0x472c,	// (0x000500a0) bg_button_pane_cp70

0xd313,	// (0x00058c87) eswt_ctrl_combo_button_pane_g1

0x51ea,	// (0x00050b5e) wait_bar_pane_cp70

0x222d,	// (0x0004dba1) bg_popup_window_pane_cp70_ParamLimits

0x222d,	// (0x0004dba1) bg_popup_window_pane_cp70

0x51f2,	// (0x00050b66) popup_eswt_tasktip_window_t1

0x5208,	// (0x00050b7c) wait_bar_pane_cp71_ParamLimits

0x5208,	// (0x00050b7c) wait_bar_pane_cp71

0x5214,	// (0x00050b88) grid_eswt_app_pane

0xa186,	// (0x00055afa) scroll_pane_cp70

0xd31b,	// (0x00058c8f) cell_eswt_app_pane_ParamLimits

0xd31b,	// (0x00058c8f) cell_eswt_app_pane

0xd345,	// (0x00058cb9) cell_eswt_app_pane_g1_ParamLimits

0xd345,	// (0x00058cb9) cell_eswt_app_pane_g1

0xd374,	// (0x00058ce8) cell_eswt_app_pane_g2_ParamLimits

0xd374,	// (0x00058ce8) cell_eswt_app_pane_g2

0x0001,

0xfc00,	// (0x0005b574) cell_eswt_app_pane_g_ParamLimits

0xfc00,	// (0x0005b574) cell_eswt_app_pane_g

0xd398,	// (0x00058d0c) cell_eswt_app_pane_t1_ParamLimits

0xd398,	// (0x00058d0c) cell_eswt_app_pane_t1

0x52d2,	// (0x00050c46) grid_highlight_pane_cp70_ParamLimits

0x52d2,	// (0x00050c46) grid_highlight_pane_cp70

0xc3ae,	// (0x00057d22) set_content_pane_g1

0xa5d4,	// (0x00055f48) status_small_volume_pane

0xb793,	// (0x00057107) status_small_volume_pane_g1

0xb79b,	// (0x0005710f) volume_small2_pane

0xb7a4,	// (0x00057118) volume_small2_pane_g1

0xb7ad,	// (0x00057121) volume_small2_pane_g2

0xb7b6,	// (0x0005712a) volume_small2_pane_g3

0xb7bf,	// (0x00057133) volume_small2_pane_g4

0xb7c8,	// (0x0005713c) volume_small2_pane_g5

0xb7d1,	// (0x00057145) volume_small2_pane_g6

0xb7da,	// (0x0005714e) volume_small2_pane_g7

0xb7e3,	// (0x00057157) volume_small2_pane_g8

0xb7ec,	// (0x00057160) volume_small2_pane_g9

0xb7f5,	// (0x00057169) volume_small2_pane_g10

0x0009,

0xfc05,	// (0x0005b579) volume_small2_pane_g

0x4b1f,	// (0x00050493) fep_vkb_top_text_pane_g1_ParamLimits

0xd1f1,	// (0x00058b65) fep_vkb_top_text_pane_t1_ParamLimits

0x4dea,	// (0x0005075e) popup_preview_fixed_window_g3_ParamLimits

0x4dea,	// (0x0005075e) popup_preview_fixed_window_g3

0xae61,	// (0x000567d5) popup_toolbar_trans_pane

0xcaf2,	// (0x00058466) aid_height_set_list_ParamLimits

0x356c,	// (0x0004eee0) aid_size_parent_ParamLimits

0x9e84,	// (0x000557f8) list_highlight_pane_cp2_ParamLimits

0xc3ae,	// (0x00057d22) set_content_pane_g1_ParamLimits

0xcc5a,	// (0x000585ce) list_single_image_pane_ParamLimits

0xcc5a,	// (0x000585ce) list_single_image_pane

0xd3ca,	// (0x00058d3e) aid_size_cell_image_ParamLimits

0xd3ca,	// (0x00058d3e) aid_size_cell_image

0xd3d7,	// (0x00058d4b) grid_single_image_pane_ParamLimits

0xd3d7,	// (0x00058d4b) grid_single_image_pane

0xd255,	// (0x00058bc9) list_single_image_pane_g1_ParamLimits

0xd255,	// (0x00058bc9) list_single_image_pane_g1

0x4f1a,	// (0x0005088e) list_single_image_pane_g2_ParamLimits

0x4f1a,	// (0x0005088e) list_single_image_pane_g2

0x0001,

0xfc1a,	// (0x0005b58e) list_single_image_pane_g_ParamLimits

0xfc1a,	// (0x0005b58e) list_single_image_pane_g

0x52f7,	// (0x00050c6b) list_single_image_pane_t1_ParamLimits

0x52f7,	// (0x00050c6b) list_single_image_pane_t1

0xd3e3,	// (0x00058d57) cell_image_list_pane_ParamLimits

0xd3e3,	// (0x00058d57) cell_image_list_pane

0xd3f7,	// (0x00058d6b) cell_image_list_pane_g1

0xd400,	// (0x00058d74) cell_image_list_pane_g2

0x0001,

0xfc1f,	// (0x0005b593) cell_image_list_pane_g

0xd409,	// (0x00058d7d) aid_size_cell_tb_trans_pane

0x9ca0,	// (0x00055614) bg_tb_trans_pane

0xd41b,	// (0x00058d8f) grid_tb_trans_pane

0x21a1,	// (0x0004db15) bg_tb_trans_pane_g1

0x21a9,	// (0x0004db1d) bg_tb_trans_pane_g2

0x21b1,	// (0x0004db25) bg_tb_trans_pane_g3

0x21b9,	// (0x0004db2d) bg_tb_trans_pane_g4

0x21c1,	// (0x0004db35) bg_tb_trans_pane_g5

0x21d9,	// (0x0004db4d) bg_tb_trans_pane_g6

0x21e1,	// (0x0004db55) bg_tb_trans_pane_g7

0x21c9,	// (0x0004db3d) bg_tb_trans_pane_g8

0x21d1,	// (0x0004db45) bg_tb_trans_pane_g9

0x0008,

0xfc24,	// (0x0005b598) bg_tb_trans_pane_g

0xd42f,	// (0x00058da3) cell_toolbar_trans_pane_ParamLimits

0xd42f,	// (0x00058da3) cell_toolbar_trans_pane

0x4767,	// (0x000500db) cell_toolbar_trans_pane_g1

0xcf22,	// (0x00058896) list_form2_midp_pane_t1

0xcf30,	// (0x000588a4) list_form2_midp_pane_t2

0x0001,

0xfacd,	// (0x0005b441) list_form2_midp_pane_t

0x4355,	// (0x0004fcc9) scroll_pane_cp51_ParamLimits

0x4511,	// (0x0004fe85) form2_midp_wait_pane_g1

0x451a,	// (0x0004fe8e) form2_midp_wait_pane_g2

0x4523,	// (0x0004fe97) form2_midp_wait_pane_g3

0x0002,

0xfae2,	// (0x0005b456) form2_midp_wait_pane_g

0x935a,	// (0x00054cce) list_highlight_pane_cp21_ParamLimits

0x456b,	// (0x0004fedf) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x457a,	// (0x0004feee) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3720,	// (0x0004f094) list_single_2graphic_im_pane_ParamLimits

0x3720,	// (0x0004f094) list_single_2graphic_im_pane

0xd455,	// (0x00058dc9) list_single_2graphic_im_pane_g1_ParamLimits

0xd455,	// (0x00058dc9) list_single_2graphic_im_pane_g1

0xd466,	// (0x00058dda) list_single_2graphic_im_pane_g2_ParamLimits

0xd466,	// (0x00058dda) list_single_2graphic_im_pane_g2

0xd472,	// (0x00058de6) list_single_2graphic_im_pane_g3_ParamLimits

0xd472,	// (0x00058de6) list_single_2graphic_im_pane_g3

0x0003,

0xfc37,	// (0x0005b5ab) list_single_2graphic_im_pane_g_ParamLimits

0xfc37,	// (0x0005b5ab) list_single_2graphic_im_pane_g

0xd486,	// (0x00058dfa) list_single_2graphic_im_pane_t1_ParamLimits

0xd486,	// (0x00058dfa) list_single_2graphic_im_pane_t1

0x4df6,	// (0x0005076a) list_single_graphic_2heading_pane_fp_ParamLimits

0x4df6,	// (0x0005076a) list_single_graphic_2heading_pane_fp

0xed0e,	// (0x0005a682) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xed0e,	// (0x0005a682) list_single_graphic_2heading_pane_fp_g1

0x4e0c,	// (0x00050780) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4e0c,	// (0x00050780) list_single_graphic_2heading_pane_fp_g2

0xd255,	// (0x00058bc9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd255,	// (0x00058bc9) list_single_graphic_2heading_pane_fp_g3

0x4f1a,	// (0x0005088e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4f1a,	// (0x0005088e) list_single_graphic_2heading_pane_fp_g4

0x4e18,	// (0x0005078c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4e18,	// (0x0005078c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb65,	// (0x0005b4d9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb65,	// (0x0005b4d9) list_single_graphic_2heading_pane_fp_g

0xee2c,	// (0x0005a7a0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xee2c,	// (0x0005a7a0) list_single_graphic_2heading_pane_fp_t1

0xed46,	// (0x0005a6ba) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xed46,	// (0x0005a6ba) list_single_graphic_2heading_pane_fp_t2

0xee42,	// (0x0005a7b6) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xee42,	// (0x0005a7b6) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc40,	// (0x0005b5b4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc40,	// (0x0005b5b4) list_single_graphic_2heading_pane_fp_t

0x47f3,	// (0x00050167) fep_hwr_write_pane_g5_ParamLimits

0x47f3,	// (0x00050167) fep_hwr_write_pane_g5

0x47ff,	// (0x00050173) fep_hwr_write_pane_g6_ParamLimits

0x47ff,	// (0x00050173) fep_hwr_write_pane_g6

0xd2cd,	// (0x00058c41) eswt_shell_pane_ParamLimits

0x222d,	// (0x0004dba1) bg_popup_window_pane_cp18_ParamLimits

0x2620,	// (0x0004df94) heading_pane_cp70

0x51f2,	// (0x00050b66) popup_eswt_tasktip_window_t1_ParamLimits

0xaf7e,	// (0x000568f2) aid_touch_tab_arrow_left

0xaf94,	// (0x00056908) aid_touch_tab_arrow_right

0x9234,	// (0x00054ba8) title_pane_g3_ParamLimits

0x9234,	// (0x00054ba8) title_pane_g3

0x9c5f,	// (0x000555d3) set_value_pane_g1

0xae61,	// (0x000567d5) popup_toolbar_trans_pane_ParamLimits

0xd409,	// (0x00058d7d) aid_size_cell_tb_trans_pane_ParamLimits

0x9ca0,	// (0x00055614) bg_tb_trans_pane_ParamLimits

0xd41b,	// (0x00058d8f) grid_tb_trans_pane_ParamLimits

0x96c4,	// (0x00055038) cont_note_pane_ParamLimits

0x96c4,	// (0x00055038) cont_note_pane

0x9a36,	// (0x000553aa) cont_snote2_single_text_pane_ParamLimits

0x9a36,	// (0x000553aa) cont_snote2_single_text_pane

0x9a36,	// (0x000553aa) cont_snote2_single_graphic_pane_ParamLimits

0x9a36,	// (0x000553aa) cont_snote2_single_graphic_pane

0x2847,	// (0x0004e1bb) cont_note_wait_pane_ParamLimits

0x2847,	// (0x0004e1bb) cont_note_wait_pane

0x2847,	// (0x0004e1bb) cont_note_image_pane_ParamLimits

0x2847,	// (0x0004e1bb) cont_note_image_pane

0x53ed,	// (0x00050d61) popup_note2_window_g1_ParamLimits

0x53ed,	// (0x00050d61) popup_note2_window_g1

0xd4c4,	// (0x00058e38) popup_note2_window_t1_ParamLimits

0xd4c4,	// (0x00058e38) popup_note2_window_t1

0xd509,	// (0x00058e7d) popup_note2_window_t2_ParamLimits

0xd509,	// (0x00058e7d) popup_note2_window_t2

0xd54e,	// (0x00058ec2) popup_note2_window_t3_ParamLimits

0xd54e,	// (0x00058ec2) popup_note2_window_t3

0x54ed,	// (0x00050e61) popup_note2_window_t4_ParamLimits

0x54ed,	// (0x00050e61) popup_note2_window_t4

0x9748,	// (0x000550bc) popup_note2_window_t5_ParamLimits

0x9748,	// (0x000550bc) popup_note2_window_t5

0x0004,

0xfc4c,	// (0x0005b5c0) popup_note2_window_t_ParamLimits

0xfc4c,	// (0x0005b5c0) popup_note2_window_t

0x551c,	// (0x00050e90) popup_note2_image_window_g1_ParamLimits

0x551c,	// (0x00050e90) popup_note2_image_window_g1

0xd593,	// (0x00058f07) popup_note2_image_window_g2_ParamLimits

0xd593,	// (0x00058f07) popup_note2_image_window_g2

0x0001,

0xfc57,	// (0x0005b5cb) popup_note2_image_window_g_ParamLimits

0xfc57,	// (0x0005b5cb) popup_note2_image_window_g

0x553a,	// (0x00050eae) popup_note2_image_window_t1_ParamLimits

0x553a,	// (0x00050eae) popup_note2_image_window_t1

0x5552,	// (0x00050ec6) popup_note2_image_window_t2_ParamLimits

0x5552,	// (0x00050ec6) popup_note2_image_window_t2

0x556a,	// (0x00050ede) popup_note2_image_window_t3_ParamLimits

0x556a,	// (0x00050ede) popup_note2_image_window_t3

0x0002,

0xfc5c,	// (0x0005b5d0) popup_note2_image_window_t_ParamLimits

0xfc5c,	// (0x0005b5d0) popup_note2_image_window_t

0x2855,	// (0x0004e1c9) popup_note2_wait_window_g1_ParamLimits

0x2855,	// (0x0004e1c9) popup_note2_wait_window_g1

0x2861,	// (0x0004e1d5) popup_note2_wait_window_g2_ParamLimits

0x2861,	// (0x0004e1d5) popup_note2_wait_window_g2

0x286d,	// (0x0004e1e1) popup_note2_wait_window_g3_ParamLimits

0x286d,	// (0x0004e1e1) popup_note2_wait_window_g3

0x0002,

0xf817,	// (0x0005b18b) popup_note2_wait_window_g_ParamLimits

0xf817,	// (0x0005b18b) popup_note2_wait_window_g

0x5586,	// (0x00050efa) popup_note2_wait_window_t1_ParamLimits

0x5586,	// (0x00050efa) popup_note2_wait_window_t1

0x55a4,	// (0x00050f18) popup_note2_wait_window_t2_ParamLimits

0x55a4,	// (0x00050f18) popup_note2_wait_window_t2

0x55c2,	// (0x00050f36) popup_note2_wait_window_t3_ParamLimits

0x55c2,	// (0x00050f36) popup_note2_wait_window_t3

0x55d4,	// (0x00050f48) popup_note2_wait_window_t4_ParamLimits

0x55d4,	// (0x00050f48) popup_note2_wait_window_t4

0x0003,

0xfc63,	// (0x0005b5d7) popup_note2_wait_window_t_ParamLimits

0xfc63,	// (0x0005b5d7) popup_note2_wait_window_t

0x55e6,	// (0x00050f5a) wait_bar2_pane_ParamLimits

0x55e6,	// (0x00050f5a) wait_bar2_pane

0x55fe,	// (0x00050f72) popup_snote2_single_text_window_g1_ParamLimits

0x55fe,	// (0x00050f72) popup_snote2_single_text_window_g1

0x5626,	// (0x00050f9a) popup_snote2_single_text_window_t1_ParamLimits

0x5626,	// (0x00050f9a) popup_snote2_single_text_window_t1

0x5672,	// (0x00050fe6) popup_snote2_single_text_window_t2_ParamLimits

0x5672,	// (0x00050fe6) popup_snote2_single_text_window_t2

0x56be,	// (0x00051032) popup_snote2_single_text_window_t3_ParamLimits

0x56be,	// (0x00051032) popup_snote2_single_text_window_t3

0x56ff,	// (0x00051073) popup_snote2_single_text_window_t4_ParamLimits

0x56ff,	// (0x00051073) popup_snote2_single_text_window_t4

0x5735,	// (0x000510a9) popup_snote2_single_text_window_t5_ParamLimits

0x5735,	// (0x000510a9) popup_snote2_single_text_window_t5

0x0004,

0xfc6c,	// (0x0005b5e0) popup_snote2_single_text_window_t_ParamLimits

0xfc6c,	// (0x0005b5e0) popup_snote2_single_text_window_t

0xd5a5,	// (0x00058f19) popup_snote2_single_graphic_window_g1_ParamLimits

0xd5a5,	// (0x00058f19) popup_snote2_single_graphic_window_g1

0x5788,	// (0x000510fc) popup_snote2_single_graphic_window_g2_ParamLimits

0x5788,	// (0x000510fc) popup_snote2_single_graphic_window_g2

0x0001,

0xfc77,	// (0x0005b5eb) popup_snote2_single_graphic_window_g_ParamLimits

0xfc77,	// (0x0005b5eb) popup_snote2_single_graphic_window_g

0x57b0,	// (0x00051124) popup_snote2_single_graphic_window_t1_ParamLimits

0x57b0,	// (0x00051124) popup_snote2_single_graphic_window_t1

0x57fc,	// (0x00051170) popup_snote2_single_graphic_window_t2_ParamLimits

0x57fc,	// (0x00051170) popup_snote2_single_graphic_window_t2

0x56be,	// (0x00051032) popup_snote2_single_graphic_window_t3_ParamLimits

0x56be,	// (0x00051032) popup_snote2_single_graphic_window_t3

0x56ff,	// (0x00051073) popup_snote2_single_graphic_window_t4_ParamLimits

0x56ff,	// (0x00051073) popup_snote2_single_graphic_window_t4

0x5735,	// (0x000510a9) popup_snote2_single_graphic_window_t5_ParamLimits

0x5735,	// (0x000510a9) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7c,	// (0x0005b5f0) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7c,	// (0x0005b5f0) popup_snote2_single_graphic_window_t

0x4212,	// (0x0004fb86) clock_nsta_pane_cp2_t1

0x4212,	// (0x0004fb86) clock_nsta_pane_cp2_t2

0x0001,

0xfaa3,	// (0x0005b417) clock_nsta_pane_cp2_t

0xe8af,	// (0x0005a223) form_field_data_wide_pane_g1_ParamLimits

0x9cae,	// (0x00055622) form_field_data_wide_pane_g2_ParamLimits

0x9cae,	// (0x00055622) form_field_data_wide_pane_g2

0x9cba,	// (0x0005562e) form_field_data_wide_pane_g3_ParamLimits

0x9cba,	// (0x0005562e) form_field_data_wide_pane_g3

0x0002,

0xf64f,	// (0x0005afc3) form_field_data_wide_pane_g_ParamLimits

0xf64f,	// (0x0005afc3) form_field_data_wide_pane_g

0xce43,	// (0x000587b7) grid_touch_3_pane_ParamLimits

0xce43,	// (0x000587b7) grid_touch_3_pane

0xd5cd,	// (0x00058f41) cell_touch_3_pane_ParamLimits

0xd5cd,	// (0x00058f41) cell_touch_3_pane

0x4767,	// (0x000500db) cell_touch_3_pane_g1

0x4767,	// (0x000500db) cell_touch_3_pane_g2

0x0001,

0xfb28,	// (0x0005b49c) cell_touch_3_pane_g

0x97a0,	// (0x00055114) cont_query_data_pane

0x97a8,	// (0x0005511c) cont_query_data_pane_cp1

0x5876,	// (0x000511ea) button_value_adjust_pane_cp7

0x587e,	// (0x000511f2) query_popup_pane_cp3

0xc0ab,	// (0x00057a1f) bg_popup_sub_pane_cp22_ParamLimits

0xa355,	// (0x00055cc9) navi_navi_volume_pane_cp2

0xa364,	// (0x00055cd8) popup_side_volume_key_window_g2

0xa373,	// (0x00055ce7) popup_side_volume_key_window_g3

0x0002,

0xf6e5,	// (0x0005b059) popup_side_volume_key_window_g

0xa382,	// (0x00055cf6) popup_side_volume_key_window_t2

0x0001,

0xf6ec,	// (0x0005b060) popup_side_volume_key_window_t

0xa447,	// (0x00055dbb) popup_side_volume_key_window_ParamLimits

0x87a7,	// (0x0005411b) list_double_graphic_pane_g4_ParamLimits

0x87a7,	// (0x0005411b) list_double_graphic_pane_g4

0xcc46,	// (0x000585ba) list_single_2heading_msg_pane_ParamLimits

0xcc46,	// (0x000585ba) list_single_2heading_msg_pane

0xb7fe,	// (0x00057172) list_single_2heading_msg_pane_g1_ParamLimits

0xb7fe,	// (0x00057172) list_single_2heading_msg_pane_g1

0xb80a,	// (0x0005717e) list_single_2heading_msg_pane_g2_ParamLimits

0xb80a,	// (0x0005717e) list_single_2heading_msg_pane_g2

0xb81d,	// (0x00057191) list_single_2heading_msg_pane_g3_ParamLimits

0xb81d,	// (0x00057191) list_single_2heading_msg_pane_g3

0xb829,	// (0x0005719d) list_single_2heading_msg_pane_g4_ParamLimits

0xb829,	// (0x0005719d) list_single_2heading_msg_pane_g4

0x0003,

0xfc87,	// (0x0005b5fb) list_single_2heading_msg_pane_g_ParamLimits

0xfc87,	// (0x0005b5fb) list_single_2heading_msg_pane_g

0x8d16,	// (0x0005468a) list_single_2heading_msg_pane_t1_ParamLimits

0x8d16,	// (0x0005468a) list_single_2heading_msg_pane_t1

0x8d3e,	// (0x000546b2) list_single_2heading_msg_pane_t2_ParamLimits

0x8d3e,	// (0x000546b2) list_single_2heading_msg_pane_t2

0x8da9,	// (0x0005471d) list_single_2heading_msg_pane_t3_ParamLimits

0x8da9,	// (0x0005471d) list_single_2heading_msg_pane_t3

0xee62,	// (0x0005a7d6) list_single_2heading_msg_pane_t4_ParamLimits

0xee62,	// (0x0005a7d6) list_single_2heading_msg_pane_t4

0x0003,

0xfc90,	// (0x0005b604) list_single_2heading_msg_pane_t_ParamLimits

0xfc90,	// (0x0005b604) list_single_2heading_msg_pane_t

0x9240,	// (0x00054bb4) title_pane_g4_ParamLimits

0x9240,	// (0x00054bb4) title_pane_g4

0xf110,	// (0x0005aa84) title_pane_stacon_g3_ParamLimits

0xf110,	// (0x0005aa84) title_pane_stacon_g3

0x53b0,	// (0x00050d24) list_single_2graphic_im_pane_g4_ParamLimits

0x53b0,	// (0x00050d24) list_single_2graphic_im_pane_g4

0xc99f,	// (0x00058313) popup_side_volume_key_window_cp

0x3a44,	// (0x0004f3b8) main_idle_act2_pane_t1

0x08cd,	// (0x0004c241) toolbar_button_pane_g10

0x9bc1,	// (0x00055535) popup_toolbar_window_cp1

0x4203,	// (0x0004fb77) clock_nsta_pane_cp_t1

0x4203,	// (0x0004fb77) clock_nsta_pane_cp_t2

0x0001,

0xfa9e,	// (0x0005b412) clock_nsta_pane_cp_t

0xa355,	// (0x00055cc9) navi_navi_volume_pane_cp2_ParamLimits

0xf2e4,	// (0x0005ac58) popup_side_volume_key_window_g1_ParamLimits

0xa364,	// (0x00055cd8) popup_side_volume_key_window_g2_ParamLimits

0xa373,	// (0x00055ce7) popup_side_volume_key_window_g3_ParamLimits

0xf6e5,	// (0x0005b059) popup_side_volume_key_window_g_ParamLimits

0x0e9a,	// (0x0004c80e) fep_hwr_aid_pane

0xd0a5,	// (0x00058a19) bg_fep_hwr_top_pane_g4_ParamLimits

0x47c3,	// (0x00050137) fep_hwr_top_pane_g1_ParamLimits

0x47d5,	// (0x00050149) fep_hwr_top_pane_g2_ParamLimits

0x0f53,	// (0x0004c8c7) fep_hwr_top_pane_g3_ParamLimits

0xfaf3,	// (0x0005b467) fep_hwr_top_pane_g_ParamLimits

0x0f68,	// (0x0004c8dc) fep_hwr_top_text_pane_ParamLimits

0x3051,	// (0x0004e9c5) aid_touch_tab_arrow_arrow_2

0x305a,	// (0x0004e9ce) aid_touch_tab_arrow_left_2

0x0eae,	// (0x0004c822) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0ee5,	// (0x0004c859) fep_hwr_prediction_pane

0x492e,	// (0x000502a2) fep_vkb_prediction_pane

0xd1d1,	// (0x00058b45) fep_vkb_side_pane_g3_ParamLimits

0xd1d1,	// (0x00058b45) fep_vkb_side_pane_g3

0x49d7,	// (0x0005034b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4e6c,	// (0x000507e0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4e79,	// (0x000507ed) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9d,	// (0x0005b511) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x58a3,	// (0x00051217) fep_hwr_prediction_pane_g1

0x1295,	// (0x0004cc09) fep_hwr_prediction_pane_g2

0x129d,	// (0x0004cc11) fep_hwr_prediction_pane_g3

0x12a5,	// (0x0004cc19) fep_hwr_prediction_pane_g4

0x0003,

0xfc99,	// (0x0005b60d) fep_hwr_prediction_pane_g

0x58a3,	// (0x00051217) fep_vkb_prediction_pane_g1

0x58ad,	// (0x00051221) fep_vkb_prediction_pane_g2

0x58b5,	// (0x00051229) fep_vkb_prediction_pane_g3

0x58bd,	// (0x00051231) fep_vkb_prediction_pane_g4

0x0003,

0xfca2,	// (0x0005b616) fep_vkb_prediction_pane_g

0xb65a,	// (0x00056fce) slider_set_pane_g3

0xb66e,	// (0x00056fe2) slider_set_pane_g4

0xb686,	// (0x00056ffa) slider_set_pane_g5

0xb65a,	// (0x00056fce) slider_set_pane_g6

0xb69c,	// (0x00057010) slider_set_pane_g7

0x36cd,	// (0x0004f041) slider_form_pane_g3

0x36d6,	// (0x0004f04a) slider_form_pane_g4

0x36de,	// (0x0004f052) slider_form_pane_g5

0x36cd,	// (0x0004f041) slider_form_pane_g6

0xcc3d,	// (0x000585b1) slider_form_pane_g7

0x3cf0,	// (0x0004f664) slider_set_pane_vc_g3

0x3cf9,	// (0x0004f66d) slider_set_pane_vc_g4

0x3d02,	// (0x0004f676) slider_set_pane_vc_g5

0x3cf0,	// (0x0004f664) slider_set_pane_vc_g6

0x3d0b,	// (0x0004f67f) slider_set_pane_vc_g7

0x3ec1,	// (0x0004f835) slider_form_pane_vc_g1

0x3eca,	// (0x0004f83e) slider_form_pane_vc_g2

0x3ed3,	// (0x0004f847) slider_form_pane_vc_g3

0x3ec1,	// (0x0004f835) slider_form_pane_vc_g4

0x3edc,	// (0x0004f850) slider_form_pane_vc_g5

0x0004,

0xfa70,	// (0x0005b3e4) slider_form_pane_vc_g

0x8e69,	// (0x000547dd) main_idle_act3_pane

0x58c5,	// (0x00051239) ai3_links_pane

0xd616,	// (0x00058f8a) popup_ai3_data_window_ParamLimits

0xd616,	// (0x00058f8a) popup_ai3_data_window

0x8e69,	// (0x000547dd) grid_ai3_links_pane

0xd62e,	// (0x00058fa2) cell_ai3_links_pane_ParamLimits

0xd62e,	// (0x00058fa2) cell_ai3_links_pane

0x58fe,	// (0x00051272) bg_popup_sub_pane_cp11

0x590b,	// (0x0005127f) cell_ai3_links_pane_g1

0x8e69,	// (0x000547dd) bg_popup_sub_pane_cp12

0x5930,	// (0x000512a4) heading_ai3_data_pane

0x5938,	// (0x000512ac) list_ai3_gene_pane

0x5944,	// (0x000512b8) popup_ai3_data_window_g1

0x594c,	// (0x000512c0) heading_ai3_data_pane_g1

0x5954,	// (0x000512c8) heading_ai3_data_pane_t1

0xd648,	// (0x00058fbc) list_double_ai3_gene_pane_ParamLimits

0xd648,	// (0x00058fbc) list_double_ai3_gene_pane

0x596f,	// (0x000512e3) list_single_ai3_gene_pane_ParamLimits

0x596f,	// (0x000512e3) list_single_ai3_gene_pane

0x472c,	// (0x000500a0) list_highlight_pane_cp7_ParamLimits

0x472c,	// (0x000500a0) list_highlight_pane_cp7

0x597c,	// (0x000512f0) list_single_a13_gene_pane_t1_ParamLimits

0x597c,	// (0x000512f0) list_single_a13_gene_pane_t1

0x5993,	// (0x00051307) list_single_ai3_gene_pane_g1

0x599c,	// (0x00051310) list_single_ai3_gene_pane_g2

0x0001,

0xfcab,	// (0x0005b61f) list_single_ai3_gene_pane_g

0x59a4,	// (0x00051318) list_double_ai3_gene_pane_g1_ParamLimits

0x59a4,	// (0x00051318) list_double_ai3_gene_pane_g1

0xd655,	// (0x00058fc9) list_double_ai3_gene_pane_t1_ParamLimits

0xd655,	// (0x00058fc9) list_double_ai3_gene_pane_t1

0x59cc,	// (0x00051340) list_double_ai3_gene_pane_t2_ParamLimits

0x59cc,	// (0x00051340) list_double_ai3_gene_pane_t2

0x59e1,	// (0x00051355) list_double_ai3_gene_pane_t3_ParamLimits

0x59e1,	// (0x00051355) list_double_ai3_gene_pane_t3

0x0002,

0xfcb0,	// (0x0005b624) list_double_ai3_gene_pane_t_ParamLimits

0xfcb0,	// (0x0005b624) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xee58,	// (0x0005a7cc) aid_size_min_col_2

0xd600,	// (0x00058f74) aid_size_min_msg_ParamLimits

0xd600,	// (0x00058f74) aid_size_min_msg

0xd1e5,	// (0x00058b59) fep_vkb_top_text_pane_g2_ParamLimits

0xd1e5,	// (0x00058b59) fep_vkb_top_text_pane_g2

0x0001,

0xfb23,	// (0x0005b497) fep_vkb_top_text_pane_g_ParamLimits

0xfb23,	// (0x0005b497) fep_vkb_top_text_pane_g

0x8e69,	// (0x000547dd) main_hc_apps_shell_pane

0x59fe,	// (0x00051372) grid_hc_apps_pane_ParamLimits

0x59fe,	// (0x00051372) grid_hc_apps_pane

0x5a10,	// (0x00051384) list_hc_apps_pane

0x5a18,	// (0x0005138c) scroll_pane_cp37_ParamLimits

0x5a18,	// (0x0005138c) scroll_pane_cp37

0xd671,	// (0x00058fe5) cell_hc_apps_pane_ParamLimits

0xd671,	// (0x00058fe5) cell_hc_apps_pane

0xd72f,	// (0x000590a3) cell_hc_apps_pane_g1_ParamLimits

0xd72f,	// (0x000590a3) cell_hc_apps_pane_g1

0x5b02,	// (0x00051476) cell_hc_apps_pane_g2_ParamLimits

0x5b02,	// (0x00051476) cell_hc_apps_pane_g2

0x5b1e,	// (0x00051492) cell_hc_apps_pane_g3_ParamLimits

0x5b1e,	// (0x00051492) cell_hc_apps_pane_g3

0x0002,

0xfcb7,	// (0x0005b62b) cell_hc_apps_pane_g_ParamLimits

0xfcb7,	// (0x0005b62b) cell_hc_apps_pane_g

0xd75b,	// (0x000590cf) cell_hc_apps_pane_t1_ParamLimits

0xd75b,	// (0x000590cf) cell_hc_apps_pane_t1

0x96c4,	// (0x00055038) grid_highlight_pane_cp10_ParamLimits

0x96c4,	// (0x00055038) grid_highlight_pane_cp10

0xd799,	// (0x0005910d) list_single_hc_apps_pane_ParamLimits

0xd799,	// (0x0005910d) list_single_hc_apps_pane

0xd7c9,	// (0x0005913d) list_single_hc_apps_pane_g1

0xb841,	// (0x000571b5) list_single_hc_apps_pane_g2

0x0001,

0xfcbe,	// (0x0005b632) list_single_hc_apps_pane_g

0xb85a,	// (0x000571ce) list_single_hc_apps_pane_g2_copy1

0x8e17,	// (0x0005478b) list_single_hc_apps_pane_t1

0x935a,	// (0x00054cce) bg_set_opt_pane_cp_ParamLimits

0x9368,	// (0x00054cdc) setting_slider_pane_t1_ParamLimits

0x9381,	// (0x00054cf5) setting_slider_pane_t2_ParamLimits

0x939b,	// (0x00054d0f) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0005aeab) setting_slider_pane_t_ParamLimits

0x93b3,	// (0x00054d27) slider_set_pane_ParamLimits

0xf500,	// (0x0005ae74) control_pane_g5_ParamLimits

0xf500,	// (0x0005ae74) control_pane_g5

0xcabf,	// (0x00058433) slider_set_pane_g1_ParamLimits

0x0b9b,	// (0x0004c50f) slider_set_pane_g2_ParamLimits

0xb65a,	// (0x00056fce) slider_set_pane_g3_ParamLimits

0xb66e,	// (0x00056fe2) slider_set_pane_g4_ParamLimits

0xb686,	// (0x00056ffa) slider_set_pane_g5_ParamLimits

0xb65a,	// (0x00056fce) slider_set_pane_g6_ParamLimits

0xb69c,	// (0x00057010) slider_set_pane_g7_ParamLimits

0xf933,	// (0x0005b2a7) slider_set_pane_g_ParamLimits

0xc359,	// (0x00057ccd) navi_icon_text_pane_ParamLimits

0xaf47,	// (0x000568bb) aid_fill_nsta_2_ParamLimits

0xaf7e,	// (0x000568f2) aid_touch_tab_arrow_left_ParamLimits

0xaf94,	// (0x00056908) aid_touch_tab_arrow_right_ParamLimits

0xb02f,	// (0x000569a3) clock_nsta_pane_ParamLimits

0x3033,	// (0x0004e9a7) navi_icon_pane_g1_ParamLimits

0x303f,	// (0x0004e9b3) navi_text_pane_t1_ParamLimits

0x4313,	// (0x0004fc87) navi_icon_text_pane_g1_ParamLimits

0x431f,	// (0x0004fc93) navi_icon_text_pane_t1_ParamLimits

0xd7c9,	// (0x0005913d) list_single_hc_apps_pane_g1_ParamLimits

0xb841,	// (0x000571b5) list_single_hc_apps_pane_g2_ParamLimits

0xfcbe,	// (0x0005b632) list_single_hc_apps_pane_g_ParamLimits

0xb85a,	// (0x000571ce) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8e17,	// (0x0005478b) list_single_hc_apps_pane_t1_ParamLimits

0x9139,	// (0x00054aad) popup_toolbar2_fixed_window_ParamLimits

0x9139,	// (0x00054aad) popup_toolbar2_fixed_window

0xae57,	// (0x000567cb) popup_toolbar2_float_window

0x8e69,	// (0x000547dd) bg_popup_sub_pane_cp27

0x5bfc,	// (0x00051570) grid_toolbar2_float_pane

0x8e69,	// (0x000547dd) bg_popup_sub_pane_cp26

0x5bfc,	// (0x00051570) grid_toolbar2_fixed_pane

0xd7e2,	// (0x00059156) cell_toolbar2_fixed_pane_ParamLimits

0xd7e2,	// (0x00059156) cell_toolbar2_fixed_pane

0xd7fc,	// (0x00059170) cell_toolbar2_fixed_pane_g1

0x2121,	// (0x0004da95) toolbar2_fixed_button_pane

0x21a1,	// (0x0004db15) toolbar2_fixed_button_pane_g1

0x21a9,	// (0x0004db1d) toolbar2_fixed_button_pane_g2

0x21b1,	// (0x0004db25) toolbar2_fixed_button_pane_g3

0x21b9,	// (0x0004db2d) toolbar2_fixed_button_pane_g4

0x21c1,	// (0x0004db35) toolbar2_fixed_button_pane_g5

0x21c9,	// (0x0004db3d) toolbar2_fixed_button_pane_g6

0x21d1,	// (0x0004db45) toolbar2_fixed_button_pane_g7

0x21d9,	// (0x0004db4d) toolbar2_fixed_button_pane_g8

0x21e1,	// (0x0004db55) toolbar2_fixed_button_pane_g9

0x0008,

0xf835,	// (0x0005b1a9) toolbar2_fixed_button_pane_g

0x5c1d,	// (0x00051591) cell_toolbar2_float_pane_ParamLimits

0x5c1d,	// (0x00051591) cell_toolbar2_float_pane

0x5c2e,	// (0x000515a2) cell_toolbar2_float_pane_g1

0x2121,	// (0x0004da95) toolbar2_fixed_button_pane_cp

0xd0cd,	// (0x00058a41) fep_vkb_accented_list_pane_ParamLimits

0xd0cd,	// (0x00058a41) fep_vkb_accented_list_pane

0x10b6,	// (0x0004ca2a) bg_popup_fep_shadow_pane_g9

0xc4ac,	// (0x00057e20) bg_popup_fep_shadow_pane_cp3

0x9e05,	// (0x00055779) list_accented_list_pane

0x5c37,	// (0x000515ab) list_single_accented_list_pane_ParamLimits

0x5c37,	// (0x000515ab) list_single_accented_list_pane

0xc4ac,	// (0x00057e20) list_highlight_pane_cp10

0x5c48,	// (0x000515bc) list_single_accented_list_pane_t1

0xad81,	// (0x000566f5) popup_slider_window_ParamLimits

0xad81,	// (0x000566f5) popup_slider_window

0x5886,	// (0x000511fa) aid_indentation_list_msg

0xd8ed,	// (0x00059261) bg_popup_window_pane_cp19

0x5d6e,	// (0x000516e2) popup_slider_window_g1

0x5d8a,	// (0x000516fe) popup_slider_window_g2

0x5da6,	// (0x0005171a) popup_slider_window_g3

0x0005,

0xfcc3,	// (0x0005b637) popup_slider_window_g

0x5e0c,	// (0x00051780) popup_slider_window_t1

0x5e80,	// (0x000517f4) small_volume_slider_vertical_pane

0x4767,	// (0x000500db) small_volume_slider_vertical_pane_g1

0x4767,	// (0x000500db) small_volume_slider_vertical_pane_g2

0x5e9c,	// (0x00051810) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd5,	// (0x0005b649) small_volume_slider_vertical_pane_g

0x8f21,	// (0x00054895) area_side_right_pane_ParamLimits

0x8f21,	// (0x00054895) area_side_right_pane

0xb876,	// (0x000571ea) aid_size_side_button_ParamLimits

0xb876,	// (0x000571ea) aid_size_side_button

0xb88f,	// (0x00057203) grid_sctrl_middle_pane_ParamLimits

0xb88f,	// (0x00057203) grid_sctrl_middle_pane

0x1315,	// (0x0004cc89) sctrl_sk_bottom_pane

0x1326,	// (0x0004cc9a) sctrl_sk_top_pane

0x1338,	// (0x0004ccac) aid_touch_sctrl_top

0x96c4,	// (0x00055038) bg_sctrl_sk_pane_ParamLimits

0x96c4,	// (0x00055038) bg_sctrl_sk_pane

0x1345,	// (0x0004ccb9) sctrl_sk_top_pane_g1

0x1352,	// (0x0004ccc6) sctrl_sk_top_pane_t1

0x1338,	// (0x0004ccac) aid_touch_sctrl_bottom

0x96c4,	// (0x00055038) bg_sctrl_sk_pane_cp_ParamLimits

0x96c4,	// (0x00055038) bg_sctrl_sk_pane_cp

0x136d,	// (0x0004cce1) sctrl_sk_bottom_pane_g1

0x1352,	// (0x0004ccc6) sctrl_sk_bottom_pane_t1

0xb8ae,	// (0x00057222) cell_sctrl_middle_pane_ParamLimits

0xb8ae,	// (0x00057222) cell_sctrl_middle_pane

0xb8d1,	// (0x00057245) aid_touch_sctrl_middle_ParamLimits

0xb8d1,	// (0x00057245) aid_touch_sctrl_middle

0x96c4,	// (0x00055038) bg_sctrl_middle_pane_ParamLimits

0x96c4,	// (0x00055038) bg_sctrl_middle_pane

0x6c03,	// (0x00052577) cell_sctrl_middle_pane_g1_ParamLimits

0x6c03,	// (0x00052577) cell_sctrl_middle_pane_g1

0xb8e5,	// (0x00057259) cell_sctrl_middle_pane_g2_ParamLimits

0xb8e5,	// (0x00057259) cell_sctrl_middle_pane_g2

0x0001,

0xfce1,	// (0x0005b655) cell_sctrl_middle_pane_g_ParamLimits

0xfce1,	// (0x0005b655) cell_sctrl_middle_pane_g

0x21a1,	// (0x0004db15) bg_sctrl_middle_pane_g1

0x21a9,	// (0x0004db1d) bg_sctrl_middle_pane_g2

0x21b1,	// (0x0004db25) bg_sctrl_middle_pane_g3

0x21b9,	// (0x0004db2d) bg_sctrl_middle_pane_g4

0x21c1,	// (0x0004db35) bg_sctrl_middle_pane_g5

0x21c9,	// (0x0004db3d) bg_sctrl_middle_pane_g6

0x21d1,	// (0x0004db45) bg_sctrl_middle_pane_g7

0x21d9,	// (0x0004db4d) bg_sctrl_middle_pane_g8

0x0007,

0xfce6,	// (0x0005b65a) bg_sctrl_middle_pane_g

0x21e1,	// (0x0004db55) bg_sctrl_middle_pane_g8_copy1

0x21a1,	// (0x0004db15) bg_sctrl_sk_pane_g1

0x21a9,	// (0x0004db1d) bg_sctrl_sk_pane_g2

0x21b1,	// (0x0004db25) bg_sctrl_sk_pane_g3

0x0008,

0xf835,	// (0x0005b1a9) bg_sctrl_sk_pane_g

0x9b87,	// (0x000554fb) aid_size_touch_scroll_bar

0x21b9,	// (0x0004db2d) bg_sctrl_sk_pane_g4

0x21c1,	// (0x0004db35) bg_sctrl_sk_pane_g5

0x21c9,	// (0x0004db3d) bg_sctrl_sk_pane_g6

0x21d1,	// (0x0004db45) bg_sctrl_sk_pane_g7

0x21d9,	// (0x0004db4d) bg_sctrl_sk_pane_g8

0x21e1,	// (0x0004db55) bg_sctrl_sk_pane_g9

0x005d,	// (0x0004b9d1) popup_fep_china_hwr2_fs_candidate_window

0xa847,	// (0x000561bb) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa847,	// (0x000561bb) popup_fep_china_hwr2_fs_control_window

0x49d7,	// (0x0005034b) sctrl_sk_top_pane_g2

0x0001,

0xfcdc,	// (0x0005b650) sctrl_sk_top_pane_g

0xd983,	// (0x000592f7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd983,	// (0x000592f7) aid_fep_china_hwr2_fs_cell

0xd997,	// (0x0005930b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd997,	// (0x0005930b) bg_popup_fep_shadow_pane_cp4

0xd9ae,	// (0x00059322) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ae,	// (0x00059322) bg_popup_fep_shadow_pane_cp5

0xd9c0,	// (0x00059334) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9c0,	// (0x00059334) popup_fep_china_hwr2_fs_control_bar_grid

0xd9d4,	// (0x00059348) popup_fep_china_hwr2_fs_control_funtion_grid

0x5ef8,	// (0x0005186c) aid_fep_china_hwr2_fs_candi_cell

0x8e69,	// (0x000547dd) bg_popup_fep_shadow_pane_cp6

0x5f02,	// (0x00051876) popup_fep_china_hwr2_fs_candidate_grid

0xd9dc,	// (0x00059350) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9dc,	// (0x00059350) cell_fep_china_hwr2_fs_funtion_grid

0x4767,	// (0x000500db) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5f24,	// (0x00051898) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5f24,	// (0x00051898) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5f32,	// (0x000518a6) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5f32,	// (0x000518a6) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf7,	// (0x0005b66b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf7,	// (0x0005b66b) cell_fep_china_hwr2_fs_funtion_grid_g

0xd9f4,	// (0x00059368) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd9f4,	// (0x00059368) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda09,	// (0x0005937d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda09,	// (0x0005937d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfc,	// (0x0005b670) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfc,	// (0x0005b670) cell_fep_china_hwr2_fs_funtion_grid_t

0x5f79,	// (0x000518ed) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5f81,	// (0x000518f5) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5f89,	// (0x000518fd) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd01,	// (0x0005b675) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5f91,	// (0x00051905) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5f91,	// (0x00051905) cell_fep_china_hwr2_fs_candidate_grid

0x5faa,	// (0x0005191e) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5fb2,	// (0x00051926) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4767,	// (0x000500db) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4767,	// (0x000500db) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb28,	// (0x0005b49c) cell_fep_china_hwr2_fs_candidate_grid_g

0x5fba,	// (0x0005192e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x065c,	// (0x0004bfd0) clock_nsta_pane_cp_24_ParamLimits

0x065c,	// (0x0004bfd0) clock_nsta_pane_cp_24

0x06da,	// (0x0004c04e) indicator_nsta_pane_cp_24_ParamLimits

0x06da,	// (0x0004c04e) indicator_nsta_pane_cp_24

0x2eaf,	// (0x0004e823) heading_pane_g1

0x0001,

0xf89a,	// (0x0005b20e) heading_pane_g

0x388d,	// (0x0004f201) grid_sct_catagory_button_pane

0x38bd,	// (0x0004f231) scroll_pane_cp5_ParamLimits

0x4361,	// (0x0004fcd5) button_value_adjust_pane_cp5_ParamLimits

0x4361,	// (0x0004fcd5) button_value_adjust_pane_cp5

0x4440,	// (0x0004fdb4) form2_midp_time_pane_ParamLimits

0x5fc8,	// (0x0005193c) cell_sct_catagory_button_pane_ParamLimits

0x5fc8,	// (0x0005193c) cell_sct_catagory_button_pane

0x472c,	// (0x000500a0) bg_button_pane_cp01_ParamLimits

0x472c,	// (0x000500a0) bg_button_pane_cp01

0x4767,	// (0x000500db) cell_sct_catagory_button_pane_g1

0xadfa,	// (0x0005676e) popup_tb_extension_window

0xda25,	// (0x00059399) aid_size_cell_ext_ParamLimits

0xda25,	// (0x00059399) aid_size_cell_ext

0x9a36,	// (0x000553aa) bg_tb_trans_pane_cp1_ParamLimits

0x9a36,	// (0x000553aa) bg_tb_trans_pane_cp1

0xda4b,	// (0x000593bf) grid_tb_ext_pane_ParamLimits

0xda4b,	// (0x000593bf) grid_tb_ext_pane

0xda8a,	// (0x000593fe) cell_tb_ext_pane_ParamLimits

0xda8a,	// (0x000593fe) cell_tb_ext_pane

0xdab2,	// (0x00059426) cell_tb_ext_pane_g1_ParamLimits

0xdab2,	// (0x00059426) cell_tb_ext_pane_g1

0x605e,	// (0x000519d2) cell_tb_ext_pane_t1

0x96c4,	// (0x00055038) list_highlight_pane_cp11_ParamLimits

0x96c4,	// (0x00055038) list_highlight_pane_cp11

0x914e,	// (0x00054ac2) popup_uni_indicator_window_ParamLimits

0x914e,	// (0x00054ac2) popup_uni_indicator_window

0x9ca0,	// (0x00055614) bg_popup_sub_pane_cp14

0xdacf,	// (0x00059443) list_uniindi_pane

0xdadb,	// (0x0005944f) uniindi_top_pane

0x96c4,	// (0x00055038) bg_uniindi_top_pane

0xdafa,	// (0x0005946e) uniindi_top_pane_g1

0xdb10,	// (0x00059484) uniindi_top_pane_g2

0x0003,

0xfd08,	// (0x0005b67c) uniindi_top_pane_g

0xdb2d,	// (0x000594a1) uniindi_top_pane_t1

0x610f,	// (0x00051a83) list_single_uniindi_pane_ParamLimits

0x610f,	// (0x00051a83) list_single_uniindi_pane

0x4767,	// (0x000500db) bg_uniindi_top_pane_g1

0x6122,	// (0x00051a96) list_single_uniindi_pane_g1

0x6135,	// (0x00051aa9) list_single_uniindi_pane_t1

0x8e69,	// (0x000547dd) control_bg_pane

0x615a,	// (0x00051ace) bg_sctrl_sk_pane_cp1

0x6163,	// (0x00051ad7) bg_sctrl_sk_pane_cp2

0x616c,	// (0x00051ae0) control_bg_pane_g1

0x6175,	// (0x00051ae9) control_bg_pane_g2

0x0001,

0xfd11,	// (0x0005b685) control_bg_pane_g

0x41a7,	// (0x0004fb1b) cell_indicator_nsta_pane_g1_ParamLimits

0xce80,	// (0x000587f4) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8c,	// (0x0005b400) cell_indicator_nsta_pane_g_ParamLimits

0xece4,	// (0x0005a658) form2_midp_time_pane_t1_ParamLimits

0x0e8c,	// (0x0004c800) main_idle_act4_pane_ParamLimits

0x0e8c,	// (0x0004c800) main_idle_act4_pane

0xadfa,	// (0x0005676e) popup_tb_extension_window_ParamLimits

0xda70,	// (0x000593e4) tb_ext_find_pane_ParamLimits

0xda70,	// (0x000593e4) tb_ext_find_pane

0x617e,	// (0x00051af2) ai_gene_pane_1_cp1

0xc52d,	// (0x00057ea1) ai_gene_pane_2_cp1

0xdb57,	// (0x000594cb) list_single_idle_plugin_calendar_pane

0x618f,	// (0x00051b03) list_single_idle_plugin_notification_pane

0x6198,	// (0x00051b0c) list_single_idle_plugin_player_pane

0xdb60,	// (0x000594d4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb60,	// (0x000594d4) list_single_idle_plugin_shortcut_pane

0xdb88,	// (0x000594fc) main_idle_act4_pane_t1

0xdb9f,	// (0x00059513) main_idle_act4_pane_t2

0x0001,

0xfd16,	// (0x0005b68a) main_idle_act4_pane_t

0xdbb6,	// (0x0005952a) middle_sk_idle_act4_pane_ParamLimits

0xdbb6,	// (0x0005952a) middle_sk_idle_act4_pane

0xdbd2,	// (0x00059546) popup_clock_digital_analogue_window_cp2

0xdbfe,	// (0x00059572) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbfe,	// (0x00059572) shortcut_wheel_idle_act4_pane

0x4767,	// (0x000500db) shortcut_wheel_idle_act4_pane_g1

0x4767,	// (0x000500db) shortcut_wheel_idle_act4_pane_g2

0x4767,	// (0x000500db) shortcut_wheel_idle_act4_pane_g3

0x4767,	// (0x000500db) shortcut_wheel_idle_act4_pane_g4

0x4767,	// (0x000500db) shortcut_wheel_idle_act4_pane_g5

0x622b,	// (0x00051b9f) shortcut_wheel_idle_act4_pane_g6

0x6233,	// (0x00051ba7) shortcut_wheel_idle_act4_pane_g7

0x623b,	// (0x00051baf) shortcut_wheel_idle_act4_pane_g8

0x6243,	// (0x00051bb7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1b,	// (0x0005b68f) shortcut_wheel_idle_act4_pane_g

0xd0a5,	// (0x00058a19) middle_sk_idle_act4_pane_g1_ParamLimits

0xd0a5,	// (0x00058a19) middle_sk_idle_act4_pane_g1

0xdc7b,	// (0x000595ef) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc7b,	// (0x000595ef) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3e,	// (0x0005b6b2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3e,	// (0x0005b6b2) middle_sk_idle_act4_pane_g

0xdc93,	// (0x00059607) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc93,	// (0x00059607) middle_sk_idle_act4_pane_t1

0xdcc2,	// (0x00059636) grid_ai_shortcut_pane_ParamLimits

0xdcc2,	// (0x00059636) grid_ai_shortcut_pane

0xdcdf,	// (0x00059653) list_highlight_pane_cp16_ParamLimits

0xdcdf,	// (0x00059653) list_highlight_pane_cp16

0xdcec,	// (0x00059660) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdcec,	// (0x00059660) list_single_idle_plugin_shortcut_pane_g1

0xdcf8,	// (0x0005966c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdcf8,	// (0x0005966c) list_single_idle_plugin_shortcut_pane_g2

0xdd14,	// (0x00059688) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdd14,	// (0x00059688) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd43,	// (0x0005b6b7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd43,	// (0x0005b6b7) list_single_idle_plugin_shortcut_pane_g

0xdd29,	// (0x0005969d) cell_ai_shortcut_pane_ParamLimits

0xdd29,	// (0x0005969d) cell_ai_shortcut_pane

0xdd3f,	// (0x000596b3) cell_ai_shortcut_pane_g1_ParamLimits

0xdd3f,	// (0x000596b3) cell_ai_shortcut_pane_g1

0x617e,	// (0x00051af2) ai_gene_pane_1_cp2

0x6373,	// (0x00051ce7) ai_gene_pane_2_cp2

0x637b,	// (0x00051cef) list_highlight_pane_cp15

0xdd61,	// (0x000596d5) list_single_idle_plugin_calendar_pane_g1

0x637b,	// (0x00051cef) list_highlight_pane_cp17

0x638c,	// (0x00051d00) list_single_idle_plugin_calendar_pane_g1_copy1

0x6394,	// (0x00051d08) list_single_idle_plugin_player_pane_g1

0x3ae6,	// (0x0004f45a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4a,	// (0x0005b6be) list_single_idle_plugin_player_pane_g

0x639c,	// (0x00051d10) list_single_idle_plugin_player_pane_t1

0x63aa,	// (0x00051d1e) list_single_idle_plugin_player_pane_t2

0x63b8,	// (0x00051d2c) list_single_idle_plugin_player_pane_t3

0x63c6,	// (0x00051d3a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4f,	// (0x0005b6c3) list_single_idle_plugin_player_pane_t

0x63d4,	// (0x00051d48) wait_bar_pane_cp15

0x63dc,	// (0x00051d50) grid_ai_notification_pane

0x3ae6,	// (0x0004f45a) list_single_idle_plugin_notification_pane_g1

0xdd69,	// (0x000596dd) cell_ai_notification_pane_ParamLimits

0xdd69,	// (0x000596dd) cell_ai_notification_pane

0x63f2,	// (0x00051d66) cell_ai_notification_pane_g1

0x63fa,	// (0x00051d6e) cell_ai_notification_pane_t1

0xdd76,	// (0x000596ea) tb_ext_find_button_pane

0xdd7e,	// (0x000596f2) tb_ext_find_pane_g1

0xdd86,	// (0x000596fa) tb_ext_find_pane_t1

0xc04a,	// (0x000579be) tb_ext_find_button_pane_g1

0xdd94,	// (0x00059708) tb_ext_find_button_pane_g2

0x0001,

0xfd58,	// (0x0005b6cc) tb_ext_find_button_pane_g

0xdb88,	// (0x000594fc) main_idle_act4_pane_t1_ParamLimits

0xdb9f,	// (0x00059513) main_idle_act4_pane_t2_ParamLimits

0xfd16,	// (0x0005b68a) main_idle_act4_pane_t_ParamLimits

0xdbd2,	// (0x00059546) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdbea,	// (0x0005955e) sat_plugin_idle_act4_pane_ParamLimits

0xdbea,	// (0x0005955e) sat_plugin_idle_act4_pane

0xdd9d,	// (0x00059711) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd9d,	// (0x00059711) sat_plugin_idle_act4_pane_t1

0xddb5,	// (0x00059729) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddb5,	// (0x00059729) sat_plugin_idle_act4_pane_t2

0xddcd,	// (0x00059741) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddcd,	// (0x00059741) sat_plugin_idle_act4_pane_t3

0xdde5,	// (0x00059759) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdde5,	// (0x00059759) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5d,	// (0x0005b6d1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5d,	// (0x0005b6d1) sat_plugin_idle_act4_pane_t

0x90c9,	// (0x00054a3d) popup_battery_window_ParamLimits

0x90c9,	// (0x00054a3d) popup_battery_window

0x96c4,	// (0x00055038) bg_popup_sub_pane_cp25_ParamLimits

0x96c4,	// (0x00055038) bg_popup_sub_pane_cp25

0x647b,	// (0x00051def) popup_battery_window_g1_ParamLimits

0x647b,	// (0x00051def) popup_battery_window_g1

0x6487,	// (0x00051dfb) popup_battery_window_t1_ParamLimits

0x6487,	// (0x00051dfb) popup_battery_window_t1

0x6499,	// (0x00051e0d) popup_battery_window_t2_ParamLimits

0x6499,	// (0x00051e0d) popup_battery_window_t2

0x0001,

0xfd66,	// (0x0005b6da) popup_battery_window_t_ParamLimits

0xfd66,	// (0x0005b6da) popup_battery_window_t

0xa49b,	// (0x00055e0f) midp_canvas_pane_ParamLimits

0xa50d,	// (0x00055e81) midp_keypad_pane_ParamLimits

0xa50d,	// (0x00055e81) midp_keypad_pane

0x9e84,	// (0x000557f8) main_midp_pane_ParamLimits

0xce8d,	// (0x00058801) signal_pane_g2_cp_ParamLimits

0xddfd,	// (0x00059771) aid_size_cell_midp_keypad_ParamLimits

0xddfd,	// (0x00059771) aid_size_cell_midp_keypad

0xde1b,	// (0x0005978f) midp_keyp_game_grid_pane_ParamLimits

0xde1b,	// (0x0005978f) midp_keyp_game_grid_pane

0xde42,	// (0x000597b6) midp_keyp_rocker_pane_ParamLimits

0xde42,	// (0x000597b6) midp_keyp_rocker_pane

0xde93,	// (0x00059807) midp_keyp_sk_left_pane_ParamLimits

0xde93,	// (0x00059807) midp_keyp_sk_left_pane

0xdee7,	// (0x0005985b) midp_keyp_sk_right_pane_ParamLimits

0xdee7,	// (0x0005985b) midp_keyp_sk_right_pane

0x8e69,	// (0x000547dd) bg_button_pane_cp03

0xdf3b,	// (0x000598af) midp_keyp_sk_left_pane_g1

0x8e69,	// (0x000547dd) bg_button_pane_cp04

0xdf3b,	// (0x000598af) midp_keyp_sk_right_pane_g1

0x4767,	// (0x000500db) midp_keyp_rocker_pane_g1

0xdf44,	// (0x000598b8) keyp_game_cell_pane_ParamLimits

0xdf44,	// (0x000598b8) keyp_game_cell_pane

0x8e69,	// (0x000547dd) bg_button_pane_cp02

0xdf68,	// (0x000598dc) keyp_game_cell_pane_g1

0x90e9,	// (0x00054a5d) popup_fep_vkb2_window_ParamLimits

0x90e9,	// (0x00054a5d) popup_fep_vkb2_window

0xb8fd,	// (0x00057271) aid_size_cell_vkb2_ParamLimits

0xb8fd,	// (0x00057271) aid_size_cell_vkb2

0xb931,	// (0x000572a5) popup_fep_vkb2_window_g1_ParamLimits

0xb931,	// (0x000572a5) popup_fep_vkb2_window_g1

0xb981,	// (0x000572f5) vkb2_area_bottom_pane_ParamLimits

0xb981,	// (0x000572f5) vkb2_area_bottom_pane

0xb9d5,	// (0x00057349) vkb2_area_keypad_pane_ParamLimits

0xb9d5,	// (0x00057349) vkb2_area_keypad_pane

0xba1d,	// (0x00057391) vkb2_area_top_pane_ParamLimits

0xba1d,	// (0x00057391) vkb2_area_top_pane

0xbaa9,	// (0x0005741d) vkb2_top_entry_pane_ParamLimits

0xbaa9,	// (0x0005741d) vkb2_top_entry_pane

0xbad6,	// (0x0005744a) vkb2_top_grid_left_pane_ParamLimits

0xbad6,	// (0x0005744a) vkb2_top_grid_left_pane

0xbaf7,	// (0x0005746b) vkb2_top_grid_right_pane_ParamLimits

0xbaf7,	// (0x0005746b) vkb2_top_grid_right_pane

0x15ca,	// (0x0004cf3e) vkb2_cell_keypad_pane_ParamLimits

0x15ca,	// (0x0004cf3e) vkb2_cell_keypad_pane

0xbb3f,	// (0x000574b3) vkb2_area_bottom_grid_pane_ParamLimits

0xbb3f,	// (0x000574b3) vkb2_area_bottom_grid_pane

0xbb69,	// (0x000574dd) vkb2_area_bottom_pane_g1_ParamLimits

0xbb69,	// (0x000574dd) vkb2_area_bottom_pane_g1

0xbb8f,	// (0x00057503) vkb2_area_bottom_pane_g2_ParamLimits

0xbb8f,	// (0x00057503) vkb2_area_bottom_pane_g2

0xbbc0,	// (0x00057534) vkb2_area_bottom_pane_g3_ParamLimits

0xbbc0,	// (0x00057534) vkb2_area_bottom_pane_g3

0x0002,

0xfd6b,	// (0x0005b6df) vkb2_area_bottom_pane_g_ParamLimits

0xfd6b,	// (0x0005b6df) vkb2_area_bottom_pane_g

0x1774,	// (0x0004d0e8) vkb2_top_cell_left_pane_ParamLimits

0x1774,	// (0x0004d0e8) vkb2_top_cell_left_pane

0xdf71,	// (0x000598e5) vkb2_top_entry_pane_g1_ParamLimits

0xdf71,	// (0x000598e5) vkb2_top_entry_pane_g1

0xdf7f,	// (0x000598f3) vkb2_top_entry_pane_t1_ParamLimits

0xdf7f,	// (0x000598f3) vkb2_top_entry_pane_t1

0x664a,	// (0x00051fbe) vkb2_top_entry_pane_t2_ParamLimits

0x664a,	// (0x00051fbe) vkb2_top_entry_pane_t2

0x667c,	// (0x00051ff0) vkb2_top_entry_pane_t3_ParamLimits

0x667c,	// (0x00051ff0) vkb2_top_entry_pane_t3

0x0002,

0xfd72,	// (0x0005b6e6) vkb2_top_entry_pane_t_ParamLimits

0xfd72,	// (0x0005b6e6) vkb2_top_entry_pane_t

0xbc2a,	// (0x0005759e) vkb2_top_grid_right_pane_g1_ParamLimits

0xbc2a,	// (0x0005759e) vkb2_top_grid_right_pane_g1

0x17d7,	// (0x0004d14b) vkb2_top_grid_right_pane_g2_ParamLimits

0x17d7,	// (0x0004d14b) vkb2_top_grid_right_pane_g2

0x17ef,	// (0x0004d163) vkb2_top_grid_right_pane_g3_ParamLimits

0x17ef,	// (0x0004d163) vkb2_top_grid_right_pane_g3

0xbc40,	// (0x000575b4) vkb2_top_grid_right_pane_g4_ParamLimits

0xbc40,	// (0x000575b4) vkb2_top_grid_right_pane_g4

0x0003,

0xfd79,	// (0x0005b6ed) vkb2_top_grid_right_pane_g_ParamLimits

0xfd79,	// (0x0005b6ed) vkb2_top_grid_right_pane_g

0x181d,	// (0x0004d191) vkb2_top_cell_left_pane_g1

0x183f,	// (0x0004d1b3) vkb2_cell_keypad_pane_g1_ParamLimits

0x183f,	// (0x0004d1b3) vkb2_cell_keypad_pane_g1

0x66a0,	// (0x00052014) vkb2_cell_keypad_pane_t1_ParamLimits

0x66a0,	// (0x00052014) vkb2_cell_keypad_pane_t1

0x184d,	// (0x0004d1c1) vkb2_cell_bottom_grid_pane_ParamLimits

0x184d,	// (0x0004d1c1) vkb2_cell_bottom_grid_pane

0x1886,	// (0x0004d1fa) vkb2_cell_bottom_grid_pane_g1

0xdc1f,	// (0x00059593) aid_call2_pane_cp02

0xdc27,	// (0x0005959b) aid_call_pane_cp02

0xdc2f,	// (0x000595a3) clock_digital_number_pane_cp10

0xdc37,	// (0x000595ab) clock_digital_number_pane_cp11

0xdc3f,	// (0x000595b3) clock_digital_number_pane_cp12

0xdc47,	// (0x000595bb) clock_digital_number_pane_cp13

0xdc4f,	// (0x000595c3) clock_digital_separator_pane_cp10

0xc04a,	// (0x000579be) popup_clock_digital_analogue_window_cp2_g1

0xc04a,	// (0x000579be) popup_clock_digital_analogue_window_cp2_g2

0xdc57,	// (0x000595cb) popup_clock_digital_analogue_window_cp2_g3

0xc04a,	// (0x000579be) popup_clock_digital_analogue_window_cp2_g4

0xdc57,	// (0x000595cb) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2e,	// (0x0005b6a2) popup_clock_digital_analogue_window_cp2_g

0xdc5f,	// (0x000595d3) popup_clock_digital_analogue_window_cp2_t1

0xdc6d,	// (0x000595e1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd39,	// (0x0005b6ad) popup_clock_digital_analogue_window_cp2_t

0x4767,	// (0x000500db) clock_digital_number_pane_cp10_g1

0x4767,	// (0x000500db) clock_digital_number_pane_cp10_g2

0x0001,

0xfb28,	// (0x0005b49c) clock_digital_number_pane_cp10_g

0x4767,	// (0x000500db) clock_digital_separator_pane_cp10_g1

0x4767,	// (0x000500db) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb28,	// (0x0005b49c) clock_digital_separator_pane_cp10_g

0xdb1c,	// (0x00059490) uniindi_top_pane_g3

0x60d8,	// (0x00051a4c) uniindi_top_pane_g4

0x1655,	// (0x0004cfc9) vkb2_row_keypad_pane_ParamLimits

0x1655,	// (0x0004cfc9) vkb2_row_keypad_pane

0x18a6,	// (0x0004d21a) vkb2_cell_t_keypad_pane_ParamLimits

0x18a6,	// (0x0004d21a) vkb2_cell_t_keypad_pane

0x18b6,	// (0x0004d22a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x18b6,	// (0x0004d22a) vkb2_cell_t_keypad_pane_cp08

0x18c9,	// (0x0004d23d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x18c9,	// (0x0004d23d) vkb2_cell_t_keypad_pane_cp09

0x18dd,	// (0x0004d251) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x18dd,	// (0x0004d251) vkb2_cell_t_keypad_pane_cp01

0x18ee,	// (0x0004d262) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x18ee,	// (0x0004d262) vkb2_cell_t_keypad_pane_cp02

0x18ff,	// (0x0004d273) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x18ff,	// (0x0004d273) vkb2_cell_t_keypad_pane_cp03

0x1910,	// (0x0004d284) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1910,	// (0x0004d284) vkb2_cell_t_keypad_pane_cp04

0x1921,	// (0x0004d295) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1921,	// (0x0004d295) vkb2_cell_t_keypad_pane_cp05

0x1932,	// (0x0004d2a6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1932,	// (0x0004d2a6) vkb2_cell_t_keypad_pane_cp06

0x1943,	// (0x0004d2b7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1943,	// (0x0004d2b7) vkb2_cell_t_keypad_pane_cp07

0x1954,	// (0x0004d2c8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1954,	// (0x0004d2c8) vkb2_cell_t_keypad_pane_cp10

0x49d7,	// (0x0005034b) vkb2_cell_t_keypad_pane_g1

0x66b7,	// (0x0005202b) vkb2_cell_t_keypad_pane_t1

0x8e69,	// (0x000547dd) popup_grid_graphic2_window

0xdfb8,	// (0x0005992c) aid_size_cell_graphic2_ParamLimits

0xdfb8,	// (0x0005992c) aid_size_cell_graphic2

0xdff6,	// (0x0005996a) bg_popup_window_pane_cp21_ParamLimits

0xdff6,	// (0x0005996a) bg_popup_window_pane_cp21

0xe004,	// (0x00059978) graphic2_pages_pane_ParamLimits

0xe004,	// (0x00059978) graphic2_pages_pane

0xe05a,	// (0x000599ce) grid_graphic2_control_pane_ParamLimits

0xe05a,	// (0x000599ce) grid_graphic2_control_pane

0xe0a2,	// (0x00059a16) grid_graphic2_pane_ParamLimits

0xe0a2,	// (0x00059a16) grid_graphic2_pane

0xe129,	// (0x00059a9d) cell_graphic2_pane

0x8e69,	// (0x000547dd) main_comp_mode_pane

0x5938,	// (0x000512ac) list_ai3_gene_pane_ParamLimits

0xd8ed,	// (0x00059261) bg_popup_window_pane_cp19_ParamLimits

0x5d12,	// (0x00051686) bg_touch_area_indi_pane_ParamLimits

0x5d12,	// (0x00051686) bg_touch_area_indi_pane

0x5d28,	// (0x0005169c) bg_touch_area_indi_pane_cp01_ParamLimits

0x5d28,	// (0x0005169c) bg_touch_area_indi_pane_cp01

0x5d3e,	// (0x000516b2) bg_touch_area_indi_pane_cp02_ParamLimits

0x5d3e,	// (0x000516b2) bg_touch_area_indi_pane_cp02

0x5d54,	// (0x000516c8) bg_touch_area_indi_pane_cp03_ParamLimits

0x5d54,	// (0x000516c8) bg_touch_area_indi_pane_cp03

0x5d6e,	// (0x000516e2) popup_slider_window_g1_ParamLimits

0x5d8a,	// (0x000516fe) popup_slider_window_g2_ParamLimits

0x5da6,	// (0x0005171a) popup_slider_window_g3_ParamLimits

0xfcc3,	// (0x0005b637) popup_slider_window_g_ParamLimits

0x5e0c,	// (0x00051780) popup_slider_window_t1_ParamLimits

0x5e80,	// (0x000517f4) small_volume_slider_vertical_pane_ParamLimits

0xe129,	// (0x00059a9d) cell_graphic2_pane_ParamLimits

0xe184,	// (0x00059af8) bg_button_pane_cp10_ParamLimits

0xe184,	// (0x00059af8) bg_button_pane_cp10

0xe197,	// (0x00059b0b) bg_button_pane_cp11_ParamLimits

0xe197,	// (0x00059b0b) bg_button_pane_cp11

0xe1aa,	// (0x00059b1e) graphic2_pages_pane_g1_ParamLimits

0xe1aa,	// (0x00059b1e) graphic2_pages_pane_g1

0xe1c5,	// (0x00059b39) graphic2_pages_pane_g2_ParamLimits

0xe1c5,	// (0x00059b39) graphic2_pages_pane_g2

0x0001,

0xfd87,	// (0x0005b6fb) graphic2_pages_pane_g_ParamLimits

0xfd87,	// (0x0005b6fb) graphic2_pages_pane_g

0xe1dd,	// (0x00059b51) graphic2_pages_pane_t1_ParamLimits

0xe1dd,	// (0x00059b51) graphic2_pages_pane_t1

0xe1f5,	// (0x00059b69) cell_graphic2_control_pane_ParamLimits

0xe1f5,	// (0x00059b69) cell_graphic2_control_pane

0xe227,	// (0x00059b9b) cell_graphic2_pane_g1_ParamLimits

0xe227,	// (0x00059b9b) cell_graphic2_pane_g1

0xd0b3,	// (0x00058a27) cell_graphic2_pane_g2_ParamLimits

0xd0b3,	// (0x00058a27) cell_graphic2_pane_g2

0xe234,	// (0x00059ba8) cell_graphic2_pane_g3_ParamLimits

0xe234,	// (0x00059ba8) cell_graphic2_pane_g3

0xd0c0,	// (0x00058a34) cell_graphic2_pane_g4_ParamLimits

0xd0c0,	// (0x00058a34) cell_graphic2_pane_g4

0xe241,	// (0x00059bb5) cell_graphic2_pane_g5_ParamLimits

0xe241,	// (0x00059bb5) cell_graphic2_pane_g5

0x0004,

0xfd8c,	// (0x0005b700) cell_graphic2_pane_g_ParamLimits

0xfd8c,	// (0x0005b700) cell_graphic2_pane_g

0xe25e,	// (0x00059bd2) cell_graphic2_pane_t1_ParamLimits

0xe25e,	// (0x00059bd2) cell_graphic2_pane_t1

0x2ea3,	// (0x0004e817) grid_highlight_pane_cp11_ParamLimits

0x2ea3,	// (0x0004e817) grid_highlight_pane_cp11

0x96c4,	// (0x00055038) bg_button_pane_cp05

0xe2a8,	// (0x00059c1c) cell_graphic2_control_pane_g1

0x4767,	// (0x000500db) bg_touch_area_indi_pane_g1

0x6990,	// (0x00052304) aid_cmod_rocker_key_size

0x699a,	// (0x0005230e) aid_cmode_itu_key_size

0x69a4,	// (0x00052318) main_cmode_video_pane

0x69ae,	// (0x00052322) main_comp_mode_itu_pane

0x69ba,	// (0x0005232e) main_comp_mode_rocker_pane

0x69c6,	// (0x0005233a) cell_cmode_rocker_pane_ParamLimits

0x69c6,	// (0x0005233a) cell_cmode_rocker_pane

0x69d8,	// (0x0005234c) cell_cmode_itu_pane_ParamLimits

0x69d8,	// (0x0005234c) cell_cmode_itu_pane

0x9ca0,	// (0x00055614) bg_button_pane_cp06_ParamLimits

0x9ca0,	// (0x00055614) bg_button_pane_cp06

0x49d7,	// (0x0005034b) cell_cmode_rocker_pane_g1_ParamLimits

0x49d7,	// (0x0005034b) cell_cmode_rocker_pane_g1

0x5f24,	// (0x00051898) cell_cmode_rocker_pane_g2_ParamLimits

0x5f24,	// (0x00051898) cell_cmode_rocker_pane_g2

0x0001,

0xfd9c,	// (0x0005b710) cell_cmode_rocker_pane_g_ParamLimits

0xfd9c,	// (0x0005b710) cell_cmode_rocker_pane_g

0x8e69,	// (0x000547dd) bg_button_pane_cp07

0x69ed,	// (0x00052361) cell_cmode_itu_pane_g1

0x69f6,	// (0x0005236a) cell_cmode_itu_pane_t1

0x6a04,	// (0x00052378) cell_cmode_itu_pane_t2

0x0001,

0xfda1,	// (0x0005b715) cell_cmode_itu_pane_t

0x614a,	// (0x00051abe) aid_touch_ctrl_left

0x6152,	// (0x00051ac6) aid_touch_ctrl_right

0x8e69,	// (0x000547dd) compa_mode_pane

0xe2ce,	// (0x00059c42) aid_cmod_rocker_key_size_cp

0xe2d8,	// (0x00059c4c) aid_cmode_itu_key_size_cp

0x6a26,	// (0x0005239a) compa_mode_pane_g1

0x6a2e,	// (0x000523a2) compa_mode_pane_g2

0x6a36,	// (0x000523aa) compa_mode_pane_g3

0x0002,

0xfda6,	// (0x0005b71a) compa_mode_pane_g

0xe2e2,	// (0x00059c56) main_comp_mode_itu_pane_cp

0xe2ea,	// (0x00059c5e) main_comp_mode_rocker_pane_cp

0xe2f2,	// (0x00059c66) cell_cmode_itu_pane_cp_ParamLimits

0xe2f2,	// (0x00059c66) cell_cmode_itu_pane_cp

0xe307,	// (0x00059c7b) cell_cmode_rocker_pane_cp_ParamLimits

0xe307,	// (0x00059c7b) cell_cmode_rocker_pane_cp

0x9ca0,	// (0x00055614) bg_button_pane_cp06_cp_ParamLimits

0x9ca0,	// (0x00055614) bg_button_pane_cp06_cp

0x49d7,	// (0x0005034b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x49d7,	// (0x0005034b) cell_cmode_rocker_pane_g1_cp

0x4767,	// (0x000500db) cell_cmode_rocker_pane_g2_cp

0x8e69,	// (0x000547dd) bg_button_pane_cp07_cp

0xe319,	// (0x00059c8d) cell_cmode_itu_pane_g1_cp

0xe322,	// (0x00059c96) cell_cmode_itu_pane_t1_cp

0xe322,	// (0x00059c96) cell_cmode_itu_pane_t2_cp

0xcc33,	// (0x000585a7) settings_code_pane_cp2

0x935a,	// (0x00054cce) bg_popup_window_pane_cp3_ParamLimits

0x98c4,	// (0x00055238) heading_pane_cp3_ParamLimits

0x98d3,	// (0x00055247) listscroll_popup_graphic_pane_ParamLimits

0x0e9a,	// (0x0004c80e) fep_hwr_aid_pane_ParamLimits

0x1338,	// (0x0004ccac) aid_touch_sctrl_top_ParamLimits

0x1345,	// (0x0004ccb9) sctrl_sk_top_pane_g1_ParamLimits

0x49d7,	// (0x0005034b) sctrl_sk_top_pane_g2_ParamLimits

0xfcdc,	// (0x0005b650) sctrl_sk_top_pane_g_ParamLimits

0x1352,	// (0x0004ccc6) sctrl_sk_top_pane_t1_ParamLimits

0x1338,	// (0x0004ccac) aid_touch_sctrl_bottom_ParamLimits

0x1352,	// (0x0004ccc6) sctrl_sk_bottom_pane_t1_ParamLimits

0xdae8,	// (0x0005945c) aid_area_touch_clock

0xba69,	// (0x000573dd) aid_vkb2_area_top_pane_cell_ParamLimits

0xba69,	// (0x000573dd) aid_vkb2_area_top_pane_cell

0xbb18,	// (0x0005748c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbb18,	// (0x0005748c) aid_vkb2_area_bottom_pane_cell

0x6602,	// (0x00051f76) popup_char_count_window

0x6a8c,	// (0x00052400) popup_char_count_window_g1

0x6a95,	// (0x00052409) popup_char_count_window_g2

0x6a9e,	// (0x00052412) popup_char_count_window_g3

0x0002,

0xfdad,	// (0x0005b721) popup_char_count_window_g

0x6aa7,	// (0x0005241b) popup_char_count_window_t1

0x13eb,	// (0x0004cd5f) popup_fep_char_preview_window_ParamLimits

0x13eb,	// (0x0004cd5f) popup_fep_char_preview_window

0xba89,	// (0x000573fd) vkb2_top_candi_pane_ParamLimits

0xba89,	// (0x000573fd) vkb2_top_candi_pane

0xe330,	// (0x00059ca4) cell_vkb2_top_candi_pane_ParamLimits

0xe330,	// (0x00059ca4) cell_vkb2_top_candi_pane

0x2847,	// (0x0004e1bb) bg_popup_fep_char_preview_window_ParamLimits

0x2847,	// (0x0004e1bb) bg_popup_fep_char_preview_window

0x1969,	// (0x0004d2dd) popup_fep_char_preview_window_t1_ParamLimits

0x1969,	// (0x0004d2dd) popup_fep_char_preview_window_t1

0x6aff,	// (0x00052473) bg_popup_fep_char_preview_window_g1

0x6b07,	// (0x0005247b) bg_popup_fep_char_preview_window_g2

0x6b0f,	// (0x00052483) bg_popup_fep_char_preview_window_g3

0x6b17,	// (0x0005248b) bg_popup_fep_char_preview_window_g4

0x6b1f,	// (0x00052493) bg_popup_fep_char_preview_window_g5

0x6b27,	// (0x0005249b) bg_popup_fep_char_preview_window_g6

0x6b2f,	// (0x000524a3) bg_popup_fep_char_preview_window_g7

0x6b37,	// (0x000524ab) bg_popup_fep_char_preview_window_g8

0x6b3f,	// (0x000524b3) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb4,	// (0x0005b728) bg_popup_fep_char_preview_window_g

0x49d7,	// (0x0005034b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x49d7,	// (0x0005034b) cell_vkb2_top_candi_pane_g1

0x4cee,	// (0x00050662) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4cee,	// (0x00050662) cell_vkb2_top_candi_pane_g2

0x4d0f,	// (0x00050683) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4d0f,	// (0x00050683) cell_vkb2_top_candi_pane_g3

0x19ab,	// (0x0004d31f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x19ab,	// (0x0004d31f) cell_vkb2_top_candi_pane_g4

0x4ef9,	// (0x0005086d) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4ef9,	// (0x0005086d) cell_vkb2_top_candi_pane_g5

0x5f24,	// (0x00051898) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5f24,	// (0x00051898) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc9,	// (0x0005b73d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc9,	// (0x0005b73d) cell_vkb2_top_candi_pane_g

0x19cc,	// (0x0004d340) cell_vkb2_top_candi_pane_t1

0xb646,	// (0x00056fba) aid_size_touch_slider_mark_ParamLimits

0xb646,	// (0x00056fba) aid_size_touch_slider_mark

0xe040,	// (0x000599b4) grid_graphic2_catg_pane_ParamLimits

0xe040,	// (0x000599b4) grid_graphic2_catg_pane

0xe0fc,	// (0x00059a70) popup_grid_graphic2_window_t1_ParamLimits

0xe0fc,	// (0x00059a70) popup_grid_graphic2_window_t1

0xe112,	// (0x00059a86) popup_grid_graphic2_window_t2_ParamLimits

0xe112,	// (0x00059a86) popup_grid_graphic2_window_t2

0x0001,

0xfd82,	// (0x0005b6f6) popup_grid_graphic2_window_t_ParamLimits

0xfd82,	// (0x0005b6f6) popup_grid_graphic2_window_t

0x96c4,	// (0x00055038) bg_button_pane_cp05_ParamLimits

0xe2a8,	// (0x00059c1c) cell_graphic2_control_pane_g1_ParamLimits

0xe390,	// (0x00059d04) cell_graphic2_catg_pane_ParamLimits

0xe390,	// (0x00059d04) cell_graphic2_catg_pane

0x8e69,	// (0x000547dd) bg_button_pane_cp12

0xe3a2,	// (0x00059d16) cell_graphic2_catg_pane_g1

0x605e,	// (0x000519d2) cell_tb_ext_pane_t1_ParamLimits

0x1794,	// (0x0004d108) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1794,	// (0x0004d108) vkb2_top_cell_right_narrow_pane

0x17ac,	// (0x0004d120) vkb2_top_cell_right_wide_pane_ParamLimits

0x17ac,	// (0x0004d120) vkb2_top_cell_right_wide_pane

0x0e8c,	// (0x0004c800) bg_vkb2_func_pane_ParamLimits

0x0e8c,	// (0x0004c800) bg_vkb2_func_pane

0x181d,	// (0x0004d191) vkb2_top_cell_left_pane_g1_ParamLimits

0x0e8c,	// (0x0004c800) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0e8c,	// (0x0004c800) bg_vkb2_fuc_pane_cp03

0x1886,	// (0x0004d1fa) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x21a9,	// (0x0004db1d) bg_vkb2_func_pane_g1

0x21b1,	// (0x0004db25) bg_vkb2_func_pane_g2

0x21c1,	// (0x0004db35) bg_vkb2_func_pane_g3

0x21b9,	// (0x0004db2d) bg_vkb2_func_pane_g4

0x21c9,	// (0x0004db3d) bg_vkb2_func_pane_g5

0x21d1,	// (0x0004db45) bg_vkb2_func_pane_g6

0x21d9,	// (0x0004db4d) bg_vkb2_func_pane_g7

0x21e1,	// (0x0004db55) bg_vkb2_func_pane_g8

0x21a1,	// (0x0004db15) bg_vkb2_func_pane_g9

0x0008,

0xfdd6,	// (0x0005b74a) bg_vkb2_func_pane_g

0x0e8c,	// (0x0004c800) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0e8c,	// (0x0004c800) bg_vkb2_fuc_pane_cp01

0x181d,	// (0x0004d191) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x181d,	// (0x0004d191) vkb2_top_cell_right_wide_pane_g1

0x0e8c,	// (0x0004c800) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0e8c,	// (0x0004c800) bg_vkb2_fuc_pane_cp02

0x19eb,	// (0x0004d35f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x19eb,	// (0x0004d35f) vkb2_top_cell_right_narrow_pane_g1

0xd82f,	// (0x000591a3) aid_touch_area_decrease_ParamLimits

0xd82f,	// (0x000591a3) aid_touch_area_decrease

0xd869,	// (0x000591dd) aid_touch_area_increase_ParamLimits

0xd869,	// (0x000591dd) aid_touch_area_increase

0xd891,	// (0x00059205) aid_touch_area_mute_ParamLimits

0xd891,	// (0x00059205) aid_touch_area_mute

0xd8b9,	// (0x0005922d) aid_touch_area_slider_ParamLimits

0xd8b9,	// (0x0005922d) aid_touch_area_slider

0xd8f9,	// (0x0005926d) popup_slider_window_g4_ParamLimits

0xd8f9,	// (0x0005926d) popup_slider_window_g4

0xd913,	// (0x00059287) popup_slider_window_g5_ParamLimits

0xd913,	// (0x00059287) popup_slider_window_g5

0xd939,	// (0x000592ad) popup_slider_window_g6_ParamLimits

0xd939,	// (0x000592ad) popup_slider_window_g6

0x5e3a,	// (0x000517ae) popup_slider_window_t2_ParamLimits

0x5e3a,	// (0x000517ae) popup_slider_window_t2

0x0001,

0xfcd0,	// (0x0005b644) popup_slider_window_t_ParamLimits

0xfcd0,	// (0x0005b644) popup_slider_window_t

0xd94f,	// (0x000592c3) slider_pane_ParamLimits

0xd94f,	// (0x000592c3) slider_pane

0x6b62,	// (0x000524d6) slider_pane_g1_ParamLimits

0x6b62,	// (0x000524d6) slider_pane_g1

0x6b76,	// (0x000524ea) slider_pane_g2_ParamLimits

0x6b76,	// (0x000524ea) slider_pane_g2

0x6b8c,	// (0x00052500) slider_pane_g3_ParamLimits

0x6b8c,	// (0x00052500) slider_pane_g3

0x0003,

0xfde9,	// (0x0005b75d) slider_pane_g_ParamLimits

0xfde9,	// (0x0005b75d) slider_pane_g

0xae42,	// (0x000567b6) popup_tb_float_extension_window_ParamLimits

0xae42,	// (0x000567b6) popup_tb_float_extension_window

0x6bb8,	// (0x0005252c) aid_size_cell_tb_float_ext

0x8e69,	// (0x000547dd) bg_popup_sub_window_cp28

0xe3ab,	// (0x00059d1f) grid_tb_float_ext_pane

0xe3b5,	// (0x00059d29) cell_tb_float_ext_pane_ParamLimits

0xe3b5,	// (0x00059d29) cell_tb_float_ext_pane

0xe3cf,	// (0x00059d43) cell_tb_float_ext_pane_g1

0xe3d8,	// (0x00059d4c) grid_highlight_pane_cp12

0xb75d,	// (0x000570d1) cell_last_hwr_side_pane_ParamLimits

0xb75d,	// (0x000570d1) cell_last_hwr_side_pane

0x4767,	// (0x000500db) cell_last_hwr_side_pane_g1

0x6bfa,	// (0x0005256e) cell_last_hwr_side_pane_g2

0x0001,

0xfdf2,	// (0x0005b766) cell_last_hwr_side_pane_g

0xbbf5,	// (0x00057569) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbbf5,	// (0x00057569) vkb2_area_bottom_space_btn_pane

0x49d7,	// (0x0005034b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x66b7,	// (0x0005202b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x19cc,	// (0x0004d340) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1a0b,	// (0x0004d37f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1a0b,	// (0x0004d37f) vkb2_area_bottom_space_btn_pane_g1

0x1a45,	// (0x0004d3b9) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1a45,	// (0x0004d3b9) vkb2_area_bottom_space_btn_pane_g2

0x1a7b,	// (0x0004d3ef) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1a7b,	// (0x0004d3ef) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf7,	// (0x0005b76b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf7,	// (0x0005b76b) vkb2_area_bottom_space_btn_pane_g

0x0f41,	// (0x0004c8b5) cel_fep_hwr_func_pane_ParamLimits

0x0f41,	// (0x0004c8b5) cel_fep_hwr_func_pane

0xb732,	// (0x000570a6) cell_hwr_side_button_pane_ParamLimits

0xb732,	// (0x000570a6) cell_hwr_side_button_pane

0xdae8,	// (0x0005945c) aid_area_touch_clock_ParamLimits

0x96c4,	// (0x00055038) bg_uniindi_top_pane_ParamLimits

0xdafa,	// (0x0005946e) uniindi_top_pane_g1_ParamLimits

0xdb10,	// (0x00059484) uniindi_top_pane_g2_ParamLimits

0xdb1c,	// (0x00059490) uniindi_top_pane_g3_ParamLimits

0x60d8,	// (0x00051a4c) uniindi_top_pane_g4_ParamLimits

0xfd08,	// (0x0005b67c) uniindi_top_pane_g_ParamLimits

0xdb2d,	// (0x000594a1) uniindi_top_pane_t1_ParamLimits

0x96c4,	// (0x00055038) bg_vkb2_func_pane_cp01_ParamLimits

0x96c4,	// (0x00055038) bg_vkb2_func_pane_cp01

0x6c03,	// (0x00052577) cel_fep_hwr_func_pane_g1_ParamLimits

0x6c03,	// (0x00052577) cel_fep_hwr_func_pane_g1

0x96c4,	// (0x00055038) bg_vkb2_func_pane_cp02_ParamLimits

0x96c4,	// (0x00055038) bg_vkb2_func_pane_cp02

0x6c03,	// (0x00052577) cell_hwr_side_button_pane_g1_ParamLimits

0x6c03,	// (0x00052577) cell_hwr_side_button_pane_g1

0x2025,	// (0x0004d999) status_pane_g4_ParamLimits

0x2025,	// (0x0004d999) status_pane_g4

0x203f,	// (0x0004d9b3) status_pane_t1

0x44a9,	// (0x0004fe1d) form2_midp_gauge_slider_cont_pane

0x44b1,	// (0x0004fe25) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcfb6,	// (0x0005892a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcfc8,	// (0x0005893c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfadb,	// (0x0005b44f) form2_midp_gauge_slider_pane_t_ParamLimits

0x44e7,	// (0x0004fe5b) form2_midp_slider_pane_ParamLimits

0x13b3,	// (0x0004cd27) aid_size_cell_func_vkb2_ParamLimits

0x13b3,	// (0x0004cd27) aid_size_cell_func_vkb2

0x6ba4,	// (0x00052518) slider_pane_g4_ParamLimits

0x6ba4,	// (0x00052518) slider_pane_g4

0xbc5e,	// (0x000575d2) form2_midp_gauge_slider_pane_t2_cp01

0xbc6c,	// (0x000575e0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbc6c,	// (0x000575e0) form2_midp_gauge_slider_pane_t3_cp01

0x1af0,	// (0x0004d464) form2_midp_slider_pane_cp01

0x8e69,	// (0x000547dd) navi_smil_pane

0x6c3c,	// (0x000525b0) navi_smil_pane_g1

0x6c44,	// (0x000525b8) navi_smil_pane_t1

0x6c11,	// (0x00052585) form2_midp_slider_pane_g1

0x6c1a,	// (0x0005258e) form2_midp_slider_pane_g2

0x6c22,	// (0x00052596) form2_midp_slider_pane_g3

0x6c11,	// (0x00052585) form2_midp_slider_pane_g4

0xe3e1,	// (0x00059d55) form2_midp_slider_pane_g5

0x0004,

0xfe00,	// (0x0005b774) form2_midp_slider_pane_g

0x1ab5,	// (0x0004d429) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1ab5,	// (0x0004d429) vkb2_area_bottom_space_btn_pane_g4

0xb07a,	// (0x000569ee) lc0_navi_pane_ParamLimits

0xb07a,	// (0x000569ee) lc0_navi_pane

0xb0e4,	// (0x00056a58) lc0_stat_indi_pane_ParamLimits

0xb0e4,	// (0x00056a58) lc0_stat_indi_pane

0xb0f9,	// (0x00056a6d) ls0_title_pane_ParamLimits

0xb0f9,	// (0x00056a6d) ls0_title_pane

0x9ca0,	// (0x00055614) bg_popup_sub_pane_cp14_ParamLimits

0xdacf,	// (0x00059443) list_uniindi_pane_ParamLimits

0xdadb,	// (0x0005944f) uniindi_top_pane_ParamLimits

0x6122,	// (0x00051a96) list_single_uniindi_pane_g1_ParamLimits

0x6135,	// (0x00051aa9) list_single_uniindi_pane_t1_ParamLimits

0xbc89,	// (0x000575fd) lc0_stat_clock_pane_ParamLimits

0xbc89,	// (0x000575fd) lc0_stat_clock_pane

0xe3ec,	// (0x00059d60) lc0_stat_indi_pane_g1_ParamLimits

0xe3ec,	// (0x00059d60) lc0_stat_indi_pane_g1

0xe3f9,	// (0x00059d6d) lc0_stat_indi_pane_g2_ParamLimits

0xe3f9,	// (0x00059d6d) lc0_stat_indi_pane_g2

0x0001,

0xfe0b,	// (0x0005b77f) lc0_stat_indi_pane_g_ParamLimits

0xfe0b,	// (0x0005b77f) lc0_stat_indi_pane_g

0xbc99,	// (0x0005760d) lc0_uni_indicator_pane_ParamLimits

0xbc99,	// (0x0005760d) lc0_uni_indicator_pane

0xe406,	// (0x00059d7a) ls0_title_pane_g1_ParamLimits

0xe406,	// (0x00059d7a) ls0_title_pane_g1

0xe41a,	// (0x00059d8e) ls0_title_pane_t1_ParamLimits

0xe41a,	// (0x00059d8e) ls0_title_pane_t1

0xbca9,	// (0x0005761d) lc0_uni_indicator_pane_g1_ParamLimits

0xbca9,	// (0x0005761d) lc0_uni_indicator_pane_g1

0x6cb6,	// (0x0005262a) lc0_stat_clock_pane_t1

0x8e69,	// (0x000547dd) main_ai5_pane

0x6ccc,	// (0x00052640) ai5_sk_pane_ParamLimits

0x6ccc,	// (0x00052640) ai5_sk_pane

0xe452,	// (0x00059dc6) cell_ai5_widget_pane_ParamLimits

0xe452,	// (0x00059dc6) cell_ai5_widget_pane

0x6da2,	// (0x00052716) aid_size_cell_widget_grid

0x6db0,	// (0x00052724) bg_ai5_widget_pane_ParamLimits

0x6db0,	// (0x00052724) bg_ai5_widget_pane

0x6e2e,	// (0x000527a2) cell_ai5_widget_pane_g2

0x6e42,	// (0x000527b6) cell_ai5_widget_pane_g3

0x6e5c,	// (0x000527d0) cell_ai5_widget_pane_g4

0x6e6c,	// (0x000527e0) cell_ai5_widget_pane_g5

0x6e7c,	// (0x000527f0) cell_ai5_widget_pane_g6

0x6e88,	// (0x000527fc) cell_ai5_widget_pane_g7

0x6ef4,	// (0x00052868) cell_ai5_widget_pane_t1_ParamLimits

0x6ef4,	// (0x00052868) cell_ai5_widget_pane_t1

0x6f11,	// (0x00052885) cell_ai5_widget_pane_t2_ParamLimits

0x6f11,	// (0x00052885) cell_ai5_widget_pane_t2

0x6f29,	// (0x0005289d) cell_ai5_widget_pane_t3_ParamLimits

0x6f29,	// (0x0005289d) cell_ai5_widget_pane_t3

0x6f41,	// (0x000528b5) cell_ai5_widget_pane_t4_ParamLimits

0x6f41,	// (0x000528b5) cell_ai5_widget_pane_t4

0xe4be,	// (0x00059e32) cell_ai5_widget_pane_t5_ParamLimits

0xe4be,	// (0x00059e32) cell_ai5_widget_pane_t5

0x6f86,	// (0x000528fa) cell_ai5_widget_pane_t6_ParamLimits

0x6f86,	// (0x000528fa) cell_ai5_widget_pane_t6

0x6f98,	// (0x0005290c) cell_ai5_widget_pane_t7_ParamLimits

0x6f98,	// (0x0005290c) cell_ai5_widget_pane_t7

0x6fb7,	// (0x0005292b) cell_ai5_widget_pane_t8_ParamLimits

0x6fb7,	// (0x0005292b) cell_ai5_widget_pane_t8

0x000b,

0xfe2b,	// (0x0005b79f) cell_ai5_widget_pane_t_ParamLimits

0xfe2b,	// (0x0005b79f) cell_ai5_widget_pane_t

0x703b,	// (0x000529af) grid_ai5_widget_pane

0x9ca0,	// (0x00055614) highlight_cell_ai5_widget_pane_ParamLimits

0x9ca0,	// (0x00055614) highlight_cell_ai5_widget_pane

0xe4de,	// (0x00059e52) ai5_sk_left_pane

0xe4e8,	// (0x00059e5c) ai5_sk_middle_pane

0xe4f2,	// (0x00059e66) ai5_sk_right_pane

0x706d,	// (0x000529e1) bg_ai5_widget_pane_g1_ParamLimits

0x706d,	// (0x000529e1) bg_ai5_widget_pane_g1

0x7079,	// (0x000529ed) bg_ai5_widget_pane_g2_ParamLimits

0x7079,	// (0x000529ed) bg_ai5_widget_pane_g2

0x7085,	// (0x000529f9) bg_ai5_widget_pane_g3_ParamLimits

0x7085,	// (0x000529f9) bg_ai5_widget_pane_g3

0x7091,	// (0x00052a05) bg_ai5_widget_pane_g4_ParamLimits

0x7091,	// (0x00052a05) bg_ai5_widget_pane_g4

0x709d,	// (0x00052a11) bg_ai5_widget_pane_g5_ParamLimits

0x709d,	// (0x00052a11) bg_ai5_widget_pane_g5

0x70a9,	// (0x00052a1d) bg_ai5_widget_pane_g6_ParamLimits

0x70a9,	// (0x00052a1d) bg_ai5_widget_pane_g6

0x70b5,	// (0x00052a29) bg_ai5_widget_pane_g7_ParamLimits

0x70b5,	// (0x00052a29) bg_ai5_widget_pane_g7

0x70c1,	// (0x00052a35) bg_ai5_widget_pane_g8_ParamLimits

0x70c1,	// (0x00052a35) bg_ai5_widget_pane_g8

0x70cd,	// (0x00052a41) bg_ai5_widget_pane_g9_ParamLimits

0x70cd,	// (0x00052a41) bg_ai5_widget_pane_g9

0x0008,

0xfe44,	// (0x0005b7b8) bg_ai5_widget_pane_g_ParamLimits

0xfe44,	// (0x0005b7b8) bg_ai5_widget_pane_g

0x70ff,	// (0x00052a73) cell_shortcut_ai5_widget_pane_ParamLimits

0x70ff,	// (0x00052a73) cell_shortcut_ai5_widget_pane

0xc4ac,	// (0x00057e20) bg_cell_shortcut_ai5_widget_pane

0x7110,	// (0x00052a84) cell_grid_ai5_widget_pane_g1

0xc4ac,	// (0x00057e20) highlight_cell_shortcut_ai5_widget_pane

0x21b1,	// (0x0004db25) ai5_sk_left_pane_g1

0x7119,	// (0x00052a8d) ai5_sk_left_pane_g2

0x7121,	// (0x00052a95) ai5_sk_left_pane_g3

0x7129,	// (0x00052a9d) ai5_sk_left_pane_g4

0x0003,

0xfe57,	// (0x0005b7cb) ai5_sk_left_pane_g

0x7131,	// (0x00052aa5) ai5_sk_left_pane_t1

0x21a9,	// (0x0004db1d) ai5_sk_right_pane_g1

0x713f,	// (0x00052ab3) ai5_sk_right_pane_g2

0x7147,	// (0x00052abb) ai5_sk_right_pane_g3

0x714f,	// (0x00052ac3) ai5_sk_right_pane_g4

0x0003,

0xfe60,	// (0x0005b7d4) ai5_sk_right_pane_g

0x7157,	// (0x00052acb) ai5_sk_right_pane_t1

0x21a9,	// (0x0004db1d) ai5_sk_middle_pane_g1

0x21b1,	// (0x0004db25) ai5_sk_middle_pane_g2

0x21c9,	// (0x0004db3d) ai5_sk_middle_pane_g3

0x7147,	// (0x00052abb) ai5_sk_middle_pane_g4

0x7121,	// (0x00052a95) ai5_sk_middle_pane_g5

0x7165,	// (0x00052ad9) ai5_sk_middle_pane_g6

0xe4fc,	// (0x00059e70) ai5_sk_middle_pane_g7

0x0006,

0xfe69,	// (0x0005b7dd) ai5_sk_middle_pane_g

0xaf66,	// (0x000568da) aid_touch_area_size_lc0_ParamLimits

0xaf66,	// (0x000568da) aid_touch_area_size_lc0

0x10cc,	// (0x0004ca40) cell_hwr_candidate_pane_t1_ParamLimits

0x05b8,	// (0x0004bf2c) aid_touch_navi_pane

0xb1f2,	// (0x00056b66) status_dt_navi_pane_ParamLimits

0xb1f2,	// (0x00056b66) status_dt_navi_pane

0xb20a,	// (0x00056b7e) status_dt_sta_pane_ParamLimits

0xb20a,	// (0x00056b7e) status_dt_sta_pane

0xe504,	// (0x00059e78) dt_sta_controll_pane

0xe511,	// (0x00059e85) dt_sta_indi_pane

0xe51e,	// (0x00059e92) dt_sta_title_pane

0x96c4,	// (0x00055038) bg_dt_sta_indi_pane_ParamLimits

0x96c4,	// (0x00055038) bg_dt_sta_indi_pane

0xe530,	// (0x00059ea4) dt_sta_battery_pane

0xe538,	// (0x00059eac) dt_sta_indi_pane_g1

0x71b7,	// (0x00052b2b) dt_sta_indi_pane_g2

0x71c0,	// (0x00052b34) dt_sta_indi_pane_g3

0x0002,

0xfe78,	// (0x0005b7ec) dt_sta_indi_pane_g

0x71c9,	// (0x00052b3d) dt_sta_signal_pane

0x9ca0,	// (0x00055614) bg_dt_sta_title_pane_ParamLimits

0x9ca0,	// (0x00055614) bg_dt_sta_title_pane

0x3003,	// (0x0004e977) dt_sta_title_pane_g1

0xe541,	// (0x00059eb5) dt_sta_title_pane_t1_ParamLimits

0xe541,	// (0x00059eb5) dt_sta_title_pane_t1

0x8e69,	// (0x000547dd) bg_dt_sta_control_pane

0xe556,	// (0x00059eca) dt_sta_controll_pane_g1

0xe55f,	// (0x00059ed3) bg_dt_sta_title_pane_g1

0xe568,	// (0x00059edc) bg_dt_sta_title_pane_g2

0xe571,	// (0x00059ee5) bg_dt_sta_title_pane_g3

0x0002,

0xfe7f,	// (0x0005b7f3) bg_dt_sta_title_pane_g

0x4767,	// (0x000500db) bg_dt_sta_indi_pane_g1

0x720b,	// (0x00052b7f) dt_sta_signal_pane_g1

0x7213,	// (0x00052b87) dt_sta_signal_pane_g2

0x0001,

0xfe86,	// (0x0005b7fa) dt_sta_signal_pane_g

0x721b,	// (0x00052b8f) dt_sta_battery_pane_g1

0x7224,	// (0x00052b98) dt_sta_battery_pane_t1

0x4767,	// (0x000500db) bg_dt_sta_control_pane_g1

0xc0cd,	// (0x00057a41) fep_china_uni_eep_pane

0xc0d5,	// (0x00057a49) fep_china_uni_entry_pane_ParamLimits

0xc0e5,	// (0x00057a59) popup_fep_china_uni_window_g1_ParamLimits

0xc0f5,	// (0x00057a69) popup_fep_china_uni_window_g2_ParamLimits

0xc0f5,	// (0x00057a69) popup_fep_china_uni_window_g2

0x0001,

0xf6f1,	// (0x0005b065) popup_fep_china_uni_window_g_ParamLimits

0xf6f1,	// (0x0005b065) popup_fep_china_uni_window_g

0x7233,	// (0x00052ba7) fep_china_uni_eep_pane_g1

0x723b,	// (0x00052baf) fep_china_uni_eep_pane_t1

0x6c33,	// (0x000525a7) aid_touch_area_size_smil_player

0x070e,	// (0x0004c082) lc0_clock_pane

0x2033,	// (0x0004d9a7) status_pane_g5_ParamLimits

0x2033,	// (0x0004d9a7) status_pane_g5

0xa99e,	// (0x00056312) popup_keymap_window

0x1ff1,	// (0x0004d965) status_icon_pane

0x6e42,	// (0x000527b6) cell_ai5_widget_pane_g3_ParamLimits

0x6e5c,	// (0x000527d0) cell_ai5_widget_pane_g4_ParamLimits

0x6e6c,	// (0x000527e0) cell_ai5_widget_pane_g5_ParamLimits

0x6e94,	// (0x00052808) cell_ai5_widget_pane_g8_ParamLimits

0x6e94,	// (0x00052808) cell_ai5_widget_pane_g8

0x6ea8,	// (0x0005281c) cell_ai5_widget_pane_g9_ParamLimits

0x6ea8,	// (0x0005281c) cell_ai5_widget_pane_g9

0x6ebc,	// (0x00052830) cell_ai5_widget_pane_g10_ParamLimits

0x6ebc,	// (0x00052830) cell_ai5_widget_pane_g10

0x724a,	// (0x00052bbe) status_icon_pane_g1

0x8e69,	// (0x000547dd) bg_popup_sub_pane_cp13

0x7252,	// (0x00052bc6) popup_keymap_window_t1

0xa65a,	// (0x00055fce) control_pane_g6_ParamLimits

0xa65a,	// (0x00055fce) control_pane_g6

0xa667,	// (0x00055fdb) control_pane_g7_ParamLimits

0xa667,	// (0x00055fdb) control_pane_g7

0xa674,	// (0x00055fe8) control_pane_g8_ParamLimits

0xa674,	// (0x00055fe8) control_pane_g8

0xe504,	// (0x00059e78) dt_sta_controll_pane_ParamLimits

0xe511,	// (0x00059e85) dt_sta_indi_pane_ParamLimits

0xe51e,	// (0x00059e92) dt_sta_title_pane_ParamLimits

0x9b90,	// (0x00055504) aid_size_touch_scroll_bar_cale

0x90dd,	// (0x00054a51) popup_discreet_window_ParamLimits

0x90dd,	// (0x00054a51) popup_discreet_window

0x912f,	// (0x00054aa3) popup_sk_window

0x2847,	// (0x0004e1bb) bg_popup_sub_pane_cp28_ParamLimits

0x2847,	// (0x0004e1bb) bg_popup_sub_pane_cp28

0x7260,	// (0x00052bd4) popup_discreet_window_g1_ParamLimits

0x7260,	// (0x00052bd4) popup_discreet_window_g1

0x7280,	// (0x00052bf4) popup_discreet_window_t1_ParamLimits

0x7280,	// (0x00052bf4) popup_discreet_window_t1

0x729e,	// (0x00052c12) popup_discreet_window_t2_ParamLimits

0x729e,	// (0x00052c12) popup_discreet_window_t2

0x0002,

0xfe8b,	// (0x0005b7ff) popup_discreet_window_t_ParamLimits

0xfe8b,	// (0x0005b7ff) popup_discreet_window_t

0x1b27,	// (0x0004d49b) popup_sk_window_g1

0x1b31,	// (0x0004d4a5) popup_sk_window_g2

0x0001,

0xfe92,	// (0x0005b806) popup_sk_window_g

0xbcd4,	// (0x00057648) popup_sk_window_t1

0xbce2,	// (0x00057656) popup_sk_window_t1_copy1

0x6e2e,	// (0x000527a2) cell_ai5_widget_pane_g2_ParamLimits

0x6fc9,	// (0x0005293d) cell_ai5_widget_pane_t9_ParamLimits

0x6fc9,	// (0x0005293d) cell_ai5_widget_pane_t9

0x8e69,	// (0x000547dd) main_fep_fshwr2_pane

0xbcf0,	// (0x00057664) aid_fshwr2_btn_pane

0xbd04,	// (0x00057678) aid_fshwr2_syb_pane

0xbd18,	// (0x0005768c) aid_fshwr2_txt_pane

0xbd28,	// (0x0005769c) fshwr2_func_candi_pane

0xbd48,	// (0x000576bc) fshwr2_hwr_syb_pane

0xbd6a,	// (0x000576de) fshwr2_icf_pane

0x8e69,	// (0x000547dd) fshwr2_icf_bg_pane

0x1bf9,	// (0x0004d56d) fshwr2_icf_pane_t1_ParamLimits

0x1bf9,	// (0x0004d56d) fshwr2_icf_pane_t1

0xc04a,	// (0x000579be) fshwr2_func_candi_pane_g1

0xe57a,	// (0x00059eee) fshwr2_func_candi_row_pane_ParamLimits

0xe57a,	// (0x00059eee) fshwr2_func_candi_row_pane

0xbd9a,	// (0x0005770e) cell_fshwr2_syb_pane_ParamLimits

0xbd9a,	// (0x0005770e) cell_fshwr2_syb_pane

0x6c03,	// (0x00052577) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6c03,	// (0x00052577) fshwr2_hwr_syb_pane_g1

0x8e69,	// (0x000547dd) bg_popup_call_pane_cp01

0xbdc0,	// (0x00057734) fshwr2_func_candi_cell_pane_ParamLimits

0xbdc0,	// (0x00057734) fshwr2_func_candi_cell_pane

0x2630,	// (0x0004dfa4) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2630,	// (0x0004dfa4) fshwr2_func_candi_cell_bg_pane

0xbe0b,	// (0x0005777f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbe0b,	// (0x0005777f) fshwr2_func_candi_cell_pane_g1

0xbe42,	// (0x000577b6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbe42,	// (0x000577b6) fshwr2_func_candi_cell_pane_t1

0x8e69,	// (0x000547dd) bg_button_pane_cp08

0x9e84,	// (0x000557f8) cell_fshwr2_syb_bg_pane

0xbe5d,	// (0x000577d1) cell_fshwr2_syb_bg_pane_g1

0xbe70,	// (0x000577e4) cell_fshwr2_syb_bg_pane_t1

0x9ca0,	// (0x00055614) main_tmo_pane

0xc9e5,	// (0x00058359) uni_indicator_pane_g1_ParamLimits

0xc9fb,	// (0x0005836f) uni_indicator_pane_g2_ParamLimits

0xca11,	// (0x00058385) uni_indicator_pane_g3_ParamLimits

0x3370,	// (0x0004ece4) uni_indicator_pane_g4_ParamLimits

0x3370,	// (0x0004ece4) uni_indicator_pane_g4

0x3384,	// (0x0004ecf8) uni_indicator_pane_g5_ParamLimits

0x3384,	// (0x0004ecf8) uni_indicator_pane_g5

0x3384,	// (0x0004ecf8) uni_indicator_pane_g6_ParamLimits

0x3384,	// (0x0004ecf8) uni_indicator_pane_g6

0xf8f0,	// (0x0005b264) uni_indicator_pane_g_ParamLimits

0xd811,	// (0x00059185) popup_tmo_note_window_ParamLimits

0xd811,	// (0x00059185) popup_tmo_note_window

0x9ca0,	// (0x00055614) fshwr2_bg_pane

0xbe33,	// (0x000577a7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbe33,	// (0x000577a7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe97,	// (0x0005b80b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe97,	// (0x0005b80b) fshwr2_func_candi_cell_pane_g

0x4767,	// (0x000500db) bg_popup_window_pane_cp01

0x1cdd,	// (0x0004d651) bg_popup_window_pane_g1_cp01

0x7317,	// (0x00052c8b) bg_popup_window_pane_cp22_ParamLimits

0x7317,	// (0x00052c8b) bg_popup_window_pane_cp22

0xe59d,	// (0x00059f11) listscroll_tmo_link_pane_ParamLimits

0xe59d,	// (0x00059f11) listscroll_tmo_link_pane

0x7365,	// (0x00052cd9) popup_tmo_note_window_g1_ParamLimits

0x7365,	// (0x00052cd9) popup_tmo_note_window_g1

0xe5dd,	// (0x00059f51) tmo_note_info_pane_ParamLimits

0xe5dd,	// (0x00059f51) tmo_note_info_pane

0xe5f7,	// (0x00059f6b) list_tmo_note_info_pane_g1_ParamLimits

0xe5f7,	// (0x00059f6b) list_tmo_note_info_pane_g1

0x73a3,	// (0x00052d17) list_tmo_note_info_pane_g2_ParamLimits

0x73a3,	// (0x00052d17) list_tmo_note_info_pane_g2

0x0001,

0xfe9c,	// (0x0005b810) list_tmo_note_info_pane_g_ParamLimits

0xfe9c,	// (0x0005b810) list_tmo_note_info_pane_g

0x73bf,	// (0x00052d33) list_tmo_note_info_text_pane_ParamLimits

0x73bf,	// (0x00052d33) list_tmo_note_info_text_pane

0x7440,	// (0x00052db4) list_tmo_link_pane

0x744d,	// (0x00052dc1) scroll_pane_cp20

0x745a,	// (0x00052dce) list_single_tmo_link_pane_ParamLimits

0x745a,	// (0x00052dce) list_single_tmo_link_pane

0x746a,	// (0x00052dde) list_single_tmo_link_pane_t1

0x7478,	// (0x00052dec) list_tmo_note_info_text_pane_t1_ParamLimits

0x7478,	// (0x00052dec) list_tmo_note_info_text_pane_t1

0x9d5c,	// (0x000556d0) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9d5c,	// (0x000556d0) aid_size_touch_scroll_bar_cp01

0x8ad6,	// (0x0005444a) aid_size_touch_slider_marker

0x911f,	// (0x00054a93) popup_settings_window_ParamLimits

0x911f,	// (0x00054a93) popup_settings_window

0xe914,	// (0x0005a288) popup_candi_list_indi_window

0x05b8,	// (0x0004bf2c) aid_touch_navi_pane_ParamLimits

0x130c,	// (0x0004cc80) rs_clock_indi_pane

0x1315,	// (0x0004cc89) sctrl_sk_bottom_pane_ParamLimits

0x1326,	// (0x0004cc9a) sctrl_sk_top_pane_ParamLimits

0xb929,	// (0x0005729d) popup_fep_tooltip_window

0x6da2,	// (0x00052716) aid_size_cell_widget_grid_ParamLimits

0x6e17,	// (0x0005278b) cell_ai5_widget_pane_g1_ParamLimits

0x6e17,	// (0x0005278b) cell_ai5_widget_pane_g1

0x6e7c,	// (0x000527f0) cell_ai5_widget_pane_g6_ParamLimits

0x6e88,	// (0x000527fc) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe10,	// (0x0005b784) cell_ai5_widget_pane_g_ParamLimits

0xfe10,	// (0x0005b784) cell_ai5_widget_pane_g

0x6ff8,	// (0x0005296c) cell_ai5_widget_pane_t10_ParamLimits

0x6ff8,	// (0x0005296c) cell_ai5_widget_pane_t10

0x703b,	// (0x000529af) grid_ai5_widget_pane_ParamLimits

0x70d9,	// (0x00052a4d) cell_contacts_ai5_widget_pane_ParamLimits

0x70d9,	// (0x00052a4d) cell_contacts_ai5_widget_pane

0x72b3,	// (0x00052c27) popup_discreet_window_t3_ParamLimits

0x72b3,	// (0x00052c27) popup_discreet_window_t3

0xbd86,	// (0x000576fa) popup_fshwr2_char_preview_window_ParamLimits

0xbd86,	// (0x000576fa) popup_fshwr2_char_preview_window

0xe60e,	// (0x00059f82) tmo_note_info_pane_t1

0xe623,	// (0x00059f97) tmo_note_info_pane_t2

0xe63a,	// (0x00059fae) tmo_note_info_pane_t3

0x741c,	// (0x00052d90) tmo_note_info_pane_t4

0x742e,	// (0x00052da2) tmo_note_info_pane_t5

0x0004,

0xfea1,	// (0x0005b815) tmo_note_info_pane_t

0x7440,	// (0x00052db4) list_tmo_link_pane_ParamLimits

0x744d,	// (0x00052dc1) scroll_pane_cp20_ParamLimits

0x8e69,	// (0x000547dd) bg_popup_fep_char_preview_window_cp01

0xe64f,	// (0x00059fc3) popup_fshwr2_char_preview_window_t1

0x749f,	// (0x00052e13) popup_candi_list_indi_window_g1

0x74a8,	// (0x00052e1c) bg_cell_contacts_ai5_widget_pane

0x74b4,	// (0x00052e28) cell_contacts_ai5_widget_pane_g1

0x4e4e,	// (0x000507c2) cell_contacts_ai5_widget_pane_g2

0x74c9,	// (0x00052e3d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeac,	// (0x0005b820) cell_contacts_ai5_widget_pane_g

0x74d5,	// (0x00052e49) cell_contacts_ai5_widget_pane_t1

0x9ca0,	// (0x00055614) highlight_cell_shortcut_ai5_widget_pane_cp01

0x754c,	// (0x00052ec0) settings_container_pane

0xc4ac,	// (0x00057e20) listscroll_set_pane_copy1

0x3e4a,	// (0x0004f7be) scroll_pane_cp121_copy1

0x25ec,	// (0x0004df60) set_content_pane_copy1

0xe65d,	// (0x00059fd1) aid_height_set_list_copy1_ParamLimits

0xe65d,	// (0x00059fd1) aid_height_set_list_copy1

0x356c,	// (0x0004eee0) aid_size_parent_copy1_ParamLimits

0x356c,	// (0x0004eee0) aid_size_parent_copy1

0xe669,	// (0x00059fdd) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe669,	// (0x00059fdd) button_value_adjust_pane_cp6_copy1

0x9e84,	// (0x000557f8) list_highlight_pane_cp2_copy1_ParamLimits

0x9e84,	// (0x000557f8) list_highlight_pane_cp2_copy1

0xe67d,	// (0x00059ff1) list_set_pane_copy1_ParamLimits

0xe67d,	// (0x00059ff1) list_set_pane_copy1

0x74e7,	// (0x00052e5b) main_pane_set_t1_copy1_ParamLimits

0x74e7,	// (0x00052e5b) main_pane_set_t1_copy1

0x7521,	// (0x00052e95) main_pane_set_t2_copy1_ParamLimits

0x7521,	// (0x00052e95) main_pane_set_t2_copy1

0xe72a,	// (0x0005a09e) main_pane_set_t3_copy1

0xe738,	// (0x0005a0ac) main_pane_set_t4_copy1

0x7540,	// (0x00052eb4) set_content_pane_g1_copy1_ParamLimits

0x7540,	// (0x00052eb4) set_content_pane_g1_copy1

0xe746,	// (0x0005a0ba) setting_code_pane_copy1

0x7649,	// (0x00052fbd) setting_slider_graphic_pane_copy1

0x7649,	// (0x00052fbd) setting_slider_pane_copy1

0x7651,	// (0x00052fc5) setting_text_pane_copy1

0x7651,	// (0x00052fc5) setting_volume_pane_copy1

0xe746,	// (0x0005a0ba) settings_code_pane_cp2_copy1

0xe74e,	// (0x0005a0c2) settings_code_pane_cp_copy1_ParamLimits

0xe74e,	// (0x0005a0c2) settings_code_pane_cp_copy1

0xbe86,	// (0x000577fa) volume_set_pane_copy1

0xe762,	// (0x0005a0d6) volume_set_pane_g10_copy1

0xe76a,	// (0x0005a0de) volume_set_pane_g1_copy1

0xe772,	// (0x0005a0e6) volume_set_pane_g2_copy1

0xe77a,	// (0x0005a0ee) volume_set_pane_g3_copy1

0xe782,	// (0x0005a0f6) volume_set_pane_g4_copy1

0xe78a,	// (0x0005a0fe) volume_set_pane_g5_copy1

0xe792,	// (0x0005a106) volume_set_pane_g6_copy1

0xe79a,	// (0x0005a10e) volume_set_pane_g7_copy1

0xe7a2,	// (0x0005a116) volume_set_pane_g8_copy1

0xe7aa,	// (0x0005a11e) volume_set_pane_g9_copy1

0x935a,	// (0x00054cce) bg_set_opt_pane_cp_copy1_ParamLimits

0x935a,	// (0x00054cce) bg_set_opt_pane_cp_copy1

0xbe8e,	// (0x00057802) setting_slider_pane_t1_copy1_ParamLimits

0xbe8e,	// (0x00057802) setting_slider_pane_t1_copy1

0xbead,	// (0x00057821) setting_slider_pane_t2_copy1_ParamLimits

0xbead,	// (0x00057821) setting_slider_pane_t2_copy1

0xbec7,	// (0x0005783b) setting_slider_pane_t3_copy1_ParamLimits

0xbec7,	// (0x0005783b) setting_slider_pane_t3_copy1

0xbedf,	// (0x00057853) slider_set_pane_copy1_ParamLimits

0xbedf,	// (0x00057853) slider_set_pane_copy1

0x9cf8,	// (0x0005566c) set_opt_bg_pane_g1_copy2

0x9d00,	// (0x00055674) set_opt_bg_pane_g2_copy2

0x76bd,	// (0x00053031) set_opt_bg_pane_g3_copy2

0x9d10,	// (0x00055684) set_opt_bg_pane_g4_copy2

0x9d18,	// (0x0005568c) set_opt_bg_pane_g5_copy2

0x9d20,	// (0x00055694) set_opt_bg_pane_g6_copy2

0xe7b2,	// (0x0005a126) set_opt_bg_pane_g7_copy2

0x76cf,	// (0x00053043) set_opt_bg_pane_g8_copy2

0x76d9,	// (0x0005304d) set_opt_bg_pane_g9_copy2

0xbef5,	// (0x00057869) aid_size_touch_slider_mark_copy1_ParamLimits

0xbef5,	// (0x00057869) aid_size_touch_slider_mark_copy1

0xe7ba,	// (0x0005a12e) slider_set_pane_g1_copy1

0x1d69,	// (0x0004d6dd) slider_set_pane_g2_copy1

0xb65a,	// (0x00056fce) slider_set_pane_g3_copy1_ParamLimits

0xb65a,	// (0x00056fce) slider_set_pane_g3_copy1

0xb66e,	// (0x00056fe2) slider_set_pane_g4_copy1_ParamLimits

0xb66e,	// (0x00056fe2) slider_set_pane_g4_copy1

0xb686,	// (0x00056ffa) slider_set_pane_g5_copy1_ParamLimits

0xb686,	// (0x00056ffa) slider_set_pane_g5_copy1

0xb65a,	// (0x00056fce) slider_set_pane_g6_copy1_ParamLimits

0xb65a,	// (0x00056fce) slider_set_pane_g6_copy1

0xbf09,	// (0x0005787d) slider_set_pane_g7_copy1_ParamLimits

0xbf09,	// (0x0005787d) slider_set_pane_g7_copy1

0x90bf,	// (0x00054a33) bg_set_opt_pane_cp2_copy1

0xe7c3,	// (0x0005a137) setting_slider_graphic_pane_g1_copy1

0xee87,	// (0x0005a7fb) setting_slider_graphic_pane_t1_copy1

0xe7cc,	// (0x0005a140) setting_slider_graphic_pane_t2_copy1

0xee97,	// (0x0005a80b) slider_set_pane_cp_copy1

0x7725,	// (0x00053099) input_focus_pane_cp1_copy1

0x772e,	// (0x000530a2) list_set_text_pane_copy1

0x7736,	// (0x000530aa) setting_text_pane_g1_copy1

0xeea7,	// (0x0005a81b) set_text_pane_t1_copy1

0x7725,	// (0x00053099) input_focus_pane_cp2_copy1

0x7736,	// (0x000530aa) setting_code_pane_g1_copy1

0x773f,	// (0x000530b3) setting_code_pane_t1_copy1

0x774d,	// (0x000530c1) list_set_graphic_pane_copy1

0x90bf,	// (0x00054a33) bg_set_opt_pane_cp4_copy1

0xc225,	// (0x00057b99) list_set_graphic_pane_g1_copy1_ParamLimits

0xc225,	// (0x00057b99) list_set_graphic_pane_g1_copy1

0x7761,	// (0x000530d5) list_set_graphic_pane_g2_copy1

0xc23d,	// (0x00057bb1) list_set_graphic_pane_t1_copy1_ParamLimits

0xc23d,	// (0x00057bb1) list_set_graphic_pane_t1_copy1

0x4767,	// (0x000500db) rs_clock_indi_pane_g1

0x7769,	// (0x000530dd) rs_clock_indi_pane_t1

0x7777,	// (0x000530eb) rs_indi_pane

0x777f,	// (0x000530f3) rs_indi_pane_g1

0x7788,	// (0x000530fc) rs_indi_pane_g2

0x749f,	// (0x00052e13) rs_indi_pane_g3

0x0002,

0xfeb3,	// (0x0005b827) rs_indi_pane_g

0xc4ac,	// (0x00057e20) bg_popup_preview_window_pane_cp03

0x7791,	// (0x00053105) popup_fep_tooltip_window_t1

0xd4b7,	// (0x00058e2b) popup_note2_window_g2_ParamLimits

0xd4b7,	// (0x00058e2b) popup_note2_window_g2

0x0001,

0xfc47,	// (0x0005b5bb) popup_note2_window_g_ParamLimits

0xfc47,	// (0x0005b5bb) popup_note2_window_g

0x58fe,	// (0x00051272) bg_popup_sub_pane_cp11_ParamLimits

0x590b,	// (0x0005127f) cell_ai3_links_pane_g1_ParamLimits

0x5922,	// (0x00051296) cell_ai3_links_pane_t1

0xeea7,	// (0x0005a81b) set_text_pane_t1_copy1_ParamLimits

0xc3ea,	// (0x00057d5e) cell_graphic_popup_pane_cp2_ParamLimits

0xc3ea,	// (0x00057d5e) cell_graphic_popup_pane_cp2

0xeec1,	// (0x0005a835) cell_graphic_popup_pane_g1_cp2

0x9a10,	// (0x00055384) cell_graphic_popup_pane_g2_cp2

0x77a7,	// (0x0005311b) cell_graphic_popup_pane_g3_cp2

0xeec9,	// (0x0005a83d) cell_graphic_popup_pane_t2_cp2

0x9a21,	// (0x00055395) grid_highlight_pane_cp3_cp2

0xa03d,	// (0x000559b1) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x9ca0,	// (0x00055614) main_tmo_pane_ParamLimits

0xd805,	// (0x00059179) popup_tmo_big_image_note_window

0x6e06,	// (0x0005277a) cell_ai5_widget_list_pane

0x6e0e,	// (0x00052782) cell_ai5_widget_lrg_icon_pane

0xe60e,	// (0x00059f82) tmo_note_info_pane_t1_ParamLimits

0xe623,	// (0x00059f97) tmo_note_info_pane_t2_ParamLimits

0xe63a,	// (0x00059fae) tmo_note_info_pane_t3_ParamLimits

0x741c,	// (0x00052d90) tmo_note_info_pane_t4_ParamLimits

0x742e,	// (0x00052da2) tmo_note_info_pane_t5_ParamLimits

0xfea1,	// (0x0005b815) tmo_note_info_pane_t_ParamLimits

0x754c,	// (0x00052ec0) settings_container_pane_ParamLimits

0xee9f,	// (0x0005a813) indicator_popup_pane_cp5

0xee9f,	// (0x0005a813) indicator_popup_pane_cp6

0x774d,	// (0x000530c1) list_set_graphic_pane_copy1_ParamLimits

0x8e69,	// (0x000547dd) bg_popup_window_pane_cp23

0x77bd,	// (0x00053131) popup_tmo_big_image_note_window_g1

0x77c6,	// (0x0005313a) popup_tmo_big_image_note_window_t1

0x77d6,	// (0x0005314a) popup_tmo_big_image_note_window_t2

0x77e6,	// (0x0005315a) popup_tmo_big_image_note_window_t3

0x0002,

0xfeba,	// (0x0005b82e) popup_tmo_big_image_note_window_t

0x4767,	// (0x000500db) cell_ai5_widget_lrg_icon_pane_g1

0x77f6,	// (0x0005316a) cell_ai5_widget_lrg_icon_pane_t1

0x7804,	// (0x00053178) cell_ai5_widget_list_row_pane_ParamLimits

0x7804,	// (0x00053178) cell_ai5_widget_list_row_pane

0x781b,	// (0x0005318f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x781b,	// (0x0005318f) cell_ai5_widget_list_row_pane_g1

0x7828,	// (0x0005319c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x7828,	// (0x0005319c) cell_ai5_widget_list_row_pane_t1

0x7853,	// (0x000531c7) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7853,	// (0x000531c7) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec1,	// (0x0005b835) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec1,	// (0x0005b835) cell_ai5_widget_list_row_pane_t

0x8e69,	// (0x000547dd) main_fep_vtchi_ss_pane

0x78a3,	// (0x00053217) popup_fep_char_pre_window

0x78ab,	// (0x0005321f) popup_fep_ituss_window

0xef01,	// (0x0005a875) popup_fep_vkbss_window

0x9e84,	// (0x000557f8) grid_vkbss_keypad_pane_ParamLimits

0x9e84,	// (0x000557f8) grid_vkbss_keypad_pane

0x7923,	// (0x00053297) ituss_keypad_pane

0x1db2,	// (0x0004d726) aid_vkbss_key_offset_ParamLimits

0x1db2,	// (0x0004d726) aid_vkbss_key_offset

0xbf33,	// (0x000578a7) cell_vkbss_key_pane_ParamLimits

0xbf33,	// (0x000578a7) cell_vkbss_key_pane

0x7933,	// (0x000532a7) bg_cell_vkbss_key_g1_ParamLimits

0x7933,	// (0x000532a7) bg_cell_vkbss_key_g1

0xef0e,	// (0x0005a882) cell_vkbss_key_3p_pane_ParamLimits

0xef0e,	// (0x0005a882) cell_vkbss_key_3p_pane

0xef44,	// (0x0005a8b8) cell_vkbss_key_g1_ParamLimits

0xef44,	// (0x0005a8b8) cell_vkbss_key_g1

0xef7a,	// (0x0005a8ee) cell_vkbss_key_t1_ParamLimits

0xef7a,	// (0x0005a8ee) cell_vkbss_key_t1

0x1e09,	// (0x0004d77d) cell_ituss_key_pane_ParamLimits

0x1e09,	// (0x0004d77d) cell_ituss_key_pane

0x7a07,	// (0x0005337b) bg_cell_ituss_key_g1_ParamLimits

0x7a07,	// (0x0005337b) bg_cell_ituss_key_g1

0x7a13,	// (0x00053387) cell_ituss_key_pane_g1_ParamLimits

0x7a13,	// (0x00053387) cell_ituss_key_pane_g1

0x1e1a,	// (0x0004d78e) cell_ituss_key_pane_g2_ParamLimits

0x1e1a,	// (0x0004d78e) cell_ituss_key_pane_g2

0x0005,

0xfec8,	// (0x0005b83c) cell_ituss_key_pane_g_ParamLimits

0xfec8,	// (0x0005b83c) cell_ituss_key_pane_g

0x1e9e,	// (0x0004d812) cell_ituss_key_t1_ParamLimits

0x1e9e,	// (0x0004d812) cell_ituss_key_t1

0x1ed8,	// (0x0004d84c) cell_ituss_key_t2_ParamLimits

0x1ed8,	// (0x0004d84c) cell_ituss_key_t2

0x1f0a,	// (0x0004d87e) cell_ituss_key_t3_ParamLimits

0x1f0a,	// (0x0004d87e) cell_ituss_key_t3

0x1f3b,	// (0x0004d8af) cell_ituss_key_t4_ParamLimits

0x1f3b,	// (0x0004d8af) cell_ituss_key_t4

0x0005,

0xfed5,	// (0x0005b849) cell_ituss_key_t_ParamLimits

0xfed5,	// (0x0005b849) cell_ituss_key_t

0xefd6,	// (0x0005a94a) cell_vkbss_key_3p_pane_g1

0xefde,	// (0x0005a952) cell_vkbss_key_3p_pane_g2

0xefe6,	// (0x0005a95a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee2,	// (0x0005b856) cell_vkbss_key_3p_pane_g

0xc4ac,	// (0x00057e20) bg_popup_fep_char_preview_window_cp02

0x7a51,	// (0x000533c5) popup_fep_char_pre_window_t1

0xe4b4,	// (0x00059e28) main_ai5_sk_pane

0x74a8,	// (0x00052e1c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x74b4,	// (0x00052e28) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4e4e,	// (0x000507c2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x74c9,	// (0x00052e3d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeac,	// (0x0005b820) cell_contacts_ai5_widget_pane_g_ParamLimits

0x74d5,	// (0x00052e49) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x9ca0,	// (0x00055614) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xefee,	// (0x0005a962) main_ai5_sk_pane_g1

0xb5cc,	// (0x00056f40) popup_query_code_window_g1

0xeef2,	// (0x0005a866) popup_fep_vkb_icf_pane

0x78f7,	// (0x0005326b) popup_fep_vtchi_icf_pane

0x7a68,	// (0x000533dc) bg_icf_pane

0x7a68,	// (0x000533dc) list_vkb_icf_pane

0x7a74,	// (0x000533e8) bg_icf_pane_cp01

0x7a87,	// (0x000533fb) vtchi_icf_list_pane

0xf043,	// (0x0005a9b7) list_vkb_icf_pane_t1_ParamLimits

0xf043,	// (0x0005a9b7) list_vkb_icf_pane_t1

0x7b0c,	// (0x00053480) vtchi_icf_list_pane_t1_ParamLimits

0x7b0c,	// (0x00053480) vtchi_icf_list_pane_t1

0x78ab,	// (0x0005321f) popup_fep_ituss_window_ParamLimits

0x78f7,	// (0x0005326b) popup_fep_vtchi_icf_pane_ParamLimits

0x7923,	// (0x00053297) ituss_keypad_pane_ParamLimits

0x1da8,	// (0x0004d71c) ituss_sks_pane

0x7a68,	// (0x000533dc) bg_icf_pane_ParamLimits

0xeed7,	// (0x0005a84b) icf_edit_indi_pane_ParamLimits

0xeed7,	// (0x0005a84b) icf_edit_indi_pane

0x7a68,	// (0x000533dc) list_vkb_icf_pane_ParamLimits

0x7a74,	// (0x000533e8) bg_icf_pane_cp01_ParamLimits

0x7896,	// (0x0005320a) icf_edit_indi_pane_cp01_ParamLimits

0x7896,	// (0x0005320a) icf_edit_indi_pane_cp01

0x7a87,	// (0x000533fb) vtchi_query_pane

0x6c03,	// (0x00052577) icf_edit_indi_pane_g1_ParamLimits

0x6c03,	// (0x00052577) icf_edit_indi_pane_g1

0xf05b,	// (0x0005a9cf) icf_edit_indi_pane_g2_ParamLimits

0xf05b,	// (0x0005a9cf) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x0005b881) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x0005b881) icf_edit_indi_pane_g

0xf06f,	// (0x0005a9e3) icf_edit_indi_pane_t1

0x7b30,	// (0x000534a4) bg_input_focus_pane_cp042

0x9b87,	// (0x000554fb) vtchi_button_pane

0x7b39,	// (0x000534ad) vtchi_query_pane_t1

0x7b47,	// (0x000534bb) vtchi_query_pane_t2

0x7b55,	// (0x000534c9) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x0005b870) vtchi_query_pane_t

0x8e69,	// (0x000547dd) bg_button_pane_cp13

0x7b63,	// (0x000534d7) vtchi_button_pane_g1

0x1fbc,	// (0x0004d930) ituss_sks_pane_g1

0x1fc7,	// (0x0004d93b) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x0005b877) ituss_sks_pane_g

0x7b6b,	// (0x000534df) ituss_sks_pane_t1

0x7b79,	// (0x000534ed) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x0005b87c) ituss_sks_pane_t

0x41e2,	// (0x0004fb56) indicator_nsta_pane_cp_g1

0x41eb,	// (0x0004fb5f) indicator_nsta_pane_cp_g2

0x41f3,	// (0x0004fb67) indicator_nsta_pane_cp_g3

0x41fb,	// (0x0004fb6f) indicator_nsta_pane_cp_g4

0x41eb,	// (0x0004fb5f) indicator_nsta_pane_cp_g5

0x41f3,	// (0x0004fb67) indicator_nsta_pane_cp_g6

0x0005,

0xfa91,	// (0x0005b405) indicator_nsta_pane_cp_g

0xe289,	// (0x00059bfd) cell_graphic2_pane_t2_ParamLimits

0xe289,	// (0x00059bfd) cell_graphic2_pane_t2

0x0001,

0xfd97,	// (0x0005b70b) cell_graphic2_pane_t_ParamLimits

0xfd97,	// (0x0005b70b) cell_graphic2_pane_t

0xe2c0,	// (0x00059c34) cell_graphic2_control_pane_t1

0xa329,	// (0x00055c9d) signal_pane_g3_ParamLimits

0xa329,	// (0x00055c9d) signal_pane_g3

0xa33d,	// (0x00055cb1) signal_pane_g4_ParamLimits

0xa33d,	// (0x00055cb1) signal_pane_g4

0x7865,	// (0x000531d9) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7865,	// (0x000531d9) cell_ai5_widget_list_row_pane_t3

0x7a27,	// (0x0005339b) cell_ituss_key_pane_t1_ParamLimits

0x7a27,	// (0x0005339b) cell_ituss_key_pane_t1

0x22bb,	// (0x0004dc2f) form_field_data_wide_pane_vc_t2_ParamLimits

0x22bb,	// (0x0004dc2f) form_field_data_wide_pane_vc_t2

0x22cf,	// (0x0004dc43) form_field_data_wide_pane_vc_t3_ParamLimits

0x22cf,	// (0x0004dc43) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d8,	// (0x0005b14c) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d8,	// (0x0005b14c) form_field_data_wide_pane_vc_t

0x3e8c,	// (0x0004f800) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3e8c,	// (0x0004f800) form_field_slider_wide_pane_vc_t3

0x3f6a,	// (0x0004f8de) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3f6a,	// (0x0004f8de) form_field_popup_wide_pane_vc_t2

0x3f81,	// (0x0004f8f5) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3f81,	// (0x0004f8f5) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa80,	// (0x0005b3f4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0005b3f4) form_field_popup_wide_pane_vc_t

0xbcf0,	// (0x00057664) aid_fshwr2_btn_pane_ParamLimits

0xbd04,	// (0x00057678) aid_fshwr2_syb_pane_ParamLimits

0xbd18,	// (0x0005768c) aid_fshwr2_txt_pane_ParamLimits

0x9ca0,	// (0x00055614) fshwr2_bg_pane_ParamLimits

0xbd28,	// (0x0005769c) fshwr2_func_candi_pane_ParamLimits

0xbd48,	// (0x000576bc) fshwr2_hwr_syb_pane_ParamLimits

0xbd6a,	// (0x000576de) fshwr2_icf_pane_ParamLimits

0x0e38,	// (0x0004c7ac) list_double_graphic_pane_vc_g4_ParamLimits

0x0e38,	// (0x0004c7ac) list_double_graphic_pane_vc_g4

0x1e3a,	// (0x0004d7ae) cell_ituss_key_pane_g3_ParamLimits

0x1e3a,	// (0x0004d7ae) cell_ituss_key_pane_g3

0x1f6c,	// (0x0004d8e0) cell_ituss_key_t5_ParamLimits

0x1f6c,	// (0x0004d8e0) cell_ituss_key_t5

0xef01,	// (0x0005a875) popup_fep_vkbss_window_ParamLimits

0x6d99,	// (0x0005270d) aid_cell_ai5_quarter

0xf06f,	// (0x0005a9e3) icf_edit_indi_pane_t1_ParamLimits

0x976c,	// (0x000550e0) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x976c,	// (0x000550e0) aid_tch_indicator_popup_pane_cp2

0x977f,	// (0x000550f3) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x977f,	// (0x000550f3) aid_tch_query_popup_data_pane_cp2

0x2630,	// (0x0004dfa4) aid_tch_query_popup_pane_ParamLimits

0x2630,	// (0x0004dfa4) aid_tch_query_popup_pane

0x2630,	// (0x0004dfa4) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2630,	// (0x0004dfa4) aid_tch_query_popup_data_pane_cp1

0x9e84,	// (0x000557f8) cell_fshwr2_syb_bg_pane_ParamLimits

0xbe5d,	// (0x000577d1) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbe70,	// (0x000577e4) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeef2,	// (0x0005a866) popup_fep_vkb_icf_pane_ParamLimits

0xbc56,	// (0x000575ca) bg_popup_fep_char_preview_window_g10

0x6ed0,	// (0x00052844) cell_ai5_widget_pane_g11_ParamLimits

0x6ed0,	// (0x00052844) cell_ai5_widget_pane_g11

0x6edc,	// (0x00052850) cell_ai5_widget_pane_g12_ParamLimits

0x6edc,	// (0x00052850) cell_ai5_widget_pane_g12

0x6ee8,	// (0x0005285c) cell_ai5_widget_pane_g13_ParamLimits

0x6ee8,	// (0x0005285c) cell_ai5_widget_pane_g13

0x7017,	// (0x0005298b) cell_ai5_widget_pane_t11_ParamLimits

0x7017,	// (0x0005298b) cell_ai5_widget_pane_t11

0x7029,	// (0x0005299d) cell_ai5_widget_pane_t12_ParamLimits

0x7029,	// (0x0005299d) cell_ai5_widget_pane_t12

0x1e46,	// (0x0004d7ba) cell_ituss_key_pane_g4_ParamLimits

0x1e46,	// (0x0004d7ba) cell_ituss_key_pane_g4

0x1e62,	// (0x0004d7d6) cell_ituss_key_pane_g5_ParamLimits

0x1e62,	// (0x0004d7d6) cell_ituss_key_pane_g5

0x1e7e,	// (0x0004d7f2) cell_ituss_key_pane_g6_ParamLimits

0x1e7e,	// (0x0004d7f2) cell_ituss_key_pane_g6

0x21a1,	// (0x0004db15) bg_icf_pane_g1

0xeff7,	// (0x0005a96b) bg_icf_pane_g2

0xf001,	// (0x0005a975) bg_icf_pane_g3

0xf009,	// (0x0005a97d) bg_icf_pane_g4

0xf013,	// (0x0005a987) bg_icf_pane_g5

0xf01d,	// (0x0005a991) bg_icf_pane_g6

0xf027,	// (0x0005a99b) bg_icf_pane_g7

0xf02f,	// (0x0005a9a3) bg_icf_pane_g8

0xf039,	// (0x0005a9ad) bg_icf_pane_g9

0x0008,

0xfee9,	// (0x0005b85d) bg_icf_pane_g

0x7910,	// (0x00053284) popup_hyb_candi_window_ParamLimits

0x7910,	// (0x00053284) popup_hyb_candi_window

0x222d,	// (0x0004dba1) bg_popup_sub_pane_cp01_ParamLimits

0x222d,	// (0x0004dba1) bg_popup_sub_pane_cp01

0x7bb4,	// (0x00053528) entry_hyb_candi_pane_ParamLimits

0x7bb4,	// (0x00053528) entry_hyb_candi_pane

0x7bc3,	// (0x00053537) grid_hyb_candi_pane_ParamLimits

0x7bc3,	// (0x00053537) grid_hyb_candi_pane

0x7bd8,	// (0x0005354c) grid_hyb_phrase_pane_ParamLimits

0x7bd8,	// (0x0005354c) grid_hyb_phrase_pane

0x7be7,	// (0x0005355b) cell_hyb_candi_pane_ParamLimits

0x7be7,	// (0x0005355b) cell_hyb_candi_pane

0x7c0a,	// (0x0005357e) cell_hyb_candi_scroll_pane

0xc04a,	// (0x000579be) cell_hyb_candi_pane_g1

0x7c13,	// (0x00053587) cell_hyb_candi_pane_t1

0x7c21,	// (0x00053595) cell_hyb_phrase_pane

0xc04a,	// (0x000579be) cell_hyb_phrase_pane_g1

0x7c2a,	// (0x0005359e) cell_hyb_phrase_pane_t1

0x7c38,	// (0x000535ac) entry_hyb_candi_pane_t1

0xc4ac,	// (0x00057e20) input_focus_pane_cp06

0x7c46,	// (0x000535ba) cell_hyb_candi_scroll_pane_g1

0x7c4e,	// (0x000535c2) cell_hyb_candi_scroll_pane_g1_aid

0x7c56,	// (0x000535ca) cell_hyb_candi_scroll_pane_g2

0x7c5e,	// (0x000535d2) cell_hyb_candi_scroll_pane_g2_aid

0x7c66,	// (0x000535da) cell_hyb_candi_scroll_pane_g3

0x7c6e,	// (0x000535e2) cell_hyb_candi_scroll_pane_g4

0xe448,	// (0x00059dbc) ai5_page_g1

0x1f7e,	// (0x0004d8f2) cell_ituss_key_t6_ParamLimits

0x1f7e,	// (0x0004d8f2) cell_ituss_key_t6

0xbf1f,	// (0x00057893) icf_edit_indi_pane_cp02_ParamLimits

0xbf1f,	// (0x00057893) icf_edit_indi_pane_cp02

0x1d9b,	// (0x0004d70f) icf_edit_indi_pane_cp03_ParamLimits

0x1d9b,	// (0x0004d70f) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large

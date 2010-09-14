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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00020d7b };

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
0xbdeb,	// (0x0002cb66) Screen

0xbdf7,	// (0x0002cb72) application_window_ParamLimits

0xbdf7,	// (0x0002cb72) application_window

0xea64,	// (0x0002f7df) screen_g1

0xbe2f,	// (0x0002cbaa) area_bottom_pane_ParamLimits

0xbe2f,	// (0x0002cbaa) area_bottom_pane

0x0dbb,	// (0x00021b36) area_top_pane_ParamLimits

0x0dbb,	// (0x00021b36) area_top_pane

0x0e4f,	// (0x00021bca) main_pane_ParamLimits

0x0e4f,	// (0x00021bca) main_pane

0x3180,	// (0x00023efb) misc_graphics

0xd6b0,	// (0x0002e42b) battery_pane_ParamLimits

0xd6b0,	// (0x0002e42b) battery_pane

0x587c,	// (0x000265f7) bg_status_flat_pane_g8

0x5884,	// (0x000265ff) bg_status_flat_pane_g9

0x4c56,	// (0x000259d1) context_pane_ParamLimits

0x4c56,	// (0x000259d1) context_pane

0xd81b,	// (0x0002e596) navi_pane_ParamLimits

0xd81b,	// (0x0002e596) navi_pane

0xd899,	// (0x0002e614) signal_pane_ParamLimits

0xd899,	// (0x0002e614) signal_pane

0x0008,

0xf84f,	// (0x000305ca) bg_status_flat_pane_g

0xd929,	// (0x0002e6a4) status_pane_g1_ParamLimits

0xd929,	// (0x0002e6a4) status_pane_g1

0xd93f,	// (0x0002e6ba) status_pane_g2_ParamLimits

0xd93f,	// (0x0002e6ba) status_pane_g2

0x4e7d,	// (0x00025bf8) status_pane_g3_ParamLimits

0x4e7d,	// (0x00025bf8) status_pane_g3

0x0004,

0xf77b,	// (0x000304f6) status_pane_g_ParamLimits

0xf77b,	// (0x000304f6) status_pane_g

0xd94b,	// (0x0002e6c6) title_pane_ParamLimits

0xd94b,	// (0x0002e6c6) title_pane

0xd9ae,	// (0x0002e729) uni_indicator_pane_ParamLimits

0xd9ae,	// (0x0002e729) uni_indicator_pane

0x4abe,	// (0x00025839) bg_list_pane_ParamLimits

0x4abe,	// (0x00025839) bg_list_pane

0xbb4b,	// (0x0002c8c6) find_pane

0x5088,	// (0x00025e03) listscroll_app_pane_ParamLimits

0x5088,	// (0x00025e03) listscroll_app_pane

0x4aea,	// (0x00025865) listscroll_form_pane

0xbb53,	// (0x0002c8ce) listscroll_gen_pane_ParamLimits

0xbb53,	// (0x0002c8ce) listscroll_gen_pane

0x1728,	// (0x000224a3) listscroll_set_pane

0x63fd,	// (0x00027178) main_idle_act_pane

0x47ba,	// (0x00025535) main_idle_trad_pane

0x47ba,	// (0x00025535) main_list_empty_pane

0x4ade,	// (0x00025859) main_midp_pane

0x4b04,	// (0x0002587f) main_pane_g1_ParamLimits

0x4b04,	// (0x0002587f) main_pane_g1

0xc77d,	// (0x0002d4f8) popup_ai_message_window_ParamLimits

0xc77d,	// (0x0002d4f8) popup_ai_message_window

0xc80e,	// (0x0002d589) popup_fep_china_uni_window_ParamLimits

0xc80e,	// (0x0002d589) popup_fep_china_uni_window

0x1832,	// (0x000225ad) popup_fep_japan_candidate_window_ParamLimits

0x1832,	// (0x000225ad) popup_fep_japan_candidate_window

0x1852,	// (0x000225cd) popup_fep_japan_predictive_window_ParamLimits

0x1852,	// (0x000225cd) popup_fep_japan_predictive_window

0xc86a,	// (0x0002d5e5) popup_find_window

0xc887,	// (0x0002d602) popup_grid_graphic_window_ParamLimits

0xc887,	// (0x0002d602) popup_grid_graphic_window

0x18bb,	// (0x00022636) popup_large_graphic_colour_window

0xc92b,	// (0x0002d6a6) popup_menu_window_ParamLimits

0xc92b,	// (0x0002d6a6) popup_menu_window

0xcafd,	// (0x0002d878) popup_note_image_window

0xcac3,	// (0x0002d83e) popup_note_wait_window_ParamLimits

0xcac3,	// (0x0002d83e) popup_note_wait_window

0xcb15,	// (0x0002d890) popup_note_window_ParamLimits

0xcb15,	// (0x0002d890) popup_note_window

0xcbbb,	// (0x0002d936) popup_query_code_window_ParamLimits

0xcbbb,	// (0x0002d936) popup_query_code_window

0x1b03,	// (0x0002287e) popup_query_data_code_window_ParamLimits

0x1b03,	// (0x0002287e) popup_query_data_code_window

0xcbf5,	// (0x0002d970) popup_query_data_window_ParamLimits

0xcbf5,	// (0x0002d970) popup_query_data_window

0xcc77,	// (0x0002d9f2) popup_query_sat_info_window_ParamLimits

0xcc77,	// (0x0002d9f2) popup_query_sat_info_window

0xcd0e,	// (0x0002da89) popup_snote_single_graphic_window_ParamLimits

0xcd0e,	// (0x0002da89) popup_snote_single_graphic_window

0xcd0e,	// (0x0002da89) popup_snote_single_text_window_ParamLimits

0xcd0e,	// (0x0002da89) popup_snote_single_text_window

0x1b8a,	// (0x00022905) popup_sub_window_general

0x1cba,	// (0x00022a35) popup_window_general_ParamLimits

0x1cba,	// (0x00022a35) popup_window_general

0x4b12,	// (0x0002588d) power_save_pane

0xc5fe,	// (0x0002d379) control_pane_g1_ParamLimits

0xc5fe,	// (0x0002d379) control_pane_g1

0xc627,	// (0x0002d3a2) control_pane_g2_ParamLimits

0xc627,	// (0x0002d3a2) control_pane_g2

0x4a81,	// (0x000257fc) control_pane_g3_ParamLimits

0x4a81,	// (0x000257fc) control_pane_g3

0x0007,

0xf763,	// (0x000304de) control_pane_g_ParamLimits

0xf763,	// (0x000304de) control_pane_g

0xc668,	// (0x0002d3e3) control_pane_t1_ParamLimits

0xc668,	// (0x0002d3e3) control_pane_t1

0xc6d0,	// (0x0002d44b) control_pane_t2_ParamLimits

0xc6d0,	// (0x0002d44b) control_pane_t2

0x0002,

0xf774,	// (0x000304ef) control_pane_t_ParamLimits

0xf774,	// (0x000304ef) control_pane_t

0xd55d,	// (0x0002e2d8) navi_navi_volume_pane_cp1

0xd565,	// (0x0002e2e0) status_small_icon_pane

0x49b6,	// (0x00025731) status_small_pane_g1_ParamLimits

0x49b6,	// (0x00025731) status_small_pane_g1

0xd56d,	// (0x0002e2e8) status_small_pane_g2_ParamLimits

0xd56d,	// (0x0002e2e8) status_small_pane_g2

0xd579,	// (0x0002e2f4) status_small_pane_g3_ParamLimits

0xd579,	// (0x0002e2f4) status_small_pane_g3

0xd585,	// (0x0002e300) status_small_pane_g4_ParamLimits

0xd585,	// (0x0002e300) status_small_pane_g4

0xd591,	// (0x0002e30c) status_small_pane_g5_ParamLimits

0xd591,	// (0x0002e30c) status_small_pane_g5

0xd59f,	// (0x0002e31a) status_small_pane_g6_ParamLimits

0xd59f,	// (0x0002e31a) status_small_pane_g6

0x0007,

0xf752,	// (0x000304cd) status_small_pane_g_ParamLimits

0xf752,	// (0x000304cd) status_small_pane_g

0xd5ce,	// (0x0002e349) status_small_pane_t1

0xd5f0,	// (0x0002e36b) status_small_wait_pane_ParamLimits

0xd5f0,	// (0x0002e36b) status_small_wait_pane

0xc50f,	// (0x0002d28a) aid_levels_signal_ParamLimits

0xc50f,	// (0x0002d28a) aid_levels_signal

0xc527,	// (0x0002d2a2) signal_pane_g1_ParamLimits

0xc527,	// (0x0002d2a2) signal_pane_g1

0xc542,	// (0x0002d2bd) signal_pane_g2_ParamLimits

0xc542,	// (0x0002d2bd) signal_pane_g2

0x0003,

0xf6e3,	// (0x0003045e) signal_pane_g_ParamLimits

0xf6e3,	// (0x0003045e) signal_pane_g

0x4282,	// (0x00024ffd) context_pane_g1

0xc00d,	// (0x0002cd88) title_pane_g1

0xc044,	// (0x0002cdbf) title_pane_t1

0x3228,	// (0x00023fa3) title_pane_t2

0x324e,	// (0x00023fc9) title_pane_t3

0x0002,

0xf532,	// (0x000302ad) title_pane_t

0xd9d6,	// (0x0002e751) aid_levels_battery_ParamLimits

0xd9d6,	// (0x0002e751) aid_levels_battery

0xd9f2,	// (0x0002e76d) battery_pane_g1_ParamLimits

0xd9f2,	// (0x0002e76d) battery_pane_g1

0xda0f,	// (0x0002e78a) battery_pane_g2_ParamLimits

0xda0f,	// (0x0002e78a) battery_pane_g2

0x0001,

0xf786,	// (0x00030501) battery_pane_g_ParamLimits

0xf786,	// (0x00030501) battery_pane_g

0xdbd0,	// (0x0002e94b) uni_indicator_pane_g1

0xdbe6,	// (0x0002e961) uni_indicator_pane_g2

0xdbfc,	// (0x0002e977) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x00030672) uni_indicator_pane_g

0x4623,	// (0x0002539e) navi_icon_pane_ParamLimits

0x4623,	// (0x0002539e) navi_icon_pane

0x4561,	// (0x000252dc) navi_midp_pane

0x463f,	// (0x000253ba) navi_navi_pane

0x4649,	// (0x000253c4) navi_text_pane_ParamLimits

0x4649,	// (0x000253c4) navi_text_pane

0xea64,	// (0x0002f7df) status_small_wait_pane_g1

0x36a3,	// (0x0002441e) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x0003066d) status_small_wait_pane_g

0x5ed7,	// (0x00026c52) navi_navi_icon_text_pane

0x5edf,	// (0x00026c5a) navi_navi_pane_g1_ParamLimits

0x5edf,	// (0x00026c5a) navi_navi_pane_g1

0x5ef1,	// (0x00026c6c) navi_navi_pane_g2_ParamLimits

0x5ef1,	// (0x00026c6c) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x0003063b) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x0003063b) navi_navi_pane_g

0x5f03,	// (0x00026c7e) navi_navi_tabs_pane

0x5f0c,	// (0x00026c87) navi_navi_text_pane

0x5ed7,	// (0x00026c52) navi_navi_volume_pane

0x5eb3,	// (0x00026c2e) navi_text_pane_t1

0x5ea7,	// (0x00026c22) navi_icon_pane_g1

0x5dfa,	// (0x00026b75) navi_navi_text_pane_t1

0x1f5a,	// (0x00022cd5) navi_navi_volume_pane_g1

0x1f62,	// (0x00022cdd) volume_small_pane

0x5d60,	// (0x00026adb) navi_navi_icon_text_pane_g1

0x5d68,	// (0x00026ae3) navi_navi_icon_text_pane_t1

0x463f,	// (0x000253ba) navi_tabs_2_long_pane

0x463f,	// (0x000253ba) navi_tabs_2_pane

0x463f,	// (0x000253ba) navi_tabs_3_long_pane

0x463f,	// (0x000253ba) navi_tabs_3_pane

0x463f,	// (0x000253ba) navi_tabs_4_pane

0x1f3a,	// (0x00022cb5) tabs_2_active_pane_ParamLimits

0x1f3a,	// (0x00022cb5) tabs_2_active_pane

0x1f4a,	// (0x00022cc5) tabs_2_passive_pane_ParamLimits

0x1f4a,	// (0x00022cc5) tabs_2_passive_pane

0x1f08,	// (0x00022c83) tabs_3_active_pane_ParamLimits

0x1f08,	// (0x00022c83) tabs_3_active_pane

0x1f18,	// (0x00022c93) tabs_3_passive_pane_ParamLimits

0x1f18,	// (0x00022c93) tabs_3_passive_pane

0x1f29,	// (0x00022ca4) tabs_3_passive_pane_cp_ParamLimits

0x1f29,	// (0x00022ca4) tabs_3_passive_pane_cp

0x1ec4,	// (0x00022c3f) tabs_4_active_pane_ParamLimits

0x1ec4,	// (0x00022c3f) tabs_4_active_pane

0x1ed5,	// (0x00022c50) tabs_4_passive_pane_ParamLimits

0x1ed5,	// (0x00022c50) tabs_4_passive_pane

0x1ee6,	// (0x00022c61) tabs_4_passive_pane_cp_ParamLimits

0x1ee6,	// (0x00022c61) tabs_4_passive_pane_cp

0x1ef7,	// (0x00022c72) tabs_4_passive_pane_cp2_ParamLimits

0x1ef7,	// (0x00022c72) tabs_4_passive_pane_cp2

0x1ea0,	// (0x00022c1b) tabs_2_long_active_pane_ParamLimits

0x1ea0,	// (0x00022c1b) tabs_2_long_active_pane

0x1eb2,	// (0x00022c2d) tabs_2_long_passive_pane_ParamLimits

0x1eb2,	// (0x00022c2d) tabs_2_long_passive_pane

0x1e61,	// (0x00022bdc) tabs_3_long_active_pane_ParamLimits

0x1e61,	// (0x00022bdc) tabs_3_long_active_pane

0x1e74,	// (0x00022bef) tabs_3_long_passive_pane_ParamLimits

0x1e74,	// (0x00022bef) tabs_3_long_passive_pane

0x1e8d,	// (0x00022c08) tabs_3_long_passive_pane_cp_ParamLimits

0x1e8d,	// (0x00022c08) tabs_3_long_passive_pane_cp

0x1e07,	// (0x00022b82) volume_small_pane_g1

0x1e10,	// (0x00022b8b) volume_small_pane_g2

0x1e19,	// (0x00022b94) volume_small_pane_g3

0x1e22,	// (0x00022b9d) volume_small_pane_g4

0x1e2b,	// (0x00022ba6) volume_small_pane_g5

0x1e34,	// (0x00022baf) volume_small_pane_g6

0x1e3d,	// (0x00022bb8) volume_small_pane_g7

0x1e46,	// (0x00022bc1) volume_small_pane_g8

0x1e4f,	// (0x00022bca) volume_small_pane_g9

0x1e58,	// (0x00022bd3) volume_small_pane_g10

0x0009,

0xf88c,	// (0x00030607) volume_small_pane_g

0x34db,	// (0x00024256) bg_active_tab_pane_cp2_ParamLimits

0x34db,	// (0x00024256) bg_active_tab_pane_cp2

0x326e,	// (0x00023fe9) tabs_3_active_pane_g1

0xc0d0,	// (0x0002ce4b) tabs_3_active_pane_t1

0x34db,	// (0x00024256) bg_passive_tab_pane_cp2_ParamLimits

0x34db,	// (0x00024256) bg_passive_tab_pane_cp2

0x326e,	// (0x00023fe9) tabs_3_passive_pane_g1

0xc0d0,	// (0x0002ce4b) tabs_3_passive_pane_t1

0x34db,	// (0x00024256) bg_active_tab_pane_cp3_ParamLimits

0x34db,	// (0x00024256) bg_active_tab_pane_cp3

0x3288,	// (0x00024003) tabs_4_active_pane_g1

0xc0e2,	// (0x0002ce5d) tabs_4_active_pane_t1

0x34db,	// (0x00024256) bg_passive_tab_pane_cp3_ParamLimits

0x34db,	// (0x00024256) bg_passive_tab_pane_cp3

0x3288,	// (0x00024003) tabs_4_1_passive_pane_g1

0xc0e2,	// (0x0002ce5d) tabs_4_1_passive_pane_t1

0x4ade,	// (0x00025859) list_highlight_pane_cp2

0xdc82,	// (0x0002e9fd) list_set_pane_ParamLimits

0xdc82,	// (0x0002e9fd) list_set_pane

0xdd1c,	// (0x0002ea97) main_pane_set_t1_ParamLimits

0xdd1c,	// (0x0002ea97) main_pane_set_t1

0xdd3c,	// (0x0002eab7) main_pane_set_t2_ParamLimits

0xdd3c,	// (0x0002eab7) main_pane_set_t2

0xdd50,	// (0x0002eacb) main_pane_set_t3_ParamLimits

0xdd50,	// (0x0002eacb) main_pane_set_t3

0xdd62,	// (0x0002eadd) main_pane_set_t4_ParamLimits

0xdd62,	// (0x0002eadd) main_pane_set_t4

0x0003,

0xf95c,	// (0x000306d7) main_pane_set_t_ParamLimits

0xf95c,	// (0x000306d7) main_pane_set_t

0xdd74,	// (0x0002eaef) setting_code_pane

0xdd7e,	// (0x0002eaf9) setting_slider_graphic_pane

0xdd7e,	// (0x0002eaf9) setting_slider_pane

0xdd7e,	// (0x0002eaf9) setting_text_pane

0xdd7e,	// (0x0002eaf9) setting_volume_pane

0x109e,	// (0x00021e19) volume_set_pane

0x3260,	// (0x00023fdb) bg_set_opt_pane_cp

0x10a6,	// (0x00021e21) setting_slider_pane_t1

0x10bf,	// (0x00021e3a) setting_slider_pane_t2

0x10d9,	// (0x00021e54) setting_slider_pane_t3

0x0002,

0xf539,	// (0x000302b4) setting_slider_pane_t

0x10f1,	// (0x00021e6c) slider_set_pane

0x3180,	// (0x00023efb) bg_set_opt_pane_cp2

0x32a2,	// (0x0002401d) setting_slider_graphic_pane_g1

0x1107,	// (0x00021e82) setting_slider_graphic_pane_t1

0x1117,	// (0x00021e92) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x000302bb) setting_slider_graphic_pane_t

0x1127,	// (0x00021ea2) slider_set_pane_cp

0x3180,	// (0x00023efb) input_focus_pane_cp1

0x63e4,	// (0x0002715f) list_set_text_pane

0xea64,	// (0x0002f7df) setting_text_pane_g1

0x3180,	// (0x00023efb) input_focus_pane_cp2

0xea64,	// (0x0002f7df) setting_code_pane_g1

0x32ab,	// (0x00024026) setting_code_pane_t1

0xf49f,	// (0x0003021a) set_text_pane_t1_ParamLimits

0xf49f,	// (0x0003021a) set_text_pane_t1

0x3b45,	// (0x000248c0) set_opt_bg_pane_g1

0x3b4d,	// (0x000248c8) set_opt_bg_pane_g2

0x63be,	// (0x00027139) set_opt_bg_pane_g3

0x3b5d,	// (0x000248d8) set_opt_bg_pane_g4

0x3b65,	// (0x000248e0) set_opt_bg_pane_g5

0x3b6d,	// (0x000248e8) set_opt_bg_pane_g6

0x63c8,	// (0x00027143) set_opt_bg_pane_g7

0x63d0,	// (0x0002714b) set_opt_bg_pane_g8

0x63da,	// (0x00027155) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x000306c4) set_opt_bg_pane_g

0x63b1,	// (0x0002712c) slider_set_pane_g1

0x1fcf,	// (0x00022d4a) slider_set_pane_g2

0x0006,

0xf93a,	// (0x000306b5) slider_set_pane_g

0x1f6b,	// (0x00022ce6) volume_set_pane_g1

0x1f73,	// (0x00022cee) volume_set_pane_g2

0x1f7b,	// (0x00022cf6) volume_set_pane_g3

0x1f83,	// (0x00022cfe) volume_set_pane_g4

0x1f8b,	// (0x00022d06) volume_set_pane_g5

0x1f93,	// (0x00022d0e) volume_set_pane_g6

0x1f9b,	// (0x00022d16) volume_set_pane_g7

0x1fa3,	// (0x00022d1e) volume_set_pane_g8

0x1fab,	// (0x00022d26) volume_set_pane_g9

0x1fb3,	// (0x00022d2e) volume_set_pane_g10

0x0009,

0xf912,	// (0x0003068d) volume_set_pane_g

0xc0f4,	// (0x0002ce6f) indicator_pane_ParamLimits

0xc0f4,	// (0x0002ce6f) indicator_pane

0xc11c,	// (0x0002ce97) main_idle_pane_g2_ParamLimits

0xc11c,	// (0x0002ce97) main_idle_pane_g2

0xc154,	// (0x0002cecf) main_pane_idle_g1_ParamLimits

0xc154,	// (0x0002cecf) main_pane_idle_g1

0x32fa,	// (0x00024075) popup_clock_digital_analogue_window_ParamLimits

0x32fa,	// (0x00024075) popup_clock_digital_analogue_window

0xc17b,	// (0x0002cef6) soft_indicator_pane_ParamLimits

0xc17b,	// (0x0002cef6) soft_indicator_pane

0xc195,	// (0x0002cf10) wallpaper_pane_ParamLimits

0xc195,	// (0x0002cf10) wallpaper_pane

0xea64,	// (0x0002f7df) wallpaper_pane_g1

0xc1a7,	// (0x0002cf22) indicator_pane_g1_ParamLimits

0xc1a7,	// (0x0002cf22) indicator_pane_g1

0x67ff,	// (0x0002757a) navi_navi_icon_text_pane_srt_g1

0x334c,	// (0x000240c7) soft_indicator_pane_t1

0x3366,	// (0x000240e1) aid_ps_area_pane

0xc1bd,	// (0x0002cf38) aid_ps_clock_pane

0x3385,	// (0x00024100) aid_ps_indicator_pane

0x3391,	// (0x0002410c) indicator_ps_pane_ParamLimits

0x3391,	// (0x0002410c) indicator_ps_pane

0x33a0,	// (0x0002411b) power_save_pane_g1_ParamLimits

0x33a0,	// (0x0002411b) power_save_pane_g1

0x33ac,	// (0x00024127) power_save_pane_g2_ParamLimits

0x33ac,	// (0x00024127) power_save_pane_g2

0x0caf,	// (0x00021a2a) aid_navinavi_width_pane

0x3366,	// (0x000240e1) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x000302c0) power_save_pane_g_ParamLimits

0xf545,	// (0x000302c0) power_save_pane_g

0x33ba,	// (0x00024135) power_save_pane_t1_ParamLimits

0x33ba,	// (0x00024135) power_save_pane_t1

0xc1bd,	// (0x0002cf38) aid_ps_clock_pane_ParamLimits

0x3385,	// (0x00024100) aid_ps_indicator_pane_ParamLimits

0x33cc,	// (0x00024147) power_save_pane_t4_ParamLimits

0x33cc,	// (0x00024147) power_save_pane_t4

0x0001,

0xf54a,	// (0x000302c5) power_save_pane_t_ParamLimits

0xf54a,	// (0x000302c5) power_save_pane_t

0x33f6,	// (0x00024171) power_save_t3_ParamLimits

0x33f6,	// (0x00024171) power_save_t3

0x33e1,	// (0x0002415c) power_save_t2_ParamLimits

0x33e1,	// (0x0002415c) power_save_t2

0x340b,	// (0x00024186) indicator_ps_pane_g1

0xc1cb,	// (0x0002cf46) ai_gene_pane_ParamLimits

0xc1cb,	// (0x0002cf46) ai_gene_pane

0xc1e2,	// (0x0002cf5d) ai_links_pane_ParamLimits

0xc1e2,	// (0x0002cf5d) ai_links_pane

0xc1fa,	// (0x0002cf75) indicator_pane_cp1_ParamLimits

0xc1fa,	// (0x0002cf75) indicator_pane_cp1

0xc209,	// (0x0002cf84) main_pane_idle_g1_cp_ParamLimits

0xc209,	// (0x0002cf84) main_pane_idle_g1_cp

0x3444,	// (0x000241bf) popup_ai_links_title_window

0xc221,	// (0x0002cf9c) soft_indicator_pane_cp1_ParamLimits

0xc221,	// (0x0002cf9c) soft_indicator_pane_cp1

0x61a0,	// (0x00026f1b) ai_links_pane_g1

0x61a9,	// (0x00026f24) grid_ai_links_pane

0xdbc7,	// (0x0002e942) ai_gene_pane_1

0x618e,	// (0x00026f09) ai_gene_pane_2

0x6197,	// (0x00026f12) list_highlight_pane_cp4

0xdba3,	// (0x0002e91e) cell_ai_link_pane_ParamLimits

0xdba3,	// (0x0002e91e) cell_ai_link_pane

0x615f,	// (0x00026eda) cell_ai_link_pane_g1

0x36a3,	// (0x0002441e) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x00030668) cell_ai_link_pane_g

0x3180,	// (0x00023efb) grid_highlight_cp2

0x3180,	// (0x00023efb) bg_popup_sub_pane_cp1

0x3467,	// (0x000241e2) popup_ai_links_title_window_t1

0x60ad,	// (0x00026e28) ai_gene_pane_1_g1_ParamLimits

0x60ad,	// (0x00026e28) ai_gene_pane_1_g1

0x60b9,	// (0x00026e34) ai_gene_pane_1_g2_ParamLimits

0x60b9,	// (0x00026e34) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x0003065e) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x0003065e) ai_gene_pane_1_g

0x60c6,	// (0x00026e41) ai_gene_pane_1_t1_ParamLimits

0x60c6,	// (0x00026e41) ai_gene_pane_1_t1

0x60fa,	// (0x00026e75) grid_ai_soft_ind_pane

0x6098,	// (0x00026e13) ai_gene_pane_2_t1_ParamLimits

0x6098,	// (0x00026e13) ai_gene_pane_2_t1

0xc235,	// (0x0002cfb0) main_pane_empty_t1_ParamLimits

0xc235,	// (0x0002cfb0) main_pane_empty_t1

0xc24d,	// (0x0002cfc8) main_pane_empty_t2_ParamLimits

0xc24d,	// (0x0002cfc8) main_pane_empty_t2

0xc262,	// (0x0002cfdd) main_pane_empty_t3_ParamLimits

0xc262,	// (0x0002cfdd) main_pane_empty_t3

0xc274,	// (0x0002cfef) main_pane_empty_t4_ParamLimits

0xc274,	// (0x0002cfef) main_pane_empty_t4

0xc286,	// (0x0002d001) main_pane_empty_t5_ParamLimits

0xc286,	// (0x0002d001) main_pane_empty_t5

0x0004,

0xf54f,	// (0x000302ca) main_pane_empty_t_ParamLimits

0xf54f,	// (0x000302ca) main_pane_empty_t

0x3c0c,	// (0x00024987) bg_popup_window_pane_ParamLimits

0x3c0c,	// (0x00024987) bg_popup_window_pane

0x5e08,	// (0x00026b83) find_popup_pane_cp2_ParamLimits

0x5e08,	// (0x00026b83) find_popup_pane_cp2

0x5e14,	// (0x00026b8f) heading_pane_ParamLimits

0x5e14,	// (0x00026b8f) heading_pane

0x3180,	// (0x00023efb) bg_popup_sub_pane

0xdb24,	// (0x0002e89f) bg_popup_window_pane_g1_ParamLimits

0xdb24,	// (0x0002e89f) bg_popup_window_pane_g1

0xdb33,	// (0x0002e8ae) bg_popup_window_pane_g2_ParamLimits

0xdb33,	// (0x0002e8ae) bg_popup_window_pane_g2

0xdb3f,	// (0x0002e8ba) bg_popup_window_pane_g3_ParamLimits

0xdb3f,	// (0x0002e8ba) bg_popup_window_pane_g3

0xdb4b,	// (0x0002e8c6) bg_popup_window_pane_g4_ParamLimits

0xdb4b,	// (0x0002e8c6) bg_popup_window_pane_g4

0xdb5a,	// (0x0002e8d5) bg_popup_window_pane_g5_ParamLimits

0xdb5a,	// (0x0002e8d5) bg_popup_window_pane_g5

0xdb6a,	// (0x0002e8e5) bg_popup_window_pane_g6_ParamLimits

0xdb6a,	// (0x0002e8e5) bg_popup_window_pane_g6

0xdb76,	// (0x0002e8f1) bg_popup_window_pane_g7_ParamLimits

0xdb76,	// (0x0002e8f1) bg_popup_window_pane_g7

0xdb85,	// (0x0002e900) bg_popup_window_pane_g8_ParamLimits

0xdb85,	// (0x0002e900) bg_popup_window_pane_g8

0xdb94,	// (0x0002e90f) bg_popup_window_pane_g9_ParamLimits

0xdb94,	// (0x0002e90f) bg_popup_window_pane_g9

0x5dee,	// (0x00026b69) bg_popup_window_pane_g10_ParamLimits

0x5dee,	// (0x00026b69) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x00030626) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x00030626) bg_popup_window_pane_g

0x5d17,	// (0x00026a92) bg_popup_heading_pane_ParamLimits

0x5d17,	// (0x00026a92) bg_popup_heading_pane

0x2057,	// (0x00022dd2) tabs_4_passive_pane_cp_srt_ParamLimits

0x2057,	// (0x00022dd2) tabs_4_passive_pane_cp_srt

0x2069,	// (0x00022de4) tabs_4_passive_pane_srt_ParamLimits

0x5d2b,	// (0x00026aa6) heading_pane_g2

0x2069,	// (0x00022de4) tabs_4_passive_pane_srt

0x5088,	// (0x00025e03) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5088,	// (0x00025e03) bg_passive_tab_pane_cp3_srt

0x5d33,	// (0x00026aae) heading_pane_t1_ParamLimits

0x5d33,	// (0x00026aae) heading_pane_t1

0x5d4a,	// (0x00026ac5) heading_pane_t2_ParamLimits

0x5d4a,	// (0x00026ac5) heading_pane_t2

0x0001,

0xf8a6,	// (0x00030621) heading_pane_t_ParamLimits

0xf8a6,	// (0x00030621) heading_pane_t

0x5844,	// (0x000265bf) bg_popup_heading_pane_g1

0x58f3,	// (0x0002666e) bg_popup_heading_pane_g2

0x58fd,	// (0x00026678) bg_popup_heading_pane_g3

0x5907,	// (0x00026682) bg_popup_heading_pane_g4

0x5911,	// (0x0002668c) bg_popup_heading_pane_g5

0x591b,	// (0x00026696) bg_popup_heading_pane_g6

0x5923,	// (0x0002669e) bg_popup_heading_pane_g7

0x592b,	// (0x000266a6) bg_popup_heading_pane_g8

0x5935,	// (0x000266b0) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x000305dd) bg_popup_heading_pane_g

0x5008,	// (0x00025d83) bg_popup_sub_pane_g1

0x5010,	// (0x00025d8b) bg_popup_sub_pane_g2

0x5018,	// (0x00025d93) bg_popup_sub_pane_g3

0x5020,	// (0x00025d9b) bg_popup_sub_pane_g4

0x5028,	// (0x00025da3) bg_popup_sub_pane_g5

0x5030,	// (0x00025dab) bg_popup_sub_pane_g6

0x5038,	// (0x00025db3) bg_popup_sub_pane_g7

0x5040,	// (0x00025dbb) bg_popup_sub_pane_g8

0x5048,	// (0x00025dc3) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x000305b7) bg_popup_sub_pane_g

0x34db,	// (0x00024256) bg_popup_window_pane_cp5_ParamLimits

0x34db,	// (0x00024256) bg_popup_window_pane_cp5

0x34f7,	// (0x00024272) popup_note_window_g1_ParamLimits

0x34f7,	// (0x00024272) popup_note_window_g1

0x3503,	// (0x0002427e) popup_note_window_t1_ParamLimits

0x3503,	// (0x0002427e) popup_note_window_t1

0x3519,	// (0x00024294) popup_note_window_t2_ParamLimits

0x3519,	// (0x00024294) popup_note_window_t2

0x352f,	// (0x000242aa) popup_note_window_t3_ParamLimits

0x352f,	// (0x000242aa) popup_note_window_t3

0x3545,	// (0x000242c0) popup_note_window_t4_ParamLimits

0x3545,	// (0x000242c0) popup_note_window_t4

0x356d,	// (0x000242e8) popup_note_window_t5_ParamLimits

0x356d,	// (0x000242e8) popup_note_window_t5

0x0004,

0xf55a,	// (0x000302d5) popup_note_window_t_ParamLimits

0xf55a,	// (0x000302d5) popup_note_window_t

0x35b7,	// (0x00024332) bg_popup_window_pane_cp6_ParamLimits

0x35b7,	// (0x00024332) bg_popup_window_pane_cp6

0x57c0,	// (0x0002653b) popup_note_image_window_g1_ParamLimits

0x57c0,	// (0x0002653b) popup_note_image_window_g1

0x57cc,	// (0x00026547) popup_note_image_window_g2_ParamLimits

0x57cc,	// (0x00026547) popup_note_image_window_g2

0x0001,

0xf830,	// (0x000305ab) popup_note_image_window_g_ParamLimits

0xf830,	// (0x000305ab) popup_note_image_window_g

0x57e5,	// (0x00026560) popup_note_image_window_t1_ParamLimits

0x57e5,	// (0x00026560) popup_note_image_window_t1

0x57fe,	// (0x00026579) popup_note_image_window_t2_ParamLimits

0x57fe,	// (0x00026579) popup_note_image_window_t2

0x5817,	// (0x00026592) popup_note_image_window_t3_ParamLimits

0x5817,	// (0x00026592) popup_note_image_window_t3

0x0002,

0xf835,	// (0x000305b0) popup_note_image_window_t_ParamLimits

0xf835,	// (0x000305b0) popup_note_image_window_t

0x5681,	// (0x000263fc) bg_popup_window_pane_cp7_ParamLimits

0x5681,	// (0x000263fc) bg_popup_window_pane_cp7

0x56b1,	// (0x0002642c) popup_note_wait_window_g1_ParamLimits

0x56b1,	// (0x0002642c) popup_note_wait_window_g1

0x56bd,	// (0x00026438) popup_note_wait_window_g2_ParamLimits

0x56bd,	// (0x00026438) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00030599) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00030599) popup_note_wait_window_g

0x56d5,	// (0x00026450) popup_note_wait_window_t1_ParamLimits

0x56d5,	// (0x00026450) popup_note_wait_window_t1

0x56fc,	// (0x00026477) popup_note_wait_window_t2_ParamLimits

0x56fc,	// (0x00026477) popup_note_wait_window_t2

0x5719,	// (0x00026494) popup_note_wait_window_t3_ParamLimits

0x5719,	// (0x00026494) popup_note_wait_window_t3

0x572c,	// (0x000264a7) popup_note_wait_window_t4_ParamLimits

0x572c,	// (0x000264a7) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x000305a0) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x000305a0) popup_note_wait_window_t

0x5751,	// (0x000264cc) wait_bar_pane_ParamLimits

0x5751,	// (0x000264cc) wait_bar_pane

0x3180,	// (0x00023efb) wait_anim_pane

0x3180,	// (0x00023efb) wait_border_pane

0xea64,	// (0x0002f7df) wait_anim_pane_g1

0xea64,	// (0x0002f7df) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x00030459) wait_anim_pane_g

0x5625,	// (0x000263a0) wait_border_pane_g1

0x5630,	// (0x000263ab) wait_border_pane_g2

0x5639,	// (0x000263b4) wait_border_pane_g3

0x0002,

0xf817,	// (0x00030592) wait_border_pane_g

0x5490,	// (0x0002620b) bg_popup_window_pane_cp16_ParamLimits

0x5490,	// (0x0002620b) bg_popup_window_pane_cp16

0x5590,	// (0x0002630b) indicator_popup_pane_cp4_ParamLimits

0x5590,	// (0x0002630b) indicator_popup_pane_cp4

0x55a4,	// (0x0002631f) popup_query_data_window_t1_ParamLimits

0x55a4,	// (0x0002631f) popup_query_data_window_t1

0x55b6,	// (0x00026331) popup_query_data_window_t2_ParamLimits

0x55b6,	// (0x00026331) popup_query_data_window_t2

0x55cf,	// (0x0002634a) popup_query_data_window_t3_ParamLimits

0x55cf,	// (0x0002634a) popup_query_data_window_t3

0x0002,

0xf810,	// (0x0003058b) popup_query_data_window_t_ParamLimits

0xf810,	// (0x0003058b) popup_query_data_window_t

0x55e9,	// (0x00026364) query_popup_data_pane_ParamLimits

0x55e9,	// (0x00026364) query_popup_data_pane

0x55fd,	// (0x00026378) query_popup_data_pane_cp1_ParamLimits

0x55fd,	// (0x00026378) query_popup_data_pane_cp1

0x5490,	// (0x0002620b) bg_popup_window_pane_cp10_ParamLimits

0x5490,	// (0x0002620b) bg_popup_window_pane_cp10

0x54c2,	// (0x0002623d) indicator_popup_pane_ParamLimits

0x54c2,	// (0x0002623d) indicator_popup_pane

0x54e4,	// (0x0002625f) popup_query_code_window_t1_ParamLimits

0x54e4,	// (0x0002625f) popup_query_code_window_t1

0x54fe,	// (0x00026279) popup_query_code_window_t2_ParamLimits

0x54fe,	// (0x00026279) popup_query_code_window_t2

0x5547,	// (0x000262c2) popup_query_code_window_t3_ParamLimits

0x5547,	// (0x000262c2) popup_query_code_window_t3

0x0002,

0xf809,	// (0x00030584) popup_query_code_window_t_ParamLimits

0xf809,	// (0x00030584) popup_query_code_window_t

0x5576,	// (0x000262f1) query_popup_pane_ParamLimits

0x5576,	// (0x000262f1) query_popup_pane

0x35b7,	// (0x00024332) bg_popup_window_pane_cp15_ParamLimits

0x35b7,	// (0x00024332) bg_popup_window_pane_cp15

0x35d5,	// (0x00024350) indicator_popup_pane_cp1_ParamLimits

0x35d5,	// (0x00024350) indicator_popup_pane_cp1

0x35e8,	// (0x00024363) indicator_popup_pane_cp2_ParamLimits

0x35e8,	// (0x00024363) indicator_popup_pane_cp2

0x35fb,	// (0x00024376) popup_query_data_code_window_g1_ParamLimits

0x35fb,	// (0x00024376) popup_query_data_code_window_g1

0x360e,	// (0x00024389) popup_query_data_code_window_t1_ParamLimits

0x360e,	// (0x00024389) popup_query_data_code_window_t1

0x3620,	// (0x0002439b) popup_query_data_code_window_t2_ParamLimits

0x3620,	// (0x0002439b) popup_query_data_code_window_t2

0x3632,	// (0x000243ad) popup_query_data_code_window_t3_ParamLimits

0x3632,	// (0x000243ad) popup_query_data_code_window_t3

0x3648,	// (0x000243c3) popup_query_data_code_window_t4_ParamLimits

0x3648,	// (0x000243c3) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x000302e0) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x000302e0) popup_query_data_code_window_t

0x1d24,	// (0x00022a9f) list_single_midp_graphic_pane_g3

0x3660,	// (0x000243db) query_popup_data_pane_cp2_ParamLimits

0x3673,	// (0x000243ee) query_popup_pane_cp2_ParamLimits

0x3673,	// (0x000243ee) query_popup_pane_cp2

0x3180,	// (0x00023efb) bg_popup_window_pane_cp11

0x5474,	// (0x000261ef) heading_pane_cp5

0x547c,	// (0x000261f7) listscroll_popup_info_pane

0x3180,	// (0x00023efb) input_focus_pane_cp3

0x3686,	// (0x00024401) query_popup_pane_t1

0x3694,	// (0x0002440f) list_popup_info_pane_ParamLimits

0x3694,	// (0x0002440f) list_popup_info_pane

0x36a3,	// (0x0002441e) listscroll_popup_info_pane_g1

0x36ab,	// (0x00024426) scroll_pane_cp7

0x36b5,	// (0x00024430) popup_info_list_pane_t1_ParamLimits

0x36b5,	// (0x00024430) popup_info_list_pane_t1

0x36cf,	// (0x0002444a) popup_info_list_pane_t2_ParamLimits

0x36cf,	// (0x0002444a) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x000302e9) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x000302e9) popup_info_list_pane_t

0x3180,	// (0x00023efb) bg_popup_window_pane_cp12

0x6819,	// (0x00027594) find_popup_pane

0x3260,	// (0x00023fdb) bg_popup_window_pane_cp3

0x36e9,	// (0x00024464) heading_pane_cp3

0x36f8,	// (0x00024473) listscroll_popup_graphic_pane

0x3180,	// (0x00023efb) bg_popup_window_pane_cp4

0xc2e8,	// (0x0002d063) heading_pane_cp4

0x3762,	// (0x000244dd) listscroll_popup_colour_pane

0xc2f2,	// (0x0002d06d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc2f2,	// (0x0002d06d) cell_large_graphic_colour_none_popup_pane

0xc306,	// (0x0002d081) grid_large_graphic_colour_popup_pane_ParamLimits

0xc306,	// (0x0002d081) grid_large_graphic_colour_popup_pane

0xc32a,	// (0x0002d0a5) listscroll_popup_colour_pane_g1_ParamLimits

0xc32a,	// (0x0002d0a5) listscroll_popup_colour_pane_g1

0xc341,	// (0x0002d0bc) listscroll_popup_colour_pane_g2_ParamLimits

0xc341,	// (0x0002d0bc) listscroll_popup_colour_pane_g2

0xc358,	// (0x0002d0d3) listscroll_popup_colour_pane_g3_ParamLimits

0xc358,	// (0x0002d0d3) listscroll_popup_colour_pane_g3

0xc368,	// (0x0002d0e3) listscroll_popup_colour_pane_g4_ParamLimits

0xc368,	// (0x0002d0e3) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x000302ee) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x000302ee) listscroll_popup_colour_pane_g

0x37f0,	// (0x0002456b) scroll_pane_cp6_ParamLimits

0x37f0,	// (0x0002456b) scroll_pane_cp6

0xc378,	// (0x0002d0f3) cell_large_graphic_colour_popup_pane_ParamLimits

0xc378,	// (0x0002d0f3) cell_large_graphic_colour_popup_pane

0x3821,	// (0x0002459c) cell_large_graphic_colour_none_popup_pane_t1

0x3180,	// (0x00023efb) grid_highlight_pane_cp5

0x3830,	// (0x000245ab) cell_large_graphic_colour_popup_pane_g1

0x3838,	// (0x000245b3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x000302f7) cell_large_graphic_colour_popup_pane_g

0x3840,	// (0x000245bb) cell_large_graphic_colour_popup_pane_g2_copy1

0x3849,	// (0x000245c4) grid_highlight_pane_cp4

0x3851,	// (0x000245cc) bg_popup_window_pane_cp8_ParamLimits

0x3851,	// (0x000245cc) bg_popup_window_pane_cp8

0x386c,	// (0x000245e7) popup_snote_single_text_window_g1_ParamLimits

0x386c,	// (0x000245e7) popup_snote_single_text_window_g1

0x387e,	// (0x000245f9) popup_snote_single_text_window_t1_ParamLimits

0x387e,	// (0x000245f9) popup_snote_single_text_window_t1

0x3891,	// (0x0002460c) popup_snote_single_text_window_t2_ParamLimits

0x3891,	// (0x0002460c) popup_snote_single_text_window_t2

0x38a4,	// (0x0002461f) popup_snote_single_text_window_t3_ParamLimits

0x38a4,	// (0x0002461f) popup_snote_single_text_window_t3

0x38dd,	// (0x00024658) popup_snote_single_text_window_t4_ParamLimits

0x38dd,	// (0x00024658) popup_snote_single_text_window_t4

0x3911,	// (0x0002468c) popup_snote_single_text_window_t5_ParamLimits

0x3911,	// (0x0002468c) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x000302fc) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x000302fc) popup_snote_single_text_window_t

0x3940,	// (0x000246bb) bg_popup_window_pane_cp9_ParamLimits

0x3940,	// (0x000246bb) bg_popup_window_pane_cp9

0x386c,	// (0x000245e7) popup_snote_single_graphic_window_g1_ParamLimits

0x386c,	// (0x000245e7) popup_snote_single_graphic_window_g1

0x394e,	// (0x000246c9) popup_snote_single_graphic_window_g2_ParamLimits

0x394e,	// (0x000246c9) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00030307) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00030307) popup_snote_single_graphic_window_g

0x395a,	// (0x000246d5) popup_snote_single_graphic_window_t1_ParamLimits

0x395a,	// (0x000246d5) popup_snote_single_graphic_window_t1

0x396d,	// (0x000246e8) popup_snote_single_graphic_window_t2_ParamLimits

0x396d,	// (0x000246e8) popup_snote_single_graphic_window_t2

0x3980,	// (0x000246fb) popup_snote_single_graphic_window_t3_ParamLimits

0x3980,	// (0x000246fb) popup_snote_single_graphic_window_t3

0x39b9,	// (0x00024734) popup_snote_single_graphic_window_t4_ParamLimits

0x39b9,	// (0x00024734) popup_snote_single_graphic_window_t4

0x39ed,	// (0x00024768) popup_snote_single_graphic_window_t5_ParamLimits

0x39ed,	// (0x00024768) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0003030c) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0003030c) popup_snote_single_graphic_window_t

0x675b,	// (0x000274d6) grid_graphic_popup_pane_ParamLimits

0x675b,	// (0x000274d6) grid_graphic_popup_pane

0x6785,	// (0x00027500) listscroll_popup_graphic_pane_g1_ParamLimits

0x6785,	// (0x00027500) listscroll_popup_graphic_pane_g1

0xde86,	// (0x0002ec01) listscroll_popup_graphic_pane_g2_ParamLimits

0xde86,	// (0x0002ec01) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00030701) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00030701) listscroll_popup_graphic_pane_g

0x67ad,	// (0x00027528) scroll_pane_cp5

0xde43,	// (0x0002ebbe) cell_graphic_popup_pane_ParamLimits

0xde43,	// (0x0002ebbe) cell_graphic_popup_pane

0x66cd,	// (0x00027448) cell_graphic_popup_pane_g1

0x66d5,	// (0x00027450) cell_graphic_popup_pane_g2

0x3840,	// (0x000245bb) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x000306fa) cell_graphic_popup_pane_g

0x66de,	// (0x00027459) cell_graphic_popup_pane_t2

0x3849,	// (0x000245c4) grid_highlight_pane_cp3

0x3a2e,	// (0x000247a9) list_gen_pane_ParamLimits

0x3a2e,	// (0x000247a9) list_gen_pane

0x3a60,	// (0x000247db) scroll_pane

0xddfa,	// (0x0002eb75) bg_list_pane_g1_ParamLimits

0xddfa,	// (0x0002eb75) bg_list_pane_g1

0x6642,	// (0x000273bd) bg_list_pane_g2_ParamLimits

0x6642,	// (0x000273bd) bg_list_pane_g2

0x6657,	// (0x000273d2) bg_list_pane_g3_ParamLimits

0x6657,	// (0x000273d2) bg_list_pane_g3

0x666b,	// (0x000273e6) bg_list_pane_g4_ParamLimits

0x666b,	// (0x000273e6) bg_list_pane_g4

0xde17,	// (0x0002eb92) bg_list_pane_g5_ParamLimits

0xde17,	// (0x0002eb92) bg_list_pane_g5

0x0004,

0xf974,	// (0x000306ef) bg_list_pane_g_ParamLimits

0xf974,	// (0x000306ef) bg_list_pane_g

0xddb1,	// (0x0002eb2c) list_double2_graphic_large_graphic_pane_ParamLimits

0xddb1,	// (0x0002eb2c) list_double2_graphic_large_graphic_pane

0xddb1,	// (0x0002eb2c) list_double2_graphic_pane_ParamLimits

0xddb1,	// (0x0002eb2c) list_double2_graphic_pane

0xddb1,	// (0x0002eb2c) list_double2_large_graphic_pane_ParamLimits

0xddb1,	// (0x0002eb2c) list_double2_large_graphic_pane

0xddb1,	// (0x0002eb2c) list_double2_pane_ParamLimits

0xddb1,	// (0x0002eb2c) list_double2_pane

0xddb1,	// (0x0002eb2c) list_double_graphic_heading_pane_ParamLimits

0xddb1,	// (0x0002eb2c) list_double_graphic_heading_pane

0xddb1,	// (0x0002eb2c) list_double_graphic_pane_ParamLimits

0xddb1,	// (0x0002eb2c) list_double_graphic_pane

0xddb1,	// (0x0002eb2c) list_double_heading_pane_ParamLimits

0xddb1,	// (0x0002eb2c) list_double_heading_pane

0xddb1,	// (0x0002eb2c) list_double_large_graphic_pane_ParamLimits

0xddb1,	// (0x0002eb2c) list_double_large_graphic_pane

0xddb1,	// (0x0002eb2c) list_double_number_pane_ParamLimits

0xddb1,	// (0x0002eb2c) list_double_number_pane

0xddb1,	// (0x0002eb2c) list_double_pane_ParamLimits

0xddb1,	// (0x0002eb2c) list_double_pane

0xddb1,	// (0x0002eb2c) list_double_time_pane_ParamLimits

0xddb1,	// (0x0002eb2c) list_double_time_pane

0xddb1,	// (0x0002eb2c) list_setting_number_pane_ParamLimits

0xddb1,	// (0x0002eb2c) list_setting_number_pane

0xddb1,	// (0x0002eb2c) list_setting_pane_ParamLimits

0xddb1,	// (0x0002eb2c) list_setting_pane

0xbbbc,	// (0x0002c937) list_single_2graphic_pane_ParamLimits

0xbbbc,	// (0x0002c937) list_single_2graphic_pane

0xbbbc,	// (0x0002c937) list_single_graphic_heading_pane_ParamLimits

0xbbbc,	// (0x0002c937) list_single_graphic_heading_pane

0xbbbc,	// (0x0002c937) list_single_graphic_pane_ParamLimits

0xbbbc,	// (0x0002c937) list_single_graphic_pane

0xbbbc,	// (0x0002c937) list_single_heading_pane_ParamLimits

0xbbbc,	// (0x0002c937) list_single_heading_pane

0xdde7,	// (0x0002eb62) list_single_large_graphic_pane_ParamLimits

0xdde7,	// (0x0002eb62) list_single_large_graphic_pane

0xbbbc,	// (0x0002c937) list_single_number_heading_pane_ParamLimits

0xbbbc,	// (0x0002c937) list_single_number_heading_pane

0xbbbc,	// (0x0002c937) list_single_number_pane_ParamLimits

0xbbbc,	// (0x0002c937) list_single_number_pane

0xbbbc,	// (0x0002c937) list_single_pane_ParamLimits

0xbbbc,	// (0x0002c937) list_single_pane

0x3180,	// (0x00023efb) list_highlight_pane_cp1

0x02e5,	// (0x00021060) list_single_pane_g1_ParamLimits

0x02e5,	// (0x00021060) list_single_pane_g1

0x02f1,	// (0x0002106c) list_single_pane_g2_ParamLimits

0x02f1,	// (0x0002106c) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0003031e) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0003031e) list_single_pane_g

0x0646,	// (0x000213c1) list_single_pane_t1_ParamLimits

0x0646,	// (0x000213c1) list_single_pane_t1

0x02e5,	// (0x00021060) list_single_number_pane_g1_ParamLimits

0x02e5,	// (0x00021060) list_single_number_pane_g1

0x02f1,	// (0x0002106c) list_single_number_pane_g2_ParamLimits

0x02f1,	// (0x0002106c) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0003031e) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0003031e) list_single_number_pane_g

0x035b,	// (0x000210d6) list_single_number_pane_t1_ParamLimits

0x035b,	// (0x000210d6) list_single_number_pane_t1

0xbb7e,	// (0x0002c8f9) list_single_number_pane_t2_ParamLimits

0xbb7e,	// (0x0002c8f9) list_single_number_pane_t2

0x0001,

0xf935,	// (0x000306b0) list_single_number_pane_t_ParamLimits

0xf935,	// (0x000306b0) list_single_number_pane_t

0xb53e,	// (0x0002c2b9) list_single_graphic_pane_g1_ParamLimits

0xb53e,	// (0x0002c2b9) list_single_graphic_pane_g1

0x02e5,	// (0x00021060) list_single_graphic_pane_g2_ParamLimits

0x02e5,	// (0x00021060) list_single_graphic_pane_g2

0x02f1,	// (0x0002106c) list_single_graphic_pane_g3_ParamLimits

0x02f1,	// (0x0002106c) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00030317) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00030317) list_single_graphic_pane_g

0xb54a,	// (0x0002c2c5) list_single_graphic_pane_t1_ParamLimits

0xb54a,	// (0x0002c2c5) list_single_graphic_pane_t1

0x02e5,	// (0x00021060) list_single_heading_pane_g1_ParamLimits

0x02e5,	// (0x00021060) list_single_heading_pane_g1

0x02f1,	// (0x0002106c) list_single_heading_pane_g2_ParamLimits

0x02f1,	// (0x0002106c) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003031e) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003031e) list_single_heading_pane_g

0xb560,	// (0x0002c2db) list_single_heading_pane_t1_ParamLimits

0xb560,	// (0x0002c2db) list_single_heading_pane_t1

0xb576,	// (0x0002c2f1) list_single_heading_pane_t2_ParamLimits

0xb576,	// (0x0002c2f1) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00030323) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00030323) list_single_heading_pane_t

0x02e5,	// (0x00021060) list_single_number_heading_pane_g1_ParamLimits

0x02e5,	// (0x00021060) list_single_number_heading_pane_g1

0x02f1,	// (0x0002106c) list_single_number_heading_pane_g2_ParamLimits

0x02f1,	// (0x0002106c) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003031e) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003031e) list_single_number_heading_pane_g

0xb560,	// (0x0002c2db) list_single_number_heading_pane_t1_ParamLimits

0xb560,	// (0x0002c2db) list_single_number_heading_pane_t1

0x05fa,	// (0x00021375) list_single_number_heading_pane_t2_ParamLimits

0x05fa,	// (0x00021375) list_single_number_heading_pane_t2

0x060c,	// (0x00021387) list_single_number_heading_pane_t3_ParamLimits

0x060c,	// (0x00021387) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00030328) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00030328) list_single_number_heading_pane_t

0x02d9,	// (0x00021054) list_single_graphic_heading_pane_g1_ParamLimits

0x02d9,	// (0x00021054) list_single_graphic_heading_pane_g1

0xb588,	// (0x0002c303) list_single_graphic_heading_pane_g4_ParamLimits

0xb588,	// (0x0002c303) list_single_graphic_heading_pane_g4

0x02f1,	// (0x0002106c) list_single_graphic_heading_pane_g5_ParamLimits

0x02f1,	// (0x0002106c) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0003032f) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0003032f) list_single_graphic_heading_pane_g

0xb560,	// (0x0002c2db) list_single_graphic_heading_pane_t1_ParamLimits

0xb560,	// (0x0002c2db) list_single_graphic_heading_pane_t1

0xb599,	// (0x0002c314) list_single_graphic_heading_pane_t2_ParamLimits

0xb599,	// (0x0002c314) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00030336) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00030336) list_single_graphic_heading_pane_t

0x065c,	// (0x000213d7) list_single_large_graphic_pane_g1_ParamLimits

0x065c,	// (0x000213d7) list_single_large_graphic_pane_g1

0xf4ba,	// (0x00030235) list_single_large_graphic_pane_g2_ParamLimits

0xf4ba,	// (0x00030235) list_single_large_graphic_pane_g2

0xf4c6,	// (0x00030241) list_single_large_graphic_pane_g3_ParamLimits

0xf4c6,	// (0x00030241) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0003033b) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0003033b) list_single_large_graphic_pane_g

0x5630,	// (0x000263ab) wait_border_pane_g2_copy1

0xb5ab,	// (0x0002c326) list_single_large_graphic_pane_g4_cp2

0x0668,	// (0x000213e3) list_single_large_graphic_pane_t1_ParamLimits

0x0668,	// (0x000213e3) list_single_large_graphic_pane_t1

0xb5b3,	// (0x0002c32e) list_double_pane_g1_ParamLimits

0xb5b3,	// (0x0002c32e) list_double_pane_g1

0xb5bf,	// (0x0002c33a) list_double_pane_g2_ParamLimits

0xb5bf,	// (0x0002c33a) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00030342) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00030342) list_double_pane_g

0xb5cb,	// (0x0002c346) list_double_pane_t1_ParamLimits

0xb5cb,	// (0x0002c346) list_double_pane_t1

0xb5e1,	// (0x0002c35c) list_double_pane_t2_ParamLimits

0xb5e1,	// (0x0002c35c) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00030347) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00030347) list_double_pane_t

0xb5f3,	// (0x0002c36e) list_double2_pane_g1_ParamLimits

0xb5f3,	// (0x0002c36e) list_double2_pane_g1

0xb604,	// (0x0002c37f) list_double2_pane_g2_ParamLimits

0xb604,	// (0x0002c37f) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0003034c) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0003034c) list_double2_pane_g

0xb610,	// (0x0002c38b) list_double2_pane_t1_ParamLimits

0xb610,	// (0x0002c38b) list_double2_pane_t1

0xb626,	// (0x0002c3a1) list_double2_pane_t2_ParamLimits

0xb626,	// (0x0002c3a1) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00030351) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00030351) list_double2_pane_t

0xb5b3,	// (0x0002c32e) list_double_number_pane_g1_ParamLimits

0xb5b3,	// (0x0002c32e) list_double_number_pane_g1

0xb5bf,	// (0x0002c33a) list_double_number_pane_g2_ParamLimits

0xb5bf,	// (0x0002c33a) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00030342) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00030342) list_double_number_pane_g

0xb638,	// (0x0002c3b3) list_double_number_pane_t1_ParamLimits

0xb638,	// (0x0002c3b3) list_double_number_pane_t1

0xb64a,	// (0x0002c3c5) list_double_number_pane_t2_ParamLimits

0xb64a,	// (0x0002c3c5) list_double_number_pane_t2

0xb660,	// (0x0002c3db) list_double_number_pane_t3_ParamLimits

0xb660,	// (0x0002c3db) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00030356) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00030356) list_double_number_pane_t

0xb672,	// (0x0002c3ed) list_double_graphic_pane_g1_ParamLimits

0xb672,	// (0x0002c3ed) list_double_graphic_pane_g1

0xb67e,	// (0x0002c3f9) list_double_graphic_pane_g2_ParamLimits

0xb67e,	// (0x0002c3f9) list_double_graphic_pane_g2

0xb68d,	// (0x0002c408) list_double_graphic_pane_g3_ParamLimits

0xb68d,	// (0x0002c408) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0003035d) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0003035d) list_double_graphic_pane_g

0xb6a5,	// (0x0002c420) list_double_graphic_pane_t1_ParamLimits

0xb6a5,	// (0x0002c420) list_double_graphic_pane_t1

0xb6bb,	// (0x0002c436) list_double_graphic_pane_t2_ParamLimits

0xb6bb,	// (0x0002c436) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00030366) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00030366) list_double_graphic_pane_t

0xb6cd,	// (0x0002c448) list_double2_graphic_pane_g1_ParamLimits

0xb6cd,	// (0x0002c448) list_double2_graphic_pane_g1

0xb6d9,	// (0x0002c454) list_double2_graphic_pane_g2_ParamLimits

0xb6d9,	// (0x0002c454) list_double2_graphic_pane_g2

0xb604,	// (0x0002c37f) list_double2_graphic_pane_g3_ParamLimits

0xb604,	// (0x0002c37f) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0003036b) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0003036b) list_double2_graphic_pane_g

0xb6e5,	// (0x0002c460) list_double2_graphic_pane_t1_ParamLimits

0xb6e5,	// (0x0002c460) list_double2_graphic_pane_t1

0xb6fb,	// (0x0002c476) list_double2_graphic_pane_t2_ParamLimits

0xb6fb,	// (0x0002c476) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00030372) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00030372) list_double2_graphic_pane_t

0xb70d,	// (0x0002c488) list_double_large_graphic_pane_g1_ParamLimits

0xb70d,	// (0x0002c488) list_double_large_graphic_pane_g1

0xb72c,	// (0x0002c4a7) list_double_large_graphic_pane_g2_ParamLimits

0xb72c,	// (0x0002c4a7) list_double_large_graphic_pane_g2

0xb5bf,	// (0x0002c33a) list_double_large_graphic_pane_g3_ParamLimits

0xb5bf,	// (0x0002c33a) list_double_large_graphic_pane_g3

0xb73d,	// (0x0002c4b8) list_double_large_graphic_pane_g4_ParamLimits

0xb73d,	// (0x0002c4b8) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00030377) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00030377) list_double_large_graphic_pane_g

0xb750,	// (0x0002c4cb) list_double_large_graphic_pane_t1_ParamLimits

0xb750,	// (0x0002c4cb) list_double_large_graphic_pane_t1

0xb769,	// (0x0002c4e4) list_double_large_graphic_pane_t2_ParamLimits

0xb769,	// (0x0002c4e4) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00030382) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00030382) list_double_large_graphic_pane_t

0xb77b,	// (0x0002c4f6) list_double2_large_graphic_pane_g1_ParamLimits

0xb77b,	// (0x0002c4f6) list_double2_large_graphic_pane_g1

0xb5f3,	// (0x0002c36e) list_double2_large_graphic_pane_g2_ParamLimits

0xb5f3,	// (0x0002c36e) list_double2_large_graphic_pane_g2

0xb604,	// (0x0002c37f) list_double2_large_graphic_pane_g3_ParamLimits

0xb604,	// (0x0002c37f) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00030387) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00030387) list_double2_large_graphic_pane_g

0xb787,	// (0x0002c502) list_double2_large_graphic_pane_t1_ParamLimits

0xb787,	// (0x0002c502) list_double2_large_graphic_pane_t1

0xb79d,	// (0x0002c518) list_double2_large_graphic_pane_t2_ParamLimits

0xb79d,	// (0x0002c518) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0003038e) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0003038e) list_double2_large_graphic_pane_t

0xb7af,	// (0x0002c52a) list_double_heading_pane_g1_ParamLimits

0xb7af,	// (0x0002c52a) list_double_heading_pane_g1

0xf4e7,	// (0x00030262) list_double_heading_pane_g2_ParamLimits

0xf4e7,	// (0x00030262) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00030393) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00030393) list_double_heading_pane_g

0xb7c0,	// (0x0002c53b) list_double_heading_pane_t1_ParamLimits

0xb7c0,	// (0x0002c53b) list_double_heading_pane_t1

0xb626,	// (0x0002c3a1) list_double_heading_pane_t2_ParamLimits

0xb626,	// (0x0002c3a1) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00030398) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00030398) list_double_heading_pane_t

0xb6cd,	// (0x0002c448) list_double_graphic_heading_pane_g1_ParamLimits

0xb6cd,	// (0x0002c448) list_double_graphic_heading_pane_g1

0xb7af,	// (0x0002c52a) list_double_graphic_heading_pane_g2_ParamLimits

0xb7af,	// (0x0002c52a) list_double_graphic_heading_pane_g2

0xf4e7,	// (0x00030262) list_double_graphic_heading_pane_g3_ParamLimits

0xf4e7,	// (0x00030262) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0003039d) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003039d) list_double_graphic_heading_pane_g

0xb7d6,	// (0x0002c551) list_double_graphic_heading_pane_t1_ParamLimits

0xb7d6,	// (0x0002c551) list_double_graphic_heading_pane_t1

0xb6fb,	// (0x0002c476) list_double_graphic_heading_pane_t2_ParamLimits

0xb6fb,	// (0x0002c476) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x000303a4) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x000303a4) list_double_graphic_heading_pane_t

0xb72c,	// (0x0002c4a7) list_double_time_pane_g1_ParamLimits

0xb72c,	// (0x0002c4a7) list_double_time_pane_g1

0xb5bf,	// (0x0002c33a) list_double_time_pane_g2_ParamLimits

0xb5bf,	// (0x0002c33a) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x000303a9) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x000303a9) list_double_time_pane_g

0xb7ec,	// (0x0002c567) list_double_time_pane_t1_ParamLimits

0xb7ec,	// (0x0002c567) list_double_time_pane_t1

0xb802,	// (0x0002c57d) list_double_time_pane_t2_ParamLimits

0xb802,	// (0x0002c57d) list_double_time_pane_t2

0xb814,	// (0x0002c58f) list_double_time_pane_t3_ParamLimits

0xb814,	// (0x0002c58f) list_double_time_pane_t3

0xb826,	// (0x0002c5a1) list_double_time_pane_t4_ParamLimits

0xb826,	// (0x0002c5a1) list_double_time_pane_t4

0x0003,

0xf633,	// (0x000303ae) list_double_time_pane_t_ParamLimits

0xf633,	// (0x000303ae) list_double_time_pane_t

0xb6d9,	// (0x0002c454) list_setting_pane_g1_ParamLimits

0xb6d9,	// (0x0002c454) list_setting_pane_g1

0xb604,	// (0x0002c37f) list_setting_pane_g2_ParamLimits

0xb604,	// (0x0002c37f) list_setting_pane_g2

0x0001,

0xf63c,	// (0x000303b7) list_setting_pane_g_ParamLimits

0xf63c,	// (0x000303b7) list_setting_pane_g

0xb838,	// (0x0002c5b3) list_setting_pane_t1_ParamLimits

0xb838,	// (0x0002c5b3) list_setting_pane_t1

0xb852,	// (0x0002c5cd) list_setting_pane_t2_ParamLimits

0xb852,	// (0x0002c5cd) list_setting_pane_t2

0x0002,

0xf641,	// (0x000303bc) list_setting_pane_t_ParamLimits

0xf641,	// (0x000303bc) list_setting_pane_t

0xb891,	// (0x0002c60c) set_value_pane_cp_ParamLimits

0xb891,	// (0x0002c60c) set_value_pane_cp

0xb89d,	// (0x0002c618) list_setting_number_pane_g1_ParamLimits

0xb89d,	// (0x0002c618) list_setting_number_pane_g1

0xb8a9,	// (0x0002c624) list_setting_number_pane_g2_ParamLimits

0xb8a9,	// (0x0002c624) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x000303c3) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x000303c3) list_setting_number_pane_g

0xb8b5,	// (0x0002c630) list_setting_number_pane_t1_ParamLimits

0xb8b5,	// (0x0002c630) list_setting_number_pane_t1

0xb8ce,	// (0x0002c649) list_setting_number_pane_t2_ParamLimits

0xb8ce,	// (0x0002c649) list_setting_number_pane_t2

0xb8e8,	// (0x0002c663) list_setting_number_pane_t3_ParamLimits

0xb8e8,	// (0x0002c663) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x000303c8) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x000303c8) list_setting_number_pane_t

0xb891,	// (0x0002c60c) set_value_pane_ParamLimits

0xb891,	// (0x0002c60c) set_value_pane

0x3a94,	// (0x0002480f) bg_set_opt_pane_ParamLimits

0x3a94,	// (0x0002480f) bg_set_opt_pane

0xf50b,	// (0x00030286) set_value_pane_t1

0x3ab5,	// (0x00024830) slider_set_pane_cp3

0x3abe,	// (0x00024839) volume_small_pane_cp

0x3ac7,	// (0x00024842) list_form_gen_pane

0x3ad0,	// (0x0002484b) scroll_pane_cp8

0xb92b,	// (0x0002c6a6) form_field_data_pane_ParamLimits

0xb92b,	// (0x0002c6a6) form_field_data_pane

0xb942,	// (0x0002c6bd) form_field_data_wide_pane_ParamLimits

0xb942,	// (0x0002c6bd) form_field_data_wide_pane

0xb962,	// (0x0002c6dd) form_field_popup_pane_ParamLimits

0xb962,	// (0x0002c6dd) form_field_popup_pane

0xb982,	// (0x0002c6fd) form_field_popup_wide_pane_ParamLimits

0xb982,	// (0x0002c6fd) form_field_popup_wide_pane

0x0046,	// (0x00020dc1) form_field_slider_pane_ParamLimits

0x0046,	// (0x00020dc1) form_field_slider_pane

0x0059,	// (0x00020dd4) form_field_slider_wide_pane_ParamLimits

0x0059,	// (0x00020dd4) form_field_slider_wide_pane

0x3ae1,	// (0x0002485c) data_form_pane

0xb9a3,	// (0x0002c71e) form_field_data_pane_t1

0x3aed,	// (0x00024868) input_focus_pane

0x008e,	// (0x00020e09) data_form_wide_pane

0x00ab,	// (0x00020e26) form_field_data_wide_pane_t1

0x385e,	// (0x000245d9) input_focus_pane_cp6

0xb9bd,	// (0x0002c738) form_field_popup_pane_t1

0x3aed,	// (0x00024868) input_focus_pane_cp7

0x3b1b,	// (0x00024896) list_form_pane

0x00ed,	// (0x00020e68) form_field_popup_wide_pane_t1

0x3aed,	// (0x00024868) input_focus_pane_cp8

0x3b27,	// (0x000248a2) list_form_wide_pane

0xb9df,	// (0x0002c75a) form_field_slider_pane_t1_ParamLimits

0xb9df,	// (0x0002c75a) form_field_slider_pane_t1

0xb9f7,	// (0x0002c772) form_field_slider_pane_t2_ParamLimits

0xb9f7,	// (0x0002c772) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x000303d8) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x000303d8) form_field_slider_pane_t

0x34db,	// (0x00024256) input_focus_pane_cp9_ParamLimits

0x34db,	// (0x00024256) input_focus_pane_cp9

0xba0c,	// (0x0002c787) slider_cont_pane_ParamLimits

0xba0c,	// (0x0002c787) slider_cont_pane

0x3b33,	// (0x000248ae) form_field_slider_wide_pane_t1_ParamLimits

0x3b33,	// (0x000248ae) form_field_slider_wide_pane_t1

0x0149,	// (0x00020ec4) form_field_slider_wide_pane_t2_ParamLimits

0x0149,	// (0x00020ec4) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x000303dd) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x000303dd) form_field_slider_wide_pane_t

0x34db,	// (0x00024256) input_focus_pane_cp10_ParamLimits

0x34db,	// (0x00024256) input_focus_pane_cp10

0xba20,	// (0x0002c79b) slider_cont_pane_cp1_ParamLimits

0xba20,	// (0x0002c79b) slider_cont_pane_cp1

0xba34,	// (0x0002c7af) slider_form_pane_cp

0x3b45,	// (0x000248c0) input_focus_pane_g1

0x3b4d,	// (0x000248c8) input_focus_pane_g2

0x3b55,	// (0x000248d0) input_focus_pane_g3

0x3b5d,	// (0x000248d8) input_focus_pane_g4

0x3b65,	// (0x000248e0) input_focus_pane_g5

0x3b6d,	// (0x000248e8) input_focus_pane_g6

0x3b75,	// (0x000248f0) input_focus_pane_g7

0x3b7d,	// (0x000248f8) input_focus_pane_g8

0x3b85,	// (0x00024900) input_focus_pane_g9

0xea64,	// (0x0002f7df) input_focus_pane_g10

0x0009,

0xf667,	// (0x000303e2) input_focus_pane_g

0x5639,	// (0x000263b4) wait_border_pane_g3_copy1

0xba3c,	// (0x0002c7b7) data_form_pane_t1

0xea64,	// (0x0002f7df) wait_anim_pane_g1_copy1

0xbb90,	// (0x0002c90b) data_form_wide_pane_t1

0xba56,	// (0x0002c7d1) list_form_graphic_pane_cp_ParamLimits

0xba56,	// (0x0002c7d1) list_form_graphic_pane_cp

0x6559,	// (0x000272d4) slider_form_pane_g1

0x6562,	// (0x000272dd) slider_form_pane_g2

0x0006,

0xf965,	// (0x000306e0) slider_form_pane_g

0xba68,	// (0x0002c7e3) list_form_graphic_pane_ParamLimits

0xba68,	// (0x0002c7e3) list_form_graphic_pane

0x01c7,	// (0x00020f42) list_form_graphic_pane_g1

0x01cf,	// (0x00020f4a) list_form_graphic_pane_t1_ParamLimits

0x01cf,	// (0x00020f4a) list_form_graphic_pane_t1

0x3260,	// (0x00023fdb) list_highlight_pane_cp5_ParamLimits

0x3260,	// (0x00023fdb) list_highlight_pane_cp5

0xba7b,	// (0x0002c7f6) find_pane_g1

0x3b8d,	// (0x00024908) input_find_pane

0xba84,	// (0x0002c7ff) input_find_pane_g1_ParamLimits

0xba84,	// (0x0002c7ff) input_find_pane_g1

0xba90,	// (0x0002c80b) input_find_pane_t1_ParamLimits

0xba90,	// (0x0002c80b) input_find_pane_t1

0xbaa5,	// (0x0002c820) input_find_pane_t2_ParamLimits

0xbaa5,	// (0x0002c820) input_find_pane_t2

0x0001,

0xf67c,	// (0x000303f7) input_find_pane_t_ParamLimits

0xf67c,	// (0x000303f7) input_find_pane_t

0x3b96,	// (0x00024911) input_focus_pane_cp5_ParamLimits

0x3b96,	// (0x00024911) input_focus_pane_cp5

0x3bb5,	// (0x00024930) bg_popup_window_pane_cp2_ParamLimits

0x3bb5,	// (0x00024930) bg_popup_window_pane_cp2

0x3bc2,	// (0x0002493d) listscroll_menu_pane_ParamLimits

0x3bc2,	// (0x0002493d) listscroll_menu_pane

0xc3ad,	// (0x0002d128) popup_submenu_window_ParamLimits

0xc3ad,	// (0x0002d128) popup_submenu_window

0x3bfa,	// (0x00024975) find_popup_pane_g1

0x3c02,	// (0x0002497d) input_popup_find_pane_cp

0x3c0c,	// (0x00024987) input_focus_pane_cp4_ParamLimits

0x3c0c,	// (0x00024987) input_focus_pane_cp4

0x3c26,	// (0x000249a1) input_popup_find_pane_t1_ParamLimits

0x3c26,	// (0x000249a1) input_popup_find_pane_t1

0x3180,	// (0x00023efb) bg_popup_sub_pane_cp

0x3c54,	// (0x000249cf) listscroll_popup_sub_pane

0x3c5c,	// (0x000249d7) list_submenu_pane_ParamLimits

0x3c5c,	// (0x000249d7) list_submenu_pane

0x3c6d,	// (0x000249e8) scroll_pane_cp4

0x3c75,	// (0x000249f0) list_single_popup_submenu_pane_ParamLimits

0x3c75,	// (0x000249f0) list_single_popup_submenu_pane

0x3c89,	// (0x00024a04) list_single_popup_submenu_pane_g1

0x3c91,	// (0x00024a0c) list_single_popup_submenu_pane_t1_ParamLimits

0x3c91,	// (0x00024a0c) list_single_popup_submenu_pane_t1

0x34db,	// (0x00024256) bg_active_tab_pane_cp1_ParamLimits

0x34db,	// (0x00024256) bg_active_tab_pane_cp1

0x3ca6,	// (0x00024a21) tabs_2_active_pane_g1

0xc3e7,	// (0x0002d162) tabs_2_active_pane_t1

0x34db,	// (0x00024256) bg_passive_tab_pane_cp1_ParamLimits

0x34db,	// (0x00024256) bg_passive_tab_pane_cp1

0x3ca6,	// (0x00024a21) tabs_2_passive_pane_g1

0xc3e7,	// (0x0002d162) tabs_2_passive_pane_t1

0x3260,	// (0x00023fdb) bg_active_tab_pane_cp4

0xc3f9,	// (0x0002d174) tabs_2_long_active_pane_t1

0x4ade,	// (0x00025859) bg_passive_tab_pane_cp4

0x1d2c,	// (0x00022aa7) list_single_midp_graphic_pane_g4_ParamLimits

0x3260,	// (0x00023fdb) bg_active_tab_pane_cp5

0xc40c,	// (0x0002d187) tabs_3_long_active_pane_t1

0x4ade,	// (0x00025859) bg_passive_tab_pane_cp5

0x1d2c,	// (0x00022aa7) list_single_midp_graphic_pane_g4

0x3260,	// (0x00023fdb) bg_popup_window_pane_cp13_ParamLimits

0x3260,	// (0x00023fdb) bg_popup_window_pane_cp13

0x3d08,	// (0x00024a83) listscroll_popup_fast_pane_ParamLimits

0x3d08,	// (0x00024a83) listscroll_popup_fast_pane

0x3d17,	// (0x00024a92) grid_popup_fast_pane_ParamLimits

0x3d17,	// (0x00024a92) grid_popup_fast_pane

0x3d29,	// (0x00024aa4) scroll_pane_cp9_ParamLimits

0x3d29,	// (0x00024aa4) scroll_pane_cp9

0x7e98,	// (0x00028c13) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7e98,	// (0x00028c13) list_single_graphic_hl_pane_t1_cp2

0x3d4d,	// (0x00024ac8) input_focus_pane_cp20_ParamLimits

0x3d4d,	// (0x00024ac8) input_focus_pane_cp20

0x3d5b,	// (0x00024ad6) query_popup_data_pane_t1_ParamLimits

0x3d5b,	// (0x00024ad6) query_popup_data_pane_t1

0x3d6e,	// (0x00024ae9) query_popup_data_pane_t2_ParamLimits

0x3d6e,	// (0x00024ae9) query_popup_data_pane_t2

0x3db4,	// (0x00024b2f) query_popup_data_pane_t3_ParamLimits

0x3db4,	// (0x00024b2f) query_popup_data_pane_t3

0x3df5,	// (0x00024b70) query_popup_data_pane_t4_ParamLimits

0x3df5,	// (0x00024b70) query_popup_data_pane_t4

0x3e31,	// (0x00024bac) query_popup_data_pane_t5_ParamLimits

0x3e31,	// (0x00024bac) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x000303fc) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x000303fc) query_popup_data_pane_t

0x3b45,	// (0x000248c0) bg_set_opt_pane_g1

0x3b4d,	// (0x000248c8) bg_set_opt_pane_g2

0x3b55,	// (0x000248d0) bg_set_opt_pane_g3

0x3b5d,	// (0x000248d8) bg_set_opt_pane_g4

0x3b65,	// (0x000248e0) bg_set_opt_pane_g5

0x3b6d,	// (0x000248e8) bg_set_opt_pane_g6

0x3b75,	// (0x000248f0) bg_set_opt_pane_g7

0x3b7d,	// (0x000248f8) bg_set_opt_pane_g8

0x3b85,	// (0x00024900) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x00030407) bg_set_opt_pane_g

0x13cc,	// (0x00022147) control_top_pane_stacon_ParamLimits

0x13cc,	// (0x00022147) control_top_pane_stacon

0x141f,	// (0x0002219a) signal_pane_stacon_ParamLimits

0x141f,	// (0x0002219a) signal_pane_stacon

0x443c,	// (0x000251b7) stacon_top_pane_g1_ParamLimits

0x443c,	// (0x000251b7) stacon_top_pane_g1

0x1444,	// (0x000221bf) title_pane_stacon_ParamLimits

0x1444,	// (0x000221bf) title_pane_stacon

0x146e,	// (0x000221e9) uni_indicator_pane_stacon_ParamLimits

0x146e,	// (0x000221e9) uni_indicator_pane_stacon

0x1483,	// (0x000221fe) battery_pane_stacon_ParamLimits

0x1483,	// (0x000221fe) battery_pane_stacon

0x14c7,	// (0x00022242) control_bottom_pane_stacon_ParamLimits

0x14c7,	// (0x00022242) control_bottom_pane_stacon

0x14ea,	// (0x00022265) navi_pane_stacon_ParamLimits

0x14ea,	// (0x00022265) navi_pane_stacon

0x445e,	// (0x000251d9) stacon_bottom_pane_g1_ParamLimits

0x445e,	// (0x000251d9) stacon_bottom_pane_g1

0x112f,	// (0x00021eaa) aid_levels_signal_lsc_ParamLimits

0x112f,	// (0x00021eaa) aid_levels_signal_lsc

0x1145,	// (0x00021ec0) signal_pane_stacon_g1_ParamLimits

0x1145,	// (0x00021ec0) signal_pane_stacon_g1

0x1159,	// (0x00021ed4) signal_pane_stacon_g2_ParamLimits

0x1159,	// (0x00021ed4) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0003041a) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0003041a) signal_pane_stacon_g

0x118e,	// (0x00021f09) title_pane_stacon_t1_ParamLimits

0x118e,	// (0x00021f09) title_pane_stacon_t1

0x3e75,	// (0x00024bf0) uni_indicator_pane_stacon_g1

0x3e7f,	// (0x00024bfa) uni_indicator_pane_stacon_g2

0x3e89,	// (0x00024c04) uni_indicator_pane_stacon_g3

0x3e93,	// (0x00024c0e) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x00030426) uni_indicator_pane_stacon_g

0x11b3,	// (0x00021f2e) control_top_pane_stacon_g1

0x11bb,	// (0x00021f36) control_top_pane_stacon_t1_ParamLimits

0x11bb,	// (0x00021f36) control_top_pane_stacon_t1

0x11f2,	// (0x00021f6d) aid_levels_battery_lsc_ParamLimits

0x11f2,	// (0x00021f6d) aid_levels_battery_lsc

0x1209,	// (0x00021f84) battery_pane_stacon_g1_ParamLimits

0x1209,	// (0x00021f84) battery_pane_stacon_g1

0x121c,	// (0x00021f97) battery_pane_stacon_g2_ParamLimits

0x121c,	// (0x00021f97) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0003042f) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0003042f) battery_pane_stacon_g

0x125a,	// (0x00021fd5) navi_icon_pane_stacon

0x126e,	// (0x00021fe9) navi_navi_pane_stacon

0x125a,	// (0x00021fd5) navi_text_pane_stacon

0x11b3,	// (0x00021f2e) control_bottom_pane_stacon_g1

0x1282,	// (0x00021ffd) control_bottom_pane_stacon_t1_ParamLimits

0x1282,	// (0x00021ffd) control_bottom_pane_stacon_t1

0xc41e,	// (0x0002d199) grid_app_pane_ParamLimits

0xc41e,	// (0x0002d199) grid_app_pane

0xc456,	// (0x0002d1d1) scroll_pane_cp15_ParamLimits

0xc456,	// (0x0002d1d1) scroll_pane_cp15

0xc46b,	// (0x0002d1e6) cell_app_pane_ParamLimits

0xc46b,	// (0x0002d1e6) cell_app_pane

0xc4b0,	// (0x0002d22b) cell_app_pane_g1_ParamLimits

0xc4b0,	// (0x0002d22b) cell_app_pane_g1

0x3f38,	// (0x00024cb3) cell_app_pane_g2_ParamLimits

0x3f38,	// (0x00024cb3) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x00030434) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x00030434) cell_app_pane_g

0xc4d4,	// (0x0002d24f) cell_app_pane_t1_ParamLimits

0xc4d4,	// (0x0002d24f) cell_app_pane_t1

0x3f5b,	// (0x00024cd6) grid_highlight_pane_ParamLimits

0x3f5b,	// (0x00024cd6) grid_highlight_pane

0x3b45,	// (0x000248c0) cell_highlight_pane_g1

0x3b4d,	// (0x000248c8) cell_highlight_pane_g2

0x3b55,	// (0x000248d0) cell_highlight_pane_g3

0x3b5d,	// (0x000248d8) cell_highlight_pane_g4

0x3b65,	// (0x000248e0) cell_highlight_pane_g5

0x3b6d,	// (0x000248e8) cell_highlight_pane_g6

0x3b75,	// (0x000248f0) cell_highlight_pane_g7

0x3b7d,	// (0x000248f8) cell_highlight_pane_g8

0x3b85,	// (0x00024900) cell_highlight_pane_g9

0xea64,	// (0x0002f7df) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x000303e2) cell_highlight_pane_g

0x3f6c,	// (0x00024ce7) bg_scroll_pane

0x12cc,	// (0x00022047) scroll_handle_pane

0x3fb3,	// (0x00024d2e) scroll_bg_pane_g1

0x3fc8,	// (0x00024d43) scroll_bg_pane_g2

0x3fe0,	// (0x00024d5b) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x00030439) scroll_bg_pane_g

0x3ff5,	// (0x00024d70) scroll_handle_focus_pane_ParamLimits

0x3ff5,	// (0x00024d70) scroll_handle_focus_pane

0x3fb3,	// (0x00024d2e) scroll_handle_pane_g1

0x4002,	// (0x00024d7d) scroll_handle_pane_g2

0x3fe0,	// (0x00024d5b) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x00030440) scroll_handle_pane_g

0x3c0c,	// (0x00024987) bg_popup_sub_pane_cp21_ParamLimits

0x3c0c,	// (0x00024987) bg_popup_sub_pane_cp21

0x4016,	// (0x00024d91) popup_fep_japan_predictive_window_t1_ParamLimits

0x4016,	// (0x00024d91) popup_fep_japan_predictive_window_t1

0x4030,	// (0x00024dab) popup_fep_japan_predictive_window_t2_ParamLimits

0x4030,	// (0x00024dab) popup_fep_japan_predictive_window_t2

0x4063,	// (0x00024dde) popup_fep_japan_predictive_window_t3_ParamLimits

0x4063,	// (0x00024dde) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x00030447) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x00030447) popup_fep_japan_predictive_window_t

0x3180,	// (0x00023efb) bg_popup_sub_pane_cp23

0x409a,	// (0x00024e15) listscroll_japin_cand_pane

0x40a2,	// (0x00024e1d) popup_fep_japan_candidate_window_t1

0x40b0,	// (0x00024e2b) candidate_pane_ParamLimits

0x40b0,	// (0x00024e2b) candidate_pane

0x40c2,	// (0x00024e3d) scroll_pane_cp30

0x40ca,	// (0x00024e45) list_single_popup_jap_candidate_pane_ParamLimits

0x40ca,	// (0x00024e45) list_single_popup_jap_candidate_pane

0x3180,	// (0x00023efb) list_highlight_pane_cp30

0x40df,	// (0x00024e5a) list_single_popup_jap_candidate_pane_t1

0x40ee,	// (0x00024e69) level_1_signal

0x4100,	// (0x00024e7b) level_2_signal

0x4113,	// (0x00024e8e) level_3_signal

0x4126,	// (0x00024ea1) level_4_signal

0x4139,	// (0x00024eb4) level_5_signal

0x414c,	// (0x00024ec7) level_6_signal

0x415f,	// (0x00024eda) level_7_signal

0x40ee,	// (0x00024e69) level_1_battery

0x4100,	// (0x00024e7b) level_2_battery

0x4113,	// (0x00024e8e) level_3_battery

0x4126,	// (0x00024ea1) level_4_battery

0x4139,	// (0x00024eb4) level_5_battery

0x414c,	// (0x00024ec7) level_6_battery

0x415f,	// (0x00024eda) level_7_battery

0x418a,	// (0x00024f05) list_menu_pane_ParamLimits

0x418a,	// (0x00024f05) list_menu_pane

0x41a0,	// (0x00024f1b) scroll_pane_cp25_ParamLimits

0x41a0,	// (0x00024f1b) scroll_pane_cp25

0x41b9,	// (0x00024f34) list_double2_graphic_pane_cp2_ParamLimits

0x41b9,	// (0x00024f34) list_double2_graphic_pane_cp2

0x41b9,	// (0x00024f34) list_double2_large_graphic_pane_cp2_ParamLimits

0x41b9,	// (0x00024f34) list_double2_large_graphic_pane_cp2

0x41b9,	// (0x00024f34) list_double2_pane_cp2_ParamLimits

0x41b9,	// (0x00024f34) list_double2_pane_cp2

0x41b9,	// (0x00024f34) list_double_graphic_pane_cp2_ParamLimits

0x41b9,	// (0x00024f34) list_double_graphic_pane_cp2

0x41b9,	// (0x00024f34) list_double_large_graphic_pane_cp2_ParamLimits

0x41b9,	// (0x00024f34) list_double_large_graphic_pane_cp2

0x41b9,	// (0x00024f34) list_double_number_pane_cp2_ParamLimits

0x41b9,	// (0x00024f34) list_double_number_pane_cp2

0x41b9,	// (0x00024f34) list_double_pane_cp2_ParamLimits

0x41b9,	// (0x00024f34) list_double_pane_cp2

0xc4eb,	// (0x0002d266) list_single_2graphic_pane_cp2_ParamLimits

0xc4eb,	// (0x0002d266) list_single_2graphic_pane_cp2

0xc4eb,	// (0x0002d266) list_single_graphic_heading_pane_cp2_ParamLimits

0xc4eb,	// (0x0002d266) list_single_graphic_heading_pane_cp2

0xc4eb,	// (0x0002d266) list_single_graphic_pane_cp2_ParamLimits

0xc4eb,	// (0x0002d266) list_single_graphic_pane_cp2

0xc4eb,	// (0x0002d266) list_single_heading_pane_cp2_ParamLimits

0xc4eb,	// (0x0002d266) list_single_heading_pane_cp2

0x41f6,	// (0x00024f71) list_single_large_graphic_pane_cp2_ParamLimits

0x41f6,	// (0x00024f71) list_single_large_graphic_pane_cp2

0xc4eb,	// (0x0002d266) list_single_number_heading_pane_cp2_ParamLimits

0xc4eb,	// (0x0002d266) list_single_number_heading_pane_cp2

0xc4eb,	// (0x0002d266) list_single_number_pane_cp2_ParamLimits

0xc4eb,	// (0x0002d266) list_single_number_pane_cp2

0xc4fd,	// (0x0002d278) list_single_pane_cp2_ParamLimits

0xc4fd,	// (0x0002d278) list_single_pane_cp2

0x428b,	// (0x00025006) bg_popup_sub_pane_cp22

0x137e,	// (0x000220f9) popup_side_volume_key_window_g1

0x13a8,	// (0x00022123) popup_side_volume_key_window_t1

0x13c4,	// (0x0002213f) volume_small_pane_cp1

0x34db,	// (0x00024256) bg_popup_sub_pane_cp24_ParamLimits

0x34db,	// (0x00024256) bg_popup_sub_pane_cp24

0x42a1,	// (0x0002501c) fep_china_uni_candidate_pane_ParamLimits

0x42a1,	// (0x0002501c) fep_china_uni_candidate_pane

0x42b5,	// (0x00025030) fep_china_uni_entry_pane

0x42c5,	// (0x00025040) popup_fep_china_uni_window_g1

0x42e1,	// (0x0002505c) fep_china_uni_entry_pane_g1

0x42e9,	// (0x00025064) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x00030478) fep_china_uni_entry_pane_g

0x42f1,	// (0x0002506c) fep_entry_item_pane

0x42fb,	// (0x00025076) fep_candidate_item_pane

0x4303,	// (0x0002507e) fep_china_uni_candidate_pane_g1

0x430b,	// (0x00025086) fep_china_uni_candidate_pane_g2

0x4313,	// (0x0002508e) fep_china_uni_candidate_pane_g3

0x431b,	// (0x00025096) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0003047d) fep_china_uni_candidate_pane_g

0xea64,	// (0x0002f7df) fep_entry_item_pane_g1

0x4323,	// (0x0002509e) fep_entry_item_pane_t1_ParamLimits

0x4323,	// (0x0002509e) fep_entry_item_pane_t1

0x4339,	// (0x000250b4) fep_candidate_item_pane_t1_ParamLimits

0x4339,	// (0x000250b4) fep_candidate_item_pane_t1

0x434e,	// (0x000250c9) fep_candidate_item_pane_t2_ParamLimits

0x434e,	// (0x000250c9) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x00030486) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x00030486) fep_candidate_item_pane_t

0x3260,	// (0x00023fdb) list_highlight_pane_cp31_ParamLimits

0x3260,	// (0x00023fdb) list_highlight_pane_cp31

0x4360,	// (0x000250db) level_1_signal_lsc

0x4369,	// (0x000250e4) level_2_signal_lsc

0x4372,	// (0x000250ed) level_3_signal_lsc

0x437b,	// (0x000250f6) level_4_signal_lsc

0x4384,	// (0x000250ff) level_5_signal_lsc

0x438d,	// (0x00025108) level_6_signal_lsc

0x4396,	// (0x00025111) level_7_signal_lsc

0x4396,	// (0x00025111) level_1_battery_lsc

0x439f,	// (0x0002511a) level_2_battery_lsc

0x43a8,	// (0x00025123) level_3_battery_lsc

0x43b1,	// (0x0002512c) level_4_battery_lsc

0x43ba,	// (0x00025135) level_5_battery_lsc

0x43c3,	// (0x0002513e) level_6_battery_lsc

0x4360,	// (0x000250db) level_7_battery_lsc

0x43cc,	// (0x00025147) scroll_handle_focus_pane_g1

0x43d5,	// (0x00025150) scroll_handle_focus_pane_g2

0x43de,	// (0x00025159) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0003048b) scroll_handle_focus_pane_g

0xbaba,	// (0x0002c835) list_single_2graphic_pane_g1_ParamLimits

0xbaba,	// (0x0002c835) list_single_2graphic_pane_g1

0xb588,	// (0x0002c303) list_single_2graphic_pane_g2_ParamLimits

0xb588,	// (0x0002c303) list_single_2graphic_pane_g2

0x02f1,	// (0x0002106c) list_single_2graphic_pane_g3_ParamLimits

0x02f1,	// (0x0002106c) list_single_2graphic_pane_g3

0xbac6,	// (0x0002c841) list_single_2graphic_pane_g4_ParamLimits

0xbac6,	// (0x0002c841) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x00030492) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x00030492) list_single_2graphic_pane_g

0xbad7,	// (0x0002c852) list_single_2graphic_pane_t1_ParamLimits

0xbad7,	// (0x0002c852) list_single_2graphic_pane_t1

0xbb05,	// (0x0002c880) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbb05,	// (0x0002c880) list_double2_graphic_large_graphic_pane_g1

0xb5f3,	// (0x0002c36e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb5f3,	// (0x0002c36e) list_double2_graphic_large_graphic_pane_g2

0xb604,	// (0x0002c37f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb604,	// (0x0002c37f) list_double2_graphic_large_graphic_pane_g3

0xbb17,	// (0x0002c892) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbb17,	// (0x0002c892) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0003049b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0003049b) list_double2_graphic_large_graphic_pane_g

0xbb23,	// (0x0002c89e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbb23,	// (0x0002c89e) list_double2_graphic_large_graphic_pane_t1

0xbb39,	// (0x0002c8b4) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbb39,	// (0x0002c8b4) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x000304a4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x000304a4) list_double2_graphic_large_graphic_pane_t

0x4529,	// (0x000252a4) popup_fast_swap_window_ParamLimits

0x4529,	// (0x000252a4) popup_fast_swap_window

0x4545,	// (0x000252c0) popup_side_volume_key_window

0x4561,	// (0x000252dc) stacon_top_pane

0x456b,	// (0x000252e6) status_pane_ParamLimits

0x456b,	// (0x000252e6) status_pane

0xc58a,	// (0x0002d305) status_small_pane

0x3180,	// (0x00023efb) control_pane

0x3180,	// (0x00023efb) stacon_bottom_pane

0x3ad0,	// (0x0002484b) scroll_pane_cp121

0x3ac7,	// (0x00024842) set_content_pane

0x43e7,	// (0x00025162) bg_active_tab_pane_g1_cp1

0x43f0,	// (0x0002516b) bg_active_tab_pane_g2_cp1

0x43f9,	// (0x00025174) bg_active_tab_pane_g3_cp1

0x43e7,	// (0x00025162) bg_passive_tab_pane_g1_cp1

0x43f0,	// (0x0002516b) bg_passive_tab_pane_g2_cp1

0x43f9,	// (0x00025174) bg_passive_tab_pane_g3_cp1

0x4402,	// (0x0002517d) bg_active_tab_pane_g1_cp2

0x43f0,	// (0x0002516b) bg_active_tab_pane_g2_cp2

0x440b,	// (0x00025186) bg_active_tab_pane_g3_cp2

0x4402,	// (0x0002517d) bg_passive_tab_pane_g1_cp2

0x43f0,	// (0x0002516b) bg_passive_tab_pane_g2_cp2

0x440b,	// (0x00025186) bg_passive_tab_pane_g3_cp2

0x4414,	// (0x0002518f) bg_active_tab_pane_g1_cp3

0x43f0,	// (0x0002516b) bg_active_tab_pane_g2_cp3

0x441d,	// (0x00025198) bg_active_tab_pane_g3_cp3

0x4414,	// (0x0002518f) bg_passive_tab_pane_g1_cp3

0x43f0,	// (0x0002516b) bg_passive_tab_pane_g2_cp3

0x441d,	// (0x00025198) bg_passive_tab_pane_g3_cp3

0x4426,	// (0x000251a1) bg_active_tab_pane_g1_cp4

0x43f0,	// (0x0002516b) bg_active_tab_pane_g2_cp4

0x4431,	// (0x000251ac) bg_active_tab_pane_g3_cp4

0x4426,	// (0x000251a1) bg_passive_tab_pane_g1_cp4

0x43f0,	// (0x0002516b) bg_passive_tab_pane_g2_cp4

0x4431,	// (0x000251ac) bg_passive_tab_pane_g3_cp4

0x447a,	// (0x000251f5) bg_active_tab_pane_g1_cp5

0x43f0,	// (0x0002516b) bg_active_tab_pane_g2_cp5

0x4483,	// (0x000251fe) bg_active_tab_pane_g3_cp5

0x447a,	// (0x000251f5) bg_passive_tab_pane_g1_cp5

0x43f0,	// (0x0002516b) bg_passive_tab_pane_g2_cp5

0x4483,	// (0x000251fe) bg_passive_tab_pane_g3_cp5

0x6b6d,	// (0x000278e8) list_set_graphic_pane_ParamLimits

0x6b6d,	// (0x000278e8) list_set_graphic_pane

0x3180,	// (0x00023efb) bg_set_opt_pane_cp4

0x44ac,	// (0x00025227) list_set_graphic_pane_g1_ParamLimits

0x44ac,	// (0x00025227) list_set_graphic_pane_g1

0x44b8,	// (0x00025233) list_set_graphic_pane_g2_ParamLimits

0x44b8,	// (0x00025233) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x000304a9) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x000304a9) list_set_graphic_pane_g

0x0009,

0xfa9e,	// (0x00030819) volume_small_pane_cp_g

0x44dc,	// (0x00025257) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x44dc,	// (0x00025257) list_double2_large_graphic_pane_g1_cp2

0x44e8,	// (0x00025263) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x44e8,	// (0x00025263) list_double2_large_graphic_pane_g2_cp2

0x44f9,	// (0x00025274) list_double2_large_graphic_pane_g3_cp2

0x4501,	// (0x0002527c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4501,	// (0x0002527c) list_double2_large_graphic_pane_t1_cp2

0x4517,	// (0x00025292) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4517,	// (0x00025292) list_double2_large_graphic_pane_t2_cp2

0x610c,	// (0x00026e87) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x610c,	// (0x00026e87) list_double_large_graphic_pane_g1_cp2

0x611d,	// (0x00026e98) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x611d,	// (0x00026e98) list_double_large_graphic_pane_g2_cp2

0x4692,	// (0x0002540d) list_double_large_graphic_pane_g3_cp2

0x612e,	// (0x00026ea9) list_double_large_graphic_pane_g4_cp

0x6136,	// (0x00026eb1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6136,	// (0x00026eb1) list_double_large_graphic_pane_t1_cp2

0x614d,	// (0x00026ec8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x614d,	// (0x00026ec8) list_double_large_graphic_pane_t2_cp2

0x4584,	// (0x000252ff) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4584,	// (0x000252ff) list_double2_graphic_pane_g1_cp2

0x4592,	// (0x0002530d) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4592,	// (0x0002530d) list_double2_graphic_pane_g2_cp2

0x45a3,	// (0x0002531e) list_double2_graphic_pane_g3_cp2

0x45ad,	// (0x00025328) list_double2_graphic_pane_t1_cp2_ParamLimits

0x45ad,	// (0x00025328) list_double2_graphic_pane_t1_cp2

0x45c3,	// (0x0002533e) list_double2_graphic_pane_t2_cp2_ParamLimits

0x45c3,	// (0x0002533e) list_double2_graphic_pane_t2_cp2

0x45d5,	// (0x00025350) list_single_number_heading_pane_g1_cp2_ParamLimits

0x45d5,	// (0x00025350) list_single_number_heading_pane_g1_cp2

0x45e1,	// (0x0002535c) list_single_number_heading_pane_g2_cp2

0x45e9,	// (0x00025364) list_single_number_heading_pane_t1_cp2_ParamLimits

0x45e9,	// (0x00025364) list_single_number_heading_pane_t1_cp2

0x45ff,	// (0x0002537a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x45ff,	// (0x0002537a) list_single_number_heading_pane_t2_cp2

0x4611,	// (0x0002538c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4611,	// (0x0002538c) list_single_number_heading_pane_t3_cp2

0x45d5,	// (0x00025350) list_single_heading_pane_g1_cp2_ParamLimits

0x45d5,	// (0x00025350) list_single_heading_pane_g1_cp2

0x45e1,	// (0x0002535c) list_single_heading_pane_g2_cp2

0x45e9,	// (0x00025364) list_single_heading_pane_t1_cp2_ParamLimits

0x45e9,	// (0x00025364) list_single_heading_pane_t1_cp2

0x5f14,	// (0x00026c8f) list_single_heading_pane_t2_cp2_ParamLimits

0x5f14,	// (0x00026c8f) list_single_heading_pane_t2_cp2

0x5e5c,	// (0x00026bd7) list_double_graphic_pane_g1_cp2_ParamLimits

0x5e5c,	// (0x00026bd7) list_double_graphic_pane_g1_cp2

0x5e68,	// (0x00026be3) list_double_graphic_pane_g2_cp2_ParamLimits

0x5e68,	// (0x00026be3) list_double_graphic_pane_g2_cp2

0x5e77,	// (0x00026bf2) list_double_graphic_pane_g3_cp2

0x5e7f,	// (0x00026bfa) list_double_graphic_pane_t1_cp2_ParamLimits

0x5e7f,	// (0x00026bfa) list_double_graphic_pane_t1_cp2

0x5e95,	// (0x00026c10) list_double_graphic_pane_t2_cp2_ParamLimits

0x5e95,	// (0x00026c10) list_double_graphic_pane_t2_cp2

0x4686,	// (0x00025401) list_double_number_pane_g1_cp2_ParamLimits

0x4686,	// (0x00025401) list_double_number_pane_g1_cp2

0x4692,	// (0x0002540d) list_double_number_pane_g2_cp2

0x5e20,	// (0x00026b9b) list_double_number_pane_t1_cp2_ParamLimits

0x5e20,	// (0x00026b9b) list_double_number_pane_t1_cp2

0x5e34,	// (0x00026baf) list_double_number_pane_t2_cp2_ParamLimits

0x5e34,	// (0x00026baf) list_double_number_pane_t2_cp2

0x5e4a,	// (0x00026bc5) list_double_number_pane_t3_cp2_ParamLimits

0x5e4a,	// (0x00026bc5) list_double_number_pane_t3_cp2

0x5d09,	// (0x00026a84) list_single_graphic_pane_g1_cp2_ParamLimits

0x5d09,	// (0x00026a84) list_single_graphic_pane_g1_cp2

0x46f3,	// (0x0002546e) list_single_graphic_pane_g2_cp2_ParamLimits

0x46f3,	// (0x0002546e) list_single_graphic_pane_g2_cp2

0x46ff,	// (0x0002547a) list_single_graphic_pane_g3_cp2

0x5cdf,	// (0x00026a5a) list_single_graphic_pane_t1_cp2_ParamLimits

0x5cdf,	// (0x00026a5a) list_single_graphic_pane_t1_cp2

0x46f3,	// (0x0002546e) list_single_number_pane_g1_cp2_ParamLimits

0x46f3,	// (0x0002546e) list_single_number_pane_g1_cp2

0x46ff,	// (0x0002547a) list_single_number_pane_g2_cp2

0x5cdf,	// (0x00026a5a) list_single_number_pane_t1_cp2_ParamLimits

0x5cdf,	// (0x00026a5a) list_single_number_pane_t1_cp2

0x5cf5,	// (0x00026a70) list_single_number_pane_t2_cp2_ParamLimits

0x5cf5,	// (0x00026a70) list_single_number_pane_t2_cp2

0x44e8,	// (0x00025263) list_double2_pane_g1_cp2_ParamLimits

0x44e8,	// (0x00025263) list_double2_pane_g1_cp2

0x44f9,	// (0x00025274) list_double2_pane_g2_cp2

0x465e,	// (0x000253d9) list_double2_pane_t1_cp2_ParamLimits

0x465e,	// (0x000253d9) list_double2_pane_t1_cp2

0x4674,	// (0x000253ef) list_double2_pane_t2_cp2_ParamLimits

0x4674,	// (0x000253ef) list_double2_pane_t2_cp2

0x4686,	// (0x00025401) list_double_pane_g1_cp2_ParamLimits

0x4686,	// (0x00025401) list_double_pane_g1_cp2

0x4692,	// (0x0002540d) list_double_pane_g2_cp2

0x469a,	// (0x00025415) list_double_pane_t1_cp2_ParamLimits

0x469a,	// (0x00025415) list_double_pane_t1_cp2

0x46b0,	// (0x0002542b) list_double_pane_t2_cp2_ParamLimits

0x46b0,	// (0x0002542b) list_double_pane_t2_cp2

0x46e3,	// (0x0002545e) list_single_pane_cp2_g3

0x46f3,	// (0x0002546e) list_single_pane_g1_cp2_ParamLimits

0x46f3,	// (0x0002546e) list_single_pane_g1_cp2

0x46ff,	// (0x0002547a) list_single_pane_g2_cp2

0x4707,	// (0x00025482) list_single_pane_t1_cp2_ParamLimits

0x4707,	// (0x00025482) list_single_pane_t1_cp2

0x471f,	// (0x0002549a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x471f,	// (0x0002549a) list_single_large_graphic_pane_g1_cp2

0x472b,	// (0x000254a6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x472b,	// (0x000254a6) list_single_large_graphic_pane_g2_cp2

0x4737,	// (0x000254b2) list_single_large_graphic_pane_g3_cp2

0x473f,	// (0x000254ba) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x473f,	// (0x000254ba) list_single_large_graphic_pane_g4_cp1

0x4759,	// (0x000254d4) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4759,	// (0x000254d4) list_single_large_graphic_pane_t1_cp2

0x5cab,	// (0x00026a26) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5cab,	// (0x00026a26) list_single_graphic_heading_pane_g1_cp2

0x5c78,	// (0x000269f3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5c78,	// (0x000269f3) list_single_graphic_heading_pane_g4_cp2

0x46ff,	// (0x0002547a) list_single_graphic_heading_pane_g5_cp2

0x5cb7,	// (0x00026a32) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5cb7,	// (0x00026a32) list_single_graphic_heading_pane_t1_cp2

0x5ccd,	// (0x00026a48) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5ccd,	// (0x00026a48) list_single_graphic_heading_pane_t2_cp2

0x5c6c,	// (0x000269e7) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5c6c,	// (0x000269e7) list_single_2graphic_pane_g1_cp2

0x5c78,	// (0x000269f3) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5c78,	// (0x000269f3) list_single_2graphic_pane_g2_cp2

0x46ff,	// (0x0002547a) list_single_2graphic_pane_g3_cp2

0x5c89,	// (0x00026a04) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5c89,	// (0x00026a04) list_single_2graphic_pane_g4_cp2

0x5c95,	// (0x00026a10) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5c95,	// (0x00026a10) list_single_2graphic_pane_t1_cp2

0xea64,	// (0x0002f7df) list_highlight_pane_g10_cp1

0x5844,	// (0x000265bf) list_highlight_pane_g1_cp1

0x584c,	// (0x000265c7) list_highlight_pane_g2_cp1

0x5854,	// (0x000265cf) list_highlight_pane_g3_cp1

0x585c,	// (0x000265d7) list_highlight_pane_g4_cp1

0x5864,	// (0x000265df) list_highlight_pane_g5_cp1

0x586c,	// (0x000265e7) list_highlight_pane_g6_cp1

0x5874,	// (0x000265ef) list_highlight_pane_g7_cp1

0x587c,	// (0x000265f7) list_highlight_pane_g8_cp1

0x5884,	// (0x000265ff) list_highlight_pane_g9_cp1

0xdadb,	// (0x0002e856) form_field_slider_pane_t3

0xdae9,	// (0x0002e864) form_field_slider_pane_t4

0x5780,	// (0x000264fb) slider_form_pane_ParamLimits

0x5780,	// (0x000264fb) slider_form_pane

0x3180,	// (0x00023efb) control_abbreviations

0x3180,	// (0x00023efb) control_conventions

0x3180,	// (0x00023efb) control_definitions

0x3180,	// (0x00023efb) format_table_attribute

0x5f5e,	// (0x00026cd9) bg_popup_preview_window_pane_g9

0x3180,	// (0x00023efb) format_table_data2

0x3180,	// (0x00023efb) format_table_data3

0x3180,	// (0x00023efb) format_table_data_example

0x0008,

0x3180,	// (0x00023efb) intro_purpose

0xf8c5,	// (0x00030640) bg_popup_preview_window_pane_g

0x3180,	// (0x00023efb) texts_category

0x3180,	// (0x00023efb) texts_graphics

0x476f,	// (0x000254ea) text_digital

0x477e,	// (0x000254f9) text_primary

0x478d,	// (0x00025508) text_primary_small

0x479c,	// (0x00025517) text_secondary

0x47ab,	// (0x00025526) text_title

0x66a1,	// (0x0002741c) bg_passive_tab_pane_g1_cp3_srt

0x43f0,	// (0x0002516b) bg_passive_tab_pane_g2_cp3_srt

0x66aa,	// (0x00027425) bg_passive_tab_pane_g3_cp3_srt

0x34db,	// (0x00024256) bg_active_tab_pane_cp3_srt_ParamLimits

0x34db,	// (0x00024256) bg_active_tab_pane_cp3_srt

0x66b3,	// (0x0002742e) tabs_4_active_pane_srt_g1

0xde2d,	// (0x0002eba8) tabs_4_active_pane_srt_t1_ParamLimits

0xde2d,	// (0x0002eba8) tabs_4_active_pane_srt_t1

0x66a1,	// (0x0002741c) bg_active_tab_pane_g1_cp3_copy1

0x43f0,	// (0x0002516b) bg_active_tab_pane_g2_cp3_copy1

0x66aa,	// (0x00027425) bg_active_tab_pane_g3_cp3_copy1

0x3260,	// (0x00023fdb) tabs_2_long_active_pane_srt_ParamLimits

0x3260,	// (0x00023fdb) tabs_2_long_active_pane_srt

0x3260,	// (0x00023fdb) tabs_2_long_passive_pane_srt_ParamLimits

0x3260,	// (0x00023fdb) tabs_2_long_passive_pane_srt

0x4ade,	// (0x00025859) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4ade,	// (0x00025859) bg_passive_tab_pane_cp4_srt

0x638c,	// (0x00027107) bg_passive_tab_pane_g1_cp4_srt

0x43f0,	// (0x0002516b) bg_passive_tab_pane_g2_cp4_srt

0x6395,	// (0x00027110) bg_passive_tab_pane_g3_cp4_srt

0x3260,	// (0x00023fdb) bg_active_tab_pane_cp4_srt_ParamLimits

0x3260,	// (0x00023fdb) bg_active_tab_pane_cp4_srt

0xdc46,	// (0x0002e9c1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdc46,	// (0x0002e9c1) tabs_2_long_active_pane_srt_t1

0x638c,	// (0x00027107) bg_active_tab_pane_g1_cp4_srt

0x43f0,	// (0x0002516b) bg_active_tab_pane_g2_cp4_srt

0x6395,	// (0x00027110) bg_active_tab_pane_g3_cp4_srt

0x34db,	// (0x00024256) tabs_3_long_active_pane_srt_ParamLimits

0x34db,	// (0x00024256) tabs_3_long_active_pane_srt

0x34db,	// (0x00024256) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x34db,	// (0x00024256) tabs_3_long_passive_pane_cp_srt

0x34db,	// (0x00024256) tabs_3_long_passive_pane_srt_ParamLimits

0x34db,	// (0x00024256) tabs_3_long_passive_pane_srt

0x4ade,	// (0x00025859) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4ade,	// (0x00025859) bg_passive_tab_pane_cp5_srt

0x447a,	// (0x000251f5) bg_passive_tab_pane_g1_cp5_srt

0x43f0,	// (0x0002516b) bg_passive_tab_pane_g2_cp5_srt

0x4483,	// (0x000251fe) bg_passive_tab_pane_g3_cp5_srt

0x3260,	// (0x00023fdb) bg_active_tab_pane_cp5_srt_ParamLimits

0x3260,	// (0x00023fdb) bg_active_tab_pane_cp5_srt

0xdc30,	// (0x0002e9ab) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdc30,	// (0x0002e9ab) tabs_3_long_active_pane_srt_t1

0x447a,	// (0x000251f5) bg_active_tab_pane_g1_cp5_srt

0x43f0,	// (0x0002516b) bg_active_tab_pane_g2_cp5_srt

0x4483,	// (0x000251fe) bg_active_tab_pane_g3_cp5_srt

0x636c,	// (0x000270e7) navi_text_pane_srt_t1

0x6364,	// (0x000270df) navi_icon_pane_srt_g1

0x4980,	// (0x000256fb) midp_editing_number_pane_srt

0x47ba,	// (0x00025535) midp_ticker_pane_srt

0x4988,	// (0x00025703) midp_ticker_pane_srt_g1

0x4990,	// (0x0002570b) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x000304c8) midp_ticker_pane_srt_g

0x4998,	// (0x00025713) midp_ticker_pane_srt_t1

0x6355,	// (0x000270d0) midp_editing_number_pane_t1_copy1

0xc595,	// (0x0002d310) listscroll_midp_pane

0xc595,	// (0x0002d310) midp_form_pane

0x4832,	// (0x000255ad) midp_info_popup_window_ParamLimits

0x4832,	// (0x000255ad) midp_info_popup_window

0x3c0c,	// (0x00024987) bg_popup_sub_pane_cp50_ParamLimits

0x3c0c,	// (0x00024987) bg_popup_sub_pane_cp50

0x5468,	// (0x000261e3) listscroll_midp_info_pane_ParamLimits

0x5468,	// (0x000261e3) listscroll_midp_info_pane

0x5448,	// (0x000261c3) listscroll_form_midp_pane_ParamLimits

0x5448,	// (0x000261c3) listscroll_form_midp_pane

0x5454,	// (0x000261cf) scroll_bar_cp050

0x5448,	// (0x000261c3) list_midp_pane

0x711c,	// (0x00027e97) signal_pane_g2_cp

0x5362,	// (0x000260dd) listscroll_midp_info_pane_t1_ParamLimits

0x5362,	// (0x000260dd) listscroll_midp_info_pane_t1

0x537a,	// (0x000260f5) listscroll_midp_info_pane_t2_ParamLimits

0x537a,	// (0x000260f5) listscroll_midp_info_pane_t2

0x53b8,	// (0x00026133) listscroll_midp_info_pane_t3_ParamLimits

0x53b8,	// (0x00026133) listscroll_midp_info_pane_t3

0x53f2,	// (0x0002616d) listscroll_midp_info_pane_t4_ParamLimits

0x53f2,	// (0x0002616d) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x0003057b) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x0003057b) listscroll_midp_info_pane_t

0x3c6d,	// (0x000249e8) scroll_pane_cp21

0x5300,	// (0x0002607b) form_midp_field_choice_group_pane

0x5309,	// (0x00026084) form_midp_field_text_pane

0x5348,	// (0x000260c3) form_midp_field_time_pane

0x5350,	// (0x000260cb) form_midp_gauge_slider_pane

0x5359,	// (0x000260d4) form_midp_gauge_wait_pane

0x3180,	// (0x00023efb) form_midp_image_pane

0xbb67,	// (0x0002c8e2) list_single_midp_pane_ParamLimits

0xbb67,	// (0x0002c8e2) list_single_midp_pane

0xdaba,	// (0x0002e835) form_midp_field_text_pane_t1

0x5088,	// (0x00025e03) input_focus_pane_cp050

0x52ef,	// (0x0002606a) list_midp_form_text_pane

0x5287,	// (0x00026002) form_midp_field_choice_group_pane_t1

0x5295,	// (0x00026010) input_focus_pane_cp051

0x52a9,	// (0x00026024) list_midp_choice_pane

0x3180,	// (0x00023efb) status_idle_pane

0x526b,	// (0x00025fe6) form_midp_field_time_pane_t1

0xea64,	// (0x0002f7df) wait_anim_pane_g2_copy1

0x5279,	// (0x00025ff4) form_midp_field_time_pane_t2

0x0001,

0x48e0,	// (0x0002565b) aid_navinavi_width_2_pane

0xf7fb,	// (0x00030576) form_midp_field_time_pane_t

0x3180,	// (0x00023efb) input_focus_pane_cp052

0x3180,	// (0x00023efb) bg_input_focus_pane_cp040

0x522b,	// (0x00025fa6) form_midp_gauge_slider_pane_t1

0x5239,	// (0x00025fb4) form_midp_gauge_slider_pane_t2

0xda9e,	// (0x0002e819) form_midp_gauge_slider_pane_t3

0xdaac,	// (0x0002e827) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x0003056d) form_midp_gauge_slider_pane_t

0x5263,	// (0x00025fde) form_midp_slider_pane

0x3260,	// (0x00023fdb) bg_input_focus_pane_cp041_ParamLimits

0x3260,	// (0x00023fdb) bg_input_focus_pane_cp041

0x51f8,	// (0x00025f73) form_midp_gauge_wait_pane_t1_ParamLimits

0x51f8,	// (0x00025f73) form_midp_gauge_wait_pane_t1

0x520a,	// (0x00025f85) form_midp_gauge_wait_pane_t2_ParamLimits

0x520a,	// (0x00025f85) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x00030568) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x00030568) form_midp_gauge_wait_pane_t

0x521c,	// (0x00025f97) form_midp_wait_pane_ParamLimits

0x521c,	// (0x00025f97) form_midp_wait_pane

0x51c2,	// (0x00025f3d) form_midp_image_pane_g1

0x51cb,	// (0x00025f46) form_midp_image_pane_t1

0x51da,	// (0x00025f55) form_midp_image_pane_t2

0x51e9,	// (0x00025f64) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x00030561) form_midp_image_pane_t

0x51b9,	// (0x00025f34) list_single_midp_pane_g1

0x040f,	// (0x0002118a) list_single_midp_pane_t1

0xda8a,	// (0x0002e805) list_midp_form_item_pane_ParamLimits

0xda8a,	// (0x0002e805) list_midp_form_item_pane

0x4888,	// (0x00025603) list_midp_form_item_pane_t1

0x4897,	// (0x00025612) midp_ticker_pane_g1

0x48a3,	// (0x0002561e) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x000304ae) midp_ticker_pane_g

0x48af,	// (0x0002562a) midp_ticker_pane_t1

0x65a6,	// (0x00027321) midp_editing_number_pane_t1

0x6584,	// (0x000272ff) midp_editing_number_pane

0x6593,	// (0x0002730e) midp_ticker_pane

0x6345,	// (0x000270c0) ai_message_heading_pane

0x3180,	// (0x00023efb) bg_popup_window_pane_cp14

0x634d,	// (0x000270c8) listscroll_ai_message_pane

0x62cf,	// (0x0002704a) ai_message_heading_pane_g1_ParamLimits

0x62cf,	// (0x0002704a) ai_message_heading_pane_g1

0x62db,	// (0x00027056) ai_message_heading_pane_g2_ParamLimits

0x62db,	// (0x00027056) ai_message_heading_pane_g2

0x62e7,	// (0x00027062) ai_message_heading_pane_g3_ParamLimits

0x62e7,	// (0x00027062) ai_message_heading_pane_g3

0x62f3,	// (0x0002706e) ai_message_heading_pane_g4_ParamLimits

0x62f3,	// (0x0002706e) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x000306a2) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x000306a2) ai_message_heading_pane_g

0x62ff,	// (0x0002707a) ai_message_heading_pane_t1_ParamLimits

0x62ff,	// (0x0002707a) ai_message_heading_pane_t1

0x6319,	// (0x00027094) ai_message_heading_pane_t2_ParamLimits

0x6319,	// (0x00027094) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x000306ab) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x000306ab) ai_message_heading_pane_t

0x632b,	// (0x000270a6) bg_popup_heading_pane_cp1_ParamLimits

0x632b,	// (0x000270a6) bg_popup_heading_pane_cp1

0x62bd,	// (0x00027038) list_ai_message_pane_ParamLimits

0x62bd,	// (0x00027038) list_ai_message_pane

0x3c6d,	// (0x000249e8) scroll_pane_cp10

0x6259,	// (0x00026fd4) list_ai_message_pane_g1

0x6261,	// (0x00026fdc) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x0003067f) list_ai_message_pane_g

0x6269,	// (0x00026fe4) list_ai_message_pane_t1_ParamLimits

0x6269,	// (0x00026fe4) list_ai_message_pane_t1

0x627e,	// (0x00026ff9) list_ai_message_pane_t2_ParamLimits

0x627e,	// (0x00026ff9) list_ai_message_pane_t2

0x6293,	// (0x0002700e) list_ai_message_pane_t3_ParamLimits

0x6293,	// (0x0002700e) list_ai_message_pane_t3

0x62a8,	// (0x00027023) list_ai_message_pane_t4_ParamLimits

0x62a8,	// (0x00027023) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x00030684) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x00030684) list_ai_message_pane_t

0xdc0f,	// (0x0002e98a) cell_ai_soft_ind_pane_ParamLimits

0xdc0f,	// (0x0002e98a) cell_ai_soft_ind_pane

0x48c1,	// (0x0002563c) cell_ai_soft_ind_pane_g1_ParamLimits

0x48c1,	// (0x0002563c) cell_ai_soft_ind_pane_g1

0x3180,	// (0x00023efb) grid_highlight_cp1

0x48ce,	// (0x00025649) text_secondary_cp56_ParamLimits

0x48ce,	// (0x00025649) text_secondary_cp56

0x6219,	// (0x00026f94) example_general_pane_ParamLimits

0x6219,	// (0x00026f94) example_general_pane

0x6225,	// (0x00026fa0) example_parent_pane_g1_ParamLimits

0x6225,	// (0x00026fa0) example_parent_pane_g1

0x6231,	// (0x00026fac) example_parent_pane_t1_ParamLimits

0x6231,	// (0x00026fac) example_parent_pane_t1

0xcb47,	// (0x0002d8c2) popup_preview_text_window_ParamLimits

0xcb47,	// (0x0002d8c2) popup_preview_text_window

0x46eb,	// (0x00025466) list_single_pane_cp2_g4

0x35b7,	// (0x00024332) bg_popup_preview_window_pane_ParamLimits

0x35b7,	// (0x00024332) bg_popup_preview_window_pane

0x5f66,	// (0x00026ce1) popup_preview_text_window_t1_ParamLimits

0x5f66,	// (0x00026ce1) popup_preview_text_window_t1

0x5f84,	// (0x00026cff) popup_preview_text_window_t2_ParamLimits

0x5f84,	// (0x00026cff) popup_preview_text_window_t2

0x5fcd,	// (0x00026d48) popup_preview_text_window_t3_ParamLimits

0x5fcd,	// (0x00026d48) popup_preview_text_window_t3

0x6012,	// (0x00026d8d) popup_preview_text_window_t4_ParamLimits

0x6012,	// (0x00026d8d) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x00030653) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x00030653) popup_preview_text_window_t

0x6090,	// (0x00026e0b) scroll_pane_cp11

0x5008,	// (0x00025d83) bg_popup_preview_window_pane_g1

0x5f26,	// (0x00026ca1) bg_popup_preview_window_pane_g2

0x5f2e,	// (0x00026ca9) bg_popup_preview_window_pane_g3

0x5f36,	// (0x00026cb1) bg_popup_preview_window_pane_g4

0x5f3e,	// (0x00026cb9) bg_popup_preview_window_pane_g5

0x5f46,	// (0x00026cc1) bg_popup_preview_window_pane_g6

0x5f4e,	// (0x00026cc9) bg_popup_preview_window_pane_g7

0x5f56,	// (0x00026cd1) bg_popup_preview_window_pane_g8

0x0cbb,	// (0x00021a36) aid_popup_width_pane

0xcac3,	// (0x0002d83e) popup_midp_note_alarm_window_ParamLimits

0xcac3,	// (0x0002d83e) popup_midp_note_alarm_window

0x3ae1,	// (0x0002485c) data_form_pane_ParamLimits

0xb999,	// (0x0002c714) form_field_data_pane_g1

0xb9a3,	// (0x0002c71e) form_field_data_pane_t1_ParamLimits

0x3aed,	// (0x00024868) input_focus_pane_ParamLimits

0x008e,	// (0x00020e09) data_form_wide_pane_ParamLimits

0x009f,	// (0x00020e1a) form_field_data_wide_pane_g1

0x00ab,	// (0x00020e26) form_field_data_wide_pane_t1_ParamLimits

0x385e,	// (0x000245d9) input_focus_pane_cp6_ParamLimits

0xc3d9,	// (0x0002d154) input_popup_find_pane_g1_ParamLimits

0xc3d9,	// (0x0002d154) input_popup_find_pane_g1

0x122d,	// (0x00021fa8) aid_navi_side_left_pane

0x1242,	// (0x00021fbd) aid_navi_side_right_pane

0x593f,	// (0x000266ba) bg_popup_window_pane_cp30_ParamLimits

0x593f,	// (0x000266ba) bg_popup_window_pane_cp30

0x59b9,	// (0x00026734) popup_midp_note_alarm_window_g1_ParamLimits

0x59b9,	// (0x00026734) popup_midp_note_alarm_window_g1

0x59e9,	// (0x00026764) popup_midp_note_alarm_window_t1_ParamLimits

0x59e9,	// (0x00026764) popup_midp_note_alarm_window_t1

0x5a8a,	// (0x00026805) popup_midp_note_alarm_window_t2_ParamLimits

0x5a8a,	// (0x00026805) popup_midp_note_alarm_window_t2

0x5b38,	// (0x000268b3) popup_midp_note_alarm_window_t3_ParamLimits

0x5b38,	// (0x000268b3) popup_midp_note_alarm_window_t3

0x5b6a,	// (0x000268e5) popup_midp_note_alarm_window_t4_ParamLimits

0x5b6a,	// (0x000268e5) popup_midp_note_alarm_window_t4

0x5b90,	// (0x0002690b) popup_midp_note_alarm_window_t5_ParamLimits

0x5b90,	// (0x0002690b) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x000305f0) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x000305f0) popup_midp_note_alarm_window_t

0x5c3c,	// (0x000269b7) wait_bar_pane_cp1_ParamLimits

0x5c3c,	// (0x000269b7) wait_bar_pane_cp1

0x3180,	// (0x00023efb) wait_anim_pane_copy1

0x3180,	// (0x00023efb) wait_border_pane_copy1

0x5625,	// (0x000263a0) wait_border_pane_g1_copy1

0x00c5,	// (0x00020e40) form_field_popup_pane_g1

0xb9bd,	// (0x0002c738) form_field_popup_pane_t1_ParamLimits

0x3aed,	// (0x00024868) input_focus_pane_cp7_ParamLimits

0x3b1b,	// (0x00024896) list_form_pane_ParamLimits

0x00e5,	// (0x00020e60) form_field_popup_wide_pane_g1

0x00ed,	// (0x00020e68) form_field_popup_wide_pane_t1_ParamLimits

0x3aed,	// (0x00024868) input_focus_pane_cp8_ParamLimits

0x3b27,	// (0x000248a2) list_form_wide_pane_ParamLimits

0x6743,	// (0x000274be) aid_size_cell_graphic_pane

0xba3c,	// (0x0002c7b7) data_form_pane_t1_ParamLimits

0xbb90,	// (0x0002c90b) data_form_wide_pane_t1_ParamLimits

0xd70f,	// (0x0002e48a) bg_status_flat_pane

0xc044,	// (0x0002cdbf) title_pane_t1_ParamLimits

0x3228,	// (0x00023fa3) title_pane_t2_ParamLimits

0x324e,	// (0x00023fc9) title_pane_t3_ParamLimits

0xf532,	// (0x000302ad) title_pane_t_ParamLimits

0x40ee,	// (0x00024e69) level_1_signal_ParamLimits

0x4100,	// (0x00024e7b) level_2_signal_ParamLimits

0x4113,	// (0x00024e8e) level_3_signal_ParamLimits

0x4126,	// (0x00024ea1) level_4_signal_ParamLimits

0x4139,	// (0x00024eb4) level_5_signal_ParamLimits

0x414c,	// (0x00024ec7) level_6_signal_ParamLimits

0x415f,	// (0x00024eda) level_7_signal_ParamLimits

0x40ee,	// (0x00024e69) level_1_battery_ParamLimits

0x4100,	// (0x00024e7b) level_2_battery_ParamLimits

0x4113,	// (0x00024e8e) level_3_battery_ParamLimits

0x4126,	// (0x00024ea1) level_4_battery_ParamLimits

0x4139,	// (0x00024eb4) level_5_battery_ParamLimits

0x414c,	// (0x00024ec7) level_6_battery_ParamLimits

0x415f,	// (0x00024eda) level_7_battery_ParamLimits

0x5844,	// (0x000265bf) bg_status_flat_pane_g1

0x584c,	// (0x000265c7) bg_status_flat_pane_g2

0x5854,	// (0x000265cf) bg_status_flat_pane_g3

0x585c,	// (0x000265d7) bg_status_flat_pane_g4

0x5864,	// (0x000265df) bg_status_flat_pane_g5

0x586c,	// (0x000265e7) bg_status_flat_pane_g6

0x5874,	// (0x000265ef) bg_status_flat_pane_g7

0xc0d0,	// (0x0002ce4b) tabs_3_active_pane_t1_ParamLimits

0xc0d0,	// (0x0002ce4b) tabs_3_passive_pane_t1_ParamLimits

0xc0e2,	// (0x0002ce5d) tabs_4_active_pane_t1_ParamLimits

0xc0e2,	// (0x0002ce5d) tabs_4_1_passive_pane_t1_ParamLimits

0xc3e7,	// (0x0002d162) tabs_2_active_pane_t1_ParamLimits

0xc3e7,	// (0x0002d162) tabs_2_passive_pane_t1_ParamLimits

0x3260,	// (0x00023fdb) bg_active_tab_pane_cp4_ParamLimits

0xc3f9,	// (0x0002d174) tabs_2_long_active_pane_t1_ParamLimits

0x4ade,	// (0x00025859) bg_passive_tab_pane_cp4_ParamLimits

0x1d54,	// (0x00022acf) list_single_midp_graphic_pane_t1_ParamLimits

0x3260,	// (0x00023fdb) bg_active_tab_pane_cp5_ParamLimits

0xc40c,	// (0x0002d187) tabs_3_long_active_pane_t1_ParamLimits

0x4ade,	// (0x00025859) bg_passive_tab_pane_cp5_ParamLimits

0x1d54,	// (0x00022acf) list_single_midp_graphic_pane_t1

0xd70f,	// (0x0002e48a) bg_status_flat_pane_ParamLimits

0x4c98,	// (0x00025a13) indicator_pane_cp2_ParamLimits

0x4c98,	// (0x00025a13) indicator_pane_cp2

0xd88d,	// (0x0002e608) navi_pane_srt_ParamLimits

0xd88d,	// (0x0002e608) navi_pane_srt

0x4de7,	// (0x00025b62) popup_clock_digital_analogue_window_cp1

0x333d,	// (0x000240b8) indicator_pane_t1

0x47ba,	// (0x00025535) copy_highlight_pane

0x47ba,	// (0x00025535) cursor_graphics_pane

0x47ba,	// (0x00025535) graphic_within_text_pane

0x47ba,	// (0x00025535) link_highlight_pane

0x6053,	// (0x00026dce) popup_preview_text_window_t5_ParamLimits

0x6053,	// (0x00026dce) popup_preview_text_window_t5

0x48e8,	// (0x00025663) cursor_digital_pane

0x48e8,	// (0x00025663) cursor_primary_pane

0x48f9,	// (0x00025674) cursor_primary_small_pane

0x4901,	// (0x0002567c) cursor_secondary_pane

0x4909,	// (0x00025684) cursor_title_pane

0x48e8,	// (0x00025663) link_highlight_digital_pane

0x48f0,	// (0x0002566b) link_highlight_primary_pane

0x48f9,	// (0x00025674) link_highlight_primary_small_pane

0x4901,	// (0x0002567c) link_highlight_secondary_pane

0x4909,	// (0x00025684) link_highlight_title_pane

0x48e8,	// (0x00025663) copy_highlight_digital_pane

0x48e8,	// (0x00025663) copy_highlight_primary_pane

0x48f9,	// (0x00025674) copy_highlight_primary_small_pane

0x4901,	// (0x0002567c) copy_highlight_secondary_pane

0x4909,	// (0x00025684) copy_highlight_title_pane

0x4901,	// (0x0002567c) graphic_text_digital_pane

0x58e2,	// (0x0002665d) graphic_text_primary_pane

0x58eb,	// (0x00026666) graphic_text_primary_small_pane

0x48f9,	// (0x00025674) graphic_text_secondary_pane

0x48e8,	// (0x00025663) graphic_text_title_pane

0xd553,	// (0x0002e2ce) cursor_primary_pane_g1

0x58d4,	// (0x0002664f) cursor_text_primary_t1

0xdb0b,	// (0x0002e886) cursor_primary_small_pane_g1

0x58c6,	// (0x00026641) cursor_text_primary_small_t1

0xdb01,	// (0x0002e87c) cursor_primary_small_pane_g1_copy1

0x58ae,	// (0x00026629) cursor_text_primary_small_t1_copy1

0x588c,	// (0x00026607) cursor_text_title_t1

0xdaf7,	// (0x0002e872) cursor_title_pane_g1

0xd553,	// (0x0002e2ce) cursor_digital_pane_g1

0x491b,	// (0x00025696) cursor_text_digital_t1

0x4940,	// (0x000256bb) link_highlight_primary_pane_g1

0x5835,	// (0x000265b0) link_highlight_primary_pane_t1

0x4929,	// (0x000256a4) link_highlight_primary_small_pane_g1

0x4931,	// (0x000256ac) link_highlight_primary_small_pane_t1

0x4940,	// (0x000256bb) link_highlight_secondary_pane_g1

0x4948,	// (0x000256c3) link_highlight_secondary_pane_t1

0x57a9,	// (0x00026524) link_highlight_title_pane_g1

0x57b1,	// (0x0002652c) link_highlight_title_pane_t1

0x5792,	// (0x0002650d) link_highlight_digital_pane_g1

0x579a,	// (0x00026515) link_highlight_digital_pane_t1

0x566a,	// (0x000263e5) copy_highlight_primary_pane_g1

0x5672,	// (0x000263ed) copy_highlight_primary_pane_t1

0x5644,	// (0x000263bf) copy_highlight_primary_small_pane_g1

0x565b,	// (0x000263d6) copy_highlight_primary_small_pane_t1

0x4957,	// (0x000256d2) copy_highlight_secondary_pane_g1

0x495f,	// (0x000256da) copy_highlight_secondary_pane_t1

0x5644,	// (0x000263bf) copy_highlight_title_pane_g1

0x564c,	// (0x000263c7) copy_highlight_title_pane_t1

0x566a,	// (0x000263e5) copy_highlight_digital_pane_g1

0x6911,	// (0x0002768c) copy_highlight_digital_pane_t1

0x6865,	// (0x000275e0) graphic_text_primary_pane_g1

0x68f5,	// (0x00027670) graphic_text_primary_pane_t1

0x6903,	// (0x0002767e) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x0003071f) graphic_text_primary_pane_t

0x68d1,	// (0x0002764c) graphic_text_primary_small_pane_g1

0x68d9,	// (0x00027654) graphic_text_primary_small_pane_t1

0x68e7,	// (0x00027662) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x0003071a) graphic_text_primary_small_pane_t

0x68ad,	// (0x00027628) graphic_text_secondary_pane_g1

0x68b5,	// (0x00027630) graphic_text_secondary_pane_t1

0x68c3,	// (0x0002763e) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x00030715) graphic_text_secondary_pane_t

0x6889,	// (0x00027604) graphic_text_title_pane_g1

0x6891,	// (0x0002760c) graphic_text_title_pane_t1

0x689f,	// (0x0002761a) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00030710) graphic_text_title_pane_t

0x6865,	// (0x000275e0) graphic_text_digital_pane_g1

0x686d,	// (0x000275e8) graphic_text_digital_pane_t1

0x687b,	// (0x000275f6) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x0003070b) graphic_text_digital_pane_t

0x3260,	// (0x00023fdb) navi_icon_pane_srt_ParamLimits

0x3260,	// (0x00023fdb) navi_icon_pane_srt

0x3180,	// (0x00023efb) navi_midp_pane_srt

0x3180,	// (0x00023efb) navi_navi_pane_srt

0x3260,	// (0x00023fdb) navi_text_pane_srt_ParamLimits

0x3260,	// (0x00023fdb) navi_text_pane_srt

0x6830,	// (0x000275ab) navi_navi_icon_text_pane_srt

0x6838,	// (0x000275b3) navi_navi_pane_srt_g1_ParamLimits

0x6838,	// (0x000275b3) navi_navi_pane_srt_g1

0x684a,	// (0x000275c5) navi_navi_pane_srt_g2_ParamLimits

0x684a,	// (0x000275c5) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x00030706) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x00030706) navi_navi_pane_srt_g

0x685c,	// (0x000275d7) navi_navi_tabs_pane_srt

0x6830,	// (0x000275ab) navi_navi_text_pane_srt

0x6830,	// (0x000275ab) navi_navi_volume_pane_srt

0x6821,	// (0x0002759c) navi_navi_text_pane_srt_t1

0x20ce,	// (0x00022e49) navi_navi_volume_pane_srt_g1

0x20d6,	// (0x00022e51) volume_small_pane_srt_ParamLimits

0x20d6,	// (0x00022e51) volume_small_pane_srt

0x150d,	// (0x00022288) volume_small_pane_srt_g1_ParamLimits

0x150d,	// (0x00022288) volume_small_pane_srt_g1

0x151d,	// (0x00022298) volume_small_pane_srt_g2_ParamLimits

0x151d,	// (0x00022298) volume_small_pane_srt_g2

0x152e,	// (0x000222a9) volume_small_pane_srt_g3_ParamLimits

0x152e,	// (0x000222a9) volume_small_pane_srt_g3

0x153f,	// (0x000222ba) volume_small_pane_srt_g4_ParamLimits

0x153f,	// (0x000222ba) volume_small_pane_srt_g4

0x1550,	// (0x000222cb) volume_small_pane_srt_g5_ParamLimits

0x1550,	// (0x000222cb) volume_small_pane_srt_g5

0x1561,	// (0x000222dc) volume_small_pane_srt_g6_ParamLimits

0x1561,	// (0x000222dc) volume_small_pane_srt_g6

0x1572,	// (0x000222ed) volume_small_pane_srt_g7_ParamLimits

0x1572,	// (0x000222ed) volume_small_pane_srt_g7

0x1583,	// (0x000222fe) volume_small_pane_srt_g8_ParamLimits

0x1583,	// (0x000222fe) volume_small_pane_srt_g8

0x1594,	// (0x0002230f) volume_small_pane_srt_g9_ParamLimits

0x1594,	// (0x0002230f) volume_small_pane_srt_g9

0x15a5,	// (0x00022320) volume_small_pane_srt_g10_ParamLimits

0x15a5,	// (0x00022320) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x000304b3) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x000304b3) volume_small_pane_srt_g

0x3660,	// (0x000243db) query_popup_data_pane_cp2

0x6807,	// (0x00027582) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6807,	// (0x00027582) navi_navi_icon_text_pane_srt_t1

0x58e2,	// (0x0002665d) navi_tabs_2_long_pane_srt

0x58e2,	// (0x0002665d) navi_tabs_2_pane_srt

0x58e2,	// (0x0002665d) navi_tabs_3_long_pane_srt

0x58e2,	// (0x0002665d) navi_tabs_3_pane_srt

0x58e2,	// (0x0002665d) navi_tabs_4_pane_srt

0x20ae,	// (0x00022e29) tabs_2_active_pane_srt_ParamLimits

0x20ae,	// (0x00022e29) tabs_2_active_pane_srt

0x20be,	// (0x00022e39) tabs_2_passive_pane_srt_ParamLimits

0x20be,	// (0x00022e39) tabs_2_passive_pane_srt

0x5088,	// (0x00025e03) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5088,	// (0x00025e03) bg_passive_tab_pane_cp1_srt

0x67d3,	// (0x0002754e) bg_passive_tab_pane_g1_cp1_srt

0x43f0,	// (0x0002516b) bg_passive_tab_pane_g2_cp1_srt

0x67dc,	// (0x00027557) bg_passive_tab_pane_g3_cp1_srt

0x34db,	// (0x00024256) bg_active_tab_pane_cp1_srt_ParamLimits

0x34db,	// (0x00024256) bg_active_tab_pane_cp1_srt

0x67e5,	// (0x00027560) tabs_2_active_pane_srt_g1

0xdeb0,	// (0x0002ec2b) tabs_2_active_pane_srt_t1_ParamLimits

0xdeb0,	// (0x0002ec2b) tabs_2_active_pane_srt_t1

0x67d3,	// (0x0002754e) bg_active_tab_pane_g1_cp1_srt

0x43f0,	// (0x0002516b) bg_active_tab_pane_g2_cp1_srt

0x67dc,	// (0x00027557) bg_active_tab_pane_g3_cp1_srt

0x207b,	// (0x00022df6) tabs_3_active_pane_srt_ParamLimits

0x207b,	// (0x00022df6) tabs_3_active_pane_srt

0x208c,	// (0x00022e07) tabs_3_passive_pane_cp_srt_ParamLimits

0x208c,	// (0x00022e07) tabs_3_passive_pane_cp_srt

0x209d,	// (0x00022e18) tabs_3_passive_pane_srt_ParamLimits

0x209d,	// (0x00022e18) tabs_3_passive_pane_srt

0x5088,	// (0x00025e03) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5088,	// (0x00025e03) bg_passive_tab_pane_cp2_srt

0x496e,	// (0x000256e9) bg_passive_tab_pane_g1_cp2_srt

0x43f0,	// (0x0002516b) bg_passive_tab_pane_g2_cp2_srt

0x4977,	// (0x000256f2) bg_passive_tab_pane_g3_cp2_srt

0x34db,	// (0x00024256) bg_active_tab_pane_cp2_srt_ParamLimits

0x34db,	// (0x00024256) bg_active_tab_pane_cp2_srt

0x67b9,	// (0x00027534) tabs_3_active_pane_srt_g1

0xde9a,	// (0x0002ec15) tabs_3_active_pane_srt_t1_ParamLimits

0xde9a,	// (0x0002ec15) tabs_3_active_pane_srt_t1

0x496e,	// (0x000256e9) bg_active_tab_pane_g1_cp2_srt

0x43f0,	// (0x0002516b) bg_active_tab_pane_g2_cp2_srt

0x4977,	// (0x000256f2) bg_active_tab_pane_g3_cp2_srt

0x2033,	// (0x00022dae) tabs_4_active_pane_srt_ParamLimits

0x2033,	// (0x00022dae) tabs_4_active_pane_srt

0x2045,	// (0x00022dc0) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2045,	// (0x00022dc0) tabs_4_passive_pane_cp2_srt

0x1718,	// (0x00022493) aid_size_cell_toolbar

0x63fd,	// (0x00027178) main_idle_act_pane_ParamLimits

0x18bb,	// (0x00022636) popup_large_graphic_colour_window_ParamLimits

0xcdd3,	// (0x0002db4e) popup_toolbar_window_ParamLimits

0xcdd3,	// (0x0002db4e) popup_toolbar_window

0x04d8,	// (0x00021253) list_single_graphic_2heading_pane_ParamLimits

0x04d8,	// (0x00021253) list_single_graphic_2heading_pane

0x3e9d,	// (0x00024c18) aid_size_cell_apps_grid_lsc_pane

0x3eaf,	// (0x00024c2a) aid_size_cell_apps_grid_prt_pane

0x4ade,	// (0x00025859) bg_wml_button_pane_cp1_ParamLimits

0x4ade,	// (0x00025859) bg_wml_button_pane_cp1

0xdaba,	// (0x0002e835) form_midp_field_text_pane_t1_ParamLimits

0x5088,	// (0x00025e03) input_focus_pane_cp050_ParamLimits

0x52ef,	// (0x0002606a) list_midp_form_text_pane_ParamLimits

0x5295,	// (0x00026010) input_focus_pane_cp051_ParamLimits

0x52a9,	// (0x00026024) list_midp_choice_pane_ParamLimits

0xda58,	// (0x0002e7d3) list_single_2graphic_pane_cp3_ParamLimits

0xda58,	// (0x0002e7d3) list_single_2graphic_pane_cp3

0xda6b,	// (0x0002e7e6) list_single_midp_graphic_pane_ParamLimits

0xda6b,	// (0x0002e7e6) list_single_midp_graphic_pane

0x02d9,	// (0x00021054) list_single_graphic_2heading_pane_g1_ParamLimits

0x02d9,	// (0x00021054) list_single_graphic_2heading_pane_g1

0x02e5,	// (0x00021060) list_single_graphic_2heading_pane_g4_ParamLimits

0x02e5,	// (0x00021060) list_single_graphic_2heading_pane_g4

0x02f1,	// (0x0002106c) list_single_graphic_2heading_pane_g5_ParamLimits

0x02f1,	// (0x0002106c) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x00030506) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x00030506) list_single_graphic_2heading_pane_g

0x02fd,	// (0x00021078) list_single_graphic_2heading_pane_t1_ParamLimits

0x02fd,	// (0x00021078) list_single_graphic_2heading_pane_t1

0x0311,	// (0x0002108c) list_single_graphic_2heading_pane_t2_ParamLimits

0x0311,	// (0x0002108c) list_single_graphic_2heading_pane_t2

0x032b,	// (0x000210a6) list_single_graphic_2heading_pane_t3_ParamLimits

0x032b,	// (0x000210a6) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0003050d) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0003050d) list_single_graphic_2heading_pane_t

0x4f46,	// (0x00025cc1) bg_popup_sub_pane_cp2

0x4f70,	// (0x00025ceb) grid_toobar_pane

0x1ccf,	// (0x00022a4a) cell_toolbar_pane_ParamLimits

0x1ccf,	// (0x00022a4a) cell_toolbar_pane

0x4fac,	// (0x00025d27) cell_toolbar_pane_g1_ParamLimits

0x4fac,	// (0x00025d27) cell_toolbar_pane_g1

0x4fc0,	// (0x00025d3b) cell_toolbar_pane_g2_ParamLimits

0x4fc0,	// (0x00025d3b) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0003051b) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0003051b) cell_toolbar_pane_g

0x4fe2,	// (0x00025d5d) grid_highlight_pane_cp2_ParamLimits

0x4fe2,	// (0x00025d5d) grid_highlight_pane_cp2

0x4ffc,	// (0x00025d77) toolbar_button_pane

0x5008,	// (0x00025d83) toolbar_button_pane_g1

0x5010,	// (0x00025d8b) toolbar_button_pane_g2

0x5018,	// (0x00025d93) toolbar_button_pane_g3

0x5020,	// (0x00025d9b) toolbar_button_pane_g4

0x5028,	// (0x00025da3) toolbar_button_pane_g5

0x5030,	// (0x00025dab) toolbar_button_pane_g6

0x5038,	// (0x00025db3) toolbar_button_pane_g7

0x5040,	// (0x00025dbb) toolbar_button_pane_g8

0x5048,	// (0x00025dc3) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x00030520) toolbar_button_pane_g

0x1d07,	// (0x00022a82) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1d07,	// (0x00022a82) list_single_2graphic_pane_g1_cp3

0xce2b,	// (0x0002dba6) list_single_2graphic_pane_g2_cp3_ParamLimits

0xce2b,	// (0x0002dba6) list_single_2graphic_pane_g2_cp3

0x1d24,	// (0x00022a9f) list_single_2graphic_pane_g3_cp3

0x1d2c,	// (0x00022aa7) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1d2c,	// (0x00022aa7) list_single_2graphic_pane_g4_cp3

0x1d38,	// (0x00022ab3) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1d38,	// (0x00022ab3) list_single_2graphic_pane_t1_cp3

0x5050,	// (0x00025dcb) list_single_midp_graphic_pane_g2_ParamLimits

0x5050,	// (0x00025dcb) list_single_midp_graphic_pane_g2

0x1720,	// (0x0002249b) aid_zoom_text_primary

0x02ad,	// (0x00021028) aid_zoom_text_secondary

0xd5ab,	// (0x0002e326) status_small_pane_g7_ParamLimits

0xd5ab,	// (0x0002e326) status_small_pane_g7

0xd5ce,	// (0x0002e349) status_small_pane_t1_ParamLimits

0xc020,	// (0x0002cd9b) title_pane_g2

0x0003,

0xf529,	// (0x000302a4) title_pane_g

0xc298,	// (0x0002d013) aid_size_cell_colour_1_pane_ParamLimits

0xc298,	// (0x0002d013) aid_size_cell_colour_1_pane

0xc2ac,	// (0x0002d027) aid_size_cell_colour_2_pane_ParamLimits

0xc2ac,	// (0x0002d027) aid_size_cell_colour_2_pane

0xc2c0,	// (0x0002d03b) aid_size_cell_colour_3_pane_ParamLimits

0xc2c0,	// (0x0002d03b) aid_size_cell_colour_3_pane

0xc2d4,	// (0x0002d04f) aid_size_cell_colour_4_pane_ParamLimits

0xc2d4,	// (0x0002d04f) aid_size_cell_colour_4_pane

0x116a,	// (0x00021ee5) title_pane_stacon_g1_ParamLimits

0x116a,	// (0x00021ee5) title_pane_stacon_g1

0x56c9,	// (0x00026444) popup_note_wait_window_g3_ParamLimits

0x56c9,	// (0x00026444) popup_note_wait_window_g3

0x573f,	// (0x000264ba) popup_note_wait_window_t5_ParamLimits

0x573f,	// (0x000264ba) popup_note_wait_window_t5

0x3180,	// (0x00023efb) main_feb_china_hwr_fs_writing_pane

0xc7d5,	// (0x0002d550) popup_feb_china_hwr_fs_window_ParamLimits

0xc7d5,	// (0x0002d550) popup_feb_china_hwr_fs_window

0xce3c,	// (0x0002dbb7) aid_size_cell_hwr_fs_ParamLimits

0xce3c,	// (0x0002dbb7) aid_size_cell_hwr_fs

0x5088,	// (0x00025e03) bg_popup_sub_pane_cp3_ParamLimits

0x5088,	// (0x00025e03) bg_popup_sub_pane_cp3

0xce51,	// (0x0002dbcc) grid_hwr_fs_pane_ParamLimits

0xce51,	// (0x0002dbcc) grid_hwr_fs_pane

0x1d97,	// (0x00022b12) linegrid_hwr_fs_pane_ParamLimits

0x1d97,	// (0x00022b12) linegrid_hwr_fs_pane

0xce69,	// (0x0002dbe4) cell_hwr_fs_pane_ParamLimits

0xce69,	// (0x0002dbe4) cell_hwr_fs_pane

0x5094,	// (0x00025e0f) linegrid_hwr_fs_pane_g1_ParamLimits

0x5094,	// (0x00025e0f) linegrid_hwr_fs_pane_g1

0xda2c,	// (0x0002e7a7) linegrid_hwr_fs_pane_g2_ParamLimits

0xda2c,	// (0x0002e7a7) linegrid_hwr_fs_pane_g2

0x50b2,	// (0x00025e2d) linegrid_hwr_fs_pane_g3_ParamLimits

0x50b2,	// (0x00025e2d) linegrid_hwr_fs_pane_g3

0x1dc9,	// (0x00022b44) linegrid_hwr_fs_pane_g4_ParamLimits

0x1dc9,	// (0x00022b44) linegrid_hwr_fs_pane_g4

0x1de3,	// (0x00022b5e) linegrid_hwr_fs_pane_g5_ParamLimits

0x1de3,	// (0x00022b5e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x00030546) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x00030546) linegrid_hwr_fs_pane_g

0x50be,	// (0x00025e39) cell_hwr_fs_pane_g1_ParamLimits

0x50be,	// (0x00025e39) cell_hwr_fs_pane_g1

0x4e7d,	// (0x00025bf8) cell_hwr_fs_pane_g2_ParamLimits

0x4e7d,	// (0x00025bf8) cell_hwr_fs_pane_g2

0xda3e,	// (0x0002e7b9) cell_hwr_fs_pane_g3_ParamLimits

0xda3e,	// (0x0002e7b9) cell_hwr_fs_pane_g3

0xda4b,	// (0x0002e7c6) cell_hwr_fs_pane_g4_ParamLimits

0xda4b,	// (0x0002e7c6) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x00030551) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x00030551) cell_hwr_fs_pane_g

0xce8f,	// (0x0002dc0a) cell_hwr_fs_pane_t1

0x3180,	// (0x00023efb) grid_highlight_pane_cp6

0x3180,	// (0x00023efb) main_idle_act2_pane

0x3c54,	// (0x000249cf) aid_inside_area_popup_secondary

0xdb15,	// (0x0002e890) aid_inside_area_window_primary_ParamLimits

0xdb15,	// (0x0002e890) aid_inside_area_window_primary

0x6920,	// (0x0002769b) ai2_news_ticker_pane

0x6928,	// (0x000276a3) aid_size_cell_ai1_link_ParamLimits

0x6928,	// (0x000276a3) aid_size_cell_ai1_link

0xdec6,	// (0x0002ec41) popup_ai2_data_window_ParamLimits

0xdec6,	// (0x0002ec41) popup_ai2_data_window

0x6958,	// (0x000276d3) popup_ai2_link_window_ParamLimits

0x6958,	// (0x000276d3) popup_ai2_link_window

0x5088,	// (0x00025e03) bg_popup_sub_pane_cp4_ParamLimits

0x5088,	// (0x00025e03) bg_popup_sub_pane_cp4

0x696c,	// (0x000276e7) grid_ai2_link_pane_ParamLimits

0x696c,	// (0x000276e7) grid_ai2_link_pane

0x6983,	// (0x000276fe) popup_ai2_link_window_g1_ParamLimits

0x6983,	// (0x000276fe) popup_ai2_link_window_g1

0x698f,	// (0x0002770a) popup_ai2_link_window_g2_ParamLimits

0x698f,	// (0x0002770a) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x00030724) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x00030724) popup_ai2_link_window_g

0x699e,	// (0x00027719) ai2_mp_button_pane

0x69a6,	// (0x00027721) ai2_mp_volume_pane

0x5295,	// (0x00026010) bg_popup_sub_pane_cp5_ParamLimits

0x5295,	// (0x00026010) bg_popup_sub_pane_cp5

0x69ae,	// (0x00027729) heading_ai2_gene_pane_ParamLimits

0x69ae,	// (0x00027729) heading_ai2_gene_pane

0x69ba,	// (0x00027735) list_ai2_gene_pane_ParamLimits

0x69ba,	// (0x00027735) list_ai2_gene_pane

0x6a02,	// (0x0002777d) cell_ai2_link_pane_ParamLimits

0x6a02,	// (0x0002777d) cell_ai2_link_pane

0x6a18,	// (0x00027793) cell_ai2_link_pane_g1

0x3180,	// (0x00023efb) grid_highlight_pane_cp7

0x20eb,	// (0x00022e66) ai2_mp_volume_pane_g1

0x6ae8,	// (0x00027863) ai2_mp_volume_pane_g2

0xdef0,	// (0x0002ec6b) list_ai2_gene_pane_t1

0x6af0,	// (0x0002786b) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x0003073d) ai2_mp_volume_pane_g

0x20f3,	// (0x00022e6e) volume_small_pane_cp3

0x6af8,	// (0x00027873) aid_size_cell_ai2_button

0x6b00,	// (0x0002787b) grid_ai2_button_pane

0x6b09,	// (0x00027884) cell_ai2_button_pane_ParamLimits

0x6b09,	// (0x00027884) cell_ai2_button_pane

0xea64,	// (0x0002f7df) cell_ai2_button_pane_g1

0x3180,	// (0x00023efb) grid_highlight_pane_cp8

0x6aa8,	// (0x00027823) ai2_gene_pane_t1_ParamLimits

0x6aa8,	// (0x00027823) ai2_gene_pane_t1

0xc773,	// (0x0002d4ee) aid_height_parent_landscape

0xdc5d,	// (0x0002e9d8) aid_height_set_list

0x63fd,	// (0x00027178) aid_size_parent

0x6743,	// (0x000274be) aid_size_cell_graphic_pane_ParamLimits

0x69ca,	// (0x00027745) popup_ai2_data_window_g1_ParamLimits

0x69ca,	// (0x00027745) popup_ai2_data_window_g1

0x69d6,	// (0x00027751) ai2_news_ticker_pane_g1

0x69de,	// (0x00027759) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x00030729) ai2_news_ticker_pane_g

0x69e6,	// (0x00027761) ai2_news_ticker_pane_t1

0x69f4,	// (0x0002776f) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x0003072e) ai2_news_ticker_pane_t

0x6a21,	// (0x0002779c) heading_ai2_gene_pane_g1

0x6a29,	// (0x000277a4) heading_ai2_gene_pane_t1_ParamLimits

0x6a29,	// (0x000277a4) heading_ai2_gene_pane_t1

0x6a3e,	// (0x000277b9) list_highlight_pane_cp6

0xdeda,	// (0x0002ec55) ai2_gene_pane_ParamLimits

0xdeda,	// (0x0002ec55) ai2_gene_pane

0xdefe,	// (0x0002ec79) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x00030733) list_ai2_gene_pane_t

0x6a79,	// (0x000277f4) list_highlight_pane_cp8_ParamLimits

0x6a79,	// (0x000277f4) list_highlight_pane_cp8

0x6a8a,	// (0x00027805) ai2_gene_pane_g1_ParamLimits

0x6a8a,	// (0x00027805) ai2_gene_pane_g1

0x6a9c,	// (0x00027817) ai2_gene_pane_g2_ParamLimits

0x6a9c,	// (0x00027817) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x00030738) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x00030738) ai2_gene_pane_g

0x3a83,	// (0x000247fe) scroll_pane_cp12

0xc730,	// (0x0002d4ab) control_pane_t3_ParamLimits

0xc730,	// (0x0002d4ab) control_pane_t3

0xd5bf,	// (0x0002e33a) status_small_pane_g8_ParamLimits

0xd5bf,	// (0x0002e33a) status_small_pane_g8

0xc86a,	// (0x0002d5e5) popup_find_window_ParamLimits

0xcafd,	// (0x0002d878) popup_note_image_window_ParamLimits

0x02d9,	// (0x00021054) list_double2_graphic_pane_vc_g1_ParamLimits

0x02d9,	// (0x00021054) list_double2_graphic_pane_vc_g1

0x0343,	// (0x000210be) list_double2_graphic_pane_vc_g2_ParamLimits

0x0343,	// (0x000210be) list_double2_graphic_pane_vc_g2

0x034f,	// (0x000210ca) list_double2_graphic_pane_vc_g3_ParamLimits

0x034f,	// (0x000210ca) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x00030514) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x00030514) list_double2_graphic_pane_vc_g

0x035b,	// (0x000210d6) list_double2_graphic_pane_vc_t1_ParamLimits

0x035b,	// (0x000210d6) list_double2_graphic_pane_vc_t1

0x02e5,	// (0x00021060) list_single_heading_pane_vc_g1_ParamLimits

0x02e5,	// (0x00021060) list_single_heading_pane_vc_g1

0x02f1,	// (0x0002106c) list_single_heading_pane_vc_g2_ParamLimits

0x02f1,	// (0x0002106c) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0003031e) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0003031e) list_single_heading_pane_vc_g

0x0371,	// (0x000210ec) list_single_heading_pane_vc_t1_ParamLimits

0x0371,	// (0x000210ec) list_single_heading_pane_vc_t1

0x0387,	// (0x00021102) list_single_heading_pane_vc_t2_ParamLimits

0x0387,	// (0x00021102) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x00030535) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x00030535) list_single_heading_pane_vc_t

0x0399,	// (0x00021114) list_setting_number_pane_vc_g1_ParamLimits

0x0399,	// (0x00021114) list_setting_number_pane_vc_g1

0x03a5,	// (0x00021120) list_setting_number_pane_vc_g2_ParamLimits

0x03a5,	// (0x00021120) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0003053a) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0003053a) list_setting_number_pane_vc_g

0x03b1,	// (0x0002112c) list_setting_number_pane_vc_t1_ParamLimits

0x03b1,	// (0x0002112c) list_setting_number_pane_vc_t1

0x03c5,	// (0x00021140) list_setting_number_pane_vc_t2_ParamLimits

0x03c5,	// (0x00021140) list_setting_number_pane_vc_t2

0x03e1,	// (0x0002115c) list_setting_number_pane_vc_t3_ParamLimits

0x03e1,	// (0x0002115c) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x0003053f) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x0003053f) list_setting_number_pane_vc_t

0x03ff,	// (0x0002117a) set_value_pane_vc_ParamLimits

0x03ff,	// (0x0002117a) set_value_pane_vc

0x04d8,	// (0x00021253) list_double2_graphic_pane_vc_ParamLimits

0x04d8,	// (0x00021253) list_double2_graphic_pane_vc

0x65b5,	// (0x00027330) list_double2_large_graphic_pane_vc_ParamLimits

0x65b5,	// (0x00027330) list_double2_large_graphic_pane_vc

0x04d8,	// (0x00021253) list_double2_pane_vc_ParamLimits

0x04d8,	// (0x00021253) list_double2_pane_vc

0x04d8,	// (0x00021253) list_double_graphic_heading_pane_vc_ParamLimits

0x04d8,	// (0x00021253) list_double_graphic_heading_pane_vc

0x04d8,	// (0x00021253) list_double_graphic_pane_vc_ParamLimits

0x04d8,	// (0x00021253) list_double_graphic_pane_vc

0x04d8,	// (0x00021253) list_double_heading_pane_vc_ParamLimits

0x04d8,	// (0x00021253) list_double_heading_pane_vc

0x65c7,	// (0x00027342) list_double_large_graphic_pane_vc_ParamLimits

0x65c7,	// (0x00027342) list_double_large_graphic_pane_vc

0x04d8,	// (0x00021253) list_double_number_pane_vc_ParamLimits

0x04d8,	// (0x00021253) list_double_number_pane_vc

0x04d8,	// (0x00021253) list_double_pane_vc_ParamLimits

0x04d8,	// (0x00021253) list_double_pane_vc

0x04d8,	// (0x00021253) list_double_time_pane_vc_ParamLimits

0x04d8,	// (0x00021253) list_double_time_pane_vc

0x04d8,	// (0x00021253) list_setting_number_pane_vc_ParamLimits

0x04d8,	// (0x00021253) list_setting_number_pane_vc

0x04d8,	// (0x00021253) list_setting_pane_vc_ParamLimits

0x04d8,	// (0x00021253) list_setting_pane_vc

0x04d8,	// (0x00021253) list_single_graphic_heading_pane_vc_ParamLimits

0x04d8,	// (0x00021253) list_single_graphic_heading_pane_vc

0x04d8,	// (0x00021253) list_single_heading_pane_vc_ParamLimits

0x04d8,	// (0x00021253) list_single_heading_pane_vc

0x04d8,	// (0x00021253) list_single_number_heading_pane_vc_ParamLimits

0x04d8,	// (0x00021253) list_single_number_heading_pane_vc

0x0566,	// (0x000212e1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0566,	// (0x000212e1) list_double_graphic_heading_pane_vc_g1

0x02e5,	// (0x00021060) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x02e5,	// (0x00021060) list_double_graphic_heading_pane_vc_g2

0x02f1,	// (0x0002106c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x02f1,	// (0x0002106c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x00030744) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x00030744) list_double_graphic_heading_pane_vc_g

0x0572,	// (0x000212ed) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0572,	// (0x000212ed) list_double_graphic_heading_pane_vc_t1

0x058e,	// (0x00021309) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x058e,	// (0x00021309) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x0003074b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x0003074b) list_double_graphic_heading_pane_vc_t

0x0399,	// (0x00021114) list_setting_pane_vc_g1_ParamLimits

0x0399,	// (0x00021114) list_setting_pane_vc_g1

0x03a5,	// (0x00021120) list_setting_pane_vc_g2_ParamLimits

0x03a5,	// (0x00021120) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x0003053a) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x0003053a) list_setting_pane_vc_g

0x05ac,	// (0x00021327) list_setting_pane_vc_t1_ParamLimits

0x05ac,	// (0x00021327) list_setting_pane_vc_t1

0x05c8,	// (0x00021343) list_setting_pane_vc_t2_ParamLimits

0x05c8,	// (0x00021343) list_setting_pane_vc_t2

0x0001,

0xf9fe,	// (0x00030779) list_setting_pane_vc_t_ParamLimits

0xf9fe,	// (0x00030779) list_setting_pane_vc_t

0x03ff,	// (0x0002117a) set_value_pane_cp_vc_ParamLimits

0x03ff,	// (0x0002117a) set_value_pane_cp_vc

0x02e5,	// (0x00021060) list_single_number_heading_pane_vc_g1_ParamLimits

0x02e5,	// (0x00021060) list_single_number_heading_pane_vc_g1

0x02f1,	// (0x0002106c) list_single_number_heading_pane_vc_g2_ParamLimits

0x02f1,	// (0x0002106c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0003031e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0003031e) list_single_number_heading_pane_vc_g

0x05e4,	// (0x0002135f) list_single_number_heading_pane_vc_t1_ParamLimits

0x05e4,	// (0x0002135f) list_single_number_heading_pane_vc_t1

0x05fa,	// (0x00021375) list_single_number_heading_pane_vc_t2_ParamLimits

0x05fa,	// (0x00021375) list_single_number_heading_pane_vc_t2

0x060c,	// (0x00021387) list_single_number_heading_pane_vc_t3_ParamLimits

0x060c,	// (0x00021387) list_single_number_heading_pane_vc_t3

0x0002,

0xfa03,	// (0x0003077e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa03,	// (0x0003077e) list_single_number_heading_pane_vc_t

0x02d9,	// (0x00021054) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x02d9,	// (0x00021054) list_single_graphic_heading_pane_vc_g1

0x02e5,	// (0x00021060) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x02e5,	// (0x00021060) list_single_graphic_heading_pane_vc_g4

0x02f1,	// (0x0002106c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x02f1,	// (0x0002106c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf78b,	// (0x00030506) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf78b,	// (0x00030506) list_single_graphic_heading_pane_vc_g

0x061e,	// (0x00021399) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x061e,	// (0x00021399) list_single_graphic_heading_pane_vc_t1

0x0634,	// (0x000213af) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0634,	// (0x000213af) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0a,	// (0x00030785) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0a,	// (0x00030785) list_single_graphic_heading_pane_vc_t

0x02e5,	// (0x00021060) list_double2_pane_vc_g1_ParamLimits

0x02e5,	// (0x00021060) list_double2_pane_vc_g1

0x02f1,	// (0x0002106c) list_double2_pane_vc_g2_ParamLimits

0x02f1,	// (0x0002106c) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0003031e) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0003031e) list_double2_pane_vc_g

0x0646,	// (0x000213c1) list_double2_pane_vc_t1_ParamLimits

0x0646,	// (0x000213c1) list_double2_pane_vc_t1

0x065c,	// (0x000213d7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x065c,	// (0x000213d7) list_double2_large_graphic_pane_vc_g1

0xf4ba,	// (0x00030235) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf4ba,	// (0x00030235) list_double2_large_graphic_pane_vc_g2

0xf4c6,	// (0x00030241) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf4c6,	// (0x00030241) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0003033b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0003033b) list_double2_large_graphic_pane_vc_g

0x0668,	// (0x000213e3) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0668,	// (0x000213e3) list_double2_large_graphic_pane_vc_t1

0x067e,	// (0x000213f9) list_double_time_pane_vc_g1_ParamLimits

0x067e,	// (0x000213f9) list_double_time_pane_vc_g1

0x068a,	// (0x00021405) list_double_time_pane_vc_g2_ParamLimits

0x068a,	// (0x00021405) list_double_time_pane_vc_g2

0x0001,

0xfa0f,	// (0x0003078a) list_double_time_pane_vc_g_ParamLimits

0xfa0f,	// (0x0003078a) list_double_time_pane_vc_g

0x0696,	// (0x00021411) list_double_time_pane_vc_t1_ParamLimits

0x0696,	// (0x00021411) list_double_time_pane_vc_t1

0x06ba,	// (0x00021435) list_double_time_pane_vc_t2_ParamLimits

0x06ba,	// (0x00021435) list_double_time_pane_vc_t2

0x0704,	// (0x0002147f) list_double_time_pane_vc_t3_ParamLimits

0x0704,	// (0x0002147f) list_double_time_pane_vc_t3

0x0716,	// (0x00021491) list_double_time_pane_vc_t4_ParamLimits

0x0716,	// (0x00021491) list_double_time_pane_vc_t4

0x0003,

0xfa14,	// (0x0003078f) list_double_time_pane_vc_t_ParamLimits

0xfa14,	// (0x0003078f) list_double_time_pane_vc_t

0x02e5,	// (0x00021060) list_double_pane_vc_g1_ParamLimits

0x02e5,	// (0x00021060) list_double_pane_vc_g1

0x02f1,	// (0x0002106c) list_double_pane_vc_g2_ParamLimits

0x02f1,	// (0x0002106c) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0003031e) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0003031e) list_double_pane_vc_g

0x072a,	// (0x000214a5) list_double_pane_vc_t1_ParamLimits

0x072a,	// (0x000214a5) list_double_pane_vc_t1

0x073e,	// (0x000214b9) list_double_pane_vc_t2_ParamLimits

0x073e,	// (0x000214b9) list_double_pane_vc_t2

0x0001,

0xfa1d,	// (0x00030798) list_double_pane_vc_t_ParamLimits

0xfa1d,	// (0x00030798) list_double_pane_vc_t

0x02e5,	// (0x00021060) list_double_number_pane_vc_g1_ParamLimits

0x02e5,	// (0x00021060) list_double_number_pane_vc_g1

0x02f1,	// (0x0002106c) list_double_number_pane_vc_g2_ParamLimits

0x02f1,	// (0x0002106c) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0003031e) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0003031e) list_double_number_pane_vc_g

0x0756,	// (0x000214d1) list_double_number_pane_vc_t1_ParamLimits

0x0756,	// (0x000214d1) list_double_number_pane_vc_t1

0x0768,	// (0x000214e3) list_double_number_pane_vc_t2_ParamLimits

0x0768,	// (0x000214e3) list_double_number_pane_vc_t2

0x077c,	// (0x000214f7) list_double_number_pane_vc_t3_ParamLimits

0x077c,	// (0x000214f7) list_double_number_pane_vc_t3

0x0002,

0xfa22,	// (0x0003079d) list_double_number_pane_vc_t_ParamLimits

0xfa22,	// (0x0003079d) list_double_number_pane_vc_t

0x0794,	// (0x0002150f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0794,	// (0x0002150f) list_double_large_graphic_pane_vc_g1

0x07b0,	// (0x0002152b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x07b0,	// (0x0002152b) list_double_large_graphic_pane_vc_g2

0x07c4,	// (0x0002153f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x07c4,	// (0x0002153f) list_double_large_graphic_pane_vc_g3

0x07d3,	// (0x0002154e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x07d3,	// (0x0002154e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa29,	// (0x000307a4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa29,	// (0x000307a4) list_double_large_graphic_pane_vc_g

0x07e2,	// (0x0002155d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x07e2,	// (0x0002155d) list_double_large_graphic_pane_vc_t1

0x07fe,	// (0x00021579) list_double_large_graphic_pane_vc_t2_ParamLimits

0x07fe,	// (0x00021579) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa32,	// (0x000307ad) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa32,	// (0x000307ad) list_double_large_graphic_pane_vc_t

0x02e5,	// (0x00021060) list_double_heading_pane_vc_g1_ParamLimits

0x02e5,	// (0x00021060) list_double_heading_pane_vc_g1

0x02f1,	// (0x0002106c) list_double_heading_pane_vc_g2_ParamLimits

0x02f1,	// (0x0002106c) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0003031e) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0003031e) list_double_heading_pane_vc_g

0x0820,	// (0x0002159b) list_double_heading_pane_vc_t1_ParamLimits

0x0820,	// (0x0002159b) list_double_heading_pane_vc_t1

0x0834,	// (0x000215af) list_double_heading_pane_vc_t2_ParamLimits

0x0834,	// (0x000215af) list_double_heading_pane_vc_t2

0x0001,

0xfa37,	// (0x000307b2) list_double_heading_pane_vc_t_ParamLimits

0xfa37,	// (0x000307b2) list_double_heading_pane_vc_t

0x084c,	// (0x000215c7) list_double_graphic_pane_vc_g1_ParamLimits

0x084c,	// (0x000215c7) list_double_graphic_pane_vc_g1

0x085f,	// (0x000215da) list_double_graphic_pane_vc_g2_ParamLimits

0x085f,	// (0x000215da) list_double_graphic_pane_vc_g2

0x02e5,	// (0x00021060) list_double_graphic_pane_vc_g3_ParamLimits

0x02e5,	// (0x00021060) list_double_graphic_pane_vc_g3

0x0003,

0xfa3c,	// (0x000307b7) list_double_graphic_pane_vc_g_ParamLimits

0xfa3c,	// (0x000307b7) list_double_graphic_pane_vc_g

0x087c,	// (0x000215f7) list_double_graphic_pane_vc_t1_ParamLimits

0x087c,	// (0x000215f7) list_double_graphic_pane_vc_t1

0x08a6,	// (0x00021621) list_double_graphic_pane_vc_t2_ParamLimits

0x08a6,	// (0x00021621) list_double_graphic_pane_vc_t2

0x0001,

0xfa45,	// (0x000307c0) list_double_graphic_pane_vc_t_ParamLimits

0xfa45,	// (0x000307c0) list_double_graphic_pane_vc_t

0x0cc7,	// (0x00021a42) aid_size_cell_fastswap

0xbe07,	// (0x0002cb82) aid_size_cell_touch_ParamLimits

0xbe07,	// (0x0002cb82) aid_size_cell_touch

0x0f2a,	// (0x00021ca5) popup_fast_swap_wide_window_ParamLimits

0x0f2a,	// (0x00021ca5) popup_fast_swap_wide_window

0xbfb7,	// (0x0002cd32) touch_pane_ParamLimits

0xbfb7,	// (0x0002cd32) touch_pane

0x3ad9,	// (0x00024854) button_value_adjust_pane_cp2

0xf519,	// (0x00030294) button_value_adjust_pane_cp4

0xf521,	// (0x0003029c) form_field_data_pane_cp2

0xb958,	// (0x0002c6d3) form_field_data_wide_pane_cp2

0x3f6c,	// (0x00024ce7) bg_scroll_pane_ParamLimits

0x12cc,	// (0x00022047) scroll_handle_pane_ParamLimits

0x12e0,	// (0x0002205b) scroll_sc2_down_pane_ParamLimits

0x12e0,	// (0x0002205b) scroll_sc2_down_pane

0x3f9d,	// (0x00024d18) scroll_sc2_up_pane_ParamLimits

0x3f9d,	// (0x00024d18) scroll_sc2_up_pane

0xe02e,	// (0x0002eda9) grid_wheel_folder_pane_g1_ParamLimits

0xe02e,	// (0x0002eda9) grid_wheel_folder_pane_g1

0x14a5,	// (0x00022220) clock_nsta_pane_cp2_ParamLimits

0x14a5,	// (0x00022220) clock_nsta_pane_cp2

0xc595,	// (0x0002d310) listscroll_midp_pane_ParamLimits

0xc5a1,	// (0x0002d31c) midp_canvas_pane

0x4ab6,	// (0x00025831) nsta_clock_indic_pane

0x4aea,	// (0x00025865) listscroll_form_pane_vc

0x4af2,	// (0x0002586d) listscroll_set_pane_vc_ParamLimits

0x4af2,	// (0x0002586d) listscroll_set_pane_vc

0xd737,	// (0x0002e4b2) clock_nsta_pane

0xd761,	// (0x0002e4dc) indicator_nsta_pane

0x4f46,	// (0x00025cc1) bg_popup_sub_pane_cp2_ParamLimits

0x4f5a,	// (0x00025cd5) find_pane_cp2_ParamLimits

0x4f5a,	// (0x00025cd5) find_pane_cp2

0x4f70,	// (0x00025ceb) grid_toobar_pane_ParamLimits

0x505c,	// (0x00025dd7) list_form_gen_pane_vc_ParamLimits

0x505c,	// (0x00025dd7) list_form_gen_pane_vc

0x5072,	// (0x00025ded) scroll_pane_cp8_vc_ParamLimits

0x5072,	// (0x00025ded) scroll_pane_cp8_vc

0x50ee,	// (0x00025e69) data_form_wide_pane_vc_ParamLimits

0x50ee,	// (0x00025e69) data_form_wide_pane_vc

0x50fa,	// (0x00025e75) form_field_data_wide_pane_vc_g1

0x5102,	// (0x00025e7d) form_field_data_wide_pane_vc_t1_ParamLimits

0x5102,	// (0x00025e7d) form_field_data_wide_pane_vc_t1

0x3aed,	// (0x00024868) input_focus_pane_cp6_vc_ParamLimits

0x3aed,	// (0x00024868) input_focus_pane_cp6_vc

0x5448,	// (0x000261c3) list_midp_pane_ParamLimits

0x67ad,	// (0x00027528) scroll_pane_cp16_ParamLimits

0x67ad,	// (0x00027528) scroll_pane_cp16

0x549e,	// (0x00026219) button_value_adjust_pane_ParamLimits

0x549e,	// (0x00026219) button_value_adjust_pane

0xdc6e,	// (0x0002e9e9) button_value_adjust_pane_cp6_ParamLimits

0xdc6e,	// (0x0002e9e9) button_value_adjust_pane_cp6

0xdd88,	// (0x0002eb03) settings_code_pane_cp_ParamLimits

0xdd88,	// (0x0002eb03) settings_code_pane_cp

0xea64,	// (0x0002f7df) cell_touch_pane_g1

0xea64,	// (0x0002f7df) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x00030459) cell_touch_pane_g

0xdf0c,	// (0x0002ec87) cell_touch_pane_cp_ParamLimits

0xdf0c,	// (0x0002ec87) cell_touch_pane_cp

0xdf28,	// (0x0002eca3) cell_touch_pane_ParamLimits

0xdf28,	// (0x0002eca3) cell_touch_pane

0xea64,	// (0x0002f7df) scroll_sc2_down_pane_g1

0xea64,	// (0x0002f7df) scroll_sc2_up_pane_g1

0x3180,	// (0x00023efb) bg_set_opt_pane_cp4_vc

0x6b3d,	// (0x000278b8) list_set_graphic_pane_vc_g1_ParamLimits

0x6b3d,	// (0x000278b8) list_set_graphic_pane_vc_g1

0x6b49,	// (0x000278c4) list_set_graphic_pane_vc_g2_ParamLimits

0x6b49,	// (0x000278c4) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x00030750) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x00030750) list_set_graphic_pane_vc_g

0x6b55,	// (0x000278d0) text_primary_small_cp13_vc_ParamLimits

0x6b55,	// (0x000278d0) text_primary_small_cp13_vc

0x6b6d,	// (0x000278e8) list_set_graphic_pane_vc_ParamLimits

0x6b6d,	// (0x000278e8) list_set_graphic_pane_vc

0x3180,	// (0x00023efb) input_focus_pane_cp2_vc

0xea64,	// (0x0002f7df) setting_code_pane_vc_g1

0x32ab,	// (0x00024026) setting_code_pane_vc_t1

0x6b80,	// (0x000278fb) set_text_pane_vc_t1_ParamLimits

0x6b80,	// (0x000278fb) set_text_pane_vc_t1

0x3180,	// (0x00023efb) input_focus_pane_cp1_vc

0x6b9c,	// (0x00027917) list_set_text_pane_vc

0xea64,	// (0x0002f7df) setting_text_pane_vc_g1

0x3180,	// (0x00023efb) bg_set_opt_pane_cp2_vc

0x32a2,	// (0x0002401d) setting_slider_graphic_pane_vc_g1

0x6ba6,	// (0x00027921) setting_slider_graphic_pane_vc_t1

0x6bb6,	// (0x00027931) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x00030755) setting_slider_graphic_pane_vc_t

0x6bc6,	// (0x00027941) slider_set_pane_cp_vc

0x6bce,	// (0x00027949) slider_set_pane_vc_g1

0x6bd7,	// (0x00027952) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x0003075a) slider_set_pane_vc_g

0x3b45,	// (0x000248c0) set_opt_bg_pane_g1_copy1

0x3b4d,	// (0x000248c8) set_opt_bg_pane_g2_copy1

0x6c03,	// (0x0002797e) set_opt_bg_pane_g3_copy1

0x3b5d,	// (0x000248d8) set_opt_bg_pane_g4_copy1

0x3b65,	// (0x000248e0) set_opt_bg_pane_g5_copy1

0x3b6d,	// (0x000248e8) set_opt_bg_pane_g6_copy1

0x6c0d,	// (0x00027988) set_opt_bg_pane_g7_copy1

0x6c17,	// (0x00027992) set_opt_bg_pane_g8_copy1

0x6c21,	// (0x0002799c) set_opt_bg_pane_g9_copy1

0x3180,	// (0x00023efb) bg_set_opt_pane_cp_vc

0x6c2b,	// (0x000279a6) setting_slider_pane_vc_t1

0x6c3a,	// (0x000279b5) setting_slider_pane_vc_t2

0x6c4a,	// (0x000279c5) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x00030769) setting_slider_pane_vc_t

0x6c5a,	// (0x000279d5) slider_set_pane_vc

0x1e07,	// (0x00022b82) volume_set_pane_vc_g1

0x1e10,	// (0x00022b8b) volume_set_pane_vc_g2

0x1e19,	// (0x00022b94) volume_set_pane_vc_g3

0x1e22,	// (0x00022b9d) volume_set_pane_vc_g4

0x1e2b,	// (0x00022ba6) volume_set_pane_vc_g5

0x1e34,	// (0x00022baf) volume_set_pane_vc_g6

0x1e3d,	// (0x00022bb8) volume_set_pane_vc_g7

0x1e46,	// (0x00022bc1) volume_set_pane_vc_g8

0x1e4f,	// (0x00022bca) volume_set_pane_vc_g9

0x1e58,	// (0x00022bd3) volume_set_pane_vc_g10

0x0009,

0xf88c,	// (0x00030607) volume_set_pane_vc_g

0x6c62,	// (0x000279dd) volume_set_pane_vc

0x6c6a,	// (0x000279e5) button_value_adjust_pane_cp1_vc

0x6c74,	// (0x000279ef) list_highlight_pane_cp2_vc

0x6c7d,	// (0x000279f8) list_set_pane_vc_ParamLimits

0x6c7d,	// (0x000279f8) list_set_pane_vc

0x6cdb,	// (0x00027a56) main_pane_set_vc_t1_ParamLimits

0x6cdb,	// (0x00027a56) main_pane_set_vc_t1

0x6cf0,	// (0x00027a6b) main_pane_set_vc_t2_ParamLimits

0x6cf0,	// (0x00027a6b) main_pane_set_vc_t2

0x6d02,	// (0x00027a7d) main_pane_set_vc_t3_ParamLimits

0x6d02,	// (0x00027a7d) main_pane_set_vc_t3

0x6d16,	// (0x00027a91) main_pane_set_vc_t4_ParamLimits

0x6d16,	// (0x00027a91) main_pane_set_vc_t4

0x0003,

0xf9f5,	// (0x00030770) main_pane_set_vc_t_ParamLimits

0xf9f5,	// (0x00030770) main_pane_set_vc_t

0x6d2a,	// (0x00027aa5) setting_code_pane_vc_ParamLimits

0x6d2a,	// (0x00027aa5) setting_code_pane_vc

0x6d3b,	// (0x00027ab6) setting_slider_graphic_pane_vc

0x6d3b,	// (0x00027ab6) setting_slider_pane_vc

0x6d3b,	// (0x00027ab6) setting_text_pane_vc

0x6d3b,	// (0x00027ab6) setting_volume_pane_vc

0x6d45,	// (0x00027ac0) scroll_pane_cp121_vc

0x3ac7,	// (0x00024842) set_content_pane_vc

0x6d4d,	// (0x00027ac8) button_value_adjust_pane_g1

0x6d56,	// (0x00027ad1) button_value_adjust_pane_g2

0x0001,

0xfa4a,	// (0x000307c5) button_value_adjust_pane_g

0x6d5f,	// (0x00027ada) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6d5f,	// (0x00027ada) form_field_slider_wide_pane_vc_t1

0x6d73,	// (0x00027aee) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6d73,	// (0x00027aee) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa4f,	// (0x000307ca) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa4f,	// (0x000307ca) form_field_slider_wide_pane_vc_t

0x34db,	// (0x00024256) input_focus_pane_cp10_vc_ParamLimits

0x34db,	// (0x00024256) input_focus_pane_cp10_vc

0x6da1,	// (0x00027b1c) slider_cont_pane_cp1_vc_ParamLimits

0x6da1,	// (0x00027b1c) slider_cont_pane_cp1_vc

0x6db3,	// (0x00027b2e) slider_form_pane_g1_cp2

0x6bd7,	// (0x00027952) slider_form_pane_g2_cp2

0x6de0,	// (0x00027b5b) form_field_slider_pane_vc_t3

0x6dee,	// (0x00027b69) form_field_slider_pane_vc_t4

0x6dfc,	// (0x00027b77) slider_form_pane_vc_ParamLimits

0x6dfc,	// (0x00027b77) slider_form_pane_vc

0x6e09,	// (0x00027b84) form_field_slider_pane_vc_t1_ParamLimits

0x6e09,	// (0x00027b84) form_field_slider_pane_vc_t1

0x6d73,	// (0x00027aee) form_field_slider_pane_vc_t2_ParamLimits

0x6d73,	// (0x00027aee) form_field_slider_pane_vc_t2

0x0001,

0xfa61,	// (0x000307dc) form_field_slider_pane_vc_t_ParamLimits

0xfa61,	// (0x000307dc) form_field_slider_pane_vc_t

0x34db,	// (0x00024256) input_focus_pane_cp9_vc_ParamLimits

0x34db,	// (0x00024256) input_focus_pane_cp9_vc

0x6e25,	// (0x00027ba0) slider_cont_pane_vc_ParamLimits

0x6e25,	// (0x00027ba0) slider_cont_pane_vc

0x6e39,	// (0x00027bb4) list_form_graphic_pane_cp_vc_ParamLimits

0x6e39,	// (0x00027bb4) list_form_graphic_pane_cp_vc

0x50fa,	// (0x00025e75) form_field_popup_wide_pane_vc_g1

0x6e4e,	// (0x00027bc9) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6e4e,	// (0x00027bc9) form_field_popup_wide_pane_vc_t1

0x3aed,	// (0x00024868) input_focus_pane_cp8_vc_ParamLimits

0x3aed,	// (0x00024868) input_focus_pane_cp8_vc

0x6e93,	// (0x00027c0e) list_form_wide_pane_vc_ParamLimits

0x6e93,	// (0x00027c0e) list_form_wide_pane_vc

0x6e9f,	// (0x00027c1a) list_form_graphic_pane_vc_g1

0x6ea7,	// (0x00027c22) list_form_graphic_pane_vc_t1_ParamLimits

0x6ea7,	// (0x00027c22) list_form_graphic_pane_vc_t1

0x3260,	// (0x00023fdb) list_highlight_pane_cp5_vc_ParamLimits

0x3260,	// (0x00023fdb) list_highlight_pane_cp5_vc

0x6ec3,	// (0x00027c3e) list_form_graphic_pane_vc_ParamLimits

0x6ec3,	// (0x00027c3e) list_form_graphic_pane_vc

0x50fa,	// (0x00025e75) form_field_popup_pane_vc_g1

0x6ed9,	// (0x00027c54) form_field_popup_pane_vc_t1_ParamLimits

0x6ed9,	// (0x00027c54) form_field_popup_pane_vc_t1

0x3aed,	// (0x00024868) input_focus_pane_cp7_vc_ParamLimits

0x3aed,	// (0x00024868) input_focus_pane_cp7_vc

0x6ef0,	// (0x00027c6b) list_form_pane_vc_ParamLimits

0x6ef0,	// (0x00027c6b) list_form_pane_vc

0x6efc,	// (0x00027c77) data_form_pane_vc_t1_ParamLimits

0x6efc,	// (0x00027c77) data_form_pane_vc_t1

0x3b45,	// (0x000248c0) input_focus_pane_vc_g1

0x3b4d,	// (0x000248c8) input_focus_pane_vc_g2

0x3b55,	// (0x000248d0) input_focus_pane_vc_g3

0x3b5d,	// (0x000248d8) input_focus_pane_vc_g4

0x3b65,	// (0x000248e0) input_focus_pane_vc_g5

0x3b6d,	// (0x000248e8) input_focus_pane_vc_g6

0x3b75,	// (0x000248f0) input_focus_pane_vc_g7

0x3b7d,	// (0x000248f8) input_focus_pane_vc_g8

0x3b85,	// (0x00024900) input_focus_pane_vc_g9

0xea64,	// (0x0002f7df) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x000303e2) input_focus_pane_vc_g

0x50ee,	// (0x00025e69) data_form_pane_vc_ParamLimits

0x50ee,	// (0x00025e69) data_form_pane_vc

0x50fa,	// (0x00025e75) form_field_data_pane_vc_g1

0x6f17,	// (0x00027c92) form_field_data_pane_vc_t1_ParamLimits

0x6f17,	// (0x00027c92) form_field_data_pane_vc_t1

0x3aed,	// (0x00024868) input_focus_pane_vc_ParamLimits

0x3aed,	// (0x00024868) input_focus_pane_vc

0x6f31,	// (0x00027cac) button_value_adjust_pane_cp3_vc

0x6f39,	// (0x00027cb4) button_value_adjust_pane_cp5_vc

0x6f41,	// (0x00027cbc) form_field_data_pane_vc_ParamLimits

0x6f41,	// (0x00027cbc) form_field_data_pane_vc

0x6f58,	// (0x00027cd3) form_field_data_pane_vc_cp2

0x6f60,	// (0x00027cdb) form_field_data_wide_pane_vc_ParamLimits

0x6f60,	// (0x00027cdb) form_field_data_wide_pane_vc

0x6f76,	// (0x00027cf1) form_field_data_wide_pane_vc_cp2

0x6f7e,	// (0x00027cf9) form_field_popup_pane_vc_ParamLimits

0x6f7e,	// (0x00027cf9) form_field_popup_pane_vc

0x6f95,	// (0x00027d10) form_field_popup_wide_pane_vc_ParamLimits

0x6f95,	// (0x00027d10) form_field_popup_wide_pane_vc

0x6fab,	// (0x00027d26) form_field_slider_pane_vc_ParamLimits

0x6fab,	// (0x00027d26) form_field_slider_pane_vc

0x6fbe,	// (0x00027d39) form_field_slider_wide_pane_vc_ParamLimits

0x6fbe,	// (0x00027d39) form_field_slider_wide_pane_vc

0xdf46,	// (0x0002ecc1) grid_touch_1_pane_ParamLimits

0xdf46,	// (0x0002ecc1) grid_touch_1_pane

0xdf5a,	// (0x0002ecd5) grid_touch_2_pane_ParamLimits

0xdf5a,	// (0x0002ecd5) grid_touch_2_pane

0x70a2,	// (0x00027e1d) touch_pane_g1_ParamLimits

0x70a2,	// (0x00027e1d) touch_pane_g1

0x6ff5,	// (0x00027d70) cell_app_pane_cp_wide_ParamLimits

0x6ff5,	// (0x00027d70) cell_app_pane_cp_wide

0x7006,	// (0x00027d81) grid_popup_fast_wide_pane_ParamLimits

0x7006,	// (0x00027d81) grid_popup_fast_wide_pane

0x701a,	// (0x00027d95) scroll_pane_cp19_ParamLimits

0x701a,	// (0x00027d95) scroll_pane_cp19

0x3180,	// (0x00023efb) bg_popup_window_pane_cp20

0x702e,	// (0x00027da9) listscroll_popup_fast_wide_pane

0xdf84,	// (0x0002ecff) grid_indicator_nsta_pane

0x7048,	// (0x00027dc3) clock_nsta_pane_g1

0x7051,	// (0x00027dcc) clock_nsta_pane_t1

0xdf90,	// (0x0002ed0b) cell_indicator_nsta_pane_ParamLimits

0xdf90,	// (0x0002ed0b) cell_indicator_nsta_pane

0x70a2,	// (0x00027e1d) cell_indicator_nsta_pane_g1

0xdfab,	// (0x0002ed26) cell_indicator_nsta_pane_g2

0x0001,

0xfa72,	// (0x000307ed) cell_indicator_nsta_pane_g

0x70c2,	// (0x00027e3d) clock_nsta_pane_cp

0x70cb,	// (0x00027e46) indicator_nsta_pane_cp

0x70d5,	// (0x00027e50) nsta_clock_indic_pane_g1

0x3329,	// (0x000240a4) grid_indicator_pane

0x4092,	// (0x00024e0d) scroll_pane_cp29

0x13f4,	// (0x0002216f) indicator_nsta_pane_cp2_ParamLimits

0x13f4,	// (0x0002216f) indicator_nsta_pane_cp2

0x3260,	// (0x00023fdb) main_apps_wheel_pane

0x5309,	// (0x00026084) form_midp_field_text_pane_ParamLimits

0x5454,	// (0x000261cf) scroll_bar_cp050_ParamLimits

0x712e,	// (0x00027ea9) cell_indicator_pane_ParamLimits

0x712e,	// (0x00027ea9) cell_indicator_pane

0x7145,	// (0x00027ec0) cell_indicator_pane_g1

0xdfb8,	// (0x0002ed33) grid_wheel_folder_pane_ParamLimits

0xdfb8,	// (0x0002ed33) grid_wheel_folder_pane

0xdfc6,	// (0x0002ed41) list_wheel_apps_pane_ParamLimits

0xdfc6,	// (0x0002ed41) list_wheel_apps_pane

0xdfd4,	// (0x0002ed4f) main_apps_wheel_pane_g1_ParamLimits

0xdfd4,	// (0x0002ed4f) main_apps_wheel_pane_g1

0xdfe0,	// (0x0002ed5b) main_apps_wheel_pane_g2_ParamLimits

0xdfe0,	// (0x0002ed5b) main_apps_wheel_pane_g2

0x0001,

0xfa8e,	// (0x00030809) main_apps_wheel_pane_g_ParamLimits

0xfa8e,	// (0x00030809) main_apps_wheel_pane_g

0xdfee,	// (0x0002ed69) main_apps_wheel_pane_t1_ParamLimits

0xdfee,	// (0x0002ed69) main_apps_wheel_pane_t1

0xe002,	// (0x0002ed7d) list_wheel_apps_pane_g1

0xe00a,	// (0x0002ed85) list_wheel_apps_pane_g2

0xe012,	// (0x0002ed8d) list_wheel_apps_pane_g3

0xe01a,	// (0x0002ed95) list_wheel_apps_pane_g4

0xe024,	// (0x0002ed9f) list_wheel_apps_pane_g5

0x0004,

0xfa93,	// (0x0003080e) list_wheel_apps_pane_g

0x4631,	// (0x000253ac) navi_icon_text_pane

0xd62b,	// (0x0002e3a6) aid_fill_nsta

0x720a,	// (0x00027f85) navi_icon_text_pane_g1

0x7216,	// (0x00027f91) navi_icon_text_pane_t1

0x44c4,	// (0x0002523f) list_set_graphic_pane_t1_ParamLimits

0x44c4,	// (0x0002523f) list_set_graphic_pane_t1

0x5bbf,	// (0x0002693a) popup_midp_note_alarm_window_t6_ParamLimits

0x5bbf,	// (0x0002693a) popup_midp_note_alarm_window_t6

0x5bd1,	// (0x0002694c) popup_midp_note_alarm_window_t7_ParamLimits

0x5bd1,	// (0x0002694c) popup_midp_note_alarm_window_t7

0x5be3,	// (0x0002695e) popup_midp_note_alarm_window_t8_ParamLimits

0x5be3,	// (0x0002695e) popup_midp_note_alarm_window_t8

0x5bf5,	// (0x00026970) popup_midp_note_alarm_window_t9_ParamLimits

0x5bf5,	// (0x00026970) popup_midp_note_alarm_window_t9

0x5c07,	// (0x00026982) popup_midp_note_alarm_window_t10_ParamLimits

0x5c07,	// (0x00026982) popup_midp_note_alarm_window_t10

0x5c19,	// (0x00026994) popup_midp_note_alarm_window_t11_ParamLimits

0x5c19,	// (0x00026994) popup_midp_note_alarm_window_t11

0x5c2b,	// (0x000269a6) scroll_pane_cp17_ParamLimits

0x5c2b,	// (0x000269a6) scroll_pane_cp17

0x1e07,	// (0x00022b82) volume_small_pane_cp_g1

0x20fc,	// (0x00022e77) volume_small_pane_cp_g2

0x2105,	// (0x00022e80) volume_small_pane_cp_g3

0x210e,	// (0x00022e89) volume_small_pane_cp_g4

0x2117,	// (0x00022e92) volume_small_pane_cp_g5

0x2120,	// (0x00022e9b) volume_small_pane_cp_g6

0x2129,	// (0x00022ea4) volume_small_pane_cp_g7

0x2132,	// (0x00022ead) volume_small_pane_cp_g8

0x213b,	// (0x00022eb6) volume_small_pane_cp_g9

0x2144,	// (0x00022ebf) volume_small_pane_cp_g10

0x4897,	// (0x00025612) midp_ticker_pane_g1_ParamLimits

0x48a3,	// (0x0002561e) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x000304ae) midp_ticker_pane_g_ParamLimits

0x48af,	// (0x0002562a) midp_ticker_pane_t1_ParamLimits

0xd64f,	// (0x0002e3ca) aid_fill_nsta_2

0x5440,	// (0x000261bb) list_form2_midp_pane

0x6584,	// (0x000272ff) midp_editing_number_pane_ParamLimits

0x6593,	// (0x0002730e) midp_ticker_pane_ParamLimits

0x7228,	// (0x00027fa3) form2_midp_field_pane

0x724c,	// (0x00027fc7) scroll_pane_cp51

0x726c,	// (0x00027fe7) form2_midp_button_pane_ParamLimits

0x726c,	// (0x00027fe7) form2_midp_button_pane

0x727e,	// (0x00027ff9) form2_midp_content_pane_ParamLimits

0x727e,	// (0x00027ff9) form2_midp_content_pane

0x7298,	// (0x00028013) form2_midp_field_choice_group_pane

0x72a0,	// (0x0002801b) form2_midp_field_pane_g1

0x72a8,	// (0x00028023) form2_midp_field_pane_g2

0x72b0,	// (0x0002802b) form2_midp_field_pane_g3

0x72b8,	// (0x00028033) form2_midp_field_pane_g4

0x0003,

0xfab8,	// (0x00030833) form2_midp_field_pane_g

0x72c0,	// (0x0002803b) form2_midp_gauge_slider_pane

0x72c8,	// (0x00028043) form2_midp_gauge_wait_pane

0x72d0,	// (0x0002804b) form2_midp_image_pane_ParamLimits

0x72d0,	// (0x0002804b) form2_midp_image_pane

0x72eb,	// (0x00028066) form2_midp_label_pane_ParamLimits

0x72eb,	// (0x00028066) form2_midp_label_pane

0xe057,	// (0x0002edd2) form2_midp_label_pane_cp_ParamLimits

0xe057,	// (0x0002edd2) form2_midp_label_pane_cp

0x7325,	// (0x000280a0) form2_midp_string_pane_ParamLimits

0x7325,	// (0x000280a0) form2_midp_string_pane

0xbbe4,	// (0x0002c95f) form2_midp_text_pane_ParamLimits

0xbbe4,	// (0x0002c95f) form2_midp_text_pane

0x7337,	// (0x000280b2) form2_midp_time_pane

0x7347,	// (0x000280c2) input_focus_pane_cp51_ParamLimits

0x7347,	// (0x000280c2) input_focus_pane_cp51

0x735f,	// (0x000280da) form2_midp_label_pane_t1_ParamLimits

0x735f,	// (0x000280da) form2_midp_label_pane_t1

0xbbfd,	// (0x0002c978) form2_mdip_text_pane_t1_ParamLimits

0xbbfd,	// (0x0002c978) form2_mdip_text_pane_t1

0x0909,	// (0x00021684) form2_midp_time_pane_t1

0x73a8,	// (0x00028123) form2_midp_gauge_slider_pane_t1

0xe076,	// (0x0002edf1) form2_midp_gauge_slider_pane_t2

0xe088,	// (0x0002ee03) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac1,	// (0x0003083c) form2_midp_gauge_slider_pane_t

0x73de,	// (0x00028159) form2_midp_slider_pane

0x73ea,	// (0x00028165) form2_midp_gauge_wait_pane_t1

0x73f8,	// (0x00028173) form2_midp_wait_pane_ParamLimits

0x73f8,	// (0x00028173) form2_midp_wait_pane

0xe09a,	// (0x0002ee15) list_single_2graphic_pane_cp4_ParamLimits

0xe09a,	// (0x0002ee15) list_single_2graphic_pane_cp4

0xda6b,	// (0x0002e7e6) list_single_midp_graphic_pane_cp_ParamLimits

0xda6b,	// (0x0002e7e6) list_single_midp_graphic_pane_cp

0x3180,	// (0x00023efb) list_highlight_pane_cp20

0x7447,	// (0x000281c2) list_single_2graphic_pane_g1_cp4

0x744f,	// (0x000281ca) list_single_2graphic_pane_g2_cp4

0x7457,	// (0x000281d2) list_single_2graphic_pane_t1_cp4

0x3260,	// (0x00023fdb) list_highlight_pane_cp21

0x7466,	// (0x000281e1) list_single_midp_graphic_pane_g4_cp

0x7475,	// (0x000281f0) list_single_midp_graphic_pane_t1_cp

0xe0ae,	// (0x0002ee29) form2_mdip_string_pane_t1_ParamLimits

0xe0ae,	// (0x0002ee29) form2_mdip_string_pane_t1

0x3180,	// (0x00023efb) bg_wml_button_pane_cp2

0xea64,	// (0x0002f7df) form2_midp_image_pane_g1

0xf4d2,	// (0x0003024d) list_double_large_graphic_pane_g5_ParamLimits

0xf4d2,	// (0x0003024d) list_double_large_graphic_pane_g5

0xc595,	// (0x0002d310) midp_form_pane_ParamLimits

0x3260,	// (0x00023fdb) main_apps_wheel_pane_ParamLimits

0xcb7b,	// (0x0002d8f6) popup_preview_window_ParamLimits

0xcb7b,	// (0x0002d8f6) popup_preview_window

0x1c7a,	// (0x000229f5) popup_touch_info_window_ParamLimits

0x1c7a,	// (0x000229f5) popup_touch_info_window

0x1c98,	// (0x00022a13) popup_touch_menu_window_ParamLimits

0x1c98,	// (0x00022a13) popup_touch_menu_window

0xea5a,	// (0x0002f7d5) bg_popup_sub_pane_cp6

0x7583,	// (0x000282fe) list_touch_menu_pane

0x758b,	// (0x00028306) list_single_touch_menu_pane_ParamLimits

0x758b,	// (0x00028306) list_single_touch_menu_pane

0x75a1,	// (0x0002831c) list_single_touch_menu_pane_t1

0x3260,	// (0x00023fdb) bg_popup_sub_pane_cp7_ParamLimits

0x3260,	// (0x00023fdb) bg_popup_sub_pane_cp7

0x75af,	// (0x0002832a) heading_sub_pane

0x75b7,	// (0x00028332) list_touch_info_pane_ParamLimits

0x75b7,	// (0x00028332) list_touch_info_pane

0x75c6,	// (0x00028341) list_single_touch_info_pane_ParamLimits

0x75c6,	// (0x00028341) list_single_touch_info_pane

0x75d8,	// (0x00028353) list_single_touch_info_pane_t1

0x75e6,	// (0x00028361) list_single_touch_info_pane_t2

0x0001,

0xfacf,	// (0x0003084a) list_single_touch_info_pane_t

0x47ba,	// (0x00025535) bg_popup_heading_pane_cp

0x75f4,	// (0x0002836f) heading_sub_pane_t1

0x5088,	// (0x00025e03) bg_popup_preview_window_pane_cp_ParamLimits

0x5088,	// (0x00025e03) bg_popup_preview_window_pane_cp

0x75af,	// (0x0002832a) heading_preview_pane

0x75b7,	// (0x00028332) list_preview_pane_ParamLimits

0x75b7,	// (0x00028332) list_preview_pane

0x7602,	// (0x0002837d) popup_preview_window_g1

0x75c6,	// (0x00028341) list_single_preview_pane_ParamLimits

0x75c6,	// (0x00028341) list_single_preview_pane

0x760a,	// (0x00028385) list_single_preview_pane_g1

0x7612,	// (0x0002838d) list_single_preview_pane_t1

0x75d8,	// (0x00028353) list_single_preview_pane_t2

0x0001,

0xfad4,	// (0x0003084f) list_single_preview_pane_t

0x7620,	// (0x0002839b) bg_popup_heading_pane_cp2_ParamLimits

0x7620,	// (0x0002839b) bg_popup_heading_pane_cp2

0x7636,	// (0x000283b1) heading_preview_pane_g1

0x763e,	// (0x000283b9) heading_preview_pane_t1_ParamLimits

0x763e,	// (0x000283b9) heading_preview_pane_t1

0x334c,	// (0x000240c7) soft_indicator_pane_t1_ParamLimits

0x3a60,	// (0x000247db) scroll_pane_ParamLimits

0x3f8b,	// (0x00024d06) scroll_sc2_left_pane

0x3f94,	// (0x00024d0f) scroll_sc2_right_pane

0x3fb3,	// (0x00024d2e) scroll_bg_pane_g1_ParamLimits

0x3fc8,	// (0x00024d43) scroll_bg_pane_g2_ParamLimits

0x3fe0,	// (0x00024d5b) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x00030439) scroll_bg_pane_g_ParamLimits

0x3fb3,	// (0x00024d2e) scroll_handle_pane_g1_ParamLimits

0x4002,	// (0x00024d7d) scroll_handle_pane_g2_ParamLimits

0x3fe0,	// (0x00024d5b) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x00030440) scroll_handle_pane_g_ParamLimits

0x173e,	// (0x000224b9) popup_choice_list_window_ParamLimits

0x173e,	// (0x000224b9) popup_choice_list_window

0x4f52,	// (0x00025ccd) choice_list_pane

0x4fd4,	// (0x00025d4f) cell_toolbar_pane_t1

0x4ffc,	// (0x00025d77) toolbar_button_pane_ParamLimits

0x60e5,	// (0x00026e60) ai_gene_pane_1_t2_ParamLimits

0x60e5,	// (0x00026e60) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x00030663) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x00030663) ai_gene_pane_1_t

0x765b,	// (0x000283d6) scroll_sc2_left_pane_g1

0x765b,	// (0x000283d6) scroll_sc2_right_pane_g1

0x4ade,	// (0x00025859) bg_popup_sub_pane_cp10

0x7665,	// (0x000283e0) list_choice_list_pane

0x767e,	// (0x000283f9) list_single_choice_list_pane_ParamLimits

0x767e,	// (0x000283f9) list_single_choice_list_pane

0x7691,	// (0x0002840c) list_single_choice_list_pane_g1

0x3c91,	// (0x00024a0c) list_single_choice_list_pane_t1_ParamLimits

0x3c91,	// (0x00024a0c) list_single_choice_list_pane_t1

0x7699,	// (0x00028414) choice_list_pane_g1

0x76a1,	// (0x0002841c) choice_list_pane_t1

0xea5a,	// (0x0002f7d5) input_focus_pane_cp11

0x3e68,	// (0x00024be3) title_pane_stacon_g2_ParamLimits

0x3e68,	// (0x00024be3) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0003041f) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0003041f) title_pane_stacon_g

0x47ba,	// (0x00025535) cursor_press_pane

0xc822,	// (0x0002d59d) popup_fep_hwr_window_ParamLimits

0xc822,	// (0x0002d59d) popup_fep_hwr_window

0x1864,	// (0x000225df) popup_fep_vkb_window_ParamLimits

0x1864,	// (0x000225df) popup_fep_vkb_window

0x76af,	// (0x0002842a) cursor_press_pane_g1

0x0002,

0xfafd,	// (0x00030878) fep_vkb_side_pane_g_ParamLimits

0x2186,	// (0x00022f01) fep_hwr_candidate_pane_ParamLimits

0x2186,	// (0x00022f01) fep_hwr_candidate_pane

0x21b0,	// (0x00022f2b) fep_hwr_side_pane_ParamLimits

0x21b0,	// (0x00022f2b) fep_hwr_side_pane

0x21d0,	// (0x00022f4b) fep_hwr_top_pane_ParamLimits

0x21d0,	// (0x00022f4b) fep_hwr_top_pane

0x21e8,	// (0x00022f63) fep_hwr_write_pane_ParamLimits

0x21e8,	// (0x00022f63) fep_hwr_write_pane

0xfafd,	// (0x00030878) fep_vkb_side_pane_g

0x76b7,	// (0x00028432) fep_hwr_top_pane_g1

0x76c9,	// (0x00028444) fep_hwr_top_pane_g2

0x2214,	// (0x00022f8f) fep_hwr_top_pane_g3

0x0002,

0xfad9,	// (0x00030854) fep_hwr_top_pane_g

0x2229,	// (0x00022fa4) fep_hwr_top_text_pane

0x4182,	// (0x00024efd) fep_hwr_top_text_pane_g1

0x76ff,	// (0x0002847a) fep_hwr_top_text_pane_t1

0x231f,	// (0x0002309a) fep_hwr_candidate_pane_g1

0x7952,	// (0x000286cd) fep_vkb_keypad_pane_g3_ParamLimits

0x7952,	// (0x000286cd) fep_vkb_keypad_pane_g3

0x797a,	// (0x000286f5) fep_vkb_keypad_pane_g4_ParamLimits

0x797a,	// (0x000286f5) fep_vkb_keypad_pane_g4

0x79e9,	// (0x00028764) fep_vkb_bottom_pane_g2_ParamLimits

0x79e9,	// (0x00028764) fep_vkb_bottom_pane_g2

0x0001,

0xfb04,	// (0x0003087f) fep_vkb_bottom_pane_g_ParamLimits

0xfb04,	// (0x0003087f) fep_vkb_bottom_pane_g

0x765b,	// (0x000283d6) cell_vkb_side_pane_g2

0x0001,

0xfb0e,	// (0x00030889) cell_vkb_side_pane_g

0x7a74,	// (0x000287ef) cell_vkb_side_pane_t1

0x7a82,	// (0x000287fd) cell_vkb_side_pane_t1_copy1

0x765b,	// (0x000283d6) bg_fep_vkb_candidate_pane_g2

0x7bae,	// (0x00028929) cell_vkb_candidate_pane_ParamLimits

0x770d,	// (0x00028488) aid_size_cell_vkb_ParamLimits

0x770d,	// (0x00028488) aid_size_cell_vkb

0x7bae,	// (0x00028929) cell_vkb_candidate_pane

0x2339,	// (0x000230b4) bg_popup_fep_shadow_pane_g1

0xe158,	// (0x0002eed3) fep_vkb_bottom_pane_ParamLimits

0xe158,	// (0x0002eed3) fep_vkb_bottom_pane

0x77d1,	// (0x0002854c) fep_vkb_candidate_pane_ParamLimits

0x77d1,	// (0x0002854c) fep_vkb_candidate_pane

0xe17d,	// (0x0002eef8) fep_vkb_keypad_pane_ParamLimits

0xe17d,	// (0x0002eef8) fep_vkb_keypad_pane

0xe1b9,	// (0x0002ef34) fep_vkb_side_pane_ParamLimits

0xe1b9,	// (0x0002ef34) fep_vkb_side_pane

0xe1f5,	// (0x0002ef70) fep_vkb_top_pane_ParamLimits

0xe1f5,	// (0x0002ef70) fep_vkb_top_pane

0x78ab,	// (0x00028626) fep_vkb_top_pane_g1_ParamLimits

0x78ab,	// (0x00028626) fep_vkb_top_pane_g1

0x78ba,	// (0x00028635) fep_vkb_top_pane_g2_ParamLimits

0x78ba,	// (0x00028635) fep_vkb_top_pane_g2

0x78c9,	// (0x00028644) fep_vkb_top_pane_g3_ParamLimits

0x78c9,	// (0x00028644) fep_vkb_top_pane_g3

0x0003,

0xfaf4,	// (0x0003086f) fep_vkb_top_pane_g_ParamLimits

0xfaf4,	// (0x0003086f) fep_vkb_top_pane_g

0x78e7,	// (0x00028662) fep_vkb_top_text_pane_ParamLimits

0x78e7,	// (0x00028662) fep_vkb_top_text_pane

0xe231,	// (0x0002efac) fep_vkb_side_pane_g1_ParamLimits

0xe231,	// (0x0002efac) fep_vkb_side_pane_g1

0x7941,	// (0x000286bc) grid_vkb_side_pane_ParamLimits

0x7941,	// (0x000286bc) grid_vkb_side_pane

0x2341,	// (0x000230bc) bg_popup_fep_shadow_pane_g2

0x234a,	// (0x000230c5) bg_popup_fep_shadow_pane_g3

0x2352,	// (0x000230cd) bg_popup_fep_shadow_pane_g4

0x235b,	// (0x000230d6) bg_popup_fep_shadow_pane_g5

0x2365,	// (0x000230e0) bg_popup_fep_shadow_pane_g6

0x236d,	// (0x000230e8) bg_popup_fep_shadow_pane_g7

0x3b65,	// (0x000248e0) bg_popup_fep_shadow_pane_g8

0x7998,	// (0x00028713) grid_vkb_keypad_number_pane_ParamLimits

0x7998,	// (0x00028713) grid_vkb_keypad_number_pane

0x79a8,	// (0x00028723) grid_vkb_keypad_pane_ParamLimits

0x79a8,	// (0x00028723) grid_vkb_keypad_pane

0x79ce,	// (0x00028749) fep_vkb_bottom_pane_g1_ParamLimits

0x79ce,	// (0x00028749) fep_vkb_bottom_pane_g1

0x79f7,	// (0x00028772) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x79f7,	// (0x00028772) grid_vkb_keypad_bottom_left_pane

0x7a0c,	// (0x00028787) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7a0c,	// (0x00028787) grid_vkb_keypad_bottom_right_pane

0x7a21,	// (0x0002879c) fep_vkb_top_text_pane_g1

0xe278,	// (0x0002eff3) fep_vkb_top_text_pane_t1

0xe28a,	// (0x0002f005) cell_vkb_side_pane_ParamLimits

0xe28a,	// (0x0002f005) cell_vkb_side_pane

0x765b,	// (0x000283d6) cell_vkb_side_pane_g1

0x7a90,	// (0x0002880b) cell_vkb_keypad_pane_ParamLimits

0x7a90,	// (0x0002880b) cell_vkb_keypad_pane

0x7b05,	// (0x00028880) cell_vkb_keypad_pane_g1

0x0008,

0xfb21,	// (0x0003089c) bg_popup_fep_shadow_pane_g

0x765b,	// (0x000283d6) cell_hwr_side_pane_g1

0x765b,	// (0x000283d6) cell_hwr_side_pane_g2

0x7b0f,	// (0x0002888a) cell_vkb_keypad_pane_t1

0xe2a0,	// (0x0002f01b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe2a0,	// (0x0002f01b) cell_vkb_keypad_bottom_left_pane

0xe2b5,	// (0x0002f030) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe2b5,	// (0x0002f030) cell_vkb_keypad_bottom_right_pane

0x765b,	// (0x000283d6) cell_vkb_keypad_bottom_left_pane_g1

0x765b,	// (0x000283d6) cell_vkb_keypad_bottom_right_pane_g1

0x7b73,	// (0x000288ee) cell_vkb_keypad_number_pane_ParamLimits

0x7b73,	// (0x000288ee) cell_vkb_keypad_number_pane

0x7b92,	// (0x0002890d) cell_vkb_keypad_number_pane_g1

0x7b9c,	// (0x00028917) cell_vkb_keypad_number_pane_g2

0x7ba5,	// (0x00028920) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb13,	// (0x0003088e) cell_vkb_keypad_number_pane_g

0x7b0f,	// (0x0002888a) cell_vkb_keypad_number_pane_t1

0x7bc9,	// (0x00028944) fep_vkb_candidate_pane_g1

0x0001,

0xfb0e,	// (0x00030889) cell_hwr_side_pane_g

0x7be2,	// (0x0002895d) cell_hwr_side_pane_t1

0x237f,	// (0x000230fa) cell_hwr_side_pane_t1_copy1

0x78d9,	// (0x00028654) cell_hwr_candidate_pane_g1

0x238d,	// (0x00023108) cell_hwr_candidate_pane_t1

0x765b,	// (0x000283d6) cell_vkb_candidate_pane_g2

0x7c68,	// (0x000289e3) cell_vkb_candidate_pane_t1

0x214d,	// (0x00022ec8) bg_popup_fep_shadow_pane_ParamLimits

0x214d,	// (0x00022ec8) bg_popup_fep_shadow_pane

0xe11e,	// (0x0002ee99) bg_fep_hwr_top_pane_g4

0x76db,	// (0x00028456) bg_hwr_side_pane_g1_ParamLimits

0x76db,	// (0x00028456) bg_hwr_side_pane_g1

0xceb5,	// (0x0002dc30) cell_hwr_side_pane_ParamLimits

0xceb5,	// (0x0002dc30) cell_hwr_side_pane

0x22a0,	// (0x0002301b) fep_hwr_write_pane_g1_ParamLimits

0x22a0,	// (0x0002301b) fep_hwr_write_pane_g1

0x22ad,	// (0x00023028) fep_hwr_write_pane_g2_ParamLimits

0x22ad,	// (0x00023028) fep_hwr_write_pane_g2

0x22ba,	// (0x00023035) fep_hwr_write_pane_g3_ParamLimits

0x22ba,	// (0x00023035) fep_hwr_write_pane_g3

0xced5,	// (0x0002dc50) fep_hwr_write_pane_g4_ParamLimits

0xced5,	// (0x0002dc50) fep_hwr_write_pane_g4

0x0005,

0xfae0,	// (0x0003085b) fep_hwr_write_pane_g_ParamLimits

0xfae0,	// (0x0003085b) fep_hwr_write_pane_g

0xe11e,	// (0x0002ee99) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe11e,	// (0x0002ee99) bg_fep_hwr_candidate_pane_g2

0x22dd,	// (0x00023058) cell_hwr_candidate_pane_ParamLimits

0x22dd,	// (0x00023058) cell_hwr_candidate_pane

0x231f,	// (0x0002309a) fep_hwr_candidate_pane_g1_ParamLimits

0x773b,	// (0x000284b6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x773b,	// (0x000284b6) bg_popup_fep_shadow_pane_cp2

0x78d9,	// (0x00028654) fep_vkb_top_pane_g4_ParamLimits

0x78d9,	// (0x00028654) fep_vkb_top_pane_g4

0x791f,	// (0x0002869a) fep_vkb_side_pane_g2_ParamLimits

0x791f,	// (0x0002869a) fep_vkb_side_pane_g2

0xb866,	// (0x0002c5e1) list_setting_pane_t4_ParamLimits

0xb866,	// (0x0002c5e1) list_setting_pane_t4

0xb900,	// (0x0002c67b) list_setting_number_pane_t5_ParamLimits

0xb900,	// (0x0002c67b) list_setting_number_pane_t5

0x41b9,	// (0x00024f34) list_double_heading_pane_cp2_ParamLimits

0x41b9,	// (0x00024f34) list_double_heading_pane_cp2

0x3afb,	// (0x00024876) list_double_heading_pane_g1_cp2_ParamLimits

0x3afb,	// (0x00024876) list_double_heading_pane_g1_cp2

0x3b07,	// (0x00024882) list_double_heading_pane_g2_cp2_ParamLimits

0x3b07,	// (0x00024882) list_double_heading_pane_g2_cp2

0x7c76,	// (0x000289f1) list_double_heading_pane_t1_cp2_ParamLimits

0x7c76,	// (0x000289f1) list_double_heading_pane_t1_cp2

0x7c8c,	// (0x00028a07) list_double_heading_pane_t2_cp2_ParamLimits

0x7c8c,	// (0x00028a07) list_double_heading_pane_t2_cp2

0xea52,	// (0x0002f7cd) aid_value_unit2

0x0f84,	// (0x00021cff) popup_preview_fixed_window

0x34e9,	// (0x00024264) bg_popup_preview_window_pane_cp02

0x7c9e,	// (0x00028a19) list_preview_fixed_pane

0x7ce4,	// (0x00028a5f) list_empty_pane_fp_ParamLimits

0x7ce4,	// (0x00028a5f) list_empty_pane_fp

0x7ce4,	// (0x00028a5f) list_single_cale_day_pane_fp_ParamLimits

0x7ce4,	// (0x00028a5f) list_single_cale_day_pane_fp

0x7ce4,	// (0x00028a5f) list_single_graphic_heading_pane_fp_ParamLimits

0x7ce4,	// (0x00028a5f) list_single_graphic_heading_pane_fp

0x7ce4,	// (0x00028a5f) list_single_graphic_pane_fp_ParamLimits

0x7ce4,	// (0x00028a5f) list_single_graphic_pane_fp

0x7ce4,	// (0x00028a5f) list_single_heading_pane_fp_ParamLimits

0x7ce4,	// (0x00028a5f) list_single_heading_pane_fp

0x7ce4,	// (0x00028a5f) list_single_pane_fp_ParamLimits

0x7ce4,	// (0x00028a5f) list_single_pane_fp

0x7cf9,	// (0x00028a74) list_single_pane_fp_g1_ParamLimits

0x7cf9,	// (0x00028a74) list_single_pane_fp_g1

0x091c,	// (0x00021697) list_single_pane_fp_g2_ParamLimits

0x091c,	// (0x00021697) list_single_pane_fp_g2

0x0928,	// (0x000216a3) list_single_pane_fp_g3_ParamLimits

0x0928,	// (0x000216a3) list_single_pane_fp_g3

0x7d05,	// (0x00028a80) list_single_pane_fp_g4_ParamLimits

0x7d05,	// (0x00028a80) list_single_pane_fp_g4

0x0003,

0xfb42,	// (0x000308bd) list_single_pane_fp_g_ParamLimits

0xfb42,	// (0x000308bd) list_single_pane_fp_g

0x093c,	// (0x000216b7) list_single_pane_fp_t1_ParamLimits

0x093c,	// (0x000216b7) list_single_pane_fp_t1

0x0953,	// (0x000216ce) list_single_graphic_pane_fp_g1_ParamLimits

0x0953,	// (0x000216ce) list_single_graphic_pane_fp_g1

0x7cf9,	// (0x00028a74) list_single_graphic_pane_fp_g2_ParamLimits

0x7cf9,	// (0x00028a74) list_single_graphic_pane_fp_g2

0x091c,	// (0x00021697) list_single_graphic_pane_fp_g3_ParamLimits

0x091c,	// (0x00021697) list_single_graphic_pane_fp_g3

0x0928,	// (0x000216a3) list_single_graphic_pane_fp_g4_ParamLimits

0x0928,	// (0x000216a3) list_single_graphic_pane_fp_g4

0x7d05,	// (0x00028a80) list_single_graphic_pane_fp_g5_ParamLimits

0x7d05,	// (0x00028a80) list_single_graphic_pane_fp_g5

0x0004,

0xfb4b,	// (0x000308c6) list_single_graphic_pane_fp_g_ParamLimits

0xfb4b,	// (0x000308c6) list_single_graphic_pane_fp_g

0x095f,	// (0x000216da) list_single_graphic_pane_fp_t1_ParamLimits

0x095f,	// (0x000216da) list_single_graphic_pane_fp_t1

0x0953,	// (0x000216ce) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0953,	// (0x000216ce) list_single_graphic_heading_pane_fp_g1

0x7cf9,	// (0x00028a74) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7cf9,	// (0x00028a74) list_single_graphic_heading_pane_fp_g2

0x091c,	// (0x00021697) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x091c,	// (0x00021697) list_single_graphic_heading_pane_fp_g3

0x0928,	// (0x000216a3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0928,	// (0x000216a3) list_single_graphic_heading_pane_fp_g4

0x7d05,	// (0x00028a80) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7d05,	// (0x00028a80) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb4b,	// (0x000308c6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb4b,	// (0x000308c6) list_single_graphic_heading_pane_fp_g

0x0975,	// (0x000216f0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0975,	// (0x000216f0) list_single_graphic_heading_pane_fp_t1

0x098b,	// (0x00021706) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x098b,	// (0x00021706) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb56,	// (0x000308d1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb56,	// (0x000308d1) list_single_graphic_heading_pane_fp_t

0x099d,	// (0x00021718) list_single_cale_day_pane_fp_g1_ParamLimits

0x099d,	// (0x00021718) list_single_cale_day_pane_fp_g1

0x7d11,	// (0x00028a8c) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d11,	// (0x00028a8c) list_single_cale_day_pane_fp_g2

0x09d5,	// (0x00021750) list_single_cale_day_pane_fp_g3_ParamLimits

0x09d5,	// (0x00021750) list_single_cale_day_pane_fp_g3

0x09fd,	// (0x00021778) list_single_cale_day_pane_fp_g4_ParamLimits

0x09fd,	// (0x00021778) list_single_cale_day_pane_fp_g4

0x0a21,	// (0x0002179c) list_single_cale_day_pane_fp_g5_ParamLimits

0x0a21,	// (0x0002179c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb5b,	// (0x000308d6) list_single_cale_day_pane_fp_g_ParamLimits

0xfb5b,	// (0x000308d6) list_single_cale_day_pane_fp_g

0x0a45,	// (0x000217c0) list_single_cale_day_pane_fp_t1_ParamLimits

0x0a45,	// (0x000217c0) list_single_cale_day_pane_fp_t1

0x0a6b,	// (0x000217e6) list_single_cale_day_pane_fp_t2_ParamLimits

0x0a6b,	// (0x000217e6) list_single_cale_day_pane_fp_t2

0x0a84,	// (0x000217ff) list_single_cale_day_pane_fp_t3_ParamLimits

0x0a84,	// (0x000217ff) list_single_cale_day_pane_fp_t3

0x0002,

0xfb66,	// (0x000308e1) list_single_cale_day_pane_fp_t_ParamLimits

0xfb66,	// (0x000308e1) list_single_cale_day_pane_fp_t

0x7cf9,	// (0x00028a74) list_empty_pane_fp_g1_ParamLimits

0x7cf9,	// (0x00028a74) list_empty_pane_fp_g1

0x0a9d,	// (0x00021818) list_empty_pane_fp_t1

0x0aab,	// (0x00021826) list_empty_pane_fp_t2

0x0001,

0xfb6d,	// (0x000308e8) list_empty_pane_fp_t

0x7cf9,	// (0x00028a74) list_single_heading_pane_fp_g1_ParamLimits

0x7cf9,	// (0x00028a74) list_single_heading_pane_fp_g1

0x091c,	// (0x00021697) list_single_heading_pane_fp_g2_ParamLimits

0x091c,	// (0x00021697) list_single_heading_pane_fp_g2

0x0928,	// (0x000216a3) list_single_heading_pane_fp_g3_ParamLimits

0x0928,	// (0x000216a3) list_single_heading_pane_fp_g3

0x0002,

0xfb72,	// (0x000308ed) list_single_heading_pane_fp_g_ParamLimits

0xfb72,	// (0x000308ed) list_single_heading_pane_fp_g

0x0ab9,	// (0x00021834) list_single_heading_pane_fp_t1_ParamLimits

0x0ab9,	// (0x00021834) list_single_heading_pane_fp_t1

0x0acb,	// (0x00021846) list_single_heading_pane_fp_t2_ParamLimits

0x0acb,	// (0x00021846) list_single_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x000308f4) list_single_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x000308f4) list_single_heading_pane_fp_t

0x3cff,	// (0x00024a7a) aid_size_cell_fast

0x3459,	// (0x000241d4) soft_indicator_pane_cp1_t1

0x3d3c,	// (0x00024ab7) cell_app_pane_cp2_ParamLimits

0x3d3c,	// (0x00024ab7) cell_app_pane_cp2

0x216f,	// (0x00022eea) fep_hwr_candidate_drop_down_list_pane

0xe12c,	// (0x0002eea7) fep_hwr_candidate_pane_g3_ParamLimits

0xe12c,	// (0x0002eea7) fep_hwr_candidate_pane_g3

0xe139,	// (0x0002eeb4) fep_hwr_candidate_pane_g4_ParamLimits

0xe139,	// (0x0002eeb4) fep_hwr_candidate_pane_g4

0x0002,

0xfaed,	// (0x00030868) fep_hwr_candidate_pane_g_ParamLimits

0xfaed,	// (0x00030868) fep_hwr_candidate_pane_g

0x77c0,	// (0x0002853b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x77c0,	// (0x0002853b) fep_vkb_candidate_drop_down_list_pane

0x7bd1,	// (0x0002894c) fep_vkb_candidate_pane_g3

0x7bd9,	// (0x00028954) fep_vkb_candidate_pane_g4

0x0002,

0xfb1a,	// (0x00030895) fep_vkb_candidate_pane_g

0x78d9,	// (0x00028654) cell_hwr_candidate_pane_g1_ParamLimits

0x7bf0,	// (0x0002896b) cell_hwr_candidate_pane_g3_ParamLimits

0x7bf0,	// (0x0002896b) cell_hwr_candidate_pane_g3

0x7c11,	// (0x0002898c) cell_hwr_candidate_pane_g4_ParamLimits

0x7c11,	// (0x0002898c) cell_hwr_candidate_pane_g4

0x0002,

0xfb34,	// (0x000308af) cell_hwr_candidate_pane_g_ParamLimits

0xfb34,	// (0x000308af) cell_hwr_candidate_pane_g

0x7c32,	// (0x000289ad) cell_vkb_candidate_pane_g3_ParamLimits

0x7c32,	// (0x000289ad) cell_vkb_candidate_pane_g3

0x7c4d,	// (0x000289c8) cell_vkb_candidate_pane_g4_ParamLimits

0x7c4d,	// (0x000289c8) cell_vkb_candidate_pane_g4

0x7d1d,	// (0x00028a98) cell_app_pane_cp2_g1_ParamLimits

0x7d1d,	// (0x00028a98) cell_app_pane_cp2_g1

0x7d3b,	// (0x00028ab6) cell_app_pane_cp2_g2_ParamLimits

0x7d3b,	// (0x00028ab6) cell_app_pane_cp2_g2

0x0001,

0xfb7e,	// (0x000308f9) cell_app_pane_cp2_g_ParamLimits

0xfb7e,	// (0x000308f9) cell_app_pane_cp2_g

0x7d47,	// (0x00028ac2) cell_app_pane_cp2_t1_ParamLimits

0x7d47,	// (0x00028ac2) cell_app_pane_cp2_t1

0x3aed,	// (0x00024868) grid_highlight_pane_cp1_ParamLimits

0x3aed,	// (0x00024868) grid_highlight_pane_cp1

0x23ab,	// (0x00023126) cell_hwr_candidate_pane_cp1_ParamLimits

0x23ab,	// (0x00023126) cell_hwr_candidate_pane_cp1

0x78d9,	// (0x00028654) fep_hwr_candidate_drop_down_list_pane_g1

0x7d59,	// (0x00028ad4) fep_hwr_candidate_drop_down_list_pane_g2

0x7d66,	// (0x00028ae1) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb83,	// (0x000308fe) fep_hwr_candidate_drop_down_list_pane_g

0x23ca,	// (0x00023145) fep_hwr_candidate_drop_down_list_scroll_pane

0x23d3,	// (0x0002314e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x23d3,	// (0x0002314e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x23e0,	// (0x0002315b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x23e0,	// (0x0002315b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x23ed,	// (0x00023168) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x23ed,	// (0x00023168) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c32,	// (0x000289ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c32,	// (0x000289ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c4d,	// (0x000289c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c4d,	// (0x000289c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x23fa,	// (0x00023175) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x23fa,	// (0x00023175) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2415,	// (0x00023190) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2415,	// (0x00023190) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2430,	// (0x000231ab) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2430,	// (0x000231ab) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8a,	// (0x00030905) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8a,	// (0x00030905) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7d73,	// (0x00028aee) cell_vkb_candidate_pane_cp1_ParamLimits

0x7d73,	// (0x00028aee) cell_vkb_candidate_pane_cp1

0x78d9,	// (0x00028654) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x78d9,	// (0x00028654) fep_vkb_candidate_drop_down_list_pane_g1

0x7d59,	// (0x00028ad4) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7d59,	// (0x00028ad4) fep_vkb_candidate_drop_down_list_pane_g2

0x7d66,	// (0x00028ae1) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7d66,	// (0x00028ae1) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb83,	// (0x000308fe) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb83,	// (0x000308fe) fep_vkb_candidate_drop_down_list_pane_g

0x7d93,	// (0x00028b0e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7d93,	// (0x00028b0e) fep_vkb_candidate_drop_down_list_scroll_pane

0x7da0,	// (0x00028b1b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7da0,	// (0x00028b1b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7dad,	// (0x00028b28) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7dad,	// (0x00028b28) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7db9,	// (0x00028b34) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7db9,	// (0x00028b34) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7bf0,	// (0x0002896b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7bf0,	// (0x0002896b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7c11,	// (0x0002898c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c11,	// (0x0002898c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7dc5,	// (0x00028b40) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7dc5,	// (0x00028b40) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7de6,	// (0x00028b61) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7de6,	// (0x00028b61) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7e07,	// (0x00028b82) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7e07,	// (0x00028b82) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x00030916) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x00030916) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc00d,	// (0x0002cd88) title_pane_g1_ParamLimits

0xc020,	// (0x0002cd9b) title_pane_g2_ParamLimits

0xf529,	// (0x000302a4) title_pane_g_ParamLimits

0x4172,	// (0x00024eed) aid_call2_pane

0x417a,	// (0x00024ef5) aid_call_pane

0x4182,	// (0x00024efd) popup_clock_analogue_window_g1

0x4182,	// (0x00024efd) popup_clock_analogue_window_g2

0x12f5,	// (0x00022070) popup_clock_analogue_window_g3

0x12fe,	// (0x00022079) popup_clock_analogue_window_g4

0xea64,	// (0x0002f7df) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0003044e) popup_clock_analogue_window_g

0x1306,	// (0x00022081) popup_clock_analogue_window_t1

0x1314,	// (0x0002208f) clock_digital_number_pane_ParamLimits

0x1314,	// (0x0002208f) clock_digital_number_pane

0x1320,	// (0x0002209b) clock_digital_number_pane_cp02_ParamLimits

0x1320,	// (0x0002209b) clock_digital_number_pane_cp02

0x132c,	// (0x000220a7) clock_digital_number_pane_cp03_ParamLimits

0x132c,	// (0x000220a7) clock_digital_number_pane_cp03

0x1338,	// (0x000220b3) clock_digital_number_pane_cp04_ParamLimits

0x1338,	// (0x000220b3) clock_digital_number_pane_cp04

0x1344,	// (0x000220bf) clock_digital_separator_pane_ParamLimits

0x1344,	// (0x000220bf) clock_digital_separator_pane

0x1350,	// (0x000220cb) popup_clock_digital_window_t1_ParamLimits

0x1350,	// (0x000220cb) popup_clock_digital_window_t1

0xea64,	// (0x0002f7df) clock_digital_number_pane_g1

0xea64,	// (0x0002f7df) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x00030459) clock_digital_number_pane_g

0xea64,	// (0x0002f7df) clock_digital_separator_pane_g1

0xea64,	// (0x0002f7df) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x00030459) clock_digital_separator_pane_g

0xd62b,	// (0x0002e3a6) aid_fill_nsta_ParamLimits

0xd761,	// (0x0002e4dc) indicator_nsta_pane_ParamLimits

0x4ddf,	// (0x00025b5a) popup_clock_analogue_window

0x4ddf,	// (0x00025b5a) popup_clock_digital_window

0xdf84,	// (0x0002ecff) grid_indicator_nsta_pane_ParamLimits

0x705f,	// (0x00027dda) clock_nsta_pane_t2

0x0001,

0xfa6d,	// (0x000307e8) clock_nsta_pane_t

0x12b9,	// (0x00022034) aid_size_max_handle

0x12c3,	// (0x0002203e) aid_size_min_handle

0x47ba,	// (0x00025535) editor_scroll_pane

0x7e22,	// (0x00028b9d) ex_editor_pane

0x3c6d,	// (0x000249e8) scroll_pane_cp13

0x3a8c,	// (0x00024807) scroll_pane_cp14

0x41b1,	// (0x00024f2c) scroll_pane_cp36

0xc4eb,	// (0x0002d266) list_single_graphic_hl_pane_cp2_ParamLimits

0xc4eb,	// (0x0002d266) list_single_graphic_hl_pane_cp2

0xddc3,	// (0x0002eb3e) list_single_graphic_hl_pane_ParamLimits

0xddc3,	// (0x0002eb3e) list_single_graphic_hl_pane

0x0ae1,	// (0x0002185c) aid_size_min_hl_cp1

0x7e2a,	// (0x00028ba5) list_highlight_pane_cp34_ParamLimits

0x7e2a,	// (0x00028ba5) list_highlight_pane_cp34

0x7e3b,	// (0x00028bb6) list_single_graphic_hl_pane_g1_ParamLimits

0x7e3b,	// (0x00028bb6) list_single_graphic_hl_pane_g1

0xf4f3,	// (0x0003026e) list_single_graphic_hl_pane_g2_ParamLimits

0xf4f3,	// (0x0003026e) list_single_graphic_hl_pane_g2

0xf4f3,	// (0x0003026e) list_single_graphic_hl_pane_g3_ParamLimits

0xf4f3,	// (0x0003026e) list_single_graphic_hl_pane_g3

0xf4ff,	// (0x0003027a) list_single_graphic_hl_pane_g4_ParamLimits

0xf4ff,	// (0x0003027a) list_single_graphic_hl_pane_g4

0xbc1a,	// (0x0002c995) list_single_graphic_hl_pane_g5_ParamLimits

0xbc1a,	// (0x0002c995) list_single_graphic_hl_pane_g5

0x0004,

0xfbac,	// (0x00030927) list_single_graphic_hl_pane_g_ParamLimits

0xfbac,	// (0x00030927) list_single_graphic_hl_pane_g

0xbc2e,	// (0x0002c9a9) list_single_graphic_hl_pane_t1_ParamLimits

0xbc2e,	// (0x0002c9a9) list_single_graphic_hl_pane_t1

0x7e48,	// (0x00028bc3) aid_size_min_hl_cp2

0x7e51,	// (0x00028bcc) list_highlight_pane_cp34_cp2_ParamLimits

0x7e51,	// (0x00028bcc) list_highlight_pane_cp34_cp2

0x7e3b,	// (0x00028bb6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7e3b,	// (0x00028bb6) list_single_graphic_hl_pane_g1_cp2

0x7e5e,	// (0x00028bd9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7e5e,	// (0x00028bd9) list_single_graphic_hl_pane_g2_cp2

0x7e6a,	// (0x00028be5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7e6a,	// (0x00028be5) list_single_graphic_hl_pane_g3_cp2

0x7e78,	// (0x00028bf3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7e78,	// (0x00028bf3) list_single_graphic_hl_pane_g4_cp2

0x7e84,	// (0x00028bff) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7e84,	// (0x00028bff) list_single_graphic_hl_pane_g5_cp2

0xc650,	// (0x0002d3cb) control_pane_g4_ParamLimits

0xc650,	// (0x0002d3cb) control_pane_g4

0x4ade,	// (0x00025859) bg_popup_sub_pane_cp10_ParamLimits

0x7665,	// (0x000283e0) list_choice_list_pane_ParamLimits

0x7674,	// (0x000283ef) scroll_pane_cp23

0x34e9,	// (0x00024264) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c9e,	// (0x00028a19) list_preview_fixed_pane_ParamLimits

0x7cb4,	// (0x00028a2f) list_preview_fixed_pane_cp_ParamLimits

0x7cb4,	// (0x00028a2f) list_preview_fixed_pane_cp

0x7cc0,	// (0x00028a3b) popup_preview_fixed_window_g1_ParamLimits

0x7cc0,	// (0x00028a3b) popup_preview_fixed_window_g1

0x7ccc,	// (0x00028a47) popup_preview_fixed_window_g2_ParamLimits

0x7ccc,	// (0x00028a47) popup_preview_fixed_window_g2

0x0002,

0xfb3b,	// (0x000308b6) popup_preview_fixed_window_g_ParamLimits

0xfb3b,	// (0x000308b6) popup_preview_fixed_window_g

0x122d,	// (0x00021fa8) aid_navi_side_left_pane_ParamLimits

0x1242,	// (0x00021fbd) aid_navi_side_right_pane_ParamLimits

0x125a,	// (0x00021fd5) navi_icon_pane_stacon_ParamLimits

0x126e,	// (0x00021fe9) navi_navi_pane_stacon_ParamLimits

0x125a,	// (0x00021fd5) navi_text_pane_stacon_ParamLimits

0xea5a,	// (0x0002f7d5) main_text_info_pane

0x7eae,	// (0x00028c29) listscroll_text_info_pane

0x7eb6,	// (0x00028c31) list_text_info_pane_ParamLimits

0x7eb6,	// (0x00028c31) list_text_info_pane

0x7ec5,	// (0x00028c40) scroll_pane_cp24_ParamLimits

0x7ec5,	// (0x00028c40) scroll_pane_cp24

0xe2d0,	// (0x0002f04b) list_text_info_pane_t1_ParamLimits

0xe2d0,	// (0x0002f04b) list_text_info_pane_t1

0xc795,	// (0x0002d510) popup_fast_swap2_window_ParamLimits

0xc795,	// (0x0002d510) popup_fast_swap2_window

0x7f14,	// (0x00028c8f) aid_size_cell_fast2

0xea5a,	// (0x0002f7d5) bg_popup_window_pane_cp17

0x5474,	// (0x000261ef) heading_pane_cp2

0x547c,	// (0x000261f7) listscroll_fast2_pane

0x7f1e,	// (0x00028c99) grid_fast2_pane

0x7f28,	// (0x00028ca3) listscroll_fast2_pane_g1

0x7f30,	// (0x00028cab) listscroll_fast2_pane_g2

0x0001,

0xfbb7,	// (0x00030932) listscroll_fast2_pane_g

0x3c6d,	// (0x000249e8) scroll_pane_cp26

0x7f3a,	// (0x00028cb5) cell_fast2_pane_ParamLimits

0x7f3a,	// (0x00028cb5) cell_fast2_pane

0x7f4f,	// (0x00028cca) cell_fast2_pane_g1

0x7f58,	// (0x00028cd3) cell_fast2_pane_g2

0x7f61,	// (0x00028cdc) cell_fast2_pane_g3

0x0002,

0xfbbc,	// (0x00030937) cell_fast2_pane_g

0x3849,	// (0x000245c4) grid_highlight_pane_cp9

0x385e,	// (0x000245d9) main_eswt_pane_ParamLimits

0x385e,	// (0x000245d9) main_eswt_pane

0x7eda,	// (0x00028c55) list_single_text_info_pane

0x7f69,	// (0x00028ce4) eswt_ctrl_button_pane

0x7f69,	// (0x00028ce4) eswt_ctrl_canvas_pane

0x7f71,	// (0x00028cec) eswt_ctrl_combo_pane

0x7f69,	// (0x00028ce4) eswt_ctrl_default_pane

0x7f69,	// (0x00028ce4) eswt_ctrl_label_pane

0x7f79,	// (0x00028cf4) eswt_ctrl_wait_pane

0x7f81,	// (0x00028cfc) eswt_shell_pane

0xea5a,	// (0x0002f7d5) listscroll_eswt_app_pane

0x7fa1,	// (0x00028d1c) popup_eswt_tasktip_window_ParamLimits

0x7fa1,	// (0x00028d1c) popup_eswt_tasktip_window

0x5088,	// (0x00025e03) bg_popup_window_pane_cp18

0x7fb2,	// (0x00028d2d) eswt_control_pane_g1_ParamLimits

0x7fb2,	// (0x00028d2d) eswt_control_pane_g1

0x7fbf,	// (0x00028d3a) eswt_control_pane_g2_ParamLimits

0x7fbf,	// (0x00028d3a) eswt_control_pane_g2

0x7fcc,	// (0x00028d47) eswt_control_pane_g3_ParamLimits

0x7fcc,	// (0x00028d47) eswt_control_pane_g3

0x7fd9,	// (0x00028d54) eswt_control_pane_g4_ParamLimits

0x7fd9,	// (0x00028d54) eswt_control_pane_g4

0x0003,

0xfbc3,	// (0x0003093e) eswt_control_pane_g_ParamLimits

0xfbc3,	// (0x0003093e) eswt_control_pane_g

0x3aed,	// (0x00024868) bg_button_pane_ParamLimits

0x3aed,	// (0x00024868) bg_button_pane

0x385e,	// (0x000245d9) common_borders_pane_copy2_ParamLimits

0x385e,	// (0x000245d9) common_borders_pane_copy2

0x7fe6,	// (0x00028d61) control_button_pane_g1_ParamLimits

0x7fe6,	// (0x00028d61) control_button_pane_g1

0x7ff2,	// (0x00028d6d) control_button_pane_g2_ParamLimits

0x7ff2,	// (0x00028d6d) control_button_pane_g2

0x7ffe,	// (0x00028d79) control_button_pane_g3_ParamLimits

0x7ffe,	// (0x00028d79) control_button_pane_g3

0x0002,

0xfbcc,	// (0x00030947) control_button_pane_g_ParamLimits

0xfbcc,	// (0x00030947) control_button_pane_g

0x8012,	// (0x00028d8d) control_button_pane_t1

0x8020,	// (0x00028d9b) control_button_pane_t2

0x0001,

0xfbd3,	// (0x0003094e) control_button_pane_t

0x5008,	// (0x00025d83) bg_button_pane_g1

0x5010,	// (0x00025d8b) bg_button_pane_g2

0x5018,	// (0x00025d93) bg_button_pane_g3

0x5020,	// (0x00025d9b) bg_button_pane_g4

0x5028,	// (0x00025da3) bg_button_pane_g5

0x5030,	// (0x00025dab) bg_button_pane_g6

0x5038,	// (0x00025db3) bg_button_pane_g7

0x5040,	// (0x00025dbb) bg_button_pane_g8

0x5048,	// (0x00025dc3) bg_button_pane_g9

0x0008,

0xf83c,	// (0x000305b7) bg_button_pane_g

0x7620,	// (0x0002839b) common_borders_pane_ParamLimits

0x7620,	// (0x0002839b) common_borders_pane

0x7fb2,	// (0x00028d2d) eswt_control_pane_g1_copy1_ParamLimits

0x7fb2,	// (0x00028d2d) eswt_control_pane_g1_copy1

0x7fbf,	// (0x00028d3a) eswt_control_pane_g2_copy1_ParamLimits

0x7fbf,	// (0x00028d3a) eswt_control_pane_g2_copy1

0x7fcc,	// (0x00028d47) eswt_control_pane_g3_copy1_ParamLimits

0x7fcc,	// (0x00028d47) eswt_control_pane_g3_copy1

0x7fd9,	// (0x00028d54) eswt_control_pane_g4_copy1_ParamLimits

0x7fd9,	// (0x00028d54) eswt_control_pane_g4_copy1

0x765b,	// (0x000283d6) bg_eswt_ctrl_canvas_pane_g1

0x7620,	// (0x0002839b) common_borders_pane_cp2_ParamLimits

0x7620,	// (0x0002839b) common_borders_pane_cp2

0x7620,	// (0x0002839b) common_borders_pane_cp3_ParamLimits

0x7620,	// (0x0002839b) common_borders_pane_cp3

0x802e,	// (0x00028da9) separator_horizontal_pane

0x8036,	// (0x00028db1) separator_vertical_pane

0x7fb2,	// (0x00028d2d) eswt_control_pane_g1_copy2_ParamLimits

0x7fb2,	// (0x00028d2d) eswt_control_pane_g1_copy2

0x7fbf,	// (0x00028d3a) eswt_control_pane_g2_copy2_ParamLimits

0x7fbf,	// (0x00028d3a) eswt_control_pane_g2_copy2

0x7fcc,	// (0x00028d47) eswt_control_pane_g3_copy2_ParamLimits

0x7fcc,	// (0x00028d47) eswt_control_pane_g3_copy2

0x7fd9,	// (0x00028d54) eswt_control_pane_g4_copy2_ParamLimits

0x7fd9,	// (0x00028d54) eswt_control_pane_g4_copy2

0xea5a,	// (0x0002f7d5) common_borders_pane_cp4

0x803f,	// (0x00028dba) separator_horizontal_pane_g1

0x8048,	// (0x00028dc3) separator_horizontal_pane_g2

0x8051,	// (0x00028dcc) separator_horizontal_pane_g3

0x0002,

0xfbd8,	// (0x00030953) separator_horizontal_pane_g

0x7fb2,	// (0x00028d2d) eswt_control_pane_g1_copy3_ParamLimits

0x7fb2,	// (0x00028d2d) eswt_control_pane_g1_copy3

0x7fbf,	// (0x00028d3a) eswt_control_pane_g2_copy3_ParamLimits

0x7fbf,	// (0x00028d3a) eswt_control_pane_g2_copy3

0x7fcc,	// (0x00028d47) eswt_control_pane_g3_copy3_ParamLimits

0x7fcc,	// (0x00028d47) eswt_control_pane_g3_copy3

0x7fd9,	// (0x00028d54) eswt_control_pane_g4_copy3_ParamLimits

0x7fd9,	// (0x00028d54) eswt_control_pane_g4_copy3

0xea5a,	// (0x0002f7d5) common_borders_pane_cp5

0x805a,	// (0x00028dd5) separator_vertical_pane_g1

0x8063,	// (0x00028dde) separator_vertical_pane_g2

0x806c,	// (0x00028de7) separator_vertical_pane_g3

0x0002,

0xfbdf,	// (0x0003095a) separator_vertical_pane_g

0x7fb2,	// (0x00028d2d) eswt_control_pane_g1_copy4_ParamLimits

0x7fb2,	// (0x00028d2d) eswt_control_pane_g1_copy4

0x7fbf,	// (0x00028d3a) eswt_control_pane_g2_copy4_ParamLimits

0x7fbf,	// (0x00028d3a) eswt_control_pane_g2_copy4

0x7fcc,	// (0x00028d47) eswt_control_pane_g3_copy4_ParamLimits

0x7fcc,	// (0x00028d47) eswt_control_pane_g3_copy4

0x7fd9,	// (0x00028d54) eswt_control_pane_g4_copy4_ParamLimits

0x7fd9,	// (0x00028d54) eswt_control_pane_g4_copy4

0x8075,	// (0x00028df0) eswt_ctrl_combo_button_pane

0x807d,	// (0x00028df8) eswt_ctrl_input_pane

0x8085,	// (0x00028e00) popup_choice_list_window_cp70

0x808d,	// (0x00028e08) eswt_ctrl_input_pane_t1

0xea5a,	// (0x0002f7d5) input_focus_pane_cp70

0x7620,	// (0x0002839b) bg_button_pane_cp70_ParamLimits

0x7620,	// (0x0002839b) bg_button_pane_cp70

0x809b,	// (0x00028e16) eswt_ctrl_combo_button_pane_g1

0x80a3,	// (0x00028e1e) wait_bar_pane_cp70

0x5088,	// (0x00025e03) bg_popup_window_pane_cp70_ParamLimits

0x5088,	// (0x00025e03) bg_popup_window_pane_cp70

0x80ab,	// (0x00028e26) popup_eswt_tasktip_window_t1

0x80c1,	// (0x00028e3c) wait_bar_pane_cp71_ParamLimits

0x80c1,	// (0x00028e3c) wait_bar_pane_cp71

0x80cd,	// (0x00028e48) grid_eswt_app_pane

0x3f94,	// (0x00024d0f) scroll_pane_cp70

0xe2eb,	// (0x0002f066) cell_eswt_app_pane_ParamLimits

0xe2eb,	// (0x0002f066) cell_eswt_app_pane

0xe315,	// (0x0002f090) cell_eswt_app_pane_g1_ParamLimits

0xe315,	// (0x0002f090) cell_eswt_app_pane_g1

0xe344,	// (0x0002f0bf) cell_eswt_app_pane_g2_ParamLimits

0xe344,	// (0x0002f0bf) cell_eswt_app_pane_g2

0x0001,

0xfbe6,	// (0x00030961) cell_eswt_app_pane_g_ParamLimits

0xfbe6,	// (0x00030961) cell_eswt_app_pane_g

0xe36d,	// (0x0002f0e8) cell_eswt_app_pane_t1_ParamLimits

0xe36d,	// (0x0002f0e8) cell_eswt_app_pane_t1

0x8190,	// (0x00028f0b) grid_highlight_pane_cp70_ParamLimits

0x8190,	// (0x00028f0b) grid_highlight_pane_cp70

0x4686,	// (0x00025401) set_content_pane_g1

0xd5e8,	// (0x0002e363) status_small_volume_pane

0x244b,	// (0x000231c6) status_small_volume_pane_g1

0x2453,	// (0x000231ce) volume_small2_pane

0x245c,	// (0x000231d7) volume_small2_pane_g1

0x2465,	// (0x000231e0) volume_small2_pane_g2

0x246e,	// (0x000231e9) volume_small2_pane_g3

0x2477,	// (0x000231f2) volume_small2_pane_g4

0x2480,	// (0x000231fb) volume_small2_pane_g5

0x2489,	// (0x00023204) volume_small2_pane_g6

0x2492,	// (0x0002320d) volume_small2_pane_g7

0x249b,	// (0x00023216) volume_small2_pane_g8

0x24a4,	// (0x0002321f) volume_small2_pane_g9

0x24ad,	// (0x00023228) volume_small2_pane_g10

0x0009,

0xfbeb,	// (0x00030966) volume_small2_pane_g

0x7a21,	// (0x0002879c) fep_vkb_top_text_pane_g1_ParamLimits

0xe278,	// (0x0002eff3) fep_vkb_top_text_pane_t1_ParamLimits

0x7cd8,	// (0x00028a53) popup_preview_fixed_window_g3_ParamLimits

0x7cd8,	// (0x00028a53) popup_preview_fixed_window_g3

0xcdbe,	// (0x0002db39) popup_toolbar_trans_pane

0xdc5d,	// (0x0002e9d8) aid_height_set_list_ParamLimits

0x63fd,	// (0x00027178) aid_size_parent_ParamLimits

0x4ade,	// (0x00025859) list_highlight_pane_cp2_ParamLimits

0x4686,	// (0x00025401) set_content_pane_g1_ParamLimits

0xddd5,	// (0x0002eb50) list_single_image_pane_ParamLimits

0xddd5,	// (0x0002eb50) list_single_image_pane

0xe39f,	// (0x0002f11a) aid_size_cell_image_ParamLimits

0xe39f,	// (0x0002f11a) aid_size_cell_image

0xe3ac,	// (0x0002f127) grid_single_image_pane_ParamLimits

0xe3ac,	// (0x0002f127) grid_single_image_pane

0x5050,	// (0x00025dcb) list_single_image_pane_g1_ParamLimits

0x5050,	// (0x00025dcb) list_single_image_pane_g1

0x81b5,	// (0x00028f30) list_single_image_pane_g2_ParamLimits

0x81b5,	// (0x00028f30) list_single_image_pane_g2

0x0001,

0xfc00,	// (0x0003097b) list_single_image_pane_g_ParamLimits

0xfc00,	// (0x0003097b) list_single_image_pane_g

0x81c9,	// (0x00028f44) list_single_image_pane_t1_ParamLimits

0x81c9,	// (0x00028f44) list_single_image_pane_t1

0xe3b8,	// (0x0002f133) cell_image_list_pane_ParamLimits

0xe3b8,	// (0x0002f133) cell_image_list_pane

0xe3cc,	// (0x0002f147) cell_image_list_pane_g1

0xe3d5,	// (0x0002f150) cell_image_list_pane_g2

0x0001,

0xfc05,	// (0x00030980) cell_image_list_pane_g

0x8205,	// (0x00028f80) aid_size_cell_tb_trans_pane

0x3aed,	// (0x00024868) bg_tb_trans_pane

0x8217,	// (0x00028f92) grid_tb_trans_pane

0x5008,	// (0x00025d83) bg_tb_trans_pane_g1

0x5010,	// (0x00025d8b) bg_tb_trans_pane_g2

0x5018,	// (0x00025d93) bg_tb_trans_pane_g3

0x5020,	// (0x00025d9b) bg_tb_trans_pane_g4

0x5028,	// (0x00025da3) bg_tb_trans_pane_g5

0x5040,	// (0x00025dbb) bg_tb_trans_pane_g6

0x5048,	// (0x00025dc3) bg_tb_trans_pane_g7

0x5030,	// (0x00025dab) bg_tb_trans_pane_g8

0x5038,	// (0x00025db3) bg_tb_trans_pane_g9

0x0008,

0xfc0a,	// (0x00030985) bg_tb_trans_pane_g

0x822b,	// (0x00028fa6) cell_toolbar_trans_pane_ParamLimits

0x822b,	// (0x00028fa6) cell_toolbar_trans_pane

0x765b,	// (0x000283d6) cell_toolbar_trans_pane_g1

0xe03b,	// (0x0002edb6) list_form2_midp_pane_t1

0xe049,	// (0x0002edc4) list_form2_midp_pane_t2

0x0001,

0xfab3,	// (0x0003082e) list_form2_midp_pane_t

0x724c,	// (0x00027fc7) scroll_pane_cp51_ParamLimits

0x7408,	// (0x00028183) form2_midp_wait_pane_g1

0x7411,	// (0x0002818c) form2_midp_wait_pane_g2

0x741a,	// (0x00028195) form2_midp_wait_pane_g3

0x0002,

0xfac8,	// (0x00030843) form2_midp_wait_pane_g

0x3260,	// (0x00023fdb) list_highlight_pane_cp21_ParamLimits

0x7466,	// (0x000281e1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7475,	// (0x000281f0) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x04d8,	// (0x00021253) list_single_2graphic_im_pane_ParamLimits

0x04d8,	// (0x00021253) list_single_2graphic_im_pane

0x8251,	// (0x00028fcc) list_single_2graphic_im_pane_g1_ParamLimits

0x8251,	// (0x00028fcc) list_single_2graphic_im_pane_g1

0x8262,	// (0x00028fdd) list_single_2graphic_im_pane_g2_ParamLimits

0x8262,	// (0x00028fdd) list_single_2graphic_im_pane_g2

0x826e,	// (0x00028fe9) list_single_2graphic_im_pane_g3_ParamLimits

0x826e,	// (0x00028fe9) list_single_2graphic_im_pane_g3

0x0003,

0xfc1d,	// (0x00030998) list_single_2graphic_im_pane_g_ParamLimits

0xfc1d,	// (0x00030998) list_single_2graphic_im_pane_g

0x828e,	// (0x00029009) list_single_2graphic_im_pane_t1_ParamLimits

0x828e,	// (0x00029009) list_single_2graphic_im_pane_t1

0x7ce4,	// (0x00028a5f) list_single_graphic_2heading_pane_fp_ParamLimits

0x7ce4,	// (0x00028a5f) list_single_graphic_2heading_pane_fp

0x0953,	// (0x000216ce) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0953,	// (0x000216ce) list_single_graphic_2heading_pane_fp_g1

0x7cf9,	// (0x00028a74) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7cf9,	// (0x00028a74) list_single_graphic_2heading_pane_fp_g2

0x091c,	// (0x00021697) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x091c,	// (0x00021697) list_single_graphic_2heading_pane_fp_g3

0x0928,	// (0x000216a3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0928,	// (0x000216a3) list_single_graphic_2heading_pane_fp_g4

0x7d05,	// (0x00028a80) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7d05,	// (0x00028a80) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb4b,	// (0x000308c6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb4b,	// (0x000308c6) list_single_graphic_2heading_pane_fp_g

0x0b2c,	// (0x000218a7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0b2c,	// (0x000218a7) list_single_graphic_2heading_pane_fp_t1

0x098b,	// (0x00021706) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x098b,	// (0x00021706) list_single_graphic_2heading_pane_fp_t2

0x0b42,	// (0x000218bd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0b42,	// (0x000218bd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc26,	// (0x000309a1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc26,	// (0x000309a1) list_single_graphic_2heading_pane_fp_t

0x76e7,	// (0x00028462) fep_hwr_write_pane_g5_ParamLimits

0x76e7,	// (0x00028462) fep_hwr_write_pane_g5

0x76f3,	// (0x0002846e) fep_hwr_write_pane_g6_ParamLimits

0x76f3,	// (0x0002846e) fep_hwr_write_pane_g6

0x7f81,	// (0x00028cfc) eswt_shell_pane_ParamLimits

0x5088,	// (0x00025e03) bg_popup_window_pane_cp18_ParamLimits

0x6345,	// (0x000270c0) heading_pane_cp70

0x80ab,	// (0x00028e26) popup_eswt_tasktip_window_t1_ParamLimits

0xd686,	// (0x0002e401) aid_touch_tab_arrow_left

0xd69c,	// (0x0002e417) aid_touch_tab_arrow_right

0xc038,	// (0x0002cdb3) title_pane_g3_ParamLimits

0xc038,	// (0x0002cdb3) title_pane_g3

0x3aac,	// (0x00024827) set_value_pane_g1

0xcdbe,	// (0x0002db39) popup_toolbar_trans_pane_ParamLimits

0x8205,	// (0x00028f80) aid_size_cell_tb_trans_pane_ParamLimits

0x3aed,	// (0x00024868) bg_tb_trans_pane_ParamLimits

0x8217,	// (0x00028f92) grid_tb_trans_pane_ParamLimits

0x34e9,	// (0x00024264) cont_note_pane_ParamLimits

0x34e9,	// (0x00024264) cont_note_pane

0x385e,	// (0x000245d9) cont_snote2_single_text_pane_ParamLimits

0x385e,	// (0x000245d9) cont_snote2_single_text_pane

0x385e,	// (0x000245d9) cont_snote2_single_graphic_pane_ParamLimits

0x385e,	// (0x000245d9) cont_snote2_single_graphic_pane

0x56a3,	// (0x0002641e) cont_note_wait_pane_ParamLimits

0x56a3,	// (0x0002641e) cont_note_wait_pane

0x56a3,	// (0x0002641e) cont_note_image_pane_ParamLimits

0x56a3,	// (0x0002641e) cont_note_image_pane

0x82bf,	// (0x0002903a) popup_note2_window_g1_ParamLimits

0x82bf,	// (0x0002903a) popup_note2_window_g1

0x82f0,	// (0x0002906b) popup_note2_window_t1_ParamLimits

0x82f0,	// (0x0002906b) popup_note2_window_t1

0x8335,	// (0x000290b0) popup_note2_window_t2_ParamLimits

0x8335,	// (0x000290b0) popup_note2_window_t2

0x837a,	// (0x000290f5) popup_note2_window_t3_ParamLimits

0x837a,	// (0x000290f5) popup_note2_window_t3

0x83bf,	// (0x0002913a) popup_note2_window_t4_ParamLimits

0x83bf,	// (0x0002913a) popup_note2_window_t4

0x356d,	// (0x000242e8) popup_note2_window_t5_ParamLimits

0x356d,	// (0x000242e8) popup_note2_window_t5

0x0004,

0xfc32,	// (0x000309ad) popup_note2_window_t_ParamLimits

0xfc32,	// (0x000309ad) popup_note2_window_t

0x83ee,	// (0x00029169) popup_note2_image_window_g1_ParamLimits

0x83ee,	// (0x00029169) popup_note2_image_window_g1

0x83fa,	// (0x00029175) popup_note2_image_window_g2_ParamLimits

0x83fa,	// (0x00029175) popup_note2_image_window_g2

0x0001,

0xfc3d,	// (0x000309b8) popup_note2_image_window_g_ParamLimits

0xfc3d,	// (0x000309b8) popup_note2_image_window_g

0x840c,	// (0x00029187) popup_note2_image_window_t1_ParamLimits

0x840c,	// (0x00029187) popup_note2_image_window_t1

0x8424,	// (0x0002919f) popup_note2_image_window_t2_ParamLimits

0x8424,	// (0x0002919f) popup_note2_image_window_t2

0x843c,	// (0x000291b7) popup_note2_image_window_t3_ParamLimits

0x843c,	// (0x000291b7) popup_note2_image_window_t3

0x0002,

0xfc42,	// (0x000309bd) popup_note2_image_window_t_ParamLimits

0xfc42,	// (0x000309bd) popup_note2_image_window_t

0x56b1,	// (0x0002642c) popup_note2_wait_window_g1_ParamLimits

0x56b1,	// (0x0002642c) popup_note2_wait_window_g1

0x8458,	// (0x000291d3) popup_note2_wait_window_g2_ParamLimits

0x8458,	// (0x000291d3) popup_note2_wait_window_g2

0x56c9,	// (0x00026444) popup_note2_wait_window_g3_ParamLimits

0x56c9,	// (0x00026444) popup_note2_wait_window_g3

0x0002,

0xfc49,	// (0x000309c4) popup_note2_wait_window_g_ParamLimits

0xfc49,	// (0x000309c4) popup_note2_wait_window_g

0x8464,	// (0x000291df) popup_note2_wait_window_t1_ParamLimits

0x8464,	// (0x000291df) popup_note2_wait_window_t1

0x8482,	// (0x000291fd) popup_note2_wait_window_t2_ParamLimits

0x8482,	// (0x000291fd) popup_note2_wait_window_t2

0x84a0,	// (0x0002921b) popup_note2_wait_window_t3_ParamLimits

0x84a0,	// (0x0002921b) popup_note2_wait_window_t3

0x84b2,	// (0x0002922d) popup_note2_wait_window_t4_ParamLimits

0x84b2,	// (0x0002922d) popup_note2_wait_window_t4

0x0003,

0xfc50,	// (0x000309cb) popup_note2_wait_window_t_ParamLimits

0xfc50,	// (0x000309cb) popup_note2_wait_window_t

0x84c4,	// (0x0002923f) wait_bar2_pane_ParamLimits

0x84c4,	// (0x0002923f) wait_bar2_pane

0x84dc,	// (0x00029257) popup_snote2_single_text_window_g1_ParamLimits

0x84dc,	// (0x00029257) popup_snote2_single_text_window_g1

0x8504,	// (0x0002927f) popup_snote2_single_text_window_t1_ParamLimits

0x8504,	// (0x0002927f) popup_snote2_single_text_window_t1

0x8550,	// (0x000292cb) popup_snote2_single_text_window_t2_ParamLimits

0x8550,	// (0x000292cb) popup_snote2_single_text_window_t2

0x859c,	// (0x00029317) popup_snote2_single_text_window_t3_ParamLimits

0x859c,	// (0x00029317) popup_snote2_single_text_window_t3

0x85dd,	// (0x00029358) popup_snote2_single_text_window_t4_ParamLimits

0x85dd,	// (0x00029358) popup_snote2_single_text_window_t4

0x8613,	// (0x0002938e) popup_snote2_single_text_window_t5_ParamLimits

0x8613,	// (0x0002938e) popup_snote2_single_text_window_t5

0x0004,

0xfc59,	// (0x000309d4) popup_snote2_single_text_window_t_ParamLimits

0xfc59,	// (0x000309d4) popup_snote2_single_text_window_t

0x863e,	// (0x000293b9) popup_snote2_single_graphic_window_g1_ParamLimits

0x863e,	// (0x000293b9) popup_snote2_single_graphic_window_g1

0x8666,	// (0x000293e1) popup_snote2_single_graphic_window_g2_ParamLimits

0x8666,	// (0x000293e1) popup_snote2_single_graphic_window_g2

0x0001,

0xfc64,	// (0x000309df) popup_snote2_single_graphic_window_g_ParamLimits

0xfc64,	// (0x000309df) popup_snote2_single_graphic_window_g

0x868e,	// (0x00029409) popup_snote2_single_graphic_window_t1_ParamLimits

0x868e,	// (0x00029409) popup_snote2_single_graphic_window_t1

0x86da,	// (0x00029455) popup_snote2_single_graphic_window_t2_ParamLimits

0x86da,	// (0x00029455) popup_snote2_single_graphic_window_t2

0x859c,	// (0x00029317) popup_snote2_single_graphic_window_t3_ParamLimits

0x859c,	// (0x00029317) popup_snote2_single_graphic_window_t3

0x85dd,	// (0x00029358) popup_snote2_single_graphic_window_t4_ParamLimits

0x85dd,	// (0x00029358) popup_snote2_single_graphic_window_t4

0x8613,	// (0x0002938e) popup_snote2_single_graphic_window_t5_ParamLimits

0x8613,	// (0x0002938e) popup_snote2_single_graphic_window_t5

0x0004,

0xfc69,	// (0x000309e4) popup_snote2_single_graphic_window_t_ParamLimits

0xfc69,	// (0x000309e4) popup_snote2_single_graphic_window_t

0x710d,	// (0x00027e88) clock_nsta_pane_cp2_t1

0x710d,	// (0x00027e88) clock_nsta_pane_cp2_t2

0x0001,

0xfa89,	// (0x00030804) clock_nsta_pane_cp2_t

0x009f,	// (0x00020e1a) form_field_data_wide_pane_g1_ParamLimits

0x3afb,	// (0x00024876) form_field_data_wide_pane_g2_ParamLimits

0x3afb,	// (0x00024876) form_field_data_wide_pane_g2

0x3b07,	// (0x00024882) form_field_data_wide_pane_g3_ParamLimits

0x3b07,	// (0x00024882) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x000303d1) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x000303d1) form_field_data_wide_pane_g

0xdf6e,	// (0x0002ece9) grid_touch_3_pane_ParamLimits

0xdf6e,	// (0x0002ece9) grid_touch_3_pane

0xe3de,	// (0x0002f159) cell_touch_3_pane_ParamLimits

0xe3de,	// (0x0002f159) cell_touch_3_pane

0x765b,	// (0x000283d6) cell_touch_3_pane_g1

0x765b,	// (0x000283d6) cell_touch_3_pane_g2

0x0001,

0xfb0e,	// (0x00030889) cell_touch_3_pane_g

0x35c5,	// (0x00024340) cont_query_data_pane

0x35cd,	// (0x00024348) cont_query_data_pane_cp1

0x8754,	// (0x000294cf) button_value_adjust_pane_cp7

0x875c,	// (0x000294d7) query_popup_pane_cp3

0x428b,	// (0x00025006) bg_popup_sub_pane_cp22_ParamLimits

0x136f,	// (0x000220ea) navi_navi_volume_pane_cp2

0x138a,	// (0x00022105) popup_side_volume_key_window_g2

0x1399,	// (0x00022114) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x00030467) popup_side_volume_key_window_g

0x13b6,	// (0x00022131) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0003046e) popup_side_volume_key_window_t

0x4545,	// (0x000252c0) popup_side_volume_key_window_ParamLimits

0xb699,	// (0x0002c414) list_double_graphic_pane_g4_ParamLimits

0xb699,	// (0x0002c414) list_double_graphic_pane_g4

0xbbd0,	// (0x0002c94b) list_single_2heading_msg_pane_ParamLimits

0xbbd0,	// (0x0002c94b) list_single_2heading_msg_pane

0xbc44,	// (0x0002c9bf) list_single_2heading_msg_pane_g1_ParamLimits

0xbc44,	// (0x0002c9bf) list_single_2heading_msg_pane_g1

0xbc50,	// (0x0002c9cb) list_single_2heading_msg_pane_g2_ParamLimits

0xbc50,	// (0x0002c9cb) list_single_2heading_msg_pane_g2

0xbc63,	// (0x0002c9de) list_single_2heading_msg_pane_g3_ParamLimits

0xbc63,	// (0x0002c9de) list_single_2heading_msg_pane_g3

0xbc6f,	// (0x0002c9ea) list_single_2heading_msg_pane_g4_ParamLimits

0xbc6f,	// (0x0002c9ea) list_single_2heading_msg_pane_g4

0x0003,

0xfc74,	// (0x000309ef) list_single_2heading_msg_pane_g_ParamLimits

0xfc74,	// (0x000309ef) list_single_2heading_msg_pane_g

0xbc87,	// (0x0002ca02) list_single_2heading_msg_pane_t1_ParamLimits

0xbc87,	// (0x0002ca02) list_single_2heading_msg_pane_t1

0xbcaf,	// (0x0002ca2a) list_single_2heading_msg_pane_t2_ParamLimits

0xbcaf,	// (0x0002ca2a) list_single_2heading_msg_pane_t2

0xbd1a,	// (0x0002ca95) list_single_2heading_msg_pane_t3_ParamLimits

0xbd1a,	// (0x0002ca95) list_single_2heading_msg_pane_t3

0x0c27,	// (0x000219a2) list_single_2heading_msg_pane_t4_ParamLimits

0x0c27,	// (0x000219a2) list_single_2heading_msg_pane_t4

0x0003,

0xfc7d,	// (0x000309f8) list_single_2heading_msg_pane_t_ParamLimits

0xfc7d,	// (0x000309f8) list_single_2heading_msg_pane_t

0x31b4,	// (0x00023f2f) title_pane_g4_ParamLimits

0x31b4,	// (0x00023f2f) title_pane_g4

0x117e,	// (0x00021ef9) title_pane_stacon_g3_ParamLimits

0x117e,	// (0x00021ef9) title_pane_stacon_g3

0x8282,	// (0x00028ffd) list_single_2graphic_im_pane_g4_ParamLimits

0x8282,	// (0x00028ffd) list_single_2graphic_im_pane_g4

0x6102,	// (0x00026e7d) popup_side_volume_key_window_cp

0x6934,	// (0x000276af) main_idle_act2_pane_t1

0x1cff,	// (0x00022a7a) toolbar_button_pane_g10

0xc397,	// (0x0002d112) popup_toolbar_window_cp1

0x70fe,	// (0x00027e79) clock_nsta_pane_cp_t1

0x70fe,	// (0x00027e79) clock_nsta_pane_cp_t2

0x0001,

0xfa84,	// (0x000307ff) clock_nsta_pane_cp_t

0x136f,	// (0x000220ea) navi_navi_volume_pane_cp2_ParamLimits

0x137e,	// (0x000220f9) popup_side_volume_key_window_g1_ParamLimits

0x138a,	// (0x00022105) popup_side_volume_key_window_g2_ParamLimits

0x1399,	// (0x00022114) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x00030467) popup_side_volume_key_window_g_ParamLimits

0x215b,	// (0x00022ed6) fep_hwr_aid_pane

0xe11e,	// (0x0002ee99) bg_fep_hwr_top_pane_g4_ParamLimits

0x76b7,	// (0x00028432) fep_hwr_top_pane_g1_ParamLimits

0x76c9,	// (0x00028444) fep_hwr_top_pane_g2_ParamLimits

0x2214,	// (0x00022f8f) fep_hwr_top_pane_g3_ParamLimits

0xfad9,	// (0x00030854) fep_hwr_top_pane_g_ParamLimits

0x2229,	// (0x00022fa4) fep_hwr_top_text_pane_ParamLimits

0x5ec5,	// (0x00026c40) aid_touch_tab_arrow_arrow_2

0x5ece,	// (0x00026c49) aid_touch_tab_arrow_left_2

0x216f,	// (0x00022eea) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x21a6,	// (0x00022f21) fep_hwr_prediction_pane

0x7829,	// (0x000285a4) fep_vkb_prediction_pane

0xe258,	// (0x0002efd3) fep_vkb_side_pane_g3_ParamLimits

0xe258,	// (0x0002efd3) fep_vkb_side_pane_g3

0x78d9,	// (0x00028654) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7d59,	// (0x00028ad4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7d66,	// (0x00028ae1) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb83,	// (0x000308fe) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8781,	// (0x000294fc) fep_hwr_prediction_pane_g1

0x24b6,	// (0x00023231) fep_hwr_prediction_pane_g2

0x24be,	// (0x00023239) fep_hwr_prediction_pane_g3

0x24c6,	// (0x00023241) fep_hwr_prediction_pane_g4

0x0003,

0xfc86,	// (0x00030a01) fep_hwr_prediction_pane_g

0x8781,	// (0x000294fc) fep_vkb_prediction_pane_g1

0x878b,	// (0x00029506) fep_vkb_prediction_pane_g2

0x8793,	// (0x0002950e) fep_vkb_prediction_pane_g3

0x879b,	// (0x00029516) fep_vkb_prediction_pane_g4

0x0003,

0xfc8f,	// (0x00030a0a) fep_vkb_prediction_pane_g

0x1fdb,	// (0x00022d56) slider_set_pane_g3

0x1fef,	// (0x00022d6a) slider_set_pane_g4

0x2007,	// (0x00022d82) slider_set_pane_g5

0x1fdb,	// (0x00022d56) slider_set_pane_g6

0x201d,	// (0x00022d98) slider_set_pane_g7

0x6562,	// (0x000272dd) slider_form_pane_g3

0x656b,	// (0x000272e6) slider_form_pane_g4

0x6573,	// (0x000272ee) slider_form_pane_g5

0x6562,	// (0x000272dd) slider_form_pane_g6

0xdda8,	// (0x0002eb23) slider_form_pane_g7

0x6bdf,	// (0x0002795a) slider_set_pane_vc_g3

0x6be8,	// (0x00027963) slider_set_pane_vc_g4

0x6bf1,	// (0x0002796c) slider_set_pane_vc_g5

0x6bdf,	// (0x0002795a) slider_set_pane_vc_g6

0x6bfa,	// (0x00027975) slider_set_pane_vc_g7

0x6dbc,	// (0x00027b37) slider_form_pane_vc_g1

0x6dc5,	// (0x00027b40) slider_form_pane_vc_g2

0x6dce,	// (0x00027b49) slider_form_pane_vc_g3

0x6dbc,	// (0x00027b37) slider_form_pane_vc_g4

0x6dd7,	// (0x00027b52) slider_form_pane_vc_g5

0x0004,

0xfa56,	// (0x000307d1) slider_form_pane_vc_g

0xea5a,	// (0x0002f7d5) main_idle_act3_pane

0x87a3,	// (0x0002951e) ai3_links_pane

0xe426,	// (0x0002f1a1) popup_ai3_data_window_ParamLimits

0xe426,	// (0x0002f1a1) popup_ai3_data_window

0xea5a,	// (0x0002f7d5) grid_ai3_links_pane

0xe440,	// (0x0002f1bb) cell_ai3_links_pane_ParamLimits

0xe440,	// (0x0002f1bb) cell_ai3_links_pane

0x87de,	// (0x00029559) bg_popup_sub_pane_cp11

0x87eb,	// (0x00029566) cell_ai3_links_pane_g1

0xea5a,	// (0x0002f7d5) bg_popup_sub_pane_cp12

0x8810,	// (0x0002958b) heading_ai3_data_pane

0x8818,	// (0x00029593) list_ai3_gene_pane

0x8824,	// (0x0002959f) popup_ai3_data_window_g1

0x882c,	// (0x000295a7) heading_ai3_data_pane_g1

0x8834,	// (0x000295af) heading_ai3_data_pane_t1

0x8842,	// (0x000295bd) list_double_ai3_gene_pane_ParamLimits

0x8842,	// (0x000295bd) list_double_ai3_gene_pane

0x884f,	// (0x000295ca) list_single_ai3_gene_pane_ParamLimits

0x884f,	// (0x000295ca) list_single_ai3_gene_pane

0x7620,	// (0x0002839b) list_highlight_pane_cp7_ParamLimits

0x7620,	// (0x0002839b) list_highlight_pane_cp7

0x885c,	// (0x000295d7) list_single_a13_gene_pane_t1_ParamLimits

0x885c,	// (0x000295d7) list_single_a13_gene_pane_t1

0x8873,	// (0x000295ee) list_single_ai3_gene_pane_g1

0x887c,	// (0x000295f7) list_single_ai3_gene_pane_g2

0x0001,

0xfc98,	// (0x00030a13) list_single_ai3_gene_pane_g

0x8884,	// (0x000295ff) list_double_ai3_gene_pane_g1_ParamLimits

0x8884,	// (0x000295ff) list_double_ai3_gene_pane_g1

0x8890,	// (0x0002960b) list_double_ai3_gene_pane_t1_ParamLimits

0x8890,	// (0x0002960b) list_double_ai3_gene_pane_t1

0x88ac,	// (0x00029627) list_double_ai3_gene_pane_t2_ParamLimits

0x88ac,	// (0x00029627) list_double_ai3_gene_pane_t2

0x88c2,	// (0x0002963d) list_double_ai3_gene_pane_t3_ParamLimits

0x88c2,	// (0x0002963d) list_double_ai3_gene_pane_t3

0x0002,

0xfc9d,	// (0x00030a18) list_double_ai3_gene_pane_t_ParamLimits

0xfc9d,	// (0x00030a18) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0b58,	// (0x000218d3) aid_size_min_col_2

0xe410,	// (0x0002f18b) aid_size_min_msg_ParamLimits

0xe410,	// (0x0002f18b) aid_size_min_msg

0xe26c,	// (0x0002efe7) fep_vkb_top_text_pane_g2_ParamLimits

0xe26c,	// (0x0002efe7) fep_vkb_top_text_pane_g2

0x0001,

0xfb09,	// (0x00030884) fep_vkb_top_text_pane_g_ParamLimits

0xfb09,	// (0x00030884) fep_vkb_top_text_pane_g

0xea5a,	// (0x0002f7d5) main_hc_apps_shell_pane

0x88df,	// (0x0002965a) grid_hc_apps_pane_ParamLimits

0x88df,	// (0x0002965a) grid_hc_apps_pane

0x88f1,	// (0x0002966c) list_hc_apps_pane

0x88f9,	// (0x00029674) scroll_pane_cp37_ParamLimits

0x88f9,	// (0x00029674) scroll_pane_cp37

0xe45a,	// (0x0002f1d5) cell_hc_apps_pane_ParamLimits

0xe45a,	// (0x0002f1d5) cell_hc_apps_pane

0xe518,	// (0x0002f293) cell_hc_apps_pane_g1_ParamLimits

0xe518,	// (0x0002f293) cell_hc_apps_pane_g1

0x89e3,	// (0x0002975e) cell_hc_apps_pane_g2_ParamLimits

0x89e3,	// (0x0002975e) cell_hc_apps_pane_g2

0x89ff,	// (0x0002977a) cell_hc_apps_pane_g3_ParamLimits

0x89ff,	// (0x0002977a) cell_hc_apps_pane_g3

0x0002,

0xfca4,	// (0x00030a1f) cell_hc_apps_pane_g_ParamLimits

0xfca4,	// (0x00030a1f) cell_hc_apps_pane_g

0xe544,	// (0x0002f2bf) cell_hc_apps_pane_t1_ParamLimits

0xe544,	// (0x0002f2bf) cell_hc_apps_pane_t1

0x34e9,	// (0x00024264) grid_highlight_pane_cp10_ParamLimits

0x34e9,	// (0x00024264) grid_highlight_pane_cp10

0xe582,	// (0x0002f2fd) list_single_hc_apps_pane_ParamLimits

0xe582,	// (0x0002f2fd) list_single_hc_apps_pane

0xe5af,	// (0x0002f32a) list_single_hc_apps_pane_g1

0xbd88,	// (0x0002cb03) list_single_hc_apps_pane_g2

0x0001,

0xfcab,	// (0x00030a26) list_single_hc_apps_pane_g

0xbda1,	// (0x0002cb1c) list_single_hc_apps_pane_g2_copy1

0xbdbd,	// (0x0002cb38) list_single_hc_apps_pane_t1

0x3260,	// (0x00023fdb) bg_set_opt_pane_cp_ParamLimits

0x10a6,	// (0x00021e21) setting_slider_pane_t1_ParamLimits

0x10bf,	// (0x00021e3a) setting_slider_pane_t2_ParamLimits

0x10d9,	// (0x00021e54) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x000302b4) setting_slider_pane_t_ParamLimits

0x10f1,	// (0x00021e6c) slider_set_pane_ParamLimits

0x1618,	// (0x00022393) control_pane_g5_ParamLimits

0x1618,	// (0x00022393) control_pane_g5

0x63b1,	// (0x0002712c) slider_set_pane_g1_ParamLimits

0x1fcf,	// (0x00022d4a) slider_set_pane_g2_ParamLimits

0x1fdb,	// (0x00022d56) slider_set_pane_g3_ParamLimits

0x1fef,	// (0x00022d6a) slider_set_pane_g4_ParamLimits

0x2007,	// (0x00022d82) slider_set_pane_g5_ParamLimits

0x1fdb,	// (0x00022d56) slider_set_pane_g6_ParamLimits

0x201d,	// (0x00022d98) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x000306b5) slider_set_pane_g_ParamLimits

0x4631,	// (0x000253ac) navi_icon_text_pane_ParamLimits

0xd64f,	// (0x0002e3ca) aid_fill_nsta_2_ParamLimits

0xd686,	// (0x0002e401) aid_touch_tab_arrow_left_ParamLimits

0xd69c,	// (0x0002e417) aid_touch_tab_arrow_right_ParamLimits

0xd737,	// (0x0002e4b2) clock_nsta_pane_ParamLimits

0x5ea7,	// (0x00026c22) navi_icon_pane_g1_ParamLimits

0x5eb3,	// (0x00026c2e) navi_text_pane_t1_ParamLimits

0x720a,	// (0x00027f85) navi_icon_text_pane_g1_ParamLimits

0x7216,	// (0x00027f91) navi_icon_text_pane_t1_ParamLimits

0xe5af,	// (0x0002f32a) list_single_hc_apps_pane_g1_ParamLimits

0xbd88,	// (0x0002cb03) list_single_hc_apps_pane_g2_ParamLimits

0xfcab,	// (0x00030a26) list_single_hc_apps_pane_g_ParamLimits

0xbda1,	// (0x0002cb1c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbdbd,	// (0x0002cb38) list_single_hc_apps_pane_t1_ParamLimits

0xbf3d,	// (0x0002ccb8) popup_toolbar2_fixed_window_ParamLimits

0xbf3d,	// (0x0002ccb8) popup_toolbar2_fixed_window

0xcdb4,	// (0x0002db2f) popup_toolbar2_float_window

0xea5a,	// (0x0002f7d5) bg_popup_sub_pane_cp27

0x8ad6,	// (0x00029851) grid_toolbar2_float_pane

0xea5a,	// (0x0002f7d5) bg_popup_sub_pane_cp26

0x8ad6,	// (0x00029851) grid_toolbar2_fixed_pane

0xe5c8,	// (0x0002f343) cell_toolbar2_fixed_pane_ParamLimits

0xe5c8,	// (0x0002f343) cell_toolbar2_fixed_pane

0xe5e2,	// (0x0002f35d) cell_toolbar2_fixed_pane_g1

0x8af7,	// (0x00029872) toolbar2_fixed_button_pane

0x5008,	// (0x00025d83) toolbar2_fixed_button_pane_g1

0x5010,	// (0x00025d8b) toolbar2_fixed_button_pane_g2

0x5018,	// (0x00025d93) toolbar2_fixed_button_pane_g3

0x5020,	// (0x00025d9b) toolbar2_fixed_button_pane_g4

0x5028,	// (0x00025da3) toolbar2_fixed_button_pane_g5

0x5030,	// (0x00025dab) toolbar2_fixed_button_pane_g6

0x5038,	// (0x00025db3) toolbar2_fixed_button_pane_g7

0x5040,	// (0x00025dbb) toolbar2_fixed_button_pane_g8

0x5048,	// (0x00025dc3) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x000305b7) toolbar2_fixed_button_pane_g

0x8aff,	// (0x0002987a) cell_toolbar2_float_pane_ParamLimits

0x8aff,	// (0x0002987a) cell_toolbar2_float_pane

0x8b10,	// (0x0002988b) cell_toolbar2_float_pane_g1

0x8af7,	// (0x00029872) toolbar2_fixed_button_pane_cp

0xe146,	// (0x0002eec1) fep_vkb_accented_list_pane_ParamLimits

0xe146,	// (0x0002eec1) fep_vkb_accented_list_pane

0x2377,	// (0x000230f2) bg_popup_fep_shadow_pane_g9

0x47ba,	// (0x00025535) bg_popup_fep_shadow_pane_cp3

0x3c54,	// (0x000249cf) list_accented_list_pane

0x8b19,	// (0x00029894) list_single_accented_list_pane_ParamLimits

0x8b19,	// (0x00029894) list_single_accented_list_pane

0x47ba,	// (0x00025535) list_highlight_pane_cp10

0x8b2a,	// (0x000298a5) list_single_accented_list_pane_t1

0xccde,	// (0x0002da59) popup_slider_window_ParamLimits

0xccde,	// (0x0002da59) popup_slider_window

0x8764,	// (0x000294df) aid_indentation_list_msg

0xe6d9,	// (0x0002f454) bg_popup_window_pane_cp19

0x8c56,	// (0x000299d1) popup_slider_window_g1

0x8c72,	// (0x000299ed) popup_slider_window_g2

0x8c8e,	// (0x00029a09) popup_slider_window_g3

0x0005,

0xfcb0,	// (0x00030a2b) popup_slider_window_g

0x8cf4,	// (0x00029a6f) popup_slider_window_t1

0x8d68,	// (0x00029ae3) small_volume_slider_vertical_pane

0x765b,	// (0x000283d6) small_volume_slider_vertical_pane_g1

0x765b,	// (0x000283d6) small_volume_slider_vertical_pane_g2

0x8d84,	// (0x00029aff) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc2,	// (0x00030a3d) small_volume_slider_vertical_pane_g

0xbeab,	// (0x0002cc26) area_side_right_pane_ParamLimits

0xbeab,	// (0x0002cc26) area_side_right_pane

0xceea,	// (0x0002dc65) aid_size_side_button_ParamLimits

0xceea,	// (0x0002dc65) aid_size_side_button

0xcf03,	// (0x0002dc7e) grid_sctrl_middle_pane_ParamLimits

0xcf03,	// (0x0002dc7e) grid_sctrl_middle_pane

0x2501,	// (0x0002327c) sctrl_sk_bottom_pane

0x2512,	// (0x0002328d) sctrl_sk_top_pane

0x2524,	// (0x0002329f) aid_touch_sctrl_top

0x34e9,	// (0x00024264) bg_sctrl_sk_pane_ParamLimits

0x34e9,	// (0x00024264) bg_sctrl_sk_pane

0x2531,	// (0x000232ac) sctrl_sk_top_pane_g1

0x253e,	// (0x000232b9) sctrl_sk_top_pane_t1

0x2524,	// (0x0002329f) aid_touch_sctrl_bottom

0x34e9,	// (0x00024264) bg_sctrl_sk_pane_cp_ParamLimits

0x34e9,	// (0x00024264) bg_sctrl_sk_pane_cp

0x2559,	// (0x000232d4) sctrl_sk_bottom_pane_g1

0x253e,	// (0x000232b9) sctrl_sk_bottom_pane_t1

0xcf1d,	// (0x0002dc98) cell_sctrl_middle_pane_ParamLimits

0xcf1d,	// (0x0002dc98) cell_sctrl_middle_pane

0xcf2e,	// (0x0002dca9) aid_touch_sctrl_middle_ParamLimits

0xcf2e,	// (0x0002dca9) aid_touch_sctrl_middle

0xcf3b,	// (0x0002dcb6) bg_sctrl_middle_pane_ParamLimits

0xcf3b,	// (0x0002dcb6) bg_sctrl_middle_pane

0x8e0c,	// (0x00029b87) cell_sctrl_middle_pane_g1_ParamLimits

0x8e0c,	// (0x00029b87) cell_sctrl_middle_pane_g1

0xcf49,	// (0x0002dcc4) cell_sctrl_middle_pane_g2_ParamLimits

0xcf49,	// (0x0002dcc4) cell_sctrl_middle_pane_g2

0x0001,

0xfcce,	// (0x00030a49) cell_sctrl_middle_pane_g_ParamLimits

0xfcce,	// (0x00030a49) cell_sctrl_middle_pane_g

0x5008,	// (0x00025d83) bg_sctrl_middle_pane_g1

0x5010,	// (0x00025d8b) bg_sctrl_middle_pane_g2

0x5018,	// (0x00025d93) bg_sctrl_middle_pane_g3

0x5020,	// (0x00025d9b) bg_sctrl_middle_pane_g4

0x5028,	// (0x00025da3) bg_sctrl_middle_pane_g5

0x5030,	// (0x00025dab) bg_sctrl_middle_pane_g6

0x5038,	// (0x00025db3) bg_sctrl_middle_pane_g7

0x5040,	// (0x00025dbb) bg_sctrl_middle_pane_g8

0x0007,

0xfcd3,	// (0x00030a4e) bg_sctrl_middle_pane_g

0x5048,	// (0x00025dc3) bg_sctrl_middle_pane_g8_copy1

0x5008,	// (0x00025d83) bg_sctrl_sk_pane_g1

0x5010,	// (0x00025d8b) bg_sctrl_sk_pane_g2

0x5018,	// (0x00025d93) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x000305b7) bg_sctrl_sk_pane_g

0x3a1c,	// (0x00024797) aid_size_touch_scroll_bar

0x5020,	// (0x00025d9b) bg_sctrl_sk_pane_g4

0x5028,	// (0x00025da3) bg_sctrl_sk_pane_g5

0x5030,	// (0x00025dab) bg_sctrl_sk_pane_g6

0x5038,	// (0x00025db3) bg_sctrl_sk_pane_g7

0x5040,	// (0x00025dbb) bg_sctrl_sk_pane_g8

0x5048,	// (0x00025dc3) bg_sctrl_sk_pane_g9

0x17ba,	// (0x00022535) popup_fep_china_hwr2_fs_candidate_window

0xc7f2,	// (0x0002d56d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc7f2,	// (0x0002d56d) popup_fep_china_hwr2_fs_control_window

0x78d9,	// (0x00028654) sctrl_sk_top_pane_g2

0x0001,

0xfcc9,	// (0x00030a44) sctrl_sk_top_pane_g

0xe791,	// (0x0002f50c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe791,	// (0x0002f50c) aid_fep_china_hwr2_fs_cell

0xe7a5,	// (0x0002f520) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7a5,	// (0x0002f520) bg_popup_fep_shadow_pane_cp4

0xe7bc,	// (0x0002f537) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe7bc,	// (0x0002f537) bg_popup_fep_shadow_pane_cp5

0xe7ce,	// (0x0002f549) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe7ce,	// (0x0002f549) popup_fep_china_hwr2_fs_control_bar_grid

0xe7e2,	// (0x0002f55d) popup_fep_china_hwr2_fs_control_funtion_grid

0x8de0,	// (0x00029b5b) aid_fep_china_hwr2_fs_candi_cell

0xea5a,	// (0x0002f7d5) bg_popup_fep_shadow_pane_cp6

0x8dea,	// (0x00029b65) popup_fep_china_hwr2_fs_candidate_grid

0xe7ea,	// (0x0002f565) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe7ea,	// (0x0002f565) cell_fep_china_hwr2_fs_funtion_grid

0x765b,	// (0x000283d6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8e0c,	// (0x00029b87) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8e0c,	// (0x00029b87) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8e1a,	// (0x00029b95) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8e1a,	// (0x00029b95) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce4,	// (0x00030a5f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce4,	// (0x00030a5f) cell_fep_china_hwr2_fs_funtion_grid_g

0xe802,	// (0x0002f57d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe802,	// (0x0002f57d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe817,	// (0x0002f592) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe817,	// (0x0002f592) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfce9,	// (0x00030a64) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfce9,	// (0x00030a64) cell_fep_china_hwr2_fs_funtion_grid_t

0x8e61,	// (0x00029bdc) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8e69,	// (0x00029be4) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8e71,	// (0x00029bec) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcee,	// (0x00030a69) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8e79,	// (0x00029bf4) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8e79,	// (0x00029bf4) cell_fep_china_hwr2_fs_candidate_grid

0x8e92,	// (0x00029c0d) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8e9a,	// (0x00029c15) popup_fep_china_hwr2_fs_candidate_grid_g21

0x765b,	// (0x000283d6) cell_fep_china_hwr2_fs_candidate_grid_g1

0x765b,	// (0x000283d6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0e,	// (0x00030889) cell_fep_china_hwr2_fs_candidate_grid_g

0x8ea2,	// (0x00029c1d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4bfe,	// (0x00025979) clock_nsta_pane_cp_24_ParamLimits

0x4bfe,	// (0x00025979) clock_nsta_pane_cp_24

0x4c7c,	// (0x000259f7) indicator_nsta_pane_cp_24_ParamLimits

0x4c7c,	// (0x000259f7) indicator_nsta_pane_cp_24

0x5d23,	// (0x00026a9e) heading_pane_g1

0x0001,

0xf8a1,	// (0x0003061c) heading_pane_g

0x677d,	// (0x000274f8) grid_sct_catagory_button_pane

0x67ad,	// (0x00027528) scroll_pane_cp5_ParamLimits

0x7258,	// (0x00027fd3) button_value_adjust_pane_cp5_ParamLimits

0x7258,	// (0x00027fd3) button_value_adjust_pane_cp5

0x7337,	// (0x000280b2) form2_midp_time_pane_ParamLimits

0x8eb0,	// (0x00029c2b) cell_sct_catagory_button_pane_ParamLimits

0x8eb0,	// (0x00029c2b) cell_sct_catagory_button_pane

0x7620,	// (0x0002839b) bg_button_pane_cp01_ParamLimits

0x7620,	// (0x0002839b) bg_button_pane_cp01

0x765b,	// (0x000283d6) cell_sct_catagory_button_pane_g1

0xcd57,	// (0x0002dad2) popup_tb_extension_window

0xe833,	// (0x0002f5ae) aid_size_cell_ext_ParamLimits

0xe833,	// (0x0002f5ae) aid_size_cell_ext

0x385e,	// (0x000245d9) bg_tb_trans_pane_cp1_ParamLimits

0x385e,	// (0x000245d9) bg_tb_trans_pane_cp1

0xe859,	// (0x0002f5d4) grid_tb_ext_pane_ParamLimits

0xe859,	// (0x0002f5d4) grid_tb_ext_pane

0xe894,	// (0x0002f60f) cell_tb_ext_pane_ParamLimits

0xe894,	// (0x0002f60f) cell_tb_ext_pane

0xe8bc,	// (0x0002f637) cell_tb_ext_pane_g1_ParamLimits

0xe8bc,	// (0x0002f637) cell_tb_ext_pane_g1

0x8f44,	// (0x00029cbf) cell_tb_ext_pane_t1

0x34e9,	// (0x00024264) list_highlight_pane_cp11_ParamLimits

0x34e9,	// (0x00024264) list_highlight_pane_cp11

0xbf52,	// (0x0002cccd) popup_uni_indicator_window_ParamLimits

0xbf52,	// (0x0002cccd) popup_uni_indicator_window

0x3aed,	// (0x00024868) bg_popup_sub_pane_cp14

0x8f5f,	// (0x00029cda) list_uniindi_pane

0x8f6b,	// (0x00029ce6) uniindi_top_pane

0x34e9,	// (0x00024264) bg_uniindi_top_pane

0x8f8a,	// (0x00029d05) uniindi_top_pane_g1

0x8fa0,	// (0x00029d1b) uniindi_top_pane_g2

0x0003,

0xfcf5,	// (0x00030a70) uniindi_top_pane_g

0x8fca,	// (0x00029d45) uniindi_top_pane_t1

0x8ff4,	// (0x00029d6f) list_single_uniindi_pane_ParamLimits

0x8ff4,	// (0x00029d6f) list_single_uniindi_pane

0x765b,	// (0x000283d6) bg_uniindi_top_pane_g1

0x9007,	// (0x00029d82) list_single_uniindi_pane_g1

0x901a,	// (0x00029d95) list_single_uniindi_pane_t1

0xea5a,	// (0x0002f7d5) control_bg_pane

0x903f,	// (0x00029dba) bg_sctrl_sk_pane_cp1

0x9048,	// (0x00029dc3) bg_sctrl_sk_pane_cp2

0x9051,	// (0x00029dcc) control_bg_pane_g1

0x905a,	// (0x00029dd5) control_bg_pane_g2

0x0001,

0xfcfe,	// (0x00030a79) control_bg_pane_g

0x70a2,	// (0x00027e1d) cell_indicator_nsta_pane_g1_ParamLimits

0xdfab,	// (0x0002ed26) cell_indicator_nsta_pane_g2_ParamLimits

0xfa72,	// (0x000307ed) cell_indicator_nsta_pane_g_ParamLimits

0x0909,	// (0x00021684) form2_midp_time_pane_t1_ParamLimits

0x214d,	// (0x00022ec8) main_idle_act4_pane_ParamLimits

0x214d,	// (0x00022ec8) main_idle_act4_pane

0xcd57,	// (0x0002dad2) popup_tb_extension_window_ParamLimits

0xe87b,	// (0x0002f5f6) tb_ext_find_pane_ParamLimits

0xe87b,	// (0x0002f5f6) tb_ext_find_pane

0x9063,	// (0x00029dde) ai_gene_pane_1_cp1

0x4901,	// (0x0002567c) ai_gene_pane_2_cp1

0x906b,	// (0x00029de6) list_single_idle_plugin_calendar_pane

0x9074,	// (0x00029def) list_single_idle_plugin_notification_pane

0x907d,	// (0x00029df8) list_single_idle_plugin_player_pane

0xe8d9,	// (0x0002f654) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe8d9,	// (0x0002f654) list_single_idle_plugin_shortcut_pane

0xe901,	// (0x0002f67c) main_idle_act4_pane_t1

0xe917,	// (0x0002f692) main_idle_act4_pane_t2

0x0001,

0xfd03,	// (0x00030a7e) main_idle_act4_pane_t

0xe92d,	// (0x0002f6a8) middle_sk_idle_act4_pane_ParamLimits

0xe92d,	// (0x0002f6a8) middle_sk_idle_act4_pane

0xe949,	// (0x0002f6c4) popup_clock_digital_analogue_window_cp2

0xe971,	// (0x0002f6ec) shortcut_wheel_idle_act4_pane_ParamLimits

0xe971,	// (0x0002f6ec) shortcut_wheel_idle_act4_pane

0x765b,	// (0x000283d6) shortcut_wheel_idle_act4_pane_g1

0x765b,	// (0x000283d6) shortcut_wheel_idle_act4_pane_g2

0x765b,	// (0x000283d6) shortcut_wheel_idle_act4_pane_g3

0x765b,	// (0x000283d6) shortcut_wheel_idle_act4_pane_g4

0x765b,	// (0x000283d6) shortcut_wheel_idle_act4_pane_g5

0x9110,	// (0x00029e8b) shortcut_wheel_idle_act4_pane_g6

0x9118,	// (0x00029e93) shortcut_wheel_idle_act4_pane_g7

0x9120,	// (0x00029e9b) shortcut_wheel_idle_act4_pane_g8

0x9128,	// (0x00029ea3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd08,	// (0x00030a83) shortcut_wheel_idle_act4_pane_g

0xe11e,	// (0x0002ee99) middle_sk_idle_act4_pane_g1_ParamLimits

0xe11e,	// (0x0002ee99) middle_sk_idle_act4_pane_g1

0xe9ee,	// (0x0002f769) middle_sk_idle_act4_pane_g2_ParamLimits

0xe9ee,	// (0x0002f769) middle_sk_idle_act4_pane_g2

0x0001,

0xfd2b,	// (0x00030aa6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd2b,	// (0x00030aa6) middle_sk_idle_act4_pane_g

0xea06,	// (0x0002f781) middle_sk_idle_act4_pane_t1_ParamLimits

0xea06,	// (0x0002f781) middle_sk_idle_act4_pane_t1

0xea35,	// (0x0002f7b0) grid_ai_shortcut_pane_ParamLimits

0xea35,	// (0x0002f7b0) grid_ai_shortcut_pane

0xea6e,	// (0x0002f7e9) list_highlight_pane_cp16_ParamLimits

0xea6e,	// (0x0002f7e9) list_highlight_pane_cp16

0xea7b,	// (0x0002f7f6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea7b,	// (0x0002f7f6) list_single_idle_plugin_shortcut_pane_g1

0xea87,	// (0x0002f802) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea87,	// (0x0002f802) list_single_idle_plugin_shortcut_pane_g2

0xeaa3,	// (0x0002f81e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeaa3,	// (0x0002f81e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd30,	// (0x00030aab) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd30,	// (0x00030aab) list_single_idle_plugin_shortcut_pane_g

0xeab8,	// (0x0002f833) cell_ai_shortcut_pane_ParamLimits

0xeab8,	// (0x0002f833) cell_ai_shortcut_pane

0xeace,	// (0x0002f849) cell_ai_shortcut_pane_g1_ParamLimits

0xeace,	// (0x0002f849) cell_ai_shortcut_pane_g1

0x9063,	// (0x00029dde) ai_gene_pane_1_cp2

0x9258,	// (0x00029fd3) ai_gene_pane_2_cp2

0x9260,	// (0x00029fdb) list_highlight_pane_cp15

0x9269,	// (0x00029fe4) list_single_idle_plugin_calendar_pane_g1

0x9260,	// (0x00029fdb) list_highlight_pane_cp17

0x9271,	// (0x00029fec) list_single_idle_plugin_calendar_pane_g1_copy1

0x9279,	// (0x00029ff4) list_single_idle_plugin_player_pane_g1

0x69d6,	// (0x00027751) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd37,	// (0x00030ab2) list_single_idle_plugin_player_pane_g

0x9281,	// (0x00029ffc) list_single_idle_plugin_player_pane_t1

0x928f,	// (0x0002a00a) list_single_idle_plugin_player_pane_t2

0x929d,	// (0x0002a018) list_single_idle_plugin_player_pane_t3

0x92ab,	// (0x0002a026) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd3c,	// (0x00030ab7) list_single_idle_plugin_player_pane_t

0x92b9,	// (0x0002a034) wait_bar_pane_cp15

0x92c1,	// (0x0002a03c) grid_ai_notification_pane

0x69d6,	// (0x00027751) list_single_idle_plugin_notification_pane_g1

0xeaf0,	// (0x0002f86b) cell_ai_notification_pane_ParamLimits

0xeaf0,	// (0x0002f86b) cell_ai_notification_pane

0x92d7,	// (0x0002a052) cell_ai_notification_pane_g1

0x92df,	// (0x0002a05a) cell_ai_notification_pane_t1

0xeafd,	// (0x0002f878) tb_ext_find_button_pane

0xeb05,	// (0x0002f880) tb_ext_find_pane_g1

0xeb0d,	// (0x0002f888) tb_ext_find_pane_t1

0x4182,	// (0x00024efd) tb_ext_find_button_pane_g1

0x930b,	// (0x0002a086) tb_ext_find_button_pane_g2

0x0001,

0xfd45,	// (0x00030ac0) tb_ext_find_button_pane_g

0xe901,	// (0x0002f67c) main_idle_act4_pane_t1_ParamLimits

0xe917,	// (0x0002f692) main_idle_act4_pane_t2_ParamLimits

0xfd03,	// (0x00030a7e) main_idle_act4_pane_t_ParamLimits

0xe949,	// (0x0002f6c4) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe961,	// (0x0002f6dc) sat_plugin_idle_act4_pane_ParamLimits

0xe961,	// (0x0002f6dc) sat_plugin_idle_act4_pane

0xeb1b,	// (0x0002f896) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb1b,	// (0x0002f896) sat_plugin_idle_act4_pane_t1

0xeb33,	// (0x0002f8ae) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb33,	// (0x0002f8ae) sat_plugin_idle_act4_pane_t2

0xeb4b,	// (0x0002f8c6) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb4b,	// (0x0002f8c6) sat_plugin_idle_act4_pane_t3

0xeb63,	// (0x0002f8de) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb63,	// (0x0002f8de) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4a,	// (0x00030ac5) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4a,	// (0x00030ac5) sat_plugin_idle_act4_pane_t

0x0f0a,	// (0x00021c85) popup_battery_window_ParamLimits

0x0f0a,	// (0x00021c85) popup_battery_window

0x34e9,	// (0x00024264) bg_popup_sub_pane_cp25_ParamLimits

0x34e9,	// (0x00024264) bg_popup_sub_pane_cp25

0x9360,	// (0x0002a0db) popup_battery_window_g1_ParamLimits

0x9360,	// (0x0002a0db) popup_battery_window_g1

0x936c,	// (0x0002a0e7) popup_battery_window_t1_ParamLimits

0x936c,	// (0x0002a0e7) popup_battery_window_t1

0x937e,	// (0x0002a0f9) popup_battery_window_t2_ParamLimits

0x937e,	// (0x0002a0f9) popup_battery_window_t2

0x0001,

0xfd53,	// (0x00030ace) popup_battery_window_t_ParamLimits

0xfd53,	// (0x00030ace) popup_battery_window_t

0xc5a1,	// (0x0002d31c) midp_canvas_pane_ParamLimits

0xd517,	// (0x0002e292) midp_keypad_pane_ParamLimits

0xd517,	// (0x0002e292) midp_keypad_pane

0x4ade,	// (0x00025859) main_midp_pane_ParamLimits

0x711c,	// (0x00027e97) signal_pane_g2_cp_ParamLimits

0xeb7b,	// (0x0002f8f6) aid_size_cell_midp_keypad_ParamLimits

0xeb7b,	// (0x0002f8f6) aid_size_cell_midp_keypad

0xeb99,	// (0x0002f914) midp_keyp_game_grid_pane_ParamLimits

0xeb99,	// (0x0002f914) midp_keyp_game_grid_pane

0xebc0,	// (0x0002f93b) midp_keyp_rocker_pane_ParamLimits

0xebc0,	// (0x0002f93b) midp_keyp_rocker_pane

0xec11,	// (0x0002f98c) midp_keyp_sk_left_pane_ParamLimits

0xec11,	// (0x0002f98c) midp_keyp_sk_left_pane

0xec65,	// (0x0002f9e0) midp_keyp_sk_right_pane_ParamLimits

0xec65,	// (0x0002f9e0) midp_keyp_sk_right_pane

0xea5a,	// (0x0002f7d5) bg_button_pane_cp03

0xecb9,	// (0x0002fa34) midp_keyp_sk_left_pane_g1

0xea5a,	// (0x0002f7d5) bg_button_pane_cp04

0xecb9,	// (0x0002fa34) midp_keyp_sk_right_pane_g1

0x765b,	// (0x000283d6) midp_keyp_rocker_pane_g1

0xecc2,	// (0x0002fa3d) keyp_game_cell_pane_ParamLimits

0xecc2,	// (0x0002fa3d) keyp_game_cell_pane

0xea5a,	// (0x0002f7d5) bg_button_pane_cp02

0xece6,	// (0x0002fa61) keyp_game_cell_pane_g1

0xbeed,	// (0x0002cc68) popup_fep_vkb2_window_ParamLimits

0xbeed,	// (0x0002cc68) popup_fep_vkb2_window

0xcf55,	// (0x0002dcd0) aid_size_cell_vkb2_ParamLimits

0xcf55,	// (0x0002dcd0) aid_size_cell_vkb2

0xcf81,	// (0x0002dcfc) popup_fep_vkb2_window_g1_ParamLimits

0xcf81,	// (0x0002dcfc) popup_fep_vkb2_window_g1

0xcfd1,	// (0x0002dd4c) vkb2_area_bottom_pane_ParamLimits

0xcfd1,	// (0x0002dd4c) vkb2_area_bottom_pane

0xd025,	// (0x0002dda0) vkb2_area_keypad_pane_ParamLimits

0xd025,	// (0x0002dda0) vkb2_area_keypad_pane

0xd06d,	// (0x0002dde8) vkb2_area_top_pane_ParamLimits

0xd06d,	// (0x0002dde8) vkb2_area_top_pane

0xd0f9,	// (0x0002de74) vkb2_top_entry_pane_ParamLimits

0xd0f9,	// (0x0002de74) vkb2_top_entry_pane

0xd126,	// (0x0002dea1) vkb2_top_grid_left_pane_ParamLimits

0xd126,	// (0x0002dea1) vkb2_top_grid_left_pane

0xd147,	// (0x0002dec2) vkb2_top_grid_right_pane_ParamLimits

0xd147,	// (0x0002dec2) vkb2_top_grid_right_pane

0x27b6,	// (0x00023531) vkb2_cell_keypad_pane_ParamLimits

0x27b6,	// (0x00023531) vkb2_cell_keypad_pane

0xd18f,	// (0x0002df0a) vkb2_area_bottom_grid_pane_ParamLimits

0xd18f,	// (0x0002df0a) vkb2_area_bottom_grid_pane

0xd1b9,	// (0x0002df34) vkb2_area_bottom_pane_g1_ParamLimits

0xd1b9,	// (0x0002df34) vkb2_area_bottom_pane_g1

0xd1df,	// (0x0002df5a) vkb2_area_bottom_pane_g2_ParamLimits

0xd1df,	// (0x0002df5a) vkb2_area_bottom_pane_g2

0xd210,	// (0x0002df8b) vkb2_area_bottom_pane_g3_ParamLimits

0xd210,	// (0x0002df8b) vkb2_area_bottom_pane_g3

0x0002,

0xfd58,	// (0x00030ad3) vkb2_area_bottom_pane_g_ParamLimits

0xfd58,	// (0x00030ad3) vkb2_area_bottom_pane_g

0x2960,	// (0x000236db) vkb2_top_cell_left_pane_ParamLimits

0x2960,	// (0x000236db) vkb2_top_cell_left_pane

0xecef,	// (0x0002fa6a) vkb2_top_entry_pane_g1_ParamLimits

0xecef,	// (0x0002fa6a) vkb2_top_entry_pane_g1

0xecfd,	// (0x0002fa78) vkb2_top_entry_pane_t1_ParamLimits

0xecfd,	// (0x0002fa78) vkb2_top_entry_pane_t1

0x952f,	// (0x0002a2aa) vkb2_top_entry_pane_t2_ParamLimits

0x952f,	// (0x0002a2aa) vkb2_top_entry_pane_t2

0x9561,	// (0x0002a2dc) vkb2_top_entry_pane_t3_ParamLimits

0x9561,	// (0x0002a2dc) vkb2_top_entry_pane_t3

0x0002,

0xfd5f,	// (0x00030ada) vkb2_top_entry_pane_t_ParamLimits

0xfd5f,	// (0x00030ada) vkb2_top_entry_pane_t

0xd27a,	// (0x0002dff5) vkb2_top_grid_right_pane_g1_ParamLimits

0xd27a,	// (0x0002dff5) vkb2_top_grid_right_pane_g1

0x29c3,	// (0x0002373e) vkb2_top_grid_right_pane_g2_ParamLimits

0x29c3,	// (0x0002373e) vkb2_top_grid_right_pane_g2

0x29db,	// (0x00023756) vkb2_top_grid_right_pane_g3_ParamLimits

0x29db,	// (0x00023756) vkb2_top_grid_right_pane_g3

0xd290,	// (0x0002e00b) vkb2_top_grid_right_pane_g4_ParamLimits

0xd290,	// (0x0002e00b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd66,	// (0x00030ae1) vkb2_top_grid_right_pane_g_ParamLimits

0xfd66,	// (0x00030ae1) vkb2_top_grid_right_pane_g

0x2a09,	// (0x00023784) vkb2_top_cell_left_pane_g1

0x2a20,	// (0x0002379b) vkb2_cell_keypad_pane_g1_ParamLimits

0x2a20,	// (0x0002379b) vkb2_cell_keypad_pane_g1

0x9585,	// (0x0002a300) vkb2_cell_keypad_pane_t1_ParamLimits

0x9585,	// (0x0002a300) vkb2_cell_keypad_pane_t1

0x2a2e,	// (0x000237a9) vkb2_cell_bottom_grid_pane_ParamLimits

0x2a2e,	// (0x000237a9) vkb2_cell_bottom_grid_pane

0x2a67,	// (0x000237e2) vkb2_cell_bottom_grid_pane_g1

0xe992,	// (0x0002f70d) aid_call2_pane_cp02

0xe99a,	// (0x0002f715) aid_call_pane_cp02

0xe9a2,	// (0x0002f71d) clock_digital_number_pane_cp10

0xe9aa,	// (0x0002f725) clock_digital_number_pane_cp11

0xe9b2,	// (0x0002f72d) clock_digital_number_pane_cp12

0xe9ba,	// (0x0002f735) clock_digital_number_pane_cp13

0xe9c2,	// (0x0002f73d) clock_digital_separator_pane_cp10

0x4182,	// (0x00024efd) popup_clock_digital_analogue_window_cp2_g1

0x4182,	// (0x00024efd) popup_clock_digital_analogue_window_cp2_g2

0xe9ca,	// (0x0002f745) popup_clock_digital_analogue_window_cp2_g3

0x4182,	// (0x00024efd) popup_clock_digital_analogue_window_cp2_g4

0xe9ca,	// (0x0002f745) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd1b,	// (0x00030a96) popup_clock_digital_analogue_window_cp2_g

0xe9d2,	// (0x0002f74d) popup_clock_digital_analogue_window_cp2_t1

0xe9e0,	// (0x0002f75b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd26,	// (0x00030aa1) popup_clock_digital_analogue_window_cp2_t

0x765b,	// (0x000283d6) clock_digital_number_pane_cp10_g1

0x765b,	// (0x000283d6) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0e,	// (0x00030889) clock_digital_number_pane_cp10_g

0x765b,	// (0x000283d6) clock_digital_separator_pane_cp10_g1

0x765b,	// (0x000283d6) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0e,	// (0x00030889) clock_digital_separator_pane_cp10_g

0x8fac,	// (0x00029d27) uniindi_top_pane_g3

0x8fbd,	// (0x00029d38) uniindi_top_pane_g4

0x2841,	// (0x000235bc) vkb2_row_keypad_pane_ParamLimits

0x2841,	// (0x000235bc) vkb2_row_keypad_pane

0x2a87,	// (0x00023802) vkb2_cell_t_keypad_pane_ParamLimits

0x2a87,	// (0x00023802) vkb2_cell_t_keypad_pane

0x2a97,	// (0x00023812) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2a97,	// (0x00023812) vkb2_cell_t_keypad_pane_cp08

0x2aaa,	// (0x00023825) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2aaa,	// (0x00023825) vkb2_cell_t_keypad_pane_cp09

0x2abe,	// (0x00023839) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2abe,	// (0x00023839) vkb2_cell_t_keypad_pane_cp01

0x2acf,	// (0x0002384a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2acf,	// (0x0002384a) vkb2_cell_t_keypad_pane_cp02

0x2ae0,	// (0x0002385b) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2ae0,	// (0x0002385b) vkb2_cell_t_keypad_pane_cp03

0x2af1,	// (0x0002386c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2af1,	// (0x0002386c) vkb2_cell_t_keypad_pane_cp04

0x2b02,	// (0x0002387d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2b02,	// (0x0002387d) vkb2_cell_t_keypad_pane_cp05

0x2b13,	// (0x0002388e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2b13,	// (0x0002388e) vkb2_cell_t_keypad_pane_cp06

0x2b24,	// (0x0002389f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2b24,	// (0x0002389f) vkb2_cell_t_keypad_pane_cp07

0x2b35,	// (0x000238b0) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2b35,	// (0x000238b0) vkb2_cell_t_keypad_pane_cp10

0x78d9,	// (0x00028654) vkb2_cell_t_keypad_pane_g1

0x959c,	// (0x0002a317) vkb2_cell_t_keypad_pane_t1

0xea5a,	// (0x0002f7d5) popup_grid_graphic2_window

0xed36,	// (0x0002fab1) aid_size_cell_graphic2_ParamLimits

0xed36,	// (0x0002fab1) aid_size_cell_graphic2

0xed74,	// (0x0002faef) bg_popup_window_pane_cp21_ParamLimits

0xed74,	// (0x0002faef) bg_popup_window_pane_cp21

0xed82,	// (0x0002fafd) graphic2_pages_pane_ParamLimits

0xed82,	// (0x0002fafd) graphic2_pages_pane

0xedd8,	// (0x0002fb53) grid_graphic2_control_pane_ParamLimits

0xedd8,	// (0x0002fb53) grid_graphic2_control_pane

0xee20,	// (0x0002fb9b) grid_graphic2_pane_ParamLimits

0xee20,	// (0x0002fb9b) grid_graphic2_pane

0xeea7,	// (0x0002fc22) cell_graphic2_pane

0xea5a,	// (0x0002f7d5) main_comp_mode_pane

0x8818,	// (0x00029593) list_ai3_gene_pane_ParamLimits

0xe6d9,	// (0x0002f454) bg_popup_window_pane_cp19_ParamLimits

0x8bfa,	// (0x00029975) bg_touch_area_indi_pane_ParamLimits

0x8bfa,	// (0x00029975) bg_touch_area_indi_pane

0x8c10,	// (0x0002998b) bg_touch_area_indi_pane_cp01_ParamLimits

0x8c10,	// (0x0002998b) bg_touch_area_indi_pane_cp01

0x8c26,	// (0x000299a1) bg_touch_area_indi_pane_cp02_ParamLimits

0x8c26,	// (0x000299a1) bg_touch_area_indi_pane_cp02

0x8c3c,	// (0x000299b7) bg_touch_area_indi_pane_cp03_ParamLimits

0x8c3c,	// (0x000299b7) bg_touch_area_indi_pane_cp03

0x8c56,	// (0x000299d1) popup_slider_window_g1_ParamLimits

0x8c72,	// (0x000299ed) popup_slider_window_g2_ParamLimits

0x8c8e,	// (0x00029a09) popup_slider_window_g3_ParamLimits

0xfcb0,	// (0x00030a2b) popup_slider_window_g_ParamLimits

0x8cf4,	// (0x00029a6f) popup_slider_window_t1_ParamLimits

0x8d68,	// (0x00029ae3) small_volume_slider_vertical_pane_ParamLimits

0xeea7,	// (0x0002fc22) cell_graphic2_pane_ParamLimits

0xef02,	// (0x0002fc7d) bg_button_pane_cp10_ParamLimits

0xef02,	// (0x0002fc7d) bg_button_pane_cp10

0xef15,	// (0x0002fc90) bg_button_pane_cp11_ParamLimits

0xef15,	// (0x0002fc90) bg_button_pane_cp11

0xef28,	// (0x0002fca3) graphic2_pages_pane_g1_ParamLimits

0xef28,	// (0x0002fca3) graphic2_pages_pane_g1

0xef43,	// (0x0002fcbe) graphic2_pages_pane_g2_ParamLimits

0xef43,	// (0x0002fcbe) graphic2_pages_pane_g2

0x0001,

0xfd74,	// (0x00030aef) graphic2_pages_pane_g_ParamLimits

0xfd74,	// (0x00030aef) graphic2_pages_pane_g

0xef5b,	// (0x0002fcd6) graphic2_pages_pane_t1_ParamLimits

0xef5b,	// (0x0002fcd6) graphic2_pages_pane_t1

0xef73,	// (0x0002fcee) cell_graphic2_control_pane_ParamLimits

0xef73,	// (0x0002fcee) cell_graphic2_control_pane

0xefa5,	// (0x0002fd20) cell_graphic2_pane_g1_ParamLimits

0xefa5,	// (0x0002fd20) cell_graphic2_pane_g1

0xe12c,	// (0x0002eea7) cell_graphic2_pane_g2_ParamLimits

0xe12c,	// (0x0002eea7) cell_graphic2_pane_g2

0xefb2,	// (0x0002fd2d) cell_graphic2_pane_g3_ParamLimits

0xefb2,	// (0x0002fd2d) cell_graphic2_pane_g3

0xe139,	// (0x0002eeb4) cell_graphic2_pane_g4_ParamLimits

0xe139,	// (0x0002eeb4) cell_graphic2_pane_g4

0xefbf,	// (0x0002fd3a) cell_graphic2_pane_g5_ParamLimits

0xefbf,	// (0x0002fd3a) cell_graphic2_pane_g5

0x0004,

0xfd79,	// (0x00030af4) cell_graphic2_pane_g_ParamLimits

0xfd79,	// (0x00030af4) cell_graphic2_pane_g

0xefdc,	// (0x0002fd57) cell_graphic2_pane_t1_ParamLimits

0xefdc,	// (0x0002fd57) cell_graphic2_pane_t1

0x5d17,	// (0x00026a92) grid_highlight_pane_cp11_ParamLimits

0x5d17,	// (0x00026a92) grid_highlight_pane_cp11

0x34e9,	// (0x00024264) bg_button_pane_cp05

0xf026,	// (0x0002fda1) cell_graphic2_control_pane_g1

0x765b,	// (0x000283d6) bg_touch_area_indi_pane_g1

0x9875,	// (0x0002a5f0) aid_cmod_rocker_key_size

0x987f,	// (0x0002a5fa) aid_cmode_itu_key_size

0x9889,	// (0x0002a604) main_cmode_video_pane

0x9893,	// (0x0002a60e) main_comp_mode_itu_pane

0x989f,	// (0x0002a61a) main_comp_mode_rocker_pane

0x98ab,	// (0x0002a626) cell_cmode_rocker_pane_ParamLimits

0x98ab,	// (0x0002a626) cell_cmode_rocker_pane

0x98bd,	// (0x0002a638) cell_cmode_itu_pane_ParamLimits

0x98bd,	// (0x0002a638) cell_cmode_itu_pane

0x3aed,	// (0x00024868) bg_button_pane_cp06_ParamLimits

0x3aed,	// (0x00024868) bg_button_pane_cp06

0x78d9,	// (0x00028654) cell_cmode_rocker_pane_g1_ParamLimits

0x78d9,	// (0x00028654) cell_cmode_rocker_pane_g1

0x8e0c,	// (0x00029b87) cell_cmode_rocker_pane_g2_ParamLimits

0x8e0c,	// (0x00029b87) cell_cmode_rocker_pane_g2

0x0001,

0xfd89,	// (0x00030b04) cell_cmode_rocker_pane_g_ParamLimits

0xfd89,	// (0x00030b04) cell_cmode_rocker_pane_g

0xea5a,	// (0x0002f7d5) bg_button_pane_cp07

0x98d2,	// (0x0002a64d) cell_cmode_itu_pane_g1

0x98db,	// (0x0002a656) cell_cmode_itu_pane_t1

0x98e9,	// (0x0002a664) cell_cmode_itu_pane_t2

0x0001,

0xfd8e,	// (0x00030b09) cell_cmode_itu_pane_t

0x902f,	// (0x00029daa) aid_touch_ctrl_left

0x9037,	// (0x00029db2) aid_touch_ctrl_right

0xea5a,	// (0x0002f7d5) compa_mode_pane

0xf04a,	// (0x0002fdc5) aid_cmod_rocker_key_size_cp

0xf054,	// (0x0002fdcf) aid_cmode_itu_key_size_cp

0x990b,	// (0x0002a686) compa_mode_pane_g1

0x9913,	// (0x0002a68e) compa_mode_pane_g2

0x991b,	// (0x0002a696) compa_mode_pane_g3

0x0002,

0xfd93,	// (0x00030b0e) compa_mode_pane_g

0xf05e,	// (0x0002fdd9) main_comp_mode_itu_pane_cp

0xf066,	// (0x0002fde1) main_comp_mode_rocker_pane_cp

0xf06e,	// (0x0002fde9) cell_cmode_itu_pane_cp_ParamLimits

0xf06e,	// (0x0002fde9) cell_cmode_itu_pane_cp

0xf083,	// (0x0002fdfe) cell_cmode_rocker_pane_cp_ParamLimits

0xf083,	// (0x0002fdfe) cell_cmode_rocker_pane_cp

0x3aed,	// (0x00024868) bg_button_pane_cp06_cp_ParamLimits

0x3aed,	// (0x00024868) bg_button_pane_cp06_cp

0x78d9,	// (0x00028654) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x78d9,	// (0x00028654) cell_cmode_rocker_pane_g1_cp

0x765b,	// (0x000283d6) cell_cmode_rocker_pane_g2_cp

0xea5a,	// (0x0002f7d5) bg_button_pane_cp07_cp

0xf095,	// (0x0002fe10) cell_cmode_itu_pane_g1_cp

0xf09e,	// (0x0002fe19) cell_cmode_itu_pane_t1_cp

0xf09e,	// (0x0002fe19) cell_cmode_itu_pane_t2_cp

0xdd9e,	// (0x0002eb19) settings_code_pane_cp2

0x3260,	// (0x00023fdb) bg_popup_window_pane_cp3_ParamLimits

0x36e9,	// (0x00024464) heading_pane_cp3_ParamLimits

0x36f8,	// (0x00024473) listscroll_popup_graphic_pane_ParamLimits

0x215b,	// (0x00022ed6) fep_hwr_aid_pane_ParamLimits

0x2524,	// (0x0002329f) aid_touch_sctrl_top_ParamLimits

0x2531,	// (0x000232ac) sctrl_sk_top_pane_g1_ParamLimits

0x78d9,	// (0x00028654) sctrl_sk_top_pane_g2_ParamLimits

0xfcc9,	// (0x00030a44) sctrl_sk_top_pane_g_ParamLimits

0x253e,	// (0x000232b9) sctrl_sk_top_pane_t1_ParamLimits

0x2524,	// (0x0002329f) aid_touch_sctrl_bottom_ParamLimits

0x253e,	// (0x000232b9) sctrl_sk_bottom_pane_t1_ParamLimits

0x8f78,	// (0x00029cf3) aid_area_touch_clock

0xd0b9,	// (0x0002de34) aid_vkb2_area_top_pane_cell_ParamLimits

0xd0b9,	// (0x0002de34) aid_vkb2_area_top_pane_cell

0xd168,	// (0x0002dee3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd168,	// (0x0002dee3) aid_vkb2_area_bottom_pane_cell

0x94e7,	// (0x0002a262) popup_char_count_window

0x9968,	// (0x0002a6e3) popup_char_count_window_g1

0x9971,	// (0x0002a6ec) popup_char_count_window_g2

0x997a,	// (0x0002a6f5) popup_char_count_window_g3

0x0002,

0xfd9a,	// (0x00030b15) popup_char_count_window_g

0x9983,	// (0x0002a6fe) popup_char_count_window_t1

0x25d7,	// (0x00023352) popup_fep_char_preview_window_ParamLimits

0x25d7,	// (0x00023352) popup_fep_char_preview_window

0xd0d9,	// (0x0002de54) vkb2_top_candi_pane_ParamLimits

0xd0d9,	// (0x0002de54) vkb2_top_candi_pane

0xf0ac,	// (0x0002fe27) cell_vkb2_top_candi_pane_ParamLimits

0xf0ac,	// (0x0002fe27) cell_vkb2_top_candi_pane

0x56a3,	// (0x0002641e) bg_popup_fep_char_preview_window_ParamLimits

0x56a3,	// (0x0002641e) bg_popup_fep_char_preview_window

0x2b4a,	// (0x000238c5) popup_fep_char_preview_window_t1_ParamLimits

0x2b4a,	// (0x000238c5) popup_fep_char_preview_window_t1

0x99db,	// (0x0002a756) bg_popup_fep_char_preview_window_g1

0x99e3,	// (0x0002a75e) bg_popup_fep_char_preview_window_g2

0x99eb,	// (0x0002a766) bg_popup_fep_char_preview_window_g3

0x99f3,	// (0x0002a76e) bg_popup_fep_char_preview_window_g4

0x99fb,	// (0x0002a776) bg_popup_fep_char_preview_window_g5

0x9a03,	// (0x0002a77e) bg_popup_fep_char_preview_window_g6

0x9a0b,	// (0x0002a786) bg_popup_fep_char_preview_window_g7

0x9a13,	// (0x0002a78e) bg_popup_fep_char_preview_window_g8

0x9a1b,	// (0x0002a796) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda1,	// (0x00030b1c) bg_popup_fep_char_preview_window_g

0x78d9,	// (0x00028654) cell_vkb2_top_candi_pane_g1_ParamLimits

0x78d9,	// (0x00028654) cell_vkb2_top_candi_pane_g1

0x7bf0,	// (0x0002896b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7bf0,	// (0x0002896b) cell_vkb2_top_candi_pane_g2

0x7c11,	// (0x0002898c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7c11,	// (0x0002898c) cell_vkb2_top_candi_pane_g3

0x2b8c,	// (0x00023907) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2b8c,	// (0x00023907) cell_vkb2_top_candi_pane_g4

0x9a23,	// (0x0002a79e) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9a23,	// (0x0002a79e) cell_vkb2_top_candi_pane_g5

0x8e0c,	// (0x00029b87) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8e0c,	// (0x00029b87) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb6,	// (0x00030b31) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb6,	// (0x00030b31) cell_vkb2_top_candi_pane_g

0x2bad,	// (0x00023928) cell_vkb2_top_candi_pane_t1

0x1fbb,	// (0x00022d36) aid_size_touch_slider_mark_ParamLimits

0x1fbb,	// (0x00022d36) aid_size_touch_slider_mark

0xedbe,	// (0x0002fb39) grid_graphic2_catg_pane_ParamLimits

0xedbe,	// (0x0002fb39) grid_graphic2_catg_pane

0xee7a,	// (0x0002fbf5) popup_grid_graphic2_window_t1_ParamLimits

0xee7a,	// (0x0002fbf5) popup_grid_graphic2_window_t1

0xee90,	// (0x0002fc0b) popup_grid_graphic2_window_t2_ParamLimits

0xee90,	// (0x0002fc0b) popup_grid_graphic2_window_t2

0x0001,

0xfd6f,	// (0x00030aea) popup_grid_graphic2_window_t_ParamLimits

0xfd6f,	// (0x00030aea) popup_grid_graphic2_window_t

0x34e9,	// (0x00024264) bg_button_pane_cp05_ParamLimits

0xf026,	// (0x0002fda1) cell_graphic2_control_pane_g1_ParamLimits

0xf10c,	// (0x0002fe87) cell_graphic2_catg_pane_ParamLimits

0xf10c,	// (0x0002fe87) cell_graphic2_catg_pane

0xea5a,	// (0x0002f7d5) bg_button_pane_cp12

0xf11e,	// (0x0002fe99) cell_graphic2_catg_pane_g1

0x8f44,	// (0x00029cbf) cell_tb_ext_pane_t1_ParamLimits

0x2980,	// (0x000236fb) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2980,	// (0x000236fb) vkb2_top_cell_right_narrow_pane

0x2998,	// (0x00023713) vkb2_top_cell_right_wide_pane_ParamLimits

0x2998,	// (0x00023713) vkb2_top_cell_right_wide_pane

0x214d,	// (0x00022ec8) bg_vkb2_func_pane_ParamLimits

0x214d,	// (0x00022ec8) bg_vkb2_func_pane

0x2a09,	// (0x00023784) vkb2_top_cell_left_pane_g1_ParamLimits

0x214d,	// (0x00022ec8) bg_vkb2_fuc_pane_cp03_ParamLimits

0x214d,	// (0x00022ec8) bg_vkb2_fuc_pane_cp03

0x2a67,	// (0x000237e2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5010,	// (0x00025d8b) bg_vkb2_func_pane_g1

0x5018,	// (0x00025d93) bg_vkb2_func_pane_g2

0x5028,	// (0x00025da3) bg_vkb2_func_pane_g3

0x5020,	// (0x00025d9b) bg_vkb2_func_pane_g4

0x5030,	// (0x00025dab) bg_vkb2_func_pane_g5

0x5038,	// (0x00025db3) bg_vkb2_func_pane_g6

0x5040,	// (0x00025dbb) bg_vkb2_func_pane_g7

0x5048,	// (0x00025dc3) bg_vkb2_func_pane_g8

0x5008,	// (0x00025d83) bg_vkb2_func_pane_g9

0x0008,

0xfdc3,	// (0x00030b3e) bg_vkb2_func_pane_g

0x214d,	// (0x00022ec8) bg_vkb2_fuc_pane_cp01_ParamLimits

0x214d,	// (0x00022ec8) bg_vkb2_fuc_pane_cp01

0x2a09,	// (0x00023784) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2a09,	// (0x00023784) vkb2_top_cell_right_wide_pane_g1

0x214d,	// (0x00022ec8) bg_vkb2_fuc_pane_cp02_ParamLimits

0x214d,	// (0x00022ec8) bg_vkb2_fuc_pane_cp02

0x2bcc,	// (0x00023947) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2bcc,	// (0x00023947) vkb2_top_cell_right_narrow_pane_g1

0xe61b,	// (0x0002f396) aid_touch_area_decrease_ParamLimits

0xe61b,	// (0x0002f396) aid_touch_area_decrease

0xe655,	// (0x0002f3d0) aid_touch_area_increase_ParamLimits

0xe655,	// (0x0002f3d0) aid_touch_area_increase

0xe67d,	// (0x0002f3f8) aid_touch_area_mute_ParamLimits

0xe67d,	// (0x0002f3f8) aid_touch_area_mute

0xe6a5,	// (0x0002f420) aid_touch_area_slider_ParamLimits

0xe6a5,	// (0x0002f420) aid_touch_area_slider

0xe6e5,	// (0x0002f460) popup_slider_window_g4_ParamLimits

0xe6e5,	// (0x0002f460) popup_slider_window_g4

0xe70d,	// (0x0002f488) popup_slider_window_g5_ParamLimits

0xe70d,	// (0x0002f488) popup_slider_window_g5

0xe741,	// (0x0002f4bc) popup_slider_window_g6_ParamLimits

0xe741,	// (0x0002f4bc) popup_slider_window_g6

0x8d22,	// (0x00029a9d) popup_slider_window_t2_ParamLimits

0x8d22,	// (0x00029a9d) popup_slider_window_t2

0x0001,

0xfcbd,	// (0x00030a38) popup_slider_window_t_ParamLimits

0xfcbd,	// (0x00030a38) popup_slider_window_t

0xe75d,	// (0x0002f4d8) slider_pane_ParamLimits

0xe75d,	// (0x0002f4d8) slider_pane

0x9a5f,	// (0x0002a7da) slider_pane_g1_ParamLimits

0x9a5f,	// (0x0002a7da) slider_pane_g1

0x9a73,	// (0x0002a7ee) slider_pane_g2_ParamLimits

0x9a73,	// (0x0002a7ee) slider_pane_g2

0x9a89,	// (0x0002a804) slider_pane_g3_ParamLimits

0x9a89,	// (0x0002a804) slider_pane_g3

0x0003,

0xfdd6,	// (0x00030b51) slider_pane_g_ParamLimits

0xfdd6,	// (0x00030b51) slider_pane_g

0xcd9f,	// (0x0002db1a) popup_tb_float_extension_window_ParamLimits

0xcd9f,	// (0x0002db1a) popup_tb_float_extension_window

0x9ab5,	// (0x0002a830) aid_size_cell_tb_float_ext

0xea5a,	// (0x0002f7d5) bg_popup_sub_window_cp28

0x9ac1,	// (0x0002a83c) grid_tb_float_ext_pane

0x9acb,	// (0x0002a846) cell_tb_float_ext_pane_ParamLimits

0x9acb,	// (0x0002a846) cell_tb_float_ext_pane

0x9ae5,	// (0x0002a860) cell_tb_float_ext_pane_g1

0x9aee,	// (0x0002a869) grid_highlight_pane_cp12

0xcec8,	// (0x0002dc43) cell_last_hwr_side_pane_ParamLimits

0xcec8,	// (0x0002dc43) cell_last_hwr_side_pane

0x765b,	// (0x000283d6) cell_last_hwr_side_pane_g1

0x9af7,	// (0x0002a872) cell_last_hwr_side_pane_g2

0x0001,

0xfddf,	// (0x00030b5a) cell_last_hwr_side_pane_g

0xd245,	// (0x0002dfc0) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd245,	// (0x0002dfc0) vkb2_area_bottom_space_btn_pane

0x78d9,	// (0x00028654) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x959c,	// (0x0002a317) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2bad,	// (0x00023928) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2bec,	// (0x00023967) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2bec,	// (0x00023967) vkb2_area_bottom_space_btn_pane_g1

0x2c26,	// (0x000239a1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2c26,	// (0x000239a1) vkb2_area_bottom_space_btn_pane_g2

0x2c5c,	// (0x000239d7) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2c5c,	// (0x000239d7) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde4,	// (0x00030b5f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde4,	// (0x00030b5f) vkb2_area_bottom_space_btn_pane_g

0x2202,	// (0x00022f7d) cel_fep_hwr_func_pane_ParamLimits

0x2202,	// (0x00022f7d) cel_fep_hwr_func_pane

0xce9d,	// (0x0002dc18) cell_hwr_side_button_pane_ParamLimits

0xce9d,	// (0x0002dc18) cell_hwr_side_button_pane

0x8f78,	// (0x00029cf3) aid_area_touch_clock_ParamLimits

0x34e9,	// (0x00024264) bg_uniindi_top_pane_ParamLimits

0x8f8a,	// (0x00029d05) uniindi_top_pane_g1_ParamLimits

0x8fa0,	// (0x00029d1b) uniindi_top_pane_g2_ParamLimits

0x8fac,	// (0x00029d27) uniindi_top_pane_g3_ParamLimits

0x8fbd,	// (0x00029d38) uniindi_top_pane_g4_ParamLimits

0xfcf5,	// (0x00030a70) uniindi_top_pane_g_ParamLimits

0x8fca,	// (0x00029d45) uniindi_top_pane_t1_ParamLimits

0x34e9,	// (0x00024264) bg_vkb2_func_pane_cp01_ParamLimits

0x34e9,	// (0x00024264) bg_vkb2_func_pane_cp01

0x9b00,	// (0x0002a87b) cel_fep_hwr_func_pane_g1_ParamLimits

0x9b00,	// (0x0002a87b) cel_fep_hwr_func_pane_g1

0x34e9,	// (0x00024264) bg_vkb2_func_pane_cp02_ParamLimits

0x34e9,	// (0x00024264) bg_vkb2_func_pane_cp02

0x9b00,	// (0x0002a87b) cell_hwr_side_button_pane_g1_ParamLimits

0x9b00,	// (0x0002a87b) cell_hwr_side_button_pane_g1

0x4e89,	// (0x00025c04) status_pane_g4_ParamLimits

0x4e89,	// (0x00025c04) status_pane_g4

0x4ea3,	// (0x00025c1e) status_pane_t1

0x73a0,	// (0x0002811b) form2_midp_gauge_slider_cont_pane

0x73a8,	// (0x00028123) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe076,	// (0x0002edf1) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe088,	// (0x0002ee03) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac1,	// (0x0003083c) form2_midp_gauge_slider_pane_t_ParamLimits

0x73de,	// (0x00028159) form2_midp_slider_pane_ParamLimits

0x259f,	// (0x0002331a) aid_size_cell_func_vkb2_ParamLimits

0x259f,	// (0x0002331a) aid_size_cell_func_vkb2

0x9aa1,	// (0x0002a81c) slider_pane_g4_ParamLimits

0x9aa1,	// (0x0002a81c) slider_pane_g4

0xd2ae,	// (0x0002e029) form2_midp_gauge_slider_pane_t2_cp01

0xd2bc,	// (0x0002e037) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd2bc,	// (0x0002e037) form2_midp_gauge_slider_pane_t3_cp01

0x2cd1,	// (0x00023a4c) form2_midp_slider_pane_cp01

0xea5a,	// (0x0002f7d5) navi_smil_pane

0x9b39,	// (0x0002a8b4) navi_smil_pane_g1

0x9b41,	// (0x0002a8bc) navi_smil_pane_t1

0x9b0e,	// (0x0002a889) form2_midp_slider_pane_g1

0x9b17,	// (0x0002a892) form2_midp_slider_pane_g2

0x9b1f,	// (0x0002a89a) form2_midp_slider_pane_g3

0x9b0e,	// (0x0002a889) form2_midp_slider_pane_g4

0xf127,	// (0x0002fea2) form2_midp_slider_pane_g5

0x0004,

0xfded,	// (0x00030b68) form2_midp_slider_pane_g

0x2c96,	// (0x00023a11) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2c96,	// (0x00023a11) vkb2_area_bottom_space_btn_pane_g4

0xd782,	// (0x0002e4fd) lc0_navi_pane_ParamLimits

0xd782,	// (0x0002e4fd) lc0_navi_pane

0xd7ec,	// (0x0002e567) lc0_stat_indi_pane_ParamLimits

0xd7ec,	// (0x0002e567) lc0_stat_indi_pane

0xd801,	// (0x0002e57c) ls0_title_pane_ParamLimits

0xd801,	// (0x0002e57c) ls0_title_pane

0x3aed,	// (0x00024868) bg_popup_sub_pane_cp14_ParamLimits

0x8f5f,	// (0x00029cda) list_uniindi_pane_ParamLimits

0x8f6b,	// (0x00029ce6) uniindi_top_pane_ParamLimits

0x9007,	// (0x00029d82) list_single_uniindi_pane_g1_ParamLimits

0x901a,	// (0x00029d95) list_single_uniindi_pane_t1_ParamLimits

0xd2d9,	// (0x0002e054) lc0_stat_clock_pane_ParamLimits

0xd2d9,	// (0x0002e054) lc0_stat_clock_pane

0xf132,	// (0x0002fead) lc0_stat_indi_pane_g1_ParamLimits

0xf132,	// (0x0002fead) lc0_stat_indi_pane_g1

0xf13f,	// (0x0002feba) lc0_stat_indi_pane_g2_ParamLimits

0xf13f,	// (0x0002feba) lc0_stat_indi_pane_g2

0x0001,

0xfdf8,	// (0x00030b73) lc0_stat_indi_pane_g_ParamLimits

0xfdf8,	// (0x00030b73) lc0_stat_indi_pane_g

0xd2e6,	// (0x0002e061) lc0_uni_indicator_pane_ParamLimits

0xd2e6,	// (0x0002e061) lc0_uni_indicator_pane

0xf14c,	// (0x0002fec7) ls0_title_pane_g1_ParamLimits

0xf14c,	// (0x0002fec7) ls0_title_pane_g1

0xf160,	// (0x0002fedb) ls0_title_pane_t1_ParamLimits

0xf160,	// (0x0002fedb) ls0_title_pane_t1

0xd2f3,	// (0x0002e06e) lc0_uni_indicator_pane_g1_ParamLimits

0xd2f3,	// (0x0002e06e) lc0_uni_indicator_pane_g1

0x9bb3,	// (0x0002a92e) lc0_stat_clock_pane_t1

0xea5a,	// (0x0002f7d5) main_ai5_pane

0x9bc1,	// (0x0002a93c) ai5_sk_pane_ParamLimits

0x9bc1,	// (0x0002a93c) ai5_sk_pane

0xf18e,	// (0x0002ff09) cell_ai5_widget_pane_ParamLimits

0xf18e,	// (0x0002ff09) cell_ai5_widget_pane

0x9c97,	// (0x0002aa12) aid_size_cell_widget_grid

0x9cad,	// (0x0002aa28) bg_ai5_widget_pane_ParamLimits

0x9cad,	// (0x0002aa28) bg_ai5_widget_pane

0x9d29,	// (0x0002aaa4) cell_ai5_widget_pane_g2

0x9d3d,	// (0x0002aab8) cell_ai5_widget_pane_g3

0x9d57,	// (0x0002aad2) cell_ai5_widget_pane_g4

0x9d67,	// (0x0002aae2) cell_ai5_widget_pane_g5

0x9d77,	// (0x0002aaf2) cell_ai5_widget_pane_g6

0x9d83,	// (0x0002aafe) cell_ai5_widget_pane_g7

0x9def,	// (0x0002ab6a) cell_ai5_widget_pane_t1_ParamLimits

0x9def,	// (0x0002ab6a) cell_ai5_widget_pane_t1

0x9e0c,	// (0x0002ab87) cell_ai5_widget_pane_t2_ParamLimits

0x9e0c,	// (0x0002ab87) cell_ai5_widget_pane_t2

0x9e24,	// (0x0002ab9f) cell_ai5_widget_pane_t3_ParamLimits

0x9e24,	// (0x0002ab9f) cell_ai5_widget_pane_t3

0x9e3c,	// (0x0002abb7) cell_ai5_widget_pane_t4_ParamLimits

0x9e3c,	// (0x0002abb7) cell_ai5_widget_pane_t4

0x9e62,	// (0x0002abdd) cell_ai5_widget_pane_t5_ParamLimits

0x9e62,	// (0x0002abdd) cell_ai5_widget_pane_t5

0x9e81,	// (0x0002abfc) cell_ai5_widget_pane_t6_ParamLimits

0x9e81,	// (0x0002abfc) cell_ai5_widget_pane_t6

0x9e93,	// (0x0002ac0e) cell_ai5_widget_pane_t7_ParamLimits

0x9e93,	// (0x0002ac0e) cell_ai5_widget_pane_t7

0x9eb2,	// (0x0002ac2d) cell_ai5_widget_pane_t8_ParamLimits

0x9eb2,	// (0x0002ac2d) cell_ai5_widget_pane_t8

0x000b,

0xfe18,	// (0x00030b93) cell_ai5_widget_pane_t_ParamLimits

0xfe18,	// (0x00030b93) cell_ai5_widget_pane_t

0x9f36,	// (0x0002acb1) grid_ai5_widget_pane

0x3aed,	// (0x00024868) highlight_cell_ai5_widget_pane_ParamLimits

0x3aed,	// (0x00024868) highlight_cell_ai5_widget_pane

0xf1fa,	// (0x0002ff75) ai5_sk_left_pane

0xf204,	// (0x0002ff7f) ai5_sk_middle_pane

0xf20e,	// (0x0002ff89) ai5_sk_right_pane

0x9f6b,	// (0x0002ace6) bg_ai5_widget_pane_g1_ParamLimits

0x9f6b,	// (0x0002ace6) bg_ai5_widget_pane_g1

0x9f77,	// (0x0002acf2) bg_ai5_widget_pane_g2_ParamLimits

0x9f77,	// (0x0002acf2) bg_ai5_widget_pane_g2

0x9f83,	// (0x0002acfe) bg_ai5_widget_pane_g3_ParamLimits

0x9f83,	// (0x0002acfe) bg_ai5_widget_pane_g3

0x9f8f,	// (0x0002ad0a) bg_ai5_widget_pane_g4_ParamLimits

0x9f8f,	// (0x0002ad0a) bg_ai5_widget_pane_g4

0x9f9b,	// (0x0002ad16) bg_ai5_widget_pane_g5_ParamLimits

0x9f9b,	// (0x0002ad16) bg_ai5_widget_pane_g5

0x9fa7,	// (0x0002ad22) bg_ai5_widget_pane_g6_ParamLimits

0x9fa7,	// (0x0002ad22) bg_ai5_widget_pane_g6

0x9fb3,	// (0x0002ad2e) bg_ai5_widget_pane_g7_ParamLimits

0x9fb3,	// (0x0002ad2e) bg_ai5_widget_pane_g7

0x9fbf,	// (0x0002ad3a) bg_ai5_widget_pane_g8_ParamLimits

0x9fbf,	// (0x0002ad3a) bg_ai5_widget_pane_g8

0x9fcb,	// (0x0002ad46) bg_ai5_widget_pane_g9_ParamLimits

0x9fcb,	// (0x0002ad46) bg_ai5_widget_pane_g9

0x0008,

0xfe31,	// (0x00030bac) bg_ai5_widget_pane_g_ParamLimits

0xfe31,	// (0x00030bac) bg_ai5_widget_pane_g

0x9ffd,	// (0x0002ad78) cell_shortcut_ai5_widget_pane_ParamLimits

0x9ffd,	// (0x0002ad78) cell_shortcut_ai5_widget_pane

0x47ba,	// (0x00025535) bg_cell_shortcut_ai5_widget_pane

0xa00e,	// (0x0002ad89) cell_grid_ai5_widget_pane_g1

0x47ba,	// (0x00025535) highlight_cell_shortcut_ai5_widget_pane

0x5018,	// (0x00025d93) ai5_sk_left_pane_g1

0xa017,	// (0x0002ad92) ai5_sk_left_pane_g2

0xa01f,	// (0x0002ad9a) ai5_sk_left_pane_g3

0xa027,	// (0x0002ada2) ai5_sk_left_pane_g4

0x0003,

0xfe44,	// (0x00030bbf) ai5_sk_left_pane_g

0xa02f,	// (0x0002adaa) ai5_sk_left_pane_t1

0x5010,	// (0x00025d8b) ai5_sk_right_pane_g1

0xa03d,	// (0x0002adb8) ai5_sk_right_pane_g2

0xa045,	// (0x0002adc0) ai5_sk_right_pane_g3

0xa04d,	// (0x0002adc8) ai5_sk_right_pane_g4

0x0003,

0xfe4d,	// (0x00030bc8) ai5_sk_right_pane_g

0xa055,	// (0x0002add0) ai5_sk_right_pane_t1

0x5010,	// (0x00025d8b) ai5_sk_middle_pane_g1

0x5018,	// (0x00025d93) ai5_sk_middle_pane_g2

0x5030,	// (0x00025dab) ai5_sk_middle_pane_g3

0xa045,	// (0x0002adc0) ai5_sk_middle_pane_g4

0xa01f,	// (0x0002ad9a) ai5_sk_middle_pane_g5

0xa063,	// (0x0002adde) ai5_sk_middle_pane_g6

0xf218,	// (0x0002ff93) ai5_sk_middle_pane_g7

0x0006,

0xfe56,	// (0x00030bd1) ai5_sk_middle_pane_g

0xd66e,	// (0x0002e3e9) aid_touch_area_size_lc0_ParamLimits

0xd66e,	// (0x0002e3e9) aid_touch_area_size_lc0

0x238d,	// (0x00023108) cell_hwr_candidate_pane_t1_ParamLimits

0x4b5a,	// (0x000258d5) aid_touch_navi_pane

0xd8fa,	// (0x0002e675) status_dt_navi_pane_ParamLimits

0xd8fa,	// (0x0002e675) status_dt_navi_pane

0xd912,	// (0x0002e68d) status_dt_sta_pane_ParamLimits

0xd912,	// (0x0002e68d) status_dt_sta_pane

0xf220,	// (0x0002ff9b) dt_sta_controll_pane

0xf22d,	// (0x0002ffa8) dt_sta_indi_pane

0xf23a,	// (0x0002ffb5) dt_sta_title_pane

0x34e9,	// (0x00024264) bg_dt_sta_indi_pane_ParamLimits

0x34e9,	// (0x00024264) bg_dt_sta_indi_pane

0xf24c,	// (0x0002ffc7) dt_sta_battery_pane

0xf254,	// (0x0002ffcf) dt_sta_indi_pane_g1

0xa0b5,	// (0x0002ae30) dt_sta_indi_pane_g2

0xa0be,	// (0x0002ae39) dt_sta_indi_pane_g3

0x0002,

0xfe65,	// (0x00030be0) dt_sta_indi_pane_g

0xa0c7,	// (0x0002ae42) dt_sta_signal_pane

0x3aed,	// (0x00024868) bg_dt_sta_title_pane_ParamLimits

0x3aed,	// (0x00024868) bg_dt_sta_title_pane

0xa0d0,	// (0x0002ae4b) dt_sta_title_pane_g1

0xa0d8,	// (0x0002ae53) dt_sta_title_pane_t1_ParamLimits

0xa0d8,	// (0x0002ae53) dt_sta_title_pane_t1

0xea5a,	// (0x0002f7d5) bg_dt_sta_control_pane

0xf25d,	// (0x0002ffd8) dt_sta_controll_pane_g1

0xa0f6,	// (0x0002ae71) bg_dt_sta_title_pane_g1

0xa0ff,	// (0x0002ae7a) bg_dt_sta_title_pane_g2

0xa108,	// (0x0002ae83) bg_dt_sta_title_pane_g3

0x0002,

0xfe6c,	// (0x00030be7) bg_dt_sta_title_pane_g

0x765b,	// (0x000283d6) bg_dt_sta_indi_pane_g1

0xa111,	// (0x0002ae8c) dt_sta_signal_pane_g1

0xa119,	// (0x0002ae94) dt_sta_signal_pane_g2

0x0001,

0xfe73,	// (0x00030bee) dt_sta_signal_pane_g

0xa121,	// (0x0002ae9c) dt_sta_battery_pane_g1

0xa12a,	// (0x0002aea5) dt_sta_battery_pane_t1

0x765b,	// (0x000283d6) bg_dt_sta_control_pane_g1

0x42ad,	// (0x00025028) fep_china_uni_eep_pane

0x42b5,	// (0x00025030) fep_china_uni_entry_pane_ParamLimits

0x42c5,	// (0x00025040) popup_fep_china_uni_window_g1_ParamLimits

0x42d5,	// (0x00025050) popup_fep_china_uni_window_g2_ParamLimits

0x42d5,	// (0x00025050) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x00030473) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x00030473) popup_fep_china_uni_window_g

0xa139,	// (0x0002aeb4) fep_china_uni_eep_pane_g1

0xa141,	// (0x0002aebc) fep_china_uni_eep_pane_t1

0x9b30,	// (0x0002a8ab) aid_touch_area_size_smil_player

0x4cb0,	// (0x00025a2b) lc0_clock_pane

0x4e97,	// (0x00025c12) status_pane_g5_ParamLimits

0x4e97,	// (0x00025c12) status_pane_g5

0xc921,	// (0x0002d69c) popup_keymap_window

0x4e55,	// (0x00025bd0) status_icon_pane

0x9d3d,	// (0x0002aab8) cell_ai5_widget_pane_g3_ParamLimits

0x9d57,	// (0x0002aad2) cell_ai5_widget_pane_g4_ParamLimits

0x9d67,	// (0x0002aae2) cell_ai5_widget_pane_g5_ParamLimits

0x9d8f,	// (0x0002ab0a) cell_ai5_widget_pane_g8_ParamLimits

0x9d8f,	// (0x0002ab0a) cell_ai5_widget_pane_g8

0x9da3,	// (0x0002ab1e) cell_ai5_widget_pane_g9_ParamLimits

0x9da3,	// (0x0002ab1e) cell_ai5_widget_pane_g9

0x9db7,	// (0x0002ab32) cell_ai5_widget_pane_g10_ParamLimits

0x9db7,	// (0x0002ab32) cell_ai5_widget_pane_g10

0xa150,	// (0x0002aecb) status_icon_pane_g1

0xea5a,	// (0x0002f7d5) bg_popup_sub_pane_cp13

0xa158,	// (0x0002aed3) popup_keymap_window_t1

0xd604,	// (0x0002e37f) control_pane_g6_ParamLimits

0xd604,	// (0x0002e37f) control_pane_g6

0xd611,	// (0x0002e38c) control_pane_g7_ParamLimits

0xd611,	// (0x0002e38c) control_pane_g7

0xd61e,	// (0x0002e399) control_pane_g8_ParamLimits

0xd61e,	// (0x0002e399) control_pane_g8

0xf220,	// (0x0002ff9b) dt_sta_controll_pane_ParamLimits

0xf22d,	// (0x0002ffa8) dt_sta_indi_pane_ParamLimits

0xf23a,	// (0x0002ffb5) dt_sta_title_pane_ParamLimits

0x3a25,	// (0x000247a0) aid_size_touch_scroll_bar_cale

0x0f1e,	// (0x00021c99) popup_discreet_window_ParamLimits

0x0f1e,	// (0x00021c99) popup_discreet_window

0xbf33,	// (0x0002ccae) popup_sk_window

0x56a3,	// (0x0002641e) bg_popup_sub_pane_cp28_ParamLimits

0x56a3,	// (0x0002641e) bg_popup_sub_pane_cp28

0xa166,	// (0x0002aee1) popup_discreet_window_g1_ParamLimits

0xa166,	// (0x0002aee1) popup_discreet_window_g1

0xa186,	// (0x0002af01) popup_discreet_window_t1_ParamLimits

0xa186,	// (0x0002af01) popup_discreet_window_t1

0xa1a4,	// (0x0002af1f) popup_discreet_window_t2_ParamLimits

0xa1a4,	// (0x0002af1f) popup_discreet_window_t2

0x0002,

0xfe78,	// (0x00030bf3) popup_discreet_window_t_ParamLimits

0xfe78,	// (0x00030bf3) popup_discreet_window_t

0x2d08,	// (0x00023a83) popup_sk_window_g1

0x2d12,	// (0x00023a8d) popup_sk_window_g2

0x0001,

0xfe7f,	// (0x00030bfa) popup_sk_window_g

0x2d1a,	// (0x00023a95) popup_sk_window_t1

0x2d28,	// (0x00023aa3) popup_sk_window_t1_copy1

0x9d29,	// (0x0002aaa4) cell_ai5_widget_pane_g2_ParamLimits

0x9ec4,	// (0x0002ac3f) cell_ai5_widget_pane_t9_ParamLimits

0x9ec4,	// (0x0002ac3f) cell_ai5_widget_pane_t9

0xea5a,	// (0x0002f7d5) main_fep_fshwr2_pane

0xd31a,	// (0x0002e095) aid_fshwr2_btn_pane

0xd32a,	// (0x0002e0a5) aid_fshwr2_syb_pane

0xd33e,	// (0x0002e0b9) aid_fshwr2_txt_pane

0xd34e,	// (0x0002e0c9) fshwr2_func_candi_pane

0xd36e,	// (0x0002e0e9) fshwr2_hwr_syb_pane

0xd390,	// (0x0002e10b) fshwr2_icf_pane

0xea5a,	// (0x0002f7d5) fshwr2_icf_bg_pane

0xd3c0,	// (0x0002e13b) fshwr2_icf_pane_t1_ParamLimits

0xd3c0,	// (0x0002e13b) fshwr2_icf_pane_t1

0x4182,	// (0x00024efd) fshwr2_func_candi_pane_g1

0xf266,	// (0x0002ffe1) fshwr2_func_candi_row_pane_ParamLimits

0xf266,	// (0x0002ffe1) fshwr2_func_candi_row_pane

0xd3d9,	// (0x0002e154) cell_fshwr2_syb_pane_ParamLimits

0xd3d9,	// (0x0002e154) cell_fshwr2_syb_pane

0x9b00,	// (0x0002a87b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9b00,	// (0x0002a87b) fshwr2_hwr_syb_pane_g1

0xea5a,	// (0x0002f7d5) bg_popup_call_pane_cp01

0xd3ff,	// (0x0002e17a) fshwr2_func_candi_cell_pane_ParamLimits

0xd3ff,	// (0x0002e17a) fshwr2_func_candi_cell_pane

0x5484,	// (0x000261ff) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5484,	// (0x000261ff) fshwr2_func_candi_cell_bg_pane

0xd44a,	// (0x0002e1c5) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd44a,	// (0x0002e1c5) fshwr2_func_candi_cell_pane_g1

0xd481,	// (0x0002e1fc) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd481,	// (0x0002e1fc) fshwr2_func_candi_cell_pane_t1

0xea5a,	// (0x0002f7d5) bg_button_pane_cp08

0x4ade,	// (0x00025859) cell_fshwr2_syb_bg_pane

0xd49c,	// (0x0002e217) cell_fshwr2_syb_bg_pane_g1

0xd4af,	// (0x0002e22a) cell_fshwr2_syb_bg_pane_t1

0x3aed,	// (0x00024868) main_tmo_pane

0xdbd0,	// (0x0002e94b) uni_indicator_pane_g1_ParamLimits

0xdbe6,	// (0x0002e961) uni_indicator_pane_g2_ParamLimits

0xdbfc,	// (0x0002e977) uni_indicator_pane_g3_ParamLimits

0x61f1,	// (0x00026f6c) uni_indicator_pane_g4_ParamLimits

0x61f1,	// (0x00026f6c) uni_indicator_pane_g4

0x6205,	// (0x00026f80) uni_indicator_pane_g5_ParamLimits

0x6205,	// (0x00026f80) uni_indicator_pane_g5

0x6205,	// (0x00026f80) uni_indicator_pane_g6_ParamLimits

0x6205,	// (0x00026f80) uni_indicator_pane_g6

0xf8f7,	// (0x00030672) uni_indicator_pane_g_ParamLimits

0xe5f7,	// (0x0002f372) popup_tmo_note_window_ParamLimits

0xe5f7,	// (0x0002f372) popup_tmo_note_window

0x3aed,	// (0x00024868) fshwr2_bg_pane

0xd472,	// (0x0002e1ed) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd472,	// (0x0002e1ed) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe84,	// (0x00030bff) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe84,	// (0x00030bff) fshwr2_func_candi_cell_pane_g

0x765b,	// (0x000283d6) bg_popup_window_pane_cp01

0x2ec4,	// (0x00023c3f) bg_popup_window_pane_g1_cp01

0xa21d,	// (0x0002af98) bg_popup_window_pane_cp22_ParamLimits

0xa21d,	// (0x0002af98) bg_popup_window_pane_cp22

0xa22b,	// (0x0002afa6) listscroll_tmo_link_pane_ParamLimits

0xa22b,	// (0x0002afa6) listscroll_tmo_link_pane

0xa26b,	// (0x0002afe6) popup_tmo_note_window_g1_ParamLimits

0xa26b,	// (0x0002afe6) popup_tmo_note_window_g1

0xa278,	// (0x0002aff3) tmo_note_info_pane_ParamLimits

0xa278,	// (0x0002aff3) tmo_note_info_pane

0xf289,	// (0x00030004) list_tmo_note_info_pane_g1_ParamLimits

0xf289,	// (0x00030004) list_tmo_note_info_pane_g1

0xa2a9,	// (0x0002b024) list_tmo_note_info_pane_g2_ParamLimits

0xa2a9,	// (0x0002b024) list_tmo_note_info_pane_g2

0x0001,

0xfe89,	// (0x00030c04) list_tmo_note_info_pane_g_ParamLimits

0xfe89,	// (0x00030c04) list_tmo_note_info_pane_g

0xa2c5,	// (0x0002b040) list_tmo_note_info_text_pane_ParamLimits

0xa2c5,	// (0x0002b040) list_tmo_note_info_text_pane

0xa346,	// (0x0002b0c1) list_tmo_link_pane

0xa353,	// (0x0002b0ce) scroll_pane_cp20

0xa360,	// (0x0002b0db) list_single_tmo_link_pane_ParamLimits

0xa360,	// (0x0002b0db) list_single_tmo_link_pane

0xa370,	// (0x0002b0eb) list_single_tmo_link_pane_t1

0xa37e,	// (0x0002b0f9) list_tmo_note_info_text_pane_t1_ParamLimits

0xa37e,	// (0x0002b0f9) list_tmo_note_info_text_pane_t1

0xc3a1,	// (0x0002d11c) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc3a1,	// (0x0002d11c) aid_size_touch_scroll_bar_cp01

0xb9d7,	// (0x0002c752) aid_size_touch_slider_marker

0xbf23,	// (0x0002cc9e) popup_settings_window_ParamLimits

0xbf23,	// (0x0002cc9e) popup_settings_window

0x02d1,	// (0x0002104c) popup_candi_list_indi_window

0x4b5a,	// (0x000258d5) aid_touch_navi_pane_ParamLimits

0x24f8,	// (0x00023273) rs_clock_indi_pane

0x2501,	// (0x0002327c) sctrl_sk_bottom_pane_ParamLimits

0x2512,	// (0x0002328d) sctrl_sk_top_pane_ParamLimits

0x25f1,	// (0x0002336c) popup_fep_tooltip_window

0x9c97,	// (0x0002aa12) aid_size_cell_widget_grid_ParamLimits

0x9d14,	// (0x0002aa8f) cell_ai5_widget_pane_g1_ParamLimits

0x9d14,	// (0x0002aa8f) cell_ai5_widget_pane_g1

0x9d77,	// (0x0002aaf2) cell_ai5_widget_pane_g6_ParamLimits

0x9d83,	// (0x0002aafe) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdfd,	// (0x00030b78) cell_ai5_widget_pane_g_ParamLimits

0xfdfd,	// (0x00030b78) cell_ai5_widget_pane_g

0x9ef3,	// (0x0002ac6e) cell_ai5_widget_pane_t10_ParamLimits

0x9ef3,	// (0x0002ac6e) cell_ai5_widget_pane_t10

0x9f36,	// (0x0002acb1) grid_ai5_widget_pane_ParamLimits

0x9fd7,	// (0x0002ad52) cell_contacts_ai5_widget_pane_ParamLimits

0x9fd7,	// (0x0002ad52) cell_contacts_ai5_widget_pane

0xa1b9,	// (0x0002af34) popup_discreet_window_t3_ParamLimits

0xa1b9,	// (0x0002af34) popup_discreet_window_t3

0xd3ac,	// (0x0002e127) popup_fshwr2_char_preview_window_ParamLimits

0xd3ac,	// (0x0002e127) popup_fshwr2_char_preview_window

0xf2a0,	// (0x0003001b) tmo_note_info_pane_t1

0xf2b5,	// (0x00030030) tmo_note_info_pane_t2

0xf2cc,	// (0x00030047) tmo_note_info_pane_t3

0xa322,	// (0x0002b09d) tmo_note_info_pane_t4

0xa334,	// (0x0002b0af) tmo_note_info_pane_t5

0x0004,

0xfe8e,	// (0x00030c09) tmo_note_info_pane_t

0xa346,	// (0x0002b0c1) list_tmo_link_pane_ParamLimits

0xa353,	// (0x0002b0ce) scroll_pane_cp20_ParamLimits

0xea5a,	// (0x0002f7d5) bg_popup_fep_char_preview_window_cp01

0xf2e1,	// (0x0003005c) popup_fshwr2_char_preview_window_t1

0xa3a5,	// (0x0002b120) popup_candi_list_indi_window_g1

0xa3ae,	// (0x0002b129) bg_cell_contacts_ai5_widget_pane

0xa3ba,	// (0x0002b135) cell_contacts_ai5_widget_pane_g1

0x7d3b,	// (0x00028ab6) cell_contacts_ai5_widget_pane_g2

0xa3cf,	// (0x0002b14a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe99,	// (0x00030c14) cell_contacts_ai5_widget_pane_g

0xa3db,	// (0x0002b156) cell_contacts_ai5_widget_pane_t1

0x3aed,	// (0x00024868) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa452,	// (0x0002b1cd) settings_container_pane

0x47ba,	// (0x00025535) listscroll_set_pane_copy1

0x6d45,	// (0x00027ac0) scroll_pane_cp121_copy1

0x5440,	// (0x000261bb) set_content_pane_copy1

0xa45e,	// (0x0002b1d9) aid_height_set_list_copy1_ParamLimits

0xa45e,	// (0x0002b1d9) aid_height_set_list_copy1

0x63fd,	// (0x00027178) aid_size_parent_copy1_ParamLimits

0x63fd,	// (0x00027178) aid_size_parent_copy1

0xa46a,	// (0x0002b1e5) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa46a,	// (0x0002b1e5) button_value_adjust_pane_cp6_copy1

0x4ade,	// (0x00025859) list_highlight_pane_cp2_copy1_ParamLimits

0x4ade,	// (0x00025859) list_highlight_pane_cp2_copy1

0xa47e,	// (0x0002b1f9) list_set_pane_copy1_ParamLimits

0xa47e,	// (0x0002b1f9) list_set_pane_copy1

0xa3ed,	// (0x0002b168) main_pane_set_t1_copy1_ParamLimits

0xa3ed,	// (0x0002b168) main_pane_set_t1_copy1

0xa427,	// (0x0002b1a2) main_pane_set_t2_copy1_ParamLimits

0xa427,	// (0x0002b1a2) main_pane_set_t2_copy1

0xa52b,	// (0x0002b2a6) main_pane_set_t3_copy1

0xa539,	// (0x0002b2b4) main_pane_set_t4_copy1

0xa446,	// (0x0002b1c1) set_content_pane_g1_copy1_ParamLimits

0xa446,	// (0x0002b1c1) set_content_pane_g1_copy1

0xa547,	// (0x0002b2c2) setting_code_pane_copy1

0xa54f,	// (0x0002b2ca) setting_slider_graphic_pane_copy1

0xa54f,	// (0x0002b2ca) setting_slider_pane_copy1

0xa557,	// (0x0002b2d2) setting_text_pane_copy1

0xa557,	// (0x0002b2d2) setting_volume_pane_copy1

0xa547,	// (0x0002b2c2) settings_code_pane_cp2_copy1

0xa55f,	// (0x0002b2da) settings_code_pane_cp_copy1_ParamLimits

0xa55f,	// (0x0002b2da) settings_code_pane_cp_copy1

0x2ecd,	// (0x00023c48) volume_set_pane_copy1

0xa573,	// (0x0002b2ee) volume_set_pane_g10_copy1

0xa57b,	// (0x0002b2f6) volume_set_pane_g1_copy1

0xa583,	// (0x0002b2fe) volume_set_pane_g2_copy1

0xa58b,	// (0x0002b306) volume_set_pane_g3_copy1

0xa593,	// (0x0002b30e) volume_set_pane_g4_copy1

0xa59b,	// (0x0002b316) volume_set_pane_g5_copy1

0xa5a3,	// (0x0002b31e) volume_set_pane_g6_copy1

0xa5ab,	// (0x0002b326) volume_set_pane_g7_copy1

0xa5b3,	// (0x0002b32e) volume_set_pane_g8_copy1

0xa5bb,	// (0x0002b336) volume_set_pane_g9_copy1

0x3260,	// (0x00023fdb) bg_set_opt_pane_cp_copy1_ParamLimits

0x3260,	// (0x00023fdb) bg_set_opt_pane_cp_copy1

0x2ed5,	// (0x00023c50) setting_slider_pane_t1_copy1_ParamLimits

0x2ed5,	// (0x00023c50) setting_slider_pane_t1_copy1

0x2ef4,	// (0x00023c6f) setting_slider_pane_t2_copy1_ParamLimits

0x2ef4,	// (0x00023c6f) setting_slider_pane_t2_copy1

0x2f0e,	// (0x00023c89) setting_slider_pane_t3_copy1_ParamLimits

0x2f0e,	// (0x00023c89) setting_slider_pane_t3_copy1

0x2f26,	// (0x00023ca1) slider_set_pane_copy1_ParamLimits

0x2f26,	// (0x00023ca1) slider_set_pane_copy1

0x3b45,	// (0x000248c0) set_opt_bg_pane_g1_copy2

0x3b4d,	// (0x000248c8) set_opt_bg_pane_g2_copy2

0xa5c3,	// (0x0002b33e) set_opt_bg_pane_g3_copy2

0x3b5d,	// (0x000248d8) set_opt_bg_pane_g4_copy2

0x3b65,	// (0x000248e0) set_opt_bg_pane_g5_copy2

0x3b6d,	// (0x000248e8) set_opt_bg_pane_g6_copy2

0xa5cd,	// (0x0002b348) set_opt_bg_pane_g7_copy2

0xa5d5,	// (0x0002b350) set_opt_bg_pane_g8_copy2

0xa5df,	// (0x0002b35a) set_opt_bg_pane_g9_copy2

0x2f3c,	// (0x00023cb7) aid_size_touch_slider_mark_copy1_ParamLimits

0x2f3c,	// (0x00023cb7) aid_size_touch_slider_mark_copy1

0xa5e9,	// (0x0002b364) slider_set_pane_g1_copy1

0x2f50,	// (0x00023ccb) slider_set_pane_g2_copy1

0x1fdb,	// (0x00022d56) slider_set_pane_g3_copy1_ParamLimits

0x1fdb,	// (0x00022d56) slider_set_pane_g3_copy1

0x1fef,	// (0x00022d6a) slider_set_pane_g4_copy1_ParamLimits

0x1fef,	// (0x00022d6a) slider_set_pane_g4_copy1

0x2007,	// (0x00022d82) slider_set_pane_g5_copy1_ParamLimits

0x2007,	// (0x00022d82) slider_set_pane_g5_copy1

0x1fdb,	// (0x00022d56) slider_set_pane_g6_copy1_ParamLimits

0x1fdb,	// (0x00022d56) slider_set_pane_g6_copy1

0x2f58,	// (0x00023cd3) slider_set_pane_g7_copy1_ParamLimits

0x2f58,	// (0x00023cd3) slider_set_pane_g7_copy1

0x3180,	// (0x00023efb) bg_set_opt_pane_cp2_copy1

0xa5f2,	// (0x0002b36d) setting_slider_graphic_pane_g1_copy1

0xa5fb,	// (0x0002b376) setting_slider_graphic_pane_t1_copy1

0xa60b,	// (0x0002b386) setting_slider_graphic_pane_t2_copy1

0xa61b,	// (0x0002b396) slider_set_pane_cp_copy1

0xa62b,	// (0x0002b3a6) input_focus_pane_cp1_copy1

0xa634,	// (0x0002b3af) list_set_text_pane_copy1

0xa63c,	// (0x0002b3b7) setting_text_pane_g1_copy1

0xf49f,	// (0x0003021a) set_text_pane_t1_copy1

0xa62b,	// (0x0002b3a6) input_focus_pane_cp2_copy1

0xa63c,	// (0x0002b3b7) setting_code_pane_g1_copy1

0xa645,	// (0x0002b3c0) setting_code_pane_t1_copy1

0x6b6d,	// (0x000278e8) list_set_graphic_pane_copy1

0x3180,	// (0x00023efb) bg_set_opt_pane_cp4_copy1

0x44ac,	// (0x00025227) list_set_graphic_pane_g1_copy1_ParamLimits

0x44ac,	// (0x00025227) list_set_graphic_pane_g1_copy1

0xa653,	// (0x0002b3ce) list_set_graphic_pane_g2_copy1

0x44c4,	// (0x0002523f) list_set_graphic_pane_t1_copy1_ParamLimits

0x44c4,	// (0x0002523f) list_set_graphic_pane_t1_copy1

0x765b,	// (0x000283d6) rs_clock_indi_pane_g1

0xa65b,	// (0x0002b3d6) rs_clock_indi_pane_t1

0xa669,	// (0x0002b3e4) rs_indi_pane

0xa671,	// (0x0002b3ec) rs_indi_pane_g1

0xa67a,	// (0x0002b3f5) rs_indi_pane_g2

0xa683,	// (0x0002b3fe) rs_indi_pane_g3

0x0002,

0xfea0,	// (0x00030c1b) rs_indi_pane_g

0x47ba,	// (0x00025535) bg_popup_preview_window_pane_cp03

0xa68c,	// (0x0002b407) popup_fep_tooltip_window_t1

0x82e3,	// (0x0002905e) popup_note2_window_g2_ParamLimits

0x82e3,	// (0x0002905e) popup_note2_window_g2

0x0001,

0xfc2d,	// (0x000309a8) popup_note2_window_g_ParamLimits

0xfc2d,	// (0x000309a8) popup_note2_window_g

0x87de,	// (0x00029559) bg_popup_sub_pane_cp11_ParamLimits

0x87eb,	// (0x00029566) cell_ai3_links_pane_g1_ParamLimits

0x8802,	// (0x0002957d) cell_ai3_links_pane_t1

0xf49f,	// (0x0003021a) set_text_pane_t1_copy1_ParamLimits

0x46c2,	// (0x0002543d) cell_graphic_popup_pane_cp2_ParamLimits

0x46c2,	// (0x0002543d) cell_graphic_popup_pane_cp2

0xa69a,	// (0x0002b415) cell_graphic_popup_pane_g1_cp2

0x3838,	// (0x000245b3) cell_graphic_popup_pane_g2_cp2

0xa6a2,	// (0x0002b41d) cell_graphic_popup_pane_g3_cp2

0xa6aa,	// (0x0002b425) cell_graphic_popup_pane_t2_cp2

0x3849,	// (0x000245c4) grid_highlight_pane_cp3_cp2

0x3e9d,	// (0x00024c18) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3aed,	// (0x00024868) main_tmo_pane_ParamLimits

0xe5eb,	// (0x0002f366) popup_tmo_big_image_note_window

0x9d03,	// (0x0002aa7e) cell_ai5_widget_list_pane

0x9d0b,	// (0x0002aa86) cell_ai5_widget_lrg_icon_pane

0xf2a0,	// (0x0003001b) tmo_note_info_pane_t1_ParamLimits

0xf2b5,	// (0x00030030) tmo_note_info_pane_t2_ParamLimits

0xf2cc,	// (0x00030047) tmo_note_info_pane_t3_ParamLimits

0xa322,	// (0x0002b09d) tmo_note_info_pane_t4_ParamLimits

0xa334,	// (0x0002b0af) tmo_note_info_pane_t5_ParamLimits

0xfe8e,	// (0x00030c09) tmo_note_info_pane_t_ParamLimits

0xa452,	// (0x0002b1cd) settings_container_pane_ParamLimits

0xa623,	// (0x0002b39e) indicator_popup_pane_cp5

0xa623,	// (0x0002b39e) indicator_popup_pane_cp6

0x6b6d,	// (0x000278e8) list_set_graphic_pane_copy1_ParamLimits

0xea5a,	// (0x0002f7d5) bg_popup_window_pane_cp23

0xa6b8,	// (0x0002b433) popup_tmo_big_image_note_window_g1

0xa6c2,	// (0x0002b43d) popup_tmo_big_image_note_window_t1

0xa6d2,	// (0x0002b44d) popup_tmo_big_image_note_window_t2

0xa6e2,	// (0x0002b45d) popup_tmo_big_image_note_window_t3

0x0002,

0xfea7,	// (0x00030c22) popup_tmo_big_image_note_window_t

0x765b,	// (0x000283d6) cell_ai5_widget_lrg_icon_pane_g1

0xa6f2,	// (0x0002b46d) cell_ai5_widget_lrg_icon_pane_t1

0xa700,	// (0x0002b47b) cell_ai5_widget_list_row_pane_ParamLimits

0xa700,	// (0x0002b47b) cell_ai5_widget_list_row_pane

0xa717,	// (0x0002b492) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa717,	// (0x0002b492) cell_ai5_widget_list_row_pane_g1

0xa724,	// (0x0002b49f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa724,	// (0x0002b49f) cell_ai5_widget_list_row_pane_t1

0xa755,	// (0x0002b4d0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa755,	// (0x0002b4d0) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeae,	// (0x00030c29) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeae,	// (0x00030c29) cell_ai5_widget_list_row_pane_t

0xea5a,	// (0x0002f7d5) main_fep_vtchi_ss_pane

0xa7a5,	// (0x0002b520) popup_fep_char_pre_window

0xa7ad,	// (0x0002b528) popup_fep_ituss_window

0xf319,	// (0x00030094) popup_fep_vkbss_window

0x4ade,	// (0x00025859) grid_vkbss_keypad_pane_ParamLimits

0x4ade,	// (0x00025859) grid_vkbss_keypad_pane

0xa819,	// (0x0002b594) ituss_keypad_pane

0x2f78,	// (0x00023cf3) aid_vkbss_key_offset_ParamLimits

0x2f78,	// (0x00023cf3) aid_vkbss_key_offset

0xd4c5,	// (0x0002e240) cell_vkbss_key_pane_ParamLimits

0xd4c5,	// (0x0002e240) cell_vkbss_key_pane

0xa825,	// (0x0002b5a0) bg_cell_vkbss_key_g1_ParamLimits

0xa825,	// (0x0002b5a0) bg_cell_vkbss_key_g1

0xf326,	// (0x000300a1) cell_vkbss_key_3p_pane_ParamLimits

0xf326,	// (0x000300a1) cell_vkbss_key_3p_pane

0xf35c,	// (0x000300d7) cell_vkbss_key_g1_ParamLimits

0xf35c,	// (0x000300d7) cell_vkbss_key_g1

0xf392,	// (0x0003010d) cell_vkbss_key_t1_ParamLimits

0xf392,	// (0x0003010d) cell_vkbss_key_t1

0x2fdc,	// (0x00023d57) cell_ituss_key_pane_ParamLimits

0x2fdc,	// (0x00023d57) cell_ituss_key_pane

0xa8f9,	// (0x0002b674) bg_cell_ituss_key_g1_ParamLimits

0xa8f9,	// (0x0002b674) bg_cell_ituss_key_g1

0xa905,	// (0x0002b680) cell_ituss_key_pane_g1_ParamLimits

0xa905,	// (0x0002b680) cell_ituss_key_pane_g1

0x2fed,	// (0x00023d68) cell_ituss_key_pane_g2_ParamLimits

0x2fed,	// (0x00023d68) cell_ituss_key_pane_g2

0x0005,

0xfeb5,	// (0x00030c30) cell_ituss_key_pane_g_ParamLimits

0xfeb5,	// (0x00030c30) cell_ituss_key_pane_g

0x3071,	// (0x00023dec) cell_ituss_key_t1_ParamLimits

0x3071,	// (0x00023dec) cell_ituss_key_t1

0x30ab,	// (0x00023e26) cell_ituss_key_t2_ParamLimits

0x30ab,	// (0x00023e26) cell_ituss_key_t2

0x30dd,	// (0x00023e58) cell_ituss_key_t3_ParamLimits

0x30dd,	// (0x00023e58) cell_ituss_key_t3

0x310e,	// (0x00023e89) cell_ituss_key_t4_ParamLimits

0x310e,	// (0x00023e89) cell_ituss_key_t4

0x0004,

0xfec2,	// (0x00030c3d) cell_ituss_key_t_ParamLimits

0xfec2,	// (0x00030c3d) cell_ituss_key_t

0xf3ee,	// (0x00030169) cell_vkbss_key_3p_pane_g1

0xf3f6,	// (0x00030171) cell_vkbss_key_3p_pane_g2

0xf3fe,	// (0x00030179) cell_vkbss_key_3p_pane_g3

0x0002,

0xfecd,	// (0x00030c48) cell_vkbss_key_3p_pane_g

0x47ba,	// (0x00025535) bg_popup_fep_char_preview_window_cp02

0xa943,	// (0x0002b6be) popup_fep_char_pre_window_t1

0xf1f0,	// (0x0002ff6b) main_ai5_sk_pane

0xa3ae,	// (0x0002b129) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa3ba,	// (0x0002b135) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7d3b,	// (0x00028ab6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa3cf,	// (0x0002b14a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe99,	// (0x00030c14) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa3db,	// (0x0002b156) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3aed,	// (0x00024868) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf406,	// (0x00030181) main_ai5_sk_pane_g1

0x54dc,	// (0x00026257) popup_query_code_window_g1

0xf30a,	// (0x00030085) popup_fep_vkb_icf_pane

0xa7f0,	// (0x0002b56b) popup_fep_vtchi_icf_pane

0xa95a,	// (0x0002b6d5) bg_icf_pane

0xa95a,	// (0x0002b6d5) list_vkb_icf_pane

0xa966,	// (0x0002b6e1) bg_icf_pane_cp01

0xa979,	// (0x0002b6f4) vtchi_icf_list_pane

0xf45b,	// (0x000301d6) list_vkb_icf_pane_t1_ParamLimits

0xf45b,	// (0x000301d6) list_vkb_icf_pane_t1

0xa9fa,	// (0x0002b775) vtchi_icf_list_pane_t1_ParamLimits

0xa9fa,	// (0x0002b775) vtchi_icf_list_pane_t1

0xa7ad,	// (0x0002b528) popup_fep_ituss_window_ParamLimits

0xa7f0,	// (0x0002b56b) popup_fep_vtchi_icf_pane_ParamLimits

0xa819,	// (0x0002b594) ituss_keypad_pane_ParamLimits

0x2f6e,	// (0x00023ce9) ituss_sks_pane

0xa95a,	// (0x0002b6d5) bg_icf_pane_ParamLimits

0xf2ef,	// (0x0003006a) icf_edit_indi_pane_ParamLimits

0xf2ef,	// (0x0003006a) icf_edit_indi_pane

0xa95a,	// (0x0002b6d5) list_vkb_icf_pane_ParamLimits

0xa966,	// (0x0002b6e1) bg_icf_pane_cp01_ParamLimits

0xa798,	// (0x0002b513) icf_edit_indi_pane_cp01_ParamLimits

0xa798,	// (0x0002b513) icf_edit_indi_pane_cp01

0xa979,	// (0x0002b6f4) vtchi_query_pane

0x9b00,	// (0x0002a87b) icf_edit_indi_pane_g1_ParamLimits

0x9b00,	// (0x0002a87b) icf_edit_indi_pane_g1

0xf472,	// (0x000301ed) icf_edit_indi_pane_g2_ParamLimits

0xf472,	// (0x000301ed) icf_edit_indi_pane_g2

0x0001,

0xfef8,	// (0x00030c73) icf_edit_indi_pane_g_ParamLimits

0xfef8,	// (0x00030c73) icf_edit_indi_pane_g

0xf486,	// (0x00030201) icf_edit_indi_pane_t1

0xaa18,	// (0x0002b793) bg_input_focus_pane_cp042

0x3a1c,	// (0x00024797) vtchi_button_pane

0xaa21,	// (0x0002b79c) vtchi_query_pane_t1

0xaa2f,	// (0x0002b7aa) vtchi_query_pane_t2

0xaa3d,	// (0x0002b7b8) vtchi_query_pane_t3

0x0002,

0xfee7,	// (0x00030c62) vtchi_query_pane_t

0xea5a,	// (0x0002f7d5) bg_button_pane_cp13

0xaa4b,	// (0x0002b7c6) vtchi_button_pane_g1

0x3151,	// (0x00023ecc) ituss_sks_pane_g1

0x315c,	// (0x00023ed7) ituss_sks_pane_g2

0x0001,

0xfeee,	// (0x00030c69) ituss_sks_pane_g

0xaa53,	// (0x0002b7ce) ituss_sks_pane_t1

0xaa61,	// (0x0002b7dc) ituss_sks_pane_t2

0x0001,

0xfef3,	// (0x00030c6e) ituss_sks_pane_t

0x70dd,	// (0x00027e58) indicator_nsta_pane_cp_g1

0x70e6,	// (0x00027e61) indicator_nsta_pane_cp_g2

0x70ee,	// (0x00027e69) indicator_nsta_pane_cp_g3

0x70f6,	// (0x00027e71) indicator_nsta_pane_cp_g4

0x70e6,	// (0x00027e61) indicator_nsta_pane_cp_g5

0x70ee,	// (0x00027e69) indicator_nsta_pane_cp_g6

0x0005,

0xfa77,	// (0x000307f2) indicator_nsta_pane_cp_g

0xf007,	// (0x0002fd82) cell_graphic2_pane_t2_ParamLimits

0xf007,	// (0x0002fd82) cell_graphic2_pane_t2

0x0001,

0xfd84,	// (0x00030aff) cell_graphic2_pane_t_ParamLimits

0xfd84,	// (0x00030aff) cell_graphic2_pane_t

0xf03c,	// (0x0002fdb7) cell_graphic2_control_pane_t1

0xc55e,	// (0x0002d2d9) signal_pane_g3_ParamLimits

0xc55e,	// (0x0002d2d9) signal_pane_g3

0xc572,	// (0x0002d2ed) signal_pane_g4_ParamLimits

0xc572,	// (0x0002d2ed) signal_pane_g4

0xa767,	// (0x0002b4e2) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa767,	// (0x0002b4e2) cell_ai5_widget_list_row_pane_t3

0xa919,	// (0x0002b694) cell_ituss_key_pane_t1_ParamLimits

0xa919,	// (0x0002b694) cell_ituss_key_pane_t1

0x5119,	// (0x00025e94) form_field_data_wide_pane_vc_t2_ParamLimits

0x5119,	// (0x00025e94) form_field_data_wide_pane_vc_t2

0x512d,	// (0x00025ea8) form_field_data_wide_pane_vc_t3_ParamLimits

0x512d,	// (0x00025ea8) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x0003055a) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x0003055a) form_field_data_wide_pane_vc_t

0x6d87,	// (0x00027b02) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6d87,	// (0x00027b02) form_field_slider_wide_pane_vc_t3

0x6e65,	// (0x00027be0) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6e65,	// (0x00027be0) form_field_popup_wide_pane_vc_t2

0x6e7c,	// (0x00027bf7) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6e7c,	// (0x00027bf7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa66,	// (0x000307e1) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x000307e1) form_field_popup_wide_pane_vc_t

0xd31a,	// (0x0002e095) aid_fshwr2_btn_pane_ParamLimits

0xd32a,	// (0x0002e0a5) aid_fshwr2_syb_pane_ParamLimits

0xd33e,	// (0x0002e0b9) aid_fshwr2_txt_pane_ParamLimits

0x3aed,	// (0x00024868) fshwr2_bg_pane_ParamLimits

0xd34e,	// (0x0002e0c9) fshwr2_func_candi_pane_ParamLimits

0xd36e,	// (0x0002e0e9) fshwr2_hwr_syb_pane_ParamLimits

0xd390,	// (0x0002e10b) fshwr2_icf_pane_ParamLimits

0x0870,	// (0x000215eb) list_double_graphic_pane_vc_g4_ParamLimits

0x0870,	// (0x000215eb) list_double_graphic_pane_vc_g4

0x300d,	// (0x00023d88) cell_ituss_key_pane_g3_ParamLimits

0x300d,	// (0x00023d88) cell_ituss_key_pane_g3

0x313f,	// (0x00023eba) cell_ituss_key_t5_ParamLimits

0x313f,	// (0x00023eba) cell_ituss_key_t5

0xf319,	// (0x00030094) popup_fep_vkbss_window_ParamLimits

0x9c8e,	// (0x0002aa09) aid_cell_ai5_quarter

0xf486,	// (0x00030201) icf_edit_indi_pane_t1_ParamLimits

0x3591,	// (0x0002430c) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3591,	// (0x0002430c) aid_tch_indicator_popup_pane_cp2

0x35a4,	// (0x0002431f) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x35a4,	// (0x0002431f) aid_tch_query_popup_data_pane_cp2

0x5484,	// (0x000261ff) aid_tch_query_popup_pane_ParamLimits

0x5484,	// (0x000261ff) aid_tch_query_popup_pane

0x5484,	// (0x000261ff) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x5484,	// (0x000261ff) aid_tch_query_popup_data_pane_cp1

0x4ade,	// (0x00025859) cell_fshwr2_syb_bg_pane_ParamLimits

0xd49c,	// (0x0002e217) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd4af,	// (0x0002e22a) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf30a,	// (0x00030085) popup_fep_vkb_icf_pane_ParamLimits

0xd2a6,	// (0x0002e021) bg_popup_fep_char_preview_window_g10

0x9dcb,	// (0x0002ab46) cell_ai5_widget_pane_g11_ParamLimits

0x9dcb,	// (0x0002ab46) cell_ai5_widget_pane_g11

0x9dd7,	// (0x0002ab52) cell_ai5_widget_pane_g12_ParamLimits

0x9dd7,	// (0x0002ab52) cell_ai5_widget_pane_g12

0x9de3,	// (0x0002ab5e) cell_ai5_widget_pane_g13_ParamLimits

0x9de3,	// (0x0002ab5e) cell_ai5_widget_pane_g13

0x9f12,	// (0x0002ac8d) cell_ai5_widget_pane_t11_ParamLimits

0x9f12,	// (0x0002ac8d) cell_ai5_widget_pane_t11

0x9f24,	// (0x0002ac9f) cell_ai5_widget_pane_t12_ParamLimits

0x9f24,	// (0x0002ac9f) cell_ai5_widget_pane_t12

0x3019,	// (0x00023d94) cell_ituss_key_pane_g4_ParamLimits

0x3019,	// (0x00023d94) cell_ituss_key_pane_g4

0x3035,	// (0x00023db0) cell_ituss_key_pane_g5_ParamLimits

0x3035,	// (0x00023db0) cell_ituss_key_pane_g5

0x3051,	// (0x00023dcc) cell_ituss_key_pane_g6_ParamLimits

0x3051,	// (0x00023dcc) cell_ituss_key_pane_g6

0x5008,	// (0x00025d83) bg_icf_pane_g1

0xf40f,	// (0x0003018a) bg_icf_pane_g2

0xf419,	// (0x00030194) bg_icf_pane_g3

0xf421,	// (0x0003019c) bg_icf_pane_g4

0xf42b,	// (0x000301a6) bg_icf_pane_g5

0xf435,	// (0x000301b0) bg_icf_pane_g6

0xf43f,	// (0x000301ba) bg_icf_pane_g7

0xf447,	// (0x000301c2) bg_icf_pane_g8

0xf451,	// (0x000301cc) bg_icf_pane_g9

0x0008,

0xfed4,	// (0x00030c4f) bg_icf_pane_g

0xa806,	// (0x0002b581) popup_hyb_candi_window_ParamLimits

0xa806,	// (0x0002b581) popup_hyb_candi_window

0x5088,	// (0x00025e03) bg_popup_sub_pane_cp01_ParamLimits

0x5088,	// (0x00025e03) bg_popup_sub_pane_cp01

0xaa9c,	// (0x0002b817) entry_hyb_candi_pane_ParamLimits

0xaa9c,	// (0x0002b817) entry_hyb_candi_pane

0xaaab,	// (0x0002b826) grid_hyb_candi_pane_ParamLimits

0xaaab,	// (0x0002b826) grid_hyb_candi_pane

0xaac0,	// (0x0002b83b) grid_hyb_phrase_pane_ParamLimits

0xaac0,	// (0x0002b83b) grid_hyb_phrase_pane

0xaacf,	// (0x0002b84a) cell_hyb_candi_pane_ParamLimits

0xaacf,	// (0x0002b84a) cell_hyb_candi_pane

0xaaf2,	// (0x0002b86d) cell_hyb_candi_scroll_pane

0x4182,	// (0x00024efd) cell_hyb_candi_pane_g1

0xaafb,	// (0x0002b876) cell_hyb_candi_pane_t1

0xab09,	// (0x0002b884) cell_hyb_phrase_pane

0x4182,	// (0x00024efd) cell_hyb_phrase_pane_g1

0xab12,	// (0x0002b88d) cell_hyb_phrase_pane_t1

0xab20,	// (0x0002b89b) entry_hyb_candi_pane_t1

0x47ba,	// (0x00025535) input_focus_pane_cp06

0xab2e,	// (0x0002b8a9) cell_hyb_candi_scroll_pane_g1

0xab36,	// (0x0002b8b1) cell_hyb_candi_scroll_pane_g1_aid

0xab3e,	// (0x0002b8b9) cell_hyb_candi_scroll_pane_g2

0xab46,	// (0x0002b8c1) cell_hyb_candi_scroll_pane_g2_aid

0xab4e,	// (0x0002b8c9) cell_hyb_candi_scroll_pane_g3

0xab56,	// (0x0002b8d1) cell_hyb_candi_scroll_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small

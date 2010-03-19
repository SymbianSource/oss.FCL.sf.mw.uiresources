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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0004189d };

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
0xb8bb,	// (0x0004d158) Screen

0xb8c7,	// (0x0004d164) application_window_ParamLimits

0xb8c7,	// (0x0004d164) application_window

0xd99f,	// (0x0004f23c) screen_g1

0xb8ff,	// (0x0004d19c) area_bottom_pane_ParamLimits

0xb8ff,	// (0x0004d19c) area_bottom_pane

0x0b27,	// (0x000423c4) area_top_pane_ParamLimits

0x0b27,	// (0x000423c4) area_top_pane

0x0bbb,	// (0x00042458) main_pane_ParamLimits

0x0bbb,	// (0x00042458) main_pane

0xd9a9,	// (0x0004f246) misc_graphics

0xd24a,	// (0x0004eae7) battery_pane_ParamLimits

0xd24a,	// (0x0004eae7) battery_pane

0x5430,	// (0x00046ccd) bg_status_flat_pane_g8

0x5438,	// (0x00046cd5) bg_status_flat_pane_g9

0x47e5,	// (0x00046082) context_pane_ParamLimits

0x47e5,	// (0x00046082) context_pane

0xd3c1,	// (0x0004ec5e) navi_pane_ParamLimits

0xd3c1,	// (0x0004ec5e) navi_pane

0xd44a,	// (0x0004ece7) signal_pane_ParamLimits

0xd44a,	// (0x0004ece7) signal_pane

0x0008,

0xf88a,	// (0x00051127) bg_status_flat_pane_g

0xd4da,	// (0x0004ed77) status_pane_g1_ParamLimits

0xd4da,	// (0x0004ed77) status_pane_g1

0xd4f0,	// (0x0004ed8d) status_pane_g2_ParamLimits

0xd4f0,	// (0x0004ed8d) status_pane_g2

0x4a25,	// (0x000462c2) status_pane_g3_ParamLimits

0x4a25,	// (0x000462c2) status_pane_g3

0x0004,

0xf7bd,	// (0x0005105a) status_pane_g_ParamLimits

0xf7bd,	// (0x0005105a) status_pane_g

0xd4fc,	// (0x0004ed99) title_pane_ParamLimits

0xd4fc,	// (0x0004ed99) title_pane

0xd559,	// (0x0004edf6) uni_indicator_pane_ParamLimits

0xd559,	// (0x0004edf6) uni_indicator_pane

0x4006,	// (0x000458a3) bg_list_pane_ParamLimits

0x4006,	// (0x000458a3) bg_list_pane

0xc211,	// (0x0004daae) find_pane

0xcaa3,	// (0x0004e340) listscroll_app_pane_ParamLimits

0xcaa3,	// (0x0004e340) listscroll_app_pane

0x403a,	// (0x000458d7) listscroll_form_pane

0xc219,	// (0x0004dab6) listscroll_gen_pane_ParamLimits

0xc219,	// (0x0004dab6) listscroll_gen_pane

0x403a,	// (0x000458d7) listscroll_set_pane

0x5fe9,	// (0x00047886) main_idle_act_pane

0x3cea,	// (0x00045587) main_idle_trad_pane

0x3cea,	// (0x00045587) main_list_empty_pane

0x4068,	// (0x00045905) main_midp_pane

0x4074,	// (0x00045911) main_pane_g1_ParamLimits

0x4074,	// (0x00045911) main_pane_g1

0xcaaf,	// (0x0004e34c) popup_ai_message_window_ParamLimits

0xcaaf,	// (0x0004e34c) popup_ai_message_window

0xcb4f,	// (0x0004e3ec) popup_fep_china_uni_window_ParamLimits

0xcb4f,	// (0x0004e3ec) popup_fep_china_uni_window

0x4192,	// (0x00045a2f) popup_fep_japan_candidate_window_ParamLimits

0x4192,	// (0x00045a2f) popup_fep_japan_candidate_window

0x41bc,	// (0x00045a59) popup_fep_japan_predictive_window_ParamLimits

0x41bc,	// (0x00045a59) popup_fep_japan_predictive_window

0xcbaf,	// (0x0004e44c) popup_find_window

0xcbcc,	// (0x0004e469) popup_grid_graphic_window_ParamLimits

0xcbcc,	// (0x0004e469) popup_grid_graphic_window

0x422d,	// (0x00045aca) popup_large_graphic_colour_window

0xcc70,	// (0x0004e50d) popup_menu_window_ParamLimits

0xcc70,	// (0x0004e50d) popup_menu_window

0xce5c,	// (0x0004e6f9) popup_note_image_window

0xce1c,	// (0x0004e6b9) popup_note_wait_window_ParamLimits

0xce1c,	// (0x0004e6b9) popup_note_wait_window

0xce74,	// (0x0004e711) popup_note_window_ParamLimits

0xce74,	// (0x0004e711) popup_note_window

0xcf22,	// (0x0004e7bf) popup_query_code_window_ParamLimits

0xcf22,	// (0x0004e7bf) popup_query_code_window

0x4499,	// (0x00045d36) popup_query_data_code_window_ParamLimits

0x4499,	// (0x00045d36) popup_query_data_code_window

0xcf62,	// (0x0004e7ff) popup_query_data_window_ParamLimits

0xcf62,	// (0x0004e7ff) popup_query_data_window

0xcff6,	// (0x0004e893) popup_query_sat_info_window_ParamLimits

0xcff6,	// (0x0004e893) popup_query_sat_info_window

0xd0a1,	// (0x0004e93e) popup_snote_single_graphic_window_ParamLimits

0xd0a1,	// (0x0004e93e) popup_snote_single_graphic_window

0xd0a1,	// (0x0004e93e) popup_snote_single_text_window_ParamLimits

0xd0a1,	// (0x0004e93e) popup_snote_single_text_window

0x4534,	// (0x00045dd1) popup_sub_window_general

0x467a,	// (0x00045f17) popup_window_general_ParamLimits

0x467a,	// (0x00045f17) popup_window_general

0x4693,	// (0x00045f30) power_save_pane

0xc0d2,	// (0x0004d96f) control_pane_g1_ParamLimits

0xc0d2,	// (0x0004d96f) control_pane_g1

0x1422,	// (0x00042cbf) control_pane_g2_ParamLimits

0x1422,	// (0x00042cbf) control_pane_g2

0x3fb7,	// (0x00045854) control_pane_g3_ParamLimits

0x3fb7,	// (0x00045854) control_pane_g3

0x0007,

0xf7a5,	// (0x00051042) control_pane_g_ParamLimits

0xf7a5,	// (0x00051042) control_pane_g

0xc114,	// (0x0004d9b1) control_pane_t1_ParamLimits

0xc114,	// (0x0004d9b1) control_pane_t1

0xc172,	// (0x0004da0f) control_pane_t2_ParamLimits

0xc172,	// (0x0004da0f) control_pane_t2

0x0002,

0xf7b6,	// (0x00051053) control_pane_t_ParamLimits

0xf7b6,	// (0x00051053) control_pane_t

0x3ed8,	// (0x00045775) navi_navi_volume_pane_cp1

0x3ee1,	// (0x0004577e) status_small_icon_pane

0x3ee9,	// (0x00045786) status_small_pane_g1_ParamLimits

0x3ee9,	// (0x00045786) status_small_pane_g1

0x3f1d,	// (0x000457ba) status_small_pane_g2_ParamLimits

0x3f1d,	// (0x000457ba) status_small_pane_g2

0x3f29,	// (0x000457c6) status_small_pane_g3_ParamLimits

0x3f29,	// (0x000457c6) status_small_pane_g3

0x3f35,	// (0x000457d2) status_small_pane_g4_ParamLimits

0x3f35,	// (0x000457d2) status_small_pane_g4

0x3f41,	// (0x000457de) status_small_pane_g5_ParamLimits

0x3f41,	// (0x000457de) status_small_pane_g5

0x3f50,	// (0x000457ed) status_small_pane_g6_ParamLimits

0x3f50,	// (0x000457ed) status_small_pane_g6

0x0007,

0xf794,	// (0x00051031) status_small_pane_g_ParamLimits

0xf794,	// (0x00051031) status_small_pane_g

0x3f80,	// (0x0004581d) status_small_pane_t1

0x3fa3,	// (0x00045840) status_small_wait_pane_ParamLimits

0x3fa3,	// (0x00045840) status_small_wait_pane

0xc07c,	// (0x0004d919) aid_levels_signal_ParamLimits

0xc07c,	// (0x0004d919) aid_levels_signal

0xc094,	// (0x0004d931) signal_pane_g1_ParamLimits

0xc094,	// (0x0004d931) signal_pane_g1

0xc91a,	// (0x0004e1b7) signal_pane_g2_ParamLimits

0xc91a,	// (0x0004e1b7) signal_pane_g2

0x0001,

0xf729,	// (0x00050fc6) signal_pane_g_ParamLimits

0xf729,	// (0x00050fc6) signal_pane_g

0x37bd,	// (0x0004505a) context_pane_g1

0xba7c,	// (0x0004d319) title_pane_g1

0xbab1,	// (0x0004d34e) title_pane_t1

0x27cd,	// (0x0004406a) title_pane_t2

0x27f3,	// (0x00044090) title_pane_t3

0x0002,

0xf573,	// (0x00050e10) title_pane_t

0xd581,	// (0x0004ee1e) aid_levels_battery_ParamLimits

0xd581,	// (0x0004ee1e) aid_levels_battery

0xd59d,	// (0x0004ee3a) battery_pane_g1_ParamLimits

0xd59d,	// (0x0004ee3a) battery_pane_g1

0xd5ba,	// (0x0004ee57) battery_pane_g2_ParamLimits

0xd5ba,	// (0x0004ee57) battery_pane_g2

0x0001,

0xf7c8,	// (0x00051065) battery_pane_g_ParamLimits

0xf7c8,	// (0x00051065) battery_pane_g

0xd7dd,	// (0x0004f07a) uni_indicator_pane_g1

0xd7f2,	// (0x0004f08f) uni_indicator_pane_g2

0xd807,	// (0x0004f0a4) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x000511cf) uni_indicator_pane_g

0x3b58,	// (0x000453f5) navi_icon_pane_ParamLimits

0x3b58,	// (0x000453f5) navi_icon_pane

0x3a9f,	// (0x0004533c) navi_midp_pane

0x3b74,	// (0x00045411) navi_navi_pane

0x3b7e,	// (0x0004541b) navi_text_pane_ParamLimits

0x3b7e,	// (0x0004541b) navi_text_pane

0xd99f,	// (0x0004f23c) status_small_wait_pane_g1

0x2c37,	// (0x000444d4) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x000511ca) status_small_wait_pane_g

0xd77c,	// (0x0004f019) navi_navi_icon_text_pane

0xd784,	// (0x0004f021) navi_navi_pane_g1_ParamLimits

0xd784,	// (0x0004f021) navi_navi_pane_g1

0xd796,	// (0x0004f033) navi_navi_pane_g2_ParamLimits

0xd796,	// (0x0004f033) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x00051198) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x00051198) navi_navi_pane_g

0x5abf,	// (0x0004735c) navi_navi_tabs_pane

0xd7a8,	// (0x0004f045) navi_navi_text_pane

0xd77c,	// (0x0004f019) navi_navi_volume_pane

0xd76a,	// (0x0004f007) navi_text_pane_t1

0xd75e,	// (0x0004effb) navi_icon_pane_g1

0x59b0,	// (0x0004724d) navi_navi_text_pane_t1

0xc3f5,	// (0x0004dc92) navi_navi_volume_pane_g1

0xc3fd,	// (0x0004dc9a) volume_small_pane

0xd6ba,	// (0x0004ef57) navi_navi_icon_text_pane_g1

0xd6c2,	// (0x0004ef5f) navi_navi_icon_text_pane_t1

0x3b74,	// (0x00045411) navi_tabs_2_long_pane

0x3b74,	// (0x00045411) navi_tabs_2_pane

0x3b74,	// (0x00045411) navi_tabs_3_long_pane

0x3b74,	// (0x00045411) navi_tabs_3_pane

0x3b74,	// (0x00045411) navi_tabs_4_pane

0xc3d5,	// (0x0004dc72) tabs_2_active_pane_ParamLimits

0xc3d5,	// (0x0004dc72) tabs_2_active_pane

0xc3e5,	// (0x0004dc82) tabs_2_passive_pane_ParamLimits

0xc3e5,	// (0x0004dc82) tabs_2_passive_pane

0xc3a3,	// (0x0004dc40) tabs_3_active_pane_ParamLimits

0xc3a3,	// (0x0004dc40) tabs_3_active_pane

0xc3b3,	// (0x0004dc50) tabs_3_passive_pane_ParamLimits

0xc3b3,	// (0x0004dc50) tabs_3_passive_pane

0xc3c4,	// (0x0004dc61) tabs_3_passive_pane_cp_ParamLimits

0xc3c4,	// (0x0004dc61) tabs_3_passive_pane_cp

0xc35f,	// (0x0004dbfc) tabs_4_active_pane_ParamLimits

0xc35f,	// (0x0004dbfc) tabs_4_active_pane

0xc370,	// (0x0004dc0d) tabs_4_passive_pane_ParamLimits

0xc370,	// (0x0004dc0d) tabs_4_passive_pane

0xc381,	// (0x0004dc1e) tabs_4_passive_pane_cp_ParamLimits

0xc381,	// (0x0004dc1e) tabs_4_passive_pane_cp

0xc392,	// (0x0004dc2f) tabs_4_passive_pane_cp2_ParamLimits

0xc392,	// (0x0004dc2f) tabs_4_passive_pane_cp2

0xc33b,	// (0x0004dbd8) tabs_2_long_active_pane_ParamLimits

0xc33b,	// (0x0004dbd8) tabs_2_long_active_pane

0xc34d,	// (0x0004dbea) tabs_2_long_passive_pane_ParamLimits

0xc34d,	// (0x0004dbea) tabs_2_long_passive_pane

0xc2f0,	// (0x0004db8d) tabs_3_long_active_pane_ParamLimits

0xc2f0,	// (0x0004db8d) tabs_3_long_active_pane

0xc309,	// (0x0004dba6) tabs_3_long_passive_pane_ParamLimits

0xc309,	// (0x0004dba6) tabs_3_long_passive_pane

0xc322,	// (0x0004dbbf) tabs_3_long_passive_pane_cp_ParamLimits

0xc322,	// (0x0004dbbf) tabs_3_long_passive_pane_cp

0x1693,	// (0x00042f30) volume_small_pane_g1

0xc29f,	// (0x0004db3c) volume_small_pane_g2

0xc2a8,	// (0x0004db45) volume_small_pane_g3

0xc2b1,	// (0x0004db4e) volume_small_pane_g4

0xc2ba,	// (0x0004db57) volume_small_pane_g5

0xc2c3,	// (0x0004db60) volume_small_pane_g6

0xc2cc,	// (0x0004db69) volume_small_pane_g7

0xc2d5,	// (0x0004db72) volume_small_pane_g8

0xc2de,	// (0x0004db7b) volume_small_pane_g9

0xc2e7,	// (0x0004db84) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x00051164) volume_small_pane_g

0x2a81,	// (0x0004431e) bg_active_tab_pane_cp2_ParamLimits

0x2a81,	// (0x0004431e) bg_active_tab_pane_cp2

0xbb3d,	// (0x0004d3da) tabs_3_active_pane_g1

0xbb45,	// (0x0004d3e2) tabs_3_active_pane_t1

0x2a81,	// (0x0004431e) bg_passive_tab_pane_cp2_ParamLimits

0x2a81,	// (0x0004431e) bg_passive_tab_pane_cp2

0xbb3d,	// (0x0004d3da) tabs_3_passive_pane_g1

0xbb45,	// (0x0004d3e2) tabs_3_passive_pane_t1

0x2a81,	// (0x0004431e) bg_active_tab_pane_cp3_ParamLimits

0x2a81,	// (0x0004431e) bg_active_tab_pane_cp3

0xbb57,	// (0x0004d3f4) tabs_4_active_pane_g1

0xbb5f,	// (0x0004d3fc) tabs_4_active_pane_t1

0x2a81,	// (0x0004431e) bg_passive_tab_pane_cp3_ParamLimits

0x2a81,	// (0x0004431e) bg_passive_tab_pane_cp3

0xbb57,	// (0x0004d3f4) tabs_4_1_passive_pane_g1

0xbb5f,	// (0x0004d3fc) tabs_4_1_passive_pane_t1

0x4068,	// (0x00045905) list_highlight_pane_cp2

0xd8c5,	// (0x0004f162) list_set_pane_ParamLimits

0xd8c5,	// (0x0004f162) list_set_pane

0xd9b3,	// (0x0004f250) main_pane_set_t1_ParamLimits

0xd9b3,	// (0x0004f250) main_pane_set_t1

0xd9d3,	// (0x0004f270) main_pane_set_t2_ParamLimits

0xd9d3,	// (0x0004f270) main_pane_set_t2

0xd9e7,	// (0x0004f284) main_pane_set_t3_ParamLimits

0xd9e7,	// (0x0004f284) main_pane_set_t3

0xd9fb,	// (0x0004f298) main_pane_set_t4_ParamLimits

0xd9fb,	// (0x0004f298) main_pane_set_t4

0x0003,

0xf997,	// (0x00051234) main_pane_set_t_ParamLimits

0xf997,	// (0x00051234) main_pane_set_t

0xda0f,	// (0x0004f2ac) setting_code_pane

0x6149,	// (0x000479e6) setting_slider_graphic_pane

0x6149,	// (0x000479e6) setting_slider_pane

0x6149,	// (0x000479e6) setting_text_pane

0x6149,	// (0x000479e6) setting_volume_pane

0x0e12,	// (0x000426af) volume_set_pane

0x2805,	// (0x000440a2) bg_set_opt_pane_cp

0x0e1c,	// (0x000426b9) setting_slider_pane_t1

0x0e32,	// (0x000426cf) setting_slider_pane_t2

0x0e4c,	// (0x000426e9) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00050e17) setting_slider_pane_t

0x0e64,	// (0x00042701) slider_set_pane

0xd9a9,	// (0x0004f246) bg_set_opt_pane_cp2

0x2847,	// (0x000440e4) setting_slider_graphic_pane_g1

0x0e7a,	// (0x00042717) setting_slider_graphic_pane_t1

0x0e8a,	// (0x00042727) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00050e1e) setting_slider_graphic_pane_t

0x0e9a,	// (0x00042737) slider_set_pane_cp

0xd9a9,	// (0x0004f246) input_focus_pane_cp1

0x5fd0,	// (0x0004786d) list_set_text_pane

0xd99f,	// (0x0004f23c) setting_text_pane_g1

0xd9a9,	// (0x0004f246) input_focus_pane_cp2

0xd99f,	// (0x0004f23c) setting_code_pane_g1

0x2850,	// (0x000440ed) setting_code_pane_t1

0xf53b,	// (0x00050dd8) set_text_pane_t1_ParamLimits

0xf53b,	// (0x00050dd8) set_text_pane_t1

0x30f3,	// (0x00044990) set_opt_bg_pane_g1

0x30fb,	// (0x00044998) set_opt_bg_pane_g2

0x5fa8,	// (0x00047845) set_opt_bg_pane_g3

0x310b,	// (0x000449a8) set_opt_bg_pane_g4

0x3113,	// (0x000449b0) set_opt_bg_pane_g5

0x311b,	// (0x000449b8) set_opt_bg_pane_g6

0x5fb2,	// (0x0004784f) set_opt_bg_pane_g7

0x5fbc,	// (0x00047859) set_opt_bg_pane_g8

0x5fc6,	// (0x00047863) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x00051221) set_opt_bg_pane_g

0x5f9b,	// (0x00047838) slider_set_pane_g1

0x1877,	// (0x00043114) slider_set_pane_g2

0x0006,

0xf975,	// (0x00051212) slider_set_pane_g

0x17ff,	// (0x0004309c) volume_set_pane_g1

0x1809,	// (0x000430a6) volume_set_pane_g2

0x1813,	// (0x000430b0) volume_set_pane_g3

0x181d,	// (0x000430ba) volume_set_pane_g4

0x1827,	// (0x000430c4) volume_set_pane_g5

0x1831,	// (0x000430ce) volume_set_pane_g6

0x183b,	// (0x000430d8) volume_set_pane_g7

0x1845,	// (0x000430e2) volume_set_pane_g8

0x184f,	// (0x000430ec) volume_set_pane_g9

0x1859,	// (0x000430f6) volume_set_pane_g10

0x0009,

0xf94d,	// (0x000511ea) volume_set_pane_g

0xbb71,	// (0x0004d40e) indicator_pane_ParamLimits

0xbb71,	// (0x0004d40e) indicator_pane

0xbb9d,	// (0x0004d43a) main_idle_pane_g2_ParamLimits

0xbb9d,	// (0x0004d43a) main_idle_pane_g2

0xbbd5,	// (0x0004d472) main_pane_idle_g1_ParamLimits

0xbbd5,	// (0x0004d472) main_pane_idle_g1

0x28a0,	// (0x0004413d) popup_clock_digital_analogue_window_ParamLimits

0x28a0,	// (0x0004413d) popup_clock_digital_analogue_window

0xbc03,	// (0x0004d4a0) soft_indicator_pane_ParamLimits

0xbc03,	// (0x0004d4a0) soft_indicator_pane

0xbc1f,	// (0x0004d4bc) wallpaper_pane_ParamLimits

0xbc1f,	// (0x0004d4bc) wallpaper_pane

0xd99f,	// (0x0004f23c) wallpaper_pane_g1

0xbc31,	// (0x0004d4ce) indicator_pane_g1_ParamLimits

0xbc31,	// (0x0004d4ce) indicator_pane_g1

0x640d,	// (0x00047caa) navi_navi_icon_text_pane_srt_g1

0x28f4,	// (0x00044191) soft_indicator_pane_t1

0x290e,	// (0x000441ab) aid_ps_area_pane

0xbc4a,	// (0x0004d4e7) aid_ps_clock_pane

0x292d,	// (0x000441ca) aid_ps_indicator_pane

0x2939,	// (0x000441d6) indicator_ps_pane_ParamLimits

0x2939,	// (0x000441d6) indicator_ps_pane

0x2948,	// (0x000441e5) power_save_pane_g1_ParamLimits

0x2948,	// (0x000441e5) power_save_pane_g1

0x2954,	// (0x000441f1) power_save_pane_g2_ParamLimits

0x2954,	// (0x000441f1) power_save_pane_g2

0x0a1b,	// (0x000422b8) aid_navinavi_width_pane

0x290e,	// (0x000441ab) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00050e23) power_save_pane_g_ParamLimits

0xf586,	// (0x00050e23) power_save_pane_g

0x2962,	// (0x000441ff) power_save_pane_t1_ParamLimits

0x2962,	// (0x000441ff) power_save_pane_t1

0xbc4a,	// (0x0004d4e7) aid_ps_clock_pane_ParamLimits

0x292d,	// (0x000441ca) aid_ps_indicator_pane_ParamLimits

0x2974,	// (0x00044211) power_save_pane_t4_ParamLimits

0x2974,	// (0x00044211) power_save_pane_t4

0x0001,

0xf58b,	// (0x00050e28) power_save_pane_t_ParamLimits

0xf58b,	// (0x00050e28) power_save_pane_t

0x299e,	// (0x0004423b) power_save_t3_ParamLimits

0x299e,	// (0x0004423b) power_save_t3

0x2989,	// (0x00044226) power_save_t2_ParamLimits

0x2989,	// (0x00044226) power_save_t2

0x29b3,	// (0x00044250) indicator_ps_pane_g1

0xbc58,	// (0x0004d4f5) ai_gene_pane_ParamLimits

0xbc58,	// (0x0004d4f5) ai_gene_pane

0xbc6f,	// (0x0004d50c) ai_links_pane_ParamLimits

0xbc6f,	// (0x0004d50c) ai_links_pane

0xbc87,	// (0x0004d524) indicator_pane_cp1_ParamLimits

0xbc87,	// (0x0004d524) indicator_pane_cp1

0xbc96,	// (0x0004d533) main_pane_idle_g1_cp_ParamLimits

0xbc96,	// (0x0004d533) main_pane_idle_g1_cp

0x29ec,	// (0x00044289) popup_ai_links_title_window

0xbcae,	// (0x0004d54b) soft_indicator_pane_cp1_ParamLimits

0xbcae,	// (0x0004d54b) soft_indicator_pane_cp1

0x5d6e,	// (0x0004760b) ai_links_pane_g1

0x5d77,	// (0x00047614) grid_ai_links_pane

0xd7d4,	// (0x0004f071) ai_gene_pane_1

0x5d5c,	// (0x000475f9) ai_gene_pane_2

0x5d65,	// (0x00047602) list_highlight_pane_cp4

0xd7b0,	// (0x0004f04d) cell_ai_link_pane_ParamLimits

0xd7b0,	// (0x0004f04d) cell_ai_link_pane

0x5d2b,	// (0x000475c8) cell_ai_link_pane_g1

0x2c37,	// (0x000444d4) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x000511c5) cell_ai_link_pane_g

0xd9a9,	// (0x0004f246) grid_highlight_cp2

0xd9a9,	// (0x0004f246) bg_popup_sub_pane_cp1

0x2a0f,	// (0x000442ac) popup_ai_links_title_window_t1

0x5c77,	// (0x00047514) ai_gene_pane_1_g1_ParamLimits

0x5c77,	// (0x00047514) ai_gene_pane_1_g1

0x5c83,	// (0x00047520) ai_gene_pane_1_g2_ParamLimits

0x5c83,	// (0x00047520) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x000511bb) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x000511bb) ai_gene_pane_1_g

0x5c90,	// (0x0004752d) ai_gene_pane_1_t1_ParamLimits

0x5c90,	// (0x0004752d) ai_gene_pane_1_t1

0x5cc4,	// (0x00047561) grid_ai_soft_ind_pane

0x5c62,	// (0x000474ff) ai_gene_pane_2_t1_ParamLimits

0x5c62,	// (0x000474ff) ai_gene_pane_2_t1

0xbcc2,	// (0x0004d55f) main_pane_empty_t1_ParamLimits

0xbcc2,	// (0x0004d55f) main_pane_empty_t1

0xbcda,	// (0x0004d577) main_pane_empty_t2_ParamLimits

0xbcda,	// (0x0004d577) main_pane_empty_t2

0xbcef,	// (0x0004d58c) main_pane_empty_t3_ParamLimits

0xbcef,	// (0x0004d58c) main_pane_empty_t3

0xbd01,	// (0x0004d59e) main_pane_empty_t4_ParamLimits

0xbd01,	// (0x0004d59e) main_pane_empty_t4

0xbd13,	// (0x0004d5b0) main_pane_empty_t5_ParamLimits

0xbd13,	// (0x0004d5b0) main_pane_empty_t5

0x0004,

0xf590,	// (0x00050e2d) main_pane_empty_t_ParamLimits

0xf590,	// (0x00050e2d) main_pane_empty_t

0x3144,	// (0x000449e1) bg_popup_window_pane_ParamLimits

0x3144,	// (0x000449e1) bg_popup_window_pane

0x59be,	// (0x0004725b) find_popup_pane_cp2_ParamLimits

0x59be,	// (0x0004725b) find_popup_pane_cp2

0x59ca,	// (0x00047267) heading_pane_ParamLimits

0x59ca,	// (0x00047267) heading_pane

0xd9a9,	// (0x0004f246) bg_popup_sub_pane

0xd6df,	// (0x0004ef7c) bg_popup_window_pane_g1_ParamLimits

0xd6df,	// (0x0004ef7c) bg_popup_window_pane_g1

0xd6ee,	// (0x0004ef8b) bg_popup_window_pane_g2_ParamLimits

0xd6ee,	// (0x0004ef8b) bg_popup_window_pane_g2

0xd6fa,	// (0x0004ef97) bg_popup_window_pane_g3_ParamLimits

0xd6fa,	// (0x0004ef97) bg_popup_window_pane_g3

0xd706,	// (0x0004efa3) bg_popup_window_pane_g4_ParamLimits

0xd706,	// (0x0004efa3) bg_popup_window_pane_g4

0xd715,	// (0x0004efb2) bg_popup_window_pane_g5_ParamLimits

0xd715,	// (0x0004efb2) bg_popup_window_pane_g5

0xd725,	// (0x0004efc2) bg_popup_window_pane_g6_ParamLimits

0xd725,	// (0x0004efc2) bg_popup_window_pane_g6

0xd731,	// (0x0004efce) bg_popup_window_pane_g7_ParamLimits

0xd731,	// (0x0004efce) bg_popup_window_pane_g7

0xd740,	// (0x0004efdd) bg_popup_window_pane_g8_ParamLimits

0xd740,	// (0x0004efdd) bg_popup_window_pane_g8

0xd74f,	// (0x0004efec) bg_popup_window_pane_g9_ParamLimits

0xd74f,	// (0x0004efec) bg_popup_window_pane_g9

0x59a4,	// (0x00047241) bg_popup_window_pane_g10_ParamLimits

0x59a4,	// (0x00047241) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x00051183) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x00051183) bg_popup_window_pane_g

0x58cd,	// (0x0004716a) bg_popup_heading_pane_ParamLimits

0x58cd,	// (0x0004716a) bg_popup_heading_pane

0x18e9,	// (0x00043186) tabs_4_passive_pane_cp_srt_ParamLimits

0x18e9,	// (0x00043186) tabs_4_passive_pane_cp_srt

0x18fb,	// (0x00043198) tabs_4_passive_pane_srt_ParamLimits

0x58e1,	// (0x0004717e) heading_pane_g2

0x18fb,	// (0x00043198) tabs_4_passive_pane_srt

0x4ca2,	// (0x0004653f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4ca2,	// (0x0004653f) bg_passive_tab_pane_cp3_srt

0x58e9,	// (0x00047186) heading_pane_t1_ParamLimits

0x58e9,	// (0x00047186) heading_pane_t1

0x5900,	// (0x0004719d) heading_pane_t2_ParamLimits

0x5900,	// (0x0004719d) heading_pane_t2

0x0001,

0xf8e1,	// (0x0005117e) heading_pane_t_ParamLimits

0xf8e1,	// (0x0005117e) heading_pane_t

0x53f8,	// (0x00046c95) bg_popup_heading_pane_g1

0x54a7,	// (0x00046d44) bg_popup_heading_pane_g2

0x54b1,	// (0x00046d4e) bg_popup_heading_pane_g3

0x54bb,	// (0x00046d58) bg_popup_heading_pane_g4

0x54c5,	// (0x00046d62) bg_popup_heading_pane_g5

0x54cf,	// (0x00046d6c) bg_popup_heading_pane_g6

0x54d7,	// (0x00046d74) bg_popup_heading_pane_g7

0x54df,	// (0x00046d7c) bg_popup_heading_pane_g8

0x54e9,	// (0x00046d86) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x0005113a) bg_popup_heading_pane_g

0x4bb0,	// (0x0004644d) bg_popup_sub_pane_g1

0x4bb8,	// (0x00046455) bg_popup_sub_pane_g2

0x4bc0,	// (0x0004645d) bg_popup_sub_pane_g3

0x4bc8,	// (0x00046465) bg_popup_sub_pane_g4

0x4bd0,	// (0x0004646d) bg_popup_sub_pane_g5

0x4bd8,	// (0x00046475) bg_popup_sub_pane_g6

0x4be0,	// (0x0004647d) bg_popup_sub_pane_g7

0x4be8,	// (0x00046485) bg_popup_sub_pane_g8

0x4bf0,	// (0x0004648d) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x00051114) bg_popup_sub_pane_g

0x2a81,	// (0x0004431e) bg_popup_window_pane_cp5_ParamLimits

0x2a81,	// (0x0004431e) bg_popup_window_pane_cp5

0x2a9d,	// (0x0004433a) popup_note_window_g1_ParamLimits

0x2a9d,	// (0x0004433a) popup_note_window_g1

0x2aa9,	// (0x00044346) popup_note_window_t1_ParamLimits

0x2aa9,	// (0x00044346) popup_note_window_t1

0x2abf,	// (0x0004435c) popup_note_window_t2_ParamLimits

0x2abf,	// (0x0004435c) popup_note_window_t2

0x2ad5,	// (0x00044372) popup_note_window_t3_ParamLimits

0x2ad5,	// (0x00044372) popup_note_window_t3

0x2aeb,	// (0x00044388) popup_note_window_t4_ParamLimits

0x2aeb,	// (0x00044388) popup_note_window_t4

0x2b13,	// (0x000443b0) popup_note_window_t5_ParamLimits

0x2b13,	// (0x000443b0) popup_note_window_t5

0x0004,

0xf59b,	// (0x00050e38) popup_note_window_t_ParamLimits

0xf59b,	// (0x00050e38) popup_note_window_t

0x2b37,	// (0x000443d4) bg_popup_window_pane_cp6_ParamLimits

0x2b37,	// (0x000443d4) bg_popup_window_pane_cp6

0x5374,	// (0x00046c11) popup_note_image_window_g1_ParamLimits

0x5374,	// (0x00046c11) popup_note_image_window_g1

0x5380,	// (0x00046c1d) popup_note_image_window_g2_ParamLimits

0x5380,	// (0x00046c1d) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x00051108) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x00051108) popup_note_image_window_g

0x5399,	// (0x00046c36) popup_note_image_window_t1_ParamLimits

0x5399,	// (0x00046c36) popup_note_image_window_t1

0x53b2,	// (0x00046c4f) popup_note_image_window_t2_ParamLimits

0x53b2,	// (0x00046c4f) popup_note_image_window_t2

0x53cb,	// (0x00046c68) popup_note_image_window_t3_ParamLimits

0x53cb,	// (0x00046c68) popup_note_image_window_t3

0x0002,

0xf870,	// (0x0005110d) popup_note_image_window_t_ParamLimits

0xf870,	// (0x0005110d) popup_note_image_window_t

0x5234,	// (0x00046ad1) bg_popup_window_pane_cp7_ParamLimits

0x5234,	// (0x00046ad1) bg_popup_window_pane_cp7

0x5264,	// (0x00046b01) popup_note_wait_window_g1_ParamLimits

0x5264,	// (0x00046b01) popup_note_wait_window_g1

0x5270,	// (0x00046b0d) popup_note_wait_window_g2_ParamLimits

0x5270,	// (0x00046b0d) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x000510f6) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x000510f6) popup_note_wait_window_g

0x5288,	// (0x00046b25) popup_note_wait_window_t1_ParamLimits

0x5288,	// (0x00046b25) popup_note_wait_window_t1

0x52af,	// (0x00046b4c) popup_note_wait_window_t2_ParamLimits

0x52af,	// (0x00046b4c) popup_note_wait_window_t2

0x52cd,	// (0x00046b6a) popup_note_wait_window_t3_ParamLimits

0x52cd,	// (0x00046b6a) popup_note_wait_window_t3

0x52e0,	// (0x00046b7d) popup_note_wait_window_t4_ParamLimits

0x52e0,	// (0x00046b7d) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x000510fd) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x000510fd) popup_note_wait_window_t

0x5305,	// (0x00046ba2) wait_bar_pane_ParamLimits

0x5305,	// (0x00046ba2) wait_bar_pane

0xd9a9,	// (0x0004f246) wait_anim_pane

0xd9a9,	// (0x0004f246) wait_border_pane

0xd99f,	// (0x0004f23c) wait_anim_pane_g1

0xd99f,	// (0x0004f23c) wait_anim_pane_g2

0x0001,

0xf724,	// (0x00050fc1) wait_anim_pane_g

0x51d8,	// (0x00046a75) wait_border_pane_g1

0x51e3,	// (0x00046a80) wait_border_pane_g2

0x51ec,	// (0x00046a89) wait_border_pane_g3

0x0002,

0xf852,	// (0x000510ef) wait_border_pane_g

0x5042,	// (0x000468df) bg_popup_window_pane_cp16_ParamLimits

0x5042,	// (0x000468df) bg_popup_window_pane_cp16

0x5142,	// (0x000469df) indicator_popup_pane_cp4_ParamLimits

0x5142,	// (0x000469df) indicator_popup_pane_cp4

0x5156,	// (0x000469f3) popup_query_data_window_t1_ParamLimits

0x5156,	// (0x000469f3) popup_query_data_window_t1

0x5168,	// (0x00046a05) popup_query_data_window_t2_ParamLimits

0x5168,	// (0x00046a05) popup_query_data_window_t2

0x5181,	// (0x00046a1e) popup_query_data_window_t3_ParamLimits

0x5181,	// (0x00046a1e) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x000510e8) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x000510e8) popup_query_data_window_t

0x519b,	// (0x00046a38) query_popup_data_pane_ParamLimits

0x519b,	// (0x00046a38) query_popup_data_pane

0x51af,	// (0x00046a4c) query_popup_data_pane_cp1_ParamLimits

0x51af,	// (0x00046a4c) query_popup_data_pane_cp1

0x5042,	// (0x000468df) bg_popup_window_pane_cp10_ParamLimits

0x5042,	// (0x000468df) bg_popup_window_pane_cp10

0x5074,	// (0x00046911) indicator_popup_pane_ParamLimits

0x5074,	// (0x00046911) indicator_popup_pane

0x5096,	// (0x00046933) popup_query_code_window_t1_ParamLimits

0x5096,	// (0x00046933) popup_query_code_window_t1

0x50b0,	// (0x0004694d) popup_query_code_window_t2_ParamLimits

0x50b0,	// (0x0004694d) popup_query_code_window_t2

0x50f9,	// (0x00046996) popup_query_code_window_t3_ParamLimits

0x50f9,	// (0x00046996) popup_query_code_window_t3

0x0002,

0xf844,	// (0x000510e1) popup_query_code_window_t_ParamLimits

0xf844,	// (0x000510e1) popup_query_code_window_t

0x5128,	// (0x000469c5) query_popup_pane_ParamLimits

0x5128,	// (0x000469c5) query_popup_pane

0x2b37,	// (0x000443d4) bg_popup_window_pane_cp15_ParamLimits

0x2b37,	// (0x000443d4) bg_popup_window_pane_cp15

0x2b57,	// (0x000443f4) indicator_popup_pane_cp1_ParamLimits

0x2b57,	// (0x000443f4) indicator_popup_pane_cp1

0x2b6a,	// (0x00044407) indicator_popup_pane_cp2_ParamLimits

0x2b6a,	// (0x00044407) indicator_popup_pane_cp2

0x2b85,	// (0x00044422) popup_query_data_code_window_g1_ParamLimits

0x2b85,	// (0x00044422) popup_query_data_code_window_g1

0x2b98,	// (0x00044435) popup_query_data_code_window_t1_ParamLimits

0x2b98,	// (0x00044435) popup_query_data_code_window_t1

0x2baa,	// (0x00044447) popup_query_data_code_window_t2_ParamLimits

0x2baa,	// (0x00044447) popup_query_data_code_window_t2

0x2bbc,	// (0x00044459) popup_query_data_code_window_t3_ParamLimits

0x2bbc,	// (0x00044459) popup_query_data_code_window_t3

0x2bd2,	// (0x0004446f) popup_query_data_code_window_t4_ParamLimits

0x2bd2,	// (0x0004446f) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00050e43) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00050e43) popup_query_data_code_window_t

0x3b14,	// (0x000453b1) list_single_midp_graphic_pane_g3

0x2bec,	// (0x00044489) query_popup_data_pane_cp2_ParamLimits

0x2bff,	// (0x0004449c) query_popup_pane_cp2_ParamLimits

0x2bff,	// (0x0004449c) query_popup_pane_cp2

0xd9a9,	// (0x0004f246) bg_popup_window_pane_cp11

0x503a,	// (0x000468d7) heading_pane_cp5

0x2cef,	// (0x0004458c) listscroll_popup_info_pane

0xd9a9,	// (0x0004f246) input_focus_pane_cp3

0x2c1a,	// (0x000444b7) query_popup_pane_t1

0x2c28,	// (0x000444c5) list_popup_info_pane_ParamLimits

0x2c28,	// (0x000444c5) list_popup_info_pane

0x2c37,	// (0x000444d4) listscroll_popup_info_pane_g1

0x2c3f,	// (0x000444dc) scroll_pane_cp7

0x2c49,	// (0x000444e6) popup_info_list_pane_t1_ParamLimits

0x2c49,	// (0x000444e6) popup_info_list_pane_t1

0x2c63,	// (0x00044500) popup_info_list_pane_t2_ParamLimits

0x2c63,	// (0x00044500) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00050e4c) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00050e4c) popup_info_list_pane_t

0xd9a9,	// (0x0004f246) bg_popup_window_pane_cp12

0x6427,	// (0x00047cc4) find_popup_pane

0x2805,	// (0x000440a2) bg_popup_window_pane_cp3

0x2c7d,	// (0x0004451a) heading_pane_cp3

0x2c89,	// (0x00044526) listscroll_popup_graphic_pane

0xd9a9,	// (0x0004f246) bg_popup_window_pane_cp4

0xbd75,	// (0x0004d612) heading_pane_cp4

0x2cef,	// (0x0004458c) listscroll_popup_colour_pane

0xbd7f,	// (0x0004d61c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbd7f,	// (0x0004d61c) cell_large_graphic_colour_none_popup_pane

0xbd93,	// (0x0004d630) grid_large_graphic_colour_popup_pane_ParamLimits

0xbd93,	// (0x0004d630) grid_large_graphic_colour_popup_pane

0xbdbf,	// (0x0004d65c) listscroll_popup_colour_pane_g1_ParamLimits

0xbdbf,	// (0x0004d65c) listscroll_popup_colour_pane_g1

0xbdd6,	// (0x0004d673) listscroll_popup_colour_pane_g2_ParamLimits

0xbdd6,	// (0x0004d673) listscroll_popup_colour_pane_g2

0xbded,	// (0x0004d68a) listscroll_popup_colour_pane_g3_ParamLimits

0xbded,	// (0x0004d68a) listscroll_popup_colour_pane_g3

0xbdfd,	// (0x0004d69a) listscroll_popup_colour_pane_g4_ParamLimits

0xbdfd,	// (0x0004d69a) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00050e51) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00050e51) listscroll_popup_colour_pane_g

0x2d89,	// (0x00044626) scroll_pane_cp6_ParamLimits

0x2d89,	// (0x00044626) scroll_pane_cp6

0xbe11,	// (0x0004d6ae) cell_large_graphic_colour_popup_pane_ParamLimits

0xbe11,	// (0x0004d6ae) cell_large_graphic_colour_popup_pane

0x2dc0,	// (0x0004465d) cell_large_graphic_colour_none_popup_pane_t1

0xd9a9,	// (0x0004f246) grid_highlight_pane_cp5

0x2dcf,	// (0x0004466c) cell_large_graphic_colour_popup_pane_g1

0x2dd7,	// (0x00044674) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00050e5a) cell_large_graphic_colour_popup_pane_g

0x2ddf,	// (0x0004467c) cell_large_graphic_colour_popup_pane_g2_copy1

0x2de8,	// (0x00044685) grid_highlight_pane_cp4

0x2df0,	// (0x0004468d) bg_popup_window_pane_cp8_ParamLimits

0x2df0,	// (0x0004468d) bg_popup_window_pane_cp8

0x2e0b,	// (0x000446a8) popup_snote_single_text_window_g1_ParamLimits

0x2e0b,	// (0x000446a8) popup_snote_single_text_window_g1

0x2e1d,	// (0x000446ba) popup_snote_single_text_window_t1_ParamLimits

0x2e1d,	// (0x000446ba) popup_snote_single_text_window_t1

0x2e30,	// (0x000446cd) popup_snote_single_text_window_t2_ParamLimits

0x2e30,	// (0x000446cd) popup_snote_single_text_window_t2

0x2e43,	// (0x000446e0) popup_snote_single_text_window_t3_ParamLimits

0x2e43,	// (0x000446e0) popup_snote_single_text_window_t3

0x2e7c,	// (0x00044719) popup_snote_single_text_window_t4_ParamLimits

0x2e7c,	// (0x00044719) popup_snote_single_text_window_t4

0x2eb0,	// (0x0004474d) popup_snote_single_text_window_t5_ParamLimits

0x2eb0,	// (0x0004474d) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00050e5f) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00050e5f) popup_snote_single_text_window_t

0x2edf,	// (0x0004477c) bg_popup_window_pane_cp9_ParamLimits

0x2edf,	// (0x0004477c) bg_popup_window_pane_cp9

0x2e0b,	// (0x000446a8) popup_snote_single_graphic_window_g1_ParamLimits

0x2e0b,	// (0x000446a8) popup_snote_single_graphic_window_g1

0x2eed,	// (0x0004478a) popup_snote_single_graphic_window_g2_ParamLimits

0x2eed,	// (0x0004478a) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00050e6a) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00050e6a) popup_snote_single_graphic_window_g

0x2ef9,	// (0x00044796) popup_snote_single_graphic_window_t1_ParamLimits

0x2ef9,	// (0x00044796) popup_snote_single_graphic_window_t1

0x2f0c,	// (0x000447a9) popup_snote_single_graphic_window_t2_ParamLimits

0x2f0c,	// (0x000447a9) popup_snote_single_graphic_window_t2

0x2f1f,	// (0x000447bc) popup_snote_single_graphic_window_t3_ParamLimits

0x2f1f,	// (0x000447bc) popup_snote_single_graphic_window_t3

0x2f58,	// (0x000447f5) popup_snote_single_graphic_window_t4_ParamLimits

0x2f58,	// (0x000447f5) popup_snote_single_graphic_window_t4

0x2f8c,	// (0x00044829) popup_snote_single_graphic_window_t5_ParamLimits

0x2f8c,	// (0x00044829) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00050e6f) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00050e6f) popup_snote_single_graphic_window_t

0x6365,	// (0x00047c02) grid_graphic_popup_pane_ParamLimits

0x6365,	// (0x00047c02) grid_graphic_popup_pane

0x6393,	// (0x00047c30) listscroll_popup_graphic_pane_g1_ParamLimits

0x6393,	// (0x00047c30) listscroll_popup_graphic_pane_g1

0xdb0f,	// (0x0004f3ac) listscroll_popup_graphic_pane_g2_ParamLimits

0xdb0f,	// (0x0004f3ac) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x0005125e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x0005125e) listscroll_popup_graphic_pane_g

0x63bb,	// (0x00047c58) scroll_pane_cp5

0xdacf,	// (0x0004f36c) cell_graphic_popup_pane_ParamLimits

0xdacf,	// (0x0004f36c) cell_graphic_popup_pane

0x62ee,	// (0x00047b8b) cell_graphic_popup_pane_g1

0x62f6,	// (0x00047b93) cell_graphic_popup_pane_g2

0x2ddf,	// (0x0004467c) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x00051257) cell_graphic_popup_pane_g

0x62ff,	// (0x00047b9c) cell_graphic_popup_pane_t2

0x2de8,	// (0x00044685) grid_highlight_pane_cp3

0x2fcd,	// (0x0004486a) list_gen_pane_ParamLimits

0x2fcd,	// (0x0004486a) list_gen_pane

0x2fff,	// (0x0004489c) scroll_pane

0xda8a,	// (0x0004f327) bg_list_pane_g1_ParamLimits

0xda8a,	// (0x0004f327) bg_list_pane_g1

0x626b,	// (0x00047b08) bg_list_pane_g2_ParamLimits

0x626b,	// (0x00047b08) bg_list_pane_g2

0x627e,	// (0x00047b1b) bg_list_pane_g3_ParamLimits

0x627e,	// (0x00047b1b) bg_list_pane_g3

0x6290,	// (0x00047b2d) bg_list_pane_g4_ParamLimits

0x6290,	// (0x00047b2d) bg_list_pane_g4

0xdaa5,	// (0x0004f342) bg_list_pane_g5_ParamLimits

0xdaa5,	// (0x0004f342) bg_list_pane_g5

0x0004,

0xf9af,	// (0x0005124c) bg_list_pane_g_ParamLimits

0xf9af,	// (0x0005124c) bg_list_pane_g

0xda4d,	// (0x0004f2ea) list_double2_graphic_large_graphic_pane_ParamLimits

0xda4d,	// (0x0004f2ea) list_double2_graphic_large_graphic_pane

0xda4d,	// (0x0004f2ea) list_double2_graphic_pane_ParamLimits

0xda4d,	// (0x0004f2ea) list_double2_graphic_pane

0xda4d,	// (0x0004f2ea) list_double2_large_graphic_pane_ParamLimits

0xda4d,	// (0x0004f2ea) list_double2_large_graphic_pane

0xda4d,	// (0x0004f2ea) list_double2_pane_ParamLimits

0xda4d,	// (0x0004f2ea) list_double2_pane

0xda4d,	// (0x0004f2ea) list_double_graphic_heading_pane_ParamLimits

0xda4d,	// (0x0004f2ea) list_double_graphic_heading_pane

0xda4d,	// (0x0004f2ea) list_double_graphic_pane_ParamLimits

0xda4d,	// (0x0004f2ea) list_double_graphic_pane

0xda4d,	// (0x0004f2ea) list_double_heading_pane_ParamLimits

0xda4d,	// (0x0004f2ea) list_double_heading_pane

0xda4d,	// (0x0004f2ea) list_double_large_graphic_pane_ParamLimits

0xda4d,	// (0x0004f2ea) list_double_large_graphic_pane

0xda4d,	// (0x0004f2ea) list_double_number_pane_ParamLimits

0xda4d,	// (0x0004f2ea) list_double_number_pane

0xda4d,	// (0x0004f2ea) list_double_pane_ParamLimits

0xda4d,	// (0x0004f2ea) list_double_pane

0xda4d,	// (0x0004f2ea) list_double_time_pane_ParamLimits

0xda4d,	// (0x0004f2ea) list_double_time_pane

0xda4d,	// (0x0004f2ea) list_setting_number_pane_ParamLimits

0xda4d,	// (0x0004f2ea) list_setting_number_pane

0xda4d,	// (0x0004f2ea) list_setting_pane_ParamLimits

0xda4d,	// (0x0004f2ea) list_setting_pane

0xda61,	// (0x0004f2fe) list_single_2graphic_pane_ParamLimits

0xda61,	// (0x0004f2fe) list_single_2graphic_pane

0xda61,	// (0x0004f2fe) list_single_graphic_heading_pane_ParamLimits

0xda61,	// (0x0004f2fe) list_single_graphic_heading_pane

0xda61,	// (0x0004f2fe) list_single_graphic_pane_ParamLimits

0xda61,	// (0x0004f2fe) list_single_graphic_pane

0xda61,	// (0x0004f2fe) list_single_heading_pane_ParamLimits

0xda61,	// (0x0004f2fe) list_single_heading_pane

0xda61,	// (0x0004f2fe) list_single_large_graphic_pane_ParamLimits

0xda61,	// (0x0004f2fe) list_single_large_graphic_pane

0xda61,	// (0x0004f2fe) list_single_number_heading_pane_ParamLimits

0xda61,	// (0x0004f2fe) list_single_number_heading_pane

0xda61,	// (0x0004f2fe) list_single_number_pane_ParamLimits

0xda61,	// (0x0004f2fe) list_single_number_pane

0xda61,	// (0x0004f2fe) list_single_pane_ParamLimits

0xda61,	// (0x0004f2fe) list_single_pane

0xd9a9,	// (0x0004f246) list_highlight_pane_cp1

0x3c5b,	// (0x000454f8) list_single_pane_g1_ParamLimits

0x3c5b,	// (0x000454f8) list_single_pane_g1

0x1582,	// (0x00042e1f) list_single_pane_g2_ParamLimits

0x1582,	// (0x00042e1f) list_single_pane_g2

0x0001,

0xf5ee,	// (0x00050e8b) list_single_pane_g_ParamLimits

0xf5ee,	// (0x00050e8b) list_single_pane_g

0x05ef,	// (0x00041e8c) list_single_pane_t1_ParamLimits

0x05ef,	// (0x00041e8c) list_single_pane_t1

0x3c5b,	// (0x000454f8) list_single_number_pane_g1_ParamLimits

0x3c5b,	// (0x000454f8) list_single_number_pane_g1

0x1582,	// (0x00042e1f) list_single_number_pane_g2_ParamLimits

0x1582,	// (0x00042e1f) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x00050e8b) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x00050e8b) list_single_number_pane_g

0x04bf,	// (0x00041d5c) list_single_number_pane_t1_ParamLimits

0x04bf,	// (0x00041d5c) list_single_number_pane_t1

0xb6ff,	// (0x0004cf9c) list_single_number_pane_t2_ParamLimits

0xb6ff,	// (0x0004cf9c) list_single_number_pane_t2

0x0001,

0xf970,	// (0x0005120d) list_single_number_pane_t_ParamLimits

0xf970,	// (0x0005120d) list_single_number_pane_t

0xb0c7,	// (0x0004c964) list_single_graphic_pane_g1_ParamLimits

0xb0c7,	// (0x0004c964) list_single_graphic_pane_g1

0x3c5b,	// (0x000454f8) list_single_graphic_pane_g2_ParamLimits

0x3c5b,	// (0x000454f8) list_single_graphic_pane_g2

0x1582,	// (0x00042e1f) list_single_graphic_pane_g3_ParamLimits

0x1582,	// (0x00042e1f) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00050e7a) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00050e7a) list_single_graphic_pane_g

0x08ec,	// (0x00042189) list_single_graphic_pane_t1_ParamLimits

0x08ec,	// (0x00042189) list_single_graphic_pane_t1

0xb0d3,	// (0x0004c970) list_single_heading_pane_g1_ParamLimits

0xb0d3,	// (0x0004c970) list_single_heading_pane_g1

0x1582,	// (0x00042e1f) list_single_heading_pane_g2_ParamLimits

0x1582,	// (0x00042e1f) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00050e81) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00050e81) list_single_heading_pane_g

0xb0e6,	// (0x0004c983) list_single_heading_pane_t1_ParamLimits

0xb0e6,	// (0x0004c983) list_single_heading_pane_t1

0xbe3c,	// (0x0004d6d9) list_single_heading_pane_t2_ParamLimits

0xbe3c,	// (0x0004d6d9) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00050e86) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00050e86) list_single_heading_pane_t

0x3c5b,	// (0x000454f8) list_single_number_heading_pane_g1_ParamLimits

0x3c5b,	// (0x000454f8) list_single_number_heading_pane_g1

0x1582,	// (0x00042e1f) list_single_number_heading_pane_g2_ParamLimits

0x1582,	// (0x00042e1f) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x00050e8b) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x00050e8b) list_single_number_heading_pane_g

0x0605,	// (0x00041ea2) list_single_number_heading_pane_t1_ParamLimits

0x0605,	// (0x00041ea2) list_single_number_heading_pane_t1

0xb0fc,	// (0x0004c999) list_single_number_heading_pane_t2_ParamLimits

0xb0fc,	// (0x0004c999) list_single_number_heading_pane_t2

0x05c9,	// (0x00041e66) list_single_number_heading_pane_t3_ParamLimits

0x05c9,	// (0x00041e66) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x00050e90) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x00050e90) list_single_number_heading_pane_t

0xb10e,	// (0x0004c9ab) list_single_graphic_heading_pane_g1_ParamLimits

0xb10e,	// (0x0004c9ab) list_single_graphic_heading_pane_g1

0xbe4e,	// (0x0004d6eb) list_single_graphic_heading_pane_g4_ParamLimits

0xbe4e,	// (0x0004d6eb) list_single_graphic_heading_pane_g4

0x1582,	// (0x00042e1f) list_single_graphic_heading_pane_g5_ParamLimits

0x1582,	// (0x00042e1f) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x00050e97) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x00050e97) list_single_graphic_heading_pane_g

0x0605,	// (0x00041ea2) list_single_graphic_heading_pane_t1_ParamLimits

0x0605,	// (0x00041ea2) list_single_graphic_heading_pane_t1

0xb126,	// (0x0004c9c3) list_single_graphic_heading_pane_t2_ParamLimits

0xb126,	// (0x0004c9c3) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x00050e9e) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x00050e9e) list_single_graphic_heading_pane_t

0x19a6,	// (0x00043243) list_single_large_graphic_pane_g1_ParamLimits

0x19a6,	// (0x00043243) list_single_large_graphic_pane_g1

0x3c5b,	// (0x000454f8) list_single_large_graphic_pane_g2_ParamLimits

0x3c5b,	// (0x000454f8) list_single_large_graphic_pane_g2

0x1582,	// (0x00042e1f) list_single_large_graphic_pane_g3_ParamLimits

0x1582,	// (0x00042e1f) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x00050ea3) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x00050ea3) list_single_large_graphic_pane_g

0x51e3,	// (0x00046a80) wait_border_pane_g2_copy1

0xbe5f,	// (0x0004d6fc) list_single_large_graphic_pane_g4_cp2

0x0605,	// (0x00041ea2) list_single_large_graphic_pane_t1_ParamLimits

0x0605,	// (0x00041ea2) list_single_large_graphic_pane_t1

0x30a6,	// (0x00044943) list_double_pane_g1_ParamLimits

0x30a6,	// (0x00044943) list_double_pane_g1

0xbe67,	// (0x0004d704) list_double_pane_g2_ParamLimits

0xbe67,	// (0x0004d704) list_double_pane_g2

0x0001,

0xf60d,	// (0x00050eaa) list_double_pane_g_ParamLimits

0xf60d,	// (0x00050eaa) list_double_pane_g

0xb13e,	// (0x0004c9db) list_double_pane_t1_ParamLimits

0xb13e,	// (0x0004c9db) list_double_pane_t1

0xb154,	// (0x0004c9f1) list_double_pane_t2_ParamLimits

0xb154,	// (0x0004c9f1) list_double_pane_t2

0x0001,

0xf612,	// (0x00050eaf) list_double_pane_t_ParamLimits

0xf612,	// (0x00050eaf) list_double_pane_t

0xb166,	// (0x0004ca03) list_double2_pane_g1_ParamLimits

0xb166,	// (0x0004ca03) list_double2_pane_g1

0xb177,	// (0x0004ca14) list_double2_pane_g2_ParamLimits

0xb177,	// (0x0004ca14) list_double2_pane_g2

0x0001,

0xf617,	// (0x00050eb4) list_double2_pane_g_ParamLimits

0xf617,	// (0x00050eb4) list_double2_pane_g

0xb183,	// (0x0004ca20) list_double2_pane_t1_ParamLimits

0xb183,	// (0x0004ca20) list_double2_pane_t1

0xb199,	// (0x0004ca36) list_double2_pane_t2_ParamLimits

0xb199,	// (0x0004ca36) list_double2_pane_t2

0x0001,

0xf61c,	// (0x00050eb9) list_double2_pane_t_ParamLimits

0xf61c,	// (0x00050eb9) list_double2_pane_t

0x30a6,	// (0x00044943) list_double_number_pane_g1_ParamLimits

0x30a6,	// (0x00044943) list_double_number_pane_g1

0xbe67,	// (0x0004d704) list_double_number_pane_g2_ParamLimits

0xbe67,	// (0x0004d704) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x00050eaa) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x00050eaa) list_double_number_pane_g

0xb1ab,	// (0x0004ca48) list_double_number_pane_t1_ParamLimits

0xb1ab,	// (0x0004ca48) list_double_number_pane_t1

0xb1bd,	// (0x0004ca5a) list_double_number_pane_t2_ParamLimits

0xb1bd,	// (0x0004ca5a) list_double_number_pane_t2

0xb1d3,	// (0x0004ca70) list_double_number_pane_t3_ParamLimits

0xb1d3,	// (0x0004ca70) list_double_number_pane_t3

0x0002,

0xf621,	// (0x00050ebe) list_double_number_pane_t_ParamLimits

0xf621,	// (0x00050ebe) list_double_number_pane_t

0xb1e5,	// (0x0004ca82) list_double_graphic_pane_g1_ParamLimits

0xb1e5,	// (0x0004ca82) list_double_graphic_pane_g1

0xb1f1,	// (0x0004ca8e) list_double_graphic_pane_g2_ParamLimits

0xb1f1,	// (0x0004ca8e) list_double_graphic_pane_g2

0xb200,	// (0x0004ca9d) list_double_graphic_pane_g3_ParamLimits

0xb200,	// (0x0004ca9d) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x00050ec5) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x00050ec5) list_double_graphic_pane_g

0xb218,	// (0x0004cab5) list_double_graphic_pane_t1_ParamLimits

0xb218,	// (0x0004cab5) list_double_graphic_pane_t1

0xb22e,	// (0x0004cacb) list_double_graphic_pane_t2_ParamLimits

0xb22e,	// (0x0004cacb) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x00050ece) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x00050ece) list_double_graphic_pane_t

0xb240,	// (0x0004cadd) list_double2_graphic_pane_g1_ParamLimits

0xb240,	// (0x0004cadd) list_double2_graphic_pane_g1

0xb24c,	// (0x0004cae9) list_double2_graphic_pane_g2_ParamLimits

0xb24c,	// (0x0004cae9) list_double2_graphic_pane_g2

0xb258,	// (0x0004caf5) list_double2_graphic_pane_g3_ParamLimits

0xb258,	// (0x0004caf5) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x00050ed3) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x00050ed3) list_double2_graphic_pane_g

0xb264,	// (0x0004cb01) list_double2_graphic_pane_t1_ParamLimits

0xb264,	// (0x0004cb01) list_double2_graphic_pane_t1

0xb27a,	// (0x0004cb17) list_double2_graphic_pane_t2_ParamLimits

0xb27a,	// (0x0004cb17) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x00050eda) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x00050eda) list_double2_graphic_pane_t

0xb28c,	// (0x0004cb29) list_double_large_graphic_pane_g1_ParamLimits

0xb28c,	// (0x0004cb29) list_double_large_graphic_pane_g1

0xb2b7,	// (0x0004cb54) list_double_large_graphic_pane_g2_ParamLimits

0xb2b7,	// (0x0004cb54) list_double_large_graphic_pane_g2

0xbe67,	// (0x0004d704) list_double_large_graphic_pane_g3_ParamLimits

0xbe67,	// (0x0004d704) list_double_large_graphic_pane_g3

0xb2cd,	// (0x0004cb6a) list_double_large_graphic_pane_g4_ParamLimits

0xb2cd,	// (0x0004cb6a) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x00050edf) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x00050edf) list_double_large_graphic_pane_g

0xb2e0,	// (0x0004cb7d) list_double_large_graphic_pane_t1_ParamLimits

0xb2e0,	// (0x0004cb7d) list_double_large_graphic_pane_t1

0xb2f9,	// (0x0004cb96) list_double_large_graphic_pane_t2_ParamLimits

0xb2f9,	// (0x0004cb96) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x00050eea) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x00050eea) list_double_large_graphic_pane_t

0xbe73,	// (0x0004d710) list_double2_large_graphic_pane_g1_ParamLimits

0xbe73,	// (0x0004d710) list_double2_large_graphic_pane_g1

0xb30b,	// (0x0004cba8) list_double2_large_graphic_pane_g2_ParamLimits

0xb30b,	// (0x0004cba8) list_double2_large_graphic_pane_g2

0xb258,	// (0x0004caf5) list_double2_large_graphic_pane_g3_ParamLimits

0xb258,	// (0x0004caf5) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x00050eef) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x00050eef) list_double2_large_graphic_pane_g

0xb31c,	// (0x0004cbb9) list_double2_large_graphic_pane_t1_ParamLimits

0xb31c,	// (0x0004cbb9) list_double2_large_graphic_pane_t1

0xb332,	// (0x0004cbcf) list_double2_large_graphic_pane_t2_ParamLimits

0xb332,	// (0x0004cbcf) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x00050ef6) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x00050ef6) list_double2_large_graphic_pane_t

0xb344,	// (0x0004cbe1) list_double_heading_pane_g1_ParamLimits

0xb344,	// (0x0004cbe1) list_double_heading_pane_g1

0xb355,	// (0x0004cbf2) list_double_heading_pane_g2_ParamLimits

0xb355,	// (0x0004cbf2) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x00050efb) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x00050efb) list_double_heading_pane_g

0xb361,	// (0x0004cbfe) list_double_heading_pane_t1_ParamLimits

0xb361,	// (0x0004cbfe) list_double_heading_pane_t1

0xb199,	// (0x0004ca36) list_double_heading_pane_t2_ParamLimits

0xb199,	// (0x0004ca36) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x00050f00) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x00050f00) list_double_heading_pane_t

0xb377,	// (0x0004cc14) list_double_graphic_heading_pane_g1_ParamLimits

0xb377,	// (0x0004cc14) list_double_graphic_heading_pane_g1

0xb344,	// (0x0004cbe1) list_double_graphic_heading_pane_g2_ParamLimits

0xb344,	// (0x0004cbe1) list_double_graphic_heading_pane_g2

0xb355,	// (0x0004cbf2) list_double_graphic_heading_pane_g3_ParamLimits

0xb355,	// (0x0004cbf2) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x00050f05) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x00050f05) list_double_graphic_heading_pane_g

0xb383,	// (0x0004cc20) list_double_graphic_heading_pane_t1_ParamLimits

0xb383,	// (0x0004cc20) list_double_graphic_heading_pane_t1

0xb27a,	// (0x0004cb17) list_double_graphic_heading_pane_t2_ParamLimits

0xb27a,	// (0x0004cb17) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x00050f0c) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x00050f0c) list_double_graphic_heading_pane_t

0xb399,	// (0x0004cc36) list_double_time_pane_g1_ParamLimits

0xb399,	// (0x0004cc36) list_double_time_pane_g1

0xb3aa,	// (0x0004cc47) list_double_time_pane_g2_ParamLimits

0xb3aa,	// (0x0004cc47) list_double_time_pane_g2

0x0001,

0xf674,	// (0x00050f11) list_double_time_pane_g_ParamLimits

0xf674,	// (0x00050f11) list_double_time_pane_g

0xb3b6,	// (0x0004cc53) list_double_time_pane_t1_ParamLimits

0xb3b6,	// (0x0004cc53) list_double_time_pane_t1

0xb3cc,	// (0x0004cc69) list_double_time_pane_t2_ParamLimits

0xb3cc,	// (0x0004cc69) list_double_time_pane_t2

0xb3de,	// (0x0004cc7b) list_double_time_pane_t3_ParamLimits

0xb3de,	// (0x0004cc7b) list_double_time_pane_t3

0xb3f0,	// (0x0004cc8d) list_double_time_pane_t4_ParamLimits

0xb3f0,	// (0x0004cc8d) list_double_time_pane_t4

0x0003,

0xf679,	// (0x00050f16) list_double_time_pane_t_ParamLimits

0xf679,	// (0x00050f16) list_double_time_pane_t

0xb402,	// (0x0004cc9f) list_setting_pane_g1_ParamLimits

0xb402,	// (0x0004cc9f) list_setting_pane_g1

0xb177,	// (0x0004ca14) list_setting_pane_g2_ParamLimits

0xb177,	// (0x0004ca14) list_setting_pane_g2

0x0001,

0xf682,	// (0x00050f1f) list_setting_pane_g_ParamLimits

0xf682,	// (0x00050f1f) list_setting_pane_g

0xb40e,	// (0x0004ccab) list_setting_pane_t1_ParamLimits

0xb40e,	// (0x0004ccab) list_setting_pane_t1

0xb428,	// (0x0004ccc5) list_setting_pane_t2_ParamLimits

0xb428,	// (0x0004ccc5) list_setting_pane_t2

0x0002,

0xf687,	// (0x00050f24) list_setting_pane_t_ParamLimits

0xf687,	// (0x00050f24) list_setting_pane_t

0xb467,	// (0x0004cd04) set_value_pane_cp_ParamLimits

0xb467,	// (0x0004cd04) set_value_pane_cp

0xb475,	// (0x0004cd12) list_setting_number_pane_g1_ParamLimits

0xb475,	// (0x0004cd12) list_setting_number_pane_g1

0xb481,	// (0x0004cd1e) list_setting_number_pane_g2_ParamLimits

0xb481,	// (0x0004cd1e) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x00050f2b) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x00050f2b) list_setting_number_pane_g

0xb48d,	// (0x0004cd2a) list_setting_number_pane_t1_ParamLimits

0xb48d,	// (0x0004cd2a) list_setting_number_pane_t1

0xb4a6,	// (0x0004cd43) list_setting_number_pane_t2_ParamLimits

0xb4a6,	// (0x0004cd43) list_setting_number_pane_t2

0xb4c0,	// (0x0004cd5d) list_setting_number_pane_t3_ParamLimits

0xb4c0,	// (0x0004cd5d) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x00050f30) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x00050f30) list_setting_number_pane_t

0xb467,	// (0x0004cd04) set_value_pane_ParamLimits

0xb467,	// (0x0004cd04) set_value_pane

0x3033,	// (0x000448d0) bg_set_opt_pane_ParamLimits

0x3033,	// (0x000448d0) bg_set_opt_pane

0x016f,	// (0x00041a0c) set_value_pane_t1

0x3054,	// (0x000448f1) slider_set_pane_cp3

0x305d,	// (0x000448fa) volume_small_pane_cp

0x3066,	// (0x00044903) list_form_gen_pane

0x306f,	// (0x0004490c) scroll_pane_cp8

0xb503,	// (0x0004cda0) form_field_data_pane_ParamLimits

0xb503,	// (0x0004cda0) form_field_data_pane

0xb520,	// (0x0004cdbd) form_field_data_wide_pane_ParamLimits

0xb520,	// (0x0004cdbd) form_field_data_wide_pane

0xb544,	// (0x0004cde1) form_field_popup_pane_ParamLimits

0xb544,	// (0x0004cde1) form_field_popup_pane

0x01f6,	// (0x00041a93) form_field_popup_wide_pane_ParamLimits

0x01f6,	// (0x00041a93) form_field_popup_wide_pane

0x0217,	// (0x00041ab4) form_field_slider_pane_ParamLimits

0x0217,	// (0x00041ab4) form_field_slider_pane

0x022a,	// (0x00041ac7) form_field_slider_wide_pane_ParamLimits

0x022a,	// (0x00041ac7) form_field_slider_wide_pane

0x3080,	// (0x0004491d) data_form_pane

0xb570,	// (0x0004ce0d) form_field_data_pane_t1

0x308c,	// (0x00044929) input_focus_pane

0x309a,	// (0x00044937) data_form_wide_pane

0x026d,	// (0x00041b0a) form_field_data_wide_pane_t1

0x2dfd,	// (0x0004469a) input_focus_pane_cp6

0xb58a,	// (0x0004ce27) form_field_popup_pane_t1

0x308c,	// (0x00044929) input_focus_pane_cp7

0x30c6,	// (0x00044963) list_form_pane

0x02b1,	// (0x00041b4e) form_field_popup_wide_pane_t1

0x308c,	// (0x00044929) input_focus_pane_cp8

0x30d2,	// (0x0004496f) list_form_wide_pane

0xb5ac,	// (0x0004ce49) form_field_slider_pane_t1_ParamLimits

0xb5ac,	// (0x0004ce49) form_field_slider_pane_t1

0xb5c4,	// (0x0004ce61) form_field_slider_pane_t2_ParamLimits

0xb5c4,	// (0x0004ce61) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x00050f40) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x00050f40) form_field_slider_pane_t

0x2a81,	// (0x0004431e) input_focus_pane_cp9_ParamLimits

0x2a81,	// (0x0004431e) input_focus_pane_cp9

0xb5d9,	// (0x0004ce76) slider_cont_pane_ParamLimits

0xb5d9,	// (0x0004ce76) slider_cont_pane

0x30e1,	// (0x0004497e) form_field_slider_wide_pane_t1_ParamLimits

0x30e1,	// (0x0004497e) form_field_slider_wide_pane_t1

0x030f,	// (0x00041bac) form_field_slider_wide_pane_t2_ParamLimits

0x030f,	// (0x00041bac) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x00050f45) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x00050f45) form_field_slider_wide_pane_t

0x2a81,	// (0x0004431e) input_focus_pane_cp10_ParamLimits

0x2a81,	// (0x0004431e) input_focus_pane_cp10

0xb5ed,	// (0x0004ce8a) slider_cont_pane_cp1_ParamLimits

0xb5ed,	// (0x0004ce8a) slider_cont_pane_cp1

0xb601,	// (0x0004ce9e) slider_form_pane_cp

0x30f3,	// (0x00044990) input_focus_pane_g1

0x30fb,	// (0x00044998) input_focus_pane_g2

0x3103,	// (0x000449a0) input_focus_pane_g3

0x310b,	// (0x000449a8) input_focus_pane_g4

0x3113,	// (0x000449b0) input_focus_pane_g5

0x311b,	// (0x000449b8) input_focus_pane_g6

0x3123,	// (0x000449c0) input_focus_pane_g7

0x312b,	// (0x000449c8) input_focus_pane_g8

0x3133,	// (0x000449d0) input_focus_pane_g9

0xd99f,	// (0x0004f23c) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x00050f4a) input_focus_pane_g

0x51ec,	// (0x00046a89) wait_border_pane_g3_copy1

0xb609,	// (0x0004cea6) data_form_pane_t1

0xd99f,	// (0x0004f23c) wait_anim_pane_g1_copy1

0xb711,	// (0x0004cfae) data_form_wide_pane_t1

0x035c,	// (0x00041bf9) list_form_graphic_pane_cp_ParamLimits

0x035c,	// (0x00041bf9) list_form_graphic_pane_cp

0x6171,	// (0x00047a0e) slider_form_pane_g1

0x617a,	// (0x00047a17) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x0005123d) slider_form_pane_g

0xb625,	// (0x0004cec2) list_form_graphic_pane_ParamLimits

0xb625,	// (0x0004cec2) list_form_graphic_pane

0x036e,	// (0x00041c0b) list_form_graphic_pane_g1

0x0376,	// (0x00041c13) list_form_graphic_pane_t1_ParamLimits

0x0376,	// (0x00041c13) list_form_graphic_pane_t1

0x2805,	// (0x000440a2) list_highlight_pane_cp5_ParamLimits

0x2805,	// (0x000440a2) list_highlight_pane_cp5

0xb636,	// (0x0004ced3) find_pane_g1

0x313b,	// (0x000449d8) input_find_pane

0xb63f,	// (0x0004cedc) input_find_pane_g1_ParamLimits

0xb63f,	// (0x0004cedc) input_find_pane_g1

0xb64b,	// (0x0004cee8) input_find_pane_t1_ParamLimits

0xb64b,	// (0x0004cee8) input_find_pane_t1

0xb660,	// (0x0004cefd) input_find_pane_t2_ParamLimits

0xb660,	// (0x0004cefd) input_find_pane_t2

0x0001,

0xf6c2,	// (0x00050f5f) input_find_pane_t_ParamLimits

0xf6c2,	// (0x00050f5f) input_find_pane_t

0x3144,	// (0x000449e1) input_focus_pane_cp5_ParamLimits

0x3144,	// (0x000449e1) input_focus_pane_cp5

0xbe8b,	// (0x0004d728) bg_popup_window_pane_cp2_ParamLimits

0xbe8b,	// (0x0004d728) bg_popup_window_pane_cp2

0xbe98,	// (0x0004d735) listscroll_menu_pane_ParamLimits

0xbe98,	// (0x0004d735) listscroll_menu_pane

0xbea4,	// (0x0004d741) popup_submenu_window_ParamLimits

0xbea4,	// (0x0004d741) popup_submenu_window

0x31a7,	// (0x00044a44) find_popup_pane_g1

0x31af,	// (0x00044a4c) input_popup_find_pane_cp

0x3144,	// (0x000449e1) input_focus_pane_cp4_ParamLimits

0x3144,	// (0x000449e1) input_focus_pane_cp4

0x31c7,	// (0x00044a64) input_popup_find_pane_t1_ParamLimits

0x31c7,	// (0x00044a64) input_popup_find_pane_t1

0xd9a9,	// (0x0004f246) bg_popup_sub_pane_cp

0x31f5,	// (0x00044a92) listscroll_popup_sub_pane

0x31fd,	// (0x00044a9a) list_submenu_pane_ParamLimits

0x31fd,	// (0x00044a9a) list_submenu_pane

0x320e,	// (0x00044aab) scroll_pane_cp4

0x3216,	// (0x00044ab3) list_single_popup_submenu_pane_ParamLimits

0x3216,	// (0x00044ab3) list_single_popup_submenu_pane

0x322b,	// (0x00044ac8) list_single_popup_submenu_pane_g1

0x3233,	// (0x00044ad0) list_single_popup_submenu_pane_t1_ParamLimits

0x3233,	// (0x00044ad0) list_single_popup_submenu_pane_t1

0x2a81,	// (0x0004431e) bg_active_tab_pane_cp1_ParamLimits

0x2a81,	// (0x0004431e) bg_active_tab_pane_cp1

0xbee2,	// (0x0004d77f) tabs_2_active_pane_g1

0xbeea,	// (0x0004d787) tabs_2_active_pane_t1

0x2a81,	// (0x0004431e) bg_passive_tab_pane_cp1_ParamLimits

0x2a81,	// (0x0004431e) bg_passive_tab_pane_cp1

0xbee2,	// (0x0004d77f) tabs_2_passive_pane_g1

0xbeea,	// (0x0004d787) tabs_2_passive_pane_t1

0x2805,	// (0x000440a2) bg_active_tab_pane_cp4

0xbefc,	// (0x0004d799) tabs_2_long_active_pane_t1

0x4068,	// (0x00045905) bg_passive_tab_pane_cp4

0x15b3,	// (0x00042e50) list_single_midp_graphic_pane_g4_ParamLimits

0x2805,	// (0x000440a2) bg_active_tab_pane_cp5

0xbf0f,	// (0x0004d7ac) tabs_3_long_active_pane_t1

0x4068,	// (0x00045905) bg_passive_tab_pane_cp5

0x15b3,	// (0x00042e50) list_single_midp_graphic_pane_g4

0x2805,	// (0x000440a2) bg_popup_window_pane_cp13_ParamLimits

0x2805,	// (0x000440a2) bg_popup_window_pane_cp13

0x32aa,	// (0x00044b47) listscroll_popup_fast_pane_ParamLimits

0x32aa,	// (0x00044b47) listscroll_popup_fast_pane

0x32b9,	// (0x00044b56) grid_popup_fast_pane_ParamLimits

0x32b9,	// (0x00044b56) grid_popup_fast_pane

0x32cb,	// (0x00044b68) scroll_pane_cp9_ParamLimits

0x32cb,	// (0x00044b68) scroll_pane_cp9

0x7ad5,	// (0x00049372) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ad5,	// (0x00049372) list_single_graphic_hl_pane_t1_cp2

0x32ef,	// (0x00044b8c) input_focus_pane_cp20_ParamLimits

0x32ef,	// (0x00044b8c) input_focus_pane_cp20

0x32fd,	// (0x00044b9a) query_popup_data_pane_t1_ParamLimits

0x32fd,	// (0x00044b9a) query_popup_data_pane_t1

0x3310,	// (0x00044bad) query_popup_data_pane_t2_ParamLimits

0x3310,	// (0x00044bad) query_popup_data_pane_t2

0x3356,	// (0x00044bf3) query_popup_data_pane_t3_ParamLimits

0x3356,	// (0x00044bf3) query_popup_data_pane_t3

0x3397,	// (0x00044c34) query_popup_data_pane_t4_ParamLimits

0x3397,	// (0x00044c34) query_popup_data_pane_t4

0x33d3,	// (0x00044c70) query_popup_data_pane_t5_ParamLimits

0x33d3,	// (0x00044c70) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x00050f64) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x00050f64) query_popup_data_pane_t

0x30f3,	// (0x00044990) bg_set_opt_pane_g1

0x30fb,	// (0x00044998) bg_set_opt_pane_g2

0x3103,	// (0x000449a0) bg_set_opt_pane_g3

0x310b,	// (0x000449a8) bg_set_opt_pane_g4

0x3113,	// (0x000449b0) bg_set_opt_pane_g5

0x311b,	// (0x000449b8) bg_set_opt_pane_g6

0x3123,	// (0x000449c0) bg_set_opt_pane_g7

0x312b,	// (0x000449c8) bg_set_opt_pane_g8

0x3133,	// (0x000449d0) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x00050f6f) bg_set_opt_pane_g

0x120c,	// (0x00042aa9) control_top_pane_stacon_ParamLimits

0x120c,	// (0x00042aa9) control_top_pane_stacon

0x125f,	// (0x00042afc) signal_pane_stacon_ParamLimits

0x125f,	// (0x00042afc) signal_pane_stacon

0x397f,	// (0x0004521c) stacon_top_pane_g1_ParamLimits

0x397f,	// (0x0004521c) stacon_top_pane_g1

0x1284,	// (0x00042b21) title_pane_stacon_ParamLimits

0x1284,	// (0x00042b21) title_pane_stacon

0x12ae,	// (0x00042b4b) uni_indicator_pane_stacon_ParamLimits

0x12ae,	// (0x00042b4b) uni_indicator_pane_stacon

0x12c6,	// (0x00042b63) battery_pane_stacon_ParamLimits

0x12c6,	// (0x00042b63) battery_pane_stacon

0x130a,	// (0x00042ba7) control_bottom_pane_stacon_ParamLimits

0x130a,	// (0x00042ba7) control_bottom_pane_stacon

0x132d,	// (0x00042bca) navi_pane_stacon_ParamLimits

0x132d,	// (0x00042bca) navi_pane_stacon

0x39a1,	// (0x0004523e) stacon_bottom_pane_g1_ParamLimits

0x39a1,	// (0x0004523e) stacon_bottom_pane_g1

0x0f4b,	// (0x000427e8) aid_levels_signal_lsc_ParamLimits

0x0f4b,	// (0x000427e8) aid_levels_signal_lsc

0x0f62,	// (0x000427ff) signal_pane_stacon_g1_ParamLimits

0x0f62,	// (0x000427ff) signal_pane_stacon_g1

0x0f76,	// (0x00042813) signal_pane_stacon_g2_ParamLimits

0x0f76,	// (0x00042813) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x00050f82) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x00050f82) signal_pane_stacon_g

0x0fab,	// (0x00042848) title_pane_stacon_t1_ParamLimits

0x0fab,	// (0x00042848) title_pane_stacon_t1

0x3417,	// (0x00044cb4) uni_indicator_pane_stacon_g1

0x3421,	// (0x00044cbe) uni_indicator_pane_stacon_g2

0x342b,	// (0x00044cc8) uni_indicator_pane_stacon_g3

0x3435,	// (0x00044cd2) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x00050f8e) uni_indicator_pane_stacon_g

0x0fd0,	// (0x0004286d) control_top_pane_stacon_g1

0x0fd8,	// (0x00042875) control_top_pane_stacon_t1_ParamLimits

0x0fd8,	// (0x00042875) control_top_pane_stacon_t1

0x100f,	// (0x000428ac) aid_levels_battery_lsc_ParamLimits

0x100f,	// (0x000428ac) aid_levels_battery_lsc

0x1027,	// (0x000428c4) battery_pane_stacon_g1_ParamLimits

0x1027,	// (0x000428c4) battery_pane_stacon_g1

0x103a,	// (0x000428d7) battery_pane_stacon_g2_ParamLimits

0x103a,	// (0x000428d7) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x00050f97) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x00050f97) battery_pane_stacon_g

0x1078,	// (0x00042915) navi_icon_pane_stacon

0x108c,	// (0x00042929) navi_navi_pane_stacon

0x1078,	// (0x00042915) navi_text_pane_stacon

0x0fd0,	// (0x0004286d) control_bottom_pane_stacon_g1

0x10a2,	// (0x0004293f) control_bottom_pane_stacon_t1_ParamLimits

0x10a2,	// (0x0004293f) control_bottom_pane_stacon_t1

0xbf21,	// (0x0004d7be) grid_app_pane_ParamLimits

0xbf21,	// (0x0004d7be) grid_app_pane

0xbf59,	// (0x0004d7f6) scroll_pane_cp15_ParamLimits

0xbf59,	// (0x0004d7f6) scroll_pane_cp15

0xbf76,	// (0x0004d813) cell_app_pane_ParamLimits

0xbf76,	// (0x0004d813) cell_app_pane

0xbfb7,	// (0x0004d854) cell_app_pane_g1_ParamLimits

0xbfb7,	// (0x0004d854) cell_app_pane_g1

0x34e2,	// (0x00044d7f) cell_app_pane_g2_ParamLimits

0x34e2,	// (0x00044d7f) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x00050f9c) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x00050f9c) cell_app_pane_g

0x34ee,	// (0x00044d8b) cell_app_pane_t1_ParamLimits

0x34ee,	// (0x00044d8b) cell_app_pane_t1

0x3500,	// (0x00044d9d) grid_highlight_pane_ParamLimits

0x3500,	// (0x00044d9d) grid_highlight_pane

0x30f3,	// (0x00044990) cell_highlight_pane_g1

0x30fb,	// (0x00044998) cell_highlight_pane_g2

0x3103,	// (0x000449a0) cell_highlight_pane_g3

0x310b,	// (0x000449a8) cell_highlight_pane_g4

0x3113,	// (0x000449b0) cell_highlight_pane_g5

0x311b,	// (0x000449b8) cell_highlight_pane_g6

0x3123,	// (0x000449c0) cell_highlight_pane_g7

0x312b,	// (0x000449c8) cell_highlight_pane_g8

0x3133,	// (0x000449d0) cell_highlight_pane_g9

0xd99f,	// (0x0004f23c) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x00050f4a) cell_highlight_pane_g

0x3511,	// (0x00044dae) bg_scroll_pane

0x10ec,	// (0x00042989) scroll_handle_pane

0x3558,	// (0x00044df5) scroll_bg_pane_g1

0x356d,	// (0x00044e0a) scroll_bg_pane_g2

0x3585,	// (0x00044e22) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x00050fa1) scroll_bg_pane_g

0x359a,	// (0x00044e37) scroll_handle_focus_pane_ParamLimits

0x359a,	// (0x00044e37) scroll_handle_focus_pane

0x3558,	// (0x00044df5) scroll_handle_pane_g1

0x35a7,	// (0x00044e44) scroll_handle_pane_g2

0x3585,	// (0x00044e22) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x00050fa8) scroll_handle_pane_g

0x3144,	// (0x000449e1) bg_popup_sub_pane_cp21_ParamLimits

0x3144,	// (0x000449e1) bg_popup_sub_pane_cp21

0x35bb,	// (0x00044e58) popup_fep_japan_predictive_window_t1_ParamLimits

0x35bb,	// (0x00044e58) popup_fep_japan_predictive_window_t1

0x35d2,	// (0x00044e6f) popup_fep_japan_predictive_window_t2_ParamLimits

0x35d2,	// (0x00044e6f) popup_fep_japan_predictive_window_t2

0x3605,	// (0x00044ea2) popup_fep_japan_predictive_window_t3_ParamLimits

0x3605,	// (0x00044ea2) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x00050faf) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x00050faf) popup_fep_japan_predictive_window_t

0xd9a9,	// (0x0004f246) bg_popup_sub_pane_cp23

0x363c,	// (0x00044ed9) listscroll_japin_cand_pane

0x3644,	// (0x00044ee1) popup_fep_japan_candidate_window_t1

0x3652,	// (0x00044eef) candidate_pane_ParamLimits

0x3652,	// (0x00044eef) candidate_pane

0x3664,	// (0x00044f01) scroll_pane_cp30

0x366e,	// (0x00044f0b) list_single_popup_jap_candidate_pane_ParamLimits

0x366e,	// (0x00044f0b) list_single_popup_jap_candidate_pane

0xd9a9,	// (0x0004f246) list_highlight_pane_cp30

0x3682,	// (0x00044f1f) list_single_popup_jap_candidate_pane_t1

0xbfe4,	// (0x0004d881) level_1_signal

0xbff6,	// (0x0004d893) level_2_signal

0xc009,	// (0x0004d8a6) level_3_signal

0xc01c,	// (0x0004d8b9) level_4_signal

0xc02f,	// (0x0004d8cc) level_5_signal

0xc042,	// (0x0004d8df) level_6_signal

0xc055,	// (0x0004d8f2) level_7_signal

0xbfe4,	// (0x0004d881) level_1_battery

0xbff6,	// (0x0004d893) level_2_battery

0xc009,	// (0x0004d8a6) level_3_battery

0xc01c,	// (0x0004d8b9) level_4_battery

0xc02f,	// (0x0004d8cc) level_5_battery

0xc042,	// (0x0004d8df) level_6_battery

0xc055,	// (0x0004d8f2) level_7_battery

0x3704,	// (0x00044fa1) list_menu_pane_ParamLimits

0x3704,	// (0x00044fa1) list_menu_pane

0x3715,	// (0x00044fb2) scroll_pane_cp25_ParamLimits

0x3715,	// (0x00044fb2) scroll_pane_cp25

0x372e,	// (0x00044fcb) list_double2_graphic_pane_cp2_ParamLimits

0x372e,	// (0x00044fcb) list_double2_graphic_pane_cp2

0x372e,	// (0x00044fcb) list_double2_large_graphic_pane_cp2_ParamLimits

0x372e,	// (0x00044fcb) list_double2_large_graphic_pane_cp2

0x372e,	// (0x00044fcb) list_double2_pane_cp2_ParamLimits

0x372e,	// (0x00044fcb) list_double2_pane_cp2

0x372e,	// (0x00044fcb) list_double_graphic_pane_cp2_ParamLimits

0x372e,	// (0x00044fcb) list_double_graphic_pane_cp2

0x372e,	// (0x00044fcb) list_double_large_graphic_pane_cp2_ParamLimits

0x372e,	// (0x00044fcb) list_double_large_graphic_pane_cp2

0x372e,	// (0x00044fcb) list_double_number_pane_cp2_ParamLimits

0x372e,	// (0x00044fcb) list_double_number_pane_cp2

0x372e,	// (0x00044fcb) list_double_pane_cp2_ParamLimits

0x372e,	// (0x00044fcb) list_double_pane_cp2

0xc068,	// (0x0004d905) list_single_2graphic_pane_cp2_ParamLimits

0xc068,	// (0x0004d905) list_single_2graphic_pane_cp2

0xc068,	// (0x0004d905) list_single_graphic_heading_pane_cp2_ParamLimits

0xc068,	// (0x0004d905) list_single_graphic_heading_pane_cp2

0xc068,	// (0x0004d905) list_single_graphic_pane_cp2_ParamLimits

0xc068,	// (0x0004d905) list_single_graphic_pane_cp2

0xc068,	// (0x0004d905) list_single_heading_pane_cp2_ParamLimits

0xc068,	// (0x0004d905) list_single_heading_pane_cp2

0x3771,	// (0x0004500e) list_single_large_graphic_pane_cp2_ParamLimits

0x3771,	// (0x0004500e) list_single_large_graphic_pane_cp2

0xc068,	// (0x0004d905) list_single_number_heading_pane_cp2_ParamLimits

0xc068,	// (0x0004d905) list_single_number_heading_pane_cp2

0xc068,	// (0x0004d905) list_single_number_pane_cp2_ParamLimits

0xc068,	// (0x0004d905) list_single_number_pane_cp2

0xc068,	// (0x0004d905) list_single_pane_cp2_ParamLimits

0xc068,	// (0x0004d905) list_single_pane_cp2

0x37c6,	// (0x00045063) bg_popup_sub_pane_cp22

0x119e,	// (0x00042a3b) popup_side_volume_key_window_g1

0x11c8,	// (0x00042a65) popup_side_volume_key_window_t1

0x11e6,	// (0x00042a83) volume_small_pane_cp1

0x2a81,	// (0x0004431e) bg_popup_sub_pane_cp24_ParamLimits

0x2a81,	// (0x0004431e) bg_popup_sub_pane_cp24

0x37dc,	// (0x00045079) fep_china_uni_candidate_pane_ParamLimits

0x37dc,	// (0x00045079) fep_china_uni_candidate_pane

0x37f0,	// (0x0004508d) fep_china_uni_entry_pane

0x3800,	// (0x0004509d) popup_fep_china_uni_window_g1

0x381c,	// (0x000450b9) fep_china_uni_entry_pane_g1

0x3826,	// (0x000450c3) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x00050fdc) fep_china_uni_entry_pane_g

0x3830,	// (0x000450cd) fep_entry_item_pane

0x383a,	// (0x000450d7) fep_candidate_item_pane

0x3842,	// (0x000450df) fep_china_uni_candidate_pane_g1

0x384c,	// (0x000450e9) fep_china_uni_candidate_pane_g2

0x3854,	// (0x000450f1) fep_china_uni_candidate_pane_g3

0x385c,	// (0x000450f9) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x00050fe1) fep_china_uni_candidate_pane_g

0xd99f,	// (0x0004f23c) fep_entry_item_pane_g1

0x3866,	// (0x00045103) fep_entry_item_pane_t1_ParamLimits

0x3866,	// (0x00045103) fep_entry_item_pane_t1

0x387c,	// (0x00045119) fep_candidate_item_pane_t1_ParamLimits

0x387c,	// (0x00045119) fep_candidate_item_pane_t1

0x3891,	// (0x0004512e) fep_candidate_item_pane_t2_ParamLimits

0x3891,	// (0x0004512e) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00050fea) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00050fea) fep_candidate_item_pane_t

0x2805,	// (0x000440a2) list_highlight_pane_cp31_ParamLimits

0x2805,	// (0x000440a2) list_highlight_pane_cp31

0x38a3,	// (0x00045140) level_1_signal_lsc

0x38ac,	// (0x00045149) level_2_signal_lsc

0x38b5,	// (0x00045152) level_3_signal_lsc

0x38be,	// (0x0004515b) level_4_signal_lsc

0x38c7,	// (0x00045164) level_5_signal_lsc

0x38d0,	// (0x0004516d) level_6_signal_lsc

0x38d9,	// (0x00045176) level_7_signal_lsc

0x38d9,	// (0x00045176) level_1_battery_lsc

0x38e2,	// (0x0004517f) level_2_battery_lsc

0x38eb,	// (0x00045188) level_3_battery_lsc

0x38f4,	// (0x00045191) level_4_battery_lsc

0x38fd,	// (0x0004519a) level_5_battery_lsc

0x3906,	// (0x000451a3) level_6_battery_lsc

0x38a3,	// (0x00045140) level_7_battery_lsc

0x390f,	// (0x000451ac) scroll_handle_focus_pane_g1

0x3918,	// (0x000451b5) scroll_handle_focus_pane_g2

0x3921,	// (0x000451be) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x00050fef) scroll_handle_focus_pane_g

0xb675,	// (0x0004cf12) list_single_2graphic_pane_g1_ParamLimits

0xb675,	// (0x0004cf12) list_single_2graphic_pane_g1

0xbe4e,	// (0x0004d6eb) list_single_2graphic_pane_g2_ParamLimits

0xbe4e,	// (0x0004d6eb) list_single_2graphic_pane_g2

0x1582,	// (0x00042e1f) list_single_2graphic_pane_g3_ParamLimits

0x1582,	// (0x00042e1f) list_single_2graphic_pane_g3

0xc0af,	// (0x0004d94c) list_single_2graphic_pane_g4_ParamLimits

0xc0af,	// (0x0004d94c) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x00050ff6) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x00050ff6) list_single_2graphic_pane_g

0xb681,	// (0x0004cf1e) list_single_2graphic_pane_t1_ParamLimits

0xb681,	// (0x0004cf1e) list_single_2graphic_pane_t1

0xc0c0,	// (0x0004d95d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc0c0,	// (0x0004d95d) list_double2_graphic_large_graphic_pane_g1

0xb30b,	// (0x0004cba8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb30b,	// (0x0004cba8) list_double2_graphic_large_graphic_pane_g2

0xb258,	// (0x0004caf5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb258,	// (0x0004caf5) list_double2_graphic_large_graphic_pane_g3

0xb6af,	// (0x0004cf4c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb6af,	// (0x0004cf4c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x00050fff) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x00050fff) list_double2_graphic_large_graphic_pane_g

0xb6bb,	// (0x0004cf58) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb6bb,	// (0x0004cf58) list_double2_graphic_large_graphic_pane_t1

0xb6d1,	// (0x0004cf6e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb6d1,	// (0x0004cf6e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x00051008) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x00051008) list_double2_graphic_large_graphic_pane_t

0x3a63,	// (0x00045300) popup_fast_swap_window_ParamLimits

0x3a63,	// (0x00045300) popup_fast_swap_window

0x3a81,	// (0x0004531e) popup_side_volume_key_window

0x3a9f,	// (0x0004533c) stacon_top_pane

0x3aa9,	// (0x00045346) status_pane_ParamLimits

0x3aa9,	// (0x00045346) status_pane

0x3a9f,	// (0x0004533c) status_small_pane

0xd9a9,	// (0x0004f246) control_pane

0xd9a9,	// (0x0004f246) stacon_bottom_pane

0x306f,	// (0x0004490c) scroll_pane_cp121

0x3066,	// (0x00044903) set_content_pane

0xc936,	// (0x0004e1d3) bg_active_tab_pane_g1_cp1

0x3933,	// (0x000451d0) bg_active_tab_pane_g2_cp1

0xc93f,	// (0x0004e1dc) bg_active_tab_pane_g3_cp1

0xc936,	// (0x0004e1d3) bg_passive_tab_pane_g1_cp1

0x3933,	// (0x000451d0) bg_passive_tab_pane_g2_cp1

0xc93f,	// (0x0004e1dc) bg_passive_tab_pane_g3_cp1

0xc948,	// (0x0004e1e5) bg_active_tab_pane_g1_cp2

0x3933,	// (0x000451d0) bg_active_tab_pane_g2_cp2

0xc951,	// (0x0004e1ee) bg_active_tab_pane_g3_cp2

0xc948,	// (0x0004e1e5) bg_passive_tab_pane_g1_cp2

0x3933,	// (0x000451d0) bg_passive_tab_pane_g2_cp2

0xc951,	// (0x0004e1ee) bg_passive_tab_pane_g3_cp2

0xc95a,	// (0x0004e1f7) bg_active_tab_pane_g1_cp3

0x3933,	// (0x000451d0) bg_active_tab_pane_g2_cp3

0xc963,	// (0x0004e200) bg_active_tab_pane_g3_cp3

0xc95a,	// (0x0004e1f7) bg_passive_tab_pane_g1_cp3

0x3933,	// (0x000451d0) bg_passive_tab_pane_g2_cp3

0xc963,	// (0x0004e200) bg_passive_tab_pane_g3_cp3

0xc96c,	// (0x0004e209) bg_active_tab_pane_g1_cp4

0x3933,	// (0x000451d0) bg_active_tab_pane_g2_cp4

0xc975,	// (0x0004e212) bg_active_tab_pane_g3_cp4

0xc96c,	// (0x0004e209) bg_passive_tab_pane_g1_cp4

0x3933,	// (0x000451d0) bg_passive_tab_pane_g2_cp4

0xc975,	// (0x0004e212) bg_passive_tab_pane_g3_cp4

0x39bd,	// (0x0004525a) bg_active_tab_pane_g1_cp5

0x3933,	// (0x000451d0) bg_active_tab_pane_g2_cp5

0x39c6,	// (0x00045263) bg_active_tab_pane_g3_cp5

0x39bd,	// (0x0004525a) bg_passive_tab_pane_g1_cp5

0x3933,	// (0x000451d0) bg_passive_tab_pane_g2_cp5

0x39c6,	// (0x00045263) bg_passive_tab_pane_g3_cp5

0x3216,	// (0x00044ab3) list_set_graphic_pane_ParamLimits

0x3216,	// (0x00044ab3) list_set_graphic_pane

0xd9a9,	// (0x0004f246) bg_set_opt_pane_cp4

0xc97e,	// (0x0004e21b) list_set_graphic_pane_g1_ParamLimits

0xc97e,	// (0x0004e21b) list_set_graphic_pane_g1

0xc98a,	// (0x0004e227) list_set_graphic_pane_g2_ParamLimits

0xc98a,	// (0x0004e227) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0005100d) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0005100d) list_set_graphic_pane_g

0x0009,

0xfae8,	// (0x00051385) volume_small_pane_cp_g

0x3a14,	// (0x000452b1) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3a14,	// (0x000452b1) list_double2_large_graphic_pane_g1_cp2

0x3a22,	// (0x000452bf) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3a22,	// (0x000452bf) list_double2_large_graphic_pane_g2_cp2

0x3a33,	// (0x000452d0) list_double2_large_graphic_pane_g3_cp2

0x3a3b,	// (0x000452d8) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3a3b,	// (0x000452d8) list_double2_large_graphic_pane_t1_cp2

0x3a51,	// (0x000452ee) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3a51,	// (0x000452ee) list_double2_large_graphic_pane_t2_cp2

0x5cd6,	// (0x00047573) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5cd6,	// (0x00047573) list_double_large_graphic_pane_g1_cp2

0x5ce9,	// (0x00047586) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5ce9,	// (0x00047586) list_double_large_graphic_pane_g2_cp2

0x3bc7,	// (0x00045464) list_double_large_graphic_pane_g3_cp2

0x5cfa,	// (0x00047597) list_double_large_graphic_pane_g4_cp

0x5d02,	// (0x0004759f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5d02,	// (0x0004759f) list_double_large_graphic_pane_t1_cp2

0x5d19,	// (0x000475b6) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5d19,	// (0x000475b6) list_double_large_graphic_pane_t2_cp2

0x3ab7,	// (0x00045354) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3ab7,	// (0x00045354) list_double2_graphic_pane_g1_cp2

0x3ac5,	// (0x00045362) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3ac5,	// (0x00045362) list_double2_graphic_pane_g2_cp2

0x3ad6,	// (0x00045373) list_double2_graphic_pane_g3_cp2

0x3ae0,	// (0x0004537d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3ae0,	// (0x0004537d) list_double2_graphic_pane_t1_cp2

0x3af6,	// (0x00045393) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3af6,	// (0x00045393) list_double2_graphic_pane_t2_cp2

0x3b08,	// (0x000453a5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3b08,	// (0x000453a5) list_single_number_heading_pane_g1_cp2

0x3b14,	// (0x000453b1) list_single_number_heading_pane_g2_cp2

0x3b1c,	// (0x000453b9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3b1c,	// (0x000453b9) list_single_number_heading_pane_t1_cp2

0x3b32,	// (0x000453cf) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3b32,	// (0x000453cf) list_single_number_heading_pane_t2_cp2

0x3b46,	// (0x000453e3) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3b46,	// (0x000453e3) list_single_number_heading_pane_t3_cp2

0x3b08,	// (0x000453a5) list_single_heading_pane_g1_cp2_ParamLimits

0x3b08,	// (0x000453a5) list_single_heading_pane_g1_cp2

0x3b14,	// (0x000453b1) list_single_heading_pane_g2_cp2

0x3b1c,	// (0x000453b9) list_single_heading_pane_t1_cp2_ParamLimits

0x3b1c,	// (0x000453b9) list_single_heading_pane_t1_cp2

0x5ad0,	// (0x0004736d) list_single_heading_pane_t2_cp2_ParamLimits

0x5ad0,	// (0x0004736d) list_single_heading_pane_t2_cp2

0x5a12,	// (0x000472af) list_double_graphic_pane_g1_cp2_ParamLimits

0x5a12,	// (0x000472af) list_double_graphic_pane_g1_cp2

0x5a1e,	// (0x000472bb) list_double_graphic_pane_g2_cp2_ParamLimits

0x5a1e,	// (0x000472bb) list_double_graphic_pane_g2_cp2

0x5a2d,	// (0x000472ca) list_double_graphic_pane_g3_cp2

0x5a35,	// (0x000472d2) list_double_graphic_pane_t1_cp2_ParamLimits

0x5a35,	// (0x000472d2) list_double_graphic_pane_t1_cp2

0x5a4b,	// (0x000472e8) list_double_graphic_pane_t2_cp2_ParamLimits

0x5a4b,	// (0x000472e8) list_double_graphic_pane_t2_cp2

0x3bbb,	// (0x00045458) list_double_number_pane_g1_cp2_ParamLimits

0x3bbb,	// (0x00045458) list_double_number_pane_g1_cp2

0x3bc7,	// (0x00045464) list_double_number_pane_g2_cp2

0x59d6,	// (0x00047273) list_double_number_pane_t1_cp2_ParamLimits

0x59d6,	// (0x00047273) list_double_number_pane_t1_cp2

0x59ea,	// (0x00047287) list_double_number_pane_t2_cp2_ParamLimits

0x59ea,	// (0x00047287) list_double_number_pane_t2_cp2

0x5a00,	// (0x0004729d) list_double_number_pane_t3_cp2_ParamLimits

0x5a00,	// (0x0004729d) list_double_number_pane_t3_cp2

0x58bf,	// (0x0004715c) list_single_graphic_pane_g1_cp2_ParamLimits

0x58bf,	// (0x0004715c) list_single_graphic_pane_g1_cp2

0x3c21,	// (0x000454be) list_single_graphic_pane_g2_cp2_ParamLimits

0x3c21,	// (0x000454be) list_single_graphic_pane_g2_cp2

0x3c2d,	// (0x000454ca) list_single_graphic_pane_g3_cp2

0x5895,	// (0x00047132) list_single_graphic_pane_t1_cp2_ParamLimits

0x5895,	// (0x00047132) list_single_graphic_pane_t1_cp2

0x3c21,	// (0x000454be) list_single_number_pane_g1_cp2_ParamLimits

0x3c21,	// (0x000454be) list_single_number_pane_g1_cp2

0x3c2d,	// (0x000454ca) list_single_number_pane_g2_cp2

0x5895,	// (0x00047132) list_single_number_pane_t1_cp2_ParamLimits

0x5895,	// (0x00047132) list_single_number_pane_t1_cp2

0x58ab,	// (0x00047148) list_single_number_pane_t2_cp2_ParamLimits

0x58ab,	// (0x00047148) list_single_number_pane_t2_cp2

0x3a22,	// (0x000452bf) list_double2_pane_g1_cp2_ParamLimits

0x3a22,	// (0x000452bf) list_double2_pane_g1_cp2

0x3a33,	// (0x000452d0) list_double2_pane_g2_cp2

0x3b93,	// (0x00045430) list_double2_pane_t1_cp2_ParamLimits

0x3b93,	// (0x00045430) list_double2_pane_t1_cp2

0x3ba9,	// (0x00045446) list_double2_pane_t2_cp2_ParamLimits

0x3ba9,	// (0x00045446) list_double2_pane_t2_cp2

0x3bbb,	// (0x00045458) list_double_pane_g1_cp2_ParamLimits

0x3bbb,	// (0x00045458) list_double_pane_g1_cp2

0x3bc7,	// (0x00045464) list_double_pane_g2_cp2

0x3bcf,	// (0x0004546c) list_double_pane_t1_cp2_ParamLimits

0x3bcf,	// (0x0004546c) list_double_pane_t1_cp2

0x3be5,	// (0x00045482) list_double_pane_t2_cp2_ParamLimits

0x3be5,	// (0x00045482) list_double_pane_t2_cp2

0x3c11,	// (0x000454ae) list_single_pane_cp2_g3

0x3c21,	// (0x000454be) list_single_pane_g1_cp2_ParamLimits

0x3c21,	// (0x000454be) list_single_pane_g1_cp2

0x3c2d,	// (0x000454ca) list_single_pane_g2_cp2

0x3c35,	// (0x000454d2) list_single_pane_t1_cp2_ParamLimits

0x3c35,	// (0x000454d2) list_single_pane_t1_cp2

0x3c4d,	// (0x000454ea) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3c4d,	// (0x000454ea) list_single_large_graphic_pane_g1_cp2

0x3c5b,	// (0x000454f8) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3c5b,	// (0x000454f8) list_single_large_graphic_pane_g2_cp2

0x3c67,	// (0x00045504) list_single_large_graphic_pane_g3_cp2

0x3c6f,	// (0x0004550c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3c6f,	// (0x0004550c) list_single_large_graphic_pane_g4_cp1

0x3c89,	// (0x00045526) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3c89,	// (0x00045526) list_single_large_graphic_pane_t1_cp2

0x585f,	// (0x000470fc) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x585f,	// (0x000470fc) list_single_graphic_heading_pane_g1_cp2

0x582c,	// (0x000470c9) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x582c,	// (0x000470c9) list_single_graphic_heading_pane_g4_cp2

0x3c2d,	// (0x000454ca) list_single_graphic_heading_pane_g5_cp2

0x586b,	// (0x00047108) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x586b,	// (0x00047108) list_single_graphic_heading_pane_t1_cp2

0x5881,	// (0x0004711e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5881,	// (0x0004711e) list_single_graphic_heading_pane_t2_cp2

0x5820,	// (0x000470bd) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5820,	// (0x000470bd) list_single_2graphic_pane_g1_cp2

0x582c,	// (0x000470c9) list_single_2graphic_pane_g2_cp2_ParamLimits

0x582c,	// (0x000470c9) list_single_2graphic_pane_g2_cp2

0x3c2d,	// (0x000454ca) list_single_2graphic_pane_g3_cp2

0x583d,	// (0x000470da) list_single_2graphic_pane_g4_cp2_ParamLimits

0x583d,	// (0x000470da) list_single_2graphic_pane_g4_cp2

0x5849,	// (0x000470e6) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5849,	// (0x000470e6) list_single_2graphic_pane_t1_cp2

0xd99f,	// (0x0004f23c) list_highlight_pane_g10_cp1

0x53f8,	// (0x00046c95) list_highlight_pane_g1_cp1

0x5400,	// (0x00046c9d) list_highlight_pane_g2_cp1

0x5408,	// (0x00046ca5) list_highlight_pane_g3_cp1

0x5410,	// (0x00046cad) list_highlight_pane_g4_cp1

0x5418,	// (0x00046cb5) list_highlight_pane_g5_cp1

0x5420,	// (0x00046cbd) list_highlight_pane_g6_cp1

0x5428,	// (0x00046cc5) list_highlight_pane_g7_cp1

0x5430,	// (0x00046ccd) list_highlight_pane_g8_cp1

0x5438,	// (0x00046cd5) list_highlight_pane_g9_cp1

0xd680,	// (0x0004ef1d) form_field_slider_pane_t3

0xd68e,	// (0x0004ef2b) form_field_slider_pane_t4

0x5334,	// (0x00046bd1) slider_form_pane_ParamLimits

0x5334,	// (0x00046bd1) slider_form_pane

0xd9a9,	// (0x0004f246) control_abbreviations

0xd9a9,	// (0x0004f246) control_conventions

0xd9a9,	// (0x0004f246) control_definitions

0xd9a9,	// (0x0004f246) format_table_attribute

0x5b26,	// (0x000473c3) bg_popup_preview_window_pane_g9

0xd9a9,	// (0x0004f246) format_table_data2

0xd9a9,	// (0x0004f246) format_table_data3

0xd9a9,	// (0x0004f246) format_table_data_example

0x0008,

0xd9a9,	// (0x0004f246) intro_purpose

0xf900,	// (0x0005119d) bg_popup_preview_window_pane_g

0xd9a9,	// (0x0004f246) texts_category

0xd9a9,	// (0x0004f246) texts_graphics

0x3c9f,	// (0x0004553c) text_digital

0x3cae,	// (0x0004554b) text_primary

0x3cbd,	// (0x0004555a) text_primary_small

0x3ccc,	// (0x00045569) text_secondary

0x3cdb,	// (0x00045578) text_title

0x62c2,	// (0x00047b5f) bg_passive_tab_pane_g1_cp3_srt

0x3933,	// (0x000451d0) bg_passive_tab_pane_g2_cp3_srt

0x62cb,	// (0x00047b68) bg_passive_tab_pane_g3_cp3_srt

0x2a81,	// (0x0004431e) bg_active_tab_pane_cp3_srt_ParamLimits

0x2a81,	// (0x0004431e) bg_active_tab_pane_cp3_srt

0x62d4,	// (0x00047b71) tabs_4_active_pane_srt_g1

0xdab9,	// (0x0004f356) tabs_4_active_pane_srt_t1_ParamLimits

0xdab9,	// (0x0004f356) tabs_4_active_pane_srt_t1

0x62c2,	// (0x00047b5f) bg_active_tab_pane_g1_cp3_copy1

0x3933,	// (0x000451d0) bg_active_tab_pane_g2_cp3_copy1

0x62cb,	// (0x00047b68) bg_active_tab_pane_g3_cp3_copy1

0x2805,	// (0x000440a2) tabs_2_long_active_pane_srt_ParamLimits

0x2805,	// (0x000440a2) tabs_2_long_active_pane_srt

0x2805,	// (0x000440a2) tabs_2_long_passive_pane_srt_ParamLimits

0x2805,	// (0x000440a2) tabs_2_long_passive_pane_srt

0x4068,	// (0x00045905) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4068,	// (0x00045905) bg_passive_tab_pane_cp4_srt

0x5f76,	// (0x00047813) bg_passive_tab_pane_g1_cp4_srt

0x3933,	// (0x000451d0) bg_passive_tab_pane_g2_cp4_srt

0x5f7f,	// (0x0004781c) bg_passive_tab_pane_g3_cp4_srt

0x2805,	// (0x000440a2) bg_active_tab_pane_cp4_srt_ParamLimits

0x2805,	// (0x000440a2) bg_active_tab_pane_cp4_srt

0xd889,	// (0x0004f126) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd889,	// (0x0004f126) tabs_2_long_active_pane_srt_t1

0x5f76,	// (0x00047813) bg_active_tab_pane_g1_cp4_srt

0x3933,	// (0x000451d0) bg_active_tab_pane_g2_cp4_srt

0x5f7f,	// (0x0004781c) bg_active_tab_pane_g3_cp4_srt

0x2a81,	// (0x0004431e) tabs_3_long_active_pane_srt_ParamLimits

0x2a81,	// (0x0004431e) tabs_3_long_active_pane_srt

0x2a81,	// (0x0004431e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2a81,	// (0x0004431e) tabs_3_long_passive_pane_cp_srt

0x2a81,	// (0x0004431e) tabs_3_long_passive_pane_srt_ParamLimits

0x2a81,	// (0x0004431e) tabs_3_long_passive_pane_srt

0x4068,	// (0x00045905) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4068,	// (0x00045905) bg_passive_tab_pane_cp5_srt

0x39bd,	// (0x0004525a) bg_passive_tab_pane_g1_cp5_srt

0x3933,	// (0x000451d0) bg_passive_tab_pane_g2_cp5_srt

0x39c6,	// (0x00045263) bg_passive_tab_pane_g3_cp5_srt

0x2805,	// (0x000440a2) bg_active_tab_pane_cp5_srt_ParamLimits

0x2805,	// (0x000440a2) bg_active_tab_pane_cp5_srt

0xd873,	// (0x0004f110) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd873,	// (0x0004f110) tabs_3_long_active_pane_srt_t1

0x39bd,	// (0x0004525a) bg_active_tab_pane_g1_cp5_srt

0x3933,	// (0x000451d0) bg_active_tab_pane_g2_cp5_srt

0x39c6,	// (0x00045263) bg_active_tab_pane_g3_cp5_srt

0x5f56,	// (0x000477f3) navi_text_pane_srt_t1

0x5f4e,	// (0x000477eb) navi_icon_pane_srt_g1

0x3eb2,	// (0x0004574f) midp_editing_number_pane_srt

0x3cea,	// (0x00045587) midp_ticker_pane_srt

0x3eba,	// (0x00045757) midp_ticker_pane_srt_g1

0x3ec2,	// (0x0004575f) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0005102c) midp_ticker_pane_srt_g

0x3eca,	// (0x00045767) midp_ticker_pane_srt_t1

0x5f3f,	// (0x000477dc) midp_editing_number_pane_t1_copy1

0xc9ae,	// (0x0004e24b) listscroll_midp_pane

0xc9ae,	// (0x0004e24b) midp_form_pane

0x3d60,	// (0x000455fd) midp_info_popup_window_ParamLimits

0x3d60,	// (0x000455fd) midp_info_popup_window

0x3144,	// (0x000449e1) bg_popup_sub_pane_cp50_ParamLimits

0x3144,	// (0x000449e1) bg_popup_sub_pane_cp50

0x502e,	// (0x000468cb) listscroll_midp_info_pane_ParamLimits

0x502e,	// (0x000468cb) listscroll_midp_info_pane

0x5016,	// (0x000468b3) listscroll_form_midp_pane_ParamLimits

0x5016,	// (0x000468b3) listscroll_form_midp_pane

0x5022,	// (0x000468bf) scroll_bar_cp050

0xd674,	// (0x0004ef11) list_midp_pane

0x6d4c,	// (0x000485e9) signal_pane_g2_cp

0x4f30,	// (0x000467cd) listscroll_midp_info_pane_t1_ParamLimits

0x4f30,	// (0x000467cd) listscroll_midp_info_pane_t1

0x4f48,	// (0x000467e5) listscroll_midp_info_pane_t2_ParamLimits

0x4f48,	// (0x000467e5) listscroll_midp_info_pane_t2

0x4f86,	// (0x00046823) listscroll_midp_info_pane_t3_ParamLimits

0x4f86,	// (0x00046823) listscroll_midp_info_pane_t3

0x4fc0,	// (0x0004685d) listscroll_midp_info_pane_t4_ParamLimits

0x4fc0,	// (0x0004685d) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x000510d8) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x000510d8) listscroll_midp_info_pane_t

0x320e,	// (0x00044aab) scroll_pane_cp21

0x4eca,	// (0x00046767) form_midp_field_choice_group_pane

0x4ed3,	// (0x00046770) form_midp_field_text_pane

0x4f16,	// (0x000467b3) form_midp_field_time_pane

0x4f1e,	// (0x000467bb) form_midp_gauge_slider_pane

0x4f27,	// (0x000467c4) form_midp_gauge_wait_pane

0xd9a9,	// (0x0004f246) form_midp_image_pane

0xb6e3,	// (0x0004cf80) list_single_midp_pane_ParamLimits

0xb6e3,	// (0x0004cf80) list_single_midp_pane

0xd64c,	// (0x0004eee9) form_midp_field_text_pane_t1

0x4ca2,	// (0x0004653f) input_focus_pane_cp050

0x4eb9,	// (0x00046756) list_midp_form_text_pane

0x4e5d,	// (0x000466fa) form_midp_field_choice_group_pane_t1

0x4e6b,	// (0x00046708) input_focus_pane_cp051

0x4e7f,	// (0x0004671c) list_midp_choice_pane

0xd9a9,	// (0x0004f246) status_idle_pane

0x4e41,	// (0x000466de) form_midp_field_time_pane_t1

0xd99f,	// (0x0004f23c) wait_anim_pane_g2_copy1

0x4e4f,	// (0x000466ec) form_midp_field_time_pane_t2

0x0001,

0x3e10,	// (0x000456ad) aid_navinavi_width_2_pane

0xf836,	// (0x000510d3) form_midp_field_time_pane_t

0xd9a9,	// (0x0004f246) input_focus_pane_cp052

0xd9a9,	// (0x0004f246) bg_input_focus_pane_cp040

0x4e01,	// (0x0004669e) form_midp_gauge_slider_pane_t1

0x4e0f,	// (0x000466ac) form_midp_gauge_slider_pane_t2

0xd630,	// (0x0004eecd) form_midp_gauge_slider_pane_t3

0xd63e,	// (0x0004eedb) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x000510ca) form_midp_gauge_slider_pane_t

0x4e39,	// (0x000466d6) form_midp_slider_pane

0x2805,	// (0x000440a2) bg_input_focus_pane_cp041_ParamLimits

0x2805,	// (0x000440a2) bg_input_focus_pane_cp041

0x4dce,	// (0x0004666b) form_midp_gauge_wait_pane_t1_ParamLimits

0x4dce,	// (0x0004666b) form_midp_gauge_wait_pane_t1

0x4de0,	// (0x0004667d) form_midp_gauge_wait_pane_t2_ParamLimits

0x4de0,	// (0x0004667d) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x000510c5) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x000510c5) form_midp_gauge_wait_pane_t

0x4df2,	// (0x0004668f) form_midp_wait_pane_ParamLimits

0x4df2,	// (0x0004668f) form_midp_wait_pane

0x4d96,	// (0x00046633) form_midp_image_pane_g1

0x4d9f,	// (0x0004663c) form_midp_image_pane_t1

0x4dae,	// (0x0004664b) form_midp_image_pane_t2

0x4dbd,	// (0x0004665a) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x000510be) form_midp_image_pane_t

0x4d8d,	// (0x0004662a) list_single_midp_pane_g1

0x04ff,	// (0x00041d9c) list_single_midp_pane_t1

0xd619,	// (0x0004eeb6) list_midp_form_item_pane_ParamLimits

0xd619,	// (0x0004eeb6) list_midp_form_item_pane

0x3db8,	// (0x00045655) list_midp_form_item_pane_t1

0x3dc7,	// (0x00045664) midp_ticker_pane_g1

0x3dd3,	// (0x00045670) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x00051012) midp_ticker_pane_g

0xca56,	// (0x0004e2f3) midp_ticker_pane_t1

0xda3e,	// (0x0004f2db) midp_editing_number_pane_t1

0x619c,	// (0x00047a39) midp_editing_number_pane

0x61ab,	// (0x00047a48) midp_ticker_pane

0x5f2f,	// (0x000477cc) ai_message_heading_pane

0xd9a9,	// (0x0004f246) bg_popup_window_pane_cp14

0x5f37,	// (0x000477d4) listscroll_ai_message_pane

0x5eb5,	// (0x00047752) ai_message_heading_pane_g1_ParamLimits

0x5eb5,	// (0x00047752) ai_message_heading_pane_g1

0x5ec1,	// (0x0004775e) ai_message_heading_pane_g2_ParamLimits

0x5ec1,	// (0x0004775e) ai_message_heading_pane_g2

0x5ecf,	// (0x0004776c) ai_message_heading_pane_g3_ParamLimits

0x5ecf,	// (0x0004776c) ai_message_heading_pane_g3

0x5edb,	// (0x00047778) ai_message_heading_pane_g4_ParamLimits

0x5edb,	// (0x00047778) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x000511ff) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x000511ff) ai_message_heading_pane_g

0x5ee7,	// (0x00047784) ai_message_heading_pane_t1_ParamLimits

0x5ee7,	// (0x00047784) ai_message_heading_pane_t1

0x5f01,	// (0x0004779e) ai_message_heading_pane_t2_ParamLimits

0x5f01,	// (0x0004779e) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x00051208) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x00051208) ai_message_heading_pane_t

0x5f15,	// (0x000477b2) bg_popup_heading_pane_cp1_ParamLimits

0x5f15,	// (0x000477b2) bg_popup_heading_pane_cp1

0x5ea3,	// (0x00047740) list_ai_message_pane_ParamLimits

0x5ea3,	// (0x00047740) list_ai_message_pane

0x320e,	// (0x00044aab) scroll_pane_cp10

0x5e3f,	// (0x000476dc) list_ai_message_pane_g1

0x5e47,	// (0x000476e4) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x000511dc) list_ai_message_pane_g

0x5e4f,	// (0x000476ec) list_ai_message_pane_t1_ParamLimits

0x5e4f,	// (0x000476ec) list_ai_message_pane_t1

0x5e64,	// (0x00047701) list_ai_message_pane_t2_ParamLimits

0x5e64,	// (0x00047701) list_ai_message_pane_t2

0x5e79,	// (0x00047716) list_ai_message_pane_t3_ParamLimits

0x5e79,	// (0x00047716) list_ai_message_pane_t3

0x5e8e,	// (0x0004772b) list_ai_message_pane_t4_ParamLimits

0x5e8e,	// (0x0004772b) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x000511e1) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x000511e1) list_ai_message_pane_t

0xd859,	// (0x0004f0f6) cell_ai_soft_ind_pane_ParamLimits

0xd859,	// (0x0004f0f6) cell_ai_soft_ind_pane

0x3df1,	// (0x0004568e) cell_ai_soft_ind_pane_g1_ParamLimits

0x3df1,	// (0x0004568e) cell_ai_soft_ind_pane_g1

0xd9a9,	// (0x0004f246) grid_highlight_cp1

0x3dfe,	// (0x0004569b) text_secondary_cp56_ParamLimits

0x3dfe,	// (0x0004569b) text_secondary_cp56

0x5dfd,	// (0x0004769a) example_general_pane_ParamLimits

0x5dfd,	// (0x0004769a) example_general_pane

0x5e09,	// (0x000476a6) example_parent_pane_g1_ParamLimits

0x5e09,	// (0x000476a6) example_parent_pane_g1

0x5e15,	// (0x000476b2) example_parent_pane_t1_ParamLimits

0x5e15,	// (0x000476b2) example_parent_pane_t1

0xceac,	// (0x0004e749) popup_preview_text_window_ParamLimits

0xceac,	// (0x0004e749) popup_preview_text_window

0x3c19,	// (0x000454b6) list_single_pane_cp2_g4

0x2b37,	// (0x000443d4) bg_popup_preview_window_pane_ParamLimits

0x2b37,	// (0x000443d4) bg_popup_preview_window_pane

0x5b30,	// (0x000473cd) popup_preview_text_window_t1_ParamLimits

0x5b30,	// (0x000473cd) popup_preview_text_window_t1

0x5b4e,	// (0x000473eb) popup_preview_text_window_t2_ParamLimits

0x5b4e,	// (0x000473eb) popup_preview_text_window_t2

0x5b97,	// (0x00047434) popup_preview_text_window_t3_ParamLimits

0x5b97,	// (0x00047434) popup_preview_text_window_t3

0x5bdc,	// (0x00047479) popup_preview_text_window_t4_ParamLimits

0x5bdc,	// (0x00047479) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x000511b0) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x000511b0) popup_preview_text_window_t

0x5c5a,	// (0x000474f7) scroll_pane_cp11

0x4bb0,	// (0x0004644d) bg_popup_preview_window_pane_g1

0x5ae4,	// (0x00047381) bg_popup_preview_window_pane_g2

0x5aee,	// (0x0004738b) bg_popup_preview_window_pane_g3

0x5af8,	// (0x00047395) bg_popup_preview_window_pane_g4

0x5b02,	// (0x0004739f) bg_popup_preview_window_pane_g5

0x5b0c,	// (0x000473a9) bg_popup_preview_window_pane_g6

0x5b14,	// (0x000473b1) bg_popup_preview_window_pane_g7

0x5b1c,	// (0x000473b9) bg_popup_preview_window_pane_g8

0x0a27,	// (0x000422c4) aid_popup_width_pane

0xce1c,	// (0x0004e6b9) popup_midp_note_alarm_window_ParamLimits

0xce1c,	// (0x0004e6b9) popup_midp_note_alarm_window

0x3080,	// (0x0004491d) data_form_pane_ParamLimits

0xb566,	// (0x0004ce03) form_field_data_pane_g1

0xb570,	// (0x0004ce0d) form_field_data_pane_t1_ParamLimits

0x308c,	// (0x00044929) input_focus_pane_ParamLimits

0x309a,	// (0x00044937) data_form_wide_pane_ParamLimits

0x0261,	// (0x00041afe) form_field_data_wide_pane_g1

0x026d,	// (0x00041b0a) form_field_data_wide_pane_t1_ParamLimits

0x2dfd,	// (0x0004469a) input_focus_pane_cp6_ParamLimits

0xbed4,	// (0x0004d771) input_popup_find_pane_g1_ParamLimits

0xbed4,	// (0x0004d771) input_popup_find_pane_g1

0x104b,	// (0x000428e8) aid_navi_side_left_pane

0x1060,	// (0x000428fd) aid_navi_side_right_pane

0x54f3,	// (0x00046d90) bg_popup_window_pane_cp30_ParamLimits

0x54f3,	// (0x00046d90) bg_popup_window_pane_cp30

0x556d,	// (0x00046e0a) popup_midp_note_alarm_window_g1_ParamLimits

0x556d,	// (0x00046e0a) popup_midp_note_alarm_window_g1

0x559d,	// (0x00046e3a) popup_midp_note_alarm_window_t1_ParamLimits

0x559d,	// (0x00046e3a) popup_midp_note_alarm_window_t1

0x563e,	// (0x00046edb) popup_midp_note_alarm_window_t2_ParamLimits

0x563e,	// (0x00046edb) popup_midp_note_alarm_window_t2

0x56ec,	// (0x00046f89) popup_midp_note_alarm_window_t3_ParamLimits

0x56ec,	// (0x00046f89) popup_midp_note_alarm_window_t3

0x571e,	// (0x00046fbb) popup_midp_note_alarm_window_t4_ParamLimits

0x571e,	// (0x00046fbb) popup_midp_note_alarm_window_t4

0x5744,	// (0x00046fe1) popup_midp_note_alarm_window_t5_ParamLimits

0x5744,	// (0x00046fe1) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x0005114d) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x0005114d) popup_midp_note_alarm_window_t

0x57f0,	// (0x0004708d) wait_bar_pane_cp1_ParamLimits

0x57f0,	// (0x0004708d) wait_bar_pane_cp1

0xd9a9,	// (0x0004f246) wait_anim_pane_copy1

0xd9a9,	// (0x0004f246) wait_border_pane_copy1

0x51d8,	// (0x00046a75) wait_border_pane_g1_copy1

0x0287,	// (0x00041b24) form_field_popup_pane_g1

0xb58a,	// (0x0004ce27) form_field_popup_pane_t1_ParamLimits

0x308c,	// (0x00044929) input_focus_pane_cp7_ParamLimits

0x30c6,	// (0x00044963) list_form_pane_ParamLimits

0x02a9,	// (0x00041b46) form_field_popup_wide_pane_g1

0x02b1,	// (0x00041b4e) form_field_popup_wide_pane_t1_ParamLimits

0x308c,	// (0x00044929) input_focus_pane_cp8_ParamLimits

0x30d2,	// (0x0004496f) list_form_wide_pane_ParamLimits

0x634f,	// (0x00047bec) aid_size_cell_graphic_pane

0xb609,	// (0x0004cea6) data_form_pane_t1_ParamLimits

0xb711,	// (0x0004cfae) data_form_wide_pane_t1_ParamLimits

0xd2a9,	// (0x0004eb46) bg_status_flat_pane

0xbab1,	// (0x0004d34e) title_pane_t1_ParamLimits

0x27cd,	// (0x0004406a) title_pane_t2_ParamLimits

0x27f3,	// (0x00044090) title_pane_t3_ParamLimits

0xf573,	// (0x00050e10) title_pane_t_ParamLimits

0xbfe4,	// (0x0004d881) level_1_signal_ParamLimits

0xbff6,	// (0x0004d893) level_2_signal_ParamLimits

0xc009,	// (0x0004d8a6) level_3_signal_ParamLimits

0xc01c,	// (0x0004d8b9) level_4_signal_ParamLimits

0xc02f,	// (0x0004d8cc) level_5_signal_ParamLimits

0xc042,	// (0x0004d8df) level_6_signal_ParamLimits

0xc055,	// (0x0004d8f2) level_7_signal_ParamLimits

0xbfe4,	// (0x0004d881) level_1_battery_ParamLimits

0xbff6,	// (0x0004d893) level_2_battery_ParamLimits

0xc009,	// (0x0004d8a6) level_3_battery_ParamLimits

0xc01c,	// (0x0004d8b9) level_4_battery_ParamLimits

0xc02f,	// (0x0004d8cc) level_5_battery_ParamLimits

0xc042,	// (0x0004d8df) level_6_battery_ParamLimits

0xc055,	// (0x0004d8f2) level_7_battery_ParamLimits

0x53f8,	// (0x00046c95) bg_status_flat_pane_g1

0x5400,	// (0x00046c9d) bg_status_flat_pane_g2

0x5408,	// (0x00046ca5) bg_status_flat_pane_g3

0x5410,	// (0x00046cad) bg_status_flat_pane_g4

0x5418,	// (0x00046cb5) bg_status_flat_pane_g5

0x5420,	// (0x00046cbd) bg_status_flat_pane_g6

0x5428,	// (0x00046cc5) bg_status_flat_pane_g7

0xbb45,	// (0x0004d3e2) tabs_3_active_pane_t1_ParamLimits

0xbb45,	// (0x0004d3e2) tabs_3_passive_pane_t1_ParamLimits

0xbb5f,	// (0x0004d3fc) tabs_4_active_pane_t1_ParamLimits

0xbb5f,	// (0x0004d3fc) tabs_4_1_passive_pane_t1_ParamLimits

0xbeea,	// (0x0004d787) tabs_2_active_pane_t1_ParamLimits

0xbeea,	// (0x0004d787) tabs_2_passive_pane_t1_ParamLimits

0x2805,	// (0x000440a2) bg_active_tab_pane_cp4_ParamLimits

0xbefc,	// (0x0004d799) tabs_2_long_active_pane_t1_ParamLimits

0x4068,	// (0x00045905) bg_passive_tab_pane_cp4_ParamLimits

0x15da,	// (0x00042e77) list_single_midp_graphic_pane_t1_ParamLimits

0x2805,	// (0x000440a2) bg_active_tab_pane_cp5_ParamLimits

0xbf0f,	// (0x0004d7ac) tabs_3_long_active_pane_t1_ParamLimits

0x4068,	// (0x00045905) bg_passive_tab_pane_cp5_ParamLimits

0x15da,	// (0x00042e77) list_single_midp_graphic_pane_t1

0xd2a9,	// (0x0004eb46) bg_status_flat_pane_ParamLimits

0x4829,	// (0x000460c6) indicator_pane_cp2_ParamLimits

0x4829,	// (0x000460c6) indicator_pane_cp2

0xd43e,	// (0x0004ecdb) navi_pane_srt_ParamLimits

0xd43e,	// (0x0004ecdb) navi_pane_srt

0x498f,	// (0x0004622c) popup_clock_digital_analogue_window_cp1

0x28e5,	// (0x00044182) indicator_pane_t1

0x3cea,	// (0x00045587) copy_highlight_pane

0x3cea,	// (0x00045587) cursor_graphics_pane

0x3cea,	// (0x00045587) graphic_within_text_pane

0x3cea,	// (0x00045587) link_highlight_pane

0x5c1d,	// (0x000474ba) popup_preview_text_window_t5_ParamLimits

0x5c1d,	// (0x000474ba) popup_preview_text_window_t5

0x3e1a,	// (0x000456b7) cursor_digital_pane

0x3e1a,	// (0x000456b7) cursor_primary_pane

0x3e2b,	// (0x000456c8) cursor_primary_small_pane

0x3e33,	// (0x000456d0) cursor_secondary_pane

0x3e3b,	// (0x000456d8) cursor_title_pane

0x3e1a,	// (0x000456b7) link_highlight_digital_pane

0x3e22,	// (0x000456bf) link_highlight_primary_pane

0x3e2b,	// (0x000456c8) link_highlight_primary_small_pane

0x3e33,	// (0x000456d0) link_highlight_secondary_pane

0x3e3b,	// (0x000456d8) link_highlight_title_pane

0x3e1a,	// (0x000456b7) copy_highlight_digital_pane

0x3e1a,	// (0x000456b7) copy_highlight_primary_pane

0x3e2b,	// (0x000456c8) copy_highlight_primary_small_pane

0x3e33,	// (0x000456d0) copy_highlight_secondary_pane

0x3e3b,	// (0x000456d8) copy_highlight_title_pane

0x3e33,	// (0x000456d0) graphic_text_digital_pane

0x5496,	// (0x00046d33) graphic_text_primary_pane

0x549f,	// (0x00046d3c) graphic_text_primary_small_pane

0x3e2b,	// (0x000456c8) graphic_text_secondary_pane

0x3e1a,	// (0x000456b7) graphic_text_title_pane

0xca68,	// (0x0004e305) cursor_primary_pane_g1

0x5488,	// (0x00046d25) cursor_text_primary_t1

0xd6b0,	// (0x0004ef4d) cursor_primary_small_pane_g1

0x547a,	// (0x00046d17) cursor_text_primary_small_t1

0xd6a6,	// (0x0004ef43) cursor_primary_small_pane_g1_copy1

0x5462,	// (0x00046cff) cursor_text_primary_small_t1_copy1

0x5440,	// (0x00046cdd) cursor_text_title_t1

0xd69c,	// (0x0004ef39) cursor_title_pane_g1

0xca68,	// (0x0004e305) cursor_digital_pane_g1

0x3e4d,	// (0x000456ea) cursor_text_digital_t1

0x3e5b,	// (0x000456f8) link_highlight_primary_pane_g1

0x53e9,	// (0x00046c86) link_highlight_primary_pane_t1

0x3e5b,	// (0x000456f8) link_highlight_primary_small_pane_g1

0x3e63,	// (0x00045700) link_highlight_primary_small_pane_t1

0x3e72,	// (0x0004570f) link_highlight_secondary_pane_g1

0x3e7a,	// (0x00045717) link_highlight_secondary_pane_t1

0x535d,	// (0x00046bfa) link_highlight_title_pane_g1

0x5365,	// (0x00046c02) link_highlight_title_pane_t1

0x5346,	// (0x00046be3) link_highlight_digital_pane_g1

0x534e,	// (0x00046beb) link_highlight_digital_pane_t1

0x520e,	// (0x00046aab) copy_highlight_primary_pane_g1

0x5225,	// (0x00046ac2) copy_highlight_primary_pane_t1

0x520e,	// (0x00046aab) copy_highlight_primary_small_pane_g1

0x5216,	// (0x00046ab3) copy_highlight_primary_small_pane_t1

0x3e89,	// (0x00045726) copy_highlight_secondary_pane_g1

0x3e91,	// (0x0004572e) copy_highlight_secondary_pane_t1

0x51f7,	// (0x00046a94) copy_highlight_title_pane_g1

0x51ff,	// (0x00046a9c) copy_highlight_title_pane_t1

0x520e,	// (0x00046aab) copy_highlight_digital_pane_g1

0x651f,	// (0x00047dbc) copy_highlight_digital_pane_t1

0x6473,	// (0x00047d10) graphic_text_primary_pane_g1

0x6503,	// (0x00047da0) graphic_text_primary_pane_t1

0x6511,	// (0x00047dae) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x0005127c) graphic_text_primary_pane_t

0x64df,	// (0x00047d7c) graphic_text_primary_small_pane_g1

0x64e7,	// (0x00047d84) graphic_text_primary_small_pane_t1

0x64f5,	// (0x00047d92) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x00051277) graphic_text_primary_small_pane_t

0x64bb,	// (0x00047d58) graphic_text_secondary_pane_g1

0x64c3,	// (0x00047d60) graphic_text_secondary_pane_t1

0x64d1,	// (0x00047d6e) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x00051272) graphic_text_secondary_pane_t

0x6497,	// (0x00047d34) graphic_text_title_pane_g1

0x649f,	// (0x00047d3c) graphic_text_title_pane_t1

0x64ad,	// (0x00047d4a) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x0005126d) graphic_text_title_pane_t

0x6473,	// (0x00047d10) graphic_text_digital_pane_g1

0x647b,	// (0x00047d18) graphic_text_digital_pane_t1

0x6489,	// (0x00047d26) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x00051268) graphic_text_digital_pane_t

0x2805,	// (0x000440a2) navi_icon_pane_srt_ParamLimits

0x2805,	// (0x000440a2) navi_icon_pane_srt

0xd9a9,	// (0x0004f246) navi_midp_pane_srt

0xd9a9,	// (0x0004f246) navi_navi_pane_srt

0x2805,	// (0x000440a2) navi_text_pane_srt_ParamLimits

0x2805,	// (0x000440a2) navi_text_pane_srt

0x643e,	// (0x00047cdb) navi_navi_icon_text_pane_srt

0x6446,	// (0x00047ce3) navi_navi_pane_srt_g1_ParamLimits

0x6446,	// (0x00047ce3) navi_navi_pane_srt_g1

0x6458,	// (0x00047cf5) navi_navi_pane_srt_g2_ParamLimits

0x6458,	// (0x00047cf5) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x00051263) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x00051263) navi_navi_pane_srt_g

0x646a,	// (0x00047d07) navi_navi_tabs_pane_srt

0x643e,	// (0x00047cdb) navi_navi_text_pane_srt

0x643e,	// (0x00047cdb) navi_navi_volume_pane_srt

0x642f,	// (0x00047ccc) navi_navi_text_pane_srt_t1

0x1960,	// (0x000431fd) navi_navi_volume_pane_srt_g1

0x1968,	// (0x00043205) volume_small_pane_srt_ParamLimits

0x1968,	// (0x00043205) volume_small_pane_srt

0x1350,	// (0x00042bed) volume_small_pane_srt_g1_ParamLimits

0x1350,	// (0x00042bed) volume_small_pane_srt_g1

0x1360,	// (0x00042bfd) volume_small_pane_srt_g2_ParamLimits

0x1360,	// (0x00042bfd) volume_small_pane_srt_g2

0x1371,	// (0x00042c0e) volume_small_pane_srt_g3_ParamLimits

0x1371,	// (0x00042c0e) volume_small_pane_srt_g3

0x1382,	// (0x00042c1f) volume_small_pane_srt_g4_ParamLimits

0x1382,	// (0x00042c1f) volume_small_pane_srt_g4

0x1393,	// (0x00042c30) volume_small_pane_srt_g5_ParamLimits

0x1393,	// (0x00042c30) volume_small_pane_srt_g5

0x13a4,	// (0x00042c41) volume_small_pane_srt_g6_ParamLimits

0x13a4,	// (0x00042c41) volume_small_pane_srt_g6

0x13b5,	// (0x00042c52) volume_small_pane_srt_g7_ParamLimits

0x13b5,	// (0x00042c52) volume_small_pane_srt_g7

0x13c6,	// (0x00042c63) volume_small_pane_srt_g8_ParamLimits

0x13c6,	// (0x00042c63) volume_small_pane_srt_g8

0x13d7,	// (0x00042c74) volume_small_pane_srt_g9_ParamLimits

0x13d7,	// (0x00042c74) volume_small_pane_srt_g9

0x13e8,	// (0x00042c85) volume_small_pane_srt_g10_ParamLimits

0x13e8,	// (0x00042c85) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x00051017) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x00051017) volume_small_pane_srt_g

0x2bec,	// (0x00044489) query_popup_data_pane_cp2

0x6415,	// (0x00047cb2) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6415,	// (0x00047cb2) navi_navi_icon_text_pane_srt_t1

0x5496,	// (0x00046d33) navi_tabs_2_long_pane_srt

0x5496,	// (0x00046d33) navi_tabs_2_pane_srt

0x5496,	// (0x00046d33) navi_tabs_3_long_pane_srt

0x5496,	// (0x00046d33) navi_tabs_3_pane_srt

0x5496,	// (0x00046d33) navi_tabs_4_pane_srt

0x1940,	// (0x000431dd) tabs_2_active_pane_srt_ParamLimits

0x1940,	// (0x000431dd) tabs_2_active_pane_srt

0x1950,	// (0x000431ed) tabs_2_passive_pane_srt_ParamLimits

0x1950,	// (0x000431ed) tabs_2_passive_pane_srt

0x4ca2,	// (0x0004653f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4ca2,	// (0x0004653f) bg_passive_tab_pane_cp1_srt

0x63e1,	// (0x00047c7e) bg_passive_tab_pane_g1_cp1_srt

0x3933,	// (0x000451d0) bg_passive_tab_pane_g2_cp1_srt

0x63ea,	// (0x00047c87) bg_passive_tab_pane_g3_cp1_srt

0x2a81,	// (0x0004431e) bg_active_tab_pane_cp1_srt_ParamLimits

0x2a81,	// (0x0004431e) bg_active_tab_pane_cp1_srt

0x63f3,	// (0x00047c90) tabs_2_active_pane_srt_g1

0xdb39,	// (0x0004f3d6) tabs_2_active_pane_srt_t1_ParamLimits

0xdb39,	// (0x0004f3d6) tabs_2_active_pane_srt_t1

0x63e1,	// (0x00047c7e) bg_active_tab_pane_g1_cp1_srt

0x3933,	// (0x000451d0) bg_active_tab_pane_g2_cp1_srt

0x63ea,	// (0x00047c87) bg_active_tab_pane_g3_cp1_srt

0x190d,	// (0x000431aa) tabs_3_active_pane_srt_ParamLimits

0x190d,	// (0x000431aa) tabs_3_active_pane_srt

0x191e,	// (0x000431bb) tabs_3_passive_pane_cp_srt_ParamLimits

0x191e,	// (0x000431bb) tabs_3_passive_pane_cp_srt

0x192f,	// (0x000431cc) tabs_3_passive_pane_srt_ParamLimits

0x192f,	// (0x000431cc) tabs_3_passive_pane_srt

0x4ca2,	// (0x0004653f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4ca2,	// (0x0004653f) bg_passive_tab_pane_cp2_srt

0x3ea0,	// (0x0004573d) bg_passive_tab_pane_g1_cp2_srt

0x3933,	// (0x000451d0) bg_passive_tab_pane_g2_cp2_srt

0x3ea9,	// (0x00045746) bg_passive_tab_pane_g3_cp2_srt

0x2a81,	// (0x0004431e) bg_active_tab_pane_cp2_srt_ParamLimits

0x2a81,	// (0x0004431e) bg_active_tab_pane_cp2_srt

0x63c7,	// (0x00047c64) tabs_3_active_pane_srt_g1

0xdb23,	// (0x0004f3c0) tabs_3_active_pane_srt_t1_ParamLimits

0xdb23,	// (0x0004f3c0) tabs_3_active_pane_srt_t1

0x3ea0,	// (0x0004573d) bg_active_tab_pane_g1_cp2_srt

0x3933,	// (0x000451d0) bg_active_tab_pane_g2_cp2_srt

0x3ea9,	// (0x00045746) bg_active_tab_pane_g3_cp2_srt

0x18c5,	// (0x00043162) tabs_4_active_pane_srt_ParamLimits

0x18c5,	// (0x00043162) tabs_4_active_pane_srt

0x18d7,	// (0x00043174) tabs_4_passive_pane_cp2_srt_ParamLimits

0x18d7,	// (0x00043174) tabs_4_passive_pane_cp2_srt

0x3ffe,	// (0x0004589b) aid_size_cell_toolbar

0x5fe9,	// (0x00047886) main_idle_act_pane_ParamLimits

0x422d,	// (0x00045aca) popup_large_graphic_colour_window_ParamLimits

0xd172,	// (0x0004ea0f) popup_toolbar_window_ParamLimits

0xd172,	// (0x0004ea0f) popup_toolbar_window

0x61e1,	// (0x00047a7e) list_single_graphic_2heading_pane_ParamLimits

0x61e1,	// (0x00047a7e) list_single_graphic_2heading_pane

0x343f,	// (0x00044cdc) aid_size_cell_apps_grid_lsc_pane

0x3451,	// (0x00044cee) aid_size_cell_apps_grid_prt_pane

0x4068,	// (0x00045905) bg_wml_button_pane_cp1_ParamLimits

0x4068,	// (0x00045905) bg_wml_button_pane_cp1

0xd64c,	// (0x0004eee9) form_midp_field_text_pane_t1_ParamLimits

0x4ca2,	// (0x0004653f) input_focus_pane_cp050_ParamLimits

0x4eb9,	// (0x00046756) list_midp_form_text_pane_ParamLimits

0x4e6b,	// (0x00046708) input_focus_pane_cp051_ParamLimits

0x4e7f,	// (0x0004671c) list_midp_choice_pane_ParamLimits

0xd603,	// (0x0004eea0) list_single_2graphic_pane_cp3_ParamLimits

0xd603,	// (0x0004eea0) list_single_2graphic_pane_cp3

0x7075,	// (0x00048912) list_single_midp_graphic_pane_ParamLimits

0x7075,	// (0x00048912) list_single_midp_graphic_pane

0x0447,	// (0x00041ce4) list_single_graphic_2heading_pane_g1_ParamLimits

0x0447,	// (0x00041ce4) list_single_graphic_2heading_pane_g1

0x0453,	// (0x00041cf0) list_single_graphic_2heading_pane_g4_ParamLimits

0x0453,	// (0x00041cf0) list_single_graphic_2heading_pane_g4

0x045f,	// (0x00041cfc) list_single_graphic_2heading_pane_g5_ParamLimits

0x045f,	// (0x00041cfc) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0005106a) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0005106a) list_single_graphic_2heading_pane_g

0x046b,	// (0x00041d08) list_single_graphic_2heading_pane_t1_ParamLimits

0x046b,	// (0x00041d08) list_single_graphic_2heading_pane_t1

0x047f,	// (0x00041d1c) list_single_graphic_2heading_pane_t2_ParamLimits

0x047f,	// (0x00041d1c) list_single_graphic_2heading_pane_t2

0x049b,	// (0x00041d38) list_single_graphic_2heading_pane_t3_ParamLimits

0x049b,	// (0x00041d38) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x00051071) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x00051071) list_single_graphic_2heading_pane_t

0x4aee,	// (0x0004638b) bg_popup_sub_pane_cp2

0x4b18,	// (0x000463b5) grid_toobar_pane

0x1552,	// (0x00042def) cell_toolbar_pane_ParamLimits

0x1552,	// (0x00042def) cell_toolbar_pane

0x4b54,	// (0x000463f1) cell_toolbar_pane_g1_ParamLimits

0x4b54,	// (0x000463f1) cell_toolbar_pane_g1

0x4b68,	// (0x00046405) cell_toolbar_pane_g2_ParamLimits

0x4b68,	// (0x00046405) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0005107f) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0005107f) cell_toolbar_pane_g

0x4b8a,	// (0x00046427) grid_highlight_pane_cp2_ParamLimits

0x4b8a,	// (0x00046427) grid_highlight_pane_cp2

0x4ba4,	// (0x00046441) toolbar_button_pane

0x4bb0,	// (0x0004644d) toolbar_button_pane_g1

0x4bb8,	// (0x00046455) toolbar_button_pane_g2

0x4bc0,	// (0x0004645d) toolbar_button_pane_g3

0x4bc8,	// (0x00046465) toolbar_button_pane_g4

0x4bd0,	// (0x0004646d) toolbar_button_pane_g5

0x4bd8,	// (0x00046475) toolbar_button_pane_g6

0x4be0,	// (0x0004647d) toolbar_button_pane_g7

0x4be8,	// (0x00046485) toolbar_button_pane_g8

0x4bf0,	// (0x0004648d) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x00051084) toolbar_button_pane_g

0x1596,	// (0x00042e33) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1596,	// (0x00042e33) list_single_2graphic_pane_g1_cp3

0xc22d,	// (0x0004daca) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc22d,	// (0x0004daca) list_single_2graphic_pane_g2_cp3

0x3b14,	// (0x000453b1) list_single_2graphic_pane_g3_cp3

0x15b3,	// (0x00042e50) list_single_2graphic_pane_g4_cp3_ParamLimits

0x15b3,	// (0x00042e50) list_single_2graphic_pane_g4_cp3

0x15bf,	// (0x00042e5c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x15bf,	// (0x00042e5c) list_single_2graphic_pane_t1_cp3

0x3b08,	// (0x000453a5) list_single_midp_graphic_pane_g2_ParamLimits

0x3b08,	// (0x000453a5) list_single_midp_graphic_pane_g2

0x042f,	// (0x00041ccc) aid_zoom_text_primary

0x0437,	// (0x00041cd4) aid_zoom_text_secondary

0x3f5d,	// (0x000457fa) status_small_pane_g7_ParamLimits

0x3f5d,	// (0x000457fa) status_small_pane_g7

0x3f80,	// (0x0004581d) status_small_pane_t1_ParamLimits

0xba8d,	// (0x0004d32a) title_pane_g2

0x0003,

0xf56a,	// (0x00050e07) title_pane_g

0xbd25,	// (0x0004d5c2) aid_size_cell_colour_1_pane_ParamLimits

0xbd25,	// (0x0004d5c2) aid_size_cell_colour_1_pane

0xbd39,	// (0x0004d5d6) aid_size_cell_colour_2_pane_ParamLimits

0xbd39,	// (0x0004d5d6) aid_size_cell_colour_2_pane

0xbd4d,	// (0x0004d5ea) aid_size_cell_colour_3_pane_ParamLimits

0xbd4d,	// (0x0004d5ea) aid_size_cell_colour_3_pane

0xbd61,	// (0x0004d5fe) aid_size_cell_colour_4_pane_ParamLimits

0xbd61,	// (0x0004d5fe) aid_size_cell_colour_4_pane

0x0f87,	// (0x00042824) title_pane_stacon_g1_ParamLimits

0x0f87,	// (0x00042824) title_pane_stacon_g1

0x527c,	// (0x00046b19) popup_note_wait_window_g3_ParamLimits

0x527c,	// (0x00046b19) popup_note_wait_window_g3

0x52f3,	// (0x00046b90) popup_note_wait_window_t5_ParamLimits

0x52f3,	// (0x00046b90) popup_note_wait_window_t5

0xd9a9,	// (0x0004f246) main_feb_china_hwr_fs_writing_pane

0xcb0d,	// (0x0004e3aa) popup_feb_china_hwr_fs_window_ParamLimits

0xcb0d,	// (0x0004e3aa) popup_feb_china_hwr_fs_window

0xc23e,	// (0x0004dadb) aid_size_cell_hwr_fs_ParamLimits

0xc23e,	// (0x0004dadb) aid_size_cell_hwr_fs

0x4ca2,	// (0x0004653f) bg_popup_sub_pane_cp3_ParamLimits

0x4ca2,	// (0x0004653f) bg_popup_sub_pane_cp3

0xc253,	// (0x0004daf0) grid_hwr_fs_pane_ParamLimits

0xc253,	// (0x0004daf0) grid_hwr_fs_pane

0x161d,	// (0x00042eba) linegrid_hwr_fs_pane_ParamLimits

0x161d,	// (0x00042eba) linegrid_hwr_fs_pane

0xc26b,	// (0x0004db08) cell_hwr_fs_pane_ParamLimits

0xc26b,	// (0x0004db08) cell_hwr_fs_pane

0x4cae,	// (0x0004654b) linegrid_hwr_fs_pane_g1_ParamLimits

0x4cae,	// (0x0004654b) linegrid_hwr_fs_pane_g1

0xd5d7,	// (0x0004ee74) linegrid_hwr_fs_pane_g2_ParamLimits

0xd5d7,	// (0x0004ee74) linegrid_hwr_fs_pane_g2

0x4ccc,	// (0x00046569) linegrid_hwr_fs_pane_g3_ParamLimits

0x4ccc,	// (0x00046569) linegrid_hwr_fs_pane_g3

0x1651,	// (0x00042eee) linegrid_hwr_fs_pane_g4_ParamLimits

0x1651,	// (0x00042eee) linegrid_hwr_fs_pane_g4

0x166f,	// (0x00042f0c) linegrid_hwr_fs_pane_g5_ParamLimits

0x166f,	// (0x00042f0c) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x000510aa) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x000510aa) linegrid_hwr_fs_pane_g

0x4cd8,	// (0x00046575) cell_hwr_fs_pane_g1_ParamLimits

0x4cd8,	// (0x00046575) cell_hwr_fs_pane_g1

0x4a25,	// (0x000462c2) cell_hwr_fs_pane_g2_ParamLimits

0x4a25,	// (0x000462c2) cell_hwr_fs_pane_g2

0xd5e9,	// (0x0004ee86) cell_hwr_fs_pane_g3_ParamLimits

0xd5e9,	// (0x0004ee86) cell_hwr_fs_pane_g3

0xd5f6,	// (0x0004ee93) cell_hwr_fs_pane_g4_ParamLimits

0xd5f6,	// (0x0004ee93) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x000510b5) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x000510b5) cell_hwr_fs_pane_g

0xc291,	// (0x0004db2e) cell_hwr_fs_pane_t1

0xd9a9,	// (0x0004f246) grid_highlight_pane_cp6

0xd9a9,	// (0x0004f246) main_idle_act2_pane

0x31f5,	// (0x00044a92) aid_inside_area_popup_secondary

0xd6d0,	// (0x0004ef6d) aid_inside_area_window_primary_ParamLimits

0xd6d0,	// (0x0004ef6d) aid_inside_area_window_primary

0x652e,	// (0x00047dcb) ai2_news_ticker_pane

0x6536,	// (0x00047dd3) aid_size_cell_ai1_link_ParamLimits

0x6536,	// (0x00047dd3) aid_size_cell_ai1_link

0x6550,	// (0x00047ded) popup_ai2_data_window_ParamLimits

0x6550,	// (0x00047ded) popup_ai2_data_window

0x656e,	// (0x00047e0b) popup_ai2_link_window_ParamLimits

0x656e,	// (0x00047e0b) popup_ai2_link_window

0x4ca2,	// (0x0004653f) bg_popup_sub_pane_cp4_ParamLimits

0x4ca2,	// (0x0004653f) bg_popup_sub_pane_cp4

0x6584,	// (0x00047e21) grid_ai2_link_pane_ParamLimits

0x6584,	// (0x00047e21) grid_ai2_link_pane

0x659b,	// (0x00047e38) popup_ai2_link_window_g1_ParamLimits

0x659b,	// (0x00047e38) popup_ai2_link_window_g1

0x65a7,	// (0x00047e44) popup_ai2_link_window_g2_ParamLimits

0x65a7,	// (0x00047e44) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x00051281) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x00051281) popup_ai2_link_window_g

0x65b8,	// (0x00047e55) ai2_mp_button_pane

0x65c0,	// (0x00047e5d) ai2_mp_volume_pane

0x4e6b,	// (0x00046708) bg_popup_sub_pane_cp5_ParamLimits

0x4e6b,	// (0x00046708) bg_popup_sub_pane_cp5

0x65c8,	// (0x00047e65) heading_ai2_gene_pane_ParamLimits

0x65c8,	// (0x00047e65) heading_ai2_gene_pane

0x65d4,	// (0x00047e71) list_ai2_gene_pane_ParamLimits

0x65d4,	// (0x00047e71) list_ai2_gene_pane

0x661c,	// (0x00047eb9) cell_ai2_link_pane_ParamLimits

0x661c,	// (0x00047eb9) cell_ai2_link_pane

0x6632,	// (0x00047ecf) cell_ai2_link_pane_g1

0xd9a9,	// (0x0004f246) grid_highlight_pane_cp7

0x197d,	// (0x0004321a) ai2_mp_volume_pane_g1

0x6747,	// (0x00047fe4) ai2_mp_volume_pane_g2

0x667a,	// (0x00047f17) list_ai2_gene_pane_t1

0x674f,	// (0x00047fec) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x0005129a) ai2_mp_volume_pane_g

0x1985,	// (0x00043222) volume_small_pane_cp3

0x6757,	// (0x00047ff4) aid_size_cell_ai2_button

0x675f,	// (0x00047ffc) grid_ai2_button_pane

0x6768,	// (0x00048005) cell_ai2_button_pane_ParamLimits

0x6768,	// (0x00048005) cell_ai2_button_pane

0xd99f,	// (0x0004f23c) cell_ai2_button_pane_g1

0xd9a9,	// (0x0004f246) grid_highlight_pane_cp8

0x6707,	// (0x00047fa4) ai2_gene_pane_t1_ParamLimits

0x6707,	// (0x00047fa4) ai2_gene_pane_t1

0xca99,	// (0x0004e336) aid_height_parent_landscape

0xd8a0,	// (0x0004f13d) aid_height_set_list

0x5fe9,	// (0x00047886) aid_size_parent

0x634f,	// (0x00047bec) aid_size_cell_graphic_pane_ParamLimits

0x65e4,	// (0x00047e81) popup_ai2_data_window_g1_ParamLimits

0x65e4,	// (0x00047e81) popup_ai2_data_window_g1

0x65f0,	// (0x00047e8d) ai2_news_ticker_pane_g1

0x65f8,	// (0x00047e95) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x00051286) ai2_news_ticker_pane_g

0x6600,	// (0x00047e9d) ai2_news_ticker_pane_t1

0x660e,	// (0x00047eab) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x0005128b) ai2_news_ticker_pane_t

0x663b,	// (0x00047ed8) heading_ai2_gene_pane_g1

0x6643,	// (0x00047ee0) heading_ai2_gene_pane_t1_ParamLimits

0x6643,	// (0x00047ee0) heading_ai2_gene_pane_t1

0x6658,	// (0x00047ef5) list_highlight_pane_cp6

0x6660,	// (0x00047efd) ai2_gene_pane_ParamLimits

0x6660,	// (0x00047efd) ai2_gene_pane

0x6688,	// (0x00047f25) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x00051290) list_ai2_gene_pane_t

0x6696,	// (0x00047f33) list_highlight_pane_cp8_ParamLimits

0x6696,	// (0x00047f33) list_highlight_pane_cp8

0x66e9,	// (0x00047f86) ai2_gene_pane_g1_ParamLimits

0x66e9,	// (0x00047f86) ai2_gene_pane_g1

0x66fb,	// (0x00047f98) ai2_gene_pane_g2_ParamLimits

0x66fb,	// (0x00047f98) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x00051295) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x00051295) ai2_gene_pane_g

0x3022,	// (0x000448bf) scroll_pane_cp12

0xc1d0,	// (0x0004da6d) control_pane_t3_ParamLimits

0xc1d0,	// (0x0004da6d) control_pane_t3

0x3f71,	// (0x0004580e) status_small_pane_g8_ParamLimits

0x3f71,	// (0x0004580e) status_small_pane_g8

0xcbaf,	// (0x0004e44c) popup_find_window_ParamLimits

0xce5c,	// (0x0004e6f9) popup_note_image_window_ParamLimits

0x04b3,	// (0x00041d50) list_double2_graphic_pane_vc_g1_ParamLimits

0x04b3,	// (0x00041d50) list_double2_graphic_pane_vc_g1

0x3c5b,	// (0x000454f8) list_double2_graphic_pane_vc_g2_ParamLimits

0x3c5b,	// (0x000454f8) list_double2_graphic_pane_vc_g2

0x1582,	// (0x00042e1f) list_double2_graphic_pane_vc_g3_ParamLimits

0x1582,	// (0x00042e1f) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x00051078) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x00051078) list_double2_graphic_pane_vc_g

0x04bf,	// (0x00041d5c) list_double2_graphic_pane_vc_t1_ParamLimits

0x04bf,	// (0x00041d5c) list_double2_graphic_pane_vc_t1

0x3c5b,	// (0x000454f8) list_single_heading_pane_vc_g1_ParamLimits

0x3c5b,	// (0x000454f8) list_single_heading_pane_vc_g1

0x1582,	// (0x00042e1f) list_single_heading_pane_vc_g2_ParamLimits

0x1582,	// (0x00042e1f) list_single_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x00050e8b) list_single_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x00050e8b) list_single_heading_pane_vc_g

0x04d5,	// (0x00041d72) list_single_heading_pane_vc_t1_ParamLimits

0x04d5,	// (0x00041d72) list_single_heading_pane_vc_t1

0x04eb,	// (0x00041d88) list_single_heading_pane_vc_t2_ParamLimits

0x04eb,	// (0x00041d88) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x00051099) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x00051099) list_single_heading_pane_vc_t

0x4bf8,	// (0x00046495) list_setting_number_pane_vc_g1_ParamLimits

0x4bf8,	// (0x00046495) list_setting_number_pane_vc_g1

0x4c04,	// (0x000464a1) list_setting_number_pane_vc_g2_ParamLimits

0x4c04,	// (0x000464a1) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0005109e) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0005109e) list_setting_number_pane_vc_g

0x4c10,	// (0x000464ad) list_setting_number_pane_vc_t1_ParamLimits

0x4c10,	// (0x000464ad) list_setting_number_pane_vc_t1

0x4c24,	// (0x000464c1) list_setting_number_pane_vc_t2_ParamLimits

0x4c24,	// (0x000464c1) list_setting_number_pane_vc_t2

0x4c40,	// (0x000464dd) list_setting_number_pane_vc_t3_ParamLimits

0x4c40,	// (0x000464dd) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x000510a3) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x000510a3) list_setting_number_pane_vc_t

0x4c68,	// (0x00046505) set_value_pane_vc_ParamLimits

0x4c68,	// (0x00046505) set_value_pane_vc

0x61e1,	// (0x00047a7e) list_double2_graphic_pane_vc_ParamLimits

0x61e1,	// (0x00047a7e) list_double2_graphic_pane_vc

0x61e1,	// (0x00047a7e) list_double2_large_graphic_pane_vc_ParamLimits

0x61e1,	// (0x00047a7e) list_double2_large_graphic_pane_vc

0x61e1,	// (0x00047a7e) list_double2_pane_vc_ParamLimits

0x61e1,	// (0x00047a7e) list_double2_pane_vc

0x61e1,	// (0x00047a7e) list_double_graphic_heading_pane_vc_ParamLimits

0x61e1,	// (0x00047a7e) list_double_graphic_heading_pane_vc

0x61e1,	// (0x00047a7e) list_double_graphic_pane_vc_ParamLimits

0x61e1,	// (0x00047a7e) list_double_graphic_pane_vc

0x61e1,	// (0x00047a7e) list_double_heading_pane_vc_ParamLimits

0x61e1,	// (0x00047a7e) list_double_heading_pane_vc

0x61e1,	// (0x00047a7e) list_double_large_graphic_pane_vc_ParamLimits

0x61e1,	// (0x00047a7e) list_double_large_graphic_pane_vc

0x61e1,	// (0x00047a7e) list_double_number_pane_vc_ParamLimits

0x61e1,	// (0x00047a7e) list_double_number_pane_vc

0x61e1,	// (0x00047a7e) list_double_pane_vc_ParamLimits

0x61e1,	// (0x00047a7e) list_double_pane_vc

0x61e1,	// (0x00047a7e) list_double_time_pane_vc_ParamLimits

0x61e1,	// (0x00047a7e) list_double_time_pane_vc

0x61e1,	// (0x00047a7e) list_setting_number_pane_vc_ParamLimits

0x61e1,	// (0x00047a7e) list_setting_number_pane_vc

0x61e1,	// (0x00047a7e) list_setting_pane_vc_ParamLimits

0x61e1,	// (0x00047a7e) list_setting_pane_vc

0x61e1,	// (0x00047a7e) list_single_graphic_heading_pane_vc_ParamLimits

0x61e1,	// (0x00047a7e) list_single_graphic_heading_pane_vc

0x61e1,	// (0x00047a7e) list_single_heading_pane_vc_ParamLimits

0x61e1,	// (0x00047a7e) list_single_heading_pane_vc

0x61e1,	// (0x00047a7e) list_single_number_heading_pane_vc_ParamLimits

0x61e1,	// (0x00047a7e) list_single_number_heading_pane_vc

0x04b3,	// (0x00041d50) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x04b3,	// (0x00041d50) list_double_graphic_heading_pane_vc_g1

0x198e,	// (0x0004322b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x198e,	// (0x0004322b) list_double_graphic_heading_pane_vc_g2

0x199a,	// (0x00043237) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x199a,	// (0x00043237) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x000512a1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x000512a1) list_double_graphic_heading_pane_vc_g

0x05a1,	// (0x00041e3e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x05a1,	// (0x00041e3e) list_double_graphic_heading_pane_vc_t1

0x04d5,	// (0x00041d72) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x04d5,	// (0x00041d72) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x000512a8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x000512a8) list_double_graphic_heading_pane_vc_t

0x4bf8,	// (0x00046495) list_setting_pane_vc_g1_ParamLimits

0x4bf8,	// (0x00046495) list_setting_pane_vc_g1

0x4c04,	// (0x000464a1) list_setting_pane_vc_g2_ParamLimits

0x4c04,	// (0x000464a1) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0005109e) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0005109e) list_setting_pane_vc_g

0x69a4,	// (0x00048241) list_setting_pane_vc_t1_ParamLimits

0x69a4,	// (0x00048241) list_setting_pane_vc_t1

0x69b8,	// (0x00048255) list_setting_pane_vc_t2_ParamLimits

0x69b8,	// (0x00048255) list_setting_pane_vc_t2

0x0001,

0xfa4e,	// (0x000512eb) list_setting_pane_vc_t_ParamLimits

0xfa4e,	// (0x000512eb) list_setting_pane_vc_t

0x4c68,	// (0x00046505) set_value_pane_cp_vc_ParamLimits

0x4c68,	// (0x00046505) set_value_pane_cp_vc

0x3c5b,	// (0x000454f8) list_single_number_heading_pane_vc_g1_ParamLimits

0x3c5b,	// (0x000454f8) list_single_number_heading_pane_vc_g1

0x1582,	// (0x00042e1f) list_single_number_heading_pane_vc_g2_ParamLimits

0x1582,	// (0x00042e1f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x00050e8b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x00050e8b) list_single_number_heading_pane_vc_g

0x04d5,	// (0x00041d72) list_single_number_heading_pane_vc_t1_ParamLimits

0x04d5,	// (0x00041d72) list_single_number_heading_pane_vc_t1

0x05b5,	// (0x00041e52) list_single_number_heading_pane_vc_t2_ParamLimits

0x05b5,	// (0x00041e52) list_single_number_heading_pane_vc_t2

0x05c9,	// (0x00041e66) list_single_number_heading_pane_vc_t3_ParamLimits

0x05c9,	// (0x00041e66) list_single_number_heading_pane_vc_t3

0x0002,

0xfa53,	// (0x000512f0) list_single_number_heading_pane_vc_t_ParamLimits

0xfa53,	// (0x000512f0) list_single_number_heading_pane_vc_t

0x04b3,	// (0x00041d50) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x04b3,	// (0x00041d50) list_single_graphic_heading_pane_vc_g1

0x3c5b,	// (0x000454f8) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3c5b,	// (0x000454f8) list_single_graphic_heading_pane_vc_g4

0x1582,	// (0x00042e1f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1582,	// (0x00042e1f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x00051078) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00051078) list_single_graphic_heading_pane_vc_g

0x04d5,	// (0x00041d72) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x04d5,	// (0x00041d72) list_single_graphic_heading_pane_vc_t1

0x05db,	// (0x00041e78) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x05db,	// (0x00041e78) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x000512f7) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x000512f7) list_single_graphic_heading_pane_vc_t

0x3c5b,	// (0x000454f8) list_double2_pane_vc_g1_ParamLimits

0x3c5b,	// (0x000454f8) list_double2_pane_vc_g1

0x1582,	// (0x00042e1f) list_double2_pane_vc_g2_ParamLimits

0x1582,	// (0x00042e1f) list_double2_pane_vc_g2

0x0001,

0xf5ee,	// (0x00050e8b) list_double2_pane_vc_g_ParamLimits

0xf5ee,	// (0x00050e8b) list_double2_pane_vc_g

0x05ef,	// (0x00041e8c) list_double2_pane_vc_t1_ParamLimits

0x05ef,	// (0x00041e8c) list_double2_pane_vc_t1

0x19a6,	// (0x00043243) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x19a6,	// (0x00043243) list_double2_large_graphic_pane_vc_g1

0x3c5b,	// (0x000454f8) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3c5b,	// (0x000454f8) list_double2_large_graphic_pane_vc_g2

0x1582,	// (0x00042e1f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1582,	// (0x00042e1f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x00050ea3) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x00050ea3) list_double2_large_graphic_pane_vc_g

0x0605,	// (0x00041ea2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0605,	// (0x00041ea2) list_double2_large_graphic_pane_vc_t1

0x19b2,	// (0x0004324f) list_double_time_pane_vc_g1_ParamLimits

0x19b2,	// (0x0004324f) list_double_time_pane_vc_g1

0x19be,	// (0x0004325b) list_double_time_pane_vc_g2_ParamLimits

0x19be,	// (0x0004325b) list_double_time_pane_vc_g2

0x0001,

0xfa5f,	// (0x000512fc) list_double_time_pane_vc_g_ParamLimits

0xfa5f,	// (0x000512fc) list_double_time_pane_vc_g

0x061b,	// (0x00041eb8) list_double_time_pane_vc_t1_ParamLimits

0x061b,	// (0x00041eb8) list_double_time_pane_vc_t1

0x0634,	// (0x00041ed1) list_double_time_pane_vc_t2_ParamLimits

0x0634,	// (0x00041ed1) list_double_time_pane_vc_t2

0x0674,	// (0x00041f11) list_double_time_pane_vc_t3_ParamLimits

0x0674,	// (0x00041f11) list_double_time_pane_vc_t3

0x068c,	// (0x00041f29) list_double_time_pane_vc_t4_ParamLimits

0x068c,	// (0x00041f29) list_double_time_pane_vc_t4

0x0003,

0xfa64,	// (0x00051301) list_double_time_pane_vc_t_ParamLimits

0xfa64,	// (0x00051301) list_double_time_pane_vc_t

0x3c5b,	// (0x000454f8) list_double_pane_vc_g1_ParamLimits

0x3c5b,	// (0x000454f8) list_double_pane_vc_g1

0x1582,	// (0x00042e1f) list_double_pane_vc_g2_ParamLimits

0x1582,	// (0x00042e1f) list_double_pane_vc_g2

0x0001,

0xf5ee,	// (0x00050e8b) list_double_pane_vc_g_ParamLimits

0xf5ee,	// (0x00050e8b) list_double_pane_vc_g

0x06a0,	// (0x00041f3d) list_double_pane_vc_t1_ParamLimits

0x06a0,	// (0x00041f3d) list_double_pane_vc_t1

0x06b2,	// (0x00041f4f) list_double_pane_vc_t2_ParamLimits

0x06b2,	// (0x00041f4f) list_double_pane_vc_t2

0x0001,

0xfa6d,	// (0x0005130a) list_double_pane_vc_t_ParamLimits

0xfa6d,	// (0x0005130a) list_double_pane_vc_t

0x3c5b,	// (0x000454f8) list_double_number_pane_vc_g1_ParamLimits

0x3c5b,	// (0x000454f8) list_double_number_pane_vc_g1

0x1582,	// (0x00042e1f) list_double_number_pane_vc_g2_ParamLimits

0x1582,	// (0x00042e1f) list_double_number_pane_vc_g2

0x0001,

0xf5ee,	// (0x00050e8b) list_double_number_pane_vc_g_ParamLimits

0xf5ee,	// (0x00050e8b) list_double_number_pane_vc_g

0x06ca,	// (0x00041f67) list_double_number_pane_vc_t1_ParamLimits

0x06ca,	// (0x00041f67) list_double_number_pane_vc_t1

0x06de,	// (0x00041f7b) list_double_number_pane_vc_t2_ParamLimits

0x06de,	// (0x00041f7b) list_double_number_pane_vc_t2

0x06b2,	// (0x00041f4f) list_double_number_pane_vc_t3_ParamLimits

0x06b2,	// (0x00041f4f) list_double_number_pane_vc_t3

0x0002,

0xfa72,	// (0x0005130f) list_double_number_pane_vc_t_ParamLimits

0xfa72,	// (0x0005130f) list_double_number_pane_vc_t

0x19ca,	// (0x00043267) list_double_large_graphic_pane_vc_g1_ParamLimits

0x19ca,	// (0x00043267) list_double_large_graphic_pane_vc_g1

0x19d6,	// (0x00043273) list_double_large_graphic_pane_vc_g2_ParamLimits

0x19d6,	// (0x00043273) list_double_large_graphic_pane_vc_g2

0x1582,	// (0x00042e1f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1582,	// (0x00042e1f) list_double_large_graphic_pane_vc_g3

0x06f0,	// (0x00041f8d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x06f0,	// (0x00041f8d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa79,	// (0x00051316) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa79,	// (0x00051316) list_double_large_graphic_pane_vc_g

0x06fc,	// (0x00041f99) list_double_large_graphic_pane_vc_t1_ParamLimits

0x06fc,	// (0x00041f99) list_double_large_graphic_pane_vc_t1

0x070e,	// (0x00041fab) list_double_large_graphic_pane_vc_t2_ParamLimits

0x070e,	// (0x00041fab) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa82,	// (0x0005131f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa82,	// (0x0005131f) list_double_large_graphic_pane_vc_t

0x198e,	// (0x0004322b) list_double_heading_pane_vc_g1_ParamLimits

0x198e,	// (0x0004322b) list_double_heading_pane_vc_g1

0x199a,	// (0x00043237) list_double_heading_pane_vc_g2_ParamLimits

0x199a,	// (0x00043237) list_double_heading_pane_vc_g2

0x0001,

0xfa87,	// (0x00051324) list_double_heading_pane_vc_g_ParamLimits

0xfa87,	// (0x00051324) list_double_heading_pane_vc_g

0x0727,	// (0x00041fc4) list_double_heading_pane_vc_t1_ParamLimits

0x0727,	// (0x00041fc4) list_double_heading_pane_vc_t1

0x04d5,	// (0x00041d72) list_double_heading_pane_vc_t2_ParamLimits

0x04d5,	// (0x00041d72) list_double_heading_pane_vc_t2

0x0001,

0xfa8c,	// (0x00051329) list_double_heading_pane_vc_t_ParamLimits

0xfa8c,	// (0x00051329) list_double_heading_pane_vc_t

0x04b3,	// (0x00041d50) list_double_graphic_pane_vc_g1_ParamLimits

0x04b3,	// (0x00041d50) list_double_graphic_pane_vc_g1

0x19e5,	// (0x00043282) list_double_graphic_pane_vc_g2_ParamLimits

0x19e5,	// (0x00043282) list_double_graphic_pane_vc_g2

0x19f4,	// (0x00043291) list_double_graphic_pane_vc_g3_ParamLimits

0x19f4,	// (0x00043291) list_double_graphic_pane_vc_g3

0x0002,

0xfa91,	// (0x0005132e) list_double_graphic_pane_vc_g_ParamLimits

0xfa91,	// (0x0005132e) list_double_graphic_pane_vc_g

0x073b,	// (0x00041fd8) list_double_graphic_pane_vc_t1_ParamLimits

0x073b,	// (0x00041fd8) list_double_graphic_pane_vc_t1

0x06b2,	// (0x00041f4f) list_double_graphic_pane_vc_t2_ParamLimits

0x06b2,	// (0x00041f4f) list_double_graphic_pane_vc_t2

0x0001,

0xfa98,	// (0x00051335) list_double_graphic_pane_vc_t_ParamLimits

0xfa98,	// (0x00051335) list_double_graphic_pane_vc_t

0x0a33,	// (0x000422d0) aid_size_cell_fastswap

0xb8d7,	// (0x0004d174) aid_size_cell_touch_ParamLimits

0xb8d7,	// (0x0004d174) aid_size_cell_touch

0x0c9c,	// (0x00042539) popup_fast_swap_wide_window_ParamLimits

0x0c9c,	// (0x00042539) popup_fast_swap_wide_window

0xba26,	// (0x0004d2c3) touch_pane_ParamLimits

0xba26,	// (0x0004d2c3) touch_pane

0x3078,	// (0x00044915) button_value_adjust_pane_cp2

0x017d,	// (0x00041a1a) button_value_adjust_pane_cp4

0x01a5,	// (0x00041a42) form_field_data_pane_cp2

0xb53a,	// (0x0004cdd7) form_field_data_wide_pane_cp2

0x3511,	// (0x00044dae) bg_scroll_pane_ParamLimits

0x10ec,	// (0x00042989) scroll_handle_pane_ParamLimits

0x1100,	// (0x0004299d) scroll_sc2_down_pane_ParamLimits

0x1100,	// (0x0004299d) scroll_sc2_down_pane

0x3542,	// (0x00044ddf) scroll_sc2_up_pane_ParamLimits

0x3542,	// (0x00044ddf) scroll_sc2_up_pane

0xdc7a,	// (0x0004f517) grid_wheel_folder_pane_g1_ParamLimits

0xdc7a,	// (0x0004f517) grid_wheel_folder_pane_g1

0x12e8,	// (0x00042b85) clock_nsta_pane_cp2_ParamLimits

0x12e8,	// (0x00042b85) clock_nsta_pane_cp2

0xc9ae,	// (0x0004e24b) listscroll_midp_pane_ParamLimits

0xc9bf,	// (0x0004e25c) midp_canvas_pane

0x3fec,	// (0x00045889) nsta_clock_indic_pane

0x403a,	// (0x000458d7) listscroll_form_pane_vc

0x4056,	// (0x000458f3) listscroll_set_pane_vc_ParamLimits

0x4056,	// (0x000458f3) listscroll_set_pane_vc

0xd2d1,	// (0x0004eb6e) clock_nsta_pane

0xd2fb,	// (0x0004eb98) indicator_nsta_pane

0x4aee,	// (0x0004638b) bg_popup_sub_pane_cp2_ParamLimits

0x4b02,	// (0x0004639f) find_pane_cp2_ParamLimits

0x4b02,	// (0x0004639f) find_pane_cp2

0x4b18,	// (0x000463b5) grid_toobar_pane_ParamLimits

0x4c76,	// (0x00046513) list_form_gen_pane_vc_ParamLimits

0x4c76,	// (0x00046513) list_form_gen_pane_vc

0x4c8c,	// (0x00046529) scroll_pane_cp8_vc_ParamLimits

0x4c8c,	// (0x00046529) scroll_pane_cp8_vc

0x4d08,	// (0x000465a5) data_form_wide_pane_vc_ParamLimits

0x4d08,	// (0x000465a5) data_form_wide_pane_vc

0x4d14,	// (0x000465b1) form_field_data_wide_pane_vc_g1

0x4d1c,	// (0x000465b9) form_field_data_wide_pane_vc_t1_ParamLimits

0x4d1c,	// (0x000465b9) form_field_data_wide_pane_vc_t1

0x308c,	// (0x00044929) input_focus_pane_cp6_vc_ParamLimits

0x308c,	// (0x00044929) input_focus_pane_cp6_vc

0xd674,	// (0x0004ef11) list_midp_pane_ParamLimits

0x63bb,	// (0x00047c58) scroll_pane_cp16_ParamLimits

0x63bb,	// (0x00047c58) scroll_pane_cp16

0x5050,	// (0x000468ed) button_value_adjust_pane_ParamLimits

0x5050,	// (0x000468ed) button_value_adjust_pane

0xd8b1,	// (0x0004f14e) button_value_adjust_pane_cp6_ParamLimits

0xd8b1,	// (0x0004f14e) button_value_adjust_pane_cp6

0xda19,	// (0x0004f2b6) settings_code_pane_cp_ParamLimits

0xda19,	// (0x0004f2b6) settings_code_pane_cp

0xd99f,	// (0x0004f23c) cell_touch_pane_g1

0xd99f,	// (0x0004f23c) cell_touch_pane_g2

0x0001,

0xf724,	// (0x00050fc1) cell_touch_pane_g

0xdb4f,	// (0x0004f3ec) cell_touch_pane_cp_ParamLimits

0xdb4f,	// (0x0004f3ec) cell_touch_pane_cp

0xdb6b,	// (0x0004f408) cell_touch_pane_ParamLimits

0xdb6b,	// (0x0004f408) cell_touch_pane

0xd99f,	// (0x0004f23c) scroll_sc2_down_pane_g1

0xd99f,	// (0x0004f23c) scroll_sc2_up_pane_g1

0xd9a9,	// (0x0004f246) bg_set_opt_pane_cp4_vc

0x679b,	// (0x00048038) list_set_graphic_pane_vc_g1_ParamLimits

0x679b,	// (0x00048038) list_set_graphic_pane_vc_g1

0x67a7,	// (0x00048044) list_set_graphic_pane_vc_g2_ParamLimits

0x67a7,	// (0x00048044) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x000512ad) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x000512ad) list_set_graphic_pane_vc_g

0x67b3,	// (0x00048050) text_primary_small_cp13_vc_ParamLimits

0x67b3,	// (0x00048050) text_primary_small_cp13_vc

0x67cb,	// (0x00048068) list_set_graphic_pane_vc_ParamLimits

0x67cb,	// (0x00048068) list_set_graphic_pane_vc

0xd9a9,	// (0x0004f246) input_focus_pane_cp2_vc

0xd99f,	// (0x0004f23c) setting_code_pane_vc_g1

0x67df,	// (0x0004807c) setting_code_pane_vc_t1

0x67ed,	// (0x0004808a) set_text_pane_vc_t1_ParamLimits

0x67ed,	// (0x0004808a) set_text_pane_vc_t1

0xd9a9,	// (0x0004f246) input_focus_pane_cp1_vc

0x680b,	// (0x000480a8) list_set_text_pane_vc

0xd99f,	// (0x0004f23c) setting_text_pane_vc_g1

0xd9a9,	// (0x0004f246) bg_set_opt_pane_cp2_vc

0x6815,	// (0x000480b2) setting_slider_graphic_pane_vc_g1

0x681d,	// (0x000480ba) setting_slider_graphic_pane_vc_t1

0x682b,	// (0x000480c8) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x000512b2) setting_slider_graphic_pane_vc_t

0x6839,	// (0x000480d6) slider_set_pane_cp_vc

0x6841,	// (0x000480de) slider_set_pane_vc_g1

0x684a,	// (0x000480e7) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x000512b7) slider_set_pane_vc_g

0x30f3,	// (0x00044990) set_opt_bg_pane_g1_copy1

0x30fb,	// (0x00044998) set_opt_bg_pane_g2_copy1

0x6876,	// (0x00048113) set_opt_bg_pane_g3_copy1

0x310b,	// (0x000449a8) set_opt_bg_pane_g4_copy1

0x3113,	// (0x000449b0) set_opt_bg_pane_g5_copy1

0x311b,	// (0x000449b8) set_opt_bg_pane_g6_copy1

0x6880,	// (0x0004811d) set_opt_bg_pane_g7_copy1

0x688a,	// (0x00048127) set_opt_bg_pane_g8_copy1

0x6894,	// (0x00048131) set_opt_bg_pane_g9_copy1

0xd9a9,	// (0x0004f246) bg_set_opt_pane_cp_vc

0x689e,	// (0x0004813b) setting_slider_pane_vc_t1

0x681d,	// (0x000480ba) setting_slider_pane_vc_t2

0x682b,	// (0x000480c8) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x000512c6) setting_slider_pane_vc_t

0x6839,	// (0x000480d6) slider_set_pane_vc

0x1693,	// (0x00042f30) volume_set_pane_vc_g1

0x169c,	// (0x00042f39) volume_set_pane_vc_g2

0x16a5,	// (0x00042f42) volume_set_pane_vc_g3

0x16ae,	// (0x00042f4b) volume_set_pane_vc_g4

0x16b7,	// (0x00042f54) volume_set_pane_vc_g5

0x16c0,	// (0x00042f5d) volume_set_pane_vc_g6

0x16c9,	// (0x00042f66) volume_set_pane_vc_g7

0x16d2,	// (0x00042f6f) volume_set_pane_vc_g8

0x16db,	// (0x00042f78) volume_set_pane_vc_g9

0x16e4,	// (0x00042f81) volume_set_pane_vc_g10

0x0009,

0xfa30,	// (0x000512cd) volume_set_pane_vc_g

0x68ad,	// (0x0004814a) volume_set_pane_vc

0x68b5,	// (0x00048152) button_value_adjust_pane_cp1_vc

0x68bf,	// (0x0004815c) list_highlight_pane_cp2_vc

0x68c8,	// (0x00048165) list_set_pane_vc_ParamLimits

0x68c8,	// (0x00048165) list_set_pane_vc

0x6932,	// (0x000481cf) main_pane_set_vc_t1_ParamLimits

0x6932,	// (0x000481cf) main_pane_set_vc_t1

0x6947,	// (0x000481e4) main_pane_set_vc_t2_ParamLimits

0x6947,	// (0x000481e4) main_pane_set_vc_t2

0x6959,	// (0x000481f6) main_pane_set_vc_t3_ParamLimits

0x6959,	// (0x000481f6) main_pane_set_vc_t3

0x696d,	// (0x0004820a) main_pane_set_vc_t4_ParamLimits

0x696d,	// (0x0004820a) main_pane_set_vc_t4

0x0003,

0xfa45,	// (0x000512e2) main_pane_set_vc_t_ParamLimits

0xfa45,	// (0x000512e2) main_pane_set_vc_t

0x6981,	// (0x0004821e) setting_code_pane_vc_ParamLimits

0x6981,	// (0x0004821e) setting_code_pane_vc

0x6992,	// (0x0004822f) setting_slider_graphic_pane_vc

0x6992,	// (0x0004822f) setting_slider_pane_vc

0x6992,	// (0x0004822f) setting_text_pane_vc

0x6992,	// (0x0004822f) setting_volume_pane_vc

0x699c,	// (0x00048239) scroll_pane_cp121_vc

0x3066,	// (0x00044903) set_content_pane_vc

0x69da,	// (0x00048277) button_value_adjust_pane_g1

0x69e3,	// (0x00048280) button_value_adjust_pane_g2

0x0001,

0xfa9d,	// (0x0005133a) button_value_adjust_pane_g

0x69ec,	// (0x00048289) form_field_slider_wide_pane_vc_t1_ParamLimits

0x69ec,	// (0x00048289) form_field_slider_wide_pane_vc_t1

0x6a00,	// (0x0004829d) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6a00,	// (0x0004829d) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa2,	// (0x0005133f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x0005133f) form_field_slider_wide_pane_vc_t

0x2a81,	// (0x0004431e) input_focus_pane_cp10_vc_ParamLimits

0x2a81,	// (0x0004431e) input_focus_pane_cp10_vc

0x6a12,	// (0x000482af) slider_cont_pane_cp1_vc_ParamLimits

0x6a12,	// (0x000482af) slider_cont_pane_cp1_vc

0x6841,	// (0x000480de) slider_form_pane_g1_cp2

0x684a,	// (0x000480e7) slider_form_pane_g2_cp2

0x6a2b,	// (0x000482c8) form_field_slider_pane_vc_t3

0x6a39,	// (0x000482d6) form_field_slider_pane_vc_t4

0x6a47,	// (0x000482e4) slider_form_pane_vc_ParamLimits

0x6a47,	// (0x000482e4) slider_form_pane_vc

0x6a54,	// (0x000482f1) form_field_slider_pane_vc_t1_ParamLimits

0x6a54,	// (0x000482f1) form_field_slider_pane_vc_t1

0x6a00,	// (0x0004829d) form_field_slider_pane_vc_t2_ParamLimits

0x6a00,	// (0x0004829d) form_field_slider_pane_vc_t2

0x0001,

0xfab2,	// (0x0005134f) form_field_slider_pane_vc_t_ParamLimits

0xfab2,	// (0x0005134f) form_field_slider_pane_vc_t

0x2a81,	// (0x0004431e) input_focus_pane_cp9_vc_ParamLimits

0x2a81,	// (0x0004431e) input_focus_pane_cp9_vc

0x6a70,	// (0x0004830d) slider_cont_pane_vc_ParamLimits

0x6a70,	// (0x0004830d) slider_cont_pane_vc

0x6a82,	// (0x0004831f) list_form_graphic_pane_cp_vc_ParamLimits

0x6a82,	// (0x0004831f) list_form_graphic_pane_cp_vc

0x4d14,	// (0x000465b1) form_field_popup_wide_pane_vc_g1

0x6a97,	// (0x00048334) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6a97,	// (0x00048334) form_field_popup_wide_pane_vc_t1

0x308c,	// (0x00044929) input_focus_pane_cp8_vc_ParamLimits

0x308c,	// (0x00044929) input_focus_pane_cp8_vc

0x6aae,	// (0x0004834b) list_form_wide_pane_vc_ParamLimits

0x6aae,	// (0x0004834b) list_form_wide_pane_vc

0x6aba,	// (0x00048357) list_form_graphic_pane_vc_g1

0x6ac2,	// (0x0004835f) list_form_graphic_pane_vc_t1_ParamLimits

0x6ac2,	// (0x0004835f) list_form_graphic_pane_vc_t1

0x2805,	// (0x000440a2) list_highlight_pane_cp5_vc_ParamLimits

0x2805,	// (0x000440a2) list_highlight_pane_cp5_vc

0x6ade,	// (0x0004837b) list_form_graphic_pane_vc_ParamLimits

0x6ade,	// (0x0004837b) list_form_graphic_pane_vc

0x4d14,	// (0x000465b1) form_field_popup_pane_vc_g1

0x6af4,	// (0x00048391) form_field_popup_pane_vc_t1_ParamLimits

0x6af4,	// (0x00048391) form_field_popup_pane_vc_t1

0x308c,	// (0x00044929) input_focus_pane_cp7_vc_ParamLimits

0x308c,	// (0x00044929) input_focus_pane_cp7_vc

0x6b0b,	// (0x000483a8) list_form_pane_vc_ParamLimits

0x6b0b,	// (0x000483a8) list_form_pane_vc

0x6b17,	// (0x000483b4) data_form_pane_vc_t1_ParamLimits

0x6b17,	// (0x000483b4) data_form_pane_vc_t1

0x30f3,	// (0x00044990) input_focus_pane_vc_g1

0x30fb,	// (0x00044998) input_focus_pane_vc_g2

0x3103,	// (0x000449a0) input_focus_pane_vc_g3

0x310b,	// (0x000449a8) input_focus_pane_vc_g4

0x3113,	// (0x000449b0) input_focus_pane_vc_g5

0x311b,	// (0x000449b8) input_focus_pane_vc_g6

0x3123,	// (0x000449c0) input_focus_pane_vc_g7

0x312b,	// (0x000449c8) input_focus_pane_vc_g8

0x3133,	// (0x000449d0) input_focus_pane_vc_g9

0xd99f,	// (0x0004f23c) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x00050f4a) input_focus_pane_vc_g

0x4d08,	// (0x000465a5) data_form_pane_vc_ParamLimits

0x4d08,	// (0x000465a5) data_form_pane_vc

0x4d14,	// (0x000465b1) form_field_data_pane_vc_g1

0x6b34,	// (0x000483d1) form_field_data_pane_vc_t1_ParamLimits

0x6b34,	// (0x000483d1) form_field_data_pane_vc_t1

0x308c,	// (0x00044929) input_focus_pane_vc_ParamLimits

0x308c,	// (0x00044929) input_focus_pane_vc

0x6b4e,	// (0x000483eb) button_value_adjust_pane_cp3_vc

0x6b56,	// (0x000483f3) button_value_adjust_pane_cp5_vc

0x6b5e,	// (0x000483fb) form_field_data_pane_vc_ParamLimits

0x6b5e,	// (0x000483fb) form_field_data_pane_vc

0x6b79,	// (0x00048416) form_field_data_pane_vc_cp2

0x6b81,	// (0x0004841e) form_field_data_wide_pane_vc_ParamLimits

0x6b81,	// (0x0004841e) form_field_data_wide_pane_vc

0x6b9b,	// (0x00048438) form_field_data_wide_pane_vc_cp2

0x6ba3,	// (0x00048440) form_field_popup_pane_vc_ParamLimits

0x6ba3,	// (0x00048440) form_field_popup_pane_vc

0x6bbe,	// (0x0004845b) form_field_popup_wide_pane_vc_ParamLimits

0x6bbe,	// (0x0004845b) form_field_popup_wide_pane_vc

0x6bd8,	// (0x00048475) form_field_slider_pane_vc_ParamLimits

0x6bd8,	// (0x00048475) form_field_slider_pane_vc

0x6beb,	// (0x00048488) form_field_slider_wide_pane_vc_ParamLimits

0x6beb,	// (0x00048488) form_field_slider_wide_pane_vc

0xdb89,	// (0x0004f426) grid_touch_1_pane_ParamLimits

0xdb89,	// (0x0004f426) grid_touch_1_pane

0xdb9d,	// (0x0004f43a) grid_touch_2_pane_ParamLimits

0xdb9d,	// (0x0004f43a) grid_touch_2_pane

0x6cc2,	// (0x0004855f) touch_pane_g1_ParamLimits

0x6cc2,	// (0x0004855f) touch_pane_g1

0x6c24,	// (0x000484c1) cell_app_pane_cp_wide_ParamLimits

0x6c24,	// (0x000484c1) cell_app_pane_cp_wide

0x6c35,	// (0x000484d2) grid_popup_fast_wide_pane_ParamLimits

0x6c35,	// (0x000484d2) grid_popup_fast_wide_pane

0x6c49,	// (0x000484e6) scroll_pane_cp19_ParamLimits

0x6c49,	// (0x000484e6) scroll_pane_cp19

0xd9a9,	// (0x0004f246) bg_popup_window_pane_cp20

0x6c5d,	// (0x000484fa) listscroll_popup_fast_wide_pane

0x3262,	// (0x00044aff) grid_indicator_nsta_pane

0x6c65,	// (0x00048502) clock_nsta_pane_g1

0x6c6e,	// (0x0004850b) clock_nsta_pane_t1

0xdbc9,	// (0x0004f466) cell_indicator_nsta_pane_ParamLimits

0xdbc9,	// (0x0004f466) cell_indicator_nsta_pane

0x6cc2,	// (0x0004855f) cell_indicator_nsta_pane_g1

0xdbe6,	// (0x0004f483) cell_indicator_nsta_pane_g2

0x0001,

0xfabc,	// (0x00051359) cell_indicator_nsta_pane_g

0x6ce5,	// (0x00048582) clock_nsta_pane_cp

0x6ced,	// (0x0004858a) indicator_nsta_pane_cp

0x6cf5,	// (0x00048592) nsta_clock_indic_pane_g1

0x28d1,	// (0x0004416e) grid_indicator_pane

0x3634,	// (0x00044ed1) scroll_pane_cp29

0x1234,	// (0x00042ad1) indicator_nsta_pane_cp2_ParamLimits

0x1234,	// (0x00042ad1) indicator_nsta_pane_cp2

0x2805,	// (0x000440a2) main_apps_wheel_pane

0x4ed3,	// (0x00046770) form_midp_field_text_pane_ParamLimits

0x5022,	// (0x000468bf) scroll_bar_cp050_ParamLimits

0x6d5e,	// (0x000485fb) cell_indicator_pane_ParamLimits

0x6d5e,	// (0x000485fb) cell_indicator_pane

0x6d76,	// (0x00048613) cell_indicator_pane_g1

0xdbfc,	// (0x0004f499) grid_wheel_folder_pane_ParamLimits

0xdbfc,	// (0x0004f499) grid_wheel_folder_pane

0xdc0a,	// (0x0004f4a7) list_wheel_apps_pane_ParamLimits

0xdc0a,	// (0x0004f4a7) list_wheel_apps_pane

0xdc18,	// (0x0004f4b5) main_apps_wheel_pane_g1_ParamLimits

0xdc18,	// (0x0004f4b5) main_apps_wheel_pane_g1

0xdc28,	// (0x0004f4c5) main_apps_wheel_pane_g2_ParamLimits

0xdc28,	// (0x0004f4c5) main_apps_wheel_pane_g2

0x0001,

0xfad8,	// (0x00051375) main_apps_wheel_pane_g_ParamLimits

0xfad8,	// (0x00051375) main_apps_wheel_pane_g

0xdc38,	// (0x0004f4d5) main_apps_wheel_pane_t1_ParamLimits

0xdc38,	// (0x0004f4d5) main_apps_wheel_pane_t1

0xdc50,	// (0x0004f4ed) list_wheel_apps_pane_g1

0xdc58,	// (0x0004f4f5) list_wheel_apps_pane_g2

0xdc60,	// (0x0004f4fd) list_wheel_apps_pane_g3

0xdc68,	// (0x0004f505) list_wheel_apps_pane_g4

0xdc70,	// (0x0004f50d) list_wheel_apps_pane_g5

0x0004,

0xfadd,	// (0x0005137a) list_wheel_apps_pane_g

0x3b66,	// (0x00045403) navi_icon_text_pane

0xd1ca,	// (0x0004ea67) aid_fill_nsta

0xdc8d,	// (0x0004f52a) navi_icon_text_pane_g1

0xdc99,	// (0x0004f536) navi_icon_text_pane_t1

0xc996,	// (0x0004e233) list_set_graphic_pane_t1_ParamLimits

0xc996,	// (0x0004e233) list_set_graphic_pane_t1

0x5773,	// (0x00047010) popup_midp_note_alarm_window_t6_ParamLimits

0x5773,	// (0x00047010) popup_midp_note_alarm_window_t6

0x5785,	// (0x00047022) popup_midp_note_alarm_window_t7_ParamLimits

0x5785,	// (0x00047022) popup_midp_note_alarm_window_t7

0x5797,	// (0x00047034) popup_midp_note_alarm_window_t8_ParamLimits

0x5797,	// (0x00047034) popup_midp_note_alarm_window_t8

0x57a9,	// (0x00047046) popup_midp_note_alarm_window_t9_ParamLimits

0x57a9,	// (0x00047046) popup_midp_note_alarm_window_t9

0x57bb,	// (0x00047058) popup_midp_note_alarm_window_t10_ParamLimits

0x57bb,	// (0x00047058) popup_midp_note_alarm_window_t10

0x57cd,	// (0x0004706a) popup_midp_note_alarm_window_t11_ParamLimits

0x57cd,	// (0x0004706a) popup_midp_note_alarm_window_t11

0x57df,	// (0x0004707c) scroll_pane_cp17_ParamLimits

0x57df,	// (0x0004707c) scroll_pane_cp17

0x1693,	// (0x00042f30) volume_small_pane_cp_g1

0x1a00,	// (0x0004329d) volume_small_pane_cp_g2

0x1a09,	// (0x000432a6) volume_small_pane_cp_g3

0x1a12,	// (0x000432af) volume_small_pane_cp_g4

0x1a1b,	// (0x000432b8) volume_small_pane_cp_g5

0x1a24,	// (0x000432c1) volume_small_pane_cp_g6

0x1a2d,	// (0x000432ca) volume_small_pane_cp_g7

0x1a36,	// (0x000432d3) volume_small_pane_cp_g8

0x1a3f,	// (0x000432dc) volume_small_pane_cp_g9

0x1a48,	// (0x000432e5) volume_small_pane_cp_g10

0x3dc7,	// (0x00045664) midp_ticker_pane_g1_ParamLimits

0x3dd3,	// (0x00045670) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x00051012) midp_ticker_pane_g_ParamLimits

0xca56,	// (0x0004e2f3) midp_ticker_pane_t1_ParamLimits

0xd1ea,	// (0x0004ea87) aid_fill_nsta_2

0x500e,	// (0x000468ab) list_form2_midp_pane

0x619c,	// (0x00047a39) midp_editing_number_pane_ParamLimits

0x61ab,	// (0x00047a48) midp_ticker_pane_ParamLimits

0x6e6f,	// (0x0004870c) form2_midp_field_pane

0x6e93,	// (0x00048730) scroll_pane_cp51

0x6eb3,	// (0x00048750) form2_midp_button_pane_ParamLimits

0x6eb3,	// (0x00048750) form2_midp_button_pane

0x6ec5,	// (0x00048762) form2_midp_content_pane_ParamLimits

0x6ec5,	// (0x00048762) form2_midp_content_pane

0x6edf,	// (0x0004877c) form2_midp_field_choice_group_pane

0x6ee7,	// (0x00048784) form2_midp_field_pane_g1

0x6eef,	// (0x0004878c) form2_midp_field_pane_g2

0x6ef7,	// (0x00048794) form2_midp_field_pane_g3

0x6eff,	// (0x0004879c) form2_midp_field_pane_g4

0x0003,

0xfb02,	// (0x0005139f) form2_midp_field_pane_g

0x6f07,	// (0x000487a4) form2_midp_gauge_slider_pane

0x6f0f,	// (0x000487ac) form2_midp_gauge_wait_pane

0x6f17,	// (0x000487b4) form2_midp_image_pane_ParamLimits

0x6f17,	// (0x000487b4) form2_midp_image_pane

0x6f32,	// (0x000487cf) form2_midp_label_pane_ParamLimits

0x6f32,	// (0x000487cf) form2_midp_label_pane

0xdcc7,	// (0x0004f564) form2_midp_label_pane_cp_ParamLimits

0xdcc7,	// (0x0004f564) form2_midp_label_pane_cp

0x6f72,	// (0x0004880f) form2_midp_string_pane_ParamLimits

0x6f72,	// (0x0004880f) form2_midp_string_pane

0xb741,	// (0x0004cfde) form2_midp_text_pane_ParamLimits

0xb741,	// (0x0004cfde) form2_midp_text_pane

0x6f84,	// (0x00048821) form2_midp_time_pane

0x6f94,	// (0x00048831) input_focus_pane_cp51_ParamLimits

0x6f94,	// (0x00048831) input_focus_pane_cp51

0x6fac,	// (0x00048849) form2_midp_label_pane_t1_ParamLimits

0x6fac,	// (0x00048849) form2_midp_label_pane_t1

0xb764,	// (0x0004d001) form2_mdip_text_pane_t1_ParamLimits

0xb764,	// (0x0004d001) form2_mdip_text_pane_t1

0x078f,	// (0x0004202c) form2_midp_time_pane_t1

0x6ffa,	// (0x00048897) form2_midp_gauge_slider_pane_t1

0xdce8,	// (0x0004f585) form2_midp_gauge_slider_pane_t2

0xdcfa,	// (0x0004f597) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0b,	// (0x000513a8) form2_midp_gauge_slider_pane_t

0x7030,	// (0x000488cd) form2_midp_slider_pane

0x703c,	// (0x000488d9) form2_midp_gauge_wait_pane_t1

0x704a,	// (0x000488e7) form2_midp_wait_pane_ParamLimits

0x704a,	// (0x000488e7) form2_midp_wait_pane

0xd603,	// (0x0004eea0) list_single_2graphic_pane_cp4_ParamLimits

0xd603,	// (0x0004eea0) list_single_2graphic_pane_cp4

0xdd0c,	// (0x0004f5a9) list_single_midp_graphic_pane_cp_ParamLimits

0xdd0c,	// (0x0004f5a9) list_single_midp_graphic_pane_cp

0xd9a9,	// (0x0004f246) list_highlight_pane_cp20

0x7099,	// (0x00048936) list_single_2graphic_pane_g1_cp4

0x663b,	// (0x00047ed8) list_single_2graphic_pane_g2_cp4

0x70a1,	// (0x0004893e) list_single_2graphic_pane_t1_cp4

0x2805,	// (0x000440a2) list_highlight_pane_cp21

0x70b0,	// (0x0004894d) list_single_midp_graphic_pane_g4_cp

0x70bf,	// (0x0004895c) list_single_midp_graphic_pane_t1_cp

0xdd2d,	// (0x0004f5ca) form2_mdip_string_pane_t1_ParamLimits

0xdd2d,	// (0x0004f5ca) form2_mdip_string_pane_t1

0xd9a9,	// (0x0004f246) bg_wml_button_pane_cp2

0xd99f,	// (0x0004f23c) form2_midp_image_pane_g1

0x0f21,	// (0x000427be) list_double_large_graphic_pane_g5_ParamLimits

0x0f21,	// (0x000427be) list_double_large_graphic_pane_g5

0xc9ae,	// (0x0004e24b) midp_form_pane_ParamLimits

0x2805,	// (0x000440a2) main_apps_wheel_pane_ParamLimits

0xcee2,	// (0x0004e77f) popup_preview_window_ParamLimits

0xcee2,	// (0x0004e77f) popup_preview_window

0x462c,	// (0x00045ec9) popup_touch_info_window_ParamLimits

0x462c,	// (0x00045ec9) popup_touch_info_window

0x464e,	// (0x00045eeb) popup_touch_menu_window_ParamLimits

0x464e,	// (0x00045eeb) popup_touch_menu_window

0xd995,	// (0x0004f232) bg_popup_sub_pane_cp6

0x7179,	// (0x00048a16) list_touch_menu_pane

0x7181,	// (0x00048a1e) list_single_touch_menu_pane_ParamLimits

0x7181,	// (0x00048a1e) list_single_touch_menu_pane

0x719c,	// (0x00048a39) list_single_touch_menu_pane_t1

0x2805,	// (0x000440a2) bg_popup_sub_pane_cp7_ParamLimits

0x2805,	// (0x000440a2) bg_popup_sub_pane_cp7

0x71aa,	// (0x00048a47) heading_sub_pane

0x71b2,	// (0x00048a4f) list_touch_info_pane_ParamLimits

0x71b2,	// (0x00048a4f) list_touch_info_pane

0x71c1,	// (0x00048a5e) list_single_touch_info_pane_ParamLimits

0x71c1,	// (0x00048a5e) list_single_touch_info_pane

0x71d3,	// (0x00048a70) list_single_touch_info_pane_t1

0x71e1,	// (0x00048a7e) list_single_touch_info_pane_t2

0x0001,

0xfb19,	// (0x000513b6) list_single_touch_info_pane_t

0x3cea,	// (0x00045587) bg_popup_heading_pane_cp

0x71ef,	// (0x00048a8c) heading_sub_pane_t1

0x4ca2,	// (0x0004653f) bg_popup_preview_window_pane_cp_ParamLimits

0x4ca2,	// (0x0004653f) bg_popup_preview_window_pane_cp

0x71aa,	// (0x00048a47) heading_preview_pane

0x71b2,	// (0x00048a4f) list_preview_pane_ParamLimits

0x71b2,	// (0x00048a4f) list_preview_pane

0x71fd,	// (0x00048a9a) popup_preview_window_g1

0x71c1,	// (0x00048a5e) list_single_preview_pane_ParamLimits

0x71c1,	// (0x00048a5e) list_single_preview_pane

0x7205,	// (0x00048aa2) list_single_preview_pane_g1

0x720d,	// (0x00048aaa) list_single_preview_pane_t1

0x71d3,	// (0x00048a70) list_single_preview_pane_t2

0x0001,

0xfb1e,	// (0x000513bb) list_single_preview_pane_t

0x721b,	// (0x00048ab8) bg_popup_heading_pane_cp2_ParamLimits

0x721b,	// (0x00048ab8) bg_popup_heading_pane_cp2

0x7231,	// (0x00048ace) heading_preview_pane_g1

0x7239,	// (0x00048ad6) heading_preview_pane_t1_ParamLimits

0x7239,	// (0x00048ad6) heading_preview_pane_t1

0x28f4,	// (0x00044191) soft_indicator_pane_t1_ParamLimits

0x2fff,	// (0x0004489c) scroll_pane_ParamLimits

0x3530,	// (0x00044dcd) scroll_sc2_left_pane

0x3539,	// (0x00044dd6) scroll_sc2_right_pane

0x3558,	// (0x00044df5) scroll_bg_pane_g1_ParamLimits

0x356d,	// (0x00044e0a) scroll_bg_pane_g2_ParamLimits

0x3585,	// (0x00044e22) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x00050fa1) scroll_bg_pane_g_ParamLimits

0x3558,	// (0x00044df5) scroll_handle_pane_g1_ParamLimits

0x35a7,	// (0x00044e44) scroll_handle_pane_g2_ParamLimits

0x3585,	// (0x00044e22) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x00050fa8) scroll_handle_pane_g_ParamLimits

0x4090,	// (0x0004592d) popup_choice_list_window_ParamLimits

0x4090,	// (0x0004592d) popup_choice_list_window

0x4afa,	// (0x00046397) choice_list_pane

0x4b7c,	// (0x00046419) cell_toolbar_pane_t1

0x4ba4,	// (0x00046441) toolbar_button_pane_ParamLimits

0x5caf,	// (0x0004754c) ai_gene_pane_1_t2_ParamLimits

0x5caf,	// (0x0004754c) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x000511c0) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x000511c0) ai_gene_pane_1_t

0x7256,	// (0x00048af3) scroll_sc2_left_pane_g1

0x7256,	// (0x00048af3) scroll_sc2_right_pane_g1

0x4068,	// (0x00045905) bg_popup_sub_pane_cp10

0x7260,	// (0x00048afd) list_choice_list_pane

0x7277,	// (0x00048b14) list_single_choice_list_pane_ParamLimits

0x7277,	// (0x00048b14) list_single_choice_list_pane

0x728b,	// (0x00048b28) list_single_choice_list_pane_g1

0x7293,	// (0x00048b30) list_single_choice_list_pane_t1_ParamLimits

0x7293,	// (0x00048b30) list_single_choice_list_pane_t1

0x72a8,	// (0x00048b45) choice_list_pane_g1

0x72b0,	// (0x00048b4d) choice_list_pane_t1

0xd995,	// (0x0004f232) input_focus_pane_cp11

0x340a,	// (0x00044ca7) title_pane_stacon_g2_ParamLimits

0x340a,	// (0x00044ca7) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x00050f87) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x00050f87) title_pane_stacon_g

0x3cea,	// (0x00045587) cursor_press_pane

0xcb63,	// (0x0004e400) popup_fep_hwr_window_ParamLimits

0xcb63,	// (0x0004e400) popup_fep_hwr_window

0x41d0,	// (0x00045a6d) popup_fep_vkb_window_ParamLimits

0x41d0,	// (0x00045a6d) popup_fep_vkb_window

0x72be,	// (0x00048b5b) cursor_press_pane_g1

0x0002,

0xfb47,	// (0x000513e4) fep_vkb_side_pane_g_ParamLimits

0x1a7c,	// (0x00043319) fep_hwr_candidate_pane_ParamLimits

0x1a7c,	// (0x00043319) fep_hwr_candidate_pane

0x1aa6,	// (0x00043343) fep_hwr_side_pane_ParamLimits

0x1aa6,	// (0x00043343) fep_hwr_side_pane

0x1ac8,	// (0x00043365) fep_hwr_top_pane_ParamLimits

0x1ac8,	// (0x00043365) fep_hwr_top_pane

0x1ae0,	// (0x0004337d) fep_hwr_write_pane_ParamLimits

0x1ae0,	// (0x0004337d) fep_hwr_write_pane

0xfb47,	// (0x000513e4) fep_vkb_side_pane_g

0x72c6,	// (0x00048b63) fep_hwr_top_pane_g1

0x72d8,	// (0x00048b75) fep_hwr_top_pane_g2

0x1b0c,	// (0x000433a9) fep_hwr_top_pane_g3

0x0002,

0xfb23,	// (0x000513c0) fep_hwr_top_pane_g

0x1b21,	// (0x000433be) fep_hwr_top_text_pane

0x36fc,	// (0x00044f99) fep_hwr_top_text_pane_g1

0x730e,	// (0x00048bab) fep_hwr_top_text_pane_t1

0x1c2b,	// (0x000434c8) fep_hwr_candidate_pane_g1

0x7559,	// (0x00048df6) fep_vkb_keypad_pane_g3_ParamLimits

0x7559,	// (0x00048df6) fep_vkb_keypad_pane_g3

0x7585,	// (0x00048e22) fep_vkb_keypad_pane_g4_ParamLimits

0x7585,	// (0x00048e22) fep_vkb_keypad_pane_g4

0x75fc,	// (0x00048e99) fep_vkb_bottom_pane_g2_ParamLimits

0x75fc,	// (0x00048e99) fep_vkb_bottom_pane_g2

0x0001,

0xfb4e,	// (0x000513eb) fep_vkb_bottom_pane_g_ParamLimits

0xfb4e,	// (0x000513eb) fep_vkb_bottom_pane_g

0x7256,	// (0x00048af3) cell_vkb_side_pane_g2

0x0001,

0xfb58,	// (0x000513f5) cell_vkb_side_pane_g

0x7695,	// (0x00048f32) cell_vkb_side_pane_t1

0x76a3,	// (0x00048f40) cell_vkb_side_pane_t1_copy1

0x7256,	// (0x00048af3) bg_fep_vkb_candidate_pane_g2

0x77e7,	// (0x00049084) cell_vkb_candidate_pane_ParamLimits

0x731c,	// (0x00048bb9) aid_size_cell_vkb_ParamLimits

0x731c,	// (0x00048bb9) aid_size_cell_vkb

0x77e7,	// (0x00049084) cell_vkb_candidate_pane

0x1c45,	// (0x000434e2) bg_popup_fep_shadow_pane_g1

0xddf1,	// (0x0004f68e) fep_vkb_bottom_pane_ParamLimits

0xddf1,	// (0x0004f68e) fep_vkb_bottom_pane

0x73eb,	// (0x00048c88) fep_vkb_candidate_pane_ParamLimits

0x73eb,	// (0x00048c88) fep_vkb_candidate_pane

0xde1d,	// (0x0004f6ba) fep_vkb_keypad_pane_ParamLimits

0xde1d,	// (0x0004f6ba) fep_vkb_keypad_pane

0xde44,	// (0x0004f6e1) fep_vkb_side_pane_ParamLimits

0xde44,	// (0x0004f6e1) fep_vkb_side_pane

0xde80,	// (0x0004f71d) fep_vkb_top_pane_ParamLimits

0xde80,	// (0x0004f71d) fep_vkb_top_pane

0x74b2,	// (0x00048d4f) fep_vkb_top_pane_g1_ParamLimits

0x74b2,	// (0x00048d4f) fep_vkb_top_pane_g1

0x74c1,	// (0x00048d5e) fep_vkb_top_pane_g2_ParamLimits

0x74c1,	// (0x00048d5e) fep_vkb_top_pane_g2

0x74d0,	// (0x00048d6d) fep_vkb_top_pane_g3_ParamLimits

0x74d0,	// (0x00048d6d) fep_vkb_top_pane_g3

0x0003,

0xfb3e,	// (0x000513db) fep_vkb_top_pane_g_ParamLimits

0xfb3e,	// (0x000513db) fep_vkb_top_pane_g

0x74ee,	// (0x00048d8b) fep_vkb_top_text_pane_ParamLimits

0x74ee,	// (0x00048d8b) fep_vkb_top_text_pane

0xdebc,	// (0x0004f759) fep_vkb_side_pane_g1_ParamLimits

0xdebc,	// (0x0004f759) fep_vkb_side_pane_g1

0x7548,	// (0x00048de5) grid_vkb_side_pane_ParamLimits

0x7548,	// (0x00048de5) grid_vkb_side_pane

0x1c4d,	// (0x000434ea) bg_popup_fep_shadow_pane_g2

0x1c56,	// (0x000434f3) bg_popup_fep_shadow_pane_g3

0x1c5e,	// (0x000434fb) bg_popup_fep_shadow_pane_g4

0x1c67,	// (0x00043504) bg_popup_fep_shadow_pane_g5

0x1c71,	// (0x0004350e) bg_popup_fep_shadow_pane_g6

0x1c79,	// (0x00043516) bg_popup_fep_shadow_pane_g7

0x3113,	// (0x000449b0) bg_popup_fep_shadow_pane_g8

0x75a7,	// (0x00048e44) grid_vkb_keypad_number_pane_ParamLimits

0x75a7,	// (0x00048e44) grid_vkb_keypad_number_pane

0x75bb,	// (0x00048e58) grid_vkb_keypad_pane_ParamLimits

0x75bb,	// (0x00048e58) grid_vkb_keypad_pane

0x75e1,	// (0x00048e7e) fep_vkb_bottom_pane_g1_ParamLimits

0x75e1,	// (0x00048e7e) fep_vkb_bottom_pane_g1

0x760a,	// (0x00048ea7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x760a,	// (0x00048ea7) grid_vkb_keypad_bottom_left_pane

0x761f,	// (0x00048ebc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x761f,	// (0x00048ebc) grid_vkb_keypad_bottom_right_pane

0x7634,	// (0x00048ed1) fep_vkb_top_text_pane_g1

0xdf03,	// (0x0004f7a0) fep_vkb_top_text_pane_t1

0xdf15,	// (0x0004f7b2) cell_vkb_side_pane_ParamLimits

0xdf15,	// (0x0004f7b2) cell_vkb_side_pane

0x7256,	// (0x00048af3) cell_vkb_side_pane_g1

0x76b1,	// (0x00048f4e) cell_vkb_keypad_pane_ParamLimits

0x76b1,	// (0x00048f4e) cell_vkb_keypad_pane

0x773e,	// (0x00048fdb) cell_vkb_keypad_pane_g1

0x0008,

0xfb6b,	// (0x00051408) bg_popup_fep_shadow_pane_g

0x7256,	// (0x00048af3) cell_hwr_side_pane_g1

0x7256,	// (0x00048af3) cell_hwr_side_pane_g2

0x7748,	// (0x00048fe5) cell_vkb_keypad_pane_t1

0xdf2b,	// (0x0004f7c8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdf2b,	// (0x0004f7c8) cell_vkb_keypad_bottom_left_pane

0xdf40,	// (0x0004f7dd) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdf40,	// (0x0004f7dd) cell_vkb_keypad_bottom_right_pane

0x7256,	// (0x00048af3) cell_vkb_keypad_bottom_left_pane_g1

0x7256,	// (0x00048af3) cell_vkb_keypad_bottom_right_pane_g1

0x77ac,	// (0x00049049) cell_vkb_keypad_number_pane_ParamLimits

0x77ac,	// (0x00049049) cell_vkb_keypad_number_pane

0x77cb,	// (0x00049068) cell_vkb_keypad_number_pane_g1

0x77d5,	// (0x00049072) cell_vkb_keypad_number_pane_g2

0x77de,	// (0x0004907b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5d,	// (0x000513fa) cell_vkb_keypad_number_pane_g

0x7748,	// (0x00048fe5) cell_vkb_keypad_number_pane_t1

0x7808,	// (0x000490a5) fep_vkb_candidate_pane_g1

0x0001,

0xfb58,	// (0x000513f5) cell_hwr_side_pane_g

0x7821,	// (0x000490be) cell_hwr_side_pane_t1

0x1c8b,	// (0x00043528) cell_hwr_side_pane_t1_copy1

0x74e0,	// (0x00048d7d) cell_hwr_candidate_pane_g1

0x1c99,	// (0x00043536) cell_hwr_candidate_pane_t1

0x7256,	// (0x00048af3) cell_vkb_candidate_pane_g2

0x78a7,	// (0x00049144) cell_vkb_candidate_pane_t1

0x7664,	// (0x00048f01) bg_popup_fep_shadow_pane_ParamLimits

0x7664,	// (0x00048f01) bg_popup_fep_shadow_pane

0xddb7,	// (0x0004f654) bg_fep_hwr_top_pane_g4

0x72ea,	// (0x00048b87) bg_hwr_side_pane_g1_ParamLimits

0x72ea,	// (0x00048b87) bg_hwr_side_pane_g1

0xc444,	// (0x0004dce1) cell_hwr_side_pane_ParamLimits

0xc444,	// (0x0004dce1) cell_hwr_side_pane

0x1b9c,	// (0x00043439) fep_hwr_write_pane_g1_ParamLimits

0x1b9c,	// (0x00043439) fep_hwr_write_pane_g1

0x1ba9,	// (0x00043446) fep_hwr_write_pane_g2_ParamLimits

0x1ba9,	// (0x00043446) fep_hwr_write_pane_g2

0x1bb6,	// (0x00043453) fep_hwr_write_pane_g3_ParamLimits

0x1bb6,	// (0x00043453) fep_hwr_write_pane_g3

0xc464,	// (0x0004dd01) fep_hwr_write_pane_g4_ParamLimits

0xc464,	// (0x0004dd01) fep_hwr_write_pane_g4

0x0005,

0xfb2a,	// (0x000513c7) fep_hwr_write_pane_g_ParamLimits

0xfb2a,	// (0x000513c7) fep_hwr_write_pane_g

0xddb7,	// (0x0004f654) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xddb7,	// (0x0004f654) bg_fep_hwr_candidate_pane_g2

0x1bd9,	// (0x00043476) cell_hwr_candidate_pane_ParamLimits

0x1bd9,	// (0x00043476) cell_hwr_candidate_pane

0x1c2b,	// (0x000434c8) fep_hwr_candidate_pane_g1_ParamLimits

0x734a,	// (0x00048be7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x734a,	// (0x00048be7) bg_popup_fep_shadow_pane_cp2

0x74e0,	// (0x00048d7d) fep_vkb_top_pane_g4_ParamLimits

0x74e0,	// (0x00048d7d) fep_vkb_top_pane_g4

0x7526,	// (0x00048dc3) fep_vkb_side_pane_g2_ParamLimits

0x7526,	// (0x00048dc3) fep_vkb_side_pane_g2

0xb43c,	// (0x0004ccd9) list_setting_pane_t4_ParamLimits

0xb43c,	// (0x0004ccd9) list_setting_pane_t4

0xb4d8,	// (0x0004cd75) list_setting_number_pane_t5_ParamLimits

0xb4d8,	// (0x0004cd75) list_setting_number_pane_t5

0x372e,	// (0x00044fcb) list_double_heading_pane_cp2_ParamLimits

0x372e,	// (0x00044fcb) list_double_heading_pane_cp2

0x30a6,	// (0x00044943) list_double_heading_pane_g1_cp2_ParamLimits

0x30a6,	// (0x00044943) list_double_heading_pane_g1_cp2

0x30b2,	// (0x0004494f) list_double_heading_pane_g2_cp2_ParamLimits

0x30b2,	// (0x0004494f) list_double_heading_pane_g2_cp2

0x78b5,	// (0x00049152) list_double_heading_pane_t1_cp2_ParamLimits

0x78b5,	// (0x00049152) list_double_heading_pane_t1_cp2

0x78cb,	// (0x00049168) list_double_heading_pane_t2_cp2_ParamLimits

0x78cb,	// (0x00049168) list_double_heading_pane_t2_cp2

0xd98d,	// (0x0004f22a) aid_value_unit2

0x0cfa,	// (0x00042597) popup_preview_fixed_window

0x2a8f,	// (0x0004432c) bg_popup_preview_window_pane_cp02

0x78dd,	// (0x0004917a) list_preview_fixed_pane

0x7923,	// (0x000491c0) list_empty_pane_fp_ParamLimits

0x7923,	// (0x000491c0) list_empty_pane_fp

0x7923,	// (0x000491c0) list_single_cale_day_pane_fp_ParamLimits

0x7923,	// (0x000491c0) list_single_cale_day_pane_fp

0x7923,	// (0x000491c0) list_single_graphic_heading_pane_fp_ParamLimits

0x7923,	// (0x000491c0) list_single_graphic_heading_pane_fp

0x7923,	// (0x000491c0) list_single_graphic_pane_fp_ParamLimits

0x7923,	// (0x000491c0) list_single_graphic_pane_fp

0x7923,	// (0x000491c0) list_single_heading_pane_fp_ParamLimits

0x7923,	// (0x000491c0) list_single_heading_pane_fp

0x7923,	// (0x000491c0) list_single_pane_fp_ParamLimits

0x7923,	// (0x000491c0) list_single_pane_fp

0x793c,	// (0x000491d9) list_single_pane_fp_g1_ParamLimits

0x793c,	// (0x000491d9) list_single_pane_fp_g1

0x0f15,	// (0x000427b2) list_single_pane_fp_g2_ParamLimits

0x0f15,	// (0x000427b2) list_single_pane_fp_g2

0x1cb7,	// (0x00043554) list_single_pane_fp_g3_ParamLimits

0x1cb7,	// (0x00043554) list_single_pane_fp_g3

0x7948,	// (0x000491e5) list_single_pane_fp_g4_ParamLimits

0x7948,	// (0x000491e5) list_single_pane_fp_g4

0x0003,

0xfb8c,	// (0x00051429) list_single_pane_fp_g_ParamLimits

0xfb8c,	// (0x00051429) list_single_pane_fp_g

0x07a2,	// (0x0004203f) list_single_pane_fp_t1_ParamLimits

0x07a2,	// (0x0004203f) list_single_pane_fp_t1

0x07b9,	// (0x00042056) list_single_graphic_pane_fp_g1_ParamLimits

0x07b9,	// (0x00042056) list_single_graphic_pane_fp_g1

0x793c,	// (0x000491d9) list_single_graphic_pane_fp_g2_ParamLimits

0x793c,	// (0x000491d9) list_single_graphic_pane_fp_g2

0x0f15,	// (0x000427b2) list_single_graphic_pane_fp_g3_ParamLimits

0x0f15,	// (0x000427b2) list_single_graphic_pane_fp_g3

0x1cb7,	// (0x00043554) list_single_graphic_pane_fp_g4_ParamLimits

0x1cb7,	// (0x00043554) list_single_graphic_pane_fp_g4

0x7948,	// (0x000491e5) list_single_graphic_pane_fp_g5_ParamLimits

0x7948,	// (0x000491e5) list_single_graphic_pane_fp_g5

0x0004,

0xfb95,	// (0x00051432) list_single_graphic_pane_fp_g_ParamLimits

0xfb95,	// (0x00051432) list_single_graphic_pane_fp_g

0x07c5,	// (0x00042062) list_single_graphic_pane_fp_t1_ParamLimits

0x07c5,	// (0x00042062) list_single_graphic_pane_fp_t1

0x07b9,	// (0x00042056) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x07b9,	// (0x00042056) list_single_graphic_heading_pane_fp_g1

0x793c,	// (0x000491d9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x793c,	// (0x000491d9) list_single_graphic_heading_pane_fp_g2

0x0f15,	// (0x000427b2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0f15,	// (0x000427b2) list_single_graphic_heading_pane_fp_g3

0x1cb7,	// (0x00043554) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1cb7,	// (0x00043554) list_single_graphic_heading_pane_fp_g4

0x7948,	// (0x000491e5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7948,	// (0x000491e5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb95,	// (0x00051432) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x00051432) list_single_graphic_heading_pane_fp_g

0x07db,	// (0x00042078) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x07db,	// (0x00042078) list_single_graphic_heading_pane_fp_t1

0x07f1,	// (0x0004208e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x07f1,	// (0x0004208e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba0,	// (0x0005143d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba0,	// (0x0005143d) list_single_graphic_heading_pane_fp_t

0x0803,	// (0x000420a0) list_single_cale_day_pane_fp_g1_ParamLimits

0x0803,	// (0x000420a0) list_single_cale_day_pane_fp_g1

0x7954,	// (0x000491f1) list_single_cale_day_pane_fp_g2_ParamLimits

0x7954,	// (0x000491f1) list_single_cale_day_pane_fp_g2

0x1ccb,	// (0x00043568) list_single_cale_day_pane_fp_g3_ParamLimits

0x1ccb,	// (0x00043568) list_single_cale_day_pane_fp_g3

0x1cf3,	// (0x00043590) list_single_cale_day_pane_fp_g4_ParamLimits

0x1cf3,	// (0x00043590) list_single_cale_day_pane_fp_g4

0x1d17,	// (0x000435b4) list_single_cale_day_pane_fp_g5_ParamLimits

0x1d17,	// (0x000435b4) list_single_cale_day_pane_fp_g5

0x0004,

0xfba5,	// (0x00051442) list_single_cale_day_pane_fp_g_ParamLimits

0xfba5,	// (0x00051442) list_single_cale_day_pane_fp_g

0x083b,	// (0x000420d8) list_single_cale_day_pane_fp_t1_ParamLimits

0x083b,	// (0x000420d8) list_single_cale_day_pane_fp_t1

0x0861,	// (0x000420fe) list_single_cale_day_pane_fp_t2_ParamLimits

0x0861,	// (0x000420fe) list_single_cale_day_pane_fp_t2

0x087a,	// (0x00042117) list_single_cale_day_pane_fp_t3_ParamLimits

0x087a,	// (0x00042117) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb0,	// (0x0005144d) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb0,	// (0x0005144d) list_single_cale_day_pane_fp_t

0x793c,	// (0x000491d9) list_empty_pane_fp_g1_ParamLimits

0x793c,	// (0x000491d9) list_empty_pane_fp_g1

0x0893,	// (0x00042130) list_empty_pane_fp_t1

0x08a1,	// (0x0004213e) list_empty_pane_fp_t2

0x0001,

0xfbb7,	// (0x00051454) list_empty_pane_fp_t

0x793c,	// (0x000491d9) list_single_heading_pane_fp_g1_ParamLimits

0x793c,	// (0x000491d9) list_single_heading_pane_fp_g1

0x0f15,	// (0x000427b2) list_single_heading_pane_fp_g2_ParamLimits

0x0f15,	// (0x000427b2) list_single_heading_pane_fp_g2

0x1cb7,	// (0x00043554) list_single_heading_pane_fp_g3_ParamLimits

0x1cb7,	// (0x00043554) list_single_heading_pane_fp_g3

0x0002,

0xfbbc,	// (0x00051459) list_single_heading_pane_fp_g_ParamLimits

0xfbbc,	// (0x00051459) list_single_heading_pane_fp_g

0x08af,	// (0x0004214c) list_single_heading_pane_fp_t1_ParamLimits

0x08af,	// (0x0004214c) list_single_heading_pane_fp_t1

0x08c1,	// (0x0004215e) list_single_heading_pane_fp_t2_ParamLimits

0x08c1,	// (0x0004215e) list_single_heading_pane_fp_t2

0x0001,

0xfbc3,	// (0x00051460) list_single_heading_pane_fp_t_ParamLimits

0xfbc3,	// (0x00051460) list_single_heading_pane_fp_t

0x32a1,	// (0x00044b3e) aid_size_cell_fast

0x2a01,	// (0x0004429e) soft_indicator_pane_cp1_t1

0x32de,	// (0x00044b7b) cell_app_pane_cp2_ParamLimits

0x32de,	// (0x00044b7b) cell_app_pane_cp2

0x1a65,	// (0x00043302) fep_hwr_candidate_drop_down_list_pane

0xddc5,	// (0x0004f662) fep_hwr_candidate_pane_g3_ParamLimits

0xddc5,	// (0x0004f662) fep_hwr_candidate_pane_g3

0xddd2,	// (0x0004f66f) fep_hwr_candidate_pane_g4_ParamLimits

0xddd2,	// (0x0004f66f) fep_hwr_candidate_pane_g4

0x0002,

0xfb37,	// (0x000513d4) fep_hwr_candidate_pane_g_ParamLimits

0xfb37,	// (0x000513d4) fep_hwr_candidate_pane_g

0x73da,	// (0x00048c77) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x73da,	// (0x00048c77) fep_vkb_candidate_drop_down_list_pane

0x7810,	// (0x000490ad) fep_vkb_candidate_pane_g3

0x7818,	// (0x000490b5) fep_vkb_candidate_pane_g4

0x0002,

0xfb64,	// (0x00051401) fep_vkb_candidate_pane_g

0x74e0,	// (0x00048d7d) cell_hwr_candidate_pane_g1_ParamLimits

0x782f,	// (0x000490cc) cell_hwr_candidate_pane_g3_ParamLimits

0x782f,	// (0x000490cc) cell_hwr_candidate_pane_g3

0x7850,	// (0x000490ed) cell_hwr_candidate_pane_g4_ParamLimits

0x7850,	// (0x000490ed) cell_hwr_candidate_pane_g4

0x0002,

0xfb7e,	// (0x0005141b) cell_hwr_candidate_pane_g_ParamLimits

0xfb7e,	// (0x0005141b) cell_hwr_candidate_pane_g

0x7871,	// (0x0004910e) cell_vkb_candidate_pane_g3_ParamLimits

0x7871,	// (0x0004910e) cell_vkb_candidate_pane_g3

0x788c,	// (0x00049129) cell_vkb_candidate_pane_g4_ParamLimits

0x788c,	// (0x00049129) cell_vkb_candidate_pane_g4

0x7960,	// (0x000491fd) cell_app_pane_cp2_g1_ParamLimits

0x7960,	// (0x000491fd) cell_app_pane_cp2_g1

0x797e,	// (0x0004921b) cell_app_pane_cp2_g2_ParamLimits

0x797e,	// (0x0004921b) cell_app_pane_cp2_g2

0x0001,

0xfbc8,	// (0x00051465) cell_app_pane_cp2_g_ParamLimits

0xfbc8,	// (0x00051465) cell_app_pane_cp2_g

0x798a,	// (0x00049227) cell_app_pane_cp2_t1_ParamLimits

0x798a,	// (0x00049227) cell_app_pane_cp2_t1

0x308c,	// (0x00044929) grid_highlight_pane_cp1_ParamLimits

0x308c,	// (0x00044929) grid_highlight_pane_cp1

0x1d3b,	// (0x000435d8) cell_hwr_candidate_pane_cp1_ParamLimits

0x1d3b,	// (0x000435d8) cell_hwr_candidate_pane_cp1

0x74e0,	// (0x00048d7d) fep_hwr_candidate_drop_down_list_pane_g1

0x799c,	// (0x00049239) fep_hwr_candidate_drop_down_list_pane_g2

0x79a9,	// (0x00049246) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcd,	// (0x0005146a) fep_hwr_candidate_drop_down_list_pane_g

0x1d5f,	// (0x000435fc) fep_hwr_candidate_drop_down_list_scroll_pane

0x1d68,	// (0x00043605) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1d68,	// (0x00043605) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1d75,	// (0x00043612) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1d75,	// (0x00043612) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1d82,	// (0x0004361f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1d82,	// (0x0004361f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7871,	// (0x0004910e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7871,	// (0x0004910e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x788c,	// (0x00049129) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x788c,	// (0x00049129) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1d8f,	// (0x0004362c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1d8f,	// (0x0004362c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1daa,	// (0x00043647) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1daa,	// (0x00043647) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1dc5,	// (0x00043662) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1dc5,	// (0x00043662) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd4,	// (0x00051471) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd4,	// (0x00051471) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x79b6,	// (0x00049253) cell_vkb_candidate_pane_cp1_ParamLimits

0x79b6,	// (0x00049253) cell_vkb_candidate_pane_cp1

0x74e0,	// (0x00048d7d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x74e0,	// (0x00048d7d) fep_vkb_candidate_drop_down_list_pane_g1

0x799c,	// (0x00049239) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x799c,	// (0x00049239) fep_vkb_candidate_drop_down_list_pane_g2

0x79a9,	// (0x00049246) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x79a9,	// (0x00049246) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcd,	// (0x0005146a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcd,	// (0x0005146a) fep_vkb_candidate_drop_down_list_pane_g

0x79dc,	// (0x00049279) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x79dc,	// (0x00049279) fep_vkb_candidate_drop_down_list_scroll_pane

0x79e9,	// (0x00049286) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x79e9,	// (0x00049286) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x79f6,	// (0x00049293) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x79f6,	// (0x00049293) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7a02,	// (0x0004929f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7a02,	// (0x0004929f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x782f,	// (0x000490cc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x782f,	// (0x000490cc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7850,	// (0x000490ed) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7850,	// (0x000490ed) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7a0e,	// (0x000492ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7a0e,	// (0x000492ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7a2f,	// (0x000492cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7a2f,	// (0x000492cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7a50,	// (0x000492ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7a50,	// (0x000492ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x00051482) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x00051482) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xba7c,	// (0x0004d319) title_pane_g1_ParamLimits

0xba8d,	// (0x0004d32a) title_pane_g2_ParamLimits

0xf56a,	// (0x00050e07) title_pane_g_ParamLimits

0x36ec,	// (0x00044f89) aid_call2_pane

0x36f4,	// (0x00044f91) aid_call_pane

0x36fc,	// (0x00044f99) popup_clock_analogue_window_g1

0x36fc,	// (0x00044f99) popup_clock_analogue_window_g2

0x1115,	// (0x000429b2) popup_clock_analogue_window_g3

0x111e,	// (0x000429bb) popup_clock_analogue_window_g4

0xd99f,	// (0x0004f23c) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x00050fb6) popup_clock_analogue_window_g

0x1126,	// (0x000429c3) popup_clock_analogue_window_t1

0x1134,	// (0x000429d1) clock_digital_number_pane_ParamLimits

0x1134,	// (0x000429d1) clock_digital_number_pane

0x1140,	// (0x000429dd) clock_digital_number_pane_cp02_ParamLimits

0x1140,	// (0x000429dd) clock_digital_number_pane_cp02

0x114c,	// (0x000429e9) clock_digital_number_pane_cp03_ParamLimits

0x114c,	// (0x000429e9) clock_digital_number_pane_cp03

0x1158,	// (0x000429f5) clock_digital_number_pane_cp04_ParamLimits

0x1158,	// (0x000429f5) clock_digital_number_pane_cp04

0x1164,	// (0x00042a01) clock_digital_separator_pane_ParamLimits

0x1164,	// (0x00042a01) clock_digital_separator_pane

0x1170,	// (0x00042a0d) popup_clock_digital_window_t1_ParamLimits

0x1170,	// (0x00042a0d) popup_clock_digital_window_t1

0xd99f,	// (0x0004f23c) clock_digital_number_pane_g1

0xd99f,	// (0x0004f23c) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x00050fc1) clock_digital_number_pane_g

0xd99f,	// (0x0004f23c) clock_digital_separator_pane_g1

0xd99f,	// (0x0004f23c) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x00050fc1) clock_digital_separator_pane_g

0xd1ca,	// (0x0004ea67) aid_fill_nsta_ParamLimits

0xd2fb,	// (0x0004eb98) indicator_nsta_pane_ParamLimits

0x4987,	// (0x00046224) popup_clock_analogue_window

0x4987,	// (0x00046224) popup_clock_digital_window

0x3262,	// (0x00044aff) grid_indicator_nsta_pane_ParamLimits

0x6c7c,	// (0x00048519) clock_nsta_pane_t2

0x0001,

0xfab7,	// (0x00051354) clock_nsta_pane_t

0x10d9,	// (0x00042976) aid_size_max_handle

0xbfdb,	// (0x0004d878) aid_size_min_handle

0x3cea,	// (0x00045587) editor_scroll_pane

0x7a6b,	// (0x00049308) ex_editor_pane

0x320e,	// (0x00044aab) scroll_pane_cp13

0x302b,	// (0x000448c8) scroll_pane_cp14

0x3726,	// (0x00044fc3) scroll_pane_cp36

0xc068,	// (0x0004d905) list_single_graphic_hl_pane_cp2_ParamLimits

0xc068,	// (0x0004d905) list_single_graphic_hl_pane_cp2

0xda76,	// (0x0004f313) list_single_graphic_hl_pane_ParamLimits

0xda76,	// (0x0004f313) list_single_graphic_hl_pane

0x08d7,	// (0x00042174) aid_size_min_hl_cp1

0x7a73,	// (0x00049310) list_highlight_pane_cp34_ParamLimits

0x7a73,	// (0x00049310) list_highlight_pane_cp34

0x7a84,	// (0x00049321) list_single_graphic_hl_pane_g1_ParamLimits

0x7a84,	// (0x00049321) list_single_graphic_hl_pane_g1

0xb780,	// (0x0004d01d) list_single_graphic_hl_pane_g2_ParamLimits

0xb780,	// (0x0004d01d) list_single_graphic_hl_pane_g2

0xb780,	// (0x0004d01d) list_single_graphic_hl_pane_g3_ParamLimits

0xb780,	// (0x0004d01d) list_single_graphic_hl_pane_g3

0x469b,	// (0x00045f38) list_single_graphic_hl_pane_g4_ParamLimits

0x469b,	// (0x00045f38) list_single_graphic_hl_pane_g4

0x7ac1,	// (0x0004935e) list_single_graphic_hl_pane_g5_ParamLimits

0x7ac1,	// (0x0004935e) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x00051493) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x00051493) list_single_graphic_hl_pane_g

0xf554,	// (0x00050df1) list_single_graphic_hl_pane_t1_ParamLimits

0xf554,	// (0x00050df1) list_single_graphic_hl_pane_t1

0x7a91,	// (0x0004932e) aid_size_min_hl_cp2

0x7a9a,	// (0x00049337) list_highlight_pane_cp34_cp2_ParamLimits

0x7a9a,	// (0x00049337) list_highlight_pane_cp34_cp2

0x7a84,	// (0x00049321) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7a84,	// (0x00049321) list_single_graphic_hl_pane_g1_cp2

0x7aa7,	// (0x00049344) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7aa7,	// (0x00049344) list_single_graphic_hl_pane_g2_cp2

0x7ab3,	// (0x00049350) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7ab3,	// (0x00049350) list_single_graphic_hl_pane_g3_cp2

0x469b,	// (0x00045f38) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x469b,	// (0x00045f38) list_single_graphic_hl_pane_g4_cp2

0x7ac1,	// (0x0004935e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7ac1,	// (0x0004935e) list_single_graphic_hl_pane_g5_cp2

0xc0fb,	// (0x0004d998) control_pane_g4_ParamLimits

0xc0fb,	// (0x0004d998) control_pane_g4

0x4068,	// (0x00045905) bg_popup_sub_pane_cp10_ParamLimits

0x7260,	// (0x00048afd) list_choice_list_pane_ParamLimits

0x726f,	// (0x00048b0c) scroll_pane_cp23

0x2a8f,	// (0x0004432c) bg_popup_preview_window_pane_cp02_ParamLimits

0x78dd,	// (0x0004917a) list_preview_fixed_pane_ParamLimits

0x78f3,	// (0x00049190) list_preview_fixed_pane_cp_ParamLimits

0x78f3,	// (0x00049190) list_preview_fixed_pane_cp

0x78ff,	// (0x0004919c) popup_preview_fixed_window_g1_ParamLimits

0x78ff,	// (0x0004919c) popup_preview_fixed_window_g1

0x790b,	// (0x000491a8) popup_preview_fixed_window_g2_ParamLimits

0x790b,	// (0x000491a8) popup_preview_fixed_window_g2

0x0002,

0xfb85,	// (0x00051422) popup_preview_fixed_window_g_ParamLimits

0xfb85,	// (0x00051422) popup_preview_fixed_window_g

0x104b,	// (0x000428e8) aid_navi_side_left_pane_ParamLimits

0x1060,	// (0x000428fd) aid_navi_side_right_pane_ParamLimits

0x1078,	// (0x00042915) navi_icon_pane_stacon_ParamLimits

0x108c,	// (0x00042929) navi_navi_pane_stacon_ParamLimits

0x1078,	// (0x00042915) navi_text_pane_stacon_ParamLimits

0xd995,	// (0x0004f232) main_text_info_pane

0x7aeb,	// (0x00049388) listscroll_text_info_pane

0x7af3,	// (0x00049390) list_text_info_pane_ParamLimits

0x7af3,	// (0x00049390) list_text_info_pane

0x7b02,	// (0x0004939f) scroll_pane_cp24_ParamLimits

0x7b02,	// (0x0004939f) scroll_pane_cp24

0xdf5b,	// (0x0004f7f8) list_text_info_pane_t1_ParamLimits

0xdf5b,	// (0x0004f7f8) list_text_info_pane_t1

0xcac7,	// (0x0004e364) popup_fast_swap2_window_ParamLimits

0xcac7,	// (0x0004e364) popup_fast_swap2_window

0x7b45,	// (0x000493e2) aid_size_cell_fast2

0xd995,	// (0x0004f232) bg_popup_window_pane_cp17

0x503a,	// (0x000468d7) heading_pane_cp2

0x2cef,	// (0x0004458c) listscroll_fast2_pane

0x7b4f,	// (0x000493ec) grid_fast2_pane

0x7b59,	// (0x000493f6) listscroll_fast2_pane_g1

0x7b63,	// (0x00049400) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0005149e) listscroll_fast2_pane_g

0x320e,	// (0x00044aab) scroll_pane_cp26

0x7b6d,	// (0x0004940a) cell_fast2_pane_ParamLimits

0x7b6d,	// (0x0004940a) cell_fast2_pane

0x7b84,	// (0x00049421) cell_fast2_pane_g1

0x7b8d,	// (0x0004942a) cell_fast2_pane_g2

0x7b96,	// (0x00049433) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x000514a3) cell_fast2_pane_g

0x2de8,	// (0x00044685) grid_highlight_pane_cp9

0x2dfd,	// (0x0004469a) main_eswt_pane_ParamLimits

0x2dfd,	// (0x0004469a) main_eswt_pane

0x7b17,	// (0x000493b4) list_single_text_info_pane

0x7b9e,	// (0x0004943b) eswt_ctrl_button_pane

0x7b9e,	// (0x0004943b) eswt_ctrl_canvas_pane

0x7ba6,	// (0x00049443) eswt_ctrl_combo_pane

0x7b9e,	// (0x0004943b) eswt_ctrl_default_pane

0x7b9e,	// (0x0004943b) eswt_ctrl_label_pane

0x7bae,	// (0x0004944b) eswt_ctrl_wait_pane

0x7bb6,	// (0x00049453) eswt_shell_pane

0xd995,	// (0x0004f232) listscroll_eswt_app_pane

0x7bd6,	// (0x00049473) popup_eswt_tasktip_window_ParamLimits

0x7bd6,	// (0x00049473) popup_eswt_tasktip_window

0x4ca2,	// (0x0004653f) bg_popup_window_pane_cp18

0x7be7,	// (0x00049484) eswt_control_pane_g1_ParamLimits

0x7be7,	// (0x00049484) eswt_control_pane_g1

0x7bf4,	// (0x00049491) eswt_control_pane_g2_ParamLimits

0x7bf4,	// (0x00049491) eswt_control_pane_g2

0x7c01,	// (0x0004949e) eswt_control_pane_g3_ParamLimits

0x7c01,	// (0x0004949e) eswt_control_pane_g3

0x7c0e,	// (0x000494ab) eswt_control_pane_g4_ParamLimits

0x7c0e,	// (0x000494ab) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x000514aa) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x000514aa) eswt_control_pane_g

0x308c,	// (0x00044929) bg_button_pane_ParamLimits

0x308c,	// (0x00044929) bg_button_pane

0x2dfd,	// (0x0004469a) common_borders_pane_copy2_ParamLimits

0x2dfd,	// (0x0004469a) common_borders_pane_copy2

0x7c1b,	// (0x000494b8) control_button_pane_g1_ParamLimits

0x7c1b,	// (0x000494b8) control_button_pane_g1

0x7c27,	// (0x000494c4) control_button_pane_g2_ParamLimits

0x7c27,	// (0x000494c4) control_button_pane_g2

0x7c33,	// (0x000494d0) control_button_pane_g3_ParamLimits

0x7c33,	// (0x000494d0) control_button_pane_g3

0x0002,

0xfc16,	// (0x000514b3) control_button_pane_g_ParamLimits

0xfc16,	// (0x000514b3) control_button_pane_g

0x7c47,	// (0x000494e4) control_button_pane_t1

0x7c55,	// (0x000494f2) control_button_pane_t2

0x0001,

0xfc1d,	// (0x000514ba) control_button_pane_t

0x4bb0,	// (0x0004644d) bg_button_pane_g1

0x4bb8,	// (0x00046455) bg_button_pane_g2

0x4bc0,	// (0x0004645d) bg_button_pane_g3

0x4bc8,	// (0x00046465) bg_button_pane_g4

0x4bd0,	// (0x0004646d) bg_button_pane_g5

0x4bd8,	// (0x00046475) bg_button_pane_g6

0x4be0,	// (0x0004647d) bg_button_pane_g7

0x4be8,	// (0x00046485) bg_button_pane_g8

0x4bf0,	// (0x0004648d) bg_button_pane_g9

0x0008,

0xf877,	// (0x00051114) bg_button_pane_g

0x721b,	// (0x00048ab8) common_borders_pane_ParamLimits

0x721b,	// (0x00048ab8) common_borders_pane

0x7be7,	// (0x00049484) eswt_control_pane_g1_copy1_ParamLimits

0x7be7,	// (0x00049484) eswt_control_pane_g1_copy1

0x7bf4,	// (0x00049491) eswt_control_pane_g2_copy1_ParamLimits

0x7bf4,	// (0x00049491) eswt_control_pane_g2_copy1

0x7c01,	// (0x0004949e) eswt_control_pane_g3_copy1_ParamLimits

0x7c01,	// (0x0004949e) eswt_control_pane_g3_copy1

0x7c0e,	// (0x000494ab) eswt_control_pane_g4_copy1_ParamLimits

0x7c0e,	// (0x000494ab) eswt_control_pane_g4_copy1

0x7256,	// (0x00048af3) bg_eswt_ctrl_canvas_pane_g1

0x721b,	// (0x00048ab8) common_borders_pane_cp2_ParamLimits

0x721b,	// (0x00048ab8) common_borders_pane_cp2

0x721b,	// (0x00048ab8) common_borders_pane_cp3_ParamLimits

0x721b,	// (0x00048ab8) common_borders_pane_cp3

0x7c63,	// (0x00049500) separator_horizontal_pane

0x7c6b,	// (0x00049508) separator_vertical_pane

0x7be7,	// (0x00049484) eswt_control_pane_g1_copy2_ParamLimits

0x7be7,	// (0x00049484) eswt_control_pane_g1_copy2

0x7bf4,	// (0x00049491) eswt_control_pane_g2_copy2_ParamLimits

0x7bf4,	// (0x00049491) eswt_control_pane_g2_copy2

0x7c01,	// (0x0004949e) eswt_control_pane_g3_copy2_ParamLimits

0x7c01,	// (0x0004949e) eswt_control_pane_g3_copy2

0x7c0e,	// (0x000494ab) eswt_control_pane_g4_copy2_ParamLimits

0x7c0e,	// (0x000494ab) eswt_control_pane_g4_copy2

0xd995,	// (0x0004f232) common_borders_pane_cp4

0x7c74,	// (0x00049511) separator_horizontal_pane_g1

0x7c7d,	// (0x0004951a) separator_horizontal_pane_g2

0x7c86,	// (0x00049523) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x000514bf) separator_horizontal_pane_g

0x7be7,	// (0x00049484) eswt_control_pane_g1_copy3_ParamLimits

0x7be7,	// (0x00049484) eswt_control_pane_g1_copy3

0x7bf4,	// (0x00049491) eswt_control_pane_g2_copy3_ParamLimits

0x7bf4,	// (0x00049491) eswt_control_pane_g2_copy3

0x7c01,	// (0x0004949e) eswt_control_pane_g3_copy3_ParamLimits

0x7c01,	// (0x0004949e) eswt_control_pane_g3_copy3

0x7c0e,	// (0x000494ab) eswt_control_pane_g4_copy3_ParamLimits

0x7c0e,	// (0x000494ab) eswt_control_pane_g4_copy3

0xd995,	// (0x0004f232) common_borders_pane_cp5

0x7c8f,	// (0x0004952c) separator_vertical_pane_g1

0x7c98,	// (0x00049535) separator_vertical_pane_g2

0x7ca1,	// (0x0004953e) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x000514c6) separator_vertical_pane_g

0x7be7,	// (0x00049484) eswt_control_pane_g1_copy4_ParamLimits

0x7be7,	// (0x00049484) eswt_control_pane_g1_copy4

0x7bf4,	// (0x00049491) eswt_control_pane_g2_copy4_ParamLimits

0x7bf4,	// (0x00049491) eswt_control_pane_g2_copy4

0x7c01,	// (0x0004949e) eswt_control_pane_g3_copy4_ParamLimits

0x7c01,	// (0x0004949e) eswt_control_pane_g3_copy4

0x7c0e,	// (0x000494ab) eswt_control_pane_g4_copy4_ParamLimits

0x7c0e,	// (0x000494ab) eswt_control_pane_g4_copy4

0xdf7d,	// (0x0004f81a) eswt_ctrl_combo_button_pane

0xdf85,	// (0x0004f822) eswt_ctrl_input_pane

0xdf8d,	// (0x0004f82a) popup_choice_list_window_cp70

0xdf95,	// (0x0004f832) eswt_ctrl_input_pane_t1

0xd995,	// (0x0004f232) input_focus_pane_cp70

0x721b,	// (0x00048ab8) bg_button_pane_cp70_ParamLimits

0x721b,	// (0x00048ab8) bg_button_pane_cp70

0xdfa3,	// (0x0004f840) eswt_ctrl_combo_button_pane_g1

0x7cd8,	// (0x00049575) wait_bar_pane_cp70

0x4ca2,	// (0x0004653f) bg_popup_window_pane_cp70_ParamLimits

0x4ca2,	// (0x0004653f) bg_popup_window_pane_cp70

0x7ce0,	// (0x0004957d) popup_eswt_tasktip_window_t1

0x7cf6,	// (0x00049593) wait_bar_pane_cp71_ParamLimits

0x7cf6,	// (0x00049593) wait_bar_pane_cp71

0x7d02,	// (0x0004959f) grid_eswt_app_pane

0x3539,	// (0x00044dd6) scroll_pane_cp70

0xdfab,	// (0x0004f848) cell_eswt_app_pane_ParamLimits

0xdfab,	// (0x0004f848) cell_eswt_app_pane

0xdfdd,	// (0x0004f87a) cell_eswt_app_pane_g1_ParamLimits

0xdfdd,	// (0x0004f87a) cell_eswt_app_pane_g1

0xe00c,	// (0x0004f8a9) cell_eswt_app_pane_g2_ParamLimits

0xe00c,	// (0x0004f8a9) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x000514cd) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x000514cd) cell_eswt_app_pane_g

0xe035,	// (0x0004f8d2) cell_eswt_app_pane_t1_ParamLimits

0xe035,	// (0x0004f8d2) cell_eswt_app_pane_t1

0x7dc7,	// (0x00049664) grid_highlight_pane_cp70_ParamLimits

0x7dc7,	// (0x00049664) grid_highlight_pane_cp70

0x6133,	// (0x000479d0) set_content_pane_g1

0x3f9a,	// (0x00045837) status_small_volume_pane

0x1df4,	// (0x00043691) status_small_volume_pane_g1

0x1dfc,	// (0x00043699) volume_small2_pane

0x1e05,	// (0x000436a2) volume_small2_pane_g1

0x1e0e,	// (0x000436ab) volume_small2_pane_g2

0x1e17,	// (0x000436b4) volume_small2_pane_g3

0x1e20,	// (0x000436bd) volume_small2_pane_g4

0x1e29,	// (0x000436c6) volume_small2_pane_g5

0x1e32,	// (0x000436cf) volume_small2_pane_g6

0x1e3b,	// (0x000436d8) volume_small2_pane_g7

0x1e44,	// (0x000436e1) volume_small2_pane_g8

0x1e4d,	// (0x000436ea) volume_small2_pane_g9

0x1e56,	// (0x000436f3) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x000514d2) volume_small2_pane_g

0x7634,	// (0x00048ed1) fep_vkb_top_text_pane_g1_ParamLimits

0xdf03,	// (0x0004f7a0) fep_vkb_top_text_pane_t1_ParamLimits

0x7917,	// (0x000491b4) popup_preview_fixed_window_g3_ParamLimits

0x7917,	// (0x000491b4) popup_preview_fixed_window_g3

0xd15d,	// (0x0004e9fa) popup_toolbar_trans_pane

0xd8a0,	// (0x0004f13d) aid_height_set_list_ParamLimits

0x5fe9,	// (0x00047886) aid_size_parent_ParamLimits

0x4068,	// (0x00045905) list_highlight_pane_cp2_ParamLimits

0x6133,	// (0x000479d0) set_content_pane_g1_ParamLimits

0xc41b,	// (0x0004dcb8) list_single_image_pane_ParamLimits

0xc41b,	// (0x0004dcb8) list_single_image_pane

0xe067,	// (0x0004f904) aid_size_cell_image_ParamLimits

0xe067,	// (0x0004f904) aid_size_cell_image

0xe074,	// (0x0004f911) grid_single_image_pane_ParamLimits

0xe074,	// (0x0004f911) grid_single_image_pane

0x30a6,	// (0x00044943) list_single_image_pane_g1_ParamLimits

0x30a6,	// (0x00044943) list_single_image_pane_g1

0x30b2,	// (0x0004494f) list_single_image_pane_g2_ParamLimits

0x30b2,	// (0x0004494f) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x000514e7) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x000514e7) list_single_image_pane_g

0x7dee,	// (0x0004968b) list_single_image_pane_t1_ParamLimits

0x7dee,	// (0x0004968b) list_single_image_pane_t1

0xe082,	// (0x0004f91f) cell_image_list_pane_ParamLimits

0xe082,	// (0x0004f91f) cell_image_list_pane

0xe09c,	// (0x0004f939) cell_image_list_pane_g1

0xe0a5,	// (0x0004f942) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x000514ec) cell_image_list_pane_g

0x7e2c,	// (0x000496c9) aid_size_cell_tb_trans_pane

0x308c,	// (0x00044929) bg_tb_trans_pane

0x7e3e,	// (0x000496db) grid_tb_trans_pane

0x4bb0,	// (0x0004644d) bg_tb_trans_pane_g1

0x4bb8,	// (0x00046455) bg_tb_trans_pane_g2

0x4bc0,	// (0x0004645d) bg_tb_trans_pane_g3

0x4bc8,	// (0x00046465) bg_tb_trans_pane_g4

0x4bd0,	// (0x0004646d) bg_tb_trans_pane_g5

0x4be8,	// (0x00046485) bg_tb_trans_pane_g6

0x4bf0,	// (0x0004648d) bg_tb_trans_pane_g7

0x4bd8,	// (0x00046475) bg_tb_trans_pane_g8

0x4be0,	// (0x0004647d) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x000514f1) bg_tb_trans_pane_g

0x7e52,	// (0x000496ef) cell_toolbar_trans_pane_ParamLimits

0x7e52,	// (0x000496ef) cell_toolbar_trans_pane

0x7256,	// (0x00048af3) cell_toolbar_trans_pane_g1

0xdcab,	// (0x0004f548) list_form2_midp_pane_t1

0xdcb9,	// (0x0004f556) list_form2_midp_pane_t2

0x0001,

0xfafd,	// (0x0005139a) list_form2_midp_pane_t

0x6e93,	// (0x00048730) scroll_pane_cp51_ParamLimits

0x705a,	// (0x000488f7) form2_midp_wait_pane_g1

0x7063,	// (0x00048900) form2_midp_wait_pane_g2

0x706c,	// (0x00048909) form2_midp_wait_pane_g3

0x0002,

0xfb12,	// (0x000513af) form2_midp_wait_pane_g

0x2805,	// (0x000440a2) list_highlight_pane_cp21_ParamLimits

0x70b0,	// (0x0004894d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x70bf,	// (0x0004895c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x61e1,	// (0x00047a7e) list_single_2graphic_im_pane_ParamLimits

0x61e1,	// (0x00047a7e) list_single_2graphic_im_pane

0xe0ae,	// (0x0004f94b) list_single_2graphic_im_pane_g1_ParamLimits

0xe0ae,	// (0x0004f94b) list_single_2graphic_im_pane_g1

0xe0bf,	// (0x0004f95c) list_single_2graphic_im_pane_g2_ParamLimits

0xe0bf,	// (0x0004f95c) list_single_2graphic_im_pane_g2

0xe0cb,	// (0x0004f968) list_single_2graphic_im_pane_g3_ParamLimits

0xe0cb,	// (0x0004f968) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x00051504) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x00051504) list_single_2graphic_im_pane_g

0xe0df,	// (0x0004f97c) list_single_2graphic_im_pane_t1_ParamLimits

0xe0df,	// (0x0004f97c) list_single_2graphic_im_pane_t1

0x7923,	// (0x000491c0) list_single_graphic_2heading_pane_fp_ParamLimits

0x7923,	// (0x000491c0) list_single_graphic_2heading_pane_fp

0x07b9,	// (0x00042056) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x07b9,	// (0x00042056) list_single_graphic_2heading_pane_fp_g1

0x793c,	// (0x000491d9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x793c,	// (0x000491d9) list_single_graphic_2heading_pane_fp_g2

0x0f15,	// (0x000427b2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0f15,	// (0x000427b2) list_single_graphic_2heading_pane_fp_g3

0x1cb7,	// (0x00043554) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1cb7,	// (0x00043554) list_single_graphic_2heading_pane_fp_g4

0x7948,	// (0x000491e5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7948,	// (0x000491e5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb95,	// (0x00051432) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb95,	// (0x00051432) list_single_graphic_2heading_pane_fp_g

0x0902,	// (0x0004219f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0902,	// (0x0004219f) list_single_graphic_2heading_pane_fp_t1

0x07f1,	// (0x0004208e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x07f1,	// (0x0004208e) list_single_graphic_2heading_pane_fp_t2

0x0918,	// (0x000421b5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0918,	// (0x000421b5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0005150d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0005150d) list_single_graphic_2heading_pane_fp_t

0x72f6,	// (0x00048b93) fep_hwr_write_pane_g5_ParamLimits

0x72f6,	// (0x00048b93) fep_hwr_write_pane_g5

0x7302,	// (0x00048b9f) fep_hwr_write_pane_g6_ParamLimits

0x7302,	// (0x00048b9f) fep_hwr_write_pane_g6

0x7bb6,	// (0x00049453) eswt_shell_pane_ParamLimits

0x4ca2,	// (0x0004653f) bg_popup_window_pane_cp18_ParamLimits

0x5f2f,	// (0x000477cc) heading_pane_cp70

0x7ce0,	// (0x0004957d) popup_eswt_tasktip_window_t1_ParamLimits

0xd220,	// (0x0004eabd) aid_touch_tab_arrow_left

0xd236,	// (0x0004ead3) aid_touch_tab_arrow_right

0xbaa5,	// (0x0004d342) title_pane_g3_ParamLimits

0xbaa5,	// (0x0004d342) title_pane_g3

0x304b,	// (0x000448e8) set_value_pane_g1

0xd15d,	// (0x0004e9fa) popup_toolbar_trans_pane_ParamLimits

0x7e2c,	// (0x000496c9) aid_size_cell_tb_trans_pane_ParamLimits

0x308c,	// (0x00044929) bg_tb_trans_pane_ParamLimits

0x7e3e,	// (0x000496db) grid_tb_trans_pane_ParamLimits

0x2a8f,	// (0x0004432c) cont_note_pane_ParamLimits

0x2a8f,	// (0x0004432c) cont_note_pane

0x2dfd,	// (0x0004469a) cont_snote2_single_text_pane_ParamLimits

0x2dfd,	// (0x0004469a) cont_snote2_single_text_pane

0x2dfd,	// (0x0004469a) cont_snote2_single_graphic_pane_ParamLimits

0x2dfd,	// (0x0004469a) cont_snote2_single_graphic_pane

0x5256,	// (0x00046af3) cont_note_wait_pane_ParamLimits

0x5256,	// (0x00046af3) cont_note_wait_pane

0x5256,	// (0x00046af3) cont_note_image_pane_ParamLimits

0x5256,	// (0x00046af3) cont_note_image_pane

0x7ee6,	// (0x00049783) popup_note2_window_g1_ParamLimits

0x7ee6,	// (0x00049783) popup_note2_window_g1

0x7f17,	// (0x000497b4) popup_note2_window_t1_ParamLimits

0x7f17,	// (0x000497b4) popup_note2_window_t1

0x7f5c,	// (0x000497f9) popup_note2_window_t2_ParamLimits

0x7f5c,	// (0x000497f9) popup_note2_window_t2

0x7fa1,	// (0x0004983e) popup_note2_window_t3_ParamLimits

0x7fa1,	// (0x0004983e) popup_note2_window_t3

0x7fe6,	// (0x00049883) popup_note2_window_t4_ParamLimits

0x7fe6,	// (0x00049883) popup_note2_window_t4

0x2b13,	// (0x000443b0) popup_note2_window_t5_ParamLimits

0x2b13,	// (0x000443b0) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x00051519) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x00051519) popup_note2_window_t

0x8015,	// (0x000498b2) popup_note2_image_window_g1_ParamLimits

0x8015,	// (0x000498b2) popup_note2_image_window_g1

0x8021,	// (0x000498be) popup_note2_image_window_g2_ParamLimits

0x8021,	// (0x000498be) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x00051524) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x00051524) popup_note2_image_window_g

0x8033,	// (0x000498d0) popup_note2_image_window_t1_ParamLimits

0x8033,	// (0x000498d0) popup_note2_image_window_t1

0x804b,	// (0x000498e8) popup_note2_image_window_t2_ParamLimits

0x804b,	// (0x000498e8) popup_note2_image_window_t2

0x8063,	// (0x00049900) popup_note2_image_window_t3_ParamLimits

0x8063,	// (0x00049900) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x00051529) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x00051529) popup_note2_image_window_t

0x5264,	// (0x00046b01) popup_note2_wait_window_g1_ParamLimits

0x5264,	// (0x00046b01) popup_note2_wait_window_g1

0x807f,	// (0x0004991c) popup_note2_wait_window_g2_ParamLimits

0x807f,	// (0x0004991c) popup_note2_wait_window_g2

0x527c,	// (0x00046b19) popup_note2_wait_window_g3_ParamLimits

0x527c,	// (0x00046b19) popup_note2_wait_window_g3

0x0002,

0xfc93,	// (0x00051530) popup_note2_wait_window_g_ParamLimits

0xfc93,	// (0x00051530) popup_note2_wait_window_g

0x808b,	// (0x00049928) popup_note2_wait_window_t1_ParamLimits

0x808b,	// (0x00049928) popup_note2_wait_window_t1

0x80a9,	// (0x00049946) popup_note2_wait_window_t2_ParamLimits

0x80a9,	// (0x00049946) popup_note2_wait_window_t2

0x80c7,	// (0x00049964) popup_note2_wait_window_t3_ParamLimits

0x80c7,	// (0x00049964) popup_note2_wait_window_t3

0x80d9,	// (0x00049976) popup_note2_wait_window_t4_ParamLimits

0x80d9,	// (0x00049976) popup_note2_wait_window_t4

0x0003,

0xfc9a,	// (0x00051537) popup_note2_wait_window_t_ParamLimits

0xfc9a,	// (0x00051537) popup_note2_wait_window_t

0x80eb,	// (0x00049988) wait_bar2_pane_ParamLimits

0x80eb,	// (0x00049988) wait_bar2_pane

0x8103,	// (0x000499a0) popup_snote2_single_text_window_g1_ParamLimits

0x8103,	// (0x000499a0) popup_snote2_single_text_window_g1

0x812b,	// (0x000499c8) popup_snote2_single_text_window_t1_ParamLimits

0x812b,	// (0x000499c8) popup_snote2_single_text_window_t1

0x8177,	// (0x00049a14) popup_snote2_single_text_window_t2_ParamLimits

0x8177,	// (0x00049a14) popup_snote2_single_text_window_t2

0x81c3,	// (0x00049a60) popup_snote2_single_text_window_t3_ParamLimits

0x81c3,	// (0x00049a60) popup_snote2_single_text_window_t3

0x8204,	// (0x00049aa1) popup_snote2_single_text_window_t4_ParamLimits

0x8204,	// (0x00049aa1) popup_snote2_single_text_window_t4

0x823a,	// (0x00049ad7) popup_snote2_single_text_window_t5_ParamLimits

0x823a,	// (0x00049ad7) popup_snote2_single_text_window_t5

0x0004,

0xfca3,	// (0x00051540) popup_snote2_single_text_window_t_ParamLimits

0xfca3,	// (0x00051540) popup_snote2_single_text_window_t

0x8265,	// (0x00049b02) popup_snote2_single_graphic_window_g1_ParamLimits

0x8265,	// (0x00049b02) popup_snote2_single_graphic_window_g1

0x828d,	// (0x00049b2a) popup_snote2_single_graphic_window_g2_ParamLimits

0x828d,	// (0x00049b2a) popup_snote2_single_graphic_window_g2

0x0001,

0xfcae,	// (0x0005154b) popup_snote2_single_graphic_window_g_ParamLimits

0xfcae,	// (0x0005154b) popup_snote2_single_graphic_window_g

0x82b5,	// (0x00049b52) popup_snote2_single_graphic_window_t1_ParamLimits

0x82b5,	// (0x00049b52) popup_snote2_single_graphic_window_t1

0x8301,	// (0x00049b9e) popup_snote2_single_graphic_window_t2_ParamLimits

0x8301,	// (0x00049b9e) popup_snote2_single_graphic_window_t2

0x81c3,	// (0x00049a60) popup_snote2_single_graphic_window_t3_ParamLimits

0x81c3,	// (0x00049a60) popup_snote2_single_graphic_window_t3

0x8204,	// (0x00049aa1) popup_snote2_single_graphic_window_t4_ParamLimits

0x8204,	// (0x00049aa1) popup_snote2_single_graphic_window_t4

0x823a,	// (0x00049ad7) popup_snote2_single_graphic_window_t5_ParamLimits

0x823a,	// (0x00049ad7) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb3,	// (0x00051550) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb3,	// (0x00051550) popup_snote2_single_graphic_window_t

0x6d3d,	// (0x000485da) clock_nsta_pane_cp2_t1

0x6d3d,	// (0x000485da) clock_nsta_pane_cp2_t2

0x0001,

0xfad3,	// (0x00051370) clock_nsta_pane_cp2_t

0x0261,	// (0x00041afe) form_field_data_wide_pane_g1_ParamLimits

0x30a6,	// (0x00044943) form_field_data_wide_pane_g2_ParamLimits

0x30a6,	// (0x00044943) form_field_data_wide_pane_g2

0x30b2,	// (0x0004494f) form_field_data_wide_pane_g3_ParamLimits

0x30b2,	// (0x0004494f) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x00050f39) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x00050f39) form_field_data_wide_pane_g

0xdbb3,	// (0x0004f450) grid_touch_3_pane_ParamLimits

0xdbb3,	// (0x0004f450) grid_touch_3_pane

0xe110,	// (0x0004f9ad) cell_touch_3_pane_ParamLimits

0xe110,	// (0x0004f9ad) cell_touch_3_pane

0x7256,	// (0x00048af3) cell_touch_3_pane_g1

0x7256,	// (0x00048af3) cell_touch_3_pane_g2

0x0001,

0xfb58,	// (0x000513f5) cell_touch_3_pane_g

0x2b45,	// (0x000443e2) cont_query_data_pane

0x2b4d,	// (0x000443ea) cont_query_data_pane_cp1

0x8380,	// (0x00049c1d) button_value_adjust_pane_cp7

0x8388,	// (0x00049c25) query_popup_pane_cp3

0x37c6,	// (0x00045063) bg_popup_sub_pane_cp22_ParamLimits

0x118f,	// (0x00042a2c) navi_navi_volume_pane_cp2

0x11aa,	// (0x00042a47) popup_side_volume_key_window_g2

0x11b9,	// (0x00042a56) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x00050fcb) popup_side_volume_key_window_g

0x11d6,	// (0x00042a73) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x00050fd2) popup_side_volume_key_window_t

0x3a81,	// (0x0004531e) popup_side_volume_key_window_ParamLimits

0xb20c,	// (0x0004caa9) list_double_graphic_pane_g4_ParamLimits

0xb20c,	// (0x0004caa9) list_double_graphic_pane_g4

0xc406,	// (0x0004dca3) list_single_2heading_msg_pane_ParamLimits

0xc406,	// (0x0004dca3) list_single_2heading_msg_pane

0xc479,	// (0x0004dd16) list_single_2heading_msg_pane_g1_ParamLimits

0xc479,	// (0x0004dd16) list_single_2heading_msg_pane_g1

0xc485,	// (0x0004dd22) list_single_2heading_msg_pane_g2_ParamLimits

0xc485,	// (0x0004dd22) list_single_2heading_msg_pane_g2

0xc498,	// (0x0004dd35) list_single_2heading_msg_pane_g3_ParamLimits

0xc498,	// (0x0004dd35) list_single_2heading_msg_pane_g3

0xc4a4,	// (0x0004dd41) list_single_2heading_msg_pane_g4_ParamLimits

0xc4a4,	// (0x0004dd41) list_single_2heading_msg_pane_g4

0x0003,

0xfcbe,	// (0x0005155b) list_single_2heading_msg_pane_g_ParamLimits

0xfcbe,	// (0x0005155b) list_single_2heading_msg_pane_g

0xb78c,	// (0x0004d029) list_single_2heading_msg_pane_t1_ParamLimits

0xb78c,	// (0x0004d029) list_single_2heading_msg_pane_t1

0xb7b4,	// (0x0004d051) list_single_2heading_msg_pane_t2_ParamLimits

0xb7b4,	// (0x0004d051) list_single_2heading_msg_pane_t2

0xb81f,	// (0x0004d0bc) list_single_2heading_msg_pane_t3_ParamLimits

0xb81f,	// (0x0004d0bc) list_single_2heading_msg_pane_t3

0x09c8,	// (0x00042265) list_single_2heading_msg_pane_t4_ParamLimits

0x09c8,	// (0x00042265) list_single_2heading_msg_pane_t4

0x0003,

0xfcc7,	// (0x00051564) list_single_2heading_msg_pane_t_ParamLimits

0xfcc7,	// (0x00051564) list_single_2heading_msg_pane_t

0x2759,	// (0x00043ff6) title_pane_g4_ParamLimits

0x2759,	// (0x00043ff6) title_pane_g4

0x0f9b,	// (0x00042838) title_pane_stacon_g3_ParamLimits

0x0f9b,	// (0x00042838) title_pane_stacon_g3

0x7ea9,	// (0x00049746) list_single_2graphic_im_pane_g4_ParamLimits

0x7ea9,	// (0x00049746) list_single_2graphic_im_pane_g4

0x5ccc,	// (0x00047569) popup_side_volume_key_window_cp

0x6542,	// (0x00047ddf) main_idle_act2_pane_t1

0x158e,	// (0x00042e2b) toolbar_button_pane_g10

0xbe32,	// (0x0004d6cf) popup_toolbar_window_cp1

0x6d2e,	// (0x000485cb) clock_nsta_pane_cp_t1

0x6d2e,	// (0x000485cb) clock_nsta_pane_cp_t2

0x0001,

0xface,	// (0x0005136b) clock_nsta_pane_cp_t

0x118f,	// (0x00042a2c) navi_navi_volume_pane_cp2_ParamLimits

0x119e,	// (0x00042a3b) popup_side_volume_key_window_g1_ParamLimits

0x11aa,	// (0x00042a47) popup_side_volume_key_window_g2_ParamLimits

0x11b9,	// (0x00042a56) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x00050fcb) popup_side_volume_key_window_g_ParamLimits

0x1a51,	// (0x000432ee) fep_hwr_aid_pane

0xddb7,	// (0x0004f654) bg_fep_hwr_top_pane_g4_ParamLimits

0x72c6,	// (0x00048b63) fep_hwr_top_pane_g1_ParamLimits

0x72d8,	// (0x00048b75) fep_hwr_top_pane_g2_ParamLimits

0x1b0c,	// (0x000433a9) fep_hwr_top_pane_g3_ParamLimits

0xfb23,	// (0x000513c0) fep_hwr_top_pane_g_ParamLimits

0x1b21,	// (0x000433be) fep_hwr_top_text_pane_ParamLimits

0x5a81,	// (0x0004731e) aid_touch_tab_arrow_arrow_2

0x5a8a,	// (0x00047327) aid_touch_tab_arrow_left_2

0x1a65,	// (0x00043302) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1a9c,	// (0x00043339) fep_hwr_prediction_pane

0x742e,	// (0x00048ccb) fep_vkb_prediction_pane

0xdee3,	// (0x0004f780) fep_vkb_side_pane_g3_ParamLimits

0xdee3,	// (0x0004f780) fep_vkb_side_pane_g3

0x74e0,	// (0x00048d7d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x799c,	// (0x00049239) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x79a9,	// (0x00049246) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcd,	// (0x0005146a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x83af,	// (0x00049c4c) fep_hwr_prediction_pane_g1

0x1e8f,	// (0x0004372c) fep_hwr_prediction_pane_g2

0x1e97,	// (0x00043734) fep_hwr_prediction_pane_g3

0x1e9f,	// (0x0004373c) fep_hwr_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0005156d) fep_hwr_prediction_pane_g

0x83af,	// (0x00049c4c) fep_vkb_prediction_pane_g1

0x83b9,	// (0x00049c56) fep_vkb_prediction_pane_g2

0x83c1,	// (0x00049c5e) fep_vkb_prediction_pane_g3

0x83c9,	// (0x00049c66) fep_vkb_prediction_pane_g4

0x0003,

0xfcd9,	// (0x00051576) fep_vkb_prediction_pane_g

0x66a7,	// (0x00047f44) slider_set_pane_g3

0x66bb,	// (0x00047f58) slider_set_pane_g4

0x66d3,	// (0x00047f70) slider_set_pane_g5

0x66a7,	// (0x00047f44) slider_set_pane_g6

0x1883,	// (0x00043120) slider_set_pane_g7

0x617a,	// (0x00047a17) slider_form_pane_g3

0x6183,	// (0x00047a20) slider_form_pane_g4

0x618b,	// (0x00047a28) slider_form_pane_g5

0x617a,	// (0x00047a17) slider_form_pane_g6

0xda35,	// (0x0004f2d2) slider_form_pane_g7

0x6852,	// (0x000480ef) slider_set_pane_vc_g3

0x685b,	// (0x000480f8) slider_set_pane_vc_g4

0x6864,	// (0x00048101) slider_set_pane_vc_g5

0x6852,	// (0x000480ef) slider_set_pane_vc_g6

0x686d,	// (0x0004810a) slider_set_pane_vc_g7

0x6852,	// (0x000480ef) slider_form_pane_vc_g1

0x685b,	// (0x000480f8) slider_form_pane_vc_g2

0x6864,	// (0x00048101) slider_form_pane_vc_g3

0x6852,	// (0x000480ef) slider_form_pane_vc_g4

0x6a22,	// (0x000482bf) slider_form_pane_vc_g5

0x0004,

0xfaa7,	// (0x00051344) slider_form_pane_vc_g

0xd995,	// (0x0004f232) main_idle_act3_pane

0x83d1,	// (0x00049c6e) ai3_links_pane

0xe15a,	// (0x0004f9f7) popup_ai3_data_window_ParamLimits

0xe15a,	// (0x0004f9f7) popup_ai3_data_window

0xd995,	// (0x0004f232) grid_ai3_links_pane

0xe178,	// (0x0004fa15) cell_ai3_links_pane_ParamLimits

0xe178,	// (0x0004fa15) cell_ai3_links_pane

0x8412,	// (0x00049caf) bg_popup_sub_pane_cp11

0x841f,	// (0x00049cbc) cell_ai3_links_pane_g1

0xd995,	// (0x0004f232) bg_popup_sub_pane_cp12

0x8444,	// (0x00049ce1) heading_ai3_data_pane

0x844c,	// (0x00049ce9) list_ai3_gene_pane

0x8458,	// (0x00049cf5) popup_ai3_data_window_g1

0x8460,	// (0x00049cfd) heading_ai3_data_pane_g1

0x8468,	// (0x00049d05) heading_ai3_data_pane_t1

0x8476,	// (0x00049d13) list_double_ai3_gene_pane_ParamLimits

0x8476,	// (0x00049d13) list_double_ai3_gene_pane

0x8483,	// (0x00049d20) list_single_ai3_gene_pane_ParamLimits

0x8483,	// (0x00049d20) list_single_ai3_gene_pane

0x721b,	// (0x00048ab8) list_highlight_pane_cp7_ParamLimits

0x721b,	// (0x00048ab8) list_highlight_pane_cp7

0x8490,	// (0x00049d2d) list_single_a13_gene_pane_t1_ParamLimits

0x8490,	// (0x00049d2d) list_single_a13_gene_pane_t1

0x84a7,	// (0x00049d44) list_single_ai3_gene_pane_g1

0x84b0,	// (0x00049d4d) list_single_ai3_gene_pane_g2

0x0001,

0xfce2,	// (0x0005157f) list_single_ai3_gene_pane_g

0x84b8,	// (0x00049d55) list_double_ai3_gene_pane_g1_ParamLimits

0x84b8,	// (0x00049d55) list_double_ai3_gene_pane_g1

0x84c4,	// (0x00049d61) list_double_ai3_gene_pane_t1_ParamLimits

0x84c4,	// (0x00049d61) list_double_ai3_gene_pane_t1

0x84e0,	// (0x00049d7d) list_double_ai3_gene_pane_t2_ParamLimits

0x84e0,	// (0x00049d7d) list_double_ai3_gene_pane_t2

0x84f5,	// (0x00049d92) list_double_ai3_gene_pane_t3_ParamLimits

0x84f5,	// (0x00049d92) list_double_ai3_gene_pane_t3

0x0002,

0xfce7,	// (0x00051584) list_double_ai3_gene_pane_t_ParamLimits

0xfce7,	// (0x00051584) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x092e,	// (0x000421cb) aid_size_min_col_2

0xe144,	// (0x0004f9e1) aid_size_min_msg_ParamLimits

0xe144,	// (0x0004f9e1) aid_size_min_msg

0xdef7,	// (0x0004f794) fep_vkb_top_text_pane_g2_ParamLimits

0xdef7,	// (0x0004f794) fep_vkb_top_text_pane_g2

0x0001,

0xfb53,	// (0x000513f0) fep_vkb_top_text_pane_g_ParamLimits

0xfb53,	// (0x000513f0) fep_vkb_top_text_pane_g

0xd995,	// (0x0004f232) main_hc_apps_shell_pane

0x8512,	// (0x00049daf) grid_hc_apps_pane_ParamLimits

0x8512,	// (0x00049daf) grid_hc_apps_pane

0x8521,	// (0x00049dbe) list_hc_apps_pane

0x8529,	// (0x00049dc6) scroll_pane_cp37_ParamLimits

0x8529,	// (0x00049dc6) scroll_pane_cp37

0xe192,	// (0x0004fa2f) cell_hc_apps_pane_ParamLimits

0xe192,	// (0x0004fa2f) cell_hc_apps_pane

0xe25c,	// (0x0004faf9) cell_hc_apps_pane_g1_ParamLimits

0xe25c,	// (0x0004faf9) cell_hc_apps_pane_g1

0x861e,	// (0x00049ebb) cell_hc_apps_pane_g2_ParamLimits

0x861e,	// (0x00049ebb) cell_hc_apps_pane_g2

0x863a,	// (0x00049ed7) cell_hc_apps_pane_g3_ParamLimits

0x863a,	// (0x00049ed7) cell_hc_apps_pane_g3

0x0002,

0xfcee,	// (0x0005158b) cell_hc_apps_pane_g_ParamLimits

0xfcee,	// (0x0005158b) cell_hc_apps_pane_g

0xe289,	// (0x0004fb26) cell_hc_apps_pane_t1_ParamLimits

0xe289,	// (0x0004fb26) cell_hc_apps_pane_t1

0x2a8f,	// (0x0004432c) grid_highlight_pane_cp10_ParamLimits

0x2a8f,	// (0x0004432c) grid_highlight_pane_cp10

0xe2c9,	// (0x0004fb66) list_single_hc_apps_pane_ParamLimits

0xe2c9,	// (0x0004fb66) list_single_hc_apps_pane

0xe303,	// (0x0004fba0) list_single_hc_apps_pane_g1

0xc4bc,	// (0x0004dd59) list_single_hc_apps_pane_g2

0x0001,

0xfcf5,	// (0x00051592) list_single_hc_apps_pane_g

0xc4d5,	// (0x0004dd72) list_single_hc_apps_pane_g2_copy1

0xb88d,	// (0x0004d12a) list_single_hc_apps_pane_t1

0x2805,	// (0x000440a2) bg_set_opt_pane_cp_ParamLimits

0x0e1c,	// (0x000426b9) setting_slider_pane_t1_ParamLimits

0x0e32,	// (0x000426cf) setting_slider_pane_t2_ParamLimits

0x0e4c,	// (0x000426e9) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00050e17) setting_slider_pane_t_ParamLimits

0x0e64,	// (0x00042701) slider_set_pane_ParamLimits

0x145e,	// (0x00042cfb) control_pane_g5_ParamLimits

0x145e,	// (0x00042cfb) control_pane_g5

0x5f9b,	// (0x00047838) slider_set_pane_g1_ParamLimits

0x1877,	// (0x00043114) slider_set_pane_g2_ParamLimits

0x66a7,	// (0x00047f44) slider_set_pane_g3_ParamLimits

0x66bb,	// (0x00047f58) slider_set_pane_g4_ParamLimits

0x66d3,	// (0x00047f70) slider_set_pane_g5_ParamLimits

0x66a7,	// (0x00047f44) slider_set_pane_g6_ParamLimits

0x1883,	// (0x00043120) slider_set_pane_g7_ParamLimits

0xf975,	// (0x00051212) slider_set_pane_g_ParamLimits

0x3b66,	// (0x00045403) navi_icon_text_pane_ParamLimits

0xd1ea,	// (0x0004ea87) aid_fill_nsta_2_ParamLimits

0xd220,	// (0x0004eabd) aid_touch_tab_arrow_left_ParamLimits

0xd236,	// (0x0004ead3) aid_touch_tab_arrow_right_ParamLimits

0xd2d1,	// (0x0004eb6e) clock_nsta_pane_ParamLimits

0xd75e,	// (0x0004effb) navi_icon_pane_g1_ParamLimits

0xd76a,	// (0x0004f007) navi_text_pane_t1_ParamLimits

0xdc8d,	// (0x0004f52a) navi_icon_text_pane_g1_ParamLimits

0xdc99,	// (0x0004f536) navi_icon_text_pane_t1_ParamLimits

0xe303,	// (0x0004fba0) list_single_hc_apps_pane_g1_ParamLimits

0xc4bc,	// (0x0004dd59) list_single_hc_apps_pane_g2_ParamLimits

0xfcf5,	// (0x00051592) list_single_hc_apps_pane_g_ParamLimits

0xc4d5,	// (0x0004dd72) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb88d,	// (0x0004d12a) list_single_hc_apps_pane_t1_ParamLimits

0xba11,	// (0x0004d2ae) popup_toolbar2_fixed_window_ParamLimits

0xba11,	// (0x0004d2ae) popup_toolbar2_fixed_window

0xd153,	// (0x0004e9f0) popup_toolbar2_float_window

0xd995,	// (0x0004f232) bg_popup_sub_pane_cp27

0x86f4,	// (0x00049f91) grid_toolbar2_float_pane

0xd995,	// (0x0004f232) bg_popup_sub_pane_cp26

0x86f4,	// (0x00049f91) grid_toolbar2_fixed_pane

0xe31c,	// (0x0004fbb9) cell_toolbar2_fixed_pane_ParamLimits

0xe31c,	// (0x0004fbb9) cell_toolbar2_fixed_pane

0xe339,	// (0x0004fbd6) cell_toolbar2_fixed_pane_g1

0x8715,	// (0x00049fb2) toolbar2_fixed_button_pane

0x4bb0,	// (0x0004644d) toolbar2_fixed_button_pane_g1

0x4bb8,	// (0x00046455) toolbar2_fixed_button_pane_g2

0x4bc0,	// (0x0004645d) toolbar2_fixed_button_pane_g3

0x4bc8,	// (0x00046465) toolbar2_fixed_button_pane_g4

0x4bd0,	// (0x0004646d) toolbar2_fixed_button_pane_g5

0x4bd8,	// (0x00046475) toolbar2_fixed_button_pane_g6

0x4be0,	// (0x0004647d) toolbar2_fixed_button_pane_g7

0x4be8,	// (0x00046485) toolbar2_fixed_button_pane_g8

0x4bf0,	// (0x0004648d) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x00051114) toolbar2_fixed_button_pane_g

0x871d,	// (0x00049fba) cell_toolbar2_float_pane_ParamLimits

0x871d,	// (0x00049fba) cell_toolbar2_float_pane

0x872e,	// (0x00049fcb) cell_toolbar2_float_pane_g1

0x8715,	// (0x00049fb2) toolbar2_fixed_button_pane_cp

0xdddf,	// (0x0004f67c) fep_vkb_accented_list_pane_ParamLimits

0xdddf,	// (0x0004f67c) fep_vkb_accented_list_pane

0x1c83,	// (0x00043520) bg_popup_fep_shadow_pane_g9

0x3cea,	// (0x00045587) bg_popup_fep_shadow_pane_cp3

0x31f5,	// (0x00044a92) list_accented_list_pane

0x8737,	// (0x00049fd4) list_single_accented_list_pane_ParamLimits

0x8737,	// (0x00049fd4) list_single_accented_list_pane

0x3cea,	// (0x00045587) list_highlight_pane_cp10

0x8748,	// (0x00049fe5) list_single_accented_list_pane_t1

0xd06f,	// (0x0004e90c) popup_slider_window_ParamLimits

0xd06f,	// (0x0004e90c) popup_slider_window

0x8390,	// (0x00049c2d) aid_indentation_list_msg

0xe444,	// (0x0004fce1) bg_popup_window_pane_cp19

0x8882,	// (0x0004a11f) popup_slider_window_g1

0x889e,	// (0x0004a13b) popup_slider_window_g2

0x88ba,	// (0x0004a157) popup_slider_window_g3

0x0005,

0xfcfa,	// (0x00051597) popup_slider_window_g

0x8916,	// (0x0004a1b3) popup_slider_window_t1

0x898a,	// (0x0004a227) small_volume_slider_vertical_pane

0x7256,	// (0x00048af3) small_volume_slider_vertical_pane_g1

0x7256,	// (0x00048af3) small_volume_slider_vertical_pane_g2

0x89a6,	// (0x0004a243) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0c,	// (0x000515a9) small_volume_slider_vertical_pane_g

0xb97b,	// (0x0004d218) area_side_right_pane_ParamLimits

0xb97b,	// (0x0004d218) area_side_right_pane

0xc4f1,	// (0x0004dd8e) aid_size_side_button_ParamLimits

0xc4f1,	// (0x0004dd8e) aid_size_side_button

0xc50a,	// (0x0004dda7) grid_sctrl_middle_pane_ParamLimits

0xc50a,	// (0x0004dda7) grid_sctrl_middle_pane

0x1f10,	// (0x000437ad) sctrl_sk_bottom_pane

0x1f21,	// (0x000437be) sctrl_sk_top_pane

0x1f33,	// (0x000437d0) aid_touch_sctrl_top

0x2a8f,	// (0x0004432c) bg_sctrl_sk_pane_ParamLimits

0x2a8f,	// (0x0004432c) bg_sctrl_sk_pane

0x1f40,	// (0x000437dd) sctrl_sk_top_pane_g1

0x1f4d,	// (0x000437ea) sctrl_sk_top_pane_t1

0x1f33,	// (0x000437d0) aid_touch_sctrl_bottom

0x2a8f,	// (0x0004432c) bg_sctrl_sk_pane_cp_ParamLimits

0x2a8f,	// (0x0004432c) bg_sctrl_sk_pane_cp

0x1f68,	// (0x00043805) sctrl_sk_bottom_pane_g1

0x1f4d,	// (0x000437ea) sctrl_sk_bottom_pane_t1

0xc524,	// (0x0004ddc1) cell_sctrl_middle_pane_ParamLimits

0xc524,	// (0x0004ddc1) cell_sctrl_middle_pane

0xc537,	// (0x0004ddd4) aid_touch_sctrl_middle_ParamLimits

0xc537,	// (0x0004ddd4) aid_touch_sctrl_middle

0xc544,	// (0x0004dde1) bg_sctrl_middle_pane_ParamLimits

0xc544,	// (0x0004dde1) bg_sctrl_middle_pane

0x8a31,	// (0x0004a2ce) cell_sctrl_middle_pane_g1_ParamLimits

0x8a31,	// (0x0004a2ce) cell_sctrl_middle_pane_g1

0xc552,	// (0x0004ddef) cell_sctrl_middle_pane_g2_ParamLimits

0xc552,	// (0x0004ddef) cell_sctrl_middle_pane_g2

0x0001,

0xfd18,	// (0x000515b5) cell_sctrl_middle_pane_g_ParamLimits

0xfd18,	// (0x000515b5) cell_sctrl_middle_pane_g

0x4bb0,	// (0x0004644d) bg_sctrl_middle_pane_g1

0x4bb8,	// (0x00046455) bg_sctrl_middle_pane_g2

0x4bc0,	// (0x0004645d) bg_sctrl_middle_pane_g3

0x4bc8,	// (0x00046465) bg_sctrl_middle_pane_g4

0x4bd0,	// (0x0004646d) bg_sctrl_middle_pane_g5

0x4bd8,	// (0x00046475) bg_sctrl_middle_pane_g6

0x4be0,	// (0x0004647d) bg_sctrl_middle_pane_g7

0x4be8,	// (0x00046485) bg_sctrl_middle_pane_g8

0x0007,

0xfd1d,	// (0x000515ba) bg_sctrl_middle_pane_g

0x4bf0,	// (0x0004648d) bg_sctrl_middle_pane_g8_copy1

0x4bb0,	// (0x0004644d) bg_sctrl_sk_pane_g1

0x4bb8,	// (0x00046455) bg_sctrl_sk_pane_g2

0x4bc0,	// (0x0004645d) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x00051114) bg_sctrl_sk_pane_g

0x2fbb,	// (0x00044858) aid_size_touch_scroll_bar

0x4bc8,	// (0x00046465) bg_sctrl_sk_pane_g4

0x4bd0,	// (0x0004646d) bg_sctrl_sk_pane_g5

0x4bd8,	// (0x00046475) bg_sctrl_sk_pane_g6

0x4be0,	// (0x0004647d) bg_sctrl_sk_pane_g7

0x4be8,	// (0x00046485) bg_sctrl_sk_pane_g8

0x4bf0,	// (0x0004648d) bg_sctrl_sk_pane_g9

0x4112,	// (0x000459af) popup_fep_china_hwr2_fs_candidate_window

0xcb2b,	// (0x0004e3c8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcb2b,	// (0x0004e3c8) popup_fep_china_hwr2_fs_control_window

0x74e0,	// (0x00048d7d) sctrl_sk_top_pane_g2

0x0001,

0xfd13,	// (0x000515b0) sctrl_sk_top_pane_g

0xe4fc,	// (0x0004fd99) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe4fc,	// (0x0004fd99) aid_fep_china_hwr2_fs_cell

0xe512,	// (0x0004fdaf) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe512,	// (0x0004fdaf) bg_popup_fep_shadow_pane_cp4

0xe529,	// (0x0004fdc6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe529,	// (0x0004fdc6) bg_popup_fep_shadow_pane_cp5

0xe53b,	// (0x0004fdd8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe53b,	// (0x0004fdd8) popup_fep_china_hwr2_fs_control_bar_grid

0xe54f,	// (0x0004fdec) popup_fep_china_hwr2_fs_control_funtion_grid

0x8a05,	// (0x0004a2a2) aid_fep_china_hwr2_fs_candi_cell

0xd995,	// (0x0004f232) bg_popup_fep_shadow_pane_cp6

0x8a0f,	// (0x0004a2ac) popup_fep_china_hwr2_fs_candidate_grid

0xe557,	// (0x0004fdf4) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe557,	// (0x0004fdf4) cell_fep_china_hwr2_fs_funtion_grid

0x7256,	// (0x00048af3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8a31,	// (0x0004a2ce) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8a31,	// (0x0004a2ce) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8a3f,	// (0x0004a2dc) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8a3f,	// (0x0004a2dc) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2e,	// (0x000515cb) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2e,	// (0x000515cb) cell_fep_china_hwr2_fs_funtion_grid_g

0xe56f,	// (0x0004fe0c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe56f,	// (0x0004fe0c) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe584,	// (0x0004fe21) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe584,	// (0x0004fe21) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd33,	// (0x000515d0) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd33,	// (0x000515d0) cell_fep_china_hwr2_fs_funtion_grid_t

0x8a86,	// (0x0004a323) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8a8e,	// (0x0004a32b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8a96,	// (0x0004a333) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd38,	// (0x000515d5) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8a9e,	// (0x0004a33b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8a9e,	// (0x0004a33b) cell_fep_china_hwr2_fs_candidate_grid

0x8abd,	// (0x0004a35a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8ac5,	// (0x0004a362) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7256,	// (0x00048af3) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7256,	// (0x00048af3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb58,	// (0x000513f5) cell_fep_china_hwr2_fs_candidate_grid_g

0x8acd,	// (0x0004a36a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x478d,	// (0x0004602a) clock_nsta_pane_cp_24_ParamLimits

0x478d,	// (0x0004602a) clock_nsta_pane_cp_24

0x480d,	// (0x000460aa) indicator_nsta_pane_cp_24_ParamLimits

0x480d,	// (0x000460aa) indicator_nsta_pane_cp_24

0x58d9,	// (0x00047176) heading_pane_g1

0x0001,

0xf8dc,	// (0x00051179) heading_pane_g

0x6389,	// (0x00047c26) grid_sct_catagory_button_pane

0x63bb,	// (0x00047c58) scroll_pane_cp5_ParamLimits

0x6e9f,	// (0x0004873c) button_value_adjust_pane_cp5_ParamLimits

0x6e9f,	// (0x0004873c) button_value_adjust_pane_cp5

0x6f84,	// (0x00048821) form2_midp_time_pane_ParamLimits

0x8adb,	// (0x0004a378) cell_sct_catagory_button_pane_ParamLimits

0x8adb,	// (0x0004a378) cell_sct_catagory_button_pane

0x721b,	// (0x00048ab8) bg_button_pane_cp01_ParamLimits

0x721b,	// (0x00048ab8) bg_button_pane_cp01

0x7256,	// (0x00048af3) cell_sct_catagory_button_pane_g1

0xd0f0,	// (0x0004e98d) popup_tb_extension_window

0xe5a0,	// (0x0004fe3d) aid_size_cell_ext_ParamLimits

0xe5a0,	// (0x0004fe3d) aid_size_cell_ext

0x2dfd,	// (0x0004469a) bg_tb_trans_pane_cp1_ParamLimits

0x2dfd,	// (0x0004469a) bg_tb_trans_pane_cp1

0xe5c6,	// (0x0004fe63) grid_tb_ext_pane_ParamLimits

0xe5c6,	// (0x0004fe63) grid_tb_ext_pane

0xe606,	// (0x0004fea3) cell_tb_ext_pane_ParamLimits

0xe606,	// (0x0004fea3) cell_tb_ext_pane

0xe630,	// (0x0004fecd) cell_tb_ext_pane_g1_ParamLimits

0xe630,	// (0x0004fecd) cell_tb_ext_pane_g1

0x8b71,	// (0x0004a40e) cell_tb_ext_pane_t1

0x2a8f,	// (0x0004432c) list_highlight_pane_cp11_ParamLimits

0x2a8f,	// (0x0004432c) list_highlight_pane_cp11

0x0d45,	// (0x000425e2) popup_uni_indicator_window_ParamLimits

0x0d45,	// (0x000425e2) popup_uni_indicator_window

0x308c,	// (0x00044929) bg_popup_sub_pane_cp14

0x8b8c,	// (0x0004a429) list_uniindi_pane

0x8b98,	// (0x0004a435) uniindi_top_pane

0x2a8f,	// (0x0004432c) bg_uniindi_top_pane

0x8bb9,	// (0x0004a456) uniindi_top_pane_g1

0x8bcf,	// (0x0004a46c) uniindi_top_pane_g2

0x0003,

0xfd3f,	// (0x000515dc) uniindi_top_pane_g

0x8bf9,	// (0x0004a496) uniindi_top_pane_t1

0x8c25,	// (0x0004a4c2) list_single_uniindi_pane_ParamLimits

0x8c25,	// (0x0004a4c2) list_single_uniindi_pane

0x7256,	// (0x00048af3) bg_uniindi_top_pane_g1

0x8c37,	// (0x0004a4d4) list_single_uniindi_pane_g1

0x8c4a,	// (0x0004a4e7) list_single_uniindi_pane_t1

0xd995,	// (0x0004f232) control_bg_pane

0x8c6f,	// (0x0004a50c) bg_sctrl_sk_pane_cp1

0x8c78,	// (0x0004a515) bg_sctrl_sk_pane_cp2

0x8c81,	// (0x0004a51e) control_bg_pane_g1

0x8c8a,	// (0x0004a527) control_bg_pane_g2

0x0001,

0xfd48,	// (0x000515e5) control_bg_pane_g

0x6cc2,	// (0x0004855f) cell_indicator_nsta_pane_g1_ParamLimits

0xdbe6,	// (0x0004f483) cell_indicator_nsta_pane_g2_ParamLimits

0xfabc,	// (0x00051359) cell_indicator_nsta_pane_g_ParamLimits

0x078f,	// (0x0004202c) form2_midp_time_pane_t1_ParamLimits

0x7664,	// (0x00048f01) main_idle_act4_pane_ParamLimits

0x7664,	// (0x00048f01) main_idle_act4_pane

0xd0f0,	// (0x0004e98d) popup_tb_extension_window_ParamLimits

0xe5ee,	// (0x0004fe8b) tb_ext_find_pane_ParamLimits

0xe5ee,	// (0x0004fe8b) tb_ext_find_pane

0x8c93,	// (0x0004a530) ai_gene_pane_1_cp1

0x3e33,	// (0x000456d0) ai_gene_pane_2_cp1

0x8c9b,	// (0x0004a538) list_single_idle_plugin_calendar_pane

0x8ca4,	// (0x0004a541) list_single_idle_plugin_notification_pane

0x8cad,	// (0x0004a54a) list_single_idle_plugin_player_pane

0xe64d,	// (0x0004feea) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe64d,	// (0x0004feea) list_single_idle_plugin_shortcut_pane

0xe675,	// (0x0004ff12) main_idle_act4_pane_t1

0xe68d,	// (0x0004ff2a) main_idle_act4_pane_t2

0x0001,

0xfd4d,	// (0x000515ea) main_idle_act4_pane_t

0xe6a5,	// (0x0004ff42) middle_sk_idle_act4_pane_ParamLimits

0xe6a5,	// (0x0004ff42) middle_sk_idle_act4_pane

0xe6c1,	// (0x0004ff5e) popup_clock_digital_analogue_window_cp2

0xe6e8,	// (0x0004ff85) shortcut_wheel_idle_act4_pane_ParamLimits

0xe6e8,	// (0x0004ff85) shortcut_wheel_idle_act4_pane

0x7256,	// (0x00048af3) shortcut_wheel_idle_act4_pane_g1

0x7256,	// (0x00048af3) shortcut_wheel_idle_act4_pane_g2

0x7256,	// (0x00048af3) shortcut_wheel_idle_act4_pane_g3

0x7256,	// (0x00048af3) shortcut_wheel_idle_act4_pane_g4

0x7256,	// (0x00048af3) shortcut_wheel_idle_act4_pane_g5

0x8d40,	// (0x0004a5dd) shortcut_wheel_idle_act4_pane_g6

0x8d48,	// (0x0004a5e5) shortcut_wheel_idle_act4_pane_g7

0x8d50,	// (0x0004a5ed) shortcut_wheel_idle_act4_pane_g8

0x8d58,	// (0x0004a5f5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd52,	// (0x000515ef) shortcut_wheel_idle_act4_pane_g

0xddb7,	// (0x0004f654) middle_sk_idle_act4_pane_g1_ParamLimits

0xddb7,	// (0x0004f654) middle_sk_idle_act4_pane_g1

0xe765,	// (0x00050002) middle_sk_idle_act4_pane_g2_ParamLimits

0xe765,	// (0x00050002) middle_sk_idle_act4_pane_g2

0x0001,

0xfd75,	// (0x00051612) middle_sk_idle_act4_pane_g_ParamLimits

0xfd75,	// (0x00051612) middle_sk_idle_act4_pane_g

0xe77d,	// (0x0005001a) middle_sk_idle_act4_pane_t1_ParamLimits

0xe77d,	// (0x0005001a) middle_sk_idle_act4_pane_t1

0xe7ac,	// (0x00050049) grid_ai_shortcut_pane_ParamLimits

0xe7ac,	// (0x00050049) grid_ai_shortcut_pane

0xe7c9,	// (0x00050066) list_highlight_pane_cp16_ParamLimits

0xe7c9,	// (0x00050066) list_highlight_pane_cp16

0xe7d6,	// (0x00050073) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe7d6,	// (0x00050073) list_single_idle_plugin_shortcut_pane_g1

0xe7e2,	// (0x0005007f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe7e2,	// (0x0005007f) list_single_idle_plugin_shortcut_pane_g2

0xe800,	// (0x0005009d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe800,	// (0x0005009d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7a,	// (0x00051617) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7a,	// (0x00051617) list_single_idle_plugin_shortcut_pane_g

0xe815,	// (0x000500b2) cell_ai_shortcut_pane_ParamLimits

0xe815,	// (0x000500b2) cell_ai_shortcut_pane

0xe82b,	// (0x000500c8) cell_ai_shortcut_pane_g1_ParamLimits

0xe82b,	// (0x000500c8) cell_ai_shortcut_pane_g1

0x8c93,	// (0x0004a530) ai_gene_pane_1_cp2

0x8e89,	// (0x0004a726) ai_gene_pane_2_cp2

0x8e91,	// (0x0004a72e) list_highlight_pane_cp15

0x8e9a,	// (0x0004a737) list_single_idle_plugin_calendar_pane_g1

0x8e91,	// (0x0004a72e) list_highlight_pane_cp17

0x8ea2,	// (0x0004a73f) list_single_idle_plugin_calendar_pane_g1_copy1

0x8eaa,	// (0x0004a747) list_single_idle_plugin_player_pane_g1

0x65f0,	// (0x00047e8d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd81,	// (0x0005161e) list_single_idle_plugin_player_pane_g

0x8eb2,	// (0x0004a74f) list_single_idle_plugin_player_pane_t1

0x8ec0,	// (0x0004a75d) list_single_idle_plugin_player_pane_t2

0x8ece,	// (0x0004a76b) list_single_idle_plugin_player_pane_t3

0x8edc,	// (0x0004a779) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd86,	// (0x00051623) list_single_idle_plugin_player_pane_t

0x8eea,	// (0x0004a787) wait_bar_pane_cp15

0x8ef2,	// (0x0004a78f) grid_ai_notification_pane

0x65f0,	// (0x00047e8d) list_single_idle_plugin_notification_pane_g1

0xe84d,	// (0x000500ea) cell_ai_notification_pane_ParamLimits

0xe84d,	// (0x000500ea) cell_ai_notification_pane

0x8f08,	// (0x0004a7a5) cell_ai_notification_pane_g1

0x8f10,	// (0x0004a7ad) cell_ai_notification_pane_t1

0xe85a,	// (0x000500f7) tb_ext_find_button_pane

0xe862,	// (0x000500ff) tb_ext_find_pane_g1

0xe86a,	// (0x00050107) tb_ext_find_pane_t1

0x36fc,	// (0x00044f99) tb_ext_find_button_pane_g1

0x8f3c,	// (0x0004a7d9) tb_ext_find_button_pane_g2

0x0001,

0xfd8f,	// (0x0005162c) tb_ext_find_button_pane_g

0xe675,	// (0x0004ff12) main_idle_act4_pane_t1_ParamLimits

0xe68d,	// (0x0004ff2a) main_idle_act4_pane_t2_ParamLimits

0xfd4d,	// (0x000515ea) main_idle_act4_pane_t_ParamLimits

0xe6c1,	// (0x0004ff5e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe6d8,	// (0x0004ff75) sat_plugin_idle_act4_pane_ParamLimits

0xe6d8,	// (0x0004ff75) sat_plugin_idle_act4_pane

0xe878,	// (0x00050115) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe878,	// (0x00050115) sat_plugin_idle_act4_pane_t1

0xe890,	// (0x0005012d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe890,	// (0x0005012d) sat_plugin_idle_act4_pane_t2

0xe8a8,	// (0x00050145) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe8a8,	// (0x00050145) sat_plugin_idle_act4_pane_t3

0xe8c0,	// (0x0005015d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe8c0,	// (0x0005015d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd94,	// (0x00051631) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd94,	// (0x00051631) sat_plugin_idle_act4_pane_t

0x0c76,	// (0x00042513) popup_battery_window_ParamLimits

0x0c76,	// (0x00042513) popup_battery_window

0x2a8f,	// (0x0004432c) bg_popup_sub_pane_cp25_ParamLimits

0x2a8f,	// (0x0004432c) bg_popup_sub_pane_cp25

0x8f91,	// (0x0004a82e) popup_battery_window_g1_ParamLimits

0x8f91,	// (0x0004a82e) popup_battery_window_g1

0x8f9d,	// (0x0004a83a) popup_battery_window_t1_ParamLimits

0x8f9d,	// (0x0004a83a) popup_battery_window_t1

0x8faf,	// (0x0004a84c) popup_battery_window_t2_ParamLimits

0x8faf,	// (0x0004a84c) popup_battery_window_t2

0x0001,

0xfd9d,	// (0x0005163a) popup_battery_window_t_ParamLimits

0xfd9d,	// (0x0005163a) popup_battery_window_t

0xc9bf,	// (0x0004e25c) midp_canvas_pane_ParamLimits

0xca1a,	// (0x0004e2b7) midp_keypad_pane_ParamLimits

0xca1a,	// (0x0004e2b7) midp_keypad_pane

0x4068,	// (0x00045905) main_midp_pane_ParamLimits

0x6d4c,	// (0x000485e9) signal_pane_g2_cp_ParamLimits

0xe8d8,	// (0x00050175) aid_size_cell_midp_keypad_ParamLimits

0xe8d8,	// (0x00050175) aid_size_cell_midp_keypad

0xe8f6,	// (0x00050193) midp_keyp_game_grid_pane_ParamLimits

0xe8f6,	// (0x00050193) midp_keyp_game_grid_pane

0xe91d,	// (0x000501ba) midp_keyp_rocker_pane_ParamLimits

0xe91d,	// (0x000501ba) midp_keyp_rocker_pane

0xe962,	// (0x000501ff) midp_keyp_sk_left_pane_ParamLimits

0xe962,	// (0x000501ff) midp_keyp_sk_left_pane

0xe9b6,	// (0x00050253) midp_keyp_sk_right_pane_ParamLimits

0xe9b6,	// (0x00050253) midp_keyp_sk_right_pane

0xd995,	// (0x0004f232) bg_button_pane_cp03

0xea17,	// (0x000502b4) midp_keyp_sk_left_pane_g1

0xd995,	// (0x0004f232) bg_button_pane_cp04

0xea17,	// (0x000502b4) midp_keyp_sk_right_pane_g1

0x7256,	// (0x00048af3) midp_keyp_rocker_pane_g1

0xea20,	// (0x000502bd) keyp_game_cell_pane_ParamLimits

0xea20,	// (0x000502bd) keyp_game_cell_pane

0xd995,	// (0x0004f232) bg_button_pane_cp02

0xea46,	// (0x000502e3) keyp_game_cell_pane_g1

0xb9bd,	// (0x0004d25a) popup_fep_vkb2_window_ParamLimits

0xb9bd,	// (0x0004d25a) popup_fep_vkb2_window

0xc55e,	// (0x0004ddfb) aid_size_cell_vkb2_ParamLimits

0xc55e,	// (0x0004ddfb) aid_size_cell_vkb2

0xc58c,	// (0x0004de29) popup_fep_vkb2_window_g1_ParamLimits

0xc58c,	// (0x0004de29) popup_fep_vkb2_window_g1

0xc5dc,	// (0x0004de79) vkb2_area_bottom_pane_ParamLimits

0xc5dc,	// (0x0004de79) vkb2_area_bottom_pane

0xc638,	// (0x0004ded5) vkb2_area_keypad_pane_ParamLimits

0xc638,	// (0x0004ded5) vkb2_area_keypad_pane

0xc686,	// (0x0004df23) vkb2_area_top_pane_ParamLimits

0xc686,	// (0x0004df23) vkb2_area_top_pane

0xc70c,	// (0x0004dfa9) vkb2_top_entry_pane_ParamLimits

0xc70c,	// (0x0004dfa9) vkb2_top_entry_pane

0xc739,	// (0x0004dfd6) vkb2_top_grid_left_pane_ParamLimits

0xc739,	// (0x0004dfd6) vkb2_top_grid_left_pane

0xc759,	// (0x0004dff6) vkb2_top_grid_right_pane_ParamLimits

0xc759,	// (0x0004dff6) vkb2_top_grid_right_pane

0x21d0,	// (0x00043a6d) vkb2_cell_keypad_pane_ParamLimits

0x21d0,	// (0x00043a6d) vkb2_cell_keypad_pane

0xc79f,	// (0x0004e03c) vkb2_area_bottom_grid_pane_ParamLimits

0xc79f,	// (0x0004e03c) vkb2_area_bottom_grid_pane

0xc7c9,	// (0x0004e066) vkb2_area_bottom_pane_g1_ParamLimits

0xc7c9,	// (0x0004e066) vkb2_area_bottom_pane_g1

0xc7ef,	// (0x0004e08c) vkb2_area_bottom_pane_g2_ParamLimits

0xc7ef,	// (0x0004e08c) vkb2_area_bottom_pane_g2

0xc820,	// (0x0004e0bd) vkb2_area_bottom_pane_g3_ParamLimits

0xc820,	// (0x0004e0bd) vkb2_area_bottom_pane_g3

0x0002,

0xfda2,	// (0x0005163f) vkb2_area_bottom_pane_g_ParamLimits

0xfda2,	// (0x0005163f) vkb2_area_bottom_pane_g

0x235f,	// (0x00043bfc) vkb2_top_cell_left_pane_ParamLimits

0x235f,	// (0x00043bfc) vkb2_top_cell_left_pane

0xea4f,	// (0x000502ec) vkb2_top_entry_pane_g1_ParamLimits

0xea4f,	// (0x000502ec) vkb2_top_entry_pane_g1

0xea5d,	// (0x000502fa) vkb2_top_entry_pane_t1_ParamLimits

0xea5d,	// (0x000502fa) vkb2_top_entry_pane_t1

0x913c,	// (0x0004a9d9) vkb2_top_entry_pane_t2_ParamLimits

0x913c,	// (0x0004a9d9) vkb2_top_entry_pane_t2

0x9154,	// (0x0004a9f1) vkb2_top_entry_pane_t3_ParamLimits

0x9154,	// (0x0004a9f1) vkb2_top_entry_pane_t3

0x0002,

0xfda9,	// (0x00051646) vkb2_top_entry_pane_t_ParamLimits

0xfda9,	// (0x00051646) vkb2_top_entry_pane_t

0xc88a,	// (0x0004e127) vkb2_top_grid_right_pane_g1_ParamLimits

0xc88a,	// (0x0004e127) vkb2_top_grid_right_pane_g1

0x23c2,	// (0x00043c5f) vkb2_top_grid_right_pane_g2_ParamLimits

0x23c2,	// (0x00043c5f) vkb2_top_grid_right_pane_g2

0x23da,	// (0x00043c77) vkb2_top_grid_right_pane_g3_ParamLimits

0x23da,	// (0x00043c77) vkb2_top_grid_right_pane_g3

0xc8a0,	// (0x0004e13d) vkb2_top_grid_right_pane_g4_ParamLimits

0xc8a0,	// (0x0004e13d) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb0,	// (0x0005164d) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb0,	// (0x0005164d) vkb2_top_grid_right_pane_g

0x2408,	// (0x00043ca5) vkb2_top_cell_left_pane_g1

0x241f,	// (0x00043cbc) vkb2_cell_keypad_pane_g1_ParamLimits

0x241f,	// (0x00043cbc) vkb2_cell_keypad_pane_g1

0x916a,	// (0x0004aa07) vkb2_cell_keypad_pane_t1_ParamLimits

0x916a,	// (0x0004aa07) vkb2_cell_keypad_pane_t1

0x2443,	// (0x00043ce0) vkb2_cell_bottom_grid_pane_ParamLimits

0x2443,	// (0x00043ce0) vkb2_cell_bottom_grid_pane

0x247c,	// (0x00043d19) vkb2_cell_bottom_grid_pane_g1

0xe709,	// (0x0004ffa6) aid_call2_pane_cp02

0xe711,	// (0x0004ffae) aid_call_pane_cp02

0xe719,	// (0x0004ffb6) clock_digital_number_pane_cp10

0xe721,	// (0x0004ffbe) clock_digital_number_pane_cp11

0xe729,	// (0x0004ffc6) clock_digital_number_pane_cp12

0xe731,	// (0x0004ffce) clock_digital_number_pane_cp13

0xe739,	// (0x0004ffd6) clock_digital_separator_pane_cp10

0x36fc,	// (0x00044f99) popup_clock_digital_analogue_window_cp2_g1

0x36fc,	// (0x00044f99) popup_clock_digital_analogue_window_cp2_g2

0xe741,	// (0x0004ffde) popup_clock_digital_analogue_window_cp2_g3

0x36fc,	// (0x00044f99) popup_clock_digital_analogue_window_cp2_g4

0xe741,	// (0x0004ffde) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd65,	// (0x00051602) popup_clock_digital_analogue_window_cp2_g

0xe749,	// (0x0004ffe6) popup_clock_digital_analogue_window_cp2_t1

0xe757,	// (0x0004fff4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd70,	// (0x0005160d) popup_clock_digital_analogue_window_cp2_t

0x7256,	// (0x00048af3) clock_digital_number_pane_cp10_g1

0x7256,	// (0x00048af3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb58,	// (0x000513f5) clock_digital_number_pane_cp10_g

0x7256,	// (0x00048af3) clock_digital_separator_pane_cp10_g1

0x7256,	// (0x00048af3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb58,	// (0x000513f5) clock_digital_separator_pane_cp10_g

0x8bdb,	// (0x0004a478) uniindi_top_pane_g3

0x8bec,	// (0x0004a489) uniindi_top_pane_g4

0x2240,	// (0x00043add) vkb2_row_keypad_pane_ParamLimits

0x2240,	// (0x00043add) vkb2_row_keypad_pane

0x2498,	// (0x00043d35) vkb2_cell_t_keypad_pane_ParamLimits

0x2498,	// (0x00043d35) vkb2_cell_t_keypad_pane

0x24a8,	// (0x00043d45) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x24a8,	// (0x00043d45) vkb2_cell_t_keypad_pane_cp08

0x24bd,	// (0x00043d5a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x24bd,	// (0x00043d5a) vkb2_cell_t_keypad_pane_cp09

0x24d1,	// (0x00043d6e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x24d1,	// (0x00043d6e) vkb2_cell_t_keypad_pane_cp01

0x24e2,	// (0x00043d7f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x24e2,	// (0x00043d7f) vkb2_cell_t_keypad_pane_cp02

0x24f3,	// (0x00043d90) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x24f3,	// (0x00043d90) vkb2_cell_t_keypad_pane_cp03

0x2504,	// (0x00043da1) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2504,	// (0x00043da1) vkb2_cell_t_keypad_pane_cp04

0x2515,	// (0x00043db2) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2515,	// (0x00043db2) vkb2_cell_t_keypad_pane_cp05

0x2526,	// (0x00043dc3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2526,	// (0x00043dc3) vkb2_cell_t_keypad_pane_cp06

0x2539,	// (0x00043dd6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2539,	// (0x00043dd6) vkb2_cell_t_keypad_pane_cp07

0x254e,	// (0x00043deb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x254e,	// (0x00043deb) vkb2_cell_t_keypad_pane_cp10

0x74e0,	// (0x00048d7d) vkb2_cell_t_keypad_pane_g1

0x9181,	// (0x0004aa1e) vkb2_cell_t_keypad_pane_t1

0xd995,	// (0x0004f232) popup_grid_graphic2_window

0xea96,	// (0x00050333) aid_size_cell_graphic2_ParamLimits

0xea96,	// (0x00050333) aid_size_cell_graphic2

0x5256,	// (0x00046af3) bg_popup_window_pane_cp21_ParamLimits

0x5256,	// (0x00046af3) bg_popup_window_pane_cp21

0xeac8,	// (0x00050365) graphic2_pages_pane_ParamLimits

0xeac8,	// (0x00050365) graphic2_pages_pane

0xeb20,	// (0x000503bd) grid_graphic2_control_pane_ParamLimits

0xeb20,	// (0x000503bd) grid_graphic2_control_pane

0xeb54,	// (0x000503f1) grid_graphic2_pane_ParamLimits

0xeb54,	// (0x000503f1) grid_graphic2_pane

0xebcb,	// (0x00050468) cell_graphic2_pane

0xd995,	// (0x0004f232) main_comp_mode_pane

0x844c,	// (0x00049ce9) list_ai3_gene_pane_ParamLimits

0xe444,	// (0x0004fce1) bg_popup_window_pane_cp19_ParamLimits

0x8820,	// (0x0004a0bd) bg_touch_area_indi_pane_ParamLimits

0x8820,	// (0x0004a0bd) bg_touch_area_indi_pane

0x8836,	// (0x0004a0d3) bg_touch_area_indi_pane_cp01_ParamLimits

0x8836,	// (0x0004a0d3) bg_touch_area_indi_pane_cp01

0x884e,	// (0x0004a0eb) bg_touch_area_indi_pane_cp02_ParamLimits

0x884e,	// (0x0004a0eb) bg_touch_area_indi_pane_cp02

0x8868,	// (0x0004a105) bg_touch_area_indi_pane_cp03_ParamLimits

0x8868,	// (0x0004a105) bg_touch_area_indi_pane_cp03

0x8882,	// (0x0004a11f) popup_slider_window_g1_ParamLimits

0x889e,	// (0x0004a13b) popup_slider_window_g2_ParamLimits

0x88ba,	// (0x0004a157) popup_slider_window_g3_ParamLimits

0xfcfa,	// (0x00051597) popup_slider_window_g_ParamLimits

0x8916,	// (0x0004a1b3) popup_slider_window_t1_ParamLimits

0x898a,	// (0x0004a227) small_volume_slider_vertical_pane_ParamLimits

0xebcb,	// (0x00050468) cell_graphic2_pane_ParamLimits

0xec2e,	// (0x000504cb) bg_button_pane_cp10_ParamLimits

0xec2e,	// (0x000504cb) bg_button_pane_cp10

0xec41,	// (0x000504de) bg_button_pane_cp11_ParamLimits

0xec41,	// (0x000504de) bg_button_pane_cp11

0xec54,	// (0x000504f1) graphic2_pages_pane_g1_ParamLimits

0xec54,	// (0x000504f1) graphic2_pages_pane_g1

0xec6f,	// (0x0005050c) graphic2_pages_pane_g2_ParamLimits

0xec6f,	// (0x0005050c) graphic2_pages_pane_g2

0x0001,

0xfdbe,	// (0x0005165b) graphic2_pages_pane_g_ParamLimits

0xfdbe,	// (0x0005165b) graphic2_pages_pane_g

0xec87,	// (0x00050524) graphic2_pages_pane_t1_ParamLimits

0xec87,	// (0x00050524) graphic2_pages_pane_t1

0xec9f,	// (0x0005053c) cell_graphic2_control_pane_ParamLimits

0xec9f,	// (0x0005053c) cell_graphic2_control_pane

0xecb9,	// (0x00050556) cell_graphic2_pane_g1_ParamLimits

0xecb9,	// (0x00050556) cell_graphic2_pane_g1

0xddc5,	// (0x0004f662) cell_graphic2_pane_g2_ParamLimits

0xddc5,	// (0x0004f662) cell_graphic2_pane_g2

0xea0a,	// (0x000502a7) cell_graphic2_pane_g3_ParamLimits

0xea0a,	// (0x000502a7) cell_graphic2_pane_g3

0xddd2,	// (0x0004f66f) cell_graphic2_pane_g4_ParamLimits

0xddd2,	// (0x0004f66f) cell_graphic2_pane_g4

0xecc6,	// (0x00050563) cell_graphic2_pane_g5_ParamLimits

0xecc6,	// (0x00050563) cell_graphic2_pane_g5

0x0004,

0xfdc3,	// (0x00051660) cell_graphic2_pane_g_ParamLimits

0xfdc3,	// (0x00051660) cell_graphic2_pane_g

0xece6,	// (0x00050583) cell_graphic2_pane_t1_ParamLimits

0xece6,	// (0x00050583) cell_graphic2_pane_t1

0x58cd,	// (0x0004716a) grid_highlight_pane_cp11_ParamLimits

0x58cd,	// (0x0004716a) grid_highlight_pane_cp11

0x308c,	// (0x00044929) bg_button_pane_cp05

0xed1b,	// (0x000505b8) cell_graphic2_control_pane_g1

0x7256,	// (0x00048af3) bg_touch_area_indi_pane_g1

0x93fc,	// (0x0004ac99) aid_cmod_rocker_key_size

0x9406,	// (0x0004aca3) aid_cmode_itu_key_size

0x9410,	// (0x0004acad) main_cmode_video_pane

0x941a,	// (0x0004acb7) main_comp_mode_itu_pane

0x9426,	// (0x0004acc3) main_comp_mode_rocker_pane

0x9432,	// (0x0004accf) cell_cmode_rocker_pane_ParamLimits

0x9432,	// (0x0004accf) cell_cmode_rocker_pane

0x9446,	// (0x0004ace3) cell_cmode_itu_pane_ParamLimits

0x9446,	// (0x0004ace3) cell_cmode_itu_pane

0x308c,	// (0x00044929) bg_button_pane_cp06_ParamLimits

0x308c,	// (0x00044929) bg_button_pane_cp06

0x74e0,	// (0x00048d7d) cell_cmode_rocker_pane_g1_ParamLimits

0x74e0,	// (0x00048d7d) cell_cmode_rocker_pane_g1

0x8a31,	// (0x0004a2ce) cell_cmode_rocker_pane_g2_ParamLimits

0x8a31,	// (0x0004a2ce) cell_cmode_rocker_pane_g2

0x0001,

0xfdd3,	// (0x00051670) cell_cmode_rocker_pane_g_ParamLimits

0xfdd3,	// (0x00051670) cell_cmode_rocker_pane_g

0xd995,	// (0x0004f232) bg_button_pane_cp07

0x945d,	// (0x0004acfa) cell_cmode_itu_pane_g1

0x9466,	// (0x0004ad03) cell_cmode_itu_pane_t1

0x9474,	// (0x0004ad11) cell_cmode_itu_pane_t2

0x0001,

0xfdd8,	// (0x00051675) cell_cmode_itu_pane_t

0x8c5f,	// (0x0004a4fc) aid_touch_ctrl_left

0x8c67,	// (0x0004a504) aid_touch_ctrl_right

0xd995,	// (0x0004f232) compa_mode_pane

0xed28,	// (0x000505c5) aid_cmod_rocker_key_size_cp

0xed32,	// (0x000505cf) aid_cmode_itu_key_size_cp

0x9496,	// (0x0004ad33) compa_mode_pane_g1

0x949e,	// (0x0004ad3b) compa_mode_pane_g2

0x94a6,	// (0x0004ad43) compa_mode_pane_g3

0x0002,

0xfddd,	// (0x0005167a) compa_mode_pane_g

0xed3c,	// (0x000505d9) main_comp_mode_itu_pane_cp

0xed44,	// (0x000505e1) main_comp_mode_rocker_pane_cp

0xed4c,	// (0x000505e9) cell_cmode_itu_pane_cp_ParamLimits

0xed4c,	// (0x000505e9) cell_cmode_itu_pane_cp

0xed61,	// (0x000505fe) cell_cmode_rocker_pane_cp_ParamLimits

0xed61,	// (0x000505fe) cell_cmode_rocker_pane_cp

0x308c,	// (0x00044929) bg_button_pane_cp06_cp_ParamLimits

0x308c,	// (0x00044929) bg_button_pane_cp06_cp

0x74e0,	// (0x00048d7d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x74e0,	// (0x00048d7d) cell_cmode_rocker_pane_g1_cp

0x7256,	// (0x00048af3) cell_cmode_rocker_pane_g2_cp

0xd995,	// (0x0004f232) bg_button_pane_cp07_cp

0xed73,	// (0x00050610) cell_cmode_itu_pane_g1_cp

0xed7c,	// (0x00050619) cell_cmode_itu_pane_t1_cp

0xed7c,	// (0x00050619) cell_cmode_itu_pane_t2_cp

0xda2d,	// (0x0004f2ca) settings_code_pane_cp2

0x2805,	// (0x000440a2) bg_popup_window_pane_cp3_ParamLimits

0x2c7d,	// (0x0004451a) heading_pane_cp3_ParamLimits

0x2c89,	// (0x00044526) listscroll_popup_graphic_pane_ParamLimits

0x1a51,	// (0x000432ee) fep_hwr_aid_pane_ParamLimits

0x1f33,	// (0x000437d0) aid_touch_sctrl_top_ParamLimits

0x1f40,	// (0x000437dd) sctrl_sk_top_pane_g1_ParamLimits

0x74e0,	// (0x00048d7d) sctrl_sk_top_pane_g2_ParamLimits

0xfd13,	// (0x000515b0) sctrl_sk_top_pane_g_ParamLimits

0x1f4d,	// (0x000437ea) sctrl_sk_top_pane_t1_ParamLimits

0x1f33,	// (0x000437d0) aid_touch_sctrl_bottom_ParamLimits

0x1f4d,	// (0x000437ea) sctrl_sk_bottom_pane_t1_ParamLimits

0x8ba5,	// (0x0004a442) aid_area_touch_clock

0xc6ce,	// (0x0004df6b) aid_vkb2_area_top_pane_cell_ParamLimits

0xc6ce,	// (0x0004df6b) aid_vkb2_area_top_pane_cell

0xc779,	// (0x0004e016) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc779,	// (0x0004e016) aid_vkb2_area_bottom_pane_cell

0x910e,	// (0x0004a9ab) popup_char_count_window

0x94fc,	// (0x0004ad99) popup_char_count_window_g1

0x9505,	// (0x0004ada2) popup_char_count_window_g2

0x950e,	// (0x0004adab) popup_char_count_window_g3

0x0002,

0xfde4,	// (0x00051681) popup_char_count_window_g

0x9517,	// (0x0004adb4) popup_char_count_window_t1

0x1fec,	// (0x00043889) popup_fep_char_preview_window_ParamLimits

0x1fec,	// (0x00043889) popup_fep_char_preview_window

0xc6ee,	// (0x0004df8b) vkb2_top_candi_pane_ParamLimits

0xc6ee,	// (0x0004df8b) vkb2_top_candi_pane

0xed8a,	// (0x00050627) cell_vkb2_top_candi_pane_ParamLimits

0xed8a,	// (0x00050627) cell_vkb2_top_candi_pane

0x5256,	// (0x00046af3) bg_popup_fep_char_preview_window_ParamLimits

0x5256,	// (0x00046af3) bg_popup_fep_char_preview_window

0x2563,	// (0x00043e00) popup_fep_char_preview_window_t1_ParamLimits

0x2563,	// (0x00043e00) popup_fep_char_preview_window_t1

0x9576,	// (0x0004ae13) bg_popup_fep_char_preview_window_g1

0x957e,	// (0x0004ae1b) bg_popup_fep_char_preview_window_g2

0x9586,	// (0x0004ae23) bg_popup_fep_char_preview_window_g3

0x958e,	// (0x0004ae2b) bg_popup_fep_char_preview_window_g4

0x9596,	// (0x0004ae33) bg_popup_fep_char_preview_window_g5

0x259d,	// (0x00043e3a) bg_popup_fep_char_preview_window_g6

0x959e,	// (0x0004ae3b) bg_popup_fep_char_preview_window_g7

0x95a6,	// (0x0004ae43) bg_popup_fep_char_preview_window_g8

0x95ae,	// (0x0004ae4b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdeb,	// (0x00051688) bg_popup_fep_char_preview_window_g

0x74e0,	// (0x00048d7d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x74e0,	// (0x00048d7d) cell_vkb2_top_candi_pane_g1

0x782f,	// (0x000490cc) cell_vkb2_top_candi_pane_g2_ParamLimits

0x782f,	// (0x000490cc) cell_vkb2_top_candi_pane_g2

0x7850,	// (0x000490ed) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7850,	// (0x000490ed) cell_vkb2_top_candi_pane_g3

0x25a5,	// (0x00043e42) cell_vkb2_top_candi_pane_g4_ParamLimits

0x25a5,	// (0x00043e42) cell_vkb2_top_candi_pane_g4

0x95b6,	// (0x0004ae53) cell_vkb2_top_candi_pane_g5_ParamLimits

0x95b6,	// (0x0004ae53) cell_vkb2_top_candi_pane_g5

0x8a31,	// (0x0004a2ce) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8a31,	// (0x0004a2ce) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfe,	// (0x0005169b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfe,	// (0x0005169b) cell_vkb2_top_candi_pane_g

0x25c6,	// (0x00043e63) cell_vkb2_top_candi_pane_t1

0x1863,	// (0x00043100) aid_size_touch_slider_mark_ParamLimits

0x1863,	// (0x00043100) aid_size_touch_slider_mark

0xeb04,	// (0x000503a1) grid_graphic2_catg_pane_ParamLimits

0xeb04,	// (0x000503a1) grid_graphic2_catg_pane

0xeb9a,	// (0x00050437) popup_grid_graphic2_window_t1_ParamLimits

0xeb9a,	// (0x00050437) popup_grid_graphic2_window_t1

0xebb0,	// (0x0005044d) popup_grid_graphic2_window_t2_ParamLimits

0xebb0,	// (0x0005044d) popup_grid_graphic2_window_t2

0x0001,

0xfdb9,	// (0x00051656) popup_grid_graphic2_window_t_ParamLimits

0xfdb9,	// (0x00051656) popup_grid_graphic2_window_t

0x308c,	// (0x00044929) bg_button_pane_cp05_ParamLimits

0xed1b,	// (0x000505b8) cell_graphic2_control_pane_g1_ParamLimits

0xedde,	// (0x0005067b) cell_graphic2_catg_pane_ParamLimits

0xedde,	// (0x0005067b) cell_graphic2_catg_pane

0xd995,	// (0x0004f232) bg_button_pane_cp12

0xedf0,	// (0x0005068d) cell_graphic2_catg_pane_g1

0x8b71,	// (0x0004a40e) cell_tb_ext_pane_t1_ParamLimits

0x237f,	// (0x00043c1c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x237f,	// (0x00043c1c) vkb2_top_cell_right_narrow_pane

0x2397,	// (0x00043c34) vkb2_top_cell_right_wide_pane_ParamLimits

0x2397,	// (0x00043c34) vkb2_top_cell_right_wide_pane

0x7664,	// (0x00048f01) bg_vkb2_func_pane_ParamLimits

0x7664,	// (0x00048f01) bg_vkb2_func_pane

0x2408,	// (0x00043ca5) vkb2_top_cell_left_pane_g1_ParamLimits

0x7664,	// (0x00048f01) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7664,	// (0x00048f01) bg_vkb2_fuc_pane_cp03

0x247c,	// (0x00043d19) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4bb8,	// (0x00046455) bg_vkb2_func_pane_g1

0x4bc0,	// (0x0004645d) bg_vkb2_func_pane_g2

0x4bd0,	// (0x0004646d) bg_vkb2_func_pane_g3

0x4bc8,	// (0x00046465) bg_vkb2_func_pane_g4

0x4bd8,	// (0x00046475) bg_vkb2_func_pane_g5

0x4be0,	// (0x0004647d) bg_vkb2_func_pane_g6

0x4be8,	// (0x00046485) bg_vkb2_func_pane_g7

0x4bf0,	// (0x0004648d) bg_vkb2_func_pane_g8

0x4bb0,	// (0x0004644d) bg_vkb2_func_pane_g9

0x0008,

0xfe0b,	// (0x000516a8) bg_vkb2_func_pane_g

0x7664,	// (0x00048f01) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7664,	// (0x00048f01) bg_vkb2_fuc_pane_cp01

0x2408,	// (0x00043ca5) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2408,	// (0x00043ca5) vkb2_top_cell_right_wide_pane_g1

0x7664,	// (0x00048f01) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7664,	// (0x00048f01) bg_vkb2_fuc_pane_cp02

0x247c,	// (0x00043d19) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x247c,	// (0x00043d19) vkb2_top_cell_right_narrow_pane_g1

0xe37e,	// (0x0004fc1b) aid_touch_area_decrease_ParamLimits

0xe37e,	// (0x0004fc1b) aid_touch_area_decrease

0xe3b8,	// (0x0004fc55) aid_touch_area_increase_ParamLimits

0xe3b8,	// (0x0004fc55) aid_touch_area_increase

0xe3e0,	// (0x0004fc7d) aid_touch_area_mute_ParamLimits

0xe3e0,	// (0x0004fc7d) aid_touch_area_mute

0xe410,	// (0x0004fcad) aid_touch_area_slider_ParamLimits

0xe410,	// (0x0004fcad) aid_touch_area_slider

0xe450,	// (0x0004fced) popup_slider_window_g4_ParamLimits

0xe450,	// (0x0004fced) popup_slider_window_g4

0xe478,	// (0x0004fd15) popup_slider_window_g5_ParamLimits

0xe478,	// (0x0004fd15) popup_slider_window_g5

0xe4ac,	// (0x0004fd49) popup_slider_window_g6_ParamLimits

0xe4ac,	// (0x0004fd49) popup_slider_window_g6

0x8944,	// (0x0004a1e1) popup_slider_window_t2_ParamLimits

0x8944,	// (0x0004a1e1) popup_slider_window_t2

0x0001,

0xfd07,	// (0x000515a4) popup_slider_window_t_ParamLimits

0xfd07,	// (0x000515a4) popup_slider_window_t

0xe4c8,	// (0x0004fd65) slider_pane_ParamLimits

0xe4c8,	// (0x0004fd65) slider_pane

0x95f2,	// (0x0004ae8f) slider_pane_g1_ParamLimits

0x95f2,	// (0x0004ae8f) slider_pane_g1

0x9606,	// (0x0004aea3) slider_pane_g2_ParamLimits

0x9606,	// (0x0004aea3) slider_pane_g2

0x961c,	// (0x0004aeb9) slider_pane_g3_ParamLimits

0x961c,	// (0x0004aeb9) slider_pane_g3

0x0003,

0xfe1e,	// (0x000516bb) slider_pane_g_ParamLimits

0xfe1e,	// (0x000516bb) slider_pane_g

0xd13c,	// (0x0004e9d9) popup_tb_float_extension_window_ParamLimits

0xd13c,	// (0x0004e9d9) popup_tb_float_extension_window

0x9648,	// (0x0004aee5) aid_size_cell_tb_float_ext

0xd995,	// (0x0004f232) bg_popup_sub_window_cp28

0x9654,	// (0x0004aef1) grid_tb_float_ext_pane

0x9660,	// (0x0004aefd) cell_tb_float_ext_pane_ParamLimits

0x9660,	// (0x0004aefd) cell_tb_float_ext_pane

0x967c,	// (0x0004af19) cell_tb_float_ext_pane_g1

0x9685,	// (0x0004af22) grid_highlight_pane_cp12

0xc457,	// (0x0004dcf4) cell_last_hwr_side_pane_ParamLimits

0xc457,	// (0x0004dcf4) cell_last_hwr_side_pane

0x7256,	// (0x00048af3) cell_last_hwr_side_pane_g1

0x968e,	// (0x0004af2b) cell_last_hwr_side_pane_g2

0x0001,

0xfe27,	// (0x000516c4) cell_last_hwr_side_pane_g

0xc855,	// (0x0004e0f2) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc855,	// (0x0004e0f2) vkb2_area_bottom_space_btn_pane

0x74e0,	// (0x00048d7d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9181,	// (0x0004aa1e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x25c6,	// (0x00043e63) cell_vkb2_top_candi_pane_t1_ParamLimits

0x25e4,	// (0x00043e81) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x25e4,	// (0x00043e81) vkb2_area_bottom_space_btn_pane_g1

0x261e,	// (0x00043ebb) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x261e,	// (0x00043ebb) vkb2_area_bottom_space_btn_pane_g2

0x2654,	// (0x00043ef1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2654,	// (0x00043ef1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2c,	// (0x000516c9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2c,	// (0x000516c9) vkb2_area_bottom_space_btn_pane_g

0x1afa,	// (0x00043397) cel_fep_hwr_func_pane_ParamLimits

0x1afa,	// (0x00043397) cel_fep_hwr_func_pane

0xc42c,	// (0x0004dcc9) cell_hwr_side_button_pane_ParamLimits

0xc42c,	// (0x0004dcc9) cell_hwr_side_button_pane

0x8ba5,	// (0x0004a442) aid_area_touch_clock_ParamLimits

0x2a8f,	// (0x0004432c) bg_uniindi_top_pane_ParamLimits

0x8bb9,	// (0x0004a456) uniindi_top_pane_g1_ParamLimits

0x8bcf,	// (0x0004a46c) uniindi_top_pane_g2_ParamLimits

0x8bdb,	// (0x0004a478) uniindi_top_pane_g3_ParamLimits

0x8bec,	// (0x0004a489) uniindi_top_pane_g4_ParamLimits

0xfd3f,	// (0x000515dc) uniindi_top_pane_g_ParamLimits

0x8bf9,	// (0x0004a496) uniindi_top_pane_t1_ParamLimits

0x2a8f,	// (0x0004432c) bg_vkb2_func_pane_cp01_ParamLimits

0x2a8f,	// (0x0004432c) bg_vkb2_func_pane_cp01

0x9697,	// (0x0004af34) cel_fep_hwr_func_pane_g1_ParamLimits

0x9697,	// (0x0004af34) cel_fep_hwr_func_pane_g1

0x2a8f,	// (0x0004432c) bg_vkb2_func_pane_cp02_ParamLimits

0x2a8f,	// (0x0004432c) bg_vkb2_func_pane_cp02

0x9697,	// (0x0004af34) cell_hwr_side_button_pane_g1_ParamLimits

0x9697,	// (0x0004af34) cell_hwr_side_button_pane_g1

0x4a31,	// (0x000462ce) status_pane_g4_ParamLimits

0x4a31,	// (0x000462ce) status_pane_g4

0x4a4b,	// (0x000462e8) status_pane_t1

0x6ff2,	// (0x0004888f) form2_midp_gauge_slider_cont_pane

0x6ffa,	// (0x00048897) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdce8,	// (0x0004f585) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdcfa,	// (0x0004f597) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0b,	// (0x000513a8) form2_midp_gauge_slider_pane_t_ParamLimits

0x7030,	// (0x000488cd) form2_midp_slider_pane_ParamLimits

0x1fb4,	// (0x00043851) aid_size_cell_func_vkb2_ParamLimits

0x1fb4,	// (0x00043851) aid_size_cell_func_vkb2

0x9634,	// (0x0004aed1) slider_pane_g4_ParamLimits

0x9634,	// (0x0004aed1) slider_pane_g4

0xc8b6,	// (0x0004e153) form2_midp_gauge_slider_pane_t2_cp01

0xc8c4,	// (0x0004e161) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc8c4,	// (0x0004e161) form2_midp_gauge_slider_pane_t3_cp01

0x26c9,	// (0x00043f66) form2_midp_slider_pane_cp01

0xd995,	// (0x0004f232) navi_smil_pane

0x96d0,	// (0x0004af6d) navi_smil_pane_g1

0x96d8,	// (0x0004af75) navi_smil_pane_t1

0x96a5,	// (0x0004af42) form2_midp_slider_pane_g1

0x96ae,	// (0x0004af4b) form2_midp_slider_pane_g2

0x96b6,	// (0x0004af53) form2_midp_slider_pane_g3

0x96a5,	// (0x0004af42) form2_midp_slider_pane_g4

0xedf9,	// (0x00050696) form2_midp_slider_pane_g5

0x0004,

0xfe35,	// (0x000516d2) form2_midp_slider_pane_g

0x268e,	// (0x00043f2b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x268e,	// (0x00043f2b) vkb2_area_bottom_space_btn_pane_g4

0xd31c,	// (0x0004ebb9) lc0_navi_pane_ParamLimits

0xd31c,	// (0x0004ebb9) lc0_navi_pane

0xd38c,	// (0x0004ec29) lc0_stat_indi_pane_ParamLimits

0xd38c,	// (0x0004ec29) lc0_stat_indi_pane

0xd3a1,	// (0x0004ec3e) ls0_title_pane_ParamLimits

0xd3a1,	// (0x0004ec3e) ls0_title_pane

0x308c,	// (0x00044929) bg_popup_sub_pane_cp14_ParamLimits

0x8b8c,	// (0x0004a429) list_uniindi_pane_ParamLimits

0x8b98,	// (0x0004a435) uniindi_top_pane_ParamLimits

0x8c37,	// (0x0004a4d4) list_single_uniindi_pane_g1_ParamLimits

0x8c4a,	// (0x0004a4e7) list_single_uniindi_pane_t1_ParamLimits

0xc8e1,	// (0x0004e17e) lc0_stat_clock_pane_ParamLimits

0xc8e1,	// (0x0004e17e) lc0_stat_clock_pane

0xee02,	// (0x0005069f) lc0_stat_indi_pane_g1_ParamLimits

0xee02,	// (0x0005069f) lc0_stat_indi_pane_g1

0xee0f,	// (0x000506ac) lc0_stat_indi_pane_g2_ParamLimits

0xee0f,	// (0x000506ac) lc0_stat_indi_pane_g2

0x0001,

0xfe40,	// (0x000516dd) lc0_stat_indi_pane_g_ParamLimits

0xfe40,	// (0x000516dd) lc0_stat_indi_pane_g

0xc8ee,	// (0x0004e18b) lc0_uni_indicator_pane_ParamLimits

0xc8ee,	// (0x0004e18b) lc0_uni_indicator_pane

0xee1c,	// (0x000506b9) ls0_title_pane_g1_ParamLimits

0xee1c,	// (0x000506b9) ls0_title_pane_g1

0xee30,	// (0x000506cd) ls0_title_pane_t1_ParamLimits

0xee30,	// (0x000506cd) ls0_title_pane_t1

0xc8fb,	// (0x0004e198) lc0_uni_indicator_pane_g1_ParamLimits

0xc8fb,	// (0x0004e198) lc0_uni_indicator_pane_g1

0x974a,	// (0x0004afe7) lc0_stat_clock_pane_t1

0xd995,	// (0x0004f232) main_ai5_pane

0x9758,	// (0x0004aff5) ai5_sk_pane_ParamLimits

0x9758,	// (0x0004aff5) ai5_sk_pane

0xee5e,	// (0x000506fb) cell_ai5_widget_pane_ParamLimits

0xee5e,	// (0x000506fb) cell_ai5_widget_pane

0x97db,	// (0x0004b078) aid_size_cell_widget_grid

0x97ef,	// (0x0004b08c) bg_ai5_widget_pane_ParamLimits

0x97ef,	// (0x0004b08c) bg_ai5_widget_pane

0xeeeb,	// (0x00050788) cell_ai5_widget_pane_g2

0xeefb,	// (0x00050798) cell_ai5_widget_pane_g3

0xef1a,	// (0x000507b7) cell_ai5_widget_pane_g4

0xef26,	// (0x000507c3) cell_ai5_widget_pane_g5

0xef32,	// (0x000507cf) cell_ai5_widget_pane_g6

0xef3e,	// (0x000507db) cell_ai5_widget_pane_g7

0xef86,	// (0x00050823) cell_ai5_widget_pane_t1_ParamLimits

0xef86,	// (0x00050823) cell_ai5_widget_pane_t1

0xefa3,	// (0x00050840) cell_ai5_widget_pane_t2_ParamLimits

0xefa3,	// (0x00050840) cell_ai5_widget_pane_t2

0xefbb,	// (0x00050858) cell_ai5_widget_pane_t3_ParamLimits

0xefbb,	// (0x00050858) cell_ai5_widget_pane_t3

0xefd3,	// (0x00050870) cell_ai5_widget_pane_t4_ParamLimits

0xefd3,	// (0x00050870) cell_ai5_widget_pane_t4

0xefed,	// (0x0005088a) cell_ai5_widget_pane_t5_ParamLimits

0xefed,	// (0x0005088a) cell_ai5_widget_pane_t5

0x993a,	// (0x0004b1d7) cell_ai5_widget_pane_t6_ParamLimits

0x993a,	// (0x0004b1d7) cell_ai5_widget_pane_t6

0x994c,	// (0x0004b1e9) cell_ai5_widget_pane_t7_ParamLimits

0x994c,	// (0x0004b1e9) cell_ai5_widget_pane_t7

0xf00c,	// (0x000508a9) cell_ai5_widget_pane_t8_ParamLimits

0xf00c,	// (0x000508a9) cell_ai5_widget_pane_t8

0x0009,

0xfe5a,	// (0x000516f7) cell_ai5_widget_pane_t_ParamLimits

0xfe5a,	// (0x000516f7) cell_ai5_widget_pane_t

0xf058,	// (0x000508f5) grid_ai5_widget_pane

0x308c,	// (0x00044929) highlight_cell_ai5_widget_pane_ParamLimits

0x308c,	// (0x00044929) highlight_cell_ai5_widget_pane

0xf06f,	// (0x0005090c) ai5_sk_left_pane

0xf079,	// (0x00050916) ai5_sk_middle_pane

0xf083,	// (0x00050920) ai5_sk_right_pane

0x99e6,	// (0x0004b283) bg_ai5_widget_pane_g1_ParamLimits

0x99e6,	// (0x0004b283) bg_ai5_widget_pane_g1

0x99f2,	// (0x0004b28f) bg_ai5_widget_pane_g2_ParamLimits

0x99f2,	// (0x0004b28f) bg_ai5_widget_pane_g2

0x99fe,	// (0x0004b29b) bg_ai5_widget_pane_g3_ParamLimits

0x99fe,	// (0x0004b29b) bg_ai5_widget_pane_g3

0x9a0a,	// (0x0004b2a7) bg_ai5_widget_pane_g4_ParamLimits

0x9a0a,	// (0x0004b2a7) bg_ai5_widget_pane_g4

0x9a16,	// (0x0004b2b3) bg_ai5_widget_pane_g5_ParamLimits

0x9a16,	// (0x0004b2b3) bg_ai5_widget_pane_g5

0x9a22,	// (0x0004b2bf) bg_ai5_widget_pane_g6_ParamLimits

0x9a22,	// (0x0004b2bf) bg_ai5_widget_pane_g6

0x9a2e,	// (0x0004b2cb) bg_ai5_widget_pane_g7_ParamLimits

0x9a2e,	// (0x0004b2cb) bg_ai5_widget_pane_g7

0x9a3a,	// (0x0004b2d7) bg_ai5_widget_pane_g8_ParamLimits

0x9a3a,	// (0x0004b2d7) bg_ai5_widget_pane_g8

0x9a46,	// (0x0004b2e3) bg_ai5_widget_pane_g9_ParamLimits

0x9a46,	// (0x0004b2e3) bg_ai5_widget_pane_g9

0x0008,

0xfe6f,	// (0x0005170c) bg_ai5_widget_pane_g_ParamLimits

0xfe6f,	// (0x0005170c) bg_ai5_widget_pane_g

0x9a6d,	// (0x0004b30a) cell_shortcut_ai5_widget_pane_ParamLimits

0x9a6d,	// (0x0004b30a) cell_shortcut_ai5_widget_pane

0x28d1,	// (0x0004416e) bg_cell_shortcut_ai5_widget_pane

0x9a7f,	// (0x0004b31c) cell_grid_ai5_widget_pane_g1

0x9a88,	// (0x0004b325) highlight_cell_shortcut_ai5_widget_pane

0x4bc0,	// (0x0004645d) ai5_sk_left_pane_g1

0x9a90,	// (0x0004b32d) ai5_sk_left_pane_g2

0x9a98,	// (0x0004b335) ai5_sk_left_pane_g3

0x9aa0,	// (0x0004b33d) ai5_sk_left_pane_g4

0x0003,

0xfe82,	// (0x0005171f) ai5_sk_left_pane_g

0x9aa8,	// (0x0004b345) ai5_sk_left_pane_t1

0x4bb8,	// (0x00046455) ai5_sk_right_pane_g1

0x9ab6,	// (0x0004b353) ai5_sk_right_pane_g2

0x9abe,	// (0x0004b35b) ai5_sk_right_pane_g3

0x9ac6,	// (0x0004b363) ai5_sk_right_pane_g4

0x0003,

0xfe8b,	// (0x00051728) ai5_sk_right_pane_g

0x9ace,	// (0x0004b36b) ai5_sk_right_pane_t1

0x4bb8,	// (0x00046455) ai5_sk_middle_pane_g1

0x4bc0,	// (0x0004645d) ai5_sk_middle_pane_g2

0x4bd8,	// (0x00046475) ai5_sk_middle_pane_g3

0x9abe,	// (0x0004b35b) ai5_sk_middle_pane_g4

0x9a98,	// (0x0004b335) ai5_sk_middle_pane_g5

0x9adc,	// (0x0004b379) ai5_sk_middle_pane_g6

0xf08d,	// (0x0005092a) ai5_sk_middle_pane_g7

0x0006,

0xfe94,	// (0x00051731) ai5_sk_middle_pane_g

0xd206,	// (0x0004eaa3) aid_touch_area_size_lc0_ParamLimits

0xd206,	// (0x0004eaa3) aid_touch_area_size_lc0

0x1c99,	// (0x00043536) cell_hwr_candidate_pane_t1_ParamLimits

0x46e9,	// (0x00045f86) aid_touch_navi_pane

0xd4ab,	// (0x0004ed48) status_dt_navi_pane_ParamLimits

0xd4ab,	// (0x0004ed48) status_dt_navi_pane

0xd4c3,	// (0x0004ed60) status_dt_sta_pane_ParamLimits

0xd4c3,	// (0x0004ed60) status_dt_sta_pane

0xf095,	// (0x00050932) dt_sta_controll_pane

0xf0a2,	// (0x0005093f) dt_sta_indi_pane

0xf0af,	// (0x0005094c) dt_sta_title_pane

0x2a8f,	// (0x0004432c) bg_dt_sta_indi_pane_ParamLimits

0x2a8f,	// (0x0004432c) bg_dt_sta_indi_pane

0xf0c1,	// (0x0005095e) dt_sta_battery_pane

0xf0c9,	// (0x00050966) dt_sta_indi_pane_g1

0xf0d2,	// (0x0005096f) dt_sta_indi_pane_g2

0xf0db,	// (0x00050978) dt_sta_indi_pane_g3

0x0002,

0xfea3,	// (0x00051740) dt_sta_indi_pane_g

0xf0e4,	// (0x00050981) dt_sta_signal_pane

0x308c,	// (0x00044929) bg_dt_sta_title_pane_ParamLimits

0x308c,	// (0x00044929) bg_dt_sta_title_pane

0xf0ed,	// (0x0005098a) dt_sta_title_pane_g1

0xf0f5,	// (0x00050992) dt_sta_title_pane_t1_ParamLimits

0xf0f5,	// (0x00050992) dt_sta_title_pane_t1

0xd995,	// (0x0004f232) bg_dt_sta_control_pane

0xf10a,	// (0x000509a7) dt_sta_controll_pane_g1

0xf113,	// (0x000509b0) bg_dt_sta_title_pane_g1

0xf11c,	// (0x000509b9) bg_dt_sta_title_pane_g2

0xf125,	// (0x000509c2) bg_dt_sta_title_pane_g3

0x0002,

0xfeaa,	// (0x00051747) bg_dt_sta_title_pane_g

0x7256,	// (0x00048af3) bg_dt_sta_indi_pane_g1

0x9b8a,	// (0x0004b427) dt_sta_signal_pane_g1

0x9b92,	// (0x0004b42f) dt_sta_signal_pane_g2

0x0001,

0xfeb1,	// (0x0005174e) dt_sta_signal_pane_g

0x9b9a,	// (0x0004b437) dt_sta_battery_pane_g1

0x9ba3,	// (0x0004b440) dt_sta_battery_pane_t1

0x7256,	// (0x00048af3) bg_dt_sta_control_pane_g1

0x37e8,	// (0x00045085) fep_china_uni_eep_pane

0x37f0,	// (0x0004508d) fep_china_uni_entry_pane_ParamLimits

0x3800,	// (0x0004509d) popup_fep_china_uni_window_g1_ParamLimits

0x3810,	// (0x000450ad) popup_fep_china_uni_window_g2_ParamLimits

0x3810,	// (0x000450ad) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x00050fd7) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x00050fd7) popup_fep_china_uni_window_g

0x9bb2,	// (0x0004b44f) fep_china_uni_eep_pane_g1

0x9bba,	// (0x0004b457) fep_china_uni_eep_pane_t1

0x96c7,	// (0x0004af64) aid_touch_area_size_smil_player

0x4841,	// (0x000460de) lc0_clock_pane

0x4a3f,	// (0x000462dc) status_pane_g5_ParamLimits

0x4a3f,	// (0x000462dc) status_pane_g5

0xcc66,	// (0x0004e503) popup_keymap_window

0x49fd,	// (0x0004629a) status_icon_pane

0xeefb,	// (0x00050798) cell_ai5_widget_pane_g3_ParamLimits

0xef1a,	// (0x000507b7) cell_ai5_widget_pane_g4_ParamLimits

0xef26,	// (0x000507c3) cell_ai5_widget_pane_g5_ParamLimits

0xef4a,	// (0x000507e7) cell_ai5_widget_pane_g8_ParamLimits

0xef4a,	// (0x000507e7) cell_ai5_widget_pane_g8

0xef5e,	// (0x000507fb) cell_ai5_widget_pane_g9_ParamLimits

0xef5e,	// (0x000507fb) cell_ai5_widget_pane_g9

0xef72,	// (0x0005080f) cell_ai5_widget_pane_g10_ParamLimits

0xef72,	// (0x0005080f) cell_ai5_widget_pane_g10

0x9bc9,	// (0x0004b466) status_icon_pane_g1

0xd995,	// (0x0004f232) bg_popup_sub_pane_cp13

0x9bd1,	// (0x0004b46e) popup_keymap_window_t1

0xca72,	// (0x0004e30f) control_pane_g6_ParamLimits

0xca72,	// (0x0004e30f) control_pane_g6

0xca7f,	// (0x0004e31c) control_pane_g7_ParamLimits

0xca7f,	// (0x0004e31c) control_pane_g7

0xca8c,	// (0x0004e329) control_pane_g8_ParamLimits

0xca8c,	// (0x0004e329) control_pane_g8

0xf095,	// (0x00050932) dt_sta_controll_pane_ParamLimits

0xf0a2,	// (0x0005093f) dt_sta_indi_pane_ParamLimits

0xf0af,	// (0x0005094c) dt_sta_title_pane_ParamLimits

0x2fc4,	// (0x00044861) aid_size_touch_scroll_bar_cale

0x0c8e,	// (0x0004252b) popup_discreet_window_ParamLimits

0x0c8e,	// (0x0004252b) popup_discreet_window

0xba07,	// (0x0004d2a4) popup_sk_window

0x5256,	// (0x00046af3) bg_popup_sub_pane_cp28_ParamLimits

0x5256,	// (0x00046af3) bg_popup_sub_pane_cp28

0x9bdf,	// (0x0004b47c) popup_discreet_window_g1_ParamLimits

0x9bdf,	// (0x0004b47c) popup_discreet_window_g1

0x9bff,	// (0x0004b49c) popup_discreet_window_t1_ParamLimits

0x9bff,	// (0x0004b49c) popup_discreet_window_t1

0x9c1d,	// (0x0004b4ba) popup_discreet_window_t2_ParamLimits

0x9c1d,	// (0x0004b4ba) popup_discreet_window_t2

0x0002,

0xfeb6,	// (0x00051753) popup_discreet_window_t_ParamLimits

0xfeb6,	// (0x00051753) popup_discreet_window_t

0x26ff,	// (0x00043f9c) popup_sk_window_g1

0x2709,	// (0x00043fa6) popup_sk_window_g2

0x0001,

0xfebd,	// (0x0005175a) popup_sk_window_g

0x9c6f,	// (0x0004b50c) popup_sk_window_t1

0x9c7d,	// (0x0004b51a) popup_sk_window_t1_copy1

0xeeeb,	// (0x00050788) cell_ai5_widget_pane_g2_ParamLimits

0xf01e,	// (0x000508bb) cell_ai5_widget_pane_t9_ParamLimits

0xf01e,	// (0x000508bb) cell_ai5_widget_pane_t9

0xd995,	// (0x0004f232) main_fep_fshwr2_pane

0xf12e,	// (0x000509cb) aid_fshwr2_btn_pane

0xf136,	// (0x000509d3) aid_fshwr2_syb_pane

0xf13e,	// (0x000509db) aid_fshwr2_txt_pane

0xf146,	// (0x000509e3) fshwr2_func_candi_pane

0xf150,	// (0x000509ed) fshwr2_hwr_syb_pane

0xf15c,	// (0x000509f9) fshwr2_icf_pane

0xd995,	// (0x0004f232) fshwr2_icf_bg_pane

0xf166,	// (0x00050a03) fshwr2_icf_pane_t1_ParamLimits

0xf166,	// (0x00050a03) fshwr2_icf_pane_t1

0x7256,	// (0x00048af3) fshwr2_func_candi_pane_g1

0x9cf0,	// (0x0004b58d) fshwr2_func_candi_row_pane_ParamLimits

0x9cf0,	// (0x0004b58d) fshwr2_func_candi_row_pane

0xf17e,	// (0x00050a1b) cell_fshwr2_syb_pane_ParamLimits

0xf17e,	// (0x00050a1b) cell_fshwr2_syb_pane

0x74e0,	// (0x00048d7d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x74e0,	// (0x00048d7d) fshwr2_hwr_syb_pane_g1

0xd995,	// (0x0004f232) bg_popup_call_pane_cp01

0x9d1b,	// (0x0004b5b8) fshwr2_func_candi_cell_pane_ParamLimits

0x9d1b,	// (0x0004b5b8) fshwr2_func_candi_cell_pane

0x9d4d,	// (0x0004b5ea) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9d4d,	// (0x0004b5ea) fshwr2_func_candi_cell_bg_pane

0x9d67,	// (0x0004b604) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9d67,	// (0x0004b604) fshwr2_func_candi_cell_pane_g1

0x9d87,	// (0x0004b624) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9d87,	// (0x0004b624) fshwr2_func_candi_cell_pane_t1

0xd995,	// (0x0004f232) bg_button_pane_cp08

0x3cea,	// (0x00045587) cell_fshwr2_syb_bg_pane

0xf197,	// (0x00050a34) cell_fshwr2_syb_bg_pane_g1

0xf19f,	// (0x00050a3c) cell_fshwr2_syb_bg_pane_t1

0x308c,	// (0x00044929) main_tmo_pane

0xd7dd,	// (0x0004f07a) uni_indicator_pane_g1_ParamLimits

0xd7f2,	// (0x0004f08f) uni_indicator_pane_g2_ParamLimits

0xd807,	// (0x0004f0a4) uni_indicator_pane_g3_ParamLimits

0xd81d,	// (0x0004f0ba) uni_indicator_pane_g4_ParamLimits

0xd81d,	// (0x0004f0ba) uni_indicator_pane_g4

0xd831,	// (0x0004f0ce) uni_indicator_pane_g5_ParamLimits

0xd831,	// (0x0004f0ce) uni_indicator_pane_g5

0xd845,	// (0x0004f0e2) uni_indicator_pane_g6_ParamLimits

0xd845,	// (0x0004f0e2) uni_indicator_pane_g6

0xf932,	// (0x000511cf) uni_indicator_pane_g_ParamLimits

0xe34e,	// (0x0004fbeb) popup_tmo_note_window_ParamLimits

0xe34e,	// (0x0004fbeb) popup_tmo_note_window

0xd995,	// (0x0004f232) fshwr2_bg_pane

0x9d78,	// (0x0004b615) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9d78,	// (0x0004b615) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec2,	// (0x0005175f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec2,	// (0x0005175f) fshwr2_func_candi_cell_pane_g

0x7256,	// (0x00048af3) bg_popup_window_pane_cp01

0x9db1,	// (0x0004b64e) bg_popup_window_pane_g1_cp01

0x9dba,	// (0x0004b657) bg_popup_window_pane_cp22_ParamLimits

0x9dba,	// (0x0004b657) bg_popup_window_pane_cp22

0x9dc8,	// (0x0004b665) listscroll_tmo_link_pane_ParamLimits

0x9dc8,	// (0x0004b665) listscroll_tmo_link_pane

0x9e08,	// (0x0004b6a5) popup_tmo_note_window_g1_ParamLimits

0x9e08,	// (0x0004b6a5) popup_tmo_note_window_g1

0x9e15,	// (0x0004b6b2) tmo_note_info_pane_ParamLimits

0x9e15,	// (0x0004b6b2) tmo_note_info_pane

0xf1ae,	// (0x00050a4b) list_tmo_note_info_pane_g1_ParamLimits

0xf1ae,	// (0x00050a4b) list_tmo_note_info_pane_g1

0x9e46,	// (0x0004b6e3) list_tmo_note_info_pane_g2_ParamLimits

0x9e46,	// (0x0004b6e3) list_tmo_note_info_pane_g2

0x0001,

0xfec7,	// (0x00051764) list_tmo_note_info_pane_g_ParamLimits

0xfec7,	// (0x00051764) list_tmo_note_info_pane_g

0x9e62,	// (0x0004b6ff) list_tmo_note_info_text_pane_ParamLimits

0x9e62,	// (0x0004b6ff) list_tmo_note_info_text_pane

0x9ee7,	// (0x0004b784) list_tmo_link_pane

0x9ef4,	// (0x0004b791) scroll_pane_cp20

0x9f01,	// (0x0004b79e) list_single_tmo_link_pane_ParamLimits

0x9f01,	// (0x0004b79e) list_single_tmo_link_pane

0x9f11,	// (0x0004b7ae) list_single_tmo_link_pane_t1

0x9f1f,	// (0x0004b7bc) list_tmo_note_info_text_pane_t1_ParamLimits

0x9f1f,	// (0x0004b7bc) list_tmo_note_info_text_pane_t1

0xbe7f,	// (0x0004d71c) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbe7f,	// (0x0004d71c) aid_size_touch_scroll_bar_cp01

0xb5a4,	// (0x0004ce41) aid_size_touch_slider_marker

0xb9f7,	// (0x0004d294) popup_settings_window_ParamLimits

0xb9f7,	// (0x0004d294) popup_settings_window

0x043f,	// (0x00041cdc) popup_candi_list_indi_window

0x46e9,	// (0x00045f86) aid_touch_navi_pane_ParamLimits

0x1f07,	// (0x000437a4) rs_clock_indi_pane

0x1f10,	// (0x000437ad) sctrl_sk_bottom_pane_ParamLimits

0x1f21,	// (0x000437be) sctrl_sk_top_pane_ParamLimits

0x2006,	// (0x000438a3) popup_fep_tooltip_window

0x97db,	// (0x0004b078) aid_size_cell_widget_grid_ParamLimits

0xeedf,	// (0x0005077c) cell_ai5_widget_pane_g1_ParamLimits

0xeedf,	// (0x0005077c) cell_ai5_widget_pane_g1

0xef32,	// (0x000507cf) cell_ai5_widget_pane_g6_ParamLimits

0xef3e,	// (0x000507db) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe45,	// (0x000516e2) cell_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x000516e2) cell_ai5_widget_pane_g

0xf042,	// (0x000508df) cell_ai5_widget_pane_t10_ParamLimits

0xf042,	// (0x000508df) cell_ai5_widget_pane_t10

0xf058,	// (0x000508f5) grid_ai5_widget_pane_ParamLimits

0x9a52,	// (0x0004b2ef) cell_contacts_ai5_widget_pane_ParamLimits

0x9a52,	// (0x0004b2ef) cell_contacts_ai5_widget_pane

0x9c32,	// (0x0004b4cf) popup_discreet_window_t3_ParamLimits

0x9c32,	// (0x0004b4cf) popup_discreet_window_t3

0x9cc1,	// (0x0004b55e) popup_fshwr2_char_preview_window_ParamLimits

0x9cc1,	// (0x0004b55e) popup_fshwr2_char_preview_window

0xf1c5,	// (0x00050a62) tmo_note_info_pane_t1

0xf1da,	// (0x00050a77) tmo_note_info_pane_t2

0xf1f3,	// (0x00050a90) tmo_note_info_pane_t3

0x9ec3,	// (0x0004b760) tmo_note_info_pane_t4

0x9ed5,	// (0x0004b772) tmo_note_info_pane_t5

0x0004,

0xfecc,	// (0x00051769) tmo_note_info_pane_t

0x9ee7,	// (0x0004b784) list_tmo_link_pane_ParamLimits

0x9ef4,	// (0x0004b791) scroll_pane_cp20_ParamLimits

0xd995,	// (0x0004f232) bg_popup_fep_char_preview_window_cp01

0x9f38,	// (0x0004b7d5) popup_fshwr2_char_preview_window_t1

0x9f46,	// (0x0004b7e3) popup_candi_list_indi_window_g1

0x9f4f,	// (0x0004b7ec) bg_cell_contacts_ai5_widget_pane

0x9f5b,	// (0x0004b7f8) cell_contacts_ai5_widget_pane_g1

0x9f6f,	// (0x0004b80c) cell_contacts_ai5_widget_pane_g2

0x9f7e,	// (0x0004b81b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed7,	// (0x00051774) cell_contacts_ai5_widget_pane_g

0x9f91,	// (0x0004b82e) cell_contacts_ai5_widget_pane_t1

0x308c,	// (0x00044929) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf26d,	// (0x00050b0a) settings_container_pane

0x3cea,	// (0x00045587) listscroll_set_pane_copy1

0x699c,	// (0x00048239) scroll_pane_cp121_copy1

0xa017,	// (0x0004b8b4) set_content_pane_copy1

0xf279,	// (0x00050b16) aid_height_set_list_copy1_ParamLimits

0xf279,	// (0x00050b16) aid_height_set_list_copy1

0x5fe9,	// (0x00047886) aid_size_parent_copy1_ParamLimits

0x5fe9,	// (0x00047886) aid_size_parent_copy1

0xf285,	// (0x00050b22) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf285,	// (0x00050b22) button_value_adjust_pane_cp6_copy1

0x4068,	// (0x00045905) list_highlight_pane_cp2_copy1_ParamLimits

0x4068,	// (0x00045905) list_highlight_pane_cp2_copy1

0xf299,	// (0x00050b36) list_set_pane_copy1_ParamLimits

0xf299,	// (0x00050b36) list_set_pane_copy1

0xf208,	// (0x00050aa5) main_pane_set_t1_copy1_ParamLimits

0xf208,	// (0x00050aa5) main_pane_set_t1_copy1

0xf242,	// (0x00050adf) main_pane_set_t2_copy1_ParamLimits

0xf242,	// (0x00050adf) main_pane_set_t2_copy1

0xf360,	// (0x00050bfd) main_pane_set_t3_copy1

0xf36e,	// (0x00050c0b) main_pane_set_t4_copy1

0xf261,	// (0x00050afe) set_content_pane_g1_copy1_ParamLimits

0xf261,	// (0x00050afe) set_content_pane_g1_copy1

0xf37c,	// (0x00050c19) setting_code_pane_copy1

0xa12c,	// (0x0004b9c9) setting_slider_graphic_pane_copy1

0xa12c,	// (0x0004b9c9) setting_slider_pane_copy1

0xa12c,	// (0x0004b9c9) setting_text_pane_copy1

0xa136,	// (0x0004b9d3) setting_volume_pane_copy1

0xf386,	// (0x00050c23) settings_code_pane_cp2_copy1

0xf38e,	// (0x00050c2b) settings_code_pane_cp_copy1_ParamLimits

0xf38e,	// (0x00050c2b) settings_code_pane_cp_copy1

0xf3a2,	// (0x00050c3f) volume_set_pane_copy1

0xf3ae,	// (0x00050c4b) volume_set_pane_g10_copy1

0xf3ba,	// (0x00050c57) volume_set_pane_g1_copy1

0xf3c4,	// (0x00050c61) volume_set_pane_g2_copy1

0xf3ce,	// (0x00050c6b) volume_set_pane_g3_copy1

0xf3d8,	// (0x00050c75) volume_set_pane_g4_copy1

0xf3e2,	// (0x00050c7f) volume_set_pane_g5_copy1

0xf3ec,	// (0x00050c89) volume_set_pane_g6_copy1

0xf3f6,	// (0x00050c93) volume_set_pane_g7_copy1

0xf400,	// (0x00050c9d) volume_set_pane_g8_copy1

0xf40a,	// (0x00050ca7) volume_set_pane_g9_copy1

0x2805,	// (0x000440a2) bg_set_opt_pane_cp_copy1_ParamLimits

0x2805,	// (0x000440a2) bg_set_opt_pane_cp_copy1

0xa1cd,	// (0x0004ba6a) setting_slider_pane_t1_copy1_ParamLimits

0xa1cd,	// (0x0004ba6a) setting_slider_pane_t1_copy1

0xf414,	// (0x00050cb1) setting_slider_pane_t2_copy1_ParamLimits

0xf414,	// (0x00050cb1) setting_slider_pane_t2_copy1

0xf42e,	// (0x00050ccb) setting_slider_pane_t3_copy1_ParamLimits

0xf42e,	// (0x00050ccb) setting_slider_pane_t3_copy1

0xf446,	// (0x00050ce3) slider_set_pane_copy1_ParamLimits

0xf446,	// (0x00050ce3) slider_set_pane_copy1

0x30f3,	// (0x00044990) set_opt_bg_pane_g1_copy2

0x30fb,	// (0x00044998) set_opt_bg_pane_g2_copy2

0xa233,	// (0x0004bad0) set_opt_bg_pane_g3_copy2

0x310b,	// (0x000449a8) set_opt_bg_pane_g4_copy2

0x3113,	// (0x000449b0) set_opt_bg_pane_g5_copy2

0x311b,	// (0x000449b8) set_opt_bg_pane_g6_copy2

0xf45c,	// (0x00050cf9) set_opt_bg_pane_g7_copy2

0xa247,	// (0x0004bae4) set_opt_bg_pane_g8_copy2

0xa251,	// (0x0004baee) set_opt_bg_pane_g9_copy2

0xa25b,	// (0x0004baf8) aid_size_touch_slider_mark_copy1_ParamLimits

0xa25b,	// (0x0004baf8) aid_size_touch_slider_mark_copy1

0xa26f,	// (0x0004bb0c) slider_set_pane_g1_copy1

0xa278,	// (0x0004bb15) slider_set_pane_g2_copy1

0x66a7,	// (0x00047f44) slider_set_pane_g3_copy1_ParamLimits

0x66a7,	// (0x00047f44) slider_set_pane_g3_copy1

0x66bb,	// (0x00047f58) slider_set_pane_g4_copy1_ParamLimits

0x66bb,	// (0x00047f58) slider_set_pane_g4_copy1

0x66d3,	// (0x00047f70) slider_set_pane_g5_copy1_ParamLimits

0x66d3,	// (0x00047f70) slider_set_pane_g5_copy1

0x66a7,	// (0x00047f44) slider_set_pane_g6_copy1_ParamLimits

0x66a7,	// (0x00047f44) slider_set_pane_g6_copy1

0xf466,	// (0x00050d03) slider_set_pane_g7_copy1_ParamLimits

0xf466,	// (0x00050d03) slider_set_pane_g7_copy1

0xd9a9,	// (0x0004f246) bg_set_opt_pane_cp2_copy1

0xa296,	// (0x0004bb33) setting_slider_graphic_pane_g1_copy1

0xf47c,	// (0x00050d19) setting_slider_graphic_pane_t1_copy1

0xf48c,	// (0x00050d29) setting_slider_graphic_pane_t2_copy1

0xf49c,	// (0x00050d39) slider_set_pane_cp_copy1

0xa2cf,	// (0x0004bb6c) input_focus_pane_cp1_copy1

0xa2d8,	// (0x0004bb75) list_set_text_pane_copy1

0xa2e0,	// (0x0004bb7d) setting_text_pane_g1_copy1

0xf53b,	// (0x00050dd8) set_text_pane_t1_copy1

0xa2cf,	// (0x0004bb6c) input_focus_pane_cp2_copy1

0xa2e0,	// (0x0004bb7d) setting_code_pane_g1_copy1

0xf4a4,	// (0x00050d41) setting_code_pane_t1_copy1

0xf4b2,	// (0x00050d4f) list_set_graphic_pane_copy1

0xd9a9,	// (0x0004f246) bg_set_opt_pane_cp4_copy1

0xc97e,	// (0x0004e21b) list_set_graphic_pane_g1_copy1_ParamLimits

0xc97e,	// (0x0004e21b) list_set_graphic_pane_g1_copy1

0xf4c4,	// (0x00050d61) list_set_graphic_pane_g2_copy1

0xc996,	// (0x0004e233) list_set_graphic_pane_t1_copy1_ParamLimits

0xc996,	// (0x0004e233) list_set_graphic_pane_t1_copy1

0x7256,	// (0x00048af3) rs_clock_indi_pane_g1

0xa311,	// (0x0004bbae) rs_clock_indi_pane_t1

0xa31f,	// (0x0004bbbc) rs_indi_pane

0xa327,	// (0x0004bbc4) rs_indi_pane_g1

0xa330,	// (0x0004bbcd) rs_indi_pane_g2

0xa339,	// (0x0004bbd6) rs_indi_pane_g3

0x0002,

0xfede,	// (0x0005177b) rs_indi_pane_g

0x3cea,	// (0x00045587) bg_popup_preview_window_pane_cp03

0xa342,	// (0x0004bbdf) popup_fep_tooltip_window_t1

0x7f0a,	// (0x000497a7) popup_note2_window_g2_ParamLimits

0x7f0a,	// (0x000497a7) popup_note2_window_g2

0x0001,

0xfc77,	// (0x00051514) popup_note2_window_g_ParamLimits

0xfc77,	// (0x00051514) popup_note2_window_g

0x8412,	// (0x00049caf) bg_popup_sub_pane_cp11_ParamLimits

0x841f,	// (0x00049cbc) cell_ai3_links_pane_g1_ParamLimits

0x8436,	// (0x00049cd3) cell_ai3_links_pane_t1

0xf53b,	// (0x00050dd8) set_text_pane_t1_copy1_ParamLimits

0x3bf7,	// (0x00045494) cell_graphic_popup_pane_cp2_ParamLimits

0x3bf7,	// (0x00045494) cell_graphic_popup_pane_cp2

0xa350,	// (0x0004bbed) cell_graphic_popup_pane_g1_cp2

0x2dd7,	// (0x00044674) cell_graphic_popup_pane_g2_cp2

0xa358,	// (0x0004bbf5) cell_graphic_popup_pane_g3_cp2

0xa360,	// (0x0004bbfd) cell_graphic_popup_pane_t2_cp2

0x2de8,	// (0x00044685) grid_highlight_pane_cp3_cp2

0x343f,	// (0x00044cdc) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x308c,	// (0x00044929) main_tmo_pane_ParamLimits

0xe342,	// (0x0004fbdf) popup_tmo_big_image_note_window

0xeecf,	// (0x0005076c) cell_ai5_widget_list_pane

0xeed7,	// (0x00050774) cell_ai5_widget_lrg_icon_pane

0xf1c5,	// (0x00050a62) tmo_note_info_pane_t1_ParamLimits

0xf1da,	// (0x00050a77) tmo_note_info_pane_t2_ParamLimits

0xf1f3,	// (0x00050a90) tmo_note_info_pane_t3_ParamLimits

0x9ec3,	// (0x0004b760) tmo_note_info_pane_t4_ParamLimits

0x9ed5,	// (0x0004b772) tmo_note_info_pane_t5_ParamLimits

0xfecc,	// (0x00051769) tmo_note_info_pane_t_ParamLimits

0xf26d,	// (0x00050b0a) settings_container_pane_ParamLimits

0xa2c7,	// (0x0004bb64) indicator_popup_pane_cp5

0xa2c7,	// (0x0004bb64) indicator_popup_pane_cp6

0xf4b2,	// (0x00050d4f) list_set_graphic_pane_copy1_ParamLimits

0xd995,	// (0x0004f232) bg_popup_window_pane_cp23

0xa36e,	// (0x0004bc0b) popup_tmo_big_image_note_window_g1

0xa37a,	// (0x0004bc17) popup_tmo_big_image_note_window_t1

0xa38a,	// (0x0004bc27) popup_tmo_big_image_note_window_t2

0xa39a,	// (0x0004bc37) popup_tmo_big_image_note_window_t3

0x0002,

0xfee5,	// (0x00051782) popup_tmo_big_image_note_window_t

0xf4cc,	// (0x00050d69) cell_ai5_widget_lrg_icon_pane_g1

0xf4d4,	// (0x00050d71) cell_ai5_widget_lrg_icon_pane_t1

0xf4e2,	// (0x00050d7f) cell_ai5_widget_list_row_pane_ParamLimits

0xf4e2,	// (0x00050d7f) cell_ai5_widget_list_row_pane

0xf4fb,	// (0x00050d98) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf4fb,	// (0x00050d98) cell_ai5_widget_list_row_pane_g1

0xf508,	// (0x00050da5) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf508,	// (0x00050da5) cell_ai5_widget_list_row_pane_t1

0xf520,	// (0x00050dbd) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf520,	// (0x00050dbd) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeec,	// (0x00051789) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeec,	// (0x00051789) cell_ai5_widget_list_row_pane_t

0xd995,	// (0x0004f232) main_fep_vtchi_ss_pane

0xa410,	// (0x0004bcad) popup_fep_char_pre_window

0xa418,	// (0x0004bcb5) popup_fep_ituss_window

0xa439,	// (0x0004bcd6) popup_fep_vkbss_window

0xa45a,	// (0x0004bcf7) grid_vkbss_keypad_pane_ParamLimits

0xa45a,	// (0x0004bcf7) grid_vkbss_keypad_pane

0xa46a,	// (0x0004bd07) ituss_keypad_pane

0xa483,	// (0x0004bd20) aid_vkbss_key_offset_ParamLimits

0xa483,	// (0x0004bd20) aid_vkbss_key_offset

0xa48f,	// (0x0004bd2c) cell_vkbss_key_pane_ParamLimits

0xa48f,	// (0x0004bd2c) cell_vkbss_key_pane

0xa4a5,	// (0x0004bd42) bg_cell_vkbss_key_g1_ParamLimits

0xa4a5,	// (0x0004bd42) bg_cell_vkbss_key_g1

0xa4b1,	// (0x0004bd4e) cell_vkbss_key_3p_pane_ParamLimits

0xa4b1,	// (0x0004bd4e) cell_vkbss_key_3p_pane

0xa4cb,	// (0x0004bd68) cell_vkbss_key_g1_ParamLimits

0xa4cb,	// (0x0004bd68) cell_vkbss_key_g1

0xa4e5,	// (0x0004bd82) cell_vkbss_key_t1_ParamLimits

0xa4e5,	// (0x0004bd82) cell_vkbss_key_t1

0xa510,	// (0x0004bdad) cell_ituss_key_pane_ParamLimits

0xa510,	// (0x0004bdad) cell_ituss_key_pane

0xa520,	// (0x0004bdbd) bg_cell_ituss_key_g1_ParamLimits

0xa520,	// (0x0004bdbd) bg_cell_ituss_key_g1

0xa52c,	// (0x0004bdc9) cell_ituss_key_pane_g1_ParamLimits

0xa52c,	// (0x0004bdc9) cell_ituss_key_pane_g1

0xa538,	// (0x0004bdd5) cell_ituss_key_pane_g2_ParamLimits

0xa538,	// (0x0004bdd5) cell_ituss_key_pane_g2

0x0001,

0xfef1,	// (0x0005178e) cell_ituss_key_pane_g_ParamLimits

0xfef1,	// (0x0005178e) cell_ituss_key_pane_g

0xa554,	// (0x0004bdf1) cell_ituss_key_t1_ParamLimits

0xa554,	// (0x0004bdf1) cell_ituss_key_t1

0xa582,	// (0x0004be1f) cell_ituss_key_t2_ParamLimits

0xa582,	// (0x0004be1f) cell_ituss_key_t2

0xa5b3,	// (0x0004be50) cell_ituss_key_t3_ParamLimits

0xa5b3,	// (0x0004be50) cell_ituss_key_t3

0xa5e4,	// (0x0004be81) cell_ituss_key_t4_ParamLimits

0xa5e4,	// (0x0004be81) cell_ituss_key_t4

0x0003,

0xfef6,	// (0x00051793) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x00051793) cell_ituss_key_t

0xa615,	// (0x0004beb2) cell_vkbss_key_3p_pane_g1

0xa61d,	// (0x0004beba) cell_vkbss_key_3p_pane_g2

0xa625,	// (0x0004bec2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x0005179c) cell_vkbss_key_3p_pane_g

0xd995,	// (0x0004f232) bg_popup_fep_char_preview_window_cp02

0xa62d,	// (0x0004beca) popup_fep_char_pre_window_t1

0xeec5,	// (0x00050762) main_ai5_sk_pane

0x9f4f,	// (0x0004b7ec) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9f5b,	// (0x0004b7f8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9f6f,	// (0x0004b80c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9f7e,	// (0x0004b81b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed7,	// (0x00051774) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9f91,	// (0x0004b82e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x308c,	// (0x00044929) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf532,	// (0x00050dcf) main_ai5_sk_pane_g1

0x508e,	// (0x0004692b) popup_query_code_window_g1

0xa42e,	// (0x0004bccb) popup_fep_vkb_icf_pane

0xa444,	// (0x0004bce1) popup_fep_vtchi_icf_pane

0x308c,	// (0x00044929) bg_icf_pane

0xa654,	// (0x0004bef1) list_vkb_icf_pane

0x308c,	// (0x00044929) bg_icf_pane_cp01

0x8715,	// (0x00049fb2) vtchi_icf_list_pane

0xa674,	// (0x0004bf11) list_vkb_icf_pane_t1_ParamLimits

0xa674,	// (0x0004bf11) list_vkb_icf_pane_t1

0xa68b,	// (0x0004bf28) vtchi_icf_list_pane_t1_ParamLimits

0xa68b,	// (0x0004bf28) vtchi_icf_list_pane_t1

0xa418,	// (0x0004bcb5) popup_fep_ituss_window_ParamLimits

0xa444,	// (0x0004bce1) popup_fep_vtchi_icf_pane_ParamLimits

0xa46a,	// (0x0004bd07) ituss_keypad_pane_ParamLimits

0xa47a,	// (0x0004bd17) ituss_sks_pane

0x308c,	// (0x00044929) bg_icf_pane_ParamLimits

0xa645,	// (0x0004bee2) icf_edit_indi_pane_ParamLimits

0xa645,	// (0x0004bee2) icf_edit_indi_pane

0xa654,	// (0x0004bef1) list_vkb_icf_pane_ParamLimits

0x308c,	// (0x00044929) bg_icf_pane_cp01_ParamLimits

0xa660,	// (0x0004befd) icf_edit_indi_pane_cp01_ParamLimits

0xa660,	// (0x0004befd) icf_edit_indi_pane_cp01

0xa66c,	// (0x0004bf09) vtchi_query_pane

0x74e0,	// (0x00048d7d) icf_edit_indi_pane_g1_ParamLimits

0x74e0,	// (0x00048d7d) icf_edit_indi_pane_g1

0xa6a4,	// (0x0004bf41) icf_edit_indi_pane_g2_ParamLimits

0xa6a4,	// (0x0004bf41) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x000517a3) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x000517a3) icf_edit_indi_pane_g

0xa6b0,	// (0x0004bf4d) icf_edit_indi_pane_t1

0xa6be,	// (0x0004bf5b) bg_input_focus_pane_cp042

0x2fbb,	// (0x00044858) vtchi_button_pane

0xa6c7,	// (0x0004bf64) vtchi_query_pane_t1

0xa6d5,	// (0x0004bf72) vtchi_query_pane_t2

0xa6e3,	// (0x0004bf80) vtchi_query_pane_t3

0x0002,

0xff0b,	// (0x000517a8) vtchi_query_pane_t

0xd995,	// (0x0004f232) bg_button_pane_cp13

0xa6f1,	// (0x0004bf8e) vtchi_button_pane_g1

0x8c81,	// (0x0004a51e) ituss_sks_pane_g1

0xa6f9,	// (0x0004bf96) ituss_sks_pane_g2

0x0001,

0xff12,	// (0x000517af) ituss_sks_pane_g

0xa702,	// (0x0004bf9f) ituss_sks_pane_t1

0xa710,	// (0x0004bfad) ituss_sks_pane_t2

0x0001,

0xff17,	// (0x000517b4) ituss_sks_pane_t

0x6cfd,	// (0x0004859a) indicator_nsta_pane_cp_g1

0x6d06,	// (0x000485a3) indicator_nsta_pane_cp_g2

0x6d0e,	// (0x000485ab) indicator_nsta_pane_cp_g3

0x6d16,	// (0x000485b3) indicator_nsta_pane_cp_g4

0x6d1e,	// (0x000485bb) indicator_nsta_pane_cp_g5

0x6d26,	// (0x000485c3) indicator_nsta_pane_cp_g6

0x0005,

0xfac1,	// (0x0005135e) indicator_nsta_pane_cp_g

0xecfd,	// (0x0005059a) cell_graphic2_pane_t2_ParamLimits

0xecfd,	// (0x0005059a) cell_graphic2_pane_t2

0x0001,

0xfdce,	// (0x0005166b) cell_graphic2_pane_t_ParamLimits

0xfdce,	// (0x0005166b) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large

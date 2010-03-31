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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0003edf7 };

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
0xb95c,	// (0x0004a753) Screen

0xb968,	// (0x0004a75f) application_window_ParamLimits

0xb968,	// (0x0004a75f) application_window

0x23b4,	// (0x000411ab) screen_g1

0x92ff,	// (0x000480f6) area_bottom_pane_ParamLimits

0x92ff,	// (0x000480f6) area_bottom_pane

0x93bf,	// (0x000481b6) area_top_pane_ParamLimits

0x93bf,	// (0x000481b6) area_top_pane

0x945d,	// (0x00048254) main_pane_ParamLimits

0x945d,	// (0x00048254) main_pane

0x23be,	// (0x000411b5) misc_graphics

0xcb37,	// (0x0004b92e) battery_pane_ParamLimits

0xcb37,	// (0x0004b92e) battery_pane

0x5d39,	// (0x00044b30) bg_status_flat_pane_g8

0x5d41,	// (0x00044b38) bg_status_flat_pane_g9

0x54c1,	// (0x000442b8) context_pane_ParamLimits

0x54c1,	// (0x000442b8) context_pane

0xd044,	// (0x0004be3b) navi_pane_ParamLimits

0xd044,	// (0x0004be3b) navi_pane

0xd0b7,	// (0x0004beae) signal_pane_ParamLimits

0xd0b7,	// (0x0004beae) signal_pane

0x0008,

0xf87f,	// (0x0004e676) bg_status_flat_pane_g

0xd11c,	// (0x0004bf13) status_pane_g1_ParamLimits

0xd11c,	// (0x0004bf13) status_pane_g1

0x6aaa,	// (0x000458a1) status_pane_g2_ParamLimits

0x6aaa,	// (0x000458a1) status_pane_g2

0x5526,	// (0x0004431d) status_pane_g3_ParamLimits

0x5526,	// (0x0004431d) status_pane_g3

0x0004,

0xf7ab,	// (0x0004e5a2) status_pane_g_ParamLimits

0xf7ab,	// (0x0004e5a2) status_pane_g

0xd128,	// (0x0004bf1f) title_pane_ParamLimits

0xd128,	// (0x0004bf1f) title_pane

0xd165,	// (0x0004bf5c) uni_indicator_pane_ParamLimits

0xd165,	// (0x0004bf5c) uni_indicator_pane

0x53ea,	// (0x000441e1) bg_list_pane_ParamLimits

0x53ea,	// (0x000441e1) bg_list_pane

0x540a,	// (0x00044201) find_pane

0xcad0,	// (0x0004b8c7) listscroll_app_pane_ParamLimits

0xcad0,	// (0x0004b8c7) listscroll_app_pane

0x5412,	// (0x00044209) listscroll_form_pane

0xa0c3,	// (0x00048eba) listscroll_gen_pane_ParamLimits

0xa0c3,	// (0x00048eba) listscroll_gen_pane

0xa0d7,	// (0x00048ece) listscroll_set_pane

0xc037,	// (0x0004ae2e) main_idle_act_pane

0x51ce,	// (0x00043fc5) main_idle_trad_pane

0x51ce,	// (0x00043fc5) main_list_empty_pane

0x4813,	// (0x0004360a) main_midp_pane

0x543e,	// (0x00044235) main_pane_g1_ParamLimits

0x543e,	// (0x00044235) main_pane_g1

0xa0ed,	// (0x00048ee4) popup_ai_message_window_ParamLimits

0xa0ed,	// (0x00048ee4) popup_ai_message_window

0xa191,	// (0x00048f88) popup_fep_china_uni_window_ParamLimits

0xa191,	// (0x00048f88) popup_fep_china_uni_window

0xa1eb,	// (0x00048fe2) popup_fep_japan_candidate_window_ParamLimits

0xa1eb,	// (0x00048fe2) popup_fep_japan_candidate_window

0xa209,	// (0x00049000) popup_fep_japan_predictive_window_ParamLimits

0xa209,	// (0x00049000) popup_fep_japan_predictive_window

0xa239,	// (0x00049030) popup_find_window

0xa246,	// (0x0004903d) popup_grid_graphic_window_ParamLimits

0xa246,	// (0x0004903d) popup_grid_graphic_window

0xa26e,	// (0x00049065) popup_large_graphic_colour_window

0xa294,	// (0x0004908b) popup_menu_window_ParamLimits

0xa294,	// (0x0004908b) popup_menu_window

0xa44e,	// (0x00049245) popup_note_image_window

0xa43a,	// (0x00049231) popup_note_wait_window_ParamLimits

0xa43a,	// (0x00049231) popup_note_wait_window

0xa43a,	// (0x00049231) popup_note_window_ParamLimits

0xa43a,	// (0x00049231) popup_note_window

0xa4a4,	// (0x0004929b) popup_query_code_window_ParamLimits

0xa4a4,	// (0x0004929b) popup_query_code_window

0xa4b8,	// (0x000492af) popup_query_data_code_window_ParamLimits

0xa4b8,	// (0x000492af) popup_query_data_code_window

0xa4d3,	// (0x000492ca) popup_query_data_window_ParamLimits

0xa4d3,	// (0x000492ca) popup_query_data_window

0xa4ed,	// (0x000492e4) popup_query_sat_info_window_ParamLimits

0xa4ed,	// (0x000492e4) popup_query_sat_info_window

0xa526,	// (0x0004931d) popup_snote_single_graphic_window_ParamLimits

0xa526,	// (0x0004931d) popup_snote_single_graphic_window

0xa526,	// (0x0004931d) popup_snote_single_text_window_ParamLimits

0xa526,	// (0x0004931d) popup_snote_single_text_window

0xa53b,	// (0x00049332) popup_sub_window_general

0xa669,	// (0x00049460) popup_window_general_ParamLimits

0xa669,	// (0x00049460) popup_window_general

0x544c,	// (0x00044243) power_save_pane

0x9f69,	// (0x00048d60) control_pane_g1_ParamLimits

0x9f69,	// (0x00048d60) control_pane_g1

0x9f90,	// (0x00048d87) control_pane_g2_ParamLimits

0x9f90,	// (0x00048d87) control_pane_g2

0x53d4,	// (0x000441cb) control_pane_g3_ParamLimits

0x53d4,	// (0x000441cb) control_pane_g3

0x0007,

0xf793,	// (0x0004e58a) control_pane_g_ParamLimits

0xf793,	// (0x0004e58a) control_pane_g

0x9fd8,	// (0x00048dcf) control_pane_t1_ParamLimits

0x9fd8,	// (0x00048dcf) control_pane_t1

0xa024,	// (0x00048e1b) control_pane_t2_ParamLimits

0xa024,	// (0x00048e1b) control_pane_t2

0x0002,

0xf7a4,	// (0x0004e59b) control_pane_t_ParamLimits

0xf7a4,	// (0x0004e59b) control_pane_t

0x52f5,	// (0x000440ec) navi_navi_volume_pane_cp1

0x52fe,	// (0x000440f5) status_small_icon_pane

0x5306,	// (0x000440fd) status_small_pane_g1_ParamLimits

0x5306,	// (0x000440fd) status_small_pane_g1

0x533a,	// (0x00044131) status_small_pane_g2_ParamLimits

0x533a,	// (0x00044131) status_small_pane_g2

0x5346,	// (0x0004413d) status_small_pane_g3_ParamLimits

0x5346,	// (0x0004413d) status_small_pane_g3

0x5352,	// (0x00044149) status_small_pane_g4_ParamLimits

0x5352,	// (0x00044149) status_small_pane_g4

0x535e,	// (0x00044155) status_small_pane_g5_ParamLimits

0x535e,	// (0x00044155) status_small_pane_g5

0x536d,	// (0x00044164) status_small_pane_g6_ParamLimits

0x536d,	// (0x00044164) status_small_pane_g6

0x0007,

0xf782,	// (0x0004e579) status_small_pane_g_ParamLimits

0xf782,	// (0x0004e579) status_small_pane_g

0x539d,	// (0x00044194) status_small_pane_t1

0x53c0,	// (0x000441b7) status_small_wait_pane_ParamLimits

0x53c0,	// (0x000441b7) status_small_wait_pane

0xc111,	// (0x0004af08) aid_levels_signal_ParamLimits

0xc111,	// (0x0004af08) aid_levels_signal

0xc123,	// (0x0004af1a) signal_pane_g1_ParamLimits

0xc123,	// (0x0004af1a) signal_pane_g1

0xc138,	// (0x0004af2f) signal_pane_g2_ParamLimits

0xc138,	// (0x0004af2f) signal_pane_g2

0x0003,

0xf713,	// (0x0004e50a) signal_pane_g_ParamLimits

0xf713,	// (0x0004e50a) signal_pane_g

0x4d14,	// (0x00043b0b) context_pane_g1

0xb978,	// (0x0004a76f) title_pane_g1

0xb9a2,	// (0x0004a799) title_pane_t1

0x23d4,	// (0x000411cb) title_pane_t2

0x23fa,	// (0x000411f1) title_pane_t3

0x0002,

0xf55d,	// (0x0004e354) title_pane_t

0xd17d,	// (0x0004bf74) aid_levels_battery_ParamLimits

0xd17d,	// (0x0004bf74) aid_levels_battery

0xd191,	// (0x0004bf88) battery_pane_g1_ParamLimits

0xd191,	// (0x0004bf88) battery_pane_g1

0xd1a7,	// (0x0004bf9e) battery_pane_g2_ParamLimits

0xd1a7,	// (0x0004bf9e) battery_pane_g2

0x0001,

0xf7b6,	// (0x0004e5ad) battery_pane_g_ParamLimits

0xf7b6,	// (0x0004e5ad) battery_pane_g

0xd3cc,	// (0x0004c1c3) uni_indicator_pane_g1

0xd3e3,	// (0x0004c1da) uni_indicator_pane_g2

0xd3f6,	// (0x0004c1ed) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0004e71e) uni_indicator_pane_g

0x504c,	// (0x00043e43) navi_icon_pane_ParamLimits

0x504c,	// (0x00043e43) navi_icon_pane

0x4f95,	// (0x00043d8c) navi_midp_pane

0x5068,	// (0x00043e5f) navi_navi_pane

0x5072,	// (0x00043e69) navi_text_pane_ParamLimits

0x5072,	// (0x00043e69) navi_text_pane

0x23b4,	// (0x000411ab) status_small_wait_pane_g1

0x26e5,	// (0x000414dc) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0004e719) status_small_wait_pane_g

0x62f6,	// (0x000450ed) navi_navi_icon_text_pane

0x6310,	// (0x00045107) navi_navi_pane_g1_ParamLimits

0x6310,	// (0x00045107) navi_navi_pane_g1

0x62fe,	// (0x000450f5) navi_navi_pane_g2_ParamLimits

0x62fe,	// (0x000450f5) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0004e6e7) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0004e6e7) navi_navi_pane_g

0x6322,	// (0x00045119) navi_navi_tabs_pane

0x632b,	// (0x00045122) navi_navi_text_pane

0x62f6,	// (0x000450ed) navi_navi_volume_pane

0x62d2,	// (0x000450c9) navi_text_pane_t1

0x62c6,	// (0x000450bd) navi_icon_pane_g1

0x6219,	// (0x00045010) navi_navi_text_pane_t1

0xa90d,	// (0x00049704) navi_navi_volume_pane_g1

0xa915,	// (0x0004970c) volume_small_pane

0xd325,	// (0x0004c11c) navi_navi_icon_text_pane_g1

0x61ff,	// (0x00044ff6) navi_navi_icon_text_pane_t1

0x5068,	// (0x00043e5f) navi_tabs_2_long_pane

0x5068,	// (0x00043e5f) navi_tabs_2_pane

0x5068,	// (0x00043e5f) navi_tabs_3_long_pane

0x5068,	// (0x00043e5f) navi_tabs_3_pane

0x5068,	// (0x00043e5f) navi_tabs_4_pane

0xa8ed,	// (0x000496e4) tabs_2_active_pane_ParamLimits

0xa8ed,	// (0x000496e4) tabs_2_active_pane

0xa8fd,	// (0x000496f4) tabs_2_passive_pane_ParamLimits

0xa8fd,	// (0x000496f4) tabs_2_passive_pane

0xa8bb,	// (0x000496b2) tabs_3_active_pane_ParamLimits

0xa8bb,	// (0x000496b2) tabs_3_active_pane

0xa8cb,	// (0x000496c2) tabs_3_passive_pane_ParamLimits

0xa8cb,	// (0x000496c2) tabs_3_passive_pane

0xa8dc,	// (0x000496d3) tabs_3_passive_pane_cp_ParamLimits

0xa8dc,	// (0x000496d3) tabs_3_passive_pane_cp

0xa877,	// (0x0004966e) tabs_4_active_pane_ParamLimits

0xa877,	// (0x0004966e) tabs_4_active_pane

0xa888,	// (0x0004967f) tabs_4_passive_pane_ParamLimits

0xa888,	// (0x0004967f) tabs_4_passive_pane

0xa899,	// (0x00049690) tabs_4_passive_pane_cp_ParamLimits

0xa899,	// (0x00049690) tabs_4_passive_pane_cp

0xa8aa,	// (0x000496a1) tabs_4_passive_pane_cp2_ParamLimits

0xa8aa,	// (0x000496a1) tabs_4_passive_pane_cp2

0xa853,	// (0x0004964a) tabs_2_long_active_pane_ParamLimits

0xa853,	// (0x0004964a) tabs_2_long_active_pane

0xa865,	// (0x0004965c) tabs_2_long_passive_pane_ParamLimits

0xa865,	// (0x0004965c) tabs_2_long_passive_pane

0xa81a,	// (0x00049611) tabs_3_long_active_pane_ParamLimits

0xa81a,	// (0x00049611) tabs_3_long_active_pane

0xa82d,	// (0x00049624) tabs_3_long_passive_pane_ParamLimits

0xa82d,	// (0x00049624) tabs_3_long_passive_pane

0xa840,	// (0x00049637) tabs_3_long_passive_pane_cp_ParamLimits

0xa840,	// (0x00049637) tabs_3_long_passive_pane_cp

0xa7c0,	// (0x000495b7) volume_small_pane_g1

0xa7c9,	// (0x000495c0) volume_small_pane_g2

0xa7d2,	// (0x000495c9) volume_small_pane_g3

0xa7db,	// (0x000495d2) volume_small_pane_g4

0xa7e4,	// (0x000495db) volume_small_pane_g5

0xa7ed,	// (0x000495e4) volume_small_pane_g6

0xa7f6,	// (0x000495ed) volume_small_pane_g7

0xa7ff,	// (0x000495f6) volume_small_pane_g8

0xa808,	// (0x000495ff) volume_small_pane_g9

0xa811,	// (0x00049608) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0004e6b3) volume_small_pane_g

0x242a,	// (0x00041221) bg_active_tab_pane_cp2_ParamLimits

0x242a,	// (0x00041221) bg_active_tab_pane_cp2

0x241a,	// (0x00041211) tabs_3_active_pane_g1

0xba0a,	// (0x0004a801) tabs_3_active_pane_t1

0x242a,	// (0x00041221) bg_passive_tab_pane_cp2_ParamLimits

0x242a,	// (0x00041221) bg_passive_tab_pane_cp2

0x241a,	// (0x00041211) tabs_3_passive_pane_g1

0xba0a,	// (0x0004a801) tabs_3_passive_pane_t1

0x242a,	// (0x00041221) bg_active_tab_pane_cp3_ParamLimits

0x242a,	// (0x00041221) bg_active_tab_pane_cp3

0x2422,	// (0x00041219) tabs_4_active_pane_g1

0xba1c,	// (0x0004a813) tabs_4_active_pane_t1

0x242a,	// (0x00041221) bg_passive_tab_pane_cp3_ParamLimits

0x242a,	// (0x00041221) bg_passive_tab_pane_cp3

0x2422,	// (0x00041219) tabs_4_1_passive_pane_g1

0xba1c,	// (0x0004a813) tabs_4_1_passive_pane_t1

0x4813,	// (0x0004360a) list_highlight_pane_cp2

0xd46a,	// (0x0004c261) list_set_pane_ParamLimits

0xd46a,	// (0x0004c261) list_set_pane

0xd510,	// (0x0004c307) main_pane_set_t1_ParamLimits

0xd510,	// (0x0004c307) main_pane_set_t1

0xd530,	// (0x0004c327) main_pane_set_t2_ParamLimits

0xd530,	// (0x0004c327) main_pane_set_t2

0xd544,	// (0x0004c33b) main_pane_set_t3_ParamLimits

0xd544,	// (0x0004c33b) main_pane_set_t3

0xd556,	// (0x0004c34d) main_pane_set_t4_ParamLimits

0xd556,	// (0x0004c34d) main_pane_set_t4

0x0003,

0xf98c,	// (0x0004e783) main_pane_set_t_ParamLimits

0xf98c,	// (0x0004e783) main_pane_set_t

0xd568,	// (0x0004c35f) setting_code_pane

0xd572,	// (0x0004c369) setting_slider_graphic_pane

0xd572,	// (0x0004c369) setting_slider_pane

0xd572,	// (0x0004c369) setting_text_pane

0xd572,	// (0x0004c369) setting_volume_pane

0x969e,	// (0x00048495) volume_set_pane

0x242a,	// (0x00041221) bg_set_opt_pane_cp

0x96a6,	// (0x0004849d) setting_slider_pane_t1

0x96bf,	// (0x000484b6) setting_slider_pane_t2

0x96d9,	// (0x000484d0) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0004e35b) setting_slider_pane_t

0x96f1,	// (0x000484e8) slider_set_pane

0x23be,	// (0x000411b5) bg_set_opt_pane_cp2

0x2438,	// (0x0004122f) setting_slider_graphic_pane_g1

0x9707,	// (0x000484fe) setting_slider_graphic_pane_t1

0x9717,	// (0x0004850e) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0004e362) setting_slider_graphic_pane_t

0x9727,	// (0x0004851e) slider_set_pane_cp

0x23be,	// (0x000411b5) input_focus_pane_cp1

0x677a,	// (0x00045571) list_set_text_pane

0x23b4,	// (0x000411ab) setting_text_pane_g1

0x23be,	// (0x000411b5) input_focus_pane_cp2

0x23b4,	// (0x000411ab) setting_code_pane_g1

0x2441,	// (0x00041238) setting_code_pane_t1

0x972f,	// (0x00048526) set_text_pane_t1_ParamLimits

0x972f,	// (0x00048526) set_text_pane_t1

0x4709,	// (0x00043500) set_opt_bg_pane_g1

0x4711,	// (0x00043508) set_opt_bg_pane_g2

0x675a,	// (0x00045551) set_opt_bg_pane_g3

0x4721,	// (0x00043518) set_opt_bg_pane_g4

0x4729,	// (0x00043520) set_opt_bg_pane_g5

0x4731,	// (0x00043528) set_opt_bg_pane_g6

0x6762,	// (0x00045559) set_opt_bg_pane_g7

0x676a,	// (0x00045561) set_opt_bg_pane_g8

0x6772,	// (0x00045569) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0004e770) set_opt_bg_pane_g

0x674d,	// (0x00045544) slider_set_pane_g1

0xa982,	// (0x00049779) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0004e761) slider_set_pane_g

0xa91e,	// (0x00049715) volume_set_pane_g1

0xa926,	// (0x0004971d) volume_set_pane_g2

0xa92e,	// (0x00049725) volume_set_pane_g3

0xa936,	// (0x0004972d) volume_set_pane_g4

0xa93e,	// (0x00049735) volume_set_pane_g5

0xa946,	// (0x0004973d) volume_set_pane_g6

0xa94e,	// (0x00049745) volume_set_pane_g7

0xa956,	// (0x0004974d) volume_set_pane_g8

0xa95e,	// (0x00049755) volume_set_pane_g9

0xa966,	// (0x0004975d) volume_set_pane_g10

0x0009,

0xf942,	// (0x0004e739) volume_set_pane_g

0xba2e,	// (0x0004a825) indicator_pane_ParamLimits

0xba2e,	// (0x0004a825) indicator_pane

0xba3a,	// (0x0004a831) main_idle_pane_g2_ParamLimits

0xba3a,	// (0x0004a831) main_idle_pane_g2

0xba62,	// (0x0004a859) main_pane_idle_g1_ParamLimits

0xba62,	// (0x0004a859) main_pane_idle_g1

0x244f,	// (0x00041246) popup_clock_digital_analogue_window_ParamLimits

0x244f,	// (0x00041246) popup_clock_digital_analogue_window

0xba6f,	// (0x0004a866) soft_indicator_pane_ParamLimits

0xba6f,	// (0x0004a866) soft_indicator_pane

0xba7b,	// (0x0004a872) wallpaper_pane_ParamLimits

0xba7b,	// (0x0004a872) wallpaper_pane

0x23b4,	// (0x000411ab) wallpaper_pane_g1

0xba87,	// (0x0004a87e) indicator_pane_g1_ParamLimits

0xba87,	// (0x0004a87e) indicator_pane_g1

0x690e,	// (0x00045705) navi_navi_icon_text_pane_srt_g1

0x247d,	// (0x00041274) soft_indicator_pane_t1

0x2497,	// (0x0004128e) aid_ps_area_pane

0xba93,	// (0x0004a88a) aid_ps_clock_pane

0x24a8,	// (0x0004129f) aid_ps_indicator_pane

0x24b4,	// (0x000412ab) indicator_ps_pane_ParamLimits

0x24b4,	// (0x000412ab) indicator_ps_pane

0x24c3,	// (0x000412ba) power_save_pane_g1_ParamLimits

0x24c3,	// (0x000412ba) power_save_pane_g1

0x24cf,	// (0x000412c6) power_save_pane_g2_ParamLimits

0x24cf,	// (0x000412c6) power_save_pane_g2

0x92b3,	// (0x000480aa) aid_navinavi_width_pane

0x2497,	// (0x0004128e) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0004e367) power_save_pane_g_ParamLimits

0xf570,	// (0x0004e367) power_save_pane_g

0x24dd,	// (0x000412d4) power_save_pane_t1_ParamLimits

0x24dd,	// (0x000412d4) power_save_pane_t1

0xba93,	// (0x0004a88a) aid_ps_clock_pane_ParamLimits

0x24a8,	// (0x0004129f) aid_ps_indicator_pane_ParamLimits

0x24ef,	// (0x000412e6) power_save_pane_t4_ParamLimits

0x24ef,	// (0x000412e6) power_save_pane_t4

0x0001,

0xf575,	// (0x0004e36c) power_save_pane_t_ParamLimits

0xf575,	// (0x0004e36c) power_save_pane_t

0x2519,	// (0x00041310) power_save_t3_ParamLimits

0x2519,	// (0x00041310) power_save_t3

0x2504,	// (0x000412fb) power_save_t2_ParamLimits

0x2504,	// (0x000412fb) power_save_t2

0x252e,	// (0x00041325) indicator_ps_pane_g1

0xbaa1,	// (0x0004a898) ai_gene_pane_ParamLimits

0xbaa1,	// (0x0004a898) ai_gene_pane

0xbaad,	// (0x0004a8a4) ai_links_pane_ParamLimits

0xbaad,	// (0x0004a8a4) ai_links_pane

0xbab9,	// (0x0004a8b0) indicator_pane_cp1_ParamLimits

0xbab9,	// (0x0004a8b0) indicator_pane_cp1

0xbac5,	// (0x0004a8bc) main_pane_idle_g1_cp_ParamLimits

0xbac5,	// (0x0004a8bc) main_pane_idle_g1_cp

0x2537,	// (0x0004132e) popup_ai_links_title_window

0xbad1,	// (0x0004a8c8) soft_indicator_pane_cp1_ParamLimits

0xbad1,	// (0x0004a8c8) soft_indicator_pane_cp1

0x65b5,	// (0x000453ac) ai_links_pane_g1

0x65be,	// (0x000453b5) grid_ai_links_pane

0xd3c1,	// (0x0004c1b8) ai_gene_pane_1

0x6584,	// (0x0004537b) ai_gene_pane_2

0x65ac,	// (0x000453a3) list_highlight_pane_cp4

0xd3a5,	// (0x0004c19c) cell_ai_link_pane_ParamLimits

0xd3a5,	// (0x0004c19c) cell_ai_link_pane

0x657c,	// (0x00045373) cell_ai_link_pane_g1

0x26e5,	// (0x000414dc) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0004e714) cell_ai_link_pane_g

0x23be,	// (0x000411b5) grid_highlight_cp2

0x23be,	// (0x000411b5) bg_popup_sub_pane_cp1

0x254e,	// (0x00041345) popup_ai_links_title_window_t1

0x64cc,	// (0x000452c3) ai_gene_pane_1_g1_ParamLimits

0x64cc,	// (0x000452c3) ai_gene_pane_1_g1

0x64d8,	// (0x000452cf) ai_gene_pane_1_g2_ParamLimits

0x64d8,	// (0x000452cf) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x0004e70a) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x0004e70a) ai_gene_pane_1_g

0x64e5,	// (0x000452dc) ai_gene_pane_1_t1_ParamLimits

0x64e5,	// (0x000452dc) ai_gene_pane_1_t1

0x6519,	// (0x00045310) grid_ai_soft_ind_pane

0x64b7,	// (0x000452ae) ai_gene_pane_2_t1_ParamLimits

0x64b7,	// (0x000452ae) ai_gene_pane_2_t1

0xbadd,	// (0x0004a8d4) main_pane_empty_t1_ParamLimits

0xbadd,	// (0x0004a8d4) main_pane_empty_t1

0xbaf5,	// (0x0004a8ec) main_pane_empty_t2_ParamLimits

0xbaf5,	// (0x0004a8ec) main_pane_empty_t2

0xbb0a,	// (0x0004a901) main_pane_empty_t3_ParamLimits

0xbb0a,	// (0x0004a901) main_pane_empty_t3

0xbb1c,	// (0x0004a913) main_pane_empty_t4_ParamLimits

0xbb1c,	// (0x0004a913) main_pane_empty_t4

0xbb2e,	// (0x0004a925) main_pane_empty_t5_ParamLimits

0xbb2e,	// (0x0004a925) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0004e371) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0004e371) main_pane_empty_t

0x475a,	// (0x00043551) bg_popup_window_pane_ParamLimits

0x475a,	// (0x00043551) bg_popup_window_pane

0x6227,	// (0x0004501e) find_popup_pane_cp2_ParamLimits

0x6227,	// (0x0004501e) find_popup_pane_cp2

0x6233,	// (0x0004502a) heading_pane_ParamLimits

0x6233,	// (0x0004502a) heading_pane

0x23be,	// (0x000411b5) bg_popup_sub_pane

0xd339,	// (0x0004c130) bg_popup_window_pane_g1_ParamLimits

0xd339,	// (0x0004c130) bg_popup_window_pane_g1

0xd345,	// (0x0004c13c) bg_popup_window_pane_g2_ParamLimits

0xd345,	// (0x0004c13c) bg_popup_window_pane_g2

0xd351,	// (0x0004c148) bg_popup_window_pane_g3_ParamLimits

0xd351,	// (0x0004c148) bg_popup_window_pane_g3

0xd35d,	// (0x0004c154) bg_popup_window_pane_g4_ParamLimits

0xd35d,	// (0x0004c154) bg_popup_window_pane_g4

0xd369,	// (0x0004c160) bg_popup_window_pane_g5_ParamLimits

0xd369,	// (0x0004c160) bg_popup_window_pane_g5

0xd375,	// (0x0004c16c) bg_popup_window_pane_g6_ParamLimits

0xd375,	// (0x0004c16c) bg_popup_window_pane_g6

0xd381,	// (0x0004c178) bg_popup_window_pane_g7_ParamLimits

0xd381,	// (0x0004c178) bg_popup_window_pane_g7

0xd38d,	// (0x0004c184) bg_popup_window_pane_g8_ParamLimits

0xd38d,	// (0x0004c184) bg_popup_window_pane_g8

0xd399,	// (0x0004c190) bg_popup_window_pane_g9_ParamLimits

0xd399,	// (0x0004c190) bg_popup_window_pane_g9

0x620d,	// (0x00045004) bg_popup_window_pane_g10_ParamLimits

0x620d,	// (0x00045004) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0004e6d2) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0004e6d2) bg_popup_window_pane_g

0x61b6,	// (0x00044fad) bg_popup_heading_pane_ParamLimits

0x61b6,	// (0x00044fad) bg_popup_heading_pane

0xaa0a,	// (0x00049801) tabs_4_passive_pane_cp_srt_ParamLimits

0xaa0a,	// (0x00049801) tabs_4_passive_pane_cp_srt

0xaa1c,	// (0x00049813) tabs_4_passive_pane_srt_ParamLimits

0x61ca,	// (0x00044fc1) heading_pane_g2

0xaa1c,	// (0x00049813) tabs_4_passive_pane_srt

0x4813,	// (0x0004360a) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4813,	// (0x0004360a) bg_passive_tab_pane_cp3_srt

0x61d2,	// (0x00044fc9) heading_pane_t1_ParamLimits

0x61d2,	// (0x00044fc9) heading_pane_t1

0x61e9,	// (0x00044fe0) heading_pane_t2_ParamLimits

0x61e9,	// (0x00044fe0) heading_pane_t2

0x0001,

0xf8d6,	// (0x0004e6cd) heading_pane_t_ParamLimits

0xf8d6,	// (0x0004e6cd) heading_pane_t

0x5d01,	// (0x00044af8) bg_popup_heading_pane_g1

0x5d92,	// (0x00044b89) bg_popup_heading_pane_g2

0x5d9c,	// (0x00044b93) bg_popup_heading_pane_g3

0x5da6,	// (0x00044b9d) bg_popup_heading_pane_g4

0x5db0,	// (0x00044ba7) bg_popup_heading_pane_g5

0x5dba,	// (0x00044bb1) bg_popup_heading_pane_g6

0x5dc2,	// (0x00044bb9) bg_popup_heading_pane_g7

0x5dca,	// (0x00044bc1) bg_popup_heading_pane_g8

0x5dd4,	// (0x00044bcb) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0004e689) bg_popup_heading_pane_g

0x561c,	// (0x00044413) bg_popup_sub_pane_g1

0x5624,	// (0x0004441b) bg_popup_sub_pane_g2

0x562c,	// (0x00044423) bg_popup_sub_pane_g3

0x5634,	// (0x0004442b) bg_popup_sub_pane_g4

0x563c,	// (0x00044433) bg_popup_sub_pane_g5

0x5644,	// (0x0004443b) bg_popup_sub_pane_g6

0x564c,	// (0x00044443) bg_popup_sub_pane_g7

0x5654,	// (0x0004444b) bg_popup_sub_pane_g8

0x565c,	// (0x00044453) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0004e663) bg_popup_sub_pane_g

0x240c,	// (0x00041203) bg_popup_window_pane_cp5_ParamLimits

0x240c,	// (0x00041203) bg_popup_window_pane_cp5

0x256b,	// (0x00041362) popup_note_window_g1_ParamLimits

0x256b,	// (0x00041362) popup_note_window_g1

0x2577,	// (0x0004136e) popup_note_window_t1_ParamLimits

0x2577,	// (0x0004136e) popup_note_window_t1

0x2589,	// (0x00041380) popup_note_window_t2_ParamLimits

0x2589,	// (0x00041380) popup_note_window_t2

0x259b,	// (0x00041392) popup_note_window_t3_ParamLimits

0x259b,	// (0x00041392) popup_note_window_t3

0x25ad,	// (0x000413a4) popup_note_window_t4_ParamLimits

0x25ad,	// (0x000413a4) popup_note_window_t4

0x25d5,	// (0x000413cc) popup_note_window_t5_ParamLimits

0x25d5,	// (0x000413cc) popup_note_window_t5

0x0004,

0xf585,	// (0x0004e37c) popup_note_window_t_ParamLimits

0xf585,	// (0x0004e37c) popup_note_window_t

0x25f9,	// (0x000413f0) bg_popup_window_pane_cp6_ParamLimits

0x25f9,	// (0x000413f0) bg_popup_window_pane_cp6

0x5c75,	// (0x00044a6c) popup_note_image_window_g1_ParamLimits

0x5c75,	// (0x00044a6c) popup_note_image_window_g1

0x5c81,	// (0x00044a78) popup_note_image_window_g2_ParamLimits

0x5c81,	// (0x00044a78) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0004e657) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0004e657) popup_note_image_window_g

0x5c9a,	// (0x00044a91) popup_note_image_window_t1_ParamLimits

0x5c9a,	// (0x00044a91) popup_note_image_window_t1

0x5cb3,	// (0x00044aaa) popup_note_image_window_t2_ParamLimits

0x5cb3,	// (0x00044aaa) popup_note_image_window_t2

0x5ccc,	// (0x00044ac3) popup_note_image_window_t3_ParamLimits

0x5ccc,	// (0x00044ac3) popup_note_image_window_t3

0x0002,

0xf865,	// (0x0004e65c) popup_note_image_window_t_ParamLimits

0xf865,	// (0x0004e65c) popup_note_image_window_t

0x5b52,	// (0x00044949) bg_popup_window_pane_cp7_ParamLimits

0x5b52,	// (0x00044949) bg_popup_window_pane_cp7

0x5b82,	// (0x00044979) popup_note_wait_window_g1_ParamLimits

0x5b82,	// (0x00044979) popup_note_wait_window_g1

0x5b8e,	// (0x00044985) popup_note_wait_window_g2_ParamLimits

0x5b8e,	// (0x00044985) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0004e645) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0004e645) popup_note_wait_window_g

0x5ba6,	// (0x0004499d) popup_note_wait_window_t1_ParamLimits

0x5ba6,	// (0x0004499d) popup_note_wait_window_t1

0x5bcd,	// (0x000449c4) popup_note_wait_window_t2_ParamLimits

0x5bcd,	// (0x000449c4) popup_note_wait_window_t2

0x5bea,	// (0x000449e1) popup_note_wait_window_t3_ParamLimits

0x5bea,	// (0x000449e1) popup_note_wait_window_t3

0x5bfd,	// (0x000449f4) popup_note_wait_window_t4_ParamLimits

0x5bfd,	// (0x000449f4) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x0004e64c) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x0004e64c) popup_note_wait_window_t

0x5c22,	// (0x00044a19) wait_bar_pane_ParamLimits

0x5c22,	// (0x00044a19) wait_bar_pane

0x23be,	// (0x000411b5) wait_anim_pane

0x23be,	// (0x000411b5) wait_border_pane

0x23b4,	// (0x000411ab) wait_anim_pane_g1

0x23b4,	// (0x000411ab) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0004e505) wait_anim_pane_g

0x5af6,	// (0x000448ed) wait_border_pane_g1

0x5b01,	// (0x000448f8) wait_border_pane_g2

0x5b0a,	// (0x00044901) wait_border_pane_g3

0x0002,

0xf847,	// (0x0004e63e) wait_border_pane_g

0x5966,	// (0x0004475d) bg_popup_window_pane_cp16_ParamLimits

0x5966,	// (0x0004475d) bg_popup_window_pane_cp16

0x5a66,	// (0x0004485d) indicator_popup_pane_cp4_ParamLimits

0x5a66,	// (0x0004485d) indicator_popup_pane_cp4

0x5a7a,	// (0x00044871) popup_query_data_window_t1_ParamLimits

0x5a7a,	// (0x00044871) popup_query_data_window_t1

0x5a8c,	// (0x00044883) popup_query_data_window_t2_ParamLimits

0x5a8c,	// (0x00044883) popup_query_data_window_t2

0x5aa5,	// (0x0004489c) popup_query_data_window_t3_ParamLimits

0x5aa5,	// (0x0004489c) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0004e637) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0004e637) popup_query_data_window_t

0x5abf,	// (0x000448b6) query_popup_data_pane_ParamLimits

0x5abf,	// (0x000448b6) query_popup_data_pane

0x5ad3,	// (0x000448ca) query_popup_data_pane_cp1_ParamLimits

0x5ad3,	// (0x000448ca) query_popup_data_pane_cp1

0x5966,	// (0x0004475d) bg_popup_window_pane_cp10_ParamLimits

0x5966,	// (0x0004475d) bg_popup_window_pane_cp10

0x5998,	// (0x0004478f) indicator_popup_pane_ParamLimits

0x5998,	// (0x0004478f) indicator_popup_pane

0x59ba,	// (0x000447b1) popup_query_code_window_t1_ParamLimits

0x59ba,	// (0x000447b1) popup_query_code_window_t1

0x59d4,	// (0x000447cb) popup_query_code_window_t2_ParamLimits

0x59d4,	// (0x000447cb) popup_query_code_window_t2

0x5a1d,	// (0x00044814) popup_query_code_window_t3_ParamLimits

0x5a1d,	// (0x00044814) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0004e630) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0004e630) popup_query_code_window_t

0x5a4c,	// (0x00044843) query_popup_pane_ParamLimits

0x5a4c,	// (0x00044843) query_popup_pane

0x25f9,	// (0x000413f0) bg_popup_window_pane_cp15_ParamLimits

0x25f9,	// (0x000413f0) bg_popup_window_pane_cp15

0x2617,	// (0x0004140e) indicator_popup_pane_cp1_ParamLimits

0x2617,	// (0x0004140e) indicator_popup_pane_cp1

0x262a,	// (0x00041421) indicator_popup_pane_cp2_ParamLimits

0x262a,	// (0x00041421) indicator_popup_pane_cp2

0x263d,	// (0x00041434) popup_query_data_code_window_g1_ParamLimits

0x263d,	// (0x00041434) popup_query_data_code_window_g1

0x2650,	// (0x00041447) popup_query_data_code_window_t1_ParamLimits

0x2650,	// (0x00041447) popup_query_data_code_window_t1

0x2662,	// (0x00041459) popup_query_data_code_window_t2_ParamLimits

0x2662,	// (0x00041459) popup_query_data_code_window_t2

0x2674,	// (0x0004146b) popup_query_data_code_window_t3_ParamLimits

0x2674,	// (0x0004146b) popup_query_data_code_window_t3

0x268a,	// (0x00041481) popup_query_data_code_window_t4_ParamLimits

0x268a,	// (0x00041481) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0004e387) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0004e387) popup_query_data_code_window_t

0xa6d3,	// (0x000494ca) list_single_midp_graphic_pane_g3

0x26a2,	// (0x00041499) query_popup_data_pane_cp2_ParamLimits

0x26b5,	// (0x000414ac) query_popup_pane_cp2_ParamLimits

0x26b5,	// (0x000414ac) query_popup_pane_cp2

0x23be,	// (0x000411b5) bg_popup_window_pane_cp11

0x595e,	// (0x00044755) heading_pane_cp5

0x2743,	// (0x0004153a) listscroll_popup_info_pane

0x23be,	// (0x000411b5) input_focus_pane_cp3

0x26c8,	// (0x000414bf) query_popup_pane_t1

0x26d6,	// (0x000414cd) list_popup_info_pane_ParamLimits

0x26d6,	// (0x000414cd) list_popup_info_pane

0x26e5,	// (0x000414dc) listscroll_popup_info_pane_g1

0x26ed,	// (0x000414e4) scroll_pane_cp7

0x26f7,	// (0x000414ee) popup_info_list_pane_t1_ParamLimits

0x26f7,	// (0x000414ee) popup_info_list_pane_t1

0x2711,	// (0x00041508) popup_info_list_pane_t2_ParamLimits

0x2711,	// (0x00041508) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0004e390) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0004e390) popup_info_list_pane_t

0x23be,	// (0x000411b5) bg_popup_window_pane_cp12

0x6928,	// (0x0004571f) find_popup_pane

0x242a,	// (0x00041221) bg_popup_window_pane_cp3

0x272b,	// (0x00041522) heading_pane_cp3

0x2737,	// (0x0004152e) listscroll_popup_graphic_pane

0x23be,	// (0x000411b5) bg_popup_window_pane_cp4

0xbb92,	// (0x0004a989) heading_pane_cp4

0x2743,	// (0x0004153a) listscroll_popup_colour_pane

0x274b,	// (0x00041542) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x274b,	// (0x00041542) cell_large_graphic_colour_none_popup_pane

0xbb9c,	// (0x0004a993) grid_large_graphic_colour_popup_pane_ParamLimits

0xbb9c,	// (0x0004a993) grid_large_graphic_colour_popup_pane

0x275f,	// (0x00041556) listscroll_popup_colour_pane_g1_ParamLimits

0x275f,	// (0x00041556) listscroll_popup_colour_pane_g1

0x2776,	// (0x0004156d) listscroll_popup_colour_pane_g2_ParamLimits

0x2776,	// (0x0004156d) listscroll_popup_colour_pane_g2

0x278d,	// (0x00041584) listscroll_popup_colour_pane_g3_ParamLimits

0x278d,	// (0x00041584) listscroll_popup_colour_pane_g3

0xbbc4,	// (0x0004a9bb) listscroll_popup_colour_pane_g4_ParamLimits

0xbbc4,	// (0x0004a9bb) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0004e395) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0004e395) listscroll_popup_colour_pane_g

0x279d,	// (0x00041594) scroll_pane_cp6_ParamLimits

0x279d,	// (0x00041594) scroll_pane_cp6

0xbbd3,	// (0x0004a9ca) cell_large_graphic_colour_popup_pane_ParamLimits

0xbbd3,	// (0x0004a9ca) cell_large_graphic_colour_popup_pane

0x27af,	// (0x000415a6) cell_large_graphic_colour_none_popup_pane_t1

0x23be,	// (0x000411b5) grid_highlight_pane_cp5

0x27be,	// (0x000415b5) cell_large_graphic_colour_popup_pane_g1

0x27c6,	// (0x000415bd) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0004e39e) cell_large_graphic_colour_popup_pane_g

0x27ce,	// (0x000415c5) cell_large_graphic_colour_popup_pane_g2_copy1

0x27d7,	// (0x000415ce) grid_highlight_pane_cp4

0x27df,	// (0x000415d6) bg_popup_window_pane_cp8_ParamLimits

0x27df,	// (0x000415d6) bg_popup_window_pane_cp8

0x27fa,	// (0x000415f1) popup_snote_single_text_window_g1_ParamLimits

0x27fa,	// (0x000415f1) popup_snote_single_text_window_g1

0x280c,	// (0x00041603) popup_snote_single_text_window_t1_ParamLimits

0x280c,	// (0x00041603) popup_snote_single_text_window_t1

0x281f,	// (0x00041616) popup_snote_single_text_window_t2_ParamLimits

0x281f,	// (0x00041616) popup_snote_single_text_window_t2

0x2832,	// (0x00041629) popup_snote_single_text_window_t3_ParamLimits

0x2832,	// (0x00041629) popup_snote_single_text_window_t3

0x286b,	// (0x00041662) popup_snote_single_text_window_t4_ParamLimits

0x286b,	// (0x00041662) popup_snote_single_text_window_t4

0x289f,	// (0x00041696) popup_snote_single_text_window_t5_ParamLimits

0x289f,	// (0x00041696) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0004e3a3) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0004e3a3) popup_snote_single_text_window_t

0x28ce,	// (0x000416c5) bg_popup_window_pane_cp9_ParamLimits

0x28ce,	// (0x000416c5) bg_popup_window_pane_cp9

0x27fa,	// (0x000415f1) popup_snote_single_graphic_window_g1_ParamLimits

0x27fa,	// (0x000415f1) popup_snote_single_graphic_window_g1

0x28dc,	// (0x000416d3) popup_snote_single_graphic_window_g2_ParamLimits

0x28dc,	// (0x000416d3) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0004e3ae) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0004e3ae) popup_snote_single_graphic_window_g

0x28e8,	// (0x000416df) popup_snote_single_graphic_window_t1_ParamLimits

0x28e8,	// (0x000416df) popup_snote_single_graphic_window_t1

0x28fb,	// (0x000416f2) popup_snote_single_graphic_window_t2_ParamLimits

0x28fb,	// (0x000416f2) popup_snote_single_graphic_window_t2

0x290e,	// (0x00041705) popup_snote_single_graphic_window_t3_ParamLimits

0x290e,	// (0x00041705) popup_snote_single_graphic_window_t3

0x2e75,	// (0x00041c6c) popup_snote_single_graphic_window_t4_ParamLimits

0x2e75,	// (0x00041c6c) popup_snote_single_graphic_window_t4

0x2ea9,	// (0x00041ca0) popup_snote_single_graphic_window_t5_ParamLimits

0x2ea9,	// (0x00041ca0) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0004e3b3) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0004e3b3) popup_snote_single_graphic_window_t

0x68b0,	// (0x000456a7) grid_graphic_popup_pane_ParamLimits

0x68b0,	// (0x000456a7) grid_graphic_popup_pane

0x68d8,	// (0x000456cf) listscroll_popup_graphic_pane_g1_ParamLimits

0x68d8,	// (0x000456cf) listscroll_popup_graphic_pane_g1

0xd62f,	// (0x0004c426) listscroll_popup_graphic_pane_g2_ParamLimits

0xd62f,	// (0x0004c426) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x0004e7ad) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x0004e7ad) listscroll_popup_graphic_pane_g

0x65a0,	// (0x00045397) scroll_pane_cp5

0xd5f0,	// (0x0004c3e7) cell_graphic_popup_pane_ParamLimits

0xd5f0,	// (0x0004c3e7) cell_graphic_popup_pane

0x687b,	// (0x00045672) cell_graphic_popup_pane_g1

0x6883,	// (0x0004567a) cell_graphic_popup_pane_g2

0x27ce,	// (0x000415c5) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0004e7a6) cell_graphic_popup_pane_g

0x688c,	// (0x00045683) cell_graphic_popup_pane_t2

0x27d7,	// (0x000415ce) grid_highlight_pane_cp3

0x2eea,	// (0x00041ce1) list_gen_pane_ParamLimits

0x2eea,	// (0x00041ce1) list_gen_pane

0x2f12,	// (0x00041d09) scroll_pane

0xd5a3,	// (0x0004c39a) bg_list_pane_g1_ParamLimits

0xd5a3,	// (0x0004c39a) bg_list_pane_g1

0x67e8,	// (0x000455df) bg_list_pane_g2_ParamLimits

0x67e8,	// (0x000455df) bg_list_pane_g2

0x67fb,	// (0x000455f2) bg_list_pane_g3_ParamLimits

0x67fb,	// (0x000455f2) bg_list_pane_g3

0x680d,	// (0x00045604) bg_list_pane_g4_ParamLimits

0x680d,	// (0x00045604) bg_list_pane_g4

0xd5be,	// (0x0004c3b5) bg_list_pane_g5_ParamLimits

0xd5be,	// (0x0004c3b5) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x0004e79b) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x0004e79b) bg_list_pane_g

0xc490,	// (0x0004b287) list_double2_graphic_large_graphic_pane_ParamLimits

0xc490,	// (0x0004b287) list_double2_graphic_large_graphic_pane

0xc490,	// (0x0004b287) list_double2_graphic_pane_ParamLimits

0xc490,	// (0x0004b287) list_double2_graphic_pane

0xc490,	// (0x0004b287) list_double2_large_graphic_pane_ParamLimits

0xc490,	// (0x0004b287) list_double2_large_graphic_pane

0xc490,	// (0x0004b287) list_double2_pane_ParamLimits

0xc490,	// (0x0004b287) list_double2_pane

0xc490,	// (0x0004b287) list_double_graphic_heading_pane_ParamLimits

0xc490,	// (0x0004b287) list_double_graphic_heading_pane

0xc490,	// (0x0004b287) list_double_graphic_pane_ParamLimits

0xc490,	// (0x0004b287) list_double_graphic_pane

0xc490,	// (0x0004b287) list_double_heading_pane_ParamLimits

0xc490,	// (0x0004b287) list_double_heading_pane

0xc490,	// (0x0004b287) list_double_large_graphic_pane_ParamLimits

0xc490,	// (0x0004b287) list_double_large_graphic_pane

0xc490,	// (0x0004b287) list_double_number_pane_ParamLimits

0xc490,	// (0x0004b287) list_double_number_pane

0xc490,	// (0x0004b287) list_double_pane_ParamLimits

0xc490,	// (0x0004b287) list_double_pane

0xc490,	// (0x0004b287) list_double_time_pane_ParamLimits

0xc490,	// (0x0004b287) list_double_time_pane

0xc490,	// (0x0004b287) list_setting_number_pane_ParamLimits

0xc490,	// (0x0004b287) list_setting_number_pane

0xc490,	// (0x0004b287) list_setting_pane_ParamLimits

0xc490,	// (0x0004b287) list_setting_pane

0xc4e0,	// (0x0004b2d7) list_single_2graphic_pane_ParamLimits

0xc4e0,	// (0x0004b2d7) list_single_2graphic_pane

0xc4e0,	// (0x0004b2d7) list_single_graphic_heading_pane_ParamLimits

0xc4e0,	// (0x0004b2d7) list_single_graphic_heading_pane

0xc4e0,	// (0x0004b2d7) list_single_graphic_pane_ParamLimits

0xc4e0,	// (0x0004b2d7) list_single_graphic_pane

0xc4e0,	// (0x0004b2d7) list_single_heading_pane_ParamLimits

0xc4e0,	// (0x0004b2d7) list_single_heading_pane

0xc561,	// (0x0004b358) list_single_large_graphic_pane_ParamLimits

0xc561,	// (0x0004b358) list_single_large_graphic_pane

0xc4e0,	// (0x0004b2d7) list_single_number_heading_pane_ParamLimits

0xc4e0,	// (0x0004b2d7) list_single_number_heading_pane

0xc4e0,	// (0x0004b2d7) list_single_number_pane_ParamLimits

0xc4e0,	// (0x0004b2d7) list_single_number_pane

0xc4e0,	// (0x0004b2d7) list_single_pane_ParamLimits

0xc4e0,	// (0x0004b2d7) list_single_pane

0x23be,	// (0x000411b5) list_highlight_pane_cp1

0xbbfc,	// (0x0004a9f3) list_single_pane_g1_ParamLimits

0xbbfc,	// (0x0004a9f3) list_single_pane_g1

0xbc08,	// (0x0004a9ff) list_single_pane_g2_ParamLimits

0xbc08,	// (0x0004a9ff) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0004e3cf) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0004e3cf) list_single_pane_g

0xc47a,	// (0x0004b271) list_single_pane_t1_ParamLimits

0xc47a,	// (0x0004b271) list_single_pane_t1

0xbbfc,	// (0x0004a9f3) list_single_number_pane_g1_ParamLimits

0xbbfc,	// (0x0004a9f3) list_single_number_pane_g1

0xbc08,	// (0x0004a9ff) list_single_number_pane_g2_ParamLimits

0xbc08,	// (0x0004a9ff) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0004e3cf) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0004e3cf) list_single_number_pane_g

0xc349,	// (0x0004b140) list_single_number_pane_t1_ParamLimits

0xc349,	// (0x0004b140) list_single_number_pane_t1

0xc438,	// (0x0004b22f) list_single_number_pane_t2_ParamLimits

0xc438,	// (0x0004b22f) list_single_number_pane_t2

0x0001,

0xf965,	// (0x0004e75c) list_single_number_pane_t_ParamLimits

0xf965,	// (0x0004e75c) list_single_number_pane_t

0x9748,	// (0x0004853f) list_single_graphic_pane_g1_ParamLimits

0x9748,	// (0x0004853f) list_single_graphic_pane_g1

0xbbfc,	// (0x0004a9f3) list_single_graphic_pane_g2_ParamLimits

0xbbfc,	// (0x0004a9f3) list_single_graphic_pane_g2

0xbc08,	// (0x0004a9ff) list_single_graphic_pane_g3_ParamLimits

0xbc08,	// (0x0004a9ff) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0004e3be) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0004e3be) list_single_graphic_pane_g

0x9754,	// (0x0004854b) list_single_graphic_pane_t1_ParamLimits

0x9754,	// (0x0004854b) list_single_graphic_pane_t1

0x976a,	// (0x00048561) list_single_heading_pane_g1_ParamLimits

0x976a,	// (0x00048561) list_single_heading_pane_g1

0xbc08,	// (0x0004a9ff) list_single_heading_pane_g2_ParamLimits

0xbc08,	// (0x0004a9ff) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0004e3c5) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0004e3c5) list_single_heading_pane_g

0x977d,	// (0x00048574) list_single_heading_pane_t1_ParamLimits

0x977d,	// (0x00048574) list_single_heading_pane_t1

0xbc14,	// (0x0004aa0b) list_single_heading_pane_t2_ParamLimits

0xbc14,	// (0x0004aa0b) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0004e3ca) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0004e3ca) list_single_heading_pane_t

0xbbfc,	// (0x0004a9f3) list_single_number_heading_pane_g1_ParamLimits

0xbbfc,	// (0x0004a9f3) list_single_number_heading_pane_g1

0xbc08,	// (0x0004a9ff) list_single_number_heading_pane_g2_ParamLimits

0xbc08,	// (0x0004a9ff) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0004e3cf) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0004e3cf) list_single_number_heading_pane_g

0x9793,	// (0x0004858a) list_single_number_heading_pane_t1_ParamLimits

0x9793,	// (0x0004858a) list_single_number_heading_pane_t1

0x97a9,	// (0x000485a0) list_single_number_heading_pane_t2_ParamLimits

0x97a9,	// (0x000485a0) list_single_number_heading_pane_t2

0x97bb,	// (0x000485b2) list_single_number_heading_pane_t3_ParamLimits

0x97bb,	// (0x000485b2) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0004e3d4) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0004e3d4) list_single_number_heading_pane_t

0x97cd,	// (0x000485c4) list_single_graphic_heading_pane_g1_ParamLimits

0x97cd,	// (0x000485c4) list_single_graphic_heading_pane_g1

0x97e3,	// (0x000485da) list_single_graphic_heading_pane_g4_ParamLimits

0x97e3,	// (0x000485da) list_single_graphic_heading_pane_g4

0xbc08,	// (0x0004a9ff) list_single_graphic_heading_pane_g5_ParamLimits

0xbc08,	// (0x0004a9ff) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0004e3db) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004e3db) list_single_graphic_heading_pane_g

0x9793,	// (0x0004858a) list_single_graphic_heading_pane_t1_ParamLimits

0x9793,	// (0x0004858a) list_single_graphic_heading_pane_t1

0x97f4,	// (0x000485eb) list_single_graphic_heading_pane_t2_ParamLimits

0x97f4,	// (0x000485eb) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0004e3e2) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0004e3e2) list_single_graphic_heading_pane_t

0xbc26,	// (0x0004aa1d) list_single_large_graphic_pane_g1_ParamLimits

0xbc26,	// (0x0004aa1d) list_single_large_graphic_pane_g1

0xbc32,	// (0x0004aa29) list_single_large_graphic_pane_g2_ParamLimits

0xbc32,	// (0x0004aa29) list_single_large_graphic_pane_g2

0xbc3e,	// (0x0004aa35) list_single_large_graphic_pane_g3_ParamLimits

0xbc3e,	// (0x0004aa35) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0004e3e7) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0004e3e7) list_single_large_graphic_pane_g

0x5b01,	// (0x000448f8) wait_border_pane_g2_copy1

0xbc4a,	// (0x0004aa41) list_single_large_graphic_pane_g4_cp2

0x980c,	// (0x00048603) list_single_large_graphic_pane_t1_ParamLimits

0x980c,	// (0x00048603) list_single_large_graphic_pane_t1

0x9822,	// (0x00048619) list_double_pane_g1_ParamLimits

0x9822,	// (0x00048619) list_double_pane_g1

0x982e,	// (0x00048625) list_double_pane_g2_ParamLimits

0x982e,	// (0x00048625) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0004e3ee) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0004e3ee) list_double_pane_g

0x983a,	// (0x00048631) list_double_pane_t1_ParamLimits

0x983a,	// (0x00048631) list_double_pane_t1

0x9850,	// (0x00048647) list_double_pane_t2_ParamLimits

0x9850,	// (0x00048647) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0004e3f3) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0004e3f3) list_double_pane_t

0x9862,	// (0x00048659) list_double2_pane_g1_ParamLimits

0x9862,	// (0x00048659) list_double2_pane_g1

0x9873,	// (0x0004866a) list_double2_pane_g2_ParamLimits

0x9873,	// (0x0004866a) list_double2_pane_g2

0x0001,

0xf601,	// (0x0004e3f8) list_double2_pane_g_ParamLimits

0xf601,	// (0x0004e3f8) list_double2_pane_g

0x987f,	// (0x00048676) list_double2_pane_t1_ParamLimits

0x987f,	// (0x00048676) list_double2_pane_t1

0x9895,	// (0x0004868c) list_double2_pane_t2_ParamLimits

0x9895,	// (0x0004868c) list_double2_pane_t2

0x0001,

0xf606,	// (0x0004e3fd) list_double2_pane_t_ParamLimits

0xf606,	// (0x0004e3fd) list_double2_pane_t

0x9822,	// (0x00048619) list_double_number_pane_g1_ParamLimits

0x9822,	// (0x00048619) list_double_number_pane_g1

0x982e,	// (0x00048625) list_double_number_pane_g2_ParamLimits

0x982e,	// (0x00048625) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0004e3ee) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0004e3ee) list_double_number_pane_g

0x98a7,	// (0x0004869e) list_double_number_pane_t1_ParamLimits

0x98a7,	// (0x0004869e) list_double_number_pane_t1

0x98b9,	// (0x000486b0) list_double_number_pane_t2_ParamLimits

0x98b9,	// (0x000486b0) list_double_number_pane_t2

0x98cf,	// (0x000486c6) list_double_number_pane_t3_ParamLimits

0x98cf,	// (0x000486c6) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0004e402) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0004e402) list_double_number_pane_t

0x98e1,	// (0x000486d8) list_double_graphic_pane_g1_ParamLimits

0x98e1,	// (0x000486d8) list_double_graphic_pane_g1

0x98ed,	// (0x000486e4) list_double_graphic_pane_g2_ParamLimits

0x98ed,	// (0x000486e4) list_double_graphic_pane_g2

0x98fc,	// (0x000486f3) list_double_graphic_pane_g3_ParamLimits

0x98fc,	// (0x000486f3) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0004e409) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0004e409) list_double_graphic_pane_g

0x9908,	// (0x000486ff) list_double_graphic_pane_t1_ParamLimits

0x9908,	// (0x000486ff) list_double_graphic_pane_t1

0x991e,	// (0x00048715) list_double_graphic_pane_t2_ParamLimits

0x991e,	// (0x00048715) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0004e412) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0004e412) list_double_graphic_pane_t

0x9930,	// (0x00048727) list_double2_graphic_pane_g1_ParamLimits

0x9930,	// (0x00048727) list_double2_graphic_pane_g1

0x2f46,	// (0x00041d3d) list_double2_graphic_pane_g2_ParamLimits

0x2f46,	// (0x00041d3d) list_double2_graphic_pane_g2

0xbc5e,	// (0x0004aa55) list_double2_graphic_pane_g3_ParamLimits

0xbc5e,	// (0x0004aa55) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0004e417) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0004e417) list_double2_graphic_pane_g

0x993c,	// (0x00048733) list_double2_graphic_pane_t1_ParamLimits

0x993c,	// (0x00048733) list_double2_graphic_pane_t1

0x9952,	// (0x00048749) list_double2_graphic_pane_t2_ParamLimits

0x9952,	// (0x00048749) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0004e41e) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0004e41e) list_double2_graphic_pane_t

0x9964,	// (0x0004875b) list_double_large_graphic_pane_g1_ParamLimits

0x9964,	// (0x0004875b) list_double_large_graphic_pane_g1

0x9983,	// (0x0004877a) list_double_large_graphic_pane_g2_ParamLimits

0x9983,	// (0x0004877a) list_double_large_graphic_pane_g2

0x982e,	// (0x00048625) list_double_large_graphic_pane_g3_ParamLimits

0x982e,	// (0x00048625) list_double_large_graphic_pane_g3

0x9999,	// (0x00048790) list_double_large_graphic_pane_g4_ParamLimits

0x9999,	// (0x00048790) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0004e423) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0004e423) list_double_large_graphic_pane_g

0x99ac,	// (0x000487a3) list_double_large_graphic_pane_t1_ParamLimits

0x99ac,	// (0x000487a3) list_double_large_graphic_pane_t1

0x99c5,	// (0x000487bc) list_double_large_graphic_pane_t2_ParamLimits

0x99c5,	// (0x000487bc) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0004e42e) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0004e42e) list_double_large_graphic_pane_t

0xbc7f,	// (0x0004aa76) list_double2_large_graphic_pane_g1_ParamLimits

0xbc7f,	// (0x0004aa76) list_double2_large_graphic_pane_g1

0xbc8b,	// (0x0004aa82) list_double2_large_graphic_pane_g2_ParamLimits

0xbc8b,	// (0x0004aa82) list_double2_large_graphic_pane_g2

0xbc5e,	// (0x0004aa55) list_double2_large_graphic_pane_g3_ParamLimits

0xbc5e,	// (0x0004aa55) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0004e433) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0004e433) list_double2_large_graphic_pane_g

0x99d7,	// (0x000487ce) list_double2_large_graphic_pane_t1_ParamLimits

0x99d7,	// (0x000487ce) list_double2_large_graphic_pane_t1

0x99ed,	// (0x000487e4) list_double2_large_graphic_pane_t2_ParamLimits

0x99ed,	// (0x000487e4) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0004e43a) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0004e43a) list_double2_large_graphic_pane_t

0x99ff,	// (0x000487f6) list_double_heading_pane_g1_ParamLimits

0x99ff,	// (0x000487f6) list_double_heading_pane_g1

0xbc9c,	// (0x0004aa93) list_double_heading_pane_g2_ParamLimits

0xbc9c,	// (0x0004aa93) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0004e43f) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0004e43f) list_double_heading_pane_g

0x9a10,	// (0x00048807) list_double_heading_pane_t1_ParamLimits

0x9a10,	// (0x00048807) list_double_heading_pane_t1

0x9895,	// (0x0004868c) list_double_heading_pane_t2_ParamLimits

0x9895,	// (0x0004868c) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0004e444) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0004e444) list_double_heading_pane_t

0x9a26,	// (0x0004881d) list_double_graphic_heading_pane_g1_ParamLimits

0x9a26,	// (0x0004881d) list_double_graphic_heading_pane_g1

0x99ff,	// (0x000487f6) list_double_graphic_heading_pane_g2_ParamLimits

0x99ff,	// (0x000487f6) list_double_graphic_heading_pane_g2

0xbc9c,	// (0x0004aa93) list_double_graphic_heading_pane_g3_ParamLimits

0xbc9c,	// (0x0004aa93) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0004e449) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0004e449) list_double_graphic_heading_pane_g

0x9a32,	// (0x00048829) list_double_graphic_heading_pane_t1_ParamLimits

0x9a32,	// (0x00048829) list_double_graphic_heading_pane_t1

0x9952,	// (0x00048749) list_double_graphic_heading_pane_t2_ParamLimits

0x9952,	// (0x00048749) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0004e450) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0004e450) list_double_graphic_heading_pane_t

0x9a48,	// (0x0004883f) list_double_time_pane_g1_ParamLimits

0x9a48,	// (0x0004883f) list_double_time_pane_g1

0x9a59,	// (0x00048850) list_double_time_pane_g2_ParamLimits

0x9a59,	// (0x00048850) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0004e455) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0004e455) list_double_time_pane_g

0x9a65,	// (0x0004885c) list_double_time_pane_t1_ParamLimits

0x9a65,	// (0x0004885c) list_double_time_pane_t1

0x9a7b,	// (0x00048872) list_double_time_pane_t2_ParamLimits

0x9a7b,	// (0x00048872) list_double_time_pane_t2

0x9a8d,	// (0x00048884) list_double_time_pane_t3_ParamLimits

0x9a8d,	// (0x00048884) list_double_time_pane_t3

0x9a9f,	// (0x00048896) list_double_time_pane_t4_ParamLimits

0x9a9f,	// (0x00048896) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0004e45a) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0004e45a) list_double_time_pane_t

0x9ab1,	// (0x000488a8) list_setting_pane_g1_ParamLimits

0x9ab1,	// (0x000488a8) list_setting_pane_g1

0x9873,	// (0x0004866a) list_setting_pane_g2_ParamLimits

0x9873,	// (0x0004866a) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0004e463) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0004e463) list_setting_pane_g

0x9abd,	// (0x000488b4) list_setting_pane_t1_ParamLimits

0x9abd,	// (0x000488b4) list_setting_pane_t1

0x9ad7,	// (0x000488ce) list_setting_pane_t2_ParamLimits

0x9ad7,	// (0x000488ce) list_setting_pane_t2

0x0002,

0xf671,	// (0x0004e468) list_setting_pane_t_ParamLimits

0xf671,	// (0x0004e468) list_setting_pane_t

0xbcd3,	// (0x0004aaca) set_value_pane_cp_ParamLimits

0xbcd3,	// (0x0004aaca) set_value_pane_cp

0xbcdf,	// (0x0004aad6) list_setting_number_pane_g1_ParamLimits

0xbcdf,	// (0x0004aad6) list_setting_number_pane_g1

0xbceb,	// (0x0004aae2) list_setting_number_pane_g2_ParamLimits

0xbceb,	// (0x0004aae2) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0004e46f) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0004e46f) list_setting_number_pane_g

0xbcf7,	// (0x0004aaee) list_setting_number_pane_t1_ParamLimits

0xbcf7,	// (0x0004aaee) list_setting_number_pane_t1

0xbd10,	// (0x0004ab07) list_setting_number_pane_t2_ParamLimits

0xbd10,	// (0x0004ab07) list_setting_number_pane_t2

0xbd2a,	// (0x0004ab21) list_setting_number_pane_t3_ParamLimits

0xbd2a,	// (0x0004ab21) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0004e474) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0004e474) list_setting_number_pane_t

0xbcd3,	// (0x0004aaca) set_value_pane_ParamLimits

0xbcd3,	// (0x0004aaca) set_value_pane

0x4661,	// (0x00043458) bg_set_opt_pane_ParamLimits

0x4661,	// (0x00043458) bg_set_opt_pane

0xbd6d,	// (0x0004ab64) set_value_pane_t1

0x4682,	// (0x00043479) slider_set_pane_cp3

0x468b,	// (0x00043482) volume_small_pane_cp

0x4694,	// (0x0004348b) list_form_gen_pane

0x469d,	// (0x00043494) scroll_pane_cp8

0xbd83,	// (0x0004ab7a) form_field_data_pane_ParamLimits

0xbd83,	// (0x0004ab7a) form_field_data_pane

0xbda5,	// (0x0004ab9c) form_field_data_wide_pane_ParamLimits

0xbda5,	// (0x0004ab9c) form_field_data_wide_pane

0xbdc6,	// (0x0004abbd) form_field_popup_pane_ParamLimits

0xbdc6,	// (0x0004abbd) form_field_popup_pane

0xbde6,	// (0x0004abdd) form_field_popup_wide_pane_ParamLimits

0xbde6,	// (0x0004abdd) form_field_popup_wide_pane

0xbe03,	// (0x0004abfa) form_field_slider_pane_ParamLimits

0xbe03,	// (0x0004abfa) form_field_slider_pane

0xbe16,	// (0x0004ac0d) form_field_slider_wide_pane_ParamLimits

0xbe16,	// (0x0004ac0d) form_field_slider_wide_pane

0x46ae,	// (0x000434a5) data_form_pane

0xbe33,	// (0x0004ac2a) form_field_data_pane_t1

0x46ba,	// (0x000434b1) input_focus_pane

0xbe4d,	// (0x0004ac44) data_form_wide_pane

0xbe6a,	// (0x0004ac61) form_field_data_wide_pane_t1

0x27ec,	// (0x000415e3) input_focus_pane_cp6

0xbe8c,	// (0x0004ac83) form_field_popup_pane_t1

0x46ba,	// (0x000434b1) input_focus_pane_cp7

0x46dc,	// (0x000434d3) list_form_pane

0xbeae,	// (0x0004aca5) form_field_popup_wide_pane_t1

0x46ba,	// (0x000434b1) input_focus_pane_cp8

0x46e8,	// (0x000434df) list_form_wide_pane

0xbecb,	// (0x0004acc2) form_field_slider_pane_t1_ParamLimits

0xbecb,	// (0x0004acc2) form_field_slider_pane_t1

0xbee3,	// (0x0004acda) form_field_slider_pane_t2_ParamLimits

0xbee3,	// (0x0004acda) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0004e484) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0004e484) form_field_slider_pane_t

0x240c,	// (0x00041203) input_focus_pane_cp9_ParamLimits

0x240c,	// (0x00041203) input_focus_pane_cp9

0xbef8,	// (0x0004acef) slider_cont_pane_ParamLimits

0xbef8,	// (0x0004acef) slider_cont_pane

0x46f7,	// (0x000434ee) form_field_slider_wide_pane_t1_ParamLimits

0x46f7,	// (0x000434ee) form_field_slider_wide_pane_t1

0xbf0c,	// (0x0004ad03) form_field_slider_wide_pane_t2_ParamLimits

0xbf0c,	// (0x0004ad03) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0004e489) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0004e489) form_field_slider_wide_pane_t

0x240c,	// (0x00041203) input_focus_pane_cp10_ParamLimits

0x240c,	// (0x00041203) input_focus_pane_cp10

0xbf1e,	// (0x0004ad15) slider_cont_pane_cp1_ParamLimits

0xbf1e,	// (0x0004ad15) slider_cont_pane_cp1

0xbf32,	// (0x0004ad29) slider_form_pane_cp

0x4709,	// (0x00043500) input_focus_pane_g1

0x4711,	// (0x00043508) input_focus_pane_g2

0x4719,	// (0x00043510) input_focus_pane_g3

0x4721,	// (0x00043518) input_focus_pane_g4

0x4729,	// (0x00043520) input_focus_pane_g5

0x4731,	// (0x00043528) input_focus_pane_g6

0x4739,	// (0x00043530) input_focus_pane_g7

0x4741,	// (0x00043538) input_focus_pane_g8

0x4749,	// (0x00043540) input_focus_pane_g9

0x23b4,	// (0x000411ab) input_focus_pane_g10

0x0009,

0xf697,	// (0x0004e48e) input_focus_pane_g

0x5b0a,	// (0x00044901) wait_border_pane_g3_copy1

0xbf3a,	// (0x0004ad31) data_form_pane_t1

0x23b4,	// (0x000411ab) wait_anim_pane_g1_copy1

0xc44a,	// (0x0004b241) data_form_wide_pane_t1

0xbf55,	// (0x0004ad4c) list_form_graphic_pane_cp_ParamLimits

0xbf55,	// (0x0004ad4c) list_form_graphic_pane_cp

0x6782,	// (0x00045579) slider_form_pane_g1

0x678b,	// (0x00045582) slider_form_pane_g2

0x0006,

0xf995,	// (0x0004e78c) slider_form_pane_g

0xbf55,	// (0x0004ad4c) list_form_graphic_pane_ParamLimits

0xbf55,	// (0x0004ad4c) list_form_graphic_pane

0xbf6c,	// (0x0004ad63) list_form_graphic_pane_g1

0xbf74,	// (0x0004ad6b) list_form_graphic_pane_t1_ParamLimits

0xbf74,	// (0x0004ad6b) list_form_graphic_pane_t1

0x242a,	// (0x00041221) list_highlight_pane_cp5_ParamLimits

0x242a,	// (0x00041221) list_highlight_pane_cp5

0xbf89,	// (0x0004ad80) find_pane_g1

0x4751,	// (0x00043548) input_find_pane

0xbf92,	// (0x0004ad89) input_find_pane_g1_ParamLimits

0xbf92,	// (0x0004ad89) input_find_pane_g1

0xbf9e,	// (0x0004ad95) input_find_pane_t1_ParamLimits

0xbf9e,	// (0x0004ad95) input_find_pane_t1

0xbfb3,	// (0x0004adaa) input_find_pane_t2_ParamLimits

0xbfb3,	// (0x0004adaa) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0004e4a3) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0004e4a3) input_find_pane_t

0x475a,	// (0x00043551) input_focus_pane_cp5_ParamLimits

0x475a,	// (0x00043551) input_focus_pane_cp5

0x4768,	// (0x0004355f) bg_popup_window_pane_cp2_ParamLimits

0x4768,	// (0x0004355f) bg_popup_window_pane_cp2

0x4775,	// (0x0004356c) listscroll_menu_pane_ParamLimits

0x4775,	// (0x0004356c) listscroll_menu_pane

0xbfd4,	// (0x0004adcb) popup_submenu_window_ParamLimits

0xbfd4,	// (0x0004adcb) popup_submenu_window

0x4781,	// (0x00043578) find_popup_pane_g1

0x4789,	// (0x00043580) input_popup_find_pane_cp

0x475a,	// (0x00043551) input_focus_pane_cp4_ParamLimits

0x475a,	// (0x00043551) input_focus_pane_cp4

0x4793,	// (0x0004358a) input_popup_find_pane_t1_ParamLimits

0x4793,	// (0x0004358a) input_popup_find_pane_t1

0x23be,	// (0x000411b5) bg_popup_sub_pane_cp

0x47c1,	// (0x000435b8) listscroll_popup_sub_pane

0x47c9,	// (0x000435c0) list_submenu_pane_ParamLimits

0x47c9,	// (0x000435c0) list_submenu_pane

0x47da,	// (0x000435d1) scroll_pane_cp4

0x47e2,	// (0x000435d9) list_single_popup_submenu_pane_ParamLimits

0x47e2,	// (0x000435d9) list_single_popup_submenu_pane

0x47f6,	// (0x000435ed) list_single_popup_submenu_pane_g1

0x47fe,	// (0x000435f5) list_single_popup_submenu_pane_t1_ParamLimits

0x47fe,	// (0x000435f5) list_single_popup_submenu_pane_t1

0x242a,	// (0x00041221) bg_active_tab_pane_cp1_ParamLimits

0x242a,	// (0x00041221) bg_active_tab_pane_cp1

0xc00a,	// (0x0004ae01) tabs_2_active_pane_g1

0xc012,	// (0x0004ae09) tabs_2_active_pane_t1

0x242a,	// (0x00041221) bg_passive_tab_pane_cp1_ParamLimits

0x242a,	// (0x00041221) bg_passive_tab_pane_cp1

0xc00a,	// (0x0004ae01) tabs_2_passive_pane_g1

0xc012,	// (0x0004ae09) tabs_2_passive_pane_t1

0x6a9c,	// (0x00045893) bg_active_tab_pane_cp4

0xc024,	// (0x0004ae1b) tabs_2_long_active_pane_t1

0xc037,	// (0x0004ae2e) bg_passive_tab_pane_cp4

0xa6db,	// (0x000494d2) list_single_midp_graphic_pane_g4_ParamLimits

0x6a9c,	// (0x00045893) bg_active_tab_pane_cp5

0xc043,	// (0x0004ae3a) tabs_3_long_active_pane_t1

0xc037,	// (0x0004ae2e) bg_passive_tab_pane_cp5

0xa6db,	// (0x000494d2) list_single_midp_graphic_pane_g4

0x242a,	// (0x00041221) bg_popup_window_pane_cp13_ParamLimits

0x242a,	// (0x00041221) bg_popup_window_pane_cp13

0x48fe,	// (0x000436f5) listscroll_popup_fast_pane_ParamLimits

0x48fe,	// (0x000436f5) listscroll_popup_fast_pane

0x490a,	// (0x00043701) grid_popup_fast_pane_ParamLimits

0x490a,	// (0x00043701) grid_popup_fast_pane

0x491c,	// (0x00043713) scroll_pane_cp9_ParamLimits

0x491c,	// (0x00043713) scroll_pane_cp9

0x7af1,	// (0x000468e8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7af1,	// (0x000468e8) list_single_graphic_hl_pane_t1_cp2

0x4940,	// (0x00043737) input_focus_pane_cp20_ParamLimits

0x4940,	// (0x00043737) input_focus_pane_cp20

0x494e,	// (0x00043745) query_popup_data_pane_t1_ParamLimits

0x494e,	// (0x00043745) query_popup_data_pane_t1

0x4961,	// (0x00043758) query_popup_data_pane_t2_ParamLimits

0x4961,	// (0x00043758) query_popup_data_pane_t2

0x49a7,	// (0x0004379e) query_popup_data_pane_t3_ParamLimits

0x49a7,	// (0x0004379e) query_popup_data_pane_t3

0x49e8,	// (0x000437df) query_popup_data_pane_t4_ParamLimits

0x49e8,	// (0x000437df) query_popup_data_pane_t4

0x4a24,	// (0x0004381b) query_popup_data_pane_t5_ParamLimits

0x4a24,	// (0x0004381b) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0004e4a8) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0004e4a8) query_popup_data_pane_t

0x4709,	// (0x00043500) bg_set_opt_pane_g1

0x4711,	// (0x00043508) bg_set_opt_pane_g2

0x4719,	// (0x00043510) bg_set_opt_pane_g3

0x4721,	// (0x00043518) bg_set_opt_pane_g4

0x4729,	// (0x00043520) bg_set_opt_pane_g5

0x4731,	// (0x00043528) bg_set_opt_pane_g6

0x4739,	// (0x00043530) bg_set_opt_pane_g7

0x4741,	// (0x00043538) bg_set_opt_pane_g8

0x4749,	// (0x00043540) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0004e4b3) bg_set_opt_pane_g

0x9d7f,	// (0x00048b76) control_top_pane_stacon_ParamLimits

0x9d7f,	// (0x00048b76) control_top_pane_stacon

0x9dd2,	// (0x00048bc9) signal_pane_stacon_ParamLimits

0x9dd2,	// (0x00048bc9) signal_pane_stacon

0x4e94,	// (0x00043c8b) stacon_top_pane_g1_ParamLimits

0x4e94,	// (0x00043c8b) stacon_top_pane_g1

0x9df7,	// (0x00048bee) title_pane_stacon_ParamLimits

0x9df7,	// (0x00048bee) title_pane_stacon

0x9e21,	// (0x00048c18) uni_indicator_pane_stacon_ParamLimits

0x9e21,	// (0x00048c18) uni_indicator_pane_stacon

0x9e36,	// (0x00048c2d) battery_pane_stacon_ParamLimits

0x9e36,	// (0x00048c2d) battery_pane_stacon

0x9e7a,	// (0x00048c71) control_bottom_pane_stacon_ParamLimits

0x9e7a,	// (0x00048c71) control_bottom_pane_stacon

0x9e9d,	// (0x00048c94) navi_pane_stacon_ParamLimits

0x9e9d,	// (0x00048c94) navi_pane_stacon

0x4eb6,	// (0x00043cad) stacon_bottom_pane_g1_ParamLimits

0x4eb6,	// (0x00043cad) stacon_bottom_pane_g1

0x9ae9,	// (0x000488e0) aid_levels_signal_lsc_ParamLimits

0x9ae9,	// (0x000488e0) aid_levels_signal_lsc

0x9b00,	// (0x000488f7) signal_pane_stacon_g1_ParamLimits

0x9b00,	// (0x000488f7) signal_pane_stacon_g1

0x9b14,	// (0x0004890b) signal_pane_stacon_g2_ParamLimits

0x9b14,	// (0x0004890b) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0004e4c6) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0004e4c6) signal_pane_stacon_g

0x9b49,	// (0x00048940) title_pane_stacon_t1_ParamLimits

0x9b49,	// (0x00048940) title_pane_stacon_t1

0x4a7c,	// (0x00043873) uni_indicator_pane_stacon_g1

0x4a86,	// (0x0004387d) uni_indicator_pane_stacon_g2

0x4a68,	// (0x0004385f) uni_indicator_pane_stacon_g3

0x4a72,	// (0x00043869) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0004e4d2) uni_indicator_pane_stacon_g

0x9b6e,	// (0x00048965) control_top_pane_stacon_g1

0x9b76,	// (0x0004896d) control_top_pane_stacon_t1_ParamLimits

0x9b76,	// (0x0004896d) control_top_pane_stacon_t1

0x9bad,	// (0x000489a4) aid_levels_battery_lsc_ParamLimits

0x9bad,	// (0x000489a4) aid_levels_battery_lsc

0x9bc5,	// (0x000489bc) battery_pane_stacon_g1_ParamLimits

0x9bc5,	// (0x000489bc) battery_pane_stacon_g1

0x9bd8,	// (0x000489cf) battery_pane_stacon_g2_ParamLimits

0x9bd8,	// (0x000489cf) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0004e4db) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0004e4db) battery_pane_stacon_g

0x9c16,	// (0x00048a0d) navi_icon_pane_stacon

0x9c2a,	// (0x00048a21) navi_navi_pane_stacon

0x9c16,	// (0x00048a0d) navi_text_pane_stacon

0x9b6e,	// (0x00048965) control_bottom_pane_stacon_g1

0x9c3e,	// (0x00048a35) control_bottom_pane_stacon_t1_ParamLimits

0x9c3e,	// (0x00048a35) control_bottom_pane_stacon_t1

0xc055,	// (0x0004ae4c) grid_app_pane_ParamLimits

0xc055,	// (0x0004ae4c) grid_app_pane

0xc077,	// (0x0004ae6e) scroll_pane_cp15_ParamLimits

0xc077,	// (0x0004ae6e) scroll_pane_cp15

0xc08a,	// (0x0004ae81) cell_app_pane_ParamLimits

0xc08a,	// (0x0004ae81) cell_app_pane

0xc0b0,	// (0x0004aea7) cell_app_pane_g1_ParamLimits

0xc0b0,	// (0x0004aea7) cell_app_pane_g1

0x4aaa,	// (0x000438a1) cell_app_pane_g2_ParamLimits

0x4aaa,	// (0x000438a1) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0004e4e0) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0004e4e0) cell_app_pane_g

0xc0d0,	// (0x0004aec7) cell_app_pane_t1_ParamLimits

0xc0d0,	// (0x0004aec7) cell_app_pane_t1

0x4ab6,	// (0x000438ad) grid_highlight_pane_ParamLimits

0x4ab6,	// (0x000438ad) grid_highlight_pane

0x4709,	// (0x00043500) cell_highlight_pane_g1

0x4711,	// (0x00043508) cell_highlight_pane_g2

0x4719,	// (0x00043510) cell_highlight_pane_g3

0x4721,	// (0x00043518) cell_highlight_pane_g4

0x4729,	// (0x00043520) cell_highlight_pane_g5

0x4731,	// (0x00043528) cell_highlight_pane_g6

0x4739,	// (0x00043530) cell_highlight_pane_g7

0x4741,	// (0x00043538) cell_highlight_pane_g8

0x4749,	// (0x00043540) cell_highlight_pane_g9

0x23b4,	// (0x000411ab) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0004e48e) cell_highlight_pane_g

0x4ac7,	// (0x000438be) bg_scroll_pane

0x9c88,	// (0x00048a7f) scroll_handle_pane

0x4b0e,	// (0x00043905) scroll_bg_pane_g1

0x4b23,	// (0x0004391a) scroll_bg_pane_g2

0x4b3b,	// (0x00043932) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0004e4e5) scroll_bg_pane_g

0x4b50,	// (0x00043947) scroll_handle_focus_pane_ParamLimits

0x4b50,	// (0x00043947) scroll_handle_focus_pane

0x4b0e,	// (0x00043905) scroll_handle_pane_g1

0x4b5d,	// (0x00043954) scroll_handle_pane_g2

0x4b3b,	// (0x00043932) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0004e4ec) scroll_handle_pane_g

0x475a,	// (0x00043551) bg_popup_sub_pane_cp21_ParamLimits

0x475a,	// (0x00043551) bg_popup_sub_pane_cp21

0x4b71,	// (0x00043968) popup_fep_japan_predictive_window_t1_ParamLimits

0x4b71,	// (0x00043968) popup_fep_japan_predictive_window_t1

0x4b94,	// (0x0004398b) popup_fep_japan_predictive_window_t2_ParamLimits

0x4b94,	// (0x0004398b) popup_fep_japan_predictive_window_t2

0x4bc7,	// (0x000439be) popup_fep_japan_predictive_window_t3_ParamLimits

0x4bc7,	// (0x000439be) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0004e4f3) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0004e4f3) popup_fep_japan_predictive_window_t

0x23be,	// (0x000411b5) bg_popup_sub_pane_cp23

0x4bfe,	// (0x000439f5) listscroll_japin_cand_pane

0x4c06,	// (0x000439fd) popup_fep_japan_candidate_window_t1

0x4c14,	// (0x00043a0b) candidate_pane_ParamLimits

0x4c14,	// (0x00043a0b) candidate_pane

0x4c26,	// (0x00043a1d) scroll_pane_cp30

0x4c2e,	// (0x00043a25) list_single_popup_jap_candidate_pane_ParamLimits

0x4c2e,	// (0x00043a25) list_single_popup_jap_candidate_pane

0x23be,	// (0x000411b5) list_highlight_pane_cp30

0x4c42,	// (0x00043a39) list_single_popup_jap_candidate_pane_t1

0x4c51,	// (0x00043a48) level_1_signal

0x4c5e,	// (0x00043a55) level_2_signal

0x4c6b,	// (0x00043a62) level_3_signal

0x4c78,	// (0x00043a6f) level_4_signal

0x4c85,	// (0x00043a7c) level_5_signal

0x4c92,	// (0x00043a89) level_6_signal

0x4c9f,	// (0x00043a96) level_7_signal

0x4c51,	// (0x00043a48) level_1_battery

0x4c5e,	// (0x00043a55) level_2_battery

0x4c6b,	// (0x00043a62) level_3_battery

0x4c78,	// (0x00043a6f) level_4_battery

0x4c85,	// (0x00043a7c) level_5_battery

0x4c92,	// (0x00043a89) level_6_battery

0x4c9f,	// (0x00043a96) level_7_battery

0x4cc4,	// (0x00043abb) list_menu_pane_ParamLimits

0x4cc4,	// (0x00043abb) list_menu_pane

0x4cda,	// (0x00043ad1) scroll_pane_cp25_ParamLimits

0x4cda,	// (0x00043ad1) scroll_pane_cp25

0x4cf3,	// (0x00043aea) list_double2_graphic_pane_cp2_ParamLimits

0x4cf3,	// (0x00043aea) list_double2_graphic_pane_cp2

0x4cf3,	// (0x00043aea) list_double2_large_graphic_pane_cp2_ParamLimits

0x4cf3,	// (0x00043aea) list_double2_large_graphic_pane_cp2

0x4cf3,	// (0x00043aea) list_double2_pane_cp2_ParamLimits

0x4cf3,	// (0x00043aea) list_double2_pane_cp2

0x4cf3,	// (0x00043aea) list_double_graphic_pane_cp2_ParamLimits

0x4cf3,	// (0x00043aea) list_double_graphic_pane_cp2

0x4cf3,	// (0x00043aea) list_double_large_graphic_pane_cp2_ParamLimits

0x4cf3,	// (0x00043aea) list_double_large_graphic_pane_cp2

0x4cf3,	// (0x00043aea) list_double_number_pane_cp2_ParamLimits

0x4cf3,	// (0x00043aea) list_double_number_pane_cp2

0x4cf3,	// (0x00043aea) list_double_pane_cp2_ParamLimits

0x4cf3,	// (0x00043aea) list_double_pane_cp2

0xc0fb,	// (0x0004aef2) list_single_2graphic_pane_cp2_ParamLimits

0xc0fb,	// (0x0004aef2) list_single_2graphic_pane_cp2

0xc0fb,	// (0x0004aef2) list_single_graphic_heading_pane_cp2_ParamLimits

0xc0fb,	// (0x0004aef2) list_single_graphic_heading_pane_cp2

0xc0fb,	// (0x0004aef2) list_single_graphic_pane_cp2_ParamLimits

0xc0fb,	// (0x0004aef2) list_single_graphic_pane_cp2

0xc0fb,	// (0x0004aef2) list_single_heading_pane_cp2_ParamLimits

0xc0fb,	// (0x0004aef2) list_single_heading_pane_cp2

0x4d03,	// (0x00043afa) list_single_large_graphic_pane_cp2_ParamLimits

0x4d03,	// (0x00043afa) list_single_large_graphic_pane_cp2

0xc0fb,	// (0x0004aef2) list_single_number_heading_pane_cp2_ParamLimits

0xc0fb,	// (0x0004aef2) list_single_number_heading_pane_cp2

0xc0fb,	// (0x0004aef2) list_single_number_pane_cp2_ParamLimits

0xc0fb,	// (0x0004aef2) list_single_number_pane_cp2

0xc0fb,	// (0x0004aef2) list_single_pane_cp2_ParamLimits

0xc0fb,	// (0x0004aef2) list_single_pane_cp2

0x4d1d,	// (0x00043b14) bg_popup_sub_pane_cp22

0x9d37,	// (0x00048b2e) popup_side_volume_key_window_g1

0x9d5b,	// (0x00048b52) popup_side_volume_key_window_t1

0x9d77,	// (0x00048b6e) volume_small_pane_cp1

0x240c,	// (0x00041203) bg_popup_sub_pane_cp24_ParamLimits

0x240c,	// (0x00041203) bg_popup_sub_pane_cp24

0x4d33,	// (0x00043b2a) fep_china_uni_candidate_pane_ParamLimits

0x4d33,	// (0x00043b2a) fep_china_uni_candidate_pane

0x4d47,	// (0x00043b3e) fep_china_uni_entry_pane

0x4d57,	// (0x00043b4e) popup_fep_china_uni_window_g1

0x4d73,	// (0x00043b6a) fep_china_uni_entry_pane_g1

0x4d7b,	// (0x00043b72) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0004e524) fep_china_uni_entry_pane_g

0x4d83,	// (0x00043b7a) fep_entry_item_pane

0x4d8d,	// (0x00043b84) fep_candidate_item_pane

0x4d95,	// (0x00043b8c) fep_china_uni_candidate_pane_g1

0x4d9d,	// (0x00043b94) fep_china_uni_candidate_pane_g2

0x4da5,	// (0x00043b9c) fep_china_uni_candidate_pane_g3

0x4dad,	// (0x00043ba4) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0004e529) fep_china_uni_candidate_pane_g

0x23b4,	// (0x000411ab) fep_entry_item_pane_g1

0x4db5,	// (0x00043bac) fep_entry_item_pane_t1_ParamLimits

0x4db5,	// (0x00043bac) fep_entry_item_pane_t1

0x4dcb,	// (0x00043bc2) fep_candidate_item_pane_t1_ParamLimits

0x4dcb,	// (0x00043bc2) fep_candidate_item_pane_t1

0x4de0,	// (0x00043bd7) fep_candidate_item_pane_t2_ParamLimits

0x4de0,	// (0x00043bd7) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0004e532) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0004e532) fep_candidate_item_pane_t

0x242a,	// (0x00041221) list_highlight_pane_cp31_ParamLimits

0x242a,	// (0x00041221) list_highlight_pane_cp31

0x4df2,	// (0x00043be9) level_1_signal_lsc

0x4dfb,	// (0x00043bf2) level_2_signal_lsc

0x4e04,	// (0x00043bfb) level_3_signal_lsc

0x4e0d,	// (0x00043c04) level_4_signal_lsc

0x4e16,	// (0x00043c0d) level_5_signal_lsc

0x4e1f,	// (0x00043c16) level_6_signal_lsc

0x4e28,	// (0x00043c1f) level_7_signal_lsc

0x4e28,	// (0x00043c1f) level_1_battery_lsc

0x4e31,	// (0x00043c28) level_2_battery_lsc

0x4e3a,	// (0x00043c31) level_3_battery_lsc

0x4e43,	// (0x00043c3a) level_4_battery_lsc

0x4e4c,	// (0x00043c43) level_5_battery_lsc

0x4e55,	// (0x00043c4c) level_6_battery_lsc

0x4df2,	// (0x00043be9) level_7_battery_lsc

0x4e5e,	// (0x00043c55) scroll_handle_focus_pane_g1

0x4e67,	// (0x00043c5e) scroll_handle_focus_pane_g2

0x4e70,	// (0x00043c67) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0004e537) scroll_handle_focus_pane_g

0xc172,	// (0x0004af69) list_single_2graphic_pane_g1_ParamLimits

0xc172,	// (0x0004af69) list_single_2graphic_pane_g1

0x97e3,	// (0x000485da) list_single_2graphic_pane_g2_ParamLimits

0x97e3,	// (0x000485da) list_single_2graphic_pane_g2

0xbc08,	// (0x0004a9ff) list_single_2graphic_pane_g3_ParamLimits

0xbc08,	// (0x0004a9ff) list_single_2graphic_pane_g3

0xc17e,	// (0x0004af75) list_single_2graphic_pane_g4_ParamLimits

0xc17e,	// (0x0004af75) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0004e53e) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0004e53e) list_single_2graphic_pane_g

0xc18f,	// (0x0004af86) list_single_2graphic_pane_t1_ParamLimits

0xc18f,	// (0x0004af86) list_single_2graphic_pane_t1

0xc1bd,	// (0x0004afb4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc1bd,	// (0x0004afb4) list_double2_graphic_large_graphic_pane_g1

0xbc8b,	// (0x0004aa82) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbc8b,	// (0x0004aa82) list_double2_graphic_large_graphic_pane_g2

0xbc5e,	// (0x0004aa55) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbc5e,	// (0x0004aa55) list_double2_graphic_large_graphic_pane_g3

0xc1cd,	// (0x0004afc4) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc1cd,	// (0x0004afc4) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0004e547) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0004e547) list_double2_graphic_large_graphic_pane_g

0xc1d9,	// (0x0004afd0) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc1d9,	// (0x0004afd0) list_double2_graphic_large_graphic_pane_t1

0xc1ef,	// (0x0004afe6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc1ef,	// (0x0004afe6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0004e550) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0004e550) list_double2_graphic_large_graphic_pane_t

0x4f5f,	// (0x00043d56) popup_fast_swap_window_ParamLimits

0x4f5f,	// (0x00043d56) popup_fast_swap_window

0x4f7b,	// (0x00043d72) popup_side_volume_key_window

0x4f95,	// (0x00043d8c) stacon_top_pane

0x4f9f,	// (0x00043d96) status_pane_ParamLimits

0x4f9f,	// (0x00043d96) status_pane

0x4f95,	// (0x00043d8c) status_small_pane

0x23be,	// (0x000411b5) control_pane

0x23be,	// (0x000411b5) stacon_bottom_pane

0x469d,	// (0x00043494) scroll_pane_cp121

0x4694,	// (0x0004348b) set_content_pane

0xc201,	// (0x0004aff8) bg_active_tab_pane_g1_cp1

0x4e79,	// (0x00043c70) bg_active_tab_pane_g2_cp1

0xc20a,	// (0x0004b001) bg_active_tab_pane_g3_cp1

0xc201,	// (0x0004aff8) bg_passive_tab_pane_g1_cp1

0x4e79,	// (0x00043c70) bg_passive_tab_pane_g2_cp1

0xc20a,	// (0x0004b001) bg_passive_tab_pane_g3_cp1

0xc213,	// (0x0004b00a) bg_active_tab_pane_g1_cp2

0x4e79,	// (0x00043c70) bg_active_tab_pane_g2_cp2

0xc21c,	// (0x0004b013) bg_active_tab_pane_g3_cp2

0xc213,	// (0x0004b00a) bg_passive_tab_pane_g1_cp2

0x4e79,	// (0x00043c70) bg_passive_tab_pane_g2_cp2

0xc21c,	// (0x0004b013) bg_passive_tab_pane_g3_cp2

0x4e8b,	// (0x00043c82) bg_active_tab_pane_g1_cp3

0x4e79,	// (0x00043c70) bg_active_tab_pane_g2_cp3

0x4e82,	// (0x00043c79) bg_active_tab_pane_g3_cp3

0x4e8b,	// (0x00043c82) bg_passive_tab_pane_g1_cp3

0x4e79,	// (0x00043c70) bg_passive_tab_pane_g2_cp3

0x4e82,	// (0x00043c79) bg_passive_tab_pane_g3_cp3

0xc225,	// (0x0004b01c) bg_active_tab_pane_g1_cp4

0x4e79,	// (0x00043c70) bg_active_tab_pane_g2_cp4

0xc230,	// (0x0004b027) bg_active_tab_pane_g3_cp4

0xc225,	// (0x0004b01c) bg_passive_tab_pane_g1_cp4

0x4e79,	// (0x00043c70) bg_passive_tab_pane_g2_cp4

0xc230,	// (0x0004b027) bg_passive_tab_pane_g3_cp4

0x4edb,	// (0x00043cd2) bg_active_tab_pane_g1_cp5

0x4e79,	// (0x00043c70) bg_active_tab_pane_g2_cp5

0x4ed2,	// (0x00043cc9) bg_active_tab_pane_g3_cp5

0x4edb,	// (0x00043cd2) bg_passive_tab_pane_g1_cp5

0x4e79,	// (0x00043c70) bg_passive_tab_pane_g2_cp5

0x4ed2,	// (0x00043cc9) bg_passive_tab_pane_g3_cp5

0xc23b,	// (0x0004b032) list_set_graphic_pane_ParamLimits

0xc23b,	// (0x0004b032) list_set_graphic_pane

0x23be,	// (0x000411b5) bg_set_opt_pane_cp4

0x4ee4,	// (0x00043cdb) list_set_graphic_pane_g1_ParamLimits

0x4ee4,	// (0x00043cdb) list_set_graphic_pane_g1

0x4ef0,	// (0x00043ce7) list_set_graphic_pane_g2_ParamLimits

0x4ef0,	// (0x00043ce7) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0004e555) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0004e555) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0004e8c8) volume_small_pane_cp_g

0x4f12,	// (0x00043d09) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4f12,	// (0x00043d09) list_double2_large_graphic_pane_g1_cp2

0x4f1e,	// (0x00043d15) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4f1e,	// (0x00043d15) list_double2_large_graphic_pane_g2_cp2

0x4f2f,	// (0x00043d26) list_double2_large_graphic_pane_g3_cp2

0x4f37,	// (0x00043d2e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4f37,	// (0x00043d2e) list_double2_large_graphic_pane_t1_cp2

0x4f4d,	// (0x00043d44) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4f4d,	// (0x00043d44) list_double2_large_graphic_pane_t2_cp2

0x6529,	// (0x00045320) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6529,	// (0x00045320) list_double_large_graphic_pane_g1_cp2

0x653a,	// (0x00045331) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x653a,	// (0x00045331) list_double_large_graphic_pane_g2_cp2

0x50bb,	// (0x00043eb2) list_double_large_graphic_pane_g3_cp2

0x654b,	// (0x00045342) list_double_large_graphic_pane_g4_cp

0x6553,	// (0x0004534a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6553,	// (0x0004534a) list_double_large_graphic_pane_t1_cp2

0x656a,	// (0x00045361) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x656a,	// (0x00045361) list_double_large_graphic_pane_t2_cp2

0x4fad,	// (0x00043da4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4fad,	// (0x00043da4) list_double2_graphic_pane_g1_cp2

0x4fbb,	// (0x00043db2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4fbb,	// (0x00043db2) list_double2_graphic_pane_g2_cp2

0x4fcc,	// (0x00043dc3) list_double2_graphic_pane_g3_cp2

0x4fd6,	// (0x00043dcd) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4fd6,	// (0x00043dcd) list_double2_graphic_pane_t1_cp2

0x4fec,	// (0x00043de3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4fec,	// (0x00043de3) list_double2_graphic_pane_t2_cp2

0x4ffe,	// (0x00043df5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4ffe,	// (0x00043df5) list_single_number_heading_pane_g1_cp2

0x500a,	// (0x00043e01) list_single_number_heading_pane_g2_cp2

0x5012,	// (0x00043e09) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5012,	// (0x00043e09) list_single_number_heading_pane_t1_cp2

0x5028,	// (0x00043e1f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5028,	// (0x00043e1f) list_single_number_heading_pane_t2_cp2

0x503a,	// (0x00043e31) list_single_number_heading_pane_t3_cp2_ParamLimits

0x503a,	// (0x00043e31) list_single_number_heading_pane_t3_cp2

0x4ffe,	// (0x00043df5) list_single_heading_pane_g1_cp2_ParamLimits

0x4ffe,	// (0x00043df5) list_single_heading_pane_g1_cp2

0x500a,	// (0x00043e01) list_single_heading_pane_g2_cp2

0x5012,	// (0x00043e09) list_single_heading_pane_t1_cp2_ParamLimits

0x5012,	// (0x00043e09) list_single_heading_pane_t1_cp2

0x6333,	// (0x0004512a) list_single_heading_pane_t2_cp2_ParamLimits

0x6333,	// (0x0004512a) list_single_heading_pane_t2_cp2

0x627b,	// (0x00045072) list_double_graphic_pane_g1_cp2_ParamLimits

0x627b,	// (0x00045072) list_double_graphic_pane_g1_cp2

0x6287,	// (0x0004507e) list_double_graphic_pane_g2_cp2_ParamLimits

0x6287,	// (0x0004507e) list_double_graphic_pane_g2_cp2

0x6296,	// (0x0004508d) list_double_graphic_pane_g3_cp2

0x629e,	// (0x00045095) list_double_graphic_pane_t1_cp2_ParamLimits

0x629e,	// (0x00045095) list_double_graphic_pane_t1_cp2

0x62b4,	// (0x000450ab) list_double_graphic_pane_t2_cp2_ParamLimits

0x62b4,	// (0x000450ab) list_double_graphic_pane_t2_cp2

0x50af,	// (0x00043ea6) list_double_number_pane_g1_cp2_ParamLimits

0x50af,	// (0x00043ea6) list_double_number_pane_g1_cp2

0x50bb,	// (0x00043eb2) list_double_number_pane_g2_cp2

0x623f,	// (0x00045036) list_double_number_pane_t1_cp2_ParamLimits

0x623f,	// (0x00045036) list_double_number_pane_t1_cp2

0x6253,	// (0x0004504a) list_double_number_pane_t2_cp2_ParamLimits

0x6253,	// (0x0004504a) list_double_number_pane_t2_cp2

0x6269,	// (0x00045060) list_double_number_pane_t3_cp2_ParamLimits

0x6269,	// (0x00045060) list_double_number_pane_t3_cp2

0x61a8,	// (0x00044f9f) list_single_graphic_pane_g1_cp2_ParamLimits

0x61a8,	// (0x00044f9f) list_single_graphic_pane_g1_cp2

0x2f52,	// (0x00041d49) list_single_graphic_pane_g2_cp2_ParamLimits

0x2f52,	// (0x00041d49) list_single_graphic_pane_g2_cp2

0x5113,	// (0x00043f0a) list_single_graphic_pane_g3_cp2

0x617e,	// (0x00044f75) list_single_graphic_pane_t1_cp2_ParamLimits

0x617e,	// (0x00044f75) list_single_graphic_pane_t1_cp2

0x2f52,	// (0x00041d49) list_single_number_pane_g1_cp2_ParamLimits

0x2f52,	// (0x00041d49) list_single_number_pane_g1_cp2

0x5113,	// (0x00043f0a) list_single_number_pane_g2_cp2

0x617e,	// (0x00044f75) list_single_number_pane_t1_cp2_ParamLimits

0x617e,	// (0x00044f75) list_single_number_pane_t1_cp2

0x6194,	// (0x00044f8b) list_single_number_pane_t2_cp2_ParamLimits

0x6194,	// (0x00044f8b) list_single_number_pane_t2_cp2

0x4f1e,	// (0x00043d15) list_double2_pane_g1_cp2_ParamLimits

0x4f1e,	// (0x00043d15) list_double2_pane_g1_cp2

0x4f2f,	// (0x00043d26) list_double2_pane_g2_cp2

0x5087,	// (0x00043e7e) list_double2_pane_t1_cp2_ParamLimits

0x5087,	// (0x00043e7e) list_double2_pane_t1_cp2

0x509d,	// (0x00043e94) list_double2_pane_t2_cp2_ParamLimits

0x509d,	// (0x00043e94) list_double2_pane_t2_cp2

0x50af,	// (0x00043ea6) list_double_pane_g1_cp2_ParamLimits

0x50af,	// (0x00043ea6) list_double_pane_g1_cp2

0x50bb,	// (0x00043eb2) list_double_pane_g2_cp2

0x50c3,	// (0x00043eba) list_double_pane_t1_cp2_ParamLimits

0x50c3,	// (0x00043eba) list_double_pane_t1_cp2

0x50d9,	// (0x00043ed0) list_double_pane_t2_cp2_ParamLimits

0x50d9,	// (0x00043ed0) list_double_pane_t2_cp2

0x5103,	// (0x00043efa) list_single_pane_cp2_g3

0x2f52,	// (0x00041d49) list_single_pane_g1_cp2_ParamLimits

0x2f52,	// (0x00041d49) list_single_pane_g1_cp2

0x5113,	// (0x00043f0a) list_single_pane_g2_cp2

0x511b,	// (0x00043f12) list_single_pane_t1_cp2_ParamLimits

0x511b,	// (0x00043f12) list_single_pane_t1_cp2

0x5133,	// (0x00043f2a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5133,	// (0x00043f2a) list_single_large_graphic_pane_g1_cp2

0x513f,	// (0x00043f36) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x513f,	// (0x00043f36) list_single_large_graphic_pane_g2_cp2

0x514b,	// (0x00043f42) list_single_large_graphic_pane_g3_cp2

0x5153,	// (0x00043f4a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5153,	// (0x00043f4a) list_single_large_graphic_pane_g4_cp1

0x516d,	// (0x00043f64) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x516d,	// (0x00043f64) list_single_large_graphic_pane_t1_cp2

0x614a,	// (0x00044f41) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x614a,	// (0x00044f41) list_single_graphic_heading_pane_g1_cp2

0x6117,	// (0x00044f0e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6117,	// (0x00044f0e) list_single_graphic_heading_pane_g4_cp2

0x5113,	// (0x00043f0a) list_single_graphic_heading_pane_g5_cp2

0x6156,	// (0x00044f4d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6156,	// (0x00044f4d) list_single_graphic_heading_pane_t1_cp2

0x616c,	// (0x00044f63) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x616c,	// (0x00044f63) list_single_graphic_heading_pane_t2_cp2

0x610b,	// (0x00044f02) list_single_2graphic_pane_g1_cp2_ParamLimits

0x610b,	// (0x00044f02) list_single_2graphic_pane_g1_cp2

0x6117,	// (0x00044f0e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6117,	// (0x00044f0e) list_single_2graphic_pane_g2_cp2

0x5113,	// (0x00043f0a) list_single_2graphic_pane_g3_cp2

0x6128,	// (0x00044f1f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6128,	// (0x00044f1f) list_single_2graphic_pane_g4_cp2

0x6134,	// (0x00044f2b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6134,	// (0x00044f2b) list_single_2graphic_pane_t1_cp2

0x23b4,	// (0x000411ab) list_highlight_pane_g10_cp1

0x5d01,	// (0x00044af8) list_highlight_pane_g1_cp1

0x5d09,	// (0x00044b00) list_highlight_pane_g2_cp1

0x5d11,	// (0x00044b08) list_highlight_pane_g3_cp1

0x5d19,	// (0x00044b10) list_highlight_pane_g4_cp1

0x5d21,	// (0x00044b18) list_highlight_pane_g5_cp1

0x5d29,	// (0x00044b20) list_highlight_pane_g6_cp1

0x5d31,	// (0x00044b28) list_highlight_pane_g7_cp1

0x5d39,	// (0x00044b30) list_highlight_pane_g8_cp1

0x5d41,	// (0x00044b38) list_highlight_pane_g9_cp1

0xd2eb,	// (0x0004c0e2) form_field_slider_pane_t3

0xd2f9,	// (0x0004c0f0) form_field_slider_pane_t4

0x5c35,	// (0x00044a2c) slider_form_pane_ParamLimits

0x5c35,	// (0x00044a2c) slider_form_pane

0x23be,	// (0x000411b5) control_abbreviations

0x23be,	// (0x000411b5) control_conventions

0x23be,	// (0x000411b5) control_definitions

0x23be,	// (0x000411b5) format_table_attribute

0x637d,	// (0x00045174) bg_popup_preview_window_pane_g9

0x23be,	// (0x000411b5) format_table_data2

0x23be,	// (0x000411b5) format_table_data3

0x23be,	// (0x000411b5) format_table_data_example

0x0008,

0x23be,	// (0x000411b5) intro_purpose

0xf8f5,	// (0x0004e6ec) bg_popup_preview_window_pane_g

0x23be,	// (0x000411b5) texts_category

0x23be,	// (0x000411b5) texts_graphics

0x5183,	// (0x00043f7a) text_digital

0x5192,	// (0x00043f89) text_primary

0x51a1,	// (0x00043f98) text_primary_small

0x51b0,	// (0x00043fa7) text_secondary

0x51bf,	// (0x00043fb6) text_title

0x686a,	// (0x00045661) bg_passive_tab_pane_g1_cp3_srt

0x4e79,	// (0x00043c70) bg_passive_tab_pane_g2_cp3_srt

0x6861,	// (0x00045658) bg_passive_tab_pane_g3_cp3_srt

0x242a,	// (0x00041221) bg_active_tab_pane_cp3_srt_ParamLimits

0x242a,	// (0x00041221) bg_active_tab_pane_cp3_srt

0x6873,	// (0x0004566a) tabs_4_active_pane_srt_g1

0xd5de,	// (0x0004c3d5) tabs_4_active_pane_srt_t1_ParamLimits

0xd5de,	// (0x0004c3d5) tabs_4_active_pane_srt_t1

0x686a,	// (0x00045661) bg_active_tab_pane_g1_cp3_copy1

0x4e79,	// (0x00043c70) bg_active_tab_pane_g2_cp3_copy1

0x6861,	// (0x00045658) bg_active_tab_pane_g3_cp3_copy1

0x242a,	// (0x00041221) tabs_2_long_active_pane_srt_ParamLimits

0x242a,	// (0x00041221) tabs_2_long_active_pane_srt

0x242a,	// (0x00041221) tabs_2_long_passive_pane_srt_ParamLimits

0x242a,	// (0x00041221) tabs_2_long_passive_pane_srt

0xc037,	// (0x0004ae2e) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc037,	// (0x0004ae2e) bg_passive_tab_pane_cp4_srt

0x6744,	// (0x0004553b) bg_passive_tab_pane_g1_cp4_srt

0x4e79,	// (0x00043c70) bg_passive_tab_pane_g2_cp4_srt

0x673b,	// (0x00045532) bg_passive_tab_pane_g3_cp4_srt

0x6a9c,	// (0x00045893) bg_active_tab_pane_cp4_srt_ParamLimits

0x6a9c,	// (0x00045893) bg_active_tab_pane_cp4_srt

0xd430,	// (0x0004c227) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd430,	// (0x0004c227) tabs_2_long_active_pane_srt_t1

0x6744,	// (0x0004553b) bg_active_tab_pane_g1_cp4_srt

0x4e79,	// (0x00043c70) bg_active_tab_pane_g2_cp4_srt

0x673b,	// (0x00045532) bg_active_tab_pane_g3_cp4_srt

0x240c,	// (0x00041203) tabs_3_long_active_pane_srt_ParamLimits

0x240c,	// (0x00041203) tabs_3_long_active_pane_srt

0x240c,	// (0x00041203) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x240c,	// (0x00041203) tabs_3_long_passive_pane_cp_srt

0x240c,	// (0x00041203) tabs_3_long_passive_pane_srt_ParamLimits

0x240c,	// (0x00041203) tabs_3_long_passive_pane_srt

0xc037,	// (0x0004ae2e) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc037,	// (0x0004ae2e) bg_passive_tab_pane_cp5_srt

0x4edb,	// (0x00043cd2) bg_passive_tab_pane_g1_cp5_srt

0x4e79,	// (0x00043c70) bg_passive_tab_pane_g2_cp5_srt

0x4ed2,	// (0x00043cc9) bg_passive_tab_pane_g3_cp5_srt

0x6a9c,	// (0x00045893) bg_active_tab_pane_cp5_srt_ParamLimits

0x6a9c,	// (0x00045893) bg_active_tab_pane_cp5_srt

0xd41e,	// (0x0004c215) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd41e,	// (0x0004c215) tabs_3_long_active_pane_srt_t1

0x4edb,	// (0x00043cd2) bg_active_tab_pane_g1_cp5_srt

0x4e79,	// (0x00043c70) bg_active_tab_pane_g2_cp5_srt

0x4ed2,	// (0x00043cc9) bg_active_tab_pane_g3_cp5_srt

0x672d,	// (0x00045524) navi_text_pane_srt_t1

0x6725,	// (0x0004551c) navi_icon_pane_srt_g1

0x52cf,	// (0x000440c6) midp_editing_number_pane_srt

0x51ce,	// (0x00043fc5) midp_ticker_pane_srt

0x52d7,	// (0x000440ce) midp_ticker_pane_srt_g1

0x52df,	// (0x000440d6) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0004e574) midp_ticker_pane_srt_g

0x52e7,	// (0x000440de) midp_ticker_pane_srt_t1

0x6716,	// (0x0004550d) midp_editing_number_pane_t1_copy1

0xc037,	// (0x0004ae2e) listscroll_midp_pane

0xc037,	// (0x0004ae2e) midp_form_pane

0x51d6,	// (0x00043fcd) midp_info_popup_window_ParamLimits

0x51d6,	// (0x00043fcd) midp_info_popup_window

0x475a,	// (0x00043551) bg_popup_sub_pane_cp50_ParamLimits

0x475a,	// (0x00043551) bg_popup_sub_pane_cp50

0x5952,	// (0x00044749) listscroll_midp_info_pane_ParamLimits

0x5952,	// (0x00044749) listscroll_midp_info_pane

0x593a,	// (0x00044731) listscroll_form_midp_pane_ParamLimits

0x593a,	// (0x00044731) listscroll_form_midp_pane

0x5946,	// (0x0004473d) scroll_bar_cp050

0xd2d3,	// (0x0004c0ca) list_midp_pane

0x7184,	// (0x00045f7b) signal_pane_g2_cp

0x586c,	// (0x00044663) listscroll_midp_info_pane_t1_ParamLimits

0x586c,	// (0x00044663) listscroll_midp_info_pane_t1

0x5884,	// (0x0004467b) listscroll_midp_info_pane_t2_ParamLimits

0x5884,	// (0x0004467b) listscroll_midp_info_pane_t2

0x58c2,	// (0x000446b9) listscroll_midp_info_pane_t3_ParamLimits

0x58c2,	// (0x000446b9) listscroll_midp_info_pane_t3

0x58fc,	// (0x000446f3) listscroll_midp_info_pane_t4_ParamLimits

0x58fc,	// (0x000446f3) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0004e627) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0004e627) listscroll_midp_info_pane_t

0x47da,	// (0x000435d1) scroll_pane_cp21

0x580e,	// (0x00044605) form_midp_field_choice_group_pane

0x5817,	// (0x0004460e) form_midp_field_text_pane

0x5852,	// (0x00044649) form_midp_field_time_pane

0x585a,	// (0x00044651) form_midp_gauge_slider_pane

0x5863,	// (0x0004465a) form_midp_gauge_wait_pane

0x23be,	// (0x000411b5) form_midp_image_pane

0xc406,	// (0x0004b1fd) list_single_midp_pane_ParamLimits

0xc406,	// (0x0004b1fd) list_single_midp_pane

0xd298,	// (0x0004c08f) form_midp_field_text_pane_t1

0x5690,	// (0x00044487) input_focus_pane_cp050

0x57fd,	// (0x000445f4) list_midp_form_text_pane

0x57cc,	// (0x000445c3) form_midp_field_choice_group_pane_t1

0x57da,	// (0x000445d1) input_focus_pane_cp051

0x57ee,	// (0x000445e5) list_midp_choice_pane

0x23be,	// (0x000411b5) status_idle_pane

0x57b0,	// (0x000445a7) form_midp_field_time_pane_t1

0x23b4,	// (0x000411ab) wait_anim_pane_g2_copy1

0x57be,	// (0x000445b5) form_midp_field_time_pane_t2

0x0001,

0x5241,	// (0x00044038) aid_navinavi_width_2_pane

0xf82b,	// (0x0004e622) form_midp_field_time_pane_t

0x23be,	// (0x000411b5) input_focus_pane_cp052

0x23be,	// (0x000411b5) bg_input_focus_pane_cp040

0x578c,	// (0x00044583) form_midp_gauge_slider_pane_t1

0x579a,	// (0x00044591) form_midp_gauge_slider_pane_t2

0xd27c,	// (0x0004c073) form_midp_gauge_slider_pane_t3

0xd28a,	// (0x0004c081) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0004e619) form_midp_gauge_slider_pane_t

0x57a8,	// (0x0004459f) form_midp_slider_pane

0x242a,	// (0x00041221) bg_input_focus_pane_cp041_ParamLimits

0x242a,	// (0x00041221) bg_input_focus_pane_cp041

0x5759,	// (0x00044550) form_midp_gauge_wait_pane_t1_ParamLimits

0x5759,	// (0x00044550) form_midp_gauge_wait_pane_t1

0x576b,	// (0x00044562) form_midp_gauge_wait_pane_t2_ParamLimits

0x576b,	// (0x00044562) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0004e614) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0004e614) form_midp_gauge_wait_pane_t

0x577d,	// (0x00044574) form_midp_wait_pane_ParamLimits

0x577d,	// (0x00044574) form_midp_wait_pane

0x5723,	// (0x0004451a) form_midp_image_pane_g1

0x572c,	// (0x00044523) form_midp_image_pane_t1

0x573b,	// (0x00044532) form_midp_image_pane_t2

0x574a,	// (0x00044541) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0004e60d) form_midp_image_pane_t

0x571a,	// (0x00044511) list_single_midp_pane_g1

0xc3f7,	// (0x0004b1ee) list_single_midp_pane_t1

0xd24d,	// (0x0004c044) list_midp_form_item_pane_ParamLimits

0xd24d,	// (0x0004c044) list_midp_form_item_pane

0x51e9,	// (0x00043fe0) list_midp_form_item_pane_t1

0x51f8,	// (0x00043fef) midp_ticker_pane_g1

0x5204,	// (0x00043ffb) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0004e55a) midp_ticker_pane_g

0x5210,	// (0x00044007) midp_ticker_pane_t1

0x67c6,	// (0x000455bd) midp_editing_number_pane_t1

0x67a4,	// (0x0004559b) midp_editing_number_pane

0x67b3,	// (0x000455aa) midp_ticker_pane

0x6706,	// (0x000454fd) ai_message_heading_pane

0x23be,	// (0x000411b5) bg_popup_window_pane_cp14

0x670e,	// (0x00045505) listscroll_ai_message_pane

0x6690,	// (0x00045487) ai_message_heading_pane_g1_ParamLimits

0x6690,	// (0x00045487) ai_message_heading_pane_g1

0x669c,	// (0x00045493) ai_message_heading_pane_g2_ParamLimits

0x669c,	// (0x00045493) ai_message_heading_pane_g2

0x66a8,	// (0x0004549f) ai_message_heading_pane_g3_ParamLimits

0x66a8,	// (0x0004549f) ai_message_heading_pane_g3

0x66b4,	// (0x000454ab) ai_message_heading_pane_g4_ParamLimits

0x66b4,	// (0x000454ab) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0004e74e) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0004e74e) ai_message_heading_pane_g

0x66c0,	// (0x000454b7) ai_message_heading_pane_t1_ParamLimits

0x66c0,	// (0x000454b7) ai_message_heading_pane_t1

0x66da,	// (0x000454d1) ai_message_heading_pane_t2_ParamLimits

0x66da,	// (0x000454d1) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0004e757) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0004e757) ai_message_heading_pane_t

0x66ec,	// (0x000454e3) bg_popup_heading_pane_cp1_ParamLimits

0x66ec,	// (0x000454e3) bg_popup_heading_pane_cp1

0x667e,	// (0x00045475) list_ai_message_pane_ParamLimits

0x667e,	// (0x00045475) list_ai_message_pane

0x47da,	// (0x000435d1) scroll_pane_cp10

0x661a,	// (0x00045411) list_ai_message_pane_g1

0x6622,	// (0x00045419) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x0004e72b) list_ai_message_pane_g

0x662a,	// (0x00045421) list_ai_message_pane_t1_ParamLimits

0x662a,	// (0x00045421) list_ai_message_pane_t1

0x663f,	// (0x00045436) list_ai_message_pane_t2_ParamLimits

0x663f,	// (0x00045436) list_ai_message_pane_t2

0x6654,	// (0x0004544b) list_ai_message_pane_t3_ParamLimits

0x6654,	// (0x0004544b) list_ai_message_pane_t3

0x6669,	// (0x00045460) list_ai_message_pane_t4_ParamLimits

0x6669,	// (0x00045460) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0004e730) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0004e730) list_ai_message_pane_t

0xd408,	// (0x0004c1ff) cell_ai_soft_ind_pane_ParamLimits

0xd408,	// (0x0004c1ff) cell_ai_soft_ind_pane

0x5222,	// (0x00044019) cell_ai_soft_ind_pane_g1_ParamLimits

0x5222,	// (0x00044019) cell_ai_soft_ind_pane_g1

0x23be,	// (0x000411b5) grid_highlight_cp1

0x522f,	// (0x00044026) text_secondary_cp56_ParamLimits

0x522f,	// (0x00044026) text_secondary_cp56

0x65ef,	// (0x000453e6) example_general_pane_ParamLimits

0x65ef,	// (0x000453e6) example_general_pane

0x65fb,	// (0x000453f2) example_parent_pane_g1_ParamLimits

0x65fb,	// (0x000453f2) example_parent_pane_g1

0x6607,	// (0x000453fe) example_parent_pane_t1_ParamLimits

0x6607,	// (0x000453fe) example_parent_pane_t1

0xa45c,	// (0x00049253) popup_preview_text_window_ParamLimits

0xa45c,	// (0x00049253) popup_preview_text_window

0x510b,	// (0x00043f02) list_single_pane_cp2_g4

0x25f9,	// (0x000413f0) bg_popup_preview_window_pane_ParamLimits

0x25f9,	// (0x000413f0) bg_popup_preview_window_pane

0x6385,	// (0x0004517c) popup_preview_text_window_t1_ParamLimits

0x6385,	// (0x0004517c) popup_preview_text_window_t1

0x63a3,	// (0x0004519a) popup_preview_text_window_t2_ParamLimits

0x63a3,	// (0x0004519a) popup_preview_text_window_t2

0x63ec,	// (0x000451e3) popup_preview_text_window_t3_ParamLimits

0x63ec,	// (0x000451e3) popup_preview_text_window_t3

0x6431,	// (0x00045228) popup_preview_text_window_t4_ParamLimits

0x6431,	// (0x00045228) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0004e6ff) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0004e6ff) popup_preview_text_window_t

0x64af,	// (0x000452a6) scroll_pane_cp11

0x561c,	// (0x00044413) bg_popup_preview_window_pane_g1

0x6345,	// (0x0004513c) bg_popup_preview_window_pane_g2

0x634d,	// (0x00045144) bg_popup_preview_window_pane_g3

0x6355,	// (0x0004514c) bg_popup_preview_window_pane_g4

0x635d,	// (0x00045154) bg_popup_preview_window_pane_g5

0x6365,	// (0x0004515c) bg_popup_preview_window_pane_g6

0x636d,	// (0x00045164) bg_popup_preview_window_pane_g7

0x6375,	// (0x0004516c) bg_popup_preview_window_pane_g8

0x92bf,	// (0x000480b6) aid_popup_width_pane

0xa43a,	// (0x00049231) popup_midp_note_alarm_window_ParamLimits

0xa43a,	// (0x00049231) popup_midp_note_alarm_window

0x46ae,	// (0x000434a5) data_form_pane_ParamLimits

0xbe29,	// (0x0004ac20) form_field_data_pane_g1

0xbe33,	// (0x0004ac2a) form_field_data_pane_t1_ParamLimits

0x46ba,	// (0x000434b1) input_focus_pane_ParamLimits

0xbe4d,	// (0x0004ac44) data_form_wide_pane_ParamLimits

0xbe5e,	// (0x0004ac55) form_field_data_wide_pane_g1

0xbe6a,	// (0x0004ac61) form_field_data_wide_pane_t1_ParamLimits

0x27ec,	// (0x000415e3) input_focus_pane_cp6_ParamLimits

0xbffc,	// (0x0004adf3) input_popup_find_pane_g1_ParamLimits

0xbffc,	// (0x0004adf3) input_popup_find_pane_g1

0x9be9,	// (0x000489e0) aid_navi_side_left_pane

0x9bfe,	// (0x000489f5) aid_navi_side_right_pane

0x5dde,	// (0x00044bd5) bg_popup_window_pane_cp30_ParamLimits

0x5dde,	// (0x00044bd5) bg_popup_window_pane_cp30

0x5e58,	// (0x00044c4f) popup_midp_note_alarm_window_g1_ParamLimits

0x5e58,	// (0x00044c4f) popup_midp_note_alarm_window_g1

0x5e88,	// (0x00044c7f) popup_midp_note_alarm_window_t1_ParamLimits

0x5e88,	// (0x00044c7f) popup_midp_note_alarm_window_t1

0x5f29,	// (0x00044d20) popup_midp_note_alarm_window_t2_ParamLimits

0x5f29,	// (0x00044d20) popup_midp_note_alarm_window_t2

0x5fd7,	// (0x00044dce) popup_midp_note_alarm_window_t3_ParamLimits

0x5fd7,	// (0x00044dce) popup_midp_note_alarm_window_t3

0x6009,	// (0x00044e00) popup_midp_note_alarm_window_t4_ParamLimits

0x6009,	// (0x00044e00) popup_midp_note_alarm_window_t4

0x602f,	// (0x00044e26) popup_midp_note_alarm_window_t5_ParamLimits

0x602f,	// (0x00044e26) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x0004e69c) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x0004e69c) popup_midp_note_alarm_window_t

0x60db,	// (0x00044ed2) wait_bar_pane_cp1_ParamLimits

0x60db,	// (0x00044ed2) wait_bar_pane_cp1

0x23be,	// (0x000411b5) wait_anim_pane_copy1

0x23be,	// (0x000411b5) wait_border_pane_copy1

0x5af6,	// (0x000448ed) wait_border_pane_g1_copy1

0xbe84,	// (0x0004ac7b) form_field_popup_pane_g1

0xbe8c,	// (0x0004ac83) form_field_popup_pane_t1_ParamLimits

0x46ba,	// (0x000434b1) input_focus_pane_cp7_ParamLimits

0x46dc,	// (0x000434d3) list_form_pane_ParamLimits

0xbea6,	// (0x0004ac9d) form_field_popup_wide_pane_g1

0xbeae,	// (0x0004aca5) form_field_popup_wide_pane_t1_ParamLimits

0x46ba,	// (0x000434b1) input_focus_pane_cp8_ParamLimits

0x46e8,	// (0x000434df) list_form_wide_pane_ParamLimits

0x689a,	// (0x00045691) aid_size_cell_graphic_pane

0xbf3a,	// (0x0004ad31) data_form_pane_t1_ParamLimits

0xc44a,	// (0x0004b241) data_form_wide_pane_t1_ParamLimits

0xcb78,	// (0x0004b96f) bg_status_flat_pane

0xb9a2,	// (0x0004a799) title_pane_t1_ParamLimits

0x23d4,	// (0x000411cb) title_pane_t2_ParamLimits

0x23fa,	// (0x000411f1) title_pane_t3_ParamLimits

0xf55d,	// (0x0004e354) title_pane_t_ParamLimits

0x4c51,	// (0x00043a48) level_1_signal_ParamLimits

0x4c5e,	// (0x00043a55) level_2_signal_ParamLimits

0x4c6b,	// (0x00043a62) level_3_signal_ParamLimits

0x4c78,	// (0x00043a6f) level_4_signal_ParamLimits

0x4c85,	// (0x00043a7c) level_5_signal_ParamLimits

0x4c92,	// (0x00043a89) level_6_signal_ParamLimits

0x4c9f,	// (0x00043a96) level_7_signal_ParamLimits

0x4c51,	// (0x00043a48) level_1_battery_ParamLimits

0x4c5e,	// (0x00043a55) level_2_battery_ParamLimits

0x4c6b,	// (0x00043a62) level_3_battery_ParamLimits

0x4c78,	// (0x00043a6f) level_4_battery_ParamLimits

0x4c85,	// (0x00043a7c) level_5_battery_ParamLimits

0x4c92,	// (0x00043a89) level_6_battery_ParamLimits

0x4c9f,	// (0x00043a96) level_7_battery_ParamLimits

0x5d01,	// (0x00044af8) bg_status_flat_pane_g1

0x5d09,	// (0x00044b00) bg_status_flat_pane_g2

0x5d11,	// (0x00044b08) bg_status_flat_pane_g3

0x5d19,	// (0x00044b10) bg_status_flat_pane_g4

0x5d21,	// (0x00044b18) bg_status_flat_pane_g5

0x5d29,	// (0x00044b20) bg_status_flat_pane_g6

0x5d31,	// (0x00044b28) bg_status_flat_pane_g7

0xba0a,	// (0x0004a801) tabs_3_active_pane_t1_ParamLimits

0xba0a,	// (0x0004a801) tabs_3_passive_pane_t1_ParamLimits

0xba1c,	// (0x0004a813) tabs_4_active_pane_t1_ParamLimits

0xba1c,	// (0x0004a813) tabs_4_1_passive_pane_t1_ParamLimits

0xc012,	// (0x0004ae09) tabs_2_active_pane_t1_ParamLimits

0xc012,	// (0x0004ae09) tabs_2_passive_pane_t1_ParamLimits

0x6a9c,	// (0x00045893) bg_active_tab_pane_cp4_ParamLimits

0xc024,	// (0x0004ae1b) tabs_2_long_active_pane_t1_ParamLimits

0xc037,	// (0x0004ae2e) bg_passive_tab_pane_cp4_ParamLimits

0xa70d,	// (0x00049504) list_single_midp_graphic_pane_t1_ParamLimits

0x6a9c,	// (0x00045893) bg_active_tab_pane_cp5_ParamLimits

0xc043,	// (0x0004ae3a) tabs_3_long_active_pane_t1_ParamLimits

0xc037,	// (0x0004ae2e) bg_passive_tab_pane_cp5_ParamLimits

0xa70d,	// (0x00049504) list_single_midp_graphic_pane_t1

0xcb78,	// (0x0004b96f) bg_status_flat_pane_ParamLimits

0x54ed,	// (0x000442e4) indicator_pane_cp2_ParamLimits

0x54ed,	// (0x000442e4) indicator_pane_cp2

0xd09b,	// (0x0004be92) navi_pane_srt_ParamLimits

0xd09b,	// (0x0004be92) navi_pane_srt

0x5515,	// (0x0004430c) popup_clock_digital_analogue_window_cp1

0x246e,	// (0x00041265) indicator_pane_t1

0x51ce,	// (0x00043fc5) copy_highlight_pane

0x51ce,	// (0x00043fc5) cursor_graphics_pane

0x51ce,	// (0x00043fc5) graphic_within_text_pane

0x51ce,	// (0x00043fc5) link_highlight_pane

0x6472,	// (0x00045269) popup_preview_text_window_t5_ParamLimits

0x6472,	// (0x00045269) popup_preview_text_window_t5

0x5249,	// (0x00044040) cursor_digital_pane

0x5249,	// (0x00044040) cursor_primary_pane

0x525a,	// (0x00044051) cursor_primary_small_pane

0x5262,	// (0x00044059) cursor_secondary_pane

0x526a,	// (0x00044061) cursor_title_pane

0x5249,	// (0x00044040) link_highlight_digital_pane

0x5251,	// (0x00044048) link_highlight_primary_pane

0x525a,	// (0x00044051) link_highlight_primary_small_pane

0x5262,	// (0x00044059) link_highlight_secondary_pane

0x526a,	// (0x00044061) link_highlight_title_pane

0x5249,	// (0x00044040) copy_highlight_digital_pane

0x5249,	// (0x00044040) copy_highlight_primary_pane

0x525a,	// (0x00044051) copy_highlight_primary_small_pane

0x5262,	// (0x00044059) copy_highlight_secondary_pane

0x526a,	// (0x00044061) copy_highlight_title_pane

0x5262,	// (0x00044059) graphic_text_digital_pane

0x5d81,	// (0x00044b78) graphic_text_primary_pane

0x5d8a,	// (0x00044b81) graphic_text_primary_small_pane

0x525a,	// (0x00044051) graphic_text_secondary_pane

0x5249,	// (0x00044040) graphic_text_title_pane

0xc304,	// (0x0004b0fb) cursor_primary_pane_g1

0x5d73,	// (0x00044b6a) cursor_text_primary_t1

0xd31b,	// (0x0004c112) cursor_primary_small_pane_g1

0x5d65,	// (0x00044b5c) cursor_text_primary_small_t1

0xd311,	// (0x0004c108) cursor_primary_small_pane_g1_copy1

0x5d57,	// (0x00044b4e) cursor_text_primary_small_t1_copy1

0x5d49,	// (0x00044b40) cursor_text_title_t1

0xd307,	// (0x0004c0fe) cursor_title_pane_g1

0xc304,	// (0x0004b0fb) cursor_digital_pane_g1

0x5272,	// (0x00044069) cursor_text_digital_t1

0x5cea,	// (0x00044ae1) link_highlight_primary_pane_g1

0x5cf2,	// (0x00044ae9) link_highlight_primary_pane_t1

0x5280,	// (0x00044077) link_highlight_primary_small_pane_g1

0x5288,	// (0x0004407f) link_highlight_primary_small_pane_t1

0x5280,	// (0x00044077) link_highlight_secondary_pane_g1

0x5297,	// (0x0004408e) link_highlight_secondary_pane_t1

0x5c5e,	// (0x00044a55) link_highlight_title_pane_g1

0x5c66,	// (0x00044a5d) link_highlight_title_pane_t1

0x5c47,	// (0x00044a3e) link_highlight_digital_pane_g1

0x5c4f,	// (0x00044a46) link_highlight_digital_pane_t1

0x5b3b,	// (0x00044932) copy_highlight_primary_pane_g1

0x5b43,	// (0x0004493a) copy_highlight_primary_pane_t1

0x5b15,	// (0x0004490c) copy_highlight_primary_small_pane_g1

0x5b2c,	// (0x00044923) copy_highlight_primary_small_pane_t1

0x52a6,	// (0x0004409d) copy_highlight_secondary_pane_g1

0x52ae,	// (0x000440a5) copy_highlight_secondary_pane_t1

0x5b15,	// (0x0004490c) copy_highlight_title_pane_g1

0x5b1d,	// (0x00044914) copy_highlight_title_pane_t1

0x5b3b,	// (0x00044932) copy_highlight_digital_pane_g1

0x6a20,	// (0x00045817) copy_highlight_digital_pane_t1

0x6974,	// (0x0004576b) graphic_text_primary_pane_g1

0x6a04,	// (0x000457fb) graphic_text_primary_pane_t1

0x6a12,	// (0x00045809) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x0004e7cb) graphic_text_primary_pane_t

0x69e0,	// (0x000457d7) graphic_text_primary_small_pane_g1

0x69e8,	// (0x000457df) graphic_text_primary_small_pane_t1

0x69f6,	// (0x000457ed) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0004e7c6) graphic_text_primary_small_pane_t

0x69bc,	// (0x000457b3) graphic_text_secondary_pane_g1

0x69c4,	// (0x000457bb) graphic_text_secondary_pane_t1

0x69d2,	// (0x000457c9) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0004e7c1) graphic_text_secondary_pane_t

0x6998,	// (0x0004578f) graphic_text_title_pane_g1

0x69a0,	// (0x00045797) graphic_text_title_pane_t1

0x69ae,	// (0x000457a5) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x0004e7bc) graphic_text_title_pane_t

0x6974,	// (0x0004576b) graphic_text_digital_pane_g1

0x697c,	// (0x00045773) graphic_text_digital_pane_t1

0x698a,	// (0x00045781) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0004e7b7) graphic_text_digital_pane_t

0x242a,	// (0x00041221) navi_icon_pane_srt_ParamLimits

0x242a,	// (0x00041221) navi_icon_pane_srt

0x23be,	// (0x000411b5) navi_midp_pane_srt

0x23be,	// (0x000411b5) navi_navi_pane_srt

0x242a,	// (0x00041221) navi_text_pane_srt_ParamLimits

0x242a,	// (0x00041221) navi_text_pane_srt

0x693f,	// (0x00045736) navi_navi_icon_text_pane_srt

0x6959,	// (0x00045750) navi_navi_pane_srt_g1_ParamLimits

0x6959,	// (0x00045750) navi_navi_pane_srt_g1

0x6947,	// (0x0004573e) navi_navi_pane_srt_g2_ParamLimits

0x6947,	// (0x0004573e) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0004e7b2) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0004e7b2) navi_navi_pane_srt_g

0x696b,	// (0x00045762) navi_navi_tabs_pane_srt

0x693f,	// (0x00045736) navi_navi_text_pane_srt

0x693f,	// (0x00045736) navi_navi_volume_pane_srt

0x6930,	// (0x00045727) navi_navi_text_pane_srt_t1

0xaa81,	// (0x00049878) navi_navi_volume_pane_srt_g1

0xaa89,	// (0x00049880) volume_small_pane_srt_ParamLimits

0xaa89,	// (0x00049880) volume_small_pane_srt

0x9ec0,	// (0x00048cb7) volume_small_pane_srt_g1_ParamLimits

0x9ec0,	// (0x00048cb7) volume_small_pane_srt_g1

0x9ed0,	// (0x00048cc7) volume_small_pane_srt_g2_ParamLimits

0x9ed0,	// (0x00048cc7) volume_small_pane_srt_g2

0x9ee1,	// (0x00048cd8) volume_small_pane_srt_g3_ParamLimits

0x9ee1,	// (0x00048cd8) volume_small_pane_srt_g3

0x9ef2,	// (0x00048ce9) volume_small_pane_srt_g4_ParamLimits

0x9ef2,	// (0x00048ce9) volume_small_pane_srt_g4

0x9f03,	// (0x00048cfa) volume_small_pane_srt_g5_ParamLimits

0x9f03,	// (0x00048cfa) volume_small_pane_srt_g5

0x9f14,	// (0x00048d0b) volume_small_pane_srt_g6_ParamLimits

0x9f14,	// (0x00048d0b) volume_small_pane_srt_g6

0x9f25,	// (0x00048d1c) volume_small_pane_srt_g7_ParamLimits

0x9f25,	// (0x00048d1c) volume_small_pane_srt_g7

0x9f36,	// (0x00048d2d) volume_small_pane_srt_g8_ParamLimits

0x9f36,	// (0x00048d2d) volume_small_pane_srt_g8

0x9f47,	// (0x00048d3e) volume_small_pane_srt_g9_ParamLimits

0x9f47,	// (0x00048d3e) volume_small_pane_srt_g9

0x9f58,	// (0x00048d4f) volume_small_pane_srt_g10_ParamLimits

0x9f58,	// (0x00048d4f) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0004e55f) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0004e55f) volume_small_pane_srt_g

0x26a2,	// (0x00041499) query_popup_data_pane_cp2

0x6916,	// (0x0004570d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6916,	// (0x0004570d) navi_navi_icon_text_pane_srt_t1

0x5d81,	// (0x00044b78) navi_tabs_2_long_pane_srt

0x5d81,	// (0x00044b78) navi_tabs_2_pane_srt

0x5d81,	// (0x00044b78) navi_tabs_3_long_pane_srt

0x5d81,	// (0x00044b78) navi_tabs_3_pane_srt

0x5d81,	// (0x00044b78) navi_tabs_4_pane_srt

0xaa61,	// (0x00049858) tabs_2_active_pane_srt_ParamLimits

0xaa61,	// (0x00049858) tabs_2_active_pane_srt

0xaa71,	// (0x00049868) tabs_2_passive_pane_srt_ParamLimits

0xaa71,	// (0x00049868) tabs_2_passive_pane_srt

0x4813,	// (0x0004360a) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4813,	// (0x0004360a) bg_passive_tab_pane_cp1_srt

0x68fd,	// (0x000456f4) bg_passive_tab_pane_g1_cp1_srt

0x4e79,	// (0x00043c70) bg_passive_tab_pane_g2_cp1_srt

0x68f4,	// (0x000456eb) bg_passive_tab_pane_g3_cp1_srt

0x242a,	// (0x00041221) bg_active_tab_pane_cp1_srt_ParamLimits

0x242a,	// (0x00041221) bg_active_tab_pane_cp1_srt

0x6906,	// (0x000456fd) tabs_2_active_pane_srt_g1

0xd655,	// (0x0004c44c) tabs_2_active_pane_srt_t1_ParamLimits

0xd655,	// (0x0004c44c) tabs_2_active_pane_srt_t1

0x68fd,	// (0x000456f4) bg_active_tab_pane_g1_cp1_srt

0x4e79,	// (0x00043c70) bg_active_tab_pane_g2_cp1_srt

0x68f4,	// (0x000456eb) bg_active_tab_pane_g3_cp1_srt

0xaa2e,	// (0x00049825) tabs_3_active_pane_srt_ParamLimits

0xaa2e,	// (0x00049825) tabs_3_active_pane_srt

0xaa3f,	// (0x00049836) tabs_3_passive_pane_cp_srt_ParamLimits

0xaa3f,	// (0x00049836) tabs_3_passive_pane_cp_srt

0xaa50,	// (0x00049847) tabs_3_passive_pane_srt_ParamLimits

0xaa50,	// (0x00049847) tabs_3_passive_pane_srt

0x4813,	// (0x0004360a) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4813,	// (0x0004360a) bg_passive_tab_pane_cp2_srt

0x52c6,	// (0x000440bd) bg_passive_tab_pane_g1_cp2_srt

0x4e79,	// (0x00043c70) bg_passive_tab_pane_g2_cp2_srt

0x52bd,	// (0x000440b4) bg_passive_tab_pane_g3_cp2_srt

0x242a,	// (0x00041221) bg_active_tab_pane_cp2_srt_ParamLimits

0x242a,	// (0x00041221) bg_active_tab_pane_cp2_srt

0x68ec,	// (0x000456e3) tabs_3_active_pane_srt_g1

0xd643,	// (0x0004c43a) tabs_3_active_pane_srt_t1_ParamLimits

0xd643,	// (0x0004c43a) tabs_3_active_pane_srt_t1

0x52c6,	// (0x000440bd) bg_active_tab_pane_g1_cp2_srt

0x4e79,	// (0x00043c70) bg_active_tab_pane_g2_cp2_srt

0x52bd,	// (0x000440b4) bg_active_tab_pane_g3_cp2_srt

0xa9e6,	// (0x000497dd) tabs_4_active_pane_srt_ParamLimits

0xa9e6,	// (0x000497dd) tabs_4_active_pane_srt

0xa9f8,	// (0x000497ef) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa9f8,	// (0x000497ef) tabs_4_passive_pane_cp2_srt

0xa0bb,	// (0x00048eb2) aid_size_cell_toolbar

0xc037,	// (0x0004ae2e) main_idle_act_pane_ParamLimits

0xa26e,	// (0x00049065) popup_large_graphic_colour_window_ParamLimits

0xa5d3,	// (0x000493ca) popup_toolbar_window_ParamLimits

0xa5d3,	// (0x000493ca) popup_toolbar_window

0x67d5,	// (0x000455cc) list_single_graphic_2heading_pane_ParamLimits

0x67d5,	// (0x000455cc) list_single_graphic_2heading_pane

0x4a90,	// (0x00043887) aid_size_cell_apps_grid_lsc_pane

0x4aa2,	// (0x00043899) aid_size_cell_apps_grid_prt_pane

0x4813,	// (0x0004360a) bg_wml_button_pane_cp1_ParamLimits

0x4813,	// (0x0004360a) bg_wml_button_pane_cp1

0xd298,	// (0x0004c08f) form_midp_field_text_pane_t1_ParamLimits

0x5690,	// (0x00044487) input_focus_pane_cp050_ParamLimits

0x57fd,	// (0x000445f4) list_midp_form_text_pane_ParamLimits

0x57da,	// (0x000445d1) input_focus_pane_cp051_ParamLimits

0x57ee,	// (0x000445e5) list_midp_choice_pane_ParamLimits

0xd1e9,	// (0x0004bfe0) list_single_2graphic_pane_cp3_ParamLimits

0xd1e9,	// (0x0004bfe0) list_single_2graphic_pane_cp3

0xd214,	// (0x0004c00b) list_single_midp_graphic_pane_ParamLimits

0xd214,	// (0x0004c00b) list_single_midp_graphic_pane

0x9247,	// (0x0004803e) list_single_graphic_2heading_pane_g1_ParamLimits

0x9247,	// (0x0004803e) list_single_graphic_2heading_pane_g1

0x9253,	// (0x0004804a) list_single_graphic_2heading_pane_g4_ParamLimits

0x9253,	// (0x0004804a) list_single_graphic_2heading_pane_g4

0x925f,	// (0x00048056) list_single_graphic_2heading_pane_g5_ParamLimits

0x925f,	// (0x00048056) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0004e5b2) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0004e5b2) list_single_graphic_2heading_pane_g

0x926b,	// (0x00048062) list_single_graphic_2heading_pane_t1_ParamLimits

0x926b,	// (0x00048062) list_single_graphic_2heading_pane_t1

0x927f,	// (0x00048076) list_single_graphic_2heading_pane_t2_ParamLimits

0x927f,	// (0x00048076) list_single_graphic_2heading_pane_t2

0x929b,	// (0x00048092) list_single_graphic_2heading_pane_t3_ParamLimits

0x929b,	// (0x00048092) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0004e5b9) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0004e5b9) list_single_graphic_2heading_pane_t

0x555a,	// (0x00044351) bg_popup_sub_pane_cp2

0x5584,	// (0x0004437b) grid_toobar_pane

0xa67e,	// (0x00049475) cell_toolbar_pane_ParamLimits

0xa67e,	// (0x00049475) cell_toolbar_pane

0x55c0,	// (0x000443b7) cell_toolbar_pane_g1_ParamLimits

0x55c0,	// (0x000443b7) cell_toolbar_pane_g1

0x55d4,	// (0x000443cb) cell_toolbar_pane_g2_ParamLimits

0x55d4,	// (0x000443cb) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0004e5c7) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0004e5c7) cell_toolbar_pane_g

0x55f6,	// (0x000443ed) grid_highlight_pane_cp2_ParamLimits

0x55f6,	// (0x000443ed) grid_highlight_pane_cp2

0x5610,	// (0x00044407) toolbar_button_pane

0x561c,	// (0x00044413) toolbar_button_pane_g1

0x562c,	// (0x00044423) toolbar_button_pane_g2

0x5624,	// (0x0004441b) toolbar_button_pane_g3

0x563c,	// (0x00044433) toolbar_button_pane_g4

0x5634,	// (0x0004442b) toolbar_button_pane_g5

0x5644,	// (0x0004443b) toolbar_button_pane_g6

0x564c,	// (0x00044443) toolbar_button_pane_g7

0x565c,	// (0x00044453) toolbar_button_pane_g8

0x5654,	// (0x0004444b) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x0004e5cc) toolbar_button_pane_g

0xa6b6,	// (0x000494ad) list_single_2graphic_pane_g1_cp3_ParamLimits

0xa6b6,	// (0x000494ad) list_single_2graphic_pane_g1_cp3

0xa6c2,	// (0x000494b9) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa6c2,	// (0x000494b9) list_single_2graphic_pane_g2_cp3

0xa6d3,	// (0x000494ca) list_single_2graphic_pane_g3_cp3

0xa6db,	// (0x000494d2) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa6db,	// (0x000494d2) list_single_2graphic_pane_g4_cp3

0xa6e7,	// (0x000494de) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa6e7,	// (0x000494de) list_single_2graphic_pane_t1_cp3

0xa701,	// (0x000494f8) list_single_midp_graphic_pane_g2_ParamLimits

0xa701,	// (0x000494f8) list_single_midp_graphic_pane_g2

0x9237,	// (0x0004802e) aid_zoom_text_primary

0x923f,	// (0x00048036) aid_zoom_text_secondary

0x537a,	// (0x00044171) status_small_pane_g7_ParamLimits

0x537a,	// (0x00044171) status_small_pane_g7

0x539d,	// (0x00044194) status_small_pane_t1_ParamLimits

0xb985,	// (0x0004a77c) title_pane_g2

0x0003,

0xf554,	// (0x0004e34b) title_pane_g

0xbb42,	// (0x0004a939) aid_size_cell_colour_1_pane_ParamLimits

0xbb42,	// (0x0004a939) aid_size_cell_colour_1_pane

0xbb56,	// (0x0004a94d) aid_size_cell_colour_2_pane_ParamLimits

0xbb56,	// (0x0004a94d) aid_size_cell_colour_2_pane

0xbb6a,	// (0x0004a961) aid_size_cell_colour_3_pane_ParamLimits

0xbb6a,	// (0x0004a961) aid_size_cell_colour_3_pane

0xbb7e,	// (0x0004a975) aid_size_cell_colour_4_pane_ParamLimits

0xbb7e,	// (0x0004a975) aid_size_cell_colour_4_pane

0x9b25,	// (0x0004891c) title_pane_stacon_g1_ParamLimits

0x9b25,	// (0x0004891c) title_pane_stacon_g1

0x5b9a,	// (0x00044991) popup_note_wait_window_g3_ParamLimits

0x5b9a,	// (0x00044991) popup_note_wait_window_g3

0x5c10,	// (0x00044a07) popup_note_wait_window_t5_ParamLimits

0x5c10,	// (0x00044a07) popup_note_wait_window_t5

0x23be,	// (0x000411b5) main_feb_china_hwr_fs_writing_pane

0xa157,	// (0x00048f4e) popup_feb_china_hwr_fs_window_ParamLimits

0xa157,	// (0x00048f4e) popup_feb_china_hwr_fs_window

0xa723,	// (0x0004951a) aid_size_cell_hwr_fs_ParamLimits

0xa723,	// (0x0004951a) aid_size_cell_hwr_fs

0x5690,	// (0x00044487) bg_popup_sub_pane_cp3_ParamLimits

0x5690,	// (0x00044487) bg_popup_sub_pane_cp3

0xa738,	// (0x0004952f) grid_hwr_fs_pane_ParamLimits

0xa738,	// (0x0004952f) grid_hwr_fs_pane

0xa750,	// (0x00049547) linegrid_hwr_fs_pane_ParamLimits

0xa750,	// (0x00049547) linegrid_hwr_fs_pane

0xa760,	// (0x00049557) cell_hwr_fs_pane_ParamLimits

0xa760,	// (0x00049557) cell_hwr_fs_pane

0x569c,	// (0x00044493) linegrid_hwr_fs_pane_g1_ParamLimits

0x569c,	// (0x00044493) linegrid_hwr_fs_pane_g1

0xd1bd,	// (0x0004bfb4) linegrid_hwr_fs_pane_g2_ParamLimits

0xd1bd,	// (0x0004bfb4) linegrid_hwr_fs_pane_g2

0x56a8,	// (0x0004449f) linegrid_hwr_fs_pane_g3_ParamLimits

0x56a8,	// (0x0004449f) linegrid_hwr_fs_pane_g3

0xa782,	// (0x00049579) linegrid_hwr_fs_pane_g4_ParamLimits

0xa782,	// (0x00049579) linegrid_hwr_fs_pane_g4

0xa79c,	// (0x00049593) linegrid_hwr_fs_pane_g5_ParamLimits

0xa79c,	// (0x00049593) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0004e5f2) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0004e5f2) linegrid_hwr_fs_pane_g

0x56b4,	// (0x000444ab) cell_hwr_fs_pane_g1_ParamLimits

0x56b4,	// (0x000444ab) cell_hwr_fs_pane_g1

0x5526,	// (0x0004431d) cell_hwr_fs_pane_g2_ParamLimits

0x5526,	// (0x0004431d) cell_hwr_fs_pane_g2

0xd1cf,	// (0x0004bfc6) cell_hwr_fs_pane_g3_ParamLimits

0xd1cf,	// (0x0004bfc6) cell_hwr_fs_pane_g3

0xd1dc,	// (0x0004bfd3) cell_hwr_fs_pane_g4_ParamLimits

0xd1dc,	// (0x0004bfd3) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0004e5fd) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0004e5fd) cell_hwr_fs_pane_g

0xa7b2,	// (0x000495a9) cell_hwr_fs_pane_t1

0x23be,	// (0x000411b5) grid_highlight_pane_cp6

0x23be,	// (0x000411b5) main_idle_act2_pane

0x47c1,	// (0x000435b8) aid_inside_area_popup_secondary

0xd32d,	// (0x0004c124) aid_inside_area_window_primary_ParamLimits

0xd32d,	// (0x0004c124) aid_inside_area_window_primary

0x6a2f,	// (0x00045826) ai2_news_ticker_pane

0x6a37,	// (0x0004582e) aid_size_cell_ai1_link_ParamLimits

0x6a37,	// (0x0004582e) aid_size_cell_ai1_link

0x6a51,	// (0x00045848) popup_ai2_data_window_ParamLimits

0x6a51,	// (0x00045848) popup_ai2_data_window

0x6a65,	// (0x0004585c) popup_ai2_link_window_ParamLimits

0x6a65,	// (0x0004585c) popup_ai2_link_window

0x5690,	// (0x00044487) bg_popup_sub_pane_cp4_ParamLimits

0x5690,	// (0x00044487) bg_popup_sub_pane_cp4

0x6a79,	// (0x00045870) grid_ai2_link_pane_ParamLimits

0x6a79,	// (0x00045870) grid_ai2_link_pane

0x6a90,	// (0x00045887) popup_ai2_link_window_g1_ParamLimits

0x6a90,	// (0x00045887) popup_ai2_link_window_g1

0x6ab6,	// (0x000458ad) popup_ai2_link_window_g2_ParamLimits

0x6ab6,	// (0x000458ad) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0004e7d0) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0004e7d0) popup_ai2_link_window_g

0x6ac5,	// (0x000458bc) ai2_mp_button_pane

0x6acd,	// (0x000458c4) ai2_mp_volume_pane

0x57da,	// (0x000445d1) bg_popup_sub_pane_cp5_ParamLimits

0x57da,	// (0x000445d1) bg_popup_sub_pane_cp5

0x6ad5,	// (0x000458cc) heading_ai2_gene_pane_ParamLimits

0x6ad5,	// (0x000458cc) heading_ai2_gene_pane

0x6ae1,	// (0x000458d8) list_ai2_gene_pane_ParamLimits

0x6ae1,	// (0x000458d8) list_ai2_gene_pane

0x6b29,	// (0x00045920) cell_ai2_link_pane_ParamLimits

0x6b29,	// (0x00045920) cell_ai2_link_pane

0x6b3f,	// (0x00045936) cell_ai2_link_pane_g1

0x23be,	// (0x000411b5) grid_highlight_pane_cp7

0xaa9e,	// (0x00049895) ai2_mp_volume_pane_g1

0x6c18,	// (0x00045a0f) ai2_mp_volume_pane_g2

0x6b85,	// (0x0004597c) list_ai2_gene_pane_t1

0x6c10,	// (0x00045a07) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x0004e7e9) ai2_mp_volume_pane_g

0xaaa6,	// (0x0004989d) volume_small_pane_cp3

0x6c20,	// (0x00045a17) aid_size_cell_ai2_button

0x6c28,	// (0x00045a1f) grid_ai2_button_pane

0x6c31,	// (0x00045a28) cell_ai2_button_pane_ParamLimits

0x6c31,	// (0x00045a28) cell_ai2_button_pane

0x23b4,	// (0x000411ab) cell_ai2_button_pane_g1

0x23be,	// (0x000411b5) grid_highlight_pane_cp8

0x6bd0,	// (0x000459c7) ai2_gene_pane_t1_ParamLimits

0x6bd0,	// (0x000459c7) ai2_gene_pane_t1

0xa0b1,	// (0x00048ea8) aid_height_parent_landscape

0xd443,	// (0x0004c23a) aid_height_set_list

0x542c,	// (0x00044223) aid_size_parent

0x689a,	// (0x00045691) aid_size_cell_graphic_pane_ParamLimits

0x6af1,	// (0x000458e8) popup_ai2_data_window_g1_ParamLimits

0x6af1,	// (0x000458e8) popup_ai2_data_window_g1

0x6afd,	// (0x000458f4) ai2_news_ticker_pane_g1

0x6b05,	// (0x000458fc) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0004e7d5) ai2_news_ticker_pane_g

0x6b0d,	// (0x00045904) ai2_news_ticker_pane_t1

0x6b1b,	// (0x00045912) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x0004e7da) ai2_news_ticker_pane_t

0x6b48,	// (0x0004593f) heading_ai2_gene_pane_g1

0x6b50,	// (0x00045947) heading_ai2_gene_pane_t1_ParamLimits

0x6b50,	// (0x00045947) heading_ai2_gene_pane_t1

0x6b65,	// (0x0004595c) list_highlight_pane_cp6

0x6b6d,	// (0x00045964) ai2_gene_pane_ParamLimits

0x6b6d,	// (0x00045964) ai2_gene_pane

0x6b93,	// (0x0004598a) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0004e7df) list_ai2_gene_pane_t

0x6ba1,	// (0x00045998) list_highlight_pane_cp8_ParamLimits

0x6ba1,	// (0x00045998) list_highlight_pane_cp8

0x6bb2,	// (0x000459a9) ai2_gene_pane_g1_ParamLimits

0x6bb2,	// (0x000459a9) ai2_gene_pane_g1

0x6bc4,	// (0x000459bb) ai2_gene_pane_g2_ParamLimits

0x6bc4,	// (0x000459bb) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0004e7e4) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0004e7e4) ai2_gene_pane_g

0x2f35,	// (0x00041d2c) scroll_pane_cp12

0xa070,	// (0x00048e67) control_pane_t3_ParamLimits

0xa070,	// (0x00048e67) control_pane_t3

0x538e,	// (0x00044185) status_small_pane_g8_ParamLimits

0x538e,	// (0x00044185) status_small_pane_g8

0xa239,	// (0x00049030) popup_find_window_ParamLimits

0xa44e,	// (0x00049245) popup_note_image_window_ParamLimits

0xc33d,	// (0x0004b134) list_double2_graphic_pane_vc_g1_ParamLimits

0xc33d,	// (0x0004b134) list_double2_graphic_pane_vc_g1

0xbbfc,	// (0x0004a9f3) list_double2_graphic_pane_vc_g2_ParamLimits

0xbbfc,	// (0x0004a9f3) list_double2_graphic_pane_vc_g2

0xbc08,	// (0x0004a9ff) list_double2_graphic_pane_vc_g3_ParamLimits

0xbc08,	// (0x0004a9ff) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0004e5c0) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004e5c0) list_double2_graphic_pane_vc_g

0xc349,	// (0x0004b140) list_double2_graphic_pane_vc_t1_ParamLimits

0xc349,	// (0x0004b140) list_double2_graphic_pane_vc_t1

0xbbfc,	// (0x0004a9f3) list_single_heading_pane_vc_g1_ParamLimits

0xbbfc,	// (0x0004a9f3) list_single_heading_pane_vc_g1

0xbc08,	// (0x0004a9ff) list_single_heading_pane_vc_g2_ParamLimits

0xbc08,	// (0x0004a9ff) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e3cf) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e3cf) list_single_heading_pane_vc_g

0xc35f,	// (0x0004b156) list_single_heading_pane_vc_t1_ParamLimits

0xc35f,	// (0x0004b156) list_single_heading_pane_vc_t1

0xc375,	// (0x0004b16c) list_single_heading_pane_vc_t2_ParamLimits

0xc375,	// (0x0004b16c) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0004e5e1) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0004e5e1) list_single_heading_pane_vc_t

0xe2d5,	// (0x0004d0cc) list_setting_number_pane_vc_g1_ParamLimits

0xe2d5,	// (0x0004d0cc) list_setting_number_pane_vc_g1

0xe2e1,	// (0x0004d0d8) list_setting_number_pane_vc_g2_ParamLimits

0xe2e1,	// (0x0004d0d8) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0004e5e6) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0004e5e6) list_setting_number_pane_vc_g

0xc391,	// (0x0004b188) list_setting_number_pane_vc_t1_ParamLimits

0xc391,	// (0x0004b188) list_setting_number_pane_vc_t1

0xc3a5,	// (0x0004b19c) list_setting_number_pane_vc_t2_ParamLimits

0xc3a5,	// (0x0004b19c) list_setting_number_pane_vc_t2

0xc3bf,	// (0x0004b1b6) list_setting_number_pane_vc_t3_ParamLimits

0xc3bf,	// (0x0004b1b6) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x0004e5eb) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x0004e5eb) list_setting_number_pane_vc_t

0xc3e7,	// (0x0004b1de) set_value_pane_vc_ParamLimits

0xc3e7,	// (0x0004b1de) set_value_pane_vc

0x67d5,	// (0x000455cc) list_double2_graphic_pane_vc_ParamLimits

0x67d5,	// (0x000455cc) list_double2_graphic_pane_vc

0xc4ac,	// (0x0004b2a3) list_double2_large_graphic_pane_vc_ParamLimits

0xc4ac,	// (0x0004b2a3) list_double2_large_graphic_pane_vc

0x67d5,	// (0x000455cc) list_double2_pane_vc_ParamLimits

0x67d5,	// (0x000455cc) list_double2_pane_vc

0x67d5,	// (0x000455cc) list_double_graphic_heading_pane_vc_ParamLimits

0x67d5,	// (0x000455cc) list_double_graphic_heading_pane_vc

0x67d5,	// (0x000455cc) list_double_graphic_pane_vc_ParamLimits

0x67d5,	// (0x000455cc) list_double_graphic_pane_vc

0x67d5,	// (0x000455cc) list_double_heading_pane_vc_ParamLimits

0x67d5,	// (0x000455cc) list_double_heading_pane_vc

0xc4ac,	// (0x0004b2a3) list_double_large_graphic_pane_vc_ParamLimits

0xc4ac,	// (0x0004b2a3) list_double_large_graphic_pane_vc

0x67d5,	// (0x000455cc) list_double_number_pane_vc_ParamLimits

0x67d5,	// (0x000455cc) list_double_number_pane_vc

0x67d5,	// (0x000455cc) list_double_pane_vc_ParamLimits

0x67d5,	// (0x000455cc) list_double_pane_vc

0x67d5,	// (0x000455cc) list_double_time_pane_vc_ParamLimits

0x67d5,	// (0x000455cc) list_double_time_pane_vc

0x67d5,	// (0x000455cc) list_setting_number_pane_vc_ParamLimits

0x67d5,	// (0x000455cc) list_setting_number_pane_vc

0x67d5,	// (0x000455cc) list_setting_pane_vc_ParamLimits

0x67d5,	// (0x000455cc) list_setting_pane_vc

0x67d5,	// (0x000455cc) list_single_graphic_heading_pane_vc_ParamLimits

0x67d5,	// (0x000455cc) list_single_graphic_heading_pane_vc

0x67d5,	// (0x000455cc) list_single_heading_pane_vc_ParamLimits

0x67d5,	// (0x000455cc) list_single_heading_pane_vc

0xc4be,	// (0x0004b2b5) list_single_number_heading_pane_vc_ParamLimits

0xc4be,	// (0x0004b2b5) list_single_number_heading_pane_vc

0xc33d,	// (0x0004b134) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc33d,	// (0x0004b134) list_double_graphic_heading_pane_vc_g1

0xbbfc,	// (0x0004a9f3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xbbfc,	// (0x0004a9f3) list_double_graphic_heading_pane_vc_g2

0xbc08,	// (0x0004a9ff) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xbc08,	// (0x0004a9ff) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x0004e5c0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004e5c0) list_double_graphic_heading_pane_vc_g

0xc584,	// (0x0004b37b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc584,	// (0x0004b37b) list_double_graphic_heading_pane_vc_t1

0xc5a0,	// (0x0004b397) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xc5a0,	// (0x0004b397) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f9,	// (0x0004e7f0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f9,	// (0x0004e7f0) list_double_graphic_heading_pane_vc_t

0xe2d5,	// (0x0004d0cc) list_setting_pane_vc_g1_ParamLimits

0xe2d5,	// (0x0004d0cc) list_setting_pane_vc_g1

0xe2e1,	// (0x0004d0d8) list_setting_pane_vc_g2_ParamLimits

0xe2e1,	// (0x0004d0d8) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0004e5e6) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0004e5e6) list_setting_pane_vc_g

0xc5b8,	// (0x0004b3af) list_setting_pane_vc_t1_ParamLimits

0xc5b8,	// (0x0004b3af) list_setting_pane_vc_t1

0xc5d2,	// (0x0004b3c9) list_setting_pane_vc_t2_ParamLimits

0xc5d2,	// (0x0004b3c9) list_setting_pane_vc_t2

0x0001,

0xfa3c,	// (0x0004e833) list_setting_pane_vc_t_ParamLimits

0xfa3c,	// (0x0004e833) list_setting_pane_vc_t

0xc3e7,	// (0x0004b1de) set_value_pane_cp_vc_ParamLimits

0xc3e7,	// (0x0004b1de) set_value_pane_cp_vc

0xbbfc,	// (0x0004a9f3) list_single_number_heading_pane_vc_g1_ParamLimits

0xbbfc,	// (0x0004a9f3) list_single_number_heading_pane_vc_g1

0xbc08,	// (0x0004a9ff) list_single_number_heading_pane_vc_g2_ParamLimits

0xbc08,	// (0x0004a9ff) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e3cf) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e3cf) list_single_number_heading_pane_vc_g

0xc35f,	// (0x0004b156) list_single_number_heading_pane_vc_t1_ParamLimits

0xc35f,	// (0x0004b156) list_single_number_heading_pane_vc_t1

0xc5ea,	// (0x0004b3e1) list_single_number_heading_pane_vc_t2_ParamLimits

0xc5ea,	// (0x0004b3e1) list_single_number_heading_pane_vc_t2

0x97bb,	// (0x000485b2) list_single_number_heading_pane_vc_t3_ParamLimits

0x97bb,	// (0x000485b2) list_single_number_heading_pane_vc_t3

0x0002,

0xfa41,	// (0x0004e838) list_single_number_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0004e838) list_single_number_heading_pane_vc_t

0xc33d,	// (0x0004b134) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xc33d,	// (0x0004b134) list_single_graphic_heading_pane_vc_g1

0xbbfc,	// (0x0004a9f3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xbbfc,	// (0x0004a9f3) list_single_graphic_heading_pane_vc_g4

0xbc08,	// (0x0004a9ff) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xbc08,	// (0x0004a9ff) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0004e5c0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004e5c0) list_single_graphic_heading_pane_vc_g

0xc35f,	// (0x0004b156) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xc35f,	// (0x0004b156) list_single_graphic_heading_pane_vc_t1

0xc5fe,	// (0x0004b3f5) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc5fe,	// (0x0004b3f5) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa48,	// (0x0004e83f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x0004e83f) list_single_graphic_heading_pane_vc_t

0xbbfc,	// (0x0004a9f3) list_double2_pane_vc_g1_ParamLimits

0xbbfc,	// (0x0004a9f3) list_double2_pane_vc_g1

0xbc08,	// (0x0004a9ff) list_double2_pane_vc_g2_ParamLimits

0xbc08,	// (0x0004a9ff) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e3cf) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e3cf) list_double2_pane_vc_g

0xc47a,	// (0x0004b271) list_double2_pane_vc_t1_ParamLimits

0xc47a,	// (0x0004b271) list_double2_pane_vc_t1

0xc612,	// (0x0004b409) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc612,	// (0x0004b409) list_double2_large_graphic_pane_vc_g1

0xc61e,	// (0x0004b415) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc61e,	// (0x0004b415) list_double2_large_graphic_pane_vc_g2

0xc62a,	// (0x0004b421) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc62a,	// (0x0004b421) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4d,	// (0x0004e844) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4d,	// (0x0004e844) list_double2_large_graphic_pane_vc_g

0xc636,	// (0x0004b42d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc636,	// (0x0004b42d) list_double2_large_graphic_pane_vc_t1

0xc64c,	// (0x0004b443) list_double_time_pane_vc_g1_ParamLimits

0xc64c,	// (0x0004b443) list_double_time_pane_vc_g1

0xc658,	// (0x0004b44f) list_double_time_pane_vc_g2_ParamLimits

0xc658,	// (0x0004b44f) list_double_time_pane_vc_g2

0x0001,

0xfa54,	// (0x0004e84b) list_double_time_pane_vc_g_ParamLimits

0xfa54,	// (0x0004e84b) list_double_time_pane_vc_g

0xc664,	// (0x0004b45b) list_double_time_pane_vc_t1_ParamLimits

0xc664,	// (0x0004b45b) list_double_time_pane_vc_t1

0xc688,	// (0x0004b47f) list_double_time_pane_vc_t2_ParamLimits

0xc688,	// (0x0004b47f) list_double_time_pane_vc_t2

0xc6d2,	// (0x0004b4c9) list_double_time_pane_vc_t3_ParamLimits

0xc6d2,	// (0x0004b4c9) list_double_time_pane_vc_t3

0xc6e4,	// (0x0004b4db) list_double_time_pane_vc_t4_ParamLimits

0xc6e4,	// (0x0004b4db) list_double_time_pane_vc_t4

0x0003,

0xfa59,	// (0x0004e850) list_double_time_pane_vc_t_ParamLimits

0xfa59,	// (0x0004e850) list_double_time_pane_vc_t

0xbbfc,	// (0x0004a9f3) list_double_pane_vc_g1_ParamLimits

0xbbfc,	// (0x0004a9f3) list_double_pane_vc_g1

0xbc08,	// (0x0004a9ff) list_double_pane_vc_g2_ParamLimits

0xbc08,	// (0x0004a9ff) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e3cf) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e3cf) list_double_pane_vc_g

0xc6f8,	// (0x0004b4ef) list_double_pane_vc_t1_ParamLimits

0xc6f8,	// (0x0004b4ef) list_double_pane_vc_t1

0xc70c,	// (0x0004b503) list_double_pane_vc_t2_ParamLimits

0xc70c,	// (0x0004b503) list_double_pane_vc_t2

0x0001,

0xfa62,	// (0x0004e859) list_double_pane_vc_t_ParamLimits

0xfa62,	// (0x0004e859) list_double_pane_vc_t

0xbbfc,	// (0x0004a9f3) list_double_number_pane_vc_g1_ParamLimits

0xbbfc,	// (0x0004a9f3) list_double_number_pane_vc_g1

0xbc08,	// (0x0004a9ff) list_double_number_pane_vc_g2_ParamLimits

0xbc08,	// (0x0004a9ff) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e3cf) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e3cf) list_double_number_pane_vc_g

0xc724,	// (0x0004b51b) list_double_number_pane_vc_t1_ParamLimits

0xc724,	// (0x0004b51b) list_double_number_pane_vc_t1

0xc736,	// (0x0004b52d) list_double_number_pane_vc_t2_ParamLimits

0xc736,	// (0x0004b52d) list_double_number_pane_vc_t2

0xc70c,	// (0x0004b503) list_double_number_pane_vc_t3_ParamLimits

0xc70c,	// (0x0004b503) list_double_number_pane_vc_t3

0x0002,

0xfa67,	// (0x0004e85e) list_double_number_pane_vc_t_ParamLimits

0xfa67,	// (0x0004e85e) list_double_number_pane_vc_t

0xc74a,	// (0x0004b541) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc74a,	// (0x0004b541) list_double_large_graphic_pane_vc_g1

0xc756,	// (0x0004b54d) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc756,	// (0x0004b54d) list_double_large_graphic_pane_vc_g2

0xc62a,	// (0x0004b421) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc62a,	// (0x0004b421) list_double_large_graphic_pane_vc_g3

0xc765,	// (0x0004b55c) list_double_large_graphic_pane_vc_g4_ParamLimits

0xc765,	// (0x0004b55c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6e,	// (0x0004e865) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x0004e865) list_double_large_graphic_pane_vc_g

0xc771,	// (0x0004b568) list_double_large_graphic_pane_vc_t1_ParamLimits

0xc771,	// (0x0004b568) list_double_large_graphic_pane_vc_t1

0xc785,	// (0x0004b57c) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc785,	// (0x0004b57c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa77,	// (0x0004e86e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa77,	// (0x0004e86e) list_double_large_graphic_pane_vc_t

0xbbfc,	// (0x0004a9f3) list_double_heading_pane_vc_g1_ParamLimits

0xbbfc,	// (0x0004a9f3) list_double_heading_pane_vc_g1

0xbc08,	// (0x0004a9ff) list_double_heading_pane_vc_g2_ParamLimits

0xbc08,	// (0x0004a9ff) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e3cf) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e3cf) list_double_heading_pane_vc_g

0xc79e,	// (0x0004b595) list_double_heading_pane_vc_t1_ParamLimits

0xc79e,	// (0x0004b595) list_double_heading_pane_vc_t1

0xc35f,	// (0x0004b156) list_double_heading_pane_vc_t2_ParamLimits

0xc35f,	// (0x0004b156) list_double_heading_pane_vc_t2

0x0001,

0xfa7c,	// (0x0004e873) list_double_heading_pane_vc_t_ParamLimits

0xfa7c,	// (0x0004e873) list_double_heading_pane_vc_t

0xc33d,	// (0x0004b134) list_double_graphic_pane_vc_g1_ParamLimits

0xc33d,	// (0x0004b134) list_double_graphic_pane_vc_g1

0xc7b2,	// (0x0004b5a9) list_double_graphic_pane_vc_g2_ParamLimits

0xc7b2,	// (0x0004b5a9) list_double_graphic_pane_vc_g2

0x6c4f,	// (0x00045a46) list_double_graphic_pane_vc_g3_ParamLimits

0x6c4f,	// (0x00045a46) list_double_graphic_pane_vc_g3

0x0002,

0xfa81,	// (0x0004e878) list_double_graphic_pane_vc_g_ParamLimits

0xfa81,	// (0x0004e878) list_double_graphic_pane_vc_g

0xc7c1,	// (0x0004b5b8) list_double_graphic_pane_vc_t1_ParamLimits

0xc7c1,	// (0x0004b5b8) list_double_graphic_pane_vc_t1

0xc7d5,	// (0x0004b5cc) list_double_graphic_pane_vc_t2_ParamLimits

0xc7d5,	// (0x0004b5cc) list_double_graphic_pane_vc_t2

0x0001,

0xfa88,	// (0x0004e87f) list_double_graphic_pane_vc_t_ParamLimits

0xfa88,	// (0x0004e87f) list_double_graphic_pane_vc_t

0x92cb,	// (0x000480c2) aid_size_cell_fastswap

0x92d3,	// (0x000480ca) aid_size_cell_touch_ParamLimits

0x92d3,	// (0x000480ca) aid_size_cell_touch

0x9538,	// (0x0004832f) popup_fast_swap_wide_window_ParamLimits

0x9538,	// (0x0004832f) popup_fast_swap_wide_window

0x963e,	// (0x00048435) touch_pane_ParamLimits

0x963e,	// (0x00048435) touch_pane

0x46a6,	// (0x0004349d) button_value_adjust_pane_cp2

0xbd7b,	// (0x0004ab72) button_value_adjust_pane_cp4

0xbd9d,	// (0x0004ab94) form_field_data_pane_cp2

0xbdbc,	// (0x0004abb3) form_field_data_wide_pane_cp2

0x4ac7,	// (0x000438be) bg_scroll_pane_ParamLimits

0x9c88,	// (0x00048a7f) scroll_handle_pane_ParamLimits

0x9c9c,	// (0x00048a93) scroll_sc2_down_pane_ParamLimits

0x9c9c,	// (0x00048a93) scroll_sc2_down_pane

0x4af8,	// (0x000438ef) scroll_sc2_up_pane_ParamLimits

0x4af8,	// (0x000438ef) scroll_sc2_up_pane

0xd79e,	// (0x0004c595) grid_wheel_folder_pane_g1_ParamLimits

0xd79e,	// (0x0004c595) grid_wheel_folder_pane_g1

0x9e58,	// (0x00048c4f) clock_nsta_pane_cp2_ParamLimits

0x9e58,	// (0x00048c4f) clock_nsta_pane_cp2

0xc037,	// (0x0004ae2e) listscroll_midp_pane_ParamLimits

0xc25b,	// (0x0004b052) midp_canvas_pane

0x53e2,	// (0x000441d9) nsta_clock_indic_pane

0x5412,	// (0x00044209) listscroll_form_pane_vc

0x541a,	// (0x00044211) listscroll_set_pane_vc_ParamLimits

0x541a,	// (0x00044211) listscroll_set_pane_vc

0xcf6d,	// (0x0004bd64) clock_nsta_pane

0xcf7a,	// (0x0004bd71) indicator_nsta_pane

0x555a,	// (0x00044351) bg_popup_sub_pane_cp2_ParamLimits

0x556e,	// (0x00044365) find_pane_cp2_ParamLimits

0x556e,	// (0x00044365) find_pane_cp2

0x5584,	// (0x0004437b) grid_toobar_pane_ParamLimits

0x5664,	// (0x0004445b) list_form_gen_pane_vc_ParamLimits

0x5664,	// (0x0004445b) list_form_gen_pane_vc

0x567a,	// (0x00044471) scroll_pane_cp8_vc_ParamLimits

0x567a,	// (0x00044471) scroll_pane_cp8_vc

0x56ca,	// (0x000444c1) data_form_wide_pane_vc_ParamLimits

0x56ca,	// (0x000444c1) data_form_wide_pane_vc

0x56d6,	// (0x000444cd) form_field_data_wide_pane_vc_g1

0x56de,	// (0x000444d5) form_field_data_wide_pane_vc_t1_ParamLimits

0x56de,	// (0x000444d5) form_field_data_wide_pane_vc_t1

0x46ba,	// (0x000434b1) input_focus_pane_cp6_vc_ParamLimits

0x46ba,	// (0x000434b1) input_focus_pane_cp6_vc

0xd2d3,	// (0x0004c0ca) list_midp_pane_ParamLimits

0xd2df,	// (0x0004c0d6) scroll_pane_cp16_ParamLimits

0xd2df,	// (0x0004c0d6) scroll_pane_cp16

0x5974,	// (0x0004476b) button_value_adjust_pane_ParamLimits

0x5974,	// (0x0004476b) button_value_adjust_pane

0xd454,	// (0x0004c24b) button_value_adjust_pane_cp6_ParamLimits

0xd454,	// (0x0004c24b) button_value_adjust_pane_cp6

0xd57a,	// (0x0004c371) settings_code_pane_cp_ParamLimits

0xd57a,	// (0x0004c371) settings_code_pane_cp

0x23b4,	// (0x000411ab) cell_touch_pane_g1

0x23b4,	// (0x000411ab) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0004e505) cell_touch_pane_g

0xd667,	// (0x0004c45e) cell_touch_pane_cp_ParamLimits

0xd667,	// (0x0004c45e) cell_touch_pane_cp

0xd677,	// (0x0004c46e) cell_touch_pane_ParamLimits

0xd677,	// (0x0004c46e) cell_touch_pane

0x23b4,	// (0x000411ab) scroll_sc2_down_pane_g1

0x23b4,	// (0x000411ab) scroll_sc2_up_pane_g1

0x23be,	// (0x000411b5) bg_set_opt_pane_cp4_vc

0x6c43,	// (0x00045a3a) list_set_graphic_pane_vc_g1_ParamLimits

0x6c43,	// (0x00045a3a) list_set_graphic_pane_vc_g1

0x6c4f,	// (0x00045a46) list_set_graphic_pane_vc_g2_ParamLimits

0x6c4f,	// (0x00045a46) list_set_graphic_pane_vc_g2

0x0001,

0xf9fe,	// (0x0004e7f5) list_set_graphic_pane_vc_g_ParamLimits

0xf9fe,	// (0x0004e7f5) list_set_graphic_pane_vc_g

0x6c5b,	// (0x00045a52) text_primary_small_cp13_vc_ParamLimits

0x6c5b,	// (0x00045a52) text_primary_small_cp13_vc

0x658d,	// (0x00045384) list_set_graphic_pane_vc_ParamLimits

0x658d,	// (0x00045384) list_set_graphic_pane_vc

0x23be,	// (0x000411b5) input_focus_pane_cp2_vc

0x23b4,	// (0x000411ab) setting_code_pane_vc_g1

0x2441,	// (0x00041238) setting_code_pane_vc_t1

0x6c73,	// (0x00045a6a) set_text_pane_vc_t1_ParamLimits

0x6c73,	// (0x00045a6a) set_text_pane_vc_t1

0x23be,	// (0x000411b5) input_focus_pane_cp1_vc

0x6c90,	// (0x00045a87) list_set_text_pane_vc

0x23b4,	// (0x000411ab) setting_text_pane_vc_g1

0x23be,	// (0x000411b5) bg_set_opt_pane_cp2_vc

0x2438,	// (0x0004122f) setting_slider_graphic_pane_vc_g1

0x6c9a,	// (0x00045a91) setting_slider_graphic_pane_vc_t1

0x6caa,	// (0x00045aa1) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa03,	// (0x0004e7fa) setting_slider_graphic_pane_vc_t

0x6cba,	// (0x00045ab1) slider_set_pane_cp_vc

0x6cc2,	// (0x00045ab9) slider_set_pane_vc_g1

0x6ccb,	// (0x00045ac2) slider_set_pane_vc_g2

0x0006,

0xfa08,	// (0x0004e7ff) slider_set_pane_vc_g

0x4709,	// (0x00043500) set_opt_bg_pane_g1_copy1

0x4711,	// (0x00043508) set_opt_bg_pane_g2_copy1

0x6cf7,	// (0x00045aee) set_opt_bg_pane_g3_copy1

0x4721,	// (0x00043518) set_opt_bg_pane_g4_copy1

0x4729,	// (0x00043520) set_opt_bg_pane_g5_copy1

0x4731,	// (0x00043528) set_opt_bg_pane_g6_copy1

0x6cff,	// (0x00045af6) set_opt_bg_pane_g7_copy1

0x6d09,	// (0x00045b00) set_opt_bg_pane_g8_copy1

0x6d11,	// (0x00045b08) set_opt_bg_pane_g9_copy1

0x23be,	// (0x000411b5) bg_set_opt_pane_cp_vc

0x6d19,	// (0x00045b10) setting_slider_pane_vc_t1

0x6d28,	// (0x00045b1f) setting_slider_pane_vc_t2

0x6d38,	// (0x00045b2f) setting_slider_pane_vc_t3

0x0002,

0xfa17,	// (0x0004e80e) setting_slider_pane_vc_t

0x6d48,	// (0x00045b3f) slider_set_pane_vc

0xa7c0,	// (0x000495b7) volume_set_pane_vc_g1

0xaaaf,	// (0x000498a6) volume_set_pane_vc_g2

0xaab8,	// (0x000498af) volume_set_pane_vc_g3

0xaac1,	// (0x000498b8) volume_set_pane_vc_g4

0xaaca,	// (0x000498c1) volume_set_pane_vc_g5

0xaad3,	// (0x000498ca) volume_set_pane_vc_g6

0xa7ed,	// (0x000495e4) volume_set_pane_vc_g7

0xaadc,	// (0x000498d3) volume_set_pane_vc_g8

0xaae5,	// (0x000498dc) volume_set_pane_vc_g9

0xaaee,	// (0x000498e5) volume_set_pane_vc_g10

0x0009,

0xfa1e,	// (0x0004e815) volume_set_pane_vc_g

0x6d50,	// (0x00045b47) volume_set_pane_vc

0x6d58,	// (0x00045b4f) button_value_adjust_pane_cp1_vc

0x6d62,	// (0x00045b59) list_highlight_pane_cp2_vc

0x6d6b,	// (0x00045b62) list_set_pane_vc_ParamLimits

0x6d6b,	// (0x00045b62) list_set_pane_vc

0x6dc9,	// (0x00045bc0) main_pane_set_vc_t1_ParamLimits

0x6dc9,	// (0x00045bc0) main_pane_set_vc_t1

0x6dde,	// (0x00045bd5) main_pane_set_vc_t2_ParamLimits

0x6dde,	// (0x00045bd5) main_pane_set_vc_t2

0x6df0,	// (0x00045be7) main_pane_set_vc_t3_ParamLimits

0x6df0,	// (0x00045be7) main_pane_set_vc_t3

0x6e02,	// (0x00045bf9) main_pane_set_vc_t4_ParamLimits

0x6e02,	// (0x00045bf9) main_pane_set_vc_t4

0x0003,

0xfa33,	// (0x0004e82a) main_pane_set_vc_t_ParamLimits

0xfa33,	// (0x0004e82a) main_pane_set_vc_t

0x6e14,	// (0x00045c0b) setting_code_pane_vc_ParamLimits

0x6e14,	// (0x00045c0b) setting_code_pane_vc

0x6e23,	// (0x00045c1a) setting_slider_graphic_pane_vc

0x6e23,	// (0x00045c1a) setting_slider_pane_vc

0x6e23,	// (0x00045c1a) setting_text_pane_vc

0x6e23,	// (0x00045c1a) setting_volume_pane_vc

0x6e2b,	// (0x00045c22) scroll_pane_cp121_vc

0x4694,	// (0x0004348b) set_content_pane_vc

0x6e33,	// (0x00045c2a) button_value_adjust_pane_g1

0x6e3c,	// (0x00045c33) button_value_adjust_pane_g2

0x0001,

0xfa8d,	// (0x0004e884) button_value_adjust_pane_g

0x6e45,	// (0x00045c3c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6e45,	// (0x00045c3c) form_field_slider_wide_pane_vc_t1

0x6e59,	// (0x00045c50) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6e59,	// (0x00045c50) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa92,	// (0x0004e889) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x0004e889) form_field_slider_wide_pane_vc_t

0x240c,	// (0x00041203) input_focus_pane_cp10_vc_ParamLimits

0x240c,	// (0x00041203) input_focus_pane_cp10_vc

0x6e85,	// (0x00045c7c) slider_cont_pane_cp1_vc_ParamLimits

0x6e85,	// (0x00045c7c) slider_cont_pane_cp1_vc

0x6e95,	// (0x00045c8c) slider_form_pane_g1_cp2

0x6ccb,	// (0x00045ac2) slider_form_pane_g2_cp2

0x6ec2,	// (0x00045cb9) form_field_slider_pane_vc_t3

0x6ed0,	// (0x00045cc7) form_field_slider_pane_vc_t4

0x6ede,	// (0x00045cd5) slider_form_pane_vc_ParamLimits

0x6ede,	// (0x00045cd5) slider_form_pane_vc

0x6eeb,	// (0x00045ce2) form_field_slider_pane_vc_t1_ParamLimits

0x6eeb,	// (0x00045ce2) form_field_slider_pane_vc_t1

0x6e59,	// (0x00045c50) form_field_slider_pane_vc_t2_ParamLimits

0x6e59,	// (0x00045c50) form_field_slider_pane_vc_t2

0x0001,

0xfaa4,	// (0x0004e89b) form_field_slider_pane_vc_t_ParamLimits

0xfaa4,	// (0x0004e89b) form_field_slider_pane_vc_t

0x240c,	// (0x00041203) input_focus_pane_cp9_vc_ParamLimits

0x240c,	// (0x00041203) input_focus_pane_cp9_vc

0x6f07,	// (0x00045cfe) slider_cont_pane_vc_ParamLimits

0x6f07,	// (0x00045cfe) slider_cont_pane_vc

0x6f19,	// (0x00045d10) list_form_graphic_pane_cp_vc_ParamLimits

0x6f19,	// (0x00045d10) list_form_graphic_pane_cp_vc

0x56d6,	// (0x000444cd) form_field_popup_wide_pane_vc_g1

0x6f2e,	// (0x00045d25) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6f2e,	// (0x00045d25) form_field_popup_wide_pane_vc_t1

0x46ba,	// (0x000434b1) input_focus_pane_cp8_vc_ParamLimits

0x46ba,	// (0x000434b1) input_focus_pane_cp8_vc

0x6f73,	// (0x00045d6a) list_form_wide_pane_vc_ParamLimits

0x6f73,	// (0x00045d6a) list_form_wide_pane_vc

0x6f7f,	// (0x00045d76) list_form_graphic_pane_vc_g1

0x6f87,	// (0x00045d7e) list_form_graphic_pane_vc_t1_ParamLimits

0x6f87,	// (0x00045d7e) list_form_graphic_pane_vc_t1

0x242a,	// (0x00041221) list_highlight_pane_cp5_vc_ParamLimits

0x242a,	// (0x00041221) list_highlight_pane_cp5_vc

0x6fa3,	// (0x00045d9a) list_form_graphic_pane_vc_ParamLimits

0x6fa3,	// (0x00045d9a) list_form_graphic_pane_vc

0x56d6,	// (0x000444cd) form_field_popup_pane_vc_g1

0x6fb9,	// (0x00045db0) form_field_popup_pane_vc_t1_ParamLimits

0x6fb9,	// (0x00045db0) form_field_popup_pane_vc_t1

0x46ba,	// (0x000434b1) input_focus_pane_cp7_vc_ParamLimits

0x46ba,	// (0x000434b1) input_focus_pane_cp7_vc

0x6fd0,	// (0x00045dc7) list_form_pane_vc_ParamLimits

0x6fd0,	// (0x00045dc7) list_form_pane_vc

0x6fdc,	// (0x00045dd3) data_form_pane_vc_t1_ParamLimits

0x6fdc,	// (0x00045dd3) data_form_pane_vc_t1

0x4709,	// (0x00043500) input_focus_pane_vc_g1

0x4711,	// (0x00043508) input_focus_pane_vc_g2

0x4719,	// (0x00043510) input_focus_pane_vc_g3

0x4721,	// (0x00043518) input_focus_pane_vc_g4

0x4729,	// (0x00043520) input_focus_pane_vc_g5

0x4731,	// (0x00043528) input_focus_pane_vc_g6

0x4739,	// (0x00043530) input_focus_pane_vc_g7

0x4741,	// (0x00043538) input_focus_pane_vc_g8

0x4749,	// (0x00043540) input_focus_pane_vc_g9

0x23b4,	// (0x000411ab) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0004e48e) input_focus_pane_vc_g

0x56ca,	// (0x000444c1) data_form_pane_vc_ParamLimits

0x56ca,	// (0x000444c1) data_form_pane_vc

0x56d6,	// (0x000444cd) form_field_data_pane_vc_g1

0x6ff7,	// (0x00045dee) form_field_data_pane_vc_t1_ParamLimits

0x6ff7,	// (0x00045dee) form_field_data_pane_vc_t1

0x46ba,	// (0x000434b1) input_focus_pane_vc_ParamLimits

0x46ba,	// (0x000434b1) input_focus_pane_vc

0x7011,	// (0x00045e08) button_value_adjust_pane_cp3_vc

0x7019,	// (0x00045e10) button_value_adjust_pane_cp5_vc

0x7021,	// (0x00045e18) form_field_data_pane_vc_ParamLimits

0x7021,	// (0x00045e18) form_field_data_pane_vc

0x7038,	// (0x00045e2f) form_field_data_pane_vc_cp2

0x7040,	// (0x00045e37) form_field_data_wide_pane_vc_ParamLimits

0x7040,	// (0x00045e37) form_field_data_wide_pane_vc

0x7056,	// (0x00045e4d) form_field_data_wide_pane_vc_cp2

0x705e,	// (0x00045e55) form_field_popup_pane_vc_ParamLimits

0x705e,	// (0x00045e55) form_field_popup_pane_vc

0x7075,	// (0x00045e6c) form_field_popup_wide_pane_vc_ParamLimits

0x7075,	// (0x00045e6c) form_field_popup_wide_pane_vc

0x708b,	// (0x00045e82) form_field_slider_pane_vc_ParamLimits

0x708b,	// (0x00045e82) form_field_slider_pane_vc

0x709e,	// (0x00045e95) form_field_slider_wide_pane_vc_ParamLimits

0x709e,	// (0x00045e95) form_field_slider_wide_pane_vc

0xd688,	// (0x0004c47f) grid_touch_1_pane_ParamLimits

0xd688,	// (0x0004c47f) grid_touch_1_pane

0xd694,	// (0x0004c48b) grid_touch_2_pane_ParamLimits

0xd694,	// (0x0004c48b) grid_touch_2_pane

0x53d4,	// (0x000441cb) touch_pane_g1_ParamLimits

0x53d4,	// (0x000441cb) touch_pane_g1

0x70bf,	// (0x00045eb6) cell_app_pane_cp_wide_ParamLimits

0x70bf,	// (0x00045eb6) cell_app_pane_cp_wide

0x70d0,	// (0x00045ec7) grid_popup_fast_wide_pane_ParamLimits

0x70d0,	// (0x00045ec7) grid_popup_fast_wide_pane

0x70e4,	// (0x00045edb) scroll_pane_cp19_ParamLimits

0x70e4,	// (0x00045edb) scroll_pane_cp19

0x23be,	// (0x000411b5) bg_popup_window_pane_cp20

0x70f8,	// (0x00045eef) listscroll_popup_fast_wide_pane

0x242a,	// (0x00041221) grid_indicator_nsta_pane

0x7100,	// (0x00045ef7) clock_nsta_pane_g1

0x7109,	// (0x00045f00) clock_nsta_pane_t1

0xd6ac,	// (0x0004c4a3) cell_indicator_nsta_pane_ParamLimits

0xd6ac,	// (0x0004c4a3) cell_indicator_nsta_pane

0x70b1,	// (0x00045ea8) cell_indicator_nsta_pane_g1

0xd6e4,	// (0x0004c4db) cell_indicator_nsta_pane_g2

0x0001,

0xfab5,	// (0x0004e8ac) cell_indicator_nsta_pane_g

0x7125,	// (0x00045f1c) clock_nsta_pane_cp

0x712d,	// (0x00045f24) indicator_nsta_pane_cp

0x7135,	// (0x00045f2c) nsta_clock_indic_pane_g1

0x2466,	// (0x0004125d) grid_indicator_pane

0x4bf6,	// (0x000439ed) scroll_pane_cp29

0x9da7,	// (0x00048b9e) indicator_nsta_pane_cp2_ParamLimits

0x9da7,	// (0x00048b9e) indicator_nsta_pane_cp2

0x242a,	// (0x00041221) main_apps_wheel_pane

0x5817,	// (0x0004460e) form_midp_field_text_pane_ParamLimits

0x5946,	// (0x0004473d) scroll_bar_cp050_ParamLimits

0x7196,	// (0x00045f8d) cell_indicator_pane_ParamLimits

0x7196,	// (0x00045f8d) cell_indicator_pane

0x71b1,	// (0x00045fa8) cell_indicator_pane_g1

0xd6fa,	// (0x0004c4f1) grid_wheel_folder_pane_ParamLimits

0xd6fa,	// (0x0004c4f1) grid_wheel_folder_pane

0xd710,	// (0x0004c507) list_wheel_apps_pane_ParamLimits

0xd710,	// (0x0004c507) list_wheel_apps_pane

0xd721,	// (0x0004c518) main_apps_wheel_pane_g1_ParamLimits

0xd721,	// (0x0004c518) main_apps_wheel_pane_g1

0xd735,	// (0x0004c52c) main_apps_wheel_pane_g2_ParamLimits

0xd735,	// (0x0004c52c) main_apps_wheel_pane_g2

0x0001,

0x00f1,	// (0x0003eee8) main_apps_wheel_pane_g_ParamLimits

0x00f1,	// (0x0003eee8) main_apps_wheel_pane_g

0xd74d,	// (0x0004c544) main_apps_wheel_pane_t1_ParamLimits

0xd74d,	// (0x0004c544) main_apps_wheel_pane_t1

0xd770,	// (0x0004c567) list_wheel_apps_pane_g1

0xd778,	// (0x0004c56f) list_wheel_apps_pane_g2

0xd780,	// (0x0004c577) list_wheel_apps_pane_g3

0xd78a,	// (0x0004c581) list_wheel_apps_pane_g4

0xd794,	// (0x0004c58b) list_wheel_apps_pane_g5

0x0004,

0x00f6,	// (0x0003eeed) list_wheel_apps_pane_g

0x505a,	// (0x00043e51) navi_icon_text_pane

0xcadc,	// (0x0004b8d3) aid_fill_nsta

0x71bb,	// (0x00045fb2) navi_icon_text_pane_g1

0x71c7,	// (0x00045fbe) navi_icon_text_pane_t1

0x4efc,	// (0x00043cf3) list_set_graphic_pane_t1_ParamLimits

0x4efc,	// (0x00043cf3) list_set_graphic_pane_t1

0x605e,	// (0x00044e55) popup_midp_note_alarm_window_t6_ParamLimits

0x605e,	// (0x00044e55) popup_midp_note_alarm_window_t6

0x6070,	// (0x00044e67) popup_midp_note_alarm_window_t7_ParamLimits

0x6070,	// (0x00044e67) popup_midp_note_alarm_window_t7

0x6082,	// (0x00044e79) popup_midp_note_alarm_window_t8_ParamLimits

0x6082,	// (0x00044e79) popup_midp_note_alarm_window_t8

0x6094,	// (0x00044e8b) popup_midp_note_alarm_window_t9_ParamLimits

0x6094,	// (0x00044e8b) popup_midp_note_alarm_window_t9

0x60a6,	// (0x00044e9d) popup_midp_note_alarm_window_t10_ParamLimits

0x60a6,	// (0x00044e9d) popup_midp_note_alarm_window_t10

0x60b8,	// (0x00044eaf) popup_midp_note_alarm_window_t11_ParamLimits

0x60b8,	// (0x00044eaf) popup_midp_note_alarm_window_t11

0x60ca,	// (0x00044ec1) scroll_pane_cp17_ParamLimits

0x60ca,	// (0x00044ec1) scroll_pane_cp17

0xa7c0,	// (0x000495b7) volume_small_pane_cp_g1

0xaaf7,	// (0x000498ee) volume_small_pane_cp_g2

0xab00,	// (0x000498f7) volume_small_pane_cp_g3

0xa7d2,	// (0x000495c9) volume_small_pane_cp_g4

0xab09,	// (0x00049900) volume_small_pane_cp_g5

0xaaca,	// (0x000498c1) volume_small_pane_cp_g6

0xa7e4,	// (0x000495db) volume_small_pane_cp_g7

0xab12,	// (0x00049909) volume_small_pane_cp_g8

0xab1b,	// (0x00049912) volume_small_pane_cp_g9

0xa7f6,	// (0x000495ed) volume_small_pane_cp_g10

0x51f8,	// (0x00043fef) midp_ticker_pane_g1_ParamLimits

0x5204,	// (0x00043ffb) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0004e55a) midp_ticker_pane_g_ParamLimits

0x5210,	// (0x00044007) midp_ticker_pane_t1_ParamLimits

0xcaf2,	// (0x0004b8e9) aid_fill_nsta_2

0x5932,	// (0x00044729) list_form2_midp_pane

0x67a4,	// (0x0004559b) midp_editing_number_pane_ParamLimits

0x67b3,	// (0x000455aa) midp_ticker_pane_ParamLimits

0x71d9,	// (0x00045fd0) form2_midp_field_pane

0x71e1,	// (0x00045fd8) scroll_pane_cp51

0x7201,	// (0x00045ff8) form2_midp_button_pane_ParamLimits

0x7201,	// (0x00045ff8) form2_midp_button_pane

0x7213,	// (0x0004600a) form2_midp_content_pane_ParamLimits

0x7213,	// (0x0004600a) form2_midp_content_pane

0x722d,	// (0x00046024) form2_midp_field_choice_group_pane

0x7235,	// (0x0004602c) form2_midp_field_pane_g1

0x723d,	// (0x00046034) form2_midp_field_pane_g2

0x7245,	// (0x0004603c) form2_midp_field_pane_g3

0x724d,	// (0x00046044) form2_midp_field_pane_g4

0x0003,

0xfae6,	// (0x0004e8dd) form2_midp_field_pane_g

0x7255,	// (0x0004604c) form2_midp_gauge_slider_pane

0x725d,	// (0x00046054) form2_midp_gauge_wait_pane

0x7265,	// (0x0004605c) form2_midp_image_pane_ParamLimits

0x7265,	// (0x0004605c) form2_midp_image_pane

0x7280,	// (0x00046077) form2_midp_label_pane_ParamLimits

0x7280,	// (0x00046077) form2_midp_label_pane

0xd7d3,	// (0x0004c5ca) form2_midp_label_pane_cp_ParamLimits

0xd7d3,	// (0x0004c5ca) form2_midp_label_pane_cp

0x7299,	// (0x00046090) form2_midp_string_pane_ParamLimits

0x7299,	// (0x00046090) form2_midp_string_pane

0xc7ed,	// (0x0004b5e4) form2_midp_text_pane_ParamLimits

0xc7ed,	// (0x0004b5e4) form2_midp_text_pane

0x72ab,	// (0x000460a2) form2_midp_time_pane

0x72bb,	// (0x000460b2) input_focus_pane_cp51_ParamLimits

0x72bb,	// (0x000460b2) input_focus_pane_cp51

0x72d3,	// (0x000460ca) form2_midp_label_pane_t1_ParamLimits

0x72d3,	// (0x000460ca) form2_midp_label_pane_t1

0xc808,	// (0x0004b5ff) form2_mdip_text_pane_t1_ParamLimits

0xc808,	// (0x0004b5ff) form2_mdip_text_pane_t1

0xc824,	// (0x0004b61b) form2_midp_time_pane_t1

0x731b,	// (0x00046112) form2_midp_gauge_slider_pane_t1

0xd7f4,	// (0x0004c5eb) form2_midp_gauge_slider_pane_t2

0xd806,	// (0x0004c5fd) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaef,	// (0x0004e8e6) form2_midp_gauge_slider_pane_t

0x732d,	// (0x00046124) form2_midp_slider_pane

0x7339,	// (0x00046130) form2_midp_gauge_wait_pane_t1

0x7347,	// (0x0004613e) form2_midp_wait_pane_ParamLimits

0x7347,	// (0x0004613e) form2_midp_wait_pane

0xd818,	// (0x0004c60f) list_single_2graphic_pane_cp4_ParamLimits

0xd818,	// (0x0004c60f) list_single_2graphic_pane_cp4

0xd214,	// (0x0004c00b) list_single_midp_graphic_pane_cp_ParamLimits

0xd214,	// (0x0004c00b) list_single_midp_graphic_pane_cp

0x23be,	// (0x000411b5) list_highlight_pane_cp20

0x7373,	// (0x0004616a) list_single_2graphic_pane_g1_cp4

0x6b48,	// (0x0004593f) list_single_2graphic_pane_g2_cp4

0x737b,	// (0x00046172) list_single_2graphic_pane_t1_cp4

0x242a,	// (0x00041221) list_highlight_pane_cp21

0x738a,	// (0x00046181) list_single_midp_graphic_pane_g4_cp

0x7399,	// (0x00046190) list_single_midp_graphic_pane_t1_cp

0xd846,	// (0x0004c63d) form2_mdip_string_pane_t1_ParamLimits

0xd846,	// (0x0004c63d) form2_mdip_string_pane_t1

0x23be,	// (0x000411b5) bg_wml_button_pane_cp2

0x23b4,	// (0x000411ab) form2_midp_image_pane_g1

0xbc6a,	// (0x0004aa61) list_double_large_graphic_pane_g5_ParamLimits

0xbc6a,	// (0x0004aa61) list_double_large_graphic_pane_g5

0xc037,	// (0x0004ae2e) midp_form_pane_ParamLimits

0x242a,	// (0x00041221) main_apps_wheel_pane_ParamLimits

0xa474,	// (0x0004926b) popup_preview_window_ParamLimits

0xa474,	// (0x0004926b) popup_preview_window

0xa62b,	// (0x00049422) popup_touch_info_window_ParamLimits

0xa62b,	// (0x00049422) popup_touch_info_window

0xa649,	// (0x00049440) popup_touch_menu_window_ParamLimits

0xa649,	// (0x00049440) popup_touch_menu_window

0x23aa,	// (0x000411a1) bg_popup_sub_pane_cp6

0x73ae,	// (0x000461a5) list_touch_menu_pane

0x73b6,	// (0x000461ad) list_single_touch_menu_pane_ParamLimits

0x73b6,	// (0x000461ad) list_single_touch_menu_pane

0x73ca,	// (0x000461c1) list_single_touch_menu_pane_t1

0x242a,	// (0x00041221) bg_popup_sub_pane_cp7_ParamLimits

0x242a,	// (0x00041221) bg_popup_sub_pane_cp7

0x73d8,	// (0x000461cf) heading_sub_pane

0x73e0,	// (0x000461d7) list_touch_info_pane_ParamLimits

0x73e0,	// (0x000461d7) list_touch_info_pane

0x73ef,	// (0x000461e6) list_single_touch_info_pane_ParamLimits

0x73ef,	// (0x000461e6) list_single_touch_info_pane

0x7401,	// (0x000461f8) list_single_touch_info_pane_t1

0x740f,	// (0x00046206) list_single_touch_info_pane_t2

0x0001,

0xfafd,	// (0x0004e8f4) list_single_touch_info_pane_t

0x51ce,	// (0x00043fc5) bg_popup_heading_pane_cp

0x741d,	// (0x00046214) heading_sub_pane_t1

0x5690,	// (0x00044487) bg_popup_preview_window_pane_cp_ParamLimits

0x5690,	// (0x00044487) bg_popup_preview_window_pane_cp

0x73d8,	// (0x000461cf) heading_preview_pane

0x73e0,	// (0x000461d7) list_preview_pane_ParamLimits

0x73e0,	// (0x000461d7) list_preview_pane

0x742b,	// (0x00046222) popup_preview_window_g1

0x73ef,	// (0x000461e6) list_single_preview_pane_ParamLimits

0x73ef,	// (0x000461e6) list_single_preview_pane

0x7433,	// (0x0004622a) list_single_preview_pane_g1

0x743b,	// (0x00046232) list_single_preview_pane_t1

0x7401,	// (0x000461f8) list_single_preview_pane_t2

0x0001,

0xfb02,	// (0x0004e8f9) list_single_preview_pane_t

0x7449,	// (0x00046240) bg_popup_heading_pane_cp2_ParamLimits

0x7449,	// (0x00046240) bg_popup_heading_pane_cp2

0x745f,	// (0x00046256) heading_preview_pane_g1

0x7467,	// (0x0004625e) heading_preview_pane_t1_ParamLimits

0x7467,	// (0x0004625e) heading_preview_pane_t1

0x247d,	// (0x00041274) soft_indicator_pane_t1_ParamLimits

0x2f12,	// (0x00041d09) scroll_pane_ParamLimits

0x4aef,	// (0x000438e6) scroll_sc2_left_pane

0x4ae6,	// (0x000438dd) scroll_sc2_right_pane

0x4b0e,	// (0x00043905) scroll_bg_pane_g1_ParamLimits

0x4b23,	// (0x0004391a) scroll_bg_pane_g2_ParamLimits

0x4b3b,	// (0x00043932) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0004e4e5) scroll_bg_pane_g_ParamLimits

0x4b0e,	// (0x00043905) scroll_handle_pane_g1_ParamLimits

0x4b5d,	// (0x00043954) scroll_handle_pane_g2_ParamLimits

0x4b3b,	// (0x00043932) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0004e4ec) scroll_handle_pane_g_ParamLimits

0xa0fb,	// (0x00048ef2) popup_choice_list_window_ParamLimits

0xa0fb,	// (0x00048ef2) popup_choice_list_window

0x5566,	// (0x0004435d) choice_list_pane

0x55e8,	// (0x000443df) cell_toolbar_pane_t1

0x5610,	// (0x00044407) toolbar_button_pane_ParamLimits

0x6504,	// (0x000452fb) ai_gene_pane_1_t2_ParamLimits

0x6504,	// (0x000452fb) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0004e70f) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0004e70f) ai_gene_pane_1_t

0x7484,	// (0x0004627b) scroll_sc2_left_pane_g1

0x7484,	// (0x0004627b) scroll_sc2_right_pane_g1

0x4813,	// (0x0004360a) bg_popup_sub_pane_cp10

0x748e,	// (0x00046285) list_choice_list_pane

0x74a7,	// (0x0004629e) list_single_choice_list_pane_ParamLimits

0x74a7,	// (0x0004629e) list_single_choice_list_pane

0x74ba,	// (0x000462b1) list_single_choice_list_pane_g1

0x47fe,	// (0x000435f5) list_single_choice_list_pane_t1_ParamLimits

0x47fe,	// (0x000435f5) list_single_choice_list_pane_t1

0x74c2,	// (0x000462b9) choice_list_pane_g1

0x74ca,	// (0x000462c1) choice_list_pane_t1

0x23aa,	// (0x000411a1) input_focus_pane_cp11

0x4a5b,	// (0x00043852) title_pane_stacon_g2_ParamLimits

0x4a5b,	// (0x00043852) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0004e4cb) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0004e4cb) title_pane_stacon_g

0x51ce,	// (0x00043fc5) cursor_press_pane

0xa1a3,	// (0x00048f9a) popup_fep_hwr_window_ParamLimits

0xa1a3,	// (0x00048f9a) popup_fep_hwr_window

0xa21b,	// (0x00049012) popup_fep_vkb_window_ParamLimits

0xa21b,	// (0x00049012) popup_fep_vkb_window

0x74d8,	// (0x000462cf) cursor_press_pane_g1

0x0002,

0xfb2b,	// (0x0004e922) fep_vkb_side_pane_g_ParamLimits

0xab5d,	// (0x00049954) fep_hwr_candidate_pane_ParamLimits

0xab5d,	// (0x00049954) fep_hwr_candidate_pane

0xab87,	// (0x0004997e) fep_hwr_side_pane_ParamLimits

0xab87,	// (0x0004997e) fep_hwr_side_pane

0xaba7,	// (0x0004999e) fep_hwr_top_pane_ParamLimits

0xaba7,	// (0x0004999e) fep_hwr_top_pane

0xabbf,	// (0x000499b6) fep_hwr_write_pane_ParamLimits

0xabbf,	// (0x000499b6) fep_hwr_write_pane

0xfb2b,	// (0x0004e922) fep_vkb_side_pane_g

0x74f2,	// (0x000462e9) fep_hwr_top_pane_g1

0x74e0,	// (0x000462d7) fep_hwr_top_pane_g2

0xabf9,	// (0x000499f0) fep_hwr_top_pane_g3

0x0002,

0xfb07,	// (0x0004e8fe) fep_hwr_top_pane_g

0xac0e,	// (0x00049a05) fep_hwr_top_text_pane

0x4cbc,	// (0x00043ab3) fep_hwr_top_text_pane_g1

0x7528,	// (0x0004631f) fep_hwr_top_text_pane_t1

0xad04,	// (0x00049afb) fep_hwr_candidate_pane_g1

0x7653,	// (0x0004644a) fep_vkb_keypad_pane_g3_ParamLimits

0x7653,	// (0x0004644a) fep_vkb_keypad_pane_g3

0x767b,	// (0x00046472) fep_vkb_keypad_pane_g4_ParamLimits

0x767b,	// (0x00046472) fep_vkb_keypad_pane_g4

0x76ea,	// (0x000464e1) fep_vkb_bottom_pane_g2_ParamLimits

0x76ea,	// (0x000464e1) fep_vkb_bottom_pane_g2

0x0001,

0xfb32,	// (0x0004e929) fep_vkb_bottom_pane_g_ParamLimits

0xfb32,	// (0x0004e929) fep_vkb_bottom_pane_g

0x7484,	// (0x0004627b) cell_vkb_side_pane_g2

0x0001,

0xfb3c,	// (0x0004e933) cell_vkb_side_pane_g

0x772e,	// (0x00046525) cell_vkb_side_pane_t1

0x773c,	// (0x00046533) cell_vkb_side_pane_t1_copy1

0x7484,	// (0x0004627b) bg_fep_vkb_candidate_pane_g2

0x7812,	// (0x00046609) cell_vkb_candidate_pane_ParamLimits

0x7536,	// (0x0004632d) aid_size_cell_vkb_ParamLimits

0x7536,	// (0x0004632d) aid_size_cell_vkb

0x7812,	// (0x00046609) cell_vkb_candidate_pane

0xad2b,	// (0x00049b22) bg_popup_fep_shadow_pane_g1

0xd97b,	// (0x0004c772) fep_vkb_bottom_pane_ParamLimits

0xd97b,	// (0x0004c772) fep_vkb_bottom_pane

0x75c1,	// (0x000463b8) fep_vkb_candidate_pane_ParamLimits

0x75c1,	// (0x000463b8) fep_vkb_candidate_pane

0xd9a0,	// (0x0004c797) fep_vkb_keypad_pane_ParamLimits

0xd9a0,	// (0x0004c797) fep_vkb_keypad_pane

0xd9d5,	// (0x0004c7cc) fep_vkb_side_pane_ParamLimits

0xd9d5,	// (0x0004c7cc) fep_vkb_side_pane

0xda11,	// (0x0004c808) fep_vkb_top_pane_ParamLimits

0xda11,	// (0x0004c808) fep_vkb_top_pane

0x75e7,	// (0x000463de) fep_vkb_top_pane_g1_ParamLimits

0x75e7,	// (0x000463de) fep_vkb_top_pane_g1

0x75f6,	// (0x000463ed) fep_vkb_top_pane_g2_ParamLimits

0x75f6,	// (0x000463ed) fep_vkb_top_pane_g2

0x7605,	// (0x000463fc) fep_vkb_top_pane_g3_ParamLimits

0x7605,	// (0x000463fc) fep_vkb_top_pane_g3

0x0003,

0xfb22,	// (0x0004e919) fep_vkb_top_pane_g_ParamLimits

0xfb22,	// (0x0004e919) fep_vkb_top_pane_g

0x7623,	// (0x0004641a) fep_vkb_top_text_pane_ParamLimits

0x7623,	// (0x0004641a) fep_vkb_top_text_pane

0xda46,	// (0x0004c83d) fep_vkb_side_pane_g1_ParamLimits

0xda46,	// (0x0004c83d) fep_vkb_side_pane_g1

0x7642,	// (0x00046439) grid_vkb_side_pane_ParamLimits

0x7642,	// (0x00046439) grid_vkb_side_pane

0xad33,	// (0x00049b2a) bg_popup_fep_shadow_pane_g2

0xad3c,	// (0x00049b33) bg_popup_fep_shadow_pane_g3

0xad44,	// (0x00049b3b) bg_popup_fep_shadow_pane_g4

0xad4d,	// (0x00049b44) bg_popup_fep_shadow_pane_g5

0xad57,	// (0x00049b4e) bg_popup_fep_shadow_pane_g6

0xad5f,	// (0x00049b56) bg_popup_fep_shadow_pane_g7

0x4721,	// (0x00043518) bg_popup_fep_shadow_pane_g8

0x7699,	// (0x00046490) grid_vkb_keypad_number_pane_ParamLimits

0x7699,	// (0x00046490) grid_vkb_keypad_number_pane

0x76a9,	// (0x000464a0) grid_vkb_keypad_pane_ParamLimits

0x76a9,	// (0x000464a0) grid_vkb_keypad_pane

0x76cf,	// (0x000464c6) fep_vkb_bottom_pane_g1_ParamLimits

0x76cf,	// (0x000464c6) fep_vkb_bottom_pane_g1

0x76f8,	// (0x000464ef) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x76f8,	// (0x000464ef) grid_vkb_keypad_bottom_left_pane

0x770d,	// (0x00046504) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x770d,	// (0x00046504) grid_vkb_keypad_bottom_right_pane

0x7722,	// (0x00046519) fep_vkb_top_text_pane_g1

0xda90,	// (0x0004c887) fep_vkb_top_text_pane_t1

0xdaa5,	// (0x0004c89c) cell_vkb_side_pane_ParamLimits

0xdaa5,	// (0x0004c89c) cell_vkb_side_pane

0x7484,	// (0x0004627b) cell_vkb_side_pane_g1

0x774a,	// (0x00046541) cell_vkb_keypad_pane_ParamLimits

0x774a,	// (0x00046541) cell_vkb_keypad_pane

0x77bf,	// (0x000465b6) cell_vkb_keypad_pane_g1

0x0008,

0xfb4f,	// (0x0004e946) bg_popup_fep_shadow_pane_g

0xad71,	// (0x00049b68) cell_hwr_side_pane_g1

0xad71,	// (0x00049b68) cell_hwr_side_pane_g2

0x77c9,	// (0x000465c0) cell_vkb_keypad_pane_t1

0xdac8,	// (0x0004c8bf) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdac8,	// (0x0004c8bf) cell_vkb_keypad_bottom_left_pane

0xdae5,	// (0x0004c8dc) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdae5,	// (0x0004c8dc) cell_vkb_keypad_bottom_right_pane

0x7484,	// (0x0004627b) cell_vkb_keypad_bottom_left_pane_g1

0x7484,	// (0x0004627b) cell_vkb_keypad_bottom_right_pane_g1

0x77d7,	// (0x000465ce) cell_vkb_keypad_number_pane_ParamLimits

0x77d7,	// (0x000465ce) cell_vkb_keypad_number_pane

0x77f6,	// (0x000465ed) cell_vkb_keypad_number_pane_g1

0x7800,	// (0x000465f7) cell_vkb_keypad_number_pane_g2

0x7809,	// (0x00046600) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb41,	// (0x0004e938) cell_vkb_keypad_number_pane_g

0x77c9,	// (0x000465c0) cell_vkb_keypad_number_pane_t1

0x782d,	// (0x00046624) fep_vkb_candidate_pane_g1

0x0001,

0xfb62,	// (0x0004e959) cell_hwr_side_pane_g

0x7846,	// (0x0004663d) cell_hwr_side_pane_t1

0xad7b,	// (0x00049b72) cell_hwr_side_pane_t1_copy1

0xad89,	// (0x00049b80) cell_hwr_candidate_pane_g1

0xadb8,	// (0x00049baf) cell_hwr_candidate_pane_t1

0x7484,	// (0x0004627b) cell_vkb_candidate_pane_g2

0x78cc,	// (0x000466c3) cell_vkb_candidate_pane_t1

0xab24,	// (0x0004991b) bg_popup_fep_shadow_pane_ParamLimits

0xab24,	// (0x0004991b) bg_popup_fep_shadow_pane

0xabd9,	// (0x000499d0) bg_fep_hwr_top_pane_g4

0x7504,	// (0x000462fb) bg_hwr_side_pane_g1_ParamLimits

0x7504,	// (0x000462fb) bg_hwr_side_pane_g1

0xac4a,	// (0x00049a41) cell_hwr_side_pane_ParamLimits

0xac4a,	// (0x00049a41) cell_hwr_side_pane

0xac85,	// (0x00049a7c) fep_hwr_write_pane_g1_ParamLimits

0xac85,	// (0x00049a7c) fep_hwr_write_pane_g1

0xac92,	// (0x00049a89) fep_hwr_write_pane_g2_ParamLimits

0xac92,	// (0x00049a89) fep_hwr_write_pane_g2

0xac9f,	// (0x00049a96) fep_hwr_write_pane_g3_ParamLimits

0xac9f,	// (0x00049a96) fep_hwr_write_pane_g3

0xacad,	// (0x00049aa4) fep_hwr_write_pane_g4_ParamLimits

0xacad,	// (0x00049aa4) fep_hwr_write_pane_g4

0x0005,

0xfb0e,	// (0x0004e905) fep_hwr_write_pane_g_ParamLimits

0xfb0e,	// (0x0004e905) fep_hwr_write_pane_g

0xabd9,	// (0x000499d0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xabd9,	// (0x000499d0) bg_fep_hwr_candidate_pane_g2

0xacc2,	// (0x00049ab9) cell_hwr_candidate_pane_ParamLimits

0xacc2,	// (0x00049ab9) cell_hwr_candidate_pane

0xad04,	// (0x00049afb) fep_hwr_candidate_pane_g1_ParamLimits

0x7564,	// (0x0004635b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7564,	// (0x0004635b) bg_popup_fep_shadow_pane_cp2

0x7615,	// (0x0004640c) fep_vkb_top_pane_g4_ParamLimits

0x7615,	// (0x0004640c) fep_vkb_top_pane_g4

0x7634,	// (0x0004642b) fep_vkb_side_pane_g2_ParamLimits

0x7634,	// (0x0004642b) fep_vkb_side_pane_g2

0xbca8,	// (0x0004aa9f) list_setting_pane_t4_ParamLimits

0xbca8,	// (0x0004aa9f) list_setting_pane_t4

0xbd42,	// (0x0004ab39) list_setting_number_pane_t5_ParamLimits

0xbd42,	// (0x0004ab39) list_setting_number_pane_t5

0xc0e7,	// (0x0004aede) list_double_heading_pane_cp2_ParamLimits

0xc0e7,	// (0x0004aede) list_double_heading_pane_cp2

0x2f46,	// (0x00041d3d) list_double_heading_pane_g1_cp2_ParamLimits

0x2f46,	// (0x00041d3d) list_double_heading_pane_g1_cp2

0x46c8,	// (0x000434bf) list_double_heading_pane_g2_cp2_ParamLimits

0x46c8,	// (0x000434bf) list_double_heading_pane_g2_cp2

0x78da,	// (0x000466d1) list_double_heading_pane_t1_cp2_ParamLimits

0x78da,	// (0x000466d1) list_double_heading_pane_t1_cp2

0x78f0,	// (0x000466e7) list_double_heading_pane_t2_cp2_ParamLimits

0x78f0,	// (0x000466e7) list_double_heading_pane_t2_cp2

0x23a2,	// (0x00041199) aid_value_unit2

0x9584,	// (0x0004837b) popup_preview_fixed_window

0x255d,	// (0x00041354) bg_popup_preview_window_pane_cp02

0x7902,	// (0x000466f9) list_preview_fixed_pane

0x7948,	// (0x0004673f) list_empty_pane_fp_ParamLimits

0x7948,	// (0x0004673f) list_empty_pane_fp

0x7948,	// (0x0004673f) list_single_cale_day_pane_fp_ParamLimits

0x7948,	// (0x0004673f) list_single_cale_day_pane_fp

0x7948,	// (0x0004673f) list_single_graphic_heading_pane_fp_ParamLimits

0x7948,	// (0x0004673f) list_single_graphic_heading_pane_fp

0x7948,	// (0x0004673f) list_single_graphic_pane_fp_ParamLimits

0x7948,	// (0x0004673f) list_single_graphic_pane_fp

0x7948,	// (0x0004673f) list_single_heading_pane_fp_ParamLimits

0x7948,	// (0x0004673f) list_single_heading_pane_fp

0x7948,	// (0x0004673f) list_single_pane_fp_ParamLimits

0x7948,	// (0x0004673f) list_single_pane_fp

0x795e,	// (0x00046755) list_single_pane_fp_g1_ParamLimits

0x795e,	// (0x00046755) list_single_pane_fp_g1

0x2f46,	// (0x00041d3d) list_single_pane_fp_g2_ParamLimits

0x2f46,	// (0x00041d3d) list_single_pane_fp_g2

0x46c8,	// (0x000434bf) list_single_pane_fp_g3_ParamLimits

0x46c8,	// (0x000434bf) list_single_pane_fp_g3

0x796a,	// (0x00046761) list_single_pane_fp_g4_ParamLimits

0x796a,	// (0x00046761) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x0004e96c) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x0004e96c) list_single_pane_fp_g

0xc837,	// (0x0004b62e) list_single_pane_fp_t1_ParamLimits

0xc837,	// (0x0004b62e) list_single_pane_fp_t1

0xc84e,	// (0x0004b645) list_single_graphic_pane_fp_g1_ParamLimits

0xc84e,	// (0x0004b645) list_single_graphic_pane_fp_g1

0x795e,	// (0x00046755) list_single_graphic_pane_fp_g2_ParamLimits

0x795e,	// (0x00046755) list_single_graphic_pane_fp_g2

0x2f46,	// (0x00041d3d) list_single_graphic_pane_fp_g3_ParamLimits

0x2f46,	// (0x00041d3d) list_single_graphic_pane_fp_g3

0x46c8,	// (0x000434bf) list_single_graphic_pane_fp_g4_ParamLimits

0x46c8,	// (0x000434bf) list_single_graphic_pane_fp_g4

0x796a,	// (0x00046761) list_single_graphic_pane_fp_g5_ParamLimits

0x796a,	// (0x00046761) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004e975) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004e975) list_single_graphic_pane_fp_g

0xc85a,	// (0x0004b651) list_single_graphic_pane_fp_t1_ParamLimits

0xc85a,	// (0x0004b651) list_single_graphic_pane_fp_t1

0xc84e,	// (0x0004b645) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc84e,	// (0x0004b645) list_single_graphic_heading_pane_fp_g1

0x795e,	// (0x00046755) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x795e,	// (0x00046755) list_single_graphic_heading_pane_fp_g2

0x2f46,	// (0x00041d3d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2f46,	// (0x00041d3d) list_single_graphic_heading_pane_fp_g3

0x46c8,	// (0x000434bf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x46c8,	// (0x000434bf) list_single_graphic_heading_pane_fp_g4

0x796a,	// (0x00046761) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x796a,	// (0x00046761) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004e975) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004e975) list_single_graphic_heading_pane_fp_g

0xc870,	// (0x0004b667) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc870,	// (0x0004b667) list_single_graphic_heading_pane_fp_t1

0xc886,	// (0x0004b67d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc886,	// (0x0004b67d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0004e980) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0004e980) list_single_graphic_heading_pane_fp_t

0xc898,	// (0x0004b68f) list_single_cale_day_pane_fp_g1_ParamLimits

0xc898,	// (0x0004b68f) list_single_cale_day_pane_fp_g1

0x7976,	// (0x0004676d) list_single_cale_day_pane_fp_g2_ParamLimits

0x7976,	// (0x0004676d) list_single_cale_day_pane_fp_g2

0xcb94,	// (0x0004b98b) list_single_cale_day_pane_fp_g3_ParamLimits

0xcb94,	// (0x0004b98b) list_single_cale_day_pane_fp_g3

0xcbbc,	// (0x0004b9b3) list_single_cale_day_pane_fp_g4_ParamLimits

0xcbbc,	// (0x0004b9b3) list_single_cale_day_pane_fp_g4

0xcbe0,	// (0x0004b9d7) list_single_cale_day_pane_fp_g5_ParamLimits

0xcbe0,	// (0x0004b9d7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x0004e985) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x0004e985) list_single_cale_day_pane_fp_g

0xc8d0,	// (0x0004b6c7) list_single_cale_day_pane_fp_t1_ParamLimits

0xc8d0,	// (0x0004b6c7) list_single_cale_day_pane_fp_t1

0xc8f6,	// (0x0004b6ed) list_single_cale_day_pane_fp_t2_ParamLimits

0xc8f6,	// (0x0004b6ed) list_single_cale_day_pane_fp_t2

0xc90f,	// (0x0004b706) list_single_cale_day_pane_fp_t3_ParamLimits

0xc90f,	// (0x0004b706) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x0004e990) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x0004e990) list_single_cale_day_pane_fp_t

0x795e,	// (0x00046755) list_empty_pane_fp_g1_ParamLimits

0x795e,	// (0x00046755) list_empty_pane_fp_g1

0xc928,	// (0x0004b71f) list_empty_pane_fp_t1

0xc936,	// (0x0004b72d) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x0004e997) list_empty_pane_fp_t

0x795e,	// (0x00046755) list_single_heading_pane_fp_g1_ParamLimits

0x795e,	// (0x00046755) list_single_heading_pane_fp_g1

0x2f46,	// (0x00041d3d) list_single_heading_pane_fp_g2_ParamLimits

0x2f46,	// (0x00041d3d) list_single_heading_pane_fp_g2

0x46c8,	// (0x000434bf) list_single_heading_pane_fp_g3_ParamLimits

0x46c8,	// (0x000434bf) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x0004e99c) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x0004e99c) list_single_heading_pane_fp_g

0xc944,	// (0x0004b73b) list_single_heading_pane_fp_t1_ParamLimits

0xc944,	// (0x0004b73b) list_single_heading_pane_fp_t1

0xc956,	// (0x0004b74d) list_single_heading_pane_fp_t2_ParamLimits

0xc956,	// (0x0004b74d) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0004e9a3) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0004e9a3) list_single_heading_pane_fp_t

0x48f5,	// (0x000436ec) aid_size_cell_fast

0x2540,	// (0x00041337) soft_indicator_pane_cp1_t1

0x492f,	// (0x00043726) cell_app_pane_cp2_ParamLimits

0x492f,	// (0x00043726) cell_app_pane_cp2

0xab46,	// (0x0004993d) fep_hwr_candidate_drop_down_list_pane

0xad1e,	// (0x00049b15) fep_hwr_candidate_pane_g3_ParamLimits

0xad1e,	// (0x00049b15) fep_hwr_candidate_pane_g3

0x412b,	// (0x00042f22) fep_hwr_candidate_pane_g4_ParamLimits

0x412b,	// (0x00042f22) fep_hwr_candidate_pane_g4

0x0002,

0xfb1b,	// (0x0004e912) fep_hwr_candidate_pane_g_ParamLimits

0xfb1b,	// (0x0004e912) fep_hwr_candidate_pane_g

0x75b0,	// (0x000463a7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x75b0,	// (0x000463a7) fep_vkb_candidate_drop_down_list_pane

0x7835,	// (0x0004662c) fep_vkb_candidate_pane_g3

0x783d,	// (0x00046634) fep_vkb_candidate_pane_g4

0x0002,

0xfb48,	// (0x0004e93f) fep_vkb_candidate_pane_g

0xad89,	// (0x00049b80) cell_hwr_candidate_pane_g1_ParamLimits

0xad97,	// (0x00049b8e) cell_hwr_candidate_pane_g3_ParamLimits

0xad97,	// (0x00049b8e) cell_hwr_candidate_pane_g3

0x89b8,	// (0x000477af) cell_hwr_candidate_pane_g4_ParamLimits

0x89b8,	// (0x000477af) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x0004e95e) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x0004e95e) cell_hwr_candidate_pane_g

0x7896,	// (0x0004668d) cell_vkb_candidate_pane_g3_ParamLimits

0x7896,	// (0x0004668d) cell_vkb_candidate_pane_g3

0x78b1,	// (0x000466a8) cell_vkb_candidate_pane_g4_ParamLimits

0x78b1,	// (0x000466a8) cell_vkb_candidate_pane_g4

0x7982,	// (0x00046779) cell_app_pane_cp2_g1_ParamLimits

0x7982,	// (0x00046779) cell_app_pane_cp2_g1

0x79a0,	// (0x00046797) cell_app_pane_cp2_g2_ParamLimits

0x79a0,	// (0x00046797) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0004e9a8) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0004e9a8) cell_app_pane_cp2_g

0x79ac,	// (0x000467a3) cell_app_pane_cp2_t1_ParamLimits

0x79ac,	// (0x000467a3) cell_app_pane_cp2_t1

0x46ba,	// (0x000434b1) grid_highlight_pane_cp1_ParamLimits

0x46ba,	// (0x000434b1) grid_highlight_pane_cp1

0xadd6,	// (0x00049bcd) cell_hwr_candidate_pane_cp1_ParamLimits

0xadd6,	// (0x00049bcd) cell_hwr_candidate_pane_cp1

0xad89,	// (0x00049b80) fep_hwr_candidate_drop_down_list_pane_g1

0xadf5,	// (0x00049bec) fep_hwr_candidate_drop_down_list_pane_g2

0xae02,	// (0x00049bf9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0004e9ad) fep_hwr_candidate_drop_down_list_pane_g

0xae0f,	// (0x00049c06) fep_hwr_candidate_drop_down_list_scroll_pane

0xae18,	// (0x00049c0f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xae18,	// (0x00049c0f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xae25,	// (0x00049c1c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xae25,	// (0x00049c1c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xae32,	// (0x00049c29) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xae32,	// (0x00049c29) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xae3f,	// (0x00049c36) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xae3f,	// (0x00049c36) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xae5a,	// (0x00049c51) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xae5a,	// (0x00049c51) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xae75,	// (0x00049c6c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xae75,	// (0x00049c6c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xae90,	// (0x00049c87) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xae90,	// (0x00049c87) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xaeab,	// (0x00049ca2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xaeab,	// (0x00049ca2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x0004e9b4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x0004e9b4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x79d8,	// (0x000467cf) cell_vkb_candidate_pane_cp1_ParamLimits

0x79d8,	// (0x000467cf) cell_vkb_candidate_pane_cp1

0x7615,	// (0x0004640c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7615,	// (0x0004640c) fep_vkb_candidate_drop_down_list_pane_g1

0x79be,	// (0x000467b5) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x79be,	// (0x000467b5) fep_vkb_candidate_drop_down_list_pane_g2

0x79cb,	// (0x000467c2) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x79cb,	// (0x000467c2) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbce,	// (0x0004e9c5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbce,	// (0x0004e9c5) fep_vkb_candidate_drop_down_list_pane_g

0x79f8,	// (0x000467ef) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x79f8,	// (0x000467ef) fep_vkb_candidate_drop_down_list_scroll_pane

0x7a05,	// (0x000467fc) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7a05,	// (0x000467fc) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7a12,	// (0x00046809) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7a12,	// (0x00046809) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7a1e,	// (0x00046815) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7a1e,	// (0x00046815) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7854,	// (0x0004664b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7854,	// (0x0004664b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7875,	// (0x0004666c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7875,	// (0x0004666c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7a2a,	// (0x00046821) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7a2a,	// (0x00046821) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7a4b,	// (0x00046842) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7a4b,	// (0x00046842) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7a6c,	// (0x00046863) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7a6c,	// (0x00046863) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd5,	// (0x0004e9cc) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd5,	// (0x0004e9cc) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb978,	// (0x0004a76f) title_pane_g1_ParamLimits

0xb985,	// (0x0004a77c) title_pane_g2_ParamLimits

0xf554,	// (0x0004e34b) title_pane_g_ParamLimits

0x4cb4,	// (0x00043aab) aid_call2_pane

0x4cac,	// (0x00043aa3) aid_call_pane

0x4cbc,	// (0x00043ab3) popup_clock_analogue_window_g1

0x4cbc,	// (0x00043ab3) popup_clock_analogue_window_g2

0x9cb1,	// (0x00048aa8) popup_clock_analogue_window_g3

0x9cba,	// (0x00048ab1) popup_clock_analogue_window_g4

0x23b4,	// (0x000411ab) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0004e4fa) popup_clock_analogue_window_g

0x9cc2,	// (0x00048ab9) popup_clock_analogue_window_t1

0x9cd0,	// (0x00048ac7) clock_digital_number_pane_ParamLimits

0x9cd0,	// (0x00048ac7) clock_digital_number_pane

0x9cdc,	// (0x00048ad3) clock_digital_number_pane_cp02_ParamLimits

0x9cdc,	// (0x00048ad3) clock_digital_number_pane_cp02

0x9ce8,	// (0x00048adf) clock_digital_number_pane_cp03_ParamLimits

0x9ce8,	// (0x00048adf) clock_digital_number_pane_cp03

0x9cf4,	// (0x00048aeb) clock_digital_number_pane_cp04_ParamLimits

0x9cf4,	// (0x00048aeb) clock_digital_number_pane_cp04

0x9d00,	// (0x00048af7) clock_digital_separator_pane_ParamLimits

0x9d00,	// (0x00048af7) clock_digital_separator_pane

0x9d0c,	// (0x00048b03) popup_clock_digital_window_t1_ParamLimits

0x9d0c,	// (0x00048b03) popup_clock_digital_window_t1

0x23b4,	// (0x000411ab) clock_digital_number_pane_g1

0x23b4,	// (0x000411ab) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0004e505) clock_digital_number_pane_g

0x23b4,	// (0x000411ab) clock_digital_separator_pane_g1

0x23b4,	// (0x000411ab) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0004e505) clock_digital_separator_pane_g

0xcadc,	// (0x0004b8d3) aid_fill_nsta_ParamLimits

0xcf7a,	// (0x0004bd71) indicator_nsta_pane_ParamLimits

0x550d,	// (0x00044304) popup_clock_analogue_window

0x550d,	// (0x00044304) popup_clock_digital_window

0x242a,	// (0x00041221) grid_indicator_nsta_pane_ParamLimits

0x7117,	// (0x00045f0e) clock_nsta_pane_t2

0x0001,

0xfab0,	// (0x0004e8a7) clock_nsta_pane_t

0x9c75,	// (0x00048a6c) aid_size_max_handle

0x9c7f,	// (0x00048a76) aid_size_min_handle

0x51ce,	// (0x00043fc5) editor_scroll_pane

0x7a87,	// (0x0004687e) ex_editor_pane

0x47da,	// (0x000435d1) scroll_pane_cp13

0x2f3e,	// (0x00041d35) scroll_pane_cp14

0x4ceb,	// (0x00043ae2) scroll_pane_cp36

0xc0fb,	// (0x0004aef2) list_single_graphic_hl_pane_cp2_ParamLimits

0xc0fb,	// (0x0004aef2) list_single_graphic_hl_pane_cp2

0xc526,	// (0x0004b31d) list_single_graphic_hl_pane_ParamLimits

0xc526,	// (0x0004b31d) list_single_graphic_hl_pane

0xc96c,	// (0x0004b763) aid_size_min_hl_cp1

0x7a8f,	// (0x00046886) list_highlight_pane_cp34_ParamLimits

0x7a8f,	// (0x00046886) list_highlight_pane_cp34

0x7aa0,	// (0x00046897) list_single_graphic_hl_pane_g1_ParamLimits

0x7aa0,	// (0x00046897) list_single_graphic_hl_pane_g1

0xc975,	// (0x0004b76c) list_single_graphic_hl_pane_g2_ParamLimits

0xc975,	// (0x0004b76c) list_single_graphic_hl_pane_g2

0xc975,	// (0x0004b76c) list_single_graphic_hl_pane_g3_ParamLimits

0xc975,	// (0x0004b76c) list_single_graphic_hl_pane_g3

0xbbfc,	// (0x0004a9f3) list_single_graphic_hl_pane_g4_ParamLimits

0xbbfc,	// (0x0004a9f3) list_single_graphic_hl_pane_g4

0xcc04,	// (0x0004b9fb) list_single_graphic_hl_pane_g5_ParamLimits

0xcc04,	// (0x0004b9fb) list_single_graphic_hl_pane_g5

0x0004,

0xfbe6,	// (0x0004e9dd) list_single_graphic_hl_pane_g_ParamLimits

0xfbe6,	// (0x0004e9dd) list_single_graphic_hl_pane_g

0xc981,	// (0x0004b778) list_single_graphic_hl_pane_t1_ParamLimits

0xc981,	// (0x0004b778) list_single_graphic_hl_pane_t1

0x7aad,	// (0x000468a4) aid_size_min_hl_cp2

0x7ab6,	// (0x000468ad) list_highlight_pane_cp34_cp2_ParamLimits

0x7ab6,	// (0x000468ad) list_highlight_pane_cp34_cp2

0x7aa0,	// (0x00046897) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7aa0,	// (0x00046897) list_single_graphic_hl_pane_g1_cp2

0x7ac3,	// (0x000468ba) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7ac3,	// (0x000468ba) list_single_graphic_hl_pane_g2_cp2

0x7acf,	// (0x000468c6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7acf,	// (0x000468c6) list_single_graphic_hl_pane_g3_cp2

0x2f52,	// (0x00041d49) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2f52,	// (0x00041d49) list_single_graphic_hl_pane_g4_cp2

0x7add,	// (0x000468d4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7add,	// (0x000468d4) list_single_graphic_hl_pane_g5_cp2

0x9fb7,	// (0x00048dae) control_pane_g4_ParamLimits

0x9fb7,	// (0x00048dae) control_pane_g4

0x4813,	// (0x0004360a) bg_popup_sub_pane_cp10_ParamLimits

0x748e,	// (0x00046285) list_choice_list_pane_ParamLimits

0x749d,	// (0x00046294) scroll_pane_cp23

0x255d,	// (0x00041354) bg_popup_preview_window_pane_cp02_ParamLimits

0x7902,	// (0x000466f9) list_preview_fixed_pane_ParamLimits

0x7918,	// (0x0004670f) list_preview_fixed_pane_cp_ParamLimits

0x7918,	// (0x0004670f) list_preview_fixed_pane_cp

0x7924,	// (0x0004671b) popup_preview_fixed_window_g1_ParamLimits

0x7924,	// (0x0004671b) popup_preview_fixed_window_g1

0x7930,	// (0x00046727) popup_preview_fixed_window_g2_ParamLimits

0x7930,	// (0x00046727) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x0004e965) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x0004e965) popup_preview_fixed_window_g

0x9be9,	// (0x000489e0) aid_navi_side_left_pane_ParamLimits

0x9bfe,	// (0x000489f5) aid_navi_side_right_pane_ParamLimits

0x9c16,	// (0x00048a0d) navi_icon_pane_stacon_ParamLimits

0x9c2a,	// (0x00048a21) navi_navi_pane_stacon_ParamLimits

0x9c16,	// (0x00048a0d) navi_text_pane_stacon_ParamLimits

0x9453,	// (0x0004824a) main_text_info_pane

0x7b07,	// (0x000468fe) listscroll_text_info_pane

0x7b0f,	// (0x00046906) list_text_info_pane_ParamLimits

0x7b0f,	// (0x00046906) list_text_info_pane

0x7b1e,	// (0x00046915) scroll_pane_cp24_ParamLimits

0x7b1e,	// (0x00046915) scroll_pane_cp24

0xdb1e,	// (0x0004c915) list_text_info_pane_t1_ParamLimits

0xdb1e,	// (0x0004c915) list_text_info_pane_t1

0xa117,	// (0x00048f0e) popup_fast_swap2_window_ParamLimits

0xa117,	// (0x00048f0e) popup_fast_swap2_window

0x7b3c,	// (0x00046933) aid_size_cell_fast2

0x23aa,	// (0x000411a1) bg_popup_window_pane_cp17

0x595e,	// (0x00044755) heading_pane_cp2

0x2743,	// (0x0004153a) listscroll_fast2_pane

0x7b46,	// (0x0004693d) grid_fast2_pane

0x7b50,	// (0x00046947) listscroll_fast2_pane_g1

0x7b58,	// (0x0004694f) listscroll_fast2_pane_g2

0x0001,

0xfbf1,	// (0x0004e9e8) listscroll_fast2_pane_g

0x47da,	// (0x000435d1) scroll_pane_cp26

0x7b62,	// (0x00046959) cell_fast2_pane_ParamLimits

0x7b62,	// (0x00046959) cell_fast2_pane

0x7b77,	// (0x0004696e) cell_fast2_pane_g1

0x7b80,	// (0x00046977) cell_fast2_pane_g2

0x7b89,	// (0x00046980) cell_fast2_pane_g3

0x0002,

0xfbf6,	// (0x0004e9ed) cell_fast2_pane_g

0x27d7,	// (0x000415ce) grid_highlight_pane_cp9

0xa0df,	// (0x00048ed6) main_eswt_pane_ParamLimits

0xa0df,	// (0x00048ed6) main_eswt_pane

0x7b33,	// (0x0004692a) list_single_text_info_pane

0x7b91,	// (0x00046988) eswt_ctrl_button_pane

0x7b91,	// (0x00046988) eswt_ctrl_canvas_pane

0x7b99,	// (0x00046990) eswt_ctrl_combo_pane

0x7b91,	// (0x00046988) eswt_ctrl_default_pane

0x7b91,	// (0x00046988) eswt_ctrl_label_pane

0x7ba1,	// (0x00046998) eswt_ctrl_wait_pane

0x7ba9,	// (0x000469a0) eswt_shell_pane

0x23aa,	// (0x000411a1) listscroll_eswt_app_pane

0x7bc9,	// (0x000469c0) popup_eswt_tasktip_window_ParamLimits

0x7bc9,	// (0x000469c0) popup_eswt_tasktip_window

0x5690,	// (0x00044487) bg_popup_window_pane_cp18

0x7bda,	// (0x000469d1) eswt_control_pane_g1_ParamLimits

0x7bda,	// (0x000469d1) eswt_control_pane_g1

0x7be7,	// (0x000469de) eswt_control_pane_g2_ParamLimits

0x7be7,	// (0x000469de) eswt_control_pane_g2

0x7bf4,	// (0x000469eb) eswt_control_pane_g3_ParamLimits

0x7bf4,	// (0x000469eb) eswt_control_pane_g3

0x7c01,	// (0x000469f8) eswt_control_pane_g4_ParamLimits

0x7c01,	// (0x000469f8) eswt_control_pane_g4

0x0003,

0xfbfd,	// (0x0004e9f4) eswt_control_pane_g_ParamLimits

0xfbfd,	// (0x0004e9f4) eswt_control_pane_g

0x46ba,	// (0x000434b1) bg_button_pane_ParamLimits

0x46ba,	// (0x000434b1) bg_button_pane

0x27ec,	// (0x000415e3) common_borders_pane_copy2_ParamLimits

0x27ec,	// (0x000415e3) common_borders_pane_copy2

0x7c0e,	// (0x00046a05) control_button_pane_g1_ParamLimits

0x7c0e,	// (0x00046a05) control_button_pane_g1

0x7c1a,	// (0x00046a11) control_button_pane_g2_ParamLimits

0x7c1a,	// (0x00046a11) control_button_pane_g2

0x7c26,	// (0x00046a1d) control_button_pane_g3_ParamLimits

0x7c26,	// (0x00046a1d) control_button_pane_g3

0x0002,

0xfc06,	// (0x0004e9fd) control_button_pane_g_ParamLimits

0xfc06,	// (0x0004e9fd) control_button_pane_g

0x7c3a,	// (0x00046a31) control_button_pane_t1

0x7c48,	// (0x00046a3f) control_button_pane_t2

0x0001,

0xfc0d,	// (0x0004ea04) control_button_pane_t

0x561c,	// (0x00044413) bg_button_pane_g1

0x5624,	// (0x0004441b) bg_button_pane_g2

0x562c,	// (0x00044423) bg_button_pane_g3

0x5634,	// (0x0004442b) bg_button_pane_g4

0x563c,	// (0x00044433) bg_button_pane_g5

0x5644,	// (0x0004443b) bg_button_pane_g6

0x564c,	// (0x00044443) bg_button_pane_g7

0x5654,	// (0x0004444b) bg_button_pane_g8

0x565c,	// (0x00044453) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0004e663) bg_button_pane_g

0x7449,	// (0x00046240) common_borders_pane_ParamLimits

0x7449,	// (0x00046240) common_borders_pane

0x7bda,	// (0x000469d1) eswt_control_pane_g1_copy1_ParamLimits

0x7bda,	// (0x000469d1) eswt_control_pane_g1_copy1

0x7be7,	// (0x000469de) eswt_control_pane_g2_copy1_ParamLimits

0x7be7,	// (0x000469de) eswt_control_pane_g2_copy1

0x7bf4,	// (0x000469eb) eswt_control_pane_g3_copy1_ParamLimits

0x7bf4,	// (0x000469eb) eswt_control_pane_g3_copy1

0x7c01,	// (0x000469f8) eswt_control_pane_g4_copy1_ParamLimits

0x7c01,	// (0x000469f8) eswt_control_pane_g4_copy1

0x7484,	// (0x0004627b) bg_eswt_ctrl_canvas_pane_g1

0x7449,	// (0x00046240) common_borders_pane_cp2_ParamLimits

0x7449,	// (0x00046240) common_borders_pane_cp2

0x7449,	// (0x00046240) common_borders_pane_cp3_ParamLimits

0x7449,	// (0x00046240) common_borders_pane_cp3

0x7c56,	// (0x00046a4d) separator_horizontal_pane

0x7c5e,	// (0x00046a55) separator_vertical_pane

0x7bda,	// (0x000469d1) eswt_control_pane_g1_copy2_ParamLimits

0x7bda,	// (0x000469d1) eswt_control_pane_g1_copy2

0x7be7,	// (0x000469de) eswt_control_pane_g2_copy2_ParamLimits

0x7be7,	// (0x000469de) eswt_control_pane_g2_copy2

0x7bf4,	// (0x000469eb) eswt_control_pane_g3_copy2_ParamLimits

0x7bf4,	// (0x000469eb) eswt_control_pane_g3_copy2

0x7c01,	// (0x000469f8) eswt_control_pane_g4_copy2_ParamLimits

0x7c01,	// (0x000469f8) eswt_control_pane_g4_copy2

0x23aa,	// (0x000411a1) common_borders_pane_cp4

0x7c67,	// (0x00046a5e) separator_horizontal_pane_g1

0x7c70,	// (0x00046a67) separator_horizontal_pane_g2

0x7c79,	// (0x00046a70) separator_horizontal_pane_g3

0x0002,

0xfc12,	// (0x0004ea09) separator_horizontal_pane_g

0x7bda,	// (0x000469d1) eswt_control_pane_g1_copy3_ParamLimits

0x7bda,	// (0x000469d1) eswt_control_pane_g1_copy3

0x7be7,	// (0x000469de) eswt_control_pane_g2_copy3_ParamLimits

0x7be7,	// (0x000469de) eswt_control_pane_g2_copy3

0x7bf4,	// (0x000469eb) eswt_control_pane_g3_copy3_ParamLimits

0x7bf4,	// (0x000469eb) eswt_control_pane_g3_copy3

0x7c01,	// (0x000469f8) eswt_control_pane_g4_copy3_ParamLimits

0x7c01,	// (0x000469f8) eswt_control_pane_g4_copy3

0x23aa,	// (0x000411a1) common_borders_pane_cp5

0x7c82,	// (0x00046a79) separator_vertical_pane_g1

0x7c8b,	// (0x00046a82) separator_vertical_pane_g2

0x7c94,	// (0x00046a8b) separator_vertical_pane_g3

0x0002,

0xfc19,	// (0x0004ea10) separator_vertical_pane_g

0x7bda,	// (0x000469d1) eswt_control_pane_g1_copy4_ParamLimits

0x7bda,	// (0x000469d1) eswt_control_pane_g1_copy4

0x7be7,	// (0x000469de) eswt_control_pane_g2_copy4_ParamLimits

0x7be7,	// (0x000469de) eswt_control_pane_g2_copy4

0x7bf4,	// (0x000469eb) eswt_control_pane_g3_copy4_ParamLimits

0x7bf4,	// (0x000469eb) eswt_control_pane_g3_copy4

0x7c01,	// (0x000469f8) eswt_control_pane_g4_copy4_ParamLimits

0x7c01,	// (0x000469f8) eswt_control_pane_g4_copy4

0x7c9d,	// (0x00046a94) eswt_ctrl_combo_button_pane

0x7ca5,	// (0x00046a9c) eswt_ctrl_input_pane

0x7cad,	// (0x00046aa4) popup_choice_list_window_cp70

0x7cb5,	// (0x00046aac) eswt_ctrl_input_pane_t1

0x23aa,	// (0x000411a1) input_focus_pane_cp70

0x7449,	// (0x00046240) bg_button_pane_cp70_ParamLimits

0x7449,	// (0x00046240) bg_button_pane_cp70

0x7cc3,	// (0x00046aba) eswt_ctrl_combo_button_pane_g1

0x7ccb,	// (0x00046ac2) wait_bar_pane_cp70

0x5690,	// (0x00044487) bg_popup_window_pane_cp70_ParamLimits

0x5690,	// (0x00044487) bg_popup_window_pane_cp70

0x7cd3,	// (0x00046aca) popup_eswt_tasktip_window_t1

0x7ce9,	// (0x00046ae0) wait_bar_pane_cp71_ParamLimits

0x7ce9,	// (0x00046ae0) wait_bar_pane_cp71

0x7cf5,	// (0x00046aec) grid_eswt_app_pane

0x4aef,	// (0x000438e6) scroll_pane_cp70

0xdb53,	// (0x0004c94a) cell_eswt_app_pane_ParamLimits

0xdb53,	// (0x0004c94a) cell_eswt_app_pane

0xdb87,	// (0x0004c97e) cell_eswt_app_pane_g1_ParamLimits

0xdb87,	// (0x0004c97e) cell_eswt_app_pane_g1

0xdbb6,	// (0x0004c9ad) cell_eswt_app_pane_g2_ParamLimits

0xdbb6,	// (0x0004c9ad) cell_eswt_app_pane_g2

0x0001,

0x0249,	// (0x0003f040) cell_eswt_app_pane_g_ParamLimits

0x0249,	// (0x0003f040) cell_eswt_app_pane_g

0xdbda,	// (0x0004c9d1) cell_eswt_app_pane_t1_ParamLimits

0xdbda,	// (0x0004c9d1) cell_eswt_app_pane_t1

0x7cfe,	// (0x00046af5) grid_highlight_pane_cp70_ParamLimits

0x7cfe,	// (0x00046af5) grid_highlight_pane_cp70

0x50af,	// (0x00043ea6) set_content_pane_g1

0x53b7,	// (0x000441ae) status_small_volume_pane

0xaec6,	// (0x00049cbd) status_small_volume_pane_g1

0xaece,	// (0x00049cc5) volume_small2_pane

0xaed7,	// (0x00049cce) volume_small2_pane_g1

0xaee0,	// (0x00049cd7) volume_small2_pane_g2

0xaee9,	// (0x00049ce0) volume_small2_pane_g3

0xaef2,	// (0x00049ce9) volume_small2_pane_g4

0xaefb,	// (0x00049cf2) volume_small2_pane_g5

0xaf04,	// (0x00049cfb) volume_small2_pane_g6

0xaf0d,	// (0x00049d04) volume_small2_pane_g7

0xaf16,	// (0x00049d0d) volume_small2_pane_g8

0xaf1f,	// (0x00049d16) volume_small2_pane_g9

0xaf28,	// (0x00049d1f) volume_small2_pane_g10

0x0009,

0xfc20,	// (0x0004ea17) volume_small2_pane_g

0x7722,	// (0x00046519) fep_vkb_top_text_pane_g1_ParamLimits

0xda90,	// (0x0004c887) fep_vkb_top_text_pane_t1_ParamLimits

0x793c,	// (0x00046733) popup_preview_fixed_window_g3_ParamLimits

0x793c,	// (0x00046733) popup_preview_fixed_window_g3

0xa5be,	// (0x000493b5) popup_toolbar_trans_pane

0xd443,	// (0x0004c23a) aid_height_set_list_ParamLimits

0x542c,	// (0x00044223) aid_size_parent_ParamLimits

0x4813,	// (0x0004360a) list_highlight_pane_cp2_ParamLimits

0x50af,	// (0x00043ea6) set_content_pane_g1_ParamLimits

0xc545,	// (0x0004b33c) list_single_image_pane_ParamLimits

0xc545,	// (0x0004b33c) list_single_image_pane

0xdc0c,	// (0x0004ca03) aid_size_cell_image_ParamLimits

0xdc0c,	// (0x0004ca03) aid_size_cell_image

0xdc19,	// (0x0004ca10) grid_single_image_pane_ParamLimits

0xdc19,	// (0x0004ca10) grid_single_image_pane

0x7d0a,	// (0x00046b01) list_single_image_pane_g1_ParamLimits

0x7d0a,	// (0x00046b01) list_single_image_pane_g1

0x7d16,	// (0x00046b0d) list_single_image_pane_g2_ParamLimits

0x7d16,	// (0x00046b0d) list_single_image_pane_g2

0x0001,

0xfc35,	// (0x0004ea2c) list_single_image_pane_g_ParamLimits

0xfc35,	// (0x0004ea2c) list_single_image_pane_g

0x7d2a,	// (0x00046b21) list_single_image_pane_t1_ParamLimits

0x7d2a,	// (0x00046b21) list_single_image_pane_t1

0xdc25,	// (0x0004ca1c) cell_image_list_pane_ParamLimits

0xdc25,	// (0x0004ca1c) cell_image_list_pane

0xdc39,	// (0x0004ca30) cell_image_list_pane_g1

0xdc42,	// (0x0004ca39) cell_image_list_pane_g2

0x0001,

0x0268,	// (0x0003f05f) cell_image_list_pane_g

0x7d40,	// (0x00046b37) aid_size_cell_tb_trans_pane

0x46ba,	// (0x000434b1) bg_tb_trans_pane

0x7d52,	// (0x00046b49) grid_tb_trans_pane

0x561c,	// (0x00044413) bg_tb_trans_pane_g1

0x5624,	// (0x0004441b) bg_tb_trans_pane_g2

0x562c,	// (0x00044423) bg_tb_trans_pane_g3

0x5634,	// (0x0004442b) bg_tb_trans_pane_g4

0x563c,	// (0x00044433) bg_tb_trans_pane_g5

0x5654,	// (0x0004444b) bg_tb_trans_pane_g6

0x565c,	// (0x00044453) bg_tb_trans_pane_g7

0x5644,	// (0x0004443b) bg_tb_trans_pane_g8

0x564c,	// (0x00044443) bg_tb_trans_pane_g9

0x0008,

0xfc3a,	// (0x0004ea31) bg_tb_trans_pane_g

0x7d66,	// (0x00046b5d) cell_toolbar_trans_pane_ParamLimits

0x7d66,	// (0x00046b5d) cell_toolbar_trans_pane

0x7484,	// (0x0004627b) cell_toolbar_trans_pane_g1

0xd7b7,	// (0x0004c5ae) list_form2_midp_pane_t1

0xd7c5,	// (0x0004c5bc) list_form2_midp_pane_t2

0x0001,

0x0116,	// (0x0003ef0d) list_form2_midp_pane_t

0x71e1,	// (0x00045fd8) scroll_pane_cp51_ParamLimits

0x7358,	// (0x0004614f) form2_midp_wait_pane_g1

0x7361,	// (0x00046158) form2_midp_wait_pane_g2

0x736a,	// (0x00046161) form2_midp_wait_pane_g3

0x0002,

0xfaf6,	// (0x0004e8ed) form2_midp_wait_pane_g

0x242a,	// (0x00041221) list_highlight_pane_cp21_ParamLimits

0x738a,	// (0x00046181) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7399,	// (0x00046190) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xc4be,	// (0x0004b2b5) list_single_2graphic_im_pane_ParamLimits

0xc4be,	// (0x0004b2b5) list_single_2graphic_im_pane

0x7d8c,	// (0x00046b83) list_single_2graphic_im_pane_g1_ParamLimits

0x7d8c,	// (0x00046b83) list_single_2graphic_im_pane_g1

0x7d9d,	// (0x00046b94) list_single_2graphic_im_pane_g2_ParamLimits

0x7d9d,	// (0x00046b94) list_single_2graphic_im_pane_g2

0x7da9,	// (0x00046ba0) list_single_2graphic_im_pane_g3_ParamLimits

0x7da9,	// (0x00046ba0) list_single_2graphic_im_pane_g3

0x0003,

0xfc4d,	// (0x0004ea44) list_single_2graphic_im_pane_g_ParamLimits

0xfc4d,	// (0x0004ea44) list_single_2graphic_im_pane_g

0x7dc9,	// (0x00046bc0) list_single_2graphic_im_pane_t1_ParamLimits

0x7dc9,	// (0x00046bc0) list_single_2graphic_im_pane_t1

0x7948,	// (0x0004673f) list_single_graphic_2heading_pane_fp_ParamLimits

0x7948,	// (0x0004673f) list_single_graphic_2heading_pane_fp

0xc84e,	// (0x0004b645) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc84e,	// (0x0004b645) list_single_graphic_2heading_pane_fp_g1

0x795e,	// (0x00046755) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x795e,	// (0x00046755) list_single_graphic_2heading_pane_fp_g2

0x2f46,	// (0x00041d3d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2f46,	// (0x00041d3d) list_single_graphic_2heading_pane_fp_g3

0x46c8,	// (0x000434bf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x46c8,	// (0x000434bf) list_single_graphic_2heading_pane_fp_g4

0x796a,	// (0x00046761) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x796a,	// (0x00046761) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004e975) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004e975) list_single_graphic_2heading_pane_fp_g

0xc997,	// (0x0004b78e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc997,	// (0x0004b78e) list_single_graphic_2heading_pane_fp_t1

0xc886,	// (0x0004b67d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc886,	// (0x0004b67d) list_single_graphic_2heading_pane_fp_t2

0xc9ad,	// (0x0004b7a4) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc9ad,	// (0x0004b7a4) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc56,	// (0x0004ea4d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc56,	// (0x0004ea4d) list_single_graphic_2heading_pane_fp_t

0x7510,	// (0x00046307) fep_hwr_write_pane_g5_ParamLimits

0x7510,	// (0x00046307) fep_hwr_write_pane_g5

0x751c,	// (0x00046313) fep_hwr_write_pane_g6_ParamLimits

0x751c,	// (0x00046313) fep_hwr_write_pane_g6

0x7ba9,	// (0x000469a0) eswt_shell_pane_ParamLimits

0x5690,	// (0x00044487) bg_popup_window_pane_cp18_ParamLimits

0x6706,	// (0x000454fd) heading_pane_cp70

0x7cd3,	// (0x00046aca) popup_eswt_tasktip_window_t1_ParamLimits

0xcb1c,	// (0x0004b913) aid_touch_tab_arrow_left

0xcb28,	// (0x0004b91f) aid_touch_tab_arrow_right

0xb996,	// (0x0004a78d) title_pane_g3_ParamLimits

0xb996,	// (0x0004a78d) title_pane_g3

0x4679,	// (0x00043470) set_value_pane_g1

0xa5be,	// (0x000493b5) popup_toolbar_trans_pane_ParamLimits

0x7d40,	// (0x00046b37) aid_size_cell_tb_trans_pane_ParamLimits

0x46ba,	// (0x000434b1) bg_tb_trans_pane_ParamLimits

0x7d52,	// (0x00046b49) grid_tb_trans_pane_ParamLimits

0x255d,	// (0x00041354) cont_note_pane_ParamLimits

0x255d,	// (0x00041354) cont_note_pane

0x27ec,	// (0x000415e3) cont_snote2_single_text_pane_ParamLimits

0x27ec,	// (0x000415e3) cont_snote2_single_text_pane

0x27ec,	// (0x000415e3) cont_snote2_single_graphic_pane_ParamLimits

0x27ec,	// (0x000415e3) cont_snote2_single_graphic_pane

0x5b74,	// (0x0004496b) cont_note_wait_pane_ParamLimits

0x5b74,	// (0x0004496b) cont_note_wait_pane

0x5b74,	// (0x0004496b) cont_note_image_pane_ParamLimits

0x5b74,	// (0x0004496b) cont_note_image_pane

0x7dfa,	// (0x00046bf1) popup_note2_window_g1_ParamLimits

0x7dfa,	// (0x00046bf1) popup_note2_window_g1

0x7e2b,	// (0x00046c22) popup_note2_window_t1_ParamLimits

0x7e2b,	// (0x00046c22) popup_note2_window_t1

0x7e70,	// (0x00046c67) popup_note2_window_t2_ParamLimits

0x7e70,	// (0x00046c67) popup_note2_window_t2

0x7eb5,	// (0x00046cac) popup_note2_window_t3_ParamLimits

0x7eb5,	// (0x00046cac) popup_note2_window_t3

0x7efa,	// (0x00046cf1) popup_note2_window_t4_ParamLimits

0x7efa,	// (0x00046cf1) popup_note2_window_t4

0x25d5,	// (0x000413cc) popup_note2_window_t5_ParamLimits

0x25d5,	// (0x000413cc) popup_note2_window_t5

0x0004,

0xfc62,	// (0x0004ea59) popup_note2_window_t_ParamLimits

0xfc62,	// (0x0004ea59) popup_note2_window_t

0x7f29,	// (0x00046d20) popup_note2_image_window_g1_ParamLimits

0x7f29,	// (0x00046d20) popup_note2_image_window_g1

0x7f35,	// (0x00046d2c) popup_note2_image_window_g2_ParamLimits

0x7f35,	// (0x00046d2c) popup_note2_image_window_g2

0x0001,

0xfc6d,	// (0x0004ea64) popup_note2_image_window_g_ParamLimits

0xfc6d,	// (0x0004ea64) popup_note2_image_window_g

0x7f47,	// (0x00046d3e) popup_note2_image_window_t1_ParamLimits

0x7f47,	// (0x00046d3e) popup_note2_image_window_t1

0x7f5f,	// (0x00046d56) popup_note2_image_window_t2_ParamLimits

0x7f5f,	// (0x00046d56) popup_note2_image_window_t2

0x7f77,	// (0x00046d6e) popup_note2_image_window_t3_ParamLimits

0x7f77,	// (0x00046d6e) popup_note2_image_window_t3

0x0002,

0xfc72,	// (0x0004ea69) popup_note2_image_window_t_ParamLimits

0xfc72,	// (0x0004ea69) popup_note2_image_window_t

0x5b82,	// (0x00044979) popup_note2_wait_window_g1_ParamLimits

0x5b82,	// (0x00044979) popup_note2_wait_window_g1

0x7f93,	// (0x00046d8a) popup_note2_wait_window_g2_ParamLimits

0x7f93,	// (0x00046d8a) popup_note2_wait_window_g2

0x5b9a,	// (0x00044991) popup_note2_wait_window_g3_ParamLimits

0x5b9a,	// (0x00044991) popup_note2_wait_window_g3

0x0002,

0xfc79,	// (0x0004ea70) popup_note2_wait_window_g_ParamLimits

0xfc79,	// (0x0004ea70) popup_note2_wait_window_g

0x7f9f,	// (0x00046d96) popup_note2_wait_window_t1_ParamLimits

0x7f9f,	// (0x00046d96) popup_note2_wait_window_t1

0x7fbd,	// (0x00046db4) popup_note2_wait_window_t2_ParamLimits

0x7fbd,	// (0x00046db4) popup_note2_wait_window_t2

0x7fdb,	// (0x00046dd2) popup_note2_wait_window_t3_ParamLimits

0x7fdb,	// (0x00046dd2) popup_note2_wait_window_t3

0x7fed,	// (0x00046de4) popup_note2_wait_window_t4_ParamLimits

0x7fed,	// (0x00046de4) popup_note2_wait_window_t4

0x0003,

0xfc80,	// (0x0004ea77) popup_note2_wait_window_t_ParamLimits

0xfc80,	// (0x0004ea77) popup_note2_wait_window_t

0x7fff,	// (0x00046df6) wait_bar2_pane_ParamLimits

0x7fff,	// (0x00046df6) wait_bar2_pane

0x8017,	// (0x00046e0e) popup_snote2_single_text_window_g1_ParamLimits

0x8017,	// (0x00046e0e) popup_snote2_single_text_window_g1

0x803f,	// (0x00046e36) popup_snote2_single_text_window_t1_ParamLimits

0x803f,	// (0x00046e36) popup_snote2_single_text_window_t1

0x808b,	// (0x00046e82) popup_snote2_single_text_window_t2_ParamLimits

0x808b,	// (0x00046e82) popup_snote2_single_text_window_t2

0x80d7,	// (0x00046ece) popup_snote2_single_text_window_t3_ParamLimits

0x80d7,	// (0x00046ece) popup_snote2_single_text_window_t3

0x8118,	// (0x00046f0f) popup_snote2_single_text_window_t4_ParamLimits

0x8118,	// (0x00046f0f) popup_snote2_single_text_window_t4

0x814e,	// (0x00046f45) popup_snote2_single_text_window_t5_ParamLimits

0x814e,	// (0x00046f45) popup_snote2_single_text_window_t5

0x0004,

0xfc89,	// (0x0004ea80) popup_snote2_single_text_window_t_ParamLimits

0xfc89,	// (0x0004ea80) popup_snote2_single_text_window_t

0x8179,	// (0x00046f70) popup_snote2_single_graphic_window_g1_ParamLimits

0x8179,	// (0x00046f70) popup_snote2_single_graphic_window_g1

0x81a1,	// (0x00046f98) popup_snote2_single_graphic_window_g2_ParamLimits

0x81a1,	// (0x00046f98) popup_snote2_single_graphic_window_g2

0x0001,

0xfc94,	// (0x0004ea8b) popup_snote2_single_graphic_window_g_ParamLimits

0xfc94,	// (0x0004ea8b) popup_snote2_single_graphic_window_g

0x81c9,	// (0x00046fc0) popup_snote2_single_graphic_window_t1_ParamLimits

0x81c9,	// (0x00046fc0) popup_snote2_single_graphic_window_t1

0x8215,	// (0x0004700c) popup_snote2_single_graphic_window_t2_ParamLimits

0x8215,	// (0x0004700c) popup_snote2_single_graphic_window_t2

0x80d7,	// (0x00046ece) popup_snote2_single_graphic_window_t3_ParamLimits

0x80d7,	// (0x00046ece) popup_snote2_single_graphic_window_t3

0x8118,	// (0x00046f0f) popup_snote2_single_graphic_window_t4_ParamLimits

0x8118,	// (0x00046f0f) popup_snote2_single_graphic_window_t4

0x814e,	// (0x00046f45) popup_snote2_single_graphic_window_t5_ParamLimits

0x814e,	// (0x00046f45) popup_snote2_single_graphic_window_t5

0x0004,

0xfc99,	// (0x0004ea90) popup_snote2_single_graphic_window_t_ParamLimits

0xfc99,	// (0x0004ea90) popup_snote2_single_graphic_window_t

0x7175,	// (0x00045f6c) clock_nsta_pane_cp2_t1

0x7175,	// (0x00045f6c) clock_nsta_pane_cp2_t2

0x0001,

0xfacc,	// (0x0004e8c3) clock_nsta_pane_cp2_t

0xbe5e,	// (0x0004ac55) form_field_data_wide_pane_g1_ParamLimits

0x2f46,	// (0x00041d3d) form_field_data_wide_pane_g2_ParamLimits

0x2f46,	// (0x00041d3d) form_field_data_wide_pane_g2

0x46c8,	// (0x000434bf) form_field_data_wide_pane_g3_ParamLimits

0x46c8,	// (0x000434bf) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0004e47d) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0004e47d) form_field_data_wide_pane_g

0xd6a0,	// (0x0004c497) grid_touch_3_pane_ParamLimits

0xd6a0,	// (0x0004c497) grid_touch_3_pane

0xdc4b,	// (0x0004ca42) cell_touch_3_pane_ParamLimits

0xdc4b,	// (0x0004ca42) cell_touch_3_pane

0x7484,	// (0x0004627b) cell_touch_3_pane_g1

0x7484,	// (0x0004627b) cell_touch_3_pane_g2

0x0001,

0xfb3c,	// (0x0004e933) cell_touch_3_pane_g

0x2607,	// (0x000413fe) cont_query_data_pane

0x260f,	// (0x00041406) cont_query_data_pane_cp1

0x8261,	// (0x00047058) button_value_adjust_pane_cp7

0x8269,	// (0x00047060) query_popup_pane_cp3

0x4d1d,	// (0x00043b14) bg_popup_sub_pane_cp22_ParamLimits

0x9d2b,	// (0x00048b22) navi_navi_volume_pane_cp2

0x9d43,	// (0x00048b3a) popup_side_volume_key_window_g2

0x9d4f,	// (0x00048b46) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0004e513) popup_side_volume_key_window_g

0x9d69,	// (0x00048b60) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0004e51a) popup_side_volume_key_window_t

0x4f7b,	// (0x00043d72) popup_side_volume_key_window_ParamLimits

0xbc52,	// (0x0004aa49) list_double_graphic_pane_g4_ParamLimits

0xbc52,	// (0x0004aa49) list_double_graphic_pane_g4

0xc503,	// (0x0004b2fa) list_single_2heading_msg_pane_ParamLimits

0xc503,	// (0x0004b2fa) list_single_2heading_msg_pane

0xcc18,	// (0x0004ba0f) list_single_2heading_msg_pane_g1_ParamLimits

0xcc18,	// (0x0004ba0f) list_single_2heading_msg_pane_g1

0x2f52,	// (0x00041d49) list_single_2heading_msg_pane_g2_ParamLimits

0x2f52,	// (0x00041d49) list_single_2heading_msg_pane_g2

0xcc24,	// (0x0004ba1b) list_single_2heading_msg_pane_g3_ParamLimits

0xcc24,	// (0x0004ba1b) list_single_2heading_msg_pane_g3

0xcc30,	// (0x0004ba27) list_single_2heading_msg_pane_g4_ParamLimits

0xcc30,	// (0x0004ba27) list_single_2heading_msg_pane_g4

0x0003,

0xfca4,	// (0x0004ea9b) list_single_2heading_msg_pane_g_ParamLimits

0xfca4,	// (0x0004ea9b) list_single_2heading_msg_pane_g

0xc9cd,	// (0x0004b7c4) list_single_2heading_msg_pane_t1_ParamLimits

0xc9cd,	// (0x0004b7c4) list_single_2heading_msg_pane_t1

0xc9f5,	// (0x0004b7ec) list_single_2heading_msg_pane_t2_ParamLimits

0xc9f5,	// (0x0004b7ec) list_single_2heading_msg_pane_t2

0xca29,	// (0x0004b820) list_single_2heading_msg_pane_t3_ParamLimits

0xca29,	// (0x0004b820) list_single_2heading_msg_pane_t3

0xca62,	// (0x0004b859) list_single_2heading_msg_pane_t4_ParamLimits

0xca62,	// (0x0004b859) list_single_2heading_msg_pane_t4

0x0003,

0xfcad,	// (0x0004eaa4) list_single_2heading_msg_pane_t_ParamLimits

0xfcad,	// (0x0004eaa4) list_single_2heading_msg_pane_t

0x23c8,	// (0x000411bf) title_pane_g4_ParamLimits

0x23c8,	// (0x000411bf) title_pane_g4

0x9b39,	// (0x00048930) title_pane_stacon_g3_ParamLimits

0x9b39,	// (0x00048930) title_pane_stacon_g3

0x7dbd,	// (0x00046bb4) list_single_2graphic_im_pane_g4_ParamLimits

0x7dbd,	// (0x00046bb4) list_single_2graphic_im_pane_g4

0x6521,	// (0x00045318) popup_side_volume_key_window_cp

0x6a43,	// (0x0004583a) main_idle_act2_pane_t1

0xa6ae,	// (0x000494a5) toolbar_button_pane_g10

0xbbf2,	// (0x0004a9e9) popup_toolbar_window_cp1

0x7166,	// (0x00045f5d) clock_nsta_pane_cp_t1

0x7166,	// (0x00045f5d) clock_nsta_pane_cp_t2

0x0001,

0xfac7,	// (0x0004e8be) clock_nsta_pane_cp_t

0x9d2b,	// (0x00048b22) navi_navi_volume_pane_cp2_ParamLimits

0x9d37,	// (0x00048b2e) popup_side_volume_key_window_g1_ParamLimits

0x9d43,	// (0x00048b3a) popup_side_volume_key_window_g2_ParamLimits

0x9d4f,	// (0x00048b46) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0004e513) popup_side_volume_key_window_g_ParamLimits

0xab32,	// (0x00049929) fep_hwr_aid_pane

0xabd9,	// (0x000499d0) bg_fep_hwr_top_pane_g4_ParamLimits

0x74f2,	// (0x000462e9) fep_hwr_top_pane_g1_ParamLimits

0x74e0,	// (0x000462d7) fep_hwr_top_pane_g2_ParamLimits

0xabf9,	// (0x000499f0) fep_hwr_top_pane_g3_ParamLimits

0xfb07,	// (0x0004e8fe) fep_hwr_top_pane_g_ParamLimits

0xac0e,	// (0x00049a05) fep_hwr_top_text_pane_ParamLimits

0x62ed,	// (0x000450e4) aid_touch_tab_arrow_arrow_2

0x62e4,	// (0x000450db) aid_touch_tab_arrow_left_2

0xab46,	// (0x0004993d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xab7d,	// (0x00049974) fep_hwr_prediction_pane

0x75dd,	// (0x000463d4) fep_vkb_prediction_pane

0xda6d,	// (0x0004c864) fep_vkb_side_pane_g3_ParamLimits

0xda6d,	// (0x0004c864) fep_vkb_side_pane_g3

0xad89,	// (0x00049b80) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xadf5,	// (0x00049bec) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xae02,	// (0x00049bf9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x0004e9ad) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xaf31,	// (0x00049d28) fep_hwr_prediction_pane_g1

0xaf3b,	// (0x00049d32) fep_hwr_prediction_pane_g2

0xaf43,	// (0x00049d3a) fep_hwr_prediction_pane_g3

0xaf4b,	// (0x00049d42) fep_hwr_prediction_pane_g4

0x0003,

0xfcb6,	// (0x0004eaad) fep_hwr_prediction_pane_g

0x827a,	// (0x00047071) fep_vkb_prediction_pane_g1

0x8284,	// (0x0004707b) fep_vkb_prediction_pane_g2

0x828c,	// (0x00047083) fep_vkb_prediction_pane_g3

0x8294,	// (0x0004708b) fep_vkb_prediction_pane_g4

0x0003,

0xfcbf,	// (0x0004eab6) fep_vkb_prediction_pane_g

0xa98e,	// (0x00049785) slider_set_pane_g3

0xa9a2,	// (0x00049799) slider_set_pane_g4

0xa9ba,	// (0x000497b1) slider_set_pane_g5

0xa98e,	// (0x00049785) slider_set_pane_g6

0xa9d0,	// (0x000497c7) slider_set_pane_g7

0x678b,	// (0x00045582) slider_form_pane_g3

0x6794,	// (0x0004558b) slider_form_pane_g4

0x679c,	// (0x00045593) slider_form_pane_g5

0x678b,	// (0x00045582) slider_form_pane_g6

0xd59a,	// (0x0004c391) slider_form_pane_g7

0x6cd3,	// (0x00045aca) slider_set_pane_vc_g3

0x6cdc,	// (0x00045ad3) slider_set_pane_vc_g4

0x6ce5,	// (0x00045adc) slider_set_pane_vc_g5

0x6cd3,	// (0x00045aca) slider_set_pane_vc_g6

0x6cee,	// (0x00045ae5) slider_set_pane_vc_g7

0x6e9e,	// (0x00045c95) slider_form_pane_vc_g1

0x6ea7,	// (0x00045c9e) slider_form_pane_vc_g2

0x6eb0,	// (0x00045ca7) slider_form_pane_vc_g3

0x6e9e,	// (0x00045c95) slider_form_pane_vc_g4

0x6eb9,	// (0x00045cb0) slider_form_pane_vc_g5

0x0004,

0xfa99,	// (0x0004e890) slider_form_pane_vc_g

0x9453,	// (0x0004824a) main_idle_act3_pane

0x829c,	// (0x00047093) ai3_links_pane

0xdc90,	// (0x0004ca87) popup_ai3_data_window_ParamLimits

0xdc90,	// (0x0004ca87) popup_ai3_data_window

0x23aa,	// (0x000411a1) grid_ai3_links_pane

0xdca8,	// (0x0004ca9f) cell_ai3_links_pane_ParamLimits

0xdca8,	// (0x0004ca9f) cell_ai3_links_pane

0x82a5,	// (0x0004709c) bg_popup_sub_pane_cp11

0x82b2,	// (0x000470a9) cell_ai3_links_pane_g1

0x23aa,	// (0x000411a1) bg_popup_sub_pane_cp12

0x82d7,	// (0x000470ce) heading_ai3_data_pane

0x82df,	// (0x000470d6) list_ai3_gene_pane

0x82eb,	// (0x000470e2) popup_ai3_data_window_g1

0x82f3,	// (0x000470ea) heading_ai3_data_pane_g1

0x82fb,	// (0x000470f2) heading_ai3_data_pane_t1

0x8309,	// (0x00047100) list_double_ai3_gene_pane_ParamLimits

0x8309,	// (0x00047100) list_double_ai3_gene_pane

0x8316,	// (0x0004710d) list_single_ai3_gene_pane_ParamLimits

0x8316,	// (0x0004710d) list_single_ai3_gene_pane

0x7449,	// (0x00046240) list_highlight_pane_cp7_ParamLimits

0x7449,	// (0x00046240) list_highlight_pane_cp7

0x8323,	// (0x0004711a) list_single_a13_gene_pane_t1_ParamLimits

0x8323,	// (0x0004711a) list_single_a13_gene_pane_t1

0x833a,	// (0x00047131) list_single_ai3_gene_pane_g1

0x8343,	// (0x0004713a) list_single_ai3_gene_pane_g2

0x0001,

0xfcc8,	// (0x0004eabf) list_single_ai3_gene_pane_g

0x834b,	// (0x00047142) list_double_ai3_gene_pane_g1_ParamLimits

0x834b,	// (0x00047142) list_double_ai3_gene_pane_g1

0x8357,	// (0x0004714e) list_double_ai3_gene_pane_t1_ParamLimits

0x8357,	// (0x0004714e) list_double_ai3_gene_pane_t1

0x8373,	// (0x0004716a) list_double_ai3_gene_pane_t2_ParamLimits

0x8373,	// (0x0004716a) list_double_ai3_gene_pane_t2

0x8388,	// (0x0004717f) list_double_ai3_gene_pane_t3_ParamLimits

0x8388,	// (0x0004717f) list_double_ai3_gene_pane_t3

0x0002,

0xfccd,	// (0x0004eac4) list_double_ai3_gene_pane_t_ParamLimits

0xfccd,	// (0x0004eac4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc9c3,	// (0x0004b7ba) aid_size_min_col_2

0xdc7c,	// (0x0004ca73) aid_size_min_msg_ParamLimits

0xdc7c,	// (0x0004ca73) aid_size_min_msg

0xda81,	// (0x0004c878) fep_vkb_top_text_pane_g2_ParamLimits

0xda81,	// (0x0004c878) fep_vkb_top_text_pane_g2

0x0001,

0xfb37,	// (0x0004e92e) fep_vkb_top_text_pane_g_ParamLimits

0xfb37,	// (0x0004e92e) fep_vkb_top_text_pane_g

0x9453,	// (0x0004824a) main_hc_apps_shell_pane

0x83a5,	// (0x0004719c) grid_hc_apps_pane_ParamLimits

0x83a5,	// (0x0004719c) grid_hc_apps_pane

0x83b4,	// (0x000471ab) list_hc_apps_pane

0x83bc,	// (0x000471b3) scroll_pane_cp37_ParamLimits

0x83bc,	// (0x000471b3) scroll_pane_cp37

0xdcc0,	// (0x0004cab7) cell_hc_apps_pane_ParamLimits

0xdcc0,	// (0x0004cab7) cell_hc_apps_pane

0xdd6e,	// (0x0004cb65) cell_hc_apps_pane_g1_ParamLimits

0xdd6e,	// (0x0004cb65) cell_hc_apps_pane_g1

0x83c8,	// (0x000471bf) cell_hc_apps_pane_g2_ParamLimits

0x83c8,	// (0x000471bf) cell_hc_apps_pane_g2

0x83e4,	// (0x000471db) cell_hc_apps_pane_g3_ParamLimits

0x83e4,	// (0x000471db) cell_hc_apps_pane_g3

0x0002,

0xfcd4,	// (0x0004eacb) cell_hc_apps_pane_g_ParamLimits

0xfcd4,	// (0x0004eacb) cell_hc_apps_pane_g

0xdd9f,	// (0x0004cb96) cell_hc_apps_pane_t1_ParamLimits

0xdd9f,	// (0x0004cb96) cell_hc_apps_pane_t1

0x255d,	// (0x00041354) grid_highlight_pane_cp10_ParamLimits

0x255d,	// (0x00041354) grid_highlight_pane_cp10

0xdddf,	// (0x0004cbd6) list_single_hc_apps_pane_ParamLimits

0xdddf,	// (0x0004cbd6) list_single_hc_apps_pane

0xde47,	// (0x0004cc3e) list_single_hc_apps_pane_g1

0xcc48,	// (0x0004ba3f) list_single_hc_apps_pane_g2

0x0001,

0xfcdb,	// (0x0004ead2) list_single_hc_apps_pane_g

0xcc61,	// (0x0004ba58) list_single_hc_apps_pane_g2_copy1

0xca87,	// (0x0004b87e) list_single_hc_apps_pane_t1

0x242a,	// (0x00041221) bg_set_opt_pane_cp_ParamLimits

0x96a6,	// (0x0004849d) setting_slider_pane_t1_ParamLimits

0x96bf,	// (0x000484b6) setting_slider_pane_t2_ParamLimits

0x96d9,	// (0x000484d0) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0004e35b) setting_slider_pane_t_ParamLimits

0x96f1,	// (0x000484e8) slider_set_pane_ParamLimits

0x9fcb,	// (0x00048dc2) control_pane_g5_ParamLimits

0x9fcb,	// (0x00048dc2) control_pane_g5

0x674d,	// (0x00045544) slider_set_pane_g1_ParamLimits

0xa982,	// (0x00049779) slider_set_pane_g2_ParamLimits

0xa98e,	// (0x00049785) slider_set_pane_g3_ParamLimits

0xa9a2,	// (0x00049799) slider_set_pane_g4_ParamLimits

0xa9ba,	// (0x000497b1) slider_set_pane_g5_ParamLimits

0xa98e,	// (0x00049785) slider_set_pane_g6_ParamLimits

0xa9d0,	// (0x000497c7) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0004e761) slider_set_pane_g_ParamLimits

0x505a,	// (0x00043e51) navi_icon_text_pane_ParamLimits

0xcaf2,	// (0x0004b8e9) aid_fill_nsta_2_ParamLimits

0xcb1c,	// (0x0004b913) aid_touch_tab_arrow_left_ParamLimits

0xcb28,	// (0x0004b91f) aid_touch_tab_arrow_right_ParamLimits

0xcf6d,	// (0x0004bd64) clock_nsta_pane_ParamLimits

0x62c6,	// (0x000450bd) navi_icon_pane_g1_ParamLimits

0x62d2,	// (0x000450c9) navi_text_pane_t1_ParamLimits

0x71bb,	// (0x00045fb2) navi_icon_text_pane_g1_ParamLimits

0x71c7,	// (0x00045fbe) navi_icon_text_pane_t1_ParamLimits

0xde47,	// (0x0004cc3e) list_single_hc_apps_pane_g1_ParamLimits

0xcc48,	// (0x0004ba3f) list_single_hc_apps_pane_g2_ParamLimits

0xfcdb,	// (0x0004ead2) list_single_hc_apps_pane_g_ParamLimits

0xcc61,	// (0x0004ba58) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xca87,	// (0x0004b87e) list_single_hc_apps_pane_t1_ParamLimits

0x95b0,	// (0x000483a7) popup_toolbar2_fixed_window_ParamLimits

0x95b0,	// (0x000483a7) popup_toolbar2_fixed_window

0xa5b4,	// (0x000493ab) popup_toolbar2_float_window

0x23aa,	// (0x000411a1) bg_popup_sub_pane_cp27

0x8406,	// (0x000471fd) grid_toolbar2_float_pane

0x23aa,	// (0x000411a1) bg_popup_sub_pane_cp26

0x8406,	// (0x000471fd) grid_toolbar2_fixed_pane

0xde60,	// (0x0004cc57) cell_toolbar2_fixed_pane_ParamLimits

0xde60,	// (0x0004cc57) cell_toolbar2_fixed_pane

0xde71,	// (0x0004cc68) cell_toolbar2_fixed_pane_g1

0x559c,	// (0x00044393) toolbar2_fixed_button_pane

0x561c,	// (0x00044413) toolbar2_fixed_button_pane_g1

0x5624,	// (0x0004441b) toolbar2_fixed_button_pane_g2

0x562c,	// (0x00044423) toolbar2_fixed_button_pane_g3

0x5634,	// (0x0004442b) toolbar2_fixed_button_pane_g4

0x563c,	// (0x00044433) toolbar2_fixed_button_pane_g5

0x5644,	// (0x0004443b) toolbar2_fixed_button_pane_g6

0x564c,	// (0x00044443) toolbar2_fixed_button_pane_g7

0x5654,	// (0x0004444b) toolbar2_fixed_button_pane_g8

0x565c,	// (0x00044453) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0004e663) toolbar2_fixed_button_pane_g

0x840e,	// (0x00047205) cell_toolbar2_float_pane_ParamLimits

0x840e,	// (0x00047205) cell_toolbar2_float_pane

0x8422,	// (0x00047219) cell_toolbar2_float_pane_g1

0x559c,	// (0x00044393) toolbar2_fixed_button_pane_cp

0xd969,	// (0x0004c760) fep_vkb_accented_list_pane_ParamLimits

0xd969,	// (0x0004c760) fep_vkb_accented_list_pane

0xad69,	// (0x00049b60) bg_popup_fep_shadow_pane_g9

0x51ce,	// (0x00043fc5) bg_popup_fep_shadow_pane_cp3

0x47c1,	// (0x000435b8) list_accented_list_pane

0x842b,	// (0x00047222) list_single_accented_list_pane_ParamLimits

0x842b,	// (0x00047222) list_single_accented_list_pane

0x51ce,	// (0x00043fc5) list_highlight_pane_cp10

0x843c,	// (0x00047233) list_single_accented_list_pane_t1

0xa504,	// (0x000492fb) popup_slider_window_ParamLimits

0xa504,	// (0x000492fb) popup_slider_window

0x8271,	// (0x00047068) aid_indentation_list_msg

0xdf26,	// (0x0004cd1d) bg_popup_window_pane_cp19

0x84a8,	// (0x0004729f) popup_slider_window_g1

0x84c4,	// (0x000472bb) popup_slider_window_g2

0x84e0,	// (0x000472d7) popup_slider_window_g3

0x0005,

0xfce0,	// (0x0004ead7) popup_slider_window_g

0x84fc,	// (0x000472f3) popup_slider_window_t1

0x8542,	// (0x00047339) small_volume_slider_vertical_pane

0x7484,	// (0x0004627b) small_volume_slider_vertical_pane_g1

0x7484,	// (0x0004627b) small_volume_slider_vertical_pane_g2

0x855e,	// (0x00047355) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf2,	// (0x0004eae9) small_volume_slider_vertical_pane_g

0x9376,	// (0x0004816d) area_side_right_pane_ParamLimits

0x9376,	// (0x0004816d) area_side_right_pane

0xaf53,	// (0x00049d4a) aid_size_side_button_ParamLimits

0xaf53,	// (0x00049d4a) aid_size_side_button

0xaf67,	// (0x00049d5e) grid_sctrl_middle_pane_ParamLimits

0xaf67,	// (0x00049d5e) grid_sctrl_middle_pane

0xaf86,	// (0x00049d7d) sctrl_sk_bottom_pane

0xaf97,	// (0x00049d8e) sctrl_sk_top_pane

0xafa9,	// (0x00049da0) aid_touch_sctrl_top

0xafb6,	// (0x00049dad) bg_sctrl_sk_pane_ParamLimits

0xafb6,	// (0x00049dad) bg_sctrl_sk_pane

0xafc4,	// (0x00049dbb) sctrl_sk_top_pane_g1

0xafd1,	// (0x00049dc8) sctrl_sk_top_pane_t1

0xafa9,	// (0x00049da0) aid_touch_sctrl_bottom

0xafb6,	// (0x00049dad) bg_sctrl_sk_pane_cp_ParamLimits

0xafb6,	// (0x00049dad) bg_sctrl_sk_pane_cp

0xafec,	// (0x00049de3) sctrl_sk_bottom_pane_g1

0xafd1,	// (0x00049dc8) sctrl_sk_bottom_pane_t1

0xaff5,	// (0x00049dec) cell_sctrl_middle_pane_ParamLimits

0xaff5,	// (0x00049dec) cell_sctrl_middle_pane

0xb010,	// (0x00049e07) aid_touch_sctrl_middle_ParamLimits

0xb010,	// (0x00049e07) aid_touch_sctrl_middle

0xb022,	// (0x00049e19) bg_sctrl_middle_pane_ParamLimits

0xb022,	// (0x00049e19) bg_sctrl_middle_pane

0xad89,	// (0x00049b80) cell_sctrl_middle_pane_g1_ParamLimits

0xad89,	// (0x00049b80) cell_sctrl_middle_pane_g1

0xb030,	// (0x00049e27) cell_sctrl_middle_pane_g2_ParamLimits

0xb030,	// (0x00049e27) cell_sctrl_middle_pane_g2

0x0001,

0xfcfe,	// (0x0004eaf5) cell_sctrl_middle_pane_g_ParamLimits

0xfcfe,	// (0x0004eaf5) cell_sctrl_middle_pane_g

0x561c,	// (0x00044413) bg_sctrl_middle_pane_g1

0x562c,	// (0x00044423) bg_sctrl_middle_pane_g2

0x5624,	// (0x0004441b) bg_sctrl_middle_pane_g3

0x563c,	// (0x00044433) bg_sctrl_middle_pane_g4

0x5634,	// (0x0004442b) bg_sctrl_middle_pane_g5

0x5644,	// (0x0004443b) bg_sctrl_middle_pane_g6

0x564c,	// (0x00044443) bg_sctrl_middle_pane_g7

0x565c,	// (0x00044453) bg_sctrl_middle_pane_g8

0x0007,

0xfd03,	// (0x0004eafa) bg_sctrl_middle_pane_g

0x5654,	// (0x0004444b) bg_sctrl_middle_pane_g8_copy1

0x561c,	// (0x00044413) bg_sctrl_sk_pane_g1

0x5624,	// (0x0004441b) bg_sctrl_sk_pane_g2

0x562c,	// (0x00044423) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0004e663) bg_sctrl_sk_pane_g

0x2ed8,	// (0x00041ccf) aid_size_touch_scroll_bar

0x5634,	// (0x0004442b) bg_sctrl_sk_pane_g4

0x563c,	// (0x00044433) bg_sctrl_sk_pane_g5

0x5644,	// (0x0004443b) bg_sctrl_sk_pane_g6

0x564c,	// (0x00044443) bg_sctrl_sk_pane_g7

0x5654,	// (0x0004444b) bg_sctrl_sk_pane_g8

0x565c,	// (0x00044453) bg_sctrl_sk_pane_g9

0xa175,	// (0x00048f6c) popup_fep_china_hwr2_fs_candidate_window

0xa17f,	// (0x00048f76) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa17f,	// (0x00048f76) popup_fep_china_hwr2_fs_control_window

0xad89,	// (0x00049b80) sctrl_sk_top_pane_g2

0x0001,

0xfcf9,	// (0x0004eaf0) sctrl_sk_top_pane_g

0xdfa0,	// (0x0004cd97) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdfa0,	// (0x0004cd97) aid_fep_china_hwr2_fs_cell

0xdfb2,	// (0x0004cda9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdfb2,	// (0x0004cda9) bg_popup_fep_shadow_pane_cp4

0xdfc9,	// (0x0004cdc0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdfc9,	// (0x0004cdc0) bg_popup_fep_shadow_pane_cp5

0xdfdb,	// (0x0004cdd2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdfdb,	// (0x0004cdd2) popup_fep_china_hwr2_fs_control_bar_grid

0xdfeb,	// (0x0004cde2) popup_fep_china_hwr2_fs_control_funtion_grid

0x8575,	// (0x0004736c) aid_fep_china_hwr2_fs_candi_cell

0x23aa,	// (0x000411a1) bg_popup_fep_shadow_pane_cp6

0x857f,	// (0x00047376) popup_fep_china_hwr2_fs_candidate_grid

0xdff3,	// (0x0004cdea) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdff3,	// (0x0004cdea) cell_fep_china_hwr2_fs_funtion_grid

0x7484,	// (0x0004627b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8567,	// (0x0004735e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8567,	// (0x0004735e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8589,	// (0x00047380) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8589,	// (0x00047380) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd14,	// (0x0004eb0b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd14,	// (0x0004eb0b) cell_fep_china_hwr2_fs_funtion_grid_g

0xe00b,	// (0x0004ce02) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe00b,	// (0x0004ce02) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe020,	// (0x0004ce17) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe020,	// (0x0004ce17) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x034c,	// (0x0003f143) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x034c,	// (0x0003f143) cell_fep_china_hwr2_fs_funtion_grid_t

0x859f,	// (0x00047396) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x85a7,	// (0x0004739e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x85af,	// (0x000473a6) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd19,	// (0x0004eb10) popup_fep_china_hwr2_fs_control_bar_grid_g

0x85b7,	// (0x000473ae) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x85b7,	// (0x000473ae) cell_fep_china_hwr2_fs_candidate_grid

0x85d0,	// (0x000473c7) popup_fep_china_hwr2_fs_candidate_grid_g20

0x85d8,	// (0x000473cf) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7484,	// (0x0004627b) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7484,	// (0x0004627b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3c,	// (0x0004e933) cell_fep_china_hwr2_fs_candidate_grid_g

0x85e0,	// (0x000473d7) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5469,	// (0x00044260) clock_nsta_pane_cp_24_ParamLimits

0x5469,	// (0x00044260) clock_nsta_pane_cp_24

0x54d1,	// (0x000442c8) indicator_nsta_pane_cp_24_ParamLimits

0x54d1,	// (0x000442c8) indicator_nsta_pane_cp_24

0x61c2,	// (0x00044fb9) heading_pane_g1

0x0001,

0xf8d1,	// (0x0004e6c8) heading_pane_g

0x68d0,	// (0x000456c7) grid_sct_catagory_button_pane

0x65a0,	// (0x00045397) scroll_pane_cp5_ParamLimits

0x71ed,	// (0x00045fe4) button_value_adjust_pane_cp5_ParamLimits

0x71ed,	// (0x00045fe4) button_value_adjust_pane_cp5

0x72ab,	// (0x000460a2) form2_midp_time_pane_ParamLimits

0x85ee,	// (0x000473e5) cell_sct_catagory_button_pane_ParamLimits

0x85ee,	// (0x000473e5) cell_sct_catagory_button_pane

0x7449,	// (0x00046240) bg_button_pane_cp01_ParamLimits

0x7449,	// (0x00046240) bg_button_pane_cp01

0x7484,	// (0x0004627b) cell_sct_catagory_button_pane_g1

0xa543,	// (0x0004933a) popup_tb_extension_window

0xe03c,	// (0x0004ce33) aid_size_cell_ext_ParamLimits

0xe03c,	// (0x0004ce33) aid_size_cell_ext

0x255d,	// (0x00041354) bg_tb_trans_pane_cp1_ParamLimits

0x255d,	// (0x00041354) bg_tb_trans_pane_cp1

0xe05c,	// (0x0004ce53) grid_tb_ext_pane_ParamLimits

0xe05c,	// (0x0004ce53) grid_tb_ext_pane

0xe08e,	// (0x0004ce85) cell_tb_ext_pane_ParamLimits

0xe08e,	// (0x0004ce85) cell_tb_ext_pane

0xe0a5,	// (0x0004ce9c) cell_tb_ext_pane_g1_ParamLimits

0xe0a5,	// (0x0004ce9c) cell_tb_ext_pane_g1

0x8600,	// (0x000473f7) cell_tb_ext_pane_t1

0x255d,	// (0x00041354) list_highlight_pane_cp11_ParamLimits

0x255d,	// (0x00041354) list_highlight_pane_cp11

0x95cf,	// (0x000483c6) popup_uni_indicator_window_ParamLimits

0x95cf,	// (0x000483c6) popup_uni_indicator_window

0x46ba,	// (0x000434b1) bg_popup_sub_pane_cp14

0x861b,	// (0x00047412) list_uniindi_pane

0x8627,	// (0x0004741e) uniindi_top_pane

0x255d,	// (0x00041354) bg_uniindi_top_pane

0x8646,	// (0x0004743d) uniindi_top_pane_g1

0x865c,	// (0x00047453) uniindi_top_pane_g2

0x0003,

0xfd20,	// (0x0004eb17) uniindi_top_pane_g

0x8686,	// (0x0004747d) uniindi_top_pane_t1

0x86b0,	// (0x000474a7) list_single_uniindi_pane_ParamLimits

0x86b0,	// (0x000474a7) list_single_uniindi_pane

0x7484,	// (0x0004627b) bg_uniindi_top_pane_g1

0x86c3,	// (0x000474ba) list_single_uniindi_pane_g1

0x86d6,	// (0x000474cd) list_single_uniindi_pane_t1

0x9453,	// (0x0004824a) control_bg_pane

0x86fb,	// (0x000474f2) bg_sctrl_sk_pane_cp1

0x8704,	// (0x000474fb) bg_sctrl_sk_pane_cp2

0x870d,	// (0x00047504) control_bg_pane_g1

0x8716,	// (0x0004750d) control_bg_pane_g2

0x0001,

0xfd29,	// (0x0004eb20) control_bg_pane_g

0x70b1,	// (0x00045ea8) cell_indicator_nsta_pane_g1_ParamLimits

0xd6e4,	// (0x0004c4db) cell_indicator_nsta_pane_g2_ParamLimits

0xfab5,	// (0x0004e8ac) cell_indicator_nsta_pane_g_ParamLimits

0xc824,	// (0x0004b61b) form2_midp_time_pane_t1_ParamLimits

0xa0df,	// (0x00048ed6) main_idle_act4_pane_ParamLimits

0xa0df,	// (0x00048ed6) main_idle_act4_pane

0xa543,	// (0x0004933a) popup_tb_extension_window_ParamLimits

0xe07e,	// (0x0004ce75) tb_ext_find_pane_ParamLimits

0xe07e,	// (0x0004ce75) tb_ext_find_pane

0x871f,	// (0x00047516) ai_gene_pane_1_cp1

0x5262,	// (0x00044059) ai_gene_pane_2_cp1

0x8727,	// (0x0004751e) list_single_idle_plugin_calendar_pane

0x8730,	// (0x00047527) list_single_idle_plugin_notification_pane

0x8739,	// (0x00047530) list_single_idle_plugin_player_pane

0xe0c2,	// (0x0004ceb9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe0c2,	// (0x0004ceb9) list_single_idle_plugin_shortcut_pane

0xe0e4,	// (0x0004cedb) main_idle_act4_pane_t1

0xe0f6,	// (0x0004ceed) main_idle_act4_pane_t2

0x0001,

0x0366,	// (0x0003f15d) main_idle_act4_pane_t

0xe108,	// (0x0004ceff) middle_sk_idle_act4_pane_ParamLimits

0xe108,	// (0x0004ceff) middle_sk_idle_act4_pane

0xe11e,	// (0x0004cf15) popup_clock_digital_analogue_window_cp2

0xe138,	// (0x0004cf2f) shortcut_wheel_idle_act4_pane_ParamLimits

0xe138,	// (0x0004cf2f) shortcut_wheel_idle_act4_pane

0x7484,	// (0x0004627b) shortcut_wheel_idle_act4_pane_g1

0x7484,	// (0x0004627b) shortcut_wheel_idle_act4_pane_g2

0x7484,	// (0x0004627b) shortcut_wheel_idle_act4_pane_g3

0x7484,	// (0x0004627b) shortcut_wheel_idle_act4_pane_g4

0x7484,	// (0x0004627b) shortcut_wheel_idle_act4_pane_g5

0x8742,	// (0x00047539) shortcut_wheel_idle_act4_pane_g6

0x874a,	// (0x00047541) shortcut_wheel_idle_act4_pane_g7

0x8752,	// (0x00047549) shortcut_wheel_idle_act4_pane_g8

0x875a,	// (0x00047551) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2e,	// (0x0004eb25) shortcut_wheel_idle_act4_pane_g

0x7615,	// (0x0004640c) middle_sk_idle_act4_pane_g1_ParamLimits

0x7615,	// (0x0004640c) middle_sk_idle_act4_pane_g1

0xe1a8,	// (0x0004cf9f) middle_sk_idle_act4_pane_g2_ParamLimits

0xe1a8,	// (0x0004cf9f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4c,	// (0x0004eb43) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4c,	// (0x0004eb43) middle_sk_idle_act4_pane_g

0xe1b4,	// (0x0004cfab) middle_sk_idle_act4_pane_t1_ParamLimits

0xe1b4,	// (0x0004cfab) middle_sk_idle_act4_pane_t1

0xe1d1,	// (0x0004cfc8) grid_ai_shortcut_pane_ParamLimits

0xe1d1,	// (0x0004cfc8) grid_ai_shortcut_pane

0xe1ea,	// (0x0004cfe1) list_highlight_pane_cp16_ParamLimits

0xe1ea,	// (0x0004cfe1) list_highlight_pane_cp16

0xe1f7,	// (0x0004cfee) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe1f7,	// (0x0004cfee) list_single_idle_plugin_shortcut_pane_g1

0xe203,	// (0x0004cffa) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe203,	// (0x0004cffa) list_single_idle_plugin_shortcut_pane_g2

0xe21b,	// (0x0004d012) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe21b,	// (0x0004d012) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x0393,	// (0x0003f18a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x0393,	// (0x0003f18a) list_single_idle_plugin_shortcut_pane_g

0xe22e,	// (0x0004d025) cell_ai_shortcut_pane_ParamLimits

0xe22e,	// (0x0004d025) cell_ai_shortcut_pane

0xe24f,	// (0x0004d046) cell_ai_shortcut_pane_g1_ParamLimits

0xe24f,	// (0x0004d046) cell_ai_shortcut_pane_g1

0x871f,	// (0x00047516) ai_gene_pane_1_cp2

0x8762,	// (0x00047559) ai_gene_pane_2_cp2

0x876a,	// (0x00047561) list_highlight_pane_cp15

0x8773,	// (0x0004756a) list_single_idle_plugin_calendar_pane_g1

0x876a,	// (0x00047561) list_highlight_pane_cp17

0x877b,	// (0x00047572) list_single_idle_plugin_calendar_pane_g1_copy1

0x8783,	// (0x0004757a) list_single_idle_plugin_player_pane_g1

0x6afd,	// (0x000458f4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd51,	// (0x0004eb48) list_single_idle_plugin_player_pane_g

0x878b,	// (0x00047582) list_single_idle_plugin_player_pane_t1

0x8799,	// (0x00047590) list_single_idle_plugin_player_pane_t2

0x87a7,	// (0x0004759e) list_single_idle_plugin_player_pane_t3

0x87b5,	// (0x000475ac) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd56,	// (0x0004eb4d) list_single_idle_plugin_player_pane_t

0x87c3,	// (0x000475ba) wait_bar_pane_cp15

0x87cb,	// (0x000475c2) grid_ai_notification_pane

0x6afd,	// (0x000458f4) list_single_idle_plugin_notification_pane_g1

0xe271,	// (0x0004d068) cell_ai_notification_pane_ParamLimits

0xe271,	// (0x0004d068) cell_ai_notification_pane

0x87d4,	// (0x000475cb) cell_ai_notification_pane_g1

0x87dc,	// (0x000475d3) cell_ai_notification_pane_t1

0xe27e,	// (0x0004d075) tb_ext_find_button_pane

0xe286,	// (0x0004d07d) tb_ext_find_pane_g1

0xe28e,	// (0x0004d085) tb_ext_find_pane_t1

0x4cbc,	// (0x00043ab3) tb_ext_find_button_pane_g1

0x87ea,	// (0x000475e1) tb_ext_find_button_pane_g2

0x0001,

0xfd5f,	// (0x0004eb56) tb_ext_find_button_pane_g

0xe0e4,	// (0x0004cedb) main_idle_act4_pane_t1_ParamLimits

0xe0f6,	// (0x0004ceed) main_idle_act4_pane_t2_ParamLimits

0x0366,	// (0x0003f15d) main_idle_act4_pane_t_ParamLimits

0xe11e,	// (0x0004cf15) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe12c,	// (0x0004cf23) sat_plugin_idle_act4_pane_ParamLimits

0xe12c,	// (0x0004cf23) sat_plugin_idle_act4_pane

0xe29c,	// (0x0004d093) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe29c,	// (0x0004d093) sat_plugin_idle_act4_pane_t1

0xe2af,	// (0x0004d0a6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe2af,	// (0x0004d0a6) sat_plugin_idle_act4_pane_t2

0xe2c2,	// (0x0004d0b9) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe2c2,	// (0x0004d0b9) sat_plugin_idle_act4_pane_t3

0xe2ed,	// (0x0004d0e4) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe2ed,	// (0x0004d0e4) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd64,	// (0x0004eb5b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd64,	// (0x0004eb5b) sat_plugin_idle_act4_pane_t

0x9518,	// (0x0004830f) popup_battery_window_ParamLimits

0x9518,	// (0x0004830f) popup_battery_window

0x255d,	// (0x00041354) bg_popup_sub_pane_cp25_ParamLimits

0x255d,	// (0x00041354) bg_popup_sub_pane_cp25

0x87f3,	// (0x000475ea) popup_battery_window_g1_ParamLimits

0x87f3,	// (0x000475ea) popup_battery_window_g1

0x87ff,	// (0x000475f6) popup_battery_window_t1_ParamLimits

0x87ff,	// (0x000475f6) popup_battery_window_t1

0x8811,	// (0x00047608) popup_battery_window_t2_ParamLimits

0x8811,	// (0x00047608) popup_battery_window_t2

0x0001,

0xfd6d,	// (0x0004eb64) popup_battery_window_t_ParamLimits

0xfd6d,	// (0x0004eb64) popup_battery_window_t

0xc25b,	// (0x0004b052) midp_canvas_pane_ParamLimits

0xc2bf,	// (0x0004b0b6) midp_keypad_pane_ParamLimits

0xc2bf,	// (0x0004b0b6) midp_keypad_pane

0x4813,	// (0x0004360a) main_midp_pane_ParamLimits

0x7184,	// (0x00045f7b) signal_pane_g2_cp_ParamLimits

0xe300,	// (0x0004d0f7) aid_size_cell_midp_keypad_ParamLimits

0xe300,	// (0x0004d0f7) aid_size_cell_midp_keypad

0xe31a,	// (0x0004d111) midp_keyp_game_grid_pane_ParamLimits

0xe31a,	// (0x0004d111) midp_keyp_game_grid_pane

0xe33a,	// (0x0004d131) midp_keyp_rocker_pane_ParamLimits

0xe33a,	// (0x0004d131) midp_keyp_rocker_pane

0xe36f,	// (0x0004d166) midp_keyp_sk_left_pane_ParamLimits

0xe36f,	// (0x0004d166) midp_keyp_sk_left_pane

0xe3c7,	// (0x0004d1be) midp_keyp_sk_right_pane_ParamLimits

0xe3c7,	// (0x0004d1be) midp_keyp_sk_right_pane

0x23aa,	// (0x000411a1) bg_button_pane_cp03

0xe41f,	// (0x0004d216) midp_keyp_sk_left_pane_g1

0x23aa,	// (0x000411a1) bg_button_pane_cp04

0xe41f,	// (0x0004d216) midp_keyp_sk_right_pane_g1

0x7484,	// (0x0004627b) midp_keyp_rocker_pane_g1

0xe428,	// (0x0004d21f) keyp_game_cell_pane_ParamLimits

0xe428,	// (0x0004d21f) keyp_game_cell_pane

0x23aa,	// (0x000411a1) bg_button_pane_cp02

0xe43b,	// (0x0004d232) keyp_game_cell_pane_g1

0x954e,	// (0x00048345) popup_fep_vkb2_window_ParamLimits

0x954e,	// (0x00048345) popup_fep_vkb2_window

0xb04e,	// (0x00049e45) aid_size_cell_vkb2_ParamLimits

0xb04e,	// (0x00049e45) aid_size_cell_vkb2

0xb0a2,	// (0x00049e99) popup_fep_vkb2_window_g1_ParamLimits

0xb0a2,	// (0x00049e99) popup_fep_vkb2_window_g1

0xb0ea,	// (0x00049ee1) vkb2_area_bottom_pane_ParamLimits

0xb0ea,	// (0x00049ee1) vkb2_area_bottom_pane

0xb136,	// (0x00049f2d) vkb2_area_keypad_pane_ParamLimits

0xb136,	// (0x00049f2d) vkb2_area_keypad_pane

0xb178,	// (0x00049f6f) vkb2_area_top_pane_ParamLimits

0xb178,	// (0x00049f6f) vkb2_area_top_pane

0xb1f2,	// (0x00049fe9) vkb2_top_entry_pane_ParamLimits

0xb1f2,	// (0x00049fe9) vkb2_top_entry_pane

0xb21c,	// (0x0004a013) vkb2_top_grid_left_pane_ParamLimits

0xb21c,	// (0x0004a013) vkb2_top_grid_left_pane

0xb23a,	// (0x0004a031) vkb2_top_grid_right_pane_ParamLimits

0xb23a,	// (0x0004a031) vkb2_top_grid_right_pane

0xb258,	// (0x0004a04f) vkb2_cell_keypad_pane_ParamLimits

0xb258,	// (0x0004a04f) vkb2_cell_keypad_pane

0xb329,	// (0x0004a120) vkb2_area_bottom_grid_pane_ParamLimits

0xb329,	// (0x0004a120) vkb2_area_bottom_grid_pane

0xb34f,	// (0x0004a146) vkb2_area_bottom_pane_g1_ParamLimits

0xb34f,	// (0x0004a146) vkb2_area_bottom_pane_g1

0xb373,	// (0x0004a16a) vkb2_area_bottom_pane_g2_ParamLimits

0xb373,	// (0x0004a16a) vkb2_area_bottom_pane_g2

0xb3a1,	// (0x0004a198) vkb2_area_bottom_pane_g3_ParamLimits

0xb3a1,	// (0x0004a198) vkb2_area_bottom_pane_g3

0x0002,

0xfd72,	// (0x0004eb69) vkb2_area_bottom_pane_g_ParamLimits

0xfd72,	// (0x0004eb69) vkb2_area_bottom_pane_g

0xb402,	// (0x0004a1f9) vkb2_top_cell_left_pane_ParamLimits

0xb402,	// (0x0004a1f9) vkb2_top_cell_left_pane

0xe444,	// (0x0004d23b) vkb2_top_entry_pane_g1_ParamLimits

0xe444,	// (0x0004d23b) vkb2_top_entry_pane_g1

0xe452,	// (0x0004d249) vkb2_top_entry_pane_t1_ParamLimits

0xe452,	// (0x0004d249) vkb2_top_entry_pane_t1

0x8836,	// (0x0004762d) vkb2_top_entry_pane_t2_ParamLimits

0x8836,	// (0x0004762d) vkb2_top_entry_pane_t2

0x8868,	// (0x0004765f) vkb2_top_entry_pane_t3_ParamLimits

0x8868,	// (0x0004765f) vkb2_top_entry_pane_t3

0x0002,

0xfd79,	// (0x0004eb70) vkb2_top_entry_pane_t_ParamLimits

0xfd79,	// (0x0004eb70) vkb2_top_entry_pane_t

0xb44f,	// (0x0004a246) vkb2_top_grid_right_pane_g1_ParamLimits

0xb44f,	// (0x0004a246) vkb2_top_grid_right_pane_g1

0xb465,	// (0x0004a25c) vkb2_top_grid_right_pane_g2_ParamLimits

0xb465,	// (0x0004a25c) vkb2_top_grid_right_pane_g2

0xb47d,	// (0x0004a274) vkb2_top_grid_right_pane_g3_ParamLimits

0xb47d,	// (0x0004a274) vkb2_top_grid_right_pane_g3

0xb495,	// (0x0004a28c) vkb2_top_grid_right_pane_g4_ParamLimits

0xb495,	// (0x0004a28c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd80,	// (0x0004eb77) vkb2_top_grid_right_pane_g_ParamLimits

0xfd80,	// (0x0004eb77) vkb2_top_grid_right_pane_g

0xb4ab,	// (0x0004a2a2) vkb2_top_cell_left_pane_g1

0xb4c2,	// (0x0004a2b9) vkb2_cell_keypad_pane_g1_ParamLimits

0xb4c2,	// (0x0004a2b9) vkb2_cell_keypad_pane_g1

0x888c,	// (0x00047683) vkb2_cell_keypad_pane_t1_ParamLimits

0x888c,	// (0x00047683) vkb2_cell_keypad_pane_t1

0xb4d0,	// (0x0004a2c7) vkb2_cell_bottom_grid_pane_ParamLimits

0xb4d0,	// (0x0004a2c7) vkb2_cell_bottom_grid_pane

0xb509,	// (0x0004a300) vkb2_cell_bottom_grid_pane_g1

0xe14c,	// (0x0004cf43) aid_call2_pane_cp02

0xe154,	// (0x0004cf4b) aid_call_pane_cp02

0xe15c,	// (0x0004cf53) clock_digital_number_pane_cp10

0xe164,	// (0x0004cf5b) clock_digital_number_pane_cp11

0xe16c,	// (0x0004cf63) clock_digital_number_pane_cp12

0xe174,	// (0x0004cf6b) clock_digital_number_pane_cp13

0xe17c,	// (0x0004cf73) clock_digital_separator_pane_cp10

0x4cbc,	// (0x00043ab3) popup_clock_digital_analogue_window_cp2_g1

0x4cbc,	// (0x00043ab3) popup_clock_digital_analogue_window_cp2_g2

0xe184,	// (0x0004cf7b) popup_clock_digital_analogue_window_cp2_g3

0x4cbc,	// (0x00043ab3) popup_clock_digital_analogue_window_cp2_g4

0xe184,	// (0x0004cf7b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd41,	// (0x0004eb38) popup_clock_digital_analogue_window_cp2_g

0xe18c,	// (0x0004cf83) popup_clock_digital_analogue_window_cp2_t1

0xe19a,	// (0x0004cf91) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x0389,	// (0x0003f180) popup_clock_digital_analogue_window_cp2_t

0x7484,	// (0x0004627b) clock_digital_number_pane_cp10_g1

0x7484,	// (0x0004627b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3c,	// (0x0004e933) clock_digital_number_pane_cp10_g

0x7484,	// (0x0004627b) clock_digital_separator_pane_cp10_g1

0x7484,	// (0x0004627b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3c,	// (0x0004e933) clock_digital_separator_pane_cp10_g

0x8668,	// (0x0004745f) uniindi_top_pane_g3

0x8679,	// (0x00047470) uniindi_top_pane_g4

0xb2e3,	// (0x0004a0da) vkb2_row_keypad_pane_ParamLimits

0xb2e3,	// (0x0004a0da) vkb2_row_keypad_pane

0xb529,	// (0x0004a320) vkb2_cell_t_keypad_pane_ParamLimits

0xb529,	// (0x0004a320) vkb2_cell_t_keypad_pane

0xb539,	// (0x0004a330) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xb539,	// (0x0004a330) vkb2_cell_t_keypad_pane_cp08

0xb54c,	// (0x0004a343) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xb54c,	// (0x0004a343) vkb2_cell_t_keypad_pane_cp09

0xb560,	// (0x0004a357) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xb560,	// (0x0004a357) vkb2_cell_t_keypad_pane_cp01

0xb571,	// (0x0004a368) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xb571,	// (0x0004a368) vkb2_cell_t_keypad_pane_cp02

0xb582,	// (0x0004a379) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xb582,	// (0x0004a379) vkb2_cell_t_keypad_pane_cp03

0xb593,	// (0x0004a38a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xb593,	// (0x0004a38a) vkb2_cell_t_keypad_pane_cp04

0xb5a4,	// (0x0004a39b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xb5a4,	// (0x0004a39b) vkb2_cell_t_keypad_pane_cp05

0xb5b5,	// (0x0004a3ac) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xb5b5,	// (0x0004a3ac) vkb2_cell_t_keypad_pane_cp06

0xb5c6,	// (0x0004a3bd) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xb5c6,	// (0x0004a3bd) vkb2_cell_t_keypad_pane_cp07

0xb5d7,	// (0x0004a3ce) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xb5d7,	// (0x0004a3ce) vkb2_cell_t_keypad_pane_cp10

0xad89,	// (0x00049b80) vkb2_cell_t_keypad_pane_g1

0x88a3,	// (0x0004769a) vkb2_cell_t_keypad_pane_t1

0x9453,	// (0x0004824a) popup_grid_graphic2_window

0xe484,	// (0x0004d27b) aid_size_cell_graphic2_ParamLimits

0xe484,	// (0x0004d27b) aid_size_cell_graphic2

0xe4bc,	// (0x0004d2b3) bg_popup_window_pane_cp21_ParamLimits

0xe4bc,	// (0x0004d2b3) bg_popup_window_pane_cp21

0xe4ca,	// (0x0004d2c1) graphic2_pages_pane_ParamLimits

0xe4ca,	// (0x0004d2c1) graphic2_pages_pane

0xe510,	// (0x0004d307) grid_graphic2_control_pane_ParamLimits

0xe510,	// (0x0004d307) grid_graphic2_control_pane

0xe54e,	// (0x0004d345) grid_graphic2_pane_ParamLimits

0xe54e,	// (0x0004d345) grid_graphic2_pane

0xe5c2,	// (0x0004d3b9) cell_graphic2_pane

0x9453,	// (0x0004824a) main_comp_mode_pane

0x82df,	// (0x000470d6) list_ai3_gene_pane_ParamLimits

0xdf26,	// (0x0004cd1d) bg_popup_window_pane_cp19_ParamLimits

0x844a,	// (0x00047241) bg_touch_area_indi_pane_ParamLimits

0x844a,	// (0x00047241) bg_touch_area_indi_pane

0x8460,	// (0x00047257) bg_touch_area_indi_pane_cp01_ParamLimits

0x8460,	// (0x00047257) bg_touch_area_indi_pane_cp01

0x8476,	// (0x0004726d) bg_touch_area_indi_pane_cp02_ParamLimits

0x8476,	// (0x0004726d) bg_touch_area_indi_pane_cp02

0x848e,	// (0x00047285) bg_touch_area_indi_pane_cp03_ParamLimits

0x848e,	// (0x00047285) bg_touch_area_indi_pane_cp03

0x84a8,	// (0x0004729f) popup_slider_window_g1_ParamLimits

0x84c4,	// (0x000472bb) popup_slider_window_g2_ParamLimits

0x84e0,	// (0x000472d7) popup_slider_window_g3_ParamLimits

0xfce0,	// (0x0004ead7) popup_slider_window_g_ParamLimits

0x84fc,	// (0x000472f3) popup_slider_window_t1_ParamLimits

0x8542,	// (0x00047339) small_volume_slider_vertical_pane_ParamLimits

0xe5c2,	// (0x0004d3b9) cell_graphic2_pane_ParamLimits

0xe610,	// (0x0004d407) bg_button_pane_cp10_ParamLimits

0xe610,	// (0x0004d407) bg_button_pane_cp10

0xe623,	// (0x0004d41a) bg_button_pane_cp11_ParamLimits

0xe623,	// (0x0004d41a) bg_button_pane_cp11

0xe636,	// (0x0004d42d) graphic2_pages_pane_g1_ParamLimits

0xe636,	// (0x0004d42d) graphic2_pages_pane_g1

0xe651,	// (0x0004d448) graphic2_pages_pane_g2_ParamLimits

0xe651,	// (0x0004d448) graphic2_pages_pane_g2

0x0001,

0x03d7,	// (0x0003f1ce) graphic2_pages_pane_g_ParamLimits

0x03d7,	// (0x0003f1ce) graphic2_pages_pane_g

0xe669,	// (0x0004d460) graphic2_pages_pane_t1_ParamLimits

0xe669,	// (0x0004d460) graphic2_pages_pane_t1

0xe67f,	// (0x0004d476) cell_graphic2_control_pane_ParamLimits

0xe67f,	// (0x0004d476) cell_graphic2_control_pane

0xe6a0,	// (0x0004d497) cell_graphic2_pane_g1_ParamLimits

0xe6a0,	// (0x0004d497) cell_graphic2_pane_g1

0xe6ad,	// (0x0004d4a4) cell_graphic2_pane_g2_ParamLimits

0xe6ad,	// (0x0004d4a4) cell_graphic2_pane_g2

0xe6ba,	// (0x0004d4b1) cell_graphic2_pane_g3_ParamLimits

0xe6ba,	// (0x0004d4b1) cell_graphic2_pane_g3

0xe6c7,	// (0x0004d4be) cell_graphic2_pane_g4_ParamLimits

0xe6c7,	// (0x0004d4be) cell_graphic2_pane_g4

0xe6d4,	// (0x0004d4cb) cell_graphic2_pane_g5_ParamLimits

0xe6d4,	// (0x0004d4cb) cell_graphic2_pane_g5

0x0004,

0x03dc,	// (0x0003f1d3) cell_graphic2_pane_g_ParamLimits

0x03dc,	// (0x0003f1d3) cell_graphic2_pane_g

0xe6ef,	// (0x0004d4e6) cell_graphic2_pane_t1_ParamLimits

0xe6ef,	// (0x0004d4e6) cell_graphic2_pane_t1

0x5690,	// (0x00044487) grid_highlight_pane_cp11_ParamLimits

0x5690,	// (0x00044487) grid_highlight_pane_cp11

0x255d,	// (0x00041354) bg_button_pane_cp05

0xe718,	// (0x0004d50f) cell_graphic2_control_pane_g1

0x7484,	// (0x0004627b) bg_touch_area_indi_pane_g1

0x88b5,	// (0x000476ac) aid_cmod_rocker_key_size

0x88bf,	// (0x000476b6) aid_cmode_itu_key_size

0x88c9,	// (0x000476c0) main_cmode_video_pane

0x88d3,	// (0x000476ca) main_comp_mode_itu_pane

0x88df,	// (0x000476d6) main_comp_mode_rocker_pane

0x88eb,	// (0x000476e2) cell_cmode_rocker_pane_ParamLimits

0x88eb,	// (0x000476e2) cell_cmode_rocker_pane

0x88fd,	// (0x000476f4) cell_cmode_itu_pane_ParamLimits

0x88fd,	// (0x000476f4) cell_cmode_itu_pane

0x46ba,	// (0x000434b1) bg_button_pane_cp06_ParamLimits

0x46ba,	// (0x000434b1) bg_button_pane_cp06

0x7615,	// (0x0004640c) cell_cmode_rocker_pane_g1_ParamLimits

0x7615,	// (0x0004640c) cell_cmode_rocker_pane_g1

0x8567,	// (0x0004735e) cell_cmode_rocker_pane_g2_ParamLimits

0x8567,	// (0x0004735e) cell_cmode_rocker_pane_g2

0x0001,

0xfd8e,	// (0x0004eb85) cell_cmode_rocker_pane_g_ParamLimits

0xfd8e,	// (0x0004eb85) cell_cmode_rocker_pane_g

0x23aa,	// (0x000411a1) bg_button_pane_cp07

0x8912,	// (0x00047709) cell_cmode_itu_pane_g1

0x891b,	// (0x00047712) cell_cmode_itu_pane_t1

0x8929,	// (0x00047720) cell_cmode_itu_pane_t2

0x0001,

0xfd93,	// (0x0004eb8a) cell_cmode_itu_pane_t

0x86eb,	// (0x000474e2) aid_touch_ctrl_left

0x86f3,	// (0x000474ea) aid_touch_ctrl_right

0x23aa,	// (0x000411a1) compa_mode_pane

0xe740,	// (0x0004d537) aid_cmod_rocker_key_size_cp

0xe74a,	// (0x0004d541) aid_cmode_itu_key_size_cp

0x8937,	// (0x0004772e) compa_mode_pane_g1

0x893f,	// (0x00047736) compa_mode_pane_g2

0x8947,	// (0x0004773e) compa_mode_pane_g3

0x0002,

0xfd98,	// (0x0004eb8f) compa_mode_pane_g

0xe754,	// (0x0004d54b) main_comp_mode_itu_pane_cp

0xe75c,	// (0x0004d553) main_comp_mode_rocker_pane_cp

0xe764,	// (0x0004d55b) cell_cmode_itu_pane_cp_ParamLimits

0xe764,	// (0x0004d55b) cell_cmode_itu_pane_cp

0xe779,	// (0x0004d570) cell_cmode_rocker_pane_cp_ParamLimits

0xe779,	// (0x0004d570) cell_cmode_rocker_pane_cp

0x46ba,	// (0x000434b1) bg_button_pane_cp06_cp_ParamLimits

0x46ba,	// (0x000434b1) bg_button_pane_cp06_cp

0x7615,	// (0x0004640c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7615,	// (0x0004640c) cell_cmode_rocker_pane_g1_cp

0x7484,	// (0x0004627b) cell_cmode_rocker_pane_g2_cp

0x23aa,	// (0x000411a1) bg_button_pane_cp07_cp

0xe78b,	// (0x0004d582) cell_cmode_itu_pane_g1_cp

0xe794,	// (0x0004d58b) cell_cmode_itu_pane_t1_cp

0xe794,	// (0x0004d58b) cell_cmode_itu_pane_t2_cp

0xd590,	// (0x0004c387) settings_code_pane_cp2

0x242a,	// (0x00041221) bg_popup_window_pane_cp3_ParamLimits

0x272b,	// (0x00041522) heading_pane_cp3_ParamLimits

0x2737,	// (0x0004152e) listscroll_popup_graphic_pane_ParamLimits

0xab32,	// (0x00049929) fep_hwr_aid_pane_ParamLimits

0xafa9,	// (0x00049da0) aid_touch_sctrl_top_ParamLimits

0xafc4,	// (0x00049dbb) sctrl_sk_top_pane_g1_ParamLimits

0xad89,	// (0x00049b80) sctrl_sk_top_pane_g2_ParamLimits

0xfcf9,	// (0x0004eaf0) sctrl_sk_top_pane_g_ParamLimits

0xafd1,	// (0x00049dc8) sctrl_sk_top_pane_t1_ParamLimits

0xafa9,	// (0x00049da0) aid_touch_sctrl_bottom_ParamLimits

0xafd1,	// (0x00049dc8) sctrl_sk_bottom_pane_t1_ParamLimits

0x8634,	// (0x0004742b) aid_area_touch_clock

0xb1ba,	// (0x00049fb1) aid_vkb2_area_top_pane_cell_ParamLimits

0xb1ba,	// (0x00049fb1) aid_vkb2_area_top_pane_cell

0xb305,	// (0x0004a0fc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb305,	// (0x0004a0fc) aid_vkb2_area_bottom_pane_cell

0x882e,	// (0x00047625) popup_char_count_window

0x894f,	// (0x00047746) popup_char_count_window_g1

0x8958,	// (0x0004774f) popup_char_count_window_g2

0x8961,	// (0x00047758) popup_char_count_window_g3

0x0002,

0xfd9f,	// (0x0004eb96) popup_char_count_window_g

0x896a,	// (0x00047761) popup_char_count_window_t1

0xb080,	// (0x00049e77) popup_fep_char_preview_window_ParamLimits

0xb080,	// (0x00049e77) popup_fep_char_preview_window

0xb1d8,	// (0x00049fcf) vkb2_top_candi_pane_ParamLimits

0xb1d8,	// (0x00049fcf) vkb2_top_candi_pane

0xe7a2,	// (0x0004d599) cell_vkb2_top_candi_pane_ParamLimits

0xe7a2,	// (0x0004d599) cell_vkb2_top_candi_pane

0xb5ec,	// (0x0004a3e3) bg_popup_fep_char_preview_window_ParamLimits

0xb5ec,	// (0x0004a3e3) bg_popup_fep_char_preview_window

0xb5fa,	// (0x0004a3f1) popup_fep_char_preview_window_t1_ParamLimits

0xb5fa,	// (0x0004a3f1) popup_fep_char_preview_window_t1

0x8988,	// (0x0004777f) bg_popup_fep_char_preview_window_g1

0x8980,	// (0x00047777) bg_popup_fep_char_preview_window_g2

0x8978,	// (0x0004776f) bg_popup_fep_char_preview_window_g3

0x89a8,	// (0x0004779f) bg_popup_fep_char_preview_window_g4

0x89a0,	// (0x00047797) bg_popup_fep_char_preview_window_g5

0xb634,	// (0x0004a42b) bg_popup_fep_char_preview_window_g6

0x8998,	// (0x0004778f) bg_popup_fep_char_preview_window_g7

0x8990,	// (0x00047787) bg_popup_fep_char_preview_window_g8

0x89b0,	// (0x000477a7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfda6,	// (0x0004eb9d) bg_popup_fep_char_preview_window_g

0xad89,	// (0x00049b80) cell_vkb2_top_candi_pane_g1_ParamLimits

0xad89,	// (0x00049b80) cell_vkb2_top_candi_pane_g1

0xad97,	// (0x00049b8e) cell_vkb2_top_candi_pane_g2_ParamLimits

0xad97,	// (0x00049b8e) cell_vkb2_top_candi_pane_g2

0x89b8,	// (0x000477af) cell_vkb2_top_candi_pane_g3_ParamLimits

0x89b8,	// (0x000477af) cell_vkb2_top_candi_pane_g3

0xb63c,	// (0x0004a433) cell_vkb2_top_candi_pane_g4_ParamLimits

0xb63c,	// (0x0004a433) cell_vkb2_top_candi_pane_g4

0x7875,	// (0x0004666c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7875,	// (0x0004666c) cell_vkb2_top_candi_pane_g5

0xb65d,	// (0x0004a454) cell_vkb2_top_candi_pane_g6_ParamLimits

0xb65d,	// (0x0004a454) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb9,	// (0x0004ebb0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb9,	// (0x0004ebb0) cell_vkb2_top_candi_pane_g

0xb66b,	// (0x0004a462) cell_vkb2_top_candi_pane_t1

0xa96e,	// (0x00049765) aid_size_touch_slider_mark_ParamLimits

0xa96e,	// (0x00049765) aid_size_touch_slider_mark

0xe500,	// (0x0004d2f7) grid_graphic2_catg_pane_ParamLimits

0xe500,	// (0x0004d2f7) grid_graphic2_catg_pane

0xe59e,	// (0x0004d395) popup_grid_graphic2_window_t1_ParamLimits

0xe59e,	// (0x0004d395) popup_grid_graphic2_window_t1

0xe5b0,	// (0x0004d3a7) popup_grid_graphic2_window_t2_ParamLimits

0xe5b0,	// (0x0004d3a7) popup_grid_graphic2_window_t2

0x0001,

0xfd89,	// (0x0004eb80) popup_grid_graphic2_window_t_ParamLimits

0xfd89,	// (0x0004eb80) popup_grid_graphic2_window_t

0x255d,	// (0x00041354) bg_button_pane_cp05_ParamLimits

0xe718,	// (0x0004d50f) cell_graphic2_control_pane_g1_ParamLimits

0xcc7d,	// (0x0004ba74) cell_graphic2_catg_pane_ParamLimits

0xcc7d,	// (0x0004ba74) cell_graphic2_catg_pane

0x23aa,	// (0x000411a1) bg_button_pane_cp12

0xcc8f,	// (0x0004ba86) cell_graphic2_catg_pane_g1

0x8600,	// (0x000473f7) cell_tb_ext_pane_t1_ParamLimits

0xb422,	// (0x0004a219) vkb2_top_cell_right_narrow_pane_ParamLimits

0xb422,	// (0x0004a219) vkb2_top_cell_right_narrow_pane

0xb43a,	// (0x0004a231) vkb2_top_cell_right_wide_pane_ParamLimits

0xb43a,	// (0x0004a231) vkb2_top_cell_right_wide_pane

0xab24,	// (0x0004991b) bg_vkb2_func_pane_ParamLimits

0xab24,	// (0x0004991b) bg_vkb2_func_pane

0xb4ab,	// (0x0004a2a2) vkb2_top_cell_left_pane_g1_ParamLimits

0xab24,	// (0x0004991b) bg_vkb2_fuc_pane_cp03_ParamLimits

0xab24,	// (0x0004991b) bg_vkb2_fuc_pane_cp03

0xb509,	// (0x0004a300) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x562c,	// (0x00044423) bg_vkb2_func_pane_g1

0x5624,	// (0x0004441b) bg_vkb2_func_pane_g2

0x5634,	// (0x0004442b) bg_vkb2_func_pane_g3

0x563c,	// (0x00044433) bg_vkb2_func_pane_g4

0x5644,	// (0x0004443b) bg_vkb2_func_pane_g5

0x564c,	// (0x00044443) bg_vkb2_func_pane_g6

0x565c,	// (0x00044453) bg_vkb2_func_pane_g7

0x5654,	// (0x0004444b) bg_vkb2_func_pane_g8

0x561c,	// (0x00044413) bg_vkb2_func_pane_g9

0x0008,

0xfdc6,	// (0x0004ebbd) bg_vkb2_func_pane_g

0xab24,	// (0x0004991b) bg_vkb2_fuc_pane_cp01_ParamLimits

0xab24,	// (0x0004991b) bg_vkb2_fuc_pane_cp01

0xb4ab,	// (0x0004a2a2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xb4ab,	// (0x0004a2a2) vkb2_top_cell_right_wide_pane_g1

0xab24,	// (0x0004991b) bg_vkb2_fuc_pane_cp02_ParamLimits

0xab24,	// (0x0004991b) bg_vkb2_fuc_pane_cp02

0xb509,	// (0x0004a300) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xb509,	// (0x0004a300) vkb2_top_cell_right_narrow_pane_g1

0xdea4,	// (0x0004cc9b) aid_touch_area_decrease_ParamLimits

0xdea4,	// (0x0004cc9b) aid_touch_area_decrease

0xdec8,	// (0x0004ccbf) aid_touch_area_increase_ParamLimits

0xdec8,	// (0x0004ccbf) aid_touch_area_increase

0xded4,	// (0x0004cccb) aid_touch_area_mute_ParamLimits

0xded4,	// (0x0004cccb) aid_touch_area_mute

0xdef8,	// (0x0004ccef) aid_touch_area_slider_ParamLimits

0xdef8,	// (0x0004ccef) aid_touch_area_slider

0xdf32,	// (0x0004cd29) popup_slider_window_g4_ParamLimits

0xdf32,	// (0x0004cd29) popup_slider_window_g4

0xdf3e,	// (0x0004cd35) popup_slider_window_g5_ParamLimits

0xdf3e,	// (0x0004cd35) popup_slider_window_g5

0xdf60,	// (0x0004cd57) popup_slider_window_g6_ParamLimits

0xdf60,	// (0x0004cd57) popup_slider_window_g6

0x852a,	// (0x00047321) popup_slider_window_t2_ParamLimits

0x852a,	// (0x00047321) popup_slider_window_t2

0x0001,

0xfced,	// (0x0004eae4) popup_slider_window_t_ParamLimits

0xfced,	// (0x0004eae4) popup_slider_window_t

0xdf72,	// (0x0004cd69) slider_pane_ParamLimits

0xdf72,	// (0x0004cd69) slider_pane

0xe7ef,	// (0x0004d5e6) slider_pane_g1_ParamLimits

0xe7ef,	// (0x0004d5e6) slider_pane_g1

0xe803,	// (0x0004d5fa) slider_pane_g2_ParamLimits

0xe803,	// (0x0004d5fa) slider_pane_g2

0xe819,	// (0x0004d610) slider_pane_g3_ParamLimits

0xe819,	// (0x0004d610) slider_pane_g3

0x0003,

0x0437,	// (0x0003f22e) slider_pane_g_ParamLimits

0x0437,	// (0x0003f22e) slider_pane_g

0xa59f,	// (0x00049396) popup_tb_float_extension_window_ParamLimits

0xa59f,	// (0x00049396) popup_tb_float_extension_window

0xe845,	// (0x0004d63c) aid_size_cell_tb_float_ext

0x23aa,	// (0x000411a1) bg_popup_sub_window_cp28

0xe851,	// (0x0004d648) grid_tb_float_ext_pane

0xe85b,	// (0x0004d652) cell_tb_float_ext_pane_ParamLimits

0xe85b,	// (0x0004d652) cell_tb_float_ext_pane

0xe875,	// (0x0004d66c) cell_tb_float_ext_pane_g1

0xe87e,	// (0x0004d675) grid_highlight_pane_cp12

0xac73,	// (0x00049a6a) cell_last_hwr_side_pane_ParamLimits

0xac73,	// (0x00049a6a) cell_last_hwr_side_pane

0x7484,	// (0x0004627b) cell_last_hwr_side_pane_g1

0xe887,	// (0x0004d67e) cell_last_hwr_side_pane_g2

0x0001,

0xfdd9,	// (0x0004ebd0) cell_last_hwr_side_pane_g

0xb3d1,	// (0x0004a1c8) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb3d1,	// (0x0004a1c8) vkb2_area_bottom_space_btn_pane

0xad89,	// (0x00049b80) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x88a3,	// (0x0004769a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xb66b,	// (0x0004a462) cell_vkb2_top_candi_pane_t1_ParamLimits

0xb68a,	// (0x0004a481) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xb68a,	// (0x0004a481) vkb2_area_bottom_space_btn_pane_g1

0xb6c4,	// (0x0004a4bb) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xb6c4,	// (0x0004a4bb) vkb2_area_bottom_space_btn_pane_g2

0xb6fa,	// (0x0004a4f1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xb6fa,	// (0x0004a4f1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdde,	// (0x0004ebd5) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdde,	// (0x0004ebd5) vkb2_area_bottom_space_btn_pane_g

0xabe7,	// (0x000499de) cel_fep_hwr_func_pane_ParamLimits

0xabe7,	// (0x000499de) cel_fep_hwr_func_pane

0xac23,	// (0x00049a1a) cell_hwr_side_button_pane_ParamLimits

0xac23,	// (0x00049a1a) cell_hwr_side_button_pane

0x8634,	// (0x0004742b) aid_area_touch_clock_ParamLimits

0x255d,	// (0x00041354) bg_uniindi_top_pane_ParamLimits

0x8646,	// (0x0004743d) uniindi_top_pane_g1_ParamLimits

0x865c,	// (0x00047453) uniindi_top_pane_g2_ParamLimits

0x8668,	// (0x0004745f) uniindi_top_pane_g3_ParamLimits

0x8679,	// (0x00047470) uniindi_top_pane_g4_ParamLimits

0xfd20,	// (0x0004eb17) uniindi_top_pane_g_ParamLimits

0x8686,	// (0x0004747d) uniindi_top_pane_t1_ParamLimits

0x255d,	// (0x00041354) bg_vkb2_func_pane_cp01_ParamLimits

0x255d,	// (0x00041354) bg_vkb2_func_pane_cp01

0xe890,	// (0x0004d687) cel_fep_hwr_func_pane_g1_ParamLimits

0xe890,	// (0x0004d687) cel_fep_hwr_func_pane_g1

0x255d,	// (0x00041354) bg_vkb2_func_pane_cp02_ParamLimits

0x255d,	// (0x00041354) bg_vkb2_func_pane_cp02

0xe890,	// (0x0004d687) cell_hwr_side_button_pane_g1_ParamLimits

0xe890,	// (0x0004d687) cell_hwr_side_button_pane_g1

0x5532,	// (0x00044329) status_pane_g4_ParamLimits

0x5532,	// (0x00044329) status_pane_g4

0x554c,	// (0x00044343) status_pane_t1

0x7313,	// (0x0004610a) form2_midp_gauge_slider_cont_pane

0x731b,	// (0x00046112) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd7f4,	// (0x0004c5eb) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd806,	// (0x0004c5fd) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaef,	// (0x0004e8e6) form2_midp_gauge_slider_pane_t_ParamLimits

0x732d,	// (0x00046124) form2_midp_slider_pane_ParamLimits

0xb040,	// (0x00049e37) aid_size_cell_func_vkb2_ParamLimits

0xb040,	// (0x00049e37) aid_size_cell_func_vkb2

0xe831,	// (0x0004d628) slider_pane_g4_ParamLimits

0xe831,	// (0x0004d628) slider_pane_g4

0xb744,	// (0x0004a53b) form2_midp_gauge_slider_pane_t2_cp01

0xb752,	// (0x0004a549) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb752,	// (0x0004a549) form2_midp_gauge_slider_pane_t3_cp01

0xb76f,	// (0x0004a566) form2_midp_slider_pane_cp01

0x23aa,	// (0x000411a1) navi_smil_pane

0xe8c0,	// (0x0004d6b7) navi_smil_pane_g1

0xe8c8,	// (0x0004d6bf) navi_smil_pane_t1

0xe89e,	// (0x0004d695) form2_midp_slider_pane_g1

0xe8a7,	// (0x0004d69e) form2_midp_slider_pane_g2

0xe8af,	// (0x0004d6a6) form2_midp_slider_pane_g3

0xe89e,	// (0x0004d695) form2_midp_slider_pane_g4

0xcc98,	// (0x0004ba8f) form2_midp_slider_pane_g5

0x0004,

0xfde7,	// (0x0004ebde) form2_midp_slider_pane_g

0xb734,	// (0x0004a52b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xb734,	// (0x0004a52b) vkb2_area_bottom_space_btn_pane_g4

0xcf90,	// (0x0004bd87) lc0_navi_pane_ParamLimits

0xcf90,	// (0x0004bd87) lc0_navi_pane

0xd006,	// (0x0004bdfd) lc0_stat_indi_pane_ParamLimits

0xd006,	// (0x0004bdfd) lc0_stat_indi_pane

0xd01d,	// (0x0004be14) ls0_title_pane_ParamLimits

0xd01d,	// (0x0004be14) ls0_title_pane

0x46ba,	// (0x000434b1) bg_popup_sub_pane_cp14_ParamLimits

0x861b,	// (0x00047412) list_uniindi_pane_ParamLimits

0x8627,	// (0x0004741e) uniindi_top_pane_ParamLimits

0x86c3,	// (0x000474ba) list_single_uniindi_pane_g1_ParamLimits

0x86d6,	// (0x000474cd) list_single_uniindi_pane_t1_ParamLimits

0xb778,	// (0x0004a56f) lc0_stat_clock_pane_ParamLimits

0xb778,	// (0x0004a56f) lc0_stat_clock_pane

0xcca1,	// (0x0004ba98) lc0_stat_indi_pane_g1_ParamLimits

0xcca1,	// (0x0004ba98) lc0_stat_indi_pane_g1

0xccae,	// (0x0004baa5) lc0_stat_indi_pane_g2_ParamLimits

0xccae,	// (0x0004baa5) lc0_stat_indi_pane_g2

0x0001,

0xfdf2,	// (0x0004ebe9) lc0_stat_indi_pane_g_ParamLimits

0xfdf2,	// (0x0004ebe9) lc0_stat_indi_pane_g

0xb785,	// (0x0004a57c) lc0_uni_indicator_pane_ParamLimits

0xb785,	// (0x0004a57c) lc0_uni_indicator_pane

0xccbb,	// (0x0004bab2) ls0_title_pane_g1_ParamLimits

0xccbb,	// (0x0004bab2) ls0_title_pane_g1

0xcccf,	// (0x0004bac6) ls0_title_pane_t1_ParamLimits

0xcccf,	// (0x0004bac6) ls0_title_pane_t1

0xb792,	// (0x0004a589) lc0_uni_indicator_pane_g1_ParamLimits

0xb792,	// (0x0004a589) lc0_uni_indicator_pane_g1

0xe8d6,	// (0x0004d6cd) lc0_stat_clock_pane_t1

0x9453,	// (0x0004824a) main_ai5_pane

0xe8e4,	// (0x0004d6db) ai5_sk_pane_ParamLimits

0xe8e4,	// (0x0004d6db) ai5_sk_pane

0xcd05,	// (0x0004bafc) cell_ai5_widget_pane_ParamLimits

0xcd05,	// (0x0004bafc) cell_ai5_widget_pane

0xe8f1,	// (0x0004d6e8) aid_size_cell_widget_grid

0xe8ff,	// (0x0004d6f6) bg_ai5_widget_pane_ParamLimits

0xe8ff,	// (0x0004d6f6) bg_ai5_widget_pane

0xe973,	// (0x0004d76a) cell_ai5_widget_pane_g2

0xe983,	// (0x0004d77a) cell_ai5_widget_pane_g3

0xe99a,	// (0x0004d791) cell_ai5_widget_pane_g4

0xe9a6,	// (0x0004d79d) cell_ai5_widget_pane_g5

0xe9b2,	// (0x0004d7a9) cell_ai5_widget_pane_g6

0xe9be,	// (0x0004d7b5) cell_ai5_widget_pane_g7

0xea06,	// (0x0004d7fd) cell_ai5_widget_pane_t1_ParamLimits

0xea06,	// (0x0004d7fd) cell_ai5_widget_pane_t1

0xea23,	// (0x0004d81a) cell_ai5_widget_pane_t2_ParamLimits

0xea23,	// (0x0004d81a) cell_ai5_widget_pane_t2

0xea3b,	// (0x0004d832) cell_ai5_widget_pane_t3_ParamLimits

0xea3b,	// (0x0004d832) cell_ai5_widget_pane_t3

0xea53,	// (0x0004d84a) cell_ai5_widget_pane_t4_ParamLimits

0xea53,	// (0x0004d84a) cell_ai5_widget_pane_t4

0xea70,	// (0x0004d867) cell_ai5_widget_pane_t5_ParamLimits

0xea70,	// (0x0004d867) cell_ai5_widget_pane_t5

0xea8f,	// (0x0004d886) cell_ai5_widget_pane_t6_ParamLimits

0xea8f,	// (0x0004d886) cell_ai5_widget_pane_t6

0xeaa1,	// (0x0004d898) cell_ai5_widget_pane_t7_ParamLimits

0xeaa1,	// (0x0004d898) cell_ai5_widget_pane_t7

0xeaba,	// (0x0004d8b1) cell_ai5_widget_pane_t8_ParamLimits

0xeaba,	// (0x0004d8b1) cell_ai5_widget_pane_t8

0x0009,

0x0473,	// (0x0003f26a) cell_ai5_widget_pane_t_ParamLimits

0x0473,	// (0x0003f26a) cell_ai5_widget_pane_t

0xeb0e,	// (0x0004d905) grid_ai5_widget_pane

0x46ba,	// (0x000434b1) highlight_cell_ai5_widget_pane_ParamLimits

0x46ba,	// (0x000434b1) highlight_cell_ai5_widget_pane

0xcdcf,	// (0x0004bbc6) ai5_sk_left_pane

0xcdd9,	// (0x0004bbd0) ai5_sk_middle_pane

0xcde3,	// (0x0004bbda) ai5_sk_right_pane

0xeb22,	// (0x0004d919) bg_ai5_widget_pane_g1_ParamLimits

0xeb22,	// (0x0004d919) bg_ai5_widget_pane_g1

0xeb2e,	// (0x0004d925) bg_ai5_widget_pane_g2_ParamLimits

0xeb2e,	// (0x0004d925) bg_ai5_widget_pane_g2

0xeb3a,	// (0x0004d931) bg_ai5_widget_pane_g3_ParamLimits

0xeb3a,	// (0x0004d931) bg_ai5_widget_pane_g3

0xeb46,	// (0x0004d93d) bg_ai5_widget_pane_g4_ParamLimits

0xeb46,	// (0x0004d93d) bg_ai5_widget_pane_g4

0xeb52,	// (0x0004d949) bg_ai5_widget_pane_g5_ParamLimits

0xeb52,	// (0x0004d949) bg_ai5_widget_pane_g5

0xeb5e,	// (0x0004d955) bg_ai5_widget_pane_g6_ParamLimits

0xeb5e,	// (0x0004d955) bg_ai5_widget_pane_g6

0xeb6a,	// (0x0004d961) bg_ai5_widget_pane_g7_ParamLimits

0xeb6a,	// (0x0004d961) bg_ai5_widget_pane_g7

0xeb76,	// (0x0004d96d) bg_ai5_widget_pane_g8_ParamLimits

0xeb76,	// (0x0004d96d) bg_ai5_widget_pane_g8

0xeb82,	// (0x0004d979) bg_ai5_widget_pane_g9_ParamLimits

0xeb82,	// (0x0004d979) bg_ai5_widget_pane_g9

0x0008,

0x0488,	// (0x0003f27f) bg_ai5_widget_pane_g_ParamLimits

0x0488,	// (0x0003f27f) bg_ai5_widget_pane_g

0xebb4,	// (0x0004d9ab) cell_shortcut_ai5_widget_pane_ParamLimits

0xebb4,	// (0x0004d9ab) cell_shortcut_ai5_widget_pane

0x51ce,	// (0x00043fc5) bg_cell_shortcut_ai5_widget_pane

0xebc5,	// (0x0004d9bc) cell_grid_ai5_widget_pane_g1

0xebce,	// (0x0004d9c5) highlight_cell_shortcut_ai5_widget_pane

0x562c,	// (0x00044423) ai5_sk_left_pane_g1

0xebd6,	// (0x0004d9cd) ai5_sk_left_pane_g2

0xebde,	// (0x0004d9d5) ai5_sk_left_pane_g3

0xebe6,	// (0x0004d9dd) ai5_sk_left_pane_g4

0x0003,

0xfdf7,	// (0x0004ebee) ai5_sk_left_pane_g

0xebee,	// (0x0004d9e5) ai5_sk_left_pane_t1

0x5624,	// (0x0004441b) ai5_sk_right_pane_g1

0xebfc,	// (0x0004d9f3) ai5_sk_right_pane_g2

0xec04,	// (0x0004d9fb) ai5_sk_right_pane_g3

0xec0c,	// (0x0004da03) ai5_sk_right_pane_g4

0x0003,

0xfe00,	// (0x0004ebf7) ai5_sk_right_pane_g

0xec14,	// (0x0004da0b) ai5_sk_right_pane_t1

0x5624,	// (0x0004441b) ai5_sk_middle_pane_g1

0x562c,	// (0x00044423) ai5_sk_middle_pane_g2

0x5644,	// (0x0004443b) ai5_sk_middle_pane_g3

0xec04,	// (0x0004d9fb) ai5_sk_middle_pane_g4

0xebde,	// (0x0004d9d5) ai5_sk_middle_pane_g5

0xec22,	// (0x0004da19) ai5_sk_middle_pane_g6

0xcded,	// (0x0004bbe4) ai5_sk_middle_pane_g7

0x0006,

0xfe09,	// (0x0004ec00) ai5_sk_middle_pane_g

0xcb00,	// (0x0004b8f7) aid_touch_area_size_lc0_ParamLimits

0xcb00,	// (0x0004b8f7) aid_touch_area_size_lc0

0xadb8,	// (0x00049baf) cell_hwr_candidate_pane_t1_ParamLimits

0x5454,	// (0x0004424b) aid_touch_navi_pane

0xd0fa,	// (0x0004bef1) status_dt_navi_pane_ParamLimits

0xd0fa,	// (0x0004bef1) status_dt_navi_pane

0xd107,	// (0x0004befe) status_dt_sta_pane_ParamLimits

0xd107,	// (0x0004befe) status_dt_sta_pane

0xcdf5,	// (0x0004bbec) dt_sta_controll_pane

0xce02,	// (0x0004bbf9) dt_sta_indi_pane

0xce13,	// (0x0004bc0a) dt_sta_title_pane

0x255d,	// (0x00041354) bg_dt_sta_indi_pane_ParamLimits

0x255d,	// (0x00041354) bg_dt_sta_indi_pane

0xec2a,	// (0x0004da21) dt_sta_battery_pane

0xce26,	// (0x0004bc1d) dt_sta_indi_pane_g1

0xce2f,	// (0x0004bc26) dt_sta_indi_pane_g2

0xce38,	// (0x0004bc2f) dt_sta_indi_pane_g3

0x0002,

0xfe18,	// (0x0004ec0f) dt_sta_indi_pane_g

0xce41,	// (0x0004bc38) dt_sta_signal_pane

0x46ba,	// (0x000434b1) bg_dt_sta_title_pane_ParamLimits

0x46ba,	// (0x000434b1) bg_dt_sta_title_pane

0xec32,	// (0x0004da29) dt_sta_title_pane_g1

0xce4a,	// (0x0004bc41) dt_sta_title_pane_t1_ParamLimits

0xce4a,	// (0x0004bc41) dt_sta_title_pane_t1

0x23aa,	// (0x000411a1) bg_dt_sta_control_pane

0xce5f,	// (0x0004bc56) dt_sta_controll_pane_g1

0xec3a,	// (0x0004da31) bg_dt_sta_title_pane_g1

0xec43,	// (0x0004da3a) bg_dt_sta_title_pane_g2

0xec4c,	// (0x0004da43) bg_dt_sta_title_pane_g3

0x0002,

0x04c3,	// (0x0003f2ba) bg_dt_sta_title_pane_g

0x7484,	// (0x0004627b) bg_dt_sta_indi_pane_g1

0xec55,	// (0x0004da4c) dt_sta_signal_pane_g1

0xec5d,	// (0x0004da54) dt_sta_signal_pane_g2

0x0001,

0x04ca,	// (0x0003f2c1) dt_sta_signal_pane_g

0xec65,	// (0x0004da5c) dt_sta_battery_pane_g1

0xec6e,	// (0x0004da65) dt_sta_battery_pane_t1

0x7484,	// (0x0004627b) bg_dt_sta_control_pane_g1

0x4d3f,	// (0x00043b36) fep_china_uni_eep_pane

0x4d47,	// (0x00043b3e) fep_china_uni_entry_pane_ParamLimits

0x4d57,	// (0x00043b4e) popup_fep_china_uni_window_g1_ParamLimits

0x4d67,	// (0x00043b5e) popup_fep_china_uni_window_g2_ParamLimits

0x4d67,	// (0x00043b5e) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0004e51f) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0004e51f) popup_fep_china_uni_window_g

0xec7d,	// (0x0004da74) fep_china_uni_eep_pane_g1

0xec85,	// (0x0004da7c) fep_china_uni_eep_pane_t1

0xe8b7,	// (0x0004d6ae) aid_touch_area_size_smil_player

0x5505,	// (0x000442fc) lc0_clock_pane

0x5540,	// (0x00044337) status_pane_g5_ParamLimits

0x5540,	// (0x00044337) status_pane_g5

0xa266,	// (0x0004905d) popup_keymap_window

0x551e,	// (0x00044315) status_icon_pane

0xe983,	// (0x0004d77a) cell_ai5_widget_pane_g3_ParamLimits

0xe99a,	// (0x0004d791) cell_ai5_widget_pane_g4_ParamLimits

0xe9a6,	// (0x0004d79d) cell_ai5_widget_pane_g5_ParamLimits

0xe9ca,	// (0x0004d7c1) cell_ai5_widget_pane_g8_ParamLimits

0xe9ca,	// (0x0004d7c1) cell_ai5_widget_pane_g8

0xe9de,	// (0x0004d7d5) cell_ai5_widget_pane_g9_ParamLimits

0xe9de,	// (0x0004d7d5) cell_ai5_widget_pane_g9

0xe9f2,	// (0x0004d7e9) cell_ai5_widget_pane_g10_ParamLimits

0xe9f2,	// (0x0004d7e9) cell_ai5_widget_pane_g10

0xec94,	// (0x0004da8b) status_icon_pane_g1

0x23aa,	// (0x000411a1) bg_popup_sub_pane_cp13

0xec9c,	// (0x0004da93) popup_keymap_window_t1

0xc30e,	// (0x0004b105) control_pane_g6_ParamLimits

0xc30e,	// (0x0004b105) control_pane_g6

0xc31b,	// (0x0004b112) control_pane_g7_ParamLimits

0xc31b,	// (0x0004b112) control_pane_g7

0xc328,	// (0x0004b11f) control_pane_g8_ParamLimits

0xc328,	// (0x0004b11f) control_pane_g8

0xcdf5,	// (0x0004bbec) dt_sta_controll_pane_ParamLimits

0xce02,	// (0x0004bbf9) dt_sta_indi_pane_ParamLimits

0xce13,	// (0x0004bc0a) dt_sta_title_pane_ParamLimits

0x2ee1,	// (0x00041cd8) aid_size_touch_scroll_bar_cale

0x952c,	// (0x00048323) popup_discreet_window_ParamLimits

0x952c,	// (0x00048323) popup_discreet_window

0x95a6,	// (0x0004839d) popup_sk_window

0x5b74,	// (0x0004496b) bg_popup_sub_pane_cp28_ParamLimits

0x5b74,	// (0x0004496b) bg_popup_sub_pane_cp28

0xecaa,	// (0x0004daa1) popup_discreet_window_g1_ParamLimits

0xecaa,	// (0x0004daa1) popup_discreet_window_g1

0xecca,	// (0x0004dac1) popup_discreet_window_t1_ParamLimits

0xecca,	// (0x0004dac1) popup_discreet_window_t1

0xece8,	// (0x0004dadf) popup_discreet_window_t2_ParamLimits

0xece8,	// (0x0004dadf) popup_discreet_window_t2

0x0002,

0x04cf,	// (0x0003f2c6) popup_discreet_window_t_ParamLimits

0x04cf,	// (0x0003f2c6) popup_discreet_window_t

0xb7a7,	// (0x0004a59e) popup_sk_window_g1

0xb7b1,	// (0x0004a5a8) popup_sk_window_g2

0x0001,

0xfe1f,	// (0x0004ec16) popup_sk_window_g

0xb7bb,	// (0x0004a5b2) popup_sk_window_t1

0xb7c9,	// (0x0004a5c0) popup_sk_window_t1_copy1

0xe973,	// (0x0004d76a) cell_ai5_widget_pane_g2_ParamLimits

0xeacc,	// (0x0004d8c3) cell_ai5_widget_pane_t9_ParamLimits

0xeacc,	// (0x0004d8c3) cell_ai5_widget_pane_t9

0x23aa,	// (0x000411a1) main_fep_fshwr2_pane

0xb7d7,	// (0x0004a5ce) aid_fshwr2_btn_pane

0xb7e3,	// (0x0004a5da) aid_fshwr2_syb_pane

0xb7f4,	// (0x0004a5eb) aid_fshwr2_txt_pane

0xb800,	// (0x0004a5f7) fshwr2_func_candi_pane

0xb818,	// (0x0004a60f) fshwr2_hwr_syb_pane

0xb82f,	// (0x0004a626) fshwr2_icf_pane

0x23aa,	// (0x000411a1) fshwr2_icf_bg_pane

0xce68,	// (0x0004bc5f) fshwr2_icf_pane_t1_ParamLimits

0xce68,	// (0x0004bc5f) fshwr2_icf_pane_t1

0x4cbc,	// (0x00043ab3) fshwr2_func_candi_pane_g1

0xce80,	// (0x0004bc77) fshwr2_func_candi_row_pane_ParamLimits

0xce80,	// (0x0004bc77) fshwr2_func_candi_row_pane

0xce90,	// (0x0004bc87) cell_fshwr2_syb_pane_ParamLimits

0xce90,	// (0x0004bc87) cell_fshwr2_syb_pane

0x7615,	// (0x0004640c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7615,	// (0x0004640c) fshwr2_hwr_syb_pane_g1

0x23aa,	// (0x000411a1) bg_popup_call_pane_cp01

0xceaa,	// (0x0004bca1) fshwr2_func_candi_cell_pane_ParamLimits

0xceaa,	// (0x0004bca1) fshwr2_func_candi_cell_pane

0x61b6,	// (0x00044fad) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x61b6,	// (0x00044fad) fshwr2_func_candi_cell_bg_pane

0xced5,	// (0x0004bccc) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xced5,	// (0x0004bccc) fshwr2_func_candi_cell_pane_g1

0xed3a,	// (0x0004db31) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xed3a,	// (0x0004db31) fshwr2_func_candi_cell_pane_t1

0x23aa,	// (0x000411a1) bg_button_pane_cp08

0x51ce,	// (0x00043fc5) cell_fshwr2_syb_bg_pane

0xcef5,	// (0x0004bcec) cell_fshwr2_syb_bg_pane_g1

0xcefd,	// (0x0004bcf4) cell_fshwr2_syb_bg_pane_t1

0x46ba,	// (0x000434b1) main_tmo_pane

0xd3cc,	// (0x0004c1c3) uni_indicator_pane_g1_ParamLimits

0xd3e3,	// (0x0004c1da) uni_indicator_pane_g2_ParamLimits

0xd3f6,	// (0x0004c1ed) uni_indicator_pane_g3_ParamLimits

0x65c7,	// (0x000453be) uni_indicator_pane_g4_ParamLimits

0x65c7,	// (0x000453be) uni_indicator_pane_g4

0x65db,	// (0x000453d2) uni_indicator_pane_g5_ParamLimits

0x65db,	// (0x000453d2) uni_indicator_pane_g5

0x65db,	// (0x000453d2) uni_indicator_pane_g6_ParamLimits

0x65db,	// (0x000453d2) uni_indicator_pane_g6

0xf927,	// (0x0004e71e) uni_indicator_pane_g_ParamLimits

0xde86,	// (0x0004cc7d) popup_tmo_note_window_ParamLimits

0xde86,	// (0x0004cc7d) popup_tmo_note_window

0xb022,	// (0x00049e19) fshwr2_bg_pane

0xcee6,	// (0x0004bcdd) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcee6,	// (0x0004bcdd) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe24,	// (0x0004ec1b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe24,	// (0x0004ec1b) fshwr2_func_candi_cell_pane_g

0x7484,	// (0x0004627b) bg_popup_window_pane_cp01

0xed4d,	// (0x0004db44) bg_popup_window_pane_g1_cp01

0xed56,	// (0x0004db4d) bg_popup_window_pane_cp22_ParamLimits

0xed56,	// (0x0004db4d) bg_popup_window_pane_cp22

0xed64,	// (0x0004db5b) listscroll_tmo_link_pane_ParamLimits

0xed64,	// (0x0004db5b) listscroll_tmo_link_pane

0xeda4,	// (0x0004db9b) popup_tmo_note_window_g1_ParamLimits

0xeda4,	// (0x0004db9b) popup_tmo_note_window_g1

0xedb1,	// (0x0004dba8) tmo_note_info_pane_ParamLimits

0xedb1,	// (0x0004dba8) tmo_note_info_pane

0xcf0c,	// (0x0004bd03) list_tmo_note_info_pane_g1_ParamLimits

0xcf0c,	// (0x0004bd03) list_tmo_note_info_pane_g1

0xedcb,	// (0x0004dbc2) list_tmo_note_info_pane_g2_ParamLimits

0xedcb,	// (0x0004dbc2) list_tmo_note_info_pane_g2

0x0001,

0xfe29,	// (0x0004ec20) list_tmo_note_info_pane_g_ParamLimits

0xfe29,	// (0x0004ec20) list_tmo_note_info_pane_g

0xede7,	// (0x0004dbde) list_tmo_note_info_text_pane_ParamLimits

0xede7,	// (0x0004dbde) list_tmo_note_info_text_pane

0xee29,	// (0x0004dc20) list_tmo_link_pane

0xee36,	// (0x0004dc2d) scroll_pane_cp20

0xee43,	// (0x0004dc3a) list_single_tmo_link_pane_ParamLimits

0xee43,	// (0x0004dc3a) list_single_tmo_link_pane

0xee53,	// (0x0004dc4a) list_single_tmo_link_pane_t1

0xee61,	// (0x0004dc58) list_tmo_note_info_text_pane_t1_ParamLimits

0xee61,	// (0x0004dc58) list_tmo_note_info_text_pane_t1

0xbfc8,	// (0x0004adbf) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbfc8,	// (0x0004adbf) aid_size_touch_scroll_bar_cp01

0xbec3,	// (0x0004acba) aid_size_touch_slider_marker

0x958e,	// (0x00048385) popup_settings_window_ParamLimits

0x958e,	// (0x00048385) popup_settings_window

0xc335,	// (0x0004b12c) popup_candi_list_indi_window

0x5454,	// (0x0004424b) aid_touch_navi_pane_ParamLimits

0xaf7d,	// (0x00049d74) rs_clock_indi_pane

0xaf86,	// (0x00049d7d) sctrl_sk_bottom_pane_ParamLimits

0xaf97,	// (0x00049d8e) sctrl_sk_top_pane_ParamLimits

0xb09a,	// (0x00049e91) popup_fep_tooltip_window

0xe8f1,	// (0x0004d6e8) aid_size_cell_widget_grid_ParamLimits

0xe95e,	// (0x0004d755) cell_ai5_widget_pane_g1_ParamLimits

0xe95e,	// (0x0004d755) cell_ai5_widget_pane_g1

0xe9b2,	// (0x0004d7a9) cell_ai5_widget_pane_g6_ParamLimits

0xe9be,	// (0x0004d7b5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x045e,	// (0x0003f255) cell_ai5_widget_pane_g_ParamLimits

0x045e,	// (0x0003f255) cell_ai5_widget_pane_g

0xeaf0,	// (0x0004d8e7) cell_ai5_widget_pane_t10_ParamLimits

0xeaf0,	// (0x0004d8e7) cell_ai5_widget_pane_t10

0xeb0e,	// (0x0004d905) grid_ai5_widget_pane_ParamLimits

0xeb8e,	// (0x0004d985) cell_contacts_ai5_widget_pane_ParamLimits

0xeb8e,	// (0x0004d985) cell_contacts_ai5_widget_pane

0xecfd,	// (0x0004daf4) popup_discreet_window_t3_ParamLimits

0xecfd,	// (0x0004daf4) popup_discreet_window_t3

0xb844,	// (0x0004a63b) popup_fshwr2_char_preview_window_ParamLimits

0xb844,	// (0x0004a63b) popup_fshwr2_char_preview_window

0xcf23,	// (0x0004bd1a) tmo_note_info_pane_t1

0xcf38,	// (0x0004bd2f) tmo_note_info_pane_t2

0xcf4f,	// (0x0004bd46) tmo_note_info_pane_t3

0xee05,	// (0x0004dbfc) tmo_note_info_pane_t4

0xee17,	// (0x0004dc0e) tmo_note_info_pane_t5

0x0004,

0xfe2e,	// (0x0004ec25) tmo_note_info_pane_t

0xee29,	// (0x0004dc20) list_tmo_link_pane_ParamLimits

0xee36,	// (0x0004dc2d) scroll_pane_cp20_ParamLimits

0x23aa,	// (0x000411a1) bg_popup_fep_char_preview_window_cp01

0xee7a,	// (0x0004dc71) popup_fshwr2_char_preview_window_t1

0xee88,	// (0x0004dc7f) popup_candi_list_indi_window_g1

0xee91,	// (0x0004dc88) bg_cell_contacts_ai5_widget_pane

0xee9d,	// (0x0004dc94) cell_contacts_ai5_widget_pane_g1

0xeeb0,	// (0x0004dca7) cell_contacts_ai5_widget_pane_g2

0xeebc,	// (0x0004dcb3) cell_contacts_ai5_widget_pane_g3

0x0002,

0x04f0,	// (0x0003f2e7) cell_contacts_ai5_widget_pane_g

0xeece,	// (0x0004dcc5) cell_contacts_ai5_widget_pane_t1

0x46ba,	// (0x000434b1) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef48,	// (0x0004dd3f) settings_container_pane

0x51ce,	// (0x00043fc5) listscroll_set_pane_copy1

0x6e2b,	// (0x00045c22) scroll_pane_cp121_copy1

0xef54,	// (0x0004dd4b) set_content_pane_copy1

0xef5c,	// (0x0004dd53) aid_height_set_list_copy1_ParamLimits

0xef5c,	// (0x0004dd53) aid_height_set_list_copy1

0x542c,	// (0x00044223) aid_size_parent_copy1_ParamLimits

0x542c,	// (0x00044223) aid_size_parent_copy1

0xef68,	// (0x0004dd5f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef68,	// (0x0004dd5f) button_value_adjust_pane_cp6_copy1

0x4813,	// (0x0004360a) list_highlight_pane_cp2_copy1_ParamLimits

0x4813,	// (0x0004360a) list_highlight_pane_cp2_copy1

0xef7c,	// (0x0004dd73) list_set_pane_copy1_ParamLimits

0xef7c,	// (0x0004dd73) list_set_pane_copy1

0xeee3,	// (0x0004dcda) main_pane_set_t1_copy1_ParamLimits

0xeee3,	// (0x0004dcda) main_pane_set_t1_copy1

0xef1d,	// (0x0004dd14) main_pane_set_t2_copy1_ParamLimits

0xef1d,	// (0x0004dd14) main_pane_set_t2_copy1

0xf029,	// (0x0004de20) main_pane_set_t3_copy1

0xf037,	// (0x0004de2e) main_pane_set_t4_copy1

0xef3c,	// (0x0004dd33) set_content_pane_g1_copy1_ParamLimits

0xef3c,	// (0x0004dd33) set_content_pane_g1_copy1

0xf045,	// (0x0004de3c) setting_code_pane_copy1

0xf04d,	// (0x0004de44) setting_slider_graphic_pane_copy1

0xf04d,	// (0x0004de44) setting_slider_pane_copy1

0xf04d,	// (0x0004de44) setting_text_pane_copy1

0xf04d,	// (0x0004de44) setting_volume_pane_copy1

0xf045,	// (0x0004de3c) settings_code_pane_cp2_copy1

0xf055,	// (0x0004de4c) settings_code_pane_cp_copy1_ParamLimits

0xf055,	// (0x0004de4c) settings_code_pane_cp_copy1

0xb858,	// (0x0004a64f) volume_set_pane_copy1

0xf069,	// (0x0004de60) volume_set_pane_g10_copy1

0xf071,	// (0x0004de68) volume_set_pane_g1_copy1

0xf079,	// (0x0004de70) volume_set_pane_g2_copy1

0xf081,	// (0x0004de78) volume_set_pane_g3_copy1

0xf089,	// (0x0004de80) volume_set_pane_g4_copy1

0xf091,	// (0x0004de88) volume_set_pane_g5_copy1

0xf099,	// (0x0004de90) volume_set_pane_g6_copy1

0xf0a1,	// (0x0004de98) volume_set_pane_g7_copy1

0xf0a9,	// (0x0004dea0) volume_set_pane_g8_copy1

0xf0b1,	// (0x0004dea8) volume_set_pane_g9_copy1

0x242a,	// (0x00041221) bg_set_opt_pane_cp_copy1_ParamLimits

0x242a,	// (0x00041221) bg_set_opt_pane_cp_copy1

0xb860,	// (0x0004a657) setting_slider_pane_t1_copy1_ParamLimits

0xb860,	// (0x0004a657) setting_slider_pane_t1_copy1

0xb87e,	// (0x0004a675) setting_slider_pane_t2_copy1_ParamLimits

0xb87e,	// (0x0004a675) setting_slider_pane_t2_copy1

0xb898,	// (0x0004a68f) setting_slider_pane_t3_copy1_ParamLimits

0xb898,	// (0x0004a68f) setting_slider_pane_t3_copy1

0xb8b0,	// (0x0004a6a7) slider_set_pane_copy1_ParamLimits

0xb8b0,	// (0x0004a6a7) slider_set_pane_copy1

0x4709,	// (0x00043500) set_opt_bg_pane_g1_copy2

0x4711,	// (0x00043508) set_opt_bg_pane_g2_copy2

0xf0b9,	// (0x0004deb0) set_opt_bg_pane_g3_copy2

0x4721,	// (0x00043518) set_opt_bg_pane_g4_copy2

0x4729,	// (0x00043520) set_opt_bg_pane_g5_copy2

0x4731,	// (0x00043528) set_opt_bg_pane_g6_copy2

0xf0c3,	// (0x0004deba) set_opt_bg_pane_g7_copy2

0xf0cb,	// (0x0004dec2) set_opt_bg_pane_g8_copy2

0xf0d5,	// (0x0004decc) set_opt_bg_pane_g9_copy2

0xf0df,	// (0x0004ded6) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0df,	// (0x0004ded6) aid_size_touch_slider_mark_copy1

0xf0f3,	// (0x0004deea) slider_set_pane_g1_copy1

0xf0fc,	// (0x0004def3) slider_set_pane_g2_copy1

0x681f,	// (0x00045616) slider_set_pane_g3_copy1_ParamLimits

0x681f,	// (0x00045616) slider_set_pane_g3_copy1

0x6833,	// (0x0004562a) slider_set_pane_g4_copy1_ParamLimits

0x6833,	// (0x0004562a) slider_set_pane_g4_copy1

0x684b,	// (0x00045642) slider_set_pane_g5_copy1_ParamLimits

0x684b,	// (0x00045642) slider_set_pane_g5_copy1

0x681f,	// (0x00045616) slider_set_pane_g6_copy1_ParamLimits

0x681f,	// (0x00045616) slider_set_pane_g6_copy1

0xf104,	// (0x0004defb) slider_set_pane_g7_copy1_ParamLimits

0xf104,	// (0x0004defb) slider_set_pane_g7_copy1

0x23be,	// (0x000411b5) bg_set_opt_pane_cp2_copy1

0xf11a,	// (0x0004df11) setting_slider_graphic_pane_g1_copy1

0xf123,	// (0x0004df1a) setting_slider_graphic_pane_t1_copy1

0xf133,	// (0x0004df2a) setting_slider_graphic_pane_t2_copy1

0xf143,	// (0x0004df3a) slider_set_pane_cp_copy1

0xf153,	// (0x0004df4a) input_focus_pane_cp1_copy1

0xf15c,	// (0x0004df53) list_set_text_pane_copy1

0xf164,	// (0x0004df5b) setting_text_pane_g1_copy1

0xcab5,	// (0x0004b8ac) set_text_pane_t1_copy1

0xf153,	// (0x0004df4a) input_focus_pane_cp2_copy1

0xf164,	// (0x0004df5b) setting_code_pane_g1_copy1

0xf16d,	// (0x0004df64) setting_code_pane_t1_copy1

0x658d,	// (0x00045384) list_set_graphic_pane_copy1

0x23be,	// (0x000411b5) bg_set_opt_pane_cp4_copy1

0x4ee4,	// (0x00043cdb) list_set_graphic_pane_g1_copy1_ParamLimits

0x4ee4,	// (0x00043cdb) list_set_graphic_pane_g1_copy1

0xf17b,	// (0x0004df72) list_set_graphic_pane_g2_copy1

0x4efc,	// (0x00043cf3) list_set_graphic_pane_t1_copy1_ParamLimits

0x4efc,	// (0x00043cf3) list_set_graphic_pane_t1_copy1

0x7484,	// (0x0004627b) rs_clock_indi_pane_g1

0xf183,	// (0x0004df7a) rs_clock_indi_pane_t1

0xf191,	// (0x0004df88) rs_indi_pane

0xf199,	// (0x0004df90) rs_indi_pane_g1

0xf1a2,	// (0x0004df99) rs_indi_pane_g2

0xf1ab,	// (0x0004dfa2) rs_indi_pane_g3

0x0002,

0x04f7,	// (0x0003f2ee) rs_indi_pane_g

0x51ce,	// (0x00043fc5) bg_popup_preview_window_pane_cp03

0xf1b4,	// (0x0004dfab) popup_fep_tooltip_window_t1

0x7e1e,	// (0x00046c15) popup_note2_window_g2_ParamLimits

0x7e1e,	// (0x00046c15) popup_note2_window_g2

0x0001,

0xfc5d,	// (0x0004ea54) popup_note2_window_g_ParamLimits

0xfc5d,	// (0x0004ea54) popup_note2_window_g

0x82a5,	// (0x0004709c) bg_popup_sub_pane_cp11_ParamLimits

0x82b2,	// (0x000470a9) cell_ai3_links_pane_g1_ParamLimits

0x82c9,	// (0x000470c0) cell_ai3_links_pane_t1

0xcab5,	// (0x0004b8ac) set_text_pane_t1_copy1_ParamLimits

0x50eb,	// (0x00043ee2) cell_graphic_popup_pane_cp2_ParamLimits

0x50eb,	// (0x00043ee2) cell_graphic_popup_pane_cp2

0xf1c2,	// (0x0004dfb9) cell_graphic_popup_pane_g1_cp2

0x27c6,	// (0x000415bd) cell_graphic_popup_pane_g2_cp2

0xf1ca,	// (0x0004dfc1) cell_graphic_popup_pane_g3_cp2

0xf1d2,	// (0x0004dfc9) cell_graphic_popup_pane_t2_cp2

0x27d7,	// (0x000415ce) grid_highlight_pane_cp3_cp2

0x4a90,	// (0x00043887) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x46ba,	// (0x000434b1) main_tmo_pane_ParamLimits

0xde7a,	// (0x0004cc71) popup_tmo_big_image_note_window

0xe94d,	// (0x0004d744) cell_ai5_widget_list_pane

0xe955,	// (0x0004d74c) cell_ai5_widget_lrg_icon_pane

0xcf23,	// (0x0004bd1a) tmo_note_info_pane_t1_ParamLimits

0xcf38,	// (0x0004bd2f) tmo_note_info_pane_t2_ParamLimits

0xcf4f,	// (0x0004bd46) tmo_note_info_pane_t3_ParamLimits

0xee05,	// (0x0004dbfc) tmo_note_info_pane_t4_ParamLimits

0xee17,	// (0x0004dc0e) tmo_note_info_pane_t5_ParamLimits

0xfe2e,	// (0x0004ec25) tmo_note_info_pane_t_ParamLimits

0xef48,	// (0x0004dd3f) settings_container_pane_ParamLimits

0xf14b,	// (0x0004df42) indicator_popup_pane_cp5

0xf14b,	// (0x0004df42) indicator_popup_pane_cp6

0x658d,	// (0x00045384) list_set_graphic_pane_copy1_ParamLimits

0x23aa,	// (0x000411a1) bg_popup_window_pane_cp23

0xf1e0,	// (0x0004dfd7) popup_tmo_big_image_note_window_g1

0xf1e9,	// (0x0004dfe0) popup_tmo_big_image_note_window_t1

0xf1f9,	// (0x0004dff0) popup_tmo_big_image_note_window_t2

0xf209,	// (0x0004e000) popup_tmo_big_image_note_window_t3

0x0002,

0x04fe,	// (0x0003f2f5) popup_tmo_big_image_note_window_t

0x7484,	// (0x0004627b) cell_ai5_widget_lrg_icon_pane_g1

0xf219,	// (0x0004e010) cell_ai5_widget_lrg_icon_pane_t1

0xf227,	// (0x0004e01e) cell_ai5_widget_list_row_pane_ParamLimits

0xf227,	// (0x0004e01e) cell_ai5_widget_list_row_pane

0xf240,	// (0x0004e037) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf240,	// (0x0004e037) cell_ai5_widget_list_row_pane_g1

0xf24d,	// (0x0004e044) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf24d,	// (0x0004e044) cell_ai5_widget_list_row_pane_t1

0xf27b,	// (0x0004e072) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf27b,	// (0x0004e072) cell_ai5_widget_list_row_pane_t2

0x0002,

0x0505,	// (0x0003f2fc) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0505,	// (0x0003f2fc) cell_ai5_widget_list_row_pane_t

0x9453,	// (0x0004824a) main_fep_vtchi_ss_pane

0xb8d5,	// (0x0004a6cc) popup_fep_char_pre_window

0xb8dd,	// (0x0004a6d4) popup_fep_ituss_window

0xb8fe,	// (0x0004a6f5) popup_fep_vkbss_window

0xf2a3,	// (0x0004e09a) grid_vkbss_keypad_pane_ParamLimits

0xf2a3,	// (0x0004e09a) grid_vkbss_keypad_pane

0xf2b3,	// (0x0004e0aa) ituss_keypad_pane

0xb929,	// (0x0004a720) aid_vkbss_key_offset_ParamLimits

0xb929,	// (0x0004a720) aid_vkbss_key_offset

0xb935,	// (0x0004a72c) cell_vkbss_key_pane_ParamLimits

0xb935,	// (0x0004a72c) cell_vkbss_key_pane

0x6aaa,	// (0x000458a1) bg_cell_vkbss_key_g1_ParamLimits

0x6aaa,	// (0x000458a1) bg_cell_vkbss_key_g1

0xf2c3,	// (0x0004e0ba) cell_vkbss_key_3p_pane_ParamLimits

0xf2c3,	// (0x0004e0ba) cell_vkbss_key_3p_pane

0xf2dd,	// (0x0004e0d4) cell_vkbss_key_g1_ParamLimits

0xf2dd,	// (0x0004e0d4) cell_vkbss_key_g1

0xf2f7,	// (0x0004e0ee) cell_vkbss_key_t1_ParamLimits

0xf2f7,	// (0x0004e0ee) cell_vkbss_key_t1

0xb94b,	// (0x0004a742) cell_ituss_key_pane_ParamLimits

0xb94b,	// (0x0004a742) cell_ituss_key_pane

0xf322,	// (0x0004e119) bg_cell_ituss_key_g1_ParamLimits

0xf322,	// (0x0004e119) bg_cell_ituss_key_g1

0xf32e,	// (0x0004e125) cell_ituss_key_pane_g1_ParamLimits

0xf32e,	// (0x0004e125) cell_ituss_key_pane_g1

0xf342,	// (0x0004e139) cell_ituss_key_pane_g2_ParamLimits

0xf342,	// (0x0004e139) cell_ituss_key_pane_g2

0x0001,

0x050c,	// (0x0003f303) cell_ituss_key_pane_g_ParamLimits

0x050c,	// (0x0003f303) cell_ituss_key_pane_g

0xf370,	// (0x0004e167) cell_ituss_key_t1_ParamLimits

0xf370,	// (0x0004e167) cell_ituss_key_t1

0xf3aa,	// (0x0004e1a1) cell_ituss_key_t2_ParamLimits

0xf3aa,	// (0x0004e1a1) cell_ituss_key_t2

0xf3db,	// (0x0004e1d2) cell_ituss_key_t3_ParamLimits

0xf3db,	// (0x0004e1d2) cell_ituss_key_t3

0xf415,	// (0x0004e20c) cell_ituss_key_t4_ParamLimits

0xf415,	// (0x0004e20c) cell_ituss_key_t4

0x0003,

0x0511,	// (0x0003f308) cell_ituss_key_t_ParamLimits

0x0511,	// (0x0003f308) cell_ituss_key_t

0xf44f,	// (0x0004e246) cell_vkbss_key_3p_pane_g1

0xf457,	// (0x0004e24e) cell_vkbss_key_3p_pane_g2

0xf45f,	// (0x0004e256) cell_vkbss_key_3p_pane_g3

0x0002,

0x051a,	// (0x0003f311) cell_vkbss_key_3p_pane_g

0x23aa,	// (0x000411a1) bg_popup_fep_char_preview_window_cp02

0xf467,	// (0x0004e25e) popup_fep_char_pre_window_t1

0xcdc5,	// (0x0004bbbc) main_ai5_sk_pane

0xee91,	// (0x0004dc88) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee9d,	// (0x0004dc94) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xeeb0,	// (0x0004dca7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xeebc,	// (0x0004dcb3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x04f0,	// (0x0003f2e7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeece,	// (0x0004dcc5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x46ba,	// (0x000434b1) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xcf64,	// (0x0004bd5b) main_ai5_sk_pane_g1

0x59b2,	// (0x000447a9) popup_query_code_window_g1

0xb8f3,	// (0x0004a6ea) popup_fep_vkb_icf_pane

0xb907,	// (0x0004a6fe) popup_fep_vtchi_icf_pane

0x46ba,	// (0x000434b1) bg_icf_pane

0xf476,	// (0x0004e26d) list_vkb_icf_pane

0x46ba,	// (0x000434b1) bg_icf_pane_cp01

0xf482,	// (0x0004e279) vtchi_icf_list_pane

0xf493,	// (0x0004e28a) list_vkb_icf_pane_t1_ParamLimits

0xf493,	// (0x0004e28a) list_vkb_icf_pane_t1

0xf4ab,	// (0x0004e2a2) vtchi_icf_list_pane_t1_ParamLimits

0xf4ab,	// (0x0004e2a2) vtchi_icf_list_pane_t1

0xb8dd,	// (0x0004a6d4) popup_fep_ituss_window_ParamLimits

0xb907,	// (0x0004a6fe) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b3,	// (0x0004e0aa) ituss_keypad_pane_ParamLimits

0xb91d,	// (0x0004a714) ituss_sks_pane

0x46ba,	// (0x000434b1) bg_icf_pane_ParamLimits

0xb8c6,	// (0x0004a6bd) icf_edit_indi_pane_ParamLimits

0xb8c6,	// (0x0004a6bd) icf_edit_indi_pane

0xf476,	// (0x0004e26d) list_vkb_icf_pane_ParamLimits

0x46ba,	// (0x000434b1) bg_icf_pane_cp01_ParamLimits

0xb8c6,	// (0x0004a6bd) icf_edit_indi_pane_cp01_ParamLimits

0xb8c6,	// (0x0004a6bd) icf_edit_indi_pane_cp01

0xf48a,	// (0x0004e281) vtchi_query_pane

0x7615,	// (0x0004640c) icf_edit_indi_pane_g1_ParamLimits

0x7615,	// (0x0004640c) icf_edit_indi_pane_g1

0xf537,	// (0x0004e32e) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0004e32e) icf_edit_indi_pane_g2

0x0001,

0xfe39,	// (0x0004ec30) icf_edit_indi_pane_g_ParamLimits

0xfe39,	// (0x0004ec30) icf_edit_indi_pane_g

0xf546,	// (0x0004e33d) icf_edit_indi_pane_t1

0xf4cd,	// (0x0004e2c4) bg_input_focus_pane_cp042

0x2ed8,	// (0x00041ccf) vtchi_button_pane

0xf4d6,	// (0x0004e2cd) vtchi_query_pane_t1

0xf4e4,	// (0x0004e2db) vtchi_query_pane_t2

0xf4f2,	// (0x0004e2e9) vtchi_query_pane_t3

0x0002,

0x0521,	// (0x0003f318) vtchi_query_pane_t

0x23aa,	// (0x000411a1) bg_button_pane_cp13

0xf500,	// (0x0004e2f7) vtchi_button_pane_g1

0xf508,	// (0x0004e2ff) ituss_sks_pane_g1

0xf513,	// (0x0004e30a) ituss_sks_pane_g2

0x0001,

0x0528,	// (0x0003f31f) ituss_sks_pane_g

0xf51b,	// (0x0004e312) ituss_sks_pane_t1

0xf529,	// (0x0004e320) ituss_sks_pane_t2

0x0001,

0x052d,	// (0x0003f324) ituss_sks_pane_t

0x713d,	// (0x00045f34) indicator_nsta_pane_cp_g1

0x7146,	// (0x00045f3d) indicator_nsta_pane_cp_g2

0x714e,	// (0x00045f45) indicator_nsta_pane_cp_g3

0x7156,	// (0x00045f4d) indicator_nsta_pane_cp_g4

0x715e,	// (0x00045f55) indicator_nsta_pane_cp_g5

0x715e,	// (0x00045f55) indicator_nsta_pane_cp_g6

0x0005,

0xfaba,	// (0x0004e8b1) indicator_nsta_pane_cp_g

0xe705,	// (0x0004d4fc) cell_graphic2_pane_t2_ParamLimits

0xe705,	// (0x0004d4fc) cell_graphic2_pane_t2

0x0001,

0x03e7,	// (0x0003f1de) cell_graphic2_pane_t_ParamLimits

0x03e7,	// (0x0003f1de) cell_graphic2_pane_t

0xe732,	// (0x0004d529) cell_graphic2_control_pane_t1

0xc14d,	// (0x0004af44) signal_pane_g3_ParamLimits

0xc14d,	// (0x0004af44) signal_pane_g3

0xc15f,	// (0x0004af56) signal_pane_g4_ParamLimits

0xc15f,	// (0x0004af56) signal_pane_g4

0xf28d,	// (0x0004e084) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf28d,	// (0x0004e084) cell_ai5_widget_list_row_pane_t3

0xf35e,	// (0x0004e155) cell_ituss_key_pane_t1_ParamLimits

0xf35e,	// (0x0004e155) cell_ituss_key_pane_t1

0x56f2,	// (0x000444e9) form_field_data_wide_pane_vc_t2_ParamLimits

0x56f2,	// (0x000444e9) form_field_data_wide_pane_vc_t2

0x5706,	// (0x000444fd) form_field_data_wide_pane_vc_t3_ParamLimits

0x5706,	// (0x000444fd) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0004e606) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0004e606) form_field_data_wide_pane_vc_t

0x6e6b,	// (0x00045c62) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6e6b,	// (0x00045c62) form_field_slider_wide_pane_vc_t3

0x6f45,	// (0x00045d3c) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6f45,	// (0x00045d3c) form_field_popup_wide_pane_vc_t2

0x6f5c,	// (0x00045d53) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6f5c,	// (0x00045d53) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa9,	// (0x0004e8a0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa9,	// (0x0004e8a0) form_field_popup_wide_pane_vc_t

0xb7d7,	// (0x0004a5ce) aid_fshwr2_btn_pane_ParamLimits

0xb7e3,	// (0x0004a5da) aid_fshwr2_syb_pane_ParamLimits

0xb7f4,	// (0x0004a5eb) aid_fshwr2_txt_pane_ParamLimits

0xb022,	// (0x00049e19) fshwr2_bg_pane_ParamLimits

0xb800,	// (0x0004a5f7) fshwr2_func_candi_pane_ParamLimits

0xb818,	// (0x0004a60f) fshwr2_hwr_syb_pane_ParamLimits

0xb82f,	// (0x0004a626) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large

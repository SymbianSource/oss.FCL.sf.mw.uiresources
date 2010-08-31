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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000076de };

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
0x3004,	// (0x0000a6e2) Screen

0x300e,	// (0x0000a6ec) application_window_ParamLimits

0x300e,	// (0x0000a6ec) application_window

0x8867,	// (0x0000ff45) screen_g1

0x303c,	// (0x0000a71a) area_bottom_pane_ParamLimits

0x303c,	// (0x0000a71a) area_bottom_pane

0x88d6,	// (0x0000ffb4) area_top_pane_ParamLimits

0x88d6,	// (0x0000ffb4) area_top_pane

0x6f45,	// (0x0000e623) main_pane_ParamLimits

0x6f45,	// (0x0000e623) main_pane

0x894e,	// (0x0001002c) misc_graphics

0x450f,	// (0x0000bbed) battery_pane_ParamLimits

0x450f,	// (0x0000bbed) battery_pane

0xba23,	// (0x00013101) bg_status_flat_pane_g8

0xba2b,	// (0x00013109) bg_status_flat_pane_g9

0xae0c,	// (0x000124ea) context_pane_ParamLimits

0xae0c,	// (0x000124ea) context_pane

0x4669,	// (0x0000bd47) navi_pane_ParamLimits

0x4669,	// (0x0000bd47) navi_pane

0x46de,	// (0x0000bdbc) signal_pane_ParamLimits

0x46de,	// (0x0000bdbc) signal_pane

0x0008,

0xf86f,	// (0x00016f4d) bg_status_flat_pane_g

0x476a,	// (0x0000be48) status_pane_g1_ParamLimits

0x476a,	// (0x0000be48) status_pane_g1

0x4776,	// (0x0000be54) status_pane_g2_ParamLimits

0x4776,	// (0x0000be54) status_pane_g2

0xb021,	// (0x000126ff) status_pane_g3_ParamLimits

0xb021,	// (0x000126ff) status_pane_g3

0x0004,

0xf7a9,	// (0x00016e87) status_pane_g_ParamLimits

0xf7a9,	// (0x00016e87) status_pane_g

0x4782,	// (0x0000be60) title_pane_ParamLimits

0x4782,	// (0x0000be60) title_pane

0x47dd,	// (0x0000bebb) uni_indicator_pane_ParamLimits

0x47dd,	// (0x0000bebb) uni_indicator_pane

0xa7e1,	// (0x00011ebf) bg_list_pane_ParamLimits

0xa7e1,	// (0x00011ebf) bg_list_pane

0x3ed7,	// (0x0000b5b5) find_pane

0x3edf,	// (0x0000b5bd) listscroll_app_pane_ParamLimits

0x3edf,	// (0x0000b5bd) listscroll_app_pane

0xa815,	// (0x00011ef3) listscroll_form_pane

0x3eeb,	// (0x0000b5c9) listscroll_gen_pane_ParamLimits

0x3eeb,	// (0x0000b5c9) listscroll_gen_pane

0xa815,	// (0x00011ef3) listscroll_set_pane

0x3f00,	// (0x0000b5de) main_idle_act_pane

0xa4d1,	// (0x00011baf) main_idle_trad_pane

0xa4d1,	// (0x00011baf) main_list_empty_pane

0xa844,	// (0x00011f22) main_midp_pane

0xa850,	// (0x00011f2e) main_pane_g1_ParamLimits

0xa850,	// (0x00011f2e) main_pane_g1

0x3f13,	// (0x0000b5f1) popup_ai_message_window_ParamLimits

0x3f13,	// (0x0000b5f1) popup_ai_message_window

0x3f97,	// (0x0000b675) popup_fep_china_uni_window_ParamLimits

0x3f97,	// (0x0000b675) popup_fep_china_uni_window

0xa93a,	// (0x00012018) popup_fep_japan_candidate_window_ParamLimits

0xa93a,	// (0x00012018) popup_fep_japan_candidate_window

0xa958,	// (0x00012036) popup_fep_japan_predictive_window_ParamLimits

0xa958,	// (0x00012036) popup_fep_japan_predictive_window

0x3fd5,	// (0x0000b6b3) popup_find_window

0x3fee,	// (0x0000b6cc) popup_grid_graphic_window_ParamLimits

0x3fee,	// (0x0000b6cc) popup_grid_graphic_window

0xa9af,	// (0x0001208d) popup_large_graphic_colour_window

0x406a,	// (0x0000b748) popup_menu_window_ParamLimits

0x406a,	// (0x0000b748) popup_menu_window

0x41c8,	// (0x0000b8a6) popup_note_image_window

0x4190,	// (0x0000b86e) popup_note_wait_window_ParamLimits

0x4190,	// (0x0000b86e) popup_note_wait_window

0x41de,	// (0x0000b8bc) popup_note_window_ParamLimits

0x41de,	// (0x0000b8bc) popup_note_window

0x4272,	// (0x0000b950) popup_query_code_window_ParamLimits

0x4272,	// (0x0000b950) popup_query_code_window

0xab6c,	// (0x0001224a) popup_query_data_code_window_ParamLimits

0xab6c,	// (0x0001224a) popup_query_data_code_window

0x42aa,	// (0x0000b988) popup_query_data_window_ParamLimits

0x42aa,	// (0x0000b988) popup_query_data_window

0x431e,	// (0x0000b9fc) popup_query_sat_info_window_ParamLimits

0x431e,	// (0x0000b9fc) popup_query_sat_info_window

0x43ab,	// (0x0000ba89) popup_snote_single_graphic_window_ParamLimits

0x43ab,	// (0x0000ba89) popup_snote_single_graphic_window

0x43ab,	// (0x0000ba89) popup_snote_single_text_window_ParamLimits

0x43ab,	// (0x0000ba89) popup_snote_single_text_window

0xabdb,	// (0x000122b9) popup_sub_window_general

0xacdf,	// (0x000123bd) popup_window_general_ParamLimits

0xacdf,	// (0x000123bd) popup_window_general

0xacf2,	// (0x000123d0) power_save_pane

0xc943,	// (0x00014021) control_pane_g1_ParamLimits

0xc943,	// (0x00014021) control_pane_g1

0x75f9,	// (0x0000ecd7) control_pane_g2_ParamLimits

0x75f9,	// (0x0000ecd7) control_pane_g2

0xa78a,	// (0x00011e68) control_pane_g3_ParamLimits

0xa78a,	// (0x00011e68) control_pane_g3

0x0007,

0xf791,	// (0x00016e6f) control_pane_g_ParamLimits

0xf791,	// (0x00016e6f) control_pane_g

0xc979,	// (0x00014057) control_pane_t1_ParamLimits

0xc979,	// (0x00014057) control_pane_t1

0xc9d5,	// (0x000140b3) control_pane_t2_ParamLimits

0xc9d5,	// (0x000140b3) control_pane_t2

0x0002,

0xf7a2,	// (0x00016e80) control_pane_t_ParamLimits

0xf7a2,	// (0x00016e80) control_pane_t

0xa6ad,	// (0x00011d8b) navi_navi_volume_pane_cp1

0xa6b6,	// (0x00011d94) status_small_icon_pane

0xa6be,	// (0x00011d9c) status_small_pane_g1_ParamLimits

0xa6be,	// (0x00011d9c) status_small_pane_g1

0xa6f2,	// (0x00011dd0) status_small_pane_g2_ParamLimits

0xa6f2,	// (0x00011dd0) status_small_pane_g2

0xa6fe,	// (0x00011ddc) status_small_pane_g3_ParamLimits

0xa6fe,	// (0x00011ddc) status_small_pane_g3

0xa70a,	// (0x00011de8) status_small_pane_g4_ParamLimits

0xa70a,	// (0x00011de8) status_small_pane_g4

0xa716,	// (0x00011df4) status_small_pane_g5_ParamLimits

0xa716,	// (0x00011df4) status_small_pane_g5

0xa723,	// (0x00011e01) status_small_pane_g6_ParamLimits

0xa723,	// (0x00011e01) status_small_pane_g6

0x0007,

0xf780,	// (0x00016e5e) status_small_pane_g_ParamLimits

0xf780,	// (0x00016e5e) status_small_pane_g

0xa753,	// (0x00011e31) status_small_pane_t1

0xa776,	// (0x00011e54) status_small_wait_pane_ParamLimits

0xa776,	// (0x00011e54) status_small_wait_pane

0x3bbc,	// (0x0000b29a) aid_levels_signal_ParamLimits

0x3bbc,	// (0x0000b29a) aid_levels_signal

0x3bd0,	// (0x0000b2ae) signal_pane_g1_ParamLimits

0x3bd0,	// (0x0000b2ae) signal_pane_g1

0x3bea,	// (0x0000b2c8) signal_pane_g2_ParamLimits

0x3bea,	// (0x0000b2c8) signal_pane_g2

0x0001,

0xf715,	// (0x00016df3) signal_pane_g_ParamLimits

0xf715,	// (0x00016df3) signal_pane_g

0x9fa4,	// (0x00011682) context_pane_g1

0x318c,	// (0x0000a86a) title_pane_g1

0x31ce,	// (0x0000a8ac) title_pane_t1

0x89f6,	// (0x000100d4) title_pane_t2

0x8a1c,	// (0x000100fa) title_pane_t3

0x0002,

0xf573,	// (0x00016c51) title_pane_t

0x4803,	// (0x0000bee1) aid_levels_battery_ParamLimits

0x4803,	// (0x0000bee1) aid_levels_battery

0x481b,	// (0x0000bef9) battery_pane_g1_ParamLimits

0x481b,	// (0x0000bef9) battery_pane_g1

0x4836,	// (0x0000bf14) battery_pane_g2_ParamLimits

0x4836,	// (0x0000bf14) battery_pane_g2

0x0001,

0xf7b4,	// (0x00016e92) battery_pane_g_ParamLimits

0xf7b4,	// (0x00016e92) battery_pane_g

0x4bbb,	// (0x0000c299) uni_indicator_pane_g1

0x4bd0,	// (0x0000c2ae) uni_indicator_pane_g2

0x4be6,	// (0x0000c2c4) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x00016ff5) uni_indicator_pane_g

0x995c,	// (0x0001103a) navi_icon_pane_ParamLimits

0x995c,	// (0x0001103a) navi_icon_pane

0x894e,	// (0x0001002c) navi_midp_pane

0x894e,	// (0x0001002c) navi_navi_pane

0x995c,	// (0x0001103a) navi_text_pane_ParamLimits

0x995c,	// (0x0001103a) navi_text_pane

0x8867,	// (0x0000ff45) status_small_wait_pane_g1

0x8e69,	// (0x00010547) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x00016ff0) status_small_wait_pane_g

0x4b61,	// (0x0000c23f) navi_navi_icon_text_pane

0x4b7b,	// (0x0000c259) navi_navi_pane_g1_ParamLimits

0x4b7b,	// (0x0000c259) navi_navi_pane_g1

0x4b69,	// (0x0000c247) navi_navi_pane_g2_ParamLimits

0x4b69,	// (0x0000c247) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x00016fbe) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x00016fbe) navi_navi_pane_g

0x4b8d,	// (0x0000c26b) navi_navi_tabs_pane

0x4b61,	// (0x0000c23f) navi_navi_text_pane

0x4b61,	// (0x0000c23f) navi_navi_volume_pane

0xd1d4,	// (0x000148b2) navi_text_pane_t1

0xd1c8,	// (0x000148a6) navi_icon_pane_g1

0xd11c,	// (0x000147fa) navi_navi_text_pane_t1

0x7a01,	// (0x0000f0df) navi_navi_volume_pane_g1

0xcbc4,	// (0x000142a2) volume_small_pane

0x4ab4,	// (0x0000c192) navi_navi_icon_text_pane_g1

0x4abc,	// (0x0000c19a) navi_navi_icon_text_pane_t1

0xba83,	// (0x00013161) navi_tabs_2_long_pane

0xba83,	// (0x00013161) navi_tabs_2_pane

0xba83,	// (0x00013161) navi_tabs_3_long_pane

0xba83,	// (0x00013161) navi_tabs_3_pane

0xba83,	// (0x00013161) navi_tabs_4_pane

0xcba4,	// (0x00014282) tabs_2_active_pane_ParamLimits

0xcba4,	// (0x00014282) tabs_2_active_pane

0xcbb4,	// (0x00014292) tabs_2_passive_pane_ParamLimits

0xcbb4,	// (0x00014292) tabs_2_passive_pane

0xcb72,	// (0x00014250) tabs_3_active_pane_ParamLimits

0xcb72,	// (0x00014250) tabs_3_active_pane

0xcb82,	// (0x00014260) tabs_3_passive_pane_ParamLimits

0xcb82,	// (0x00014260) tabs_3_passive_pane

0xcb93,	// (0x00014271) tabs_3_passive_pane_cp_ParamLimits

0xcb93,	// (0x00014271) tabs_3_passive_pane_cp

0xcb2e,	// (0x0001420c) tabs_4_active_pane_ParamLimits

0xcb2e,	// (0x0001420c) tabs_4_active_pane

0xcb3f,	// (0x0001421d) tabs_4_passive_pane_ParamLimits

0xcb3f,	// (0x0001421d) tabs_4_passive_pane

0xcb50,	// (0x0001422e) tabs_4_passive_pane_cp_ParamLimits

0xcb50,	// (0x0001422e) tabs_4_passive_pane_cp

0xcb61,	// (0x0001423f) tabs_4_passive_pane_cp2_ParamLimits

0xcb61,	// (0x0001423f) tabs_4_passive_pane_cp2

0xcb0e,	// (0x000141ec) tabs_2_long_active_pane_ParamLimits

0xcb0e,	// (0x000141ec) tabs_2_long_active_pane

0xcb1e,	// (0x000141fc) tabs_2_long_passive_pane_ParamLimits

0xcb1e,	// (0x000141fc) tabs_2_long_passive_pane

0xcad7,	// (0x000141b5) tabs_3_long_active_pane_ParamLimits

0xcad7,	// (0x000141b5) tabs_3_long_active_pane

0xcaea,	// (0x000141c8) tabs_3_long_passive_pane_ParamLimits

0xcaea,	// (0x000141c8) tabs_3_long_passive_pane

0xcafb,	// (0x000141d9) tabs_3_long_passive_pane_cp_ParamLimits

0xcafb,	// (0x000141d9) tabs_3_long_passive_pane_cp

0x78bc,	// (0x0000ef9a) volume_small_pane_g1

0x78c5,	// (0x0000efa3) volume_small_pane_g2

0x78ce,	// (0x0000efac) volume_small_pane_g3

0x78d7,	// (0x0000efb5) volume_small_pane_g4

0x78e0,	// (0x0000efbe) volume_small_pane_g5

0x78e9,	// (0x0000efc7) volume_small_pane_g6

0x78f2,	// (0x0000efd0) volume_small_pane_g7

0x78fb,	// (0x0000efd9) volume_small_pane_g8

0x7904,	// (0x0000efe2) volume_small_pane_g9

0x790d,	// (0x0000efeb) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x00016f8a) volume_small_pane_g

0x8cc7,	// (0x000103a5) bg_active_tab_pane_cp2_ParamLimits

0x8cc7,	// (0x000103a5) bg_active_tab_pane_cp2

0x8a3c,	// (0x0001011a) tabs_3_active_pane_g1

0x325b,	// (0x0000a939) tabs_3_active_pane_t1

0x8cc7,	// (0x000103a5) bg_passive_tab_pane_cp2_ParamLimits

0x8cc7,	// (0x000103a5) bg_passive_tab_pane_cp2

0x8a3c,	// (0x0001011a) tabs_3_passive_pane_g1

0x325b,	// (0x0000a939) tabs_3_passive_pane_t1

0x8cc7,	// (0x000103a5) bg_active_tab_pane_cp3_ParamLimits

0x8cc7,	// (0x000103a5) bg_active_tab_pane_cp3

0xd052,	// (0x00014730) tabs_4_active_pane_g1

0x3271,	// (0x0000a94f) tabs_4_active_pane_t1

0x8cc7,	// (0x000103a5) bg_passive_tab_pane_cp3_ParamLimits

0x8cc7,	// (0x000103a5) bg_passive_tab_pane_cp3

0xd052,	// (0x00014730) tabs_4_1_passive_pane_g1

0x3271,	// (0x0000a94f) tabs_4_1_passive_pane_t1

0xa844,	// (0x00011f22) list_highlight_pane_cp2

0x4cb4,	// (0x0000c392) list_set_pane_ParamLimits

0x4cb4,	// (0x0000c392) list_set_pane

0x4d42,	// (0x0000c420) main_pane_set_t1_ParamLimits

0x4d42,	// (0x0000c420) main_pane_set_t1

0x4d62,	// (0x0000c440) main_pane_set_t2_ParamLimits

0x4d62,	// (0x0000c440) main_pane_set_t2

0x4d76,	// (0x0000c454) main_pane_set_t3_ParamLimits

0x4d76,	// (0x0000c454) main_pane_set_t3

0x4d88,	// (0x0000c466) main_pane_set_t4_ParamLimits

0x4d88,	// (0x0000c466) main_pane_set_t4

0x0003,

0xf97c,	// (0x0001705a) main_pane_set_t_ParamLimits

0xf97c,	// (0x0001705a) main_pane_set_t

0x4d9a,	// (0x0000c478) setting_code_pane

0x4da2,	// (0x0000c480) setting_slider_graphic_pane

0x4da2,	// (0x0000c480) setting_slider_pane

0x4da2,	// (0x0000c480) setting_text_pane

0x4da2,	// (0x0000c480) setting_volume_pane

0xc8dc,	// (0x00013fba) volume_set_pane

0x8a2e,	// (0x0001010c) bg_set_opt_pane_cp

0x714c,	// (0x0000e82a) setting_slider_pane_t1

0xc8e4,	// (0x00013fc2) setting_slider_pane_t2

0xc8fd,	// (0x00013fdb) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00016c58) setting_slider_pane_t

0x7192,	// (0x0000e870) slider_set_pane

0x894e,	// (0x0001002c) bg_set_opt_pane_cp2

0x8a70,	// (0x0001014e) setting_slider_graphic_pane_g1

0xc914,	// (0x00013ff2) setting_slider_graphic_pane_t1

0xc923,	// (0x00014001) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00016c5f) setting_slider_graphic_pane_t

0xc932,	// (0x00014010) slider_set_pane_cp

0x894e,	// (0x0001002c) input_focus_pane_cp1

0xd624,	// (0x00014d02) list_set_text_pane

0x8867,	// (0x0000ff45) setting_text_pane_g1

0x894e,	// (0x0001002c) input_focus_pane_cp2

0x8867,	// (0x0000ff45) setting_code_pane_g1

0x8a79,	// (0x00010157) setting_code_pane_t1

0x2236,	// (0x00009914) set_text_pane_t1_ParamLimits

0x2236,	// (0x00009914) set_text_pane_t1

0x986a,	// (0x00010f48) set_opt_bg_pane_g1

0x9872,	// (0x00010f50) set_opt_bg_pane_g2

0x4c74,	// (0x0000c352) set_opt_bg_pane_g3

0x9882,	// (0x00010f60) set_opt_bg_pane_g4

0x988a,	// (0x00010f68) set_opt_bg_pane_g5

0x9892,	// (0x00010f70) set_opt_bg_pane_g6

0x4c7c,	// (0x0000c35a) set_opt_bg_pane_g7

0x4c84,	// (0x0000c362) set_opt_bg_pane_g8

0x4c8c,	// (0x0000c36a) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x00017047) set_opt_bg_pane_g

0xd617,	// (0x00014cf5) slider_set_pane_g1

0x7a76,	// (0x0000f154) slider_set_pane_g2

0x0006,

0xf95a,	// (0x00017038) slider_set_pane_g

0xcbcd,	// (0x000142ab) volume_set_pane_g1

0xcbd5,	// (0x000142b3) volume_set_pane_g2

0xcbdd,	// (0x000142bb) volume_set_pane_g3

0xcbe5,	// (0x000142c3) volume_set_pane_g4

0xcbed,	// (0x000142cb) volume_set_pane_g5

0xcbf5,	// (0x000142d3) volume_set_pane_g6

0xcbfd,	// (0x000142db) volume_set_pane_g7

0xcc05,	// (0x000142e3) volume_set_pane_g8

0xcc0d,	// (0x000142eb) volume_set_pane_g9

0xcc15,	// (0x000142f3) volume_set_pane_g10

0x0009,

0xf932,	// (0x00017010) volume_set_pane_g

0x32e5,	// (0x0000a9c3) indicator_pane_ParamLimits

0x32e5,	// (0x0000a9c3) indicator_pane

0x330d,	// (0x0000a9eb) main_idle_pane_g2_ParamLimits

0x330d,	// (0x0000a9eb) main_idle_pane_g2

0x333d,	// (0x0000aa1b) main_pane_idle_g1_ParamLimits

0x333d,	// (0x0000aa1b) main_pane_idle_g1

0x8adf,	// (0x000101bd) popup_clock_digital_analogue_window_ParamLimits

0x8adf,	// (0x000101bd) popup_clock_digital_analogue_window

0x3362,	// (0x0000aa40) soft_indicator_pane_ParamLimits

0x3362,	// (0x0000aa40) soft_indicator_pane

0x337c,	// (0x0000aa5a) wallpaper_pane_ParamLimits

0x337c,	// (0x0000aa5a) wallpaper_pane

0x8867,	// (0x0000ff45) wallpaper_pane_g1

0x338e,	// (0x0000aa6c) indicator_pane_g1_ParamLimits

0x338e,	// (0x0000aa6c) indicator_pane_g1

0xd731,	// (0x00014e0f) navi_navi_icon_text_pane_srt_g1

0x8b31,	// (0x0001020f) soft_indicator_pane_t1

0x8b4b,	// (0x00010229) aid_ps_area_pane

0x33a7,	// (0x0000aa85) aid_ps_clock_pane

0x8b68,	// (0x00010246) aid_ps_indicator_pane

0x8b74,	// (0x00010252) indicator_ps_pane_ParamLimits

0x8b74,	// (0x00010252) indicator_ps_pane

0x8b83,	// (0x00010261) power_save_pane_g1_ParamLimits

0x8b83,	// (0x00010261) power_save_pane_g1

0x8b8f,	// (0x0001026d) power_save_pane_g2_ParamLimits

0x8b8f,	// (0x0001026d) power_save_pane_g2

0x6eb7,	// (0x0000e595) aid_navinavi_width_pane

0x8b4b,	// (0x00010229) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00016c64) power_save_pane_g_ParamLimits

0xf586,	// (0x00016c64) power_save_pane_g

0x8b9d,	// (0x0001027b) power_save_pane_t1_ParamLimits

0x8b9d,	// (0x0001027b) power_save_pane_t1

0x33a7,	// (0x0000aa85) aid_ps_clock_pane_ParamLimits

0x8b68,	// (0x00010246) aid_ps_indicator_pane_ParamLimits

0x8baf,	// (0x0001028d) power_save_pane_t4_ParamLimits

0x8baf,	// (0x0001028d) power_save_pane_t4

0x0001,

0xf58b,	// (0x00016c69) power_save_pane_t_ParamLimits

0xf58b,	// (0x00016c69) power_save_pane_t

0x8bd9,	// (0x000102b7) power_save_t3_ParamLimits

0x8bd9,	// (0x000102b7) power_save_t3

0x8bc4,	// (0x000102a2) power_save_t2_ParamLimits

0x8bc4,	// (0x000102a2) power_save_t2

0x8bee,	// (0x000102cc) indicator_ps_pane_g1

0x33b3,	// (0x0000aa91) ai_gene_pane_ParamLimits

0x33b3,	// (0x0000aa91) ai_gene_pane

0x33ca,	// (0x0000aaa8) ai_links_pane_ParamLimits

0x33ca,	// (0x0000aaa8) ai_links_pane

0x33dc,	// (0x0000aaba) indicator_pane_cp1_ParamLimits

0x33dc,	// (0x0000aaba) indicator_pane_cp1

0x33eb,	// (0x0000aac9) main_pane_idle_g1_cp_ParamLimits

0x33eb,	// (0x0000aac9) main_pane_idle_g1_cp

0x8c27,	// (0x00010305) popup_ai_links_title_window

0x3403,	// (0x0000aae1) soft_indicator_pane_cp1_ParamLimits

0x3403,	// (0x0000aae1) soft_indicator_pane_cp1

0xd459,	// (0x00014b37) ai_links_pane_g1

0xd462,	// (0x00014b40) grid_ai_links_pane

0x4bb2,	// (0x0000c290) ai_gene_pane_1

0xd447,	// (0x00014b25) ai_gene_pane_2

0xd450,	// (0x00014b2e) list_highlight_pane_cp4

0x4b96,	// (0x0000c274) cell_ai_link_pane_ParamLimits

0x4b96,	// (0x0000c274) cell_ai_link_pane

0xd43f,	// (0x00014b1d) cell_ai_link_pane_g1

0x8e69,	// (0x00010547) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x00016feb) cell_ai_link_pane_g

0x894e,	// (0x0001002c) grid_highlight_cp2

0x894e,	// (0x0001002c) bg_popup_sub_pane_cp1

0x8c4a,	// (0x00010328) popup_ai_links_title_window_t1

0xd391,	// (0x00014a6f) ai_gene_pane_1_g1_ParamLimits

0xd391,	// (0x00014a6f) ai_gene_pane_1_g1

0xd39d,	// (0x00014a7b) ai_gene_pane_1_g2_ParamLimits

0xd39d,	// (0x00014a7b) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x00016fe1) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x00016fe1) ai_gene_pane_1_g

0xd3aa,	// (0x00014a88) ai_gene_pane_1_t1_ParamLimits

0xd3aa,	// (0x00014a88) ai_gene_pane_1_t1

0xd3de,	// (0x00014abc) grid_ai_soft_ind_pane

0xd37c,	// (0x00014a5a) ai_gene_pane_2_t1_ParamLimits

0xd37c,	// (0x00014a5a) ai_gene_pane_2_t1

0x3417,	// (0x0000aaf5) main_pane_empty_t1_ParamLimits

0x3417,	// (0x0000aaf5) main_pane_empty_t1

0x3434,	// (0x0000ab12) main_pane_empty_t2_ParamLimits

0x3434,	// (0x0000ab12) main_pane_empty_t2

0x344c,	// (0x0000ab2a) main_pane_empty_t3_ParamLimits

0x344c,	// (0x0000ab2a) main_pane_empty_t3

0x345f,	// (0x0000ab3d) main_pane_empty_t4_ParamLimits

0x345f,	// (0x0000ab3d) main_pane_empty_t4

0x3472,	// (0x0000ab50) main_pane_empty_t5_ParamLimits

0x3472,	// (0x0000ab50) main_pane_empty_t5

0x0004,

0xf590,	// (0x00016c6e) main_pane_empty_t_ParamLimits

0xf590,	// (0x00016c6e) main_pane_empty_t

0x995c,	// (0x0001103a) bg_popup_window_pane_ParamLimits

0x995c,	// (0x0001103a) bg_popup_window_pane

0xd12b,	// (0x00014809) find_popup_pane_cp2_ParamLimits

0xd12b,	// (0x00014809) find_popup_pane_cp2

0xd137,	// (0x00014815) heading_pane_ParamLimits

0xd137,	// (0x00014815) heading_pane

0x894e,	// (0x0001002c) bg_popup_sub_pane

0x4ad9,	// (0x0000c1b7) bg_popup_window_pane_g1_ParamLimits

0x4ad9,	// (0x0000c1b7) bg_popup_window_pane_g1

0x4ae8,	// (0x0000c1c6) bg_popup_window_pane_g2_ParamLimits

0x4ae8,	// (0x0000c1c6) bg_popup_window_pane_g2

0x4af4,	// (0x0000c1d2) bg_popup_window_pane_g3_ParamLimits

0x4af4,	// (0x0000c1d2) bg_popup_window_pane_g3

0x4b00,	// (0x0000c1de) bg_popup_window_pane_g4_ParamLimits

0x4b00,	// (0x0000c1de) bg_popup_window_pane_g4

0x4b0f,	// (0x0000c1ed) bg_popup_window_pane_g5_ParamLimits

0x4b0f,	// (0x0000c1ed) bg_popup_window_pane_g5

0x4b1f,	// (0x0000c1fd) bg_popup_window_pane_g6_ParamLimits

0x4b1f,	// (0x0000c1fd) bg_popup_window_pane_g6

0x4b2b,	// (0x0000c209) bg_popup_window_pane_g7_ParamLimits

0x4b2b,	// (0x0000c209) bg_popup_window_pane_g7

0x4b3a,	// (0x0000c218) bg_popup_window_pane_g8_ParamLimits

0x4b3a,	// (0x0000c218) bg_popup_window_pane_g8

0x4b49,	// (0x0000c227) bg_popup_window_pane_g9_ParamLimits

0x4b49,	// (0x0000c227) bg_popup_window_pane_g9

0xd110,	// (0x000147ee) bg_popup_window_pane_g10_ParamLimits

0xd110,	// (0x000147ee) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x00016fa9) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x00016fa9) bg_popup_window_pane_g

0xd0c7,	// (0x000147a5) bg_popup_heading_pane_ParamLimits

0xd0c7,	// (0x000147a5) bg_popup_heading_pane

0x7afe,	// (0x0000f1dc) tabs_4_passive_pane_cp_srt_ParamLimits

0x7afe,	// (0x0000f1dc) tabs_4_passive_pane_cp_srt

0x7b10,	// (0x0000f1ee) tabs_4_passive_pane_srt_ParamLimits

0xd0db,	// (0x000147b9) heading_pane_g2

0x7b10,	// (0x0000f1ee) tabs_4_passive_pane_srt

0xb2bb,	// (0x00012999) bg_passive_tab_pane_cp3_srt_ParamLimits

0xb2bb,	// (0x00012999) bg_passive_tab_pane_cp3_srt

0xd0e3,	// (0x000147c1) heading_pane_t1_ParamLimits

0xd0e3,	// (0x000147c1) heading_pane_t1

0xd0fa,	// (0x000147d8) heading_pane_t2_ParamLimits

0xd0fa,	// (0x000147d8) heading_pane_t2

0x0001,

0xf8c6,	// (0x00016fa4) heading_pane_t_ParamLimits

0xf8c6,	// (0x00016fa4) heading_pane_t

0xb9eb,	// (0x000130c9) bg_popup_heading_pane_g1

0xba94,	// (0x00013172) bg_popup_heading_pane_g2

0xba9c,	// (0x0001317a) bg_popup_heading_pane_g3

0xbaa4,	// (0x00013182) bg_popup_heading_pane_g4

0xbaac,	// (0x0001318a) bg_popup_heading_pane_g5

0xbab4,	// (0x00013192) bg_popup_heading_pane_g6

0xbabc,	// (0x0001319a) bg_popup_heading_pane_g7

0xbac4,	// (0x000131a2) bg_popup_heading_pane_g8

0xbacc,	// (0x000131aa) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x00016f60) bg_popup_heading_pane_g

0xb199,	// (0x00012877) bg_popup_sub_pane_g1

0xb1a9,	// (0x00012887) bg_popup_sub_pane_g2

0xb1a1,	// (0x0001287f) bg_popup_sub_pane_g3

0xb1b9,	// (0x00012897) bg_popup_sub_pane_g4

0xb1b1,	// (0x0001288f) bg_popup_sub_pane_g5

0xb1c1,	// (0x0001289f) bg_popup_sub_pane_g6

0xb1c9,	// (0x000128a7) bg_popup_sub_pane_g7

0xb1d9,	// (0x000128b7) bg_popup_sub_pane_g8

0xb1d1,	// (0x000128af) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x00016f3a) bg_popup_sub_pane_g

0x8cc7,	// (0x000103a5) bg_popup_window_pane_cp5_ParamLimits

0x8cc7,	// (0x000103a5) bg_popup_window_pane_cp5

0x8ce3,	// (0x000103c1) popup_note_window_g1_ParamLimits

0x8ce3,	// (0x000103c1) popup_note_window_g1

0x8cef,	// (0x000103cd) popup_note_window_t1_ParamLimits

0x8cef,	// (0x000103cd) popup_note_window_t1

0x8d05,	// (0x000103e3) popup_note_window_t2_ParamLimits

0x8d05,	// (0x000103e3) popup_note_window_t2

0x8d1b,	// (0x000103f9) popup_note_window_t3_ParamLimits

0x8d1b,	// (0x000103f9) popup_note_window_t3

0x8d31,	// (0x0001040f) popup_note_window_t4_ParamLimits

0x8d31,	// (0x0001040f) popup_note_window_t4

0x8d59,	// (0x00010437) popup_note_window_t5_ParamLimits

0x8d59,	// (0x00010437) popup_note_window_t5

0x0004,

0xf59b,	// (0x00016c79) popup_note_window_t_ParamLimits

0xf59b,	// (0x00016c79) popup_note_window_t

0x8d7d,	// (0x0001045b) bg_popup_window_pane_cp6_ParamLimits

0x8d7d,	// (0x0001045b) bg_popup_window_pane_cp6

0xb967,	// (0x00013045) popup_note_image_window_g1_ParamLimits

0xb967,	// (0x00013045) popup_note_image_window_g1

0xb973,	// (0x00013051) popup_note_image_window_g2_ParamLimits

0xb973,	// (0x00013051) popup_note_image_window_g2

0x0001,

0xf850,	// (0x00016f2e) popup_note_image_window_g_ParamLimits

0xf850,	// (0x00016f2e) popup_note_image_window_g

0xb98c,	// (0x0001306a) popup_note_image_window_t1_ParamLimits

0xb98c,	// (0x0001306a) popup_note_image_window_t1

0xb9a5,	// (0x00013083) popup_note_image_window_t2_ParamLimits

0xb9a5,	// (0x00013083) popup_note_image_window_t2

0xb9be,	// (0x0001309c) popup_note_image_window_t3_ParamLimits

0xb9be,	// (0x0001309c) popup_note_image_window_t3

0x0002,

0xf855,	// (0x00016f33) popup_note_image_window_t_ParamLimits

0xf855,	// (0x00016f33) popup_note_image_window_t

0xb836,	// (0x00012f14) bg_popup_window_pane_cp7_ParamLimits

0xb836,	// (0x00012f14) bg_popup_window_pane_cp7

0xb866,	// (0x00012f44) popup_note_wait_window_g1_ParamLimits

0xb866,	// (0x00012f44) popup_note_wait_window_g1

0xb872,	// (0x00012f50) popup_note_wait_window_g2_ParamLimits

0xb872,	// (0x00012f50) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x00016f1c) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x00016f1c) popup_note_wait_window_g

0xb88a,	// (0x00012f68) popup_note_wait_window_t1_ParamLimits

0xb88a,	// (0x00012f68) popup_note_wait_window_t1

0xb8b1,	// (0x00012f8f) popup_note_wait_window_t2_ParamLimits

0xb8b1,	// (0x00012f8f) popup_note_wait_window_t2

0xb8ce,	// (0x00012fac) popup_note_wait_window_t3_ParamLimits

0xb8ce,	// (0x00012fac) popup_note_wait_window_t3

0xb8e1,	// (0x00012fbf) popup_note_wait_window_t4_ParamLimits

0xb8e1,	// (0x00012fbf) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x00016f23) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x00016f23) popup_note_wait_window_t

0xb906,	// (0x00012fe4) wait_bar_pane_ParamLimits

0xb906,	// (0x00012fe4) wait_bar_pane

0x894e,	// (0x0001002c) wait_anim_pane

0x894e,	// (0x0001002c) wait_border_pane

0x8867,	// (0x0000ff45) wait_anim_pane_g1

0x8867,	// (0x0000ff45) wait_anim_pane_g2

0x0001,

0xf710,	// (0x00016dee) wait_anim_pane_g

0xb7e6,	// (0x00012ec4) wait_border_pane_g1

0xb7ef,	// (0x00012ecd) wait_border_pane_g2

0xb7f8,	// (0x00012ed6) wait_border_pane_g3

0x0002,

0xf837,	// (0x00016f15) wait_border_pane_g

0xb656,	// (0x00012d34) bg_popup_window_pane_cp16_ParamLimits

0xb656,	// (0x00012d34) bg_popup_window_pane_cp16

0xb756,	// (0x00012e34) indicator_popup_pane_cp4_ParamLimits

0xb756,	// (0x00012e34) indicator_popup_pane_cp4

0xb76a,	// (0x00012e48) popup_query_data_window_t1_ParamLimits

0xb76a,	// (0x00012e48) popup_query_data_window_t1

0xb77c,	// (0x00012e5a) popup_query_data_window_t2_ParamLimits

0xb77c,	// (0x00012e5a) popup_query_data_window_t2

0xb795,	// (0x00012e73) popup_query_data_window_t3_ParamLimits

0xb795,	// (0x00012e73) popup_query_data_window_t3

0x0002,

0xf830,	// (0x00016f0e) popup_query_data_window_t_ParamLimits

0xf830,	// (0x00016f0e) popup_query_data_window_t

0xb7af,	// (0x00012e8d) query_popup_data_pane_ParamLimits

0xb7af,	// (0x00012e8d) query_popup_data_pane

0xb7c3,	// (0x00012ea1) query_popup_data_pane_cp1_ParamLimits

0xb7c3,	// (0x00012ea1) query_popup_data_pane_cp1

0xb656,	// (0x00012d34) bg_popup_window_pane_cp10_ParamLimits

0xb656,	// (0x00012d34) bg_popup_window_pane_cp10

0xb688,	// (0x00012d66) indicator_popup_pane_ParamLimits

0xb688,	// (0x00012d66) indicator_popup_pane

0xb6aa,	// (0x00012d88) popup_query_code_window_t1_ParamLimits

0xb6aa,	// (0x00012d88) popup_query_code_window_t1

0xb6c4,	// (0x00012da2) popup_query_code_window_t2_ParamLimits

0xb6c4,	// (0x00012da2) popup_query_code_window_t2

0xb70d,	// (0x00012deb) popup_query_code_window_t3_ParamLimits

0xb70d,	// (0x00012deb) popup_query_code_window_t3

0x0002,

0xf829,	// (0x00016f07) popup_query_code_window_t_ParamLimits

0xf829,	// (0x00016f07) popup_query_code_window_t

0xb73c,	// (0x00012e1a) query_popup_pane_ParamLimits

0xb73c,	// (0x00012e1a) query_popup_pane

0x8d7d,	// (0x0001045b) bg_popup_window_pane_cp15_ParamLimits

0x8d7d,	// (0x0001045b) bg_popup_window_pane_cp15

0x8d9b,	// (0x00010479) indicator_popup_pane_cp1_ParamLimits

0x8d9b,	// (0x00010479) indicator_popup_pane_cp1

0x8dae,	// (0x0001048c) indicator_popup_pane_cp2_ParamLimits

0x8dae,	// (0x0001048c) indicator_popup_pane_cp2

0x8dc1,	// (0x0001049f) popup_query_data_code_window_g1_ParamLimits

0x8dc1,	// (0x0001049f) popup_query_data_code_window_g1

0x8dd4,	// (0x000104b2) popup_query_data_code_window_t1_ParamLimits

0x8dd4,	// (0x000104b2) popup_query_data_code_window_t1

0x8de6,	// (0x000104c4) popup_query_data_code_window_t2_ParamLimits

0x8de6,	// (0x000104c4) popup_query_data_code_window_t2

0x8df8,	// (0x000104d6) popup_query_data_code_window_t3_ParamLimits

0x8df8,	// (0x000104d6) popup_query_data_code_window_t3

0x8e0e,	// (0x000104ec) popup_query_data_code_window_t4_ParamLimits

0x8e0e,	// (0x000104ec) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00016c84) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00016c84) popup_query_data_code_window_t

0x77d7,	// (0x0000eeb5) list_single_midp_graphic_pane_g3

0x8e26,	// (0x00010504) query_popup_data_pane_cp2_ParamLimits

0x8e39,	// (0x00010517) query_popup_pane_cp2_ParamLimits

0x8e39,	// (0x00010517) query_popup_pane_cp2

0x894e,	// (0x0001002c) bg_popup_window_pane_cp11

0xb64e,	// (0x00012d2c) heading_pane_cp5

0x8f49,	// (0x00010627) listscroll_popup_info_pane

0x894e,	// (0x0001002c) input_focus_pane_cp3

0x8e4c,	// (0x0001052a) query_popup_pane_t1

0x8e5a,	// (0x00010538) list_popup_info_pane_ParamLimits

0x8e5a,	// (0x00010538) list_popup_info_pane

0x8e69,	// (0x00010547) listscroll_popup_info_pane_g1

0x8e71,	// (0x0001054f) scroll_pane_cp7

0x8e79,	// (0x00010557) popup_info_list_pane_t1_ParamLimits

0x8e79,	// (0x00010557) popup_info_list_pane_t1

0x8e93,	// (0x00010571) popup_info_list_pane_t2_ParamLimits

0x8e93,	// (0x00010571) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00016c8d) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00016c8d) popup_info_list_pane_t

0x894e,	// (0x0001002c) bg_popup_window_pane_cp12

0xd74b,	// (0x00014e29) find_popup_pane

0x8a2e,	// (0x0001010c) bg_popup_window_pane_cp3

0x8ead,	// (0x0001058b) heading_pane_cp3

0x8eb9,	// (0x00010597) listscroll_popup_graphic_pane

0x894e,	// (0x0001002c) bg_popup_window_pane_cp4

0x34d5,	// (0x0000abb3) heading_pane_cp4

0x8f49,	// (0x00010627) listscroll_popup_colour_pane

0x8f51,	// (0x0001062f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8f51,	// (0x0001062f) cell_large_graphic_colour_none_popup_pane

0x34dd,	// (0x0000abbb) grid_large_graphic_colour_popup_pane_ParamLimits

0x34dd,	// (0x0000abbb) grid_large_graphic_colour_popup_pane

0x34f9,	// (0x0000abd7) listscroll_popup_colour_pane_g1_ParamLimits

0x34f9,	// (0x0000abd7) listscroll_popup_colour_pane_g1

0x3510,	// (0x0000abee) listscroll_popup_colour_pane_g2_ParamLimits

0x3510,	// (0x0000abee) listscroll_popup_colour_pane_g2

0x8fa8,	// (0x00010686) listscroll_popup_colour_pane_g3_ParamLimits

0x8fa8,	// (0x00010686) listscroll_popup_colour_pane_g3

0x3524,	// (0x0000ac02) listscroll_popup_colour_pane_g4_ParamLimits

0x3524,	// (0x0000ac02) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00016c92) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00016c92) listscroll_popup_colour_pane_g

0x8fc7,	// (0x000106a5) scroll_pane_cp6_ParamLimits

0x8fc7,	// (0x000106a5) scroll_pane_cp6

0x3533,	// (0x0000ac11) cell_large_graphic_colour_popup_pane_ParamLimits

0x3533,	// (0x0000ac11) cell_large_graphic_colour_popup_pane

0x8ff8,	// (0x000106d6) cell_large_graphic_colour_none_popup_pane_t1

0x894e,	// (0x0001002c) grid_highlight_pane_cp5

0x9007,	// (0x000106e5) cell_large_graphic_colour_popup_pane_g1

0x900f,	// (0x000106ed) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00016c9b) cell_large_graphic_colour_popup_pane_g

0x9017,	// (0x000106f5) cell_large_graphic_colour_popup_pane_g2_copy1

0x9020,	// (0x000106fe) grid_highlight_pane_cp4

0x9028,	// (0x00010706) bg_popup_window_pane_cp8_ParamLimits

0x9028,	// (0x00010706) bg_popup_window_pane_cp8

0x9043,	// (0x00010721) popup_snote_single_text_window_g1_ParamLimits

0x9043,	// (0x00010721) popup_snote_single_text_window_g1

0x9055,	// (0x00010733) popup_snote_single_text_window_t1_ParamLimits

0x9055,	// (0x00010733) popup_snote_single_text_window_t1

0x9068,	// (0x00010746) popup_snote_single_text_window_t2_ParamLimits

0x9068,	// (0x00010746) popup_snote_single_text_window_t2

0x907b,	// (0x00010759) popup_snote_single_text_window_t3_ParamLimits

0x907b,	// (0x00010759) popup_snote_single_text_window_t3

0x90b4,	// (0x00010792) popup_snote_single_text_window_t4_ParamLimits

0x90b4,	// (0x00010792) popup_snote_single_text_window_t4

0x90e8,	// (0x000107c6) popup_snote_single_text_window_t5_ParamLimits

0x90e8,	// (0x000107c6) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00016ca0) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00016ca0) popup_snote_single_text_window_t

0x9117,	// (0x000107f5) bg_popup_window_pane_cp9_ParamLimits

0x9117,	// (0x000107f5) bg_popup_window_pane_cp9

0x9043,	// (0x00010721) popup_snote_single_graphic_window_g1_ParamLimits

0x9043,	// (0x00010721) popup_snote_single_graphic_window_g1

0x9125,	// (0x00010803) popup_snote_single_graphic_window_g2_ParamLimits

0x9125,	// (0x00010803) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00016cab) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00016cab) popup_snote_single_graphic_window_g

0x9131,	// (0x0001080f) popup_snote_single_graphic_window_t1_ParamLimits

0x9131,	// (0x0001080f) popup_snote_single_graphic_window_t1

0x9144,	// (0x00010822) popup_snote_single_graphic_window_t2_ParamLimits

0x9144,	// (0x00010822) popup_snote_single_graphic_window_t2

0x907b,	// (0x00010759) popup_snote_single_graphic_window_t3_ParamLimits

0x907b,	// (0x00010759) popup_snote_single_graphic_window_t3

0x90b4,	// (0x00010792) popup_snote_single_graphic_window_t4_ParamLimits

0x90b4,	// (0x00010792) popup_snote_single_graphic_window_t4

0x90e8,	// (0x000107c6) popup_snote_single_graphic_window_t5_ParamLimits

0x90e8,	// (0x000107c6) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00016cb0) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00016cb0) popup_snote_single_graphic_window_t

0x4eca,	// (0x0000c5a8) grid_graphic_popup_pane_ParamLimits

0x4eca,	// (0x0000c5a8) grid_graphic_popup_pane

0x4eed,	// (0x0000c5cb) listscroll_popup_graphic_pane_g1_ParamLimits

0x4eed,	// (0x0000c5cb) listscroll_popup_graphic_pane_g1

0x4f01,	// (0x0000c5df) listscroll_popup_graphic_pane_g2_ParamLimits

0x4f01,	// (0x0000c5df) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x00017084) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x00017084) listscroll_popup_graphic_pane_g

0xd087,	// (0x00014765) scroll_pane_cp5

0x4e85,	// (0x0000c563) cell_graphic_popup_pane_ParamLimits

0x4e85,	// (0x0000c563) cell_graphic_popup_pane

0xd6f4,	// (0x00014dd2) cell_graphic_popup_pane_g1

0xd6fc,	// (0x00014dda) cell_graphic_popup_pane_g2

0x9017,	// (0x000106f5) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x0001707d) cell_graphic_popup_pane_g

0xd705,	// (0x00014de3) cell_graphic_popup_pane_t2

0x9020,	// (0x000106fe) grid_highlight_pane_cp3

0x9169,	// (0x00010847) list_gen_pane_ParamLimits

0x9169,	// (0x00010847) list_gen_pane

0x919a,	// (0x00010878) scroll_pane

0x4e58,	// (0x0000c536) bg_list_pane_g1_ParamLimits

0x4e58,	// (0x0000c536) bg_list_pane_g1

0xd6ab,	// (0x00014d89) bg_list_pane_g2_ParamLimits

0xd6ab,	// (0x00014d89) bg_list_pane_g2

0xd6be,	// (0x00014d9c) bg_list_pane_g3_ParamLimits

0xd6be,	// (0x00014d9c) bg_list_pane_g3

0xd6d0,	// (0x00014dae) bg_list_pane_g4_ParamLimits

0xd6d0,	// (0x00014dae) bg_list_pane_g4

0x4e73,	// (0x0000c551) bg_list_pane_g5_ParamLimits

0x4e73,	// (0x0000c551) bg_list_pane_g5

0x0004,

0xf994,	// (0x00017072) bg_list_pane_g_ParamLimits

0xf994,	// (0x00017072) bg_list_pane_g

0x4de8,	// (0x0000c4c6) list_double2_graphic_large_graphic_pane_ParamLimits

0x4de8,	// (0x0000c4c6) list_double2_graphic_large_graphic_pane

0x4de8,	// (0x0000c4c6) list_double2_graphic_pane_ParamLimits

0x4de8,	// (0x0000c4c6) list_double2_graphic_pane

0x4de8,	// (0x0000c4c6) list_double2_large_graphic_pane_ParamLimits

0x4de8,	// (0x0000c4c6) list_double2_large_graphic_pane

0x4de8,	// (0x0000c4c6) list_double2_pane_ParamLimits

0x4de8,	// (0x0000c4c6) list_double2_pane

0x4de8,	// (0x0000c4c6) list_double_graphic_heading_pane_ParamLimits

0x4de8,	// (0x0000c4c6) list_double_graphic_heading_pane

0x4de8,	// (0x0000c4c6) list_double_graphic_pane_ParamLimits

0x4de8,	// (0x0000c4c6) list_double_graphic_pane

0x4de8,	// (0x0000c4c6) list_double_heading_pane_ParamLimits

0x4de8,	// (0x0000c4c6) list_double_heading_pane

0x4de8,	// (0x0000c4c6) list_double_large_graphic_pane_ParamLimits

0x4de8,	// (0x0000c4c6) list_double_large_graphic_pane

0x4de8,	// (0x0000c4c6) list_double_number_pane_ParamLimits

0x4de8,	// (0x0000c4c6) list_double_number_pane

0x4de8,	// (0x0000c4c6) list_double_pane_ParamLimits

0x4de8,	// (0x0000c4c6) list_double_pane

0x4de8,	// (0x0000c4c6) list_double_time_pane_ParamLimits

0x4de8,	// (0x0000c4c6) list_double_time_pane

0x4de8,	// (0x0000c4c6) list_setting_number_pane_ParamLimits

0x4de8,	// (0x0000c4c6) list_setting_number_pane

0x4de8,	// (0x0000c4c6) list_setting_pane_ParamLimits

0x4de8,	// (0x0000c4c6) list_setting_pane

0x4df9,	// (0x0000c4d7) list_single_2graphic_pane_ParamLimits

0x4df9,	// (0x0000c4d7) list_single_2graphic_pane

0x4df9,	// (0x0000c4d7) list_single_graphic_heading_pane_ParamLimits

0x4df9,	// (0x0000c4d7) list_single_graphic_heading_pane

0x4df9,	// (0x0000c4d7) list_single_graphic_pane_ParamLimits

0x4df9,	// (0x0000c4d7) list_single_graphic_pane

0x4df9,	// (0x0000c4d7) list_single_heading_pane_ParamLimits

0x4df9,	// (0x0000c4d7) list_single_heading_pane

0x4e46,	// (0x0000c524) list_single_large_graphic_pane_ParamLimits

0x4e46,	// (0x0000c524) list_single_large_graphic_pane

0x4df9,	// (0x0000c4d7) list_single_number_heading_pane_ParamLimits

0x4df9,	// (0x0000c4d7) list_single_number_heading_pane

0x4df9,	// (0x0000c4d7) list_single_number_pane_ParamLimits

0x4df9,	// (0x0000c4d7) list_single_number_pane

0x4df9,	// (0x0000c4d7) list_single_pane_ParamLimits

0x4df9,	// (0x0000c4d7) list_single_pane

0x894e,	// (0x0001002c) list_highlight_pane_cp1

0x93dc,	// (0x00010aba) list_single_pane_g1_ParamLimits

0x93dc,	// (0x00010aba) list_single_pane_g1

0x9307,	// (0x000109e5) list_single_pane_g2_ParamLimits

0x9307,	// (0x000109e5) list_single_pane_g2

0x0001,

0xf5e4,	// (0x00016cc2) list_single_pane_g_ParamLimits

0xf5e4,	// (0x00016cc2) list_single_pane_g

0x9313,	// (0x000109f1) list_single_pane_t1_ParamLimits

0x9313,	// (0x000109f1) list_single_pane_t1

0x93dc,	// (0x00010aba) list_single_number_pane_g1_ParamLimits

0x93dc,	// (0x00010aba) list_single_number_pane_g1

0x9307,	// (0x000109e5) list_single_number_pane_g2_ParamLimits

0x9307,	// (0x000109e5) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x00016cc2) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x00016cc2) list_single_number_pane_g

0x93e8,	// (0x00010ac6) list_single_number_pane_t1_ParamLimits

0x93e8,	// (0x00010ac6) list_single_number_pane_t1

0x4c4c,	// (0x0000c32a) list_single_number_pane_t2_ParamLimits

0x4c4c,	// (0x0000c32a) list_single_number_pane_t2

0x0001,

0xf955,	// (0x00017033) list_single_number_pane_t_ParamLimits

0xf955,	// (0x00017033) list_single_number_pane_t

0x93d0,	// (0x00010aae) list_single_graphic_pane_g1_ParamLimits

0x93d0,	// (0x00010aae) list_single_graphic_pane_g1

0x93dc,	// (0x00010aba) list_single_graphic_pane_g2_ParamLimits

0x93dc,	// (0x00010aba) list_single_graphic_pane_g2

0x9307,	// (0x000109e5) list_single_graphic_pane_g3_ParamLimits

0x9307,	// (0x000109e5) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00016cbb) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00016cbb) list_single_graphic_pane_g

0x93e8,	// (0x00010ac6) list_single_graphic_pane_t1_ParamLimits

0x93e8,	// (0x00010ac6) list_single_graphic_pane_t1

0x93dc,	// (0x00010aba) list_single_heading_pane_g1_ParamLimits

0x93dc,	// (0x00010aba) list_single_heading_pane_g1

0x9307,	// (0x000109e5) list_single_heading_pane_g2_ParamLimits

0x9307,	// (0x000109e5) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00016cc2) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00016cc2) list_single_heading_pane_g

0x94a5,	// (0x00010b83) list_single_heading_pane_t1_ParamLimits

0x94a5,	// (0x00010b83) list_single_heading_pane_t1

0x355a,	// (0x0000ac38) list_single_heading_pane_t2_ParamLimits

0x355a,	// (0x0000ac38) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00016cc7) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00016cc7) list_single_heading_pane_t

0x93dc,	// (0x00010aba) list_single_number_heading_pane_g1_ParamLimits

0x93dc,	// (0x00010aba) list_single_number_heading_pane_g1

0x9307,	// (0x000109e5) list_single_number_heading_pane_g2_ParamLimits

0x9307,	// (0x000109e5) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x00016cc2) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x00016cc2) list_single_number_heading_pane_g

0x94a5,	// (0x00010b83) list_single_number_heading_pane_t1_ParamLimits

0x94a5,	// (0x00010b83) list_single_number_heading_pane_t1

0x356c,	// (0x0000ac4a) list_single_number_heading_pane_t2_ParamLimits

0x356c,	// (0x0000ac4a) list_single_number_heading_pane_t2

0xdb6d,	// (0x0001524b) list_single_number_heading_pane_t3_ParamLimits

0xdb6d,	// (0x0001524b) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x00016ccc) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x00016ccc) list_single_number_heading_pane_t

0x93d0,	// (0x00010aae) list_single_graphic_heading_pane_g1_ParamLimits

0x93d0,	// (0x00010aae) list_single_graphic_heading_pane_g1

0x357e,	// (0x0000ac5c) list_single_graphic_heading_pane_g4_ParamLimits

0x357e,	// (0x0000ac5c) list_single_graphic_heading_pane_g4

0x9307,	// (0x000109e5) list_single_graphic_heading_pane_g5_ParamLimits

0x9307,	// (0x000109e5) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x00016cd3) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x00016cd3) list_single_graphic_heading_pane_g

0x94a5,	// (0x00010b83) list_single_graphic_heading_pane_t1_ParamLimits

0x94a5,	// (0x00010b83) list_single_graphic_heading_pane_t1

0x358f,	// (0x0000ac6d) list_single_graphic_heading_pane_t2_ParamLimits

0x358f,	// (0x0000ac6d) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00016cda) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00016cda) list_single_graphic_heading_pane_t

0x9276,	// (0x00010954) list_single_large_graphic_pane_g1_ParamLimits

0x9276,	// (0x00010954) list_single_large_graphic_pane_g1

0x9282,	// (0x00010960) list_single_large_graphic_pane_g2_ParamLimits

0x9282,	// (0x00010960) list_single_large_graphic_pane_g2

0x928e,	// (0x0001096c) list_single_large_graphic_pane_g3_ParamLimits

0x928e,	// (0x0001096c) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x00016cdf) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00016cdf) list_single_large_graphic_pane_g

0xb7ef,	// (0x00012ecd) wait_border_pane_g2_copy1

0x929a,	// (0x00010978) list_single_large_graphic_pane_g4_cp2

0x92a2,	// (0x00010980) list_single_large_graphic_pane_t1_ParamLimits

0x92a2,	// (0x00010980) list_single_large_graphic_pane_t1

0x35a1,	// (0x0000ac7f) list_double_pane_g1_ParamLimits

0x35a1,	// (0x0000ac7f) list_double_pane_g1

0x35ad,	// (0x0000ac8b) list_double_pane_g2_ParamLimits

0x35ad,	// (0x0000ac8b) list_double_pane_g2

0x0001,

0xf608,	// (0x00016ce6) list_double_pane_g_ParamLimits

0xf608,	// (0x00016ce6) list_double_pane_g

0x35b9,	// (0x0000ac97) list_double_pane_t1_ParamLimits

0x35b9,	// (0x0000ac97) list_double_pane_t1

0x35cf,	// (0x0000acad) list_double_pane_t2_ParamLimits

0x35cf,	// (0x0000acad) list_double_pane_t2

0x0001,

0xf60d,	// (0x00016ceb) list_double_pane_t_ParamLimits

0xf60d,	// (0x00016ceb) list_double_pane_t

0x35e1,	// (0x0000acbf) list_double2_pane_g1_ParamLimits

0x35e1,	// (0x0000acbf) list_double2_pane_g1

0x35ad,	// (0x0000ac8b) list_double2_pane_g2_ParamLimits

0x35ad,	// (0x0000ac8b) list_double2_pane_g2

0x0001,

0xf612,	// (0x00016cf0) list_double2_pane_g_ParamLimits

0xf612,	// (0x00016cf0) list_double2_pane_g

0x35b9,	// (0x0000ac97) list_double2_pane_t1_ParamLimits

0x35b9,	// (0x0000ac97) list_double2_pane_t1

0x35f2,	// (0x0000acd0) list_double2_pane_t2_ParamLimits

0x35f2,	// (0x0000acd0) list_double2_pane_t2

0x0001,

0xf617,	// (0x00016cf5) list_double2_pane_t_ParamLimits

0xf617,	// (0x00016cf5) list_double2_pane_t

0x35a1,	// (0x0000ac7f) list_double_number_pane_g1_ParamLimits

0x35a1,	// (0x0000ac7f) list_double_number_pane_g1

0x35ad,	// (0x0000ac8b) list_double_number_pane_g2_ParamLimits

0x35ad,	// (0x0000ac8b) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00016ce6) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00016ce6) list_double_number_pane_g

0x3604,	// (0x0000ace2) list_double_number_pane_t1_ParamLimits

0x3604,	// (0x0000ace2) list_double_number_pane_t1

0x3616,	// (0x0000acf4) list_double_number_pane_t2_ParamLimits

0x3616,	// (0x0000acf4) list_double_number_pane_t2

0x362c,	// (0x0000ad0a) list_double_number_pane_t3_ParamLimits

0x362c,	// (0x0000ad0a) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x00016cfa) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x00016cfa) list_double_number_pane_t

0x363e,	// (0x0000ad1c) list_double_graphic_pane_g1_ParamLimits

0x363e,	// (0x0000ad1c) list_double_graphic_pane_g1

0x364a,	// (0x0000ad28) list_double_graphic_pane_g2_ParamLimits

0x364a,	// (0x0000ad28) list_double_graphic_pane_g2

0x3659,	// (0x0000ad37) list_double_graphic_pane_g3_ParamLimits

0x3659,	// (0x0000ad37) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00016d01) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00016d01) list_double_graphic_pane_g

0x3671,	// (0x0000ad4f) list_double_graphic_pane_t1_ParamLimits

0x3671,	// (0x0000ad4f) list_double_graphic_pane_t1

0x3687,	// (0x0000ad65) list_double_graphic_pane_t2_ParamLimits

0x3687,	// (0x0000ad65) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x00016d0a) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x00016d0a) list_double_graphic_pane_t

0x363e,	// (0x0000ad1c) list_double2_graphic_pane_g1_ParamLimits

0x363e,	// (0x0000ad1c) list_double2_graphic_pane_g1

0x35a1,	// (0x0000ac7f) list_double2_graphic_pane_g2_ParamLimits

0x35a1,	// (0x0000ac7f) list_double2_graphic_pane_g2

0x35ad,	// (0x0000ac8b) list_double2_graphic_pane_g3_ParamLimits

0x35ad,	// (0x0000ac8b) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x00016d0f) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x00016d0f) list_double2_graphic_pane_g

0x3616,	// (0x0000acf4) list_double2_graphic_pane_t1_ParamLimits

0x3616,	// (0x0000acf4) list_double2_graphic_pane_t1

0x3699,	// (0x0000ad77) list_double2_graphic_pane_t2_ParamLimits

0x3699,	// (0x0000ad77) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x00016d16) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x00016d16) list_double2_graphic_pane_t

0x36ab,	// (0x0000ad89) list_double_large_graphic_pane_g1_ParamLimits

0x36ab,	// (0x0000ad89) list_double_large_graphic_pane_g1

0x35e1,	// (0x0000acbf) list_double_large_graphic_pane_g2_ParamLimits

0x35e1,	// (0x0000acbf) list_double_large_graphic_pane_g2

0x35ad,	// (0x0000ac8b) list_double_large_graphic_pane_g3_ParamLimits

0x35ad,	// (0x0000ac8b) list_double_large_graphic_pane_g3

0x36d4,	// (0x0000adb2) list_double_large_graphic_pane_g4_ParamLimits

0x36d4,	// (0x0000adb2) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x00016d1b) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x00016d1b) list_double_large_graphic_pane_g

0x36e5,	// (0x0000adc3) list_double_large_graphic_pane_t1_ParamLimits

0x36e5,	// (0x0000adc3) list_double_large_graphic_pane_t1

0x36fe,	// (0x0000addc) list_double_large_graphic_pane_t2_ParamLimits

0x36fe,	// (0x0000addc) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x00016d26) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x00016d26) list_double_large_graphic_pane_t

0x3710,	// (0x0000adee) list_double2_large_graphic_pane_g1_ParamLimits

0x3710,	// (0x0000adee) list_double2_large_graphic_pane_g1

0x35e1,	// (0x0000acbf) list_double2_large_graphic_pane_g2_ParamLimits

0x35e1,	// (0x0000acbf) list_double2_large_graphic_pane_g2

0x35ad,	// (0x0000ac8b) list_double2_large_graphic_pane_g3_ParamLimits

0x35ad,	// (0x0000ac8b) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x00016d2b) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x00016d2b) list_double2_large_graphic_pane_g

0x371c,	// (0x0000adfa) list_double2_large_graphic_pane_t1_ParamLimits

0x371c,	// (0x0000adfa) list_double2_large_graphic_pane_t1

0x3732,	// (0x0000ae10) list_double2_large_graphic_pane_t2_ParamLimits

0x3732,	// (0x0000ae10) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00016d32) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00016d32) list_double2_large_graphic_pane_t

0x3744,	// (0x0000ae22) list_double_heading_pane_g1_ParamLimits

0x3744,	// (0x0000ae22) list_double_heading_pane_g1

0x91e7,	// (0x000108c5) list_double_heading_pane_g2_ParamLimits

0x91e7,	// (0x000108c5) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x00016d37) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x00016d37) list_double_heading_pane_g

0x3755,	// (0x0000ae33) list_double_heading_pane_t1_ParamLimits

0x3755,	// (0x0000ae33) list_double_heading_pane_t1

0x376b,	// (0x0000ae49) list_double_heading_pane_t2_ParamLimits

0x376b,	// (0x0000ae49) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x00016d3c) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x00016d3c) list_double_heading_pane_t

0x9375,	// (0x00010a53) list_double_graphic_heading_pane_g1_ParamLimits

0x9375,	// (0x00010a53) list_double_graphic_heading_pane_g1

0x3744,	// (0x0000ae22) list_double_graphic_heading_pane_g2_ParamLimits

0x3744,	// (0x0000ae22) list_double_graphic_heading_pane_g2

0x91e7,	// (0x000108c5) list_double_graphic_heading_pane_g3_ParamLimits

0x91e7,	// (0x000108c5) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00016d41) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00016d41) list_double_graphic_heading_pane_g

0x377d,	// (0x0000ae5b) list_double_graphic_heading_pane_t1_ParamLimits

0x377d,	// (0x0000ae5b) list_double_graphic_heading_pane_t1

0x3793,	// (0x0000ae71) list_double_graphic_heading_pane_t2_ParamLimits

0x3793,	// (0x0000ae71) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x00016d48) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x00016d48) list_double_graphic_heading_pane_t

0x35e1,	// (0x0000acbf) list_double_time_pane_g1_ParamLimits

0x35e1,	// (0x0000acbf) list_double_time_pane_g1

0x35ad,	// (0x0000ac8b) list_double_time_pane_g2_ParamLimits

0x35ad,	// (0x0000ac8b) list_double_time_pane_g2

0x0001,

0xf612,	// (0x00016cf0) list_double_time_pane_g_ParamLimits

0xf612,	// (0x00016cf0) list_double_time_pane_g

0x371c,	// (0x0000adfa) list_double_time_pane_t1_ParamLimits

0x371c,	// (0x0000adfa) list_double_time_pane_t1

0x37a5,	// (0x0000ae83) list_double_time_pane_t2_ParamLimits

0x37a5,	// (0x0000ae83) list_double_time_pane_t2

0x37b7,	// (0x0000ae95) list_double_time_pane_t3_ParamLimits

0x37b7,	// (0x0000ae95) list_double_time_pane_t3

0x37c9,	// (0x0000aea7) list_double_time_pane_t4_ParamLimits

0x37c9,	// (0x0000aea7) list_double_time_pane_t4

0x0003,

0xf66f,	// (0x00016d4d) list_double_time_pane_t_ParamLimits

0xf66f,	// (0x00016d4d) list_double_time_pane_t

0x35a1,	// (0x0000ac7f) list_setting_pane_g1_ParamLimits

0x35a1,	// (0x0000ac7f) list_setting_pane_g1

0x35ad,	// (0x0000ac8b) list_setting_pane_g2_ParamLimits

0x35ad,	// (0x0000ac8b) list_setting_pane_g2

0x0001,

0xf608,	// (0x00016ce6) list_setting_pane_g_ParamLimits

0xf608,	// (0x00016ce6) list_setting_pane_g

0x37db,	// (0x0000aeb9) list_setting_pane_t1_ParamLimits

0x37db,	// (0x0000aeb9) list_setting_pane_t1

0x37f5,	// (0x0000aed3) list_setting_pane_t2_ParamLimits

0x37f5,	// (0x0000aed3) list_setting_pane_t2

0x0002,

0xf678,	// (0x00016d56) list_setting_pane_t_ParamLimits

0xf678,	// (0x00016d56) list_setting_pane_t

0x3832,	// (0x0000af10) set_value_pane_cp_ParamLimits

0x3832,	// (0x0000af10) set_value_pane_cp

0x35a1,	// (0x0000ac7f) list_setting_number_pane_g1_ParamLimits

0x35a1,	// (0x0000ac7f) list_setting_number_pane_g1

0x35ad,	// (0x0000ac8b) list_setting_number_pane_g2_ParamLimits

0x35ad,	// (0x0000ac8b) list_setting_number_pane_g2

0x0001,

0xf608,	// (0x00016ce6) list_setting_number_pane_g_ParamLimits

0xf608,	// (0x00016ce6) list_setting_number_pane_g

0x383e,	// (0x0000af1c) list_setting_number_pane_t1_ParamLimits

0x383e,	// (0x0000af1c) list_setting_number_pane_t1

0x3857,	// (0x0000af35) list_setting_number_pane_t2_ParamLimits

0x3857,	// (0x0000af35) list_setting_number_pane_t2

0x3871,	// (0x0000af4f) list_setting_number_pane_t3_ParamLimits

0x3871,	// (0x0000af4f) list_setting_number_pane_t3

0x0003,

0xf67f,	// (0x00016d5d) list_setting_number_pane_t_ParamLimits

0xf67f,	// (0x00016d5d) list_setting_number_pane_t

0x3832,	// (0x0000af10) set_value_pane_ParamLimits

0x3832,	// (0x0000af10) set_value_pane

0x962a,	// (0x00010d08) bg_set_opt_pane_ParamLimits

0x962a,	// (0x00010d08) bg_set_opt_pane

0x964b,	// (0x00010d29) set_value_pane_t1

0x9659,	// (0x00010d37) slider_set_pane_cp3

0x9662,	// (0x00010d40) volume_small_pane_cp

0x966b,	// (0x00010d49) list_form_gen_pane

0x91be,	// (0x0001089c) scroll_pane_cp8

0xdb7f,	// (0x0001525d) form_field_data_pane_ParamLimits

0xdb7f,	// (0x0001525d) form_field_data_pane

0x38b4,	// (0x0000af92) form_field_data_wide_pane_ParamLimits

0x38b4,	// (0x0000af92) form_field_data_wide_pane

0x38d4,	// (0x0000afb2) form_field_popup_pane_ParamLimits

0x38d4,	// (0x0000afb2) form_field_popup_pane

0x38ec,	// (0x0000afca) form_field_popup_wide_pane_ParamLimits

0x38ec,	// (0x0000afca) form_field_popup_wide_pane

0x96f2,	// (0x00010dd0) form_field_slider_pane_ParamLimits

0x96f2,	// (0x00010dd0) form_field_slider_pane

0x9705,	// (0x00010de3) form_field_slider_wide_pane_ParamLimits

0x9705,	// (0x00010de3) form_field_slider_wide_pane

0x9718,	// (0x00010df6) data_form_pane

0x390d,	// (0x0000afeb) form_field_data_pane_t1

0x9744,	// (0x00010e22) input_focus_pane

0x9752,	// (0x00010e30) data_form_wide_pane

0x977e,	// (0x00010e5c) form_field_data_wide_pane_t1

0x9035,	// (0x00010713) input_focus_pane_cp6

0x3925,	// (0x0000b003) form_field_popup_pane_t1

0x9744,	// (0x00010e22) input_focus_pane_cp7

0x9718,	// (0x00010df6) list_form_pane

0x97c0,	// (0x00010e9e) form_field_popup_wide_pane_t1

0x9744,	// (0x00010e22) input_focus_pane_cp8

0x97d5,	// (0x00010eb3) list_form_wide_pane

0x3945,	// (0x0000b023) form_field_slider_pane_t1_ParamLimits

0x3945,	// (0x0000b023) form_field_slider_pane_t1

0x395b,	// (0x0000b039) form_field_slider_pane_t2_ParamLimits

0x395b,	// (0x0000b039) form_field_slider_pane_t2

0x0001,

0xf68f,	// (0x00016d6d) form_field_slider_pane_t_ParamLimits

0xf68f,	// (0x00016d6d) form_field_slider_pane_t

0x8cc7,	// (0x000103a5) input_focus_pane_cp9_ParamLimits

0x8cc7,	// (0x000103a5) input_focus_pane_cp9

0x3970,	// (0x0000b04e) slider_cont_pane_ParamLimits

0x3970,	// (0x0000b04e) slider_cont_pane

0x9828,	// (0x00010f06) form_field_slider_wide_pane_t1_ParamLimits

0x9828,	// (0x00010f06) form_field_slider_wide_pane_t1

0x983a,	// (0x00010f18) form_field_slider_wide_pane_t2_ParamLimits

0x983a,	// (0x00010f18) form_field_slider_wide_pane_t2

0x0001,

0xf694,	// (0x00016d72) form_field_slider_wide_pane_t_ParamLimits

0xf694,	// (0x00016d72) form_field_slider_wide_pane_t

0x8cc7,	// (0x000103a5) input_focus_pane_cp10_ParamLimits

0x8cc7,	// (0x000103a5) input_focus_pane_cp10

0x3984,	// (0x0000b062) slider_cont_pane_cp1_ParamLimits

0x3984,	// (0x0000b062) slider_cont_pane_cp1

0x399a,	// (0x0000b078) slider_form_pane_cp

0x986a,	// (0x00010f48) input_focus_pane_g1

0x9872,	// (0x00010f50) input_focus_pane_g2

0x987a,	// (0x00010f58) input_focus_pane_g3

0x9882,	// (0x00010f60) input_focus_pane_g4

0x988a,	// (0x00010f68) input_focus_pane_g5

0x9892,	// (0x00010f70) input_focus_pane_g6

0x989a,	// (0x00010f78) input_focus_pane_g7

0x98a2,	// (0x00010f80) input_focus_pane_g8

0x98aa,	// (0x00010f88) input_focus_pane_g9

0x8867,	// (0x0000ff45) input_focus_pane_g10

0x0009,

0xf699,	// (0x00016d77) input_focus_pane_g

0xb7f8,	// (0x00012ed6) wait_border_pane_g3_copy1

0x39a2,	// (0x0000b080) data_form_pane_t1

0x8867,	// (0x0000ff45) wait_anim_pane_g1_copy1

0x4dcf,	// (0x0000c4ad) data_form_wide_pane_t1

0xd05a,	// (0x00014738) list_form_graphic_pane_cp_ParamLimits

0xd05a,	// (0x00014738) list_form_graphic_pane_cp

0xd63e,	// (0x00014d1c) slider_form_pane_g1

0xd647,	// (0x00014d25) slider_form_pane_g2

0x0006,

0xf985,	// (0x00017063) slider_form_pane_g

0x98cc,	// (0x00010faa) list_form_graphic_pane_ParamLimits

0x98cc,	// (0x00010faa) list_form_graphic_pane

0x98f7,	// (0x00010fd5) list_form_graphic_pane_g1

0x98ff,	// (0x00010fdd) list_form_graphic_pane_t1_ParamLimits

0x98ff,	// (0x00010fdd) list_form_graphic_pane_t1

0x8a2e,	// (0x0001010c) list_highlight_pane_cp5_ParamLimits

0x8a2e,	// (0x0001010c) list_highlight_pane_cp5

0x39bb,	// (0x0000b099) find_pane_g1

0x991d,	// (0x00010ffb) input_find_pane

0x39c6,	// (0x0000b0a4) input_find_pane_g1_ParamLimits

0x39c6,	// (0x0000b0a4) input_find_pane_g1

0x39d2,	// (0x0000b0b0) input_find_pane_t1_ParamLimits

0x39d2,	// (0x0000b0b0) input_find_pane_t1

0x39e7,	// (0x0000b0c5) input_find_pane_t2_ParamLimits

0x39e7,	// (0x0000b0c5) input_find_pane_t2

0x0001,

0xf6ae,	// (0x00016d8c) input_find_pane_t_ParamLimits

0xf6ae,	// (0x00016d8c) input_find_pane_t

0x995c,	// (0x0001103a) input_focus_pane_cp5_ParamLimits

0x995c,	// (0x0001103a) input_focus_pane_cp5

0x8cc7,	// (0x000103a5) bg_popup_window_pane_cp2_ParamLimits

0x8cc7,	// (0x000103a5) bg_popup_window_pane_cp2

0x9976,	// (0x00011054) listscroll_menu_pane_ParamLimits

0x9976,	// (0x00011054) listscroll_menu_pane

0x9982,	// (0x00011060) popup_submenu_window_ParamLimits

0x9982,	// (0x00011060) popup_submenu_window

0x99a6,	// (0x00011084) find_popup_pane_g1

0x99ae,	// (0x0001108c) input_popup_find_pane_cp

0x995c,	// (0x0001103a) input_focus_pane_cp4_ParamLimits

0x995c,	// (0x0001103a) input_focus_pane_cp4

0x99c4,	// (0x000110a2) input_popup_find_pane_t1_ParamLimits

0x99c4,	// (0x000110a2) input_popup_find_pane_t1

0x894e,	// (0x0001002c) bg_popup_sub_pane_cp

0x99f2,	// (0x000110d0) listscroll_popup_sub_pane

0x99fa,	// (0x000110d8) list_submenu_pane_ParamLimits

0x99fa,	// (0x000110d8) list_submenu_pane

0x9a0b,	// (0x000110e9) scroll_pane_cp4

0x9a13,	// (0x000110f1) list_single_popup_submenu_pane_ParamLimits

0x9a13,	// (0x000110f1) list_single_popup_submenu_pane

0x9a27,	// (0x00011105) list_single_popup_submenu_pane_g1

0x9a2f,	// (0x0001110d) list_single_popup_submenu_pane_t1_ParamLimits

0x9a2f,	// (0x0001110d) list_single_popup_submenu_pane_t1

0x8cc7,	// (0x000103a5) bg_active_tab_pane_cp1_ParamLimits

0x8cc7,	// (0x000103a5) bg_active_tab_pane_cp1

0xd06d,	// (0x0001474b) tabs_2_active_pane_g1

0x3a08,	// (0x0000b0e6) tabs_2_active_pane_t1

0x8cc7,	// (0x000103a5) bg_passive_tab_pane_cp1_ParamLimits

0x8cc7,	// (0x000103a5) bg_passive_tab_pane_cp1

0xd06d,	// (0x0001474b) tabs_2_passive_pane_g1

0x3a08,	// (0x0000b0e6) tabs_2_passive_pane_t1

0x8a2e,	// (0x0001010c) bg_active_tab_pane_cp4

0x3a1e,	// (0x0000b0fc) tabs_2_long_active_pane_t1

0xa844,	// (0x00011f22) bg_passive_tab_pane_cp4

0x77df,	// (0x0000eebd) list_single_midp_graphic_pane_g4_ParamLimits

0x8a2e,	// (0x0001010c) bg_active_tab_pane_cp5

0x3a35,	// (0x0000b113) tabs_3_long_active_pane_t1

0xa844,	// (0x00011f22) bg_passive_tab_pane_cp5

0x77df,	// (0x0000eebd) list_single_midp_graphic_pane_g4

0x8a2e,	// (0x0001010c) bg_popup_window_pane_cp13_ParamLimits

0x8a2e,	// (0x0001010c) bg_popup_window_pane_cp13

0x9aa6,	// (0x00011184) listscroll_popup_fast_pane_ParamLimits

0x9aa6,	// (0x00011184) listscroll_popup_fast_pane

0x9ab5,	// (0x00011193) grid_popup_fast_pane_ParamLimits

0x9ab5,	// (0x00011193) grid_popup_fast_pane

0x9ac7,	// (0x000111a5) scroll_pane_cp9_ParamLimits

0x9ac7,	// (0x000111a5) scroll_pane_cp9

0xecc6,	// (0x000163a4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xecc6,	// (0x000163a4) list_single_graphic_hl_pane_t1_cp2

0x9aeb,	// (0x000111c9) input_focus_pane_cp20_ParamLimits

0x9aeb,	// (0x000111c9) input_focus_pane_cp20

0x9af9,	// (0x000111d7) query_popup_data_pane_t1_ParamLimits

0x9af9,	// (0x000111d7) query_popup_data_pane_t1

0x9b0c,	// (0x000111ea) query_popup_data_pane_t2_ParamLimits

0x9b0c,	// (0x000111ea) query_popup_data_pane_t2

0x9b52,	// (0x00011230) query_popup_data_pane_t3_ParamLimits

0x9b52,	// (0x00011230) query_popup_data_pane_t3

0x9b93,	// (0x00011271) query_popup_data_pane_t4_ParamLimits

0x9b93,	// (0x00011271) query_popup_data_pane_t4

0x9bcf,	// (0x000112ad) query_popup_data_pane_t5_ParamLimits

0x9bcf,	// (0x000112ad) query_popup_data_pane_t5

0x0004,

0xf6b3,	// (0x00016d91) query_popup_data_pane_t_ParamLimits

0xf6b3,	// (0x00016d91) query_popup_data_pane_t

0x986a,	// (0x00010f48) bg_set_opt_pane_g1

0x9872,	// (0x00010f50) bg_set_opt_pane_g2

0x987a,	// (0x00010f58) bg_set_opt_pane_g3

0x9882,	// (0x00010f60) bg_set_opt_pane_g4

0x988a,	// (0x00010f68) bg_set_opt_pane_g5

0x9892,	// (0x00010f70) bg_set_opt_pane_g6

0x989a,	// (0x00010f78) bg_set_opt_pane_g7

0x98a2,	// (0x00010f80) bg_set_opt_pane_g8

0x98aa,	// (0x00010f88) bg_set_opt_pane_g9

0x0008,

0xf6be,	// (0x00016d9c) bg_set_opt_pane_g

0x7402,	// (0x0000eae0) control_top_pane_stacon_ParamLimits

0x7402,	// (0x0000eae0) control_top_pane_stacon

0x7455,	// (0x0000eb33) signal_pane_stacon_ParamLimits

0x7455,	// (0x0000eb33) signal_pane_stacon

0xa1e4,	// (0x000118c2) stacon_top_pane_g1_ParamLimits

0xa1e4,	// (0x000118c2) stacon_top_pane_g1

0x747a,	// (0x0000eb58) title_pane_stacon_ParamLimits

0x747a,	// (0x0000eb58) title_pane_stacon

0x749c,	// (0x0000eb7a) uni_indicator_pane_stacon_ParamLimits

0x749c,	// (0x0000eb7a) uni_indicator_pane_stacon

0x74b1,	// (0x0000eb8f) battery_pane_stacon_ParamLimits

0x74b1,	// (0x0000eb8f) battery_pane_stacon

0x74f1,	// (0x0000ebcf) control_bottom_pane_stacon_ParamLimits

0x74f1,	// (0x0000ebcf) control_bottom_pane_stacon

0x7510,	// (0x0000ebee) navi_pane_stacon_ParamLimits

0x7510,	// (0x0000ebee) navi_pane_stacon

0xa206,	// (0x000118e4) stacon_bottom_pane_g1_ParamLimits

0xa206,	// (0x000118e4) stacon_bottom_pane_g1

0x9c06,	// (0x000112e4) aid_levels_signal_lsc_ParamLimits

0x9c06,	// (0x000112e4) aid_levels_signal_lsc

0x71ce,	// (0x0000e8ac) signal_pane_stacon_g1_ParamLimits

0x71ce,	// (0x0000e8ac) signal_pane_stacon_g1

0x71da,	// (0x0000e8b8) signal_pane_stacon_g2_ParamLimits

0x71da,	// (0x0000e8b8) signal_pane_stacon_g2

0x0001,

0xf6d1,	// (0x00016daf) signal_pane_stacon_g_ParamLimits

0xf6d1,	// (0x00016daf) signal_pane_stacon_g

0x720e,	// (0x0000e8ec) title_pane_stacon_t1_ParamLimits

0x720e,	// (0x0000e8ec) title_pane_stacon_t1

0x9c20,	// (0x000112fe) uni_indicator_pane_stacon_g1

0x9c2a,	// (0x00011308) uni_indicator_pane_stacon_g2

0x9c34,	// (0x00011312) uni_indicator_pane_stacon_g3

0x9c3e,	// (0x0001131c) uni_indicator_pane_stacon_g4

0x0003,

0xf6dd,	// (0x00016dbb) uni_indicator_pane_stacon_g

0x7233,	// (0x0000e911) control_top_pane_stacon_g1

0x723b,	// (0x0000e919) control_top_pane_stacon_t1_ParamLimits

0x723b,	// (0x0000e919) control_top_pane_stacon_t1

0x9c48,	// (0x00011326) aid_levels_battery_lsc_ParamLimits

0x9c48,	// (0x00011326) aid_levels_battery_lsc

0x726c,	// (0x0000e94a) battery_pane_stacon_g1_ParamLimits

0x726c,	// (0x0000e94a) battery_pane_stacon_g1

0x7278,	// (0x0000e956) battery_pane_stacon_g2_ParamLimits

0x7278,	// (0x0000e956) battery_pane_stacon_g2

0x0001,

0xf6e6,	// (0x00016dc4) battery_pane_stacon_g_ParamLimits

0xf6e6,	// (0x00016dc4) battery_pane_stacon_g

0x72a7,	// (0x0000e985) navi_icon_pane_stacon

0x72b7,	// (0x0000e995) navi_navi_pane_stacon

0x72a7,	// (0x0000e985) navi_text_pane_stacon

0x7233,	// (0x0000e911) control_bottom_pane_stacon_g1

0x72c7,	// (0x0000e9a5) control_bottom_pane_stacon_t1_ParamLimits

0x72c7,	// (0x0000e9a5) control_bottom_pane_stacon_t1

0x3a4b,	// (0x0000b129) grid_app_pane_ParamLimits

0x3a4b,	// (0x0000b129) grid_app_pane

0x3a79,	// (0x0000b157) scroll_pane_cp15_ParamLimits

0x3a79,	// (0x0000b157) scroll_pane_cp15

0x3a90,	// (0x0000b16e) cell_app_pane_ParamLimits

0x3a90,	// (0x0000b16e) cell_app_pane

0x3acf,	// (0x0000b1ad) cell_app_pane_g1_ParamLimits

0x3acf,	// (0x0000b1ad) cell_app_pane_g1

0x9ce5,	// (0x000113c3) cell_app_pane_g2_ParamLimits

0x9ce5,	// (0x000113c3) cell_app_pane_g2

0x0001,

0xf6eb,	// (0x00016dc9) cell_app_pane_g_ParamLimits

0xf6eb,	// (0x00016dc9) cell_app_pane_g

0x9cf1,	// (0x000113cf) cell_app_pane_t1_ParamLimits

0x9cf1,	// (0x000113cf) cell_app_pane_t1

0x9d03,	// (0x000113e1) grid_highlight_pane_ParamLimits

0x9d03,	// (0x000113e1) grid_highlight_pane

0x986a,	// (0x00010f48) cell_highlight_pane_g1

0x9872,	// (0x00010f50) cell_highlight_pane_g2

0x987a,	// (0x00010f58) cell_highlight_pane_g3

0x9882,	// (0x00010f60) cell_highlight_pane_g4

0x988a,	// (0x00010f68) cell_highlight_pane_g5

0x9892,	// (0x00010f70) cell_highlight_pane_g6

0x989a,	// (0x00010f78) cell_highlight_pane_g7

0x98a2,	// (0x00010f80) cell_highlight_pane_g8

0x98aa,	// (0x00010f88) cell_highlight_pane_g9

0x8867,	// (0x0000ff45) cell_highlight_pane_g10

0x0009,

0xf699,	// (0x00016d77) cell_highlight_pane_g

0x9d14,	// (0x000113f2) bg_scroll_pane

0x730b,	// (0x0000e9e9) scroll_handle_pane

0x9d5b,	// (0x00011439) scroll_bg_pane_g1

0x9d70,	// (0x0001144e) scroll_bg_pane_g2

0x9d88,	// (0x00011466) scroll_bg_pane_g3

0x0002,

0xf6f0,	// (0x00016dce) scroll_bg_pane_g

0x9d9d,	// (0x0001147b) scroll_handle_focus_pane_ParamLimits

0x9d9d,	// (0x0001147b) scroll_handle_focus_pane

0x9d5b,	// (0x00011439) scroll_handle_pane_g1

0x9daa,	// (0x00011488) scroll_handle_pane_g2

0x9d88,	// (0x00011466) scroll_handle_pane_g3

0x0002,

0xf6f7,	// (0x00016dd5) scroll_handle_pane_g

0x995c,	// (0x0001103a) bg_popup_sub_pane_cp21_ParamLimits

0x995c,	// (0x0001103a) bg_popup_sub_pane_cp21

0x9dbe,	// (0x0001149c) popup_fep_japan_predictive_window_t1_ParamLimits

0x9dbe,	// (0x0001149c) popup_fep_japan_predictive_window_t1

0x9dd5,	// (0x000114b3) popup_fep_japan_predictive_window_t2_ParamLimits

0x9dd5,	// (0x000114b3) popup_fep_japan_predictive_window_t2

0x9e08,	// (0x000114e6) popup_fep_japan_predictive_window_t3_ParamLimits

0x9e08,	// (0x000114e6) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fe,	// (0x00016ddc) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fe,	// (0x00016ddc) popup_fep_japan_predictive_window_t

0x894e,	// (0x0001002c) bg_popup_sub_pane_cp23

0x9e3f,	// (0x0001151d) listscroll_japin_cand_pane

0x9e47,	// (0x00011525) popup_fep_japan_candidate_window_t1

0x9e55,	// (0x00011533) candidate_pane_ParamLimits

0x9e55,	// (0x00011533) candidate_pane

0x9e68,	// (0x00011546) scroll_pane_cp30

0x9e70,	// (0x0001154e) list_single_popup_jap_candidate_pane_ParamLimits

0x9e70,	// (0x0001154e) list_single_popup_jap_candidate_pane

0x894e,	// (0x0001002c) list_highlight_pane_cp30

0x9e85,	// (0x00011563) list_single_popup_jap_candidate_pane_t1

0x3afc,	// (0x0000b1da) level_1_signal

0x3b0e,	// (0x0000b1ec) level_2_signal

0x3b21,	// (0x0000b1ff) level_3_signal

0x3b34,	// (0x0000b212) level_4_signal

0x3b47,	// (0x0000b225) level_5_signal

0x3b5a,	// (0x0000b238) level_6_signal

0x3b6d,	// (0x0000b24b) level_7_signal

0x3afc,	// (0x0000b1da) level_1_battery

0x3b0e,	// (0x0000b1ec) level_2_battery

0x3b21,	// (0x0000b1ff) level_3_battery

0x3b34,	// (0x0000b212) level_4_battery

0x3b47,	// (0x0000b225) level_5_battery

0x3b5a,	// (0x0000b238) level_6_battery

0x3b6d,	// (0x0000b24b) level_7_battery

0x9f07,	// (0x000115e5) list_menu_pane_ParamLimits

0x9f07,	// (0x000115e5) list_menu_pane

0x9f18,	// (0x000115f6) scroll_pane_cp25_ParamLimits

0x9f18,	// (0x000115f6) scroll_pane_cp25

0x3b80,	// (0x0000b25e) list_double2_graphic_pane_cp2_ParamLimits

0x3b80,	// (0x0000b25e) list_double2_graphic_pane_cp2

0x3b80,	// (0x0000b25e) list_double2_large_graphic_pane_cp2_ParamLimits

0x3b80,	// (0x0000b25e) list_double2_large_graphic_pane_cp2

0x3b80,	// (0x0000b25e) list_double2_pane_cp2_ParamLimits

0x3b80,	// (0x0000b25e) list_double2_pane_cp2

0x3b80,	// (0x0000b25e) list_double_graphic_pane_cp2_ParamLimits

0x3b80,	// (0x0000b25e) list_double_graphic_pane_cp2

0x3b80,	// (0x0000b25e) list_double_large_graphic_pane_cp2_ParamLimits

0x3b80,	// (0x0000b25e) list_double_large_graphic_pane_cp2

0x3b80,	// (0x0000b25e) list_double_number_pane_cp2_ParamLimits

0x3b80,	// (0x0000b25e) list_double_number_pane_cp2

0x3b80,	// (0x0000b25e) list_double_pane_cp2_ParamLimits

0x3b80,	// (0x0000b25e) list_double_pane_cp2

0x3b9b,	// (0x0000b279) list_single_2graphic_pane_cp2_ParamLimits

0x3b9b,	// (0x0000b279) list_single_2graphic_pane_cp2

0x3b9b,	// (0x0000b279) list_single_graphic_heading_pane_cp2_ParamLimits

0x3b9b,	// (0x0000b279) list_single_graphic_heading_pane_cp2

0x3b9b,	// (0x0000b279) list_single_graphic_pane_cp2_ParamLimits

0x3b9b,	// (0x0000b279) list_single_graphic_pane_cp2

0x3b9b,	// (0x0000b279) list_single_heading_pane_cp2_ParamLimits

0x3b9b,	// (0x0000b279) list_single_heading_pane_cp2

0x3bac,	// (0x0000b28a) list_single_large_graphic_pane_cp2_ParamLimits

0x3bac,	// (0x0000b28a) list_single_large_graphic_pane_cp2

0x3b9b,	// (0x0000b279) list_single_number_heading_pane_cp2_ParamLimits

0x3b9b,	// (0x0000b279) list_single_number_heading_pane_cp2

0x3b9b,	// (0x0000b279) list_single_number_pane_cp2_ParamLimits

0x3b9b,	// (0x0000b279) list_single_number_pane_cp2

0x3b9b,	// (0x0000b279) list_single_pane_cp2_ParamLimits

0x3b9b,	// (0x0000b279) list_single_pane_cp2

0x9fad,	// (0x0001168b) bg_popup_sub_pane_cp22

0x73ba,	// (0x0000ea98) popup_side_volume_key_window_g1

0x73de,	// (0x0000eabc) popup_side_volume_key_window_t1

0x73fa,	// (0x0000ead8) volume_small_pane_cp1

0x8cc7,	// (0x000103a5) bg_popup_sub_pane_cp24_ParamLimits

0x8cc7,	// (0x000103a5) bg_popup_sub_pane_cp24

0x9fc3,	// (0x000116a1) fep_china_uni_candidate_pane_ParamLimits

0x9fc3,	// (0x000116a1) fep_china_uni_candidate_pane

0x9fd7,	// (0x000116b5) fep_china_uni_entry_pane

0x9fe7,	// (0x000116c5) popup_fep_china_uni_window_g1

0xa003,	// (0x000116e1) fep_china_uni_entry_pane_g1

0xa00b,	// (0x000116e9) fep_china_uni_entry_pane_g2

0x0001,

0xf72b,	// (0x00016e09) fep_china_uni_entry_pane_g

0xa013,	// (0x000116f1) fep_entry_item_pane

0xa01d,	// (0x000116fb) fep_candidate_item_pane

0xa025,	// (0x00011703) fep_china_uni_candidate_pane_g1

0xa02d,	// (0x0001170b) fep_china_uni_candidate_pane_g2

0xa035,	// (0x00011713) fep_china_uni_candidate_pane_g3

0xa03d,	// (0x0001171b) fep_china_uni_candidate_pane_g4

0x0003,

0xf730,	// (0x00016e0e) fep_china_uni_candidate_pane_g

0x8867,	// (0x0000ff45) fep_entry_item_pane_g1

0xa045,	// (0x00011723) fep_entry_item_pane_t1_ParamLimits

0xa045,	// (0x00011723) fep_entry_item_pane_t1

0xa05b,	// (0x00011739) fep_candidate_item_pane_t1_ParamLimits

0xa05b,	// (0x00011739) fep_candidate_item_pane_t1

0xa070,	// (0x0001174e) fep_candidate_item_pane_t2_ParamLimits

0xa070,	// (0x0001174e) fep_candidate_item_pane_t2

0x0001,

0xf739,	// (0x00016e17) fep_candidate_item_pane_t_ParamLimits

0xf739,	// (0x00016e17) fep_candidate_item_pane_t

0x8a2e,	// (0x0001010c) list_highlight_pane_cp31_ParamLimits

0x8a2e,	// (0x0001010c) list_highlight_pane_cp31

0xa082,	// (0x00011760) level_1_signal_lsc

0xa08b,	// (0x00011769) level_2_signal_lsc

0xa094,	// (0x00011772) level_3_signal_lsc

0xa09d,	// (0x0001177b) level_4_signal_lsc

0xa0a6,	// (0x00011784) level_5_signal_lsc

0xa0af,	// (0x0001178d) level_6_signal_lsc

0xa0b8,	// (0x00011796) level_7_signal_lsc

0xa0b8,	// (0x00011796) level_1_battery_lsc

0xa0c1,	// (0x0001179f) level_2_battery_lsc

0xa0ca,	// (0x000117a8) level_3_battery_lsc

0xa0d3,	// (0x000117b1) level_4_battery_lsc

0xa0dc,	// (0x000117ba) level_5_battery_lsc

0xa0e5,	// (0x000117c3) level_6_battery_lsc

0xa082,	// (0x00011760) level_7_battery_lsc

0xa0ee,	// (0x000117cc) scroll_handle_focus_pane_g1

0xa0f7,	// (0x000117d5) scroll_handle_focus_pane_g2

0xa100,	// (0x000117de) scroll_handle_focus_pane_g3

0x0002,

0xf73e,	// (0x00016e1c) scroll_handle_focus_pane_g

0x3c05,	// (0x0000b2e3) list_single_2graphic_pane_g1_ParamLimits

0x3c05,	// (0x0000b2e3) list_single_2graphic_pane_g1

0x357e,	// (0x0000ac5c) list_single_2graphic_pane_g2_ParamLimits

0x357e,	// (0x0000ac5c) list_single_2graphic_pane_g2

0x9307,	// (0x000109e5) list_single_2graphic_pane_g3_ParamLimits

0x9307,	// (0x000109e5) list_single_2graphic_pane_g3

0x3c11,	// (0x0000b2ef) list_single_2graphic_pane_g4_ParamLimits

0x3c11,	// (0x0000b2ef) list_single_2graphic_pane_g4

0x0003,

0xf745,	// (0x00016e23) list_single_2graphic_pane_g_ParamLimits

0xf745,	// (0x00016e23) list_single_2graphic_pane_g

0x3c1d,	// (0x0000b2fb) list_single_2graphic_pane_t1_ParamLimits

0x3c1d,	// (0x0000b2fb) list_single_2graphic_pane_t1

0x3c4b,	// (0x0000b329) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x3c4b,	// (0x0000b329) list_double2_graphic_large_graphic_pane_g1

0x35e1,	// (0x0000acbf) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x35e1,	// (0x0000acbf) list_double2_graphic_large_graphic_pane_g2

0x35ad,	// (0x0000ac8b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x35ad,	// (0x0000ac8b) list_double2_graphic_large_graphic_pane_g3

0x3c5b,	// (0x0000b339) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x3c5b,	// (0x0000b339) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74e,	// (0x00016e2c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74e,	// (0x00016e2c) list_double2_graphic_large_graphic_pane_g

0x3c67,	// (0x0000b345) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x3c67,	// (0x0000b345) list_double2_graphic_large_graphic_pane_t1

0x3c7d,	// (0x0000b35b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x3c7d,	// (0x0000b35b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf757,	// (0x00016e35) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf757,	// (0x00016e35) list_double2_graphic_large_graphic_pane_t

0xa2ad,	// (0x0001198b) popup_fast_swap_window_ParamLimits

0xa2ad,	// (0x0001198b) popup_fast_swap_window

0xa2c9,	// (0x000119a7) popup_side_volume_key_window

0xa2e3,	// (0x000119c1) stacon_top_pane

0xa2ed,	// (0x000119cb) status_pane_ParamLimits

0xa2ed,	// (0x000119cb) status_pane

0xa2e3,	// (0x000119c1) status_small_pane

0x894e,	// (0x0001002c) control_pane

0x894e,	// (0x0001002c) stacon_bottom_pane

0x91be,	// (0x0001089c) scroll_pane_cp121

0x966b,	// (0x00010d49) set_content_pane

0xd075,	// (0x00014753) bg_active_tab_pane_g1_cp1

0xa19c,	// (0x0001187a) bg_active_tab_pane_g2_cp1

0xd07e,	// (0x0001475c) bg_active_tab_pane_g3_cp1

0xd075,	// (0x00014753) bg_passive_tab_pane_g1_cp1

0xa19c,	// (0x0001187a) bg_passive_tab_pane_g2_cp1

0xd07e,	// (0x0001475c) bg_passive_tab_pane_g3_cp1

0x3c98,	// (0x0000b376) bg_active_tab_pane_g1_cp2

0xa19c,	// (0x0001187a) bg_active_tab_pane_g2_cp2

0x3c8f,	// (0x0000b36d) bg_active_tab_pane_g3_cp2

0x3c98,	// (0x0000b376) bg_passive_tab_pane_g1_cp2

0xa19c,	// (0x0001187a) bg_passive_tab_pane_g2_cp2

0x3c8f,	// (0x0000b36d) bg_passive_tab_pane_g3_cp2

0x3caa,	// (0x0000b388) bg_active_tab_pane_g1_cp3

0xa19c,	// (0x0001187a) bg_active_tab_pane_g2_cp3

0x3ca1,	// (0x0000b37f) bg_active_tab_pane_g3_cp3

0x3caa,	// (0x0000b388) bg_passive_tab_pane_g1_cp3

0xa19c,	// (0x0001187a) bg_passive_tab_pane_g2_cp3

0x3ca1,	// (0x0000b37f) bg_passive_tab_pane_g3_cp3

0x3cbc,	// (0x0000b39a) bg_active_tab_pane_g1_cp4

0xa19c,	// (0x0001187a) bg_active_tab_pane_g2_cp4

0x3cb3,	// (0x0000b391) bg_active_tab_pane_g3_cp4

0x3cbc,	// (0x0000b39a) bg_passive_tab_pane_g1_cp4

0xa19c,	// (0x0001187a) bg_passive_tab_pane_g2_cp4

0x3cb3,	// (0x0000b391) bg_passive_tab_pane_g3_cp4

0xa222,	// (0x00011900) bg_active_tab_pane_g1_cp5

0xa19c,	// (0x0001187a) bg_active_tab_pane_g2_cp5

0xa22b,	// (0x00011909) bg_active_tab_pane_g3_cp5

0xa222,	// (0x00011900) bg_passive_tab_pane_g1_cp5

0xa19c,	// (0x0001187a) bg_passive_tab_pane_g2_cp5

0xa22b,	// (0x00011909) bg_passive_tab_pane_g3_cp5

0x3cc5,	// (0x0000b3a3) list_set_graphic_pane_ParamLimits

0x3cc5,	// (0x0000b3a3) list_set_graphic_pane

0x894e,	// (0x0001002c) bg_set_opt_pane_cp4

0xa234,	// (0x00011912) list_set_graphic_pane_g1_ParamLimits

0xa234,	// (0x00011912) list_set_graphic_pane_g1

0xa240,	// (0x0001191e) list_set_graphic_pane_g2_ParamLimits

0xa240,	// (0x0001191e) list_set_graphic_pane_g2

0x0001,

0xf75c,	// (0x00016e3a) list_set_graphic_pane_g_ParamLimits

0xf75c,	// (0x00016e3a) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0001719f) volume_small_pane_cp_g

0xa262,	// (0x00011940) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa262,	// (0x00011940) list_double2_large_graphic_pane_g1_cp2

0xa26e,	// (0x0001194c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa26e,	// (0x0001194c) list_double2_large_graphic_pane_g2_cp2

0xa27d,	// (0x0001195b) list_double2_large_graphic_pane_g3_cp2

0xa285,	// (0x00011963) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xa285,	// (0x00011963) list_double2_large_graphic_pane_t1_cp2

0xa29b,	// (0x00011979) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xa29b,	// (0x00011979) list_double2_large_graphic_pane_t2_cp2

0xd3ee,	// (0x00014acc) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd3ee,	// (0x00014acc) list_double_large_graphic_pane_g1_cp2

0xd3ff,	// (0x00014add) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd3ff,	// (0x00014add) list_double_large_graphic_pane_g2_cp2

0xa3c8,	// (0x00011aa6) list_double_large_graphic_pane_g3_cp2

0xd40e,	// (0x00014aec) list_double_large_graphic_pane_g4_cp

0xd416,	// (0x00014af4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd416,	// (0x00014af4) list_double_large_graphic_pane_t1_cp2

0xd42d,	// (0x00014b0b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd42d,	// (0x00014b0b) list_double_large_graphic_pane_t2_cp2

0xa2fb,	// (0x000119d9) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa2fb,	// (0x000119d9) list_double2_graphic_pane_g1_cp2

0xa307,	// (0x000119e5) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa307,	// (0x000119e5) list_double2_graphic_pane_g2_cp2

0xa316,	// (0x000119f4) list_double2_graphic_pane_g3_cp2

0xa31e,	// (0x000119fc) list_double2_graphic_pane_t1_cp2_ParamLimits

0xa31e,	// (0x000119fc) list_double2_graphic_pane_t1_cp2

0xa334,	// (0x00011a12) list_double2_graphic_pane_t2_cp2_ParamLimits

0xa334,	// (0x00011a12) list_double2_graphic_pane_t2_cp2

0xa346,	// (0x00011a24) list_single_number_heading_pane_g1_cp2_ParamLimits

0xa346,	// (0x00011a24) list_single_number_heading_pane_g1_cp2

0xa352,	// (0x00011a30) list_single_number_heading_pane_g2_cp2

0xa35a,	// (0x00011a38) list_single_number_heading_pane_t1_cp2_ParamLimits

0xa35a,	// (0x00011a38) list_single_number_heading_pane_t1_cp2

0xa370,	// (0x00011a4e) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa370,	// (0x00011a4e) list_single_number_heading_pane_t2_cp2

0xa382,	// (0x00011a60) list_single_number_heading_pane_t3_cp2_ParamLimits

0xa382,	// (0x00011a60) list_single_number_heading_pane_t3_cp2

0xa346,	// (0x00011a24) list_single_heading_pane_g1_cp2_ParamLimits

0xa346,	// (0x00011a24) list_single_heading_pane_g1_cp2

0xa352,	// (0x00011a30) list_single_heading_pane_g2_cp2

0xa35a,	// (0x00011a38) list_single_heading_pane_t1_cp2_ParamLimits

0xa35a,	// (0x00011a38) list_single_heading_pane_t1_cp2

0xd1f8,	// (0x000148d6) list_single_heading_pane_t2_cp2_ParamLimits

0xd1f8,	// (0x000148d6) list_single_heading_pane_t2_cp2

0xd17d,	// (0x0001485b) list_double_graphic_pane_g1_cp2_ParamLimits

0xd17d,	// (0x0001485b) list_double_graphic_pane_g1_cp2

0xd189,	// (0x00014867) list_double_graphic_pane_g2_cp2_ParamLimits

0xd189,	// (0x00014867) list_double_graphic_pane_g2_cp2

0xd198,	// (0x00014876) list_double_graphic_pane_g3_cp2

0xd1a0,	// (0x0001487e) list_double_graphic_pane_t1_cp2_ParamLimits

0xd1a0,	// (0x0001487e) list_double_graphic_pane_t1_cp2

0xd1b6,	// (0x00014894) list_double_graphic_pane_t2_cp2_ParamLimits

0xd1b6,	// (0x00014894) list_double_graphic_pane_t2_cp2

0xa3bc,	// (0x00011a9a) list_double_number_pane_g1_cp2_ParamLimits

0xa3bc,	// (0x00011a9a) list_double_number_pane_g1_cp2

0xa3c8,	// (0x00011aa6) list_double_number_pane_g2_cp2

0xd143,	// (0x00014821) list_double_number_pane_t1_cp2_ParamLimits

0xd143,	// (0x00014821) list_double_number_pane_t1_cp2

0xd155,	// (0x00014833) list_double_number_pane_t2_cp2_ParamLimits

0xd155,	// (0x00014833) list_double_number_pane_t2_cp2

0xd16b,	// (0x00014849) list_double_number_pane_t3_cp2_ParamLimits

0xd16b,	// (0x00014849) list_double_number_pane_t3_cp2

0xd0bb,	// (0x00014799) list_single_graphic_pane_g1_cp2_ParamLimits

0xd0bb,	// (0x00014799) list_single_graphic_pane_g1_cp2

0xa346,	// (0x00011a24) list_single_graphic_pane_g2_cp2_ParamLimits

0xa346,	// (0x00011a24) list_single_graphic_pane_g2_cp2

0xa352,	// (0x00011a30) list_single_graphic_pane_g3_cp2

0xd093,	// (0x00014771) list_single_graphic_pane_t1_cp2_ParamLimits

0xd093,	// (0x00014771) list_single_graphic_pane_t1_cp2

0xa346,	// (0x00011a24) list_single_number_pane_g1_cp2_ParamLimits

0xa346,	// (0x00011a24) list_single_number_pane_g1_cp2

0xa352,	// (0x00011a30) list_single_number_pane_g2_cp2

0xd093,	// (0x00014771) list_single_number_pane_t1_cp2_ParamLimits

0xd093,	// (0x00014771) list_single_number_pane_t1_cp2

0xd0a9,	// (0x00014787) list_single_number_pane_t2_cp2_ParamLimits

0xd0a9,	// (0x00014787) list_single_number_pane_t2_cp2

0xa26e,	// (0x0001194c) list_double2_pane_g1_cp2_ParamLimits

0xa26e,	// (0x0001194c) list_double2_pane_g1_cp2

0xa27d,	// (0x0001195b) list_double2_pane_g2_cp2

0xa394,	// (0x00011a72) list_double2_pane_t1_cp2_ParamLimits

0xa394,	// (0x00011a72) list_double2_pane_t1_cp2

0xa3aa,	// (0x00011a88) list_double2_pane_t2_cp2_ParamLimits

0xa3aa,	// (0x00011a88) list_double2_pane_t2_cp2

0xa3bc,	// (0x00011a9a) list_double_pane_g1_cp2_ParamLimits

0xa3bc,	// (0x00011a9a) list_double_pane_g1_cp2

0xa3c8,	// (0x00011aa6) list_double_pane_g2_cp2

0xa3d0,	// (0x00011aae) list_double_pane_t1_cp2_ParamLimits

0xa3d0,	// (0x00011aae) list_double_pane_t1_cp2

0xa3e6,	// (0x00011ac4) list_double_pane_t2_cp2_ParamLimits

0xa3e6,	// (0x00011ac4) list_double_pane_t2_cp2

0xa40e,	// (0x00011aec) list_single_pane_cp2_g3

0xa346,	// (0x00011a24) list_single_pane_g1_cp2_ParamLimits

0xa346,	// (0x00011a24) list_single_pane_g1_cp2

0xa352,	// (0x00011a30) list_single_pane_g2_cp2

0xa41e,	// (0x00011afc) list_single_pane_t1_cp2_ParamLimits

0xa41e,	// (0x00011afc) list_single_pane_t1_cp2

0xa436,	// (0x00011b14) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa436,	// (0x00011b14) list_single_large_graphic_pane_g1_cp2

0xa442,	// (0x00011b20) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xa442,	// (0x00011b20) list_single_large_graphic_pane_g2_cp2

0xa44e,	// (0x00011b2c) list_single_large_graphic_pane_g3_cp2

0xa456,	// (0x00011b34) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa456,	// (0x00011b34) list_single_large_graphic_pane_g4_cp1

0xa470,	// (0x00011b4e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xa470,	// (0x00011b4e) list_single_large_graphic_pane_t1_cp2

0xbe22,	// (0x00013500) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xbe22,	// (0x00013500) list_single_graphic_heading_pane_g1_cp2

0xbdfd,	// (0x000134db) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xbdfd,	// (0x000134db) list_single_graphic_heading_pane_g4_cp2

0xa352,	// (0x00011a30) list_single_graphic_heading_pane_g5_cp2

0xa35a,	// (0x00011a38) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa35a,	// (0x00011a38) list_single_graphic_heading_pane_t1_cp2

0xbe2e,	// (0x0001350c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xbe2e,	// (0x0001350c) list_single_graphic_heading_pane_t2_cp2

0xbdf1,	// (0x000134cf) list_single_2graphic_pane_g1_cp2_ParamLimits

0xbdf1,	// (0x000134cf) list_single_2graphic_pane_g1_cp2

0xbdfd,	// (0x000134db) list_single_2graphic_pane_g2_cp2_ParamLimits

0xbdfd,	// (0x000134db) list_single_2graphic_pane_g2_cp2

0xa352,	// (0x00011a30) list_single_2graphic_pane_g3_cp2

0xb1e1,	// (0x000128bf) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb1e1,	// (0x000128bf) list_single_2graphic_pane_g4_cp2

0xbe0c,	// (0x000134ea) list_single_2graphic_pane_t1_cp2_ParamLimits

0xbe0c,	// (0x000134ea) list_single_2graphic_pane_t1_cp2

0x8867,	// (0x0000ff45) list_highlight_pane_g10_cp1

0xb9eb,	// (0x000130c9) list_highlight_pane_g1_cp1

0xb9f3,	// (0x000130d1) list_highlight_pane_g2_cp1

0xb9fb,	// (0x000130d9) list_highlight_pane_g3_cp1

0xba03,	// (0x000130e1) list_highlight_pane_g4_cp1

0xba0b,	// (0x000130e9) list_highlight_pane_g5_cp1

0xba13,	// (0x000130f1) list_highlight_pane_g6_cp1

0xba1b,	// (0x000130f9) list_highlight_pane_g7_cp1

0xba23,	// (0x00013101) list_highlight_pane_g8_cp1

0xba2b,	// (0x00013109) list_highlight_pane_g9_cp1

0x498d,	// (0x0000c06b) form_field_slider_pane_t3

0x499b,	// (0x0000c079) form_field_slider_pane_t4

0xb935,	// (0x00013013) slider_form_pane_ParamLimits

0xb935,	// (0x00013013) slider_form_pane

0x894e,	// (0x0001002c) control_abbreviations

0x894e,	// (0x0001002c) control_conventions

0x894e,	// (0x0001002c) control_definitions

0x894e,	// (0x0001002c) format_table_attribute

0xd242,	// (0x00014920) bg_popup_preview_window_pane_g9

0x894e,	// (0x0001002c) format_table_data2

0x894e,	// (0x0001002c) format_table_data3

0x894e,	// (0x0001002c) format_table_data_example

0x0008,

0x894e,	// (0x0001002c) intro_purpose

0xf8e5,	// (0x00016fc3) bg_popup_preview_window_pane_g

0x894e,	// (0x0001002c) texts_category

0x894e,	// (0x0001002c) texts_graphics

0xa486,	// (0x00011b64) text_digital

0xa495,	// (0x00011b73) text_primary

0xa4a4,	// (0x00011b82) text_primary_small

0xa4b3,	// (0x00011b91) text_secondary

0xa4c2,	// (0x00011ba0) text_title

0xd6e2,	// (0x00014dc0) bg_passive_tab_pane_g1_cp3_srt

0xa19c,	// (0x0001187a) bg_passive_tab_pane_g2_cp3_srt

0xd6eb,	// (0x00014dc9) bg_passive_tab_pane_g3_cp3_srt

0x8cc7,	// (0x000103a5) bg_active_tab_pane_cp3_srt_ParamLimits

0x8cc7,	// (0x000103a5) bg_active_tab_pane_cp3_srt

0xd052,	// (0x00014730) tabs_4_active_pane_srt_g1

0x3271,	// (0x0000a94f) tabs_4_active_pane_srt_t1_ParamLimits

0x3271,	// (0x0000a94f) tabs_4_active_pane_srt_t1

0xd6e2,	// (0x00014dc0) bg_active_tab_pane_g1_cp3_copy1

0xa19c,	// (0x0001187a) bg_active_tab_pane_g2_cp3_copy1

0xd6eb,	// (0x00014dc9) bg_active_tab_pane_g3_cp3_copy1

0x8a2e,	// (0x0001010c) tabs_2_long_active_pane_srt_ParamLimits

0x8a2e,	// (0x0001010c) tabs_2_long_active_pane_srt

0x8a2e,	// (0x0001010c) tabs_2_long_passive_pane_srt_ParamLimits

0x8a2e,	// (0x0001010c) tabs_2_long_passive_pane_srt

0xa844,	// (0x00011f22) bg_passive_tab_pane_cp4_srt_ParamLimits

0xa844,	// (0x00011f22) bg_passive_tab_pane_cp4_srt

0xd605,	// (0x00014ce3) bg_passive_tab_pane_g1_cp4_srt

0xa19c,	// (0x0001187a) bg_passive_tab_pane_g2_cp4_srt

0xd60e,	// (0x00014cec) bg_passive_tab_pane_g3_cp4_srt

0x8a2e,	// (0x0001010c) bg_active_tab_pane_cp4_srt_ParamLimits

0x8a2e,	// (0x0001010c) bg_active_tab_pane_cp4_srt

0x3a1e,	// (0x0000b0fc) tabs_2_long_active_pane_srt_t1_ParamLimits

0x3a1e,	// (0x0000b0fc) tabs_2_long_active_pane_srt_t1

0xd605,	// (0x00014ce3) bg_active_tab_pane_g1_cp4_srt

0xa19c,	// (0x0001187a) bg_active_tab_pane_g2_cp4_srt

0xd60e,	// (0x00014cec) bg_active_tab_pane_g3_cp4_srt

0x8cc7,	// (0x000103a5) tabs_3_long_active_pane_srt_ParamLimits

0x8cc7,	// (0x000103a5) tabs_3_long_active_pane_srt

0x8cc7,	// (0x000103a5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8cc7,	// (0x000103a5) tabs_3_long_passive_pane_cp_srt

0x8cc7,	// (0x000103a5) tabs_3_long_passive_pane_srt_ParamLimits

0x8cc7,	// (0x000103a5) tabs_3_long_passive_pane_srt

0xa844,	// (0x00011f22) bg_passive_tab_pane_cp5_srt_ParamLimits

0xa844,	// (0x00011f22) bg_passive_tab_pane_cp5_srt

0xa222,	// (0x00011900) bg_passive_tab_pane_g1_cp5_srt

0xa19c,	// (0x0001187a) bg_passive_tab_pane_g2_cp5_srt

0xa22b,	// (0x00011909) bg_passive_tab_pane_g3_cp5_srt

0x8a2e,	// (0x0001010c) bg_active_tab_pane_cp5_srt_ParamLimits

0x8a2e,	// (0x0001010c) bg_active_tab_pane_cp5_srt

0x3a35,	// (0x0000b113) tabs_3_long_active_pane_srt_t1_ParamLimits

0x3a35,	// (0x0000b113) tabs_3_long_active_pane_srt_t1

0xa222,	// (0x00011900) bg_active_tab_pane_g1_cp5_srt

0xa19c,	// (0x0001187a) bg_active_tab_pane_g2_cp5_srt

0xa22b,	// (0x00011909) bg_active_tab_pane_g3_cp5_srt

0xd5f7,	// (0x00014cd5) navi_text_pane_srt_t1

0xd5ef,	// (0x00014ccd) navi_icon_pane_srt_g1

0xa687,	// (0x00011d65) midp_editing_number_pane_srt

0xa4d1,	// (0x00011baf) midp_ticker_pane_srt

0xa68f,	// (0x00011d6d) midp_ticker_pane_srt_g1

0xa697,	// (0x00011d75) midp_ticker_pane_srt_g2

0x0001,

0xf77b,	// (0x00016e59) midp_ticker_pane_srt_g

0xa69f,	// (0x00011d7d) midp_ticker_pane_srt_t1

0xd5e0,	// (0x00014cbe) midp_editing_number_pane_t1_copy1

0x3cd9,	// (0x0000b3b7) listscroll_midp_pane

0x3cd9,	// (0x0000b3b7) midp_form_pane

0xa541,	// (0x00011c1f) midp_info_popup_window_ParamLimits

0xa541,	// (0x00011c1f) midp_info_popup_window

0x995c,	// (0x0001103a) bg_popup_sub_pane_cp50_ParamLimits

0x995c,	// (0x0001103a) bg_popup_sub_pane_cp50

0xb642,	// (0x00012d20) listscroll_midp_info_pane_ParamLimits

0xb642,	// (0x00012d20) listscroll_midp_info_pane

0xb62a,	// (0x00012d08) listscroll_form_midp_pane_ParamLimits

0xb62a,	// (0x00012d08) listscroll_form_midp_pane

0xb636,	// (0x00012d14) scroll_bar_cp050

0x4981,	// (0x0000c05f) list_midp_pane

0xe0e9,	// (0x000157c7) signal_pane_g2_cp

0xb544,	// (0x00012c22) listscroll_midp_info_pane_t1_ParamLimits

0xb544,	// (0x00012c22) listscroll_midp_info_pane_t1

0xb55c,	// (0x00012c3a) listscroll_midp_info_pane_t2_ParamLimits

0xb55c,	// (0x00012c3a) listscroll_midp_info_pane_t2

0xb59a,	// (0x00012c78) listscroll_midp_info_pane_t3_ParamLimits

0xb59a,	// (0x00012c78) listscroll_midp_info_pane_t3

0xb5d4,	// (0x00012cb2) listscroll_midp_info_pane_t4_ParamLimits

0xb5d4,	// (0x00012cb2) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x00016efe) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x00016efe) listscroll_midp_info_pane_t

0x9a0b,	// (0x000110e9) scroll_pane_cp21

0xb4e8,	// (0x00012bc6) form_midp_field_choice_group_pane

0xb4f1,	// (0x00012bcf) form_midp_field_text_pane

0xb52a,	// (0x00012c08) form_midp_field_time_pane

0xb532,	// (0x00012c10) form_midp_gauge_slider_pane

0xb53b,	// (0x00012c19) form_midp_gauge_wait_pane

0x894e,	// (0x0001002c) form_midp_image_pane

0x496b,	// (0x0000c049) list_single_midp_pane_ParamLimits

0x496b,	// (0x0000c049) list_single_midp_pane

0x494a,	// (0x0000c028) form_midp_field_text_pane_t1

0xb2bb,	// (0x00012999) input_focus_pane_cp050

0xb4bf,	// (0x00012b9d) list_midp_form_text_pane

0xb46b,	// (0x00012b49) form_midp_field_choice_group_pane_t1

0xb479,	// (0x00012b57) input_focus_pane_cp051

0xb48d,	// (0x00012b6b) list_midp_choice_pane

0x894e,	// (0x0001002c) status_idle_pane

0xb44f,	// (0x00012b2d) form_midp_field_time_pane_t1

0x8867,	// (0x0000ff45) wait_anim_pane_g2_copy1

0xb45d,	// (0x00012b3b) form_midp_field_time_pane_t2

0x0001,

0xa5e9,	// (0x00011cc7) aid_navinavi_width_2_pane

0xf81b,	// (0x00016ef9) form_midp_field_time_pane_t

0x894e,	// (0x0001002c) input_focus_pane_cp052

0x894e,	// (0x0001002c) bg_input_focus_pane_cp040

0xb40f,	// (0x00012aed) form_midp_gauge_slider_pane_t1

0xb41d,	// (0x00012afb) form_midp_gauge_slider_pane_t2

0x492e,	// (0x0000c00c) form_midp_gauge_slider_pane_t3

0x493c,	// (0x0000c01a) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x00016ef0) form_midp_gauge_slider_pane_t

0xb447,	// (0x00012b25) form_midp_slider_pane

0x8a2e,	// (0x0001010c) bg_input_focus_pane_cp041_ParamLimits

0x8a2e,	// (0x0001010c) bg_input_focus_pane_cp041

0xb3df,	// (0x00012abd) form_midp_gauge_wait_pane_t1_ParamLimits

0xb3df,	// (0x00012abd) form_midp_gauge_wait_pane_t1

0xb3f1,	// (0x00012acf) form_midp_gauge_wait_pane_t2_ParamLimits

0xb3f1,	// (0x00012acf) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x00016eeb) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x00016eeb) form_midp_gauge_wait_pane_t

0xb403,	// (0x00012ae1) form_midp_wait_pane_ParamLimits

0xb403,	// (0x00012ae1) form_midp_wait_pane

0xb3a9,	// (0x00012a87) form_midp_image_pane_g1

0xb3b2,	// (0x00012a90) form_midp_image_pane_t1

0xb3c1,	// (0x00012a9f) form_midp_image_pane_t2

0xb3d0,	// (0x00012aae) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x00016ee4) form_midp_image_pane_t

0xb391,	// (0x00012a6f) list_single_midp_pane_g1

0xb39a,	// (0x00012a78) list_single_midp_pane_t1

0x491a,	// (0x0000bff8) list_midp_form_item_pane_ParamLimits

0x491a,	// (0x0000bff8) list_midp_form_item_pane

0xa591,	// (0x00011c6f) list_midp_form_item_pane_t1

0xa5a0,	// (0x00011c7e) midp_ticker_pane_g1

0xa5ac,	// (0x00011c8a) midp_ticker_pane_g2

0x0001,

0xf761,	// (0x00016e3f) midp_ticker_pane_g

0xa5b8,	// (0x00011c96) midp_ticker_pane_t1

0xd5e0,	// (0x00014cbe) midp_editing_number_pane_t1

0xd668,	// (0x00014d46) midp_editing_number_pane

0xd674,	// (0x00014d52) midp_ticker_pane

0xd5d0,	// (0x00014cae) ai_message_heading_pane

0x894e,	// (0x0001002c) bg_popup_window_pane_cp14

0xd5d8,	// (0x00014cb6) listscroll_ai_message_pane

0xd55a,	// (0x00014c38) ai_message_heading_pane_g1_ParamLimits

0xd55a,	// (0x00014c38) ai_message_heading_pane_g1

0xd566,	// (0x00014c44) ai_message_heading_pane_g2_ParamLimits

0xd566,	// (0x00014c44) ai_message_heading_pane_g2

0xd572,	// (0x00014c50) ai_message_heading_pane_g3_ParamLimits

0xd572,	// (0x00014c50) ai_message_heading_pane_g3

0xd57e,	// (0x00014c5c) ai_message_heading_pane_g4_ParamLimits

0xd57e,	// (0x00014c5c) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x00017025) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x00017025) ai_message_heading_pane_g

0xd58a,	// (0x00014c68) ai_message_heading_pane_t1_ParamLimits

0xd58a,	// (0x00014c68) ai_message_heading_pane_t1

0xd5a4,	// (0x00014c82) ai_message_heading_pane_t2_ParamLimits

0xd5a4,	// (0x00014c82) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x0001702e) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x0001702e) ai_message_heading_pane_t

0xd5b6,	// (0x00014c94) bg_popup_heading_pane_cp1_ParamLimits

0xd5b6,	// (0x00014c94) bg_popup_heading_pane_cp1

0xd548,	// (0x00014c26) list_ai_message_pane_ParamLimits

0xd548,	// (0x00014c26) list_ai_message_pane

0x9a0b,	// (0x000110e9) scroll_pane_cp10

0xd4e4,	// (0x00014bc2) list_ai_message_pane_g1

0xd4ec,	// (0x00014bca) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x00017002) list_ai_message_pane_g

0xd4f4,	// (0x00014bd2) list_ai_message_pane_t1_ParamLimits

0xd4f4,	// (0x00014bd2) list_ai_message_pane_t1

0xd509,	// (0x00014be7) list_ai_message_pane_t2_ParamLimits

0xd509,	// (0x00014be7) list_ai_message_pane_t2

0xd51e,	// (0x00014bfc) list_ai_message_pane_t3_ParamLimits

0xd51e,	// (0x00014bfc) list_ai_message_pane_t3

0xd533,	// (0x00014c11) list_ai_message_pane_t4_ParamLimits

0xd533,	// (0x00014c11) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x00017007) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x00017007) list_ai_message_pane_t

0xd4d2,	// (0x00014bb0) cell_ai_soft_ind_pane_ParamLimits

0xd4d2,	// (0x00014bb0) cell_ai_soft_ind_pane

0xa5ca,	// (0x00011ca8) cell_ai_soft_ind_pane_g1_ParamLimits

0xa5ca,	// (0x00011ca8) cell_ai_soft_ind_pane_g1

0x894e,	// (0x0001002c) grid_highlight_cp1

0xa5d7,	// (0x00011cb5) text_secondary_cp56_ParamLimits

0xa5d7,	// (0x00011cb5) text_secondary_cp56

0xd4a7,	// (0x00014b85) example_general_pane_ParamLimits

0xd4a7,	// (0x00014b85) example_general_pane

0xd4b3,	// (0x00014b91) example_parent_pane_g1_ParamLimits

0xd4b3,	// (0x00014b91) example_parent_pane_g1

0xd4bf,	// (0x00014b9d) example_parent_pane_t1_ParamLimits

0xd4bf,	// (0x00014b9d) example_parent_pane_t1

0x420e,	// (0x0000b8ec) popup_preview_text_window_ParamLimits

0x420e,	// (0x0000b8ec) popup_preview_text_window

0xa416,	// (0x00011af4) list_single_pane_cp2_g4

0x8d7d,	// (0x0001045b) bg_popup_preview_window_pane_ParamLimits

0x8d7d,	// (0x0001045b) bg_popup_preview_window_pane

0xd24a,	// (0x00014928) popup_preview_text_window_t1_ParamLimits

0xd24a,	// (0x00014928) popup_preview_text_window_t1

0xd268,	// (0x00014946) popup_preview_text_window_t2_ParamLimits

0xd268,	// (0x00014946) popup_preview_text_window_t2

0xd2b1,	// (0x0001498f) popup_preview_text_window_t3_ParamLimits

0xd2b1,	// (0x0001498f) popup_preview_text_window_t3

0xd2f6,	// (0x000149d4) popup_preview_text_window_t4_ParamLimits

0xd2f6,	// (0x000149d4) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x00016fd6) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x00016fd6) popup_preview_text_window_t

0xd374,	// (0x00014a52) scroll_pane_cp11

0xb199,	// (0x00012877) bg_popup_preview_window_pane_g1

0xd20a,	// (0x000148e8) bg_popup_preview_window_pane_g2

0xd212,	// (0x000148f0) bg_popup_preview_window_pane_g3

0xd21a,	// (0x000148f8) bg_popup_preview_window_pane_g4

0xd222,	// (0x00014900) bg_popup_preview_window_pane_g5

0xd22a,	// (0x00014908) bg_popup_preview_window_pane_g6

0xd232,	// (0x00014910) bg_popup_preview_window_pane_g7

0xd23a,	// (0x00014918) bg_popup_preview_window_pane_g8

0x6ebf,	// (0x0000e59d) aid_popup_width_pane

0x4190,	// (0x0000b86e) popup_midp_note_alarm_window_ParamLimits

0x4190,	// (0x0000b86e) popup_midp_note_alarm_window

0x9718,	// (0x00010df6) data_form_pane_ParamLimits

0x3903,	// (0x0000afe1) form_field_data_pane_g1

0x390d,	// (0x0000afeb) form_field_data_pane_t1_ParamLimits

0x9744,	// (0x00010e22) input_focus_pane_ParamLimits

0x9752,	// (0x00010e30) data_form_wide_pane_ParamLimits

0x975e,	// (0x00010e3c) form_field_data_wide_pane_g1

0x977e,	// (0x00010e5c) form_field_data_wide_pane_t1_ParamLimits

0x9035,	// (0x00010713) input_focus_pane_cp6_ParamLimits

0x39fc,	// (0x0000b0da) input_popup_find_pane_g1_ParamLimits

0x39fc,	// (0x0000b0da) input_popup_find_pane_g1

0x7288,	// (0x0000e966) aid_navi_side_left_pane

0x7298,	// (0x0000e976) aid_navi_side_right_pane

0xbad4,	// (0x000131b2) bg_popup_window_pane_cp30_ParamLimits

0xbad4,	// (0x000131b2) bg_popup_window_pane_cp30

0xbb4e,	// (0x0001322c) popup_midp_note_alarm_window_g1_ParamLimits

0xbb4e,	// (0x0001322c) popup_midp_note_alarm_window_g1

0xbb7e,	// (0x0001325c) popup_midp_note_alarm_window_t1_ParamLimits

0xbb7e,	// (0x0001325c) popup_midp_note_alarm_window_t1

0xbc1f,	// (0x000132fd) popup_midp_note_alarm_window_t2_ParamLimits

0xbc1f,	// (0x000132fd) popup_midp_note_alarm_window_t2

0xbccd,	// (0x000133ab) popup_midp_note_alarm_window_t3_ParamLimits

0xbccd,	// (0x000133ab) popup_midp_note_alarm_window_t3

0xbcf5,	// (0x000133d3) popup_midp_note_alarm_window_t4_ParamLimits

0xbcf5,	// (0x000133d3) popup_midp_note_alarm_window_t4

0xbd15,	// (0x000133f3) popup_midp_note_alarm_window_t5_ParamLimits

0xbd15,	// (0x000133f3) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x00016f73) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x00016f73) popup_midp_note_alarm_window_t

0xbdc1,	// (0x0001349f) wait_bar_pane_cp1_ParamLimits

0xbdc1,	// (0x0001349f) wait_bar_pane_cp1

0x894e,	// (0x0001002c) wait_anim_pane_copy1

0x894e,	// (0x0001002c) wait_border_pane_copy1

0xb7e6,	// (0x00012ec4) wait_border_pane_g1_copy1

0x9798,	// (0x00010e76) form_field_popup_pane_g1

0x3925,	// (0x0000b003) form_field_popup_pane_t1_ParamLimits

0x9744,	// (0x00010e22) input_focus_pane_cp7_ParamLimits

0x9718,	// (0x00010df6) list_form_pane_ParamLimits

0x97b8,	// (0x00010e96) form_field_popup_wide_pane_g1

0x97c0,	// (0x00010e9e) form_field_popup_wide_pane_t1_ParamLimits

0x9744,	// (0x00010e22) input_focus_pane_cp8_ParamLimits

0x97d5,	// (0x00010eb3) list_form_wide_pane_ParamLimits

0xd713,	// (0x00014df1) aid_size_cell_graphic_pane

0x39a2,	// (0x0000b080) data_form_pane_t1_ParamLimits

0x4dcf,	// (0x0000c4ad) data_form_wide_pane_t1_ParamLimits

0x456c,	// (0x0000bc4a) bg_status_flat_pane

0x31ce,	// (0x0000a8ac) title_pane_t1_ParamLimits

0x89f6,	// (0x000100d4) title_pane_t2_ParamLimits

0x8a1c,	// (0x000100fa) title_pane_t3_ParamLimits

0xf573,	// (0x00016c51) title_pane_t_ParamLimits

0x3afc,	// (0x0000b1da) level_1_signal_ParamLimits

0x3b0e,	// (0x0000b1ec) level_2_signal_ParamLimits

0x3b21,	// (0x0000b1ff) level_3_signal_ParamLimits

0x3b34,	// (0x0000b212) level_4_signal_ParamLimits

0x3b47,	// (0x0000b225) level_5_signal_ParamLimits

0x3b5a,	// (0x0000b238) level_6_signal_ParamLimits

0x3b6d,	// (0x0000b24b) level_7_signal_ParamLimits

0x3afc,	// (0x0000b1da) level_1_battery_ParamLimits

0x3b0e,	// (0x0000b1ec) level_2_battery_ParamLimits

0x3b21,	// (0x0000b1ff) level_3_battery_ParamLimits

0x3b34,	// (0x0000b212) level_4_battery_ParamLimits

0x3b47,	// (0x0000b225) level_5_battery_ParamLimits

0x3b5a,	// (0x0000b238) level_6_battery_ParamLimits

0x3b6d,	// (0x0000b24b) level_7_battery_ParamLimits

0xb9eb,	// (0x000130c9) bg_status_flat_pane_g1

0xb9f3,	// (0x000130d1) bg_status_flat_pane_g2

0xb9fb,	// (0x000130d9) bg_status_flat_pane_g3

0xba03,	// (0x000130e1) bg_status_flat_pane_g4

0xba0b,	// (0x000130e9) bg_status_flat_pane_g5

0xba13,	// (0x000130f1) bg_status_flat_pane_g6

0xba1b,	// (0x000130f9) bg_status_flat_pane_g7

0x325b,	// (0x0000a939) tabs_3_active_pane_t1_ParamLimits

0x325b,	// (0x0000a939) tabs_3_passive_pane_t1_ParamLimits

0x3271,	// (0x0000a94f) tabs_4_active_pane_t1_ParamLimits

0x3271,	// (0x0000a94f) tabs_4_1_passive_pane_t1_ParamLimits

0x3a08,	// (0x0000b0e6) tabs_2_active_pane_t1_ParamLimits

0x3a08,	// (0x0000b0e6) tabs_2_passive_pane_t1_ParamLimits

0x8a2e,	// (0x0001010c) bg_active_tab_pane_cp4_ParamLimits

0x3a1e,	// (0x0000b0fc) tabs_2_long_active_pane_t1_ParamLimits

0xa844,	// (0x00011f22) bg_passive_tab_pane_cp4_ParamLimits

0x7811,	// (0x0000eeef) list_single_midp_graphic_pane_t1_ParamLimits

0x8a2e,	// (0x0001010c) bg_active_tab_pane_cp5_ParamLimits

0x3a35,	// (0x0000b113) tabs_3_long_active_pane_t1_ParamLimits

0xa844,	// (0x00011f22) bg_passive_tab_pane_cp5_ParamLimits

0x7811,	// (0x0000eeef) list_single_midp_graphic_pane_t1

0x456c,	// (0x0000bc4a) bg_status_flat_pane_ParamLimits

0xae4f,	// (0x0001252d) indicator_pane_cp2_ParamLimits

0xae4f,	// (0x0001252d) indicator_pane_cp2

0x46d2,	// (0x0000bdb0) navi_pane_srt_ParamLimits

0x46d2,	// (0x0000bdb0) navi_pane_srt

0xaf97,	// (0x00012675) popup_clock_digital_analogue_window_cp1

0x8b22,	// (0x00010200) indicator_pane_t1

0xa4d1,	// (0x00011baf) copy_highlight_pane

0xa4d1,	// (0x00011baf) cursor_graphics_pane

0xa4d1,	// (0x00011baf) graphic_within_text_pane

0xa4d1,	// (0x00011baf) link_highlight_pane

0xd337,	// (0x00014a15) popup_preview_text_window_t5_ParamLimits

0xd337,	// (0x00014a15) popup_preview_text_window_t5

0xa5f1,	// (0x00011ccf) cursor_digital_pane

0xa5f1,	// (0x00011ccf) cursor_primary_pane

0xa602,	// (0x00011ce0) cursor_primary_small_pane

0xa60a,	// (0x00011ce8) cursor_secondary_pane

0xa612,	// (0x00011cf0) cursor_title_pane

0xa5f1,	// (0x00011ccf) link_highlight_digital_pane

0xa5f9,	// (0x00011cd7) link_highlight_primary_pane

0xa602,	// (0x00011ce0) link_highlight_primary_small_pane

0xa60a,	// (0x00011ce8) link_highlight_secondary_pane

0xa612,	// (0x00011cf0) link_highlight_title_pane

0xa5f1,	// (0x00011ccf) copy_highlight_digital_pane

0xa5f1,	// (0x00011ccf) copy_highlight_primary_pane

0xa602,	// (0x00011ce0) copy_highlight_primary_small_pane

0xa60a,	// (0x00011ce8) copy_highlight_secondary_pane

0xa612,	// (0x00011cf0) copy_highlight_title_pane

0xa60a,	// (0x00011ce8) graphic_text_digital_pane

0xba83,	// (0x00013161) graphic_text_primary_pane

0xba8c,	// (0x0001316a) graphic_text_primary_small_pane

0xa602,	// (0x00011ce0) graphic_text_secondary_pane

0xa5f1,	// (0x00011ccf) graphic_text_title_pane

0x3d76,	// (0x0000b454) cursor_primary_pane_g1

0xba75,	// (0x00013153) cursor_text_primary_t1

0x49bd,	// (0x0000c09b) cursor_primary_small_pane_g1

0xba67,	// (0x00013145) cursor_text_primary_small_t1

0x49b3,	// (0x0000c091) cursor_primary_small_pane_g1_copy1

0xba51,	// (0x0001312f) cursor_text_primary_small_t1_copy1

0xba33,	// (0x00013111) cursor_text_title_t1

0x49a9,	// (0x0000c087) cursor_title_pane_g1

0x3d76,	// (0x0000b454) cursor_digital_pane_g1

0xa622,	// (0x00011d00) cursor_text_digital_t1

0xa630,	// (0x00011d0e) link_highlight_primary_pane_g1

0xb9dc,	// (0x000130ba) link_highlight_primary_pane_t1

0xa630,	// (0x00011d0e) link_highlight_primary_small_pane_g1

0xa638,	// (0x00011d16) link_highlight_primary_small_pane_t1

0xa647,	// (0x00011d25) link_highlight_secondary_pane_g1

0xa64f,	// (0x00011d2d) link_highlight_secondary_pane_t1

0xb941,	// (0x0001301f) link_highlight_title_pane_g1

0xb958,	// (0x00013036) link_highlight_title_pane_t1

0xb941,	// (0x0001301f) link_highlight_digital_pane_g1

0xb949,	// (0x00013027) link_highlight_digital_pane_t1

0xb801,	// (0x00012edf) copy_highlight_primary_pane_g1

0xb827,	// (0x00012f05) copy_highlight_primary_pane_t1

0xb801,	// (0x00012edf) copy_highlight_primary_small_pane_g1

0xb818,	// (0x00012ef6) copy_highlight_primary_small_pane_t1

0xa65e,	// (0x00011d3c) copy_highlight_secondary_pane_g1

0xa666,	// (0x00011d44) copy_highlight_secondary_pane_t1

0xb801,	// (0x00012edf) copy_highlight_title_pane_g1

0xb809,	// (0x00012ee7) copy_highlight_title_pane_t1

0xb801,	// (0x00012edf) copy_highlight_digital_pane_g1

0xd843,	// (0x00014f21) copy_highlight_digital_pane_t1

0xd797,	// (0x00014e75) graphic_text_primary_pane_g1

0xd827,	// (0x00014f05) graphic_text_primary_pane_t1

0xd835,	// (0x00014f13) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x000170a2) graphic_text_primary_pane_t

0xd803,	// (0x00014ee1) graphic_text_primary_small_pane_g1

0xd80b,	// (0x00014ee9) graphic_text_primary_small_pane_t1

0xd819,	// (0x00014ef7) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x0001709d) graphic_text_primary_small_pane_t

0xd7df,	// (0x00014ebd) graphic_text_secondary_pane_g1

0xd7e7,	// (0x00014ec5) graphic_text_secondary_pane_t1

0xd7f5,	// (0x00014ed3) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x00017098) graphic_text_secondary_pane_t

0xd7bb,	// (0x00014e99) graphic_text_title_pane_g1

0xd7c3,	// (0x00014ea1) graphic_text_title_pane_t1

0xd7d1,	// (0x00014eaf) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x00017093) graphic_text_title_pane_t

0xd797,	// (0x00014e75) graphic_text_digital_pane_g1

0xd79f,	// (0x00014e7d) graphic_text_digital_pane_t1

0xd7ad,	// (0x00014e8b) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0001708e) graphic_text_digital_pane_t

0x8a2e,	// (0x0001010c) navi_icon_pane_srt_ParamLimits

0x8a2e,	// (0x0001010c) navi_icon_pane_srt

0x894e,	// (0x0001002c) navi_midp_pane_srt

0x894e,	// (0x0001002c) navi_navi_pane_srt

0x8a2e,	// (0x0001010c) navi_text_pane_srt_ParamLimits

0x8a2e,	// (0x0001010c) navi_text_pane_srt

0xd762,	// (0x00014e40) navi_navi_icon_text_pane_srt

0xd76a,	// (0x00014e48) navi_navi_pane_srt_g1_ParamLimits

0xd76a,	// (0x00014e48) navi_navi_pane_srt_g1

0xd77c,	// (0x00014e5a) navi_navi_pane_srt_g2_ParamLimits

0xd77c,	// (0x00014e5a) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x00017089) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x00017089) navi_navi_pane_srt_g

0xd78e,	// (0x00014e6c) navi_navi_tabs_pane_srt

0xd762,	// (0x00014e40) navi_navi_text_pane_srt

0xd762,	// (0x00014e40) navi_navi_volume_pane_srt

0xd753,	// (0x00014e31) navi_navi_text_pane_srt_t1

0x7b75,	// (0x0000f253) navi_navi_volume_pane_srt_g1

0x7b7d,	// (0x0000f25b) volume_small_pane_srt_ParamLimits

0x7b7d,	// (0x0000f25b) volume_small_pane_srt

0x752f,	// (0x0000ec0d) volume_small_pane_srt_g1_ParamLimits

0x752f,	// (0x0000ec0d) volume_small_pane_srt_g1

0x753f,	// (0x0000ec1d) volume_small_pane_srt_g2_ParamLimits

0x753f,	// (0x0000ec1d) volume_small_pane_srt_g2

0x7550,	// (0x0000ec2e) volume_small_pane_srt_g3_ParamLimits

0x7550,	// (0x0000ec2e) volume_small_pane_srt_g3

0x7561,	// (0x0000ec3f) volume_small_pane_srt_g4_ParamLimits

0x7561,	// (0x0000ec3f) volume_small_pane_srt_g4

0x7572,	// (0x0000ec50) volume_small_pane_srt_g5_ParamLimits

0x7572,	// (0x0000ec50) volume_small_pane_srt_g5

0x7583,	// (0x0000ec61) volume_small_pane_srt_g6_ParamLimits

0x7583,	// (0x0000ec61) volume_small_pane_srt_g6

0x7594,	// (0x0000ec72) volume_small_pane_srt_g7_ParamLimits

0x7594,	// (0x0000ec72) volume_small_pane_srt_g7

0x75a5,	// (0x0000ec83) volume_small_pane_srt_g8_ParamLimits

0x75a5,	// (0x0000ec83) volume_small_pane_srt_g8

0x75b6,	// (0x0000ec94) volume_small_pane_srt_g9_ParamLimits

0x75b6,	// (0x0000ec94) volume_small_pane_srt_g9

0x75c7,	// (0x0000eca5) volume_small_pane_srt_g10_ParamLimits

0x75c7,	// (0x0000eca5) volume_small_pane_srt_g10

0x0009,

0xf766,	// (0x00016e44) volume_small_pane_srt_g_ParamLimits

0xf766,	// (0x00016e44) volume_small_pane_srt_g

0x8e26,	// (0x00010504) query_popup_data_pane_cp2

0xd739,	// (0x00014e17) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd739,	// (0x00014e17) navi_navi_icon_text_pane_srt_t1

0xba83,	// (0x00013161) navi_tabs_2_long_pane_srt

0xba83,	// (0x00013161) navi_tabs_2_pane_srt

0xba83,	// (0x00013161) navi_tabs_3_long_pane_srt

0xba83,	// (0x00013161) navi_tabs_3_pane_srt

0xba83,	// (0x00013161) navi_tabs_4_pane_srt

0x7b55,	// (0x0000f233) tabs_2_active_pane_srt_ParamLimits

0x7b55,	// (0x0000f233) tabs_2_active_pane_srt

0x7b65,	// (0x0000f243) tabs_2_passive_pane_srt_ParamLimits

0x7b65,	// (0x0000f243) tabs_2_passive_pane_srt

0xb2bb,	// (0x00012999) bg_passive_tab_pane_cp1_srt_ParamLimits

0xb2bb,	// (0x00012999) bg_passive_tab_pane_cp1_srt

0xd075,	// (0x00014753) bg_passive_tab_pane_g1_cp1_srt

0xa19c,	// (0x0001187a) bg_passive_tab_pane_g2_cp1_srt

0xd07e,	// (0x0001475c) bg_passive_tab_pane_g3_cp1_srt

0x8cc7,	// (0x000103a5) bg_active_tab_pane_cp1_srt_ParamLimits

0x8cc7,	// (0x000103a5) bg_active_tab_pane_cp1_srt

0xd06d,	// (0x0001474b) tabs_2_active_pane_srt_g1

0x3a08,	// (0x0000b0e6) tabs_2_active_pane_srt_t1_ParamLimits

0x3a08,	// (0x0000b0e6) tabs_2_active_pane_srt_t1

0xd075,	// (0x00014753) bg_active_tab_pane_g1_cp1_srt

0xa19c,	// (0x0001187a) bg_active_tab_pane_g2_cp1_srt

0xd07e,	// (0x0001475c) bg_active_tab_pane_g3_cp1_srt

0x7b22,	// (0x0000f200) tabs_3_active_pane_srt_ParamLimits

0x7b22,	// (0x0000f200) tabs_3_active_pane_srt

0x7b33,	// (0x0000f211) tabs_3_passive_pane_cp_srt_ParamLimits

0x7b33,	// (0x0000f211) tabs_3_passive_pane_cp_srt

0x7b44,	// (0x0000f222) tabs_3_passive_pane_srt_ParamLimits

0x7b44,	// (0x0000f222) tabs_3_passive_pane_srt

0xb2bb,	// (0x00012999) bg_passive_tab_pane_cp2_srt_ParamLimits

0xb2bb,	// (0x00012999) bg_passive_tab_pane_cp2_srt

0xa675,	// (0x00011d53) bg_passive_tab_pane_g1_cp2_srt

0xa19c,	// (0x0001187a) bg_passive_tab_pane_g2_cp2_srt

0xa67e,	// (0x00011d5c) bg_passive_tab_pane_g3_cp2_srt

0x8cc7,	// (0x000103a5) bg_active_tab_pane_cp2_srt_ParamLimits

0x8cc7,	// (0x000103a5) bg_active_tab_pane_cp2_srt

0xd729,	// (0x00014e07) tabs_3_active_pane_srt_g1

0x325b,	// (0x0000a939) tabs_3_active_pane_srt_t1_ParamLimits

0x325b,	// (0x0000a939) tabs_3_active_pane_srt_t1

0xa675,	// (0x00011d53) bg_active_tab_pane_g1_cp2_srt

0xa19c,	// (0x0001187a) bg_active_tab_pane_g2_cp2_srt

0xa67e,	// (0x00011d5c) bg_active_tab_pane_g3_cp2_srt

0x7ada,	// (0x0000f1b8) tabs_4_active_pane_srt_ParamLimits

0x7ada,	// (0x0000f1b8) tabs_4_active_pane_srt

0x7aec,	// (0x0000f1ca) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7aec,	// (0x0000f1ca) tabs_4_passive_pane_cp2_srt

0xa7c9,	// (0x00011ea7) aid_size_cell_toolbar

0x3f00,	// (0x0000b5de) main_idle_act_pane_ParamLimits

0xa9af,	// (0x0001208d) popup_large_graphic_colour_window_ParamLimits

0x445e,	// (0x0000bb3c) popup_toolbar_window_ParamLimits

0x445e,	// (0x0000bb3c) popup_toolbar_window

0xd687,	// (0x00014d65) list_single_graphic_2heading_pane_ParamLimits

0xd687,	// (0x00014d65) list_single_graphic_2heading_pane

0x9c56,	// (0x00011334) aid_size_cell_apps_grid_lsc_pane

0x9c68,	// (0x00011346) aid_size_cell_apps_grid_prt_pane

0xa844,	// (0x00011f22) bg_wml_button_pane_cp1_ParamLimits

0xa844,	// (0x00011f22) bg_wml_button_pane_cp1

0x494a,	// (0x0000c028) form_midp_field_text_pane_t1_ParamLimits

0xb2bb,	// (0x00012999) input_focus_pane_cp050_ParamLimits

0xb4bf,	// (0x00012b9d) list_midp_form_text_pane_ParamLimits

0xb479,	// (0x00012b57) input_focus_pane_cp051_ParamLimits

0xb48d,	// (0x00012b6b) list_midp_choice_pane_ParamLimits

0x48e8,	// (0x0000bfc6) list_single_2graphic_pane_cp3_ParamLimits

0x48e8,	// (0x0000bfc6) list_single_2graphic_pane_cp3

0x48fb,	// (0x0000bfd9) list_single_midp_graphic_pane_ParamLimits

0x48fb,	// (0x0000bfd9) list_single_midp_graphic_pane

0x7723,	// (0x0000ee01) list_single_graphic_2heading_pane_g1_ParamLimits

0x7723,	// (0x0000ee01) list_single_graphic_2heading_pane_g1

0x772f,	// (0x0000ee0d) list_single_graphic_2heading_pane_g4_ParamLimits

0x772f,	// (0x0000ee0d) list_single_graphic_2heading_pane_g4

0x773b,	// (0x0000ee19) list_single_graphic_2heading_pane_g5_ParamLimits

0x773b,	// (0x0000ee19) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b9,	// (0x00016e97) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b9,	// (0x00016e97) list_single_graphic_2heading_pane_g

0x7747,	// (0x0000ee25) list_single_graphic_2heading_pane_t1_ParamLimits

0x7747,	// (0x0000ee25) list_single_graphic_2heading_pane_t1

0x775b,	// (0x0000ee39) list_single_graphic_2heading_pane_t2_ParamLimits

0x775b,	// (0x0000ee39) list_single_graphic_2heading_pane_t2

0x7775,	// (0x0000ee53) list_single_graphic_2heading_pane_t3_ParamLimits

0x7775,	// (0x0000ee53) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c0,	// (0x00016e9e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c0,	// (0x00016e9e) list_single_graphic_2heading_pane_t

0xb0e3,	// (0x000127c1) bg_popup_sub_pane_cp2

0xb109,	// (0x000127e7) grid_toobar_pane

0x778d,	// (0x0000ee6b) cell_toolbar_pane_ParamLimits

0x778d,	// (0x0000ee6b) cell_toolbar_pane

0xb13f,	// (0x0001281d) cell_toolbar_pane_g1_ParamLimits

0xb13f,	// (0x0001281d) cell_toolbar_pane_g1

0xb151,	// (0x0001282f) cell_toolbar_pane_g2_ParamLimits

0xb151,	// (0x0001282f) cell_toolbar_pane_g2

0x0001,

0xf7c7,	// (0x00016ea5) cell_toolbar_pane_g_ParamLimits

0xf7c7,	// (0x00016ea5) cell_toolbar_pane_g

0xb173,	// (0x00012851) grid_highlight_pane_cp2_ParamLimits

0xb173,	// (0x00012851) grid_highlight_pane_cp2

0xb18d,	// (0x0001286b) toolbar_button_pane

0xb199,	// (0x00012877) toolbar_button_pane_g1

0xb1a1,	// (0x0001287f) toolbar_button_pane_g2

0xb1a9,	// (0x00012887) toolbar_button_pane_g3

0xb1b1,	// (0x0001288f) toolbar_button_pane_g4

0xb1b9,	// (0x00012897) toolbar_button_pane_g5

0xb1c1,	// (0x0001289f) toolbar_button_pane_g6

0xb1c9,	// (0x000128a7) toolbar_button_pane_g7

0xb1d1,	// (0x000128af) toolbar_button_pane_g8

0xb1d9,	// (0x000128b7) toolbar_button_pane_g9

0x0009,

0xf7cc,	// (0x00016eaa) toolbar_button_pane_g

0x77bc,	// (0x0000ee9a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x77bc,	// (0x0000ee9a) list_single_2graphic_pane_g1_cp3

0xca6b,	// (0x00014149) list_single_2graphic_pane_g2_cp3_ParamLimits

0xca6b,	// (0x00014149) list_single_2graphic_pane_g2_cp3

0x77d7,	// (0x0000eeb5) list_single_2graphic_pane_g3_cp3

0x77df,	// (0x0000eebd) list_single_2graphic_pane_g4_cp3_ParamLimits

0x77df,	// (0x0000eebd) list_single_2graphic_pane_g4_cp3

0x77eb,	// (0x0000eec9) list_single_2graphic_pane_t1_cp3_ParamLimits

0x77eb,	// (0x0000eec9) list_single_2graphic_pane_t1_cp3

0x7805,	// (0x0000eee3) list_single_midp_graphic_pane_g2_ParamLimits

0x7805,	// (0x0000eee3) list_single_midp_graphic_pane_g2

0xa7d1,	// (0x00011eaf) aid_zoom_text_primary

0xa7d9,	// (0x00011eb7) aid_zoom_text_secondary

0xa730,	// (0x00011e0e) status_small_pane_g7_ParamLimits

0xa730,	// (0x00011e0e) status_small_pane_g7

0xa753,	// (0x00011e31) status_small_pane_t1_ParamLimits

0x31a3,	// (0x0000a881) title_pane_g2

0x0003,

0xf56a,	// (0x00016c48) title_pane_g

0x3485,	// (0x0000ab63) aid_size_cell_colour_1_pane_ParamLimits

0x3485,	// (0x0000ab63) aid_size_cell_colour_1_pane

0x3499,	// (0x0000ab77) aid_size_cell_colour_2_pane_ParamLimits

0x3499,	// (0x0000ab77) aid_size_cell_colour_2_pane

0x34ad,	// (0x0000ab8b) aid_size_cell_colour_3_pane_ParamLimits

0x34ad,	// (0x0000ab8b) aid_size_cell_colour_3_pane

0x34c1,	// (0x0000ab9f) aid_size_cell_colour_4_pane_ParamLimits

0x34c1,	// (0x0000ab9f) aid_size_cell_colour_4_pane

0x71ea,	// (0x0000e8c8) title_pane_stacon_g1_ParamLimits

0x71ea,	// (0x0000e8c8) title_pane_stacon_g1

0xb87e,	// (0x00012f5c) popup_note_wait_window_g3_ParamLimits

0xb87e,	// (0x00012f5c) popup_note_wait_window_g3

0xb8f4,	// (0x00012fd2) popup_note_wait_window_t5_ParamLimits

0xb8f4,	// (0x00012fd2) popup_note_wait_window_t5

0x894e,	// (0x0001002c) main_feb_china_hwr_fs_writing_pane

0x3f61,	// (0x0000b63f) popup_feb_china_hwr_fs_window_ParamLimits

0x3f61,	// (0x0000b63f) popup_feb_china_hwr_fs_window

0xca7c,	// (0x0001415a) aid_size_cell_hwr_fs_ParamLimits

0xca7c,	// (0x0001415a) aid_size_cell_hwr_fs

0xb2bb,	// (0x00012999) bg_popup_sub_pane_cp3_ParamLimits

0xb2bb,	// (0x00012999) bg_popup_sub_pane_cp3

0xca91,	// (0x0001416f) grid_hwr_fs_pane_ParamLimits

0xca91,	// (0x0001416f) grid_hwr_fs_pane

0x7850,	// (0x0000ef2e) linegrid_hwr_fs_pane_ParamLimits

0x7850,	// (0x0000ef2e) linegrid_hwr_fs_pane

0xcaa9,	// (0x00014187) cell_hwr_fs_pane_ParamLimits

0xcaa9,	// (0x00014187) cell_hwr_fs_pane

0xb2c7,	// (0x000129a5) linegrid_hwr_fs_pane_g1_ParamLimits

0xb2c7,	// (0x000129a5) linegrid_hwr_fs_pane_g1

0x48ae,	// (0x0000bf8c) linegrid_hwr_fs_pane_g2_ParamLimits

0x48ae,	// (0x0000bf8c) linegrid_hwr_fs_pane_g2

0xb2e5,	// (0x000129c3) linegrid_hwr_fs_pane_g3_ParamLimits

0xb2e5,	// (0x000129c3) linegrid_hwr_fs_pane_g3

0x787e,	// (0x0000ef5c) linegrid_hwr_fs_pane_g4_ParamLimits

0x787e,	// (0x0000ef5c) linegrid_hwr_fs_pane_g4

0x7898,	// (0x0000ef76) linegrid_hwr_fs_pane_g5_ParamLimits

0x7898,	// (0x0000ef76) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f2,	// (0x00016ed0) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f2,	// (0x00016ed0) linegrid_hwr_fs_pane_g

0xb2f1,	// (0x000129cf) cell_hwr_fs_pane_g1_ParamLimits

0xb2f1,	// (0x000129cf) cell_hwr_fs_pane_g1

0xb021,	// (0x000126ff) cell_hwr_fs_pane_g2_ParamLimits

0xb021,	// (0x000126ff) cell_hwr_fs_pane_g2

0x48c0,	// (0x0000bf9e) cell_hwr_fs_pane_g3_ParamLimits

0x48c0,	// (0x0000bf9e) cell_hwr_fs_pane_g3

0x48cd,	// (0x0000bfab) cell_hwr_fs_pane_g4_ParamLimits

0x48cd,	// (0x0000bfab) cell_hwr_fs_pane_g4

0x0003,

0xf7fd,	// (0x00016edb) cell_hwr_fs_pane_g_ParamLimits

0xf7fd,	// (0x00016edb) cell_hwr_fs_pane_g

0xcac9,	// (0x000141a7) cell_hwr_fs_pane_t1

0x894e,	// (0x0001002c) grid_highlight_pane_cp6

0x894e,	// (0x0001002c) main_idle_act2_pane

0x99f2,	// (0x000110d0) aid_inside_area_popup_secondary

0x4aca,	// (0x0000c1a8) aid_inside_area_window_primary_ParamLimits

0x4aca,	// (0x0000c1a8) aid_inside_area_window_primary

0xd852,	// (0x00014f30) ai2_news_ticker_pane

0xd85a,	// (0x00014f38) aid_size_cell_ai1_link_ParamLimits

0xd85a,	// (0x00014f38) aid_size_cell_ai1_link

0x4f15,	// (0x0000c5f3) popup_ai2_data_window_ParamLimits

0x4f15,	// (0x0000c5f3) popup_ai2_data_window

0xd874,	// (0x00014f52) popup_ai2_link_window_ParamLimits

0xd874,	// (0x00014f52) popup_ai2_link_window

0xb2bb,	// (0x00012999) bg_popup_sub_pane_cp4_ParamLimits

0xb2bb,	// (0x00012999) bg_popup_sub_pane_cp4

0xd888,	// (0x00014f66) grid_ai2_link_pane_ParamLimits

0xd888,	// (0x00014f66) grid_ai2_link_pane

0xd89f,	// (0x00014f7d) popup_ai2_link_window_g1_ParamLimits

0xd89f,	// (0x00014f7d) popup_ai2_link_window_g1

0xd8ab,	// (0x00014f89) popup_ai2_link_window_g2_ParamLimits

0xd8ab,	// (0x00014f89) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x000170a7) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x000170a7) popup_ai2_link_window_g

0xd8ba,	// (0x00014f98) ai2_mp_button_pane

0xd8c2,	// (0x00014fa0) ai2_mp_volume_pane

0xb479,	// (0x00012b57) bg_popup_sub_pane_cp5_ParamLimits

0xb479,	// (0x00012b57) bg_popup_sub_pane_cp5

0xd8ca,	// (0x00014fa8) heading_ai2_gene_pane_ParamLimits

0xd8ca,	// (0x00014fa8) heading_ai2_gene_pane

0xd8d6,	// (0x00014fb4) list_ai2_gene_pane_ParamLimits

0xd8d6,	// (0x00014fb4) list_ai2_gene_pane

0xd91e,	// (0x00014ffc) cell_ai2_link_pane_ParamLimits

0xd91e,	// (0x00014ffc) cell_ai2_link_pane

0xd934,	// (0x00015012) cell_ai2_link_pane_g1

0x894e,	// (0x0001002c) grid_highlight_pane_cp7

0x7b92,	// (0x0000f270) ai2_mp_volume_pane_g1

0xd9c9,	// (0x000150a7) ai2_mp_volume_pane_g2

0x4f3f,	// (0x0000c61d) list_ai2_gene_pane_t1

0xd9d1,	// (0x000150af) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x000170c0) ai2_mp_volume_pane_g

0x7b9a,	// (0x0000f278) volume_small_pane_cp3

0xd9d9,	// (0x000150b7) aid_size_cell_ai2_button

0xd9e1,	// (0x000150bf) grid_ai2_button_pane

0xd9ea,	// (0x000150c8) cell_ai2_button_pane_ParamLimits

0xd9ea,	// (0x000150c8) cell_ai2_button_pane

0x8867,	// (0x0000ff45) cell_ai2_button_pane_g1

0x894e,	// (0x0001002c) grid_highlight_pane_cp8

0xd989,	// (0x00015067) ai2_gene_pane_t1_ParamLimits

0xd989,	// (0x00015067) ai2_gene_pane_t1

0x3ecf,	// (0x0000b5ad) aid_height_parent_landscape

0x4c94,	// (0x0000c372) aid_height_set_list

0xd62c,	// (0x00014d0a) aid_size_parent

0xd713,	// (0x00014df1) aid_size_cell_graphic_pane_ParamLimits

0xd8e6,	// (0x00014fc4) popup_ai2_data_window_g1_ParamLimits

0xd8e6,	// (0x00014fc4) popup_ai2_data_window_g1

0xd8f2,	// (0x00014fd0) ai2_news_ticker_pane_g1

0xd8fa,	// (0x00014fd8) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x000170ac) ai2_news_ticker_pane_g

0xd902,	// (0x00014fe0) ai2_news_ticker_pane_t1

0xd910,	// (0x00014fee) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x000170b1) ai2_news_ticker_pane_t

0xd6f4,	// (0x00014dd2) heading_ai2_gene_pane_g1

0xd93d,	// (0x0001501b) heading_ai2_gene_pane_t1_ParamLimits

0xd93d,	// (0x0001501b) heading_ai2_gene_pane_t1

0xd952,	// (0x00015030) list_highlight_pane_cp6

0x4f29,	// (0x0000c607) ai2_gene_pane_ParamLimits

0x4f29,	// (0x0000c607) ai2_gene_pane

0x4f4d,	// (0x0000c62b) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x000170b6) list_ai2_gene_pane_t

0xd95a,	// (0x00015038) list_highlight_pane_cp8_ParamLimits

0xd95a,	// (0x00015038) list_highlight_pane_cp8

0xd96b,	// (0x00015049) ai2_gene_pane_g1_ParamLimits

0xd96b,	// (0x00015049) ai2_gene_pane_g1

0xd97d,	// (0x0001505b) ai2_gene_pane_g2_ParamLimits

0xd97d,	// (0x0001505b) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x000170bb) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x000170bb) ai2_gene_pane_g

0x91be,	// (0x0001089c) scroll_pane_cp12

0xca2a,	// (0x00014108) control_pane_t3_ParamLimits

0xca2a,	// (0x00014108) control_pane_t3

0xa744,	// (0x00011e22) status_small_pane_g8_ParamLimits

0xa744,	// (0x00011e22) status_small_pane_g8

0x3fd5,	// (0x0000b6b3) popup_find_window_ParamLimits

0x41c8,	// (0x0000b8a6) popup_note_image_window_ParamLimits

0x93d0,	// (0x00010aae) list_double2_graphic_pane_vc_g1_ParamLimits

0x93d0,	// (0x00010aae) list_double2_graphic_pane_vc_g1

0x93dc,	// (0x00010aba) list_double2_graphic_pane_vc_g2_ParamLimits

0x93dc,	// (0x00010aba) list_double2_graphic_pane_vc_g2

0x9307,	// (0x000109e5) list_double2_graphic_pane_vc_g3_ParamLimits

0x9307,	// (0x000109e5) list_double2_graphic_pane_vc_g3

0x0002,

0xf5dd,	// (0x00016cbb) list_double2_graphic_pane_vc_g_ParamLimits

0xf5dd,	// (0x00016cbb) list_double2_graphic_pane_vc_g

0x93e8,	// (0x00010ac6) list_double2_graphic_pane_vc_t1_ParamLimits

0x93e8,	// (0x00010ac6) list_double2_graphic_pane_vc_t1

0x93dc,	// (0x00010aba) list_single_heading_pane_vc_g1_ParamLimits

0x93dc,	// (0x00010aba) list_single_heading_pane_vc_g1

0x9307,	// (0x000109e5) list_single_heading_pane_vc_g2_ParamLimits

0x9307,	// (0x000109e5) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00016cc2) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00016cc2) list_single_heading_pane_vc_g

0xb1ed,	// (0x000128cb) list_single_heading_pane_vc_t1_ParamLimits

0xb1ed,	// (0x000128cb) list_single_heading_pane_vc_t1

0xb203,	// (0x000128e1) list_single_heading_pane_vc_t2_ParamLimits

0xb203,	// (0x000128e1) list_single_heading_pane_vc_t2

0x0001,

0xf7e1,	// (0x00016ebf) list_single_heading_pane_vc_t_ParamLimits

0xf7e1,	// (0x00016ebf) list_single_heading_pane_vc_t

0xb215,	// (0x000128f3) list_setting_number_pane_vc_g1_ParamLimits

0xb215,	// (0x000128f3) list_setting_number_pane_vc_g1

0xb221,	// (0x000128ff) list_setting_number_pane_vc_g2_ParamLimits

0xb221,	// (0x000128ff) list_setting_number_pane_vc_g2

0x0001,

0xf7e6,	// (0x00016ec4) list_setting_number_pane_vc_g_ParamLimits

0xf7e6,	// (0x00016ec4) list_setting_number_pane_vc_g

0xb22d,	// (0x0001290b) list_setting_number_pane_vc_t1_ParamLimits

0xb22d,	// (0x0001290b) list_setting_number_pane_vc_t1

0xb241,	// (0x0001291f) list_setting_number_pane_vc_t2_ParamLimits

0xb241,	// (0x0001291f) list_setting_number_pane_vc_t2

0xb25d,	// (0x0001293b) list_setting_number_pane_vc_t3_ParamLimits

0xb25d,	// (0x0001293b) list_setting_number_pane_vc_t3

0x0002,

0xf7eb,	// (0x00016ec9) list_setting_number_pane_vc_t_ParamLimits

0xf7eb,	// (0x00016ec9) list_setting_number_pane_vc_t

0xb283,	// (0x00012961) set_value_pane_vc_ParamLimits

0xb283,	// (0x00012961) set_value_pane_vc

0xd687,	// (0x00014d65) list_double2_graphic_pane_vc_ParamLimits

0xd687,	// (0x00014d65) list_double2_graphic_pane_vc

0xd69a,	// (0x00014d78) list_double2_large_graphic_pane_vc_ParamLimits

0xd69a,	// (0x00014d78) list_double2_large_graphic_pane_vc

0xd687,	// (0x00014d65) list_double2_pane_vc_ParamLimits

0xd687,	// (0x00014d65) list_double2_pane_vc

0xd687,	// (0x00014d65) list_double_graphic_heading_pane_vc_ParamLimits

0xd687,	// (0x00014d65) list_double_graphic_heading_pane_vc

0xd687,	// (0x00014d65) list_double_graphic_pane_vc_ParamLimits

0xd687,	// (0x00014d65) list_double_graphic_pane_vc

0xd687,	// (0x00014d65) list_double_heading_pane_vc_ParamLimits

0xd687,	// (0x00014d65) list_double_heading_pane_vc

0xd69a,	// (0x00014d78) list_double_large_graphic_pane_vc_ParamLimits

0xd69a,	// (0x00014d78) list_double_large_graphic_pane_vc

0xd687,	// (0x00014d65) list_double_number_pane_vc_ParamLimits

0xd687,	// (0x00014d65) list_double_number_pane_vc

0xd687,	// (0x00014d65) list_double_pane_vc_ParamLimits

0xd687,	// (0x00014d65) list_double_pane_vc

0xd687,	// (0x00014d65) list_double_time_pane_vc_ParamLimits

0xd687,	// (0x00014d65) list_double_time_pane_vc

0xd687,	// (0x00014d65) list_setting_number_pane_vc_ParamLimits

0xd687,	// (0x00014d65) list_setting_number_pane_vc

0xd687,	// (0x00014d65) list_setting_pane_vc_ParamLimits

0xd687,	// (0x00014d65) list_setting_pane_vc

0xd687,	// (0x00014d65) list_single_graphic_heading_pane_vc_ParamLimits

0xd687,	// (0x00014d65) list_single_graphic_heading_pane_vc

0xd687,	// (0x00014d65) list_single_heading_pane_vc_ParamLimits

0xd687,	// (0x00014d65) list_single_heading_pane_vc

0xd687,	// (0x00014d65) list_single_number_heading_pane_vc_ParamLimits

0xd687,	// (0x00014d65) list_single_number_heading_pane_vc

0x93d0,	// (0x00010aae) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x93d0,	// (0x00010aae) list_double_graphic_heading_pane_vc_g1

0x93dc,	// (0x00010aba) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x93dc,	// (0x00010aba) list_double_graphic_heading_pane_vc_g2

0x9307,	// (0x000109e5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9307,	// (0x000109e5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf5dd,	// (0x00016cbb) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf5dd,	// (0x00016cbb) list_double_graphic_heading_pane_vc_g

0xd9fc,	// (0x000150da) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd9fc,	// (0x000150da) list_double_graphic_heading_pane_vc_t1

0xb1ed,	// (0x000128cb) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb1ed,	// (0x000128cb) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x000170c7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x000170c7) list_double_graphic_heading_pane_vc_t

0xb215,	// (0x000128f3) list_setting_pane_vc_g1_ParamLimits

0xb215,	// (0x000128f3) list_setting_pane_vc_g1

0xb221,	// (0x000128ff) list_setting_pane_vc_g2_ParamLimits

0xb221,	// (0x000128ff) list_setting_pane_vc_g2

0x0001,

0xf7e6,	// (0x00016ec4) list_setting_pane_vc_g_ParamLimits

0xf7e6,	// (0x00016ec4) list_setting_pane_vc_g

0xdc6d,	// (0x0001534b) list_setting_pane_vc_t1_ParamLimits

0xdc6d,	// (0x0001534b) list_setting_pane_vc_t1

0xdc81,	// (0x0001535f) list_setting_pane_vc_t2_ParamLimits

0xdc81,	// (0x0001535f) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x0001710a) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x0001710a) list_setting_pane_vc_t

0xb283,	// (0x00012961) set_value_pane_cp_vc_ParamLimits

0xb283,	// (0x00012961) set_value_pane_cp_vc

0x93dc,	// (0x00010aba) list_single_number_heading_pane_vc_g1_ParamLimits

0x93dc,	// (0x00010aba) list_single_number_heading_pane_vc_g1

0x9307,	// (0x000109e5) list_single_number_heading_pane_vc_g2_ParamLimits

0x9307,	// (0x000109e5) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00016cc2) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00016cc2) list_single_number_heading_pane_vc_g

0xb1ed,	// (0x000128cb) list_single_number_heading_pane_vc_t1_ParamLimits

0xb1ed,	// (0x000128cb) list_single_number_heading_pane_vc_t1

0xdca3,	// (0x00015381) list_single_number_heading_pane_vc_t2_ParamLimits

0xdca3,	// (0x00015381) list_single_number_heading_pane_vc_t2

0xdb6d,	// (0x0001524b) list_single_number_heading_pane_vc_t3_ParamLimits

0xdb6d,	// (0x0001524b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x0001710f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0001710f) list_single_number_heading_pane_vc_t

0x93d0,	// (0x00010aae) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x93d0,	// (0x00010aae) list_single_graphic_heading_pane_vc_g1

0x93dc,	// (0x00010aba) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x93dc,	// (0x00010aba) list_single_graphic_heading_pane_vc_g4

0x9307,	// (0x000109e5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9307,	// (0x000109e5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5dd,	// (0x00016cbb) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5dd,	// (0x00016cbb) list_single_graphic_heading_pane_vc_g

0xb1ed,	// (0x000128cb) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb1ed,	// (0x000128cb) list_single_graphic_heading_pane_vc_t1

0xdcb5,	// (0x00015393) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xdcb5,	// (0x00015393) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x00017116) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00017116) list_single_graphic_heading_pane_vc_t

0x93dc,	// (0x00010aba) list_double2_pane_vc_g1_ParamLimits

0x93dc,	// (0x00010aba) list_double2_pane_vc_g1

0x9307,	// (0x000109e5) list_double2_pane_vc_g2_ParamLimits

0x9307,	// (0x000109e5) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x00016cc2) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x00016cc2) list_double2_pane_vc_g

0x9313,	// (0x000109f1) list_double2_pane_vc_t1_ParamLimits

0x9313,	// (0x000109f1) list_double2_pane_vc_t1

0x9276,	// (0x00010954) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x9276,	// (0x00010954) list_double2_large_graphic_pane_vc_g1

0x9282,	// (0x00010960) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x9282,	// (0x00010960) list_double2_large_graphic_pane_vc_g2

0x928e,	// (0x0001096c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x928e,	// (0x0001096c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x00016cdf) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x00016cdf) list_double2_large_graphic_pane_vc_g

0x92a2,	// (0x00010980) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x92a2,	// (0x00010980) list_double2_large_graphic_pane_vc_t1

0xdcc7,	// (0x000153a5) list_double_time_pane_vc_g1_ParamLimits

0xdcc7,	// (0x000153a5) list_double_time_pane_vc_g1

0xdcd3,	// (0x000153b1) list_double_time_pane_vc_g2_ParamLimits

0xdcd3,	// (0x000153b1) list_double_time_pane_vc_g2

0x0001,

0xfa3d,	// (0x0001711b) list_double_time_pane_vc_g_ParamLimits

0xfa3d,	// (0x0001711b) list_double_time_pane_vc_g

0xdcdf,	// (0x000153bd) list_double_time_pane_vc_t1_ParamLimits

0xdcdf,	// (0x000153bd) list_double_time_pane_vc_t1

0xdcf8,	// (0x000153d6) list_double_time_pane_vc_t2_ParamLimits

0xdcf8,	// (0x000153d6) list_double_time_pane_vc_t2

0xdd11,	// (0x000153ef) list_double_time_pane_vc_t3_ParamLimits

0xdd11,	// (0x000153ef) list_double_time_pane_vc_t3

0xdd29,	// (0x00015407) list_double_time_pane_vc_t4_ParamLimits

0xdd29,	// (0x00015407) list_double_time_pane_vc_t4

0x0003,

0xfa42,	// (0x00017120) list_double_time_pane_vc_t_ParamLimits

0xfa42,	// (0x00017120) list_double_time_pane_vc_t

0x93dc,	// (0x00010aba) list_double_pane_vc_g1_ParamLimits

0x93dc,	// (0x00010aba) list_double_pane_vc_g1

0x9307,	// (0x000109e5) list_double_pane_vc_g2_ParamLimits

0x9307,	// (0x000109e5) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x00016cc2) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x00016cc2) list_double_pane_vc_g

0xdd3b,	// (0x00015419) list_double_pane_vc_t1_ParamLimits

0xdd3b,	// (0x00015419) list_double_pane_vc_t1

0xdd4d,	// (0x0001542b) list_double_pane_vc_t2_ParamLimits

0xdd4d,	// (0x0001542b) list_double_pane_vc_t2

0x0001,

0xfa4b,	// (0x00017129) list_double_pane_vc_t_ParamLimits

0xfa4b,	// (0x00017129) list_double_pane_vc_t

0x93dc,	// (0x00010aba) list_double_number_pane_vc_g1_ParamLimits

0x93dc,	// (0x00010aba) list_double_number_pane_vc_g1

0x9307,	// (0x000109e5) list_double_number_pane_vc_g2_ParamLimits

0x9307,	// (0x000109e5) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x00016cc2) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x00016cc2) list_double_number_pane_vc_g

0xdd63,	// (0x00015441) list_double_number_pane_vc_t1_ParamLimits

0xdd63,	// (0x00015441) list_double_number_pane_vc_t1

0xdd77,	// (0x00015455) list_double_number_pane_vc_t2_ParamLimits

0xdd77,	// (0x00015455) list_double_number_pane_vc_t2

0xdd4d,	// (0x0001542b) list_double_number_pane_vc_t3_ParamLimits

0xdd4d,	// (0x0001542b) list_double_number_pane_vc_t3

0x0002,

0xfa50,	// (0x0001712e) list_double_number_pane_vc_t_ParamLimits

0xfa50,	// (0x0001712e) list_double_number_pane_vc_t

0xdd89,	// (0x00015467) list_double_large_graphic_pane_vc_g1_ParamLimits

0xdd89,	// (0x00015467) list_double_large_graphic_pane_vc_g1

0xdd95,	// (0x00015473) list_double_large_graphic_pane_vc_g2_ParamLimits

0xdd95,	// (0x00015473) list_double_large_graphic_pane_vc_g2

0x928e,	// (0x0001096c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x928e,	// (0x0001096c) list_double_large_graphic_pane_vc_g3

0xdda4,	// (0x00015482) list_double_large_graphic_pane_vc_g4_ParamLimits

0xdda4,	// (0x00015482) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa57,	// (0x00017135) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa57,	// (0x00017135) list_double_large_graphic_pane_vc_g

0xddb0,	// (0x0001548e) list_double_large_graphic_pane_vc_t1_ParamLimits

0xddb0,	// (0x0001548e) list_double_large_graphic_pane_vc_t1

0xddc2,	// (0x000154a0) list_double_large_graphic_pane_vc_t2_ParamLimits

0xddc2,	// (0x000154a0) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa60,	// (0x0001713e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa60,	// (0x0001713e) list_double_large_graphic_pane_vc_t

0x93dc,	// (0x00010aba) list_double_heading_pane_vc_g1_ParamLimits

0x93dc,	// (0x00010aba) list_double_heading_pane_vc_g1

0x9307,	// (0x000109e5) list_double_heading_pane_vc_g2_ParamLimits

0x9307,	// (0x000109e5) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00016cc2) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00016cc2) list_double_heading_pane_vc_g

0xddd9,	// (0x000154b7) list_double_heading_pane_vc_t1_ParamLimits

0xddd9,	// (0x000154b7) list_double_heading_pane_vc_t1

0xb1ed,	// (0x000128cb) list_double_heading_pane_vc_t2_ParamLimits

0xb1ed,	// (0x000128cb) list_double_heading_pane_vc_t2

0x0001,

0xfa65,	// (0x00017143) list_double_heading_pane_vc_t_ParamLimits

0xfa65,	// (0x00017143) list_double_heading_pane_vc_t

0x93d0,	// (0x00010aae) list_double_graphic_pane_vc_g1_ParamLimits

0x93d0,	// (0x00010aae) list_double_graphic_pane_vc_g1

0xddeb,	// (0x000154c9) list_double_graphic_pane_vc_g2_ParamLimits

0xddeb,	// (0x000154c9) list_double_graphic_pane_vc_g2

0xddfa,	// (0x000154d8) list_double_graphic_pane_vc_g3_ParamLimits

0xddfa,	// (0x000154d8) list_double_graphic_pane_vc_g3

0x0002,

0xfa6a,	// (0x00017148) list_double_graphic_pane_vc_g_ParamLimits

0xfa6a,	// (0x00017148) list_double_graphic_pane_vc_g

0xde06,	// (0x000154e4) list_double_graphic_pane_vc_t1_ParamLimits

0xde06,	// (0x000154e4) list_double_graphic_pane_vc_t1

0xdd4d,	// (0x0001542b) list_double_graphic_pane_vc_t2_ParamLimits

0xdd4d,	// (0x0001542b) list_double_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0001714f) list_double_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0001714f) list_double_graphic_pane_vc_t

0x6ec7,	// (0x0000e5a5) aid_size_cell_fastswap

0xc7d5,	// (0x00013eb3) aid_size_cell_touch_ParamLimits

0xc7d5,	// (0x00013eb3) aid_size_cell_touch

0x701e,	// (0x0000e6fc) popup_fast_swap_wide_window_ParamLimits

0x701e,	// (0x0000e6fc) popup_fast_swap_wide_window

0xc886,	// (0x00013f64) touch_pane_ParamLimits

0xc886,	// (0x00013f64) touch_pane

0x9674,	// (0x00010d52) button_value_adjust_pane_cp2

0x967c,	// (0x00010d5a) button_value_adjust_pane_cp4

0x969c,	// (0x00010d7a) form_field_data_pane_cp2

0x38ca,	// (0x0000afa8) form_field_data_wide_pane_cp2

0x9d14,	// (0x000113f2) bg_scroll_pane_ParamLimits

0x730b,	// (0x0000e9e9) scroll_handle_pane_ParamLimits

0x731f,	// (0x0000e9fd) scroll_sc2_down_pane_ParamLimits

0x731f,	// (0x0000e9fd) scroll_sc2_down_pane

0x9d45,	// (0x00011423) scroll_sc2_up_pane_ParamLimits

0x9d45,	// (0x00011423) scroll_sc2_up_pane

0x5071,	// (0x0000c74f) grid_wheel_folder_pane_g1_ParamLimits

0x5071,	// (0x0000c74f) grid_wheel_folder_pane_g1

0x74d3,	// (0x0000ebb1) clock_nsta_pane_cp2_ParamLimits

0x74d3,	// (0x0000ebb1) clock_nsta_pane_cp2

0x3cd9,	// (0x0000b3b7) listscroll_midp_pane_ParamLimits

0x3ce9,	// (0x0000b3c7) midp_canvas_pane

0x771b,	// (0x0000edf9) nsta_clock_indic_pane

0xa815,	// (0x00011ef3) listscroll_form_pane_vc

0xa832,	// (0x00011f10) listscroll_set_pane_vc_ParamLimits

0xa832,	// (0x00011f10) listscroll_set_pane_vc

0x4594,	// (0x0000bc72) clock_nsta_pane

0x45b7,	// (0x0000bc95) indicator_nsta_pane

0xb0e3,	// (0x000127c1) bg_popup_sub_pane_cp2_ParamLimits

0xb0f7,	// (0x000127d5) find_pane_cp2_ParamLimits

0xb0f7,	// (0x000127d5) find_pane_cp2

0xb109,	// (0x000127e7) grid_toobar_pane_ParamLimits

0xb28f,	// (0x0001296d) list_form_gen_pane_vc_ParamLimits

0xb28f,	// (0x0001296d) list_form_gen_pane_vc

0xb2a5,	// (0x00012983) scroll_pane_cp8_vc_ParamLimits

0xb2a5,	// (0x00012983) scroll_pane_cp8_vc

0xb321,	// (0x000129ff) data_form_wide_pane_vc_ParamLimits

0xb321,	// (0x000129ff) data_form_wide_pane_vc

0xb32d,	// (0x00012a0b) form_field_data_wide_pane_vc_g1

0xb335,	// (0x00012a13) form_field_data_wide_pane_vc_t1_ParamLimits

0xb335,	// (0x00012a13) form_field_data_wide_pane_vc_t1

0x9744,	// (0x00010e22) input_focus_pane_cp6_vc_ParamLimits

0x9744,	// (0x00010e22) input_focus_pane_cp6_vc

0x4981,	// (0x0000c05f) list_midp_pane_ParamLimits

0xd087,	// (0x00014765) scroll_pane_cp16_ParamLimits

0xd087,	// (0x00014765) scroll_pane_cp16

0xb664,	// (0x00012d42) button_value_adjust_pane_ParamLimits

0xb664,	// (0x00012d42) button_value_adjust_pane

0x4ca0,	// (0x0000c37e) button_value_adjust_pane_cp6_ParamLimits

0x4ca0,	// (0x0000c37e) button_value_adjust_pane_cp6

0x4daa,	// (0x0000c488) settings_code_pane_cp_ParamLimits

0x4daa,	// (0x0000c488) settings_code_pane_cp

0x8867,	// (0x0000ff45) cell_touch_pane_g1

0x8867,	// (0x0000ff45) cell_touch_pane_g2

0x0001,

0xf710,	// (0x00016dee) cell_touch_pane_g

0x4f5b,	// (0x0000c639) cell_touch_pane_cp_ParamLimits

0x4f5b,	// (0x0000c639) cell_touch_pane_cp

0x4f77,	// (0x0000c655) cell_touch_pane_ParamLimits

0x4f77,	// (0x0000c655) cell_touch_pane

0x8867,	// (0x0000ff45) scroll_sc2_down_pane_g1

0x8867,	// (0x0000ff45) scroll_sc2_up_pane_g1

0x894e,	// (0x0001002c) bg_set_opt_pane_cp4_vc

0xda0e,	// (0x000150ec) list_set_graphic_pane_vc_g1_ParamLimits

0xda0e,	// (0x000150ec) list_set_graphic_pane_vc_g1

0xda1a,	// (0x000150f8) list_set_graphic_pane_vc_g2_ParamLimits

0xda1a,	// (0x000150f8) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x000170cc) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x000170cc) list_set_graphic_pane_vc_g

0xda26,	// (0x00015104) text_primary_small_cp13_vc_ParamLimits

0xda26,	// (0x00015104) text_primary_small_cp13_vc

0xd05a,	// (0x00014738) list_set_graphic_pane_vc_ParamLimits

0xd05a,	// (0x00014738) list_set_graphic_pane_vc

0x894e,	// (0x0001002c) input_focus_pane_cp2_vc

0x8867,	// (0x0000ff45) setting_code_pane_vc_g1

0xda3e,	// (0x0001511c) setting_code_pane_vc_t1

0xda4c,	// (0x0001512a) set_text_pane_vc_t1_ParamLimits

0xda4c,	// (0x0001512a) set_text_pane_vc_t1

0x894e,	// (0x0001002c) input_focus_pane_cp1_vc

0xda67,	// (0x00015145) list_set_text_pane_vc

0x8867,	// (0x0000ff45) setting_text_pane_vc_g1

0x894e,	// (0x0001002c) bg_set_opt_pane_cp2_vc

0xda71,	// (0x0001514f) setting_slider_graphic_pane_vc_g1

0xda79,	// (0x00015157) setting_slider_graphic_pane_vc_t1

0xda87,	// (0x00015165) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x000170d1) setting_slider_graphic_pane_vc_t

0xda95,	// (0x00015173) slider_set_pane_cp_vc

0xda9d,	// (0x0001517b) slider_set_pane_vc_g1

0xdaa6,	// (0x00015184) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x000170d6) slider_set_pane_vc_g

0x986a,	// (0x00010f48) set_opt_bg_pane_g1_copy1

0x9872,	// (0x00010f50) set_opt_bg_pane_g2_copy1

0xdad2,	// (0x000151b0) set_opt_bg_pane_g3_copy1

0x9882,	// (0x00010f60) set_opt_bg_pane_g4_copy1

0x988a,	// (0x00010f68) set_opt_bg_pane_g5_copy1

0x9892,	// (0x00010f70) set_opt_bg_pane_g6_copy1

0xdada,	// (0x000151b8) set_opt_bg_pane_g7_copy1

0xdae2,	// (0x000151c0) set_opt_bg_pane_g8_copy1

0xdaea,	// (0x000151c8) set_opt_bg_pane_g9_copy1

0x894e,	// (0x0001002c) bg_set_opt_pane_cp_vc

0xdaf2,	// (0x000151d0) setting_slider_pane_vc_t1

0xda79,	// (0x00015157) setting_slider_pane_vc_t2

0xda87,	// (0x00015165) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x000170e5) setting_slider_pane_vc_t

0xda95,	// (0x00015173) slider_set_pane_vc

0x78bc,	// (0x0000ef9a) volume_set_pane_vc_g1

0x7ba3,	// (0x0000f281) volume_set_pane_vc_g2

0x7bac,	// (0x0000f28a) volume_set_pane_vc_g3

0x7bb5,	// (0x0000f293) volume_set_pane_vc_g4

0x7bbe,	// (0x0000f29c) volume_set_pane_vc_g5

0x7bc7,	// (0x0000f2a5) volume_set_pane_vc_g6

0x7bd0,	// (0x0000f2ae) volume_set_pane_vc_g7

0x7bd9,	// (0x0000f2b7) volume_set_pane_vc_g8

0x7be2,	// (0x0000f2c0) volume_set_pane_vc_g9

0x7beb,	// (0x0000f2c9) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x000170ec) volume_set_pane_vc_g

0xdb96,	// (0x00015274) volume_set_pane_vc

0xdb9e,	// (0x0001527c) button_value_adjust_pane_cp1_vc

0xdba8,	// (0x00015286) list_highlight_pane_cp2_vc

0xdbb1,	// (0x0001528f) list_set_pane_vc_ParamLimits

0xdbb1,	// (0x0001528f) list_set_pane_vc

0xdc03,	// (0x000152e1) main_pane_set_vc_t1_ParamLimits

0xdc03,	// (0x000152e1) main_pane_set_vc_t1

0xdc18,	// (0x000152f6) main_pane_set_vc_t2_ParamLimits

0xdc18,	// (0x000152f6) main_pane_set_vc_t2

0xdc2a,	// (0x00015308) main_pane_set_vc_t3_ParamLimits

0xdc2a,	// (0x00015308) main_pane_set_vc_t3

0xdc3c,	// (0x0001531a) main_pane_set_vc_t4_ParamLimits

0xdc3c,	// (0x0001531a) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x00017101) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x00017101) main_pane_set_vc_t

0xdc4e,	// (0x0001532c) setting_code_pane_vc_ParamLimits

0xdc4e,	// (0x0001532c) setting_code_pane_vc

0xdc5d,	// (0x0001533b) setting_slider_graphic_pane_vc

0xdc5d,	// (0x0001533b) setting_slider_pane_vc

0xdc5d,	// (0x0001533b) setting_text_pane_vc

0xdc5d,	// (0x0001533b) setting_volume_pane_vc

0xdc65,	// (0x00015343) scroll_pane_cp121_vc

0x966b,	// (0x00010d49) set_content_pane_vc

0xde18,	// (0x000154f6) button_value_adjust_pane_g1

0xde21,	// (0x000154ff) button_value_adjust_pane_g2

0x0001,

0xfa76,	// (0x00017154) button_value_adjust_pane_g

0xde2a,	// (0x00015508) form_field_slider_wide_pane_vc_t1_ParamLimits

0xde2a,	// (0x00015508) form_field_slider_wide_pane_vc_t1

0xde40,	// (0x0001551e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xde40,	// (0x0001551e) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa7b,	// (0x00017159) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x00017159) form_field_slider_wide_pane_vc_t

0x8cc7,	// (0x000103a5) input_focus_pane_cp10_vc_ParamLimits

0x8cc7,	// (0x000103a5) input_focus_pane_cp10_vc

0xde55,	// (0x00015533) slider_cont_pane_cp1_vc_ParamLimits

0xde55,	// (0x00015533) slider_cont_pane_cp1_vc

0xda9d,	// (0x0001517b) slider_form_pane_g1_cp2

0xdaa6,	// (0x00015184) slider_form_pane_g2_cp2

0xde70,	// (0x0001554e) form_field_slider_pane_vc_t3

0xde7e,	// (0x0001555c) form_field_slider_pane_vc_t4

0xde8c,	// (0x0001556a) slider_form_pane_vc_ParamLimits

0xde8c,	// (0x0001556a) slider_form_pane_vc

0xde99,	// (0x00015577) form_field_slider_pane_vc_t1_ParamLimits

0xde99,	// (0x00015577) form_field_slider_pane_vc_t1

0xdeaf,	// (0x0001558d) form_field_slider_pane_vc_t2_ParamLimits

0xdeaf,	// (0x0001558d) form_field_slider_pane_vc_t2

0x0001,

0xfa8b,	// (0x00017169) form_field_slider_pane_vc_t_ParamLimits

0xfa8b,	// (0x00017169) form_field_slider_pane_vc_t

0x8cc7,	// (0x000103a5) input_focus_pane_cp9_vc_ParamLimits

0x8cc7,	// (0x000103a5) input_focus_pane_cp9_vc

0xdec1,	// (0x0001559f) slider_cont_pane_vc_ParamLimits

0xdec1,	// (0x0001559f) slider_cont_pane_vc

0xded3,	// (0x000155b1) list_form_graphic_pane_cp_vc_ParamLimits

0xded3,	// (0x000155b1) list_form_graphic_pane_cp_vc

0xb32d,	// (0x00012a0b) form_field_popup_wide_pane_vc_g1

0xdee8,	// (0x000155c6) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdee8,	// (0x000155c6) form_field_popup_wide_pane_vc_t1

0x9744,	// (0x00010e22) input_focus_pane_cp8_vc_ParamLimits

0x9744,	// (0x00010e22) input_focus_pane_cp8_vc

0xdefd,	// (0x000155db) list_form_wide_pane_vc_ParamLimits

0xdefd,	// (0x000155db) list_form_wide_pane_vc

0xdf09,	// (0x000155e7) list_form_graphic_pane_vc_g1

0xdf11,	// (0x000155ef) list_form_graphic_pane_vc_t1_ParamLimits

0xdf11,	// (0x000155ef) list_form_graphic_pane_vc_t1

0x8a2e,	// (0x0001010c) list_highlight_pane_cp5_vc_ParamLimits

0x8a2e,	// (0x0001010c) list_highlight_pane_cp5_vc

0xdf2d,	// (0x0001560b) list_form_graphic_pane_vc_ParamLimits

0xdf2d,	// (0x0001560b) list_form_graphic_pane_vc

0xb32d,	// (0x00012a0b) form_field_popup_pane_vc_g1

0xdf43,	// (0x00015621) form_field_popup_pane_vc_t1_ParamLimits

0xdf43,	// (0x00015621) form_field_popup_pane_vc_t1

0x9744,	// (0x00010e22) input_focus_pane_cp7_vc_ParamLimits

0x9744,	// (0x00010e22) input_focus_pane_cp7_vc

0xdf58,	// (0x00015636) list_form_pane_vc_ParamLimits

0xdf58,	// (0x00015636) list_form_pane_vc

0xdf64,	// (0x00015642) data_form_pane_vc_t1_ParamLimits

0xdf64,	// (0x00015642) data_form_pane_vc_t1

0x986a,	// (0x00010f48) input_focus_pane_vc_g1

0x9872,	// (0x00010f50) input_focus_pane_vc_g2

0x987a,	// (0x00010f58) input_focus_pane_vc_g3

0x9882,	// (0x00010f60) input_focus_pane_vc_g4

0x988a,	// (0x00010f68) input_focus_pane_vc_g5

0x9892,	// (0x00010f70) input_focus_pane_vc_g6

0x989a,	// (0x00010f78) input_focus_pane_vc_g7

0x98a2,	// (0x00010f80) input_focus_pane_vc_g8

0x98aa,	// (0x00010f88) input_focus_pane_vc_g9

0x8867,	// (0x0000ff45) input_focus_pane_vc_g10

0x0009,

0xf699,	// (0x00016d77) input_focus_pane_vc_g

0xb321,	// (0x000129ff) data_form_pane_vc_ParamLimits

0xb321,	// (0x000129ff) data_form_pane_vc

0xb32d,	// (0x00012a0b) form_field_data_pane_vc_g1

0xdf7f,	// (0x0001565d) form_field_data_pane_vc_t1_ParamLimits

0xdf7f,	// (0x0001565d) form_field_data_pane_vc_t1

0x9744,	// (0x00010e22) input_focus_pane_vc_ParamLimits

0x9744,	// (0x00010e22) input_focus_pane_vc

0x9674,	// (0x00010d52) button_value_adjust_pane_cp3_vc

0xdf95,	// (0x00015673) button_value_adjust_pane_cp5_vc

0xdb7f,	// (0x0001525d) form_field_data_pane_vc_ParamLimits

0xdb7f,	// (0x0001525d) form_field_data_pane_vc

0x969c,	// (0x00010d7a) form_field_data_pane_vc_cp2

0xdf9d,	// (0x0001567b) form_field_data_wide_pane_vc_ParamLimits

0xdf9d,	// (0x0001567b) form_field_data_wide_pane_vc

0xdfb3,	// (0x00015691) form_field_data_wide_pane_vc_cp2

0xdfbb,	// (0x00015699) form_field_popup_pane_vc_ParamLimits

0xdfbb,	// (0x00015699) form_field_popup_pane_vc

0xdfd2,	// (0x000156b0) form_field_popup_wide_pane_vc_ParamLimits

0xdfd2,	// (0x000156b0) form_field_popup_wide_pane_vc

0xdfe8,	// (0x000156c6) form_field_slider_pane_vc_ParamLimits

0xdfe8,	// (0x000156c6) form_field_slider_pane_vc

0xdffb,	// (0x000156d9) form_field_slider_wide_pane_vc_ParamLimits

0xdffb,	// (0x000156d9) form_field_slider_wide_pane_vc

0x4f95,	// (0x0000c673) grid_touch_1_pane_ParamLimits

0x4f95,	// (0x0000c673) grid_touch_1_pane

0x4fa9,	// (0x0000c687) grid_touch_2_pane_ParamLimits

0x4fa9,	// (0x0000c687) grid_touch_2_pane

0xe00e,	// (0x000156ec) touch_pane_g1_ParamLimits

0xe00e,	// (0x000156ec) touch_pane_g1

0xe01c,	// (0x000156fa) cell_app_pane_cp_wide_ParamLimits

0xe01c,	// (0x000156fa) cell_app_pane_cp_wide

0xe02c,	// (0x0001570a) grid_popup_fast_wide_pane_ParamLimits

0xe02c,	// (0x0001570a) grid_popup_fast_wide_pane

0xe040,	// (0x0001571e) scroll_pane_cp19_ParamLimits

0xe040,	// (0x0001571e) scroll_pane_cp19

0x894e,	// (0x0001002c) bg_popup_window_pane_cp20

0xe054,	// (0x00015732) listscroll_popup_fast_wide_pane

0x9a5e,	// (0x0001113c) grid_indicator_nsta_pane

0xe05c,	// (0x0001573a) clock_nsta_pane_g1

0xe065,	// (0x00015743) clock_nsta_pane_t1

0x4fd3,	// (0x0000c6b1) cell_indicator_nsta_pane_ParamLimits

0x4fd3,	// (0x0000c6b1) cell_indicator_nsta_pane

0xe00e,	// (0x000156ec) cell_indicator_nsta_pane_g1

0x4ff0,	// (0x0000c6ce) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x00017173) cell_indicator_nsta_pane_g

0xe081,	// (0x0001575f) clock_nsta_pane_cp

0xe089,	// (0x00015767) indicator_nsta_pane_cp

0xe092,	// (0x00015770) nsta_clock_indic_pane_g1

0x8b0e,	// (0x000101ec) grid_indicator_pane

0x9e37,	// (0x00011515) scroll_pane_cp29

0x742a,	// (0x0000eb08) indicator_nsta_pane_cp2_ParamLimits

0x742a,	// (0x0000eb08) indicator_nsta_pane_cp2

0x8a2e,	// (0x0001010c) main_apps_wheel_pane

0xb4f1,	// (0x00012bcf) form_midp_field_text_pane_ParamLimits

0xb636,	// (0x00012d14) scroll_bar_cp050_ParamLimits

0xe0fb,	// (0x000157d9) cell_indicator_pane_ParamLimits

0xe0fb,	// (0x000157d9) cell_indicator_pane

0xe111,	// (0x000157ef) cell_indicator_pane_g1

0x5005,	// (0x0000c6e3) grid_wheel_folder_pane_ParamLimits

0x5005,	// (0x0000c6e3) grid_wheel_folder_pane

0x5013,	// (0x0000c6f1) list_wheel_apps_pane_ParamLimits

0x5013,	// (0x0000c6f1) list_wheel_apps_pane

0x501f,	// (0x0000c6fd) main_apps_wheel_pane_g1_ParamLimits

0x501f,	// (0x0000c6fd) main_apps_wheel_pane_g1

0x502b,	// (0x0000c709) main_apps_wheel_pane_g2_ParamLimits

0x502b,	// (0x0000c709) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0001718f) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0001718f) main_apps_wheel_pane_g

0x5037,	// (0x0000c715) main_apps_wheel_pane_t1_ParamLimits

0x5037,	// (0x0000c715) main_apps_wheel_pane_t1

0x5049,	// (0x0000c727) list_wheel_apps_pane_g1

0x5051,	// (0x0000c72f) list_wheel_apps_pane_g2

0x5059,	// (0x0000c737) list_wheel_apps_pane_g3

0x5061,	// (0x0000c73f) list_wheel_apps_pane_g4

0x5069,	// (0x0000c747) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x00017194) list_wheel_apps_pane_g

0x8a2e,	// (0x0001010c) navi_icon_text_pane

0x44a0,	// (0x0000bb7e) aid_fill_nsta

0xe11b,	// (0x000157f9) navi_icon_text_pane_g1

0xe127,	// (0x00015805) navi_icon_text_pane_t1

0xa24c,	// (0x0001192a) list_set_graphic_pane_t1_ParamLimits

0xa24c,	// (0x0001192a) list_set_graphic_pane_t1

0xbd44,	// (0x00013422) popup_midp_note_alarm_window_t6_ParamLimits

0xbd44,	// (0x00013422) popup_midp_note_alarm_window_t6

0xbd56,	// (0x00013434) popup_midp_note_alarm_window_t7_ParamLimits

0xbd56,	// (0x00013434) popup_midp_note_alarm_window_t7

0xbd68,	// (0x00013446) popup_midp_note_alarm_window_t8_ParamLimits

0xbd68,	// (0x00013446) popup_midp_note_alarm_window_t8

0xbd7a,	// (0x00013458) popup_midp_note_alarm_window_t9_ParamLimits

0xbd7a,	// (0x00013458) popup_midp_note_alarm_window_t9

0xbd8c,	// (0x0001346a) popup_midp_note_alarm_window_t10_ParamLimits

0xbd8c,	// (0x0001346a) popup_midp_note_alarm_window_t10

0xbd9e,	// (0x0001347c) popup_midp_note_alarm_window_t11_ParamLimits

0xbd9e,	// (0x0001347c) popup_midp_note_alarm_window_t11

0xbdb0,	// (0x0001348e) scroll_pane_cp17_ParamLimits

0xbdb0,	// (0x0001348e) scroll_pane_cp17

0x78bc,	// (0x0000ef9a) volume_small_pane_cp_g1

0x7bf4,	// (0x0000f2d2) volume_small_pane_cp_g2

0x7bfd,	// (0x0000f2db) volume_small_pane_cp_g3

0x7c06,	// (0x0000f2e4) volume_small_pane_cp_g4

0x78e9,	// (0x0000efc7) volume_small_pane_cp_g5

0x7c0f,	// (0x0000f2ed) volume_small_pane_cp_g6

0x7c18,	// (0x0000f2f6) volume_small_pane_cp_g7

0x7c21,	// (0x0000f2ff) volume_small_pane_cp_g8

0x7c2a,	// (0x0000f308) volume_small_pane_cp_g9

0x7c33,	// (0x0000f311) volume_small_pane_cp_g10

0xa5a0,	// (0x00011c7e) midp_ticker_pane_g1_ParamLimits

0xa5ac,	// (0x00011c8a) midp_ticker_pane_g2_ParamLimits

0xf761,	// (0x00016e3f) midp_ticker_pane_g_ParamLimits

0xa5b8,	// (0x00011c96) midp_ticker_pane_t1_ParamLimits

0x44b6,	// (0x0000bb94) aid_fill_nsta_2

0xb622,	// (0x00012d00) list_form2_midp_pane

0xd668,	// (0x00014d46) midp_editing_number_pane_ParamLimits

0xd674,	// (0x00014d52) midp_ticker_pane_ParamLimits

0xe139,	// (0x00015817) form2_midp_field_pane

0xe141,	// (0x0001581f) scroll_pane_cp51

0xe161,	// (0x0001583f) form2_midp_button_pane_ParamLimits

0xe161,	// (0x0001583f) form2_midp_button_pane

0xe173,	// (0x00015851) form2_midp_content_pane_ParamLimits

0xe173,	// (0x00015851) form2_midp_content_pane

0xe18d,	// (0x0001586b) form2_midp_field_choice_group_pane

0xe195,	// (0x00015873) form2_midp_field_pane_g1

0xe19d,	// (0x0001587b) form2_midp_field_pane_g2

0xe1a5,	// (0x00015883) form2_midp_field_pane_g3

0xe1ad,	// (0x0001588b) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x000171b9) form2_midp_field_pane_g

0xe1b5,	// (0x00015893) form2_midp_gauge_slider_pane

0xe1bd,	// (0x0001589b) form2_midp_gauge_wait_pane

0xe1c5,	// (0x000158a3) form2_midp_image_pane_ParamLimits

0xe1c5,	// (0x000158a3) form2_midp_image_pane

0xe1e0,	// (0x000158be) form2_midp_label_pane_ParamLimits

0xe1e0,	// (0x000158be) form2_midp_label_pane

0x509e,	// (0x0000c77c) form2_midp_label_pane_cp_ParamLimits

0x509e,	// (0x0000c77c) form2_midp_label_pane_cp

0xe1f9,	// (0x000158d7) form2_midp_string_pane_ParamLimits

0xe1f9,	// (0x000158d7) form2_midp_string_pane

0x50bd,	// (0x0000c79b) form2_midp_text_pane_ParamLimits

0x50bd,	// (0x0000c79b) form2_midp_text_pane

0xe20b,	// (0x000158e9) form2_midp_time_pane

0xe21b,	// (0x000158f9) input_focus_pane_cp51_ParamLimits

0xe21b,	// (0x000158f9) input_focus_pane_cp51

0xe233,	// (0x00015911) form2_midp_label_pane_t1_ParamLimits

0xe233,	// (0x00015911) form2_midp_label_pane_t1

0x98b2,	// (0x00010f90) form2_mdip_text_pane_t1_ParamLimits

0x98b2,	// (0x00010f90) form2_mdip_text_pane_t1

0xe273,	// (0x00015951) form2_midp_time_pane_t1

0xe28e,	// (0x0001596c) form2_midp_gauge_slider_pane_t1

0x50d6,	// (0x0000c7b4) form2_midp_gauge_slider_pane_t2

0x50e8,	// (0x0000c7c6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x000171c2) form2_midp_gauge_slider_pane_t

0xe2a0,	// (0x0001597e) form2_midp_slider_pane

0xe2ac,	// (0x0001598a) form2_midp_gauge_wait_pane_t1

0xe2ba,	// (0x00015998) form2_midp_wait_pane_ParamLimits

0xe2ba,	// (0x00015998) form2_midp_wait_pane

0x48e8,	// (0x0000bfc6) list_single_2graphic_pane_cp4_ParamLimits

0x48e8,	// (0x0000bfc6) list_single_2graphic_pane_cp4

0x50fa,	// (0x0000c7d8) list_single_midp_graphic_pane_cp_ParamLimits

0x50fa,	// (0x0000c7d8) list_single_midp_graphic_pane_cp

0x894e,	// (0x0001002c) list_highlight_pane_cp20

0xe2e5,	// (0x000159c3) list_single_2graphic_pane_g1_cp4

0xd6f4,	// (0x00014dd2) list_single_2graphic_pane_g2_cp4

0xe2ed,	// (0x000159cb) list_single_2graphic_pane_t1_cp4

0x8a2e,	// (0x0001010c) list_highlight_pane_cp21

0xe2fc,	// (0x000159da) list_single_midp_graphic_pane_g4_cp

0xe30b,	// (0x000159e9) list_single_midp_graphic_pane_t1_cp

0x5118,	// (0x0000c7f6) form2_mdip_string_pane_t1_ParamLimits

0x5118,	// (0x0000c7f6) form2_mdip_string_pane_t1

0x894e,	// (0x0001002c) bg_wml_button_pane_cp2

0x8867,	// (0x0000ff45) form2_midp_image_pane_g1

0x9459,	// (0x00010b37) list_double_large_graphic_pane_g5_ParamLimits

0x9459,	// (0x00010b37) list_double_large_graphic_pane_g5

0x3cd9,	// (0x0000b3b7) midp_form_pane_ParamLimits

0x8a2e,	// (0x0001010c) main_apps_wheel_pane_ParamLimits

0x4242,	// (0x0000b920) popup_preview_window_ParamLimits

0x4242,	// (0x0000b920) popup_preview_window

0xaca5,	// (0x00012383) popup_touch_info_window_ParamLimits

0xaca5,	// (0x00012383) popup_touch_info_window

0xacc3,	// (0x000123a1) popup_touch_menu_window_ParamLimits

0xacc3,	// (0x000123a1) popup_touch_menu_window

0x885d,	// (0x0000ff3b) bg_popup_sub_pane_cp6

0xe320,	// (0x000159fe) list_touch_menu_pane

0xe328,	// (0x00015a06) list_single_touch_menu_pane_ParamLimits

0xe328,	// (0x00015a06) list_single_touch_menu_pane

0xe33f,	// (0x00015a1d) list_single_touch_menu_pane_t1

0x8a2e,	// (0x0001010c) bg_popup_sub_pane_cp7_ParamLimits

0x8a2e,	// (0x0001010c) bg_popup_sub_pane_cp7

0xe34d,	// (0x00015a2b) heading_sub_pane

0xe355,	// (0x00015a33) list_touch_info_pane_ParamLimits

0xe355,	// (0x00015a33) list_touch_info_pane

0xe364,	// (0x00015a42) list_single_touch_info_pane_ParamLimits

0xe364,	// (0x00015a42) list_single_touch_info_pane

0xe375,	// (0x00015a53) list_single_touch_info_pane_t1

0xe383,	// (0x00015a61) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x000171d0) list_single_touch_info_pane_t

0xa4d1,	// (0x00011baf) bg_popup_heading_pane_cp

0xe391,	// (0x00015a6f) heading_sub_pane_t1

0xb2bb,	// (0x00012999) bg_popup_preview_window_pane_cp_ParamLimits

0xb2bb,	// (0x00012999) bg_popup_preview_window_pane_cp

0xe34d,	// (0x00015a2b) heading_preview_pane

0xe355,	// (0x00015a33) list_preview_pane_ParamLimits

0xe355,	// (0x00015a33) list_preview_pane

0xe39f,	// (0x00015a7d) popup_preview_window_g1

0xe364,	// (0x00015a42) list_single_preview_pane_ParamLimits

0xe364,	// (0x00015a42) list_single_preview_pane

0xe3a7,	// (0x00015a85) list_single_preview_pane_g1

0xe3af,	// (0x00015a8d) list_single_preview_pane_t1

0xe375,	// (0x00015a53) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x000171d5) list_single_preview_pane_t

0xe3bd,	// (0x00015a9b) bg_popup_heading_pane_cp2_ParamLimits

0xe3bd,	// (0x00015a9b) bg_popup_heading_pane_cp2

0xe3d3,	// (0x00015ab1) heading_preview_pane_g1

0xe3db,	// (0x00015ab9) heading_preview_pane_t1_ParamLimits

0xe3db,	// (0x00015ab9) heading_preview_pane_t1

0x8b31,	// (0x0001020f) soft_indicator_pane_t1_ParamLimits

0x919a,	// (0x00010878) scroll_pane_ParamLimits

0x9d33,	// (0x00011411) scroll_sc2_left_pane

0x9d3c,	// (0x0001141a) scroll_sc2_right_pane

0x9d5b,	// (0x00011439) scroll_bg_pane_g1_ParamLimits

0x9d70,	// (0x0001144e) scroll_bg_pane_g2_ParamLimits

0x9d88,	// (0x00011466) scroll_bg_pane_g3_ParamLimits

0xf6f0,	// (0x00016dce) scroll_bg_pane_g_ParamLimits

0x9d5b,	// (0x00011439) scroll_handle_pane_g1_ParamLimits

0x9daa,	// (0x00011488) scroll_handle_pane_g2_ParamLimits

0x9d88,	// (0x00011466) scroll_handle_pane_g3_ParamLimits

0xf6f7,	// (0x00016dd5) scroll_handle_pane_g_ParamLimits

0xa872,	// (0x00011f50) popup_choice_list_window_ParamLimits

0xa872,	// (0x00011f50) popup_choice_list_window

0xb0ef,	// (0x000127cd) choice_list_pane

0xb165,	// (0x00012843) cell_toolbar_pane_t1

0xb18d,	// (0x0001286b) toolbar_button_pane_ParamLimits

0xd3c9,	// (0x00014aa7) ai_gene_pane_1_t2_ParamLimits

0xd3c9,	// (0x00014aa7) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x00016fe6) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x00016fe6) ai_gene_pane_1_t

0xe3f8,	// (0x00015ad6) scroll_sc2_left_pane_g1

0xe3f8,	// (0x00015ad6) scroll_sc2_right_pane_g1

0xa844,	// (0x00011f22) bg_popup_sub_pane_cp10

0xe402,	// (0x00015ae0) list_choice_list_pane

0xe427,	// (0x00015b05) list_single_choice_list_pane_ParamLimits

0xe427,	// (0x00015b05) list_single_choice_list_pane

0xe43b,	// (0x00015b19) list_single_choice_list_pane_g1

0x9a2f,	// (0x0001110d) list_single_choice_list_pane_t1_ParamLimits

0x9a2f,	// (0x0001110d) list_single_choice_list_pane_t1

0xe443,	// (0x00015b21) choice_list_pane_g1

0xe44b,	// (0x00015b29) choice_list_pane_t1

0x885d,	// (0x0000ff3b) input_focus_pane_cp11

0x9c13,	// (0x000112f1) title_pane_stacon_g2_ParamLimits

0x9c13,	// (0x000112f1) title_pane_stacon_g2

0x0002,

0xf6d6,	// (0x00016db4) title_pane_stacon_g_ParamLimits

0xf6d6,	// (0x00016db4) title_pane_stacon_g

0xa4d1,	// (0x00011baf) cursor_press_pane

0x3fa9,	// (0x0000b687) popup_fep_hwr_window_ParamLimits

0x3fa9,	// (0x0000b687) popup_fep_hwr_window

0xa96a,	// (0x00012048) popup_fep_vkb_window_ParamLimits

0xa96a,	// (0x00012048) popup_fep_vkb_window

0xe459,	// (0x00015b37) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x000171fe) fep_vkb_side_pane_g_ParamLimits

0x7c71,	// (0x0000f34f) fep_hwr_candidate_pane_ParamLimits

0x7c71,	// (0x0000f34f) fep_hwr_candidate_pane

0x7c99,	// (0x0000f377) fep_hwr_side_pane_ParamLimits

0x7c99,	// (0x0000f377) fep_hwr_side_pane

0x7cb9,	// (0x0000f397) fep_hwr_top_pane_ParamLimits

0x7cb9,	// (0x0000f397) fep_hwr_top_pane

0x7cd1,	// (0x0000f3af) fep_hwr_write_pane_ParamLimits

0x7cd1,	// (0x0000f3af) fep_hwr_write_pane

0xfb20,	// (0x000171fe) fep_vkb_side_pane_g

0xe461,	// (0x00015b3f) fep_hwr_top_pane_g1

0xe473,	// (0x00015b51) fep_hwr_top_pane_g2

0x7d0b,	// (0x0000f3e9) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x000171da) fep_hwr_top_pane_g

0x7d20,	// (0x0000f3fe) fep_hwr_top_text_pane

0x9eff,	// (0x000115dd) fep_hwr_top_text_pane_g1

0xe4a9,	// (0x00015b87) fep_hwr_top_text_pane_t1

0x7e0e,	// (0x0000f4ec) fep_hwr_candidate_pane_g1

0xe672,	// (0x00015d50) fep_vkb_keypad_pane_g3_ParamLimits

0xe672,	// (0x00015d50) fep_vkb_keypad_pane_g3

0xe694,	// (0x00015d72) fep_vkb_keypad_pane_g4_ParamLimits

0xe694,	// (0x00015d72) fep_vkb_keypad_pane_g4

0xe703,	// (0x00015de1) fep_vkb_bottom_pane_g2_ParamLimits

0xe703,	// (0x00015de1) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x00017205) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x00017205) fep_vkb_bottom_pane_g

0xe3f8,	// (0x00015ad6) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0001720f) cell_vkb_side_pane_g

0xe747,	// (0x00015e25) cell_vkb_side_pane_t1

0xe755,	// (0x00015e33) cell_vkb_side_pane_t1_copy1

0xe3f8,	// (0x00015ad6) bg_fep_vkb_candidate_pane_g2

0xe823,	// (0x00015f01) cell_vkb_candidate_pane_ParamLimits

0xe4b7,	// (0x00015b95) aid_size_cell_vkb_ParamLimits

0xe4b7,	// (0x00015b95) aid_size_cell_vkb

0xe823,	// (0x00015f01) cell_vkb_candidate_pane

0x7e35,	// (0x0000f513) bg_popup_fep_shadow_pane_g1

0xe521,	// (0x00015bff) fep_vkb_bottom_pane_ParamLimits

0xe521,	// (0x00015bff) fep_vkb_bottom_pane

0xe55e,	// (0x00015c3c) fep_vkb_candidate_pane_ParamLimits

0xe55e,	// (0x00015c3c) fep_vkb_candidate_pane

0xe57a,	// (0x00015c58) fep_vkb_keypad_pane_ParamLimits

0xe57a,	// (0x00015c58) fep_vkb_keypad_pane

0xe5ae,	// (0x00015c8c) fep_vkb_side_pane_ParamLimits

0xe5ae,	// (0x00015c8c) fep_vkb_side_pane

0xe5da,	// (0x00015cb8) fep_vkb_top_pane_ParamLimits

0xe5da,	// (0x00015cb8) fep_vkb_top_pane

0xe606,	// (0x00015ce4) fep_vkb_top_pane_g1_ParamLimits

0xe606,	// (0x00015ce4) fep_vkb_top_pane_g1

0xe615,	// (0x00015cf3) fep_vkb_top_pane_g2_ParamLimits

0xe615,	// (0x00015cf3) fep_vkb_top_pane_g2

0xe624,	// (0x00015d02) fep_vkb_top_pane_g3_ParamLimits

0xe624,	// (0x00015d02) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x000171f5) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x000171f5) fep_vkb_top_pane_g

0xe642,	// (0x00015d20) fep_vkb_top_text_pane_ParamLimits

0xe642,	// (0x00015d20) fep_vkb_top_text_pane

0x51df,	// (0x0000c8bd) fep_vkb_side_pane_g1_ParamLimits

0x51df,	// (0x0000c8bd) fep_vkb_side_pane_g1

0xe661,	// (0x00015d3f) grid_vkb_side_pane_ParamLimits

0xe661,	// (0x00015d3f) grid_vkb_side_pane

0x7e3d,	// (0x0000f51b) bg_popup_fep_shadow_pane_g2

0x7e46,	// (0x0000f524) bg_popup_fep_shadow_pane_g3

0x7e4e,	// (0x0000f52c) bg_popup_fep_shadow_pane_g4

0x7e57,	// (0x0000f535) bg_popup_fep_shadow_pane_g5

0x7e5f,	// (0x0000f53d) bg_popup_fep_shadow_pane_g6

0x7e67,	// (0x0000f545) bg_popup_fep_shadow_pane_g7

0x9882,	// (0x00010f60) bg_popup_fep_shadow_pane_g8

0xe6b2,	// (0x00015d90) grid_vkb_keypad_number_pane_ParamLimits

0xe6b2,	// (0x00015d90) grid_vkb_keypad_number_pane

0xe6c2,	// (0x00015da0) grid_vkb_keypad_pane_ParamLimits

0xe6c2,	// (0x00015da0) grid_vkb_keypad_pane

0xe6e8,	// (0x00015dc6) fep_vkb_bottom_pane_g1_ParamLimits

0xe6e8,	// (0x00015dc6) fep_vkb_bottom_pane_g1

0xe711,	// (0x00015def) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe711,	// (0x00015def) grid_vkb_keypad_bottom_left_pane

0xe726,	// (0x00015e04) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe726,	// (0x00015e04) grid_vkb_keypad_bottom_right_pane

0xe73b,	// (0x00015e19) fep_vkb_top_text_pane_g1

0x5226,	// (0x0000c904) fep_vkb_top_text_pane_t1

0x5238,	// (0x0000c916) cell_vkb_side_pane_ParamLimits

0x5238,	// (0x0000c916) cell_vkb_side_pane

0xe3f8,	// (0x00015ad6) cell_vkb_side_pane_g1

0xe763,	// (0x00015e41) cell_vkb_keypad_pane_ParamLimits

0xe763,	// (0x00015e41) cell_vkb_keypad_pane

0xe7d0,	// (0x00015eae) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x00017222) bg_popup_fep_shadow_pane_g

0x7e77,	// (0x0000f555) cell_hwr_side_pane_g1

0x7e77,	// (0x0000f555) cell_hwr_side_pane_g2

0xe7da,	// (0x00015eb8) cell_vkb_keypad_pane_t1

0x524e,	// (0x0000c92c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x524e,	// (0x0000c92c) cell_vkb_keypad_bottom_left_pane

0x5263,	// (0x0000c941) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x5263,	// (0x0000c941) cell_vkb_keypad_bottom_right_pane

0xe3f8,	// (0x00015ad6) cell_vkb_keypad_bottom_left_pane_g1

0xe3f8,	// (0x00015ad6) cell_vkb_keypad_bottom_right_pane_g1

0xe7e8,	// (0x00015ec6) cell_vkb_keypad_number_pane_ParamLimits

0xe7e8,	// (0x00015ec6) cell_vkb_keypad_number_pane

0xe807,	// (0x00015ee5) cell_vkb_keypad_number_pane_g1

0xe811,	// (0x00015eef) cell_vkb_keypad_number_pane_g2

0xe81a,	// (0x00015ef8) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x00017214) cell_vkb_keypad_number_pane_g

0xe7da,	// (0x00015eb8) cell_vkb_keypad_number_pane_t1

0xe83c,	// (0x00015f1a) fep_vkb_candidate_pane_g1

0x0001,

0xfb57,	// (0x00017235) cell_hwr_side_pane_g

0xe855,	// (0x00015f33) cell_hwr_side_pane_t1

0x7e81,	// (0x0000f55f) cell_hwr_side_pane_t1_copy1

0x7e8f,	// (0x0000f56d) cell_hwr_candidate_pane_g1

0x7ebe,	// (0x0000f59c) cell_hwr_candidate_pane_t1

0xe3f8,	// (0x00015ad6) cell_vkb_candidate_pane_g2

0xe899,	// (0x00015f77) cell_vkb_candidate_pane_t1

0x7c3c,	// (0x0000f31a) bg_popup_fep_shadow_pane_ParamLimits

0x7c3c,	// (0x0000f31a) bg_popup_fep_shadow_pane

0x7ceb,	// (0x0000f3c9) bg_fep_hwr_top_pane_g4

0xe485,	// (0x00015b63) bg_hwr_side_pane_g1_ParamLimits

0xe485,	// (0x00015b63) bg_hwr_side_pane_g1

0xcc4b,	// (0x00014329) cell_hwr_side_pane_ParamLimits

0xcc4b,	// (0x00014329) cell_hwr_side_pane

0x7d97,	// (0x0000f475) fep_hwr_write_pane_g1_ParamLimits

0x7d97,	// (0x0000f475) fep_hwr_write_pane_g1

0x7da4,	// (0x0000f482) fep_hwr_write_pane_g2_ParamLimits

0x7da4,	// (0x0000f482) fep_hwr_write_pane_g2

0x7db1,	// (0x0000f48f) fep_hwr_write_pane_g3_ParamLimits

0x7db1,	// (0x0000f48f) fep_hwr_write_pane_g3

0xcc6b,	// (0x00014349) fep_hwr_write_pane_g4_ParamLimits

0xcc6b,	// (0x00014349) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x000171e1) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x000171e1) fep_hwr_write_pane_g

0x7ceb,	// (0x0000f3c9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7ceb,	// (0x0000f3c9) bg_fep_hwr_candidate_pane_g2

0x7dd4,	// (0x0000f4b2) cell_hwr_candidate_pane_ParamLimits

0x7dd4,	// (0x0000f4b2) cell_hwr_candidate_pane

0x7e0e,	// (0x0000f4ec) fep_hwr_candidate_pane_g1_ParamLimits

0xe4e5,	// (0x00015bc3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe4e5,	// (0x00015bc3) bg_popup_fep_shadow_pane_cp2

0xe634,	// (0x00015d12) fep_vkb_top_pane_g4_ParamLimits

0xe634,	// (0x00015d12) fep_vkb_top_pane_g4

0xe653,	// (0x00015d31) fep_vkb_side_pane_g2_ParamLimits

0xe653,	// (0x00015d31) fep_vkb_side_pane_g2

0x3807,	// (0x0000aee5) list_setting_pane_t4_ParamLimits

0x3807,	// (0x0000aee5) list_setting_pane_t4

0x3889,	// (0x0000af67) list_setting_number_pane_t5_ParamLimits

0x3889,	// (0x0000af67) list_setting_number_pane_t5

0x3b8f,	// (0x0000b26d) list_double_heading_pane_cp2_ParamLimits

0x3b8f,	// (0x0000b26d) list_double_heading_pane_cp2

0xa346,	// (0x00011a24) list_double_heading_pane_g1_cp2_ParamLimits

0xa346,	// (0x00011a24) list_double_heading_pane_g1_cp2

0xe8a7,	// (0x00015f85) list_double_heading_pane_g2_cp2_ParamLimits

0xe8a7,	// (0x00015f85) list_double_heading_pane_g2_cp2

0xe8bb,	// (0x00015f99) list_double_heading_pane_t1_cp2_ParamLimits

0xe8bb,	// (0x00015f99) list_double_heading_pane_t1_cp2

0xe8d1,	// (0x00015faf) list_double_heading_pane_t2_cp2_ParamLimits

0xe8d1,	// (0x00015faf) list_double_heading_pane_t2_cp2

0x8847,	// (0x0000ff25) aid_value_unit2

0x705a,	// (0x0000e738) popup_preview_fixed_window

0x8cd5,	// (0x000103b3) bg_popup_preview_window_pane_cp02

0xe8e3,	// (0x00015fc1) list_preview_fixed_pane

0xe929,	// (0x00016007) list_empty_pane_fp_ParamLimits

0xe929,	// (0x00016007) list_empty_pane_fp

0xe929,	// (0x00016007) list_single_cale_day_pane_fp_ParamLimits

0xe929,	// (0x00016007) list_single_cale_day_pane_fp

0xe929,	// (0x00016007) list_single_graphic_heading_pane_fp_ParamLimits

0xe929,	// (0x00016007) list_single_graphic_heading_pane_fp

0xe929,	// (0x00016007) list_single_graphic_pane_fp_ParamLimits

0xe929,	// (0x00016007) list_single_graphic_pane_fp

0xe929,	// (0x00016007) list_single_heading_pane_fp_ParamLimits

0xe929,	// (0x00016007) list_single_heading_pane_fp

0xe929,	// (0x00016007) list_single_pane_fp_ParamLimits

0xe929,	// (0x00016007) list_single_pane_fp

0xe9a7,	// (0x00016085) list_single_pane_fp_g1_ParamLimits

0xe9a7,	// (0x00016085) list_single_pane_fp_g1

0x93dc,	// (0x00010aba) list_single_pane_fp_g2_ParamLimits

0x93dc,	// (0x00010aba) list_single_pane_fp_g2

0xe9b3,	// (0x00016091) list_single_pane_fp_g3_ParamLimits

0xe9b3,	// (0x00016091) list_single_pane_fp_g3

0xe9c7,	// (0x000160a5) list_single_pane_fp_g4_ParamLimits

0xe9c7,	// (0x000160a5) list_single_pane_fp_g4

0x0003,

0xfb6a,	// (0x00017248) list_single_pane_fp_g_ParamLimits

0xfb6a,	// (0x00017248) list_single_pane_fp_g

0xe9d3,	// (0x000160b1) list_single_pane_fp_t1_ParamLimits

0xe9d3,	// (0x000160b1) list_single_pane_fp_t1

0xe9ea,	// (0x000160c8) list_single_graphic_pane_fp_g1_ParamLimits

0xe9ea,	// (0x000160c8) list_single_graphic_pane_fp_g1

0xe9a7,	// (0x00016085) list_single_graphic_pane_fp_g2_ParamLimits

0xe9a7,	// (0x00016085) list_single_graphic_pane_fp_g2

0x93dc,	// (0x00010aba) list_single_graphic_pane_fp_g3_ParamLimits

0x93dc,	// (0x00010aba) list_single_graphic_pane_fp_g3

0xe9b3,	// (0x00016091) list_single_graphic_pane_fp_g4_ParamLimits

0xe9b3,	// (0x00016091) list_single_graphic_pane_fp_g4

0xe9c7,	// (0x000160a5) list_single_graphic_pane_fp_g5_ParamLimits

0xe9c7,	// (0x000160a5) list_single_graphic_pane_fp_g5

0x0004,

0xfb73,	// (0x00017251) list_single_graphic_pane_fp_g_ParamLimits

0xfb73,	// (0x00017251) list_single_graphic_pane_fp_g

0xe9f6,	// (0x000160d4) list_single_graphic_pane_fp_t1_ParamLimits

0xe9f6,	// (0x000160d4) list_single_graphic_pane_fp_t1

0xe9ea,	// (0x000160c8) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe9ea,	// (0x000160c8) list_single_graphic_heading_pane_fp_g1

0xe9a7,	// (0x00016085) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe9a7,	// (0x00016085) list_single_graphic_heading_pane_fp_g2

0x93dc,	// (0x00010aba) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x93dc,	// (0x00010aba) list_single_graphic_heading_pane_fp_g3

0xe9b3,	// (0x00016091) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe9b3,	// (0x00016091) list_single_graphic_heading_pane_fp_g4

0xe9c7,	// (0x000160a5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe9c7,	// (0x000160a5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb73,	// (0x00017251) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x00017251) list_single_graphic_heading_pane_fp_g

0xea0c,	// (0x000160ea) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xea0c,	// (0x000160ea) list_single_graphic_heading_pane_fp_t1

0xea22,	// (0x00016100) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xea22,	// (0x00016100) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0001725c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0001725c) list_single_graphic_heading_pane_fp_t

0xea34,	// (0x00016112) list_single_cale_day_pane_fp_g1_ParamLimits

0xea34,	// (0x00016112) list_single_cale_day_pane_fp_g1

0xea6c,	// (0x0001614a) list_single_cale_day_pane_fp_g2_ParamLimits

0xea6c,	// (0x0001614a) list_single_cale_day_pane_fp_g2

0xea78,	// (0x00016156) list_single_cale_day_pane_fp_g3_ParamLimits

0xea78,	// (0x00016156) list_single_cale_day_pane_fp_g3

0xeaa0,	// (0x0001617e) list_single_cale_day_pane_fp_g4_ParamLimits

0xeaa0,	// (0x0001617e) list_single_cale_day_pane_fp_g4

0xeac4,	// (0x000161a2) list_single_cale_day_pane_fp_g5_ParamLimits

0xeac4,	// (0x000161a2) list_single_cale_day_pane_fp_g5

0x0004,

0xfb83,	// (0x00017261) list_single_cale_day_pane_fp_g_ParamLimits

0xfb83,	// (0x00017261) list_single_cale_day_pane_fp_g

0xeae8,	// (0x000161c6) list_single_cale_day_pane_fp_t1_ParamLimits

0xeae8,	// (0x000161c6) list_single_cale_day_pane_fp_t1

0xeb0e,	// (0x000161ec) list_single_cale_day_pane_fp_t2_ParamLimits

0xeb0e,	// (0x000161ec) list_single_cale_day_pane_fp_t2

0xeb27,	// (0x00016205) list_single_cale_day_pane_fp_t3_ParamLimits

0xeb27,	// (0x00016205) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8e,	// (0x0001726c) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8e,	// (0x0001726c) list_single_cale_day_pane_fp_t

0xe9a7,	// (0x00016085) list_empty_pane_fp_g1_ParamLimits

0xe9a7,	// (0x00016085) list_empty_pane_fp_g1

0xeb40,	// (0x0001621e) list_empty_pane_fp_t1

0xeb4e,	// (0x0001622c) list_empty_pane_fp_t2

0x0001,

0xfb95,	// (0x00017273) list_empty_pane_fp_t

0xe9a7,	// (0x00016085) list_single_heading_pane_fp_g1_ParamLimits

0xe9a7,	// (0x00016085) list_single_heading_pane_fp_g1

0x93dc,	// (0x00010aba) list_single_heading_pane_fp_g2_ParamLimits

0x93dc,	// (0x00010aba) list_single_heading_pane_fp_g2

0xe9b3,	// (0x00016091) list_single_heading_pane_fp_g3_ParamLimits

0xe9b3,	// (0x00016091) list_single_heading_pane_fp_g3

0x0002,

0xfb9a,	// (0x00017278) list_single_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x00017278) list_single_heading_pane_fp_g

0xeb5c,	// (0x0001623a) list_single_heading_pane_fp_t1_ParamLimits

0xeb5c,	// (0x0001623a) list_single_heading_pane_fp_t1

0xeb6e,	// (0x0001624c) list_single_heading_pane_fp_t2_ParamLimits

0xeb6e,	// (0x0001624c) list_single_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x0001727f) list_single_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x0001727f) list_single_heading_pane_fp_t

0x9a9d,	// (0x0001117b) aid_size_cell_fast

0x8c3c,	// (0x0001031a) soft_indicator_pane_cp1_t1

0x9ada,	// (0x000111b8) cell_app_pane_cp2_ParamLimits

0x9ada,	// (0x000111b8) cell_app_pane_cp2

0x7c5e,	// (0x0000f33c) fep_hwr_candidate_drop_down_list_pane

0x7e28,	// (0x0000f506) fep_hwr_candidate_pane_g3_ParamLimits

0x7e28,	// (0x0000f506) fep_hwr_candidate_pane_g3

0x6411,	// (0x0000daef) fep_hwr_candidate_pane_g4_ParamLimits

0x6411,	// (0x0000daef) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x000171ee) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x000171ee) fep_hwr_candidate_pane_g

0xe54d,	// (0x00015c2b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe54d,	// (0x00015c2b) fep_vkb_candidate_drop_down_list_pane

0xe844,	// (0x00015f22) fep_vkb_candidate_pane_g3

0xe84c,	// (0x00015f2a) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0001721b) fep_vkb_candidate_pane_g

0x7e8f,	// (0x0000f56d) cell_hwr_candidate_pane_g1_ParamLimits

0x7e9d,	// (0x0000f57b) cell_hwr_candidate_pane_g3_ParamLimits

0x7e9d,	// (0x0000f57b) cell_hwr_candidate_pane_g3

0x14dc,	// (0x00008bba) cell_hwr_candidate_pane_g4_ParamLimits

0x14dc,	// (0x00008bba) cell_hwr_candidate_pane_g4

0x0002,

0xfb5c,	// (0x0001723a) cell_hwr_candidate_pane_g_ParamLimits

0xfb5c,	// (0x0001723a) cell_hwr_candidate_pane_g

0xe863,	// (0x00015f41) cell_vkb_candidate_pane_g3_ParamLimits

0xe863,	// (0x00015f41) cell_vkb_candidate_pane_g3

0xe87e,	// (0x00015f5c) cell_vkb_candidate_pane_g4_ParamLimits

0xe87e,	// (0x00015f5c) cell_vkb_candidate_pane_g4

0xeb84,	// (0x00016262) cell_app_pane_cp2_g1_ParamLimits

0xeb84,	// (0x00016262) cell_app_pane_cp2_g1

0xeba2,	// (0x00016280) cell_app_pane_cp2_g2_ParamLimits

0xeba2,	// (0x00016280) cell_app_pane_cp2_g2

0x0001,

0xfba6,	// (0x00017284) cell_app_pane_cp2_g_ParamLimits

0xfba6,	// (0x00017284) cell_app_pane_cp2_g

0xebae,	// (0x0001628c) cell_app_pane_cp2_t1_ParamLimits

0xebae,	// (0x0001628c) cell_app_pane_cp2_t1

0x9744,	// (0x00010e22) grid_highlight_pane_cp1_ParamLimits

0x9744,	// (0x00010e22) grid_highlight_pane_cp1

0x7edb,	// (0x0000f5b9) cell_hwr_candidate_pane_cp1_ParamLimits

0x7edb,	// (0x0000f5b9) cell_hwr_candidate_pane_cp1

0x7e8f,	// (0x0000f56d) fep_hwr_candidate_drop_down_list_pane_g1

0x7ef9,	// (0x0000f5d7) fep_hwr_candidate_drop_down_list_pane_g2

0x7f06,	// (0x0000f5e4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x00017289) fep_hwr_candidate_drop_down_list_pane_g

0x7f13,	// (0x0000f5f1) fep_hwr_candidate_drop_down_list_scroll_pane

0x7f1c,	// (0x0000f5fa) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f1c,	// (0x0000f5fa) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7f29,	// (0x0000f607) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f29,	// (0x0000f607) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7f36,	// (0x0000f614) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f36,	// (0x0000f614) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7f43,	// (0x0000f621) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f43,	// (0x0000f621) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7f5e,	// (0x0000f63c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f5e,	// (0x0000f63c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7f79,	// (0x0000f657) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f79,	// (0x0000f657) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7f94,	// (0x0000f672) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f94,	// (0x0000f672) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7faf,	// (0x0000f68d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7faf,	// (0x0000f68d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x00017290) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x00017290) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x527e,	// (0x0000c95c) cell_vkb_candidate_pane_cp1_ParamLimits

0x527e,	// (0x0000c95c) cell_vkb_candidate_pane_cp1

0xe634,	// (0x00015d12) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe634,	// (0x00015d12) fep_vkb_candidate_drop_down_list_pane_g1

0xebc0,	// (0x0001629e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xebc0,	// (0x0001629e) fep_vkb_candidate_drop_down_list_pane_g2

0xebcd,	// (0x000162ab) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xebcd,	// (0x000162ab) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x000172a1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x000172a1) fep_vkb_candidate_drop_down_list_pane_g

0xebda,	// (0x000162b8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xebda,	// (0x000162b8) fep_vkb_candidate_drop_down_list_scroll_pane

0xebe7,	// (0x000162c5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xebe7,	// (0x000162c5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xebf4,	// (0x000162d2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xebf4,	// (0x000162d2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xec00,	// (0x000162de) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xec00,	// (0x000162de) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe93d,	// (0x0001601b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe93d,	// (0x0001601b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe95e,	// (0x0001603c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe95e,	// (0x0001603c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xec0c,	// (0x000162ea) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xec0c,	// (0x000162ea) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xec2d,	// (0x0001630b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xec2d,	// (0x0001630b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xec4e,	// (0x0001632c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xec4e,	// (0x0001632c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x000172a8) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x000172a8) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x318c,	// (0x0000a86a) title_pane_g1_ParamLimits

0x31a3,	// (0x0000a881) title_pane_g2_ParamLimits

0xf56a,	// (0x00016c48) title_pane_g_ParamLimits

0x9eef,	// (0x000115cd) aid_call2_pane

0x9ef7,	// (0x000115d5) aid_call_pane

0x9eff,	// (0x000115dd) popup_clock_analogue_window_g1

0x9eff,	// (0x000115dd) popup_clock_analogue_window_g2

0x7334,	// (0x0000ea12) popup_clock_analogue_window_g3

0x733d,	// (0x0000ea1b) popup_clock_analogue_window_g4

0x8867,	// (0x0000ff45) popup_clock_analogue_window_g5

0x0004,

0xf705,	// (0x00016de3) popup_clock_analogue_window_g

0x7345,	// (0x0000ea23) popup_clock_analogue_window_t1

0x7353,	// (0x0000ea31) clock_digital_number_pane_ParamLimits

0x7353,	// (0x0000ea31) clock_digital_number_pane

0x735f,	// (0x0000ea3d) clock_digital_number_pane_cp02_ParamLimits

0x735f,	// (0x0000ea3d) clock_digital_number_pane_cp02

0x736b,	// (0x0000ea49) clock_digital_number_pane_cp03_ParamLimits

0x736b,	// (0x0000ea49) clock_digital_number_pane_cp03

0x7377,	// (0x0000ea55) clock_digital_number_pane_cp04_ParamLimits

0x7377,	// (0x0000ea55) clock_digital_number_pane_cp04

0x7383,	// (0x0000ea61) clock_digital_separator_pane_ParamLimits

0x7383,	// (0x0000ea61) clock_digital_separator_pane

0x738f,	// (0x0000ea6d) popup_clock_digital_window_t1_ParamLimits

0x738f,	// (0x0000ea6d) popup_clock_digital_window_t1

0x8867,	// (0x0000ff45) clock_digital_number_pane_g1

0x8867,	// (0x0000ff45) clock_digital_number_pane_g2

0x0001,

0xf710,	// (0x00016dee) clock_digital_number_pane_g

0x8867,	// (0x0000ff45) clock_digital_separator_pane_g1

0x8867,	// (0x0000ff45) clock_digital_separator_pane_g2

0x0001,

0xf710,	// (0x00016dee) clock_digital_separator_pane_g

0x44a0,	// (0x0000bb7e) aid_fill_nsta_ParamLimits

0x45b7,	// (0x0000bc95) indicator_nsta_pane_ParamLimits

0xaf8f,	// (0x0001266d) popup_clock_analogue_window

0xaf8f,	// (0x0001266d) popup_clock_digital_window

0x9a5e,	// (0x0001113c) grid_indicator_nsta_pane_ParamLimits

0xe073,	// (0x00015751) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0001716e) clock_nsta_pane_t

0x72f8,	// (0x0000e9d6) aid_size_max_handle

0xc93a,	// (0x00014018) aid_size_min_handle

0xa4d1,	// (0x00011baf) editor_scroll_pane

0xec69,	// (0x00016347) ex_editor_pane

0x9a0b,	// (0x000110e9) scroll_pane_cp13

0x91c7,	// (0x000108a5) scroll_pane_cp14

0x9f29,	// (0x00011607) scroll_pane_cp36

0x3b9b,	// (0x0000b279) list_single_graphic_hl_pane_cp2_ParamLimits

0x3b9b,	// (0x0000b279) list_single_graphic_hl_pane_cp2

0x4e22,	// (0x0000c500) list_single_graphic_hl_pane_ParamLimits

0x4e22,	// (0x0000c500) list_single_graphic_hl_pane

0xec71,	// (0x0001634f) aid_size_min_hl_cp1

0xec7a,	// (0x00016358) list_highlight_pane_cp34_ParamLimits

0xec7a,	// (0x00016358) list_highlight_pane_cp34

0xec8b,	// (0x00016369) list_single_graphic_hl_pane_g1_ParamLimits

0xec8b,	// (0x00016369) list_single_graphic_hl_pane_g1

0x529e,	// (0x0000c97c) list_single_graphic_hl_pane_g2_ParamLimits

0x529e,	// (0x0000c97c) list_single_graphic_hl_pane_g2

0x529e,	// (0x0000c97c) list_single_graphic_hl_pane_g3_ParamLimits

0x529e,	// (0x0000c97c) list_single_graphic_hl_pane_g3

0x91db,	// (0x000108b9) list_single_graphic_hl_pane_g4_ParamLimits

0x91db,	// (0x000108b9) list_single_graphic_hl_pane_g4

0x976a,	// (0x00010e48) list_single_graphic_hl_pane_g5_ParamLimits

0x976a,	// (0x00010e48) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x000172b9) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x000172b9) list_single_graphic_hl_pane_g

0x52aa,	// (0x0000c988) list_single_graphic_hl_pane_t1_ParamLimits

0x52aa,	// (0x0000c988) list_single_graphic_hl_pane_t1

0xec98,	// (0x00016376) aid_size_min_hl_cp2

0xeca1,	// (0x0001637f) list_highlight_pane_cp34_cp2_ParamLimits

0xeca1,	// (0x0001637f) list_highlight_pane_cp34_cp2

0xec8b,	// (0x00016369) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xec8b,	// (0x00016369) list_single_graphic_hl_pane_g1_cp2

0xecae,	// (0x0001638c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xecae,	// (0x0001638c) list_single_graphic_hl_pane_g2_cp2

0xecba,	// (0x00016398) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xecba,	// (0x00016398) list_single_graphic_hl_pane_g3_cp2

0xa346,	// (0x00011a24) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xa346,	// (0x00011a24) list_single_graphic_hl_pane_g4_cp2

0xe8a7,	// (0x00015f85) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe8a7,	// (0x00015f85) list_single_graphic_hl_pane_g5_cp2

0xc964,	// (0x00014042) control_pane_g4_ParamLimits

0xc964,	// (0x00014042) control_pane_g4

0xa844,	// (0x00011f22) bg_popup_sub_pane_cp10_ParamLimits

0xe402,	// (0x00015ae0) list_choice_list_pane_ParamLimits

0xe411,	// (0x00015aef) scroll_pane_cp23

0x8cd5,	// (0x000103b3) bg_popup_preview_window_pane_cp02_ParamLimits

0xe8e3,	// (0x00015fc1) list_preview_fixed_pane_ParamLimits

0xe8f9,	// (0x00015fd7) list_preview_fixed_pane_cp_ParamLimits

0xe8f9,	// (0x00015fd7) list_preview_fixed_pane_cp

0xe905,	// (0x00015fe3) popup_preview_fixed_window_g1_ParamLimits

0xe905,	// (0x00015fe3) popup_preview_fixed_window_g1

0xe911,	// (0x00015fef) popup_preview_fixed_window_g2_ParamLimits

0xe911,	// (0x00015fef) popup_preview_fixed_window_g2

0x0002,

0xfb63,	// (0x00017241) popup_preview_fixed_window_g_ParamLimits

0xfb63,	// (0x00017241) popup_preview_fixed_window_g

0x7288,	// (0x0000e966) aid_navi_side_left_pane_ParamLimits

0x7298,	// (0x0000e976) aid_navi_side_right_pane_ParamLimits

0x72a7,	// (0x0000e985) navi_icon_pane_stacon_ParamLimits

0x72b7,	// (0x0000e995) navi_navi_pane_stacon_ParamLimits

0x72a7,	// (0x0000e985) navi_text_pane_stacon_ParamLimits

0x885d,	// (0x0000ff3b) main_text_info_pane

0xecdc,	// (0x000163ba) listscroll_text_info_pane

0xece4,	// (0x000163c2) list_text_info_pane_ParamLimits

0xece4,	// (0x000163c2) list_text_info_pane

0xecf3,	// (0x000163d1) scroll_pane_cp24_ParamLimits

0xecf3,	// (0x000163d1) scroll_pane_cp24

0x52c0,	// (0x0000c99e) list_text_info_pane_t1_ParamLimits

0x52c0,	// (0x0000c99e) list_text_info_pane_t1

0x3f29,	// (0x0000b607) popup_fast_swap2_window_ParamLimits

0x3f29,	// (0x0000b607) popup_fast_swap2_window

0xed11,	// (0x000163ef) aid_size_cell_fast2

0x885d,	// (0x0000ff3b) bg_popup_window_pane_cp17

0xb64e,	// (0x00012d2c) heading_pane_cp2

0x8f49,	// (0x00010627) listscroll_fast2_pane

0xed1b,	// (0x000163f9) grid_fast2_pane

0xed23,	// (0x00016401) listscroll_fast2_pane_g1

0xed2b,	// (0x00016409) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x000172c4) listscroll_fast2_pane_g

0x9a0b,	// (0x000110e9) scroll_pane_cp26

0xed33,	// (0x00016411) cell_fast2_pane_ParamLimits

0xed33,	// (0x00016411) cell_fast2_pane

0xed49,	// (0x00016427) cell_fast2_pane_g1

0xed52,	// (0x00016430) cell_fast2_pane_g2

0xed5b,	// (0x00016439) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x000172c9) cell_fast2_pane_g

0x9020,	// (0x000106fe) grid_highlight_pane_cp9

0x9035,	// (0x00010713) main_eswt_pane_ParamLimits

0x9035,	// (0x00010713) main_eswt_pane

0xed08,	// (0x000163e6) list_single_text_info_pane

0xed63,	// (0x00016441) eswt_ctrl_button_pane

0xed63,	// (0x00016441) eswt_ctrl_canvas_pane

0xed6b,	// (0x00016449) eswt_ctrl_combo_pane

0xed63,	// (0x00016441) eswt_ctrl_default_pane

0xed63,	// (0x00016441) eswt_ctrl_label_pane

0xed73,	// (0x00016451) eswt_ctrl_wait_pane

0xed7b,	// (0x00016459) eswt_shell_pane

0x885d,	// (0x0000ff3b) listscroll_eswt_app_pane

0xed97,	// (0x00016475) popup_eswt_tasktip_window_ParamLimits

0xed97,	// (0x00016475) popup_eswt_tasktip_window

0xb2bb,	// (0x00012999) bg_popup_window_pane_cp18

0xeda8,	// (0x00016486) eswt_control_pane_g1_ParamLimits

0xeda8,	// (0x00016486) eswt_control_pane_g1

0xedb5,	// (0x00016493) eswt_control_pane_g2_ParamLimits

0xedb5,	// (0x00016493) eswt_control_pane_g2

0xedc2,	// (0x000164a0) eswt_control_pane_g3_ParamLimits

0xedc2,	// (0x000164a0) eswt_control_pane_g3

0xedcf,	// (0x000164ad) eswt_control_pane_g4_ParamLimits

0xedcf,	// (0x000164ad) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x000172d0) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x000172d0) eswt_control_pane_g

0x9744,	// (0x00010e22) bg_button_pane_ParamLimits

0x9744,	// (0x00010e22) bg_button_pane

0x9035,	// (0x00010713) common_borders_pane_copy2_ParamLimits

0x9035,	// (0x00010713) common_borders_pane_copy2

0xeddc,	// (0x000164ba) control_button_pane_g1_ParamLimits

0xeddc,	// (0x000164ba) control_button_pane_g1

0xede8,	// (0x000164c6) control_button_pane_g2_ParamLimits

0xede8,	// (0x000164c6) control_button_pane_g2

0xedf4,	// (0x000164d2) control_button_pane_g3_ParamLimits

0xedf4,	// (0x000164d2) control_button_pane_g3

0x0002,

0xfbfb,	// (0x000172d9) control_button_pane_g_ParamLimits

0xfbfb,	// (0x000172d9) control_button_pane_g

0xee08,	// (0x000164e6) control_button_pane_t1

0xee16,	// (0x000164f4) control_button_pane_t2

0x0001,

0xfc02,	// (0x000172e0) control_button_pane_t

0xb199,	// (0x00012877) bg_button_pane_g1

0xb1a9,	// (0x00012887) bg_button_pane_g2

0xb1a1,	// (0x0001287f) bg_button_pane_g3

0xb1b9,	// (0x00012897) bg_button_pane_g4

0xb1b1,	// (0x0001288f) bg_button_pane_g5

0xb1c1,	// (0x0001289f) bg_button_pane_g6

0xb1c9,	// (0x000128a7) bg_button_pane_g7

0xb1d9,	// (0x000128b7) bg_button_pane_g8

0xb1d1,	// (0x000128af) bg_button_pane_g9

0x0008,

0xf85c,	// (0x00016f3a) bg_button_pane_g

0xe3bd,	// (0x00015a9b) common_borders_pane_ParamLimits

0xe3bd,	// (0x00015a9b) common_borders_pane

0xeda8,	// (0x00016486) eswt_control_pane_g1_copy1_ParamLimits

0xeda8,	// (0x00016486) eswt_control_pane_g1_copy1

0xedb5,	// (0x00016493) eswt_control_pane_g2_copy1_ParamLimits

0xedb5,	// (0x00016493) eswt_control_pane_g2_copy1

0xedc2,	// (0x000164a0) eswt_control_pane_g3_copy1_ParamLimits

0xedc2,	// (0x000164a0) eswt_control_pane_g3_copy1

0xedcf,	// (0x000164ad) eswt_control_pane_g4_copy1_ParamLimits

0xedcf,	// (0x000164ad) eswt_control_pane_g4_copy1

0xe3f8,	// (0x00015ad6) bg_eswt_ctrl_canvas_pane_g1

0xe3bd,	// (0x00015a9b) common_borders_pane_cp2_ParamLimits

0xe3bd,	// (0x00015a9b) common_borders_pane_cp2

0xe3bd,	// (0x00015a9b) common_borders_pane_cp3_ParamLimits

0xe3bd,	// (0x00015a9b) common_borders_pane_cp3

0xee24,	// (0x00016502) separator_horizontal_pane

0x9d3c,	// (0x0001141a) separator_vertical_pane

0xeda8,	// (0x00016486) eswt_control_pane_g1_copy2_ParamLimits

0xeda8,	// (0x00016486) eswt_control_pane_g1_copy2

0xedb5,	// (0x00016493) eswt_control_pane_g2_copy2_ParamLimits

0xedb5,	// (0x00016493) eswt_control_pane_g2_copy2

0xedc2,	// (0x000164a0) eswt_control_pane_g3_copy2_ParamLimits

0xedc2,	// (0x000164a0) eswt_control_pane_g3_copy2

0xedcf,	// (0x000164ad) eswt_control_pane_g4_copy2_ParamLimits

0xedcf,	// (0x000164ad) eswt_control_pane_g4_copy2

0x885d,	// (0x0000ff3b) common_borders_pane_cp4

0xee2c,	// (0x0001650a) separator_horizontal_pane_g1

0xee35,	// (0x00016513) separator_horizontal_pane_g2

0xee3e,	// (0x0001651c) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x000172e5) separator_horizontal_pane_g

0xeda8,	// (0x00016486) eswt_control_pane_g1_copy3_ParamLimits

0xeda8,	// (0x00016486) eswt_control_pane_g1_copy3

0xedb5,	// (0x00016493) eswt_control_pane_g2_copy3_ParamLimits

0xedb5,	// (0x00016493) eswt_control_pane_g2_copy3

0xedc2,	// (0x000164a0) eswt_control_pane_g3_copy3_ParamLimits

0xedc2,	// (0x000164a0) eswt_control_pane_g3_copy3

0xedcf,	// (0x000164ad) eswt_control_pane_g4_copy3_ParamLimits

0xedcf,	// (0x000164ad) eswt_control_pane_g4_copy3

0x885d,	// (0x0000ff3b) common_borders_pane_cp5

0xee47,	// (0x00016525) separator_vertical_pane_g1

0xee50,	// (0x0001652e) separator_vertical_pane_g2

0xee59,	// (0x00016537) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x000172ec) separator_vertical_pane_g

0xeda8,	// (0x00016486) eswt_control_pane_g1_copy4_ParamLimits

0xeda8,	// (0x00016486) eswt_control_pane_g1_copy4

0xedb5,	// (0x00016493) eswt_control_pane_g2_copy4_ParamLimits

0xedb5,	// (0x00016493) eswt_control_pane_g2_copy4

0xedc2,	// (0x000164a0) eswt_control_pane_g3_copy4_ParamLimits

0xedc2,	// (0x000164a0) eswt_control_pane_g3_copy4

0xedcf,	// (0x000164ad) eswt_control_pane_g4_copy4_ParamLimits

0xedcf,	// (0x000164ad) eswt_control_pane_g4_copy4

0x52db,	// (0x0000c9b9) eswt_ctrl_combo_button_pane

0x52e3,	// (0x0000c9c1) eswt_ctrl_input_pane

0x52eb,	// (0x0000c9c9) popup_choice_list_window_cp70

0x52f3,	// (0x0000c9d1) eswt_ctrl_input_pane_t1

0x885d,	// (0x0000ff3b) input_focus_pane_cp70

0xe3bd,	// (0x00015a9b) bg_button_pane_cp70_ParamLimits

0xe3bd,	// (0x00015a9b) bg_button_pane_cp70

0x5301,	// (0x0000c9df) eswt_ctrl_combo_button_pane_g1

0xee62,	// (0x00016540) wait_bar_pane_cp70

0xb2bb,	// (0x00012999) bg_popup_window_pane_cp70_ParamLimits

0xb2bb,	// (0x00012999) bg_popup_window_pane_cp70

0xee6a,	// (0x00016548) popup_eswt_tasktip_window_t1

0xee80,	// (0x0001655e) wait_bar_pane_cp71_ParamLimits

0xee80,	// (0x0001655e) wait_bar_pane_cp71

0xee8c,	// (0x0001656a) grid_eswt_app_pane

0x9d33,	// (0x00011411) scroll_pane_cp70

0x5309,	// (0x0000c9e7) cell_eswt_app_pane_ParamLimits

0x5309,	// (0x0000c9e7) cell_eswt_app_pane

0x5331,	// (0x0000ca0f) cell_eswt_app_pane_g1_ParamLimits

0x5331,	// (0x0000ca0f) cell_eswt_app_pane_g1

0x5360,	// (0x0000ca3e) cell_eswt_app_pane_g2_ParamLimits

0x5360,	// (0x0000ca3e) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x000172f3) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x000172f3) cell_eswt_app_pane_g

0x5389,	// (0x0000ca67) cell_eswt_app_pane_t1_ParamLimits

0x5389,	// (0x0000ca67) cell_eswt_app_pane_t1

0xee95,	// (0x00016573) grid_highlight_pane_cp70_ParamLimits

0xee95,	// (0x00016573) grid_highlight_pane_cp70

0x91db,	// (0x000108b9) set_content_pane_g1

0xa76d,	// (0x00011e4b) status_small_volume_pane

0x7fca,	// (0x0000f6a8) status_small_volume_pane_g1

0x7fd2,	// (0x0000f6b0) volume_small2_pane

0x7fdb,	// (0x0000f6b9) volume_small2_pane_g1

0x7fe4,	// (0x0000f6c2) volume_small2_pane_g2

0x7fed,	// (0x0000f6cb) volume_small2_pane_g3

0x7ff6,	// (0x0000f6d4) volume_small2_pane_g4

0x7fff,	// (0x0000f6dd) volume_small2_pane_g5

0x8008,	// (0x0000f6e6) volume_small2_pane_g6

0x8011,	// (0x0000f6ef) volume_small2_pane_g7

0x801a,	// (0x0000f6f8) volume_small2_pane_g8

0x8023,	// (0x0000f701) volume_small2_pane_g9

0x802c,	// (0x0000f70a) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x000172f8) volume_small2_pane_g

0xe73b,	// (0x00015e19) fep_vkb_top_text_pane_g1_ParamLimits

0x5226,	// (0x0000c904) fep_vkb_top_text_pane_t1_ParamLimits

0xe91d,	// (0x00015ffb) popup_preview_fixed_window_g3_ParamLimits

0xe91d,	// (0x00015ffb) popup_preview_fixed_window_g3

0x4449,	// (0x0000bb27) popup_toolbar_trans_pane

0x4c94,	// (0x0000c372) aid_height_set_list_ParamLimits

0xd62c,	// (0x00014d0a) aid_size_parent_ParamLimits

0xa844,	// (0x00011f22) list_highlight_pane_cp2_ParamLimits

0x91db,	// (0x000108b9) set_content_pane_g1_ParamLimits

0x4e35,	// (0x0000c513) list_single_image_pane_ParamLimits

0x4e35,	// (0x0000c513) list_single_image_pane

0x53bb,	// (0x0000ca99) aid_size_cell_image_ParamLimits

0x53bb,	// (0x0000ca99) aid_size_cell_image

0x53c8,	// (0x0000caa6) grid_single_image_pane_ParamLimits

0x53c8,	// (0x0000caa6) grid_single_image_pane

0x91db,	// (0x000108b9) list_single_image_pane_g1_ParamLimits

0x91db,	// (0x000108b9) list_single_image_pane_g1

0x976a,	// (0x00010e48) list_single_image_pane_g2_ParamLimits

0x976a,	// (0x00010e48) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0001730d) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0001730d) list_single_image_pane_g

0xdb01,	// (0x000151df) list_single_image_pane_t1_ParamLimits

0xdb01,	// (0x000151df) list_single_image_pane_t1

0x53d4,	// (0x0000cab2) cell_image_list_pane_ParamLimits

0x53d4,	// (0x0000cab2) cell_image_list_pane

0x53e8,	// (0x0000cac6) cell_image_list_pane_g1

0x53f1,	// (0x0000cacf) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x00017312) cell_image_list_pane_g

0xeea1,	// (0x0001657f) aid_size_cell_tb_trans_pane

0x9744,	// (0x00010e22) bg_tb_trans_pane

0xeeb3,	// (0x00016591) grid_tb_trans_pane

0xb199,	// (0x00012877) bg_tb_trans_pane_g1

0xb1a9,	// (0x00012887) bg_tb_trans_pane_g2

0xb1a1,	// (0x0001287f) bg_tb_trans_pane_g3

0xb1b9,	// (0x00012897) bg_tb_trans_pane_g4

0xb1b1,	// (0x0001288f) bg_tb_trans_pane_g5

0xb1d9,	// (0x000128b7) bg_tb_trans_pane_g6

0xb1d1,	// (0x000128af) bg_tb_trans_pane_g7

0xb1c1,	// (0x0001289f) bg_tb_trans_pane_g8

0xb1c9,	// (0x000128a7) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x00017317) bg_tb_trans_pane_g

0xeec7,	// (0x000165a5) cell_toolbar_trans_pane_ParamLimits

0xeec7,	// (0x000165a5) cell_toolbar_trans_pane

0xe3f8,	// (0x00015ad6) cell_toolbar_trans_pane_g1

0x5082,	// (0x0000c760) list_form2_midp_pane_t1

0x5090,	// (0x0000c76e) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x000171b4) list_form2_midp_pane_t

0xe141,	// (0x0001581f) scroll_pane_cp51_ParamLimits

0xe2ca,	// (0x000159a8) form2_midp_wait_pane_g1

0xe2d3,	// (0x000159b1) form2_midp_wait_pane_g2

0xe2dc,	// (0x000159ba) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x000171c9) form2_midp_wait_pane_g

0x8a2e,	// (0x0001010c) list_highlight_pane_cp21_ParamLimits

0xe2fc,	// (0x000159da) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe30b,	// (0x000159e9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd687,	// (0x00014d65) list_single_2graphic_im_pane_ParamLimits

0xd687,	// (0x00014d65) list_single_2graphic_im_pane

0x53fa,	// (0x0000cad8) list_single_2graphic_im_pane_g1_ParamLimits

0x53fa,	// (0x0000cad8) list_single_2graphic_im_pane_g1

0x540b,	// (0x0000cae9) list_single_2graphic_im_pane_g2_ParamLimits

0x540b,	// (0x0000cae9) list_single_2graphic_im_pane_g2

0x5417,	// (0x0000caf5) list_single_2graphic_im_pane_g3_ParamLimits

0x5417,	// (0x0000caf5) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0001732a) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0001732a) list_single_2graphic_im_pane_g

0x542b,	// (0x0000cb09) list_single_2graphic_im_pane_t1_ParamLimits

0x542b,	// (0x0000cb09) list_single_2graphic_im_pane_t1

0xe929,	// (0x00016007) list_single_graphic_2heading_pane_fp_ParamLimits

0xe929,	// (0x00016007) list_single_graphic_2heading_pane_fp

0xe9ea,	// (0x000160c8) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe9ea,	// (0x000160c8) list_single_graphic_2heading_pane_fp_g1

0xe9a7,	// (0x00016085) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe9a7,	// (0x00016085) list_single_graphic_2heading_pane_fp_g2

0x93dc,	// (0x00010aba) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x93dc,	// (0x00010aba) list_single_graphic_2heading_pane_fp_g3

0xe9b3,	// (0x00016091) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe9b3,	// (0x00016091) list_single_graphic_2heading_pane_fp_g4

0xe9c7,	// (0x000160a5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe9c7,	// (0x000160a5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb73,	// (0x00017251) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb73,	// (0x00017251) list_single_graphic_2heading_pane_fp_g

0xeef9,	// (0x000165d7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xeef9,	// (0x000165d7) list_single_graphic_2heading_pane_fp_t1

0xea22,	// (0x00016100) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xea22,	// (0x00016100) list_single_graphic_2heading_pane_fp_t2

0xef0f,	// (0x000165ed) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xef0f,	// (0x000165ed) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x00017333) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x00017333) list_single_graphic_2heading_pane_fp_t

0xe491,	// (0x00015b6f) fep_hwr_write_pane_g5_ParamLimits

0xe491,	// (0x00015b6f) fep_hwr_write_pane_g5

0xe49d,	// (0x00015b7b) fep_hwr_write_pane_g6_ParamLimits

0xe49d,	// (0x00015b7b) fep_hwr_write_pane_g6

0xed7b,	// (0x00016459) eswt_shell_pane_ParamLimits

0xb2bb,	// (0x00012999) bg_popup_window_pane_cp18_ParamLimits

0xd5d0,	// (0x00014cae) heading_pane_cp70

0xee6a,	// (0x00016548) popup_eswt_tasktip_window_t1_ParamLimits

0x44e4,	// (0x0000bbc2) aid_touch_tab_arrow_left

0x44f8,	// (0x0000bbd6) aid_touch_tab_arrow_right

0x31c2,	// (0x0000a8a0) title_pane_g3_ParamLimits

0x31c2,	// (0x0000a8a0) title_pane_g3

0x9642,	// (0x00010d20) set_value_pane_g1

0x4449,	// (0x0000bb27) popup_toolbar_trans_pane_ParamLimits

0xeea1,	// (0x0001657f) aid_size_cell_tb_trans_pane_ParamLimits

0x9744,	// (0x00010e22) bg_tb_trans_pane_ParamLimits

0xeeb3,	// (0x00016591) grid_tb_trans_pane_ParamLimits

0x8cd5,	// (0x000103b3) cont_note_pane_ParamLimits

0x8cd5,	// (0x000103b3) cont_note_pane

0x9035,	// (0x00010713) cont_snote2_single_text_pane_ParamLimits

0x9035,	// (0x00010713) cont_snote2_single_text_pane

0x9035,	// (0x00010713) cont_snote2_single_graphic_pane_ParamLimits

0x9035,	// (0x00010713) cont_snote2_single_graphic_pane

0xb858,	// (0x00012f36) cont_note_wait_pane_ParamLimits

0xb858,	// (0x00012f36) cont_note_wait_pane

0xb858,	// (0x00012f36) cont_note_image_pane_ParamLimits

0xb858,	// (0x00012f36) cont_note_image_pane

0xef25,	// (0x00016603) popup_note2_window_g1_ParamLimits

0xef25,	// (0x00016603) popup_note2_window_g1

0xef56,	// (0x00016634) popup_note2_window_t1_ParamLimits

0xef56,	// (0x00016634) popup_note2_window_t1

0xef9b,	// (0x00016679) popup_note2_window_t2_ParamLimits

0xef9b,	// (0x00016679) popup_note2_window_t2

0xefe0,	// (0x000166be) popup_note2_window_t3_ParamLimits

0xefe0,	// (0x000166be) popup_note2_window_t3

0xf025,	// (0x00016703) popup_note2_window_t4_ParamLimits

0xf025,	// (0x00016703) popup_note2_window_t4

0x8d59,	// (0x00010437) popup_note2_window_t5_ParamLimits

0x8d59,	// (0x00010437) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0001733f) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0001733f) popup_note2_window_t

0xf054,	// (0x00016732) popup_note2_image_window_g1_ParamLimits

0xf054,	// (0x00016732) popup_note2_image_window_g1

0xf060,	// (0x0001673e) popup_note2_image_window_g2_ParamLimits

0xf060,	// (0x0001673e) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0001734a) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0001734a) popup_note2_image_window_g

0xf072,	// (0x00016750) popup_note2_image_window_t1_ParamLimits

0xf072,	// (0x00016750) popup_note2_image_window_t1

0xf08a,	// (0x00016768) popup_note2_image_window_t2_ParamLimits

0xf08a,	// (0x00016768) popup_note2_image_window_t2

0xf0a2,	// (0x00016780) popup_note2_image_window_t3_ParamLimits

0xf0a2,	// (0x00016780) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0001734f) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0001734f) popup_note2_image_window_t

0xb866,	// (0x00012f44) popup_note2_wait_window_g1_ParamLimits

0xb866,	// (0x00012f44) popup_note2_wait_window_g1

0xb872,	// (0x00012f50) popup_note2_wait_window_g2_ParamLimits

0xb872,	// (0x00012f50) popup_note2_wait_window_g2

0xb87e,	// (0x00012f5c) popup_note2_wait_window_g3_ParamLimits

0xb87e,	// (0x00012f5c) popup_note2_wait_window_g3

0x0002,

0xf83e,	// (0x00016f1c) popup_note2_wait_window_g_ParamLimits

0xf83e,	// (0x00016f1c) popup_note2_wait_window_g

0xf0be,	// (0x0001679c) popup_note2_wait_window_t1_ParamLimits

0xf0be,	// (0x0001679c) popup_note2_wait_window_t1

0xf0dc,	// (0x000167ba) popup_note2_wait_window_t2_ParamLimits

0xf0dc,	// (0x000167ba) popup_note2_wait_window_t2

0xf0fa,	// (0x000167d8) popup_note2_wait_window_t3_ParamLimits

0xf0fa,	// (0x000167d8) popup_note2_wait_window_t3

0xf10c,	// (0x000167ea) popup_note2_wait_window_t4_ParamLimits

0xf10c,	// (0x000167ea) popup_note2_wait_window_t4

0x0003,

0xfc78,	// (0x00017356) popup_note2_wait_window_t_ParamLimits

0xfc78,	// (0x00017356) popup_note2_wait_window_t

0xf11e,	// (0x000167fc) wait_bar2_pane_ParamLimits

0xf11e,	// (0x000167fc) wait_bar2_pane

0xf136,	// (0x00016814) popup_snote2_single_text_window_g1_ParamLimits

0xf136,	// (0x00016814) popup_snote2_single_text_window_g1

0xf15e,	// (0x0001683c) popup_snote2_single_text_window_t1_ParamLimits

0xf15e,	// (0x0001683c) popup_snote2_single_text_window_t1

0xf1aa,	// (0x00016888) popup_snote2_single_text_window_t2_ParamLimits

0xf1aa,	// (0x00016888) popup_snote2_single_text_window_t2

0xf1f6,	// (0x000168d4) popup_snote2_single_text_window_t3_ParamLimits

0xf1f6,	// (0x000168d4) popup_snote2_single_text_window_t3

0xf237,	// (0x00016915) popup_snote2_single_text_window_t4_ParamLimits

0xf237,	// (0x00016915) popup_snote2_single_text_window_t4

0xf26d,	// (0x0001694b) popup_snote2_single_text_window_t5_ParamLimits

0xf26d,	// (0x0001694b) popup_snote2_single_text_window_t5

0x0004,

0xfc81,	// (0x0001735f) popup_snote2_single_text_window_t_ParamLimits

0xfc81,	// (0x0001735f) popup_snote2_single_text_window_t

0xf298,	// (0x00016976) popup_snote2_single_graphic_window_g1_ParamLimits

0xf298,	// (0x00016976) popup_snote2_single_graphic_window_g1

0xf2c0,	// (0x0001699e) popup_snote2_single_graphic_window_g2_ParamLimits

0xf2c0,	// (0x0001699e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8c,	// (0x0001736a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8c,	// (0x0001736a) popup_snote2_single_graphic_window_g

0xf2e8,	// (0x000169c6) popup_snote2_single_graphic_window_t1_ParamLimits

0xf2e8,	// (0x000169c6) popup_snote2_single_graphic_window_t1

0xf334,	// (0x00016a12) popup_snote2_single_graphic_window_t2_ParamLimits

0xf334,	// (0x00016a12) popup_snote2_single_graphic_window_t2

0xf1f6,	// (0x000168d4) popup_snote2_single_graphic_window_t3_ParamLimits

0xf1f6,	// (0x000168d4) popup_snote2_single_graphic_window_t3

0xf237,	// (0x00016915) popup_snote2_single_graphic_window_t4_ParamLimits

0xf237,	// (0x00016915) popup_snote2_single_graphic_window_t4

0xf26d,	// (0x0001694b) popup_snote2_single_graphic_window_t5_ParamLimits

0xf26d,	// (0x0001694b) popup_snote2_single_graphic_window_t5

0x0004,

0xfc91,	// (0x0001736f) popup_snote2_single_graphic_window_t_ParamLimits

0xfc91,	// (0x0001736f) popup_snote2_single_graphic_window_t

0xe0da,	// (0x000157b8) clock_nsta_pane_cp2_t1

0xe0da,	// (0x000157b8) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0001718a) clock_nsta_pane_cp2_t

0x975e,	// (0x00010e3c) form_field_data_wide_pane_g1_ParamLimits

0x91db,	// (0x000108b9) form_field_data_wide_pane_g2_ParamLimits

0x91db,	// (0x000108b9) form_field_data_wide_pane_g2

0x976a,	// (0x00010e48) form_field_data_wide_pane_g3_ParamLimits

0x976a,	// (0x00010e48) form_field_data_wide_pane_g3

0x0002,

0xf688,	// (0x00016d66) form_field_data_wide_pane_g_ParamLimits

0xf688,	// (0x00016d66) form_field_data_wide_pane_g

0x4fbd,	// (0x0000c69b) grid_touch_3_pane_ParamLimits

0x4fbd,	// (0x0000c69b) grid_touch_3_pane

0x545c,	// (0x0000cb3a) cell_touch_3_pane_ParamLimits

0x545c,	// (0x0000cb3a) cell_touch_3_pane

0xe3f8,	// (0x00015ad6) cell_touch_3_pane_g1

0xe3f8,	// (0x00015ad6) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0001720f) cell_touch_3_pane_g

0x8d8b,	// (0x00010469) cont_query_data_pane

0x8d93,	// (0x00010471) cont_query_data_pane_cp1

0xf380,	// (0x00016a5e) button_value_adjust_pane_cp7

0xf388,	// (0x00016a66) query_popup_pane_cp3

0x9fad,	// (0x0001168b) bg_popup_sub_pane_cp22_ParamLimits

0x73ae,	// (0x0000ea8c) navi_navi_volume_pane_cp2

0x73c6,	// (0x0000eaa4) popup_side_volume_key_window_g2

0x73d2,	// (0x0000eab0) popup_side_volume_key_window_g3

0x0002,

0xf71a,	// (0x00016df8) popup_side_volume_key_window_g

0x73ec,	// (0x0000eaca) popup_side_volume_key_window_t2

0x0001,

0xf721,	// (0x00016dff) popup_side_volume_key_window_t

0xa2c9,	// (0x000119a7) popup_side_volume_key_window_ParamLimits

0x3665,	// (0x0000ad43) list_double_graphic_pane_g4_ParamLimits

0x3665,	// (0x0000ad43) list_double_graphic_pane_g4

0x4e0d,	// (0x0000c4eb) list_single_2heading_msg_pane_ParamLimits

0x4e0d,	// (0x0000c4eb) list_single_2heading_msg_pane

0x54a3,	// (0x0000cb81) list_single_2heading_msg_pane_g1_ParamLimits

0x54a3,	// (0x0000cb81) list_single_2heading_msg_pane_g1

0x54af,	// (0x0000cb8d) list_single_2heading_msg_pane_g2_ParamLimits

0x54af,	// (0x0000cb8d) list_single_2heading_msg_pane_g2

0x54c2,	// (0x0000cba0) list_single_2heading_msg_pane_g3_ParamLimits

0x54c2,	// (0x0000cba0) list_single_2heading_msg_pane_g3

0xf3a1,	// (0x00016a7f) list_single_2heading_msg_pane_g4_ParamLimits

0xf3a1,	// (0x00016a7f) list_single_2heading_msg_pane_g4

0x0003,

0xfc9c,	// (0x0001737a) list_single_2heading_msg_pane_g_ParamLimits

0xfc9c,	// (0x0001737a) list_single_2heading_msg_pane_g

0x54ce,	// (0x0000cbac) list_single_2heading_msg_pane_t1_ParamLimits

0x54ce,	// (0x0000cbac) list_single_2heading_msg_pane_t1

0x54f6,	// (0x0000cbd4) list_single_2heading_msg_pane_t2_ParamLimits

0x54f6,	// (0x0000cbd4) list_single_2heading_msg_pane_t2

0x5561,	// (0x0000cc3f) list_single_2heading_msg_pane_t3_ParamLimits

0x5561,	// (0x0000cc3f) list_single_2heading_msg_pane_t3

0xf3b9,	// (0x00016a97) list_single_2heading_msg_pane_t4_ParamLimits

0xf3b9,	// (0x00016a97) list_single_2heading_msg_pane_t4

0x0003,

0xfca5,	// (0x00017383) list_single_2heading_msg_pane_t_ParamLimits

0xfca5,	// (0x00017383) list_single_2heading_msg_pane_t

0x8982,	// (0x00010060) title_pane_g4_ParamLimits

0x8982,	// (0x00010060) title_pane_g4

0x71fe,	// (0x0000e8dc) title_pane_stacon_g3_ParamLimits

0x71fe,	// (0x0000e8dc) title_pane_stacon_g3

0xeeed,	// (0x000165cb) list_single_2graphic_im_pane_g4_ParamLimits

0xeeed,	// (0x000165cb) list_single_2graphic_im_pane_g4

0xd3e6,	// (0x00014ac4) popup_side_volume_key_window_cp

0xd866,	// (0x00014f44) main_idle_act2_pane_t1

0x77b4,	// (0x0000ee92) toolbar_button_pane_g10

0x3552,	// (0x0000ac30) popup_toolbar_window_cp1

0xe0cb,	// (0x000157a9) clock_nsta_pane_cp_t1

0xe0cb,	// (0x000157a9) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x00017185) clock_nsta_pane_cp_t

0x73ae,	// (0x0000ea8c) navi_navi_volume_pane_cp2_ParamLimits

0x73ba,	// (0x0000ea98) popup_side_volume_key_window_g1_ParamLimits

0x73c6,	// (0x0000eaa4) popup_side_volume_key_window_g2_ParamLimits

0x73d2,	// (0x0000eab0) popup_side_volume_key_window_g3_ParamLimits

0xf71a,	// (0x00016df8) popup_side_volume_key_window_g_ParamLimits

0x7c4a,	// (0x0000f328) fep_hwr_aid_pane

0x7ceb,	// (0x0000f3c9) bg_fep_hwr_top_pane_g4_ParamLimits

0xe461,	// (0x00015b3f) fep_hwr_top_pane_g1_ParamLimits

0xe473,	// (0x00015b51) fep_hwr_top_pane_g2_ParamLimits

0x7d0b,	// (0x0000f3e9) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x000171da) fep_hwr_top_pane_g_ParamLimits

0x7d20,	// (0x0000f3fe) fep_hwr_top_text_pane_ParamLimits

0xd1e6,	// (0x000148c4) aid_touch_tab_arrow_arrow_2

0xd1ef,	// (0x000148cd) aid_touch_tab_arrow_left_2

0x7c5e,	// (0x0000f33c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7c91,	// (0x0000f36f) fep_hwr_prediction_pane

0xe5a6,	// (0x00015c84) fep_vkb_prediction_pane

0x5206,	// (0x0000c8e4) fep_vkb_side_pane_g3_ParamLimits

0x5206,	// (0x0000c8e4) fep_vkb_side_pane_g3

0x7e8f,	// (0x0000f56d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7ef9,	// (0x0000f5d7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7f06,	// (0x0000f5e4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbab,	// (0x00017289) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8035,	// (0x0000f713) fep_hwr_prediction_pane_g1

0x803f,	// (0x0000f71d) fep_hwr_prediction_pane_g2

0x8047,	// (0x0000f725) fep_hwr_prediction_pane_g3

0x804f,	// (0x0000f72d) fep_hwr_prediction_pane_g4

0x0003,

0xfcae,	// (0x0001738c) fep_hwr_prediction_pane_g

0xf3de,	// (0x00016abc) fep_vkb_prediction_pane_g1

0xf3e8,	// (0x00016ac6) fep_vkb_prediction_pane_g2

0xf3f0,	// (0x00016ace) fep_vkb_prediction_pane_g3

0xf3f8,	// (0x00016ad6) fep_vkb_prediction_pane_g4

0x0003,

0xfcb7,	// (0x00017395) fep_vkb_prediction_pane_g

0x7a82,	// (0x0000f160) slider_set_pane_g3

0x7a96,	// (0x0000f174) slider_set_pane_g4

0x7aae,	// (0x0000f18c) slider_set_pane_g5

0x7a82,	// (0x0000f160) slider_set_pane_g6

0xcc1d,	// (0x000142fb) slider_set_pane_g7

0xd64f,	// (0x00014d2d) slider_form_pane_g3

0xd658,	// (0x00014d36) slider_form_pane_g4

0xd660,	// (0x00014d3e) slider_form_pane_g5

0xd64f,	// (0x00014d2d) slider_form_pane_g6

0x4dc6,	// (0x0000c4a4) slider_form_pane_g7

0xdaae,	// (0x0001518c) slider_set_pane_vc_g3

0xdab7,	// (0x00015195) slider_set_pane_vc_g4

0xdac0,	// (0x0001519e) slider_set_pane_vc_g5

0xdaae,	// (0x0001518c) slider_set_pane_vc_g6

0xdac9,	// (0x000151a7) slider_set_pane_vc_g7

0xdaae,	// (0x0001518c) slider_form_pane_vc_g1

0xdab7,	// (0x00015195) slider_form_pane_vc_g2

0xdac0,	// (0x0001519e) slider_form_pane_vc_g3

0xdaae,	// (0x0001518c) slider_form_pane_vc_g4

0xde67,	// (0x00015545) slider_form_pane_vc_g5

0x0004,

0xfa80,	// (0x0001715e) slider_form_pane_vc_g

0x885d,	// (0x0000ff3b) main_idle_act3_pane

0xf400,	// (0x00016ade) ai3_links_pane

0x55cf,	// (0x0000ccad) popup_ai3_data_window_ParamLimits

0x55cf,	// (0x0000ccad) popup_ai3_data_window

0x885d,	// (0x0000ff3b) grid_ai3_links_pane

0x55e7,	// (0x0000ccc5) cell_ai3_links_pane_ParamLimits

0x55e7,	// (0x0000ccc5) cell_ai3_links_pane

0xf409,	// (0x00016ae7) bg_popup_sub_pane_cp11

0xf416,	// (0x00016af4) cell_ai3_links_pane_g1

0x885d,	// (0x0000ff3b) bg_popup_sub_pane_cp12

0xf43b,	// (0x00016b19) heading_ai3_data_pane

0xf443,	// (0x00016b21) list_ai3_gene_pane

0xf44f,	// (0x00016b2d) popup_ai3_data_window_g1

0xf457,	// (0x00016b35) heading_ai3_data_pane_g1

0xf45f,	// (0x00016b3d) heading_ai3_data_pane_t1

0xf46d,	// (0x00016b4b) list_double_ai3_gene_pane_ParamLimits

0xf46d,	// (0x00016b4b) list_double_ai3_gene_pane

0xf47a,	// (0x00016b58) list_single_ai3_gene_pane_ParamLimits

0xf47a,	// (0x00016b58) list_single_ai3_gene_pane

0xe3bd,	// (0x00015a9b) list_highlight_pane_cp7_ParamLimits

0xe3bd,	// (0x00015a9b) list_highlight_pane_cp7

0xf487,	// (0x00016b65) list_single_a13_gene_pane_t1_ParamLimits

0xf487,	// (0x00016b65) list_single_a13_gene_pane_t1

0xf49e,	// (0x00016b7c) list_single_ai3_gene_pane_g1

0xf4a7,	// (0x00016b85) list_single_ai3_gene_pane_g2

0x0001,

0xfcc0,	// (0x0001739e) list_single_ai3_gene_pane_g

0xf4af,	// (0x00016b8d) list_double_ai3_gene_pane_g1_ParamLimits

0xf4af,	// (0x00016b8d) list_double_ai3_gene_pane_g1

0xf4bb,	// (0x00016b99) list_double_ai3_gene_pane_t1_ParamLimits

0xf4bb,	// (0x00016b99) list_double_ai3_gene_pane_t1

0xf4d7,	// (0x00016bb5) list_double_ai3_gene_pane_t2_ParamLimits

0xf4d7,	// (0x00016bb5) list_double_ai3_gene_pane_t2

0xf4ec,	// (0x00016bca) list_double_ai3_gene_pane_t3_ParamLimits

0xf4ec,	// (0x00016bca) list_double_ai3_gene_pane_t3

0x0002,

0xfcc5,	// (0x000173a3) list_double_ai3_gene_pane_t_ParamLimits

0xfcc5,	// (0x000173a3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf399,	// (0x00016a77) aid_size_min_col_2

0x548f,	// (0x0000cb6d) aid_size_min_msg_ParamLimits

0x548f,	// (0x0000cb6d) aid_size_min_msg

0x521a,	// (0x0000c8f8) fep_vkb_top_text_pane_g2_ParamLimits

0x521a,	// (0x0000c8f8) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0001720a) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0001720a) fep_vkb_top_text_pane_g

0x885d,	// (0x0000ff3b) main_hc_apps_shell_pane

0xf509,	// (0x00016be7) grid_hc_apps_pane_ParamLimits

0xf509,	// (0x00016be7) grid_hc_apps_pane

0xf518,	// (0x00016bf6) list_hc_apps_pane

0xf520,	// (0x00016bfe) scroll_pane_cp37_ParamLimits

0xf520,	// (0x00016bfe) scroll_pane_cp37

0x55fd,	// (0x0000ccdb) cell_hc_apps_pane_ParamLimits

0x55fd,	// (0x0000ccdb) cell_hc_apps_pane

0x5697,	// (0x0000cd75) cell_hc_apps_pane_g1_ParamLimits

0x5697,	// (0x0000cd75) cell_hc_apps_pane_g1

0xf52c,	// (0x00016c0a) cell_hc_apps_pane_g2_ParamLimits

0xf52c,	// (0x00016c0a) cell_hc_apps_pane_g2

0xf548,	// (0x00016c26) cell_hc_apps_pane_g3_ParamLimits

0xf548,	// (0x00016c26) cell_hc_apps_pane_g3

0x0002,

0xfccc,	// (0x000173aa) cell_hc_apps_pane_g_ParamLimits

0xfccc,	// (0x000173aa) cell_hc_apps_pane_g

0x56c4,	// (0x0000cda2) cell_hc_apps_pane_t1_ParamLimits

0x56c4,	// (0x0000cda2) cell_hc_apps_pane_t1

0x8cd5,	// (0x000103b3) grid_highlight_pane_cp10_ParamLimits

0x8cd5,	// (0x000103b3) grid_highlight_pane_cp10

0x5702,	// (0x0000cde0) list_single_hc_apps_pane_ParamLimits

0x5702,	// (0x0000cde0) list_single_hc_apps_pane

0x572e,	// (0x0000ce0c) list_single_hc_apps_pane_g1

0x5747,	// (0x0000ce25) list_single_hc_apps_pane_g2

0x0001,

0xfcd3,	// (0x000173b1) list_single_hc_apps_pane_g

0x5760,	// (0x0000ce3e) list_single_hc_apps_pane_g2_copy1

0x577c,	// (0x0000ce5a) list_single_hc_apps_pane_t1

0x8a2e,	// (0x0001010c) bg_set_opt_pane_cp_ParamLimits

0x714c,	// (0x0000e82a) setting_slider_pane_t1_ParamLimits

0xc8e4,	// (0x00013fc2) setting_slider_pane_t2_ParamLimits

0xc8fd,	// (0x00013fdb) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00016c58) setting_slider_pane_t_ParamLimits

0x7192,	// (0x0000e870) slider_set_pane_ParamLimits

0x762f,	// (0x0000ed0d) control_pane_g5_ParamLimits

0x762f,	// (0x0000ed0d) control_pane_g5

0xd617,	// (0x00014cf5) slider_set_pane_g1_ParamLimits

0x7a76,	// (0x0000f154) slider_set_pane_g2_ParamLimits

0x7a82,	// (0x0000f160) slider_set_pane_g3_ParamLimits

0x7a96,	// (0x0000f174) slider_set_pane_g4_ParamLimits

0x7aae,	// (0x0000f18c) slider_set_pane_g5_ParamLimits

0x7a82,	// (0x0000f160) slider_set_pane_g6_ParamLimits

0xcc1d,	// (0x000142fb) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x00017038) slider_set_pane_g_ParamLimits

0x8a2e,	// (0x0001010c) navi_icon_text_pane_ParamLimits

0x44b6,	// (0x0000bb94) aid_fill_nsta_2_ParamLimits

0x44e4,	// (0x0000bbc2) aid_touch_tab_arrow_left_ParamLimits

0x44f8,	// (0x0000bbd6) aid_touch_tab_arrow_right_ParamLimits

0x4594,	// (0x0000bc72) clock_nsta_pane_ParamLimits

0xd1c8,	// (0x000148a6) navi_icon_pane_g1_ParamLimits

0xd1d4,	// (0x000148b2) navi_text_pane_t1_ParamLimits

0xe11b,	// (0x000157f9) navi_icon_text_pane_g1_ParamLimits

0xe127,	// (0x00015805) navi_icon_text_pane_t1_ParamLimits

0x572e,	// (0x0000ce0c) list_single_hc_apps_pane_g1_ParamLimits

0x5747,	// (0x0000ce25) list_single_hc_apps_pane_g2_ParamLimits

0xfcd3,	// (0x000173b1) list_single_hc_apps_pane_g_ParamLimits

0x5760,	// (0x0000ce3e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x577c,	// (0x0000ce5a) list_single_hc_apps_pane_t1_ParamLimits

0xc871,	// (0x00013f4f) popup_toolbar2_fixed_window_ParamLimits

0xc871,	// (0x00013f4f) popup_toolbar2_fixed_window

0x4441,	// (0x0000bb1f) popup_toolbar2_float_window

0x885d,	// (0x0000ff3b) bg_popup_sub_pane_cp27

0x0041,	// (0x0000771f) grid_toolbar2_float_pane

0x885d,	// (0x0000ff3b) bg_popup_sub_pane_cp26

0x0041,	// (0x0000771f) grid_toolbar2_fixed_pane

0x57aa,	// (0x0000ce88) cell_toolbar2_fixed_pane_ParamLimits

0x57aa,	// (0x0000ce88) cell_toolbar2_fixed_pane

0x57c5,	// (0x0000cea3) cell_toolbar2_fixed_pane_g1

0x0063,	// (0x00007741) toolbar2_fixed_button_pane

0xb199,	// (0x00012877) toolbar2_fixed_button_pane_g1

0xb1a9,	// (0x00012887) toolbar2_fixed_button_pane_g2

0xb1a1,	// (0x0001287f) toolbar2_fixed_button_pane_g3

0xb1b9,	// (0x00012897) toolbar2_fixed_button_pane_g4

0xb1b1,	// (0x0001288f) toolbar2_fixed_button_pane_g5

0xb1c1,	// (0x0001289f) toolbar2_fixed_button_pane_g6

0xb1c9,	// (0x000128a7) toolbar2_fixed_button_pane_g7

0xb1d9,	// (0x000128b7) toolbar2_fixed_button_pane_g8

0xb1d1,	// (0x000128af) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x00016f3a) toolbar2_fixed_button_pane_g

0x006b,	// (0x00007749) cell_toolbar2_float_pane_ParamLimits

0x006b,	// (0x00007749) cell_toolbar2_float_pane

0x007c,	// (0x0000775a) cell_toolbar2_float_pane_g1

0x0063,	// (0x00007741) toolbar2_fixed_button_pane_cp

0x51cf,	// (0x0000c8ad) fep_vkb_accented_list_pane_ParamLimits

0x51cf,	// (0x0000c8ad) fep_vkb_accented_list_pane

0x7e6f,	// (0x0000f54d) bg_popup_fep_shadow_pane_g9

0xa4d1,	// (0x00011baf) bg_popup_fep_shadow_pane_cp3

0x99f2,	// (0x000110d0) list_accented_list_pane

0x0085,	// (0x00007763) list_single_accented_list_pane_ParamLimits

0x0085,	// (0x00007763) list_single_accented_list_pane

0xa4d1,	// (0x00011baf) list_highlight_pane_cp10

0x0096,	// (0x00007774) list_single_accented_list_pane_t1

0x4383,	// (0x0000ba61) popup_slider_window_ParamLimits

0x4383,	// (0x0000ba61) popup_slider_window

0xf390,	// (0x00016a6e) aid_indentation_list_msg

0x58a4,	// (0x0000cf82) bg_popup_window_pane_cp19

0x019a,	// (0x00007878) popup_slider_window_g1

0x01b6,	// (0x00007894) popup_slider_window_g2

0x01d2,	// (0x000078b0) popup_slider_window_g3

0x0005,

0xfcd8,	// (0x000173b6) popup_slider_window_g

0x022e,	// (0x0000790c) popup_slider_window_t1

0x02a0,	// (0x0000797e) small_volume_slider_vertical_pane

0xe3f8,	// (0x00015ad6) small_volume_slider_vertical_pane_g1

0xe3f8,	// (0x00015ad6) small_volume_slider_vertical_pane_g2

0x02bc,	// (0x0000799a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcea,	// (0x000173c8) small_volume_slider_vertical_pane_g

0xc7f5,	// (0x00013ed3) area_side_right_pane_ParamLimits

0xc7f5,	// (0x00013ed3) area_side_right_pane

0xcc80,	// (0x0001435e) aid_size_side_button_ParamLimits

0xcc80,	// (0x0001435e) aid_size_side_button

0xcc99,	// (0x00014377) grid_sctrl_middle_pane_ParamLimits

0xcc99,	// (0x00014377) grid_sctrl_middle_pane

0x8087,	// (0x0000f765) sctrl_sk_bottom_pane

0x8098,	// (0x0000f776) sctrl_sk_top_pane

0x80aa,	// (0x0000f788) aid_touch_sctrl_top

0x80b7,	// (0x0000f795) bg_sctrl_sk_pane_ParamLimits

0x80b7,	// (0x0000f795) bg_sctrl_sk_pane

0x80c5,	// (0x0000f7a3) sctrl_sk_top_pane_g1

0x80d2,	// (0x0000f7b0) sctrl_sk_top_pane_t1

0x80aa,	// (0x0000f788) aid_touch_sctrl_bottom

0x80b7,	// (0x0000f795) bg_sctrl_sk_pane_cp_ParamLimits

0x80b7,	// (0x0000f795) bg_sctrl_sk_pane_cp

0x80ed,	// (0x0000f7cb) sctrl_sk_bottom_pane_g1

0x80d2,	// (0x0000f7b0) sctrl_sk_bottom_pane_t1

0xccaf,	// (0x0001438d) cell_sctrl_middle_pane_ParamLimits

0xccaf,	// (0x0001438d) cell_sctrl_middle_pane

0xccc0,	// (0x0001439e) aid_touch_sctrl_middle_ParamLimits

0xccc0,	// (0x0001439e) aid_touch_sctrl_middle

0xcccd,	// (0x000143ab) bg_sctrl_middle_pane_ParamLimits

0xcccd,	// (0x000143ab) bg_sctrl_middle_pane

0x86f5,	// (0x0000fdd3) cell_sctrl_middle_pane_g1_ParamLimits

0x86f5,	// (0x0000fdd3) cell_sctrl_middle_pane_g1

0xccdb,	// (0x000143b9) cell_sctrl_middle_pane_g2_ParamLimits

0xccdb,	// (0x000143b9) cell_sctrl_middle_pane_g2

0x0001,

0xfcf6,	// (0x000173d4) cell_sctrl_middle_pane_g_ParamLimits

0xfcf6,	// (0x000173d4) cell_sctrl_middle_pane_g

0xb199,	// (0x00012877) bg_sctrl_middle_pane_g1

0xb1a1,	// (0x0001287f) bg_sctrl_middle_pane_g2

0xb1a9,	// (0x00012887) bg_sctrl_middle_pane_g3

0xb1b1,	// (0x0001288f) bg_sctrl_middle_pane_g4

0xb1b9,	// (0x00012897) bg_sctrl_middle_pane_g5

0xb1c1,	// (0x0001289f) bg_sctrl_middle_pane_g6

0xb1c9,	// (0x000128a7) bg_sctrl_middle_pane_g7

0xb1d1,	// (0x000128af) bg_sctrl_middle_pane_g8

0x0007,

0xfcfb,	// (0x000173d9) bg_sctrl_middle_pane_g

0xb1d9,	// (0x000128b7) bg_sctrl_middle_pane_g8_copy1

0xb199,	// (0x00012877) bg_sctrl_sk_pane_g1

0xb1a9,	// (0x00012887) bg_sctrl_sk_pane_g2

0xb1a1,	// (0x0001287f) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x00016f3a) bg_sctrl_sk_pane_g

0x9157,	// (0x00010835) aid_size_touch_scroll_bar

0xb1b9,	// (0x00012897) bg_sctrl_sk_pane_g4

0xb1b1,	// (0x0001288f) bg_sctrl_sk_pane_g5

0xb1c1,	// (0x0001289f) bg_sctrl_sk_pane_g6

0xb1c9,	// (0x000128a7) bg_sctrl_sk_pane_g7

0xb1d9,	// (0x000128b7) bg_sctrl_sk_pane_g8

0xb1d1,	// (0x000128af) bg_sctrl_sk_pane_g9

0xa8e2,	// (0x00011fc0) popup_fep_china_hwr2_fs_candidate_window

0x3f7e,	// (0x0000b65c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x3f7e,	// (0x0000b65c) popup_fep_china_hwr2_fs_control_window

0x7e8f,	// (0x0000f56d) sctrl_sk_top_pane_g2

0x0001,

0xfcf1,	// (0x000173cf) sctrl_sk_top_pane_g

0x59c4,	// (0x0000d0a2) aid_fep_china_hwr2_fs_cell_ParamLimits

0x59c4,	// (0x0000d0a2) aid_fep_china_hwr2_fs_cell

0x59d8,	// (0x0000d0b6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x59d8,	// (0x0000d0b6) bg_popup_fep_shadow_pane_cp4

0x59ef,	// (0x0000d0cd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x59ef,	// (0x0000d0cd) bg_popup_fep_shadow_pane_cp5

0x5a01,	// (0x0000d0df) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x5a01,	// (0x0000d0df) popup_fep_china_hwr2_fs_control_bar_grid

0x5a15,	// (0x0000d0f3) popup_fep_china_hwr2_fs_control_funtion_grid

0x03ea,	// (0x00007ac8) aid_fep_china_hwr2_fs_candi_cell

0x885d,	// (0x0000ff3b) bg_popup_fep_shadow_pane_cp6

0x03f4,	// (0x00007ad2) popup_fep_china_hwr2_fs_candidate_grid

0x5a1d,	// (0x0000d0fb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x5a1d,	// (0x0000d0fb) cell_fep_china_hwr2_fs_funtion_grid

0xe3f8,	// (0x00015ad6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x0414,	// (0x00007af2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x0414,	// (0x00007af2) cell_fep_china_hwr2_fs_funtion_grid_g1

0x0422,	// (0x00007b00) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x0422,	// (0x00007b00) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0c,	// (0x000173ea) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0c,	// (0x000173ea) cell_fep_china_hwr2_fs_funtion_grid_g

0x5a35,	// (0x0000d113) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x5a35,	// (0x0000d113) cell_fep_china_hwr2_fs_funtion_grid_t1

0x5a4a,	// (0x0000d128) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x5a4a,	// (0x0000d128) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd11,	// (0x000173ef) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd11,	// (0x000173ef) cell_fep_china_hwr2_fs_funtion_grid_t

0x0469,	// (0x00007b47) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x0471,	// (0x00007b4f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x0479,	// (0x00007b57) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd16,	// (0x000173f4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x0481,	// (0x00007b5f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x0481,	// (0x00007b5f) cell_fep_china_hwr2_fs_candidate_grid

0x049a,	// (0x00007b78) popup_fep_china_hwr2_fs_candidate_grid_g20

0x04a2,	// (0x00007b80) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe3f8,	// (0x00015ad6) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe3f8,	// (0x00015ad6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0001720f) cell_fep_china_hwr2_fs_candidate_grid_g

0x04aa,	// (0x00007b88) cell_fep_china_hwr2_fs_candidate_grid_t1

0xadbf,	// (0x0001249d) clock_nsta_pane_cp_24_ParamLimits

0xadbf,	// (0x0001249d) clock_nsta_pane_cp_24

0xae32,	// (0x00012510) indicator_nsta_pane_cp_24_ParamLimits

0xae32,	// (0x00012510) indicator_nsta_pane_cp_24

0xd0d3,	// (0x000147b1) heading_pane_g1

0x0001,

0xf8c1,	// (0x00016f9f) heading_pane_g

0x4ee5,	// (0x0000c5c3) grid_sct_catagory_button_pane

0xd087,	// (0x00014765) scroll_pane_cp5_ParamLimits

0xe14d,	// (0x0001582b) button_value_adjust_pane_cp5_ParamLimits

0xe14d,	// (0x0001582b) button_value_adjust_pane_cp5

0xe20b,	// (0x000158e9) form2_midp_time_pane_ParamLimits

0x04b8,	// (0x00007b96) cell_sct_catagory_button_pane_ParamLimits

0x04b8,	// (0x00007b96) cell_sct_catagory_button_pane

0xe3bd,	// (0x00015a9b) bg_button_pane_cp01_ParamLimits

0xe3bd,	// (0x00015a9b) bg_button_pane_cp01

0xe3f8,	// (0x00015ad6) cell_sct_catagory_button_pane_g1

0x43f2,	// (0x0000bad0) popup_tb_extension_window

0x5a66,	// (0x0000d144) aid_size_cell_ext_ParamLimits

0x5a66,	// (0x0000d144) aid_size_cell_ext

0x9035,	// (0x00010713) bg_tb_trans_pane_cp1_ParamLimits

0x9035,	// (0x00010713) bg_tb_trans_pane_cp1

0x5a8c,	// (0x0000d16a) grid_tb_ext_pane_ParamLimits

0x5a8c,	// (0x0000d16a) grid_tb_ext_pane

0x5ac2,	// (0x0000d1a0) cell_tb_ext_pane_ParamLimits

0x5ac2,	// (0x0000d1a0) cell_tb_ext_pane

0x5ae6,	// (0x0000d1c4) cell_tb_ext_pane_g1_ParamLimits

0x5ae6,	// (0x0000d1c4) cell_tb_ext_pane_g1

0x0542,	// (0x00007c20) cell_tb_ext_pane_t1

0x8cd5,	// (0x000103b3) list_highlight_pane_cp11_ParamLimits

0x8cd5,	// (0x000103b3) list_highlight_pane_cp11

0x709d,	// (0x0000e77b) popup_uni_indicator_window_ParamLimits

0x709d,	// (0x0000e77b) popup_uni_indicator_window

0x9744,	// (0x00010e22) bg_popup_sub_pane_cp14

0x055d,	// (0x00007c3b) list_uniindi_pane

0x0569,	// (0x00007c47) uniindi_top_pane

0x8cd5,	// (0x000103b3) bg_uniindi_top_pane

0x0588,	// (0x00007c66) uniindi_top_pane_g1

0x059e,	// (0x00007c7c) uniindi_top_pane_g2

0x0003,

0xfd1d,	// (0x000173fb) uniindi_top_pane_g

0x05c8,	// (0x00007ca6) uniindi_top_pane_t1

0x05f2,	// (0x00007cd0) list_single_uniindi_pane_ParamLimits

0x05f2,	// (0x00007cd0) list_single_uniindi_pane

0xe3f8,	// (0x00015ad6) bg_uniindi_top_pane_g1

0x0604,	// (0x00007ce2) list_single_uniindi_pane_g1

0x0617,	// (0x00007cf5) list_single_uniindi_pane_t1

0x6f3b,	// (0x0000e619) control_bg_pane

0x063c,	// (0x00007d1a) bg_sctrl_sk_pane_cp1

0x0645,	// (0x00007d23) bg_sctrl_sk_pane_cp2

0x064e,	// (0x00007d2c) control_bg_pane_g1

0x0657,	// (0x00007d35) control_bg_pane_g2

0x0001,

0xfd26,	// (0x00017404) control_bg_pane_g

0xe00e,	// (0x000156ec) cell_indicator_nsta_pane_g1_ParamLimits

0x4ff0,	// (0x0000c6ce) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x00017173) cell_indicator_nsta_pane_g_ParamLimits

0xe273,	// (0x00015951) form2_midp_time_pane_t1_ParamLimits

0xe419,	// (0x00015af7) main_idle_act4_pane_ParamLimits

0xe419,	// (0x00015af7) main_idle_act4_pane

0x43f2,	// (0x0000bad0) popup_tb_extension_window_ParamLimits

0x5aac,	// (0x0000d18a) tb_ext_find_pane_ParamLimits

0x5aac,	// (0x0000d18a) tb_ext_find_pane

0x0660,	// (0x00007d3e) ai_gene_pane_1_cp1

0xa60a,	// (0x00011ce8) ai_gene_pane_2_cp1

0x0668,	// (0x00007d46) list_single_idle_plugin_calendar_pane

0x0671,	// (0x00007d4f) list_single_idle_plugin_notification_pane

0x067a,	// (0x00007d58) list_single_idle_plugin_player_pane

0x5b03,	// (0x0000d1e1) list_single_idle_plugin_shortcut_pane_ParamLimits

0x5b03,	// (0x0000d1e1) list_single_idle_plugin_shortcut_pane

0x5b2b,	// (0x0000d209) main_idle_act4_pane_t1

0x5b41,	// (0x0000d21f) main_idle_act4_pane_t2

0x0001,

0xfd2b,	// (0x00017409) main_idle_act4_pane_t

0x5b57,	// (0x0000d235) middle_sk_idle_act4_pane_ParamLimits

0x5b57,	// (0x0000d235) middle_sk_idle_act4_pane

0x5b73,	// (0x0000d251) popup_clock_digital_analogue_window_cp2

0x5b99,	// (0x0000d277) shortcut_wheel_idle_act4_pane_ParamLimits

0x5b99,	// (0x0000d277) shortcut_wheel_idle_act4_pane

0xe3f8,	// (0x00015ad6) shortcut_wheel_idle_act4_pane_g1

0xe3f8,	// (0x00015ad6) shortcut_wheel_idle_act4_pane_g2

0xe3f8,	// (0x00015ad6) shortcut_wheel_idle_act4_pane_g3

0xe3f8,	// (0x00015ad6) shortcut_wheel_idle_act4_pane_g4

0xe3f8,	// (0x00015ad6) shortcut_wheel_idle_act4_pane_g5

0x070d,	// (0x00007deb) shortcut_wheel_idle_act4_pane_g6

0x0715,	// (0x00007df3) shortcut_wheel_idle_act4_pane_g7

0x071d,	// (0x00007dfb) shortcut_wheel_idle_act4_pane_g8

0x0725,	// (0x00007e03) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd30,	// (0x0001740e) shortcut_wheel_idle_act4_pane_g

0xe97f,	// (0x0001605d) middle_sk_idle_act4_pane_g1_ParamLimits

0xe97f,	// (0x0001605d) middle_sk_idle_act4_pane_g1

0x5c14,	// (0x0000d2f2) middle_sk_idle_act4_pane_g2_ParamLimits

0x5c14,	// (0x0000d2f2) middle_sk_idle_act4_pane_g2

0x0001,

0xfd53,	// (0x00017431) middle_sk_idle_act4_pane_g_ParamLimits

0xfd53,	// (0x00017431) middle_sk_idle_act4_pane_g

0x5c2c,	// (0x0000d30a) middle_sk_idle_act4_pane_t1_ParamLimits

0x5c2c,	// (0x0000d30a) middle_sk_idle_act4_pane_t1

0x5c5b,	// (0x0000d339) grid_ai_shortcut_pane_ParamLimits

0x5c5b,	// (0x0000d339) grid_ai_shortcut_pane

0x5c78,	// (0x0000d356) list_highlight_pane_cp16_ParamLimits

0x5c78,	// (0x0000d356) list_highlight_pane_cp16

0x5c85,	// (0x0000d363) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x5c85,	// (0x0000d363) list_single_idle_plugin_shortcut_pane_g1

0x5c91,	// (0x0000d36f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x5c91,	// (0x0000d36f) list_single_idle_plugin_shortcut_pane_g2

0x5cad,	// (0x0000d38b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x5cad,	// (0x0000d38b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd58,	// (0x00017436) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd58,	// (0x00017436) list_single_idle_plugin_shortcut_pane_g

0x5cc2,	// (0x0000d3a0) cell_ai_shortcut_pane_ParamLimits

0x5cc2,	// (0x0000d3a0) cell_ai_shortcut_pane

0x5cd8,	// (0x0000d3b6) cell_ai_shortcut_pane_g1_ParamLimits

0x5cd8,	// (0x0000d3b6) cell_ai_shortcut_pane_g1

0x0660,	// (0x00007d3e) ai_gene_pane_1_cp2

0x0852,	// (0x00007f30) ai_gene_pane_2_cp2

0x085a,	// (0x00007f38) list_highlight_pane_cp15

0x0863,	// (0x00007f41) list_single_idle_plugin_calendar_pane_g1

0x085a,	// (0x00007f38) list_highlight_pane_cp17

0x086b,	// (0x00007f49) list_single_idle_plugin_calendar_pane_g1_copy1

0x0873,	// (0x00007f51) list_single_idle_plugin_player_pane_g1

0xd8f2,	// (0x00014fd0) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5f,	// (0x0001743d) list_single_idle_plugin_player_pane_g

0x087b,	// (0x00007f59) list_single_idle_plugin_player_pane_t1

0x0889,	// (0x00007f67) list_single_idle_plugin_player_pane_t2

0x0897,	// (0x00007f75) list_single_idle_plugin_player_pane_t3

0x08a5,	// (0x00007f83) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd64,	// (0x00017442) list_single_idle_plugin_player_pane_t

0x08b3,	// (0x00007f91) wait_bar_pane_cp15

0x08bb,	// (0x00007f99) grid_ai_notification_pane

0xd8f2,	// (0x00014fd0) list_single_idle_plugin_notification_pane_g1

0x5cfa,	// (0x0000d3d8) cell_ai_notification_pane_ParamLimits

0x5cfa,	// (0x0000d3d8) cell_ai_notification_pane

0x08d1,	// (0x00007faf) cell_ai_notification_pane_g1

0x08d9,	// (0x00007fb7) cell_ai_notification_pane_t1

0x5d07,	// (0x0000d3e5) tb_ext_find_button_pane

0x5d0f,	// (0x0000d3ed) tb_ext_find_pane_g1

0x5d17,	// (0x0000d3f5) tb_ext_find_pane_t1

0x9eff,	// (0x000115dd) tb_ext_find_button_pane_g1

0x0905,	// (0x00007fe3) tb_ext_find_button_pane_g2

0x0001,

0xfd6d,	// (0x0001744b) tb_ext_find_button_pane_g

0x5b2b,	// (0x0000d209) main_idle_act4_pane_t1_ParamLimits

0x5b41,	// (0x0000d21f) main_idle_act4_pane_t2_ParamLimits

0xfd2b,	// (0x00017409) main_idle_act4_pane_t_ParamLimits

0x5b73,	// (0x0000d251) popup_clock_digital_analogue_window_cp2_ParamLimits

0x5b89,	// (0x0000d267) sat_plugin_idle_act4_pane_ParamLimits

0x5b89,	// (0x0000d267) sat_plugin_idle_act4_pane

0x5d25,	// (0x0000d403) sat_plugin_idle_act4_pane_t1_ParamLimits

0x5d25,	// (0x0000d403) sat_plugin_idle_act4_pane_t1

0x5d3d,	// (0x0000d41b) sat_plugin_idle_act4_pane_t2_ParamLimits

0x5d3d,	// (0x0000d41b) sat_plugin_idle_act4_pane_t2

0x5d55,	// (0x0000d433) sat_plugin_idle_act4_pane_t3_ParamLimits

0x5d55,	// (0x0000d433) sat_plugin_idle_act4_pane_t3

0x5d6d,	// (0x0000d44b) sat_plugin_idle_act4_pane_t4_ParamLimits

0x5d6d,	// (0x0000d44b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd72,	// (0x00017450) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd72,	// (0x00017450) sat_plugin_idle_act4_pane_t

0x6ffe,	// (0x0000e6dc) popup_battery_window_ParamLimits

0x6ffe,	// (0x0000e6dc) popup_battery_window

0x8cd5,	// (0x000103b3) bg_popup_sub_pane_cp25_ParamLimits

0x8cd5,	// (0x000103b3) bg_popup_sub_pane_cp25

0x095a,	// (0x00008038) popup_battery_window_g1_ParamLimits

0x095a,	// (0x00008038) popup_battery_window_g1

0x0966,	// (0x00008044) popup_battery_window_t1_ParamLimits

0x0966,	// (0x00008044) popup_battery_window_t1

0x0978,	// (0x00008056) popup_battery_window_t2_ParamLimits

0x0978,	// (0x00008056) popup_battery_window_t2

0x0001,

0xfd7b,	// (0x00017459) popup_battery_window_t_ParamLimits

0xfd7b,	// (0x00017459) popup_battery_window_t

0x3ce9,	// (0x0000b3c7) midp_canvas_pane_ParamLimits

0x3d3e,	// (0x0000b41c) midp_keypad_pane_ParamLimits

0x3d3e,	// (0x0000b41c) midp_keypad_pane

0xa844,	// (0x00011f22) main_midp_pane_ParamLimits

0xe0e9,	// (0x000157c7) signal_pane_g2_cp_ParamLimits

0x5d85,	// (0x0000d463) aid_size_cell_midp_keypad_ParamLimits

0x5d85,	// (0x0000d463) aid_size_cell_midp_keypad

0x5da3,	// (0x0000d481) midp_keyp_game_grid_pane_ParamLimits

0x5da3,	// (0x0000d481) midp_keyp_game_grid_pane

0x5dc2,	// (0x0000d4a0) midp_keyp_rocker_pane_ParamLimits

0x5dc2,	// (0x0000d4a0) midp_keyp_rocker_pane

0x5e03,	// (0x0000d4e1) midp_keyp_sk_left_pane_ParamLimits

0x5e03,	// (0x0000d4e1) midp_keyp_sk_left_pane

0x5e55,	// (0x0000d533) midp_keyp_sk_right_pane_ParamLimits

0x5e55,	// (0x0000d533) midp_keyp_sk_right_pane

0x885d,	// (0x0000ff3b) bg_button_pane_cp03

0x5ea1,	// (0x0000d57f) midp_keyp_sk_left_pane_g1

0x885d,	// (0x0000ff3b) bg_button_pane_cp04

0x5ea1,	// (0x0000d57f) midp_keyp_sk_right_pane_g1

0xe3f8,	// (0x00015ad6) midp_keyp_rocker_pane_g1

0x5eaa,	// (0x0000d588) keyp_game_cell_pane_ParamLimits

0x5eaa,	// (0x0000d588) keyp_game_cell_pane

0x885d,	// (0x0000ff3b) bg_button_pane_cp02

0x5ecc,	// (0x0000d5aa) keyp_game_cell_pane_g1

0xc837,	// (0x00013f15) popup_fep_vkb2_window_ParamLimits

0xc837,	// (0x00013f15) popup_fep_vkb2_window

0xcce8,	// (0x000143c6) aid_size_cell_vkb2_ParamLimits

0xcce8,	// (0x000143c6) aid_size_cell_vkb2

0xcd1e,	// (0x000143fc) popup_fep_vkb2_window_g1_ParamLimits

0xcd1e,	// (0x000143fc) popup_fep_vkb2_window_g1

0xcd6e,	// (0x0001444c) vkb2_area_bottom_pane_ParamLimits

0xcd6e,	// (0x0001444c) vkb2_area_bottom_pane

0xcdac,	// (0x0001448a) vkb2_area_keypad_pane_ParamLimits

0xcdac,	// (0x0001448a) vkb2_area_keypad_pane

0xcdea,	// (0x000144c8) vkb2_area_top_pane_ParamLimits

0xcdea,	// (0x000144c8) vkb2_area_top_pane

0xce66,	// (0x00014544) vkb2_top_entry_pane_ParamLimits

0xce66,	// (0x00014544) vkb2_top_entry_pane

0xce93,	// (0x00014571) vkb2_top_grid_left_pane_ParamLimits

0xce93,	// (0x00014571) vkb2_top_grid_left_pane

0xceb3,	// (0x00014591) vkb2_top_grid_right_pane_ParamLimits

0xceb3,	// (0x00014591) vkb2_top_grid_right_pane

0x8336,	// (0x0000fa14) vkb2_cell_keypad_pane_ParamLimits

0x8336,	// (0x0000fa14) vkb2_cell_keypad_pane

0xcef9,	// (0x000145d7) vkb2_area_bottom_grid_pane_ParamLimits

0xcef9,	// (0x000145d7) vkb2_area_bottom_grid_pane

0xcf1f,	// (0x000145fd) vkb2_area_bottom_pane_g1_ParamLimits

0xcf1f,	// (0x000145fd) vkb2_area_bottom_pane_g1

0xcf45,	// (0x00014623) vkb2_area_bottom_pane_g2_ParamLimits

0xcf45,	// (0x00014623) vkb2_area_bottom_pane_g2

0xcf76,	// (0x00014654) vkb2_area_bottom_pane_g3_ParamLimits

0xcf76,	// (0x00014654) vkb2_area_bottom_pane_g3

0x0002,

0xfd80,	// (0x0001745e) vkb2_area_bottom_pane_g_ParamLimits

0xfd80,	// (0x0001745e) vkb2_area_bottom_pane_g

0x84ae,	// (0x0000fb8c) vkb2_top_cell_left_pane_ParamLimits

0x84ae,	// (0x0000fb8c) vkb2_top_cell_left_pane

0x61b9,	// (0x0000d897) vkb2_top_entry_pane_g1_ParamLimits

0x61b9,	// (0x0000d897) vkb2_top_entry_pane_g1

0x61c7,	// (0x0000d8a5) vkb2_top_entry_pane_t1_ParamLimits

0x61c7,	// (0x0000d8a5) vkb2_top_entry_pane_t1

0x0e93,	// (0x00008571) vkb2_top_entry_pane_t2_ParamLimits

0x0e93,	// (0x00008571) vkb2_top_entry_pane_t2

0x0ec5,	// (0x000085a3) vkb2_top_entry_pane_t3_ParamLimits

0x0ec5,	// (0x000085a3) vkb2_top_entry_pane_t3

0x0002,

0xfd87,	// (0x00017465) vkb2_top_entry_pane_t_ParamLimits

0xfd87,	// (0x00017465) vkb2_top_entry_pane_t

0xcfcc,	// (0x000146aa) vkb2_top_grid_right_pane_g1_ParamLimits

0xcfcc,	// (0x000146aa) vkb2_top_grid_right_pane_g1

0x8511,	// (0x0000fbef) vkb2_top_grid_right_pane_g2_ParamLimits

0x8511,	// (0x0000fbef) vkb2_top_grid_right_pane_g2

0x8529,	// (0x0000fc07) vkb2_top_grid_right_pane_g3_ParamLimits

0x8529,	// (0x0000fc07) vkb2_top_grid_right_pane_g3

0xcfe2,	// (0x000146c0) vkb2_top_grid_right_pane_g4_ParamLimits

0xcfe2,	// (0x000146c0) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8e,	// (0x0001746c) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8e,	// (0x0001746c) vkb2_top_grid_right_pane_g

0x8557,	// (0x0000fc35) vkb2_top_cell_left_pane_g1

0x856e,	// (0x0000fc4c) vkb2_cell_keypad_pane_g1_ParamLimits

0x856e,	// (0x0000fc4c) vkb2_cell_keypad_pane_g1

0x0f89,	// (0x00008667) vkb2_cell_keypad_pane_t1_ParamLimits

0x0f89,	// (0x00008667) vkb2_cell_keypad_pane_t1

0x857c,	// (0x0000fc5a) vkb2_cell_bottom_grid_pane_ParamLimits

0x857c,	// (0x0000fc5a) vkb2_cell_bottom_grid_pane

0x85b5,	// (0x0000fc93) vkb2_cell_bottom_grid_pane_g1

0x5bb8,	// (0x0000d296) aid_call2_pane_cp02

0x5bc0,	// (0x0000d29e) aid_call_pane_cp02

0x5bc8,	// (0x0000d2a6) clock_digital_number_pane_cp10

0x5bd0,	// (0x0000d2ae) clock_digital_number_pane_cp11

0x5bd8,	// (0x0000d2b6) clock_digital_number_pane_cp12

0x5be0,	// (0x0000d2be) clock_digital_number_pane_cp13

0x5be8,	// (0x0000d2c6) clock_digital_separator_pane_cp10

0x9eff,	// (0x000115dd) popup_clock_digital_analogue_window_cp2_g1

0x9eff,	// (0x000115dd) popup_clock_digital_analogue_window_cp2_g2

0x5bf0,	// (0x0000d2ce) popup_clock_digital_analogue_window_cp2_g3

0x9eff,	// (0x000115dd) popup_clock_digital_analogue_window_cp2_g4

0x5bf0,	// (0x0000d2ce) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd43,	// (0x00017421) popup_clock_digital_analogue_window_cp2_g

0x5bf8,	// (0x0000d2d6) popup_clock_digital_analogue_window_cp2_t1

0x5c06,	// (0x0000d2e4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4e,	// (0x0001742c) popup_clock_digital_analogue_window_cp2_t

0xe3f8,	// (0x00015ad6) clock_digital_number_pane_cp10_g1

0xe3f8,	// (0x00015ad6) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0001720f) clock_digital_number_pane_cp10_g

0xe3f8,	// (0x00015ad6) clock_digital_separator_pane_cp10_g1

0xe3f8,	// (0x00015ad6) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0001720f) clock_digital_separator_pane_cp10_g

0x05aa,	// (0x00007c88) uniindi_top_pane_g3

0x05bb,	// (0x00007c99) uniindi_top_pane_g4

0x83a1,	// (0x0000fa7f) vkb2_row_keypad_pane_ParamLimits

0x83a1,	// (0x0000fa7f) vkb2_row_keypad_pane

0x85d1,	// (0x0000fcaf) vkb2_cell_t_keypad_pane_ParamLimits

0x85d1,	// (0x0000fcaf) vkb2_cell_t_keypad_pane

0x85de,	// (0x0000fcbc) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x85de,	// (0x0000fcbc) vkb2_cell_t_keypad_pane_cp08

0x85ee,	// (0x0000fccc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x85ee,	// (0x0000fccc) vkb2_cell_t_keypad_pane_cp09

0x85ff,	// (0x0000fcdd) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x85ff,	// (0x0000fcdd) vkb2_cell_t_keypad_pane_cp01

0x860f,	// (0x0000fced) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x860f,	// (0x0000fced) vkb2_cell_t_keypad_pane_cp02

0x861f,	// (0x0000fcfd) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x861f,	// (0x0000fcfd) vkb2_cell_t_keypad_pane_cp03

0x862f,	// (0x0000fd0d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x862f,	// (0x0000fd0d) vkb2_cell_t_keypad_pane_cp04

0x863f,	// (0x0000fd1d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x863f,	// (0x0000fd1d) vkb2_cell_t_keypad_pane_cp05

0x864f,	// (0x0000fd2d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x864f,	// (0x0000fd2d) vkb2_cell_t_keypad_pane_cp06

0x865f,	// (0x0000fd3d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x865f,	// (0x0000fd3d) vkb2_cell_t_keypad_pane_cp07

0x866f,	// (0x0000fd4d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x866f,	// (0x0000fd4d) vkb2_cell_t_keypad_pane_cp10

0x7e8f,	// (0x0000f56d) vkb2_cell_t_keypad_pane_g1

0x10a8,	// (0x00008786) vkb2_cell_t_keypad_pane_t1

0x6f3b,	// (0x0000e619) popup_grid_graphic2_window

0x622c,	// (0x0000d90a) aid_size_cell_graphic2_ParamLimits

0x622c,	// (0x0000d90a) aid_size_cell_graphic2

0xb858,	// (0x00012f36) bg_popup_window_pane_cp21_ParamLimits

0xb858,	// (0x00012f36) bg_popup_window_pane_cp21

0x625e,	// (0x0000d93c) graphic2_pages_pane_ParamLimits

0x625e,	// (0x0000d93c) graphic2_pages_pane

0x62a7,	// (0x0000d985) grid_graphic2_control_pane_ParamLimits

0x62a7,	// (0x0000d985) grid_graphic2_control_pane

0x62d5,	// (0x0000d9b3) grid_graphic2_pane_ParamLimits

0x62d5,	// (0x0000d9b3) grid_graphic2_pane

0x6334,	// (0x0000da12) cell_graphic2_pane

0x885d,	// (0x0000ff3b) main_comp_mode_pane

0xf443,	// (0x00016b21) list_ai3_gene_pane_ParamLimits

0x58a4,	// (0x0000cf82) bg_popup_window_pane_cp19_ParamLimits

0x0142,	// (0x00007820) bg_touch_area_indi_pane_ParamLimits

0x0142,	// (0x00007820) bg_touch_area_indi_pane

0x0158,	// (0x00007836) bg_touch_area_indi_pane_cp01_ParamLimits

0x0158,	// (0x00007836) bg_touch_area_indi_pane_cp01

0x016e,	// (0x0000784c) bg_touch_area_indi_pane_cp02_ParamLimits

0x016e,	// (0x0000784c) bg_touch_area_indi_pane_cp02

0x0184,	// (0x00007862) bg_touch_area_indi_pane_cp03_ParamLimits

0x0184,	// (0x00007862) bg_touch_area_indi_pane_cp03

0x019a,	// (0x00007878) popup_slider_window_g1_ParamLimits

0x01b6,	// (0x00007894) popup_slider_window_g2_ParamLimits

0x01d2,	// (0x000078b0) popup_slider_window_g3_ParamLimits

0xfcd8,	// (0x000173b6) popup_slider_window_g_ParamLimits

0x022e,	// (0x0000790c) popup_slider_window_t1_ParamLimits

0x02a0,	// (0x0000797e) small_volume_slider_vertical_pane_ParamLimits

0x6334,	// (0x0000da12) cell_graphic2_pane_ParamLimits

0x637d,	// (0x0000da5b) bg_button_pane_cp10_ParamLimits

0x637d,	// (0x0000da5b) bg_button_pane_cp10

0x638e,	// (0x0000da6c) bg_button_pane_cp11_ParamLimits

0x638e,	// (0x0000da6c) bg_button_pane_cp11

0x639f,	// (0x0000da7d) graphic2_pages_pane_g1_ParamLimits

0x639f,	// (0x0000da7d) graphic2_pages_pane_g1

0x63ba,	// (0x0000da98) graphic2_pages_pane_g2_ParamLimits

0x63ba,	// (0x0000da98) graphic2_pages_pane_g2

0x0001,

0xfd9c,	// (0x0001747a) graphic2_pages_pane_g_ParamLimits

0xfd9c,	// (0x0001747a) graphic2_pages_pane_g

0x63d2,	// (0x0000dab0) graphic2_pages_pane_t1_ParamLimits

0x63d2,	// (0x0000dab0) graphic2_pages_pane_t1

0x63ea,	// (0x0000dac8) cell_graphic2_control_pane_ParamLimits

0x63ea,	// (0x0000dac8) cell_graphic2_control_pane

0x6404,	// (0x0000dae2) cell_graphic2_pane_g1_ParamLimits

0x6404,	// (0x0000dae2) cell_graphic2_pane_g1

0xe98d,	// (0x0001606b) cell_graphic2_pane_g2_ParamLimits

0xe98d,	// (0x0001606b) cell_graphic2_pane_g2

0x6411,	// (0x0000daef) cell_graphic2_pane_g3_ParamLimits

0x6411,	// (0x0000daef) cell_graphic2_pane_g3

0xe99a,	// (0x00016078) cell_graphic2_pane_g4_ParamLimits

0xe99a,	// (0x00016078) cell_graphic2_pane_g4

0x641e,	// (0x0000dafc) cell_graphic2_pane_g5_ParamLimits

0x641e,	// (0x0000dafc) cell_graphic2_pane_g5

0x0004,

0xfda1,	// (0x0001747f) cell_graphic2_pane_g_ParamLimits

0xfda1,	// (0x0001747f) cell_graphic2_pane_g

0x643e,	// (0x0000db1c) cell_graphic2_pane_t1_ParamLimits

0x643e,	// (0x0000db1c) cell_graphic2_pane_t1

0xd0c7,	// (0x000147a5) grid_highlight_pane_cp11_ParamLimits

0xd0c7,	// (0x000147a5) grid_highlight_pane_cp11

0x9744,	// (0x00010e22) bg_button_pane_cp05

0x6473,	// (0x0000db51) cell_graphic2_control_pane_g1

0xe3f8,	// (0x00015ad6) bg_touch_area_indi_pane_g1

0x12d5,	// (0x000089b3) aid_cmod_rocker_key_size

0x12df,	// (0x000089bd) aid_cmode_itu_key_size

0x12e9,	// (0x000089c7) main_cmode_video_pane

0x12f1,	// (0x000089cf) main_comp_mode_itu_pane

0x12fb,	// (0x000089d9) main_comp_mode_rocker_pane

0x1303,	// (0x000089e1) cell_cmode_rocker_pane_ParamLimits

0x1303,	// (0x000089e1) cell_cmode_rocker_pane

0x1315,	// (0x000089f3) cell_cmode_itu_pane_ParamLimits

0x1315,	// (0x000089f3) cell_cmode_itu_pane

0x9744,	// (0x00010e22) bg_button_pane_cp06_ParamLimits

0x9744,	// (0x00010e22) bg_button_pane_cp06

0xe634,	// (0x00015d12) cell_cmode_rocker_pane_g1_ParamLimits

0xe634,	// (0x00015d12) cell_cmode_rocker_pane_g1

0x0414,	// (0x00007af2) cell_cmode_rocker_pane_g2_ParamLimits

0x0414,	// (0x00007af2) cell_cmode_rocker_pane_g2

0x0001,

0xfdb1,	// (0x0001748f) cell_cmode_rocker_pane_g_ParamLimits

0xfdb1,	// (0x0001748f) cell_cmode_rocker_pane_g

0x885d,	// (0x0000ff3b) bg_button_pane_cp07

0x132a,	// (0x00008a08) cell_cmode_itu_pane_g1

0x1333,	// (0x00008a11) cell_cmode_itu_pane_t1

0x1341,	// (0x00008a1f) cell_cmode_itu_pane_t2

0x0001,

0xfdb6,	// (0x00017494) cell_cmode_itu_pane_t

0x062c,	// (0x00007d0a) aid_touch_ctrl_left

0x0634,	// (0x00007d12) aid_touch_ctrl_right

0x885d,	// (0x0000ff3b) compa_mode_pane

0x6480,	// (0x0000db5e) aid_cmod_rocker_key_size_cp

0x648a,	// (0x0000db68) aid_cmode_itu_key_size_cp

0x1363,	// (0x00008a41) compa_mode_pane_g1

0x136b,	// (0x00008a49) compa_mode_pane_g2

0x1373,	// (0x00008a51) compa_mode_pane_g3

0x0002,

0xfdbb,	// (0x00017499) compa_mode_pane_g

0x6494,	// (0x0000db72) main_comp_mode_itu_pane_cp

0x649e,	// (0x0000db7c) main_comp_mode_rocker_pane_cp

0x64a8,	// (0x0000db86) cell_cmode_itu_pane_cp_ParamLimits

0x64a8,	// (0x0000db86) cell_cmode_itu_pane_cp

0x64bd,	// (0x0000db9b) cell_cmode_rocker_pane_cp_ParamLimits

0x64bd,	// (0x0000db9b) cell_cmode_rocker_pane_cp

0x9744,	// (0x00010e22) bg_button_pane_cp06_cp_ParamLimits

0x9744,	// (0x00010e22) bg_button_pane_cp06_cp

0xe634,	// (0x00015d12) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe634,	// (0x00015d12) cell_cmode_rocker_pane_g1_cp

0xe3f8,	// (0x00015ad6) cell_cmode_rocker_pane_g2_cp

0x885d,	// (0x0000ff3b) bg_button_pane_cp07_cp

0x64cf,	// (0x0000dbad) cell_cmode_itu_pane_g1_cp

0x64d8,	// (0x0000dbb6) cell_cmode_itu_pane_t1_cp

0x64e6,	// (0x0000dbc4) cell_cmode_itu_pane_t2_cp

0x4dbe,	// (0x0000c49c) settings_code_pane_cp2

0x8a2e,	// (0x0001010c) bg_popup_window_pane_cp3_ParamLimits

0x8ead,	// (0x0001058b) heading_pane_cp3_ParamLimits

0x8eb9,	// (0x00010597) listscroll_popup_graphic_pane_ParamLimits

0x7c4a,	// (0x0000f328) fep_hwr_aid_pane_ParamLimits

0x80aa,	// (0x0000f788) aid_touch_sctrl_top_ParamLimits

0x80c5,	// (0x0000f7a3) sctrl_sk_top_pane_g1_ParamLimits

0x7e8f,	// (0x0000f56d) sctrl_sk_top_pane_g2_ParamLimits

0xfcf1,	// (0x000173cf) sctrl_sk_top_pane_g_ParamLimits

0x80d2,	// (0x0000f7b0) sctrl_sk_top_pane_t1_ParamLimits

0x80aa,	// (0x0000f788) aid_touch_sctrl_bottom_ParamLimits

0x80d2,	// (0x0000f7b0) sctrl_sk_bottom_pane_t1_ParamLimits

0x0576,	// (0x00007c54) aid_area_touch_clock

0xce28,	// (0x00014506) aid_vkb2_area_top_pane_cell_ParamLimits

0xce28,	// (0x00014506) aid_vkb2_area_top_pane_cell

0xced3,	// (0x000145b1) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xced3,	// (0x000145b1) aid_vkb2_area_bottom_pane_cell

0x0e4b,	// (0x00008529) popup_char_count_window

0x13d7,	// (0x00008ab5) popup_char_count_window_g1

0x13e0,	// (0x00008abe) popup_char_count_window_g2

0x13e9,	// (0x00008ac7) popup_char_count_window_g3

0x0002,

0xfdc2,	// (0x000174a0) popup_char_count_window_g

0x13f2,	// (0x00008ad0) popup_char_count_window_t1

0x8186,	// (0x0000f864) popup_fep_char_preview_window_ParamLimits

0x8186,	// (0x0000f864) popup_fep_char_preview_window

0xce48,	// (0x00014526) vkb2_top_candi_pane_ParamLimits

0xce48,	// (0x00014526) vkb2_top_candi_pane

0x64f4,	// (0x0000dbd2) cell_vkb2_top_candi_pane_ParamLimits

0x64f4,	// (0x0000dbd2) cell_vkb2_top_candi_pane

0x8684,	// (0x0000fd62) bg_popup_fep_char_preview_window_ParamLimits

0x8684,	// (0x0000fd62) bg_popup_fep_char_preview_window

0x8692,	// (0x0000fd70) popup_fep_char_preview_window_t1_ParamLimits

0x8692,	// (0x0000fd70) popup_fep_char_preview_window_t1

0x1483,	// (0x00008b61) bg_popup_fep_char_preview_window_g1

0x147b,	// (0x00008b59) bg_popup_fep_char_preview_window_g2

0x1473,	// (0x00008b51) bg_popup_fep_char_preview_window_g3

0x14ab,	// (0x00008b89) bg_popup_fep_char_preview_window_g4

0x14a3,	// (0x00008b81) bg_popup_fep_char_preview_window_g5

0x86cc,	// (0x0000fdaa) bg_popup_fep_char_preview_window_g6

0x1493,	// (0x00008b71) bg_popup_fep_char_preview_window_g7

0x148b,	// (0x00008b69) bg_popup_fep_char_preview_window_g8

0x14b3,	// (0x00008b91) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc9,	// (0x000174a7) bg_popup_fep_char_preview_window_g

0x7e8f,	// (0x0000f56d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7e8f,	// (0x0000f56d) cell_vkb2_top_candi_pane_g1

0x7e9d,	// (0x0000f57b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7e9d,	// (0x0000f57b) cell_vkb2_top_candi_pane_g2

0x14dc,	// (0x00008bba) cell_vkb2_top_candi_pane_g3_ParamLimits

0x14dc,	// (0x00008bba) cell_vkb2_top_candi_pane_g3

0x86d4,	// (0x0000fdb2) cell_vkb2_top_candi_pane_g4_ParamLimits

0x86d4,	// (0x0000fdb2) cell_vkb2_top_candi_pane_g4

0xe95e,	// (0x0001603c) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe95e,	// (0x0001603c) cell_vkb2_top_candi_pane_g5

0x86f5,	// (0x0000fdd3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x86f5,	// (0x0000fdd3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddc,	// (0x000174ba) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddc,	// (0x000174ba) cell_vkb2_top_candi_pane_g

0x8703,	// (0x0000fde1) cell_vkb2_top_candi_pane_t1

0x7a62,	// (0x0000f140) aid_size_touch_slider_mark_ParamLimits

0x7a62,	// (0x0000f140) aid_size_touch_slider_mark

0x6292,	// (0x0000d970) grid_graphic2_catg_pane_ParamLimits

0x6292,	// (0x0000d970) grid_graphic2_catg_pane

0x6309,	// (0x0000d9e7) popup_grid_graphic2_window_t1_ParamLimits

0x6309,	// (0x0000d9e7) popup_grid_graphic2_window_t1

0x631e,	// (0x0000d9fc) popup_grid_graphic2_window_t2_ParamLimits

0x631e,	// (0x0000d9fc) popup_grid_graphic2_window_t2

0x0001,

0xfd97,	// (0x00017475) popup_grid_graphic2_window_t_ParamLimits

0xfd97,	// (0x00017475) popup_grid_graphic2_window_t

0x9744,	// (0x00010e22) bg_button_pane_cp05_ParamLimits

0x6473,	// (0x0000db51) cell_graphic2_control_pane_g1_ParamLimits

0x05f2,	// (0x00007cd0) cell_graphic2_catg_pane_ParamLimits

0x05f2,	// (0x00007cd0) cell_graphic2_catg_pane

0x885d,	// (0x0000ff3b) bg_button_pane_cp12

0x653e,	// (0x0000dc1c) cell_graphic2_catg_pane_g1

0x0542,	// (0x00007c20) cell_tb_ext_pane_t1_ParamLimits

0x84ce,	// (0x0000fbac) vkb2_top_cell_right_narrow_pane_ParamLimits

0x84ce,	// (0x0000fbac) vkb2_top_cell_right_narrow_pane

0x84e6,	// (0x0000fbc4) vkb2_top_cell_right_wide_pane_ParamLimits

0x84e6,	// (0x0000fbc4) vkb2_top_cell_right_wide_pane

0x7c3c,	// (0x0000f31a) bg_vkb2_func_pane_ParamLimits

0x7c3c,	// (0x0000f31a) bg_vkb2_func_pane

0x8557,	// (0x0000fc35) vkb2_top_cell_left_pane_g1_ParamLimits

0x7c3c,	// (0x0000f31a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7c3c,	// (0x0000f31a) bg_vkb2_fuc_pane_cp03

0x85b5,	// (0x0000fc93) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xb1a1,	// (0x0001287f) bg_vkb2_func_pane_g1

0xb1a9,	// (0x00012887) bg_vkb2_func_pane_g2

0xb1b9,	// (0x00012897) bg_vkb2_func_pane_g3

0xb1b1,	// (0x0001288f) bg_vkb2_func_pane_g4

0xb1c1,	// (0x0001289f) bg_vkb2_func_pane_g5

0xb1c9,	// (0x000128a7) bg_vkb2_func_pane_g6

0xb1d1,	// (0x000128af) bg_vkb2_func_pane_g7

0xb1d9,	// (0x000128b7) bg_vkb2_func_pane_g8

0xb199,	// (0x00012877) bg_vkb2_func_pane_g9

0x0008,

0xfde9,	// (0x000174c7) bg_vkb2_func_pane_g

0x7c3c,	// (0x0000f31a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7c3c,	// (0x0000f31a) bg_vkb2_fuc_pane_cp01

0x8557,	// (0x0000fc35) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8557,	// (0x0000fc35) vkb2_top_cell_right_wide_pane_g1

0x7c3c,	// (0x0000f31a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7c3c,	// (0x0000f31a) bg_vkb2_fuc_pane_cp02

0x85b5,	// (0x0000fc93) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x85b5,	// (0x0000fc93) vkb2_top_cell_right_narrow_pane_g1

0x57f2,	// (0x0000ced0) aid_touch_area_decrease_ParamLimits

0x57f2,	// (0x0000ced0) aid_touch_area_decrease

0x5820,	// (0x0000cefe) aid_touch_area_increase_ParamLimits

0x5820,	// (0x0000cefe) aid_touch_area_increase

0x5848,	// (0x0000cf26) aid_touch_area_mute_ParamLimits

0x5848,	// (0x0000cf26) aid_touch_area_mute

0x5870,	// (0x0000cf4e) aid_touch_area_slider_ParamLimits

0x5870,	// (0x0000cf4e) aid_touch_area_slider

0x58b0,	// (0x0000cf8e) popup_slider_window_g4_ParamLimits

0x58b0,	// (0x0000cf8e) popup_slider_window_g4

0x58d8,	// (0x0000cfb6) popup_slider_window_g5_ParamLimits

0x58d8,	// (0x0000cfb6) popup_slider_window_g5

0x590c,	// (0x0000cfea) popup_slider_window_g6_ParamLimits

0x590c,	// (0x0000cfea) popup_slider_window_g6

0x025a,	// (0x00007938) popup_slider_window_t2_ParamLimits

0x025a,	// (0x00007938) popup_slider_window_t2

0x0001,

0xfce5,	// (0x000173c3) popup_slider_window_t_ParamLimits

0xfce5,	// (0x000173c3) popup_slider_window_t

0x5928,	// (0x0000d006) slider_pane_ParamLimits

0x5928,	// (0x0000d006) slider_pane

0x152e,	// (0x00008c0c) slider_pane_g1_ParamLimits

0x152e,	// (0x00008c0c) slider_pane_g1

0x1542,	// (0x00008c20) slider_pane_g2_ParamLimits

0x1542,	// (0x00008c20) slider_pane_g2

0x1558,	// (0x00008c36) slider_pane_g3_ParamLimits

0x1558,	// (0x00008c36) slider_pane_g3

0x0003,

0xfdfc,	// (0x000174da) slider_pane_g_ParamLimits

0xfdfc,	// (0x000174da) slider_pane_g

0x442e,	// (0x0000bb0c) popup_tb_float_extension_window_ParamLimits

0x442e,	// (0x0000bb0c) popup_tb_float_extension_window

0x1584,	// (0x00008c62) aid_size_cell_tb_float_ext

0x885d,	// (0x0000ff3b) bg_popup_sub_window_cp28

0x158f,	// (0x00008c6d) grid_tb_float_ext_pane

0x1597,	// (0x00008c75) cell_tb_float_ext_pane_ParamLimits

0x1597,	// (0x00008c75) cell_tb_float_ext_pane

0x15af,	// (0x00008c8d) cell_tb_float_ext_pane_g1

0x15b8,	// (0x00008c96) grid_highlight_pane_cp12

0xcc5e,	// (0x0001433c) cell_last_hwr_side_pane_ParamLimits

0xcc5e,	// (0x0001433c) cell_last_hwr_side_pane

0xe3f8,	// (0x00015ad6) cell_last_hwr_side_pane_g1

0x15c1,	// (0x00008c9f) cell_last_hwr_side_pane_g2

0x0001,

0xfe05,	// (0x000174e3) cell_last_hwr_side_pane_g

0xcfa7,	// (0x00014685) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcfa7,	// (0x00014685) vkb2_area_bottom_space_btn_pane

0x7e8f,	// (0x0000f56d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x10a8,	// (0x00008786) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8703,	// (0x0000fde1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8719,	// (0x0000fdf7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8719,	// (0x0000fdf7) vkb2_area_bottom_space_btn_pane_g1

0x874f,	// (0x0000fe2d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x874f,	// (0x0000fe2d) vkb2_area_bottom_space_btn_pane_g2

0x8785,	// (0x0000fe63) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8785,	// (0x0000fe63) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0a,	// (0x000174e8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0a,	// (0x000174e8) vkb2_area_bottom_space_btn_pane_g

0x7cf9,	// (0x0000f3d7) cel_fep_hwr_func_pane_ParamLimits

0x7cf9,	// (0x0000f3d7) cel_fep_hwr_func_pane

0xcc33,	// (0x00014311) cell_hwr_side_button_pane_ParamLimits

0xcc33,	// (0x00014311) cell_hwr_side_button_pane

0x0576,	// (0x00007c54) aid_area_touch_clock_ParamLimits

0x8cd5,	// (0x000103b3) bg_uniindi_top_pane_ParamLimits

0x0588,	// (0x00007c66) uniindi_top_pane_g1_ParamLimits

0x059e,	// (0x00007c7c) uniindi_top_pane_g2_ParamLimits

0x05aa,	// (0x00007c88) uniindi_top_pane_g3_ParamLimits

0x05bb,	// (0x00007c99) uniindi_top_pane_g4_ParamLimits

0xfd1d,	// (0x000173fb) uniindi_top_pane_g_ParamLimits

0x05c8,	// (0x00007ca6) uniindi_top_pane_t1_ParamLimits

0x8cd5,	// (0x000103b3) bg_vkb2_func_pane_cp01_ParamLimits

0x8cd5,	// (0x000103b3) bg_vkb2_func_pane_cp01

0x167c,	// (0x00008d5a) cel_fep_hwr_func_pane_g1_ParamLimits

0x167c,	// (0x00008d5a) cel_fep_hwr_func_pane_g1

0x8cd5,	// (0x000103b3) bg_vkb2_func_pane_cp02_ParamLimits

0x8cd5,	// (0x000103b3) bg_vkb2_func_pane_cp02

0x167c,	// (0x00008d5a) cell_hwr_side_button_pane_g1_ParamLimits

0x167c,	// (0x00008d5a) cell_hwr_side_button_pane_g1

0xb02d,	// (0x0001270b) status_pane_g4_ParamLimits

0xb02d,	// (0x0001270b) status_pane_g4

0xb045,	// (0x00012723) status_pane_t1

0xe286,	// (0x00015964) form2_midp_gauge_slider_cont_pane

0xe28e,	// (0x0001596c) form2_midp_gauge_slider_pane_t1_ParamLimits

0x50d6,	// (0x0000c7b4) form2_midp_gauge_slider_pane_t2_ParamLimits

0x50e8,	// (0x0000c7c6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x000171c2) form2_midp_gauge_slider_pane_t_ParamLimits

0xe2a0,	// (0x0001597e) form2_midp_slider_pane_ParamLimits

0x8146,	// (0x0000f824) aid_size_cell_func_vkb2_ParamLimits

0x8146,	// (0x0000f824) aid_size_cell_func_vkb2

0x1570,	// (0x00008c4e) slider_pane_g4_ParamLimits

0x1570,	// (0x00008c4e) slider_pane_g4

0xcff8,	// (0x000146d6) form2_midp_gauge_slider_pane_t2_cp01

0xd006,	// (0x000146e4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd006,	// (0x000146e4) form2_midp_gauge_slider_pane_t3_cp01

0x87f6,	// (0x0000fed4) form2_midp_slider_pane_cp01

0x885d,	// (0x0000ff3b) navi_smil_pane

0x16e9,	// (0x00008dc7) navi_smil_pane_g1

0x16f1,	// (0x00008dcf) navi_smil_pane_t1

0x16be,	// (0x00008d9c) form2_midp_slider_pane_g1

0x16c7,	// (0x00008da5) form2_midp_slider_pane_g2

0x16cf,	// (0x00008dad) form2_midp_slider_pane_g3

0x16be,	// (0x00008d9c) form2_midp_slider_pane_g4

0x6572,	// (0x0000dc50) form2_midp_slider_pane_g5

0x0004,

0xfe13,	// (0x000174f1) form2_midp_slider_pane_g

0x87bb,	// (0x0000fe99) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x87bb,	// (0x0000fe99) vkb2_area_bottom_space_btn_pane_g4

0x45d0,	// (0x0000bcae) lc0_navi_pane_ParamLimits

0x45d0,	// (0x0000bcae) lc0_navi_pane

0x463a,	// (0x0000bd18) lc0_stat_indi_pane_ParamLimits

0x463a,	// (0x0000bd18) lc0_stat_indi_pane

0x464f,	// (0x0000bd2d) ls0_title_pane_ParamLimits

0x464f,	// (0x0000bd2d) ls0_title_pane

0x9744,	// (0x00010e22) bg_popup_sub_pane_cp14_ParamLimits

0x055d,	// (0x00007c3b) list_uniindi_pane_ParamLimits

0x0569,	// (0x00007c47) uniindi_top_pane_ParamLimits

0x0604,	// (0x00007ce2) list_single_uniindi_pane_g1_ParamLimits

0x0617,	// (0x00007cf5) list_single_uniindi_pane_t1_ParamLimits

0xd023,	// (0x00014701) lc0_stat_clock_pane_ParamLimits

0xd023,	// (0x00014701) lc0_stat_clock_pane

0x6595,	// (0x0000dc73) lc0_stat_indi_pane_g1_ParamLimits

0x6595,	// (0x0000dc73) lc0_stat_indi_pane_g1

0x6588,	// (0x0000dc66) lc0_stat_indi_pane_g2_ParamLimits

0x6588,	// (0x0000dc66) lc0_stat_indi_pane_g2

0x0001,

0xfe1e,	// (0x000174fc) lc0_stat_indi_pane_g_ParamLimits

0xfe1e,	// (0x000174fc) lc0_stat_indi_pane_g

0xd030,	// (0x0001470e) lc0_uni_indicator_pane_ParamLimits

0xd030,	// (0x0001470e) lc0_uni_indicator_pane

0x1733,	// (0x00008e11) ls0_title_pane_g1_ParamLimits

0x1733,	// (0x00008e11) ls0_title_pane_g1

0x65af,	// (0x0000dc8d) ls0_title_pane_t1_ParamLimits

0x65af,	// (0x0000dc8d) ls0_title_pane_t1

0xd03d,	// (0x0001471b) lc0_uni_indicator_pane_g1_ParamLimits

0xd03d,	// (0x0001471b) lc0_uni_indicator_pane_g1

0x178f,	// (0x00008e6d) lc0_stat_clock_pane_t1

0x885d,	// (0x0000ff3b) main_ai5_pane

0x179d,	// (0x00008e7b) ai5_sk_pane_ParamLimits

0x179d,	// (0x00008e7b) ai5_sk_pane

0x65f2,	// (0x0000dcd0) cell_ai5_widget_pane_ParamLimits

0x65f2,	// (0x0000dcd0) cell_ai5_widget_pane

0x1803,	// (0x00008ee1) aid_size_cell_widget_grid

0x1815,	// (0x00008ef3) bg_ai5_widget_pane_ParamLimits

0x1815,	// (0x00008ef3) bg_ai5_widget_pane

0x6673,	// (0x0000dd51) cell_ai5_widget_pane_g2

0x6683,	// (0x0000dd61) cell_ai5_widget_pane_g3

0x66a2,	// (0x0000dd80) cell_ai5_widget_pane_g4

0x66ae,	// (0x0000dd8c) cell_ai5_widget_pane_g5

0x66ba,	// (0x0000dd98) cell_ai5_widget_pane_g6

0x66c6,	// (0x0000dda4) cell_ai5_widget_pane_g7

0x670e,	// (0x0000ddec) cell_ai5_widget_pane_t1_ParamLimits

0x670e,	// (0x0000ddec) cell_ai5_widget_pane_t1

0x672b,	// (0x0000de09) cell_ai5_widget_pane_t2_ParamLimits

0x672b,	// (0x0000de09) cell_ai5_widget_pane_t2

0x6743,	// (0x0000de21) cell_ai5_widget_pane_t3_ParamLimits

0x6743,	// (0x0000de21) cell_ai5_widget_pane_t3

0x675b,	// (0x0000de39) cell_ai5_widget_pane_t4_ParamLimits

0x675b,	// (0x0000de39) cell_ai5_widget_pane_t4

0x6775,	// (0x0000de53) cell_ai5_widget_pane_t5_ParamLimits

0x6775,	// (0x0000de53) cell_ai5_widget_pane_t5

0x195e,	// (0x0000903c) cell_ai5_widget_pane_t6_ParamLimits

0x195e,	// (0x0000903c) cell_ai5_widget_pane_t6

0x1970,	// (0x0000904e) cell_ai5_widget_pane_t7_ParamLimits

0x1970,	// (0x0000904e) cell_ai5_widget_pane_t7

0x6794,	// (0x0000de72) cell_ai5_widget_pane_t8_ParamLimits

0x6794,	// (0x0000de72) cell_ai5_widget_pane_t8

0x0009,

0xfe38,	// (0x00017516) cell_ai5_widget_pane_t_ParamLimits

0xfe38,	// (0x00017516) cell_ai5_widget_pane_t

0x67df,	// (0x0000debd) grid_ai5_widget_pane

0x9744,	// (0x00010e22) highlight_cell_ai5_widget_pane_ParamLimits

0x9744,	// (0x00010e22) highlight_cell_ai5_widget_pane

0x67f3,	// (0x0000ded1) ai5_sk_left_pane

0x67fd,	// (0x0000dedb) ai5_sk_middle_pane

0x6807,	// (0x0000dee5) ai5_sk_right_pane

0x1a06,	// (0x000090e4) bg_ai5_widget_pane_g1_ParamLimits

0x1a06,	// (0x000090e4) bg_ai5_widget_pane_g1

0x1a12,	// (0x000090f0) bg_ai5_widget_pane_g2_ParamLimits

0x1a12,	// (0x000090f0) bg_ai5_widget_pane_g2

0x1a1e,	// (0x000090fc) bg_ai5_widget_pane_g3_ParamLimits

0x1a1e,	// (0x000090fc) bg_ai5_widget_pane_g3

0x1a2a,	// (0x00009108) bg_ai5_widget_pane_g4_ParamLimits

0x1a2a,	// (0x00009108) bg_ai5_widget_pane_g4

0x1a36,	// (0x00009114) bg_ai5_widget_pane_g5_ParamLimits

0x1a36,	// (0x00009114) bg_ai5_widget_pane_g5

0x1a42,	// (0x00009120) bg_ai5_widget_pane_g6_ParamLimits

0x1a42,	// (0x00009120) bg_ai5_widget_pane_g6

0x1a4e,	// (0x0000912c) bg_ai5_widget_pane_g7_ParamLimits

0x1a4e,	// (0x0000912c) bg_ai5_widget_pane_g7

0x1a5a,	// (0x00009138) bg_ai5_widget_pane_g8_ParamLimits

0x1a5a,	// (0x00009138) bg_ai5_widget_pane_g8

0x1a66,	// (0x00009144) bg_ai5_widget_pane_g9_ParamLimits

0x1a66,	// (0x00009144) bg_ai5_widget_pane_g9

0x0008,

0xfe4d,	// (0x0001752b) bg_ai5_widget_pane_g_ParamLimits

0xfe4d,	// (0x0001752b) bg_ai5_widget_pane_g

0x1a98,	// (0x00009176) cell_shortcut_ai5_widget_pane_ParamLimits

0x1a98,	// (0x00009176) cell_shortcut_ai5_widget_pane

0x8b0e,	// (0x000101ec) bg_cell_shortcut_ai5_widget_pane

0x1aa4,	// (0x00009182) cell_grid_ai5_widget_pane_g1

0x1aad,	// (0x0000918b) highlight_cell_shortcut_ai5_widget_pane

0xb1a1,	// (0x0001287f) ai5_sk_left_pane_g1

0x1ab5,	// (0x00009193) ai5_sk_left_pane_g2

0x1abd,	// (0x0000919b) ai5_sk_left_pane_g3

0x1ac5,	// (0x000091a3) ai5_sk_left_pane_g4

0x0003,

0xfe60,	// (0x0001753e) ai5_sk_left_pane_g

0x1acd,	// (0x000091ab) ai5_sk_left_pane_t1

0xb1a9,	// (0x00012887) ai5_sk_right_pane_g1

0x1adb,	// (0x000091b9) ai5_sk_right_pane_g2

0x1ae3,	// (0x000091c1) ai5_sk_right_pane_g3

0x1aeb,	// (0x000091c9) ai5_sk_right_pane_g4

0x0003,

0xfe69,	// (0x00017547) ai5_sk_right_pane_g

0x1af3,	// (0x000091d1) ai5_sk_right_pane_t1

0xb1a9,	// (0x00012887) ai5_sk_middle_pane_g1

0xb1a1,	// (0x0001287f) ai5_sk_middle_pane_g2

0xb1c1,	// (0x0001289f) ai5_sk_middle_pane_g3

0x1ae3,	// (0x000091c1) ai5_sk_middle_pane_g4

0x1abd,	// (0x0000919b) ai5_sk_middle_pane_g5

0x1b01,	// (0x000091df) ai5_sk_middle_pane_g6

0x6811,	// (0x0000deef) ai5_sk_middle_pane_g7

0x0006,

0xfe72,	// (0x00017550) ai5_sk_middle_pane_g

0x44ce,	// (0x0000bbac) aid_touch_area_size_lc0_ParamLimits

0x44ce,	// (0x0000bbac) aid_touch_area_size_lc0

0x7ebe,	// (0x0000f59c) cell_hwr_candidate_pane_t1_ParamLimits

0xad30,	// (0x0001240e) aid_touch_navi_pane

0x473b,	// (0x0000be19) status_dt_navi_pane_ParamLimits

0x473b,	// (0x0000be19) status_dt_navi_pane

0x4753,	// (0x0000be31) status_dt_sta_pane_ParamLimits

0x4753,	// (0x0000be31) status_dt_sta_pane

0x6819,	// (0x0000def7) dt_sta_controll_pane

0x6826,	// (0x0000df04) dt_sta_indi_pane

0x6833,	// (0x0000df11) dt_sta_title_pane

0x8cd5,	// (0x000103b3) bg_dt_sta_indi_pane_ParamLimits

0x8cd5,	// (0x000103b3) bg_dt_sta_indi_pane

0x6845,	// (0x0000df23) dt_sta_battery_pane

0x684d,	// (0x0000df2b) dt_sta_indi_pane_g1

0x6856,	// (0x0000df34) dt_sta_indi_pane_g2

0x685f,	// (0x0000df3d) dt_sta_indi_pane_g3

0x0002,

0xfe81,	// (0x0001755f) dt_sta_indi_pane_g

0x6868,	// (0x0000df46) dt_sta_signal_pane

0x9744,	// (0x00010e22) bg_dt_sta_title_pane_ParamLimits

0x9744,	// (0x00010e22) bg_dt_sta_title_pane

0x6871,	// (0x0000df4f) dt_sta_title_pane_g1

0x6879,	// (0x0000df57) dt_sta_title_pane_t1_ParamLimits

0x6879,	// (0x0000df57) dt_sta_title_pane_t1

0x885d,	// (0x0000ff3b) bg_dt_sta_control_pane

0x688e,	// (0x0000df6c) dt_sta_controll_pane_g1

0x6897,	// (0x0000df75) bg_dt_sta_title_pane_g1

0x68a0,	// (0x0000df7e) bg_dt_sta_title_pane_g2

0x68a9,	// (0x0000df87) bg_dt_sta_title_pane_g3

0x0002,

0xfe88,	// (0x00017566) bg_dt_sta_title_pane_g

0xe3f8,	// (0x00015ad6) bg_dt_sta_indi_pane_g1

0x68b2,	// (0x0000df90) dt_sta_signal_pane_g1

0x68ba,	// (0x0000df98) dt_sta_signal_pane_g2

0x0001,

0xfe8f,	// (0x0001756d) dt_sta_signal_pane_g

0x1bbf,	// (0x0000929d) dt_sta_battery_pane_g1

0x1bc8,	// (0x000092a6) dt_sta_battery_pane_t1

0xe3f8,	// (0x00015ad6) bg_dt_sta_control_pane_g1

0x9fcf,	// (0x000116ad) fep_china_uni_eep_pane

0x9fd7,	// (0x000116b5) fep_china_uni_entry_pane_ParamLimits

0x9fe7,	// (0x000116c5) popup_fep_china_uni_window_g1_ParamLimits

0x9ff7,	// (0x000116d5) popup_fep_china_uni_window_g2_ParamLimits

0x9ff7,	// (0x000116d5) popup_fep_china_uni_window_g2

0x0001,

0xf726,	// (0x00016e04) popup_fep_china_uni_window_g_ParamLimits

0xf726,	// (0x00016e04) popup_fep_china_uni_window_g

0x1bd7,	// (0x000092b5) fep_china_uni_eep_pane_g1

0x1bdf,	// (0x000092bd) fep_china_uni_eep_pane_t1

0x16e0,	// (0x00008dbe) aid_touch_area_size_smil_player

0xae67,	// (0x00012545) lc0_clock_pane

0xb039,	// (0x00012717) status_pane_g5_ParamLimits

0xb039,	// (0x00012717) status_pane_g5

0x4062,	// (0x0000b740) popup_keymap_window

0xb001,	// (0x000126df) status_icon_pane

0x6683,	// (0x0000dd61) cell_ai5_widget_pane_g3_ParamLimits

0x66a2,	// (0x0000dd80) cell_ai5_widget_pane_g4_ParamLimits

0x66ae,	// (0x0000dd8c) cell_ai5_widget_pane_g5_ParamLimits

0x66d2,	// (0x0000ddb0) cell_ai5_widget_pane_g8_ParamLimits

0x66d2,	// (0x0000ddb0) cell_ai5_widget_pane_g8

0x66e6,	// (0x0000ddc4) cell_ai5_widget_pane_g9_ParamLimits

0x66e6,	// (0x0000ddc4) cell_ai5_widget_pane_g9

0x66fa,	// (0x0000ddd8) cell_ai5_widget_pane_g10_ParamLimits

0x66fa,	// (0x0000ddd8) cell_ai5_widget_pane_g10

0x1bee,	// (0x000092cc) status_icon_pane_g1

0x885d,	// (0x0000ff3b) bg_popup_sub_pane_cp13

0x1bf6,	// (0x000092d4) popup_keymap_window_t1

0x3dd0,	// (0x0000b4ae) control_pane_g6_ParamLimits

0x3dd0,	// (0x0000b4ae) control_pane_g6

0x3dc3,	// (0x0000b4a1) control_pane_g7_ParamLimits

0x3dc3,	// (0x0000b4a1) control_pane_g7

0x3db6,	// (0x0000b494) control_pane_g8_ParamLimits

0x3db6,	// (0x0000b494) control_pane_g8

0x6819,	// (0x0000def7) dt_sta_controll_pane_ParamLimits

0x6826,	// (0x0000df04) dt_sta_indi_pane_ParamLimits

0x6833,	// (0x0000df11) dt_sta_title_pane_ParamLimits

0x9160,	// (0x0001083e) aid_size_touch_scroll_bar_cale

0x7012,	// (0x0000e6f0) popup_discreet_window_ParamLimits

0x7012,	// (0x0000e6f0) popup_discreet_window

0xc869,	// (0x00013f47) popup_sk_window

0xb858,	// (0x00012f36) bg_popup_sub_pane_cp28_ParamLimits

0xb858,	// (0x00012f36) bg_popup_sub_pane_cp28

0x1c04,	// (0x000092e2) popup_discreet_window_g1_ParamLimits

0x1c04,	// (0x000092e2) popup_discreet_window_g1

0x1c24,	// (0x00009302) popup_discreet_window_t1_ParamLimits

0x1c24,	// (0x00009302) popup_discreet_window_t1

0x1c42,	// (0x00009320) popup_discreet_window_t2_ParamLimits

0x1c42,	// (0x00009320) popup_discreet_window_t2

0x0002,

0xfe94,	// (0x00017572) popup_discreet_window_t_ParamLimits

0xfe94,	// (0x00017572) popup_discreet_window_t

0x882b,	// (0x0000ff09) popup_sk_window_g1

0x8834,	// (0x0000ff12) popup_sk_window_g2

0x0001,

0xfe9b,	// (0x00017579) popup_sk_window_g

0x1cb4,	// (0x00009392) popup_sk_window_t1

0x1ca6,	// (0x00009384) popup_sk_window_t1_copy1

0x6673,	// (0x0000dd51) cell_ai5_widget_pane_g2_ParamLimits

0x67a6,	// (0x0000de84) cell_ai5_widget_pane_t9_ParamLimits

0x67a6,	// (0x0000de84) cell_ai5_widget_pane_t9

0x885d,	// (0x0000ff3b) main_fep_fshwr2_pane

0x68c2,	// (0x0000dfa0) aid_fshwr2_btn_pane

0x68ca,	// (0x0000dfa8) aid_fshwr2_syb_pane

0x68d2,	// (0x0000dfb0) aid_fshwr2_txt_pane

0x68da,	// (0x0000dfb8) fshwr2_func_candi_pane

0x68e2,	// (0x0000dfc0) fshwr2_hwr_syb_pane

0x68ea,	// (0x0000dfc8) fshwr2_icf_pane

0x885d,	// (0x0000ff3b) fshwr2_icf_bg_pane

0x68f2,	// (0x0000dfd0) fshwr2_icf_pane_t1_ParamLimits

0x68f2,	// (0x0000dfd0) fshwr2_icf_pane_t1

0xe3f8,	// (0x00015ad6) fshwr2_func_candi_pane_g1

0x1d1b,	// (0x000093f9) fshwr2_func_candi_row_pane_ParamLimits

0x1d1b,	// (0x000093f9) fshwr2_func_candi_row_pane

0x690a,	// (0x0000dfe8) cell_fshwr2_syb_pane_ParamLimits

0x690a,	// (0x0000dfe8) cell_fshwr2_syb_pane

0xe634,	// (0x00015d12) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe634,	// (0x00015d12) fshwr2_hwr_syb_pane_g1

0x885d,	// (0x0000ff3b) bg_popup_call_pane_cp01

0x1d43,	// (0x00009421) fshwr2_func_candi_cell_pane_ParamLimits

0x1d43,	// (0x00009421) fshwr2_func_candi_cell_pane

0x1d6e,	// (0x0000944c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x1d6e,	// (0x0000944c) fshwr2_func_candi_cell_bg_pane

0x1d88,	// (0x00009466) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x1d88,	// (0x00009466) fshwr2_func_candi_cell_pane_g1

0x1da8,	// (0x00009486) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x1da8,	// (0x00009486) fshwr2_func_candi_cell_pane_t1

0x885d,	// (0x0000ff3b) bg_button_pane_cp08

0xa4d1,	// (0x00011baf) cell_fshwr2_syb_bg_pane

0x6921,	// (0x0000dfff) cell_fshwr2_syb_bg_pane_g1

0x6929,	// (0x0000e007) cell_fshwr2_syb_bg_pane_t1

0x9744,	// (0x00010e22) main_tmo_pane

0x4bbb,	// (0x0000c299) uni_indicator_pane_g1_ParamLimits

0x4bd0,	// (0x0000c2ae) uni_indicator_pane_g2_ParamLimits

0x4be6,	// (0x0000c2c4) uni_indicator_pane_g3_ParamLimits

0xd46b,	// (0x00014b49) uni_indicator_pane_g4_ParamLimits

0xd46b,	// (0x00014b49) uni_indicator_pane_g4

0xd47f,	// (0x00014b5d) uni_indicator_pane_g5_ParamLimits

0xd47f,	// (0x00014b5d) uni_indicator_pane_g5

0xd493,	// (0x00014b71) uni_indicator_pane_g6_ParamLimits

0xd493,	// (0x00014b71) uni_indicator_pane_g6

0xf917,	// (0x00016ff5) uni_indicator_pane_g_ParamLimits

0x57d6,	// (0x0000ceb4) popup_tmo_note_window_ParamLimits

0x57d6,	// (0x0000ceb4) popup_tmo_note_window

0x885d,	// (0x0000ff3b) fshwr2_bg_pane

0x1d99,	// (0x00009477) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x1d99,	// (0x00009477) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea0,	// (0x0001757e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea0,	// (0x0001757e) fshwr2_func_candi_cell_pane_g

0xe3f8,	// (0x00015ad6) bg_popup_window_pane_cp01

0x1dd2,	// (0x000094b0) bg_popup_window_pane_g1_cp01

0x1ddb,	// (0x000094b9) bg_popup_window_pane_cp22_ParamLimits

0x1ddb,	// (0x000094b9) bg_popup_window_pane_cp22

0x1de9,	// (0x000094c7) listscroll_tmo_link_pane_ParamLimits

0x1de9,	// (0x000094c7) listscroll_tmo_link_pane

0x1e29,	// (0x00009507) popup_tmo_note_window_g1_ParamLimits

0x1e29,	// (0x00009507) popup_tmo_note_window_g1

0x1e36,	// (0x00009514) tmo_note_info_pane_ParamLimits

0x1e36,	// (0x00009514) tmo_note_info_pane

0x6938,	// (0x0000e016) list_tmo_note_info_pane_g1_ParamLimits

0x6938,	// (0x0000e016) list_tmo_note_info_pane_g1

0x1e67,	// (0x00009545) list_tmo_note_info_pane_g2_ParamLimits

0x1e67,	// (0x00009545) list_tmo_note_info_pane_g2

0x0001,

0xfea5,	// (0x00017583) list_tmo_note_info_pane_g_ParamLimits

0xfea5,	// (0x00017583) list_tmo_note_info_pane_g

0x1e83,	// (0x00009561) list_tmo_note_info_text_pane_ParamLimits

0x1e83,	// (0x00009561) list_tmo_note_info_text_pane

0x1f04,	// (0x000095e2) list_tmo_link_pane

0x1f11,	// (0x000095ef) scroll_pane_cp20

0x1f1e,	// (0x000095fc) list_single_tmo_link_pane_ParamLimits

0x1f1e,	// (0x000095fc) list_single_tmo_link_pane

0x1f2e,	// (0x0000960c) list_single_tmo_link_pane_t1

0x1f3c,	// (0x0000961a) list_tmo_note_info_text_pane_t1_ParamLimits

0x1f3c,	// (0x0000961a) list_tmo_note_info_text_pane_t1

0x996a,	// (0x00011048) aid_size_touch_scroll_bar_cp01_ParamLimits

0x996a,	// (0x00011048) aid_size_touch_scroll_bar_cp01

0x393d,	// (0x0000b01b) aid_size_touch_slider_marker

0xc85d,	// (0x00013f3b) popup_settings_window_ParamLimits

0xc85d,	// (0x00013f3b) popup_settings_window

0xa86a,	// (0x00011f48) popup_candi_list_indi_window

0xad30,	// (0x0001240e) aid_touch_navi_pane_ParamLimits

0x807e,	// (0x0000f75c) rs_clock_indi_pane

0x8087,	// (0x0000f765) sctrl_sk_bottom_pane_ParamLimits

0x8098,	// (0x0000f776) sctrl_sk_top_pane_ParamLimits

0x81a0,	// (0x0000f87e) popup_fep_tooltip_window

0x1803,	// (0x00008ee1) aid_size_cell_widget_grid_ParamLimits

0x6667,	// (0x0000dd45) cell_ai5_widget_pane_g1_ParamLimits

0x6667,	// (0x0000dd45) cell_ai5_widget_pane_g1

0x66ba,	// (0x0000dd98) cell_ai5_widget_pane_g6_ParamLimits

0x66c6,	// (0x0000dda4) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe23,	// (0x00017501) cell_ai5_widget_pane_g_ParamLimits

0xfe23,	// (0x00017501) cell_ai5_widget_pane_g

0x67ca,	// (0x0000dea8) cell_ai5_widget_pane_t10_ParamLimits

0x67ca,	// (0x0000dea8) cell_ai5_widget_pane_t10

0x67df,	// (0x0000debd) grid_ai5_widget_pane_ParamLimits

0x1a72,	// (0x00009150) cell_contacts_ai5_widget_pane_ParamLimits

0x1a72,	// (0x00009150) cell_contacts_ai5_widget_pane

0x1c57,	// (0x00009335) popup_discreet_window_t3_ParamLimits

0x1c57,	// (0x00009335) popup_discreet_window_t3

0x1cf2,	// (0x000093d0) popup_fshwr2_char_preview_window_ParamLimits

0x1cf2,	// (0x000093d0) popup_fshwr2_char_preview_window

0x694f,	// (0x0000e02d) tmo_note_info_pane_t1

0x6964,	// (0x0000e042) tmo_note_info_pane_t2

0x6979,	// (0x0000e057) tmo_note_info_pane_t3

0x1ee0,	// (0x000095be) tmo_note_info_pane_t4

0x1ef2,	// (0x000095d0) tmo_note_info_pane_t5

0x0004,

0xfeaa,	// (0x00017588) tmo_note_info_pane_t

0x1f04,	// (0x000095e2) list_tmo_link_pane_ParamLimits

0x1f11,	// (0x000095ef) scroll_pane_cp20_ParamLimits

0x885d,	// (0x0000ff3b) bg_popup_fep_char_preview_window_cp01

0x1f55,	// (0x00009633) popup_fshwr2_char_preview_window_t1

0x1f63,	// (0x00009641) popup_candi_list_indi_window_g1

0x1f6c,	// (0x0000964a) bg_cell_contacts_ai5_widget_pane

0x1f78,	// (0x00009656) cell_contacts_ai5_widget_pane_g1

0x1f8c,	// (0x0000966a) cell_contacts_ai5_widget_pane_g2

0x1f9b,	// (0x00009679) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb5,	// (0x00017593) cell_contacts_ai5_widget_pane_g

0x1fae,	// (0x0000968c) cell_contacts_ai5_widget_pane_t1

0x9744,	// (0x00010e22) highlight_cell_shortcut_ai5_widget_pane_cp01

0x69f1,	// (0x0000e0cf) settings_container_pane

0xa4d1,	// (0x00011baf) listscroll_set_pane_copy1

0xdc65,	// (0x00015343) scroll_pane_cp121_copy1

0x2032,	// (0x00009710) set_content_pane_copy1

0x203a,	// (0x00009718) aid_height_set_list_copy1_ParamLimits

0x203a,	// (0x00009718) aid_height_set_list_copy1

0xd62c,	// (0x00014d0a) aid_size_parent_copy1_ParamLimits

0xd62c,	// (0x00014d0a) aid_size_parent_copy1

0x2046,	// (0x00009724) button_value_adjust_pane_cp6_copy1_ParamLimits

0x2046,	// (0x00009724) button_value_adjust_pane_cp6_copy1

0xa844,	// (0x00011f22) list_highlight_pane_cp2_copy1_ParamLimits

0xa844,	// (0x00011f22) list_highlight_pane_cp2_copy1

0x69fd,	// (0x0000e0db) list_set_pane_copy1_ParamLimits

0x69fd,	// (0x0000e0db) list_set_pane_copy1

0x698e,	// (0x0000e06c) main_pane_set_t1_copy1_ParamLimits

0x698e,	// (0x0000e06c) main_pane_set_t1_copy1

0x69c8,	// (0x0000e0a6) main_pane_set_t2_copy1_ParamLimits

0x69c8,	// (0x0000e0a6) main_pane_set_t2_copy1

0x20e8,	// (0x000097c6) main_pane_set_t3_copy1

0x20f6,	// (0x000097d4) main_pane_set_t4_copy1

0x69e5,	// (0x0000e0c3) set_content_pane_g1_copy1_ParamLimits

0x69e5,	// (0x0000e0c3) set_content_pane_g1_copy1

0x2104,	// (0x000097e2) setting_code_pane_copy1

0x210c,	// (0x000097ea) setting_slider_graphic_pane_copy1

0x210c,	// (0x000097ea) setting_slider_pane_copy1

0x210c,	// (0x000097ea) setting_text_pane_copy1

0x210c,	// (0x000097ea) setting_volume_pane_copy1

0x2114,	// (0x000097f2) settings_code_pane_cp2_copy1

0x211c,	// (0x000097fa) settings_code_pane_cp_copy1_ParamLimits

0x211c,	// (0x000097fa) settings_code_pane_cp_copy1

0x6a8b,	// (0x0000e169) volume_set_pane_copy1

0x6a93,	// (0x0000e171) volume_set_pane_g10_copy1

0x6a9b,	// (0x0000e179) volume_set_pane_g1_copy1

0x6aa3,	// (0x0000e181) volume_set_pane_g2_copy1

0x6aab,	// (0x0000e189) volume_set_pane_g3_copy1

0x6ab3,	// (0x0000e191) volume_set_pane_g4_copy1

0x6abb,	// (0x0000e199) volume_set_pane_g5_copy1

0x6ac3,	// (0x0000e1a1) volume_set_pane_g6_copy1

0x6acb,	// (0x0000e1a9) volume_set_pane_g7_copy1

0x6ad3,	// (0x0000e1b1) volume_set_pane_g8_copy1

0x6adb,	// (0x0000e1b9) volume_set_pane_g9_copy1

0x8a2e,	// (0x0001010c) bg_set_opt_pane_cp_copy1_ParamLimits

0x8a2e,	// (0x0001010c) bg_set_opt_pane_cp_copy1

0x8eed,	// (0x000105cb) setting_slider_pane_t1_copy1_ParamLimits

0x8eed,	// (0x000105cb) setting_slider_pane_t1_copy1

0x2188,	// (0x00009866) setting_slider_pane_t2_copy1_ParamLimits

0x2188,	// (0x00009866) setting_slider_pane_t2_copy1

0x21a1,	// (0x0000987f) setting_slider_pane_t3_copy1_ParamLimits

0x21a1,	// (0x0000987f) setting_slider_pane_t3_copy1

0x8f03,	// (0x000105e1) slider_set_pane_copy1_ParamLimits

0x8f03,	// (0x000105e1) slider_set_pane_copy1

0x986a,	// (0x00010f48) set_opt_bg_pane_g1_copy2

0x9872,	// (0x00010f50) set_opt_bg_pane_g2_copy2

0x21b8,	// (0x00009896) set_opt_bg_pane_g3_copy2

0x9882,	// (0x00010f60) set_opt_bg_pane_g4_copy2

0x988a,	// (0x00010f68) set_opt_bg_pane_g5_copy2

0x9892,	// (0x00010f70) set_opt_bg_pane_g6_copy2

0x6ae3,	// (0x0000e1c1) set_opt_bg_pane_g7_copy2

0x21c8,	// (0x000098a6) set_opt_bg_pane_g8_copy2

0x21d0,	// (0x000098ae) set_opt_bg_pane_g9_copy2

0xdb17,	// (0x000151f5) aid_size_touch_slider_mark_copy1_ParamLimits

0xdb17,	// (0x000151f5) aid_size_touch_slider_mark_copy1

0xd63e,	// (0x00014d1c) slider_set_pane_g1_copy1

0xd647,	// (0x00014d25) slider_set_pane_g2_copy1

0xdb2b,	// (0x00015209) slider_set_pane_g3_copy1_ParamLimits

0xdb2b,	// (0x00015209) slider_set_pane_g3_copy1

0xdb3f,	// (0x0001521d) slider_set_pane_g4_copy1_ParamLimits

0xdb3f,	// (0x0001521d) slider_set_pane_g4_copy1

0xdb57,	// (0x00015235) slider_set_pane_g5_copy1_ParamLimits

0xdb57,	// (0x00015235) slider_set_pane_g5_copy1

0xdb2b,	// (0x00015209) slider_set_pane_g6_copy1_ParamLimits

0xdb2b,	// (0x00015209) slider_set_pane_g6_copy1

0x6aeb,	// (0x0000e1c9) slider_set_pane_g7_copy1_ParamLimits

0x6aeb,	// (0x0000e1c9) slider_set_pane_g7_copy1

0x894e,	// (0x0001002c) bg_set_opt_pane_cp2_copy1

0x8a70,	// (0x0001014e) setting_slider_graphic_pane_g1_copy1

0x6b01,	// (0x0000e1df) setting_slider_graphic_pane_t1_copy1

0x6b10,	// (0x0000e1ee) setting_slider_graphic_pane_t2_copy1

0x6b1f,	// (0x0000e1fd) slider_set_pane_cp_copy1

0x221c,	// (0x000098fa) input_focus_pane_cp1_copy1

0x2225,	// (0x00009903) list_set_text_pane_copy1

0x222d,	// (0x0000990b) setting_text_pane_g1_copy1

0x2236,	// (0x00009914) set_text_pane_t1_copy1

0x221c,	// (0x000098fa) input_focus_pane_cp2_copy1

0x222d,	// (0x0000990b) setting_code_pane_g1_copy1

0x224f,	// (0x0000992d) setting_code_pane_t1_copy1

0x3cc5,	// (0x0000b3a3) list_set_graphic_pane_copy1

0x894e,	// (0x0001002c) bg_set_opt_pane_cp4_copy1

0x2271,	// (0x0000994f) list_set_graphic_pane_g1_copy1_ParamLimits

0x2271,	// (0x0000994f) list_set_graphic_pane_g1_copy1

0x227d,	// (0x0000995b) list_set_graphic_pane_g2_copy1

0xa24c,	// (0x0001192a) list_set_graphic_pane_t1_copy1_ParamLimits

0xa24c,	// (0x0001192a) list_set_graphic_pane_t1_copy1

0xe3f8,	// (0x00015ad6) rs_clock_indi_pane_g1

0x2285,	// (0x00009963) rs_clock_indi_pane_t1

0x2293,	// (0x00009971) rs_indi_pane

0x229b,	// (0x00009979) rs_indi_pane_g1

0x22a4,	// (0x00009982) rs_indi_pane_g2

0x1f63,	// (0x00009641) rs_indi_pane_g3

0x0002,

0xfebc,	// (0x0001759a) rs_indi_pane_g

0xa4d1,	// (0x00011baf) bg_popup_preview_window_pane_cp03

0x22ad,	// (0x0000998b) popup_fep_tooltip_window_t1

0xef49,	// (0x00016627) popup_note2_window_g2_ParamLimits

0xef49,	// (0x00016627) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0001733a) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0001733a) popup_note2_window_g

0xf409,	// (0x00016ae7) bg_popup_sub_pane_cp11_ParamLimits

0xf416,	// (0x00016af4) cell_ai3_links_pane_g1_ParamLimits

0xf42d,	// (0x00016b0b) cell_ai3_links_pane_t1

0x2236,	// (0x00009914) set_text_pane_t1_copy1_ParamLimits

0xa3f8,	// (0x00011ad6) cell_graphic_popup_pane_cp2_ParamLimits

0xa3f8,	// (0x00011ad6) cell_graphic_popup_pane_cp2

0x22bb,	// (0x00009999) cell_graphic_popup_pane_g1_cp2

0x900f,	// (0x000106ed) cell_graphic_popup_pane_g2_cp2

0x22c3,	// (0x000099a1) cell_graphic_popup_pane_g3_cp2

0x22cb,	// (0x000099a9) cell_graphic_popup_pane_t2_cp2

0x9020,	// (0x000106fe) grid_highlight_pane_cp3_cp2

0x9c56,	// (0x00011334) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x9744,	// (0x00010e22) main_tmo_pane_ParamLimits

0x57ce,	// (0x0000ceac) popup_tmo_big_image_note_window

0x6657,	// (0x0000dd35) cell_ai5_widget_list_pane

0x665f,	// (0x0000dd3d) cell_ai5_widget_lrg_icon_pane

0x694f,	// (0x0000e02d) tmo_note_info_pane_t1_ParamLimits

0x6964,	// (0x0000e042) tmo_note_info_pane_t2_ParamLimits

0x6979,	// (0x0000e057) tmo_note_info_pane_t3_ParamLimits

0x1ee0,	// (0x000095be) tmo_note_info_pane_t4_ParamLimits

0x1ef2,	// (0x000095d0) tmo_note_info_pane_t5_ParamLimits

0xfeaa,	// (0x00017588) tmo_note_info_pane_t_ParamLimits

0x69f1,	// (0x0000e0cf) settings_container_pane_ParamLimits

0x2214,	// (0x000098f2) indicator_popup_pane_cp5

0x2214,	// (0x000098f2) indicator_popup_pane_cp6

0x3cc5,	// (0x0000b3a3) list_set_graphic_pane_copy1_ParamLimits

0x885d,	// (0x0000ff3b) bg_popup_window_pane_cp23

0x22d9,	// (0x000099b7) popup_tmo_big_image_note_window_g1

0x22e2,	// (0x000099c0) popup_tmo_big_image_note_window_t1

0x22f0,	// (0x000099ce) popup_tmo_big_image_note_window_t2

0x22fe,	// (0x000099dc) popup_tmo_big_image_note_window_t3

0x0002,

0xfec3,	// (0x000175a1) popup_tmo_big_image_note_window_t

0x6b27,	// (0x0000e205) cell_ai5_widget_lrg_icon_pane_g1

0x6b2f,	// (0x0000e20d) cell_ai5_widget_lrg_icon_pane_t1

0x6b3d,	// (0x0000e21b) cell_ai5_widget_list_row_pane_ParamLimits

0x6b3d,	// (0x0000e21b) cell_ai5_widget_list_row_pane

0x6b56,	// (0x0000e234) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x6b56,	// (0x0000e234) cell_ai5_widget_list_row_pane_g1

0x6b63,	// (0x0000e241) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x6b63,	// (0x0000e241) cell_ai5_widget_list_row_pane_t1

0x6b7b,	// (0x0000e259) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x6b7b,	// (0x0000e259) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeca,	// (0x000175a8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeca,	// (0x000175a8) cell_ai5_widget_list_row_pane_t

0x6f3b,	// (0x0000e619) main_fep_vtchi_ss_pane

0x2372,	// (0x00009a50) popup_fep_char_pre_window

0x237a,	// (0x00009a58) popup_fep_ituss_window

0x2397,	// (0x00009a75) popup_fep_vkbss_window

0x23b6,	// (0x00009a94) grid_vkbss_keypad_pane_ParamLimits

0x23b6,	// (0x00009a94) grid_vkbss_keypad_pane

0x23c6,	// (0x00009aa4) ituss_keypad_pane

0x23df,	// (0x00009abd) aid_vkbss_key_offset_ParamLimits

0x23df,	// (0x00009abd) aid_vkbss_key_offset

0x23eb,	// (0x00009ac9) cell_vkbss_key_pane_ParamLimits

0x23eb,	// (0x00009ac9) cell_vkbss_key_pane

0x2401,	// (0x00009adf) bg_cell_vkbss_key_g1_ParamLimits

0x2401,	// (0x00009adf) bg_cell_vkbss_key_g1

0x240d,	// (0x00009aeb) cell_vkbss_key_3p_pane_ParamLimits

0x240d,	// (0x00009aeb) cell_vkbss_key_3p_pane

0x2427,	// (0x00009b05) cell_vkbss_key_g1_ParamLimits

0x2427,	// (0x00009b05) cell_vkbss_key_g1

0x2441,	// (0x00009b1f) cell_vkbss_key_t1_ParamLimits

0x2441,	// (0x00009b1f) cell_vkbss_key_t1

0x246c,	// (0x00009b4a) cell_ituss_key_pane_ParamLimits

0x246c,	// (0x00009b4a) cell_ituss_key_pane

0x247c,	// (0x00009b5a) bg_cell_ituss_key_g1_ParamLimits

0x247c,	// (0x00009b5a) bg_cell_ituss_key_g1

0x2488,	// (0x00009b66) cell_ituss_key_pane_g1_ParamLimits

0x2488,	// (0x00009b66) cell_ituss_key_pane_g1

0x2494,	// (0x00009b72) cell_ituss_key_pane_g2_ParamLimits

0x2494,	// (0x00009b72) cell_ituss_key_pane_g2

0x0001,

0xfecf,	// (0x000175ad) cell_ituss_key_pane_g_ParamLimits

0xfecf,	// (0x000175ad) cell_ituss_key_pane_g

0x24ad,	// (0x00009b8b) cell_ituss_key_t1_ParamLimits

0x24ad,	// (0x00009b8b) cell_ituss_key_t1

0x24db,	// (0x00009bb9) cell_ituss_key_t2_ParamLimits

0x24db,	// (0x00009bb9) cell_ituss_key_t2

0x250c,	// (0x00009bea) cell_ituss_key_t3_ParamLimits

0x250c,	// (0x00009bea) cell_ituss_key_t3

0x253d,	// (0x00009c1b) cell_ituss_key_t4_ParamLimits

0x253d,	// (0x00009c1b) cell_ituss_key_t4

0x0003,

0xfed4,	// (0x000175b2) cell_ituss_key_t_ParamLimits

0xfed4,	// (0x000175b2) cell_ituss_key_t

0x256e,	// (0x00009c4c) cell_vkbss_key_3p_pane_g1

0x2576,	// (0x00009c54) cell_vkbss_key_3p_pane_g2

0x257e,	// (0x00009c5c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedd,	// (0x000175bb) cell_vkbss_key_3p_pane_g

0x885d,	// (0x0000ff3b) bg_popup_fep_char_preview_window_cp02

0x2586,	// (0x00009c64) popup_fep_char_pre_window_t1

0x664d,	// (0x0000dd2b) main_ai5_sk_pane

0x1f6c,	// (0x0000964a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x1f78,	// (0x00009656) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x1f8c,	// (0x0000966a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x1f9b,	// (0x00009679) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb5,	// (0x00017593) cell_contacts_ai5_widget_pane_g_ParamLimits

0x1fae,	// (0x0000968c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x9744,	// (0x00010e22) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x6b8d,	// (0x0000e26b) main_ai5_sk_pane_g1

0xb6a2,	// (0x00012d80) popup_query_code_window_g1

0x238c,	// (0x00009a6a) popup_fep_vkb_icf_pane

0x23a0,	// (0x00009a7e) popup_fep_vtchi_icf_pane

0x9744,	// (0x00010e22) bg_icf_pane

0x25ad,	// (0x00009c8b) list_vkb_icf_pane

0x9744,	// (0x00010e22) bg_icf_pane_cp01

0x0063,	// (0x00007741) vtchi_icf_list_pane

0x25cd,	// (0x00009cab) list_vkb_icf_pane_t1_ParamLimits

0x25cd,	// (0x00009cab) list_vkb_icf_pane_t1

0x25e4,	// (0x00009cc2) vtchi_icf_list_pane_t1_ParamLimits

0x25e4,	// (0x00009cc2) vtchi_icf_list_pane_t1

0x237a,	// (0x00009a58) popup_fep_ituss_window_ParamLimits

0x23a0,	// (0x00009a7e) popup_fep_vtchi_icf_pane_ParamLimits

0x23c6,	// (0x00009aa4) ituss_keypad_pane_ParamLimits

0x23d6,	// (0x00009ab4) ituss_sks_pane

0x9744,	// (0x00010e22) bg_icf_pane_ParamLimits

0x259e,	// (0x00009c7c) icf_edit_indi_pane_ParamLimits

0x259e,	// (0x00009c7c) icf_edit_indi_pane

0x25ad,	// (0x00009c8b) list_vkb_icf_pane_ParamLimits

0x9744,	// (0x00010e22) bg_icf_pane_cp01_ParamLimits

0x25b9,	// (0x00009c97) icf_edit_indi_pane_cp01_ParamLimits

0x25b9,	// (0x00009c97) icf_edit_indi_pane_cp01

0x25c5,	// (0x00009ca3) vtchi_query_pane

0xe634,	// (0x00015d12) icf_edit_indi_pane_g1_ParamLimits

0xe634,	// (0x00015d12) icf_edit_indi_pane_g1

0x25fd,	// (0x00009cdb) icf_edit_indi_pane_g2_ParamLimits

0x25fd,	// (0x00009cdb) icf_edit_indi_pane_g2

0x0001,

0xfee4,	// (0x000175c2) icf_edit_indi_pane_g_ParamLimits

0xfee4,	// (0x000175c2) icf_edit_indi_pane_g

0x2609,	// (0x00009ce7) icf_edit_indi_pane_t1

0x2617,	// (0x00009cf5) bg_input_focus_pane_cp042

0x2620,	// (0x00009cfe) vtchi_button_pane

0x2629,	// (0x00009d07) vtchi_query_pane_t1

0x2637,	// (0x00009d15) vtchi_query_pane_t2

0x2645,	// (0x00009d23) vtchi_query_pane_t3

0x0002,

0xfee9,	// (0x000175c7) vtchi_query_pane_t

0x885d,	// (0x0000ff3b) bg_button_pane_cp13

0x2653,	// (0x00009d31) vtchi_button_pane_g1

0x064e,	// (0x00007d2c) ituss_sks_pane_g1

0x265b,	// (0x00009d39) ituss_sks_pane_g2

0x0001,

0xfef0,	// (0x000175ce) ituss_sks_pane_g

0x2664,	// (0x00009d42) ituss_sks_pane_t1

0x2672,	// (0x00009d50) ituss_sks_pane_t2

0x0001,

0xfef5,	// (0x000175d3) ituss_sks_pane_t

0xe09a,	// (0x00015778) indicator_nsta_pane_cp_g1

0xe0a3,	// (0x00015781) indicator_nsta_pane_cp_g2

0xe0ab,	// (0x00015789) indicator_nsta_pane_cp_g3

0xe0b3,	// (0x00015791) indicator_nsta_pane_cp_g4

0xe0bb,	// (0x00015799) indicator_nsta_pane_cp_g5

0xe0c3,	// (0x000157a1) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x00017178) indicator_nsta_pane_cp_g

0x6455,	// (0x0000db33) cell_graphic2_pane_t2_ParamLimits

0x6455,	// (0x0000db33) cell_graphic2_pane_t2

0x0001,

0xfdac,	// (0x0001748a) cell_graphic2_pane_t_ParamLimits

0xfdac,	// (0x0001748a) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal

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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000d1b9 };

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
0x72b9,	// (0x00014472) Screen

0x72c5,	// (0x0001447e) application_window_ParamLimits

0x72c5,	// (0x0001447e) application_window

0x3253,	// (0x0001040c) screen_g1

0x530c,	// (0x000124c5) area_bottom_pane_ParamLimits

0x530c,	// (0x000124c5) area_bottom_pane

0x53cc,	// (0x00012585) area_top_pane_ParamLimits

0x53cc,	// (0x00012585) area_top_pane

0x546a,	// (0x00012623) main_pane_ParamLimits

0x546a,	// (0x00012623) main_pane

0x33cc,	// (0x00010585) misc_graphics

0x8a40,	// (0x00015bf9) battery_pane_ParamLimits

0x8a40,	// (0x00015bf9) battery_pane

0x980d,	// (0x000169c6) bg_status_flat_pane_g8

0x9815,	// (0x000169ce) bg_status_flat_pane_g9

0x8b08,	// (0x00015cc1) context_pane_ParamLimits

0x8b08,	// (0x00015cc1) context_pane

0x8c2c,	// (0x00015de5) navi_pane_ParamLimits

0x8c2c,	// (0x00015de5) navi_pane

0x8cbc,	// (0x00015e75) signal_pane_ParamLimits

0x8cbc,	// (0x00015e75) signal_pane

0x0008,

0xf874,	// (0x0001ca2d) bg_status_flat_pane_g

0x8d29,	// (0x00015ee2) status_pane_g1_ParamLimits

0x8d29,	// (0x00015ee2) status_pane_g1

0x8d3d,	// (0x00015ef6) status_pane_g2_ParamLimits

0x8d3d,	// (0x00015ef6) status_pane_g2

0x8d49,	// (0x00015f02) status_pane_g3_ParamLimits

0x8d49,	// (0x00015f02) status_pane_g3

0x0004,

0xf79b,	// (0x0001c954) status_pane_g_ParamLimits

0xf79b,	// (0x0001c954) status_pane_g

0x8d7d,	// (0x00015f36) title_pane_ParamLimits

0x8d7d,	// (0x00015f36) title_pane

0x8dba,	// (0x00015f73) uni_indicator_pane_ParamLimits

0x8dba,	// (0x00015f73) uni_indicator_pane

0x8321,	// (0x000154da) bg_list_pane_ParamLimits

0x8321,	// (0x000154da) bg_list_pane

0x8341,	// (0x000154fa) find_pane

0x8349,	// (0x00015502) listscroll_app_pane_ParamLimits

0x8349,	// (0x00015502) listscroll_app_pane

0x8355,	// (0x0001550e) listscroll_form_pane

0x835d,	// (0x00015516) listscroll_gen_pane_ParamLimits

0x835d,	// (0x00015516) listscroll_gen_pane

0x8371,	// (0x0001552a) listscroll_set_pane

0x7bfd,	// (0x00014db6) main_idle_act_pane

0x8005,	// (0x000151be) main_idle_trad_pane

0x8005,	// (0x000151be) main_list_empty_pane

0x838b,	// (0x00015544) main_midp_pane

0x8397,	// (0x00015550) main_pane_g1_ParamLimits

0x8397,	// (0x00015550) main_pane_g1

0x83a5,	// (0x0001555e) popup_ai_message_window_ParamLimits

0x83a5,	// (0x0001555e) popup_ai_message_window

0x8461,	// (0x0001561a) popup_fep_china_uni_window_ParamLimits

0x8461,	// (0x0001561a) popup_fep_china_uni_window

0x84c1,	// (0x0001567a) popup_fep_japan_candidate_window_ParamLimits

0x84c1,	// (0x0001567a) popup_fep_japan_candidate_window

0x84eb,	// (0x000156a4) popup_fep_japan_predictive_window_ParamLimits

0x84eb,	// (0x000156a4) popup_fep_japan_predictive_window

0x8521,	// (0x000156da) popup_find_window

0x852e,	// (0x000156e7) popup_grid_graphic_window_ParamLimits

0x852e,	// (0x000156e7) popup_grid_graphic_window

0x855c,	// (0x00015715) popup_large_graphic_colour_window

0x8582,	// (0x0001573b) popup_menu_window_ParamLimits

0x8582,	// (0x0001573b) popup_menu_window

0x874c,	// (0x00015905) popup_note_image_window

0x8736,	// (0x000158ef) popup_note_wait_window_ParamLimits

0x8736,	// (0x000158ef) popup_note_wait_window

0x8736,	// (0x000158ef) popup_note_window_ParamLimits

0x8736,	// (0x000158ef) popup_note_window

0x87b2,	// (0x0001596b) popup_query_code_window_ParamLimits

0x87b2,	// (0x0001596b) popup_query_code_window

0x87c8,	// (0x00015981) popup_query_data_code_window_ParamLimits

0x87c8,	// (0x00015981) popup_query_data_code_window

0x87eb,	// (0x000159a4) popup_query_data_window_ParamLimits

0x87eb,	// (0x000159a4) popup_query_data_window

0x880d,	// (0x000159c6) popup_query_sat_info_window_ParamLimits

0x880d,	// (0x000159c6) popup_query_sat_info_window

0x884c,	// (0x00015a05) popup_snote_single_graphic_window_ParamLimits

0x884c,	// (0x00015a05) popup_snote_single_graphic_window

0x884c,	// (0x00015a05) popup_snote_single_text_window_ParamLimits

0x884c,	// (0x00015a05) popup_snote_single_text_window

0x8863,	// (0x00015a1c) popup_sub_window_general

0x89a9,	// (0x00015b62) popup_window_general_ParamLimits

0x89a9,	// (0x00015b62) popup_window_general

0x89c2,	// (0x00015b7b) power_save_pane

0x5bec,	// (0x00012da5) control_pane_g1_ParamLimits

0x5bec,	// (0x00012da5) control_pane_g1

0x5c15,	// (0x00012dce) control_pane_g2_ParamLimits

0x5c15,	// (0x00012dce) control_pane_g2

0x82c2,	// (0x0001547b) control_pane_g3_ParamLimits

0x82c2,	// (0x0001547b) control_pane_g3

0x0007,

0xf783,	// (0x0001c93c) control_pane_g_ParamLimits

0xf783,	// (0x0001c93c) control_pane_g

0x5c5d,	// (0x00012e16) control_pane_t1_ParamLimits

0x5c5d,	// (0x00012e16) control_pane_t1

0x5ca9,	// (0x00012e62) control_pane_t2_ParamLimits

0x5ca9,	// (0x00012e62) control_pane_t2

0x0002,

0xf794,	// (0x0001c94d) control_pane_t_ParamLimits

0xf794,	// (0x0001c94d) control_pane_t

0x81e7,	// (0x000153a0) navi_navi_volume_pane_cp1

0x81ef,	// (0x000153a8) status_small_icon_pane

0x81f7,	// (0x000153b0) status_small_pane_g1_ParamLimits

0x81f7,	// (0x000153b0) status_small_pane_g1

0x822b,	// (0x000153e4) status_small_pane_g2_ParamLimits

0x822b,	// (0x000153e4) status_small_pane_g2

0x8237,	// (0x000153f0) status_small_pane_g3_ParamLimits

0x8237,	// (0x000153f0) status_small_pane_g3

0x8243,	// (0x000153fc) status_small_pane_g4_ParamLimits

0x8243,	// (0x000153fc) status_small_pane_g4

0x824f,	// (0x00015408) status_small_pane_g5_ParamLimits

0x824f,	// (0x00015408) status_small_pane_g5

0x825d,	// (0x00015416) status_small_pane_g6_ParamLimits

0x825d,	// (0x00015416) status_small_pane_g6

0x0007,

0xf772,	// (0x0001c92b) status_small_pane_g_ParamLimits

0xf772,	// (0x0001c92b) status_small_pane_g

0x828c,	// (0x00015445) status_small_pane_t1

0x82ae,	// (0x00015467) status_small_wait_pane_ParamLimits

0x82ae,	// (0x00015467) status_small_wait_pane

0x7d2c,	// (0x00014ee5) aid_levels_signal_ParamLimits

0x7d2c,	// (0x00014ee5) aid_levels_signal

0x7d3e,	// (0x00014ef7) signal_pane_g1_ParamLimits

0x7d3e,	// (0x00014ef7) signal_pane_g1

0x7d53,	// (0x00014f0c) signal_pane_g2_ParamLimits

0x7d53,	// (0x00014f0c) signal_pane_g2

0x0003,

0xf703,	// (0x0001c8bc) signal_pane_g_ParamLimits

0xf703,	// (0x0001c8bc) signal_pane_g

0x4413,	// (0x000115cc) context_pane_g1

0x72d5,	// (0x0001448e) title_pane_g1

0x72f3,	// (0x000144ac) title_pane_t1

0x3442,	// (0x000105fb) title_pane_t2

0x3468,	// (0x00010621) title_pane_t3

0x0002,

0xf557,	// (0x0001c710) title_pane_t

0x8dd2,	// (0x00015f8b) aid_levels_battery_ParamLimits

0x8dd2,	// (0x00015f8b) aid_levels_battery

0x8de6,	// (0x00015f9f) battery_pane_g1_ParamLimits

0x8de6,	// (0x00015f9f) battery_pane_g1

0x8dfc,	// (0x00015fb5) battery_pane_g2_ParamLimits

0x8dfc,	// (0x00015fb5) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001c95f) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001c95f) battery_pane_g

0xa157,	// (0x00017310) uni_indicator_pane_g1

0xa16d,	// (0x00017326) uni_indicator_pane_g2

0xa183,	// (0x0001733c) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0001cad5) uni_indicator_pane_g

0x4864,	// (0x00011a1d) navi_icon_pane_ParamLimits

0x4864,	// (0x00011a1d) navi_icon_pane

0x47e8,	// (0x000119a1) navi_midp_pane

0x4880,	// (0x00011a39) navi_navi_pane

0x488a,	// (0x00011a43) navi_text_pane_ParamLimits

0x488a,	// (0x00011a43) navi_text_pane

0x3253,	// (0x0001040c) status_small_wait_pane_g1

0x3810,	// (0x000109c9) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0001cad0) status_small_wait_pane_g

0x9e6a,	// (0x00017023) navi_navi_icon_text_pane

0x9e72,	// (0x0001702b) navi_navi_pane_g1_ParamLimits

0x9e72,	// (0x0001702b) navi_navi_pane_g1

0x9e84,	// (0x0001703d) navi_navi_pane_g2_ParamLimits

0x9e84,	// (0x0001703d) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0001ca9e) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0001ca9e) navi_navi_pane_g

0x9e96,	// (0x0001704f) navi_navi_tabs_pane

0x9e9f,	// (0x00017058) navi_navi_text_pane

0x9e6a,	// (0x00017023) navi_navi_volume_pane

0x9e46,	// (0x00016fff) navi_text_pane_t1

0x9e3a,	// (0x00016ff3) navi_icon_pane_g1

0x9d8d,	// (0x00016f46) navi_navi_text_pane_t1

0x6046,	// (0x000131ff) navi_navi_volume_pane_g1

0x604e,	// (0x00013207) volume_small_pane

0x9cf3,	// (0x00016eac) navi_navi_icon_text_pane_g1

0x9cfb,	// (0x00016eb4) navi_navi_icon_text_pane_t1

0x4880,	// (0x00011a39) navi_tabs_2_long_pane

0x4880,	// (0x00011a39) navi_tabs_2_pane

0x4880,	// (0x00011a39) navi_tabs_3_long_pane

0x4880,	// (0x00011a39) navi_tabs_3_pane

0x4880,	// (0x00011a39) navi_tabs_4_pane

0x6026,	// (0x000131df) tabs_2_active_pane_ParamLimits

0x6026,	// (0x000131df) tabs_2_active_pane

0x6036,	// (0x000131ef) tabs_2_passive_pane_ParamLimits

0x6036,	// (0x000131ef) tabs_2_passive_pane

0x5ff4,	// (0x000131ad) tabs_3_active_pane_ParamLimits

0x5ff4,	// (0x000131ad) tabs_3_active_pane

0x6004,	// (0x000131bd) tabs_3_passive_pane_ParamLimits

0x6004,	// (0x000131bd) tabs_3_passive_pane

0x6015,	// (0x000131ce) tabs_3_passive_pane_cp_ParamLimits

0x6015,	// (0x000131ce) tabs_3_passive_pane_cp

0x5fa8,	// (0x00013161) tabs_4_active_pane_ParamLimits

0x5fa8,	// (0x00013161) tabs_4_active_pane

0x5fbb,	// (0x00013174) tabs_4_passive_pane_ParamLimits

0x5fbb,	// (0x00013174) tabs_4_passive_pane

0x5fcc,	// (0x00013185) tabs_4_passive_pane_cp_ParamLimits

0x5fcc,	// (0x00013185) tabs_4_passive_pane_cp

0x5fdd,	// (0x00013196) tabs_4_passive_pane_cp2_ParamLimits

0x5fdd,	// (0x00013196) tabs_4_passive_pane_cp2

0x5f84,	// (0x0001313d) tabs_2_long_active_pane_ParamLimits

0x5f84,	// (0x0001313d) tabs_2_long_active_pane

0x5f96,	// (0x0001314f) tabs_2_long_passive_pane_ParamLimits

0x5f96,	// (0x0001314f) tabs_2_long_passive_pane

0x5f45,	// (0x000130fe) tabs_3_long_active_pane_ParamLimits

0x5f45,	// (0x000130fe) tabs_3_long_active_pane

0x5f58,	// (0x00013111) tabs_3_long_passive_pane_ParamLimits

0x5f58,	// (0x00013111) tabs_3_long_passive_pane

0x5f71,	// (0x0001312a) tabs_3_long_passive_pane_cp_ParamLimits

0x5f71,	// (0x0001312a) tabs_3_long_passive_pane_cp

0x5eeb,	// (0x000130a4) volume_small_pane_g1

0x5ef4,	// (0x000130ad) volume_small_pane_g2

0x5efd,	// (0x000130b6) volume_small_pane_g3

0x5f06,	// (0x000130bf) volume_small_pane_g4

0x5f0f,	// (0x000130c8) volume_small_pane_g5

0x5f18,	// (0x000130d1) volume_small_pane_g6

0x5f21,	// (0x000130da) volume_small_pane_g7

0x5f2a,	// (0x000130e3) volume_small_pane_g8

0x5f33,	// (0x000130ec) volume_small_pane_g9

0x5f3c,	// (0x000130f5) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0001ca6a) volume_small_pane_g

0x3492,	// (0x0001064b) bg_active_tab_pane_cp2_ParamLimits

0x3492,	// (0x0001064b) bg_active_tab_pane_cp2

0x735b,	// (0x00014514) tabs_3_active_pane_g1

0x7363,	// (0x0001451c) tabs_3_active_pane_t1

0x3492,	// (0x0001064b) bg_passive_tab_pane_cp2_ParamLimits

0x3492,	// (0x0001064b) bg_passive_tab_pane_cp2

0x735b,	// (0x00014514) tabs_3_passive_pane_g1

0x7363,	// (0x0001451c) tabs_3_passive_pane_t1

0x3492,	// (0x0001064b) bg_active_tab_pane_cp3_ParamLimits

0x3492,	// (0x0001064b) bg_active_tab_pane_cp3

0x7375,	// (0x0001452e) tabs_4_active_pane_g1

0x737d,	// (0x00014536) tabs_4_active_pane_t1

0x3492,	// (0x0001064b) bg_passive_tab_pane_cp3_ParamLimits

0x3492,	// (0x0001064b) bg_passive_tab_pane_cp3

0x7375,	// (0x0001452e) tabs_4_1_passive_pane_g1

0x737d,	// (0x00014536) tabs_4_1_passive_pane_t1

0x838b,	// (0x00015544) list_highlight_pane_cp2

0xa3fa,	// (0x000175b3) list_set_pane_ParamLimits

0xa3fa,	// (0x000175b3) list_set_pane

0xa4c2,	// (0x0001767b) main_pane_set_t1_ParamLimits

0xa4c2,	// (0x0001767b) main_pane_set_t1

0xa4e2,	// (0x0001769b) main_pane_set_t2_ParamLimits

0xa4e2,	// (0x0001769b) main_pane_set_t2

0xa4f6,	// (0x000176af) main_pane_set_t3_ParamLimits

0xa4f6,	// (0x000176af) main_pane_set_t3

0xa50a,	// (0x000176c3) main_pane_set_t4_ParamLimits

0xa50a,	// (0x000176c3) main_pane_set_t4

0x0003,

0xf981,	// (0x0001cb3a) main_pane_set_t_ParamLimits

0xf981,	// (0x0001cb3a) main_pane_set_t

0xa51e,	// (0x000176d7) setting_code_pane

0xa528,	// (0x000176e1) setting_slider_graphic_pane

0xa528,	// (0x000176e1) setting_slider_pane

0xa528,	// (0x000176e1) setting_text_pane

0xa528,	// (0x000176e1) setting_volume_pane

0x56c9,	// (0x00012882) volume_set_pane

0x3492,	// (0x0001064b) bg_set_opt_pane_cp

0x56d3,	// (0x0001288c) setting_slider_pane_t1

0x56ec,	// (0x000128a5) setting_slider_pane_t2

0x5706,	// (0x000128bf) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001c717) setting_slider_pane_t

0x571e,	// (0x000128d7) slider_set_pane

0x33cc,	// (0x00010585) bg_set_opt_pane_cp2

0x3501,	// (0x000106ba) setting_slider_graphic_pane_g1

0x5734,	// (0x000128ed) setting_slider_graphic_pane_t1

0x5744,	// (0x000128fd) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001c71e) setting_slider_graphic_pane_t

0x5754,	// (0x0001290d) slider_set_pane_cp

0x33cc,	// (0x00010585) input_focus_pane_cp1

0xa3bb,	// (0x00017574) list_set_text_pane

0x3253,	// (0x0001040c) setting_text_pane_g1

0x33cc,	// (0x00010585) input_focus_pane_cp2

0x3253,	// (0x0001040c) setting_code_pane_g1

0x3532,	// (0x000106eb) setting_code_pane_t1

0x3540,	// (0x000106f9) set_text_pane_t1_ParamLimits

0x3540,	// (0x000106f9) set_text_pane_t1

0x3cb1,	// (0x00010e6a) set_opt_bg_pane_g1

0x3cb9,	// (0x00010e72) set_opt_bg_pane_g2

0xa393,	// (0x0001754c) set_opt_bg_pane_g3

0x3cc9,	// (0x00010e82) set_opt_bg_pane_g4

0x3cd1,	// (0x00010e8a) set_opt_bg_pane_g5

0x3cd9,	// (0x00010e92) set_opt_bg_pane_g6

0xa39d,	// (0x00017556) set_opt_bg_pane_g7

0xa3a7,	// (0x00017560) set_opt_bg_pane_g8

0xa3b1,	// (0x0001756a) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0001cb27) set_opt_bg_pane_g

0xa386,	// (0x0001753f) slider_set_pane_g1

0x60cf,	// (0x00013288) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0001cb18) slider_set_pane_g

0x6057,	// (0x00013210) volume_set_pane_g1

0x6061,	// (0x0001321a) volume_set_pane_g2

0x606b,	// (0x00013224) volume_set_pane_g3

0x6075,	// (0x0001322e) volume_set_pane_g4

0x607f,	// (0x00013238) volume_set_pane_g5

0x6089,	// (0x00013242) volume_set_pane_g6

0x6093,	// (0x0001324c) volume_set_pane_g7

0x609d,	// (0x00013256) volume_set_pane_g8

0x60a7,	// (0x00013260) volume_set_pane_g9

0x60b1,	// (0x0001326a) volume_set_pane_g10

0x0009,

0xf937,	// (0x0001caf0) volume_set_pane_g

0x738f,	// (0x00014548) indicator_pane_ParamLimits

0x738f,	// (0x00014548) indicator_pane

0x739b,	// (0x00014554) main_idle_pane_g2_ParamLimits

0x739b,	// (0x00014554) main_idle_pane_g2

0x73c3,	// (0x0001457c) main_pane_idle_g1_ParamLimits

0x73c3,	// (0x0001457c) main_pane_idle_g1

0x355a,	// (0x00010713) popup_clock_digital_analogue_window_ParamLimits

0x355a,	// (0x00010713) popup_clock_digital_analogue_window

0x73d1,	// (0x0001458a) soft_indicator_pane_ParamLimits

0x73d1,	// (0x0001458a) soft_indicator_pane

0x73df,	// (0x00014598) wallpaper_pane_ParamLimits

0x73df,	// (0x00014598) wallpaper_pane

0x3253,	// (0x0001040c) wallpaper_pane_g1

0x73eb,	// (0x000145a4) indicator_pane_g1_ParamLimits

0x73eb,	// (0x000145a4) indicator_pane_g1

0xa879,	// (0x00017a32) navi_navi_icon_text_pane_srt_g1

0x3588,	// (0x00010741) soft_indicator_pane_t1

0x35a2,	// (0x0001075b) aid_ps_area_pane

0x73f7,	// (0x000145b0) aid_ps_clock_pane

0x35b3,	// (0x0001076c) aid_ps_indicator_pane

0x35bf,	// (0x00010778) indicator_ps_pane_ParamLimits

0x35bf,	// (0x00010778) indicator_ps_pane

0x35ce,	// (0x00010787) power_save_pane_g1_ParamLimits

0x35ce,	// (0x00010787) power_save_pane_g1

0x35da,	// (0x00010793) power_save_pane_g2_ParamLimits

0x35da,	// (0x00010793) power_save_pane_g2

0x52c0,	// (0x00012479) aid_navinavi_width_pane

0x35a2,	// (0x0001075b) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001c723) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001c723) power_save_pane_g

0x35e8,	// (0x000107a1) power_save_pane_t1_ParamLimits

0x35e8,	// (0x000107a1) power_save_pane_t1

0x73f7,	// (0x000145b0) aid_ps_clock_pane_ParamLimits

0x35b3,	// (0x0001076c) aid_ps_indicator_pane_ParamLimits

0x35fa,	// (0x000107b3) power_save_pane_t4_ParamLimits

0x35fa,	// (0x000107b3) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001c728) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001c728) power_save_pane_t

0x3624,	// (0x000107dd) power_save_t3_ParamLimits

0x3624,	// (0x000107dd) power_save_t3

0x360f,	// (0x000107c8) power_save_t2_ParamLimits

0x360f,	// (0x000107c8) power_save_t2

0x3639,	// (0x000107f2) indicator_ps_pane_g1

0x7405,	// (0x000145be) ai_gene_pane_ParamLimits

0x7405,	// (0x000145be) ai_gene_pane

0x7411,	// (0x000145ca) ai_links_pane_ParamLimits

0x7411,	// (0x000145ca) ai_links_pane

0x741d,	// (0x000145d6) indicator_pane_cp1_ParamLimits

0x741d,	// (0x000145d6) indicator_pane_cp1

0x7429,	// (0x000145e2) main_pane_idle_g1_cp_ParamLimits

0x7429,	// (0x000145e2) main_pane_idle_g1_cp

0x3642,	// (0x000107fb) popup_ai_links_title_window

0x7435,	// (0x000145ee) soft_indicator_pane_cp1_ParamLimits

0x7435,	// (0x000145ee) soft_indicator_pane_cp1

0xa145,	// (0x000172fe) ai_links_pane_g1

0xa14e,	// (0x00017307) grid_ai_links_pane

0xa12a,	// (0x000172e3) ai_gene_pane_1

0xa133,	// (0x000172ec) ai_gene_pane_2

0xa13c,	// (0x000172f5) list_highlight_pane_cp4

0xa10a,	// (0x000172c3) cell_ai_link_pane_ParamLimits

0xa10a,	// (0x000172c3) cell_ai_link_pane

0xa102,	// (0x000172bb) cell_ai_link_pane_g1

0x3810,	// (0x000109c9) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0001cacb) cell_ai_link_pane_g

0x33cc,	// (0x00010585) grid_highlight_cp2

0x33cc,	// (0x00010585) bg_popup_sub_pane_cp1

0x3659,	// (0x00010812) popup_ai_links_title_window_t1

0xa04e,	// (0x00017207) ai_gene_pane_1_g1_ParamLimits

0xa04e,	// (0x00017207) ai_gene_pane_1_g1

0xa05a,	// (0x00017213) ai_gene_pane_1_g2_ParamLimits

0xa05a,	// (0x00017213) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0001cac1) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0001cac1) ai_gene_pane_1_g

0xa067,	// (0x00017220) ai_gene_pane_1_t1_ParamLimits

0xa067,	// (0x00017220) ai_gene_pane_1_t1

0xa09b,	// (0x00017254) grid_ai_soft_ind_pane

0xa039,	// (0x000171f2) ai_gene_pane_2_t1_ParamLimits

0xa039,	// (0x000171f2) ai_gene_pane_2_t1

0x7441,	// (0x000145fa) main_pane_empty_t1_ParamLimits

0x7441,	// (0x000145fa) main_pane_empty_t1

0x7459,	// (0x00014612) main_pane_empty_t2_ParamLimits

0x7459,	// (0x00014612) main_pane_empty_t2

0x746e,	// (0x00014627) main_pane_empty_t3_ParamLimits

0x746e,	// (0x00014627) main_pane_empty_t3

0x7480,	// (0x00014639) main_pane_empty_t4_ParamLimits

0x7480,	// (0x00014639) main_pane_empty_t4

0x7492,	// (0x0001464b) main_pane_empty_t5_ParamLimits

0x7492,	// (0x0001464b) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001c72d) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001c72d) main_pane_empty_t

0x3d31,	// (0x00010eea) bg_popup_window_pane_ParamLimits

0x3d31,	// (0x00010eea) bg_popup_window_pane

0x9d9b,	// (0x00016f54) find_popup_pane_cp2_ParamLimits

0x9d9b,	// (0x00016f54) find_popup_pane_cp2

0x9da7,	// (0x00016f60) heading_pane_ParamLimits

0x9da7,	// (0x00016f60) heading_pane

0x33cc,	// (0x00010585) bg_popup_sub_pane

0x9d15,	// (0x00016ece) bg_popup_window_pane_g1_ParamLimits

0x9d15,	// (0x00016ece) bg_popup_window_pane_g1

0x9d21,	// (0x00016eda) bg_popup_window_pane_g2_ParamLimits

0x9d21,	// (0x00016eda) bg_popup_window_pane_g2

0x9d2d,	// (0x00016ee6) bg_popup_window_pane_g3_ParamLimits

0x9d2d,	// (0x00016ee6) bg_popup_window_pane_g3

0x9d39,	// (0x00016ef2) bg_popup_window_pane_g4_ParamLimits

0x9d39,	// (0x00016ef2) bg_popup_window_pane_g4

0x9d45,	// (0x00016efe) bg_popup_window_pane_g5_ParamLimits

0x9d45,	// (0x00016efe) bg_popup_window_pane_g5

0x9d51,	// (0x00016f0a) bg_popup_window_pane_g6_ParamLimits

0x9d51,	// (0x00016f0a) bg_popup_window_pane_g6

0x9d5d,	// (0x00016f16) bg_popup_window_pane_g7_ParamLimits

0x9d5d,	// (0x00016f16) bg_popup_window_pane_g7

0x9d69,	// (0x00016f22) bg_popup_window_pane_g8_ParamLimits

0x9d69,	// (0x00016f22) bg_popup_window_pane_g8

0x9d75,	// (0x00016f2e) bg_popup_window_pane_g9_ParamLimits

0x9d75,	// (0x00016f2e) bg_popup_window_pane_g9

0x9d81,	// (0x00016f3a) bg_popup_window_pane_g10_ParamLimits

0x9d81,	// (0x00016f3a) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0001ca89) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0001ca89) bg_popup_window_pane_g

0x9caa,	// (0x00016e63) bg_popup_heading_pane_ParamLimits

0x9caa,	// (0x00016e63) bg_popup_heading_pane

0x6157,	// (0x00013310) tabs_4_passive_pane_cp_srt_ParamLimits

0x6157,	// (0x00013310) tabs_4_passive_pane_cp_srt

0x6169,	// (0x00013322) tabs_4_passive_pane_srt_ParamLimits

0x9cbe,	// (0x00016e77) heading_pane_g2

0x6169,	// (0x00013322) tabs_4_passive_pane_srt

0x838b,	// (0x00015544) bg_passive_tab_pane_cp3_srt_ParamLimits

0x838b,	// (0x00015544) bg_passive_tab_pane_cp3_srt

0x9cc6,	// (0x00016e7f) heading_pane_t1_ParamLimits

0x9cc6,	// (0x00016e7f) heading_pane_t1

0x9cdd,	// (0x00016e96) heading_pane_t2_ParamLimits

0x9cdd,	// (0x00016e96) heading_pane_t2

0x0001,

0xf8cb,	// (0x0001ca84) heading_pane_t_ParamLimits

0xf8cb,	// (0x0001ca84) heading_pane_t

0x97d5,	// (0x0001698e) bg_popup_heading_pane_g1

0x9884,	// (0x00016a3d) bg_popup_heading_pane_g2

0x988e,	// (0x00016a47) bg_popup_heading_pane_g3

0x9898,	// (0x00016a51) bg_popup_heading_pane_g4

0x98a2,	// (0x00016a5b) bg_popup_heading_pane_g5

0x98ac,	// (0x00016a65) bg_popup_heading_pane_g6

0x98b4,	// (0x00016a6d) bg_popup_heading_pane_g7

0x98bc,	// (0x00016a75) bg_popup_heading_pane_g8

0x98c6,	// (0x00016a7f) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0001ca40) bg_popup_heading_pane_g

0x8f02,	// (0x000160bb) bg_popup_sub_pane_g1

0x8f12,	// (0x000160cb) bg_popup_sub_pane_g2

0x8f0a,	// (0x000160c3) bg_popup_sub_pane_g3

0x8f22,	// (0x000160db) bg_popup_sub_pane_g4

0x8f1a,	// (0x000160d3) bg_popup_sub_pane_g5

0x8f2a,	// (0x000160e3) bg_popup_sub_pane_g6

0x8f32,	// (0x000160eb) bg_popup_sub_pane_g7

0x8f42,	// (0x000160fb) bg_popup_sub_pane_g8

0x8f3a,	// (0x000160f3) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0001ca1a) bg_popup_sub_pane_g

0x347a,	// (0x00010633) bg_popup_window_pane_cp5_ParamLimits

0x347a,	// (0x00010633) bg_popup_window_pane_cp5

0x3676,	// (0x0001082f) popup_note_window_g1_ParamLimits

0x3676,	// (0x0001082f) popup_note_window_g1

0x3682,	// (0x0001083b) popup_note_window_t1_ParamLimits

0x3682,	// (0x0001083b) popup_note_window_t1

0x3698,	// (0x00010851) popup_note_window_t2_ParamLimits

0x3698,	// (0x00010851) popup_note_window_t2

0x36ae,	// (0x00010867) popup_note_window_t3_ParamLimits

0x36ae,	// (0x00010867) popup_note_window_t3

0x36c4,	// (0x0001087d) popup_note_window_t4_ParamLimits

0x36c4,	// (0x0001087d) popup_note_window_t4

0x36ec,	// (0x000108a5) popup_note_window_t5_ParamLimits

0x36ec,	// (0x000108a5) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001c738) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001c738) popup_note_window_t

0x3710,	// (0x000108c9) bg_popup_window_pane_cp6_ParamLimits

0x3710,	// (0x000108c9) bg_popup_window_pane_cp6

0x9751,	// (0x0001690a) popup_note_image_window_g1_ParamLimits

0x9751,	// (0x0001690a) popup_note_image_window_g1

0x975d,	// (0x00016916) popup_note_image_window_g2_ParamLimits

0x975d,	// (0x00016916) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0001ca0e) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0001ca0e) popup_note_image_window_g

0x9776,	// (0x0001692f) popup_note_image_window_t1_ParamLimits

0x9776,	// (0x0001692f) popup_note_image_window_t1

0x978f,	// (0x00016948) popup_note_image_window_t2_ParamLimits

0x978f,	// (0x00016948) popup_note_image_window_t2

0x97a8,	// (0x00016961) popup_note_image_window_t3_ParamLimits

0x97a8,	// (0x00016961) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0001ca13) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0001ca13) popup_note_image_window_t

0x9611,	// (0x000167ca) bg_popup_window_pane_cp7_ParamLimits

0x9611,	// (0x000167ca) bg_popup_window_pane_cp7

0x9641,	// (0x000167fa) popup_note_wait_window_g1_ParamLimits

0x9641,	// (0x000167fa) popup_note_wait_window_g1

0x964d,	// (0x00016806) popup_note_wait_window_g2_ParamLimits

0x964d,	// (0x00016806) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0001c9fc) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0001c9fc) popup_note_wait_window_g

0x9665,	// (0x0001681e) popup_note_wait_window_t1_ParamLimits

0x9665,	// (0x0001681e) popup_note_wait_window_t1

0x968c,	// (0x00016845) popup_note_wait_window_t2_ParamLimits

0x968c,	// (0x00016845) popup_note_wait_window_t2

0x96aa,	// (0x00016863) popup_note_wait_window_t3_ParamLimits

0x96aa,	// (0x00016863) popup_note_wait_window_t3

0x96bd,	// (0x00016876) popup_note_wait_window_t4_ParamLimits

0x96bd,	// (0x00016876) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0001ca03) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0001ca03) popup_note_wait_window_t

0x96e2,	// (0x0001689b) wait_bar_pane_ParamLimits

0x96e2,	// (0x0001689b) wait_bar_pane

0x33cc,	// (0x00010585) wait_anim_pane

0x33cc,	// (0x00010585) wait_border_pane

0x3253,	// (0x0001040c) wait_anim_pane_g1

0x3253,	// (0x0001040c) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001c8b7) wait_anim_pane_g

0x95b5,	// (0x0001676e) wait_border_pane_g1

0x95c0,	// (0x00016779) wait_border_pane_g2

0x95c9,	// (0x00016782) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0001c9f5) wait_border_pane_g

0x941f,	// (0x000165d8) bg_popup_window_pane_cp16_ParamLimits

0x941f,	// (0x000165d8) bg_popup_window_pane_cp16

0x951f,	// (0x000166d8) indicator_popup_pane_cp4_ParamLimits

0x951f,	// (0x000166d8) indicator_popup_pane_cp4

0x9533,	// (0x000166ec) popup_query_data_window_t1_ParamLimits

0x9533,	// (0x000166ec) popup_query_data_window_t1

0x9545,	// (0x000166fe) popup_query_data_window_t2_ParamLimits

0x9545,	// (0x000166fe) popup_query_data_window_t2

0x955e,	// (0x00016717) popup_query_data_window_t3_ParamLimits

0x955e,	// (0x00016717) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0001c9ee) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0001c9ee) popup_query_data_window_t

0x9578,	// (0x00016731) query_popup_data_pane_ParamLimits

0x9578,	// (0x00016731) query_popup_data_pane

0x958c,	// (0x00016745) query_popup_data_pane_cp1_ParamLimits

0x958c,	// (0x00016745) query_popup_data_pane_cp1

0x941f,	// (0x000165d8) bg_popup_window_pane_cp10_ParamLimits

0x941f,	// (0x000165d8) bg_popup_window_pane_cp10

0x9451,	// (0x0001660a) indicator_popup_pane_ParamLimits

0x9451,	// (0x0001660a) indicator_popup_pane

0x9473,	// (0x0001662c) popup_query_code_window_t1_ParamLimits

0x9473,	// (0x0001662c) popup_query_code_window_t1

0x948d,	// (0x00016646) popup_query_code_window_t2_ParamLimits

0x948d,	// (0x00016646) popup_query_code_window_t2

0x94d6,	// (0x0001668f) popup_query_code_window_t3_ParamLimits

0x94d6,	// (0x0001668f) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0001c9e7) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0001c9e7) popup_query_code_window_t

0x9505,	// (0x000166be) query_popup_pane_ParamLimits

0x9505,	// (0x000166be) query_popup_pane

0x3710,	// (0x000108c9) bg_popup_window_pane_cp15_ParamLimits

0x3710,	// (0x000108c9) bg_popup_window_pane_cp15

0x3730,	// (0x000108e9) indicator_popup_pane_cp1_ParamLimits

0x3730,	// (0x000108e9) indicator_popup_pane_cp1

0x3743,	// (0x000108fc) indicator_popup_pane_cp2_ParamLimits

0x3743,	// (0x000108fc) indicator_popup_pane_cp2

0x375e,	// (0x00010917) popup_query_data_code_window_g1_ParamLimits

0x375e,	// (0x00010917) popup_query_data_code_window_g1

0x3771,	// (0x0001092a) popup_query_data_code_window_t1_ParamLimits

0x3771,	// (0x0001092a) popup_query_data_code_window_t1

0x3783,	// (0x0001093c) popup_query_data_code_window_t2_ParamLimits

0x3783,	// (0x0001093c) popup_query_data_code_window_t2

0x3795,	// (0x0001094e) popup_query_data_code_window_t3_ParamLimits

0x3795,	// (0x0001094e) popup_query_data_code_window_t3

0x37ab,	// (0x00010964) popup_query_data_code_window_t4_ParamLimits

0x37ab,	// (0x00010964) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001c743) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001c743) popup_query_data_code_window_t

0x5df7,	// (0x00012fb0) list_single_midp_graphic_pane_g3

0x37c5,	// (0x0001097e) query_popup_data_pane_cp2_ParamLimits

0x37d8,	// (0x00010991) query_popup_pane_cp2_ParamLimits

0x37d8,	// (0x00010991) query_popup_pane_cp2

0x33cc,	// (0x00010585) bg_popup_window_pane_cp11

0x9417,	// (0x000165d0) heading_pane_cp5

0x386e,	// (0x00010a27) listscroll_popup_info_pane

0x33cc,	// (0x00010585) input_focus_pane_cp3

0x37f3,	// (0x000109ac) query_popup_pane_t1

0x3801,	// (0x000109ba) list_popup_info_pane_ParamLimits

0x3801,	// (0x000109ba) list_popup_info_pane

0x3810,	// (0x000109c9) listscroll_popup_info_pane_g1

0x3818,	// (0x000109d1) scroll_pane_cp7

0x3822,	// (0x000109db) popup_info_list_pane_t1_ParamLimits

0x3822,	// (0x000109db) popup_info_list_pane_t1

0x383c,	// (0x000109f5) popup_info_list_pane_t2_ParamLimits

0x383c,	// (0x000109f5) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001c74c) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001c74c) popup_info_list_pane_t

0x33cc,	// (0x00010585) bg_popup_window_pane_cp12

0xa893,	// (0x00017a4c) find_popup_pane

0x3492,	// (0x0001064b) bg_popup_window_pane_cp3

0x3856,	// (0x00010a0f) heading_pane_cp3

0x3862,	// (0x00010a1b) listscroll_popup_graphic_pane

0x33cc,	// (0x00010585) bg_popup_window_pane_cp4

0x74f4,	// (0x000146ad) heading_pane_cp4

0x386e,	// (0x00010a27) listscroll_popup_colour_pane

0x74fe,	// (0x000146b7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x74fe,	// (0x000146b7) cell_large_graphic_colour_none_popup_pane

0x7512,	// (0x000146cb) grid_large_graphic_colour_popup_pane_ParamLimits

0x7512,	// (0x000146cb) grid_large_graphic_colour_popup_pane

0x753e,	// (0x000146f7) listscroll_popup_colour_pane_g1_ParamLimits

0x753e,	// (0x000146f7) listscroll_popup_colour_pane_g1

0x7555,	// (0x0001470e) listscroll_popup_colour_pane_g2_ParamLimits

0x7555,	// (0x0001470e) listscroll_popup_colour_pane_g2

0x756c,	// (0x00014725) listscroll_popup_colour_pane_g3_ParamLimits

0x756c,	// (0x00014725) listscroll_popup_colour_pane_g3

0x757c,	// (0x00014735) listscroll_popup_colour_pane_g4_ParamLimits

0x757c,	// (0x00014735) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001c751) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001c751) listscroll_popup_colour_pane_g

0x3876,	// (0x00010a2f) scroll_pane_cp6_ParamLimits

0x3876,	// (0x00010a2f) scroll_pane_cp6

0x7590,	// (0x00014749) cell_large_graphic_colour_popup_pane_ParamLimits

0x7590,	// (0x00014749) cell_large_graphic_colour_popup_pane

0x3888,	// (0x00010a41) cell_large_graphic_colour_none_popup_pane_t1

0x33cc,	// (0x00010585) grid_highlight_pane_cp5

0x3897,	// (0x00010a50) cell_large_graphic_colour_popup_pane_g1

0x389f,	// (0x00010a58) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001c75a) cell_large_graphic_colour_popup_pane_g

0x38a7,	// (0x00010a60) cell_large_graphic_colour_popup_pane_g2_copy1

0x38b0,	// (0x00010a69) grid_highlight_pane_cp4

0x38b8,	// (0x00010a71) bg_popup_window_pane_cp8_ParamLimits

0x38b8,	// (0x00010a71) bg_popup_window_pane_cp8

0x38d3,	// (0x00010a8c) popup_snote_single_text_window_g1_ParamLimits

0x38d3,	// (0x00010a8c) popup_snote_single_text_window_g1

0x38e5,	// (0x00010a9e) popup_snote_single_text_window_t1_ParamLimits

0x38e5,	// (0x00010a9e) popup_snote_single_text_window_t1

0x38f8,	// (0x00010ab1) popup_snote_single_text_window_t2_ParamLimits

0x38f8,	// (0x00010ab1) popup_snote_single_text_window_t2

0x390b,	// (0x00010ac4) popup_snote_single_text_window_t3_ParamLimits

0x390b,	// (0x00010ac4) popup_snote_single_text_window_t3

0x3944,	// (0x00010afd) popup_snote_single_text_window_t4_ParamLimits

0x3944,	// (0x00010afd) popup_snote_single_text_window_t4

0x3978,	// (0x00010b31) popup_snote_single_text_window_t5_ParamLimits

0x3978,	// (0x00010b31) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001c75f) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001c75f) popup_snote_single_text_window_t

0x39a7,	// (0x00010b60) bg_popup_window_pane_cp9_ParamLimits

0x39a7,	// (0x00010b60) bg_popup_window_pane_cp9

0x38d3,	// (0x00010a8c) popup_snote_single_graphic_window_g1_ParamLimits

0x38d3,	// (0x00010a8c) popup_snote_single_graphic_window_g1

0x39b5,	// (0x00010b6e) popup_snote_single_graphic_window_g2_ParamLimits

0x39b5,	// (0x00010b6e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001c76a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001c76a) popup_snote_single_graphic_window_g

0x39c1,	// (0x00010b7a) popup_snote_single_graphic_window_t1_ParamLimits

0x39c1,	// (0x00010b7a) popup_snote_single_graphic_window_t1

0x39d4,	// (0x00010b8d) popup_snote_single_graphic_window_t2_ParamLimits

0x39d4,	// (0x00010b8d) popup_snote_single_graphic_window_t2

0x39e7,	// (0x00010ba0) popup_snote_single_graphic_window_t3_ParamLimits

0x39e7,	// (0x00010ba0) popup_snote_single_graphic_window_t3

0x3a20,	// (0x00010bd9) popup_snote_single_graphic_window_t4_ParamLimits

0x3a20,	// (0x00010bd9) popup_snote_single_graphic_window_t4

0x3a54,	// (0x00010c0d) popup_snote_single_graphic_window_t5_ParamLimits

0x3a54,	// (0x00010c0d) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001c76f) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001c76f) popup_snote_single_graphic_window_t

0xa7d1,	// (0x0001798a) grid_graphic_popup_pane_ParamLimits

0xa7d1,	// (0x0001798a) grid_graphic_popup_pane

0xa7ff,	// (0x000179b8) listscroll_popup_graphic_pane_g1_ParamLimits

0xa7ff,	// (0x000179b8) listscroll_popup_graphic_pane_g1

0xa813,	// (0x000179cc) listscroll_popup_graphic_pane_g2_ParamLimits

0xa813,	// (0x000179cc) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0001cb64) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0001cb64) listscroll_popup_graphic_pane_g

0xa827,	// (0x000179e0) scroll_pane_cp5

0xa779,	// (0x00017932) cell_graphic_popup_pane_ParamLimits

0xa779,	// (0x00017932) cell_graphic_popup_pane

0xa75a,	// (0x00017913) cell_graphic_popup_pane_g1

0xa762,	// (0x0001791b) cell_graphic_popup_pane_g2

0x38a7,	// (0x00010a60) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0001cb5d) cell_graphic_popup_pane_g

0xa76b,	// (0x00017924) cell_graphic_popup_pane_t2

0x38b0,	// (0x00010a69) grid_highlight_pane_cp3

0x3a95,	// (0x00010c4e) list_gen_pane_ParamLimits

0x3a95,	// (0x00010c4e) list_gen_pane

0x3abd,	// (0x00010c76) scroll_pane

0xa6b2,	// (0x0001786b) bg_list_pane_g1_ParamLimits

0xa6b2,	// (0x0001786b) bg_list_pane_g1

0xa6cf,	// (0x00017888) bg_list_pane_g2_ParamLimits

0xa6cf,	// (0x00017888) bg_list_pane_g2

0xa6e4,	// (0x0001789d) bg_list_pane_g3_ParamLimits

0xa6e4,	// (0x0001789d) bg_list_pane_g3

0xa6f8,	// (0x000178b1) bg_list_pane_g4_ParamLimits

0xa6f8,	// (0x000178b1) bg_list_pane_g4

0xa70c,	// (0x000178c5) bg_list_pane_g5_ParamLimits

0xa70c,	// (0x000178c5) bg_list_pane_g5

0x0004,

0xf999,	// (0x0001cb52) bg_list_pane_g_ParamLimits

0xf999,	// (0x0001cb52) bg_list_pane_g

0xa5e1,	// (0x0001779a) list_double2_graphic_large_graphic_pane_ParamLimits

0xa5e1,	// (0x0001779a) list_double2_graphic_large_graphic_pane

0xa5e1,	// (0x0001779a) list_double2_graphic_pane_ParamLimits

0xa5e1,	// (0x0001779a) list_double2_graphic_pane

0xa5e1,	// (0x0001779a) list_double2_large_graphic_pane_ParamLimits

0xa5e1,	// (0x0001779a) list_double2_large_graphic_pane

0xa5e1,	// (0x0001779a) list_double2_pane_ParamLimits

0xa5e1,	// (0x0001779a) list_double2_pane

0xa5e1,	// (0x0001779a) list_double_graphic_heading_pane_ParamLimits

0xa5e1,	// (0x0001779a) list_double_graphic_heading_pane

0xa5e1,	// (0x0001779a) list_double_graphic_pane_ParamLimits

0xa5e1,	// (0x0001779a) list_double_graphic_pane

0xa5e1,	// (0x0001779a) list_double_heading_pane_ParamLimits

0xa5e1,	// (0x0001779a) list_double_heading_pane

0xa5e1,	// (0x0001779a) list_double_large_graphic_pane_ParamLimits

0xa5e1,	// (0x0001779a) list_double_large_graphic_pane

0xa5e1,	// (0x0001779a) list_double_number_pane_ParamLimits

0xa5e1,	// (0x0001779a) list_double_number_pane

0xa5e1,	// (0x0001779a) list_double_pane_ParamLimits

0xa5e1,	// (0x0001779a) list_double_pane

0xa5e1,	// (0x0001779a) list_double_time_pane_ParamLimits

0xa5e1,	// (0x0001779a) list_double_time_pane

0xa5e1,	// (0x0001779a) list_setting_number_pane_ParamLimits

0xa5e1,	// (0x0001779a) list_setting_number_pane

0xa5e1,	// (0x0001779a) list_setting_pane_ParamLimits

0xa5e1,	// (0x0001779a) list_setting_pane

0xa642,	// (0x000177fb) list_single_2graphic_pane_ParamLimits

0xa642,	// (0x000177fb) list_single_2graphic_pane

0xa642,	// (0x000177fb) list_single_graphic_heading_pane_ParamLimits

0xa642,	// (0x000177fb) list_single_graphic_heading_pane

0xa642,	// (0x000177fb) list_single_graphic_pane_ParamLimits

0xa642,	// (0x000177fb) list_single_graphic_pane

0xa642,	// (0x000177fb) list_single_heading_pane_ParamLimits

0xa642,	// (0x000177fb) list_single_heading_pane

0xa69a,	// (0x00017853) list_single_large_graphic_pane_ParamLimits

0xa69a,	// (0x00017853) list_single_large_graphic_pane

0xa642,	// (0x000177fb) list_single_number_heading_pane_ParamLimits

0xa642,	// (0x000177fb) list_single_number_heading_pane

0xa642,	// (0x000177fb) list_single_number_pane_ParamLimits

0xa642,	// (0x000177fb) list_single_number_pane

0xa642,	// (0x000177fb) list_single_pane_ParamLimits

0xa642,	// (0x000177fb) list_single_pane

0x33cc,	// (0x00010585) list_highlight_pane_cp1

0x3afd,	// (0x00010cb6) list_single_pane_g1_ParamLimits

0x3afd,	// (0x00010cb6) list_single_pane_g1

0x75bf,	// (0x00014778) list_single_pane_g2_ParamLimits

0x75bf,	// (0x00014778) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001c781) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001c781) list_single_pane_g

0xa59a,	// (0x00017753) list_single_pane_t1_ParamLimits

0xa59a,	// (0x00017753) list_single_pane_t1

0x3afd,	// (0x00010cb6) list_single_number_pane_g1_ParamLimits

0x3afd,	// (0x00010cb6) list_single_number_pane_g1

0x75bf,	// (0x00014778) list_single_number_pane_g2_ParamLimits

0x75bf,	// (0x00014778) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001c781) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001c781) list_single_number_pane_g

0xa302,	// (0x000174bb) list_single_number_pane_t1_ParamLimits

0xa302,	// (0x000174bb) list_single_number_pane_t1

0xa318,	// (0x000174d1) list_single_number_pane_t2_ParamLimits

0xa318,	// (0x000174d1) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0001cb13) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0001cb13) list_single_number_pane_t

0x3af1,	// (0x00010caa) list_single_graphic_pane_g1_ParamLimits

0x3af1,	// (0x00010caa) list_single_graphic_pane_g1

0x3afd,	// (0x00010cb6) list_single_graphic_pane_g2_ParamLimits

0x3afd,	// (0x00010cb6) list_single_graphic_pane_g2

0x75bf,	// (0x00014778) list_single_graphic_pane_g3_ParamLimits

0x75bf,	// (0x00014778) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001c77a) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001c77a) list_single_graphic_pane_g

0x75cb,	// (0x00014784) list_single_graphic_pane_t1_ParamLimits

0x75cb,	// (0x00014784) list_single_graphic_pane_t1

0x3afd,	// (0x00010cb6) list_single_heading_pane_g1_ParamLimits

0x3afd,	// (0x00010cb6) list_single_heading_pane_g1

0x75bf,	// (0x00014778) list_single_heading_pane_g2_ParamLimits

0x75bf,	// (0x00014778) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c781) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c781) list_single_heading_pane_g

0x75e1,	// (0x0001479a) list_single_heading_pane_t1_ParamLimits

0x75e1,	// (0x0001479a) list_single_heading_pane_t1

0x75f7,	// (0x000147b0) list_single_heading_pane_t2_ParamLimits

0x75f7,	// (0x000147b0) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001c786) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001c786) list_single_heading_pane_t

0x3afd,	// (0x00010cb6) list_single_number_heading_pane_g1_ParamLimits

0x3afd,	// (0x00010cb6) list_single_number_heading_pane_g1

0x75bf,	// (0x00014778) list_single_number_heading_pane_g2_ParamLimits

0x75bf,	// (0x00014778) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c781) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c781) list_single_number_heading_pane_g

0x75e1,	// (0x0001479a) list_single_number_heading_pane_t1_ParamLimits

0x75e1,	// (0x0001479a) list_single_number_heading_pane_t1

0x7609,	// (0x000147c2) list_single_number_heading_pane_t2_ParamLimits

0x7609,	// (0x000147c2) list_single_number_heading_pane_t2

0x761b,	// (0x000147d4) list_single_number_heading_pane_t3_ParamLimits

0x761b,	// (0x000147d4) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001c78b) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001c78b) list_single_number_heading_pane_t

0x762d,	// (0x000147e6) list_single_graphic_heading_pane_g1_ParamLimits

0x762d,	// (0x000147e6) list_single_graphic_heading_pane_g1

0x7639,	// (0x000147f2) list_single_graphic_heading_pane_g4_ParamLimits

0x7639,	// (0x000147f2) list_single_graphic_heading_pane_g4

0x75bf,	// (0x00014778) list_single_graphic_heading_pane_g5_ParamLimits

0x75bf,	// (0x00014778) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001c792) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001c792) list_single_graphic_heading_pane_g

0x75e1,	// (0x0001479a) list_single_graphic_heading_pane_t1_ParamLimits

0x75e1,	// (0x0001479a) list_single_graphic_heading_pane_t1

0x764a,	// (0x00014803) list_single_graphic_heading_pane_t2_ParamLimits

0x764a,	// (0x00014803) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001c799) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001c799) list_single_graphic_heading_pane_t

0x765c,	// (0x00014815) list_single_large_graphic_pane_g1_ParamLimits

0x765c,	// (0x00014815) list_single_large_graphic_pane_g1

0x7668,	// (0x00014821) list_single_large_graphic_pane_g2_ParamLimits

0x7668,	// (0x00014821) list_single_large_graphic_pane_g2

0x7674,	// (0x0001482d) list_single_large_graphic_pane_g3_ParamLimits

0x7674,	// (0x0001482d) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001c79e) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001c79e) list_single_large_graphic_pane_g

0x95c0,	// (0x00016779) wait_border_pane_g2_copy1

0x7680,	// (0x00014839) list_single_large_graphic_pane_g4_cp2

0x7688,	// (0x00014841) list_single_large_graphic_pane_t1_ParamLimits

0x7688,	// (0x00014841) list_single_large_graphic_pane_t1

0x769e,	// (0x00014857) list_double_pane_g1_ParamLimits

0x769e,	// (0x00014857) list_double_pane_g1

0x76aa,	// (0x00014863) list_double_pane_g2_ParamLimits

0x76aa,	// (0x00014863) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001c7a5) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001c7a5) list_double_pane_g

0x76b6,	// (0x0001486f) list_double_pane_t1_ParamLimits

0x76b6,	// (0x0001486f) list_double_pane_t1

0x76cc,	// (0x00014885) list_double_pane_t2_ParamLimits

0x76cc,	// (0x00014885) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001c7aa) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001c7aa) list_double_pane_t

0x76de,	// (0x00014897) list_double2_pane_g1_ParamLimits

0x76de,	// (0x00014897) list_double2_pane_g1

0x76ef,	// (0x000148a8) list_double2_pane_g2_ParamLimits

0x76ef,	// (0x000148a8) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001c7af) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001c7af) list_double2_pane_g

0x76fb,	// (0x000148b4) list_double2_pane_t1_ParamLimits

0x76fb,	// (0x000148b4) list_double2_pane_t1

0x7711,	// (0x000148ca) list_double2_pane_t2_ParamLimits

0x7711,	// (0x000148ca) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001c7b4) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001c7b4) list_double2_pane_t

0x769e,	// (0x00014857) list_double_number_pane_g1_ParamLimits

0x769e,	// (0x00014857) list_double_number_pane_g1

0x76aa,	// (0x00014863) list_double_number_pane_g2_ParamLimits

0x76aa,	// (0x00014863) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001c7a5) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001c7a5) list_double_number_pane_g

0x7723,	// (0x000148dc) list_double_number_pane_t1_ParamLimits

0x7723,	// (0x000148dc) list_double_number_pane_t1

0x7735,	// (0x000148ee) list_double_number_pane_t2_ParamLimits

0x7735,	// (0x000148ee) list_double_number_pane_t2

0x774b,	// (0x00014904) list_double_number_pane_t3_ParamLimits

0x774b,	// (0x00014904) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001c7b9) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001c7b9) list_double_number_pane_t

0x775d,	// (0x00014916) list_double_graphic_pane_g1_ParamLimits

0x775d,	// (0x00014916) list_double_graphic_pane_g1

0x7769,	// (0x00014922) list_double_graphic_pane_g2_ParamLimits

0x7769,	// (0x00014922) list_double_graphic_pane_g2

0x3e03,	// (0x00010fbc) list_double_graphic_pane_g3_ParamLimits

0x3e03,	// (0x00010fbc) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001c7c0) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001c7c0) list_double_graphic_pane_g

0x7784,	// (0x0001493d) list_double_graphic_pane_t1_ParamLimits

0x7784,	// (0x0001493d) list_double_graphic_pane_t1

0x779a,	// (0x00014953) list_double_graphic_pane_t2_ParamLimits

0x779a,	// (0x00014953) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001c7c9) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001c7c9) list_double_graphic_pane_t

0x77ac,	// (0x00014965) list_double2_graphic_pane_g1_ParamLimits

0x77ac,	// (0x00014965) list_double2_graphic_pane_g1

0x77b8,	// (0x00014971) list_double2_graphic_pane_g2_ParamLimits

0x77b8,	// (0x00014971) list_double2_graphic_pane_g2

0x76ef,	// (0x000148a8) list_double2_graphic_pane_g3_ParamLimits

0x76ef,	// (0x000148a8) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001c7ce) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001c7ce) list_double2_graphic_pane_g

0x77c4,	// (0x0001497d) list_double2_graphic_pane_t1_ParamLimits

0x77c4,	// (0x0001497d) list_double2_graphic_pane_t1

0x77da,	// (0x00014993) list_double2_graphic_pane_t2_ParamLimits

0x77da,	// (0x00014993) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001c7d5) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001c7d5) list_double2_graphic_pane_t

0x77ec,	// (0x000149a5) list_double_large_graphic_pane_g1_ParamLimits

0x77ec,	// (0x000149a5) list_double_large_graphic_pane_g1

0x7817,	// (0x000149d0) list_double_large_graphic_pane_g2_ParamLimits

0x7817,	// (0x000149d0) list_double_large_graphic_pane_g2

0x76aa,	// (0x00014863) list_double_large_graphic_pane_g3_ParamLimits

0x76aa,	// (0x00014863) list_double_large_graphic_pane_g3

0x7828,	// (0x000149e1) list_double_large_graphic_pane_g4_ParamLimits

0x7828,	// (0x000149e1) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001c7da) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001c7da) list_double_large_graphic_pane_g

0x783b,	// (0x000149f4) list_double_large_graphic_pane_t1_ParamLimits

0x783b,	// (0x000149f4) list_double_large_graphic_pane_t1

0x7854,	// (0x00014a0d) list_double_large_graphic_pane_t2_ParamLimits

0x7854,	// (0x00014a0d) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001c7e5) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001c7e5) list_double_large_graphic_pane_t

0x7866,	// (0x00014a1f) list_double2_large_graphic_pane_g1_ParamLimits

0x7866,	// (0x00014a1f) list_double2_large_graphic_pane_g1

0x76de,	// (0x00014897) list_double2_large_graphic_pane_g2_ParamLimits

0x76de,	// (0x00014897) list_double2_large_graphic_pane_g2

0x76ef,	// (0x000148a8) list_double2_large_graphic_pane_g3_ParamLimits

0x76ef,	// (0x000148a8) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001c7ea) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001c7ea) list_double2_large_graphic_pane_g

0x7872,	// (0x00014a2b) list_double2_large_graphic_pane_t1_ParamLimits

0x7872,	// (0x00014a2b) list_double2_large_graphic_pane_t1

0x7888,	// (0x00014a41) list_double2_large_graphic_pane_t2_ParamLimits

0x7888,	// (0x00014a41) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001c7f1) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001c7f1) list_double2_large_graphic_pane_t

0x789a,	// (0x00014a53) list_double_heading_pane_g1_ParamLimits

0x789a,	// (0x00014a53) list_double_heading_pane_g1

0x78ab,	// (0x00014a64) list_double_heading_pane_g2_ParamLimits

0x78ab,	// (0x00014a64) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001c7f6) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001c7f6) list_double_heading_pane_g

0x78b7,	// (0x00014a70) list_double_heading_pane_t1_ParamLimits

0x78b7,	// (0x00014a70) list_double_heading_pane_t1

0x78cd,	// (0x00014a86) list_double_heading_pane_t2_ParamLimits

0x78cd,	// (0x00014a86) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001c7fb) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001c7fb) list_double_heading_pane_t

0x3b09,	// (0x00010cc2) list_double_graphic_heading_pane_g1_ParamLimits

0x3b09,	// (0x00010cc2) list_double_graphic_heading_pane_g1

0x789a,	// (0x00014a53) list_double_graphic_heading_pane_g2_ParamLimits

0x789a,	// (0x00014a53) list_double_graphic_heading_pane_g2

0x78ab,	// (0x00014a64) list_double_graphic_heading_pane_g3_ParamLimits

0x78ab,	// (0x00014a64) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001c800) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001c800) list_double_graphic_heading_pane_g

0x78df,	// (0x00014a98) list_double_graphic_heading_pane_t1_ParamLimits

0x78df,	// (0x00014a98) list_double_graphic_heading_pane_t1

0x78f5,	// (0x00014aae) list_double_graphic_heading_pane_t2_ParamLimits

0x78f5,	// (0x00014aae) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001c807) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001c807) list_double_graphic_heading_pane_t

0x7817,	// (0x000149d0) list_double_time_pane_g1_ParamLimits

0x7817,	// (0x000149d0) list_double_time_pane_g1

0x76aa,	// (0x00014863) list_double_time_pane_g2_ParamLimits

0x76aa,	// (0x00014863) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001c80c) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001c80c) list_double_time_pane_g

0x7907,	// (0x00014ac0) list_double_time_pane_t1_ParamLimits

0x7907,	// (0x00014ac0) list_double_time_pane_t1

0x791d,	// (0x00014ad6) list_double_time_pane_t2_ParamLimits

0x791d,	// (0x00014ad6) list_double_time_pane_t2

0x792f,	// (0x00014ae8) list_double_time_pane_t3_ParamLimits

0x792f,	// (0x00014ae8) list_double_time_pane_t3

0x7941,	// (0x00014afa) list_double_time_pane_t4_ParamLimits

0x7941,	// (0x00014afa) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001c811) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001c811) list_double_time_pane_t

0x77b8,	// (0x00014971) list_setting_pane_g1_ParamLimits

0x77b8,	// (0x00014971) list_setting_pane_g1

0x76ef,	// (0x000148a8) list_setting_pane_g2_ParamLimits

0x76ef,	// (0x000148a8) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001c81a) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001c81a) list_setting_pane_g

0x7953,	// (0x00014b0c) list_setting_pane_t1_ParamLimits

0x7953,	// (0x00014b0c) list_setting_pane_t1

0x796a,	// (0x00014b23) list_setting_pane_t2_ParamLimits

0x796a,	// (0x00014b23) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001c81f) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001c81f) list_setting_pane_t

0x79a9,	// (0x00014b62) set_value_pane_cp_ParamLimits

0x79a9,	// (0x00014b62) set_value_pane_cp

0x77b8,	// (0x00014971) list_setting_number_pane_g1_ParamLimits

0x77b8,	// (0x00014971) list_setting_number_pane_g1

0x76ef,	// (0x000148a8) list_setting_number_pane_g2_ParamLimits

0x76ef,	// (0x000148a8) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001c81a) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001c81a) list_setting_number_pane_g

0x79b7,	// (0x00014b70) list_setting_number_pane_t1_ParamLimits

0x79b7,	// (0x00014b70) list_setting_number_pane_t1

0x79cb,	// (0x00014b84) list_setting_number_pane_t2_ParamLimits

0x79cb,	// (0x00014b84) list_setting_number_pane_t2

0x79e2,	// (0x00014b9b) list_setting_number_pane_t3_ParamLimits

0x79e2,	// (0x00014b9b) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001c826) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001c826) list_setting_number_pane_t

0x79a9,	// (0x00014b62) set_value_pane_ParamLimits

0x79a9,	// (0x00014b62) set_value_pane

0x3b2a,	// (0x00010ce3) bg_set_opt_pane_ParamLimits

0x3b2a,	// (0x00010ce3) bg_set_opt_pane

0x3b4b,	// (0x00010d04) set_value_pane_t1

0x3b59,	// (0x00010d12) slider_set_pane_cp3

0x3b62,	// (0x00010d1b) volume_small_pane_cp

0x3b6b,	// (0x00010d24) list_form_gen_pane

0x3b74,	// (0x00010d2d) scroll_pane_cp8

0x7a25,	// (0x00014bde) form_field_data_pane_ParamLimits

0x7a25,	// (0x00014bde) form_field_data_pane

0x7a43,	// (0x00014bfc) form_field_data_wide_pane_ParamLimits

0x7a43,	// (0x00014bfc) form_field_data_wide_pane

0x7a6a,	// (0x00014c23) form_field_popup_pane_ParamLimits

0x7a6a,	// (0x00014c23) form_field_popup_pane

0x3b95,	// (0x00010d4e) form_field_popup_wide_pane_ParamLimits

0x3b95,	// (0x00010d4e) form_field_popup_wide_pane

0x3bb6,	// (0x00010d6f) form_field_slider_pane_ParamLimits

0x3bb6,	// (0x00010d6f) form_field_slider_pane

0x3bc9,	// (0x00010d82) form_field_slider_wide_pane_ParamLimits

0x3bc9,	// (0x00010d82) form_field_slider_wide_pane

0x3bdc,	// (0x00010d95) data_form_pane

0x7a96,	// (0x00014c4f) form_field_data_pane_t1

0x3be8,	// (0x00010da1) input_focus_pane

0x3bf6,	// (0x00010daf) data_form_wide_pane

0x3c33,	// (0x00010dec) form_field_data_wide_pane_t1

0x38c5,	// (0x00010a7e) input_focus_pane_cp6

0x7ab0,	// (0x00014c69) form_field_popup_pane_t1

0x3be8,	// (0x00010da1) input_focus_pane_cp7

0x3c55,	// (0x00010e0e) list_form_pane

0x3c69,	// (0x00010e22) form_field_popup_wide_pane_t1

0x3be8,	// (0x00010da1) input_focus_pane_cp8

0x3c7e,	// (0x00010e37) list_form_wide_pane

0x7ad2,	// (0x00014c8b) form_field_slider_pane_t1_ParamLimits

0x7ad2,	// (0x00014c8b) form_field_slider_pane_t1

0x7ae6,	// (0x00014c9f) form_field_slider_pane_t2_ParamLimits

0x7ae6,	// (0x00014c9f) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001c836) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001c836) form_field_slider_pane_t

0x347a,	// (0x00010633) input_focus_pane_cp9_ParamLimits

0x347a,	// (0x00010633) input_focus_pane_cp9

0x7af8,	// (0x00014cb1) slider_cont_pane_ParamLimits

0x7af8,	// (0x00014cb1) slider_cont_pane

0x3c8d,	// (0x00010e46) form_field_slider_wide_pane_t1_ParamLimits

0x3c8d,	// (0x00010e46) form_field_slider_wide_pane_t1

0x3c9f,	// (0x00010e58) form_field_slider_wide_pane_t2_ParamLimits

0x3c9f,	// (0x00010e58) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001c83b) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001c83b) form_field_slider_wide_pane_t

0x347a,	// (0x00010633) input_focus_pane_cp10_ParamLimits

0x347a,	// (0x00010633) input_focus_pane_cp10

0x7b0c,	// (0x00014cc5) slider_cont_pane_cp1_ParamLimits

0x7b0c,	// (0x00014cc5) slider_cont_pane_cp1

0x7b20,	// (0x00014cd9) slider_form_pane_cp

0x3cb1,	// (0x00010e6a) input_focus_pane_g1

0x3cb9,	// (0x00010e72) input_focus_pane_g2

0x3cc1,	// (0x00010e7a) input_focus_pane_g3

0x3cc9,	// (0x00010e82) input_focus_pane_g4

0x3cd1,	// (0x00010e8a) input_focus_pane_g5

0x3cd9,	// (0x00010e92) input_focus_pane_g6

0x3ce1,	// (0x00010e9a) input_focus_pane_g7

0x3ce9,	// (0x00010ea2) input_focus_pane_g8

0x3cf1,	// (0x00010eaa) input_focus_pane_g9

0x3253,	// (0x0001040c) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001c840) input_focus_pane_g

0x95c9,	// (0x00016782) wait_border_pane_g3_copy1

0x7b28,	// (0x00014ce1) data_form_pane_t1

0x3253,	// (0x0001040c) wait_anim_pane_g1_copy1

0xa57b,	// (0x00017734) data_form_wide_pane_t1

0x3cf9,	// (0x00010eb2) list_form_graphic_pane_cp_ParamLimits

0x3cf9,	// (0x00010eb2) list_form_graphic_pane_cp

0xa550,	// (0x00017709) slider_form_pane_g1

0xa559,	// (0x00017712) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0001cb43) slider_form_pane_g

0x3cf9,	// (0x00010eb2) list_form_graphic_pane_ParamLimits

0x3cf9,	// (0x00010eb2) list_form_graphic_pane

0x3d0b,	// (0x00010ec4) list_form_graphic_pane_g1

0x3d13,	// (0x00010ecc) list_form_graphic_pane_t1_ParamLimits

0x3d13,	// (0x00010ecc) list_form_graphic_pane_t1

0x3492,	// (0x0001064b) list_highlight_pane_cp5_ParamLimits

0x3492,	// (0x0001064b) list_highlight_pane_cp5

0x7b47,	// (0x00014d00) find_pane_g1

0x3d28,	// (0x00010ee1) input_find_pane

0x7b50,	// (0x00014d09) input_find_pane_g1_ParamLimits

0x7b50,	// (0x00014d09) input_find_pane_g1

0x7b5c,	// (0x00014d15) input_find_pane_t1_ParamLimits

0x7b5c,	// (0x00014d15) input_find_pane_t1

0x7b71,	// (0x00014d2a) input_find_pane_t2_ParamLimits

0x7b71,	// (0x00014d2a) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001c855) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001c855) input_find_pane_t

0x3d31,	// (0x00010eea) input_focus_pane_cp5_ParamLimits

0x3d31,	// (0x00010eea) input_focus_pane_cp5

0x3d3f,	// (0x00010ef8) bg_popup_window_pane_cp2_ParamLimits

0x3d3f,	// (0x00010ef8) bg_popup_window_pane_cp2

0x3d4c,	// (0x00010f05) listscroll_menu_pane_ParamLimits

0x3d4c,	// (0x00010f05) listscroll_menu_pane

0x7b92,	// (0x00014d4b) popup_submenu_window_ParamLimits

0x7b92,	// (0x00014d4b) popup_submenu_window

0x3d58,	// (0x00010f11) find_popup_pane_g1

0x3d60,	// (0x00010f19) input_popup_find_pane_cp

0x3d31,	// (0x00010eea) input_focus_pane_cp4_ParamLimits

0x3d31,	// (0x00010eea) input_focus_pane_cp4

0x3d6a,	// (0x00010f23) input_popup_find_pane_t1_ParamLimits

0x3d6a,	// (0x00010f23) input_popup_find_pane_t1

0x33cc,	// (0x00010585) bg_popup_sub_pane_cp

0x3d98,	// (0x00010f51) listscroll_popup_sub_pane

0x3da0,	// (0x00010f59) list_submenu_pane_ParamLimits

0x3da0,	// (0x00010f59) list_submenu_pane

0x3db1,	// (0x00010f6a) scroll_pane_cp4

0x3db9,	// (0x00010f72) list_single_popup_submenu_pane_ParamLimits

0x3db9,	// (0x00010f72) list_single_popup_submenu_pane

0x3dce,	// (0x00010f87) list_single_popup_submenu_pane_g1

0x3dd6,	// (0x00010f8f) list_single_popup_submenu_pane_t1_ParamLimits

0x3dd6,	// (0x00010f8f) list_single_popup_submenu_pane_t1

0x3492,	// (0x0001064b) bg_active_tab_pane_cp1_ParamLimits

0x3492,	// (0x0001064b) bg_active_tab_pane_cp1

0x7bd0,	// (0x00014d89) tabs_2_active_pane_g1

0x7bd8,	// (0x00014d91) tabs_2_active_pane_t1

0x3492,	// (0x0001064b) bg_passive_tab_pane_cp1_ParamLimits

0x3492,	// (0x0001064b) bg_passive_tab_pane_cp1

0x7bd0,	// (0x00014d89) tabs_2_passive_pane_g1

0x7bd8,	// (0x00014d91) tabs_2_passive_pane_t1

0x3e0f,	// (0x00010fc8) bg_active_tab_pane_cp4

0x7bea,	// (0x00014da3) tabs_2_long_active_pane_t1

0x7bfd,	// (0x00014db6) bg_passive_tab_pane_cp4

0x5dff,	// (0x00012fb8) list_single_midp_graphic_pane_g4_ParamLimits

0x3e0f,	// (0x00010fc8) bg_active_tab_pane_cp5

0x7c09,	// (0x00014dc2) tabs_3_long_active_pane_t1

0x7bfd,	// (0x00014db6) bg_passive_tab_pane_cp5

0x5dff,	// (0x00012fb8) list_single_midp_graphic_pane_g4

0x3492,	// (0x0001064b) bg_popup_window_pane_cp13_ParamLimits

0x3492,	// (0x0001064b) bg_popup_window_pane_cp13

0x3df4,	// (0x00010fad) listscroll_popup_fast_pane_ParamLimits

0x3df4,	// (0x00010fad) listscroll_popup_fast_pane

0x3e1d,	// (0x00010fd6) grid_popup_fast_pane_ParamLimits

0x3e1d,	// (0x00010fd6) grid_popup_fast_pane

0x3e2f,	// (0x00010fe8) scroll_pane_cp9_ParamLimits

0x3e2f,	// (0x00010fe8) scroll_pane_cp9

0xc4a2,	// (0x0001965b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc4a2,	// (0x0001965b) list_single_graphic_hl_pane_t1_cp2

0x3e53,	// (0x0001100c) input_focus_pane_cp20_ParamLimits

0x3e53,	// (0x0001100c) input_focus_pane_cp20

0x3e61,	// (0x0001101a) query_popup_data_pane_t1_ParamLimits

0x3e61,	// (0x0001101a) query_popup_data_pane_t1

0x3e74,	// (0x0001102d) query_popup_data_pane_t2_ParamLimits

0x3e74,	// (0x0001102d) query_popup_data_pane_t2

0x3eba,	// (0x00011073) query_popup_data_pane_t3_ParamLimits

0x3eba,	// (0x00011073) query_popup_data_pane_t3

0x3efb,	// (0x000110b4) query_popup_data_pane_t4_ParamLimits

0x3efb,	// (0x000110b4) query_popup_data_pane_t4

0x3f37,	// (0x000110f0) query_popup_data_pane_t5_ParamLimits

0x3f37,	// (0x000110f0) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001c85a) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001c85a) query_popup_data_pane_t

0x3cb1,	// (0x00010e6a) bg_set_opt_pane_g1

0x3cb9,	// (0x00010e72) bg_set_opt_pane_g2

0x3cc1,	// (0x00010e7a) bg_set_opt_pane_g3

0x3cc9,	// (0x00010e82) bg_set_opt_pane_g4

0x3cd1,	// (0x00010e8a) bg_set_opt_pane_g5

0x3cd9,	// (0x00010e92) bg_set_opt_pane_g6

0x3ce1,	// (0x00010e9a) bg_set_opt_pane_g7

0x3ce9,	// (0x00010ea2) bg_set_opt_pane_g8

0x3cf1,	// (0x00010eaa) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001c865) bg_set_opt_pane_g

0x59ff,	// (0x00012bb8) control_top_pane_stacon_ParamLimits

0x59ff,	// (0x00012bb8) control_top_pane_stacon

0x5a52,	// (0x00012c0b) signal_pane_stacon_ParamLimits

0x5a52,	// (0x00012c0b) signal_pane_stacon

0x4660,	// (0x00011819) stacon_top_pane_g1_ParamLimits

0x4660,	// (0x00011819) stacon_top_pane_g1

0x5a77,	// (0x00012c30) title_pane_stacon_ParamLimits

0x5a77,	// (0x00012c30) title_pane_stacon

0x5aa1,	// (0x00012c5a) uni_indicator_pane_stacon_ParamLimits

0x5aa1,	// (0x00012c5a) uni_indicator_pane_stacon

0x5ab9,	// (0x00012c72) battery_pane_stacon_ParamLimits

0x5ab9,	// (0x00012c72) battery_pane_stacon

0x5afd,	// (0x00012cb6) control_bottom_pane_stacon_ParamLimits

0x5afd,	// (0x00012cb6) control_bottom_pane_stacon

0x5b20,	// (0x00012cd9) navi_pane_stacon_ParamLimits

0x5b20,	// (0x00012cd9) navi_pane_stacon

0x474e,	// (0x00011907) stacon_bottom_pane_g1_ParamLimits

0x474e,	// (0x00011907) stacon_bottom_pane_g1

0x575c,	// (0x00012915) aid_levels_signal_lsc_ParamLimits

0x575c,	// (0x00012915) aid_levels_signal_lsc

0x5773,	// (0x0001292c) signal_pane_stacon_g1_ParamLimits

0x5773,	// (0x0001292c) signal_pane_stacon_g1

0x5787,	// (0x00012940) signal_pane_stacon_g2_ParamLimits

0x5787,	// (0x00012940) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001c878) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001c878) signal_pane_stacon_g

0x57bc,	// (0x00012975) title_pane_stacon_t1_ParamLimits

0x57bc,	// (0x00012975) title_pane_stacon_t1

0x4014,	// (0x000111cd) uni_indicator_pane_stacon_g1

0x401e,	// (0x000111d7) uni_indicator_pane_stacon_g2

0x4000,	// (0x000111b9) uni_indicator_pane_stacon_g3

0x400a,	// (0x000111c3) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001c884) uni_indicator_pane_stacon_g

0x57e1,	// (0x0001299a) control_top_pane_stacon_g1

0x57e9,	// (0x000129a2) control_top_pane_stacon_t1_ParamLimits

0x57e9,	// (0x000129a2) control_top_pane_stacon_t1

0x5820,	// (0x000129d9) aid_levels_battery_lsc_ParamLimits

0x5820,	// (0x000129d9) aid_levels_battery_lsc

0x5838,	// (0x000129f1) battery_pane_stacon_g1_ParamLimits

0x5838,	// (0x000129f1) battery_pane_stacon_g1

0x584b,	// (0x00012a04) battery_pane_stacon_g2_ParamLimits

0x584b,	// (0x00012a04) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001c88d) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001c88d) battery_pane_stacon_g

0x5889,	// (0x00012a42) navi_icon_pane_stacon

0x589d,	// (0x00012a56) navi_navi_pane_stacon

0x5889,	// (0x00012a42) navi_text_pane_stacon

0x57e1,	// (0x0001299a) control_bottom_pane_stacon_g1

0x58b3,	// (0x00012a6c) control_bottom_pane_stacon_t1_ParamLimits

0x58b3,	// (0x00012a6c) control_bottom_pane_stacon_t1

0x7c1b,	// (0x00014dd4) grid_app_pane_ParamLimits

0x7c1b,	// (0x00014dd4) grid_app_pane

0x7c3f,	// (0x00014df8) scroll_pane_cp15_ParamLimits

0x7c3f,	// (0x00014df8) scroll_pane_cp15

0x7c52,	// (0x00014e0b) cell_app_pane_ParamLimits

0x7c52,	// (0x00014e0b) cell_app_pane

0x7c7e,	// (0x00014e37) cell_app_pane_g1_ParamLimits

0x7c7e,	// (0x00014e37) cell_app_pane_g1

0x414b,	// (0x00011304) cell_app_pane_g2_ParamLimits

0x414b,	// (0x00011304) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001c892) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001c892) cell_app_pane_g

0x4157,	// (0x00011310) cell_app_pane_t1_ParamLimits

0x4157,	// (0x00011310) cell_app_pane_t1

0x416e,	// (0x00011327) grid_highlight_pane_ParamLimits

0x416e,	// (0x00011327) grid_highlight_pane

0x3cb1,	// (0x00010e6a) cell_highlight_pane_g1

0x3cb9,	// (0x00010e72) cell_highlight_pane_g2

0x3cc1,	// (0x00010e7a) cell_highlight_pane_g3

0x3cc9,	// (0x00010e82) cell_highlight_pane_g4

0x3cd1,	// (0x00010e8a) cell_highlight_pane_g5

0x3cd9,	// (0x00010e92) cell_highlight_pane_g6

0x3ce1,	// (0x00010e9a) cell_highlight_pane_g7

0x3ce9,	// (0x00010ea2) cell_highlight_pane_g8

0x3cf1,	// (0x00010eaa) cell_highlight_pane_g9

0x3253,	// (0x0001040c) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001c840) cell_highlight_pane_g

0x4189,	// (0x00011342) bg_scroll_pane

0x58fd,	// (0x00012ab6) scroll_handle_pane

0x41f9,	// (0x000113b2) scroll_bg_pane_g1

0x420e,	// (0x000113c7) scroll_bg_pane_g2

0x4226,	// (0x000113df) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001c897) scroll_bg_pane_g

0x423b,	// (0x000113f4) scroll_handle_focus_pane_ParamLimits

0x423b,	// (0x000113f4) scroll_handle_focus_pane

0x41f9,	// (0x000113b2) scroll_handle_pane_g1

0x4248,	// (0x00011401) scroll_handle_pane_g2

0x4226,	// (0x000113df) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001c89e) scroll_handle_pane_g

0x3d31,	// (0x00010eea) bg_popup_sub_pane_cp21_ParamLimits

0x3d31,	// (0x00010eea) bg_popup_sub_pane_cp21

0x425c,	// (0x00011415) popup_fep_japan_predictive_window_t1_ParamLimits

0x425c,	// (0x00011415) popup_fep_japan_predictive_window_t1

0x4273,	// (0x0001142c) popup_fep_japan_predictive_window_t2_ParamLimits

0x4273,	// (0x0001142c) popup_fep_japan_predictive_window_t2

0x42a6,	// (0x0001145f) popup_fep_japan_predictive_window_t3_ParamLimits

0x42a6,	// (0x0001145f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001c8a5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001c8a5) popup_fep_japan_predictive_window_t

0x33cc,	// (0x00010585) bg_popup_sub_pane_cp23

0x42dd,	// (0x00011496) listscroll_japin_cand_pane

0x42e5,	// (0x0001149e) popup_fep_japan_candidate_window_t1

0x42f3,	// (0x000114ac) candidate_pane_ParamLimits

0x42f3,	// (0x000114ac) candidate_pane

0x4305,	// (0x000114be) scroll_pane_cp30

0x430f,	// (0x000114c8) list_single_popup_jap_candidate_pane_ParamLimits

0x430f,	// (0x000114c8) list_single_popup_jap_candidate_pane

0x33cc,	// (0x00010585) list_highlight_pane_cp30

0x4323,	// (0x000114dc) list_single_popup_jap_candidate_pane_t1

0x7c9e,	// (0x00014e57) level_1_signal

0x7cab,	// (0x00014e64) level_2_signal

0x7cb8,	// (0x00014e71) level_3_signal

0x7cc5,	// (0x00014e7e) level_4_signal

0x7cd2,	// (0x00014e8b) level_5_signal

0x7cdf,	// (0x00014e98) level_6_signal

0x7cec,	// (0x00014ea5) level_7_signal

0x7c9e,	// (0x00014e57) level_1_battery

0x7cab,	// (0x00014e64) level_2_battery

0x7cb8,	// (0x00014e71) level_3_battery

0x7cc5,	// (0x00014e7e) level_4_battery

0x7cd2,	// (0x00014e8b) level_5_battery

0x7cdf,	// (0x00014e98) level_6_battery

0x7cec,	// (0x00014ea5) level_7_battery

0x4369,	// (0x00011522) list_menu_pane_ParamLimits

0x4369,	// (0x00011522) list_menu_pane

0x437f,	// (0x00011538) scroll_pane_cp25_ParamLimits

0x437f,	// (0x00011538) scroll_pane_cp25

0x4398,	// (0x00011551) list_double2_graphic_pane_cp2_ParamLimits

0x4398,	// (0x00011551) list_double2_graphic_pane_cp2

0x4398,	// (0x00011551) list_double2_large_graphic_pane_cp2_ParamLimits

0x4398,	// (0x00011551) list_double2_large_graphic_pane_cp2

0x4398,	// (0x00011551) list_double2_pane_cp2_ParamLimits

0x4398,	// (0x00011551) list_double2_pane_cp2

0x4398,	// (0x00011551) list_double_graphic_pane_cp2_ParamLimits

0x4398,	// (0x00011551) list_double_graphic_pane_cp2

0x4398,	// (0x00011551) list_double_large_graphic_pane_cp2_ParamLimits

0x4398,	// (0x00011551) list_double_large_graphic_pane_cp2

0x4398,	// (0x00011551) list_double_number_pane_cp2_ParamLimits

0x4398,	// (0x00011551) list_double_number_pane_cp2

0x4398,	// (0x00011551) list_double_pane_cp2_ParamLimits

0x4398,	// (0x00011551) list_double_pane_cp2

0x7d0f,	// (0x00014ec8) list_single_2graphic_pane_cp2_ParamLimits

0x7d0f,	// (0x00014ec8) list_single_2graphic_pane_cp2

0x7d0f,	// (0x00014ec8) list_single_graphic_heading_pane_cp2_ParamLimits

0x7d0f,	// (0x00014ec8) list_single_graphic_heading_pane_cp2

0x7d0f,	// (0x00014ec8) list_single_graphic_pane_cp2_ParamLimits

0x7d0f,	// (0x00014ec8) list_single_graphic_pane_cp2

0x7d0f,	// (0x00014ec8) list_single_heading_pane_cp2_ParamLimits

0x7d0f,	// (0x00014ec8) list_single_heading_pane_cp2

0x43a8,	// (0x00011561) list_single_large_graphic_pane_cp2_ParamLimits

0x43a8,	// (0x00011561) list_single_large_graphic_pane_cp2

0x7d0f,	// (0x00014ec8) list_single_number_heading_pane_cp2_ParamLimits

0x7d0f,	// (0x00014ec8) list_single_number_heading_pane_cp2

0x7d0f,	// (0x00014ec8) list_single_number_pane_cp2_ParamLimits

0x7d0f,	// (0x00014ec8) list_single_number_pane_cp2

0x7d0f,	// (0x00014ec8) list_single_pane_cp2_ParamLimits

0x7d0f,	// (0x00014ec8) list_single_pane_cp2

0x441c,	// (0x000115d5) bg_popup_sub_pane_cp22

0x59af,	// (0x00012b68) popup_side_volume_key_window_g1

0x59d9,	// (0x00012b92) popup_side_volume_key_window_t1

0x59f7,	// (0x00012bb0) volume_small_pane_cp1

0x347a,	// (0x00010633) bg_popup_sub_pane_cp24_ParamLimits

0x347a,	// (0x00010633) bg_popup_sub_pane_cp24

0x4491,	// (0x0001164a) fep_china_uni_candidate_pane_ParamLimits

0x4491,	// (0x0001164a) fep_china_uni_candidate_pane

0x44a5,	// (0x0001165e) fep_china_uni_entry_pane

0x44b5,	// (0x0001166e) popup_fep_china_uni_window_g1

0x44d1,	// (0x0001168a) fep_china_uni_entry_pane_g1

0x44db,	// (0x00011694) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001c8d6) fep_china_uni_entry_pane_g

0x44e5,	// (0x0001169e) fep_entry_item_pane

0x44ef,	// (0x000116a8) fep_candidate_item_pane

0x44f7,	// (0x000116b0) fep_china_uni_candidate_pane_g1

0x4501,	// (0x000116ba) fep_china_uni_candidate_pane_g2

0x4509,	// (0x000116c2) fep_china_uni_candidate_pane_g3

0x4511,	// (0x000116ca) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001c8db) fep_china_uni_candidate_pane_g

0x3253,	// (0x0001040c) fep_entry_item_pane_g1

0x451b,	// (0x000116d4) fep_entry_item_pane_t1_ParamLimits

0x451b,	// (0x000116d4) fep_entry_item_pane_t1

0x4531,	// (0x000116ea) fep_candidate_item_pane_t1_ParamLimits

0x4531,	// (0x000116ea) fep_candidate_item_pane_t1

0x4546,	// (0x000116ff) fep_candidate_item_pane_t2_ParamLimits

0x4546,	// (0x000116ff) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001c8e4) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001c8e4) fep_candidate_item_pane_t

0x3492,	// (0x0001064b) list_highlight_pane_cp31_ParamLimits

0x3492,	// (0x0001064b) list_highlight_pane_cp31

0x4558,	// (0x00011711) level_1_signal_lsc

0x4561,	// (0x0001171a) level_2_signal_lsc

0x456a,	// (0x00011723) level_3_signal_lsc

0x4573,	// (0x0001172c) level_4_signal_lsc

0x457c,	// (0x00011735) level_5_signal_lsc

0x4585,	// (0x0001173e) level_6_signal_lsc

0x458e,	// (0x00011747) level_7_signal_lsc

0x458e,	// (0x00011747) level_1_battery_lsc

0x4597,	// (0x00011750) level_2_battery_lsc

0x45a0,	// (0x00011759) level_3_battery_lsc

0x45a9,	// (0x00011762) level_4_battery_lsc

0x45b2,	// (0x0001176b) level_5_battery_lsc

0x45bb,	// (0x00011774) level_6_battery_lsc

0x4558,	// (0x00011711) level_7_battery_lsc

0x45c4,	// (0x0001177d) scroll_handle_focus_pane_g1

0x45cd,	// (0x00011786) scroll_handle_focus_pane_g2

0x45d6,	// (0x0001178f) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001c8e9) scroll_handle_focus_pane_g

0x7d8e,	// (0x00014f47) list_single_2graphic_pane_g1_ParamLimits

0x7d8e,	// (0x00014f47) list_single_2graphic_pane_g1

0x7639,	// (0x000147f2) list_single_2graphic_pane_g2_ParamLimits

0x7639,	// (0x000147f2) list_single_2graphic_pane_g2

0x75bf,	// (0x00014778) list_single_2graphic_pane_g3_ParamLimits

0x75bf,	// (0x00014778) list_single_2graphic_pane_g3

0x7d9a,	// (0x00014f53) list_single_2graphic_pane_g4_ParamLimits

0x7d9a,	// (0x00014f53) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001c8f0) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001c8f0) list_single_2graphic_pane_g

0x7da6,	// (0x00014f5f) list_single_2graphic_pane_t1_ParamLimits

0x7da6,	// (0x00014f5f) list_single_2graphic_pane_t1

0x7dd4,	// (0x00014f8d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7dd4,	// (0x00014f8d) list_double2_graphic_large_graphic_pane_g1

0x76de,	// (0x00014897) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x76de,	// (0x00014897) list_double2_graphic_large_graphic_pane_g2

0x76ef,	// (0x000148a8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x76ef,	// (0x000148a8) list_double2_graphic_large_graphic_pane_g3

0x7de6,	// (0x00014f9f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7de6,	// (0x00014f9f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001c8f9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001c8f9) list_double2_graphic_large_graphic_pane_g

0x7df2,	// (0x00014fab) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7df2,	// (0x00014fab) list_double2_graphic_large_graphic_pane_t1

0x7e08,	// (0x00014fc1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7e08,	// (0x00014fc1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001c902) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001c902) list_double2_graphic_large_graphic_pane_t

0x47ac,	// (0x00011965) popup_fast_swap_window_ParamLimits

0x47ac,	// (0x00011965) popup_fast_swap_window

0x47ca,	// (0x00011983) popup_side_volume_key_window

0x47e8,	// (0x000119a1) stacon_top_pane

0x47f2,	// (0x000119ab) status_pane_ParamLimits

0x47f2,	// (0x000119ab) status_pane

0x7eca,	// (0x00015083) status_small_pane

0x33cc,	// (0x00010585) control_pane

0x33cc,	// (0x00010585) stacon_bottom_pane

0x3b74,	// (0x00010d2d) scroll_pane_cp121

0x3b6b,	// (0x00010d24) set_content_pane

0x7e1a,	// (0x00014fd3) bg_active_tab_pane_g1_cp1

0x45df,	// (0x00011798) bg_active_tab_pane_g2_cp1

0x7e23,	// (0x00014fdc) bg_active_tab_pane_g3_cp1

0x7e1a,	// (0x00014fd3) bg_passive_tab_pane_g1_cp1

0x45df,	// (0x00011798) bg_passive_tab_pane_g2_cp1

0x7e23,	// (0x00014fdc) bg_passive_tab_pane_g3_cp1

0x7e2c,	// (0x00014fe5) bg_active_tab_pane_g1_cp2

0x45df,	// (0x00011798) bg_active_tab_pane_g2_cp2

0x7e35,	// (0x00014fee) bg_active_tab_pane_g3_cp2

0x7e2c,	// (0x00014fe5) bg_passive_tab_pane_g1_cp2

0x45df,	// (0x00011798) bg_passive_tab_pane_g2_cp2

0x7e35,	// (0x00014fee) bg_passive_tab_pane_g3_cp2

0x7e3e,	// (0x00014ff7) bg_active_tab_pane_g1_cp3

0x45df,	// (0x00011798) bg_active_tab_pane_g2_cp3

0x7e47,	// (0x00015000) bg_active_tab_pane_g3_cp3

0x7e3e,	// (0x00014ff7) bg_passive_tab_pane_g1_cp3

0x45df,	// (0x00011798) bg_passive_tab_pane_g2_cp3

0x7e47,	// (0x00015000) bg_passive_tab_pane_g3_cp3

0x7e50,	// (0x00015009) bg_active_tab_pane_g1_cp4

0x45df,	// (0x00011798) bg_active_tab_pane_g2_cp4

0x7e5b,	// (0x00015014) bg_active_tab_pane_g3_cp4

0x7e50,	// (0x00015009) bg_passive_tab_pane_g1_cp4

0x45df,	// (0x00011798) bg_passive_tab_pane_g2_cp4

0x7e5b,	// (0x00015014) bg_passive_tab_pane_g3_cp4

0x4773,	// (0x0001192c) bg_active_tab_pane_g1_cp5

0x45df,	// (0x00011798) bg_active_tab_pane_g2_cp5

0x476a,	// (0x00011923) bg_active_tab_pane_g3_cp5

0x4773,	// (0x0001192c) bg_passive_tab_pane_g1_cp5

0x45df,	// (0x00011798) bg_passive_tab_pane_g2_cp5

0x476a,	// (0x00011923) bg_passive_tab_pane_g3_cp5

0x7e66,	// (0x0001501f) list_set_graphic_pane_ParamLimits

0x7e66,	// (0x0001501f) list_set_graphic_pane

0x33cc,	// (0x00010585) bg_set_opt_pane_cp4

0x7e7b,	// (0x00015034) list_set_graphic_pane_g1_ParamLimits

0x7e7b,	// (0x00015034) list_set_graphic_pane_g1

0x7e87,	// (0x00015040) list_set_graphic_pane_g2_ParamLimits

0x7e87,	// (0x00015040) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001c907) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001c907) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x0001cc88) volume_small_pane_cp_g

0x7eab,	// (0x00015064) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7eab,	// (0x00015064) list_double2_large_graphic_pane_g1_cp2

0x7eb9,	// (0x00015072) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7eb9,	// (0x00015072) list_double2_large_graphic_pane_g2_cp2

0x477c,	// (0x00011935) list_double2_large_graphic_pane_g3_cp2

0x4784,	// (0x0001193d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4784,	// (0x0001193d) list_double2_large_graphic_pane_t1_cp2

0x479a,	// (0x00011953) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x479a,	// (0x00011953) list_double2_large_graphic_pane_t2_cp2

0xa0ad,	// (0x00017266) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa0ad,	// (0x00017266) list_double_large_graphic_pane_g1_cp2

0xa0c0,	// (0x00017279) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa0c0,	// (0x00017279) list_double_large_graphic_pane_g2_cp2

0x48d3,	// (0x00011a8c) list_double_large_graphic_pane_g3_cp2

0xa0d1,	// (0x0001728a) list_double_large_graphic_pane_g4_cp

0xa0d9,	// (0x00017292) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa0d9,	// (0x00017292) list_double_large_graphic_pane_t1_cp2

0xa0f0,	// (0x000172a9) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa0f0,	// (0x000172a9) list_double_large_graphic_pane_t2_cp2

0x7ed5,	// (0x0001508e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7ed5,	// (0x0001508e) list_double2_graphic_pane_g1_cp2

0x7ee3,	// (0x0001509c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7ee3,	// (0x0001509c) list_double2_graphic_pane_g2_cp2

0x7ef4,	// (0x000150ad) list_double2_graphic_pane_g3_cp2

0x4800,	// (0x000119b9) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4800,	// (0x000119b9) list_double2_graphic_pane_t1_cp2

0x4816,	// (0x000119cf) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4816,	// (0x000119cf) list_double2_graphic_pane_t2_cp2

0x4828,	// (0x000119e1) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4828,	// (0x000119e1) list_single_number_heading_pane_g1_cp2

0x4834,	// (0x000119ed) list_single_number_heading_pane_g2_cp2

0x483c,	// (0x000119f5) list_single_number_heading_pane_t1_cp2_ParamLimits

0x483c,	// (0x000119f5) list_single_number_heading_pane_t1_cp2

0x7efe,	// (0x000150b7) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7efe,	// (0x000150b7) list_single_number_heading_pane_t2_cp2

0x4852,	// (0x00011a0b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4852,	// (0x00011a0b) list_single_number_heading_pane_t3_cp2

0x4828,	// (0x000119e1) list_single_heading_pane_g1_cp2_ParamLimits

0x4828,	// (0x000119e1) list_single_heading_pane_g1_cp2

0x4834,	// (0x000119ed) list_single_heading_pane_g2_cp2

0x483c,	// (0x000119f5) list_single_heading_pane_t1_cp2_ParamLimits

0x483c,	// (0x000119f5) list_single_heading_pane_t1_cp2

0x9ea7,	// (0x00017060) list_single_heading_pane_t2_cp2_ParamLimits

0x9ea7,	// (0x00017060) list_single_heading_pane_t2_cp2

0x9def,	// (0x00016fa8) list_double_graphic_pane_g1_cp2_ParamLimits

0x9def,	// (0x00016fa8) list_double_graphic_pane_g1_cp2

0x9dfb,	// (0x00016fb4) list_double_graphic_pane_g2_cp2_ParamLimits

0x9dfb,	// (0x00016fb4) list_double_graphic_pane_g2_cp2

0x9e0a,	// (0x00016fc3) list_double_graphic_pane_g3_cp2

0x9e12,	// (0x00016fcb) list_double_graphic_pane_t1_cp2_ParamLimits

0x9e12,	// (0x00016fcb) list_double_graphic_pane_t1_cp2

0x9e28,	// (0x00016fe1) list_double_graphic_pane_t2_cp2_ParamLimits

0x9e28,	// (0x00016fe1) list_double_graphic_pane_t2_cp2

0x48c7,	// (0x00011a80) list_double_number_pane_g1_cp2_ParamLimits

0x48c7,	// (0x00011a80) list_double_number_pane_g1_cp2

0x48d3,	// (0x00011a8c) list_double_number_pane_g2_cp2

0x9db3,	// (0x00016f6c) list_double_number_pane_t1_cp2_ParamLimits

0x9db3,	// (0x00016f6c) list_double_number_pane_t1_cp2

0x9dc7,	// (0x00016f80) list_double_number_pane_t2_cp2_ParamLimits

0x9dc7,	// (0x00016f80) list_double_number_pane_t2_cp2

0x9ddd,	// (0x00016f96) list_double_number_pane_t3_cp2_ParamLimits

0x9ddd,	// (0x00016f96) list_double_number_pane_t3_cp2

0x9c9c,	// (0x00016e55) list_single_graphic_pane_g1_cp2_ParamLimits

0x9c9c,	// (0x00016e55) list_single_graphic_pane_g1_cp2

0x7f3c,	// (0x000150f5) list_single_graphic_pane_g2_cp2_ParamLimits

0x7f3c,	// (0x000150f5) list_single_graphic_pane_g2_cp2

0x7f48,	// (0x00015101) list_single_graphic_pane_g3_cp2

0x9c72,	// (0x00016e2b) list_single_graphic_pane_t1_cp2_ParamLimits

0x9c72,	// (0x00016e2b) list_single_graphic_pane_t1_cp2

0x7f3c,	// (0x000150f5) list_single_number_pane_g1_cp2_ParamLimits

0x7f3c,	// (0x000150f5) list_single_number_pane_g1_cp2

0x7f48,	// (0x00015101) list_single_number_pane_g2_cp2

0x9c72,	// (0x00016e2b) list_single_number_pane_t1_cp2_ParamLimits

0x9c72,	// (0x00016e2b) list_single_number_pane_t1_cp2

0x9c88,	// (0x00016e41) list_single_number_pane_t2_cp2_ParamLimits

0x9c88,	// (0x00016e41) list_single_number_pane_t2_cp2

0x7eb9,	// (0x00015072) list_double2_pane_g1_cp2_ParamLimits

0x7eb9,	// (0x00015072) list_double2_pane_g1_cp2

0x477c,	// (0x00011935) list_double2_pane_g2_cp2

0x489f,	// (0x00011a58) list_double2_pane_t1_cp2_ParamLimits

0x489f,	// (0x00011a58) list_double2_pane_t1_cp2

0x48b5,	// (0x00011a6e) list_double2_pane_t2_cp2_ParamLimits

0x48b5,	// (0x00011a6e) list_double2_pane_t2_cp2

0x48c7,	// (0x00011a80) list_double_pane_g1_cp2_ParamLimits

0x48c7,	// (0x00011a80) list_double_pane_g1_cp2

0x48d3,	// (0x00011a8c) list_double_pane_g2_cp2

0x48db,	// (0x00011a94) list_double_pane_t1_cp2_ParamLimits

0x48db,	// (0x00011a94) list_double_pane_t1_cp2

0x48f1,	// (0x00011aaa) list_double_pane_t2_cp2_ParamLimits

0x48f1,	// (0x00011aaa) list_double_pane_t2_cp2

0x7f2c,	// (0x000150e5) list_single_pane_cp2_g3

0x7f3c,	// (0x000150f5) list_single_pane_g1_cp2_ParamLimits

0x7f3c,	// (0x000150f5) list_single_pane_g1_cp2

0x7f48,	// (0x00015101) list_single_pane_g2_cp2

0x7f50,	// (0x00015109) list_single_pane_t1_cp2_ParamLimits

0x7f50,	// (0x00015109) list_single_pane_t1_cp2

0x7f68,	// (0x00015121) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7f68,	// (0x00015121) list_single_large_graphic_pane_g1_cp2

0x7f76,	// (0x0001512f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7f76,	// (0x0001512f) list_single_large_graphic_pane_g2_cp2

0x7f82,	// (0x0001513b) list_single_large_graphic_pane_g3_cp2

0x7f8a,	// (0x00015143) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7f8a,	// (0x00015143) list_single_large_graphic_pane_g4_cp1

0x7fa4,	// (0x0001515d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7fa4,	// (0x0001515d) list_single_large_graphic_pane_t1_cp2

0x9c3c,	// (0x00016df5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9c3c,	// (0x00016df5) list_single_graphic_heading_pane_g1_cp2

0x9c09,	// (0x00016dc2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9c09,	// (0x00016dc2) list_single_graphic_heading_pane_g4_cp2

0x7f48,	// (0x00015101) list_single_graphic_heading_pane_g5_cp2

0x9c48,	// (0x00016e01) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9c48,	// (0x00016e01) list_single_graphic_heading_pane_t1_cp2

0x9c5e,	// (0x00016e17) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9c5e,	// (0x00016e17) list_single_graphic_heading_pane_t2_cp2

0x9bfd,	// (0x00016db6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9bfd,	// (0x00016db6) list_single_2graphic_pane_g1_cp2

0x9c09,	// (0x00016dc2) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9c09,	// (0x00016dc2) list_single_2graphic_pane_g2_cp2

0x7f48,	// (0x00015101) list_single_2graphic_pane_g3_cp2

0x9c1a,	// (0x00016dd3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9c1a,	// (0x00016dd3) list_single_2graphic_pane_g4_cp2

0x9c26,	// (0x00016ddf) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9c26,	// (0x00016ddf) list_single_2graphic_pane_t1_cp2

0x3253,	// (0x0001040c) list_highlight_pane_g10_cp1

0x97d5,	// (0x0001698e) list_highlight_pane_g1_cp1

0x97dd,	// (0x00016996) list_highlight_pane_g2_cp1

0x97e5,	// (0x0001699e) list_highlight_pane_g3_cp1

0x97ed,	// (0x000169a6) list_highlight_pane_g4_cp1

0x97f5,	// (0x000169ae) list_highlight_pane_g5_cp1

0x97fd,	// (0x000169b6) list_highlight_pane_g6_cp1

0x9805,	// (0x000169be) list_highlight_pane_g7_cp1

0x980d,	// (0x000169c6) list_highlight_pane_g8_cp1

0x9815,	// (0x000169ce) list_highlight_pane_g9_cp1

0x96f5,	// (0x000168ae) form_field_slider_pane_t3

0x9703,	// (0x000168bc) form_field_slider_pane_t4

0x9711,	// (0x000168ca) slider_form_pane_ParamLimits

0x9711,	// (0x000168ca) slider_form_pane

0x33cc,	// (0x00010585) control_abbreviations

0x33cc,	// (0x00010585) control_conventions

0x33cc,	// (0x00010585) control_definitions

0x33cc,	// (0x00010585) format_table_attribute

0x9efd,	// (0x000170b6) bg_popup_preview_window_pane_g9

0x33cc,	// (0x00010585) format_table_data2

0x33cc,	// (0x00010585) format_table_data3

0x33cc,	// (0x00010585) format_table_data_example

0x0008,

0x33cc,	// (0x00010585) intro_purpose

0xf8ea,	// (0x0001caa3) bg_popup_preview_window_pane_g

0x33cc,	// (0x00010585) texts_category

0x33cc,	// (0x00010585) texts_graphics

0x7fba,	// (0x00015173) text_digital

0x7fc9,	// (0x00015182) text_primary

0x7fd8,	// (0x00015191) text_primary_small

0x7fe7,	// (0x000151a0) text_secondary

0x7ff6,	// (0x000151af) text_title

0xa72e,	// (0x000178e7) bg_passive_tab_pane_g1_cp3_srt

0x45df,	// (0x00011798) bg_passive_tab_pane_g2_cp3_srt

0xa737,	// (0x000178f0) bg_passive_tab_pane_g3_cp3_srt

0x3492,	// (0x0001064b) bg_active_tab_pane_cp3_srt_ParamLimits

0x3492,	// (0x0001064b) bg_active_tab_pane_cp3_srt

0xa740,	// (0x000178f9) tabs_4_active_pane_srt_g1

0xa748,	// (0x00017901) tabs_4_active_pane_srt_t1_ParamLimits

0xa748,	// (0x00017901) tabs_4_active_pane_srt_t1

0xa72e,	// (0x000178e7) bg_active_tab_pane_g1_cp3_copy1

0x45df,	// (0x00011798) bg_active_tab_pane_g2_cp3_copy1

0xa737,	// (0x000178f0) bg_active_tab_pane_g3_cp3_copy1

0x3492,	// (0x0001064b) tabs_2_long_active_pane_srt_ParamLimits

0x3492,	// (0x0001064b) tabs_2_long_active_pane_srt

0x3492,	// (0x0001064b) tabs_2_long_passive_pane_srt_ParamLimits

0x3492,	// (0x0001064b) tabs_2_long_passive_pane_srt

0x7bfd,	// (0x00014db6) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7bfd,	// (0x00014db6) bg_passive_tab_pane_cp4_srt

0xa361,	// (0x0001751a) bg_passive_tab_pane_g1_cp4_srt

0x45df,	// (0x00011798) bg_passive_tab_pane_g2_cp4_srt

0xa36a,	// (0x00017523) bg_passive_tab_pane_g3_cp4_srt

0x3e0f,	// (0x00010fc8) bg_active_tab_pane_cp4_srt_ParamLimits

0x3e0f,	// (0x00010fc8) bg_active_tab_pane_cp4_srt

0xa373,	// (0x0001752c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa373,	// (0x0001752c) tabs_2_long_active_pane_srt_t1

0xa361,	// (0x0001751a) bg_active_tab_pane_g1_cp4_srt

0x45df,	// (0x00011798) bg_active_tab_pane_g2_cp4_srt

0xa36a,	// (0x00017523) bg_active_tab_pane_g3_cp4_srt

0x347a,	// (0x00010633) tabs_3_long_active_pane_srt_ParamLimits

0x347a,	// (0x00010633) tabs_3_long_active_pane_srt

0x347a,	// (0x00010633) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x347a,	// (0x00010633) tabs_3_long_passive_pane_cp_srt

0x347a,	// (0x00010633) tabs_3_long_passive_pane_srt_ParamLimits

0x347a,	// (0x00010633) tabs_3_long_passive_pane_srt

0x7bfd,	// (0x00014db6) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7bfd,	// (0x00014db6) bg_passive_tab_pane_cp5_srt

0x4773,	// (0x0001192c) bg_passive_tab_pane_g1_cp5_srt

0x45df,	// (0x00011798) bg_passive_tab_pane_g2_cp5_srt

0x476a,	// (0x00011923) bg_passive_tab_pane_g3_cp5_srt

0x3e0f,	// (0x00010fc8) bg_active_tab_pane_cp5_srt_ParamLimits

0x3e0f,	// (0x00010fc8) bg_active_tab_pane_cp5_srt

0xa34f,	// (0x00017508) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa34f,	// (0x00017508) tabs_3_long_active_pane_srt_t1

0x4773,	// (0x0001192c) bg_active_tab_pane_g1_cp5_srt

0x45df,	// (0x00011798) bg_active_tab_pane_g2_cp5_srt

0x476a,	// (0x00011923) bg_active_tab_pane_g3_cp5_srt

0xa341,	// (0x000174fa) navi_text_pane_srt_t1

0xa339,	// (0x000174f2) navi_icon_pane_srt_g1

0x81c1,	// (0x0001537a) midp_editing_number_pane_srt

0x8005,	// (0x000151be) midp_ticker_pane_srt

0x81c9,	// (0x00015382) midp_ticker_pane_srt_g1

0x81d1,	// (0x0001538a) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001c926) midp_ticker_pane_srt_g

0x81d9,	// (0x00015392) midp_ticker_pane_srt_t1

0xa32a,	// (0x000174e3) midp_editing_number_pane_t1_copy1

0x7bfd,	// (0x00014db6) listscroll_midp_pane

0x7bfd,	// (0x00014db6) midp_form_pane

0x806f,	// (0x00015228) midp_info_popup_window_ParamLimits

0x806f,	// (0x00015228) midp_info_popup_window

0x3d31,	// (0x00010eea) bg_popup_sub_pane_cp50_ParamLimits

0x3d31,	// (0x00010eea) bg_popup_sub_pane_cp50

0x940b,	// (0x000165c4) listscroll_midp_info_pane_ParamLimits

0x940b,	// (0x000165c4) listscroll_midp_info_pane

0x93f3,	// (0x000165ac) listscroll_form_midp_pane_ParamLimits

0x93f3,	// (0x000165ac) listscroll_form_midp_pane

0x93ff,	// (0x000165b8) scroll_bar_cp050

0x93d3,	// (0x0001658c) list_midp_pane

0xb4e5,	// (0x0001869e) signal_pane_g2_cp

0x930d,	// (0x000164c6) listscroll_midp_info_pane_t1_ParamLimits

0x930d,	// (0x000164c6) listscroll_midp_info_pane_t1

0x9325,	// (0x000164de) listscroll_midp_info_pane_t2_ParamLimits

0x9325,	// (0x000164de) listscroll_midp_info_pane_t2

0x9363,	// (0x0001651c) listscroll_midp_info_pane_t3_ParamLimits

0x9363,	// (0x0001651c) listscroll_midp_info_pane_t3

0x939d,	// (0x00016556) listscroll_midp_info_pane_t4_ParamLimits

0x939d,	// (0x00016556) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0001c9de) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0001c9de) listscroll_midp_info_pane_t

0x3db1,	// (0x00010f6a) scroll_pane_cp21

0x92a7,	// (0x00016460) form_midp_field_choice_group_pane

0x92b0,	// (0x00016469) form_midp_field_text_pane

0x92f3,	// (0x000164ac) form_midp_field_time_pane

0x92fb,	// (0x000164b4) form_midp_gauge_slider_pane

0x9304,	// (0x000164bd) form_midp_gauge_wait_pane

0x33cc,	// (0x00010585) form_midp_image_pane

0x9287,	// (0x00016440) list_single_midp_pane_ParamLimits

0x9287,	// (0x00016440) list_single_midp_pane

0x924b,	// (0x00016404) form_midp_field_text_pane_t1

0x9028,	// (0x000161e1) input_focus_pane_cp050

0x9276,	// (0x0001642f) list_midp_form_text_pane

0x921a,	// (0x000163d3) form_midp_field_choice_group_pane_t1

0x9228,	// (0x000163e1) input_focus_pane_cp051

0x923c,	// (0x000163f5) list_midp_choice_pane

0x33cc,	// (0x00010585) status_idle_pane

0x91fe,	// (0x000163b7) form_midp_field_time_pane_t1

0x3253,	// (0x0001040c) wait_anim_pane_g2_copy1

0x920c,	// (0x000163c5) form_midp_field_time_pane_t2

0x0001,

0x811f,	// (0x000152d8) aid_navinavi_width_2_pane

0xf820,	// (0x0001c9d9) form_midp_field_time_pane_t

0x33cc,	// (0x00010585) input_focus_pane_cp052

0x33cc,	// (0x00010585) bg_input_focus_pane_cp040

0x91be,	// (0x00016377) form_midp_gauge_slider_pane_t1

0x91cc,	// (0x00016385) form_midp_gauge_slider_pane_t2

0x91da,	// (0x00016393) form_midp_gauge_slider_pane_t3

0x91e8,	// (0x000163a1) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0001c9d0) form_midp_gauge_slider_pane_t

0x91f6,	// (0x000163af) form_midp_slider_pane

0x3492,	// (0x0001064b) bg_input_focus_pane_cp041_ParamLimits

0x3492,	// (0x0001064b) bg_input_focus_pane_cp041

0x918b,	// (0x00016344) form_midp_gauge_wait_pane_t1_ParamLimits

0x918b,	// (0x00016344) form_midp_gauge_wait_pane_t1

0x919d,	// (0x00016356) form_midp_gauge_wait_pane_t2_ParamLimits

0x919d,	// (0x00016356) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0001c9cb) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0001c9cb) form_midp_gauge_wait_pane_t

0x91af,	// (0x00016368) form_midp_wait_pane_ParamLimits

0x91af,	// (0x00016368) form_midp_wait_pane

0x9153,	// (0x0001630c) form_midp_image_pane_g1

0x915c,	// (0x00016315) form_midp_image_pane_t1

0x916b,	// (0x00016324) form_midp_image_pane_t2

0x917a,	// (0x00016333) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0001c9c4) form_midp_image_pane_t

0x913b,	// (0x000162f4) list_single_midp_pane_g1

0x9144,	// (0x000162fd) list_single_midp_pane_t1

0x9121,	// (0x000162da) list_midp_form_item_pane_ParamLimits

0x9121,	// (0x000162da) list_midp_form_item_pane

0x80c7,	// (0x00015280) list_midp_form_item_pane_t1

0x80d6,	// (0x0001528f) midp_ticker_pane_g1

0x80e2,	// (0x0001529b) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001c90c) midp_ticker_pane_g

0x80ee,	// (0x000152a7) midp_ticker_pane_t1

0xa5d2,	// (0x0001778b) midp_editing_number_pane_t1

0xa5b0,	// (0x00017769) midp_editing_number_pane

0xa5bf,	// (0x00017778) midp_ticker_pane

0xa2f2,	// (0x000174ab) ai_message_heading_pane

0x33cc,	// (0x00010585) bg_popup_window_pane_cp14

0xa2fa,	// (0x000174b3) listscroll_ai_message_pane

0xa278,	// (0x00017431) ai_message_heading_pane_g1_ParamLimits

0xa278,	// (0x00017431) ai_message_heading_pane_g1

0xa284,	// (0x0001743d) ai_message_heading_pane_g2_ParamLimits

0xa284,	// (0x0001743d) ai_message_heading_pane_g2

0xa292,	// (0x0001744b) ai_message_heading_pane_g3_ParamLimits

0xa292,	// (0x0001744b) ai_message_heading_pane_g3

0xa29e,	// (0x00017457) ai_message_heading_pane_g4_ParamLimits

0xa29e,	// (0x00017457) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0001cb05) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0001cb05) ai_message_heading_pane_g

0xa2aa,	// (0x00017463) ai_message_heading_pane_t1_ParamLimits

0xa2aa,	// (0x00017463) ai_message_heading_pane_t1

0xa2c4,	// (0x0001747d) ai_message_heading_pane_t2_ParamLimits

0xa2c4,	// (0x0001747d) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0001cb0e) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0001cb0e) ai_message_heading_pane_t

0xa2d8,	// (0x00017491) bg_popup_heading_pane_cp1_ParamLimits

0xa2d8,	// (0x00017491) bg_popup_heading_pane_cp1

0xa266,	// (0x0001741f) list_ai_message_pane_ParamLimits

0xa266,	// (0x0001741f) list_ai_message_pane

0x3db1,	// (0x00010f6a) scroll_pane_cp10

0xa202,	// (0x000173bb) list_ai_message_pane_g1

0xa20a,	// (0x000173c3) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0001cae2) list_ai_message_pane_g

0xa212,	// (0x000173cb) list_ai_message_pane_t1_ParamLimits

0xa212,	// (0x000173cb) list_ai_message_pane_t1

0xa227,	// (0x000173e0) list_ai_message_pane_t2_ParamLimits

0xa227,	// (0x000173e0) list_ai_message_pane_t2

0xa23c,	// (0x000173f5) list_ai_message_pane_t3_ParamLimits

0xa23c,	// (0x000173f5) list_ai_message_pane_t3

0xa251,	// (0x0001740a) list_ai_message_pane_t4_ParamLimits

0xa251,	// (0x0001740a) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0001cae7) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0001cae7) list_ai_message_pane_t

0xa1eb,	// (0x000173a4) cell_ai_soft_ind_pane_ParamLimits

0xa1eb,	// (0x000173a4) cell_ai_soft_ind_pane

0x8100,	// (0x000152b9) cell_ai_soft_ind_pane_g1_ParamLimits

0x8100,	// (0x000152b9) cell_ai_soft_ind_pane_g1

0x33cc,	// (0x00010585) grid_highlight_cp1

0x810d,	// (0x000152c6) text_secondary_cp56_ParamLimits

0x810d,	// (0x000152c6) text_secondary_cp56

0xa1c0,	// (0x00017379) example_general_pane_ParamLimits

0xa1c0,	// (0x00017379) example_general_pane

0xa1cc,	// (0x00017385) example_parent_pane_g1_ParamLimits

0xa1cc,	// (0x00017385) example_parent_pane_g1

0xa1d8,	// (0x00017391) example_parent_pane_t1_ParamLimits

0xa1d8,	// (0x00017391) example_parent_pane_t1

0x875a,	// (0x00015913) popup_preview_text_window_ParamLimits

0x875a,	// (0x00015913) popup_preview_text_window

0x7f34,	// (0x000150ed) list_single_pane_cp2_g4

0x3710,	// (0x000108c9) bg_popup_preview_window_pane_ParamLimits

0x3710,	// (0x000108c9) bg_popup_preview_window_pane

0x9f07,	// (0x000170c0) popup_preview_text_window_t1_ParamLimits

0x9f07,	// (0x000170c0) popup_preview_text_window_t1

0x9f25,	// (0x000170de) popup_preview_text_window_t2_ParamLimits

0x9f25,	// (0x000170de) popup_preview_text_window_t2

0x9f6e,	// (0x00017127) popup_preview_text_window_t3_ParamLimits

0x9f6e,	// (0x00017127) popup_preview_text_window_t3

0x9fb3,	// (0x0001716c) popup_preview_text_window_t4_ParamLimits

0x9fb3,	// (0x0001716c) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0001cab6) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0001cab6) popup_preview_text_window_t

0xa031,	// (0x000171ea) scroll_pane_cp11

0x8f02,	// (0x000160bb) bg_popup_preview_window_pane_g1

0x9ebb,	// (0x00017074) bg_popup_preview_window_pane_g2

0x9ec5,	// (0x0001707e) bg_popup_preview_window_pane_g3

0x9ecf,	// (0x00017088) bg_popup_preview_window_pane_g4

0x9ed9,	// (0x00017092) bg_popup_preview_window_pane_g5

0x9ee3,	// (0x0001709c) bg_popup_preview_window_pane_g6

0x9eeb,	// (0x000170a4) bg_popup_preview_window_pane_g7

0x9ef3,	// (0x000170ac) bg_popup_preview_window_pane_g8

0x52cc,	// (0x00012485) aid_popup_width_pane

0x8736,	// (0x000158ef) popup_midp_note_alarm_window_ParamLimits

0x8736,	// (0x000158ef) popup_midp_note_alarm_window

0x3bdc,	// (0x00010d95) data_form_pane_ParamLimits

0x7a8c,	// (0x00014c45) form_field_data_pane_g1

0x7a96,	// (0x00014c4f) form_field_data_pane_t1_ParamLimits

0x3be8,	// (0x00010da1) input_focus_pane_ParamLimits

0x3bf6,	// (0x00010daf) data_form_wide_pane_ParamLimits

0x3c07,	// (0x00010dc0) form_field_data_wide_pane_g1

0x3c33,	// (0x00010dec) form_field_data_wide_pane_t1_ParamLimits

0x38c5,	// (0x00010a7e) input_focus_pane_cp6_ParamLimits

0x7bc2,	// (0x00014d7b) input_popup_find_pane_g1_ParamLimits

0x7bc2,	// (0x00014d7b) input_popup_find_pane_g1

0x585c,	// (0x00012a15) aid_navi_side_left_pane

0x5871,	// (0x00012a2a) aid_navi_side_right_pane

0x98d0,	// (0x00016a89) bg_popup_window_pane_cp30_ParamLimits

0x98d0,	// (0x00016a89) bg_popup_window_pane_cp30

0x994a,	// (0x00016b03) popup_midp_note_alarm_window_g1_ParamLimits

0x994a,	// (0x00016b03) popup_midp_note_alarm_window_g1

0x997a,	// (0x00016b33) popup_midp_note_alarm_window_t1_ParamLimits

0x997a,	// (0x00016b33) popup_midp_note_alarm_window_t1

0x9a1b,	// (0x00016bd4) popup_midp_note_alarm_window_t2_ParamLimits

0x9a1b,	// (0x00016bd4) popup_midp_note_alarm_window_t2

0x9ac9,	// (0x00016c82) popup_midp_note_alarm_window_t3_ParamLimits

0x9ac9,	// (0x00016c82) popup_midp_note_alarm_window_t3

0x9afb,	// (0x00016cb4) popup_midp_note_alarm_window_t4_ParamLimits

0x9afb,	// (0x00016cb4) popup_midp_note_alarm_window_t4

0x9b21,	// (0x00016cda) popup_midp_note_alarm_window_t5_ParamLimits

0x9b21,	// (0x00016cda) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0001ca53) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0001ca53) popup_midp_note_alarm_window_t

0x9bcd,	// (0x00016d86) wait_bar_pane_cp1_ParamLimits

0x9bcd,	// (0x00016d86) wait_bar_pane_cp1

0x33cc,	// (0x00010585) wait_anim_pane_copy1

0x33cc,	// (0x00010585) wait_border_pane_copy1

0x95b5,	// (0x0001676e) wait_border_pane_g1_copy1

0x3c4d,	// (0x00010e06) form_field_popup_pane_g1

0x7ab0,	// (0x00014c69) form_field_popup_pane_t1_ParamLimits

0x3be8,	// (0x00010da1) input_focus_pane_cp7_ParamLimits

0x3c55,	// (0x00010e0e) list_form_pane_ParamLimits

0x3c61,	// (0x00010e1a) form_field_popup_wide_pane_g1

0x3c69,	// (0x00010e22) form_field_popup_wide_pane_t1_ParamLimits

0x3be8,	// (0x00010da1) input_focus_pane_cp8_ParamLimits

0x3c7e,	// (0x00010e37) list_form_wide_pane_ParamLimits

0xa7bb,	// (0x00017974) aid_size_cell_graphic_pane

0x7b28,	// (0x00014ce1) data_form_pane_t1_ParamLimits

0xa57b,	// (0x00017734) data_form_wide_pane_t1_ParamLimits

0x8a81,	// (0x00015c3a) bg_status_flat_pane

0x72f3,	// (0x000144ac) title_pane_t1_ParamLimits

0x3442,	// (0x000105fb) title_pane_t2_ParamLimits

0x3468,	// (0x00010621) title_pane_t3_ParamLimits

0xf557,	// (0x0001c710) title_pane_t_ParamLimits

0x7c9e,	// (0x00014e57) level_1_signal_ParamLimits

0x7cab,	// (0x00014e64) level_2_signal_ParamLimits

0x7cb8,	// (0x00014e71) level_3_signal_ParamLimits

0x7cc5,	// (0x00014e7e) level_4_signal_ParamLimits

0x7cd2,	// (0x00014e8b) level_5_signal_ParamLimits

0x7cdf,	// (0x00014e98) level_6_signal_ParamLimits

0x7cec,	// (0x00014ea5) level_7_signal_ParamLimits

0x7c9e,	// (0x00014e57) level_1_battery_ParamLimits

0x7cab,	// (0x00014e64) level_2_battery_ParamLimits

0x7cb8,	// (0x00014e71) level_3_battery_ParamLimits

0x7cc5,	// (0x00014e7e) level_4_battery_ParamLimits

0x7cd2,	// (0x00014e8b) level_5_battery_ParamLimits

0x7cdf,	// (0x00014e98) level_6_battery_ParamLimits

0x7cec,	// (0x00014ea5) level_7_battery_ParamLimits

0x97d5,	// (0x0001698e) bg_status_flat_pane_g1

0x97dd,	// (0x00016996) bg_status_flat_pane_g2

0x97e5,	// (0x0001699e) bg_status_flat_pane_g3

0x97ed,	// (0x000169a6) bg_status_flat_pane_g4

0x97f5,	// (0x000169ae) bg_status_flat_pane_g5

0x97fd,	// (0x000169b6) bg_status_flat_pane_g6

0x9805,	// (0x000169be) bg_status_flat_pane_g7

0x7363,	// (0x0001451c) tabs_3_active_pane_t1_ParamLimits

0x7363,	// (0x0001451c) tabs_3_passive_pane_t1_ParamLimits

0x737d,	// (0x00014536) tabs_4_active_pane_t1_ParamLimits

0x737d,	// (0x00014536) tabs_4_1_passive_pane_t1_ParamLimits

0x7bd8,	// (0x00014d91) tabs_2_active_pane_t1_ParamLimits

0x7bd8,	// (0x00014d91) tabs_2_passive_pane_t1_ParamLimits

0x3e0f,	// (0x00010fc8) bg_active_tab_pane_cp4_ParamLimits

0x7bea,	// (0x00014da3) tabs_2_long_active_pane_t1_ParamLimits

0x7bfd,	// (0x00014db6) bg_passive_tab_pane_cp4_ParamLimits

0x5e32,	// (0x00012feb) list_single_midp_graphic_pane_t1_ParamLimits

0x3e0f,	// (0x00010fc8) bg_active_tab_pane_cp5_ParamLimits

0x7c09,	// (0x00014dc2) tabs_3_long_active_pane_t1_ParamLimits

0x7bfd,	// (0x00014db6) bg_passive_tab_pane_cp5_ParamLimits

0x5e32,	// (0x00012feb) list_single_midp_graphic_pane_t1

0x8a81,	// (0x00015c3a) bg_status_flat_pane_ParamLimits

0x8b4c,	// (0x00015d05) indicator_pane_cp2_ParamLimits

0x8b4c,	// (0x00015d05) indicator_pane_cp2

0x8c8f,	// (0x00015e48) navi_pane_srt_ParamLimits

0x8c8f,	// (0x00015e48) navi_pane_srt

0x8cb3,	// (0x00015e6c) popup_clock_digital_analogue_window_cp1

0x3579,	// (0x00010732) indicator_pane_t1

0x8005,	// (0x000151be) copy_highlight_pane

0x8005,	// (0x000151be) cursor_graphics_pane

0x8005,	// (0x000151be) graphic_within_text_pane

0x8005,	// (0x000151be) link_highlight_pane

0x9ff4,	// (0x000171ad) popup_preview_text_window_t5_ParamLimits

0x9ff4,	// (0x000171ad) popup_preview_text_window_t5

0x8129,	// (0x000152e2) cursor_digital_pane

0x8129,	// (0x000152e2) cursor_primary_pane

0x813a,	// (0x000152f3) cursor_primary_small_pane

0x8142,	// (0x000152fb) cursor_secondary_pane

0x814a,	// (0x00015303) cursor_title_pane

0x8129,	// (0x000152e2) link_highlight_digital_pane

0x8131,	// (0x000152ea) link_highlight_primary_pane

0x813a,	// (0x000152f3) link_highlight_primary_small_pane

0x8142,	// (0x000152fb) link_highlight_secondary_pane

0x814a,	// (0x00015303) link_highlight_title_pane

0x8129,	// (0x000152e2) copy_highlight_digital_pane

0x8129,	// (0x000152e2) copy_highlight_primary_pane

0x813a,	// (0x000152f3) copy_highlight_primary_small_pane

0x8142,	// (0x000152fb) copy_highlight_secondary_pane

0x814a,	// (0x00015303) copy_highlight_title_pane

0x8142,	// (0x000152fb) graphic_text_digital_pane

0x9873,	// (0x00016a2c) graphic_text_primary_pane

0x987c,	// (0x00016a35) graphic_text_primary_small_pane

0x813a,	// (0x000152f3) graphic_text_secondary_pane

0x8129,	// (0x000152e2) graphic_text_title_pane

0x8152,	// (0x0001530b) cursor_primary_pane_g1

0x9865,	// (0x00016a1e) cursor_text_primary_t1

0x984d,	// (0x00016a06) cursor_primary_small_pane_g1

0x9857,	// (0x00016a10) cursor_text_primary_small_t1

0x9835,	// (0x000169ee) cursor_primary_small_pane_g1_copy1

0x983f,	// (0x000169f8) cursor_text_primary_small_t1_copy1

0x981d,	// (0x000169d6) cursor_text_title_t1

0x982b,	// (0x000169e4) cursor_title_pane_g1

0x8152,	// (0x0001530b) cursor_digital_pane_g1

0x815c,	// (0x00015315) cursor_text_digital_t1

0x816a,	// (0x00015323) link_highlight_primary_pane_g1

0x97c6,	// (0x0001697f) link_highlight_primary_pane_t1

0x816a,	// (0x00015323) link_highlight_primary_small_pane_g1

0x8172,	// (0x0001532b) link_highlight_primary_small_pane_t1

0x8181,	// (0x0001533a) link_highlight_secondary_pane_g1

0x8189,	// (0x00015342) link_highlight_secondary_pane_t1

0x973a,	// (0x000168f3) link_highlight_title_pane_g1

0x9742,	// (0x000168fb) link_highlight_title_pane_t1

0x9723,	// (0x000168dc) link_highlight_digital_pane_g1

0x972b,	// (0x000168e4) link_highlight_digital_pane_t1

0x95eb,	// (0x000167a4) copy_highlight_primary_pane_g1

0x9602,	// (0x000167bb) copy_highlight_primary_pane_t1

0x95eb,	// (0x000167a4) copy_highlight_primary_small_pane_g1

0x95f3,	// (0x000167ac) copy_highlight_primary_small_pane_t1

0x8198,	// (0x00015351) copy_highlight_secondary_pane_g1

0x81a0,	// (0x00015359) copy_highlight_secondary_pane_t1

0x95d4,	// (0x0001678d) copy_highlight_title_pane_g1

0x95dc,	// (0x00016795) copy_highlight_title_pane_t1

0x95eb,	// (0x000167a4) copy_highlight_digital_pane_g1

0xa98b,	// (0x00017b44) copy_highlight_digital_pane_t1

0xa8df,	// (0x00017a98) graphic_text_primary_pane_g1

0xa96f,	// (0x00017b28) graphic_text_primary_pane_t1

0xa97d,	// (0x00017b36) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0001cb82) graphic_text_primary_pane_t

0xa94b,	// (0x00017b04) graphic_text_primary_small_pane_g1

0xa953,	// (0x00017b0c) graphic_text_primary_small_pane_t1

0xa961,	// (0x00017b1a) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0001cb7d) graphic_text_primary_small_pane_t

0xa927,	// (0x00017ae0) graphic_text_secondary_pane_g1

0xa92f,	// (0x00017ae8) graphic_text_secondary_pane_t1

0xa93d,	// (0x00017af6) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0001cb78) graphic_text_secondary_pane_t

0xa903,	// (0x00017abc) graphic_text_title_pane_g1

0xa90b,	// (0x00017ac4) graphic_text_title_pane_t1

0xa919,	// (0x00017ad2) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0001cb73) graphic_text_title_pane_t

0xa8df,	// (0x00017a98) graphic_text_digital_pane_g1

0xa8e7,	// (0x00017aa0) graphic_text_digital_pane_t1

0xa8f5,	// (0x00017aae) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0001cb6e) graphic_text_digital_pane_t

0x3492,	// (0x0001064b) navi_icon_pane_srt_ParamLimits

0x3492,	// (0x0001064b) navi_icon_pane_srt

0x33cc,	// (0x00010585) navi_midp_pane_srt

0x33cc,	// (0x00010585) navi_navi_pane_srt

0x3492,	// (0x0001064b) navi_text_pane_srt_ParamLimits

0x3492,	// (0x0001064b) navi_text_pane_srt

0xa8aa,	// (0x00017a63) navi_navi_icon_text_pane_srt

0xa8b2,	// (0x00017a6b) navi_navi_pane_srt_g1_ParamLimits

0xa8b2,	// (0x00017a6b) navi_navi_pane_srt_g1

0xa8c4,	// (0x00017a7d) navi_navi_pane_srt_g2_ParamLimits

0xa8c4,	// (0x00017a7d) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0001cb69) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0001cb69) navi_navi_pane_srt_g

0xa8d6,	// (0x00017a8f) navi_navi_tabs_pane_srt

0xa8aa,	// (0x00017a63) navi_navi_text_pane_srt

0xa8aa,	// (0x00017a63) navi_navi_volume_pane_srt

0xa89b,	// (0x00017a54) navi_navi_text_pane_srt_t1

0x61ce,	// (0x00013387) navi_navi_volume_pane_srt_g1

0x61d6,	// (0x0001338f) volume_small_pane_srt_ParamLimits

0x61d6,	// (0x0001338f) volume_small_pane_srt

0x5b43,	// (0x00012cfc) volume_small_pane_srt_g1_ParamLimits

0x5b43,	// (0x00012cfc) volume_small_pane_srt_g1

0x5b53,	// (0x00012d0c) volume_small_pane_srt_g2_ParamLimits

0x5b53,	// (0x00012d0c) volume_small_pane_srt_g2

0x5b64,	// (0x00012d1d) volume_small_pane_srt_g3_ParamLimits

0x5b64,	// (0x00012d1d) volume_small_pane_srt_g3

0x5b75,	// (0x00012d2e) volume_small_pane_srt_g4_ParamLimits

0x5b75,	// (0x00012d2e) volume_small_pane_srt_g4

0x5b86,	// (0x00012d3f) volume_small_pane_srt_g5_ParamLimits

0x5b86,	// (0x00012d3f) volume_small_pane_srt_g5

0x5b97,	// (0x00012d50) volume_small_pane_srt_g6_ParamLimits

0x5b97,	// (0x00012d50) volume_small_pane_srt_g6

0x5ba8,	// (0x00012d61) volume_small_pane_srt_g7_ParamLimits

0x5ba8,	// (0x00012d61) volume_small_pane_srt_g7

0x5bb9,	// (0x00012d72) volume_small_pane_srt_g8_ParamLimits

0x5bb9,	// (0x00012d72) volume_small_pane_srt_g8

0x5bca,	// (0x00012d83) volume_small_pane_srt_g9_ParamLimits

0x5bca,	// (0x00012d83) volume_small_pane_srt_g9

0x5bdb,	// (0x00012d94) volume_small_pane_srt_g10_ParamLimits

0x5bdb,	// (0x00012d94) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001c911) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001c911) volume_small_pane_srt_g

0x37c5,	// (0x0001097e) query_popup_data_pane_cp2

0xa881,	// (0x00017a3a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa881,	// (0x00017a3a) navi_navi_icon_text_pane_srt_t1

0x9873,	// (0x00016a2c) navi_tabs_2_long_pane_srt

0x9873,	// (0x00016a2c) navi_tabs_2_pane_srt

0x9873,	// (0x00016a2c) navi_tabs_3_long_pane_srt

0x9873,	// (0x00016a2c) navi_tabs_3_pane_srt

0x9873,	// (0x00016a2c) navi_tabs_4_pane_srt

0x61ae,	// (0x00013367) tabs_2_active_pane_srt_ParamLimits

0x61ae,	// (0x00013367) tabs_2_active_pane_srt

0x61be,	// (0x00013377) tabs_2_passive_pane_srt_ParamLimits

0x61be,	// (0x00013377) tabs_2_passive_pane_srt

0x838b,	// (0x00015544) bg_passive_tab_pane_cp1_srt_ParamLimits

0x838b,	// (0x00015544) bg_passive_tab_pane_cp1_srt

0xa84d,	// (0x00017a06) bg_passive_tab_pane_g1_cp1_srt

0x45df,	// (0x00011798) bg_passive_tab_pane_g2_cp1_srt

0xa856,	// (0x00017a0f) bg_passive_tab_pane_g3_cp1_srt

0x3492,	// (0x0001064b) bg_active_tab_pane_cp1_srt_ParamLimits

0x3492,	// (0x0001064b) bg_active_tab_pane_cp1_srt

0xa85f,	// (0x00017a18) tabs_2_active_pane_srt_g1

0xa867,	// (0x00017a20) tabs_2_active_pane_srt_t1_ParamLimits

0xa867,	// (0x00017a20) tabs_2_active_pane_srt_t1

0xa84d,	// (0x00017a06) bg_active_tab_pane_g1_cp1_srt

0x45df,	// (0x00011798) bg_active_tab_pane_g2_cp1_srt

0xa856,	// (0x00017a0f) bg_active_tab_pane_g3_cp1_srt

0x617b,	// (0x00013334) tabs_3_active_pane_srt_ParamLimits

0x617b,	// (0x00013334) tabs_3_active_pane_srt

0x618c,	// (0x00013345) tabs_3_passive_pane_cp_srt_ParamLimits

0x618c,	// (0x00013345) tabs_3_passive_pane_cp_srt

0x619d,	// (0x00013356) tabs_3_passive_pane_srt_ParamLimits

0x619d,	// (0x00013356) tabs_3_passive_pane_srt

0x838b,	// (0x00015544) bg_passive_tab_pane_cp2_srt_ParamLimits

0x838b,	// (0x00015544) bg_passive_tab_pane_cp2_srt

0x81af,	// (0x00015368) bg_passive_tab_pane_g1_cp2_srt

0x45df,	// (0x00011798) bg_passive_tab_pane_g2_cp2_srt

0x81b8,	// (0x00015371) bg_passive_tab_pane_g3_cp2_srt

0x3492,	// (0x0001064b) bg_active_tab_pane_cp2_srt_ParamLimits

0x3492,	// (0x0001064b) bg_active_tab_pane_cp2_srt

0xa833,	// (0x000179ec) tabs_3_active_pane_srt_g1

0xa83b,	// (0x000179f4) tabs_3_active_pane_srt_t1_ParamLimits

0xa83b,	// (0x000179f4) tabs_3_active_pane_srt_t1

0x81af,	// (0x00015368) bg_active_tab_pane_g1_cp2_srt

0x45df,	// (0x00011798) bg_active_tab_pane_g2_cp2_srt

0x81b8,	// (0x00015371) bg_active_tab_pane_g3_cp2_srt

0x6133,	// (0x000132ec) tabs_4_active_pane_srt_ParamLimits

0x6133,	// (0x000132ec) tabs_4_active_pane_srt

0x6145,	// (0x000132fe) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6145,	// (0x000132fe) tabs_4_passive_pane_cp2_srt

0x8309,	// (0x000154c2) aid_size_cell_toolbar

0x7bfd,	// (0x00014db6) main_idle_act_pane_ParamLimits

0x855c,	// (0x00015715) popup_large_graphic_colour_window_ParamLimits

0x8903,	// (0x00015abc) popup_toolbar_window_ParamLimits

0x8903,	// (0x00015abc) popup_toolbar_window

0xa5f5,	// (0x000177ae) list_single_graphic_2heading_pane_ParamLimits

0xa5f5,	// (0x000177ae) list_single_graphic_2heading_pane

0x4131,	// (0x000112ea) aid_size_cell_apps_grid_lsc_pane

0x4143,	// (0x000112fc) aid_size_cell_apps_grid_prt_pane

0x838b,	// (0x00015544) bg_wml_button_pane_cp1_ParamLimits

0x838b,	// (0x00015544) bg_wml_button_pane_cp1

0x924b,	// (0x00016404) form_midp_field_text_pane_t1_ParamLimits

0x9028,	// (0x000161e1) input_focus_pane_cp050_ParamLimits

0x9276,	// (0x0001642f) list_midp_form_text_pane_ParamLimits

0x9228,	// (0x000163e1) input_focus_pane_cp051_ParamLimits

0x923c,	// (0x000163f5) list_midp_choice_pane_ParamLimits

0x90e1,	// (0x0001629a) list_single_2graphic_pane_cp3_ParamLimits

0x90e1,	// (0x0001629a) list_single_2graphic_pane_cp3

0x90fa,	// (0x000162b3) list_single_midp_graphic_pane_ParamLimits

0x90fa,	// (0x000162b3) list_single_midp_graphic_pane

0x5d36,	// (0x00012eef) list_single_graphic_2heading_pane_g1_ParamLimits

0x5d36,	// (0x00012eef) list_single_graphic_2heading_pane_g1

0x5d42,	// (0x00012efb) list_single_graphic_2heading_pane_g4_ParamLimits

0x5d42,	// (0x00012efb) list_single_graphic_2heading_pane_g4

0x5d4e,	// (0x00012f07) list_single_graphic_2heading_pane_g5_ParamLimits

0x5d4e,	// (0x00012f07) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001c964) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001c964) list_single_graphic_2heading_pane_g

0x5d5a,	// (0x00012f13) list_single_graphic_2heading_pane_t1_ParamLimits

0x5d5a,	// (0x00012f13) list_single_graphic_2heading_pane_t1

0x5d6e,	// (0x00012f27) list_single_graphic_2heading_pane_t2_ParamLimits

0x5d6e,	// (0x00012f27) list_single_graphic_2heading_pane_t2

0x5d8a,	// (0x00012f43) list_single_graphic_2heading_pane_t3_ParamLimits

0x5d8a,	// (0x00012f43) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001c96b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001c96b) list_single_graphic_2heading_pane_t

0x8e12,	// (0x00015fcb) bg_popup_sub_pane_cp2

0x8e3c,	// (0x00015ff5) grid_toobar_pane

0x5da2,	// (0x00012f5b) cell_toolbar_pane_ParamLimits

0x5da2,	// (0x00012f5b) cell_toolbar_pane

0x8ea6,	// (0x0001605f) cell_toolbar_pane_g1_ParamLimits

0x8ea6,	// (0x0001605f) cell_toolbar_pane_g1

0x8eba,	// (0x00016073) cell_toolbar_pane_g2_ParamLimits

0x8eba,	// (0x00016073) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001c979) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001c979) cell_toolbar_pane_g

0x8edc,	// (0x00016095) grid_highlight_pane_cp2_ParamLimits

0x8edc,	// (0x00016095) grid_highlight_pane_cp2

0x8ef6,	// (0x000160af) toolbar_button_pane

0x8f02,	// (0x000160bb) toolbar_button_pane_g1

0x8f0a,	// (0x000160c3) toolbar_button_pane_g2

0x8f12,	// (0x000160cb) toolbar_button_pane_g3

0x8f1a,	// (0x000160d3) toolbar_button_pane_g4

0x8f22,	// (0x000160db) toolbar_button_pane_g5

0x8f2a,	// (0x000160e3) toolbar_button_pane_g6

0x8f32,	// (0x000160eb) toolbar_button_pane_g7

0x8f3a,	// (0x000160f3) toolbar_button_pane_g8

0x8f42,	// (0x000160fb) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001c97e) toolbar_button_pane_g

0x5dda,	// (0x00012f93) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5dda,	// (0x00012f93) list_single_2graphic_pane_g1_cp3

0x5de6,	// (0x00012f9f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5de6,	// (0x00012f9f) list_single_2graphic_pane_g2_cp3

0x5df7,	// (0x00012fb0) list_single_2graphic_pane_g3_cp3

0x5dff,	// (0x00012fb8) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5dff,	// (0x00012fb8) list_single_2graphic_pane_g4_cp3

0x5e0b,	// (0x00012fc4) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5e0b,	// (0x00012fc4) list_single_2graphic_pane_t1_cp3

0x5e26,	// (0x00012fdf) list_single_midp_graphic_pane_g2_ParamLimits

0x5e26,	// (0x00012fdf) list_single_midp_graphic_pane_g2

0x8311,	// (0x000154ca) aid_zoom_text_primary

0x8319,	// (0x000154d2) aid_zoom_text_secondary

0x8269,	// (0x00015422) status_small_pane_g7_ParamLimits

0x8269,	// (0x00015422) status_small_pane_g7

0x828c,	// (0x00015445) status_small_pane_t1_ParamLimits

0x72e2,	// (0x0001449b) title_pane_g2

0x0003,

0xf54e,	// (0x0001c707) title_pane_g

0x74a4,	// (0x0001465d) aid_size_cell_colour_1_pane_ParamLimits

0x74a4,	// (0x0001465d) aid_size_cell_colour_1_pane

0x74b8,	// (0x00014671) aid_size_cell_colour_2_pane_ParamLimits

0x74b8,	// (0x00014671) aid_size_cell_colour_2_pane

0x74cc,	// (0x00014685) aid_size_cell_colour_3_pane_ParamLimits

0x74cc,	// (0x00014685) aid_size_cell_colour_3_pane

0x74e0,	// (0x00014699) aid_size_cell_colour_4_pane_ParamLimits

0x74e0,	// (0x00014699) aid_size_cell_colour_4_pane

0x5798,	// (0x00012951) title_pane_stacon_g1_ParamLimits

0x5798,	// (0x00012951) title_pane_stacon_g1

0x9659,	// (0x00016812) popup_note_wait_window_g3_ParamLimits

0x9659,	// (0x00016812) popup_note_wait_window_g3

0x96d0,	// (0x00016889) popup_note_wait_window_t5_ParamLimits

0x96d0,	// (0x00016889) popup_note_wait_window_t5

0x33cc,	// (0x00010585) main_feb_china_hwr_fs_writing_pane

0x8423,	// (0x000155dc) popup_feb_china_hwr_fs_window_ParamLimits

0x8423,	// (0x000155dc) popup_feb_china_hwr_fs_window

0x5e48,	// (0x00013001) aid_size_cell_hwr_fs_ParamLimits

0x5e48,	// (0x00013001) aid_size_cell_hwr_fs

0x9028,	// (0x000161e1) bg_popup_sub_pane_cp3_ParamLimits

0x9028,	// (0x000161e1) bg_popup_sub_pane_cp3

0x5e5d,	// (0x00013016) grid_hwr_fs_pane_ParamLimits

0x5e5d,	// (0x00013016) grid_hwr_fs_pane

0x5e75,	// (0x0001302e) linegrid_hwr_fs_pane_ParamLimits

0x5e75,	// (0x0001302e) linegrid_hwr_fs_pane

0x5e85,	// (0x0001303e) cell_hwr_fs_pane_ParamLimits

0x5e85,	// (0x0001303e) cell_hwr_fs_pane

0x9034,	// (0x000161ed) linegrid_hwr_fs_pane_g1_ParamLimits

0x9034,	// (0x000161ed) linegrid_hwr_fs_pane_g1

0x9040,	// (0x000161f9) linegrid_hwr_fs_pane_g2_ParamLimits

0x9040,	// (0x000161f9) linegrid_hwr_fs_pane_g2

0x9052,	// (0x0001620b) linegrid_hwr_fs_pane_g3_ParamLimits

0x9052,	// (0x0001620b) linegrid_hwr_fs_pane_g3

0x5ea9,	// (0x00013062) linegrid_hwr_fs_pane_g4_ParamLimits

0x5ea9,	// (0x00013062) linegrid_hwr_fs_pane_g4

0x5ec7,	// (0x00013080) linegrid_hwr_fs_pane_g5_ParamLimits

0x5ec7,	// (0x00013080) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0001c9a9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0001c9a9) linegrid_hwr_fs_pane_g

0x905e,	// (0x00016217) cell_hwr_fs_pane_g1_ParamLimits

0x905e,	// (0x00016217) cell_hwr_fs_pane_g1

0x8d49,	// (0x00015f02) cell_hwr_fs_pane_g2_ParamLimits

0x8d49,	// (0x00015f02) cell_hwr_fs_pane_g2

0x9074,	// (0x0001622d) cell_hwr_fs_pane_g3_ParamLimits

0x9074,	// (0x0001622d) cell_hwr_fs_pane_g3

0x9081,	// (0x0001623a) cell_hwr_fs_pane_g4_ParamLimits

0x9081,	// (0x0001623a) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0001c9b4) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0001c9b4) cell_hwr_fs_pane_g

0x5edd,	// (0x00013096) cell_hwr_fs_pane_t1

0x33cc,	// (0x00010585) grid_highlight_pane_cp6

0x33cc,	// (0x00010585) main_idle_act2_pane

0x3d98,	// (0x00010f51) aid_inside_area_popup_secondary

0x9d09,	// (0x00016ec2) aid_inside_area_window_primary_ParamLimits

0x9d09,	// (0x00016ec2) aid_inside_area_window_primary

0xa99a,	// (0x00017b53) ai2_news_ticker_pane

0xa9a2,	// (0x00017b5b) aid_size_cell_ai1_link_ParamLimits

0xa9a2,	// (0x00017b5b) aid_size_cell_ai1_link

0xa9bc,	// (0x00017b75) popup_ai2_data_window_ParamLimits

0xa9bc,	// (0x00017b75) popup_ai2_data_window

0xa9da,	// (0x00017b93) popup_ai2_link_window_ParamLimits

0xa9da,	// (0x00017b93) popup_ai2_link_window

0x9028,	// (0x000161e1) bg_popup_sub_pane_cp4_ParamLimits

0x9028,	// (0x000161e1) bg_popup_sub_pane_cp4

0xa9f0,	// (0x00017ba9) grid_ai2_link_pane_ParamLimits

0xa9f0,	// (0x00017ba9) grid_ai2_link_pane

0xaa07,	// (0x00017bc0) popup_ai2_link_window_g1_ParamLimits

0xaa07,	// (0x00017bc0) popup_ai2_link_window_g1

0xaa13,	// (0x00017bcc) popup_ai2_link_window_g2_ParamLimits

0xaa13,	// (0x00017bcc) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0001cb87) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0001cb87) popup_ai2_link_window_g

0xaa24,	// (0x00017bdd) ai2_mp_button_pane

0xaa2c,	// (0x00017be5) ai2_mp_volume_pane

0x9228,	// (0x000163e1) bg_popup_sub_pane_cp5_ParamLimits

0x9228,	// (0x000163e1) bg_popup_sub_pane_cp5

0xaa34,	// (0x00017bed) heading_ai2_gene_pane_ParamLimits

0xaa34,	// (0x00017bed) heading_ai2_gene_pane

0xaa40,	// (0x00017bf9) list_ai2_gene_pane_ParamLimits

0xaa40,	// (0x00017bf9) list_ai2_gene_pane

0xaa88,	// (0x00017c41) cell_ai2_link_pane_ParamLimits

0xaa88,	// (0x00017c41) cell_ai2_link_pane

0xaa9e,	// (0x00017c57) cell_ai2_link_pane_g1

0x33cc,	// (0x00010585) grid_highlight_pane_cp7

0x61eb,	// (0x000133a4) ai2_mp_volume_pane_g1

0xab71,	// (0x00017d2a) ai2_mp_volume_pane_g2

0xaae6,	// (0x00017c9f) list_ai2_gene_pane_t1

0xab79,	// (0x00017d32) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0001cba0) ai2_mp_volume_pane_g

0x61f3,	// (0x000133ac) volume_small_pane_cp3

0xab81,	// (0x00017d3a) aid_size_cell_ai2_button

0xab89,	// (0x00017d42) grid_ai2_button_pane

0xab92,	// (0x00017d4b) cell_ai2_button_pane_ParamLimits

0xab92,	// (0x00017d4b) cell_ai2_button_pane

0x3253,	// (0x0001040c) cell_ai2_button_pane_g1

0x33cc,	// (0x00010585) grid_highlight_pane_cp8

0xab31,	// (0x00017cea) ai2_gene_pane_t1_ParamLimits

0xab31,	// (0x00017cea) ai2_gene_pane_t1

0x82ff,	// (0x000154b8) aid_height_parent_landscape

0xa3c3,	// (0x0001757c) aid_height_set_list

0xa3d4,	// (0x0001758d) aid_size_parent

0xa7bb,	// (0x00017974) aid_size_cell_graphic_pane_ParamLimits

0xaa50,	// (0x00017c09) popup_ai2_data_window_g1_ParamLimits

0xaa50,	// (0x00017c09) popup_ai2_data_window_g1

0xaa5c,	// (0x00017c15) ai2_news_ticker_pane_g1

0xaa64,	// (0x00017c1d) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0001cb8c) ai2_news_ticker_pane_g

0xaa6c,	// (0x00017c25) ai2_news_ticker_pane_t1

0xaa7a,	// (0x00017c33) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0001cb91) ai2_news_ticker_pane_t

0xaaa7,	// (0x00017c60) heading_ai2_gene_pane_g1

0xaaaf,	// (0x00017c68) heading_ai2_gene_pane_t1_ParamLimits

0xaaaf,	// (0x00017c68) heading_ai2_gene_pane_t1

0xaac4,	// (0x00017c7d) list_highlight_pane_cp6

0xaacc,	// (0x00017c85) ai2_gene_pane_ParamLimits

0xaacc,	// (0x00017c85) ai2_gene_pane

0xaaf4,	// (0x00017cad) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0001cb96) list_ai2_gene_pane_t

0xab02,	// (0x00017cbb) list_highlight_pane_cp8_ParamLimits

0xab02,	// (0x00017cbb) list_highlight_pane_cp8

0xab13,	// (0x00017ccc) ai2_gene_pane_g1_ParamLimits

0xab13,	// (0x00017ccc) ai2_gene_pane_g1

0xab25,	// (0x00017cde) ai2_gene_pane_g2_ParamLimits

0xab25,	// (0x00017cde) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0001cb9b) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0001cb9b) ai2_gene_pane_g

0x3ae0,	// (0x00010c99) scroll_pane_cp12

0x5cf5,	// (0x00012eae) control_pane_t3_ParamLimits

0x5cf5,	// (0x00012eae) control_pane_t3

0x827d,	// (0x00015436) status_small_pane_g8_ParamLimits

0x827d,	// (0x00015436) status_small_pane_g8

0x8521,	// (0x000156da) popup_find_window_ParamLimits

0x874c,	// (0x00015905) popup_note_image_window_ParamLimits

0x8e78,	// (0x00016031) list_double2_graphic_pane_vc_g1_ParamLimits

0x8e78,	// (0x00016031) list_double2_graphic_pane_vc_g1

0x7f76,	// (0x0001512f) list_double2_graphic_pane_vc_g2_ParamLimits

0x7f76,	// (0x0001512f) list_double2_graphic_pane_vc_g2

0x8e84,	// (0x0001603d) list_double2_graphic_pane_vc_g3_ParamLimits

0x8e84,	// (0x0001603d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001c972) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001c972) list_double2_graphic_pane_vc_g

0x8e90,	// (0x00016049) list_double2_graphic_pane_vc_t1_ParamLimits

0x8e90,	// (0x00016049) list_double2_graphic_pane_vc_t1

0x7f76,	// (0x0001512f) list_single_heading_pane_vc_g1_ParamLimits

0x7f76,	// (0x0001512f) list_single_heading_pane_vc_g1

0x8e84,	// (0x0001603d) list_single_heading_pane_vc_g2_ParamLimits

0x8e84,	// (0x0001603d) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c993) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c993) list_single_heading_pane_vc_g

0x8f4a,	// (0x00016103) list_single_heading_pane_vc_t1_ParamLimits

0x8f4a,	// (0x00016103) list_single_heading_pane_vc_t1

0x8f62,	// (0x0001611b) list_single_heading_pane_vc_t2_ParamLimits

0x8f62,	// (0x0001611b) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0001c998) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0001c998) list_single_heading_pane_vc_t

0x8f74,	// (0x0001612d) list_setting_number_pane_vc_g1_ParamLimits

0x8f74,	// (0x0001612d) list_setting_number_pane_vc_g1

0x8f80,	// (0x00016139) list_setting_number_pane_vc_g2_ParamLimits

0x8f80,	// (0x00016139) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001c99d) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001c99d) list_setting_number_pane_vc_g

0x8f8c,	// (0x00016145) list_setting_number_pane_vc_t1_ParamLimits

0x8f8c,	// (0x00016145) list_setting_number_pane_vc_t1

0x8fa0,	// (0x00016159) list_setting_number_pane_vc_t2_ParamLimits

0x8fa0,	// (0x00016159) list_setting_number_pane_vc_t2

0x8fbc,	// (0x00016175) list_setting_number_pane_vc_t3_ParamLimits

0x8fbc,	// (0x00016175) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0001c9a2) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0001c9a2) list_setting_number_pane_vc_t

0x8fea,	// (0x000161a3) set_value_pane_vc_ParamLimits

0x8fea,	// (0x000161a3) set_value_pane_vc

0xa5f5,	// (0x000177ae) list_double2_graphic_pane_vc_ParamLimits

0xa5f5,	// (0x000177ae) list_double2_graphic_pane_vc

0xa5f5,	// (0x000177ae) list_double2_large_graphic_pane_vc_ParamLimits

0xa5f5,	// (0x000177ae) list_double2_large_graphic_pane_vc

0xa5f5,	// (0x000177ae) list_double2_pane_vc_ParamLimits

0xa5f5,	// (0x000177ae) list_double2_pane_vc

0xa5f5,	// (0x000177ae) list_double_graphic_heading_pane_vc_ParamLimits

0xa5f5,	// (0x000177ae) list_double_graphic_heading_pane_vc

0xa5f5,	// (0x000177ae) list_double_graphic_pane_vc_ParamLimits

0xa5f5,	// (0x000177ae) list_double_graphic_pane_vc

0xa5f5,	// (0x000177ae) list_double_heading_pane_vc_ParamLimits

0xa5f5,	// (0x000177ae) list_double_heading_pane_vc

0xa609,	// (0x000177c2) list_double_large_graphic_pane_vc_ParamLimits

0xa609,	// (0x000177c2) list_double_large_graphic_pane_vc

0xa5f5,	// (0x000177ae) list_double_number_pane_vc_ParamLimits

0xa5f5,	// (0x000177ae) list_double_number_pane_vc

0xa5f5,	// (0x000177ae) list_double_pane_vc_ParamLimits

0xa5f5,	// (0x000177ae) list_double_pane_vc

0xa5f5,	// (0x000177ae) list_double_time_pane_vc_ParamLimits

0xa5f5,	// (0x000177ae) list_double_time_pane_vc

0xa5f5,	// (0x000177ae) list_setting_number_pane_vc_ParamLimits

0xa5f5,	// (0x000177ae) list_setting_number_pane_vc

0xa5f5,	// (0x000177ae) list_setting_pane_vc_ParamLimits

0xa5f5,	// (0x000177ae) list_setting_pane_vc

0xa5f5,	// (0x000177ae) list_single_graphic_heading_pane_vc_ParamLimits

0xa5f5,	// (0x000177ae) list_single_graphic_heading_pane_vc

0xa5f5,	// (0x000177ae) list_single_heading_pane_vc_ParamLimits

0xa5f5,	// (0x000177ae) list_single_heading_pane_vc

0xa62b,	// (0x000177e4) list_single_number_heading_pane_vc_ParamLimits

0xa62b,	// (0x000177e4) list_single_number_heading_pane_vc

0x8e78,	// (0x00016031) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x8e78,	// (0x00016031) list_double_graphic_heading_pane_vc_g1

0xabc5,	// (0x00017d7e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xabc5,	// (0x00017d7e) list_double_graphic_heading_pane_vc_g2

0xabd1,	// (0x00017d8a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xabd1,	// (0x00017d8a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0001cba7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0001cba7) list_double_graphic_heading_pane_vc_g

0xabdd,	// (0x00017d96) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xabdd,	// (0x00017d96) list_double_graphic_heading_pane_vc_t1

0xabf3,	// (0x00017dac) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xabf3,	// (0x00017dac) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001cbae) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0001cbae) list_double_graphic_heading_pane_vc_t

0x8f74,	// (0x0001612d) list_setting_pane_vc_g1_ParamLimits

0x8f74,	// (0x0001612d) list_setting_pane_vc_g1

0x8f80,	// (0x00016139) list_setting_pane_vc_g2_ParamLimits

0x8f80,	// (0x00016139) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001c99d) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001c99d) list_setting_pane_vc_g

0xae39,	// (0x00017ff2) list_setting_pane_vc_t1_ParamLimits

0xae39,	// (0x00017ff2) list_setting_pane_vc_t1

0xae55,	// (0x0001800e) list_setting_pane_vc_t2_ParamLimits

0xae55,	// (0x0001800e) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0001cbdc) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0001cbdc) list_setting_pane_vc_t

0x8fea,	// (0x000161a3) set_value_pane_cp_vc_ParamLimits

0x8fea,	// (0x000161a3) set_value_pane_cp_vc

0x7f76,	// (0x0001512f) list_single_number_heading_pane_vc_g1_ParamLimits

0x7f76,	// (0x0001512f) list_single_number_heading_pane_vc_g1

0x8e84,	// (0x0001603d) list_single_number_heading_pane_vc_g2_ParamLimits

0x8e84,	// (0x0001603d) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c993) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c993) list_single_number_heading_pane_vc_g

0x8f4a,	// (0x00016103) list_single_number_heading_pane_vc_t1_ParamLimits

0x8f4a,	// (0x00016103) list_single_number_heading_pane_vc_t1

0xae71,	// (0x0001802a) list_single_number_heading_pane_vc_t2_ParamLimits

0xae71,	// (0x0001802a) list_single_number_heading_pane_vc_t2

0xae83,	// (0x0001803c) list_single_number_heading_pane_vc_t3_ParamLimits

0xae83,	// (0x0001803c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0001cbe1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0001cbe1) list_single_number_heading_pane_vc_t

0x8e78,	// (0x00016031) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8e78,	// (0x00016031) list_single_graphic_heading_pane_vc_g1

0x7f76,	// (0x0001512f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7f76,	// (0x0001512f) list_single_graphic_heading_pane_vc_g4

0x8e84,	// (0x0001603d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8e84,	// (0x0001603d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001c972) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001c972) list_single_graphic_heading_pane_vc_g

0x8f4a,	// (0x00016103) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8f4a,	// (0x00016103) list_single_graphic_heading_pane_vc_t1

0xae95,	// (0x0001804e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xae95,	// (0x0001804e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0001cbe8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0001cbe8) list_single_graphic_heading_pane_vc_t

0x7f76,	// (0x0001512f) list_double2_pane_vc_g1_ParamLimits

0x7f76,	// (0x0001512f) list_double2_pane_vc_g1

0x8e84,	// (0x0001603d) list_double2_pane_vc_g2_ParamLimits

0x8e84,	// (0x0001603d) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c993) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c993) list_double2_pane_vc_g

0xaea7,	// (0x00018060) list_double2_pane_vc_t1_ParamLimits

0xaea7,	// (0x00018060) list_double2_pane_vc_t1

0xaebd,	// (0x00018076) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xaebd,	// (0x00018076) list_double2_large_graphic_pane_vc_g1

0x7f76,	// (0x0001512f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7f76,	// (0x0001512f) list_double2_large_graphic_pane_vc_g2

0x8e84,	// (0x0001603d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8e84,	// (0x0001603d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0001cbed) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0001cbed) list_double2_large_graphic_pane_vc_g

0xaec9,	// (0x00018082) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xaec9,	// (0x00018082) list_double2_large_graphic_pane_vc_t1

0xaedf,	// (0x00018098) list_double_time_pane_vc_g1_ParamLimits

0xaedf,	// (0x00018098) list_double_time_pane_vc_g1

0xaeeb,	// (0x000180a4) list_double_time_pane_vc_g2_ParamLimits

0xaeeb,	// (0x000180a4) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0001cbf4) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0001cbf4) list_double_time_pane_vc_g

0xaef7,	// (0x000180b0) list_double_time_pane_vc_t1_ParamLimits

0xaef7,	// (0x000180b0) list_double_time_pane_vc_t1

0xaf27,	// (0x000180e0) list_double_time_pane_vc_t2_ParamLimits

0xaf27,	// (0x000180e0) list_double_time_pane_vc_t2

0xaf50,	// (0x00018109) list_double_time_pane_vc_t3_ParamLimits

0xaf50,	// (0x00018109) list_double_time_pane_vc_t3

0xaf62,	// (0x0001811b) list_double_time_pane_vc_t4_ParamLimits

0xaf62,	// (0x0001811b) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0001cbf9) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0001cbf9) list_double_time_pane_vc_t

0x7f76,	// (0x0001512f) list_double_pane_vc_g1_ParamLimits

0x7f76,	// (0x0001512f) list_double_pane_vc_g1

0x8e84,	// (0x0001603d) list_double_pane_vc_g2_ParamLimits

0x8e84,	// (0x0001603d) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c993) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c993) list_double_pane_vc_g

0xaf87,	// (0x00018140) list_double_pane_vc_t1_ParamLimits

0xaf87,	// (0x00018140) list_double_pane_vc_t1

0xaf9b,	// (0x00018154) list_double_pane_vc_t2_ParamLimits

0xaf9b,	// (0x00018154) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0001cc02) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0001cc02) list_double_pane_vc_t

0x7f76,	// (0x0001512f) list_double_number_pane_vc_g1_ParamLimits

0x7f76,	// (0x0001512f) list_double_number_pane_vc_g1

0x8e84,	// (0x0001603d) list_double_number_pane_vc_g2_ParamLimits

0x8e84,	// (0x0001603d) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c993) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c993) list_double_number_pane_vc_g

0xafb1,	// (0x0001816a) list_double_number_pane_vc_t1_ParamLimits

0xafb1,	// (0x0001816a) list_double_number_pane_vc_t1

0xafc5,	// (0x0001817e) list_double_number_pane_vc_t2_ParamLimits

0xafc5,	// (0x0001817e) list_double_number_pane_vc_t2

0xafd9,	// (0x00018192) list_double_number_pane_vc_t3_ParamLimits

0xafd9,	// (0x00018192) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0001cc07) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0001cc07) list_double_number_pane_vc_t

0xafef,	// (0x000181a8) list_double_large_graphic_pane_vc_g1_ParamLimits

0xafef,	// (0x000181a8) list_double_large_graphic_pane_vc_g1

0xb017,	// (0x000181d0) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb017,	// (0x000181d0) list_double_large_graphic_pane_vc_g2

0xb02b,	// (0x000181e4) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb02b,	// (0x000181e4) list_double_large_graphic_pane_vc_g3

0xb03a,	// (0x000181f3) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb03a,	// (0x000181f3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0001cc0e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001cc0e) list_double_large_graphic_pane_vc_g

0xb04a,	// (0x00018203) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb04a,	// (0x00018203) list_double_large_graphic_pane_vc_t1

0xb06c,	// (0x00018225) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb06c,	// (0x00018225) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001cc17) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001cc17) list_double_large_graphic_pane_vc_t

0xabc5,	// (0x00017d7e) list_double_heading_pane_vc_g1_ParamLimits

0xabc5,	// (0x00017d7e) list_double_heading_pane_vc_g1

0xabd1,	// (0x00017d8a) list_double_heading_pane_vc_g2_ParamLimits

0xabd1,	// (0x00017d8a) list_double_heading_pane_vc_g2

0x0001,

0xfa63,	// (0x0001cc1c) list_double_heading_pane_vc_g_ParamLimits

0xfa63,	// (0x0001cc1c) list_double_heading_pane_vc_g

0xb08c,	// (0x00018245) list_double_heading_pane_vc_t1_ParamLimits

0xb08c,	// (0x00018245) list_double_heading_pane_vc_t1

0x8f4a,	// (0x00016103) list_double_heading_pane_vc_t2_ParamLimits

0x8f4a,	// (0x00016103) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0001cc21) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0001cc21) list_double_heading_pane_vc_t

0xb09e,	// (0x00018257) list_double_graphic_pane_vc_g1_ParamLimits

0xb09e,	// (0x00018257) list_double_graphic_pane_vc_g1

0xb0aa,	// (0x00018263) list_double_graphic_pane_vc_g2_ParamLimits

0xb0aa,	// (0x00018263) list_double_graphic_pane_vc_g2

0x7f76,	// (0x0001512f) list_double_graphic_pane_vc_g3_ParamLimits

0x7f76,	// (0x0001512f) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x0001cc26) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0001cc26) list_double_graphic_pane_vc_g

0xb0c7,	// (0x00018280) list_double_graphic_pane_vc_t1_ParamLimits

0xb0c7,	// (0x00018280) list_double_graphic_pane_vc_t1

0xb0f1,	// (0x000182aa) list_double_graphic_pane_vc_t2_ParamLimits

0xb0f1,	// (0x000182aa) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0001cc2f) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0001cc2f) list_double_graphic_pane_vc_t

0x52d8,	// (0x00012491) aid_size_cell_fastswap

0x52e0,	// (0x00012499) aid_size_cell_touch_ParamLimits

0x52e0,	// (0x00012499) aid_size_cell_touch

0x554b,	// (0x00012704) popup_fast_swap_wide_window_ParamLimits

0x554b,	// (0x00012704) popup_fast_swap_wide_window

0x5669,	// (0x00012822) touch_pane_ParamLimits

0x5669,	// (0x00012822) touch_pane

0x3b7d,	// (0x00010d36) button_value_adjust_pane_cp2

0x3b85,	// (0x00010d3e) button_value_adjust_pane_cp4

0x3b8d,	// (0x00010d46) form_field_data_pane_cp2

0x7a60,	// (0x00014c19) form_field_data_wide_pane_cp2

0x4189,	// (0x00011342) bg_scroll_pane_ParamLimits

0x58fd,	// (0x00012ab6) scroll_handle_pane_ParamLimits

0x5911,	// (0x00012aca) scroll_sc2_down_pane_ParamLimits

0x5911,	// (0x00012aca) scroll_sc2_down_pane

0x41e3,	// (0x0001139c) scroll_sc2_up_pane_ParamLimits

0x41e3,	// (0x0001139c) scroll_sc2_up_pane

0xb5cd,	// (0x00018786) grid_wheel_folder_pane_g1_ParamLimits

0xb5cd,	// (0x00018786) grid_wheel_folder_pane_g1

0x5adb,	// (0x00012c94) clock_nsta_pane_cp2_ParamLimits

0x5adb,	// (0x00012c94) clock_nsta_pane_cp2

0x7bfd,	// (0x00014db6) listscroll_midp_pane_ParamLimits

0x800d,	// (0x000151c6) midp_canvas_pane

0x82f7,	// (0x000154b0) nsta_clock_indic_pane

0x8355,	// (0x0001550e) listscroll_form_pane_vc

0x8379,	// (0x00015532) listscroll_set_pane_vc_ParamLimits

0x8379,	// (0x00015532) listscroll_set_pane_vc

0x8a9d,	// (0x00015c56) clock_nsta_pane

0x8b1a,	// (0x00015cd3) indicator_nsta_pane

0x8e12,	// (0x00015fcb) bg_popup_sub_pane_cp2_ParamLimits

0x8e26,	// (0x00015fdf) find_pane_cp2_ParamLimits

0x8e26,	// (0x00015fdf) find_pane_cp2

0x8e3c,	// (0x00015ff5) grid_toobar_pane_ParamLimits

0x8ffc,	// (0x000161b5) list_form_gen_pane_vc_ParamLimits

0x8ffc,	// (0x000161b5) list_form_gen_pane_vc

0x9012,	// (0x000161cb) scroll_pane_cp8_vc_ParamLimits

0x9012,	// (0x000161cb) scroll_pane_cp8_vc

0x908e,	// (0x00016247) data_form_wide_pane_vc_ParamLimits

0x908e,	// (0x00016247) data_form_wide_pane_vc

0x909a,	// (0x00016253) form_field_data_wide_pane_vc_g1

0x90a2,	// (0x0001625b) form_field_data_wide_pane_vc_t1_ParamLimits

0x90a2,	// (0x0001625b) form_field_data_wide_pane_vc_t1

0x3be8,	// (0x00010da1) input_focus_pane_cp6_vc_ParamLimits

0x3be8,	// (0x00010da1) input_focus_pane_cp6_vc

0x93d3,	// (0x0001658c) list_midp_pane_ParamLimits

0x93df,	// (0x00016598) scroll_pane_cp16_ParamLimits

0x93df,	// (0x00016598) scroll_pane_cp16

0x942d,	// (0x000165e6) button_value_adjust_pane_ParamLimits

0x942d,	// (0x000165e6) button_value_adjust_pane

0xa3e6,	// (0x0001759f) button_value_adjust_pane_cp6_ParamLimits

0xa3e6,	// (0x0001759f) button_value_adjust_pane_cp6

0xa534,	// (0x000176ed) settings_code_pane_cp_ParamLimits

0xa534,	// (0x000176ed) settings_code_pane_cp

0x3253,	// (0x0001040c) cell_touch_pane_g1

0x3253,	// (0x0001040c) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001c8b7) cell_touch_pane_g

0xaba4,	// (0x00017d5d) cell_touch_pane_cp_ParamLimits

0xaba4,	// (0x00017d5d) cell_touch_pane_cp

0xabb4,	// (0x00017d6d) cell_touch_pane_ParamLimits

0xabb4,	// (0x00017d6d) cell_touch_pane

0x3253,	// (0x0001040c) scroll_sc2_down_pane_g1

0x3253,	// (0x0001040c) scroll_sc2_up_pane_g1

0x33cc,	// (0x00010585) bg_set_opt_pane_cp4_vc

0xac11,	// (0x00017dca) list_set_graphic_pane_vc_g1_ParamLimits

0xac11,	// (0x00017dca) list_set_graphic_pane_vc_g1

0x3e03,	// (0x00010fbc) list_set_graphic_pane_vc_g2_ParamLimits

0x3e03,	// (0x00010fbc) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0001cbb3) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001cbb3) list_set_graphic_pane_vc_g

0xac1d,	// (0x00017dd6) text_primary_small_cp13_vc_ParamLimits

0xac1d,	// (0x00017dd6) text_primary_small_cp13_vc

0xac35,	// (0x00017dee) list_set_graphic_pane_vc_ParamLimits

0xac35,	// (0x00017dee) list_set_graphic_pane_vc

0x33cc,	// (0x00010585) input_focus_pane_cp2_vc

0x3253,	// (0x0001040c) setting_code_pane_vc_g1

0x3532,	// (0x000106eb) setting_code_pane_vc_t1

0xac4a,	// (0x00017e03) set_text_pane_vc_t1_ParamLimits

0xac4a,	// (0x00017e03) set_text_pane_vc_t1

0x33cc,	// (0x00010585) input_focus_pane_cp1_vc

0xac68,	// (0x00017e21) list_set_text_pane_vc

0x3253,	// (0x0001040c) setting_text_pane_vc_g1

0x33cc,	// (0x00010585) bg_set_opt_pane_cp2_vc

0x3501,	// (0x000106ba) setting_slider_graphic_pane_vc_g1

0xac72,	// (0x00017e2b) setting_slider_graphic_pane_vc_t1

0xac84,	// (0x00017e3d) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0001cbb8) setting_slider_graphic_pane_vc_t

0xac96,	// (0x00017e4f) slider_set_pane_cp_vc

0xaca0,	// (0x00017e59) slider_set_pane_vc_g1

0xaca9,	// (0x00017e62) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0001cbbd) slider_set_pane_vc_g

0x3cb1,	// (0x00010e6a) set_opt_bg_pane_g1_copy1

0x3cb9,	// (0x00010e72) set_opt_bg_pane_g2_copy1

0xacd5,	// (0x00017e8e) set_opt_bg_pane_g3_copy1

0x3cc9,	// (0x00010e82) set_opt_bg_pane_g4_copy1

0x3cd1,	// (0x00010e8a) set_opt_bg_pane_g5_copy1

0x3cd9,	// (0x00010e92) set_opt_bg_pane_g6_copy1

0xacdf,	// (0x00017e98) set_opt_bg_pane_g7_copy1

0xace9,	// (0x00017ea2) set_opt_bg_pane_g8_copy1

0xacf3,	// (0x00017eac) set_opt_bg_pane_g9_copy1

0x33cc,	// (0x00010585) bg_set_opt_pane_cp_vc

0xacfd,	// (0x00017eb6) setting_slider_pane_vc_t1

0xad0c,	// (0x00017ec5) setting_slider_pane_vc_t2

0xad1e,	// (0x00017ed7) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0001cbcc) setting_slider_pane_vc_t

0xad30,	// (0x00017ee9) slider_set_pane_vc

0x5eeb,	// (0x000130a4) volume_set_pane_vc_g1

0x5ef4,	// (0x000130ad) volume_set_pane_vc_g2

0x5efd,	// (0x000130b6) volume_set_pane_vc_g3

0x5f06,	// (0x000130bf) volume_set_pane_vc_g4

0x5f0f,	// (0x000130c8) volume_set_pane_vc_g5

0x5f18,	// (0x000130d1) volume_set_pane_vc_g6

0x5f21,	// (0x000130da) volume_set_pane_vc_g7

0x5f2a,	// (0x000130e3) volume_set_pane_vc_g8

0x5f33,	// (0x000130ec) volume_set_pane_vc_g9

0x5f3c,	// (0x000130f5) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0001ca6a) volume_set_pane_vc_g

0xad3a,	// (0x00017ef3) volume_set_pane_vc

0xad44,	// (0x00017efd) button_value_adjust_pane_cp1_vc

0xad4e,	// (0x00017f07) list_highlight_pane_cp2_vc

0xad57,	// (0x00017f10) list_set_pane_vc_ParamLimits

0xad57,	// (0x00017f10) list_set_pane_vc

0xadc7,	// (0x00017f80) main_pane_set_vc_t1_ParamLimits

0xadc7,	// (0x00017f80) main_pane_set_vc_t1

0xaddc,	// (0x00017f95) main_pane_set_vc_t2_ParamLimits

0xaddc,	// (0x00017f95) main_pane_set_vc_t2

0xadee,	// (0x00017fa7) main_pane_set_vc_t3_ParamLimits

0xadee,	// (0x00017fa7) main_pane_set_vc_t3

0xae02,	// (0x00017fbb) main_pane_set_vc_t4_ParamLimits

0xae02,	// (0x00017fbb) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0001cbd3) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0001cbd3) main_pane_set_vc_t

0xae16,	// (0x00017fcf) setting_code_pane_vc_ParamLimits

0xae16,	// (0x00017fcf) setting_code_pane_vc

0xae27,	// (0x00017fe0) setting_slider_graphic_pane_vc

0xae27,	// (0x00017fe0) setting_slider_pane_vc

0xae27,	// (0x00017fe0) setting_text_pane_vc

0xae27,	// (0x00017fe0) setting_volume_pane_vc

0xae31,	// (0x00017fea) scroll_pane_cp121_vc

0x3b6b,	// (0x00010d24) set_content_pane_vc

0xb10f,	// (0x000182c8) button_value_adjust_pane_g1

0xb118,	// (0x000182d1) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x0001cc34) button_value_adjust_pane_g

0xb121,	// (0x000182da) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb121,	// (0x000182da) form_field_slider_wide_pane_vc_t1

0xb133,	// (0x000182ec) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb133,	// (0x000182ec) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x0001cc39) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0001cc39) form_field_slider_wide_pane_vc_t

0x347a,	// (0x00010633) input_focus_pane_cp10_vc_ParamLimits

0x347a,	// (0x00010633) input_focus_pane_cp10_vc

0xb15f,	// (0x00018318) slider_cont_pane_cp1_vc_ParamLimits

0xb15f,	// (0x00018318) slider_cont_pane_cp1_vc

0xb171,	// (0x0001832a) slider_form_pane_g1_cp2

0xaca9,	// (0x00017e62) slider_form_pane_g2_cp2

0xb19e,	// (0x00018357) form_field_slider_pane_vc_t3

0xb1ac,	// (0x00018365) form_field_slider_pane_vc_t4

0xb1ba,	// (0x00018373) slider_form_pane_vc_ParamLimits

0xb1ba,	// (0x00018373) slider_form_pane_vc

0xb1c7,	// (0x00018380) form_field_slider_pane_vc_t1_ParamLimits

0xb1c7,	// (0x00018380) form_field_slider_pane_vc_t1

0xb133,	// (0x000182ec) form_field_slider_pane_vc_t2_ParamLimits

0xb133,	// (0x000182ec) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x0001cc4b) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x0001cc4b) form_field_slider_pane_vc_t

0x347a,	// (0x00010633) input_focus_pane_cp9_vc_ParamLimits

0x347a,	// (0x00010633) input_focus_pane_cp9_vc

0xb1dd,	// (0x00018396) slider_cont_pane_vc_ParamLimits

0xb1dd,	// (0x00018396) slider_cont_pane_vc

0xb1f1,	// (0x000183aa) list_form_graphic_pane_cp_vc_ParamLimits

0xb1f1,	// (0x000183aa) list_form_graphic_pane_cp_vc

0x909a,	// (0x00016253) form_field_popup_wide_pane_vc_g1

0xb206,	// (0x000183bf) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb206,	// (0x000183bf) form_field_popup_wide_pane_vc_t1

0x3be8,	// (0x00010da1) input_focus_pane_cp8_vc_ParamLimits

0x3be8,	// (0x00010da1) input_focus_pane_cp8_vc

0xb24b,	// (0x00018404) list_form_wide_pane_vc_ParamLimits

0xb24b,	// (0x00018404) list_form_wide_pane_vc

0xb257,	// (0x00018410) list_form_graphic_pane_vc_g1

0xb25f,	// (0x00018418) list_form_graphic_pane_vc_t1_ParamLimits

0xb25f,	// (0x00018418) list_form_graphic_pane_vc_t1

0x3492,	// (0x0001064b) list_highlight_pane_cp5_vc_ParamLimits

0x3492,	// (0x0001064b) list_highlight_pane_cp5_vc

0xb27b,	// (0x00018434) list_form_graphic_pane_vc_ParamLimits

0xb27b,	// (0x00018434) list_form_graphic_pane_vc

0x909a,	// (0x00016253) form_field_popup_pane_vc_g1

0xb291,	// (0x0001844a) form_field_popup_pane_vc_t1_ParamLimits

0xb291,	// (0x0001844a) form_field_popup_pane_vc_t1

0x3be8,	// (0x00010da1) input_focus_pane_cp7_vc_ParamLimits

0x3be8,	// (0x00010da1) input_focus_pane_cp7_vc

0xb2a8,	// (0x00018461) list_form_pane_vc_ParamLimits

0xb2a8,	// (0x00018461) list_form_pane_vc

0xb2b4,	// (0x0001846d) data_form_pane_vc_t1_ParamLimits

0xb2b4,	// (0x0001846d) data_form_pane_vc_t1

0x3cb1,	// (0x00010e6a) input_focus_pane_vc_g1

0x3cb9,	// (0x00010e72) input_focus_pane_vc_g2

0x3cc1,	// (0x00010e7a) input_focus_pane_vc_g3

0x3cc9,	// (0x00010e82) input_focus_pane_vc_g4

0x3cd1,	// (0x00010e8a) input_focus_pane_vc_g5

0x3cd9,	// (0x00010e92) input_focus_pane_vc_g6

0x3ce1,	// (0x00010e9a) input_focus_pane_vc_g7

0x3ce9,	// (0x00010ea2) input_focus_pane_vc_g8

0x3cf1,	// (0x00010eaa) input_focus_pane_vc_g9

0x3253,	// (0x0001040c) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001c840) input_focus_pane_vc_g

0x908e,	// (0x00016247) data_form_pane_vc_ParamLimits

0x908e,	// (0x00016247) data_form_pane_vc

0x909a,	// (0x00016253) form_field_data_pane_vc_g1

0xb2d1,	// (0x0001848a) form_field_data_pane_vc_t1_ParamLimits

0xb2d1,	// (0x0001848a) form_field_data_pane_vc_t1

0x3be8,	// (0x00010da1) input_focus_pane_vc_ParamLimits

0x3be8,	// (0x00010da1) input_focus_pane_vc

0xb2eb,	// (0x000184a4) button_value_adjust_pane_cp3_vc

0xb2f3,	// (0x000184ac) button_value_adjust_pane_cp5_vc

0xb2fb,	// (0x000184b4) form_field_data_pane_vc_ParamLimits

0xb2fb,	// (0x000184b4) form_field_data_pane_vc

0xb316,	// (0x000184cf) form_field_data_pane_vc_cp2

0xb31e,	// (0x000184d7) form_field_data_wide_pane_vc_ParamLimits

0xb31e,	// (0x000184d7) form_field_data_wide_pane_vc

0xb338,	// (0x000184f1) form_field_data_wide_pane_vc_cp2

0xb340,	// (0x000184f9) form_field_popup_pane_vc_ParamLimits

0xb340,	// (0x000184f9) form_field_popup_pane_vc

0xb35b,	// (0x00018514) form_field_popup_wide_pane_vc_ParamLimits

0xb35b,	// (0x00018514) form_field_popup_wide_pane_vc

0xb375,	// (0x0001852e) form_field_slider_pane_vc_ParamLimits

0xb375,	// (0x0001852e) form_field_slider_pane_vc

0xb388,	// (0x00018541) form_field_slider_wide_pane_vc_ParamLimits

0xb388,	// (0x00018541) form_field_slider_wide_pane_vc

0xb39b,	// (0x00018554) grid_touch_1_pane_ParamLimits

0xb39b,	// (0x00018554) grid_touch_1_pane

0xb3a7,	// (0x00018560) grid_touch_2_pane_ParamLimits

0xb3a7,	// (0x00018560) grid_touch_2_pane

0x82c2,	// (0x0001547b) touch_pane_g1_ParamLimits

0x82c2,	// (0x0001547b) touch_pane_g1

0xb3c1,	// (0x0001857a) cell_app_pane_cp_wide_ParamLimits

0xb3c1,	// (0x0001857a) cell_app_pane_cp_wide

0xb3d2,	// (0x0001858b) grid_popup_fast_wide_pane_ParamLimits

0xb3d2,	// (0x0001858b) grid_popup_fast_wide_pane

0xb3e6,	// (0x0001859f) scroll_pane_cp19_ParamLimits

0xb3e6,	// (0x0001859f) scroll_pane_cp19

0x33cc,	// (0x00010585) bg_popup_window_pane_cp20

0xb3fa,	// (0x000185b3) listscroll_popup_fast_wide_pane

0x3492,	// (0x0001064b) grid_indicator_nsta_pane

0xb402,	// (0x000185bb) clock_nsta_pane_g1

0xb40b,	// (0x000185c4) clock_nsta_pane_t1

0xb427,	// (0x000185e0) cell_indicator_nsta_pane_ParamLimits

0xb427,	// (0x000185e0) cell_indicator_nsta_pane

0xb459,	// (0x00018612) cell_indicator_nsta_pane_g1

0xb467,	// (0x00018620) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x0001cc5c) cell_indicator_nsta_pane_g

0xb47d,	// (0x00018636) clock_nsta_pane_cp

0xb485,	// (0x0001863e) indicator_nsta_pane_cp

0xb48e,	// (0x00018647) nsta_clock_indic_pane_g1

0x3571,	// (0x0001072a) grid_indicator_pane

0x42d5,	// (0x0001148e) scroll_pane_cp29

0x5a27,	// (0x00012be0) indicator_nsta_pane_cp2_ParamLimits

0x5a27,	// (0x00012be0) indicator_nsta_pane_cp2

0x3492,	// (0x0001064b) main_apps_wheel_pane

0x92b0,	// (0x00016469) form_midp_field_text_pane_ParamLimits

0x93ff,	// (0x000165b8) scroll_bar_cp050_ParamLimits

0xb4f7,	// (0x000186b0) cell_indicator_pane_ParamLimits

0xb4f7,	// (0x000186b0) cell_indicator_pane

0xb50f,	// (0x000186c8) cell_indicator_pane_g1

0xb519,	// (0x000186d2) grid_wheel_folder_pane_ParamLimits

0xb519,	// (0x000186d2) grid_wheel_folder_pane

0xb52d,	// (0x000186e6) list_wheel_apps_pane_ParamLimits

0xb52d,	// (0x000186e6) list_wheel_apps_pane

0xb540,	// (0x000186f9) main_apps_wheel_pane_g1_ParamLimits

0xb540,	// (0x000186f9) main_apps_wheel_pane_g1

0xb55c,	// (0x00018715) main_apps_wheel_pane_g2_ParamLimits

0xb55c,	// (0x00018715) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x0001cc78) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x0001cc78) main_apps_wheel_pane_g

0xb578,	// (0x00018731) main_apps_wheel_pane_t1_ParamLimits

0xb578,	// (0x00018731) main_apps_wheel_pane_t1

0xb5a1,	// (0x0001875a) list_wheel_apps_pane_g1

0xb5a9,	// (0x00018762) list_wheel_apps_pane_g2

0xb5b1,	// (0x0001876a) list_wheel_apps_pane_g3

0xb5b9,	// (0x00018772) list_wheel_apps_pane_g4

0xb5c3,	// (0x0001877c) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x0001cc7d) list_wheel_apps_pane_g

0x4872,	// (0x00011a2b) navi_icon_text_pane

0x89ca,	// (0x00015b83) aid_fill_nsta

0xb5e4,	// (0x0001879d) navi_icon_text_pane_g1

0xb5f0,	// (0x000187a9) navi_icon_text_pane_t1

0x7e93,	// (0x0001504c) list_set_graphic_pane_t1_ParamLimits

0x7e93,	// (0x0001504c) list_set_graphic_pane_t1

0x9b50,	// (0x00016d09) popup_midp_note_alarm_window_t6_ParamLimits

0x9b50,	// (0x00016d09) popup_midp_note_alarm_window_t6

0x9b62,	// (0x00016d1b) popup_midp_note_alarm_window_t7_ParamLimits

0x9b62,	// (0x00016d1b) popup_midp_note_alarm_window_t7

0x9b74,	// (0x00016d2d) popup_midp_note_alarm_window_t8_ParamLimits

0x9b74,	// (0x00016d2d) popup_midp_note_alarm_window_t8

0x9b86,	// (0x00016d3f) popup_midp_note_alarm_window_t9_ParamLimits

0x9b86,	// (0x00016d3f) popup_midp_note_alarm_window_t9

0x9b98,	// (0x00016d51) popup_midp_note_alarm_window_t10_ParamLimits

0x9b98,	// (0x00016d51) popup_midp_note_alarm_window_t10

0x9baa,	// (0x00016d63) popup_midp_note_alarm_window_t11_ParamLimits

0x9baa,	// (0x00016d63) popup_midp_note_alarm_window_t11

0x9bbc,	// (0x00016d75) scroll_pane_cp17_ParamLimits

0x9bbc,	// (0x00016d75) scroll_pane_cp17

0x5eeb,	// (0x000130a4) volume_small_pane_cp_g1

0x61fc,	// (0x000133b5) volume_small_pane_cp_g2

0x6205,	// (0x000133be) volume_small_pane_cp_g3

0x620e,	// (0x000133c7) volume_small_pane_cp_g4

0x6217,	// (0x000133d0) volume_small_pane_cp_g5

0x6220,	// (0x000133d9) volume_small_pane_cp_g6

0x6229,	// (0x000133e2) volume_small_pane_cp_g7

0x6232,	// (0x000133eb) volume_small_pane_cp_g8

0x623b,	// (0x000133f4) volume_small_pane_cp_g9

0x6244,	// (0x000133fd) volume_small_pane_cp_g10

0x80d6,	// (0x0001528f) midp_ticker_pane_g1_ParamLimits

0x80e2,	// (0x0001529b) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001c90c) midp_ticker_pane_g_ParamLimits

0x80ee,	// (0x000152a7) midp_ticker_pane_t1_ParamLimits

0x89e0,	// (0x00015b99) aid_fill_nsta_2

0x93eb,	// (0x000165a4) list_form2_midp_pane

0xa5b0,	// (0x00017769) midp_editing_number_pane_ParamLimits

0xa5bf,	// (0x00017778) midp_ticker_pane_ParamLimits

0xb602,	// (0x000187bb) form2_midp_field_pane

0xb626,	// (0x000187df) scroll_pane_cp51

0xb646,	// (0x000187ff) form2_midp_button_pane_ParamLimits

0xb646,	// (0x000187ff) form2_midp_button_pane

0xb658,	// (0x00018811) form2_midp_content_pane_ParamLimits

0xb658,	// (0x00018811) form2_midp_content_pane

0xb672,	// (0x0001882b) form2_midp_field_choice_group_pane

0xb67a,	// (0x00018833) form2_midp_field_pane_g1

0xb682,	// (0x0001883b) form2_midp_field_pane_g2

0xb68a,	// (0x00018843) form2_midp_field_pane_g3

0xb692,	// (0x0001884b) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x0001cca2) form2_midp_field_pane_g

0xb69a,	// (0x00018853) form2_midp_gauge_slider_pane

0xb6a2,	// (0x0001885b) form2_midp_gauge_wait_pane

0xb6aa,	// (0x00018863) form2_midp_image_pane_ParamLimits

0xb6aa,	// (0x00018863) form2_midp_image_pane

0xb6c5,	// (0x0001887e) form2_midp_label_pane_ParamLimits

0xb6c5,	// (0x0001887e) form2_midp_label_pane

0xb6e4,	// (0x0001889d) form2_midp_label_pane_cp_ParamLimits

0xb6e4,	// (0x0001889d) form2_midp_label_pane_cp

0xb705,	// (0x000188be) form2_midp_string_pane_ParamLimits

0xb705,	// (0x000188be) form2_midp_string_pane

0xb717,	// (0x000188d0) form2_midp_text_pane_ParamLimits

0xb717,	// (0x000188d0) form2_midp_text_pane

0xb738,	// (0x000188f1) form2_midp_time_pane

0xb748,	// (0x00018901) input_focus_pane_cp51_ParamLimits

0xb748,	// (0x00018901) input_focus_pane_cp51

0xb760,	// (0x00018919) form2_midp_label_pane_t1_ParamLimits

0xb760,	// (0x00018919) form2_midp_label_pane_t1

0xb7a6,	// (0x0001895f) form2_mdip_text_pane_t1_ParamLimits

0xb7a6,	// (0x0001895f) form2_mdip_text_pane_t1

0xb7c8,	// (0x00018981) form2_midp_time_pane_t1

0xb7e3,	// (0x0001899c) form2_midp_gauge_slider_pane_t1

0xb7f5,	// (0x000189ae) form2_midp_gauge_slider_pane_t2

0xb807,	// (0x000189c0) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x0001ccab) form2_midp_gauge_slider_pane_t

0xb819,	// (0x000189d2) form2_midp_slider_pane

0xb825,	// (0x000189de) form2_midp_gauge_wait_pane_t1

0xb833,	// (0x000189ec) form2_midp_wait_pane_ParamLimits

0xb833,	// (0x000189ec) form2_midp_wait_pane

0x90e1,	// (0x0001629a) list_single_2graphic_pane_cp4_ParamLimits

0x90e1,	// (0x0001629a) list_single_2graphic_pane_cp4

0xb85e,	// (0x00018a17) list_single_midp_graphic_pane_cp_ParamLimits

0xb85e,	// (0x00018a17) list_single_midp_graphic_pane_cp

0x33cc,	// (0x00010585) list_highlight_pane_cp20

0xb882,	// (0x00018a3b) list_single_2graphic_pane_g1_cp4

0xaaa7,	// (0x00017c60) list_single_2graphic_pane_g2_cp4

0xb88a,	// (0x00018a43) list_single_2graphic_pane_t1_cp4

0x3492,	// (0x0001064b) list_highlight_pane_cp21

0xb899,	// (0x00018a52) list_single_midp_graphic_pane_g4_cp

0xb8a8,	// (0x00018a61) list_single_midp_graphic_pane_t1_cp

0xb8bd,	// (0x00018a76) form2_mdip_string_pane_t1_ParamLimits

0xb8bd,	// (0x00018a76) form2_mdip_string_pane_t1

0x33cc,	// (0x00010585) bg_wml_button_pane_cp2

0x3253,	// (0x0001040c) form2_midp_image_pane_g1

0x3b15,	// (0x00010cce) list_double_large_graphic_pane_g5_ParamLimits

0x3b15,	// (0x00010cce) list_double_large_graphic_pane_g5

0x7bfd,	// (0x00014db6) midp_form_pane_ParamLimits

0x3492,	// (0x0001064b) main_apps_wheel_pane_ParamLimits

0x8774,	// (0x0001592d) popup_preview_window_ParamLimits

0x8774,	// (0x0001592d) popup_preview_window

0x895b,	// (0x00015b14) popup_touch_info_window_ParamLimits

0x895b,	// (0x00015b14) popup_touch_info_window

0x897d,	// (0x00015b36) popup_touch_menu_window_ParamLimits

0x897d,	// (0x00015b36) popup_touch_menu_window

0x3249,	// (0x00010402) bg_popup_sub_pane_cp6

0xb962,	// (0x00018b1b) list_touch_menu_pane

0xb96a,	// (0x00018b23) list_single_touch_menu_pane_ParamLimits

0xb96a,	// (0x00018b23) list_single_touch_menu_pane

0xb982,	// (0x00018b3b) list_single_touch_menu_pane_t1

0x3492,	// (0x0001064b) bg_popup_sub_pane_cp7_ParamLimits

0x3492,	// (0x0001064b) bg_popup_sub_pane_cp7

0xb990,	// (0x00018b49) heading_sub_pane

0xb998,	// (0x00018b51) list_touch_info_pane_ParamLimits

0xb998,	// (0x00018b51) list_touch_info_pane

0xb9a7,	// (0x00018b60) list_single_touch_info_pane_ParamLimits

0xb9a7,	// (0x00018b60) list_single_touch_info_pane

0xb9b9,	// (0x00018b72) list_single_touch_info_pane_t1

0xb9c7,	// (0x00018b80) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x0001ccb9) list_single_touch_info_pane_t

0x8005,	// (0x000151be) bg_popup_heading_pane_cp

0xb9d5,	// (0x00018b8e) heading_sub_pane_t1

0x9028,	// (0x000161e1) bg_popup_preview_window_pane_cp_ParamLimits

0x9028,	// (0x000161e1) bg_popup_preview_window_pane_cp

0xb990,	// (0x00018b49) heading_preview_pane

0xb998,	// (0x00018b51) list_preview_pane_ParamLimits

0xb998,	// (0x00018b51) list_preview_pane

0xb9e3,	// (0x00018b9c) popup_preview_window_g1

0xb9a7,	// (0x00018b60) list_single_preview_pane_ParamLimits

0xb9a7,	// (0x00018b60) list_single_preview_pane

0xb9eb,	// (0x00018ba4) list_single_preview_pane_g1

0xb9f3,	// (0x00018bac) list_single_preview_pane_t1

0xb9b9,	// (0x00018b72) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x0001ccbe) list_single_preview_pane_t

0xba01,	// (0x00018bba) bg_popup_heading_pane_cp2_ParamLimits

0xba01,	// (0x00018bba) bg_popup_heading_pane_cp2

0xba17,	// (0x00018bd0) heading_preview_pane_g1

0xba1f,	// (0x00018bd8) heading_preview_pane_t1_ParamLimits

0xba1f,	// (0x00018bd8) heading_preview_pane_t1

0x3588,	// (0x00010741) soft_indicator_pane_t1_ParamLimits

0x3abd,	// (0x00010c76) scroll_pane_ParamLimits

0x41da,	// (0x00011393) scroll_sc2_left_pane

0x41d1,	// (0x0001138a) scroll_sc2_right_pane

0x41f9,	// (0x000113b2) scroll_bg_pane_g1_ParamLimits

0x420e,	// (0x000113c7) scroll_bg_pane_g2_ParamLimits

0x4226,	// (0x000113df) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001c897) scroll_bg_pane_g_ParamLimits

0x41f9,	// (0x000113b2) scroll_handle_pane_g1_ParamLimits

0x4248,	// (0x00011401) scroll_handle_pane_g2_ParamLimits

0x4226,	// (0x000113df) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001c89e) scroll_handle_pane_g_ParamLimits

0x83bb,	// (0x00015574) popup_choice_list_window_ParamLimits

0x83bb,	// (0x00015574) popup_choice_list_window

0x8e1e,	// (0x00015fd7) choice_list_pane

0x8ece,	// (0x00016087) cell_toolbar_pane_t1

0x8ef6,	// (0x000160af) toolbar_button_pane_ParamLimits

0xa086,	// (0x0001723f) ai_gene_pane_1_t2_ParamLimits

0xa086,	// (0x0001723f) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0001cac6) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0001cac6) ai_gene_pane_1_t

0xba3c,	// (0x00018bf5) scroll_sc2_left_pane_g1

0xba3c,	// (0x00018bf5) scroll_sc2_right_pane_g1

0x838b,	// (0x00015544) bg_popup_sub_pane_cp10

0xba46,	// (0x00018bff) list_choice_list_pane

0xba5f,	// (0x00018c18) list_single_choice_list_pane_ParamLimits

0xba5f,	// (0x00018c18) list_single_choice_list_pane

0xba77,	// (0x00018c30) list_single_choice_list_pane_g1

0x3dd6,	// (0x00010f8f) list_single_choice_list_pane_t1_ParamLimits

0x3dd6,	// (0x00010f8f) list_single_choice_list_pane_t1

0xba7f,	// (0x00018c38) choice_list_pane_g1

0xba87,	// (0x00018c40) choice_list_pane_t1

0x3249,	// (0x00010402) input_focus_pane_cp11

0x3fbe,	// (0x00011177) title_pane_stacon_g2_ParamLimits

0x3fbe,	// (0x00011177) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001c87d) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001c87d) title_pane_stacon_g

0x8005,	// (0x000151be) cursor_press_pane

0x8475,	// (0x0001562e) popup_fep_hwr_window_ParamLimits

0x8475,	// (0x0001562e) popup_fep_hwr_window

0x84ff,	// (0x000156b8) popup_fep_vkb_window_ParamLimits

0x84ff,	// (0x000156b8) popup_fep_vkb_window

0xba95,	// (0x00018c4e) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x0001cce7) fep_vkb_side_pane_g_ParamLimits

0x6286,	// (0x0001343f) fep_hwr_candidate_pane_ParamLimits

0x6286,	// (0x0001343f) fep_hwr_candidate_pane

0x62b0,	// (0x00013469) fep_hwr_side_pane_ParamLimits

0x62b0,	// (0x00013469) fep_hwr_side_pane

0x62d2,	// (0x0001348b) fep_hwr_top_pane_ParamLimits

0x62d2,	// (0x0001348b) fep_hwr_top_pane

0x62ea,	// (0x000134a3) fep_hwr_write_pane_ParamLimits

0x62ea,	// (0x000134a3) fep_hwr_write_pane

0xfb2e,	// (0x0001cce7) fep_vkb_side_pane_g

0xba9d,	// (0x00018c56) fep_hwr_top_pane_g1

0xbaaf,	// (0x00018c68) fep_hwr_top_pane_g2

0x6324,	// (0x000134dd) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x0001ccc3) fep_hwr_top_pane_g

0x6339,	// (0x000134f2) fep_hwr_top_text_pane

0x4342,	// (0x000114fb) fep_hwr_top_text_pane_g1

0xbae5,	// (0x00018c9e) fep_hwr_top_text_pane_t1

0x6443,	// (0x000135fc) fep_hwr_candidate_pane_g1

0xbd30,	// (0x00018ee9) fep_vkb_keypad_pane_g3_ParamLimits

0xbd30,	// (0x00018ee9) fep_vkb_keypad_pane_g3

0xbd5c,	// (0x00018f15) fep_vkb_keypad_pane_g4_ParamLimits

0xbd5c,	// (0x00018f15) fep_vkb_keypad_pane_g4

0xbdd3,	// (0x00018f8c) fep_vkb_bottom_pane_g2_ParamLimits

0xbdd3,	// (0x00018f8c) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x0001ccee) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x0001ccee) fep_vkb_bottom_pane_g

0xba3c,	// (0x00018bf5) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x0001ccf8) cell_vkb_side_pane_g

0xbe5e,	// (0x00019017) cell_vkb_side_pane_t1

0xbe6c,	// (0x00019025) cell_vkb_side_pane_t1_copy1

0xba3c,	// (0x00018bf5) bg_fep_vkb_candidate_pane_g2

0xbfb0,	// (0x00019169) cell_vkb_candidate_pane_ParamLimits

0xbaf3,	// (0x00018cac) aid_size_cell_vkb_ParamLimits

0xbaf3,	// (0x00018cac) aid_size_cell_vkb

0xbfb0,	// (0x00019169) cell_vkb_candidate_pane

0x646a,	// (0x00013623) bg_popup_fep_shadow_pane_g1

0xbb85,	// (0x00018d3e) fep_vkb_bottom_pane_ParamLimits

0xbb85,	// (0x00018d3e) fep_vkb_bottom_pane

0xbbc2,	// (0x00018d7b) fep_vkb_candidate_pane_ParamLimits

0xbbc2,	// (0x00018d7b) fep_vkb_candidate_pane

0xbbde,	// (0x00018d97) fep_vkb_keypad_pane_ParamLimits

0xbbde,	// (0x00018d97) fep_vkb_keypad_pane

0xbc11,	// (0x00018dca) fep_vkb_side_pane_ParamLimits

0xbc11,	// (0x00018dca) fep_vkb_side_pane

0xbc4d,	// (0x00018e06) fep_vkb_top_pane_ParamLimits

0xbc4d,	// (0x00018e06) fep_vkb_top_pane

0xbc89,	// (0x00018e42) fep_vkb_top_pane_g1_ParamLimits

0xbc89,	// (0x00018e42) fep_vkb_top_pane_g1

0xbc98,	// (0x00018e51) fep_vkb_top_pane_g2_ParamLimits

0xbc98,	// (0x00018e51) fep_vkb_top_pane_g2

0xbca7,	// (0x00018e60) fep_vkb_top_pane_g3_ParamLimits

0xbca7,	// (0x00018e60) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x0001ccde) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x0001ccde) fep_vkb_top_pane_g

0xbcc5,	// (0x00018e7e) fep_vkb_top_text_pane_ParamLimits

0xbcc5,	// (0x00018e7e) fep_vkb_top_text_pane

0xbcd6,	// (0x00018e8f) fep_vkb_side_pane_g1_ParamLimits

0xbcd6,	// (0x00018e8f) fep_vkb_side_pane_g1

0xbd1f,	// (0x00018ed8) grid_vkb_side_pane_ParamLimits

0xbd1f,	// (0x00018ed8) grid_vkb_side_pane

0x6472,	// (0x0001362b) bg_popup_fep_shadow_pane_g2

0x647b,	// (0x00013634) bg_popup_fep_shadow_pane_g3

0x6483,	// (0x0001363c) bg_popup_fep_shadow_pane_g4

0x648c,	// (0x00013645) bg_popup_fep_shadow_pane_g5

0x6496,	// (0x0001364f) bg_popup_fep_shadow_pane_g6

0x649e,	// (0x00013657) bg_popup_fep_shadow_pane_g7

0x3cc9,	// (0x00010e82) bg_popup_fep_shadow_pane_g8

0xbd7e,	// (0x00018f37) grid_vkb_keypad_number_pane_ParamLimits

0xbd7e,	// (0x00018f37) grid_vkb_keypad_number_pane

0xbd92,	// (0x00018f4b) grid_vkb_keypad_pane_ParamLimits

0xbd92,	// (0x00018f4b) grid_vkb_keypad_pane

0xbdb8,	// (0x00018f71) fep_vkb_bottom_pane_g1_ParamLimits

0xbdb8,	// (0x00018f71) fep_vkb_bottom_pane_g1

0xbde1,	// (0x00018f9a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbde1,	// (0x00018f9a) grid_vkb_keypad_bottom_left_pane

0xbdf6,	// (0x00018faf) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbdf6,	// (0x00018faf) grid_vkb_keypad_bottom_right_pane

0xbe0b,	// (0x00018fc4) fep_vkb_top_text_pane_g1

0xbe26,	// (0x00018fdf) fep_vkb_top_text_pane_t1

0xbe3b,	// (0x00018ff4) cell_vkb_side_pane_ParamLimits

0xbe3b,	// (0x00018ff4) cell_vkb_side_pane

0xba3c,	// (0x00018bf5) cell_vkb_side_pane_g1

0xbe7a,	// (0x00019033) cell_vkb_keypad_pane_ParamLimits

0xbe7a,	// (0x00019033) cell_vkb_keypad_pane

0xbf07,	// (0x000190c0) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x0001cd0b) bg_popup_fep_shadow_pane_g

0x64b0,	// (0x00013669) cell_hwr_side_pane_g1

0x64b0,	// (0x00013669) cell_hwr_side_pane_g2

0xbf11,	// (0x000190ca) cell_vkb_keypad_pane_t1

0xbf1f,	// (0x000190d8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbf1f,	// (0x000190d8) cell_vkb_keypad_bottom_left_pane

0xbf3c,	// (0x000190f5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbf3c,	// (0x000190f5) cell_vkb_keypad_bottom_right_pane

0xba3c,	// (0x00018bf5) cell_vkb_keypad_bottom_left_pane_g1

0xba3c,	// (0x00018bf5) cell_vkb_keypad_bottom_right_pane_g1

0xbf75,	// (0x0001912e) cell_vkb_keypad_number_pane_ParamLimits

0xbf75,	// (0x0001912e) cell_vkb_keypad_number_pane

0xbf94,	// (0x0001914d) cell_vkb_keypad_number_pane_g1

0xbf9e,	// (0x00019157) cell_vkb_keypad_number_pane_g2

0xbfa7,	// (0x00019160) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x0001ccfd) cell_vkb_keypad_number_pane_g

0xbf11,	// (0x000190ca) cell_vkb_keypad_number_pane_t1

0xbfd1,	// (0x0001918a) fep_vkb_candidate_pane_g1

0x0001,

0xfb65,	// (0x0001cd1e) cell_hwr_side_pane_g

0xbfea,	// (0x000191a3) cell_hwr_side_pane_t1

0x64ba,	// (0x00013673) cell_hwr_side_pane_t1_copy1

0x64c8,	// (0x00013681) cell_hwr_candidate_pane_g1

0x64f7,	// (0x000136b0) cell_hwr_candidate_pane_t1

0xba3c,	// (0x00018bf5) cell_vkb_candidate_pane_g2

0xc02e,	// (0x000191e7) cell_vkb_candidate_pane_t1

0x624d,	// (0x00013406) bg_popup_fep_shadow_pane_ParamLimits

0x624d,	// (0x00013406) bg_popup_fep_shadow_pane

0x6304,	// (0x000134bd) bg_fep_hwr_top_pane_g4

0xbac1,	// (0x00018c7a) bg_hwr_side_pane_g1_ParamLimits

0xbac1,	// (0x00018c7a) bg_hwr_side_pane_g1

0x6377,	// (0x00013530) cell_hwr_side_pane_ParamLimits

0x6377,	// (0x00013530) cell_hwr_side_pane

0x63b4,	// (0x0001356d) fep_hwr_write_pane_g1_ParamLimits

0x63b4,	// (0x0001356d) fep_hwr_write_pane_g1

0x63c1,	// (0x0001357a) fep_hwr_write_pane_g2_ParamLimits

0x63c1,	// (0x0001357a) fep_hwr_write_pane_g2

0x63ce,	// (0x00013587) fep_hwr_write_pane_g3_ParamLimits

0x63ce,	// (0x00013587) fep_hwr_write_pane_g3

0x63dc,	// (0x00013595) fep_hwr_write_pane_g4_ParamLimits

0x63dc,	// (0x00013595) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x0001ccca) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x0001ccca) fep_hwr_write_pane_g

0x6304,	// (0x000134bd) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6304,	// (0x000134bd) bg_fep_hwr_candidate_pane_g2

0x63f1,	// (0x000135aa) cell_hwr_candidate_pane_ParamLimits

0x63f1,	// (0x000135aa) cell_hwr_candidate_pane

0x6443,	// (0x000135fc) fep_hwr_candidate_pane_g1_ParamLimits

0xbb21,	// (0x00018cda) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbb21,	// (0x00018cda) bg_popup_fep_shadow_pane_cp2

0xbcb7,	// (0x00018e70) fep_vkb_top_pane_g4_ParamLimits

0xbcb7,	// (0x00018e70) fep_vkb_top_pane_g4

0xbcfd,	// (0x00018eb6) fep_vkb_side_pane_g2_ParamLimits

0xbcfd,	// (0x00018eb6) fep_vkb_side_pane_g2

0x797e,	// (0x00014b37) list_setting_pane_t4_ParamLimits

0x797e,	// (0x00014b37) list_setting_pane_t4

0x79fa,	// (0x00014bb3) list_setting_number_pane_t5_ParamLimits

0x79fa,	// (0x00014bb3) list_setting_number_pane_t5

0x7cf9,	// (0x00014eb2) list_double_heading_pane_cp2_ParamLimits

0x7cf9,	// (0x00014eb2) list_double_heading_pane_cp2

0xc03c,	// (0x000191f5) list_double_heading_pane_g1_cp2_ParamLimits

0xc03c,	// (0x000191f5) list_double_heading_pane_g1_cp2

0xc048,	// (0x00019201) list_double_heading_pane_g2_cp2_ParamLimits

0xc048,	// (0x00019201) list_double_heading_pane_g2_cp2

0xc05c,	// (0x00019215) list_double_heading_pane_t1_cp2_ParamLimits

0xc05c,	// (0x00019215) list_double_heading_pane_t1_cp2

0xc072,	// (0x0001922b) list_double_heading_pane_t2_cp2_ParamLimits

0xc072,	// (0x0001922b) list_double_heading_pane_t2_cp2

0x3241,	// (0x000103fa) aid_value_unit2

0x55a9,	// (0x00012762) popup_preview_fixed_window

0x3668,	// (0x00010821) bg_popup_preview_window_pane_cp02

0xc084,	// (0x0001923d) list_preview_fixed_pane

0xc0ca,	// (0x00019283) list_empty_pane_fp_ParamLimits

0xc0ca,	// (0x00019283) list_empty_pane_fp

0xc0ca,	// (0x00019283) list_single_cale_day_pane_fp_ParamLimits

0xc0ca,	// (0x00019283) list_single_cale_day_pane_fp

0xc0ca,	// (0x00019283) list_single_graphic_heading_pane_fp_ParamLimits

0xc0ca,	// (0x00019283) list_single_graphic_heading_pane_fp

0xc0ca,	// (0x00019283) list_single_graphic_pane_fp_ParamLimits

0xc0ca,	// (0x00019283) list_single_graphic_pane_fp

0xc0ca,	// (0x00019283) list_single_heading_pane_fp_ParamLimits

0xc0ca,	// (0x00019283) list_single_heading_pane_fp

0xc0ca,	// (0x00019283) list_single_pane_fp_ParamLimits

0xc0ca,	// (0x00019283) list_single_pane_fp

0xc0e3,	// (0x0001929c) list_single_pane_fp_g1_ParamLimits

0xc0e3,	// (0x0001929c) list_single_pane_fp_g1

0xc03c,	// (0x000191f5) list_single_pane_fp_g2_ParamLimits

0xc03c,	// (0x000191f5) list_single_pane_fp_g2

0xc048,	// (0x00019201) list_single_pane_fp_g3_ParamLimits

0xc048,	// (0x00019201) list_single_pane_fp_g3

0xc0ef,	// (0x000192a8) list_single_pane_fp_g4_ParamLimits

0xc0ef,	// (0x000192a8) list_single_pane_fp_g4

0x0003,

0xfb78,	// (0x0001cd31) list_single_pane_fp_g_ParamLimits

0xfb78,	// (0x0001cd31) list_single_pane_fp_g

0xc0fb,	// (0x000192b4) list_single_pane_fp_t1_ParamLimits

0xc0fb,	// (0x000192b4) list_single_pane_fp_t1

0xc112,	// (0x000192cb) list_single_graphic_pane_fp_g1_ParamLimits

0xc112,	// (0x000192cb) list_single_graphic_pane_fp_g1

0xc0e3,	// (0x0001929c) list_single_graphic_pane_fp_g2_ParamLimits

0xc0e3,	// (0x0001929c) list_single_graphic_pane_fp_g2

0xc03c,	// (0x000191f5) list_single_graphic_pane_fp_g3_ParamLimits

0xc03c,	// (0x000191f5) list_single_graphic_pane_fp_g3

0xc048,	// (0x00019201) list_single_graphic_pane_fp_g4_ParamLimits

0xc048,	// (0x00019201) list_single_graphic_pane_fp_g4

0xc0ef,	// (0x000192a8) list_single_graphic_pane_fp_g5_ParamLimits

0xc0ef,	// (0x000192a8) list_single_graphic_pane_fp_g5

0x0004,

0xfb81,	// (0x0001cd3a) list_single_graphic_pane_fp_g_ParamLimits

0xfb81,	// (0x0001cd3a) list_single_graphic_pane_fp_g

0xc11e,	// (0x000192d7) list_single_graphic_pane_fp_t1_ParamLimits

0xc11e,	// (0x000192d7) list_single_graphic_pane_fp_t1

0xc112,	// (0x000192cb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc112,	// (0x000192cb) list_single_graphic_heading_pane_fp_g1

0xc0e3,	// (0x0001929c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc0e3,	// (0x0001929c) list_single_graphic_heading_pane_fp_g2

0xc03c,	// (0x000191f5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc03c,	// (0x000191f5) list_single_graphic_heading_pane_fp_g3

0xc048,	// (0x00019201) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc048,	// (0x00019201) list_single_graphic_heading_pane_fp_g4

0xc0ef,	// (0x000192a8) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc0ef,	// (0x000192a8) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001cd3a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001cd3a) list_single_graphic_heading_pane_fp_g

0xc134,	// (0x000192ed) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc134,	// (0x000192ed) list_single_graphic_heading_pane_fp_t1

0xc14a,	// (0x00019303) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc14a,	// (0x00019303) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x0001cd45) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x0001cd45) list_single_graphic_heading_pane_fp_t

0xc15c,	// (0x00019315) list_single_cale_day_pane_fp_g1_ParamLimits

0xc15c,	// (0x00019315) list_single_cale_day_pane_fp_g1

0xc194,	// (0x0001934d) list_single_cale_day_pane_fp_g2_ParamLimits

0xc194,	// (0x0001934d) list_single_cale_day_pane_fp_g2

0xc1a0,	// (0x00019359) list_single_cale_day_pane_fp_g3_ParamLimits

0xc1a0,	// (0x00019359) list_single_cale_day_pane_fp_g3

0xc1c8,	// (0x00019381) list_single_cale_day_pane_fp_g4_ParamLimits

0xc1c8,	// (0x00019381) list_single_cale_day_pane_fp_g4

0xc1ec,	// (0x000193a5) list_single_cale_day_pane_fp_g5_ParamLimits

0xc1ec,	// (0x000193a5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb91,	// (0x0001cd4a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb91,	// (0x0001cd4a) list_single_cale_day_pane_fp_g

0xc210,	// (0x000193c9) list_single_cale_day_pane_fp_t1_ParamLimits

0xc210,	// (0x000193c9) list_single_cale_day_pane_fp_t1

0xc236,	// (0x000193ef) list_single_cale_day_pane_fp_t2_ParamLimits

0xc236,	// (0x000193ef) list_single_cale_day_pane_fp_t2

0xc24f,	// (0x00019408) list_single_cale_day_pane_fp_t3_ParamLimits

0xc24f,	// (0x00019408) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9c,	// (0x0001cd55) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9c,	// (0x0001cd55) list_single_cale_day_pane_fp_t

0xc0e3,	// (0x0001929c) list_empty_pane_fp_g1_ParamLimits

0xc0e3,	// (0x0001929c) list_empty_pane_fp_g1

0xc268,	// (0x00019421) list_empty_pane_fp_t1

0xc276,	// (0x0001942f) list_empty_pane_fp_t2

0x0001,

0xfba3,	// (0x0001cd5c) list_empty_pane_fp_t

0xc0e3,	// (0x0001929c) list_single_heading_pane_fp_g1_ParamLimits

0xc0e3,	// (0x0001929c) list_single_heading_pane_fp_g1

0xc03c,	// (0x000191f5) list_single_heading_pane_fp_g2_ParamLimits

0xc03c,	// (0x000191f5) list_single_heading_pane_fp_g2

0xc048,	// (0x00019201) list_single_heading_pane_fp_g3_ParamLimits

0xc048,	// (0x00019201) list_single_heading_pane_fp_g3

0x0002,

0xfba8,	// (0x0001cd61) list_single_heading_pane_fp_g_ParamLimits

0xfba8,	// (0x0001cd61) list_single_heading_pane_fp_g

0xc284,	// (0x0001943d) list_single_heading_pane_fp_t1_ParamLimits

0xc284,	// (0x0001943d) list_single_heading_pane_fp_t1

0xc296,	// (0x0001944f) list_single_heading_pane_fp_t2_ParamLimits

0xc296,	// (0x0001944f) list_single_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0001cd68) list_single_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0001cd68) list_single_heading_pane_fp_t

0x3deb,	// (0x00010fa4) aid_size_cell_fast

0x364b,	// (0x00010804) soft_indicator_pane_cp1_t1

0x3e42,	// (0x00010ffb) cell_app_pane_cp2_ParamLimits

0x3e42,	// (0x00010ffb) cell_app_pane_cp2

0x626f,	// (0x00013428) fep_hwr_candidate_drop_down_list_pane

0x645d,	// (0x00013616) fep_hwr_candidate_pane_g3_ParamLimits

0x645d,	// (0x00013616) fep_hwr_candidate_pane_g3

0x2763,	// (0x0000f91c) fep_hwr_candidate_pane_g4_ParamLimits

0x2763,	// (0x0000f91c) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x0001ccd7) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x0001ccd7) fep_hwr_candidate_pane_g

0xbbb1,	// (0x00018d6a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbbb1,	// (0x00018d6a) fep_vkb_candidate_drop_down_list_pane

0xbfd9,	// (0x00019192) fep_vkb_candidate_pane_g3

0xbfe1,	// (0x0001919a) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0001cd04) fep_vkb_candidate_pane_g

0x64c8,	// (0x00013681) cell_hwr_candidate_pane_g1_ParamLimits

0x64d6,	// (0x0001368f) cell_hwr_candidate_pane_g3_ParamLimits

0x64d6,	// (0x0001368f) cell_hwr_candidate_pane_g3

0xcf1e,	// (0x0001a0d7) cell_hwr_candidate_pane_g4_ParamLimits

0xcf1e,	// (0x0001a0d7) cell_hwr_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0001cd23) cell_hwr_candidate_pane_g_ParamLimits

0xfb6a,	// (0x0001cd23) cell_hwr_candidate_pane_g

0xbff8,	// (0x000191b1) cell_vkb_candidate_pane_g3_ParamLimits

0xbff8,	// (0x000191b1) cell_vkb_candidate_pane_g3

0xc013,	// (0x000191cc) cell_vkb_candidate_pane_g4_ParamLimits

0xc013,	// (0x000191cc) cell_vkb_candidate_pane_g4

0xc2ac,	// (0x00019465) cell_app_pane_cp2_g1_ParamLimits

0xc2ac,	// (0x00019465) cell_app_pane_cp2_g1

0xc2ca,	// (0x00019483) cell_app_pane_cp2_g2_ParamLimits

0xc2ca,	// (0x00019483) cell_app_pane_cp2_g2

0x0001,

0xfbb4,	// (0x0001cd6d) cell_app_pane_cp2_g_ParamLimits

0xfbb4,	// (0x0001cd6d) cell_app_pane_cp2_g

0xc2d6,	// (0x0001948f) cell_app_pane_cp2_t1_ParamLimits

0xc2d6,	// (0x0001948f) cell_app_pane_cp2_t1

0x3be8,	// (0x00010da1) grid_highlight_pane_cp1_ParamLimits

0x3be8,	// (0x00010da1) grid_highlight_pane_cp1

0x6515,	// (0x000136ce) cell_hwr_candidate_pane_cp1_ParamLimits

0x6515,	// (0x000136ce) cell_hwr_candidate_pane_cp1

0x64c8,	// (0x00013681) fep_hwr_candidate_drop_down_list_pane_g1

0x6539,	// (0x000136f2) fep_hwr_candidate_drop_down_list_pane_g2

0x6546,	// (0x000136ff) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001cd72) fep_hwr_candidate_drop_down_list_pane_g

0x6553,	// (0x0001370c) fep_hwr_candidate_drop_down_list_scroll_pane

0x655c,	// (0x00013715) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x655c,	// (0x00013715) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6569,	// (0x00013722) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6569,	// (0x00013722) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6576,	// (0x0001372f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6576,	// (0x0001372f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6583,	// (0x0001373c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6583,	// (0x0001373c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x659e,	// (0x00013757) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x659e,	// (0x00013757) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x65b9,	// (0x00013772) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x65b9,	// (0x00013772) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x65d4,	// (0x0001378d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x65d4,	// (0x0001378d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x65ef,	// (0x000137a8) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x65ef,	// (0x000137a8) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001cd79) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001cd79) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc2e8,	// (0x000194a1) cell_vkb_candidate_pane_cp1_ParamLimits

0xc2e8,	// (0x000194a1) cell_vkb_candidate_pane_cp1

0xbcb7,	// (0x00018e70) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbcb7,	// (0x00018e70) fep_vkb_candidate_drop_down_list_pane_g1

0xc30e,	// (0x000194c7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc30e,	// (0x000194c7) fep_vkb_candidate_drop_down_list_pane_g2

0xc31b,	// (0x000194d4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc31b,	// (0x000194d4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd1,	// (0x0001cd8a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd1,	// (0x0001cd8a) fep_vkb_candidate_drop_down_list_pane_g

0xc328,	// (0x000194e1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc328,	// (0x000194e1) fep_vkb_candidate_drop_down_list_scroll_pane

0xc335,	// (0x000194ee) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc335,	// (0x000194ee) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc342,	// (0x000194fb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc342,	// (0x000194fb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc34e,	// (0x00019507) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc34e,	// (0x00019507) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc35a,	// (0x00019513) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc35a,	// (0x00019513) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc37b,	// (0x00019534) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc37b,	// (0x00019534) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc39c,	// (0x00019555) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc39c,	// (0x00019555) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc3bd,	// (0x00019576) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc3bd,	// (0x00019576) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc3de,	// (0x00019597) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc3de,	// (0x00019597) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd8,	// (0x0001cd91) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd8,	// (0x0001cd91) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x72d5,	// (0x0001448e) title_pane_g1_ParamLimits

0x72e2,	// (0x0001449b) title_pane_g2_ParamLimits

0xf54e,	// (0x0001c707) title_pane_g_ParamLimits

0x433a,	// (0x000114f3) aid_call2_pane

0x4332,	// (0x000114eb) aid_call_pane

0x4342,	// (0x000114fb) popup_clock_analogue_window_g1

0x4342,	// (0x000114fb) popup_clock_analogue_window_g2

0x5926,	// (0x00012adf) popup_clock_analogue_window_g3

0x592f,	// (0x00012ae8) popup_clock_analogue_window_g4

0x3253,	// (0x0001040c) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001c8ac) popup_clock_analogue_window_g

0x5937,	// (0x00012af0) popup_clock_analogue_window_t1

0x5945,	// (0x00012afe) clock_digital_number_pane_ParamLimits

0x5945,	// (0x00012afe) clock_digital_number_pane

0x5951,	// (0x00012b0a) clock_digital_number_pane_cp02_ParamLimits

0x5951,	// (0x00012b0a) clock_digital_number_pane_cp02

0x595d,	// (0x00012b16) clock_digital_number_pane_cp03_ParamLimits

0x595d,	// (0x00012b16) clock_digital_number_pane_cp03

0x5969,	// (0x00012b22) clock_digital_number_pane_cp04_ParamLimits

0x5969,	// (0x00012b22) clock_digital_number_pane_cp04

0x5975,	// (0x00012b2e) clock_digital_separator_pane_ParamLimits

0x5975,	// (0x00012b2e) clock_digital_separator_pane

0x5981,	// (0x00012b3a) popup_clock_digital_window_t1_ParamLimits

0x5981,	// (0x00012b3a) popup_clock_digital_window_t1

0x3253,	// (0x0001040c) clock_digital_number_pane_g1

0x3253,	// (0x0001040c) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001c8b7) clock_digital_number_pane_g

0x3253,	// (0x0001040c) clock_digital_separator_pane_g1

0x3253,	// (0x0001040c) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001c8b7) clock_digital_separator_pane_g

0x89ca,	// (0x00015b83) aid_fill_nsta_ParamLimits

0x8b1a,	// (0x00015cd3) indicator_nsta_pane_ParamLimits

0x8cab,	// (0x00015e64) popup_clock_analogue_window

0x8cab,	// (0x00015e64) popup_clock_digital_window

0x3492,	// (0x0001064b) grid_indicator_nsta_pane_ParamLimits

0xb419,	// (0x000185d2) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x0001cc57) clock_nsta_pane_t

0x58ea,	// (0x00012aa3) aid_size_max_handle

0x58f4,	// (0x00012aad) aid_size_min_handle

0x8005,	// (0x000151be) editor_scroll_pane

0xc3f9,	// (0x000195b2) ex_editor_pane

0x3db1,	// (0x00010f6a) scroll_pane_cp13

0x3ae9,	// (0x00010ca2) scroll_pane_cp14

0x4390,	// (0x00011549) scroll_pane_cp36

0x7d0f,	// (0x00014ec8) list_single_graphic_hl_pane_cp2_ParamLimits

0x7d0f,	// (0x00014ec8) list_single_graphic_hl_pane_cp2

0xa672,	// (0x0001782b) list_single_graphic_hl_pane_ParamLimits

0xa672,	// (0x0001782b) list_single_graphic_hl_pane

0xc401,	// (0x000195ba) aid_size_min_hl_cp1

0xc40a,	// (0x000195c3) list_highlight_pane_cp34_ParamLimits

0xc40a,	// (0x000195c3) list_highlight_pane_cp34

0xc41b,	// (0x000195d4) list_single_graphic_hl_pane_g1_ParamLimits

0xc41b,	// (0x000195d4) list_single_graphic_hl_pane_g1

0xc428,	// (0x000195e1) list_single_graphic_hl_pane_g2_ParamLimits

0xc428,	// (0x000195e1) list_single_graphic_hl_pane_g2

0xc428,	// (0x000195e1) list_single_graphic_hl_pane_g3_ParamLimits

0xc428,	// (0x000195e1) list_single_graphic_hl_pane_g3

0xabc5,	// (0x00017d7e) list_single_graphic_hl_pane_g4_ParamLimits

0xabc5,	// (0x00017d7e) list_single_graphic_hl_pane_g4

0xc434,	// (0x000195ed) list_single_graphic_hl_pane_g5_ParamLimits

0xc434,	// (0x000195ed) list_single_graphic_hl_pane_g5

0x0004,

0xfbe9,	// (0x0001cda2) list_single_graphic_hl_pane_g_ParamLimits

0xfbe9,	// (0x0001cda2) list_single_graphic_hl_pane_g

0xc448,	// (0x00019601) list_single_graphic_hl_pane_t1_ParamLimits

0xc448,	// (0x00019601) list_single_graphic_hl_pane_t1

0xc45e,	// (0x00019617) aid_size_min_hl_cp2

0xc467,	// (0x00019620) list_highlight_pane_cp34_cp2_ParamLimits

0xc467,	// (0x00019620) list_highlight_pane_cp34_cp2

0xc41b,	// (0x000195d4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc41b,	// (0x000195d4) list_single_graphic_hl_pane_g1_cp2

0xc474,	// (0x0001962d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc474,	// (0x0001962d) list_single_graphic_hl_pane_g2_cp2

0xc480,	// (0x00019639) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc480,	// (0x00019639) list_single_graphic_hl_pane_g3_cp2

0x3afd,	// (0x00010cb6) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3afd,	// (0x00010cb6) list_single_graphic_hl_pane_g4_cp2

0xc48e,	// (0x00019647) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc48e,	// (0x00019647) list_single_graphic_hl_pane_g5_cp2

0x5c3a,	// (0x00012df3) control_pane_g4_ParamLimits

0x5c3a,	// (0x00012df3) control_pane_g4

0x838b,	// (0x00015544) bg_popup_sub_pane_cp10_ParamLimits

0xba46,	// (0x00018bff) list_choice_list_pane_ParamLimits

0xba55,	// (0x00018c0e) scroll_pane_cp23

0x3668,	// (0x00010821) bg_popup_preview_window_pane_cp02_ParamLimits

0xc084,	// (0x0001923d) list_preview_fixed_pane_ParamLimits

0xc09a,	// (0x00019253) list_preview_fixed_pane_cp_ParamLimits

0xc09a,	// (0x00019253) list_preview_fixed_pane_cp

0xc0a6,	// (0x0001925f) popup_preview_fixed_window_g1_ParamLimits

0xc0a6,	// (0x0001925f) popup_preview_fixed_window_g1

0xc0b2,	// (0x0001926b) popup_preview_fixed_window_g2_ParamLimits

0xc0b2,	// (0x0001926b) popup_preview_fixed_window_g2

0x0002,

0xfb71,	// (0x0001cd2a) popup_preview_fixed_window_g_ParamLimits

0xfb71,	// (0x0001cd2a) popup_preview_fixed_window_g

0x585c,	// (0x00012a15) aid_navi_side_left_pane_ParamLimits

0x5871,	// (0x00012a2a) aid_navi_side_right_pane_ParamLimits

0x5889,	// (0x00012a42) navi_icon_pane_stacon_ParamLimits

0x589d,	// (0x00012a56) navi_navi_pane_stacon_ParamLimits

0x5889,	// (0x00012a42) navi_text_pane_stacon_ParamLimits

0x3249,	// (0x00010402) main_text_info_pane

0xc4b8,	// (0x00019671) listscroll_text_info_pane

0xc4c0,	// (0x00019679) list_text_info_pane_ParamLimits

0xc4c0,	// (0x00019679) list_text_info_pane

0xc4cf,	// (0x00019688) scroll_pane_cp24_ParamLimits

0xc4cf,	// (0x00019688) scroll_pane_cp24

0xc4ed,	// (0x000196a6) list_text_info_pane_t1_ParamLimits

0xc4ed,	// (0x000196a6) list_text_info_pane_t1

0x83dd,	// (0x00015596) popup_fast_swap2_window_ParamLimits

0x83dd,	// (0x00015596) popup_fast_swap2_window

0xc512,	// (0x000196cb) aid_size_cell_fast2

0x3249,	// (0x00010402) bg_popup_window_pane_cp17

0x9417,	// (0x000165d0) heading_pane_cp2

0x386e,	// (0x00010a27) listscroll_fast2_pane

0xc51c,	// (0x000196d5) grid_fast2_pane

0xc526,	// (0x000196df) listscroll_fast2_pane_g1

0xc530,	// (0x000196e9) listscroll_fast2_pane_g2

0x0001,

0xfbf4,	// (0x0001cdad) listscroll_fast2_pane_g

0x3db1,	// (0x00010f6a) scroll_pane_cp26

0xc53a,	// (0x000196f3) cell_fast2_pane_ParamLimits

0xc53a,	// (0x000196f3) cell_fast2_pane

0xc551,	// (0x0001970a) cell_fast2_pane_g1

0xc55a,	// (0x00019713) cell_fast2_pane_g2

0xc563,	// (0x0001971c) cell_fast2_pane_g3

0x0002,

0xfbf9,	// (0x0001cdb2) cell_fast2_pane_g

0x38b0,	// (0x00010a69) grid_highlight_pane_cp9

0x38c5,	// (0x00010a7e) main_eswt_pane_ParamLimits

0x38c5,	// (0x00010a7e) main_eswt_pane

0xc4e4,	// (0x0001969d) list_single_text_info_pane

0xc56b,	// (0x00019724) eswt_ctrl_button_pane

0xc56b,	// (0x00019724) eswt_ctrl_canvas_pane

0xc573,	// (0x0001972c) eswt_ctrl_combo_pane

0xc56b,	// (0x00019724) eswt_ctrl_default_pane

0xc56b,	// (0x00019724) eswt_ctrl_label_pane

0xc57b,	// (0x00019734) eswt_ctrl_wait_pane

0xc583,	// (0x0001973c) eswt_shell_pane

0x3249,	// (0x00010402) listscroll_eswt_app_pane

0xc5a3,	// (0x0001975c) popup_eswt_tasktip_window_ParamLimits

0xc5a3,	// (0x0001975c) popup_eswt_tasktip_window

0x9028,	// (0x000161e1) bg_popup_window_pane_cp18

0xc5b4,	// (0x0001976d) eswt_control_pane_g1_ParamLimits

0xc5b4,	// (0x0001976d) eswt_control_pane_g1

0xc5c1,	// (0x0001977a) eswt_control_pane_g2_ParamLimits

0xc5c1,	// (0x0001977a) eswt_control_pane_g2

0xc5ce,	// (0x00019787) eswt_control_pane_g3_ParamLimits

0xc5ce,	// (0x00019787) eswt_control_pane_g3

0xc5db,	// (0x00019794) eswt_control_pane_g4_ParamLimits

0xc5db,	// (0x00019794) eswt_control_pane_g4

0x0003,

0xfc00,	// (0x0001cdb9) eswt_control_pane_g_ParamLimits

0xfc00,	// (0x0001cdb9) eswt_control_pane_g

0x3be8,	// (0x00010da1) bg_button_pane_ParamLimits

0x3be8,	// (0x00010da1) bg_button_pane

0x38c5,	// (0x00010a7e) common_borders_pane_copy2_ParamLimits

0x38c5,	// (0x00010a7e) common_borders_pane_copy2

0xc5e8,	// (0x000197a1) control_button_pane_g1_ParamLimits

0xc5e8,	// (0x000197a1) control_button_pane_g1

0xc5f4,	// (0x000197ad) control_button_pane_g2_ParamLimits

0xc5f4,	// (0x000197ad) control_button_pane_g2

0xc600,	// (0x000197b9) control_button_pane_g3_ParamLimits

0xc600,	// (0x000197b9) control_button_pane_g3

0x0002,

0xfc09,	// (0x0001cdc2) control_button_pane_g_ParamLimits

0xfc09,	// (0x0001cdc2) control_button_pane_g

0xc614,	// (0x000197cd) control_button_pane_t1

0xc622,	// (0x000197db) control_button_pane_t2

0x0001,

0xfc10,	// (0x0001cdc9) control_button_pane_t

0x8f02,	// (0x000160bb) bg_button_pane_g1

0x8f12,	// (0x000160cb) bg_button_pane_g2

0x8f0a,	// (0x000160c3) bg_button_pane_g3

0x8f22,	// (0x000160db) bg_button_pane_g4

0x8f1a,	// (0x000160d3) bg_button_pane_g5

0x8f2a,	// (0x000160e3) bg_button_pane_g6

0x8f32,	// (0x000160eb) bg_button_pane_g7

0x8f42,	// (0x000160fb) bg_button_pane_g8

0x8f3a,	// (0x000160f3) bg_button_pane_g9

0x0008,

0xf861,	// (0x0001ca1a) bg_button_pane_g

0xba01,	// (0x00018bba) common_borders_pane_ParamLimits

0xba01,	// (0x00018bba) common_borders_pane

0xc5b4,	// (0x0001976d) eswt_control_pane_g1_copy1_ParamLimits

0xc5b4,	// (0x0001976d) eswt_control_pane_g1_copy1

0xc5c1,	// (0x0001977a) eswt_control_pane_g2_copy1_ParamLimits

0xc5c1,	// (0x0001977a) eswt_control_pane_g2_copy1

0xc5ce,	// (0x00019787) eswt_control_pane_g3_copy1_ParamLimits

0xc5ce,	// (0x00019787) eswt_control_pane_g3_copy1

0xc5db,	// (0x00019794) eswt_control_pane_g4_copy1_ParamLimits

0xc5db,	// (0x00019794) eswt_control_pane_g4_copy1

0xba3c,	// (0x00018bf5) bg_eswt_ctrl_canvas_pane_g1

0xba01,	// (0x00018bba) common_borders_pane_cp2_ParamLimits

0xba01,	// (0x00018bba) common_borders_pane_cp2

0xba01,	// (0x00018bba) common_borders_pane_cp3_ParamLimits

0xba01,	// (0x00018bba) common_borders_pane_cp3

0xc630,	// (0x000197e9) separator_horizontal_pane

0xc638,	// (0x000197f1) separator_vertical_pane

0xc5b4,	// (0x0001976d) eswt_control_pane_g1_copy2_ParamLimits

0xc5b4,	// (0x0001976d) eswt_control_pane_g1_copy2

0xc5c1,	// (0x0001977a) eswt_control_pane_g2_copy2_ParamLimits

0xc5c1,	// (0x0001977a) eswt_control_pane_g2_copy2

0xc5ce,	// (0x00019787) eswt_control_pane_g3_copy2_ParamLimits

0xc5ce,	// (0x00019787) eswt_control_pane_g3_copy2

0xc5db,	// (0x00019794) eswt_control_pane_g4_copy2_ParamLimits

0xc5db,	// (0x00019794) eswt_control_pane_g4_copy2

0x3249,	// (0x00010402) common_borders_pane_cp4

0xc641,	// (0x000197fa) separator_horizontal_pane_g1

0xc64a,	// (0x00019803) separator_horizontal_pane_g2

0xc653,	// (0x0001980c) separator_horizontal_pane_g3

0x0002,

0xfc15,	// (0x0001cdce) separator_horizontal_pane_g

0xc5b4,	// (0x0001976d) eswt_control_pane_g1_copy3_ParamLimits

0xc5b4,	// (0x0001976d) eswt_control_pane_g1_copy3

0xc5c1,	// (0x0001977a) eswt_control_pane_g2_copy3_ParamLimits

0xc5c1,	// (0x0001977a) eswt_control_pane_g2_copy3

0xc5ce,	// (0x00019787) eswt_control_pane_g3_copy3_ParamLimits

0xc5ce,	// (0x00019787) eswt_control_pane_g3_copy3

0xc5db,	// (0x00019794) eswt_control_pane_g4_copy3_ParamLimits

0xc5db,	// (0x00019794) eswt_control_pane_g4_copy3

0x3249,	// (0x00010402) common_borders_pane_cp5

0xc65c,	// (0x00019815) separator_vertical_pane_g1

0xc665,	// (0x0001981e) separator_vertical_pane_g2

0xc66e,	// (0x00019827) separator_vertical_pane_g3

0x0002,

0xfc1c,	// (0x0001cdd5) separator_vertical_pane_g

0xc5b4,	// (0x0001976d) eswt_control_pane_g1_copy4_ParamLimits

0xc5b4,	// (0x0001976d) eswt_control_pane_g1_copy4

0xc5c1,	// (0x0001977a) eswt_control_pane_g2_copy4_ParamLimits

0xc5c1,	// (0x0001977a) eswt_control_pane_g2_copy4

0xc5ce,	// (0x00019787) eswt_control_pane_g3_copy4_ParamLimits

0xc5ce,	// (0x00019787) eswt_control_pane_g3_copy4

0xc5db,	// (0x00019794) eswt_control_pane_g4_copy4_ParamLimits

0xc5db,	// (0x00019794) eswt_control_pane_g4_copy4

0xc677,	// (0x00019830) eswt_ctrl_combo_button_pane

0xc67f,	// (0x00019838) eswt_ctrl_input_pane

0xc687,	// (0x00019840) popup_choice_list_window_cp70

0xc68f,	// (0x00019848) eswt_ctrl_input_pane_t1

0x3249,	// (0x00010402) input_focus_pane_cp70

0xba01,	// (0x00018bba) bg_button_pane_cp70_ParamLimits

0xba01,	// (0x00018bba) bg_button_pane_cp70

0xc69d,	// (0x00019856) eswt_ctrl_combo_button_pane_g1

0xc6a5,	// (0x0001985e) wait_bar_pane_cp70

0x9028,	// (0x000161e1) bg_popup_window_pane_cp70_ParamLimits

0x9028,	// (0x000161e1) bg_popup_window_pane_cp70

0xc6ad,	// (0x00019866) popup_eswt_tasktip_window_t1

0xc6c3,	// (0x0001987c) wait_bar_pane_cp71_ParamLimits

0xc6c3,	// (0x0001987c) wait_bar_pane_cp71

0xc6cf,	// (0x00019888) grid_eswt_app_pane

0x41da,	// (0x00011393) scroll_pane_cp70

0xc6d8,	// (0x00019891) cell_eswt_app_pane_ParamLimits

0xc6d8,	// (0x00019891) cell_eswt_app_pane

0xc70a,	// (0x000198c3) cell_eswt_app_pane_g1_ParamLimits

0xc70a,	// (0x000198c3) cell_eswt_app_pane_g1

0xc739,	// (0x000198f2) cell_eswt_app_pane_g2_ParamLimits

0xc739,	// (0x000198f2) cell_eswt_app_pane_g2

0x0001,

0xfc23,	// (0x0001cddc) cell_eswt_app_pane_g_ParamLimits

0xfc23,	// (0x0001cddc) cell_eswt_app_pane_g

0xc762,	// (0x0001991b) cell_eswt_app_pane_t1_ParamLimits

0xc762,	// (0x0001991b) cell_eswt_app_pane_t1

0xc794,	// (0x0001994d) grid_highlight_pane_cp70_ParamLimits

0xc794,	// (0x0001994d) grid_highlight_pane_cp70

0x48c7,	// (0x00011a80) set_content_pane_g1

0x82a6,	// (0x0001545f) status_small_volume_pane

0x660a,	// (0x000137c3) status_small_volume_pane_g1

0x6612,	// (0x000137cb) volume_small2_pane

0x661b,	// (0x000137d4) volume_small2_pane_g1

0x6624,	// (0x000137dd) volume_small2_pane_g2

0x662d,	// (0x000137e6) volume_small2_pane_g3

0x6636,	// (0x000137ef) volume_small2_pane_g4

0x663f,	// (0x000137f8) volume_small2_pane_g5

0x6648,	// (0x00013801) volume_small2_pane_g6

0x6651,	// (0x0001380a) volume_small2_pane_g7

0x665a,	// (0x00013813) volume_small2_pane_g8

0x6663,	// (0x0001381c) volume_small2_pane_g9

0x666c,	// (0x00013825) volume_small2_pane_g10

0x0009,

0xfc28,	// (0x0001cde1) volume_small2_pane_g

0xbe0b,	// (0x00018fc4) fep_vkb_top_text_pane_g1_ParamLimits

0xbe26,	// (0x00018fdf) fep_vkb_top_text_pane_t1_ParamLimits

0xc0be,	// (0x00019277) popup_preview_fixed_window_g3_ParamLimits

0xc0be,	// (0x00019277) popup_preview_fixed_window_g3

0x88ee,	// (0x00015aa7) popup_toolbar_trans_pane

0xa3c3,	// (0x0001757c) aid_height_set_list_ParamLimits

0xa3d4,	// (0x0001758d) aid_size_parent_ParamLimits

0x838b,	// (0x00015544) list_highlight_pane_cp2_ParamLimits

0x48c7,	// (0x00011a80) set_content_pane_g1_ParamLimits

0xa686,	// (0x0001783f) list_single_image_pane_ParamLimits

0xa686,	// (0x0001783f) list_single_image_pane

0xc7a0,	// (0x00019959) aid_size_cell_image_ParamLimits

0xc7a0,	// (0x00019959) aid_size_cell_image

0xc7ad,	// (0x00019966) grid_single_image_pane_ParamLimits

0xc7ad,	// (0x00019966) grid_single_image_pane

0x3c13,	// (0x00010dcc) list_single_image_pane_g1_ParamLimits

0x3c13,	// (0x00010dcc) list_single_image_pane_g1

0x3c1f,	// (0x00010dd8) list_single_image_pane_g2_ParamLimits

0x3c1f,	// (0x00010dd8) list_single_image_pane_g2

0x0001,

0xfc3d,	// (0x0001cdf6) list_single_image_pane_g_ParamLimits

0xfc3d,	// (0x0001cdf6) list_single_image_pane_g

0xc7bb,	// (0x00019974) list_single_image_pane_t1_ParamLimits

0xc7bb,	// (0x00019974) list_single_image_pane_t1

0xc7d1,	// (0x0001998a) cell_image_list_pane_ParamLimits

0xc7d1,	// (0x0001998a) cell_image_list_pane

0xc7e7,	// (0x000199a0) cell_image_list_pane_g1

0xc7f0,	// (0x000199a9) cell_image_list_pane_g2

0x0001,

0xfc42,	// (0x0001cdfb) cell_image_list_pane_g

0xc7f9,	// (0x000199b2) aid_size_cell_tb_trans_pane

0x3be8,	// (0x00010da1) bg_tb_trans_pane

0xc80b,	// (0x000199c4) grid_tb_trans_pane

0x8f02,	// (0x000160bb) bg_tb_trans_pane_g1

0x8f12,	// (0x000160cb) bg_tb_trans_pane_g2

0x8f0a,	// (0x000160c3) bg_tb_trans_pane_g3

0x8f22,	// (0x000160db) bg_tb_trans_pane_g4

0x8f1a,	// (0x000160d3) bg_tb_trans_pane_g5

0x8f42,	// (0x000160fb) bg_tb_trans_pane_g6

0x8f3a,	// (0x000160f3) bg_tb_trans_pane_g7

0x8f2a,	// (0x000160e3) bg_tb_trans_pane_g8

0x8f32,	// (0x000160eb) bg_tb_trans_pane_g9

0x0008,

0xfc47,	// (0x0001ce00) bg_tb_trans_pane_g

0xc81f,	// (0x000199d8) cell_toolbar_trans_pane_ParamLimits

0xc81f,	// (0x000199d8) cell_toolbar_trans_pane

0xba3c,	// (0x00018bf5) cell_toolbar_trans_pane_g1

0xb60a,	// (0x000187c3) list_form2_midp_pane_t1

0xb618,	// (0x000187d1) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x0001cc9d) list_form2_midp_pane_t

0xb626,	// (0x000187df) scroll_pane_cp51_ParamLimits

0xb843,	// (0x000189fc) form2_midp_wait_pane_g1

0xb84c,	// (0x00018a05) form2_midp_wait_pane_g2

0xb855,	// (0x00018a0e) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x0001ccb2) form2_midp_wait_pane_g

0x3492,	// (0x0001064b) list_highlight_pane_cp21_ParamLimits

0xb899,	// (0x00018a52) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb8a8,	// (0x00018a61) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa62b,	// (0x000177e4) list_single_2graphic_im_pane_ParamLimits

0xa62b,	// (0x000177e4) list_single_2graphic_im_pane

0xc845,	// (0x000199fe) list_single_2graphic_im_pane_g1_ParamLimits

0xc845,	// (0x000199fe) list_single_2graphic_im_pane_g1

0xc856,	// (0x00019a0f) list_single_2graphic_im_pane_g2_ParamLimits

0xc856,	// (0x00019a0f) list_single_2graphic_im_pane_g2

0xc862,	// (0x00019a1b) list_single_2graphic_im_pane_g3_ParamLimits

0xc862,	// (0x00019a1b) list_single_2graphic_im_pane_g3

0x0003,

0xfc5a,	// (0x0001ce13) list_single_2graphic_im_pane_g_ParamLimits

0xfc5a,	// (0x0001ce13) list_single_2graphic_im_pane_g

0xc882,	// (0x00019a3b) list_single_2graphic_im_pane_t1_ParamLimits

0xc882,	// (0x00019a3b) list_single_2graphic_im_pane_t1

0xc0ca,	// (0x00019283) list_single_graphic_2heading_pane_fp_ParamLimits

0xc0ca,	// (0x00019283) list_single_graphic_2heading_pane_fp

0xc112,	// (0x000192cb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc112,	// (0x000192cb) list_single_graphic_2heading_pane_fp_g1

0xc0e3,	// (0x0001929c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc0e3,	// (0x0001929c) list_single_graphic_2heading_pane_fp_g2

0xc03c,	// (0x000191f5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc03c,	// (0x000191f5) list_single_graphic_2heading_pane_fp_g3

0xc048,	// (0x00019201) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc048,	// (0x00019201) list_single_graphic_2heading_pane_fp_g4

0xc0ef,	// (0x000192a8) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc0ef,	// (0x000192a8) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001cd3a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001cd3a) list_single_graphic_2heading_pane_fp_g

0xc8b3,	// (0x00019a6c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc8b3,	// (0x00019a6c) list_single_graphic_2heading_pane_fp_t1

0xc14a,	// (0x00019303) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc14a,	// (0x00019303) list_single_graphic_2heading_pane_fp_t2

0xc8c9,	// (0x00019a82) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc8c9,	// (0x00019a82) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc63,	// (0x0001ce1c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc63,	// (0x0001ce1c) list_single_graphic_2heading_pane_fp_t

0xbacd,	// (0x00018c86) fep_hwr_write_pane_g5_ParamLimits

0xbacd,	// (0x00018c86) fep_hwr_write_pane_g5

0xbad9,	// (0x00018c92) fep_hwr_write_pane_g6_ParamLimits

0xbad9,	// (0x00018c92) fep_hwr_write_pane_g6

0xc583,	// (0x0001973c) eswt_shell_pane_ParamLimits

0x9028,	// (0x000161e1) bg_popup_window_pane_cp18_ParamLimits

0xa2f2,	// (0x000174ab) heading_pane_cp70

0xc6ad,	// (0x00019866) popup_eswt_tasktip_window_t1_ParamLimits

0x8a21,	// (0x00015bda) aid_touch_tab_arrow_left

0x8a30,	// (0x00015be9) aid_touch_tab_arrow_right

0x342a,	// (0x000105e3) title_pane_g3_ParamLimits

0x342a,	// (0x000105e3) title_pane_g3

0x3b42,	// (0x00010cfb) set_value_pane_g1

0x88ee,	// (0x00015aa7) popup_toolbar_trans_pane_ParamLimits

0xc7f9,	// (0x000199b2) aid_size_cell_tb_trans_pane_ParamLimits

0x3be8,	// (0x00010da1) bg_tb_trans_pane_ParamLimits

0xc80b,	// (0x000199c4) grid_tb_trans_pane_ParamLimits

0x3668,	// (0x00010821) cont_note_pane_ParamLimits

0x3668,	// (0x00010821) cont_note_pane

0x38c5,	// (0x00010a7e) cont_snote2_single_text_pane_ParamLimits

0x38c5,	// (0x00010a7e) cont_snote2_single_text_pane

0x38c5,	// (0x00010a7e) cont_snote2_single_graphic_pane_ParamLimits

0x38c5,	// (0x00010a7e) cont_snote2_single_graphic_pane

0x9633,	// (0x000167ec) cont_note_wait_pane_ParamLimits

0x9633,	// (0x000167ec) cont_note_wait_pane

0x9633,	// (0x000167ec) cont_note_image_pane_ParamLimits

0x9633,	// (0x000167ec) cont_note_image_pane

0xc8df,	// (0x00019a98) popup_note2_window_g1_ParamLimits

0xc8df,	// (0x00019a98) popup_note2_window_g1

0xc910,	// (0x00019ac9) popup_note2_window_t1_ParamLimits

0xc910,	// (0x00019ac9) popup_note2_window_t1

0xc955,	// (0x00019b0e) popup_note2_window_t2_ParamLimits

0xc955,	// (0x00019b0e) popup_note2_window_t2

0xc99a,	// (0x00019b53) popup_note2_window_t3_ParamLimits

0xc99a,	// (0x00019b53) popup_note2_window_t3

0xc9df,	// (0x00019b98) popup_note2_window_t4_ParamLimits

0xc9df,	// (0x00019b98) popup_note2_window_t4

0x36ec,	// (0x000108a5) popup_note2_window_t5_ParamLimits

0x36ec,	// (0x000108a5) popup_note2_window_t5

0x0004,

0xfc6f,	// (0x0001ce28) popup_note2_window_t_ParamLimits

0xfc6f,	// (0x0001ce28) popup_note2_window_t

0xca0e,	// (0x00019bc7) popup_note2_image_window_g1_ParamLimits

0xca0e,	// (0x00019bc7) popup_note2_image_window_g1

0xca1a,	// (0x00019bd3) popup_note2_image_window_g2_ParamLimits

0xca1a,	// (0x00019bd3) popup_note2_image_window_g2

0x0001,

0xfc7a,	// (0x0001ce33) popup_note2_image_window_g_ParamLimits

0xfc7a,	// (0x0001ce33) popup_note2_image_window_g

0xca2c,	// (0x00019be5) popup_note2_image_window_t1_ParamLimits

0xca2c,	// (0x00019be5) popup_note2_image_window_t1

0xca44,	// (0x00019bfd) popup_note2_image_window_t2_ParamLimits

0xca44,	// (0x00019bfd) popup_note2_image_window_t2

0xca5c,	// (0x00019c15) popup_note2_image_window_t3_ParamLimits

0xca5c,	// (0x00019c15) popup_note2_image_window_t3

0x0002,

0xfc7f,	// (0x0001ce38) popup_note2_image_window_t_ParamLimits

0xfc7f,	// (0x0001ce38) popup_note2_image_window_t

0x9641,	// (0x000167fa) popup_note2_wait_window_g1_ParamLimits

0x9641,	// (0x000167fa) popup_note2_wait_window_g1

0xca78,	// (0x00019c31) popup_note2_wait_window_g2_ParamLimits

0xca78,	// (0x00019c31) popup_note2_wait_window_g2

0x9659,	// (0x00016812) popup_note2_wait_window_g3_ParamLimits

0x9659,	// (0x00016812) popup_note2_wait_window_g3

0x0002,

0xfc86,	// (0x0001ce3f) popup_note2_wait_window_g_ParamLimits

0xfc86,	// (0x0001ce3f) popup_note2_wait_window_g

0xca84,	// (0x00019c3d) popup_note2_wait_window_t1_ParamLimits

0xca84,	// (0x00019c3d) popup_note2_wait_window_t1

0xcaa2,	// (0x00019c5b) popup_note2_wait_window_t2_ParamLimits

0xcaa2,	// (0x00019c5b) popup_note2_wait_window_t2

0xcac0,	// (0x00019c79) popup_note2_wait_window_t3_ParamLimits

0xcac0,	// (0x00019c79) popup_note2_wait_window_t3

0xcad2,	// (0x00019c8b) popup_note2_wait_window_t4_ParamLimits

0xcad2,	// (0x00019c8b) popup_note2_wait_window_t4

0x0003,

0xfc8d,	// (0x0001ce46) popup_note2_wait_window_t_ParamLimits

0xfc8d,	// (0x0001ce46) popup_note2_wait_window_t

0xcae4,	// (0x00019c9d) wait_bar2_pane_ParamLimits

0xcae4,	// (0x00019c9d) wait_bar2_pane

0xcafc,	// (0x00019cb5) popup_snote2_single_text_window_g1_ParamLimits

0xcafc,	// (0x00019cb5) popup_snote2_single_text_window_g1

0xcb24,	// (0x00019cdd) popup_snote2_single_text_window_t1_ParamLimits

0xcb24,	// (0x00019cdd) popup_snote2_single_text_window_t1

0xcb70,	// (0x00019d29) popup_snote2_single_text_window_t2_ParamLimits

0xcb70,	// (0x00019d29) popup_snote2_single_text_window_t2

0xcbbc,	// (0x00019d75) popup_snote2_single_text_window_t3_ParamLimits

0xcbbc,	// (0x00019d75) popup_snote2_single_text_window_t3

0xcbfd,	// (0x00019db6) popup_snote2_single_text_window_t4_ParamLimits

0xcbfd,	// (0x00019db6) popup_snote2_single_text_window_t4

0xcc33,	// (0x00019dec) popup_snote2_single_text_window_t5_ParamLimits

0xcc33,	// (0x00019dec) popup_snote2_single_text_window_t5

0x0004,

0xfc96,	// (0x0001ce4f) popup_snote2_single_text_window_t_ParamLimits

0xfc96,	// (0x0001ce4f) popup_snote2_single_text_window_t

0xcc5e,	// (0x00019e17) popup_snote2_single_graphic_window_g1_ParamLimits

0xcc5e,	// (0x00019e17) popup_snote2_single_graphic_window_g1

0xcc86,	// (0x00019e3f) popup_snote2_single_graphic_window_g2_ParamLimits

0xcc86,	// (0x00019e3f) popup_snote2_single_graphic_window_g2

0x0001,

0xfca1,	// (0x0001ce5a) popup_snote2_single_graphic_window_g_ParamLimits

0xfca1,	// (0x0001ce5a) popup_snote2_single_graphic_window_g

0xccae,	// (0x00019e67) popup_snote2_single_graphic_window_t1_ParamLimits

0xccae,	// (0x00019e67) popup_snote2_single_graphic_window_t1

0xccfa,	// (0x00019eb3) popup_snote2_single_graphic_window_t2_ParamLimits

0xccfa,	// (0x00019eb3) popup_snote2_single_graphic_window_t2

0xcbbc,	// (0x00019d75) popup_snote2_single_graphic_window_t3_ParamLimits

0xcbbc,	// (0x00019d75) popup_snote2_single_graphic_window_t3

0xcbfd,	// (0x00019db6) popup_snote2_single_graphic_window_t4_ParamLimits

0xcbfd,	// (0x00019db6) popup_snote2_single_graphic_window_t4

0xcc33,	// (0x00019dec) popup_snote2_single_graphic_window_t5_ParamLimits

0xcc33,	// (0x00019dec) popup_snote2_single_graphic_window_t5

0x0004,

0xfca6,	// (0x0001ce5f) popup_snote2_single_graphic_window_t_ParamLimits

0xfca6,	// (0x0001ce5f) popup_snote2_single_graphic_window_t

0xb4d6,	// (0x0001868f) clock_nsta_pane_cp2_t1

0xb4d6,	// (0x0001868f) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x0001cc73) clock_nsta_pane_cp2_t

0x3c07,	// (0x00010dc0) form_field_data_wide_pane_g1_ParamLimits

0x3c13,	// (0x00010dcc) form_field_data_wide_pane_g2_ParamLimits

0x3c13,	// (0x00010dcc) form_field_data_wide_pane_g2

0x3c1f,	// (0x00010dd8) form_field_data_wide_pane_g3_ParamLimits

0x3c1f,	// (0x00010dd8) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001c82f) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001c82f) form_field_data_wide_pane_g

0xb3b5,	// (0x0001856e) grid_touch_3_pane_ParamLimits

0xb3b5,	// (0x0001856e) grid_touch_3_pane

0xcd46,	// (0x00019eff) cell_touch_3_pane_ParamLimits

0xcd46,	// (0x00019eff) cell_touch_3_pane

0xba3c,	// (0x00018bf5) cell_touch_3_pane_g1

0xba3c,	// (0x00018bf5) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x0001ccf8) cell_touch_3_pane_g

0x371e,	// (0x000108d7) cont_query_data_pane

0x3726,	// (0x000108df) cont_query_data_pane_cp1

0xcd79,	// (0x00019f32) button_value_adjust_pane_cp7

0xcd81,	// (0x00019f3a) query_popup_pane_cp3

0x441c,	// (0x000115d5) bg_popup_sub_pane_cp22_ParamLimits

0x59a0,	// (0x00012b59) navi_navi_volume_pane_cp2

0x59bb,	// (0x00012b74) popup_side_volume_key_window_g2

0x59ca,	// (0x00012b83) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001c8c5) popup_side_volume_key_window_g

0x59e7,	// (0x00012ba0) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001c8cc) popup_side_volume_key_window_t

0x47ca,	// (0x00011983) popup_side_volume_key_window_ParamLimits

0x7778,	// (0x00014931) list_double_graphic_pane_g4_ParamLimits

0x7778,	// (0x00014931) list_double_graphic_pane_g4

0xa65a,	// (0x00017813) list_single_2heading_msg_pane_ParamLimits

0xa65a,	// (0x00017813) list_single_2heading_msg_pane

0xcdb2,	// (0x00019f6b) list_single_2heading_msg_pane_g1_ParamLimits

0xcdb2,	// (0x00019f6b) list_single_2heading_msg_pane_g1

0x3afd,	// (0x00010cb6) list_single_2heading_msg_pane_g2_ParamLimits

0x3afd,	// (0x00010cb6) list_single_2heading_msg_pane_g2

0xcdbe,	// (0x00019f77) list_single_2heading_msg_pane_g3_ParamLimits

0xcdbe,	// (0x00019f77) list_single_2heading_msg_pane_g3

0xcdca,	// (0x00019f83) list_single_2heading_msg_pane_g4_ParamLimits

0xcdca,	// (0x00019f83) list_single_2heading_msg_pane_g4

0x0003,

0xfcb1,	// (0x0001ce6a) list_single_2heading_msg_pane_g_ParamLimits

0xfcb1,	// (0x0001ce6a) list_single_2heading_msg_pane_g

0xcde2,	// (0x00019f9b) list_single_2heading_msg_pane_t1_ParamLimits

0xcde2,	// (0x00019f9b) list_single_2heading_msg_pane_t1

0xce0a,	// (0x00019fc3) list_single_2heading_msg_pane_t2_ParamLimits

0xce0a,	// (0x00019fc3) list_single_2heading_msg_pane_t2

0xce39,	// (0x00019ff2) list_single_2heading_msg_pane_t3_ParamLimits

0xce39,	// (0x00019ff2) list_single_2heading_msg_pane_t3

0xce72,	// (0x0001a02b) list_single_2heading_msg_pane_t4_ParamLimits

0xce72,	// (0x0001a02b) list_single_2heading_msg_pane_t4

0x0003,

0xfcba,	// (0x0001ce73) list_single_2heading_msg_pane_t_ParamLimits

0xfcba,	// (0x0001ce73) list_single_2heading_msg_pane_t

0x3436,	// (0x000105ef) title_pane_g4_ParamLimits

0x3436,	// (0x000105ef) title_pane_g4

0x57ac,	// (0x00012965) title_pane_stacon_g3_ParamLimits

0x57ac,	// (0x00012965) title_pane_stacon_g3

0xc876,	// (0x00019a2f) list_single_2graphic_im_pane_g4_ParamLimits

0xc876,	// (0x00019a2f) list_single_2graphic_im_pane_g4

0xa0a3,	// (0x0001725c) popup_side_volume_key_window_cp

0xa9ae,	// (0x00017b67) main_idle_act2_pane_t1

0x5dd2,	// (0x00012f8b) toolbar_button_pane_g10

0x75b5,	// (0x0001476e) popup_toolbar_window_cp1

0xb4c7,	// (0x00018680) clock_nsta_pane_cp_t1

0xb4c7,	// (0x00018680) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x0001cc6e) clock_nsta_pane_cp_t

0x59a0,	// (0x00012b59) navi_navi_volume_pane_cp2_ParamLimits

0x59af,	// (0x00012b68) popup_side_volume_key_window_g1_ParamLimits

0x59bb,	// (0x00012b74) popup_side_volume_key_window_g2_ParamLimits

0x59ca,	// (0x00012b83) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001c8c5) popup_side_volume_key_window_g_ParamLimits

0x625b,	// (0x00013414) fep_hwr_aid_pane

0x6304,	// (0x000134bd) bg_fep_hwr_top_pane_g4_ParamLimits

0xba9d,	// (0x00018c56) fep_hwr_top_pane_g1_ParamLimits

0xbaaf,	// (0x00018c68) fep_hwr_top_pane_g2_ParamLimits

0x6324,	// (0x000134dd) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x0001ccc3) fep_hwr_top_pane_g_ParamLimits

0x6339,	// (0x000134f2) fep_hwr_top_text_pane_ParamLimits

0x9e58,	// (0x00017011) aid_touch_tab_arrow_arrow_2

0x9e61,	// (0x0001701a) aid_touch_tab_arrow_left_2

0x626f,	// (0x00013428) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x62a6,	// (0x0001345f) fep_hwr_prediction_pane

0xbc05,	// (0x00018dbe) fep_vkb_prediction_pane

0xbd0b,	// (0x00018ec4) fep_vkb_side_pane_g3_ParamLimits

0xbd0b,	// (0x00018ec4) fep_vkb_side_pane_g3

0x64c8,	// (0x00013681) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6539,	// (0x000136f2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6546,	// (0x000136ff) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb9,	// (0x0001cd72) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6675,	// (0x0001382e) fep_hwr_prediction_pane_g1

0x667f,	// (0x00013838) fep_hwr_prediction_pane_g2

0x6687,	// (0x00013840) fep_hwr_prediction_pane_g3

0x668f,	// (0x00013848) fep_hwr_prediction_pane_g4

0x0003,

0xfcc3,	// (0x0001ce7c) fep_hwr_prediction_pane_g

0xce97,	// (0x0001a050) fep_vkb_prediction_pane_g1

0xcea1,	// (0x0001a05a) fep_vkb_prediction_pane_g2

0xcea9,	// (0x0001a062) fep_vkb_prediction_pane_g3

0xceb1,	// (0x0001a06a) fep_vkb_prediction_pane_g4

0x0003,

0xfccc,	// (0x0001ce85) fep_vkb_prediction_pane_g

0x60db,	// (0x00013294) slider_set_pane_g3

0x60ef,	// (0x000132a8) slider_set_pane_g4

0x6107,	// (0x000132c0) slider_set_pane_g5

0x60db,	// (0x00013294) slider_set_pane_g6

0x611d,	// (0x000132d6) slider_set_pane_g7

0xa559,	// (0x00017712) slider_form_pane_g3

0xa562,	// (0x0001771b) slider_form_pane_g4

0xa56a,	// (0x00017723) slider_form_pane_g5

0xa559,	// (0x00017712) slider_form_pane_g6

0xa572,	// (0x0001772b) slider_form_pane_g7

0xacb1,	// (0x00017e6a) slider_set_pane_vc_g3

0xacba,	// (0x00017e73) slider_set_pane_vc_g4

0xacc3,	// (0x00017e7c) slider_set_pane_vc_g5

0xacb1,	// (0x00017e6a) slider_set_pane_vc_g6

0xaccc,	// (0x00017e85) slider_set_pane_vc_g7

0xb17a,	// (0x00018333) slider_form_pane_vc_g1

0xb183,	// (0x0001833c) slider_form_pane_vc_g2

0xb18c,	// (0x00018345) slider_form_pane_vc_g3

0xb17a,	// (0x00018333) slider_form_pane_vc_g4

0xb195,	// (0x0001834e) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x0001cc40) slider_form_pane_vc_g

0x3249,	// (0x00010402) main_idle_act3_pane

0xceb9,	// (0x0001a072) ai3_links_pane

0xcec2,	// (0x0001a07b) popup_ai3_data_window_ParamLimits

0xcec2,	// (0x0001a07b) popup_ai3_data_window

0x3249,	// (0x00010402) grid_ai3_links_pane

0xcee0,	// (0x0001a099) cell_ai3_links_pane_ParamLimits

0xcee0,	// (0x0001a099) cell_ai3_links_pane

0xcefa,	// (0x0001a0b3) bg_popup_sub_pane_cp11

0xcf07,	// (0x0001a0c0) cell_ai3_links_pane_g1

0x3249,	// (0x00010402) bg_popup_sub_pane_cp12

0xcf4d,	// (0x0001a106) heading_ai3_data_pane

0xcf55,	// (0x0001a10e) list_ai3_gene_pane

0xcf61,	// (0x0001a11a) popup_ai3_data_window_g1

0xcf69,	// (0x0001a122) heading_ai3_data_pane_g1

0xcf71,	// (0x0001a12a) heading_ai3_data_pane_t1

0xcf7f,	// (0x0001a138) list_double_ai3_gene_pane_ParamLimits

0xcf7f,	// (0x0001a138) list_double_ai3_gene_pane

0xcf8c,	// (0x0001a145) list_single_ai3_gene_pane_ParamLimits

0xcf8c,	// (0x0001a145) list_single_ai3_gene_pane

0xba01,	// (0x00018bba) list_highlight_pane_cp7_ParamLimits

0xba01,	// (0x00018bba) list_highlight_pane_cp7

0xcf99,	// (0x0001a152) list_single_a13_gene_pane_t1_ParamLimits

0xcf99,	// (0x0001a152) list_single_a13_gene_pane_t1

0xcfb0,	// (0x0001a169) list_single_ai3_gene_pane_g1

0xcfb9,	// (0x0001a172) list_single_ai3_gene_pane_g2

0x0001,

0xfcd5,	// (0x0001ce8e) list_single_ai3_gene_pane_g

0xcfc1,	// (0x0001a17a) list_double_ai3_gene_pane_g1_ParamLimits

0xcfc1,	// (0x0001a17a) list_double_ai3_gene_pane_g1

0xcfcd,	// (0x0001a186) list_double_ai3_gene_pane_t1_ParamLimits

0xcfcd,	// (0x0001a186) list_double_ai3_gene_pane_t1

0xcfe9,	// (0x0001a1a2) list_double_ai3_gene_pane_t2_ParamLimits

0xcfe9,	// (0x0001a1a2) list_double_ai3_gene_pane_t2

0xcffe,	// (0x0001a1b7) list_double_ai3_gene_pane_t3_ParamLimits

0xcffe,	// (0x0001a1b7) list_double_ai3_gene_pane_t3

0x0002,

0xfcda,	// (0x0001ce93) list_double_ai3_gene_pane_t_ParamLimits

0xfcda,	// (0x0001ce93) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcd92,	// (0x00019f4b) aid_size_min_col_2

0xcd9c,	// (0x00019f55) aid_size_min_msg_ParamLimits

0xcd9c,	// (0x00019f55) aid_size_min_msg

0xbe17,	// (0x00018fd0) fep_vkb_top_text_pane_g2_ParamLimits

0xbe17,	// (0x00018fd0) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x0001ccf3) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x0001ccf3) fep_vkb_top_text_pane_g

0x3249,	// (0x00010402) main_hc_apps_shell_pane

0xd01b,	// (0x0001a1d4) grid_hc_apps_pane_ParamLimits

0xd01b,	// (0x0001a1d4) grid_hc_apps_pane

0xd02a,	// (0x0001a1e3) list_hc_apps_pane

0xd032,	// (0x0001a1eb) scroll_pane_cp37_ParamLimits

0xd032,	// (0x0001a1eb) scroll_pane_cp37

0xd03e,	// (0x0001a1f7) cell_hc_apps_pane_ParamLimits

0xd03e,	// (0x0001a1f7) cell_hc_apps_pane

0xd0f6,	// (0x0001a2af) cell_hc_apps_pane_g1_ParamLimits

0xd0f6,	// (0x0001a2af) cell_hc_apps_pane_g1

0xd127,	// (0x0001a2e0) cell_hc_apps_pane_g2_ParamLimits

0xd127,	// (0x0001a2e0) cell_hc_apps_pane_g2

0xd143,	// (0x0001a2fc) cell_hc_apps_pane_g3_ParamLimits

0xd143,	// (0x0001a2fc) cell_hc_apps_pane_g3

0x0002,

0xfce1,	// (0x0001ce9a) cell_hc_apps_pane_g_ParamLimits

0xfce1,	// (0x0001ce9a) cell_hc_apps_pane_g

0xd165,	// (0x0001a31e) cell_hc_apps_pane_t1_ParamLimits

0xd165,	// (0x0001a31e) cell_hc_apps_pane_t1

0x3668,	// (0x00010821) grid_highlight_pane_cp10_ParamLimits

0x3668,	// (0x00010821) grid_highlight_pane_cp10

0xd1a5,	// (0x0001a35e) list_single_hc_apps_pane_ParamLimits

0xd1a5,	// (0x0001a35e) list_single_hc_apps_pane

0xd1e4,	// (0x0001a39d) list_single_hc_apps_pane_g1

0xd1fd,	// (0x0001a3b6) list_single_hc_apps_pane_g2

0x0001,

0xfce8,	// (0x0001cea1) list_single_hc_apps_pane_g

0xd216,	// (0x0001a3cf) list_single_hc_apps_pane_g2_copy1

0xd232,	// (0x0001a3eb) list_single_hc_apps_pane_t1

0x3492,	// (0x0001064b) bg_set_opt_pane_cp_ParamLimits

0x56d3,	// (0x0001288c) setting_slider_pane_t1_ParamLimits

0x56ec,	// (0x000128a5) setting_slider_pane_t2_ParamLimits

0x5706,	// (0x000128bf) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001c717) setting_slider_pane_t_ParamLimits

0x571e,	// (0x000128d7) slider_set_pane_ParamLimits

0x5c4e,	// (0x00012e07) control_pane_g5_ParamLimits

0x5c4e,	// (0x00012e07) control_pane_g5

0xa386,	// (0x0001753f) slider_set_pane_g1_ParamLimits

0x60cf,	// (0x00013288) slider_set_pane_g2_ParamLimits

0x60db,	// (0x00013294) slider_set_pane_g3_ParamLimits

0x60ef,	// (0x000132a8) slider_set_pane_g4_ParamLimits

0x6107,	// (0x000132c0) slider_set_pane_g5_ParamLimits

0x60db,	// (0x00013294) slider_set_pane_g6_ParamLimits

0x611d,	// (0x000132d6) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0001cb18) slider_set_pane_g_ParamLimits

0x4872,	// (0x00011a2b) navi_icon_text_pane_ParamLimits

0x89e0,	// (0x00015b99) aid_fill_nsta_2_ParamLimits

0x8a21,	// (0x00015bda) aid_touch_tab_arrow_left_ParamLimits

0x8a30,	// (0x00015be9) aid_touch_tab_arrow_right_ParamLimits

0x8a9d,	// (0x00015c56) clock_nsta_pane_ParamLimits

0x9e3a,	// (0x00016ff3) navi_icon_pane_g1_ParamLimits

0x9e46,	// (0x00016fff) navi_text_pane_t1_ParamLimits

0xb5e4,	// (0x0001879d) navi_icon_text_pane_g1_ParamLimits

0xb5f0,	// (0x000187a9) navi_icon_text_pane_t1_ParamLimits

0xd1e4,	// (0x0001a39d) list_single_hc_apps_pane_g1_ParamLimits

0xd1fd,	// (0x0001a3b6) list_single_hc_apps_pane_g2_ParamLimits

0xfce8,	// (0x0001cea1) list_single_hc_apps_pane_g_ParamLimits

0xd216,	// (0x0001a3cf) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd232,	// (0x0001a3eb) list_single_hc_apps_pane_t1_ParamLimits

0x55d5,	// (0x0001278e) popup_toolbar2_fixed_window_ParamLimits

0x55d5,	// (0x0001278e) popup_toolbar2_fixed_window

0x88e4,	// (0x00015a9d) popup_toolbar2_float_window

0x3249,	// (0x00010402) bg_popup_sub_pane_cp27

0xd260,	// (0x0001a419) grid_toolbar2_float_pane

0x3249,	// (0x00010402) bg_popup_sub_pane_cp26

0xd260,	// (0x0001a419) grid_toolbar2_fixed_pane

0xd268,	// (0x0001a421) cell_toolbar2_fixed_pane_ParamLimits

0xd268,	// (0x0001a421) cell_toolbar2_fixed_pane

0xd278,	// (0x0001a431) cell_toolbar2_fixed_pane_g1

0xd281,	// (0x0001a43a) toolbar2_fixed_button_pane

0x8f02,	// (0x000160bb) toolbar2_fixed_button_pane_g1

0x8f12,	// (0x000160cb) toolbar2_fixed_button_pane_g2

0x8f0a,	// (0x000160c3) toolbar2_fixed_button_pane_g3

0x8f22,	// (0x000160db) toolbar2_fixed_button_pane_g4

0x8f1a,	// (0x000160d3) toolbar2_fixed_button_pane_g5

0x8f2a,	// (0x000160e3) toolbar2_fixed_button_pane_g6

0x8f32,	// (0x000160eb) toolbar2_fixed_button_pane_g7

0x8f42,	// (0x000160fb) toolbar2_fixed_button_pane_g8

0x8f3a,	// (0x000160f3) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0001ca1a) toolbar2_fixed_button_pane_g

0xd289,	// (0x0001a442) cell_toolbar2_float_pane_ParamLimits

0xd289,	// (0x0001a442) cell_toolbar2_float_pane

0xd29a,	// (0x0001a453) cell_toolbar2_float_pane_g1

0xd281,	// (0x0001a43a) toolbar2_fixed_button_pane_cp

0xbb73,	// (0x00018d2c) fep_vkb_accented_list_pane_ParamLimits

0xbb73,	// (0x00018d2c) fep_vkb_accented_list_pane

0x64a8,	// (0x00013661) bg_popup_fep_shadow_pane_g9

0x8005,	// (0x000151be) bg_popup_fep_shadow_pane_cp3

0x3d98,	// (0x00010f51) list_accented_list_pane

0xd2a3,	// (0x0001a45c) list_single_accented_list_pane_ParamLimits

0xd2a3,	// (0x0001a45c) list_single_accented_list_pane

0x8005,	// (0x000151be) list_highlight_pane_cp10

0xd2b4,	// (0x0001a46d) list_single_accented_list_pane_t1

0x882a,	// (0x000159e3) popup_slider_window_ParamLimits

0x882a,	// (0x000159e3) popup_slider_window

0xcd89,	// (0x00019f42) aid_indentation_list_msg

0xd380,	// (0x0001a539) bg_popup_window_pane_cp19

0xd3ee,	// (0x0001a5a7) popup_slider_window_g1

0xd40a,	// (0x0001a5c3) popup_slider_window_g2

0xd426,	// (0x0001a5df) popup_slider_window_g3

0x0005,

0xfced,	// (0x0001cea6) popup_slider_window_g

0xd482,	// (0x0001a63b) popup_slider_window_t1

0xd4f6,	// (0x0001a6af) small_volume_slider_vertical_pane

0xba3c,	// (0x00018bf5) small_volume_slider_vertical_pane_g1

0xba3c,	// (0x00018bf5) small_volume_slider_vertical_pane_g2

0xd512,	// (0x0001a6cb) small_volume_slider_vertical_pane_g3

0x0002,

0xfcff,	// (0x0001ceb8) small_volume_slider_vertical_pane_g

0x5383,	// (0x0001253c) area_side_right_pane_ParamLimits

0x5383,	// (0x0001253c) area_side_right_pane

0x6697,	// (0x00013850) aid_size_side_button_ParamLimits

0x6697,	// (0x00013850) aid_size_side_button

0x66ab,	// (0x00013864) grid_sctrl_middle_pane_ParamLimits

0x66ab,	// (0x00013864) grid_sctrl_middle_pane

0x66cb,	// (0x00013884) sctrl_sk_bottom_pane

0x66dc,	// (0x00013895) sctrl_sk_top_pane

0x66ee,	// (0x000138a7) aid_touch_sctrl_top

0x66fb,	// (0x000138b4) bg_sctrl_sk_pane_ParamLimits

0x66fb,	// (0x000138b4) bg_sctrl_sk_pane

0x6709,	// (0x000138c2) sctrl_sk_top_pane_g1

0x6716,	// (0x000138cf) sctrl_sk_top_pane_t1

0x66ee,	// (0x000138a7) aid_touch_sctrl_bottom

0x66fb,	// (0x000138b4) bg_sctrl_sk_pane_cp_ParamLimits

0x66fb,	// (0x000138b4) bg_sctrl_sk_pane_cp

0x6731,	// (0x000138ea) sctrl_sk_bottom_pane_g1

0x6716,	// (0x000138cf) sctrl_sk_bottom_pane_t1

0x673a,	// (0x000138f3) cell_sctrl_middle_pane_ParamLimits

0x673a,	// (0x000138f3) cell_sctrl_middle_pane

0x6757,	// (0x00013910) aid_touch_sctrl_middle_ParamLimits

0x6757,	// (0x00013910) aid_touch_sctrl_middle

0x6769,	// (0x00013922) bg_sctrl_middle_pane_ParamLimits

0x6769,	// (0x00013922) bg_sctrl_middle_pane

0x64c8,	// (0x00013681) cell_sctrl_middle_pane_g1_ParamLimits

0x64c8,	// (0x00013681) cell_sctrl_middle_pane_g1

0x6777,	// (0x00013930) cell_sctrl_middle_pane_g2_ParamLimits

0x6777,	// (0x00013930) cell_sctrl_middle_pane_g2

0x0001,

0xfd0b,	// (0x0001cec4) cell_sctrl_middle_pane_g_ParamLimits

0xfd0b,	// (0x0001cec4) cell_sctrl_middle_pane_g

0x8f02,	// (0x000160bb) bg_sctrl_middle_pane_g1

0x8f0a,	// (0x000160c3) bg_sctrl_middle_pane_g2

0x8f12,	// (0x000160cb) bg_sctrl_middle_pane_g3

0x8f1a,	// (0x000160d3) bg_sctrl_middle_pane_g4

0x8f22,	// (0x000160db) bg_sctrl_middle_pane_g5

0x8f2a,	// (0x000160e3) bg_sctrl_middle_pane_g6

0x8f32,	// (0x000160eb) bg_sctrl_middle_pane_g7

0x8f3a,	// (0x000160f3) bg_sctrl_middle_pane_g8

0x0007,

0xfd10,	// (0x0001cec9) bg_sctrl_middle_pane_g

0x8f42,	// (0x000160fb) bg_sctrl_middle_pane_g8_copy1

0x8f02,	// (0x000160bb) bg_sctrl_sk_pane_g1

0x8f12,	// (0x000160cb) bg_sctrl_sk_pane_g2

0x8f0a,	// (0x000160c3) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0001ca1a) bg_sctrl_sk_pane_g

0x3a83,	// (0x00010c3c) aid_size_touch_scroll_bar

0x8f22,	// (0x000160db) bg_sctrl_sk_pane_g4

0x8f1a,	// (0x000160d3) bg_sctrl_sk_pane_g5

0x8f2a,	// (0x000160e3) bg_sctrl_sk_pane_g6

0x8f32,	// (0x000160eb) bg_sctrl_sk_pane_g7

0x8f42,	// (0x000160fb) bg_sctrl_sk_pane_g8

0x8f3a,	// (0x000160f3) bg_sctrl_sk_pane_g9

0x8441,	// (0x000155fa) popup_fep_china_hwr2_fs_candidate_window

0x844b,	// (0x00015604) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x844b,	// (0x00015604) popup_fep_china_hwr2_fs_control_window

0x64c8,	// (0x00013681) sctrl_sk_top_pane_g2

0x0001,

0xfd06,	// (0x0001cebf) sctrl_sk_top_pane_g

0xd51b,	// (0x0001a6d4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd51b,	// (0x0001a6d4) aid_fep_china_hwr2_fs_cell

0xd52e,	// (0x0001a6e7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd52e,	// (0x0001a6e7) bg_popup_fep_shadow_pane_cp4

0xd547,	// (0x0001a700) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd547,	// (0x0001a700) bg_popup_fep_shadow_pane_cp5

0xd559,	// (0x0001a712) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd559,	// (0x0001a712) popup_fep_china_hwr2_fs_control_bar_grid

0xd569,	// (0x0001a722) popup_fep_china_hwr2_fs_control_funtion_grid

0xd571,	// (0x0001a72a) aid_fep_china_hwr2_fs_candi_cell

0x3249,	// (0x00010402) bg_popup_fep_shadow_pane_cp6

0xd57b,	// (0x0001a734) popup_fep_china_hwr2_fs_candidate_grid

0xd585,	// (0x0001a73e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd585,	// (0x0001a73e) cell_fep_china_hwr2_fs_funtion_grid

0xba3c,	// (0x00018bf5) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd59d,	// (0x0001a756) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd59d,	// (0x0001a756) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd5ab,	// (0x0001a764) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd5ab,	// (0x0001a764) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd21,	// (0x0001ceda) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd21,	// (0x0001ceda) cell_fep_china_hwr2_fs_funtion_grid_g

0xd5c1,	// (0x0001a77a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd5c1,	// (0x0001a77a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd5d6,	// (0x0001a78f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd5d6,	// (0x0001a78f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd26,	// (0x0001cedf) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd26,	// (0x0001cedf) cell_fep_china_hwr2_fs_funtion_grid_t

0xd5f2,	// (0x0001a7ab) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd5fa,	// (0x0001a7b3) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd602,	// (0x0001a7bb) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2b,	// (0x0001cee4) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd60a,	// (0x0001a7c3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd60a,	// (0x0001a7c3) cell_fep_china_hwr2_fs_candidate_grid

0xd629,	// (0x0001a7e2) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd631,	// (0x0001a7ea) popup_fep_china_hwr2_fs_candidate_grid_g21

0xba3c,	// (0x00018bf5) cell_fep_china_hwr2_fs_candidate_grid_g1

0xba3c,	// (0x00018bf5) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x0001ccf8) cell_fep_china_hwr2_fs_candidate_grid_g

0xd639,	// (0x0001a7f2) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8ab0,	// (0x00015c69) clock_nsta_pane_cp_24_ParamLimits

0x8ab0,	// (0x00015c69) clock_nsta_pane_cp_24

0x8b30,	// (0x00015ce9) indicator_nsta_pane_cp_24_ParamLimits

0x8b30,	// (0x00015ce9) indicator_nsta_pane_cp_24

0x9cb6,	// (0x00016e6f) heading_pane_g1

0x0001,

0xf8c6,	// (0x0001ca7f) heading_pane_g

0xa7f5,	// (0x000179ae) grid_sct_catagory_button_pane

0xa827,	// (0x000179e0) scroll_pane_cp5_ParamLimits

0xb632,	// (0x000187eb) button_value_adjust_pane_cp5_ParamLimits

0xb632,	// (0x000187eb) button_value_adjust_pane_cp5

0xb738,	// (0x000188f1) form2_midp_time_pane_ParamLimits

0xd647,	// (0x0001a800) cell_sct_catagory_button_pane_ParamLimits

0xd647,	// (0x0001a800) cell_sct_catagory_button_pane

0xba01,	// (0x00018bba) bg_button_pane_cp01_ParamLimits

0xba01,	// (0x00018bba) bg_button_pane_cp01

0xba3c,	// (0x00018bf5) cell_sct_catagory_button_pane_g1

0x886b,	// (0x00015a24) popup_tb_extension_window

0xd659,	// (0x0001a812) aid_size_cell_ext_ParamLimits

0xd659,	// (0x0001a812) aid_size_cell_ext

0x3668,	// (0x00010821) bg_tb_trans_pane_cp1_ParamLimits

0x3668,	// (0x00010821) bg_tb_trans_pane_cp1

0xd679,	// (0x0001a832) grid_tb_ext_pane_ParamLimits

0xd679,	// (0x0001a832) grid_tb_ext_pane

0xd6a9,	// (0x0001a862) cell_tb_ext_pane_ParamLimits

0xd6a9,	// (0x0001a862) cell_tb_ext_pane

0xd6c0,	// (0x0001a879) cell_tb_ext_pane_g1_ParamLimits

0xd6c0,	// (0x0001a879) cell_tb_ext_pane_g1

0xd6dd,	// (0x0001a896) cell_tb_ext_pane_t1

0x3668,	// (0x00010821) list_highlight_pane_cp11_ParamLimits

0x3668,	// (0x00010821) list_highlight_pane_cp11

0x55f4,	// (0x000127ad) popup_uni_indicator_window_ParamLimits

0x55f4,	// (0x000127ad) popup_uni_indicator_window

0x3be8,	// (0x00010da1) bg_popup_sub_pane_cp14

0xd6f8,	// (0x0001a8b1) list_uniindi_pane

0xd704,	// (0x0001a8bd) uniindi_top_pane

0x3668,	// (0x00010821) bg_uniindi_top_pane

0xd725,	// (0x0001a8de) uniindi_top_pane_g1

0xd73b,	// (0x0001a8f4) uniindi_top_pane_g2

0x0003,

0xfd32,	// (0x0001ceeb) uniindi_top_pane_g

0xd765,	// (0x0001a91e) uniindi_top_pane_t1

0xd791,	// (0x0001a94a) list_single_uniindi_pane_ParamLimits

0xd791,	// (0x0001a94a) list_single_uniindi_pane

0xba3c,	// (0x00018bf5) bg_uniindi_top_pane_g1

0xd7a3,	// (0x0001a95c) list_single_uniindi_pane_g1

0xd7b6,	// (0x0001a96f) list_single_uniindi_pane_t1

0x5460,	// (0x00012619) control_bg_pane

0xd7db,	// (0x0001a994) bg_sctrl_sk_pane_cp1

0xd7e4,	// (0x0001a99d) bg_sctrl_sk_pane_cp2

0xd7ed,	// (0x0001a9a6) control_bg_pane_g1

0xd7f6,	// (0x0001a9af) control_bg_pane_g2

0x0001,

0xfd3b,	// (0x0001cef4) control_bg_pane_g

0xb459,	// (0x00018612) cell_indicator_nsta_pane_g1_ParamLimits

0xb467,	// (0x00018620) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x0001cc5c) cell_indicator_nsta_pane_g_ParamLimits

0xb7c8,	// (0x00018981) form2_midp_time_pane_t1_ParamLimits

0x38c5,	// (0x00010a7e) main_idle_act4_pane_ParamLimits

0x38c5,	// (0x00010a7e) main_idle_act4_pane

0x886b,	// (0x00015a24) popup_tb_extension_window_ParamLimits

0xd69b,	// (0x0001a854) tb_ext_find_pane_ParamLimits

0xd69b,	// (0x0001a854) tb_ext_find_pane

0xd7ff,	// (0x0001a9b8) ai_gene_pane_1_cp1

0x8142,	// (0x000152fb) ai_gene_pane_2_cp1

0xd807,	// (0x0001a9c0) list_single_idle_plugin_calendar_pane

0xd810,	// (0x0001a9c9) list_single_idle_plugin_notification_pane

0xd819,	// (0x0001a9d2) list_single_idle_plugin_player_pane

0xd822,	// (0x0001a9db) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd822,	// (0x0001a9db) list_single_idle_plugin_shortcut_pane

0xd844,	// (0x0001a9fd) main_idle_act4_pane_t1

0xd856,	// (0x0001aa0f) main_idle_act4_pane_t2

0x0001,

0xfd40,	// (0x0001cef9) main_idle_act4_pane_t

0xd868,	// (0x0001aa21) middle_sk_idle_act4_pane_ParamLimits

0xd868,	// (0x0001aa21) middle_sk_idle_act4_pane

0xd87e,	// (0x0001aa37) popup_clock_digital_analogue_window_cp2

0xd898,	// (0x0001aa51) shortcut_wheel_idle_act4_pane_ParamLimits

0xd898,	// (0x0001aa51) shortcut_wheel_idle_act4_pane

0xba3c,	// (0x00018bf5) shortcut_wheel_idle_act4_pane_g1

0xba3c,	// (0x00018bf5) shortcut_wheel_idle_act4_pane_g2

0xba3c,	// (0x00018bf5) shortcut_wheel_idle_act4_pane_g3

0xba3c,	// (0x00018bf5) shortcut_wheel_idle_act4_pane_g4

0xba3c,	// (0x00018bf5) shortcut_wheel_idle_act4_pane_g5

0xd8ac,	// (0x0001aa65) shortcut_wheel_idle_act4_pane_g6

0xd8b4,	// (0x0001aa6d) shortcut_wheel_idle_act4_pane_g7

0xd8bc,	// (0x0001aa75) shortcut_wheel_idle_act4_pane_g8

0xd8c4,	// (0x0001aa7d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd45,	// (0x0001cefe) shortcut_wheel_idle_act4_pane_g

0xbcb7,	// (0x00018e70) middle_sk_idle_act4_pane_g1_ParamLimits

0xbcb7,	// (0x00018e70) middle_sk_idle_act4_pane_g1

0xd928,	// (0x0001aae1) middle_sk_idle_act4_pane_g2_ParamLimits

0xd928,	// (0x0001aae1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd68,	// (0x0001cf21) middle_sk_idle_act4_pane_g_ParamLimits

0xfd68,	// (0x0001cf21) middle_sk_idle_act4_pane_g

0xd934,	// (0x0001aaed) middle_sk_idle_act4_pane_t1_ParamLimits

0xd934,	// (0x0001aaed) middle_sk_idle_act4_pane_t1

0xd951,	// (0x0001ab0a) grid_ai_shortcut_pane_ParamLimits

0xd951,	// (0x0001ab0a) grid_ai_shortcut_pane

0xd96a,	// (0x0001ab23) list_highlight_pane_cp16_ParamLimits

0xd96a,	// (0x0001ab23) list_highlight_pane_cp16

0xd977,	// (0x0001ab30) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd977,	// (0x0001ab30) list_single_idle_plugin_shortcut_pane_g1

0xd983,	// (0x0001ab3c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd983,	// (0x0001ab3c) list_single_idle_plugin_shortcut_pane_g2

0xd99d,	// (0x0001ab56) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd99d,	// (0x0001ab56) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6d,	// (0x0001cf26) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6d,	// (0x0001cf26) list_single_idle_plugin_shortcut_pane_g

0xd9b0,	// (0x0001ab69) cell_ai_shortcut_pane_ParamLimits

0xd9b0,	// (0x0001ab69) cell_ai_shortcut_pane

0xd9d3,	// (0x0001ab8c) cell_ai_shortcut_pane_g1_ParamLimits

0xd9d3,	// (0x0001ab8c) cell_ai_shortcut_pane_g1

0xd7ff,	// (0x0001a9b8) ai_gene_pane_1_cp2

0xd9f5,	// (0x0001abae) ai_gene_pane_2_cp2

0xd9fd,	// (0x0001abb6) list_highlight_pane_cp15

0xda06,	// (0x0001abbf) list_single_idle_plugin_calendar_pane_g1

0xd9fd,	// (0x0001abb6) list_highlight_pane_cp17

0xda0e,	// (0x0001abc7) list_single_idle_plugin_calendar_pane_g1_copy1

0xda16,	// (0x0001abcf) list_single_idle_plugin_player_pane_g1

0xaa5c,	// (0x00017c15) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd74,	// (0x0001cf2d) list_single_idle_plugin_player_pane_g

0xda1e,	// (0x0001abd7) list_single_idle_plugin_player_pane_t1

0xda2c,	// (0x0001abe5) list_single_idle_plugin_player_pane_t2

0xda3a,	// (0x0001abf3) list_single_idle_plugin_player_pane_t3

0xda48,	// (0x0001ac01) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd79,	// (0x0001cf32) list_single_idle_plugin_player_pane_t

0xda56,	// (0x0001ac0f) wait_bar_pane_cp15

0xda5e,	// (0x0001ac17) grid_ai_notification_pane

0xaa5c,	// (0x00017c15) list_single_idle_plugin_notification_pane_g1

0xda67,	// (0x0001ac20) cell_ai_notification_pane_ParamLimits

0xda67,	// (0x0001ac20) cell_ai_notification_pane

0xda74,	// (0x0001ac2d) cell_ai_notification_pane_g1

0xda7c,	// (0x0001ac35) cell_ai_notification_pane_t1

0xda8a,	// (0x0001ac43) tb_ext_find_button_pane

0xda92,	// (0x0001ac4b) tb_ext_find_pane_g1

0xda9a,	// (0x0001ac53) tb_ext_find_pane_t1

0x4342,	// (0x000114fb) tb_ext_find_button_pane_g1

0xdaa8,	// (0x0001ac61) tb_ext_find_button_pane_g2

0x0001,

0xfd82,	// (0x0001cf3b) tb_ext_find_button_pane_g

0xd844,	// (0x0001a9fd) main_idle_act4_pane_t1_ParamLimits

0xd856,	// (0x0001aa0f) main_idle_act4_pane_t2_ParamLimits

0xfd40,	// (0x0001cef9) main_idle_act4_pane_t_ParamLimits

0xd87e,	// (0x0001aa37) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd88c,	// (0x0001aa45) sat_plugin_idle_act4_pane_ParamLimits

0xd88c,	// (0x0001aa45) sat_plugin_idle_act4_pane

0xdab1,	// (0x0001ac6a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdab1,	// (0x0001ac6a) sat_plugin_idle_act4_pane_t1

0xdac4,	// (0x0001ac7d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdac4,	// (0x0001ac7d) sat_plugin_idle_act4_pane_t2

0xdad7,	// (0x0001ac90) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdad7,	// (0x0001ac90) sat_plugin_idle_act4_pane_t3

0xdaea,	// (0x0001aca3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdaea,	// (0x0001aca3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd87,	// (0x0001cf40) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd87,	// (0x0001cf40) sat_plugin_idle_act4_pane_t

0x5525,	// (0x000126de) popup_battery_window_ParamLimits

0x5525,	// (0x000126de) popup_battery_window

0x3668,	// (0x00010821) bg_popup_sub_pane_cp25_ParamLimits

0x3668,	// (0x00010821) bg_popup_sub_pane_cp25

0xdafd,	// (0x0001acb6) popup_battery_window_g1_ParamLimits

0xdafd,	// (0x0001acb6) popup_battery_window_g1

0xdb09,	// (0x0001acc2) popup_battery_window_t1_ParamLimits

0xdb09,	// (0x0001acc2) popup_battery_window_t1

0xdb1b,	// (0x0001acd4) popup_battery_window_t2_ParamLimits

0xdb1b,	// (0x0001acd4) popup_battery_window_t2

0x0001,

0xfd90,	// (0x0001cf49) popup_battery_window_t_ParamLimits

0xfd90,	// (0x0001cf49) popup_battery_window_t

0x800d,	// (0x000151c6) midp_canvas_pane_ParamLimits

0x8084,	// (0x0001523d) midp_keypad_pane_ParamLimits

0x8084,	// (0x0001523d) midp_keypad_pane

0x838b,	// (0x00015544) main_midp_pane_ParamLimits

0xb4e5,	// (0x0001869e) signal_pane_g2_cp_ParamLimits

0xdb38,	// (0x0001acf1) aid_size_cell_midp_keypad_ParamLimits

0xdb38,	// (0x0001acf1) aid_size_cell_midp_keypad

0xdb52,	// (0x0001ad0b) midp_keyp_game_grid_pane_ParamLimits

0xdb52,	// (0x0001ad0b) midp_keyp_game_grid_pane

0xdb72,	// (0x0001ad2b) midp_keyp_rocker_pane_ParamLimits

0xdb72,	// (0x0001ad2b) midp_keyp_rocker_pane

0xdb9d,	// (0x0001ad56) midp_keyp_sk_left_pane_ParamLimits

0xdb9d,	// (0x0001ad56) midp_keyp_sk_left_pane

0xdbf7,	// (0x0001adb0) midp_keyp_sk_right_pane_ParamLimits

0xdbf7,	// (0x0001adb0) midp_keyp_sk_right_pane

0x3249,	// (0x00010402) bg_button_pane_cp03

0xdc51,	// (0x0001ae0a) midp_keyp_sk_left_pane_g1

0x3249,	// (0x00010402) bg_button_pane_cp04

0xdc51,	// (0x0001ae0a) midp_keyp_sk_right_pane_g1

0xba3c,	// (0x00018bf5) midp_keyp_rocker_pane_g1

0xdc5a,	// (0x0001ae13) keyp_game_cell_pane_ParamLimits

0xdc5a,	// (0x0001ae13) keyp_game_cell_pane

0x3249,	// (0x00010402) bg_button_pane_cp02

0xdc6d,	// (0x0001ae26) keyp_game_cell_pane_g1

0x556f,	// (0x00012728) popup_fep_vkb2_window_ParamLimits

0x556f,	// (0x00012728) popup_fep_vkb2_window

0x6795,	// (0x0001394e) aid_size_cell_vkb2_ParamLimits

0x6795,	// (0x0001394e) aid_size_cell_vkb2

0x67e9,	// (0x000139a2) popup_fep_vkb2_window_g1_ParamLimits

0x67e9,	// (0x000139a2) popup_fep_vkb2_window_g1

0x6831,	// (0x000139ea) vkb2_area_bottom_pane_ParamLimits

0x6831,	// (0x000139ea) vkb2_area_bottom_pane

0x6885,	// (0x00013a3e) vkb2_area_keypad_pane_ParamLimits

0x6885,	// (0x00013a3e) vkb2_area_keypad_pane

0x68cb,	// (0x00013a84) vkb2_area_top_pane_ParamLimits

0x68cb,	// (0x00013a84) vkb2_area_top_pane

0x6945,	// (0x00013afe) vkb2_top_entry_pane_ParamLimits

0x6945,	// (0x00013afe) vkb2_top_entry_pane

0x696f,	// (0x00013b28) vkb2_top_grid_left_pane_ParamLimits

0x696f,	// (0x00013b28) vkb2_top_grid_left_pane

0x698d,	// (0x00013b46) vkb2_top_grid_right_pane_ParamLimits

0x698d,	// (0x00013b46) vkb2_top_grid_right_pane

0x69ab,	// (0x00013b64) vkb2_cell_keypad_pane_ParamLimits

0x69ab,	// (0x00013b64) vkb2_cell_keypad_pane

0x6a7c,	// (0x00013c35) vkb2_area_bottom_grid_pane_ParamLimits

0x6a7c,	// (0x00013c35) vkb2_area_bottom_grid_pane

0x6aa2,	// (0x00013c5b) vkb2_area_bottom_pane_g1_ParamLimits

0x6aa2,	// (0x00013c5b) vkb2_area_bottom_pane_g1

0x6ac6,	// (0x00013c7f) vkb2_area_bottom_pane_g2_ParamLimits

0x6ac6,	// (0x00013c7f) vkb2_area_bottom_pane_g2

0x6af4,	// (0x00013cad) vkb2_area_bottom_pane_g3_ParamLimits

0x6af4,	// (0x00013cad) vkb2_area_bottom_pane_g3

0x0002,

0xfd95,	// (0x0001cf4e) vkb2_area_bottom_pane_g_ParamLimits

0xfd95,	// (0x0001cf4e) vkb2_area_bottom_pane_g

0x6b55,	// (0x00013d0e) vkb2_top_cell_left_pane_ParamLimits

0x6b55,	// (0x00013d0e) vkb2_top_cell_left_pane

0xdc7e,	// (0x0001ae37) vkb2_top_entry_pane_g1_ParamLimits

0xdc7e,	// (0x0001ae37) vkb2_top_entry_pane_g1

0xdc8c,	// (0x0001ae45) vkb2_top_entry_pane_t1_ParamLimits

0xdc8c,	// (0x0001ae45) vkb2_top_entry_pane_t1

0xdcbe,	// (0x0001ae77) vkb2_top_entry_pane_t2_ParamLimits

0xdcbe,	// (0x0001ae77) vkb2_top_entry_pane_t2

0xdcf0,	// (0x0001aea9) vkb2_top_entry_pane_t3_ParamLimits

0xdcf0,	// (0x0001aea9) vkb2_top_entry_pane_t3

0x0002,

0xfd9c,	// (0x0001cf55) vkb2_top_entry_pane_t_ParamLimits

0xfd9c,	// (0x0001cf55) vkb2_top_entry_pane_t

0x6ba2,	// (0x00013d5b) vkb2_top_grid_right_pane_g1_ParamLimits

0x6ba2,	// (0x00013d5b) vkb2_top_grid_right_pane_g1

0x6bb8,	// (0x00013d71) vkb2_top_grid_right_pane_g2_ParamLimits

0x6bb8,	// (0x00013d71) vkb2_top_grid_right_pane_g2

0x6bd0,	// (0x00013d89) vkb2_top_grid_right_pane_g3_ParamLimits

0x6bd0,	// (0x00013d89) vkb2_top_grid_right_pane_g3

0x6be8,	// (0x00013da1) vkb2_top_grid_right_pane_g4_ParamLimits

0x6be8,	// (0x00013da1) vkb2_top_grid_right_pane_g4

0x0003,

0xfda3,	// (0x0001cf5c) vkb2_top_grid_right_pane_g_ParamLimits

0xfda3,	// (0x0001cf5c) vkb2_top_grid_right_pane_g

0x6bfe,	// (0x00013db7) vkb2_top_cell_left_pane_g1

0x6c15,	// (0x00013dce) vkb2_cell_keypad_pane_g1_ParamLimits

0x6c15,	// (0x00013dce) vkb2_cell_keypad_pane_g1

0xdd14,	// (0x0001aecd) vkb2_cell_keypad_pane_t1_ParamLimits

0xdd14,	// (0x0001aecd) vkb2_cell_keypad_pane_t1

0x6c23,	// (0x00013ddc) vkb2_cell_bottom_grid_pane_ParamLimits

0x6c23,	// (0x00013ddc) vkb2_cell_bottom_grid_pane

0x6c5c,	// (0x00013e15) vkb2_cell_bottom_grid_pane_g1

0xd8cc,	// (0x0001aa85) aid_call2_pane_cp02

0xd8d4,	// (0x0001aa8d) aid_call_pane_cp02

0xd8dc,	// (0x0001aa95) clock_digital_number_pane_cp10

0xd8e4,	// (0x0001aa9d) clock_digital_number_pane_cp11

0xd8ec,	// (0x0001aaa5) clock_digital_number_pane_cp12

0xd8f4,	// (0x0001aaad) clock_digital_number_pane_cp13

0xd8fc,	// (0x0001aab5) clock_digital_separator_pane_cp10

0x4342,	// (0x000114fb) popup_clock_digital_analogue_window_cp2_g1

0x4342,	// (0x000114fb) popup_clock_digital_analogue_window_cp2_g2

0xd904,	// (0x0001aabd) popup_clock_digital_analogue_window_cp2_g3

0x4342,	// (0x000114fb) popup_clock_digital_analogue_window_cp2_g4

0xd904,	// (0x0001aabd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd58,	// (0x0001cf11) popup_clock_digital_analogue_window_cp2_g

0xd90c,	// (0x0001aac5) popup_clock_digital_analogue_window_cp2_t1

0xd91a,	// (0x0001aad3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd63,	// (0x0001cf1c) popup_clock_digital_analogue_window_cp2_t

0xba3c,	// (0x00018bf5) clock_digital_number_pane_cp10_g1

0xba3c,	// (0x00018bf5) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001ccf8) clock_digital_number_pane_cp10_g

0xba3c,	// (0x00018bf5) clock_digital_separator_pane_cp10_g1

0xba3c,	// (0x00018bf5) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001ccf8) clock_digital_separator_pane_cp10_g

0xd747,	// (0x0001a900) uniindi_top_pane_g3

0xd758,	// (0x0001a911) uniindi_top_pane_g4

0x6a36,	// (0x00013bef) vkb2_row_keypad_pane_ParamLimits

0x6a36,	// (0x00013bef) vkb2_row_keypad_pane

0x6c78,	// (0x00013e31) vkb2_cell_t_keypad_pane_ParamLimits

0x6c78,	// (0x00013e31) vkb2_cell_t_keypad_pane

0x6c88,	// (0x00013e41) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6c88,	// (0x00013e41) vkb2_cell_t_keypad_pane_cp08

0x6c9d,	// (0x00013e56) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6c9d,	// (0x00013e56) vkb2_cell_t_keypad_pane_cp09

0x6cb1,	// (0x00013e6a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6cb1,	// (0x00013e6a) vkb2_cell_t_keypad_pane_cp01

0x6cc2,	// (0x00013e7b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6cc2,	// (0x00013e7b) vkb2_cell_t_keypad_pane_cp02

0x6cd3,	// (0x00013e8c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6cd3,	// (0x00013e8c) vkb2_cell_t_keypad_pane_cp03

0x6ce4,	// (0x00013e9d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6ce4,	// (0x00013e9d) vkb2_cell_t_keypad_pane_cp04

0x6cf5,	// (0x00013eae) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6cf5,	// (0x00013eae) vkb2_cell_t_keypad_pane_cp05

0x6d06,	// (0x00013ebf) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6d06,	// (0x00013ebf) vkb2_cell_t_keypad_pane_cp06

0x6d19,	// (0x00013ed2) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6d19,	// (0x00013ed2) vkb2_cell_t_keypad_pane_cp07

0x6d2e,	// (0x00013ee7) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6d2e,	// (0x00013ee7) vkb2_cell_t_keypad_pane_cp10

0x64c8,	// (0x00013681) vkb2_cell_t_keypad_pane_g1

0xdd2b,	// (0x0001aee4) vkb2_cell_t_keypad_pane_t1

0x5460,	// (0x00012619) popup_grid_graphic2_window

0xdd3d,	// (0x0001aef6) aid_size_cell_graphic2_ParamLimits

0xdd3d,	// (0x0001aef6) aid_size_cell_graphic2

0xdd75,	// (0x0001af2e) bg_popup_window_pane_cp21_ParamLimits

0xdd75,	// (0x0001af2e) bg_popup_window_pane_cp21

0xdd83,	// (0x0001af3c) graphic2_pages_pane_ParamLimits

0xdd83,	// (0x0001af3c) graphic2_pages_pane

0xddc9,	// (0x0001af82) grid_graphic2_control_pane_ParamLimits

0xddc9,	// (0x0001af82) grid_graphic2_control_pane

0xde07,	// (0x0001afc0) grid_graphic2_pane_ParamLimits

0xde07,	// (0x0001afc0) grid_graphic2_pane

0xde7d,	// (0x0001b036) cell_graphic2_pane

0x3249,	// (0x00010402) main_comp_mode_pane

0xcf55,	// (0x0001a10e) list_ai3_gene_pane_ParamLimits

0xd380,	// (0x0001a539) bg_popup_window_pane_cp19_ParamLimits

0xd38c,	// (0x0001a545) bg_touch_area_indi_pane_ParamLimits

0xd38c,	// (0x0001a545) bg_touch_area_indi_pane

0xd3a2,	// (0x0001a55b) bg_touch_area_indi_pane_cp01_ParamLimits

0xd3a2,	// (0x0001a55b) bg_touch_area_indi_pane_cp01

0xd3ba,	// (0x0001a573) bg_touch_area_indi_pane_cp02_ParamLimits

0xd3ba,	// (0x0001a573) bg_touch_area_indi_pane_cp02

0xd3d4,	// (0x0001a58d) bg_touch_area_indi_pane_cp03_ParamLimits

0xd3d4,	// (0x0001a58d) bg_touch_area_indi_pane_cp03

0xd3ee,	// (0x0001a5a7) popup_slider_window_g1_ParamLimits

0xd40a,	// (0x0001a5c3) popup_slider_window_g2_ParamLimits

0xd426,	// (0x0001a5df) popup_slider_window_g3_ParamLimits

0xfced,	// (0x0001cea6) popup_slider_window_g_ParamLimits

0xd482,	// (0x0001a63b) popup_slider_window_t1_ParamLimits

0xd4f6,	// (0x0001a6af) small_volume_slider_vertical_pane_ParamLimits

0xde7d,	// (0x0001b036) cell_graphic2_pane_ParamLimits

0xdecf,	// (0x0001b088) bg_button_pane_cp10_ParamLimits

0xdecf,	// (0x0001b088) bg_button_pane_cp10

0xdee4,	// (0x0001b09d) bg_button_pane_cp11_ParamLimits

0xdee4,	// (0x0001b09d) bg_button_pane_cp11

0xdef9,	// (0x0001b0b2) graphic2_pages_pane_g1_ParamLimits

0xdef9,	// (0x0001b0b2) graphic2_pages_pane_g1

0xdf14,	// (0x0001b0cd) graphic2_pages_pane_g2_ParamLimits

0xdf14,	// (0x0001b0cd) graphic2_pages_pane_g2

0x0001,

0xfdb1,	// (0x0001cf6a) graphic2_pages_pane_g_ParamLimits

0xfdb1,	// (0x0001cf6a) graphic2_pages_pane_g

0xdf2c,	// (0x0001b0e5) graphic2_pages_pane_t1_ParamLimits

0xdf2c,	// (0x0001b0e5) graphic2_pages_pane_t1

0xdf42,	// (0x0001b0fb) cell_graphic2_control_pane_ParamLimits

0xdf42,	// (0x0001b0fb) cell_graphic2_control_pane

0xdf65,	// (0x0001b11e) cell_graphic2_pane_g1_ParamLimits

0xdf65,	// (0x0001b11e) cell_graphic2_pane_g1

0xdf72,	// (0x0001b12b) cell_graphic2_pane_g2_ParamLimits

0xdf72,	// (0x0001b12b) cell_graphic2_pane_g2

0xdf7f,	// (0x0001b138) cell_graphic2_pane_g3_ParamLimits

0xdf7f,	// (0x0001b138) cell_graphic2_pane_g3

0xdf8c,	// (0x0001b145) cell_graphic2_pane_g4_ParamLimits

0xdf8c,	// (0x0001b145) cell_graphic2_pane_g4

0xdf99,	// (0x0001b152) cell_graphic2_pane_g5_ParamLimits

0xdf99,	// (0x0001b152) cell_graphic2_pane_g5

0x0004,

0xfdb6,	// (0x0001cf6f) cell_graphic2_pane_g_ParamLimits

0xfdb6,	// (0x0001cf6f) cell_graphic2_pane_g

0xdfb4,	// (0x0001b16d) cell_graphic2_pane_t1_ParamLimits

0xdfb4,	// (0x0001b16d) cell_graphic2_pane_t1

0x9028,	// (0x000161e1) grid_highlight_pane_cp11_ParamLimits

0x9028,	// (0x000161e1) grid_highlight_pane_cp11

0x3668,	// (0x00010821) bg_button_pane_cp05

0xdfdd,	// (0x0001b196) cell_graphic2_control_pane_g1

0xba3c,	// (0x00018bf5) bg_touch_area_indi_pane_g1

0xe005,	// (0x0001b1be) aid_cmod_rocker_key_size

0xe00f,	// (0x0001b1c8) aid_cmode_itu_key_size

0xe019,	// (0x0001b1d2) main_cmode_video_pane

0xe023,	// (0x0001b1dc) main_comp_mode_itu_pane

0xe02f,	// (0x0001b1e8) main_comp_mode_rocker_pane

0xe03b,	// (0x0001b1f4) cell_cmode_rocker_pane_ParamLimits

0xe03b,	// (0x0001b1f4) cell_cmode_rocker_pane

0xe04f,	// (0x0001b208) cell_cmode_itu_pane_ParamLimits

0xe04f,	// (0x0001b208) cell_cmode_itu_pane

0x3be8,	// (0x00010da1) bg_button_pane_cp06_ParamLimits

0x3be8,	// (0x00010da1) bg_button_pane_cp06

0xbcb7,	// (0x00018e70) cell_cmode_rocker_pane_g1_ParamLimits

0xbcb7,	// (0x00018e70) cell_cmode_rocker_pane_g1

0xd59d,	// (0x0001a756) cell_cmode_rocker_pane_g2_ParamLimits

0xd59d,	// (0x0001a756) cell_cmode_rocker_pane_g2

0x0001,

0xfdc6,	// (0x0001cf7f) cell_cmode_rocker_pane_g_ParamLimits

0xfdc6,	// (0x0001cf7f) cell_cmode_rocker_pane_g

0x3249,	// (0x00010402) bg_button_pane_cp07

0xe066,	// (0x0001b21f) cell_cmode_itu_pane_g1

0xe06f,	// (0x0001b228) cell_cmode_itu_pane_t1

0xe07d,	// (0x0001b236) cell_cmode_itu_pane_t2

0x0001,

0xfdcb,	// (0x0001cf84) cell_cmode_itu_pane_t

0xd7cb,	// (0x0001a984) aid_touch_ctrl_left

0xd7d3,	// (0x0001a98c) aid_touch_ctrl_right

0x3249,	// (0x00010402) compa_mode_pane

0xe08b,	// (0x0001b244) aid_cmod_rocker_key_size_cp

0xe095,	// (0x0001b24e) aid_cmode_itu_key_size_cp

0xe09f,	// (0x0001b258) compa_mode_pane_g1

0xe0a7,	// (0x0001b260) compa_mode_pane_g2

0xe0af,	// (0x0001b268) compa_mode_pane_g3

0x0002,

0xfdd0,	// (0x0001cf89) compa_mode_pane_g

0xe0b7,	// (0x0001b270) main_comp_mode_itu_pane_cp

0xe0bf,	// (0x0001b278) main_comp_mode_rocker_pane_cp

0xe0c7,	// (0x0001b280) cell_cmode_itu_pane_cp_ParamLimits

0xe0c7,	// (0x0001b280) cell_cmode_itu_pane_cp

0xe0dc,	// (0x0001b295) cell_cmode_rocker_pane_cp_ParamLimits

0xe0dc,	// (0x0001b295) cell_cmode_rocker_pane_cp

0x3be8,	// (0x00010da1) bg_button_pane_cp06_cp_ParamLimits

0x3be8,	// (0x00010da1) bg_button_pane_cp06_cp

0xbcb7,	// (0x00018e70) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbcb7,	// (0x00018e70) cell_cmode_rocker_pane_g1_cp

0xba3c,	// (0x00018bf5) cell_cmode_rocker_pane_g2_cp

0x3249,	// (0x00010402) bg_button_pane_cp07_cp

0xe0ee,	// (0x0001b2a7) cell_cmode_itu_pane_g1_cp

0xe0f7,	// (0x0001b2b0) cell_cmode_itu_pane_t1_cp

0xe0f7,	// (0x0001b2b0) cell_cmode_itu_pane_t2_cp

0xa548,	// (0x00017701) settings_code_pane_cp2

0x3492,	// (0x0001064b) bg_popup_window_pane_cp3_ParamLimits

0x3856,	// (0x00010a0f) heading_pane_cp3_ParamLimits

0x3862,	// (0x00010a1b) listscroll_popup_graphic_pane_ParamLimits

0x625b,	// (0x00013414) fep_hwr_aid_pane_ParamLimits

0x66ee,	// (0x000138a7) aid_touch_sctrl_top_ParamLimits

0x6709,	// (0x000138c2) sctrl_sk_top_pane_g1_ParamLimits

0x64c8,	// (0x00013681) sctrl_sk_top_pane_g2_ParamLimits

0xfd06,	// (0x0001cebf) sctrl_sk_top_pane_g_ParamLimits

0x6716,	// (0x000138cf) sctrl_sk_top_pane_t1_ParamLimits

0x66ee,	// (0x000138a7) aid_touch_sctrl_bottom_ParamLimits

0x6716,	// (0x000138cf) sctrl_sk_bottom_pane_t1_ParamLimits

0xd711,	// (0x0001a8ca) aid_area_touch_clock

0x690d,	// (0x00013ac6) aid_vkb2_area_top_pane_cell_ParamLimits

0x690d,	// (0x00013ac6) aid_vkb2_area_top_pane_cell

0x6a58,	// (0x00013c11) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6a58,	// (0x00013c11) aid_vkb2_area_bottom_pane_cell

0xdc76,	// (0x0001ae2f) popup_char_count_window

0xe105,	// (0x0001b2be) popup_char_count_window_g1

0xe10e,	// (0x0001b2c7) popup_char_count_window_g2

0xe117,	// (0x0001b2d0) popup_char_count_window_g3

0x0002,

0xfdd7,	// (0x0001cf90) popup_char_count_window_g

0xe120,	// (0x0001b2d9) popup_char_count_window_t1

0x67c7,	// (0x00013980) popup_fep_char_preview_window_ParamLimits

0x67c7,	// (0x00013980) popup_fep_char_preview_window

0x692b,	// (0x00013ae4) vkb2_top_candi_pane_ParamLimits

0x692b,	// (0x00013ae4) vkb2_top_candi_pane

0xe12e,	// (0x0001b2e7) cell_vkb2_top_candi_pane_ParamLimits

0xe12e,	// (0x0001b2e7) cell_vkb2_top_candi_pane

0x6d43,	// (0x00013efc) bg_popup_fep_char_preview_window_ParamLimits

0x6d43,	// (0x00013efc) bg_popup_fep_char_preview_window

0x6d51,	// (0x00013f0a) popup_fep_char_preview_window_t1_ParamLimits

0x6d51,	// (0x00013f0a) popup_fep_char_preview_window_t1

0xe17f,	// (0x0001b338) bg_popup_fep_char_preview_window_g1

0xe187,	// (0x0001b340) bg_popup_fep_char_preview_window_g2

0xe18f,	// (0x0001b348) bg_popup_fep_char_preview_window_g3

0xe197,	// (0x0001b350) bg_popup_fep_char_preview_window_g4

0xe19f,	// (0x0001b358) bg_popup_fep_char_preview_window_g5

0x6d8b,	// (0x00013f44) bg_popup_fep_char_preview_window_g6

0xe1a7,	// (0x0001b360) bg_popup_fep_char_preview_window_g7

0xe1af,	// (0x0001b368) bg_popup_fep_char_preview_window_g8

0xe1b7,	// (0x0001b370) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdde,	// (0x0001cf97) bg_popup_fep_char_preview_window_g

0x64c8,	// (0x00013681) cell_vkb2_top_candi_pane_g1_ParamLimits

0x64c8,	// (0x00013681) cell_vkb2_top_candi_pane_g1

0x64d6,	// (0x0001368f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x64d6,	// (0x0001368f) cell_vkb2_top_candi_pane_g2

0xcf1e,	// (0x0001a0d7) cell_vkb2_top_candi_pane_g3_ParamLimits

0xcf1e,	// (0x0001a0d7) cell_vkb2_top_candi_pane_g3

0x6d93,	// (0x00013f4c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6d93,	// (0x00013f4c) cell_vkb2_top_candi_pane_g4

0xc37b,	// (0x00019534) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc37b,	// (0x00019534) cell_vkb2_top_candi_pane_g5

0x6db4,	// (0x00013f6d) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6db4,	// (0x00013f6d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf1,	// (0x0001cfaa) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf1,	// (0x0001cfaa) cell_vkb2_top_candi_pane_g

0x6dc2,	// (0x00013f7b) cell_vkb2_top_candi_pane_t1

0x60bb,	// (0x00013274) aid_size_touch_slider_mark_ParamLimits

0x60bb,	// (0x00013274) aid_size_touch_slider_mark

0xddb9,	// (0x0001af72) grid_graphic2_catg_pane_ParamLimits

0xddb9,	// (0x0001af72) grid_graphic2_catg_pane

0xde57,	// (0x0001b010) popup_grid_graphic2_window_t1_ParamLimits

0xde57,	// (0x0001b010) popup_grid_graphic2_window_t1

0xde69,	// (0x0001b022) popup_grid_graphic2_window_t2_ParamLimits

0xde69,	// (0x0001b022) popup_grid_graphic2_window_t2

0x0001,

0xfdac,	// (0x0001cf65) popup_grid_graphic2_window_t_ParamLimits

0xfdac,	// (0x0001cf65) popup_grid_graphic2_window_t

0x3668,	// (0x00010821) bg_button_pane_cp05_ParamLimits

0xdfdd,	// (0x0001b196) cell_graphic2_control_pane_g1_ParamLimits

0xe1bf,	// (0x0001b378) cell_graphic2_catg_pane_ParamLimits

0xe1bf,	// (0x0001b378) cell_graphic2_catg_pane

0x3249,	// (0x00010402) bg_button_pane_cp12

0xe1d1,	// (0x0001b38a) cell_graphic2_catg_pane_g1

0xd6dd,	// (0x0001a896) cell_tb_ext_pane_t1_ParamLimits

0x6b75,	// (0x00013d2e) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6b75,	// (0x00013d2e) vkb2_top_cell_right_narrow_pane

0x6b8d,	// (0x00013d46) vkb2_top_cell_right_wide_pane_ParamLimits

0x6b8d,	// (0x00013d46) vkb2_top_cell_right_wide_pane

0x624d,	// (0x00013406) bg_vkb2_func_pane_ParamLimits

0x624d,	// (0x00013406) bg_vkb2_func_pane

0x6bfe,	// (0x00013db7) vkb2_top_cell_left_pane_g1_ParamLimits

0x624d,	// (0x00013406) bg_vkb2_fuc_pane_cp03_ParamLimits

0x624d,	// (0x00013406) bg_vkb2_fuc_pane_cp03

0x6c5c,	// (0x00013e15) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8f0a,	// (0x000160c3) bg_vkb2_func_pane_g1

0x8f12,	// (0x000160cb) bg_vkb2_func_pane_g2

0x8f22,	// (0x000160db) bg_vkb2_func_pane_g3

0x8f1a,	// (0x000160d3) bg_vkb2_func_pane_g4

0x8f2a,	// (0x000160e3) bg_vkb2_func_pane_g5

0x8f32,	// (0x000160eb) bg_vkb2_func_pane_g6

0x8f3a,	// (0x000160f3) bg_vkb2_func_pane_g7

0x8f42,	// (0x000160fb) bg_vkb2_func_pane_g8

0x8f02,	// (0x000160bb) bg_vkb2_func_pane_g9

0x0008,

0xfdfe,	// (0x0001cfb7) bg_vkb2_func_pane_g

0x624d,	// (0x00013406) bg_vkb2_fuc_pane_cp01_ParamLimits

0x624d,	// (0x00013406) bg_vkb2_fuc_pane_cp01

0x6bfe,	// (0x00013db7) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6bfe,	// (0x00013db7) vkb2_top_cell_right_wide_pane_g1

0x624d,	// (0x00013406) bg_vkb2_fuc_pane_cp02_ParamLimits

0x624d,	// (0x00013406) bg_vkb2_fuc_pane_cp02

0x6c5c,	// (0x00013e15) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6c5c,	// (0x00013e15) vkb2_top_cell_right_narrow_pane_g1

0xd2fe,	// (0x0001a4b7) aid_touch_area_decrease_ParamLimits

0xd2fe,	// (0x0001a4b7) aid_touch_area_decrease

0xd322,	// (0x0001a4db) aid_touch_area_increase_ParamLimits

0xd322,	// (0x0001a4db) aid_touch_area_increase

0xd32e,	// (0x0001a4e7) aid_touch_area_mute_ParamLimits

0xd32e,	// (0x0001a4e7) aid_touch_area_mute

0xd352,	// (0x0001a50b) aid_touch_area_slider_ParamLimits

0xd352,	// (0x0001a50b) aid_touch_area_slider

0xd442,	// (0x0001a5fb) popup_slider_window_g4_ParamLimits

0xd442,	// (0x0001a5fb) popup_slider_window_g4

0xd44e,	// (0x0001a607) popup_slider_window_g5_ParamLimits

0xd44e,	// (0x0001a607) popup_slider_window_g5

0xd470,	// (0x0001a629) popup_slider_window_g6_ParamLimits

0xd470,	// (0x0001a629) popup_slider_window_g6

0xd4b0,	// (0x0001a669) popup_slider_window_t2_ParamLimits

0xd4b0,	// (0x0001a669) popup_slider_window_t2

0x0001,

0xfcfa,	// (0x0001ceb3) popup_slider_window_t_ParamLimits

0xfcfa,	// (0x0001ceb3) popup_slider_window_t

0xd4c8,	// (0x0001a681) slider_pane_ParamLimits

0xd4c8,	// (0x0001a681) slider_pane

0xe1da,	// (0x0001b393) slider_pane_g1_ParamLimits

0xe1da,	// (0x0001b393) slider_pane_g1

0xe1ee,	// (0x0001b3a7) slider_pane_g2_ParamLimits

0xe1ee,	// (0x0001b3a7) slider_pane_g2

0xe204,	// (0x0001b3bd) slider_pane_g3_ParamLimits

0xe204,	// (0x0001b3bd) slider_pane_g3

0x0003,

0xfe11,	// (0x0001cfca) slider_pane_g_ParamLimits

0xfe11,	// (0x0001cfca) slider_pane_g

0x88cd,	// (0x00015a86) popup_tb_float_extension_window_ParamLimits

0x88cd,	// (0x00015a86) popup_tb_float_extension_window

0xe230,	// (0x0001b3e9) aid_size_cell_tb_float_ext

0x3249,	// (0x00010402) bg_popup_sub_window_cp28

0xe23c,	// (0x0001b3f5) grid_tb_float_ext_pane

0xe248,	// (0x0001b401) cell_tb_float_ext_pane_ParamLimits

0xe248,	// (0x0001b401) cell_tb_float_ext_pane

0xe264,	// (0x0001b41d) cell_tb_float_ext_pane_g1

0xe26d,	// (0x0001b426) grid_highlight_pane_cp12

0x63a2,	// (0x0001355b) cell_last_hwr_side_pane_ParamLimits

0x63a2,	// (0x0001355b) cell_last_hwr_side_pane

0xba3c,	// (0x00018bf5) cell_last_hwr_side_pane_g1

0xe276,	// (0x0001b42f) cell_last_hwr_side_pane_g2

0x0001,

0xfe1a,	// (0x0001cfd3) cell_last_hwr_side_pane_g

0x6b24,	// (0x00013cdd) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6b24,	// (0x00013cdd) vkb2_area_bottom_space_btn_pane

0x64c8,	// (0x00013681) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdd2b,	// (0x0001aee4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6dc2,	// (0x00013f7b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6de0,	// (0x00013f99) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6de0,	// (0x00013f99) vkb2_area_bottom_space_btn_pane_g1

0x6e1a,	// (0x00013fd3) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6e1a,	// (0x00013fd3) vkb2_area_bottom_space_btn_pane_g2

0x6e50,	// (0x00014009) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6e50,	// (0x00014009) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x0001cfd8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x0001cfd8) vkb2_area_bottom_space_btn_pane_g

0x6312,	// (0x000134cb) cel_fep_hwr_func_pane_ParamLimits

0x6312,	// (0x000134cb) cel_fep_hwr_func_pane

0x634e,	// (0x00013507) cell_hwr_side_button_pane_ParamLimits

0x634e,	// (0x00013507) cell_hwr_side_button_pane

0xd711,	// (0x0001a8ca) aid_area_touch_clock_ParamLimits

0x3668,	// (0x00010821) bg_uniindi_top_pane_ParamLimits

0xd725,	// (0x0001a8de) uniindi_top_pane_g1_ParamLimits

0xd73b,	// (0x0001a8f4) uniindi_top_pane_g2_ParamLimits

0xd747,	// (0x0001a900) uniindi_top_pane_g3_ParamLimits

0xd758,	// (0x0001a911) uniindi_top_pane_g4_ParamLimits

0xfd32,	// (0x0001ceeb) uniindi_top_pane_g_ParamLimits

0xd765,	// (0x0001a91e) uniindi_top_pane_t1_ParamLimits

0x3668,	// (0x00010821) bg_vkb2_func_pane_cp01_ParamLimits

0x3668,	// (0x00010821) bg_vkb2_func_pane_cp01

0xe27f,	// (0x0001b438) cel_fep_hwr_func_pane_g1_ParamLimits

0xe27f,	// (0x0001b438) cel_fep_hwr_func_pane_g1

0x3668,	// (0x00010821) bg_vkb2_func_pane_cp02_ParamLimits

0x3668,	// (0x00010821) bg_vkb2_func_pane_cp02

0xe27f,	// (0x0001b438) cell_hwr_side_button_pane_g1_ParamLimits

0xe27f,	// (0x0001b438) cell_hwr_side_button_pane_g1

0x8d55,	// (0x00015f0e) status_pane_g4_ParamLimits

0x8d55,	// (0x00015f0e) status_pane_g4

0x8d6f,	// (0x00015f28) status_pane_t1

0xb7db,	// (0x00018994) form2_midp_gauge_slider_cont_pane

0xb7e3,	// (0x0001899c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb7f5,	// (0x000189ae) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb807,	// (0x000189c0) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x0001ccab) form2_midp_gauge_slider_pane_t_ParamLimits

0xb819,	// (0x000189d2) form2_midp_slider_pane_ParamLimits

0x6787,	// (0x00013940) aid_size_cell_func_vkb2_ParamLimits

0x6787,	// (0x00013940) aid_size_cell_func_vkb2

0xe21c,	// (0x0001b3d5) slider_pane_g4_ParamLimits

0xe21c,	// (0x0001b3d5) slider_pane_g4

0x6e9a,	// (0x00014053) form2_midp_gauge_slider_pane_t2_cp01

0x6ea8,	// (0x00014061) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6ea8,	// (0x00014061) form2_midp_gauge_slider_pane_t3_cp01

0x6ec5,	// (0x0001407e) form2_midp_slider_pane_cp01

0x3249,	// (0x00010402) navi_smil_pane

0xe2b8,	// (0x0001b471) navi_smil_pane_g1

0xe2c0,	// (0x0001b479) navi_smil_pane_t1

0xe28d,	// (0x0001b446) form2_midp_slider_pane_g1

0xe296,	// (0x0001b44f) form2_midp_slider_pane_g2

0xe29e,	// (0x0001b457) form2_midp_slider_pane_g3

0xe28d,	// (0x0001b446) form2_midp_slider_pane_g4

0xe2a6,	// (0x0001b45f) form2_midp_slider_pane_g5

0x0004,

0xfe28,	// (0x0001cfe1) form2_midp_slider_pane_g

0x6e8a,	// (0x00014043) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6e8a,	// (0x00014043) vkb2_area_bottom_space_btn_pane_g4

0x8b6c,	// (0x00015d25) lc0_navi_pane_ParamLimits

0x8b6c,	// (0x00015d25) lc0_navi_pane

0x8be8,	// (0x00015da1) lc0_stat_indi_pane_ParamLimits

0x8be8,	// (0x00015da1) lc0_stat_indi_pane

0x8bff,	// (0x00015db8) ls0_title_pane_ParamLimits

0x8bff,	// (0x00015db8) ls0_title_pane

0x3be8,	// (0x00010da1) bg_popup_sub_pane_cp14_ParamLimits

0xd6f8,	// (0x0001a8b1) list_uniindi_pane_ParamLimits

0xd704,	// (0x0001a8bd) uniindi_top_pane_ParamLimits

0xd7a3,	// (0x0001a95c) list_single_uniindi_pane_g1_ParamLimits

0xd7b6,	// (0x0001a96f) list_single_uniindi_pane_t1_ParamLimits

0x6ece,	// (0x00014087) lc0_stat_clock_pane_ParamLimits

0x6ece,	// (0x00014087) lc0_stat_clock_pane

0xe2ce,	// (0x0001b487) lc0_stat_indi_pane_g1_ParamLimits

0xe2ce,	// (0x0001b487) lc0_stat_indi_pane_g1

0xe2db,	// (0x0001b494) lc0_stat_indi_pane_g2_ParamLimits

0xe2db,	// (0x0001b494) lc0_stat_indi_pane_g2

0x0001,

0xfe33,	// (0x0001cfec) lc0_stat_indi_pane_g_ParamLimits

0xfe33,	// (0x0001cfec) lc0_stat_indi_pane_g

0x6edb,	// (0x00014094) lc0_uni_indicator_pane_ParamLimits

0x6edb,	// (0x00014094) lc0_uni_indicator_pane

0xe2e8,	// (0x0001b4a1) ls0_title_pane_g1_ParamLimits

0xe2e8,	// (0x0001b4a1) ls0_title_pane_g1

0xe2fc,	// (0x0001b4b5) ls0_title_pane_t1_ParamLimits

0xe2fc,	// (0x0001b4b5) ls0_title_pane_t1

0x6ee8,	// (0x000140a1) lc0_uni_indicator_pane_g1_ParamLimits

0x6ee8,	// (0x000140a1) lc0_uni_indicator_pane_g1

0xe332,	// (0x0001b4eb) lc0_stat_clock_pane_t1

0x3249,	// (0x00010402) main_ai5_pane

0xe340,	// (0x0001b4f9) ai5_sk_pane_ParamLimits

0xe340,	// (0x0001b4f9) ai5_sk_pane

0xe34d,	// (0x0001b506) cell_ai5_widget_pane_ParamLimits

0xe34d,	// (0x0001b506) cell_ai5_widget_pane

0xe8e9,	// (0x0001baa2) aid_size_cell_widget_grid

0xe8f7,	// (0x0001bab0) bg_ai5_widget_pane_ParamLimits

0xe8f7,	// (0x0001bab0) bg_ai5_widget_pane

0xe96b,	// (0x0001bb24) cell_ai5_widget_pane_g2

0xe97b,	// (0x0001bb34) cell_ai5_widget_pane_g3

0xe992,	// (0x0001bb4b) cell_ai5_widget_pane_g4

0xe99e,	// (0x0001bb57) cell_ai5_widget_pane_g5

0xe9aa,	// (0x0001bb63) cell_ai5_widget_pane_g6

0xe9b6,	// (0x0001bb6f) cell_ai5_widget_pane_g7

0xe9fe,	// (0x0001bbb7) cell_ai5_widget_pane_t1_ParamLimits

0xe9fe,	// (0x0001bbb7) cell_ai5_widget_pane_t1

0xea1b,	// (0x0001bbd4) cell_ai5_widget_pane_t2_ParamLimits

0xea1b,	// (0x0001bbd4) cell_ai5_widget_pane_t2

0xea33,	// (0x0001bbec) cell_ai5_widget_pane_t3_ParamLimits

0xea33,	// (0x0001bbec) cell_ai5_widget_pane_t3

0xea4b,	// (0x0001bc04) cell_ai5_widget_pane_t4_ParamLimits

0xea4b,	// (0x0001bc04) cell_ai5_widget_pane_t4

0xea68,	// (0x0001bc21) cell_ai5_widget_pane_t5_ParamLimits

0xea68,	// (0x0001bc21) cell_ai5_widget_pane_t5

0xea87,	// (0x0001bc40) cell_ai5_widget_pane_t6_ParamLimits

0xea87,	// (0x0001bc40) cell_ai5_widget_pane_t6

0xea99,	// (0x0001bc52) cell_ai5_widget_pane_t7_ParamLimits

0xea99,	// (0x0001bc52) cell_ai5_widget_pane_t7

0xeab2,	// (0x0001bc6b) cell_ai5_widget_pane_t8_ParamLimits

0xeab2,	// (0x0001bc6b) cell_ai5_widget_pane_t8

0x0009,

0xfe4d,	// (0x0001d006) cell_ai5_widget_pane_t_ParamLimits

0xfe4d,	// (0x0001d006) cell_ai5_widget_pane_t

0xeb06,	// (0x0001bcbf) grid_ai5_widget_pane

0x3be8,	// (0x00010da1) highlight_cell_ai5_widget_pane_ParamLimits

0x3be8,	// (0x00010da1) highlight_cell_ai5_widget_pane

0xeb1a,	// (0x0001bcd3) ai5_sk_left_pane

0xeb24,	// (0x0001bcdd) ai5_sk_middle_pane

0xeb2e,	// (0x0001bce7) ai5_sk_right_pane

0xeb38,	// (0x0001bcf1) bg_ai5_widget_pane_g1_ParamLimits

0xeb38,	// (0x0001bcf1) bg_ai5_widget_pane_g1

0xeb44,	// (0x0001bcfd) bg_ai5_widget_pane_g2_ParamLimits

0xeb44,	// (0x0001bcfd) bg_ai5_widget_pane_g2

0xeb50,	// (0x0001bd09) bg_ai5_widget_pane_g3_ParamLimits

0xeb50,	// (0x0001bd09) bg_ai5_widget_pane_g3

0xeb5c,	// (0x0001bd15) bg_ai5_widget_pane_g4_ParamLimits

0xeb5c,	// (0x0001bd15) bg_ai5_widget_pane_g4

0xeb68,	// (0x0001bd21) bg_ai5_widget_pane_g5_ParamLimits

0xeb68,	// (0x0001bd21) bg_ai5_widget_pane_g5

0xeb74,	// (0x0001bd2d) bg_ai5_widget_pane_g6_ParamLimits

0xeb74,	// (0x0001bd2d) bg_ai5_widget_pane_g6

0xeb80,	// (0x0001bd39) bg_ai5_widget_pane_g7_ParamLimits

0xeb80,	// (0x0001bd39) bg_ai5_widget_pane_g7

0xeb8c,	// (0x0001bd45) bg_ai5_widget_pane_g8_ParamLimits

0xeb8c,	// (0x0001bd45) bg_ai5_widget_pane_g8

0xeb98,	// (0x0001bd51) bg_ai5_widget_pane_g9_ParamLimits

0xeb98,	// (0x0001bd51) bg_ai5_widget_pane_g9

0x0008,

0xfe62,	// (0x0001d01b) bg_ai5_widget_pane_g_ParamLimits

0xfe62,	// (0x0001d01b) bg_ai5_widget_pane_g

0xebce,	// (0x0001bd87) cell_shortcut_ai5_widget_pane_ParamLimits

0xebce,	// (0x0001bd87) cell_shortcut_ai5_widget_pane

0x8005,	// (0x000151be) bg_cell_shortcut_ai5_widget_pane

0xebe1,	// (0x0001bd9a) cell_grid_ai5_widget_pane_g1

0x8005,	// (0x000151be) highlight_cell_shortcut_ai5_widget_pane

0x8f0a,	// (0x000160c3) ai5_sk_left_pane_g1

0xebea,	// (0x0001bda3) ai5_sk_left_pane_g2

0xebf2,	// (0x0001bdab) ai5_sk_left_pane_g3

0xebfa,	// (0x0001bdb3) ai5_sk_left_pane_g4

0x0003,

0xfe75,	// (0x0001d02e) ai5_sk_left_pane_g

0xec02,	// (0x0001bdbb) ai5_sk_left_pane_t1

0x8f12,	// (0x000160cb) ai5_sk_right_pane_g1

0xec10,	// (0x0001bdc9) ai5_sk_right_pane_g2

0xec18,	// (0x0001bdd1) ai5_sk_right_pane_g3

0xec20,	// (0x0001bdd9) ai5_sk_right_pane_g4

0x0003,

0xfe7e,	// (0x0001d037) ai5_sk_right_pane_g

0xec28,	// (0x0001bde1) ai5_sk_right_pane_t1

0x8f12,	// (0x000160cb) ai5_sk_middle_pane_g1

0x8f0a,	// (0x000160c3) ai5_sk_middle_pane_g2

0x8f2a,	// (0x000160e3) ai5_sk_middle_pane_g3

0xec18,	// (0x0001bdd1) ai5_sk_middle_pane_g4

0xebf2,	// (0x0001bdab) ai5_sk_middle_pane_g5

0xec36,	// (0x0001bdef) ai5_sk_middle_pane_g6

0xec3e,	// (0x0001bdf7) ai5_sk_middle_pane_g7

0x0006,

0xfe87,	// (0x0001d040) ai5_sk_middle_pane_g

0x89ee,	// (0x00015ba7) aid_touch_area_size_lc0_ParamLimits

0x89ee,	// (0x00015ba7) aid_touch_area_size_lc0

0x64f7,	// (0x000136b0) cell_hwr_candidate_pane_t1_ParamLimits

0x8a0c,	// (0x00015bc5) aid_touch_navi_pane

0x8cff,	// (0x00015eb8) status_dt_navi_pane_ParamLimits

0x8cff,	// (0x00015eb8) status_dt_navi_pane

0x8d0c,	// (0x00015ec5) status_dt_sta_pane_ParamLimits

0x8d0c,	// (0x00015ec5) status_dt_sta_pane

0xec46,	// (0x0001bdff) dt_sta_controll_pane

0xec53,	// (0x0001be0c) dt_sta_indi_pane

0xec64,	// (0x0001be1d) dt_sta_title_pane

0x3668,	// (0x00010821) bg_dt_sta_indi_pane_ParamLimits

0x3668,	// (0x00010821) bg_dt_sta_indi_pane

0xec77,	// (0x0001be30) dt_sta_battery_pane

0xec7f,	// (0x0001be38) dt_sta_indi_pane_g1

0xec88,	// (0x0001be41) dt_sta_indi_pane_g2

0xec91,	// (0x0001be4a) dt_sta_indi_pane_g3

0x0002,

0xfe96,	// (0x0001d04f) dt_sta_indi_pane_g

0xec9a,	// (0x0001be53) dt_sta_signal_pane

0x3be8,	// (0x00010da1) bg_dt_sta_title_pane_ParamLimits

0x3be8,	// (0x00010da1) bg_dt_sta_title_pane

0xeca3,	// (0x0001be5c) dt_sta_title_pane_g1

0xecab,	// (0x0001be64) dt_sta_title_pane_t1_ParamLimits

0xecab,	// (0x0001be64) dt_sta_title_pane_t1

0x3249,	// (0x00010402) bg_dt_sta_control_pane

0xecc0,	// (0x0001be79) dt_sta_controll_pane_g1

0xecc9,	// (0x0001be82) bg_dt_sta_title_pane_g1

0xecd2,	// (0x0001be8b) bg_dt_sta_title_pane_g2

0xecdb,	// (0x0001be94) bg_dt_sta_title_pane_g3

0x0002,

0xfe9d,	// (0x0001d056) bg_dt_sta_title_pane_g

0xba3c,	// (0x00018bf5) bg_dt_sta_indi_pane_g1

0xece4,	// (0x0001be9d) dt_sta_signal_pane_g1

0xecec,	// (0x0001bea5) dt_sta_signal_pane_g2

0x0001,

0xfea4,	// (0x0001d05d) dt_sta_signal_pane_g

0xecf4,	// (0x0001bead) dt_sta_battery_pane_g1

0xecfd,	// (0x0001beb6) dt_sta_battery_pane_t1

0xba3c,	// (0x00018bf5) bg_dt_sta_control_pane_g1

0x449d,	// (0x00011656) fep_china_uni_eep_pane

0x44a5,	// (0x0001165e) fep_china_uni_entry_pane_ParamLimits

0x44b5,	// (0x0001166e) popup_fep_china_uni_window_g1_ParamLimits

0x44c5,	// (0x0001167e) popup_fep_china_uni_window_g2_ParamLimits

0x44c5,	// (0x0001167e) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001c8d1) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001c8d1) popup_fep_china_uni_window_g

0xed0c,	// (0x0001bec5) fep_china_uni_eep_pane_g1

0xed14,	// (0x0001becd) fep_china_uni_eep_pane_t1

0xe2af,	// (0x0001b468) aid_touch_area_size_smil_player

0x8b64,	// (0x00015d1d) lc0_clock_pane

0x8d63,	// (0x00015f1c) status_pane_g5_ParamLimits

0x8d63,	// (0x00015f1c) status_pane_g5

0x8552,	// (0x0001570b) popup_keymap_window

0x8d21,	// (0x00015eda) status_icon_pane

0xe97b,	// (0x0001bb34) cell_ai5_widget_pane_g3_ParamLimits

0xe992,	// (0x0001bb4b) cell_ai5_widget_pane_g4_ParamLimits

0xe99e,	// (0x0001bb57) cell_ai5_widget_pane_g5_ParamLimits

0xe9c2,	// (0x0001bb7b) cell_ai5_widget_pane_g8_ParamLimits

0xe9c2,	// (0x0001bb7b) cell_ai5_widget_pane_g8

0xe9d6,	// (0x0001bb8f) cell_ai5_widget_pane_g9_ParamLimits

0xe9d6,	// (0x0001bb8f) cell_ai5_widget_pane_g9

0xe9ea,	// (0x0001bba3) cell_ai5_widget_pane_g10_ParamLimits

0xe9ea,	// (0x0001bba3) cell_ai5_widget_pane_g10

0xed23,	// (0x0001bedc) status_icon_pane_g1

0x3249,	// (0x00010402) bg_popup_sub_pane_cp13

0xed2b,	// (0x0001bee4) popup_keymap_window_t1

0x82d0,	// (0x00015489) control_pane_g6_ParamLimits

0x82d0,	// (0x00015489) control_pane_g6

0x82dd,	// (0x00015496) control_pane_g7_ParamLimits

0x82dd,	// (0x00015496) control_pane_g7

0x82ea,	// (0x000154a3) control_pane_g8_ParamLimits

0x82ea,	// (0x000154a3) control_pane_g8

0xec46,	// (0x0001bdff) dt_sta_controll_pane_ParamLimits

0xec53,	// (0x0001be0c) dt_sta_indi_pane_ParamLimits

0xec64,	// (0x0001be1d) dt_sta_title_pane_ParamLimits

0x3a8c,	// (0x00010c45) aid_size_touch_scroll_bar_cale

0x553d,	// (0x000126f6) popup_discreet_window_ParamLimits

0x553d,	// (0x000126f6) popup_discreet_window

0x55cb,	// (0x00012784) popup_sk_window

0x9633,	// (0x000167ec) bg_popup_sub_pane_cp28_ParamLimits

0x9633,	// (0x000167ec) bg_popup_sub_pane_cp28

0xed39,	// (0x0001bef2) popup_discreet_window_g1_ParamLimits

0xed39,	// (0x0001bef2) popup_discreet_window_g1

0xed59,	// (0x0001bf12) popup_discreet_window_t1_ParamLimits

0xed59,	// (0x0001bf12) popup_discreet_window_t1

0xed77,	// (0x0001bf30) popup_discreet_window_t2_ParamLimits

0xed77,	// (0x0001bf30) popup_discreet_window_t2

0x0002,

0xfea9,	// (0x0001d062) popup_discreet_window_t_ParamLimits

0xfea9,	// (0x0001d062) popup_discreet_window_t

0x6efb,	// (0x000140b4) popup_sk_window_g1

0x6f05,	// (0x000140be) popup_sk_window_g2

0x0001,

0xfeb0,	// (0x0001d069) popup_sk_window_g

0x6f0f,	// (0x000140c8) popup_sk_window_t1

0x6f1f,	// (0x000140d8) popup_sk_window_t1_copy1

0xe96b,	// (0x0001bb24) cell_ai5_widget_pane_g2_ParamLimits

0xeac4,	// (0x0001bc7d) cell_ai5_widget_pane_t9_ParamLimits

0xeac4,	// (0x0001bc7d) cell_ai5_widget_pane_t9

0x3249,	// (0x00010402) main_fep_fshwr2_pane

0x6f2d,	// (0x000140e6) aid_fshwr2_btn_pane

0x6f39,	// (0x000140f2) aid_fshwr2_syb_pane

0x6f45,	// (0x000140fe) aid_fshwr2_txt_pane

0x6f51,	// (0x0001410a) fshwr2_func_candi_pane

0x6f64,	// (0x0001411d) fshwr2_hwr_syb_pane

0x6f72,	// (0x0001412b) fshwr2_icf_pane

0x5460,	// (0x00012619) fshwr2_icf_bg_pane

0x6fa1,	// (0x0001415a) fshwr2_icf_pane_t1_ParamLimits

0x6fa1,	// (0x0001415a) fshwr2_icf_pane_t1

0x4342,	// (0x000114fb) fshwr2_func_candi_pane_g1

0xedc9,	// (0x0001bf82) fshwr2_func_candi_row_pane_ParamLimits

0xedc9,	// (0x0001bf82) fshwr2_func_candi_row_pane

0x6fb9,	// (0x00014172) cell_fshwr2_syb_pane_ParamLimits

0x6fb9,	// (0x00014172) cell_fshwr2_syb_pane

0x64c8,	// (0x00013681) fshwr2_hwr_syb_pane_g1_ParamLimits

0x64c8,	// (0x00013681) fshwr2_hwr_syb_pane_g1

0x5460,	// (0x00012619) bg_popup_call_pane_cp01

0x6fcf,	// (0x00014188) fshwr2_func_candi_cell_pane_ParamLimits

0x6fcf,	// (0x00014188) fshwr2_func_candi_cell_pane

0xedd9,	// (0x0001bf92) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xedd9,	// (0x0001bf92) fshwr2_func_candi_cell_bg_pane

0x7003,	// (0x000141bc) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7003,	// (0x000141bc) fshwr2_func_candi_cell_pane_g1

0x7023,	// (0x000141dc) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7023,	// (0x000141dc) fshwr2_func_candi_cell_pane_t1

0x5460,	// (0x00012619) bg_button_pane_cp08

0xede5,	// (0x0001bf9e) cell_fshwr2_syb_bg_pane

0x7036,	// (0x000141ef) cell_fshwr2_syb_bg_pane_g1

0x703e,	// (0x000141f7) cell_fshwr2_syb_bg_pane_t1

0x3be8,	// (0x00010da1) main_tmo_pane

0xa157,	// (0x00017310) uni_indicator_pane_g1_ParamLimits

0xa16d,	// (0x00017326) uni_indicator_pane_g2_ParamLimits

0xa183,	// (0x0001733c) uni_indicator_pane_g3_ParamLimits

0xa198,	// (0x00017351) uni_indicator_pane_g4_ParamLimits

0xa198,	// (0x00017351) uni_indicator_pane_g4

0xa1ac,	// (0x00017365) uni_indicator_pane_g5_ParamLimits

0xa1ac,	// (0x00017365) uni_indicator_pane_g5

0xa1ac,	// (0x00017365) uni_indicator_pane_g6_ParamLimits

0xa1ac,	// (0x00017365) uni_indicator_pane_g6

0xf91c,	// (0x0001cad5) uni_indicator_pane_g_ParamLimits

0xd2ce,	// (0x0001a487) popup_tmo_note_window_ParamLimits

0xd2ce,	// (0x0001a487) popup_tmo_note_window

0x6769,	// (0x00013922) fshwr2_bg_pane

0x7014,	// (0x000141cd) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7014,	// (0x000141cd) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb5,	// (0x0001d06e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb5,	// (0x0001d06e) fshwr2_func_candi_cell_pane_g

0x64b0,	// (0x00013669) bg_popup_window_pane_cp01

0x704d,	// (0x00014206) bg_popup_window_pane_g1_cp01

0xeded,	// (0x0001bfa6) bg_popup_window_pane_cp22_ParamLimits

0xeded,	// (0x0001bfa6) bg_popup_window_pane_cp22

0xedfb,	// (0x0001bfb4) listscroll_tmo_link_pane_ParamLimits

0xedfb,	// (0x0001bfb4) listscroll_tmo_link_pane

0xee3b,	// (0x0001bff4) popup_tmo_note_window_g1_ParamLimits

0xee3b,	// (0x0001bff4) popup_tmo_note_window_g1

0xee48,	// (0x0001c001) tmo_note_info_pane_ParamLimits

0xee48,	// (0x0001c001) tmo_note_info_pane

0xee62,	// (0x0001c01b) list_tmo_note_info_pane_g1_ParamLimits

0xee62,	// (0x0001c01b) list_tmo_note_info_pane_g1

0xee79,	// (0x0001c032) list_tmo_note_info_pane_g2_ParamLimits

0xee79,	// (0x0001c032) list_tmo_note_info_pane_g2

0x0001,

0xfeba,	// (0x0001d073) list_tmo_note_info_pane_g_ParamLimits

0xfeba,	// (0x0001d073) list_tmo_note_info_pane_g

0xee95,	// (0x0001c04e) list_tmo_note_info_text_pane_ParamLimits

0xee95,	// (0x0001c04e) list_tmo_note_info_text_pane

0xef1a,	// (0x0001c0d3) list_tmo_link_pane

0xef27,	// (0x0001c0e0) scroll_pane_cp20

0xef34,	// (0x0001c0ed) list_single_tmo_link_pane_ParamLimits

0xef34,	// (0x0001c0ed) list_single_tmo_link_pane

0xef44,	// (0x0001c0fd) list_single_tmo_link_pane_t1

0xef52,	// (0x0001c10b) list_tmo_note_info_text_pane_t1_ParamLimits

0xef52,	// (0x0001c10b) list_tmo_note_info_text_pane_t1

0x7b86,	// (0x00014d3f) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7b86,	// (0x00014d3f) aid_size_touch_scroll_bar_cp01

0x7aca,	// (0x00014c83) aid_size_touch_slider_marker

0x55b3,	// (0x0001276c) popup_settings_window_ParamLimits

0x55b3,	// (0x0001276c) popup_settings_window

0x83b3,	// (0x0001556c) popup_candi_list_indi_window

0x8a0c,	// (0x00015bc5) aid_touch_navi_pane_ParamLimits

0x66c2,	// (0x0001387b) rs_clock_indi_pane

0x66cb,	// (0x00013884) sctrl_sk_bottom_pane_ParamLimits

0x66dc,	// (0x00013895) sctrl_sk_top_pane_ParamLimits

0x67e1,	// (0x0001399a) popup_fep_tooltip_window

0xe8e9,	// (0x0001baa2) aid_size_cell_widget_grid_ParamLimits

0xe956,	// (0x0001bb0f) cell_ai5_widget_pane_g1_ParamLimits

0xe956,	// (0x0001bb0f) cell_ai5_widget_pane_g1

0xe9aa,	// (0x0001bb63) cell_ai5_widget_pane_g6_ParamLimits

0xe9b6,	// (0x0001bb6f) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe38,	// (0x0001cff1) cell_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0001cff1) cell_ai5_widget_pane_g

0xeae8,	// (0x0001bca1) cell_ai5_widget_pane_t10_ParamLimits

0xeae8,	// (0x0001bca1) cell_ai5_widget_pane_t10

0xeb06,	// (0x0001bcbf) grid_ai5_widget_pane_ParamLimits

0xeba4,	// (0x0001bd5d) cell_contacts_ai5_widget_pane_ParamLimits

0xeba4,	// (0x0001bd5d) cell_contacts_ai5_widget_pane

0xed8c,	// (0x0001bf45) popup_discreet_window_t3_ParamLimits

0xed8c,	// (0x0001bf45) popup_discreet_window_t3

0x6f89,	// (0x00014142) popup_fshwr2_char_preview_window_ParamLimits

0x6f89,	// (0x00014142) popup_fshwr2_char_preview_window

0xeeb3,	// (0x0001c06c) tmo_note_info_pane_t1

0xeec8,	// (0x0001c081) tmo_note_info_pane_t2

0xeee1,	// (0x0001c09a) tmo_note_info_pane_t3

0xeef6,	// (0x0001c0af) tmo_note_info_pane_t4

0xef08,	// (0x0001c0c1) tmo_note_info_pane_t5

0x0004,

0xfebf,	// (0x0001d078) tmo_note_info_pane_t

0xef1a,	// (0x0001c0d3) list_tmo_link_pane_ParamLimits

0xef27,	// (0x0001c0e0) scroll_pane_cp20_ParamLimits

0x5460,	// (0x00012619) bg_popup_fep_char_preview_window_cp01

0xef6b,	// (0x0001c124) popup_fshwr2_char_preview_window_t1

0xef79,	// (0x0001c132) popup_candi_list_indi_window_g1

0xef82,	// (0x0001c13b) bg_cell_contacts_ai5_widget_pane

0xef8e,	// (0x0001c147) cell_contacts_ai5_widget_pane_g1

0xefa3,	// (0x0001c15c) cell_contacts_ai5_widget_pane_g2

0xefaf,	// (0x0001c168) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeca,	// (0x0001d083) cell_contacts_ai5_widget_pane_g

0xefbb,	// (0x0001c174) cell_contacts_ai5_widget_pane_t1

0x3be8,	// (0x00010da1) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf032,	// (0x0001c1eb) settings_container_pane

0x8005,	// (0x000151be) listscroll_set_pane_copy1

0xae31,	// (0x00017fea) scroll_pane_cp121_copy1

0xf03e,	// (0x0001c1f7) set_content_pane_copy1

0xf046,	// (0x0001c1ff) aid_height_set_list_copy1_ParamLimits

0xf046,	// (0x0001c1ff) aid_height_set_list_copy1

0xa3d4,	// (0x0001758d) aid_size_parent_copy1_ParamLimits

0xa3d4,	// (0x0001758d) aid_size_parent_copy1

0xf052,	// (0x0001c20b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf052,	// (0x0001c20b) button_value_adjust_pane_cp6_copy1

0x838b,	// (0x00015544) list_highlight_pane_cp2_copy1_ParamLimits

0x838b,	// (0x00015544) list_highlight_pane_cp2_copy1

0xf066,	// (0x0001c21f) list_set_pane_copy1_ParamLimits

0xf066,	// (0x0001c21f) list_set_pane_copy1

0xefcd,	// (0x0001c186) main_pane_set_t1_copy1_ParamLimits

0xefcd,	// (0x0001c186) main_pane_set_t1_copy1

0xf007,	// (0x0001c1c0) main_pane_set_t2_copy1_ParamLimits

0xf007,	// (0x0001c1c0) main_pane_set_t2_copy1

0xf12d,	// (0x0001c2e6) main_pane_set_t3_copy1

0xf13b,	// (0x0001c2f4) main_pane_set_t4_copy1

0xf026,	// (0x0001c1df) set_content_pane_g1_copy1_ParamLimits

0xf026,	// (0x0001c1df) set_content_pane_g1_copy1

0xf149,	// (0x0001c302) setting_code_pane_copy1

0xf151,	// (0x0001c30a) setting_slider_graphic_pane_copy1

0xf151,	// (0x0001c30a) setting_slider_pane_copy1

0xf151,	// (0x0001c30a) setting_text_pane_copy1

0xf151,	// (0x0001c30a) setting_volume_pane_copy1

0xf149,	// (0x0001c302) settings_code_pane_cp2_copy1

0xf159,	// (0x0001c312) settings_code_pane_cp_copy1_ParamLimits

0xf159,	// (0x0001c312) settings_code_pane_cp_copy1

0x7056,	// (0x0001420f) volume_set_pane_copy1

0xf16d,	// (0x0001c326) volume_set_pane_g10_copy1

0xf179,	// (0x0001c332) volume_set_pane_g1_copy1

0xf183,	// (0x0001c33c) volume_set_pane_g2_copy1

0xf18d,	// (0x0001c346) volume_set_pane_g3_copy1

0xf197,	// (0x0001c350) volume_set_pane_g4_copy1

0xf1a1,	// (0x0001c35a) volume_set_pane_g5_copy1

0xf1ab,	// (0x0001c364) volume_set_pane_g6_copy1

0xf1b5,	// (0x0001c36e) volume_set_pane_g7_copy1

0xf1bf,	// (0x0001c378) volume_set_pane_g8_copy1

0xf1c9,	// (0x0001c382) volume_set_pane_g9_copy1

0x3492,	// (0x0001064b) bg_set_opt_pane_cp_copy1_ParamLimits

0x3492,	// (0x0001064b) bg_set_opt_pane_cp_copy1

0x7062,	// (0x0001421b) setting_slider_pane_t1_copy1_ParamLimits

0x7062,	// (0x0001421b) setting_slider_pane_t1_copy1

0x7080,	// (0x00014239) setting_slider_pane_t2_copy1_ParamLimits

0x7080,	// (0x00014239) setting_slider_pane_t2_copy1

0x709a,	// (0x00014253) setting_slider_pane_t3_copy1_ParamLimits

0x709a,	// (0x00014253) setting_slider_pane_t3_copy1

0x70b2,	// (0x0001426b) slider_set_pane_copy1_ParamLimits

0x70b2,	// (0x0001426b) slider_set_pane_copy1

0x3cb1,	// (0x00010e6a) set_opt_bg_pane_g1_copy2

0x3cb9,	// (0x00010e72) set_opt_bg_pane_g2_copy2

0xf1d3,	// (0x0001c38c) set_opt_bg_pane_g3_copy2

0x3cc9,	// (0x00010e82) set_opt_bg_pane_g4_copy2

0x3cd1,	// (0x00010e8a) set_opt_bg_pane_g5_copy2

0x3cd9,	// (0x00010e92) set_opt_bg_pane_g6_copy2

0xf1dd,	// (0x0001c396) set_opt_bg_pane_g7_copy2

0xf1e7,	// (0x0001c3a0) set_opt_bg_pane_g8_copy2

0xf1f1,	// (0x0001c3aa) set_opt_bg_pane_g9_copy2

0x70c8,	// (0x00014281) aid_size_touch_slider_mark_copy1_ParamLimits

0x70c8,	// (0x00014281) aid_size_touch_slider_mark_copy1

0xf1fb,	// (0x0001c3b4) slider_set_pane_g1_copy1

0x70dc,	// (0x00014295) slider_set_pane_g2_copy1

0x60db,	// (0x00013294) slider_set_pane_g3_copy1_ParamLimits

0x60db,	// (0x00013294) slider_set_pane_g3_copy1

0x60ef,	// (0x000132a8) slider_set_pane_g4_copy1_ParamLimits

0x60ef,	// (0x000132a8) slider_set_pane_g4_copy1

0x6107,	// (0x000132c0) slider_set_pane_g5_copy1_ParamLimits

0x6107,	// (0x000132c0) slider_set_pane_g5_copy1

0x60db,	// (0x00013294) slider_set_pane_g6_copy1_ParamLimits

0x60db,	// (0x00013294) slider_set_pane_g6_copy1

0x70e4,	// (0x0001429d) slider_set_pane_g7_copy1_ParamLimits

0x70e4,	// (0x0001429d) slider_set_pane_g7_copy1

0x33cc,	// (0x00010585) bg_set_opt_pane_cp2_copy1

0xf204,	// (0x0001c3bd) setting_slider_graphic_pane_g1_copy1

0xf20d,	// (0x0001c3c6) setting_slider_graphic_pane_t1_copy1

0xf21d,	// (0x0001c3d6) setting_slider_graphic_pane_t2_copy1

0xf22d,	// (0x0001c3e6) slider_set_pane_cp_copy1

0xf23d,	// (0x0001c3f6) input_focus_pane_cp1_copy1

0xf246,	// (0x0001c3ff) list_set_text_pane_copy1

0xf24e,	// (0x0001c407) setting_text_pane_g1_copy1

0xf257,	// (0x0001c410) set_text_pane_t1_copy1

0xf23d,	// (0x0001c3f6) input_focus_pane_cp2_copy1

0xf24e,	// (0x0001c407) setting_code_pane_g1_copy1

0xf270,	// (0x0001c429) setting_code_pane_t1_copy1

0xf27e,	// (0x0001c437) list_set_graphic_pane_copy1

0x33cc,	// (0x00010585) bg_set_opt_pane_cp4_copy1

0x7e7b,	// (0x00015034) list_set_graphic_pane_g1_copy1_ParamLimits

0x7e7b,	// (0x00015034) list_set_graphic_pane_g1_copy1

0xf290,	// (0x0001c449) list_set_graphic_pane_g2_copy1

0x7e93,	// (0x0001504c) list_set_graphic_pane_t1_copy1_ParamLimits

0x7e93,	// (0x0001504c) list_set_graphic_pane_t1_copy1

0xba3c,	// (0x00018bf5) rs_clock_indi_pane_g1

0xf298,	// (0x0001c451) rs_clock_indi_pane_t1

0xf2a6,	// (0x0001c45f) rs_indi_pane

0xf2ae,	// (0x0001c467) rs_indi_pane_g1

0xf2b7,	// (0x0001c470) rs_indi_pane_g2

0xf2c0,	// (0x0001c479) rs_indi_pane_g3

0x0002,

0xfed1,	// (0x0001d08a) rs_indi_pane_g

0x8005,	// (0x000151be) bg_popup_preview_window_pane_cp03

0xf2c9,	// (0x0001c482) popup_fep_tooltip_window_t1

0xc903,	// (0x00019abc) popup_note2_window_g2_ParamLimits

0xc903,	// (0x00019abc) popup_note2_window_g2

0x0001,

0xfc6a,	// (0x0001ce23) popup_note2_window_g_ParamLimits

0xfc6a,	// (0x0001ce23) popup_note2_window_g

0xcefa,	// (0x0001a0b3) bg_popup_sub_pane_cp11_ParamLimits

0xcf07,	// (0x0001a0c0) cell_ai3_links_pane_g1_ParamLimits

0xcf3f,	// (0x0001a0f8) cell_ai3_links_pane_t1

0xf257,	// (0x0001c410) set_text_pane_t1_copy1_ParamLimits

0x7f12,	// (0x000150cb) cell_graphic_popup_pane_cp2_ParamLimits

0x7f12,	// (0x000150cb) cell_graphic_popup_pane_cp2

0xf2d7,	// (0x0001c490) cell_graphic_popup_pane_g1_cp2

0x389f,	// (0x00010a58) cell_graphic_popup_pane_g2_cp2

0xf2df,	// (0x0001c498) cell_graphic_popup_pane_g3_cp2

0xf2e7,	// (0x0001c4a0) cell_graphic_popup_pane_t2_cp2

0x38b0,	// (0x00010a69) grid_highlight_pane_cp3_cp2

0x4131,	// (0x000112ea) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3be8,	// (0x00010da1) main_tmo_pane_ParamLimits

0xd2c2,	// (0x0001a47b) popup_tmo_big_image_note_window

0xe945,	// (0x0001bafe) cell_ai5_widget_list_pane

0xe94d,	// (0x0001bb06) cell_ai5_widget_lrg_icon_pane

0xeeb3,	// (0x0001c06c) tmo_note_info_pane_t1_ParamLimits

0xeec8,	// (0x0001c081) tmo_note_info_pane_t2_ParamLimits

0xeee1,	// (0x0001c09a) tmo_note_info_pane_t3_ParamLimits

0xeef6,	// (0x0001c0af) tmo_note_info_pane_t4_ParamLimits

0xef08,	// (0x0001c0c1) tmo_note_info_pane_t5_ParamLimits

0xfebf,	// (0x0001d078) tmo_note_info_pane_t_ParamLimits

0xf032,	// (0x0001c1eb) settings_container_pane_ParamLimits

0xf235,	// (0x0001c3ee) indicator_popup_pane_cp5

0xf235,	// (0x0001c3ee) indicator_popup_pane_cp6

0xf27e,	// (0x0001c437) list_set_graphic_pane_copy1_ParamLimits

0x3249,	// (0x00010402) bg_popup_window_pane_cp23

0xf2f5,	// (0x0001c4ae) popup_tmo_big_image_note_window_g1

0xf301,	// (0x0001c4ba) popup_tmo_big_image_note_window_t1

0xf311,	// (0x0001c4ca) popup_tmo_big_image_note_window_t2

0xf321,	// (0x0001c4da) popup_tmo_big_image_note_window_t3

0x0002,

0xfed8,	// (0x0001d091) popup_tmo_big_image_note_window_t

0xba3c,	// (0x00018bf5) cell_ai5_widget_lrg_icon_pane_g1

0xf331,	// (0x0001c4ea) cell_ai5_widget_lrg_icon_pane_t1

0xf33f,	// (0x0001c4f8) cell_ai5_widget_list_row_pane_ParamLimits

0xf33f,	// (0x0001c4f8) cell_ai5_widget_list_row_pane

0xf357,	// (0x0001c510) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf357,	// (0x0001c510) cell_ai5_widget_list_row_pane_g1

0xf364,	// (0x0001c51d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf364,	// (0x0001c51d) cell_ai5_widget_list_row_pane_t1

0xf38f,	// (0x0001c548) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf38f,	// (0x0001c548) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedf,	// (0x0001d098) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedf,	// (0x0001d098) cell_ai5_widget_list_row_pane_t

0x5460,	// (0x00012619) main_fep_vtchi_ss_pane

0x7116,	// (0x000142cf) popup_fep_char_pre_window

0x711e,	// (0x000142d7) popup_fep_ituss_window

0x713f,	// (0x000142f8) popup_fep_vkbss_window

0xf3b7,	// (0x0001c570) grid_vkbss_keypad_pane_ParamLimits

0xf3b7,	// (0x0001c570) grid_vkbss_keypad_pane

0xf3c7,	// (0x0001c580) ituss_keypad_pane

0x716d,	// (0x00014326) aid_vkbss_key_offset_ParamLimits

0x716d,	// (0x00014326) aid_vkbss_key_offset

0x7179,	// (0x00014332) cell_vkbss_key_pane_ParamLimits

0x7179,	// (0x00014332) cell_vkbss_key_pane

0xf3d6,	// (0x0001c58f) bg_cell_vkbss_key_g1_ParamLimits

0xf3d6,	// (0x0001c58f) bg_cell_vkbss_key_g1

0xf3e2,	// (0x0001c59b) cell_vkbss_key_3p_pane_ParamLimits

0xf3e2,	// (0x0001c59b) cell_vkbss_key_3p_pane

0xf3fc,	// (0x0001c5b5) cell_vkbss_key_g1_ParamLimits

0xf3fc,	// (0x0001c5b5) cell_vkbss_key_g1

0xf416,	// (0x0001c5cf) cell_vkbss_key_t1_ParamLimits

0xf416,	// (0x0001c5cf) cell_vkbss_key_t1

0x718f,	// (0x00014348) cell_ituss_key_pane_ParamLimits

0x718f,	// (0x00014348) cell_ituss_key_pane

0xf441,	// (0x0001c5fa) bg_cell_ituss_key_g1_ParamLimits

0xf441,	// (0x0001c5fa) bg_cell_ituss_key_g1

0xf44d,	// (0x0001c606) cell_ituss_key_pane_g1_ParamLimits

0xf44d,	// (0x0001c606) cell_ituss_key_pane_g1

0x71a0,	// (0x00014359) cell_ituss_key_pane_g2_ParamLimits

0x71a0,	// (0x00014359) cell_ituss_key_pane_g2

0x0002,

0xfee6,	// (0x0001d09f) cell_ituss_key_pane_g_ParamLimits

0xfee6,	// (0x0001d09f) cell_ituss_key_pane_g

0x71cc,	// (0x00014385) cell_ituss_key_t1_ParamLimits

0x71cc,	// (0x00014385) cell_ituss_key_t1

0x7206,	// (0x000143bf) cell_ituss_key_t2_ParamLimits

0x7206,	// (0x000143bf) cell_ituss_key_t2

0x7237,	// (0x000143f0) cell_ituss_key_t3_ParamLimits

0x7237,	// (0x000143f0) cell_ituss_key_t3

0x7206,	// (0x000143bf) cell_ituss_key_t4_ParamLimits

0x7206,	// (0x000143bf) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x0001d0a6) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0001d0a6) cell_ituss_key_t

0xf473,	// (0x0001c62c) cell_vkbss_key_3p_pane_g1

0xf47b,	// (0x0001c634) cell_vkbss_key_3p_pane_g2

0xf483,	// (0x0001c63c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001d0b1) cell_vkbss_key_3p_pane_g

0x5460,	// (0x00012619) bg_popup_fep_char_preview_window_cp02

0x727a,	// (0x00014433) popup_fep_char_pre_window_t1

0xe8df,	// (0x0001ba98) main_ai5_sk_pane

0xef82,	// (0x0001c13b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef8e,	// (0x0001c147) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xefa3,	// (0x0001c15c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xefaf,	// (0x0001c168) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeca,	// (0x0001d083) cell_contacts_ai5_widget_pane_g_ParamLimits

0xefbb,	// (0x0001c174) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3be8,	// (0x00010da1) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf48b,	// (0x0001c644) main_ai5_sk_pane_g1

0x946b,	// (0x00016624) popup_query_code_window_g1

0x7134,	// (0x000142ed) popup_fep_vkb_icf_pane

0x714a,	// (0x00014303) popup_fep_vtchi_icf_pane

0xf494,	// (0x0001c64d) bg_icf_pane

0xf4a0,	// (0x0001c659) list_vkb_icf_pane

0xf4ac,	// (0x0001c665) bg_icf_pane_cp01

0xf4b8,	// (0x0001c671) vtchi_icf_list_pane

0xf4c9,	// (0x0001c682) list_vkb_icf_pane_t1_ParamLimits

0xf4c9,	// (0x0001c682) list_vkb_icf_pane_t1

0xf4df,	// (0x0001c698) vtchi_icf_list_pane_t1_ParamLimits

0xf4df,	// (0x0001c698) vtchi_icf_list_pane_t1

0x711e,	// (0x000142d7) popup_fep_ituss_window_ParamLimits

0x714a,	// (0x00014303) popup_fep_vtchi_icf_pane_ParamLimits

0xf3c7,	// (0x0001c580) ituss_keypad_pane_ParamLimits

0x7161,	// (0x0001431a) ituss_sks_pane

0xf494,	// (0x0001c64d) bg_icf_pane_ParamLimits

0x70fa,	// (0x000142b3) icf_edit_indi_pane_ParamLimits

0x70fa,	// (0x000142b3) icf_edit_indi_pane

0xf4a0,	// (0x0001c659) list_vkb_icf_pane_ParamLimits

0xf4ac,	// (0x0001c665) bg_icf_pane_cp01_ParamLimits

0x7109,	// (0x000142c2) icf_edit_indi_pane_cp01_ParamLimits

0x7109,	// (0x000142c2) icf_edit_indi_pane_cp01

0xf4c0,	// (0x0001c679) vtchi_query_pane

0x64c8,	// (0x00013681) icf_edit_indi_pane_g1_ParamLimits

0x64c8,	// (0x00013681) icf_edit_indi_pane_g1

0x729c,	// (0x00014455) icf_edit_indi_pane_g2_ParamLimits

0x729c,	// (0x00014455) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001d0c9) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001d0c9) icf_edit_indi_pane_g

0x72ab,	// (0x00014464) icf_edit_indi_pane_t1

0xf4f7,	// (0x0001c6b0) bg_input_focus_pane_cp042

0x3a83,	// (0x00010c3c) vtchi_button_pane

0xf500,	// (0x0001c6b9) vtchi_query_pane_t1

0xf50e,	// (0x0001c6c7) vtchi_query_pane_t2

0xf51c,	// (0x0001c6d5) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001d0b8) vtchi_query_pane_t

0x5460,	// (0x00012619) bg_button_pane_cp13

0xf52a,	// (0x0001c6e3) vtchi_button_pane_g1

0x7289,	// (0x00014442) ituss_sks_pane_g1

0x7294,	// (0x0001444d) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001d0bf) ituss_sks_pane_g

0xf532,	// (0x0001c6eb) ituss_sks_pane_t1

0xf540,	// (0x0001c6f9) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001d0c4) ituss_sks_pane_t

0xb496,	// (0x0001864f) indicator_nsta_pane_cp_g1

0xb49f,	// (0x00018658) indicator_nsta_pane_cp_g2

0xb4a7,	// (0x00018660) indicator_nsta_pane_cp_g3

0xb4af,	// (0x00018668) indicator_nsta_pane_cp_g4

0xb4b7,	// (0x00018670) indicator_nsta_pane_cp_g5

0xb4bf,	// (0x00018678) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x0001cc61) indicator_nsta_pane_cp_g

0xdfca,	// (0x0001b183) cell_graphic2_pane_t2_ParamLimits

0xdfca,	// (0x0001b183) cell_graphic2_pane_t2

0x0001,

0xfdc1,	// (0x0001cf7a) cell_graphic2_pane_t_ParamLimits

0xfdc1,	// (0x0001cf7a) cell_graphic2_pane_t

0xdff7,	// (0x0001b1b0) cell_graphic2_control_pane_t1

0x7d68,	// (0x00014f21) signal_pane_g3_ParamLimits

0x7d68,	// (0x00014f21) signal_pane_g3

0x7d7a,	// (0x00014f33) signal_pane_g4_ParamLimits

0x7d7a,	// (0x00014f33) signal_pane_g4

0xf3a1,	// (0x0001c55a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf3a1,	// (0x0001c55a) cell_ai5_widget_list_row_pane_t3

0xf461,	// (0x0001c61a) cell_ituss_key_pane_t1_ParamLimits

0xf461,	// (0x0001c61a) cell_ituss_key_pane_t1

0x90b9,	// (0x00016272) form_field_data_wide_pane_vc_t2_ParamLimits

0x90b9,	// (0x00016272) form_field_data_wide_pane_vc_t2

0x90cd,	// (0x00016286) form_field_data_wide_pane_vc_t3_ParamLimits

0x90cd,	// (0x00016286) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0001c9bd) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0001c9bd) form_field_data_wide_pane_vc_t

0xb147,	// (0x00018300) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb147,	// (0x00018300) form_field_slider_wide_pane_vc_t3

0xb21d,	// (0x000183d6) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb21d,	// (0x000183d6) form_field_popup_wide_pane_vc_t2

0xb234,	// (0x000183ed) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb234,	// (0x000183ed) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x0001cc50) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0001cc50) form_field_popup_wide_pane_vc_t

0x6f2d,	// (0x000140e6) aid_fshwr2_btn_pane_ParamLimits

0x6f39,	// (0x000140f2) aid_fshwr2_syb_pane_ParamLimits

0x6f45,	// (0x000140fe) aid_fshwr2_txt_pane_ParamLimits

0x6769,	// (0x00013922) fshwr2_bg_pane_ParamLimits

0x6f51,	// (0x0001410a) fshwr2_func_candi_pane_ParamLimits

0x6f64,	// (0x0001411d) fshwr2_hwr_syb_pane_ParamLimits

0x6f72,	// (0x0001412b) fshwr2_icf_pane_ParamLimits

0xb0bb,	// (0x00018274) list_double_graphic_pane_vc_g4_ParamLimits

0xb0bb,	// (0x00018274) list_double_graphic_pane_vc_g4

0x71c0,	// (0x00014379) cell_ituss_key_pane_g3_ParamLimits

0x71c0,	// (0x00014379) cell_ituss_key_pane_g3

0x7268,	// (0x00014421) cell_ituss_key_t5_ParamLimits

0x7268,	// (0x00014421) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal

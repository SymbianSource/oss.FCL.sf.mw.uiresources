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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001a7f3 };

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
0x0ed3,	// (0x0001b6c6) Screen

0x0edf,	// (0x0001b6d2) application_window_ParamLimits

0x0edf,	// (0x0001b6d2) application_window

0x709d,	// (0x00021890) screen_g1

0xd746,	// (0x00027f39) area_bottom_pane_ParamLimits

0xd746,	// (0x00027f39) area_bottom_pane

0x4ec8,	// (0x0001f6bb) area_top_pane_ParamLimits

0x4ec8,	// (0x0001f6bb) area_top_pane

0x4f5c,	// (0x0001f74f) main_pane_ParamLimits

0x4f5c,	// (0x0001f74f) main_pane

0x70a7,	// (0x0002189a) misc_graphics

0x1c15,	// (0x0001c408) battery_pane_ParamLimits

0x1c15,	// (0x0001c408) battery_pane

0x9779,	// (0x00023f6c) bg_status_flat_pane_g8

0x9781,	// (0x00023f74) bg_status_flat_pane_g9

0x8ad8,	// (0x000232cb) context_pane_ParamLimits

0x8ad8,	// (0x000232cb) context_pane

0x1d80,	// (0x0001c573) navi_pane_ParamLimits

0x1d80,	// (0x0001c573) navi_pane

0x1df8,	// (0x0001c5eb) signal_pane_ParamLimits

0x1df8,	// (0x0001c5eb) signal_pane

0x0008,

0xf873,	// (0x0002a066) bg_status_flat_pane_g

0x1e88,	// (0x0001c67b) status_pane_g1_ParamLimits

0x1e88,	// (0x0001c67b) status_pane_g1

0x1e9e,	// (0x0001c691) status_pane_g2_ParamLimits

0x1e9e,	// (0x0001c691) status_pane_g2

0x8cf9,	// (0x000234ec) status_pane_g3_ParamLimits

0x8cf9,	// (0x000234ec) status_pane_g3

0x0004,

0xf7a6,	// (0x00029f99) status_pane_g_ParamLimits

0xf7a6,	// (0x00029f99) status_pane_g

0x1eaa,	// (0x0001c69d) title_pane_ParamLimits

0x1eaa,	// (0x0001c69d) title_pane

0x1f0d,	// (0x0001c700) uni_indicator_pane_ParamLimits

0x1f0d,	// (0x0001c700) uni_indicator_pane

0x893a,	// (0x0002312d) bg_list_pane_ParamLimits

0x893a,	// (0x0002312d) bg_list_pane

0x1b7c,	// (0x0001c36f) find_pane

0x1b84,	// (0x0001c377) listscroll_app_pane_ParamLimits

0x1b84,	// (0x0001c377) listscroll_app_pane

0x8966,	// (0x00023159) listscroll_form_pane

0x5801,	// (0x0001fff4) listscroll_gen_pane_ParamLimits

0x5801,	// (0x0001fff4) listscroll_gen_pane

0x8966,	// (0x00023159) listscroll_set_pane

0xa2f3,	// (0x00024ae6) main_idle_act_pane

0x8644,	// (0x00022e37) main_idle_trad_pane

0x8644,	// (0x00022e37) main_list_empty_pane

0x8980,	// (0x00023173) main_midp_pane

0x898c,	// (0x0002317f) main_pane_g1_ParamLimits

0x898c,	// (0x0002317f) main_pane_g1

0xda35,	// (0x00028228) popup_ai_message_window_ParamLimits

0xda35,	// (0x00028228) popup_ai_message_window

0xdac6,	// (0x000282b9) popup_fep_china_uni_window_ParamLimits

0xdac6,	// (0x000282b9) popup_fep_china_uni_window

0x5911,	// (0x00020104) popup_fep_japan_candidate_window_ParamLimits

0x5911,	// (0x00020104) popup_fep_japan_candidate_window

0x592f,	// (0x00020122) popup_fep_japan_predictive_window_ParamLimits

0x592f,	// (0x00020122) popup_fep_japan_predictive_window

0xdb20,	// (0x00028313) popup_find_window

0xdb3d,	// (0x00028330) popup_grid_graphic_window_ParamLimits

0xdb3d,	// (0x00028330) popup_grid_graphic_window

0x5992,	// (0x00020185) popup_large_graphic_colour_window

0xdbcf,	// (0x000283c2) popup_menu_window_ParamLimits

0xdbcf,	// (0x000283c2) popup_menu_window

0xdd9b,	// (0x0002858e) popup_note_image_window

0xdd61,	// (0x00028554) popup_note_wait_window_ParamLimits

0xdd61,	// (0x00028554) popup_note_wait_window

0xddb3,	// (0x000285a6) popup_note_window_ParamLimits

0xddb3,	// (0x000285a6) popup_note_window

0xde59,	// (0x0002864c) popup_query_code_window_ParamLimits

0xde59,	// (0x0002864c) popup_query_code_window

0x5bdc,	// (0x000203cf) popup_query_data_code_window_ParamLimits

0x5bdc,	// (0x000203cf) popup_query_data_code_window

0xde93,	// (0x00028686) popup_query_data_window_ParamLimits

0xde93,	// (0x00028686) popup_query_data_window

0xdf09,	// (0x000286fc) popup_query_sat_info_window_ParamLimits

0xdf09,	// (0x000286fc) popup_query_sat_info_window

0xdfa0,	// (0x00028793) popup_snote_single_graphic_window_ParamLimits

0xdfa0,	// (0x00028793) popup_snote_single_graphic_window

0xdfa0,	// (0x00028793) popup_snote_single_text_window_ParamLimits

0xdfa0,	// (0x00028793) popup_snote_single_text_window

0x5c59,	// (0x0002044c) popup_sub_window_general

0x5d87,	// (0x0002057a) popup_window_general_ParamLimits

0x5d87,	// (0x0002057a) popup_window_general

0x899a,	// (0x0002318d) power_save_pane

0xd8c8,	// (0x000280bb) control_pane_g1_ParamLimits

0xd8c8,	// (0x000280bb) control_pane_g1

0xd8f1,	// (0x000280e4) control_pane_g2_ParamLimits

0xd8f1,	// (0x000280e4) control_pane_g2

0x88fd,	// (0x000230f0) control_pane_g3_ParamLimits

0x88fd,	// (0x000230f0) control_pane_g3

0x0007,

0xf78e,	// (0x00029f81) control_pane_g_ParamLimits

0xf78e,	// (0x00029f81) control_pane_g

0xd92e,	// (0x00028121) control_pane_t1_ParamLimits

0xd92e,	// (0x00028121) control_pane_t1

0xd98c,	// (0x0002817f) control_pane_t2_ParamLimits

0xd98c,	// (0x0002817f) control_pane_t2

0x0002,

0xf79f,	// (0x00029f92) control_pane_t_ParamLimits

0xf79f,	// (0x00029f92) control_pane_t

0x881e,	// (0x00023011) navi_navi_volume_pane_cp1

0x8827,	// (0x0002301a) status_small_icon_pane

0x882f,	// (0x00023022) status_small_pane_g1_ParamLimits

0x882f,	// (0x00023022) status_small_pane_g1

0x8863,	// (0x00023056) status_small_pane_g2_ParamLimits

0x8863,	// (0x00023056) status_small_pane_g2

0x886f,	// (0x00023062) status_small_pane_g3_ParamLimits

0x886f,	// (0x00023062) status_small_pane_g3

0x887b,	// (0x0002306e) status_small_pane_g4_ParamLimits

0x887b,	// (0x0002306e) status_small_pane_g4

0x8887,	// (0x0002307a) status_small_pane_g5_ParamLimits

0x8887,	// (0x0002307a) status_small_pane_g5

0x8896,	// (0x00023089) status_small_pane_g6_ParamLimits

0x8896,	// (0x00023089) status_small_pane_g6

0x0007,

0xf77d,	// (0x00029f70) status_small_pane_g_ParamLimits

0xf77d,	// (0x00029f70) status_small_pane_g

0x88c6,	// (0x000230b9) status_small_pane_t1

0x88e9,	// (0x000230dc) status_small_wait_pane_ParamLimits

0x88e9,	// (0x000230dc) status_small_wait_pane

0x18da,	// (0x0001c0cd) aid_levels_signal_ParamLimits

0x18da,	// (0x0001c0cd) aid_levels_signal

0x18f2,	// (0x0001c0e5) signal_pane_g1_ParamLimits

0x18f2,	// (0x0001c0e5) signal_pane_g1

0x190d,	// (0x0001c100) signal_pane_g2_ParamLimits

0x190d,	// (0x0001c100) signal_pane_g2

0x0003,

0xf70e,	// (0x00029f01) signal_pane_g_ParamLimits

0xf70e,	// (0x00029f01) signal_pane_g

0x811e,	// (0x00022911) context_pane_g1

0x0eef,	// (0x0001b6e2) title_pane_g1

0x0f26,	// (0x0001b719) title_pane_t1

0x714f,	// (0x00021942) title_pane_t2

0x7175,	// (0x00021968) title_pane_t3

0x0002,

0xf55d,	// (0x00029d50) title_pane_t

0x1f35,	// (0x0001c728) aid_levels_battery_ParamLimits

0x1f35,	// (0x0001c728) aid_levels_battery

0x1f51,	// (0x0001c744) battery_pane_g1_ParamLimits

0x1f51,	// (0x0001c744) battery_pane_g1

0x1f6e,	// (0x0001c761) battery_pane_g2_ParamLimits

0x1f6e,	// (0x0001c761) battery_pane_g2

0x0001,

0xf7b1,	// (0x00029fa4) battery_pane_g_ParamLimits

0xf7b1,	// (0x00029fa4) battery_pane_g

0x2214,	// (0x0001ca07) uni_indicator_pane_g1

0x2229,	// (0x0001ca1c) uni_indicator_pane_g2

0xa0c2,	// (0x000248b5) uni_indicator_pane_g3

0x0005,

0xf91b,	// (0x0002a10e) uni_indicator_pane_g

0x84b4,	// (0x00022ca7) navi_icon_pane_ParamLimits

0x84b4,	// (0x00022ca7) navi_icon_pane

0x83fb,	// (0x00022bee) navi_midp_pane

0x84d0,	// (0x00022cc3) navi_navi_pane

0x84da,	// (0x00022ccd) navi_text_pane_ParamLimits

0x84da,	// (0x00022ccd) navi_text_pane

0x709d,	// (0x00021890) status_small_wait_pane_g1

0x7598,	// (0x00021d8b) status_small_wait_pane_g2

0x0001,

0xf916,	// (0x0002a109) status_small_wait_pane_g

0x9dba,	// (0x000245ad) navi_navi_icon_text_pane

0x9dc2,	// (0x000245b5) navi_navi_pane_g1_ParamLimits

0x9dc2,	// (0x000245b5) navi_navi_pane_g1

0x9dd4,	// (0x000245c7) navi_navi_pane_g2_ParamLimits

0x9dd4,	// (0x000245c7) navi_navi_pane_g2

0x0001,

0xf8e4,	// (0x0002a0d7) navi_navi_pane_g_ParamLimits

0xf8e4,	// (0x0002a0d7) navi_navi_pane_g

0x9de6,	// (0x000245d9) navi_navi_tabs_pane

0x9def,	// (0x000245e2) navi_navi_text_pane

0x9dba,	// (0x000245ad) navi_navi_volume_pane

0x9d96,	// (0x00024589) navi_text_pane_t1

0x9d8a,	// (0x0002457d) navi_icon_pane_g1

0x9ce9,	// (0x000244dc) navi_navi_text_pane_t1

0xe26b,	// (0x00028a5e) navi_navi_volume_pane_g1

0xe273,	// (0x00028a66) volume_small_pane

0x20f7,	// (0x0001c8ea) navi_navi_icon_text_pane_g1

0x20ff,	// (0x0001c8f2) navi_navi_icon_text_pane_t1

0x84d0,	// (0x00022cc3) navi_tabs_2_long_pane

0x84d0,	// (0x00022cc3) navi_tabs_2_pane

0x84d0,	// (0x00022cc3) navi_tabs_3_long_pane

0x84d0,	// (0x00022cc3) navi_tabs_3_pane

0x84d0,	// (0x00022cc3) navi_tabs_4_pane

0xe24b,	// (0x00028a3e) tabs_2_active_pane_ParamLimits

0xe24b,	// (0x00028a3e) tabs_2_active_pane

0xe25b,	// (0x00028a4e) tabs_2_passive_pane_ParamLimits

0xe25b,	// (0x00028a4e) tabs_2_passive_pane

0xe219,	// (0x00028a0c) tabs_3_active_pane_ParamLimits

0xe219,	// (0x00028a0c) tabs_3_active_pane

0xe229,	// (0x00028a1c) tabs_3_passive_pane_ParamLimits

0xe229,	// (0x00028a1c) tabs_3_passive_pane

0xe23a,	// (0x00028a2d) tabs_3_passive_pane_cp_ParamLimits

0xe23a,	// (0x00028a2d) tabs_3_passive_pane_cp

0xe1d5,	// (0x000289c8) tabs_4_active_pane_ParamLimits

0xe1d5,	// (0x000289c8) tabs_4_active_pane

0xe1e6,	// (0x000289d9) tabs_4_passive_pane_ParamLimits

0xe1e6,	// (0x000289d9) tabs_4_passive_pane

0xe1f7,	// (0x000289ea) tabs_4_passive_pane_cp_ParamLimits

0xe1f7,	// (0x000289ea) tabs_4_passive_pane_cp

0xe208,	// (0x000289fb) tabs_4_passive_pane_cp2_ParamLimits

0xe208,	// (0x000289fb) tabs_4_passive_pane_cp2

0xe1b5,	// (0x000289a8) tabs_2_long_active_pane_ParamLimits

0xe1b5,	// (0x000289a8) tabs_2_long_active_pane

0xe1c5,	// (0x000289b8) tabs_2_long_passive_pane_ParamLimits

0xe1c5,	// (0x000289b8) tabs_2_long_passive_pane

0xe180,	// (0x00028973) tabs_3_long_active_pane_ParamLimits

0xe180,	// (0x00028973) tabs_3_long_active_pane

0xe191,	// (0x00028984) tabs_3_long_passive_pane_ParamLimits

0xe191,	// (0x00028984) tabs_3_long_passive_pane

0xe1a4,	// (0x00028997) tabs_3_long_passive_pane_cp_ParamLimits

0xe1a4,	// (0x00028997) tabs_3_long_passive_pane_cp

0x5eca,	// (0x000206bd) volume_small_pane_g1

0xe12f,	// (0x00028922) volume_small_pane_g2

0xe138,	// (0x0002892b) volume_small_pane_g3

0xe141,	// (0x00028934) volume_small_pane_g4

0xe14a,	// (0x0002893d) volume_small_pane_g5

0xe153,	// (0x00028946) volume_small_pane_g6

0xe15c,	// (0x0002894f) volume_small_pane_g7

0xe165,	// (0x00028958) volume_small_pane_g8

0xe16e,	// (0x00028961) volume_small_pane_g9

0xe177,	// (0x0002896a) volume_small_pane_g10

0x0009,

0xf8b0,	// (0x0002a0a3) volume_small_pane_g

0x7402,	// (0x00021bf5) bg_active_tab_pane_cp2_ParamLimits

0x7402,	// (0x00021bf5) bg_active_tab_pane_cp2

0x0fb2,	// (0x0001b7a5) tabs_3_active_pane_g1

0x0fba,	// (0x0001b7ad) tabs_3_active_pane_t1

0x7402,	// (0x00021bf5) bg_passive_tab_pane_cp2_ParamLimits

0x7402,	// (0x00021bf5) bg_passive_tab_pane_cp2

0x0fb2,	// (0x0001b7a5) tabs_3_passive_pane_g1

0x0fba,	// (0x0001b7ad) tabs_3_passive_pane_t1

0x7402,	// (0x00021bf5) bg_active_tab_pane_cp3_ParamLimits

0x7402,	// (0x00021bf5) bg_active_tab_pane_cp3

0x0fcc,	// (0x0001b7bf) tabs_4_active_pane_g1

0x0fd4,	// (0x0001b7c7) tabs_4_active_pane_t1

0x7402,	// (0x00021bf5) bg_passive_tab_pane_cp3_ParamLimits

0x7402,	// (0x00021bf5) bg_passive_tab_pane_cp3

0x0fcc,	// (0x0001b7bf) tabs_4_1_passive_pane_g1

0x0fd4,	// (0x0001b7c7) tabs_4_1_passive_pane_t1

0x8980,	// (0x00023173) list_highlight_pane_cp2

0x22c8,	// (0x0001cabb) list_set_pane_ParamLimits

0x22c8,	// (0x0001cabb) list_set_pane

0x2362,	// (0x0001cb55) main_pane_set_t1_ParamLimits

0x2362,	// (0x0001cb55) main_pane_set_t1

0x2382,	// (0x0001cb75) main_pane_set_t2_ParamLimits

0x2382,	// (0x0001cb75) main_pane_set_t2

0x2396,	// (0x0001cb89) main_pane_set_t3_ParamLimits

0x2396,	// (0x0001cb89) main_pane_set_t3

0x23a8,	// (0x0001cb9b) main_pane_set_t4_ParamLimits

0x23a8,	// (0x0001cb9b) main_pane_set_t4

0x0003,

0xf980,	// (0x0002a173) main_pane_set_t_ParamLimits

0xf980,	// (0x0002a173) main_pane_set_t

0x23ba,	// (0x0001cbad) setting_code_pane

0x23c2,	// (0x0001cbb5) setting_slider_graphic_pane

0x23c2,	// (0x0001cbb5) setting_slider_pane

0x23c2,	// (0x0001cbb5) setting_text_pane

0x23c2,	// (0x0001cbb5) setting_volume_pane

0x518d,	// (0x0001f980) volume_set_pane

0x7187,	// (0x0002197a) bg_set_opt_pane_cp

0x5195,	// (0x0001f988) setting_slider_pane_t1

0x51ae,	// (0x0001f9a1) setting_slider_pane_t2

0x51c7,	// (0x0001f9ba) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00029d57) setting_slider_pane_t

0x51de,	// (0x0001f9d1) slider_set_pane

0x70a7,	// (0x0002189a) bg_set_opt_pane_cp2

0x71c9,	// (0x000219bc) setting_slider_graphic_pane_g1

0x51f4,	// (0x0001f9e7) setting_slider_graphic_pane_t1

0x5203,	// (0x0001f9f6) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00029d5e) setting_slider_graphic_pane_t

0x5212,	// (0x0001fa05) slider_set_pane_cp

0x70a7,	// (0x0002189a) input_focus_pane_cp1

0xa2da,	// (0x00024acd) list_set_text_pane

0x709d,	// (0x00021890) setting_text_pane_g1

0x70a7,	// (0x0002189a) input_focus_pane_cp2

0x709d,	// (0x00021890) setting_code_pane_g1

0x71d2,	// (0x000219c5) setting_code_pane_t1

0x3e60,	// (0x0001e653) set_text_pane_t1_ParamLimits

0x3e60,	// (0x0001e653) set_text_pane_t1

0x7a41,	// (0x00022234) set_opt_bg_pane_g1

0x7a49,	// (0x0002223c) set_opt_bg_pane_g2

0xa2ba,	// (0x00024aad) set_opt_bg_pane_g3

0x7a59,	// (0x0002224c) set_opt_bg_pane_g4

0x7a61,	// (0x00022254) set_opt_bg_pane_g5

0x7a69,	// (0x0002225c) set_opt_bg_pane_g6

0xa2c2,	// (0x00024ab5) set_opt_bg_pane_g7

0xa2ca,	// (0x00024abd) set_opt_bg_pane_g8

0xa2d2,	// (0x00024ac5) set_opt_bg_pane_g9

0x0008,

0xf96d,	// (0x0002a160) set_opt_bg_pane_g

0xa2ad,	// (0x00024aa0) slider_set_pane_g1

0x6098,	// (0x0002088b) slider_set_pane_g2

0x0006,

0xf95e,	// (0x0002a151) slider_set_pane_g

0x6034,	// (0x00020827) volume_set_pane_g1

0x603c,	// (0x0002082f) volume_set_pane_g2

0x6044,	// (0x00020837) volume_set_pane_g3

0x604c,	// (0x0002083f) volume_set_pane_g4

0x6054,	// (0x00020847) volume_set_pane_g5

0x605c,	// (0x0002084f) volume_set_pane_g6

0x6064,	// (0x00020857) volume_set_pane_g7

0x606c,	// (0x0002085f) volume_set_pane_g8

0x6074,	// (0x00020867) volume_set_pane_g9

0x607c,	// (0x0002086f) volume_set_pane_g10

0x0009,

0xf936,	// (0x0002a129) volume_set_pane_g

0x0fe6,	// (0x0001b7d9) indicator_pane_ParamLimits

0x0fe6,	// (0x0001b7d9) indicator_pane

0x100e,	// (0x0001b801) main_idle_pane_g2_ParamLimits

0x100e,	// (0x0001b801) main_idle_pane_g2

0x1046,	// (0x0001b839) main_pane_idle_g1_ParamLimits

0x1046,	// (0x0001b839) main_pane_idle_g1

0x7221,	// (0x00021a14) popup_clock_digital_analogue_window_ParamLimits

0x7221,	// (0x00021a14) popup_clock_digital_analogue_window

0x106d,	// (0x0001b860) soft_indicator_pane_ParamLimits

0x106d,	// (0x0001b860) soft_indicator_pane

0x1087,	// (0x0001b87a) wallpaper_pane_ParamLimits

0x1087,	// (0x0001b87a) wallpaper_pane

0x709d,	// (0x00021890) wallpaper_pane_g1

0x1099,	// (0x0001b88c) indicator_pane_g1_ParamLimits

0x1099,	// (0x0001b88c) indicator_pane_g1

0xa6a5,	// (0x00024e98) navi_navi_icon_text_pane_srt_g1

0x7273,	// (0x00021a66) soft_indicator_pane_t1

0x728d,	// (0x00021a80) aid_ps_area_pane

0x10b2,	// (0x0001b8a5) aid_ps_clock_pane

0x72ac,	// (0x00021a9f) aid_ps_indicator_pane

0x72b8,	// (0x00021aab) indicator_ps_pane_ParamLimits

0x72b8,	// (0x00021aab) indicator_ps_pane

0x72c7,	// (0x00021aba) power_save_pane_g1_ParamLimits

0x72c7,	// (0x00021aba) power_save_pane_g1

0x72d3,	// (0x00021ac6) power_save_pane_g2_ParamLimits

0x72d3,	// (0x00021ac6) power_save_pane_g2

0x4dbc,	// (0x0001f5af) aid_navinavi_width_pane

0x728d,	// (0x00021a80) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00029d63) power_save_pane_g_ParamLimits

0xf570,	// (0x00029d63) power_save_pane_g

0x72e1,	// (0x00021ad4) power_save_pane_t1_ParamLimits

0x72e1,	// (0x00021ad4) power_save_pane_t1

0x10b2,	// (0x0001b8a5) aid_ps_clock_pane_ParamLimits

0x72ac,	// (0x00021a9f) aid_ps_indicator_pane_ParamLimits

0x72f3,	// (0x00021ae6) power_save_pane_t4_ParamLimits

0x72f3,	// (0x00021ae6) power_save_pane_t4

0x0001,

0xf575,	// (0x00029d68) power_save_pane_t_ParamLimits

0xf575,	// (0x00029d68) power_save_pane_t

0x731d,	// (0x00021b10) power_save_t3_ParamLimits

0x731d,	// (0x00021b10) power_save_t3

0x7308,	// (0x00021afb) power_save_t2_ParamLimits

0x7308,	// (0x00021afb) power_save_t2

0x7332,	// (0x00021b25) indicator_ps_pane_g1

0x10c0,	// (0x0001b8b3) ai_gene_pane_ParamLimits

0x10c0,	// (0x0001b8b3) ai_gene_pane

0x10d7,	// (0x0001b8ca) ai_links_pane_ParamLimits

0x10d7,	// (0x0001b8ca) ai_links_pane

0x10ef,	// (0x0001b8e2) indicator_pane_cp1_ParamLimits

0x10ef,	// (0x0001b8e2) indicator_pane_cp1

0x10fe,	// (0x0001b8f1) main_pane_idle_g1_cp_ParamLimits

0x10fe,	// (0x0001b8f1) main_pane_idle_g1_cp

0x736b,	// (0x00021b5e) popup_ai_links_title_window

0x1116,	// (0x0001b909) soft_indicator_pane_cp1_ParamLimits

0x1116,	// (0x0001b909) soft_indicator_pane_cp1

0xa085,	// (0x00024878) ai_links_pane_g1

0xa08e,	// (0x00024881) grid_ai_links_pane

0x220b,	// (0x0001c9fe) ai_gene_pane_1

0xa073,	// (0x00024866) ai_gene_pane_2

0xa07c,	// (0x0002486f) list_highlight_pane_cp4

0x21e7,	// (0x0001c9da) cell_ai_link_pane_ParamLimits

0x21e7,	// (0x0001c9da) cell_ai_link_pane

0xa044,	// (0x00024837) cell_ai_link_pane_g1

0x7598,	// (0x00021d8b) cell_ai_link_pane_g2

0x0001,

0xf911,	// (0x0002a104) cell_ai_link_pane_g

0x70a7,	// (0x0002189a) grid_highlight_cp2

0x70a7,	// (0x0002189a) bg_popup_sub_pane_cp1

0x738e,	// (0x00021b81) popup_ai_links_title_window_t1

0x9f92,	// (0x00024785) ai_gene_pane_1_g1_ParamLimits

0x9f92,	// (0x00024785) ai_gene_pane_1_g1

0x9f9e,	// (0x00024791) ai_gene_pane_1_g2_ParamLimits

0x9f9e,	// (0x00024791) ai_gene_pane_1_g2

0x0001,

0xf907,	// (0x0002a0fa) ai_gene_pane_1_g_ParamLimits

0xf907,	// (0x0002a0fa) ai_gene_pane_1_g

0x9fab,	// (0x0002479e) ai_gene_pane_1_t1_ParamLimits

0x9fab,	// (0x0002479e) ai_gene_pane_1_t1

0x9fdf,	// (0x000247d2) grid_ai_soft_ind_pane

0x9f7d,	// (0x00024770) ai_gene_pane_2_t1_ParamLimits

0x9f7d,	// (0x00024770) ai_gene_pane_2_t1

0x112a,	// (0x0001b91d) main_pane_empty_t1_ParamLimits

0x112a,	// (0x0001b91d) main_pane_empty_t1

0x1142,	// (0x0001b935) main_pane_empty_t2_ParamLimits

0x1142,	// (0x0001b935) main_pane_empty_t2

0x1157,	// (0x0001b94a) main_pane_empty_t3_ParamLimits

0x1157,	// (0x0001b94a) main_pane_empty_t3

0x1169,	// (0x0001b95c) main_pane_empty_t4_ParamLimits

0x1169,	// (0x0001b95c) main_pane_empty_t4

0x117b,	// (0x0001b96e) main_pane_empty_t5_ParamLimits

0x117b,	// (0x0001b96e) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00029d6d) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00029d6d) main_pane_empty_t

0x7a92,	// (0x00022285) bg_popup_window_pane_ParamLimits

0x7a92,	// (0x00022285) bg_popup_window_pane

0x9cf7,	// (0x000244ea) find_popup_pane_cp2_ParamLimits

0x9cf7,	// (0x000244ea) find_popup_pane_cp2

0x9d03,	// (0x000244f6) heading_pane_ParamLimits

0x9d03,	// (0x000244f6) heading_pane

0x70a7,	// (0x0002189a) bg_popup_sub_pane

0x211c,	// (0x0001c90f) bg_popup_window_pane_g1_ParamLimits

0x211c,	// (0x0001c90f) bg_popup_window_pane_g1

0x212b,	// (0x0001c91e) bg_popup_window_pane_g2_ParamLimits

0x212b,	// (0x0001c91e) bg_popup_window_pane_g2

0x2137,	// (0x0001c92a) bg_popup_window_pane_g3_ParamLimits

0x2137,	// (0x0001c92a) bg_popup_window_pane_g3

0x2143,	// (0x0001c936) bg_popup_window_pane_g4_ParamLimits

0x2143,	// (0x0001c936) bg_popup_window_pane_g4

0x2152,	// (0x0001c945) bg_popup_window_pane_g5_ParamLimits

0x2152,	// (0x0001c945) bg_popup_window_pane_g5

0x2162,	// (0x0001c955) bg_popup_window_pane_g6_ParamLimits

0x2162,	// (0x0001c955) bg_popup_window_pane_g6

0x216e,	// (0x0001c961) bg_popup_window_pane_g7_ParamLimits

0x216e,	// (0x0001c961) bg_popup_window_pane_g7

0x217d,	// (0x0001c970) bg_popup_window_pane_g8_ParamLimits

0x217d,	// (0x0001c970) bg_popup_window_pane_g8

0x218c,	// (0x0001c97f) bg_popup_window_pane_g9_ParamLimits

0x218c,	// (0x0001c97f) bg_popup_window_pane_g9

0x9cdd,	// (0x000244d0) bg_popup_window_pane_g10_ParamLimits

0x9cdd,	// (0x000244d0) bg_popup_window_pane_g10

0x0009,

0xf8cf,	// (0x0002a0c2) bg_popup_window_pane_g_ParamLimits

0xf8cf,	// (0x0002a0c2) bg_popup_window_pane_g

0x9c06,	// (0x000243f9) bg_popup_heading_pane_ParamLimits

0x9c06,	// (0x000243f9) bg_popup_heading_pane

0x60de,	// (0x000208d1) tabs_4_passive_pane_cp_srt_ParamLimits

0x60de,	// (0x000208d1) tabs_4_passive_pane_cp_srt

0x60f0,	// (0x000208e3) tabs_4_passive_pane_srt_ParamLimits

0x9c1a,	// (0x0002440d) heading_pane_g2

0x60f0,	// (0x000208e3) tabs_4_passive_pane_srt

0x8f72,	// (0x00023765) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8f72,	// (0x00023765) bg_passive_tab_pane_cp3_srt

0x9c22,	// (0x00024415) heading_pane_t1_ParamLimits

0x9c22,	// (0x00024415) heading_pane_t1

0x9c39,	// (0x0002442c) heading_pane_t2_ParamLimits

0x9c39,	// (0x0002442c) heading_pane_t2

0x0001,

0xf8ca,	// (0x0002a0bd) heading_pane_t_ParamLimits

0xf8ca,	// (0x0002a0bd) heading_pane_t

0x9741,	// (0x00023f34) bg_popup_heading_pane_g1

0x97f0,	// (0x00023fe3) bg_popup_heading_pane_g2

0x97fa,	// (0x00023fed) bg_popup_heading_pane_g3

0x9804,	// (0x00023ff7) bg_popup_heading_pane_g4

0x980e,	// (0x00024001) bg_popup_heading_pane_g5

0x9818,	// (0x0002400b) bg_popup_heading_pane_g6

0x9820,	// (0x00024013) bg_popup_heading_pane_g7

0x9828,	// (0x0002401b) bg_popup_heading_pane_g8

0x9832,	// (0x00024025) bg_popup_heading_pane_g9

0x0008,

0xf886,	// (0x0002a079) bg_popup_heading_pane_g

0x8e82,	// (0x00023675) bg_popup_sub_pane_g1

0x8e8a,	// (0x0002367d) bg_popup_sub_pane_g2

0x8e92,	// (0x00023685) bg_popup_sub_pane_g3

0x8e9a,	// (0x0002368d) bg_popup_sub_pane_g4

0x8ea2,	// (0x00023695) bg_popup_sub_pane_g5

0x8eaa,	// (0x0002369d) bg_popup_sub_pane_g6

0x8eb2,	// (0x000236a5) bg_popup_sub_pane_g7

0x8eba,	// (0x000236ad) bg_popup_sub_pane_g8

0x8ec2,	// (0x000236b5) bg_popup_sub_pane_g9

0x0008,

0xf860,	// (0x0002a053) bg_popup_sub_pane_g

0x7402,	// (0x00021bf5) bg_popup_window_pane_cp5_ParamLimits

0x7402,	// (0x00021bf5) bg_popup_window_pane_cp5

0x741e,	// (0x00021c11) popup_note_window_g1_ParamLimits

0x741e,	// (0x00021c11) popup_note_window_g1

0x742a,	// (0x00021c1d) popup_note_window_t1_ParamLimits

0x742a,	// (0x00021c1d) popup_note_window_t1

0x743c,	// (0x00021c2f) popup_note_window_t2_ParamLimits

0x743c,	// (0x00021c2f) popup_note_window_t2

0x744e,	// (0x00021c41) popup_note_window_t3_ParamLimits

0x744e,	// (0x00021c41) popup_note_window_t3

0x7460,	// (0x00021c53) popup_note_window_t4_ParamLimits

0x7460,	// (0x00021c53) popup_note_window_t4

0x7488,	// (0x00021c7b) popup_note_window_t5_ParamLimits

0x7488,	// (0x00021c7b) popup_note_window_t5

0x0004,

0xf585,	// (0x00029d78) popup_note_window_t_ParamLimits

0xf585,	// (0x00029d78) popup_note_window_t

0x74ac,	// (0x00021c9f) bg_popup_window_pane_cp6_ParamLimits

0x74ac,	// (0x00021c9f) bg_popup_window_pane_cp6

0x96b5,	// (0x00023ea8) popup_note_image_window_g1_ParamLimits

0x96b5,	// (0x00023ea8) popup_note_image_window_g1

0x96c1,	// (0x00023eb4) popup_note_image_window_g2_ParamLimits

0x96c1,	// (0x00023eb4) popup_note_image_window_g2

0x0001,

0xf854,	// (0x0002a047) popup_note_image_window_g_ParamLimits

0xf854,	// (0x0002a047) popup_note_image_window_g

0x96da,	// (0x00023ecd) popup_note_image_window_t1_ParamLimits

0x96da,	// (0x00023ecd) popup_note_image_window_t1

0x96f3,	// (0x00023ee6) popup_note_image_window_t2_ParamLimits

0x96f3,	// (0x00023ee6) popup_note_image_window_t2

0x970c,	// (0x00023eff) popup_note_image_window_t3_ParamLimits

0x970c,	// (0x00023eff) popup_note_image_window_t3

0x0002,

0xf859,	// (0x0002a04c) popup_note_image_window_t_ParamLimits

0xf859,	// (0x0002a04c) popup_note_image_window_t

0x9576,	// (0x00023d69) bg_popup_window_pane_cp7_ParamLimits

0x9576,	// (0x00023d69) bg_popup_window_pane_cp7

0x95a6,	// (0x00023d99) popup_note_wait_window_g1_ParamLimits

0x95a6,	// (0x00023d99) popup_note_wait_window_g1

0x95b2,	// (0x00023da5) popup_note_wait_window_g2_ParamLimits

0x95b2,	// (0x00023da5) popup_note_wait_window_g2

0x0002,

0xf842,	// (0x0002a035) popup_note_wait_window_g_ParamLimits

0xf842,	// (0x0002a035) popup_note_wait_window_g

0x95ca,	// (0x00023dbd) popup_note_wait_window_t1_ParamLimits

0x95ca,	// (0x00023dbd) popup_note_wait_window_t1

0x95f1,	// (0x00023de4) popup_note_wait_window_t2_ParamLimits

0x95f1,	// (0x00023de4) popup_note_wait_window_t2

0x960e,	// (0x00023e01) popup_note_wait_window_t3_ParamLimits

0x960e,	// (0x00023e01) popup_note_wait_window_t3

0x9621,	// (0x00023e14) popup_note_wait_window_t4_ParamLimits

0x9621,	// (0x00023e14) popup_note_wait_window_t4

0x0004,

0xf849,	// (0x0002a03c) popup_note_wait_window_t_ParamLimits

0xf849,	// (0x0002a03c) popup_note_wait_window_t

0x9646,	// (0x00023e39) wait_bar_pane_ParamLimits

0x9646,	// (0x00023e39) wait_bar_pane

0x70a7,	// (0x0002189a) wait_anim_pane

0x70a7,	// (0x0002189a) wait_border_pane

0x709d,	// (0x00021890) wait_anim_pane_g1

0x709d,	// (0x00021890) wait_anim_pane_g2

0x0001,

0xf709,	// (0x00029efc) wait_anim_pane_g

0x951a,	// (0x00023d0d) wait_border_pane_g1

0x9525,	// (0x00023d18) wait_border_pane_g2

0x952e,	// (0x00023d21) wait_border_pane_g3

0x0002,

0xf83b,	// (0x0002a02e) wait_border_pane_g

0x938a,	// (0x00023b7d) bg_popup_window_pane_cp16_ParamLimits

0x938a,	// (0x00023b7d) bg_popup_window_pane_cp16

0x948a,	// (0x00023c7d) indicator_popup_pane_cp4_ParamLimits

0x948a,	// (0x00023c7d) indicator_popup_pane_cp4

0x949e,	// (0x00023c91) popup_query_data_window_t1_ParamLimits

0x949e,	// (0x00023c91) popup_query_data_window_t1

0x94b0,	// (0x00023ca3) popup_query_data_window_t2_ParamLimits

0x94b0,	// (0x00023ca3) popup_query_data_window_t2

0x94c9,	// (0x00023cbc) popup_query_data_window_t3_ParamLimits

0x94c9,	// (0x00023cbc) popup_query_data_window_t3

0x0002,

0xf834,	// (0x0002a027) popup_query_data_window_t_ParamLimits

0xf834,	// (0x0002a027) popup_query_data_window_t

0x94e3,	// (0x00023cd6) query_popup_data_pane_ParamLimits

0x94e3,	// (0x00023cd6) query_popup_data_pane

0x94f7,	// (0x00023cea) query_popup_data_pane_cp1_ParamLimits

0x94f7,	// (0x00023cea) query_popup_data_pane_cp1

0x938a,	// (0x00023b7d) bg_popup_window_pane_cp10_ParamLimits

0x938a,	// (0x00023b7d) bg_popup_window_pane_cp10

0x93bc,	// (0x00023baf) indicator_popup_pane_ParamLimits

0x93bc,	// (0x00023baf) indicator_popup_pane

0x93de,	// (0x00023bd1) popup_query_code_window_t1_ParamLimits

0x93de,	// (0x00023bd1) popup_query_code_window_t1

0x93f8,	// (0x00023beb) popup_query_code_window_t2_ParamLimits

0x93f8,	// (0x00023beb) popup_query_code_window_t2

0x9441,	// (0x00023c34) popup_query_code_window_t3_ParamLimits

0x9441,	// (0x00023c34) popup_query_code_window_t3

0x0002,

0xf82d,	// (0x0002a020) popup_query_code_window_t_ParamLimits

0xf82d,	// (0x0002a020) popup_query_code_window_t

0x9470,	// (0x00023c63) query_popup_pane_ParamLimits

0x9470,	// (0x00023c63) query_popup_pane

0x74ac,	// (0x00021c9f) bg_popup_window_pane_cp15_ParamLimits

0x74ac,	// (0x00021c9f) bg_popup_window_pane_cp15

0x74ca,	// (0x00021cbd) indicator_popup_pane_cp1_ParamLimits

0x74ca,	// (0x00021cbd) indicator_popup_pane_cp1

0x74dd,	// (0x00021cd0) indicator_popup_pane_cp2_ParamLimits

0x74dd,	// (0x00021cd0) indicator_popup_pane_cp2

0x74f0,	// (0x00021ce3) popup_query_data_code_window_g1_ParamLimits

0x74f0,	// (0x00021ce3) popup_query_data_code_window_g1

0x7503,	// (0x00021cf6) popup_query_data_code_window_t1_ParamLimits

0x7503,	// (0x00021cf6) popup_query_data_code_window_t1

0x7515,	// (0x00021d08) popup_query_data_code_window_t2_ParamLimits

0x7515,	// (0x00021d08) popup_query_data_code_window_t2

0x7527,	// (0x00021d1a) popup_query_data_code_window_t3_ParamLimits

0x7527,	// (0x00021d1a) popup_query_data_code_window_t3

0x753d,	// (0x00021d30) popup_query_data_code_window_t4_ParamLimits

0x753d,	// (0x00021d30) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00029d83) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00029d83) popup_query_data_code_window_t

0x8470,	// (0x00022c63) list_single_midp_graphic_pane_g3

0x7555,	// (0x00021d48) query_popup_data_pane_cp2_ParamLimits

0x7568,	// (0x00021d5b) query_popup_pane_cp2_ParamLimits

0x7568,	// (0x00021d5b) query_popup_pane_cp2

0x70a7,	// (0x0002189a) bg_popup_window_pane_cp11

0x9382,	// (0x00023b75) heading_pane_cp5

0x7650,	// (0x00021e43) listscroll_popup_info_pane

0x70a7,	// (0x0002189a) input_focus_pane_cp3

0x757b,	// (0x00021d6e) query_popup_pane_t1

0x7589,	// (0x00021d7c) list_popup_info_pane_ParamLimits

0x7589,	// (0x00021d7c) list_popup_info_pane

0x7598,	// (0x00021d8b) listscroll_popup_info_pane_g1

0x75a0,	// (0x00021d93) scroll_pane_cp7

0x75aa,	// (0x00021d9d) popup_info_list_pane_t1_ParamLimits

0x75aa,	// (0x00021d9d) popup_info_list_pane_t1

0x75c4,	// (0x00021db7) popup_info_list_pane_t2_ParamLimits

0x75c4,	// (0x00021db7) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00029d8c) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00029d8c) popup_info_list_pane_t

0x70a7,	// (0x0002189a) bg_popup_window_pane_cp12

0xa6bf,	// (0x00024eb2) find_popup_pane

0x7187,	// (0x0002197a) bg_popup_window_pane_cp3

0x75de,	// (0x00021dd1) heading_pane_cp3

0x75ea,	// (0x00021ddd) listscroll_popup_graphic_pane

0x70a7,	// (0x0002189a) bg_popup_window_pane_cp4

0x11dd,	// (0x0001b9d0) heading_pane_cp4

0x7650,	// (0x00021e43) listscroll_popup_colour_pane

0x11e5,	// (0x0001b9d8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x11e5,	// (0x0001b9d8) cell_large_graphic_colour_none_popup_pane

0x11f9,	// (0x0001b9ec) grid_large_graphic_colour_popup_pane_ParamLimits

0x11f9,	// (0x0001b9ec) grid_large_graphic_colour_popup_pane

0x121d,	// (0x0001ba10) listscroll_popup_colour_pane_g1_ParamLimits

0x121d,	// (0x0001ba10) listscroll_popup_colour_pane_g1

0x1234,	// (0x0001ba27) listscroll_popup_colour_pane_g2_ParamLimits

0x1234,	// (0x0001ba27) listscroll_popup_colour_pane_g2

0x124b,	// (0x0001ba3e) listscroll_popup_colour_pane_g3_ParamLimits

0x124b,	// (0x0001ba3e) listscroll_popup_colour_pane_g3

0x125b,	// (0x0001ba4e) listscroll_popup_colour_pane_g4_ParamLimits

0x125b,	// (0x0001ba4e) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00029d91) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00029d91) listscroll_popup_colour_pane_g

0x76dd,	// (0x00021ed0) scroll_pane_cp6_ParamLimits

0x76dd,	// (0x00021ed0) scroll_pane_cp6

0x126a,	// (0x0001ba5d) cell_large_graphic_colour_popup_pane_ParamLimits

0x126a,	// (0x0001ba5d) cell_large_graphic_colour_popup_pane

0x770e,	// (0x00021f01) cell_large_graphic_colour_none_popup_pane_t1

0x70a7,	// (0x0002189a) grid_highlight_pane_cp5

0x771d,	// (0x00021f10) cell_large_graphic_colour_popup_pane_g1

0x7725,	// (0x00021f18) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00029d9a) cell_large_graphic_colour_popup_pane_g

0x772d,	// (0x00021f20) cell_large_graphic_colour_popup_pane_g2_copy1

0x7736,	// (0x00021f29) grid_highlight_pane_cp4

0x773e,	// (0x00021f31) bg_popup_window_pane_cp8_ParamLimits

0x773e,	// (0x00021f31) bg_popup_window_pane_cp8

0x7759,	// (0x00021f4c) popup_snote_single_text_window_g1_ParamLimits

0x7759,	// (0x00021f4c) popup_snote_single_text_window_g1

0x776b,	// (0x00021f5e) popup_snote_single_text_window_t1_ParamLimits

0x776b,	// (0x00021f5e) popup_snote_single_text_window_t1

0x777e,	// (0x00021f71) popup_snote_single_text_window_t2_ParamLimits

0x777e,	// (0x00021f71) popup_snote_single_text_window_t2

0x7791,	// (0x00021f84) popup_snote_single_text_window_t3_ParamLimits

0x7791,	// (0x00021f84) popup_snote_single_text_window_t3

0x77ca,	// (0x00021fbd) popup_snote_single_text_window_t4_ParamLimits

0x77ca,	// (0x00021fbd) popup_snote_single_text_window_t4

0x77fe,	// (0x00021ff1) popup_snote_single_text_window_t5_ParamLimits

0x77fe,	// (0x00021ff1) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00029d9f) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00029d9f) popup_snote_single_text_window_t

0x782d,	// (0x00022020) bg_popup_window_pane_cp9_ParamLimits

0x782d,	// (0x00022020) bg_popup_window_pane_cp9

0x7759,	// (0x00021f4c) popup_snote_single_graphic_window_g1_ParamLimits

0x7759,	// (0x00021f4c) popup_snote_single_graphic_window_g1

0x783b,	// (0x0002202e) popup_snote_single_graphic_window_g2_ParamLimits

0x783b,	// (0x0002202e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00029daa) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00029daa) popup_snote_single_graphic_window_g

0x7847,	// (0x0002203a) popup_snote_single_graphic_window_t1_ParamLimits

0x7847,	// (0x0002203a) popup_snote_single_graphic_window_t1

0x785a,	// (0x0002204d) popup_snote_single_graphic_window_t2_ParamLimits

0x785a,	// (0x0002204d) popup_snote_single_graphic_window_t2

0x786d,	// (0x00022060) popup_snote_single_graphic_window_t3_ParamLimits

0x786d,	// (0x00022060) popup_snote_single_graphic_window_t3

0x78a6,	// (0x00022099) popup_snote_single_graphic_window_t4_ParamLimits

0x78a6,	// (0x00022099) popup_snote_single_graphic_window_t4

0x78da,	// (0x000220cd) popup_snote_single_graphic_window_t5_ParamLimits

0x78da,	// (0x000220cd) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00029daf) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00029daf) popup_snote_single_graphic_window_t

0xa5ff,	// (0x00024df2) grid_graphic_popup_pane_ParamLimits

0xa5ff,	// (0x00024df2) grid_graphic_popup_pane

0xa62b,	// (0x00024e1e) listscroll_popup_graphic_pane_g1_ParamLimits

0xa62b,	// (0x00024e1e) listscroll_popup_graphic_pane_g1

0x2509,	// (0x0001ccfc) listscroll_popup_graphic_pane_g2_ParamLimits

0x2509,	// (0x0001ccfc) listscroll_popup_graphic_pane_g2

0x0001,

0xf9aa,	// (0x0002a19d) listscroll_popup_graphic_pane_g_ParamLimits

0xf9aa,	// (0x0002a19d) listscroll_popup_graphic_pane_g

0xa653,	// (0x00024e46) scroll_pane_cp5

0x24cd,	// (0x0001ccc0) cell_graphic_popup_pane_ParamLimits

0x24cd,	// (0x0001ccc0) cell_graphic_popup_pane

0xa58b,	// (0x00024d7e) cell_graphic_popup_pane_g1

0xa593,	// (0x00024d86) cell_graphic_popup_pane_g2

0x772d,	// (0x00021f20) cell_graphic_popup_pane_g3

0x0002,

0xf9a3,	// (0x0002a196) cell_graphic_popup_pane_g

0xa59c,	// (0x00024d8f) cell_graphic_popup_pane_t2

0x7736,	// (0x00021f29) grid_highlight_pane_cp3

0x791b,	// (0x0002210e) list_gen_pane_ParamLimits

0x791b,	// (0x0002210e) list_gen_pane

0x794d,	// (0x00022140) scroll_pane

0x2488,	// (0x0001cc7b) bg_list_pane_g1_ParamLimits

0x2488,	// (0x0001cc7b) bg_list_pane_g1

0xa508,	// (0x00024cfb) bg_list_pane_g2_ParamLimits

0xa508,	// (0x00024cfb) bg_list_pane_g2

0xa51b,	// (0x00024d0e) bg_list_pane_g3_ParamLimits

0xa51b,	// (0x00024d0e) bg_list_pane_g3

0xa52d,	// (0x00024d20) bg_list_pane_g4_ParamLimits

0xa52d,	// (0x00024d20) bg_list_pane_g4

0x24a3,	// (0x0001cc96) bg_list_pane_g5_ParamLimits

0x24a3,	// (0x0001cc96) bg_list_pane_g5

0x0004,

0xf998,	// (0x0002a18b) bg_list_pane_g_ParamLimits

0xf998,	// (0x0002a18b) bg_list_pane_g

0x2411,	// (0x0001cc04) list_double2_graphic_large_graphic_pane_ParamLimits

0x2411,	// (0x0001cc04) list_double2_graphic_large_graphic_pane

0x2411,	// (0x0001cc04) list_double2_graphic_pane_ParamLimits

0x2411,	// (0x0001cc04) list_double2_graphic_pane

0x2411,	// (0x0001cc04) list_double2_large_graphic_pane_ParamLimits

0x2411,	// (0x0001cc04) list_double2_large_graphic_pane

0x2474,	// (0x0001cc67) list_double2_pane_ParamLimits

0x2474,	// (0x0001cc67) list_double2_pane

0x2411,	// (0x0001cc04) list_double_graphic_heading_pane_ParamLimits

0x2411,	// (0x0001cc04) list_double_graphic_heading_pane

0x2411,	// (0x0001cc04) list_double_graphic_pane_ParamLimits

0x2411,	// (0x0001cc04) list_double_graphic_pane

0x2411,	// (0x0001cc04) list_double_heading_pane_ParamLimits

0x2411,	// (0x0001cc04) list_double_heading_pane

0x2411,	// (0x0001cc04) list_double_large_graphic_pane_ParamLimits

0x2411,	// (0x0001cc04) list_double_large_graphic_pane

0x2411,	// (0x0001cc04) list_double_number_pane_ParamLimits

0x2411,	// (0x0001cc04) list_double_number_pane

0x2411,	// (0x0001cc04) list_double_pane_ParamLimits

0x2411,	// (0x0001cc04) list_double_pane

0x2411,	// (0x0001cc04) list_double_time_pane_ParamLimits

0x2411,	// (0x0001cc04) list_double_time_pane

0x2411,	// (0x0001cc04) list_setting_number_pane_ParamLimits

0x2411,	// (0x0001cc04) list_setting_number_pane

0x2411,	// (0x0001cc04) list_setting_pane_ParamLimits

0x2411,	// (0x0001cc04) list_setting_pane

0x2424,	// (0x0001cc17) list_single_2graphic_pane_ParamLimits

0x2424,	// (0x0001cc17) list_single_2graphic_pane

0x2424,	// (0x0001cc17) list_single_graphic_heading_pane_ParamLimits

0x2424,	// (0x0001cc17) list_single_graphic_heading_pane

0x2424,	// (0x0001cc17) list_single_graphic_pane_ParamLimits

0x2424,	// (0x0001cc17) list_single_graphic_pane

0x2424,	// (0x0001cc17) list_single_heading_pane_ParamLimits

0x2424,	// (0x0001cc17) list_single_heading_pane

0x2474,	// (0x0001cc67) list_single_large_graphic_pane_ParamLimits

0x2474,	// (0x0001cc67) list_single_large_graphic_pane

0x2424,	// (0x0001cc17) list_single_number_heading_pane_ParamLimits

0x2424,	// (0x0001cc17) list_single_number_heading_pane

0x2424,	// (0x0001cc17) list_single_number_pane_ParamLimits

0x2424,	// (0x0001cc17) list_single_number_pane

0x2424,	// (0x0001cc17) list_single_pane_ParamLimits

0x2424,	// (0x0001cc17) list_single_pane

0x70a7,	// (0x0002189a) list_highlight_pane_cp1

0x3e86,	// (0x0001e679) list_single_pane_g1_ParamLimits

0x3e86,	// (0x0001e679) list_single_pane_g1

0x3e92,	// (0x0001e685) list_single_pane_g2_ParamLimits

0x3e92,	// (0x0001e685) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00029dc1) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00029dc1) list_single_pane_g

0x46c7,	// (0x0001eeba) list_single_pane_t1_ParamLimits

0x46c7,	// (0x0001eeba) list_single_pane_t1

0x3e86,	// (0x0001e679) list_single_number_pane_g1_ParamLimits

0x3e86,	// (0x0001e679) list_single_number_pane_g1

0x3e92,	// (0x0001e685) list_single_number_pane_g2_ParamLimits

0x3e92,	// (0x0001e685) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00029dc1) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00029dc1) list_single_number_pane_g

0x45fb,	// (0x0001edee) list_single_number_pane_t1_ParamLimits

0x45fb,	// (0x0001edee) list_single_number_pane_t1

0x4687,	// (0x0001ee7a) list_single_number_pane_t2_ParamLimits

0x4687,	// (0x0001ee7a) list_single_number_pane_t2

0x0001,

0xf959,	// (0x0002a14c) list_single_number_pane_t_ParamLimits

0xf959,	// (0x0002a14c) list_single_number_pane_t

0x3e7a,	// (0x0001e66d) list_single_graphic_pane_g1_ParamLimits

0x3e7a,	// (0x0001e66d) list_single_graphic_pane_g1

0x3e86,	// (0x0001e679) list_single_graphic_pane_g2_ParamLimits

0x3e86,	// (0x0001e679) list_single_graphic_pane_g2

0x3e92,	// (0x0001e685) list_single_graphic_pane_g3_ParamLimits

0x3e92,	// (0x0001e685) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00029dba) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00029dba) list_single_graphic_pane_g

0x3e9e,	// (0x0001e691) list_single_graphic_pane_t1_ParamLimits

0x3e9e,	// (0x0001e691) list_single_graphic_pane_t1

0x3e86,	// (0x0001e679) list_single_heading_pane_g1_ParamLimits

0x3e86,	// (0x0001e679) list_single_heading_pane_g1

0x3e92,	// (0x0001e685) list_single_heading_pane_g2_ParamLimits

0x3e92,	// (0x0001e685) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00029dc1) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00029dc1) list_single_heading_pane_g

0x3eb4,	// (0x0001e6a7) list_single_heading_pane_t1_ParamLimits

0x3eb4,	// (0x0001e6a7) list_single_heading_pane_t1

0x3eca,	// (0x0001e6bd) list_single_heading_pane_t2_ParamLimits

0x3eca,	// (0x0001e6bd) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00029dc6) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00029dc6) list_single_heading_pane_t

0x3e86,	// (0x0001e679) list_single_number_heading_pane_g1_ParamLimits

0x3e86,	// (0x0001e679) list_single_number_heading_pane_g1

0x3e92,	// (0x0001e685) list_single_number_heading_pane_g2_ParamLimits

0x3e92,	// (0x0001e685) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00029dc1) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00029dc1) list_single_number_heading_pane_g

0x3eb4,	// (0x0001e6a7) list_single_number_heading_pane_t1_ParamLimits

0x3eb4,	// (0x0001e6a7) list_single_number_heading_pane_t1

0x3edc,	// (0x0001e6cf) list_single_number_heading_pane_t2_ParamLimits

0x3edc,	// (0x0001e6cf) list_single_number_heading_pane_t2

0x3eee,	// (0x0001e6e1) list_single_number_heading_pane_t3_ParamLimits

0x3eee,	// (0x0001e6e1) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x00029dcb) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x00029dcb) list_single_number_heading_pane_t

0x3f00,	// (0x0001e6f3) list_single_graphic_heading_pane_g1_ParamLimits

0x3f00,	// (0x0001e6f3) list_single_graphic_heading_pane_g1

0xd059,	// (0x0002784c) list_single_graphic_heading_pane_g4_ParamLimits

0xd059,	// (0x0002784c) list_single_graphic_heading_pane_g4

0x3e92,	// (0x0001e685) list_single_graphic_heading_pane_g5_ParamLimits

0x3e92,	// (0x0001e685) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00029dd2) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00029dd2) list_single_graphic_heading_pane_g

0x3eb4,	// (0x0001e6a7) list_single_graphic_heading_pane_t1_ParamLimits

0x3eb4,	// (0x0001e6a7) list_single_graphic_heading_pane_t1

0x3f1d,	// (0x0001e710) list_single_graphic_heading_pane_t2_ParamLimits

0x3f1d,	// (0x0001e710) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x00029dd9) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x00029dd9) list_single_graphic_heading_pane_t

0x47f8,	// (0x0001efeb) list_single_large_graphic_pane_g1_ParamLimits

0x47f8,	// (0x0001efeb) list_single_large_graphic_pane_g1

0x4804,	// (0x0001eff7) list_single_large_graphic_pane_g2_ParamLimits

0x4804,	// (0x0001eff7) list_single_large_graphic_pane_g2

0x4810,	// (0x0001f003) list_single_large_graphic_pane_g3_ParamLimits

0x4810,	// (0x0001f003) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00029dde) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00029dde) list_single_large_graphic_pane_g

0x9525,	// (0x00023d18) wait_border_pane_g2_copy1

0xd06a,	// (0x0002785d) list_single_large_graphic_pane_g4_cp2

0x481c,	// (0x0001f00f) list_single_large_graphic_pane_t1_ParamLimits

0x481c,	// (0x0001f00f) list_single_large_graphic_pane_t1

0xd072,	// (0x00027865) list_double_pane_g1_ParamLimits

0xd072,	// (0x00027865) list_double_pane_g1

0xd07e,	// (0x00027871) list_double_pane_g2_ParamLimits

0xd07e,	// (0x00027871) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00029de5) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00029de5) list_double_pane_g

0xd08a,	// (0x0002787d) list_double_pane_t1_ParamLimits

0xd08a,	// (0x0002787d) list_double_pane_t1

0xd0a0,	// (0x00027893) list_double_pane_t2_ParamLimits

0xd0a0,	// (0x00027893) list_double_pane_t2

0x0001,

0xf5f7,	// (0x00029dea) list_double_pane_t_ParamLimits

0xf5f7,	// (0x00029dea) list_double_pane_t

0xd0b2,	// (0x000278a5) list_double2_pane_g1_ParamLimits

0xd0b2,	// (0x000278a5) list_double2_pane_g1

0x4156,	// (0x0001e949) list_double2_pane_g2_ParamLimits

0x4156,	// (0x0001e949) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00029def) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00029def) list_double2_pane_g

0xd0c3,	// (0x000278b6) list_double2_pane_t1_ParamLimits

0xd0c3,	// (0x000278b6) list_double2_pane_t1

0xd0d9,	// (0x000278cc) list_double2_pane_t2_ParamLimits

0xd0d9,	// (0x000278cc) list_double2_pane_t2

0x0001,

0xf601,	// (0x00029df4) list_double2_pane_t_ParamLimits

0xf601,	// (0x00029df4) list_double2_pane_t

0xd072,	// (0x00027865) list_double_number_pane_g1_ParamLimits

0xd072,	// (0x00027865) list_double_number_pane_g1

0xd07e,	// (0x00027871) list_double_number_pane_g2_ParamLimits

0xd07e,	// (0x00027871) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00029de5) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00029de5) list_double_number_pane_g

0xd0eb,	// (0x000278de) list_double_number_pane_t1_ParamLimits

0xd0eb,	// (0x000278de) list_double_number_pane_t1

0xd0fd,	// (0x000278f0) list_double_number_pane_t2_ParamLimits

0xd0fd,	// (0x000278f0) list_double_number_pane_t2

0xd113,	// (0x00027906) list_double_number_pane_t3_ParamLimits

0xd113,	// (0x00027906) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00029df9) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00029df9) list_double_number_pane_t

0xd125,	// (0x00027918) list_double_graphic_pane_g1_ParamLimits

0xd125,	// (0x00027918) list_double_graphic_pane_g1

0xd131,	// (0x00027924) list_double_graphic_pane_g2_ParamLimits

0xd131,	// (0x00027924) list_double_graphic_pane_g2

0xd140,	// (0x00027933) list_double_graphic_pane_g3_ParamLimits

0xd140,	// (0x00027933) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00029e00) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00029e00) list_double_graphic_pane_g

0xd158,	// (0x0002794b) list_double_graphic_pane_t1_ParamLimits

0xd158,	// (0x0002794b) list_double_graphic_pane_t1

0xd16e,	// (0x00027961) list_double_graphic_pane_t2_ParamLimits

0xd16e,	// (0x00027961) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00029e09) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00029e09) list_double_graphic_pane_t

0xd125,	// (0x00027918) list_double2_graphic_pane_g1_ParamLimits

0xd125,	// (0x00027918) list_double2_graphic_pane_g1

0xd180,	// (0x00027973) list_double2_graphic_pane_g2_ParamLimits

0xd180,	// (0x00027973) list_double2_graphic_pane_g2

0xd18c,	// (0x0002797f) list_double2_graphic_pane_g3_ParamLimits

0xd18c,	// (0x0002797f) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x00029e0e) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x00029e0e) list_double2_graphic_pane_g

0xd0fd,	// (0x000278f0) list_double2_graphic_pane_t1_ParamLimits

0xd0fd,	// (0x000278f0) list_double2_graphic_pane_t1

0xd198,	// (0x0002798b) list_double2_graphic_pane_t2_ParamLimits

0xd198,	// (0x0002798b) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00029e15) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00029e15) list_double2_graphic_pane_t

0xd1aa,	// (0x0002799d) list_double_large_graphic_pane_g1_ParamLimits

0xd1aa,	// (0x0002799d) list_double_large_graphic_pane_g1

0xd1d5,	// (0x000279c8) list_double_large_graphic_pane_g2_ParamLimits

0xd1d5,	// (0x000279c8) list_double_large_graphic_pane_g2

0xd07e,	// (0x00027871) list_double_large_graphic_pane_g3_ParamLimits

0xd07e,	// (0x00027871) list_double_large_graphic_pane_g3

0xd1e6,	// (0x000279d9) list_double_large_graphic_pane_g4_ParamLimits

0xd1e6,	// (0x000279d9) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00029e1a) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00029e1a) list_double_large_graphic_pane_g

0xd1f8,	// (0x000279eb) list_double_large_graphic_pane_t1_ParamLimits

0xd1f8,	// (0x000279eb) list_double_large_graphic_pane_t1

0xd211,	// (0x00027a04) list_double_large_graphic_pane_t2_ParamLimits

0xd211,	// (0x00027a04) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00029e25) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00029e25) list_double_large_graphic_pane_t

0xd223,	// (0x00027a16) list_double2_large_graphic_pane_g1_ParamLimits

0xd223,	// (0x00027a16) list_double2_large_graphic_pane_g1

0xd1d5,	// (0x000279c8) list_double2_large_graphic_pane_g2_ParamLimits

0xd1d5,	// (0x000279c8) list_double2_large_graphic_pane_g2

0xd07e,	// (0x00027871) list_double2_large_graphic_pane_g3_ParamLimits

0xd07e,	// (0x00027871) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00029e2a) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00029e2a) list_double2_large_graphic_pane_g

0xd22f,	// (0x00027a22) list_double2_large_graphic_pane_t1_ParamLimits

0xd22f,	// (0x00027a22) list_double2_large_graphic_pane_t1

0xd245,	// (0x00027a38) list_double2_large_graphic_pane_t2_ParamLimits

0xd245,	// (0x00027a38) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00029e31) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00029e31) list_double2_large_graphic_pane_t

0xd257,	// (0x00027a4a) list_double_heading_pane_g1_ParamLimits

0xd257,	// (0x00027a4a) list_double_heading_pane_g1

0x3f7d,	// (0x0001e770) list_double_heading_pane_g2_ParamLimits

0x3f7d,	// (0x0001e770) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00029e36) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00029e36) list_double_heading_pane_g

0xd268,	// (0x00027a5b) list_double_heading_pane_t1_ParamLimits

0xd268,	// (0x00027a5b) list_double_heading_pane_t1

0xd27e,	// (0x00027a71) list_double_heading_pane_t2_ParamLimits

0xd27e,	// (0x00027a71) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00029e3b) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00029e3b) list_double_heading_pane_t

0x400e,	// (0x0001e801) list_double_graphic_heading_pane_g1_ParamLimits

0x400e,	// (0x0001e801) list_double_graphic_heading_pane_g1

0xd257,	// (0x00027a4a) list_double_graphic_heading_pane_g2_ParamLimits

0xd257,	// (0x00027a4a) list_double_graphic_heading_pane_g2

0x3f7d,	// (0x0001e770) list_double_graphic_heading_pane_g3_ParamLimits

0x3f7d,	// (0x0001e770) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00029e40) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00029e40) list_double_graphic_heading_pane_g

0xd290,	// (0x00027a83) list_double_graphic_heading_pane_t1_ParamLimits

0xd290,	// (0x00027a83) list_double_graphic_heading_pane_t1

0xd198,	// (0x0002798b) list_double_graphic_heading_pane_t2_ParamLimits

0xd198,	// (0x0002798b) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00029e47) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00029e47) list_double_graphic_heading_pane_t

0xd1d5,	// (0x000279c8) list_double_time_pane_g1_ParamLimits

0xd1d5,	// (0x000279c8) list_double_time_pane_g1

0xd07e,	// (0x00027871) list_double_time_pane_g2_ParamLimits

0xd07e,	// (0x00027871) list_double_time_pane_g2

0x0001,

0xf659,	// (0x00029e4c) list_double_time_pane_g_ParamLimits

0xf659,	// (0x00029e4c) list_double_time_pane_g

0xd22f,	// (0x00027a22) list_double_time_pane_t1_ParamLimits

0xd22f,	// (0x00027a22) list_double_time_pane_t1

0xd2a6,	// (0x00027a99) list_double_time_pane_t2_ParamLimits

0xd2a6,	// (0x00027a99) list_double_time_pane_t2

0xd2b8,	// (0x00027aab) list_double_time_pane_t3_ParamLimits

0xd2b8,	// (0x00027aab) list_double_time_pane_t3

0xd2ca,	// (0x00027abd) list_double_time_pane_t4_ParamLimits

0xd2ca,	// (0x00027abd) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00029e51) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00029e51) list_double_time_pane_t

0x4069,	// (0x0001e85c) list_setting_pane_g1_ParamLimits

0x4069,	// (0x0001e85c) list_setting_pane_g1

0x4075,	// (0x0001e868) list_setting_pane_g2_ParamLimits

0x4075,	// (0x0001e868) list_setting_pane_g2

0x0001,

0xf667,	// (0x00029e5a) list_setting_pane_g_ParamLimits

0xf667,	// (0x00029e5a) list_setting_pane_g

0xd2dc,	// (0x00027acf) list_setting_pane_t1_ParamLimits

0xd2dc,	// (0x00027acf) list_setting_pane_t1

0xd2f6,	// (0x00027ae9) list_setting_pane_t2_ParamLimits

0xd2f6,	// (0x00027ae9) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00029e5f) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00029e5f) list_setting_pane_t

0xd333,	// (0x00027b26) set_value_pane_cp_ParamLimits

0xd333,	// (0x00027b26) set_value_pane_cp

0xd33f,	// (0x00027b32) list_setting_number_pane_g1_ParamLimits

0xd33f,	// (0x00027b32) list_setting_number_pane_g1

0xd34b,	// (0x00027b3e) list_setting_number_pane_g2_ParamLimits

0xd34b,	// (0x00027b3e) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x00029e66) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x00029e66) list_setting_number_pane_g

0xd357,	// (0x00027b4a) list_setting_number_pane_t1_ParamLimits

0xd357,	// (0x00027b4a) list_setting_number_pane_t1

0xd370,	// (0x00027b63) list_setting_number_pane_t2_ParamLimits

0xd370,	// (0x00027b63) list_setting_number_pane_t2

0xd38a,	// (0x00027b7d) list_setting_number_pane_t3_ParamLimits

0xd38a,	// (0x00027b7d) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x00029e6b) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x00029e6b) list_setting_number_pane_t

0xd333,	// (0x00027b26) set_value_pane_ParamLimits

0xd333,	// (0x00027b26) set_value_pane

0x7981,	// (0x00022174) bg_set_opt_pane_ParamLimits

0x7981,	// (0x00022174) bg_set_opt_pane

0x42c2,	// (0x0001eab5) set_value_pane_t1

0x79a2,	// (0x00022195) slider_set_pane_cp3

0x79ab,	// (0x0002219e) volume_small_pane_cp

0x79b4,	// (0x000221a7) list_form_gen_pane

0x79bd,	// (0x000221b0) scroll_pane_cp8

0xd3cd,	// (0x00027bc0) form_field_data_pane_ParamLimits

0xd3cd,	// (0x00027bc0) form_field_data_pane

0xd3e4,	// (0x00027bd7) form_field_data_wide_pane_ParamLimits

0xd3e4,	// (0x00027bd7) form_field_data_wide_pane

0xd404,	// (0x00027bf7) form_field_popup_pane_ParamLimits

0xd404,	// (0x00027bf7) form_field_popup_pane

0xd422,	// (0x00027c15) form_field_popup_wide_pane_ParamLimits

0xd422,	// (0x00027c15) form_field_popup_wide_pane

0x4352,	// (0x0001eb45) form_field_slider_pane_ParamLimits

0x4352,	// (0x0001eb45) form_field_slider_pane

0x4365,	// (0x0001eb58) form_field_slider_wide_pane_ParamLimits

0x4365,	// (0x0001eb58) form_field_slider_wide_pane

0x79ce,	// (0x000221c1) data_form_pane

0xd443,	// (0x00027c36) form_field_data_pane_t1

0x79da,	// (0x000221cd) input_focus_pane

0x79e8,	// (0x000221db) data_form_wide_pane

0x43a8,	// (0x0001eb9b) form_field_data_wide_pane_t1

0x774b,	// (0x00021f3e) input_focus_pane_cp6

0xd45d,	// (0x00027c50) form_field_popup_pane_t1

0x79da,	// (0x000221cd) input_focus_pane_cp7

0x7a14,	// (0x00022207) list_form_pane

0x43ec,	// (0x0001ebdf) form_field_popup_wide_pane_t1

0x79da,	// (0x000221cd) input_focus_pane_cp8

0x7a20,	// (0x00022213) list_form_wide_pane

0xd47f,	// (0x00027c72) form_field_slider_pane_t1_ParamLimits

0xd47f,	// (0x00027c72) form_field_slider_pane_t1

0xd497,	// (0x00027c8a) form_field_slider_pane_t2_ParamLimits

0xd497,	// (0x00027c8a) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x00029e7b) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x00029e7b) form_field_slider_pane_t

0x7402,	// (0x00021bf5) input_focus_pane_cp9_ParamLimits

0x7402,	// (0x00021bf5) input_focus_pane_cp9

0xd4ac,	// (0x00027c9f) slider_cont_pane_ParamLimits

0xd4ac,	// (0x00027c9f) slider_cont_pane

0x7a2f,	// (0x00022222) form_field_slider_wide_pane_t1_ParamLimits

0x7a2f,	// (0x00022222) form_field_slider_wide_pane_t1

0x4443,	// (0x0001ec36) form_field_slider_wide_pane_t2_ParamLimits

0x4443,	// (0x0001ec36) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x00029e80) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x00029e80) form_field_slider_wide_pane_t

0x7402,	// (0x00021bf5) input_focus_pane_cp10_ParamLimits

0x7402,	// (0x00021bf5) input_focus_pane_cp10

0xd4c0,	// (0x00027cb3) slider_cont_pane_cp1_ParamLimits

0xd4c0,	// (0x00027cb3) slider_cont_pane_cp1

0xd4d4,	// (0x00027cc7) slider_form_pane_cp

0x7a41,	// (0x00022234) input_focus_pane_g1

0x7a49,	// (0x0002223c) input_focus_pane_g2

0x7a51,	// (0x00022244) input_focus_pane_g3

0x7a59,	// (0x0002224c) input_focus_pane_g4

0x7a61,	// (0x00022254) input_focus_pane_g5

0x7a69,	// (0x0002225c) input_focus_pane_g6

0x7a71,	// (0x00022264) input_focus_pane_g7

0x7a79,	// (0x0002226c) input_focus_pane_g8

0x7a81,	// (0x00022274) input_focus_pane_g9

0x709d,	// (0x00021890) input_focus_pane_g10

0x0009,

0xf692,	// (0x00029e85) input_focus_pane_g

0x952e,	// (0x00023d21) wait_border_pane_g3_copy1

0xd4dc,	// (0x00027ccf) data_form_pane_t1

0x709d,	// (0x00021890) wait_anim_pane_g1_copy1

0xd57f,	// (0x00027d72) data_form_wide_pane_t1

0xd4f6,	// (0x00027ce9) list_form_graphic_pane_cp_ParamLimits

0xd4f6,	// (0x00027ce9) list_form_graphic_pane_cp

0xa447,	// (0x00024c3a) slider_form_pane_g1

0xa450,	// (0x00024c43) slider_form_pane_g2

0x0006,

0xf989,	// (0x0002a17c) slider_form_pane_g

0xd509,	// (0x00027cfc) list_form_graphic_pane_ParamLimits

0xd509,	// (0x00027cfc) list_form_graphic_pane

0x44bd,	// (0x0001ecb0) list_form_graphic_pane_g1

0x44c5,	// (0x0001ecb8) list_form_graphic_pane_t1_ParamLimits

0x44c5,	// (0x0001ecb8) list_form_graphic_pane_t1

0x7187,	// (0x0002197a) list_highlight_pane_cp5_ParamLimits

0x7187,	// (0x0002197a) list_highlight_pane_cp5

0x44da,	// (0x0001eccd) find_pane_g1

0x7a89,	// (0x0002227c) input_find_pane

0x44e3,	// (0x0001ecd6) input_find_pane_g1_ParamLimits

0x44e3,	// (0x0001ecd6) input_find_pane_g1

0x44ef,	// (0x0001ece2) input_find_pane_t1_ParamLimits

0x44ef,	// (0x0001ece2) input_find_pane_t1

0x4504,	// (0x0001ecf7) input_find_pane_t2_ParamLimits

0x4504,	// (0x0001ecf7) input_find_pane_t2

0x0001,

0xf6a7,	// (0x00029e9a) input_find_pane_t_ParamLimits

0xf6a7,	// (0x00029e9a) input_find_pane_t

0x7a92,	// (0x00022285) input_focus_pane_cp5_ParamLimits

0x7a92,	// (0x00022285) input_focus_pane_cp5

0x7aac,	// (0x0002229f) bg_popup_window_pane_cp2_ParamLimits

0x7aac,	// (0x0002229f) bg_popup_window_pane_cp2

0x7ab9,	// (0x000222ac) listscroll_menu_pane_ParamLimits

0x7ab9,	// (0x000222ac) listscroll_menu_pane

0x1798,	// (0x0001bf8b) popup_submenu_window_ParamLimits

0x1798,	// (0x0001bf8b) popup_submenu_window

0x7aed,	// (0x000222e0) find_popup_pane_g1

0x7af5,	// (0x000222e8) input_popup_find_pane_cp

0x7a92,	// (0x00022285) input_focus_pane_cp4_ParamLimits

0x7a92,	// (0x00022285) input_focus_pane_cp4

0x7b0d,	// (0x00022300) input_popup_find_pane_t1_ParamLimits

0x7b0d,	// (0x00022300) input_popup_find_pane_t1

0x70a7,	// (0x0002189a) bg_popup_sub_pane_cp

0x7b3b,	// (0x0002232e) listscroll_popup_sub_pane

0x7b43,	// (0x00022336) list_submenu_pane_ParamLimits

0x7b43,	// (0x00022336) list_submenu_pane

0x7b54,	// (0x00022347) scroll_pane_cp4

0x7b5c,	// (0x0002234f) list_single_popup_submenu_pane_ParamLimits

0x7b5c,	// (0x0002234f) list_single_popup_submenu_pane

0x7b6f,	// (0x00022362) list_single_popup_submenu_pane_g1

0x7b77,	// (0x0002236a) list_single_popup_submenu_pane_t1_ParamLimits

0x7b77,	// (0x0002236a) list_single_popup_submenu_pane_t1

0x7402,	// (0x00021bf5) bg_active_tab_pane_cp1_ParamLimits

0x7402,	// (0x00021bf5) bg_active_tab_pane_cp1

0x17ce,	// (0x0001bfc1) tabs_2_active_pane_g1

0x17d6,	// (0x0001bfc9) tabs_2_active_pane_t1

0x7402,	// (0x00021bf5) bg_passive_tab_pane_cp1_ParamLimits

0x7402,	// (0x00021bf5) bg_passive_tab_pane_cp1

0x17ce,	// (0x0001bfc1) tabs_2_passive_pane_g1

0x17d6,	// (0x0001bfc9) tabs_2_passive_pane_t1

0x7187,	// (0x0002197a) bg_active_tab_pane_cp4

0x17e8,	// (0x0001bfdb) tabs_2_long_active_pane_t1

0x8980,	// (0x00023173) bg_passive_tab_pane_cp4

0x5df1,	// (0x000205e4) list_single_midp_graphic_pane_g4_ParamLimits

0x7187,	// (0x0002197a) bg_active_tab_pane_cp5

0x17fb,	// (0x0001bfee) tabs_3_long_active_pane_t1

0x8980,	// (0x00023173) bg_passive_tab_pane_cp5

0x5df1,	// (0x000205e4) list_single_midp_graphic_pane_g4

0x7187,	// (0x0002197a) bg_popup_window_pane_cp13_ParamLimits

0x7187,	// (0x0002197a) bg_popup_window_pane_cp13

0x7bee,	// (0x000223e1) listscroll_popup_fast_pane_ParamLimits

0x7bee,	// (0x000223e1) listscroll_popup_fast_pane

0x7bfd,	// (0x000223f0) grid_popup_fast_pane_ParamLimits

0x7bfd,	// (0x000223f0) grid_popup_fast_pane

0x7c0f,	// (0x00022402) scroll_pane_cp9_ParamLimits

0x7c0f,	// (0x00022402) scroll_pane_cp9

0xbdd8,	// (0x000265cb) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbdd8,	// (0x000265cb) list_single_graphic_hl_pane_t1_cp2

0x7c33,	// (0x00022426) input_focus_pane_cp20_ParamLimits

0x7c33,	// (0x00022426) input_focus_pane_cp20

0x7c41,	// (0x00022434) query_popup_data_pane_t1_ParamLimits

0x7c41,	// (0x00022434) query_popup_data_pane_t1

0x7c54,	// (0x00022447) query_popup_data_pane_t2_ParamLimits

0x7c54,	// (0x00022447) query_popup_data_pane_t2

0x7c9a,	// (0x0002248d) query_popup_data_pane_t3_ParamLimits

0x7c9a,	// (0x0002248d) query_popup_data_pane_t3

0x7cdb,	// (0x000224ce) query_popup_data_pane_t4_ParamLimits

0x7cdb,	// (0x000224ce) query_popup_data_pane_t4

0x7d17,	// (0x0002250a) query_popup_data_pane_t5_ParamLimits

0x7d17,	// (0x0002250a) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x00029e9f) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x00029e9f) query_popup_data_pane_t

0x7a41,	// (0x00022234) bg_set_opt_pane_g1

0x7a49,	// (0x0002223c) bg_set_opt_pane_g2

0x7a51,	// (0x00022244) bg_set_opt_pane_g3

0x7a59,	// (0x0002224c) bg_set_opt_pane_g4

0x7a61,	// (0x00022254) bg_set_opt_pane_g5

0x7a69,	// (0x0002225c) bg_set_opt_pane_g6

0x7a71,	// (0x00022264) bg_set_opt_pane_g7

0x7a79,	// (0x0002226c) bg_set_opt_pane_g8

0x7a81,	// (0x00022274) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x00029eaa) bg_set_opt_pane_g

0x54b9,	// (0x0001fcac) control_top_pane_stacon_ParamLimits

0x54b9,	// (0x0001fcac) control_top_pane_stacon

0x550c,	// (0x0001fcff) signal_pane_stacon_ParamLimits

0x550c,	// (0x0001fcff) signal_pane_stacon

0x82d8,	// (0x00022acb) stacon_top_pane_g1_ParamLimits

0x82d8,	// (0x00022acb) stacon_top_pane_g1

0x5531,	// (0x0001fd24) title_pane_stacon_ParamLimits

0x5531,	// (0x0001fd24) title_pane_stacon

0x555b,	// (0x0001fd4e) uni_indicator_pane_stacon_ParamLimits

0x555b,	// (0x0001fd4e) uni_indicator_pane_stacon

0x5570,	// (0x0001fd63) battery_pane_stacon_ParamLimits

0x5570,	// (0x0001fd63) battery_pane_stacon

0x55b4,	// (0x0001fda7) control_bottom_pane_stacon_ParamLimits

0x55b4,	// (0x0001fda7) control_bottom_pane_stacon

0x55d7,	// (0x0001fdca) navi_pane_stacon_ParamLimits

0x55d7,	// (0x0001fdca) navi_pane_stacon

0x82fa,	// (0x00022aed) stacon_bottom_pane_g1_ParamLimits

0x82fa,	// (0x00022aed) stacon_bottom_pane_g1

0x521a,	// (0x0001fa0d) aid_levels_signal_lsc_ParamLimits

0x521a,	// (0x0001fa0d) aid_levels_signal_lsc

0x5231,	// (0x0001fa24) signal_pane_stacon_g1_ParamLimits

0x5231,	// (0x0001fa24) signal_pane_stacon_g1

0x5245,	// (0x0001fa38) signal_pane_stacon_g2_ParamLimits

0x5245,	// (0x0001fa38) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00029ebd) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00029ebd) signal_pane_stacon_g

0x527a,	// (0x0001fa6d) title_pane_stacon_t1_ParamLimits

0x527a,	// (0x0001fa6d) title_pane_stacon_t1

0x7d5b,	// (0x0002254e) uni_indicator_pane_stacon_g1

0x7d65,	// (0x00022558) uni_indicator_pane_stacon_g2

0x7d6f,	// (0x00022562) uni_indicator_pane_stacon_g3

0x7d79,	// (0x0002256c) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x00029ec9) uni_indicator_pane_stacon_g

0x529f,	// (0x0001fa92) control_top_pane_stacon_g1

0x52a7,	// (0x0001fa9a) control_top_pane_stacon_t1_ParamLimits

0x52a7,	// (0x0001fa9a) control_top_pane_stacon_t1

0x52de,	// (0x0001fad1) aid_levels_battery_lsc_ParamLimits

0x52de,	// (0x0001fad1) aid_levels_battery_lsc

0x52f6,	// (0x0001fae9) battery_pane_stacon_g1_ParamLimits

0x52f6,	// (0x0001fae9) battery_pane_stacon_g1

0x5309,	// (0x0001fafc) battery_pane_stacon_g2_ParamLimits

0x5309,	// (0x0001fafc) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x00029ed2) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x00029ed2) battery_pane_stacon_g

0x5347,	// (0x0001fb3a) navi_icon_pane_stacon

0x535b,	// (0x0001fb4e) navi_navi_pane_stacon

0x5347,	// (0x0001fb3a) navi_text_pane_stacon

0x529f,	// (0x0001fa92) control_bottom_pane_stacon_g1

0x536f,	// (0x0001fb62) control_bottom_pane_stacon_t1_ParamLimits

0x536f,	// (0x0001fb62) control_bottom_pane_stacon_t1

0x180d,	// (0x0001c000) grid_app_pane_ParamLimits

0x180d,	// (0x0001c000) grid_app_pane

0x1843,	// (0x0001c036) scroll_pane_cp15_ParamLimits

0x1843,	// (0x0001c036) scroll_pane_cp15

0x185c,	// (0x0001c04f) cell_app_pane_ParamLimits

0x185c,	// (0x0001c04f) cell_app_pane

0x18a3,	// (0x0001c096) cell_app_pane_g1_ParamLimits

0x18a3,	// (0x0001c096) cell_app_pane_g1

0x7e1e,	// (0x00022611) cell_app_pane_g2_ParamLimits

0x7e1e,	// (0x00022611) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x00029ed7) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x00029ed7) cell_app_pane_g

0x18c3,	// (0x0001c0b6) cell_app_pane_t1_ParamLimits

0x18c3,	// (0x0001c0b6) cell_app_pane_t1

0x7e41,	// (0x00022634) grid_highlight_pane_ParamLimits

0x7e41,	// (0x00022634) grid_highlight_pane

0x7a41,	// (0x00022234) cell_highlight_pane_g1

0x7a49,	// (0x0002223c) cell_highlight_pane_g2

0x7a51,	// (0x00022244) cell_highlight_pane_g3

0x7a59,	// (0x0002224c) cell_highlight_pane_g4

0x7a61,	// (0x00022254) cell_highlight_pane_g5

0x7a69,	// (0x0002225c) cell_highlight_pane_g6

0x7a71,	// (0x00022264) cell_highlight_pane_g7

0x7a79,	// (0x0002226c) cell_highlight_pane_g8

0x7a81,	// (0x00022274) cell_highlight_pane_g9

0x709d,	// (0x00021890) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x00029e85) cell_highlight_pane_g

0x7e52,	// (0x00022645) bg_scroll_pane

0x53b9,	// (0x0001fbac) scroll_handle_pane

0x7e99,	// (0x0002268c) scroll_bg_pane_g1

0x7eae,	// (0x000226a1) scroll_bg_pane_g2

0x7ec6,	// (0x000226b9) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x00029edc) scroll_bg_pane_g

0x7edb,	// (0x000226ce) scroll_handle_focus_pane_ParamLimits

0x7edb,	// (0x000226ce) scroll_handle_focus_pane

0x7e99,	// (0x0002268c) scroll_handle_pane_g1

0x7ee8,	// (0x000226db) scroll_handle_pane_g2

0x7ec6,	// (0x000226b9) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x00029ee3) scroll_handle_pane_g

0x7a92,	// (0x00022285) bg_popup_sub_pane_cp21_ParamLimits

0x7a92,	// (0x00022285) bg_popup_sub_pane_cp21

0x7efc,	// (0x000226ef) popup_fep_japan_predictive_window_t1_ParamLimits

0x7efc,	// (0x000226ef) popup_fep_japan_predictive_window_t1

0x7f13,	// (0x00022706) popup_fep_japan_predictive_window_t2_ParamLimits

0x7f13,	// (0x00022706) popup_fep_japan_predictive_window_t2

0x7f46,	// (0x00022739) popup_fep_japan_predictive_window_t3_ParamLimits

0x7f46,	// (0x00022739) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x00029eea) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x00029eea) popup_fep_japan_predictive_window_t

0x70a7,	// (0x0002189a) bg_popup_sub_pane_cp23

0x7f7d,	// (0x00022770) listscroll_japin_cand_pane

0x7f85,	// (0x00022778) popup_fep_japan_candidate_window_t1

0x7f93,	// (0x00022786) candidate_pane_ParamLimits

0x7f93,	// (0x00022786) candidate_pane

0x7fa5,	// (0x00022798) scroll_pane_cp30

0x7fad,	// (0x000227a0) list_single_popup_jap_candidate_pane_ParamLimits

0x7fad,	// (0x000227a0) list_single_popup_jap_candidate_pane

0x70a7,	// (0x0002189a) list_highlight_pane_cp30

0x7fc1,	// (0x000227b4) list_single_popup_jap_candidate_pane_t1

0x7fd0,	// (0x000227c3) level_1_signal

0x7fdd,	// (0x000227d0) level_2_signal

0x7fea,	// (0x000227dd) level_3_signal

0x7ff7,	// (0x000227ea) level_4_signal

0x8004,	// (0x000227f7) level_5_signal

0x8011,	// (0x00022804) level_6_signal

0x801e,	// (0x00022811) level_7_signal

0x7fd0,	// (0x000227c3) level_1_battery

0x7fdd,	// (0x000227d0) level_2_battery

0x7fea,	// (0x000227dd) level_3_battery

0x7ff7,	// (0x000227ea) level_4_battery

0x8004,	// (0x000227f7) level_5_battery

0x8011,	// (0x00022804) level_6_battery

0x801e,	// (0x00022811) level_7_battery

0x8043,	// (0x00022836) list_menu_pane_ParamLimits

0x8043,	// (0x00022836) list_menu_pane

0x8059,	// (0x0002284c) scroll_pane_cp25_ParamLimits

0x8059,	// (0x0002284c) scroll_pane_cp25

0x8072,	// (0x00022865) list_double2_graphic_pane_cp2_ParamLimits

0x8072,	// (0x00022865) list_double2_graphic_pane_cp2

0x8072,	// (0x00022865) list_double2_large_graphic_pane_cp2_ParamLimits

0x8072,	// (0x00022865) list_double2_large_graphic_pane_cp2

0x8072,	// (0x00022865) list_double2_pane_cp2_ParamLimits

0x8072,	// (0x00022865) list_double2_pane_cp2

0x8072,	// (0x00022865) list_double_graphic_pane_cp2_ParamLimits

0x8072,	// (0x00022865) list_double_graphic_pane_cp2

0x8072,	// (0x00022865) list_double_large_graphic_pane_cp2_ParamLimits

0x8072,	// (0x00022865) list_double_large_graphic_pane_cp2

0x8072,	// (0x00022865) list_double_number_pane_cp2_ParamLimits

0x8072,	// (0x00022865) list_double_number_pane_cp2

0x8072,	// (0x00022865) list_double_pane_cp2_ParamLimits

0x8072,	// (0x00022865) list_double_pane_cp2

0x8094,	// (0x00022887) list_single_2graphic_pane_cp2_ParamLimits

0x8094,	// (0x00022887) list_single_2graphic_pane_cp2

0x8094,	// (0x00022887) list_single_graphic_heading_pane_cp2_ParamLimits

0x8094,	// (0x00022887) list_single_graphic_heading_pane_cp2

0x8094,	// (0x00022887) list_single_graphic_pane_cp2_ParamLimits

0x8094,	// (0x00022887) list_single_graphic_pane_cp2

0x8094,	// (0x00022887) list_single_heading_pane_cp2_ParamLimits

0x8094,	// (0x00022887) list_single_heading_pane_cp2

0x80ab,	// (0x0002289e) list_single_large_graphic_pane_cp2_ParamLimits

0x80ab,	// (0x0002289e) list_single_large_graphic_pane_cp2

0x8094,	// (0x00022887) list_single_number_heading_pane_cp2_ParamLimits

0x8094,	// (0x00022887) list_single_number_heading_pane_cp2

0x8094,	// (0x00022887) list_single_number_pane_cp2_ParamLimits

0x8094,	// (0x00022887) list_single_number_pane_cp2

0x8094,	// (0x00022887) list_single_pane_cp2_ParamLimits

0x8094,	// (0x00022887) list_single_pane_cp2

0x8127,	// (0x0002291a) bg_popup_sub_pane_cp22

0x546b,	// (0x0001fc5e) popup_side_volume_key_window_g1

0x5495,	// (0x0001fc88) popup_side_volume_key_window_t1

0x54b1,	// (0x0001fca4) volume_small_pane_cp1

0x7402,	// (0x00021bf5) bg_popup_sub_pane_cp24_ParamLimits

0x7402,	// (0x00021bf5) bg_popup_sub_pane_cp24

0x813d,	// (0x00022930) fep_china_uni_candidate_pane_ParamLimits

0x813d,	// (0x00022930) fep_china_uni_candidate_pane

0x8151,	// (0x00022944) fep_china_uni_entry_pane

0x8161,	// (0x00022954) popup_fep_china_uni_window_g1

0x817d,	// (0x00022970) fep_china_uni_entry_pane_g1

0x8185,	// (0x00022978) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x00029f1b) fep_china_uni_entry_pane_g

0x818d,	// (0x00022980) fep_entry_item_pane

0x8197,	// (0x0002298a) fep_candidate_item_pane

0x819f,	// (0x00022992) fep_china_uni_candidate_pane_g1

0x81a7,	// (0x0002299a) fep_china_uni_candidate_pane_g2

0x81af,	// (0x000229a2) fep_china_uni_candidate_pane_g3

0x81b7,	// (0x000229aa) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x00029f20) fep_china_uni_candidate_pane_g

0x709d,	// (0x00021890) fep_entry_item_pane_g1

0x81bf,	// (0x000229b2) fep_entry_item_pane_t1_ParamLimits

0x81bf,	// (0x000229b2) fep_entry_item_pane_t1

0x81d5,	// (0x000229c8) fep_candidate_item_pane_t1_ParamLimits

0x81d5,	// (0x000229c8) fep_candidate_item_pane_t1

0x81ea,	// (0x000229dd) fep_candidate_item_pane_t2_ParamLimits

0x81ea,	// (0x000229dd) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x00029f29) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x00029f29) fep_candidate_item_pane_t

0x7187,	// (0x0002197a) list_highlight_pane_cp31_ParamLimits

0x7187,	// (0x0002197a) list_highlight_pane_cp31

0x81fc,	// (0x000229ef) level_1_signal_lsc

0x8205,	// (0x000229f8) level_2_signal_lsc

0x820e,	// (0x00022a01) level_3_signal_lsc

0x8217,	// (0x00022a0a) level_4_signal_lsc

0x8220,	// (0x00022a13) level_5_signal_lsc

0x8229,	// (0x00022a1c) level_6_signal_lsc

0x8232,	// (0x00022a25) level_7_signal_lsc

0x8232,	// (0x00022a25) level_1_battery_lsc

0x823b,	// (0x00022a2e) level_2_battery_lsc

0x8244,	// (0x00022a37) level_3_battery_lsc

0x824d,	// (0x00022a40) level_4_battery_lsc

0x8256,	// (0x00022a49) level_5_battery_lsc

0x825f,	// (0x00022a52) level_6_battery_lsc

0x81fc,	// (0x000229ef) level_7_battery_lsc

0x8268,	// (0x00022a5b) scroll_handle_focus_pane_g1

0x8271,	// (0x00022a64) scroll_handle_focus_pane_g2

0x827a,	// (0x00022a6d) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x00029f2e) scroll_handle_focus_pane_g

0x4519,	// (0x0001ed0c) list_single_2graphic_pane_g1_ParamLimits

0x4519,	// (0x0001ed0c) list_single_2graphic_pane_g1

0xd059,	// (0x0002784c) list_single_2graphic_pane_g2_ParamLimits

0xd059,	// (0x0002784c) list_single_2graphic_pane_g2

0x3e92,	// (0x0001e685) list_single_2graphic_pane_g3_ParamLimits

0x3e92,	// (0x0001e685) list_single_2graphic_pane_g3

0x4525,	// (0x0001ed18) list_single_2graphic_pane_g4_ParamLimits

0x4525,	// (0x0001ed18) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x00029f35) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x00029f35) list_single_2graphic_pane_g

0x4531,	// (0x0001ed24) list_single_2graphic_pane_t1_ParamLimits

0x4531,	// (0x0001ed24) list_single_2graphic_pane_t1

0xd51d,	// (0x00027d10) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd51d,	// (0x00027d10) list_double2_graphic_large_graphic_pane_g1

0xd1d5,	// (0x000279c8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xd1d5,	// (0x000279c8) list_double2_graphic_large_graphic_pane_g2

0xd07e,	// (0x00027871) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd07e,	// (0x00027871) list_double2_graphic_large_graphic_pane_g3

0xd52f,	// (0x00027d22) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd52f,	// (0x00027d22) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x00029f3e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x00029f3e) list_double2_graphic_large_graphic_pane_g

0xd53b,	// (0x00027d2e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd53b,	// (0x00027d2e) list_double2_graphic_large_graphic_pane_t1

0xd551,	// (0x00027d44) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd551,	// (0x00027d44) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x00029f47) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x00029f47) list_double2_graphic_large_graphic_pane_t

0x83c5,	// (0x00022bb8) popup_fast_swap_window_ParamLimits

0x83c5,	// (0x00022bb8) popup_fast_swap_window

0x83e1,	// (0x00022bd4) popup_side_volume_key_window

0x83fb,	// (0x00022bee) stacon_top_pane

0x8405,	// (0x00022bf8) status_pane_ParamLimits

0x8405,	// (0x00022bf8) status_pane

0x83fb,	// (0x00022bee) status_small_pane

0x70a7,	// (0x0002189a) control_pane

0x70a7,	// (0x0002189a) stacon_bottom_pane

0x79bd,	// (0x000221b0) scroll_pane_cp121

0x79b4,	// (0x000221a7) set_content_pane

0x19ef,	// (0x0001c1e2) bg_active_tab_pane_g1_cp1

0x828c,	// (0x00022a7f) bg_active_tab_pane_g2_cp1

0x19e6,	// (0x0001c1d9) bg_active_tab_pane_g3_cp1

0x19ef,	// (0x0001c1e2) bg_passive_tab_pane_g1_cp1

0x828c,	// (0x00022a7f) bg_passive_tab_pane_g2_cp1

0x19e6,	// (0x0001c1d9) bg_passive_tab_pane_g3_cp1

0x1a01,	// (0x0001c1f4) bg_active_tab_pane_g1_cp2

0x828c,	// (0x00022a7f) bg_active_tab_pane_g2_cp2

0x19f8,	// (0x0001c1eb) bg_active_tab_pane_g3_cp2

0x1a01,	// (0x0001c1f4) bg_passive_tab_pane_g1_cp2

0x828c,	// (0x00022a7f) bg_passive_tab_pane_g2_cp2

0x19f8,	// (0x0001c1eb) bg_passive_tab_pane_g3_cp2

0x1a13,	// (0x0001c206) bg_active_tab_pane_g1_cp3

0x828c,	// (0x00022a7f) bg_active_tab_pane_g2_cp3

0x1a0a,	// (0x0001c1fd) bg_active_tab_pane_g3_cp3

0x1a13,	// (0x0001c206) bg_passive_tab_pane_g1_cp3

0x828c,	// (0x00022a7f) bg_passive_tab_pane_g2_cp3

0x1a0a,	// (0x0001c1fd) bg_passive_tab_pane_g3_cp3

0x1a25,	// (0x0001c218) bg_active_tab_pane_g1_cp4

0x828c,	// (0x00022a7f) bg_active_tab_pane_g2_cp4

0x1a1c,	// (0x0001c20f) bg_active_tab_pane_g3_cp4

0x1a25,	// (0x0001c218) bg_passive_tab_pane_g1_cp4

0x828c,	// (0x00022a7f) bg_passive_tab_pane_g2_cp4

0x1a1c,	// (0x0001c20f) bg_passive_tab_pane_g3_cp4

0x8316,	// (0x00022b09) bg_active_tab_pane_g1_cp5

0x828c,	// (0x00022a7f) bg_active_tab_pane_g2_cp5

0x831f,	// (0x00022b12) bg_active_tab_pane_g3_cp5

0x8316,	// (0x00022b09) bg_passive_tab_pane_g1_cp5

0x828c,	// (0x00022a7f) bg_passive_tab_pane_g2_cp5

0x831f,	// (0x00022b12) bg_passive_tab_pane_g3_cp5

0xaa54,	// (0x00025247) list_set_graphic_pane_ParamLimits

0xaa54,	// (0x00025247) list_set_graphic_pane

0x70a7,	// (0x0002189a) bg_set_opt_pane_cp4

0x8346,	// (0x00022b39) list_set_graphic_pane_g1_ParamLimits

0x8346,	// (0x00022b39) list_set_graphic_pane_g1

0x8352,	// (0x00022b45) list_set_graphic_pane_g2_ParamLimits

0x8352,	// (0x00022b45) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x00029f4c) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x00029f4c) list_set_graphic_pane_g

0x0009,

0xface,	// (0x0002a2c1) volume_small_pane_cp_g

0x1a2e,	// (0x0001c221) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x1a2e,	// (0x0001c221) list_double2_large_graphic_pane_g1_cp2

0x1a3c,	// (0x0001c22f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1a3c,	// (0x0001c22f) list_double2_large_graphic_pane_g2_cp2

0x8395,	// (0x00022b88) list_double2_large_graphic_pane_g3_cp2

0x839d,	// (0x00022b90) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x839d,	// (0x00022b90) list_double2_large_graphic_pane_t1_cp2

0x83b3,	// (0x00022ba6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x83b3,	// (0x00022ba6) list_double2_large_graphic_pane_t2_cp2

0x21c3,	// (0x0001c9b6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x21c3,	// (0x0001c9b6) list_double_large_graphic_pane_g1_cp2

0x21d6,	// (0x0001c9c9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x21d6,	// (0x0001c9c9) list_double_large_graphic_pane_g2_cp2

0x8523,	// (0x00022d16) list_double_large_graphic_pane_g3_cp2

0xa013,	// (0x00024806) list_double_large_graphic_pane_g4_cp

0xa01b,	// (0x0002480e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa01b,	// (0x0002480e) list_double_large_graphic_pane_t1_cp2

0xa032,	// (0x00024825) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa032,	// (0x00024825) list_double_large_graphic_pane_t2_cp2

0x1a4d,	// (0x0001c240) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1a4d,	// (0x0001c240) list_double2_graphic_pane_g1_cp2

0x1a5b,	// (0x0001c24e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1a5b,	// (0x0001c24e) list_double2_graphic_pane_g2_cp2

0x1a6c,	// (0x0001c25f) list_double2_graphic_pane_g3_cp2

0x843c,	// (0x00022c2f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x843c,	// (0x00022c2f) list_double2_graphic_pane_t1_cp2

0x8452,	// (0x00022c45) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8452,	// (0x00022c45) list_double2_graphic_pane_t2_cp2

0x8464,	// (0x00022c57) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8464,	// (0x00022c57) list_single_number_heading_pane_g1_cp2

0x8470,	// (0x00022c63) list_single_number_heading_pane_g2_cp2

0x8478,	// (0x00022c6b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8478,	// (0x00022c6b) list_single_number_heading_pane_t1_cp2

0x1a76,	// (0x0001c269) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1a76,	// (0x0001c269) list_single_number_heading_pane_t2_cp2

0x84a2,	// (0x00022c95) list_single_number_heading_pane_t3_cp2_ParamLimits

0x84a2,	// (0x00022c95) list_single_number_heading_pane_t3_cp2

0x8464,	// (0x00022c57) list_single_heading_pane_g1_cp2_ParamLimits

0x8464,	// (0x00022c57) list_single_heading_pane_g1_cp2

0x8470,	// (0x00022c63) list_single_heading_pane_g2_cp2

0x8478,	// (0x00022c6b) list_single_heading_pane_t1_cp2_ParamLimits

0x8478,	// (0x00022c6b) list_single_heading_pane_t1_cp2

0x21af,	// (0x0001c9a2) list_single_heading_pane_t2_cp2_ParamLimits

0x21af,	// (0x0001c9a2) list_single_heading_pane_t2_cp2

0x925a,	// (0x00023a4d) list_double_graphic_pane_g1_cp2_ParamLimits

0x925a,	// (0x00023a4d) list_double_graphic_pane_g1_cp2

0x9d4b,	// (0x0002453e) list_double_graphic_pane_g2_cp2_ParamLimits

0x9d4b,	// (0x0002453e) list_double_graphic_pane_g2_cp2

0x9d5a,	// (0x0002454d) list_double_graphic_pane_g3_cp2

0x9d62,	// (0x00024555) list_double_graphic_pane_t1_cp2_ParamLimits

0x9d62,	// (0x00024555) list_double_graphic_pane_t1_cp2

0x9d78,	// (0x0002456b) list_double_graphic_pane_t2_cp2_ParamLimits

0x9d78,	// (0x0002456b) list_double_graphic_pane_t2_cp2

0x8517,	// (0x00022d0a) list_double_number_pane_g1_cp2_ParamLimits

0x8517,	// (0x00022d0a) list_double_number_pane_g1_cp2

0x8523,	// (0x00022d16) list_double_number_pane_g2_cp2

0x219b,	// (0x0001c98e) list_double_number_pane_t1_cp2_ParamLimits

0x219b,	// (0x0001c98e) list_double_number_pane_t1_cp2

0x9d23,	// (0x00024516) list_double_number_pane_t2_cp2_ParamLimits

0x9d23,	// (0x00024516) list_double_number_pane_t2_cp2

0x9d39,	// (0x0002452c) list_double_number_pane_t3_cp2_ParamLimits

0x9d39,	// (0x0002452c) list_double_number_pane_t3_cp2

0x20e9,	// (0x0001c8dc) list_single_graphic_pane_g1_cp2_ParamLimits

0x20e9,	// (0x0001c8dc) list_single_graphic_pane_g1_cp2

0x857b,	// (0x00022d6e) list_single_graphic_pane_g2_cp2_ParamLimits

0x857b,	// (0x00022d6e) list_single_graphic_pane_g2_cp2

0x8587,	// (0x00022d7a) list_single_graphic_pane_g3_cp2

0x9bce,	// (0x000243c1) list_single_graphic_pane_t1_cp2_ParamLimits

0x9bce,	// (0x000243c1) list_single_graphic_pane_t1_cp2

0x857b,	// (0x00022d6e) list_single_number_pane_g1_cp2_ParamLimits

0x857b,	// (0x00022d6e) list_single_number_pane_g1_cp2

0x8587,	// (0x00022d7a) list_single_number_pane_g2_cp2

0x9bce,	// (0x000243c1) list_single_number_pane_t1_cp2_ParamLimits

0x9bce,	// (0x000243c1) list_single_number_pane_t1_cp2

0x20d5,	// (0x0001c8c8) list_single_number_pane_t2_cp2_ParamLimits

0x20d5,	// (0x0001c8c8) list_single_number_pane_t2_cp2

0x1a3c,	// (0x0001c22f) list_double2_pane_g1_cp2_ParamLimits

0x1a3c,	// (0x0001c22f) list_double2_pane_g1_cp2

0x8395,	// (0x00022b88) list_double2_pane_g2_cp2

0x84ef,	// (0x00022ce2) list_double2_pane_t1_cp2_ParamLimits

0x84ef,	// (0x00022ce2) list_double2_pane_t1_cp2

0x8505,	// (0x00022cf8) list_double2_pane_t2_cp2_ParamLimits

0x8505,	// (0x00022cf8) list_double2_pane_t2_cp2

0x8517,	// (0x00022d0a) list_double_pane_g1_cp2_ParamLimits

0x8517,	// (0x00022d0a) list_double_pane_g1_cp2

0x8523,	// (0x00022d16) list_double_pane_g2_cp2

0x852b,	// (0x00022d1e) list_double_pane_t1_cp2_ParamLimits

0x852b,	// (0x00022d1e) list_double_pane_t1_cp2

0x8541,	// (0x00022d34) list_double_pane_t2_cp2_ParamLimits

0x8541,	// (0x00022d34) list_double_pane_t2_cp2

0x856b,	// (0x00022d5e) list_single_pane_cp2_g3

0x857b,	// (0x00022d6e) list_single_pane_g1_cp2_ParamLimits

0x857b,	// (0x00022d6e) list_single_pane_g1_cp2

0x8587,	// (0x00022d7a) list_single_pane_g2_cp2

0x858f,	// (0x00022d82) list_single_pane_t1_cp2_ParamLimits

0x858f,	// (0x00022d82) list_single_pane_t1_cp2

0x1aa2,	// (0x0001c295) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1aa2,	// (0x0001c295) list_single_large_graphic_pane_g1_cp2

0x85b5,	// (0x00022da8) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x85b5,	// (0x00022da8) list_single_large_graphic_pane_g2_cp2

0x85c1,	// (0x00022db4) list_single_large_graphic_pane_g3_cp2

0x85c9,	// (0x00022dbc) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x85c9,	// (0x00022dbc) list_single_large_graphic_pane_g4_cp1

0x85e3,	// (0x00022dd6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x85e3,	// (0x00022dd6) list_single_large_graphic_pane_t1_cp2

0x9b98,	// (0x0002438b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9b98,	// (0x0002438b) list_single_graphic_heading_pane_g1_cp2

0x20b0,	// (0x0001c8a3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x20b0,	// (0x0001c8a3) list_single_graphic_heading_pane_g4_cp2

0x8587,	// (0x00022d7a) list_single_graphic_heading_pane_g5_cp2

0x9ba4,	// (0x00024397) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9ba4,	// (0x00024397) list_single_graphic_heading_pane_t1_cp2

0x20c1,	// (0x0001c8b4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x20c1,	// (0x0001c8b4) list_single_graphic_heading_pane_t2_cp2

0x9b59,	// (0x0002434c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9b59,	// (0x0002434c) list_single_2graphic_pane_g1_cp2

0x20b0,	// (0x0001c8a3) list_single_2graphic_pane_g2_cp2_ParamLimits

0x20b0,	// (0x0001c8a3) list_single_2graphic_pane_g2_cp2

0x8587,	// (0x00022d7a) list_single_2graphic_pane_g3_cp2

0x9b76,	// (0x00024369) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9b76,	// (0x00024369) list_single_2graphic_pane_g4_cp2

0x9b82,	// (0x00024375) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9b82,	// (0x00024375) list_single_2graphic_pane_t1_cp2

0x709d,	// (0x00021890) list_highlight_pane_g10_cp1

0x9741,	// (0x00023f34) list_highlight_pane_g1_cp1

0x9749,	// (0x00023f3c) list_highlight_pane_g2_cp1

0x9751,	// (0x00023f44) list_highlight_pane_g3_cp1

0x9759,	// (0x00023f4c) list_highlight_pane_g4_cp1

0x9761,	// (0x00023f54) list_highlight_pane_g5_cp1

0x9769,	// (0x00023f5c) list_highlight_pane_g6_cp1

0x9771,	// (0x00023f64) list_highlight_pane_g7_cp1

0x9779,	// (0x00023f6c) list_highlight_pane_g8_cp1

0x9781,	// (0x00023f74) list_highlight_pane_g9_cp1

0x2072,	// (0x0001c865) form_field_slider_pane_t3

0x2082,	// (0x0001c875) form_field_slider_pane_t4

0x9675,	// (0x00023e68) slider_form_pane_ParamLimits

0x9675,	// (0x00023e68) slider_form_pane

0x70a7,	// (0x0002189a) control_abbreviations

0x70a7,	// (0x0002189a) control_conventions

0x70a7,	// (0x0002189a) control_definitions

0x70a7,	// (0x0002189a) format_table_attribute

0x9e43,	// (0x00024636) bg_popup_preview_window_pane_g9

0x70a7,	// (0x0002189a) format_table_data2

0x70a7,	// (0x0002189a) format_table_data3

0x70a7,	// (0x0002189a) format_table_data_example

0x0008,

0x70a7,	// (0x0002189a) intro_purpose

0xf8e9,	// (0x0002a0dc) bg_popup_preview_window_pane_g

0x70a7,	// (0x0002189a) texts_category

0x70a7,	// (0x0002189a) texts_graphics

0x85f9,	// (0x00022dec) text_digital

0x8608,	// (0x00022dfb) text_primary

0x8617,	// (0x00022e0a) text_primary_small

0x8626,	// (0x00022e19) text_secondary

0x8635,	// (0x00022e28) text_title

0xa55f,	// (0x00024d52) bg_passive_tab_pane_g1_cp3_srt

0x828c,	// (0x00022a7f) bg_passive_tab_pane_g2_cp3_srt

0xa568,	// (0x00024d5b) bg_passive_tab_pane_g3_cp3_srt

0x7402,	// (0x00021bf5) bg_active_tab_pane_cp3_srt_ParamLimits

0x7402,	// (0x00021bf5) bg_active_tab_pane_cp3_srt

0xa571,	// (0x00024d64) tabs_4_active_pane_srt_g1

0x24b7,	// (0x0001ccaa) tabs_4_active_pane_srt_t1_ParamLimits

0x24b7,	// (0x0001ccaa) tabs_4_active_pane_srt_t1

0xa55f,	// (0x00024d52) bg_active_tab_pane_g1_cp3_copy1

0x828c,	// (0x00022a7f) bg_active_tab_pane_g2_cp3_copy1

0xa568,	// (0x00024d5b) bg_active_tab_pane_g3_cp3_copy1

0x7187,	// (0x0002197a) tabs_2_long_active_pane_srt_ParamLimits

0x7187,	// (0x0002197a) tabs_2_long_active_pane_srt

0x7187,	// (0x0002197a) tabs_2_long_passive_pane_srt_ParamLimits

0x7187,	// (0x0002197a) tabs_2_long_passive_pane_srt

0x8980,	// (0x00023173) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8980,	// (0x00023173) bg_passive_tab_pane_cp4_srt

0xa288,	// (0x00024a7b) bg_passive_tab_pane_g1_cp4_srt

0x828c,	// (0x00022a7f) bg_passive_tab_pane_g2_cp4_srt

0xa291,	// (0x00024a84) bg_passive_tab_pane_g3_cp4_srt

0x7187,	// (0x0002197a) bg_active_tab_pane_cp4_srt_ParamLimits

0x7187,	// (0x0002197a) bg_active_tab_pane_cp4_srt

0x228c,	// (0x0001ca7f) tabs_2_long_active_pane_srt_t1_ParamLimits

0x228c,	// (0x0001ca7f) tabs_2_long_active_pane_srt_t1

0xa288,	// (0x00024a7b) bg_active_tab_pane_g1_cp4_srt

0x828c,	// (0x00022a7f) bg_active_tab_pane_g2_cp4_srt

0xa291,	// (0x00024a84) bg_active_tab_pane_g3_cp4_srt

0x7402,	// (0x00021bf5) tabs_3_long_active_pane_srt_ParamLimits

0x7402,	// (0x00021bf5) tabs_3_long_active_pane_srt

0x7402,	// (0x00021bf5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7402,	// (0x00021bf5) tabs_3_long_passive_pane_cp_srt

0x7402,	// (0x00021bf5) tabs_3_long_passive_pane_srt_ParamLimits

0x7402,	// (0x00021bf5) tabs_3_long_passive_pane_srt

0x8980,	// (0x00023173) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8980,	// (0x00023173) bg_passive_tab_pane_cp5_srt

0x8316,	// (0x00022b09) bg_passive_tab_pane_g1_cp5_srt

0x828c,	// (0x00022a7f) bg_passive_tab_pane_g2_cp5_srt

0x831f,	// (0x00022b12) bg_passive_tab_pane_g3_cp5_srt

0x7187,	// (0x0002197a) bg_active_tab_pane_cp5_srt_ParamLimits

0x7187,	// (0x0002197a) bg_active_tab_pane_cp5_srt

0x2276,	// (0x0001ca69) tabs_3_long_active_pane_srt_t1_ParamLimits

0x2276,	// (0x0001ca69) tabs_3_long_active_pane_srt_t1

0x8316,	// (0x00022b09) bg_active_tab_pane_g1_cp5_srt

0x828c,	// (0x00022a7f) bg_active_tab_pane_g2_cp5_srt

0x831f,	// (0x00022b12) bg_active_tab_pane_g3_cp5_srt

0xa268,	// (0x00024a5b) navi_text_pane_srt_t1

0xa260,	// (0x00024a53) navi_icon_pane_srt_g1

0x87f8,	// (0x00022feb) midp_editing_number_pane_srt

0x8644,	// (0x00022e37) midp_ticker_pane_srt

0x8800,	// (0x00022ff3) midp_ticker_pane_srt_g1

0x8808,	// (0x00022ffb) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x00029f6b) midp_ticker_pane_srt_g

0x8810,	// (0x00023003) midp_ticker_pane_srt_t1

0xa251,	// (0x00024a44) midp_editing_number_pane_t1_copy1

0x8980,	// (0x00023173) listscroll_midp_pane

0x8980,	// (0x00023173) midp_form_pane

0x86b0,	// (0x00022ea3) midp_info_popup_window_ParamLimits

0x86b0,	// (0x00022ea3) midp_info_popup_window

0x7a92,	// (0x00022285) bg_popup_sub_pane_cp50_ParamLimits

0x7a92,	// (0x00022285) bg_popup_sub_pane_cp50

0x9376,	// (0x00023b69) listscroll_midp_info_pane_ParamLimits

0x9376,	// (0x00023b69) listscroll_midp_info_pane

0x935e,	// (0x00023b51) listscroll_form_midp_pane_ParamLimits

0x935e,	// (0x00023b51) listscroll_form_midp_pane

0x936a,	// (0x00023b5d) scroll_bar_cp050

0x2066,	// (0x0001c859) list_midp_pane

0xb018,	// (0x0002580b) signal_pane_g2_cp

0x9278,	// (0x00023a6b) listscroll_midp_info_pane_t1_ParamLimits

0x9278,	// (0x00023a6b) listscroll_midp_info_pane_t1

0x9290,	// (0x00023a83) listscroll_midp_info_pane_t2_ParamLimits

0x9290,	// (0x00023a83) listscroll_midp_info_pane_t2

0x92ce,	// (0x00023ac1) listscroll_midp_info_pane_t3_ParamLimits

0x92ce,	// (0x00023ac1) listscroll_midp_info_pane_t3

0x9308,	// (0x00023afb) listscroll_midp_info_pane_t4_ParamLimits

0x9308,	// (0x00023afb) listscroll_midp_info_pane_t4

0x0003,

0xf824,	// (0x0002a017) listscroll_midp_info_pane_t_ParamLimits

0xf824,	// (0x0002a017) listscroll_midp_info_pane_t

0x7b54,	// (0x00022347) scroll_pane_cp21

0x9210,	// (0x00023a03) form_midp_field_choice_group_pane

0x9219,	// (0x00023a0c) form_midp_field_text_pane

0x9252,	// (0x00023a45) form_midp_field_time_pane

0x9266,	// (0x00023a59) form_midp_gauge_slider_pane

0x926f,	// (0x00023a62) form_midp_gauge_wait_pane

0x70a7,	// (0x0002189a) form_midp_image_pane

0xd563,	// (0x00027d56) list_single_midp_pane_ParamLimits

0xd563,	// (0x00027d56) list_single_midp_pane

0x2026,	// (0x0001c819) form_midp_field_text_pane_t1

0x8f72,	// (0x00023765) input_focus_pane_cp050

0x91ff,	// (0x000239f2) list_midp_form_text_pane

0x918f,	// (0x00023982) form_midp_field_choice_group_pane_t1

0x919d,	// (0x00023990) input_focus_pane_cp051

0x91b1,	// (0x000239a4) list_midp_choice_pane

0x70a7,	// (0x0002189a) status_idle_pane

0x9173,	// (0x00023966) form_midp_field_time_pane_t1

0x709d,	// (0x00021890) wait_anim_pane_g2_copy1

0x9181,	// (0x00023974) form_midp_field_time_pane_t2

0x0001,

0x8760,	// (0x00022f53) aid_navinavi_width_2_pane

0xf81f,	// (0x0002a012) form_midp_field_time_pane_t

0x70a7,	// (0x0002189a) input_focus_pane_cp052

0x70a7,	// (0x0002189a) bg_input_focus_pane_cp040

0x9133,	// (0x00023926) form_midp_gauge_slider_pane_t1

0x9141,	// (0x00023934) form_midp_gauge_slider_pane_t2

0x2006,	// (0x0001c7f9) form_midp_gauge_slider_pane_t3

0x2016,	// (0x0001c809) form_midp_gauge_slider_pane_t4

0x0003,

0xf816,	// (0x0002a009) form_midp_gauge_slider_pane_t

0x916b,	// (0x0002395e) form_midp_slider_pane

0x7187,	// (0x0002197a) bg_input_focus_pane_cp041_ParamLimits

0x7187,	// (0x0002197a) bg_input_focus_pane_cp041

0x9100,	// (0x000238f3) form_midp_gauge_wait_pane_t1_ParamLimits

0x9100,	// (0x000238f3) form_midp_gauge_wait_pane_t1

0x9112,	// (0x00023905) form_midp_gauge_wait_pane_t2_ParamLimits

0x9112,	// (0x00023905) form_midp_gauge_wait_pane_t2

0x0001,

0xf811,	// (0x0002a004) form_midp_gauge_wait_pane_t_ParamLimits

0xf811,	// (0x0002a004) form_midp_gauge_wait_pane_t

0x9124,	// (0x00023917) form_midp_wait_pane_ParamLimits

0x9124,	// (0x00023917) form_midp_wait_pane

0x90ca,	// (0x000238bd) form_midp_image_pane_g1

0x90d3,	// (0x000238c6) form_midp_image_pane_t1

0x90e2,	// (0x000238d5) form_midp_image_pane_t2

0x90f1,	// (0x000238e4) form_midp_image_pane_t3

0x0002,

0xf80a,	// (0x00029ffd) form_midp_image_pane_t

0x90c1,	// (0x000238b4) list_single_midp_pane_g1

0x463b,	// (0x0001ee2e) list_single_midp_pane_t1

0x1fef,	// (0x0001c7e2) list_midp_form_item_pane_ParamLimits

0x1fef,	// (0x0001c7e2) list_midp_form_item_pane

0x8708,	// (0x00022efb) list_midp_form_item_pane_t1

0x8717,	// (0x00022f0a) midp_ticker_pane_g1

0x8723,	// (0x00022f16) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x00029f51) midp_ticker_pane_g

0x872f,	// (0x00022f22) midp_ticker_pane_t1

0xa494,	// (0x00024c87) midp_editing_number_pane_t1

0xa472,	// (0x00024c65) midp_editing_number_pane

0xa481,	// (0x00024c74) midp_ticker_pane

0xa241,	// (0x00024a34) ai_message_heading_pane

0x70a7,	// (0x0002189a) bg_popup_window_pane_cp14

0xa249,	// (0x00024a3c) listscroll_ai_message_pane

0xa1cb,	// (0x000249be) ai_message_heading_pane_g1_ParamLimits

0xa1cb,	// (0x000249be) ai_message_heading_pane_g1

0xa1d7,	// (0x000249ca) ai_message_heading_pane_g2_ParamLimits

0xa1d7,	// (0x000249ca) ai_message_heading_pane_g2

0xa1e3,	// (0x000249d6) ai_message_heading_pane_g3_ParamLimits

0xa1e3,	// (0x000249d6) ai_message_heading_pane_g3

0xa1ef,	// (0x000249e2) ai_message_heading_pane_g4_ParamLimits

0xa1ef,	// (0x000249e2) ai_message_heading_pane_g4

0x0003,

0xf94b,	// (0x0002a13e) ai_message_heading_pane_g_ParamLimits

0xf94b,	// (0x0002a13e) ai_message_heading_pane_g

0xa1fb,	// (0x000249ee) ai_message_heading_pane_t1_ParamLimits

0xa1fb,	// (0x000249ee) ai_message_heading_pane_t1

0xa215,	// (0x00024a08) ai_message_heading_pane_t2_ParamLimits

0xa215,	// (0x00024a08) ai_message_heading_pane_t2

0x0001,

0xf954,	// (0x0002a147) ai_message_heading_pane_t_ParamLimits

0xf954,	// (0x0002a147) ai_message_heading_pane_t

0xa227,	// (0x00024a1a) bg_popup_heading_pane_cp1_ParamLimits

0xa227,	// (0x00024a1a) bg_popup_heading_pane_cp1

0xa1b9,	// (0x000249ac) list_ai_message_pane_ParamLimits

0xa1b9,	// (0x000249ac) list_ai_message_pane

0x7b54,	// (0x00022347) scroll_pane_cp10

0xa155,	// (0x00024948) list_ai_message_pane_g1

0xa15d,	// (0x00024950) list_ai_message_pane_g2

0x0001,

0xf928,	// (0x0002a11b) list_ai_message_pane_g

0xa165,	// (0x00024958) list_ai_message_pane_t1_ParamLimits

0xa165,	// (0x00024958) list_ai_message_pane_t1

0xa17a,	// (0x0002496d) list_ai_message_pane_t2_ParamLimits

0xa17a,	// (0x0002496d) list_ai_message_pane_t2

0xa18f,	// (0x00024982) list_ai_message_pane_t3_ParamLimits

0xa18f,	// (0x00024982) list_ai_message_pane_t3

0xa1a4,	// (0x00024997) list_ai_message_pane_t4_ParamLimits

0xa1a4,	// (0x00024997) list_ai_message_pane_t4

0x0003,

0xf92d,	// (0x0002a120) list_ai_message_pane_t_ParamLimits

0xf92d,	// (0x0002a120) list_ai_message_pane_t

0x223f,	// (0x0001ca32) cell_ai_soft_ind_pane_ParamLimits

0x223f,	// (0x0001ca32) cell_ai_soft_ind_pane

0x8741,	// (0x00022f34) cell_ai_soft_ind_pane_g1_ParamLimits

0x8741,	// (0x00022f34) cell_ai_soft_ind_pane_g1

0x70a7,	// (0x0002189a) grid_highlight_cp1

0x874e,	// (0x00022f41) text_secondary_cp56_ParamLimits

0x874e,	// (0x00022f41) text_secondary_cp56

0xa114,	// (0x00024907) example_general_pane_ParamLimits

0xa114,	// (0x00024907) example_general_pane

0xa120,	// (0x00024913) example_parent_pane_g1_ParamLimits

0xa120,	// (0x00024913) example_parent_pane_g1

0xa12c,	// (0x0002491f) example_parent_pane_t1_ParamLimits

0xa12c,	// (0x0002491f) example_parent_pane_t1

0xdde5,	// (0x000285d8) popup_preview_text_window_ParamLimits

0xdde5,	// (0x000285d8) popup_preview_text_window

0x8573,	// (0x00022d66) list_single_pane_cp2_g4

0x74ac,	// (0x00021c9f) bg_popup_preview_window_pane_ParamLimits

0x74ac,	// (0x00021c9f) bg_popup_preview_window_pane

0x9e4b,	// (0x0002463e) popup_preview_text_window_t1_ParamLimits

0x9e4b,	// (0x0002463e) popup_preview_text_window_t1

0x9e69,	// (0x0002465c) popup_preview_text_window_t2_ParamLimits

0x9e69,	// (0x0002465c) popup_preview_text_window_t2

0x9eb2,	// (0x000246a5) popup_preview_text_window_t3_ParamLimits

0x9eb2,	// (0x000246a5) popup_preview_text_window_t3

0x9ef7,	// (0x000246ea) popup_preview_text_window_t4_ParamLimits

0x9ef7,	// (0x000246ea) popup_preview_text_window_t4

0x0004,

0xf8fc,	// (0x0002a0ef) popup_preview_text_window_t_ParamLimits

0xf8fc,	// (0x0002a0ef) popup_preview_text_window_t

0x9f75,	// (0x00024768) scroll_pane_cp11

0x8e82,	// (0x00023675) bg_popup_preview_window_pane_g1

0x9e0b,	// (0x000245fe) bg_popup_preview_window_pane_g2

0x9e13,	// (0x00024606) bg_popup_preview_window_pane_g3

0x9e1b,	// (0x0002460e) bg_popup_preview_window_pane_g4

0x9e23,	// (0x00024616) bg_popup_preview_window_pane_g5

0x9e2b,	// (0x0002461e) bg_popup_preview_window_pane_g6

0x9e33,	// (0x00024626) bg_popup_preview_window_pane_g7

0x9e3b,	// (0x0002462e) bg_popup_preview_window_pane_g8

0x4dc8,	// (0x0001f5bb) aid_popup_width_pane

0xdd61,	// (0x00028554) popup_midp_note_alarm_window_ParamLimits

0xdd61,	// (0x00028554) popup_midp_note_alarm_window

0x79ce,	// (0x000221c1) data_form_pane_ParamLimits

0xd439,	// (0x00027c2c) form_field_data_pane_g1

0xd443,	// (0x00027c36) form_field_data_pane_t1_ParamLimits

0x79da,	// (0x000221cd) input_focus_pane_ParamLimits

0x79e8,	// (0x000221db) data_form_wide_pane_ParamLimits

0x439c,	// (0x0001eb8f) form_field_data_wide_pane_g1

0x43a8,	// (0x0001eb9b) form_field_data_wide_pane_t1_ParamLimits

0x774b,	// (0x00021f3e) input_focus_pane_cp6_ParamLimits

0x17c0,	// (0x0001bfb3) input_popup_find_pane_g1_ParamLimits

0x17c0,	// (0x0001bfb3) input_popup_find_pane_g1

0x531a,	// (0x0001fb0d) aid_navi_side_left_pane

0x532f,	// (0x0001fb22) aid_navi_side_right_pane

0x983c,	// (0x0002402f) bg_popup_window_pane_cp30_ParamLimits

0x983c,	// (0x0002402f) bg_popup_window_pane_cp30

0x98b6,	// (0x000240a9) popup_midp_note_alarm_window_g1_ParamLimits

0x98b6,	// (0x000240a9) popup_midp_note_alarm_window_g1

0x98e6,	// (0x000240d9) popup_midp_note_alarm_window_t1_ParamLimits

0x98e6,	// (0x000240d9) popup_midp_note_alarm_window_t1

0x9987,	// (0x0002417a) popup_midp_note_alarm_window_t2_ParamLimits

0x9987,	// (0x0002417a) popup_midp_note_alarm_window_t2

0x9a35,	// (0x00024228) popup_midp_note_alarm_window_t3_ParamLimits

0x9a35,	// (0x00024228) popup_midp_note_alarm_window_t3

0x9a5d,	// (0x00024250) popup_midp_note_alarm_window_t4_ParamLimits

0x9a5d,	// (0x00024250) popup_midp_note_alarm_window_t4

0x9a7d,	// (0x00024270) popup_midp_note_alarm_window_t5_ParamLimits

0x9a7d,	// (0x00024270) popup_midp_note_alarm_window_t5

0x000a,

0xf899,	// (0x0002a08c) popup_midp_note_alarm_window_t_ParamLimits

0xf899,	// (0x0002a08c) popup_midp_note_alarm_window_t

0x9b29,	// (0x0002431c) wait_bar_pane_cp1_ParamLimits

0x9b29,	// (0x0002431c) wait_bar_pane_cp1

0x70a7,	// (0x0002189a) wait_anim_pane_copy1

0x70a7,	// (0x0002189a) wait_border_pane_copy1

0x951a,	// (0x00023d0d) wait_border_pane_g1_copy1

0x43c2,	// (0x0001ebb5) form_field_popup_pane_g1

0xd45d,	// (0x00027c50) form_field_popup_pane_t1_ParamLimits

0x79da,	// (0x000221cd) input_focus_pane_cp7_ParamLimits

0x7a14,	// (0x00022207) list_form_pane_ParamLimits

0x43e4,	// (0x0001ebd7) form_field_popup_wide_pane_g1

0x43ec,	// (0x0001ebdf) form_field_popup_wide_pane_t1_ParamLimits

0x79da,	// (0x000221cd) input_focus_pane_cp8_ParamLimits

0x7a20,	// (0x00022213) list_form_wide_pane_ParamLimits

0xa5e9,	// (0x00024ddc) aid_size_cell_graphic_pane

0xd4dc,	// (0x00027ccf) data_form_pane_t1_ParamLimits

0xd57f,	// (0x00027d72) data_form_wide_pane_t1_ParamLimits

0x1c74,	// (0x0001c467) bg_status_flat_pane

0x0f26,	// (0x0001b719) title_pane_t1_ParamLimits

0x714f,	// (0x00021942) title_pane_t2_ParamLimits

0x7175,	// (0x00021968) title_pane_t3_ParamLimits

0xf55d,	// (0x00029d50) title_pane_t_ParamLimits

0x7fd0,	// (0x000227c3) level_1_signal_ParamLimits

0x7fdd,	// (0x000227d0) level_2_signal_ParamLimits

0x7fea,	// (0x000227dd) level_3_signal_ParamLimits

0x7ff7,	// (0x000227ea) level_4_signal_ParamLimits

0x8004,	// (0x000227f7) level_5_signal_ParamLimits

0x8011,	// (0x00022804) level_6_signal_ParamLimits

0x801e,	// (0x00022811) level_7_signal_ParamLimits

0x7fd0,	// (0x000227c3) level_1_battery_ParamLimits

0x7fdd,	// (0x000227d0) level_2_battery_ParamLimits

0x7fea,	// (0x000227dd) level_3_battery_ParamLimits

0x7ff7,	// (0x000227ea) level_4_battery_ParamLimits

0x8004,	// (0x000227f7) level_5_battery_ParamLimits

0x8011,	// (0x00022804) level_6_battery_ParamLimits

0x801e,	// (0x00022811) level_7_battery_ParamLimits

0x9741,	// (0x00023f34) bg_status_flat_pane_g1

0x9749,	// (0x00023f3c) bg_status_flat_pane_g2

0x9751,	// (0x00023f44) bg_status_flat_pane_g3

0x9759,	// (0x00023f4c) bg_status_flat_pane_g4

0x9761,	// (0x00023f54) bg_status_flat_pane_g5

0x9769,	// (0x00023f5c) bg_status_flat_pane_g6

0x9771,	// (0x00023f64) bg_status_flat_pane_g7

0x0fba,	// (0x0001b7ad) tabs_3_active_pane_t1_ParamLimits

0x0fba,	// (0x0001b7ad) tabs_3_passive_pane_t1_ParamLimits

0x0fd4,	// (0x0001b7c7) tabs_4_active_pane_t1_ParamLimits

0x0fd4,	// (0x0001b7c7) tabs_4_1_passive_pane_t1_ParamLimits

0x17d6,	// (0x0001bfc9) tabs_2_active_pane_t1_ParamLimits

0x17d6,	// (0x0001bfc9) tabs_2_passive_pane_t1_ParamLimits

0x7187,	// (0x0002197a) bg_active_tab_pane_cp4_ParamLimits

0x17e8,	// (0x0001bfdb) tabs_2_long_active_pane_t1_ParamLimits

0x8980,	// (0x00023173) bg_passive_tab_pane_cp4_ParamLimits

0x5e17,	// (0x0002060a) list_single_midp_graphic_pane_t1_ParamLimits

0x7187,	// (0x0002197a) bg_active_tab_pane_cp5_ParamLimits

0x17fb,	// (0x0001bfee) tabs_3_long_active_pane_t1_ParamLimits

0x8980,	// (0x00023173) bg_passive_tab_pane_cp5_ParamLimits

0x5e17,	// (0x0002060a) list_single_midp_graphic_pane_t1

0x1c74,	// (0x0001c467) bg_status_flat_pane_ParamLimits

0x8b1a,	// (0x0002330d) indicator_pane_cp2_ParamLimits

0x8b1a,	// (0x0002330d) indicator_pane_cp2

0x1dec,	// (0x0001c5df) navi_pane_srt_ParamLimits

0x1dec,	// (0x0001c5df) navi_pane_srt

0x8c63,	// (0x00023456) popup_clock_digital_analogue_window_cp1

0x7264,	// (0x00021a57) indicator_pane_t1

0x8644,	// (0x00022e37) copy_highlight_pane

0x8644,	// (0x00022e37) cursor_graphics_pane

0x8644,	// (0x00022e37) graphic_within_text_pane

0x8644,	// (0x00022e37) link_highlight_pane

0x9f38,	// (0x0002472b) popup_preview_text_window_t5_ParamLimits

0x9f38,	// (0x0002472b) popup_preview_text_window_t5

0x8768,	// (0x00022f5b) cursor_digital_pane

0x8768,	// (0x00022f5b) cursor_primary_pane

0x8779,	// (0x00022f6c) cursor_primary_small_pane

0x8781,	// (0x00022f74) cursor_secondary_pane

0x8789,	// (0x00022f7c) cursor_title_pane

0x8768,	// (0x00022f5b) link_highlight_digital_pane

0x8770,	// (0x00022f63) link_highlight_primary_pane

0x8779,	// (0x00022f6c) link_highlight_primary_small_pane

0x8781,	// (0x00022f74) link_highlight_secondary_pane

0x8789,	// (0x00022f7c) link_highlight_title_pane

0x8768,	// (0x00022f5b) copy_highlight_digital_pane

0x8768,	// (0x00022f5b) copy_highlight_primary_pane

0x8779,	// (0x00022f6c) copy_highlight_primary_small_pane

0x8781,	// (0x00022f74) copy_highlight_secondary_pane

0x8789,	// (0x00022f7c) copy_highlight_title_pane

0x8781,	// (0x00022f74) graphic_text_digital_pane

0x97df,	// (0x00023fd2) graphic_text_primary_pane

0x97e8,	// (0x00023fdb) graphic_text_primary_small_pane

0x8779,	// (0x00022f6c) graphic_text_secondary_pane

0x8768,	// (0x00022f5b) graphic_text_title_pane

0x1b4b,	// (0x0001c33e) cursor_primary_pane_g1

0x97d1,	// (0x00023fc4) cursor_text_primary_t1

0x20a6,	// (0x0001c899) cursor_primary_small_pane_g1

0x97c3,	// (0x00023fb6) cursor_text_primary_small_t1

0x209c,	// (0x0001c88f) cursor_primary_small_pane_g1_copy1

0x97ab,	// (0x00023f9e) cursor_text_primary_small_t1_copy1

0x9789,	// (0x00023f7c) cursor_text_title_t1

0x2092,	// (0x0001c885) cursor_title_pane_g1

0x1b4b,	// (0x0001c33e) cursor_digital_pane_g1

0x879b,	// (0x00022f8e) cursor_text_digital_t1

0x972a,	// (0x00023f1d) link_highlight_primary_pane_g1

0x9732,	// (0x00023f25) link_highlight_primary_pane_t1

0x87a9,	// (0x00022f9c) link_highlight_primary_small_pane_g1

0x87b1,	// (0x00022fa4) link_highlight_primary_small_pane_t1

0x87a9,	// (0x00022f9c) link_highlight_secondary_pane_g1

0x87c0,	// (0x00022fb3) link_highlight_secondary_pane_t1

0x969e,	// (0x00023e91) link_highlight_title_pane_g1

0x96a6,	// (0x00023e99) link_highlight_title_pane_t1

0x9687,	// (0x00023e7a) link_highlight_digital_pane_g1

0x968f,	// (0x00023e82) link_highlight_digital_pane_t1

0x955f,	// (0x00023d52) copy_highlight_primary_pane_g1

0x9567,	// (0x00023d5a) copy_highlight_primary_pane_t1

0x9539,	// (0x00023d2c) copy_highlight_primary_small_pane_g1

0x9550,	// (0x00023d43) copy_highlight_primary_small_pane_t1

0x87cf,	// (0x00022fc2) copy_highlight_secondary_pane_g1

0x87d7,	// (0x00022fca) copy_highlight_secondary_pane_t1

0x9539,	// (0x00023d2c) copy_highlight_title_pane_g1

0x9541,	// (0x00023d34) copy_highlight_title_pane_t1

0x955f,	// (0x00023d52) copy_highlight_digital_pane_g1

0xa7f9,	// (0x00024fec) copy_highlight_digital_pane_t1

0xa70b,	// (0x00024efe) graphic_text_primary_pane_g1

0xa7dd,	// (0x00024fd0) graphic_text_primary_pane_t1

0xa7eb,	// (0x00024fde) graphic_text_primary_pane_t2

0x0001,

0xf9c8,	// (0x0002a1bb) graphic_text_primary_pane_t

0xa7b9,	// (0x00024fac) graphic_text_primary_small_pane_g1

0xa7c1,	// (0x00024fb4) graphic_text_primary_small_pane_t1

0xa7cf,	// (0x00024fc2) graphic_text_primary_small_pane_t2

0x0001,

0xf9c3,	// (0x0002a1b6) graphic_text_primary_small_pane_t

0xa795,	// (0x00024f88) graphic_text_secondary_pane_g1

0xa79d,	// (0x00024f90) graphic_text_secondary_pane_t1

0xa7ab,	// (0x00024f9e) graphic_text_secondary_pane_t2

0x0001,

0xf9be,	// (0x0002a1b1) graphic_text_secondary_pane_t

0xa72f,	// (0x00024f22) graphic_text_title_pane_g1

0xa737,	// (0x00024f2a) graphic_text_title_pane_t1

0xa745,	// (0x00024f38) graphic_text_title_pane_t2

0x0001,

0xf9b9,	// (0x0002a1ac) graphic_text_title_pane_t

0xa70b,	// (0x00024efe) graphic_text_digital_pane_g1

0xa713,	// (0x00024f06) graphic_text_digital_pane_t1

0xa721,	// (0x00024f14) graphic_text_digital_pane_t2

0x0001,

0xf9b4,	// (0x0002a1a7) graphic_text_digital_pane_t

0x7187,	// (0x0002197a) navi_icon_pane_srt_ParamLimits

0x7187,	// (0x0002197a) navi_icon_pane_srt

0x70a7,	// (0x0002189a) navi_midp_pane_srt

0x70a7,	// (0x0002189a) navi_navi_pane_srt

0x7187,	// (0x0002197a) navi_text_pane_srt_ParamLimits

0x7187,	// (0x0002197a) navi_text_pane_srt

0xa6d6,	// (0x00024ec9) navi_navi_icon_text_pane_srt

0xa6de,	// (0x00024ed1) navi_navi_pane_srt_g1_ParamLimits

0xa6de,	// (0x00024ed1) navi_navi_pane_srt_g1

0xa6f0,	// (0x00024ee3) navi_navi_pane_srt_g2_ParamLimits

0xa6f0,	// (0x00024ee3) navi_navi_pane_srt_g2

0x0001,

0xf9af,	// (0x0002a1a2) navi_navi_pane_srt_g_ParamLimits

0xf9af,	// (0x0002a1a2) navi_navi_pane_srt_g

0xa702,	// (0x00024ef5) navi_navi_tabs_pane_srt

0xa6d6,	// (0x00024ec9) navi_navi_text_pane_srt

0xa6d6,	// (0x00024ec9) navi_navi_volume_pane_srt

0xa6c7,	// (0x00024eba) navi_navi_text_pane_srt_t1

0x6155,	// (0x00020948) navi_navi_volume_pane_srt_g1

0x615d,	// (0x00020950) volume_small_pane_srt_ParamLimits

0x615d,	// (0x00020950) volume_small_pane_srt

0x55fa,	// (0x0001fded) volume_small_pane_srt_g1_ParamLimits

0x55fa,	// (0x0001fded) volume_small_pane_srt_g1

0x560a,	// (0x0001fdfd) volume_small_pane_srt_g2_ParamLimits

0x560a,	// (0x0001fdfd) volume_small_pane_srt_g2

0x561b,	// (0x0001fe0e) volume_small_pane_srt_g3_ParamLimits

0x561b,	// (0x0001fe0e) volume_small_pane_srt_g3

0x562c,	// (0x0001fe1f) volume_small_pane_srt_g4_ParamLimits

0x562c,	// (0x0001fe1f) volume_small_pane_srt_g4

0x563d,	// (0x0001fe30) volume_small_pane_srt_g5_ParamLimits

0x563d,	// (0x0001fe30) volume_small_pane_srt_g5

0x564e,	// (0x0001fe41) volume_small_pane_srt_g6_ParamLimits

0x564e,	// (0x0001fe41) volume_small_pane_srt_g6

0x565f,	// (0x0001fe52) volume_small_pane_srt_g7_ParamLimits

0x565f,	// (0x0001fe52) volume_small_pane_srt_g7

0x5670,	// (0x0001fe63) volume_small_pane_srt_g8_ParamLimits

0x5670,	// (0x0001fe63) volume_small_pane_srt_g8

0x5681,	// (0x0001fe74) volume_small_pane_srt_g9_ParamLimits

0x5681,	// (0x0001fe74) volume_small_pane_srt_g9

0x5692,	// (0x0001fe85) volume_small_pane_srt_g10_ParamLimits

0x5692,	// (0x0001fe85) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x00029f56) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x00029f56) volume_small_pane_srt_g

0x7555,	// (0x00021d48) query_popup_data_pane_cp2

0xa6ad,	// (0x00024ea0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa6ad,	// (0x00024ea0) navi_navi_icon_text_pane_srt_t1

0x97df,	// (0x00023fd2) navi_tabs_2_long_pane_srt

0x97df,	// (0x00023fd2) navi_tabs_2_pane_srt

0x97df,	// (0x00023fd2) navi_tabs_3_long_pane_srt

0x97df,	// (0x00023fd2) navi_tabs_3_pane_srt

0x97df,	// (0x00023fd2) navi_tabs_4_pane_srt

0x6135,	// (0x00020928) tabs_2_active_pane_srt_ParamLimits

0x6135,	// (0x00020928) tabs_2_active_pane_srt

0x6145,	// (0x00020938) tabs_2_passive_pane_srt_ParamLimits

0x6145,	// (0x00020938) tabs_2_passive_pane_srt

0x8f72,	// (0x00023765) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8f72,	// (0x00023765) bg_passive_tab_pane_cp1_srt

0xa679,	// (0x00024e6c) bg_passive_tab_pane_g1_cp1_srt

0x828c,	// (0x00022a7f) bg_passive_tab_pane_g2_cp1_srt

0xa682,	// (0x00024e75) bg_passive_tab_pane_g3_cp1_srt

0x7402,	// (0x00021bf5) bg_active_tab_pane_cp1_srt_ParamLimits

0x7402,	// (0x00021bf5) bg_active_tab_pane_cp1_srt

0xa68b,	// (0x00024e7e) tabs_2_active_pane_srt_g1

0x2533,	// (0x0001cd26) tabs_2_active_pane_srt_t1_ParamLimits

0x2533,	// (0x0001cd26) tabs_2_active_pane_srt_t1

0xa679,	// (0x00024e6c) bg_active_tab_pane_g1_cp1_srt

0x828c,	// (0x00022a7f) bg_active_tab_pane_g2_cp1_srt

0xa682,	// (0x00024e75) bg_active_tab_pane_g3_cp1_srt

0x6102,	// (0x000208f5) tabs_3_active_pane_srt_ParamLimits

0x6102,	// (0x000208f5) tabs_3_active_pane_srt

0x6113,	// (0x00020906) tabs_3_passive_pane_cp_srt_ParamLimits

0x6113,	// (0x00020906) tabs_3_passive_pane_cp_srt

0x6124,	// (0x00020917) tabs_3_passive_pane_srt_ParamLimits

0x6124,	// (0x00020917) tabs_3_passive_pane_srt

0x8f72,	// (0x00023765) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8f72,	// (0x00023765) bg_passive_tab_pane_cp2_srt

0x87e6,	// (0x00022fd9) bg_passive_tab_pane_g1_cp2_srt

0x828c,	// (0x00022a7f) bg_passive_tab_pane_g2_cp2_srt

0x87ef,	// (0x00022fe2) bg_passive_tab_pane_g3_cp2_srt

0x7402,	// (0x00021bf5) bg_active_tab_pane_cp2_srt_ParamLimits

0x7402,	// (0x00021bf5) bg_active_tab_pane_cp2_srt

0xa65f,	// (0x00024e52) tabs_3_active_pane_srt_g1

0x251d,	// (0x0001cd10) tabs_3_active_pane_srt_t1_ParamLimits

0x251d,	// (0x0001cd10) tabs_3_active_pane_srt_t1

0x87e6,	// (0x00022fd9) bg_active_tab_pane_g1_cp2_srt

0x828c,	// (0x00022a7f) bg_active_tab_pane_g2_cp2_srt

0x87ef,	// (0x00022fe2) bg_active_tab_pane_g3_cp2_srt

0x60ba,	// (0x000208ad) tabs_4_active_pane_srt_ParamLimits

0x60ba,	// (0x000208ad) tabs_4_active_pane_srt

0x60cc,	// (0x000208bf) tabs_4_passive_pane_cp2_srt_ParamLimits

0x60cc,	// (0x000208bf) tabs_4_passive_pane_cp2_srt

0x57f1,	// (0x0001ffe4) aid_size_cell_toolbar

0xa2f3,	// (0x00024ae6) main_idle_act_pane_ParamLimits

0x5992,	// (0x00020185) popup_large_graphic_colour_window_ParamLimits

0xe065,	// (0x00028858) popup_toolbar_window_ParamLimits

0xe065,	// (0x00028858) popup_toolbar_window

0xa4a3,	// (0x00024c96) list_single_graphic_2heading_pane_ParamLimits

0xa4a3,	// (0x00024c96) list_single_graphic_2heading_pane

0x7d83,	// (0x00022576) aid_size_cell_apps_grid_lsc_pane

0x7d95,	// (0x00022588) aid_size_cell_apps_grid_prt_pane

0x8980,	// (0x00023173) bg_wml_button_pane_cp1_ParamLimits

0x8980,	// (0x00023173) bg_wml_button_pane_cp1

0x2026,	// (0x0001c819) form_midp_field_text_pane_t1_ParamLimits

0x8f72,	// (0x00023765) input_focus_pane_cp050_ParamLimits

0x91ff,	// (0x000239f2) list_midp_form_text_pane_ParamLimits

0x919d,	// (0x00023990) input_focus_pane_cp051_ParamLimits

0x91b1,	// (0x000239a4) list_midp_choice_pane_ParamLimits

0x1fb7,	// (0x0001c7aa) list_single_2graphic_pane_cp3_ParamLimits

0x1fb7,	// (0x0001c7aa) list_single_2graphic_pane_cp3

0x1fcd,	// (0x0001c7c0) list_single_midp_graphic_pane_ParamLimits

0x1fcd,	// (0x0001c7c0) list_single_midp_graphic_pane

0x3f00,	// (0x0001e6f3) list_single_graphic_2heading_pane_g1_ParamLimits

0x3f00,	// (0x0001e6f3) list_single_graphic_2heading_pane_g1

0x3e86,	// (0x0001e679) list_single_graphic_2heading_pane_g4_ParamLimits

0x3e86,	// (0x0001e679) list_single_graphic_2heading_pane_g4

0x3e92,	// (0x0001e685) list_single_graphic_2heading_pane_g5_ParamLimits

0x3e92,	// (0x0001e685) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x00029fa9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x00029fa9) list_single_graphic_2heading_pane_g

0x45b5,	// (0x0001eda8) list_single_graphic_2heading_pane_t1_ParamLimits

0x45b5,	// (0x0001eda8) list_single_graphic_2heading_pane_t1

0x45c9,	// (0x0001edbc) list_single_graphic_2heading_pane_t2_ParamLimits

0x45c9,	// (0x0001edbc) list_single_graphic_2heading_pane_t2

0x45e3,	// (0x0001edd6) list_single_graphic_2heading_pane_t3_ParamLimits

0x45e3,	// (0x0001edd6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x00029fb0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x00029fb0) list_single_graphic_2heading_pane_t

0x8dc0,	// (0x000235b3) bg_popup_sub_pane_cp2

0x8dea,	// (0x000235dd) grid_toobar_pane

0x5d9c,	// (0x0002058f) cell_toolbar_pane_ParamLimits

0x5d9c,	// (0x0002058f) cell_toolbar_pane

0x8e26,	// (0x00023619) cell_toolbar_pane_g1_ParamLimits

0x8e26,	// (0x00023619) cell_toolbar_pane_g1

0x8e3a,	// (0x0002362d) cell_toolbar_pane_g2_ParamLimits

0x8e3a,	// (0x0002362d) cell_toolbar_pane_g2

0x0001,

0xf7c4,	// (0x00029fb7) cell_toolbar_pane_g_ParamLimits

0xf7c4,	// (0x00029fb7) cell_toolbar_pane_g

0x8e5c,	// (0x0002364f) grid_highlight_pane_cp2_ParamLimits

0x8e5c,	// (0x0002364f) grid_highlight_pane_cp2

0x8e76,	// (0x00023669) toolbar_button_pane

0x8e82,	// (0x00023675) toolbar_button_pane_g1

0x8e8a,	// (0x0002367d) toolbar_button_pane_g2

0x8e92,	// (0x00023685) toolbar_button_pane_g3

0x8e9a,	// (0x0002368d) toolbar_button_pane_g4

0x8ea2,	// (0x00023695) toolbar_button_pane_g5

0x8eaa,	// (0x0002369d) toolbar_button_pane_g6

0x8eb2,	// (0x000236a5) toolbar_button_pane_g7

0x8eba,	// (0x000236ad) toolbar_button_pane_g8

0x8ec2,	// (0x000236b5) toolbar_button_pane_g9

0x0009,

0xf7c9,	// (0x00029fbc) toolbar_button_pane_g

0x5dd4,	// (0x000205c7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5dd4,	// (0x000205c7) list_single_2graphic_pane_g1_cp3

0xe0bd,	// (0x000288b0) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe0bd,	// (0x000288b0) list_single_2graphic_pane_g2_cp3

0x8470,	// (0x00022c63) list_single_2graphic_pane_g3_cp3

0x5df1,	// (0x000205e4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5df1,	// (0x000205e4) list_single_2graphic_pane_g4_cp3

0x5dfd,	// (0x000205f0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5dfd,	// (0x000205f0) list_single_2graphic_pane_t1_cp3

0x8464,	// (0x00022c57) list_single_midp_graphic_pane_g2_ParamLimits

0x8464,	// (0x00022c57) list_single_midp_graphic_pane_g2

0x57f9,	// (0x0001ffec) aid_zoom_text_primary

0x45a5,	// (0x0001ed98) aid_zoom_text_secondary

0x88a3,	// (0x00023096) status_small_pane_g7_ParamLimits

0x88a3,	// (0x00023096) status_small_pane_g7

0x88c6,	// (0x000230b9) status_small_pane_t1_ParamLimits

0x0f02,	// (0x0001b6f5) title_pane_g2

0x0003,

0xf554,	// (0x00029d47) title_pane_g

0x118d,	// (0x0001b980) aid_size_cell_colour_1_pane_ParamLimits

0x118d,	// (0x0001b980) aid_size_cell_colour_1_pane

0x11a1,	// (0x0001b994) aid_size_cell_colour_2_pane_ParamLimits

0x11a1,	// (0x0001b994) aid_size_cell_colour_2_pane

0x11b5,	// (0x0001b9a8) aid_size_cell_colour_3_pane_ParamLimits

0x11b5,	// (0x0001b9a8) aid_size_cell_colour_3_pane

0x11c9,	// (0x0001b9bc) aid_size_cell_colour_4_pane_ParamLimits

0x11c9,	// (0x0001b9bc) aid_size_cell_colour_4_pane

0x5256,	// (0x0001fa49) title_pane_stacon_g1_ParamLimits

0x5256,	// (0x0001fa49) title_pane_stacon_g1

0x95be,	// (0x00023db1) popup_note_wait_window_g3_ParamLimits

0x95be,	// (0x00023db1) popup_note_wait_window_g3

0x9634,	// (0x00023e27) popup_note_wait_window_t5_ParamLimits

0x9634,	// (0x00023e27) popup_note_wait_window_t5

0x70a7,	// (0x0002189a) main_feb_china_hwr_fs_writing_pane

0xda8d,	// (0x00028280) popup_feb_china_hwr_fs_window_ParamLimits

0xda8d,	// (0x00028280) popup_feb_china_hwr_fs_window

0xe0ce,	// (0x000288c1) aid_size_cell_hwr_fs_ParamLimits

0xe0ce,	// (0x000288c1) aid_size_cell_hwr_fs

0x8f72,	// (0x00023765) bg_popup_sub_pane_cp3_ParamLimits

0x8f72,	// (0x00023765) bg_popup_sub_pane_cp3

0xe0e3,	// (0x000288d6) grid_hwr_fs_pane_ParamLimits

0xe0e3,	// (0x000288d6) grid_hwr_fs_pane

0x5e5a,	// (0x0002064d) linegrid_hwr_fs_pane_ParamLimits

0x5e5a,	// (0x0002064d) linegrid_hwr_fs_pane

0xe0fb,	// (0x000288ee) cell_hwr_fs_pane_ParamLimits

0xe0fb,	// (0x000288ee) cell_hwr_fs_pane

0x8f7e,	// (0x00023771) linegrid_hwr_fs_pane_g1_ParamLimits

0x8f7e,	// (0x00023771) linegrid_hwr_fs_pane_g1

0x1f8b,	// (0x0001c77e) linegrid_hwr_fs_pane_g2_ParamLimits

0x1f8b,	// (0x0001c77e) linegrid_hwr_fs_pane_g2

0x8f9c,	// (0x0002378f) linegrid_hwr_fs_pane_g3_ParamLimits

0x8f9c,	// (0x0002378f) linegrid_hwr_fs_pane_g3

0x5e8c,	// (0x0002067f) linegrid_hwr_fs_pane_g4_ParamLimits

0x5e8c,	// (0x0002067f) linegrid_hwr_fs_pane_g4

0x5ea6,	// (0x00020699) linegrid_hwr_fs_pane_g5_ParamLimits

0x5ea6,	// (0x00020699) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ef,	// (0x00029fe2) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x00029fe2) linegrid_hwr_fs_pane_g

0x8fa8,	// (0x0002379b) cell_hwr_fs_pane_g1_ParamLimits

0x8fa8,	// (0x0002379b) cell_hwr_fs_pane_g1

0x8cf9,	// (0x000234ec) cell_hwr_fs_pane_g2_ParamLimits

0x8cf9,	// (0x000234ec) cell_hwr_fs_pane_g2

0x1f9d,	// (0x0001c790) cell_hwr_fs_pane_g3_ParamLimits

0x1f9d,	// (0x0001c790) cell_hwr_fs_pane_g3

0x1faa,	// (0x0001c79d) cell_hwr_fs_pane_g4_ParamLimits

0x1faa,	// (0x0001c79d) cell_hwr_fs_pane_g4

0x0003,

0xf7fa,	// (0x00029fed) cell_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00029fed) cell_hwr_fs_pane_g

0xe121,	// (0x00028914) cell_hwr_fs_pane_t1

0x70a7,	// (0x0002189a) grid_highlight_pane_cp6

0x70a7,	// (0x0002189a) main_idle_act2_pane

0x7b3b,	// (0x0002232e) aid_inside_area_popup_secondary

0x210d,	// (0x0001c900) aid_inside_area_window_primary_ParamLimits

0x210d,	// (0x0001c900) aid_inside_area_window_primary

0xa808,	// (0x00024ffb) ai2_news_ticker_pane

0xa810,	// (0x00025003) aid_size_cell_ai1_link_ParamLimits

0xa810,	// (0x00025003) aid_size_cell_ai1_link

0xa82a,	// (0x0002501d) popup_ai2_data_window_ParamLimits

0xa82a,	// (0x0002501d) popup_ai2_data_window

0xa83e,	// (0x00025031) popup_ai2_link_window_ParamLimits

0xa83e,	// (0x00025031) popup_ai2_link_window

0x8f72,	// (0x00023765) bg_popup_sub_pane_cp4_ParamLimits

0x8f72,	// (0x00023765) bg_popup_sub_pane_cp4

0xa852,	// (0x00025045) grid_ai2_link_pane_ParamLimits

0xa852,	// (0x00025045) grid_ai2_link_pane

0xa869,	// (0x0002505c) popup_ai2_link_window_g1_ParamLimits

0xa869,	// (0x0002505c) popup_ai2_link_window_g1

0xa875,	// (0x00025068) popup_ai2_link_window_g2_ParamLimits

0xa875,	// (0x00025068) popup_ai2_link_window_g2

0x0001,

0xf9cd,	// (0x0002a1c0) popup_ai2_link_window_g_ParamLimits

0xf9cd,	// (0x0002a1c0) popup_ai2_link_window_g

0xa884,	// (0x00025077) ai2_mp_button_pane

0xa88c,	// (0x0002507f) ai2_mp_volume_pane

0x919d,	// (0x00023990) bg_popup_sub_pane_cp5_ParamLimits

0x919d,	// (0x00023990) bg_popup_sub_pane_cp5

0xa894,	// (0x00025087) heading_ai2_gene_pane_ParamLimits

0xa894,	// (0x00025087) heading_ai2_gene_pane

0xa8a0,	// (0x00025093) list_ai2_gene_pane_ParamLimits

0xa8a0,	// (0x00025093) list_ai2_gene_pane

0xa8e8,	// (0x000250db) cell_ai2_link_pane_ParamLimits

0xa8e8,	// (0x000250db) cell_ai2_link_pane

0xa8fe,	// (0x000250f1) cell_ai2_link_pane_g1

0x70a7,	// (0x0002189a) grid_highlight_pane_cp7

0x6172,	// (0x00020965) ai2_mp_volume_pane_g1

0xa9cf,	// (0x000251c2) ai2_mp_volume_pane_g2

0xa944,	// (0x00025137) list_ai2_gene_pane_t1

0xa9d7,	// (0x000251ca) ai2_mp_volume_pane_g3

0x0002,

0xf9e6,	// (0x0002a1d9) ai2_mp_volume_pane_g

0x617a,	// (0x0002096d) volume_small_pane_cp3

0xa9df,	// (0x000251d2) aid_size_cell_ai2_button

0xa9e7,	// (0x000251da) grid_ai2_button_pane

0xa9f0,	// (0x000251e3) cell_ai2_button_pane_ParamLimits

0xa9f0,	// (0x000251e3) cell_ai2_button_pane

0x709d,	// (0x00021890) cell_ai2_button_pane_g1

0x70a7,	// (0x0002189a) grid_highlight_pane_cp8

0xa98f,	// (0x00025182) ai2_gene_pane_t1_ParamLimits

0xa98f,	// (0x00025182) ai2_gene_pane_t1

0xda2b,	// (0x0002821e) aid_height_parent_landscape

0x22a3,	// (0x0001ca96) aid_height_set_list

0xa2f3,	// (0x00024ae6) aid_size_parent

0xa5e9,	// (0x00024ddc) aid_size_cell_graphic_pane_ParamLimits

0xa8b0,	// (0x000250a3) popup_ai2_data_window_g1_ParamLimits

0xa8b0,	// (0x000250a3) popup_ai2_data_window_g1

0xa8bc,	// (0x000250af) ai2_news_ticker_pane_g1

0xa8c4,	// (0x000250b7) ai2_news_ticker_pane_g2

0x0001,

0xf9d2,	// (0x0002a1c5) ai2_news_ticker_pane_g

0xa8cc,	// (0x000250bf) ai2_news_ticker_pane_t1

0xa8da,	// (0x000250cd) ai2_news_ticker_pane_t2

0x0001,

0xf9d7,	// (0x0002a1ca) ai2_news_ticker_pane_t

0xa907,	// (0x000250fa) heading_ai2_gene_pane_g1

0xa90f,	// (0x00025102) heading_ai2_gene_pane_t1_ParamLimits

0xa90f,	// (0x00025102) heading_ai2_gene_pane_t1

0xa924,	// (0x00025117) list_highlight_pane_cp6

0xa92c,	// (0x0002511f) ai2_gene_pane_ParamLimits

0xa92c,	// (0x0002511f) ai2_gene_pane

0xa952,	// (0x00025145) list_ai2_gene_pane_t2

0x0001,

0xf9dc,	// (0x0002a1cf) list_ai2_gene_pane_t

0xa960,	// (0x00025153) list_highlight_pane_cp8_ParamLimits

0xa960,	// (0x00025153) list_highlight_pane_cp8

0xa971,	// (0x00025164) ai2_gene_pane_g1_ParamLimits

0xa971,	// (0x00025164) ai2_gene_pane_g1

0xa983,	// (0x00025176) ai2_gene_pane_g2_ParamLimits

0xa983,	// (0x00025176) ai2_gene_pane_g2

0x0001,

0xf9e1,	// (0x0002a1d4) ai2_gene_pane_g_ParamLimits

0xf9e1,	// (0x0002a1d4) ai2_gene_pane_g

0x7970,	// (0x00022163) scroll_pane_cp12

0xd9ea,	// (0x000281dd) control_pane_t3_ParamLimits

0xd9ea,	// (0x000281dd) control_pane_t3

0x88b7,	// (0x000230aa) status_small_pane_g8_ParamLimits

0x88b7,	// (0x000230aa) status_small_pane_g8

0xdb20,	// (0x00028313) popup_find_window_ParamLimits

0xdd9b,	// (0x0002858e) popup_note_image_window_ParamLimits

0x3f00,	// (0x0001e6f3) list_double2_graphic_pane_vc_g1_ParamLimits

0x3f00,	// (0x0001e6f3) list_double2_graphic_pane_vc_g1

0x3e86,	// (0x0001e679) list_double2_graphic_pane_vc_g2_ParamLimits

0x3e86,	// (0x0001e679) list_double2_graphic_pane_vc_g2

0x3e92,	// (0x0001e685) list_double2_graphic_pane_vc_g3_ParamLimits

0x3e92,	// (0x0001e685) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b6,	// (0x00029fa9) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b6,	// (0x00029fa9) list_double2_graphic_pane_vc_g

0x45fb,	// (0x0001edee) list_double2_graphic_pane_vc_t1_ParamLimits

0x45fb,	// (0x0001edee) list_double2_graphic_pane_vc_t1

0x3e86,	// (0x0001e679) list_single_heading_pane_vc_g1_ParamLimits

0x3e86,	// (0x0001e679) list_single_heading_pane_vc_g1

0x3e92,	// (0x0001e685) list_single_heading_pane_vc_g2_ParamLimits

0x3e92,	// (0x0001e685) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00029dc1) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00029dc1) list_single_heading_pane_vc_g

0x4611,	// (0x0001ee04) list_single_heading_pane_vc_t1_ParamLimits

0x4611,	// (0x0001ee04) list_single_heading_pane_vc_t1

0x4627,	// (0x0001ee1a) list_single_heading_pane_vc_t2_ParamLimits

0x4627,	// (0x0001ee1a) list_single_heading_pane_vc_t2

0x0001,

0xf7de,	// (0x00029fd1) list_single_heading_pane_vc_t_ParamLimits

0xf7de,	// (0x00029fd1) list_single_heading_pane_vc_t

0x8eca,	// (0x000236bd) list_setting_number_pane_vc_g1_ParamLimits

0x8eca,	// (0x000236bd) list_setting_number_pane_vc_g1

0x8ed6,	// (0x000236c9) list_setting_number_pane_vc_g2_ParamLimits

0x8ed6,	// (0x000236c9) list_setting_number_pane_vc_g2

0x0001,

0xf7e3,	// (0x00029fd6) list_setting_number_pane_vc_g_ParamLimits

0xf7e3,	// (0x00029fd6) list_setting_number_pane_vc_g

0x8ee2,	// (0x000236d5) list_setting_number_pane_vc_t1_ParamLimits

0x8ee2,	// (0x000236d5) list_setting_number_pane_vc_t1

0x8ef6,	// (0x000236e9) list_setting_number_pane_vc_t2_ParamLimits

0x8ef6,	// (0x000236e9) list_setting_number_pane_vc_t2

0x8f10,	// (0x00023703) list_setting_number_pane_vc_t3_ParamLimits

0x8f10,	// (0x00023703) list_setting_number_pane_vc_t3

0x0002,

0xf7e8,	// (0x00029fdb) list_setting_number_pane_vc_t_ParamLimits

0xf7e8,	// (0x00029fdb) list_setting_number_pane_vc_t

0x8f36,	// (0x00023729) set_value_pane_vc_ParamLimits

0x8f36,	// (0x00023729) set_value_pane_vc

0xa4a3,	// (0x00024c96) list_double2_graphic_pane_vc_ParamLimits

0xa4a3,	// (0x00024c96) list_double2_graphic_pane_vc

0xa4b7,	// (0x00024caa) list_double2_large_graphic_pane_vc_ParamLimits

0xa4b7,	// (0x00024caa) list_double2_large_graphic_pane_vc

0xa4a3,	// (0x00024c96) list_double2_pane_vc_ParamLimits

0xa4a3,	// (0x00024c96) list_double2_pane_vc

0xa4a3,	// (0x00024c96) list_double_graphic_heading_pane_vc_ParamLimits

0xa4a3,	// (0x00024c96) list_double_graphic_heading_pane_vc

0xa4a3,	// (0x00024c96) list_double_graphic_pane_vc_ParamLimits

0xa4a3,	// (0x00024c96) list_double_graphic_pane_vc

0xa4a3,	// (0x00024c96) list_double_heading_pane_vc_ParamLimits

0xa4a3,	// (0x00024c96) list_double_heading_pane_vc

0xa4b7,	// (0x00024caa) list_double_large_graphic_pane_vc_ParamLimits

0xa4b7,	// (0x00024caa) list_double_large_graphic_pane_vc

0xa4a3,	// (0x00024c96) list_double_number_pane_vc_ParamLimits

0xa4a3,	// (0x00024c96) list_double_number_pane_vc

0xa4a3,	// (0x00024c96) list_double_pane_vc_ParamLimits

0xa4a3,	// (0x00024c96) list_double_pane_vc

0xa4a3,	// (0x00024c96) list_double_time_pane_vc_ParamLimits

0xa4a3,	// (0x00024c96) list_double_time_pane_vc

0xa4a3,	// (0x00024c96) list_setting_number_pane_vc_ParamLimits

0xa4a3,	// (0x00024c96) list_setting_number_pane_vc

0xa4a3,	// (0x00024c96) list_setting_pane_vc_ParamLimits

0xa4a3,	// (0x00024c96) list_setting_pane_vc

0xa4a3,	// (0x00024c96) list_single_graphic_heading_pane_vc_ParamLimits

0xa4a3,	// (0x00024c96) list_single_graphic_heading_pane_vc

0xa4a3,	// (0x00024c96) list_single_heading_pane_vc_ParamLimits

0xa4a3,	// (0x00024c96) list_single_heading_pane_vc

0xa4a3,	// (0x00024c96) list_single_number_heading_pane_vc_ParamLimits

0xa4a3,	// (0x00024c96) list_single_number_heading_pane_vc

0x3f00,	// (0x0001e6f3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3f00,	// (0x0001e6f3) list_double_graphic_heading_pane_vc_g1

0x3e86,	// (0x0001e679) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3e86,	// (0x0001e679) list_double_graphic_heading_pane_vc_g2

0x3e92,	// (0x0001e685) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3e92,	// (0x0001e685) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b6,	// (0x00029fa9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x00029fa9) list_double_graphic_heading_pane_vc_g

0x47bc,	// (0x0001efaf) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x47bc,	// (0x0001efaf) list_double_graphic_heading_pane_vc_t1

0x4611,	// (0x0001ee04) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4611,	// (0x0001ee04) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ed,	// (0x0002a1e0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ed,	// (0x0002a1e0) list_double_graphic_heading_pane_vc_t

0x8eca,	// (0x000236bd) list_setting_pane_vc_g1_ParamLimits

0x8eca,	// (0x000236bd) list_setting_pane_vc_g1

0x8ed6,	// (0x000236c9) list_setting_pane_vc_g2_ParamLimits

0x8ed6,	// (0x000236c9) list_setting_pane_vc_g2

0x0001,

0xf7e3,	// (0x00029fd6) list_setting_pane_vc_g_ParamLimits

0xf7e3,	// (0x00029fd6) list_setting_pane_vc_g

0xac1c,	// (0x0002540f) list_setting_pane_vc_t1_ParamLimits

0xac1c,	// (0x0002540f) list_setting_pane_vc_t1

0xac36,	// (0x00025429) list_setting_pane_vc_t2_ParamLimits

0xac36,	// (0x00025429) list_setting_pane_vc_t2

0x0001,

0xfa30,	// (0x0002a223) list_setting_pane_vc_t_ParamLimits

0xfa30,	// (0x0002a223) list_setting_pane_vc_t

0x8f36,	// (0x00023729) set_value_pane_cp_vc_ParamLimits

0x8f36,	// (0x00023729) set_value_pane_cp_vc

0x3e86,	// (0x0001e679) list_single_number_heading_pane_vc_g1_ParamLimits

0x3e86,	// (0x0001e679) list_single_number_heading_pane_vc_g1

0x3e92,	// (0x0001e685) list_single_number_heading_pane_vc_g2_ParamLimits

0x3e92,	// (0x0001e685) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00029dc1) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00029dc1) list_single_number_heading_pane_vc_g

0x4611,	// (0x0001ee04) list_single_number_heading_pane_vc_t1_ParamLimits

0x4611,	// (0x0001ee04) list_single_number_heading_pane_vc_t1

0x47d0,	// (0x0001efc3) list_single_number_heading_pane_vc_t2_ParamLimits

0x47d0,	// (0x0001efc3) list_single_number_heading_pane_vc_t2

0x3eee,	// (0x0001e6e1) list_single_number_heading_pane_vc_t3_ParamLimits

0x3eee,	// (0x0001e6e1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa35,	// (0x0002a228) list_single_number_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x0002a228) list_single_number_heading_pane_vc_t

0x3f00,	// (0x0001e6f3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3f00,	// (0x0001e6f3) list_single_graphic_heading_pane_vc_g1

0x3e86,	// (0x0001e679) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3e86,	// (0x0001e679) list_single_graphic_heading_pane_vc_g4

0x3e92,	// (0x0001e685) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3e92,	// (0x0001e685) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b6,	// (0x00029fa9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x00029fa9) list_single_graphic_heading_pane_vc_g

0x4611,	// (0x0001ee04) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4611,	// (0x0001ee04) list_single_graphic_heading_pane_vc_t1

0x47e4,	// (0x0001efd7) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x47e4,	// (0x0001efd7) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3c,	// (0x0002a22f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x0002a22f) list_single_graphic_heading_pane_vc_t

0x3e86,	// (0x0001e679) list_double2_pane_vc_g1_ParamLimits

0x3e86,	// (0x0001e679) list_double2_pane_vc_g1

0x3e92,	// (0x0001e685) list_double2_pane_vc_g2_ParamLimits

0x3e92,	// (0x0001e685) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x00029dc1) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x00029dc1) list_double2_pane_vc_g

0x46c7,	// (0x0001eeba) list_double2_pane_vc_t1_ParamLimits

0x46c7,	// (0x0001eeba) list_double2_pane_vc_t1

0x47f8,	// (0x0001efeb) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x47f8,	// (0x0001efeb) list_double2_large_graphic_pane_vc_g1

0x4804,	// (0x0001eff7) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4804,	// (0x0001eff7) list_double2_large_graphic_pane_vc_g2

0x4810,	// (0x0001f003) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4810,	// (0x0001f003) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x00029dde) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x00029dde) list_double2_large_graphic_pane_vc_g

0x481c,	// (0x0001f00f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x481c,	// (0x0001f00f) list_double2_large_graphic_pane_vc_t1

0x4832,	// (0x0001f025) list_double_time_pane_vc_g1_ParamLimits

0x4832,	// (0x0001f025) list_double_time_pane_vc_g1

0x483e,	// (0x0001f031) list_double_time_pane_vc_g2_ParamLimits

0x483e,	// (0x0001f031) list_double_time_pane_vc_g2

0x0001,

0xfa41,	// (0x0002a234) list_double_time_pane_vc_g_ParamLimits

0xfa41,	// (0x0002a234) list_double_time_pane_vc_g

0x484a,	// (0x0001f03d) list_double_time_pane_vc_t1_ParamLimits

0x484a,	// (0x0001f03d) list_double_time_pane_vc_t1

0x4868,	// (0x0001f05b) list_double_time_pane_vc_t2_ParamLimits

0x4868,	// (0x0001f05b) list_double_time_pane_vc_t2

0x48b7,	// (0x0001f0aa) list_double_time_pane_vc_t3_ParamLimits

0x48b7,	// (0x0001f0aa) list_double_time_pane_vc_t3

0x48c9,	// (0x0001f0bc) list_double_time_pane_vc_t4_ParamLimits

0x48c9,	// (0x0001f0bc) list_double_time_pane_vc_t4

0x0003,

0xfa46,	// (0x0002a239) list_double_time_pane_vc_t_ParamLimits

0xfa46,	// (0x0002a239) list_double_time_pane_vc_t

0x3e86,	// (0x0001e679) list_double_pane_vc_g1_ParamLimits

0x3e86,	// (0x0001e679) list_double_pane_vc_g1

0x3e92,	// (0x0001e685) list_double_pane_vc_g2_ParamLimits

0x3e92,	// (0x0001e685) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x00029dc1) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x00029dc1) list_double_pane_vc_g

0x48dd,	// (0x0001f0d0) list_double_pane_vc_t1_ParamLimits

0x48dd,	// (0x0001f0d0) list_double_pane_vc_t1

0x48ef,	// (0x0001f0e2) list_double_pane_vc_t2_ParamLimits

0x48ef,	// (0x0001f0e2) list_double_pane_vc_t2

0x0001,

0xfa4f,	// (0x0002a242) list_double_pane_vc_t_ParamLimits

0xfa4f,	// (0x0002a242) list_double_pane_vc_t

0x3e86,	// (0x0001e679) list_double_number_pane_vc_g1_ParamLimits

0x3e86,	// (0x0001e679) list_double_number_pane_vc_g1

0x3e92,	// (0x0001e685) list_double_number_pane_vc_g2_ParamLimits

0x3e92,	// (0x0001e685) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x00029dc1) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x00029dc1) list_double_number_pane_vc_g

0x4907,	// (0x0001f0fa) list_double_number_pane_vc_t1_ParamLimits

0x4907,	// (0x0001f0fa) list_double_number_pane_vc_t1

0x491b,	// (0x0001f10e) list_double_number_pane_vc_t2_ParamLimits

0x491b,	// (0x0001f10e) list_double_number_pane_vc_t2

0x48ef,	// (0x0001f0e2) list_double_number_pane_vc_t3_ParamLimits

0x48ef,	// (0x0001f0e2) list_double_number_pane_vc_t3

0x0002,

0xfa54,	// (0x0002a247) list_double_number_pane_vc_t_ParamLimits

0xfa54,	// (0x0002a247) list_double_number_pane_vc_t

0x492d,	// (0x0001f120) list_double_large_graphic_pane_vc_g1_ParamLimits

0x492d,	// (0x0001f120) list_double_large_graphic_pane_vc_g1

0x493e,	// (0x0001f131) list_double_large_graphic_pane_vc_g2_ParamLimits

0x493e,	// (0x0001f131) list_double_large_graphic_pane_vc_g2

0x4810,	// (0x0001f003) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4810,	// (0x0001f003) list_double_large_graphic_pane_vc_g3

0x494d,	// (0x0001f140) list_double_large_graphic_pane_vc_g4_ParamLimits

0x494d,	// (0x0001f140) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5b,	// (0x0002a24e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x0002a24e) list_double_large_graphic_pane_vc_g

0x4959,	// (0x0001f14c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4959,	// (0x0001f14c) list_double_large_graphic_pane_vc_t1

0x4970,	// (0x0001f163) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4970,	// (0x0001f163) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x0002a257) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x0002a257) list_double_large_graphic_pane_vc_t

0x3e86,	// (0x0001e679) list_double_heading_pane_vc_g1_ParamLimits

0x3e86,	// (0x0001e679) list_double_heading_pane_vc_g1

0x3e92,	// (0x0001e685) list_double_heading_pane_vc_g2_ParamLimits

0x3e92,	// (0x0001e685) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00029dc1) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00029dc1) list_double_heading_pane_vc_g

0x4989,	// (0x0001f17c) list_double_heading_pane_vc_t1_ParamLimits

0x4989,	// (0x0001f17c) list_double_heading_pane_vc_t1

0x4611,	// (0x0001ee04) list_double_heading_pane_vc_t2_ParamLimits

0x4611,	// (0x0001ee04) list_double_heading_pane_vc_t2

0x0001,

0xfa69,	// (0x0002a25c) list_double_heading_pane_vc_t_ParamLimits

0xfa69,	// (0x0002a25c) list_double_heading_pane_vc_t

0x499d,	// (0x0001f190) list_double_graphic_pane_vc_g1_ParamLimits

0x499d,	// (0x0001f190) list_double_graphic_pane_vc_g1

0x49ad,	// (0x0001f1a0) list_double_graphic_pane_vc_g2_ParamLimits

0x49ad,	// (0x0001f1a0) list_double_graphic_pane_vc_g2

0x49bc,	// (0x0001f1af) list_double_graphic_pane_vc_g3_ParamLimits

0x49bc,	// (0x0001f1af) list_double_graphic_pane_vc_g3

0x0002,

0xfa6e,	// (0x0002a261) list_double_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x0002a261) list_double_graphic_pane_vc_g

0x49c8,	// (0x0001f1bb) list_double_graphic_pane_vc_t1_ParamLimits

0x49c8,	// (0x0001f1bb) list_double_graphic_pane_vc_t1

0x48ef,	// (0x0001f0e2) list_double_graphic_pane_vc_t2_ParamLimits

0x48ef,	// (0x0001f0e2) list_double_graphic_pane_vc_t2

0x0001,

0xfa75,	// (0x0002a268) list_double_graphic_pane_vc_t_ParamLimits

0xfa75,	// (0x0002a268) list_double_graphic_pane_vc_t

0x4dd4,	// (0x0001f5c7) aid_size_cell_fastswap

0xd71e,	// (0x00027f11) aid_size_cell_touch_ParamLimits

0xd71e,	// (0x00027f11) aid_size_cell_touch

0x5037,	// (0x0001f82a) popup_fast_swap_wide_window_ParamLimits

0x5037,	// (0x0001f82a) popup_fast_swap_wide_window

0xd869,	// (0x0002805c) touch_pane_ParamLimits

0xd869,	// (0x0002805c) touch_pane

0x79c6,	// (0x000221b9) button_value_adjust_pane_cp2

0x42d0,	// (0x0001eac3) button_value_adjust_pane_cp4

0x42f0,	// (0x0001eae3) form_field_data_pane_cp2

0xd3fa,	// (0x00027bed) form_field_data_wide_pane_cp2

0x7e52,	// (0x00022645) bg_scroll_pane_ParamLimits

0x53b9,	// (0x0001fbac) scroll_handle_pane_ParamLimits

0x53cd,	// (0x0001fbc0) scroll_sc2_down_pane_ParamLimits

0x53cd,	// (0x0001fbc0) scroll_sc2_down_pane

0x7e83,	// (0x00022676) scroll_sc2_up_pane_ParamLimits

0x7e83,	// (0x00022676) scroll_sc2_up_pane

0x266a,	// (0x0001ce5d) grid_wheel_folder_pane_g1_ParamLimits

0x266a,	// (0x0001ce5d) grid_wheel_folder_pane_g1

0x5592,	// (0x0001fd85) clock_nsta_pane_cp2_ParamLimits

0x5592,	// (0x0001fd85) clock_nsta_pane_cp2

0x8980,	// (0x00023173) listscroll_midp_pane_ParamLimits

0x1ab0,	// (0x0001c2a3) midp_canvas_pane

0x8932,	// (0x00023125) nsta_clock_indic_pane

0x8966,	// (0x00023159) listscroll_form_pane_vc

0x896e,	// (0x00023161) listscroll_set_pane_vc_ParamLimits

0x896e,	// (0x00023161) listscroll_set_pane_vc

0x1c9c,	// (0x0001c48f) clock_nsta_pane

0x1cc6,	// (0x0001c4b9) indicator_nsta_pane

0x8dc0,	// (0x000235b3) bg_popup_sub_pane_cp2_ParamLimits

0x8dd4,	// (0x000235c7) find_pane_cp2_ParamLimits

0x8dd4,	// (0x000235c7) find_pane_cp2

0x8dea,	// (0x000235dd) grid_toobar_pane_ParamLimits

0x8f46,	// (0x00023739) list_form_gen_pane_vc_ParamLimits

0x8f46,	// (0x00023739) list_form_gen_pane_vc

0x8f5c,	// (0x0002374f) scroll_pane_cp8_vc_ParamLimits

0x8f5c,	// (0x0002374f) scroll_pane_cp8_vc

0x8fd8,	// (0x000237cb) data_form_wide_pane_vc_ParamLimits

0x8fd8,	// (0x000237cb) data_form_wide_pane_vc

0x8fe4,	// (0x000237d7) form_field_data_wide_pane_vc_g1

0x8fec,	// (0x000237df) form_field_data_wide_pane_vc_t1_ParamLimits

0x8fec,	// (0x000237df) form_field_data_wide_pane_vc_t1

0x79da,	// (0x000221cd) input_focus_pane_cp6_vc_ParamLimits

0x79da,	// (0x000221cd) input_focus_pane_cp6_vc

0x2066,	// (0x0001c859) list_midp_pane_ParamLimits

0xa653,	// (0x00024e46) scroll_pane_cp16_ParamLimits

0xa653,	// (0x00024e46) scroll_pane_cp16

0x9398,	// (0x00023b8b) button_value_adjust_pane_ParamLimits

0x9398,	// (0x00023b8b) button_value_adjust_pane

0x22b4,	// (0x0001caa7) button_value_adjust_pane_cp6_ParamLimits

0x22b4,	// (0x0001caa7) button_value_adjust_pane_cp6

0x23ca,	// (0x0001cbbd) settings_code_pane_cp_ParamLimits

0x23ca,	// (0x0001cbbd) settings_code_pane_cp

0x709d,	// (0x00021890) cell_touch_pane_g1

0x709d,	// (0x00021890) cell_touch_pane_g2

0x0001,

0xf709,	// (0x00029efc) cell_touch_pane_g

0x2549,	// (0x0001cd3c) cell_touch_pane_cp_ParamLimits

0x2549,	// (0x0001cd3c) cell_touch_pane_cp

0x2565,	// (0x0001cd58) cell_touch_pane_ParamLimits

0x2565,	// (0x0001cd58) cell_touch_pane

0x709d,	// (0x00021890) scroll_sc2_down_pane_g1

0x709d,	// (0x00021890) scroll_sc2_up_pane_g1

0x70a7,	// (0x0002189a) bg_set_opt_pane_cp4_vc

0xaa24,	// (0x00025217) list_set_graphic_pane_vc_g1_ParamLimits

0xaa24,	// (0x00025217) list_set_graphic_pane_vc_g1

0xaa30,	// (0x00025223) list_set_graphic_pane_vc_g2_ParamLimits

0xaa30,	// (0x00025223) list_set_graphic_pane_vc_g2

0x0001,

0xf9f2,	// (0x0002a1e5) list_set_graphic_pane_vc_g_ParamLimits

0xf9f2,	// (0x0002a1e5) list_set_graphic_pane_vc_g

0xaa3c,	// (0x0002522f) text_primary_small_cp13_vc_ParamLimits

0xaa3c,	// (0x0002522f) text_primary_small_cp13_vc

0xaa54,	// (0x00025247) list_set_graphic_pane_vc_ParamLimits

0xaa54,	// (0x00025247) list_set_graphic_pane_vc

0x70a7,	// (0x0002189a) input_focus_pane_cp2_vc

0x709d,	// (0x00021890) setting_code_pane_vc_g1

0x71d2,	// (0x000219c5) setting_code_pane_vc_t1

0xaa68,	// (0x0002525b) set_text_pane_vc_t1_ParamLimits

0xaa68,	// (0x0002525b) set_text_pane_vc_t1

0x70a7,	// (0x0002189a) input_focus_pane_cp1_vc

0xaa87,	// (0x0002527a) list_set_text_pane_vc

0x709d,	// (0x00021890) setting_text_pane_vc_g1

0x70a7,	// (0x0002189a) bg_set_opt_pane_cp2_vc

0x71c9,	// (0x000219bc) setting_slider_graphic_pane_vc_g1

0xaa91,	// (0x00025284) setting_slider_graphic_pane_vc_t1

0xaaa0,	// (0x00025293) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f7,	// (0x0002a1ea) setting_slider_graphic_pane_vc_t

0xaaaf,	// (0x000252a2) slider_set_pane_cp_vc

0xaab7,	// (0x000252aa) slider_set_pane_vc_g1

0xaac0,	// (0x000252b3) slider_set_pane_vc_g2

0x0006,

0xf9fc,	// (0x0002a1ef) slider_set_pane_vc_g

0x7a41,	// (0x00022234) set_opt_bg_pane_g1_copy1

0x7a49,	// (0x0002223c) set_opt_bg_pane_g2_copy1

0xaaec,	// (0x000252df) set_opt_bg_pane_g3_copy1

0x7a59,	// (0x0002224c) set_opt_bg_pane_g4_copy1

0x7a61,	// (0x00022254) set_opt_bg_pane_g5_copy1

0x7a69,	// (0x0002225c) set_opt_bg_pane_g6_copy1

0xaaf4,	// (0x000252e7) set_opt_bg_pane_g7_copy1

0xaafe,	// (0x000252f1) set_opt_bg_pane_g8_copy1

0xab06,	// (0x000252f9) set_opt_bg_pane_g9_copy1

0x70a7,	// (0x0002189a) bg_set_opt_pane_cp_vc

0xab0e,	// (0x00025301) setting_slider_pane_vc_t1

0xab1d,	// (0x00025310) setting_slider_pane_vc_t2

0xab2c,	// (0x0002531f) setting_slider_pane_vc_t3

0x0002,

0xfa0b,	// (0x0002a1fe) setting_slider_pane_vc_t

0xab3b,	// (0x0002532e) slider_set_pane_vc

0x5eca,	// (0x000206bd) volume_set_pane_vc_g1

0x6183,	// (0x00020976) volume_set_pane_vc_g2

0x618c,	// (0x0002097f) volume_set_pane_vc_g3

0x6195,	// (0x00020988) volume_set_pane_vc_g4

0x619e,	// (0x00020991) volume_set_pane_vc_g5

0x61a7,	// (0x0002099a) volume_set_pane_vc_g6

0x61b0,	// (0x000209a3) volume_set_pane_vc_g7

0x61b9,	// (0x000209ac) volume_set_pane_vc_g8

0x61c2,	// (0x000209b5) volume_set_pane_vc_g9

0x61cb,	// (0x000209be) volume_set_pane_vc_g10

0x0009,

0xfa12,	// (0x0002a205) volume_set_pane_vc_g

0xab43,	// (0x00025336) volume_set_pane_vc

0xab4d,	// (0x00025340) button_value_adjust_pane_cp1_vc

0xab57,	// (0x0002534a) list_highlight_pane_cp2_vc

0xab60,	// (0x00025353) list_set_pane_vc_ParamLimits

0xab60,	// (0x00025353) list_set_pane_vc

0xabb2,	// (0x000253a5) main_pane_set_vc_t1_ParamLimits

0xabb2,	// (0x000253a5) main_pane_set_vc_t1

0xabc7,	// (0x000253ba) main_pane_set_vc_t2_ParamLimits

0xabc7,	// (0x000253ba) main_pane_set_vc_t2

0xabd9,	// (0x000253cc) main_pane_set_vc_t3_ParamLimits

0xabd9,	// (0x000253cc) main_pane_set_vc_t3

0xabeb,	// (0x000253de) main_pane_set_vc_t4_ParamLimits

0xabeb,	// (0x000253de) main_pane_set_vc_t4

0x0003,

0xfa27,	// (0x0002a21a) main_pane_set_vc_t_ParamLimits

0xfa27,	// (0x0002a21a) main_pane_set_vc_t

0xabfd,	// (0x000253f0) setting_code_pane_vc_ParamLimits

0xabfd,	// (0x000253f0) setting_code_pane_vc

0xac0c,	// (0x000253ff) setting_slider_graphic_pane_vc

0xac0c,	// (0x000253ff) setting_slider_pane_vc

0xac0c,	// (0x000253ff) setting_text_pane_vc

0xac0c,	// (0x000253ff) setting_volume_pane_vc

0xac14,	// (0x00025407) scroll_pane_cp121_vc

0x79b4,	// (0x000221a7) set_content_pane_vc

0xac4c,	// (0x0002543f) button_value_adjust_pane_g1

0xac55,	// (0x00025448) button_value_adjust_pane_g2

0x0001,

0xfa7a,	// (0x0002a26d) button_value_adjust_pane_g

0xac5e,	// (0x00025451) form_field_slider_wide_pane_vc_t1_ParamLimits

0xac5e,	// (0x00025451) form_field_slider_wide_pane_vc_t1

0xac72,	// (0x00025465) form_field_slider_wide_pane_vc_t2_ParamLimits

0xac72,	// (0x00025465) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7f,	// (0x0002a272) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0002a272) form_field_slider_wide_pane_vc_t

0x7402,	// (0x00021bf5) input_focus_pane_cp10_vc_ParamLimits

0x7402,	// (0x00021bf5) input_focus_pane_cp10_vc

0xac9e,	// (0x00025491) slider_cont_pane_cp1_vc_ParamLimits

0xac9e,	// (0x00025491) slider_cont_pane_cp1_vc

0xacae,	// (0x000254a1) slider_form_pane_g1_cp2

0xaac0,	// (0x000252b3) slider_form_pane_g2_cp2

0xacdb,	// (0x000254ce) form_field_slider_pane_vc_t3

0xace9,	// (0x000254dc) form_field_slider_pane_vc_t4

0xacf7,	// (0x000254ea) slider_form_pane_vc_ParamLimits

0xacf7,	// (0x000254ea) slider_form_pane_vc

0xad04,	// (0x000254f7) form_field_slider_pane_vc_t1_ParamLimits

0xad04,	// (0x000254f7) form_field_slider_pane_vc_t1

0xac72,	// (0x00025465) form_field_slider_pane_vc_t2_ParamLimits

0xac72,	// (0x00025465) form_field_slider_pane_vc_t2

0x0001,

0xfa91,	// (0x0002a284) form_field_slider_pane_vc_t_ParamLimits

0xfa91,	// (0x0002a284) form_field_slider_pane_vc_t

0x7402,	// (0x00021bf5) input_focus_pane_cp9_vc_ParamLimits

0x7402,	// (0x00021bf5) input_focus_pane_cp9_vc

0xad20,	// (0x00025513) slider_cont_pane_vc_ParamLimits

0xad20,	// (0x00025513) slider_cont_pane_vc

0xad32,	// (0x00025525) list_form_graphic_pane_cp_vc_ParamLimits

0xad32,	// (0x00025525) list_form_graphic_pane_cp_vc

0x8fe4,	// (0x000237d7) form_field_popup_wide_pane_vc_g1

0xad47,	// (0x0002553a) form_field_popup_wide_pane_vc_t1_ParamLimits

0xad47,	// (0x0002553a) form_field_popup_wide_pane_vc_t1

0x79da,	// (0x000221cd) input_focus_pane_cp8_vc_ParamLimits

0x79da,	// (0x000221cd) input_focus_pane_cp8_vc

0xad8c,	// (0x0002557f) list_form_wide_pane_vc_ParamLimits

0xad8c,	// (0x0002557f) list_form_wide_pane_vc

0xad98,	// (0x0002558b) list_form_graphic_pane_vc_g1

0xada0,	// (0x00025593) list_form_graphic_pane_vc_t1_ParamLimits

0xada0,	// (0x00025593) list_form_graphic_pane_vc_t1

0x7187,	// (0x0002197a) list_highlight_pane_cp5_vc_ParamLimits

0x7187,	// (0x0002197a) list_highlight_pane_cp5_vc

0xadbc,	// (0x000255af) list_form_graphic_pane_vc_ParamLimits

0xadbc,	// (0x000255af) list_form_graphic_pane_vc

0x8fe4,	// (0x000237d7) form_field_popup_pane_vc_g1

0xadd2,	// (0x000255c5) form_field_popup_pane_vc_t1_ParamLimits

0xadd2,	// (0x000255c5) form_field_popup_pane_vc_t1

0x79da,	// (0x000221cd) input_focus_pane_cp7_vc_ParamLimits

0x79da,	// (0x000221cd) input_focus_pane_cp7_vc

0xade9,	// (0x000255dc) list_form_pane_vc_ParamLimits

0xade9,	// (0x000255dc) list_form_pane_vc

0xadf5,	// (0x000255e8) data_form_pane_vc_t1_ParamLimits

0xadf5,	// (0x000255e8) data_form_pane_vc_t1

0x7a41,	// (0x00022234) input_focus_pane_vc_g1

0x7a49,	// (0x0002223c) input_focus_pane_vc_g2

0x7a51,	// (0x00022244) input_focus_pane_vc_g3

0x7a59,	// (0x0002224c) input_focus_pane_vc_g4

0x7a61,	// (0x00022254) input_focus_pane_vc_g5

0x7a69,	// (0x0002225c) input_focus_pane_vc_g6

0x7a71,	// (0x00022264) input_focus_pane_vc_g7

0x7a79,	// (0x0002226c) input_focus_pane_vc_g8

0x7a81,	// (0x00022274) input_focus_pane_vc_g9

0x709d,	// (0x00021890) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x00029e85) input_focus_pane_vc_g

0x8fd8,	// (0x000237cb) data_form_pane_vc_ParamLimits

0x8fd8,	// (0x000237cb) data_form_pane_vc

0x8fe4,	// (0x000237d7) form_field_data_pane_vc_g1

0xae10,	// (0x00025603) form_field_data_pane_vc_t1_ParamLimits

0xae10,	// (0x00025603) form_field_data_pane_vc_t1

0x79da,	// (0x000221cd) input_focus_pane_vc_ParamLimits

0x79da,	// (0x000221cd) input_focus_pane_vc

0xae2a,	// (0x0002561d) button_value_adjust_pane_cp3_vc

0xae32,	// (0x00025625) button_value_adjust_pane_cp5_vc

0xae3a,	// (0x0002562d) form_field_data_pane_vc_ParamLimits

0xae3a,	// (0x0002562d) form_field_data_pane_vc

0xae51,	// (0x00025644) form_field_data_pane_vc_cp2

0xae59,	// (0x0002564c) form_field_data_wide_pane_vc_ParamLimits

0xae59,	// (0x0002564c) form_field_data_wide_pane_vc

0xae6f,	// (0x00025662) form_field_data_wide_pane_vc_cp2

0xae77,	// (0x0002566a) form_field_popup_pane_vc_ParamLimits

0xae77,	// (0x0002566a) form_field_popup_pane_vc

0xae8e,	// (0x00025681) form_field_popup_wide_pane_vc_ParamLimits

0xae8e,	// (0x00025681) form_field_popup_wide_pane_vc

0xaea4,	// (0x00025697) form_field_slider_pane_vc_ParamLimits

0xaea4,	// (0x00025697) form_field_slider_pane_vc

0xaeb7,	// (0x000256aa) form_field_slider_wide_pane_vc_ParamLimits

0xaeb7,	// (0x000256aa) form_field_slider_wide_pane_vc

0x2583,	// (0x0001cd76) grid_touch_1_pane_ParamLimits

0x2583,	// (0x0001cd76) grid_touch_1_pane

0x2597,	// (0x0001cd8a) grid_touch_2_pane_ParamLimits

0x2597,	// (0x0001cd8a) grid_touch_2_pane

0xaf8c,	// (0x0002577f) touch_pane_g1_ParamLimits

0xaf8c,	// (0x0002577f) touch_pane_g1

0xaeee,	// (0x000256e1) cell_app_pane_cp_wide_ParamLimits

0xaeee,	// (0x000256e1) cell_app_pane_cp_wide

0xaeff,	// (0x000256f2) grid_popup_fast_wide_pane_ParamLimits

0xaeff,	// (0x000256f2) grid_popup_fast_wide_pane

0xaf13,	// (0x00025706) scroll_pane_cp19_ParamLimits

0xaf13,	// (0x00025706) scroll_pane_cp19

0x70a7,	// (0x0002189a) bg_popup_window_pane_cp20

0xaf27,	// (0x0002571a) listscroll_popup_fast_wide_pane

0x7ba6,	// (0x00022399) grid_indicator_nsta_pane

0xaf2f,	// (0x00025722) clock_nsta_pane_g1

0xaf38,	// (0x0002572b) clock_nsta_pane_t1

0x25c1,	// (0x0001cdb4) cell_indicator_nsta_pane_ParamLimits

0x25c1,	// (0x0001cdb4) cell_indicator_nsta_pane

0xaf8c,	// (0x0002577f) cell_indicator_nsta_pane_g1

0x25de,	// (0x0001cdd1) cell_indicator_nsta_pane_g2

0x0001,

0xfaa2,	// (0x0002a295) cell_indicator_nsta_pane_g

0xafb0,	// (0x000257a3) clock_nsta_pane_cp

0xafb8,	// (0x000257ab) indicator_nsta_pane_cp

0xafc1,	// (0x000257b4) nsta_clock_indic_pane_g1

0x7250,	// (0x00021a43) grid_indicator_pane

0x7f75,	// (0x00022768) scroll_pane_cp29

0x54e1,	// (0x0001fcd4) indicator_nsta_pane_cp2_ParamLimits

0x54e1,	// (0x0001fcd4) indicator_nsta_pane_cp2

0x7187,	// (0x0002197a) main_apps_wheel_pane

0x9219,	// (0x00023a0c) form_midp_field_text_pane_ParamLimits

0x936a,	// (0x00023b5d) scroll_bar_cp050_ParamLimits

0xb02a,	// (0x0002581d) cell_indicator_pane_ParamLimits

0xb02a,	// (0x0002581d) cell_indicator_pane

0xb047,	// (0x0002583a) cell_indicator_pane_g1

0x25f4,	// (0x0001cde7) grid_wheel_folder_pane_ParamLimits

0x25f4,	// (0x0001cde7) grid_wheel_folder_pane

0x2602,	// (0x0001cdf5) list_wheel_apps_pane_ParamLimits

0x2602,	// (0x0001cdf5) list_wheel_apps_pane

0x2610,	// (0x0001ce03) main_apps_wheel_pane_g1_ParamLimits

0x2610,	// (0x0001ce03) main_apps_wheel_pane_g1

0x261c,	// (0x0001ce0f) main_apps_wheel_pane_g2_ParamLimits

0x261c,	// (0x0001ce0f) main_apps_wheel_pane_g2

0x0001,

0xfabe,	// (0x0002a2b1) main_apps_wheel_pane_g_ParamLimits

0xfabe,	// (0x0002a2b1) main_apps_wheel_pane_g

0x262a,	// (0x0001ce1d) main_apps_wheel_pane_t1_ParamLimits

0x262a,	// (0x0001ce1d) main_apps_wheel_pane_t1

0x263e,	// (0x0001ce31) list_wheel_apps_pane_g1

0x2646,	// (0x0001ce39) list_wheel_apps_pane_g2

0x264e,	// (0x0001ce41) list_wheel_apps_pane_g3

0x2656,	// (0x0001ce49) list_wheel_apps_pane_g4

0x2660,	// (0x0001ce53) list_wheel_apps_pane_g5

0x0004,

0xfac3,	// (0x0002a2b6) list_wheel_apps_pane_g

0x84c2,	// (0x00022cb5) navi_icon_text_pane

0x1b90,	// (0x0001c383) aid_fill_nsta

0xb10e,	// (0x00025901) navi_icon_text_pane_g1

0xb11a,	// (0x0002590d) navi_icon_text_pane_t1

0x835e,	// (0x00022b51) list_set_graphic_pane_t1_ParamLimits

0x835e,	// (0x00022b51) list_set_graphic_pane_t1

0x9aac,	// (0x0002429f) popup_midp_note_alarm_window_t6_ParamLimits

0x9aac,	// (0x0002429f) popup_midp_note_alarm_window_t6

0x9abe,	// (0x000242b1) popup_midp_note_alarm_window_t7_ParamLimits

0x9abe,	// (0x000242b1) popup_midp_note_alarm_window_t7

0x9ad0,	// (0x000242c3) popup_midp_note_alarm_window_t8_ParamLimits

0x9ad0,	// (0x000242c3) popup_midp_note_alarm_window_t8

0x9ae2,	// (0x000242d5) popup_midp_note_alarm_window_t9_ParamLimits

0x9ae2,	// (0x000242d5) popup_midp_note_alarm_window_t9

0x9af4,	// (0x000242e7) popup_midp_note_alarm_window_t10_ParamLimits

0x9af4,	// (0x000242e7) popup_midp_note_alarm_window_t10

0x9b06,	// (0x000242f9) popup_midp_note_alarm_window_t11_ParamLimits

0x9b06,	// (0x000242f9) popup_midp_note_alarm_window_t11

0x9b18,	// (0x0002430b) scroll_pane_cp17_ParamLimits

0x9b18,	// (0x0002430b) scroll_pane_cp17

0x5eca,	// (0x000206bd) volume_small_pane_cp_g1

0x61d4,	// (0x000209c7) volume_small_pane_cp_g2

0x61dd,	// (0x000209d0) volume_small_pane_cp_g3

0x61e6,	// (0x000209d9) volume_small_pane_cp_g4

0x61ef,	// (0x000209e2) volume_small_pane_cp_g5

0x61f8,	// (0x000209eb) volume_small_pane_cp_g6

0x6201,	// (0x000209f4) volume_small_pane_cp_g7

0x620a,	// (0x000209fd) volume_small_pane_cp_g8

0x6213,	// (0x00020a06) volume_small_pane_cp_g9

0x621c,	// (0x00020a0f) volume_small_pane_cp_g10

0x8717,	// (0x00022f0a) midp_ticker_pane_g1_ParamLimits

0x8723,	// (0x00022f16) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x00029f51) midp_ticker_pane_g_ParamLimits

0x872f,	// (0x00022f22) midp_ticker_pane_t1_ParamLimits

0x1bb4,	// (0x0001c3a7) aid_fill_nsta_2

0x9356,	// (0x00023b49) list_form2_midp_pane

0xa472,	// (0x00024c65) midp_editing_number_pane_ParamLimits

0xa481,	// (0x00024c74) midp_ticker_pane_ParamLimits

0xb12c,	// (0x0002591f) form2_midp_field_pane

0xb150,	// (0x00025943) scroll_pane_cp51

0xb170,	// (0x00025963) form2_midp_button_pane_ParamLimits

0xb170,	// (0x00025963) form2_midp_button_pane

0xb182,	// (0x00025975) form2_midp_content_pane_ParamLimits

0xb182,	// (0x00025975) form2_midp_content_pane

0xb19c,	// (0x0002598f) form2_midp_field_choice_group_pane

0xb1a4,	// (0x00025997) form2_midp_field_pane_g1

0xb1ac,	// (0x0002599f) form2_midp_field_pane_g2

0xb1b4,	// (0x000259a7) form2_midp_field_pane_g3

0xb1bc,	// (0x000259af) form2_midp_field_pane_g4

0x0003,

0xfae8,	// (0x0002a2db) form2_midp_field_pane_g

0xb1c4,	// (0x000259b7) form2_midp_gauge_slider_pane

0xb1cc,	// (0x000259bf) form2_midp_gauge_wait_pane

0xb1d4,	// (0x000259c7) form2_midp_image_pane_ParamLimits

0xb1d4,	// (0x000259c7) form2_midp_image_pane

0xb1ef,	// (0x000259e2) form2_midp_label_pane_ParamLimits

0xb1ef,	// (0x000259e2) form2_midp_label_pane

0x2693,	// (0x0001ce86) form2_midp_label_pane_cp_ParamLimits

0x2693,	// (0x0001ce86) form2_midp_label_pane_cp

0xb229,	// (0x00025a1c) form2_midp_string_pane_ParamLimits

0xb229,	// (0x00025a1c) form2_midp_string_pane

0x49da,	// (0x0001f1cd) form2_midp_text_pane_ParamLimits

0x49da,	// (0x0001f1cd) form2_midp_text_pane

0xb23b,	// (0x00025a2e) form2_midp_time_pane

0xb24b,	// (0x00025a3e) input_focus_pane_cp51_ParamLimits

0xb24b,	// (0x00025a3e) input_focus_pane_cp51

0xb263,	// (0x00025a56) form2_midp_label_pane_t1_ParamLimits

0xb263,	// (0x00025a56) form2_midp_label_pane_t1

0x49f3,	// (0x0001f1e6) form2_mdip_text_pane_t1_ParamLimits

0x49f3,	// (0x0001f1e6) form2_mdip_text_pane_t1

0x4a10,	// (0x0001f203) form2_midp_time_pane_t1

0xb2ab,	// (0x00025a9e) form2_midp_gauge_slider_pane_t1

0x26b4,	// (0x0001cea7) form2_midp_gauge_slider_pane_t2

0x26c8,	// (0x0001cebb) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf1,	// (0x0002a2e4) form2_midp_gauge_slider_pane_t

0xb2e1,	// (0x00025ad4) form2_midp_slider_pane

0xb2ed,	// (0x00025ae0) form2_midp_gauge_wait_pane_t1

0xb2fb,	// (0x00025aee) form2_midp_wait_pane_ParamLimits

0xb2fb,	// (0x00025aee) form2_midp_wait_pane

0x26dc,	// (0x0001cecf) list_single_2graphic_pane_cp4_ParamLimits

0x26dc,	// (0x0001cecf) list_single_2graphic_pane_cp4

0x1fcd,	// (0x0001c7c0) list_single_midp_graphic_pane_cp_ParamLimits

0x1fcd,	// (0x0001c7c0) list_single_midp_graphic_pane_cp

0x70a7,	// (0x0002189a) list_highlight_pane_cp20

0xb355,	// (0x00025b48) list_single_2graphic_pane_g1_cp4

0xa907,	// (0x000250fa) list_single_2graphic_pane_g2_cp4

0xb35d,	// (0x00025b50) list_single_2graphic_pane_t1_cp4

0x7187,	// (0x0002197a) list_highlight_pane_cp21

0xb36c,	// (0x00025b5f) list_single_midp_graphic_pane_g4_cp

0xb37b,	// (0x00025b6e) list_single_midp_graphic_pane_t1_cp

0x26f3,	// (0x0001cee6) form2_mdip_string_pane_t1_ParamLimits

0x26f3,	// (0x0001cee6) form2_mdip_string_pane_t1

0x70a7,	// (0x0002189a) bg_wml_button_pane_cp2

0x709d,	// (0x00021890) form2_midp_image_pane_g1

0x40d1,	// (0x0001e8c4) list_double_large_graphic_pane_g5_ParamLimits

0x40d1,	// (0x0001e8c4) list_double_large_graphic_pane_g5

0x8980,	// (0x00023173) midp_form_pane_ParamLimits

0x7187,	// (0x0002197a) main_apps_wheel_pane_ParamLimits

0xde19,	// (0x0002860c) popup_preview_window_ParamLimits

0xde19,	// (0x0002860c) popup_preview_window

0x5d49,	// (0x0002053c) popup_touch_info_window_ParamLimits

0x5d49,	// (0x0002053c) popup_touch_info_window

0x5d67,	// (0x0002055a) popup_touch_menu_window_ParamLimits

0x5d67,	// (0x0002055a) popup_touch_menu_window

0x7093,	// (0x00021886) bg_popup_sub_pane_cp6

0xb4ca,	// (0x00025cbd) list_touch_menu_pane

0xb4d2,	// (0x00025cc5) list_single_touch_menu_pane_ParamLimits

0xb4d2,	// (0x00025cc5) list_single_touch_menu_pane

0xb4e6,	// (0x00025cd9) list_single_touch_menu_pane_t1

0x7187,	// (0x0002197a) bg_popup_sub_pane_cp7_ParamLimits

0x7187,	// (0x0002197a) bg_popup_sub_pane_cp7

0xb4f4,	// (0x00025ce7) heading_sub_pane

0xb4fc,	// (0x00025cef) list_touch_info_pane_ParamLimits

0xb4fc,	// (0x00025cef) list_touch_info_pane

0xb50b,	// (0x00025cfe) list_single_touch_info_pane_ParamLimits

0xb50b,	// (0x00025cfe) list_single_touch_info_pane

0xb51d,	// (0x00025d10) list_single_touch_info_pane_t1

0xb52b,	// (0x00025d1e) list_single_touch_info_pane_t2

0x0001,

0xfaff,	// (0x0002a2f2) list_single_touch_info_pane_t

0x8644,	// (0x00022e37) bg_popup_heading_pane_cp

0xb539,	// (0x00025d2c) heading_sub_pane_t1

0x8f72,	// (0x00023765) bg_popup_preview_window_pane_cp_ParamLimits

0x8f72,	// (0x00023765) bg_popup_preview_window_pane_cp

0xb4f4,	// (0x00025ce7) heading_preview_pane

0xb4fc,	// (0x00025cef) list_preview_pane_ParamLimits

0xb4fc,	// (0x00025cef) list_preview_pane

0xb547,	// (0x00025d3a) popup_preview_window_g1

0xb50b,	// (0x00025cfe) list_single_preview_pane_ParamLimits

0xb50b,	// (0x00025cfe) list_single_preview_pane

0xb54f,	// (0x00025d42) list_single_preview_pane_g1

0xb557,	// (0x00025d4a) list_single_preview_pane_t1

0xb51d,	// (0x00025d10) list_single_preview_pane_t2

0x0001,

0xfb04,	// (0x0002a2f7) list_single_preview_pane_t

0xb565,	// (0x00025d58) bg_popup_heading_pane_cp2_ParamLimits

0xb565,	// (0x00025d58) bg_popup_heading_pane_cp2

0xb57b,	// (0x00025d6e) heading_preview_pane_g1

0xb583,	// (0x00025d76) heading_preview_pane_t1_ParamLimits

0xb583,	// (0x00025d76) heading_preview_pane_t1

0x7273,	// (0x00021a66) soft_indicator_pane_t1_ParamLimits

0x794d,	// (0x00022140) scroll_pane_ParamLimits

0x7e71,	// (0x00022664) scroll_sc2_left_pane

0x7e7a,	// (0x0002266d) scroll_sc2_right_pane

0x7e99,	// (0x0002268c) scroll_bg_pane_g1_ParamLimits

0x7eae,	// (0x000226a1) scroll_bg_pane_g2_ParamLimits

0x7ec6,	// (0x000226b9) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x00029edc) scroll_bg_pane_g_ParamLimits

0x7e99,	// (0x0002268c) scroll_handle_pane_g1_ParamLimits

0x7ee8,	// (0x000226db) scroll_handle_pane_g2_ParamLimits

0x7ec6,	// (0x000226b9) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x00029ee3) scroll_handle_pane_g_ParamLimits

0x5823,	// (0x00020016) popup_choice_list_window_ParamLimits

0x5823,	// (0x00020016) popup_choice_list_window

0x8dcc,	// (0x000235bf) choice_list_pane

0x8e4e,	// (0x00023641) cell_toolbar_pane_t1

0x8e76,	// (0x00023669) toolbar_button_pane_ParamLimits

0x9fca,	// (0x000247bd) ai_gene_pane_1_t2_ParamLimits

0x9fca,	// (0x000247bd) ai_gene_pane_1_t2

0x0001,

0xf90c,	// (0x0002a0ff) ai_gene_pane_1_t_ParamLimits

0xf90c,	// (0x0002a0ff) ai_gene_pane_1_t

0xb5a0,	// (0x00025d93) scroll_sc2_left_pane_g1

0xb5a0,	// (0x00025d93) scroll_sc2_right_pane_g1

0x8980,	// (0x00023173) bg_popup_sub_pane_cp10

0xb5aa,	// (0x00025d9d) list_choice_list_pane

0xb5c1,	// (0x00025db4) list_single_choice_list_pane_ParamLimits

0xb5c1,	// (0x00025db4) list_single_choice_list_pane

0x7b6f,	// (0x00022362) list_single_choice_list_pane_g1

0x7b77,	// (0x0002236a) list_single_choice_list_pane_t1_ParamLimits

0x7b77,	// (0x0002236a) list_single_choice_list_pane_t1

0xb5d4,	// (0x00025dc7) choice_list_pane_g1

0xb5dc,	// (0x00025dcf) choice_list_pane_t1

0x7093,	// (0x00021886) input_focus_pane_cp11

0x7d4e,	// (0x00022541) title_pane_stacon_g2_ParamLimits

0x7d4e,	// (0x00022541) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x00029ec2) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00029ec2) title_pane_stacon_g

0x8644,	// (0x00022e37) cursor_press_pane

0xdad8,	// (0x000282cb) popup_fep_hwr_window_ParamLimits

0xdad8,	// (0x000282cb) popup_fep_hwr_window

0x5941,	// (0x00020134) popup_fep_vkb_window_ParamLimits

0x5941,	// (0x00020134) popup_fep_vkb_window

0xb5ea,	// (0x00025ddd) cursor_press_pane_g1

0x0002,

0xfb2d,	// (0x0002a320) fep_vkb_side_pane_g_ParamLimits

0x625e,	// (0x00020a51) fep_hwr_candidate_pane_ParamLimits

0x625e,	// (0x00020a51) fep_hwr_candidate_pane

0x6288,	// (0x00020a7b) fep_hwr_side_pane_ParamLimits

0x6288,	// (0x00020a7b) fep_hwr_side_pane

0x62a8,	// (0x00020a9b) fep_hwr_top_pane_ParamLimits

0x62a8,	// (0x00020a9b) fep_hwr_top_pane

0x62c0,	// (0x00020ab3) fep_hwr_write_pane_ParamLimits

0x62c0,	// (0x00020ab3) fep_hwr_write_pane

0xfb2d,	// (0x0002a320) fep_vkb_side_pane_g

0xb5f2,	// (0x00025de5) fep_hwr_top_pane_g1

0xb604,	// (0x00025df7) fep_hwr_top_pane_g2

0x62ec,	// (0x00020adf) fep_hwr_top_pane_g3

0x0002,

0xfb09,	// (0x0002a2fc) fep_hwr_top_pane_g

0x6301,	// (0x00020af4) fep_hwr_top_text_pane

0x803b,	// (0x0002282e) fep_hwr_top_text_pane_g1

0xb63a,	// (0x00025e2d) fep_hwr_top_text_pane_t1

0x63f7,	// (0x00020bea) fep_hwr_candidate_pane_g1

0xb894,	// (0x00026087) fep_vkb_keypad_pane_g3_ParamLimits

0xb894,	// (0x00026087) fep_vkb_keypad_pane_g3

0xb8bc,	// (0x000260af) fep_vkb_keypad_pane_g4_ParamLimits

0xb8bc,	// (0x000260af) fep_vkb_keypad_pane_g4

0xb92b,	// (0x0002611e) fep_vkb_bottom_pane_g2_ParamLimits

0xb92b,	// (0x0002611e) fep_vkb_bottom_pane_g2

0x0001,

0xfb34,	// (0x0002a327) fep_vkb_bottom_pane_g_ParamLimits

0xfb34,	// (0x0002a327) fep_vkb_bottom_pane_g

0xb5a0,	// (0x00025d93) cell_vkb_side_pane_g2

0x0001,

0xfb3e,	// (0x0002a331) cell_vkb_side_pane_g

0xb9b6,	// (0x000261a9) cell_vkb_side_pane_t1

0xb9c4,	// (0x000261b7) cell_vkb_side_pane_t1_copy1

0xb5a0,	// (0x00025d93) bg_fep_vkb_candidate_pane_g2

0xbaf6,	// (0x000262e9) cell_vkb_candidate_pane_ParamLimits

0xb648,	// (0x00025e3b) aid_size_cell_vkb_ParamLimits

0xb648,	// (0x00025e3b) aid_size_cell_vkb

0xbaf6,	// (0x000262e9) cell_vkb_candidate_pane

0x6411,	// (0x00020c04) bg_popup_fep_shadow_pane_g1

0xb6d6,	// (0x00025ec9) fep_vkb_bottom_pane_ParamLimits

0xb6d6,	// (0x00025ec9) fep_vkb_bottom_pane

0xb713,	// (0x00025f06) fep_vkb_candidate_pane_ParamLimits

0xb713,	// (0x00025f06) fep_vkb_candidate_pane

0xb72f,	// (0x00025f22) fep_vkb_keypad_pane_ParamLimits

0xb72f,	// (0x00025f22) fep_vkb_keypad_pane

0xb775,	// (0x00025f68) fep_vkb_side_pane_ParamLimits

0xb775,	// (0x00025f68) fep_vkb_side_pane

0xb7b1,	// (0x00025fa4) fep_vkb_top_pane_ParamLimits

0xb7b1,	// (0x00025fa4) fep_vkb_top_pane

0xb7ed,	// (0x00025fe0) fep_vkb_top_pane_g1_ParamLimits

0xb7ed,	// (0x00025fe0) fep_vkb_top_pane_g1

0xb7fc,	// (0x00025fef) fep_vkb_top_pane_g2_ParamLimits

0xb7fc,	// (0x00025fef) fep_vkb_top_pane_g2

0xb80b,	// (0x00025ffe) fep_vkb_top_pane_g3_ParamLimits

0xb80b,	// (0x00025ffe) fep_vkb_top_pane_g3

0x0003,

0xfb24,	// (0x0002a317) fep_vkb_top_pane_g_ParamLimits

0xfb24,	// (0x0002a317) fep_vkb_top_pane_g

0xb829,	// (0x0002601c) fep_vkb_top_text_pane_ParamLimits

0xb829,	// (0x0002601c) fep_vkb_top_text_pane

0x278b,	// (0x0001cf7e) fep_vkb_side_pane_g1_ParamLimits

0x278b,	// (0x0001cf7e) fep_vkb_side_pane_g1

0xb883,	// (0x00026076) grid_vkb_side_pane_ParamLimits

0xb883,	// (0x00026076) grid_vkb_side_pane

0x6419,	// (0x00020c0c) bg_popup_fep_shadow_pane_g2

0x6422,	// (0x00020c15) bg_popup_fep_shadow_pane_g3

0x642a,	// (0x00020c1d) bg_popup_fep_shadow_pane_g4

0x6433,	// (0x00020c26) bg_popup_fep_shadow_pane_g5

0x643d,	// (0x00020c30) bg_popup_fep_shadow_pane_g6

0x6445,	// (0x00020c38) bg_popup_fep_shadow_pane_g7

0x7a61,	// (0x00022254) bg_popup_fep_shadow_pane_g8

0xb8da,	// (0x000260cd) grid_vkb_keypad_number_pane_ParamLimits

0xb8da,	// (0x000260cd) grid_vkb_keypad_number_pane

0xb8ea,	// (0x000260dd) grid_vkb_keypad_pane_ParamLimits

0xb8ea,	// (0x000260dd) grid_vkb_keypad_pane

0xb910,	// (0x00026103) fep_vkb_bottom_pane_g1_ParamLimits

0xb910,	// (0x00026103) fep_vkb_bottom_pane_g1

0xb939,	// (0x0002612c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb939,	// (0x0002612c) grid_vkb_keypad_bottom_left_pane

0xb94e,	// (0x00026141) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb94e,	// (0x00026141) grid_vkb_keypad_bottom_right_pane

0xb963,	// (0x00026156) fep_vkb_top_text_pane_g1

0x27d2,	// (0x0001cfc5) fep_vkb_top_text_pane_t1

0x27e4,	// (0x0001cfd7) cell_vkb_side_pane_ParamLimits

0x27e4,	// (0x0001cfd7) cell_vkb_side_pane

0xb5a0,	// (0x00025d93) cell_vkb_side_pane_g1

0xb9d2,	// (0x000261c5) cell_vkb_keypad_pane_ParamLimits

0xb9d2,	// (0x000261c5) cell_vkb_keypad_pane

0xba4d,	// (0x00026240) cell_vkb_keypad_pane_g1

0x0008,

0xfb51,	// (0x0002a344) bg_popup_fep_shadow_pane_g

0xb5a0,	// (0x00025d93) cell_hwr_side_pane_g1

0xb5a0,	// (0x00025d93) cell_hwr_side_pane_g2

0xba57,	// (0x0002624a) cell_vkb_keypad_pane_t1

0x27fa,	// (0x0001cfed) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x27fa,	// (0x0001cfed) cell_vkb_keypad_bottom_left_pane

0x280f,	// (0x0001d002) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x280f,	// (0x0001d002) cell_vkb_keypad_bottom_right_pane

0xb5a0,	// (0x00025d93) cell_vkb_keypad_bottom_left_pane_g1

0xb5a0,	// (0x00025d93) cell_vkb_keypad_bottom_right_pane_g1

0xbabb,	// (0x000262ae) cell_vkb_keypad_number_pane_ParamLimits

0xbabb,	// (0x000262ae) cell_vkb_keypad_number_pane

0xbada,	// (0x000262cd) cell_vkb_keypad_number_pane_g1

0xbae4,	// (0x000262d7) cell_vkb_keypad_number_pane_g2

0xbaed,	// (0x000262e0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb43,	// (0x0002a336) cell_vkb_keypad_number_pane_g

0xba57,	// (0x0002624a) cell_vkb_keypad_number_pane_t1

0xbb13,	// (0x00026306) fep_vkb_candidate_pane_g1

0x0001,

0xfb3e,	// (0x0002a331) cell_hwr_side_pane_g

0xbb2c,	// (0x0002631f) cell_hwr_side_pane_t1

0x6457,	// (0x00020c4a) cell_hwr_side_pane_t1_copy1

0xb81b,	// (0x0002600e) cell_hwr_candidate_pane_g1

0x6465,	// (0x00020c58) cell_hwr_candidate_pane_t1

0xb5a0,	// (0x00025d93) cell_vkb_candidate_pane_g2

0xbb70,	// (0x00026363) cell_vkb_candidate_pane_t1

0x6225,	// (0x00020a18) bg_popup_fep_shadow_pane_ParamLimits

0x6225,	// (0x00020a18) bg_popup_fep_shadow_pane

0x001f,	// (0x0001a812) bg_fep_hwr_top_pane_g4

0xb616,	// (0x00025e09) bg_hwr_side_pane_g1_ParamLimits

0xb616,	// (0x00025e09) bg_hwr_side_pane_g1

0xe294,	// (0x00028a87) cell_hwr_side_pane_ParamLimits

0xe294,	// (0x00028a87) cell_hwr_side_pane

0x6378,	// (0x00020b6b) fep_hwr_write_pane_g1_ParamLimits

0x6378,	// (0x00020b6b) fep_hwr_write_pane_g1

0x6385,	// (0x00020b78) fep_hwr_write_pane_g2_ParamLimits

0x6385,	// (0x00020b78) fep_hwr_write_pane_g2

0x6392,	// (0x00020b85) fep_hwr_write_pane_g3_ParamLimits

0x6392,	// (0x00020b85) fep_hwr_write_pane_g3

0xe2b4,	// (0x00028aa7) fep_hwr_write_pane_g4_ParamLimits

0xe2b4,	// (0x00028aa7) fep_hwr_write_pane_g4

0x0005,

0xfb10,	// (0x0002a303) fep_hwr_write_pane_g_ParamLimits

0xfb10,	// (0x0002a303) fep_hwr_write_pane_g

0x001f,	// (0x0001a812) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x001f,	// (0x0001a812) bg_fep_hwr_candidate_pane_g2

0x63b5,	// (0x00020ba8) cell_hwr_candidate_pane_ParamLimits

0x63b5,	// (0x00020ba8) cell_hwr_candidate_pane

0x63f7,	// (0x00020bea) fep_hwr_candidate_pane_g1_ParamLimits

0xb676,	// (0x00025e69) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb676,	// (0x00025e69) bg_popup_fep_shadow_pane_cp2

0xb81b,	// (0x0002600e) fep_vkb_top_pane_g4_ParamLimits

0xb81b,	// (0x0002600e) fep_vkb_top_pane_g4

0xb861,	// (0x00026054) fep_vkb_side_pane_g2_ParamLimits

0xb861,	// (0x00026054) fep_vkb_side_pane_g2

0xd308,	// (0x00027afb) list_setting_pane_t4_ParamLimits

0xd308,	// (0x00027afb) list_setting_pane_t4

0xd3a2,	// (0x00027b95) list_setting_number_pane_t5_ParamLimits

0xd3a2,	// (0x00027b95) list_setting_number_pane_t5

0x8082,	// (0x00022875) list_double_heading_pane_cp2_ParamLimits

0x8082,	// (0x00022875) list_double_heading_pane_cp2

0x79f4,	// (0x000221e7) list_double_heading_pane_g1_cp2_ParamLimits

0x79f4,	// (0x000221e7) list_double_heading_pane_g1_cp2

0x7a00,	// (0x000221f3) list_double_heading_pane_g2_cp2_ParamLimits

0x7a00,	// (0x000221f3) list_double_heading_pane_g2_cp2

0xbb7e,	// (0x00026371) list_double_heading_pane_t1_cp2_ParamLimits

0xbb7e,	// (0x00026371) list_double_heading_pane_t1_cp2

0xbb94,	// (0x00026387) list_double_heading_pane_t2_cp2_ParamLimits

0xbb94,	// (0x00026387) list_double_heading_pane_t2_cp2

0x707b,	// (0x0002186e) aid_value_unit2

0x5083,	// (0x0001f876) popup_preview_fixed_window

0x7410,	// (0x00021c03) bg_popup_preview_window_pane_cp02

0xbba6,	// (0x00026399) list_preview_fixed_pane

0xbbec,	// (0x000263df) list_empty_pane_fp_ParamLimits

0xbbec,	// (0x000263df) list_empty_pane_fp

0xbbec,	// (0x000263df) list_single_cale_day_pane_fp_ParamLimits

0xbbec,	// (0x000263df) list_single_cale_day_pane_fp

0xbbec,	// (0x000263df) list_single_graphic_heading_pane_fp_ParamLimits

0xbbec,	// (0x000263df) list_single_graphic_heading_pane_fp

0xbbec,	// (0x000263df) list_single_graphic_pane_fp_ParamLimits

0xbbec,	// (0x000263df) list_single_graphic_pane_fp

0xbbec,	// (0x000263df) list_single_heading_pane_fp_ParamLimits

0xbbec,	// (0x000263df) list_single_heading_pane_fp

0xbbec,	// (0x000263df) list_single_pane_fp_ParamLimits

0xbbec,	// (0x000263df) list_single_pane_fp

0xbc03,	// (0x000263f6) list_single_pane_fp_g1_ParamLimits

0xbc03,	// (0x000263f6) list_single_pane_fp_g1

0x4069,	// (0x0001e85c) list_single_pane_fp_g2_ParamLimits

0x4069,	// (0x0001e85c) list_single_pane_fp_g2

0x4a23,	// (0x0001f216) list_single_pane_fp_g3_ParamLimits

0x4a23,	// (0x0001f216) list_single_pane_fp_g3

0xbc0f,	// (0x00026402) list_single_pane_fp_g4_ParamLimits

0xbc0f,	// (0x00026402) list_single_pane_fp_g4

0x0003,

0xfb72,	// (0x0002a365) list_single_pane_fp_g_ParamLimits

0xfb72,	// (0x0002a365) list_single_pane_fp_g

0x4a37,	// (0x0001f22a) list_single_pane_fp_t1_ParamLimits

0x4a37,	// (0x0001f22a) list_single_pane_fp_t1

0x4a4e,	// (0x0001f241) list_single_graphic_pane_fp_g1_ParamLimits

0x4a4e,	// (0x0001f241) list_single_graphic_pane_fp_g1

0xbc03,	// (0x000263f6) list_single_graphic_pane_fp_g2_ParamLimits

0xbc03,	// (0x000263f6) list_single_graphic_pane_fp_g2

0x4069,	// (0x0001e85c) list_single_graphic_pane_fp_g3_ParamLimits

0x4069,	// (0x0001e85c) list_single_graphic_pane_fp_g3

0x4a23,	// (0x0001f216) list_single_graphic_pane_fp_g4_ParamLimits

0x4a23,	// (0x0001f216) list_single_graphic_pane_fp_g4

0xbc0f,	// (0x00026402) list_single_graphic_pane_fp_g5_ParamLimits

0xbc0f,	// (0x00026402) list_single_graphic_pane_fp_g5

0x0004,

0xfb7b,	// (0x0002a36e) list_single_graphic_pane_fp_g_ParamLimits

0xfb7b,	// (0x0002a36e) list_single_graphic_pane_fp_g

0x4a5a,	// (0x0001f24d) list_single_graphic_pane_fp_t1_ParamLimits

0x4a5a,	// (0x0001f24d) list_single_graphic_pane_fp_t1

0x4a4e,	// (0x0001f241) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4a4e,	// (0x0001f241) list_single_graphic_heading_pane_fp_g1

0xbc03,	// (0x000263f6) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbc03,	// (0x000263f6) list_single_graphic_heading_pane_fp_g2

0x4069,	// (0x0001e85c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4069,	// (0x0001e85c) list_single_graphic_heading_pane_fp_g3

0x4a23,	// (0x0001f216) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4a23,	// (0x0001f216) list_single_graphic_heading_pane_fp_g4

0xbc0f,	// (0x00026402) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbc0f,	// (0x00026402) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x0002a36e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x0002a36e) list_single_graphic_heading_pane_fp_g

0x4a70,	// (0x0001f263) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4a70,	// (0x0001f263) list_single_graphic_heading_pane_fp_t1

0x4a86,	// (0x0001f279) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4a86,	// (0x0001f279) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb86,	// (0x0002a379) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb86,	// (0x0002a379) list_single_graphic_heading_pane_fp_t

0x4a98,	// (0x0001f28b) list_single_cale_day_pane_fp_g1_ParamLimits

0x4a98,	// (0x0001f28b) list_single_cale_day_pane_fp_g1

0xbc1b,	// (0x0002640e) list_single_cale_day_pane_fp_g2_ParamLimits

0xbc1b,	// (0x0002640e) list_single_cale_day_pane_fp_g2

0x4ad0,	// (0x0001f2c3) list_single_cale_day_pane_fp_g3_ParamLimits

0x4ad0,	// (0x0001f2c3) list_single_cale_day_pane_fp_g3

0x4af8,	// (0x0001f2eb) list_single_cale_day_pane_fp_g4_ParamLimits

0x4af8,	// (0x0001f2eb) list_single_cale_day_pane_fp_g4

0x4b1c,	// (0x0001f30f) list_single_cale_day_pane_fp_g5_ParamLimits

0x4b1c,	// (0x0001f30f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002a37e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002a37e) list_single_cale_day_pane_fp_g

0x4b40,	// (0x0001f333) list_single_cale_day_pane_fp_t1_ParamLimits

0x4b40,	// (0x0001f333) list_single_cale_day_pane_fp_t1

0x4b66,	// (0x0001f359) list_single_cale_day_pane_fp_t2_ParamLimits

0x4b66,	// (0x0001f359) list_single_cale_day_pane_fp_t2

0x4b7f,	// (0x0001f372) list_single_cale_day_pane_fp_t3_ParamLimits

0x4b7f,	// (0x0001f372) list_single_cale_day_pane_fp_t3

0x0002,

0xfb96,	// (0x0002a389) list_single_cale_day_pane_fp_t_ParamLimits

0xfb96,	// (0x0002a389) list_single_cale_day_pane_fp_t

0xbc03,	// (0x000263f6) list_empty_pane_fp_g1_ParamLimits

0xbc03,	// (0x000263f6) list_empty_pane_fp_g1

0x4b98,	// (0x0001f38b) list_empty_pane_fp_t1

0x4ba6,	// (0x0001f399) list_empty_pane_fp_t2

0x0001,

0xfb9d,	// (0x0002a390) list_empty_pane_fp_t

0xbc03,	// (0x000263f6) list_single_heading_pane_fp_g1_ParamLimits

0xbc03,	// (0x000263f6) list_single_heading_pane_fp_g1

0x4069,	// (0x0001e85c) list_single_heading_pane_fp_g2_ParamLimits

0x4069,	// (0x0001e85c) list_single_heading_pane_fp_g2

0x4a23,	// (0x0001f216) list_single_heading_pane_fp_g3_ParamLimits

0x4a23,	// (0x0001f216) list_single_heading_pane_fp_g3

0x0002,

0xfba2,	// (0x0002a395) list_single_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0002a395) list_single_heading_pane_fp_g

0x4bb4,	// (0x0001f3a7) list_single_heading_pane_fp_t1_ParamLimits

0x4bb4,	// (0x0001f3a7) list_single_heading_pane_fp_t1

0x4bc6,	// (0x0001f3b9) list_single_heading_pane_fp_t2_ParamLimits

0x4bc6,	// (0x0001f3b9) list_single_heading_pane_fp_t2

0x0001,

0xfba9,	// (0x0002a39c) list_single_heading_pane_fp_t_ParamLimits

0xfba9,	// (0x0002a39c) list_single_heading_pane_fp_t

0x7be5,	// (0x000223d8) aid_size_cell_fast

0x7380,	// (0x00021b73) soft_indicator_pane_cp1_t1

0x7c22,	// (0x00022415) cell_app_pane_cp2_ParamLimits

0x7c22,	// (0x00022415) cell_app_pane_cp2

0x6247,	// (0x00020a3a) fep_hwr_candidate_drop_down_list_pane

0x002d,	// (0x0001a820) fep_hwr_candidate_pane_g3_ParamLimits

0x002d,	// (0x0001a820) fep_hwr_candidate_pane_g3

0x003a,	// (0x0001a82d) fep_hwr_candidate_pane_g4_ParamLimits

0x003a,	// (0x0001a82d) fep_hwr_candidate_pane_g4

0x0002,

0xfb1d,	// (0x0002a310) fep_hwr_candidate_pane_g_ParamLimits

0xfb1d,	// (0x0002a310) fep_hwr_candidate_pane_g

0xb702,	// (0x00025ef5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb702,	// (0x00025ef5) fep_vkb_candidate_drop_down_list_pane

0xbb1b,	// (0x0002630e) fep_vkb_candidate_pane_g3

0xbb23,	// (0x00026316) fep_vkb_candidate_pane_g4

0x0002,

0xfb4a,	// (0x0002a33d) fep_vkb_candidate_pane_g

0xb81b,	// (0x0002600e) cell_hwr_candidate_pane_g1_ParamLimits

0xbc9d,	// (0x00026490) cell_hwr_candidate_pane_g3_ParamLimits

0xbc9d,	// (0x00026490) cell_hwr_candidate_pane_g3

0xbcbe,	// (0x000264b1) cell_hwr_candidate_pane_g4_ParamLimits

0xbcbe,	// (0x000264b1) cell_hwr_candidate_pane_g4

0x0002,

0xfb64,	// (0x0002a357) cell_hwr_candidate_pane_g_ParamLimits

0xfb64,	// (0x0002a357) cell_hwr_candidate_pane_g

0xbb3a,	// (0x0002632d) cell_vkb_candidate_pane_g3_ParamLimits

0xbb3a,	// (0x0002632d) cell_vkb_candidate_pane_g3

0xbb55,	// (0x00026348) cell_vkb_candidate_pane_g4_ParamLimits

0xbb55,	// (0x00026348) cell_vkb_candidate_pane_g4

0xbc27,	// (0x0002641a) cell_app_pane_cp2_g1_ParamLimits

0xbc27,	// (0x0002641a) cell_app_pane_cp2_g1

0xbc45,	// (0x00026438) cell_app_pane_cp2_g2_ParamLimits

0xbc45,	// (0x00026438) cell_app_pane_cp2_g2

0x0001,

0xfbae,	// (0x0002a3a1) cell_app_pane_cp2_g_ParamLimits

0xfbae,	// (0x0002a3a1) cell_app_pane_cp2_g

0xbc51,	// (0x00026444) cell_app_pane_cp2_t1_ParamLimits

0xbc51,	// (0x00026444) cell_app_pane_cp2_t1

0x79da,	// (0x000221cd) grid_highlight_pane_cp1_ParamLimits

0x79da,	// (0x000221cd) grid_highlight_pane_cp1

0x6483,	// (0x00020c76) cell_hwr_candidate_pane_cp1_ParamLimits

0x6483,	// (0x00020c76) cell_hwr_candidate_pane_cp1

0xb81b,	// (0x0002600e) fep_hwr_candidate_drop_down_list_pane_g1

0xbc63,	// (0x00026456) fep_hwr_candidate_drop_down_list_pane_g2

0xbc70,	// (0x00026463) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x0002a3a6) fep_hwr_candidate_drop_down_list_pane_g

0x64a2,	// (0x00020c95) fep_hwr_candidate_drop_down_list_scroll_pane

0x64ab,	// (0x00020c9e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x64ab,	// (0x00020c9e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x64b8,	// (0x00020cab) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x64b8,	// (0x00020cab) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x64c5,	// (0x00020cb8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x64c5,	// (0x00020cb8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xbb3a,	// (0x0002632d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbb3a,	// (0x0002632d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xbb55,	// (0x00026348) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbb55,	// (0x00026348) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x64d2,	// (0x00020cc5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x64d2,	// (0x00020cc5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x64ed,	// (0x00020ce0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x64ed,	// (0x00020ce0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xbd11,	// (0x00026504) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbd11,	// (0x00026504) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x0002a3ad) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x0002a3ad) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbc7d,	// (0x00026470) cell_vkb_candidate_pane_cp1_ParamLimits

0xbc7d,	// (0x00026470) cell_vkb_candidate_pane_cp1

0xb81b,	// (0x0002600e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb81b,	// (0x0002600e) fep_vkb_candidate_drop_down_list_pane_g1

0xbc63,	// (0x00026456) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbc63,	// (0x00026456) fep_vkb_candidate_drop_down_list_pane_g2

0xbc70,	// (0x00026463) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbc70,	// (0x00026463) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x0002a3a6) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb3,	// (0x0002a3a6) fep_vkb_candidate_drop_down_list_pane_g

0xbcdf,	// (0x000264d2) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbcdf,	// (0x000264d2) fep_vkb_candidate_drop_down_list_scroll_pane

0xbcec,	// (0x000264df) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbcec,	// (0x000264df) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbcf9,	// (0x000264ec) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbcf9,	// (0x000264ec) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbd05,	// (0x000264f8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbd05,	// (0x000264f8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbc9d,	// (0x00026490) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbc9d,	// (0x00026490) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbcbe,	// (0x000264b1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbcbe,	// (0x000264b1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbd2c,	// (0x0002651f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbd2c,	// (0x0002651f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbd4d,	// (0x00026540) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbd4d,	// (0x00026540) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbd11,	// (0x00026504) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbd11,	// (0x00026504) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcb,	// (0x0002a3be) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcb,	// (0x0002a3be) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x0eef,	// (0x0001b6e2) title_pane_g1_ParamLimits

0x0f02,	// (0x0001b6f5) title_pane_g2_ParamLimits

0xf554,	// (0x00029d47) title_pane_g_ParamLimits

0x802b,	// (0x0002281e) aid_call2_pane

0x8033,	// (0x00022826) aid_call_pane

0x803b,	// (0x0002282e) popup_clock_analogue_window_g1

0x803b,	// (0x0002282e) popup_clock_analogue_window_g2

0x53e2,	// (0x0001fbd5) popup_clock_analogue_window_g3

0x53eb,	// (0x0001fbde) popup_clock_analogue_window_g4

0x709d,	// (0x00021890) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x00029ef1) popup_clock_analogue_window_g

0x53f3,	// (0x0001fbe6) popup_clock_analogue_window_t1

0x5401,	// (0x0001fbf4) clock_digital_number_pane_ParamLimits

0x5401,	// (0x0001fbf4) clock_digital_number_pane

0x540d,	// (0x0001fc00) clock_digital_number_pane_cp02_ParamLimits

0x540d,	// (0x0001fc00) clock_digital_number_pane_cp02

0x5419,	// (0x0001fc0c) clock_digital_number_pane_cp03_ParamLimits

0x5419,	// (0x0001fc0c) clock_digital_number_pane_cp03

0x5425,	// (0x0001fc18) clock_digital_number_pane_cp04_ParamLimits

0x5425,	// (0x0001fc18) clock_digital_number_pane_cp04

0x5431,	// (0x0001fc24) clock_digital_separator_pane_ParamLimits

0x5431,	// (0x0001fc24) clock_digital_separator_pane

0x543d,	// (0x0001fc30) popup_clock_digital_window_t1_ParamLimits

0x543d,	// (0x0001fc30) popup_clock_digital_window_t1

0x709d,	// (0x00021890) clock_digital_number_pane_g1

0x709d,	// (0x00021890) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x00029efc) clock_digital_number_pane_g

0x709d,	// (0x00021890) clock_digital_separator_pane_g1

0x709d,	// (0x00021890) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x00029efc) clock_digital_separator_pane_g

0x1b90,	// (0x0001c383) aid_fill_nsta_ParamLimits

0x1cc6,	// (0x0001c4b9) indicator_nsta_pane_ParamLimits

0x8c5b,	// (0x0002344e) popup_clock_analogue_window

0x8c5b,	// (0x0002344e) popup_clock_digital_window

0x7ba6,	// (0x00022399) grid_indicator_nsta_pane_ParamLimits

0xaf46,	// (0x00025739) clock_nsta_pane_t2

0x0001,

0xfa9d,	// (0x0002a290) clock_nsta_pane_t

0x53a6,	// (0x0001fb99) aid_size_max_handle

0xd8bf,	// (0x000280b2) aid_size_min_handle

0x8644,	// (0x00022e37) editor_scroll_pane

0xbd6e,	// (0x00026561) ex_editor_pane

0x7b54,	// (0x00022347) scroll_pane_cp13

0x7979,	// (0x0002216c) scroll_pane_cp14

0x806a,	// (0x0002285d) scroll_pane_cp36

0x8094,	// (0x00022887) list_single_graphic_hl_pane_cp2_ParamLimits

0x8094,	// (0x00022887) list_single_graphic_hl_pane_cp2

0x244e,	// (0x0001cc41) list_single_graphic_hl_pane_ParamLimits

0x244e,	// (0x0001cc41) list_single_graphic_hl_pane

0x4bdc,	// (0x0001f3cf) aid_size_min_hl_cp1

0xbd76,	// (0x00026569) list_highlight_pane_cp34_ParamLimits

0xbd76,	// (0x00026569) list_highlight_pane_cp34

0xbd87,	// (0x0002657a) list_single_graphic_hl_pane_g1_ParamLimits

0xbd87,	// (0x0002657a) list_single_graphic_hl_pane_g1

0xd5ab,	// (0x00027d9e) list_single_graphic_hl_pane_g2_ParamLimits

0xd5ab,	// (0x00027d9e) list_single_graphic_hl_pane_g2

0xd5ab,	// (0x00027d9e) list_single_graphic_hl_pane_g3_ParamLimits

0xd5ab,	// (0x00027d9e) list_single_graphic_hl_pane_g3

0x4bf1,	// (0x0001f3e4) list_single_graphic_hl_pane_g4_ParamLimits

0x4bf1,	// (0x0001f3e4) list_single_graphic_hl_pane_g4

0x4bfd,	// (0x0001f3f0) list_single_graphic_hl_pane_g5_ParamLimits

0x4bfd,	// (0x0001f3f0) list_single_graphic_hl_pane_g5

0x0004,

0xfbdc,	// (0x0002a3cf) list_single_graphic_hl_pane_g_ParamLimits

0xfbdc,	// (0x0002a3cf) list_single_graphic_hl_pane_g

0x4c11,	// (0x0001f404) list_single_graphic_hl_pane_t1_ParamLimits

0x4c11,	// (0x0001f404) list_single_graphic_hl_pane_t1

0xbd94,	// (0x00026587) aid_size_min_hl_cp2

0xbd9d,	// (0x00026590) list_highlight_pane_cp34_cp2_ParamLimits

0xbd9d,	// (0x00026590) list_highlight_pane_cp34_cp2

0xbd87,	// (0x0002657a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbd87,	// (0x0002657a) list_single_graphic_hl_pane_g1_cp2

0xbdaa,	// (0x0002659d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbdaa,	// (0x0002659d) list_single_graphic_hl_pane_g2_cp2

0x2854,	// (0x0001d047) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x2854,	// (0x0001d047) list_single_graphic_hl_pane_g3_cp2

0x857b,	// (0x00022d6e) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x857b,	// (0x00022d6e) list_single_graphic_hl_pane_g4_cp2

0xbdc4,	// (0x000265b7) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbdc4,	// (0x000265b7) list_single_graphic_hl_pane_g5_cp2

0xd916,	// (0x00028109) control_pane_g4_ParamLimits

0xd916,	// (0x00028109) control_pane_g4

0x8980,	// (0x00023173) bg_popup_sub_pane_cp10_ParamLimits

0xb5aa,	// (0x00025d9d) list_choice_list_pane_ParamLimits

0xb5b9,	// (0x00025dac) scroll_pane_cp23

0x7410,	// (0x00021c03) bg_popup_preview_window_pane_cp02_ParamLimits

0xbba6,	// (0x00026399) list_preview_fixed_pane_ParamLimits

0xbbbc,	// (0x000263af) list_preview_fixed_pane_cp_ParamLimits

0xbbbc,	// (0x000263af) list_preview_fixed_pane_cp

0xbbc8,	// (0x000263bb) popup_preview_fixed_window_g1_ParamLimits

0xbbc8,	// (0x000263bb) popup_preview_fixed_window_g1

0xbbd4,	// (0x000263c7) popup_preview_fixed_window_g2_ParamLimits

0xbbd4,	// (0x000263c7) popup_preview_fixed_window_g2

0x0002,

0xfb6b,	// (0x0002a35e) popup_preview_fixed_window_g_ParamLimits

0xfb6b,	// (0x0002a35e) popup_preview_fixed_window_g

0x531a,	// (0x0001fb0d) aid_navi_side_left_pane_ParamLimits

0x532f,	// (0x0001fb22) aid_navi_side_right_pane_ParamLimits

0x5347,	// (0x0001fb3a) navi_icon_pane_stacon_ParamLimits

0x535b,	// (0x0001fb4e) navi_navi_pane_stacon_ParamLimits

0x5347,	// (0x0001fb3a) navi_text_pane_stacon_ParamLimits

0x7093,	// (0x00021886) main_text_info_pane

0xbdee,	// (0x000265e1) listscroll_text_info_pane

0xbdf6,	// (0x000265e9) list_text_info_pane_ParamLimits

0xbdf6,	// (0x000265e9) list_text_info_pane

0xbe05,	// (0x000265f8) scroll_pane_cp24_ParamLimits

0xbe05,	// (0x000265f8) scroll_pane_cp24

0x2862,	// (0x0001d055) list_text_info_pane_t1_ParamLimits

0x2862,	// (0x0001d055) list_text_info_pane_t1

0xda4d,	// (0x00028240) popup_fast_swap2_window_ParamLimits

0xda4d,	// (0x00028240) popup_fast_swap2_window

0xbe5c,	// (0x0002664f) aid_size_cell_fast2

0x7093,	// (0x00021886) bg_popup_window_pane_cp17

0x9382,	// (0x00023b75) heading_pane_cp2

0x7650,	// (0x00021e43) listscroll_fast2_pane

0xbe66,	// (0x00026659) grid_fast2_pane

0xbe70,	// (0x00026663) listscroll_fast2_pane_g1

0xbe78,	// (0x0002666b) listscroll_fast2_pane_g2

0x0001,

0xfbe7,	// (0x0002a3da) listscroll_fast2_pane_g

0x7b54,	// (0x00022347) scroll_pane_cp26

0xbe82,	// (0x00026675) cell_fast2_pane_ParamLimits

0xbe82,	// (0x00026675) cell_fast2_pane

0xbe97,	// (0x0002668a) cell_fast2_pane_g1

0xbea0,	// (0x00026693) cell_fast2_pane_g2

0xbea9,	// (0x0002669c) cell_fast2_pane_g3

0x0002,

0xfbec,	// (0x0002a3df) cell_fast2_pane_g

0x7736,	// (0x00021f29) grid_highlight_pane_cp9

0x774b,	// (0x00021f3e) main_eswt_pane_ParamLimits

0x774b,	// (0x00021f3e) main_eswt_pane

0xbe1a,	// (0x0002660d) list_single_text_info_pane

0xbeb1,	// (0x000266a4) eswt_ctrl_button_pane

0xbeb1,	// (0x000266a4) eswt_ctrl_canvas_pane

0xbeb9,	// (0x000266ac) eswt_ctrl_combo_pane

0xbeb1,	// (0x000266a4) eswt_ctrl_default_pane

0xbeb1,	// (0x000266a4) eswt_ctrl_label_pane

0xbec1,	// (0x000266b4) eswt_ctrl_wait_pane

0xbec9,	// (0x000266bc) eswt_shell_pane

0x7093,	// (0x00021886) listscroll_eswt_app_pane

0xbee9,	// (0x000266dc) popup_eswt_tasktip_window_ParamLimits

0xbee9,	// (0x000266dc) popup_eswt_tasktip_window

0x8f72,	// (0x00023765) bg_popup_window_pane_cp18

0xbefa,	// (0x000266ed) eswt_control_pane_g1_ParamLimits

0xbefa,	// (0x000266ed) eswt_control_pane_g1

0xbf07,	// (0x000266fa) eswt_control_pane_g2_ParamLimits

0xbf07,	// (0x000266fa) eswt_control_pane_g2

0xbf14,	// (0x00026707) eswt_control_pane_g3_ParamLimits

0xbf14,	// (0x00026707) eswt_control_pane_g3

0xbf21,	// (0x00026714) eswt_control_pane_g4_ParamLimits

0xbf21,	// (0x00026714) eswt_control_pane_g4

0x0003,

0xfbf3,	// (0x0002a3e6) eswt_control_pane_g_ParamLimits

0xfbf3,	// (0x0002a3e6) eswt_control_pane_g

0x79da,	// (0x000221cd) bg_button_pane_ParamLimits

0x79da,	// (0x000221cd) bg_button_pane

0x774b,	// (0x00021f3e) common_borders_pane_copy2_ParamLimits

0x774b,	// (0x00021f3e) common_borders_pane_copy2

0xbf2e,	// (0x00026721) control_button_pane_g1_ParamLimits

0xbf2e,	// (0x00026721) control_button_pane_g1

0xbf3a,	// (0x0002672d) control_button_pane_g2_ParamLimits

0xbf3a,	// (0x0002672d) control_button_pane_g2

0xbf46,	// (0x00026739) control_button_pane_g3_ParamLimits

0xbf46,	// (0x00026739) control_button_pane_g3

0x0002,

0xfbfc,	// (0x0002a3ef) control_button_pane_g_ParamLimits

0xfbfc,	// (0x0002a3ef) control_button_pane_g

0xbf5a,	// (0x0002674d) control_button_pane_t1

0xbf68,	// (0x0002675b) control_button_pane_t2

0x0001,

0xfc03,	// (0x0002a3f6) control_button_pane_t

0x8e82,	// (0x00023675) bg_button_pane_g1

0x8e8a,	// (0x0002367d) bg_button_pane_g2

0x8e92,	// (0x00023685) bg_button_pane_g3

0x8e9a,	// (0x0002368d) bg_button_pane_g4

0x8ea2,	// (0x00023695) bg_button_pane_g5

0x8eaa,	// (0x0002369d) bg_button_pane_g6

0x8eb2,	// (0x000236a5) bg_button_pane_g7

0x8eba,	// (0x000236ad) bg_button_pane_g8

0x8ec2,	// (0x000236b5) bg_button_pane_g9

0x0008,

0xf860,	// (0x0002a053) bg_button_pane_g

0xb565,	// (0x00025d58) common_borders_pane_ParamLimits

0xb565,	// (0x00025d58) common_borders_pane

0xbefa,	// (0x000266ed) eswt_control_pane_g1_copy1_ParamLimits

0xbefa,	// (0x000266ed) eswt_control_pane_g1_copy1

0xbf07,	// (0x000266fa) eswt_control_pane_g2_copy1_ParamLimits

0xbf07,	// (0x000266fa) eswt_control_pane_g2_copy1

0xbf14,	// (0x00026707) eswt_control_pane_g3_copy1_ParamLimits

0xbf14,	// (0x00026707) eswt_control_pane_g3_copy1

0xbf21,	// (0x00026714) eswt_control_pane_g4_copy1_ParamLimits

0xbf21,	// (0x00026714) eswt_control_pane_g4_copy1

0xb5a0,	// (0x00025d93) bg_eswt_ctrl_canvas_pane_g1

0xb565,	// (0x00025d58) common_borders_pane_cp2_ParamLimits

0xb565,	// (0x00025d58) common_borders_pane_cp2

0xb565,	// (0x00025d58) common_borders_pane_cp3_ParamLimits

0xb565,	// (0x00025d58) common_borders_pane_cp3

0xbf76,	// (0x00026769) separator_horizontal_pane

0xbf7e,	// (0x00026771) separator_vertical_pane

0xbefa,	// (0x000266ed) eswt_control_pane_g1_copy2_ParamLimits

0xbefa,	// (0x000266ed) eswt_control_pane_g1_copy2

0xbf07,	// (0x000266fa) eswt_control_pane_g2_copy2_ParamLimits

0xbf07,	// (0x000266fa) eswt_control_pane_g2_copy2

0xbf14,	// (0x00026707) eswt_control_pane_g3_copy2_ParamLimits

0xbf14,	// (0x00026707) eswt_control_pane_g3_copy2

0xbf21,	// (0x00026714) eswt_control_pane_g4_copy2_ParamLimits

0xbf21,	// (0x00026714) eswt_control_pane_g4_copy2

0x7093,	// (0x00021886) common_borders_pane_cp4

0xbf87,	// (0x0002677a) separator_horizontal_pane_g1

0xbf90,	// (0x00026783) separator_horizontal_pane_g2

0xbf99,	// (0x0002678c) separator_horizontal_pane_g3

0x0002,

0xfc08,	// (0x0002a3fb) separator_horizontal_pane_g

0xbefa,	// (0x000266ed) eswt_control_pane_g1_copy3_ParamLimits

0xbefa,	// (0x000266ed) eswt_control_pane_g1_copy3

0xbf07,	// (0x000266fa) eswt_control_pane_g2_copy3_ParamLimits

0xbf07,	// (0x000266fa) eswt_control_pane_g2_copy3

0xbf14,	// (0x00026707) eswt_control_pane_g3_copy3_ParamLimits

0xbf14,	// (0x00026707) eswt_control_pane_g3_copy3

0xbf21,	// (0x00026714) eswt_control_pane_g4_copy3_ParamLimits

0xbf21,	// (0x00026714) eswt_control_pane_g4_copy3

0x7093,	// (0x00021886) common_borders_pane_cp5

0xbfa2,	// (0x00026795) separator_vertical_pane_g1

0xbfab,	// (0x0002679e) separator_vertical_pane_g2

0xbfb4,	// (0x000267a7) separator_vertical_pane_g3

0x0002,

0xfc0f,	// (0x0002a402) separator_vertical_pane_g

0xbefa,	// (0x000266ed) eswt_control_pane_g1_copy4_ParamLimits

0xbefa,	// (0x000266ed) eswt_control_pane_g1_copy4

0xbf07,	// (0x000266fa) eswt_control_pane_g2_copy4_ParamLimits

0xbf07,	// (0x000266fa) eswt_control_pane_g2_copy4

0xbf14,	// (0x00026707) eswt_control_pane_g3_copy4_ParamLimits

0xbf14,	// (0x00026707) eswt_control_pane_g3_copy4

0xbf21,	// (0x00026714) eswt_control_pane_g4_copy4_ParamLimits

0xbf21,	// (0x00026714) eswt_control_pane_g4_copy4

0x2880,	// (0x0001d073) eswt_ctrl_combo_button_pane

0x2888,	// (0x0001d07b) eswt_ctrl_input_pane

0x2890,	// (0x0001d083) popup_choice_list_window_cp70

0x2898,	// (0x0001d08b) eswt_ctrl_input_pane_t1

0x7093,	// (0x00021886) input_focus_pane_cp70

0xb565,	// (0x00025d58) bg_button_pane_cp70_ParamLimits

0xb565,	// (0x00025d58) bg_button_pane_cp70

0x28a6,	// (0x0001d099) eswt_ctrl_combo_button_pane_g1

0xbfeb,	// (0x000267de) wait_bar_pane_cp70

0x8f72,	// (0x00023765) bg_popup_window_pane_cp70_ParamLimits

0x8f72,	// (0x00023765) bg_popup_window_pane_cp70

0xbff3,	// (0x000267e6) popup_eswt_tasktip_window_t1

0xc009,	// (0x000267fc) wait_bar_pane_cp71_ParamLimits

0xc009,	// (0x000267fc) wait_bar_pane_cp71

0xc015,	// (0x00026808) grid_eswt_app_pane

0x7e7a,	// (0x0002266d) scroll_pane_cp70

0x28ae,	// (0x0001d0a1) cell_eswt_app_pane_ParamLimits

0x28ae,	// (0x0001d0a1) cell_eswt_app_pane

0x28d8,	// (0x0001d0cb) cell_eswt_app_pane_g1_ParamLimits

0x28d8,	// (0x0001d0cb) cell_eswt_app_pane_g1

0x2907,	// (0x0001d0fa) cell_eswt_app_pane_g2_ParamLimits

0x2907,	// (0x0001d0fa) cell_eswt_app_pane_g2

0x0001,

0xfc16,	// (0x0002a409) cell_eswt_app_pane_g_ParamLimits

0xfc16,	// (0x0002a409) cell_eswt_app_pane_g

0x2930,	// (0x0001d123) cell_eswt_app_pane_t1_ParamLimits

0x2930,	// (0x0001d123) cell_eswt_app_pane_t1

0xc0dc,	// (0x000268cf) grid_highlight_pane_cp70_ParamLimits

0xc0dc,	// (0x000268cf) grid_highlight_pane_cp70

0x8517,	// (0x00022d0a) set_content_pane_g1

0x88e0,	// (0x000230d3) status_small_volume_pane

0x6508,	// (0x00020cfb) status_small_volume_pane_g1

0x6510,	// (0x00020d03) volume_small2_pane

0x6519,	// (0x00020d0c) volume_small2_pane_g1

0x6522,	// (0x00020d15) volume_small2_pane_g2

0x652b,	// (0x00020d1e) volume_small2_pane_g3

0x6534,	// (0x00020d27) volume_small2_pane_g4

0x653d,	// (0x00020d30) volume_small2_pane_g5

0x6546,	// (0x00020d39) volume_small2_pane_g6

0x654f,	// (0x00020d42) volume_small2_pane_g7

0x6558,	// (0x00020d4b) volume_small2_pane_g8

0x6561,	// (0x00020d54) volume_small2_pane_g9

0x656a,	// (0x00020d5d) volume_small2_pane_g10

0x0009,

0xfc1b,	// (0x0002a40e) volume_small2_pane_g

0xb963,	// (0x00026156) fep_vkb_top_text_pane_g1_ParamLimits

0x27d2,	// (0x0001cfc5) fep_vkb_top_text_pane_t1_ParamLimits

0xbbe0,	// (0x000263d3) popup_preview_fixed_window_g3_ParamLimits

0xbbe0,	// (0x000263d3) popup_preview_fixed_window_g3

0xe050,	// (0x00028843) popup_toolbar_trans_pane

0x22a3,	// (0x0001ca96) aid_height_set_list_ParamLimits

0xa2f3,	// (0x00024ae6) aid_size_parent_ParamLimits

0x8980,	// (0x00023173) list_highlight_pane_cp2_ParamLimits

0x8517,	// (0x00022d0a) set_content_pane_g1_ParamLimits

0x2461,	// (0x0001cc54) list_single_image_pane_ParamLimits

0x2461,	// (0x0001cc54) list_single_image_pane

0x2962,	// (0x0001d155) aid_size_cell_image_ParamLimits

0x2962,	// (0x0001d155) aid_size_cell_image

0x296f,	// (0x0001d162) grid_single_image_pane_ParamLimits

0x296f,	// (0x0001d162) grid_single_image_pane

0x79f4,	// (0x000221e7) list_single_image_pane_g1_ParamLimits

0x79f4,	// (0x000221e7) list_single_image_pane_g1

0x7a00,	// (0x000221f3) list_single_image_pane_g2_ParamLimits

0x7a00,	// (0x000221f3) list_single_image_pane_g2

0x0001,

0xfc30,	// (0x0002a423) list_single_image_pane_g_ParamLimits

0xfc30,	// (0x0002a423) list_single_image_pane_g

0xc101,	// (0x000268f4) list_single_image_pane_t1_ParamLimits

0xc101,	// (0x000268f4) list_single_image_pane_t1

0x297b,	// (0x0001d16e) cell_image_list_pane_ParamLimits

0x297b,	// (0x0001d16e) cell_image_list_pane

0x298f,	// (0x0001d182) cell_image_list_pane_g1

0x2998,	// (0x0001d18b) cell_image_list_pane_g2

0x0001,

0xfc35,	// (0x0002a428) cell_image_list_pane_g

0xc13d,	// (0x00026930) aid_size_cell_tb_trans_pane

0x79da,	// (0x000221cd) bg_tb_trans_pane

0xc14f,	// (0x00026942) grid_tb_trans_pane

0x8e82,	// (0x00023675) bg_tb_trans_pane_g1

0x8e8a,	// (0x0002367d) bg_tb_trans_pane_g2

0x8e92,	// (0x00023685) bg_tb_trans_pane_g3

0x8e9a,	// (0x0002368d) bg_tb_trans_pane_g4

0x8ea2,	// (0x00023695) bg_tb_trans_pane_g5

0x8eba,	// (0x000236ad) bg_tb_trans_pane_g6

0x8ec2,	// (0x000236b5) bg_tb_trans_pane_g7

0x8eaa,	// (0x0002369d) bg_tb_trans_pane_g8

0x8eb2,	// (0x000236a5) bg_tb_trans_pane_g9

0x0008,

0xfc3a,	// (0x0002a42d) bg_tb_trans_pane_g

0xc163,	// (0x00026956) cell_toolbar_trans_pane_ParamLimits

0xc163,	// (0x00026956) cell_toolbar_trans_pane

0xb5a0,	// (0x00025d93) cell_toolbar_trans_pane_g1

0x2677,	// (0x0001ce6a) list_form2_midp_pane_t1

0x2685,	// (0x0001ce78) list_form2_midp_pane_t2

0x0001,

0xfae3,	// (0x0002a2d6) list_form2_midp_pane_t

0xb150,	// (0x00025943) scroll_pane_cp51_ParamLimits

0xb30b,	// (0x00025afe) form2_midp_wait_pane_g1

0xb314,	// (0x00025b07) form2_midp_wait_pane_g2

0xb31d,	// (0x00025b10) form2_midp_wait_pane_g3

0x0002,

0xfaf8,	// (0x0002a2eb) form2_midp_wait_pane_g

0x7187,	// (0x0002197a) list_highlight_pane_cp21_ParamLimits

0xb36c,	// (0x00025b5f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb37b,	// (0x00025b6e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa4a3,	// (0x00024c96) list_single_2graphic_im_pane_ParamLimits

0xa4a3,	// (0x00024c96) list_single_2graphic_im_pane

0x29a1,	// (0x0001d194) list_single_2graphic_im_pane_g1_ParamLimits

0x29a1,	// (0x0001d194) list_single_2graphic_im_pane_g1

0x29b2,	// (0x0001d1a5) list_single_2graphic_im_pane_g2_ParamLimits

0x29b2,	// (0x0001d1a5) list_single_2graphic_im_pane_g2

0x29be,	// (0x0001d1b1) list_single_2graphic_im_pane_g3_ParamLimits

0x29be,	// (0x0001d1b1) list_single_2graphic_im_pane_g3

0x0003,

0xfc4d,	// (0x0002a440) list_single_2graphic_im_pane_g_ParamLimits

0xfc4d,	// (0x0002a440) list_single_2graphic_im_pane_g

0x29d2,	// (0x0001d1c5) list_single_2graphic_im_pane_t1_ParamLimits

0x29d2,	// (0x0001d1c5) list_single_2graphic_im_pane_t1

0xbbec,	// (0x000263df) list_single_graphic_2heading_pane_fp_ParamLimits

0xbbec,	// (0x000263df) list_single_graphic_2heading_pane_fp

0x4a4e,	// (0x0001f241) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4a4e,	// (0x0001f241) list_single_graphic_2heading_pane_fp_g1

0xbc03,	// (0x000263f6) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbc03,	// (0x000263f6) list_single_graphic_2heading_pane_fp_g2

0x4069,	// (0x0001e85c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4069,	// (0x0001e85c) list_single_graphic_2heading_pane_fp_g3

0x4a23,	// (0x0001f216) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4a23,	// (0x0001f216) list_single_graphic_2heading_pane_fp_g4

0xbc0f,	// (0x00026402) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbc0f,	// (0x00026402) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x0002a36e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x0002a36e) list_single_graphic_2heading_pane_fp_g

0x4c27,	// (0x0001f41a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4c27,	// (0x0001f41a) list_single_graphic_2heading_pane_fp_t1

0x4a86,	// (0x0001f279) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4a86,	// (0x0001f279) list_single_graphic_2heading_pane_fp_t2

0x4c3d,	// (0x0001f430) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4c3d,	// (0x0001f430) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc56,	// (0x0002a449) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc56,	// (0x0002a449) list_single_graphic_2heading_pane_fp_t

0xb622,	// (0x00025e15) fep_hwr_write_pane_g5_ParamLimits

0xb622,	// (0x00025e15) fep_hwr_write_pane_g5

0xb62e,	// (0x00025e21) fep_hwr_write_pane_g6_ParamLimits

0xb62e,	// (0x00025e21) fep_hwr_write_pane_g6

0xbec9,	// (0x000266bc) eswt_shell_pane_ParamLimits

0x8f72,	// (0x00023765) bg_popup_window_pane_cp18_ParamLimits

0xa241,	// (0x00024a34) heading_pane_cp70

0xbff3,	// (0x000267e6) popup_eswt_tasktip_window_t1_ParamLimits

0x1beb,	// (0x0001c3de) aid_touch_tab_arrow_left

0x1c01,	// (0x0001c3f4) aid_touch_tab_arrow_right

0x0f1a,	// (0x0001b70d) title_pane_g3_ParamLimits

0x0f1a,	// (0x0001b70d) title_pane_g3

0x7999,	// (0x0002218c) set_value_pane_g1

0xe050,	// (0x00028843) popup_toolbar_trans_pane_ParamLimits

0xc13d,	// (0x00026930) aid_size_cell_tb_trans_pane_ParamLimits

0x79da,	// (0x000221cd) bg_tb_trans_pane_ParamLimits

0xc14f,	// (0x00026942) grid_tb_trans_pane_ParamLimits

0x7410,	// (0x00021c03) cont_note_pane_ParamLimits

0x7410,	// (0x00021c03) cont_note_pane

0x774b,	// (0x00021f3e) cont_snote2_single_text_pane_ParamLimits

0x774b,	// (0x00021f3e) cont_snote2_single_text_pane

0x774b,	// (0x00021f3e) cont_snote2_single_graphic_pane_ParamLimits

0x774b,	// (0x00021f3e) cont_snote2_single_graphic_pane

0x9598,	// (0x00023d8b) cont_note_wait_pane_ParamLimits

0x9598,	// (0x00023d8b) cont_note_wait_pane

0x9598,	// (0x00023d8b) cont_note_image_pane_ParamLimits

0x9598,	// (0x00023d8b) cont_note_image_pane

0xc1f7,	// (0x000269ea) popup_note2_window_g1_ParamLimits

0xc1f7,	// (0x000269ea) popup_note2_window_g1

0xc228,	// (0x00026a1b) popup_note2_window_t1_ParamLimits

0xc228,	// (0x00026a1b) popup_note2_window_t1

0xc26d,	// (0x00026a60) popup_note2_window_t2_ParamLimits

0xc26d,	// (0x00026a60) popup_note2_window_t2

0xc2b2,	// (0x00026aa5) popup_note2_window_t3_ParamLimits

0xc2b2,	// (0x00026aa5) popup_note2_window_t3

0xc2f7,	// (0x00026aea) popup_note2_window_t4_ParamLimits

0xc2f7,	// (0x00026aea) popup_note2_window_t4

0x7488,	// (0x00021c7b) popup_note2_window_t5_ParamLimits

0x7488,	// (0x00021c7b) popup_note2_window_t5

0x0004,

0xfc62,	// (0x0002a455) popup_note2_window_t_ParamLimits

0xfc62,	// (0x0002a455) popup_note2_window_t

0xc326,	// (0x00026b19) popup_note2_image_window_g1_ParamLimits

0xc326,	// (0x00026b19) popup_note2_image_window_g1

0xc332,	// (0x00026b25) popup_note2_image_window_g2_ParamLimits

0xc332,	// (0x00026b25) popup_note2_image_window_g2

0x0001,

0xfc6d,	// (0x0002a460) popup_note2_image_window_g_ParamLimits

0xfc6d,	// (0x0002a460) popup_note2_image_window_g

0xc344,	// (0x00026b37) popup_note2_image_window_t1_ParamLimits

0xc344,	// (0x00026b37) popup_note2_image_window_t1

0xc35c,	// (0x00026b4f) popup_note2_image_window_t2_ParamLimits

0xc35c,	// (0x00026b4f) popup_note2_image_window_t2

0xc374,	// (0x00026b67) popup_note2_image_window_t3_ParamLimits

0xc374,	// (0x00026b67) popup_note2_image_window_t3

0x0002,

0xfc72,	// (0x0002a465) popup_note2_image_window_t_ParamLimits

0xfc72,	// (0x0002a465) popup_note2_image_window_t

0x95a6,	// (0x00023d99) popup_note2_wait_window_g1_ParamLimits

0x95a6,	// (0x00023d99) popup_note2_wait_window_g1

0x95b2,	// (0x00023da5) popup_note2_wait_window_g2_ParamLimits

0x95b2,	// (0x00023da5) popup_note2_wait_window_g2

0x95be,	// (0x00023db1) popup_note2_wait_window_g3_ParamLimits

0x95be,	// (0x00023db1) popup_note2_wait_window_g3

0x0002,

0xf842,	// (0x0002a035) popup_note2_wait_window_g_ParamLimits

0xf842,	// (0x0002a035) popup_note2_wait_window_g

0xc390,	// (0x00026b83) popup_note2_wait_window_t1_ParamLimits

0xc390,	// (0x00026b83) popup_note2_wait_window_t1

0xc3ae,	// (0x00026ba1) popup_note2_wait_window_t2_ParamLimits

0xc3ae,	// (0x00026ba1) popup_note2_wait_window_t2

0xc3cc,	// (0x00026bbf) popup_note2_wait_window_t3_ParamLimits

0xc3cc,	// (0x00026bbf) popup_note2_wait_window_t3

0xc3de,	// (0x00026bd1) popup_note2_wait_window_t4_ParamLimits

0xc3de,	// (0x00026bd1) popup_note2_wait_window_t4

0x0003,

0xfc79,	// (0x0002a46c) popup_note2_wait_window_t_ParamLimits

0xfc79,	// (0x0002a46c) popup_note2_wait_window_t

0xc3f0,	// (0x00026be3) wait_bar2_pane_ParamLimits

0xc3f0,	// (0x00026be3) wait_bar2_pane

0xc408,	// (0x00026bfb) popup_snote2_single_text_window_g1_ParamLimits

0xc408,	// (0x00026bfb) popup_snote2_single_text_window_g1

0xc430,	// (0x00026c23) popup_snote2_single_text_window_t1_ParamLimits

0xc430,	// (0x00026c23) popup_snote2_single_text_window_t1

0xc47c,	// (0x00026c6f) popup_snote2_single_text_window_t2_ParamLimits

0xc47c,	// (0x00026c6f) popup_snote2_single_text_window_t2

0xc4c8,	// (0x00026cbb) popup_snote2_single_text_window_t3_ParamLimits

0xc4c8,	// (0x00026cbb) popup_snote2_single_text_window_t3

0xc509,	// (0x00026cfc) popup_snote2_single_text_window_t4_ParamLimits

0xc509,	// (0x00026cfc) popup_snote2_single_text_window_t4

0xc53f,	// (0x00026d32) popup_snote2_single_text_window_t5_ParamLimits

0xc53f,	// (0x00026d32) popup_snote2_single_text_window_t5

0x0004,

0xfc82,	// (0x0002a475) popup_snote2_single_text_window_t_ParamLimits

0xfc82,	// (0x0002a475) popup_snote2_single_text_window_t

0xc56a,	// (0x00026d5d) popup_snote2_single_graphic_window_g1_ParamLimits

0xc56a,	// (0x00026d5d) popup_snote2_single_graphic_window_g1

0xc592,	// (0x00026d85) popup_snote2_single_graphic_window_g2_ParamLimits

0xc592,	// (0x00026d85) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8d,	// (0x0002a480) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8d,	// (0x0002a480) popup_snote2_single_graphic_window_g

0xc5ba,	// (0x00026dad) popup_snote2_single_graphic_window_t1_ParamLimits

0xc5ba,	// (0x00026dad) popup_snote2_single_graphic_window_t1

0xc606,	// (0x00026df9) popup_snote2_single_graphic_window_t2_ParamLimits

0xc606,	// (0x00026df9) popup_snote2_single_graphic_window_t2

0xc4c8,	// (0x00026cbb) popup_snote2_single_graphic_window_t3_ParamLimits

0xc4c8,	// (0x00026cbb) popup_snote2_single_graphic_window_t3

0xc509,	// (0x00026cfc) popup_snote2_single_graphic_window_t4_ParamLimits

0xc509,	// (0x00026cfc) popup_snote2_single_graphic_window_t4

0xc53f,	// (0x00026d32) popup_snote2_single_graphic_window_t5_ParamLimits

0xc53f,	// (0x00026d32) popup_snote2_single_graphic_window_t5

0x0004,

0xfc92,	// (0x0002a485) popup_snote2_single_graphic_window_t_ParamLimits

0xfc92,	// (0x0002a485) popup_snote2_single_graphic_window_t

0xb009,	// (0x000257fc) clock_nsta_pane_cp2_t1

0xb009,	// (0x000257fc) clock_nsta_pane_cp2_t2

0x0001,

0xfab9,	// (0x0002a2ac) clock_nsta_pane_cp2_t

0x439c,	// (0x0001eb8f) form_field_data_wide_pane_g1_ParamLimits

0x79f4,	// (0x000221e7) form_field_data_wide_pane_g2_ParamLimits

0x79f4,	// (0x000221e7) form_field_data_wide_pane_g2

0x7a00,	// (0x000221f3) form_field_data_wide_pane_g3_ParamLimits

0x7a00,	// (0x000221f3) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x00029e74) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x00029e74) form_field_data_wide_pane_g

0x25ab,	// (0x0001cd9e) grid_touch_3_pane_ParamLimits

0x25ab,	// (0x0001cd9e) grid_touch_3_pane

0x2a03,	// (0x0001d1f6) cell_touch_3_pane_ParamLimits

0x2a03,	// (0x0001d1f6) cell_touch_3_pane

0xb5a0,	// (0x00025d93) cell_touch_3_pane_g1

0xb5a0,	// (0x00025d93) cell_touch_3_pane_g2

0x0001,

0xfb3e,	// (0x0002a331) cell_touch_3_pane_g

0x74ba,	// (0x00021cad) cont_query_data_pane

0x74c2,	// (0x00021cb5) cont_query_data_pane_cp1

0xc681,	// (0x00026e74) button_value_adjust_pane_cp7

0xc689,	// (0x00026e7c) query_popup_pane_cp3

0x8127,	// (0x0002291a) bg_popup_sub_pane_cp22_ParamLimits

0x545c,	// (0x0001fc4f) navi_navi_volume_pane_cp2

0x5477,	// (0x0001fc6a) popup_side_volume_key_window_g2

0x5486,	// (0x0001fc79) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x00029f0a) popup_side_volume_key_window_g

0x54a3,	// (0x0001fc96) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x00029f11) popup_side_volume_key_window_t

0x83e1,	// (0x00022bd4) popup_side_volume_key_window_ParamLimits

0xd14c,	// (0x0002793f) list_double_graphic_pane_g4_ParamLimits

0xd14c,	// (0x0002793f) list_double_graphic_pane_g4

0x2439,	// (0x0001cc2c) list_single_2heading_msg_pane_ParamLimits

0x2439,	// (0x0001cc2c) list_single_2heading_msg_pane

0xd5b7,	// (0x00027daa) list_single_2heading_msg_pane_g1_ParamLimits

0xd5b7,	// (0x00027daa) list_single_2heading_msg_pane_g1

0xd5c3,	// (0x00027db6) list_single_2heading_msg_pane_g2_ParamLimits

0xd5c3,	// (0x00027db6) list_single_2heading_msg_pane_g2

0xd5d6,	// (0x00027dc9) list_single_2heading_msg_pane_g3_ParamLimits

0xd5d6,	// (0x00027dc9) list_single_2heading_msg_pane_g3

0x4c69,	// (0x0001f45c) list_single_2heading_msg_pane_g4_ParamLimits

0x4c69,	// (0x0001f45c) list_single_2heading_msg_pane_g4

0x0003,

0xfc9d,	// (0x0002a490) list_single_2heading_msg_pane_g_ParamLimits

0xfc9d,	// (0x0002a490) list_single_2heading_msg_pane_g

0x4c81,	// (0x0001f474) list_single_2heading_msg_pane_t1_ParamLimits

0x4c81,	// (0x0001f474) list_single_2heading_msg_pane_t1

0xd5e2,	// (0x00027dd5) list_single_2heading_msg_pane_t2_ParamLimits

0xd5e2,	// (0x00027dd5) list_single_2heading_msg_pane_t2

0xd64d,	// (0x00027e40) list_single_2heading_msg_pane_t3_ParamLimits

0xd64d,	// (0x00027e40) list_single_2heading_msg_pane_t3

0x4d16,	// (0x0001f509) list_single_2heading_msg_pane_t4_ParamLimits

0x4d16,	// (0x0001f509) list_single_2heading_msg_pane_t4

0x0003,

0xfca6,	// (0x0002a499) list_single_2heading_msg_pane_t_ParamLimits

0xfca6,	// (0x0002a499) list_single_2heading_msg_pane_t

0x70db,	// (0x000218ce) title_pane_g4_ParamLimits

0x70db,	// (0x000218ce) title_pane_g4

0x526a,	// (0x0001fa5d) title_pane_stacon_g3_ParamLimits

0x526a,	// (0x0001fa5d) title_pane_stacon_g3

0xc1ba,	// (0x000269ad) list_single_2graphic_im_pane_g4_ParamLimits

0xc1ba,	// (0x000269ad) list_single_2graphic_im_pane_g4

0x9fe7,	// (0x000247da) popup_side_volume_key_window_cp

0xa81c,	// (0x0002500f) main_idle_act2_pane_t1

0x5dcc,	// (0x000205bf) toolbar_button_pane_g10

0x1289,	// (0x0001ba7c) popup_toolbar_window_cp1

0xaffa,	// (0x000257ed) clock_nsta_pane_cp_t1

0xaffa,	// (0x000257ed) clock_nsta_pane_cp_t2

0x0001,

0xfab4,	// (0x0002a2a7) clock_nsta_pane_cp_t

0x545c,	// (0x0001fc4f) navi_navi_volume_pane_cp2_ParamLimits

0x546b,	// (0x0001fc5e) popup_side_volume_key_window_g1_ParamLimits

0x5477,	// (0x0001fc6a) popup_side_volume_key_window_g2_ParamLimits

0x5486,	// (0x0001fc79) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x00029f0a) popup_side_volume_key_window_g_ParamLimits

0x6233,	// (0x00020a26) fep_hwr_aid_pane

0x001f,	// (0x0001a812) bg_fep_hwr_top_pane_g4_ParamLimits

0xb5f2,	// (0x00025de5) fep_hwr_top_pane_g1_ParamLimits

0xb604,	// (0x00025df7) fep_hwr_top_pane_g2_ParamLimits

0x62ec,	// (0x00020adf) fep_hwr_top_pane_g3_ParamLimits

0xfb09,	// (0x0002a2fc) fep_hwr_top_pane_g_ParamLimits

0x6301,	// (0x00020af4) fep_hwr_top_text_pane_ParamLimits

0x9da8,	// (0x0002459b) aid_touch_tab_arrow_arrow_2

0x9db1,	// (0x000245a4) aid_touch_tab_arrow_left_2

0x6247,	// (0x00020a3a) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x627e,	// (0x00020a71) fep_hwr_prediction_pane

0xb76b,	// (0x00025f5e) fep_vkb_prediction_pane

0x27b2,	// (0x0001cfa5) fep_vkb_side_pane_g3_ParamLimits

0x27b2,	// (0x0001cfa5) fep_vkb_side_pane_g3

0xb81b,	// (0x0002600e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xbc63,	// (0x00026456) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xbc70,	// (0x00026463) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb3,	// (0x0002a3a6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xe2c9,	// (0x00028abc) fep_hwr_prediction_pane_g1

0x6573,	// (0x00020d66) fep_hwr_prediction_pane_g2

0x657b,	// (0x00020d6e) fep_hwr_prediction_pane_g3

0x6583,	// (0x00020d76) fep_hwr_prediction_pane_g4

0x0003,

0xfcaf,	// (0x0002a4a2) fep_hwr_prediction_pane_g

0xe2c9,	// (0x00028abc) fep_vkb_prediction_pane_g1

0xe2d3,	// (0x00028ac6) fep_vkb_prediction_pane_g2

0xe2db,	// (0x00028ace) fep_vkb_prediction_pane_g3

0xe2e3,	// (0x00028ad6) fep_vkb_prediction_pane_g4

0x0003,

0xfcb8,	// (0x0002a4ab) fep_vkb_prediction_pane_g

0xa753,	// (0x00024f46) slider_set_pane_g3

0xa767,	// (0x00024f5a) slider_set_pane_g4

0xa77f,	// (0x00024f72) slider_set_pane_g5

0xa753,	// (0x00024f46) slider_set_pane_g6

0x60a4,	// (0x00020897) slider_set_pane_g7

0xa450,	// (0x00024c43) slider_form_pane_g3

0xa459,	// (0x00024c4c) slider_form_pane_g4

0xa461,	// (0x00024c54) slider_form_pane_g5

0xa450,	// (0x00024c43) slider_form_pane_g6

0x23ea,	// (0x0001cbdd) slider_form_pane_g7

0xaac8,	// (0x000252bb) slider_set_pane_vc_g3

0xaad1,	// (0x000252c4) slider_set_pane_vc_g4

0xaada,	// (0x000252cd) slider_set_pane_vc_g5

0xaac8,	// (0x000252bb) slider_set_pane_vc_g6

0xaae3,	// (0x000252d6) slider_set_pane_vc_g7

0xacb7,	// (0x000254aa) slider_form_pane_vc_g1

0xacc0,	// (0x000254b3) slider_form_pane_vc_g2

0xacc9,	// (0x000254bc) slider_form_pane_vc_g3

0xacb7,	// (0x000254aa) slider_form_pane_vc_g4

0xacd2,	// (0x000254c5) slider_form_pane_vc_g5

0x0004,

0xfa86,	// (0x0002a279) slider_form_pane_vc_g

0x7093,	// (0x00021886) main_idle_act3_pane

0xe2eb,	// (0x00028ade) ai3_links_pane

0x2b91,	// (0x0001d384) popup_ai3_data_window_ParamLimits

0x2b91,	// (0x0001d384) popup_ai3_data_window

0x7093,	// (0x00021886) grid_ai3_links_pane

0x2ba9,	// (0x0001d39c) cell_ai3_links_pane_ParamLimits

0x2ba9,	// (0x0001d39c) cell_ai3_links_pane

0xe2f4,	// (0x00028ae7) bg_popup_sub_pane_cp11

0xe301,	// (0x00028af4) cell_ai3_links_pane_g1

0x7093,	// (0x00021886) bg_popup_sub_pane_cp12

0xe326,	// (0x00028b19) heading_ai3_data_pane

0xe32e,	// (0x00028b21) list_ai3_gene_pane

0xe33a,	// (0x00028b2d) popup_ai3_data_window_g1

0xe342,	// (0x00028b35) heading_ai3_data_pane_g1

0xe34a,	// (0x00028b3d) heading_ai3_data_pane_t1

0xe358,	// (0x00028b4b) list_double_ai3_gene_pane_ParamLimits

0xe358,	// (0x00028b4b) list_double_ai3_gene_pane

0xe365,	// (0x00028b58) list_single_ai3_gene_pane_ParamLimits

0xe365,	// (0x00028b58) list_single_ai3_gene_pane

0xb565,	// (0x00025d58) list_highlight_pane_cp7_ParamLimits

0xb565,	// (0x00025d58) list_highlight_pane_cp7

0xe372,	// (0x00028b65) list_single_a13_gene_pane_t1_ParamLimits

0xe372,	// (0x00028b65) list_single_a13_gene_pane_t1

0xe389,	// (0x00028b7c) list_single_ai3_gene_pane_g1

0xe392,	// (0x00028b85) list_single_ai3_gene_pane_g2

0x0001,

0xfcc1,	// (0x0002a4b4) list_single_ai3_gene_pane_g

0xe39a,	// (0x00028b8d) list_double_ai3_gene_pane_g1_ParamLimits

0xe39a,	// (0x00028b8d) list_double_ai3_gene_pane_g1

0xe3a6,	// (0x00028b99) list_double_ai3_gene_pane_t1_ParamLimits

0xe3a6,	// (0x00028b99) list_double_ai3_gene_pane_t1

0xe3c2,	// (0x00028bb5) list_double_ai3_gene_pane_t2_ParamLimits

0xe3c2,	// (0x00028bb5) list_double_ai3_gene_pane_t2

0xe3d7,	// (0x00028bca) list_double_ai3_gene_pane_t3_ParamLimits

0xe3d7,	// (0x00028bca) list_double_ai3_gene_pane_t3

0x0002,

0xfcc6,	// (0x0002a4b9) list_double_ai3_gene_pane_t_ParamLimits

0xfcc6,	// (0x0002a4b9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4c53,	// (0x0001f446) aid_size_min_col_2

0x2a37,	// (0x0001d22a) aid_size_min_msg_ParamLimits

0x2a37,	// (0x0001d22a) aid_size_min_msg

0x27c6,	// (0x0001cfb9) fep_vkb_top_text_pane_g2_ParamLimits

0x27c6,	// (0x0001cfb9) fep_vkb_top_text_pane_g2

0x0001,

0xfb39,	// (0x0002a32c) fep_vkb_top_text_pane_g_ParamLimits

0xfb39,	// (0x0002a32c) fep_vkb_top_text_pane_g

0x7093,	// (0x00021886) main_hc_apps_shell_pane

0xe3f4,	// (0x00028be7) grid_hc_apps_pane_ParamLimits

0xe3f4,	// (0x00028be7) grid_hc_apps_pane

0xe403,	// (0x00028bf6) list_hc_apps_pane

0xe40b,	// (0x00028bfe) scroll_pane_cp37_ParamLimits

0xe40b,	// (0x00028bfe) scroll_pane_cp37

0x2bc3,	// (0x0001d3b6) cell_hc_apps_pane_ParamLimits

0x2bc3,	// (0x0001d3b6) cell_hc_apps_pane

0x2c83,	// (0x0001d476) cell_hc_apps_pane_g1_ParamLimits

0x2c83,	// (0x0001d476) cell_hc_apps_pane_g1

0xe417,	// (0x00028c0a) cell_hc_apps_pane_g2_ParamLimits

0xe417,	// (0x00028c0a) cell_hc_apps_pane_g2

0xe433,	// (0x00028c26) cell_hc_apps_pane_g3_ParamLimits

0xe433,	// (0x00028c26) cell_hc_apps_pane_g3

0x0002,

0xfccd,	// (0x0002a4c0) cell_hc_apps_pane_g_ParamLimits

0xfccd,	// (0x0002a4c0) cell_hc_apps_pane_g

0x2cb0,	// (0x0001d4a3) cell_hc_apps_pane_t1_ParamLimits

0x2cb0,	// (0x0001d4a3) cell_hc_apps_pane_t1

0x7410,	// (0x00021c03) grid_highlight_pane_cp10_ParamLimits

0x7410,	// (0x00021c03) grid_highlight_pane_cp10

0x2cee,	// (0x0001d4e1) list_single_hc_apps_pane_ParamLimits

0x2cee,	// (0x0001d4e1) list_single_hc_apps_pane

0x2d21,	// (0x0001d514) list_single_hc_apps_pane_g1

0xd6bb,	// (0x00027eae) list_single_hc_apps_pane_g2

0x0001,

0xfcd4,	// (0x0002a4c7) list_single_hc_apps_pane_g

0xd6d4,	// (0x00027ec7) list_single_hc_apps_pane_g2_copy1

0xd6f0,	// (0x00027ee3) list_single_hc_apps_pane_t1

0x7187,	// (0x0002197a) bg_set_opt_pane_cp_ParamLimits

0x5195,	// (0x0001f988) setting_slider_pane_t1_ParamLimits

0x51ae,	// (0x0001f9a1) setting_slider_pane_t2_ParamLimits

0x51c7,	// (0x0001f9ba) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00029d57) setting_slider_pane_t_ParamLimits

0x51de,	// (0x0001f9d1) slider_set_pane_ParamLimits

0x5701,	// (0x0001fef4) control_pane_g5_ParamLimits

0x5701,	// (0x0001fef4) control_pane_g5

0xa2ad,	// (0x00024aa0) slider_set_pane_g1_ParamLimits

0x6098,	// (0x0002088b) slider_set_pane_g2_ParamLimits

0xa753,	// (0x00024f46) slider_set_pane_g3_ParamLimits

0xa767,	// (0x00024f5a) slider_set_pane_g4_ParamLimits

0xa77f,	// (0x00024f72) slider_set_pane_g5_ParamLimits

0xa753,	// (0x00024f46) slider_set_pane_g6_ParamLimits

0x60a4,	// (0x00020897) slider_set_pane_g7_ParamLimits

0xf95e,	// (0x0002a151) slider_set_pane_g_ParamLimits

0x84c2,	// (0x00022cb5) navi_icon_text_pane_ParamLimits

0x1bb4,	// (0x0001c3a7) aid_fill_nsta_2_ParamLimits

0x1beb,	// (0x0001c3de) aid_touch_tab_arrow_left_ParamLimits

0x1c01,	// (0x0001c3f4) aid_touch_tab_arrow_right_ParamLimits

0x1c9c,	// (0x0001c48f) clock_nsta_pane_ParamLimits

0x9d8a,	// (0x0002457d) navi_icon_pane_g1_ParamLimits

0x9d96,	// (0x00024589) navi_text_pane_t1_ParamLimits

0xb10e,	// (0x00025901) navi_icon_text_pane_g1_ParamLimits

0xb11a,	// (0x0002590d) navi_icon_text_pane_t1_ParamLimits

0x2d21,	// (0x0001d514) list_single_hc_apps_pane_g1_ParamLimits

0xd6bb,	// (0x00027eae) list_single_hc_apps_pane_g2_ParamLimits

0xfcd4,	// (0x0002a4c7) list_single_hc_apps_pane_g_ParamLimits

0xd6d4,	// (0x00027ec7) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd6f0,	// (0x00027ee3) list_single_hc_apps_pane_t1_ParamLimits

0xd854,	// (0x00028047) popup_toolbar2_fixed_window_ParamLimits

0xd854,	// (0x00028047) popup_toolbar2_fixed_window

0xe046,	// (0x00028839) popup_toolbar2_float_window

0x7093,	// (0x00021886) bg_popup_sub_pane_cp27

0xe455,	// (0x00028c48) grid_toolbar2_float_pane

0x7093,	// (0x00021886) bg_popup_sub_pane_cp26

0xe455,	// (0x00028c48) grid_toolbar2_fixed_pane

0x2d9d,	// (0x0001d590) cell_toolbar2_fixed_pane_ParamLimits

0x2d9d,	// (0x0001d590) cell_toolbar2_fixed_pane

0x2db7,	// (0x0001d5aa) cell_toolbar2_fixed_pane_g1

0xe45d,	// (0x00028c50) toolbar2_fixed_button_pane

0x8e82,	// (0x00023675) toolbar2_fixed_button_pane_g1

0x8e8a,	// (0x0002367d) toolbar2_fixed_button_pane_g2

0x8e92,	// (0x00023685) toolbar2_fixed_button_pane_g3

0x8e9a,	// (0x0002368d) toolbar2_fixed_button_pane_g4

0x8ea2,	// (0x00023695) toolbar2_fixed_button_pane_g5

0x8eaa,	// (0x0002369d) toolbar2_fixed_button_pane_g6

0x8eb2,	// (0x000236a5) toolbar2_fixed_button_pane_g7

0x8eba,	// (0x000236ad) toolbar2_fixed_button_pane_g8

0x8ec2,	// (0x000236b5) toolbar2_fixed_button_pane_g9

0x0008,

0xf860,	// (0x0002a053) toolbar2_fixed_button_pane_g

0xe465,	// (0x00028c58) cell_toolbar2_float_pane_ParamLimits

0xe465,	// (0x00028c58) cell_toolbar2_float_pane

0xe476,	// (0x00028c69) cell_toolbar2_float_pane_g1

0xe45d,	// (0x00028c50) toolbar2_fixed_button_pane_cp

0x2779,	// (0x0001cf6c) fep_vkb_accented_list_pane_ParamLimits

0x2779,	// (0x0001cf6c) fep_vkb_accented_list_pane

0x644f,	// (0x00020c42) bg_popup_fep_shadow_pane_g9

0x8644,	// (0x00022e37) bg_popup_fep_shadow_pane_cp3

0x7b3b,	// (0x0002232e) list_accented_list_pane

0xe47f,	// (0x00028c72) list_single_accented_list_pane_ParamLimits

0xe47f,	// (0x00028c72) list_single_accented_list_pane

0x8644,	// (0x00022e37) list_highlight_pane_cp10

0xe490,	// (0x00028c83) list_single_accented_list_pane_t1

0xdf70,	// (0x00028763) popup_slider_window_ParamLimits

0xdf70,	// (0x00028763) popup_slider_window

0xc691,	// (0x00026e84) aid_indentation_list_msg

0x2eb0,	// (0x0001d6a3) bg_popup_window_pane_cp19

0xe4fc,	// (0x00028cef) popup_slider_window_g1

0xe518,	// (0x00028d0b) popup_slider_window_g2

0xe534,	// (0x00028d27) popup_slider_window_g3

0x0005,

0xfcd9,	// (0x0002a4cc) popup_slider_window_g

0xe550,	// (0x00028d43) popup_slider_window_t1

0xe596,	// (0x00028d89) small_volume_slider_vertical_pane

0xb5a0,	// (0x00025d93) small_volume_slider_vertical_pane_g1

0xb5a0,	// (0x00025d93) small_volume_slider_vertical_pane_g2

0xe5b2,	// (0x00028da5) small_volume_slider_vertical_pane_g3

0x0002,

0xfceb,	// (0x0002a4de) small_volume_slider_vertical_pane_g

0xd7c2,	// (0x00027fb5) area_side_right_pane_ParamLimits

0xd7c2,	// (0x00027fb5) area_side_right_pane

0xe5bb,	// (0x00028dae) aid_size_side_button_ParamLimits

0xe5bb,	// (0x00028dae) aid_size_side_button

0xe5d4,	// (0x00028dc7) grid_sctrl_middle_pane_ParamLimits

0xe5d4,	// (0x00028dc7) grid_sctrl_middle_pane

0x65bf,	// (0x00020db2) sctrl_sk_bottom_pane

0x65d0,	// (0x00020dc3) sctrl_sk_top_pane

0x65e2,	// (0x00020dd5) aid_touch_sctrl_top

0x7410,	// (0x00021c03) bg_sctrl_sk_pane_ParamLimits

0x7410,	// (0x00021c03) bg_sctrl_sk_pane

0x65ef,	// (0x00020de2) sctrl_sk_top_pane_g1

0x65fc,	// (0x00020def) sctrl_sk_top_pane_t1

0x65e2,	// (0x00020dd5) aid_touch_sctrl_bottom

0x7410,	// (0x00021c03) bg_sctrl_sk_pane_cp_ParamLimits

0x7410,	// (0x00021c03) bg_sctrl_sk_pane_cp

0x6617,	// (0x00020e0a) sctrl_sk_bottom_pane_g1

0x65fc,	// (0x00020def) sctrl_sk_bottom_pane_t1

0xe5ee,	// (0x00028de1) cell_sctrl_middle_pane_ParamLimits

0xe5ee,	// (0x00028de1) cell_sctrl_middle_pane

0xe5ff,	// (0x00028df2) aid_touch_sctrl_middle_ParamLimits

0xe5ff,	// (0x00028df2) aid_touch_sctrl_middle

0xe60c,	// (0x00028dff) bg_sctrl_middle_pane_ParamLimits

0xe60c,	// (0x00028dff) bg_sctrl_middle_pane

0xe61a,	// (0x00028e0d) cell_sctrl_middle_pane_g1_ParamLimits

0xe61a,	// (0x00028e0d) cell_sctrl_middle_pane_g1

0xe628,	// (0x00028e1b) cell_sctrl_middle_pane_g2_ParamLimits

0xe628,	// (0x00028e1b) cell_sctrl_middle_pane_g2

0x0001,

0xfcf7,	// (0x0002a4ea) cell_sctrl_middle_pane_g_ParamLimits

0xfcf7,	// (0x0002a4ea) cell_sctrl_middle_pane_g

0x8e82,	// (0x00023675) bg_sctrl_middle_pane_g1

0x8e8a,	// (0x0002367d) bg_sctrl_middle_pane_g2

0x8e92,	// (0x00023685) bg_sctrl_middle_pane_g3

0x8e9a,	// (0x0002368d) bg_sctrl_middle_pane_g4

0x8ea2,	// (0x00023695) bg_sctrl_middle_pane_g5

0x8eaa,	// (0x0002369d) bg_sctrl_middle_pane_g6

0x8eb2,	// (0x000236a5) bg_sctrl_middle_pane_g7

0x8eba,	// (0x000236ad) bg_sctrl_middle_pane_g8

0x0007,

0xfcfc,	// (0x0002a4ef) bg_sctrl_middle_pane_g

0x8ec2,	// (0x000236b5) bg_sctrl_middle_pane_g8_copy1

0x8e82,	// (0x00023675) bg_sctrl_sk_pane_g1

0x8e8a,	// (0x0002367d) bg_sctrl_sk_pane_g2

0x8e92,	// (0x00023685) bg_sctrl_sk_pane_g3

0x0008,

0xf860,	// (0x0002a053) bg_sctrl_sk_pane_g

0x7909,	// (0x000220fc) aid_size_touch_scroll_bar

0x8e9a,	// (0x0002368d) bg_sctrl_sk_pane_g4

0x8ea2,	// (0x00023695) bg_sctrl_sk_pane_g5

0x8eaa,	// (0x0002369d) bg_sctrl_sk_pane_g6

0x8eb2,	// (0x000236a5) bg_sctrl_sk_pane_g7

0x8eba,	// (0x000236ad) bg_sctrl_sk_pane_g8

0x8ec2,	// (0x000236b5) bg_sctrl_sk_pane_g9

0x589b,	// (0x0002008e) popup_fep_china_hwr2_fs_candidate_window

0xdaaa,	// (0x0002829d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xdaaa,	// (0x0002829d) popup_fep_china_hwr2_fs_control_window

0xb81b,	// (0x0002600e) sctrl_sk_top_pane_g2

0x0001,

0xfcf2,	// (0x0002a4e5) sctrl_sk_top_pane_g

0x2f68,	// (0x0001d75b) aid_fep_china_hwr2_fs_cell_ParamLimits

0x2f68,	// (0x0001d75b) aid_fep_china_hwr2_fs_cell

0x2f7c,	// (0x0001d76f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x2f7c,	// (0x0001d76f) bg_popup_fep_shadow_pane_cp4

0x2f93,	// (0x0001d786) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x2f93,	// (0x0001d786) bg_popup_fep_shadow_pane_cp5

0x2fa5,	// (0x0001d798) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x2fa5,	// (0x0001d798) popup_fep_china_hwr2_fs_control_bar_grid

0x2fb9,	// (0x0001d7ac) popup_fep_china_hwr2_fs_control_funtion_grid

0xe634,	// (0x00028e27) aid_fep_china_hwr2_fs_candi_cell

0x7093,	// (0x00021886) bg_popup_fep_shadow_pane_cp6

0xe63e,	// (0x00028e31) popup_fep_china_hwr2_fs_candidate_grid

0x2fc1,	// (0x0001d7b4) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x2fc1,	// (0x0001d7b4) cell_fep_china_hwr2_fs_funtion_grid

0xb5a0,	// (0x00025d93) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xe61a,	// (0x00028e0d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xe61a,	// (0x00028e0d) cell_fep_china_hwr2_fs_funtion_grid_g1

0xe648,	// (0x00028e3b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xe648,	// (0x00028e3b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0d,	// (0x0002a500) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0d,	// (0x0002a500) cell_fep_china_hwr2_fs_funtion_grid_g

0x2fd9,	// (0x0001d7cc) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x2fd9,	// (0x0001d7cc) cell_fep_china_hwr2_fs_funtion_grid_t1

0x2fee,	// (0x0001d7e1) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x2fee,	// (0x0001d7e1) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd12,	// (0x0002a505) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd12,	// (0x0002a505) cell_fep_china_hwr2_fs_funtion_grid_t

0xe65e,	// (0x00028e51) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xe666,	// (0x00028e59) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xe66e,	// (0x00028e61) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd17,	// (0x0002a50a) popup_fep_china_hwr2_fs_control_bar_grid_g

0xe676,	// (0x00028e69) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xe676,	// (0x00028e69) cell_fep_china_hwr2_fs_candidate_grid

0xe68f,	// (0x00028e82) popup_fep_china_hwr2_fs_candidate_grid_g20

0xe697,	// (0x00028e8a) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb5a0,	// (0x00025d93) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb5a0,	// (0x00025d93) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3e,	// (0x0002a331) cell_fep_china_hwr2_fs_candidate_grid_g

0xe69f,	// (0x00028e92) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8a80,	// (0x00023273) clock_nsta_pane_cp_24_ParamLimits

0x8a80,	// (0x00023273) clock_nsta_pane_cp_24

0x8afe,	// (0x000232f1) indicator_nsta_pane_cp_24_ParamLimits

0x8afe,	// (0x000232f1) indicator_nsta_pane_cp_24

0x9c12,	// (0x00024405) heading_pane_g1

0x0001,

0xf8c5,	// (0x0002a0b8) heading_pane_g

0xa621,	// (0x00024e14) grid_sct_catagory_button_pane

0xa653,	// (0x00024e46) scroll_pane_cp5_ParamLimits

0xb15c,	// (0x0002594f) button_value_adjust_pane_cp5_ParamLimits

0xb15c,	// (0x0002594f) button_value_adjust_pane_cp5

0xb23b,	// (0x00025a2e) form2_midp_time_pane_ParamLimits

0xe6ad,	// (0x00028ea0) cell_sct_catagory_button_pane_ParamLimits

0xe6ad,	// (0x00028ea0) cell_sct_catagory_button_pane

0xb565,	// (0x00025d58) bg_button_pane_cp01_ParamLimits

0xb565,	// (0x00025d58) bg_button_pane_cp01

0xb5a0,	// (0x00025d93) cell_sct_catagory_button_pane_g1

0xdfe9,	// (0x000287dc) popup_tb_extension_window

0x300a,	// (0x0001d7fd) aid_size_cell_ext_ParamLimits

0x300a,	// (0x0001d7fd) aid_size_cell_ext

0x774b,	// (0x00021f3e) bg_tb_trans_pane_cp1_ParamLimits

0x774b,	// (0x00021f3e) bg_tb_trans_pane_cp1

0x3030,	// (0x0001d823) grid_tb_ext_pane_ParamLimits

0x3030,	// (0x0001d823) grid_tb_ext_pane

0x306d,	// (0x0001d860) cell_tb_ext_pane_ParamLimits

0x306d,	// (0x0001d860) cell_tb_ext_pane

0x3095,	// (0x0001d888) cell_tb_ext_pane_g1_ParamLimits

0x3095,	// (0x0001d888) cell_tb_ext_pane_g1

0xe6bf,	// (0x00028eb2) cell_tb_ext_pane_t1

0x7410,	// (0x00021c03) list_highlight_pane_cp11_ParamLimits

0x7410,	// (0x00021c03) list_highlight_pane_cp11

0x50ce,	// (0x0001f8c1) popup_uni_indicator_window_ParamLimits

0x50ce,	// (0x0001f8c1) popup_uni_indicator_window

0x79da,	// (0x000221cd) bg_popup_sub_pane_cp14

0xe6da,	// (0x00028ecd) list_uniindi_pane

0xe6e6,	// (0x00028ed9) uniindi_top_pane

0x7410,	// (0x00021c03) bg_uniindi_top_pane

0xe705,	// (0x00028ef8) uniindi_top_pane_g1

0xe71b,	// (0x00028f0e) uniindi_top_pane_g2

0x0003,

0xfd1e,	// (0x0002a511) uniindi_top_pane_g

0xe745,	// (0x00028f38) uniindi_top_pane_t1

0xe76f,	// (0x00028f62) list_single_uniindi_pane_ParamLimits

0xe76f,	// (0x00028f62) list_single_uniindi_pane

0xb5a0,	// (0x00025d93) bg_uniindi_top_pane_g1

0xe781,	// (0x00028f74) list_single_uniindi_pane_g1

0xe794,	// (0x00028f87) list_single_uniindi_pane_t1

0x7093,	// (0x00021886) control_bg_pane

0xe7b9,	// (0x00028fac) bg_sctrl_sk_pane_cp1

0xe7c2,	// (0x00028fb5) bg_sctrl_sk_pane_cp2

0xe7cb,	// (0x00028fbe) control_bg_pane_g1

0xe7d4,	// (0x00028fc7) control_bg_pane_g2

0x0001,

0xfd27,	// (0x0002a51a) control_bg_pane_g

0xaf8c,	// (0x0002577f) cell_indicator_nsta_pane_g1_ParamLimits

0x25de,	// (0x0001cdd1) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa2,	// (0x0002a295) cell_indicator_nsta_pane_g_ParamLimits

0x4a10,	// (0x0001f203) form2_midp_time_pane_t1_ParamLimits

0x6225,	// (0x00020a18) main_idle_act4_pane_ParamLimits

0x6225,	// (0x00020a18) main_idle_act4_pane

0xdfe9,	// (0x000287dc) popup_tb_extension_window_ParamLimits

0x3054,	// (0x0001d847) tb_ext_find_pane_ParamLimits

0x3054,	// (0x0001d847) tb_ext_find_pane

0xe7dd,	// (0x00028fd0) ai_gene_pane_1_cp1

0x8781,	// (0x00022f74) ai_gene_pane_2_cp1

0xe7e5,	// (0x00028fd8) list_single_idle_plugin_calendar_pane

0xe7ee,	// (0x00028fe1) list_single_idle_plugin_notification_pane

0xe7f7,	// (0x00028fea) list_single_idle_plugin_player_pane

0x30b2,	// (0x0001d8a5) list_single_idle_plugin_shortcut_pane_ParamLimits

0x30b2,	// (0x0001d8a5) list_single_idle_plugin_shortcut_pane

0x30da,	// (0x0001d8cd) main_idle_act4_pane_t1

0x30f0,	// (0x0001d8e3) main_idle_act4_pane_t2

0x0001,

0xfd2c,	// (0x0002a51f) main_idle_act4_pane_t

0x3108,	// (0x0001d8fb) middle_sk_idle_act4_pane_ParamLimits

0x3108,	// (0x0001d8fb) middle_sk_idle_act4_pane

0x3124,	// (0x0001d917) popup_clock_digital_analogue_window_cp2

0x314b,	// (0x0001d93e) shortcut_wheel_idle_act4_pane_ParamLimits

0x314b,	// (0x0001d93e) shortcut_wheel_idle_act4_pane

0xb5a0,	// (0x00025d93) shortcut_wheel_idle_act4_pane_g1

0xb5a0,	// (0x00025d93) shortcut_wheel_idle_act4_pane_g2

0xb5a0,	// (0x00025d93) shortcut_wheel_idle_act4_pane_g3

0xb5a0,	// (0x00025d93) shortcut_wheel_idle_act4_pane_g4

0xb5a0,	// (0x00025d93) shortcut_wheel_idle_act4_pane_g5

0xe800,	// (0x00028ff3) shortcut_wheel_idle_act4_pane_g6

0xe808,	// (0x00028ffb) shortcut_wheel_idle_act4_pane_g7

0xe810,	// (0x00029003) shortcut_wheel_idle_act4_pane_g8

0xe818,	// (0x0002900b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd31,	// (0x0002a524) shortcut_wheel_idle_act4_pane_g

0x001f,	// (0x0001a812) middle_sk_idle_act4_pane_g1_ParamLimits

0x001f,	// (0x0001a812) middle_sk_idle_act4_pane_g1

0x31c8,	// (0x0001d9bb) middle_sk_idle_act4_pane_g2_ParamLimits

0x31c8,	// (0x0001d9bb) middle_sk_idle_act4_pane_g2

0x0001,

0xfd54,	// (0x0002a547) middle_sk_idle_act4_pane_g_ParamLimits

0xfd54,	// (0x0002a547) middle_sk_idle_act4_pane_g

0x31e0,	// (0x0001d9d3) middle_sk_idle_act4_pane_t1_ParamLimits

0x31e0,	// (0x0001d9d3) middle_sk_idle_act4_pane_t1

0x320f,	// (0x0001da02) grid_ai_shortcut_pane_ParamLimits

0x320f,	// (0x0001da02) grid_ai_shortcut_pane

0x322c,	// (0x0001da1f) list_highlight_pane_cp16_ParamLimits

0x322c,	// (0x0001da1f) list_highlight_pane_cp16

0x3239,	// (0x0001da2c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x3239,	// (0x0001da2c) list_single_idle_plugin_shortcut_pane_g1

0x3245,	// (0x0001da38) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x3245,	// (0x0001da38) list_single_idle_plugin_shortcut_pane_g2

0x3261,	// (0x0001da54) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x3261,	// (0x0001da54) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd59,	// (0x0002a54c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd59,	// (0x0002a54c) list_single_idle_plugin_shortcut_pane_g

0x3276,	// (0x0001da69) cell_ai_shortcut_pane_ParamLimits

0x3276,	// (0x0001da69) cell_ai_shortcut_pane

0x328c,	// (0x0001da7f) cell_ai_shortcut_pane_g1_ParamLimits

0x328c,	// (0x0001da7f) cell_ai_shortcut_pane_g1

0xe7dd,	// (0x00028fd0) ai_gene_pane_1_cp2

0xe820,	// (0x00029013) ai_gene_pane_2_cp2

0xe828,	// (0x0002901b) list_highlight_pane_cp15

0xe831,	// (0x00029024) list_single_idle_plugin_calendar_pane_g1

0xe828,	// (0x0002901b) list_highlight_pane_cp17

0xe839,	// (0x0002902c) list_single_idle_plugin_calendar_pane_g1_copy1

0xe841,	// (0x00029034) list_single_idle_plugin_player_pane_g1

0xa8bc,	// (0x000250af) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd60,	// (0x0002a553) list_single_idle_plugin_player_pane_g

0xe849,	// (0x0002903c) list_single_idle_plugin_player_pane_t1

0xe857,	// (0x0002904a) list_single_idle_plugin_player_pane_t2

0xe865,	// (0x00029058) list_single_idle_plugin_player_pane_t3

0xe873,	// (0x00029066) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd65,	// (0x0002a558) list_single_idle_plugin_player_pane_t

0xe881,	// (0x00029074) wait_bar_pane_cp15

0xe889,	// (0x0002907c) grid_ai_notification_pane

0xa8bc,	// (0x000250af) list_single_idle_plugin_notification_pane_g1

0x32ae,	// (0x0001daa1) cell_ai_notification_pane_ParamLimits

0x32ae,	// (0x0001daa1) cell_ai_notification_pane

0xe892,	// (0x00029085) cell_ai_notification_pane_g1

0xe89a,	// (0x0002908d) cell_ai_notification_pane_t1

0x32bb,	// (0x0001daae) tb_ext_find_button_pane

0x32c3,	// (0x0001dab6) tb_ext_find_pane_g1

0x32cb,	// (0x0001dabe) tb_ext_find_pane_t1

0x803b,	// (0x0002282e) tb_ext_find_button_pane_g1

0xe8a8,	// (0x0002909b) tb_ext_find_button_pane_g2

0x0001,

0xfd6e,	// (0x0002a561) tb_ext_find_button_pane_g

0x30da,	// (0x0001d8cd) main_idle_act4_pane_t1_ParamLimits

0x30f0,	// (0x0001d8e3) main_idle_act4_pane_t2_ParamLimits

0xfd2c,	// (0x0002a51f) main_idle_act4_pane_t_ParamLimits

0x3124,	// (0x0001d917) popup_clock_digital_analogue_window_cp2_ParamLimits

0x313b,	// (0x0001d92e) sat_plugin_idle_act4_pane_ParamLimits

0x313b,	// (0x0001d92e) sat_plugin_idle_act4_pane

0x32d9,	// (0x0001dacc) sat_plugin_idle_act4_pane_t1_ParamLimits

0x32d9,	// (0x0001dacc) sat_plugin_idle_act4_pane_t1

0x32f1,	// (0x0001dae4) sat_plugin_idle_act4_pane_t2_ParamLimits

0x32f1,	// (0x0001dae4) sat_plugin_idle_act4_pane_t2

0x3309,	// (0x0001dafc) sat_plugin_idle_act4_pane_t3_ParamLimits

0x3309,	// (0x0001dafc) sat_plugin_idle_act4_pane_t3

0x3321,	// (0x0001db14) sat_plugin_idle_act4_pane_t4_ParamLimits

0x3321,	// (0x0001db14) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd73,	// (0x0002a566) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd73,	// (0x0002a566) sat_plugin_idle_act4_pane_t

0x5017,	// (0x0001f80a) popup_battery_window_ParamLimits

0x5017,	// (0x0001f80a) popup_battery_window

0x7410,	// (0x00021c03) bg_popup_sub_pane_cp25_ParamLimits

0x7410,	// (0x00021c03) bg_popup_sub_pane_cp25

0xe8b1,	// (0x000290a4) popup_battery_window_g1_ParamLimits

0xe8b1,	// (0x000290a4) popup_battery_window_g1

0xe8bd,	// (0x000290b0) popup_battery_window_t1_ParamLimits

0xe8bd,	// (0x000290b0) popup_battery_window_t1

0xe8cf,	// (0x000290c2) popup_battery_window_t2_ParamLimits

0xe8cf,	// (0x000290c2) popup_battery_window_t2

0x0001,

0xfd7c,	// (0x0002a56f) popup_battery_window_t_ParamLimits

0xfd7c,	// (0x0002a56f) popup_battery_window_t

0x1ab0,	// (0x0001c2a3) midp_canvas_pane_ParamLimits

0x1b0d,	// (0x0001c300) midp_keypad_pane_ParamLimits

0x1b0d,	// (0x0001c300) midp_keypad_pane

0x8980,	// (0x00023173) main_midp_pane_ParamLimits

0xb018,	// (0x0002580b) signal_pane_g2_cp_ParamLimits

0x3339,	// (0x0001db2c) aid_size_cell_midp_keypad_ParamLimits

0x3339,	// (0x0001db2c) aid_size_cell_midp_keypad

0x3357,	// (0x0001db4a) midp_keyp_game_grid_pane_ParamLimits

0x3357,	// (0x0001db4a) midp_keyp_game_grid_pane

0x337e,	// (0x0001db71) midp_keyp_rocker_pane_ParamLimits

0x337e,	// (0x0001db71) midp_keyp_rocker_pane

0x33bf,	// (0x0001dbb2) midp_keyp_sk_left_pane_ParamLimits

0x33bf,	// (0x0001dbb2) midp_keyp_sk_left_pane

0x3413,	// (0x0001dc06) midp_keyp_sk_right_pane_ParamLimits

0x3413,	// (0x0001dc06) midp_keyp_sk_right_pane

0x7093,	// (0x00021886) bg_button_pane_cp03

0x3467,	// (0x0001dc5a) midp_keyp_sk_left_pane_g1

0x7093,	// (0x00021886) bg_button_pane_cp04

0x3467,	// (0x0001dc5a) midp_keyp_sk_right_pane_g1

0xb5a0,	// (0x00025d93) midp_keyp_rocker_pane_g1

0x3470,	// (0x0001dc63) keyp_game_cell_pane_ParamLimits

0x3470,	// (0x0001dc63) keyp_game_cell_pane

0x7093,	// (0x00021886) bg_button_pane_cp02

0x3494,	// (0x0001dc87) keyp_game_cell_pane_g1

0xd804,	// (0x00027ff7) popup_fep_vkb2_window_ParamLimits

0xd804,	// (0x00027ff7) popup_fep_vkb2_window

0xe8ec,	// (0x000290df) aid_size_cell_vkb2_ParamLimits

0xe8ec,	// (0x000290df) aid_size_cell_vkb2

0xe922,	// (0x00029115) popup_fep_vkb2_window_g1_ParamLimits

0xe922,	// (0x00029115) popup_fep_vkb2_window_g1

0xe969,	// (0x0002915c) vkb2_area_bottom_pane_ParamLimits

0xe969,	// (0x0002915c) vkb2_area_bottom_pane

0xe9bd,	// (0x000291b0) vkb2_area_keypad_pane_ParamLimits

0xe9bd,	// (0x000291b0) vkb2_area_keypad_pane

0xea05,	// (0x000291f8) vkb2_area_top_pane_ParamLimits

0xea05,	// (0x000291f8) vkb2_area_top_pane

0xea8b,	// (0x0002927e) vkb2_top_entry_pane_ParamLimits

0xea8b,	// (0x0002927e) vkb2_top_entry_pane

0xeab8,	// (0x000292ab) vkb2_top_grid_left_pane_ParamLimits

0xeab8,	// (0x000292ab) vkb2_top_grid_left_pane

0xead8,	// (0x000292cb) vkb2_top_grid_right_pane_ParamLimits

0xead8,	// (0x000292cb) vkb2_top_grid_right_pane

0x686d,	// (0x00021060) vkb2_cell_keypad_pane_ParamLimits

0x686d,	// (0x00021060) vkb2_cell_keypad_pane

0xeb1e,	// (0x00029311) vkb2_area_bottom_grid_pane_ParamLimits

0xeb1e,	// (0x00029311) vkb2_area_bottom_grid_pane

0xeb48,	// (0x0002933b) vkb2_area_bottom_pane_g1_ParamLimits

0xeb48,	// (0x0002933b) vkb2_area_bottom_pane_g1

0xeb6e,	// (0x00029361) vkb2_area_bottom_pane_g2_ParamLimits

0xeb6e,	// (0x00029361) vkb2_area_bottom_pane_g2

0xeb9f,	// (0x00029392) vkb2_area_bottom_pane_g3_ParamLimits

0xeb9f,	// (0x00029392) vkb2_area_bottom_pane_g3

0x0002,

0xfd81,	// (0x0002a574) vkb2_area_bottom_pane_g_ParamLimits

0xfd81,	// (0x0002a574) vkb2_area_bottom_pane_g

0x6a17,	// (0x0002120a) vkb2_top_cell_left_pane_ParamLimits

0x6a17,	// (0x0002120a) vkb2_top_cell_left_pane

0xec11,	// (0x00029404) vkb2_top_entry_pane_g1_ParamLimits

0xec11,	// (0x00029404) vkb2_top_entry_pane_g1

0xec1f,	// (0x00029412) vkb2_top_entry_pane_t1_ParamLimits

0xec1f,	// (0x00029412) vkb2_top_entry_pane_t1

0xec58,	// (0x0002944b) vkb2_top_entry_pane_t2_ParamLimits

0xec58,	// (0x0002944b) vkb2_top_entry_pane_t2

0xec8a,	// (0x0002947d) vkb2_top_entry_pane_t3_ParamLimits

0xec8a,	// (0x0002947d) vkb2_top_entry_pane_t3

0x0002,

0xfd88,	// (0x0002a57b) vkb2_top_entry_pane_t_ParamLimits

0xfd88,	// (0x0002a57b) vkb2_top_entry_pane_t

0xecae,	// (0x000294a1) vkb2_top_grid_right_pane_g1_ParamLimits

0xecae,	// (0x000294a1) vkb2_top_grid_right_pane_g1

0x6a7a,	// (0x0002126d) vkb2_top_grid_right_pane_g2_ParamLimits

0x6a7a,	// (0x0002126d) vkb2_top_grid_right_pane_g2

0x6a92,	// (0x00021285) vkb2_top_grid_right_pane_g3_ParamLimits

0x6a92,	// (0x00021285) vkb2_top_grid_right_pane_g3

0xecc4,	// (0x000294b7) vkb2_top_grid_right_pane_g4_ParamLimits

0xecc4,	// (0x000294b7) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8f,	// (0x0002a582) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8f,	// (0x0002a582) vkb2_top_grid_right_pane_g

0x6ac0,	// (0x000212b3) vkb2_top_cell_left_pane_g1

0x6ad7,	// (0x000212ca) vkb2_cell_keypad_pane_g1_ParamLimits

0x6ad7,	// (0x000212ca) vkb2_cell_keypad_pane_g1

0xecda,	// (0x000294cd) vkb2_cell_keypad_pane_t1_ParamLimits

0xecda,	// (0x000294cd) vkb2_cell_keypad_pane_t1

0x6ae5,	// (0x000212d8) vkb2_cell_bottom_grid_pane_ParamLimits

0x6ae5,	// (0x000212d8) vkb2_cell_bottom_grid_pane

0x6b1e,	// (0x00021311) vkb2_cell_bottom_grid_pane_g1

0x316c,	// (0x0001d95f) aid_call2_pane_cp02

0x3174,	// (0x0001d967) aid_call_pane_cp02

0x317c,	// (0x0001d96f) clock_digital_number_pane_cp10

0x3184,	// (0x0001d977) clock_digital_number_pane_cp11

0x318c,	// (0x0001d97f) clock_digital_number_pane_cp12

0x3194,	// (0x0001d987) clock_digital_number_pane_cp13

0x319c,	// (0x0001d98f) clock_digital_separator_pane_cp10

0x803b,	// (0x0002282e) popup_clock_digital_analogue_window_cp2_g1

0x803b,	// (0x0002282e) popup_clock_digital_analogue_window_cp2_g2

0x31a4,	// (0x0001d997) popup_clock_digital_analogue_window_cp2_g3

0x803b,	// (0x0002282e) popup_clock_digital_analogue_window_cp2_g4

0x31a4,	// (0x0001d997) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd44,	// (0x0002a537) popup_clock_digital_analogue_window_cp2_g

0x31ac,	// (0x0001d99f) popup_clock_digital_analogue_window_cp2_t1

0x31ba,	// (0x0001d9ad) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4f,	// (0x0002a542) popup_clock_digital_analogue_window_cp2_t

0xb5a0,	// (0x00025d93) clock_digital_number_pane_cp10_g1

0xb5a0,	// (0x00025d93) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0002a331) clock_digital_number_pane_cp10_g

0xb5a0,	// (0x00025d93) clock_digital_separator_pane_cp10_g1

0xb5a0,	// (0x00025d93) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0002a331) clock_digital_separator_pane_cp10_g

0xe727,	// (0x00028f1a) uniindi_top_pane_g3

0xe738,	// (0x00028f2b) uniindi_top_pane_g4

0x68f8,	// (0x000210eb) vkb2_row_keypad_pane_ParamLimits

0x68f8,	// (0x000210eb) vkb2_row_keypad_pane

0x6b3e,	// (0x00021331) vkb2_cell_t_keypad_pane_ParamLimits

0x6b3e,	// (0x00021331) vkb2_cell_t_keypad_pane

0x6b4e,	// (0x00021341) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6b4e,	// (0x00021341) vkb2_cell_t_keypad_pane_cp08

0x6b61,	// (0x00021354) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6b61,	// (0x00021354) vkb2_cell_t_keypad_pane_cp09

0x6b75,	// (0x00021368) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6b75,	// (0x00021368) vkb2_cell_t_keypad_pane_cp01

0x6b86,	// (0x00021379) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6b86,	// (0x00021379) vkb2_cell_t_keypad_pane_cp02

0x6b97,	// (0x0002138a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6b97,	// (0x0002138a) vkb2_cell_t_keypad_pane_cp03

0x6ba8,	// (0x0002139b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6ba8,	// (0x0002139b) vkb2_cell_t_keypad_pane_cp04

0x6bb9,	// (0x000213ac) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6bb9,	// (0x000213ac) vkb2_cell_t_keypad_pane_cp05

0x6bca,	// (0x000213bd) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6bca,	// (0x000213bd) vkb2_cell_t_keypad_pane_cp06

0x6bdb,	// (0x000213ce) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6bdb,	// (0x000213ce) vkb2_cell_t_keypad_pane_cp07

0x6bec,	// (0x000213df) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6bec,	// (0x000213df) vkb2_cell_t_keypad_pane_cp10

0xb81b,	// (0x0002600e) vkb2_cell_t_keypad_pane_g1

0xecf1,	// (0x000294e4) vkb2_cell_t_keypad_pane_t1

0x7093,	// (0x00021886) popup_grid_graphic2_window

0xed03,	// (0x000294f6) aid_size_cell_graphic2_ParamLimits

0xed03,	// (0x000294f6) aid_size_cell_graphic2

0xed41,	// (0x00029534) bg_popup_window_pane_cp21_ParamLimits

0xed41,	// (0x00029534) bg_popup_window_pane_cp21

0xed4f,	// (0x00029542) graphic2_pages_pane_ParamLimits

0xed4f,	// (0x00029542) graphic2_pages_pane

0xeda5,	// (0x00029598) grid_graphic2_control_pane_ParamLimits

0xeda5,	// (0x00029598) grid_graphic2_control_pane

0xeded,	// (0x000295e0) grid_graphic2_pane_ParamLimits

0xeded,	// (0x000295e0) grid_graphic2_pane

0xee74,	// (0x00029667) cell_graphic2_pane

0x7093,	// (0x00021886) main_comp_mode_pane

0xe32e,	// (0x00028b21) list_ai3_gene_pane_ParamLimits

0x2eb0,	// (0x0001d6a3) bg_popup_window_pane_cp19_ParamLimits

0xe49e,	// (0x00028c91) bg_touch_area_indi_pane_ParamLimits

0xe49e,	// (0x00028c91) bg_touch_area_indi_pane

0xe4b4,	// (0x00028ca7) bg_touch_area_indi_pane_cp01_ParamLimits

0xe4b4,	// (0x00028ca7) bg_touch_area_indi_pane_cp01

0xe4ca,	// (0x00028cbd) bg_touch_area_indi_pane_cp02_ParamLimits

0xe4ca,	// (0x00028cbd) bg_touch_area_indi_pane_cp02

0xe4e2,	// (0x00028cd5) bg_touch_area_indi_pane_cp03_ParamLimits

0xe4e2,	// (0x00028cd5) bg_touch_area_indi_pane_cp03

0xe4fc,	// (0x00028cef) popup_slider_window_g1_ParamLimits

0xe518,	// (0x00028d0b) popup_slider_window_g2_ParamLimits

0xe534,	// (0x00028d27) popup_slider_window_g3_ParamLimits

0xfcd9,	// (0x0002a4cc) popup_slider_window_g_ParamLimits

0xe550,	// (0x00028d43) popup_slider_window_t1_ParamLimits

0xe596,	// (0x00028d89) small_volume_slider_vertical_pane_ParamLimits

0xee74,	// (0x00029667) cell_graphic2_pane_ParamLimits

0xeed1,	// (0x000296c4) bg_button_pane_cp10_ParamLimits

0xeed1,	// (0x000296c4) bg_button_pane_cp10

0xeee4,	// (0x000296d7) bg_button_pane_cp11_ParamLimits

0xeee4,	// (0x000296d7) bg_button_pane_cp11

0xeef7,	// (0x000296ea) graphic2_pages_pane_g1_ParamLimits

0xeef7,	// (0x000296ea) graphic2_pages_pane_g1

0xef12,	// (0x00029705) graphic2_pages_pane_g2_ParamLimits

0xef12,	// (0x00029705) graphic2_pages_pane_g2

0x0001,

0xfd9d,	// (0x0002a590) graphic2_pages_pane_g_ParamLimits

0xfd9d,	// (0x0002a590) graphic2_pages_pane_g

0xef2a,	// (0x0002971d) graphic2_pages_pane_t1_ParamLimits

0xef2a,	// (0x0002971d) graphic2_pages_pane_t1

0xef42,	// (0x00029735) cell_graphic2_control_pane_ParamLimits

0xef42,	// (0x00029735) cell_graphic2_control_pane

0xef74,	// (0x00029767) cell_graphic2_pane_g1_ParamLimits

0xef74,	// (0x00029767) cell_graphic2_pane_g1

0x002d,	// (0x0001a820) cell_graphic2_pane_g2_ParamLimits

0x002d,	// (0x0001a820) cell_graphic2_pane_g2

0xef81,	// (0x00029774) cell_graphic2_pane_g3_ParamLimits

0xef81,	// (0x00029774) cell_graphic2_pane_g3

0x003a,	// (0x0001a82d) cell_graphic2_pane_g4_ParamLimits

0x003a,	// (0x0001a82d) cell_graphic2_pane_g4

0xef8e,	// (0x00029781) cell_graphic2_pane_g5_ParamLimits

0xef8e,	// (0x00029781) cell_graphic2_pane_g5

0x0004,

0xfda2,	// (0x0002a595) cell_graphic2_pane_g_ParamLimits

0xfda2,	// (0x0002a595) cell_graphic2_pane_g

0xefae,	// (0x000297a1) cell_graphic2_pane_t1_ParamLimits

0xefae,	// (0x000297a1) cell_graphic2_pane_t1

0x9c06,	// (0x000243f9) grid_highlight_pane_cp11_ParamLimits

0x9c06,	// (0x000243f9) grid_highlight_pane_cp11

0x7410,	// (0x00021c03) bg_button_pane_cp05

0xefe3,	// (0x000297d6) cell_graphic2_control_pane_g1

0xb5a0,	// (0x00025d93) bg_touch_area_indi_pane_g1

0xf38f,	// (0x00029b82) aid_cmod_rocker_key_size

0xf399,	// (0x00029b8c) aid_cmode_itu_key_size

0xf3a3,	// (0x00029b96) main_cmode_video_pane

0xf3ad,	// (0x00029ba0) main_comp_mode_itu_pane

0xf3b9,	// (0x00029bac) main_comp_mode_rocker_pane

0xf3c5,	// (0x00029bb8) cell_cmode_rocker_pane_ParamLimits

0xf3c5,	// (0x00029bb8) cell_cmode_rocker_pane

0xf3d7,	// (0x00029bca) cell_cmode_itu_pane_ParamLimits

0xf3d7,	// (0x00029bca) cell_cmode_itu_pane

0x79da,	// (0x000221cd) bg_button_pane_cp06_ParamLimits

0x79da,	// (0x000221cd) bg_button_pane_cp06

0xb81b,	// (0x0002600e) cell_cmode_rocker_pane_g1_ParamLimits

0xb81b,	// (0x0002600e) cell_cmode_rocker_pane_g1

0xe61a,	// (0x00028e0d) cell_cmode_rocker_pane_g2_ParamLimits

0xe61a,	// (0x00028e0d) cell_cmode_rocker_pane_g2

0x0001,

0xfdb2,	// (0x0002a5a5) cell_cmode_rocker_pane_g_ParamLimits

0xfdb2,	// (0x0002a5a5) cell_cmode_rocker_pane_g

0x7093,	// (0x00021886) bg_button_pane_cp07

0xf3ec,	// (0x00029bdf) cell_cmode_itu_pane_g1

0xf3f5,	// (0x00029be8) cell_cmode_itu_pane_t1

0xf403,	// (0x00029bf6) cell_cmode_itu_pane_t2

0x0001,

0xfdb7,	// (0x0002a5aa) cell_cmode_itu_pane_t

0xe7a9,	// (0x00028f9c) aid_touch_ctrl_left

0xe7b1,	// (0x00028fa4) aid_touch_ctrl_right

0x7093,	// (0x00021886) compa_mode_pane

0xf009,	// (0x000297fc) aid_cmod_rocker_key_size_cp

0xf013,	// (0x00029806) aid_cmode_itu_key_size_cp

0xf411,	// (0x00029c04) compa_mode_pane_g1

0xf419,	// (0x00029c0c) compa_mode_pane_g2

0xf421,	// (0x00029c14) compa_mode_pane_g3

0x0002,

0xfdbc,	// (0x0002a5af) compa_mode_pane_g

0xf01d,	// (0x00029810) main_comp_mode_itu_pane_cp

0xf025,	// (0x00029818) main_comp_mode_rocker_pane_cp

0xf02d,	// (0x00029820) cell_cmode_itu_pane_cp_ParamLimits

0xf02d,	// (0x00029820) cell_cmode_itu_pane_cp

0xf042,	// (0x00029835) cell_cmode_rocker_pane_cp_ParamLimits

0xf042,	// (0x00029835) cell_cmode_rocker_pane_cp

0x79da,	// (0x000221cd) bg_button_pane_cp06_cp_ParamLimits

0x79da,	// (0x000221cd) bg_button_pane_cp06_cp

0xb81b,	// (0x0002600e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb81b,	// (0x0002600e) cell_cmode_rocker_pane_g1_cp

0xb5a0,	// (0x00025d93) cell_cmode_rocker_pane_g2_cp

0x7093,	// (0x00021886) bg_button_pane_cp07_cp

0xf054,	// (0x00029847) cell_cmode_itu_pane_g1_cp

0xf05d,	// (0x00029850) cell_cmode_itu_pane_t1_cp

0xf05d,	// (0x00029850) cell_cmode_itu_pane_t2_cp

0x23e0,	// (0x0001cbd3) settings_code_pane_cp2

0x7187,	// (0x0002197a) bg_popup_window_pane_cp3_ParamLimits

0x75de,	// (0x00021dd1) heading_pane_cp3_ParamLimits

0x75ea,	// (0x00021ddd) listscroll_popup_graphic_pane_ParamLimits

0x6233,	// (0x00020a26) fep_hwr_aid_pane_ParamLimits

0x65e2,	// (0x00020dd5) aid_touch_sctrl_top_ParamLimits

0x65ef,	// (0x00020de2) sctrl_sk_top_pane_g1_ParamLimits

0xb81b,	// (0x0002600e) sctrl_sk_top_pane_g2_ParamLimits

0xfcf2,	// (0x0002a4e5) sctrl_sk_top_pane_g_ParamLimits

0x65fc,	// (0x00020def) sctrl_sk_top_pane_t1_ParamLimits

0x65e2,	// (0x00020dd5) aid_touch_sctrl_bottom_ParamLimits

0x65fc,	// (0x00020def) sctrl_sk_bottom_pane_t1_ParamLimits

0xe6f3,	// (0x00028ee6) aid_area_touch_clock

0xea4d,	// (0x00029240) aid_vkb2_area_top_pane_cell_ParamLimits

0xea4d,	// (0x00029240) aid_vkb2_area_top_pane_cell

0xeaf8,	// (0x000292eb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xeaf8,	// (0x000292eb) aid_vkb2_area_bottom_pane_cell

0xec09,	// (0x000293fc) popup_char_count_window

0xf429,	// (0x00029c1c) popup_char_count_window_g1

0xf432,	// (0x00029c25) popup_char_count_window_g2

0xf43b,	// (0x00029c2e) popup_char_count_window_g3

0x0002,

0xfdc3,	// (0x0002a5b6) popup_char_count_window_g

0xf444,	// (0x00029c37) popup_char_count_window_t1

0x669d,	// (0x00020e90) popup_fep_char_preview_window_ParamLimits

0x669d,	// (0x00020e90) popup_fep_char_preview_window

0xea6d,	// (0x00029260) vkb2_top_candi_pane_ParamLimits

0xea6d,	// (0x00029260) vkb2_top_candi_pane

0xf06b,	// (0x0002985e) cell_vkb2_top_candi_pane_ParamLimits

0xf06b,	// (0x0002985e) cell_vkb2_top_candi_pane

0x9598,	// (0x00023d8b) bg_popup_fep_char_preview_window_ParamLimits

0x9598,	// (0x00023d8b) bg_popup_fep_char_preview_window

0x6c01,	// (0x000213f4) popup_fep_char_preview_window_t1_ParamLimits

0x6c01,	// (0x000213f4) popup_fep_char_preview_window_t1

0xf452,	// (0x00029c45) bg_popup_fep_char_preview_window_g1

0xf45a,	// (0x00029c4d) bg_popup_fep_char_preview_window_g2

0xf462,	// (0x00029c55) bg_popup_fep_char_preview_window_g3

0xf46a,	// (0x00029c5d) bg_popup_fep_char_preview_window_g4

0xf472,	// (0x00029c65) bg_popup_fep_char_preview_window_g5

0x6c3b,	// (0x0002142e) bg_popup_fep_char_preview_window_g6

0xf47a,	// (0x00029c6d) bg_popup_fep_char_preview_window_g7

0xf482,	// (0x00029c75) bg_popup_fep_char_preview_window_g8

0xf48a,	// (0x00029c7d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdca,	// (0x0002a5bd) bg_popup_fep_char_preview_window_g

0xb81b,	// (0x0002600e) cell_vkb2_top_candi_pane_g1_ParamLimits

0xb81b,	// (0x0002600e) cell_vkb2_top_candi_pane_g1

0xbc9d,	// (0x00026490) cell_vkb2_top_candi_pane_g2_ParamLimits

0xbc9d,	// (0x00026490) cell_vkb2_top_candi_pane_g2

0xbcbe,	// (0x000264b1) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbcbe,	// (0x000264b1) cell_vkb2_top_candi_pane_g3

0x6c43,	// (0x00021436) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6c43,	// (0x00021436) cell_vkb2_top_candi_pane_g4

0xf492,	// (0x00029c85) cell_vkb2_top_candi_pane_g5_ParamLimits

0xf492,	// (0x00029c85) cell_vkb2_top_candi_pane_g5

0xe61a,	// (0x00028e0d) cell_vkb2_top_candi_pane_g6_ParamLimits

0xe61a,	// (0x00028e0d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddd,	// (0x0002a5d0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddd,	// (0x0002a5d0) cell_vkb2_top_candi_pane_g

0x6c64,	// (0x00021457) cell_vkb2_top_candi_pane_t1

0x6084,	// (0x00020877) aid_size_touch_slider_mark_ParamLimits

0x6084,	// (0x00020877) aid_size_touch_slider_mark

0xed8b,	// (0x0002957e) grid_graphic2_catg_pane_ParamLimits

0xed8b,	// (0x0002957e) grid_graphic2_catg_pane

0xee47,	// (0x0002963a) popup_grid_graphic2_window_t1_ParamLimits

0xee47,	// (0x0002963a) popup_grid_graphic2_window_t1

0xee5d,	// (0x00029650) popup_grid_graphic2_window_t2_ParamLimits

0xee5d,	// (0x00029650) popup_grid_graphic2_window_t2

0x0001,

0xfd98,	// (0x0002a58b) popup_grid_graphic2_window_t_ParamLimits

0xfd98,	// (0x0002a58b) popup_grid_graphic2_window_t

0x7410,	// (0x00021c03) bg_button_pane_cp05_ParamLimits

0xefe3,	// (0x000297d6) cell_graphic2_control_pane_g1_ParamLimits

0xf0d1,	// (0x000298c4) cell_graphic2_catg_pane_ParamLimits

0xf0d1,	// (0x000298c4) cell_graphic2_catg_pane

0x7093,	// (0x00021886) bg_button_pane_cp12

0xf0e3,	// (0x000298d6) cell_graphic2_catg_pane_g1

0xe6bf,	// (0x00028eb2) cell_tb_ext_pane_t1_ParamLimits

0x6a37,	// (0x0002122a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6a37,	// (0x0002122a) vkb2_top_cell_right_narrow_pane

0x6a4f,	// (0x00021242) vkb2_top_cell_right_wide_pane_ParamLimits

0x6a4f,	// (0x00021242) vkb2_top_cell_right_wide_pane

0x6225,	// (0x00020a18) bg_vkb2_func_pane_ParamLimits

0x6225,	// (0x00020a18) bg_vkb2_func_pane

0x6ac0,	// (0x000212b3) vkb2_top_cell_left_pane_g1_ParamLimits

0x6225,	// (0x00020a18) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6225,	// (0x00020a18) bg_vkb2_fuc_pane_cp03

0x6b1e,	// (0x00021311) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8e8a,	// (0x0002367d) bg_vkb2_func_pane_g1

0x8e92,	// (0x00023685) bg_vkb2_func_pane_g2

0x8ea2,	// (0x00023695) bg_vkb2_func_pane_g3

0x8e9a,	// (0x0002368d) bg_vkb2_func_pane_g4

0x8eaa,	// (0x0002369d) bg_vkb2_func_pane_g5

0x8eb2,	// (0x000236a5) bg_vkb2_func_pane_g6

0x8eba,	// (0x000236ad) bg_vkb2_func_pane_g7

0x8ec2,	// (0x000236b5) bg_vkb2_func_pane_g8

0x8e82,	// (0x00023675) bg_vkb2_func_pane_g9

0x0008,

0xfdea,	// (0x0002a5dd) bg_vkb2_func_pane_g

0x6225,	// (0x00020a18) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6225,	// (0x00020a18) bg_vkb2_fuc_pane_cp01

0x6ac0,	// (0x000212b3) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6ac0,	// (0x000212b3) vkb2_top_cell_right_wide_pane_g1

0x6225,	// (0x00020a18) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6225,	// (0x00020a18) bg_vkb2_fuc_pane_cp02

0x6b1e,	// (0x00021311) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6b1e,	// (0x00021311) vkb2_top_cell_right_narrow_pane_g1

0x2dea,	// (0x0001d5dd) aid_touch_area_decrease_ParamLimits

0x2dea,	// (0x0001d5dd) aid_touch_area_decrease

0x2e24,	// (0x0001d617) aid_touch_area_increase_ParamLimits

0x2e24,	// (0x0001d617) aid_touch_area_increase

0x2e4c,	// (0x0001d63f) aid_touch_area_mute_ParamLimits

0x2e4c,	// (0x0001d63f) aid_touch_area_mute

0x2e7c,	// (0x0001d66f) aid_touch_area_slider_ParamLimits

0x2e7c,	// (0x0001d66f) aid_touch_area_slider

0x2ebc,	// (0x0001d6af) popup_slider_window_g4_ParamLimits

0x2ebc,	// (0x0001d6af) popup_slider_window_g4

0x2ee4,	// (0x0001d6d7) popup_slider_window_g5_ParamLimits

0x2ee4,	// (0x0001d6d7) popup_slider_window_g5

0x2f18,	// (0x0001d70b) popup_slider_window_g6_ParamLimits

0x2f18,	// (0x0001d70b) popup_slider_window_g6

0xe57e,	// (0x00028d71) popup_slider_window_t2_ParamLimits

0xe57e,	// (0x00028d71) popup_slider_window_t2

0x0001,

0xfce6,	// (0x0002a4d9) popup_slider_window_t_ParamLimits

0xfce6,	// (0x0002a4d9) popup_slider_window_t

0x2f34,	// (0x0001d727) slider_pane_ParamLimits

0x2f34,	// (0x0001d727) slider_pane

0xf4b3,	// (0x00029ca6) slider_pane_g1_ParamLimits

0xf4b3,	// (0x00029ca6) slider_pane_g1

0xf4c7,	// (0x00029cba) slider_pane_g2_ParamLimits

0xf4c7,	// (0x00029cba) slider_pane_g2

0xf4dd,	// (0x00029cd0) slider_pane_g3_ParamLimits

0xf4dd,	// (0x00029cd0) slider_pane_g3

0x0003,

0xfdfd,	// (0x0002a5f0) slider_pane_g_ParamLimits

0xfdfd,	// (0x0002a5f0) slider_pane_g

0xe031,	// (0x00028824) popup_tb_float_extension_window_ParamLimits

0xe031,	// (0x00028824) popup_tb_float_extension_window

0xf509,	// (0x00029cfc) aid_size_cell_tb_float_ext

0x7093,	// (0x00021886) bg_popup_sub_window_cp28

0xf515,	// (0x00029d08) grid_tb_float_ext_pane

0xf51f,	// (0x00029d12) cell_tb_float_ext_pane_ParamLimits

0xf51f,	// (0x00029d12) cell_tb_float_ext_pane

0xf539,	// (0x00029d2c) cell_tb_float_ext_pane_g1

0xf542,	// (0x00029d35) grid_highlight_pane_cp12

0xe2a7,	// (0x00028a9a) cell_last_hwr_side_pane_ParamLimits

0xe2a7,	// (0x00028a9a) cell_last_hwr_side_pane

0xb5a0,	// (0x00025d93) cell_last_hwr_side_pane_g1

0xf54b,	// (0x00029d3e) cell_last_hwr_side_pane_g2

0x0001,

0xfe06,	// (0x0002a5f9) cell_last_hwr_side_pane_g

0xebd4,	// (0x000293c7) vkb2_area_bottom_space_btn_pane_ParamLimits

0xebd4,	// (0x000293c7) vkb2_area_bottom_space_btn_pane

0xb81b,	// (0x0002600e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xecf1,	// (0x000294e4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6c64,	// (0x00021457) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6c83,	// (0x00021476) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6c83,	// (0x00021476) vkb2_area_bottom_space_btn_pane_g1

0x6cbd,	// (0x000214b0) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6cbd,	// (0x000214b0) vkb2_area_bottom_space_btn_pane_g2

0x6cf3,	// (0x000214e6) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6cf3,	// (0x000214e6) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0b,	// (0x0002a5fe) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0b,	// (0x0002a5fe) vkb2_area_bottom_space_btn_pane_g

0x62da,	// (0x00020acd) cel_fep_hwr_func_pane_ParamLimits

0x62da,	// (0x00020acd) cel_fep_hwr_func_pane

0xe27c,	// (0x00028a6f) cell_hwr_side_button_pane_ParamLimits

0xe27c,	// (0x00028a6f) cell_hwr_side_button_pane

0xe6f3,	// (0x00028ee6) aid_area_touch_clock_ParamLimits

0x7410,	// (0x00021c03) bg_uniindi_top_pane_ParamLimits

0xe705,	// (0x00028ef8) uniindi_top_pane_g1_ParamLimits

0xe71b,	// (0x00028f0e) uniindi_top_pane_g2_ParamLimits

0xe727,	// (0x00028f1a) uniindi_top_pane_g3_ParamLimits

0xe738,	// (0x00028f2b) uniindi_top_pane_g4_ParamLimits

0xfd1e,	// (0x0002a511) uniindi_top_pane_g_ParamLimits

0xe745,	// (0x00028f38) uniindi_top_pane_t1_ParamLimits

0x7410,	// (0x00021c03) bg_vkb2_func_pane_cp01_ParamLimits

0x7410,	// (0x00021c03) bg_vkb2_func_pane_cp01

0x0047,	// (0x0001a83a) cel_fep_hwr_func_pane_g1_ParamLimits

0x0047,	// (0x0001a83a) cel_fep_hwr_func_pane_g1

0x7410,	// (0x00021c03) bg_vkb2_func_pane_cp02_ParamLimits

0x7410,	// (0x00021c03) bg_vkb2_func_pane_cp02

0x0047,	// (0x0001a83a) cell_hwr_side_button_pane_g1_ParamLimits

0x0047,	// (0x0001a83a) cell_hwr_side_button_pane_g1

0x8d05,	// (0x000234f8) status_pane_g4_ParamLimits

0x8d05,	// (0x000234f8) status_pane_g4

0x8d1d,	// (0x00023510) status_pane_t1

0xb2a3,	// (0x00025a96) form2_midp_gauge_slider_cont_pane

0xb2ab,	// (0x00025a9e) form2_midp_gauge_slider_pane_t1_ParamLimits

0x26b4,	// (0x0001cea7) form2_midp_gauge_slider_pane_t2_ParamLimits

0x26c8,	// (0x0001cebb) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf1,	// (0x0002a2e4) form2_midp_gauge_slider_pane_t_ParamLimits

0xb2e1,	// (0x00025ad4) form2_midp_slider_pane_ParamLimits

0x665d,	// (0x00020e50) aid_size_cell_func_vkb2_ParamLimits

0x665d,	// (0x00020e50) aid_size_cell_func_vkb2

0xf4f5,	// (0x00029ce8) slider_pane_g4_ParamLimits

0xf4f5,	// (0x00029ce8) slider_pane_g4

0xf0ec,	// (0x000298df) form2_midp_gauge_slider_pane_t2_cp01

0xf0fc,	// (0x000298ef) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xf0fc,	// (0x000298ef) form2_midp_gauge_slider_pane_t3_cp01

0x6d68,	// (0x0002155b) form2_midp_slider_pane_cp01

0x7093,	// (0x00021886) navi_smil_pane

0x0077,	// (0x0001a86a) navi_smil_pane_g1

0x007f,	// (0x0001a872) navi_smil_pane_t1

0x0055,	// (0x0001a848) form2_midp_slider_pane_g1

0x005e,	// (0x0001a851) form2_midp_slider_pane_g2

0x0066,	// (0x0001a859) form2_midp_slider_pane_g3

0x0055,	// (0x0001a848) form2_midp_slider_pane_g4

0xf11b,	// (0x0002990e) form2_midp_slider_pane_g5

0x0004,

0xfe14,	// (0x0002a607) form2_midp_slider_pane_g

0x6d2d,	// (0x00021520) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6d2d,	// (0x00021520) vkb2_area_bottom_space_btn_pane_g4

0x1ce7,	// (0x0001c4da) lc0_navi_pane_ParamLimits

0x1ce7,	// (0x0001c4da) lc0_navi_pane

0x1d51,	// (0x0001c544) lc0_stat_indi_pane_ParamLimits

0x1d51,	// (0x0001c544) lc0_stat_indi_pane

0x1d66,	// (0x0001c559) ls0_title_pane_ParamLimits

0x1d66,	// (0x0001c559) ls0_title_pane

0x79da,	// (0x000221cd) bg_popup_sub_pane_cp14_ParamLimits

0xe6da,	// (0x00028ecd) list_uniindi_pane_ParamLimits

0xe6e6,	// (0x00028ed9) uniindi_top_pane_ParamLimits

0xe781,	// (0x00028f74) list_single_uniindi_pane_g1_ParamLimits

0xe794,	// (0x00028f87) list_single_uniindi_pane_t1_ParamLimits

0xf126,	// (0x00029919) lc0_stat_clock_pane_ParamLimits

0xf126,	// (0x00029919) lc0_stat_clock_pane

0xf133,	// (0x00029926) lc0_stat_indi_pane_g1_ParamLimits

0xf133,	// (0x00029926) lc0_stat_indi_pane_g1

0xf140,	// (0x00029933) lc0_stat_indi_pane_g2_ParamLimits

0xf140,	// (0x00029933) lc0_stat_indi_pane_g2

0x0001,

0xfe1f,	// (0x0002a612) lc0_stat_indi_pane_g_ParamLimits

0xfe1f,	// (0x0002a612) lc0_stat_indi_pane_g

0xf14d,	// (0x00029940) lc0_uni_indicator_pane_ParamLimits

0xf14d,	// (0x00029940) lc0_uni_indicator_pane

0x008d,	// (0x0001a880) ls0_title_pane_g1_ParamLimits

0x008d,	// (0x0001a880) ls0_title_pane_g1

0xf15a,	// (0x0002994d) ls0_title_pane_t1_ParamLimits

0xf15a,	// (0x0002994d) ls0_title_pane_t1

0xf188,	// (0x0002997b) lc0_uni_indicator_pane_g1_ParamLimits

0xf188,	// (0x0002997b) lc0_uni_indicator_pane_g1

0x00a1,	// (0x0001a894) lc0_stat_clock_pane_t1

0x7093,	// (0x00021886) main_ai5_pane

0x00af,	// (0x0001a8a2) ai5_sk_pane_ParamLimits

0x00af,	// (0x0001a8a2) ai5_sk_pane

0xf1b7,	// (0x000299aa) cell_ai5_widget_pane_ParamLimits

0xf1b7,	// (0x000299aa) cell_ai5_widget_pane

0x00bc,	// (0x0001a8af) aid_size_cell_widget_grid

0x00d2,	// (0x0001a8c5) bg_ai5_widget_pane_ParamLimits

0x00d2,	// (0x0001a8c5) bg_ai5_widget_pane

0x013c,	// (0x0001a92f) cell_ai5_widget_pane_g2

0x014c,	// (0x0001a93f) cell_ai5_widget_pane_g3

0x016b,	// (0x0001a95e) cell_ai5_widget_pane_g4

0x0177,	// (0x0001a96a) cell_ai5_widget_pane_g5

0x0183,	// (0x0001a976) cell_ai5_widget_pane_g6

0x018f,	// (0x0001a982) cell_ai5_widget_pane_g7

0x01d7,	// (0x0001a9ca) cell_ai5_widget_pane_t1_ParamLimits

0x01d7,	// (0x0001a9ca) cell_ai5_widget_pane_t1

0x01f4,	// (0x0001a9e7) cell_ai5_widget_pane_t2_ParamLimits

0x01f4,	// (0x0001a9e7) cell_ai5_widget_pane_t2

0x020c,	// (0x0001a9ff) cell_ai5_widget_pane_t3_ParamLimits

0x020c,	// (0x0001a9ff) cell_ai5_widget_pane_t3

0x0224,	// (0x0001aa17) cell_ai5_widget_pane_t4_ParamLimits

0x0224,	// (0x0001aa17) cell_ai5_widget_pane_t4

0x023e,	// (0x0001aa31) cell_ai5_widget_pane_t5_ParamLimits

0x023e,	// (0x0001aa31) cell_ai5_widget_pane_t5

0x025d,	// (0x0001aa50) cell_ai5_widget_pane_t6_ParamLimits

0x025d,	// (0x0001aa50) cell_ai5_widget_pane_t6

0x026f,	// (0x0001aa62) cell_ai5_widget_pane_t7_ParamLimits

0x026f,	// (0x0001aa62) cell_ai5_widget_pane_t7

0x0288,	// (0x0001aa7b) cell_ai5_widget_pane_t8_ParamLimits

0x0288,	// (0x0001aa7b) cell_ai5_widget_pane_t8

0x0009,

0xfe39,	// (0x0002a62c) cell_ai5_widget_pane_t_ParamLimits

0xfe39,	// (0x0002a62c) cell_ai5_widget_pane_t

0x02d4,	// (0x0001aac7) grid_ai5_widget_pane

0x79da,	// (0x000221cd) highlight_cell_ai5_widget_pane_ParamLimits

0x79da,	// (0x000221cd) highlight_cell_ai5_widget_pane

0xf222,	// (0x00029a15) ai5_sk_left_pane

0xf22c,	// (0x00029a1f) ai5_sk_middle_pane

0xf236,	// (0x00029a29) ai5_sk_right_pane

0x02e8,	// (0x0001aadb) bg_ai5_widget_pane_g1_ParamLimits

0x02e8,	// (0x0001aadb) bg_ai5_widget_pane_g1

0x02f4,	// (0x0001aae7) bg_ai5_widget_pane_g2_ParamLimits

0x02f4,	// (0x0001aae7) bg_ai5_widget_pane_g2

0x0300,	// (0x0001aaf3) bg_ai5_widget_pane_g3_ParamLimits

0x0300,	// (0x0001aaf3) bg_ai5_widget_pane_g3

0x030c,	// (0x0001aaff) bg_ai5_widget_pane_g4_ParamLimits

0x030c,	// (0x0001aaff) bg_ai5_widget_pane_g4

0x0318,	// (0x0001ab0b) bg_ai5_widget_pane_g5_ParamLimits

0x0318,	// (0x0001ab0b) bg_ai5_widget_pane_g5

0x0324,	// (0x0001ab17) bg_ai5_widget_pane_g6_ParamLimits

0x0324,	// (0x0001ab17) bg_ai5_widget_pane_g6

0x0330,	// (0x0001ab23) bg_ai5_widget_pane_g7_ParamLimits

0x0330,	// (0x0001ab23) bg_ai5_widget_pane_g7

0x033c,	// (0x0001ab2f) bg_ai5_widget_pane_g8_ParamLimits

0x033c,	// (0x0001ab2f) bg_ai5_widget_pane_g8

0x0348,	// (0x0001ab3b) bg_ai5_widget_pane_g9_ParamLimits

0x0348,	// (0x0001ab3b) bg_ai5_widget_pane_g9

0x0008,

0xfe4e,	// (0x0002a641) bg_ai5_widget_pane_g_ParamLimits

0xfe4e,	// (0x0002a641) bg_ai5_widget_pane_g

0x037b,	// (0x0001ab6e) cell_shortcut_ai5_widget_pane_ParamLimits

0x037b,	// (0x0001ab6e) cell_shortcut_ai5_widget_pane

0x8644,	// (0x00022e37) bg_cell_shortcut_ai5_widget_pane

0x038c,	// (0x0001ab7f) cell_grid_ai5_widget_pane_g1

0x0395,	// (0x0001ab88) highlight_cell_shortcut_ai5_widget_pane

0x8e92,	// (0x00023685) ai5_sk_left_pane_g1

0x039d,	// (0x0001ab90) ai5_sk_left_pane_g2

0x03a5,	// (0x0001ab98) ai5_sk_left_pane_g3

0x03ad,	// (0x0001aba0) ai5_sk_left_pane_g4

0x0003,

0xfe61,	// (0x0002a654) ai5_sk_left_pane_g

0x03b5,	// (0x0001aba8) ai5_sk_left_pane_t1

0x8e8a,	// (0x0002367d) ai5_sk_right_pane_g1

0x03c3,	// (0x0001abb6) ai5_sk_right_pane_g2

0x03cb,	// (0x0001abbe) ai5_sk_right_pane_g3

0x03d3,	// (0x0001abc6) ai5_sk_right_pane_g4

0x0003,

0xfe6a,	// (0x0002a65d) ai5_sk_right_pane_g

0x03db,	// (0x0001abce) ai5_sk_right_pane_t1

0x8e8a,	// (0x0002367d) ai5_sk_middle_pane_g1

0x8e92,	// (0x00023685) ai5_sk_middle_pane_g2

0x8eaa,	// (0x0002369d) ai5_sk_middle_pane_g3

0x03cb,	// (0x0001abbe) ai5_sk_middle_pane_g4

0x03a5,	// (0x0001ab98) ai5_sk_middle_pane_g5

0x03e9,	// (0x0001abdc) ai5_sk_middle_pane_g6

0xf240,	// (0x00029a33) ai5_sk_middle_pane_g7

0x0006,

0xfe73,	// (0x0002a666) ai5_sk_middle_pane_g

0x1bd3,	// (0x0001c3c6) aid_touch_area_size_lc0_ParamLimits

0x1bd3,	// (0x0001c3c6) aid_touch_area_size_lc0

0x6465,	// (0x00020c58) cell_hwr_candidate_pane_t1_ParamLimits

0x89e2,	// (0x000231d5) aid_touch_navi_pane

0x1e59,	// (0x0001c64c) status_dt_navi_pane_ParamLimits

0x1e59,	// (0x0001c64c) status_dt_navi_pane

0x1e71,	// (0x0001c664) status_dt_sta_pane_ParamLimits

0x1e71,	// (0x0001c664) status_dt_sta_pane

0xf248,	// (0x00029a3b) dt_sta_controll_pane

0xf255,	// (0x00029a48) dt_sta_indi_pane

0xf262,	// (0x00029a55) dt_sta_title_pane

0x7410,	// (0x00021c03) bg_dt_sta_indi_pane_ParamLimits

0x7410,	// (0x00021c03) bg_dt_sta_indi_pane

0x03f1,	// (0x0001abe4) dt_sta_battery_pane

0x03f9,	// (0x0001abec) dt_sta_indi_pane_g1

0x0402,	// (0x0001abf5) dt_sta_indi_pane_g2

0x040b,	// (0x0001abfe) dt_sta_indi_pane_g3

0x0002,

0xfe82,	// (0x0002a675) dt_sta_indi_pane_g

0x0414,	// (0x0001ac07) dt_sta_signal_pane

0x79da,	// (0x000221cd) bg_dt_sta_title_pane_ParamLimits

0x79da,	// (0x000221cd) bg_dt_sta_title_pane

0x9d5a,	// (0x0002454d) dt_sta_title_pane_g1

0x041d,	// (0x0001ac10) dt_sta_title_pane_t1_ParamLimits

0x041d,	// (0x0001ac10) dt_sta_title_pane_t1

0x7093,	// (0x00021886) bg_dt_sta_control_pane

0x0432,	// (0x0001ac25) dt_sta_controll_pane_g1

0x043b,	// (0x0001ac2e) bg_dt_sta_title_pane_g1

0x0444,	// (0x0001ac37) bg_dt_sta_title_pane_g2

0x044d,	// (0x0001ac40) bg_dt_sta_title_pane_g3

0x0002,

0xfe89,	// (0x0002a67c) bg_dt_sta_title_pane_g

0xb5a0,	// (0x00025d93) bg_dt_sta_indi_pane_g1

0x0456,	// (0x0001ac49) dt_sta_signal_pane_g1

0x045e,	// (0x0001ac51) dt_sta_signal_pane_g2

0x0001,

0xfe90,	// (0x0002a683) dt_sta_signal_pane_g

0x0466,	// (0x0001ac59) dt_sta_battery_pane_g1

0x046f,	// (0x0001ac62) dt_sta_battery_pane_t1

0xb5a0,	// (0x00025d93) bg_dt_sta_control_pane_g1

0x8149,	// (0x0002293c) fep_china_uni_eep_pane

0x8151,	// (0x00022944) fep_china_uni_entry_pane_ParamLimits

0x8161,	// (0x00022954) popup_fep_china_uni_window_g1_ParamLimits

0x8171,	// (0x00022964) popup_fep_china_uni_window_g2_ParamLimits

0x8171,	// (0x00022964) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x00029f16) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x00029f16) popup_fep_china_uni_window_g

0x047e,	// (0x0001ac71) fep_china_uni_eep_pane_g1

0x0486,	// (0x0001ac79) fep_china_uni_eep_pane_t1

0x006e,	// (0x0001a861) aid_touch_area_size_smil_player

0x8b32,	// (0x00023325) lc0_clock_pane

0x8d11,	// (0x00023504) status_pane_g5_ParamLimits

0x8d11,	// (0x00023504) status_pane_g5

0xdbc5,	// (0x000283b8) popup_keymap_window

0x8cd1,	// (0x000234c4) status_icon_pane

0x014c,	// (0x0001a93f) cell_ai5_widget_pane_g3_ParamLimits

0x016b,	// (0x0001a95e) cell_ai5_widget_pane_g4_ParamLimits

0x0177,	// (0x0001a96a) cell_ai5_widget_pane_g5_ParamLimits

0x019b,	// (0x0001a98e) cell_ai5_widget_pane_g8_ParamLimits

0x019b,	// (0x0001a98e) cell_ai5_widget_pane_g8

0x01af,	// (0x0001a9a2) cell_ai5_widget_pane_g9_ParamLimits

0x01af,	// (0x0001a9a2) cell_ai5_widget_pane_g9

0x01c3,	// (0x0001a9b6) cell_ai5_widget_pane_g10_ParamLimits

0x01c3,	// (0x0001a9b6) cell_ai5_widget_pane_g10

0x0495,	// (0x0001ac88) status_icon_pane_g1

0x7093,	// (0x00021886) bg_popup_sub_pane_cp13

0x049d,	// (0x0001ac90) popup_keymap_window_t1

0x1b6f,	// (0x0001c362) control_pane_g6_ParamLimits

0x1b6f,	// (0x0001c362) control_pane_g6

0x1b62,	// (0x0001c355) control_pane_g7_ParamLimits

0x1b62,	// (0x0001c355) control_pane_g7

0x1b55,	// (0x0001c348) control_pane_g8_ParamLimits

0x1b55,	// (0x0001c348) control_pane_g8

0xf248,	// (0x00029a3b) dt_sta_controll_pane_ParamLimits

0xf255,	// (0x00029a48) dt_sta_indi_pane_ParamLimits

0xf262,	// (0x00029a55) dt_sta_title_pane_ParamLimits

0x7912,	// (0x00022105) aid_size_touch_scroll_bar_cale

0x502b,	// (0x0001f81e) popup_discreet_window_ParamLimits

0x502b,	// (0x0001f81e) popup_discreet_window

0xd84a,	// (0x0002803d) popup_sk_window

0x9598,	// (0x00023d8b) bg_popup_sub_pane_cp28_ParamLimits

0x9598,	// (0x00023d8b) bg_popup_sub_pane_cp28

0x04ab,	// (0x0001ac9e) popup_discreet_window_g1_ParamLimits

0x04ab,	// (0x0001ac9e) popup_discreet_window_g1

0x04cb,	// (0x0001acbe) popup_discreet_window_t1_ParamLimits

0x04cb,	// (0x0001acbe) popup_discreet_window_t1

0x04e9,	// (0x0001acdc) popup_discreet_window_t2_ParamLimits

0x04e9,	// (0x0001acdc) popup_discreet_window_t2

0x0002,

0xfe95,	// (0x0002a688) popup_discreet_window_t_ParamLimits

0xfe95,	// (0x0002a688) popup_discreet_window_t

0x6f1b,	// (0x0002170e) popup_sk_window_g1

0x6f25,	// (0x00021718) popup_sk_window_g2

0x0001,

0xfe9c,	// (0x0002a68f) popup_sk_window_g

0x6f2f,	// (0x00021722) popup_sk_window_t1

0x6f3d,	// (0x00021730) popup_sk_window_t1_copy1

0x013c,	// (0x0001a92f) cell_ai5_widget_pane_g2_ParamLimits

0x029a,	// (0x0001aa8d) cell_ai5_widget_pane_t9_ParamLimits

0x029a,	// (0x0001aa8d) cell_ai5_widget_pane_t9

0x7093,	// (0x00021886) main_fep_fshwr2_pane

0xf274,	// (0x00029a67) aid_fshwr2_btn_pane

0xf283,	// (0x00029a76) aid_fshwr2_syb_pane

0xf295,	// (0x00029a88) aid_fshwr2_txt_pane

0xf2a4,	// (0x00029a97) fshwr2_func_candi_pane

0xf2b5,	// (0x00029aa8) fshwr2_hwr_syb_pane

0xf2d0,	// (0x00029ac3) fshwr2_icf_pane

0x7093,	// (0x00021886) fshwr2_icf_bg_pane

0xf2e8,	// (0x00029adb) fshwr2_icf_pane_t1_ParamLimits

0xf2e8,	// (0x00029adb) fshwr2_icf_pane_t1

0xb5a0,	// (0x00025d93) fshwr2_func_candi_pane_g1

0x053b,	// (0x0001ad2e) fshwr2_func_candi_row_pane_ParamLimits

0x053b,	// (0x0001ad2e) fshwr2_func_candi_row_pane

0xf302,	// (0x00029af5) cell_fshwr2_syb_pane_ParamLimits

0xf302,	// (0x00029af5) cell_fshwr2_syb_pane

0xb81b,	// (0x0002600e) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb81b,	// (0x0002600e) fshwr2_hwr_syb_pane_g1

0x7093,	// (0x00021886) bg_popup_call_pane_cp01

0x054c,	// (0x0001ad3f) fshwr2_func_candi_cell_pane_ParamLimits

0x054c,	// (0x0001ad3f) fshwr2_func_candi_cell_pane

0x057d,	// (0x0001ad70) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x057d,	// (0x0001ad70) fshwr2_func_candi_cell_bg_pane

0x0597,	// (0x0001ad8a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x0597,	// (0x0001ad8a) fshwr2_func_candi_cell_pane_g1

0x05b7,	// (0x0001adaa) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x05b7,	// (0x0001adaa) fshwr2_func_candi_cell_pane_t1

0x7093,	// (0x00021886) bg_button_pane_cp08

0x8644,	// (0x00022e37) cell_fshwr2_syb_bg_pane

0xf31c,	// (0x00029b0f) cell_fshwr2_syb_bg_pane_g1

0x05ca,	// (0x0001adbd) cell_fshwr2_syb_bg_pane_t1

0x79da,	// (0x000221cd) main_tmo_pane

0x2214,	// (0x0001ca07) uni_indicator_pane_g1_ParamLimits

0x2229,	// (0x0001ca1c) uni_indicator_pane_g2_ParamLimits

0xa0c2,	// (0x000248b5) uni_indicator_pane_g3_ParamLimits

0xa0d8,	// (0x000248cb) uni_indicator_pane_g4_ParamLimits

0xa0d8,	// (0x000248cb) uni_indicator_pane_g4

0xa0ec,	// (0x000248df) uni_indicator_pane_g5_ParamLimits

0xa0ec,	// (0x000248df) uni_indicator_pane_g5

0xa100,	// (0x000248f3) uni_indicator_pane_g6_ParamLimits

0xa100,	// (0x000248f3) uni_indicator_pane_g6

0xf91b,	// (0x0002a10e) uni_indicator_pane_g_ParamLimits

0x2dcc,	// (0x0001d5bf) popup_tmo_note_window_ParamLimits

0x2dcc,	// (0x0001d5bf) popup_tmo_note_window

0x79da,	// (0x000221cd) fshwr2_bg_pane

0x05a8,	// (0x0001ad9b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x05a8,	// (0x0001ad9b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea1,	// (0x0002a694) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea1,	// (0x0002a694) fshwr2_func_candi_cell_pane_g

0xb5a0,	// (0x00025d93) bg_popup_window_pane_cp01

0x05d9,	// (0x0001adcc) bg_popup_window_pane_g1_cp01

0x05e2,	// (0x0001add5) bg_popup_window_pane_cp22_ParamLimits

0x05e2,	// (0x0001add5) bg_popup_window_pane_cp22

0x05f0,	// (0x0001ade3) listscroll_tmo_link_pane_ParamLimits

0x05f0,	// (0x0001ade3) listscroll_tmo_link_pane

0x0630,	// (0x0001ae23) popup_tmo_note_window_g1_ParamLimits

0x0630,	// (0x0001ae23) popup_tmo_note_window_g1

0x063d,	// (0x0001ae30) tmo_note_info_pane_ParamLimits

0x063d,	// (0x0001ae30) tmo_note_info_pane

0xf324,	// (0x00029b17) list_tmo_note_info_pane_g1_ParamLimits

0xf324,	// (0x00029b17) list_tmo_note_info_pane_g1

0x0657,	// (0x0001ae4a) list_tmo_note_info_pane_g2_ParamLimits

0x0657,	// (0x0001ae4a) list_tmo_note_info_pane_g2

0x0001,

0xfea6,	// (0x0002a699) list_tmo_note_info_pane_g_ParamLimits

0xfea6,	// (0x0002a699) list_tmo_note_info_pane_g

0x0673,	// (0x0001ae66) list_tmo_note_info_text_pane_ParamLimits

0x0673,	// (0x0001ae66) list_tmo_note_info_text_pane

0x06b5,	// (0x0001aea8) list_tmo_link_pane

0x06c2,	// (0x0001aeb5) scroll_pane_cp20

0x06cf,	// (0x0001aec2) list_single_tmo_link_pane_ParamLimits

0x06cf,	// (0x0001aec2) list_single_tmo_link_pane

0x06df,	// (0x0001aed2) list_single_tmo_link_pane_t1

0x06ed,	// (0x0001aee0) list_tmo_note_info_text_pane_t1_ParamLimits

0x06ed,	// (0x0001aee0) list_tmo_note_info_text_pane_t1

0x178c,	// (0x0001bf7f) aid_size_touch_scroll_bar_cp01_ParamLimits

0x178c,	// (0x0001bf7f) aid_size_touch_scroll_bar_cp01

0xd477,	// (0x00027c6a) aid_size_touch_slider_marker

0xd83a,	// (0x0002802d) popup_settings_window_ParamLimits

0xd83a,	// (0x0002802d) popup_settings_window

0x45ad,	// (0x0001eda0) popup_candi_list_indi_window

0x89e2,	// (0x000231d5) aid_touch_navi_pane_ParamLimits

0x65b6,	// (0x00020da9) rs_clock_indi_pane

0x65bf,	// (0x00020db2) sctrl_sk_bottom_pane_ParamLimits

0x65d0,	// (0x00020dc3) sctrl_sk_top_pane_ParamLimits

0x66b7,	// (0x00020eaa) popup_fep_tooltip_window

0x00bc,	// (0x0001a8af) aid_size_cell_widget_grid_ParamLimits

0x0130,	// (0x0001a923) cell_ai5_widget_pane_g1_ParamLimits

0x0130,	// (0x0001a923) cell_ai5_widget_pane_g1

0x0183,	// (0x0001a976) cell_ai5_widget_pane_g6_ParamLimits

0x018f,	// (0x0001a982) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe24,	// (0x0002a617) cell_ai5_widget_pane_g_ParamLimits

0xfe24,	// (0x0002a617) cell_ai5_widget_pane_g

0x02be,	// (0x0001aab1) cell_ai5_widget_pane_t10_ParamLimits

0x02be,	// (0x0001aab1) cell_ai5_widget_pane_t10

0x02d4,	// (0x0001aac7) grid_ai5_widget_pane_ParamLimits

0x0354,	// (0x0001ab47) cell_contacts_ai5_widget_pane_ParamLimits

0x0354,	// (0x0001ab47) cell_contacts_ai5_widget_pane

0x04fe,	// (0x0001acf1) popup_discreet_window_t3_ParamLimits

0x04fe,	// (0x0001acf1) popup_discreet_window_t3

0x6fb5,	// (0x000217a8) popup_fshwr2_char_preview_window_ParamLimits

0x6fb5,	// (0x000217a8) popup_fshwr2_char_preview_window

0xf33b,	// (0x00029b2e) tmo_note_info_pane_t1

0xf350,	// (0x00029b43) tmo_note_info_pane_t2

0xf369,	// (0x00029b5c) tmo_note_info_pane_t3

0x0691,	// (0x0001ae84) tmo_note_info_pane_t4

0x06a3,	// (0x0001ae96) tmo_note_info_pane_t5

0x0004,

0xfeab,	// (0x0002a69e) tmo_note_info_pane_t

0x06b5,	// (0x0001aea8) list_tmo_link_pane_ParamLimits

0x06c2,	// (0x0001aeb5) scroll_pane_cp20_ParamLimits

0x7093,	// (0x00021886) bg_popup_fep_char_preview_window_cp01

0x0706,	// (0x0001aef9) popup_fshwr2_char_preview_window_t1

0x0714,	// (0x0001af07) popup_candi_list_indi_window_g1

0x071d,	// (0x0001af10) bg_cell_contacts_ai5_widget_pane

0x0729,	// (0x0001af1c) cell_contacts_ai5_widget_pane_g1

0x073c,	// (0x0001af2f) cell_contacts_ai5_widget_pane_g2

0x0748,	// (0x0001af3b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb6,	// (0x0002a6a9) cell_contacts_ai5_widget_pane_g

0x075a,	// (0x0001af4d) cell_contacts_ai5_widget_pane_t1

0x79da,	// (0x000221cd) highlight_cell_shortcut_ai5_widget_pane_cp01

0x07d4,	// (0x0001afc7) settings_container_pane

0x8644,	// (0x00022e37) listscroll_set_pane_copy1

0xac14,	// (0x00025407) scroll_pane_cp121_copy1

0x07e0,	// (0x0001afd3) set_content_pane_copy1

0x07e8,	// (0x0001afdb) aid_height_set_list_copy1_ParamLimits

0x07e8,	// (0x0001afdb) aid_height_set_list_copy1

0xa2f3,	// (0x00024ae6) aid_size_parent_copy1_ParamLimits

0xa2f3,	// (0x00024ae6) aid_size_parent_copy1

0x07f4,	// (0x0001afe7) button_value_adjust_pane_cp6_copy1_ParamLimits

0x07f4,	// (0x0001afe7) button_value_adjust_pane_cp6_copy1

0x8980,	// (0x00023173) list_highlight_pane_cp2_copy1_ParamLimits

0x8980,	// (0x00023173) list_highlight_pane_cp2_copy1

0x0808,	// (0x0001affb) list_set_pane_copy1_ParamLimits

0x0808,	// (0x0001affb) list_set_pane_copy1

0x076f,	// (0x0001af62) main_pane_set_t1_copy1_ParamLimits

0x076f,	// (0x0001af62) main_pane_set_t1_copy1

0x07a9,	// (0x0001af9c) main_pane_set_t2_copy1_ParamLimits

0x07a9,	// (0x0001af9c) main_pane_set_t2_copy1

0x08b5,	// (0x0001b0a8) main_pane_set_t3_copy1

0x08c3,	// (0x0001b0b6) main_pane_set_t4_copy1

0x07c8,	// (0x0001afbb) set_content_pane_g1_copy1_ParamLimits

0x07c8,	// (0x0001afbb) set_content_pane_g1_copy1

0x08d1,	// (0x0001b0c4) setting_code_pane_copy1

0x08d9,	// (0x0001b0cc) setting_slider_graphic_pane_copy1

0x08d9,	// (0x0001b0cc) setting_slider_pane_copy1

0x08d9,	// (0x0001b0cc) setting_text_pane_copy1

0x08d9,	// (0x0001b0cc) setting_volume_pane_copy1

0x08d1,	// (0x0001b0c4) settings_code_pane_cp2_copy1

0x08e1,	// (0x0001b0d4) settings_code_pane_cp_copy1_ParamLimits

0x08e1,	// (0x0001b0d4) settings_code_pane_cp_copy1

0x08f5,	// (0x0001b0e8) volume_set_pane_copy1

0x08fd,	// (0x0001b0f0) volume_set_pane_g10_copy1

0x0905,	// (0x0001b0f8) volume_set_pane_g1_copy1

0x090d,	// (0x0001b100) volume_set_pane_g2_copy1

0x0915,	// (0x0001b108) volume_set_pane_g3_copy1

0x091d,	// (0x0001b110) volume_set_pane_g4_copy1

0x0925,	// (0x0001b118) volume_set_pane_g5_copy1

0x092d,	// (0x0001b120) volume_set_pane_g6_copy1

0x0935,	// (0x0001b128) volume_set_pane_g7_copy1

0x093d,	// (0x0001b130) volume_set_pane_g8_copy1

0x0945,	// (0x0001b138) volume_set_pane_g9_copy1

0x7187,	// (0x0002197a) bg_set_opt_pane_cp_copy1_ParamLimits

0x7187,	// (0x0002197a) bg_set_opt_pane_cp_copy1

0x094d,	// (0x0001b140) setting_slider_pane_t1_copy1_ParamLimits

0x094d,	// (0x0001b140) setting_slider_pane_t1_copy1

0x096b,	// (0x0001b15e) setting_slider_pane_t2_copy1_ParamLimits

0x096b,	// (0x0001b15e) setting_slider_pane_t2_copy1

0x0985,	// (0x0001b178) setting_slider_pane_t3_copy1_ParamLimits

0x0985,	// (0x0001b178) setting_slider_pane_t3_copy1

0x099d,	// (0x0001b190) slider_set_pane_copy1_ParamLimits

0x099d,	// (0x0001b190) slider_set_pane_copy1

0x7a41,	// (0x00022234) set_opt_bg_pane_g1_copy2

0x7a49,	// (0x0002223c) set_opt_bg_pane_g2_copy2

0x09b3,	// (0x0001b1a6) set_opt_bg_pane_g3_copy2

0x7a59,	// (0x0002224c) set_opt_bg_pane_g4_copy2

0x7a61,	// (0x00022254) set_opt_bg_pane_g5_copy2

0x7a69,	// (0x0002225c) set_opt_bg_pane_g6_copy2

0x09bd,	// (0x0001b1b0) set_opt_bg_pane_g7_copy2

0x09c5,	// (0x0001b1b8) set_opt_bg_pane_g8_copy2

0x09cf,	// (0x0001b1c2) set_opt_bg_pane_g9_copy2

0x09d9,	// (0x0001b1cc) aid_size_touch_slider_mark_copy1_ParamLimits

0x09d9,	// (0x0001b1cc) aid_size_touch_slider_mark_copy1

0x09ed,	// (0x0001b1e0) slider_set_pane_g1_copy1

0x09f6,	// (0x0001b1e9) slider_set_pane_g2_copy1

0xa753,	// (0x00024f46) slider_set_pane_g3_copy1_ParamLimits

0xa753,	// (0x00024f46) slider_set_pane_g3_copy1

0xa767,	// (0x00024f5a) slider_set_pane_g4_copy1_ParamLimits

0xa767,	// (0x00024f5a) slider_set_pane_g4_copy1

0xa77f,	// (0x00024f72) slider_set_pane_g5_copy1_ParamLimits

0xa77f,	// (0x00024f72) slider_set_pane_g5_copy1

0xa753,	// (0x00024f46) slider_set_pane_g6_copy1_ParamLimits

0xa753,	// (0x00024f46) slider_set_pane_g6_copy1

0x09fe,	// (0x0001b1f1) slider_set_pane_g7_copy1_ParamLimits

0x09fe,	// (0x0001b1f1) slider_set_pane_g7_copy1

0x70a7,	// (0x0002189a) bg_set_opt_pane_cp2_copy1

0x0a14,	// (0x0001b207) setting_slider_graphic_pane_g1_copy1

0x0a1d,	// (0x0001b210) setting_slider_graphic_pane_t1_copy1

0x0a2d,	// (0x0001b220) setting_slider_graphic_pane_t2_copy1

0x0a3d,	// (0x0001b230) slider_set_pane_cp_copy1

0x0a4d,	// (0x0001b240) input_focus_pane_cp1_copy1

0x0a56,	// (0x0001b249) list_set_text_pane_copy1

0x0a5e,	// (0x0001b251) setting_text_pane_g1_copy1

0x4d9e,	// (0x0001f591) set_text_pane_t1_copy1

0x0a4d,	// (0x0001b240) input_focus_pane_cp2_copy1

0x0a5e,	// (0x0001b251) setting_code_pane_g1_copy1

0x0a84,	// (0x0001b277) setting_code_pane_t1_copy1

0xaa54,	// (0x00025247) list_set_graphic_pane_copy1

0x70a7,	// (0x0002189a) bg_set_opt_pane_cp4_copy1

0x8346,	// (0x00022b39) list_set_graphic_pane_g1_copy1_ParamLimits

0x8346,	// (0x00022b39) list_set_graphic_pane_g1_copy1

0x0a92,	// (0x0001b285) list_set_graphic_pane_g2_copy1

0x835e,	// (0x00022b51) list_set_graphic_pane_t1_copy1_ParamLimits

0x835e,	// (0x00022b51) list_set_graphic_pane_t1_copy1

0xb5a0,	// (0x00025d93) rs_clock_indi_pane_g1

0x0a9a,	// (0x0001b28d) rs_clock_indi_pane_t1

0x0aa8,	// (0x0001b29b) rs_indi_pane

0x0ab0,	// (0x0001b2a3) rs_indi_pane_g1

0x0ab9,	// (0x0001b2ac) rs_indi_pane_g2

0x0ac2,	// (0x0001b2b5) rs_indi_pane_g3

0x0002,

0xfebd,	// (0x0002a6b0) rs_indi_pane_g

0x8644,	// (0x00022e37) bg_popup_preview_window_pane_cp03

0x0acb,	// (0x0001b2be) popup_fep_tooltip_window_t1

0xc21b,	// (0x00026a0e) popup_note2_window_g2_ParamLimits

0xc21b,	// (0x00026a0e) popup_note2_window_g2

0x0001,

0xfc5d,	// (0x0002a450) popup_note2_window_g_ParamLimits

0xfc5d,	// (0x0002a450) popup_note2_window_g

0xe2f4,	// (0x00028ae7) bg_popup_sub_pane_cp11_ParamLimits

0xe301,	// (0x00028af4) cell_ai3_links_pane_g1_ParamLimits

0xe318,	// (0x00028b0b) cell_ai3_links_pane_t1

0x4d9e,	// (0x0001f591) set_text_pane_t1_copy1_ParamLimits

0x1a8a,	// (0x0001c27d) cell_graphic_popup_pane_cp2_ParamLimits

0x1a8a,	// (0x0001c27d) cell_graphic_popup_pane_cp2

0xf37e,	// (0x00029b71) cell_graphic_popup_pane_g1_cp2

0x7725,	// (0x00021f18) cell_graphic_popup_pane_g2_cp2

0x0ad9,	// (0x0001b2cc) cell_graphic_popup_pane_g3_cp2

0x0ae1,	// (0x0001b2d4) cell_graphic_popup_pane_t2_cp2

0x7736,	// (0x00021f29) grid_highlight_pane_cp3_cp2

0x7d83,	// (0x00022576) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x79da,	// (0x000221cd) main_tmo_pane_ParamLimits

0x2dc0,	// (0x0001d5b3) popup_tmo_big_image_note_window

0x0120,	// (0x0001a913) cell_ai5_widget_list_pane

0x0128,	// (0x0001a91b) cell_ai5_widget_lrg_icon_pane

0xf33b,	// (0x00029b2e) tmo_note_info_pane_t1_ParamLimits

0xf350,	// (0x00029b43) tmo_note_info_pane_t2_ParamLimits

0xf369,	// (0x00029b5c) tmo_note_info_pane_t3_ParamLimits

0x0691,	// (0x0001ae84) tmo_note_info_pane_t4_ParamLimits

0x06a3,	// (0x0001ae96) tmo_note_info_pane_t5_ParamLimits

0xfeab,	// (0x0002a69e) tmo_note_info_pane_t_ParamLimits

0x07d4,	// (0x0001afc7) settings_container_pane_ParamLimits

0x0a45,	// (0x0001b238) indicator_popup_pane_cp5

0x0a45,	// (0x0001b238) indicator_popup_pane_cp6

0xaa54,	// (0x00025247) list_set_graphic_pane_copy1_ParamLimits

0x7093,	// (0x00021886) bg_popup_window_pane_cp23

0x0aef,	// (0x0001b2e2) popup_tmo_big_image_note_window_g1

0x0afa,	// (0x0001b2ed) popup_tmo_big_image_note_window_t1

0x0b0a,	// (0x0001b2fd) popup_tmo_big_image_note_window_t2

0x0b1a,	// (0x0001b30d) popup_tmo_big_image_note_window_t3

0x0002,

0xfec4,	// (0x0002a6b7) popup_tmo_big_image_note_window_t

0x0b2a,	// (0x0001b31d) cell_ai5_widget_lrg_icon_pane_g1

0x0b32,	// (0x0001b325) cell_ai5_widget_lrg_icon_pane_t1

0x0b40,	// (0x0001b333) cell_ai5_widget_list_row_pane_ParamLimits

0x0b40,	// (0x0001b333) cell_ai5_widget_list_row_pane

0x0b59,	// (0x0001b34c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0b59,	// (0x0001b34c) cell_ai5_widget_list_row_pane_g1

0x0b66,	// (0x0001b359) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0b66,	// (0x0001b359) cell_ai5_widget_list_row_pane_t1

0x0b7e,	// (0x0001b371) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x0b7e,	// (0x0001b371) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecb,	// (0x0002a6be) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecb,	// (0x0002a6be) cell_ai5_widget_list_row_pane_t

0x7093,	// (0x00021886) main_fep_vtchi_ss_pane

0x0bb5,	// (0x0001b3a8) popup_fep_char_pre_window

0x0bbd,	// (0x0001b3b0) popup_fep_ituss_window

0x0bde,	// (0x0001b3d1) popup_fep_vkbss_window

0x0bfd,	// (0x0001b3f0) grid_vkbss_keypad_pane_ParamLimits

0x0bfd,	// (0x0001b3f0) grid_vkbss_keypad_pane

0x0c0d,	// (0x0001b400) ituss_keypad_pane

0x0c29,	// (0x0001b41c) aid_vkbss_key_offset_ParamLimits

0x0c29,	// (0x0001b41c) aid_vkbss_key_offset

0x0c35,	// (0x0001b428) cell_vkbss_key_pane_ParamLimits

0x0c35,	// (0x0001b428) cell_vkbss_key_pane

0x8ced,	// (0x000234e0) bg_cell_vkbss_key_g1_ParamLimits

0x8ced,	// (0x000234e0) bg_cell_vkbss_key_g1

0x0c4b,	// (0x0001b43e) cell_vkbss_key_3p_pane_ParamLimits

0x0c4b,	// (0x0001b43e) cell_vkbss_key_3p_pane

0x0c65,	// (0x0001b458) cell_vkbss_key_g1_ParamLimits

0x0c65,	// (0x0001b458) cell_vkbss_key_g1

0x0c7f,	// (0x0001b472) cell_vkbss_key_t1_ParamLimits

0x0c7f,	// (0x0001b472) cell_vkbss_key_t1

0x0caa,	// (0x0001b49d) cell_ituss_key_pane_ParamLimits

0x0caa,	// (0x0001b49d) cell_ituss_key_pane

0x0cbb,	// (0x0001b4ae) bg_cell_ituss_key_g1_ParamLimits

0x0cbb,	// (0x0001b4ae) bg_cell_ituss_key_g1

0x0cc7,	// (0x0001b4ba) cell_ituss_key_pane_g1_ParamLimits

0x0cc7,	// (0x0001b4ba) cell_ituss_key_pane_g1

0x0cdb,	// (0x0001b4ce) cell_ituss_key_pane_g2_ParamLimits

0x0cdb,	// (0x0001b4ce) cell_ituss_key_pane_g2

0x0001,

0xfed2,	// (0x0002a6c5) cell_ituss_key_pane_g_ParamLimits

0xfed2,	// (0x0002a6c5) cell_ituss_key_pane_g

0x0d06,	// (0x0001b4f9) cell_ituss_key_t1_ParamLimits

0x0d06,	// (0x0001b4f9) cell_ituss_key_t1

0x0d34,	// (0x0001b527) cell_ituss_key_t2_ParamLimits

0x0d34,	// (0x0001b527) cell_ituss_key_t2

0x0d65,	// (0x0001b558) cell_ituss_key_t3_ParamLimits

0x0d65,	// (0x0001b558) cell_ituss_key_t3

0x0d96,	// (0x0001b589) cell_ituss_key_t4_ParamLimits

0x0d96,	// (0x0001b589) cell_ituss_key_t4

0x0003,

0xfed7,	// (0x0002a6ca) cell_ituss_key_t_ParamLimits

0xfed7,	// (0x0002a6ca) cell_ituss_key_t

0x0dc7,	// (0x0001b5ba) cell_vkbss_key_3p_pane_g1

0x0dcf,	// (0x0001b5c2) cell_vkbss_key_3p_pane_g2

0x0dd7,	// (0x0001b5ca) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee0,	// (0x0002a6d3) cell_vkbss_key_3p_pane_g

0x7093,	// (0x00021886) bg_popup_fep_char_preview_window_cp02

0x0ddf,	// (0x0001b5d2) popup_fep_char_pre_window_t1

0xf218,	// (0x00029a0b) main_ai5_sk_pane

0x071d,	// (0x0001af10) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x0729,	// (0x0001af1c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x073c,	// (0x0001af2f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x0748,	// (0x0001af3b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb6,	// (0x0002a6a9) cell_contacts_ai5_widget_pane_g_ParamLimits

0x075a,	// (0x0001af4d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x79da,	// (0x000221cd) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf386,	// (0x00029b79) main_ai5_sk_pane_g1

0x93d6,	// (0x00023bc9) popup_query_code_window_g1

0x0bd3,	// (0x0001b3c6) popup_fep_vkb_icf_pane

0x0be7,	// (0x0001b3da) popup_fep_vtchi_icf_pane

0x79da,	// (0x000221cd) bg_icf_pane

0x0dee,	// (0x0001b5e1) list_vkb_icf_pane

0x79da,	// (0x000221cd) bg_icf_pane_cp01

0x0dfa,	// (0x0001b5ed) vtchi_icf_list_pane

0x0e0b,	// (0x0001b5fe) list_vkb_icf_pane_t1_ParamLimits

0x0e0b,	// (0x0001b5fe) list_vkb_icf_pane_t1

0x0e25,	// (0x0001b618) vtchi_icf_list_pane_t1_ParamLimits

0x0e25,	// (0x0001b618) vtchi_icf_list_pane_t1

0x0bbd,	// (0x0001b3b0) popup_fep_ituss_window_ParamLimits

0x0be7,	// (0x0001b3da) popup_fep_vtchi_icf_pane_ParamLimits

0x0c0d,	// (0x0001b400) ituss_keypad_pane_ParamLimits

0x0c1d,	// (0x0001b410) ituss_sks_pane

0x79da,	// (0x000221cd) bg_icf_pane_ParamLimits

0x0ba6,	// (0x0001b399) icf_edit_indi_pane_ParamLimits

0x0ba6,	// (0x0001b399) icf_edit_indi_pane

0x0dee,	// (0x0001b5e1) list_vkb_icf_pane_ParamLimits

0x79da,	// (0x000221cd) bg_icf_pane_cp01_ParamLimits

0x0ba6,	// (0x0001b399) icf_edit_indi_pane_cp01_ParamLimits

0x0ba6,	// (0x0001b399) icf_edit_indi_pane_cp01

0x0e02,	// (0x0001b5f5) vtchi_query_pane

0xb81b,	// (0x0002600e) icf_edit_indi_pane_g1_ParamLimits

0xb81b,	// (0x0002600e) icf_edit_indi_pane_g1

0x0eb6,	// (0x0001b6a9) icf_edit_indi_pane_g2_ParamLimits

0x0eb6,	// (0x0001b6a9) icf_edit_indi_pane_g2

0x0001,

0xfef8,	// (0x0002a6eb) icf_edit_indi_pane_g_ParamLimits

0xfef8,	// (0x0002a6eb) icf_edit_indi_pane_g

0x0ec5,	// (0x0001b6b8) icf_edit_indi_pane_t1

0x0e4c,	// (0x0001b63f) bg_input_focus_pane_cp042

0x7909,	// (0x000220fc) vtchi_button_pane

0x0e55,	// (0x0001b648) vtchi_query_pane_t1

0x0e63,	// (0x0001b656) vtchi_query_pane_t2

0x0e71,	// (0x0001b664) vtchi_query_pane_t3

0x0002,

0xfee7,	// (0x0002a6da) vtchi_query_pane_t

0x7093,	// (0x00021886) bg_button_pane_cp13

0x0e7f,	// (0x0001b672) vtchi_button_pane_g1

0x0e87,	// (0x0001b67a) ituss_sks_pane_g1

0x0e92,	// (0x0001b685) ituss_sks_pane_g2

0x0001,

0xfeee,	// (0x0002a6e1) ituss_sks_pane_g

0x0e9a,	// (0x0001b68d) ituss_sks_pane_t1

0x0ea8,	// (0x0001b69b) ituss_sks_pane_t2

0x0001,

0xfef3,	// (0x0002a6e6) ituss_sks_pane_t

0xafc9,	// (0x000257bc) indicator_nsta_pane_cp_g1

0xafd2,	// (0x000257c5) indicator_nsta_pane_cp_g2

0xafda,	// (0x000257cd) indicator_nsta_pane_cp_g3

0xafe2,	// (0x000257d5) indicator_nsta_pane_cp_g4

0xafea,	// (0x000257dd) indicator_nsta_pane_cp_g5

0xaff2,	// (0x000257e5) indicator_nsta_pane_cp_g6

0x0005,

0xfaa7,	// (0x0002a29a) indicator_nsta_pane_cp_g

0xefc5,	// (0x000297b8) cell_graphic2_pane_t2_ParamLimits

0xefc5,	// (0x000297b8) cell_graphic2_pane_t2

0x0001,

0xfdad,	// (0x0002a5a0) cell_graphic2_pane_t_ParamLimits

0xfdad,	// (0x0002a5a0) cell_graphic2_pane_t

0xeffb,	// (0x000297ee) cell_graphic2_control_pane_t1

0x1929,	// (0x0001c11c) signal_pane_g3_ParamLimits

0x1929,	// (0x0001c11c) signal_pane_g3

0x193d,	// (0x0001c130) signal_pane_g4_ParamLimits

0x193d,	// (0x0001c130) signal_pane_g4

0x0b90,	// (0x0001b383) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x0b90,	// (0x0001b383) cell_ai5_widget_list_row_pane_t3

0x0cf4,	// (0x0001b4e7) cell_ituss_key_pane_t1_ParamLimits

0x0cf4,	// (0x0001b4e7) cell_ituss_key_pane_t1

0x9003,	// (0x000237f6) form_field_data_wide_pane_vc_t2_ParamLimits

0x9003,	// (0x000237f6) form_field_data_wide_pane_vc_t2

0x9017,	// (0x0002380a) form_field_data_wide_pane_vc_t3_ParamLimits

0x9017,	// (0x0002380a) form_field_data_wide_pane_vc_t3

0x0002,

0xf803,	// (0x00029ff6) form_field_data_wide_pane_vc_t_ParamLimits

0xf803,	// (0x00029ff6) form_field_data_wide_pane_vc_t

0xac84,	// (0x00025477) form_field_slider_wide_pane_vc_t3_ParamLimits

0xac84,	// (0x00025477) form_field_slider_wide_pane_vc_t3

0xad5e,	// (0x00025551) form_field_popup_wide_pane_vc_t2_ParamLimits

0xad5e,	// (0x00025551) form_field_popup_wide_pane_vc_t2

0xad75,	// (0x00025568) form_field_popup_wide_pane_vc_t3_ParamLimits

0xad75,	// (0x00025568) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa96,	// (0x0002a289) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa96,	// (0x0002a289) form_field_popup_wide_pane_vc_t

0xf274,	// (0x00029a67) aid_fshwr2_btn_pane_ParamLimits

0xf283,	// (0x00029a76) aid_fshwr2_syb_pane_ParamLimits

0xf295,	// (0x00029a88) aid_fshwr2_txt_pane_ParamLimits

0x79da,	// (0x000221cd) fshwr2_bg_pane_ParamLimits

0xf2a4,	// (0x00029a97) fshwr2_func_candi_pane_ParamLimits

0xf2b5,	// (0x00029aa8) fshwr2_hwr_syb_pane_ParamLimits

0xf2d0,	// (0x00029ac3) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small

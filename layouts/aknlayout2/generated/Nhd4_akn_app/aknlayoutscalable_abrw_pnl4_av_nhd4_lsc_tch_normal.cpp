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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000144d9 };

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
0x9a4b,	// (0x0001df24) Screen

0x9a57,	// (0x0001df30) application_window_ParamLimits

0x9a57,	// (0x0001df30) application_window

0xc0f1,	// (0x000205ca) screen_g1

0x855e,	// (0x0001ca37) area_bottom_pane_ParamLimits

0x855e,	// (0x0001ca37) area_bottom_pane

0xdf38,	// (0x00022411) area_top_pane_ParamLimits

0xdf38,	// (0x00022411) area_top_pane

0xdfd6,	// (0x000224af) main_pane_ParamLimits

0xdfd6,	// (0x000224af) main_pane

0xc0fb,	// (0x000205d4) misc_graphics

0xac60,	// (0x0001f139) battery_pane_ParamLimits

0xac60,	// (0x0001f139) battery_pane

0x2397,	// (0x00016870) bg_status_flat_pane_g8

0x239f,	// (0x00016878) bg_status_flat_pane_g9

0x168a,	// (0x00015b63) context_pane_ParamLimits

0x168a,	// (0x00015b63) context_pane

0xadcb,	// (0x0001f2a4) navi_pane_ParamLimits

0xadcb,	// (0x0001f2a4) navi_pane

0xae49,	// (0x0001f322) signal_pane_ParamLimits

0xae49,	// (0x0001f322) signal_pane

0x0008,

0xf86f,	// (0x00023d48) bg_status_flat_pane_g

0xaed9,	// (0x0001f3b2) status_pane_g1_ParamLimits

0xaed9,	// (0x0001f3b2) status_pane_g1

0xaeef,	// (0x0001f3c8) status_pane_g2_ParamLimits

0xaeef,	// (0x0001f3c8) status_pane_g2

0x18b1,	// (0x00015d8a) status_pane_g3_ParamLimits

0x18b1,	// (0x00015d8a) status_pane_g3

0x0004,

0xf79b,	// (0x00023c74) status_pane_g_ParamLimits

0xf79b,	// (0x00023c74) status_pane_g

0xaefb,	// (0x0001f3d4) title_pane_ParamLimits

0xaefb,	// (0x0001f3d4) title_pane

0xaf5e,	// (0x0001f437) uni_indicator_pane_ParamLimits

0xaf5e,	// (0x0001f437) uni_indicator_pane

0x14d6,	// (0x000159af) bg_list_pane_ParamLimits

0x14d6,	// (0x000159af) bg_list_pane

0xabd3,	// (0x0001f0ac) find_pane

0x89be,	// (0x0001ce97) listscroll_app_pane_ParamLimits

0x89be,	// (0x0001ce97) listscroll_app_pane

0x150a,	// (0x000159e3) listscroll_form_pane

0x89ce,	// (0x0001cea7) listscroll_gen_pane_ParamLimits

0x89ce,	// (0x0001cea7) listscroll_gen_pane

0xe847,	// (0x00022d20) listscroll_set_pane

0x2f30,	// (0x00017409) main_idle_act_pane

0x11e2,	// (0x000156bb) main_idle_trad_pane

0x11e2,	// (0x000156bb) main_list_empty_pane

0x1524,	// (0x000159fd) main_midp_pane

0x1530,	// (0x00015a09) main_pane_g1_ParamLimits

0x1530,	// (0x00015a09) main_pane_g1

0x89e2,	// (0x0001cebb) popup_ai_message_window_ParamLimits

0x89e2,	// (0x0001cebb) popup_ai_message_window

0x8a93,	// (0x0001cf6c) popup_fep_china_uni_window_ParamLimits

0x8a93,	// (0x0001cf6c) popup_fep_china_uni_window

0x8aed,	// (0x0001cfc6) popup_fep_japan_candidate_window_ParamLimits

0x8aed,	// (0x0001cfc6) popup_fep_japan_candidate_window

0x8b0b,	// (0x0001cfe4) popup_fep_japan_predictive_window_ParamLimits

0x8b0b,	// (0x0001cfe4) popup_fep_japan_predictive_window

0x8b1d,	// (0x0001cff6) popup_find_window

0x8b3a,	// (0x0001d013) popup_grid_graphic_window_ParamLimits

0x8b3a,	// (0x0001d013) popup_grid_graphic_window

0x8bd8,	// (0x0001d0b1) popup_large_graphic_colour_window

0x8bfe,	// (0x0001d0d7) popup_menu_window_ParamLimits

0x8bfe,	// (0x0001d0d7) popup_menu_window

0x8dd0,	// (0x0001d2a9) popup_note_image_window

0x8d96,	// (0x0001d26f) popup_note_wait_window_ParamLimits

0x8d96,	// (0x0001d26f) popup_note_wait_window

0x8de8,	// (0x0001d2c1) popup_note_window_ParamLimits

0x8de8,	// (0x0001d2c1) popup_note_window

0x8e97,	// (0x0001d370) popup_query_code_window_ParamLimits

0x8e97,	// (0x0001d370) popup_query_code_window

0x8ed1,	// (0x0001d3aa) popup_query_data_code_window_ParamLimits

0x8ed1,	// (0x0001d3aa) popup_query_data_code_window

0x8eee,	// (0x0001d3c7) popup_query_data_window_ParamLimits

0x8eee,	// (0x0001d3c7) popup_query_data_window

0x8f70,	// (0x0001d449) popup_query_sat_info_window_ParamLimits

0x8f70,	// (0x0001d449) popup_query_sat_info_window

0x9007,	// (0x0001d4e0) popup_snote_single_graphic_window_ParamLimits

0x9007,	// (0x0001d4e0) popup_snote_single_graphic_window

0x9007,	// (0x0001d4e0) popup_snote_single_text_window_ParamLimits

0x9007,	// (0x0001d4e0) popup_snote_single_text_window

0xe885,	// (0x00022d5e) popup_sub_window_general

0x9164,	// (0x0001d63d) popup_window_general_ParamLimits

0x9164,	// (0x0001d63d) popup_window_general

0x1546,	// (0x00015a1f) power_save_pane

0x884d,	// (0x0001cd26) control_pane_g1_ParamLimits

0x884d,	// (0x0001cd26) control_pane_g1

0x8876,	// (0x0001cd4f) control_pane_g2_ParamLimits

0x8876,	// (0x0001cd4f) control_pane_g2

0x1499,	// (0x00015972) control_pane_g3_ParamLimits

0x1499,	// (0x00015972) control_pane_g3

0x0007,

0xf783,	// (0x00023c5c) control_pane_g_ParamLimits

0xf783,	// (0x00023c5c) control_pane_g

0x88b7,	// (0x0001cd90) control_pane_t1_ParamLimits

0x88b7,	// (0x0001cd90) control_pane_t1

0x8915,	// (0x0001cdee) control_pane_t2_ParamLimits

0x8915,	// (0x0001cdee) control_pane_t2

0x0002,

0xf794,	// (0x00023c6d) control_pane_t_ParamLimits

0xf794,	// (0x00023c6d) control_pane_t

0xab05,	// (0x0001efde) navi_navi_volume_pane_cp1

0xab0d,	// (0x0001efe6) status_small_icon_pane

0x13ce,	// (0x000158a7) status_small_pane_g1_ParamLimits

0x13ce,	// (0x000158a7) status_small_pane_g1

0xab15,	// (0x0001efee) status_small_pane_g2_ParamLimits

0xab15,	// (0x0001efee) status_small_pane_g2

0xab21,	// (0x0001effa) status_small_pane_g3_ParamLimits

0xab21,	// (0x0001effa) status_small_pane_g3

0xab2d,	// (0x0001f006) status_small_pane_g4_ParamLimits

0xab2d,	// (0x0001f006) status_small_pane_g4

0xab39,	// (0x0001f012) status_small_pane_g5_ParamLimits

0xab39,	// (0x0001f012) status_small_pane_g5

0xab47,	// (0x0001f020) status_small_pane_g6_ParamLimits

0xab47,	// (0x0001f020) status_small_pane_g6

0x0007,

0xf772,	// (0x00023c4b) status_small_pane_g_ParamLimits

0xf772,	// (0x00023c4b) status_small_pane_g

0xab76,	// (0x0001f04f) status_small_pane_t1

0xab98,	// (0x0001f071) status_small_wait_pane_ParamLimits

0xab98,	// (0x0001f071) status_small_wait_pane

0xa830,	// (0x0001ed09) aid_levels_signal_ParamLimits

0xa830,	// (0x0001ed09) aid_levels_signal

0xa848,	// (0x0001ed21) signal_pane_g1_ParamLimits

0xa848,	// (0x0001ed21) signal_pane_g1

0xa863,	// (0x0001ed3c) signal_pane_g2_ParamLimits

0xa863,	// (0x0001ed3c) signal_pane_g2

0x0003,

0xf703,	// (0x00023bdc) signal_pane_g_ParamLimits

0xf703,	// (0x00023bdc) signal_pane_g

0xe4d7,	// (0x000229b0) context_pane_g1

0x9a67,	// (0x0001df40) title_pane_g1

0x9a9e,	// (0x0001df77) title_pane_t1

0xc111,	// (0x000205ea) title_pane_t2

0xc137,	// (0x00020610) title_pane_t3

0x0002,

0xf557,	// (0x00023a30) title_pane_t

0xaf86,	// (0x0001f45f) aid_levels_battery_ParamLimits

0xaf86,	// (0x0001f45f) aid_levels_battery

0xafa2,	// (0x0001f47b) battery_pane_g1_ParamLimits

0xafa2,	// (0x0001f47b) battery_pane_g1

0xafbf,	// (0x0001f498) battery_pane_g2_ParamLimits

0xafbf,	// (0x0001f498) battery_pane_g2

0x0001,

0xf7a6,	// (0x00023c7f) battery_pane_g_ParamLimits

0xf7a6,	// (0x00023c7f) battery_pane_g

0xb5ac,	// (0x0001fa85) uni_indicator_pane_g1

0xb5c2,	// (0x0001fa9b) uni_indicator_pane_g2

0xb5d8,	// (0x0001fab1) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x00023df0) uni_indicator_pane_g

0x1054,	// (0x0001552d) navi_icon_pane_ParamLimits

0x1054,	// (0x0001552d) navi_icon_pane

0x0f9e,	// (0x00015477) navi_midp_pane

0x1070,	// (0x00015549) navi_navi_pane

0x107a,	// (0x00015553) navi_text_pane_ParamLimits

0x107a,	// (0x00015553) navi_text_pane

0xc0f1,	// (0x000205ca) status_small_wait_pane_g1

0xc3a2,	// (0x0002087b) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x00023deb) status_small_wait_pane_g

0xb505,	// (0x0001f9de) navi_navi_icon_text_pane

0x29ea,	// (0x00016ec3) navi_navi_pane_g1_ParamLimits

0x29ea,	// (0x00016ec3) navi_navi_pane_g1

0x29fc,	// (0x00016ed5) navi_navi_pane_g2_ParamLimits

0x29fc,	// (0x00016ed5) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x00023db9) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x00023db9) navi_navi_pane_g

0x2a0e,	// (0x00016ee7) navi_navi_tabs_pane

0x2a17,	// (0x00016ef0) navi_navi_text_pane

0xb505,	// (0x0001f9de) navi_navi_volume_pane

0x29be,	// (0x00016e97) navi_text_pane_t1

0x29b2,	// (0x00016e8b) navi_icon_pane_g1

0x2905,	// (0x00016dde) navi_navi_text_pane_t1

0x9221,	// (0x0001d6fa) navi_navi_volume_pane_g1

0xeb06,	// (0x00022fdf) volume_small_pane

0x286b,	// (0x00016d44) navi_navi_icon_text_pane_g1

0xb45d,	// (0x0001f936) navi_navi_icon_text_pane_t1

0x1070,	// (0x00015549) navi_tabs_2_long_pane

0x1070,	// (0x00015549) navi_tabs_2_pane

0x1070,	// (0x00015549) navi_tabs_3_long_pane

0x1070,	// (0x00015549) navi_tabs_3_pane

0x1070,	// (0x00015549) navi_tabs_4_pane

0xeae6,	// (0x00022fbf) tabs_2_active_pane_ParamLimits

0xeae6,	// (0x00022fbf) tabs_2_active_pane

0xeaf6,	// (0x00022fcf) tabs_2_passive_pane_ParamLimits

0xeaf6,	// (0x00022fcf) tabs_2_passive_pane

0xeab4,	// (0x00022f8d) tabs_3_active_pane_ParamLimits

0xeab4,	// (0x00022f8d) tabs_3_active_pane

0xeac4,	// (0x00022f9d) tabs_3_passive_pane_ParamLimits

0xeac4,	// (0x00022f9d) tabs_3_passive_pane

0xead5,	// (0x00022fae) tabs_3_passive_pane_cp_ParamLimits

0xead5,	// (0x00022fae) tabs_3_passive_pane_cp

0xea70,	// (0x00022f49) tabs_4_active_pane_ParamLimits

0xea70,	// (0x00022f49) tabs_4_active_pane

0xea81,	// (0x00022f5a) tabs_4_passive_pane_ParamLimits

0xea81,	// (0x00022f5a) tabs_4_passive_pane

0xea92,	// (0x00022f6b) tabs_4_passive_pane_cp_ParamLimits

0xea92,	// (0x00022f6b) tabs_4_passive_pane_cp

0xeaa3,	// (0x00022f7c) tabs_4_passive_pane_cp2_ParamLimits

0xeaa3,	// (0x00022f7c) tabs_4_passive_pane_cp2

0xea4c,	// (0x00022f25) tabs_2_long_active_pane_ParamLimits

0xea4c,	// (0x00022f25) tabs_2_long_active_pane

0xea5e,	// (0x00022f37) tabs_2_long_passive_pane_ParamLimits

0xea5e,	// (0x00022f37) tabs_2_long_passive_pane

0xea07,	// (0x00022ee0) tabs_3_long_active_pane_ParamLimits

0xea07,	// (0x00022ee0) tabs_3_long_active_pane

0xea20,	// (0x00022ef9) tabs_3_long_passive_pane_ParamLimits

0xea20,	// (0x00022ef9) tabs_3_long_passive_pane

0xea33,	// (0x00022f0c) tabs_3_long_passive_pane_cp_ParamLimits

0xea33,	// (0x00022f0c) tabs_3_long_passive_pane_cp

0xe9ad,	// (0x00022e86) volume_small_pane_g1

0xe9b6,	// (0x00022e8f) volume_small_pane_g2

0xe9bf,	// (0x00022e98) volume_small_pane_g3

0xe9c8,	// (0x00022ea1) volume_small_pane_g4

0xe9d1,	// (0x00022eaa) volume_small_pane_g5

0xe9da,	// (0x00022eb3) volume_small_pane_g6

0xe9e3,	// (0x00022ebc) volume_small_pane_g7

0xe9ec,	// (0x00022ec5) volume_small_pane_g8

0xe9f5,	// (0x00022ece) volume_small_pane_g9

0xe9fe,	// (0x00022ed7) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x00023d85) volume_small_pane_g

0xc149,	// (0x00020622) bg_active_tab_pane_cp2_ParamLimits

0xc149,	// (0x00020622) bg_active_tab_pane_cp2

0x9b2a,	// (0x0001e003) tabs_3_active_pane_g1

0x9b32,	// (0x0001e00b) tabs_3_active_pane_t1

0xc149,	// (0x00020622) bg_passive_tab_pane_cp2_ParamLimits

0xc149,	// (0x00020622) bg_passive_tab_pane_cp2

0x9b2a,	// (0x0001e003) tabs_3_passive_pane_g1

0x9b32,	// (0x0001e00b) tabs_3_passive_pane_t1

0xc149,	// (0x00020622) bg_active_tab_pane_cp3_ParamLimits

0xc149,	// (0x00020622) bg_active_tab_pane_cp3

0x9b44,	// (0x0001e01d) tabs_4_active_pane_g1

0x9b4c,	// (0x0001e025) tabs_4_active_pane_t1

0xc149,	// (0x00020622) bg_passive_tab_pane_cp3_ParamLimits

0xc149,	// (0x00020622) bg_passive_tab_pane_cp3

0x9b44,	// (0x0001e01d) tabs_4_1_passive_pane_g1

0x9b4c,	// (0x0001e025) tabs_4_1_passive_pane_t1

0x1524,	// (0x000159fd) list_highlight_pane_cp2

0xb6e0,	// (0x0001fbb9) list_set_pane_ParamLimits

0xb6e0,	// (0x0001fbb9) list_set_pane

0xb77a,	// (0x0001fc53) main_pane_set_t1_ParamLimits

0xb77a,	// (0x0001fc53) main_pane_set_t1

0xb79a,	// (0x0001fc73) main_pane_set_t2_ParamLimits

0xb79a,	// (0x0001fc73) main_pane_set_t2

0xb7ae,	// (0x0001fc87) main_pane_set_t3_ParamLimits

0xb7ae,	// (0x0001fc87) main_pane_set_t3

0xb7c0,	// (0x0001fc99) main_pane_set_t4_ParamLimits

0xb7c0,	// (0x0001fc99) main_pane_set_t4

0x0003,

0xf97c,	// (0x00023e55) main_pane_set_t_ParamLimits

0xf97c,	// (0x00023e55) main_pane_set_t

0xb7d2,	// (0x0001fcab) setting_code_pane

0xb7dc,	// (0x0001fcb5) setting_slider_graphic_pane

0xb7dc,	// (0x0001fcb5) setting_slider_pane

0xb7dc,	// (0x0001fcb5) setting_text_pane

0xb7dc,	// (0x0001fcb5) setting_volume_pane

0x875c,	// (0x0001cc35) volume_set_pane

0xc157,	// (0x00020630) bg_set_opt_pane_cp

0x8764,	// (0x0001cc3d) setting_slider_pane_t1

0x877d,	// (0x0001cc56) setting_slider_pane_t2

0x8797,	// (0x0001cc70) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00023a37) setting_slider_pane_t

0x87af,	// (0x0001cc88) slider_set_pane

0xc0fb,	// (0x000205d4) bg_set_opt_pane_cp2

0xc165,	// (0x0002063e) setting_slider_graphic_pane_g1

0x87c5,	// (0x0001cc9e) setting_slider_graphic_pane_t1

0x87d5,	// (0x0001ccae) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00023a3e) setting_slider_graphic_pane_t

0x87e5,	// (0x0001ccbe) slider_set_pane_cp

0xc0fb,	// (0x000205d4) input_focus_pane_cp1

0x2f17,	// (0x000173f0) list_set_text_pane

0xc0f1,	// (0x000205ca) setting_text_pane_g1

0xc0fb,	// (0x000205d4) input_focus_pane_cp2

0xc0f1,	// (0x000205ca) setting_code_pane_g1

0xc16e,	// (0x00020647) setting_code_pane_t1

0xc17c,	// (0x00020655) set_text_pane_t1_ParamLimits

0xc17c,	// (0x00020655) set_text_pane_t1

0xc62b,	// (0x00020b04) set_opt_bg_pane_g1

0xc633,	// (0x00020b0c) set_opt_bg_pane_g2

0xb695,	// (0x0001fb6e) set_opt_bg_pane_g3

0xc643,	// (0x00020b1c) set_opt_bg_pane_g4

0xc64b,	// (0x00020b24) set_opt_bg_pane_g5

0xc653,	// (0x00020b2c) set_opt_bg_pane_g6

0xb69f,	// (0x0001fb78) set_opt_bg_pane_g7

0xb6a7,	// (0x0001fb80) set_opt_bg_pane_g8

0xb6b1,	// (0x0001fb8a) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x00023e42) set_opt_bg_pane_g

0xb688,	// (0x0001fb61) slider_set_pane_g1

0xeb0f,	// (0x00022fe8) slider_set_pane_g2

0x0006,

0xf95a,	// (0x00023e33) slider_set_pane_g

0x9229,	// (0x0001d702) volume_set_pane_g1

0x9231,	// (0x0001d70a) volume_set_pane_g2

0x9239,	// (0x0001d712) volume_set_pane_g3

0x9241,	// (0x0001d71a) volume_set_pane_g4

0x9249,	// (0x0001d722) volume_set_pane_g5

0x9251,	// (0x0001d72a) volume_set_pane_g6

0x9259,	// (0x0001d732) volume_set_pane_g7

0x9261,	// (0x0001d73a) volume_set_pane_g8

0x9269,	// (0x0001d742) volume_set_pane_g9

0x9271,	// (0x0001d74a) volume_set_pane_g10

0x0009,

0xf932,	// (0x00023e0b) volume_set_pane_g

0x9b5e,	// (0x0001e037) indicator_pane_ParamLimits

0x9b5e,	// (0x0001e037) indicator_pane

0x9b86,	// (0x0001e05f) main_idle_pane_g2_ParamLimits

0x9b86,	// (0x0001e05f) main_idle_pane_g2

0x9bbe,	// (0x0001e097) main_pane_idle_g1_ParamLimits

0x9bbe,	// (0x0001e097) main_pane_idle_g1

0xc196,	// (0x0002066f) popup_clock_digital_analogue_window_ParamLimits

0xc196,	// (0x0002066f) popup_clock_digital_analogue_window

0x9be5,	// (0x0001e0be) soft_indicator_pane_ParamLimits

0x9be5,	// (0x0001e0be) soft_indicator_pane

0x9c09,	// (0x0001e0e2) wallpaper_pane_ParamLimits

0x9c09,	// (0x0001e0e2) wallpaper_pane

0xc0f1,	// (0x000205ca) wallpaper_pane_g1

0x9c1b,	// (0x0001e0f4) indicator_pane_g1_ParamLimits

0x9c1b,	// (0x0001e0f4) indicator_pane_g1

0x33ee,	// (0x000178c7) navi_navi_icon_text_pane_srt_g1

0xc1c4,	// (0x0002069d) soft_indicator_pane_t1

0xc1de,	// (0x000206b7) aid_ps_area_pane

0x9c31,	// (0x0001e10a) aid_ps_clock_pane

0xc1ef,	// (0x000206c8) aid_ps_indicator_pane

0xc1fb,	// (0x000206d4) indicator_ps_pane_ParamLimits

0xc1fb,	// (0x000206d4) indicator_ps_pane

0xc20a,	// (0x000206e3) power_save_pane_g1_ParamLimits

0xc20a,	// (0x000206e3) power_save_pane_g1

0xc216,	// (0x000206ef) power_save_pane_g2_ParamLimits

0xc216,	// (0x000206ef) power_save_pane_g2

0xdf18,	// (0x000223f1) aid_navinavi_width_pane

0xc1de,	// (0x000206b7) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00023a43) power_save_pane_g_ParamLimits

0xf56a,	// (0x00023a43) power_save_pane_g

0xc224,	// (0x000206fd) power_save_pane_t1_ParamLimits

0xc224,	// (0x000206fd) power_save_pane_t1

0x9c31,	// (0x0001e10a) aid_ps_clock_pane_ParamLimits

0xc1ef,	// (0x000206c8) aid_ps_indicator_pane_ParamLimits

0xc236,	// (0x0002070f) power_save_pane_t4_ParamLimits

0xc236,	// (0x0002070f) power_save_pane_t4

0x0001,

0xf56f,	// (0x00023a48) power_save_pane_t_ParamLimits

0xf56f,	// (0x00023a48) power_save_pane_t

0xc260,	// (0x00020739) power_save_t3_ParamLimits

0xc260,	// (0x00020739) power_save_t3

0xc24b,	// (0x00020724) power_save_t2_ParamLimits

0xc24b,	// (0x00020724) power_save_t2

0xc275,	// (0x0002074e) indicator_ps_pane_g1

0x9c3f,	// (0x0001e118) ai_gene_pane_ParamLimits

0x9c3f,	// (0x0001e118) ai_gene_pane

0x9c56,	// (0x0001e12f) ai_links_pane_ParamLimits

0x9c56,	// (0x0001e12f) ai_links_pane

0x9c6e,	// (0x0001e147) indicator_pane_cp1_ParamLimits

0x9c6e,	// (0x0001e147) indicator_pane_cp1

0x9c7d,	// (0x0001e156) main_pane_idle_g1_cp_ParamLimits

0x9c7d,	// (0x0001e156) main_pane_idle_g1_cp

0x9c95,	// (0x0001e16e) popup_ai_links_title_window

0x9c9e,	// (0x0001e177) soft_indicator_pane_cp1_ParamLimits

0x9c9e,	// (0x0001e177) soft_indicator_pane_cp1

0x2ca9,	// (0x00017182) ai_links_pane_g1

0x2cb2,	// (0x0001718b) grid_ai_links_pane

0xb5a3,	// (0x0001fa7c) ai_gene_pane_1

0x2c97,	// (0x00017170) ai_gene_pane_2

0x2ca0,	// (0x00017179) list_highlight_pane_cp4

0xb57f,	// (0x0001fa58) cell_ai_link_pane_ParamLimits

0xb57f,	// (0x0001fa58) cell_ai_link_pane

0x2c68,	// (0x00017141) cell_ai_link_pane_g1

0xc3a2,	// (0x0002087b) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x00023de6) cell_ai_link_pane_g

0xc0fb,	// (0x000205d4) grid_highlight_cp2

0xc0fb,	// (0x000205d4) bg_popup_sub_pane_cp1

0xc28c,	// (0x00020765) popup_ai_links_title_window_t1

0x2bb8,	// (0x00017091) ai_gene_pane_1_g1_ParamLimits

0x2bb8,	// (0x00017091) ai_gene_pane_1_g1

0x2bc4,	// (0x0001709d) ai_gene_pane_1_g2_ParamLimits

0x2bc4,	// (0x0001709d) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x00023ddc) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x00023ddc) ai_gene_pane_1_g

0x2bd1,	// (0x000170aa) ai_gene_pane_1_t1_ParamLimits

0x2bd1,	// (0x000170aa) ai_gene_pane_1_t1

0x2c05,	// (0x000170de) grid_ai_soft_ind_pane

0x2ba3,	// (0x0001707c) ai_gene_pane_2_t1_ParamLimits

0x2ba3,	// (0x0001707c) ai_gene_pane_2_t1

0x9cb2,	// (0x0001e18b) main_pane_empty_t1_ParamLimits

0x9cb2,	// (0x0001e18b) main_pane_empty_t1

0x9cca,	// (0x0001e1a3) main_pane_empty_t2_ParamLimits

0x9cca,	// (0x0001e1a3) main_pane_empty_t2

0x9cdf,	// (0x0001e1b8) main_pane_empty_t3_ParamLimits

0x9cdf,	// (0x0001e1b8) main_pane_empty_t3

0x9cf1,	// (0x0001e1ca) main_pane_empty_t4_ParamLimits

0x9cf1,	// (0x0001e1ca) main_pane_empty_t4

0x9d03,	// (0x0001e1dc) main_pane_empty_t5_ParamLimits

0x9d03,	// (0x0001e1dc) main_pane_empty_t5

0x0004,

0xf574,	// (0x00023a4d) main_pane_empty_t_ParamLimits

0xf574,	// (0x00023a4d) main_pane_empty_t

0xc67c,	// (0x00020b55) bg_popup_window_pane_ParamLimits

0xc67c,	// (0x00020b55) bg_popup_window_pane

0xb4f9,	// (0x0001f9d2) find_popup_pane_cp2_ParamLimits

0xb4f9,	// (0x0001f9d2) find_popup_pane_cp2

0x291f,	// (0x00016df8) heading_pane_ParamLimits

0x291f,	// (0x00016df8) heading_pane

0xc0fb,	// (0x000205d4) bg_popup_sub_pane

0xb47a,	// (0x0001f953) bg_popup_window_pane_g1_ParamLimits

0xb47a,	// (0x0001f953) bg_popup_window_pane_g1

0xb489,	// (0x0001f962) bg_popup_window_pane_g2_ParamLimits

0xb489,	// (0x0001f962) bg_popup_window_pane_g2

0xb495,	// (0x0001f96e) bg_popup_window_pane_g3_ParamLimits

0xb495,	// (0x0001f96e) bg_popup_window_pane_g3

0xb4a1,	// (0x0001f97a) bg_popup_window_pane_g4_ParamLimits

0xb4a1,	// (0x0001f97a) bg_popup_window_pane_g4

0xb4b0,	// (0x0001f989) bg_popup_window_pane_g5_ParamLimits

0xb4b0,	// (0x0001f989) bg_popup_window_pane_g5

0xb4c0,	// (0x0001f999) bg_popup_window_pane_g6_ParamLimits

0xb4c0,	// (0x0001f999) bg_popup_window_pane_g6

0xb4cc,	// (0x0001f9a5) bg_popup_window_pane_g7_ParamLimits

0xb4cc,	// (0x0001f9a5) bg_popup_window_pane_g7

0xb4db,	// (0x0001f9b4) bg_popup_window_pane_g8_ParamLimits

0xb4db,	// (0x0001f9b4) bg_popup_window_pane_g8

0xb4ea,	// (0x0001f9c3) bg_popup_window_pane_g9_ParamLimits

0xb4ea,	// (0x0001f9c3) bg_popup_window_pane_g9

0x28f9,	// (0x00016dd2) bg_popup_window_pane_g10_ParamLimits

0x28f9,	// (0x00016dd2) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x00023da4) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x00023da4) bg_popup_window_pane_g

0x2822,	// (0x00016cfb) bg_popup_heading_pane_ParamLimits

0x2822,	// (0x00016cfb) bg_popup_heading_pane

0xeb3f,	// (0x00023018) tabs_4_passive_pane_cp_srt_ParamLimits

0xeb3f,	// (0x00023018) tabs_4_passive_pane_cp_srt

0xeb51,	// (0x0002302a) tabs_4_passive_pane_srt_ParamLimits

0x2836,	// (0x00016d0f) heading_pane_g2

0xeb51,	// (0x0002302a) tabs_4_passive_pane_srt

0x1b87,	// (0x00016060) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1b87,	// (0x00016060) bg_passive_tab_pane_cp3_srt

0x283e,	// (0x00016d17) heading_pane_t1_ParamLimits

0x283e,	// (0x00016d17) heading_pane_t1

0x2855,	// (0x00016d2e) heading_pane_t2_ParamLimits

0x2855,	// (0x00016d2e) heading_pane_t2

0x0001,

0xf8c6,	// (0x00023d9f) heading_pane_t_ParamLimits

0xf8c6,	// (0x00023d9f) heading_pane_t

0x235f,	// (0x00016838) bg_popup_heading_pane_g1

0x240e,	// (0x000168e7) bg_popup_heading_pane_g2

0x2418,	// (0x000168f1) bg_popup_heading_pane_g3

0x2422,	// (0x000168fb) bg_popup_heading_pane_g4

0x242c,	// (0x00016905) bg_popup_heading_pane_g5

0x2436,	// (0x0001690f) bg_popup_heading_pane_g6

0x243e,	// (0x00016917) bg_popup_heading_pane_g7

0x2446,	// (0x0001691f) bg_popup_heading_pane_g8

0x2450,	// (0x00016929) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x00023d5b) bg_popup_heading_pane_g

0x1a5b,	// (0x00015f34) bg_popup_sub_pane_g1

0x1a6b,	// (0x00015f44) bg_popup_sub_pane_g2

0x1a63,	// (0x00015f3c) bg_popup_sub_pane_g3

0x1a7b,	// (0x00015f54) bg_popup_sub_pane_g4

0x1a73,	// (0x00015f4c) bg_popup_sub_pane_g5

0x1a83,	// (0x00015f5c) bg_popup_sub_pane_g6

0x1a8b,	// (0x00015f64) bg_popup_sub_pane_g7

0x1a9b,	// (0x00015f74) bg_popup_sub_pane_g8

0x1a93,	// (0x00015f6c) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x00023d35) bg_popup_sub_pane_g

0xc149,	// (0x00020622) bg_popup_window_pane_cp5_ParamLimits

0xc149,	// (0x00020622) bg_popup_window_pane_cp5

0xc2a9,	// (0x00020782) popup_note_window_g1_ParamLimits

0xc2a9,	// (0x00020782) popup_note_window_g1

0xc2b5,	// (0x0002078e) popup_note_window_t1_ParamLimits

0xc2b5,	// (0x0002078e) popup_note_window_t1

0xc2cb,	// (0x000207a4) popup_note_window_t2_ParamLimits

0xc2cb,	// (0x000207a4) popup_note_window_t2

0xc2e1,	// (0x000207ba) popup_note_window_t3_ParamLimits

0xc2e1,	// (0x000207ba) popup_note_window_t3

0xc2f7,	// (0x000207d0) popup_note_window_t4_ParamLimits

0xc2f7,	// (0x000207d0) popup_note_window_t4

0xc31f,	// (0x000207f8) popup_note_window_t5_ParamLimits

0xc31f,	// (0x000207f8) popup_note_window_t5

0x0004,

0xf57f,	// (0x00023a58) popup_note_window_t_ParamLimits

0xf57f,	// (0x00023a58) popup_note_window_t

0xc343,	// (0x0002081c) bg_popup_window_pane_cp6_ParamLimits

0xc343,	// (0x0002081c) bg_popup_window_pane_cp6

0x22db,	// (0x000167b4) popup_note_image_window_g1_ParamLimits

0x22db,	// (0x000167b4) popup_note_image_window_g1

0xb31f,	// (0x0001f7f8) popup_note_image_window_g2_ParamLimits

0xb31f,	// (0x0001f7f8) popup_note_image_window_g2

0x0001,

0xf850,	// (0x00023d29) popup_note_image_window_g_ParamLimits

0xf850,	// (0x00023d29) popup_note_image_window_g

0x2300,	// (0x000167d9) popup_note_image_window_t1_ParamLimits

0x2300,	// (0x000167d9) popup_note_image_window_t1

0x2319,	// (0x000167f2) popup_note_image_window_t2_ParamLimits

0x2319,	// (0x000167f2) popup_note_image_window_t2

0x2332,	// (0x0001680b) popup_note_image_window_t3_ParamLimits

0x2332,	// (0x0001680b) popup_note_image_window_t3

0x0002,

0xf855,	// (0x00023d2e) popup_note_image_window_t_ParamLimits

0xf855,	// (0x00023d2e) popup_note_image_window_t

0x21a4,	// (0x0001667d) bg_popup_window_pane_cp7_ParamLimits

0x21a4,	// (0x0001667d) bg_popup_window_pane_cp7

0x21d4,	// (0x000166ad) popup_note_wait_window_g1_ParamLimits

0x21d4,	// (0x000166ad) popup_note_wait_window_g1

0x21e0,	// (0x000166b9) popup_note_wait_window_g2_ParamLimits

0x21e0,	// (0x000166b9) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x00023d17) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x00023d17) popup_note_wait_window_g

0x21f8,	// (0x000166d1) popup_note_wait_window_t1_ParamLimits

0x21f8,	// (0x000166d1) popup_note_wait_window_t1

0xb2c0,	// (0x0001f799) popup_note_wait_window_t2_ParamLimits

0xb2c0,	// (0x0001f799) popup_note_wait_window_t2

0xb2dd,	// (0x0001f7b6) popup_note_wait_window_t3_ParamLimits

0xb2dd,	// (0x0001f7b6) popup_note_wait_window_t3

0xb2f0,	// (0x0001f7c9) popup_note_wait_window_t4_ParamLimits

0xb2f0,	// (0x0001f7c9) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x00023d1e) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x00023d1e) popup_note_wait_window_t

0x2274,	// (0x0001674d) wait_bar_pane_ParamLimits

0x2274,	// (0x0001674d) wait_bar_pane

0xc0fb,	// (0x000205d4) wait_anim_pane

0xc0fb,	// (0x000205d4) wait_border_pane

0xc0f1,	// (0x000205ca) wait_anim_pane_g1

0xc0f1,	// (0x000205ca) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00023bd7) wait_anim_pane_g

0x2150,	// (0x00016629) wait_border_pane_g1

0x215b,	// (0x00016634) wait_border_pane_g2

0x2164,	// (0x0001663d) wait_border_pane_g3

0x0002,

0xf837,	// (0x00023d10) wait_border_pane_g

0x1fbb,	// (0x00016494) bg_popup_window_pane_cp16_ParamLimits

0x1fbb,	// (0x00016494) bg_popup_window_pane_cp16

0xb270,	// (0x0001f749) indicator_popup_pane_cp4_ParamLimits

0xb270,	// (0x0001f749) indicator_popup_pane_cp4

0x20cf,	// (0x000165a8) popup_query_data_window_t1_ParamLimits

0x20cf,	// (0x000165a8) popup_query_data_window_t1

0x20e1,	// (0x000165ba) popup_query_data_window_t2_ParamLimits

0x20e1,	// (0x000165ba) popup_query_data_window_t2

0x20fa,	// (0x000165d3) popup_query_data_window_t3_ParamLimits

0x20fa,	// (0x000165d3) popup_query_data_window_t3

0x0002,

0xf830,	// (0x00023d09) popup_query_data_window_t_ParamLimits

0xf830,	// (0x00023d09) popup_query_data_window_t

0xb284,	// (0x0001f75d) query_popup_data_pane_ParamLimits

0xb284,	// (0x0001f75d) query_popup_data_pane

0xb298,	// (0x0001f771) query_popup_data_pane_cp1_ParamLimits

0xb298,	// (0x0001f771) query_popup_data_pane_cp1

0x1fbb,	// (0x00016494) bg_popup_window_pane_cp10_ParamLimits

0x1fbb,	// (0x00016494) bg_popup_window_pane_cp10

0xb1eb,	// (0x0001f6c4) indicator_popup_pane_ParamLimits

0xb1eb,	// (0x0001f6c4) indicator_popup_pane

0xb20d,	// (0x0001f6e6) popup_query_code_window_t1_ParamLimits

0xb20d,	// (0x0001f6e6) popup_query_code_window_t1

0xb227,	// (0x0001f700) popup_query_code_window_t2_ParamLimits

0xb227,	// (0x0001f700) popup_query_code_window_t2

0x2072,	// (0x0001654b) popup_query_code_window_t3_ParamLimits

0x2072,	// (0x0001654b) popup_query_code_window_t3

0x0002,

0xf829,	// (0x00023d02) popup_query_code_window_t_ParamLimits

0xf829,	// (0x00023d02) popup_query_code_window_t

0x20a1,	// (0x0001657a) query_popup_pane_ParamLimits

0x20a1,	// (0x0001657a) query_popup_pane

0xc343,	// (0x0002081c) bg_popup_window_pane_cp15_ParamLimits

0xc343,	// (0x0002081c) bg_popup_window_pane_cp15

0x9d15,	// (0x0001e1ee) indicator_popup_pane_cp1_ParamLimits

0x9d15,	// (0x0001e1ee) indicator_popup_pane_cp1

0x9d28,	// (0x0001e201) indicator_popup_pane_cp2_ParamLimits

0x9d28,	// (0x0001e201) indicator_popup_pane_cp2

0x9d3b,	// (0x0001e214) popup_query_data_code_window_g1_ParamLimits

0x9d3b,	// (0x0001e214) popup_query_data_code_window_g1

0xc361,	// (0x0002083a) popup_query_data_code_window_t1_ParamLimits

0xc361,	// (0x0002083a) popup_query_data_code_window_t1

0xc373,	// (0x0002084c) popup_query_data_code_window_t2_ParamLimits

0xc373,	// (0x0002084c) popup_query_data_code_window_t2

0x9d4e,	// (0x0001e227) popup_query_data_code_window_t3_ParamLimits

0x9d4e,	// (0x0001e227) popup_query_data_code_window_t3

0x9d64,	// (0x0001e23d) popup_query_data_code_window_t4_ParamLimits

0x9d64,	// (0x0001e23d) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00023a63) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00023a63) popup_query_data_code_window_t

0xe951,	// (0x00022e2a) list_single_midp_graphic_pane_g3

0x9d7c,	// (0x0001e255) query_popup_data_pane_cp2_ParamLimits

0x9d8f,	// (0x0001e268) query_popup_pane_cp2_ParamLimits

0x9d8f,	// (0x0001e268) query_popup_pane_cp2

0xc0fb,	// (0x000205d4) bg_popup_window_pane_cp11

0x1fb3,	// (0x0001648c) heading_pane_cp5

0xc3cf,	// (0x000208a8) listscroll_popup_info_pane

0xc0fb,	// (0x000205d4) input_focus_pane_cp3

0xc385,	// (0x0002085e) query_popup_pane_t1

0xc393,	// (0x0002086c) list_popup_info_pane_ParamLimits

0xc393,	// (0x0002086c) list_popup_info_pane

0xc3a2,	// (0x0002087b) listscroll_popup_info_pane_g1

0xc3aa,	// (0x00020883) scroll_pane_cp7

0x9da2,	// (0x0001e27b) popup_info_list_pane_t1_ParamLimits

0x9da2,	// (0x0001e27b) popup_info_list_pane_t1

0x9dbc,	// (0x0001e295) popup_info_list_pane_t2_ParamLimits

0x9dbc,	// (0x0001e295) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00023a6c) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00023a6c) popup_info_list_pane_t

0xc0fb,	// (0x000205d4) bg_popup_window_pane_cp12

0xb9c4,	// (0x0001fe9d) find_popup_pane

0xc157,	// (0x00020630) bg_popup_window_pane_cp3

0xc3b4,	// (0x0002088d) heading_pane_cp3

0xc3c0,	// (0x00020899) listscroll_popup_graphic_pane

0xc0fb,	// (0x000205d4) bg_popup_window_pane_cp4

0x9e26,	// (0x0001e2ff) heading_pane_cp4

0xc3cf,	// (0x000208a8) listscroll_popup_colour_pane

0x9e2e,	// (0x0001e307) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9e2e,	// (0x0001e307) cell_large_graphic_colour_none_popup_pane

0x9e42,	// (0x0001e31b) grid_large_graphic_colour_popup_pane_ParamLimits

0x9e42,	// (0x0001e31b) grid_large_graphic_colour_popup_pane

0x9e66,	// (0x0001e33f) listscroll_popup_colour_pane_g1_ParamLimits

0x9e66,	// (0x0001e33f) listscroll_popup_colour_pane_g1

0x9e7d,	// (0x0001e356) listscroll_popup_colour_pane_g2_ParamLimits

0x9e7d,	// (0x0001e356) listscroll_popup_colour_pane_g2

0x9e94,	// (0x0001e36d) listscroll_popup_colour_pane_g3_ParamLimits

0x9e94,	// (0x0001e36d) listscroll_popup_colour_pane_g3

0x9ea4,	// (0x0001e37d) listscroll_popup_colour_pane_g4_ParamLimits

0x9ea4,	// (0x0001e37d) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00023a71) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00023a71) listscroll_popup_colour_pane_g

0xc3d7,	// (0x000208b0) scroll_pane_cp6_ParamLimits

0xc3d7,	// (0x000208b0) scroll_pane_cp6

0x9eb4,	// (0x0001e38d) cell_large_graphic_colour_popup_pane_ParamLimits

0x9eb4,	// (0x0001e38d) cell_large_graphic_colour_popup_pane

0x9ed3,	// (0x0001e3ac) cell_large_graphic_colour_none_popup_pane_t1

0xc0fb,	// (0x000205d4) grid_highlight_pane_cp5

0xc3e9,	// (0x000208c2) cell_large_graphic_colour_popup_pane_g1

0xc3f1,	// (0x000208ca) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00023a7a) cell_large_graphic_colour_popup_pane_g

0xc3f9,	// (0x000208d2) cell_large_graphic_colour_popup_pane_g2_copy1

0xc402,	// (0x000208db) grid_highlight_pane_cp4

0xc40a,	// (0x000208e3) bg_popup_window_pane_cp8_ParamLimits

0xc40a,	// (0x000208e3) bg_popup_window_pane_cp8

0x9ee2,	// (0x0001e3bb) popup_snote_single_text_window_g1_ParamLimits

0x9ee2,	// (0x0001e3bb) popup_snote_single_text_window_g1

0x9ef4,	// (0x0001e3cd) popup_snote_single_text_window_t1_ParamLimits

0x9ef4,	// (0x0001e3cd) popup_snote_single_text_window_t1

0x9f07,	// (0x0001e3e0) popup_snote_single_text_window_t2_ParamLimits

0x9f07,	// (0x0001e3e0) popup_snote_single_text_window_t2

0x9f1a,	// (0x0001e3f3) popup_snote_single_text_window_t3_ParamLimits

0x9f1a,	// (0x0001e3f3) popup_snote_single_text_window_t3

0x9f53,	// (0x0001e42c) popup_snote_single_text_window_t4_ParamLimits

0x9f53,	// (0x0001e42c) popup_snote_single_text_window_t4

0x9f87,	// (0x0001e460) popup_snote_single_text_window_t5_ParamLimits

0x9f87,	// (0x0001e460) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00023a7f) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00023a7f) popup_snote_single_text_window_t

0xc425,	// (0x000208fe) bg_popup_window_pane_cp9_ParamLimits

0xc425,	// (0x000208fe) bg_popup_window_pane_cp9

0x9ee2,	// (0x0001e3bb) popup_snote_single_graphic_window_g1_ParamLimits

0x9ee2,	// (0x0001e3bb) popup_snote_single_graphic_window_g1

0xc433,	// (0x0002090c) popup_snote_single_graphic_window_g2_ParamLimits

0xc433,	// (0x0002090c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00023a8a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00023a8a) popup_snote_single_graphic_window_g

0xc43f,	// (0x00020918) popup_snote_single_graphic_window_t1_ParamLimits

0xc43f,	// (0x00020918) popup_snote_single_graphic_window_t1

0xc452,	// (0x0002092b) popup_snote_single_graphic_window_t2_ParamLimits

0xc452,	// (0x0002092b) popup_snote_single_graphic_window_t2

0x9f1a,	// (0x0001e3f3) popup_snote_single_graphic_window_t3_ParamLimits

0x9f1a,	// (0x0001e3f3) popup_snote_single_graphic_window_t3

0x9f53,	// (0x0001e42c) popup_snote_single_graphic_window_t4_ParamLimits

0x9f53,	// (0x0001e42c) popup_snote_single_graphic_window_t4

0x9fb6,	// (0x0001e48f) popup_snote_single_graphic_window_t5_ParamLimits

0x9fb6,	// (0x0001e48f) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00023a8f) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00023a8f) popup_snote_single_graphic_window_t

0x334c,	// (0x00017825) grid_graphic_popup_pane_ParamLimits

0x334c,	// (0x00017825) grid_graphic_popup_pane

0x3374,	// (0x0001784d) listscroll_popup_graphic_pane_g1_ParamLimits

0x3374,	// (0x0001784d) listscroll_popup_graphic_pane_g1

0xb962,	// (0x0001fe3b) listscroll_popup_graphic_pane_g2_ParamLimits

0xb962,	// (0x0001fe3b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x00023e7f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x00023e7f) listscroll_popup_graphic_pane_g

0x339c,	// (0x00017875) scroll_pane_cp5

0xb91d,	// (0x0001fdf6) cell_graphic_popup_pane_ParamLimits

0xb91d,	// (0x0001fdf6) cell_graphic_popup_pane

0x32ca,	// (0x000177a3) cell_graphic_popup_pane_g1

0x32d2,	// (0x000177ab) cell_graphic_popup_pane_g2

0xc3f9,	// (0x000208d2) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x00023e78) cell_graphic_popup_pane_g

0x32db,	// (0x000177b4) cell_graphic_popup_pane_t2

0xc402,	// (0x000208db) grid_highlight_pane_cp3

0xc477,	// (0x00020950) list_gen_pane_ParamLimits

0xc477,	// (0x00020950) list_gen_pane

0xc49f,	// (0x00020978) scroll_pane

0xb887,	// (0x0001fd60) bg_list_pane_g1_ParamLimits

0xb887,	// (0x0001fd60) bg_list_pane_g1

0xb8a2,	// (0x0001fd7b) bg_list_pane_g2_ParamLimits

0xb8a2,	// (0x0001fd7b) bg_list_pane_g2

0xb8b5,	// (0x0001fd8e) bg_list_pane_g3_ParamLimits

0xb8b5,	// (0x0001fd8e) bg_list_pane_g3

0xb8c7,	// (0x0001fda0) bg_list_pane_g4_ParamLimits

0xb8c7,	// (0x0001fda0) bg_list_pane_g4

0xb8d9,	// (0x0001fdb2) bg_list_pane_g5_ParamLimits

0xb8d9,	// (0x0001fdb2) bg_list_pane_g5

0x0004,

0xf994,	// (0x00023e6d) bg_list_pane_g_ParamLimits

0xf994,	// (0x00023e6d) bg_list_pane_g

0xb82b,	// (0x0001fd04) list_double2_graphic_large_graphic_pane_ParamLimits

0xb82b,	// (0x0001fd04) list_double2_graphic_large_graphic_pane

0xb82b,	// (0x0001fd04) list_double2_graphic_pane_ParamLimits

0xb82b,	// (0x0001fd04) list_double2_graphic_pane

0xb82b,	// (0x0001fd04) list_double2_large_graphic_pane_ParamLimits

0xb82b,	// (0x0001fd04) list_double2_large_graphic_pane

0xb82b,	// (0x0001fd04) list_double2_pane_ParamLimits

0xb82b,	// (0x0001fd04) list_double2_pane

0xb82b,	// (0x0001fd04) list_double_graphic_heading_pane_ParamLimits

0xb82b,	// (0x0001fd04) list_double_graphic_heading_pane

0xb82b,	// (0x0001fd04) list_double_graphic_pane_ParamLimits

0xb82b,	// (0x0001fd04) list_double_graphic_pane

0xb82b,	// (0x0001fd04) list_double_heading_pane_ParamLimits

0xb82b,	// (0x0001fd04) list_double_heading_pane

0xb82b,	// (0x0001fd04) list_double_large_graphic_pane_ParamLimits

0xb82b,	// (0x0001fd04) list_double_large_graphic_pane

0xb82b,	// (0x0001fd04) list_double_number_pane_ParamLimits

0xb82b,	// (0x0001fd04) list_double_number_pane

0xb82b,	// (0x0001fd04) list_double_pane_ParamLimits

0xb82b,	// (0x0001fd04) list_double_pane

0xb82b,	// (0x0001fd04) list_double_time_pane_ParamLimits

0xb82b,	// (0x0001fd04) list_double_time_pane

0xb82b,	// (0x0001fd04) list_setting_number_pane_ParamLimits

0xb82b,	// (0x0001fd04) list_setting_number_pane

0xb82b,	// (0x0001fd04) list_setting_pane_ParamLimits

0xb82b,	// (0x0001fd04) list_setting_pane

0xb83d,	// (0x0001fd16) list_single_2graphic_pane_ParamLimits

0xb83d,	// (0x0001fd16) list_single_2graphic_pane

0xb83d,	// (0x0001fd16) list_single_graphic_heading_pane_ParamLimits

0xb83d,	// (0x0001fd16) list_single_graphic_heading_pane

0xb83d,	// (0x0001fd16) list_single_graphic_pane_ParamLimits

0xb83d,	// (0x0001fd16) list_single_graphic_pane

0xb83d,	// (0x0001fd16) list_single_heading_pane_ParamLimits

0xb83d,	// (0x0001fd16) list_single_heading_pane

0xb83d,	// (0x0001fd16) list_single_large_graphic_pane_ParamLimits

0xb83d,	// (0x0001fd16) list_single_large_graphic_pane

0xb83d,	// (0x0001fd16) list_single_number_heading_pane_ParamLimits

0xb83d,	// (0x0001fd16) list_single_number_heading_pane

0xb83d,	// (0x0001fd16) list_single_number_pane_ParamLimits

0xb83d,	// (0x0001fd16) list_single_number_pane

0xb83d,	// (0x0001fd16) list_single_pane_ParamLimits

0xb83d,	// (0x0001fd16) list_single_pane

0xc0fb,	// (0x000205d4) list_highlight_pane_cp1

0xc4d3,	// (0x000209ac) list_single_pane_g1_ParamLimits

0xc4d3,	// (0x000209ac) list_single_pane_g1

0xc4df,	// (0x000209b8) list_single_pane_g2_ParamLimits

0xc4df,	// (0x000209b8) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00023aa1) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00023aa1) list_single_pane_g

0x39d6,	// (0x00017eaf) list_single_pane_t1_ParamLimits

0x39d6,	// (0x00017eaf) list_single_pane_t1

0xc4d3,	// (0x000209ac) list_single_number_pane_g1_ParamLimits

0xc4d3,	// (0x000209ac) list_single_number_pane_g1

0xc4df,	// (0x000209b8) list_single_number_pane_g2_ParamLimits

0xc4df,	// (0x000209b8) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00023aa1) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00023aa1) list_single_number_pane_g

0x19e9,	// (0x00015ec2) list_single_number_pane_t1_ParamLimits

0x19e9,	// (0x00015ec2) list_single_number_pane_t1

0x3acb,	// (0x00017fa4) list_single_number_pane_t2_ParamLimits

0x3acb,	// (0x00017fa4) list_single_number_pane_t2

0x0001,

0xf955,	// (0x00023e2e) list_single_number_pane_t_ParamLimits

0xf955,	// (0x00023e2e) list_single_number_pane_t

0x9fef,	// (0x0001e4c8) list_single_graphic_pane_g1_ParamLimits

0x9fef,	// (0x0001e4c8) list_single_graphic_pane_g1

0xc4d3,	// (0x000209ac) list_single_graphic_pane_g2_ParamLimits

0xc4d3,	// (0x000209ac) list_single_graphic_pane_g2

0xc4df,	// (0x000209b8) list_single_graphic_pane_g3_ParamLimits

0xc4df,	// (0x000209b8) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00023a9a) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00023a9a) list_single_graphic_pane_g

0x9ffb,	// (0x0001e4d4) list_single_graphic_pane_t1_ParamLimits

0x9ffb,	// (0x0001e4d4) list_single_graphic_pane_t1

0xc4d3,	// (0x000209ac) list_single_heading_pane_g1_ParamLimits

0xc4d3,	// (0x000209ac) list_single_heading_pane_g1

0xc4df,	// (0x000209b8) list_single_heading_pane_g2_ParamLimits

0xc4df,	// (0x000209b8) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00023aa1) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00023aa1) list_single_heading_pane_g

0xa011,	// (0x0001e4ea) list_single_heading_pane_t1_ParamLimits

0xa011,	// (0x0001e4ea) list_single_heading_pane_t1

0xa027,	// (0x0001e500) list_single_heading_pane_t2_ParamLimits

0xa027,	// (0x0001e500) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00023aa6) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00023aa6) list_single_heading_pane_t

0xc4d3,	// (0x000209ac) list_single_number_heading_pane_g1_ParamLimits

0xc4d3,	// (0x000209ac) list_single_number_heading_pane_g1

0xc4df,	// (0x000209b8) list_single_number_heading_pane_g2_ParamLimits

0xc4df,	// (0x000209b8) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00023aa1) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00023aa1) list_single_number_heading_pane_g

0xa011,	// (0x0001e4ea) list_single_number_heading_pane_t1_ParamLimits

0xa011,	// (0x0001e4ea) list_single_number_heading_pane_t1

0xa039,	// (0x0001e512) list_single_number_heading_pane_t2_ParamLimits

0xa039,	// (0x0001e512) list_single_number_heading_pane_t2

0x39b0,	// (0x00017e89) list_single_number_heading_pane_t3_ParamLimits

0x39b0,	// (0x00017e89) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00023aab) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00023aab) list_single_number_heading_pane_t

0x19dd,	// (0x00015eb6) list_single_graphic_heading_pane_g1_ParamLimits

0x19dd,	// (0x00015eb6) list_single_graphic_heading_pane_g1

0xa04b,	// (0x0001e524) list_single_graphic_heading_pane_g4_ParamLimits

0xa04b,	// (0x0001e524) list_single_graphic_heading_pane_g4

0xc4df,	// (0x000209b8) list_single_graphic_heading_pane_g5_ParamLimits

0xc4df,	// (0x000209b8) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00023ab2) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00023ab2) list_single_graphic_heading_pane_g

0xa011,	// (0x0001e4ea) list_single_graphic_heading_pane_t1_ParamLimits

0xa011,	// (0x0001e4ea) list_single_graphic_heading_pane_t1

0xa05c,	// (0x0001e535) list_single_graphic_heading_pane_t2_ParamLimits

0xa05c,	// (0x0001e535) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00023ab9) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00023ab9) list_single_graphic_heading_pane_t

0x39ec,	// (0x00017ec5) list_single_large_graphic_pane_g1_ParamLimits

0x39ec,	// (0x00017ec5) list_single_large_graphic_pane_g1

0xc4d3,	// (0x000209ac) list_single_large_graphic_pane_g2_ParamLimits

0xc4d3,	// (0x000209ac) list_single_large_graphic_pane_g2

0xc4df,	// (0x000209b8) list_single_large_graphic_pane_g3_ParamLimits

0xc4df,	// (0x000209b8) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00023abe) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00023abe) list_single_large_graphic_pane_g

0x215b,	// (0x00016634) wait_border_pane_g2_copy1

0xa06e,	// (0x0001e547) list_single_large_graphic_pane_g4_cp2

0x39f8,	// (0x00017ed1) list_single_large_graphic_pane_t1_ParamLimits

0x39f8,	// (0x00017ed1) list_single_large_graphic_pane_t1

0xa076,	// (0x0001e54f) list_double_pane_g1_ParamLimits

0xa076,	// (0x0001e54f) list_double_pane_g1

0xa082,	// (0x0001e55b) list_double_pane_g2_ParamLimits

0xa082,	// (0x0001e55b) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00023ac5) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00023ac5) list_double_pane_g

0xa08e,	// (0x0001e567) list_double_pane_t1_ParamLimits

0xa08e,	// (0x0001e567) list_double_pane_t1

0xa0a4,	// (0x0001e57d) list_double_pane_t2_ParamLimits

0xa0a4,	// (0x0001e57d) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00023aca) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00023aca) list_double_pane_t

0xa0b6,	// (0x0001e58f) list_double2_pane_g1_ParamLimits

0xa0b6,	// (0x0001e58f) list_double2_pane_g1

0xa0c7,	// (0x0001e5a0) list_double2_pane_g2_ParamLimits

0xa0c7,	// (0x0001e5a0) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00023acf) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00023acf) list_double2_pane_g

0xa0d3,	// (0x0001e5ac) list_double2_pane_t1_ParamLimits

0xa0d3,	// (0x0001e5ac) list_double2_pane_t1

0xa0e9,	// (0x0001e5c2) list_double2_pane_t2_ParamLimits

0xa0e9,	// (0x0001e5c2) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00023ad4) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00023ad4) list_double2_pane_t

0xa076,	// (0x0001e54f) list_double_number_pane_g1_ParamLimits

0xa076,	// (0x0001e54f) list_double_number_pane_g1

0xa082,	// (0x0001e55b) list_double_number_pane_g2_ParamLimits

0xa082,	// (0x0001e55b) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00023ac5) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00023ac5) list_double_number_pane_g

0xa0fb,	// (0x0001e5d4) list_double_number_pane_t1_ParamLimits

0xa0fb,	// (0x0001e5d4) list_double_number_pane_t1

0xa10d,	// (0x0001e5e6) list_double_number_pane_t2_ParamLimits

0xa10d,	// (0x0001e5e6) list_double_number_pane_t2

0xa123,	// (0x0001e5fc) list_double_number_pane_t3_ParamLimits

0xa123,	// (0x0001e5fc) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00023ad9) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00023ad9) list_double_number_pane_t

0xa135,	// (0x0001e60e) list_double_graphic_pane_g1_ParamLimits

0xa135,	// (0x0001e60e) list_double_graphic_pane_g1

0xa141,	// (0x0001e61a) list_double_graphic_pane_g2_ParamLimits

0xa141,	// (0x0001e61a) list_double_graphic_pane_g2

0xa150,	// (0x0001e629) list_double_graphic_pane_g3_ParamLimits

0xa150,	// (0x0001e629) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00023ae0) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00023ae0) list_double_graphic_pane_g

0xa168,	// (0x0001e641) list_double_graphic_pane_t1_ParamLimits

0xa168,	// (0x0001e641) list_double_graphic_pane_t1

0xa17e,	// (0x0001e657) list_double_graphic_pane_t2_ParamLimits

0xa17e,	// (0x0001e657) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00023ae9) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00023ae9) list_double_graphic_pane_t

0xc4eb,	// (0x000209c4) list_double2_graphic_pane_g1_ParamLimits

0xc4eb,	// (0x000209c4) list_double2_graphic_pane_g1

0x4b47,	// (0x00019020) list_double2_graphic_pane_g2_ParamLimits

0x4b47,	// (0x00019020) list_double2_graphic_pane_g2

0xa0c7,	// (0x0001e5a0) list_double2_graphic_pane_g3_ParamLimits

0xa0c7,	// (0x0001e5a0) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00023aee) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00023aee) list_double2_graphic_pane_g

0xa190,	// (0x0001e669) list_double2_graphic_pane_t1_ParamLimits

0xa190,	// (0x0001e669) list_double2_graphic_pane_t1

0xa1a6,	// (0x0001e67f) list_double2_graphic_pane_t2_ParamLimits

0xa1a6,	// (0x0001e67f) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00023af5) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00023af5) list_double2_graphic_pane_t

0xa1b8,	// (0x0001e691) list_double_large_graphic_pane_g1_ParamLimits

0xa1b8,	// (0x0001e691) list_double_large_graphic_pane_g1

0xa1d7,	// (0x0001e6b0) list_double_large_graphic_pane_g2_ParamLimits

0xa1d7,	// (0x0001e6b0) list_double_large_graphic_pane_g2

0xa082,	// (0x0001e55b) list_double_large_graphic_pane_g3_ParamLimits

0xa082,	// (0x0001e55b) list_double_large_graphic_pane_g3

0xa1e8,	// (0x0001e6c1) list_double_large_graphic_pane_g4_ParamLimits

0xa1e8,	// (0x0001e6c1) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00023afa) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00023afa) list_double_large_graphic_pane_g

0xa1fb,	// (0x0001e6d4) list_double_large_graphic_pane_t1_ParamLimits

0xa1fb,	// (0x0001e6d4) list_double_large_graphic_pane_t1

0xa214,	// (0x0001e6ed) list_double_large_graphic_pane_t2_ParamLimits

0xa214,	// (0x0001e6ed) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00023b05) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00023b05) list_double_large_graphic_pane_t

0xa226,	// (0x0001e6ff) list_double2_large_graphic_pane_g1_ParamLimits

0xa226,	// (0x0001e6ff) list_double2_large_graphic_pane_g1

0xa0b6,	// (0x0001e58f) list_double2_large_graphic_pane_g2_ParamLimits

0xa0b6,	// (0x0001e58f) list_double2_large_graphic_pane_g2

0xa0c7,	// (0x0001e5a0) list_double2_large_graphic_pane_g3_ParamLimits

0xa0c7,	// (0x0001e5a0) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00023b0a) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00023b0a) list_double2_large_graphic_pane_g

0xa232,	// (0x0001e70b) list_double2_large_graphic_pane_t1_ParamLimits

0xa232,	// (0x0001e70b) list_double2_large_graphic_pane_t1

0xa248,	// (0x0001e721) list_double2_large_graphic_pane_t2_ParamLimits

0xa248,	// (0x0001e721) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00023b11) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00023b11) list_double2_large_graphic_pane_t

0xa25a,	// (0x0001e733) list_double_heading_pane_g1_ParamLimits

0xa25a,	// (0x0001e733) list_double_heading_pane_g1

0xa26b,	// (0x0001e744) list_double_heading_pane_g2_ParamLimits

0xa26b,	// (0x0001e744) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00023b16) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00023b16) list_double_heading_pane_g

0xa277,	// (0x0001e750) list_double_heading_pane_t1_ParamLimits

0xa277,	// (0x0001e750) list_double_heading_pane_t1

0xa28d,	// (0x0001e766) list_double_heading_pane_t2_ParamLimits

0xa28d,	// (0x0001e766) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00023b1b) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00023b1b) list_double_heading_pane_t

0xa135,	// (0x0001e60e) list_double_graphic_heading_pane_g1_ParamLimits

0xa135,	// (0x0001e60e) list_double_graphic_heading_pane_g1

0xa25a,	// (0x0001e733) list_double_graphic_heading_pane_g2_ParamLimits

0xa25a,	// (0x0001e733) list_double_graphic_heading_pane_g2

0xa26b,	// (0x0001e744) list_double_graphic_heading_pane_g3_ParamLimits

0xa26b,	// (0x0001e744) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00023b20) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00023b20) list_double_graphic_heading_pane_g

0xa29f,	// (0x0001e778) list_double_graphic_heading_pane_t1_ParamLimits

0xa29f,	// (0x0001e778) list_double_graphic_heading_pane_t1

0xa2b5,	// (0x0001e78e) list_double_graphic_heading_pane_t2_ParamLimits

0xa2b5,	// (0x0001e78e) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00023b27) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00023b27) list_double_graphic_heading_pane_t

0xa1d7,	// (0x0001e6b0) list_double_time_pane_g1_ParamLimits

0xa1d7,	// (0x0001e6b0) list_double_time_pane_g1

0xa082,	// (0x0001e55b) list_double_time_pane_g2_ParamLimits

0xa082,	// (0x0001e55b) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00023b2c) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00023b2c) list_double_time_pane_g

0xa2c7,	// (0x0001e7a0) list_double_time_pane_t1_ParamLimits

0xa2c7,	// (0x0001e7a0) list_double_time_pane_t1

0xa2dd,	// (0x0001e7b6) list_double_time_pane_t2_ParamLimits

0xa2dd,	// (0x0001e7b6) list_double_time_pane_t2

0xa2ef,	// (0x0001e7c8) list_double_time_pane_t3_ParamLimits

0xa2ef,	// (0x0001e7c8) list_double_time_pane_t3

0xa301,	// (0x0001e7da) list_double_time_pane_t4_ParamLimits

0xa301,	// (0x0001e7da) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00023b31) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00023b31) list_double_time_pane_t

0x4b47,	// (0x00019020) list_setting_pane_g1_ParamLimits

0x4b47,	// (0x00019020) list_setting_pane_g1

0xa0c7,	// (0x0001e5a0) list_setting_pane_g2_ParamLimits

0xa0c7,	// (0x0001e5a0) list_setting_pane_g2

0x0001,

0xf661,	// (0x00023b3a) list_setting_pane_g_ParamLimits

0xf661,	// (0x00023b3a) list_setting_pane_g

0xa313,	// (0x0001e7ec) list_setting_pane_t1_ParamLimits

0xa313,	// (0x0001e7ec) list_setting_pane_t1

0xa32a,	// (0x0001e803) list_setting_pane_t2_ParamLimits

0xa32a,	// (0x0001e803) list_setting_pane_t2

0x0002,

0xf666,	// (0x00023b3f) list_setting_pane_t_ParamLimits

0xf666,	// (0x00023b3f) list_setting_pane_t

0xa369,	// (0x0001e842) set_value_pane_cp_ParamLimits

0xa369,	// (0x0001e842) set_value_pane_cp

0x4b47,	// (0x00019020) list_setting_number_pane_g1_ParamLimits

0x4b47,	// (0x00019020) list_setting_number_pane_g1

0xa0c7,	// (0x0001e5a0) list_setting_number_pane_g2_ParamLimits

0xa0c7,	// (0x0001e5a0) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x00023b3a) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x00023b3a) list_setting_number_pane_g

0xa375,	// (0x0001e84e) list_setting_number_pane_t1_ParamLimits

0xa375,	// (0x0001e84e) list_setting_number_pane_t1

0xa389,	// (0x0001e862) list_setting_number_pane_t2_ParamLimits

0xa389,	// (0x0001e862) list_setting_number_pane_t2

0xa3a0,	// (0x0001e879) list_setting_number_pane_t3_ParamLimits

0xa3a0,	// (0x0001e879) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00023b46) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00023b46) list_setting_number_pane_t

0xa369,	// (0x0001e842) set_value_pane_ParamLimits

0xa369,	// (0x0001e842) set_value_pane

0xc50c,	// (0x000209e5) bg_set_opt_pane_ParamLimits

0xc50c,	// (0x000209e5) bg_set_opt_pane

0xc52d,	// (0x00020a06) set_value_pane_t1

0xc53b,	// (0x00020a14) slider_set_pane_cp3

0xa3e3,	// (0x0001e8bc) volume_small_pane_cp

0xc544,	// (0x00020a1d) list_form_gen_pane

0xc54d,	// (0x00020a26) scroll_pane_cp8

0xa3ec,	// (0x0001e8c5) form_field_data_pane_ParamLimits

0xa3ec,	// (0x0001e8c5) form_field_data_pane

0xa403,	// (0x0001e8dc) form_field_data_wide_pane_ParamLimits

0xa403,	// (0x0001e8dc) form_field_data_wide_pane

0xa423,	// (0x0001e8fc) form_field_popup_pane_ParamLimits

0xa423,	// (0x0001e8fc) form_field_popup_pane

0xa443,	// (0x0001e91c) form_field_popup_wide_pane_ParamLimits

0xa443,	// (0x0001e91c) form_field_popup_wide_pane

0xc56e,	// (0x00020a47) form_field_slider_pane_ParamLimits

0xc56e,	// (0x00020a47) form_field_slider_pane

0xa45a,	// (0x0001e933) form_field_slider_wide_pane_ParamLimits

0xa45a,	// (0x0001e933) form_field_slider_wide_pane

0xc581,	// (0x00020a5a) data_form_pane

0xa477,	// (0x0001e950) form_field_data_pane_t1

0xc58d,	// (0x00020a66) input_focus_pane

0xa491,	// (0x0001e96a) data_form_wide_pane

0xa4a2,	// (0x0001e97b) form_field_data_wide_pane_t1

0xc417,	// (0x000208f0) input_focus_pane_cp6

0xa4bc,	// (0x0001e995) form_field_popup_pane_t1

0xc58d,	// (0x00020a66) input_focus_pane_cp7

0xc5cf,	// (0x00020aa8) list_form_pane

0xc5e3,	// (0x00020abc) form_field_popup_wide_pane_t1

0xc58d,	// (0x00020a66) input_focus_pane_cp8

0xc5f8,	// (0x00020ad1) list_form_wide_pane

0xa4de,	// (0x0001e9b7) form_field_slider_pane_t1_ParamLimits

0xa4de,	// (0x0001e9b7) form_field_slider_pane_t1

0xa4f6,	// (0x0001e9cf) form_field_slider_pane_t2_ParamLimits

0xa4f6,	// (0x0001e9cf) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00023b56) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00023b56) form_field_slider_pane_t

0xc149,	// (0x00020622) input_focus_pane_cp9_ParamLimits

0xc149,	// (0x00020622) input_focus_pane_cp9

0xa50b,	// (0x0001e9e4) slider_cont_pane_ParamLimits

0xa50b,	// (0x0001e9e4) slider_cont_pane

0xc607,	// (0x00020ae0) form_field_slider_wide_pane_t1_ParamLimits

0xc607,	// (0x00020ae0) form_field_slider_wide_pane_t1

0xc619,	// (0x00020af2) form_field_slider_wide_pane_t2_ParamLimits

0xc619,	// (0x00020af2) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00023b5b) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00023b5b) form_field_slider_wide_pane_t

0xc149,	// (0x00020622) input_focus_pane_cp10_ParamLimits

0xc149,	// (0x00020622) input_focus_pane_cp10

0xa51f,	// (0x0001e9f8) slider_cont_pane_cp1_ParamLimits

0xa51f,	// (0x0001e9f8) slider_cont_pane_cp1

0xa533,	// (0x0001ea0c) slider_form_pane_cp

0xc62b,	// (0x00020b04) input_focus_pane_g1

0xc633,	// (0x00020b0c) input_focus_pane_g2

0xc63b,	// (0x00020b14) input_focus_pane_g3

0xc643,	// (0x00020b1c) input_focus_pane_g4

0xc64b,	// (0x00020b24) input_focus_pane_g5

0xc653,	// (0x00020b2c) input_focus_pane_g6

0xc65b,	// (0x00020b34) input_focus_pane_g7

0xc663,	// (0x00020b3c) input_focus_pane_g8

0xc66b,	// (0x00020b44) input_focus_pane_g9

0xc0f1,	// (0x000205ca) input_focus_pane_g10

0x0009,

0xf687,	// (0x00023b60) input_focus_pane_g

0x2164,	// (0x0001663d) wait_border_pane_g3_copy1

0xa53b,	// (0x0001ea14) data_form_pane_t1

0xc0f1,	// (0x000205ca) wait_anim_pane_g1_copy1

0xb80f,	// (0x0001fce8) data_form_wide_pane_t1

0xa555,	// (0x0001ea2e) list_form_graphic_pane_cp_ParamLimits

0xa555,	// (0x0001ea2e) list_form_graphic_pane_cp

0x308c,	// (0x00017565) slider_form_pane_g1

0x3095,	// (0x0001756e) slider_form_pane_g2

0x0006,

0xf985,	// (0x00023e5e) slider_form_pane_g

0xa567,	// (0x0001ea40) list_form_graphic_pane_ParamLimits

0xa567,	// (0x0001ea40) list_form_graphic_pane

0xa57a,	// (0x0001ea53) list_form_graphic_pane_g1

0xa582,	// (0x0001ea5b) list_form_graphic_pane_t1_ParamLimits

0xa582,	// (0x0001ea5b) list_form_graphic_pane_t1

0xc157,	// (0x00020630) list_highlight_pane_cp5_ParamLimits

0xc157,	// (0x00020630) list_highlight_pane_cp5

0xa597,	// (0x0001ea70) find_pane_g1

0xc673,	// (0x00020b4c) input_find_pane

0xa5a0,	// (0x0001ea79) input_find_pane_g1_ParamLimits

0xa5a0,	// (0x0001ea79) input_find_pane_g1

0xa5ac,	// (0x0001ea85) input_find_pane_t1_ParamLimits

0xa5ac,	// (0x0001ea85) input_find_pane_t1

0xa5c1,	// (0x0001ea9a) input_find_pane_t2_ParamLimits

0xa5c1,	// (0x0001ea9a) input_find_pane_t2

0x0001,

0xf69c,	// (0x00023b75) input_find_pane_t_ParamLimits

0xf69c,	// (0x00023b75) input_find_pane_t

0xc67c,	// (0x00020b55) input_focus_pane_cp5_ParamLimits

0xc67c,	// (0x00020b55) input_focus_pane_cp5

0xc68a,	// (0x00020b63) bg_popup_window_pane_cp2_ParamLimits

0xc68a,	// (0x00020b63) bg_popup_window_pane_cp2

0xc697,	// (0x00020b70) listscroll_menu_pane_ParamLimits

0xc697,	// (0x00020b70) listscroll_menu_pane

0xa5e2,	// (0x0001eabb) popup_submenu_window_ParamLimits

0xa5e2,	// (0x0001eabb) popup_submenu_window

0xc6a3,	// (0x00020b7c) find_popup_pane_g1

0xa60a,	// (0x0001eae3) input_popup_find_pane_cp

0xc67c,	// (0x00020b55) input_focus_pane_cp4_ParamLimits

0xc67c,	// (0x00020b55) input_focus_pane_cp4

0xc6ab,	// (0x00020b84) input_popup_find_pane_t1_ParamLimits

0xc6ab,	// (0x00020b84) input_popup_find_pane_t1

0xc0fb,	// (0x000205d4) bg_popup_sub_pane_cp

0xc6d9,	// (0x00020bb2) listscroll_popup_sub_pane

0xc6e1,	// (0x00020bba) list_submenu_pane_ParamLimits

0xc6e1,	// (0x00020bba) list_submenu_pane

0xc6f2,	// (0x00020bcb) scroll_pane_cp4

0xa622,	// (0x0001eafb) list_single_popup_submenu_pane_ParamLimits

0xa622,	// (0x0001eafb) list_single_popup_submenu_pane

0xa636,	// (0x0001eb0f) list_single_popup_submenu_pane_g1

0xa63e,	// (0x0001eb17) list_single_popup_submenu_pane_t1_ParamLimits

0xa63e,	// (0x0001eb17) list_single_popup_submenu_pane_t1

0xc149,	// (0x00020622) bg_active_tab_pane_cp1_ParamLimits

0xc149,	// (0x00020622) bg_active_tab_pane_cp1

0xc6fa,	// (0x00020bd3) tabs_2_active_pane_g1

0xa653,	// (0x0001eb2c) tabs_2_active_pane_t1

0xc149,	// (0x00020622) bg_passive_tab_pane_cp1_ParamLimits

0xc149,	// (0x00020622) bg_passive_tab_pane_cp1

0xc6fa,	// (0x00020bd3) tabs_2_passive_pane_g1

0xa653,	// (0x0001eb2c) tabs_2_passive_pane_t1

0xc157,	// (0x00020630) bg_active_tab_pane_cp4

0xa665,	// (0x0001eb3e) tabs_2_long_active_pane_t1

0x1524,	// (0x000159fd) bg_passive_tab_pane_cp4

0xe959,	// (0x00022e32) list_single_midp_graphic_pane_g4_ParamLimits

0xc157,	// (0x00020630) bg_active_tab_pane_cp5

0xa678,	// (0x0001eb51) tabs_3_long_active_pane_t1

0x1524,	// (0x000159fd) bg_passive_tab_pane_cp5

0xe959,	// (0x00022e32) list_single_midp_graphic_pane_g4

0xc157,	// (0x00020630) bg_popup_window_pane_cp13_ParamLimits

0xc157,	// (0x00020630) bg_popup_window_pane_cp13

0xc702,	// (0x00020bdb) listscroll_popup_fast_pane_ParamLimits

0xc702,	// (0x00020bdb) listscroll_popup_fast_pane

0xc70e,	// (0x00020be7) grid_popup_fast_pane_ParamLimits

0xc70e,	// (0x00020be7) grid_popup_fast_pane

0xc720,	// (0x00020bf9) scroll_pane_cp9_ParamLimits

0xc720,	// (0x00020bf9) scroll_pane_cp9

0x4fd0,	// (0x000194a9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4fd0,	// (0x000194a9) list_single_graphic_hl_pane_t1_cp2

0xc733,	// (0x00020c0c) input_focus_pane_cp20_ParamLimits

0xc733,	// (0x00020c0c) input_focus_pane_cp20

0xc741,	// (0x00020c1a) query_popup_data_pane_t1_ParamLimits

0xc741,	// (0x00020c1a) query_popup_data_pane_t1

0xc754,	// (0x00020c2d) query_popup_data_pane_t2_ParamLimits

0xc754,	// (0x00020c2d) query_popup_data_pane_t2

0xc79a,	// (0x00020c73) query_popup_data_pane_t3_ParamLimits

0xc79a,	// (0x00020c73) query_popup_data_pane_t3

0xc7db,	// (0x00020cb4) query_popup_data_pane_t4_ParamLimits

0xc7db,	// (0x00020cb4) query_popup_data_pane_t4

0xc817,	// (0x00020cf0) query_popup_data_pane_t5_ParamLimits

0xc817,	// (0x00020cf0) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00023b7a) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00023b7a) query_popup_data_pane_t

0xc62b,	// (0x00020b04) bg_set_opt_pane_g1

0xc633,	// (0x00020b0c) bg_set_opt_pane_g2

0xc63b,	// (0x00020b14) bg_set_opt_pane_g3

0xc643,	// (0x00020b1c) bg_set_opt_pane_g4

0xc64b,	// (0x00020b24) bg_set_opt_pane_g5

0xc653,	// (0x00020b2c) bg_set_opt_pane_g6

0xc65b,	// (0x00020b34) bg_set_opt_pane_g7

0xc663,	// (0x00020b3c) bg_set_opt_pane_g8

0xc66b,	// (0x00020b44) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00023b85) bg_set_opt_pane_g

0xe636,	// (0x00022b0f) control_top_pane_stacon_ParamLimits

0xe636,	// (0x00022b0f) control_top_pane_stacon

0xe689,	// (0x00022b62) signal_pane_stacon_ParamLimits

0xe689,	// (0x00022b62) signal_pane_stacon

0x0e7d,	// (0x00015356) stacon_top_pane_g1_ParamLimits

0x0e7d,	// (0x00015356) stacon_top_pane_g1

0xe6ae,	// (0x00022b87) title_pane_stacon_ParamLimits

0xe6ae,	// (0x00022b87) title_pane_stacon

0xe6d8,	// (0x00022bb1) uni_indicator_pane_stacon_ParamLimits

0xe6d8,	// (0x00022bb1) uni_indicator_pane_stacon

0xe6ed,	// (0x00022bc6) battery_pane_stacon_ParamLimits

0xe6ed,	// (0x00022bc6) battery_pane_stacon

0xe731,	// (0x00022c0a) control_bottom_pane_stacon_ParamLimits

0xe731,	// (0x00022c0a) control_bottom_pane_stacon

0xe754,	// (0x00022c2d) navi_pane_stacon_ParamLimits

0xe754,	// (0x00022c2d) navi_pane_stacon

0x0e9f,	// (0x00015378) stacon_bottom_pane_g1_ParamLimits

0x0e9f,	// (0x00015378) stacon_bottom_pane_g1

0xe0b1,	// (0x0002258a) aid_levels_signal_lsc_ParamLimits

0xe0b1,	// (0x0002258a) aid_levels_signal_lsc

0xe0c7,	// (0x000225a0) signal_pane_stacon_g1_ParamLimits

0xe0c7,	// (0x000225a0) signal_pane_stacon_g1

0xe0db,	// (0x000225b4) signal_pane_stacon_g2_ParamLimits

0xe0db,	// (0x000225b4) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00023b98) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00023b98) signal_pane_stacon_g

0xe110,	// (0x000225e9) title_pane_stacon_t1_ParamLimits

0xe110,	// (0x000225e9) title_pane_stacon_t1

0xe135,	// (0x0002260e) uni_indicator_pane_stacon_g1

0xe13f,	// (0x00022618) uni_indicator_pane_stacon_g2

0xe149,	// (0x00022622) uni_indicator_pane_stacon_g3

0xe153,	// (0x0002262c) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00023ba4) uni_indicator_pane_stacon_g

0xe15d,	// (0x00022636) control_top_pane_stacon_g1

0xe165,	// (0x0002263e) control_top_pane_stacon_t1_ParamLimits

0xe165,	// (0x0002263e) control_top_pane_stacon_t1

0xe19c,	// (0x00022675) aid_levels_battery_lsc_ParamLimits

0xe19c,	// (0x00022675) aid_levels_battery_lsc

0xe1b3,	// (0x0002268c) battery_pane_stacon_g1_ParamLimits

0xe1b3,	// (0x0002268c) battery_pane_stacon_g1

0xe1c6,	// (0x0002269f) battery_pane_stacon_g2_ParamLimits

0xe1c6,	// (0x0002269f) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00023bad) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00023bad) battery_pane_stacon_g

0xe204,	// (0x000226dd) navi_icon_pane_stacon

0xe218,	// (0x000226f1) navi_navi_pane_stacon

0xe204,	// (0x000226dd) navi_text_pane_stacon

0xe15d,	// (0x00022636) control_bottom_pane_stacon_g1

0xe22c,	// (0x00022705) control_bottom_pane_stacon_t1_ParamLimits

0xe22c,	// (0x00022705) control_bottom_pane_stacon_t1

0xa6a4,	// (0x0001eb7d) grid_app_pane_ParamLimits

0xa6a4,	// (0x0001eb7d) grid_app_pane

0xa6dc,	// (0x0001ebb5) scroll_pane_cp15_ParamLimits

0xa6dc,	// (0x0001ebb5) scroll_pane_cp15

0xa6f1,	// (0x0001ebca) cell_app_pane_ParamLimits

0xa6f1,	// (0x0001ebca) cell_app_pane

0xa736,	// (0x0001ec0f) cell_app_pane_g1_ParamLimits

0xa736,	// (0x0001ec0f) cell_app_pane_g1

0xe27d,	// (0x00022756) cell_app_pane_g2_ParamLimits

0xe27d,	// (0x00022756) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00023bb2) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00023bb2) cell_app_pane_g

0xa75a,	// (0x0001ec33) cell_app_pane_t1_ParamLimits

0xa75a,	// (0x0001ec33) cell_app_pane_t1

0xe289,	// (0x00022762) grid_highlight_pane_ParamLimits

0xe289,	// (0x00022762) grid_highlight_pane

0xc62b,	// (0x00020b04) cell_highlight_pane_g1

0xc633,	// (0x00020b0c) cell_highlight_pane_g2

0xc63b,	// (0x00020b14) cell_highlight_pane_g3

0xc643,	// (0x00020b1c) cell_highlight_pane_g4

0xc64b,	// (0x00020b24) cell_highlight_pane_g5

0xc653,	// (0x00020b2c) cell_highlight_pane_g6

0xc65b,	// (0x00020b34) cell_highlight_pane_g7

0xc663,	// (0x00020b3c) cell_highlight_pane_g8

0xc66b,	// (0x00020b44) cell_highlight_pane_g9

0xc0f1,	// (0x000205ca) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00023b60) cell_highlight_pane_g

0xe2a4,	// (0x0002277d) bg_scroll_pane

0x87f6,	// (0x0001cccf) scroll_handle_pane

0xe300,	// (0x000227d9) scroll_bg_pane_g1

0xe315,	// (0x000227ee) scroll_bg_pane_g2

0xe32d,	// (0x00022806) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00023bb7) scroll_bg_pane_g

0xa771,	// (0x0001ec4a) scroll_handle_focus_pane_ParamLimits

0xa771,	// (0x0001ec4a) scroll_handle_focus_pane

0xe300,	// (0x000227d9) scroll_handle_pane_g1

0xe342,	// (0x0002281b) scroll_handle_pane_g2

0xe32d,	// (0x00022806) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00023bbe) scroll_handle_pane_g

0xc67c,	// (0x00020b55) bg_popup_sub_pane_cp21_ParamLimits

0xc67c,	// (0x00020b55) bg_popup_sub_pane_cp21

0xa77e,	// (0x0001ec57) popup_fep_japan_predictive_window_t1_ParamLimits

0xa77e,	// (0x0001ec57) popup_fep_japan_predictive_window_t1

0xa795,	// (0x0001ec6e) popup_fep_japan_predictive_window_t2_ParamLimits

0xa795,	// (0x0001ec6e) popup_fep_japan_predictive_window_t2

0xa7c8,	// (0x0001eca1) popup_fep_japan_predictive_window_t3_ParamLimits

0xa7c8,	// (0x0001eca1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00023bc5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00023bc5) popup_fep_japan_predictive_window_t

0xc0fb,	// (0x000205d4) bg_popup_sub_pane_cp23

0xa7ff,	// (0x0001ecd8) listscroll_japin_cand_pane

0xe356,	// (0x0002282f) popup_fep_japan_candidate_window_t1

0xe364,	// (0x0002283d) candidate_pane_ParamLimits

0xe364,	// (0x0002283d) candidate_pane

0xa807,	// (0x0001ece0) scroll_pane_cp30

0xe376,	// (0x0002284f) list_single_popup_jap_candidate_pane_ParamLimits

0xe376,	// (0x0002284f) list_single_popup_jap_candidate_pane

0xc0fb,	// (0x000205d4) list_highlight_pane_cp30

0xe38b,	// (0x00022864) list_single_popup_jap_candidate_pane_t1

0xe39a,	// (0x00022873) level_1_signal

0xe3a7,	// (0x00022880) level_2_signal

0xe3b4,	// (0x0002288d) level_3_signal

0xe3c1,	// (0x0002289a) level_4_signal

0xe3ce,	// (0x000228a7) level_5_signal

0xe3db,	// (0x000228b4) level_6_signal

0xe3e8,	// (0x000228c1) level_7_signal

0xe39a,	// (0x00022873) level_1_battery

0xe3a7,	// (0x00022880) level_2_battery

0xe3b4,	// (0x0002288d) level_3_battery

0xe3c1,	// (0x0002289a) level_4_battery

0xe3ce,	// (0x000228a7) level_5_battery

0xe3db,	// (0x000228b4) level_6_battery

0xe3e8,	// (0x000228c1) level_7_battery

0xe42c,	// (0x00022905) list_menu_pane_ParamLimits

0xe42c,	// (0x00022905) list_menu_pane

0xe442,	// (0x0002291b) scroll_pane_cp25_ParamLimits

0xe442,	// (0x0002291b) scroll_pane_cp25

0xa80f,	// (0x0001ece8) list_double2_graphic_pane_cp2_ParamLimits

0xa80f,	// (0x0001ece8) list_double2_graphic_pane_cp2

0xa80f,	// (0x0001ece8) list_double2_large_graphic_pane_cp2_ParamLimits

0xa80f,	// (0x0001ece8) list_double2_large_graphic_pane_cp2

0xa80f,	// (0x0001ece8) list_double2_pane_cp2_ParamLimits

0xa80f,	// (0x0001ece8) list_double2_pane_cp2

0xa80f,	// (0x0001ece8) list_double_graphic_pane_cp2_ParamLimits

0xa80f,	// (0x0001ece8) list_double_graphic_pane_cp2

0xa80f,	// (0x0001ece8) list_double_large_graphic_pane_cp2_ParamLimits

0xa80f,	// (0x0001ece8) list_double_large_graphic_pane_cp2

0xa80f,	// (0x0001ece8) list_double_number_pane_cp2_ParamLimits

0xa80f,	// (0x0001ece8) list_double_number_pane_cp2

0xa80f,	// (0x0001ece8) list_double_pane_cp2_ParamLimits

0xa80f,	// (0x0001ece8) list_double_pane_cp2

0xa81e,	// (0x0001ecf7) list_single_2graphic_pane_cp2_ParamLimits

0xa81e,	// (0x0001ecf7) list_single_2graphic_pane_cp2

0xa81e,	// (0x0001ecf7) list_single_graphic_heading_pane_cp2_ParamLimits

0xa81e,	// (0x0001ecf7) list_single_graphic_heading_pane_cp2

0xa81e,	// (0x0001ecf7) list_single_graphic_pane_cp2_ParamLimits

0xa81e,	// (0x0001ecf7) list_single_graphic_pane_cp2

0xa81e,	// (0x0001ecf7) list_single_heading_pane_cp2_ParamLimits

0xa81e,	// (0x0001ecf7) list_single_heading_pane_cp2

0xe46b,	// (0x00022944) list_single_large_graphic_pane_cp2_ParamLimits

0xe46b,	// (0x00022944) list_single_large_graphic_pane_cp2

0xa81e,	// (0x0001ecf7) list_single_number_heading_pane_cp2_ParamLimits

0xa81e,	// (0x0001ecf7) list_single_number_heading_pane_cp2

0xa81e,	// (0x0001ecf7) list_single_number_pane_cp2_ParamLimits

0xa81e,	// (0x0001ecf7) list_single_number_pane_cp2

0xa81e,	// (0x0001ecf7) list_single_pane_cp2_ParamLimits

0xa81e,	// (0x0001ecf7) list_single_pane_cp2

0xe4e0,	// (0x000229b9) bg_popup_sub_pane_cp22

0xe4f6,	// (0x000229cf) popup_side_volume_key_window_g1

0xe502,	// (0x000229db) popup_side_volume_key_window_t1

0x8845,	// (0x0001cd1e) volume_small_pane_cp1

0xc149,	// (0x00020622) bg_popup_sub_pane_cp24_ParamLimits

0xc149,	// (0x00020622) bg_popup_sub_pane_cp24

0xe510,	// (0x000229e9) fep_china_uni_candidate_pane_ParamLimits

0xe510,	// (0x000229e9) fep_china_uni_candidate_pane

0xe524,	// (0x000229fd) fep_china_uni_entry_pane

0xe534,	// (0x00022a0d) popup_fep_china_uni_window_g1

0xa8ab,	// (0x0001ed84) fep_china_uni_entry_pane_g1

0xa8b3,	// (0x0001ed8c) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00023bf6) fep_china_uni_entry_pane_g

0xe550,	// (0x00022a29) fep_entry_item_pane

0xe55a,	// (0x00022a33) fep_candidate_item_pane

0xa8bb,	// (0x0001ed94) fep_china_uni_candidate_pane_g1

0xe562,	// (0x00022a3b) fep_china_uni_candidate_pane_g2

0xe56a,	// (0x00022a43) fep_china_uni_candidate_pane_g3

0xa8c3,	// (0x0001ed9c) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00023bfb) fep_china_uni_candidate_pane_g

0xc0f1,	// (0x000205ca) fep_entry_item_pane_g1

0xe572,	// (0x00022a4b) fep_entry_item_pane_t1_ParamLimits

0xe572,	// (0x00022a4b) fep_entry_item_pane_t1

0xe588,	// (0x00022a61) fep_candidate_item_pane_t1_ParamLimits

0xe588,	// (0x00022a61) fep_candidate_item_pane_t1

0xe59d,	// (0x00022a76) fep_candidate_item_pane_t2_ParamLimits

0xe59d,	// (0x00022a76) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00023c04) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00023c04) fep_candidate_item_pane_t

0xc157,	// (0x00020630) list_highlight_pane_cp31_ParamLimits

0xc157,	// (0x00020630) list_highlight_pane_cp31

0xe5af,	// (0x00022a88) level_1_signal_lsc

0xe5b8,	// (0x00022a91) level_2_signal_lsc

0xe5c1,	// (0x00022a9a) level_3_signal_lsc

0xe5ca,	// (0x00022aa3) level_4_signal_lsc

0xe5d3,	// (0x00022aac) level_5_signal_lsc

0xe5dc,	// (0x00022ab5) level_6_signal_lsc

0xe5e5,	// (0x00022abe) level_7_signal_lsc

0xe5e5,	// (0x00022abe) level_1_battery_lsc

0xe5ee,	// (0x00022ac7) level_2_battery_lsc

0xe5f7,	// (0x00022ad0) level_3_battery_lsc

0xe600,	// (0x00022ad9) level_4_battery_lsc

0xe609,	// (0x00022ae2) level_5_battery_lsc

0xe612,	// (0x00022aeb) level_6_battery_lsc

0xe5af,	// (0x00022a88) level_7_battery_lsc

0xe61b,	// (0x00022af4) scroll_handle_focus_pane_g1

0xe624,	// (0x00022afd) scroll_handle_focus_pane_g2

0xe62d,	// (0x00022b06) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00023c09) scroll_handle_focus_pane_g

0xa8cb,	// (0x0001eda4) list_single_2graphic_pane_g1_ParamLimits

0xa8cb,	// (0x0001eda4) list_single_2graphic_pane_g1

0xa04b,	// (0x0001e524) list_single_2graphic_pane_g2_ParamLimits

0xa04b,	// (0x0001e524) list_single_2graphic_pane_g2

0xc4df,	// (0x000209b8) list_single_2graphic_pane_g3_ParamLimits

0xc4df,	// (0x000209b8) list_single_2graphic_pane_g3

0xa8d7,	// (0x0001edb0) list_single_2graphic_pane_g4_ParamLimits

0xa8d7,	// (0x0001edb0) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00023c10) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00023c10) list_single_2graphic_pane_g

0xa8e3,	// (0x0001edbc) list_single_2graphic_pane_t1_ParamLimits

0xa8e3,	// (0x0001edbc) list_single_2graphic_pane_t1

0xa911,	// (0x0001edea) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa911,	// (0x0001edea) list_double2_graphic_large_graphic_pane_g1

0xa0b6,	// (0x0001e58f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa0b6,	// (0x0001e58f) list_double2_graphic_large_graphic_pane_g2

0xa0c7,	// (0x0001e5a0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa0c7,	// (0x0001e5a0) list_double2_graphic_large_graphic_pane_g3

0xa923,	// (0x0001edfc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa923,	// (0x0001edfc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00023c19) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00023c19) list_double2_graphic_large_graphic_pane_g

0xa92f,	// (0x0001ee08) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa92f,	// (0x0001ee08) list_double2_graphic_large_graphic_pane_t1

0xa945,	// (0x0001ee1e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa945,	// (0x0001ee1e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00023c22) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00023c22) list_double2_graphic_large_graphic_pane_t

0xa9ca,	// (0x0001eea3) popup_fast_swap_window_ParamLimits

0xa9ca,	// (0x0001eea3) popup_fast_swap_window

0xa9e6,	// (0x0001eebf) popup_side_volume_key_window

0x0f9e,	// (0x00015477) stacon_top_pane

0x0fa8,	// (0x00015481) status_pane_ParamLimits

0x0fa8,	// (0x00015481) status_pane

0xaa00,	// (0x0001eed9) status_small_pane

0xc0fb,	// (0x000205d4) control_pane

0xc0fb,	// (0x000205d4) stacon_bottom_pane

0xc54d,	// (0x00020a26) scroll_pane_cp121

0xc544,	// (0x00020a1d) set_content_pane

0xa957,	// (0x0001ee30) bg_active_tab_pane_g1_cp1

0xa960,	// (0x0001ee39) bg_active_tab_pane_g2_cp1

0xa969,	// (0x0001ee42) bg_active_tab_pane_g3_cp1

0xa957,	// (0x0001ee30) bg_passive_tab_pane_g1_cp1

0xa960,	// (0x0001ee39) bg_passive_tab_pane_g2_cp1

0xa969,	// (0x0001ee42) bg_passive_tab_pane_g3_cp1

0xa972,	// (0x0001ee4b) bg_active_tab_pane_g1_cp2

0xa960,	// (0x0001ee39) bg_active_tab_pane_g2_cp2

0xa97b,	// (0x0001ee54) bg_active_tab_pane_g3_cp2

0xa972,	// (0x0001ee4b) bg_passive_tab_pane_g1_cp2

0xa960,	// (0x0001ee39) bg_passive_tab_pane_g2_cp2

0xa97b,	// (0x0001ee54) bg_passive_tab_pane_g3_cp2

0xa984,	// (0x0001ee5d) bg_active_tab_pane_g1_cp3

0xa960,	// (0x0001ee39) bg_active_tab_pane_g2_cp3

0xa98d,	// (0x0001ee66) bg_active_tab_pane_g3_cp3

0xa984,	// (0x0001ee5d) bg_passive_tab_pane_g1_cp3

0xa960,	// (0x0001ee39) bg_passive_tab_pane_g2_cp3

0xa98d,	// (0x0001ee66) bg_passive_tab_pane_g3_cp3

0xa996,	// (0x0001ee6f) bg_active_tab_pane_g1_cp4

0xa960,	// (0x0001ee39) bg_active_tab_pane_g2_cp4

0xa9a1,	// (0x0001ee7a) bg_active_tab_pane_g3_cp4

0xa996,	// (0x0001ee6f) bg_passive_tab_pane_g1_cp4

0xa960,	// (0x0001ee39) bg_passive_tab_pane_g2_cp4

0xa9a1,	// (0x0001ee7a) bg_passive_tab_pane_g3_cp4

0xa9ac,	// (0x0001ee85) bg_active_tab_pane_g1_cp5

0xa960,	// (0x0001ee39) bg_active_tab_pane_g2_cp5

0xa9b5,	// (0x0001ee8e) bg_active_tab_pane_g3_cp5

0xa9ac,	// (0x0001ee85) bg_passive_tab_pane_g1_cp5

0xa960,	// (0x0001ee39) bg_passive_tab_pane_g2_cp5

0xa9b5,	// (0x0001ee8e) bg_passive_tab_pane_g3_cp5

0x3796,	// (0x00017c6f) list_set_graphic_pane_ParamLimits

0x3796,	// (0x00017c6f) list_set_graphic_pane

0xc0fb,	// (0x000205d4) bg_set_opt_pane_cp4

0x0eed,	// (0x000153c6) list_set_graphic_pane_g1_ParamLimits

0x0eed,	// (0x000153c6) list_set_graphic_pane_g1

0x0ef9,	// (0x000153d2) list_set_graphic_pane_g2_ParamLimits

0x0ef9,	// (0x000153d2) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00023c27) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00023c27) list_set_graphic_pane_g

0x0009,

0xfacc,	// (0x00023fa5) volume_small_pane_cp_g

0xa9be,	// (0x0001ee97) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa9be,	// (0x0001ee97) list_double2_large_graphic_pane_g1_cp2

0x0f27,	// (0x00015400) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x0f27,	// (0x00015400) list_double2_large_graphic_pane_g2_cp2

0x0f38,	// (0x00015411) list_double2_large_graphic_pane_g3_cp2

0x0f40,	// (0x00015419) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0f40,	// (0x00015419) list_double2_large_graphic_pane_t1_cp2

0x0f56,	// (0x0001542f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0f56,	// (0x0001542f) list_double2_large_graphic_pane_t2_cp2

0xb56e,	// (0x0001fa47) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb56e,	// (0x0001fa47) list_double_large_graphic_pane_g1_cp2

0x2c26,	// (0x000170ff) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2c26,	// (0x000170ff) list_double_large_graphic_pane_g2_cp2

0x10c3,	// (0x0001559c) list_double_large_graphic_pane_g3_cp2

0x2c37,	// (0x00017110) list_double_large_graphic_pane_g4_cp

0x2c3f,	// (0x00017118) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2c3f,	// (0x00017118) list_double_large_graphic_pane_t1_cp2

0x2c56,	// (0x0001712f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2c56,	// (0x0001712f) list_double_large_graphic_pane_t2_cp2

0x0fc1,	// (0x0001549a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0fc1,	// (0x0001549a) list_double2_graphic_pane_g1_cp2

0x0fcf,	// (0x000154a8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0fcf,	// (0x000154a8) list_double2_graphic_pane_g2_cp2

0x0fe0,	// (0x000154b9) list_double2_graphic_pane_g3_cp2

0x0fea,	// (0x000154c3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0fea,	// (0x000154c3) list_double2_graphic_pane_t1_cp2

0x1000,	// (0x000154d9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1000,	// (0x000154d9) list_double2_graphic_pane_t2_cp2

0xc85b,	// (0x00020d34) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc85b,	// (0x00020d34) list_single_number_heading_pane_g1_cp2

0x1012,	// (0x000154eb) list_single_number_heading_pane_g2_cp2

0x101a,	// (0x000154f3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x101a,	// (0x000154f3) list_single_number_heading_pane_t1_cp2

0x1030,	// (0x00015509) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1030,	// (0x00015509) list_single_number_heading_pane_t2_cp2

0x1042,	// (0x0001551b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1042,	// (0x0001551b) list_single_number_heading_pane_t3_cp2

0xc85b,	// (0x00020d34) list_single_heading_pane_g1_cp2_ParamLimits

0xc85b,	// (0x00020d34) list_single_heading_pane_g1_cp2

0x1012,	// (0x000154eb) list_single_heading_pane_g2_cp2

0x101a,	// (0x000154f3) list_single_heading_pane_t1_cp2_ParamLimits

0x101a,	// (0x000154f3) list_single_heading_pane_t1_cp2

0x2a1f,	// (0x00016ef8) list_single_heading_pane_t2_cp2_ParamLimits

0x2a1f,	// (0x00016ef8) list_single_heading_pane_t2_cp2

0x2967,	// (0x00016e40) list_double_graphic_pane_g1_cp2_ParamLimits

0x2967,	// (0x00016e40) list_double_graphic_pane_g1_cp2

0x2973,	// (0x00016e4c) list_double_graphic_pane_g2_cp2_ParamLimits

0x2973,	// (0x00016e4c) list_double_graphic_pane_g2_cp2

0x2982,	// (0x00016e5b) list_double_graphic_pane_g3_cp2

0x298a,	// (0x00016e63) list_double_graphic_pane_t1_cp2_ParamLimits

0x298a,	// (0x00016e63) list_double_graphic_pane_t1_cp2

0x29a0,	// (0x00016e79) list_double_graphic_pane_t2_cp2_ParamLimits

0x29a0,	// (0x00016e79) list_double_graphic_pane_t2_cp2

0x10b7,	// (0x00015590) list_double_number_pane_g1_cp2_ParamLimits

0x10b7,	// (0x00015590) list_double_number_pane_g1_cp2

0x10c3,	// (0x0001559c) list_double_number_pane_g2_cp2

0x292b,	// (0x00016e04) list_double_number_pane_t1_cp2_ParamLimits

0x292b,	// (0x00016e04) list_double_number_pane_t1_cp2

0x293f,	// (0x00016e18) list_double_number_pane_t2_cp2_ParamLimits

0x293f,	// (0x00016e18) list_double_number_pane_t2_cp2

0x2955,	// (0x00016e2e) list_double_number_pane_t3_cp2_ParamLimits

0x2955,	// (0x00016e2e) list_double_number_pane_t3_cp2

0x2814,	// (0x00016ced) list_single_graphic_pane_g1_cp2_ParamLimits

0x2814,	// (0x00016ced) list_single_graphic_pane_g1_cp2

0x111b,	// (0x000155f4) list_single_graphic_pane_g2_cp2_ParamLimits

0x111b,	// (0x000155f4) list_single_graphic_pane_g2_cp2

0x1127,	// (0x00015600) list_single_graphic_pane_g3_cp2

0x27ea,	// (0x00016cc3) list_single_graphic_pane_t1_cp2_ParamLimits

0x27ea,	// (0x00016cc3) list_single_graphic_pane_t1_cp2

0x111b,	// (0x000155f4) list_single_number_pane_g1_cp2_ParamLimits

0x111b,	// (0x000155f4) list_single_number_pane_g1_cp2

0x1127,	// (0x00015600) list_single_number_pane_g2_cp2

0x27ea,	// (0x00016cc3) list_single_number_pane_t1_cp2_ParamLimits

0x27ea,	// (0x00016cc3) list_single_number_pane_t1_cp2

0x2800,	// (0x00016cd9) list_single_number_pane_t2_cp2_ParamLimits

0x2800,	// (0x00016cd9) list_single_number_pane_t2_cp2

0x0f27,	// (0x00015400) list_double2_pane_g1_cp2_ParamLimits

0x0f27,	// (0x00015400) list_double2_pane_g1_cp2

0x0f38,	// (0x00015411) list_double2_pane_g2_cp2

0x108f,	// (0x00015568) list_double2_pane_t1_cp2_ParamLimits

0x108f,	// (0x00015568) list_double2_pane_t1_cp2

0x10a5,	// (0x0001557e) list_double2_pane_t2_cp2_ParamLimits

0x10a5,	// (0x0001557e) list_double2_pane_t2_cp2

0x10b7,	// (0x00015590) list_double_pane_g1_cp2_ParamLimits

0x10b7,	// (0x00015590) list_double_pane_g1_cp2

0x10c3,	// (0x0001559c) list_double_pane_g2_cp2

0x10cb,	// (0x000155a4) list_double_pane_t1_cp2_ParamLimits

0x10cb,	// (0x000155a4) list_double_pane_t1_cp2

0x10e1,	// (0x000155ba) list_double_pane_t2_cp2_ParamLimits

0x10e1,	// (0x000155ba) list_double_pane_t2_cp2

0xaa0b,	// (0x0001eee4) list_single_pane_cp2_g3

0x111b,	// (0x000155f4) list_single_pane_g1_cp2_ParamLimits

0x111b,	// (0x000155f4) list_single_pane_g1_cp2

0x1127,	// (0x00015600) list_single_pane_g2_cp2

0x112f,	// (0x00015608) list_single_pane_t1_cp2_ParamLimits

0x112f,	// (0x00015608) list_single_pane_t1_cp2

0xaa13,	// (0x0001eeec) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xaa13,	// (0x0001eeec) list_single_large_graphic_pane_g1_cp2

0x1153,	// (0x0001562c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1153,	// (0x0001562c) list_single_large_graphic_pane_g2_cp2

0x115f,	// (0x00015638) list_single_large_graphic_pane_g3_cp2

0xaa1f,	// (0x0001eef8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xaa1f,	// (0x0001eef8) list_single_large_graphic_pane_g4_cp1

0x1181,	// (0x0001565a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1181,	// (0x0001565a) list_single_large_graphic_pane_t1_cp2

0x27b6,	// (0x00016c8f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x27b6,	// (0x00016c8f) list_single_graphic_heading_pane_g1_cp2

0x2783,	// (0x00016c5c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2783,	// (0x00016c5c) list_single_graphic_heading_pane_g4_cp2

0x1127,	// (0x00015600) list_single_graphic_heading_pane_g5_cp2

0x27c2,	// (0x00016c9b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x27c2,	// (0x00016c9b) list_single_graphic_heading_pane_t1_cp2

0x27d8,	// (0x00016cb1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x27d8,	// (0x00016cb1) list_single_graphic_heading_pane_t2_cp2

0x2777,	// (0x00016c50) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2777,	// (0x00016c50) list_single_2graphic_pane_g1_cp2

0x2783,	// (0x00016c5c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2783,	// (0x00016c5c) list_single_2graphic_pane_g2_cp2

0x1127,	// (0x00015600) list_single_2graphic_pane_g3_cp2

0x2794,	// (0x00016c6d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2794,	// (0x00016c6d) list_single_2graphic_pane_g4_cp2

0x27a0,	// (0x00016c79) list_single_2graphic_pane_t1_cp2_ParamLimits

0x27a0,	// (0x00016c79) list_single_2graphic_pane_t1_cp2

0xc0f1,	// (0x000205ca) list_highlight_pane_g10_cp1

0x235f,	// (0x00016838) list_highlight_pane_g1_cp1

0x2367,	// (0x00016840) list_highlight_pane_g2_cp1

0x236f,	// (0x00016848) list_highlight_pane_g3_cp1

0x2377,	// (0x00016850) list_highlight_pane_g4_cp1

0x237f,	// (0x00016858) list_highlight_pane_g5_cp1

0x2387,	// (0x00016860) list_highlight_pane_g6_cp1

0x238f,	// (0x00016868) list_highlight_pane_g7_cp1

0x2397,	// (0x00016870) list_highlight_pane_g8_cp1

0x239f,	// (0x00016878) list_highlight_pane_g9_cp1

0xb303,	// (0x0001f7dc) form_field_slider_pane_t3

0xb311,	// (0x0001f7ea) form_field_slider_pane_t4

0x22a3,	// (0x0001677c) slider_form_pane_ParamLimits

0x22a3,	// (0x0001677c) slider_form_pane

0xc0fb,	// (0x000205d4) control_abbreviations

0xc0fb,	// (0x000205d4) control_conventions

0xc0fb,	// (0x000205d4) control_definitions

0xc0fb,	// (0x000205d4) format_table_attribute

0xb545,	// (0x0001fa1e) bg_popup_preview_window_pane_g9

0xc0fb,	// (0x000205d4) format_table_data2

0xc0fb,	// (0x000205d4) format_table_data3

0xc0fb,	// (0x000205d4) format_table_data_example

0x0008,

0xc0fb,	// (0x000205d4) intro_purpose

0xf8e5,	// (0x00023dbe) bg_popup_preview_window_pane_g

0xc0fb,	// (0x000205d4) texts_category

0xc0fb,	// (0x000205d4) texts_graphics

0x1197,	// (0x00015670) text_digital

0x11a6,	// (0x0001567f) text_primary

0x11b5,	// (0x0001568e) text_primary_small

0x11c4,	// (0x0001569d) text_secondary

0x11d3,	// (0x000156ac) text_title

0xb8ed,	// (0x0001fdc6) bg_passive_tab_pane_g1_cp3_srt

0xa960,	// (0x0001ee39) bg_passive_tab_pane_g2_cp3_srt

0xb8f6,	// (0x0001fdcf) bg_passive_tab_pane_g3_cp3_srt

0xc149,	// (0x00020622) bg_active_tab_pane_cp3_srt_ParamLimits

0xc149,	// (0x00020622) bg_active_tab_pane_cp3_srt

0xb8ff,	// (0x0001fdd8) tabs_4_active_pane_srt_g1

0xb907,	// (0x0001fde0) tabs_4_active_pane_srt_t1_ParamLimits

0xb907,	// (0x0001fde0) tabs_4_active_pane_srt_t1

0xb8ed,	// (0x0001fdc6) bg_active_tab_pane_g1_cp3_copy1

0xa960,	// (0x0001ee39) bg_active_tab_pane_g2_cp3_copy1

0xb8f6,	// (0x0001fdcf) bg_active_tab_pane_g3_cp3_copy1

0xc157,	// (0x00020630) tabs_2_long_active_pane_srt_ParamLimits

0xc157,	// (0x00020630) tabs_2_long_active_pane_srt

0xc157,	// (0x00020630) tabs_2_long_passive_pane_srt_ParamLimits

0xc157,	// (0x00020630) tabs_2_long_passive_pane_srt

0x1524,	// (0x000159fd) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1524,	// (0x000159fd) bg_passive_tab_pane_cp4_srt

0xb65f,	// (0x0001fb38) bg_passive_tab_pane_g1_cp4_srt

0xa960,	// (0x0001ee39) bg_passive_tab_pane_g2_cp4_srt

0xb668,	// (0x0001fb41) bg_passive_tab_pane_g3_cp4_srt

0xc157,	// (0x00020630) bg_active_tab_pane_cp4_srt_ParamLimits

0xc157,	// (0x00020630) bg_active_tab_pane_cp4_srt

0xb671,	// (0x0001fb4a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb671,	// (0x0001fb4a) tabs_2_long_active_pane_srt_t1

0xb65f,	// (0x0001fb38) bg_active_tab_pane_g1_cp4_srt

0xa960,	// (0x0001ee39) bg_active_tab_pane_g2_cp4_srt

0xb668,	// (0x0001fb41) bg_active_tab_pane_g3_cp4_srt

0xc149,	// (0x00020622) tabs_3_long_active_pane_srt_ParamLimits

0xc149,	// (0x00020622) tabs_3_long_active_pane_srt

0xc149,	// (0x00020622) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc149,	// (0x00020622) tabs_3_long_passive_pane_cp_srt

0xc149,	// (0x00020622) tabs_3_long_passive_pane_srt_ParamLimits

0xc149,	// (0x00020622) tabs_3_long_passive_pane_srt

0x1524,	// (0x000159fd) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1524,	// (0x000159fd) bg_passive_tab_pane_cp5_srt

0xa9ac,	// (0x0001ee85) bg_passive_tab_pane_g1_cp5_srt

0xa960,	// (0x0001ee39) bg_passive_tab_pane_g2_cp5_srt

0xa9b5,	// (0x0001ee8e) bg_passive_tab_pane_g3_cp5_srt

0xc157,	// (0x00020630) bg_active_tab_pane_cp5_srt_ParamLimits

0xc157,	// (0x00020630) bg_active_tab_pane_cp5_srt

0xb649,	// (0x0001fb22) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb649,	// (0x0001fb22) tabs_3_long_active_pane_srt_t1

0xa9ac,	// (0x0001ee85) bg_active_tab_pane_g1_cp5_srt

0xa960,	// (0x0001ee39) bg_active_tab_pane_g2_cp5_srt

0xa9b5,	// (0x0001ee8e) bg_active_tab_pane_g3_cp5_srt

0x2e9f,	// (0x00017378) navi_text_pane_srt_t1

0x2e97,	// (0x00017370) navi_icon_pane_srt_g1

0x1398,	// (0x00015871) midp_editing_number_pane_srt

0x11e2,	// (0x000156bb) midp_ticker_pane_srt

0x13a0,	// (0x00015879) midp_ticker_pane_srt_g1

0x13a8,	// (0x00015881) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00023c46) midp_ticker_pane_srt_g

0x13b0,	// (0x00015889) midp_ticker_pane_srt_t1

0x2e88,	// (0x00017361) midp_editing_number_pane_t1_copy1

0x1524,	// (0x000159fd) listscroll_midp_pane

0x1524,	// (0x000159fd) midp_form_pane

0xaa98,	// (0x0001ef71) midp_info_popup_window_ParamLimits

0xaa98,	// (0x0001ef71) midp_info_popup_window

0xc67c,	// (0x00020b55) bg_popup_sub_pane_cp50_ParamLimits

0xc67c,	// (0x00020b55) bg_popup_sub_pane_cp50

0x1fa7,	// (0x00016480) listscroll_midp_info_pane_ParamLimits

0x1fa7,	// (0x00016480) listscroll_midp_info_pane

0x1f8f,	// (0x00016468) listscroll_form_midp_pane_ParamLimits

0x1f8f,	// (0x00016468) listscroll_form_midp_pane

0x1f9b,	// (0x00016474) scroll_bar_cp050

0xb1df,	// (0x0001f6b8) list_midp_pane

0xba85,	// (0x0001ff5e) signal_pane_g2_cp

0x1ea9,	// (0x00016382) listscroll_midp_info_pane_t1_ParamLimits

0x1ea9,	// (0x00016382) listscroll_midp_info_pane_t1

0xb131,	// (0x0001f60a) listscroll_midp_info_pane_t2_ParamLimits

0xb131,	// (0x0001f60a) listscroll_midp_info_pane_t2

0xb16f,	// (0x0001f648) listscroll_midp_info_pane_t3_ParamLimits

0xb16f,	// (0x0001f648) listscroll_midp_info_pane_t3

0xb1a9,	// (0x0001f682) listscroll_midp_info_pane_t4_ParamLimits

0xb1a9,	// (0x0001f682) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x00023cf9) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x00023cf9) listscroll_midp_info_pane_t

0xc6f2,	// (0x00020bcb) scroll_pane_cp21

0x1e49,	// (0x00016322) form_midp_field_choice_group_pane

0xb0f4,	// (0x0001f5cd) form_midp_field_text_pane

0x1e8f,	// (0x00016368) form_midp_field_time_pane

0x1e97,	// (0x00016370) form_midp_gauge_slider_pane

0x1ea0,	// (0x00016379) form_midp_gauge_wait_pane

0xc0fb,	// (0x000205d4) form_midp_image_pane

0xb0da,	// (0x0001f5b3) list_single_midp_pane_ParamLimits

0xb0da,	// (0x0001f5b3) list_single_midp_pane

0xb0b8,	// (0x0001f591) form_midp_field_text_pane_t1

0x1b87,	// (0x00016060) input_focus_pane_cp050

0x1e06,	// (0x000162df) list_midp_form_text_pane

0x1d9b,	// (0x00016274) form_midp_field_choice_group_pane_t1

0x1da9,	// (0x00016282) input_focus_pane_cp051

0x1dbd,	// (0x00016296) list_midp_choice_pane

0xc0fb,	// (0x000205d4) status_idle_pane

0x1d7f,	// (0x00016258) form_midp_field_time_pane_t1

0xc0f1,	// (0x000205ca) wait_anim_pane_g2_copy1

0x1d8d,	// (0x00016266) form_midp_field_time_pane_t2

0x0001,

0x1300,	// (0x000157d9) aid_navinavi_width_2_pane

0xf81b,	// (0x00023cf4) form_midp_field_time_pane_t

0xc0fb,	// (0x000205d4) input_focus_pane_cp052

0xc0fb,	// (0x000205d4) bg_input_focus_pane_cp040

0x1d3f,	// (0x00016218) form_midp_gauge_slider_pane_t1

0x1d4d,	// (0x00016226) form_midp_gauge_slider_pane_t2

0xb09c,	// (0x0001f575) form_midp_gauge_slider_pane_t3

0xb0aa,	// (0x0001f583) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x00023ceb) form_midp_gauge_slider_pane_t

0x1d77,	// (0x00016250) form_midp_slider_pane

0xc157,	// (0x00020630) bg_input_focus_pane_cp041_ParamLimits

0xc157,	// (0x00020630) bg_input_focus_pane_cp041

0x1d0c,	// (0x000161e5) form_midp_gauge_wait_pane_t1_ParamLimits

0x1d0c,	// (0x000161e5) form_midp_gauge_wait_pane_t1

0x1d1e,	// (0x000161f7) form_midp_gauge_wait_pane_t2_ParamLimits

0x1d1e,	// (0x000161f7) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x00023ce6) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x00023ce6) form_midp_gauge_wait_pane_t

0x1d30,	// (0x00016209) form_midp_wait_pane_ParamLimits

0x1d30,	// (0x00016209) form_midp_wait_pane

0xb066,	// (0x0001f53f) form_midp_image_pane_g1

0xb06f,	// (0x0001f548) form_midp_image_pane_t1

0xb07e,	// (0x0001f557) form_midp_image_pane_t2

0xb08d,	// (0x0001f566) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x00023cdf) form_midp_image_pane_t

0x1cbe,	// (0x00016197) list_single_midp_pane_g1

0x1cc7,	// (0x000161a0) list_single_midp_pane_t1

0xb050,	// (0x0001f529) list_midp_form_item_pane_ParamLimits

0xb050,	// (0x0001f529) list_midp_form_item_pane

0x12a8,	// (0x00015781) list_midp_form_item_pane_t1

0x12b7,	// (0x00015790) midp_ticker_pane_g1

0x12c3,	// (0x0001579c) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00023c2c) midp_ticker_pane_g

0x12cf,	// (0x000157a8) midp_ticker_pane_t1

0x310c,	// (0x000175e5) midp_editing_number_pane_t1

0x30ea,	// (0x000175c3) midp_editing_number_pane

0x30f9,	// (0x000175d2) midp_ticker_pane

0x2e50,	// (0x00017329) ai_message_heading_pane

0xc0fb,	// (0x000205d4) bg_popup_window_pane_cp14

0x2e58,	// (0x00017331) listscroll_ai_message_pane

0x2dda,	// (0x000172b3) ai_message_heading_pane_g1_ParamLimits

0x2dda,	// (0x000172b3) ai_message_heading_pane_g1

0xb611,	// (0x0001faea) ai_message_heading_pane_g2_ParamLimits

0xb611,	// (0x0001faea) ai_message_heading_pane_g2

0x2df2,	// (0x000172cb) ai_message_heading_pane_g3_ParamLimits

0x2df2,	// (0x000172cb) ai_message_heading_pane_g3

0x2dfe,	// (0x000172d7) ai_message_heading_pane_g4_ParamLimits

0x2dfe,	// (0x000172d7) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x00023e20) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x00023e20) ai_message_heading_pane_g

0xb61d,	// (0x0001faf6) ai_message_heading_pane_t1_ParamLimits

0xb61d,	// (0x0001faf6) ai_message_heading_pane_t1

0xb637,	// (0x0001fb10) ai_message_heading_pane_t2_ParamLimits

0xb637,	// (0x0001fb10) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x00023e29) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x00023e29) ai_message_heading_pane_t

0x2e36,	// (0x0001730f) bg_popup_heading_pane_cp1_ParamLimits

0x2e36,	// (0x0001730f) bg_popup_heading_pane_cp1

0x2dc8,	// (0x000172a1) list_ai_message_pane_ParamLimits

0x2dc8,	// (0x000172a1) list_ai_message_pane

0xc6f2,	// (0x00020bcb) scroll_pane_cp10

0x2d64,	// (0x0001723d) list_ai_message_pane_g1

0x2d6c,	// (0x00017245) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x00023dfd) list_ai_message_pane_g

0x2d74,	// (0x0001724d) list_ai_message_pane_t1_ParamLimits

0x2d74,	// (0x0001724d) list_ai_message_pane_t1

0x2d89,	// (0x00017262) list_ai_message_pane_t2_ParamLimits

0x2d89,	// (0x00017262) list_ai_message_pane_t2

0x2d9e,	// (0x00017277) list_ai_message_pane_t3_ParamLimits

0x2d9e,	// (0x00017277) list_ai_message_pane_t3

0x2db3,	// (0x0001728c) list_ai_message_pane_t4_ParamLimits

0x2db3,	// (0x0001728c) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x00023e02) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x00023e02) list_ai_message_pane_t

0xb5ed,	// (0x0001fac6) cell_ai_soft_ind_pane_ParamLimits

0xb5ed,	// (0x0001fac6) cell_ai_soft_ind_pane

0x12e1,	// (0x000157ba) cell_ai_soft_ind_pane_g1_ParamLimits

0x12e1,	// (0x000157ba) cell_ai_soft_ind_pane_g1

0xc0fb,	// (0x000205d4) grid_highlight_cp1

0x12ee,	// (0x000157c7) text_secondary_cp56_ParamLimits

0x12ee,	// (0x000157c7) text_secondary_cp56

0x2d24,	// (0x000171fd) example_general_pane_ParamLimits

0x2d24,	// (0x000171fd) example_general_pane

0x2d30,	// (0x00017209) example_parent_pane_g1_ParamLimits

0x2d30,	// (0x00017209) example_parent_pane_g1

0x2d3c,	// (0x00017215) example_parent_pane_t1_ParamLimits

0x2d3c,	// (0x00017215) example_parent_pane_t1

0x8e1a,	// (0x0001d2f3) popup_preview_text_window_ParamLimits

0x8e1a,	// (0x0001d2f3) popup_preview_text_window

0x1113,	// (0x000155ec) list_single_pane_cp2_g4

0xc343,	// (0x0002081c) bg_popup_preview_window_pane_ParamLimits

0xc343,	// (0x0002081c) bg_popup_preview_window_pane

0xb54d,	// (0x0001fa26) popup_preview_text_window_t1_ParamLimits

0xb54d,	// (0x0001fa26) popup_preview_text_window_t1

0x2a8f,	// (0x00016f68) popup_preview_text_window_t2_ParamLimits

0x2a8f,	// (0x00016f68) popup_preview_text_window_t2

0x2ad8,	// (0x00016fb1) popup_preview_text_window_t3_ParamLimits

0x2ad8,	// (0x00016fb1) popup_preview_text_window_t3

0x2b1d,	// (0x00016ff6) popup_preview_text_window_t4_ParamLimits

0x2b1d,	// (0x00016ff6) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x00023dd1) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x00023dd1) popup_preview_text_window_t

0x2b9b,	// (0x00017074) scroll_pane_cp11

0x1a5b,	// (0x00015f34) bg_popup_preview_window_pane_g1

0xb50d,	// (0x0001f9e6) bg_popup_preview_window_pane_g2

0xb515,	// (0x0001f9ee) bg_popup_preview_window_pane_g3

0xb51d,	// (0x0001f9f6) bg_popup_preview_window_pane_g4

0xb525,	// (0x0001f9fe) bg_popup_preview_window_pane_g5

0xb52d,	// (0x0001fa06) bg_popup_preview_window_pane_g6

0xb535,	// (0x0001fa0e) bg_popup_preview_window_pane_g7

0xb53d,	// (0x0001fa16) bg_popup_preview_window_pane_g8

0xdf24,	// (0x000223fd) aid_popup_width_pane

0x8d96,	// (0x0001d26f) popup_midp_note_alarm_window_ParamLimits

0x8d96,	// (0x0001d26f) popup_midp_note_alarm_window

0xc581,	// (0x00020a5a) data_form_pane_ParamLimits

0xa46d,	// (0x0001e946) form_field_data_pane_g1

0xa477,	// (0x0001e950) form_field_data_pane_t1_ParamLimits

0xc58d,	// (0x00020a66) input_focus_pane_ParamLimits

0xa491,	// (0x0001e96a) data_form_wide_pane_ParamLimits

0xc59b,	// (0x00020a74) form_field_data_wide_pane_g1

0xa4a2,	// (0x0001e97b) form_field_data_wide_pane_t1_ParamLimits

0xc417,	// (0x000208f0) input_focus_pane_cp6_ParamLimits

0xa614,	// (0x0001eaed) input_popup_find_pane_g1_ParamLimits

0xa614,	// (0x0001eaed) input_popup_find_pane_g1

0xe1d7,	// (0x000226b0) aid_navi_side_left_pane

0xe1ec,	// (0x000226c5) aid_navi_side_right_pane

0x245a,	// (0x00016933) bg_popup_window_pane_cp30_ParamLimits

0x245a,	// (0x00016933) bg_popup_window_pane_cp30

0x24d4,	// (0x000169ad) popup_midp_note_alarm_window_g1_ParamLimits

0x24d4,	// (0x000169ad) popup_midp_note_alarm_window_g1

0x2504,	// (0x000169dd) popup_midp_note_alarm_window_t1_ParamLimits

0x2504,	// (0x000169dd) popup_midp_note_alarm_window_t1

0xb356,	// (0x0001f82f) popup_midp_note_alarm_window_t2_ParamLimits

0xb356,	// (0x0001f82f) popup_midp_note_alarm_window_t2

0xb404,	// (0x0001f8dd) popup_midp_note_alarm_window_t3_ParamLimits

0xb404,	// (0x0001f8dd) popup_midp_note_alarm_window_t3

0xb42c,	// (0x0001f905) popup_midp_note_alarm_window_t4_ParamLimits

0xb42c,	// (0x0001f905) popup_midp_note_alarm_window_t4

0x269b,	// (0x00016b74) popup_midp_note_alarm_window_t5_ParamLimits

0x269b,	// (0x00016b74) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x00023d6e) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x00023d6e) popup_midp_note_alarm_window_t

0x2747,	// (0x00016c20) wait_bar_pane_cp1_ParamLimits

0x2747,	// (0x00016c20) wait_bar_pane_cp1

0xc0fb,	// (0x000205d4) wait_anim_pane_copy1

0xc0fb,	// (0x000205d4) wait_border_pane_copy1

0x2150,	// (0x00016629) wait_border_pane_g1_copy1

0xc5c7,	// (0x00020aa0) form_field_popup_pane_g1

0xa4bc,	// (0x0001e995) form_field_popup_pane_t1_ParamLimits

0xc58d,	// (0x00020a66) input_focus_pane_cp7_ParamLimits

0xc5cf,	// (0x00020aa8) list_form_pane_ParamLimits

0xc5db,	// (0x00020ab4) form_field_popup_wide_pane_g1

0xc5e3,	// (0x00020abc) form_field_popup_wide_pane_t1_ParamLimits

0xc58d,	// (0x00020a66) input_focus_pane_cp8_ParamLimits

0xc5f8,	// (0x00020ad1) list_form_wide_pane_ParamLimits

0x3336,	// (0x0001780f) aid_size_cell_graphic_pane

0xa53b,	// (0x0001ea14) data_form_pane_t1_ParamLimits

0xb80f,	// (0x0001fce8) data_form_wide_pane_t1_ParamLimits

0xacbf,	// (0x0001f198) bg_status_flat_pane

0x9a9e,	// (0x0001df77) title_pane_t1_ParamLimits

0xc111,	// (0x000205ea) title_pane_t2_ParamLimits

0xc137,	// (0x00020610) title_pane_t3_ParamLimits

0xf557,	// (0x00023a30) title_pane_t_ParamLimits

0xe39a,	// (0x00022873) level_1_signal_ParamLimits

0xe3a7,	// (0x00022880) level_2_signal_ParamLimits

0xe3b4,	// (0x0002288d) level_3_signal_ParamLimits

0xe3c1,	// (0x0002289a) level_4_signal_ParamLimits

0xe3ce,	// (0x000228a7) level_5_signal_ParamLimits

0xe3db,	// (0x000228b4) level_6_signal_ParamLimits

0xe3e8,	// (0x000228c1) level_7_signal_ParamLimits

0xe39a,	// (0x00022873) level_1_battery_ParamLimits

0xe3a7,	// (0x00022880) level_2_battery_ParamLimits

0xe3b4,	// (0x0002288d) level_3_battery_ParamLimits

0xe3c1,	// (0x0002289a) level_4_battery_ParamLimits

0xe3ce,	// (0x000228a7) level_5_battery_ParamLimits

0xe3db,	// (0x000228b4) level_6_battery_ParamLimits

0xe3e8,	// (0x000228c1) level_7_battery_ParamLimits

0x235f,	// (0x00016838) bg_status_flat_pane_g1

0x2367,	// (0x00016840) bg_status_flat_pane_g2

0x236f,	// (0x00016848) bg_status_flat_pane_g3

0x2377,	// (0x00016850) bg_status_flat_pane_g4

0x237f,	// (0x00016858) bg_status_flat_pane_g5

0x2387,	// (0x00016860) bg_status_flat_pane_g6

0x238f,	// (0x00016868) bg_status_flat_pane_g7

0x9b32,	// (0x0001e00b) tabs_3_active_pane_t1_ParamLimits

0x9b32,	// (0x0001e00b) tabs_3_passive_pane_t1_ParamLimits

0x9b4c,	// (0x0001e025) tabs_4_active_pane_t1_ParamLimits

0x9b4c,	// (0x0001e025) tabs_4_1_passive_pane_t1_ParamLimits

0xa653,	// (0x0001eb2c) tabs_2_active_pane_t1_ParamLimits

0xa653,	// (0x0001eb2c) tabs_2_passive_pane_t1_ParamLimits

0xc157,	// (0x00020630) bg_active_tab_pane_cp4_ParamLimits

0xa665,	// (0x0001eb3e) tabs_2_long_active_pane_t1_ParamLimits

0x1524,	// (0x000159fd) bg_passive_tab_pane_cp4_ParamLimits

0xe971,	// (0x00022e4a) list_single_midp_graphic_pane_t1_ParamLimits

0xc157,	// (0x00020630) bg_active_tab_pane_cp5_ParamLimits

0xa678,	// (0x0001eb51) tabs_3_long_active_pane_t1_ParamLimits

0x1524,	// (0x000159fd) bg_passive_tab_pane_cp5_ParamLimits

0xe971,	// (0x00022e4a) list_single_midp_graphic_pane_t1

0xacbf,	// (0x0001f198) bg_status_flat_pane_ParamLimits

0x16cc,	// (0x00015ba5) indicator_pane_cp2_ParamLimits

0x16cc,	// (0x00015ba5) indicator_pane_cp2

0xae3d,	// (0x0001f316) navi_pane_srt_ParamLimits

0xae3d,	// (0x0001f316) navi_pane_srt

0x181b,	// (0x00015cf4) popup_clock_digital_analogue_window_cp1

0xc1b5,	// (0x0002068e) indicator_pane_t1

0x11e2,	// (0x000156bb) copy_highlight_pane

0x11e2,	// (0x000156bb) cursor_graphics_pane

0x11e2,	// (0x000156bb) graphic_within_text_pane

0x11e2,	// (0x000156bb) link_highlight_pane

0x2b5e,	// (0x00017037) popup_preview_text_window_t5_ParamLimits

0x2b5e,	// (0x00017037) popup_preview_text_window_t5

0x1308,	// (0x000157e1) cursor_digital_pane

0x1308,	// (0x000157e1) cursor_primary_pane

0x1319,	// (0x000157f2) cursor_primary_small_pane

0x1321,	// (0x000157fa) cursor_secondary_pane

0x1329,	// (0x00015802) cursor_title_pane

0x1308,	// (0x000157e1) link_highlight_digital_pane

0x1310,	// (0x000157e9) link_highlight_primary_pane

0x1319,	// (0x000157f2) link_highlight_primary_small_pane

0x1321,	// (0x000157fa) link_highlight_secondary_pane

0x1329,	// (0x00015802) link_highlight_title_pane

0x1308,	// (0x000157e1) copy_highlight_digital_pane

0x1308,	// (0x000157e1) copy_highlight_primary_pane

0x1319,	// (0x000157f2) copy_highlight_primary_small_pane

0x1321,	// (0x000157fa) copy_highlight_secondary_pane

0x1329,	// (0x00015802) copy_highlight_title_pane

0x1321,	// (0x000157fa) graphic_text_digital_pane

0x23fd,	// (0x000168d6) graphic_text_primary_pane

0x2406,	// (0x000168df) graphic_text_primary_small_pane

0x1319,	// (0x000157f2) graphic_text_secondary_pane

0x1308,	// (0x000157e1) graphic_text_title_pane

0xaae9,	// (0x0001efc2) cursor_primary_pane_g1

0x23ef,	// (0x000168c8) cursor_text_primary_t1

0xb34c,	// (0x0001f825) cursor_primary_small_pane_g1

0x23e1,	// (0x000168ba) cursor_text_primary_small_t1

0xb342,	// (0x0001f81b) cursor_primary_small_pane_g1_copy1

0x23c9,	// (0x000168a2) cursor_text_primary_small_t1_copy1

0x23a7,	// (0x00016880) cursor_text_title_t1

0xb338,	// (0x0001f811) cursor_title_pane_g1

0xaae9,	// (0x0001efc2) cursor_digital_pane_g1

0x133b,	// (0x00015814) cursor_text_digital_t1

0x1349,	// (0x00015822) link_highlight_primary_pane_g1

0x2350,	// (0x00016829) link_highlight_primary_pane_t1

0x1349,	// (0x00015822) link_highlight_primary_small_pane_g1

0x1351,	// (0x0001582a) link_highlight_primary_small_pane_t1

0x1349,	// (0x00015822) link_highlight_secondary_pane_g1

0x1360,	// (0x00015839) link_highlight_secondary_pane_t1

0x22b5,	// (0x0001678e) link_highlight_title_pane_g1

0x22cc,	// (0x000167a5) link_highlight_title_pane_t1

0x22b5,	// (0x0001678e) link_highlight_digital_pane_g1

0x22bd,	// (0x00016796) link_highlight_digital_pane_t1

0x216f,	// (0x00016648) copy_highlight_primary_pane_g1

0x2195,	// (0x0001666e) copy_highlight_primary_pane_t1

0x216f,	// (0x00016648) copy_highlight_primary_small_pane_g1

0x2186,	// (0x0001665f) copy_highlight_primary_small_pane_t1

0x136f,	// (0x00015848) copy_highlight_secondary_pane_g1

0x1377,	// (0x00015850) copy_highlight_secondary_pane_t1

0x216f,	// (0x00016648) copy_highlight_title_pane_g1

0x2177,	// (0x00016650) copy_highlight_title_pane_t1

0x216f,	// (0x00016648) copy_highlight_digital_pane_g1

0x3500,	// (0x000179d9) copy_highlight_digital_pane_t1

0x3454,	// (0x0001792d) graphic_text_primary_pane_g1

0x34e4,	// (0x000179bd) graphic_text_primary_pane_t1

0x34f2,	// (0x000179cb) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x00023e9d) graphic_text_primary_pane_t

0x34c0,	// (0x00017999) graphic_text_primary_small_pane_g1

0x34c8,	// (0x000179a1) graphic_text_primary_small_pane_t1

0x34d6,	// (0x000179af) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x00023e98) graphic_text_primary_small_pane_t

0x349c,	// (0x00017975) graphic_text_secondary_pane_g1

0x34a4,	// (0x0001797d) graphic_text_secondary_pane_t1

0x34b2,	// (0x0001798b) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x00023e93) graphic_text_secondary_pane_t

0x3478,	// (0x00017951) graphic_text_title_pane_g1

0x3480,	// (0x00017959) graphic_text_title_pane_t1

0x348e,	// (0x00017967) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x00023e8e) graphic_text_title_pane_t

0x3454,	// (0x0001792d) graphic_text_digital_pane_g1

0x345c,	// (0x00017935) graphic_text_digital_pane_t1

0x346a,	// (0x00017943) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x00023e89) graphic_text_digital_pane_t

0xc157,	// (0x00020630) navi_icon_pane_srt_ParamLimits

0xc157,	// (0x00020630) navi_icon_pane_srt

0xc0fb,	// (0x000205d4) navi_midp_pane_srt

0xc0fb,	// (0x000205d4) navi_navi_pane_srt

0xc157,	// (0x00020630) navi_text_pane_srt_ParamLimits

0xc157,	// (0x00020630) navi_text_pane_srt

0x341f,	// (0x000178f8) navi_navi_icon_text_pane_srt

0x3427,	// (0x00017900) navi_navi_pane_srt_g1_ParamLimits

0x3427,	// (0x00017900) navi_navi_pane_srt_g1

0x3439,	// (0x00017912) navi_navi_pane_srt_g2_ParamLimits

0x3439,	// (0x00017912) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x00023e84) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x00023e84) navi_navi_pane_srt_g

0x344b,	// (0x00017924) navi_navi_tabs_pane_srt

0x341f,	// (0x000178f8) navi_navi_text_pane_srt

0x341f,	// (0x000178f8) navi_navi_volume_pane_srt

0x3410,	// (0x000178e9) navi_navi_text_pane_srt_t1

0xeb63,	// (0x0002303c) navi_navi_volume_pane_srt_g1

0xeb6b,	// (0x00023044) volume_small_pane_srt_ParamLimits

0xeb6b,	// (0x00023044) volume_small_pane_srt

0xe777,	// (0x00022c50) volume_small_pane_srt_g1_ParamLimits

0xe777,	// (0x00022c50) volume_small_pane_srt_g1

0xe787,	// (0x00022c60) volume_small_pane_srt_g2_ParamLimits

0xe787,	// (0x00022c60) volume_small_pane_srt_g2

0xe798,	// (0x00022c71) volume_small_pane_srt_g3_ParamLimits

0xe798,	// (0x00022c71) volume_small_pane_srt_g3

0xe7a9,	// (0x00022c82) volume_small_pane_srt_g4_ParamLimits

0xe7a9,	// (0x00022c82) volume_small_pane_srt_g4

0xe7ba,	// (0x00022c93) volume_small_pane_srt_g5_ParamLimits

0xe7ba,	// (0x00022c93) volume_small_pane_srt_g5

0xe7cb,	// (0x00022ca4) volume_small_pane_srt_g6_ParamLimits

0xe7cb,	// (0x00022ca4) volume_small_pane_srt_g6

0xe7dc,	// (0x00022cb5) volume_small_pane_srt_g7_ParamLimits

0xe7dc,	// (0x00022cb5) volume_small_pane_srt_g7

0xe7ed,	// (0x00022cc6) volume_small_pane_srt_g8_ParamLimits

0xe7ed,	// (0x00022cc6) volume_small_pane_srt_g8

0xe7fe,	// (0x00022cd7) volume_small_pane_srt_g9_ParamLimits

0xe7fe,	// (0x00022cd7) volume_small_pane_srt_g9

0xe80f,	// (0x00022ce8) volume_small_pane_srt_g10_ParamLimits

0xe80f,	// (0x00022ce8) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00023c31) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00023c31) volume_small_pane_srt_g

0x9d7c,	// (0x0001e255) query_popup_data_pane_cp2

0x33f6,	// (0x000178cf) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x33f6,	// (0x000178cf) navi_navi_icon_text_pane_srt_t1

0x23fd,	// (0x000168d6) navi_tabs_2_long_pane_srt

0x23fd,	// (0x000168d6) navi_tabs_2_pane_srt

0x23fd,	// (0x000168d6) navi_tabs_3_long_pane_srt

0x23fd,	// (0x000168d6) navi_tabs_3_pane_srt

0x23fd,	// (0x000168d6) navi_tabs_4_pane_srt

0x9318,	// (0x0001d7f1) tabs_2_active_pane_srt_ParamLimits

0x9318,	// (0x0001d7f1) tabs_2_active_pane_srt

0x9328,	// (0x0001d801) tabs_2_passive_pane_srt_ParamLimits

0x9328,	// (0x0001d801) tabs_2_passive_pane_srt

0x1b87,	// (0x00016060) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1b87,	// (0x00016060) bg_passive_tab_pane_cp1_srt

0xb994,	// (0x0001fe6d) bg_passive_tab_pane_g1_cp1_srt

0xa960,	// (0x0001ee39) bg_passive_tab_pane_g2_cp1_srt

0xb99d,	// (0x0001fe76) bg_passive_tab_pane_g3_cp1_srt

0xc149,	// (0x00020622) bg_active_tab_pane_cp1_srt_ParamLimits

0xc149,	// (0x00020622) bg_active_tab_pane_cp1_srt

0xb9a6,	// (0x0001fe7f) tabs_2_active_pane_srt_g1

0xb9ae,	// (0x0001fe87) tabs_2_active_pane_srt_t1_ParamLimits

0xb9ae,	// (0x0001fe87) tabs_2_active_pane_srt_t1

0xb994,	// (0x0001fe6d) bg_active_tab_pane_g1_cp1_srt

0xa960,	// (0x0001ee39) bg_active_tab_pane_g2_cp1_srt

0xb99d,	// (0x0001fe76) bg_active_tab_pane_g3_cp1_srt

0x92e5,	// (0x0001d7be) tabs_3_active_pane_srt_ParamLimits

0x92e5,	// (0x0001d7be) tabs_3_active_pane_srt

0x92f6,	// (0x0001d7cf) tabs_3_passive_pane_cp_srt_ParamLimits

0x92f6,	// (0x0001d7cf) tabs_3_passive_pane_cp_srt

0x9307,	// (0x0001d7e0) tabs_3_passive_pane_srt_ParamLimits

0x9307,	// (0x0001d7e0) tabs_3_passive_pane_srt

0x1b87,	// (0x00016060) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1b87,	// (0x00016060) bg_passive_tab_pane_cp2_srt

0xaaf3,	// (0x0001efcc) bg_passive_tab_pane_g1_cp2_srt

0xa960,	// (0x0001ee39) bg_passive_tab_pane_g2_cp2_srt

0xaafc,	// (0x0001efd5) bg_passive_tab_pane_g3_cp2_srt

0xc149,	// (0x00020622) bg_active_tab_pane_cp2_srt_ParamLimits

0xc149,	// (0x00020622) bg_active_tab_pane_cp2_srt

0xb976,	// (0x0001fe4f) tabs_3_active_pane_srt_g1

0xb97e,	// (0x0001fe57) tabs_3_active_pane_srt_t1_ParamLimits

0xb97e,	// (0x0001fe57) tabs_3_active_pane_srt_t1

0xaaf3,	// (0x0001efcc) bg_active_tab_pane_g1_cp2_srt

0xa960,	// (0x0001ee39) bg_active_tab_pane_g2_cp2_srt

0xaafc,	// (0x0001efd5) bg_active_tab_pane_g3_cp2_srt

0xeb1b,	// (0x00022ff4) tabs_4_active_pane_srt_ParamLimits

0xeb1b,	// (0x00022ff4) tabs_4_active_pane_srt

0xeb2d,	// (0x00023006) tabs_4_passive_pane_cp2_srt_ParamLimits

0xeb2d,	// (0x00023006) tabs_4_passive_pane_cp2_srt

0xe82f,	// (0x00022d08) aid_size_cell_toolbar

0x2f30,	// (0x00017409) main_idle_act_pane_ParamLimits

0x8bd8,	// (0x0001d0b1) popup_large_graphic_colour_window_ParamLimits

0x90cc,	// (0x0001d5a5) popup_toolbar_window_ParamLimits

0x90cc,	// (0x0001d5a5) popup_toolbar_window

0x3137,	// (0x00017610) list_single_graphic_2heading_pane_ParamLimits

0x3137,	// (0x00017610) list_single_graphic_2heading_pane

0xe263,	// (0x0002273c) aid_size_cell_apps_grid_lsc_pane

0xe275,	// (0x0002274e) aid_size_cell_apps_grid_prt_pane

0x1524,	// (0x000159fd) bg_wml_button_pane_cp1_ParamLimits

0x1524,	// (0x000159fd) bg_wml_button_pane_cp1

0xb0b8,	// (0x0001f591) form_midp_field_text_pane_t1_ParamLimits

0x1b87,	// (0x00016060) input_focus_pane_cp050_ParamLimits

0x1e06,	// (0x000162df) list_midp_form_text_pane_ParamLimits

0x1da9,	// (0x00016282) input_focus_pane_cp051_ParamLimits

0x1dbd,	// (0x00016296) list_midp_choice_pane_ParamLimits

0xb01c,	// (0x0001f4f5) list_single_2graphic_pane_cp3_ParamLimits

0xb01c,	// (0x0001f4f5) list_single_2graphic_pane_cp3

0xb030,	// (0x0001f509) list_single_midp_graphic_pane_ParamLimits

0xb030,	// (0x0001f509) list_single_midp_graphic_pane

0xe8a3,	// (0x00022d7c) list_single_graphic_2heading_pane_g1_ParamLimits

0xe8a3,	// (0x00022d7c) list_single_graphic_2heading_pane_g1

0xe8af,	// (0x00022d88) list_single_graphic_2heading_pane_g4_ParamLimits

0xe8af,	// (0x00022d88) list_single_graphic_2heading_pane_g4

0xe8bb,	// (0x00022d94) list_single_graphic_2heading_pane_g5_ParamLimits

0xe8bb,	// (0x00022d94) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00023c84) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00023c84) list_single_graphic_2heading_pane_g

0xe8c7,	// (0x00022da0) list_single_graphic_2heading_pane_t1_ParamLimits

0xe8c7,	// (0x00022da0) list_single_graphic_2heading_pane_t1

0xe8db,	// (0x00022db4) list_single_graphic_2heading_pane_t2_ParamLimits

0xe8db,	// (0x00022db4) list_single_graphic_2heading_pane_t2

0xe8f5,	// (0x00022dce) list_single_graphic_2heading_pane_t3_ParamLimits

0xe8f5,	// (0x00022dce) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x00023c8b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x00023c8b) list_single_graphic_2heading_pane_t

0x1977,	// (0x00015e50) bg_popup_sub_pane_cp2

0x19a1,	// (0x00015e7a) grid_toobar_pane

0xe90d,	// (0x00022de6) cell_toolbar_pane_ParamLimits

0xe90d,	// (0x00022de6) cell_toolbar_pane

0x19ff,	// (0x00015ed8) cell_toolbar_pane_g1_ParamLimits

0x19ff,	// (0x00015ed8) cell_toolbar_pane_g1

0xafdc,	// (0x0001f4b5) cell_toolbar_pane_g2_ParamLimits

0xafdc,	// (0x0001f4b5) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x00023c99) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x00023c99) cell_toolbar_pane_g

0x1a35,	// (0x00015f0e) grid_highlight_pane_cp2_ParamLimits

0x1a35,	// (0x00015f0e) grid_highlight_pane_cp2

0x1a4f,	// (0x00015f28) toolbar_button_pane

0x1a5b,	// (0x00015f34) toolbar_button_pane_g1

0x1a63,	// (0x00015f3c) toolbar_button_pane_g2

0x1a6b,	// (0x00015f44) toolbar_button_pane_g3

0x1a73,	// (0x00015f4c) toolbar_button_pane_g4

0x1a7b,	// (0x00015f54) toolbar_button_pane_g5

0x1a83,	// (0x00015f5c) toolbar_button_pane_g6

0x1a8b,	// (0x00015f64) toolbar_button_pane_g7

0x1a93,	// (0x00015f6c) toolbar_button_pane_g8

0x1a9b,	// (0x00015f74) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x00023c9e) toolbar_button_pane_g

0xe945,	// (0x00022e1e) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe945,	// (0x00022e1e) list_single_2graphic_pane_g1_cp3

0x9179,	// (0x0001d652) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9179,	// (0x0001d652) list_single_2graphic_pane_g2_cp3

0xe951,	// (0x00022e2a) list_single_2graphic_pane_g3_cp3

0xe959,	// (0x00022e32) list_single_2graphic_pane_g4_cp3_ParamLimits

0xe959,	// (0x00022e32) list_single_2graphic_pane_g4_cp3

0x918a,	// (0x0001d663) list_single_2graphic_pane_t1_cp3_ParamLimits

0x918a,	// (0x0001d663) list_single_2graphic_pane_t1_cp3

0xe965,	// (0x00022e3e) list_single_midp_graphic_pane_g2_ParamLimits

0xe965,	// (0x00022e3e) list_single_midp_graphic_pane_g2

0xe837,	// (0x00022d10) aid_zoom_text_primary

0xe83f,	// (0x00022d18) aid_zoom_text_secondary

0xab53,	// (0x0001f02c) status_small_pane_g7_ParamLimits

0xab53,	// (0x0001f02c) status_small_pane_g7

0xab76,	// (0x0001f04f) status_small_pane_t1_ParamLimits

0x9a7a,	// (0x0001df53) title_pane_g2

0x0003,

0xf54e,	// (0x00023a27) title_pane_g

0x9dd6,	// (0x0001e2af) aid_size_cell_colour_1_pane_ParamLimits

0x9dd6,	// (0x0001e2af) aid_size_cell_colour_1_pane

0x9dea,	// (0x0001e2c3) aid_size_cell_colour_2_pane_ParamLimits

0x9dea,	// (0x0001e2c3) aid_size_cell_colour_2_pane

0x9dfe,	// (0x0001e2d7) aid_size_cell_colour_3_pane_ParamLimits

0x9dfe,	// (0x0001e2d7) aid_size_cell_colour_3_pane

0x9e12,	// (0x0001e2eb) aid_size_cell_colour_4_pane_ParamLimits

0x9e12,	// (0x0001e2eb) aid_size_cell_colour_4_pane

0xe0ec,	// (0x000225c5) title_pane_stacon_g1_ParamLimits

0xe0ec,	// (0x000225c5) title_pane_stacon_g1

0x21ec,	// (0x000166c5) popup_note_wait_window_g3_ParamLimits

0x21ec,	// (0x000166c5) popup_note_wait_window_g3

0x2262,	// (0x0001673b) popup_note_wait_window_t5_ParamLimits

0x2262,	// (0x0001673b) popup_note_wait_window_t5

0xc0fb,	// (0x000205d4) main_feb_china_hwr_fs_writing_pane

0x8a5a,	// (0x0001cf33) popup_feb_china_hwr_fs_window_ParamLimits

0x8a5a,	// (0x0001cf33) popup_feb_china_hwr_fs_window

0x91a6,	// (0x0001d67f) aid_size_cell_hwr_fs_ParamLimits

0x91a6,	// (0x0001d67f) aid_size_cell_hwr_fs

0x1b87,	// (0x00016060) bg_popup_sub_pane_cp3_ParamLimits

0x1b87,	// (0x00016060) bg_popup_sub_pane_cp3

0x91bb,	// (0x0001d694) grid_hwr_fs_pane_ParamLimits

0x91bb,	// (0x0001d694) grid_hwr_fs_pane

0xe987,	// (0x00022e60) linegrid_hwr_fs_pane_ParamLimits

0xe987,	// (0x00022e60) linegrid_hwr_fs_pane

0x91d3,	// (0x0001d6ac) cell_hwr_fs_pane_ParamLimits

0x91d3,	// (0x0001d6ac) cell_hwr_fs_pane

0x1b93,	// (0x0001606c) linegrid_hwr_fs_pane_g1_ParamLimits

0x1b93,	// (0x0001606c) linegrid_hwr_fs_pane_g1

0xaff0,	// (0x0001f4c9) linegrid_hwr_fs_pane_g2_ParamLimits

0xaff0,	// (0x0001f4c9) linegrid_hwr_fs_pane_g2

0x1bb1,	// (0x0001608a) linegrid_hwr_fs_pane_g3_ParamLimits

0x1bb1,	// (0x0001608a) linegrid_hwr_fs_pane_g3

0x91f9,	// (0x0001d6d2) linegrid_hwr_fs_pane_g4_ParamLimits

0x91f9,	// (0x0001d6d2) linegrid_hwr_fs_pane_g4

0xe997,	// (0x00022e70) linegrid_hwr_fs_pane_g5_ParamLimits

0xe997,	// (0x00022e70) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x00023cc4) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x00023cc4) linegrid_hwr_fs_pane_g

0x1bbd,	// (0x00016096) cell_hwr_fs_pane_g1_ParamLimits

0x1bbd,	// (0x00016096) cell_hwr_fs_pane_g1

0x18b1,	// (0x00015d8a) cell_hwr_fs_pane_g2_ParamLimits

0x18b1,	// (0x00015d8a) cell_hwr_fs_pane_g2

0xb002,	// (0x0001f4db) cell_hwr_fs_pane_g3_ParamLimits

0xb002,	// (0x0001f4db) cell_hwr_fs_pane_g3

0xb00f,	// (0x0001f4e8) cell_hwr_fs_pane_g4_ParamLimits

0xb00f,	// (0x0001f4e8) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x00023ccf) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x00023ccf) cell_hwr_fs_pane_g

0x9213,	// (0x0001d6ec) cell_hwr_fs_pane_t1

0xc0fb,	// (0x000205d4) grid_highlight_pane_cp6

0xc0fb,	// (0x000205d4) main_idle_act2_pane

0xc6d9,	// (0x00020bb2) aid_inside_area_popup_secondary

0xb46b,	// (0x0001f944) aid_inside_area_window_primary_ParamLimits

0xb46b,	// (0x0001f944) aid_inside_area_window_primary

0xb9cc,	// (0x0001fea5) ai2_news_ticker_pane

0x3517,	// (0x000179f0) aid_size_cell_ai1_link_ParamLimits

0x3517,	// (0x000179f0) aid_size_cell_ai1_link

0xb9d4,	// (0x0001fead) popup_ai2_data_window_ParamLimits

0xb9d4,	// (0x0001fead) popup_ai2_data_window

0x3547,	// (0x00017a20) popup_ai2_link_window_ParamLimits

0x3547,	// (0x00017a20) popup_ai2_link_window

0x1b87,	// (0x00016060) bg_popup_sub_pane_cp4_ParamLimits

0x1b87,	// (0x00016060) bg_popup_sub_pane_cp4

0x355b,	// (0x00017a34) grid_ai2_link_pane_ParamLimits

0x355b,	// (0x00017a34) grid_ai2_link_pane

0x3572,	// (0x00017a4b) popup_ai2_link_window_g1_ParamLimits

0x3572,	// (0x00017a4b) popup_ai2_link_window_g1

0x357e,	// (0x00017a57) popup_ai2_link_window_g2_ParamLimits

0x357e,	// (0x00017a57) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x00023ea2) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x00023ea2) popup_ai2_link_window_g

0x358d,	// (0x00017a66) ai2_mp_button_pane

0x3595,	// (0x00017a6e) ai2_mp_volume_pane

0x1da9,	// (0x00016282) bg_popup_sub_pane_cp5_ParamLimits

0x1da9,	// (0x00016282) bg_popup_sub_pane_cp5

0x359d,	// (0x00017a76) heading_ai2_gene_pane_ParamLimits

0x359d,	// (0x00017a76) heading_ai2_gene_pane

0x35a9,	// (0x00017a82) list_ai2_gene_pane_ParamLimits

0x35a9,	// (0x00017a82) list_ai2_gene_pane

0x35f1,	// (0x00017aca) cell_ai2_link_pane_ParamLimits

0x35f1,	// (0x00017aca) cell_ai2_link_pane

0x3607,	// (0x00017ae0) cell_ai2_link_pane_g1

0xc0fb,	// (0x000205d4) grid_highlight_pane_cp7

0xeb80,	// (0x00023059) ai2_mp_volume_pane_g1

0x36d7,	// (0x00017bb0) ai2_mp_volume_pane_g2

0x364c,	// (0x00017b25) list_ai2_gene_pane_t1

0x36df,	// (0x00017bb8) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x00023ebb) ai2_mp_volume_pane_g

0x9338,	// (0x0001d811) volume_small_pane_cp3

0x36e7,	// (0x00017bc0) aid_size_cell_ai2_button

0x36ef,	// (0x00017bc8) grid_ai2_button_pane

0x36f8,	// (0x00017bd1) cell_ai2_button_pane_ParamLimits

0x36f8,	// (0x00017bd1) cell_ai2_button_pane

0xc0f1,	// (0x000205ca) cell_ai2_button_pane_g1

0xc0fb,	// (0x000205d4) grid_highlight_pane_cp8

0x3697,	// (0x00017b70) ai2_gene_pane_t1_ParamLimits

0x3697,	// (0x00017b70) ai2_gene_pane_t1

0x89b4,	// (0x0001ce8d) aid_height_parent_landscape

0xb6bb,	// (0x0001fb94) aid_height_set_list

0x2f30,	// (0x00017409) aid_size_parent

0x3336,	// (0x0001780f) aid_size_cell_graphic_pane_ParamLimits

0x35b9,	// (0x00017a92) popup_ai2_data_window_g1_ParamLimits

0x35b9,	// (0x00017a92) popup_ai2_data_window_g1

0x35c5,	// (0x00017a9e) ai2_news_ticker_pane_g1

0x35cd,	// (0x00017aa6) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x00023ea7) ai2_news_ticker_pane_g

0x35d5,	// (0x00017aae) ai2_news_ticker_pane_t1

0x35e3,	// (0x00017abc) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x00023eac) ai2_news_ticker_pane_t

0x3610,	// (0x00017ae9) heading_ai2_gene_pane_g1

0x3618,	// (0x00017af1) heading_ai2_gene_pane_t1_ParamLimits

0x3618,	// (0x00017af1) heading_ai2_gene_pane_t1

0x362d,	// (0x00017b06) list_highlight_pane_cp6

0x3635,	// (0x00017b0e) ai2_gene_pane_ParamLimits

0x3635,	// (0x00017b0e) ai2_gene_pane

0x365a,	// (0x00017b33) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x00023eb1) list_ai2_gene_pane_t

0x3668,	// (0x00017b41) list_highlight_pane_cp8_ParamLimits

0x3668,	// (0x00017b41) list_highlight_pane_cp8

0x3679,	// (0x00017b52) ai2_gene_pane_g1_ParamLimits

0x3679,	// (0x00017b52) ai2_gene_pane_g1

0x368b,	// (0x00017b64) ai2_gene_pane_g2_ParamLimits

0x368b,	// (0x00017b64) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x00023eb6) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x00023eb6) ai2_gene_pane_g

0xc4c2,	// (0x0002099b) scroll_pane_cp12

0x8973,	// (0x0001ce4c) control_pane_t3_ParamLimits

0x8973,	// (0x0001ce4c) control_pane_t3

0xab67,	// (0x0001f040) status_small_pane_g8_ParamLimits

0xab67,	// (0x0001f040) status_small_pane_g8

0x8b1d,	// (0x0001cff6) popup_find_window_ParamLimits

0x8dd0,	// (0x0001d2a9) popup_note_image_window_ParamLimits

0x19dd,	// (0x00015eb6) list_double2_graphic_pane_vc_g1_ParamLimits

0x19dd,	// (0x00015eb6) list_double2_graphic_pane_vc_g1

0xc4d3,	// (0x000209ac) list_double2_graphic_pane_vc_g2_ParamLimits

0xc4d3,	// (0x000209ac) list_double2_graphic_pane_vc_g2

0xc4df,	// (0x000209b8) list_double2_graphic_pane_vc_g3_ParamLimits

0xc4df,	// (0x000209b8) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x00023c92) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x00023c92) list_double2_graphic_pane_vc_g

0x19e9,	// (0x00015ec2) list_double2_graphic_pane_vc_t1_ParamLimits

0x19e9,	// (0x00015ec2) list_double2_graphic_pane_vc_t1

0xc4d3,	// (0x000209ac) list_single_heading_pane_vc_g1_ParamLimits

0xc4d3,	// (0x000209ac) list_single_heading_pane_vc_g1

0xc4df,	// (0x000209b8) list_single_heading_pane_vc_g2_ParamLimits

0xc4df,	// (0x000209b8) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023aa1) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023aa1) list_single_heading_pane_vc_g

0x1aa3,	// (0x00015f7c) list_single_heading_pane_vc_t1_ParamLimits

0x1aa3,	// (0x00015f7c) list_single_heading_pane_vc_t1

0x1abb,	// (0x00015f94) list_single_heading_pane_vc_t2_ParamLimits

0x1abb,	// (0x00015f94) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x00023cb3) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x00023cb3) list_single_heading_pane_vc_t

0x1ad7,	// (0x00015fb0) list_setting_number_pane_vc_g1_ParamLimits

0x1ad7,	// (0x00015fb0) list_setting_number_pane_vc_g1

0x1ae3,	// (0x00015fbc) list_setting_number_pane_vc_g2_ParamLimits

0x1ae3,	// (0x00015fbc) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x00023cb8) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x00023cb8) list_setting_number_pane_vc_g

0x1aef,	// (0x00015fc8) list_setting_number_pane_vc_t1_ParamLimits

0x1aef,	// (0x00015fc8) list_setting_number_pane_vc_t1

0x1b03,	// (0x00015fdc) list_setting_number_pane_vc_t2_ParamLimits

0x1b03,	// (0x00015fdc) list_setting_number_pane_vc_t2

0x1b1f,	// (0x00015ff8) list_setting_number_pane_vc_t3_ParamLimits

0x1b1f,	// (0x00015ff8) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x00023cbd) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x00023cbd) list_setting_number_pane_vc_t

0x1b4b,	// (0x00016024) set_value_pane_vc_ParamLimits

0x1b4b,	// (0x00016024) set_value_pane_vc

0x3137,	// (0x00017610) list_double2_graphic_pane_vc_ParamLimits

0x3137,	// (0x00017610) list_double2_graphic_pane_vc

0x3137,	// (0x00017610) list_double2_large_graphic_pane_vc_ParamLimits

0x3137,	// (0x00017610) list_double2_large_graphic_pane_vc

0x3137,	// (0x00017610) list_double2_pane_vc_ParamLimits

0x3137,	// (0x00017610) list_double2_pane_vc

0x3137,	// (0x00017610) list_double_graphic_heading_pane_vc_ParamLimits

0x3137,	// (0x00017610) list_double_graphic_heading_pane_vc

0x3137,	// (0x00017610) list_double_graphic_pane_vc_ParamLimits

0x3137,	// (0x00017610) list_double_graphic_pane_vc

0x3137,	// (0x00017610) list_double_heading_pane_vc_ParamLimits

0x3137,	// (0x00017610) list_double_heading_pane_vc

0x3149,	// (0x00017622) list_double_large_graphic_pane_vc_ParamLimits

0x3149,	// (0x00017622) list_double_large_graphic_pane_vc

0x3137,	// (0x00017610) list_double_number_pane_vc_ParamLimits

0x3137,	// (0x00017610) list_double_number_pane_vc

0x3137,	// (0x00017610) list_double_pane_vc_ParamLimits

0x3137,	// (0x00017610) list_double_pane_vc

0x3137,	// (0x00017610) list_double_time_pane_vc_ParamLimits

0x3137,	// (0x00017610) list_double_time_pane_vc

0x3137,	// (0x00017610) list_setting_number_pane_vc_ParamLimits

0x3137,	// (0x00017610) list_setting_number_pane_vc

0x3137,	// (0x00017610) list_setting_pane_vc_ParamLimits

0x3137,	// (0x00017610) list_setting_pane_vc

0x3137,	// (0x00017610) list_single_graphic_heading_pane_vc_ParamLimits

0x3137,	// (0x00017610) list_single_graphic_heading_pane_vc

0x3137,	// (0x00017610) list_single_heading_pane_vc_ParamLimits

0x3137,	// (0x00017610) list_single_heading_pane_vc

0x3137,	// (0x00017610) list_single_number_heading_pane_vc_ParamLimits

0x3137,	// (0x00017610) list_single_number_heading_pane_vc

0x19dd,	// (0x00015eb6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x19dd,	// (0x00015eb6) list_double_graphic_heading_pane_vc_g1

0xc4d3,	// (0x000209ac) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc4d3,	// (0x000209ac) list_double_graphic_heading_pane_vc_g2

0xc4df,	// (0x000209b8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc4df,	// (0x000209b8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b9,	// (0x00023c92) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x00023c92) list_double_graphic_heading_pane_vc_g

0x372c,	// (0x00017c05) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x372c,	// (0x00017c05) list_double_graphic_heading_pane_vc_t1

0x3748,	// (0x00017c21) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3748,	// (0x00017c21) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x00023ec2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x00023ec2) list_double_graphic_heading_pane_vc_t

0x1ad7,	// (0x00015fb0) list_setting_pane_vc_g1_ParamLimits

0x1ad7,	// (0x00015fb0) list_setting_pane_vc_g1

0x1ae3,	// (0x00015fbc) list_setting_pane_vc_g2_ParamLimits

0x1ae3,	// (0x00015fbc) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x00023cb8) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x00023cb8) list_setting_pane_vc_g

0x3966,	// (0x00017e3f) list_setting_pane_vc_t1_ParamLimits

0x3966,	// (0x00017e3f) list_setting_pane_vc_t1

0x3982,	// (0x00017e5b) list_setting_pane_vc_t2_ParamLimits

0x3982,	// (0x00017e5b) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x00023f05) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x00023f05) list_setting_pane_vc_t

0x1b4b,	// (0x00016024) set_value_pane_cp_vc_ParamLimits

0x1b4b,	// (0x00016024) set_value_pane_cp_vc

0xc4d3,	// (0x000209ac) list_single_number_heading_pane_vc_g1_ParamLimits

0xc4d3,	// (0x000209ac) list_single_number_heading_pane_vc_g1

0xc4df,	// (0x000209b8) list_single_number_heading_pane_vc_g2_ParamLimits

0xc4df,	// (0x000209b8) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023aa1) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023aa1) list_single_number_heading_pane_vc_g

0x1aa3,	// (0x00015f7c) list_single_number_heading_pane_vc_t1_ParamLimits

0x1aa3,	// (0x00015f7c) list_single_number_heading_pane_vc_t1

0x399c,	// (0x00017e75) list_single_number_heading_pane_vc_t2_ParamLimits

0x399c,	// (0x00017e75) list_single_number_heading_pane_vc_t2

0x39b0,	// (0x00017e89) list_single_number_heading_pane_vc_t3_ParamLimits

0x39b0,	// (0x00017e89) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x00023f0a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x00023f0a) list_single_number_heading_pane_vc_t

0x19dd,	// (0x00015eb6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x19dd,	// (0x00015eb6) list_single_graphic_heading_pane_vc_g1

0xc4d3,	// (0x000209ac) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc4d3,	// (0x000209ac) list_single_graphic_heading_pane_vc_g4

0xc4df,	// (0x000209b8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc4df,	// (0x000209b8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x00023c92) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x00023c92) list_single_graphic_heading_pane_vc_g

0x1aa3,	// (0x00015f7c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1aa3,	// (0x00015f7c) list_single_graphic_heading_pane_vc_t1

0x39c2,	// (0x00017e9b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x39c2,	// (0x00017e9b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x00023f11) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00023f11) list_single_graphic_heading_pane_vc_t

0xc4d3,	// (0x000209ac) list_double2_pane_vc_g1_ParamLimits

0xc4d3,	// (0x000209ac) list_double2_pane_vc_g1

0xc4df,	// (0x000209b8) list_double2_pane_vc_g2_ParamLimits

0xc4df,	// (0x000209b8) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023aa1) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023aa1) list_double2_pane_vc_g

0x39d6,	// (0x00017eaf) list_double2_pane_vc_t1_ParamLimits

0x39d6,	// (0x00017eaf) list_double2_pane_vc_t1

0x39ec,	// (0x00017ec5) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x39ec,	// (0x00017ec5) list_double2_large_graphic_pane_vc_g1

0xc4d3,	// (0x000209ac) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc4d3,	// (0x000209ac) list_double2_large_graphic_pane_vc_g2

0xc4df,	// (0x000209b8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc4df,	// (0x000209b8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00023abe) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00023abe) list_double2_large_graphic_pane_vc_g

0x39f8,	// (0x00017ed1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x39f8,	// (0x00017ed1) list_double2_large_graphic_pane_vc_t1

0x3a0e,	// (0x00017ee7) list_double_time_pane_vc_g1_ParamLimits

0x3a0e,	// (0x00017ee7) list_double_time_pane_vc_g1

0x3a1a,	// (0x00017ef3) list_double_time_pane_vc_g2_ParamLimits

0x3a1a,	// (0x00017ef3) list_double_time_pane_vc_g2

0x0001,

0xfa3d,	// (0x00023f16) list_double_time_pane_vc_g_ParamLimits

0xfa3d,	// (0x00023f16) list_double_time_pane_vc_g

0x3a26,	// (0x00017eff) list_double_time_pane_vc_t1_ParamLimits

0x3a26,	// (0x00017eff) list_double_time_pane_vc_t1

0x3a4a,	// (0x00017f23) list_double_time_pane_vc_t2_ParamLimits

0x3a4a,	// (0x00017f23) list_double_time_pane_vc_t2

0x3a79,	// (0x00017f52) list_double_time_pane_vc_t3_ParamLimits

0x3a79,	// (0x00017f52) list_double_time_pane_vc_t3

0x3a8b,	// (0x00017f64) list_double_time_pane_vc_t4_ParamLimits

0x3a8b,	// (0x00017f64) list_double_time_pane_vc_t4

0x0003,

0xfa42,	// (0x00023f1b) list_double_time_pane_vc_t_ParamLimits

0xfa42,	// (0x00023f1b) list_double_time_pane_vc_t

0xc4d3,	// (0x000209ac) list_double_pane_vc_g1_ParamLimits

0xc4d3,	// (0x000209ac) list_double_pane_vc_g1

0xc4df,	// (0x000209b8) list_double_pane_vc_g2_ParamLimits

0xc4df,	// (0x000209b8) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023aa1) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023aa1) list_double_pane_vc_g

0x3a9f,	// (0x00017f78) list_double_pane_vc_t1_ParamLimits

0x3a9f,	// (0x00017f78) list_double_pane_vc_t1

0x3ab3,	// (0x00017f8c) list_double_pane_vc_t2_ParamLimits

0x3ab3,	// (0x00017f8c) list_double_pane_vc_t2

0x0001,

0xfa4b,	// (0x00023f24) list_double_pane_vc_t_ParamLimits

0xfa4b,	// (0x00023f24) list_double_pane_vc_t

0xc4d3,	// (0x000209ac) list_double_number_pane_vc_g1_ParamLimits

0xc4d3,	// (0x000209ac) list_double_number_pane_vc_g1

0xc4df,	// (0x000209b8) list_double_number_pane_vc_g2_ParamLimits

0xc4df,	// (0x000209b8) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023aa1) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023aa1) list_double_number_pane_vc_g

0x3acb,	// (0x00017fa4) list_double_number_pane_vc_t1_ParamLimits

0x3acb,	// (0x00017fa4) list_double_number_pane_vc_t1

0x3add,	// (0x00017fb6) list_double_number_pane_vc_t2_ParamLimits

0x3add,	// (0x00017fb6) list_double_number_pane_vc_t2

0x3af1,	// (0x00017fca) list_double_number_pane_vc_t3_ParamLimits

0x3af1,	// (0x00017fca) list_double_number_pane_vc_t3

0x0002,

0xfa50,	// (0x00023f29) list_double_number_pane_vc_t_ParamLimits

0xfa50,	// (0x00023f29) list_double_number_pane_vc_t

0x3b09,	// (0x00017fe2) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3b09,	// (0x00017fe2) list_double_large_graphic_pane_vc_g1

0x3b2b,	// (0x00018004) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3b2b,	// (0x00018004) list_double_large_graphic_pane_vc_g2

0x3b3f,	// (0x00018018) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3b3f,	// (0x00018018) list_double_large_graphic_pane_vc_g3

0x3b4e,	// (0x00018027) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3b4e,	// (0x00018027) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa57,	// (0x00023f30) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa57,	// (0x00023f30) list_double_large_graphic_pane_vc_g

0x3b5a,	// (0x00018033) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3b5a,	// (0x00018033) list_double_large_graphic_pane_vc_t1

0x3b76,	// (0x0001804f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3b76,	// (0x0001804f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa60,	// (0x00023f39) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa60,	// (0x00023f39) list_double_large_graphic_pane_vc_t

0xc4d3,	// (0x000209ac) list_double_heading_pane_vc_g1_ParamLimits

0xc4d3,	// (0x000209ac) list_double_heading_pane_vc_g1

0xc4df,	// (0x000209b8) list_double_heading_pane_vc_g2_ParamLimits

0xc4df,	// (0x000209b8) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023aa1) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023aa1) list_double_heading_pane_vc_g

0x3b98,	// (0x00018071) list_double_heading_pane_vc_t1_ParamLimits

0x3b98,	// (0x00018071) list_double_heading_pane_vc_t1

0x1aa3,	// (0x00015f7c) list_double_heading_pane_vc_t2_ParamLimits

0x1aa3,	// (0x00015f7c) list_double_heading_pane_vc_t2

0x0001,

0xfa65,	// (0x00023f3e) list_double_heading_pane_vc_t_ParamLimits

0xfa65,	// (0x00023f3e) list_double_heading_pane_vc_t

0x3bac,	// (0x00018085) list_double_graphic_pane_vc_g1_ParamLimits

0x3bac,	// (0x00018085) list_double_graphic_pane_vc_g1

0x3bb8,	// (0x00018091) list_double_graphic_pane_vc_g2_ParamLimits

0x3bb8,	// (0x00018091) list_double_graphic_pane_vc_g2

0xc4d3,	// (0x000209ac) list_double_graphic_pane_vc_g3_ParamLimits

0xc4d3,	// (0x000209ac) list_double_graphic_pane_vc_g3

0x0003,

0xfa6a,	// (0x00023f43) list_double_graphic_pane_vc_g_ParamLimits

0xfa6a,	// (0x00023f43) list_double_graphic_pane_vc_g

0x3bd5,	// (0x000180ae) list_double_graphic_pane_vc_t1_ParamLimits

0x3bd5,	// (0x000180ae) list_double_graphic_pane_vc_t1

0x3bf9,	// (0x000180d2) list_double_graphic_pane_vc_t2_ParamLimits

0x3bf9,	// (0x000180d2) list_double_graphic_pane_vc_t2

0x0001,

0xfa73,	// (0x00023f4c) list_double_graphic_pane_vc_t_ParamLimits

0xfa73,	// (0x00023f4c) list_double_graphic_pane_vc_t

0xdf30,	// (0x00022409) aid_size_cell_fastswap

0x8536,	// (0x0001ca0f) aid_size_cell_touch_ParamLimits

0x8536,	// (0x0001ca0f) aid_size_cell_touch

0xe091,	// (0x0002256a) popup_fast_swap_wide_window_ParamLimits

0xe091,	// (0x0002256a) popup_fast_swap_wide_window

0x8706,	// (0x0001cbdf) touch_pane_ParamLimits

0x8706,	// (0x0001cbdf) touch_pane

0xc556,	// (0x00020a2f) button_value_adjust_pane_cp2

0xc55e,	// (0x00020a37) button_value_adjust_pane_cp4

0xc566,	// (0x00020a3f) form_field_data_pane_cp2

0xa419,	// (0x0001e8f2) form_field_data_wide_pane_cp2

0xe2a4,	// (0x0002277d) bg_scroll_pane_ParamLimits

0x87f6,	// (0x0001cccf) scroll_handle_pane_ParamLimits

0xe2c3,	// (0x0002279c) scroll_sc2_down_pane_ParamLimits

0xe2c3,	// (0x0002279c) scroll_sc2_down_pane

0xe2ea,	// (0x000227c3) scroll_sc2_up_pane_ParamLimits

0xe2ea,	// (0x000227c3) scroll_sc2_up_pane

0xbb0d,	// (0x0001ffe6) grid_wheel_folder_pane_g1_ParamLimits

0xbb0d,	// (0x0001ffe6) grid_wheel_folder_pane_g1

0xe70f,	// (0x00022be8) clock_nsta_pane_cp2_ParamLimits

0xe70f,	// (0x00022be8) clock_nsta_pane_cp2

0x1524,	// (0x000159fd) listscroll_midp_pane_ParamLimits

0xaa39,	// (0x0001ef12) midp_canvas_pane

0x14ce,	// (0x000159a7) nsta_clock_indic_pane

0x150a,	// (0x000159e3) listscroll_form_pane_vc

0x1512,	// (0x000159eb) listscroll_set_pane_vc_ParamLimits

0x1512,	// (0x000159eb) listscroll_set_pane_vc

0xace7,	// (0x0001f1c0) clock_nsta_pane

0xad11,	// (0x0001f1ea) indicator_nsta_pane

0x1977,	// (0x00015e50) bg_popup_sub_pane_cp2_ParamLimits

0x198b,	// (0x00015e64) find_pane_cp2_ParamLimits

0x198b,	// (0x00015e64) find_pane_cp2

0x19a1,	// (0x00015e7a) grid_toobar_pane_ParamLimits

0x1b5b,	// (0x00016034) list_form_gen_pane_vc_ParamLimits

0x1b5b,	// (0x00016034) list_form_gen_pane_vc

0x1b71,	// (0x0001604a) scroll_pane_cp8_vc_ParamLimits

0x1b71,	// (0x0001604a) scroll_pane_cp8_vc

0x1bed,	// (0x000160c6) data_form_wide_pane_vc_ParamLimits

0x1bed,	// (0x000160c6) data_form_wide_pane_vc

0x1bf9,	// (0x000160d2) form_field_data_wide_pane_vc_g1

0x1c01,	// (0x000160da) form_field_data_wide_pane_vc_t1_ParamLimits

0x1c01,	// (0x000160da) form_field_data_wide_pane_vc_t1

0xc58d,	// (0x00020a66) input_focus_pane_cp6_vc_ParamLimits

0xc58d,	// (0x00020a66) input_focus_pane_cp6_vc

0xb1df,	// (0x0001f6b8) list_midp_pane_ParamLimits

0x339c,	// (0x00017875) scroll_pane_cp16_ParamLimits

0x339c,	// (0x00017875) scroll_pane_cp16

0x1fc9,	// (0x000164a2) button_value_adjust_pane_ParamLimits

0x1fc9,	// (0x000164a2) button_value_adjust_pane

0xb6cc,	// (0x0001fba5) button_value_adjust_pane_cp6_ParamLimits

0xb6cc,	// (0x0001fba5) button_value_adjust_pane_cp6

0xb7e6,	// (0x0001fcbf) settings_code_pane_cp_ParamLimits

0xb7e6,	// (0x0001fcbf) settings_code_pane_cp

0xc0f1,	// (0x000205ca) cell_touch_pane_g1

0xc0f1,	// (0x000205ca) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00023bd7) cell_touch_pane_g

0xb9ea,	// (0x0001fec3) cell_touch_pane_cp_ParamLimits

0xb9ea,	// (0x0001fec3) cell_touch_pane_cp

0xba06,	// (0x0001fedf) cell_touch_pane_ParamLimits

0xba06,	// (0x0001fedf) cell_touch_pane

0xc0f1,	// (0x000205ca) scroll_sc2_down_pane_g1

0xc0f1,	// (0x000205ca) scroll_sc2_up_pane_g1

0xc0fb,	// (0x000205d4) bg_set_opt_pane_cp4_vc

0x3766,	// (0x00017c3f) list_set_graphic_pane_vc_g1_ParamLimits

0x3766,	// (0x00017c3f) list_set_graphic_pane_vc_g1

0x3772,	// (0x00017c4b) list_set_graphic_pane_vc_g2_ParamLimits

0x3772,	// (0x00017c4b) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x00023ec7) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x00023ec7) list_set_graphic_pane_vc_g

0x377e,	// (0x00017c57) text_primary_small_cp13_vc_ParamLimits

0x377e,	// (0x00017c57) text_primary_small_cp13_vc

0x3796,	// (0x00017c6f) list_set_graphic_pane_vc_ParamLimits

0x3796,	// (0x00017c6f) list_set_graphic_pane_vc

0xc0fb,	// (0x000205d4) input_focus_pane_cp2_vc

0xc0f1,	// (0x000205ca) setting_code_pane_vc_g1

0xc16e,	// (0x00020647) setting_code_pane_vc_t1

0x37a9,	// (0x00017c82) set_text_pane_vc_t1_ParamLimits

0x37a9,	// (0x00017c82) set_text_pane_vc_t1

0xc0fb,	// (0x000205d4) input_focus_pane_cp1_vc

0x37c5,	// (0x00017c9e) list_set_text_pane_vc

0xc0f1,	// (0x000205ca) setting_text_pane_vc_g1

0xc0fb,	// (0x000205d4) bg_set_opt_pane_cp2_vc

0xc165,	// (0x0002063e) setting_slider_graphic_pane_vc_g1

0x37cf,	// (0x00017ca8) setting_slider_graphic_pane_vc_t1

0x37df,	// (0x00017cb8) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x00023ecc) setting_slider_graphic_pane_vc_t

0x37ef,	// (0x00017cc8) slider_set_pane_cp_vc

0x37f7,	// (0x00017cd0) slider_set_pane_vc_g1

0x3800,	// (0x00017cd9) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x00023ed1) slider_set_pane_vc_g

0xc62b,	// (0x00020b04) set_opt_bg_pane_g1_copy1

0xc633,	// (0x00020b0c) set_opt_bg_pane_g2_copy1

0x382c,	// (0x00017d05) set_opt_bg_pane_g3_copy1

0xc643,	// (0x00020b1c) set_opt_bg_pane_g4_copy1

0xc64b,	// (0x00020b24) set_opt_bg_pane_g5_copy1

0xc653,	// (0x00020b2c) set_opt_bg_pane_g6_copy1

0x3834,	// (0x00017d0d) set_opt_bg_pane_g7_copy1

0x383c,	// (0x00017d15) set_opt_bg_pane_g8_copy1

0x3844,	// (0x00017d1d) set_opt_bg_pane_g9_copy1

0xc0fb,	// (0x000205d4) bg_set_opt_pane_cp_vc

0x384c,	// (0x00017d25) setting_slider_pane_vc_t1

0x385b,	// (0x00017d34) setting_slider_pane_vc_t2

0x386b,	// (0x00017d44) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x00023ee0) setting_slider_pane_vc_t

0x387b,	// (0x00017d54) slider_set_pane_vc

0xe9ad,	// (0x00022e86) volume_set_pane_vc_g1

0xeb88,	// (0x00023061) volume_set_pane_vc_g2

0xeb91,	// (0x0002306a) volume_set_pane_vc_g3

0xeb9a,	// (0x00023073) volume_set_pane_vc_g4

0xeba3,	// (0x0002307c) volume_set_pane_vc_g5

0xebac,	// (0x00023085) volume_set_pane_vc_g6

0xebb5,	// (0x0002308e) volume_set_pane_vc_g7

0xebbe,	// (0x00023097) volume_set_pane_vc_g8

0xebc7,	// (0x000230a0) volume_set_pane_vc_g9

0xebd0,	// (0x000230a9) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x00023ee7) volume_set_pane_vc_g

0x3883,	// (0x00017d5c) volume_set_pane_vc

0x388b,	// (0x00017d64) button_value_adjust_pane_cp1_vc

0x3895,	// (0x00017d6e) list_highlight_pane_cp2_vc

0x389e,	// (0x00017d77) list_set_pane_vc_ParamLimits

0x389e,	// (0x00017d77) list_set_pane_vc

0x38fc,	// (0x00017dd5) main_pane_set_vc_t1_ParamLimits

0x38fc,	// (0x00017dd5) main_pane_set_vc_t1

0x3911,	// (0x00017dea) main_pane_set_vc_t2_ParamLimits

0x3911,	// (0x00017dea) main_pane_set_vc_t2

0x3923,	// (0x00017dfc) main_pane_set_vc_t3_ParamLimits

0x3923,	// (0x00017dfc) main_pane_set_vc_t3

0x3935,	// (0x00017e0e) main_pane_set_vc_t4_ParamLimits

0x3935,	// (0x00017e0e) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x00023efc) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x00023efc) main_pane_set_vc_t

0x3947,	// (0x00017e20) setting_code_pane_vc_ParamLimits

0x3947,	// (0x00017e20) setting_code_pane_vc

0x3956,	// (0x00017e2f) setting_slider_graphic_pane_vc

0x3956,	// (0x00017e2f) setting_slider_pane_vc

0x3956,	// (0x00017e2f) setting_text_pane_vc

0x3956,	// (0x00017e2f) setting_volume_pane_vc

0x395e,	// (0x00017e37) scroll_pane_cp121_vc

0xc544,	// (0x00020a1d) set_content_pane_vc

0x3c23,	// (0x000180fc) button_value_adjust_pane_g1

0x3c2c,	// (0x00018105) button_value_adjust_pane_g2

0x0001,

0xfa78,	// (0x00023f51) button_value_adjust_pane_g

0x3c35,	// (0x0001810e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3c35,	// (0x0001810e) form_field_slider_wide_pane_vc_t1

0x3c49,	// (0x00018122) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3c49,	// (0x00018122) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7d,	// (0x00023f56) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x00023f56) form_field_slider_wide_pane_vc_t

0xc149,	// (0x00020622) input_focus_pane_cp10_vc_ParamLimits

0xc149,	// (0x00020622) input_focus_pane_cp10_vc

0x3c77,	// (0x00018150) slider_cont_pane_cp1_vc_ParamLimits

0x3c77,	// (0x00018150) slider_cont_pane_cp1_vc

0x3c89,	// (0x00018162) slider_form_pane_g1_cp2

0x3800,	// (0x00017cd9) slider_form_pane_g2_cp2

0x3cb6,	// (0x0001818f) form_field_slider_pane_vc_t3

0x3cc4,	// (0x0001819d) form_field_slider_pane_vc_t4

0x3cd2,	// (0x000181ab) slider_form_pane_vc_ParamLimits

0x3cd2,	// (0x000181ab) slider_form_pane_vc

0x3cdf,	// (0x000181b8) form_field_slider_pane_vc_t1_ParamLimits

0x3cdf,	// (0x000181b8) form_field_slider_pane_vc_t1

0x3c49,	// (0x00018122) form_field_slider_pane_vc_t2_ParamLimits

0x3c49,	// (0x00018122) form_field_slider_pane_vc_t2

0x0001,

0xfa8f,	// (0x00023f68) form_field_slider_pane_vc_t_ParamLimits

0xfa8f,	// (0x00023f68) form_field_slider_pane_vc_t

0xc149,	// (0x00020622) input_focus_pane_cp9_vc_ParamLimits

0xc149,	// (0x00020622) input_focus_pane_cp9_vc

0x3cfb,	// (0x000181d4) slider_cont_pane_vc_ParamLimits

0x3cfb,	// (0x000181d4) slider_cont_pane_vc

0x3d0f,	// (0x000181e8) list_form_graphic_pane_cp_vc_ParamLimits

0x3d0f,	// (0x000181e8) list_form_graphic_pane_cp_vc

0x1bf9,	// (0x000160d2) form_field_popup_wide_pane_vc_g1

0x3d24,	// (0x000181fd) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3d24,	// (0x000181fd) form_field_popup_wide_pane_vc_t1

0xc58d,	// (0x00020a66) input_focus_pane_cp8_vc_ParamLimits

0xc58d,	// (0x00020a66) input_focus_pane_cp8_vc

0x3d69,	// (0x00018242) list_form_wide_pane_vc_ParamLimits

0x3d69,	// (0x00018242) list_form_wide_pane_vc

0x3d75,	// (0x0001824e) list_form_graphic_pane_vc_g1

0x3d7d,	// (0x00018256) list_form_graphic_pane_vc_t1_ParamLimits

0x3d7d,	// (0x00018256) list_form_graphic_pane_vc_t1

0xc157,	// (0x00020630) list_highlight_pane_cp5_vc_ParamLimits

0xc157,	// (0x00020630) list_highlight_pane_cp5_vc

0x3d99,	// (0x00018272) list_form_graphic_pane_vc_ParamLimits

0x3d99,	// (0x00018272) list_form_graphic_pane_vc

0x1bf9,	// (0x000160d2) form_field_popup_pane_vc_g1

0x3daf,	// (0x00018288) form_field_popup_pane_vc_t1_ParamLimits

0x3daf,	// (0x00018288) form_field_popup_pane_vc_t1

0xc58d,	// (0x00020a66) input_focus_pane_cp7_vc_ParamLimits

0xc58d,	// (0x00020a66) input_focus_pane_cp7_vc

0x3dc6,	// (0x0001829f) list_form_pane_vc_ParamLimits

0x3dc6,	// (0x0001829f) list_form_pane_vc

0x3dd2,	// (0x000182ab) data_form_pane_vc_t1_ParamLimits

0x3dd2,	// (0x000182ab) data_form_pane_vc_t1

0xc62b,	// (0x00020b04) input_focus_pane_vc_g1

0xc633,	// (0x00020b0c) input_focus_pane_vc_g2

0xc63b,	// (0x00020b14) input_focus_pane_vc_g3

0xc643,	// (0x00020b1c) input_focus_pane_vc_g4

0xc64b,	// (0x00020b24) input_focus_pane_vc_g5

0xc653,	// (0x00020b2c) input_focus_pane_vc_g6

0xc65b,	// (0x00020b34) input_focus_pane_vc_g7

0xc663,	// (0x00020b3c) input_focus_pane_vc_g8

0xc66b,	// (0x00020b44) input_focus_pane_vc_g9

0xc0f1,	// (0x000205ca) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00023b60) input_focus_pane_vc_g

0x1bed,	// (0x000160c6) data_form_pane_vc_ParamLimits

0x1bed,	// (0x000160c6) data_form_pane_vc

0x1bf9,	// (0x000160d2) form_field_data_pane_vc_g1

0x3ded,	// (0x000182c6) form_field_data_pane_vc_t1_ParamLimits

0x3ded,	// (0x000182c6) form_field_data_pane_vc_t1

0xc58d,	// (0x00020a66) input_focus_pane_vc_ParamLimits

0xc58d,	// (0x00020a66) input_focus_pane_vc

0x3e07,	// (0x000182e0) button_value_adjust_pane_cp3_vc

0x3e0f,	// (0x000182e8) button_value_adjust_pane_cp5_vc

0x3e17,	// (0x000182f0) form_field_data_pane_vc_ParamLimits

0x3e17,	// (0x000182f0) form_field_data_pane_vc

0x3e2e,	// (0x00018307) form_field_data_pane_vc_cp2

0x3e36,	// (0x0001830f) form_field_data_wide_pane_vc_ParamLimits

0x3e36,	// (0x0001830f) form_field_data_wide_pane_vc

0x3e4c,	// (0x00018325) form_field_data_wide_pane_vc_cp2

0x3e54,	// (0x0001832d) form_field_popup_pane_vc_ParamLimits

0x3e54,	// (0x0001832d) form_field_popup_pane_vc

0x3e6b,	// (0x00018344) form_field_popup_wide_pane_vc_ParamLimits

0x3e6b,	// (0x00018344) form_field_popup_wide_pane_vc

0x3e81,	// (0x0001835a) form_field_slider_pane_vc_ParamLimits

0x3e81,	// (0x0001835a) form_field_slider_pane_vc

0x3e94,	// (0x0001836d) form_field_slider_wide_pane_vc_ParamLimits

0x3e94,	// (0x0001836d) form_field_slider_wide_pane_vc

0xba23,	// (0x0001fefc) grid_touch_1_pane_ParamLimits

0xba23,	// (0x0001fefc) grid_touch_1_pane

0xba37,	// (0x0001ff10) grid_touch_2_pane_ParamLimits

0xba37,	// (0x0001ff10) grid_touch_2_pane

0x3f62,	// (0x0001843b) touch_pane_g1_ParamLimits

0x3f62,	// (0x0001843b) touch_pane_g1

0x3ecb,	// (0x000183a4) cell_app_pane_cp_wide_ParamLimits

0x3ecb,	// (0x000183a4) cell_app_pane_cp_wide

0x3edc,	// (0x000183b5) grid_popup_fast_wide_pane_ParamLimits

0x3edc,	// (0x000183b5) grid_popup_fast_wide_pane

0x3ef0,	// (0x000183c9) scroll_pane_cp19_ParamLimits

0x3ef0,	// (0x000183c9) scroll_pane_cp19

0xc0fb,	// (0x000205d4) bg_popup_window_pane_cp20

0x3f04,	// (0x000183dd) listscroll_popup_fast_wide_pane

0xc867,	// (0x00020d40) grid_indicator_nsta_pane

0x3f0c,	// (0x000183e5) clock_nsta_pane_g1

0x3f15,	// (0x000183ee) clock_nsta_pane_t1

0xba61,	// (0x0001ff3a) cell_indicator_nsta_pane_ParamLimits

0xba61,	// (0x0001ff3a) cell_indicator_nsta_pane

0x3f62,	// (0x0001843b) cell_indicator_nsta_pane_g1

0xba78,	// (0x0001ff51) cell_indicator_nsta_pane_g2

0x0001,

0xfaa0,	// (0x00023f79) cell_indicator_nsta_pane_g

0x3f7d,	// (0x00018456) clock_nsta_pane_cp

0x3f85,	// (0x0001845e) indicator_nsta_pane_cp

0x3f8d,	// (0x00018466) nsta_clock_indic_pane_g1

0xc1ad,	// (0x00020686) grid_indicator_pane

0xa7f7,	// (0x0001ecd0) scroll_pane_cp29

0xe65e,	// (0x00022b37) indicator_nsta_pane_cp2_ParamLimits

0xe65e,	// (0x00022b37) indicator_nsta_pane_cp2

0xc157,	// (0x00020630) main_apps_wheel_pane

0xb0f4,	// (0x0001f5cd) form_midp_field_text_pane_ParamLimits

0x1f9b,	// (0x00016474) scroll_bar_cp050_ParamLimits

0x3fee,	// (0x000184c7) cell_indicator_pane_ParamLimits

0x3fee,	// (0x000184c7) cell_indicator_pane

0x4007,	// (0x000184e0) cell_indicator_pane_g1

0xba97,	// (0x0001ff70) grid_wheel_folder_pane_ParamLimits

0xba97,	// (0x0001ff70) grid_wheel_folder_pane

0xbaa5,	// (0x0001ff7e) list_wheel_apps_pane_ParamLimits

0xbaa5,	// (0x0001ff7e) list_wheel_apps_pane

0xbab3,	// (0x0001ff8c) main_apps_wheel_pane_g1_ParamLimits

0xbab3,	// (0x0001ff8c) main_apps_wheel_pane_g1

0xbabf,	// (0x0001ff98) main_apps_wheel_pane_g2_ParamLimits

0xbabf,	// (0x0001ff98) main_apps_wheel_pane_g2

0x0001,

0xfabc,	// (0x00023f95) main_apps_wheel_pane_g_ParamLimits

0xfabc,	// (0x00023f95) main_apps_wheel_pane_g

0xbacd,	// (0x0001ffa6) main_apps_wheel_pane_t1_ParamLimits

0xbacd,	// (0x0001ffa6) main_apps_wheel_pane_t1

0xbae1,	// (0x0001ffba) list_wheel_apps_pane_g1

0xbae9,	// (0x0001ffc2) list_wheel_apps_pane_g2

0xbaf1,	// (0x0001ffca) list_wheel_apps_pane_g3

0xbaf9,	// (0x0001ffd2) list_wheel_apps_pane_g4

0xbb03,	// (0x0001ffdc) list_wheel_apps_pane_g5

0x0004,

0xfac1,	// (0x00023f9a) list_wheel_apps_pane_g

0x1062,	// (0x0001553b) navi_icon_text_pane

0xabdb,	// (0x0001f0b4) aid_fill_nsta

0x40ce,	// (0x000185a7) navi_icon_text_pane_g1

0x40da,	// (0x000185b3) navi_icon_text_pane_t1

0x0f05,	// (0x000153de) list_set_graphic_pane_t1_ParamLimits

0x0f05,	// (0x000153de) list_set_graphic_pane_t1

0x26ca,	// (0x00016ba3) popup_midp_note_alarm_window_t6_ParamLimits

0x26ca,	// (0x00016ba3) popup_midp_note_alarm_window_t6

0x26dc,	// (0x00016bb5) popup_midp_note_alarm_window_t7_ParamLimits

0x26dc,	// (0x00016bb5) popup_midp_note_alarm_window_t7

0x26ee,	// (0x00016bc7) popup_midp_note_alarm_window_t8_ParamLimits

0x26ee,	// (0x00016bc7) popup_midp_note_alarm_window_t8

0x2700,	// (0x00016bd9) popup_midp_note_alarm_window_t9_ParamLimits

0x2700,	// (0x00016bd9) popup_midp_note_alarm_window_t9

0x2712,	// (0x00016beb) popup_midp_note_alarm_window_t10_ParamLimits

0x2712,	// (0x00016beb) popup_midp_note_alarm_window_t10

0x2724,	// (0x00016bfd) popup_midp_note_alarm_window_t11_ParamLimits

0x2724,	// (0x00016bfd) popup_midp_note_alarm_window_t11

0xb44c,	// (0x0001f925) scroll_pane_cp17_ParamLimits

0xb44c,	// (0x0001f925) scroll_pane_cp17

0xe9ad,	// (0x00022e86) volume_small_pane_cp_g1

0xebd9,	// (0x000230b2) volume_small_pane_cp_g2

0xebe2,	// (0x000230bb) volume_small_pane_cp_g3

0xebeb,	// (0x000230c4) volume_small_pane_cp_g4

0xebf4,	// (0x000230cd) volume_small_pane_cp_g5

0xeba3,	// (0x0002307c) volume_small_pane_cp_g6

0xebfd,	// (0x000230d6) volume_small_pane_cp_g7

0xec06,	// (0x000230df) volume_small_pane_cp_g8

0xec0f,	// (0x000230e8) volume_small_pane_cp_g9

0xec18,	// (0x000230f1) volume_small_pane_cp_g10

0x12b7,	// (0x00015790) midp_ticker_pane_g1_ParamLimits

0x12c3,	// (0x0001579c) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00023c2c) midp_ticker_pane_g_ParamLimits

0x12cf,	// (0x000157a8) midp_ticker_pane_t1_ParamLimits

0xabff,	// (0x0001f0d8) aid_fill_nsta_2

0x1f87,	// (0x00016460) list_form2_midp_pane

0x30ea,	// (0x000175c3) midp_editing_number_pane_ParamLimits

0x30f9,	// (0x000175d2) midp_ticker_pane_ParamLimits

0x40ec,	// (0x000185c5) form2_midp_field_pane

0x4110,	// (0x000185e9) scroll_pane_cp51

0x4130,	// (0x00018609) form2_midp_button_pane_ParamLimits

0x4130,	// (0x00018609) form2_midp_button_pane

0x4142,	// (0x0001861b) form2_midp_content_pane_ParamLimits

0x4142,	// (0x0001861b) form2_midp_content_pane

0x415c,	// (0x00018635) form2_midp_field_choice_group_pane

0x4164,	// (0x0001863d) form2_midp_field_pane_g1

0x416c,	// (0x00018645) form2_midp_field_pane_g2

0x4174,	// (0x0001864d) form2_midp_field_pane_g3

0x417c,	// (0x00018655) form2_midp_field_pane_g4

0x0003,

0xfae6,	// (0x00023fbf) form2_midp_field_pane_g

0x4184,	// (0x0001865d) form2_midp_gauge_slider_pane

0x418c,	// (0x00018665) form2_midp_gauge_wait_pane

0x4194,	// (0x0001866d) form2_midp_image_pane_ParamLimits

0x4194,	// (0x0001866d) form2_midp_image_pane

0xbb36,	// (0x0002000f) form2_midp_label_pane_ParamLimits

0xbb36,	// (0x0002000f) form2_midp_label_pane

0xbb4f,	// (0x00020028) form2_midp_label_pane_cp_ParamLimits

0xbb4f,	// (0x00020028) form2_midp_label_pane_cp

0x41e9,	// (0x000186c2) form2_midp_string_pane_ParamLimits

0x41e9,	// (0x000186c2) form2_midp_string_pane

0xbb6e,	// (0x00020047) form2_midp_text_pane_ParamLimits

0xbb6e,	// (0x00020047) form2_midp_text_pane

0x4216,	// (0x000186ef) form2_midp_time_pane

0x4226,	// (0x000186ff) input_focus_pane_cp51_ParamLimits

0x4226,	// (0x000186ff) input_focus_pane_cp51

0xbb87,	// (0x00020060) form2_midp_label_pane_t1_ParamLimits

0xbb87,	// (0x00020060) form2_midp_label_pane_t1

0xbbc7,	// (0x000200a0) form2_mdip_text_pane_t1_ParamLimits

0xbbc7,	// (0x000200a0) form2_mdip_text_pane_t1

0x429e,	// (0x00018777) form2_midp_time_pane_t1

0x42b9,	// (0x00018792) form2_midp_gauge_slider_pane_t1

0xbbe3,	// (0x000200bc) form2_midp_gauge_slider_pane_t2

0xbbf5,	// (0x000200ce) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaef,	// (0x00023fc8) form2_midp_gauge_slider_pane_t

0x42ef,	// (0x000187c8) form2_midp_slider_pane

0x42fb,	// (0x000187d4) form2_midp_gauge_wait_pane_t1

0x4309,	// (0x000187e2) form2_midp_wait_pane_ParamLimits

0x4309,	// (0x000187e2) form2_midp_wait_pane

0xbc07,	// (0x000200e0) list_single_2graphic_pane_cp4_ParamLimits

0xbc07,	// (0x000200e0) list_single_2graphic_pane_cp4

0xb030,	// (0x0001f509) list_single_midp_graphic_pane_cp_ParamLimits

0xb030,	// (0x0001f509) list_single_midp_graphic_pane_cp

0xc0fb,	// (0x000205d4) list_highlight_pane_cp20

0x435c,	// (0x00018835) list_single_2graphic_pane_g1_cp4

0x3610,	// (0x00017ae9) list_single_2graphic_pane_g2_cp4

0x4364,	// (0x0001883d) list_single_2graphic_pane_t1_cp4

0xc157,	// (0x00020630) list_highlight_pane_cp21

0x4373,	// (0x0001884c) list_single_midp_graphic_pane_g4_cp

0x4382,	// (0x0001885b) list_single_midp_graphic_pane_t1_cp

0xbc1c,	// (0x000200f5) form2_mdip_string_pane_t1_ParamLimits

0xbc1c,	// (0x000200f5) form2_mdip_string_pane_t1

0xc0fb,	// (0x000205d4) bg_wml_button_pane_cp2

0xc0f1,	// (0x000205ca) form2_midp_image_pane_g1

0xc4f7,	// (0x000209d0) list_double_large_graphic_pane_g5_ParamLimits

0xc4f7,	// (0x000209d0) list_double_large_graphic_pane_g5

0x1524,	// (0x000159fd) midp_form_pane_ParamLimits

0xc157,	// (0x00020630) main_apps_wheel_pane_ParamLimits

0x8e57,	// (0x0001d330) popup_preview_window_ParamLimits

0x8e57,	// (0x0001d330) popup_preview_window

0x9124,	// (0x0001d5fd) popup_touch_info_window_ParamLimits

0x9124,	// (0x0001d5fd) popup_touch_info_window

0x9142,	// (0x0001d61b) popup_touch_menu_window_ParamLimits

0x9142,	// (0x0001d61b) popup_touch_menu_window

0xc0e7,	// (0x000205c0) bg_popup_sub_pane_cp6

0x44a4,	// (0x0001897d) list_touch_menu_pane

0xbc94,	// (0x0002016d) list_single_touch_menu_pane_ParamLimits

0xbc94,	// (0x0002016d) list_single_touch_menu_pane

0xbca8,	// (0x00020181) list_single_touch_menu_pane_t1

0xc157,	// (0x00020630) bg_popup_sub_pane_cp7_ParamLimits

0xc157,	// (0x00020630) bg_popup_sub_pane_cp7

0x44d0,	// (0x000189a9) heading_sub_pane

0x44d8,	// (0x000189b1) list_touch_info_pane_ParamLimits

0x44d8,	// (0x000189b1) list_touch_info_pane

0x44e7,	// (0x000189c0) list_single_touch_info_pane_ParamLimits

0x44e7,	// (0x000189c0) list_single_touch_info_pane

0x44f9,	// (0x000189d2) list_single_touch_info_pane_t1

0x4507,	// (0x000189e0) list_single_touch_info_pane_t2

0x0001,

0xfafd,	// (0x00023fd6) list_single_touch_info_pane_t

0x11e2,	// (0x000156bb) bg_popup_heading_pane_cp

0x4515,	// (0x000189ee) heading_sub_pane_t1

0x1b87,	// (0x00016060) bg_popup_preview_window_pane_cp_ParamLimits

0x1b87,	// (0x00016060) bg_popup_preview_window_pane_cp

0x44d0,	// (0x000189a9) heading_preview_pane

0x44d8,	// (0x000189b1) list_preview_pane_ParamLimits

0x44d8,	// (0x000189b1) list_preview_pane

0x4523,	// (0x000189fc) popup_preview_window_g1

0x44e7,	// (0x000189c0) list_single_preview_pane_ParamLimits

0x44e7,	// (0x000189c0) list_single_preview_pane

0x452b,	// (0x00018a04) list_single_preview_pane_g1

0x4533,	// (0x00018a0c) list_single_preview_pane_t1

0x44f9,	// (0x000189d2) list_single_preview_pane_t2

0x0001,

0xfb02,	// (0x00023fdb) list_single_preview_pane_t

0x4541,	// (0x00018a1a) bg_popup_heading_pane_cp2_ParamLimits

0x4541,	// (0x00018a1a) bg_popup_heading_pane_cp2

0x4557,	// (0x00018a30) heading_preview_pane_g1

0x455f,	// (0x00018a38) heading_preview_pane_t1_ParamLimits

0x455f,	// (0x00018a38) heading_preview_pane_t1

0xc1c4,	// (0x0002069d) soft_indicator_pane_t1_ParamLimits

0xc49f,	// (0x00020978) scroll_pane_ParamLimits

0xe2d8,	// (0x000227b1) scroll_sc2_left_pane

0xe2e1,	// (0x000227ba) scroll_sc2_right_pane

0xe300,	// (0x000227d9) scroll_bg_pane_g1_ParamLimits

0xe315,	// (0x000227ee) scroll_bg_pane_g2_ParamLimits

0xe32d,	// (0x00022806) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00023bb7) scroll_bg_pane_g_ParamLimits

0xe300,	// (0x000227d9) scroll_handle_pane_g1_ParamLimits

0xe342,	// (0x0002281b) scroll_handle_pane_g2_ParamLimits

0xe32d,	// (0x00022806) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00023bbe) scroll_handle_pane_g_ParamLimits

0x89fe,	// (0x0001ced7) popup_choice_list_window_ParamLimits

0x89fe,	// (0x0001ced7) popup_choice_list_window

0x1983,	// (0x00015e5c) choice_list_pane

0x1a27,	// (0x00015f00) cell_toolbar_pane_t1

0x1a4f,	// (0x00015f28) toolbar_button_pane_ParamLimits

0x2bf0,	// (0x000170c9) ai_gene_pane_1_t2_ParamLimits

0x2bf0,	// (0x000170c9) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x00023de1) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x00023de1) ai_gene_pane_1_t

0x457c,	// (0x00018a55) scroll_sc2_left_pane_g1

0x457c,	// (0x00018a55) scroll_sc2_right_pane_g1

0x1524,	// (0x000159fd) bg_popup_sub_pane_cp10

0x4586,	// (0x00018a5f) list_choice_list_pane

0xbcb6,	// (0x0002018f) list_single_choice_list_pane_ParamLimits

0xbcb6,	// (0x0002018f) list_single_choice_list_pane

0xc875,	// (0x00020d4e) list_single_choice_list_pane_g1

0xa63e,	// (0x0001eb17) list_single_choice_list_pane_t1_ParamLimits

0xa63e,	// (0x0001eb17) list_single_choice_list_pane_t1

0x45ba,	// (0x00018a93) choice_list_pane_g1

0xbcc9,	// (0x000201a2) choice_list_pane_t1

0xc0e7,	// (0x000205c0) input_focus_pane_cp11

0xc84e,	// (0x00020d27) title_pane_stacon_g2_ParamLimits

0xc84e,	// (0x00020d27) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00023b9d) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00023b9d) title_pane_stacon_g

0x11e2,	// (0x000156bb) cursor_press_pane

0x8aa5,	// (0x0001cf7e) popup_fep_hwr_window_ParamLimits

0x8aa5,	// (0x0001cf7e) popup_fep_hwr_window

0xe867,	// (0x00022d40) popup_fep_vkb_window_ParamLimits

0xe867,	// (0x00022d40) popup_fep_vkb_window

0xbcd7,	// (0x000201b0) cursor_press_pane_g1

0x0002,

0xfb2b,	// (0x00024004) fep_vkb_side_pane_g_ParamLimits

0xec4c,	// (0x00023125) fep_hwr_candidate_pane_ParamLimits

0xec4c,	// (0x00023125) fep_hwr_candidate_pane

0xec76,	// (0x0002314f) fep_hwr_side_pane_ParamLimits

0xec76,	// (0x0002314f) fep_hwr_side_pane

0xec96,	// (0x0002316f) fep_hwr_top_pane_ParamLimits

0xec96,	// (0x0002316f) fep_hwr_top_pane

0xecae,	// (0x00023187) fep_hwr_write_pane_ParamLimits

0xecae,	// (0x00023187) fep_hwr_write_pane

0xfb2b,	// (0x00024004) fep_vkb_side_pane_g

0x45d8,	// (0x00018ab1) fep_hwr_top_pane_g1

0x45ea,	// (0x00018ac3) fep_hwr_top_pane_g2

0xece8,	// (0x000231c1) fep_hwr_top_pane_g3

0x0002,

0xfb07,	// (0x00023fe0) fep_hwr_top_pane_g

0xecfd,	// (0x000231d6) fep_hwr_top_text_pane

0xe405,	// (0x000228de) fep_hwr_top_text_pane_g1

0x4620,	// (0x00018af9) fep_hwr_top_text_pane_t1

0xed7c,	// (0x00023255) fep_hwr_candidate_pane_g1

0x4865,	// (0x00018d3e) fep_vkb_keypad_pane_g3_ParamLimits

0x4865,	// (0x00018d3e) fep_vkb_keypad_pane_g3

0x488d,	// (0x00018d66) fep_vkb_keypad_pane_g4_ParamLimits

0x488d,	// (0x00018d66) fep_vkb_keypad_pane_g4

0x48fc,	// (0x00018dd5) fep_vkb_bottom_pane_g2_ParamLimits

0x48fc,	// (0x00018dd5) fep_vkb_bottom_pane_g2

0x0001,

0xfb32,	// (0x0002400b) fep_vkb_bottom_pane_g_ParamLimits

0xfb32,	// (0x0002400b) fep_vkb_bottom_pane_g

0x457c,	// (0x00018a55) cell_vkb_side_pane_g2

0x0001,

0xfb3c,	// (0x00024015) cell_vkb_side_pane_g

0x4987,	// (0x00018e60) cell_vkb_side_pane_t1

0x4995,	// (0x00018e6e) cell_vkb_side_pane_t1_copy1

0x457c,	// (0x00018a55) bg_fep_vkb_candidate_pane_g2

0x4ac1,	// (0x00018f9a) cell_vkb_candidate_pane_ParamLimits

0x462e,	// (0x00018b07) aid_size_cell_vkb_ParamLimits

0x462e,	// (0x00018b07) aid_size_cell_vkb

0x4ac1,	// (0x00018f9a) cell_vkb_candidate_pane

0xeda3,	// (0x0002327c) bg_popup_fep_shadow_pane_g1

0xbcf1,	// (0x000201ca) fep_vkb_bottom_pane_ParamLimits

0xbcf1,	// (0x000201ca) fep_vkb_bottom_pane

0x46f2,	// (0x00018bcb) fep_vkb_candidate_pane_ParamLimits

0x46f2,	// (0x00018bcb) fep_vkb_candidate_pane

0xbd16,	// (0x000201ef) fep_vkb_keypad_pane_ParamLimits

0xbd16,	// (0x000201ef) fep_vkb_keypad_pane

0xbd4b,	// (0x00020224) fep_vkb_side_pane_ParamLimits

0xbd4b,	// (0x00020224) fep_vkb_side_pane

0xbd87,	// (0x00020260) fep_vkb_top_pane_ParamLimits

0xbd87,	// (0x00020260) fep_vkb_top_pane

0x47be,	// (0x00018c97) fep_vkb_top_pane_g1_ParamLimits

0x47be,	// (0x00018c97) fep_vkb_top_pane_g1

0x47cd,	// (0x00018ca6) fep_vkb_top_pane_g2_ParamLimits

0x47cd,	// (0x00018ca6) fep_vkb_top_pane_g2

0x47dc,	// (0x00018cb5) fep_vkb_top_pane_g3_ParamLimits

0x47dc,	// (0x00018cb5) fep_vkb_top_pane_g3

0x0003,

0xfb22,	// (0x00023ffb) fep_vkb_top_pane_g_ParamLimits

0xfb22,	// (0x00023ffb) fep_vkb_top_pane_g

0x47fa,	// (0x00018cd3) fep_vkb_top_text_pane_ParamLimits

0x47fa,	// (0x00018cd3) fep_vkb_top_text_pane

0xbdbc,	// (0x00020295) fep_vkb_side_pane_g1_ParamLimits

0xbdbc,	// (0x00020295) fep_vkb_side_pane_g1

0x4854,	// (0x00018d2d) grid_vkb_side_pane_ParamLimits

0x4854,	// (0x00018d2d) grid_vkb_side_pane

0xedab,	// (0x00023284) bg_popup_fep_shadow_pane_g2

0xedb4,	// (0x0002328d) bg_popup_fep_shadow_pane_g3

0xedbc,	// (0x00023295) bg_popup_fep_shadow_pane_g4

0xedc5,	// (0x0002329e) bg_popup_fep_shadow_pane_g5

0xedcf,	// (0x000232a8) bg_popup_fep_shadow_pane_g6

0xedd7,	// (0x000232b0) bg_popup_fep_shadow_pane_g7

0xc643,	// (0x00020b1c) bg_popup_fep_shadow_pane_g8

0x48ab,	// (0x00018d84) grid_vkb_keypad_number_pane_ParamLimits

0x48ab,	// (0x00018d84) grid_vkb_keypad_number_pane

0x48bb,	// (0x00018d94) grid_vkb_keypad_pane_ParamLimits

0x48bb,	// (0x00018d94) grid_vkb_keypad_pane

0x48e1,	// (0x00018dba) fep_vkb_bottom_pane_g1_ParamLimits

0x48e1,	// (0x00018dba) fep_vkb_bottom_pane_g1

0x490a,	// (0x00018de3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x490a,	// (0x00018de3) grid_vkb_keypad_bottom_left_pane

0x491f,	// (0x00018df8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x491f,	// (0x00018df8) grid_vkb_keypad_bottom_right_pane

0x4934,	// (0x00018e0d) fep_vkb_top_text_pane_g1

0xbe03,	// (0x000202dc) fep_vkb_top_text_pane_t1

0xbe15,	// (0x000202ee) cell_vkb_side_pane_ParamLimits

0xbe15,	// (0x000202ee) cell_vkb_side_pane

0x457c,	// (0x00018a55) cell_vkb_side_pane_g1

0x49a3,	// (0x00018e7c) cell_vkb_keypad_pane_ParamLimits

0x49a3,	// (0x00018e7c) cell_vkb_keypad_pane

0x4a18,	// (0x00018ef1) cell_vkb_keypad_pane_g1

0x0008,

0xfb4f,	// (0x00024028) bg_popup_fep_shadow_pane_g

0xede9,	// (0x000232c2) cell_hwr_side_pane_g1

0xede9,	// (0x000232c2) cell_hwr_side_pane_g2

0x4a22,	// (0x00018efb) cell_vkb_keypad_pane_t1

0xbe2b,	// (0x00020304) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbe2b,	// (0x00020304) cell_vkb_keypad_bottom_left_pane

0xbe40,	// (0x00020319) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbe40,	// (0x00020319) cell_vkb_keypad_bottom_right_pane

0x457c,	// (0x00018a55) cell_vkb_keypad_bottom_left_pane_g1

0x457c,	// (0x00018a55) cell_vkb_keypad_bottom_right_pane_g1

0x4a86,	// (0x00018f5f) cell_vkb_keypad_number_pane_ParamLimits

0x4a86,	// (0x00018f5f) cell_vkb_keypad_number_pane

0x4aa5,	// (0x00018f7e) cell_vkb_keypad_number_pane_g1

0x4aaf,	// (0x00018f88) cell_vkb_keypad_number_pane_g2

0x4ab8,	// (0x00018f91) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb41,	// (0x0002401a) cell_vkb_keypad_number_pane_g

0x4a22,	// (0x00018efb) cell_vkb_keypad_number_pane_t1

0x4adc,	// (0x00018fb5) fep_vkb_candidate_pane_g1

0x0001,

0xfb62,	// (0x0002403b) cell_hwr_side_pane_g

0x4af5,	// (0x00018fce) cell_hwr_side_pane_t1

0xedf3,	// (0x000232cc) cell_hwr_side_pane_t1_copy1

0xee01,	// (0x000232da) cell_hwr_candidate_pane_g1

0xee30,	// (0x00023309) cell_hwr_candidate_pane_t1

0x457c,	// (0x00018a55) cell_vkb_candidate_pane_g2

0x4b39,	// (0x00019012) cell_vkb_candidate_pane_t1

0xe895,	// (0x00022d6e) bg_popup_fep_shadow_pane_ParamLimits

0xe895,	// (0x00022d6e) bg_popup_fep_shadow_pane

0xecc8,	// (0x000231a1) bg_fep_hwr_top_pane_g4

0x45fc,	// (0x00018ad5) bg_hwr_side_pane_g1_ParamLimits

0x45fc,	// (0x00018ad5) bg_hwr_side_pane_g1

0x9359,	// (0x0001d832) cell_hwr_side_pane_ParamLimits

0x9359,	// (0x0001d832) cell_hwr_side_pane

0xed12,	// (0x000231eb) fep_hwr_write_pane_g1_ParamLimits

0xed12,	// (0x000231eb) fep_hwr_write_pane_g1

0xed1f,	// (0x000231f8) fep_hwr_write_pane_g2_ParamLimits

0xed1f,	// (0x000231f8) fep_hwr_write_pane_g2

0xed2c,	// (0x00023205) fep_hwr_write_pane_g3_ParamLimits

0xed2c,	// (0x00023205) fep_hwr_write_pane_g3

0x9379,	// (0x0001d852) fep_hwr_write_pane_g4_ParamLimits

0x9379,	// (0x0001d852) fep_hwr_write_pane_g4

0x0005,

0xfb0e,	// (0x00023fe7) fep_hwr_write_pane_g_ParamLimits

0xfb0e,	// (0x00023fe7) fep_hwr_write_pane_g

0xecc8,	// (0x000231a1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xecc8,	// (0x000231a1) bg_fep_hwr_candidate_pane_g2

0xed3a,	// (0x00023213) cell_hwr_candidate_pane_ParamLimits

0xed3a,	// (0x00023213) cell_hwr_candidate_pane

0xed7c,	// (0x00023255) fep_hwr_candidate_pane_g1_ParamLimits

0x465c,	// (0x00018b35) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x465c,	// (0x00018b35) bg_popup_fep_shadow_pane_cp2

0x47ec,	// (0x00018cc5) fep_vkb_top_pane_g4_ParamLimits

0x47ec,	// (0x00018cc5) fep_vkb_top_pane_g4

0x4832,	// (0x00018d0b) fep_vkb_side_pane_g2_ParamLimits

0x4832,	// (0x00018d0b) fep_vkb_side_pane_g2

0xa33e,	// (0x0001e817) list_setting_pane_t4_ParamLimits

0xa33e,	// (0x0001e817) list_setting_pane_t4

0xa3b8,	// (0x0001e891) list_setting_number_pane_t5_ParamLimits

0xa3b8,	// (0x0001e891) list_setting_number_pane_t5

0xe45b,	// (0x00022934) list_double_heading_pane_cp2_ParamLimits

0xe45b,	// (0x00022934) list_double_heading_pane_cp2

0x4b47,	// (0x00019020) list_double_heading_pane_g1_cp2_ParamLimits

0x4b47,	// (0x00019020) list_double_heading_pane_g1_cp2

0x4b53,	// (0x0001902c) list_double_heading_pane_g2_cp2_ParamLimits

0x4b53,	// (0x0001902c) list_double_heading_pane_g2_cp2

0x4b67,	// (0x00019040) list_double_heading_pane_t1_cp2_ParamLimits

0x4b67,	// (0x00019040) list_double_heading_pane_t1_cp2

0x4b7d,	// (0x00019056) list_double_heading_pane_t2_cp2_ParamLimits

0x4b7d,	// (0x00019056) list_double_heading_pane_t2_cp2

0xc0df,	// (0x000205b8) aid_value_unit2

0xe0a7,	// (0x00022580) popup_preview_fixed_window

0xc29b,	// (0x00020774) bg_popup_preview_window_pane_cp02

0x4b8f,	// (0x00019068) list_preview_fixed_pane

0x4bd5,	// (0x000190ae) list_empty_pane_fp_ParamLimits

0x4bd5,	// (0x000190ae) list_empty_pane_fp

0x4bd5,	// (0x000190ae) list_single_cale_day_pane_fp_ParamLimits

0x4bd5,	// (0x000190ae) list_single_cale_day_pane_fp

0x4bd5,	// (0x000190ae) list_single_graphic_heading_pane_fp_ParamLimits

0x4bd5,	// (0x000190ae) list_single_graphic_heading_pane_fp

0x4bd5,	// (0x000190ae) list_single_graphic_pane_fp_ParamLimits

0x4bd5,	// (0x000190ae) list_single_graphic_pane_fp

0x4bd5,	// (0x000190ae) list_single_heading_pane_fp_ParamLimits

0x4bd5,	// (0x000190ae) list_single_heading_pane_fp

0x4bd5,	// (0x000190ae) list_single_pane_fp_ParamLimits

0x4bd5,	// (0x000190ae) list_single_pane_fp

0x4beb,	// (0x000190c4) list_single_pane_fp_g1_ParamLimits

0x4beb,	// (0x000190c4) list_single_pane_fp_g1

0x4bf7,	// (0x000190d0) list_single_pane_fp_g2_ParamLimits

0x4bf7,	// (0x000190d0) list_single_pane_fp_g2

0x4c03,	// (0x000190dc) list_single_pane_fp_g3_ParamLimits

0x4c03,	// (0x000190dc) list_single_pane_fp_g3

0x4c17,	// (0x000190f0) list_single_pane_fp_g4_ParamLimits

0x4c17,	// (0x000190f0) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x0002404e) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x0002404e) list_single_pane_fp_g

0x4c23,	// (0x000190fc) list_single_pane_fp_t1_ParamLimits

0x4c23,	// (0x000190fc) list_single_pane_fp_t1

0x4c3a,	// (0x00019113) list_single_graphic_pane_fp_g1_ParamLimits

0x4c3a,	// (0x00019113) list_single_graphic_pane_fp_g1

0x4beb,	// (0x000190c4) list_single_graphic_pane_fp_g2_ParamLimits

0x4beb,	// (0x000190c4) list_single_graphic_pane_fp_g2

0x4bf7,	// (0x000190d0) list_single_graphic_pane_fp_g3_ParamLimits

0x4bf7,	// (0x000190d0) list_single_graphic_pane_fp_g3

0x4c03,	// (0x000190dc) list_single_graphic_pane_fp_g4_ParamLimits

0x4c03,	// (0x000190dc) list_single_graphic_pane_fp_g4

0x4c17,	// (0x000190f0) list_single_graphic_pane_fp_g5_ParamLimits

0x4c17,	// (0x000190f0) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x00024057) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x00024057) list_single_graphic_pane_fp_g

0x4c46,	// (0x0001911f) list_single_graphic_pane_fp_t1_ParamLimits

0x4c46,	// (0x0001911f) list_single_graphic_pane_fp_t1

0x4c3a,	// (0x00019113) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4c3a,	// (0x00019113) list_single_graphic_heading_pane_fp_g1

0x4beb,	// (0x000190c4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4beb,	// (0x000190c4) list_single_graphic_heading_pane_fp_g2

0x4bf7,	// (0x000190d0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4bf7,	// (0x000190d0) list_single_graphic_heading_pane_fp_g3

0x4c03,	// (0x000190dc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4c03,	// (0x000190dc) list_single_graphic_heading_pane_fp_g4

0x4c17,	// (0x000190f0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4c17,	// (0x000190f0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x00024057) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00024057) list_single_graphic_heading_pane_fp_g

0x4c5c,	// (0x00019135) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4c5c,	// (0x00019135) list_single_graphic_heading_pane_fp_t1

0x4c72,	// (0x0001914b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4c72,	// (0x0001914b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x00024062) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x00024062) list_single_graphic_heading_pane_fp_t

0x4c84,	// (0x0001915d) list_single_cale_day_pane_fp_g1_ParamLimits

0x4c84,	// (0x0001915d) list_single_cale_day_pane_fp_g1

0x4cbc,	// (0x00019195) list_single_cale_day_pane_fp_g2_ParamLimits

0x4cbc,	// (0x00019195) list_single_cale_day_pane_fp_g2

0x4cc8,	// (0x000191a1) list_single_cale_day_pane_fp_g3_ParamLimits

0x4cc8,	// (0x000191a1) list_single_cale_day_pane_fp_g3

0x4cf0,	// (0x000191c9) list_single_cale_day_pane_fp_g4_ParamLimits

0x4cf0,	// (0x000191c9) list_single_cale_day_pane_fp_g4

0x4d14,	// (0x000191ed) list_single_cale_day_pane_fp_g5_ParamLimits

0x4d14,	// (0x000191ed) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x00024067) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x00024067) list_single_cale_day_pane_fp_g

0x4d38,	// (0x00019211) list_single_cale_day_pane_fp_t1_ParamLimits

0x4d38,	// (0x00019211) list_single_cale_day_pane_fp_t1

0x4d5e,	// (0x00019237) list_single_cale_day_pane_fp_t2_ParamLimits

0x4d5e,	// (0x00019237) list_single_cale_day_pane_fp_t2

0x4d77,	// (0x00019250) list_single_cale_day_pane_fp_t3_ParamLimits

0x4d77,	// (0x00019250) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x00024072) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x00024072) list_single_cale_day_pane_fp_t

0x4beb,	// (0x000190c4) list_empty_pane_fp_g1_ParamLimits

0x4beb,	// (0x000190c4) list_empty_pane_fp_g1

0x4d90,	// (0x00019269) list_empty_pane_fp_t1

0x4d9e,	// (0x00019277) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x00024079) list_empty_pane_fp_t

0x4beb,	// (0x000190c4) list_single_heading_pane_fp_g1_ParamLimits

0x4beb,	// (0x000190c4) list_single_heading_pane_fp_g1

0x4bf7,	// (0x000190d0) list_single_heading_pane_fp_g2_ParamLimits

0x4bf7,	// (0x000190d0) list_single_heading_pane_fp_g2

0x4c03,	// (0x000190dc) list_single_heading_pane_fp_g3_ParamLimits

0x4c03,	// (0x000190dc) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x0002407e) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x0002407e) list_single_heading_pane_fp_g

0x4dac,	// (0x00019285) list_single_heading_pane_fp_t1_ParamLimits

0x4dac,	// (0x00019285) list_single_heading_pane_fp_t1

0x4dbe,	// (0x00019297) list_single_heading_pane_fp_t2_ParamLimits

0x4dbe,	// (0x00019297) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x00024085) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x00024085) list_single_heading_pane_fp_t

0xa68a,	// (0x0001eb63) aid_size_cell_fast

0xc27e,	// (0x00020757) soft_indicator_pane_cp1_t1

0xa693,	// (0x0001eb6c) cell_app_pane_cp2_ParamLimits

0xa693,	// (0x0001eb6c) cell_app_pane_cp2

0xec35,	// (0x0002310e) fep_hwr_candidate_drop_down_list_pane

0xed96,	// (0x0002326f) fep_hwr_candidate_pane_g3_ParamLimits

0xed96,	// (0x0002326f) fep_hwr_candidate_pane_g3

0xc87d,	// (0x00020d56) fep_hwr_candidate_pane_g4_ParamLimits

0xc87d,	// (0x00020d56) fep_hwr_candidate_pane_g4

0x0002,

0xfb1b,	// (0x00023ff4) fep_hwr_candidate_pane_g_ParamLimits

0xfb1b,	// (0x00023ff4) fep_hwr_candidate_pane_g

0x46e1,	// (0x00018bba) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x46e1,	// (0x00018bba) fep_vkb_candidate_drop_down_list_pane

0x4ae4,	// (0x00018fbd) fep_vkb_candidate_pane_g3

0x4aec,	// (0x00018fc5) fep_vkb_candidate_pane_g4

0x0002,

0xfb48,	// (0x00024021) fep_vkb_candidate_pane_g

0xee01,	// (0x000232da) cell_hwr_candidate_pane_g1_ParamLimits

0xee0f,	// (0x000232e8) cell_hwr_candidate_pane_g3_ParamLimits

0xee0f,	// (0x000232e8) cell_hwr_candidate_pane_g3

0x5be0,	// (0x0001a0b9) cell_hwr_candidate_pane_g4_ParamLimits

0x5be0,	// (0x0001a0b9) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x00024040) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x00024040) cell_hwr_candidate_pane_g

0x4b03,	// (0x00018fdc) cell_vkb_candidate_pane_g3_ParamLimits

0x4b03,	// (0x00018fdc) cell_vkb_candidate_pane_g3

0x4b1e,	// (0x00018ff7) cell_vkb_candidate_pane_g4_ParamLimits

0x4b1e,	// (0x00018ff7) cell_vkb_candidate_pane_g4

0xbe5b,	// (0x00020334) cell_app_pane_cp2_g1_ParamLimits

0xbe5b,	// (0x00020334) cell_app_pane_cp2_g1

0x4df2,	// (0x000192cb) cell_app_pane_cp2_g2_ParamLimits

0x4df2,	// (0x000192cb) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0002408a) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0002408a) cell_app_pane_cp2_g

0x4dfe,	// (0x000192d7) cell_app_pane_cp2_t1_ParamLimits

0x4dfe,	// (0x000192d7) cell_app_pane_cp2_t1

0xc58d,	// (0x00020a66) grid_highlight_pane_cp1_ParamLimits

0xc58d,	// (0x00020a66) grid_highlight_pane_cp1

0xee4e,	// (0x00023327) cell_hwr_candidate_pane_cp1_ParamLimits

0xee4e,	// (0x00023327) cell_hwr_candidate_pane_cp1

0xee01,	// (0x000232da) fep_hwr_candidate_drop_down_list_pane_g1

0xee6d,	// (0x00023346) fep_hwr_candidate_drop_down_list_pane_g2

0xee7a,	// (0x00023353) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0002408f) fep_hwr_candidate_drop_down_list_pane_g

0xee87,	// (0x00023360) fep_hwr_candidate_drop_down_list_scroll_pane

0xee90,	// (0x00023369) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xee90,	// (0x00023369) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xee9d,	// (0x00023376) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xee9d,	// (0x00023376) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xeeaa,	// (0x00023383) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xeeaa,	// (0x00023383) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xeeb7,	// (0x00023390) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xeeb7,	// (0x00023390) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xeed2,	// (0x000233ab) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xeed2,	// (0x000233ab) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xeeed,	// (0x000233c6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xeeed,	// (0x000233c6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xef08,	// (0x000233e1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xef08,	// (0x000233e1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xef23,	// (0x000233fc) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xef23,	// (0x000233fc) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x00024096) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x00024096) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4e10,	// (0x000192e9) cell_vkb_candidate_pane_cp1_ParamLimits

0x4e10,	// (0x000192e9) cell_vkb_candidate_pane_cp1

0x47ec,	// (0x00018cc5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x47ec,	// (0x00018cc5) fep_vkb_candidate_drop_down_list_pane_g1

0x4e30,	// (0x00019309) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4e30,	// (0x00019309) fep_vkb_candidate_drop_down_list_pane_g2

0x4e3d,	// (0x00019316) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4e3d,	// (0x00019316) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbce,	// (0x000240a7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbce,	// (0x000240a7) fep_vkb_candidate_drop_down_list_pane_g

0x4e4a,	// (0x00019323) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4e4a,	// (0x00019323) fep_vkb_candidate_drop_down_list_scroll_pane

0x4e57,	// (0x00019330) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4e57,	// (0x00019330) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4e64,	// (0x0001933d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4e64,	// (0x0001933d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4e70,	// (0x00019349) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4e70,	// (0x00019349) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4e7c,	// (0x00019355) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e7c,	// (0x00019355) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4e9d,	// (0x00019376) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4e9d,	// (0x00019376) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4ebe,	// (0x00019397) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4ebe,	// (0x00019397) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4edf,	// (0x000193b8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4edf,	// (0x000193b8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4f00,	// (0x000193d9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4f00,	// (0x000193d9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd5,	// (0x000240ae) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd5,	// (0x000240ae) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9a67,	// (0x0001df40) title_pane_g1_ParamLimits

0x9a7a,	// (0x0001df53) title_pane_g2_ParamLimits

0xf54e,	// (0x00023a27) title_pane_g_ParamLimits

0xe3f5,	// (0x000228ce) aid_call2_pane

0xe3fd,	// (0x000228d6) aid_call_pane

0xe405,	// (0x000228de) popup_clock_analogue_window_g1

0xe405,	// (0x000228de) popup_clock_analogue_window_g2

0xe40d,	// (0x000228e6) popup_clock_analogue_window_g3

0xe416,	// (0x000228ef) popup_clock_analogue_window_g4

0xc0f1,	// (0x000205ca) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00023bcc) popup_clock_analogue_window_g

0xe41e,	// (0x000228f7) popup_clock_analogue_window_t1

0xe47c,	// (0x00022955) clock_digital_number_pane_ParamLimits

0xe47c,	// (0x00022955) clock_digital_number_pane

0xe488,	// (0x00022961) clock_digital_number_pane_cp02_ParamLimits

0xe488,	// (0x00022961) clock_digital_number_pane_cp02

0xe494,	// (0x0002296d) clock_digital_number_pane_cp03_ParamLimits

0xe494,	// (0x0002296d) clock_digital_number_pane_cp03

0xe4a0,	// (0x00022979) clock_digital_number_pane_cp04_ParamLimits

0xe4a0,	// (0x00022979) clock_digital_number_pane_cp04

0xe4ac,	// (0x00022985) clock_digital_separator_pane_ParamLimits

0xe4ac,	// (0x00022985) clock_digital_separator_pane

0xe4b8,	// (0x00022991) popup_clock_digital_window_t1_ParamLimits

0xe4b8,	// (0x00022991) popup_clock_digital_window_t1

0xc0f1,	// (0x000205ca) clock_digital_number_pane_g1

0xc0f1,	// (0x000205ca) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00023bd7) clock_digital_number_pane_g

0xc0f1,	// (0x000205ca) clock_digital_separator_pane_g1

0xc0f1,	// (0x000205ca) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00023bd7) clock_digital_separator_pane_g

0xabdb,	// (0x0001f0b4) aid_fill_nsta_ParamLimits

0xad11,	// (0x0001f1ea) indicator_nsta_pane_ParamLimits

0x1813,	// (0x00015cec) popup_clock_analogue_window

0x1813,	// (0x00015cec) popup_clock_digital_window

0xc867,	// (0x00020d40) grid_indicator_nsta_pane_ParamLimits

0x3f23,	// (0x000183fc) clock_nsta_pane_t2

0x0001,

0xfa9b,	// (0x00023f74) clock_nsta_pane_t

0xe29a,	// (0x00022773) aid_size_max_handle

0x87ed,	// (0x0001ccc6) aid_size_min_handle

0x11e2,	// (0x000156bb) editor_scroll_pane

0x4f1b,	// (0x000193f4) ex_editor_pane

0xc6f2,	// (0x00020bcb) scroll_pane_cp13

0xc4cb,	// (0x000209a4) scroll_pane_cp14

0xe453,	// (0x0002292c) scroll_pane_cp36

0xa81e,	// (0x0001ecf7) list_single_graphic_hl_pane_cp2_ParamLimits

0xa81e,	// (0x0001ecf7) list_single_graphic_hl_pane_cp2

0xb863,	// (0x0001fd3c) list_single_graphic_hl_pane_ParamLimits

0xb863,	// (0x0001fd3c) list_single_graphic_hl_pane

0xbe79,	// (0x00020352) aid_size_min_hl_cp1

0x4f2c,	// (0x00019405) list_highlight_pane_cp34_ParamLimits

0x4f2c,	// (0x00019405) list_highlight_pane_cp34

0x4f3d,	// (0x00019416) list_single_graphic_hl_pane_g1_ParamLimits

0x4f3d,	// (0x00019416) list_single_graphic_hl_pane_g1

0xbe82,	// (0x0002035b) list_single_graphic_hl_pane_g2_ParamLimits

0xbe82,	// (0x0002035b) list_single_graphic_hl_pane_g2

0xbe82,	// (0x0002035b) list_single_graphic_hl_pane_g3_ParamLimits

0xbe82,	// (0x0002035b) list_single_graphic_hl_pane_g3

0x111b,	// (0x000155f4) list_single_graphic_hl_pane_g4_ParamLimits

0x111b,	// (0x000155f4) list_single_graphic_hl_pane_g4

0x4fbc,	// (0x00019495) list_single_graphic_hl_pane_g5_ParamLimits

0x4fbc,	// (0x00019495) list_single_graphic_hl_pane_g5

0x0004,

0xfbe6,	// (0x000240bf) list_single_graphic_hl_pane_g_ParamLimits

0xfbe6,	// (0x000240bf) list_single_graphic_hl_pane_g

0x27ea,	// (0x00016cc3) list_single_graphic_hl_pane_t1_ParamLimits

0x27ea,	// (0x00016cc3) list_single_graphic_hl_pane_t1

0x4f8c,	// (0x00019465) aid_size_min_hl_cp2

0x4f95,	// (0x0001946e) list_highlight_pane_cp34_cp2_ParamLimits

0x4f95,	// (0x0001946e) list_highlight_pane_cp34_cp2

0x4f3d,	// (0x00019416) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f3d,	// (0x00019416) list_single_graphic_hl_pane_g1_cp2

0x4fa2,	// (0x0001947b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4fa2,	// (0x0001947b) list_single_graphic_hl_pane_g2_cp2

0xbe8e,	// (0x00020367) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbe8e,	// (0x00020367) list_single_graphic_hl_pane_g3_cp2

0x111b,	// (0x000155f4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x111b,	// (0x000155f4) list_single_graphic_hl_pane_g4_cp2

0x4fbc,	// (0x00019495) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4fbc,	// (0x00019495) list_single_graphic_hl_pane_g5_cp2

0x889f,	// (0x0001cd78) control_pane_g4_ParamLimits

0x889f,	// (0x0001cd78) control_pane_g4

0x1524,	// (0x000159fd) bg_popup_sub_pane_cp10_ParamLimits

0x4586,	// (0x00018a5f) list_choice_list_pane_ParamLimits

0x4595,	// (0x00018a6e) scroll_pane_cp23

0xc29b,	// (0x00020774) bg_popup_preview_window_pane_cp02_ParamLimits

0x4b8f,	// (0x00019068) list_preview_fixed_pane_ParamLimits

0x4ba5,	// (0x0001907e) list_preview_fixed_pane_cp_ParamLimits

0x4ba5,	// (0x0001907e) list_preview_fixed_pane_cp

0x4bb1,	// (0x0001908a) popup_preview_fixed_window_g1_ParamLimits

0x4bb1,	// (0x0001908a) popup_preview_fixed_window_g1

0x4bbd,	// (0x00019096) popup_preview_fixed_window_g2_ParamLimits

0x4bbd,	// (0x00019096) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x00024047) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x00024047) popup_preview_fixed_window_g

0xe1d7,	// (0x000226b0) aid_navi_side_left_pane_ParamLimits

0xe1ec,	// (0x000226c5) aid_navi_side_right_pane_ParamLimits

0xe204,	// (0x000226dd) navi_icon_pane_stacon_ParamLimits

0xe218,	// (0x000226f1) navi_navi_pane_stacon_ParamLimits

0xe204,	// (0x000226dd) navi_text_pane_stacon_ParamLimits

0xdfcc,	// (0x000224a5) main_text_info_pane

0x4fe6,	// (0x000194bf) listscroll_text_info_pane

0x4fee,	// (0x000194c7) list_text_info_pane_ParamLimits

0x4fee,	// (0x000194c7) list_text_info_pane

0x4ffd,	// (0x000194d6) scroll_pane_cp24_ParamLimits

0x4ffd,	// (0x000194d6) scroll_pane_cp24

0xbe9c,	// (0x00020375) list_text_info_pane_t1_ParamLimits

0xbe9c,	// (0x00020375) list_text_info_pane_t1

0x8a1a,	// (0x0001cef3) popup_fast_swap2_window_ParamLimits

0x8a1a,	// (0x0001cef3) popup_fast_swap2_window

0x504f,	// (0x00019528) aid_size_cell_fast2

0xc0e7,	// (0x000205c0) bg_popup_window_pane_cp17

0x1fb3,	// (0x0001648c) heading_pane_cp2

0xc3cf,	// (0x000208a8) listscroll_fast2_pane

0x5059,	// (0x00019532) grid_fast2_pane

0x5063,	// (0x0001953c) listscroll_fast2_pane_g1

0x506b,	// (0x00019544) listscroll_fast2_pane_g2

0x0001,

0xfbf1,	// (0x000240ca) listscroll_fast2_pane_g

0xc6f2,	// (0x00020bcb) scroll_pane_cp26

0x5075,	// (0x0001954e) cell_fast2_pane_ParamLimits

0x5075,	// (0x0001954e) cell_fast2_pane

0x508a,	// (0x00019563) cell_fast2_pane_g1

0x5093,	// (0x0001956c) cell_fast2_pane_g2

0x509c,	// (0x00019575) cell_fast2_pane_g3

0x0002,

0xfbf6,	// (0x000240cf) cell_fast2_pane_g

0xc402,	// (0x000208db) grid_highlight_pane_cp9

0xe84f,	// (0x00022d28) main_eswt_pane_ParamLimits

0xe84f,	// (0x00022d28) main_eswt_pane

0x5012,	// (0x000194eb) list_single_text_info_pane

0x50a4,	// (0x0001957d) eswt_ctrl_button_pane

0x50a4,	// (0x0001957d) eswt_ctrl_canvas_pane

0xbeb8,	// (0x00020391) eswt_ctrl_combo_pane

0x50a4,	// (0x0001957d) eswt_ctrl_default_pane

0x50a4,	// (0x0001957d) eswt_ctrl_label_pane

0x50b4,	// (0x0001958d) eswt_ctrl_wait_pane

0xbec0,	// (0x00020399) eswt_shell_pane

0xc0e7,	// (0x000205c0) listscroll_eswt_app_pane

0x50dc,	// (0x000195b5) popup_eswt_tasktip_window_ParamLimits

0x50dc,	// (0x000195b5) popup_eswt_tasktip_window

0x1b87,	// (0x00016060) bg_popup_window_pane_cp18

0x50ed,	// (0x000195c6) eswt_control_pane_g1_ParamLimits

0x50ed,	// (0x000195c6) eswt_control_pane_g1

0x50fa,	// (0x000195d3) eswt_control_pane_g2_ParamLimits

0x50fa,	// (0x000195d3) eswt_control_pane_g2

0x5107,	// (0x000195e0) eswt_control_pane_g3_ParamLimits

0x5107,	// (0x000195e0) eswt_control_pane_g3

0x5114,	// (0x000195ed) eswt_control_pane_g4_ParamLimits

0x5114,	// (0x000195ed) eswt_control_pane_g4

0x0003,

0xfbfd,	// (0x000240d6) eswt_control_pane_g_ParamLimits

0xfbfd,	// (0x000240d6) eswt_control_pane_g

0xc58d,	// (0x00020a66) bg_button_pane_ParamLimits

0xc58d,	// (0x00020a66) bg_button_pane

0xc417,	// (0x000208f0) common_borders_pane_copy2_ParamLimits

0xc417,	// (0x000208f0) common_borders_pane_copy2

0x5121,	// (0x000195fa) control_button_pane_g1_ParamLimits

0x5121,	// (0x000195fa) control_button_pane_g1

0x512d,	// (0x00019606) control_button_pane_g2_ParamLimits

0x512d,	// (0x00019606) control_button_pane_g2

0x5139,	// (0x00019612) control_button_pane_g3_ParamLimits

0x5139,	// (0x00019612) control_button_pane_g3

0x0002,

0xfc06,	// (0x000240df) control_button_pane_g_ParamLimits

0xfc06,	// (0x000240df) control_button_pane_g

0x514d,	// (0x00019626) control_button_pane_t1

0x515b,	// (0x00019634) control_button_pane_t2

0x0001,

0xfc0d,	// (0x000240e6) control_button_pane_t

0x1a5b,	// (0x00015f34) bg_button_pane_g1

0x1a6b,	// (0x00015f44) bg_button_pane_g2

0x1a63,	// (0x00015f3c) bg_button_pane_g3

0x1a7b,	// (0x00015f54) bg_button_pane_g4

0x1a73,	// (0x00015f4c) bg_button_pane_g5

0x1a83,	// (0x00015f5c) bg_button_pane_g6

0x1a8b,	// (0x00015f64) bg_button_pane_g7

0x1a9b,	// (0x00015f74) bg_button_pane_g8

0x1a93,	// (0x00015f6c) bg_button_pane_g9

0x0008,

0xf85c,	// (0x00023d35) bg_button_pane_g

0x4541,	// (0x00018a1a) common_borders_pane_ParamLimits

0x4541,	// (0x00018a1a) common_borders_pane

0x50ed,	// (0x000195c6) eswt_control_pane_g1_copy1_ParamLimits

0x50ed,	// (0x000195c6) eswt_control_pane_g1_copy1

0x50fa,	// (0x000195d3) eswt_control_pane_g2_copy1_ParamLimits

0x50fa,	// (0x000195d3) eswt_control_pane_g2_copy1

0x5107,	// (0x000195e0) eswt_control_pane_g3_copy1_ParamLimits

0x5107,	// (0x000195e0) eswt_control_pane_g3_copy1

0x5114,	// (0x000195ed) eswt_control_pane_g4_copy1_ParamLimits

0x5114,	// (0x000195ed) eswt_control_pane_g4_copy1

0x457c,	// (0x00018a55) bg_eswt_ctrl_canvas_pane_g1

0x4541,	// (0x00018a1a) common_borders_pane_cp2_ParamLimits

0x4541,	// (0x00018a1a) common_borders_pane_cp2

0x4541,	// (0x00018a1a) common_borders_pane_cp3_ParamLimits

0x4541,	// (0x00018a1a) common_borders_pane_cp3

0x5169,	// (0x00019642) separator_horizontal_pane

0x5171,	// (0x0001964a) separator_vertical_pane

0x50ed,	// (0x000195c6) eswt_control_pane_g1_copy2_ParamLimits

0x50ed,	// (0x000195c6) eswt_control_pane_g1_copy2

0x50fa,	// (0x000195d3) eswt_control_pane_g2_copy2_ParamLimits

0x50fa,	// (0x000195d3) eswt_control_pane_g2_copy2

0x5107,	// (0x000195e0) eswt_control_pane_g3_copy2_ParamLimits

0x5107,	// (0x000195e0) eswt_control_pane_g3_copy2

0x5114,	// (0x000195ed) eswt_control_pane_g4_copy2_ParamLimits

0x5114,	// (0x000195ed) eswt_control_pane_g4_copy2

0xc0e7,	// (0x000205c0) common_borders_pane_cp4

0x517a,	// (0x00019653) separator_horizontal_pane_g1

0x5183,	// (0x0001965c) separator_horizontal_pane_g2

0x518c,	// (0x00019665) separator_horizontal_pane_g3

0x0002,

0xfc12,	// (0x000240eb) separator_horizontal_pane_g

0x50ed,	// (0x000195c6) eswt_control_pane_g1_copy3_ParamLimits

0x50ed,	// (0x000195c6) eswt_control_pane_g1_copy3

0x50fa,	// (0x000195d3) eswt_control_pane_g2_copy3_ParamLimits

0x50fa,	// (0x000195d3) eswt_control_pane_g2_copy3

0x5107,	// (0x000195e0) eswt_control_pane_g3_copy3_ParamLimits

0x5107,	// (0x000195e0) eswt_control_pane_g3_copy3

0x5114,	// (0x000195ed) eswt_control_pane_g4_copy3_ParamLimits

0x5114,	// (0x000195ed) eswt_control_pane_g4_copy3

0xc0e7,	// (0x000205c0) common_borders_pane_cp5

0x5195,	// (0x0001966e) separator_vertical_pane_g1

0x519e,	// (0x00019677) separator_vertical_pane_g2

0x51a7,	// (0x00019680) separator_vertical_pane_g3

0x0002,

0xfc19,	// (0x000240f2) separator_vertical_pane_g

0x50ed,	// (0x000195c6) eswt_control_pane_g1_copy4_ParamLimits

0x50ed,	// (0x000195c6) eswt_control_pane_g1_copy4

0x50fa,	// (0x000195d3) eswt_control_pane_g2_copy4_ParamLimits

0x50fa,	// (0x000195d3) eswt_control_pane_g2_copy4

0x5107,	// (0x000195e0) eswt_control_pane_g3_copy4_ParamLimits

0x5107,	// (0x000195e0) eswt_control_pane_g3_copy4

0x5114,	// (0x000195ed) eswt_control_pane_g4_copy4_ParamLimits

0x5114,	// (0x000195ed) eswt_control_pane_g4_copy4

0xbee0,	// (0x000203b9) eswt_ctrl_combo_button_pane

0xbee8,	// (0x000203c1) eswt_ctrl_input_pane

0xbef0,	// (0x000203c9) popup_choice_list_window_cp70

0xbef8,	// (0x000203d1) eswt_ctrl_input_pane_t1

0xc0e7,	// (0x000205c0) input_focus_pane_cp70

0x4541,	// (0x00018a1a) bg_button_pane_cp70_ParamLimits

0x4541,	// (0x00018a1a) bg_button_pane_cp70

0xbf06,	// (0x000203df) eswt_ctrl_combo_button_pane_g1

0x51de,	// (0x000196b7) wait_bar_pane_cp70

0x1b87,	// (0x00016060) bg_popup_window_pane_cp70_ParamLimits

0x1b87,	// (0x00016060) bg_popup_window_pane_cp70

0x51e6,	// (0x000196bf) popup_eswt_tasktip_window_t1

0x51fc,	// (0x000196d5) wait_bar_pane_cp71_ParamLimits

0x51fc,	// (0x000196d5) wait_bar_pane_cp71

0x5208,	// (0x000196e1) grid_eswt_app_pane

0xe2d8,	// (0x000227b1) scroll_pane_cp70

0xbf0e,	// (0x000203e7) cell_eswt_app_pane_ParamLimits

0xbf0e,	// (0x000203e7) cell_eswt_app_pane

0xbf38,	// (0x00020411) cell_eswt_app_pane_g1_ParamLimits

0xbf38,	// (0x00020411) cell_eswt_app_pane_g1

0xbf67,	// (0x00020440) cell_eswt_app_pane_g2_ParamLimits

0xbf67,	// (0x00020440) cell_eswt_app_pane_g2

0x0001,

0xfc20,	// (0x000240f9) cell_eswt_app_pane_g_ParamLimits

0xfc20,	// (0x000240f9) cell_eswt_app_pane_g

0xbf8b,	// (0x00020464) cell_eswt_app_pane_t1_ParamLimits

0xbf8b,	// (0x00020464) cell_eswt_app_pane_t1

0x52c6,	// (0x0001979f) grid_highlight_pane_cp70_ParamLimits

0x52c6,	// (0x0001979f) grid_highlight_pane_cp70

0x10b7,	// (0x00015590) set_content_pane_g1

0xab90,	// (0x0001f069) status_small_volume_pane

0x938e,	// (0x0001d867) status_small_volume_pane_g1

0x9396,	// (0x0001d86f) volume_small2_pane

0x939f,	// (0x0001d878) volume_small2_pane_g1

0x93a8,	// (0x0001d881) volume_small2_pane_g2

0x93b1,	// (0x0001d88a) volume_small2_pane_g3

0x93ba,	// (0x0001d893) volume_small2_pane_g4

0x93c3,	// (0x0001d89c) volume_small2_pane_g5

0x93cc,	// (0x0001d8a5) volume_small2_pane_g6

0x93d5,	// (0x0001d8ae) volume_small2_pane_g7

0x93de,	// (0x0001d8b7) volume_small2_pane_g8

0x93e7,	// (0x0001d8c0) volume_small2_pane_g9

0x93f0,	// (0x0001d8c9) volume_small2_pane_g10

0x0009,

0xfc25,	// (0x000240fe) volume_small2_pane_g

0x4934,	// (0x00018e0d) fep_vkb_top_text_pane_g1_ParamLimits

0xbe03,	// (0x000202dc) fep_vkb_top_text_pane_t1_ParamLimits

0x4bc9,	// (0x000190a2) popup_preview_fixed_window_g3_ParamLimits

0x4bc9,	// (0x000190a2) popup_preview_fixed_window_g3

0x90b7,	// (0x0001d590) popup_toolbar_trans_pane

0xb6bb,	// (0x0001fb94) aid_height_set_list_ParamLimits

0x2f30,	// (0x00017409) aid_size_parent_ParamLimits

0x1524,	// (0x000159fd) list_highlight_pane_cp2_ParamLimits

0x10b7,	// (0x00015590) set_content_pane_g1_ParamLimits

0xb875,	// (0x0001fd4e) list_single_image_pane_ParamLimits

0xb875,	// (0x0001fd4e) list_single_image_pane

0xbfbd,	// (0x00020496) aid_size_cell_image_ParamLimits

0xbfbd,	// (0x00020496) aid_size_cell_image

0xbfca,	// (0x000204a3) grid_single_image_pane_ParamLimits

0xbfca,	// (0x000204a3) grid_single_image_pane

0x4bf7,	// (0x000190d0) list_single_image_pane_g1_ParamLimits

0x4bf7,	// (0x000190d0) list_single_image_pane_g1

0x4c03,	// (0x000190dc) list_single_image_pane_g2_ParamLimits

0x4c03,	// (0x000190dc) list_single_image_pane_g2

0x0001,

0xfc3a,	// (0x00024113) list_single_image_pane_g_ParamLimits

0xfc3a,	// (0x00024113) list_single_image_pane_g

0x52ed,	// (0x000197c6) list_single_image_pane_t1_ParamLimits

0x52ed,	// (0x000197c6) list_single_image_pane_t1

0xbfd6,	// (0x000204af) cell_image_list_pane_ParamLimits

0xbfd6,	// (0x000204af) cell_image_list_pane

0xbfea,	// (0x000204c3) cell_image_list_pane_g1

0xbff3,	// (0x000204cc) cell_image_list_pane_g2

0x0001,

0xfc3f,	// (0x00024118) cell_image_list_pane_g

0xbffc,	// (0x000204d5) aid_size_cell_tb_trans_pane

0xc58d,	// (0x00020a66) bg_tb_trans_pane

0xc00e,	// (0x000204e7) grid_tb_trans_pane

0x1a5b,	// (0x00015f34) bg_tb_trans_pane_g1

0x1a6b,	// (0x00015f44) bg_tb_trans_pane_g2

0x1a63,	// (0x00015f3c) bg_tb_trans_pane_g3

0x1a7b,	// (0x00015f54) bg_tb_trans_pane_g4

0x1a73,	// (0x00015f4c) bg_tb_trans_pane_g5

0x1a9b,	// (0x00015f74) bg_tb_trans_pane_g6

0x1a93,	// (0x00015f6c) bg_tb_trans_pane_g7

0x1a83,	// (0x00015f5c) bg_tb_trans_pane_g8

0x1a8b,	// (0x00015f64) bg_tb_trans_pane_g9

0x0008,

0xfc44,	// (0x0002411d) bg_tb_trans_pane_g

0xc022,	// (0x000204fb) cell_toolbar_trans_pane_ParamLimits

0xc022,	// (0x000204fb) cell_toolbar_trans_pane

0x457c,	// (0x00018a55) cell_toolbar_trans_pane_g1

0xbb1a,	// (0x0001fff3) list_form2_midp_pane_t1

0xbb28,	// (0x00020001) list_form2_midp_pane_t2

0x0001,

0xfae1,	// (0x00023fba) list_form2_midp_pane_t

0x4110,	// (0x000185e9) scroll_pane_cp51_ParamLimits

0x4319,	// (0x000187f2) form2_midp_wait_pane_g1

0x4322,	// (0x000187fb) form2_midp_wait_pane_g2

0x432b,	// (0x00018804) form2_midp_wait_pane_g3

0x0002,

0xfaf6,	// (0x00023fcf) form2_midp_wait_pane_g

0xc157,	// (0x00020630) list_highlight_pane_cp21_ParamLimits

0x4373,	// (0x0001884c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4382,	// (0x0001885b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3137,	// (0x00017610) list_single_2graphic_im_pane_ParamLimits

0x3137,	// (0x00017610) list_single_2graphic_im_pane

0xc048,	// (0x00020521) list_single_2graphic_im_pane_g1_ParamLimits

0xc048,	// (0x00020521) list_single_2graphic_im_pane_g1

0xc059,	// (0x00020532) list_single_2graphic_im_pane_g2_ParamLimits

0xc059,	// (0x00020532) list_single_2graphic_im_pane_g2

0xc065,	// (0x0002053e) list_single_2graphic_im_pane_g3_ParamLimits

0xc065,	// (0x0002053e) list_single_2graphic_im_pane_g3

0x0003,

0xfc57,	// (0x00024130) list_single_2graphic_im_pane_g_ParamLimits

0xfc57,	// (0x00024130) list_single_2graphic_im_pane_g

0xc079,	// (0x00020552) list_single_2graphic_im_pane_t1_ParamLimits

0xc079,	// (0x00020552) list_single_2graphic_im_pane_t1

0x4bd5,	// (0x000190ae) list_single_graphic_2heading_pane_fp_ParamLimits

0x4bd5,	// (0x000190ae) list_single_graphic_2heading_pane_fp

0x4c3a,	// (0x00019113) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4c3a,	// (0x00019113) list_single_graphic_2heading_pane_fp_g1

0x4beb,	// (0x000190c4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4beb,	// (0x000190c4) list_single_graphic_2heading_pane_fp_g2

0x4bf7,	// (0x000190d0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4bf7,	// (0x000190d0) list_single_graphic_2heading_pane_fp_g3

0x4c03,	// (0x000190dc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4c03,	// (0x000190dc) list_single_graphic_2heading_pane_fp_g4

0x4c17,	// (0x000190f0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4c17,	// (0x000190f0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x00024057) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00024057) list_single_graphic_2heading_pane_fp_g

0x53e3,	// (0x000198bc) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x53e3,	// (0x000198bc) list_single_graphic_2heading_pane_fp_t1

0x4c72,	// (0x0001914b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4c72,	// (0x0001914b) list_single_graphic_2heading_pane_fp_t2

0x53f9,	// (0x000198d2) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x53f9,	// (0x000198d2) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc60,	// (0x00024139) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc60,	// (0x00024139) list_single_graphic_2heading_pane_fp_t

0x4608,	// (0x00018ae1) fep_hwr_write_pane_g5_ParamLimits

0x4608,	// (0x00018ae1) fep_hwr_write_pane_g5

0x4614,	// (0x00018aed) fep_hwr_write_pane_g6_ParamLimits

0x4614,	// (0x00018aed) fep_hwr_write_pane_g6

0xbec0,	// (0x00020399) eswt_shell_pane_ParamLimits

0x1b87,	// (0x00016060) bg_popup_window_pane_cp18_ParamLimits

0x2e50,	// (0x00017329) heading_pane_cp70

0x51e6,	// (0x000196bf) popup_eswt_tasktip_window_t1_ParamLimits

0xac36,	// (0x0001f10f) aid_touch_tab_arrow_left

0xac4c,	// (0x0001f125) aid_touch_tab_arrow_right

0x9a92,	// (0x0001df6b) title_pane_g3_ParamLimits

0x9a92,	// (0x0001df6b) title_pane_g3

0xc524,	// (0x000209fd) set_value_pane_g1

0x90b7,	// (0x0001d590) popup_toolbar_trans_pane_ParamLimits

0xbffc,	// (0x000204d5) aid_size_cell_tb_trans_pane_ParamLimits

0xc58d,	// (0x00020a66) bg_tb_trans_pane_ParamLimits

0xc00e,	// (0x000204e7) grid_tb_trans_pane_ParamLimits

0xc29b,	// (0x00020774) cont_note_pane_ParamLimits

0xc29b,	// (0x00020774) cont_note_pane

0xc417,	// (0x000208f0) cont_snote2_single_text_pane_ParamLimits

0xc417,	// (0x000208f0) cont_snote2_single_text_pane

0xc417,	// (0x000208f0) cont_snote2_single_graphic_pane_ParamLimits

0xc417,	// (0x000208f0) cont_snote2_single_graphic_pane

0x21c6,	// (0x0001669f) cont_note_wait_pane_ParamLimits

0x21c6,	// (0x0001669f) cont_note_wait_pane

0x21c6,	// (0x0001669f) cont_note_image_pane_ParamLimits

0x21c6,	// (0x0001669f) cont_note_image_pane

0x540f,	// (0x000198e8) popup_note2_window_g1_ParamLimits

0x540f,	// (0x000198e8) popup_note2_window_g1

0xc88a,	// (0x00020d63) popup_note2_window_t1_ParamLimits

0xc88a,	// (0x00020d63) popup_note2_window_t1

0xc8cf,	// (0x00020da8) popup_note2_window_t2_ParamLimits

0xc8cf,	// (0x00020da8) popup_note2_window_t2

0xc914,	// (0x00020ded) popup_note2_window_t3_ParamLimits

0xc914,	// (0x00020ded) popup_note2_window_t3

0x550f,	// (0x000199e8) popup_note2_window_t4_ParamLimits

0x550f,	// (0x000199e8) popup_note2_window_t4

0xc31f,	// (0x000207f8) popup_note2_window_t5_ParamLimits

0xc31f,	// (0x000207f8) popup_note2_window_t5

0x0004,

0xfc6c,	// (0x00024145) popup_note2_window_t_ParamLimits

0xfc6c,	// (0x00024145) popup_note2_window_t

0x553e,	// (0x00019a17) popup_note2_image_window_g1_ParamLimits

0x553e,	// (0x00019a17) popup_note2_image_window_g1

0xc959,	// (0x00020e32) popup_note2_image_window_g2_ParamLimits

0xc959,	// (0x00020e32) popup_note2_image_window_g2

0x0001,

0xfc77,	// (0x00024150) popup_note2_image_window_g_ParamLimits

0xfc77,	// (0x00024150) popup_note2_image_window_g

0x555c,	// (0x00019a35) popup_note2_image_window_t1_ParamLimits

0x555c,	// (0x00019a35) popup_note2_image_window_t1

0x5574,	// (0x00019a4d) popup_note2_image_window_t2_ParamLimits

0x5574,	// (0x00019a4d) popup_note2_image_window_t2

0x558c,	// (0x00019a65) popup_note2_image_window_t3_ParamLimits

0x558c,	// (0x00019a65) popup_note2_image_window_t3

0x0002,

0xfc7c,	// (0x00024155) popup_note2_image_window_t_ParamLimits

0xfc7c,	// (0x00024155) popup_note2_image_window_t

0x21d4,	// (0x000166ad) popup_note2_wait_window_g1_ParamLimits

0x21d4,	// (0x000166ad) popup_note2_wait_window_g1

0x21e0,	// (0x000166b9) popup_note2_wait_window_g2_ParamLimits

0x21e0,	// (0x000166b9) popup_note2_wait_window_g2

0x21ec,	// (0x000166c5) popup_note2_wait_window_g3_ParamLimits

0x21ec,	// (0x000166c5) popup_note2_wait_window_g3

0x0002,

0xf83e,	// (0x00023d17) popup_note2_wait_window_g_ParamLimits

0xf83e,	// (0x00023d17) popup_note2_wait_window_g

0x55a8,	// (0x00019a81) popup_note2_wait_window_t1_ParamLimits

0x55a8,	// (0x00019a81) popup_note2_wait_window_t1

0x55c6,	// (0x00019a9f) popup_note2_wait_window_t2_ParamLimits

0x55c6,	// (0x00019a9f) popup_note2_wait_window_t2

0x55e4,	// (0x00019abd) popup_note2_wait_window_t3_ParamLimits

0x55e4,	// (0x00019abd) popup_note2_wait_window_t3

0x55f6,	// (0x00019acf) popup_note2_wait_window_t4_ParamLimits

0x55f6,	// (0x00019acf) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x0002415c) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x0002415c) popup_note2_wait_window_t

0x5608,	// (0x00019ae1) wait_bar2_pane_ParamLimits

0x5608,	// (0x00019ae1) wait_bar2_pane

0x5620,	// (0x00019af9) popup_snote2_single_text_window_g1_ParamLimits

0x5620,	// (0x00019af9) popup_snote2_single_text_window_g1

0x5648,	// (0x00019b21) popup_snote2_single_text_window_t1_ParamLimits

0x5648,	// (0x00019b21) popup_snote2_single_text_window_t1

0x5694,	// (0x00019b6d) popup_snote2_single_text_window_t2_ParamLimits

0x5694,	// (0x00019b6d) popup_snote2_single_text_window_t2

0x56e0,	// (0x00019bb9) popup_snote2_single_text_window_t3_ParamLimits

0x56e0,	// (0x00019bb9) popup_snote2_single_text_window_t3

0x5721,	// (0x00019bfa) popup_snote2_single_text_window_t4_ParamLimits

0x5721,	// (0x00019bfa) popup_snote2_single_text_window_t4

0x5757,	// (0x00019c30) popup_snote2_single_text_window_t5_ParamLimits

0x5757,	// (0x00019c30) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x00024165) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x00024165) popup_snote2_single_text_window_t

0xc96b,	// (0x00020e44) popup_snote2_single_graphic_window_g1_ParamLimits

0xc96b,	// (0x00020e44) popup_snote2_single_graphic_window_g1

0x57aa,	// (0x00019c83) popup_snote2_single_graphic_window_g2_ParamLimits

0x57aa,	// (0x00019c83) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x00024170) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x00024170) popup_snote2_single_graphic_window_g

0x57d2,	// (0x00019cab) popup_snote2_single_graphic_window_t1_ParamLimits

0x57d2,	// (0x00019cab) popup_snote2_single_graphic_window_t1

0x581e,	// (0x00019cf7) popup_snote2_single_graphic_window_t2_ParamLimits

0x581e,	// (0x00019cf7) popup_snote2_single_graphic_window_t2

0x56e0,	// (0x00019bb9) popup_snote2_single_graphic_window_t3_ParamLimits

0x56e0,	// (0x00019bb9) popup_snote2_single_graphic_window_t3

0x5721,	// (0x00019bfa) popup_snote2_single_graphic_window_t4_ParamLimits

0x5721,	// (0x00019bfa) popup_snote2_single_graphic_window_t4

0x5757,	// (0x00019c30) popup_snote2_single_graphic_window_t5_ParamLimits

0x5757,	// (0x00019c30) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x00024175) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x00024175) popup_snote2_single_graphic_window_t

0x3fcd,	// (0x000184a6) clock_nsta_pane_cp2_t1

0x3fcd,	// (0x000184a6) clock_nsta_pane_cp2_t2

0x0001,

0xfab7,	// (0x00023f90) clock_nsta_pane_cp2_t

0xc59b,	// (0x00020a74) form_field_data_wide_pane_g1_ParamLimits

0xc5a7,	// (0x00020a80) form_field_data_wide_pane_g2_ParamLimits

0xc5a7,	// (0x00020a80) form_field_data_wide_pane_g2

0xc5b3,	// (0x00020a8c) form_field_data_wide_pane_g3_ParamLimits

0xc5b3,	// (0x00020a8c) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00023b4f) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00023b4f) form_field_data_wide_pane_g

0xba4b,	// (0x0001ff24) grid_touch_3_pane_ParamLimits

0xba4b,	// (0x0001ff24) grid_touch_3_pane

0xc993,	// (0x00020e6c) cell_touch_3_pane_ParamLimits

0xc993,	// (0x00020e6c) cell_touch_3_pane

0x457c,	// (0x00018a55) cell_touch_3_pane_g1

0x457c,	// (0x00018a55) cell_touch_3_pane_g2

0x0001,

0xfb3c,	// (0x00024015) cell_touch_3_pane_g

0xc351,	// (0x0002082a) cont_query_data_pane

0xc359,	// (0x00020832) cont_query_data_pane_cp1

0x5898,	// (0x00019d71) button_value_adjust_pane_cp7

0x58a0,	// (0x00019d79) query_popup_pane_cp3

0xe4e0,	// (0x000229b9) bg_popup_sub_pane_cp22_ParamLimits

0x880a,	// (0x0001cce3) navi_navi_volume_pane_cp2

0x8819,	// (0x0001ccf2) popup_side_volume_key_window_g2

0x8828,	// (0x0001cd01) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00023be5) popup_side_volume_key_window_g

0x8837,	// (0x0001cd10) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00023bec) popup_side_volume_key_window_t

0xa9e6,	// (0x0001eebf) popup_side_volume_key_window_ParamLimits

0xa15c,	// (0x0001e635) list_double_graphic_pane_g4_ParamLimits

0xa15c,	// (0x0001e635) list_double_graphic_pane_g4

0xb850,	// (0x0001fd29) list_single_2heading_msg_pane_ParamLimits

0xb850,	// (0x0001fd29) list_single_2heading_msg_pane

0xc9dc,	// (0x00020eb5) list_single_2heading_msg_pane_g1_ParamLimits

0xc9dc,	// (0x00020eb5) list_single_2heading_msg_pane_g1

0xc9e8,	// (0x00020ec1) list_single_2heading_msg_pane_g2_ParamLimits

0xc9e8,	// (0x00020ec1) list_single_2heading_msg_pane_g2

0xc9fb,	// (0x00020ed4) list_single_2heading_msg_pane_g3_ParamLimits

0xc9fb,	// (0x00020ed4) list_single_2heading_msg_pane_g3

0xca07,	// (0x00020ee0) list_single_2heading_msg_pane_g4_ParamLimits

0xca07,	// (0x00020ee0) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x00024180) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x00024180) list_single_2heading_msg_pane_g

0xca1f,	// (0x00020ef8) list_single_2heading_msg_pane_t1_ParamLimits

0xca1f,	// (0x00020ef8) list_single_2heading_msg_pane_t1

0xca47,	// (0x00020f20) list_single_2heading_msg_pane_t2_ParamLimits

0xca47,	// (0x00020f20) list_single_2heading_msg_pane_t2

0xcab2,	// (0x00020f8b) list_single_2heading_msg_pane_t3_ParamLimits

0xcab2,	// (0x00020f8b) list_single_2heading_msg_pane_t3

0x598f,	// (0x00019e68) list_single_2heading_msg_pane_t4_ParamLimits

0x598f,	// (0x00019e68) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x00024189) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x00024189) list_single_2heading_msg_pane_t

0xc105,	// (0x000205de) title_pane_g4_ParamLimits

0xc105,	// (0x000205de) title_pane_g4

0xe100,	// (0x000225d9) title_pane_stacon_g3_ParamLimits

0xe100,	// (0x000225d9) title_pane_stacon_g3

0x53a6,	// (0x0001987f) list_single_2graphic_im_pane_g4_ParamLimits

0x53a6,	// (0x0001987f) list_single_2graphic_im_pane_g4

0xb566,	// (0x0001fa3f) popup_side_volume_key_window_cp

0x3523,	// (0x000179fc) main_idle_act2_pane_t1

0xe93d,	// (0x00022e16) toolbar_button_pane_g10

0x9fe5,	// (0x0001e4be) popup_toolbar_window_cp1

0x3fbe,	// (0x00018497) clock_nsta_pane_cp_t1

0x3fbe,	// (0x00018497) clock_nsta_pane_cp_t2

0x0001,

0xfab2,	// (0x00023f8b) clock_nsta_pane_cp_t

0x880a,	// (0x0001cce3) navi_navi_volume_pane_cp2_ParamLimits

0xe4f6,	// (0x000229cf) popup_side_volume_key_window_g1_ParamLimits

0x8819,	// (0x0001ccf2) popup_side_volume_key_window_g2_ParamLimits

0x8828,	// (0x0001cd01) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00023be5) popup_side_volume_key_window_g_ParamLimits

0xec21,	// (0x000230fa) fep_hwr_aid_pane

0xecc8,	// (0x000231a1) bg_fep_hwr_top_pane_g4_ParamLimits

0x45d8,	// (0x00018ab1) fep_hwr_top_pane_g1_ParamLimits

0x45ea,	// (0x00018ac3) fep_hwr_top_pane_g2_ParamLimits

0xece8,	// (0x000231c1) fep_hwr_top_pane_g3_ParamLimits

0xfb07,	// (0x00023fe0) fep_hwr_top_pane_g_ParamLimits

0xecfd,	// (0x000231d6) fep_hwr_top_text_pane_ParamLimits

0x29d0,	// (0x00016ea9) aid_touch_tab_arrow_arrow_2

0x29d9,	// (0x00016eb2) aid_touch_tab_arrow_left_2

0xec35,	// (0x0002310e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xec6c,	// (0x00023145) fep_hwr_prediction_pane

0x4743,	// (0x00018c1c) fep_vkb_prediction_pane

0xbde3,	// (0x000202bc) fep_vkb_side_pane_g3_ParamLimits

0xbde3,	// (0x000202bc) fep_vkb_side_pane_g3

0xee01,	// (0x000232da) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xee6d,	// (0x00023346) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xee7a,	// (0x00023353) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x0002408f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xef3e,	// (0x00023417) fep_hwr_prediction_pane_g1

0xef48,	// (0x00023421) fep_hwr_prediction_pane_g2

0xef50,	// (0x00023429) fep_hwr_prediction_pane_g3

0xef58,	// (0x00023431) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x00024192) fep_hwr_prediction_pane_g

0x59b4,	// (0x00019e8d) fep_vkb_prediction_pane_g1

0x59be,	// (0x00019e97) fep_vkb_prediction_pane_g2

0x59c6,	// (0x00019e9f) fep_vkb_prediction_pane_g3

0x59ce,	// (0x00019ea7) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0002419b) fep_vkb_prediction_pane_g

0x928d,	// (0x0001d766) slider_set_pane_g3

0x92a1,	// (0x0001d77a) slider_set_pane_g4

0x92b9,	// (0x0001d792) slider_set_pane_g5

0x928d,	// (0x0001d766) slider_set_pane_g6

0x92cf,	// (0x0001d7a8) slider_set_pane_g7

0x3095,	// (0x0001756e) slider_form_pane_g3

0x309e,	// (0x00017577) slider_form_pane_g4

0x30a6,	// (0x0001757f) slider_form_pane_g5

0x3095,	// (0x0001756e) slider_form_pane_g6

0xb806,	// (0x0001fcdf) slider_form_pane_g7

0x3808,	// (0x00017ce1) slider_set_pane_vc_g3

0x3811,	// (0x00017cea) slider_set_pane_vc_g4

0x381a,	// (0x00017cf3) slider_set_pane_vc_g5

0x3808,	// (0x00017ce1) slider_set_pane_vc_g6

0x3823,	// (0x00017cfc) slider_set_pane_vc_g7

0x3c92,	// (0x0001816b) slider_form_pane_vc_g1

0x3c9b,	// (0x00018174) slider_form_pane_vc_g2

0x3ca4,	// (0x0001817d) slider_form_pane_vc_g3

0x3c92,	// (0x0001816b) slider_form_pane_vc_g4

0x3cad,	// (0x00018186) slider_form_pane_vc_g5

0x0004,

0xfa84,	// (0x00023f5d) slider_form_pane_vc_g

0xdfcc,	// (0x000224a5) main_idle_act3_pane

0x59d6,	// (0x00019eaf) ai3_links_pane

0xcb20,	// (0x00020ff9) popup_ai3_data_window_ParamLimits

0xcb20,	// (0x00020ff9) popup_ai3_data_window

0xc0e7,	// (0x000205c0) grid_ai3_links_pane

0xcb38,	// (0x00021011) cell_ai3_links_pane_ParamLimits

0xcb38,	// (0x00021011) cell_ai3_links_pane

0x5a0f,	// (0x00019ee8) bg_popup_sub_pane_cp11

0x5a1c,	// (0x00019ef5) cell_ai3_links_pane_g1

0xc0e7,	// (0x000205c0) bg_popup_sub_pane_cp12

0x5a41,	// (0x00019f1a) heading_ai3_data_pane

0x5a49,	// (0x00019f22) list_ai3_gene_pane

0x5a55,	// (0x00019f2e) popup_ai3_data_window_g1

0x5a5d,	// (0x00019f36) heading_ai3_data_pane_g1

0x5a65,	// (0x00019f3e) heading_ai3_data_pane_t1

0xcb52,	// (0x0002102b) list_double_ai3_gene_pane_ParamLimits

0xcb52,	// (0x0002102b) list_double_ai3_gene_pane

0x5a80,	// (0x00019f59) list_single_ai3_gene_pane_ParamLimits

0x5a80,	// (0x00019f59) list_single_ai3_gene_pane

0x4541,	// (0x00018a1a) list_highlight_pane_cp7_ParamLimits

0x4541,	// (0x00018a1a) list_highlight_pane_cp7

0x5a8d,	// (0x00019f66) list_single_a13_gene_pane_t1_ParamLimits

0x5a8d,	// (0x00019f66) list_single_a13_gene_pane_t1

0x5aa4,	// (0x00019f7d) list_single_ai3_gene_pane_g1

0x5aad,	// (0x00019f86) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x000241a4) list_single_ai3_gene_pane_g

0x5ab5,	// (0x00019f8e) list_double_ai3_gene_pane_g1_ParamLimits

0x5ab5,	// (0x00019f8e) list_double_ai3_gene_pane_g1

0xcb5f,	// (0x00021038) list_double_ai3_gene_pane_t1_ParamLimits

0xcb5f,	// (0x00021038) list_double_ai3_gene_pane_t1

0x5add,	// (0x00019fb6) list_double_ai3_gene_pane_t2_ParamLimits

0x5add,	// (0x00019fb6) list_double_ai3_gene_pane_t2

0x5af2,	// (0x00019fcb) list_double_ai3_gene_pane_t3_ParamLimits

0x5af2,	// (0x00019fcb) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x000241a9) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x000241a9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x58b1,	// (0x00019d8a) aid_size_min_col_2

0xc9c6,	// (0x00020e9f) aid_size_min_msg_ParamLimits

0xc9c6,	// (0x00020e9f) aid_size_min_msg

0xbdf7,	// (0x000202d0) fep_vkb_top_text_pane_g2_ParamLimits

0xbdf7,	// (0x000202d0) fep_vkb_top_text_pane_g2

0x0001,

0xfb37,	// (0x00024010) fep_vkb_top_text_pane_g_ParamLimits

0xfb37,	// (0x00024010) fep_vkb_top_text_pane_g

0xdfcc,	// (0x000224a5) main_hc_apps_shell_pane

0x5b0f,	// (0x00019fe8) grid_hc_apps_pane_ParamLimits

0x5b0f,	// (0x00019fe8) grid_hc_apps_pane

0x5b1e,	// (0x00019ff7) list_hc_apps_pane

0x5b26,	// (0x00019fff) scroll_pane_cp37_ParamLimits

0x5b26,	// (0x00019fff) scroll_pane_cp37

0xcb7b,	// (0x00021054) cell_hc_apps_pane_ParamLimits

0xcb7b,	// (0x00021054) cell_hc_apps_pane

0xcc39,	// (0x00021112) cell_hc_apps_pane_g1_ParamLimits

0xcc39,	// (0x00021112) cell_hc_apps_pane_g1

0x5c32,	// (0x0001a10b) cell_hc_apps_pane_g2_ParamLimits

0x5c32,	// (0x0001a10b) cell_hc_apps_pane_g2

0x5c4e,	// (0x0001a127) cell_hc_apps_pane_g3_ParamLimits

0x5c4e,	// (0x0001a127) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x000241b0) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x000241b0) cell_hc_apps_pane_g

0xcc66,	// (0x0002113f) cell_hc_apps_pane_t1_ParamLimits

0xcc66,	// (0x0002113f) cell_hc_apps_pane_t1

0xc29b,	// (0x00020774) grid_highlight_pane_cp10_ParamLimits

0xc29b,	// (0x00020774) grid_highlight_pane_cp10

0xcca4,	// (0x0002117d) list_single_hc_apps_pane_ParamLimits

0xcca4,	// (0x0002117d) list_single_hc_apps_pane

0xccd4,	// (0x000211ad) list_single_hc_apps_pane_g1

0xcced,	// (0x000211c6) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x000241b7) list_single_hc_apps_pane_g

0xcd06,	// (0x000211df) list_single_hc_apps_pane_g2_copy1

0xcd22,	// (0x000211fb) list_single_hc_apps_pane_t1

0xc157,	// (0x00020630) bg_set_opt_pane_cp_ParamLimits

0x8764,	// (0x0001cc3d) setting_slider_pane_t1_ParamLimits

0x877d,	// (0x0001cc56) setting_slider_pane_t2_ParamLimits

0x8797,	// (0x0001cc70) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00023a37) setting_slider_pane_t_ParamLimits

0x87af,	// (0x0001cc88) slider_set_pane_ParamLimits

0xe820,	// (0x00022cf9) control_pane_g5_ParamLimits

0xe820,	// (0x00022cf9) control_pane_g5

0xb688,	// (0x0001fb61) slider_set_pane_g1_ParamLimits

0xeb0f,	// (0x00022fe8) slider_set_pane_g2_ParamLimits

0x928d,	// (0x0001d766) slider_set_pane_g3_ParamLimits

0x92a1,	// (0x0001d77a) slider_set_pane_g4_ParamLimits

0x92b9,	// (0x0001d792) slider_set_pane_g5_ParamLimits

0x928d,	// (0x0001d766) slider_set_pane_g6_ParamLimits

0x92cf,	// (0x0001d7a8) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x00023e33) slider_set_pane_g_ParamLimits

0x1062,	// (0x0001553b) navi_icon_text_pane_ParamLimits

0xabff,	// (0x0001f0d8) aid_fill_nsta_2_ParamLimits

0xac36,	// (0x0001f10f) aid_touch_tab_arrow_left_ParamLimits

0xac4c,	// (0x0001f125) aid_touch_tab_arrow_right_ParamLimits

0xace7,	// (0x0001f1c0) clock_nsta_pane_ParamLimits

0x29b2,	// (0x00016e8b) navi_icon_pane_g1_ParamLimits

0x29be,	// (0x00016e97) navi_text_pane_t1_ParamLimits

0x40ce,	// (0x000185a7) navi_icon_text_pane_g1_ParamLimits

0x40da,	// (0x000185b3) navi_icon_text_pane_t1_ParamLimits

0xccd4,	// (0x000211ad) list_single_hc_apps_pane_g1_ParamLimits

0xcced,	// (0x000211c6) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x000241b7) list_single_hc_apps_pane_g_ParamLimits

0xcd06,	// (0x000211df) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcd22,	// (0x000211fb) list_single_hc_apps_pane_t1_ParamLimits

0x868c,	// (0x0001cb65) popup_toolbar2_fixed_window_ParamLimits

0x868c,	// (0x0001cb65) popup_toolbar2_fixed_window

0x90ad,	// (0x0001d586) popup_toolbar2_float_window

0xc0e7,	// (0x000205c0) bg_popup_sub_pane_cp27

0x5d8f,	// (0x0001a268) grid_toolbar2_float_pane

0xc0e7,	// (0x000205c0) bg_popup_sub_pane_cp26

0x5d8f,	// (0x0001a268) grid_toolbar2_fixed_pane

0xcd50,	// (0x00021229) cell_toolbar2_fixed_pane_ParamLimits

0xcd50,	// (0x00021229) cell_toolbar2_fixed_pane

0xcd6a,	// (0x00021243) cell_toolbar2_fixed_pane_g1

0x19b9,	// (0x00015e92) toolbar2_fixed_button_pane

0x1a5b,	// (0x00015f34) toolbar2_fixed_button_pane_g1

0x1a6b,	// (0x00015f44) toolbar2_fixed_button_pane_g2

0x1a63,	// (0x00015f3c) toolbar2_fixed_button_pane_g3

0x1a7b,	// (0x00015f54) toolbar2_fixed_button_pane_g4

0x1a73,	// (0x00015f4c) toolbar2_fixed_button_pane_g5

0x1a83,	// (0x00015f5c) toolbar2_fixed_button_pane_g6

0x1a8b,	// (0x00015f64) toolbar2_fixed_button_pane_g7

0x1a9b,	// (0x00015f74) toolbar2_fixed_button_pane_g8

0x1a93,	// (0x00015f6c) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x00023d35) toolbar2_fixed_button_pane_g

0x5db0,	// (0x0001a289) cell_toolbar2_float_pane_ParamLimits

0x5db0,	// (0x0001a289) cell_toolbar2_float_pane

0x5dc1,	// (0x0001a29a) cell_toolbar2_float_pane_g1

0x19b9,	// (0x00015e92) toolbar2_fixed_button_pane_cp

0xbcdf,	// (0x000201b8) fep_vkb_accented_list_pane_ParamLimits

0xbcdf,	// (0x000201b8) fep_vkb_accented_list_pane

0xede1,	// (0x000232ba) bg_popup_fep_shadow_pane_g9

0x11e2,	// (0x000156bb) bg_popup_fep_shadow_pane_cp3

0xc6d9,	// (0x00020bb2) list_accented_list_pane

0x5dca,	// (0x0001a2a3) list_single_accented_list_pane_ParamLimits

0x5dca,	// (0x0001a2a3) list_single_accented_list_pane

0x11e2,	// (0x000156bb) list_highlight_pane_cp10

0x5ddb,	// (0x0001a2b4) list_single_accented_list_pane_t1

0x8fd7,	// (0x0001d4b0) popup_slider_window_ParamLimits

0x8fd7,	// (0x0001d4b0) popup_slider_window

0x58a8,	// (0x00019d81) aid_indentation_list_msg

0xce5f,	// (0x00021338) bg_popup_window_pane_cp19

0x5efb,	// (0x0001a3d4) popup_slider_window_g1

0x5f17,	// (0x0001a3f0) popup_slider_window_g2

0x5f33,	// (0x0001a40c) popup_slider_window_g3

0x0005,

0xfce3,	// (0x000241bc) popup_slider_window_g

0x5f8f,	// (0x0001a468) popup_slider_window_t1

0x6003,	// (0x0001a4dc) small_volume_slider_vertical_pane

0x457c,	// (0x00018a55) small_volume_slider_vertical_pane_g1

0x457c,	// (0x00018a55) small_volume_slider_vertical_pane_g2

0x601f,	// (0x0001a4f8) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x000241ce) small_volume_slider_vertical_pane_g

0x85da,	// (0x0001cab3) area_side_right_pane_ParamLimits

0x85da,	// (0x0001cab3) area_side_right_pane

0x93f9,	// (0x0001d8d2) aid_size_side_button_ParamLimits

0x93f9,	// (0x0001d8d2) aid_size_side_button

0x9412,	// (0x0001d8eb) grid_sctrl_middle_pane_ParamLimits

0x9412,	// (0x0001d8eb) grid_sctrl_middle_pane

0xef69,	// (0x00023442) sctrl_sk_bottom_pane

0xef7a,	// (0x00023453) sctrl_sk_top_pane

0xef8c,	// (0x00023465) aid_touch_sctrl_top

0xef99,	// (0x00023472) bg_sctrl_sk_pane_ParamLimits

0xef99,	// (0x00023472) bg_sctrl_sk_pane

0xefa7,	// (0x00023480) sctrl_sk_top_pane_g1

0xefb4,	// (0x0002348d) sctrl_sk_top_pane_t1

0xef8c,	// (0x00023465) aid_touch_sctrl_bottom

0xef99,	// (0x00023472) bg_sctrl_sk_pane_cp_ParamLimits

0xef99,	// (0x00023472) bg_sctrl_sk_pane_cp

0xefcf,	// (0x000234a8) sctrl_sk_bottom_pane_g1

0xefb4,	// (0x0002348d) sctrl_sk_bottom_pane_t1

0x942c,	// (0x0001d905) cell_sctrl_middle_pane_ParamLimits

0x942c,	// (0x0001d905) cell_sctrl_middle_pane

0x943d,	// (0x0001d916) aid_touch_sctrl_middle_ParamLimits

0x943d,	// (0x0001d916) aid_touch_sctrl_middle

0x944a,	// (0x0001d923) bg_sctrl_middle_pane_ParamLimits

0x944a,	// (0x0001d923) bg_sctrl_middle_pane

0xf1c2,	// (0x0002369b) cell_sctrl_middle_pane_g1_ParamLimits

0xf1c2,	// (0x0002369b) cell_sctrl_middle_pane_g1

0x9458,	// (0x0001d931) cell_sctrl_middle_pane_g2_ParamLimits

0x9458,	// (0x0001d931) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x000241da) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x000241da) cell_sctrl_middle_pane_g

0x1a5b,	// (0x00015f34) bg_sctrl_middle_pane_g1

0x1a63,	// (0x00015f3c) bg_sctrl_middle_pane_g2

0x1a6b,	// (0x00015f44) bg_sctrl_middle_pane_g3

0x1a73,	// (0x00015f4c) bg_sctrl_middle_pane_g4

0x1a7b,	// (0x00015f54) bg_sctrl_middle_pane_g5

0x1a83,	// (0x00015f5c) bg_sctrl_middle_pane_g6

0x1a8b,	// (0x00015f64) bg_sctrl_middle_pane_g7

0x1a93,	// (0x00015f6c) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x000241df) bg_sctrl_middle_pane_g

0x1a9b,	// (0x00015f74) bg_sctrl_middle_pane_g8_copy1

0x1a5b,	// (0x00015f34) bg_sctrl_sk_pane_g1

0x1a6b,	// (0x00015f44) bg_sctrl_sk_pane_g2

0x1a63,	// (0x00015f3c) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x00023d35) bg_sctrl_sk_pane_g

0xc465,	// (0x0002093e) aid_size_touch_scroll_bar

0x1a7b,	// (0x00015f54) bg_sctrl_sk_pane_g4

0x1a73,	// (0x00015f4c) bg_sctrl_sk_pane_g5

0x1a83,	// (0x00015f5c) bg_sctrl_sk_pane_g6

0x1a8b,	// (0x00015f64) bg_sctrl_sk_pane_g7

0x1a9b,	// (0x00015f74) bg_sctrl_sk_pane_g8

0x1a93,	// (0x00015f6c) bg_sctrl_sk_pane_g9

0xe85d,	// (0x00022d36) popup_fep_china_hwr2_fs_candidate_window

0x8a77,	// (0x0001cf50) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8a77,	// (0x0001cf50) popup_fep_china_hwr2_fs_control_window

0xee01,	// (0x000232da) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x000241d5) sctrl_sk_top_pane_g

0xcf17,	// (0x000213f0) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcf17,	// (0x000213f0) aid_fep_china_hwr2_fs_cell

0xcf2b,	// (0x00021404) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcf2b,	// (0x00021404) bg_popup_fep_shadow_pane_cp4

0xcf42,	// (0x0002141b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcf42,	// (0x0002141b) bg_popup_fep_shadow_pane_cp5

0xcf54,	// (0x0002142d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcf54,	// (0x0002142d) popup_fep_china_hwr2_fs_control_bar_grid

0xe88d,	// (0x00022d66) popup_fep_china_hwr2_fs_control_funtion_grid

0x607b,	// (0x0001a554) aid_fep_china_hwr2_fs_candi_cell

0xc0e7,	// (0x000205c0) bg_popup_fep_shadow_pane_cp6

0x6085,	// (0x0001a55e) popup_fep_china_hwr2_fs_candidate_grid

0xcf68,	// (0x00021441) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcf68,	// (0x00021441) cell_fep_china_hwr2_fs_funtion_grid

0x457c,	// (0x00018a55) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x60a7,	// (0x0001a580) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x60a7,	// (0x0001a580) cell_fep_china_hwr2_fs_funtion_grid_g1

0x60b5,	// (0x0001a58e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x60b5,	// (0x0001a58e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x000241f0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x000241f0) cell_fep_china_hwr2_fs_funtion_grid_g

0xcf80,	// (0x00021459) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcf80,	// (0x00021459) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcf95,	// (0x0002146e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcf95,	// (0x0002146e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x000241f5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x000241f5) cell_fep_china_hwr2_fs_funtion_grid_t

0x60fc,	// (0x0001a5d5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6104,	// (0x0001a5dd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x610c,	// (0x0001a5e5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x000241fa) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6114,	// (0x0001a5ed) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6114,	// (0x0001a5ed) cell_fep_china_hwr2_fs_candidate_grid

0x612d,	// (0x0001a606) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6135,	// (0x0001a60e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x457c,	// (0x00018a55) cell_fep_china_hwr2_fs_candidate_grid_g1

0x457c,	// (0x00018a55) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3c,	// (0x00024015) cell_fep_china_hwr2_fs_candidate_grid_g

0x613d,	// (0x0001a616) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1632,	// (0x00015b0b) clock_nsta_pane_cp_24_ParamLimits

0x1632,	// (0x00015b0b) clock_nsta_pane_cp_24

0x16b0,	// (0x00015b89) indicator_nsta_pane_cp_24_ParamLimits

0x16b0,	// (0x00015b89) indicator_nsta_pane_cp_24

0x282e,	// (0x00016d07) heading_pane_g1

0x0001,

0xf8c1,	// (0x00023d9a) heading_pane_g

0x336c,	// (0x00017845) grid_sct_catagory_button_pane

0x339c,	// (0x00017875) scroll_pane_cp5_ParamLimits

0x411c,	// (0x000185f5) button_value_adjust_pane_cp5_ParamLimits

0x411c,	// (0x000185f5) button_value_adjust_pane_cp5

0x4216,	// (0x000186ef) form2_midp_time_pane_ParamLimits

0x614b,	// (0x0001a624) cell_sct_catagory_button_pane_ParamLimits

0x614b,	// (0x0001a624) cell_sct_catagory_button_pane

0x4541,	// (0x00018a1a) bg_button_pane_cp01_ParamLimits

0x4541,	// (0x00018a1a) bg_button_pane_cp01

0x457c,	// (0x00018a55) cell_sct_catagory_button_pane_g1

0x9050,	// (0x0001d529) popup_tb_extension_window

0xcfb1,	// (0x0002148a) aid_size_cell_ext_ParamLimits

0xcfb1,	// (0x0002148a) aid_size_cell_ext

0xc417,	// (0x000208f0) bg_tb_trans_pane_cp1_ParamLimits

0xc417,	// (0x000208f0) bg_tb_trans_pane_cp1

0xcfd7,	// (0x000214b0) grid_tb_ext_pane_ParamLimits

0xcfd7,	// (0x000214b0) grid_tb_ext_pane

0xd016,	// (0x000214ef) cell_tb_ext_pane_ParamLimits

0xd016,	// (0x000214ef) cell_tb_ext_pane

0xd03e,	// (0x00021517) cell_tb_ext_pane_g1_ParamLimits

0xd03e,	// (0x00021517) cell_tb_ext_pane_g1

0x61e1,	// (0x0001a6ba) cell_tb_ext_pane_t1

0xc29b,	// (0x00020774) list_highlight_pane_cp11_ParamLimits

0xc29b,	// (0x00020774) list_highlight_pane_cp11

0x86a1,	// (0x0001cb7a) popup_uni_indicator_window_ParamLimits

0x86a1,	// (0x0001cb7a) popup_uni_indicator_window

0xc58d,	// (0x00020a66) bg_popup_sub_pane_cp14

0xd05b,	// (0x00021534) list_uniindi_pane

0xd067,	// (0x00021540) uniindi_top_pane

0xc29b,	// (0x00020774) bg_uniindi_top_pane

0xd086,	// (0x0002155f) uniindi_top_pane_g1

0xd09c,	// (0x00021575) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x00024201) uniindi_top_pane_g

0xd0b9,	// (0x00021592) uniindi_top_pane_t1

0x6291,	// (0x0001a76a) list_single_uniindi_pane_ParamLimits

0x6291,	// (0x0001a76a) list_single_uniindi_pane

0x457c,	// (0x00018a55) bg_uniindi_top_pane_g1

0x62a3,	// (0x0001a77c) list_single_uniindi_pane_g1

0x62b6,	// (0x0001a78f) list_single_uniindi_pane_t1

0xdfcc,	// (0x000224a5) control_bg_pane

0x62db,	// (0x0001a7b4) bg_sctrl_sk_pane_cp1

0x62e4,	// (0x0001a7bd) bg_sctrl_sk_pane_cp2

0x62ed,	// (0x0001a7c6) control_bg_pane_g1

0x62f6,	// (0x0001a7cf) control_bg_pane_g2

0x0001,

0xfd31,	// (0x0002420a) control_bg_pane_g

0x3f62,	// (0x0001843b) cell_indicator_nsta_pane_g1_ParamLimits

0xba78,	// (0x0001ff51) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa0,	// (0x00023f79) cell_indicator_nsta_pane_g_ParamLimits

0x429e,	// (0x00018777) form2_midp_time_pane_t1_ParamLimits

0xe895,	// (0x00022d6e) main_idle_act4_pane_ParamLimits

0xe895,	// (0x00022d6e) main_idle_act4_pane

0x9050,	// (0x0001d529) popup_tb_extension_window_ParamLimits

0xcffc,	// (0x000214d5) tb_ext_find_pane_ParamLimits

0xcffc,	// (0x000214d5) tb_ext_find_pane

0x62ff,	// (0x0001a7d8) ai_gene_pane_1_cp1

0x1321,	// (0x000157fa) ai_gene_pane_2_cp1

0xd0e3,	// (0x000215bc) list_single_idle_plugin_calendar_pane

0x6310,	// (0x0001a7e9) list_single_idle_plugin_notification_pane

0x6319,	// (0x0001a7f2) list_single_idle_plugin_player_pane

0xd0ec,	// (0x000215c5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd0ec,	// (0x000215c5) list_single_idle_plugin_shortcut_pane

0xd114,	// (0x000215ed) main_idle_act4_pane_t1

0xd12b,	// (0x00021604) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x0002420f) main_idle_act4_pane_t

0xd142,	// (0x0002161b) middle_sk_idle_act4_pane_ParamLimits

0xd142,	// (0x0002161b) middle_sk_idle_act4_pane

0xd15e,	// (0x00021637) popup_clock_digital_analogue_window_cp2

0xd18a,	// (0x00021663) shortcut_wheel_idle_act4_pane_ParamLimits

0xd18a,	// (0x00021663) shortcut_wheel_idle_act4_pane

0x457c,	// (0x00018a55) shortcut_wheel_idle_act4_pane_g1

0x457c,	// (0x00018a55) shortcut_wheel_idle_act4_pane_g2

0x457c,	// (0x00018a55) shortcut_wheel_idle_act4_pane_g3

0x457c,	// (0x00018a55) shortcut_wheel_idle_act4_pane_g4

0x457c,	// (0x00018a55) shortcut_wheel_idle_act4_pane_g5

0x63ac,	// (0x0001a885) shortcut_wheel_idle_act4_pane_g6

0x63b4,	// (0x0001a88d) shortcut_wheel_idle_act4_pane_g7

0x63bc,	// (0x0001a895) shortcut_wheel_idle_act4_pane_g8

0x63c4,	// (0x0001a89d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x00024214) shortcut_wheel_idle_act4_pane_g

0xc0b7,	// (0x00020590) middle_sk_idle_act4_pane_g1_ParamLimits

0xc0b7,	// (0x00020590) middle_sk_idle_act4_pane_g1

0xd207,	// (0x000216e0) middle_sk_idle_act4_pane_g2_ParamLimits

0xd207,	// (0x000216e0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x00024237) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x00024237) middle_sk_idle_act4_pane_g

0xd21f,	// (0x000216f8) middle_sk_idle_act4_pane_t1_ParamLimits

0xd21f,	// (0x000216f8) middle_sk_idle_act4_pane_t1

0xd24e,	// (0x00021727) grid_ai_shortcut_pane_ParamLimits

0xd24e,	// (0x00021727) grid_ai_shortcut_pane

0xd26b,	// (0x00021744) list_highlight_pane_cp16_ParamLimits

0xd26b,	// (0x00021744) list_highlight_pane_cp16

0xd278,	// (0x00021751) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd278,	// (0x00021751) list_single_idle_plugin_shortcut_pane_g1

0xd284,	// (0x0002175d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd284,	// (0x0002175d) list_single_idle_plugin_shortcut_pane_g2

0xd2a0,	// (0x00021779) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd2a0,	// (0x00021779) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x0002423c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x0002423c) list_single_idle_plugin_shortcut_pane_g

0xd2b5,	// (0x0002178e) cell_ai_shortcut_pane_ParamLimits

0xd2b5,	// (0x0002178e) cell_ai_shortcut_pane

0xd2cb,	// (0x000217a4) cell_ai_shortcut_pane_g1_ParamLimits

0xd2cb,	// (0x000217a4) cell_ai_shortcut_pane_g1

0x62ff,	// (0x0001a7d8) ai_gene_pane_1_cp2

0x64f4,	// (0x0001a9cd) ai_gene_pane_2_cp2

0x64fc,	// (0x0001a9d5) list_highlight_pane_cp15

0xd2ed,	// (0x000217c6) list_single_idle_plugin_calendar_pane_g1

0x64fc,	// (0x0001a9d5) list_highlight_pane_cp17

0x650d,	// (0x0001a9e6) list_single_idle_plugin_calendar_pane_g1_copy1

0x6515,	// (0x0001a9ee) list_single_idle_plugin_player_pane_g1

0x35c5,	// (0x00017a9e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x00024243) list_single_idle_plugin_player_pane_g

0x651d,	// (0x0001a9f6) list_single_idle_plugin_player_pane_t1

0x652b,	// (0x0001aa04) list_single_idle_plugin_player_pane_t2

0x6539,	// (0x0001aa12) list_single_idle_plugin_player_pane_t3

0x6547,	// (0x0001aa20) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x00024248) list_single_idle_plugin_player_pane_t

0x6555,	// (0x0001aa2e) wait_bar_pane_cp15

0x655d,	// (0x0001aa36) grid_ai_notification_pane

0x35c5,	// (0x00017a9e) list_single_idle_plugin_notification_pane_g1

0xd2f5,	// (0x000217ce) cell_ai_notification_pane_ParamLimits

0xd2f5,	// (0x000217ce) cell_ai_notification_pane

0x6573,	// (0x0001aa4c) cell_ai_notification_pane_g1

0x657b,	// (0x0001aa54) cell_ai_notification_pane_t1

0xd302,	// (0x000217db) tb_ext_find_button_pane

0xd30a,	// (0x000217e3) tb_ext_find_pane_g1

0xd312,	// (0x000217eb) tb_ext_find_pane_t1

0xe405,	// (0x000228de) tb_ext_find_button_pane_g1

0xd320,	// (0x000217f9) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x00024251) tb_ext_find_button_pane_g

0xd114,	// (0x000215ed) main_idle_act4_pane_t1_ParamLimits

0xd12b,	// (0x00021604) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x0002420f) main_idle_act4_pane_t_ParamLimits

0xd15e,	// (0x00021637) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd176,	// (0x0002164f) sat_plugin_idle_act4_pane_ParamLimits

0xd176,	// (0x0002164f) sat_plugin_idle_act4_pane

0xd329,	// (0x00021802) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd329,	// (0x00021802) sat_plugin_idle_act4_pane_t1

0xd341,	// (0x0002181a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd341,	// (0x0002181a) sat_plugin_idle_act4_pane_t2

0xd359,	// (0x00021832) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd359,	// (0x00021832) sat_plugin_idle_act4_pane_t3

0xd371,	// (0x0002184a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd371,	// (0x0002184a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x00024256) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x00024256) sat_plugin_idle_act4_pane_t

0x861c,	// (0x0001caf5) popup_battery_window_ParamLimits

0x861c,	// (0x0001caf5) popup_battery_window

0xc29b,	// (0x00020774) bg_popup_sub_pane_cp25_ParamLimits

0xc29b,	// (0x00020774) bg_popup_sub_pane_cp25

0x65fc,	// (0x0001aad5) popup_battery_window_g1_ParamLimits

0x65fc,	// (0x0001aad5) popup_battery_window_g1

0x6608,	// (0x0001aae1) popup_battery_window_t1_ParamLimits

0x6608,	// (0x0001aae1) popup_battery_window_t1

0x661a,	// (0x0001aaf3) popup_battery_window_t2_ParamLimits

0x661a,	// (0x0001aaf3) popup_battery_window_t2

0x0001,

0xfd86,	// (0x0002425f) popup_battery_window_t_ParamLimits

0xfd86,	// (0x0002425f) popup_battery_window_t

0xaa39,	// (0x0001ef12) midp_canvas_pane_ParamLimits

0xaaab,	// (0x0001ef84) midp_keypad_pane_ParamLimits

0xaaab,	// (0x0001ef84) midp_keypad_pane

0x1524,	// (0x000159fd) main_midp_pane_ParamLimits

0xba85,	// (0x0001ff5e) signal_pane_g2_cp_ParamLimits

0xd389,	// (0x00021862) aid_size_cell_midp_keypad_ParamLimits

0xd389,	// (0x00021862) aid_size_cell_midp_keypad

0xd3a7,	// (0x00021880) midp_keyp_game_grid_pane_ParamLimits

0xd3a7,	// (0x00021880) midp_keyp_game_grid_pane

0xd3ce,	// (0x000218a7) midp_keyp_rocker_pane_ParamLimits

0xd3ce,	// (0x000218a7) midp_keyp_rocker_pane

0xd41f,	// (0x000218f8) midp_keyp_sk_left_pane_ParamLimits

0xd41f,	// (0x000218f8) midp_keyp_sk_left_pane

0xd473,	// (0x0002194c) midp_keyp_sk_right_pane_ParamLimits

0xd473,	// (0x0002194c) midp_keyp_sk_right_pane

0xc0e7,	// (0x000205c0) bg_button_pane_cp03

0xd4c7,	// (0x000219a0) midp_keyp_sk_left_pane_g1

0xc0e7,	// (0x000205c0) bg_button_pane_cp04

0xd4c7,	// (0x000219a0) midp_keyp_sk_right_pane_g1

0x457c,	// (0x00018a55) midp_keyp_rocker_pane_g1

0xd4d0,	// (0x000219a9) keyp_game_cell_pane_ParamLimits

0xd4d0,	// (0x000219a9) keyp_game_cell_pane

0xc0e7,	// (0x000205c0) bg_button_pane_cp02

0xd4f4,	// (0x000219cd) keyp_game_cell_pane_g1

0x863c,	// (0x0001cb15) popup_fep_vkb2_window_ParamLimits

0x863c,	// (0x0001cb15) popup_fep_vkb2_window

0x9464,	// (0x0001d93d) aid_size_cell_vkb2_ParamLimits

0x9464,	// (0x0001d93d) aid_size_cell_vkb2

0x94a2,	// (0x0001d97b) popup_fep_vkb2_window_g1_ParamLimits

0x94a2,	// (0x0001d97b) popup_fep_vkb2_window_g1

0x94f2,	// (0x0001d9cb) vkb2_area_bottom_pane_ParamLimits

0x94f2,	// (0x0001d9cb) vkb2_area_bottom_pane

0x9546,	// (0x0001da1f) vkb2_area_keypad_pane_ParamLimits

0x9546,	// (0x0001da1f) vkb2_area_keypad_pane

0x958e,	// (0x0001da67) vkb2_area_top_pane_ParamLimits

0x958e,	// (0x0001da67) vkb2_area_top_pane

0x9614,	// (0x0001daed) vkb2_top_entry_pane_ParamLimits

0x9614,	// (0x0001daed) vkb2_top_entry_pane

0x9641,	// (0x0001db1a) vkb2_top_grid_left_pane_ParamLimits

0x9641,	// (0x0001db1a) vkb2_top_grid_left_pane

0x9661,	// (0x0001db3a) vkb2_top_grid_right_pane_ParamLimits

0x9661,	// (0x0001db3a) vkb2_top_grid_right_pane

0xf000,	// (0x000234d9) vkb2_cell_keypad_pane_ParamLimits

0xf000,	// (0x000234d9) vkb2_cell_keypad_pane

0x96a7,	// (0x0001db80) vkb2_area_bottom_grid_pane_ParamLimits

0x96a7,	// (0x0001db80) vkb2_area_bottom_grid_pane

0x96d1,	// (0x0001dbaa) vkb2_area_bottom_pane_g1_ParamLimits

0x96d1,	// (0x0001dbaa) vkb2_area_bottom_pane_g1

0x96f7,	// (0x0001dbd0) vkb2_area_bottom_pane_g2_ParamLimits

0x96f7,	// (0x0001dbd0) vkb2_area_bottom_pane_g2

0x9728,	// (0x0001dc01) vkb2_area_bottom_pane_g3_ParamLimits

0x9728,	// (0x0001dc01) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x00024264) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x00024264) vkb2_area_bottom_pane_g

0xf0ad,	// (0x00023586) vkb2_top_cell_left_pane_ParamLimits

0xf0ad,	// (0x00023586) vkb2_top_cell_left_pane

0xd4fd,	// (0x000219d6) vkb2_top_entry_pane_g1_ParamLimits

0xd4fd,	// (0x000219d6) vkb2_top_entry_pane_g1

0xd50b,	// (0x000219e4) vkb2_top_entry_pane_t1_ParamLimits

0xd50b,	// (0x000219e4) vkb2_top_entry_pane_t1

0x67cb,	// (0x0001aca4) vkb2_top_entry_pane_t2_ParamLimits

0x67cb,	// (0x0001aca4) vkb2_top_entry_pane_t2

0x67fd,	// (0x0001acd6) vkb2_top_entry_pane_t3_ParamLimits

0x67fd,	// (0x0001acd6) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x0002426b) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x0002426b) vkb2_top_entry_pane_t

0x9792,	// (0x0001dc6b) vkb2_top_grid_right_pane_g1_ParamLimits

0x9792,	// (0x0001dc6b) vkb2_top_grid_right_pane_g1

0xf0fa,	// (0x000235d3) vkb2_top_grid_right_pane_g2_ParamLimits

0xf0fa,	// (0x000235d3) vkb2_top_grid_right_pane_g2

0xf112,	// (0x000235eb) vkb2_top_grid_right_pane_g3_ParamLimits

0xf112,	// (0x000235eb) vkb2_top_grid_right_pane_g3

0x97a8,	// (0x0001dc81) vkb2_top_grid_right_pane_g4_ParamLimits

0x97a8,	// (0x0001dc81) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x00024272) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x00024272) vkb2_top_grid_right_pane_g

0xf12a,	// (0x00023603) vkb2_top_cell_left_pane_g1

0xf141,	// (0x0002361a) vkb2_cell_keypad_pane_g1_ParamLimits

0xf141,	// (0x0002361a) vkb2_cell_keypad_pane_g1

0x6821,	// (0x0001acfa) vkb2_cell_keypad_pane_t1_ParamLimits

0x6821,	// (0x0001acfa) vkb2_cell_keypad_pane_t1

0xf14f,	// (0x00023628) vkb2_cell_bottom_grid_pane_ParamLimits

0xf14f,	// (0x00023628) vkb2_cell_bottom_grid_pane

0xf188,	// (0x00023661) vkb2_cell_bottom_grid_pane_g1

0xd1ab,	// (0x00021684) aid_call2_pane_cp02

0xd1b3,	// (0x0002168c) aid_call_pane_cp02

0xd1bb,	// (0x00021694) clock_digital_number_pane_cp10

0xd1c3,	// (0x0002169c) clock_digital_number_pane_cp11

0xd1cb,	// (0x000216a4) clock_digital_number_pane_cp12

0xd1d3,	// (0x000216ac) clock_digital_number_pane_cp13

0xd1db,	// (0x000216b4) clock_digital_separator_pane_cp10

0xe405,	// (0x000228de) popup_clock_digital_analogue_window_cp2_g1

0xe405,	// (0x000228de) popup_clock_digital_analogue_window_cp2_g2

0xd1e3,	// (0x000216bc) popup_clock_digital_analogue_window_cp2_g3

0xe405,	// (0x000228de) popup_clock_digital_analogue_window_cp2_g4

0xd1e3,	// (0x000216bc) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x00024227) popup_clock_digital_analogue_window_cp2_g

0xd1eb,	// (0x000216c4) popup_clock_digital_analogue_window_cp2_t1

0xd1f9,	// (0x000216d2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x00024232) popup_clock_digital_analogue_window_cp2_t

0x457c,	// (0x00018a55) clock_digital_number_pane_cp10_g1

0x457c,	// (0x00018a55) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3c,	// (0x00024015) clock_digital_number_pane_cp10_g

0x457c,	// (0x00018a55) clock_digital_separator_pane_cp10_g1

0x457c,	// (0x00018a55) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3c,	// (0x00024015) clock_digital_separator_pane_cp10_g

0xd0a8,	// (0x00021581) uniindi_top_pane_g3

0x625a,	// (0x0001a733) uniindi_top_pane_g4

0xf08b,	// (0x00023564) vkb2_row_keypad_pane_ParamLimits

0xf08b,	// (0x00023564) vkb2_row_keypad_pane

0xf1a4,	// (0x0002367d) vkb2_cell_t_keypad_pane_ParamLimits

0xf1a4,	// (0x0002367d) vkb2_cell_t_keypad_pane

0xf1d0,	// (0x000236a9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf1d0,	// (0x000236a9) vkb2_cell_t_keypad_pane_cp08

0xf1e3,	// (0x000236bc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf1e3,	// (0x000236bc) vkb2_cell_t_keypad_pane_cp09

0xf1f7,	// (0x000236d0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf1f7,	// (0x000236d0) vkb2_cell_t_keypad_pane_cp01

0xf208,	// (0x000236e1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf208,	// (0x000236e1) vkb2_cell_t_keypad_pane_cp02

0xf219,	// (0x000236f2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf219,	// (0x000236f2) vkb2_cell_t_keypad_pane_cp03

0xf22a,	// (0x00023703) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf22a,	// (0x00023703) vkb2_cell_t_keypad_pane_cp04

0xf23b,	// (0x00023714) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf23b,	// (0x00023714) vkb2_cell_t_keypad_pane_cp05

0xf24c,	// (0x00023725) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf24c,	// (0x00023725) vkb2_cell_t_keypad_pane_cp06

0xf25d,	// (0x00023736) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf25d,	// (0x00023736) vkb2_cell_t_keypad_pane_cp07

0xf26e,	// (0x00023747) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf26e,	// (0x00023747) vkb2_cell_t_keypad_pane_cp10

0xee01,	// (0x000232da) vkb2_cell_t_keypad_pane_g1

0x6838,	// (0x0001ad11) vkb2_cell_t_keypad_pane_t1

0xdfcc,	// (0x000224a5) popup_grid_graphic2_window

0xd544,	// (0x00021a1d) aid_size_cell_graphic2_ParamLimits

0xd544,	// (0x00021a1d) aid_size_cell_graphic2

0xd582,	// (0x00021a5b) bg_popup_window_pane_cp21_ParamLimits

0xd582,	// (0x00021a5b) bg_popup_window_pane_cp21

0xd590,	// (0x00021a69) graphic2_pages_pane_ParamLimits

0xd590,	// (0x00021a69) graphic2_pages_pane

0xd5e6,	// (0x00021abf) grid_graphic2_control_pane_ParamLimits

0xd5e6,	// (0x00021abf) grid_graphic2_control_pane

0xd62e,	// (0x00021b07) grid_graphic2_pane_ParamLimits

0xd62e,	// (0x00021b07) grid_graphic2_pane

0xd6b5,	// (0x00021b8e) cell_graphic2_pane

0xdfcc,	// (0x000224a5) main_comp_mode_pane

0x5a49,	// (0x00019f22) list_ai3_gene_pane_ParamLimits

0xce5f,	// (0x00021338) bg_popup_window_pane_cp19_ParamLimits

0x5e9d,	// (0x0001a376) bg_touch_area_indi_pane_ParamLimits

0x5e9d,	// (0x0001a376) bg_touch_area_indi_pane

0x5eb3,	// (0x0001a38c) bg_touch_area_indi_pane_cp01_ParamLimits

0x5eb3,	// (0x0001a38c) bg_touch_area_indi_pane_cp01

0x5ec9,	// (0x0001a3a2) bg_touch_area_indi_pane_cp02_ParamLimits

0x5ec9,	// (0x0001a3a2) bg_touch_area_indi_pane_cp02

0x5ee1,	// (0x0001a3ba) bg_touch_area_indi_pane_cp03_ParamLimits

0x5ee1,	// (0x0001a3ba) bg_touch_area_indi_pane_cp03

0x5efb,	// (0x0001a3d4) popup_slider_window_g1_ParamLimits

0x5f17,	// (0x0001a3f0) popup_slider_window_g2_ParamLimits

0x5f33,	// (0x0001a40c) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x000241bc) popup_slider_window_g_ParamLimits

0x5f8f,	// (0x0001a468) popup_slider_window_t1_ParamLimits

0x6003,	// (0x0001a4dc) small_volume_slider_vertical_pane_ParamLimits

0xd6b5,	// (0x00021b8e) cell_graphic2_pane_ParamLimits

0xd712,	// (0x00021beb) bg_button_pane_cp10_ParamLimits

0xd712,	// (0x00021beb) bg_button_pane_cp10

0xd725,	// (0x00021bfe) bg_button_pane_cp11_ParamLimits

0xd725,	// (0x00021bfe) bg_button_pane_cp11

0xd738,	// (0x00021c11) graphic2_pages_pane_g1_ParamLimits

0xd738,	// (0x00021c11) graphic2_pages_pane_g1

0xd753,	// (0x00021c2c) graphic2_pages_pane_g2_ParamLimits

0xd753,	// (0x00021c2c) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x00024280) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x00024280) graphic2_pages_pane_g

0xd76b,	// (0x00021c44) graphic2_pages_pane_t1_ParamLimits

0xd76b,	// (0x00021c44) graphic2_pages_pane_t1

0xd783,	// (0x00021c5c) cell_graphic2_control_pane_ParamLimits

0xd783,	// (0x00021c5c) cell_graphic2_control_pane

0xd7b5,	// (0x00021c8e) cell_graphic2_pane_g1_ParamLimits

0xd7b5,	// (0x00021c8e) cell_graphic2_pane_g1

0xc0c5,	// (0x0002059e) cell_graphic2_pane_g2_ParamLimits

0xc0c5,	// (0x0002059e) cell_graphic2_pane_g2

0xc87d,	// (0x00020d56) cell_graphic2_pane_g3_ParamLimits

0xc87d,	// (0x00020d56) cell_graphic2_pane_g3

0xc0d2,	// (0x000205ab) cell_graphic2_pane_g4_ParamLimits

0xc0d2,	// (0x000205ab) cell_graphic2_pane_g4

0xd7c2,	// (0x00021c9b) cell_graphic2_pane_g5_ParamLimits

0xd7c2,	// (0x00021c9b) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x00024285) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x00024285) cell_graphic2_pane_g

0xd7e2,	// (0x00021cbb) cell_graphic2_pane_t1_ParamLimits

0xd7e2,	// (0x00021cbb) cell_graphic2_pane_t1

0x2822,	// (0x00016cfb) grid_highlight_pane_cp11_ParamLimits

0x2822,	// (0x00016cfb) grid_highlight_pane_cp11

0xc29b,	// (0x00020774) bg_button_pane_cp05

0xd819,	// (0x00021cf2) cell_graphic2_control_pane_g1

0x457c,	// (0x00018a55) bg_touch_area_indi_pane_g1

0x6b08,	// (0x0001afe1) aid_cmod_rocker_key_size

0x6b12,	// (0x0001afeb) aid_cmode_itu_key_size

0x6b1c,	// (0x0001aff5) main_cmode_video_pane

0x6b26,	// (0x0001afff) main_comp_mode_itu_pane

0x6b32,	// (0x0001b00b) main_comp_mode_rocker_pane

0x6b3e,	// (0x0001b017) cell_cmode_rocker_pane_ParamLimits

0x6b3e,	// (0x0001b017) cell_cmode_rocker_pane

0x6b50,	// (0x0001b029) cell_cmode_itu_pane_ParamLimits

0x6b50,	// (0x0001b029) cell_cmode_itu_pane

0xc58d,	// (0x00020a66) bg_button_pane_cp06_ParamLimits

0xc58d,	// (0x00020a66) bg_button_pane_cp06

0x47ec,	// (0x00018cc5) cell_cmode_rocker_pane_g1_ParamLimits

0x47ec,	// (0x00018cc5) cell_cmode_rocker_pane_g1

0x60a7,	// (0x0001a580) cell_cmode_rocker_pane_g2_ParamLimits

0x60a7,	// (0x0001a580) cell_cmode_rocker_pane_g2

0x0001,

0xfdbc,	// (0x00024295) cell_cmode_rocker_pane_g_ParamLimits

0xfdbc,	// (0x00024295) cell_cmode_rocker_pane_g

0xc0e7,	// (0x000205c0) bg_button_pane_cp07

0x6b65,	// (0x0001b03e) cell_cmode_itu_pane_g1

0x6b6e,	// (0x0001b047) cell_cmode_itu_pane_t1

0x6b7c,	// (0x0001b055) cell_cmode_itu_pane_t2

0x0001,

0xfdc1,	// (0x0002429a) cell_cmode_itu_pane_t

0x62cb,	// (0x0001a7a4) aid_touch_ctrl_left

0x62d3,	// (0x0001a7ac) aid_touch_ctrl_right

0xc0e7,	// (0x000205c0) compa_mode_pane

0xd841,	// (0x00021d1a) aid_cmod_rocker_key_size_cp

0xd84b,	// (0x00021d24) aid_cmode_itu_key_size_cp

0x6b9e,	// (0x0001b077) compa_mode_pane_g1

0x6ba6,	// (0x0001b07f) compa_mode_pane_g2

0x6bae,	// (0x0001b087) compa_mode_pane_g3

0x0002,

0xfdc6,	// (0x0002429f) compa_mode_pane_g

0xd855,	// (0x00021d2e) main_comp_mode_itu_pane_cp

0xd85d,	// (0x00021d36) main_comp_mode_rocker_pane_cp

0xd865,	// (0x00021d3e) cell_cmode_itu_pane_cp_ParamLimits

0xd865,	// (0x00021d3e) cell_cmode_itu_pane_cp

0xd87a,	// (0x00021d53) cell_cmode_rocker_pane_cp_ParamLimits

0xd87a,	// (0x00021d53) cell_cmode_rocker_pane_cp

0xc58d,	// (0x00020a66) bg_button_pane_cp06_cp_ParamLimits

0xc58d,	// (0x00020a66) bg_button_pane_cp06_cp

0x47ec,	// (0x00018cc5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x47ec,	// (0x00018cc5) cell_cmode_rocker_pane_g1_cp

0x457c,	// (0x00018a55) cell_cmode_rocker_pane_g2_cp

0xc0e7,	// (0x000205c0) bg_button_pane_cp07_cp

0xd88c,	// (0x00021d65) cell_cmode_itu_pane_g1_cp

0xd895,	// (0x00021d6e) cell_cmode_itu_pane_t1_cp

0xd895,	// (0x00021d6e) cell_cmode_itu_pane_t2_cp

0xb7fc,	// (0x0001fcd5) settings_code_pane_cp2

0xc157,	// (0x00020630) bg_popup_window_pane_cp3_ParamLimits

0xc3b4,	// (0x0002088d) heading_pane_cp3_ParamLimits

0xc3c0,	// (0x00020899) listscroll_popup_graphic_pane_ParamLimits

0xec21,	// (0x000230fa) fep_hwr_aid_pane_ParamLimits

0xef8c,	// (0x00023465) aid_touch_sctrl_top_ParamLimits

0xefa7,	// (0x00023480) sctrl_sk_top_pane_g1_ParamLimits

0xee01,	// (0x000232da) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x000241d5) sctrl_sk_top_pane_g_ParamLimits

0xefb4,	// (0x0002348d) sctrl_sk_top_pane_t1_ParamLimits

0xef8c,	// (0x00023465) aid_touch_sctrl_bottom_ParamLimits

0xefb4,	// (0x0002348d) sctrl_sk_bottom_pane_t1_ParamLimits

0xd074,	// (0x0002154d) aid_area_touch_clock

0x95d6,	// (0x0001daaf) aid_vkb2_area_top_pane_cell_ParamLimits

0x95d6,	// (0x0001daaf) aid_vkb2_area_top_pane_cell

0x9681,	// (0x0001db5a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9681,	// (0x0001db5a) aid_vkb2_area_bottom_pane_cell

0x6783,	// (0x0001ac5c) popup_char_count_window

0x6c04,	// (0x0001b0dd) popup_char_count_window_g1

0x6c0d,	// (0x0001b0e6) popup_char_count_window_g2

0x6c16,	// (0x0001b0ef) popup_char_count_window_g3

0x0002,

0xfdcd,	// (0x000242a6) popup_char_count_window_g

0x6c1f,	// (0x0001b0f8) popup_char_count_window_t1

0xefe6,	// (0x000234bf) popup_fep_char_preview_window_ParamLimits

0xefe6,	// (0x000234bf) popup_fep_char_preview_window

0x95f6,	// (0x0001dacf) vkb2_top_candi_pane_ParamLimits

0x95f6,	// (0x0001dacf) vkb2_top_candi_pane

0xd8a3,	// (0x00021d7c) cell_vkb2_top_candi_pane_ParamLimits

0xd8a3,	// (0x00021d7c) cell_vkb2_top_candi_pane

0xf283,	// (0x0002375c) bg_popup_fep_char_preview_window_ParamLimits

0xf283,	// (0x0002375c) bg_popup_fep_char_preview_window

0xf291,	// (0x0002376a) popup_fep_char_preview_window_t1_ParamLimits

0xf291,	// (0x0002376a) popup_fep_char_preview_window_t1

0x6c7a,	// (0x0001b153) bg_popup_fep_char_preview_window_g1

0x6c82,	// (0x0001b15b) bg_popup_fep_char_preview_window_g2

0x6c8a,	// (0x0001b163) bg_popup_fep_char_preview_window_g3

0x6c92,	// (0x0001b16b) bg_popup_fep_char_preview_window_g4

0x6c9a,	// (0x0001b173) bg_popup_fep_char_preview_window_g5

0xf2cb,	// (0x000237a4) bg_popup_fep_char_preview_window_g6

0x6ca2,	// (0x0001b17b) bg_popup_fep_char_preview_window_g7

0x6caa,	// (0x0001b183) bg_popup_fep_char_preview_window_g8

0x6cb2,	// (0x0001b18b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd4,	// (0x000242ad) bg_popup_fep_char_preview_window_g

0xee01,	// (0x000232da) cell_vkb2_top_candi_pane_g1_ParamLimits

0xee01,	// (0x000232da) cell_vkb2_top_candi_pane_g1

0xee0f,	// (0x000232e8) cell_vkb2_top_candi_pane_g2_ParamLimits

0xee0f,	// (0x000232e8) cell_vkb2_top_candi_pane_g2

0x5be0,	// (0x0001a0b9) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5be0,	// (0x0001a0b9) cell_vkb2_top_candi_pane_g3

0xf2d3,	// (0x000237ac) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf2d3,	// (0x000237ac) cell_vkb2_top_candi_pane_g4

0x4e9d,	// (0x00019376) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4e9d,	// (0x00019376) cell_vkb2_top_candi_pane_g5

0xf1c2,	// (0x0002369b) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf1c2,	// (0x0002369b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde7,	// (0x000242c0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde7,	// (0x000242c0) cell_vkb2_top_candi_pane_g

0xf2f4,	// (0x000237cd) cell_vkb2_top_candi_pane_t1

0x9279,	// (0x0001d752) aid_size_touch_slider_mark_ParamLimits

0x9279,	// (0x0001d752) aid_size_touch_slider_mark

0xd5cc,	// (0x00021aa5) grid_graphic2_catg_pane_ParamLimits

0xd5cc,	// (0x00021aa5) grid_graphic2_catg_pane

0xd688,	// (0x00021b61) popup_grid_graphic2_window_t1_ParamLimits

0xd688,	// (0x00021b61) popup_grid_graphic2_window_t1

0xd69e,	// (0x00021b77) popup_grid_graphic2_window_t2_ParamLimits

0xd69e,	// (0x00021b77) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x0002427b) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x0002427b) popup_grid_graphic2_window_t

0xc29b,	// (0x00020774) bg_button_pane_cp05_ParamLimits

0xd819,	// (0x00021cf2) cell_graphic2_control_pane_g1_ParamLimits

0xd909,	// (0x00021de2) cell_graphic2_catg_pane_ParamLimits

0xd909,	// (0x00021de2) cell_graphic2_catg_pane

0xc0e7,	// (0x000205c0) bg_button_pane_cp12

0xd91b,	// (0x00021df4) cell_graphic2_catg_pane_g1

0x61e1,	// (0x0001a6ba) cell_tb_ext_pane_t1_ParamLimits

0xf0cd,	// (0x000235a6) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf0cd,	// (0x000235a6) vkb2_top_cell_right_narrow_pane

0xf0e5,	// (0x000235be) vkb2_top_cell_right_wide_pane_ParamLimits

0xf0e5,	// (0x000235be) vkb2_top_cell_right_wide_pane

0xe895,	// (0x00022d6e) bg_vkb2_func_pane_ParamLimits

0xe895,	// (0x00022d6e) bg_vkb2_func_pane

0xf12a,	// (0x00023603) vkb2_top_cell_left_pane_g1_ParamLimits

0xe895,	// (0x00022d6e) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe895,	// (0x00022d6e) bg_vkb2_fuc_pane_cp03

0xf188,	// (0x00023661) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1a63,	// (0x00015f3c) bg_vkb2_func_pane_g1

0x1a6b,	// (0x00015f44) bg_vkb2_func_pane_g2

0x1a7b,	// (0x00015f54) bg_vkb2_func_pane_g3

0x1a73,	// (0x00015f4c) bg_vkb2_func_pane_g4

0x1a83,	// (0x00015f5c) bg_vkb2_func_pane_g5

0x1a8b,	// (0x00015f64) bg_vkb2_func_pane_g6

0x1a93,	// (0x00015f6c) bg_vkb2_func_pane_g7

0x1a9b,	// (0x00015f74) bg_vkb2_func_pane_g8

0x1a5b,	// (0x00015f34) bg_vkb2_func_pane_g9

0x0008,

0xfdf4,	// (0x000242cd) bg_vkb2_func_pane_g

0xe895,	// (0x00022d6e) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe895,	// (0x00022d6e) bg_vkb2_fuc_pane_cp01

0xf12a,	// (0x00023603) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf12a,	// (0x00023603) vkb2_top_cell_right_wide_pane_g1

0xe895,	// (0x00022d6e) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe895,	// (0x00022d6e) bg_vkb2_fuc_pane_cp02

0xf188,	// (0x00023661) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf188,	// (0x00023661) vkb2_top_cell_right_narrow_pane_g1

0xcd9d,	// (0x00021276) aid_touch_area_decrease_ParamLimits

0xcd9d,	// (0x00021276) aid_touch_area_decrease

0xcdd3,	// (0x000212ac) aid_touch_area_increase_ParamLimits

0xcdd3,	// (0x000212ac) aid_touch_area_increase

0xcdfb,	// (0x000212d4) aid_touch_area_mute_ParamLimits

0xcdfb,	// (0x000212d4) aid_touch_area_mute

0xce2b,	// (0x00021304) aid_touch_area_slider_ParamLimits

0xce2b,	// (0x00021304) aid_touch_area_slider

0xce6b,	// (0x00021344) popup_slider_window_g4_ParamLimits

0xce6b,	// (0x00021344) popup_slider_window_g4

0xce93,	// (0x0002136c) popup_slider_window_g5_ParamLimits

0xce93,	// (0x0002136c) popup_slider_window_g5

0xcec7,	// (0x000213a0) popup_slider_window_g6_ParamLimits

0xcec7,	// (0x000213a0) popup_slider_window_g6

0x5fbd,	// (0x0001a496) popup_slider_window_t2_ParamLimits

0x5fbd,	// (0x0001a496) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x000241c9) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x000241c9) popup_slider_window_t

0xcee3,	// (0x000213bc) slider_pane_ParamLimits

0xcee3,	// (0x000213bc) slider_pane

0x6cd5,	// (0x0001b1ae) slider_pane_g1_ParamLimits

0x6cd5,	// (0x0001b1ae) slider_pane_g1

0x6ce9,	// (0x0001b1c2) slider_pane_g2_ParamLimits

0x6ce9,	// (0x0001b1c2) slider_pane_g2

0x6cff,	// (0x0001b1d8) slider_pane_g3_ParamLimits

0x6cff,	// (0x0001b1d8) slider_pane_g3

0x0003,

0xfe07,	// (0x000242e0) slider_pane_g_ParamLimits

0xfe07,	// (0x000242e0) slider_pane_g

0x9098,	// (0x0001d571) popup_tb_float_extension_window_ParamLimits

0x9098,	// (0x0001d571) popup_tb_float_extension_window

0x6d2b,	// (0x0001b204) aid_size_cell_tb_float_ext

0xc0e7,	// (0x000205c0) bg_popup_sub_window_cp28

0xd924,	// (0x00021dfd) grid_tb_float_ext_pane

0xd92e,	// (0x00021e07) cell_tb_float_ext_pane_ParamLimits

0xd92e,	// (0x00021e07) cell_tb_float_ext_pane

0xd948,	// (0x00021e21) cell_tb_float_ext_pane_g1

0xd951,	// (0x00021e2a) grid_highlight_pane_cp12

0x936c,	// (0x0001d845) cell_last_hwr_side_pane_ParamLimits

0x936c,	// (0x0001d845) cell_last_hwr_side_pane

0x457c,	// (0x00018a55) cell_last_hwr_side_pane_g1

0x6d6d,	// (0x0001b246) cell_last_hwr_side_pane_g2

0x0001,

0xfe10,	// (0x000242e9) cell_last_hwr_side_pane_g

0x975d,	// (0x0001dc36) vkb2_area_bottom_space_btn_pane_ParamLimits

0x975d,	// (0x0001dc36) vkb2_area_bottom_space_btn_pane

0xee01,	// (0x000232da) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6838,	// (0x0001ad11) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf2f4,	// (0x000237cd) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf313,	// (0x000237ec) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf313,	// (0x000237ec) vkb2_area_bottom_space_btn_pane_g1

0xf34d,	// (0x00023826) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf34d,	// (0x00023826) vkb2_area_bottom_space_btn_pane_g2

0xf383,	// (0x0002385c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf383,	// (0x0002385c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe15,	// (0x000242ee) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe15,	// (0x000242ee) vkb2_area_bottom_space_btn_pane_g

0xecd6,	// (0x000231af) cel_fep_hwr_func_pane_ParamLimits

0xecd6,	// (0x000231af) cel_fep_hwr_func_pane

0x9341,	// (0x0001d81a) cell_hwr_side_button_pane_ParamLimits

0x9341,	// (0x0001d81a) cell_hwr_side_button_pane

0xd074,	// (0x0002154d) aid_area_touch_clock_ParamLimits

0xc29b,	// (0x00020774) bg_uniindi_top_pane_ParamLimits

0xd086,	// (0x0002155f) uniindi_top_pane_g1_ParamLimits

0xd09c,	// (0x00021575) uniindi_top_pane_g2_ParamLimits

0xd0a8,	// (0x00021581) uniindi_top_pane_g3_ParamLimits

0x625a,	// (0x0001a733) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x00024201) uniindi_top_pane_g_ParamLimits

0xd0b9,	// (0x00021592) uniindi_top_pane_t1_ParamLimits

0xc29b,	// (0x00020774) bg_vkb2_func_pane_cp01_ParamLimits

0xc29b,	// (0x00020774) bg_vkb2_func_pane_cp01

0x6d76,	// (0x0001b24f) cel_fep_hwr_func_pane_g1_ParamLimits

0x6d76,	// (0x0001b24f) cel_fep_hwr_func_pane_g1

0xc29b,	// (0x00020774) bg_vkb2_func_pane_cp02_ParamLimits

0xc29b,	// (0x00020774) bg_vkb2_func_pane_cp02

0x6d76,	// (0x0001b24f) cell_hwr_side_button_pane_g1_ParamLimits

0x6d76,	// (0x0001b24f) cell_hwr_side_button_pane_g1

0x18bd,	// (0x00015d96) status_pane_g4_ParamLimits

0x18bd,	// (0x00015d96) status_pane_g4

0x18d7,	// (0x00015db0) status_pane_t1

0x42b1,	// (0x0001878a) form2_midp_gauge_slider_cont_pane

0x42b9,	// (0x00018792) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbbe3,	// (0x000200bc) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbbf5,	// (0x000200ce) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaef,	// (0x00023fc8) form2_midp_gauge_slider_pane_t_ParamLimits

0x42ef,	// (0x000187c8) form2_midp_slider_pane_ParamLimits

0xefd8,	// (0x000234b1) aid_size_cell_func_vkb2_ParamLimits

0xefd8,	// (0x000234b1) aid_size_cell_func_vkb2

0x6d17,	// (0x0001b1f0) slider_pane_g4_ParamLimits

0x6d17,	// (0x0001b1f0) slider_pane_g4

0x97be,	// (0x0001dc97) form2_midp_gauge_slider_pane_t2_cp01

0x97cc,	// (0x0001dca5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x97cc,	// (0x0001dca5) form2_midp_gauge_slider_pane_t3_cp01

0xf3cd,	// (0x000238a6) form2_midp_slider_pane_cp01

0xc0e7,	// (0x000205c0) navi_smil_pane

0x6daf,	// (0x0001b288) navi_smil_pane_g1

0x6db7,	// (0x0001b290) navi_smil_pane_t1

0x6d84,	// (0x0001b25d) form2_midp_slider_pane_g1

0x6d8d,	// (0x0001b266) form2_midp_slider_pane_g2

0x6d95,	// (0x0001b26e) form2_midp_slider_pane_g3

0x6d84,	// (0x0001b25d) form2_midp_slider_pane_g4

0xd95a,	// (0x00021e33) form2_midp_slider_pane_g5

0x0004,

0xfe1e,	// (0x000242f7) form2_midp_slider_pane_g

0xf3bd,	// (0x00023896) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf3bd,	// (0x00023896) vkb2_area_bottom_space_btn_pane_g4

0xad32,	// (0x0001f20b) lc0_navi_pane_ParamLimits

0xad32,	// (0x0001f20b) lc0_navi_pane

0xad9c,	// (0x0001f275) lc0_stat_indi_pane_ParamLimits

0xad9c,	// (0x0001f275) lc0_stat_indi_pane

0xadb1,	// (0x0001f28a) ls0_title_pane_ParamLimits

0xadb1,	// (0x0001f28a) ls0_title_pane

0xc58d,	// (0x00020a66) bg_popup_sub_pane_cp14_ParamLimits

0xd05b,	// (0x00021534) list_uniindi_pane_ParamLimits

0xd067,	// (0x00021540) uniindi_top_pane_ParamLimits

0x62a3,	// (0x0001a77c) list_single_uniindi_pane_g1_ParamLimits

0x62b6,	// (0x0001a78f) list_single_uniindi_pane_t1_ParamLimits

0x97e9,	// (0x0001dcc2) lc0_stat_clock_pane_ParamLimits

0x97e9,	// (0x0001dcc2) lc0_stat_clock_pane

0xd965,	// (0x00021e3e) lc0_stat_indi_pane_g1_ParamLimits

0xd965,	// (0x00021e3e) lc0_stat_indi_pane_g1

0xd972,	// (0x00021e4b) lc0_stat_indi_pane_g2_ParamLimits

0xd972,	// (0x00021e4b) lc0_stat_indi_pane_g2

0x0001,

0xfe29,	// (0x00024302) lc0_stat_indi_pane_g_ParamLimits

0xfe29,	// (0x00024302) lc0_stat_indi_pane_g

0x97f9,	// (0x0001dcd2) lc0_uni_indicator_pane_ParamLimits

0x97f9,	// (0x0001dcd2) lc0_uni_indicator_pane

0xd97f,	// (0x00021e58) ls0_title_pane_g1_ParamLimits

0xd97f,	// (0x00021e58) ls0_title_pane_g1

0xd993,	// (0x00021e6c) ls0_title_pane_t1_ParamLimits

0xd993,	// (0x00021e6c) ls0_title_pane_t1

0x9809,	// (0x0001dce2) lc0_uni_indicator_pane_g1_ParamLimits

0x9809,	// (0x0001dce2) lc0_uni_indicator_pane_g1

0x6e29,	// (0x0001b302) lc0_stat_clock_pane_t1

0xdfcc,	// (0x000224a5) main_ai5_pane

0x6e37,	// (0x0001b310) ai5_sk_pane_ParamLimits

0x6e37,	// (0x0001b310) ai5_sk_pane

0xd9c1,	// (0x00021e9a) cell_ai5_widget_pane_ParamLimits

0xd9c1,	// (0x00021e9a) cell_ai5_widget_pane

0xda2b,	// (0x00021f04) aid_size_cell_widget_grid

0x6f0e,	// (0x0001b3e7) bg_ai5_widget_pane_ParamLimits

0x6f0e,	// (0x0001b3e7) bg_ai5_widget_pane

0xda5f,	// (0x00021f38) cell_ai5_widget_pane_g2

0x6f92,	// (0x0001b46b) cell_ai5_widget_pane_g3

0x6fa9,	// (0x0001b482) cell_ai5_widget_pane_g4

0x6fb5,	// (0x0001b48e) cell_ai5_widget_pane_g5

0xda6f,	// (0x00021f48) cell_ai5_widget_pane_g6

0xda7b,	// (0x00021f54) cell_ai5_widget_pane_g7

0x7015,	// (0x0001b4ee) cell_ai5_widget_pane_t1_ParamLimits

0x7015,	// (0x0001b4ee) cell_ai5_widget_pane_t1

0x7032,	// (0x0001b50b) cell_ai5_widget_pane_t2_ParamLimits

0x7032,	// (0x0001b50b) cell_ai5_widget_pane_t2

0x704a,	// (0x0001b523) cell_ai5_widget_pane_t3_ParamLimits

0x704a,	// (0x0001b523) cell_ai5_widget_pane_t3

0xda87,	// (0x00021f60) cell_ai5_widget_pane_t4_ParamLimits

0xda87,	// (0x00021f60) cell_ai5_widget_pane_t4

0xdaa4,	// (0x00021f7d) cell_ai5_widget_pane_t5_ParamLimits

0xdaa4,	// (0x00021f7d) cell_ai5_widget_pane_t5

0x709e,	// (0x0001b577) cell_ai5_widget_pane_t6_ParamLimits

0x709e,	// (0x0001b577) cell_ai5_widget_pane_t6

0x70b0,	// (0x0001b589) cell_ai5_widget_pane_t7_ParamLimits

0x70b0,	// (0x0001b589) cell_ai5_widget_pane_t7

0x70c9,	// (0x0001b5a2) cell_ai5_widget_pane_t8_ParamLimits

0x70c9,	// (0x0001b5a2) cell_ai5_widget_pane_t8

0x0009,

0xfe43,	// (0x0002431c) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x0002431c) cell_ai5_widget_pane_t

0xdac3,	// (0x00021f9c) grid_ai5_widget_pane

0xc58d,	// (0x00020a66) highlight_cell_ai5_widget_pane_ParamLimits

0xc58d,	// (0x00020a66) highlight_cell_ai5_widget_pane

0xdadb,	// (0x00021fb4) ai5_sk_left_pane

0xdae5,	// (0x00021fbe) ai5_sk_middle_pane

0xdaef,	// (0x00021fc8) ai5_sk_right_pane

0x7149,	// (0x0001b622) bg_ai5_widget_pane_g1_ParamLimits

0x7149,	// (0x0001b622) bg_ai5_widget_pane_g1

0x7155,	// (0x0001b62e) bg_ai5_widget_pane_g2_ParamLimits

0x7155,	// (0x0001b62e) bg_ai5_widget_pane_g2

0x7161,	// (0x0001b63a) bg_ai5_widget_pane_g3_ParamLimits

0x7161,	// (0x0001b63a) bg_ai5_widget_pane_g3

0x716d,	// (0x0001b646) bg_ai5_widget_pane_g4_ParamLimits

0x716d,	// (0x0001b646) bg_ai5_widget_pane_g4

0x7179,	// (0x0001b652) bg_ai5_widget_pane_g5_ParamLimits

0x7179,	// (0x0001b652) bg_ai5_widget_pane_g5

0x7185,	// (0x0001b65e) bg_ai5_widget_pane_g6_ParamLimits

0x7185,	// (0x0001b65e) bg_ai5_widget_pane_g6

0x7191,	// (0x0001b66a) bg_ai5_widget_pane_g7_ParamLimits

0x7191,	// (0x0001b66a) bg_ai5_widget_pane_g7

0x719d,	// (0x0001b676) bg_ai5_widget_pane_g8_ParamLimits

0x719d,	// (0x0001b676) bg_ai5_widget_pane_g8

0x71a9,	// (0x0001b682) bg_ai5_widget_pane_g9_ParamLimits

0x71a9,	// (0x0001b682) bg_ai5_widget_pane_g9

0x0008,

0xfe58,	// (0x00024331) bg_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x00024331) bg_ai5_widget_pane_g

0xdb1f,	// (0x00021ff8) cell_shortcut_ai5_widget_pane_ParamLimits

0xdb1f,	// (0x00021ff8) cell_shortcut_ai5_widget_pane

0x11e2,	// (0x000156bb) bg_cell_shortcut_ai5_widget_pane

0x71ec,	// (0x0001b6c5) cell_grid_ai5_widget_pane_g1

0x11e2,	// (0x000156bb) highlight_cell_shortcut_ai5_widget_pane

0x1a63,	// (0x00015f3c) ai5_sk_left_pane_g1

0x71f5,	// (0x0001b6ce) ai5_sk_left_pane_g2

0x71fd,	// (0x0001b6d6) ai5_sk_left_pane_g3

0x7205,	// (0x0001b6de) ai5_sk_left_pane_g4

0x0003,

0xfe6b,	// (0x00024344) ai5_sk_left_pane_g

0x720d,	// (0x0001b6e6) ai5_sk_left_pane_t1

0x1a6b,	// (0x00015f44) ai5_sk_right_pane_g1

0x721b,	// (0x0001b6f4) ai5_sk_right_pane_g2

0x7223,	// (0x0001b6fc) ai5_sk_right_pane_g3

0x722b,	// (0x0001b704) ai5_sk_right_pane_g4

0x0003,

0xfe74,	// (0x0002434d) ai5_sk_right_pane_g

0x7233,	// (0x0001b70c) ai5_sk_right_pane_t1

0x1a6b,	// (0x00015f44) ai5_sk_middle_pane_g1

0x1a63,	// (0x00015f3c) ai5_sk_middle_pane_g2

0x1a83,	// (0x00015f5c) ai5_sk_middle_pane_g3

0x7223,	// (0x0001b6fc) ai5_sk_middle_pane_g4

0x71fd,	// (0x0001b6d6) ai5_sk_middle_pane_g5

0x7241,	// (0x0001b71a) ai5_sk_middle_pane_g6

0xdb30,	// (0x00022009) ai5_sk_middle_pane_g7

0x0006,

0xfe7d,	// (0x00024356) ai5_sk_middle_pane_g

0xac1e,	// (0x0001f0f7) aid_touch_area_size_lc0_ParamLimits

0xac1e,	// (0x0001f0f7) aid_touch_area_size_lc0

0xee30,	// (0x00023309) cell_hwr_candidate_pane_t1_ParamLimits

0x158e,	// (0x00015a67) aid_touch_navi_pane

0xaeaa,	// (0x0001f383) status_dt_navi_pane_ParamLimits

0xaeaa,	// (0x0001f383) status_dt_navi_pane

0xaec2,	// (0x0001f39b) status_dt_sta_pane_ParamLimits

0xaec2,	// (0x0001f39b) status_dt_sta_pane

0xdb38,	// (0x00022011) dt_sta_controll_pane

0xdb45,	// (0x0002201e) dt_sta_indi_pane

0xdb52,	// (0x0002202b) dt_sta_title_pane

0xc29b,	// (0x00020774) bg_dt_sta_indi_pane_ParamLimits

0xc29b,	// (0x00020774) bg_dt_sta_indi_pane

0xdb64,	// (0x0002203d) dt_sta_battery_pane

0xdb6c,	// (0x00022045) dt_sta_indi_pane_g1

0x7293,	// (0x0001b76c) dt_sta_indi_pane_g2

0x729c,	// (0x0001b775) dt_sta_indi_pane_g3

0x0002,

0xfe8c,	// (0x00024365) dt_sta_indi_pane_g

0x72a5,	// (0x0001b77e) dt_sta_signal_pane

0xc58d,	// (0x00020a66) bg_dt_sta_title_pane_ParamLimits

0xc58d,	// (0x00020a66) bg_dt_sta_title_pane

0x2982,	// (0x00016e5b) dt_sta_title_pane_g1

0xdb75,	// (0x0002204e) dt_sta_title_pane_t1_ParamLimits

0xdb75,	// (0x0002204e) dt_sta_title_pane_t1

0xc0e7,	// (0x000205c0) bg_dt_sta_control_pane

0xdb8a,	// (0x00022063) dt_sta_controll_pane_g1

0xdb93,	// (0x0002206c) bg_dt_sta_title_pane_g1

0xdb9c,	// (0x00022075) bg_dt_sta_title_pane_g2

0xdba5,	// (0x0002207e) bg_dt_sta_title_pane_g3

0x0002,

0xfe93,	// (0x0002436c) bg_dt_sta_title_pane_g

0x457c,	// (0x00018a55) bg_dt_sta_indi_pane_g1

0x72e7,	// (0x0001b7c0) dt_sta_signal_pane_g1

0x72ef,	// (0x0001b7c8) dt_sta_signal_pane_g2

0x0001,

0xfe9a,	// (0x00024373) dt_sta_signal_pane_g

0x72f7,	// (0x0001b7d0) dt_sta_battery_pane_g1

0x7300,	// (0x0001b7d9) dt_sta_battery_pane_t1

0x457c,	// (0x00018a55) bg_dt_sta_control_pane_g1

0xe51c,	// (0x000229f5) fep_china_uni_eep_pane

0xe524,	// (0x000229fd) fep_china_uni_entry_pane_ParamLimits

0xe534,	// (0x00022a0d) popup_fep_china_uni_window_g1_ParamLimits

0xe544,	// (0x00022a1d) popup_fep_china_uni_window_g2_ParamLimits

0xe544,	// (0x00022a1d) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00023bf1) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00023bf1) popup_fep_china_uni_window_g

0x730f,	// (0x0001b7e8) fep_china_uni_eep_pane_g1

0x7317,	// (0x0001b7f0) fep_china_uni_eep_pane_t1

0x6da6,	// (0x0001b27f) aid_touch_area_size_smil_player

0x16e4,	// (0x00015bbd) lc0_clock_pane

0x18cb,	// (0x00015da4) status_pane_g5_ParamLimits

0x18cb,	// (0x00015da4) status_pane_g5

0x8bce,	// (0x0001d0a7) popup_keymap_window

0x1889,	// (0x00015d62) status_icon_pane

0x6f92,	// (0x0001b46b) cell_ai5_widget_pane_g3_ParamLimits

0x6fa9,	// (0x0001b482) cell_ai5_widget_pane_g4_ParamLimits

0x6fb5,	// (0x0001b48e) cell_ai5_widget_pane_g5_ParamLimits

0x6fd9,	// (0x0001b4b2) cell_ai5_widget_pane_g8_ParamLimits

0x6fd9,	// (0x0001b4b2) cell_ai5_widget_pane_g8

0x6fed,	// (0x0001b4c6) cell_ai5_widget_pane_g9_ParamLimits

0x6fed,	// (0x0001b4c6) cell_ai5_widget_pane_g9

0x7001,	// (0x0001b4da) cell_ai5_widget_pane_g10_ParamLimits

0x7001,	// (0x0001b4da) cell_ai5_widget_pane_g10

0x7326,	// (0x0001b7ff) status_icon_pane_g1

0xc0e7,	// (0x000205c0) bg_popup_sub_pane_cp13

0x732e,	// (0x0001b807) popup_keymap_window_t1

0xabac,	// (0x0001f085) control_pane_g6_ParamLimits

0xabac,	// (0x0001f085) control_pane_g6

0xabb9,	// (0x0001f092) control_pane_g7_ParamLimits

0xabb9,	// (0x0001f092) control_pane_g7

0xabc6,	// (0x0001f09f) control_pane_g8_ParamLimits

0xabc6,	// (0x0001f09f) control_pane_g8

0xdb38,	// (0x00022011) dt_sta_controll_pane_ParamLimits

0xdb45,	// (0x0002201e) dt_sta_indi_pane_ParamLimits

0xdb52,	// (0x0002202b) dt_sta_title_pane_ParamLimits

0xc46e,	// (0x00020947) aid_size_touch_scroll_bar_cale

0x8630,	// (0x0001cb09) popup_discreet_window_ParamLimits

0x8630,	// (0x0001cb09) popup_discreet_window

0x8682,	// (0x0001cb5b) popup_sk_window

0x21c6,	// (0x0001669f) bg_popup_sub_pane_cp28_ParamLimits

0x21c6,	// (0x0001669f) bg_popup_sub_pane_cp28

0x733c,	// (0x0001b815) popup_discreet_window_g1_ParamLimits

0x733c,	// (0x0001b815) popup_discreet_window_g1

0xdbae,	// (0x00022087) popup_discreet_window_t1_ParamLimits

0xdbae,	// (0x00022087) popup_discreet_window_t1

0x737a,	// (0x0001b853) popup_discreet_window_t2_ParamLimits

0x737a,	// (0x0001b853) popup_discreet_window_t2

0x0002,

0xfe9f,	// (0x00024378) popup_discreet_window_t_ParamLimits

0xfe9f,	// (0x00024378) popup_discreet_window_t

0xf3d6,	// (0x000238af) popup_sk_window_g1

0xf3e0,	// (0x000238b9) popup_sk_window_g2

0x0001,

0xfea6,	// (0x0002437f) popup_sk_window_g

0x9834,	// (0x0001dd0d) popup_sk_window_t1

0x9842,	// (0x0001dd1b) popup_sk_window_t1_copy1

0xda5f,	// (0x00021f38) cell_ai5_widget_pane_g2_ParamLimits

0x70db,	// (0x0001b5b4) cell_ai5_widget_pane_t9_ParamLimits

0x70db,	// (0x0001b5b4) cell_ai5_widget_pane_t9

0xc0e7,	// (0x000205c0) main_fep_fshwr2_pane

0x9850,	// (0x0001dd29) aid_fshwr2_btn_pane

0x9862,	// (0x0001dd3b) aid_fshwr2_syb_pane

0x9874,	// (0x0001dd4d) aid_fshwr2_txt_pane

0x9883,	// (0x0001dd5c) fshwr2_func_candi_pane

0x98a2,	// (0x0001dd7b) fshwr2_hwr_syb_pane

0x98bd,	// (0x0001dd96) fshwr2_icf_pane

0xdfcc,	// (0x000224a5) fshwr2_icf_bg_pane

0xf3ea,	// (0x000238c3) fshwr2_icf_pane_t1_ParamLimits

0xf3ea,	// (0x000238c3) fshwr2_icf_pane_t1

0xe405,	// (0x000228de) fshwr2_func_candi_pane_g1

0xdbcc,	// (0x000220a5) fshwr2_func_candi_row_pane_ParamLimits

0xdbcc,	// (0x000220a5) fshwr2_func_candi_row_pane

0x98e9,	// (0x0001ddc2) cell_fshwr2_syb_pane_ParamLimits

0x98e9,	// (0x0001ddc2) cell_fshwr2_syb_pane

0xee01,	// (0x000232da) fshwr2_hwr_syb_pane_g1_ParamLimits

0xee01,	// (0x000232da) fshwr2_hwr_syb_pane_g1

0xdfcc,	// (0x000224a5) bg_popup_call_pane_cp01

0x98ff,	// (0x0001ddd8) fshwr2_func_candi_cell_pane_ParamLimits

0x98ff,	// (0x0001ddd8) fshwr2_func_candi_cell_pane

0xdbef,	// (0x000220c8) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xdbef,	// (0x000220c8) fshwr2_func_candi_cell_bg_pane

0x994a,	// (0x0001de23) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x994a,	// (0x0001de23) fshwr2_func_candi_cell_pane_g1

0x9981,	// (0x0001de5a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9981,	// (0x0001de5a) fshwr2_func_candi_cell_pane_t1

0xdfcc,	// (0x000224a5) bg_button_pane_cp08

0x73dc,	// (0x0001b8b5) cell_fshwr2_syb_bg_pane

0x999c,	// (0x0001de75) cell_fshwr2_syb_bg_pane_g1

0x99a4,	// (0x0001de7d) cell_fshwr2_syb_bg_pane_t1

0xc58d,	// (0x00020a66) main_tmo_pane

0xb5ac,	// (0x0001fa85) uni_indicator_pane_g1_ParamLimits

0xb5c2,	// (0x0001fa9b) uni_indicator_pane_g2_ParamLimits

0xb5d8,	// (0x0001fab1) uni_indicator_pane_g3_ParamLimits

0x2cfc,	// (0x000171d5) uni_indicator_pane_g4_ParamLimits

0x2cfc,	// (0x000171d5) uni_indicator_pane_g4

0x2d10,	// (0x000171e9) uni_indicator_pane_g5_ParamLimits

0x2d10,	// (0x000171e9) uni_indicator_pane_g5

0x2d10,	// (0x000171e9) uni_indicator_pane_g6_ParamLimits

0x2d10,	// (0x000171e9) uni_indicator_pane_g6

0xf917,	// (0x00023df0) uni_indicator_pane_g_ParamLimits

0xcd7f,	// (0x00021258) popup_tmo_note_window_ParamLimits

0xcd7f,	// (0x00021258) popup_tmo_note_window

0xf1b4,	// (0x0002368d) fshwr2_bg_pane

0x9972,	// (0x0001de4b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9972,	// (0x0001de4b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeab,	// (0x00024384) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeab,	// (0x00024384) fshwr2_func_candi_cell_pane_g

0xede9,	// (0x000232c2) bg_popup_window_pane_cp01

0xf402,	// (0x000238db) bg_popup_window_pane_g1_cp01

0x73e4,	// (0x0001b8bd) bg_popup_window_pane_cp22_ParamLimits

0x73e4,	// (0x0001b8bd) bg_popup_window_pane_cp22

0xdbfb,	// (0x000220d4) listscroll_tmo_link_pane_ParamLimits

0xdbfb,	// (0x000220d4) listscroll_tmo_link_pane

0x7432,	// (0x0001b90b) popup_tmo_note_window_g1_ParamLimits

0x7432,	// (0x0001b90b) popup_tmo_note_window_g1

0xdc3b,	// (0x00022114) tmo_note_info_pane_ParamLimits

0xdc3b,	// (0x00022114) tmo_note_info_pane

0xdc55,	// (0x0002212e) list_tmo_note_info_pane_g1_ParamLimits

0xdc55,	// (0x0002212e) list_tmo_note_info_pane_g1

0x7470,	// (0x0001b949) list_tmo_note_info_pane_g2_ParamLimits

0x7470,	// (0x0001b949) list_tmo_note_info_pane_g2

0x0001,

0xfeb0,	// (0x00024389) list_tmo_note_info_pane_g_ParamLimits

0xfeb0,	// (0x00024389) list_tmo_note_info_pane_g

0x748c,	// (0x0001b965) list_tmo_note_info_text_pane_ParamLimits

0x748c,	// (0x0001b965) list_tmo_note_info_text_pane

0x750d,	// (0x0001b9e6) list_tmo_link_pane

0x751a,	// (0x0001b9f3) scroll_pane_cp20

0x7527,	// (0x0001ba00) list_single_tmo_link_pane_ParamLimits

0x7527,	// (0x0001ba00) list_single_tmo_link_pane

0x7537,	// (0x0001ba10) list_single_tmo_link_pane_t1

0x7545,	// (0x0001ba1e) list_tmo_note_info_text_pane_t1_ParamLimits

0x7545,	// (0x0001ba1e) list_tmo_note_info_text_pane_t1

0xa5d6,	// (0x0001eaaf) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa5d6,	// (0x0001eaaf) aid_size_touch_scroll_bar_cp01

0xa4d6,	// (0x0001e9af) aid_size_touch_slider_marker

0x8672,	// (0x0001cb4b) popup_settings_window_ParamLimits

0x8672,	// (0x0001cb4b) popup_settings_window

0x153e,	// (0x00015a17) popup_candi_list_indi_window

0x158e,	// (0x00015a67) aid_touch_navi_pane_ParamLimits

0xef60,	// (0x00023439) rs_clock_indi_pane

0xef69,	// (0x00023442) sctrl_sk_bottom_pane_ParamLimits

0xef7a,	// (0x00023453) sctrl_sk_top_pane_ParamLimits

0x949a,	// (0x0001d973) popup_fep_tooltip_window

0xda2b,	// (0x00021f04) aid_size_cell_widget_grid_ParamLimits

0xda4a,	// (0x00021f23) cell_ai5_widget_pane_g1_ParamLimits

0xda4a,	// (0x00021f23) cell_ai5_widget_pane_g1

0xda6f,	// (0x00021f48) cell_ai5_widget_pane_g6_ParamLimits

0xda7b,	// (0x00021f54) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2e,	// (0x00024307) cell_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x00024307) cell_ai5_widget_pane_g

0x70ff,	// (0x0001b5d8) cell_ai5_widget_pane_t10_ParamLimits

0x70ff,	// (0x0001b5d8) cell_ai5_widget_pane_t10

0xdac3,	// (0x00021f9c) grid_ai5_widget_pane_ParamLimits

0xdaf9,	// (0x00021fd2) cell_contacts_ai5_widget_pane_ParamLimits

0xdaf9,	// (0x00021fd2) cell_contacts_ai5_widget_pane

0x738f,	// (0x0001b868) popup_discreet_window_t3_ParamLimits

0x738f,	// (0x0001b868) popup_discreet_window_t3

0x98d5,	// (0x0001ddae) popup_fshwr2_char_preview_window_ParamLimits

0x98d5,	// (0x0001ddae) popup_fshwr2_char_preview_window

0xdc6c,	// (0x00022145) tmo_note_info_pane_t1

0xdc81,	// (0x0002215a) tmo_note_info_pane_t2

0xdc98,	// (0x00022171) tmo_note_info_pane_t3

0x74e9,	// (0x0001b9c2) tmo_note_info_pane_t4

0x74fb,	// (0x0001b9d4) tmo_note_info_pane_t5

0x0004,

0xfeb5,	// (0x0002438e) tmo_note_info_pane_t

0x750d,	// (0x0001b9e6) list_tmo_link_pane_ParamLimits

0x751a,	// (0x0001b9f3) scroll_pane_cp20_ParamLimits

0xdfcc,	// (0x000224a5) bg_popup_fep_char_preview_window_cp01

0x755e,	// (0x0001ba37) popup_fshwr2_char_preview_window_t1

0x756c,	// (0x0001ba45) popup_candi_list_indi_window_g1

0x7575,	// (0x0001ba4e) bg_cell_contacts_ai5_widget_pane

0x7581,	// (0x0001ba5a) cell_contacts_ai5_widget_pane_g1

0x4df2,	// (0x000192cb) cell_contacts_ai5_widget_pane_g2

0x7596,	// (0x0001ba6f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec0,	// (0x00024399) cell_contacts_ai5_widget_pane_g

0x75a2,	// (0x0001ba7b) cell_contacts_ai5_widget_pane_t1

0xc58d,	// (0x00020a66) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7619,	// (0x0001baf2) settings_container_pane

0x11e2,	// (0x000156bb) listscroll_set_pane_copy1

0x395e,	// (0x00017e37) scroll_pane_cp121_copy1

0x7625,	// (0x0001bafe) set_content_pane_copy1

0xdd12,	// (0x000221eb) aid_height_set_list_copy1_ParamLimits

0xdd12,	// (0x000221eb) aid_height_set_list_copy1

0x2f30,	// (0x00017409) aid_size_parent_copy1_ParamLimits

0x2f30,	// (0x00017409) aid_size_parent_copy1

0xdd1e,	// (0x000221f7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdd1e,	// (0x000221f7) button_value_adjust_pane_cp6_copy1

0x1524,	// (0x000159fd) list_highlight_pane_cp2_copy1_ParamLimits

0x1524,	// (0x000159fd) list_highlight_pane_cp2_copy1

0xdd32,	// (0x0002220b) list_set_pane_copy1_ParamLimits

0xdd32,	// (0x0002220b) list_set_pane_copy1

0xdcad,	// (0x00022186) main_pane_set_t1_copy1_ParamLimits

0xdcad,	// (0x00022186) main_pane_set_t1_copy1

0xdce7,	// (0x000221c0) main_pane_set_t2_copy1_ParamLimits

0xdce7,	// (0x000221c0) main_pane_set_t2_copy1

0xdddf,	// (0x000222b8) main_pane_set_t3_copy1

0xdded,	// (0x000222c6) main_pane_set_t4_copy1

0xdd06,	// (0x000221df) set_content_pane_g1_copy1_ParamLimits

0xdd06,	// (0x000221df) set_content_pane_g1_copy1

0xddfb,	// (0x000222d4) setting_code_pane_copy1

0x771e,	// (0x0001bbf7) setting_slider_graphic_pane_copy1

0x771e,	// (0x0001bbf7) setting_slider_pane_copy1

0x771e,	// (0x0001bbf7) setting_text_pane_copy1

0x771e,	// (0x0001bbf7) setting_volume_pane_copy1

0xddfb,	// (0x000222d4) settings_code_pane_cp2_copy1

0xde03,	// (0x000222dc) settings_code_pane_cp_copy1_ParamLimits

0xde03,	// (0x000222dc) settings_code_pane_cp_copy1

0x99b3,	// (0x0001de8c) volume_set_pane_copy1

0xde17,	// (0x000222f0) volume_set_pane_g10_copy1

0xde1f,	// (0x000222f8) volume_set_pane_g1_copy1

0xde27,	// (0x00022300) volume_set_pane_g2_copy1

0xde2f,	// (0x00022308) volume_set_pane_g3_copy1

0xde37,	// (0x00022310) volume_set_pane_g4_copy1

0xde3f,	// (0x00022318) volume_set_pane_g5_copy1

0xde47,	// (0x00022320) volume_set_pane_g6_copy1

0xde4f,	// (0x00022328) volume_set_pane_g7_copy1

0xde57,	// (0x00022330) volume_set_pane_g8_copy1

0xde5f,	// (0x00022338) volume_set_pane_g9_copy1

0xc157,	// (0x00020630) bg_set_opt_pane_cp_copy1_ParamLimits

0xc157,	// (0x00020630) bg_set_opt_pane_cp_copy1

0x99bb,	// (0x0001de94) setting_slider_pane_t1_copy1_ParamLimits

0x99bb,	// (0x0001de94) setting_slider_pane_t1_copy1

0x99d9,	// (0x0001deb2) setting_slider_pane_t2_copy1_ParamLimits

0x99d9,	// (0x0001deb2) setting_slider_pane_t2_copy1

0x99f3,	// (0x0001decc) setting_slider_pane_t3_copy1_ParamLimits

0x99f3,	// (0x0001decc) setting_slider_pane_t3_copy1

0x9a0b,	// (0x0001dee4) slider_set_pane_copy1_ParamLimits

0x9a0b,	// (0x0001dee4) slider_set_pane_copy1

0xc62b,	// (0x00020b04) set_opt_bg_pane_g1_copy2

0xc633,	// (0x00020b0c) set_opt_bg_pane_g2_copy2

0x778a,	// (0x0001bc63) set_opt_bg_pane_g3_copy2

0xc643,	// (0x00020b1c) set_opt_bg_pane_g4_copy2

0xc64b,	// (0x00020b24) set_opt_bg_pane_g5_copy2

0xc653,	// (0x00020b2c) set_opt_bg_pane_g6_copy2

0xde67,	// (0x00022340) set_opt_bg_pane_g7_copy2

0x779c,	// (0x0001bc75) set_opt_bg_pane_g8_copy2

0x77a6,	// (0x0001bc7f) set_opt_bg_pane_g9_copy2

0x9a21,	// (0x0001defa) aid_size_touch_slider_mark_copy1_ParamLimits

0x9a21,	// (0x0001defa) aid_size_touch_slider_mark_copy1

0xde6f,	// (0x00022348) slider_set_pane_g1_copy1

0xf40b,	// (0x000238e4) slider_set_pane_g2_copy1

0x928d,	// (0x0001d766) slider_set_pane_g3_copy1_ParamLimits

0x928d,	// (0x0001d766) slider_set_pane_g3_copy1

0x92a1,	// (0x0001d77a) slider_set_pane_g4_copy1_ParamLimits

0x92a1,	// (0x0001d77a) slider_set_pane_g4_copy1

0x92b9,	// (0x0001d792) slider_set_pane_g5_copy1_ParamLimits

0x92b9,	// (0x0001d792) slider_set_pane_g5_copy1

0x928d,	// (0x0001d766) slider_set_pane_g6_copy1_ParamLimits

0x928d,	// (0x0001d766) slider_set_pane_g6_copy1

0x9a35,	// (0x0001df0e) slider_set_pane_g7_copy1_ParamLimits

0x9a35,	// (0x0001df0e) slider_set_pane_g7_copy1

0xc0fb,	// (0x000205d4) bg_set_opt_pane_cp2_copy1

0xde78,	// (0x00022351) setting_slider_graphic_pane_g1_copy1

0xde81,	// (0x0002235a) setting_slider_graphic_pane_t1_copy1

0xde91,	// (0x0002236a) setting_slider_graphic_pane_t2_copy1

0xdea1,	// (0x0002237a) slider_set_pane_cp_copy1

0x77f2,	// (0x0001bccb) input_focus_pane_cp1_copy1

0x77fb,	// (0x0001bcd4) list_set_text_pane_copy1

0x7803,	// (0x0001bcdc) setting_text_pane_g1_copy1

0x780c,	// (0x0001bce5) set_text_pane_t1_copy1

0x77f2,	// (0x0001bccb) input_focus_pane_cp2_copy1

0x7803,	// (0x0001bcdc) setting_code_pane_g1_copy1

0x7827,	// (0x0001bd00) setting_code_pane_t1_copy1

0x3796,	// (0x00017c6f) list_set_graphic_pane_copy1

0xc0fb,	// (0x000205d4) bg_set_opt_pane_cp4_copy1

0x0eed,	// (0x000153c6) list_set_graphic_pane_g1_copy1_ParamLimits

0x0eed,	// (0x000153c6) list_set_graphic_pane_g1_copy1

0x7835,	// (0x0001bd0e) list_set_graphic_pane_g2_copy1

0x0f05,	// (0x000153de) list_set_graphic_pane_t1_copy1_ParamLimits

0x0f05,	// (0x000153de) list_set_graphic_pane_t1_copy1

0x457c,	// (0x00018a55) rs_clock_indi_pane_g1

0x783d,	// (0x0001bd16) rs_clock_indi_pane_t1

0x784b,	// (0x0001bd24) rs_indi_pane

0x7853,	// (0x0001bd2c) rs_indi_pane_g1

0x785c,	// (0x0001bd35) rs_indi_pane_g2

0x756c,	// (0x0001ba45) rs_indi_pane_g3

0x0002,

0xfec7,	// (0x000243a0) rs_indi_pane_g

0x11e2,	// (0x000156bb) bg_popup_preview_window_pane_cp03

0x7865,	// (0x0001bd3e) popup_fep_tooltip_window_t1

0xc0aa,	// (0x00020583) popup_note2_window_g2_ParamLimits

0xc0aa,	// (0x00020583) popup_note2_window_g2

0x0001,

0xfc67,	// (0x00024140) popup_note2_window_g_ParamLimits

0xfc67,	// (0x00024140) popup_note2_window_g

0x5a0f,	// (0x00019ee8) bg_popup_sub_pane_cp11_ParamLimits

0x5a1c,	// (0x00019ef5) cell_ai3_links_pane_g1_ParamLimits

0x5a33,	// (0x00019f0c) cell_ai3_links_pane_t1

0x780c,	// (0x0001bce5) set_text_pane_t1_copy1_ParamLimits

0x10f3,	// (0x000155cc) cell_graphic_popup_pane_cp2_ParamLimits

0x10f3,	// (0x000155cc) cell_graphic_popup_pane_cp2

0xdeb1,	// (0x0002238a) cell_graphic_popup_pane_g1_cp2

0xc3f1,	// (0x000208ca) cell_graphic_popup_pane_g2_cp2

0x787b,	// (0x0001bd54) cell_graphic_popup_pane_g3_cp2

0xdeb9,	// (0x00022392) cell_graphic_popup_pane_t2_cp2

0xc402,	// (0x000208db) grid_highlight_pane_cp3_cp2

0xe263,	// (0x0002273c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc58d,	// (0x00020a66) main_tmo_pane_ParamLimits

0xcd73,	// (0x0002124c) popup_tmo_big_image_note_window

0x6f5c,	// (0x0001b435) cell_ai5_widget_list_pane

0xda41,	// (0x00021f1a) cell_ai5_widget_lrg_icon_pane

0xdc6c,	// (0x00022145) tmo_note_info_pane_t1_ParamLimits

0xdc81,	// (0x0002215a) tmo_note_info_pane_t2_ParamLimits

0xdc98,	// (0x00022171) tmo_note_info_pane_t3_ParamLimits

0x74e9,	// (0x0001b9c2) tmo_note_info_pane_t4_ParamLimits

0x74fb,	// (0x0001b9d4) tmo_note_info_pane_t5_ParamLimits

0xfeb5,	// (0x0002438e) tmo_note_info_pane_t_ParamLimits

0x7619,	// (0x0001baf2) settings_container_pane_ParamLimits

0xdea9,	// (0x00022382) indicator_popup_pane_cp5

0xdea9,	// (0x00022382) indicator_popup_pane_cp6

0x3796,	// (0x00017c6f) list_set_graphic_pane_copy1_ParamLimits

0xc0e7,	// (0x000205c0) bg_popup_window_pane_cp23

0x7891,	// (0x0001bd6a) popup_tmo_big_image_note_window_g1

0x789a,	// (0x0001bd73) popup_tmo_big_image_note_window_t1

0x78aa,	// (0x0001bd83) popup_tmo_big_image_note_window_t2

0x78ba,	// (0x0001bd93) popup_tmo_big_image_note_window_t3

0x0002,

0xfece,	// (0x000243a7) popup_tmo_big_image_note_window_t

0x457c,	// (0x00018a55) cell_ai5_widget_lrg_icon_pane_g1

0x78ca,	// (0x0001bda3) cell_ai5_widget_lrg_icon_pane_t1

0xdec7,	// (0x000223a0) cell_ai5_widget_list_row_pane_ParamLimits

0xdec7,	// (0x000223a0) cell_ai5_widget_list_row_pane

0x78ef,	// (0x0001bdc8) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x78ef,	// (0x0001bdc8) cell_ai5_widget_list_row_pane_g1

0xdede,	// (0x000223b7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xdede,	// (0x000223b7) cell_ai5_widget_list_row_pane_t1

0x7927,	// (0x0001be00) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7927,	// (0x0001be00) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed5,	// (0x000243ae) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed5,	// (0x000243ae) cell_ai5_widget_list_row_pane_t

0xdfcc,	// (0x000224a5) main_fep_vtchi_ss_pane

0x796b,	// (0x0001be44) popup_fep_char_pre_window

0x7973,	// (0x0001be4c) popup_fep_ituss_window

0x7994,	// (0x0001be6d) popup_fep_vkbss_window

0x79b3,	// (0x0001be8c) grid_vkbss_keypad_pane_ParamLimits

0x79b3,	// (0x0001be8c) grid_vkbss_keypad_pane

0x79c3,	// (0x0001be9c) ituss_keypad_pane

0xf41f,	// (0x000238f8) aid_vkbss_key_offset_ParamLimits

0xf41f,	// (0x000238f8) aid_vkbss_key_offset

0xf42b,	// (0x00023904) cell_vkbss_key_pane_ParamLimits

0xf42b,	// (0x00023904) cell_vkbss_key_pane

0x18a5,	// (0x00015d7e) bg_cell_vkbss_key_g1_ParamLimits

0x18a5,	// (0x00015d7e) bg_cell_vkbss_key_g1

0x79d2,	// (0x0001beab) cell_vkbss_key_3p_pane_ParamLimits

0x79d2,	// (0x0001beab) cell_vkbss_key_3p_pane

0x79ec,	// (0x0001bec5) cell_vkbss_key_g1_ParamLimits

0x79ec,	// (0x0001bec5) cell_vkbss_key_g1

0x7a06,	// (0x0001bedf) cell_vkbss_key_t1_ParamLimits

0x7a06,	// (0x0001bedf) cell_vkbss_key_t1

0xf441,	// (0x0002391a) cell_ituss_key_pane_ParamLimits

0xf441,	// (0x0002391a) cell_ituss_key_pane

0x7a31,	// (0x0001bf0a) bg_cell_ituss_key_g1_ParamLimits

0x7a31,	// (0x0001bf0a) bg_cell_ituss_key_g1

0x7a3d,	// (0x0001bf16) cell_ituss_key_pane_g1_ParamLimits

0x7a3d,	// (0x0001bf16) cell_ituss_key_pane_g1

0xf452,	// (0x0002392b) cell_ituss_key_pane_g2_ParamLimits

0xf452,	// (0x0002392b) cell_ituss_key_pane_g2

0x0002,

0xfedc,	// (0x000243b5) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x000243b5) cell_ituss_key_pane_g

0xf47e,	// (0x00023957) cell_ituss_key_t1_ParamLimits

0xf47e,	// (0x00023957) cell_ituss_key_t1

0xf4b8,	// (0x00023991) cell_ituss_key_t2_ParamLimits

0xf4b8,	// (0x00023991) cell_ituss_key_t2

0xf4e9,	// (0x000239c2) cell_ituss_key_t3_ParamLimits

0xf4e9,	// (0x000239c2) cell_ituss_key_t3

0xf4b8,	// (0x00023991) cell_ituss_key_t4_ParamLimits

0xf4b8,	// (0x00023991) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x000243bc) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x000243bc) cell_ituss_key_t

0x7a69,	// (0x0001bf42) cell_vkbss_key_3p_pane_g1

0x7a71,	// (0x0001bf4a) cell_vkbss_key_3p_pane_g2

0x7a79,	// (0x0001bf52) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x000243c7) cell_vkbss_key_3p_pane_g

0xdfcc,	// (0x000224a5) bg_popup_fep_char_preview_window_cp02

0xf52c,	// (0x00023a05) popup_fep_char_pre_window_t1

0xda21,	// (0x00021efa) main_ai5_sk_pane

0x7575,	// (0x0001ba4e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7581,	// (0x0001ba5a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4df2,	// (0x000192cb) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7596,	// (0x0001ba6f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec0,	// (0x00024399) cell_contacts_ai5_widget_pane_g_ParamLimits

0x75a2,	// (0x0001ba7b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc58d,	// (0x00020a66) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdf0f,	// (0x000223e8) main_ai5_sk_pane_g1

0xb205,	// (0x0001f6de) popup_query_code_window_g1

0x7989,	// (0x0001be62) popup_fep_vkb_icf_pane

0x799d,	// (0x0001be76) popup_fep_vtchi_icf_pane

0x7a8a,	// (0x0001bf63) bg_icf_pane

0x7a96,	// (0x0001bf6f) list_vkb_icf_pane

0x7aa5,	// (0x0001bf7e) bg_icf_pane_cp01

0x7ab8,	// (0x0001bf91) vtchi_icf_list_pane

0x7ac8,	// (0x0001bfa1) list_vkb_icf_pane_t1_ParamLimits

0x7ac8,	// (0x0001bfa1) list_vkb_icf_pane_t1

0x7ade,	// (0x0001bfb7) vtchi_icf_list_pane_t1_ParamLimits

0x7ade,	// (0x0001bfb7) vtchi_icf_list_pane_t1

0x7973,	// (0x0001be4c) popup_fep_ituss_window_ParamLimits

0x799d,	// (0x0001be76) popup_fep_vtchi_icf_pane_ParamLimits

0x79c3,	// (0x0001be9c) ituss_keypad_pane_ParamLimits

0xf413,	// (0x000238ec) ituss_sks_pane

0x7a8a,	// (0x0001bf63) bg_icf_pane_ParamLimits

0x794f,	// (0x0001be28) icf_edit_indi_pane_ParamLimits

0x794f,	// (0x0001be28) icf_edit_indi_pane

0x7a96,	// (0x0001bf6f) list_vkb_icf_pane_ParamLimits

0x7aa5,	// (0x0001bf7e) bg_icf_pane_cp01_ParamLimits

0x795e,	// (0x0001be37) icf_edit_indi_pane_cp01_ParamLimits

0x795e,	// (0x0001be37) icf_edit_indi_pane_cp01

0x7ac0,	// (0x0001bf99) vtchi_query_pane

0x47ec,	// (0x00018cc5) icf_edit_indi_pane_g1_ParamLimits

0x47ec,	// (0x00018cc5) icf_edit_indi_pane_g1

0x7b50,	// (0x0001c029) icf_edit_indi_pane_g2_ParamLimits

0x7b50,	// (0x0001c029) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x000243df) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x000243df) icf_edit_indi_pane_g

0x7b5f,	// (0x0001c038) icf_edit_indi_pane_t1

0x7af9,	// (0x0001bfd2) bg_input_focus_pane_cp042

0xc465,	// (0x0002093e) vtchi_button_pane

0x7b02,	// (0x0001bfdb) vtchi_query_pane_t1

0x7b10,	// (0x0001bfe9) vtchi_query_pane_t2

0x7b1e,	// (0x0001bff7) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x000243ce) vtchi_query_pane_t

0xdfcc,	// (0x000224a5) bg_button_pane_cp13

0x7b2c,	// (0x0001c005) vtchi_button_pane_g1

0xf53b,	// (0x00023a14) ituss_sks_pane_g1

0xf546,	// (0x00023a1f) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x000243d5) ituss_sks_pane_g

0x7b34,	// (0x0001c00d) ituss_sks_pane_t1

0x7b42,	// (0x0001c01b) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x000243da) ituss_sks_pane_t

0x3f95,	// (0x0001846e) indicator_nsta_pane_cp_g1

0x3f9e,	// (0x00018477) indicator_nsta_pane_cp_g2

0x3fa6,	// (0x0001847f) indicator_nsta_pane_cp_g3

0x3fae,	// (0x00018487) indicator_nsta_pane_cp_g4

0x3fb6,	// (0x0001848f) indicator_nsta_pane_cp_g5

0x3fb6,	// (0x0001848f) indicator_nsta_pane_cp_g6

0x0005,

0xfaa5,	// (0x00023f7e) indicator_nsta_pane_cp_g

0xd7f9,	// (0x00021cd2) cell_graphic2_pane_t2_ParamLimits

0xd7f9,	// (0x00021cd2) cell_graphic2_pane_t2

0x0001,

0xfdb7,	// (0x00024290) cell_graphic2_pane_t_ParamLimits

0xfdb7,	// (0x00024290) cell_graphic2_pane_t

0xd833,	// (0x00021d0c) cell_graphic2_control_pane_t1

0xa87f,	// (0x0001ed58) signal_pane_g3_ParamLimits

0xa87f,	// (0x0001ed58) signal_pane_g3

0xa893,	// (0x0001ed6c) signal_pane_g4_ParamLimits

0xa893,	// (0x0001ed6c) signal_pane_g4

0x7939,	// (0x0001be12) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7939,	// (0x0001be12) cell_ai5_widget_list_row_pane_t3

0x7a57,	// (0x0001bf30) cell_ituss_key_pane_t1_ParamLimits

0x7a57,	// (0x0001bf30) cell_ituss_key_pane_t1

0x1c15,	// (0x000160ee) form_field_data_wide_pane_vc_t2_ParamLimits

0x1c15,	// (0x000160ee) form_field_data_wide_pane_vc_t2

0x1c29,	// (0x00016102) form_field_data_wide_pane_vc_t3_ParamLimits

0x1c29,	// (0x00016102) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x00023cd8) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x00023cd8) form_field_data_wide_pane_vc_t

0x3c5d,	// (0x00018136) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3c5d,	// (0x00018136) form_field_slider_wide_pane_vc_t3

0x3d3b,	// (0x00018214) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3d3b,	// (0x00018214) form_field_popup_wide_pane_vc_t2

0x3d52,	// (0x0001822b) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3d52,	// (0x0001822b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa94,	// (0x00023f6d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa94,	// (0x00023f6d) form_field_popup_wide_pane_vc_t

0x9850,	// (0x0001dd29) aid_fshwr2_btn_pane_ParamLimits

0x9862,	// (0x0001dd3b) aid_fshwr2_syb_pane_ParamLimits

0x9874,	// (0x0001dd4d) aid_fshwr2_txt_pane_ParamLimits

0xf1b4,	// (0x0002368d) fshwr2_bg_pane_ParamLimits

0x9883,	// (0x0001dd5c) fshwr2_func_candi_pane_ParamLimits

0x98a2,	// (0x0001dd7b) fshwr2_hwr_syb_pane_ParamLimits

0x98bd,	// (0x0001dd96) fshwr2_icf_pane_ParamLimits

0x3bc9,	// (0x000180a2) list_double_graphic_pane_vc_g4_ParamLimits

0x3bc9,	// (0x000180a2) list_double_graphic_pane_vc_g4

0xf472,	// (0x0002394b) cell_ituss_key_pane_g3_ParamLimits

0xf472,	// (0x0002394b) cell_ituss_key_pane_g3

0xf51a,	// (0x000239f3) cell_ituss_key_t5_ParamLimits

0xf51a,	// (0x000239f3) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal

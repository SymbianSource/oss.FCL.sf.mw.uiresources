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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001447b };

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
0x9ab5,	// (0x0001df30) Screen

0x9ac1,	// (0x0001df3c) application_window_ParamLimits

0x9ac1,	// (0x0001df3c) application_window

0xc17b,	// (0x000205f6) screen_g1

0x85b8,	// (0x0001ca33) area_bottom_pane_ParamLimits

0x85b8,	// (0x0001ca33) area_bottom_pane

0xdf86,	// (0x00022401) area_top_pane_ParamLimits

0xdf86,	// (0x00022401) area_top_pane

0xe024,	// (0x0002249f) main_pane_ParamLimits

0xe024,	// (0x0002249f) main_pane

0xc185,	// (0x00020600) misc_graphics

0xac6d,	// (0x0001f0e8) battery_pane_ParamLimits

0xac6d,	// (0x0001f0e8) battery_pane

0x239b,	// (0x00016816) bg_status_flat_pane_g8

0x23a3,	// (0x0001681e) bg_status_flat_pane_g9

0x1686,	// (0x00015b01) context_pane_ParamLimits

0x1686,	// (0x00015b01) context_pane

0xadd8,	// (0x0001f253) navi_pane_ParamLimits

0xadd8,	// (0x0001f253) navi_pane

0xae56,	// (0x0001f2d1) signal_pane_ParamLimits

0xae56,	// (0x0001f2d1) signal_pane

0x0008,

0xf859,	// (0x00023cd4) bg_status_flat_pane_g

0xaee6,	// (0x0001f361) status_pane_g1_ParamLimits

0xaee6,	// (0x0001f361) status_pane_g1

0xaefc,	// (0x0001f377) status_pane_g2_ParamLimits

0xaefc,	// (0x0001f377) status_pane_g2

0x18ad,	// (0x00015d28) status_pane_g3_ParamLimits

0x18ad,	// (0x00015d28) status_pane_g3

0x0004,

0xf78c,	// (0x00023c07) status_pane_g_ParamLimits

0xf78c,	// (0x00023c07) status_pane_g

0xaf08,	// (0x0001f383) title_pane_ParamLimits

0xaf08,	// (0x0001f383) title_pane

0xaf6b,	// (0x0001f3e6) uni_indicator_pane_ParamLimits

0xaf6b,	// (0x0001f3e6) uni_indicator_pane

0x14de,	// (0x00015959) bg_list_pane_ParamLimits

0x14de,	// (0x00015959) bg_list_pane

0xabe0,	// (0x0001f05b) find_pane

0x1b77,	// (0x00015ff2) listscroll_app_pane_ParamLimits

0x1b77,	// (0x00015ff2) listscroll_app_pane

0x1512,	// (0x0001598d) listscroll_form_pane

0x8a22,	// (0x0001ce9d) listscroll_gen_pane_ParamLimits

0x8a22,	// (0x0001ce9d) listscroll_gen_pane

0xe86d,	// (0x00022ce8) listscroll_set_pane

0x2f11,	// (0x0001738c) main_idle_act_pane

0x11de,	// (0x00015659) main_idle_trad_pane

0x11de,	// (0x00015659) main_list_empty_pane

0x1506,	// (0x00015981) main_midp_pane

0x152c,	// (0x000159a7) main_pane_g1_ParamLimits

0x152c,	// (0x000159a7) main_pane_g1

0x8a36,	// (0x0001ceb1) popup_ai_message_window_ParamLimits

0x8a36,	// (0x0001ceb1) popup_ai_message_window

0x8ae7,	// (0x0001cf62) popup_fep_china_uni_window_ParamLimits

0x8ae7,	// (0x0001cf62) popup_fep_china_uni_window

0x8b41,	// (0x0001cfbc) popup_fep_japan_candidate_window_ParamLimits

0x8b41,	// (0x0001cfbc) popup_fep_japan_candidate_window

0x8b5f,	// (0x0001cfda) popup_fep_japan_predictive_window_ParamLimits

0x8b5f,	// (0x0001cfda) popup_fep_japan_predictive_window

0x8b71,	// (0x0001cfec) popup_find_window

0x8b8e,	// (0x0001d009) popup_grid_graphic_window_ParamLimits

0x8b8e,	// (0x0001d009) popup_grid_graphic_window

0x8c2c,	// (0x0001d0a7) popup_large_graphic_colour_window

0x8c52,	// (0x0001d0cd) popup_menu_window_ParamLimits

0x8c52,	// (0x0001d0cd) popup_menu_window

0x8e24,	// (0x0001d29f) popup_note_image_window

0x8dea,	// (0x0001d265) popup_note_wait_window_ParamLimits

0x8dea,	// (0x0001d265) popup_note_wait_window

0x8e3c,	// (0x0001d2b7) popup_note_window_ParamLimits

0x8e3c,	// (0x0001d2b7) popup_note_window

0x8eeb,	// (0x0001d366) popup_query_code_window_ParamLimits

0x8eeb,	// (0x0001d366) popup_query_code_window

0x8f25,	// (0x0001d3a0) popup_query_data_code_window_ParamLimits

0x8f25,	// (0x0001d3a0) popup_query_data_code_window

0x8f42,	// (0x0001d3bd) popup_query_data_window_ParamLimits

0x8f42,	// (0x0001d3bd) popup_query_data_window

0x8fc4,	// (0x0001d43f) popup_query_sat_info_window_ParamLimits

0x8fc4,	// (0x0001d43f) popup_query_sat_info_window

0x905b,	// (0x0001d4d6) popup_snote_single_graphic_window_ParamLimits

0x905b,	// (0x0001d4d6) popup_snote_single_graphic_window

0x905b,	// (0x0001d4d6) popup_snote_single_text_window_ParamLimits

0x905b,	// (0x0001d4d6) popup_snote_single_text_window

0xe8ab,	// (0x00022d26) popup_sub_window_general

0x91b8,	// (0x0001d633) popup_window_general_ParamLimits

0x91b8,	// (0x0001d633) popup_window_general

0x1542,	// (0x000159bd) power_save_pane

0x88a7,	// (0x0001cd22) control_pane_g1_ParamLimits

0x88a7,	// (0x0001cd22) control_pane_g1

0x88d0,	// (0x0001cd4b) control_pane_g2_ParamLimits

0x88d0,	// (0x0001cd4b) control_pane_g2

0x14a1,	// (0x0001591c) control_pane_g3_ParamLimits

0x14a1,	// (0x0001591c) control_pane_g3

0x0007,

0xf774,	// (0x00023bef) control_pane_g_ParamLimits

0xf774,	// (0x00023bef) control_pane_g

0x8911,	// (0x0001cd8c) control_pane_t1_ParamLimits

0x8911,	// (0x0001cd8c) control_pane_t1

0x8977,	// (0x0001cdf2) control_pane_t2_ParamLimits

0x8977,	// (0x0001cdf2) control_pane_t2

0x0002,

0xf785,	// (0x00023c00) control_pane_t_ParamLimits

0xf785,	// (0x00023c00) control_pane_t

0xab12,	// (0x0001ef8d) navi_navi_volume_pane_cp1

0xab1a,	// (0x0001ef95) status_small_icon_pane

0x13d6,	// (0x00015851) status_small_pane_g1_ParamLimits

0x13d6,	// (0x00015851) status_small_pane_g1

0xab22,	// (0x0001ef9d) status_small_pane_g2_ParamLimits

0xab22,	// (0x0001ef9d) status_small_pane_g2

0xab2e,	// (0x0001efa9) status_small_pane_g3_ParamLimits

0xab2e,	// (0x0001efa9) status_small_pane_g3

0xab3a,	// (0x0001efb5) status_small_pane_g4_ParamLimits

0xab3a,	// (0x0001efb5) status_small_pane_g4

0xab46,	// (0x0001efc1) status_small_pane_g5_ParamLimits

0xab46,	// (0x0001efc1) status_small_pane_g5

0xab54,	// (0x0001efcf) status_small_pane_g6_ParamLimits

0xab54,	// (0x0001efcf) status_small_pane_g6

0x0007,

0xf763,	// (0x00023bde) status_small_pane_g_ParamLimits

0xf763,	// (0x00023bde) status_small_pane_g

0xab83,	// (0x0001effe) status_small_pane_t1

0xaba5,	// (0x0001f020) status_small_wait_pane_ParamLimits

0xaba5,	// (0x0001f020) status_small_wait_pane

0xa831,	// (0x0001ecac) aid_levels_signal_ParamLimits

0xa831,	// (0x0001ecac) aid_levels_signal

0xa849,	// (0x0001ecc4) signal_pane_g1_ParamLimits

0xa849,	// (0x0001ecc4) signal_pane_g1

0xa864,	// (0x0001ecdf) signal_pane_g2_ParamLimits

0xa864,	// (0x0001ecdf) signal_pane_g2

0x0003,

0xf6f4,	// (0x00023b6f) signal_pane_g_ParamLimits

0xf6f4,	// (0x00023b6f) signal_pane_g

0xe4fd,	// (0x00022978) context_pane_g1

0x9ad1,	// (0x0001df4c) title_pane_g1

0x9b08,	// (0x0001df83) title_pane_t1

0xc19b,	// (0x00020616) title_pane_t2

0xc1c1,	// (0x0002063c) title_pane_t3

0x0002,

0xf557,	// (0x000239d2) title_pane_t

0xaf93,	// (0x0001f40e) aid_levels_battery_ParamLimits

0xaf93,	// (0x0001f40e) aid_levels_battery

0xafaf,	// (0x0001f42a) battery_pane_g1_ParamLimits

0xafaf,	// (0x0001f42a) battery_pane_g1

0xafcc,	// (0x0001f447) battery_pane_g2_ParamLimits

0xafcc,	// (0x0001f447) battery_pane_g2

0x0001,

0xf797,	// (0x00023c12) battery_pane_g_ParamLimits

0xf797,	// (0x00023c12) battery_pane_g

0xb5a9,	// (0x0001fa24) uni_indicator_pane_g1

0xb5bf,	// (0x0001fa3a) uni_indicator_pane_g2

0xb5d5,	// (0x0001fa50) uni_indicator_pane_g3

0x0005,

0xf901,	// (0x00023d7c) uni_indicator_pane_g

0x1050,	// (0x000154cb) navi_icon_pane_ParamLimits

0x1050,	// (0x000154cb) navi_icon_pane

0x0f9a,	// (0x00015415) navi_midp_pane

0x106c,	// (0x000154e7) navi_navi_pane

0x1076,	// (0x000154f1) navi_text_pane_ParamLimits

0x1076,	// (0x000154f1) navi_text_pane

0xc17b,	// (0x000205f6) status_small_wait_pane_g1

0xc42c,	// (0x000208a7) status_small_wait_pane_g2

0x0001,

0xf8fc,	// (0x00023d77) status_small_wait_pane_g

0xb502,	// (0x0001f97d) navi_navi_icon_text_pane

0x29ee,	// (0x00016e69) navi_navi_pane_g1_ParamLimits

0x29ee,	// (0x00016e69) navi_navi_pane_g1

0x2a00,	// (0x00016e7b) navi_navi_pane_g2_ParamLimits

0x2a00,	// (0x00016e7b) navi_navi_pane_g2

0x0001,

0xf8ca,	// (0x00023d45) navi_navi_pane_g_ParamLimits

0xf8ca,	// (0x00023d45) navi_navi_pane_g

0x2a12,	// (0x00016e8d) navi_navi_tabs_pane

0x2a1b,	// (0x00016e96) navi_navi_text_pane

0xb502,	// (0x0001f97d) navi_navi_volume_pane

0x29c2,	// (0x00016e3d) navi_text_pane_t1

0x29b6,	// (0x00016e31) navi_icon_pane_g1

0x2909,	// (0x00016d84) navi_navi_text_pane_t1

0x9275,	// (0x0001d6f0) navi_navi_volume_pane_g1

0xeb2c,	// (0x00022fa7) volume_small_pane

0x286f,	// (0x00016cea) navi_navi_icon_text_pane_g1

0xb45a,	// (0x0001f8d5) navi_navi_icon_text_pane_t1

0x106c,	// (0x000154e7) navi_tabs_2_long_pane

0x106c,	// (0x000154e7) navi_tabs_2_pane

0x106c,	// (0x000154e7) navi_tabs_3_long_pane

0x106c,	// (0x000154e7) navi_tabs_3_pane

0x106c,	// (0x000154e7) navi_tabs_4_pane

0xeb0c,	// (0x00022f87) tabs_2_active_pane_ParamLimits

0xeb0c,	// (0x00022f87) tabs_2_active_pane

0xeb1c,	// (0x00022f97) tabs_2_passive_pane_ParamLimits

0xeb1c,	// (0x00022f97) tabs_2_passive_pane

0xeada,	// (0x00022f55) tabs_3_active_pane_ParamLimits

0xeada,	// (0x00022f55) tabs_3_active_pane

0xeaea,	// (0x00022f65) tabs_3_passive_pane_ParamLimits

0xeaea,	// (0x00022f65) tabs_3_passive_pane

0xeafb,	// (0x00022f76) tabs_3_passive_pane_cp_ParamLimits

0xeafb,	// (0x00022f76) tabs_3_passive_pane_cp

0xea96,	// (0x00022f11) tabs_4_active_pane_ParamLimits

0xea96,	// (0x00022f11) tabs_4_active_pane

0xeaa7,	// (0x00022f22) tabs_4_passive_pane_ParamLimits

0xeaa7,	// (0x00022f22) tabs_4_passive_pane

0xeab8,	// (0x00022f33) tabs_4_passive_pane_cp_ParamLimits

0xeab8,	// (0x00022f33) tabs_4_passive_pane_cp

0xeac9,	// (0x00022f44) tabs_4_passive_pane_cp2_ParamLimits

0xeac9,	// (0x00022f44) tabs_4_passive_pane_cp2

0xea72,	// (0x00022eed) tabs_2_long_active_pane_ParamLimits

0xea72,	// (0x00022eed) tabs_2_long_active_pane

0xea84,	// (0x00022eff) tabs_2_long_passive_pane_ParamLimits

0xea84,	// (0x00022eff) tabs_2_long_passive_pane

0xea2d,	// (0x00022ea8) tabs_3_long_active_pane_ParamLimits

0xea2d,	// (0x00022ea8) tabs_3_long_active_pane

0xea46,	// (0x00022ec1) tabs_3_long_passive_pane_ParamLimits

0xea46,	// (0x00022ec1) tabs_3_long_passive_pane

0xea59,	// (0x00022ed4) tabs_3_long_passive_pane_cp_ParamLimits

0xea59,	// (0x00022ed4) tabs_3_long_passive_pane_cp

0xe9d3,	// (0x00022e4e) volume_small_pane_g1

0xe9dc,	// (0x00022e57) volume_small_pane_g2

0xe9e5,	// (0x00022e60) volume_small_pane_g3

0xe9ee,	// (0x00022e69) volume_small_pane_g4

0xe9f7,	// (0x00022e72) volume_small_pane_g5

0xea00,	// (0x00022e7b) volume_small_pane_g6

0xea09,	// (0x00022e84) volume_small_pane_g7

0xea12,	// (0x00022e8d) volume_small_pane_g8

0xea1b,	// (0x00022e96) volume_small_pane_g9

0xea24,	// (0x00022e9f) volume_small_pane_g10

0x0009,

0xf896,	// (0x00023d11) volume_small_pane_g

0xc1d3,	// (0x0002064e) bg_active_tab_pane_cp2_ParamLimits

0xc1d3,	// (0x0002064e) bg_active_tab_pane_cp2

0x9b94,	// (0x0001e00f) tabs_3_active_pane_g1

0x9b9c,	// (0x0001e017) tabs_3_active_pane_t1

0xc1d3,	// (0x0002064e) bg_passive_tab_pane_cp2_ParamLimits

0xc1d3,	// (0x0002064e) bg_passive_tab_pane_cp2

0x9b94,	// (0x0001e00f) tabs_3_passive_pane_g1

0x9b9c,	// (0x0001e017) tabs_3_passive_pane_t1

0xc1d3,	// (0x0002064e) bg_active_tab_pane_cp3_ParamLimits

0xc1d3,	// (0x0002064e) bg_active_tab_pane_cp3

0x9bae,	// (0x0001e029) tabs_4_active_pane_g1

0x9bb6,	// (0x0001e031) tabs_4_active_pane_t1

0xc1d3,	// (0x0002064e) bg_passive_tab_pane_cp3_ParamLimits

0xc1d3,	// (0x0002064e) bg_passive_tab_pane_cp3

0x9bae,	// (0x0001e029) tabs_4_1_passive_pane_g1

0x9bb6,	// (0x0001e031) tabs_4_1_passive_pane_t1

0x1506,	// (0x00015981) list_highlight_pane_cp2

0xb6ed,	// (0x0001fb68) list_set_pane_ParamLimits

0xb6ed,	// (0x0001fb68) list_set_pane

0xb787,	// (0x0001fc02) main_pane_set_t1_ParamLimits

0xb787,	// (0x0001fc02) main_pane_set_t1

0xb7a7,	// (0x0001fc22) main_pane_set_t2_ParamLimits

0xb7a7,	// (0x0001fc22) main_pane_set_t2

0xb7bb,	// (0x0001fc36) main_pane_set_t3_ParamLimits

0xb7bb,	// (0x0001fc36) main_pane_set_t3

0xb7cd,	// (0x0001fc48) main_pane_set_t4_ParamLimits

0xb7cd,	// (0x0001fc48) main_pane_set_t4

0x0003,

0xf966,	// (0x00023de1) main_pane_set_t_ParamLimits

0xf966,	// (0x00023de1) main_pane_set_t

0xb7df,	// (0x0001fc5a) setting_code_pane

0xb7e9,	// (0x0001fc64) setting_slider_graphic_pane

0xb7e9,	// (0x0001fc64) setting_slider_pane

0xb7e9,	// (0x0001fc64) setting_text_pane

0xb7e9,	// (0x0001fc64) setting_volume_pane

0x87b6,	// (0x0001cc31) volume_set_pane

0xc1e1,	// (0x0002065c) bg_set_opt_pane_cp

0x87be,	// (0x0001cc39) setting_slider_pane_t1

0x87d7,	// (0x0001cc52) setting_slider_pane_t2

0x87f1,	// (0x0001cc6c) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000239d9) setting_slider_pane_t

0x8809,	// (0x0001cc84) slider_set_pane

0xc185,	// (0x00020600) bg_set_opt_pane_cp2

0xc1ef,	// (0x0002066a) setting_slider_graphic_pane_g1

0x881f,	// (0x0001cc9a) setting_slider_graphic_pane_t1

0x882f,	// (0x0001ccaa) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000239e0) setting_slider_graphic_pane_t

0x883f,	// (0x0001ccba) slider_set_pane_cp

0xc185,	// (0x00020600) input_focus_pane_cp1

0x2ef8,	// (0x00017373) list_set_text_pane

0xc17b,	// (0x000205f6) setting_text_pane_g1

0xc185,	// (0x00020600) input_focus_pane_cp2

0xc17b,	// (0x000205f6) setting_code_pane_g1

0xc1f8,	// (0x00020673) setting_code_pane_t1

0xc206,	// (0x00020681) set_text_pane_t1_ParamLimits

0xc206,	// (0x00020681) set_text_pane_t1

0xc6d1,	// (0x00020b4c) set_opt_bg_pane_g1

0xc6d9,	// (0x00020b54) set_opt_bg_pane_g2

0xb6a2,	// (0x0001fb1d) set_opt_bg_pane_g3

0xc6e9,	// (0x00020b64) set_opt_bg_pane_g4

0xc6f1,	// (0x00020b6c) set_opt_bg_pane_g5

0xc6f9,	// (0x00020b74) set_opt_bg_pane_g6

0xb6ac,	// (0x0001fb27) set_opt_bg_pane_g7

0xb6b4,	// (0x0001fb2f) set_opt_bg_pane_g8

0xb6be,	// (0x0001fb39) set_opt_bg_pane_g9

0x0008,

0xf953,	// (0x00023dce) set_opt_bg_pane_g

0xb695,	// (0x0001fb10) slider_set_pane_g1

0xeb35,	// (0x00022fb0) slider_set_pane_g2

0x0006,

0xf944,	// (0x00023dbf) slider_set_pane_g

0x927d,	// (0x0001d6f8) volume_set_pane_g1

0x9285,	// (0x0001d700) volume_set_pane_g2

0x928d,	// (0x0001d708) volume_set_pane_g3

0x9295,	// (0x0001d710) volume_set_pane_g4

0x929d,	// (0x0001d718) volume_set_pane_g5

0x92a5,	// (0x0001d720) volume_set_pane_g6

0x92ad,	// (0x0001d728) volume_set_pane_g7

0x92b5,	// (0x0001d730) volume_set_pane_g8

0x92bd,	// (0x0001d738) volume_set_pane_g9

0x92c5,	// (0x0001d740) volume_set_pane_g10

0x0009,

0xf91c,	// (0x00023d97) volume_set_pane_g

0x9bc8,	// (0x0001e043) indicator_pane_ParamLimits

0x9bc8,	// (0x0001e043) indicator_pane

0x9bf0,	// (0x0001e06b) main_idle_pane_g2_ParamLimits

0x9bf0,	// (0x0001e06b) main_idle_pane_g2

0x9c28,	// (0x0001e0a3) main_pane_idle_g1_ParamLimits

0x9c28,	// (0x0001e0a3) main_pane_idle_g1

0xc220,	// (0x0002069b) popup_clock_digital_analogue_window_ParamLimits

0xc220,	// (0x0002069b) popup_clock_digital_analogue_window

0x9c4f,	// (0x0001e0ca) soft_indicator_pane_ParamLimits

0x9c4f,	// (0x0001e0ca) soft_indicator_pane

0x9c73,	// (0x0001e0ee) wallpaper_pane_ParamLimits

0x9c73,	// (0x0001e0ee) wallpaper_pane

0xc17b,	// (0x000205f6) wallpaper_pane_g1

0x9c85,	// (0x0001e100) indicator_pane_g1_ParamLimits

0x9c85,	// (0x0001e100) indicator_pane_g1

0x33cb,	// (0x00017846) navi_navi_icon_text_pane_srt_g1

0xc24e,	// (0x000206c9) soft_indicator_pane_t1

0xc268,	// (0x000206e3) aid_ps_area_pane

0x9c9b,	// (0x0001e116) aid_ps_clock_pane

0xc279,	// (0x000206f4) aid_ps_indicator_pane

0xc285,	// (0x00020700) indicator_ps_pane_ParamLimits

0xc285,	// (0x00020700) indicator_ps_pane

0xc294,	// (0x0002070f) power_save_pane_g1_ParamLimits

0xc294,	// (0x0002070f) power_save_pane_g1

0xc2a0,	// (0x0002071b) power_save_pane_g2_ParamLimits

0xc2a0,	// (0x0002071b) power_save_pane_g2

0xdf66,	// (0x000223e1) aid_navinavi_width_pane

0xc268,	// (0x000206e3) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000239e5) power_save_pane_g_ParamLimits

0xf56a,	// (0x000239e5) power_save_pane_g

0xc2ae,	// (0x00020729) power_save_pane_t1_ParamLimits

0xc2ae,	// (0x00020729) power_save_pane_t1

0x9c9b,	// (0x0001e116) aid_ps_clock_pane_ParamLimits

0xc279,	// (0x000206f4) aid_ps_indicator_pane_ParamLimits

0xc2c0,	// (0x0002073b) power_save_pane_t4_ParamLimits

0xc2c0,	// (0x0002073b) power_save_pane_t4

0x0001,

0xf56f,	// (0x000239ea) power_save_pane_t_ParamLimits

0xf56f,	// (0x000239ea) power_save_pane_t

0xc2ea,	// (0x00020765) power_save_t3_ParamLimits

0xc2ea,	// (0x00020765) power_save_t3

0xc2d5,	// (0x00020750) power_save_t2_ParamLimits

0xc2d5,	// (0x00020750) power_save_t2

0xc2ff,	// (0x0002077a) indicator_ps_pane_g1

0x9ca9,	// (0x0001e124) ai_gene_pane_ParamLimits

0x9ca9,	// (0x0001e124) ai_gene_pane

0x9cc0,	// (0x0001e13b) ai_links_pane_ParamLimits

0x9cc0,	// (0x0001e13b) ai_links_pane

0x9cd8,	// (0x0001e153) indicator_pane_cp1_ParamLimits

0x9cd8,	// (0x0001e153) indicator_pane_cp1

0x9ce7,	// (0x0001e162) main_pane_idle_g1_cp_ParamLimits

0x9ce7,	// (0x0001e162) main_pane_idle_g1_cp

0x9cff,	// (0x0001e17a) popup_ai_links_title_window

0x9d08,	// (0x0001e183) soft_indicator_pane_cp1_ParamLimits

0x9d08,	// (0x0001e183) soft_indicator_pane_cp1

0x2cad,	// (0x00017128) ai_links_pane_g1

0x2cb6,	// (0x00017131) grid_ai_links_pane

0xb5a0,	// (0x0001fa1b) ai_gene_pane_1

0x2c9b,	// (0x00017116) ai_gene_pane_2

0x2ca4,	// (0x0001711f) list_highlight_pane_cp4

0xb57c,	// (0x0001f9f7) cell_ai_link_pane_ParamLimits

0xb57c,	// (0x0001f9f7) cell_ai_link_pane

0x2c6c,	// (0x000170e7) cell_ai_link_pane_g1

0xc42c,	// (0x000208a7) cell_ai_link_pane_g2

0x0001,

0xf8f7,	// (0x00023d72) cell_ai_link_pane_g

0xc185,	// (0x00020600) grid_highlight_cp2

0xc185,	// (0x00020600) bg_popup_sub_pane_cp1

0xc316,	// (0x00020791) popup_ai_links_title_window_t1

0x2bbc,	// (0x00017037) ai_gene_pane_1_g1_ParamLimits

0x2bbc,	// (0x00017037) ai_gene_pane_1_g1

0x2bc8,	// (0x00017043) ai_gene_pane_1_g2_ParamLimits

0x2bc8,	// (0x00017043) ai_gene_pane_1_g2

0x0001,

0xf8ed,	// (0x00023d68) ai_gene_pane_1_g_ParamLimits

0xf8ed,	// (0x00023d68) ai_gene_pane_1_g

0x2bd5,	// (0x00017050) ai_gene_pane_1_t1_ParamLimits

0x2bd5,	// (0x00017050) ai_gene_pane_1_t1

0x2c09,	// (0x00017084) grid_ai_soft_ind_pane

0x2ba7,	// (0x00017022) ai_gene_pane_2_t1_ParamLimits

0x2ba7,	// (0x00017022) ai_gene_pane_2_t1

0x9d1c,	// (0x0001e197) main_pane_empty_t1_ParamLimits

0x9d1c,	// (0x0001e197) main_pane_empty_t1

0x9d34,	// (0x0001e1af) main_pane_empty_t2_ParamLimits

0x9d34,	// (0x0001e1af) main_pane_empty_t2

0x9d49,	// (0x0001e1c4) main_pane_empty_t3_ParamLimits

0x9d49,	// (0x0001e1c4) main_pane_empty_t3

0x9d5b,	// (0x0001e1d6) main_pane_empty_t4_ParamLimits

0x9d5b,	// (0x0001e1d6) main_pane_empty_t4

0x9d6d,	// (0x0001e1e8) main_pane_empty_t5_ParamLimits

0x9d6d,	// (0x0001e1e8) main_pane_empty_t5

0x0004,

0xf574,	// (0x000239ef) main_pane_empty_t_ParamLimits

0xf574,	// (0x000239ef) main_pane_empty_t

0xc722,	// (0x00020b9d) bg_popup_window_pane_ParamLimits

0xc722,	// (0x00020b9d) bg_popup_window_pane

0xb4f6,	// (0x0001f971) find_popup_pane_cp2_ParamLimits

0xb4f6,	// (0x0001f971) find_popup_pane_cp2

0x2923,	// (0x00016d9e) heading_pane_ParamLimits

0x2923,	// (0x00016d9e) heading_pane

0xc185,	// (0x00020600) bg_popup_sub_pane

0xb477,	// (0x0001f8f2) bg_popup_window_pane_g1_ParamLimits

0xb477,	// (0x0001f8f2) bg_popup_window_pane_g1

0xb486,	// (0x0001f901) bg_popup_window_pane_g2_ParamLimits

0xb486,	// (0x0001f901) bg_popup_window_pane_g2

0xb492,	// (0x0001f90d) bg_popup_window_pane_g3_ParamLimits

0xb492,	// (0x0001f90d) bg_popup_window_pane_g3

0xb49e,	// (0x0001f919) bg_popup_window_pane_g4_ParamLimits

0xb49e,	// (0x0001f919) bg_popup_window_pane_g4

0xb4ad,	// (0x0001f928) bg_popup_window_pane_g5_ParamLimits

0xb4ad,	// (0x0001f928) bg_popup_window_pane_g5

0xb4bd,	// (0x0001f938) bg_popup_window_pane_g6_ParamLimits

0xb4bd,	// (0x0001f938) bg_popup_window_pane_g6

0xb4c9,	// (0x0001f944) bg_popup_window_pane_g7_ParamLimits

0xb4c9,	// (0x0001f944) bg_popup_window_pane_g7

0xb4d8,	// (0x0001f953) bg_popup_window_pane_g8_ParamLimits

0xb4d8,	// (0x0001f953) bg_popup_window_pane_g8

0xb4e7,	// (0x0001f962) bg_popup_window_pane_g9_ParamLimits

0xb4e7,	// (0x0001f962) bg_popup_window_pane_g9

0x28fd,	// (0x00016d78) bg_popup_window_pane_g10_ParamLimits

0x28fd,	// (0x00016d78) bg_popup_window_pane_g10

0x0009,

0xf8b5,	// (0x00023d30) bg_popup_window_pane_g_ParamLimits

0xf8b5,	// (0x00023d30) bg_popup_window_pane_g

0x2826,	// (0x00016ca1) bg_popup_heading_pane_ParamLimits

0x2826,	// (0x00016ca1) bg_popup_heading_pane

0xeb65,	// (0x00022fe0) tabs_4_passive_pane_cp_srt_ParamLimits

0xeb65,	// (0x00022fe0) tabs_4_passive_pane_cp_srt

0xeb77,	// (0x00022ff2) tabs_4_passive_pane_srt_ParamLimits

0x283a,	// (0x00016cb5) heading_pane_g2

0xeb77,	// (0x00022ff2) tabs_4_passive_pane_srt

0x1b77,	// (0x00015ff2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1b77,	// (0x00015ff2) bg_passive_tab_pane_cp3_srt

0x2842,	// (0x00016cbd) heading_pane_t1_ParamLimits

0x2842,	// (0x00016cbd) heading_pane_t1

0x2859,	// (0x00016cd4) heading_pane_t2_ParamLimits

0x2859,	// (0x00016cd4) heading_pane_t2

0x0001,

0xf8b0,	// (0x00023d2b) heading_pane_t_ParamLimits

0xf8b0,	// (0x00023d2b) heading_pane_t

0x2363,	// (0x000167de) bg_popup_heading_pane_g1

0x2412,	// (0x0001688d) bg_popup_heading_pane_g2

0x241c,	// (0x00016897) bg_popup_heading_pane_g3

0x2426,	// (0x000168a1) bg_popup_heading_pane_g4

0x2430,	// (0x000168ab) bg_popup_heading_pane_g5

0x243a,	// (0x000168b5) bg_popup_heading_pane_g6

0x2442,	// (0x000168bd) bg_popup_heading_pane_g7

0x244a,	// (0x000168c5) bg_popup_heading_pane_g8

0x2454,	// (0x000168cf) bg_popup_heading_pane_g9

0x0008,

0xf86c,	// (0x00023ce7) bg_popup_heading_pane_g

0x1a57,	// (0x00015ed2) bg_popup_sub_pane_g1

0x1a67,	// (0x00015ee2) bg_popup_sub_pane_g2

0x1a5f,	// (0x00015eda) bg_popup_sub_pane_g3

0x1a77,	// (0x00015ef2) bg_popup_sub_pane_g4

0x1a6f,	// (0x00015eea) bg_popup_sub_pane_g5

0x1a7f,	// (0x00015efa) bg_popup_sub_pane_g6

0x1a87,	// (0x00015f02) bg_popup_sub_pane_g7

0x1a97,	// (0x00015f12) bg_popup_sub_pane_g8

0x1a8f,	// (0x00015f0a) bg_popup_sub_pane_g9

0x0008,

0xf846,	// (0x00023cc1) bg_popup_sub_pane_g

0xc1d3,	// (0x0002064e) bg_popup_window_pane_cp5_ParamLimits

0xc1d3,	// (0x0002064e) bg_popup_window_pane_cp5

0xc333,	// (0x000207ae) popup_note_window_g1_ParamLimits

0xc333,	// (0x000207ae) popup_note_window_g1

0xc33f,	// (0x000207ba) popup_note_window_t1_ParamLimits

0xc33f,	// (0x000207ba) popup_note_window_t1

0xc355,	// (0x000207d0) popup_note_window_t2_ParamLimits

0xc355,	// (0x000207d0) popup_note_window_t2

0xc36b,	// (0x000207e6) popup_note_window_t3_ParamLimits

0xc36b,	// (0x000207e6) popup_note_window_t3

0xc381,	// (0x000207fc) popup_note_window_t4_ParamLimits

0xc381,	// (0x000207fc) popup_note_window_t4

0xc3a9,	// (0x00020824) popup_note_window_t5_ParamLimits

0xc3a9,	// (0x00020824) popup_note_window_t5

0x0004,

0xf57f,	// (0x000239fa) popup_note_window_t_ParamLimits

0xf57f,	// (0x000239fa) popup_note_window_t

0xc3cd,	// (0x00020848) bg_popup_window_pane_cp6_ParamLimits

0xc3cd,	// (0x00020848) bg_popup_window_pane_cp6

0x22df,	// (0x0001675a) popup_note_image_window_g1_ParamLimits

0x22df,	// (0x0001675a) popup_note_image_window_g1

0xb31c,	// (0x0001f797) popup_note_image_window_g2_ParamLimits

0xb31c,	// (0x0001f797) popup_note_image_window_g2

0x0001,

0xf83a,	// (0x00023cb5) popup_note_image_window_g_ParamLimits

0xf83a,	// (0x00023cb5) popup_note_image_window_g

0x2304,	// (0x0001677f) popup_note_image_window_t1_ParamLimits

0x2304,	// (0x0001677f) popup_note_image_window_t1

0x231d,	// (0x00016798) popup_note_image_window_t2_ParamLimits

0x231d,	// (0x00016798) popup_note_image_window_t2

0x2336,	// (0x000167b1) popup_note_image_window_t3_ParamLimits

0x2336,	// (0x000167b1) popup_note_image_window_t3

0x0002,

0xf83f,	// (0x00023cba) popup_note_image_window_t_ParamLimits

0xf83f,	// (0x00023cba) popup_note_image_window_t

0x21a8,	// (0x00016623) bg_popup_window_pane_cp7_ParamLimits

0x21a8,	// (0x00016623) bg_popup_window_pane_cp7

0x21d8,	// (0x00016653) popup_note_wait_window_g1_ParamLimits

0x21d8,	// (0x00016653) popup_note_wait_window_g1

0x21e4,	// (0x0001665f) popup_note_wait_window_g2_ParamLimits

0x21e4,	// (0x0001665f) popup_note_wait_window_g2

0x0002,

0xf828,	// (0x00023ca3) popup_note_wait_window_g_ParamLimits

0xf828,	// (0x00023ca3) popup_note_wait_window_g

0x21fc,	// (0x00016677) popup_note_wait_window_t1_ParamLimits

0x21fc,	// (0x00016677) popup_note_wait_window_t1

0xb2bd,	// (0x0001f738) popup_note_wait_window_t2_ParamLimits

0xb2bd,	// (0x0001f738) popup_note_wait_window_t2

0xb2da,	// (0x0001f755) popup_note_wait_window_t3_ParamLimits

0xb2da,	// (0x0001f755) popup_note_wait_window_t3

0xb2ed,	// (0x0001f768) popup_note_wait_window_t4_ParamLimits

0xb2ed,	// (0x0001f768) popup_note_wait_window_t4

0x0004,

0xf82f,	// (0x00023caa) popup_note_wait_window_t_ParamLimits

0xf82f,	// (0x00023caa) popup_note_wait_window_t

0x2278,	// (0x000166f3) wait_bar_pane_ParamLimits

0x2278,	// (0x000166f3) wait_bar_pane

0xc185,	// (0x00020600) wait_anim_pane

0xc185,	// (0x00020600) wait_border_pane

0xc17b,	// (0x000205f6) wait_anim_pane_g1

0xc17b,	// (0x000205f6) wait_anim_pane_g2

0x0001,

0xf6ef,	// (0x00023b6a) wait_anim_pane_g

0x2154,	// (0x000165cf) wait_border_pane_g1

0x215f,	// (0x000165da) wait_border_pane_g2

0x2168,	// (0x000165e3) wait_border_pane_g3

0x0002,

0xf821,	// (0x00023c9c) wait_border_pane_g

0x1fbf,	// (0x0001643a) bg_popup_window_pane_cp16_ParamLimits

0x1fbf,	// (0x0001643a) bg_popup_window_pane_cp16

0xb26d,	// (0x0001f6e8) indicator_popup_pane_cp4_ParamLimits

0xb26d,	// (0x0001f6e8) indicator_popup_pane_cp4

0x20d3,	// (0x0001654e) popup_query_data_window_t1_ParamLimits

0x20d3,	// (0x0001654e) popup_query_data_window_t1

0x20e5,	// (0x00016560) popup_query_data_window_t2_ParamLimits

0x20e5,	// (0x00016560) popup_query_data_window_t2

0x20fe,	// (0x00016579) popup_query_data_window_t3_ParamLimits

0x20fe,	// (0x00016579) popup_query_data_window_t3

0x0002,

0xf81a,	// (0x00023c95) popup_query_data_window_t_ParamLimits

0xf81a,	// (0x00023c95) popup_query_data_window_t

0xb281,	// (0x0001f6fc) query_popup_data_pane_ParamLimits

0xb281,	// (0x0001f6fc) query_popup_data_pane

0xb295,	// (0x0001f710) query_popup_data_pane_cp1_ParamLimits

0xb295,	// (0x0001f710) query_popup_data_pane_cp1

0x1fbf,	// (0x0001643a) bg_popup_window_pane_cp10_ParamLimits

0x1fbf,	// (0x0001643a) bg_popup_window_pane_cp10

0xb1e8,	// (0x0001f663) indicator_popup_pane_ParamLimits

0xb1e8,	// (0x0001f663) indicator_popup_pane

0xb20a,	// (0x0001f685) popup_query_code_window_t1_ParamLimits

0xb20a,	// (0x0001f685) popup_query_code_window_t1

0xb224,	// (0x0001f69f) popup_query_code_window_t2_ParamLimits

0xb224,	// (0x0001f69f) popup_query_code_window_t2

0x2076,	// (0x000164f1) popup_query_code_window_t3_ParamLimits

0x2076,	// (0x000164f1) popup_query_code_window_t3

0x0002,

0xf813,	// (0x00023c8e) popup_query_code_window_t_ParamLimits

0xf813,	// (0x00023c8e) popup_query_code_window_t

0x20a5,	// (0x00016520) query_popup_pane_ParamLimits

0x20a5,	// (0x00016520) query_popup_pane

0xc3cd,	// (0x00020848) bg_popup_window_pane_cp15_ParamLimits

0xc3cd,	// (0x00020848) bg_popup_window_pane_cp15

0x9da5,	// (0x0001e220) indicator_popup_pane_cp1_ParamLimits

0x9da5,	// (0x0001e220) indicator_popup_pane_cp1

0x9db8,	// (0x0001e233) indicator_popup_pane_cp2_ParamLimits

0x9db8,	// (0x0001e233) indicator_popup_pane_cp2

0x9dcb,	// (0x0001e246) popup_query_data_code_window_g1_ParamLimits

0x9dcb,	// (0x0001e246) popup_query_data_code_window_g1

0xc3eb,	// (0x00020866) popup_query_data_code_window_t1_ParamLimits

0xc3eb,	// (0x00020866) popup_query_data_code_window_t1

0xc3fd,	// (0x00020878) popup_query_data_code_window_t2_ParamLimits

0xc3fd,	// (0x00020878) popup_query_data_code_window_t2

0x9dde,	// (0x0001e259) popup_query_data_code_window_t3_ParamLimits

0x9dde,	// (0x0001e259) popup_query_data_code_window_t3

0x9df4,	// (0x0001e26f) popup_query_data_code_window_t4_ParamLimits

0x9df4,	// (0x0001e26f) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00023a05) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00023a05) popup_query_data_code_window_t

0xe977,	// (0x00022df2) list_single_midp_graphic_pane_g3

0x9e0c,	// (0x0001e287) query_popup_data_pane_cp2_ParamLimits

0x9e1f,	// (0x0001e29a) query_popup_pane_cp2_ParamLimits

0x9e1f,	// (0x0001e29a) query_popup_pane_cp2

0xc185,	// (0x00020600) bg_popup_window_pane_cp11

0x1fab,	// (0x00016426) heading_pane_cp5

0xc459,	// (0x000208d4) listscroll_popup_info_pane

0xc185,	// (0x00020600) input_focus_pane_cp3

0xc40f,	// (0x0002088a) query_popup_pane_t1

0xc41d,	// (0x00020898) list_popup_info_pane_ParamLimits

0xc41d,	// (0x00020898) list_popup_info_pane

0xc42c,	// (0x000208a7) listscroll_popup_info_pane_g1

0xc434,	// (0x000208af) scroll_pane_cp7

0x9e32,	// (0x0001e2ad) popup_info_list_pane_t1_ParamLimits

0x9e32,	// (0x0001e2ad) popup_info_list_pane_t1

0x9e4c,	// (0x0001e2c7) popup_info_list_pane_t2_ParamLimits

0x9e4c,	// (0x0001e2c7) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00023a0e) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00023a0e) popup_info_list_pane_t

0xc185,	// (0x00020600) bg_popup_window_pane_cp12

0xb9fd,	// (0x0001fe78) find_popup_pane

0xc1e1,	// (0x0002065c) bg_popup_window_pane_cp3

0xc43e,	// (0x000208b9) heading_pane_cp3

0xc44a,	// (0x000208c5) listscroll_popup_graphic_pane

0xc185,	// (0x00020600) bg_popup_window_pane_cp4

0x9eb6,	// (0x0001e331) heading_pane_cp4

0xc459,	// (0x000208d4) listscroll_popup_colour_pane

0x9ebe,	// (0x0001e339) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9ebe,	// (0x0001e339) cell_large_graphic_colour_none_popup_pane

0x9ed2,	// (0x0001e34d) grid_large_graphic_colour_popup_pane_ParamLimits

0x9ed2,	// (0x0001e34d) grid_large_graphic_colour_popup_pane

0x9ef6,	// (0x0001e371) listscroll_popup_colour_pane_g1_ParamLimits

0x9ef6,	// (0x0001e371) listscroll_popup_colour_pane_g1

0x9f0d,	// (0x0001e388) listscroll_popup_colour_pane_g2_ParamLimits

0x9f0d,	// (0x0001e388) listscroll_popup_colour_pane_g2

0x9f24,	// (0x0001e39f) listscroll_popup_colour_pane_g3_ParamLimits

0x9f24,	// (0x0001e39f) listscroll_popup_colour_pane_g3

0x9f34,	// (0x0001e3af) listscroll_popup_colour_pane_g4_ParamLimits

0x9f34,	// (0x0001e3af) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00023a13) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00023a13) listscroll_popup_colour_pane_g

0xc461,	// (0x000208dc) scroll_pane_cp6_ParamLimits

0xc461,	// (0x000208dc) scroll_pane_cp6

0x9f44,	// (0x0001e3bf) cell_large_graphic_colour_popup_pane_ParamLimits

0x9f44,	// (0x0001e3bf) cell_large_graphic_colour_popup_pane

0x9f63,	// (0x0001e3de) cell_large_graphic_colour_none_popup_pane_t1

0xc185,	// (0x00020600) grid_highlight_pane_cp5

0xc473,	// (0x000208ee) cell_large_graphic_colour_popup_pane_g1

0xc47b,	// (0x000208f6) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00023a1c) cell_large_graphic_colour_popup_pane_g

0xc483,	// (0x000208fe) cell_large_graphic_colour_popup_pane_g2_copy1

0xc48c,	// (0x00020907) grid_highlight_pane_cp4

0xc494,	// (0x0002090f) bg_popup_window_pane_cp8_ParamLimits

0xc494,	// (0x0002090f) bg_popup_window_pane_cp8

0x9f72,	// (0x0001e3ed) popup_snote_single_text_window_g1_ParamLimits

0x9f72,	// (0x0001e3ed) popup_snote_single_text_window_g1

0x9f84,	// (0x0001e3ff) popup_snote_single_text_window_t1_ParamLimits

0x9f84,	// (0x0001e3ff) popup_snote_single_text_window_t1

0x9f97,	// (0x0001e412) popup_snote_single_text_window_t2_ParamLimits

0x9f97,	// (0x0001e412) popup_snote_single_text_window_t2

0x9faa,	// (0x0001e425) popup_snote_single_text_window_t3_ParamLimits

0x9faa,	// (0x0001e425) popup_snote_single_text_window_t3

0x9fe3,	// (0x0001e45e) popup_snote_single_text_window_t4_ParamLimits

0x9fe3,	// (0x0001e45e) popup_snote_single_text_window_t4

0xa017,	// (0x0001e492) popup_snote_single_text_window_t5_ParamLimits

0xa017,	// (0x0001e492) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00023a21) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00023a21) popup_snote_single_text_window_t

0xc4af,	// (0x0002092a) bg_popup_window_pane_cp9_ParamLimits

0xc4af,	// (0x0002092a) bg_popup_window_pane_cp9

0x9f72,	// (0x0001e3ed) popup_snote_single_graphic_window_g1_ParamLimits

0x9f72,	// (0x0001e3ed) popup_snote_single_graphic_window_g1

0xc4bd,	// (0x00020938) popup_snote_single_graphic_window_g2_ParamLimits

0xc4bd,	// (0x00020938) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00023a2c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00023a2c) popup_snote_single_graphic_window_g

0xc4c9,	// (0x00020944) popup_snote_single_graphic_window_t1_ParamLimits

0xc4c9,	// (0x00020944) popup_snote_single_graphic_window_t1

0xc4dc,	// (0x00020957) popup_snote_single_graphic_window_t2_ParamLimits

0xc4dc,	// (0x00020957) popup_snote_single_graphic_window_t2

0x9faa,	// (0x0001e425) popup_snote_single_graphic_window_t3_ParamLimits

0x9faa,	// (0x0001e425) popup_snote_single_graphic_window_t3

0x9fe3,	// (0x0001e45e) popup_snote_single_graphic_window_t4_ParamLimits

0x9fe3,	// (0x0001e45e) popup_snote_single_graphic_window_t4

0xa046,	// (0x0001e4c1) popup_snote_single_graphic_window_t5_ParamLimits

0xa046,	// (0x0001e4c1) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00023a31) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00023a31) popup_snote_single_graphic_window_t

0x3327,	// (0x000177a2) grid_graphic_popup_pane_ParamLimits

0x3327,	// (0x000177a2) grid_graphic_popup_pane

0x3351,	// (0x000177cc) listscroll_popup_graphic_pane_g1_ParamLimits

0x3351,	// (0x000177cc) listscroll_popup_graphic_pane_g1

0xb99b,	// (0x0001fe16) listscroll_popup_graphic_pane_g2_ParamLimits

0xb99b,	// (0x0001fe16) listscroll_popup_graphic_pane_g2

0x0001,

0xf990,	// (0x00023e0b) listscroll_popup_graphic_pane_g_ParamLimits

0xf990,	// (0x00023e0b) listscroll_popup_graphic_pane_g

0x3379,	// (0x000177f4) scroll_pane_cp5

0xb940,	// (0x0001fdbb) cell_graphic_popup_pane_ParamLimits

0xb940,	// (0x0001fdbb) cell_graphic_popup_pane

0x32a7,	// (0x00017722) cell_graphic_popup_pane_g1

0x32af,	// (0x0001772a) cell_graphic_popup_pane_g2

0xc483,	// (0x000208fe) cell_graphic_popup_pane_g3

0x0002,

0xf989,	// (0x00023e04) cell_graphic_popup_pane_g

0x32b8,	// (0x00017733) cell_graphic_popup_pane_t2

0xc48c,	// (0x00020907) grid_highlight_pane_cp3

0xc501,	// (0x0002097c) list_gen_pane_ParamLimits

0xc501,	// (0x0002097c) list_gen_pane

0xc529,	// (0x000209a4) scroll_pane

0xb8aa,	// (0x0001fd25) bg_list_pane_g1_ParamLimits

0xb8aa,	// (0x0001fd25) bg_list_pane_g1

0xb8c5,	// (0x0001fd40) bg_list_pane_g2_ParamLimits

0xb8c5,	// (0x0001fd40) bg_list_pane_g2

0xb8d8,	// (0x0001fd53) bg_list_pane_g3_ParamLimits

0xb8d8,	// (0x0001fd53) bg_list_pane_g3

0xb8ea,	// (0x0001fd65) bg_list_pane_g4_ParamLimits

0xb8ea,	// (0x0001fd65) bg_list_pane_g4

0xb8fc,	// (0x0001fd77) bg_list_pane_g5_ParamLimits

0xb8fc,	// (0x0001fd77) bg_list_pane_g5

0x0004,

0xf97e,	// (0x00023df9) bg_list_pane_g_ParamLimits

0xf97e,	// (0x00023df9) bg_list_pane_g

0xb84e,	// (0x0001fcc9) list_double2_graphic_large_graphic_pane_ParamLimits

0xb84e,	// (0x0001fcc9) list_double2_graphic_large_graphic_pane

0xb84e,	// (0x0001fcc9) list_double2_graphic_pane_ParamLimits

0xb84e,	// (0x0001fcc9) list_double2_graphic_pane

0xb84e,	// (0x0001fcc9) list_double2_large_graphic_pane_ParamLimits

0xb84e,	// (0x0001fcc9) list_double2_large_graphic_pane

0xb84e,	// (0x0001fcc9) list_double2_pane_ParamLimits

0xb84e,	// (0x0001fcc9) list_double2_pane

0xb84e,	// (0x0001fcc9) list_double_graphic_heading_pane_ParamLimits

0xb84e,	// (0x0001fcc9) list_double_graphic_heading_pane

0xb84e,	// (0x0001fcc9) list_double_graphic_pane_ParamLimits

0xb84e,	// (0x0001fcc9) list_double_graphic_pane

0xb84e,	// (0x0001fcc9) list_double_heading_pane_ParamLimits

0xb84e,	// (0x0001fcc9) list_double_heading_pane

0xb84e,	// (0x0001fcc9) list_double_large_graphic_pane_ParamLimits

0xb84e,	// (0x0001fcc9) list_double_large_graphic_pane

0xb84e,	// (0x0001fcc9) list_double_number_pane_ParamLimits

0xb84e,	// (0x0001fcc9) list_double_number_pane

0xb84e,	// (0x0001fcc9) list_double_pane_ParamLimits

0xb84e,	// (0x0001fcc9) list_double_pane

0xb84e,	// (0x0001fcc9) list_double_time_pane_ParamLimits

0xb84e,	// (0x0001fcc9) list_double_time_pane

0xb84e,	// (0x0001fcc9) list_setting_number_pane_ParamLimits

0xb84e,	// (0x0001fcc9) list_setting_number_pane

0xb84e,	// (0x0001fcc9) list_setting_pane_ParamLimits

0xb84e,	// (0x0001fcc9) list_setting_pane

0xb860,	// (0x0001fcdb) list_single_2graphic_pane_ParamLimits

0xb860,	// (0x0001fcdb) list_single_2graphic_pane

0xb860,	// (0x0001fcdb) list_single_graphic_heading_pane_ParamLimits

0xb860,	// (0x0001fcdb) list_single_graphic_heading_pane

0xb860,	// (0x0001fcdb) list_single_graphic_pane_ParamLimits

0xb860,	// (0x0001fcdb) list_single_graphic_pane

0xb860,	// (0x0001fcdb) list_single_heading_pane_ParamLimits

0xb860,	// (0x0001fcdb) list_single_heading_pane

0xb860,	// (0x0001fcdb) list_single_large_graphic_pane_ParamLimits

0xb860,	// (0x0001fcdb) list_single_large_graphic_pane

0xb860,	// (0x0001fcdb) list_single_number_heading_pane_ParamLimits

0xb860,	// (0x0001fcdb) list_single_number_heading_pane

0xb860,	// (0x0001fcdb) list_single_number_pane_ParamLimits

0xb860,	// (0x0001fcdb) list_single_number_pane

0xb860,	// (0x0001fcdb) list_single_pane_ParamLimits

0xb860,	// (0x0001fcdb) list_single_pane

0xc185,	// (0x00020600) list_highlight_pane_cp1

0xc55d,	// (0x000209d8) list_single_pane_g1_ParamLimits

0xc55d,	// (0x000209d8) list_single_pane_g1

0xc569,	// (0x000209e4) list_single_pane_g2_ParamLimits

0xc569,	// (0x000209e4) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00023a43) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00023a43) list_single_pane_g

0xb838,	// (0x0001fcb3) list_single_pane_t1_ParamLimits

0xb838,	// (0x0001fcb3) list_single_pane_t1

0xc55d,	// (0x000209d8) list_single_number_pane_g1_ParamLimits

0xc55d,	// (0x000209d8) list_single_number_pane_g1

0xc569,	// (0x000209e4) list_single_number_pane_g2_ParamLimits

0xc569,	// (0x000209e4) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00023a43) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00023a43) list_single_number_pane_g

0x19e5,	// (0x00015e60) list_single_number_pane_t1_ParamLimits

0x19e5,	// (0x00015e60) list_single_number_pane_t1

0xb644,	// (0x0001fabf) list_single_number_pane_t2_ParamLimits

0xb644,	// (0x0001fabf) list_single_number_pane_t2

0x0001,

0xf93f,	// (0x00023dba) list_single_number_pane_t_ParamLimits

0xf93f,	// (0x00023dba) list_single_number_pane_t

0x19d9,	// (0x00015e54) list_single_graphic_pane_g1_ParamLimits

0x19d9,	// (0x00015e54) list_single_graphic_pane_g1

0xc55d,	// (0x000209d8) list_single_graphic_pane_g2_ParamLimits

0xc55d,	// (0x000209d8) list_single_graphic_pane_g2

0xc569,	// (0x000209e4) list_single_graphic_pane_g3_ParamLimits

0xc569,	// (0x000209e4) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00023a3c) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00023a3c) list_single_graphic_pane_g

0x19e5,	// (0x00015e60) list_single_graphic_pane_t1_ParamLimits

0x19e5,	// (0x00015e60) list_single_graphic_pane_t1

0xc55d,	// (0x000209d8) list_single_heading_pane_g1_ParamLimits

0xc55d,	// (0x000209d8) list_single_heading_pane_g1

0xc569,	// (0x000209e4) list_single_heading_pane_g2_ParamLimits

0xc569,	// (0x000209e4) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00023a43) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00023a43) list_single_heading_pane_g

0xa07f,	// (0x0001e4fa) list_single_heading_pane_t1_ParamLimits

0xa07f,	// (0x0001e4fa) list_single_heading_pane_t1

0xa095,	// (0x0001e510) list_single_heading_pane_t2_ParamLimits

0xa095,	// (0x0001e510) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00023a48) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00023a48) list_single_heading_pane_t

0xc55d,	// (0x000209d8) list_single_number_heading_pane_g1_ParamLimits

0xc55d,	// (0x000209d8) list_single_number_heading_pane_g1

0xc569,	// (0x000209e4) list_single_number_heading_pane_g2_ParamLimits

0xc569,	// (0x000209e4) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00023a43) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00023a43) list_single_number_heading_pane_g

0xa07f,	// (0x0001e4fa) list_single_number_heading_pane_t1_ParamLimits

0xa07f,	// (0x0001e4fa) list_single_number_heading_pane_t1

0xa0a7,	// (0x0001e522) list_single_number_heading_pane_t2_ParamLimits

0xa0a7,	// (0x0001e522) list_single_number_heading_pane_t2

0xa0b9,	// (0x0001e534) list_single_number_heading_pane_t3_ParamLimits

0xa0b9,	// (0x0001e534) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00023a4d) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00023a4d) list_single_number_heading_pane_t

0xa0cb,	// (0x0001e546) list_single_graphic_heading_pane_g1_ParamLimits

0xa0cb,	// (0x0001e546) list_single_graphic_heading_pane_g1

0xa0d7,	// (0x0001e552) list_single_graphic_heading_pane_g4_ParamLimits

0xa0d7,	// (0x0001e552) list_single_graphic_heading_pane_g4

0xc569,	// (0x000209e4) list_single_graphic_heading_pane_g5_ParamLimits

0xc569,	// (0x000209e4) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00023a54) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00023a54) list_single_graphic_heading_pane_g

0xa07f,	// (0x0001e4fa) list_single_graphic_heading_pane_t1_ParamLimits

0xa07f,	// (0x0001e4fa) list_single_graphic_heading_pane_t1

0xa0e8,	// (0x0001e563) list_single_graphic_heading_pane_t2_ParamLimits

0xa0e8,	// (0x0001e563) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00023a5b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00023a5b) list_single_graphic_heading_pane_t

0x39fd,	// (0x00017e78) list_single_large_graphic_pane_g1_ParamLimits

0x39fd,	// (0x00017e78) list_single_large_graphic_pane_g1

0xc55d,	// (0x000209d8) list_single_large_graphic_pane_g2_ParamLimits

0xc55d,	// (0x000209d8) list_single_large_graphic_pane_g2

0xc569,	// (0x000209e4) list_single_large_graphic_pane_g3_ParamLimits

0xc569,	// (0x000209e4) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00023a60) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00023a60) list_single_large_graphic_pane_g

0x215f,	// (0x000165da) wait_border_pane_g2_copy1

0xa0fa,	// (0x0001e575) list_single_large_graphic_pane_g4_cp2

0x19e5,	// (0x00015e60) list_single_large_graphic_pane_t1_ParamLimits

0x19e5,	// (0x00015e60) list_single_large_graphic_pane_t1

0xa102,	// (0x0001e57d) list_double_pane_g1_ParamLimits

0xa102,	// (0x0001e57d) list_double_pane_g1

0xa10e,	// (0x0001e589) list_double_pane_g2_ParamLimits

0xa10e,	// (0x0001e589) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00023a67) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00023a67) list_double_pane_g

0xa11a,	// (0x0001e595) list_double_pane_t1_ParamLimits

0xa11a,	// (0x0001e595) list_double_pane_t1

0xa130,	// (0x0001e5ab) list_double_pane_t2_ParamLimits

0xa130,	// (0x0001e5ab) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00023a6c) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00023a6c) list_double_pane_t

0xa142,	// (0x0001e5bd) list_double2_pane_g1_ParamLimits

0xa142,	// (0x0001e5bd) list_double2_pane_g1

0xa153,	// (0x0001e5ce) list_double2_pane_g2_ParamLimits

0xa153,	// (0x0001e5ce) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00023a71) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00023a71) list_double2_pane_g

0xa15f,	// (0x0001e5da) list_double2_pane_t1_ParamLimits

0xa15f,	// (0x0001e5da) list_double2_pane_t1

0xa175,	// (0x0001e5f0) list_double2_pane_t2_ParamLimits

0xa175,	// (0x0001e5f0) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00023a76) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00023a76) list_double2_pane_t

0xa102,	// (0x0001e57d) list_double_number_pane_g1_ParamLimits

0xa102,	// (0x0001e57d) list_double_number_pane_g1

0xa10e,	// (0x0001e589) list_double_number_pane_g2_ParamLimits

0xa10e,	// (0x0001e589) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00023a67) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00023a67) list_double_number_pane_g

0xa187,	// (0x0001e602) list_double_number_pane_t1_ParamLimits

0xa187,	// (0x0001e602) list_double_number_pane_t1

0xa199,	// (0x0001e614) list_double_number_pane_t2_ParamLimits

0xa199,	// (0x0001e614) list_double_number_pane_t2

0xa1af,	// (0x0001e62a) list_double_number_pane_t3_ParamLimits

0xa1af,	// (0x0001e62a) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00023a7b) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00023a7b) list_double_number_pane_t

0xa1c1,	// (0x0001e63c) list_double_graphic_pane_g1_ParamLimits

0xa1c1,	// (0x0001e63c) list_double_graphic_pane_g1

0xa1cd,	// (0x0001e648) list_double_graphic_pane_g2_ParamLimits

0xa1cd,	// (0x0001e648) list_double_graphic_pane_g2

0xa1dc,	// (0x0001e657) list_double_graphic_pane_g3_ParamLimits

0xa1dc,	// (0x0001e657) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00023a82) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00023a82) list_double_graphic_pane_g

0xa11a,	// (0x0001e595) list_double_graphic_pane_t1_ParamLimits

0xa11a,	// (0x0001e595) list_double_graphic_pane_t1

0xa130,	// (0x0001e5ab) list_double_graphic_pane_t2_ParamLimits

0xa130,	// (0x0001e5ab) list_double_graphic_pane_t2

0x0001,

0xf5f1,	// (0x00023a6c) list_double_graphic_pane_t_ParamLimits

0xf5f1,	// (0x00023a6c) list_double_graphic_pane_t

0xa1f4,	// (0x0001e66f) list_double2_graphic_pane_g1_ParamLimits

0xa1f4,	// (0x0001e66f) list_double2_graphic_pane_g1

0x4b32,	// (0x00018fad) list_double2_graphic_pane_g2_ParamLimits

0x4b32,	// (0x00018fad) list_double2_graphic_pane_g2

0xa153,	// (0x0001e5ce) list_double2_graphic_pane_g3_ParamLimits

0xa153,	// (0x0001e5ce) list_double2_graphic_pane_g3

0x0002,

0xf610,	// (0x00023a8b) list_double2_graphic_pane_g_ParamLimits

0xf610,	// (0x00023a8b) list_double2_graphic_pane_g

0xa200,	// (0x0001e67b) list_double2_graphic_pane_t1_ParamLimits

0xa200,	// (0x0001e67b) list_double2_graphic_pane_t1

0xa216,	// (0x0001e691) list_double2_graphic_pane_t2_ParamLimits

0xa216,	// (0x0001e691) list_double2_graphic_pane_t2

0x0001,

0xf617,	// (0x00023a92) list_double2_graphic_pane_t_ParamLimits

0xf617,	// (0x00023a92) list_double2_graphic_pane_t

0xa228,	// (0x0001e6a3) list_double_large_graphic_pane_g1_ParamLimits

0xa228,	// (0x0001e6a3) list_double_large_graphic_pane_g1

0xa247,	// (0x0001e6c2) list_double_large_graphic_pane_g2_ParamLimits

0xa247,	// (0x0001e6c2) list_double_large_graphic_pane_g2

0xa10e,	// (0x0001e589) list_double_large_graphic_pane_g3_ParamLimits

0xa10e,	// (0x0001e589) list_double_large_graphic_pane_g3

0xa258,	// (0x0001e6d3) list_double_large_graphic_pane_g4_ParamLimits

0xa258,	// (0x0001e6d3) list_double_large_graphic_pane_g4

0x0004,

0xf61c,	// (0x00023a97) list_double_large_graphic_pane_g_ParamLimits

0xf61c,	// (0x00023a97) list_double_large_graphic_pane_g

0xa26b,	// (0x0001e6e6) list_double_large_graphic_pane_t1_ParamLimits

0xa26b,	// (0x0001e6e6) list_double_large_graphic_pane_t1

0xa284,	// (0x0001e6ff) list_double_large_graphic_pane_t2_ParamLimits

0xa284,	// (0x0001e6ff) list_double_large_graphic_pane_t2

0x0001,

0xf627,	// (0x00023aa2) list_double_large_graphic_pane_t_ParamLimits

0xf627,	// (0x00023aa2) list_double_large_graphic_pane_t

0xa296,	// (0x0001e711) list_double2_large_graphic_pane_g1_ParamLimits

0xa296,	// (0x0001e711) list_double2_large_graphic_pane_g1

0xa142,	// (0x0001e5bd) list_double2_large_graphic_pane_g2_ParamLimits

0xa142,	// (0x0001e5bd) list_double2_large_graphic_pane_g2

0xa153,	// (0x0001e5ce) list_double2_large_graphic_pane_g3_ParamLimits

0xa153,	// (0x0001e5ce) list_double2_large_graphic_pane_g3

0x0002,

0xf62c,	// (0x00023aa7) list_double2_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00023aa7) list_double2_large_graphic_pane_g

0xa200,	// (0x0001e67b) list_double2_large_graphic_pane_t1_ParamLimits

0xa200,	// (0x0001e67b) list_double2_large_graphic_pane_t1

0xa216,	// (0x0001e691) list_double2_large_graphic_pane_t2_ParamLimits

0xa216,	// (0x0001e691) list_double2_large_graphic_pane_t2

0x0001,

0xf617,	// (0x00023a92) list_double2_large_graphic_pane_t_ParamLimits

0xf617,	// (0x00023a92) list_double2_large_graphic_pane_t

0xa2a2,	// (0x0001e71d) list_double_heading_pane_g1_ParamLimits

0xa2a2,	// (0x0001e71d) list_double_heading_pane_g1

0xa2b3,	// (0x0001e72e) list_double_heading_pane_g2_ParamLimits

0xa2b3,	// (0x0001e72e) list_double_heading_pane_g2

0x0001,

0xf633,	// (0x00023aae) list_double_heading_pane_g_ParamLimits

0xf633,	// (0x00023aae) list_double_heading_pane_g

0xa2bf,	// (0x0001e73a) list_double_heading_pane_t1_ParamLimits

0xa2bf,	// (0x0001e73a) list_double_heading_pane_t1

0xa2d5,	// (0x0001e750) list_double_heading_pane_t2_ParamLimits

0xa2d5,	// (0x0001e750) list_double_heading_pane_t2

0x0001,

0xf638,	// (0x00023ab3) list_double_heading_pane_t_ParamLimits

0xf638,	// (0x00023ab3) list_double_heading_pane_t

0xa2e7,	// (0x0001e762) list_double_graphic_heading_pane_g1_ParamLimits

0xa2e7,	// (0x0001e762) list_double_graphic_heading_pane_g1

0xa2a2,	// (0x0001e71d) list_double_graphic_heading_pane_g2_ParamLimits

0xa2a2,	// (0x0001e71d) list_double_graphic_heading_pane_g2

0xa2b3,	// (0x0001e72e) list_double_graphic_heading_pane_g3_ParamLimits

0xa2b3,	// (0x0001e72e) list_double_graphic_heading_pane_g3

0x0002,

0xf63d,	// (0x00023ab8) list_double_graphic_heading_pane_g_ParamLimits

0xf63d,	// (0x00023ab8) list_double_graphic_heading_pane_g

0xa2bf,	// (0x0001e73a) list_double_graphic_heading_pane_t1_ParamLimits

0xa2bf,	// (0x0001e73a) list_double_graphic_heading_pane_t1

0xa2d5,	// (0x0001e750) list_double_graphic_heading_pane_t2_ParamLimits

0xa2d5,	// (0x0001e750) list_double_graphic_heading_pane_t2

0x0001,

0xf638,	// (0x00023ab3) list_double_graphic_heading_pane_t_ParamLimits

0xf638,	// (0x00023ab3) list_double_graphic_heading_pane_t

0xa247,	// (0x0001e6c2) list_double_time_pane_g1_ParamLimits

0xa247,	// (0x0001e6c2) list_double_time_pane_g1

0xa10e,	// (0x0001e589) list_double_time_pane_g2_ParamLimits

0xa10e,	// (0x0001e589) list_double_time_pane_g2

0x0001,

0xf644,	// (0x00023abf) list_double_time_pane_g_ParamLimits

0xf644,	// (0x00023abf) list_double_time_pane_g

0xa2f3,	// (0x0001e76e) list_double_time_pane_t1_ParamLimits

0xa2f3,	// (0x0001e76e) list_double_time_pane_t1

0xa309,	// (0x0001e784) list_double_time_pane_t2_ParamLimits

0xa309,	// (0x0001e784) list_double_time_pane_t2

0xa31b,	// (0x0001e796) list_double_time_pane_t3_ParamLimits

0xa31b,	// (0x0001e796) list_double_time_pane_t3

0xa32d,	// (0x0001e7a8) list_double_time_pane_t4_ParamLimits

0xa32d,	// (0x0001e7a8) list_double_time_pane_t4

0x0003,

0xf649,	// (0x00023ac4) list_double_time_pane_t_ParamLimits

0xf649,	// (0x00023ac4) list_double_time_pane_t

0x4b32,	// (0x00018fad) list_setting_pane_g1_ParamLimits

0x4b32,	// (0x00018fad) list_setting_pane_g1

0xa153,	// (0x0001e5ce) list_setting_pane_g2_ParamLimits

0xa153,	// (0x0001e5ce) list_setting_pane_g2

0x0001,

0xf652,	// (0x00023acd) list_setting_pane_g_ParamLimits

0xf652,	// (0x00023acd) list_setting_pane_g

0xa33f,	// (0x0001e7ba) list_setting_pane_t1_ParamLimits

0xa33f,	// (0x0001e7ba) list_setting_pane_t1

0xa356,	// (0x0001e7d1) list_setting_pane_t2_ParamLimits

0xa356,	// (0x0001e7d1) list_setting_pane_t2

0x0002,

0xf657,	// (0x00023ad2) list_setting_pane_t_ParamLimits

0xf657,	// (0x00023ad2) list_setting_pane_t

0xa395,	// (0x0001e810) set_value_pane_cp_ParamLimits

0xa395,	// (0x0001e810) set_value_pane_cp

0x4b32,	// (0x00018fad) list_setting_number_pane_g1_ParamLimits

0x4b32,	// (0x00018fad) list_setting_number_pane_g1

0xa153,	// (0x0001e5ce) list_setting_number_pane_g2_ParamLimits

0xa153,	// (0x0001e5ce) list_setting_number_pane_g2

0x0001,

0xf652,	// (0x00023acd) list_setting_number_pane_g_ParamLimits

0xf652,	// (0x00023acd) list_setting_number_pane_g

0xa3a1,	// (0x0001e81c) list_setting_number_pane_t1_ParamLimits

0xa3a1,	// (0x0001e81c) list_setting_number_pane_t1

0xa3b5,	// (0x0001e830) list_setting_number_pane_t2_ParamLimits

0xa3b5,	// (0x0001e830) list_setting_number_pane_t2

0xa3cc,	// (0x0001e847) list_setting_number_pane_t3_ParamLimits

0xa3cc,	// (0x0001e847) list_setting_number_pane_t3

0x0003,

0xf65e,	// (0x00023ad9) list_setting_number_pane_t_ParamLimits

0xf65e,	// (0x00023ad9) list_setting_number_pane_t

0xa395,	// (0x0001e810) set_value_pane_ParamLimits

0xa395,	// (0x0001e810) set_value_pane

0xc58a,	// (0x00020a05) bg_set_opt_pane_ParamLimits

0xc58a,	// (0x00020a05) bg_set_opt_pane

0xc5ab,	// (0x00020a26) set_value_pane_t1

0xc5b9,	// (0x00020a34) slider_set_pane_cp3

0xa40f,	// (0x0001e88a) volume_small_pane_cp

0xc5c2,	// (0x00020a3d) list_form_gen_pane

0xc5cb,	// (0x00020a46) scroll_pane_cp8

0xa418,	// (0x0001e893) form_field_data_pane_ParamLimits

0xa418,	// (0x0001e893) form_field_data_pane

0xa42f,	// (0x0001e8aa) form_field_data_wide_pane_ParamLimits

0xa42f,	// (0x0001e8aa) form_field_data_wide_pane

0xa44f,	// (0x0001e8ca) form_field_popup_pane_ParamLimits

0xa44f,	// (0x0001e8ca) form_field_popup_pane

0xa46f,	// (0x0001e8ea) form_field_popup_wide_pane_ParamLimits

0xa46f,	// (0x0001e8ea) form_field_popup_wide_pane

0xc5ec,	// (0x00020a67) form_field_slider_pane_ParamLimits

0xc5ec,	// (0x00020a67) form_field_slider_pane

0xa486,	// (0x0001e901) form_field_slider_wide_pane_ParamLimits

0xa486,	// (0x0001e901) form_field_slider_wide_pane

0xc5ff,	// (0x00020a7a) data_form_pane

0xa4a3,	// (0x0001e91e) form_field_data_pane_t1

0xc60b,	// (0x00020a86) input_focus_pane

0xc619,	// (0x00020a94) data_form_wide_pane

0xc656,	// (0x00020ad1) form_field_data_wide_pane_t1

0xc4a1,	// (0x0002091c) input_focus_pane_cp6

0xa4bd,	// (0x0001e938) form_field_popup_pane_t1

0xc60b,	// (0x00020a86) input_focus_pane_cp7

0xc678,	// (0x00020af3) list_form_pane

0xc68c,	// (0x00020b07) form_field_popup_wide_pane_t1

0xc60b,	// (0x00020a86) input_focus_pane_cp8

0xc6a1,	// (0x00020b1c) list_form_wide_pane

0xa4df,	// (0x0001e95a) form_field_slider_pane_t1_ParamLimits

0xa4df,	// (0x0001e95a) form_field_slider_pane_t1

0xa4f7,	// (0x0001e972) form_field_slider_pane_t2_ParamLimits

0xa4f7,	// (0x0001e972) form_field_slider_pane_t2

0x0001,

0xf66e,	// (0x00023ae9) form_field_slider_pane_t_ParamLimits

0xf66e,	// (0x00023ae9) form_field_slider_pane_t

0xc1d3,	// (0x0002064e) input_focus_pane_cp9_ParamLimits

0xc1d3,	// (0x0002064e) input_focus_pane_cp9

0xa50c,	// (0x0001e987) slider_cont_pane_ParamLimits

0xa50c,	// (0x0001e987) slider_cont_pane

0xc6ad,	// (0x00020b28) form_field_slider_wide_pane_t1_ParamLimits

0xc6ad,	// (0x00020b28) form_field_slider_wide_pane_t1

0xc6bf,	// (0x00020b3a) form_field_slider_wide_pane_t2_ParamLimits

0xc6bf,	// (0x00020b3a) form_field_slider_wide_pane_t2

0x0001,

0xf673,	// (0x00023aee) form_field_slider_wide_pane_t_ParamLimits

0xf673,	// (0x00023aee) form_field_slider_wide_pane_t

0xc1d3,	// (0x0002064e) input_focus_pane_cp10_ParamLimits

0xc1d3,	// (0x0002064e) input_focus_pane_cp10

0xa520,	// (0x0001e99b) slider_cont_pane_cp1_ParamLimits

0xa520,	// (0x0001e99b) slider_cont_pane_cp1

0xa534,	// (0x0001e9af) slider_form_pane_cp

0xc6d1,	// (0x00020b4c) input_focus_pane_g1

0xc6d9,	// (0x00020b54) input_focus_pane_g2

0xc6e1,	// (0x00020b5c) input_focus_pane_g3

0xc6e9,	// (0x00020b64) input_focus_pane_g4

0xc6f1,	// (0x00020b6c) input_focus_pane_g5

0xc6f9,	// (0x00020b74) input_focus_pane_g6

0xc701,	// (0x00020b7c) input_focus_pane_g7

0xc709,	// (0x00020b84) input_focus_pane_g8

0xc711,	// (0x00020b8c) input_focus_pane_g9

0xc17b,	// (0x000205f6) input_focus_pane_g10

0x0009,

0xf678,	// (0x00023af3) input_focus_pane_g

0x2168,	// (0x000165e3) wait_border_pane_g3_copy1

0xa53c,	// (0x0001e9b7) data_form_pane_t1

0xc17b,	// (0x000205f6) wait_anim_pane_g1_copy1

0xb81c,	// (0x0001fc97) data_form_wide_pane_t1

0xa556,	// (0x0001e9d1) list_form_graphic_pane_cp_ParamLimits

0xa556,	// (0x0001e9d1) list_form_graphic_pane_cp

0x3069,	// (0x000174e4) slider_form_pane_g1

0x3072,	// (0x000174ed) slider_form_pane_g2

0x0006,

0xf96f,	// (0x00023dea) slider_form_pane_g

0xa568,	// (0x0001e9e3) list_form_graphic_pane_ParamLimits

0xa568,	// (0x0001e9e3) list_form_graphic_pane

0xa57b,	// (0x0001e9f6) list_form_graphic_pane_g1

0xa583,	// (0x0001e9fe) list_form_graphic_pane_t1_ParamLimits

0xa583,	// (0x0001e9fe) list_form_graphic_pane_t1

0xc1e1,	// (0x0002065c) list_highlight_pane_cp5_ParamLimits

0xc1e1,	// (0x0002065c) list_highlight_pane_cp5

0xa598,	// (0x0001ea13) find_pane_g1

0xc719,	// (0x00020b94) input_find_pane

0xa5a1,	// (0x0001ea1c) input_find_pane_g1_ParamLimits

0xa5a1,	// (0x0001ea1c) input_find_pane_g1

0xa5ad,	// (0x0001ea28) input_find_pane_t1_ParamLimits

0xa5ad,	// (0x0001ea28) input_find_pane_t1

0xa5c2,	// (0x0001ea3d) input_find_pane_t2_ParamLimits

0xa5c2,	// (0x0001ea3d) input_find_pane_t2

0x0001,

0xf68d,	// (0x00023b08) input_find_pane_t_ParamLimits

0xf68d,	// (0x00023b08) input_find_pane_t

0xc722,	// (0x00020b9d) input_focus_pane_cp5_ParamLimits

0xc722,	// (0x00020b9d) input_focus_pane_cp5

0xc730,	// (0x00020bab) bg_popup_window_pane_cp2_ParamLimits

0xc730,	// (0x00020bab) bg_popup_window_pane_cp2

0xc73d,	// (0x00020bb8) listscroll_menu_pane_ParamLimits

0xc73d,	// (0x00020bb8) listscroll_menu_pane

0xa5e3,	// (0x0001ea5e) popup_submenu_window_ParamLimits

0xa5e3,	// (0x0001ea5e) popup_submenu_window

0xc749,	// (0x00020bc4) find_popup_pane_g1

0xa60b,	// (0x0001ea86) input_popup_find_pane_cp

0xc722,	// (0x00020b9d) input_focus_pane_cp4_ParamLimits

0xc722,	// (0x00020b9d) input_focus_pane_cp4

0xc751,	// (0x00020bcc) input_popup_find_pane_t1_ParamLimits

0xc751,	// (0x00020bcc) input_popup_find_pane_t1

0xc185,	// (0x00020600) bg_popup_sub_pane_cp

0xc77f,	// (0x00020bfa) listscroll_popup_sub_pane

0xc787,	// (0x00020c02) list_submenu_pane_ParamLimits

0xc787,	// (0x00020c02) list_submenu_pane

0xc798,	// (0x00020c13) scroll_pane_cp4

0xa623,	// (0x0001ea9e) list_single_popup_submenu_pane_ParamLimits

0xa623,	// (0x0001ea9e) list_single_popup_submenu_pane

0xa637,	// (0x0001eab2) list_single_popup_submenu_pane_g1

0xa63f,	// (0x0001eaba) list_single_popup_submenu_pane_t1_ParamLimits

0xa63f,	// (0x0001eaba) list_single_popup_submenu_pane_t1

0xc1d3,	// (0x0002064e) bg_active_tab_pane_cp1_ParamLimits

0xc1d3,	// (0x0002064e) bg_active_tab_pane_cp1

0xc7a0,	// (0x00020c1b) tabs_2_active_pane_g1

0xa654,	// (0x0001eacf) tabs_2_active_pane_t1

0xc1d3,	// (0x0002064e) bg_passive_tab_pane_cp1_ParamLimits

0xc1d3,	// (0x0002064e) bg_passive_tab_pane_cp1

0xc7a0,	// (0x00020c1b) tabs_2_passive_pane_g1

0xa654,	// (0x0001eacf) tabs_2_passive_pane_t1

0xc1e1,	// (0x0002065c) bg_active_tab_pane_cp4

0xa666,	// (0x0001eae1) tabs_2_long_active_pane_t1

0x1506,	// (0x00015981) bg_passive_tab_pane_cp4

0xe97f,	// (0x00022dfa) list_single_midp_graphic_pane_g4_ParamLimits

0xc1e1,	// (0x0002065c) bg_active_tab_pane_cp5

0xa679,	// (0x0001eaf4) tabs_3_long_active_pane_t1

0x1506,	// (0x00015981) bg_passive_tab_pane_cp5

0xe97f,	// (0x00022dfa) list_single_midp_graphic_pane_g4

0xc1e1,	// (0x0002065c) bg_popup_window_pane_cp13_ParamLimits

0xc1e1,	// (0x0002065c) bg_popup_window_pane_cp13

0xc7a8,	// (0x00020c23) listscroll_popup_fast_pane_ParamLimits

0xc7a8,	// (0x00020c23) listscroll_popup_fast_pane

0xc7b4,	// (0x00020c2f) grid_popup_fast_pane_ParamLimits

0xc7b4,	// (0x00020c2f) grid_popup_fast_pane

0xc7c6,	// (0x00020c41) scroll_pane_cp9_ParamLimits

0xc7c6,	// (0x00020c41) scroll_pane_cp9

0x4fbb,	// (0x00019436) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4fbb,	// (0x00019436) list_single_graphic_hl_pane_t1_cp2

0xc7d9,	// (0x00020c54) input_focus_pane_cp20_ParamLimits

0xc7d9,	// (0x00020c54) input_focus_pane_cp20

0xc7e7,	// (0x00020c62) query_popup_data_pane_t1_ParamLimits

0xc7e7,	// (0x00020c62) query_popup_data_pane_t1

0xc7fa,	// (0x00020c75) query_popup_data_pane_t2_ParamLimits

0xc7fa,	// (0x00020c75) query_popup_data_pane_t2

0xc840,	// (0x00020cbb) query_popup_data_pane_t3_ParamLimits

0xc840,	// (0x00020cbb) query_popup_data_pane_t3

0xc881,	// (0x00020cfc) query_popup_data_pane_t4_ParamLimits

0xc881,	// (0x00020cfc) query_popup_data_pane_t4

0xc8bd,	// (0x00020d38) query_popup_data_pane_t5_ParamLimits

0xc8bd,	// (0x00020d38) query_popup_data_pane_t5

0x0004,

0xf692,	// (0x00023b0d) query_popup_data_pane_t_ParamLimits

0xf692,	// (0x00023b0d) query_popup_data_pane_t

0xc6d1,	// (0x00020b4c) bg_set_opt_pane_g1

0xc6d9,	// (0x00020b54) bg_set_opt_pane_g2

0xc6e1,	// (0x00020b5c) bg_set_opt_pane_g3

0xc6e9,	// (0x00020b64) bg_set_opt_pane_g4

0xc6f1,	// (0x00020b6c) bg_set_opt_pane_g5

0xc6f9,	// (0x00020b74) bg_set_opt_pane_g6

0xc701,	// (0x00020b7c) bg_set_opt_pane_g7

0xc709,	// (0x00020b84) bg_set_opt_pane_g8

0xc711,	// (0x00020b8c) bg_set_opt_pane_g9

0x0008,

0xf69d,	// (0x00023b18) bg_set_opt_pane_g

0xe65c,	// (0x00022ad7) control_top_pane_stacon_ParamLimits

0xe65c,	// (0x00022ad7) control_top_pane_stacon

0xe6af,	// (0x00022b2a) signal_pane_stacon_ParamLimits

0xe6af,	// (0x00022b2a) signal_pane_stacon

0x0e7b,	// (0x000152f6) stacon_top_pane_g1_ParamLimits

0x0e7b,	// (0x000152f6) stacon_top_pane_g1

0xe6d4,	// (0x00022b4f) title_pane_stacon_ParamLimits

0xe6d4,	// (0x00022b4f) title_pane_stacon

0xe6fe,	// (0x00022b79) uni_indicator_pane_stacon_ParamLimits

0xe6fe,	// (0x00022b79) uni_indicator_pane_stacon

0xe713,	// (0x00022b8e) battery_pane_stacon_ParamLimits

0xe713,	// (0x00022b8e) battery_pane_stacon

0xe757,	// (0x00022bd2) control_bottom_pane_stacon_ParamLimits

0xe757,	// (0x00022bd2) control_bottom_pane_stacon

0xe77a,	// (0x00022bf5) navi_pane_stacon_ParamLimits

0xe77a,	// (0x00022bf5) navi_pane_stacon

0x0e9d,	// (0x00015318) stacon_bottom_pane_g1_ParamLimits

0x0e9d,	// (0x00015318) stacon_bottom_pane_g1

0xe0ff,	// (0x0002257a) aid_levels_signal_lsc_ParamLimits

0xe0ff,	// (0x0002257a) aid_levels_signal_lsc

0xe115,	// (0x00022590) signal_pane_stacon_g1_ParamLimits

0xe115,	// (0x00022590) signal_pane_stacon_g1

0xe129,	// (0x000225a4) signal_pane_stacon_g2_ParamLimits

0xe129,	// (0x000225a4) signal_pane_stacon_g2

0x0001,

0xf6b0,	// (0x00023b2b) signal_pane_stacon_g_ParamLimits

0xf6b0,	// (0x00023b2b) signal_pane_stacon_g

0xe15e,	// (0x000225d9) title_pane_stacon_t1_ParamLimits

0xe15e,	// (0x000225d9) title_pane_stacon_t1

0xc901,	// (0x00020d7c) uni_indicator_pane_stacon_g1

0xc90b,	// (0x00020d86) uni_indicator_pane_stacon_g2

0xc915,	// (0x00020d90) uni_indicator_pane_stacon_g3

0xc91f,	// (0x00020d9a) uni_indicator_pane_stacon_g4

0x0003,

0xf6bc,	// (0x00023b37) uni_indicator_pane_stacon_g

0xe183,	// (0x000225fe) control_top_pane_stacon_g1

0xe18b,	// (0x00022606) control_top_pane_stacon_t1_ParamLimits

0xe18b,	// (0x00022606) control_top_pane_stacon_t1

0xe1c2,	// (0x0002263d) aid_levels_battery_lsc_ParamLimits

0xe1c2,	// (0x0002263d) aid_levels_battery_lsc

0xe1d9,	// (0x00022654) battery_pane_stacon_g1_ParamLimits

0xe1d9,	// (0x00022654) battery_pane_stacon_g1

0xe1ec,	// (0x00022667) battery_pane_stacon_g2_ParamLimits

0xe1ec,	// (0x00022667) battery_pane_stacon_g2

0x0001,

0xf6c5,	// (0x00023b40) battery_pane_stacon_g_ParamLimits

0xf6c5,	// (0x00023b40) battery_pane_stacon_g

0xe22a,	// (0x000226a5) navi_icon_pane_stacon

0xe23e,	// (0x000226b9) navi_navi_pane_stacon

0xe22a,	// (0x000226a5) navi_text_pane_stacon

0xe183,	// (0x000225fe) control_bottom_pane_stacon_g1

0xe252,	// (0x000226cd) control_bottom_pane_stacon_t1_ParamLimits

0xe252,	// (0x000226cd) control_bottom_pane_stacon_t1

0xa6a5,	// (0x0001eb20) grid_app_pane_ParamLimits

0xa6a5,	// (0x0001eb20) grid_app_pane

0xa6dd,	// (0x0001eb58) scroll_pane_cp15_ParamLimits

0xa6dd,	// (0x0001eb58) scroll_pane_cp15

0xa6f2,	// (0x0001eb6d) cell_app_pane_ParamLimits

0xa6f2,	// (0x0001eb6d) cell_app_pane

0xa737,	// (0x0001ebb2) cell_app_pane_g1_ParamLimits

0xa737,	// (0x0001ebb2) cell_app_pane_g1

0xe2a3,	// (0x0002271e) cell_app_pane_g2_ParamLimits

0xe2a3,	// (0x0002271e) cell_app_pane_g2

0x0001,

0xf6ca,	// (0x00023b45) cell_app_pane_g_ParamLimits

0xf6ca,	// (0x00023b45) cell_app_pane_g

0xa75b,	// (0x0001ebd6) cell_app_pane_t1_ParamLimits

0xa75b,	// (0x0001ebd6) cell_app_pane_t1

0xe2af,	// (0x0002272a) grid_highlight_pane_ParamLimits

0xe2af,	// (0x0002272a) grid_highlight_pane

0xc6d1,	// (0x00020b4c) cell_highlight_pane_g1

0xc6d9,	// (0x00020b54) cell_highlight_pane_g2

0xc6e1,	// (0x00020b5c) cell_highlight_pane_g3

0xc6e9,	// (0x00020b64) cell_highlight_pane_g4

0xc6f1,	// (0x00020b6c) cell_highlight_pane_g5

0xc6f9,	// (0x00020b74) cell_highlight_pane_g6

0xc701,	// (0x00020b7c) cell_highlight_pane_g7

0xc709,	// (0x00020b84) cell_highlight_pane_g8

0xc711,	// (0x00020b8c) cell_highlight_pane_g9

0xc17b,	// (0x000205f6) cell_highlight_pane_g10

0x0009,

0xf678,	// (0x00023af3) cell_highlight_pane_g

0xe2ca,	// (0x00022745) bg_scroll_pane

0x8850,	// (0x0001cccb) scroll_handle_pane

0xe326,	// (0x000227a1) scroll_bg_pane_g1

0xe33b,	// (0x000227b6) scroll_bg_pane_g2

0xe353,	// (0x000227ce) scroll_bg_pane_g3

0x0002,

0xf6cf,	// (0x00023b4a) scroll_bg_pane_g

0xa772,	// (0x0001ebed) scroll_handle_focus_pane_ParamLimits

0xa772,	// (0x0001ebed) scroll_handle_focus_pane

0xe326,	// (0x000227a1) scroll_handle_pane_g1

0xe368,	// (0x000227e3) scroll_handle_pane_g2

0xe353,	// (0x000227ce) scroll_handle_pane_g3

0x0002,

0xf6d6,	// (0x00023b51) scroll_handle_pane_g

0xc722,	// (0x00020b9d) bg_popup_sub_pane_cp21_ParamLimits

0xc722,	// (0x00020b9d) bg_popup_sub_pane_cp21

0xa77f,	// (0x0001ebfa) popup_fep_japan_predictive_window_t1_ParamLimits

0xa77f,	// (0x0001ebfa) popup_fep_japan_predictive_window_t1

0xa796,	// (0x0001ec11) popup_fep_japan_predictive_window_t2_ParamLimits

0xa796,	// (0x0001ec11) popup_fep_japan_predictive_window_t2

0xa7c9,	// (0x0001ec44) popup_fep_japan_predictive_window_t3_ParamLimits

0xa7c9,	// (0x0001ec44) popup_fep_japan_predictive_window_t3

0x0002,

0xf6dd,	// (0x00023b58) popup_fep_japan_predictive_window_t_ParamLimits

0xf6dd,	// (0x00023b58) popup_fep_japan_predictive_window_t

0xc185,	// (0x00020600) bg_popup_sub_pane_cp23

0xa800,	// (0x0001ec7b) listscroll_japin_cand_pane

0xe37c,	// (0x000227f7) popup_fep_japan_candidate_window_t1

0xe38a,	// (0x00022805) candidate_pane_ParamLimits

0xe38a,	// (0x00022805) candidate_pane

0xa808,	// (0x0001ec83) scroll_pane_cp30

0xe39c,	// (0x00022817) list_single_popup_jap_candidate_pane_ParamLimits

0xe39c,	// (0x00022817) list_single_popup_jap_candidate_pane

0xc185,	// (0x00020600) list_highlight_pane_cp30

0xe3b1,	// (0x0002282c) list_single_popup_jap_candidate_pane_t1

0xe3c0,	// (0x0002283b) level_1_signal

0xe3cd,	// (0x00022848) level_2_signal

0xe3da,	// (0x00022855) level_3_signal

0xe3e7,	// (0x00022862) level_4_signal

0xe3f4,	// (0x0002286f) level_5_signal

0xe401,	// (0x0002287c) level_6_signal

0xe40e,	// (0x00022889) level_7_signal

0xe3c0,	// (0x0002283b) level_1_battery

0xe3cd,	// (0x00022848) level_2_battery

0xe3da,	// (0x00022855) level_3_battery

0xe3e7,	// (0x00022862) level_4_battery

0xe3f4,	// (0x0002286f) level_5_battery

0xe401,	// (0x0002287c) level_6_battery

0xe40e,	// (0x00022889) level_7_battery

0xe452,	// (0x000228cd) list_menu_pane_ParamLimits

0xe452,	// (0x000228cd) list_menu_pane

0xe468,	// (0x000228e3) scroll_pane_cp25_ParamLimits

0xe468,	// (0x000228e3) scroll_pane_cp25

0xa810,	// (0x0001ec8b) list_double2_graphic_pane_cp2_ParamLimits

0xa810,	// (0x0001ec8b) list_double2_graphic_pane_cp2

0xa810,	// (0x0001ec8b) list_double2_large_graphic_pane_cp2_ParamLimits

0xa810,	// (0x0001ec8b) list_double2_large_graphic_pane_cp2

0xa810,	// (0x0001ec8b) list_double2_pane_cp2_ParamLimits

0xa810,	// (0x0001ec8b) list_double2_pane_cp2

0xa810,	// (0x0001ec8b) list_double_graphic_pane_cp2_ParamLimits

0xa810,	// (0x0001ec8b) list_double_graphic_pane_cp2

0xa810,	// (0x0001ec8b) list_double_large_graphic_pane_cp2_ParamLimits

0xa810,	// (0x0001ec8b) list_double_large_graphic_pane_cp2

0xa810,	// (0x0001ec8b) list_double_number_pane_cp2_ParamLimits

0xa810,	// (0x0001ec8b) list_double_number_pane_cp2

0xa810,	// (0x0001ec8b) list_double_pane_cp2_ParamLimits

0xa810,	// (0x0001ec8b) list_double_pane_cp2

0xa81f,	// (0x0001ec9a) list_single_2graphic_pane_cp2_ParamLimits

0xa81f,	// (0x0001ec9a) list_single_2graphic_pane_cp2

0xa81f,	// (0x0001ec9a) list_single_graphic_heading_pane_cp2_ParamLimits

0xa81f,	// (0x0001ec9a) list_single_graphic_heading_pane_cp2

0xa81f,	// (0x0001ec9a) list_single_graphic_pane_cp2_ParamLimits

0xa81f,	// (0x0001ec9a) list_single_graphic_pane_cp2

0xa81f,	// (0x0001ec9a) list_single_heading_pane_cp2_ParamLimits

0xa81f,	// (0x0001ec9a) list_single_heading_pane_cp2

0xe491,	// (0x0002290c) list_single_large_graphic_pane_cp2_ParamLimits

0xe491,	// (0x0002290c) list_single_large_graphic_pane_cp2

0xa81f,	// (0x0001ec9a) list_single_number_heading_pane_cp2_ParamLimits

0xa81f,	// (0x0001ec9a) list_single_number_heading_pane_cp2

0xa81f,	// (0x0001ec9a) list_single_number_pane_cp2_ParamLimits

0xa81f,	// (0x0001ec9a) list_single_number_pane_cp2

0xa81f,	// (0x0001ec9a) list_single_pane_cp2_ParamLimits

0xa81f,	// (0x0001ec9a) list_single_pane_cp2

0xe506,	// (0x00022981) bg_popup_sub_pane_cp22

0xe51c,	// (0x00022997) popup_side_volume_key_window_g1

0xe528,	// (0x000229a3) popup_side_volume_key_window_t1

0x889f,	// (0x0001cd1a) volume_small_pane_cp1

0xc1d3,	// (0x0002064e) bg_popup_sub_pane_cp24_ParamLimits

0xc1d3,	// (0x0002064e) bg_popup_sub_pane_cp24

0xe536,	// (0x000229b1) fep_china_uni_candidate_pane_ParamLimits

0xe536,	// (0x000229b1) fep_china_uni_candidate_pane

0xe54a,	// (0x000229c5) fep_china_uni_entry_pane

0xe55a,	// (0x000229d5) popup_fep_china_uni_window_g1

0xa8ac,	// (0x0001ed27) fep_china_uni_entry_pane_g1

0xa8b4,	// (0x0001ed2f) fep_china_uni_entry_pane_g2

0x0001,

0xf70e,	// (0x00023b89) fep_china_uni_entry_pane_g

0xe576,	// (0x000229f1) fep_entry_item_pane

0xe580,	// (0x000229fb) fep_candidate_item_pane

0xa8bc,	// (0x0001ed37) fep_china_uni_candidate_pane_g1

0xe588,	// (0x00022a03) fep_china_uni_candidate_pane_g2

0xe590,	// (0x00022a0b) fep_china_uni_candidate_pane_g3

0xa8c4,	// (0x0001ed3f) fep_china_uni_candidate_pane_g4

0x0003,

0xf713,	// (0x00023b8e) fep_china_uni_candidate_pane_g

0xc17b,	// (0x000205f6) fep_entry_item_pane_g1

0xe598,	// (0x00022a13) fep_entry_item_pane_t1_ParamLimits

0xe598,	// (0x00022a13) fep_entry_item_pane_t1

0xe5ae,	// (0x00022a29) fep_candidate_item_pane_t1_ParamLimits

0xe5ae,	// (0x00022a29) fep_candidate_item_pane_t1

0xe5c3,	// (0x00022a3e) fep_candidate_item_pane_t2_ParamLimits

0xe5c3,	// (0x00022a3e) fep_candidate_item_pane_t2

0x0001,

0xf71c,	// (0x00023b97) fep_candidate_item_pane_t_ParamLimits

0xf71c,	// (0x00023b97) fep_candidate_item_pane_t

0xc1e1,	// (0x0002065c) list_highlight_pane_cp31_ParamLimits

0xc1e1,	// (0x0002065c) list_highlight_pane_cp31

0xe5d5,	// (0x00022a50) level_1_signal_lsc

0xe5de,	// (0x00022a59) level_2_signal_lsc

0xe5e7,	// (0x00022a62) level_3_signal_lsc

0xe5f0,	// (0x00022a6b) level_4_signal_lsc

0xe5f9,	// (0x00022a74) level_5_signal_lsc

0xe602,	// (0x00022a7d) level_6_signal_lsc

0xe60b,	// (0x00022a86) level_7_signal_lsc

0xe60b,	// (0x00022a86) level_1_battery_lsc

0xe614,	// (0x00022a8f) level_2_battery_lsc

0xe61d,	// (0x00022a98) level_3_battery_lsc

0xe626,	// (0x00022aa1) level_4_battery_lsc

0xe62f,	// (0x00022aaa) level_5_battery_lsc

0xe638,	// (0x00022ab3) level_6_battery_lsc

0xe5d5,	// (0x00022a50) level_7_battery_lsc

0xe641,	// (0x00022abc) scroll_handle_focus_pane_g1

0xe64a,	// (0x00022ac5) scroll_handle_focus_pane_g2

0xe653,	// (0x00022ace) scroll_handle_focus_pane_g3

0x0002,

0xf721,	// (0x00023b9c) scroll_handle_focus_pane_g

0xa8cc,	// (0x0001ed47) list_single_2graphic_pane_g1_ParamLimits

0xa8cc,	// (0x0001ed47) list_single_2graphic_pane_g1

0xa0d7,	// (0x0001e552) list_single_2graphic_pane_g2_ParamLimits

0xa0d7,	// (0x0001e552) list_single_2graphic_pane_g2

0xc569,	// (0x000209e4) list_single_2graphic_pane_g3_ParamLimits

0xc569,	// (0x000209e4) list_single_2graphic_pane_g3

0xa8d8,	// (0x0001ed53) list_single_2graphic_pane_g4_ParamLimits

0xa8d8,	// (0x0001ed53) list_single_2graphic_pane_g4

0x0003,

0xf728,	// (0x00023ba3) list_single_2graphic_pane_g_ParamLimits

0xf728,	// (0x00023ba3) list_single_2graphic_pane_g

0xa8e4,	// (0x0001ed5f) list_single_2graphic_pane_t1_ParamLimits

0xa8e4,	// (0x0001ed5f) list_single_2graphic_pane_t1

0xa912,	// (0x0001ed8d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa912,	// (0x0001ed8d) list_double2_graphic_large_graphic_pane_g1

0xa142,	// (0x0001e5bd) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa142,	// (0x0001e5bd) list_double2_graphic_large_graphic_pane_g2

0xa153,	// (0x0001e5ce) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa153,	// (0x0001e5ce) list_double2_graphic_large_graphic_pane_g3

0xa924,	// (0x0001ed9f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa924,	// (0x0001ed9f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf731,	// (0x00023bac) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf731,	// (0x00023bac) list_double2_graphic_large_graphic_pane_g

0xa930,	// (0x0001edab) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa930,	// (0x0001edab) list_double2_graphic_large_graphic_pane_t1

0xa946,	// (0x0001edc1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa946,	// (0x0001edc1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73a,	// (0x00023bb5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73a,	// (0x00023bb5) list_double2_graphic_large_graphic_pane_t

0xa9cb,	// (0x0001ee46) popup_fast_swap_window_ParamLimits

0xa9cb,	// (0x0001ee46) popup_fast_swap_window

0xa9e7,	// (0x0001ee62) popup_side_volume_key_window

0x0f9a,	// (0x00015415) stacon_top_pane

0x0fa4,	// (0x0001541f) status_pane_ParamLimits

0x0fa4,	// (0x0001541f) status_pane

0xaa01,	// (0x0001ee7c) status_small_pane

0xc185,	// (0x00020600) control_pane

0xc185,	// (0x00020600) stacon_bottom_pane

0xc5cb,	// (0x00020a46) scroll_pane_cp121

0xc5c2,	// (0x00020a3d) set_content_pane

0xa958,	// (0x0001edd3) bg_active_tab_pane_g1_cp1

0xa961,	// (0x0001eddc) bg_active_tab_pane_g2_cp1

0xa96a,	// (0x0001ede5) bg_active_tab_pane_g3_cp1

0xa958,	// (0x0001edd3) bg_passive_tab_pane_g1_cp1

0xa961,	// (0x0001eddc) bg_passive_tab_pane_g2_cp1

0xa96a,	// (0x0001ede5) bg_passive_tab_pane_g3_cp1

0xa973,	// (0x0001edee) bg_active_tab_pane_g1_cp2

0xa961,	// (0x0001eddc) bg_active_tab_pane_g2_cp2

0xa97c,	// (0x0001edf7) bg_active_tab_pane_g3_cp2

0xa973,	// (0x0001edee) bg_passive_tab_pane_g1_cp2

0xa961,	// (0x0001eddc) bg_passive_tab_pane_g2_cp2

0xa97c,	// (0x0001edf7) bg_passive_tab_pane_g3_cp2

0xa985,	// (0x0001ee00) bg_active_tab_pane_g1_cp3

0xa961,	// (0x0001eddc) bg_active_tab_pane_g2_cp3

0xa98e,	// (0x0001ee09) bg_active_tab_pane_g3_cp3

0xa985,	// (0x0001ee00) bg_passive_tab_pane_g1_cp3

0xa961,	// (0x0001eddc) bg_passive_tab_pane_g2_cp3

0xa98e,	// (0x0001ee09) bg_passive_tab_pane_g3_cp3

0xa997,	// (0x0001ee12) bg_active_tab_pane_g1_cp4

0xa961,	// (0x0001eddc) bg_active_tab_pane_g2_cp4

0xa9a2,	// (0x0001ee1d) bg_active_tab_pane_g3_cp4

0xa997,	// (0x0001ee12) bg_passive_tab_pane_g1_cp4

0xa961,	// (0x0001eddc) bg_passive_tab_pane_g2_cp4

0xa9a2,	// (0x0001ee1d) bg_passive_tab_pane_g3_cp4

0xa9ad,	// (0x0001ee28) bg_active_tab_pane_g1_cp5

0xa961,	// (0x0001eddc) bg_active_tab_pane_g2_cp5

0xa9b6,	// (0x0001ee31) bg_active_tab_pane_g3_cp5

0xa9ad,	// (0x0001ee28) bg_passive_tab_pane_g1_cp5

0xa961,	// (0x0001eddc) bg_passive_tab_pane_g2_cp5

0xa9b6,	// (0x0001ee31) bg_passive_tab_pane_g3_cp5

0x3771,	// (0x00017bec) list_set_graphic_pane_ParamLimits

0x3771,	// (0x00017bec) list_set_graphic_pane

0xc185,	// (0x00020600) bg_set_opt_pane_cp4

0x0ee9,	// (0x00015364) list_set_graphic_pane_g1_ParamLimits

0x0ee9,	// (0x00015364) list_set_graphic_pane_g1

0x0ef5,	// (0x00015370) list_set_graphic_pane_g2_ParamLimits

0x0ef5,	// (0x00015370) list_set_graphic_pane_g2

0x0001,

0xf73f,	// (0x00023bba) list_set_graphic_pane_g_ParamLimits

0xf73f,	// (0x00023bba) list_set_graphic_pane_g

0x0009,

0xfac4,	// (0x00023f3f) volume_small_pane_cp_g

0xa9bf,	// (0x0001ee3a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa9bf,	// (0x0001ee3a) list_double2_large_graphic_pane_g1_cp2

0x0f23,	// (0x0001539e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x0f23,	// (0x0001539e) list_double2_large_graphic_pane_g2_cp2

0x0f34,	// (0x000153af) list_double2_large_graphic_pane_g3_cp2

0x0f3c,	// (0x000153b7) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0f3c,	// (0x000153b7) list_double2_large_graphic_pane_t1_cp2

0x0f52,	// (0x000153cd) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0f52,	// (0x000153cd) list_double2_large_graphic_pane_t2_cp2

0xb56b,	// (0x0001f9e6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb56b,	// (0x0001f9e6) list_double_large_graphic_pane_g1_cp2

0x2c2a,	// (0x000170a5) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2c2a,	// (0x000170a5) list_double_large_graphic_pane_g2_cp2

0x10bf,	// (0x0001553a) list_double_large_graphic_pane_g3_cp2

0x2c3b,	// (0x000170b6) list_double_large_graphic_pane_g4_cp

0x2c43,	// (0x000170be) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2c43,	// (0x000170be) list_double_large_graphic_pane_t1_cp2

0x2c5a,	// (0x000170d5) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2c5a,	// (0x000170d5) list_double_large_graphic_pane_t2_cp2

0x0fbd,	// (0x00015438) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0fbd,	// (0x00015438) list_double2_graphic_pane_g1_cp2

0x0fcb,	// (0x00015446) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0fcb,	// (0x00015446) list_double2_graphic_pane_g2_cp2

0x0fdc,	// (0x00015457) list_double2_graphic_pane_g3_cp2

0x0fe6,	// (0x00015461) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0fe6,	// (0x00015461) list_double2_graphic_pane_t1_cp2

0x0ffc,	// (0x00015477) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0ffc,	// (0x00015477) list_double2_graphic_pane_t2_cp2

0xc929,	// (0x00020da4) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc929,	// (0x00020da4) list_single_number_heading_pane_g1_cp2

0x100e,	// (0x00015489) list_single_number_heading_pane_g2_cp2

0x1016,	// (0x00015491) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1016,	// (0x00015491) list_single_number_heading_pane_t1_cp2

0x102c,	// (0x000154a7) list_single_number_heading_pane_t2_cp2_ParamLimits

0x102c,	// (0x000154a7) list_single_number_heading_pane_t2_cp2

0x103e,	// (0x000154b9) list_single_number_heading_pane_t3_cp2_ParamLimits

0x103e,	// (0x000154b9) list_single_number_heading_pane_t3_cp2

0xc929,	// (0x00020da4) list_single_heading_pane_g1_cp2_ParamLimits

0xc929,	// (0x00020da4) list_single_heading_pane_g1_cp2

0x100e,	// (0x00015489) list_single_heading_pane_g2_cp2

0x1016,	// (0x00015491) list_single_heading_pane_t1_cp2_ParamLimits

0x1016,	// (0x00015491) list_single_heading_pane_t1_cp2

0x2a23,	// (0x00016e9e) list_single_heading_pane_t2_cp2_ParamLimits

0x2a23,	// (0x00016e9e) list_single_heading_pane_t2_cp2

0x296b,	// (0x00016de6) list_double_graphic_pane_g1_cp2_ParamLimits

0x296b,	// (0x00016de6) list_double_graphic_pane_g1_cp2

0x2977,	// (0x00016df2) list_double_graphic_pane_g2_cp2_ParamLimits

0x2977,	// (0x00016df2) list_double_graphic_pane_g2_cp2

0x2986,	// (0x00016e01) list_double_graphic_pane_g3_cp2

0x298e,	// (0x00016e09) list_double_graphic_pane_t1_cp2_ParamLimits

0x298e,	// (0x00016e09) list_double_graphic_pane_t1_cp2

0x29a4,	// (0x00016e1f) list_double_graphic_pane_t2_cp2_ParamLimits

0x29a4,	// (0x00016e1f) list_double_graphic_pane_t2_cp2

0x10b3,	// (0x0001552e) list_double_number_pane_g1_cp2_ParamLimits

0x10b3,	// (0x0001552e) list_double_number_pane_g1_cp2

0x10bf,	// (0x0001553a) list_double_number_pane_g2_cp2

0x292f,	// (0x00016daa) list_double_number_pane_t1_cp2_ParamLimits

0x292f,	// (0x00016daa) list_double_number_pane_t1_cp2

0x2943,	// (0x00016dbe) list_double_number_pane_t2_cp2_ParamLimits

0x2943,	// (0x00016dbe) list_double_number_pane_t2_cp2

0x2959,	// (0x00016dd4) list_double_number_pane_t3_cp2_ParamLimits

0x2959,	// (0x00016dd4) list_double_number_pane_t3_cp2

0x2818,	// (0x00016c93) list_single_graphic_pane_g1_cp2_ParamLimits

0x2818,	// (0x00016c93) list_single_graphic_pane_g1_cp2

0x1117,	// (0x00015592) list_single_graphic_pane_g2_cp2_ParamLimits

0x1117,	// (0x00015592) list_single_graphic_pane_g2_cp2

0x1123,	// (0x0001559e) list_single_graphic_pane_g3_cp2

0x27ee,	// (0x00016c69) list_single_graphic_pane_t1_cp2_ParamLimits

0x27ee,	// (0x00016c69) list_single_graphic_pane_t1_cp2

0x1117,	// (0x00015592) list_single_number_pane_g1_cp2_ParamLimits

0x1117,	// (0x00015592) list_single_number_pane_g1_cp2

0x1123,	// (0x0001559e) list_single_number_pane_g2_cp2

0x27ee,	// (0x00016c69) list_single_number_pane_t1_cp2_ParamLimits

0x27ee,	// (0x00016c69) list_single_number_pane_t1_cp2

0x2804,	// (0x00016c7f) list_single_number_pane_t2_cp2_ParamLimits

0x2804,	// (0x00016c7f) list_single_number_pane_t2_cp2

0x0f23,	// (0x0001539e) list_double2_pane_g1_cp2_ParamLimits

0x0f23,	// (0x0001539e) list_double2_pane_g1_cp2

0x0f34,	// (0x000153af) list_double2_pane_g2_cp2

0x108b,	// (0x00015506) list_double2_pane_t1_cp2_ParamLimits

0x108b,	// (0x00015506) list_double2_pane_t1_cp2

0x10a1,	// (0x0001551c) list_double2_pane_t2_cp2_ParamLimits

0x10a1,	// (0x0001551c) list_double2_pane_t2_cp2

0x10b3,	// (0x0001552e) list_double_pane_g1_cp2_ParamLimits

0x10b3,	// (0x0001552e) list_double_pane_g1_cp2

0x10bf,	// (0x0001553a) list_double_pane_g2_cp2

0x10c7,	// (0x00015542) list_double_pane_t1_cp2_ParamLimits

0x10c7,	// (0x00015542) list_double_pane_t1_cp2

0x10dd,	// (0x00015558) list_double_pane_t2_cp2_ParamLimits

0x10dd,	// (0x00015558) list_double_pane_t2_cp2

0xaa0c,	// (0x0001ee87) list_single_pane_cp2_g3

0x1117,	// (0x00015592) list_single_pane_g1_cp2_ParamLimits

0x1117,	// (0x00015592) list_single_pane_g1_cp2

0x1123,	// (0x0001559e) list_single_pane_g2_cp2

0x112b,	// (0x000155a6) list_single_pane_t1_cp2_ParamLimits

0x112b,	// (0x000155a6) list_single_pane_t1_cp2

0xaa14,	// (0x0001ee8f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xaa14,	// (0x0001ee8f) list_single_large_graphic_pane_g1_cp2

0x114f,	// (0x000155ca) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x114f,	// (0x000155ca) list_single_large_graphic_pane_g2_cp2

0x115b,	// (0x000155d6) list_single_large_graphic_pane_g3_cp2

0xaa20,	// (0x0001ee9b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xaa20,	// (0x0001ee9b) list_single_large_graphic_pane_g4_cp1

0x117d,	// (0x000155f8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x117d,	// (0x000155f8) list_single_large_graphic_pane_t1_cp2

0x27ba,	// (0x00016c35) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x27ba,	// (0x00016c35) list_single_graphic_heading_pane_g1_cp2

0x2787,	// (0x00016c02) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2787,	// (0x00016c02) list_single_graphic_heading_pane_g4_cp2

0x1123,	// (0x0001559e) list_single_graphic_heading_pane_g5_cp2

0x27c6,	// (0x00016c41) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x27c6,	// (0x00016c41) list_single_graphic_heading_pane_t1_cp2

0x27dc,	// (0x00016c57) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x27dc,	// (0x00016c57) list_single_graphic_heading_pane_t2_cp2

0x277b,	// (0x00016bf6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x277b,	// (0x00016bf6) list_single_2graphic_pane_g1_cp2

0x2787,	// (0x00016c02) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2787,	// (0x00016c02) list_single_2graphic_pane_g2_cp2

0x1123,	// (0x0001559e) list_single_2graphic_pane_g3_cp2

0x2798,	// (0x00016c13) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2798,	// (0x00016c13) list_single_2graphic_pane_g4_cp2

0x27a4,	// (0x00016c1f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x27a4,	// (0x00016c1f) list_single_2graphic_pane_t1_cp2

0xc17b,	// (0x000205f6) list_highlight_pane_g10_cp1

0x2363,	// (0x000167de) list_highlight_pane_g1_cp1

0x236b,	// (0x000167e6) list_highlight_pane_g2_cp1

0x2373,	// (0x000167ee) list_highlight_pane_g3_cp1

0x237b,	// (0x000167f6) list_highlight_pane_g4_cp1

0x2383,	// (0x000167fe) list_highlight_pane_g5_cp1

0x238b,	// (0x00016806) list_highlight_pane_g6_cp1

0x2393,	// (0x0001680e) list_highlight_pane_g7_cp1

0x239b,	// (0x00016816) list_highlight_pane_g8_cp1

0x23a3,	// (0x0001681e) list_highlight_pane_g9_cp1

0xb300,	// (0x0001f77b) form_field_slider_pane_t3

0xb30e,	// (0x0001f789) form_field_slider_pane_t4

0x22a7,	// (0x00016722) slider_form_pane_ParamLimits

0x22a7,	// (0x00016722) slider_form_pane

0xc185,	// (0x00020600) control_abbreviations

0xc185,	// (0x00020600) control_conventions

0xc185,	// (0x00020600) control_definitions

0xc185,	// (0x00020600) format_table_attribute

0xb542,	// (0x0001f9bd) bg_popup_preview_window_pane_g9

0xc185,	// (0x00020600) format_table_data2

0xc185,	// (0x00020600) format_table_data3

0xc185,	// (0x00020600) format_table_data_example

0x0008,

0xc185,	// (0x00020600) intro_purpose

0xf8cf,	// (0x00023d4a) bg_popup_preview_window_pane_g

0xc185,	// (0x00020600) texts_category

0xc185,	// (0x00020600) texts_graphics

0x1193,	// (0x0001560e) text_digital

0x11a2,	// (0x0001561d) text_primary

0x11b1,	// (0x0001562c) text_primary_small

0x11c0,	// (0x0001563b) text_secondary

0x11cf,	// (0x0001564a) text_title

0xb910,	// (0x0001fd8b) bg_passive_tab_pane_g1_cp3_srt

0xa961,	// (0x0001eddc) bg_passive_tab_pane_g2_cp3_srt

0xb919,	// (0x0001fd94) bg_passive_tab_pane_g3_cp3_srt

0xc1d3,	// (0x0002064e) bg_active_tab_pane_cp3_srt_ParamLimits

0xc1d3,	// (0x0002064e) bg_active_tab_pane_cp3_srt

0xb922,	// (0x0001fd9d) tabs_4_active_pane_srt_g1

0xb92a,	// (0x0001fda5) tabs_4_active_pane_srt_t1_ParamLimits

0xb92a,	// (0x0001fda5) tabs_4_active_pane_srt_t1

0xb910,	// (0x0001fd8b) bg_active_tab_pane_g1_cp3_copy1

0xa961,	// (0x0001eddc) bg_active_tab_pane_g2_cp3_copy1

0xb919,	// (0x0001fd94) bg_active_tab_pane_g3_cp3_copy1

0xc1e1,	// (0x0002065c) tabs_2_long_active_pane_srt_ParamLimits

0xc1e1,	// (0x0002065c) tabs_2_long_active_pane_srt

0xc1e1,	// (0x0002065c) tabs_2_long_passive_pane_srt_ParamLimits

0xc1e1,	// (0x0002065c) tabs_2_long_passive_pane_srt

0x1506,	// (0x00015981) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1506,	// (0x00015981) bg_passive_tab_pane_cp4_srt

0xb66c,	// (0x0001fae7) bg_passive_tab_pane_g1_cp4_srt

0xa961,	// (0x0001eddc) bg_passive_tab_pane_g2_cp4_srt

0xb675,	// (0x0001faf0) bg_passive_tab_pane_g3_cp4_srt

0xc1e1,	// (0x0002065c) bg_active_tab_pane_cp4_srt_ParamLimits

0xc1e1,	// (0x0002065c) bg_active_tab_pane_cp4_srt

0xb67e,	// (0x0001faf9) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb67e,	// (0x0001faf9) tabs_2_long_active_pane_srt_t1

0xb66c,	// (0x0001fae7) bg_active_tab_pane_g1_cp4_srt

0xa961,	// (0x0001eddc) bg_active_tab_pane_g2_cp4_srt

0xb675,	// (0x0001faf0) bg_active_tab_pane_g3_cp4_srt

0xc1d3,	// (0x0002064e) tabs_3_long_active_pane_srt_ParamLimits

0xc1d3,	// (0x0002064e) tabs_3_long_active_pane_srt

0xc1d3,	// (0x0002064e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc1d3,	// (0x0002064e) tabs_3_long_passive_pane_cp_srt

0xc1d3,	// (0x0002064e) tabs_3_long_passive_pane_srt_ParamLimits

0xc1d3,	// (0x0002064e) tabs_3_long_passive_pane_srt

0x1506,	// (0x00015981) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1506,	// (0x00015981) bg_passive_tab_pane_cp5_srt

0xa9ad,	// (0x0001ee28) bg_passive_tab_pane_g1_cp5_srt

0xa961,	// (0x0001eddc) bg_passive_tab_pane_g2_cp5_srt

0xa9b6,	// (0x0001ee31) bg_passive_tab_pane_g3_cp5_srt

0xc1e1,	// (0x0002065c) bg_active_tab_pane_cp5_srt_ParamLimits

0xc1e1,	// (0x0002065c) bg_active_tab_pane_cp5_srt

0xb656,	// (0x0001fad1) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb656,	// (0x0001fad1) tabs_3_long_active_pane_srt_t1

0xa9ad,	// (0x0001ee28) bg_active_tab_pane_g1_cp5_srt

0xa961,	// (0x0001eddc) bg_active_tab_pane_g2_cp5_srt

0xa9b6,	// (0x0001ee31) bg_active_tab_pane_g3_cp5_srt

0x2e80,	// (0x000172fb) navi_text_pane_srt_t1

0x2e78,	// (0x000172f3) navi_icon_pane_srt_g1

0x13a0,	// (0x0001581b) midp_editing_number_pane_srt

0x11de,	// (0x00015659) midp_ticker_pane_srt

0x13a8,	// (0x00015823) midp_ticker_pane_srt_g1

0x13b0,	// (0x0001582b) midp_ticker_pane_srt_g2

0x0001,

0xf75e,	// (0x00023bd9) midp_ticker_pane_srt_g

0x13b8,	// (0x00015833) midp_ticker_pane_srt_t1

0x2e69,	// (0x000172e4) midp_editing_number_pane_t1_copy1

0xaa3a,	// (0x0001eeb5) listscroll_midp_pane

0xaa3a,	// (0x0001eeb5) midp_form_pane

0xaaa5,	// (0x0001ef20) midp_info_popup_window_ParamLimits

0xaaa5,	// (0x0001ef20) midp_info_popup_window

0xc722,	// (0x00020b9d) bg_popup_sub_pane_cp50_ParamLimits

0xc722,	// (0x00020b9d) bg_popup_sub_pane_cp50

0x1f9f,	// (0x0001641a) listscroll_midp_info_pane_ParamLimits

0x1f9f,	// (0x0001641a) listscroll_midp_info_pane

0x1f7f,	// (0x000163fa) listscroll_form_midp_pane_ParamLimits

0x1f7f,	// (0x000163fa) listscroll_form_midp_pane

0x1f8b,	// (0x00016406) scroll_bar_cp050

0x1f7f,	// (0x000163fa) list_midp_pane

0xbabe,	// (0x0001ff39) signal_pane_g2_cp

0x1e99,	// (0x00016314) listscroll_midp_info_pane_t1_ParamLimits

0x1e99,	// (0x00016314) listscroll_midp_info_pane_t1

0xb13a,	// (0x0001f5b5) listscroll_midp_info_pane_t2_ParamLimits

0xb13a,	// (0x0001f5b5) listscroll_midp_info_pane_t2

0xb178,	// (0x0001f5f3) listscroll_midp_info_pane_t3_ParamLimits

0xb178,	// (0x0001f5f3) listscroll_midp_info_pane_t3

0xb1b2,	// (0x0001f62d) listscroll_midp_info_pane_t4_ParamLimits

0xb1b2,	// (0x0001f62d) listscroll_midp_info_pane_t4

0x0003,

0xf80a,	// (0x00023c85) listscroll_midp_info_pane_t_ParamLimits

0xf80a,	// (0x00023c85) listscroll_midp_info_pane_t

0xc798,	// (0x00020c13) scroll_pane_cp21

0x1e39,	// (0x000162b4) form_midp_field_choice_group_pane

0xb0fd,	// (0x0001f578) form_midp_field_text_pane

0x1e7f,	// (0x000162fa) form_midp_field_time_pane

0x1e87,	// (0x00016302) form_midp_gauge_slider_pane

0x1e90,	// (0x0001630b) form_midp_gauge_wait_pane

0xc185,	// (0x00020600) form_midp_image_pane

0xb0e6,	// (0x0001f561) list_single_midp_pane_ParamLimits

0xb0e6,	// (0x0001f561) list_single_midp_pane

0xb0c4,	// (0x0001f53f) form_midp_field_text_pane_t1

0x1b77,	// (0x00015ff2) input_focus_pane_cp050

0x1df6,	// (0x00016271) list_midp_form_text_pane

0x1d8b,	// (0x00016206) form_midp_field_choice_group_pane_t1

0x1d99,	// (0x00016214) input_focus_pane_cp051

0x1dad,	// (0x00016228) list_midp_choice_pane

0xc185,	// (0x00020600) status_idle_pane

0x1d6f,	// (0x000161ea) form_midp_field_time_pane_t1

0xc17b,	// (0x000205f6) wait_anim_pane_g2_copy1

0x1d7d,	// (0x000161f8) form_midp_field_time_pane_t2

0x0001,

0x1308,	// (0x00015783) aid_navinavi_width_2_pane

0xf805,	// (0x00023c80) form_midp_field_time_pane_t

0xc185,	// (0x00020600) input_focus_pane_cp052

0xc185,	// (0x00020600) bg_input_focus_pane_cp040

0x1d2f,	// (0x000161aa) form_midp_gauge_slider_pane_t1

0x1d3d,	// (0x000161b8) form_midp_gauge_slider_pane_t2

0xb0a8,	// (0x0001f523) form_midp_gauge_slider_pane_t3

0xb0b6,	// (0x0001f531) form_midp_gauge_slider_pane_t4

0x0003,

0xf7fc,	// (0x00023c77) form_midp_gauge_slider_pane_t

0x1d67,	// (0x000161e2) form_midp_slider_pane

0xc1e1,	// (0x0002065c) bg_input_focus_pane_cp041_ParamLimits

0xc1e1,	// (0x0002065c) bg_input_focus_pane_cp041

0x1cfc,	// (0x00016177) form_midp_gauge_wait_pane_t1_ParamLimits

0x1cfc,	// (0x00016177) form_midp_gauge_wait_pane_t1

0x1d0e,	// (0x00016189) form_midp_gauge_wait_pane_t2_ParamLimits

0x1d0e,	// (0x00016189) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f7,	// (0x00023c72) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f7,	// (0x00023c72) form_midp_gauge_wait_pane_t

0x1d20,	// (0x0001619b) form_midp_wait_pane_ParamLimits

0x1d20,	// (0x0001619b) form_midp_wait_pane

0xb072,	// (0x0001f4ed) form_midp_image_pane_g1

0xb07b,	// (0x0001f4f6) form_midp_image_pane_t1

0xb08a,	// (0x0001f505) form_midp_image_pane_t2

0xb099,	// (0x0001f514) form_midp_image_pane_t3

0x0002,

0xf7f0,	// (0x00023c6b) form_midp_image_pane_t

0x1cae,	// (0x00016129) list_single_midp_pane_g1

0x1cb7,	// (0x00016132) list_single_midp_pane_t1

0xb05d,	// (0x0001f4d8) list_midp_form_item_pane_ParamLimits

0xb05d,	// (0x0001f4d8) list_midp_form_item_pane

0x12b0,	// (0x0001572b) list_midp_form_item_pane_t1

0x12bf,	// (0x0001573a) midp_ticker_pane_g1

0x12cb,	// (0x00015746) midp_ticker_pane_g2

0x0001,

0xf744,	// (0x00023bbf) midp_ticker_pane_g

0x12d7,	// (0x00015752) midp_ticker_pane_t1

0x30e9,	// (0x00017564) midp_editing_number_pane_t1

0x30c7,	// (0x00017542) midp_editing_number_pane

0x30d6,	// (0x00017551) midp_ticker_pane

0x2e47,	// (0x000172c2) ai_message_heading_pane

0xc185,	// (0x00020600) bg_popup_window_pane_cp14

0x2e4f,	// (0x000172ca) listscroll_ai_message_pane

0x2dd1,	// (0x0001724c) ai_message_heading_pane_g1_ParamLimits

0x2dd1,	// (0x0001724c) ai_message_heading_pane_g1

0xb60c,	// (0x0001fa87) ai_message_heading_pane_g2_ParamLimits

0xb60c,	// (0x0001fa87) ai_message_heading_pane_g2

0x2de9,	// (0x00017264) ai_message_heading_pane_g3_ParamLimits

0x2de9,	// (0x00017264) ai_message_heading_pane_g3

0x2df5,	// (0x00017270) ai_message_heading_pane_g4_ParamLimits

0x2df5,	// (0x00017270) ai_message_heading_pane_g4

0x0003,

0xf931,	// (0x00023dac) ai_message_heading_pane_g_ParamLimits

0xf931,	// (0x00023dac) ai_message_heading_pane_g

0xb618,	// (0x0001fa93) ai_message_heading_pane_t1_ParamLimits

0xb618,	// (0x0001fa93) ai_message_heading_pane_t1

0xb632,	// (0x0001faad) ai_message_heading_pane_t2_ParamLimits

0xb632,	// (0x0001faad) ai_message_heading_pane_t2

0x0001,

0xf93a,	// (0x00023db5) ai_message_heading_pane_t_ParamLimits

0xf93a,	// (0x00023db5) ai_message_heading_pane_t

0x2e2d,	// (0x000172a8) bg_popup_heading_pane_cp1_ParamLimits

0x2e2d,	// (0x000172a8) bg_popup_heading_pane_cp1

0x2dbf,	// (0x0001723a) list_ai_message_pane_ParamLimits

0x2dbf,	// (0x0001723a) list_ai_message_pane

0xc798,	// (0x00020c13) scroll_pane_cp10

0x2d5b,	// (0x000171d6) list_ai_message_pane_g1

0x2d63,	// (0x000171de) list_ai_message_pane_g2

0x0001,

0xf90e,	// (0x00023d89) list_ai_message_pane_g

0x2d6b,	// (0x000171e6) list_ai_message_pane_t1_ParamLimits

0x2d6b,	// (0x000171e6) list_ai_message_pane_t1

0x2d80,	// (0x000171fb) list_ai_message_pane_t2_ParamLimits

0x2d80,	// (0x000171fb) list_ai_message_pane_t2

0x2d95,	// (0x00017210) list_ai_message_pane_t3_ParamLimits

0x2d95,	// (0x00017210) list_ai_message_pane_t3

0x2daa,	// (0x00017225) list_ai_message_pane_t4_ParamLimits

0x2daa,	// (0x00017225) list_ai_message_pane_t4

0x0003,

0xf913,	// (0x00023d8e) list_ai_message_pane_t_ParamLimits

0xf913,	// (0x00023d8e) list_ai_message_pane_t

0xb5e8,	// (0x0001fa63) cell_ai_soft_ind_pane_ParamLimits

0xb5e8,	// (0x0001fa63) cell_ai_soft_ind_pane

0x12e9,	// (0x00015764) cell_ai_soft_ind_pane_g1_ParamLimits

0x12e9,	// (0x00015764) cell_ai_soft_ind_pane_g1

0xc185,	// (0x00020600) grid_highlight_cp1

0x12f6,	// (0x00015771) text_secondary_cp56_ParamLimits

0x12f6,	// (0x00015771) text_secondary_cp56

0x2d1b,	// (0x00017196) example_general_pane_ParamLimits

0x2d1b,	// (0x00017196) example_general_pane

0x2d27,	// (0x000171a2) example_parent_pane_g1_ParamLimits

0x2d27,	// (0x000171a2) example_parent_pane_g1

0x2d33,	// (0x000171ae) example_parent_pane_t1_ParamLimits

0x2d33,	// (0x000171ae) example_parent_pane_t1

0x8e6e,	// (0x0001d2e9) popup_preview_text_window_ParamLimits

0x8e6e,	// (0x0001d2e9) popup_preview_text_window

0x110f,	// (0x0001558a) list_single_pane_cp2_g4

0xc3cd,	// (0x00020848) bg_popup_preview_window_pane_ParamLimits

0xc3cd,	// (0x00020848) bg_popup_preview_window_pane

0xb54a,	// (0x0001f9c5) popup_preview_text_window_t1_ParamLimits

0xb54a,	// (0x0001f9c5) popup_preview_text_window_t1

0x2a93,	// (0x00016f0e) popup_preview_text_window_t2_ParamLimits

0x2a93,	// (0x00016f0e) popup_preview_text_window_t2

0x2adc,	// (0x00016f57) popup_preview_text_window_t3_ParamLimits

0x2adc,	// (0x00016f57) popup_preview_text_window_t3

0x2b21,	// (0x00016f9c) popup_preview_text_window_t4_ParamLimits

0x2b21,	// (0x00016f9c) popup_preview_text_window_t4

0x0004,

0xf8e2,	// (0x00023d5d) popup_preview_text_window_t_ParamLimits

0xf8e2,	// (0x00023d5d) popup_preview_text_window_t

0x2b9f,	// (0x0001701a) scroll_pane_cp11

0x1a57,	// (0x00015ed2) bg_popup_preview_window_pane_g1

0xb50a,	// (0x0001f985) bg_popup_preview_window_pane_g2

0xb512,	// (0x0001f98d) bg_popup_preview_window_pane_g3

0xb51a,	// (0x0001f995) bg_popup_preview_window_pane_g4

0xb522,	// (0x0001f99d) bg_popup_preview_window_pane_g5

0xb52a,	// (0x0001f9a5) bg_popup_preview_window_pane_g6

0xb532,	// (0x0001f9ad) bg_popup_preview_window_pane_g7

0xb53a,	// (0x0001f9b5) bg_popup_preview_window_pane_g8

0xdf72,	// (0x000223ed) aid_popup_width_pane

0x8dea,	// (0x0001d265) popup_midp_note_alarm_window_ParamLimits

0x8dea,	// (0x0001d265) popup_midp_note_alarm_window

0xc5ff,	// (0x00020a7a) data_form_pane_ParamLimits

0xa499,	// (0x0001e914) form_field_data_pane_g1

0xa4a3,	// (0x0001e91e) form_field_data_pane_t1_ParamLimits

0xc60b,	// (0x00020a86) input_focus_pane_ParamLimits

0xc619,	// (0x00020a94) data_form_wide_pane_ParamLimits

0xc62a,	// (0x00020aa5) form_field_data_wide_pane_g1

0xc656,	// (0x00020ad1) form_field_data_wide_pane_t1_ParamLimits

0xc4a1,	// (0x0002091c) input_focus_pane_cp6_ParamLimits

0xa615,	// (0x0001ea90) input_popup_find_pane_g1_ParamLimits

0xa615,	// (0x0001ea90) input_popup_find_pane_g1

0xe1fd,	// (0x00022678) aid_navi_side_left_pane

0xe212,	// (0x0002268d) aid_navi_side_right_pane

0x245e,	// (0x000168d9) bg_popup_window_pane_cp30_ParamLimits

0x245e,	// (0x000168d9) bg_popup_window_pane_cp30

0x24d8,	// (0x00016953) popup_midp_note_alarm_window_g1_ParamLimits

0x24d8,	// (0x00016953) popup_midp_note_alarm_window_g1

0x2508,	// (0x00016983) popup_midp_note_alarm_window_t1_ParamLimits

0x2508,	// (0x00016983) popup_midp_note_alarm_window_t1

0xb353,	// (0x0001f7ce) popup_midp_note_alarm_window_t2_ParamLimits

0xb353,	// (0x0001f7ce) popup_midp_note_alarm_window_t2

0xb401,	// (0x0001f87c) popup_midp_note_alarm_window_t3_ParamLimits

0xb401,	// (0x0001f87c) popup_midp_note_alarm_window_t3

0xb429,	// (0x0001f8a4) popup_midp_note_alarm_window_t4_ParamLimits

0xb429,	// (0x0001f8a4) popup_midp_note_alarm_window_t4

0x269f,	// (0x00016b1a) popup_midp_note_alarm_window_t5_ParamLimits

0x269f,	// (0x00016b1a) popup_midp_note_alarm_window_t5

0x000a,

0xf87f,	// (0x00023cfa) popup_midp_note_alarm_window_t_ParamLimits

0xf87f,	// (0x00023cfa) popup_midp_note_alarm_window_t

0x274b,	// (0x00016bc6) wait_bar_pane_cp1_ParamLimits

0x274b,	// (0x00016bc6) wait_bar_pane_cp1

0xc185,	// (0x00020600) wait_anim_pane_copy1

0xc185,	// (0x00020600) wait_border_pane_copy1

0x2154,	// (0x000165cf) wait_border_pane_g1_copy1

0xc670,	// (0x00020aeb) form_field_popup_pane_g1

0xa4bd,	// (0x0001e938) form_field_popup_pane_t1_ParamLimits

0xc60b,	// (0x00020a86) input_focus_pane_cp7_ParamLimits

0xc678,	// (0x00020af3) list_form_pane_ParamLimits

0xc684,	// (0x00020aff) form_field_popup_wide_pane_g1

0xc68c,	// (0x00020b07) form_field_popup_wide_pane_t1_ParamLimits

0xc60b,	// (0x00020a86) input_focus_pane_cp8_ParamLimits

0xc6a1,	// (0x00020b1c) list_form_wide_pane_ParamLimits

0xb983,	// (0x0001fdfe) aid_size_cell_graphic_pane

0xa53c,	// (0x0001e9b7) data_form_pane_t1_ParamLimits

0xb81c,	// (0x0001fc97) data_form_wide_pane_t1_ParamLimits

0xaccc,	// (0x0001f147) bg_status_flat_pane

0x9b08,	// (0x0001df83) title_pane_t1_ParamLimits

0xc19b,	// (0x00020616) title_pane_t2_ParamLimits

0xc1c1,	// (0x0002063c) title_pane_t3_ParamLimits

0xf557,	// (0x000239d2) title_pane_t_ParamLimits

0xe3c0,	// (0x0002283b) level_1_signal_ParamLimits

0xe3cd,	// (0x00022848) level_2_signal_ParamLimits

0xe3da,	// (0x00022855) level_3_signal_ParamLimits

0xe3e7,	// (0x00022862) level_4_signal_ParamLimits

0xe3f4,	// (0x0002286f) level_5_signal_ParamLimits

0xe401,	// (0x0002287c) level_6_signal_ParamLimits

0xe40e,	// (0x00022889) level_7_signal_ParamLimits

0xe3c0,	// (0x0002283b) level_1_battery_ParamLimits

0xe3cd,	// (0x00022848) level_2_battery_ParamLimits

0xe3da,	// (0x00022855) level_3_battery_ParamLimits

0xe3e7,	// (0x00022862) level_4_battery_ParamLimits

0xe3f4,	// (0x0002286f) level_5_battery_ParamLimits

0xe401,	// (0x0002287c) level_6_battery_ParamLimits

0xe40e,	// (0x00022889) level_7_battery_ParamLimits

0x2363,	// (0x000167de) bg_status_flat_pane_g1

0x236b,	// (0x000167e6) bg_status_flat_pane_g2

0x2373,	// (0x000167ee) bg_status_flat_pane_g3

0x237b,	// (0x000167f6) bg_status_flat_pane_g4

0x2383,	// (0x000167fe) bg_status_flat_pane_g5

0x238b,	// (0x00016806) bg_status_flat_pane_g6

0x2393,	// (0x0001680e) bg_status_flat_pane_g7

0x9b9c,	// (0x0001e017) tabs_3_active_pane_t1_ParamLimits

0x9b9c,	// (0x0001e017) tabs_3_passive_pane_t1_ParamLimits

0x9bb6,	// (0x0001e031) tabs_4_active_pane_t1_ParamLimits

0x9bb6,	// (0x0001e031) tabs_4_1_passive_pane_t1_ParamLimits

0xa654,	// (0x0001eacf) tabs_2_active_pane_t1_ParamLimits

0xa654,	// (0x0001eacf) tabs_2_passive_pane_t1_ParamLimits

0xc1e1,	// (0x0002065c) bg_active_tab_pane_cp4_ParamLimits

0xa666,	// (0x0001eae1) tabs_2_long_active_pane_t1_ParamLimits

0x1506,	// (0x00015981) bg_passive_tab_pane_cp4_ParamLimits

0xe997,	// (0x00022e12) list_single_midp_graphic_pane_t1_ParamLimits

0xc1e1,	// (0x0002065c) bg_active_tab_pane_cp5_ParamLimits

0xa679,	// (0x0001eaf4) tabs_3_long_active_pane_t1_ParamLimits

0x1506,	// (0x00015981) bg_passive_tab_pane_cp5_ParamLimits

0xe997,	// (0x00022e12) list_single_midp_graphic_pane_t1

0xaccc,	// (0x0001f147) bg_status_flat_pane_ParamLimits

0x16c8,	// (0x00015b43) indicator_pane_cp2_ParamLimits

0x16c8,	// (0x00015b43) indicator_pane_cp2

0xae4a,	// (0x0001f2c5) navi_pane_srt_ParamLimits

0xae4a,	// (0x0001f2c5) navi_pane_srt

0x1817,	// (0x00015c92) popup_clock_digital_analogue_window_cp1

0xc23f,	// (0x000206ba) indicator_pane_t1

0x11de,	// (0x00015659) copy_highlight_pane

0x11de,	// (0x00015659) cursor_graphics_pane

0x11de,	// (0x00015659) graphic_within_text_pane

0x11de,	// (0x00015659) link_highlight_pane

0x2b62,	// (0x00016fdd) popup_preview_text_window_t5_ParamLimits

0x2b62,	// (0x00016fdd) popup_preview_text_window_t5

0x1310,	// (0x0001578b) cursor_digital_pane

0x1310,	// (0x0001578b) cursor_primary_pane

0x1321,	// (0x0001579c) cursor_primary_small_pane

0x1329,	// (0x000157a4) cursor_secondary_pane

0x1331,	// (0x000157ac) cursor_title_pane

0x1310,	// (0x0001578b) link_highlight_digital_pane

0x1318,	// (0x00015793) link_highlight_primary_pane

0x1321,	// (0x0001579c) link_highlight_primary_small_pane

0x1329,	// (0x000157a4) link_highlight_secondary_pane

0x1331,	// (0x000157ac) link_highlight_title_pane

0x1310,	// (0x0001578b) copy_highlight_digital_pane

0x1310,	// (0x0001578b) copy_highlight_primary_pane

0x1321,	// (0x0001579c) copy_highlight_primary_small_pane

0x1329,	// (0x000157a4) copy_highlight_secondary_pane

0x1331,	// (0x000157ac) copy_highlight_title_pane

0x1329,	// (0x000157a4) graphic_text_digital_pane

0x2401,	// (0x0001687c) graphic_text_primary_pane

0x240a,	// (0x00016885) graphic_text_primary_small_pane

0x1321,	// (0x0001579c) graphic_text_secondary_pane

0x1310,	// (0x0001578b) graphic_text_title_pane

0xaaf6,	// (0x0001ef71) cursor_primary_pane_g1

0x23f3,	// (0x0001686e) cursor_text_primary_t1

0xb349,	// (0x0001f7c4) cursor_primary_small_pane_g1

0x23e5,	// (0x00016860) cursor_text_primary_small_t1

0xb33f,	// (0x0001f7ba) cursor_primary_small_pane_g1_copy1

0x23cd,	// (0x00016848) cursor_text_primary_small_t1_copy1

0x23ab,	// (0x00016826) cursor_text_title_t1

0xb335,	// (0x0001f7b0) cursor_title_pane_g1

0xaaf6,	// (0x0001ef71) cursor_digital_pane_g1

0x1343,	// (0x000157be) cursor_text_digital_t1

0x1351,	// (0x000157cc) link_highlight_primary_pane_g1

0x2354,	// (0x000167cf) link_highlight_primary_pane_t1

0x1351,	// (0x000157cc) link_highlight_primary_small_pane_g1

0x1359,	// (0x000157d4) link_highlight_primary_small_pane_t1

0x1351,	// (0x000157cc) link_highlight_secondary_pane_g1

0x1368,	// (0x000157e3) link_highlight_secondary_pane_t1

0x22b9,	// (0x00016734) link_highlight_title_pane_g1

0x22d0,	// (0x0001674b) link_highlight_title_pane_t1

0x22b9,	// (0x00016734) link_highlight_digital_pane_g1

0x22c1,	// (0x0001673c) link_highlight_digital_pane_t1

0x2173,	// (0x000165ee) copy_highlight_primary_pane_g1

0x2199,	// (0x00016614) copy_highlight_primary_pane_t1

0x2173,	// (0x000165ee) copy_highlight_primary_small_pane_g1

0x218a,	// (0x00016605) copy_highlight_primary_small_pane_t1

0x1377,	// (0x000157f2) copy_highlight_secondary_pane_g1

0x137f,	// (0x000157fa) copy_highlight_secondary_pane_t1

0x2173,	// (0x000165ee) copy_highlight_title_pane_g1

0x217b,	// (0x000165f6) copy_highlight_title_pane_t1

0x2173,	// (0x000165ee) copy_highlight_digital_pane_g1

0x34dd,	// (0x00017958) copy_highlight_digital_pane_t1

0x3431,	// (0x000178ac) graphic_text_primary_pane_g1

0x34c1,	// (0x0001793c) graphic_text_primary_pane_t1

0x34cf,	// (0x0001794a) graphic_text_primary_pane_t2

0x0001,

0xf9ae,	// (0x00023e29) graphic_text_primary_pane_t

0x349d,	// (0x00017918) graphic_text_primary_small_pane_g1

0x34a5,	// (0x00017920) graphic_text_primary_small_pane_t1

0x34b3,	// (0x0001792e) graphic_text_primary_small_pane_t2

0x0001,

0xf9a9,	// (0x00023e24) graphic_text_primary_small_pane_t

0x3479,	// (0x000178f4) graphic_text_secondary_pane_g1

0x3481,	// (0x000178fc) graphic_text_secondary_pane_t1

0x348f,	// (0x0001790a) graphic_text_secondary_pane_t2

0x0001,

0xf9a4,	// (0x00023e1f) graphic_text_secondary_pane_t

0x3455,	// (0x000178d0) graphic_text_title_pane_g1

0x345d,	// (0x000178d8) graphic_text_title_pane_t1

0x346b,	// (0x000178e6) graphic_text_title_pane_t2

0x0001,

0xf99f,	// (0x00023e1a) graphic_text_title_pane_t

0x3431,	// (0x000178ac) graphic_text_digital_pane_g1

0x3439,	// (0x000178b4) graphic_text_digital_pane_t1

0x3447,	// (0x000178c2) graphic_text_digital_pane_t2

0x0001,

0xf99a,	// (0x00023e15) graphic_text_digital_pane_t

0xc1e1,	// (0x0002065c) navi_icon_pane_srt_ParamLimits

0xc1e1,	// (0x0002065c) navi_icon_pane_srt

0xc185,	// (0x00020600) navi_midp_pane_srt

0xc185,	// (0x00020600) navi_navi_pane_srt

0xc1e1,	// (0x0002065c) navi_text_pane_srt_ParamLimits

0xc1e1,	// (0x0002065c) navi_text_pane_srt

0x33fc,	// (0x00017877) navi_navi_icon_text_pane_srt

0x3404,	// (0x0001787f) navi_navi_pane_srt_g1_ParamLimits

0x3404,	// (0x0001787f) navi_navi_pane_srt_g1

0x3416,	// (0x00017891) navi_navi_pane_srt_g2_ParamLimits

0x3416,	// (0x00017891) navi_navi_pane_srt_g2

0x0001,

0xf995,	// (0x00023e10) navi_navi_pane_srt_g_ParamLimits

0xf995,	// (0x00023e10) navi_navi_pane_srt_g

0x3428,	// (0x000178a3) navi_navi_tabs_pane_srt

0x33fc,	// (0x00017877) navi_navi_text_pane_srt

0x33fc,	// (0x00017877) navi_navi_volume_pane_srt

0x33ed,	// (0x00017868) navi_navi_text_pane_srt_t1

0xeb89,	// (0x00023004) navi_navi_volume_pane_srt_g1

0xeb91,	// (0x0002300c) volume_small_pane_srt_ParamLimits

0xeb91,	// (0x0002300c) volume_small_pane_srt

0xe79d,	// (0x00022c18) volume_small_pane_srt_g1_ParamLimits

0xe79d,	// (0x00022c18) volume_small_pane_srt_g1

0xe7ad,	// (0x00022c28) volume_small_pane_srt_g2_ParamLimits

0xe7ad,	// (0x00022c28) volume_small_pane_srt_g2

0xe7be,	// (0x00022c39) volume_small_pane_srt_g3_ParamLimits

0xe7be,	// (0x00022c39) volume_small_pane_srt_g3

0xe7cf,	// (0x00022c4a) volume_small_pane_srt_g4_ParamLimits

0xe7cf,	// (0x00022c4a) volume_small_pane_srt_g4

0xe7e0,	// (0x00022c5b) volume_small_pane_srt_g5_ParamLimits

0xe7e0,	// (0x00022c5b) volume_small_pane_srt_g5

0xe7f1,	// (0x00022c6c) volume_small_pane_srt_g6_ParamLimits

0xe7f1,	// (0x00022c6c) volume_small_pane_srt_g6

0xe802,	// (0x00022c7d) volume_small_pane_srt_g7_ParamLimits

0xe802,	// (0x00022c7d) volume_small_pane_srt_g7

0xe813,	// (0x00022c8e) volume_small_pane_srt_g8_ParamLimits

0xe813,	// (0x00022c8e) volume_small_pane_srt_g8

0xe824,	// (0x00022c9f) volume_small_pane_srt_g9_ParamLimits

0xe824,	// (0x00022c9f) volume_small_pane_srt_g9

0xe835,	// (0x00022cb0) volume_small_pane_srt_g10_ParamLimits

0xe835,	// (0x00022cb0) volume_small_pane_srt_g10

0x0009,

0xf749,	// (0x00023bc4) volume_small_pane_srt_g_ParamLimits

0xf749,	// (0x00023bc4) volume_small_pane_srt_g

0x9e0c,	// (0x0001e287) query_popup_data_pane_cp2

0x33d3,	// (0x0001784e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x33d3,	// (0x0001784e) navi_navi_icon_text_pane_srt_t1

0x2401,	// (0x0001687c) navi_tabs_2_long_pane_srt

0x2401,	// (0x0001687c) navi_tabs_2_pane_srt

0x2401,	// (0x0001687c) navi_tabs_3_long_pane_srt

0x2401,	// (0x0001687c) navi_tabs_3_pane_srt

0x2401,	// (0x0001687c) navi_tabs_4_pane_srt

0x936c,	// (0x0001d7e7) tabs_2_active_pane_srt_ParamLimits

0x936c,	// (0x0001d7e7) tabs_2_active_pane_srt

0x937c,	// (0x0001d7f7) tabs_2_passive_pane_srt_ParamLimits

0x937c,	// (0x0001d7f7) tabs_2_passive_pane_srt

0x1b77,	// (0x00015ff2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1b77,	// (0x00015ff2) bg_passive_tab_pane_cp1_srt

0xb9cd,	// (0x0001fe48) bg_passive_tab_pane_g1_cp1_srt

0xa961,	// (0x0001eddc) bg_passive_tab_pane_g2_cp1_srt

0xb9d6,	// (0x0001fe51) bg_passive_tab_pane_g3_cp1_srt

0xc1d3,	// (0x0002064e) bg_active_tab_pane_cp1_srt_ParamLimits

0xc1d3,	// (0x0002064e) bg_active_tab_pane_cp1_srt

0xb9df,	// (0x0001fe5a) tabs_2_active_pane_srt_g1

0xb9e7,	// (0x0001fe62) tabs_2_active_pane_srt_t1_ParamLimits

0xb9e7,	// (0x0001fe62) tabs_2_active_pane_srt_t1

0xb9cd,	// (0x0001fe48) bg_active_tab_pane_g1_cp1_srt

0xa961,	// (0x0001eddc) bg_active_tab_pane_g2_cp1_srt

0xb9d6,	// (0x0001fe51) bg_active_tab_pane_g3_cp1_srt

0x9339,	// (0x0001d7b4) tabs_3_active_pane_srt_ParamLimits

0x9339,	// (0x0001d7b4) tabs_3_active_pane_srt

0x934a,	// (0x0001d7c5) tabs_3_passive_pane_cp_srt_ParamLimits

0x934a,	// (0x0001d7c5) tabs_3_passive_pane_cp_srt

0x935b,	// (0x0001d7d6) tabs_3_passive_pane_srt_ParamLimits

0x935b,	// (0x0001d7d6) tabs_3_passive_pane_srt

0x1b77,	// (0x00015ff2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1b77,	// (0x00015ff2) bg_passive_tab_pane_cp2_srt

0xab00,	// (0x0001ef7b) bg_passive_tab_pane_g1_cp2_srt

0xa961,	// (0x0001eddc) bg_passive_tab_pane_g2_cp2_srt

0xab09,	// (0x0001ef84) bg_passive_tab_pane_g3_cp2_srt

0xc1d3,	// (0x0002064e) bg_active_tab_pane_cp2_srt_ParamLimits

0xc1d3,	// (0x0002064e) bg_active_tab_pane_cp2_srt

0xb9af,	// (0x0001fe2a) tabs_3_active_pane_srt_g1

0xb9b7,	// (0x0001fe32) tabs_3_active_pane_srt_t1_ParamLimits

0xb9b7,	// (0x0001fe32) tabs_3_active_pane_srt_t1

0xab00,	// (0x0001ef7b) bg_active_tab_pane_g1_cp2_srt

0xa961,	// (0x0001eddc) bg_active_tab_pane_g2_cp2_srt

0xab09,	// (0x0001ef84) bg_active_tab_pane_g3_cp2_srt

0xeb41,	// (0x00022fbc) tabs_4_active_pane_srt_ParamLimits

0xeb41,	// (0x00022fbc) tabs_4_active_pane_srt

0xeb53,	// (0x00022fce) tabs_4_passive_pane_cp2_srt_ParamLimits

0xeb53,	// (0x00022fce) tabs_4_passive_pane_cp2_srt

0xe855,	// (0x00022cd0) aid_size_cell_toolbar

0x2f11,	// (0x0001738c) main_idle_act_pane_ParamLimits

0x8c2c,	// (0x0001d0a7) popup_large_graphic_colour_window_ParamLimits

0x9120,	// (0x0001d59b) popup_toolbar_window_ParamLimits

0x9120,	// (0x0001d59b) popup_toolbar_window

0x3114,	// (0x0001758f) list_single_graphic_2heading_pane_ParamLimits

0x3114,	// (0x0001758f) list_single_graphic_2heading_pane

0xe289,	// (0x00022704) aid_size_cell_apps_grid_lsc_pane

0xe29b,	// (0x00022716) aid_size_cell_apps_grid_prt_pane

0x1506,	// (0x00015981) bg_wml_button_pane_cp1_ParamLimits

0x1506,	// (0x00015981) bg_wml_button_pane_cp1

0xb0c4,	// (0x0001f53f) form_midp_field_text_pane_t1_ParamLimits

0x1b77,	// (0x00015ff2) input_focus_pane_cp050_ParamLimits

0x1df6,	// (0x00016271) list_midp_form_text_pane_ParamLimits

0x1d99,	// (0x00016214) input_focus_pane_cp051_ParamLimits

0x1dad,	// (0x00016228) list_midp_choice_pane_ParamLimits

0xb029,	// (0x0001f4a4) list_single_2graphic_pane_cp3_ParamLimits

0xb029,	// (0x0001f4a4) list_single_2graphic_pane_cp3

0xb03d,	// (0x0001f4b8) list_single_midp_graphic_pane_ParamLimits

0xb03d,	// (0x0001f4b8) list_single_midp_graphic_pane

0xe8c9,	// (0x00022d44) list_single_graphic_2heading_pane_g1_ParamLimits

0xe8c9,	// (0x00022d44) list_single_graphic_2heading_pane_g1

0xe8d5,	// (0x00022d50) list_single_graphic_2heading_pane_g4_ParamLimits

0xe8d5,	// (0x00022d50) list_single_graphic_2heading_pane_g4

0xe8e1,	// (0x00022d5c) list_single_graphic_2heading_pane_g5_ParamLimits

0xe8e1,	// (0x00022d5c) list_single_graphic_2heading_pane_g5

0x0002,

0xf79c,	// (0x00023c17) list_single_graphic_2heading_pane_g_ParamLimits

0xf79c,	// (0x00023c17) list_single_graphic_2heading_pane_g

0xe8ed,	// (0x00022d68) list_single_graphic_2heading_pane_t1_ParamLimits

0xe8ed,	// (0x00022d68) list_single_graphic_2heading_pane_t1

0xe901,	// (0x00022d7c) list_single_graphic_2heading_pane_t2_ParamLimits

0xe901,	// (0x00022d7c) list_single_graphic_2heading_pane_t2

0xe91b,	// (0x00022d96) list_single_graphic_2heading_pane_t3_ParamLimits

0xe91b,	// (0x00022d96) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a3,	// (0x00023c1e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a3,	// (0x00023c1e) list_single_graphic_2heading_pane_t

0x1973,	// (0x00015dee) bg_popup_sub_pane_cp2

0x199d,	// (0x00015e18) grid_toobar_pane

0xe933,	// (0x00022dae) cell_toolbar_pane_ParamLimits

0xe933,	// (0x00022dae) cell_toolbar_pane

0x19fb,	// (0x00015e76) cell_toolbar_pane_g1_ParamLimits

0x19fb,	// (0x00015e76) cell_toolbar_pane_g1

0xafe9,	// (0x0001f464) cell_toolbar_pane_g2_ParamLimits

0xafe9,	// (0x0001f464) cell_toolbar_pane_g2

0x0001,

0xf7aa,	// (0x00023c25) cell_toolbar_pane_g_ParamLimits

0xf7aa,	// (0x00023c25) cell_toolbar_pane_g

0x1a31,	// (0x00015eac) grid_highlight_pane_cp2_ParamLimits

0x1a31,	// (0x00015eac) grid_highlight_pane_cp2

0x1a4b,	// (0x00015ec6) toolbar_button_pane

0x1a57,	// (0x00015ed2) toolbar_button_pane_g1

0x1a5f,	// (0x00015eda) toolbar_button_pane_g2

0x1a67,	// (0x00015ee2) toolbar_button_pane_g3

0x1a6f,	// (0x00015eea) toolbar_button_pane_g4

0x1a77,	// (0x00015ef2) toolbar_button_pane_g5

0x1a7f,	// (0x00015efa) toolbar_button_pane_g6

0x1a87,	// (0x00015f02) toolbar_button_pane_g7

0x1a8f,	// (0x00015f0a) toolbar_button_pane_g8

0x1a97,	// (0x00015f12) toolbar_button_pane_g9

0x0009,

0xf7af,	// (0x00023c2a) toolbar_button_pane_g

0xe96b,	// (0x00022de6) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe96b,	// (0x00022de6) list_single_2graphic_pane_g1_cp3

0x91cd,	// (0x0001d648) list_single_2graphic_pane_g2_cp3_ParamLimits

0x91cd,	// (0x0001d648) list_single_2graphic_pane_g2_cp3

0xe977,	// (0x00022df2) list_single_2graphic_pane_g3_cp3

0xe97f,	// (0x00022dfa) list_single_2graphic_pane_g4_cp3_ParamLimits

0xe97f,	// (0x00022dfa) list_single_2graphic_pane_g4_cp3

0x91de,	// (0x0001d659) list_single_2graphic_pane_t1_cp3_ParamLimits

0x91de,	// (0x0001d659) list_single_2graphic_pane_t1_cp3

0xe98b,	// (0x00022e06) list_single_midp_graphic_pane_g2_ParamLimits

0xe98b,	// (0x00022e06) list_single_midp_graphic_pane_g2

0xe85d,	// (0x00022cd8) aid_zoom_text_primary

0xe865,	// (0x00022ce0) aid_zoom_text_secondary

0xab60,	// (0x0001efdb) status_small_pane_g7_ParamLimits

0xab60,	// (0x0001efdb) status_small_pane_g7

0xab83,	// (0x0001effe) status_small_pane_t1_ParamLimits

0x9ae4,	// (0x0001df5f) title_pane_g2

0x0003,

0xf54e,	// (0x000239c9) title_pane_g

0x9e66,	// (0x0001e2e1) aid_size_cell_colour_1_pane_ParamLimits

0x9e66,	// (0x0001e2e1) aid_size_cell_colour_1_pane

0x9e7a,	// (0x0001e2f5) aid_size_cell_colour_2_pane_ParamLimits

0x9e7a,	// (0x0001e2f5) aid_size_cell_colour_2_pane

0x9e8e,	// (0x0001e309) aid_size_cell_colour_3_pane_ParamLimits

0x9e8e,	// (0x0001e309) aid_size_cell_colour_3_pane

0x9ea2,	// (0x0001e31d) aid_size_cell_colour_4_pane_ParamLimits

0x9ea2,	// (0x0001e31d) aid_size_cell_colour_4_pane

0xe13a,	// (0x000225b5) title_pane_stacon_g1_ParamLimits

0xe13a,	// (0x000225b5) title_pane_stacon_g1

0x21f0,	// (0x0001666b) popup_note_wait_window_g3_ParamLimits

0x21f0,	// (0x0001666b) popup_note_wait_window_g3

0x2266,	// (0x000166e1) popup_note_wait_window_t5_ParamLimits

0x2266,	// (0x000166e1) popup_note_wait_window_t5

0xc185,	// (0x00020600) main_feb_china_hwr_fs_writing_pane

0x8aae,	// (0x0001cf29) popup_feb_china_hwr_fs_window_ParamLimits

0x8aae,	// (0x0001cf29) popup_feb_china_hwr_fs_window

0x91fa,	// (0x0001d675) aid_size_cell_hwr_fs_ParamLimits

0x91fa,	// (0x0001d675) aid_size_cell_hwr_fs

0x1b77,	// (0x00015ff2) bg_popup_sub_pane_cp3_ParamLimits

0x1b77,	// (0x00015ff2) bg_popup_sub_pane_cp3

0x920f,	// (0x0001d68a) grid_hwr_fs_pane_ParamLimits

0x920f,	// (0x0001d68a) grid_hwr_fs_pane

0xe9ad,	// (0x00022e28) linegrid_hwr_fs_pane_ParamLimits

0xe9ad,	// (0x00022e28) linegrid_hwr_fs_pane

0x9227,	// (0x0001d6a2) cell_hwr_fs_pane_ParamLimits

0x9227,	// (0x0001d6a2) cell_hwr_fs_pane

0x1b83,	// (0x00015ffe) linegrid_hwr_fs_pane_g1_ParamLimits

0x1b83,	// (0x00015ffe) linegrid_hwr_fs_pane_g1

0xaffd,	// (0x0001f478) linegrid_hwr_fs_pane_g2_ParamLimits

0xaffd,	// (0x0001f478) linegrid_hwr_fs_pane_g2

0x1ba1,	// (0x0001601c) linegrid_hwr_fs_pane_g3_ParamLimits

0x1ba1,	// (0x0001601c) linegrid_hwr_fs_pane_g3

0x924d,	// (0x0001d6c8) linegrid_hwr_fs_pane_g4_ParamLimits

0x924d,	// (0x0001d6c8) linegrid_hwr_fs_pane_g4

0xe9bd,	// (0x00022e38) linegrid_hwr_fs_pane_g5_ParamLimits

0xe9bd,	// (0x00022e38) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d5,	// (0x00023c50) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d5,	// (0x00023c50) linegrid_hwr_fs_pane_g

0x1bad,	// (0x00016028) cell_hwr_fs_pane_g1_ParamLimits

0x1bad,	// (0x00016028) cell_hwr_fs_pane_g1

0x18ad,	// (0x00015d28) cell_hwr_fs_pane_g2_ParamLimits

0x18ad,	// (0x00015d28) cell_hwr_fs_pane_g2

0xb00f,	// (0x0001f48a) cell_hwr_fs_pane_g3_ParamLimits

0xb00f,	// (0x0001f48a) cell_hwr_fs_pane_g3

0xb01c,	// (0x0001f497) cell_hwr_fs_pane_g4_ParamLimits

0xb01c,	// (0x0001f497) cell_hwr_fs_pane_g4

0x0003,

0xf7e0,	// (0x00023c5b) cell_hwr_fs_pane_g_ParamLimits

0xf7e0,	// (0x00023c5b) cell_hwr_fs_pane_g

0x9267,	// (0x0001d6e2) cell_hwr_fs_pane_t1

0xc185,	// (0x00020600) grid_highlight_pane_cp6

0xc185,	// (0x00020600) main_idle_act2_pane

0xc77f,	// (0x00020bfa) aid_inside_area_popup_secondary

0xb468,	// (0x0001f8e3) aid_inside_area_window_primary_ParamLimits

0xb468,	// (0x0001f8e3) aid_inside_area_window_primary

0xba05,	// (0x0001fe80) ai2_news_ticker_pane

0x34f4,	// (0x0001796f) aid_size_cell_ai1_link_ParamLimits

0x34f4,	// (0x0001796f) aid_size_cell_ai1_link

0xba0d,	// (0x0001fe88) popup_ai2_data_window_ParamLimits

0xba0d,	// (0x0001fe88) popup_ai2_data_window

0x3524,	// (0x0001799f) popup_ai2_link_window_ParamLimits

0x3524,	// (0x0001799f) popup_ai2_link_window

0x1b77,	// (0x00015ff2) bg_popup_sub_pane_cp4_ParamLimits

0x1b77,	// (0x00015ff2) bg_popup_sub_pane_cp4

0x3538,	// (0x000179b3) grid_ai2_link_pane_ParamLimits

0x3538,	// (0x000179b3) grid_ai2_link_pane

0x354f,	// (0x000179ca) popup_ai2_link_window_g1_ParamLimits

0x354f,	// (0x000179ca) popup_ai2_link_window_g1

0x355b,	// (0x000179d6) popup_ai2_link_window_g2_ParamLimits

0x355b,	// (0x000179d6) popup_ai2_link_window_g2

0x0001,

0xf9b3,	// (0x00023e2e) popup_ai2_link_window_g_ParamLimits

0xf9b3,	// (0x00023e2e) popup_ai2_link_window_g

0x356a,	// (0x000179e5) ai2_mp_button_pane

0x3572,	// (0x000179ed) ai2_mp_volume_pane

0x1d99,	// (0x00016214) bg_popup_sub_pane_cp5_ParamLimits

0x1d99,	// (0x00016214) bg_popup_sub_pane_cp5

0x357a,	// (0x000179f5) heading_ai2_gene_pane_ParamLimits

0x357a,	// (0x000179f5) heading_ai2_gene_pane

0x3586,	// (0x00017a01) list_ai2_gene_pane_ParamLimits

0x3586,	// (0x00017a01) list_ai2_gene_pane

0x35ce,	// (0x00017a49) cell_ai2_link_pane_ParamLimits

0x35ce,	// (0x00017a49) cell_ai2_link_pane

0x35e4,	// (0x00017a5f) cell_ai2_link_pane_g1

0xc185,	// (0x00020600) grid_highlight_pane_cp7

0xeba6,	// (0x00023021) ai2_mp_volume_pane_g1

0x36b4,	// (0x00017b2f) ai2_mp_volume_pane_g2

0x3629,	// (0x00017aa4) list_ai2_gene_pane_t1

0x36bc,	// (0x00017b37) ai2_mp_volume_pane_g3

0x0002,

0xf9cc,	// (0x00023e47) ai2_mp_volume_pane_g

0x938c,	// (0x0001d807) volume_small_pane_cp3

0x36c4,	// (0x00017b3f) aid_size_cell_ai2_button

0x36cc,	// (0x00017b47) grid_ai2_button_pane

0x36d5,	// (0x00017b50) cell_ai2_button_pane_ParamLimits

0x36d5,	// (0x00017b50) cell_ai2_button_pane

0xc17b,	// (0x000205f6) cell_ai2_button_pane_g1

0xc185,	// (0x00020600) grid_highlight_pane_cp8

0x3674,	// (0x00017aef) ai2_gene_pane_t1_ParamLimits

0x3674,	// (0x00017aef) ai2_gene_pane_t1

0x8a18,	// (0x0001ce93) aid_height_parent_landscape

0xb6c8,	// (0x0001fb43) aid_height_set_list

0x2f11,	// (0x0001738c) aid_size_parent

0xb983,	// (0x0001fdfe) aid_size_cell_graphic_pane_ParamLimits

0x3596,	// (0x00017a11) popup_ai2_data_window_g1_ParamLimits

0x3596,	// (0x00017a11) popup_ai2_data_window_g1

0x35a2,	// (0x00017a1d) ai2_news_ticker_pane_g1

0x35aa,	// (0x00017a25) ai2_news_ticker_pane_g2

0x0001,

0xf9b8,	// (0x00023e33) ai2_news_ticker_pane_g

0x35b2,	// (0x00017a2d) ai2_news_ticker_pane_t1

0x35c0,	// (0x00017a3b) ai2_news_ticker_pane_t2

0x0001,

0xf9bd,	// (0x00023e38) ai2_news_ticker_pane_t

0x35ed,	// (0x00017a68) heading_ai2_gene_pane_g1

0x35f5,	// (0x00017a70) heading_ai2_gene_pane_t1_ParamLimits

0x35f5,	// (0x00017a70) heading_ai2_gene_pane_t1

0x360a,	// (0x00017a85) list_highlight_pane_cp6

0x3612,	// (0x00017a8d) ai2_gene_pane_ParamLimits

0x3612,	// (0x00017a8d) ai2_gene_pane

0x3637,	// (0x00017ab2) list_ai2_gene_pane_t2

0x0001,

0xf9c2,	// (0x00023e3d) list_ai2_gene_pane_t

0x3645,	// (0x00017ac0) list_highlight_pane_cp8_ParamLimits

0x3645,	// (0x00017ac0) list_highlight_pane_cp8

0x3656,	// (0x00017ad1) ai2_gene_pane_g1_ParamLimits

0x3656,	// (0x00017ad1) ai2_gene_pane_g1

0x3668,	// (0x00017ae3) ai2_gene_pane_g2_ParamLimits

0x3668,	// (0x00017ae3) ai2_gene_pane_g2

0x0001,

0xf9c7,	// (0x00023e42) ai2_gene_pane_g_ParamLimits

0xf9c7,	// (0x00023e42) ai2_gene_pane_g

0xc54c,	// (0x000209c7) scroll_pane_cp12

0x89d5,	// (0x0001ce50) control_pane_t3_ParamLimits

0x89d5,	// (0x0001ce50) control_pane_t3

0xab74,	// (0x0001efef) status_small_pane_g8_ParamLimits

0xab74,	// (0x0001efef) status_small_pane_g8

0x8b71,	// (0x0001cfec) popup_find_window_ParamLimits

0x8e24,	// (0x0001d29f) popup_note_image_window_ParamLimits

0x19d9,	// (0x00015e54) list_double2_graphic_pane_vc_g1_ParamLimits

0x19d9,	// (0x00015e54) list_double2_graphic_pane_vc_g1

0xc55d,	// (0x000209d8) list_double2_graphic_pane_vc_g2_ParamLimits

0xc55d,	// (0x000209d8) list_double2_graphic_pane_vc_g2

0xc569,	// (0x000209e4) list_double2_graphic_pane_vc_g3_ParamLimits

0xc569,	// (0x000209e4) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x00023a3c) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x00023a3c) list_double2_graphic_pane_vc_g

0x19e5,	// (0x00015e60) list_double2_graphic_pane_vc_t1_ParamLimits

0x19e5,	// (0x00015e60) list_double2_graphic_pane_vc_t1

0xc55d,	// (0x000209d8) list_single_heading_pane_vc_g1_ParamLimits

0xc55d,	// (0x000209d8) list_single_heading_pane_vc_g1

0xc569,	// (0x000209e4) list_single_heading_pane_vc_g2_ParamLimits

0xc569,	// (0x000209e4) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023a43) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023a43) list_single_heading_pane_vc_g

0x1a9f,	// (0x00015f1a) list_single_heading_pane_vc_t1_ParamLimits

0x1a9f,	// (0x00015f1a) list_single_heading_pane_vc_t1

0x1ab5,	// (0x00015f30) list_single_heading_pane_vc_t2_ParamLimits

0x1ab5,	// (0x00015f30) list_single_heading_pane_vc_t2

0x0001,

0xf7c4,	// (0x00023c3f) list_single_heading_pane_vc_t_ParamLimits

0xf7c4,	// (0x00023c3f) list_single_heading_pane_vc_t

0x1ac7,	// (0x00015f42) list_setting_number_pane_vc_g1_ParamLimits

0x1ac7,	// (0x00015f42) list_setting_number_pane_vc_g1

0x1ad3,	// (0x00015f4e) list_setting_number_pane_vc_g2_ParamLimits

0x1ad3,	// (0x00015f4e) list_setting_number_pane_vc_g2

0x0001,

0xf7c9,	// (0x00023c44) list_setting_number_pane_vc_g_ParamLimits

0xf7c9,	// (0x00023c44) list_setting_number_pane_vc_g

0x1adf,	// (0x00015f5a) list_setting_number_pane_vc_t1_ParamLimits

0x1adf,	// (0x00015f5a) list_setting_number_pane_vc_t1

0x1af3,	// (0x00015f6e) list_setting_number_pane_vc_t2_ParamLimits

0x1af3,	// (0x00015f6e) list_setting_number_pane_vc_t2

0x1b0f,	// (0x00015f8a) list_setting_number_pane_vc_t3_ParamLimits

0x1b0f,	// (0x00015f8a) list_setting_number_pane_vc_t3

0x0002,

0xf7ce,	// (0x00023c49) list_setting_number_pane_vc_t_ParamLimits

0xf7ce,	// (0x00023c49) list_setting_number_pane_vc_t

0x1b3b,	// (0x00015fb6) set_value_pane_vc_ParamLimits

0x1b3b,	// (0x00015fb6) set_value_pane_vc

0x3114,	// (0x0001758f) list_double2_graphic_pane_vc_ParamLimits

0x3114,	// (0x0001758f) list_double2_graphic_pane_vc

0x3114,	// (0x0001758f) list_double2_large_graphic_pane_vc_ParamLimits

0x3114,	// (0x0001758f) list_double2_large_graphic_pane_vc

0x3114,	// (0x0001758f) list_double2_pane_vc_ParamLimits

0x3114,	// (0x0001758f) list_double2_pane_vc

0x3114,	// (0x0001758f) list_double_graphic_heading_pane_vc_ParamLimits

0x3114,	// (0x0001758f) list_double_graphic_heading_pane_vc

0x3114,	// (0x0001758f) list_double_graphic_pane_vc_ParamLimits

0x3114,	// (0x0001758f) list_double_graphic_pane_vc

0x3114,	// (0x0001758f) list_double_heading_pane_vc_ParamLimits

0x3114,	// (0x0001758f) list_double_heading_pane_vc

0x3126,	// (0x000175a1) list_double_large_graphic_pane_vc_ParamLimits

0x3126,	// (0x000175a1) list_double_large_graphic_pane_vc

0x3114,	// (0x0001758f) list_double_number_pane_vc_ParamLimits

0x3114,	// (0x0001758f) list_double_number_pane_vc

0x3114,	// (0x0001758f) list_double_pane_vc_ParamLimits

0x3114,	// (0x0001758f) list_double_pane_vc

0x3114,	// (0x0001758f) list_double_time_pane_vc_ParamLimits

0x3114,	// (0x0001758f) list_double_time_pane_vc

0x3114,	// (0x0001758f) list_setting_number_pane_vc_ParamLimits

0x3114,	// (0x0001758f) list_setting_number_pane_vc

0x3114,	// (0x0001758f) list_setting_pane_vc_ParamLimits

0x3114,	// (0x0001758f) list_setting_pane_vc

0x3114,	// (0x0001758f) list_single_graphic_heading_pane_vc_ParamLimits

0x3114,	// (0x0001758f) list_single_graphic_heading_pane_vc

0x3114,	// (0x0001758f) list_single_heading_pane_vc_ParamLimits

0x3114,	// (0x0001758f) list_single_heading_pane_vc

0x3114,	// (0x0001758f) list_single_number_heading_pane_vc_ParamLimits

0x3114,	// (0x0001758f) list_single_number_heading_pane_vc

0x3709,	// (0x00017b84) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3709,	// (0x00017b84) list_double_graphic_heading_pane_vc_g1

0xc55d,	// (0x000209d8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc55d,	// (0x000209d8) list_double_graphic_heading_pane_vc_g2

0xc569,	// (0x000209e4) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc569,	// (0x000209e4) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d3,	// (0x00023e4e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d3,	// (0x00023e4e) list_double_graphic_heading_pane_vc_g

0x3715,	// (0x00017b90) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3715,	// (0x00017b90) list_double_graphic_heading_pane_vc_t1

0x3729,	// (0x00017ba4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3729,	// (0x00017ba4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9da,	// (0x00023e55) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9da,	// (0x00023e55) list_double_graphic_heading_pane_vc_t

0x1ac7,	// (0x00015f42) list_setting_pane_vc_g1_ParamLimits

0x1ac7,	// (0x00015f42) list_setting_pane_vc_g1

0x1ad3,	// (0x00015f4e) list_setting_pane_vc_g2_ParamLimits

0x1ad3,	// (0x00015f4e) list_setting_pane_vc_g2

0x0001,

0xf7c9,	// (0x00023c44) list_setting_pane_vc_g_ParamLimits

0xf7c9,	// (0x00023c44) list_setting_pane_vc_g

0x3941,	// (0x00017dbc) list_setting_pane_vc_t1_ParamLimits

0x3941,	// (0x00017dbc) list_setting_pane_vc_t1

0x395d,	// (0x00017dd8) list_setting_pane_vc_t2_ParamLimits

0x395d,	// (0x00017dd8) list_setting_pane_vc_t2

0x0001,

0xfa1d,	// (0x00023e98) list_setting_pane_vc_t_ParamLimits

0xfa1d,	// (0x00023e98) list_setting_pane_vc_t

0x1b3b,	// (0x00015fb6) set_value_pane_cp_vc_ParamLimits

0x1b3b,	// (0x00015fb6) set_value_pane_cp_vc

0xc55d,	// (0x000209d8) list_single_number_heading_pane_vc_g1_ParamLimits

0xc55d,	// (0x000209d8) list_single_number_heading_pane_vc_g1

0xc569,	// (0x000209e4) list_single_number_heading_pane_vc_g2_ParamLimits

0xc569,	// (0x000209e4) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023a43) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023a43) list_single_number_heading_pane_vc_g

0x3977,	// (0x00017df2) list_single_number_heading_pane_vc_t1_ParamLimits

0x3977,	// (0x00017df2) list_single_number_heading_pane_vc_t1

0x398d,	// (0x00017e08) list_single_number_heading_pane_vc_t2_ParamLimits

0x398d,	// (0x00017e08) list_single_number_heading_pane_vc_t2

0x399f,	// (0x00017e1a) list_single_number_heading_pane_vc_t3_ParamLimits

0x399f,	// (0x00017e1a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa22,	// (0x00023e9d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa22,	// (0x00023e9d) list_single_number_heading_pane_vc_t

0x39b1,	// (0x00017e2c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x39b1,	// (0x00017e2c) list_single_graphic_heading_pane_vc_g1

0xc55d,	// (0x000209d8) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc55d,	// (0x000209d8) list_single_graphic_heading_pane_vc_g4

0xc569,	// (0x000209e4) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc569,	// (0x000209e4) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa29,	// (0x00023ea4) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa29,	// (0x00023ea4) list_single_graphic_heading_pane_vc_g

0x39bd,	// (0x00017e38) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x39bd,	// (0x00017e38) list_single_graphic_heading_pane_vc_t1

0x39d3,	// (0x00017e4e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x39d3,	// (0x00017e4e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa30,	// (0x00023eab) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa30,	// (0x00023eab) list_single_graphic_heading_pane_vc_t

0xc55d,	// (0x000209d8) list_double2_pane_vc_g1_ParamLimits

0xc55d,	// (0x000209d8) list_double2_pane_vc_g1

0xc569,	// (0x000209e4) list_double2_pane_vc_g2_ParamLimits

0xc569,	// (0x000209e4) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023a43) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023a43) list_double2_pane_vc_g

0x39e5,	// (0x00017e60) list_double2_pane_vc_t1_ParamLimits

0x39e5,	// (0x00017e60) list_double2_pane_vc_t1

0x39fd,	// (0x00017e78) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x39fd,	// (0x00017e78) list_double2_large_graphic_pane_vc_g1

0xc55d,	// (0x000209d8) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc55d,	// (0x000209d8) list_double2_large_graphic_pane_vc_g2

0xc569,	// (0x000209e4) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc569,	// (0x000209e4) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00023a60) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00023a60) list_double2_large_graphic_pane_vc_g

0x19e5,	// (0x00015e60) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x19e5,	// (0x00015e60) list_double2_large_graphic_pane_vc_t1

0x3a09,	// (0x00017e84) list_double_time_pane_vc_g1_ParamLimits

0x3a09,	// (0x00017e84) list_double_time_pane_vc_g1

0x3a15,	// (0x00017e90) list_double_time_pane_vc_g2_ParamLimits

0x3a15,	// (0x00017e90) list_double_time_pane_vc_g2

0x0001,

0xfa35,	// (0x00023eb0) list_double_time_pane_vc_g_ParamLimits

0xfa35,	// (0x00023eb0) list_double_time_pane_vc_g

0x3a21,	// (0x00017e9c) list_double_time_pane_vc_t1_ParamLimits

0x3a21,	// (0x00017e9c) list_double_time_pane_vc_t1

0x3a45,	// (0x00017ec0) list_double_time_pane_vc_t2_ParamLimits

0x3a45,	// (0x00017ec0) list_double_time_pane_vc_t2

0x3a74,	// (0x00017eef) list_double_time_pane_vc_t3_ParamLimits

0x3a74,	// (0x00017eef) list_double_time_pane_vc_t3

0x3a86,	// (0x00017f01) list_double_time_pane_vc_t4_ParamLimits

0x3a86,	// (0x00017f01) list_double_time_pane_vc_t4

0x0003,

0xfa3a,	// (0x00023eb5) list_double_time_pane_vc_t_ParamLimits

0xfa3a,	// (0x00023eb5) list_double_time_pane_vc_t

0xc55d,	// (0x000209d8) list_double_pane_vc_g1_ParamLimits

0xc55d,	// (0x000209d8) list_double_pane_vc_g1

0xc569,	// (0x000209e4) list_double_pane_vc_g2_ParamLimits

0xc569,	// (0x000209e4) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023a43) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023a43) list_double_pane_vc_g

0x3a9a,	// (0x00017f15) list_double_pane_vc_t1_ParamLimits

0x3a9a,	// (0x00017f15) list_double_pane_vc_t1

0x3aae,	// (0x00017f29) list_double_pane_vc_t2_ParamLimits

0x3aae,	// (0x00017f29) list_double_pane_vc_t2

0x0001,

0xfa43,	// (0x00023ebe) list_double_pane_vc_t_ParamLimits

0xfa43,	// (0x00023ebe) list_double_pane_vc_t

0xc55d,	// (0x000209d8) list_double_number_pane_vc_g1_ParamLimits

0xc55d,	// (0x000209d8) list_double_number_pane_vc_g1

0xc569,	// (0x000209e4) list_double_number_pane_vc_g2_ParamLimits

0xc569,	// (0x000209e4) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023a43) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023a43) list_double_number_pane_vc_g

0x3ac6,	// (0x00017f41) list_double_number_pane_vc_t1_ParamLimits

0x3ac6,	// (0x00017f41) list_double_number_pane_vc_t1

0x3a9a,	// (0x00017f15) list_double_number_pane_vc_t2_ParamLimits

0x3a9a,	// (0x00017f15) list_double_number_pane_vc_t2

0x3ad8,	// (0x00017f53) list_double_number_pane_vc_t3_ParamLimits

0x3ad8,	// (0x00017f53) list_double_number_pane_vc_t3

0x0002,

0xfa48,	// (0x00023ec3) list_double_number_pane_vc_t_ParamLimits

0xfa48,	// (0x00023ec3) list_double_number_pane_vc_t

0x3af0,	// (0x00017f6b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3af0,	// (0x00017f6b) list_double_large_graphic_pane_vc_g1

0x3b12,	// (0x00017f8d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3b12,	// (0x00017f8d) list_double_large_graphic_pane_vc_g2

0x3b26,	// (0x00017fa1) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3b26,	// (0x00017fa1) list_double_large_graphic_pane_vc_g3

0x3b35,	// (0x00017fb0) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3b35,	// (0x00017fb0) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4f,	// (0x00023eca) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x00023eca) list_double_large_graphic_pane_vc_g

0x3b41,	// (0x00017fbc) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3b41,	// (0x00017fbc) list_double_large_graphic_pane_vc_t1

0x3b5d,	// (0x00017fd8) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3b5d,	// (0x00017fd8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa58,	// (0x00023ed3) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa58,	// (0x00023ed3) list_double_large_graphic_pane_vc_t

0xc55d,	// (0x000209d8) list_double_heading_pane_vc_g1_ParamLimits

0xc55d,	// (0x000209d8) list_double_heading_pane_vc_g1

0xc569,	// (0x000209e4) list_double_heading_pane_vc_g2_ParamLimits

0xc569,	// (0x000209e4) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023a43) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023a43) list_double_heading_pane_vc_g

0x3b7f,	// (0x00017ffa) list_double_heading_pane_vc_t1_ParamLimits

0x3b7f,	// (0x00017ffa) list_double_heading_pane_vc_t1

0x3b93,	// (0x0001800e) list_double_heading_pane_vc_t2_ParamLimits

0x3b93,	// (0x0001800e) list_double_heading_pane_vc_t2

0x0001,

0xfa5d,	// (0x00023ed8) list_double_heading_pane_vc_t_ParamLimits

0xfa5d,	// (0x00023ed8) list_double_heading_pane_vc_t

0x3bab,	// (0x00018026) list_double_graphic_pane_vc_g1_ParamLimits

0x3bab,	// (0x00018026) list_double_graphic_pane_vc_g1

0x3bbe,	// (0x00018039) list_double_graphic_pane_vc_g2_ParamLimits

0x3bbe,	// (0x00018039) list_double_graphic_pane_vc_g2

0xc55d,	// (0x000209d8) list_double_graphic_pane_vc_g3_ParamLimits

0xc55d,	// (0x000209d8) list_double_graphic_pane_vc_g3

0x0003,

0xfa62,	// (0x00023edd) list_double_graphic_pane_vc_g_ParamLimits

0xfa62,	// (0x00023edd) list_double_graphic_pane_vc_g

0x3bdb,	// (0x00018056) list_double_graphic_pane_vc_t1_ParamLimits

0x3bdb,	// (0x00018056) list_double_graphic_pane_vc_t1

0x3bfa,	// (0x00018075) list_double_graphic_pane_vc_t2_ParamLimits

0x3bfa,	// (0x00018075) list_double_graphic_pane_vc_t2

0x0001,

0xfa6b,	// (0x00023ee6) list_double_graphic_pane_vc_t_ParamLimits

0xfa6b,	// (0x00023ee6) list_double_graphic_pane_vc_t

0xdf7e,	// (0x000223f9) aid_size_cell_fastswap

0x8590,	// (0x0001ca0b) aid_size_cell_touch_ParamLimits

0x8590,	// (0x0001ca0b) aid_size_cell_touch

0xe0df,	// (0x0002255a) popup_fast_swap_wide_window_ParamLimits

0xe0df,	// (0x0002255a) popup_fast_swap_wide_window

0x8760,	// (0x0001cbdb) touch_pane_ParamLimits

0x8760,	// (0x0001cbdb) touch_pane

0xc5d4,	// (0x00020a4f) button_value_adjust_pane_cp2

0xc5dc,	// (0x00020a57) button_value_adjust_pane_cp4

0xc5e4,	// (0x00020a5f) form_field_data_pane_cp2

0xa445,	// (0x0001e8c0) form_field_data_wide_pane_cp2

0xe2ca,	// (0x00022745) bg_scroll_pane_ParamLimits

0x8850,	// (0x0001cccb) scroll_handle_pane_ParamLimits

0xe2e9,	// (0x00022764) scroll_sc2_down_pane_ParamLimits

0xe2e9,	// (0x00022764) scroll_sc2_down_pane

0xe310,	// (0x0002278b) scroll_sc2_up_pane_ParamLimits

0xe310,	// (0x0002278b) scroll_sc2_up_pane

0xbb46,	// (0x0001ffc1) grid_wheel_folder_pane_g1_ParamLimits

0xbb46,	// (0x0001ffc1) grid_wheel_folder_pane_g1

0xe735,	// (0x00022bb0) clock_nsta_pane_cp2_ParamLimits

0xe735,	// (0x00022bb0) clock_nsta_pane_cp2

0xaa3a,	// (0x0001eeb5) listscroll_midp_pane_ParamLimits

0xaa46,	// (0x0001eec1) midp_canvas_pane

0x14d6,	// (0x00015951) nsta_clock_indic_pane

0x1512,	// (0x0001598d) listscroll_form_pane_vc

0x151a,	// (0x00015995) listscroll_set_pane_vc_ParamLimits

0x151a,	// (0x00015995) listscroll_set_pane_vc

0xacf4,	// (0x0001f16f) clock_nsta_pane

0xad1e,	// (0x0001f199) indicator_nsta_pane

0x1973,	// (0x00015dee) bg_popup_sub_pane_cp2_ParamLimits

0x1987,	// (0x00015e02) find_pane_cp2_ParamLimits

0x1987,	// (0x00015e02) find_pane_cp2

0x199d,	// (0x00015e18) grid_toobar_pane_ParamLimits

0x1b4b,	// (0x00015fc6) list_form_gen_pane_vc_ParamLimits

0x1b4b,	// (0x00015fc6) list_form_gen_pane_vc

0x1b61,	// (0x00015fdc) scroll_pane_cp8_vc_ParamLimits

0x1b61,	// (0x00015fdc) scroll_pane_cp8_vc

0x1bdd,	// (0x00016058) data_form_wide_pane_vc_ParamLimits

0x1bdd,	// (0x00016058) data_form_wide_pane_vc

0x1be9,	// (0x00016064) form_field_data_wide_pane_vc_g1

0x1bf1,	// (0x0001606c) form_field_data_wide_pane_vc_t1_ParamLimits

0x1bf1,	// (0x0001606c) form_field_data_wide_pane_vc_t1

0xc60b,	// (0x00020a86) input_focus_pane_cp6_vc_ParamLimits

0xc60b,	// (0x00020a86) input_focus_pane_cp6_vc

0x1f7f,	// (0x000163fa) list_midp_pane_ParamLimits

0x3379,	// (0x000177f4) scroll_pane_cp16_ParamLimits

0x3379,	// (0x000177f4) scroll_pane_cp16

0x1fcd,	// (0x00016448) button_value_adjust_pane_ParamLimits

0x1fcd,	// (0x00016448) button_value_adjust_pane

0xb6d9,	// (0x0001fb54) button_value_adjust_pane_cp6_ParamLimits

0xb6d9,	// (0x0001fb54) button_value_adjust_pane_cp6

0xb7f3,	// (0x0001fc6e) settings_code_pane_cp_ParamLimits

0xb7f3,	// (0x0001fc6e) settings_code_pane_cp

0xc17b,	// (0x000205f6) cell_touch_pane_g1

0xc17b,	// (0x000205f6) cell_touch_pane_g2

0x0001,

0xf6ef,	// (0x00023b6a) cell_touch_pane_g

0xba23,	// (0x0001fe9e) cell_touch_pane_cp_ParamLimits

0xba23,	// (0x0001fe9e) cell_touch_pane_cp

0xba3f,	// (0x0001feba) cell_touch_pane_ParamLimits

0xba3f,	// (0x0001feba) cell_touch_pane

0xc17b,	// (0x000205f6) scroll_sc2_down_pane_g1

0xc17b,	// (0x000205f6) scroll_sc2_up_pane_g1

0xc185,	// (0x00020600) bg_set_opt_pane_cp4_vc

0x3741,	// (0x00017bbc) list_set_graphic_pane_vc_g1_ParamLimits

0x3741,	// (0x00017bbc) list_set_graphic_pane_vc_g1

0x374d,	// (0x00017bc8) list_set_graphic_pane_vc_g2_ParamLimits

0x374d,	// (0x00017bc8) list_set_graphic_pane_vc_g2

0x0001,

0xf9df,	// (0x00023e5a) list_set_graphic_pane_vc_g_ParamLimits

0xf9df,	// (0x00023e5a) list_set_graphic_pane_vc_g

0x3759,	// (0x00017bd4) text_primary_small_cp13_vc_ParamLimits

0x3759,	// (0x00017bd4) text_primary_small_cp13_vc

0x3771,	// (0x00017bec) list_set_graphic_pane_vc_ParamLimits

0x3771,	// (0x00017bec) list_set_graphic_pane_vc

0xc185,	// (0x00020600) input_focus_pane_cp2_vc

0xc17b,	// (0x000205f6) setting_code_pane_vc_g1

0xc1f8,	// (0x00020673) setting_code_pane_vc_t1

0x3784,	// (0x00017bff) set_text_pane_vc_t1_ParamLimits

0x3784,	// (0x00017bff) set_text_pane_vc_t1

0xc185,	// (0x00020600) input_focus_pane_cp1_vc

0x37a0,	// (0x00017c1b) list_set_text_pane_vc

0xc17b,	// (0x000205f6) setting_text_pane_vc_g1

0xc185,	// (0x00020600) bg_set_opt_pane_cp2_vc

0xc1ef,	// (0x0002066a) setting_slider_graphic_pane_vc_g1

0x37aa,	// (0x00017c25) setting_slider_graphic_pane_vc_t1

0x37ba,	// (0x00017c35) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e4,	// (0x00023e5f) setting_slider_graphic_pane_vc_t

0x37ca,	// (0x00017c45) slider_set_pane_cp_vc

0x37d2,	// (0x00017c4d) slider_set_pane_vc_g1

0x37db,	// (0x00017c56) slider_set_pane_vc_g2

0x0006,

0xf9e9,	// (0x00023e64) slider_set_pane_vc_g

0xc6d1,	// (0x00020b4c) set_opt_bg_pane_g1_copy1

0xc6d9,	// (0x00020b54) set_opt_bg_pane_g2_copy1

0x3807,	// (0x00017c82) set_opt_bg_pane_g3_copy1

0xc6e9,	// (0x00020b64) set_opt_bg_pane_g4_copy1

0xc6f1,	// (0x00020b6c) set_opt_bg_pane_g5_copy1

0xc6f9,	// (0x00020b74) set_opt_bg_pane_g6_copy1

0x380f,	// (0x00017c8a) set_opt_bg_pane_g7_copy1

0x3817,	// (0x00017c92) set_opt_bg_pane_g8_copy1

0x381f,	// (0x00017c9a) set_opt_bg_pane_g9_copy1

0xc185,	// (0x00020600) bg_set_opt_pane_cp_vc

0x3827,	// (0x00017ca2) setting_slider_pane_vc_t1

0x3836,	// (0x00017cb1) setting_slider_pane_vc_t2

0x3846,	// (0x00017cc1) setting_slider_pane_vc_t3

0x0002,

0xf9f8,	// (0x00023e73) setting_slider_pane_vc_t

0x3856,	// (0x00017cd1) slider_set_pane_vc

0xe9d3,	// (0x00022e4e) volume_set_pane_vc_g1

0xebae,	// (0x00023029) volume_set_pane_vc_g2

0xebb7,	// (0x00023032) volume_set_pane_vc_g3

0xebc0,	// (0x0002303b) volume_set_pane_vc_g4

0xebc9,	// (0x00023044) volume_set_pane_vc_g5

0xebd2,	// (0x0002304d) volume_set_pane_vc_g6

0xebdb,	// (0x00023056) volume_set_pane_vc_g7

0xebe4,	// (0x0002305f) volume_set_pane_vc_g8

0xebed,	// (0x00023068) volume_set_pane_vc_g9

0xebf6,	// (0x00023071) volume_set_pane_vc_g10

0x0009,

0xf9ff,	// (0x00023e7a) volume_set_pane_vc_g

0x385e,	// (0x00017cd9) volume_set_pane_vc

0x3866,	// (0x00017ce1) button_value_adjust_pane_cp1_vc

0x3870,	// (0x00017ceb) list_highlight_pane_cp2_vc

0x3879,	// (0x00017cf4) list_set_pane_vc_ParamLimits

0x3879,	// (0x00017cf4) list_set_pane_vc

0x38d7,	// (0x00017d52) main_pane_set_vc_t1_ParamLimits

0x38d7,	// (0x00017d52) main_pane_set_vc_t1

0x38ec,	// (0x00017d67) main_pane_set_vc_t2_ParamLimits

0x38ec,	// (0x00017d67) main_pane_set_vc_t2

0x38fe,	// (0x00017d79) main_pane_set_vc_t3_ParamLimits

0x38fe,	// (0x00017d79) main_pane_set_vc_t3

0x3910,	// (0x00017d8b) main_pane_set_vc_t4_ParamLimits

0x3910,	// (0x00017d8b) main_pane_set_vc_t4

0x0003,

0xfa14,	// (0x00023e8f) main_pane_set_vc_t_ParamLimits

0xfa14,	// (0x00023e8f) main_pane_set_vc_t

0x3922,	// (0x00017d9d) setting_code_pane_vc_ParamLimits

0x3922,	// (0x00017d9d) setting_code_pane_vc

0x3931,	// (0x00017dac) setting_slider_graphic_pane_vc

0x3931,	// (0x00017dac) setting_slider_pane_vc

0x3931,	// (0x00017dac) setting_text_pane_vc

0x3931,	// (0x00017dac) setting_volume_pane_vc

0x3939,	// (0x00017db4) scroll_pane_cp121_vc

0xc5c2,	// (0x00020a3d) set_content_pane_vc

0x3c24,	// (0x0001809f) button_value_adjust_pane_g1

0x3c2d,	// (0x000180a8) button_value_adjust_pane_g2

0x0001,

0xfa70,	// (0x00023eeb) button_value_adjust_pane_g

0x3c36,	// (0x000180b1) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3c36,	// (0x000180b1) form_field_slider_wide_pane_vc_t1

0x3c4a,	// (0x000180c5) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3c4a,	// (0x000180c5) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa75,	// (0x00023ef0) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa75,	// (0x00023ef0) form_field_slider_wide_pane_vc_t

0xc1d3,	// (0x0002064e) input_focus_pane_cp10_vc_ParamLimits

0xc1d3,	// (0x0002064e) input_focus_pane_cp10_vc

0x3c78,	// (0x000180f3) slider_cont_pane_cp1_vc_ParamLimits

0x3c78,	// (0x000180f3) slider_cont_pane_cp1_vc

0x3c8a,	// (0x00018105) slider_form_pane_g1_cp2

0x37db,	// (0x00017c56) slider_form_pane_g2_cp2

0x3cb7,	// (0x00018132) form_field_slider_pane_vc_t3

0x3cc5,	// (0x00018140) form_field_slider_pane_vc_t4

0x3cd3,	// (0x0001814e) slider_form_pane_vc_ParamLimits

0x3cd3,	// (0x0001814e) slider_form_pane_vc

0x3ce0,	// (0x0001815b) form_field_slider_pane_vc_t1_ParamLimits

0x3ce0,	// (0x0001815b) form_field_slider_pane_vc_t1

0x3c4a,	// (0x000180c5) form_field_slider_pane_vc_t2_ParamLimits

0x3c4a,	// (0x000180c5) form_field_slider_pane_vc_t2

0x0001,

0xfa87,	// (0x00023f02) form_field_slider_pane_vc_t_ParamLimits

0xfa87,	// (0x00023f02) form_field_slider_pane_vc_t

0xc1d3,	// (0x0002064e) input_focus_pane_cp9_vc_ParamLimits

0xc1d3,	// (0x0002064e) input_focus_pane_cp9_vc

0x3cfc,	// (0x00018177) slider_cont_pane_vc_ParamLimits

0x3cfc,	// (0x00018177) slider_cont_pane_vc

0x3d10,	// (0x0001818b) list_form_graphic_pane_cp_vc_ParamLimits

0x3d10,	// (0x0001818b) list_form_graphic_pane_cp_vc

0x1be9,	// (0x00016064) form_field_popup_wide_pane_vc_g1

0x3d25,	// (0x000181a0) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3d25,	// (0x000181a0) form_field_popup_wide_pane_vc_t1

0xc60b,	// (0x00020a86) input_focus_pane_cp8_vc_ParamLimits

0xc60b,	// (0x00020a86) input_focus_pane_cp8_vc

0x3d6a,	// (0x000181e5) list_form_wide_pane_vc_ParamLimits

0x3d6a,	// (0x000181e5) list_form_wide_pane_vc

0x3d76,	// (0x000181f1) list_form_graphic_pane_vc_g1

0x3d7e,	// (0x000181f9) list_form_graphic_pane_vc_t1_ParamLimits

0x3d7e,	// (0x000181f9) list_form_graphic_pane_vc_t1

0xc1e1,	// (0x0002065c) list_highlight_pane_cp5_vc_ParamLimits

0xc1e1,	// (0x0002065c) list_highlight_pane_cp5_vc

0x3d9a,	// (0x00018215) list_form_graphic_pane_vc_ParamLimits

0x3d9a,	// (0x00018215) list_form_graphic_pane_vc

0x1be9,	// (0x00016064) form_field_popup_pane_vc_g1

0x3db0,	// (0x0001822b) form_field_popup_pane_vc_t1_ParamLimits

0x3db0,	// (0x0001822b) form_field_popup_pane_vc_t1

0xc60b,	// (0x00020a86) input_focus_pane_cp7_vc_ParamLimits

0xc60b,	// (0x00020a86) input_focus_pane_cp7_vc

0x3dc7,	// (0x00018242) list_form_pane_vc_ParamLimits

0x3dc7,	// (0x00018242) list_form_pane_vc

0x3dd3,	// (0x0001824e) data_form_pane_vc_t1_ParamLimits

0x3dd3,	// (0x0001824e) data_form_pane_vc_t1

0xc6d1,	// (0x00020b4c) input_focus_pane_vc_g1

0xc6d9,	// (0x00020b54) input_focus_pane_vc_g2

0xc6e1,	// (0x00020b5c) input_focus_pane_vc_g3

0xc6e9,	// (0x00020b64) input_focus_pane_vc_g4

0xc6f1,	// (0x00020b6c) input_focus_pane_vc_g5

0xc6f9,	// (0x00020b74) input_focus_pane_vc_g6

0xc701,	// (0x00020b7c) input_focus_pane_vc_g7

0xc709,	// (0x00020b84) input_focus_pane_vc_g8

0xc711,	// (0x00020b8c) input_focus_pane_vc_g9

0xc17b,	// (0x000205f6) input_focus_pane_vc_g10

0x0009,

0xf678,	// (0x00023af3) input_focus_pane_vc_g

0x1bdd,	// (0x00016058) data_form_pane_vc_ParamLimits

0x1bdd,	// (0x00016058) data_form_pane_vc

0x1be9,	// (0x00016064) form_field_data_pane_vc_g1

0x3dee,	// (0x00018269) form_field_data_pane_vc_t1_ParamLimits

0x3dee,	// (0x00018269) form_field_data_pane_vc_t1

0xc60b,	// (0x00020a86) input_focus_pane_vc_ParamLimits

0xc60b,	// (0x00020a86) input_focus_pane_vc

0x3e08,	// (0x00018283) button_value_adjust_pane_cp3_vc

0x3e10,	// (0x0001828b) button_value_adjust_pane_cp5_vc

0x3e18,	// (0x00018293) form_field_data_pane_vc_ParamLimits

0x3e18,	// (0x00018293) form_field_data_pane_vc

0x3e2f,	// (0x000182aa) form_field_data_pane_vc_cp2

0x3e37,	// (0x000182b2) form_field_data_wide_pane_vc_ParamLimits

0x3e37,	// (0x000182b2) form_field_data_wide_pane_vc

0x3e4d,	// (0x000182c8) form_field_data_wide_pane_vc_cp2

0x3e55,	// (0x000182d0) form_field_popup_pane_vc_ParamLimits

0x3e55,	// (0x000182d0) form_field_popup_pane_vc

0x3e6c,	// (0x000182e7) form_field_popup_wide_pane_vc_ParamLimits

0x3e6c,	// (0x000182e7) form_field_popup_wide_pane_vc

0x3e82,	// (0x000182fd) form_field_slider_pane_vc_ParamLimits

0x3e82,	// (0x000182fd) form_field_slider_pane_vc

0x3e95,	// (0x00018310) form_field_slider_wide_pane_vc_ParamLimits

0x3e95,	// (0x00018310) form_field_slider_wide_pane_vc

0xba5c,	// (0x0001fed7) grid_touch_1_pane_ParamLimits

0xba5c,	// (0x0001fed7) grid_touch_1_pane

0xba70,	// (0x0001feeb) grid_touch_2_pane_ParamLimits

0xba70,	// (0x0001feeb) grid_touch_2_pane

0x3f63,	// (0x000183de) touch_pane_g1_ParamLimits

0x3f63,	// (0x000183de) touch_pane_g1

0x3ecc,	// (0x00018347) cell_app_pane_cp_wide_ParamLimits

0x3ecc,	// (0x00018347) cell_app_pane_cp_wide

0x3edd,	// (0x00018358) grid_popup_fast_wide_pane_ParamLimits

0x3edd,	// (0x00018358) grid_popup_fast_wide_pane

0x3ef1,	// (0x0001836c) scroll_pane_cp19_ParamLimits

0x3ef1,	// (0x0001836c) scroll_pane_cp19

0xc185,	// (0x00020600) bg_popup_window_pane_cp20

0x3f05,	// (0x00018380) listscroll_popup_fast_wide_pane

0xc935,	// (0x00020db0) grid_indicator_nsta_pane

0x3f0d,	// (0x00018388) clock_nsta_pane_g1

0x3f16,	// (0x00018391) clock_nsta_pane_t1

0xba9a,	// (0x0001ff15) cell_indicator_nsta_pane_ParamLimits

0xba9a,	// (0x0001ff15) cell_indicator_nsta_pane

0x3f63,	// (0x000183de) cell_indicator_nsta_pane_g1

0xbab1,	// (0x0001ff2c) cell_indicator_nsta_pane_g2

0x0001,

0xfa98,	// (0x00023f13) cell_indicator_nsta_pane_g

0x3f7e,	// (0x000183f9) clock_nsta_pane_cp

0x3f87,	// (0x00018402) indicator_nsta_pane_cp

0x3f8f,	// (0x0001840a) nsta_clock_indic_pane_g1

0xc237,	// (0x000206b2) grid_indicator_pane

0xa7f8,	// (0x0001ec73) scroll_pane_cp29

0xe684,	// (0x00022aff) indicator_nsta_pane_cp2_ParamLimits

0xe684,	// (0x00022aff) indicator_nsta_pane_cp2

0xc1e1,	// (0x0002065c) main_apps_wheel_pane

0xb0fd,	// (0x0001f578) form_midp_field_text_pane_ParamLimits

0x1f8b,	// (0x00016406) scroll_bar_cp050_ParamLimits

0x3fdf,	// (0x0001845a) cell_indicator_pane_ParamLimits

0x3fdf,	// (0x0001845a) cell_indicator_pane

0x3ff8,	// (0x00018473) cell_indicator_pane_g1

0xbad0,	// (0x0001ff4b) grid_wheel_folder_pane_ParamLimits

0xbad0,	// (0x0001ff4b) grid_wheel_folder_pane

0xbade,	// (0x0001ff59) list_wheel_apps_pane_ParamLimits

0xbade,	// (0x0001ff59) list_wheel_apps_pane

0xbaec,	// (0x0001ff67) main_apps_wheel_pane_g1_ParamLimits

0xbaec,	// (0x0001ff67) main_apps_wheel_pane_g1

0xbaf8,	// (0x0001ff73) main_apps_wheel_pane_g2_ParamLimits

0xbaf8,	// (0x0001ff73) main_apps_wheel_pane_g2

0x0001,

0xfab4,	// (0x00023f2f) main_apps_wheel_pane_g_ParamLimits

0xfab4,	// (0x00023f2f) main_apps_wheel_pane_g

0xbb06,	// (0x0001ff81) main_apps_wheel_pane_t1_ParamLimits

0xbb06,	// (0x0001ff81) main_apps_wheel_pane_t1

0xbb1a,	// (0x0001ff95) list_wheel_apps_pane_g1

0xbb22,	// (0x0001ff9d) list_wheel_apps_pane_g2

0xbb2a,	// (0x0001ffa5) list_wheel_apps_pane_g3

0xbb32,	// (0x0001ffad) list_wheel_apps_pane_g4

0xbb3c,	// (0x0001ffb7) list_wheel_apps_pane_g5

0x0004,

0xfab9,	// (0x00023f34) list_wheel_apps_pane_g

0x105e,	// (0x000154d9) navi_icon_text_pane

0xabe8,	// (0x0001f063) aid_fill_nsta

0x40bf,	// (0x0001853a) navi_icon_text_pane_g1

0x40cb,	// (0x00018546) navi_icon_text_pane_t1

0x0f01,	// (0x0001537c) list_set_graphic_pane_t1_ParamLimits

0x0f01,	// (0x0001537c) list_set_graphic_pane_t1

0x26ce,	// (0x00016b49) popup_midp_note_alarm_window_t6_ParamLimits

0x26ce,	// (0x00016b49) popup_midp_note_alarm_window_t6

0x26e0,	// (0x00016b5b) popup_midp_note_alarm_window_t7_ParamLimits

0x26e0,	// (0x00016b5b) popup_midp_note_alarm_window_t7

0x26f2,	// (0x00016b6d) popup_midp_note_alarm_window_t8_ParamLimits

0x26f2,	// (0x00016b6d) popup_midp_note_alarm_window_t8

0x2704,	// (0x00016b7f) popup_midp_note_alarm_window_t9_ParamLimits

0x2704,	// (0x00016b7f) popup_midp_note_alarm_window_t9

0x2716,	// (0x00016b91) popup_midp_note_alarm_window_t10_ParamLimits

0x2716,	// (0x00016b91) popup_midp_note_alarm_window_t10

0x2728,	// (0x00016ba3) popup_midp_note_alarm_window_t11_ParamLimits

0x2728,	// (0x00016ba3) popup_midp_note_alarm_window_t11

0xb449,	// (0x0001f8c4) scroll_pane_cp17_ParamLimits

0xb449,	// (0x0001f8c4) scroll_pane_cp17

0xe9d3,	// (0x00022e4e) volume_small_pane_cp_g1

0xebff,	// (0x0002307a) volume_small_pane_cp_g2

0xec08,	// (0x00023083) volume_small_pane_cp_g3

0xec11,	// (0x0002308c) volume_small_pane_cp_g4

0xec1a,	// (0x00023095) volume_small_pane_cp_g5

0xebc9,	// (0x00023044) volume_small_pane_cp_g6

0xec23,	// (0x0002309e) volume_small_pane_cp_g7

0xec2c,	// (0x000230a7) volume_small_pane_cp_g8

0xec35,	// (0x000230b0) volume_small_pane_cp_g9

0xec3e,	// (0x000230b9) volume_small_pane_cp_g10

0x12bf,	// (0x0001573a) midp_ticker_pane_g1_ParamLimits

0x12cb,	// (0x00015746) midp_ticker_pane_g2_ParamLimits

0xf744,	// (0x00023bbf) midp_ticker_pane_g_ParamLimits

0x12d7,	// (0x00015752) midp_ticker_pane_t1_ParamLimits

0xac0c,	// (0x0001f087) aid_fill_nsta_2

0x1f77,	// (0x000163f2) list_form2_midp_pane

0x30c7,	// (0x00017542) midp_editing_number_pane_ParamLimits

0x30d6,	// (0x00017551) midp_ticker_pane_ParamLimits

0x40dd,	// (0x00018558) form2_midp_field_pane

0x4101,	// (0x0001857c) scroll_pane_cp51

0x4121,	// (0x0001859c) form2_midp_button_pane_ParamLimits

0x4121,	// (0x0001859c) form2_midp_button_pane

0x4133,	// (0x000185ae) form2_midp_content_pane_ParamLimits

0x4133,	// (0x000185ae) form2_midp_content_pane

0x414d,	// (0x000185c8) form2_midp_field_choice_group_pane

0x4155,	// (0x000185d0) form2_midp_field_pane_g1

0x415d,	// (0x000185d8) form2_midp_field_pane_g2

0x4165,	// (0x000185e0) form2_midp_field_pane_g3

0x416d,	// (0x000185e8) form2_midp_field_pane_g4

0x0003,

0xfade,	// (0x00023f59) form2_midp_field_pane_g

0x4175,	// (0x000185f0) form2_midp_gauge_slider_pane

0x417d,	// (0x000185f8) form2_midp_gauge_wait_pane

0x4185,	// (0x00018600) form2_midp_image_pane_ParamLimits

0x4185,	// (0x00018600) form2_midp_image_pane

0xbb6f,	// (0x0001ffea) form2_midp_label_pane_ParamLimits

0xbb6f,	// (0x0001ffea) form2_midp_label_pane

0xbb88,	// (0x00020003) form2_midp_label_pane_cp_ParamLimits

0xbb88,	// (0x00020003) form2_midp_label_pane_cp

0x41da,	// (0x00018655) form2_midp_string_pane_ParamLimits

0x41da,	// (0x00018655) form2_midp_string_pane

0xbba7,	// (0x00020022) form2_midp_text_pane_ParamLimits

0xbba7,	// (0x00020022) form2_midp_text_pane

0x4207,	// (0x00018682) form2_midp_time_pane

0x4217,	// (0x00018692) input_focus_pane_cp51_ParamLimits

0x4217,	// (0x00018692) input_focus_pane_cp51

0xbbc0,	// (0x0002003b) form2_midp_label_pane_t1_ParamLimits

0xbbc0,	// (0x0002003b) form2_midp_label_pane_t1

0xbc00,	// (0x0002007b) form2_mdip_text_pane_t1_ParamLimits

0xbc00,	// (0x0002007b) form2_mdip_text_pane_t1

0x428f,	// (0x0001870a) form2_midp_time_pane_t1

0x42aa,	// (0x00018725) form2_midp_gauge_slider_pane_t1

0xbc1c,	// (0x00020097) form2_midp_gauge_slider_pane_t2

0xbc2e,	// (0x000200a9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae7,	// (0x00023f62) form2_midp_gauge_slider_pane_t

0x42e0,	// (0x0001875b) form2_midp_slider_pane

0x42ec,	// (0x00018767) form2_midp_gauge_wait_pane_t1

0x42fa,	// (0x00018775) form2_midp_wait_pane_ParamLimits

0x42fa,	// (0x00018775) form2_midp_wait_pane

0xbc40,	// (0x000200bb) list_single_2graphic_pane_cp4_ParamLimits

0xbc40,	// (0x000200bb) list_single_2graphic_pane_cp4

0xb03d,	// (0x0001f4b8) list_single_midp_graphic_pane_cp_ParamLimits

0xb03d,	// (0x0001f4b8) list_single_midp_graphic_pane_cp

0xc185,	// (0x00020600) list_highlight_pane_cp20

0x434d,	// (0x000187c8) list_single_2graphic_pane_g1_cp4

0x35ed,	// (0x00017a68) list_single_2graphic_pane_g2_cp4

0x4355,	// (0x000187d0) list_single_2graphic_pane_t1_cp4

0xc1e1,	// (0x0002065c) list_highlight_pane_cp21

0x4364,	// (0x000187df) list_single_midp_graphic_pane_g4_cp

0x4373,	// (0x000187ee) list_single_midp_graphic_pane_t1_cp

0xbc55,	// (0x000200d0) form2_mdip_string_pane_t1_ParamLimits

0xbc55,	// (0x000200d0) form2_mdip_string_pane_t1

0xc185,	// (0x00020600) bg_wml_button_pane_cp2

0xc17b,	// (0x000205f6) form2_midp_image_pane_g1

0xc575,	// (0x000209f0) list_double_large_graphic_pane_g5_ParamLimits

0xc575,	// (0x000209f0) list_double_large_graphic_pane_g5

0xaa3a,	// (0x0001eeb5) midp_form_pane_ParamLimits

0xc1e1,	// (0x0002065c) main_apps_wheel_pane_ParamLimits

0x8eab,	// (0x0001d326) popup_preview_window_ParamLimits

0x8eab,	// (0x0001d326) popup_preview_window

0x9178,	// (0x0001d5f3) popup_touch_info_window_ParamLimits

0x9178,	// (0x0001d5f3) popup_touch_info_window

0x9196,	// (0x0001d611) popup_touch_menu_window_ParamLimits

0x9196,	// (0x0001d611) popup_touch_menu_window

0xc171,	// (0x000205ec) bg_popup_sub_pane_cp6

0x448f,	// (0x0001890a) list_touch_menu_pane

0xbccb,	// (0x00020146) list_single_touch_menu_pane_ParamLimits

0xbccb,	// (0x00020146) list_single_touch_menu_pane

0xbcdf,	// (0x0002015a) list_single_touch_menu_pane_t1

0xc1e1,	// (0x0002065c) bg_popup_sub_pane_cp7_ParamLimits

0xc1e1,	// (0x0002065c) bg_popup_sub_pane_cp7

0x44bb,	// (0x00018936) heading_sub_pane

0x44c3,	// (0x0001893e) list_touch_info_pane_ParamLimits

0x44c3,	// (0x0001893e) list_touch_info_pane

0x44d2,	// (0x0001894d) list_single_touch_info_pane_ParamLimits

0x44d2,	// (0x0001894d) list_single_touch_info_pane

0x44e4,	// (0x0001895f) list_single_touch_info_pane_t1

0x44f2,	// (0x0001896d) list_single_touch_info_pane_t2

0x0001,

0xfaf5,	// (0x00023f70) list_single_touch_info_pane_t

0x11de,	// (0x00015659) bg_popup_heading_pane_cp

0x4500,	// (0x0001897b) heading_sub_pane_t1

0x1b77,	// (0x00015ff2) bg_popup_preview_window_pane_cp_ParamLimits

0x1b77,	// (0x00015ff2) bg_popup_preview_window_pane_cp

0x44bb,	// (0x00018936) heading_preview_pane

0x44c3,	// (0x0001893e) list_preview_pane_ParamLimits

0x44c3,	// (0x0001893e) list_preview_pane

0x450e,	// (0x00018989) popup_preview_window_g1

0x44d2,	// (0x0001894d) list_single_preview_pane_ParamLimits

0x44d2,	// (0x0001894d) list_single_preview_pane

0x4516,	// (0x00018991) list_single_preview_pane_g1

0x451e,	// (0x00018999) list_single_preview_pane_t1

0x44e4,	// (0x0001895f) list_single_preview_pane_t2

0x0001,

0xfafa,	// (0x00023f75) list_single_preview_pane_t

0x452c,	// (0x000189a7) bg_popup_heading_pane_cp2_ParamLimits

0x452c,	// (0x000189a7) bg_popup_heading_pane_cp2

0x4542,	// (0x000189bd) heading_preview_pane_g1

0x454a,	// (0x000189c5) heading_preview_pane_t1_ParamLimits

0x454a,	// (0x000189c5) heading_preview_pane_t1

0xc24e,	// (0x000206c9) soft_indicator_pane_t1_ParamLimits

0xc529,	// (0x000209a4) scroll_pane_ParamLimits

0xe2fe,	// (0x00022779) scroll_sc2_left_pane

0xe307,	// (0x00022782) scroll_sc2_right_pane

0xe326,	// (0x000227a1) scroll_bg_pane_g1_ParamLimits

0xe33b,	// (0x000227b6) scroll_bg_pane_g2_ParamLimits

0xe353,	// (0x000227ce) scroll_bg_pane_g3_ParamLimits

0xf6cf,	// (0x00023b4a) scroll_bg_pane_g_ParamLimits

0xe326,	// (0x000227a1) scroll_handle_pane_g1_ParamLimits

0xe368,	// (0x000227e3) scroll_handle_pane_g2_ParamLimits

0xe353,	// (0x000227ce) scroll_handle_pane_g3_ParamLimits

0xf6d6,	// (0x00023b51) scroll_handle_pane_g_ParamLimits

0x8a52,	// (0x0001cecd) popup_choice_list_window_ParamLimits

0x8a52,	// (0x0001cecd) popup_choice_list_window

0x197f,	// (0x00015dfa) choice_list_pane

0x1a23,	// (0x00015e9e) cell_toolbar_pane_t1

0x1a4b,	// (0x00015ec6) toolbar_button_pane_ParamLimits

0x2bf4,	// (0x0001706f) ai_gene_pane_1_t2_ParamLimits

0x2bf4,	// (0x0001706f) ai_gene_pane_1_t2

0x0001,

0xf8f2,	// (0x00023d6d) ai_gene_pane_1_t_ParamLimits

0xf8f2,	// (0x00023d6d) ai_gene_pane_1_t

0x4567,	// (0x000189e2) scroll_sc2_left_pane_g1

0x4567,	// (0x000189e2) scroll_sc2_right_pane_g1

0x1506,	// (0x00015981) bg_popup_sub_pane_cp10

0x4571,	// (0x000189ec) list_choice_list_pane

0xbced,	// (0x00020168) list_single_choice_list_pane_ParamLimits

0xbced,	// (0x00020168) list_single_choice_list_pane

0xc943,	// (0x00020dbe) list_single_choice_list_pane_g1

0xa63f,	// (0x0001eaba) list_single_choice_list_pane_t1_ParamLimits

0xa63f,	// (0x0001eaba) list_single_choice_list_pane_t1

0x45a5,	// (0x00018a20) choice_list_pane_g1

0xbd01,	// (0x0002017c) choice_list_pane_t1

0xc171,	// (0x000205ec) input_focus_pane_cp11

0xc8f4,	// (0x00020d6f) title_pane_stacon_g2_ParamLimits

0xc8f4,	// (0x00020d6f) title_pane_stacon_g2

0x0002,

0xf6b5,	// (0x00023b30) title_pane_stacon_g_ParamLimits

0xf6b5,	// (0x00023b30) title_pane_stacon_g

0x11de,	// (0x00015659) cursor_press_pane

0x8af9,	// (0x0001cf74) popup_fep_hwr_window_ParamLimits

0x8af9,	// (0x0001cf74) popup_fep_hwr_window

0xe88d,	// (0x00022d08) popup_fep_vkb_window_ParamLimits

0xe88d,	// (0x00022d08) popup_fep_vkb_window

0xbd0f,	// (0x0002018a) cursor_press_pane_g1

0x0002,

0xfb23,	// (0x00023f9e) fep_vkb_side_pane_g_ParamLimits

0xec72,	// (0x000230ed) fep_hwr_candidate_pane_ParamLimits

0xec72,	// (0x000230ed) fep_hwr_candidate_pane

0xec9c,	// (0x00023117) fep_hwr_side_pane_ParamLimits

0xec9c,	// (0x00023117) fep_hwr_side_pane

0xecbc,	// (0x00023137) fep_hwr_top_pane_ParamLimits

0xecbc,	// (0x00023137) fep_hwr_top_pane

0xecd4,	// (0x0002314f) fep_hwr_write_pane_ParamLimits

0xecd4,	// (0x0002314f) fep_hwr_write_pane

0xfb23,	// (0x00023f9e) fep_vkb_side_pane_g

0x45c3,	// (0x00018a3e) fep_hwr_top_pane_g1

0x45d5,	// (0x00018a50) fep_hwr_top_pane_g2

0xed0e,	// (0x00023189) fep_hwr_top_pane_g3

0x0002,

0xfaff,	// (0x00023f7a) fep_hwr_top_pane_g

0xed23,	// (0x0002319e) fep_hwr_top_text_pane

0xe42b,	// (0x000228a6) fep_hwr_top_text_pane_g1

0x460b,	// (0x00018a86) fep_hwr_top_text_pane_t1

0xeda2,	// (0x0002321d) fep_hwr_candidate_pane_g1

0x4850,	// (0x00018ccb) fep_vkb_keypad_pane_g3_ParamLimits

0x4850,	// (0x00018ccb) fep_vkb_keypad_pane_g3

0x4878,	// (0x00018cf3) fep_vkb_keypad_pane_g4_ParamLimits

0x4878,	// (0x00018cf3) fep_vkb_keypad_pane_g4

0x48e7,	// (0x00018d62) fep_vkb_bottom_pane_g2_ParamLimits

0x48e7,	// (0x00018d62) fep_vkb_bottom_pane_g2

0x0001,

0xfb2a,	// (0x00023fa5) fep_vkb_bottom_pane_g_ParamLimits

0xfb2a,	// (0x00023fa5) fep_vkb_bottom_pane_g

0x4567,	// (0x000189e2) cell_vkb_side_pane_g2

0x0001,

0xfb34,	// (0x00023faf) cell_vkb_side_pane_g

0x4972,	// (0x00018ded) cell_vkb_side_pane_t1

0x4980,	// (0x00018dfb) cell_vkb_side_pane_t1_copy1

0x4567,	// (0x000189e2) bg_fep_vkb_candidate_pane_g2

0x4aac,	// (0x00018f27) cell_vkb_candidate_pane_ParamLimits

0x4619,	// (0x00018a94) aid_size_cell_vkb_ParamLimits

0x4619,	// (0x00018a94) aid_size_cell_vkb

0x4aac,	// (0x00018f27) cell_vkb_candidate_pane

0xedc9,	// (0x00023244) bg_popup_fep_shadow_pane_g1

0xbd29,	// (0x000201a4) fep_vkb_bottom_pane_ParamLimits

0xbd29,	// (0x000201a4) fep_vkb_bottom_pane

0x46dd,	// (0x00018b58) fep_vkb_candidate_pane_ParamLimits

0x46dd,	// (0x00018b58) fep_vkb_candidate_pane

0xbd4e,	// (0x000201c9) fep_vkb_keypad_pane_ParamLimits

0xbd4e,	// (0x000201c9) fep_vkb_keypad_pane

0xbd83,	// (0x000201fe) fep_vkb_side_pane_ParamLimits

0xbd83,	// (0x000201fe) fep_vkb_side_pane

0xbdbf,	// (0x0002023a) fep_vkb_top_pane_ParamLimits

0xbdbf,	// (0x0002023a) fep_vkb_top_pane

0x47a9,	// (0x00018c24) fep_vkb_top_pane_g1_ParamLimits

0x47a9,	// (0x00018c24) fep_vkb_top_pane_g1

0x47b8,	// (0x00018c33) fep_vkb_top_pane_g2_ParamLimits

0x47b8,	// (0x00018c33) fep_vkb_top_pane_g2

0x47c7,	// (0x00018c42) fep_vkb_top_pane_g3_ParamLimits

0x47c7,	// (0x00018c42) fep_vkb_top_pane_g3

0x0003,

0xfb1a,	// (0x00023f95) fep_vkb_top_pane_g_ParamLimits

0xfb1a,	// (0x00023f95) fep_vkb_top_pane_g

0x47e5,	// (0x00018c60) fep_vkb_top_text_pane_ParamLimits

0x47e5,	// (0x00018c60) fep_vkb_top_text_pane

0xbdf4,	// (0x0002026f) fep_vkb_side_pane_g1_ParamLimits

0xbdf4,	// (0x0002026f) fep_vkb_side_pane_g1

0x483f,	// (0x00018cba) grid_vkb_side_pane_ParamLimits

0x483f,	// (0x00018cba) grid_vkb_side_pane

0xedd1,	// (0x0002324c) bg_popup_fep_shadow_pane_g2

0xedda,	// (0x00023255) bg_popup_fep_shadow_pane_g3

0xede2,	// (0x0002325d) bg_popup_fep_shadow_pane_g4

0xedeb,	// (0x00023266) bg_popup_fep_shadow_pane_g5

0xedf5,	// (0x00023270) bg_popup_fep_shadow_pane_g6

0xedfd,	// (0x00023278) bg_popup_fep_shadow_pane_g7

0xc6e9,	// (0x00020b64) bg_popup_fep_shadow_pane_g8

0x4896,	// (0x00018d11) grid_vkb_keypad_number_pane_ParamLimits

0x4896,	// (0x00018d11) grid_vkb_keypad_number_pane

0x48a6,	// (0x00018d21) grid_vkb_keypad_pane_ParamLimits

0x48a6,	// (0x00018d21) grid_vkb_keypad_pane

0x48cc,	// (0x00018d47) fep_vkb_bottom_pane_g1_ParamLimits

0x48cc,	// (0x00018d47) fep_vkb_bottom_pane_g1

0x48f5,	// (0x00018d70) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x48f5,	// (0x00018d70) grid_vkb_keypad_bottom_left_pane

0x490a,	// (0x00018d85) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x490a,	// (0x00018d85) grid_vkb_keypad_bottom_right_pane

0x491f,	// (0x00018d9a) fep_vkb_top_text_pane_g1

0xbe3b,	// (0x000202b6) fep_vkb_top_text_pane_t1

0xbe4d,	// (0x000202c8) cell_vkb_side_pane_ParamLimits

0xbe4d,	// (0x000202c8) cell_vkb_side_pane

0x4567,	// (0x000189e2) cell_vkb_side_pane_g1

0x498e,	// (0x00018e09) cell_vkb_keypad_pane_ParamLimits

0x498e,	// (0x00018e09) cell_vkb_keypad_pane

0x4a03,	// (0x00018e7e) cell_vkb_keypad_pane_g1

0x0008,

0xfb47,	// (0x00023fc2) bg_popup_fep_shadow_pane_g

0xee0f,	// (0x0002328a) cell_hwr_side_pane_g1

0xee0f,	// (0x0002328a) cell_hwr_side_pane_g2

0x4a0d,	// (0x00018e88) cell_vkb_keypad_pane_t1

0xbe63,	// (0x000202de) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbe63,	// (0x000202de) cell_vkb_keypad_bottom_left_pane

0xbe78,	// (0x000202f3) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbe78,	// (0x000202f3) cell_vkb_keypad_bottom_right_pane

0x4567,	// (0x000189e2) cell_vkb_keypad_bottom_left_pane_g1

0x4567,	// (0x000189e2) cell_vkb_keypad_bottom_right_pane_g1

0x4a71,	// (0x00018eec) cell_vkb_keypad_number_pane_ParamLimits

0x4a71,	// (0x00018eec) cell_vkb_keypad_number_pane

0x4a90,	// (0x00018f0b) cell_vkb_keypad_number_pane_g1

0x4a9a,	// (0x00018f15) cell_vkb_keypad_number_pane_g2

0x4aa3,	// (0x00018f1e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb39,	// (0x00023fb4) cell_vkb_keypad_number_pane_g

0x4a0d,	// (0x00018e88) cell_vkb_keypad_number_pane_t1

0x4ac7,	// (0x00018f42) fep_vkb_candidate_pane_g1

0x0001,

0xfb5a,	// (0x00023fd5) cell_hwr_side_pane_g

0x4ae0,	// (0x00018f5b) cell_hwr_side_pane_t1

0xee19,	// (0x00023294) cell_hwr_side_pane_t1_copy1

0xee27,	// (0x000232a2) cell_hwr_candidate_pane_g1

0xee56,	// (0x000232d1) cell_hwr_candidate_pane_t1

0x4567,	// (0x000189e2) cell_vkb_candidate_pane_g2

0x4b24,	// (0x00018f9f) cell_vkb_candidate_pane_t1

0xe8bb,	// (0x00022d36) bg_popup_fep_shadow_pane_ParamLimits

0xe8bb,	// (0x00022d36) bg_popup_fep_shadow_pane

0xecee,	// (0x00023169) bg_fep_hwr_top_pane_g4

0x45e7,	// (0x00018a62) bg_hwr_side_pane_g1_ParamLimits

0x45e7,	// (0x00018a62) bg_hwr_side_pane_g1

0x93ad,	// (0x0001d828) cell_hwr_side_pane_ParamLimits

0x93ad,	// (0x0001d828) cell_hwr_side_pane

0xed38,	// (0x000231b3) fep_hwr_write_pane_g1_ParamLimits

0xed38,	// (0x000231b3) fep_hwr_write_pane_g1

0xed45,	// (0x000231c0) fep_hwr_write_pane_g2_ParamLimits

0xed45,	// (0x000231c0) fep_hwr_write_pane_g2

0xed52,	// (0x000231cd) fep_hwr_write_pane_g3_ParamLimits

0xed52,	// (0x000231cd) fep_hwr_write_pane_g3

0x93cd,	// (0x0001d848) fep_hwr_write_pane_g4_ParamLimits

0x93cd,	// (0x0001d848) fep_hwr_write_pane_g4

0x0005,

0xfb06,	// (0x00023f81) fep_hwr_write_pane_g_ParamLimits

0xfb06,	// (0x00023f81) fep_hwr_write_pane_g

0xecee,	// (0x00023169) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xecee,	// (0x00023169) bg_fep_hwr_candidate_pane_g2

0xed60,	// (0x000231db) cell_hwr_candidate_pane_ParamLimits

0xed60,	// (0x000231db) cell_hwr_candidate_pane

0xeda2,	// (0x0002321d) fep_hwr_candidate_pane_g1_ParamLimits

0x4647,	// (0x00018ac2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4647,	// (0x00018ac2) bg_popup_fep_shadow_pane_cp2

0x47d7,	// (0x00018c52) fep_vkb_top_pane_g4_ParamLimits

0x47d7,	// (0x00018c52) fep_vkb_top_pane_g4

0x481d,	// (0x00018c98) fep_vkb_side_pane_g2_ParamLimits

0x481d,	// (0x00018c98) fep_vkb_side_pane_g2

0xa36a,	// (0x0001e7e5) list_setting_pane_t4_ParamLimits

0xa36a,	// (0x0001e7e5) list_setting_pane_t4

0xa3e4,	// (0x0001e85f) list_setting_number_pane_t5_ParamLimits

0xa3e4,	// (0x0001e85f) list_setting_number_pane_t5

0xe481,	// (0x000228fc) list_double_heading_pane_cp2_ParamLimits

0xe481,	// (0x000228fc) list_double_heading_pane_cp2

0x4b32,	// (0x00018fad) list_double_heading_pane_g1_cp2_ParamLimits

0x4b32,	// (0x00018fad) list_double_heading_pane_g1_cp2

0x4b3e,	// (0x00018fb9) list_double_heading_pane_g2_cp2_ParamLimits

0x4b3e,	// (0x00018fb9) list_double_heading_pane_g2_cp2

0x4b52,	// (0x00018fcd) list_double_heading_pane_t1_cp2_ParamLimits

0x4b52,	// (0x00018fcd) list_double_heading_pane_t1_cp2

0x4b68,	// (0x00018fe3) list_double_heading_pane_t2_cp2_ParamLimits

0x4b68,	// (0x00018fe3) list_double_heading_pane_t2_cp2

0xc169,	// (0x000205e4) aid_value_unit2

0xe0f5,	// (0x00022570) popup_preview_fixed_window

0xc325,	// (0x000207a0) bg_popup_preview_window_pane_cp02

0x4b7a,	// (0x00018ff5) list_preview_fixed_pane

0x4bc0,	// (0x0001903b) list_empty_pane_fp_ParamLimits

0x4bc0,	// (0x0001903b) list_empty_pane_fp

0x4bc0,	// (0x0001903b) list_single_cale_day_pane_fp_ParamLimits

0x4bc0,	// (0x0001903b) list_single_cale_day_pane_fp

0x4bc0,	// (0x0001903b) list_single_graphic_heading_pane_fp_ParamLimits

0x4bc0,	// (0x0001903b) list_single_graphic_heading_pane_fp

0x4bc0,	// (0x0001903b) list_single_graphic_pane_fp_ParamLimits

0x4bc0,	// (0x0001903b) list_single_graphic_pane_fp

0x4bc0,	// (0x0001903b) list_single_heading_pane_fp_ParamLimits

0x4bc0,	// (0x0001903b) list_single_heading_pane_fp

0x4bc0,	// (0x0001903b) list_single_pane_fp_ParamLimits

0x4bc0,	// (0x0001903b) list_single_pane_fp

0x4bd6,	// (0x00019051) list_single_pane_fp_g1_ParamLimits

0x4bd6,	// (0x00019051) list_single_pane_fp_g1

0x4be2,	// (0x0001905d) list_single_pane_fp_g2_ParamLimits

0x4be2,	// (0x0001905d) list_single_pane_fp_g2

0x4bee,	// (0x00019069) list_single_pane_fp_g3_ParamLimits

0x4bee,	// (0x00019069) list_single_pane_fp_g3

0x4c02,	// (0x0001907d) list_single_pane_fp_g4_ParamLimits

0x4c02,	// (0x0001907d) list_single_pane_fp_g4

0x0003,

0xfb6d,	// (0x00023fe8) list_single_pane_fp_g_ParamLimits

0xfb6d,	// (0x00023fe8) list_single_pane_fp_g

0x4c0e,	// (0x00019089) list_single_pane_fp_t1_ParamLimits

0x4c0e,	// (0x00019089) list_single_pane_fp_t1

0x4c25,	// (0x000190a0) list_single_graphic_pane_fp_g1_ParamLimits

0x4c25,	// (0x000190a0) list_single_graphic_pane_fp_g1

0x4bd6,	// (0x00019051) list_single_graphic_pane_fp_g2_ParamLimits

0x4bd6,	// (0x00019051) list_single_graphic_pane_fp_g2

0x4be2,	// (0x0001905d) list_single_graphic_pane_fp_g3_ParamLimits

0x4be2,	// (0x0001905d) list_single_graphic_pane_fp_g3

0x4bee,	// (0x00019069) list_single_graphic_pane_fp_g4_ParamLimits

0x4bee,	// (0x00019069) list_single_graphic_pane_fp_g4

0x4c02,	// (0x0001907d) list_single_graphic_pane_fp_g5_ParamLimits

0x4c02,	// (0x0001907d) list_single_graphic_pane_fp_g5

0x0004,

0xfb76,	// (0x00023ff1) list_single_graphic_pane_fp_g_ParamLimits

0xfb76,	// (0x00023ff1) list_single_graphic_pane_fp_g

0x4c31,	// (0x000190ac) list_single_graphic_pane_fp_t1_ParamLimits

0x4c31,	// (0x000190ac) list_single_graphic_pane_fp_t1

0x4c25,	// (0x000190a0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4c25,	// (0x000190a0) list_single_graphic_heading_pane_fp_g1

0x4bd6,	// (0x00019051) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4bd6,	// (0x00019051) list_single_graphic_heading_pane_fp_g2

0x4be2,	// (0x0001905d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4be2,	// (0x0001905d) list_single_graphic_heading_pane_fp_g3

0x4bee,	// (0x00019069) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4bee,	// (0x00019069) list_single_graphic_heading_pane_fp_g4

0x4c02,	// (0x0001907d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4c02,	// (0x0001907d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb76,	// (0x00023ff1) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb76,	// (0x00023ff1) list_single_graphic_heading_pane_fp_g

0x4c47,	// (0x000190c2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4c47,	// (0x000190c2) list_single_graphic_heading_pane_fp_t1

0x4c5d,	// (0x000190d8) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4c5d,	// (0x000190d8) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb81,	// (0x00023ffc) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb81,	// (0x00023ffc) list_single_graphic_heading_pane_fp_t

0x4c6f,	// (0x000190ea) list_single_cale_day_pane_fp_g1_ParamLimits

0x4c6f,	// (0x000190ea) list_single_cale_day_pane_fp_g1

0x4ca7,	// (0x00019122) list_single_cale_day_pane_fp_g2_ParamLimits

0x4ca7,	// (0x00019122) list_single_cale_day_pane_fp_g2

0x4cb3,	// (0x0001912e) list_single_cale_day_pane_fp_g3_ParamLimits

0x4cb3,	// (0x0001912e) list_single_cale_day_pane_fp_g3

0x4cdb,	// (0x00019156) list_single_cale_day_pane_fp_g4_ParamLimits

0x4cdb,	// (0x00019156) list_single_cale_day_pane_fp_g4

0x4cff,	// (0x0001917a) list_single_cale_day_pane_fp_g5_ParamLimits

0x4cff,	// (0x0001917a) list_single_cale_day_pane_fp_g5

0x0004,

0xfb86,	// (0x00024001) list_single_cale_day_pane_fp_g_ParamLimits

0xfb86,	// (0x00024001) list_single_cale_day_pane_fp_g

0x4d23,	// (0x0001919e) list_single_cale_day_pane_fp_t1_ParamLimits

0x4d23,	// (0x0001919e) list_single_cale_day_pane_fp_t1

0x4d49,	// (0x000191c4) list_single_cale_day_pane_fp_t2_ParamLimits

0x4d49,	// (0x000191c4) list_single_cale_day_pane_fp_t2

0x4d62,	// (0x000191dd) list_single_cale_day_pane_fp_t3_ParamLimits

0x4d62,	// (0x000191dd) list_single_cale_day_pane_fp_t3

0x0002,

0xfb91,	// (0x0002400c) list_single_cale_day_pane_fp_t_ParamLimits

0xfb91,	// (0x0002400c) list_single_cale_day_pane_fp_t

0x4bd6,	// (0x00019051) list_empty_pane_fp_g1_ParamLimits

0x4bd6,	// (0x00019051) list_empty_pane_fp_g1

0x4d7b,	// (0x000191f6) list_empty_pane_fp_t1

0x4d89,	// (0x00019204) list_empty_pane_fp_t2

0x0001,

0xfb98,	// (0x00024013) list_empty_pane_fp_t

0x4bd6,	// (0x00019051) list_single_heading_pane_fp_g1_ParamLimits

0x4bd6,	// (0x00019051) list_single_heading_pane_fp_g1

0x4be2,	// (0x0001905d) list_single_heading_pane_fp_g2_ParamLimits

0x4be2,	// (0x0001905d) list_single_heading_pane_fp_g2

0x4bee,	// (0x00019069) list_single_heading_pane_fp_g3_ParamLimits

0x4bee,	// (0x00019069) list_single_heading_pane_fp_g3

0x0002,

0xfb9d,	// (0x00024018) list_single_heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x00024018) list_single_heading_pane_fp_g

0x4d97,	// (0x00019212) list_single_heading_pane_fp_t1_ParamLimits

0x4d97,	// (0x00019212) list_single_heading_pane_fp_t1

0x4da9,	// (0x00019224) list_single_heading_pane_fp_t2_ParamLimits

0x4da9,	// (0x00019224) list_single_heading_pane_fp_t2

0x0001,

0xfba4,	// (0x0002401f) list_single_heading_pane_fp_t_ParamLimits

0xfba4,	// (0x0002401f) list_single_heading_pane_fp_t

0xa68b,	// (0x0001eb06) aid_size_cell_fast

0xc308,	// (0x00020783) soft_indicator_pane_cp1_t1

0xa694,	// (0x0001eb0f) cell_app_pane_cp2_ParamLimits

0xa694,	// (0x0001eb0f) cell_app_pane_cp2

0xec5b,	// (0x000230d6) fep_hwr_candidate_drop_down_list_pane

0xedbc,	// (0x00023237) fep_hwr_candidate_pane_g3_ParamLimits

0xedbc,	// (0x00023237) fep_hwr_candidate_pane_g3

0xc94b,	// (0x00020dc6) fep_hwr_candidate_pane_g4_ParamLimits

0xc94b,	// (0x00020dc6) fep_hwr_candidate_pane_g4

0x0002,

0xfb13,	// (0x00023f8e) fep_hwr_candidate_pane_g_ParamLimits

0xfb13,	// (0x00023f8e) fep_hwr_candidate_pane_g

0x46cc,	// (0x00018b47) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x46cc,	// (0x00018b47) fep_vkb_candidate_drop_down_list_pane

0x4acf,	// (0x00018f4a) fep_vkb_candidate_pane_g3

0x4ad7,	// (0x00018f52) fep_vkb_candidate_pane_g4

0x0002,

0xfb40,	// (0x00023fbb) fep_vkb_candidate_pane_g

0xee27,	// (0x000232a2) cell_hwr_candidate_pane_g1_ParamLimits

0xee35,	// (0x000232b0) cell_hwr_candidate_pane_g3_ParamLimits

0xee35,	// (0x000232b0) cell_hwr_candidate_pane_g3

0x5bcb,	// (0x0001a046) cell_hwr_candidate_pane_g4_ParamLimits

0x5bcb,	// (0x0001a046) cell_hwr_candidate_pane_g4

0x0002,

0xfb5f,	// (0x00023fda) cell_hwr_candidate_pane_g_ParamLimits

0xfb5f,	// (0x00023fda) cell_hwr_candidate_pane_g

0x4aee,	// (0x00018f69) cell_vkb_candidate_pane_g3_ParamLimits

0x4aee,	// (0x00018f69) cell_vkb_candidate_pane_g3

0x4b09,	// (0x00018f84) cell_vkb_candidate_pane_g4_ParamLimits

0x4b09,	// (0x00018f84) cell_vkb_candidate_pane_g4

0xbe93,	// (0x0002030e) cell_app_pane_cp2_g1_ParamLimits

0xbe93,	// (0x0002030e) cell_app_pane_cp2_g1

0x4ddd,	// (0x00019258) cell_app_pane_cp2_g2_ParamLimits

0x4ddd,	// (0x00019258) cell_app_pane_cp2_g2

0x0001,

0xfba9,	// (0x00024024) cell_app_pane_cp2_g_ParamLimits

0xfba9,	// (0x00024024) cell_app_pane_cp2_g

0x4de9,	// (0x00019264) cell_app_pane_cp2_t1_ParamLimits

0x4de9,	// (0x00019264) cell_app_pane_cp2_t1

0xc60b,	// (0x00020a86) grid_highlight_pane_cp1_ParamLimits

0xc60b,	// (0x00020a86) grid_highlight_pane_cp1

0xee74,	// (0x000232ef) cell_hwr_candidate_pane_cp1_ParamLimits

0xee74,	// (0x000232ef) cell_hwr_candidate_pane_cp1

0xee27,	// (0x000232a2) fep_hwr_candidate_drop_down_list_pane_g1

0xee93,	// (0x0002330e) fep_hwr_candidate_drop_down_list_pane_g2

0xeea0,	// (0x0002331b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x00024029) fep_hwr_candidate_drop_down_list_pane_g

0xeead,	// (0x00023328) fep_hwr_candidate_drop_down_list_scroll_pane

0xeeb6,	// (0x00023331) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xeeb6,	// (0x00023331) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xeec3,	// (0x0002333e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xeec3,	// (0x0002333e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xeed0,	// (0x0002334b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xeed0,	// (0x0002334b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xeedd,	// (0x00023358) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xeedd,	// (0x00023358) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xeef8,	// (0x00023373) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xeef8,	// (0x00023373) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xef13,	// (0x0002338e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xef13,	// (0x0002338e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xef2e,	// (0x000233a9) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xef2e,	// (0x000233a9) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xef49,	// (0x000233c4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xef49,	// (0x000233c4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb5,	// (0x00024030) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb5,	// (0x00024030) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4dfb,	// (0x00019276) cell_vkb_candidate_pane_cp1_ParamLimits

0x4dfb,	// (0x00019276) cell_vkb_candidate_pane_cp1

0x47d7,	// (0x00018c52) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x47d7,	// (0x00018c52) fep_vkb_candidate_drop_down_list_pane_g1

0x4e1b,	// (0x00019296) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4e1b,	// (0x00019296) fep_vkb_candidate_drop_down_list_pane_g2

0x4e28,	// (0x000192a3) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4e28,	// (0x000192a3) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x00024041) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc6,	// (0x00024041) fep_vkb_candidate_drop_down_list_pane_g

0x4e35,	// (0x000192b0) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4e35,	// (0x000192b0) fep_vkb_candidate_drop_down_list_scroll_pane

0x4e42,	// (0x000192bd) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4e42,	// (0x000192bd) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4e4f,	// (0x000192ca) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4e4f,	// (0x000192ca) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4e5b,	// (0x000192d6) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4e5b,	// (0x000192d6) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4e67,	// (0x000192e2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e67,	// (0x000192e2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4e88,	// (0x00019303) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4e88,	// (0x00019303) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4ea9,	// (0x00019324) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4ea9,	// (0x00019324) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4eca,	// (0x00019345) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4eca,	// (0x00019345) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4eeb,	// (0x00019366) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4eeb,	// (0x00019366) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x00024048) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x00024048) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9ad1,	// (0x0001df4c) title_pane_g1_ParamLimits

0x9ae4,	// (0x0001df5f) title_pane_g2_ParamLimits

0xf54e,	// (0x000239c9) title_pane_g_ParamLimits

0xe41b,	// (0x00022896) aid_call2_pane

0xe423,	// (0x0002289e) aid_call_pane

0xe42b,	// (0x000228a6) popup_clock_analogue_window_g1

0xe42b,	// (0x000228a6) popup_clock_analogue_window_g2

0xe433,	// (0x000228ae) popup_clock_analogue_window_g3

0xe43c,	// (0x000228b7) popup_clock_analogue_window_g4

0xc17b,	// (0x000205f6) popup_clock_analogue_window_g5

0x0004,

0xf6e4,	// (0x00023b5f) popup_clock_analogue_window_g

0xe444,	// (0x000228bf) popup_clock_analogue_window_t1

0xe4a2,	// (0x0002291d) clock_digital_number_pane_ParamLimits

0xe4a2,	// (0x0002291d) clock_digital_number_pane

0xe4ae,	// (0x00022929) clock_digital_number_pane_cp02_ParamLimits

0xe4ae,	// (0x00022929) clock_digital_number_pane_cp02

0xe4ba,	// (0x00022935) clock_digital_number_pane_cp03_ParamLimits

0xe4ba,	// (0x00022935) clock_digital_number_pane_cp03

0xe4c6,	// (0x00022941) clock_digital_number_pane_cp04_ParamLimits

0xe4c6,	// (0x00022941) clock_digital_number_pane_cp04

0xe4d2,	// (0x0002294d) clock_digital_separator_pane_ParamLimits

0xe4d2,	// (0x0002294d) clock_digital_separator_pane

0xe4de,	// (0x00022959) popup_clock_digital_window_t1_ParamLimits

0xe4de,	// (0x00022959) popup_clock_digital_window_t1

0xc17b,	// (0x000205f6) clock_digital_number_pane_g1

0xc17b,	// (0x000205f6) clock_digital_number_pane_g2

0x0001,

0xf6ef,	// (0x00023b6a) clock_digital_number_pane_g

0xc17b,	// (0x000205f6) clock_digital_separator_pane_g1

0xc17b,	// (0x000205f6) clock_digital_separator_pane_g2

0x0001,

0xf6ef,	// (0x00023b6a) clock_digital_separator_pane_g

0xabe8,	// (0x0001f063) aid_fill_nsta_ParamLimits

0xad1e,	// (0x0001f199) indicator_nsta_pane_ParamLimits

0x180f,	// (0x00015c8a) popup_clock_analogue_window

0x180f,	// (0x00015c8a) popup_clock_digital_window

0xc935,	// (0x00020db0) grid_indicator_nsta_pane_ParamLimits

0x3f24,	// (0x0001839f) clock_nsta_pane_t2

0x0001,

0xfa93,	// (0x00023f0e) clock_nsta_pane_t

0xe2c0,	// (0x0002273b) aid_size_max_handle

0x8847,	// (0x0001ccc2) aid_size_min_handle

0x11de,	// (0x00015659) editor_scroll_pane

0x4f06,	// (0x00019381) ex_editor_pane

0xc798,	// (0x00020c13) scroll_pane_cp13

0xc555,	// (0x000209d0) scroll_pane_cp14

0xe479,	// (0x000228f4) scroll_pane_cp36

0xa81f,	// (0x0001ec9a) list_single_graphic_hl_pane_cp2_ParamLimits

0xa81f,	// (0x0001ec9a) list_single_graphic_hl_pane_cp2

0xb886,	// (0x0001fd01) list_single_graphic_hl_pane_ParamLimits

0xb886,	// (0x0001fd01) list_single_graphic_hl_pane

0x6efe,	// (0x0001b379) aid_size_min_hl_cp1

0x4f17,	// (0x00019392) list_highlight_pane_cp34_ParamLimits

0x4f17,	// (0x00019392) list_highlight_pane_cp34

0x4f28,	// (0x000193a3) list_single_graphic_hl_pane_g1_ParamLimits

0x4f28,	// (0x000193a3) list_single_graphic_hl_pane_g1

0xbeb1,	// (0x0002032c) list_single_graphic_hl_pane_g2_ParamLimits

0xbeb1,	// (0x0002032c) list_single_graphic_hl_pane_g2

0xbeb1,	// (0x0002032c) list_single_graphic_hl_pane_g3_ParamLimits

0xbeb1,	// (0x0002032c) list_single_graphic_hl_pane_g3

0x1117,	// (0x00015592) list_single_graphic_hl_pane_g4_ParamLimits

0x1117,	// (0x00015592) list_single_graphic_hl_pane_g4

0x4fa7,	// (0x00019422) list_single_graphic_hl_pane_g5_ParamLimits

0x4fa7,	// (0x00019422) list_single_graphic_hl_pane_g5

0x0004,

0xfbde,	// (0x00024059) list_single_graphic_hl_pane_g_ParamLimits

0xfbde,	// (0x00024059) list_single_graphic_hl_pane_g

0xbebd,	// (0x00020338) list_single_graphic_hl_pane_t1_ParamLimits

0xbebd,	// (0x00020338) list_single_graphic_hl_pane_t1

0x4f77,	// (0x000193f2) aid_size_min_hl_cp2

0x4f80,	// (0x000193fb) list_highlight_pane_cp34_cp2_ParamLimits

0x4f80,	// (0x000193fb) list_highlight_pane_cp34_cp2

0x4f28,	// (0x000193a3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f28,	// (0x000193a3) list_single_graphic_hl_pane_g1_cp2

0x4f8d,	// (0x00019408) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4f8d,	// (0x00019408) list_single_graphic_hl_pane_g2_cp2

0xbed3,	// (0x0002034e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbed3,	// (0x0002034e) list_single_graphic_hl_pane_g3_cp2

0x1117,	// (0x00015592) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1117,	// (0x00015592) list_single_graphic_hl_pane_g4_cp2

0x4fa7,	// (0x00019422) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4fa7,	// (0x00019422) list_single_graphic_hl_pane_g5_cp2

0x88f9,	// (0x0001cd74) control_pane_g4_ParamLimits

0x88f9,	// (0x0001cd74) control_pane_g4

0x1506,	// (0x00015981) bg_popup_sub_pane_cp10_ParamLimits

0x4571,	// (0x000189ec) list_choice_list_pane_ParamLimits

0x4580,	// (0x000189fb) scroll_pane_cp23

0xc325,	// (0x000207a0) bg_popup_preview_window_pane_cp02_ParamLimits

0x4b7a,	// (0x00018ff5) list_preview_fixed_pane_ParamLimits

0x4b90,	// (0x0001900b) list_preview_fixed_pane_cp_ParamLimits

0x4b90,	// (0x0001900b) list_preview_fixed_pane_cp

0x4b9c,	// (0x00019017) popup_preview_fixed_window_g1_ParamLimits

0x4b9c,	// (0x00019017) popup_preview_fixed_window_g1

0x4ba8,	// (0x00019023) popup_preview_fixed_window_g2_ParamLimits

0x4ba8,	// (0x00019023) popup_preview_fixed_window_g2

0x0002,

0xfb66,	// (0x00023fe1) popup_preview_fixed_window_g_ParamLimits

0xfb66,	// (0x00023fe1) popup_preview_fixed_window_g

0xe1fd,	// (0x00022678) aid_navi_side_left_pane_ParamLimits

0xe212,	// (0x0002268d) aid_navi_side_right_pane_ParamLimits

0xe22a,	// (0x000226a5) navi_icon_pane_stacon_ParamLimits

0xe23e,	// (0x000226b9) navi_navi_pane_stacon_ParamLimits

0xe22a,	// (0x000226a5) navi_text_pane_stacon_ParamLimits

0xe01a,	// (0x00022495) main_text_info_pane

0x4fd1,	// (0x0001944c) listscroll_text_info_pane

0x4fd9,	// (0x00019454) list_text_info_pane_ParamLimits

0x4fd9,	// (0x00019454) list_text_info_pane

0x4fe8,	// (0x00019463) scroll_pane_cp24_ParamLimits

0x4fe8,	// (0x00019463) scroll_pane_cp24

0xbee1,	// (0x0002035c) list_text_info_pane_t1_ParamLimits

0xbee1,	// (0x0002035c) list_text_info_pane_t1

0x8a6e,	// (0x0001cee9) popup_fast_swap2_window_ParamLimits

0x8a6e,	// (0x0001cee9) popup_fast_swap2_window

0x503a,	// (0x000194b5) aid_size_cell_fast2

0xc171,	// (0x000205ec) bg_popup_window_pane_cp17

0x1fab,	// (0x00016426) heading_pane_cp2

0xc459,	// (0x000208d4) listscroll_fast2_pane

0x5044,	// (0x000194bf) grid_fast2_pane

0x504e,	// (0x000194c9) listscroll_fast2_pane_g1

0x5056,	// (0x000194d1) listscroll_fast2_pane_g2

0x0001,

0xfbe9,	// (0x00024064) listscroll_fast2_pane_g

0xc798,	// (0x00020c13) scroll_pane_cp26

0x5060,	// (0x000194db) cell_fast2_pane_ParamLimits

0x5060,	// (0x000194db) cell_fast2_pane

0x5075,	// (0x000194f0) cell_fast2_pane_g1

0x507e,	// (0x000194f9) cell_fast2_pane_g2

0x5087,	// (0x00019502) cell_fast2_pane_g3

0x0002,

0xfbee,	// (0x00024069) cell_fast2_pane_g

0xc48c,	// (0x00020907) grid_highlight_pane_cp9

0xe875,	// (0x00022cf0) main_eswt_pane_ParamLimits

0xe875,	// (0x00022cf0) main_eswt_pane

0x4ffd,	// (0x00019478) list_single_text_info_pane

0x508f,	// (0x0001950a) eswt_ctrl_button_pane

0x508f,	// (0x0001950a) eswt_ctrl_canvas_pane

0xbefd,	// (0x00020378) eswt_ctrl_combo_pane

0x508f,	// (0x0001950a) eswt_ctrl_default_pane

0x508f,	// (0x0001950a) eswt_ctrl_label_pane

0x509f,	// (0x0001951a) eswt_ctrl_wait_pane

0xbf05,	// (0x00020380) eswt_shell_pane

0xc171,	// (0x000205ec) listscroll_eswt_app_pane

0x50c7,	// (0x00019542) popup_eswt_tasktip_window_ParamLimits

0x50c7,	// (0x00019542) popup_eswt_tasktip_window

0x1b77,	// (0x00015ff2) bg_popup_window_pane_cp18

0x50d8,	// (0x00019553) eswt_control_pane_g1_ParamLimits

0x50d8,	// (0x00019553) eswt_control_pane_g1

0x50e5,	// (0x00019560) eswt_control_pane_g2_ParamLimits

0x50e5,	// (0x00019560) eswt_control_pane_g2

0x50f2,	// (0x0001956d) eswt_control_pane_g3_ParamLimits

0x50f2,	// (0x0001956d) eswt_control_pane_g3

0x50ff,	// (0x0001957a) eswt_control_pane_g4_ParamLimits

0x50ff,	// (0x0001957a) eswt_control_pane_g4

0x0003,

0xfbf5,	// (0x00024070) eswt_control_pane_g_ParamLimits

0xfbf5,	// (0x00024070) eswt_control_pane_g

0xc60b,	// (0x00020a86) bg_button_pane_ParamLimits

0xc60b,	// (0x00020a86) bg_button_pane

0xc4a1,	// (0x0002091c) common_borders_pane_copy2_ParamLimits

0xc4a1,	// (0x0002091c) common_borders_pane_copy2

0x510c,	// (0x00019587) control_button_pane_g1_ParamLimits

0x510c,	// (0x00019587) control_button_pane_g1

0x5118,	// (0x00019593) control_button_pane_g2_ParamLimits

0x5118,	// (0x00019593) control_button_pane_g2

0x5124,	// (0x0001959f) control_button_pane_g3_ParamLimits

0x5124,	// (0x0001959f) control_button_pane_g3

0x0002,

0xfbfe,	// (0x00024079) control_button_pane_g_ParamLimits

0xfbfe,	// (0x00024079) control_button_pane_g

0x5138,	// (0x000195b3) control_button_pane_t1

0x5146,	// (0x000195c1) control_button_pane_t2

0x0001,

0xfc05,	// (0x00024080) control_button_pane_t

0x1a57,	// (0x00015ed2) bg_button_pane_g1

0x1a67,	// (0x00015ee2) bg_button_pane_g2

0x1a5f,	// (0x00015eda) bg_button_pane_g3

0x1a77,	// (0x00015ef2) bg_button_pane_g4

0x1a6f,	// (0x00015eea) bg_button_pane_g5

0x1a7f,	// (0x00015efa) bg_button_pane_g6

0x1a87,	// (0x00015f02) bg_button_pane_g7

0x1a97,	// (0x00015f12) bg_button_pane_g8

0x1a8f,	// (0x00015f0a) bg_button_pane_g9

0x0008,

0xf846,	// (0x00023cc1) bg_button_pane_g

0x452c,	// (0x000189a7) common_borders_pane_ParamLimits

0x452c,	// (0x000189a7) common_borders_pane

0x50d8,	// (0x00019553) eswt_control_pane_g1_copy1_ParamLimits

0x50d8,	// (0x00019553) eswt_control_pane_g1_copy1

0x50e5,	// (0x00019560) eswt_control_pane_g2_copy1_ParamLimits

0x50e5,	// (0x00019560) eswt_control_pane_g2_copy1

0x50f2,	// (0x0001956d) eswt_control_pane_g3_copy1_ParamLimits

0x50f2,	// (0x0001956d) eswt_control_pane_g3_copy1

0x50ff,	// (0x0001957a) eswt_control_pane_g4_copy1_ParamLimits

0x50ff,	// (0x0001957a) eswt_control_pane_g4_copy1

0x4567,	// (0x000189e2) bg_eswt_ctrl_canvas_pane_g1

0x452c,	// (0x000189a7) common_borders_pane_cp2_ParamLimits

0x452c,	// (0x000189a7) common_borders_pane_cp2

0x452c,	// (0x000189a7) common_borders_pane_cp3_ParamLimits

0x452c,	// (0x000189a7) common_borders_pane_cp3

0x5154,	// (0x000195cf) separator_horizontal_pane

0x515c,	// (0x000195d7) separator_vertical_pane

0x50d8,	// (0x00019553) eswt_control_pane_g1_copy2_ParamLimits

0x50d8,	// (0x00019553) eswt_control_pane_g1_copy2

0x50e5,	// (0x00019560) eswt_control_pane_g2_copy2_ParamLimits

0x50e5,	// (0x00019560) eswt_control_pane_g2_copy2

0x50f2,	// (0x0001956d) eswt_control_pane_g3_copy2_ParamLimits

0x50f2,	// (0x0001956d) eswt_control_pane_g3_copy2

0x50ff,	// (0x0001957a) eswt_control_pane_g4_copy2_ParamLimits

0x50ff,	// (0x0001957a) eswt_control_pane_g4_copy2

0xc171,	// (0x000205ec) common_borders_pane_cp4

0x5165,	// (0x000195e0) separator_horizontal_pane_g1

0x516e,	// (0x000195e9) separator_horizontal_pane_g2

0x5177,	// (0x000195f2) separator_horizontal_pane_g3

0x0002,

0xfc0a,	// (0x00024085) separator_horizontal_pane_g

0x50d8,	// (0x00019553) eswt_control_pane_g1_copy3_ParamLimits

0x50d8,	// (0x00019553) eswt_control_pane_g1_copy3

0x50e5,	// (0x00019560) eswt_control_pane_g2_copy3_ParamLimits

0x50e5,	// (0x00019560) eswt_control_pane_g2_copy3

0x50f2,	// (0x0001956d) eswt_control_pane_g3_copy3_ParamLimits

0x50f2,	// (0x0001956d) eswt_control_pane_g3_copy3

0x50ff,	// (0x0001957a) eswt_control_pane_g4_copy3_ParamLimits

0x50ff,	// (0x0001957a) eswt_control_pane_g4_copy3

0xc171,	// (0x000205ec) common_borders_pane_cp5

0x5180,	// (0x000195fb) separator_vertical_pane_g1

0x5189,	// (0x00019604) separator_vertical_pane_g2

0x5192,	// (0x0001960d) separator_vertical_pane_g3

0x0002,

0xfc11,	// (0x0002408c) separator_vertical_pane_g

0x50d8,	// (0x00019553) eswt_control_pane_g1_copy4_ParamLimits

0x50d8,	// (0x00019553) eswt_control_pane_g1_copy4

0x50e5,	// (0x00019560) eswt_control_pane_g2_copy4_ParamLimits

0x50e5,	// (0x00019560) eswt_control_pane_g2_copy4

0x50f2,	// (0x0001956d) eswt_control_pane_g3_copy4_ParamLimits

0x50f2,	// (0x0001956d) eswt_control_pane_g3_copy4

0x50ff,	// (0x0001957a) eswt_control_pane_g4_copy4_ParamLimits

0x50ff,	// (0x0001957a) eswt_control_pane_g4_copy4

0xbf25,	// (0x000203a0) eswt_ctrl_combo_button_pane

0xbf2d,	// (0x000203a8) eswt_ctrl_input_pane

0xbf35,	// (0x000203b0) popup_choice_list_window_cp70

0xbf3d,	// (0x000203b8) eswt_ctrl_input_pane_t1

0xc171,	// (0x000205ec) input_focus_pane_cp70

0x452c,	// (0x000189a7) bg_button_pane_cp70_ParamLimits

0x452c,	// (0x000189a7) bg_button_pane_cp70

0xbf4b,	// (0x000203c6) eswt_ctrl_combo_button_pane_g1

0x51c9,	// (0x00019644) wait_bar_pane_cp70

0x1b77,	// (0x00015ff2) bg_popup_window_pane_cp70_ParamLimits

0x1b77,	// (0x00015ff2) bg_popup_window_pane_cp70

0x51d1,	// (0x0001964c) popup_eswt_tasktip_window_t1

0x51e7,	// (0x00019662) wait_bar_pane_cp71_ParamLimits

0x51e7,	// (0x00019662) wait_bar_pane_cp71

0x51f3,	// (0x0001966e) grid_eswt_app_pane

0xe2fe,	// (0x00022779) scroll_pane_cp70

0xbf53,	// (0x000203ce) cell_eswt_app_pane_ParamLimits

0xbf53,	// (0x000203ce) cell_eswt_app_pane

0xbf7d,	// (0x000203f8) cell_eswt_app_pane_g1_ParamLimits

0xbf7d,	// (0x000203f8) cell_eswt_app_pane_g1

0xbfac,	// (0x00020427) cell_eswt_app_pane_g2_ParamLimits

0xbfac,	// (0x00020427) cell_eswt_app_pane_g2

0x0001,

0xfc18,	// (0x00024093) cell_eswt_app_pane_g_ParamLimits

0xfc18,	// (0x00024093) cell_eswt_app_pane_g

0xbfd0,	// (0x0002044b) cell_eswt_app_pane_t1_ParamLimits

0xbfd0,	// (0x0002044b) cell_eswt_app_pane_t1

0x52b1,	// (0x0001972c) grid_highlight_pane_cp70_ParamLimits

0x52b1,	// (0x0001972c) grid_highlight_pane_cp70

0x10b3,	// (0x0001552e) set_content_pane_g1

0xab9d,	// (0x0001f018) status_small_volume_pane

0x93e2,	// (0x0001d85d) status_small_volume_pane_g1

0x93ea,	// (0x0001d865) volume_small2_pane

0x93f3,	// (0x0001d86e) volume_small2_pane_g1

0x93fc,	// (0x0001d877) volume_small2_pane_g2

0x9405,	// (0x0001d880) volume_small2_pane_g3

0x940e,	// (0x0001d889) volume_small2_pane_g4

0x9417,	// (0x0001d892) volume_small2_pane_g5

0x9420,	// (0x0001d89b) volume_small2_pane_g6

0x9429,	// (0x0001d8a4) volume_small2_pane_g7

0x9432,	// (0x0001d8ad) volume_small2_pane_g8

0x943b,	// (0x0001d8b6) volume_small2_pane_g9

0x9444,	// (0x0001d8bf) volume_small2_pane_g10

0x0009,

0xfc1d,	// (0x00024098) volume_small2_pane_g

0x491f,	// (0x00018d9a) fep_vkb_top_text_pane_g1_ParamLimits

0xbe3b,	// (0x000202b6) fep_vkb_top_text_pane_t1_ParamLimits

0x4bb4,	// (0x0001902f) popup_preview_fixed_window_g3_ParamLimits

0x4bb4,	// (0x0001902f) popup_preview_fixed_window_g3

0x910b,	// (0x0001d586) popup_toolbar_trans_pane

0xb6c8,	// (0x0001fb43) aid_height_set_list_ParamLimits

0x2f11,	// (0x0001738c) aid_size_parent_ParamLimits

0x1506,	// (0x00015981) list_highlight_pane_cp2_ParamLimits

0x10b3,	// (0x0001552e) set_content_pane_g1_ParamLimits

0xb898,	// (0x0001fd13) list_single_image_pane_ParamLimits

0xb898,	// (0x0001fd13) list_single_image_pane

0xc002,	// (0x0002047d) aid_size_cell_image_ParamLimits

0xc002,	// (0x0002047d) aid_size_cell_image

0xc00f,	// (0x0002048a) grid_single_image_pane_ParamLimits

0xc00f,	// (0x0002048a) grid_single_image_pane

0x4be2,	// (0x0001905d) list_single_image_pane_g1_ParamLimits

0x4be2,	// (0x0001905d) list_single_image_pane_g1

0x4bee,	// (0x00019069) list_single_image_pane_g2_ParamLimits

0x4bee,	// (0x00019069) list_single_image_pane_g2

0x0001,

0xfc32,	// (0x000240ad) list_single_image_pane_g_ParamLimits

0xfc32,	// (0x000240ad) list_single_image_pane_g

0x52d8,	// (0x00019753) list_single_image_pane_t1_ParamLimits

0x52d8,	// (0x00019753) list_single_image_pane_t1

0xc01b,	// (0x00020496) cell_image_list_pane_ParamLimits

0xc01b,	// (0x00020496) cell_image_list_pane

0xc02f,	// (0x000204aa) cell_image_list_pane_g1

0xc038,	// (0x000204b3) cell_image_list_pane_g2

0x0001,

0xfc37,	// (0x000240b2) cell_image_list_pane_g

0xc041,	// (0x000204bc) aid_size_cell_tb_trans_pane

0xc60b,	// (0x00020a86) bg_tb_trans_pane

0xc053,	// (0x000204ce) grid_tb_trans_pane

0x1a57,	// (0x00015ed2) bg_tb_trans_pane_g1

0x1a67,	// (0x00015ee2) bg_tb_trans_pane_g2

0x1a5f,	// (0x00015eda) bg_tb_trans_pane_g3

0x1a77,	// (0x00015ef2) bg_tb_trans_pane_g4

0x1a6f,	// (0x00015eea) bg_tb_trans_pane_g5

0x1a97,	// (0x00015f12) bg_tb_trans_pane_g6

0x1a8f,	// (0x00015f0a) bg_tb_trans_pane_g7

0x1a7f,	// (0x00015efa) bg_tb_trans_pane_g8

0x1a87,	// (0x00015f02) bg_tb_trans_pane_g9

0x0008,

0xfc3c,	// (0x000240b7) bg_tb_trans_pane_g

0xc067,	// (0x000204e2) cell_toolbar_trans_pane_ParamLimits

0xc067,	// (0x000204e2) cell_toolbar_trans_pane

0x4567,	// (0x000189e2) cell_toolbar_trans_pane_g1

0xbb53,	// (0x0001ffce) list_form2_midp_pane_t1

0xbb61,	// (0x0001ffdc) list_form2_midp_pane_t2

0x0001,

0xfad9,	// (0x00023f54) list_form2_midp_pane_t

0x4101,	// (0x0001857c) scroll_pane_cp51_ParamLimits

0x430a,	// (0x00018785) form2_midp_wait_pane_g1

0x4313,	// (0x0001878e) form2_midp_wait_pane_g2

0x431c,	// (0x00018797) form2_midp_wait_pane_g3

0x0002,

0xfaee,	// (0x00023f69) form2_midp_wait_pane_g

0xc1e1,	// (0x0002065c) list_highlight_pane_cp21_ParamLimits

0x4364,	// (0x000187df) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4373,	// (0x000187ee) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3114,	// (0x0001758f) list_single_2graphic_im_pane_ParamLimits

0x3114,	// (0x0001758f) list_single_2graphic_im_pane

0xc08d,	// (0x00020508) list_single_2graphic_im_pane_g1_ParamLimits

0xc08d,	// (0x00020508) list_single_2graphic_im_pane_g1

0xc09e,	// (0x00020519) list_single_2graphic_im_pane_g2_ParamLimits

0xc09e,	// (0x00020519) list_single_2graphic_im_pane_g2

0xc0aa,	// (0x00020525) list_single_2graphic_im_pane_g3_ParamLimits

0xc0aa,	// (0x00020525) list_single_2graphic_im_pane_g3

0x0003,

0xfc4f,	// (0x000240ca) list_single_2graphic_im_pane_g_ParamLimits

0xfc4f,	// (0x000240ca) list_single_2graphic_im_pane_g

0xc0be,	// (0x00020539) list_single_2graphic_im_pane_t1_ParamLimits

0xc0be,	// (0x00020539) list_single_2graphic_im_pane_t1

0x4bc0,	// (0x0001903b) list_single_graphic_2heading_pane_fp_ParamLimits

0x4bc0,	// (0x0001903b) list_single_graphic_2heading_pane_fp

0x4c25,	// (0x000190a0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4c25,	// (0x000190a0) list_single_graphic_2heading_pane_fp_g1

0x4bd6,	// (0x00019051) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4bd6,	// (0x00019051) list_single_graphic_2heading_pane_fp_g2

0x4be2,	// (0x0001905d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4be2,	// (0x0001905d) list_single_graphic_2heading_pane_fp_g3

0x4bee,	// (0x00019069) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4bee,	// (0x00019069) list_single_graphic_2heading_pane_fp_g4

0x4c02,	// (0x0001907d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4c02,	// (0x0001907d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb76,	// (0x00023ff1) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb76,	// (0x00023ff1) list_single_graphic_2heading_pane_fp_g

0x53ce,	// (0x00019849) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x53ce,	// (0x00019849) list_single_graphic_2heading_pane_fp_t1

0x4c5d,	// (0x000190d8) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4c5d,	// (0x000190d8) list_single_graphic_2heading_pane_fp_t2

0x53e4,	// (0x0001985f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x53e4,	// (0x0001985f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc58,	// (0x000240d3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc58,	// (0x000240d3) list_single_graphic_2heading_pane_fp_t

0x45f3,	// (0x00018a6e) fep_hwr_write_pane_g5_ParamLimits

0x45f3,	// (0x00018a6e) fep_hwr_write_pane_g5

0x45ff,	// (0x00018a7a) fep_hwr_write_pane_g6_ParamLimits

0x45ff,	// (0x00018a7a) fep_hwr_write_pane_g6

0xbf05,	// (0x00020380) eswt_shell_pane_ParamLimits

0x1b77,	// (0x00015ff2) bg_popup_window_pane_cp18_ParamLimits

0x2e47,	// (0x000172c2) heading_pane_cp70

0x51d1,	// (0x0001964c) popup_eswt_tasktip_window_t1_ParamLimits

0xac43,	// (0x0001f0be) aid_touch_tab_arrow_left

0xac59,	// (0x0001f0d4) aid_touch_tab_arrow_right

0x9afc,	// (0x0001df77) title_pane_g3_ParamLimits

0x9afc,	// (0x0001df77) title_pane_g3

0xc5a2,	// (0x00020a1d) set_value_pane_g1

0x910b,	// (0x0001d586) popup_toolbar_trans_pane_ParamLimits

0xc041,	// (0x000204bc) aid_size_cell_tb_trans_pane_ParamLimits

0xc60b,	// (0x00020a86) bg_tb_trans_pane_ParamLimits

0xc053,	// (0x000204ce) grid_tb_trans_pane_ParamLimits

0xc325,	// (0x000207a0) cont_note_pane_ParamLimits

0xc325,	// (0x000207a0) cont_note_pane

0xc4a1,	// (0x0002091c) cont_snote2_single_text_pane_ParamLimits

0xc4a1,	// (0x0002091c) cont_snote2_single_text_pane

0xc4a1,	// (0x0002091c) cont_snote2_single_graphic_pane_ParamLimits

0xc4a1,	// (0x0002091c) cont_snote2_single_graphic_pane

0x21ca,	// (0x00016645) cont_note_wait_pane_ParamLimits

0x21ca,	// (0x00016645) cont_note_wait_pane

0x21ca,	// (0x00016645) cont_note_image_pane_ParamLimits

0x21ca,	// (0x00016645) cont_note_image_pane

0x53fa,	// (0x00019875) popup_note2_window_g1_ParamLimits

0x53fa,	// (0x00019875) popup_note2_window_g1

0xc0fc,	// (0x00020577) popup_note2_window_t1_ParamLimits

0xc0fc,	// (0x00020577) popup_note2_window_t1

0xc958,	// (0x00020dd3) popup_note2_window_t2_ParamLimits

0xc958,	// (0x00020dd3) popup_note2_window_t2

0xc99d,	// (0x00020e18) popup_note2_window_t3_ParamLimits

0xc99d,	// (0x00020e18) popup_note2_window_t3

0x54fa,	// (0x00019975) popup_note2_window_t4_ParamLimits

0x54fa,	// (0x00019975) popup_note2_window_t4

0xc3a9,	// (0x00020824) popup_note2_window_t5_ParamLimits

0xc3a9,	// (0x00020824) popup_note2_window_t5

0x0004,

0xfc64,	// (0x000240df) popup_note2_window_t_ParamLimits

0xfc64,	// (0x000240df) popup_note2_window_t

0x5529,	// (0x000199a4) popup_note2_image_window_g1_ParamLimits

0x5529,	// (0x000199a4) popup_note2_image_window_g1

0xc9e2,	// (0x00020e5d) popup_note2_image_window_g2_ParamLimits

0xc9e2,	// (0x00020e5d) popup_note2_image_window_g2

0x0001,

0xfc6f,	// (0x000240ea) popup_note2_image_window_g_ParamLimits

0xfc6f,	// (0x000240ea) popup_note2_image_window_g

0x5547,	// (0x000199c2) popup_note2_image_window_t1_ParamLimits

0x5547,	// (0x000199c2) popup_note2_image_window_t1

0x555f,	// (0x000199da) popup_note2_image_window_t2_ParamLimits

0x555f,	// (0x000199da) popup_note2_image_window_t2

0x5577,	// (0x000199f2) popup_note2_image_window_t3_ParamLimits

0x5577,	// (0x000199f2) popup_note2_image_window_t3

0x0002,

0xfc74,	// (0x000240ef) popup_note2_image_window_t_ParamLimits

0xfc74,	// (0x000240ef) popup_note2_image_window_t

0x21d8,	// (0x00016653) popup_note2_wait_window_g1_ParamLimits

0x21d8,	// (0x00016653) popup_note2_wait_window_g1

0x21e4,	// (0x0001665f) popup_note2_wait_window_g2_ParamLimits

0x21e4,	// (0x0001665f) popup_note2_wait_window_g2

0x21f0,	// (0x0001666b) popup_note2_wait_window_g3_ParamLimits

0x21f0,	// (0x0001666b) popup_note2_wait_window_g3

0x0002,

0xf828,	// (0x00023ca3) popup_note2_wait_window_g_ParamLimits

0xf828,	// (0x00023ca3) popup_note2_wait_window_g

0x5593,	// (0x00019a0e) popup_note2_wait_window_t1_ParamLimits

0x5593,	// (0x00019a0e) popup_note2_wait_window_t1

0x55b1,	// (0x00019a2c) popup_note2_wait_window_t2_ParamLimits

0x55b1,	// (0x00019a2c) popup_note2_wait_window_t2

0x55cf,	// (0x00019a4a) popup_note2_wait_window_t3_ParamLimits

0x55cf,	// (0x00019a4a) popup_note2_wait_window_t3

0x55e1,	// (0x00019a5c) popup_note2_wait_window_t4_ParamLimits

0x55e1,	// (0x00019a5c) popup_note2_wait_window_t4

0x0003,

0xfc7b,	// (0x000240f6) popup_note2_wait_window_t_ParamLimits

0xfc7b,	// (0x000240f6) popup_note2_wait_window_t

0x55f3,	// (0x00019a6e) wait_bar2_pane_ParamLimits

0x55f3,	// (0x00019a6e) wait_bar2_pane

0x560b,	// (0x00019a86) popup_snote2_single_text_window_g1_ParamLimits

0x560b,	// (0x00019a86) popup_snote2_single_text_window_g1

0x5633,	// (0x00019aae) popup_snote2_single_text_window_t1_ParamLimits

0x5633,	// (0x00019aae) popup_snote2_single_text_window_t1

0x567f,	// (0x00019afa) popup_snote2_single_text_window_t2_ParamLimits

0x567f,	// (0x00019afa) popup_snote2_single_text_window_t2

0x56cb,	// (0x00019b46) popup_snote2_single_text_window_t3_ParamLimits

0x56cb,	// (0x00019b46) popup_snote2_single_text_window_t3

0x570c,	// (0x00019b87) popup_snote2_single_text_window_t4_ParamLimits

0x570c,	// (0x00019b87) popup_snote2_single_text_window_t4

0x5742,	// (0x00019bbd) popup_snote2_single_text_window_t5_ParamLimits

0x5742,	// (0x00019bbd) popup_snote2_single_text_window_t5

0x0004,

0xfc84,	// (0x000240ff) popup_snote2_single_text_window_t_ParamLimits

0xfc84,	// (0x000240ff) popup_snote2_single_text_window_t

0xc9f4,	// (0x00020e6f) popup_snote2_single_graphic_window_g1_ParamLimits

0xc9f4,	// (0x00020e6f) popup_snote2_single_graphic_window_g1

0x5795,	// (0x00019c10) popup_snote2_single_graphic_window_g2_ParamLimits

0x5795,	// (0x00019c10) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8f,	// (0x0002410a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8f,	// (0x0002410a) popup_snote2_single_graphic_window_g

0x57bd,	// (0x00019c38) popup_snote2_single_graphic_window_t1_ParamLimits

0x57bd,	// (0x00019c38) popup_snote2_single_graphic_window_t1

0x5809,	// (0x00019c84) popup_snote2_single_graphic_window_t2_ParamLimits

0x5809,	// (0x00019c84) popup_snote2_single_graphic_window_t2

0x56cb,	// (0x00019b46) popup_snote2_single_graphic_window_t3_ParamLimits

0x56cb,	// (0x00019b46) popup_snote2_single_graphic_window_t3

0x570c,	// (0x00019b87) popup_snote2_single_graphic_window_t4_ParamLimits

0x570c,	// (0x00019b87) popup_snote2_single_graphic_window_t4

0x5742,	// (0x00019bbd) popup_snote2_single_graphic_window_t5_ParamLimits

0x5742,	// (0x00019bbd) popup_snote2_single_graphic_window_t5

0x0004,

0xfc94,	// (0x0002410f) popup_snote2_single_graphic_window_t_ParamLimits

0xfc94,	// (0x0002410f) popup_snote2_single_graphic_window_t

0x3fbe,	// (0x00018439) clock_nsta_pane_cp2_t1

0x3fbe,	// (0x00018439) clock_nsta_pane_cp2_t2

0x0001,

0xfaaf,	// (0x00023f2a) clock_nsta_pane_cp2_t

0xc62a,	// (0x00020aa5) form_field_data_wide_pane_g1_ParamLimits

0xc636,	// (0x00020ab1) form_field_data_wide_pane_g2_ParamLimits

0xc636,	// (0x00020ab1) form_field_data_wide_pane_g2

0xc642,	// (0x00020abd) form_field_data_wide_pane_g3_ParamLimits

0xc642,	// (0x00020abd) form_field_data_wide_pane_g3

0x0002,

0xf667,	// (0x00023ae2) form_field_data_wide_pane_g_ParamLimits

0xf667,	// (0x00023ae2) form_field_data_wide_pane_g

0xba84,	// (0x0001feff) grid_touch_3_pane_ParamLimits

0xba84,	// (0x0001feff) grid_touch_3_pane

0xca1c,	// (0x00020e97) cell_touch_3_pane_ParamLimits

0xca1c,	// (0x00020e97) cell_touch_3_pane

0x4567,	// (0x000189e2) cell_touch_3_pane_g1

0x4567,	// (0x000189e2) cell_touch_3_pane_g2

0x0001,

0xfb34,	// (0x00023faf) cell_touch_3_pane_g

0xc3db,	// (0x00020856) cont_query_data_pane

0xc3e3,	// (0x0002085e) cont_query_data_pane_cp1

0x5883,	// (0x00019cfe) button_value_adjust_pane_cp7

0x588b,	// (0x00019d06) query_popup_pane_cp3

0xe506,	// (0x00022981) bg_popup_sub_pane_cp22_ParamLimits

0x8864,	// (0x0001ccdf) navi_navi_volume_pane_cp2

0x8873,	// (0x0001ccee) popup_side_volume_key_window_g2

0x8882,	// (0x0001ccfd) popup_side_volume_key_window_g3

0x0002,

0xf6fd,	// (0x00023b78) popup_side_volume_key_window_g

0x8891,	// (0x0001cd0c) popup_side_volume_key_window_t2

0x0001,

0xf704,	// (0x00023b7f) popup_side_volume_key_window_t

0xa9e7,	// (0x0001ee62) popup_side_volume_key_window_ParamLimits

0xa1e8,	// (0x0001e663) list_double_graphic_pane_g4_ParamLimits

0xa1e8,	// (0x0001e663) list_double_graphic_pane_g4

0xb873,	// (0x0001fcee) list_single_2heading_msg_pane_ParamLimits

0xb873,	// (0x0001fcee) list_single_2heading_msg_pane

0xca65,	// (0x00020ee0) list_single_2heading_msg_pane_g1_ParamLimits

0xca65,	// (0x00020ee0) list_single_2heading_msg_pane_g1

0xca71,	// (0x00020eec) list_single_2heading_msg_pane_g2_ParamLimits

0xca71,	// (0x00020eec) list_single_2heading_msg_pane_g2

0xca84,	// (0x00020eff) list_single_2heading_msg_pane_g3_ParamLimits

0xca84,	// (0x00020eff) list_single_2heading_msg_pane_g3

0xca90,	// (0x00020f0b) list_single_2heading_msg_pane_g4_ParamLimits

0xca90,	// (0x00020f0b) list_single_2heading_msg_pane_g4

0x0003,

0xfc9f,	// (0x0002411a) list_single_2heading_msg_pane_g_ParamLimits

0xfc9f,	// (0x0002411a) list_single_2heading_msg_pane_g

0xcaa8,	// (0x00020f23) list_single_2heading_msg_pane_t1_ParamLimits

0xcaa8,	// (0x00020f23) list_single_2heading_msg_pane_t1

0xcad0,	// (0x00020f4b) list_single_2heading_msg_pane_t2_ParamLimits

0xcad0,	// (0x00020f4b) list_single_2heading_msg_pane_t2

0xcb3b,	// (0x00020fb6) list_single_2heading_msg_pane_t3_ParamLimits

0xcb3b,	// (0x00020fb6) list_single_2heading_msg_pane_t3

0x597a,	// (0x00019df5) list_single_2heading_msg_pane_t4_ParamLimits

0x597a,	// (0x00019df5) list_single_2heading_msg_pane_t4

0x0003,

0xfca8,	// (0x00024123) list_single_2heading_msg_pane_t_ParamLimits

0xfca8,	// (0x00024123) list_single_2heading_msg_pane_t

0xc18f,	// (0x0002060a) title_pane_g4_ParamLimits

0xc18f,	// (0x0002060a) title_pane_g4

0xe14e,	// (0x000225c9) title_pane_stacon_g3_ParamLimits

0xe14e,	// (0x000225c9) title_pane_stacon_g3

0x5391,	// (0x0001980c) list_single_2graphic_im_pane_g4_ParamLimits

0x5391,	// (0x0001980c) list_single_2graphic_im_pane_g4

0xb563,	// (0x0001f9de) popup_side_volume_key_window_cp

0x3500,	// (0x0001797b) main_idle_act2_pane_t1

0xe963,	// (0x00022dde) toolbar_button_pane_g10

0xa075,	// (0x0001e4f0) popup_toolbar_window_cp1

0x3faf,	// (0x0001842a) clock_nsta_pane_cp_t1

0x3faf,	// (0x0001842a) clock_nsta_pane_cp_t2

0x0001,

0xfaaa,	// (0x00023f25) clock_nsta_pane_cp_t

0x8864,	// (0x0001ccdf) navi_navi_volume_pane_cp2_ParamLimits

0xe51c,	// (0x00022997) popup_side_volume_key_window_g1_ParamLimits

0x8873,	// (0x0001ccee) popup_side_volume_key_window_g2_ParamLimits

0x8882,	// (0x0001ccfd) popup_side_volume_key_window_g3_ParamLimits

0xf6fd,	// (0x00023b78) popup_side_volume_key_window_g_ParamLimits

0xec47,	// (0x000230c2) fep_hwr_aid_pane

0xecee,	// (0x00023169) bg_fep_hwr_top_pane_g4_ParamLimits

0x45c3,	// (0x00018a3e) fep_hwr_top_pane_g1_ParamLimits

0x45d5,	// (0x00018a50) fep_hwr_top_pane_g2_ParamLimits

0xed0e,	// (0x00023189) fep_hwr_top_pane_g3_ParamLimits

0xfaff,	// (0x00023f7a) fep_hwr_top_pane_g_ParamLimits

0xed23,	// (0x0002319e) fep_hwr_top_text_pane_ParamLimits

0x29d4,	// (0x00016e4f) aid_touch_tab_arrow_arrow_2

0x29dd,	// (0x00016e58) aid_touch_tab_arrow_left_2

0xec5b,	// (0x000230d6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xec92,	// (0x0002310d) fep_hwr_prediction_pane

0x472e,	// (0x00018ba9) fep_vkb_prediction_pane

0xbe1b,	// (0x00020296) fep_vkb_side_pane_g3_ParamLimits

0xbe1b,	// (0x00020296) fep_vkb_side_pane_g3

0xee27,	// (0x000232a2) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xee93,	// (0x0002330e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xeea0,	// (0x0002331b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbae,	// (0x00024029) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xef64,	// (0x000233df) fep_hwr_prediction_pane_g1

0xef6e,	// (0x000233e9) fep_hwr_prediction_pane_g2

0xef76,	// (0x000233f1) fep_hwr_prediction_pane_g3

0xef7e,	// (0x000233f9) fep_hwr_prediction_pane_g4

0x0003,

0xfcb1,	// (0x0002412c) fep_hwr_prediction_pane_g

0x599f,	// (0x00019e1a) fep_vkb_prediction_pane_g1

0x59a9,	// (0x00019e24) fep_vkb_prediction_pane_g2

0x59b1,	// (0x00019e2c) fep_vkb_prediction_pane_g3

0x59b9,	// (0x00019e34) fep_vkb_prediction_pane_g4

0x0003,

0xfcba,	// (0x00024135) fep_vkb_prediction_pane_g

0x92e1,	// (0x0001d75c) slider_set_pane_g3

0x92f5,	// (0x0001d770) slider_set_pane_g4

0x930d,	// (0x0001d788) slider_set_pane_g5

0x92e1,	// (0x0001d75c) slider_set_pane_g6

0x9323,	// (0x0001d79e) slider_set_pane_g7

0x3072,	// (0x000174ed) slider_form_pane_g3

0x307b,	// (0x000174f6) slider_form_pane_g4

0x3083,	// (0x000174fe) slider_form_pane_g5

0x3072,	// (0x000174ed) slider_form_pane_g6

0xb813,	// (0x0001fc8e) slider_form_pane_g7

0x37e3,	// (0x00017c5e) slider_set_pane_vc_g3

0x37ec,	// (0x00017c67) slider_set_pane_vc_g4

0x37f5,	// (0x00017c70) slider_set_pane_vc_g5

0x37e3,	// (0x00017c5e) slider_set_pane_vc_g6

0x37fe,	// (0x00017c79) slider_set_pane_vc_g7

0x3c93,	// (0x0001810e) slider_form_pane_vc_g1

0x3c9c,	// (0x00018117) slider_form_pane_vc_g2

0x3ca5,	// (0x00018120) slider_form_pane_vc_g3

0x3c93,	// (0x0001810e) slider_form_pane_vc_g4

0x3cae,	// (0x00018129) slider_form_pane_vc_g5

0x0004,

0xfa7c,	// (0x00023ef7) slider_form_pane_vc_g

0xe01a,	// (0x00022495) main_idle_act3_pane

0x59c1,	// (0x00019e3c) ai3_links_pane

0xcba9,	// (0x00021024) popup_ai3_data_window_ParamLimits

0xcba9,	// (0x00021024) popup_ai3_data_window

0xc171,	// (0x000205ec) grid_ai3_links_pane

0xcbc1,	// (0x0002103c) cell_ai3_links_pane_ParamLimits

0xcbc1,	// (0x0002103c) cell_ai3_links_pane

0x59fa,	// (0x00019e75) bg_popup_sub_pane_cp11

0x5a07,	// (0x00019e82) cell_ai3_links_pane_g1

0xc171,	// (0x000205ec) bg_popup_sub_pane_cp12

0x5a2c,	// (0x00019ea7) heading_ai3_data_pane

0x5a34,	// (0x00019eaf) list_ai3_gene_pane

0x5a40,	// (0x00019ebb) popup_ai3_data_window_g1

0x5a48,	// (0x00019ec3) heading_ai3_data_pane_g1

0x5a50,	// (0x00019ecb) heading_ai3_data_pane_t1

0xcbdb,	// (0x00021056) list_double_ai3_gene_pane_ParamLimits

0xcbdb,	// (0x00021056) list_double_ai3_gene_pane

0x5a6b,	// (0x00019ee6) list_single_ai3_gene_pane_ParamLimits

0x5a6b,	// (0x00019ee6) list_single_ai3_gene_pane

0x452c,	// (0x000189a7) list_highlight_pane_cp7_ParamLimits

0x452c,	// (0x000189a7) list_highlight_pane_cp7

0x5a78,	// (0x00019ef3) list_single_a13_gene_pane_t1_ParamLimits

0x5a78,	// (0x00019ef3) list_single_a13_gene_pane_t1

0x5a8f,	// (0x00019f0a) list_single_ai3_gene_pane_g1

0x5a98,	// (0x00019f13) list_single_ai3_gene_pane_g2

0x0001,

0xfcc3,	// (0x0002413e) list_single_ai3_gene_pane_g

0x5aa0,	// (0x00019f1b) list_double_ai3_gene_pane_g1_ParamLimits

0x5aa0,	// (0x00019f1b) list_double_ai3_gene_pane_g1

0xcbe8,	// (0x00021063) list_double_ai3_gene_pane_t1_ParamLimits

0xcbe8,	// (0x00021063) list_double_ai3_gene_pane_t1

0x5ac8,	// (0x00019f43) list_double_ai3_gene_pane_t2_ParamLimits

0x5ac8,	// (0x00019f43) list_double_ai3_gene_pane_t2

0x5add,	// (0x00019f58) list_double_ai3_gene_pane_t3_ParamLimits

0x5add,	// (0x00019f58) list_double_ai3_gene_pane_t3

0x0002,

0xfcc8,	// (0x00024143) list_double_ai3_gene_pane_t_ParamLimits

0xfcc8,	// (0x00024143) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x589c,	// (0x00019d17) aid_size_min_col_2

0xca4f,	// (0x00020eca) aid_size_min_msg_ParamLimits

0xca4f,	// (0x00020eca) aid_size_min_msg

0xbe2f,	// (0x000202aa) fep_vkb_top_text_pane_g2_ParamLimits

0xbe2f,	// (0x000202aa) fep_vkb_top_text_pane_g2

0x0001,

0xfb2f,	// (0x00023faa) fep_vkb_top_text_pane_g_ParamLimits

0xfb2f,	// (0x00023faa) fep_vkb_top_text_pane_g

0xe01a,	// (0x00022495) main_hc_apps_shell_pane

0x5afa,	// (0x00019f75) grid_hc_apps_pane_ParamLimits

0x5afa,	// (0x00019f75) grid_hc_apps_pane

0x5b09,	// (0x00019f84) list_hc_apps_pane

0x5b11,	// (0x00019f8c) scroll_pane_cp37_ParamLimits

0x5b11,	// (0x00019f8c) scroll_pane_cp37

0xcc04,	// (0x0002107f) cell_hc_apps_pane_ParamLimits

0xcc04,	// (0x0002107f) cell_hc_apps_pane

0xccc2,	// (0x0002113d) cell_hc_apps_pane_g1_ParamLimits

0xccc2,	// (0x0002113d) cell_hc_apps_pane_g1

0x5c1d,	// (0x0001a098) cell_hc_apps_pane_g2_ParamLimits

0x5c1d,	// (0x0001a098) cell_hc_apps_pane_g2

0x5c39,	// (0x0001a0b4) cell_hc_apps_pane_g3_ParamLimits

0x5c39,	// (0x0001a0b4) cell_hc_apps_pane_g3

0x0002,

0xfccf,	// (0x0002414a) cell_hc_apps_pane_g_ParamLimits

0xfccf,	// (0x0002414a) cell_hc_apps_pane_g

0xccef,	// (0x0002116a) cell_hc_apps_pane_t1_ParamLimits

0xccef,	// (0x0002116a) cell_hc_apps_pane_t1

0xc325,	// (0x000207a0) grid_highlight_pane_cp10_ParamLimits

0xc325,	// (0x000207a0) grid_highlight_pane_cp10

0xcd2d,	// (0x000211a8) list_single_hc_apps_pane_ParamLimits

0xcd2d,	// (0x000211a8) list_single_hc_apps_pane

0xcd5d,	// (0x000211d8) list_single_hc_apps_pane_g1

0xcd76,	// (0x000211f1) list_single_hc_apps_pane_g2

0x0001,

0xfcd6,	// (0x00024151) list_single_hc_apps_pane_g

0xcd8f,	// (0x0002120a) list_single_hc_apps_pane_g2_copy1

0xcdab,	// (0x00021226) list_single_hc_apps_pane_t1

0xc1e1,	// (0x0002065c) bg_set_opt_pane_cp_ParamLimits

0x87be,	// (0x0001cc39) setting_slider_pane_t1_ParamLimits

0x87d7,	// (0x0001cc52) setting_slider_pane_t2_ParamLimits

0x87f1,	// (0x0001cc6c) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000239d9) setting_slider_pane_t_ParamLimits

0x8809,	// (0x0001cc84) slider_set_pane_ParamLimits

0xe846,	// (0x00022cc1) control_pane_g5_ParamLimits

0xe846,	// (0x00022cc1) control_pane_g5

0xb695,	// (0x0001fb10) slider_set_pane_g1_ParamLimits

0xeb35,	// (0x00022fb0) slider_set_pane_g2_ParamLimits

0x92e1,	// (0x0001d75c) slider_set_pane_g3_ParamLimits

0x92f5,	// (0x0001d770) slider_set_pane_g4_ParamLimits

0x930d,	// (0x0001d788) slider_set_pane_g5_ParamLimits

0x92e1,	// (0x0001d75c) slider_set_pane_g6_ParamLimits

0x9323,	// (0x0001d79e) slider_set_pane_g7_ParamLimits

0xf944,	// (0x00023dbf) slider_set_pane_g_ParamLimits

0x105e,	// (0x000154d9) navi_icon_text_pane_ParamLimits

0xac0c,	// (0x0001f087) aid_fill_nsta_2_ParamLimits

0xac43,	// (0x0001f0be) aid_touch_tab_arrow_left_ParamLimits

0xac59,	// (0x0001f0d4) aid_touch_tab_arrow_right_ParamLimits

0xacf4,	// (0x0001f16f) clock_nsta_pane_ParamLimits

0x29b6,	// (0x00016e31) navi_icon_pane_g1_ParamLimits

0x29c2,	// (0x00016e3d) navi_text_pane_t1_ParamLimits

0x40bf,	// (0x0001853a) navi_icon_text_pane_g1_ParamLimits

0x40cb,	// (0x00018546) navi_icon_text_pane_t1_ParamLimits

0xcd5d,	// (0x000211d8) list_single_hc_apps_pane_g1_ParamLimits

0xcd76,	// (0x000211f1) list_single_hc_apps_pane_g2_ParamLimits

0xfcd6,	// (0x00024151) list_single_hc_apps_pane_g_ParamLimits

0xcd8f,	// (0x0002120a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcdab,	// (0x00021226) list_single_hc_apps_pane_t1_ParamLimits

0x86e6,	// (0x0001cb61) popup_toolbar2_fixed_window_ParamLimits

0x86e6,	// (0x0001cb61) popup_toolbar2_fixed_window

0x9101,	// (0x0001d57c) popup_toolbar2_float_window

0xc171,	// (0x000205ec) bg_popup_sub_pane_cp27

0x5d7a,	// (0x0001a1f5) grid_toolbar2_float_pane

0xc171,	// (0x000205ec) bg_popup_sub_pane_cp26

0x5d7a,	// (0x0001a1f5) grid_toolbar2_fixed_pane

0xcdd9,	// (0x00021254) cell_toolbar2_fixed_pane_ParamLimits

0xcdd9,	// (0x00021254) cell_toolbar2_fixed_pane

0xcdf3,	// (0x0002126e) cell_toolbar2_fixed_pane_g1

0x19b5,	// (0x00015e30) toolbar2_fixed_button_pane

0x1a57,	// (0x00015ed2) toolbar2_fixed_button_pane_g1

0x1a67,	// (0x00015ee2) toolbar2_fixed_button_pane_g2

0x1a5f,	// (0x00015eda) toolbar2_fixed_button_pane_g3

0x1a77,	// (0x00015ef2) toolbar2_fixed_button_pane_g4

0x1a6f,	// (0x00015eea) toolbar2_fixed_button_pane_g5

0x1a7f,	// (0x00015efa) toolbar2_fixed_button_pane_g6

0x1a87,	// (0x00015f02) toolbar2_fixed_button_pane_g7

0x1a97,	// (0x00015f12) toolbar2_fixed_button_pane_g8

0x1a8f,	// (0x00015f0a) toolbar2_fixed_button_pane_g9

0x0008,

0xf846,	// (0x00023cc1) toolbar2_fixed_button_pane_g

0x5d9b,	// (0x0001a216) cell_toolbar2_float_pane_ParamLimits

0x5d9b,	// (0x0001a216) cell_toolbar2_float_pane

0x5dac,	// (0x0001a227) cell_toolbar2_float_pane_g1

0x19b5,	// (0x00015e30) toolbar2_fixed_button_pane_cp

0xbd17,	// (0x00020192) fep_vkb_accented_list_pane_ParamLimits

0xbd17,	// (0x00020192) fep_vkb_accented_list_pane

0xee07,	// (0x00023282) bg_popup_fep_shadow_pane_g9

0x11de,	// (0x00015659) bg_popup_fep_shadow_pane_cp3

0xc77f,	// (0x00020bfa) list_accented_list_pane

0x5db5,	// (0x0001a230) list_single_accented_list_pane_ParamLimits

0x5db5,	// (0x0001a230) list_single_accented_list_pane

0x11de,	// (0x00015659) list_highlight_pane_cp10

0x5dc6,	// (0x0001a241) list_single_accented_list_pane_t1

0x902b,	// (0x0001d4a6) popup_slider_window_ParamLimits

0x902b,	// (0x0001d4a6) popup_slider_window

0x5893,	// (0x00019d0e) aid_indentation_list_msg

0xcee4,	// (0x0002135f) bg_popup_window_pane_cp19

0x5eec,	// (0x0001a367) popup_slider_window_g1

0x5f08,	// (0x0001a383) popup_slider_window_g2

0x5f24,	// (0x0001a39f) popup_slider_window_g3

0x0005,

0xfcdb,	// (0x00024156) popup_slider_window_g

0x5f8a,	// (0x0001a405) popup_slider_window_t1

0x5ffe,	// (0x0001a479) small_volume_slider_vertical_pane

0x4567,	// (0x000189e2) small_volume_slider_vertical_pane_g1

0x4567,	// (0x000189e2) small_volume_slider_vertical_pane_g2

0x601a,	// (0x0001a495) small_volume_slider_vertical_pane_g3

0x0002,

0xfced,	// (0x00024168) small_volume_slider_vertical_pane_g

0x8634,	// (0x0001caaf) area_side_right_pane_ParamLimits

0x8634,	// (0x0001caaf) area_side_right_pane

0x944d,	// (0x0001d8c8) aid_size_side_button_ParamLimits

0x944d,	// (0x0001d8c8) aid_size_side_button

0x9466,	// (0x0001d8e1) grid_sctrl_middle_pane_ParamLimits

0x9466,	// (0x0001d8e1) grid_sctrl_middle_pane

0xef8f,	// (0x0002340a) sctrl_sk_bottom_pane

0xefa0,	// (0x0002341b) sctrl_sk_top_pane

0xefb2,	// (0x0002342d) aid_touch_sctrl_top

0xefbf,	// (0x0002343a) bg_sctrl_sk_pane_ParamLimits

0xefbf,	// (0x0002343a) bg_sctrl_sk_pane

0xefcd,	// (0x00023448) sctrl_sk_top_pane_g1

0xefda,	// (0x00023455) sctrl_sk_top_pane_t1

0xefb2,	// (0x0002342d) aid_touch_sctrl_bottom

0xefbf,	// (0x0002343a) bg_sctrl_sk_pane_cp_ParamLimits

0xefbf,	// (0x0002343a) bg_sctrl_sk_pane_cp

0xeff5,	// (0x00023470) sctrl_sk_bottom_pane_g1

0xefda,	// (0x00023455) sctrl_sk_bottom_pane_t1

0x9480,	// (0x0001d8fb) cell_sctrl_middle_pane_ParamLimits

0x9480,	// (0x0001d8fb) cell_sctrl_middle_pane

0x9491,	// (0x0001d90c) aid_touch_sctrl_middle_ParamLimits

0x9491,	// (0x0001d90c) aid_touch_sctrl_middle

0x949e,	// (0x0001d919) bg_sctrl_middle_pane_ParamLimits

0x949e,	// (0x0001d919) bg_sctrl_middle_pane

0xf175,	// (0x000235f0) cell_sctrl_middle_pane_g1_ParamLimits

0xf175,	// (0x000235f0) cell_sctrl_middle_pane_g1

0x94ac,	// (0x0001d927) cell_sctrl_middle_pane_g2_ParamLimits

0x94ac,	// (0x0001d927) cell_sctrl_middle_pane_g2

0x0001,

0xfcf9,	// (0x00024174) cell_sctrl_middle_pane_g_ParamLimits

0xfcf9,	// (0x00024174) cell_sctrl_middle_pane_g

0x1a57,	// (0x00015ed2) bg_sctrl_middle_pane_g1

0x1a5f,	// (0x00015eda) bg_sctrl_middle_pane_g2

0x1a67,	// (0x00015ee2) bg_sctrl_middle_pane_g3

0x1a6f,	// (0x00015eea) bg_sctrl_middle_pane_g4

0x1a77,	// (0x00015ef2) bg_sctrl_middle_pane_g5

0x1a7f,	// (0x00015efa) bg_sctrl_middle_pane_g6

0x1a87,	// (0x00015f02) bg_sctrl_middle_pane_g7

0x1a8f,	// (0x00015f0a) bg_sctrl_middle_pane_g8

0x0007,

0xfcfe,	// (0x00024179) bg_sctrl_middle_pane_g

0x1a97,	// (0x00015f12) bg_sctrl_middle_pane_g8_copy1

0x1a57,	// (0x00015ed2) bg_sctrl_sk_pane_g1

0x1a67,	// (0x00015ee2) bg_sctrl_sk_pane_g2

0x1a5f,	// (0x00015eda) bg_sctrl_sk_pane_g3

0x0008,

0xf846,	// (0x00023cc1) bg_sctrl_sk_pane_g

0xc4ef,	// (0x0002096a) aid_size_touch_scroll_bar

0x1a77,	// (0x00015ef2) bg_sctrl_sk_pane_g4

0x1a6f,	// (0x00015eea) bg_sctrl_sk_pane_g5

0x1a7f,	// (0x00015efa) bg_sctrl_sk_pane_g6

0x1a87,	// (0x00015f02) bg_sctrl_sk_pane_g7

0x1a97,	// (0x00015f12) bg_sctrl_sk_pane_g8

0x1a8f,	// (0x00015f0a) bg_sctrl_sk_pane_g9

0xe883,	// (0x00022cfe) popup_fep_china_hwr2_fs_candidate_window

0x8acb,	// (0x0001cf46) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8acb,	// (0x0001cf46) popup_fep_china_hwr2_fs_control_window

0xee27,	// (0x000232a2) sctrl_sk_top_pane_g2

0x0001,

0xfcf4,	// (0x0002416f) sctrl_sk_top_pane_g

0xcf9c,	// (0x00021417) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcf9c,	// (0x00021417) aid_fep_china_hwr2_fs_cell

0xcfb0,	// (0x0002142b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcfb0,	// (0x0002142b) bg_popup_fep_shadow_pane_cp4

0xcfc7,	// (0x00021442) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcfc7,	// (0x00021442) bg_popup_fep_shadow_pane_cp5

0xcfd9,	// (0x00021454) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcfd9,	// (0x00021454) popup_fep_china_hwr2_fs_control_bar_grid

0xe8b3,	// (0x00022d2e) popup_fep_china_hwr2_fs_control_funtion_grid

0x6076,	// (0x0001a4f1) aid_fep_china_hwr2_fs_candi_cell

0xc171,	// (0x000205ec) bg_popup_fep_shadow_pane_cp6

0x6080,	// (0x0001a4fb) popup_fep_china_hwr2_fs_candidate_grid

0xcfed,	// (0x00021468) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcfed,	// (0x00021468) cell_fep_china_hwr2_fs_funtion_grid

0x4567,	// (0x000189e2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x60a2,	// (0x0001a51d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x60a2,	// (0x0001a51d) cell_fep_china_hwr2_fs_funtion_grid_g1

0x60b0,	// (0x0001a52b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x60b0,	// (0x0001a52b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0f,	// (0x0002418a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0f,	// (0x0002418a) cell_fep_china_hwr2_fs_funtion_grid_g

0xd005,	// (0x00021480) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd005,	// (0x00021480) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd01a,	// (0x00021495) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd01a,	// (0x00021495) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd14,	// (0x0002418f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd14,	// (0x0002418f) cell_fep_china_hwr2_fs_funtion_grid_t

0x60f7,	// (0x0001a572) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x60ff,	// (0x0001a57a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6107,	// (0x0001a582) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd19,	// (0x00024194) popup_fep_china_hwr2_fs_control_bar_grid_g

0x610f,	// (0x0001a58a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x610f,	// (0x0001a58a) cell_fep_china_hwr2_fs_candidate_grid

0x6128,	// (0x0001a5a3) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6130,	// (0x0001a5ab) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4567,	// (0x000189e2) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4567,	// (0x000189e2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb34,	// (0x00023faf) cell_fep_china_hwr2_fs_candidate_grid_g

0x6138,	// (0x0001a5b3) cell_fep_china_hwr2_fs_candidate_grid_t1

0x162e,	// (0x00015aa9) clock_nsta_pane_cp_24_ParamLimits

0x162e,	// (0x00015aa9) clock_nsta_pane_cp_24

0x16ac,	// (0x00015b27) indicator_nsta_pane_cp_24_ParamLimits

0x16ac,	// (0x00015b27) indicator_nsta_pane_cp_24

0x2832,	// (0x00016cad) heading_pane_g1

0x0001,

0xf8ab,	// (0x00023d26) heading_pane_g

0x3349,	// (0x000177c4) grid_sct_catagory_button_pane

0x3379,	// (0x000177f4) scroll_pane_cp5_ParamLimits

0x410d,	// (0x00018588) button_value_adjust_pane_cp5_ParamLimits

0x410d,	// (0x00018588) button_value_adjust_pane_cp5

0x4207,	// (0x00018682) form2_midp_time_pane_ParamLimits

0x6146,	// (0x0001a5c1) cell_sct_catagory_button_pane_ParamLimits

0x6146,	// (0x0001a5c1) cell_sct_catagory_button_pane

0x452c,	// (0x000189a7) bg_button_pane_cp01_ParamLimits

0x452c,	// (0x000189a7) bg_button_pane_cp01

0x4567,	// (0x000189e2) cell_sct_catagory_button_pane_g1

0x90a4,	// (0x0001d51f) popup_tb_extension_window

0xd036,	// (0x000214b1) aid_size_cell_ext_ParamLimits

0xd036,	// (0x000214b1) aid_size_cell_ext

0xc4a1,	// (0x0002091c) bg_tb_trans_pane_cp1_ParamLimits

0xc4a1,	// (0x0002091c) bg_tb_trans_pane_cp1

0xd05c,	// (0x000214d7) grid_tb_ext_pane_ParamLimits

0xd05c,	// (0x000214d7) grid_tb_ext_pane

0xd09b,	// (0x00021516) cell_tb_ext_pane_ParamLimits

0xd09b,	// (0x00021516) cell_tb_ext_pane

0xd0c3,	// (0x0002153e) cell_tb_ext_pane_g1_ParamLimits

0xd0c3,	// (0x0002153e) cell_tb_ext_pane_g1

0x61dc,	// (0x0001a657) cell_tb_ext_pane_t1

0xc325,	// (0x000207a0) list_highlight_pane_cp11_ParamLimits

0xc325,	// (0x000207a0) list_highlight_pane_cp11

0x86fb,	// (0x0001cb76) popup_uni_indicator_window_ParamLimits

0x86fb,	// (0x0001cb76) popup_uni_indicator_window

0xc60b,	// (0x00020a86) bg_popup_sub_pane_cp14

0xd0e0,	// (0x0002155b) list_uniindi_pane

0xd0ec,	// (0x00021567) uniindi_top_pane

0xc325,	// (0x000207a0) bg_uniindi_top_pane

0xd10b,	// (0x00021586) uniindi_top_pane_g1

0xd121,	// (0x0002159c) uniindi_top_pane_g2

0x0003,

0xfd20,	// (0x0002419b) uniindi_top_pane_g

0xd13e,	// (0x000215b9) uniindi_top_pane_t1

0x628d,	// (0x0001a708) list_single_uniindi_pane_ParamLimits

0x628d,	// (0x0001a708) list_single_uniindi_pane

0x4567,	// (0x000189e2) bg_uniindi_top_pane_g1

0x629f,	// (0x0001a71a) list_single_uniindi_pane_g1

0x62b2,	// (0x0001a72d) list_single_uniindi_pane_t1

0xe01a,	// (0x00022495) control_bg_pane

0x62d7,	// (0x0001a752) bg_sctrl_sk_pane_cp1

0x62e0,	// (0x0001a75b) bg_sctrl_sk_pane_cp2

0x62e9,	// (0x0001a764) control_bg_pane_g1

0x62f2,	// (0x0001a76d) control_bg_pane_g2

0x0001,

0xfd29,	// (0x000241a4) control_bg_pane_g

0x3f63,	// (0x000183de) cell_indicator_nsta_pane_g1_ParamLimits

0xbab1,	// (0x0001ff2c) cell_indicator_nsta_pane_g2_ParamLimits

0xfa98,	// (0x00023f13) cell_indicator_nsta_pane_g_ParamLimits

0x428f,	// (0x0001870a) form2_midp_time_pane_t1_ParamLimits

0xe8bb,	// (0x00022d36) main_idle_act4_pane_ParamLimits

0xe8bb,	// (0x00022d36) main_idle_act4_pane

0x90a4,	// (0x0001d51f) popup_tb_extension_window_ParamLimits

0xd081,	// (0x000214fc) tb_ext_find_pane_ParamLimits

0xd081,	// (0x000214fc) tb_ext_find_pane

0x62fb,	// (0x0001a776) ai_gene_pane_1_cp1

0x1329,	// (0x000157a4) ai_gene_pane_2_cp1

0xd168,	// (0x000215e3) list_single_idle_plugin_calendar_pane

0x630c,	// (0x0001a787) list_single_idle_plugin_notification_pane

0x6315,	// (0x0001a790) list_single_idle_plugin_player_pane

0xd171,	// (0x000215ec) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd171,	// (0x000215ec) list_single_idle_plugin_shortcut_pane

0xd199,	// (0x00021614) main_idle_act4_pane_t1

0xd1b0,	// (0x0002162b) main_idle_act4_pane_t2

0x0001,

0xfd2e,	// (0x000241a9) main_idle_act4_pane_t

0xd1c7,	// (0x00021642) middle_sk_idle_act4_pane_ParamLimits

0xd1c7,	// (0x00021642) middle_sk_idle_act4_pane

0xd1e3,	// (0x0002165e) popup_clock_digital_analogue_window_cp2

0xd20f,	// (0x0002168a) shortcut_wheel_idle_act4_pane_ParamLimits

0xd20f,	// (0x0002168a) shortcut_wheel_idle_act4_pane

0x4567,	// (0x000189e2) shortcut_wheel_idle_act4_pane_g1

0x4567,	// (0x000189e2) shortcut_wheel_idle_act4_pane_g2

0x4567,	// (0x000189e2) shortcut_wheel_idle_act4_pane_g3

0x4567,	// (0x000189e2) shortcut_wheel_idle_act4_pane_g4

0x4567,	// (0x000189e2) shortcut_wheel_idle_act4_pane_g5

0x63a8,	// (0x0001a823) shortcut_wheel_idle_act4_pane_g6

0x63b0,	// (0x0001a82b) shortcut_wheel_idle_act4_pane_g7

0x63b8,	// (0x0001a833) shortcut_wheel_idle_act4_pane_g8

0x63c0,	// (0x0001a83b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd33,	// (0x000241ae) shortcut_wheel_idle_act4_pane_g

0xc141,	// (0x000205bc) middle_sk_idle_act4_pane_g1_ParamLimits

0xc141,	// (0x000205bc) middle_sk_idle_act4_pane_g1

0xd28c,	// (0x00021707) middle_sk_idle_act4_pane_g2_ParamLimits

0xd28c,	// (0x00021707) middle_sk_idle_act4_pane_g2

0x0001,

0xfd56,	// (0x000241d1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd56,	// (0x000241d1) middle_sk_idle_act4_pane_g

0xd2a4,	// (0x0002171f) middle_sk_idle_act4_pane_t1_ParamLimits

0xd2a4,	// (0x0002171f) middle_sk_idle_act4_pane_t1

0xd2d3,	// (0x0002174e) grid_ai_shortcut_pane_ParamLimits

0xd2d3,	// (0x0002174e) grid_ai_shortcut_pane

0xd2f0,	// (0x0002176b) list_highlight_pane_cp16_ParamLimits

0xd2f0,	// (0x0002176b) list_highlight_pane_cp16

0xd2fd,	// (0x00021778) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd2fd,	// (0x00021778) list_single_idle_plugin_shortcut_pane_g1

0xd309,	// (0x00021784) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd309,	// (0x00021784) list_single_idle_plugin_shortcut_pane_g2

0xd325,	// (0x000217a0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd325,	// (0x000217a0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5b,	// (0x000241d6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5b,	// (0x000241d6) list_single_idle_plugin_shortcut_pane_g

0xd33a,	// (0x000217b5) cell_ai_shortcut_pane_ParamLimits

0xd33a,	// (0x000217b5) cell_ai_shortcut_pane

0xd350,	// (0x000217cb) cell_ai_shortcut_pane_g1_ParamLimits

0xd350,	// (0x000217cb) cell_ai_shortcut_pane_g1

0x62fb,	// (0x0001a776) ai_gene_pane_1_cp2

0x64f0,	// (0x0001a96b) ai_gene_pane_2_cp2

0x64f8,	// (0x0001a973) list_highlight_pane_cp15

0xd372,	// (0x000217ed) list_single_idle_plugin_calendar_pane_g1

0x64f8,	// (0x0001a973) list_highlight_pane_cp17

0x6509,	// (0x0001a984) list_single_idle_plugin_calendar_pane_g1_copy1

0x6511,	// (0x0001a98c) list_single_idle_plugin_player_pane_g1

0x35a2,	// (0x00017a1d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd62,	// (0x000241dd) list_single_idle_plugin_player_pane_g

0x6519,	// (0x0001a994) list_single_idle_plugin_player_pane_t1

0x6527,	// (0x0001a9a2) list_single_idle_plugin_player_pane_t2

0x6535,	// (0x0001a9b0) list_single_idle_plugin_player_pane_t3

0x6543,	// (0x0001a9be) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd67,	// (0x000241e2) list_single_idle_plugin_player_pane_t

0x6551,	// (0x0001a9cc) wait_bar_pane_cp15

0x6559,	// (0x0001a9d4) grid_ai_notification_pane

0x35a2,	// (0x00017a1d) list_single_idle_plugin_notification_pane_g1

0xd37a,	// (0x000217f5) cell_ai_notification_pane_ParamLimits

0xd37a,	// (0x000217f5) cell_ai_notification_pane

0x656f,	// (0x0001a9ea) cell_ai_notification_pane_g1

0x6577,	// (0x0001a9f2) cell_ai_notification_pane_t1

0xd387,	// (0x00021802) tb_ext_find_button_pane

0xd38f,	// (0x0002180a) tb_ext_find_pane_g1

0xd397,	// (0x00021812) tb_ext_find_pane_t1

0xe42b,	// (0x000228a6) tb_ext_find_button_pane_g1

0xd3a5,	// (0x00021820) tb_ext_find_button_pane_g2

0x0001,

0xfd70,	// (0x000241eb) tb_ext_find_button_pane_g

0xd199,	// (0x00021614) main_idle_act4_pane_t1_ParamLimits

0xd1b0,	// (0x0002162b) main_idle_act4_pane_t2_ParamLimits

0xfd2e,	// (0x000241a9) main_idle_act4_pane_t_ParamLimits

0xd1e3,	// (0x0002165e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd1fb,	// (0x00021676) sat_plugin_idle_act4_pane_ParamLimits

0xd1fb,	// (0x00021676) sat_plugin_idle_act4_pane

0xd3ae,	// (0x00021829) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd3ae,	// (0x00021829) sat_plugin_idle_act4_pane_t1

0xd3c6,	// (0x00021841) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd3c6,	// (0x00021841) sat_plugin_idle_act4_pane_t2

0xd3de,	// (0x00021859) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd3de,	// (0x00021859) sat_plugin_idle_act4_pane_t3

0xd3f6,	// (0x00021871) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd3f6,	// (0x00021871) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd75,	// (0x000241f0) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd75,	// (0x000241f0) sat_plugin_idle_act4_pane_t

0x8676,	// (0x0001caf1) popup_battery_window_ParamLimits

0x8676,	// (0x0001caf1) popup_battery_window

0xc325,	// (0x000207a0) bg_popup_sub_pane_cp25_ParamLimits

0xc325,	// (0x000207a0) bg_popup_sub_pane_cp25

0x65f8,	// (0x0001aa73) popup_battery_window_g1_ParamLimits

0x65f8,	// (0x0001aa73) popup_battery_window_g1

0x6604,	// (0x0001aa7f) popup_battery_window_t1_ParamLimits

0x6604,	// (0x0001aa7f) popup_battery_window_t1

0x6616,	// (0x0001aa91) popup_battery_window_t2_ParamLimits

0x6616,	// (0x0001aa91) popup_battery_window_t2

0x0001,

0xfd7e,	// (0x000241f9) popup_battery_window_t_ParamLimits

0xfd7e,	// (0x000241f9) popup_battery_window_t

0xaa46,	// (0x0001eec1) midp_canvas_pane_ParamLimits

0xaab8,	// (0x0001ef33) midp_keypad_pane_ParamLimits

0xaab8,	// (0x0001ef33) midp_keypad_pane

0x1506,	// (0x00015981) main_midp_pane_ParamLimits

0xbabe,	// (0x0001ff39) signal_pane_g2_cp_ParamLimits

0xd40e,	// (0x00021889) aid_size_cell_midp_keypad_ParamLimits

0xd40e,	// (0x00021889) aid_size_cell_midp_keypad

0xd42c,	// (0x000218a7) midp_keyp_game_grid_pane_ParamLimits

0xd42c,	// (0x000218a7) midp_keyp_game_grid_pane

0xd453,	// (0x000218ce) midp_keyp_rocker_pane_ParamLimits

0xd453,	// (0x000218ce) midp_keyp_rocker_pane

0xd4a4,	// (0x0002191f) midp_keyp_sk_left_pane_ParamLimits

0xd4a4,	// (0x0002191f) midp_keyp_sk_left_pane

0xd4f8,	// (0x00021973) midp_keyp_sk_right_pane_ParamLimits

0xd4f8,	// (0x00021973) midp_keyp_sk_right_pane

0xc171,	// (0x000205ec) bg_button_pane_cp03

0xd54c,	// (0x000219c7) midp_keyp_sk_left_pane_g1

0xc171,	// (0x000205ec) bg_button_pane_cp04

0xd54c,	// (0x000219c7) midp_keyp_sk_right_pane_g1

0x4567,	// (0x000189e2) midp_keyp_rocker_pane_g1

0xd555,	// (0x000219d0) keyp_game_cell_pane_ParamLimits

0xd555,	// (0x000219d0) keyp_game_cell_pane

0xc171,	// (0x000205ec) bg_button_pane_cp02

0xd579,	// (0x000219f4) keyp_game_cell_pane_g1

0x8696,	// (0x0001cb11) popup_fep_vkb2_window_ParamLimits

0x8696,	// (0x0001cb11) popup_fep_vkb2_window

0x94b8,	// (0x0001d933) aid_size_cell_vkb2_ParamLimits

0x94b8,	// (0x0001d933) aid_size_cell_vkb2

0x94f6,	// (0x0001d971) popup_fep_vkb2_window_g1_ParamLimits

0x94f6,	// (0x0001d971) popup_fep_vkb2_window_g1

0x9546,	// (0x0001d9c1) vkb2_area_bottom_pane_ParamLimits

0x9546,	// (0x0001d9c1) vkb2_area_bottom_pane

0x959a,	// (0x0001da15) vkb2_area_keypad_pane_ParamLimits

0x959a,	// (0x0001da15) vkb2_area_keypad_pane

0x95e2,	// (0x0001da5d) vkb2_area_top_pane_ParamLimits

0x95e2,	// (0x0001da5d) vkb2_area_top_pane

0x9668,	// (0x0001dae3) vkb2_top_entry_pane_ParamLimits

0x9668,	// (0x0001dae3) vkb2_top_entry_pane

0x9695,	// (0x0001db10) vkb2_top_grid_left_pane_ParamLimits

0x9695,	// (0x0001db10) vkb2_top_grid_left_pane

0x96b5,	// (0x0001db30) vkb2_top_grid_right_pane_ParamLimits

0x96b5,	// (0x0001db30) vkb2_top_grid_right_pane

0xf026,	// (0x000234a1) vkb2_cell_keypad_pane_ParamLimits

0xf026,	// (0x000234a1) vkb2_cell_keypad_pane

0x96fb,	// (0x0001db76) vkb2_area_bottom_grid_pane_ParamLimits

0x96fb,	// (0x0001db76) vkb2_area_bottom_grid_pane

0x9725,	// (0x0001dba0) vkb2_area_bottom_pane_g1_ParamLimits

0x9725,	// (0x0001dba0) vkb2_area_bottom_pane_g1

0x974b,	// (0x0001dbc6) vkb2_area_bottom_pane_g2_ParamLimits

0x974b,	// (0x0001dbc6) vkb2_area_bottom_pane_g2

0x977c,	// (0x0001dbf7) vkb2_area_bottom_pane_g3_ParamLimits

0x977c,	// (0x0001dbf7) vkb2_area_bottom_pane_g3

0x0002,

0xfd83,	// (0x000241fe) vkb2_area_bottom_pane_g_ParamLimits

0xfd83,	// (0x000241fe) vkb2_area_bottom_pane_g

0xf0d3,	// (0x0002354e) vkb2_top_cell_left_pane_ParamLimits

0xf0d3,	// (0x0002354e) vkb2_top_cell_left_pane

0xd582,	// (0x000219fd) vkb2_top_entry_pane_g1_ParamLimits

0xd582,	// (0x000219fd) vkb2_top_entry_pane_g1

0xd590,	// (0x00021a0b) vkb2_top_entry_pane_t1_ParamLimits

0xd590,	// (0x00021a0b) vkb2_top_entry_pane_t1

0x67c7,	// (0x0001ac42) vkb2_top_entry_pane_t2_ParamLimits

0x67c7,	// (0x0001ac42) vkb2_top_entry_pane_t2

0x67f9,	// (0x0001ac74) vkb2_top_entry_pane_t3_ParamLimits

0x67f9,	// (0x0001ac74) vkb2_top_entry_pane_t3

0x0002,

0xfd8a,	// (0x00024205) vkb2_top_entry_pane_t_ParamLimits

0xfd8a,	// (0x00024205) vkb2_top_entry_pane_t

0x97e6,	// (0x0001dc61) vkb2_top_grid_right_pane_g1_ParamLimits

0x97e6,	// (0x0001dc61) vkb2_top_grid_right_pane_g1

0xf120,	// (0x0002359b) vkb2_top_grid_right_pane_g2_ParamLimits

0xf120,	// (0x0002359b) vkb2_top_grid_right_pane_g2

0xf138,	// (0x000235b3) vkb2_top_grid_right_pane_g3_ParamLimits

0xf138,	// (0x000235b3) vkb2_top_grid_right_pane_g3

0x97fc,	// (0x0001dc77) vkb2_top_grid_right_pane_g4_ParamLimits

0x97fc,	// (0x0001dc77) vkb2_top_grid_right_pane_g4

0x0003,

0xfd91,	// (0x0002420c) vkb2_top_grid_right_pane_g_ParamLimits

0xfd91,	// (0x0002420c) vkb2_top_grid_right_pane_g

0xf150,	// (0x000235cb) vkb2_top_cell_left_pane_g1

0xf183,	// (0x000235fe) vkb2_cell_keypad_pane_g1_ParamLimits

0xf183,	// (0x000235fe) vkb2_cell_keypad_pane_g1

0x681d,	// (0x0001ac98) vkb2_cell_keypad_pane_t1_ParamLimits

0x681d,	// (0x0001ac98) vkb2_cell_keypad_pane_t1

0xf191,	// (0x0002360c) vkb2_cell_bottom_grid_pane_ParamLimits

0xf191,	// (0x0002360c) vkb2_cell_bottom_grid_pane

0xf1ca,	// (0x00023645) vkb2_cell_bottom_grid_pane_g1

0xd230,	// (0x000216ab) aid_call2_pane_cp02

0xd238,	// (0x000216b3) aid_call_pane_cp02

0xd240,	// (0x000216bb) clock_digital_number_pane_cp10

0xd248,	// (0x000216c3) clock_digital_number_pane_cp11

0xd250,	// (0x000216cb) clock_digital_number_pane_cp12

0xd258,	// (0x000216d3) clock_digital_number_pane_cp13

0xd260,	// (0x000216db) clock_digital_separator_pane_cp10

0xe42b,	// (0x000228a6) popup_clock_digital_analogue_window_cp2_g1

0xe42b,	// (0x000228a6) popup_clock_digital_analogue_window_cp2_g2

0xd268,	// (0x000216e3) popup_clock_digital_analogue_window_cp2_g3

0xe42b,	// (0x000228a6) popup_clock_digital_analogue_window_cp2_g4

0xd268,	// (0x000216e3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd46,	// (0x000241c1) popup_clock_digital_analogue_window_cp2_g

0xd270,	// (0x000216eb) popup_clock_digital_analogue_window_cp2_t1

0xd27e,	// (0x000216f9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd51,	// (0x000241cc) popup_clock_digital_analogue_window_cp2_t

0x4567,	// (0x000189e2) clock_digital_number_pane_cp10_g1

0x4567,	// (0x000189e2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb34,	// (0x00023faf) clock_digital_number_pane_cp10_g

0x4567,	// (0x000189e2) clock_digital_separator_pane_cp10_g1

0x4567,	// (0x000189e2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb34,	// (0x00023faf) clock_digital_separator_pane_cp10_g

0xd12d,	// (0x000215a8) uniindi_top_pane_g3

0x6256,	// (0x0001a6d1) uniindi_top_pane_g4

0xf0b1,	// (0x0002352c) vkb2_row_keypad_pane_ParamLimits

0xf0b1,	// (0x0002352c) vkb2_row_keypad_pane

0xf1e6,	// (0x00023661) vkb2_cell_t_keypad_pane_ParamLimits

0xf1e6,	// (0x00023661) vkb2_cell_t_keypad_pane

0xf1f6,	// (0x00023671) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf1f6,	// (0x00023671) vkb2_cell_t_keypad_pane_cp08

0xf209,	// (0x00023684) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf209,	// (0x00023684) vkb2_cell_t_keypad_pane_cp09

0xf21d,	// (0x00023698) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf21d,	// (0x00023698) vkb2_cell_t_keypad_pane_cp01

0xf22e,	// (0x000236a9) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf22e,	// (0x000236a9) vkb2_cell_t_keypad_pane_cp02

0xf23f,	// (0x000236ba) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf23f,	// (0x000236ba) vkb2_cell_t_keypad_pane_cp03

0xf250,	// (0x000236cb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf250,	// (0x000236cb) vkb2_cell_t_keypad_pane_cp04

0xf261,	// (0x000236dc) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf261,	// (0x000236dc) vkb2_cell_t_keypad_pane_cp05

0xf272,	// (0x000236ed) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf272,	// (0x000236ed) vkb2_cell_t_keypad_pane_cp06

0xf283,	// (0x000236fe) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf283,	// (0x000236fe) vkb2_cell_t_keypad_pane_cp07

0xf294,	// (0x0002370f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf294,	// (0x0002370f) vkb2_cell_t_keypad_pane_cp10

0xee27,	// (0x000232a2) vkb2_cell_t_keypad_pane_g1

0x6834,	// (0x0001acaf) vkb2_cell_t_keypad_pane_t1

0xe01a,	// (0x00022495) popup_grid_graphic2_window

0xd5c9,	// (0x00021a44) aid_size_cell_graphic2_ParamLimits

0xd5c9,	// (0x00021a44) aid_size_cell_graphic2

0xd607,	// (0x00021a82) bg_popup_window_pane_cp21_ParamLimits

0xd607,	// (0x00021a82) bg_popup_window_pane_cp21

0xd615,	// (0x00021a90) graphic2_pages_pane_ParamLimits

0xd615,	// (0x00021a90) graphic2_pages_pane

0xd66b,	// (0x00021ae6) grid_graphic2_control_pane_ParamLimits

0xd66b,	// (0x00021ae6) grid_graphic2_control_pane

0xd6b3,	// (0x00021b2e) grid_graphic2_pane_ParamLimits

0xd6b3,	// (0x00021b2e) grid_graphic2_pane

0xd73a,	// (0x00021bb5) cell_graphic2_pane

0xe01a,	// (0x00022495) main_comp_mode_pane

0x5a34,	// (0x00019eaf) list_ai3_gene_pane_ParamLimits

0xcee4,	// (0x0002135f) bg_popup_window_pane_cp19_ParamLimits

0x5e90,	// (0x0001a30b) bg_touch_area_indi_pane_ParamLimits

0x5e90,	// (0x0001a30b) bg_touch_area_indi_pane

0x5ea6,	// (0x0001a321) bg_touch_area_indi_pane_cp01_ParamLimits

0x5ea6,	// (0x0001a321) bg_touch_area_indi_pane_cp01

0x5ebc,	// (0x0001a337) bg_touch_area_indi_pane_cp02_ParamLimits

0x5ebc,	// (0x0001a337) bg_touch_area_indi_pane_cp02

0x5ed2,	// (0x0001a34d) bg_touch_area_indi_pane_cp03_ParamLimits

0x5ed2,	// (0x0001a34d) bg_touch_area_indi_pane_cp03

0x5eec,	// (0x0001a367) popup_slider_window_g1_ParamLimits

0x5f08,	// (0x0001a383) popup_slider_window_g2_ParamLimits

0x5f24,	// (0x0001a39f) popup_slider_window_g3_ParamLimits

0xfcdb,	// (0x00024156) popup_slider_window_g_ParamLimits

0x5f8a,	// (0x0001a405) popup_slider_window_t1_ParamLimits

0x5ffe,	// (0x0001a479) small_volume_slider_vertical_pane_ParamLimits

0xd73a,	// (0x00021bb5) cell_graphic2_pane_ParamLimits

0xd795,	// (0x00021c10) bg_button_pane_cp10_ParamLimits

0xd795,	// (0x00021c10) bg_button_pane_cp10

0xd7a8,	// (0x00021c23) bg_button_pane_cp11_ParamLimits

0xd7a8,	// (0x00021c23) bg_button_pane_cp11

0xd7bb,	// (0x00021c36) graphic2_pages_pane_g1_ParamLimits

0xd7bb,	// (0x00021c36) graphic2_pages_pane_g1

0xd7d6,	// (0x00021c51) graphic2_pages_pane_g2_ParamLimits

0xd7d6,	// (0x00021c51) graphic2_pages_pane_g2

0x0001,

0xfd9f,	// (0x0002421a) graphic2_pages_pane_g_ParamLimits

0xfd9f,	// (0x0002421a) graphic2_pages_pane_g

0xd7ee,	// (0x00021c69) graphic2_pages_pane_t1_ParamLimits

0xd7ee,	// (0x00021c69) graphic2_pages_pane_t1

0xd806,	// (0x00021c81) cell_graphic2_control_pane_ParamLimits

0xd806,	// (0x00021c81) cell_graphic2_control_pane

0xd838,	// (0x00021cb3) cell_graphic2_pane_g1_ParamLimits

0xd838,	// (0x00021cb3) cell_graphic2_pane_g1

0xc14f,	// (0x000205ca) cell_graphic2_pane_g2_ParamLimits

0xc14f,	// (0x000205ca) cell_graphic2_pane_g2

0xc94b,	// (0x00020dc6) cell_graphic2_pane_g3_ParamLimits

0xc94b,	// (0x00020dc6) cell_graphic2_pane_g3

0xc15c,	// (0x000205d7) cell_graphic2_pane_g4_ParamLimits

0xc15c,	// (0x000205d7) cell_graphic2_pane_g4

0xd845,	// (0x00021cc0) cell_graphic2_pane_g5_ParamLimits

0xd845,	// (0x00021cc0) cell_graphic2_pane_g5

0x0004,

0xfda4,	// (0x0002421f) cell_graphic2_pane_g_ParamLimits

0xfda4,	// (0x0002421f) cell_graphic2_pane_g

0xd865,	// (0x00021ce0) cell_graphic2_pane_t1_ParamLimits

0xd865,	// (0x00021ce0) cell_graphic2_pane_t1

0x2826,	// (0x00016ca1) grid_highlight_pane_cp11_ParamLimits

0x2826,	// (0x00016ca1) grid_highlight_pane_cp11

0xc325,	// (0x000207a0) bg_button_pane_cp05

0xd8b1,	// (0x00021d2c) cell_graphic2_control_pane_g1

0x4567,	// (0x000189e2) bg_touch_area_indi_pane_g1

0x6b10,	// (0x0001af8b) aid_cmod_rocker_key_size

0x6b1a,	// (0x0001af95) aid_cmode_itu_key_size

0x6b24,	// (0x0001af9f) main_cmode_video_pane

0x6b2e,	// (0x0001afa9) main_comp_mode_itu_pane

0x6b3a,	// (0x0001afb5) main_comp_mode_rocker_pane

0x6b46,	// (0x0001afc1) cell_cmode_rocker_pane_ParamLimits

0x6b46,	// (0x0001afc1) cell_cmode_rocker_pane

0x6b58,	// (0x0001afd3) cell_cmode_itu_pane_ParamLimits

0x6b58,	// (0x0001afd3) cell_cmode_itu_pane

0xc60b,	// (0x00020a86) bg_button_pane_cp06_ParamLimits

0xc60b,	// (0x00020a86) bg_button_pane_cp06

0x47d7,	// (0x00018c52) cell_cmode_rocker_pane_g1_ParamLimits

0x47d7,	// (0x00018c52) cell_cmode_rocker_pane_g1

0x60a2,	// (0x0001a51d) cell_cmode_rocker_pane_g2_ParamLimits

0x60a2,	// (0x0001a51d) cell_cmode_rocker_pane_g2

0x0001,

0xfdb4,	// (0x0002422f) cell_cmode_rocker_pane_g_ParamLimits

0xfdb4,	// (0x0002422f) cell_cmode_rocker_pane_g

0xc171,	// (0x000205ec) bg_button_pane_cp07

0x6b6d,	// (0x0001afe8) cell_cmode_itu_pane_g1

0x6b76,	// (0x0001aff1) cell_cmode_itu_pane_t1

0x6b84,	// (0x0001afff) cell_cmode_itu_pane_t2

0x0001,

0xfdb9,	// (0x00024234) cell_cmode_itu_pane_t

0x62c7,	// (0x0001a742) aid_touch_ctrl_left

0x62cf,	// (0x0001a74a) aid_touch_ctrl_right

0xc171,	// (0x000205ec) compa_mode_pane

0xd8d7,	// (0x00021d52) aid_cmod_rocker_key_size_cp

0xd8e1,	// (0x00021d5c) aid_cmode_itu_key_size_cp

0x6ba6,	// (0x0001b021) compa_mode_pane_g1

0x6bae,	// (0x0001b029) compa_mode_pane_g2

0x6bb6,	// (0x0001b031) compa_mode_pane_g3

0x0002,

0xfdbe,	// (0x00024239) compa_mode_pane_g

0xd8eb,	// (0x00021d66) main_comp_mode_itu_pane_cp

0xd8f3,	// (0x00021d6e) main_comp_mode_rocker_pane_cp

0xd8fb,	// (0x00021d76) cell_cmode_itu_pane_cp_ParamLimits

0xd8fb,	// (0x00021d76) cell_cmode_itu_pane_cp

0xd910,	// (0x00021d8b) cell_cmode_rocker_pane_cp_ParamLimits

0xd910,	// (0x00021d8b) cell_cmode_rocker_pane_cp

0xc60b,	// (0x00020a86) bg_button_pane_cp06_cp_ParamLimits

0xc60b,	// (0x00020a86) bg_button_pane_cp06_cp

0x47d7,	// (0x00018c52) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x47d7,	// (0x00018c52) cell_cmode_rocker_pane_g1_cp

0x4567,	// (0x000189e2) cell_cmode_rocker_pane_g2_cp

0xc171,	// (0x000205ec) bg_button_pane_cp07_cp

0xd922,	// (0x00021d9d) cell_cmode_itu_pane_g1_cp

0xd92b,	// (0x00021da6) cell_cmode_itu_pane_t1_cp

0xd92b,	// (0x00021da6) cell_cmode_itu_pane_t2_cp

0xb809,	// (0x0001fc84) settings_code_pane_cp2

0xc1e1,	// (0x0002065c) bg_popup_window_pane_cp3_ParamLimits

0xc43e,	// (0x000208b9) heading_pane_cp3_ParamLimits

0xc44a,	// (0x000208c5) listscroll_popup_graphic_pane_ParamLimits

0xec47,	// (0x000230c2) fep_hwr_aid_pane_ParamLimits

0xefb2,	// (0x0002342d) aid_touch_sctrl_top_ParamLimits

0xefcd,	// (0x00023448) sctrl_sk_top_pane_g1_ParamLimits

0xee27,	// (0x000232a2) sctrl_sk_top_pane_g2_ParamLimits

0xfcf4,	// (0x0002416f) sctrl_sk_top_pane_g_ParamLimits

0xefda,	// (0x00023455) sctrl_sk_top_pane_t1_ParamLimits

0xefb2,	// (0x0002342d) aid_touch_sctrl_bottom_ParamLimits

0xefda,	// (0x00023455) sctrl_sk_bottom_pane_t1_ParamLimits

0xd0f9,	// (0x00021574) aid_area_touch_clock

0x962a,	// (0x0001daa5) aid_vkb2_area_top_pane_cell_ParamLimits

0x962a,	// (0x0001daa5) aid_vkb2_area_top_pane_cell

0x96d5,	// (0x0001db50) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x96d5,	// (0x0001db50) aid_vkb2_area_bottom_pane_cell

0x677f,	// (0x0001abfa) popup_char_count_window

0x6c0c,	// (0x0001b087) popup_char_count_window_g1

0x6c15,	// (0x0001b090) popup_char_count_window_g2

0x6c1e,	// (0x0001b099) popup_char_count_window_g3

0x0002,

0xfdc5,	// (0x00024240) popup_char_count_window_g

0x6c27,	// (0x0001b0a2) popup_char_count_window_t1

0xf00c,	// (0x00023487) popup_fep_char_preview_window_ParamLimits

0xf00c,	// (0x00023487) popup_fep_char_preview_window

0x964a,	// (0x0001dac5) vkb2_top_candi_pane_ParamLimits

0x964a,	// (0x0001dac5) vkb2_top_candi_pane

0xd939,	// (0x00021db4) cell_vkb2_top_candi_pane_ParamLimits

0xd939,	// (0x00021db4) cell_vkb2_top_candi_pane

0xf2a9,	// (0x00023724) bg_popup_fep_char_preview_window_ParamLimits

0xf2a9,	// (0x00023724) bg_popup_fep_char_preview_window

0xf2b7,	// (0x00023732) popup_fep_char_preview_window_t1_ParamLimits

0xf2b7,	// (0x00023732) popup_fep_char_preview_window_t1

0x6c82,	// (0x0001b0fd) bg_popup_fep_char_preview_window_g1

0x6c8a,	// (0x0001b105) bg_popup_fep_char_preview_window_g2

0x6c92,	// (0x0001b10d) bg_popup_fep_char_preview_window_g3

0x6c9a,	// (0x0001b115) bg_popup_fep_char_preview_window_g4

0x6ca2,	// (0x0001b11d) bg_popup_fep_char_preview_window_g5

0xf2f1,	// (0x0002376c) bg_popup_fep_char_preview_window_g6

0x6caa,	// (0x0001b125) bg_popup_fep_char_preview_window_g7

0x6cb2,	// (0x0001b12d) bg_popup_fep_char_preview_window_g8

0x6cba,	// (0x0001b135) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcc,	// (0x00024247) bg_popup_fep_char_preview_window_g

0xee27,	// (0x000232a2) cell_vkb2_top_candi_pane_g1_ParamLimits

0xee27,	// (0x000232a2) cell_vkb2_top_candi_pane_g1

0xee35,	// (0x000232b0) cell_vkb2_top_candi_pane_g2_ParamLimits

0xee35,	// (0x000232b0) cell_vkb2_top_candi_pane_g2

0x5bcb,	// (0x0001a046) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5bcb,	// (0x0001a046) cell_vkb2_top_candi_pane_g3

0xf2f9,	// (0x00023774) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf2f9,	// (0x00023774) cell_vkb2_top_candi_pane_g4

0x4e88,	// (0x00019303) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4e88,	// (0x00019303) cell_vkb2_top_candi_pane_g5

0xf175,	// (0x000235f0) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf175,	// (0x000235f0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddf,	// (0x0002425a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddf,	// (0x0002425a) cell_vkb2_top_candi_pane_g

0xf31a,	// (0x00023795) cell_vkb2_top_candi_pane_t1

0x92cd,	// (0x0001d748) aid_size_touch_slider_mark_ParamLimits

0x92cd,	// (0x0001d748) aid_size_touch_slider_mark

0xd651,	// (0x00021acc) grid_graphic2_catg_pane_ParamLimits

0xd651,	// (0x00021acc) grid_graphic2_catg_pane

0xd70d,	// (0x00021b88) popup_grid_graphic2_window_t1_ParamLimits

0xd70d,	// (0x00021b88) popup_grid_graphic2_window_t1

0xd723,	// (0x00021b9e) popup_grid_graphic2_window_t2_ParamLimits

0xd723,	// (0x00021b9e) popup_grid_graphic2_window_t2

0x0001,

0xfd9a,	// (0x00024215) popup_grid_graphic2_window_t_ParamLimits

0xfd9a,	// (0x00024215) popup_grid_graphic2_window_t

0xc325,	// (0x000207a0) bg_button_pane_cp05_ParamLimits

0xd8b1,	// (0x00021d2c) cell_graphic2_control_pane_g1_ParamLimits

0xd99f,	// (0x00021e1a) cell_graphic2_catg_pane_ParamLimits

0xd99f,	// (0x00021e1a) cell_graphic2_catg_pane

0xc171,	// (0x000205ec) bg_button_pane_cp12

0xd9b1,	// (0x00021e2c) cell_graphic2_catg_pane_g1

0x61dc,	// (0x0001a657) cell_tb_ext_pane_t1_ParamLimits

0xf0f3,	// (0x0002356e) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf0f3,	// (0x0002356e) vkb2_top_cell_right_narrow_pane

0xf10b,	// (0x00023586) vkb2_top_cell_right_wide_pane_ParamLimits

0xf10b,	// (0x00023586) vkb2_top_cell_right_wide_pane

0xe8bb,	// (0x00022d36) bg_vkb2_func_pane_ParamLimits

0xe8bb,	// (0x00022d36) bg_vkb2_func_pane

0xf150,	// (0x000235cb) vkb2_top_cell_left_pane_g1_ParamLimits

0xe8bb,	// (0x00022d36) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe8bb,	// (0x00022d36) bg_vkb2_fuc_pane_cp03

0xf1ca,	// (0x00023645) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1a5f,	// (0x00015eda) bg_vkb2_func_pane_g1

0x1a67,	// (0x00015ee2) bg_vkb2_func_pane_g2

0x1a77,	// (0x00015ef2) bg_vkb2_func_pane_g3

0x1a6f,	// (0x00015eea) bg_vkb2_func_pane_g4

0x1a7f,	// (0x00015efa) bg_vkb2_func_pane_g5

0x1a87,	// (0x00015f02) bg_vkb2_func_pane_g6

0x1a8f,	// (0x00015f0a) bg_vkb2_func_pane_g7

0x1a97,	// (0x00015f12) bg_vkb2_func_pane_g8

0x1a57,	// (0x00015ed2) bg_vkb2_func_pane_g9

0x0008,

0xfdec,	// (0x00024267) bg_vkb2_func_pane_g

0xe8bb,	// (0x00022d36) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe8bb,	// (0x00022d36) bg_vkb2_fuc_pane_cp01

0xf150,	// (0x000235cb) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf150,	// (0x000235cb) vkb2_top_cell_right_wide_pane_g1

0xe8bb,	// (0x00022d36) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe8bb,	// (0x00022d36) bg_vkb2_fuc_pane_cp02

0xf1ca,	// (0x00023645) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf1ca,	// (0x00023645) vkb2_top_cell_right_narrow_pane_g1

0xce26,	// (0x000212a1) aid_touch_area_decrease_ParamLimits

0xce26,	// (0x000212a1) aid_touch_area_decrease

0xce60,	// (0x000212db) aid_touch_area_increase_ParamLimits

0xce60,	// (0x000212db) aid_touch_area_increase

0xce88,	// (0x00021303) aid_touch_area_mute_ParamLimits

0xce88,	// (0x00021303) aid_touch_area_mute

0xceb0,	// (0x0002132b) aid_touch_area_slider_ParamLimits

0xceb0,	// (0x0002132b) aid_touch_area_slider

0xcef0,	// (0x0002136b) popup_slider_window_g4_ParamLimits

0xcef0,	// (0x0002136b) popup_slider_window_g4

0xcf18,	// (0x00021393) popup_slider_window_g5_ParamLimits

0xcf18,	// (0x00021393) popup_slider_window_g5

0xcf4c,	// (0x000213c7) popup_slider_window_g6_ParamLimits

0xcf4c,	// (0x000213c7) popup_slider_window_g6

0x5fb8,	// (0x0001a433) popup_slider_window_t2_ParamLimits

0x5fb8,	// (0x0001a433) popup_slider_window_t2

0x0001,

0xfce8,	// (0x00024163) popup_slider_window_t_ParamLimits

0xfce8,	// (0x00024163) popup_slider_window_t

0xcf68,	// (0x000213e3) slider_pane_ParamLimits

0xcf68,	// (0x000213e3) slider_pane

0x6cdd,	// (0x0001b158) slider_pane_g1_ParamLimits

0x6cdd,	// (0x0001b158) slider_pane_g1

0x6cf1,	// (0x0001b16c) slider_pane_g2_ParamLimits

0x6cf1,	// (0x0001b16c) slider_pane_g2

0x6d07,	// (0x0001b182) slider_pane_g3_ParamLimits

0x6d07,	// (0x0001b182) slider_pane_g3

0x0003,

0xfdff,	// (0x0002427a) slider_pane_g_ParamLimits

0xfdff,	// (0x0002427a) slider_pane_g

0x90ec,	// (0x0001d567) popup_tb_float_extension_window_ParamLimits

0x90ec,	// (0x0001d567) popup_tb_float_extension_window

0x6d33,	// (0x0001b1ae) aid_size_cell_tb_float_ext

0xc171,	// (0x000205ec) bg_popup_sub_window_cp28

0xd9ba,	// (0x00021e35) grid_tb_float_ext_pane

0xd9c4,	// (0x00021e3f) cell_tb_float_ext_pane_ParamLimits

0xd9c4,	// (0x00021e3f) cell_tb_float_ext_pane

0xd9de,	// (0x00021e59) cell_tb_float_ext_pane_g1

0xd9e7,	// (0x00021e62) grid_highlight_pane_cp12

0x93c0,	// (0x0001d83b) cell_last_hwr_side_pane_ParamLimits

0x93c0,	// (0x0001d83b) cell_last_hwr_side_pane

0x4567,	// (0x000189e2) cell_last_hwr_side_pane_g1

0x6d75,	// (0x0001b1f0) cell_last_hwr_side_pane_g2

0x0001,

0xfe08,	// (0x00024283) cell_last_hwr_side_pane_g

0x97b1,	// (0x0001dc2c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x97b1,	// (0x0001dc2c) vkb2_area_bottom_space_btn_pane

0xee27,	// (0x000232a2) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6834,	// (0x0001acaf) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf31a,	// (0x00023795) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf339,	// (0x000237b4) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf339,	// (0x000237b4) vkb2_area_bottom_space_btn_pane_g1

0xf373,	// (0x000237ee) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf373,	// (0x000237ee) vkb2_area_bottom_space_btn_pane_g2

0xf3a9,	// (0x00023824) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf3a9,	// (0x00023824) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0d,	// (0x00024288) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0d,	// (0x00024288) vkb2_area_bottom_space_btn_pane_g

0xecfc,	// (0x00023177) cel_fep_hwr_func_pane_ParamLimits

0xecfc,	// (0x00023177) cel_fep_hwr_func_pane

0x9395,	// (0x0001d810) cell_hwr_side_button_pane_ParamLimits

0x9395,	// (0x0001d810) cell_hwr_side_button_pane

0xd0f9,	// (0x00021574) aid_area_touch_clock_ParamLimits

0xc325,	// (0x000207a0) bg_uniindi_top_pane_ParamLimits

0xd10b,	// (0x00021586) uniindi_top_pane_g1_ParamLimits

0xd121,	// (0x0002159c) uniindi_top_pane_g2_ParamLimits

0xd12d,	// (0x000215a8) uniindi_top_pane_g3_ParamLimits

0x6256,	// (0x0001a6d1) uniindi_top_pane_g4_ParamLimits

0xfd20,	// (0x0002419b) uniindi_top_pane_g_ParamLimits

0xd13e,	// (0x000215b9) uniindi_top_pane_t1_ParamLimits

0xc325,	// (0x000207a0) bg_vkb2_func_pane_cp01_ParamLimits

0xc325,	// (0x000207a0) bg_vkb2_func_pane_cp01

0x6d7e,	// (0x0001b1f9) cel_fep_hwr_func_pane_g1_ParamLimits

0x6d7e,	// (0x0001b1f9) cel_fep_hwr_func_pane_g1

0xc325,	// (0x000207a0) bg_vkb2_func_pane_cp02_ParamLimits

0xc325,	// (0x000207a0) bg_vkb2_func_pane_cp02

0x6d7e,	// (0x0001b1f9) cell_hwr_side_button_pane_g1_ParamLimits

0x6d7e,	// (0x0001b1f9) cell_hwr_side_button_pane_g1

0x18b9,	// (0x00015d34) status_pane_g4_ParamLimits

0x18b9,	// (0x00015d34) status_pane_g4

0x18d3,	// (0x00015d4e) status_pane_t1

0x42a2,	// (0x0001871d) form2_midp_gauge_slider_cont_pane

0x42aa,	// (0x00018725) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbc1c,	// (0x00020097) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbc2e,	// (0x000200a9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae7,	// (0x00023f62) form2_midp_gauge_slider_pane_t_ParamLimits

0x42e0,	// (0x0001875b) form2_midp_slider_pane_ParamLimits

0xeffe,	// (0x00023479) aid_size_cell_func_vkb2_ParamLimits

0xeffe,	// (0x00023479) aid_size_cell_func_vkb2

0x6d1f,	// (0x0001b19a) slider_pane_g4_ParamLimits

0x6d1f,	// (0x0001b19a) slider_pane_g4

0x9812,	// (0x0001dc8d) form2_midp_gauge_slider_pane_t2_cp01

0x9820,	// (0x0001dc9b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9820,	// (0x0001dc9b) form2_midp_gauge_slider_pane_t3_cp01

0xf3f3,	// (0x0002386e) form2_midp_slider_pane_cp01

0xc171,	// (0x000205ec) navi_smil_pane

0x6db7,	// (0x0001b232) navi_smil_pane_g1

0x6dbf,	// (0x0001b23a) navi_smil_pane_t1

0x6d8c,	// (0x0001b207) form2_midp_slider_pane_g1

0x6d95,	// (0x0001b210) form2_midp_slider_pane_g2

0x6d9d,	// (0x0001b218) form2_midp_slider_pane_g3

0x6d8c,	// (0x0001b207) form2_midp_slider_pane_g4

0xd9f0,	// (0x00021e6b) form2_midp_slider_pane_g5

0x0004,

0xfe16,	// (0x00024291) form2_midp_slider_pane_g

0xf3e3,	// (0x0002385e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf3e3,	// (0x0002385e) vkb2_area_bottom_space_btn_pane_g4

0xad3f,	// (0x0001f1ba) lc0_navi_pane_ParamLimits

0xad3f,	// (0x0001f1ba) lc0_navi_pane

0xada9,	// (0x0001f224) lc0_stat_indi_pane_ParamLimits

0xada9,	// (0x0001f224) lc0_stat_indi_pane

0xadbe,	// (0x0001f239) ls0_title_pane_ParamLimits

0xadbe,	// (0x0001f239) ls0_title_pane

0xc60b,	// (0x00020a86) bg_popup_sub_pane_cp14_ParamLimits

0xd0e0,	// (0x0002155b) list_uniindi_pane_ParamLimits

0xd0ec,	// (0x00021567) uniindi_top_pane_ParamLimits

0x629f,	// (0x0001a71a) list_single_uniindi_pane_g1_ParamLimits

0x62b2,	// (0x0001a72d) list_single_uniindi_pane_t1_ParamLimits

0x983d,	// (0x0001dcb8) lc0_stat_clock_pane_ParamLimits

0x983d,	// (0x0001dcb8) lc0_stat_clock_pane

0xd9fb,	// (0x00021e76) lc0_stat_indi_pane_g1_ParamLimits

0xd9fb,	// (0x00021e76) lc0_stat_indi_pane_g1

0xda08,	// (0x00021e83) lc0_stat_indi_pane_g2_ParamLimits

0xda08,	// (0x00021e83) lc0_stat_indi_pane_g2

0x0001,

0xfe21,	// (0x0002429c) lc0_stat_indi_pane_g_ParamLimits

0xfe21,	// (0x0002429c) lc0_stat_indi_pane_g

0x984d,	// (0x0001dcc8) lc0_uni_indicator_pane_ParamLimits

0x984d,	// (0x0001dcc8) lc0_uni_indicator_pane

0xda15,	// (0x00021e90) ls0_title_pane_g1_ParamLimits

0xda15,	// (0x00021e90) ls0_title_pane_g1

0xda29,	// (0x00021ea4) ls0_title_pane_t1_ParamLimits

0xda29,	// (0x00021ea4) ls0_title_pane_t1

0x985d,	// (0x0001dcd8) lc0_uni_indicator_pane_g1_ParamLimits

0x985d,	// (0x0001dcd8) lc0_uni_indicator_pane_g1

0x6e31,	// (0x0001b2ac) lc0_stat_clock_pane_t1

0xe01a,	// (0x00022495) main_ai5_pane

0x6e3f,	// (0x0001b2ba) ai5_sk_pane_ParamLimits

0x6e3f,	// (0x0001b2ba) ai5_sk_pane

0xda57,	// (0x00021ed2) cell_ai5_widget_pane_ParamLimits

0xda57,	// (0x00021ed2) cell_ai5_widget_pane

0x6f07,	// (0x0001b382) aid_size_cell_widget_grid

0x6f15,	// (0x0001b390) bg_ai5_widget_pane_ParamLimits

0x6f15,	// (0x0001b390) bg_ai5_widget_pane

0x6f8d,	// (0x0001b408) cell_ai5_widget_pane_g2

0x6fa1,	// (0x0001b41c) cell_ai5_widget_pane_g3

0x6fbb,	// (0x0001b436) cell_ai5_widget_pane_g4

0x6fcb,	// (0x0001b446) cell_ai5_widget_pane_g5

0x6fdb,	// (0x0001b456) cell_ai5_widget_pane_g6

0x6fe7,	// (0x0001b462) cell_ai5_widget_pane_g7

0x702f,	// (0x0001b4aa) cell_ai5_widget_pane_t1_ParamLimits

0x702f,	// (0x0001b4aa) cell_ai5_widget_pane_t1

0x704c,	// (0x0001b4c7) cell_ai5_widget_pane_t2_ParamLimits

0x704c,	// (0x0001b4c7) cell_ai5_widget_pane_t2

0x7064,	// (0x0001b4df) cell_ai5_widget_pane_t3_ParamLimits

0x7064,	// (0x0001b4df) cell_ai5_widget_pane_t3

0x707c,	// (0x0001b4f7) cell_ai5_widget_pane_t4_ParamLimits

0x707c,	// (0x0001b4f7) cell_ai5_widget_pane_t4

0x70a2,	// (0x0001b51d) cell_ai5_widget_pane_t5_ParamLimits

0x70a2,	// (0x0001b51d) cell_ai5_widget_pane_t5

0x70c2,	// (0x0001b53d) cell_ai5_widget_pane_t6_ParamLimits

0x70c2,	// (0x0001b53d) cell_ai5_widget_pane_t6

0x70d4,	// (0x0001b54f) cell_ai5_widget_pane_t7_ParamLimits

0x70d4,	// (0x0001b54f) cell_ai5_widget_pane_t7

0x70ed,	// (0x0001b568) cell_ai5_widget_pane_t8_ParamLimits

0x70ed,	// (0x0001b568) cell_ai5_widget_pane_t8

0x0009,

0xfe3b,	// (0x000242b6) cell_ai5_widget_pane_t_ParamLimits

0xfe3b,	// (0x000242b6) cell_ai5_widget_pane_t

0x714c,	// (0x0001b5c7) grid_ai5_widget_pane

0xc60b,	// (0x00020a86) highlight_cell_ai5_widget_pane_ParamLimits

0xc60b,	// (0x00020a86) highlight_cell_ai5_widget_pane

0xdabd,	// (0x00021f38) ai5_sk_left_pane

0xdac7,	// (0x00021f42) ai5_sk_middle_pane

0xdad1,	// (0x00021f4c) ai5_sk_right_pane

0x7178,	// (0x0001b5f3) bg_ai5_widget_pane_g1_ParamLimits

0x7178,	// (0x0001b5f3) bg_ai5_widget_pane_g1

0x7184,	// (0x0001b5ff) bg_ai5_widget_pane_g2_ParamLimits

0x7184,	// (0x0001b5ff) bg_ai5_widget_pane_g2

0x7190,	// (0x0001b60b) bg_ai5_widget_pane_g3_ParamLimits

0x7190,	// (0x0001b60b) bg_ai5_widget_pane_g3

0x719c,	// (0x0001b617) bg_ai5_widget_pane_g4_ParamLimits

0x719c,	// (0x0001b617) bg_ai5_widget_pane_g4

0x71a8,	// (0x0001b623) bg_ai5_widget_pane_g5_ParamLimits

0x71a8,	// (0x0001b623) bg_ai5_widget_pane_g5

0x71b4,	// (0x0001b62f) bg_ai5_widget_pane_g6_ParamLimits

0x71b4,	// (0x0001b62f) bg_ai5_widget_pane_g6

0x71c0,	// (0x0001b63b) bg_ai5_widget_pane_g7_ParamLimits

0x71c0,	// (0x0001b63b) bg_ai5_widget_pane_g7

0x71cc,	// (0x0001b647) bg_ai5_widget_pane_g8_ParamLimits

0x71cc,	// (0x0001b647) bg_ai5_widget_pane_g8

0x71d8,	// (0x0001b653) bg_ai5_widget_pane_g9_ParamLimits

0x71d8,	// (0x0001b653) bg_ai5_widget_pane_g9

0x0008,

0xfe50,	// (0x000242cb) bg_ai5_widget_pane_g_ParamLimits

0xfe50,	// (0x000242cb) bg_ai5_widget_pane_g

0x720a,	// (0x0001b685) cell_shortcut_ai5_widget_pane_ParamLimits

0x720a,	// (0x0001b685) cell_shortcut_ai5_widget_pane

0x11de,	// (0x00015659) bg_cell_shortcut_ai5_widget_pane

0x721b,	// (0x0001b696) cell_grid_ai5_widget_pane_g1

0x11de,	// (0x00015659) highlight_cell_shortcut_ai5_widget_pane

0x1a5f,	// (0x00015eda) ai5_sk_left_pane_g1

0x7224,	// (0x0001b69f) ai5_sk_left_pane_g2

0x722c,	// (0x0001b6a7) ai5_sk_left_pane_g3

0x7234,	// (0x0001b6af) ai5_sk_left_pane_g4

0x0003,

0xfe63,	// (0x000242de) ai5_sk_left_pane_g

0x723c,	// (0x0001b6b7) ai5_sk_left_pane_t1

0x1a67,	// (0x00015ee2) ai5_sk_right_pane_g1

0x724a,	// (0x0001b6c5) ai5_sk_right_pane_g2

0x7252,	// (0x0001b6cd) ai5_sk_right_pane_g3

0x725a,	// (0x0001b6d5) ai5_sk_right_pane_g4

0x0003,

0xfe6c,	// (0x000242e7) ai5_sk_right_pane_g

0x7262,	// (0x0001b6dd) ai5_sk_right_pane_t1

0x1a67,	// (0x00015ee2) ai5_sk_middle_pane_g1

0x1a5f,	// (0x00015eda) ai5_sk_middle_pane_g2

0x1a7f,	// (0x00015efa) ai5_sk_middle_pane_g3

0x7252,	// (0x0001b6cd) ai5_sk_middle_pane_g4

0x722c,	// (0x0001b6a7) ai5_sk_middle_pane_g5

0x7270,	// (0x0001b6eb) ai5_sk_middle_pane_g6

0xdadb,	// (0x00021f56) ai5_sk_middle_pane_g7

0x0006,

0xfe75,	// (0x000242f0) ai5_sk_middle_pane_g

0xac2b,	// (0x0001f0a6) aid_touch_area_size_lc0_ParamLimits

0xac2b,	// (0x0001f0a6) aid_touch_area_size_lc0

0xee56,	// (0x000232d1) cell_hwr_candidate_pane_t1_ParamLimits

0x158a,	// (0x00015a05) aid_touch_navi_pane

0xaeb7,	// (0x0001f332) status_dt_navi_pane_ParamLimits

0xaeb7,	// (0x0001f332) status_dt_navi_pane

0xaecf,	// (0x0001f34a) status_dt_sta_pane_ParamLimits

0xaecf,	// (0x0001f34a) status_dt_sta_pane

0xdae3,	// (0x00021f5e) dt_sta_controll_pane

0xdaf0,	// (0x00021f6b) dt_sta_indi_pane

0xdafd,	// (0x00021f78) dt_sta_title_pane

0xc325,	// (0x000207a0) bg_dt_sta_indi_pane_ParamLimits

0xc325,	// (0x000207a0) bg_dt_sta_indi_pane

0xdb0f,	// (0x00021f8a) dt_sta_battery_pane

0xdb17,	// (0x00021f92) dt_sta_indi_pane_g1

0x72c2,	// (0x0001b73d) dt_sta_indi_pane_g2

0x72cb,	// (0x0001b746) dt_sta_indi_pane_g3

0x0002,

0xfe84,	// (0x000242ff) dt_sta_indi_pane_g

0x72d4,	// (0x0001b74f) dt_sta_signal_pane

0xc60b,	// (0x00020a86) bg_dt_sta_title_pane_ParamLimits

0xc60b,	// (0x00020a86) bg_dt_sta_title_pane

0x2986,	// (0x00016e01) dt_sta_title_pane_g1

0xdb20,	// (0x00021f9b) dt_sta_title_pane_t1_ParamLimits

0xdb20,	// (0x00021f9b) dt_sta_title_pane_t1

0xc171,	// (0x000205ec) bg_dt_sta_control_pane

0xdb35,	// (0x00021fb0) dt_sta_controll_pane_g1

0xdb3e,	// (0x00021fb9) bg_dt_sta_title_pane_g1

0xdb47,	// (0x00021fc2) bg_dt_sta_title_pane_g2

0xdb50,	// (0x00021fcb) bg_dt_sta_title_pane_g3

0x0002,

0xfe8b,	// (0x00024306) bg_dt_sta_title_pane_g

0x4567,	// (0x000189e2) bg_dt_sta_indi_pane_g1

0x7316,	// (0x0001b791) dt_sta_signal_pane_g1

0x731e,	// (0x0001b799) dt_sta_signal_pane_g2

0x0001,

0xfe92,	// (0x0002430d) dt_sta_signal_pane_g

0x7326,	// (0x0001b7a1) dt_sta_battery_pane_g1

0x732f,	// (0x0001b7aa) dt_sta_battery_pane_t1

0x4567,	// (0x000189e2) bg_dt_sta_control_pane_g1

0xe542,	// (0x000229bd) fep_china_uni_eep_pane

0xe54a,	// (0x000229c5) fep_china_uni_entry_pane_ParamLimits

0xe55a,	// (0x000229d5) popup_fep_china_uni_window_g1_ParamLimits

0xe56a,	// (0x000229e5) popup_fep_china_uni_window_g2_ParamLimits

0xe56a,	// (0x000229e5) popup_fep_china_uni_window_g2

0x0001,

0xf709,	// (0x00023b84) popup_fep_china_uni_window_g_ParamLimits

0xf709,	// (0x00023b84) popup_fep_china_uni_window_g

0x733e,	// (0x0001b7b9) fep_china_uni_eep_pane_g1

0x7346,	// (0x0001b7c1) fep_china_uni_eep_pane_t1

0x6dae,	// (0x0001b229) aid_touch_area_size_smil_player

0x16e0,	// (0x00015b5b) lc0_clock_pane

0x18c7,	// (0x00015d42) status_pane_g5_ParamLimits

0x18c7,	// (0x00015d42) status_pane_g5

0x8c22,	// (0x0001d09d) popup_keymap_window

0x1885,	// (0x00015d00) status_icon_pane

0x6fa1,	// (0x0001b41c) cell_ai5_widget_pane_g3_ParamLimits

0x6fbb,	// (0x0001b436) cell_ai5_widget_pane_g4_ParamLimits

0x6fcb,	// (0x0001b446) cell_ai5_widget_pane_g5_ParamLimits

0x6ff3,	// (0x0001b46e) cell_ai5_widget_pane_g8_ParamLimits

0x6ff3,	// (0x0001b46e) cell_ai5_widget_pane_g8

0x7007,	// (0x0001b482) cell_ai5_widget_pane_g9_ParamLimits

0x7007,	// (0x0001b482) cell_ai5_widget_pane_g9

0x701b,	// (0x0001b496) cell_ai5_widget_pane_g10_ParamLimits

0x701b,	// (0x0001b496) cell_ai5_widget_pane_g10

0x7355,	// (0x0001b7d0) status_icon_pane_g1

0xc171,	// (0x000205ec) bg_popup_sub_pane_cp13

0x735d,	// (0x0001b7d8) popup_keymap_window_t1

0xabb9,	// (0x0001f034) control_pane_g6_ParamLimits

0xabb9,	// (0x0001f034) control_pane_g6

0xabc6,	// (0x0001f041) control_pane_g7_ParamLimits

0xabc6,	// (0x0001f041) control_pane_g7

0xabd3,	// (0x0001f04e) control_pane_g8_ParamLimits

0xabd3,	// (0x0001f04e) control_pane_g8

0xdae3,	// (0x00021f5e) dt_sta_controll_pane_ParamLimits

0xdaf0,	// (0x00021f6b) dt_sta_indi_pane_ParamLimits

0xdafd,	// (0x00021f78) dt_sta_title_pane_ParamLimits

0xc4f8,	// (0x00020973) aid_size_touch_scroll_bar_cale

0x868a,	// (0x0001cb05) popup_discreet_window_ParamLimits

0x868a,	// (0x0001cb05) popup_discreet_window

0x86dc,	// (0x0001cb57) popup_sk_window

0x21ca,	// (0x00016645) bg_popup_sub_pane_cp28_ParamLimits

0x21ca,	// (0x00016645) bg_popup_sub_pane_cp28

0x736b,	// (0x0001b7e6) popup_discreet_window_g1_ParamLimits

0x736b,	// (0x0001b7e6) popup_discreet_window_g1

0xdb59,	// (0x00021fd4) popup_discreet_window_t1_ParamLimits

0xdb59,	// (0x00021fd4) popup_discreet_window_t1

0x73a9,	// (0x0001b824) popup_discreet_window_t2_ParamLimits

0x73a9,	// (0x0001b824) popup_discreet_window_t2

0x0002,

0xfe97,	// (0x00024312) popup_discreet_window_t_ParamLimits

0xfe97,	// (0x00024312) popup_discreet_window_t

0xf3fc,	// (0x00023877) popup_sk_window_g1

0xf406,	// (0x00023881) popup_sk_window_g2

0x0001,

0xfe9e,	// (0x00024319) popup_sk_window_g

0x9888,	// (0x0001dd03) popup_sk_window_t1

0x9896,	// (0x0001dd11) popup_sk_window_t1_copy1

0x6f8d,	// (0x0001b408) cell_ai5_widget_pane_g2_ParamLimits

0x70ff,	// (0x0001b57a) cell_ai5_widget_pane_t9_ParamLimits

0x70ff,	// (0x0001b57a) cell_ai5_widget_pane_t9

0xc171,	// (0x000205ec) main_fep_fshwr2_pane

0x98a4,	// (0x0001dd1f) aid_fshwr2_btn_pane

0x98b6,	// (0x0001dd31) aid_fshwr2_syb_pane

0x98c8,	// (0x0001dd43) aid_fshwr2_txt_pane

0x98d7,	// (0x0001dd52) fshwr2_func_candi_pane

0x98f6,	// (0x0001dd71) fshwr2_hwr_syb_pane

0x9911,	// (0x0001dd8c) fshwr2_icf_pane

0xe01a,	// (0x00022495) fshwr2_icf_bg_pane

0xf40e,	// (0x00023889) fshwr2_icf_pane_t1_ParamLimits

0xf40e,	// (0x00023889) fshwr2_icf_pane_t1

0xe42b,	// (0x000228a6) fshwr2_func_candi_pane_g1

0xdb77,	// (0x00021ff2) fshwr2_func_candi_row_pane_ParamLimits

0xdb77,	// (0x00021ff2) fshwr2_func_candi_row_pane

0x993d,	// (0x0001ddb8) cell_fshwr2_syb_pane_ParamLimits

0x993d,	// (0x0001ddb8) cell_fshwr2_syb_pane

0xee27,	// (0x000232a2) fshwr2_hwr_syb_pane_g1_ParamLimits

0xee27,	// (0x000232a2) fshwr2_hwr_syb_pane_g1

0xe01a,	// (0x00022495) bg_popup_call_pane_cp01

0x9953,	// (0x0001ddce) fshwr2_func_candi_cell_pane_ParamLimits

0x9953,	// (0x0001ddce) fshwr2_func_candi_cell_pane

0x1fb3,	// (0x0001642e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x1fb3,	// (0x0001642e) fshwr2_func_candi_cell_bg_pane

0x999e,	// (0x0001de19) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x999e,	// (0x0001de19) fshwr2_func_candi_cell_pane_g1

0x99d5,	// (0x0001de50) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x99d5,	// (0x0001de50) fshwr2_func_candi_cell_pane_t1

0xe01a,	// (0x00022495) bg_button_pane_cp08

0x740b,	// (0x0001b886) cell_fshwr2_syb_bg_pane

0x99f0,	// (0x0001de6b) cell_fshwr2_syb_bg_pane_g1

0x99f8,	// (0x0001de73) cell_fshwr2_syb_bg_pane_t1

0xc60b,	// (0x00020a86) main_tmo_pane

0xb5a9,	// (0x0001fa24) uni_indicator_pane_g1_ParamLimits

0xb5bf,	// (0x0001fa3a) uni_indicator_pane_g2_ParamLimits

0xb5d5,	// (0x0001fa50) uni_indicator_pane_g3_ParamLimits

0x2cf3,	// (0x0001716e) uni_indicator_pane_g4_ParamLimits

0x2cf3,	// (0x0001716e) uni_indicator_pane_g4

0x2d07,	// (0x00017182) uni_indicator_pane_g5_ParamLimits

0x2d07,	// (0x00017182) uni_indicator_pane_g5

0x2d07,	// (0x00017182) uni_indicator_pane_g6_ParamLimits

0x2d07,	// (0x00017182) uni_indicator_pane_g6

0xf901,	// (0x00023d7c) uni_indicator_pane_g_ParamLimits

0xce08,	// (0x00021283) popup_tmo_note_window_ParamLimits

0xce08,	// (0x00021283) popup_tmo_note_window

0xf167,	// (0x000235e2) fshwr2_bg_pane

0x99c6,	// (0x0001de41) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x99c6,	// (0x0001de41) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea3,	// (0x0002431e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea3,	// (0x0002431e) fshwr2_func_candi_cell_pane_g

0xee0f,	// (0x0002328a) bg_popup_window_pane_cp01

0xf427,	// (0x000238a2) bg_popup_window_pane_g1_cp01

0x7413,	// (0x0001b88e) bg_popup_window_pane_cp22_ParamLimits

0x7413,	// (0x0001b88e) bg_popup_window_pane_cp22

0xdb9a,	// (0x00022015) listscroll_tmo_link_pane_ParamLimits

0xdb9a,	// (0x00022015) listscroll_tmo_link_pane

0x7461,	// (0x0001b8dc) popup_tmo_note_window_g1_ParamLimits

0x7461,	// (0x0001b8dc) popup_tmo_note_window_g1

0xdbda,	// (0x00022055) tmo_note_info_pane_ParamLimits

0xdbda,	// (0x00022055) tmo_note_info_pane

0xdbf4,	// (0x0002206f) list_tmo_note_info_pane_g1_ParamLimits

0xdbf4,	// (0x0002206f) list_tmo_note_info_pane_g1

0x749f,	// (0x0001b91a) list_tmo_note_info_pane_g2_ParamLimits

0x749f,	// (0x0001b91a) list_tmo_note_info_pane_g2

0x0001,

0xfea8,	// (0x00024323) list_tmo_note_info_pane_g_ParamLimits

0xfea8,	// (0x00024323) list_tmo_note_info_pane_g

0x74bb,	// (0x0001b936) list_tmo_note_info_text_pane_ParamLimits

0x74bb,	// (0x0001b936) list_tmo_note_info_text_pane

0x753c,	// (0x0001b9b7) list_tmo_link_pane

0x7549,	// (0x0001b9c4) scroll_pane_cp20

0x7556,	// (0x0001b9d1) list_single_tmo_link_pane_ParamLimits

0x7556,	// (0x0001b9d1) list_single_tmo_link_pane

0x7566,	// (0x0001b9e1) list_single_tmo_link_pane_t1

0x7574,	// (0x0001b9ef) list_tmo_note_info_text_pane_t1_ParamLimits

0x7574,	// (0x0001b9ef) list_tmo_note_info_text_pane_t1

0xa5d7,	// (0x0001ea52) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa5d7,	// (0x0001ea52) aid_size_touch_scroll_bar_cp01

0xa4d7,	// (0x0001e952) aid_size_touch_slider_marker

0x86cc,	// (0x0001cb47) popup_settings_window_ParamLimits

0x86cc,	// (0x0001cb47) popup_settings_window

0x153a,	// (0x000159b5) popup_candi_list_indi_window

0x158a,	// (0x00015a05) aid_touch_navi_pane_ParamLimits

0xef86,	// (0x00023401) rs_clock_indi_pane

0xef8f,	// (0x0002340a) sctrl_sk_bottom_pane_ParamLimits

0xefa0,	// (0x0002341b) sctrl_sk_top_pane_ParamLimits

0x94ee,	// (0x0001d969) popup_fep_tooltip_window

0x6f07,	// (0x0001b382) aid_size_cell_widget_grid_ParamLimits

0x6f78,	// (0x0001b3f3) cell_ai5_widget_pane_g1_ParamLimits

0x6f78,	// (0x0001b3f3) cell_ai5_widget_pane_g1

0x6fdb,	// (0x0001b456) cell_ai5_widget_pane_g6_ParamLimits

0x6fe7,	// (0x0001b462) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe26,	// (0x000242a1) cell_ai5_widget_pane_g_ParamLimits

0xfe26,	// (0x000242a1) cell_ai5_widget_pane_g

0x712e,	// (0x0001b5a9) cell_ai5_widget_pane_t10_ParamLimits

0x712e,	// (0x0001b5a9) cell_ai5_widget_pane_t10

0x714c,	// (0x0001b5c7) grid_ai5_widget_pane_ParamLimits

0x71e4,	// (0x0001b65f) cell_contacts_ai5_widget_pane_ParamLimits

0x71e4,	// (0x0001b65f) cell_contacts_ai5_widget_pane

0x73be,	// (0x0001b839) popup_discreet_window_t3_ParamLimits

0x73be,	// (0x0001b839) popup_discreet_window_t3

0x9929,	// (0x0001dda4) popup_fshwr2_char_preview_window_ParamLimits

0x9929,	// (0x0001dda4) popup_fshwr2_char_preview_window

0xdc0b,	// (0x00022086) tmo_note_info_pane_t1

0xdc20,	// (0x0002209b) tmo_note_info_pane_t2

0xdc37,	// (0x000220b2) tmo_note_info_pane_t3

0x7518,	// (0x0001b993) tmo_note_info_pane_t4

0x752a,	// (0x0001b9a5) tmo_note_info_pane_t5

0x0004,

0xfead,	// (0x00024328) tmo_note_info_pane_t

0x753c,	// (0x0001b9b7) list_tmo_link_pane_ParamLimits

0x7549,	// (0x0001b9c4) scroll_pane_cp20_ParamLimits

0xe01a,	// (0x00022495) bg_popup_fep_char_preview_window_cp01

0xdc4c,	// (0x000220c7) popup_fshwr2_char_preview_window_t1

0x759b,	// (0x0001ba16) popup_candi_list_indi_window_g1

0x75a4,	// (0x0001ba1f) bg_cell_contacts_ai5_widget_pane

0x75b0,	// (0x0001ba2b) cell_contacts_ai5_widget_pane_g1

0x4ddd,	// (0x00019258) cell_contacts_ai5_widget_pane_g2

0x75c5,	// (0x0001ba40) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb8,	// (0x00024333) cell_contacts_ai5_widget_pane_g

0x75d1,	// (0x0001ba4c) cell_contacts_ai5_widget_pane_t1

0xc60b,	// (0x00020a86) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7648,	// (0x0001bac3) settings_container_pane

0x11de,	// (0x00015659) listscroll_set_pane_copy1

0x3939,	// (0x00017db4) scroll_pane_cp121_copy1

0x1f77,	// (0x000163f2) set_content_pane_copy1

0xdcbf,	// (0x0002213a) aid_height_set_list_copy1_ParamLimits

0xdcbf,	// (0x0002213a) aid_height_set_list_copy1

0x2f11,	// (0x0001738c) aid_size_parent_copy1_ParamLimits

0x2f11,	// (0x0001738c) aid_size_parent_copy1

0xdccb,	// (0x00022146) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdccb,	// (0x00022146) button_value_adjust_pane_cp6_copy1

0x1506,	// (0x00015981) list_highlight_pane_cp2_copy1_ParamLimits

0x1506,	// (0x00015981) list_highlight_pane_cp2_copy1

0xdcdf,	// (0x0002215a) list_set_pane_copy1_ParamLimits

0xdcdf,	// (0x0002215a) list_set_pane_copy1

0xdc5a,	// (0x000220d5) main_pane_set_t1_copy1_ParamLimits

0xdc5a,	// (0x000220d5) main_pane_set_t1_copy1

0xdc94,	// (0x0002210f) main_pane_set_t2_copy1_ParamLimits

0xdc94,	// (0x0002210f) main_pane_set_t2_copy1

0xdd8c,	// (0x00022207) main_pane_set_t3_copy1

0xdd9a,	// (0x00022215) main_pane_set_t4_copy1

0xdcb3,	// (0x0002212e) set_content_pane_g1_copy1_ParamLimits

0xdcb3,	// (0x0002212e) set_content_pane_g1_copy1

0xdda8,	// (0x00022223) setting_code_pane_copy1

0x7745,	// (0x0001bbc0) setting_slider_graphic_pane_copy1

0x7745,	// (0x0001bbc0) setting_slider_pane_copy1

0x7745,	// (0x0001bbc0) setting_text_pane_copy1

0x7745,	// (0x0001bbc0) setting_volume_pane_copy1

0xdda8,	// (0x00022223) settings_code_pane_cp2_copy1

0xddb0,	// (0x0002222b) settings_code_pane_cp_copy1_ParamLimits

0xddb0,	// (0x0002222b) settings_code_pane_cp_copy1

0x9a07,	// (0x0001de82) volume_set_pane_copy1

0xddc4,	// (0x0002223f) volume_set_pane_g10_copy1

0xddcc,	// (0x00022247) volume_set_pane_g1_copy1

0xddd4,	// (0x0002224f) volume_set_pane_g2_copy1

0xdddc,	// (0x00022257) volume_set_pane_g3_copy1

0xdde4,	// (0x0002225f) volume_set_pane_g4_copy1

0xddec,	// (0x00022267) volume_set_pane_g5_copy1

0xddf4,	// (0x0002226f) volume_set_pane_g6_copy1

0xddfc,	// (0x00022277) volume_set_pane_g7_copy1

0xde04,	// (0x0002227f) volume_set_pane_g8_copy1

0xde0c,	// (0x00022287) volume_set_pane_g9_copy1

0xc1e1,	// (0x0002065c) bg_set_opt_pane_cp_copy1_ParamLimits

0xc1e1,	// (0x0002065c) bg_set_opt_pane_cp_copy1

0x9a0f,	// (0x0001de8a) setting_slider_pane_t1_copy1_ParamLimits

0x9a0f,	// (0x0001de8a) setting_slider_pane_t1_copy1

0x9a2d,	// (0x0001dea8) setting_slider_pane_t2_copy1_ParamLimits

0x9a2d,	// (0x0001dea8) setting_slider_pane_t2_copy1

0x9a47,	// (0x0001dec2) setting_slider_pane_t3_copy1_ParamLimits

0x9a47,	// (0x0001dec2) setting_slider_pane_t3_copy1

0x9a5f,	// (0x0001deda) slider_set_pane_copy1_ParamLimits

0x9a5f,	// (0x0001deda) slider_set_pane_copy1

0xc6d1,	// (0x00020b4c) set_opt_bg_pane_g1_copy2

0xc6d9,	// (0x00020b54) set_opt_bg_pane_g2_copy2

0x77b1,	// (0x0001bc2c) set_opt_bg_pane_g3_copy2

0xc6e9,	// (0x00020b64) set_opt_bg_pane_g4_copy2

0xc6f1,	// (0x00020b6c) set_opt_bg_pane_g5_copy2

0xc6f9,	// (0x00020b74) set_opt_bg_pane_g6_copy2

0xde14,	// (0x0002228f) set_opt_bg_pane_g7_copy2

0x77c3,	// (0x0001bc3e) set_opt_bg_pane_g8_copy2

0x77cd,	// (0x0001bc48) set_opt_bg_pane_g9_copy2

0x9a75,	// (0x0001def0) aid_size_touch_slider_mark_copy1_ParamLimits

0x9a75,	// (0x0001def0) aid_size_touch_slider_mark_copy1

0xde1c,	// (0x00022297) slider_set_pane_g1_copy1

0xf430,	// (0x000238ab) slider_set_pane_g2_copy1

0x92e1,	// (0x0001d75c) slider_set_pane_g3_copy1_ParamLimits

0x92e1,	// (0x0001d75c) slider_set_pane_g3_copy1

0x92f5,	// (0x0001d770) slider_set_pane_g4_copy1_ParamLimits

0x92f5,	// (0x0001d770) slider_set_pane_g4_copy1

0x930d,	// (0x0001d788) slider_set_pane_g5_copy1_ParamLimits

0x930d,	// (0x0001d788) slider_set_pane_g5_copy1

0x92e1,	// (0x0001d75c) slider_set_pane_g6_copy1_ParamLimits

0x92e1,	// (0x0001d75c) slider_set_pane_g6_copy1

0x9a89,	// (0x0001df04) slider_set_pane_g7_copy1_ParamLimits

0x9a89,	// (0x0001df04) slider_set_pane_g7_copy1

0xc185,	// (0x00020600) bg_set_opt_pane_cp2_copy1

0xde25,	// (0x000222a0) setting_slider_graphic_pane_g1_copy1

0xde2e,	// (0x000222a9) setting_slider_graphic_pane_t1_copy1

0xde3e,	// (0x000222b9) setting_slider_graphic_pane_t2_copy1

0xde4e,	// (0x000222c9) slider_set_pane_cp_copy1

0x7819,	// (0x0001bc94) input_focus_pane_cp1_copy1

0x7822,	// (0x0001bc9d) list_set_text_pane_copy1

0x782a,	// (0x0001bca5) setting_text_pane_g1_copy1

0x7833,	// (0x0001bcae) set_text_pane_t1_copy1

0x7819,	// (0x0001bc94) input_focus_pane_cp2_copy1

0x782a,	// (0x0001bca5) setting_code_pane_g1_copy1

0x784e,	// (0x0001bcc9) setting_code_pane_t1_copy1

0x785c,	// (0x0001bcd7) list_set_graphic_pane_copy1

0xc185,	// (0x00020600) bg_set_opt_pane_cp4_copy1

0x0ee9,	// (0x00015364) list_set_graphic_pane_g1_copy1_ParamLimits

0x0ee9,	// (0x00015364) list_set_graphic_pane_g1_copy1

0x7870,	// (0x0001bceb) list_set_graphic_pane_g2_copy1

0x0f01,	// (0x0001537c) list_set_graphic_pane_t1_copy1_ParamLimits

0x0f01,	// (0x0001537c) list_set_graphic_pane_t1_copy1

0x4567,	// (0x000189e2) rs_clock_indi_pane_g1

0x7878,	// (0x0001bcf3) rs_clock_indi_pane_t1

0x7886,	// (0x0001bd01) rs_indi_pane

0x788e,	// (0x0001bd09) rs_indi_pane_g1

0x7897,	// (0x0001bd12) rs_indi_pane_g2

0x759b,	// (0x0001ba16) rs_indi_pane_g3

0x0002,

0xfebf,	// (0x0002433a) rs_indi_pane_g

0x11de,	// (0x00015659) bg_popup_preview_window_pane_cp03

0x78a0,	// (0x0001bd1b) popup_fep_tooltip_window_t1

0xc0ef,	// (0x0002056a) popup_note2_window_g2_ParamLimits

0xc0ef,	// (0x0002056a) popup_note2_window_g2

0x0001,

0xfc5f,	// (0x000240da) popup_note2_window_g_ParamLimits

0xfc5f,	// (0x000240da) popup_note2_window_g

0x59fa,	// (0x00019e75) bg_popup_sub_pane_cp11_ParamLimits

0x5a07,	// (0x00019e82) cell_ai3_links_pane_g1_ParamLimits

0x5a1e,	// (0x00019e99) cell_ai3_links_pane_t1

0x7833,	// (0x0001bcae) set_text_pane_t1_copy1_ParamLimits

0x10ef,	// (0x0001556a) cell_graphic_popup_pane_cp2_ParamLimits

0x10ef,	// (0x0001556a) cell_graphic_popup_pane_cp2

0xde5e,	// (0x000222d9) cell_graphic_popup_pane_g1_cp2

0xc47b,	// (0x000208f6) cell_graphic_popup_pane_g2_cp2

0x78b6,	// (0x0001bd31) cell_graphic_popup_pane_g3_cp2

0xde66,	// (0x000222e1) cell_graphic_popup_pane_t2_cp2

0xc48c,	// (0x00020907) grid_highlight_pane_cp3_cp2

0xe289,	// (0x00022704) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc60b,	// (0x00020a86) main_tmo_pane_ParamLimits

0xcdfc,	// (0x00021277) popup_tmo_big_image_note_window

0x6f67,	// (0x0001b3e2) cell_ai5_widget_list_pane

0x6f6f,	// (0x0001b3ea) cell_ai5_widget_lrg_icon_pane

0xdc0b,	// (0x00022086) tmo_note_info_pane_t1_ParamLimits

0xdc20,	// (0x0002209b) tmo_note_info_pane_t2_ParamLimits

0xdc37,	// (0x000220b2) tmo_note_info_pane_t3_ParamLimits

0x7518,	// (0x0001b993) tmo_note_info_pane_t4_ParamLimits

0x752a,	// (0x0001b9a5) tmo_note_info_pane_t5_ParamLimits

0xfead,	// (0x00024328) tmo_note_info_pane_t_ParamLimits

0x7648,	// (0x0001bac3) settings_container_pane_ParamLimits

0xde56,	// (0x000222d1) indicator_popup_pane_cp5

0xde56,	// (0x000222d1) indicator_popup_pane_cp6

0x785c,	// (0x0001bcd7) list_set_graphic_pane_copy1_ParamLimits

0xc171,	// (0x000205ec) bg_popup_window_pane_cp23

0x78cc,	// (0x0001bd47) popup_tmo_big_image_note_window_g1

0x78d5,	// (0x0001bd50) popup_tmo_big_image_note_window_t1

0x78e5,	// (0x0001bd60) popup_tmo_big_image_note_window_t2

0x78f5,	// (0x0001bd70) popup_tmo_big_image_note_window_t3

0x0002,

0xfec6,	// (0x00024341) popup_tmo_big_image_note_window_t

0x4567,	// (0x000189e2) cell_ai5_widget_lrg_icon_pane_g1

0x7905,	// (0x0001bd80) cell_ai5_widget_lrg_icon_pane_t1

0x7913,	// (0x0001bd8e) cell_ai5_widget_list_row_pane_ParamLimits

0x7913,	// (0x0001bd8e) cell_ai5_widget_list_row_pane

0x792a,	// (0x0001bda5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x792a,	// (0x0001bda5) cell_ai5_widget_list_row_pane_g1

0xde74,	// (0x000222ef) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xde74,	// (0x000222ef) cell_ai5_widget_list_row_pane_t1

0x7962,	// (0x0001bddd) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7962,	// (0x0001bddd) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecd,	// (0x00024348) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecd,	// (0x00024348) cell_ai5_widget_list_row_pane_t

0xe01a,	// (0x00022495) main_fep_vtchi_ss_pane

0x79aa,	// (0x0001be25) popup_fep_char_pre_window

0x79b2,	// (0x0001be2d) popup_fep_ituss_window

0xdeb8,	// (0x00022333) popup_fep_vkbss_window

0xdec5,	// (0x00022340) grid_vkbss_keypad_pane_ParamLimits

0xdec5,	// (0x00022340) grid_vkbss_keypad_pane

0x7a0d,	// (0x0001be88) ituss_keypad_pane

0xf444,	// (0x000238bf) aid_vkbss_key_offset_ParamLimits

0xf444,	// (0x000238bf) aid_vkbss_key_offset

0x9a9f,	// (0x0001df1a) cell_vkbss_key_pane_ParamLimits

0x9a9f,	// (0x0001df1a) cell_vkbss_key_pane

0x18a1,	// (0x00015d1c) bg_cell_vkbss_key_g1_ParamLimits

0x18a1,	// (0x00015d1c) bg_cell_vkbss_key_g1

0xded5,	// (0x00022350) cell_vkbss_key_3p_pane_ParamLimits

0xded5,	// (0x00022350) cell_vkbss_key_3p_pane

0xdeef,	// (0x0002236a) cell_vkbss_key_g1_ParamLimits

0xdeef,	// (0x0002236a) cell_vkbss_key_g1

0xdf09,	// (0x00022384) cell_vkbss_key_t1_ParamLimits

0xdf09,	// (0x00022384) cell_vkbss_key_t1

0xf450,	// (0x000238cb) cell_ituss_key_pane_ParamLimits

0xf450,	// (0x000238cb) cell_ituss_key_pane

0x7a6f,	// (0x0001beea) bg_cell_ituss_key_g1_ParamLimits

0x7a6f,	// (0x0001beea) bg_cell_ituss_key_g1

0x7a7b,	// (0x0001bef6) cell_ituss_key_pane_g1_ParamLimits

0x7a7b,	// (0x0001bef6) cell_ituss_key_pane_g1

0xf461,	// (0x000238dc) cell_ituss_key_pane_g2_ParamLimits

0xf461,	// (0x000238dc) cell_ituss_key_pane_g2

0x0002,

0xfed4,	// (0x0002434f) cell_ituss_key_pane_g_ParamLimits

0xfed4,	// (0x0002434f) cell_ituss_key_pane_g

0xf48d,	// (0x00023908) cell_ituss_key_t1_ParamLimits

0xf48d,	// (0x00023908) cell_ituss_key_t1

0xf4c7,	// (0x00023942) cell_ituss_key_t2_ParamLimits

0xf4c7,	// (0x00023942) cell_ituss_key_t2

0xf4f8,	// (0x00023973) cell_ituss_key_t3_ParamLimits

0xf4f8,	// (0x00023973) cell_ituss_key_t3

0xf4c7,	// (0x00023942) cell_ituss_key_t4_ParamLimits

0xf4c7,	// (0x00023942) cell_ituss_key_t4

0x0004,

0xfedb,	// (0x00024356) cell_ituss_key_t_ParamLimits

0xfedb,	// (0x00024356) cell_ituss_key_t

0x7aa1,	// (0x0001bf1c) cell_vkbss_key_3p_pane_g1

0x7aa9,	// (0x0001bf24) cell_vkbss_key_3p_pane_g2

0x7ab1,	// (0x0001bf2c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee6,	// (0x00024361) cell_vkbss_key_3p_pane_g

0x11de,	// (0x00015659) bg_popup_fep_char_preview_window_cp02

0x7ab9,	// (0x0001bf34) popup_fep_char_pre_window_t1

0xdab3,	// (0x00021f2e) main_ai5_sk_pane

0x75a4,	// (0x0001ba1f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x75b0,	// (0x0001ba2b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4ddd,	// (0x00019258) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x75c5,	// (0x0001ba40) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb8,	// (0x00024333) cell_contacts_ai5_widget_pane_g_ParamLimits

0x75d1,	// (0x0001ba4c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc60b,	// (0x00020a86) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdf34,	// (0x000223af) main_ai5_sk_pane_g1

0xb202,	// (0x0001f67d) popup_query_code_window_g1

0x79c8,	// (0x0001be43) popup_fep_vkb_icf_pane

0x79e7,	// (0x0001be62) popup_fep_vtchi_icf_pane

0x7ad0,	// (0x0001bf4b) bg_icf_pane

0x7adc,	// (0x0001bf57) list_vkb_icf_pane

0x7aeb,	// (0x0001bf66) bg_icf_pane_cp01

0x7afe,	// (0x0001bf79) vtchi_icf_list_pane

0x7b0e,	// (0x0001bf89) list_vkb_icf_pane_t1_ParamLimits

0x7b0e,	// (0x0001bf89) list_vkb_icf_pane_t1

0x7b25,	// (0x0001bfa0) vtchi_icf_list_pane_t1_ParamLimits

0x7b25,	// (0x0001bfa0) vtchi_icf_list_pane_t1

0x79b2,	// (0x0001be2d) popup_fep_ituss_window_ParamLimits

0x79e7,	// (0x0001be62) popup_fep_vtchi_icf_pane_ParamLimits

0x7a0d,	// (0x0001be88) ituss_keypad_pane_ParamLimits

0xf438,	// (0x000238b3) ituss_sks_pane

0x7ad0,	// (0x0001bf4b) bg_icf_pane_ParamLimits

0xdea5,	// (0x00022320) icf_edit_indi_pane_ParamLimits

0xdea5,	// (0x00022320) icf_edit_indi_pane

0x7adc,	// (0x0001bf57) list_vkb_icf_pane_ParamLimits

0x7aeb,	// (0x0001bf66) bg_icf_pane_cp01_ParamLimits

0x799d,	// (0x0001be18) icf_edit_indi_pane_cp01_ParamLimits

0x799d,	// (0x0001be18) icf_edit_indi_pane_cp01

0x7b06,	// (0x0001bf81) vtchi_query_pane

0x6d7e,	// (0x0001b1f9) icf_edit_indi_pane_g1_ParamLimits

0x6d7e,	// (0x0001b1f9) icf_edit_indi_pane_g1

0xdf3d,	// (0x000223b8) icf_edit_indi_pane_g2_ParamLimits

0xdf3d,	// (0x000223b8) icf_edit_indi_pane_g2

0x0001,

0xfefe,	// (0x00024379) icf_edit_indi_pane_g_ParamLimits

0xfefe,	// (0x00024379) icf_edit_indi_pane_g

0xdf4f,	// (0x000223ca) icf_edit_indi_pane_t1

0x7b43,	// (0x0001bfbe) bg_input_focus_pane_cp042

0xc4ef,	// (0x0002096a) vtchi_button_pane

0x7b4c,	// (0x0001bfc7) vtchi_query_pane_t1

0x7b5a,	// (0x0001bfd5) vtchi_query_pane_t2

0x7b68,	// (0x0001bfe3) vtchi_query_pane_t3

0x0002,

0xfeed,	// (0x00024368) vtchi_query_pane_t

0xe01a,	// (0x00022495) bg_button_pane_cp13

0x7b76,	// (0x0001bff1) vtchi_button_pane_g1

0xf53b,	// (0x000239b6) ituss_sks_pane_g1

0xf546,	// (0x000239c1) ituss_sks_pane_g2

0x0001,

0xfef4,	// (0x0002436f) ituss_sks_pane_g

0x7b7e,	// (0x0001bff9) ituss_sks_pane_t1

0x7b8c,	// (0x0001c007) ituss_sks_pane_t2

0x0001,

0xfef9,	// (0x00024374) ituss_sks_pane_t

0x3f97,	// (0x00018412) indicator_nsta_pane_cp_g1

0x3f9f,	// (0x0001841a) indicator_nsta_pane_cp_g2

0x3fa7,	// (0x00018422) indicator_nsta_pane_cp_g3

0x3f97,	// (0x00018412) indicator_nsta_pane_cp_g4

0x3f9f,	// (0x0001841a) indicator_nsta_pane_cp_g5

0x3fa7,	// (0x00018422) indicator_nsta_pane_cp_g6

0x0005,

0xfa9d,	// (0x00023f18) indicator_nsta_pane_cp_g

0xd890,	// (0x00021d0b) cell_graphic2_pane_t2_ParamLimits

0xd890,	// (0x00021d0b) cell_graphic2_pane_t2

0x0001,

0xfdaf,	// (0x0002422a) cell_graphic2_pane_t_ParamLimits

0xfdaf,	// (0x0002422a) cell_graphic2_pane_t

0xd8c9,	// (0x00021d44) cell_graphic2_control_pane_t1

0xa880,	// (0x0001ecfb) signal_pane_g3_ParamLimits

0xa880,	// (0x0001ecfb) signal_pane_g3

0xa894,	// (0x0001ed0f) signal_pane_g4_ParamLimits

0xa894,	// (0x0001ed0f) signal_pane_g4

0x7974,	// (0x0001bdef) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7974,	// (0x0001bdef) cell_ai5_widget_list_row_pane_t3

0x7a8f,	// (0x0001bf0a) cell_ituss_key_pane_t1_ParamLimits

0x7a8f,	// (0x0001bf0a) cell_ituss_key_pane_t1

0x1c05,	// (0x00016080) form_field_data_wide_pane_vc_t2_ParamLimits

0x1c05,	// (0x00016080) form_field_data_wide_pane_vc_t2

0x1c19,	// (0x00016094) form_field_data_wide_pane_vc_t3_ParamLimits

0x1c19,	// (0x00016094) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e9,	// (0x00023c64) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e9,	// (0x00023c64) form_field_data_wide_pane_vc_t

0x3c5e,	// (0x000180d9) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3c5e,	// (0x000180d9) form_field_slider_wide_pane_vc_t3

0x3d3c,	// (0x000181b7) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3d3c,	// (0x000181b7) form_field_popup_wide_pane_vc_t2

0x3d53,	// (0x000181ce) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3d53,	// (0x000181ce) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8c,	// (0x00023f07) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8c,	// (0x00023f07) form_field_popup_wide_pane_vc_t

0x98a4,	// (0x0001dd1f) aid_fshwr2_btn_pane_ParamLimits

0x98b6,	// (0x0001dd31) aid_fshwr2_syb_pane_ParamLimits

0x98c8,	// (0x0001dd43) aid_fshwr2_txt_pane_ParamLimits

0xf167,	// (0x000235e2) fshwr2_bg_pane_ParamLimits

0x98d7,	// (0x0001dd52) fshwr2_func_candi_pane_ParamLimits

0x98f6,	// (0x0001dd71) fshwr2_hwr_syb_pane_ParamLimits

0x9911,	// (0x0001dd8c) fshwr2_icf_pane_ParamLimits

0x3bcf,	// (0x0001804a) list_double_graphic_pane_vc_g4_ParamLimits

0x3bcf,	// (0x0001804a) list_double_graphic_pane_vc_g4

0xf481,	// (0x000238fc) cell_ituss_key_pane_g3_ParamLimits

0xf481,	// (0x000238fc) cell_ituss_key_pane_g3

0xf529,	// (0x000239a4) cell_ituss_key_t5_ParamLimits

0xf529,	// (0x000239a4) cell_ituss_key_t5

0xdeb8,	// (0x00022333) popup_fep_vkbss_window_ParamLimits

0x6efe,	// (0x0001b379) aid_cell_ai5_quarter

0xdf4f,	// (0x000223ca) icf_edit_indi_pane_t1_ParamLimits

0x9d7f,	// (0x0001e1fa) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x9d7f,	// (0x0001e1fa) aid_tch_indicator_popup_pane_cp2

0x9d92,	// (0x0001e20d) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9d92,	// (0x0001e20d) aid_tch_query_popup_data_pane_cp2

0x1fb3,	// (0x0001642e) aid_tch_query_popup_pane_ParamLimits

0x1fb3,	// (0x0001642e) aid_tch_query_popup_pane

0x1fb3,	// (0x0001642e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x1fb3,	// (0x0001642e) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal

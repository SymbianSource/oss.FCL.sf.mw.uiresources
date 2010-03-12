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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001fcfc };

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
0x1b66,	// (0x00021862) Screen

0x1b7a,	// (0x00021876) application_window_ParamLimits

0x1b7a,	// (0x00021876) application_window

0x1b94,	// (0x00021890) screen_g1

0xaab2,	// (0x0002a7ae) area_bottom_pane_ParamLimits

0xaab2,	// (0x0002a7ae) area_bottom_pane

0xab72,	// (0x0002a86e) area_top_pane_ParamLimits

0xab72,	// (0x0002a86e) area_top_pane

0xac10,	// (0x0002a90c) main_pane_ParamLimits

0xac10,	// (0x0002a90c) main_pane

0x1b9e,	// (0x0002189a) misc_graphics

0x350d,	// (0x00023209) battery_pane_ParamLimits

0x350d,	// (0x00023209) battery_pane

0x4270,	// (0x00023f6c) bg_status_flat_pane_g8

0x4278,	// (0x00023f74) bg_status_flat_pane_g9

0x35cf,	// (0x000232cb) context_pane_ParamLimits

0x35cf,	// (0x000232cb) context_pane

0x36e5,	// (0x000233e1) navi_pane_ParamLimits

0x36e5,	// (0x000233e1) navi_pane

0x3763,	// (0x0002345f) signal_pane_ParamLimits

0x3763,	// (0x0002345f) signal_pane

0x0008,

0xf875,	// (0x0002f571) bg_status_flat_pane_g

0x37d0,	// (0x000234cc) status_pane_g1_ParamLimits

0x37d0,	// (0x000234cc) status_pane_g1

0x37e4,	// (0x000234e0) status_pane_g2_ParamLimits

0x37e4,	// (0x000234e0) status_pane_g2

0x37f0,	// (0x000234ec) status_pane_g3_ParamLimits

0x37f0,	// (0x000234ec) status_pane_g3

0x0004,

0xf7a1,	// (0x0002f49d) status_pane_g_ParamLimits

0xf7a1,	// (0x0002f49d) status_pane_g

0x3822,	// (0x0002351e) title_pane_ParamLimits

0x3822,	// (0x0002351e) title_pane

0x385f,	// (0x0002355b) uni_indicator_pane_ParamLimits

0x385f,	// (0x0002355b) uni_indicator_pane

0x3431,	// (0x0002312d) bg_list_pane_ParamLimits

0x3431,	// (0x0002312d) bg_list_pane

0xe4a7,	// (0x0002e1a3) find_pane

0x3451,	// (0x0002314d) listscroll_app_pane_ParamLimits

0x3451,	// (0x0002314d) listscroll_app_pane

0x345d,	// (0x00023159) listscroll_form_pane

0xb4b5,	// (0x0002b1b1) listscroll_gen_pane_ParamLimits

0xb4b5,	// (0x0002b1b1) listscroll_gen_pane

0x345d,	// (0x00023159) listscroll_set_pane

0x26be,	// (0x000223ba) main_idle_act_pane

0x313b,	// (0x00022e37) main_idle_trad_pane

0x313b,	// (0x00022e37) main_list_empty_pane

0x3477,	// (0x00023173) main_midp_pane

0x3483,	// (0x0002317f) main_pane_g1_ParamLimits

0x3483,	// (0x0002317f) main_pane_g1

0xb4d7,	// (0x0002b1d3) popup_ai_message_window_ParamLimits

0xb4d7,	// (0x0002b1d3) popup_ai_message_window

0xb579,	// (0x0002b275) popup_fep_china_uni_window_ParamLimits

0xb579,	// (0x0002b275) popup_fep_china_uni_window

0xb5d3,	// (0x0002b2cf) popup_fep_japan_candidate_window_ParamLimits

0xb5d3,	// (0x0002b2cf) popup_fep_japan_candidate_window

0xb5f1,	// (0x0002b2ed) popup_fep_japan_predictive_window_ParamLimits

0xb5f1,	// (0x0002b2ed) popup_fep_japan_predictive_window

0xb621,	// (0x0002b31d) popup_find_window

0xb62e,	// (0x0002b32a) popup_grid_graphic_window_ParamLimits

0xb62e,	// (0x0002b32a) popup_grid_graphic_window

0xb654,	// (0x0002b350) popup_large_graphic_colour_window

0xb67a,	// (0x0002b376) popup_menu_window_ParamLimits

0xb67a,	// (0x0002b376) popup_menu_window

0xb834,	// (0x0002b530) popup_note_image_window

0xb820,	// (0x0002b51c) popup_note_wait_window_ParamLimits

0xb820,	// (0x0002b51c) popup_note_wait_window

0xb820,	// (0x0002b51c) popup_note_window_ParamLimits

0xb820,	// (0x0002b51c) popup_note_window

0xb88a,	// (0x0002b586) popup_query_code_window_ParamLimits

0xb88a,	// (0x0002b586) popup_query_code_window

0xb89e,	// (0x0002b59a) popup_query_data_code_window_ParamLimits

0xb89e,	// (0x0002b59a) popup_query_data_code_window

0xb8b5,	// (0x0002b5b1) popup_query_data_window_ParamLimits

0xb8b5,	// (0x0002b5b1) popup_query_data_window

0xb8cd,	// (0x0002b5c9) popup_query_sat_info_window_ParamLimits

0xb8cd,	// (0x0002b5c9) popup_query_sat_info_window

0xb906,	// (0x0002b602) popup_snote_single_graphic_window_ParamLimits

0xb906,	// (0x0002b602) popup_snote_single_graphic_window

0xb906,	// (0x0002b602) popup_snote_single_text_window_ParamLimits

0xb906,	// (0x0002b602) popup_snote_single_text_window

0xb91b,	// (0x0002b617) popup_sub_window_general

0xba49,	// (0x0002b745) popup_window_general_ParamLimits

0xba49,	// (0x0002b745) popup_window_general

0x3491,	// (0x0002318d) power_save_pane

0xb357,	// (0x0002b053) control_pane_g1_ParamLimits

0xb357,	// (0x0002b053) control_pane_g1

0xb37e,	// (0x0002b07a) control_pane_g2_ParamLimits

0xb37e,	// (0x0002b07a) control_pane_g2

0x33f4,	// (0x000230f0) control_pane_g3_ParamLimits

0x33f4,	// (0x000230f0) control_pane_g3

0x0007,

0xf789,	// (0x0002f485) control_pane_g_ParamLimits

0xf789,	// (0x0002f485) control_pane_g

0xb3c2,	// (0x0002b0be) control_pane_t1_ParamLimits

0xb3c2,	// (0x0002b0be) control_pane_t1

0xb40e,	// (0x0002b10a) control_pane_t2_ParamLimits

0xb40e,	// (0x0002b10a) control_pane_t2

0x0002,

0xf79a,	// (0x0002f496) control_pane_t_ParamLimits

0xf79a,	// (0x0002f496) control_pane_t

0x3315,	// (0x00023011) navi_navi_volume_pane_cp1

0x331e,	// (0x0002301a) status_small_icon_pane

0x3326,	// (0x00023022) status_small_pane_g1_ParamLimits

0x3326,	// (0x00023022) status_small_pane_g1

0x335a,	// (0x00023056) status_small_pane_g2_ParamLimits

0x335a,	// (0x00023056) status_small_pane_g2

0x3366,	// (0x00023062) status_small_pane_g3_ParamLimits

0x3366,	// (0x00023062) status_small_pane_g3

0x3372,	// (0x0002306e) status_small_pane_g4_ParamLimits

0x3372,	// (0x0002306e) status_small_pane_g4

0x337e,	// (0x0002307a) status_small_pane_g5_ParamLimits

0x337e,	// (0x0002307a) status_small_pane_g5

0x338d,	// (0x00023089) status_small_pane_g6_ParamLimits

0x338d,	// (0x00023089) status_small_pane_g6

0x0007,

0xf778,	// (0x0002f474) status_small_pane_g_ParamLimits

0xf778,	// (0x0002f474) status_small_pane_g

0x33bd,	// (0x000230b9) status_small_pane_t1

0x33e0,	// (0x000230dc) status_small_wait_pane_ParamLimits

0x33e0,	// (0x000230dc) status_small_wait_pane

0x2bb3,	// (0x000228af) aid_levels_signal_ParamLimits

0x2bb3,	// (0x000228af) aid_levels_signal

0x2bc5,	// (0x000228c1) signal_pane_g1_ParamLimits

0x2bc5,	// (0x000228c1) signal_pane_g1

0x2bda,	// (0x000228d6) signal_pane_g2_ParamLimits

0x2bda,	// (0x000228d6) signal_pane_g2

0x0003,

0xf709,	// (0x0002f405) signal_pane_g_ParamLimits

0xf709,	// (0x0002f405) signal_pane_g

0x2c15,	// (0x00022911) context_pane_g1

0x1ba8,	// (0x000218a4) title_pane_g1

0x1bde,	// (0x000218da) title_pane_t1

0x1c46,	// (0x00021942) title_pane_t2

0x1c6c,	// (0x00021968) title_pane_t3

0x0002,

0xf55d,	// (0x0002f259) title_pane_t

0x3877,	// (0x00023573) aid_levels_battery_ParamLimits

0x3877,	// (0x00023573) aid_levels_battery

0x388b,	// (0x00023587) battery_pane_g1_ParamLimits

0x388b,	// (0x00023587) battery_pane_g1

0x38a1,	// (0x0002359d) battery_pane_g2_ParamLimits

0x38a1,	// (0x0002359d) battery_pane_g2

0x0001,

0xf7ac,	// (0x0002f4a8) battery_pane_g_ParamLimits

0xf7ac,	// (0x0002f4a8) battery_pane_g

0x4b8e,	// (0x0002488a) uni_indicator_pane_g1

0x4ba3,	// (0x0002489f) uni_indicator_pane_g2

0x4bb9,	// (0x000248b5) uni_indicator_pane_g3

0x0005,

0xf91d,	// (0x0002f619) uni_indicator_pane_g

0x2fab,	// (0x00022ca7) navi_icon_pane_ParamLimits

0x2fab,	// (0x00022ca7) navi_icon_pane

0x2ef2,	// (0x00022bee) navi_midp_pane

0x2fc7,	// (0x00022cc3) navi_navi_pane

0x2fd1,	// (0x00022ccd) navi_text_pane_ParamLimits

0x2fd1,	// (0x00022ccd) navi_text_pane

0x1b94,	// (0x00021890) status_small_wait_pane_g1

0x208f,	// (0x00021d8b) status_small_wait_pane_g2

0x0001,

0xf918,	// (0x0002f614) status_small_wait_pane_g

0x48b1,	// (0x000245ad) navi_navi_icon_text_pane

0x48cb,	// (0x000245c7) navi_navi_pane_g1_ParamLimits

0x48cb,	// (0x000245c7) navi_navi_pane_g1

0x48b9,	// (0x000245b5) navi_navi_pane_g2_ParamLimits

0x48b9,	// (0x000245b5) navi_navi_pane_g2

0x0001,

0xf8e6,	// (0x0002f5e2) navi_navi_pane_g_ParamLimits

0xf8e6,	// (0x0002f5e2) navi_navi_pane_g

0x48dd,	// (0x000245d9) navi_navi_tabs_pane

0x48e6,	// (0x000245e2) navi_navi_text_pane

0x48b1,	// (0x000245ad) navi_navi_volume_pane

0x488d,	// (0x00024589) navi_text_pane_t1

0x4881,	// (0x0002457d) navi_icon_pane_g1

0x47e0,	// (0x000244dc) navi_navi_text_pane_t1

0xbcf9,	// (0x0002b9f5) navi_navi_volume_pane_g1

0xbd01,	// (0x0002b9fd) volume_small_pane

0x4746,	// (0x00024442) navi_navi_icon_text_pane_g1

0x474e,	// (0x0002444a) navi_navi_icon_text_pane_t1

0x2fc7,	// (0x00022cc3) navi_tabs_2_long_pane

0x2fc7,	// (0x00022cc3) navi_tabs_2_pane

0x2fc7,	// (0x00022cc3) navi_tabs_3_long_pane

0x2fc7,	// (0x00022cc3) navi_tabs_3_pane

0x2fc7,	// (0x00022cc3) navi_tabs_4_pane

0xbcd9,	// (0x0002b9d5) tabs_2_active_pane_ParamLimits

0xbcd9,	// (0x0002b9d5) tabs_2_active_pane

0xbce9,	// (0x0002b9e5) tabs_2_passive_pane_ParamLimits

0xbce9,	// (0x0002b9e5) tabs_2_passive_pane

0xbca7,	// (0x0002b9a3) tabs_3_active_pane_ParamLimits

0xbca7,	// (0x0002b9a3) tabs_3_active_pane

0xbcb7,	// (0x0002b9b3) tabs_3_passive_pane_ParamLimits

0xbcb7,	// (0x0002b9b3) tabs_3_passive_pane

0xbcc8,	// (0x0002b9c4) tabs_3_passive_pane_cp_ParamLimits

0xbcc8,	// (0x0002b9c4) tabs_3_passive_pane_cp

0xbc63,	// (0x0002b95f) tabs_4_active_pane_ParamLimits

0xbc63,	// (0x0002b95f) tabs_4_active_pane

0xbc74,	// (0x0002b970) tabs_4_passive_pane_ParamLimits

0xbc74,	// (0x0002b970) tabs_4_passive_pane

0xbc85,	// (0x0002b981) tabs_4_passive_pane_cp_ParamLimits

0xbc85,	// (0x0002b981) tabs_4_passive_pane_cp

0xbc96,	// (0x0002b992) tabs_4_passive_pane_cp2_ParamLimits

0xbc96,	// (0x0002b992) tabs_4_passive_pane_cp2

0xbc3f,	// (0x0002b93b) tabs_2_long_active_pane_ParamLimits

0xbc3f,	// (0x0002b93b) tabs_2_long_active_pane

0xbc51,	// (0x0002b94d) tabs_2_long_passive_pane_ParamLimits

0xbc51,	// (0x0002b94d) tabs_2_long_passive_pane

0xbbfa,	// (0x0002b8f6) tabs_3_long_active_pane_ParamLimits

0xbbfa,	// (0x0002b8f6) tabs_3_long_active_pane

0xbc13,	// (0x0002b90f) tabs_3_long_passive_pane_ParamLimits

0xbc13,	// (0x0002b90f) tabs_3_long_passive_pane

0xbc26,	// (0x0002b922) tabs_3_long_passive_pane_cp_ParamLimits

0xbc26,	// (0x0002b922) tabs_3_long_passive_pane_cp

0xbba0,	// (0x0002b89c) volume_small_pane_g1

0xbba9,	// (0x0002b8a5) volume_small_pane_g2

0xbbb2,	// (0x0002b8ae) volume_small_pane_g3

0xbbbb,	// (0x0002b8b7) volume_small_pane_g4

0xbbc4,	// (0x0002b8c0) volume_small_pane_g5

0xbbcd,	// (0x0002b8c9) volume_small_pane_g6

0xbbd6,	// (0x0002b8d2) volume_small_pane_g7

0xbbdf,	// (0x0002b8db) volume_small_pane_g8

0xbbe8,	// (0x0002b8e4) volume_small_pane_g9

0xbbf1,	// (0x0002b8ed) volume_small_pane_g10

0x0009,

0xf8b2,	// (0x0002f5ae) volume_small_pane_g

0x1c7e,	// (0x0002197a) bg_active_tab_pane_cp2_ParamLimits

0x1c7e,	// (0x0002197a) bg_active_tab_pane_cp2

0x1c8c,	// (0x00021988) tabs_3_active_pane_g1

0x1c94,	// (0x00021990) tabs_3_active_pane_t1

0x1c7e,	// (0x0002197a) bg_passive_tab_pane_cp2_ParamLimits

0x1c7e,	// (0x0002197a) bg_passive_tab_pane_cp2

0x1c8c,	// (0x00021988) tabs_3_passive_pane_g1

0x1c94,	// (0x00021990) tabs_3_passive_pane_t1

0x1c7e,	// (0x0002197a) bg_active_tab_pane_cp3_ParamLimits

0x1c7e,	// (0x0002197a) bg_active_tab_pane_cp3

0x1ca6,	// (0x000219a2) tabs_4_active_pane_g1

0x1cae,	// (0x000219aa) tabs_4_active_pane_t1

0x1c7e,	// (0x0002197a) bg_passive_tab_pane_cp3_ParamLimits

0x1c7e,	// (0x0002197a) bg_passive_tab_pane_cp3

0x1ca6,	// (0x000219a2) tabs_4_1_passive_pane_g1

0x1cae,	// (0x000219aa) tabs_4_1_passive_pane_t1

0x3477,	// (0x00023173) list_highlight_pane_cp2

0x4e12,	// (0x00024b0e) list_set_pane_ParamLimits

0x4e12,	// (0x00024b0e) list_set_pane

0x4eb4,	// (0x00024bb0) main_pane_set_t1_ParamLimits

0x4eb4,	// (0x00024bb0) main_pane_set_t1

0x4ed4,	// (0x00024bd0) main_pane_set_t2_ParamLimits

0x4ed4,	// (0x00024bd0) main_pane_set_t2

0x4ee8,	// (0x00024be4) main_pane_set_t3_ParamLimits

0x4ee8,	// (0x00024be4) main_pane_set_t3

0x4efa,	// (0x00024bf6) main_pane_set_t4_ParamLimits

0x4efa,	// (0x00024bf6) main_pane_set_t4

0x0003,

0xf982,	// (0x0002f67e) main_pane_set_t_ParamLimits

0xf982,	// (0x0002f67e) main_pane_set_t

0x4f0c,	// (0x00024c08) setting_code_pane

0x4f16,	// (0x00024c12) setting_slider_graphic_pane

0x4f16,	// (0x00024c12) setting_slider_pane

0x4f16,	// (0x00024c12) setting_text_pane

0x4f16,	// (0x00024c12) setting_volume_pane

0xae41,	// (0x0002ab3d) volume_set_pane

0x1c7e,	// (0x0002197a) bg_set_opt_pane_cp

0xae49,	// (0x0002ab45) setting_slider_pane_t1

0xae62,	// (0x0002ab5e) setting_slider_pane_t2

0xae7b,	// (0x0002ab77) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0002f260) setting_slider_pane_t

0xae92,	// (0x0002ab8e) slider_set_pane

0x1b9e,	// (0x0002189a) bg_set_opt_pane_cp2

0x1cc0,	// (0x000219bc) setting_slider_graphic_pane_g1

0xaea8,	// (0x0002aba4) setting_slider_graphic_pane_t1

0xaeb7,	// (0x0002abb3) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0002f267) setting_slider_graphic_pane_t

0xaec6,	// (0x0002abc2) slider_set_pane_cp

0x1b9e,	// (0x0002189a) input_focus_pane_cp1

0x4dd1,	// (0x00024acd) list_set_text_pane

0x1b94,	// (0x00021890) setting_text_pane_g1

0x1b9e,	// (0x0002189a) input_focus_pane_cp2

0x1b94,	// (0x00021890) setting_code_pane_g1

0x1cc9,	// (0x000219c5) setting_code_pane_t1

0xe1a5,	// (0x0002dea1) set_text_pane_t1_ParamLimits

0xe1a5,	// (0x0002dea1) set_text_pane_t1

0x2538,	// (0x00022234) set_opt_bg_pane_g1

0x2540,	// (0x0002223c) set_opt_bg_pane_g2

0x4db1,	// (0x00024aad) set_opt_bg_pane_g3

0x2550,	// (0x0002224c) set_opt_bg_pane_g4

0x2558,	// (0x00022254) set_opt_bg_pane_g5

0x2560,	// (0x0002225c) set_opt_bg_pane_g6

0x4db9,	// (0x00024ab5) set_opt_bg_pane_g7

0x4dc1,	// (0x00024abd) set_opt_bg_pane_g8

0x4dc9,	// (0x00024ac5) set_opt_bg_pane_g9

0x0008,

0xf96f,	// (0x0002f66b) set_opt_bg_pane_g

0x4da4,	// (0x00024aa0) slider_set_pane_g1

0xbd6e,	// (0x0002ba6a) slider_set_pane_g2

0x0006,

0xf960,	// (0x0002f65c) slider_set_pane_g

0xbd0a,	// (0x0002ba06) volume_set_pane_g1

0xbd12,	// (0x0002ba0e) volume_set_pane_g2

0xbd1a,	// (0x0002ba16) volume_set_pane_g3

0xbd22,	// (0x0002ba1e) volume_set_pane_g4

0xbd2a,	// (0x0002ba26) volume_set_pane_g5

0xbd32,	// (0x0002ba2e) volume_set_pane_g6

0xbd3a,	// (0x0002ba36) volume_set_pane_g7

0xbd42,	// (0x0002ba3e) volume_set_pane_g8

0xbd4a,	// (0x0002ba46) volume_set_pane_g9

0xbd52,	// (0x0002ba4e) volume_set_pane_g10

0x0009,

0xf938,	// (0x0002f634) volume_set_pane_g

0x1cd7,	// (0x000219d3) indicator_pane_ParamLimits

0x1cd7,	// (0x000219d3) indicator_pane

0x1ce3,	// (0x000219df) main_idle_pane_g2_ParamLimits

0x1ce3,	// (0x000219df) main_idle_pane_g2

0x1d0b,	// (0x00021a07) main_pane_idle_g1_ParamLimits

0x1d0b,	// (0x00021a07) main_pane_idle_g1

0x1d18,	// (0x00021a14) popup_clock_digital_analogue_window_ParamLimits

0x1d18,	// (0x00021a14) popup_clock_digital_analogue_window

0x1d2f,	// (0x00021a2b) soft_indicator_pane_ParamLimits

0x1d2f,	// (0x00021a2b) soft_indicator_pane

0x1d3b,	// (0x00021a37) wallpaper_pane_ParamLimits

0x1d3b,	// (0x00021a37) wallpaper_pane

0x1b94,	// (0x00021890) wallpaper_pane_g1

0x1d4f,	// (0x00021a4b) indicator_pane_g1_ParamLimits

0x1d4f,	// (0x00021a4b) indicator_pane_g1

0x519c,	// (0x00024e98) navi_navi_icon_text_pane_srt_g1

0x1d6a,	// (0x00021a66) soft_indicator_pane_t1

0x1d84,	// (0x00021a80) aid_ps_area_pane

0x1d95,	// (0x00021a91) aid_ps_clock_pane

0x1da3,	// (0x00021a9f) aid_ps_indicator_pane

0x1daf,	// (0x00021aab) indicator_ps_pane_ParamLimits

0x1daf,	// (0x00021aab) indicator_ps_pane

0x1dbe,	// (0x00021aba) power_save_pane_g1_ParamLimits

0x1dbe,	// (0x00021aba) power_save_pane_g1

0x1dca,	// (0x00021ac6) power_save_pane_g2_ParamLimits

0x1dca,	// (0x00021ac6) power_save_pane_g2

0xaa66,	// (0x0002a762) aid_navinavi_width_pane

0x1d84,	// (0x00021a80) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0002f26c) power_save_pane_g_ParamLimits

0xf570,	// (0x0002f26c) power_save_pane_g

0x1dd8,	// (0x00021ad4) power_save_pane_t1_ParamLimits

0x1dd8,	// (0x00021ad4) power_save_pane_t1

0x1d95,	// (0x00021a91) aid_ps_clock_pane_ParamLimits

0x1da3,	// (0x00021a9f) aid_ps_indicator_pane_ParamLimits

0x1dea,	// (0x00021ae6) power_save_pane_t4_ParamLimits

0x1dea,	// (0x00021ae6) power_save_pane_t4

0x0001,

0xf575,	// (0x0002f271) power_save_pane_t_ParamLimits

0xf575,	// (0x0002f271) power_save_pane_t

0x1e14,	// (0x00021b10) power_save_t3_ParamLimits

0x1e14,	// (0x00021b10) power_save_t3

0x1dff,	// (0x00021afb) power_save_t2_ParamLimits

0x1dff,	// (0x00021afb) power_save_t2

0x1e29,	// (0x00021b25) indicator_ps_pane_g1

0x1e32,	// (0x00021b2e) ai_gene_pane_ParamLimits

0x1e32,	// (0x00021b2e) ai_gene_pane

0x1e3e,	// (0x00021b3a) ai_links_pane_ParamLimits

0x1e3e,	// (0x00021b3a) ai_links_pane

0x1e4a,	// (0x00021b46) indicator_pane_cp1_ParamLimits

0x1e4a,	// (0x00021b46) indicator_pane_cp1

0x1e56,	// (0x00021b52) main_pane_idle_g1_cp_ParamLimits

0x1e56,	// (0x00021b52) main_pane_idle_g1_cp

0x1e62,	// (0x00021b5e) popup_ai_links_title_window

0x1e6b,	// (0x00021b67) soft_indicator_pane_cp1_ParamLimits

0x1e6b,	// (0x00021b67) soft_indicator_pane_cp1

0x4b7c,	// (0x00024878) ai_links_pane_g1

0x4b85,	// (0x00024881) grid_ai_links_pane

0x4b5f,	// (0x0002485b) ai_gene_pane_1

0x4b6a,	// (0x00024866) ai_gene_pane_2

0x4b73,	// (0x0002486f) list_highlight_pane_cp4

0x4b43,	// (0x0002483f) cell_ai_link_pane_ParamLimits

0x4b43,	// (0x0002483f) cell_ai_link_pane

0x4b3b,	// (0x00024837) cell_ai_link_pane_g1

0x208f,	// (0x00021d8b) cell_ai_link_pane_g2

0x0001,

0xf913,	// (0x0002f60f) cell_ai_link_pane_g

0x1b9e,	// (0x0002189a) grid_highlight_cp2

0x1b9e,	// (0x0002189a) bg_popup_sub_pane_cp1

0x1e85,	// (0x00021b81) popup_ai_links_title_window_t1

0x4a89,	// (0x00024785) ai_gene_pane_1_g1_ParamLimits

0x4a89,	// (0x00024785) ai_gene_pane_1_g1

0x4a95,	// (0x00024791) ai_gene_pane_1_g2_ParamLimits

0x4a95,	// (0x00024791) ai_gene_pane_1_g2

0x0001,

0xf909,	// (0x0002f605) ai_gene_pane_1_g_ParamLimits

0xf909,	// (0x0002f605) ai_gene_pane_1_g

0x4aa2,	// (0x0002479e) ai_gene_pane_1_t1_ParamLimits

0x4aa2,	// (0x0002479e) ai_gene_pane_1_t1

0x4ad6,	// (0x000247d2) grid_ai_soft_ind_pane

0x4a74,	// (0x00024770) ai_gene_pane_2_t1_ParamLimits

0x4a74,	// (0x00024770) ai_gene_pane_2_t1

0x1e94,	// (0x00021b90) main_pane_empty_t1_ParamLimits

0x1e94,	// (0x00021b90) main_pane_empty_t1

0x1eac,	// (0x00021ba8) main_pane_empty_t2_ParamLimits

0x1eac,	// (0x00021ba8) main_pane_empty_t2

0x1ec1,	// (0x00021bbd) main_pane_empty_t3_ParamLimits

0x1ec1,	// (0x00021bbd) main_pane_empty_t3

0x1ed3,	// (0x00021bcf) main_pane_empty_t4_ParamLimits

0x1ed3,	// (0x00021bcf) main_pane_empty_t4

0x1ee5,	// (0x00021be1) main_pane_empty_t5_ParamLimits

0x1ee5,	// (0x00021be1) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0002f276) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0002f276) main_pane_empty_t

0x2589,	// (0x00022285) bg_popup_window_pane_ParamLimits

0x2589,	// (0x00022285) bg_popup_window_pane

0x47ee,	// (0x000244ea) find_popup_pane_cp2_ParamLimits

0x47ee,	// (0x000244ea) find_popup_pane_cp2

0x47fa,	// (0x000244f6) heading_pane_ParamLimits

0x47fa,	// (0x000244f6) heading_pane

0x1b9e,	// (0x0002189a) bg_popup_sub_pane

0x4768,	// (0x00024464) bg_popup_window_pane_g1_ParamLimits

0x4768,	// (0x00024464) bg_popup_window_pane_g1

0x4774,	// (0x00024470) bg_popup_window_pane_g2_ParamLimits

0x4774,	// (0x00024470) bg_popup_window_pane_g2

0x4780,	// (0x0002447c) bg_popup_window_pane_g3_ParamLimits

0x4780,	// (0x0002447c) bg_popup_window_pane_g3

0x478c,	// (0x00024488) bg_popup_window_pane_g4_ParamLimits

0x478c,	// (0x00024488) bg_popup_window_pane_g4

0x4798,	// (0x00024494) bg_popup_window_pane_g5_ParamLimits

0x4798,	// (0x00024494) bg_popup_window_pane_g5

0x47a4,	// (0x000244a0) bg_popup_window_pane_g6_ParamLimits

0x47a4,	// (0x000244a0) bg_popup_window_pane_g6

0x47b0,	// (0x000244ac) bg_popup_window_pane_g7_ParamLimits

0x47b0,	// (0x000244ac) bg_popup_window_pane_g7

0x47bc,	// (0x000244b8) bg_popup_window_pane_g8_ParamLimits

0x47bc,	// (0x000244b8) bg_popup_window_pane_g8

0x47c8,	// (0x000244c4) bg_popup_window_pane_g9_ParamLimits

0x47c8,	// (0x000244c4) bg_popup_window_pane_g9

0x47d4,	// (0x000244d0) bg_popup_window_pane_g10_ParamLimits

0x47d4,	// (0x000244d0) bg_popup_window_pane_g10

0x0009,

0xf8d1,	// (0x0002f5cd) bg_popup_window_pane_g_ParamLimits

0xf8d1,	// (0x0002f5cd) bg_popup_window_pane_g

0x46fd,	// (0x000243f9) bg_popup_heading_pane_ParamLimits

0x46fd,	// (0x000243f9) bg_popup_heading_pane

0xbdf6,	// (0x0002baf2) tabs_4_passive_pane_cp_srt_ParamLimits

0xbdf6,	// (0x0002baf2) tabs_4_passive_pane_cp_srt

0xbe08,	// (0x0002bb04) tabs_4_passive_pane_srt_ParamLimits

0x4711,	// (0x0002440d) heading_pane_g2

0xbe08,	// (0x0002bb04) tabs_4_passive_pane_srt

0x3477,	// (0x00023173) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3477,	// (0x00023173) bg_passive_tab_pane_cp3_srt

0x4719,	// (0x00024415) heading_pane_t1_ParamLimits

0x4719,	// (0x00024415) heading_pane_t1

0x4730,	// (0x0002442c) heading_pane_t2_ParamLimits

0x4730,	// (0x0002442c) heading_pane_t2

0x0001,

0xf8cc,	// (0x0002f5c8) heading_pane_t_ParamLimits

0xf8cc,	// (0x0002f5c8) heading_pane_t

0x4238,	// (0x00023f34) bg_popup_heading_pane_g1

0x42e7,	// (0x00023fe3) bg_popup_heading_pane_g2

0x42f1,	// (0x00023fed) bg_popup_heading_pane_g3

0x42fb,	// (0x00023ff7) bg_popup_heading_pane_g4

0x4305,	// (0x00024001) bg_popup_heading_pane_g5

0x430f,	// (0x0002400b) bg_popup_heading_pane_g6

0x4317,	// (0x00024013) bg_popup_heading_pane_g7

0x431f,	// (0x0002401b) bg_popup_heading_pane_g8

0x4329,	// (0x00024025) bg_popup_heading_pane_g9

0x0008,

0xf888,	// (0x0002f584) bg_popup_heading_pane_g

0x3979,	// (0x00023675) bg_popup_sub_pane_g1

0x3981,	// (0x0002367d) bg_popup_sub_pane_g2

0x3989,	// (0x00023685) bg_popup_sub_pane_g3

0x3991,	// (0x0002368d) bg_popup_sub_pane_g4

0x3999,	// (0x00023695) bg_popup_sub_pane_g5

0x39a1,	// (0x0002369d) bg_popup_sub_pane_g6

0x39a9,	// (0x000236a5) bg_popup_sub_pane_g7

0x39b1,	// (0x000236ad) bg_popup_sub_pane_g8

0x39b9,	// (0x000236b5) bg_popup_sub_pane_g9

0x0008,

0xf862,	// (0x0002f55e) bg_popup_sub_pane_g

0x1ef9,	// (0x00021bf5) bg_popup_window_pane_cp5_ParamLimits

0x1ef9,	// (0x00021bf5) bg_popup_window_pane_cp5

0x1f15,	// (0x00021c11) popup_note_window_g1_ParamLimits

0x1f15,	// (0x00021c11) popup_note_window_g1

0x1f21,	// (0x00021c1d) popup_note_window_t1_ParamLimits

0x1f21,	// (0x00021c1d) popup_note_window_t1

0x1f33,	// (0x00021c2f) popup_note_window_t2_ParamLimits

0x1f33,	// (0x00021c2f) popup_note_window_t2

0x1f45,	// (0x00021c41) popup_note_window_t3_ParamLimits

0x1f45,	// (0x00021c41) popup_note_window_t3

0x1f57,	// (0x00021c53) popup_note_window_t4_ParamLimits

0x1f57,	// (0x00021c53) popup_note_window_t4

0x1f7f,	// (0x00021c7b) popup_note_window_t5_ParamLimits

0x1f7f,	// (0x00021c7b) popup_note_window_t5

0x0004,

0xf585,	// (0x0002f281) popup_note_window_t_ParamLimits

0xf585,	// (0x0002f281) popup_note_window_t

0x1fa3,	// (0x00021c9f) bg_popup_window_pane_cp6_ParamLimits

0x1fa3,	// (0x00021c9f) bg_popup_window_pane_cp6

0x41ac,	// (0x00023ea8) popup_note_image_window_g1_ParamLimits

0x41ac,	// (0x00023ea8) popup_note_image_window_g1

0x41b8,	// (0x00023eb4) popup_note_image_window_g2_ParamLimits

0x41b8,	// (0x00023eb4) popup_note_image_window_g2

0x0001,

0xf856,	// (0x0002f552) popup_note_image_window_g_ParamLimits

0xf856,	// (0x0002f552) popup_note_image_window_g

0x41d1,	// (0x00023ecd) popup_note_image_window_t1_ParamLimits

0x41d1,	// (0x00023ecd) popup_note_image_window_t1

0x41ea,	// (0x00023ee6) popup_note_image_window_t2_ParamLimits

0x41ea,	// (0x00023ee6) popup_note_image_window_t2

0x4203,	// (0x00023eff) popup_note_image_window_t3_ParamLimits

0x4203,	// (0x00023eff) popup_note_image_window_t3

0x0002,

0xf85b,	// (0x0002f557) popup_note_image_window_t_ParamLimits

0xf85b,	// (0x0002f557) popup_note_image_window_t

0x406d,	// (0x00023d69) bg_popup_window_pane_cp7_ParamLimits

0x406d,	// (0x00023d69) bg_popup_window_pane_cp7

0x409d,	// (0x00023d99) popup_note_wait_window_g1_ParamLimits

0x409d,	// (0x00023d99) popup_note_wait_window_g1

0x40a9,	// (0x00023da5) popup_note_wait_window_g2_ParamLimits

0x40a9,	// (0x00023da5) popup_note_wait_window_g2

0x0002,

0xf844,	// (0x0002f540) popup_note_wait_window_g_ParamLimits

0xf844,	// (0x0002f540) popup_note_wait_window_g

0x40c1,	// (0x00023dbd) popup_note_wait_window_t1_ParamLimits

0x40c1,	// (0x00023dbd) popup_note_wait_window_t1

0x40e8,	// (0x00023de4) popup_note_wait_window_t2_ParamLimits

0x40e8,	// (0x00023de4) popup_note_wait_window_t2

0x4105,	// (0x00023e01) popup_note_wait_window_t3_ParamLimits

0x4105,	// (0x00023e01) popup_note_wait_window_t3

0x4118,	// (0x00023e14) popup_note_wait_window_t4_ParamLimits

0x4118,	// (0x00023e14) popup_note_wait_window_t4

0x0004,

0xf84b,	// (0x0002f547) popup_note_wait_window_t_ParamLimits

0xf84b,	// (0x0002f547) popup_note_wait_window_t

0x413d,	// (0x00023e39) wait_bar_pane_ParamLimits

0x413d,	// (0x00023e39) wait_bar_pane

0x1b9e,	// (0x0002189a) wait_anim_pane

0x1b9e,	// (0x0002189a) wait_border_pane

0x1b94,	// (0x00021890) wait_anim_pane_g1

0x1b94,	// (0x00021890) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0002f400) wait_anim_pane_g

0x4011,	// (0x00023d0d) wait_border_pane_g1

0x401c,	// (0x00023d18) wait_border_pane_g2

0x4025,	// (0x00023d21) wait_border_pane_g3

0x0002,

0xf83d,	// (0x0002f539) wait_border_pane_g

0x3e81,	// (0x00023b7d) bg_popup_window_pane_cp16_ParamLimits

0x3e81,	// (0x00023b7d) bg_popup_window_pane_cp16

0x3f81,	// (0x00023c7d) indicator_popup_pane_cp4_ParamLimits

0x3f81,	// (0x00023c7d) indicator_popup_pane_cp4

0x3f95,	// (0x00023c91) popup_query_data_window_t1_ParamLimits

0x3f95,	// (0x00023c91) popup_query_data_window_t1

0x3fa7,	// (0x00023ca3) popup_query_data_window_t2_ParamLimits

0x3fa7,	// (0x00023ca3) popup_query_data_window_t2

0x3fc0,	// (0x00023cbc) popup_query_data_window_t3_ParamLimits

0x3fc0,	// (0x00023cbc) popup_query_data_window_t3

0x0002,

0xf836,	// (0x0002f532) popup_query_data_window_t_ParamLimits

0xf836,	// (0x0002f532) popup_query_data_window_t

0x3fda,	// (0x00023cd6) query_popup_data_pane_ParamLimits

0x3fda,	// (0x00023cd6) query_popup_data_pane

0x3fee,	// (0x00023cea) query_popup_data_pane_cp1_ParamLimits

0x3fee,	// (0x00023cea) query_popup_data_pane_cp1

0x3e81,	// (0x00023b7d) bg_popup_window_pane_cp10_ParamLimits

0x3e81,	// (0x00023b7d) bg_popup_window_pane_cp10

0x3eb3,	// (0x00023baf) indicator_popup_pane_ParamLimits

0x3eb3,	// (0x00023baf) indicator_popup_pane

0x3ed5,	// (0x00023bd1) popup_query_code_window_t1_ParamLimits

0x3ed5,	// (0x00023bd1) popup_query_code_window_t1

0x3eef,	// (0x00023beb) popup_query_code_window_t2_ParamLimits

0x3eef,	// (0x00023beb) popup_query_code_window_t2

0x3f38,	// (0x00023c34) popup_query_code_window_t3_ParamLimits

0x3f38,	// (0x00023c34) popup_query_code_window_t3

0x0002,

0xf82f,	// (0x0002f52b) popup_query_code_window_t_ParamLimits

0xf82f,	// (0x0002f52b) popup_query_code_window_t

0x3f67,	// (0x00023c63) query_popup_pane_ParamLimits

0x3f67,	// (0x00023c63) query_popup_pane

0x1fa3,	// (0x00021c9f) bg_popup_window_pane_cp15_ParamLimits

0x1fa3,	// (0x00021c9f) bg_popup_window_pane_cp15

0x1fc1,	// (0x00021cbd) indicator_popup_pane_cp1_ParamLimits

0x1fc1,	// (0x00021cbd) indicator_popup_pane_cp1

0x1fd4,	// (0x00021cd0) indicator_popup_pane_cp2_ParamLimits

0x1fd4,	// (0x00021cd0) indicator_popup_pane_cp2

0x1fe7,	// (0x00021ce3) popup_query_data_code_window_g1_ParamLimits

0x1fe7,	// (0x00021ce3) popup_query_data_code_window_g1

0x1ffa,	// (0x00021cf6) popup_query_data_code_window_t1_ParamLimits

0x1ffa,	// (0x00021cf6) popup_query_data_code_window_t1

0x200c,	// (0x00021d08) popup_query_data_code_window_t2_ParamLimits

0x200c,	// (0x00021d08) popup_query_data_code_window_t2

0x201e,	// (0x00021d1a) popup_query_data_code_window_t3_ParamLimits

0x201e,	// (0x00021d1a) popup_query_data_code_window_t3

0x2034,	// (0x00021d30) popup_query_data_code_window_t4_ParamLimits

0x2034,	// (0x00021d30) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0002f28c) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0002f28c) popup_query_data_code_window_t

0xbab3,	// (0x0002b7af) list_single_midp_graphic_pane_g3

0x204c,	// (0x00021d48) query_popup_data_pane_cp2_ParamLimits

0x205f,	// (0x00021d5b) query_popup_pane_cp2_ParamLimits

0x205f,	// (0x00021d5b) query_popup_pane_cp2

0x1b9e,	// (0x0002189a) bg_popup_window_pane_cp11

0x3e79,	// (0x00023b75) heading_pane_cp5

0x2147,	// (0x00021e43) listscroll_popup_info_pane

0x1b9e,	// (0x0002189a) input_focus_pane_cp3

0x2072,	// (0x00021d6e) query_popup_pane_t1

0x2080,	// (0x00021d7c) list_popup_info_pane_ParamLimits

0x2080,	// (0x00021d7c) list_popup_info_pane

0x208f,	// (0x00021d8b) listscroll_popup_info_pane_g1

0x2097,	// (0x00021d93) scroll_pane_cp7

0x20a1,	// (0x00021d9d) popup_info_list_pane_t1_ParamLimits

0x20a1,	// (0x00021d9d) popup_info_list_pane_t1

0x20bb,	// (0x00021db7) popup_info_list_pane_t2_ParamLimits

0x20bb,	// (0x00021db7) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0002f295) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0002f295) popup_info_list_pane_t

0x1b9e,	// (0x0002189a) bg_popup_window_pane_cp12

0x51b6,	// (0x00024eb2) find_popup_pane

0x1c7e,	// (0x0002197a) bg_popup_window_pane_cp3

0x20d5,	// (0x00021dd1) heading_pane_cp3

0x20e1,	// (0x00021ddd) listscroll_popup_graphic_pane

0x1b9e,	// (0x0002189a) bg_popup_window_pane_cp4

0x213d,	// (0x00021e39) heading_pane_cp4

0x2147,	// (0x00021e43) listscroll_popup_colour_pane

0x214f,	// (0x00021e4b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x214f,	// (0x00021e4b) cell_large_graphic_colour_none_popup_pane

0x2163,	// (0x00021e5f) grid_large_graphic_colour_popup_pane_ParamLimits

0x2163,	// (0x00021e5f) grid_large_graphic_colour_popup_pane

0x2187,	// (0x00021e83) listscroll_popup_colour_pane_g1_ParamLimits

0x2187,	// (0x00021e83) listscroll_popup_colour_pane_g1

0x219e,	// (0x00021e9a) listscroll_popup_colour_pane_g2_ParamLimits

0x219e,	// (0x00021e9a) listscroll_popup_colour_pane_g2

0x21b5,	// (0x00021eb1) listscroll_popup_colour_pane_g3_ParamLimits

0x21b5,	// (0x00021eb1) listscroll_popup_colour_pane_g3

0x21c5,	// (0x00021ec1) listscroll_popup_colour_pane_g4_ParamLimits

0x21c5,	// (0x00021ec1) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0002f29a) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0002f29a) listscroll_popup_colour_pane_g

0x21d4,	// (0x00021ed0) scroll_pane_cp6_ParamLimits

0x21d4,	// (0x00021ed0) scroll_pane_cp6

0x21e6,	// (0x00021ee2) cell_large_graphic_colour_popup_pane_ParamLimits

0x21e6,	// (0x00021ee2) cell_large_graphic_colour_popup_pane

0x2205,	// (0x00021f01) cell_large_graphic_colour_none_popup_pane_t1

0x1b9e,	// (0x0002189a) grid_highlight_pane_cp5

0x2214,	// (0x00021f10) cell_large_graphic_colour_popup_pane_g1

0x221c,	// (0x00021f18) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0002f2a3) cell_large_graphic_colour_popup_pane_g

0x2224,	// (0x00021f20) cell_large_graphic_colour_popup_pane_g2_copy1

0x222d,	// (0x00021f29) grid_highlight_pane_cp4

0x2235,	// (0x00021f31) bg_popup_window_pane_cp8_ParamLimits

0x2235,	// (0x00021f31) bg_popup_window_pane_cp8

0x2250,	// (0x00021f4c) popup_snote_single_text_window_g1_ParamLimits

0x2250,	// (0x00021f4c) popup_snote_single_text_window_g1

0x2262,	// (0x00021f5e) popup_snote_single_text_window_t1_ParamLimits

0x2262,	// (0x00021f5e) popup_snote_single_text_window_t1

0x2275,	// (0x00021f71) popup_snote_single_text_window_t2_ParamLimits

0x2275,	// (0x00021f71) popup_snote_single_text_window_t2

0x2288,	// (0x00021f84) popup_snote_single_text_window_t3_ParamLimits

0x2288,	// (0x00021f84) popup_snote_single_text_window_t3

0x22c1,	// (0x00021fbd) popup_snote_single_text_window_t4_ParamLimits

0x22c1,	// (0x00021fbd) popup_snote_single_text_window_t4

0x22f5,	// (0x00021ff1) popup_snote_single_text_window_t5_ParamLimits

0x22f5,	// (0x00021ff1) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002f2a8) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002f2a8) popup_snote_single_text_window_t

0x2324,	// (0x00022020) bg_popup_window_pane_cp9_ParamLimits

0x2324,	// (0x00022020) bg_popup_window_pane_cp9

0x2250,	// (0x00021f4c) popup_snote_single_graphic_window_g1_ParamLimits

0x2250,	// (0x00021f4c) popup_snote_single_graphic_window_g1

0x2332,	// (0x0002202e) popup_snote_single_graphic_window_g2_ParamLimits

0x2332,	// (0x0002202e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0002f2b3) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0002f2b3) popup_snote_single_graphic_window_g

0x233e,	// (0x0002203a) popup_snote_single_graphic_window_t1_ParamLimits

0x233e,	// (0x0002203a) popup_snote_single_graphic_window_t1

0x2351,	// (0x0002204d) popup_snote_single_graphic_window_t2_ParamLimits

0x2351,	// (0x0002204d) popup_snote_single_graphic_window_t2

0x2364,	// (0x00022060) popup_snote_single_graphic_window_t3_ParamLimits

0x2364,	// (0x00022060) popup_snote_single_graphic_window_t3

0x239d,	// (0x00022099) popup_snote_single_graphic_window_t4_ParamLimits

0x239d,	// (0x00022099) popup_snote_single_graphic_window_t4

0x23d1,	// (0x000220cd) popup_snote_single_graphic_window_t5_ParamLimits

0x23d1,	// (0x000220cd) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002f2b8) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002f2b8) popup_snote_single_graphic_window_t

0x50f6,	// (0x00024df2) grid_graphic_popup_pane_ParamLimits

0x50f6,	// (0x00024df2) grid_graphic_popup_pane

0x5122,	// (0x00024e1e) listscroll_popup_graphic_pane_g1_ParamLimits

0x5122,	// (0x00024e1e) listscroll_popup_graphic_pane_g1

0x5136,	// (0x00024e32) listscroll_popup_graphic_pane_g2_ParamLimits

0x5136,	// (0x00024e32) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ac,	// (0x0002f6a8) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ac,	// (0x0002f6a8) listscroll_popup_graphic_pane_g

0x514a,	// (0x00024e46) scroll_pane_cp5

0x50a1,	// (0x00024d9d) cell_graphic_popup_pane_ParamLimits

0x50a1,	// (0x00024d9d) cell_graphic_popup_pane

0x5082,	// (0x00024d7e) cell_graphic_popup_pane_g1

0x508a,	// (0x00024d86) cell_graphic_popup_pane_g2

0x2224,	// (0x00021f20) cell_graphic_popup_pane_g3

0x0002,

0xf9a5,	// (0x0002f6a1) cell_graphic_popup_pane_g

0x5093,	// (0x00024d8f) cell_graphic_popup_pane_t2

0x222d,	// (0x00021f29) grid_highlight_pane_cp3

0x2412,	// (0x0002210e) list_gen_pane_ParamLimits

0x2412,	// (0x0002210e) list_gen_pane

0x2444,	// (0x00022140) scroll_pane

0x4fe4,	// (0x00024ce0) bg_list_pane_g1_ParamLimits

0x4fe4,	// (0x00024ce0) bg_list_pane_g1

0x4fff,	// (0x00024cfb) bg_list_pane_g2_ParamLimits

0x4fff,	// (0x00024cfb) bg_list_pane_g2

0x5012,	// (0x00024d0e) bg_list_pane_g3_ParamLimits

0x5012,	// (0x00024d0e) bg_list_pane_g3

0x5024,	// (0x00024d20) bg_list_pane_g4_ParamLimits

0x5024,	// (0x00024d20) bg_list_pane_g4

0x5036,	// (0x00024d32) bg_list_pane_g5_ParamLimits

0x5036,	// (0x00024d32) bg_list_pane_g5

0x0004,

0xf99a,	// (0x0002f696) bg_list_pane_g_ParamLimits

0xf99a,	// (0x0002f696) bg_list_pane_g

0xee75,	// (0x0002eb71) list_double2_graphic_large_graphic_pane_ParamLimits

0xee75,	// (0x0002eb71) list_double2_graphic_large_graphic_pane

0xee75,	// (0x0002eb71) list_double2_graphic_pane_ParamLimits

0xee75,	// (0x0002eb71) list_double2_graphic_pane

0xee75,	// (0x0002eb71) list_double2_large_graphic_pane_ParamLimits

0xee75,	// (0x0002eb71) list_double2_large_graphic_pane

0xee75,	// (0x0002eb71) list_double2_pane_ParamLimits

0xee75,	// (0x0002eb71) list_double2_pane

0xee75,	// (0x0002eb71) list_double_graphic_heading_pane_ParamLimits

0xee75,	// (0x0002eb71) list_double_graphic_heading_pane

0xee75,	// (0x0002eb71) list_double_graphic_pane_ParamLimits

0xee75,	// (0x0002eb71) list_double_graphic_pane

0xee75,	// (0x0002eb71) list_double_heading_pane_ParamLimits

0xee75,	// (0x0002eb71) list_double_heading_pane

0xee75,	// (0x0002eb71) list_double_large_graphic_pane_ParamLimits

0xee75,	// (0x0002eb71) list_double_large_graphic_pane

0xee75,	// (0x0002eb71) list_double_number_pane_ParamLimits

0xee75,	// (0x0002eb71) list_double_number_pane

0xee75,	// (0x0002eb71) list_double_pane_ParamLimits

0xee75,	// (0x0002eb71) list_double_pane

0xee75,	// (0x0002eb71) list_double_time_pane_ParamLimits

0xee75,	// (0x0002eb71) list_double_time_pane

0xee75,	// (0x0002eb71) list_setting_number_pane_ParamLimits

0xee75,	// (0x0002eb71) list_setting_number_pane

0xee75,	// (0x0002eb71) list_setting_pane_ParamLimits

0xee75,	// (0x0002eb71) list_setting_pane

0xeebd,	// (0x0002ebb9) list_single_2graphic_pane_ParamLimits

0xeebd,	// (0x0002ebb9) list_single_2graphic_pane

0xeebd,	// (0x0002ebb9) list_single_graphic_heading_pane_ParamLimits

0xeebd,	// (0x0002ebb9) list_single_graphic_heading_pane

0xeebd,	// (0x0002ebb9) list_single_graphic_pane_ParamLimits

0xeebd,	// (0x0002ebb9) list_single_graphic_pane

0xeebd,	// (0x0002ebb9) list_single_heading_pane_ParamLimits

0xeebd,	// (0x0002ebb9) list_single_heading_pane

0xef2b,	// (0x0002ec27) list_single_large_graphic_pane_ParamLimits

0xef2b,	// (0x0002ec27) list_single_large_graphic_pane

0xeebd,	// (0x0002ebb9) list_single_number_heading_pane_ParamLimits

0xeebd,	// (0x0002ebb9) list_single_number_heading_pane

0xeebd,	// (0x0002ebb9) list_single_number_pane_ParamLimits

0xeebd,	// (0x0002ebb9) list_single_number_pane

0xeebd,	// (0x0002ebb9) list_single_pane_ParamLimits

0xeebd,	// (0x0002ebb9) list_single_pane

0x1b9e,	// (0x0002189a) list_highlight_pane_cp1

0xe1cb,	// (0x0002dec7) list_single_pane_g1_ParamLimits

0xe1cb,	// (0x0002dec7) list_single_pane_g1

0xe1d7,	// (0x0002ded3) list_single_pane_g2_ParamLimits

0xe1d7,	// (0x0002ded3) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0002f2ca) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0002f2ca) list_single_pane_g

0xee5f,	// (0x0002eb5b) list_single_pane_t1_ParamLimits

0xee5f,	// (0x0002eb5b) list_single_pane_t1

0xe1cb,	// (0x0002dec7) list_single_number_pane_g1_ParamLimits

0xe1cb,	// (0x0002dec7) list_single_number_pane_g1

0xe1d7,	// (0x0002ded3) list_single_number_pane_g2_ParamLimits

0xe1d7,	// (0x0002ded3) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0002f2ca) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0002f2ca) list_single_number_pane_g

0xed93,	// (0x0002ea8f) list_single_number_pane_t1_ParamLimits

0xed93,	// (0x0002ea8f) list_single_number_pane_t1

0xee1f,	// (0x0002eb1b) list_single_number_pane_t2_ParamLimits

0xee1f,	// (0x0002eb1b) list_single_number_pane_t2

0x0001,

0xf95b,	// (0x0002f657) list_single_number_pane_t_ParamLimits

0xf95b,	// (0x0002f657) list_single_number_pane_t

0xe1bf,	// (0x0002debb) list_single_graphic_pane_g1_ParamLimits

0xe1bf,	// (0x0002debb) list_single_graphic_pane_g1

0xe1cb,	// (0x0002dec7) list_single_graphic_pane_g2_ParamLimits

0xe1cb,	// (0x0002dec7) list_single_graphic_pane_g2

0xe1d7,	// (0x0002ded3) list_single_graphic_pane_g3_ParamLimits

0xe1d7,	// (0x0002ded3) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0002f2c3) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0002f2c3) list_single_graphic_pane_g

0xe1e3,	// (0x0002dedf) list_single_graphic_pane_t1_ParamLimits

0xe1e3,	// (0x0002dedf) list_single_graphic_pane_t1

0xe1cb,	// (0x0002dec7) list_single_heading_pane_g1_ParamLimits

0xe1cb,	// (0x0002dec7) list_single_heading_pane_g1

0xe1d7,	// (0x0002ded3) list_single_heading_pane_g2_ParamLimits

0xe1d7,	// (0x0002ded3) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002f2ca) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002f2ca) list_single_heading_pane_g

0xe1f9,	// (0x0002def5) list_single_heading_pane_t1_ParamLimits

0xe1f9,	// (0x0002def5) list_single_heading_pane_t1

0xe20f,	// (0x0002df0b) list_single_heading_pane_t2_ParamLimits

0xe20f,	// (0x0002df0b) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0002f2cf) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0002f2cf) list_single_heading_pane_t

0xe1cb,	// (0x0002dec7) list_single_number_heading_pane_g1_ParamLimits

0xe1cb,	// (0x0002dec7) list_single_number_heading_pane_g1

0xe1d7,	// (0x0002ded3) list_single_number_heading_pane_g2_ParamLimits

0xe1d7,	// (0x0002ded3) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002f2ca) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002f2ca) list_single_number_heading_pane_g

0xe1f9,	// (0x0002def5) list_single_number_heading_pane_t1_ParamLimits

0xe1f9,	// (0x0002def5) list_single_number_heading_pane_t1

0xe221,	// (0x0002df1d) list_single_number_heading_pane_t2_ParamLimits

0xe221,	// (0x0002df1d) list_single_number_heading_pane_t2

0xe233,	// (0x0002df2f) list_single_number_heading_pane_t3_ParamLimits

0xe233,	// (0x0002df2f) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0002f2d4) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0002f2d4) list_single_number_heading_pane_t

0xe245,	// (0x0002df41) list_single_graphic_heading_pane_g1_ParamLimits

0xe245,	// (0x0002df41) list_single_graphic_heading_pane_g1

0xe251,	// (0x0002df4d) list_single_graphic_heading_pane_g4_ParamLimits

0xe251,	// (0x0002df4d) list_single_graphic_heading_pane_g4

0xe1d7,	// (0x0002ded3) list_single_graphic_heading_pane_g5_ParamLimits

0xe1d7,	// (0x0002ded3) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0002f2db) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0002f2db) list_single_graphic_heading_pane_g

0xe1f9,	// (0x0002def5) list_single_graphic_heading_pane_t1_ParamLimits

0xe1f9,	// (0x0002def5) list_single_graphic_heading_pane_t1

0xe262,	// (0x0002df5e) list_single_graphic_heading_pane_t2_ParamLimits

0xe262,	// (0x0002df5e) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0002f2e2) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0002f2e2) list_single_graphic_heading_pane_t

0xe274,	// (0x0002df70) list_single_large_graphic_pane_g1_ParamLimits

0xe274,	// (0x0002df70) list_single_large_graphic_pane_g1

0xe280,	// (0x0002df7c) list_single_large_graphic_pane_g2_ParamLimits

0xe280,	// (0x0002df7c) list_single_large_graphic_pane_g2

0xe28c,	// (0x0002df88) list_single_large_graphic_pane_g3_ParamLimits

0xe28c,	// (0x0002df88) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0002f2e7) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0002f2e7) list_single_large_graphic_pane_g

0x401c,	// (0x00023d18) wait_border_pane_g2_copy1

0xe298,	// (0x0002df94) list_single_large_graphic_pane_g4_cp2

0xe2a0,	// (0x0002df9c) list_single_large_graphic_pane_t1_ParamLimits

0xe2a0,	// (0x0002df9c) list_single_large_graphic_pane_t1

0xe2b6,	// (0x0002dfb2) list_double_pane_g1_ParamLimits

0xe2b6,	// (0x0002dfb2) list_double_pane_g1

0xe2c2,	// (0x0002dfbe) list_double_pane_g2_ParamLimits

0xe2c2,	// (0x0002dfbe) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0002f2ee) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0002f2ee) list_double_pane_g

0xe2ce,	// (0x0002dfca) list_double_pane_t1_ParamLimits

0xe2ce,	// (0x0002dfca) list_double_pane_t1

0xe2e4,	// (0x0002dfe0) list_double_pane_t2_ParamLimits

0xe2e4,	// (0x0002dfe0) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0002f2f3) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0002f2f3) list_double_pane_t

0xe2f6,	// (0x0002dff2) list_double2_pane_g1_ParamLimits

0xe2f6,	// (0x0002dff2) list_double2_pane_g1

0xe2c2,	// (0x0002dfbe) list_double2_pane_g2_ParamLimits

0xe2c2,	// (0x0002dfbe) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0002f2f8) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0002f2f8) list_double2_pane_g

0xe2ce,	// (0x0002dfca) list_double2_pane_t1_ParamLimits

0xe2ce,	// (0x0002dfca) list_double2_pane_t1

0xe307,	// (0x0002e003) list_double2_pane_t2_ParamLimits

0xe307,	// (0x0002e003) list_double2_pane_t2

0x0001,

0xf601,	// (0x0002f2fd) list_double2_pane_t_ParamLimits

0xf601,	// (0x0002f2fd) list_double2_pane_t

0xe2b6,	// (0x0002dfb2) list_double_number_pane_g1_ParamLimits

0xe2b6,	// (0x0002dfb2) list_double_number_pane_g1

0xe2c2,	// (0x0002dfbe) list_double_number_pane_g2_ParamLimits

0xe2c2,	// (0x0002dfbe) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0002f2ee) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0002f2ee) list_double_number_pane_g

0xe319,	// (0x0002e015) list_double_number_pane_t1_ParamLimits

0xe319,	// (0x0002e015) list_double_number_pane_t1

0xe32b,	// (0x0002e027) list_double_number_pane_t2_ParamLimits

0xe32b,	// (0x0002e027) list_double_number_pane_t2

0xe341,	// (0x0002e03d) list_double_number_pane_t3_ParamLimits

0xe341,	// (0x0002e03d) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0002f302) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0002f302) list_double_number_pane_t

0xe353,	// (0x0002e04f) list_double_graphic_pane_g1_ParamLimits

0xe353,	// (0x0002e04f) list_double_graphic_pane_g1

0xe35f,	// (0x0002e05b) list_double_graphic_pane_g2_ParamLimits

0xe35f,	// (0x0002e05b) list_double_graphic_pane_g2

0xe36e,	// (0x0002e06a) list_double_graphic_pane_g3_ParamLimits

0xe36e,	// (0x0002e06a) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0002f309) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0002f309) list_double_graphic_pane_g

0xe386,	// (0x0002e082) list_double_graphic_pane_t1_ParamLimits

0xe386,	// (0x0002e082) list_double_graphic_pane_t1

0xe39c,	// (0x0002e098) list_double_graphic_pane_t2_ParamLimits

0xe39c,	// (0x0002e098) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0002f312) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0002f312) list_double_graphic_pane_t

0xe353,	// (0x0002e04f) list_double2_graphic_pane_g1_ParamLimits

0xe353,	// (0x0002e04f) list_double2_graphic_pane_g1

0xe3ae,	// (0x0002e0aa) list_double2_graphic_pane_g2_ParamLimits

0xe3ae,	// (0x0002e0aa) list_double2_graphic_pane_g2

0xe3ba,	// (0x0002e0b6) list_double2_graphic_pane_g3_ParamLimits

0xe3ba,	// (0x0002e0b6) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0002f317) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0002f317) list_double2_graphic_pane_g

0xe32b,	// (0x0002e027) list_double2_graphic_pane_t1_ParamLimits

0xe32b,	// (0x0002e027) list_double2_graphic_pane_t1

0xe3c6,	// (0x0002e0c2) list_double2_graphic_pane_t2_ParamLimits

0xe3c6,	// (0x0002e0c2) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0002f31e) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0002f31e) list_double2_graphic_pane_t

0xe3d8,	// (0x0002e0d4) list_double_large_graphic_pane_g1_ParamLimits

0xe3d8,	// (0x0002e0d4) list_double_large_graphic_pane_g1

0xe2f6,	// (0x0002dff2) list_double_large_graphic_pane_g2_ParamLimits

0xe2f6,	// (0x0002dff2) list_double_large_graphic_pane_g2

0xe2c2,	// (0x0002dfbe) list_double_large_graphic_pane_g3_ParamLimits

0xe2c2,	// (0x0002dfbe) list_double_large_graphic_pane_g3

0xe403,	// (0x0002e0ff) list_double_large_graphic_pane_g4_ParamLimits

0xe403,	// (0x0002e0ff) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0002f323) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0002f323) list_double_large_graphic_pane_g

0xe42b,	// (0x0002e127) list_double_large_graphic_pane_t1_ParamLimits

0xe42b,	// (0x0002e127) list_double_large_graphic_pane_t1

0xe444,	// (0x0002e140) list_double_large_graphic_pane_t2_ParamLimits

0xe444,	// (0x0002e140) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0002f32e) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0002f32e) list_double_large_graphic_pane_t

0xe456,	// (0x0002e152) list_double2_large_graphic_pane_g1_ParamLimits

0xe456,	// (0x0002e152) list_double2_large_graphic_pane_g1

0xe2f6,	// (0x0002dff2) list_double2_large_graphic_pane_g2_ParamLimits

0xe2f6,	// (0x0002dff2) list_double2_large_graphic_pane_g2

0xe2c2,	// (0x0002dfbe) list_double2_large_graphic_pane_g3_ParamLimits

0xe2c2,	// (0x0002dfbe) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0002f333) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0002f333) list_double2_large_graphic_pane_g

0xe462,	// (0x0002e15e) list_double2_large_graphic_pane_t1_ParamLimits

0xe462,	// (0x0002e15e) list_double2_large_graphic_pane_t1

0xe478,	// (0x0002e174) list_double2_large_graphic_pane_t2_ParamLimits

0xe478,	// (0x0002e174) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0002f33a) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0002f33a) list_double2_large_graphic_pane_t

0xe48a,	// (0x0002e186) list_double_heading_pane_g1_ParamLimits

0xe48a,	// (0x0002e186) list_double_heading_pane_g1

0xe49b,	// (0x0002e197) list_double_heading_pane_g2_ParamLimits

0xe49b,	// (0x0002e197) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0002f33f) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0002f33f) list_double_heading_pane_g

0xe948,	// (0x0002e644) list_double_heading_pane_t1_ParamLimits

0xe948,	// (0x0002e644) list_double_heading_pane_t1

0xe307,	// (0x0002e003) list_double_heading_pane_t2_ParamLimits

0xe307,	// (0x0002e003) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0002f344) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0002f344) list_double_heading_pane_t

0xe353,	// (0x0002e04f) list_double_graphic_heading_pane_g1_ParamLimits

0xe353,	// (0x0002e04f) list_double_graphic_heading_pane_g1

0xe48a,	// (0x0002e186) list_double_graphic_heading_pane_g2_ParamLimits

0xe48a,	// (0x0002e186) list_double_graphic_heading_pane_g2

0xe49b,	// (0x0002e197) list_double_graphic_heading_pane_g3_ParamLimits

0xe49b,	// (0x0002e197) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0002f349) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0002f349) list_double_graphic_heading_pane_g

0xe95e,	// (0x0002e65a) list_double_graphic_heading_pane_t1_ParamLimits

0xe95e,	// (0x0002e65a) list_double_graphic_heading_pane_t1

0xe3c6,	// (0x0002e0c2) list_double_graphic_heading_pane_t2_ParamLimits

0xe3c6,	// (0x0002e0c2) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0002f350) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0002f350) list_double_graphic_heading_pane_t

0xe2f6,	// (0x0002dff2) list_double_time_pane_g1_ParamLimits

0xe2f6,	// (0x0002dff2) list_double_time_pane_g1

0xe2c2,	// (0x0002dfbe) list_double_time_pane_g2_ParamLimits

0xe2c2,	// (0x0002dfbe) list_double_time_pane_g2

0x0001,

0xf5fc,	// (0x0002f2f8) list_double_time_pane_g_ParamLimits

0xf5fc,	// (0x0002f2f8) list_double_time_pane_g

0xe462,	// (0x0002e15e) list_double_time_pane_t1_ParamLimits

0xe462,	// (0x0002e15e) list_double_time_pane_t1

0xe974,	// (0x0002e670) list_double_time_pane_t2_ParamLimits

0xe974,	// (0x0002e670) list_double_time_pane_t2

0xe986,	// (0x0002e682) list_double_time_pane_t3_ParamLimits

0xe986,	// (0x0002e682) list_double_time_pane_t3

0xe998,	// (0x0002e694) list_double_time_pane_t4_ParamLimits

0xe998,	// (0x0002e694) list_double_time_pane_t4

0x0003,

0xf659,	// (0x0002f355) list_double_time_pane_t_ParamLimits

0xf659,	// (0x0002f355) list_double_time_pane_t

0xe9aa,	// (0x0002e6a6) list_setting_pane_g1_ParamLimits

0xe9aa,	// (0x0002e6a6) list_setting_pane_g1

0xe9b6,	// (0x0002e6b2) list_setting_pane_g2_ParamLimits

0xe9b6,	// (0x0002e6b2) list_setting_pane_g2

0x0001,

0xf662,	// (0x0002f35e) list_setting_pane_g_ParamLimits

0xf662,	// (0x0002f35e) list_setting_pane_g

0xe9c2,	// (0x0002e6be) list_setting_pane_t1_ParamLimits

0xe9c2,	// (0x0002e6be) list_setting_pane_t1

0xe9d9,	// (0x0002e6d5) list_setting_pane_t2_ParamLimits

0xe9d9,	// (0x0002e6d5) list_setting_pane_t2

0x0002,

0xf667,	// (0x0002f363) list_setting_pane_t_ParamLimits

0xf667,	// (0x0002f363) list_setting_pane_t

0xea16,	// (0x0002e712) set_value_pane_cp_ParamLimits

0xea16,	// (0x0002e712) set_value_pane_cp

0xea22,	// (0x0002e71e) list_setting_number_pane_g1_ParamLimits

0xea22,	// (0x0002e71e) list_setting_number_pane_g1

0xea2e,	// (0x0002e72a) list_setting_number_pane_g2_ParamLimits

0xea2e,	// (0x0002e72a) list_setting_number_pane_g2

0x0001,

0xf66e,	// (0x0002f36a) list_setting_number_pane_g_ParamLimits

0xf66e,	// (0x0002f36a) list_setting_number_pane_g

0xea3a,	// (0x0002e736) list_setting_number_pane_t1_ParamLimits

0xea3a,	// (0x0002e736) list_setting_number_pane_t1

0xea4e,	// (0x0002e74a) list_setting_number_pane_t2_ParamLimits

0xea4e,	// (0x0002e74a) list_setting_number_pane_t2

0xea65,	// (0x0002e761) list_setting_number_pane_t3_ParamLimits

0xea65,	// (0x0002e761) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0002f36f) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0002f36f) list_setting_number_pane_t

0xea16,	// (0x0002e712) set_value_pane_ParamLimits

0xea16,	// (0x0002e712) set_value_pane

0x2478,	// (0x00022174) bg_set_opt_pane_ParamLimits

0x2478,	// (0x00022174) bg_set_opt_pane

0xeaa8,	// (0x0002e7a4) set_value_pane_t1

0x2499,	// (0x00022195) slider_set_pane_cp3

0x24a2,	// (0x0002219e) volume_small_pane_cp

0x24ab,	// (0x000221a7) list_form_gen_pane

0x24b4,	// (0x000221b0) scroll_pane_cp8

0xeabe,	// (0x0002e7ba) form_field_data_pane_ParamLimits

0xeabe,	// (0x0002e7ba) form_field_data_pane

0xeade,	// (0x0002e7da) form_field_data_wide_pane_ParamLimits

0xeade,	// (0x0002e7da) form_field_data_wide_pane

0xeaff,	// (0x0002e7fb) form_field_popup_pane_ParamLimits

0xeaff,	// (0x0002e7fb) form_field_popup_pane

0xeb1d,	// (0x0002e819) form_field_popup_wide_pane_ParamLimits

0xeb1d,	// (0x0002e819) form_field_popup_wide_pane

0xeb38,	// (0x0002e834) form_field_slider_pane_ParamLimits

0xeb38,	// (0x0002e834) form_field_slider_pane

0xeb4b,	// (0x0002e847) form_field_slider_wide_pane_ParamLimits

0xeb4b,	// (0x0002e847) form_field_slider_wide_pane

0x24c5,	// (0x000221c1) data_form_pane

0xeb68,	// (0x0002e864) form_field_data_pane_t1

0x24d1,	// (0x000221cd) input_focus_pane

0x24df,	// (0x000221db) data_form_wide_pane

0xeb8e,	// (0x0002e88a) form_field_data_wide_pane_t1

0x2242,	// (0x00021f3e) input_focus_pane_cp6

0xebb0,	// (0x0002e8ac) form_field_popup_pane_t1

0x24d1,	// (0x000221cd) input_focus_pane_cp7

0x250b,	// (0x00022207) list_form_pane

0xebd2,	// (0x0002e8ce) form_field_popup_wide_pane_t1

0x24d1,	// (0x000221cd) input_focus_pane_cp8

0x2517,	// (0x00022213) list_form_wide_pane

0xebef,	// (0x0002e8eb) form_field_slider_pane_t1_ParamLimits

0xebef,	// (0x0002e8eb) form_field_slider_pane_t1

0xec03,	// (0x0002e8ff) form_field_slider_pane_t2_ParamLimits

0xec03,	// (0x0002e8ff) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0002f37f) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0002f37f) form_field_slider_pane_t

0x1ef9,	// (0x00021bf5) input_focus_pane_cp9_ParamLimits

0x1ef9,	// (0x00021bf5) input_focus_pane_cp9

0xec15,	// (0x0002e911) slider_cont_pane_ParamLimits

0xec15,	// (0x0002e911) slider_cont_pane

0x2526,	// (0x00022222) form_field_slider_wide_pane_t1_ParamLimits

0x2526,	// (0x00022222) form_field_slider_wide_pane_t1

0xec29,	// (0x0002e925) form_field_slider_wide_pane_t2_ParamLimits

0xec29,	// (0x0002e925) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0002f384) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0002f384) form_field_slider_wide_pane_t

0x1ef9,	// (0x00021bf5) input_focus_pane_cp10_ParamLimits

0x1ef9,	// (0x00021bf5) input_focus_pane_cp10

0xec3b,	// (0x0002e937) slider_cont_pane_cp1_ParamLimits

0xec3b,	// (0x0002e937) slider_cont_pane_cp1

0xec4f,	// (0x0002e94b) slider_form_pane_cp

0x2538,	// (0x00022234) input_focus_pane_g1

0x2540,	// (0x0002223c) input_focus_pane_g2

0x2548,	// (0x00022244) input_focus_pane_g3

0x2550,	// (0x0002224c) input_focus_pane_g4

0x2558,	// (0x00022254) input_focus_pane_g5

0x2560,	// (0x0002225c) input_focus_pane_g6

0x2568,	// (0x00022264) input_focus_pane_g7

0x2570,	// (0x0002226c) input_focus_pane_g8

0x2578,	// (0x00022274) input_focus_pane_g9

0x1b94,	// (0x00021890) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0002f389) input_focus_pane_g

0x4025,	// (0x00023d21) wait_border_pane_g3_copy1

0xec57,	// (0x0002e953) data_form_pane_t1

0x1b94,	// (0x00021890) wait_anim_pane_g1_copy1

0xee31,	// (0x0002eb2d) data_form_wide_pane_t1

0xec72,	// (0x0002e96e) list_form_graphic_pane_cp_ParamLimits

0xec72,	// (0x0002e96e) list_form_graphic_pane_cp

0x4f3e,	// (0x00024c3a) slider_form_pane_g1

0x4f47,	// (0x00024c43) slider_form_pane_g2

0x0006,

0xf98b,	// (0x0002f687) slider_form_pane_g

0xec89,	// (0x0002e985) list_form_graphic_pane_ParamLimits

0xec89,	// (0x0002e985) list_form_graphic_pane

0xeca3,	// (0x0002e99f) list_form_graphic_pane_g1

0xecab,	// (0x0002e9a7) list_form_graphic_pane_t1_ParamLimits

0xecab,	// (0x0002e9a7) list_form_graphic_pane_t1

0x1c7e,	// (0x0002197a) list_highlight_pane_cp5_ParamLimits

0x1c7e,	// (0x0002197a) list_highlight_pane_cp5

0xecc0,	// (0x0002e9bc) find_pane_g1

0x2580,	// (0x0002227c) input_find_pane

0xecc9,	// (0x0002e9c5) input_find_pane_g1_ParamLimits

0xecc9,	// (0x0002e9c5) input_find_pane_g1

0xecd5,	// (0x0002e9d1) input_find_pane_t1_ParamLimits

0xecd5,	// (0x0002e9d1) input_find_pane_t1

0xecea,	// (0x0002e9e6) input_find_pane_t2_ParamLimits

0xecea,	// (0x0002e9e6) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0002f39e) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0002f39e) input_find_pane_t

0x2589,	// (0x00022285) input_focus_pane_cp5_ParamLimits

0x2589,	// (0x00022285) input_focus_pane_cp5

0x25a3,	// (0x0002229f) bg_popup_window_pane_cp2_ParamLimits

0x25a3,	// (0x0002229f) bg_popup_window_pane_cp2

0x25b0,	// (0x000222ac) listscroll_menu_pane_ParamLimits

0x25b0,	// (0x000222ac) listscroll_menu_pane

0x25bc,	// (0x000222b8) popup_submenu_window_ParamLimits

0x25bc,	// (0x000222b8) popup_submenu_window

0x25e4,	// (0x000222e0) find_popup_pane_g1

0x25ec,	// (0x000222e8) input_popup_find_pane_cp

0x2589,	// (0x00022285) input_focus_pane_cp4_ParamLimits

0x2589,	// (0x00022285) input_focus_pane_cp4

0x2604,	// (0x00022300) input_popup_find_pane_t1_ParamLimits

0x2604,	// (0x00022300) input_popup_find_pane_t1

0x1b9e,	// (0x0002189a) bg_popup_sub_pane_cp

0x2632,	// (0x0002232e) listscroll_popup_sub_pane

0x263a,	// (0x00022336) list_submenu_pane_ParamLimits

0x263a,	// (0x00022336) list_submenu_pane

0x264b,	// (0x00022347) scroll_pane_cp4

0x2653,	// (0x0002234f) list_single_popup_submenu_pane_ParamLimits

0x2653,	// (0x0002234f) list_single_popup_submenu_pane

0x2666,	// (0x00022362) list_single_popup_submenu_pane_g1

0x266e,	// (0x0002236a) list_single_popup_submenu_pane_t1_ParamLimits

0x266e,	// (0x0002236a) list_single_popup_submenu_pane_t1

0x1c7e,	// (0x0002197a) bg_active_tab_pane_cp1_ParamLimits

0x1c7e,	// (0x0002197a) bg_active_tab_pane_cp1

0x2683,	// (0x0002237f) tabs_2_active_pane_g1

0x268b,	// (0x00022387) tabs_2_active_pane_t1

0x1c7e,	// (0x0002197a) bg_passive_tab_pane_cp1_ParamLimits

0x1c7e,	// (0x0002197a) bg_passive_tab_pane_cp1

0x2683,	// (0x0002237f) tabs_2_passive_pane_g1

0x268b,	// (0x00022387) tabs_2_passive_pane_t1

0x269d,	// (0x00022399) bg_active_tab_pane_cp4

0x26ab,	// (0x000223a7) tabs_2_long_active_pane_t1

0x26be,	// (0x000223ba) bg_passive_tab_pane_cp4

0xbabb,	// (0x0002b7b7) list_single_midp_graphic_pane_g4_ParamLimits

0x269d,	// (0x00022399) bg_active_tab_pane_cp5

0x26ca,	// (0x000223c6) tabs_3_long_active_pane_t1

0x26be,	// (0x000223ba) bg_passive_tab_pane_cp5

0xbabb,	// (0x0002b7b7) list_single_midp_graphic_pane_g4

0x1c7e,	// (0x0002197a) bg_popup_window_pane_cp13_ParamLimits

0x1c7e,	// (0x0002197a) bg_popup_window_pane_cp13

0x26e5,	// (0x000223e1) listscroll_popup_fast_pane_ParamLimits

0x26e5,	// (0x000223e1) listscroll_popup_fast_pane

0x26f4,	// (0x000223f0) grid_popup_fast_pane_ParamLimits

0x26f4,	// (0x000223f0) grid_popup_fast_pane

0x2706,	// (0x00022402) scroll_pane_cp9_ParamLimits

0x2706,	// (0x00022402) scroll_pane_cp9

0x68cf,	// (0x000265cb) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x68cf,	// (0x000265cb) list_single_graphic_hl_pane_t1_cp2

0x272a,	// (0x00022426) input_focus_pane_cp20_ParamLimits

0x272a,	// (0x00022426) input_focus_pane_cp20

0x2738,	// (0x00022434) query_popup_data_pane_t1_ParamLimits

0x2738,	// (0x00022434) query_popup_data_pane_t1

0x274b,	// (0x00022447) query_popup_data_pane_t2_ParamLimits

0x274b,	// (0x00022447) query_popup_data_pane_t2

0x2791,	// (0x0002248d) query_popup_data_pane_t3_ParamLimits

0x2791,	// (0x0002248d) query_popup_data_pane_t3

0x27d2,	// (0x000224ce) query_popup_data_pane_t4_ParamLimits

0x27d2,	// (0x000224ce) query_popup_data_pane_t4

0x280e,	// (0x0002250a) query_popup_data_pane_t5_ParamLimits

0x280e,	// (0x0002250a) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0002f3a3) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0002f3a3) query_popup_data_pane_t

0x2538,	// (0x00022234) bg_set_opt_pane_g1

0x2540,	// (0x0002223c) bg_set_opt_pane_g2

0x2548,	// (0x00022244) bg_set_opt_pane_g3

0x2550,	// (0x0002224c) bg_set_opt_pane_g4

0x2558,	// (0x00022254) bg_set_opt_pane_g5

0x2560,	// (0x0002225c) bg_set_opt_pane_g6

0x2568,	// (0x00022264) bg_set_opt_pane_g7

0x2570,	// (0x0002226c) bg_set_opt_pane_g8

0x2578,	// (0x00022274) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0002f3ae) bg_set_opt_pane_g

0xb16d,	// (0x0002ae69) control_top_pane_stacon_ParamLimits

0xb16d,	// (0x0002ae69) control_top_pane_stacon

0xb1c0,	// (0x0002aebc) signal_pane_stacon_ParamLimits

0xb1c0,	// (0x0002aebc) signal_pane_stacon

0x2dcf,	// (0x00022acb) stacon_top_pane_g1_ParamLimits

0x2dcf,	// (0x00022acb) stacon_top_pane_g1

0xb1e5,	// (0x0002aee1) title_pane_stacon_ParamLimits

0xb1e5,	// (0x0002aee1) title_pane_stacon

0xb20f,	// (0x0002af0b) uni_indicator_pane_stacon_ParamLimits

0xb20f,	// (0x0002af0b) uni_indicator_pane_stacon

0xb224,	// (0x0002af20) battery_pane_stacon_ParamLimits

0xb224,	// (0x0002af20) battery_pane_stacon

0xb268,	// (0x0002af64) control_bottom_pane_stacon_ParamLimits

0xb268,	// (0x0002af64) control_bottom_pane_stacon

0xb28b,	// (0x0002af87) navi_pane_stacon_ParamLimits

0xb28b,	// (0x0002af87) navi_pane_stacon

0x2df1,	// (0x00022aed) stacon_bottom_pane_g1_ParamLimits

0x2df1,	// (0x00022aed) stacon_bottom_pane_g1

0xaece,	// (0x0002abca) aid_levels_signal_lsc_ParamLimits

0xaece,	// (0x0002abca) aid_levels_signal_lsc

0xaee5,	// (0x0002abe1) signal_pane_stacon_g1_ParamLimits

0xaee5,	// (0x0002abe1) signal_pane_stacon_g1

0xaef9,	// (0x0002abf5) signal_pane_stacon_g2_ParamLimits

0xaef9,	// (0x0002abf5) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0002f3c1) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0002f3c1) signal_pane_stacon_g

0xaf2e,	// (0x0002ac2a) title_pane_stacon_t1_ParamLimits

0xaf2e,	// (0x0002ac2a) title_pane_stacon_t1

0x2866,	// (0x00022562) uni_indicator_pane_stacon_g1

0x2870,	// (0x0002256c) uni_indicator_pane_stacon_g2

0x2852,	// (0x0002254e) uni_indicator_pane_stacon_g3

0x285c,	// (0x00022558) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0002f3cd) uni_indicator_pane_stacon_g

0xaf53,	// (0x0002ac4f) control_top_pane_stacon_g1

0xaf5b,	// (0x0002ac57) control_top_pane_stacon_t1_ParamLimits

0xaf5b,	// (0x0002ac57) control_top_pane_stacon_t1

0xaf92,	// (0x0002ac8e) aid_levels_battery_lsc_ParamLimits

0xaf92,	// (0x0002ac8e) aid_levels_battery_lsc

0xafaa,	// (0x0002aca6) battery_pane_stacon_g1_ParamLimits

0xafaa,	// (0x0002aca6) battery_pane_stacon_g1

0xafbd,	// (0x0002acb9) battery_pane_stacon_g2_ParamLimits

0xafbd,	// (0x0002acb9) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0002f3d6) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0002f3d6) battery_pane_stacon_g

0xaffb,	// (0x0002acf7) navi_icon_pane_stacon

0xb00f,	// (0x0002ad0b) navi_navi_pane_stacon

0xaffb,	// (0x0002acf7) navi_text_pane_stacon

0xaf53,	// (0x0002ac4f) control_bottom_pane_stacon_g1

0xb023,	// (0x0002ad1f) control_bottom_pane_stacon_t1_ParamLimits

0xb023,	// (0x0002ad1f) control_bottom_pane_stacon_t1

0x2894,	// (0x00022590) grid_app_pane_ParamLimits

0x2894,	// (0x00022590) grid_app_pane

0x28b6,	// (0x000225b2) scroll_pane_cp15_ParamLimits

0x28b6,	// (0x000225b2) scroll_pane_cp15

0x28cb,	// (0x000225c7) cell_app_pane_ParamLimits

0x28cb,	// (0x000225c7) cell_app_pane

0x28f5,	// (0x000225f1) cell_app_pane_g1_ParamLimits

0x28f5,	// (0x000225f1) cell_app_pane_g1

0x2915,	// (0x00022611) cell_app_pane_g2_ParamLimits

0x2915,	// (0x00022611) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0002f3db) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0002f3db) cell_app_pane_g

0x2921,	// (0x0002261d) cell_app_pane_t1_ParamLimits

0x2921,	// (0x0002261d) cell_app_pane_t1

0x2938,	// (0x00022634) grid_highlight_pane_ParamLimits

0x2938,	// (0x00022634) grid_highlight_pane

0x2538,	// (0x00022234) cell_highlight_pane_g1

0x2540,	// (0x0002223c) cell_highlight_pane_g2

0x2548,	// (0x00022244) cell_highlight_pane_g3

0x2550,	// (0x0002224c) cell_highlight_pane_g4

0x2558,	// (0x00022254) cell_highlight_pane_g5

0x2560,	// (0x0002225c) cell_highlight_pane_g6

0x2568,	// (0x00022264) cell_highlight_pane_g7

0x2570,	// (0x0002226c) cell_highlight_pane_g8

0x2578,	// (0x00022274) cell_highlight_pane_g9

0x1b94,	// (0x00021890) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0002f389) cell_highlight_pane_g

0x2949,	// (0x00022645) bg_scroll_pane

0xb06d,	// (0x0002ad69) scroll_handle_pane

0x2990,	// (0x0002268c) scroll_bg_pane_g1

0x29a5,	// (0x000226a1) scroll_bg_pane_g2

0x29bd,	// (0x000226b9) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0002f3e0) scroll_bg_pane_g

0x29d2,	// (0x000226ce) scroll_handle_focus_pane_ParamLimits

0x29d2,	// (0x000226ce) scroll_handle_focus_pane

0x2990,	// (0x0002268c) scroll_handle_pane_g1

0x29df,	// (0x000226db) scroll_handle_pane_g2

0x29bd,	// (0x000226b9) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0002f3e7) scroll_handle_pane_g

0x2589,	// (0x00022285) bg_popup_sub_pane_cp21_ParamLimits

0x2589,	// (0x00022285) bg_popup_sub_pane_cp21

0x29f3,	// (0x000226ef) popup_fep_japan_predictive_window_t1_ParamLimits

0x29f3,	// (0x000226ef) popup_fep_japan_predictive_window_t1

0x2a0a,	// (0x00022706) popup_fep_japan_predictive_window_t2_ParamLimits

0x2a0a,	// (0x00022706) popup_fep_japan_predictive_window_t2

0x2a3d,	// (0x00022739) popup_fep_japan_predictive_window_t3_ParamLimits

0x2a3d,	// (0x00022739) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0002f3ee) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0002f3ee) popup_fep_japan_predictive_window_t

0x1b9e,	// (0x0002189a) bg_popup_sub_pane_cp23

0x2a74,	// (0x00022770) listscroll_japin_cand_pane

0x2a7c,	// (0x00022778) popup_fep_japan_candidate_window_t1

0x2a8a,	// (0x00022786) candidate_pane_ParamLimits

0x2a8a,	// (0x00022786) candidate_pane

0x2a9c,	// (0x00022798) scroll_pane_cp30

0x2aa4,	// (0x000227a0) list_single_popup_jap_candidate_pane_ParamLimits

0x2aa4,	// (0x000227a0) list_single_popup_jap_candidate_pane

0x1b9e,	// (0x0002189a) list_highlight_pane_cp30

0x2ab8,	// (0x000227b4) list_single_popup_jap_candidate_pane_t1

0x2ac7,	// (0x000227c3) level_1_signal

0x2ad4,	// (0x000227d0) level_2_signal

0x2ae1,	// (0x000227dd) level_3_signal

0x2aee,	// (0x000227ea) level_4_signal

0x2afb,	// (0x000227f7) level_5_signal

0x2b08,	// (0x00022804) level_6_signal

0x2b15,	// (0x00022811) level_7_signal

0x2ac7,	// (0x000227c3) level_1_battery

0x2ad4,	// (0x000227d0) level_2_battery

0x2ae1,	// (0x000227dd) level_3_battery

0x2aee,	// (0x000227ea) level_4_battery

0x2afb,	// (0x000227f7) level_5_battery

0x2b08,	// (0x00022804) level_6_battery

0x2b15,	// (0x00022811) level_7_battery

0x2b3a,	// (0x00022836) list_menu_pane_ParamLimits

0x2b3a,	// (0x00022836) list_menu_pane

0x2b50,	// (0x0002284c) scroll_pane_cp25_ParamLimits

0x2b50,	// (0x0002284c) scroll_pane_cp25

0x2b69,	// (0x00022865) list_double2_graphic_pane_cp2_ParamLimits

0x2b69,	// (0x00022865) list_double2_graphic_pane_cp2

0x2b69,	// (0x00022865) list_double2_large_graphic_pane_cp2_ParamLimits

0x2b69,	// (0x00022865) list_double2_large_graphic_pane_cp2

0x2b69,	// (0x00022865) list_double2_pane_cp2_ParamLimits

0x2b69,	// (0x00022865) list_double2_pane_cp2

0x2b69,	// (0x00022865) list_double_graphic_pane_cp2_ParamLimits

0x2b69,	// (0x00022865) list_double_graphic_pane_cp2

0x2b69,	// (0x00022865) list_double_large_graphic_pane_cp2_ParamLimits

0x2b69,	// (0x00022865) list_double_large_graphic_pane_cp2

0x2b69,	// (0x00022865) list_double_number_pane_cp2_ParamLimits

0x2b69,	// (0x00022865) list_double_number_pane_cp2

0x2b69,	// (0x00022865) list_double_pane_cp2_ParamLimits

0x2b69,	// (0x00022865) list_double_pane_cp2

0x2b8b,	// (0x00022887) list_single_2graphic_pane_cp2_ParamLimits

0x2b8b,	// (0x00022887) list_single_2graphic_pane_cp2

0x2b8b,	// (0x00022887) list_single_graphic_heading_pane_cp2_ParamLimits

0x2b8b,	// (0x00022887) list_single_graphic_heading_pane_cp2

0x2b8b,	// (0x00022887) list_single_graphic_pane_cp2_ParamLimits

0x2b8b,	// (0x00022887) list_single_graphic_pane_cp2

0x2b8b,	// (0x00022887) list_single_heading_pane_cp2_ParamLimits

0x2b8b,	// (0x00022887) list_single_heading_pane_cp2

0x2ba2,	// (0x0002289e) list_single_large_graphic_pane_cp2_ParamLimits

0x2ba2,	// (0x0002289e) list_single_large_graphic_pane_cp2

0x2b8b,	// (0x00022887) list_single_number_heading_pane_cp2_ParamLimits

0x2b8b,	// (0x00022887) list_single_number_heading_pane_cp2

0x2b8b,	// (0x00022887) list_single_number_pane_cp2_ParamLimits

0x2b8b,	// (0x00022887) list_single_number_pane_cp2

0x2b8b,	// (0x00022887) list_single_pane_cp2_ParamLimits

0x2b8b,	// (0x00022887) list_single_pane_cp2

0x2c1e,	// (0x0002291a) bg_popup_sub_pane_cp22

0xb11f,	// (0x0002ae1b) popup_side_volume_key_window_g1

0xb149,	// (0x0002ae45) popup_side_volume_key_window_t1

0xb165,	// (0x0002ae61) volume_small_pane_cp1

0x1ef9,	// (0x00021bf5) bg_popup_sub_pane_cp24_ParamLimits

0x1ef9,	// (0x00021bf5) bg_popup_sub_pane_cp24

0x2c34,	// (0x00022930) fep_china_uni_candidate_pane_ParamLimits

0x2c34,	// (0x00022930) fep_china_uni_candidate_pane

0x2c48,	// (0x00022944) fep_china_uni_entry_pane

0x2c58,	// (0x00022954) popup_fep_china_uni_window_g1

0x2c74,	// (0x00022970) fep_china_uni_entry_pane_g1

0x2c7c,	// (0x00022978) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0002f41f) fep_china_uni_entry_pane_g

0x2c84,	// (0x00022980) fep_entry_item_pane

0x2c8e,	// (0x0002298a) fep_candidate_item_pane

0x2c96,	// (0x00022992) fep_china_uni_candidate_pane_g1

0x2c9e,	// (0x0002299a) fep_china_uni_candidate_pane_g2

0x2ca6,	// (0x000229a2) fep_china_uni_candidate_pane_g3

0x2cae,	// (0x000229aa) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0002f424) fep_china_uni_candidate_pane_g

0x1b94,	// (0x00021890) fep_entry_item_pane_g1

0x2cb6,	// (0x000229b2) fep_entry_item_pane_t1_ParamLimits

0x2cb6,	// (0x000229b2) fep_entry_item_pane_t1

0x2ccc,	// (0x000229c8) fep_candidate_item_pane_t1_ParamLimits

0x2ccc,	// (0x000229c8) fep_candidate_item_pane_t1

0x2ce1,	// (0x000229dd) fep_candidate_item_pane_t2_ParamLimits

0x2ce1,	// (0x000229dd) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0002f42d) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0002f42d) fep_candidate_item_pane_t

0x1c7e,	// (0x0002197a) list_highlight_pane_cp31_ParamLimits

0x1c7e,	// (0x0002197a) list_highlight_pane_cp31

0x2cf3,	// (0x000229ef) level_1_signal_lsc

0x2cfc,	// (0x000229f8) level_2_signal_lsc

0x2d05,	// (0x00022a01) level_3_signal_lsc

0x2d0e,	// (0x00022a0a) level_4_signal_lsc

0x2d17,	// (0x00022a13) level_5_signal_lsc

0x2d20,	// (0x00022a1c) level_6_signal_lsc

0x2d29,	// (0x00022a25) level_7_signal_lsc

0x2d29,	// (0x00022a25) level_1_battery_lsc

0x2d32,	// (0x00022a2e) level_2_battery_lsc

0x2d3b,	// (0x00022a37) level_3_battery_lsc

0x2d44,	// (0x00022a40) level_4_battery_lsc

0x2d4d,	// (0x00022a49) level_5_battery_lsc

0x2d56,	// (0x00022a52) level_6_battery_lsc

0x2cf3,	// (0x000229ef) level_7_battery_lsc

0x2d5f,	// (0x00022a5b) scroll_handle_focus_pane_g1

0x2d68,	// (0x00022a64) scroll_handle_focus_pane_g2

0x2d71,	// (0x00022a6d) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0002f432) scroll_handle_focus_pane_g

0xecff,	// (0x0002e9fb) list_single_2graphic_pane_g1_ParamLimits

0xecff,	// (0x0002e9fb) list_single_2graphic_pane_g1

0xe251,	// (0x0002df4d) list_single_2graphic_pane_g2_ParamLimits

0xe251,	// (0x0002df4d) list_single_2graphic_pane_g2

0xe1d7,	// (0x0002ded3) list_single_2graphic_pane_g3_ParamLimits

0xe1d7,	// (0x0002ded3) list_single_2graphic_pane_g3

0xed0b,	// (0x0002ea07) list_single_2graphic_pane_g4_ParamLimits

0xed0b,	// (0x0002ea07) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0002f439) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0002f439) list_single_2graphic_pane_g

0xed17,	// (0x0002ea13) list_single_2graphic_pane_t1_ParamLimits

0xed17,	// (0x0002ea13) list_single_2graphic_pane_t1

0xed45,	// (0x0002ea41) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xed45,	// (0x0002ea41) list_double2_graphic_large_graphic_pane_g1

0xe2f6,	// (0x0002dff2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xe2f6,	// (0x0002dff2) list_double2_graphic_large_graphic_pane_g2

0xe2c2,	// (0x0002dfbe) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe2c2,	// (0x0002dfbe) list_double2_graphic_large_graphic_pane_g3

0xed57,	// (0x0002ea53) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xed57,	// (0x0002ea53) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0002f442) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0002f442) list_double2_graphic_large_graphic_pane_g

0xed63,	// (0x0002ea5f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xed63,	// (0x0002ea5f) list_double2_graphic_large_graphic_pane_t1

0xed79,	// (0x0002ea75) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xed79,	// (0x0002ea75) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0002f44b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0002f44b) list_double2_graphic_large_graphic_pane_t

0x2ebc,	// (0x00022bb8) popup_fast_swap_window_ParamLimits

0x2ebc,	// (0x00022bb8) popup_fast_swap_window

0x2ed8,	// (0x00022bd4) popup_side_volume_key_window

0x2ef2,	// (0x00022bee) stacon_top_pane

0x2efc,	// (0x00022bf8) status_pane_ParamLimits

0x2efc,	// (0x00022bf8) status_pane

0x2ef2,	// (0x00022bee) status_small_pane

0x1b9e,	// (0x0002189a) control_pane

0x1b9e,	// (0x0002189a) stacon_bottom_pane

0x24b4,	// (0x000221b0) scroll_pane_cp121

0x24ab,	// (0x000221a7) set_content_pane

0x2d8c,	// (0x00022a88) bg_active_tab_pane_g1_cp1

0x2d83,	// (0x00022a7f) bg_active_tab_pane_g2_cp1

0x2d7a,	// (0x00022a76) bg_active_tab_pane_g3_cp1

0x2d8c,	// (0x00022a88) bg_passive_tab_pane_g1_cp1

0x2d83,	// (0x00022a7f) bg_passive_tab_pane_g2_cp1

0x2d7a,	// (0x00022a76) bg_passive_tab_pane_g3_cp1

0x2d9e,	// (0x00022a9a) bg_active_tab_pane_g1_cp2

0x2d83,	// (0x00022a7f) bg_active_tab_pane_g2_cp2

0x2d95,	// (0x00022a91) bg_active_tab_pane_g3_cp2

0x2d9e,	// (0x00022a9a) bg_passive_tab_pane_g1_cp2

0x2d83,	// (0x00022a7f) bg_passive_tab_pane_g2_cp2

0x2d95,	// (0x00022a91) bg_passive_tab_pane_g3_cp2

0x2db0,	// (0x00022aac) bg_active_tab_pane_g1_cp3

0x2d83,	// (0x00022a7f) bg_active_tab_pane_g2_cp3

0x2da7,	// (0x00022aa3) bg_active_tab_pane_g3_cp3

0x2db0,	// (0x00022aac) bg_passive_tab_pane_g1_cp3

0x2d83,	// (0x00022a7f) bg_passive_tab_pane_g2_cp3

0x2da7,	// (0x00022aa3) bg_passive_tab_pane_g3_cp3

0x2dc4,	// (0x00022ac0) bg_active_tab_pane_g1_cp4

0x2d83,	// (0x00022a7f) bg_active_tab_pane_g2_cp4

0x2db9,	// (0x00022ab5) bg_active_tab_pane_g3_cp4

0x2dc4,	// (0x00022ac0) bg_passive_tab_pane_g1_cp4

0x2d83,	// (0x00022a7f) bg_passive_tab_pane_g2_cp4

0x2db9,	// (0x00022ab5) bg_passive_tab_pane_g3_cp4

0x2e16,	// (0x00022b12) bg_active_tab_pane_g1_cp5

0x2d83,	// (0x00022a7f) bg_active_tab_pane_g2_cp5

0x2e0d,	// (0x00022b09) bg_active_tab_pane_g3_cp5

0x2e16,	// (0x00022b12) bg_passive_tab_pane_g1_cp5

0x2d83,	// (0x00022a7f) bg_passive_tab_pane_g2_cp5

0x2e0d,	// (0x00022b09) bg_passive_tab_pane_g3_cp5

0x2e1f,	// (0x00022b1b) list_set_graphic_pane_ParamLimits

0x2e1f,	// (0x00022b1b) list_set_graphic_pane

0x1b9e,	// (0x0002189a) bg_set_opt_pane_cp4

0x2e3d,	// (0x00022b39) list_set_graphic_pane_g1_ParamLimits

0x2e3d,	// (0x00022b39) list_set_graphic_pane_g1

0x2e49,	// (0x00022b45) list_set_graphic_pane_g2_ParamLimits

0x2e49,	// (0x00022b45) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0002f450) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0002f450) list_set_graphic_pane_g

0x0009,

0xfad7,	// (0x0002f7d3) volume_small_pane_cp_g

0x2e6d,	// (0x00022b69) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2e6d,	// (0x00022b69) list_double2_large_graphic_pane_g1_cp2

0x2e7b,	// (0x00022b77) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2e7b,	// (0x00022b77) list_double2_large_graphic_pane_g2_cp2

0x2e8c,	// (0x00022b88) list_double2_large_graphic_pane_g3_cp2

0x2e94,	// (0x00022b90) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2e94,	// (0x00022b90) list_double2_large_graphic_pane_t1_cp2

0x2eaa,	// (0x00022ba6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2eaa,	// (0x00022ba6) list_double2_large_graphic_pane_t2_cp2

0x4ae6,	// (0x000247e2) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4ae6,	// (0x000247e2) list_double_large_graphic_pane_g1_cp2

0x4af9,	// (0x000247f5) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4af9,	// (0x000247f5) list_double_large_graphic_pane_g2_cp2

0x301a,	// (0x00022d16) list_double_large_graphic_pane_g3_cp2

0x4b0a,	// (0x00024806) list_double_large_graphic_pane_g4_cp

0x4b12,	// (0x0002480e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4b12,	// (0x0002480e) list_double_large_graphic_pane_t1_cp2

0x4b29,	// (0x00024825) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4b29,	// (0x00024825) list_double_large_graphic_pane_t2_cp2

0x2f0a,	// (0x00022c06) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2f0a,	// (0x00022c06) list_double2_graphic_pane_g1_cp2

0x2f18,	// (0x00022c14) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2f18,	// (0x00022c14) list_double2_graphic_pane_g2_cp2

0x2f29,	// (0x00022c25) list_double2_graphic_pane_g3_cp2

0x2f33,	// (0x00022c2f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2f33,	// (0x00022c2f) list_double2_graphic_pane_t1_cp2

0x2f49,	// (0x00022c45) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2f49,	// (0x00022c45) list_double2_graphic_pane_t2_cp2

0x2f5b,	// (0x00022c57) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2f5b,	// (0x00022c57) list_single_number_heading_pane_g1_cp2

0x2f67,	// (0x00022c63) list_single_number_heading_pane_g2_cp2

0x2f6f,	// (0x00022c6b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2f6f,	// (0x00022c6b) list_single_number_heading_pane_t1_cp2

0x2f85,	// (0x00022c81) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2f85,	// (0x00022c81) list_single_number_heading_pane_t2_cp2

0x2f99,	// (0x00022c95) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2f99,	// (0x00022c95) list_single_number_heading_pane_t3_cp2

0x2f5b,	// (0x00022c57) list_single_heading_pane_g1_cp2_ParamLimits

0x2f5b,	// (0x00022c57) list_single_heading_pane_g1_cp2

0x2f67,	// (0x00022c63) list_single_heading_pane_g2_cp2

0x2f6f,	// (0x00022c6b) list_single_heading_pane_t1_cp2_ParamLimits

0x2f6f,	// (0x00022c6b) list_single_heading_pane_t1_cp2

0x48ee,	// (0x000245ea) list_single_heading_pane_t2_cp2_ParamLimits

0x48ee,	// (0x000245ea) list_single_heading_pane_t2_cp2

0x3d51,	// (0x00023a4d) list_double_graphic_pane_g1_cp2_ParamLimits

0x3d51,	// (0x00023a4d) list_double_graphic_pane_g1_cp2

0x4842,	// (0x0002453e) list_double_graphic_pane_g2_cp2_ParamLimits

0x4842,	// (0x0002453e) list_double_graphic_pane_g2_cp2

0x4851,	// (0x0002454d) list_double_graphic_pane_g3_cp2

0x4859,	// (0x00024555) list_double_graphic_pane_t1_cp2_ParamLimits

0x4859,	// (0x00024555) list_double_graphic_pane_t1_cp2

0x486f,	// (0x0002456b) list_double_graphic_pane_t2_cp2_ParamLimits

0x486f,	// (0x0002456b) list_double_graphic_pane_t2_cp2

0x300e,	// (0x00022d0a) list_double_number_pane_g1_cp2_ParamLimits

0x300e,	// (0x00022d0a) list_double_number_pane_g1_cp2

0x301a,	// (0x00022d16) list_double_number_pane_g2_cp2

0x4806,	// (0x00024502) list_double_number_pane_t1_cp2_ParamLimits

0x4806,	// (0x00024502) list_double_number_pane_t1_cp2

0x481a,	// (0x00024516) list_double_number_pane_t2_cp2_ParamLimits

0x481a,	// (0x00024516) list_double_number_pane_t2_cp2

0x4830,	// (0x0002452c) list_double_number_pane_t3_cp2_ParamLimits

0x4830,	// (0x0002452c) list_double_number_pane_t3_cp2

0x46ef,	// (0x000243eb) list_single_graphic_pane_g1_cp2_ParamLimits

0x46ef,	// (0x000243eb) list_single_graphic_pane_g1_cp2

0x3072,	// (0x00022d6e) list_single_graphic_pane_g2_cp2_ParamLimits

0x3072,	// (0x00022d6e) list_single_graphic_pane_g2_cp2

0x307e,	// (0x00022d7a) list_single_graphic_pane_g3_cp2

0x46c5,	// (0x000243c1) list_single_graphic_pane_t1_cp2_ParamLimits

0x46c5,	// (0x000243c1) list_single_graphic_pane_t1_cp2

0x3072,	// (0x00022d6e) list_single_number_pane_g1_cp2_ParamLimits

0x3072,	// (0x00022d6e) list_single_number_pane_g1_cp2

0x307e,	// (0x00022d7a) list_single_number_pane_g2_cp2

0x46c5,	// (0x000243c1) list_single_number_pane_t1_cp2_ParamLimits

0x46c5,	// (0x000243c1) list_single_number_pane_t1_cp2

0x46db,	// (0x000243d7) list_single_number_pane_t2_cp2_ParamLimits

0x46db,	// (0x000243d7) list_single_number_pane_t2_cp2

0x2e7b,	// (0x00022b77) list_double2_pane_g1_cp2_ParamLimits

0x2e7b,	// (0x00022b77) list_double2_pane_g1_cp2

0x2e8c,	// (0x00022b88) list_double2_pane_g2_cp2

0x2fe6,	// (0x00022ce2) list_double2_pane_t1_cp2_ParamLimits

0x2fe6,	// (0x00022ce2) list_double2_pane_t1_cp2

0x2ffc,	// (0x00022cf8) list_double2_pane_t2_cp2_ParamLimits

0x2ffc,	// (0x00022cf8) list_double2_pane_t2_cp2

0x300e,	// (0x00022d0a) list_double_pane_g1_cp2_ParamLimits

0x300e,	// (0x00022d0a) list_double_pane_g1_cp2

0x301a,	// (0x00022d16) list_double_pane_g2_cp2

0x3022,	// (0x00022d1e) list_double_pane_t1_cp2_ParamLimits

0x3022,	// (0x00022d1e) list_double_pane_t1_cp2

0x3038,	// (0x00022d34) list_double_pane_t2_cp2_ParamLimits

0x3038,	// (0x00022d34) list_double_pane_t2_cp2

0x3062,	// (0x00022d5e) list_single_pane_cp2_g3

0x3072,	// (0x00022d6e) list_single_pane_g1_cp2_ParamLimits

0x3072,	// (0x00022d6e) list_single_pane_g1_cp2

0x307e,	// (0x00022d7a) list_single_pane_g2_cp2

0x3086,	// (0x00022d82) list_single_pane_t1_cp2_ParamLimits

0x3086,	// (0x00022d82) list_single_pane_t1_cp2

0x309e,	// (0x00022d9a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x309e,	// (0x00022d9a) list_single_large_graphic_pane_g1_cp2

0x30ac,	// (0x00022da8) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x30ac,	// (0x00022da8) list_single_large_graphic_pane_g2_cp2

0x30b8,	// (0x00022db4) list_single_large_graphic_pane_g3_cp2

0x30c0,	// (0x00022dbc) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x30c0,	// (0x00022dbc) list_single_large_graphic_pane_g4_cp1

0x30da,	// (0x00022dd6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x30da,	// (0x00022dd6) list_single_large_graphic_pane_t1_cp2

0x468f,	// (0x0002438b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x468f,	// (0x0002438b) list_single_graphic_heading_pane_g1_cp2

0x465c,	// (0x00024358) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x465c,	// (0x00024358) list_single_graphic_heading_pane_g4_cp2

0x307e,	// (0x00022d7a) list_single_graphic_heading_pane_g5_cp2

0x469b,	// (0x00024397) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x469b,	// (0x00024397) list_single_graphic_heading_pane_t1_cp2

0x46b1,	// (0x000243ad) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x46b1,	// (0x000243ad) list_single_graphic_heading_pane_t2_cp2

0x4650,	// (0x0002434c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4650,	// (0x0002434c) list_single_2graphic_pane_g1_cp2

0x465c,	// (0x00024358) list_single_2graphic_pane_g2_cp2_ParamLimits

0x465c,	// (0x00024358) list_single_2graphic_pane_g2_cp2

0x307e,	// (0x00022d7a) list_single_2graphic_pane_g3_cp2

0x466d,	// (0x00024369) list_single_2graphic_pane_g4_cp2_ParamLimits

0x466d,	// (0x00024369) list_single_2graphic_pane_g4_cp2

0x4679,	// (0x00024375) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4679,	// (0x00024375) list_single_2graphic_pane_t1_cp2

0x1b94,	// (0x00021890) list_highlight_pane_g10_cp1

0x4238,	// (0x00023f34) list_highlight_pane_g1_cp1

0x4240,	// (0x00023f3c) list_highlight_pane_g2_cp1

0x4248,	// (0x00023f44) list_highlight_pane_g3_cp1

0x4250,	// (0x00023f4c) list_highlight_pane_g4_cp1

0x4258,	// (0x00023f54) list_highlight_pane_g5_cp1

0x4260,	// (0x00023f5c) list_highlight_pane_g6_cp1

0x4268,	// (0x00023f64) list_highlight_pane_g7_cp1

0x4270,	// (0x00023f6c) list_highlight_pane_g8_cp1

0x4278,	// (0x00023f74) list_highlight_pane_g9_cp1

0x4150,	// (0x00023e4c) form_field_slider_pane_t3

0x415e,	// (0x00023e5a) form_field_slider_pane_t4

0x416c,	// (0x00023e68) slider_form_pane_ParamLimits

0x416c,	// (0x00023e68) slider_form_pane

0x1b9e,	// (0x0002189a) control_abbreviations

0x1b9e,	// (0x0002189a) control_conventions

0x1b9e,	// (0x0002189a) control_definitions

0x1b9e,	// (0x0002189a) format_table_attribute

0x493a,	// (0x00024636) bg_popup_preview_window_pane_g9

0x1b9e,	// (0x0002189a) format_table_data2

0x1b9e,	// (0x0002189a) format_table_data3

0x1b9e,	// (0x0002189a) format_table_data_example

0x0008,

0x1b9e,	// (0x0002189a) intro_purpose

0xf8eb,	// (0x0002f5e7) bg_popup_preview_window_pane_g

0x1b9e,	// (0x0002189a) texts_category

0x1b9e,	// (0x0002189a) texts_graphics

0x30f0,	// (0x00022dec) text_digital

0x30ff,	// (0x00022dfb) text_primary

0x310e,	// (0x00022e0a) text_primary_small

0x311d,	// (0x00022e19) text_secondary

0x312c,	// (0x00022e28) text_title

0x505f,	// (0x00024d5b) bg_passive_tab_pane_g1_cp3_srt

0x2d83,	// (0x00022a7f) bg_passive_tab_pane_g2_cp3_srt

0x5056,	// (0x00024d52) bg_passive_tab_pane_g3_cp3_srt

0x1c7e,	// (0x0002197a) bg_active_tab_pane_cp3_srt_ParamLimits

0x1c7e,	// (0x0002197a) bg_active_tab_pane_cp3_srt

0x5068,	// (0x00024d64) tabs_4_active_pane_srt_g1

0x5070,	// (0x00024d6c) tabs_4_active_pane_srt_t1_ParamLimits

0x5070,	// (0x00024d6c) tabs_4_active_pane_srt_t1

0x505f,	// (0x00024d5b) bg_active_tab_pane_g1_cp3_copy1

0x2d83,	// (0x00022a7f) bg_active_tab_pane_g2_cp3_copy1

0x5056,	// (0x00024d52) bg_active_tab_pane_g3_cp3_copy1

0x1c7e,	// (0x0002197a) tabs_2_long_active_pane_srt_ParamLimits

0x1c7e,	// (0x0002197a) tabs_2_long_active_pane_srt

0x1c7e,	// (0x0002197a) tabs_2_long_passive_pane_srt_ParamLimits

0x1c7e,	// (0x0002197a) tabs_2_long_passive_pane_srt

0x26be,	// (0x000223ba) bg_passive_tab_pane_cp4_srt_ParamLimits

0x26be,	// (0x000223ba) bg_passive_tab_pane_cp4_srt

0x4d88,	// (0x00024a84) bg_passive_tab_pane_g1_cp4_srt

0x2d83,	// (0x00022a7f) bg_passive_tab_pane_g2_cp4_srt

0x4d7f,	// (0x00024a7b) bg_passive_tab_pane_g3_cp4_srt

0x269d,	// (0x00022399) bg_active_tab_pane_cp4_srt_ParamLimits

0x269d,	// (0x00022399) bg_active_tab_pane_cp4_srt

0x4d91,	// (0x00024a8d) tabs_2_long_active_pane_srt_t1_ParamLimits

0x4d91,	// (0x00024a8d) tabs_2_long_active_pane_srt_t1

0x4d88,	// (0x00024a84) bg_active_tab_pane_g1_cp4_srt

0x2d83,	// (0x00022a7f) bg_active_tab_pane_g2_cp4_srt

0x4d7f,	// (0x00024a7b) bg_active_tab_pane_g3_cp4_srt

0x1ef9,	// (0x00021bf5) tabs_3_long_active_pane_srt_ParamLimits

0x1ef9,	// (0x00021bf5) tabs_3_long_active_pane_srt

0x1ef9,	// (0x00021bf5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1ef9,	// (0x00021bf5) tabs_3_long_passive_pane_cp_srt

0x1ef9,	// (0x00021bf5) tabs_3_long_passive_pane_srt_ParamLimits

0x1ef9,	// (0x00021bf5) tabs_3_long_passive_pane_srt

0x26be,	// (0x000223ba) bg_passive_tab_pane_cp5_srt_ParamLimits

0x26be,	// (0x000223ba) bg_passive_tab_pane_cp5_srt

0x2e16,	// (0x00022b12) bg_passive_tab_pane_g1_cp5_srt

0x2d83,	// (0x00022a7f) bg_passive_tab_pane_g2_cp5_srt

0x2e0d,	// (0x00022b09) bg_passive_tab_pane_g3_cp5_srt

0x269d,	// (0x00022399) bg_active_tab_pane_cp5_srt_ParamLimits

0x269d,	// (0x00022399) bg_active_tab_pane_cp5_srt

0x4d6d,	// (0x00024a69) tabs_3_long_active_pane_srt_t1_ParamLimits

0x4d6d,	// (0x00024a69) tabs_3_long_active_pane_srt_t1

0x2e16,	// (0x00022b12) bg_active_tab_pane_g1_cp5_srt

0x2d83,	// (0x00022a7f) bg_active_tab_pane_g2_cp5_srt

0x2e0d,	// (0x00022b09) bg_active_tab_pane_g3_cp5_srt

0x4d5f,	// (0x00024a5b) navi_text_pane_srt_t1

0x4d57,	// (0x00024a53) navi_icon_pane_srt_g1

0x32ef,	// (0x00022feb) midp_editing_number_pane_srt

0x313b,	// (0x00022e37) midp_ticker_pane_srt

0x32f7,	// (0x00022ff3) midp_ticker_pane_srt_g1

0x32ff,	// (0x00022ffb) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0002f46f) midp_ticker_pane_srt_g

0x3307,	// (0x00023003) midp_ticker_pane_srt_t1

0x4d48,	// (0x00024a44) midp_editing_number_pane_t1_copy1

0x26be,	// (0x000223ba) listscroll_midp_pane

0x26be,	// (0x000223ba) midp_form_pane

0x31a7,	// (0x00022ea3) midp_info_popup_window_ParamLimits

0x31a7,	// (0x00022ea3) midp_info_popup_window

0x2589,	// (0x00022285) bg_popup_sub_pane_cp50_ParamLimits

0x2589,	// (0x00022285) bg_popup_sub_pane_cp50

0x3e6d,	// (0x00023b69) listscroll_midp_info_pane_ParamLimits

0x3e6d,	// (0x00023b69) listscroll_midp_info_pane

0x3e55,	// (0x00023b51) listscroll_form_midp_pane_ParamLimits

0x3e55,	// (0x00023b51) listscroll_form_midp_pane

0x3e61,	// (0x00023b5d) scroll_bar_cp050

0x3e35,	// (0x00023b31) list_midp_pane

0x5b0f,	// (0x0002580b) signal_pane_g2_cp

0x3d6f,	// (0x00023a6b) listscroll_midp_info_pane_t1_ParamLimits

0x3d6f,	// (0x00023a6b) listscroll_midp_info_pane_t1

0x3d87,	// (0x00023a83) listscroll_midp_info_pane_t2_ParamLimits

0x3d87,	// (0x00023a83) listscroll_midp_info_pane_t2

0x3dc5,	// (0x00023ac1) listscroll_midp_info_pane_t3_ParamLimits

0x3dc5,	// (0x00023ac1) listscroll_midp_info_pane_t3

0x3dff,	// (0x00023afb) listscroll_midp_info_pane_t4_ParamLimits

0x3dff,	// (0x00023afb) listscroll_midp_info_pane_t4

0x0003,

0xf826,	// (0x0002f522) listscroll_midp_info_pane_t_ParamLimits

0xf826,	// (0x0002f522) listscroll_midp_info_pane_t

0x264b,	// (0x00022347) scroll_pane_cp21

0x3d07,	// (0x00023a03) form_midp_field_choice_group_pane

0x3d10,	// (0x00023a0c) form_midp_field_text_pane

0x3d49,	// (0x00023a45) form_midp_field_time_pane

0x3d5d,	// (0x00023a59) form_midp_gauge_slider_pane

0x3d66,	// (0x00023a62) form_midp_gauge_wait_pane

0x1b9e,	// (0x0002189a) form_midp_image_pane

0xede2,	// (0x0002eade) list_single_midp_pane_ParamLimits

0xede2,	// (0x0002eade) list_single_midp_pane

0x3cb7,	// (0x000239b3) form_midp_field_text_pane_t1

0x3a69,	// (0x00023765) input_focus_pane_cp050

0x3cf6,	// (0x000239f2) list_midp_form_text_pane

0x3c86,	// (0x00023982) form_midp_field_choice_group_pane_t1

0x3c94,	// (0x00023990) input_focus_pane_cp051

0x3ca8,	// (0x000239a4) list_midp_choice_pane

0x1b9e,	// (0x0002189a) status_idle_pane

0x3c6a,	// (0x00023966) form_midp_field_time_pane_t1

0x1b94,	// (0x00021890) wait_anim_pane_g2_copy1

0x3c78,	// (0x00023974) form_midp_field_time_pane_t2

0x0001,

0x3257,	// (0x00022f53) aid_navinavi_width_2_pane

0xf821,	// (0x0002f51d) form_midp_field_time_pane_t

0x1b9e,	// (0x0002189a) input_focus_pane_cp052

0x1b9e,	// (0x0002189a) bg_input_focus_pane_cp040

0x3c2a,	// (0x00023926) form_midp_gauge_slider_pane_t1

0x3c38,	// (0x00023934) form_midp_gauge_slider_pane_t2

0x3c46,	// (0x00023942) form_midp_gauge_slider_pane_t3

0x3c54,	// (0x00023950) form_midp_gauge_slider_pane_t4

0x0003,

0xf818,	// (0x0002f514) form_midp_gauge_slider_pane_t

0x3c62,	// (0x0002395e) form_midp_slider_pane

0x1c7e,	// (0x0002197a) bg_input_focus_pane_cp041_ParamLimits

0x1c7e,	// (0x0002197a) bg_input_focus_pane_cp041

0x3bf7,	// (0x000238f3) form_midp_gauge_wait_pane_t1_ParamLimits

0x3bf7,	// (0x000238f3) form_midp_gauge_wait_pane_t1

0x3c09,	// (0x00023905) form_midp_gauge_wait_pane_t2_ParamLimits

0x3c09,	// (0x00023905) form_midp_gauge_wait_pane_t2

0x0001,

0xf813,	// (0x0002f50f) form_midp_gauge_wait_pane_t_ParamLimits

0xf813,	// (0x0002f50f) form_midp_gauge_wait_pane_t

0x3c1b,	// (0x00023917) form_midp_wait_pane_ParamLimits

0x3c1b,	// (0x00023917) form_midp_wait_pane

0x3bc1,	// (0x000238bd) form_midp_image_pane_g1

0x3bca,	// (0x000238c6) form_midp_image_pane_t1

0x3bd9,	// (0x000238d5) form_midp_image_pane_t2

0x3be8,	// (0x000238e4) form_midp_image_pane_t3

0x0002,

0xf80c,	// (0x0002f508) form_midp_image_pane_t

0x3bb8,	// (0x000238b4) list_single_midp_pane_g1

0xedd3,	// (0x0002eacf) list_single_midp_pane_t1

0x3b88,	// (0x00023884) list_midp_form_item_pane_ParamLimits

0x3b88,	// (0x00023884) list_midp_form_item_pane

0x31ff,	// (0x00022efb) list_midp_form_item_pane_t1

0x320e,	// (0x00022f0a) midp_ticker_pane_g1

0x321a,	// (0x00022f16) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0002f455) midp_ticker_pane_g

0x3226,	// (0x00022f22) midp_ticker_pane_t1

0x4f8b,	// (0x00024c87) midp_editing_number_pane_t1

0x4f69,	// (0x00024c65) midp_editing_number_pane

0x4f78,	// (0x00024c74) midp_ticker_pane

0x4d38,	// (0x00024a34) ai_message_heading_pane

0x1b9e,	// (0x0002189a) bg_popup_window_pane_cp14

0x4d40,	// (0x00024a3c) listscroll_ai_message_pane

0x4cc2,	// (0x000249be) ai_message_heading_pane_g1_ParamLimits

0x4cc2,	// (0x000249be) ai_message_heading_pane_g1

0x4cce,	// (0x000249ca) ai_message_heading_pane_g2_ParamLimits

0x4cce,	// (0x000249ca) ai_message_heading_pane_g2

0x4cda,	// (0x000249d6) ai_message_heading_pane_g3_ParamLimits

0x4cda,	// (0x000249d6) ai_message_heading_pane_g3

0x4ce6,	// (0x000249e2) ai_message_heading_pane_g4_ParamLimits

0x4ce6,	// (0x000249e2) ai_message_heading_pane_g4

0x0003,

0xf94d,	// (0x0002f649) ai_message_heading_pane_g_ParamLimits

0xf94d,	// (0x0002f649) ai_message_heading_pane_g

0x4cf2,	// (0x000249ee) ai_message_heading_pane_t1_ParamLimits

0x4cf2,	// (0x000249ee) ai_message_heading_pane_t1

0x4d0c,	// (0x00024a08) ai_message_heading_pane_t2_ParamLimits

0x4d0c,	// (0x00024a08) ai_message_heading_pane_t2

0x0001,

0xf956,	// (0x0002f652) ai_message_heading_pane_t_ParamLimits

0xf956,	// (0x0002f652) ai_message_heading_pane_t

0x4d1e,	// (0x00024a1a) bg_popup_heading_pane_cp1_ParamLimits

0x4d1e,	// (0x00024a1a) bg_popup_heading_pane_cp1

0x4cb0,	// (0x000249ac) list_ai_message_pane_ParamLimits

0x4cb0,	// (0x000249ac) list_ai_message_pane

0x264b,	// (0x00022347) scroll_pane_cp10

0x4c4c,	// (0x00024948) list_ai_message_pane_g1

0x4c54,	// (0x00024950) list_ai_message_pane_g2

0x0001,

0xf92a,	// (0x0002f626) list_ai_message_pane_g

0x4c5c,	// (0x00024958) list_ai_message_pane_t1_ParamLimits

0x4c5c,	// (0x00024958) list_ai_message_pane_t1

0x4c71,	// (0x0002496d) list_ai_message_pane_t2_ParamLimits

0x4c71,	// (0x0002496d) list_ai_message_pane_t2

0x4c86,	// (0x00024982) list_ai_message_pane_t3_ParamLimits

0x4c86,	// (0x00024982) list_ai_message_pane_t3

0x4c9b,	// (0x00024997) list_ai_message_pane_t4_ParamLimits

0x4c9b,	// (0x00024997) list_ai_message_pane_t4

0x0003,

0xf92f,	// (0x0002f62b) list_ai_message_pane_t_ParamLimits

0xf92f,	// (0x0002f62b) list_ai_message_pane_t

0x4c36,	// (0x00024932) cell_ai_soft_ind_pane_ParamLimits

0x4c36,	// (0x00024932) cell_ai_soft_ind_pane

0x3238,	// (0x00022f34) cell_ai_soft_ind_pane_g1_ParamLimits

0x3238,	// (0x00022f34) cell_ai_soft_ind_pane_g1

0x1b9e,	// (0x0002189a) grid_highlight_cp1

0x3245,	// (0x00022f41) text_secondary_cp56_ParamLimits

0x3245,	// (0x00022f41) text_secondary_cp56

0x4c0b,	// (0x00024907) example_general_pane_ParamLimits

0x4c0b,	// (0x00024907) example_general_pane

0x4c17,	// (0x00024913) example_parent_pane_g1_ParamLimits

0x4c17,	// (0x00024913) example_parent_pane_g1

0x4c23,	// (0x0002491f) example_parent_pane_t1_ParamLimits

0x4c23,	// (0x0002491f) example_parent_pane_t1

0xb842,	// (0x0002b53e) popup_preview_text_window_ParamLimits

0xb842,	// (0x0002b53e) popup_preview_text_window

0x306a,	// (0x00022d66) list_single_pane_cp2_g4

0x1fa3,	// (0x00021c9f) bg_popup_preview_window_pane_ParamLimits

0x1fa3,	// (0x00021c9f) bg_popup_preview_window_pane

0x4942,	// (0x0002463e) popup_preview_text_window_t1_ParamLimits

0x4942,	// (0x0002463e) popup_preview_text_window_t1

0x4960,	// (0x0002465c) popup_preview_text_window_t2_ParamLimits

0x4960,	// (0x0002465c) popup_preview_text_window_t2

0x49a9,	// (0x000246a5) popup_preview_text_window_t3_ParamLimits

0x49a9,	// (0x000246a5) popup_preview_text_window_t3

0x49ee,	// (0x000246ea) popup_preview_text_window_t4_ParamLimits

0x49ee,	// (0x000246ea) popup_preview_text_window_t4

0x0004,

0xf8fe,	// (0x0002f5fa) popup_preview_text_window_t_ParamLimits

0xf8fe,	// (0x0002f5fa) popup_preview_text_window_t

0x4a6c,	// (0x00024768) scroll_pane_cp11

0x3979,	// (0x00023675) bg_popup_preview_window_pane_g1

0x4902,	// (0x000245fe) bg_popup_preview_window_pane_g2

0x490a,	// (0x00024606) bg_popup_preview_window_pane_g3

0x4912,	// (0x0002460e) bg_popup_preview_window_pane_g4

0x491a,	// (0x00024616) bg_popup_preview_window_pane_g5

0x4922,	// (0x0002461e) bg_popup_preview_window_pane_g6

0x492a,	// (0x00024626) bg_popup_preview_window_pane_g7

0x4932,	// (0x0002462e) bg_popup_preview_window_pane_g8

0xaa72,	// (0x0002a76e) aid_popup_width_pane

0xb820,	// (0x0002b51c) popup_midp_note_alarm_window_ParamLimits

0xb820,	// (0x0002b51c) popup_midp_note_alarm_window

0x24c5,	// (0x000221c1) data_form_pane_ParamLimits

0xeb5e,	// (0x0002e85a) form_field_data_pane_g1

0xeb68,	// (0x0002e864) form_field_data_pane_t1_ParamLimits

0x24d1,	// (0x000221cd) input_focus_pane_ParamLimits

0x24df,	// (0x000221db) data_form_wide_pane_ParamLimits

0xeb82,	// (0x0002e87e) form_field_data_wide_pane_g1

0xeb8e,	// (0x0002e88a) form_field_data_wide_pane_t1_ParamLimits

0x2242,	// (0x00021f3e) input_focus_pane_cp6_ParamLimits

0x25f6,	// (0x000222f2) input_popup_find_pane_g1_ParamLimits

0x25f6,	// (0x000222f2) input_popup_find_pane_g1

0xafce,	// (0x0002acca) aid_navi_side_left_pane

0xafe3,	// (0x0002acdf) aid_navi_side_right_pane

0x4333,	// (0x0002402f) bg_popup_window_pane_cp30_ParamLimits

0x4333,	// (0x0002402f) bg_popup_window_pane_cp30

0x43ad,	// (0x000240a9) popup_midp_note_alarm_window_g1_ParamLimits

0x43ad,	// (0x000240a9) popup_midp_note_alarm_window_g1

0x43dd,	// (0x000240d9) popup_midp_note_alarm_window_t1_ParamLimits

0x43dd,	// (0x000240d9) popup_midp_note_alarm_window_t1

0x447e,	// (0x0002417a) popup_midp_note_alarm_window_t2_ParamLimits

0x447e,	// (0x0002417a) popup_midp_note_alarm_window_t2

0x452c,	// (0x00024228) popup_midp_note_alarm_window_t3_ParamLimits

0x452c,	// (0x00024228) popup_midp_note_alarm_window_t3

0x4554,	// (0x00024250) popup_midp_note_alarm_window_t4_ParamLimits

0x4554,	// (0x00024250) popup_midp_note_alarm_window_t4

0x4574,	// (0x00024270) popup_midp_note_alarm_window_t5_ParamLimits

0x4574,	// (0x00024270) popup_midp_note_alarm_window_t5

0x000a,

0xf89b,	// (0x0002f597) popup_midp_note_alarm_window_t_ParamLimits

0xf89b,	// (0x0002f597) popup_midp_note_alarm_window_t

0x4620,	// (0x0002431c) wait_bar_pane_cp1_ParamLimits

0x4620,	// (0x0002431c) wait_bar_pane_cp1

0x1b9e,	// (0x0002189a) wait_anim_pane_copy1

0x1b9e,	// (0x0002189a) wait_border_pane_copy1

0x4011,	// (0x00023d0d) wait_border_pane_g1_copy1

0xeba8,	// (0x0002e8a4) form_field_popup_pane_g1

0xebb0,	// (0x0002e8ac) form_field_popup_pane_t1_ParamLimits

0x24d1,	// (0x000221cd) input_focus_pane_cp7_ParamLimits

0x250b,	// (0x00022207) list_form_pane_ParamLimits

0xebca,	// (0x0002e8c6) form_field_popup_wide_pane_g1

0xebd2,	// (0x0002e8ce) form_field_popup_wide_pane_t1_ParamLimits

0x24d1,	// (0x000221cd) input_focus_pane_cp8_ParamLimits

0x2517,	// (0x00022213) list_form_wide_pane_ParamLimits

0x50e0,	// (0x00024ddc) aid_size_cell_graphic_pane

0xec57,	// (0x0002e953) data_form_pane_t1_ParamLimits

0xee31,	// (0x0002eb2d) data_form_wide_pane_t1_ParamLimits

0x354e,	// (0x0002324a) bg_status_flat_pane

0x1bde,	// (0x000218da) title_pane_t1_ParamLimits

0x1c46,	// (0x00021942) title_pane_t2_ParamLimits

0x1c6c,	// (0x00021968) title_pane_t3_ParamLimits

0xf55d,	// (0x0002f259) title_pane_t_ParamLimits

0x2ac7,	// (0x000227c3) level_1_signal_ParamLimits

0x2ad4,	// (0x000227d0) level_2_signal_ParamLimits

0x2ae1,	// (0x000227dd) level_3_signal_ParamLimits

0x2aee,	// (0x000227ea) level_4_signal_ParamLimits

0x2afb,	// (0x000227f7) level_5_signal_ParamLimits

0x2b08,	// (0x00022804) level_6_signal_ParamLimits

0x2b15,	// (0x00022811) level_7_signal_ParamLimits

0x2ac7,	// (0x000227c3) level_1_battery_ParamLimits

0x2ad4,	// (0x000227d0) level_2_battery_ParamLimits

0x2ae1,	// (0x000227dd) level_3_battery_ParamLimits

0x2aee,	// (0x000227ea) level_4_battery_ParamLimits

0x2afb,	// (0x000227f7) level_5_battery_ParamLimits

0x2b08,	// (0x00022804) level_6_battery_ParamLimits

0x2b15,	// (0x00022811) level_7_battery_ParamLimits

0x4238,	// (0x00023f34) bg_status_flat_pane_g1

0x4240,	// (0x00023f3c) bg_status_flat_pane_g2

0x4248,	// (0x00023f44) bg_status_flat_pane_g3

0x4250,	// (0x00023f4c) bg_status_flat_pane_g4

0x4258,	// (0x00023f54) bg_status_flat_pane_g5

0x4260,	// (0x00023f5c) bg_status_flat_pane_g6

0x4268,	// (0x00023f64) bg_status_flat_pane_g7

0x1c94,	// (0x00021990) tabs_3_active_pane_t1_ParamLimits

0x1c94,	// (0x00021990) tabs_3_passive_pane_t1_ParamLimits

0x1cae,	// (0x000219aa) tabs_4_active_pane_t1_ParamLimits

0x1cae,	// (0x000219aa) tabs_4_1_passive_pane_t1_ParamLimits

0x268b,	// (0x00022387) tabs_2_active_pane_t1_ParamLimits

0x268b,	// (0x00022387) tabs_2_passive_pane_t1_ParamLimits

0x269d,	// (0x00022399) bg_active_tab_pane_cp4_ParamLimits

0x26ab,	// (0x000223a7) tabs_2_long_active_pane_t1_ParamLimits

0x26be,	// (0x000223ba) bg_passive_tab_pane_cp4_ParamLimits

0xbaed,	// (0x0002b7e9) list_single_midp_graphic_pane_t1_ParamLimits

0x269d,	// (0x00022399) bg_active_tab_pane_cp5_ParamLimits

0x26ca,	// (0x000223c6) tabs_3_long_active_pane_t1_ParamLimits

0x26be,	// (0x000223ba) bg_passive_tab_pane_cp5_ParamLimits

0xbaed,	// (0x0002b7e9) list_single_midp_graphic_pane_t1

0x354e,	// (0x0002324a) bg_status_flat_pane_ParamLimits

0x3611,	// (0x0002330d) indicator_pane_cp2_ParamLimits

0x3611,	// (0x0002330d) indicator_pane_cp2

0x3736,	// (0x00023432) navi_pane_srt_ParamLimits

0x3736,	// (0x00023432) navi_pane_srt

0x375a,	// (0x00023456) popup_clock_digital_analogue_window_cp1

0x1d5b,	// (0x00021a57) indicator_pane_t1

0x313b,	// (0x00022e37) copy_highlight_pane

0x313b,	// (0x00022e37) cursor_graphics_pane

0x313b,	// (0x00022e37) graphic_within_text_pane

0x313b,	// (0x00022e37) link_highlight_pane

0x4a2f,	// (0x0002472b) popup_preview_text_window_t5_ParamLimits

0x4a2f,	// (0x0002472b) popup_preview_text_window_t5

0x325f,	// (0x00022f5b) cursor_digital_pane

0x325f,	// (0x00022f5b) cursor_primary_pane

0x3270,	// (0x00022f6c) cursor_primary_small_pane

0x3278,	// (0x00022f74) cursor_secondary_pane

0x3280,	// (0x00022f7c) cursor_title_pane

0x325f,	// (0x00022f5b) link_highlight_digital_pane

0x3267,	// (0x00022f63) link_highlight_primary_pane

0x3270,	// (0x00022f6c) link_highlight_primary_small_pane

0x3278,	// (0x00022f74) link_highlight_secondary_pane

0x3280,	// (0x00022f7c) link_highlight_title_pane

0x325f,	// (0x00022f5b) copy_highlight_digital_pane

0x325f,	// (0x00022f5b) copy_highlight_primary_pane

0x3270,	// (0x00022f6c) copy_highlight_primary_small_pane

0x3278,	// (0x00022f74) copy_highlight_secondary_pane

0x3280,	// (0x00022f7c) copy_highlight_title_pane

0x3278,	// (0x00022f74) graphic_text_digital_pane

0x42d6,	// (0x00023fd2) graphic_text_primary_pane

0x42df,	// (0x00023fdb) graphic_text_primary_small_pane

0x3270,	// (0x00022f6c) graphic_text_secondary_pane

0x325f,	// (0x00022f5b) graphic_text_title_pane

0x3288,	// (0x00022f84) cursor_primary_pane_g1

0x42c8,	// (0x00023fc4) cursor_text_primary_t1

0x42b0,	// (0x00023fac) cursor_primary_small_pane_g1

0x42ba,	// (0x00023fb6) cursor_text_primary_small_t1

0x4298,	// (0x00023f94) cursor_primary_small_pane_g1_copy1

0x42a2,	// (0x00023f9e) cursor_text_primary_small_t1_copy1

0x4280,	// (0x00023f7c) cursor_text_title_t1

0x428e,	// (0x00023f8a) cursor_title_pane_g1

0x3288,	// (0x00022f84) cursor_digital_pane_g1

0x3292,	// (0x00022f8e) cursor_text_digital_t1

0x4221,	// (0x00023f1d) link_highlight_primary_pane_g1

0x4229,	// (0x00023f25) link_highlight_primary_pane_t1

0x32a0,	// (0x00022f9c) link_highlight_primary_small_pane_g1

0x32a8,	// (0x00022fa4) link_highlight_primary_small_pane_t1

0x32a0,	// (0x00022f9c) link_highlight_secondary_pane_g1

0x32b7,	// (0x00022fb3) link_highlight_secondary_pane_t1

0x4195,	// (0x00023e91) link_highlight_title_pane_g1

0x419d,	// (0x00023e99) link_highlight_title_pane_t1

0x417e,	// (0x00023e7a) link_highlight_digital_pane_g1

0x4186,	// (0x00023e82) link_highlight_digital_pane_t1

0x4056,	// (0x00023d52) copy_highlight_primary_pane_g1

0x405e,	// (0x00023d5a) copy_highlight_primary_pane_t1

0x4030,	// (0x00023d2c) copy_highlight_primary_small_pane_g1

0x4047,	// (0x00023d43) copy_highlight_primary_small_pane_t1

0x32c6,	// (0x00022fc2) copy_highlight_secondary_pane_g1

0x32ce,	// (0x00022fca) copy_highlight_secondary_pane_t1

0x4030,	// (0x00023d2c) copy_highlight_title_pane_g1

0x4038,	// (0x00023d34) copy_highlight_title_pane_t1

0x4056,	// (0x00023d52) copy_highlight_digital_pane_g1

0x52f0,	// (0x00024fec) copy_highlight_digital_pane_t1

0x5202,	// (0x00024efe) graphic_text_primary_pane_g1

0x52d4,	// (0x00024fd0) graphic_text_primary_pane_t1

0x52e2,	// (0x00024fde) graphic_text_primary_pane_t2

0x0001,

0xf9ca,	// (0x0002f6c6) graphic_text_primary_pane_t

0x52b0,	// (0x00024fac) graphic_text_primary_small_pane_g1

0x52b8,	// (0x00024fb4) graphic_text_primary_small_pane_t1

0x52c6,	// (0x00024fc2) graphic_text_primary_small_pane_t2

0x0001,

0xf9c5,	// (0x0002f6c1) graphic_text_primary_small_pane_t

0x528c,	// (0x00024f88) graphic_text_secondary_pane_g1

0x5294,	// (0x00024f90) graphic_text_secondary_pane_t1

0x52a2,	// (0x00024f9e) graphic_text_secondary_pane_t2

0x0001,

0xf9c0,	// (0x0002f6bc) graphic_text_secondary_pane_t

0x5226,	// (0x00024f22) graphic_text_title_pane_g1

0x522e,	// (0x00024f2a) graphic_text_title_pane_t1

0x523c,	// (0x00024f38) graphic_text_title_pane_t2

0x0001,

0xf9bb,	// (0x0002f6b7) graphic_text_title_pane_t

0x5202,	// (0x00024efe) graphic_text_digital_pane_g1

0x520a,	// (0x00024f06) graphic_text_digital_pane_t1

0x5218,	// (0x00024f14) graphic_text_digital_pane_t2

0x0001,

0xf9b6,	// (0x0002f6b2) graphic_text_digital_pane_t

0x1c7e,	// (0x0002197a) navi_icon_pane_srt_ParamLimits

0x1c7e,	// (0x0002197a) navi_icon_pane_srt

0x1b9e,	// (0x0002189a) navi_midp_pane_srt

0x1b9e,	// (0x0002189a) navi_navi_pane_srt

0x1c7e,	// (0x0002197a) navi_text_pane_srt_ParamLimits

0x1c7e,	// (0x0002197a) navi_text_pane_srt

0x51cd,	// (0x00024ec9) navi_navi_icon_text_pane_srt

0x51e7,	// (0x00024ee3) navi_navi_pane_srt_g1_ParamLimits

0x51e7,	// (0x00024ee3) navi_navi_pane_srt_g1

0x51d5,	// (0x00024ed1) navi_navi_pane_srt_g2_ParamLimits

0x51d5,	// (0x00024ed1) navi_navi_pane_srt_g2

0x0001,

0xf9b1,	// (0x0002f6ad) navi_navi_pane_srt_g_ParamLimits

0xf9b1,	// (0x0002f6ad) navi_navi_pane_srt_g

0x51f9,	// (0x00024ef5) navi_navi_tabs_pane_srt

0x51cd,	// (0x00024ec9) navi_navi_text_pane_srt

0x51cd,	// (0x00024ec9) navi_navi_volume_pane_srt

0x51be,	// (0x00024eba) navi_navi_text_pane_srt_t1

0xbe6d,	// (0x0002bb69) navi_navi_volume_pane_srt_g1

0xbe75,	// (0x0002bb71) volume_small_pane_srt_ParamLimits

0xbe75,	// (0x0002bb71) volume_small_pane_srt

0xb2ae,	// (0x0002afaa) volume_small_pane_srt_g1_ParamLimits

0xb2ae,	// (0x0002afaa) volume_small_pane_srt_g1

0xb2be,	// (0x0002afba) volume_small_pane_srt_g2_ParamLimits

0xb2be,	// (0x0002afba) volume_small_pane_srt_g2

0xb2cf,	// (0x0002afcb) volume_small_pane_srt_g3_ParamLimits

0xb2cf,	// (0x0002afcb) volume_small_pane_srt_g3

0xb2e0,	// (0x0002afdc) volume_small_pane_srt_g4_ParamLimits

0xb2e0,	// (0x0002afdc) volume_small_pane_srt_g4

0xb2f1,	// (0x0002afed) volume_small_pane_srt_g5_ParamLimits

0xb2f1,	// (0x0002afed) volume_small_pane_srt_g5

0xb302,	// (0x0002affe) volume_small_pane_srt_g6_ParamLimits

0xb302,	// (0x0002affe) volume_small_pane_srt_g6

0xb313,	// (0x0002b00f) volume_small_pane_srt_g7_ParamLimits

0xb313,	// (0x0002b00f) volume_small_pane_srt_g7

0xb324,	// (0x0002b020) volume_small_pane_srt_g8_ParamLimits

0xb324,	// (0x0002b020) volume_small_pane_srt_g8

0xb335,	// (0x0002b031) volume_small_pane_srt_g9_ParamLimits

0xb335,	// (0x0002b031) volume_small_pane_srt_g9

0xb346,	// (0x0002b042) volume_small_pane_srt_g10_ParamLimits

0xb346,	// (0x0002b042) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0002f45a) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0002f45a) volume_small_pane_srt_g

0x204c,	// (0x00021d48) query_popup_data_pane_cp2

0x51a4,	// (0x00024ea0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x51a4,	// (0x00024ea0) navi_navi_icon_text_pane_srt_t1

0x42d6,	// (0x00023fd2) navi_tabs_2_long_pane_srt

0x42d6,	// (0x00023fd2) navi_tabs_2_pane_srt

0x42d6,	// (0x00023fd2) navi_tabs_3_long_pane_srt

0x42d6,	// (0x00023fd2) navi_tabs_3_pane_srt

0x42d6,	// (0x00023fd2) navi_tabs_4_pane_srt

0xbe4d,	// (0x0002bb49) tabs_2_active_pane_srt_ParamLimits

0xbe4d,	// (0x0002bb49) tabs_2_active_pane_srt

0xbe5d,	// (0x0002bb59) tabs_2_passive_pane_srt_ParamLimits

0xbe5d,	// (0x0002bb59) tabs_2_passive_pane_srt

0x3477,	// (0x00023173) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3477,	// (0x00023173) bg_passive_tab_pane_cp1_srt

0x5179,	// (0x00024e75) bg_passive_tab_pane_g1_cp1_srt

0x2d83,	// (0x00022a7f) bg_passive_tab_pane_g2_cp1_srt

0x5170,	// (0x00024e6c) bg_passive_tab_pane_g3_cp1_srt

0x1c7e,	// (0x0002197a) bg_active_tab_pane_cp1_srt_ParamLimits

0x1c7e,	// (0x0002197a) bg_active_tab_pane_cp1_srt

0x5182,	// (0x00024e7e) tabs_2_active_pane_srt_g1

0x518a,	// (0x00024e86) tabs_2_active_pane_srt_t1_ParamLimits

0x518a,	// (0x00024e86) tabs_2_active_pane_srt_t1

0x5179,	// (0x00024e75) bg_active_tab_pane_g1_cp1_srt

0x2d83,	// (0x00022a7f) bg_active_tab_pane_g2_cp1_srt

0x5170,	// (0x00024e6c) bg_active_tab_pane_g3_cp1_srt

0xbe1a,	// (0x0002bb16) tabs_3_active_pane_srt_ParamLimits

0xbe1a,	// (0x0002bb16) tabs_3_active_pane_srt

0xbe2b,	// (0x0002bb27) tabs_3_passive_pane_cp_srt_ParamLimits

0xbe2b,	// (0x0002bb27) tabs_3_passive_pane_cp_srt

0xbe3c,	// (0x0002bb38) tabs_3_passive_pane_srt_ParamLimits

0xbe3c,	// (0x0002bb38) tabs_3_passive_pane_srt

0x3477,	// (0x00023173) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3477,	// (0x00023173) bg_passive_tab_pane_cp2_srt

0x32e6,	// (0x00022fe2) bg_passive_tab_pane_g1_cp2_srt

0x2d83,	// (0x00022a7f) bg_passive_tab_pane_g2_cp2_srt

0x32dd,	// (0x00022fd9) bg_passive_tab_pane_g3_cp2_srt

0x1c7e,	// (0x0002197a) bg_active_tab_pane_cp2_srt_ParamLimits

0x1c7e,	// (0x0002197a) bg_active_tab_pane_cp2_srt

0x5156,	// (0x00024e52) tabs_3_active_pane_srt_g1

0x515e,	// (0x00024e5a) tabs_3_active_pane_srt_t1_ParamLimits

0x515e,	// (0x00024e5a) tabs_3_active_pane_srt_t1

0x32e6,	// (0x00022fe2) bg_active_tab_pane_g1_cp2_srt

0x2d83,	// (0x00022a7f) bg_active_tab_pane_g2_cp2_srt

0x32dd,	// (0x00022fd9) bg_active_tab_pane_g3_cp2_srt

0xbdd2,	// (0x0002bace) tabs_4_active_pane_srt_ParamLimits

0xbdd2,	// (0x0002bace) tabs_4_active_pane_srt

0xbde4,	// (0x0002bae0) tabs_4_passive_pane_cp2_srt_ParamLimits

0xbde4,	// (0x0002bae0) tabs_4_passive_pane_cp2_srt

0xb4a5,	// (0x0002b1a1) aid_size_cell_toolbar

0x26be,	// (0x000223ba) main_idle_act_pane_ParamLimits

0xb654,	// (0x0002b350) popup_large_graphic_colour_window_ParamLimits

0xb9b3,	// (0x0002b6af) popup_toolbar_window_ParamLimits

0xb9b3,	// (0x0002b6af) popup_toolbar_window

0x4f9a,	// (0x00024c96) list_single_graphic_2heading_pane_ParamLimits

0x4f9a,	// (0x00024c96) list_single_graphic_2heading_pane

0x287a,	// (0x00022576) aid_size_cell_apps_grid_lsc_pane

0x288c,	// (0x00022588) aid_size_cell_apps_grid_prt_pane

0x3477,	// (0x00023173) bg_wml_button_pane_cp1_ParamLimits

0x3477,	// (0x00023173) bg_wml_button_pane_cp1

0x3cb7,	// (0x000239b3) form_midp_field_text_pane_t1_ParamLimits

0x3a69,	// (0x00023765) input_focus_pane_cp050_ParamLimits

0x3cf6,	// (0x000239f2) list_midp_form_text_pane_ParamLimits

0x3c94,	// (0x00023990) input_focus_pane_cp051_ParamLimits

0x3ca8,	// (0x000239a4) list_midp_choice_pane_ParamLimits

0x3b22,	// (0x0002381e) list_single_2graphic_pane_cp3_ParamLimits

0x3b22,	// (0x0002381e) list_single_2graphic_pane_cp3

0x3b4e,	// (0x0002384a) list_single_midp_graphic_pane_ParamLimits

0x3b4e,	// (0x0002384a) list_single_midp_graphic_pane

0xa9fc,	// (0x0002a6f8) list_single_graphic_2heading_pane_g1_ParamLimits

0xa9fc,	// (0x0002a6f8) list_single_graphic_2heading_pane_g1

0xaa08,	// (0x0002a704) list_single_graphic_2heading_pane_g4_ParamLimits

0xaa08,	// (0x0002a704) list_single_graphic_2heading_pane_g4

0xaa14,	// (0x0002a710) list_single_graphic_2heading_pane_g5_ParamLimits

0xaa14,	// (0x0002a710) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0002f4ad) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0002f4ad) list_single_graphic_2heading_pane_g

0xaa20,	// (0x0002a71c) list_single_graphic_2heading_pane_t1_ParamLimits

0xaa20,	// (0x0002a71c) list_single_graphic_2heading_pane_t1

0xaa34,	// (0x0002a730) list_single_graphic_2heading_pane_t2_ParamLimits

0xaa34,	// (0x0002a730) list_single_graphic_2heading_pane_t2

0xaa4e,	// (0x0002a74a) list_single_graphic_2heading_pane_t3_ParamLimits

0xaa4e,	// (0x0002a74a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0002f4b4) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0002f4b4) list_single_graphic_2heading_pane_t

0x38b7,	// (0x000235b3) bg_popup_sub_pane_cp2

0x38e1,	// (0x000235dd) grid_toobar_pane

0xba5e,	// (0x0002b75a) cell_toolbar_pane_ParamLimits

0xba5e,	// (0x0002b75a) cell_toolbar_pane

0x391d,	// (0x00023619) cell_toolbar_pane_g1_ParamLimits

0x391d,	// (0x00023619) cell_toolbar_pane_g1

0x3931,	// (0x0002362d) cell_toolbar_pane_g2_ParamLimits

0x3931,	// (0x0002362d) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0002f4c2) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0002f4c2) cell_toolbar_pane_g

0x3953,	// (0x0002364f) grid_highlight_pane_cp2_ParamLimits

0x3953,	// (0x0002364f) grid_highlight_pane_cp2

0x396d,	// (0x00023669) toolbar_button_pane

0x3979,	// (0x00023675) toolbar_button_pane_g1

0x3989,	// (0x00023685) toolbar_button_pane_g2

0x3981,	// (0x0002367d) toolbar_button_pane_g3

0x3999,	// (0x00023695) toolbar_button_pane_g4

0x3991,	// (0x0002368d) toolbar_button_pane_g5

0x39a1,	// (0x0002369d) toolbar_button_pane_g6

0x39a9,	// (0x000236a5) toolbar_button_pane_g7

0x39b9,	// (0x000236b5) toolbar_button_pane_g8

0x39b1,	// (0x000236ad) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0002f4c7) toolbar_button_pane_g

0xba96,	// (0x0002b792) list_single_2graphic_pane_g1_cp3_ParamLimits

0xba96,	// (0x0002b792) list_single_2graphic_pane_g1_cp3

0xbaa2,	// (0x0002b79e) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbaa2,	// (0x0002b79e) list_single_2graphic_pane_g2_cp3

0xbab3,	// (0x0002b7af) list_single_2graphic_pane_g3_cp3

0xbabb,	// (0x0002b7b7) list_single_2graphic_pane_g4_cp3_ParamLimits

0xbabb,	// (0x0002b7b7) list_single_2graphic_pane_g4_cp3

0xbac7,	// (0x0002b7c3) list_single_2graphic_pane_t1_cp3_ParamLimits

0xbac7,	// (0x0002b7c3) list_single_2graphic_pane_t1_cp3

0xbae1,	// (0x0002b7dd) list_single_midp_graphic_pane_g2_ParamLimits

0xbae1,	// (0x0002b7dd) list_single_midp_graphic_pane_g2

0xb4ad,	// (0x0002b1a9) aid_zoom_text_primary

0xa9f4,	// (0x0002a6f0) aid_zoom_text_secondary

0x339a,	// (0x00023096) status_small_pane_g7_ParamLimits

0x339a,	// (0x00023096) status_small_pane_g7

0x33bd,	// (0x000230b9) status_small_pane_t1_ParamLimits

0x1bb5,	// (0x000218b1) title_pane_g2

0x0003,

0xf554,	// (0x0002f250) title_pane_g

0x20ed,	// (0x00021de9) aid_size_cell_colour_1_pane_ParamLimits

0x20ed,	// (0x00021de9) aid_size_cell_colour_1_pane

0x2101,	// (0x00021dfd) aid_size_cell_colour_2_pane_ParamLimits

0x2101,	// (0x00021dfd) aid_size_cell_colour_2_pane

0x2115,	// (0x00021e11) aid_size_cell_colour_3_pane_ParamLimits

0x2115,	// (0x00021e11) aid_size_cell_colour_3_pane

0x2129,	// (0x00021e25) aid_size_cell_colour_4_pane_ParamLimits

0x2129,	// (0x00021e25) aid_size_cell_colour_4_pane

0xaf0a,	// (0x0002ac06) title_pane_stacon_g1_ParamLimits

0xaf0a,	// (0x0002ac06) title_pane_stacon_g1

0x40b5,	// (0x00023db1) popup_note_wait_window_g3_ParamLimits

0x40b5,	// (0x00023db1) popup_note_wait_window_g3

0x412b,	// (0x00023e27) popup_note_wait_window_t5_ParamLimits

0x412b,	// (0x00023e27) popup_note_wait_window_t5

0x1b9e,	// (0x0002189a) main_feb_china_hwr_fs_writing_pane

0xb53f,	// (0x0002b23b) popup_feb_china_hwr_fs_window_ParamLimits

0xb53f,	// (0x0002b23b) popup_feb_china_hwr_fs_window

0xbb03,	// (0x0002b7ff) aid_size_cell_hwr_fs_ParamLimits

0xbb03,	// (0x0002b7ff) aid_size_cell_hwr_fs

0x3a69,	// (0x00023765) bg_popup_sub_pane_cp3_ParamLimits

0x3a69,	// (0x00023765) bg_popup_sub_pane_cp3

0xbb18,	// (0x0002b814) grid_hwr_fs_pane_ParamLimits

0xbb18,	// (0x0002b814) grid_hwr_fs_pane

0xbb30,	// (0x0002b82c) linegrid_hwr_fs_pane_ParamLimits

0xbb30,	// (0x0002b82c) linegrid_hwr_fs_pane

0xbb40,	// (0x0002b83c) cell_hwr_fs_pane_ParamLimits

0xbb40,	// (0x0002b83c) cell_hwr_fs_pane

0x3a75,	// (0x00023771) linegrid_hwr_fs_pane_g1_ParamLimits

0x3a75,	// (0x00023771) linegrid_hwr_fs_pane_g1

0x3a81,	// (0x0002377d) linegrid_hwr_fs_pane_g2_ParamLimits

0x3a81,	// (0x0002377d) linegrid_hwr_fs_pane_g2

0x3a93,	// (0x0002378f) linegrid_hwr_fs_pane_g3_ParamLimits

0x3a93,	// (0x0002378f) linegrid_hwr_fs_pane_g3

0xbb62,	// (0x0002b85e) linegrid_hwr_fs_pane_g4_ParamLimits

0xbb62,	// (0x0002b85e) linegrid_hwr_fs_pane_g4

0xbb7c,	// (0x0002b878) linegrid_hwr_fs_pane_g5_ParamLimits

0xbb7c,	// (0x0002b878) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f1,	// (0x0002f4ed) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0002f4ed) linegrid_hwr_fs_pane_g

0x3a9f,	// (0x0002379b) cell_hwr_fs_pane_g1_ParamLimits

0x3a9f,	// (0x0002379b) cell_hwr_fs_pane_g1

0x37f0,	// (0x000234ec) cell_hwr_fs_pane_g2_ParamLimits

0x37f0,	// (0x000234ec) cell_hwr_fs_pane_g2

0x3ab5,	// (0x000237b1) cell_hwr_fs_pane_g3_ParamLimits

0x3ab5,	// (0x000237b1) cell_hwr_fs_pane_g3

0x3ac2,	// (0x000237be) cell_hwr_fs_pane_g4_ParamLimits

0x3ac2,	// (0x000237be) cell_hwr_fs_pane_g4

0x0003,

0xf7fc,	// (0x0002f4f8) cell_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0002f4f8) cell_hwr_fs_pane_g

0xbb92,	// (0x0002b88e) cell_hwr_fs_pane_t1

0x1b9e,	// (0x0002189a) grid_highlight_pane_cp6

0x1b9e,	// (0x0002189a) main_idle_act2_pane

0x2632,	// (0x0002232e) aid_inside_area_popup_secondary

0x475c,	// (0x00024458) aid_inside_area_window_primary_ParamLimits

0x475c,	// (0x00024458) aid_inside_area_window_primary

0x52ff,	// (0x00024ffb) ai2_news_ticker_pane

0x5307,	// (0x00025003) aid_size_cell_ai1_link_ParamLimits

0x5307,	// (0x00025003) aid_size_cell_ai1_link

0x5321,	// (0x0002501d) popup_ai2_data_window_ParamLimits

0x5321,	// (0x0002501d) popup_ai2_data_window

0x5335,	// (0x00025031) popup_ai2_link_window_ParamLimits

0x5335,	// (0x00025031) popup_ai2_link_window

0x3a69,	// (0x00023765) bg_popup_sub_pane_cp4_ParamLimits

0x3a69,	// (0x00023765) bg_popup_sub_pane_cp4

0x5349,	// (0x00025045) grid_ai2_link_pane_ParamLimits

0x5349,	// (0x00025045) grid_ai2_link_pane

0x5360,	// (0x0002505c) popup_ai2_link_window_g1_ParamLimits

0x5360,	// (0x0002505c) popup_ai2_link_window_g1

0x536c,	// (0x00025068) popup_ai2_link_window_g2_ParamLimits

0x536c,	// (0x00025068) popup_ai2_link_window_g2

0x0001,

0xf9cf,	// (0x0002f6cb) popup_ai2_link_window_g_ParamLimits

0xf9cf,	// (0x0002f6cb) popup_ai2_link_window_g

0x537b,	// (0x00025077) ai2_mp_button_pane

0x5383,	// (0x0002507f) ai2_mp_volume_pane

0x3c94,	// (0x00023990) bg_popup_sub_pane_cp5_ParamLimits

0x3c94,	// (0x00023990) bg_popup_sub_pane_cp5

0x538b,	// (0x00025087) heading_ai2_gene_pane_ParamLimits

0x538b,	// (0x00025087) heading_ai2_gene_pane

0x5397,	// (0x00025093) list_ai2_gene_pane_ParamLimits

0x5397,	// (0x00025093) list_ai2_gene_pane

0x53df,	// (0x000250db) cell_ai2_link_pane_ParamLimits

0x53df,	// (0x000250db) cell_ai2_link_pane

0x53f5,	// (0x000250f1) cell_ai2_link_pane_g1

0x1b9e,	// (0x0002189a) grid_highlight_pane_cp7

0xbe8a,	// (0x0002bb86) ai2_mp_volume_pane_g1

0x54ce,	// (0x000251ca) ai2_mp_volume_pane_g2

0x543b,	// (0x00025137) list_ai2_gene_pane_t1

0x54c6,	// (0x000251c2) ai2_mp_volume_pane_g3

0x0002,

0xf9e8,	// (0x0002f6e4) ai2_mp_volume_pane_g

0xbe92,	// (0x0002bb8e) volume_small_pane_cp3

0x54d6,	// (0x000251d2) aid_size_cell_ai2_button

0x54de,	// (0x000251da) grid_ai2_button_pane

0x54e7,	// (0x000251e3) cell_ai2_button_pane_ParamLimits

0x54e7,	// (0x000251e3) cell_ai2_button_pane

0x1b94,	// (0x00021890) cell_ai2_button_pane_g1

0x1b9e,	// (0x0002189a) grid_highlight_pane_cp8

0x5486,	// (0x00025182) ai2_gene_pane_t1_ParamLimits

0x5486,	// (0x00025182) ai2_gene_pane_t1

0xb49b,	// (0x0002b197) aid_height_parent_landscape

0x4dd9,	// (0x00024ad5) aid_height_set_list

0x4dea,	// (0x00024ae6) aid_size_parent

0x50e0,	// (0x00024ddc) aid_size_cell_graphic_pane_ParamLimits

0x53a7,	// (0x000250a3) popup_ai2_data_window_g1_ParamLimits

0x53a7,	// (0x000250a3) popup_ai2_data_window_g1

0x53b3,	// (0x000250af) ai2_news_ticker_pane_g1

0x53bb,	// (0x000250b7) ai2_news_ticker_pane_g2

0x0001,

0xf9d4,	// (0x0002f6d0) ai2_news_ticker_pane_g

0x53c3,	// (0x000250bf) ai2_news_ticker_pane_t1

0x53d1,	// (0x000250cd) ai2_news_ticker_pane_t2

0x0001,

0xf9d9,	// (0x0002f6d5) ai2_news_ticker_pane_t

0x53fe,	// (0x000250fa) heading_ai2_gene_pane_g1

0x5406,	// (0x00025102) heading_ai2_gene_pane_t1_ParamLimits

0x5406,	// (0x00025102) heading_ai2_gene_pane_t1

0x541b,	// (0x00025117) list_highlight_pane_cp6

0x5423,	// (0x0002511f) ai2_gene_pane_ParamLimits

0x5423,	// (0x0002511f) ai2_gene_pane

0x5449,	// (0x00025145) list_ai2_gene_pane_t2

0x0001,

0xf9de,	// (0x0002f6da) list_ai2_gene_pane_t

0x5457,	// (0x00025153) list_highlight_pane_cp8_ParamLimits

0x5457,	// (0x00025153) list_highlight_pane_cp8

0x5468,	// (0x00025164) ai2_gene_pane_g1_ParamLimits

0x5468,	// (0x00025164) ai2_gene_pane_g1

0x547a,	// (0x00025176) ai2_gene_pane_g2_ParamLimits

0x547a,	// (0x00025176) ai2_gene_pane_g2

0x0001,

0xf9e3,	// (0x0002f6df) ai2_gene_pane_g_ParamLimits

0xf9e3,	// (0x0002f6df) ai2_gene_pane_g

0x2467,	// (0x00022163) scroll_pane_cp12

0xb45a,	// (0x0002b156) control_pane_t3_ParamLimits

0xb45a,	// (0x0002b156) control_pane_t3

0x33ae,	// (0x000230aa) status_small_pane_g8_ParamLimits

0x33ae,	// (0x000230aa) status_small_pane_g8

0xb621,	// (0x0002b31d) popup_find_window_ParamLimits

0xb834,	// (0x0002b530) popup_note_image_window_ParamLimits

0xe245,	// (0x0002df41) list_double2_graphic_pane_vc_g1_ParamLimits

0xe245,	// (0x0002df41) list_double2_graphic_pane_vc_g1

0xe1cb,	// (0x0002dec7) list_double2_graphic_pane_vc_g2_ParamLimits

0xe1cb,	// (0x0002dec7) list_double2_graphic_pane_vc_g2

0xe1d7,	// (0x0002ded3) list_double2_graphic_pane_vc_g3_ParamLimits

0xe1d7,	// (0x0002ded3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0002f4bb) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0002f4bb) list_double2_graphic_pane_vc_g

0xed93,	// (0x0002ea8f) list_double2_graphic_pane_vc_t1_ParamLimits

0xed93,	// (0x0002ea8f) list_double2_graphic_pane_vc_t1

0xe1cb,	// (0x0002dec7) list_single_heading_pane_vc_g1_ParamLimits

0xe1cb,	// (0x0002dec7) list_single_heading_pane_vc_g1

0xe1d7,	// (0x0002ded3) list_single_heading_pane_vc_g2_ParamLimits

0xe1d7,	// (0x0002ded3) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002f2ca) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002f2ca) list_single_heading_pane_vc_g

0xeda9,	// (0x0002eaa5) list_single_heading_pane_vc_t1_ParamLimits

0xeda9,	// (0x0002eaa5) list_single_heading_pane_vc_t1

0xedbf,	// (0x0002eabb) list_single_heading_pane_vc_t2_ParamLimits

0xedbf,	// (0x0002eabb) list_single_heading_pane_vc_t2

0x0001,

0xf7e0,	// (0x0002f4dc) list_single_heading_pane_vc_t_ParamLimits

0xf7e0,	// (0x0002f4dc) list_single_heading_pane_vc_t

0x39c1,	// (0x000236bd) list_setting_number_pane_vc_g1_ParamLimits

0x39c1,	// (0x000236bd) list_setting_number_pane_vc_g1

0x39cd,	// (0x000236c9) list_setting_number_pane_vc_g2_ParamLimits

0x39cd,	// (0x000236c9) list_setting_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002f4e1) list_setting_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002f4e1) list_setting_number_pane_vc_g

0x39d9,	// (0x000236d5) list_setting_number_pane_vc_t1_ParamLimits

0x39d9,	// (0x000236d5) list_setting_number_pane_vc_t1

0x39ed,	// (0x000236e9) list_setting_number_pane_vc_t2_ParamLimits

0x39ed,	// (0x000236e9) list_setting_number_pane_vc_t2

0x3a07,	// (0x00023703) list_setting_number_pane_vc_t3_ParamLimits

0x3a07,	// (0x00023703) list_setting_number_pane_vc_t3

0x0002,

0xf7ea,	// (0x0002f4e6) list_setting_number_pane_vc_t_ParamLimits

0xf7ea,	// (0x0002f4e6) list_setting_number_pane_vc_t

0x3a2d,	// (0x00023729) set_value_pane_vc_ParamLimits

0x3a2d,	// (0x00023729) set_value_pane_vc

0x4f9a,	// (0x00024c96) list_double2_graphic_pane_vc_ParamLimits

0x4f9a,	// (0x00024c96) list_double2_graphic_pane_vc

0x4fae,	// (0x00024caa) list_double2_large_graphic_pane_vc_ParamLimits

0x4fae,	// (0x00024caa) list_double2_large_graphic_pane_vc

0x4f9a,	// (0x00024c96) list_double2_pane_vc_ParamLimits

0x4f9a,	// (0x00024c96) list_double2_pane_vc

0x4f9a,	// (0x00024c96) list_double_graphic_heading_pane_vc_ParamLimits

0x4f9a,	// (0x00024c96) list_double_graphic_heading_pane_vc

0x4f9a,	// (0x00024c96) list_double_graphic_pane_vc_ParamLimits

0x4f9a,	// (0x00024c96) list_double_graphic_pane_vc

0x4f9a,	// (0x00024c96) list_double_heading_pane_vc_ParamLimits

0x4f9a,	// (0x00024c96) list_double_heading_pane_vc

0x4fae,	// (0x00024caa) list_double_large_graphic_pane_vc_ParamLimits

0x4fae,	// (0x00024caa) list_double_large_graphic_pane_vc

0x4f9a,	// (0x00024c96) list_double_number_pane_vc_ParamLimits

0x4f9a,	// (0x00024c96) list_double_number_pane_vc

0x4f9a,	// (0x00024c96) list_double_pane_vc_ParamLimits

0x4f9a,	// (0x00024c96) list_double_pane_vc

0x4f9a,	// (0x00024c96) list_double_time_pane_vc_ParamLimits

0x4f9a,	// (0x00024c96) list_double_time_pane_vc

0x4f9a,	// (0x00024c96) list_setting_number_pane_vc_ParamLimits

0x4f9a,	// (0x00024c96) list_setting_number_pane_vc

0x4f9a,	// (0x00024c96) list_setting_pane_vc_ParamLimits

0x4f9a,	// (0x00024c96) list_setting_pane_vc

0x4f9a,	// (0x00024c96) list_single_graphic_heading_pane_vc_ParamLimits

0x4f9a,	// (0x00024c96) list_single_graphic_heading_pane_vc

0x4f9a,	// (0x00024c96) list_single_heading_pane_vc_ParamLimits

0x4f9a,	// (0x00024c96) list_single_heading_pane_vc

0xee97,	// (0x0002eb93) list_single_number_heading_pane_vc_ParamLimits

0xee97,	// (0x0002eb93) list_single_number_heading_pane_vc

0xe245,	// (0x0002df41) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe245,	// (0x0002df41) list_double_graphic_heading_pane_vc_g1

0xe1cb,	// (0x0002dec7) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xe1cb,	// (0x0002dec7) list_double_graphic_heading_pane_vc_g2

0xe1d7,	// (0x0002ded3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xe1d7,	// (0x0002ded3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7bf,	// (0x0002f4bb) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0002f4bb) list_double_graphic_heading_pane_vc_g

0xef54,	// (0x0002ec50) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xef54,	// (0x0002ec50) list_double_graphic_heading_pane_vc_t1

0xeda9,	// (0x0002eaa5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeda9,	// (0x0002eaa5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ef,	// (0x0002f6eb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ef,	// (0x0002f6eb) list_double_graphic_heading_pane_vc_t

0x39c1,	// (0x000236bd) list_setting_pane_vc_g1_ParamLimits

0x39c1,	// (0x000236bd) list_setting_pane_vc_g1

0x39cd,	// (0x000236c9) list_setting_pane_vc_g2_ParamLimits

0x39cd,	// (0x000236c9) list_setting_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002f4e1) list_setting_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002f4e1) list_setting_pane_vc_g

0x5713,	// (0x0002540f) list_setting_pane_vc_t1_ParamLimits

0x5713,	// (0x0002540f) list_setting_pane_vc_t1

0x572d,	// (0x00025429) list_setting_pane_vc_t2_ParamLimits

0x572d,	// (0x00025429) list_setting_pane_vc_t2

0x0001,

0xfa32,	// (0x0002f72e) list_setting_pane_vc_t_ParamLimits

0xfa32,	// (0x0002f72e) list_setting_pane_vc_t

0x3a2d,	// (0x00023729) set_value_pane_cp_vc_ParamLimits

0x3a2d,	// (0x00023729) set_value_pane_cp_vc

0xe1cb,	// (0x0002dec7) list_single_number_heading_pane_vc_g1_ParamLimits

0xe1cb,	// (0x0002dec7) list_single_number_heading_pane_vc_g1

0xe1d7,	// (0x0002ded3) list_single_number_heading_pane_vc_g2_ParamLimits

0xe1d7,	// (0x0002ded3) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002f2ca) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002f2ca) list_single_number_heading_pane_vc_g

0xeda9,	// (0x0002eaa5) list_single_number_heading_pane_vc_t1_ParamLimits

0xeda9,	// (0x0002eaa5) list_single_number_heading_pane_vc_t1

0xef68,	// (0x0002ec64) list_single_number_heading_pane_vc_t2_ParamLimits

0xef68,	// (0x0002ec64) list_single_number_heading_pane_vc_t2

0xe233,	// (0x0002df2f) list_single_number_heading_pane_vc_t3_ParamLimits

0xe233,	// (0x0002df2f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa37,	// (0x0002f733) list_single_number_heading_pane_vc_t_ParamLimits

0xfa37,	// (0x0002f733) list_single_number_heading_pane_vc_t

0xe245,	// (0x0002df41) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe245,	// (0x0002df41) list_single_graphic_heading_pane_vc_g1

0xe1cb,	// (0x0002dec7) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe1cb,	// (0x0002dec7) list_single_graphic_heading_pane_vc_g4

0xe1d7,	// (0x0002ded3) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe1d7,	// (0x0002ded3) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x0002f4bb) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0002f4bb) list_single_graphic_heading_pane_vc_g

0xeda9,	// (0x0002eaa5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xeda9,	// (0x0002eaa5) list_single_graphic_heading_pane_vc_t1

0xef7c,	// (0x0002ec78) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xef7c,	// (0x0002ec78) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3e,	// (0x0002f73a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0002f73a) list_single_graphic_heading_pane_vc_t

0xe1cb,	// (0x0002dec7) list_double2_pane_vc_g1_ParamLimits

0xe1cb,	// (0x0002dec7) list_double2_pane_vc_g1

0xe1d7,	// (0x0002ded3) list_double2_pane_vc_g2_ParamLimits

0xe1d7,	// (0x0002ded3) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002f2ca) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002f2ca) list_double2_pane_vc_g

0xee5f,	// (0x0002eb5b) list_double2_pane_vc_t1_ParamLimits

0xee5f,	// (0x0002eb5b) list_double2_pane_vc_t1

0xef90,	// (0x0002ec8c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xef90,	// (0x0002ec8c) list_double2_large_graphic_pane_vc_g1

0xef9c,	// (0x0002ec98) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xef9c,	// (0x0002ec98) list_double2_large_graphic_pane_vc_g2

0xefa8,	// (0x0002eca4) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xefa8,	// (0x0002eca4) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa43,	// (0x0002f73f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x0002f73f) list_double2_large_graphic_pane_vc_g

0xefb4,	// (0x0002ecb0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xefb4,	// (0x0002ecb0) list_double2_large_graphic_pane_vc_t1

0xefca,	// (0x0002ecc6) list_double_time_pane_vc_g1_ParamLimits

0xefca,	// (0x0002ecc6) list_double_time_pane_vc_g1

0xefd6,	// (0x0002ecd2) list_double_time_pane_vc_g2_ParamLimits

0xefd6,	// (0x0002ecd2) list_double_time_pane_vc_g2

0x0001,

0xfa4a,	// (0x0002f746) list_double_time_pane_vc_g_ParamLimits

0xfa4a,	// (0x0002f746) list_double_time_pane_vc_g

0xefe2,	// (0x0002ecde) list_double_time_pane_vc_t1_ParamLimits

0xefe2,	// (0x0002ecde) list_double_time_pane_vc_t1

0xf000,	// (0x0002ecfc) list_double_time_pane_vc_t2_ParamLimits

0xf000,	// (0x0002ecfc) list_double_time_pane_vc_t2

0xf04f,	// (0x0002ed4b) list_double_time_pane_vc_t3_ParamLimits

0xf04f,	// (0x0002ed4b) list_double_time_pane_vc_t3

0xf061,	// (0x0002ed5d) list_double_time_pane_vc_t4_ParamLimits

0xf061,	// (0x0002ed5d) list_double_time_pane_vc_t4

0x0003,

0xfa4f,	// (0x0002f74b) list_double_time_pane_vc_t_ParamLimits

0xfa4f,	// (0x0002f74b) list_double_time_pane_vc_t

0xe1cb,	// (0x0002dec7) list_double_pane_vc_g1_ParamLimits

0xe1cb,	// (0x0002dec7) list_double_pane_vc_g1

0xe1d7,	// (0x0002ded3) list_double_pane_vc_g2_ParamLimits

0xe1d7,	// (0x0002ded3) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002f2ca) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002f2ca) list_double_pane_vc_g

0xf075,	// (0x0002ed71) list_double_pane_vc_t1_ParamLimits

0xf075,	// (0x0002ed71) list_double_pane_vc_t1

0xf087,	// (0x0002ed83) list_double_pane_vc_t2_ParamLimits

0xf087,	// (0x0002ed83) list_double_pane_vc_t2

0x0001,

0xfa58,	// (0x0002f754) list_double_pane_vc_t_ParamLimits

0xfa58,	// (0x0002f754) list_double_pane_vc_t

0xe1cb,	// (0x0002dec7) list_double_number_pane_vc_g1_ParamLimits

0xe1cb,	// (0x0002dec7) list_double_number_pane_vc_g1

0xe1d7,	// (0x0002ded3) list_double_number_pane_vc_g2_ParamLimits

0xe1d7,	// (0x0002ded3) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002f2ca) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002f2ca) list_double_number_pane_vc_g

0xf09f,	// (0x0002ed9b) list_double_number_pane_vc_t1_ParamLimits

0xf09f,	// (0x0002ed9b) list_double_number_pane_vc_t1

0xf0b3,	// (0x0002edaf) list_double_number_pane_vc_t2_ParamLimits

0xf0b3,	// (0x0002edaf) list_double_number_pane_vc_t2

0xf087,	// (0x0002ed83) list_double_number_pane_vc_t3_ParamLimits

0xf087,	// (0x0002ed83) list_double_number_pane_vc_t3

0x0002,

0xfa5d,	// (0x0002f759) list_double_number_pane_vc_t_ParamLimits

0xfa5d,	// (0x0002f759) list_double_number_pane_vc_t

0xf0c5,	// (0x0002edc1) list_double_large_graphic_pane_vc_g1_ParamLimits

0xf0c5,	// (0x0002edc1) list_double_large_graphic_pane_vc_g1

0xf0d6,	// (0x0002edd2) list_double_large_graphic_pane_vc_g2_ParamLimits

0xf0d6,	// (0x0002edd2) list_double_large_graphic_pane_vc_g2

0xefa8,	// (0x0002eca4) list_double_large_graphic_pane_vc_g3_ParamLimits

0xefa8,	// (0x0002eca4) list_double_large_graphic_pane_vc_g3

0xf0e5,	// (0x0002ede1) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf0e5,	// (0x0002ede1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa64,	// (0x0002f760) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa64,	// (0x0002f760) list_double_large_graphic_pane_vc_g

0xf0f1,	// (0x0002eded) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf0f1,	// (0x0002eded) list_double_large_graphic_pane_vc_t1

0xf108,	// (0x0002ee04) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf108,	// (0x0002ee04) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6d,	// (0x0002f769) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6d,	// (0x0002f769) list_double_large_graphic_pane_vc_t

0xe1cb,	// (0x0002dec7) list_double_heading_pane_vc_g1_ParamLimits

0xe1cb,	// (0x0002dec7) list_double_heading_pane_vc_g1

0xe1d7,	// (0x0002ded3) list_double_heading_pane_vc_g2_ParamLimits

0xe1d7,	// (0x0002ded3) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002f2ca) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002f2ca) list_double_heading_pane_vc_g

0xf121,	// (0x0002ee1d) list_double_heading_pane_vc_t1_ParamLimits

0xf121,	// (0x0002ee1d) list_double_heading_pane_vc_t1

0xeda9,	// (0x0002eaa5) list_double_heading_pane_vc_t2_ParamLimits

0xeda9,	// (0x0002eaa5) list_double_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x0002f76e) list_double_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x0002f76e) list_double_heading_pane_vc_t

0xf135,	// (0x0002ee31) list_double_graphic_pane_vc_g1_ParamLimits

0xf135,	// (0x0002ee31) list_double_graphic_pane_vc_g1

0xf145,	// (0x0002ee41) list_double_graphic_pane_vc_g2_ParamLimits

0xf145,	// (0x0002ee41) list_double_graphic_pane_vc_g2

0xf154,	// (0x0002ee50) list_double_graphic_pane_vc_g3_ParamLimits

0xf154,	// (0x0002ee50) list_double_graphic_pane_vc_g3

0x0002,

0xfa77,	// (0x0002f773) list_double_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x0002f773) list_double_graphic_pane_vc_g

0xf160,	// (0x0002ee5c) list_double_graphic_pane_vc_t1_ParamLimits

0xf160,	// (0x0002ee5c) list_double_graphic_pane_vc_t1

0xf087,	// (0x0002ed83) list_double_graphic_pane_vc_t2_ParamLimits

0xf087,	// (0x0002ed83) list_double_graphic_pane_vc_t2

0x0001,

0xfa7e,	// (0x0002f77a) list_double_graphic_pane_vc_t_ParamLimits

0xfa7e,	// (0x0002f77a) list_double_graphic_pane_vc_t

0xaa7e,	// (0x0002a77a) aid_size_cell_fastswap

0xaa86,	// (0x0002a782) aid_size_cell_touch_ParamLimits

0xaa86,	// (0x0002a782) aid_size_cell_touch

0xaceb,	// (0x0002a9e7) popup_fast_swap_wide_window_ParamLimits

0xaceb,	// (0x0002a9e7) popup_fast_swap_wide_window

0xade1,	// (0x0002aadd) touch_pane_ParamLimits

0xade1,	// (0x0002aadd) touch_pane

0x24bd,	// (0x000221b9) button_value_adjust_pane_cp2

0xeab6,	// (0x0002e7b2) button_value_adjust_pane_cp4

0xead6,	// (0x0002e7d2) form_field_data_pane_cp2

0xeaf5,	// (0x0002e7f1) form_field_data_wide_pane_cp2

0x2949,	// (0x00022645) bg_scroll_pane_ParamLimits

0xb06d,	// (0x0002ad69) scroll_handle_pane_ParamLimits

0xb081,	// (0x0002ad7d) scroll_sc2_down_pane_ParamLimits

0xb081,	// (0x0002ad7d) scroll_sc2_down_pane

0x297a,	// (0x00022676) scroll_sc2_up_pane_ParamLimits

0x297a,	// (0x00022676) scroll_sc2_up_pane

0x5bec,	// (0x000258e8) grid_wheel_folder_pane_g1_ParamLimits

0x5bec,	// (0x000258e8) grid_wheel_folder_pane_g1

0xb246,	// (0x0002af42) clock_nsta_pane_cp2_ParamLimits

0xb246,	// (0x0002af42) clock_nsta_pane_cp2

0x26be,	// (0x000223ba) listscroll_midp_pane_ParamLimits

0x3143,	// (0x00022e3f) midp_canvas_pane

0x3429,	// (0x00023125) nsta_clock_indic_pane

0x345d,	// (0x00023159) listscroll_form_pane_vc

0x3465,	// (0x00023161) listscroll_set_pane_vc_ParamLimits

0x3465,	// (0x00023161) listscroll_set_pane_vc

0x356a,	// (0x00023266) clock_nsta_pane

0x35df,	// (0x000232db) indicator_nsta_pane

0x38b7,	// (0x000235b3) bg_popup_sub_pane_cp2_ParamLimits

0x38cb,	// (0x000235c7) find_pane_cp2_ParamLimits

0x38cb,	// (0x000235c7) find_pane_cp2

0x38e1,	// (0x000235dd) grid_toobar_pane_ParamLimits

0x3a3d,	// (0x00023739) list_form_gen_pane_vc_ParamLimits

0x3a3d,	// (0x00023739) list_form_gen_pane_vc

0x3a53,	// (0x0002374f) scroll_pane_cp8_vc_ParamLimits

0x3a53,	// (0x0002374f) scroll_pane_cp8_vc

0x3acf,	// (0x000237cb) data_form_wide_pane_vc_ParamLimits

0x3acf,	// (0x000237cb) data_form_wide_pane_vc

0x3adb,	// (0x000237d7) form_field_data_wide_pane_vc_g1

0x3ae3,	// (0x000237df) form_field_data_wide_pane_vc_t1_ParamLimits

0x3ae3,	// (0x000237df) form_field_data_wide_pane_vc_t1

0x24d1,	// (0x000221cd) input_focus_pane_cp6_vc_ParamLimits

0x24d1,	// (0x000221cd) input_focus_pane_cp6_vc

0x3e35,	// (0x00023b31) list_midp_pane_ParamLimits

0x3e41,	// (0x00023b3d) scroll_pane_cp16_ParamLimits

0x3e41,	// (0x00023b3d) scroll_pane_cp16

0x3e8f,	// (0x00023b8b) button_value_adjust_pane_ParamLimits

0x3e8f,	// (0x00023b8b) button_value_adjust_pane

0x4dfc,	// (0x00024af8) button_value_adjust_pane_cp6_ParamLimits

0x4dfc,	// (0x00024af8) button_value_adjust_pane_cp6

0x4f1e,	// (0x00024c1a) settings_code_pane_cp_ParamLimits

0x4f1e,	// (0x00024c1a) settings_code_pane_cp

0x1b94,	// (0x00021890) cell_touch_pane_g1

0x1b94,	// (0x00021890) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0002f400) cell_touch_pane_g

0x54f9,	// (0x000251f5) cell_touch_pane_cp_ParamLimits

0x54f9,	// (0x000251f5) cell_touch_pane_cp

0x5509,	// (0x00025205) cell_touch_pane_ParamLimits

0x5509,	// (0x00025205) cell_touch_pane

0x1b94,	// (0x00021890) scroll_sc2_down_pane_g1

0x1b94,	// (0x00021890) scroll_sc2_up_pane_g1

0x1b9e,	// (0x0002189a) bg_set_opt_pane_cp4_vc

0x551b,	// (0x00025217) list_set_graphic_pane_vc_g1_ParamLimits

0x551b,	// (0x00025217) list_set_graphic_pane_vc_g1

0x5527,	// (0x00025223) list_set_graphic_pane_vc_g2_ParamLimits

0x5527,	// (0x00025223) list_set_graphic_pane_vc_g2

0x0001,

0xf9f4,	// (0x0002f6f0) list_set_graphic_pane_vc_g_ParamLimits

0xf9f4,	// (0x0002f6f0) list_set_graphic_pane_vc_g

0x5533,	// (0x0002522f) text_primary_small_cp13_vc_ParamLimits

0x5533,	// (0x0002522f) text_primary_small_cp13_vc

0x554b,	// (0x00025247) list_set_graphic_pane_vc_ParamLimits

0x554b,	// (0x00025247) list_set_graphic_pane_vc

0x1b9e,	// (0x0002189a) input_focus_pane_cp2_vc

0x1b94,	// (0x00021890) setting_code_pane_vc_g1

0x1cc9,	// (0x000219c5) setting_code_pane_vc_t1

0x555f,	// (0x0002525b) set_text_pane_vc_t1_ParamLimits

0x555f,	// (0x0002525b) set_text_pane_vc_t1

0x1b9e,	// (0x0002189a) input_focus_pane_cp1_vc

0x557e,	// (0x0002527a) list_set_text_pane_vc

0x1b94,	// (0x00021890) setting_text_pane_vc_g1

0x1b9e,	// (0x0002189a) bg_set_opt_pane_cp2_vc

0x1cc0,	// (0x000219bc) setting_slider_graphic_pane_vc_g1

0x5588,	// (0x00025284) setting_slider_graphic_pane_vc_t1

0x5597,	// (0x00025293) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f9,	// (0x0002f6f5) setting_slider_graphic_pane_vc_t

0x55a6,	// (0x000252a2) slider_set_pane_cp_vc

0x55ae,	// (0x000252aa) slider_set_pane_vc_g1

0x55b7,	// (0x000252b3) slider_set_pane_vc_g2

0x0006,

0xf9fe,	// (0x0002f6fa) slider_set_pane_vc_g

0x2538,	// (0x00022234) set_opt_bg_pane_g1_copy1

0x2540,	// (0x0002223c) set_opt_bg_pane_g2_copy1

0x55e3,	// (0x000252df) set_opt_bg_pane_g3_copy1

0x2550,	// (0x0002224c) set_opt_bg_pane_g4_copy1

0x2558,	// (0x00022254) set_opt_bg_pane_g5_copy1

0x2560,	// (0x0002225c) set_opt_bg_pane_g6_copy1

0x55eb,	// (0x000252e7) set_opt_bg_pane_g7_copy1

0x55f5,	// (0x000252f1) set_opt_bg_pane_g8_copy1

0x55fd,	// (0x000252f9) set_opt_bg_pane_g9_copy1

0x1b9e,	// (0x0002189a) bg_set_opt_pane_cp_vc

0x5605,	// (0x00025301) setting_slider_pane_vc_t1

0x5614,	// (0x00025310) setting_slider_pane_vc_t2

0x5623,	// (0x0002531f) setting_slider_pane_vc_t3

0x0002,

0xfa0d,	// (0x0002f709) setting_slider_pane_vc_t

0x5632,	// (0x0002532e) slider_set_pane_vc

0xbba0,	// (0x0002b89c) volume_set_pane_vc_g1

0xbe9b,	// (0x0002bb97) volume_set_pane_vc_g2

0xbea4,	// (0x0002bba0) volume_set_pane_vc_g3

0xbead,	// (0x0002bba9) volume_set_pane_vc_g4

0xbeb6,	// (0x0002bbb2) volume_set_pane_vc_g5

0xbebf,	// (0x0002bbbb) volume_set_pane_vc_g6

0xbec8,	// (0x0002bbc4) volume_set_pane_vc_g7

0xbed1,	// (0x0002bbcd) volume_set_pane_vc_g8

0xbeda,	// (0x0002bbd6) volume_set_pane_vc_g9

0xbee3,	// (0x0002bbdf) volume_set_pane_vc_g10

0x0009,

0xfa14,	// (0x0002f710) volume_set_pane_vc_g

0x563a,	// (0x00025336) volume_set_pane_vc

0x5644,	// (0x00025340) button_value_adjust_pane_cp1_vc

0x564e,	// (0x0002534a) list_highlight_pane_cp2_vc

0x5657,	// (0x00025353) list_set_pane_vc_ParamLimits

0x5657,	// (0x00025353) list_set_pane_vc

0x56a9,	// (0x000253a5) main_pane_set_vc_t1_ParamLimits

0x56a9,	// (0x000253a5) main_pane_set_vc_t1

0x56be,	// (0x000253ba) main_pane_set_vc_t2_ParamLimits

0x56be,	// (0x000253ba) main_pane_set_vc_t2

0x56d0,	// (0x000253cc) main_pane_set_vc_t3_ParamLimits

0x56d0,	// (0x000253cc) main_pane_set_vc_t3

0x56e2,	// (0x000253de) main_pane_set_vc_t4_ParamLimits

0x56e2,	// (0x000253de) main_pane_set_vc_t4

0x0003,

0xfa29,	// (0x0002f725) main_pane_set_vc_t_ParamLimits

0xfa29,	// (0x0002f725) main_pane_set_vc_t

0x56f4,	// (0x000253f0) setting_code_pane_vc_ParamLimits

0x56f4,	// (0x000253f0) setting_code_pane_vc

0x5703,	// (0x000253ff) setting_slider_graphic_pane_vc

0x5703,	// (0x000253ff) setting_slider_pane_vc

0x5703,	// (0x000253ff) setting_text_pane_vc

0x5703,	// (0x000253ff) setting_volume_pane_vc

0x570b,	// (0x00025407) scroll_pane_cp121_vc

0x24ab,	// (0x000221a7) set_content_pane_vc

0x5743,	// (0x0002543f) button_value_adjust_pane_g1

0x574c,	// (0x00025448) button_value_adjust_pane_g2

0x0001,

0xfa83,	// (0x0002f77f) button_value_adjust_pane_g

0x5755,	// (0x00025451) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5755,	// (0x00025451) form_field_slider_wide_pane_vc_t1

0x5769,	// (0x00025465) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5769,	// (0x00025465) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa88,	// (0x0002f784) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa88,	// (0x0002f784) form_field_slider_wide_pane_vc_t

0x1ef9,	// (0x00021bf5) input_focus_pane_cp10_vc_ParamLimits

0x1ef9,	// (0x00021bf5) input_focus_pane_cp10_vc

0x5795,	// (0x00025491) slider_cont_pane_cp1_vc_ParamLimits

0x5795,	// (0x00025491) slider_cont_pane_cp1_vc

0x57a5,	// (0x000254a1) slider_form_pane_g1_cp2

0x55b7,	// (0x000252b3) slider_form_pane_g2_cp2

0x57d2,	// (0x000254ce) form_field_slider_pane_vc_t3

0x57e0,	// (0x000254dc) form_field_slider_pane_vc_t4

0x57ee,	// (0x000254ea) slider_form_pane_vc_ParamLimits

0x57ee,	// (0x000254ea) slider_form_pane_vc

0x57fb,	// (0x000254f7) form_field_slider_pane_vc_t1_ParamLimits

0x57fb,	// (0x000254f7) form_field_slider_pane_vc_t1

0x5769,	// (0x00025465) form_field_slider_pane_vc_t2_ParamLimits

0x5769,	// (0x00025465) form_field_slider_pane_vc_t2

0x0001,

0xfa9a,	// (0x0002f796) form_field_slider_pane_vc_t_ParamLimits

0xfa9a,	// (0x0002f796) form_field_slider_pane_vc_t

0x1ef9,	// (0x00021bf5) input_focus_pane_cp9_vc_ParamLimits

0x1ef9,	// (0x00021bf5) input_focus_pane_cp9_vc

0x5817,	// (0x00025513) slider_cont_pane_vc_ParamLimits

0x5817,	// (0x00025513) slider_cont_pane_vc

0x5829,	// (0x00025525) list_form_graphic_pane_cp_vc_ParamLimits

0x5829,	// (0x00025525) list_form_graphic_pane_cp_vc

0x3adb,	// (0x000237d7) form_field_popup_wide_pane_vc_g1

0x583e,	// (0x0002553a) form_field_popup_wide_pane_vc_t1_ParamLimits

0x583e,	// (0x0002553a) form_field_popup_wide_pane_vc_t1

0x24d1,	// (0x000221cd) input_focus_pane_cp8_vc_ParamLimits

0x24d1,	// (0x000221cd) input_focus_pane_cp8_vc

0x5883,	// (0x0002557f) list_form_wide_pane_vc_ParamLimits

0x5883,	// (0x0002557f) list_form_wide_pane_vc

0x588f,	// (0x0002558b) list_form_graphic_pane_vc_g1

0x5897,	// (0x00025593) list_form_graphic_pane_vc_t1_ParamLimits

0x5897,	// (0x00025593) list_form_graphic_pane_vc_t1

0x1c7e,	// (0x0002197a) list_highlight_pane_cp5_vc_ParamLimits

0x1c7e,	// (0x0002197a) list_highlight_pane_cp5_vc

0x58b3,	// (0x000255af) list_form_graphic_pane_vc_ParamLimits

0x58b3,	// (0x000255af) list_form_graphic_pane_vc

0x3adb,	// (0x000237d7) form_field_popup_pane_vc_g1

0x58c9,	// (0x000255c5) form_field_popup_pane_vc_t1_ParamLimits

0x58c9,	// (0x000255c5) form_field_popup_pane_vc_t1

0x24d1,	// (0x000221cd) input_focus_pane_cp7_vc_ParamLimits

0x24d1,	// (0x000221cd) input_focus_pane_cp7_vc

0x58e0,	// (0x000255dc) list_form_pane_vc_ParamLimits

0x58e0,	// (0x000255dc) list_form_pane_vc

0x58ec,	// (0x000255e8) data_form_pane_vc_t1_ParamLimits

0x58ec,	// (0x000255e8) data_form_pane_vc_t1

0x2538,	// (0x00022234) input_focus_pane_vc_g1

0x2540,	// (0x0002223c) input_focus_pane_vc_g2

0x2548,	// (0x00022244) input_focus_pane_vc_g3

0x2550,	// (0x0002224c) input_focus_pane_vc_g4

0x2558,	// (0x00022254) input_focus_pane_vc_g5

0x2560,	// (0x0002225c) input_focus_pane_vc_g6

0x2568,	// (0x00022264) input_focus_pane_vc_g7

0x2570,	// (0x0002226c) input_focus_pane_vc_g8

0x2578,	// (0x00022274) input_focus_pane_vc_g9

0x1b94,	// (0x00021890) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0002f389) input_focus_pane_vc_g

0x3acf,	// (0x000237cb) data_form_pane_vc_ParamLimits

0x3acf,	// (0x000237cb) data_form_pane_vc

0x3adb,	// (0x000237d7) form_field_data_pane_vc_g1

0x5907,	// (0x00025603) form_field_data_pane_vc_t1_ParamLimits

0x5907,	// (0x00025603) form_field_data_pane_vc_t1

0x24d1,	// (0x000221cd) input_focus_pane_vc_ParamLimits

0x24d1,	// (0x000221cd) input_focus_pane_vc

0x5921,	// (0x0002561d) button_value_adjust_pane_cp3_vc

0x5929,	// (0x00025625) button_value_adjust_pane_cp5_vc

0x5931,	// (0x0002562d) form_field_data_pane_vc_ParamLimits

0x5931,	// (0x0002562d) form_field_data_pane_vc

0x5948,	// (0x00025644) form_field_data_pane_vc_cp2

0x5950,	// (0x0002564c) form_field_data_wide_pane_vc_ParamLimits

0x5950,	// (0x0002564c) form_field_data_wide_pane_vc

0x5966,	// (0x00025662) form_field_data_wide_pane_vc_cp2

0x596e,	// (0x0002566a) form_field_popup_pane_vc_ParamLimits

0x596e,	// (0x0002566a) form_field_popup_pane_vc

0x5985,	// (0x00025681) form_field_popup_wide_pane_vc_ParamLimits

0x5985,	// (0x00025681) form_field_popup_wide_pane_vc

0x599b,	// (0x00025697) form_field_slider_pane_vc_ParamLimits

0x599b,	// (0x00025697) form_field_slider_pane_vc

0x59ae,	// (0x000256aa) form_field_slider_wide_pane_vc_ParamLimits

0x59ae,	// (0x000256aa) form_field_slider_wide_pane_vc

0x59c1,	// (0x000256bd) grid_touch_1_pane_ParamLimits

0x59c1,	// (0x000256bd) grid_touch_1_pane

0x59cd,	// (0x000256c9) grid_touch_2_pane_ParamLimits

0x59cd,	// (0x000256c9) grid_touch_2_pane

0x33f4,	// (0x000230f0) touch_pane_g1_ParamLimits

0x33f4,	// (0x000230f0) touch_pane_g1

0x59e5,	// (0x000256e1) cell_app_pane_cp_wide_ParamLimits

0x59e5,	// (0x000256e1) cell_app_pane_cp_wide

0x59f6,	// (0x000256f2) grid_popup_fast_wide_pane_ParamLimits

0x59f6,	// (0x000256f2) grid_popup_fast_wide_pane

0x5a0a,	// (0x00025706) scroll_pane_cp19_ParamLimits

0x5a0a,	// (0x00025706) scroll_pane_cp19

0x1b9e,	// (0x0002189a) bg_popup_window_pane_cp20

0x5a1e,	// (0x0002571a) listscroll_popup_fast_wide_pane

0x1c7e,	// (0x0002197a) grid_indicator_nsta_pane

0x5a26,	// (0x00025722) clock_nsta_pane_g1

0x5a2f,	// (0x0002572b) clock_nsta_pane_t1

0x5a4b,	// (0x00025747) cell_indicator_nsta_pane_ParamLimits

0x5a4b,	// (0x00025747) cell_indicator_nsta_pane

0x5a83,	// (0x0002577f) cell_indicator_nsta_pane_g1

0x5a91,	// (0x0002578d) cell_indicator_nsta_pane_g2

0x0001,

0xfaab,	// (0x0002f7a7) cell_indicator_nsta_pane_g

0x5aa7,	// (0x000257a3) clock_nsta_pane_cp

0x5aaf,	// (0x000257ab) indicator_nsta_pane_cp

0x5ab8,	// (0x000257b4) nsta_clock_indic_pane_g1

0x1d47,	// (0x00021a43) grid_indicator_pane

0x2a6c,	// (0x00022768) scroll_pane_cp29

0xb195,	// (0x0002ae91) indicator_nsta_pane_cp2_ParamLimits

0xb195,	// (0x0002ae91) indicator_nsta_pane_cp2

0x1c7e,	// (0x0002197a) main_apps_wheel_pane

0x3d10,	// (0x00023a0c) form_midp_field_text_pane_ParamLimits

0x3e61,	// (0x00023b5d) scroll_bar_cp050_ParamLimits

0x5b21,	// (0x0002581d) cell_indicator_pane_ParamLimits

0x5b21,	// (0x0002581d) cell_indicator_pane

0x5b3e,	// (0x0002583a) cell_indicator_pane_g1

0x5b48,	// (0x00025844) grid_wheel_folder_pane_ParamLimits

0x5b48,	// (0x00025844) grid_wheel_folder_pane

0x5b5e,	// (0x0002585a) list_wheel_apps_pane_ParamLimits

0x5b5e,	// (0x0002585a) list_wheel_apps_pane

0x5b6f,	// (0x0002586b) main_apps_wheel_pane_g1_ParamLimits

0x5b6f,	// (0x0002586b) main_apps_wheel_pane_g1

0x5b83,	// (0x0002587f) main_apps_wheel_pane_g2_ParamLimits

0x5b83,	// (0x0002587f) main_apps_wheel_pane_g2

0x0001,

0xfac7,	// (0x0002f7c3) main_apps_wheel_pane_g_ParamLimits

0xfac7,	// (0x0002f7c3) main_apps_wheel_pane_g

0x5b9b,	// (0x00025897) main_apps_wheel_pane_t1_ParamLimits

0x5b9b,	// (0x00025897) main_apps_wheel_pane_t1

0x5bbe,	// (0x000258ba) list_wheel_apps_pane_g1

0x5bc6,	// (0x000258c2) list_wheel_apps_pane_g2

0x5bce,	// (0x000258ca) list_wheel_apps_pane_g3

0x5bd8,	// (0x000258d4) list_wheel_apps_pane_g4

0x5be2,	// (0x000258de) list_wheel_apps_pane_g5

0x0004,

0xfacc,	// (0x0002f7c8) list_wheel_apps_pane_g

0x2fb9,	// (0x00022cb5) navi_icon_text_pane

0x3499,	// (0x00023195) aid_fill_nsta

0x5c05,	// (0x00025901) navi_icon_text_pane_g1

0x5c11,	// (0x0002590d) navi_icon_text_pane_t1

0x2e55,	// (0x00022b51) list_set_graphic_pane_t1_ParamLimits

0x2e55,	// (0x00022b51) list_set_graphic_pane_t1

0x45a3,	// (0x0002429f) popup_midp_note_alarm_window_t6_ParamLimits

0x45a3,	// (0x0002429f) popup_midp_note_alarm_window_t6

0x45b5,	// (0x000242b1) popup_midp_note_alarm_window_t7_ParamLimits

0x45b5,	// (0x000242b1) popup_midp_note_alarm_window_t7

0x45c7,	// (0x000242c3) popup_midp_note_alarm_window_t8_ParamLimits

0x45c7,	// (0x000242c3) popup_midp_note_alarm_window_t8

0x45d9,	// (0x000242d5) popup_midp_note_alarm_window_t9_ParamLimits

0x45d9,	// (0x000242d5) popup_midp_note_alarm_window_t9

0x45eb,	// (0x000242e7) popup_midp_note_alarm_window_t10_ParamLimits

0x45eb,	// (0x000242e7) popup_midp_note_alarm_window_t10

0x45fd,	// (0x000242f9) popup_midp_note_alarm_window_t11_ParamLimits

0x45fd,	// (0x000242f9) popup_midp_note_alarm_window_t11

0x460f,	// (0x0002430b) scroll_pane_cp17_ParamLimits

0x460f,	// (0x0002430b) scroll_pane_cp17

0xbba0,	// (0x0002b89c) volume_small_pane_cp_g1

0xbeec,	// (0x0002bbe8) volume_small_pane_cp_g2

0xbef5,	// (0x0002bbf1) volume_small_pane_cp_g3

0xbefe,	// (0x0002bbfa) volume_small_pane_cp_g4

0xbf07,	// (0x0002bc03) volume_small_pane_cp_g5

0xbf10,	// (0x0002bc0c) volume_small_pane_cp_g6

0xbf19,	// (0x0002bc15) volume_small_pane_cp_g7

0xbf22,	// (0x0002bc1e) volume_small_pane_cp_g8

0xbf2b,	// (0x0002bc27) volume_small_pane_cp_g9

0xbf34,	// (0x0002bc30) volume_small_pane_cp_g10

0x320e,	// (0x00022f0a) midp_ticker_pane_g1_ParamLimits

0x321a,	// (0x00022f16) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0002f455) midp_ticker_pane_g_ParamLimits

0x3226,	// (0x00022f22) midp_ticker_pane_t1_ParamLimits

0x34af,	// (0x000231ab) aid_fill_nsta_2

0x3e4d,	// (0x00023b49) list_form2_midp_pane

0x4f69,	// (0x00024c65) midp_editing_number_pane_ParamLimits

0x4f78,	// (0x00024c74) midp_ticker_pane_ParamLimits

0x5c23,	// (0x0002591f) form2_midp_field_pane

0x5c47,	// (0x00025943) scroll_pane_cp51

0x5c67,	// (0x00025963) form2_midp_button_pane_ParamLimits

0x5c67,	// (0x00025963) form2_midp_button_pane

0x5c79,	// (0x00025975) form2_midp_content_pane_ParamLimits

0x5c79,	// (0x00025975) form2_midp_content_pane

0x5c93,	// (0x0002598f) form2_midp_field_choice_group_pane

0x5c9b,	// (0x00025997) form2_midp_field_pane_g1

0x5ca3,	// (0x0002599f) form2_midp_field_pane_g2

0x5cab,	// (0x000259a7) form2_midp_field_pane_g3

0x5cb3,	// (0x000259af) form2_midp_field_pane_g4

0x0003,

0xfaf1,	// (0x0002f7ed) form2_midp_field_pane_g

0x5cbb,	// (0x000259b7) form2_midp_gauge_slider_pane

0x5cc3,	// (0x000259bf) form2_midp_gauge_wait_pane

0x5ccb,	// (0x000259c7) form2_midp_image_pane_ParamLimits

0x5ccb,	// (0x000259c7) form2_midp_image_pane

0x5ce6,	// (0x000259e2) form2_midp_label_pane_ParamLimits

0x5ce6,	// (0x000259e2) form2_midp_label_pane

0x5cff,	// (0x000259fb) form2_midp_label_pane_cp_ParamLimits

0x5cff,	// (0x000259fb) form2_midp_label_pane_cp

0x5d20,	// (0x00025a1c) form2_midp_string_pane_ParamLimits

0x5d20,	// (0x00025a1c) form2_midp_string_pane

0xf172,	// (0x0002ee6e) form2_midp_text_pane_ParamLimits

0xf172,	// (0x0002ee6e) form2_midp_text_pane

0x5d32,	// (0x00025a2e) form2_midp_time_pane

0x5d42,	// (0x00025a3e) input_focus_pane_cp51_ParamLimits

0x5d42,	// (0x00025a3e) input_focus_pane_cp51

0x5d5a,	// (0x00025a56) form2_midp_label_pane_t1_ParamLimits

0x5d5a,	// (0x00025a56) form2_midp_label_pane_t1

0xf18b,	// (0x0002ee87) form2_mdip_text_pane_t1_ParamLimits

0xf18b,	// (0x0002ee87) form2_mdip_text_pane_t1

0xf1a8,	// (0x0002eea4) form2_midp_time_pane_t1

0x5da2,	// (0x00025a9e) form2_midp_gauge_slider_pane_t1

0x5db4,	// (0x00025ab0) form2_midp_gauge_slider_pane_t2

0x5dc6,	// (0x00025ac2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafa,	// (0x0002f7f6) form2_midp_gauge_slider_pane_t

0x5dd8,	// (0x00025ad4) form2_midp_slider_pane

0x5de4,	// (0x00025ae0) form2_midp_gauge_wait_pane_t1

0x5df2,	// (0x00025aee) form2_midp_wait_pane_ParamLimits

0x5df2,	// (0x00025aee) form2_midp_wait_pane

0x5e1d,	// (0x00025b19) list_single_2graphic_pane_cp4_ParamLimits

0x5e1d,	// (0x00025b19) list_single_2graphic_pane_cp4

0x3b4e,	// (0x0002384a) list_single_midp_graphic_pane_cp_ParamLimits

0x3b4e,	// (0x0002384a) list_single_midp_graphic_pane_cp

0x1b9e,	// (0x0002189a) list_highlight_pane_cp20

0x5e4c,	// (0x00025b48) list_single_2graphic_pane_g1_cp4

0x53fe,	// (0x000250fa) list_single_2graphic_pane_g2_cp4

0x5e54,	// (0x00025b50) list_single_2graphic_pane_t1_cp4

0x1c7e,	// (0x0002197a) list_highlight_pane_cp21

0x5e63,	// (0x00025b5f) list_single_midp_graphic_pane_g4_cp

0x5e72,	// (0x00025b6e) list_single_midp_graphic_pane_t1_cp

0x5e87,	// (0x00025b83) form2_mdip_string_pane_t1_ParamLimits

0x5e87,	// (0x00025b83) form2_mdip_string_pane_t1

0x1b9e,	// (0x0002189a) bg_wml_button_pane_cp2

0x1b94,	// (0x00021890) form2_midp_image_pane_g1

0xe416,	// (0x0002e112) list_double_large_graphic_pane_g5_ParamLimits

0xe416,	// (0x0002e112) list_double_large_graphic_pane_g5

0x26be,	// (0x000223ba) midp_form_pane_ParamLimits

0x1c7e,	// (0x0002197a) main_apps_wheel_pane_ParamLimits

0xb85a,	// (0x0002b556) popup_preview_window_ParamLimits

0xb85a,	// (0x0002b556) popup_preview_window

0xba0b,	// (0x0002b707) popup_touch_info_window_ParamLimits

0xba0b,	// (0x0002b707) popup_touch_info_window

0xba29,	// (0x0002b725) popup_touch_menu_window_ParamLimits

0xba29,	// (0x0002b725) popup_touch_menu_window

0x1b8a,	// (0x00021886) bg_popup_sub_pane_cp6

0x5fc1,	// (0x00025cbd) list_touch_menu_pane

0x5fc9,	// (0x00025cc5) list_single_touch_menu_pane_ParamLimits

0x5fc9,	// (0x00025cc5) list_single_touch_menu_pane

0x5fdd,	// (0x00025cd9) list_single_touch_menu_pane_t1

0x1c7e,	// (0x0002197a) bg_popup_sub_pane_cp7_ParamLimits

0x1c7e,	// (0x0002197a) bg_popup_sub_pane_cp7

0x5feb,	// (0x00025ce7) heading_sub_pane

0x5ff3,	// (0x00025cef) list_touch_info_pane_ParamLimits

0x5ff3,	// (0x00025cef) list_touch_info_pane

0x6002,	// (0x00025cfe) list_single_touch_info_pane_ParamLimits

0x6002,	// (0x00025cfe) list_single_touch_info_pane

0x6014,	// (0x00025d10) list_single_touch_info_pane_t1

0x6022,	// (0x00025d1e) list_single_touch_info_pane_t2

0x0001,

0xfb08,	// (0x0002f804) list_single_touch_info_pane_t

0x313b,	// (0x00022e37) bg_popup_heading_pane_cp

0x6030,	// (0x00025d2c) heading_sub_pane_t1

0x3a69,	// (0x00023765) bg_popup_preview_window_pane_cp_ParamLimits

0x3a69,	// (0x00023765) bg_popup_preview_window_pane_cp

0x5feb,	// (0x00025ce7) heading_preview_pane

0x5ff3,	// (0x00025cef) list_preview_pane_ParamLimits

0x5ff3,	// (0x00025cef) list_preview_pane

0x603e,	// (0x00025d3a) popup_preview_window_g1

0x6002,	// (0x00025cfe) list_single_preview_pane_ParamLimits

0x6002,	// (0x00025cfe) list_single_preview_pane

0x6046,	// (0x00025d42) list_single_preview_pane_g1

0x604e,	// (0x00025d4a) list_single_preview_pane_t1

0x6014,	// (0x00025d10) list_single_preview_pane_t2

0x0001,

0xfb0d,	// (0x0002f809) list_single_preview_pane_t

0x605c,	// (0x00025d58) bg_popup_heading_pane_cp2_ParamLimits

0x605c,	// (0x00025d58) bg_popup_heading_pane_cp2

0x6072,	// (0x00025d6e) heading_preview_pane_g1

0x607a,	// (0x00025d76) heading_preview_pane_t1_ParamLimits

0x607a,	// (0x00025d76) heading_preview_pane_t1

0x1d6a,	// (0x00021a66) soft_indicator_pane_t1_ParamLimits

0x2444,	// (0x00022140) scroll_pane_ParamLimits

0x2971,	// (0x0002266d) scroll_sc2_left_pane

0x2968,	// (0x00022664) scroll_sc2_right_pane

0x2990,	// (0x0002268c) scroll_bg_pane_g1_ParamLimits

0x29a5,	// (0x000226a1) scroll_bg_pane_g2_ParamLimits

0x29bd,	// (0x000226b9) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0002f3e0) scroll_bg_pane_g_ParamLimits

0x2990,	// (0x0002268c) scroll_handle_pane_g1_ParamLimits

0x29df,	// (0x000226db) scroll_handle_pane_g2_ParamLimits

0x29bd,	// (0x000226b9) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0002f3e7) scroll_handle_pane_g_ParamLimits

0xb4e5,	// (0x0002b1e1) popup_choice_list_window_ParamLimits

0xb4e5,	// (0x0002b1e1) popup_choice_list_window

0x38c3,	// (0x000235bf) choice_list_pane

0x3945,	// (0x00023641) cell_toolbar_pane_t1

0x396d,	// (0x00023669) toolbar_button_pane_ParamLimits

0x4ac1,	// (0x000247bd) ai_gene_pane_1_t2_ParamLimits

0x4ac1,	// (0x000247bd) ai_gene_pane_1_t2

0x0001,

0xf90e,	// (0x0002f60a) ai_gene_pane_1_t_ParamLimits

0xf90e,	// (0x0002f60a) ai_gene_pane_1_t

0x6097,	// (0x00025d93) scroll_sc2_left_pane_g1

0x6097,	// (0x00025d93) scroll_sc2_right_pane_g1

0x3477,	// (0x00023173) bg_popup_sub_pane_cp10

0x60a1,	// (0x00025d9d) list_choice_list_pane

0x60b8,	// (0x00025db4) list_single_choice_list_pane_ParamLimits

0x60b8,	// (0x00025db4) list_single_choice_list_pane

0x2666,	// (0x00022362) list_single_choice_list_pane_g1

0x266e,	// (0x0002236a) list_single_choice_list_pane_t1_ParamLimits

0x266e,	// (0x0002236a) list_single_choice_list_pane_t1

0x60cb,	// (0x00025dc7) choice_list_pane_g1

0x60d3,	// (0x00025dcf) choice_list_pane_t1

0x1b8a,	// (0x00021886) input_focus_pane_cp11

0x2845,	// (0x00022541) title_pane_stacon_g2_ParamLimits

0x2845,	// (0x00022541) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0002f3c6) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0002f3c6) title_pane_stacon_g

0x313b,	// (0x00022e37) cursor_press_pane

0xb58b,	// (0x0002b287) popup_fep_hwr_window_ParamLimits

0xb58b,	// (0x0002b287) popup_fep_hwr_window

0xb603,	// (0x0002b2ff) popup_fep_vkb_window_ParamLimits

0xb603,	// (0x0002b2ff) popup_fep_vkb_window

0x60e1,	// (0x00025ddd) cursor_press_pane_g1

0x0002,

0xfb36,	// (0x0002f832) fep_vkb_side_pane_g_ParamLimits

0xbf76,	// (0x0002bc72) fep_hwr_candidate_pane_ParamLimits

0xbf76,	// (0x0002bc72) fep_hwr_candidate_pane

0xbfa0,	// (0x0002bc9c) fep_hwr_side_pane_ParamLimits

0xbfa0,	// (0x0002bc9c) fep_hwr_side_pane

0xbfc0,	// (0x0002bcbc) fep_hwr_top_pane_ParamLimits

0xbfc0,	// (0x0002bcbc) fep_hwr_top_pane

0xbfd8,	// (0x0002bcd4) fep_hwr_write_pane_ParamLimits

0xbfd8,	// (0x0002bcd4) fep_hwr_write_pane

0xfb36,	// (0x0002f832) fep_vkb_side_pane_g

0x60fb,	// (0x00025df7) fep_hwr_top_pane_g1

0x60e9,	// (0x00025de5) fep_hwr_top_pane_g2

0xc012,	// (0x0002bd0e) fep_hwr_top_pane_g3

0x0002,

0xfb12,	// (0x0002f80e) fep_hwr_top_pane_g

0xc027,	// (0x0002bd23) fep_hwr_top_text_pane

0x2b32,	// (0x0002282e) fep_hwr_top_text_pane_g1

0x6131,	// (0x00025e2d) fep_hwr_top_text_pane_t1

0xc11d,	// (0x0002be19) fep_hwr_candidate_pane_g1

0x638b,	// (0x00026087) fep_vkb_keypad_pane_g3_ParamLimits

0x638b,	// (0x00026087) fep_vkb_keypad_pane_g3

0x63b3,	// (0x000260af) fep_vkb_keypad_pane_g4_ParamLimits

0x63b3,	// (0x000260af) fep_vkb_keypad_pane_g4

0x6422,	// (0x0002611e) fep_vkb_bottom_pane_g2_ParamLimits

0x6422,	// (0x0002611e) fep_vkb_bottom_pane_g2

0x0001,

0xfb3d,	// (0x0002f839) fep_vkb_bottom_pane_g_ParamLimits

0xfb3d,	// (0x0002f839) fep_vkb_bottom_pane_g

0x6097,	// (0x00025d93) cell_vkb_side_pane_g2

0x0001,

0xfb47,	// (0x0002f843) cell_vkb_side_pane_g

0x64ad,	// (0x000261a9) cell_vkb_side_pane_t1

0x64bb,	// (0x000261b7) cell_vkb_side_pane_t1_copy1

0x6097,	// (0x00025d93) bg_fep_vkb_candidate_pane_g2

0x65ed,	// (0x000262e9) cell_vkb_candidate_pane_ParamLimits

0x613f,	// (0x00025e3b) aid_size_cell_vkb_ParamLimits

0x613f,	// (0x00025e3b) aid_size_cell_vkb

0x65ed,	// (0x000262e9) cell_vkb_candidate_pane

0xc144,	// (0x0002be40) bg_popup_fep_shadow_pane_g1

0x61cd,	// (0x00025ec9) fep_vkb_bottom_pane_ParamLimits

0x61cd,	// (0x00025ec9) fep_vkb_bottom_pane

0x620a,	// (0x00025f06) fep_vkb_candidate_pane_ParamLimits

0x620a,	// (0x00025f06) fep_vkb_candidate_pane

0x6226,	// (0x00025f22) fep_vkb_keypad_pane_ParamLimits

0x6226,	// (0x00025f22) fep_vkb_keypad_pane

0x626c,	// (0x00025f68) fep_vkb_side_pane_ParamLimits

0x626c,	// (0x00025f68) fep_vkb_side_pane

0x62a8,	// (0x00025fa4) fep_vkb_top_pane_ParamLimits

0x62a8,	// (0x00025fa4) fep_vkb_top_pane

0x62e4,	// (0x00025fe0) fep_vkb_top_pane_g1_ParamLimits

0x62e4,	// (0x00025fe0) fep_vkb_top_pane_g1

0x62f3,	// (0x00025fef) fep_vkb_top_pane_g2_ParamLimits

0x62f3,	// (0x00025fef) fep_vkb_top_pane_g2

0x6302,	// (0x00025ffe) fep_vkb_top_pane_g3_ParamLimits

0x6302,	// (0x00025ffe) fep_vkb_top_pane_g3

0x0003,

0xfb2d,	// (0x0002f829) fep_vkb_top_pane_g_ParamLimits

0xfb2d,	// (0x0002f829) fep_vkb_top_pane_g

0x6320,	// (0x0002601c) fep_vkb_top_text_pane_ParamLimits

0x6320,	// (0x0002601c) fep_vkb_top_text_pane

0x6331,	// (0x0002602d) fep_vkb_side_pane_g1_ParamLimits

0x6331,	// (0x0002602d) fep_vkb_side_pane_g1

0x637a,	// (0x00026076) grid_vkb_side_pane_ParamLimits

0x637a,	// (0x00026076) grid_vkb_side_pane

0xc14c,	// (0x0002be48) bg_popup_fep_shadow_pane_g2

0xc155,	// (0x0002be51) bg_popup_fep_shadow_pane_g3

0xc15d,	// (0x0002be59) bg_popup_fep_shadow_pane_g4

0xc166,	// (0x0002be62) bg_popup_fep_shadow_pane_g5

0xc170,	// (0x0002be6c) bg_popup_fep_shadow_pane_g6

0xc178,	// (0x0002be74) bg_popup_fep_shadow_pane_g7

0x2550,	// (0x0002224c) bg_popup_fep_shadow_pane_g8

0x63d1,	// (0x000260cd) grid_vkb_keypad_number_pane_ParamLimits

0x63d1,	// (0x000260cd) grid_vkb_keypad_number_pane

0x63e1,	// (0x000260dd) grid_vkb_keypad_pane_ParamLimits

0x63e1,	// (0x000260dd) grid_vkb_keypad_pane

0x6407,	// (0x00026103) fep_vkb_bottom_pane_g1_ParamLimits

0x6407,	// (0x00026103) fep_vkb_bottom_pane_g1

0x6430,	// (0x0002612c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6430,	// (0x0002612c) grid_vkb_keypad_bottom_left_pane

0x6445,	// (0x00026141) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6445,	// (0x00026141) grid_vkb_keypad_bottom_right_pane

0x645a,	// (0x00026156) fep_vkb_top_text_pane_g1

0x6475,	// (0x00026171) fep_vkb_top_text_pane_t1

0x648a,	// (0x00026186) cell_vkb_side_pane_ParamLimits

0x648a,	// (0x00026186) cell_vkb_side_pane

0x6097,	// (0x00025d93) cell_vkb_side_pane_g1

0x64c9,	// (0x000261c5) cell_vkb_keypad_pane_ParamLimits

0x64c9,	// (0x000261c5) cell_vkb_keypad_pane

0x6544,	// (0x00026240) cell_vkb_keypad_pane_g1

0x0008,

0xfb5a,	// (0x0002f856) bg_popup_fep_shadow_pane_g

0xc18a,	// (0x0002be86) cell_hwr_side_pane_g1

0xc18a,	// (0x0002be86) cell_hwr_side_pane_g2

0x654e,	// (0x0002624a) cell_vkb_keypad_pane_t1

0x655c,	// (0x00026258) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x655c,	// (0x00026258) cell_vkb_keypad_bottom_left_pane

0x6579,	// (0x00026275) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x6579,	// (0x00026275) cell_vkb_keypad_bottom_right_pane

0x6097,	// (0x00025d93) cell_vkb_keypad_bottom_left_pane_g1

0x6097,	// (0x00025d93) cell_vkb_keypad_bottom_right_pane_g1

0x65b2,	// (0x000262ae) cell_vkb_keypad_number_pane_ParamLimits

0x65b2,	// (0x000262ae) cell_vkb_keypad_number_pane

0x65d1,	// (0x000262cd) cell_vkb_keypad_number_pane_g1

0x65db,	// (0x000262d7) cell_vkb_keypad_number_pane_g2

0x65e4,	// (0x000262e0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4c,	// (0x0002f848) cell_vkb_keypad_number_pane_g

0x654e,	// (0x0002624a) cell_vkb_keypad_number_pane_t1

0x660a,	// (0x00026306) fep_vkb_candidate_pane_g1

0x0001,

0xfb6d,	// (0x0002f869) cell_hwr_side_pane_g

0x6623,	// (0x0002631f) cell_hwr_side_pane_t1

0xc194,	// (0x0002be90) cell_hwr_side_pane_t1_copy1

0xc1a2,	// (0x0002be9e) cell_hwr_candidate_pane_g1

0xc1d1,	// (0x0002becd) cell_hwr_candidate_pane_t1

0x6097,	// (0x00025d93) cell_vkb_candidate_pane_g2

0x6667,	// (0x00026363) cell_vkb_candidate_pane_t1

0xbf3d,	// (0x0002bc39) bg_popup_fep_shadow_pane_ParamLimits

0xbf3d,	// (0x0002bc39) bg_popup_fep_shadow_pane

0xbff2,	// (0x0002bcee) bg_fep_hwr_top_pane_g4

0x610d,	// (0x00025e09) bg_hwr_side_pane_g1_ParamLimits

0x610d,	// (0x00025e09) bg_hwr_side_pane_g1

0xc063,	// (0x0002bd5f) cell_hwr_side_pane_ParamLimits

0xc063,	// (0x0002bd5f) cell_hwr_side_pane

0xc09e,	// (0x0002bd9a) fep_hwr_write_pane_g1_ParamLimits

0xc09e,	// (0x0002bd9a) fep_hwr_write_pane_g1

0xc0ab,	// (0x0002bda7) fep_hwr_write_pane_g2_ParamLimits

0xc0ab,	// (0x0002bda7) fep_hwr_write_pane_g2

0xc0b8,	// (0x0002bdb4) fep_hwr_write_pane_g3_ParamLimits

0xc0b8,	// (0x0002bdb4) fep_hwr_write_pane_g3

0xc0c6,	// (0x0002bdc2) fep_hwr_write_pane_g4_ParamLimits

0xc0c6,	// (0x0002bdc2) fep_hwr_write_pane_g4

0x0005,

0xfb19,	// (0x0002f815) fep_hwr_write_pane_g_ParamLimits

0xfb19,	// (0x0002f815) fep_hwr_write_pane_g

0xbff2,	// (0x0002bcee) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xbff2,	// (0x0002bcee) bg_fep_hwr_candidate_pane_g2

0xc0db,	// (0x0002bdd7) cell_hwr_candidate_pane_ParamLimits

0xc0db,	// (0x0002bdd7) cell_hwr_candidate_pane

0xc11d,	// (0x0002be19) fep_hwr_candidate_pane_g1_ParamLimits

0x616d,	// (0x00025e69) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x616d,	// (0x00025e69) bg_popup_fep_shadow_pane_cp2

0x6312,	// (0x0002600e) fep_vkb_top_pane_g4_ParamLimits

0x6312,	// (0x0002600e) fep_vkb_top_pane_g4

0x6358,	// (0x00026054) fep_vkb_side_pane_g2_ParamLimits

0x6358,	// (0x00026054) fep_vkb_side_pane_g2

0xe9eb,	// (0x0002e6e7) list_setting_pane_t4_ParamLimits

0xe9eb,	// (0x0002e6e7) list_setting_pane_t4

0xea7d,	// (0x0002e779) list_setting_number_pane_t5_ParamLimits

0xea7d,	// (0x0002e779) list_setting_number_pane_t5

0x2b79,	// (0x00022875) list_double_heading_pane_cp2_ParamLimits

0x2b79,	// (0x00022875) list_double_heading_pane_cp2

0x24eb,	// (0x000221e7) list_double_heading_pane_g1_cp2_ParamLimits

0x24eb,	// (0x000221e7) list_double_heading_pane_g1_cp2

0x24f7,	// (0x000221f3) list_double_heading_pane_g2_cp2_ParamLimits

0x24f7,	// (0x000221f3) list_double_heading_pane_g2_cp2

0x6675,	// (0x00026371) list_double_heading_pane_t1_cp2_ParamLimits

0x6675,	// (0x00026371) list_double_heading_pane_t1_cp2

0x668b,	// (0x00026387) list_double_heading_pane_t2_cp2_ParamLimits

0x668b,	// (0x00026387) list_double_heading_pane_t2_cp2

0x1b72,	// (0x0002186e) aid_value_unit2

0xad37,	// (0x0002aa33) popup_preview_fixed_window

0x1f07,	// (0x00021c03) bg_popup_preview_window_pane_cp02

0x669d,	// (0x00026399) list_preview_fixed_pane

0x66e3,	// (0x000263df) list_empty_pane_fp_ParamLimits

0x66e3,	// (0x000263df) list_empty_pane_fp

0x66e3,	// (0x000263df) list_single_cale_day_pane_fp_ParamLimits

0x66e3,	// (0x000263df) list_single_cale_day_pane_fp

0x66e3,	// (0x000263df) list_single_graphic_heading_pane_fp_ParamLimits

0x66e3,	// (0x000263df) list_single_graphic_heading_pane_fp

0x66e3,	// (0x000263df) list_single_graphic_pane_fp_ParamLimits

0x66e3,	// (0x000263df) list_single_graphic_pane_fp

0x66e3,	// (0x000263df) list_single_heading_pane_fp_ParamLimits

0x66e3,	// (0x000263df) list_single_heading_pane_fp

0x66e3,	// (0x000263df) list_single_pane_fp_ParamLimits

0x66e3,	// (0x000263df) list_single_pane_fp

0x66fa,	// (0x000263f6) list_single_pane_fp_g1_ParamLimits

0x66fa,	// (0x000263f6) list_single_pane_fp_g1

0xe3ae,	// (0x0002e0aa) list_single_pane_fp_g2_ParamLimits

0xe3ae,	// (0x0002e0aa) list_single_pane_fp_g2

0xf1bb,	// (0x0002eeb7) list_single_pane_fp_g3_ParamLimits

0xf1bb,	// (0x0002eeb7) list_single_pane_fp_g3

0x6706,	// (0x00026402) list_single_pane_fp_g4_ParamLimits

0x6706,	// (0x00026402) list_single_pane_fp_g4

0x0003,

0xfb80,	// (0x0002f87c) list_single_pane_fp_g_ParamLimits

0xfb80,	// (0x0002f87c) list_single_pane_fp_g

0xf1cf,	// (0x0002eecb) list_single_pane_fp_t1_ParamLimits

0xf1cf,	// (0x0002eecb) list_single_pane_fp_t1

0xf1e6,	// (0x0002eee2) list_single_graphic_pane_fp_g1_ParamLimits

0xf1e6,	// (0x0002eee2) list_single_graphic_pane_fp_g1

0x66fa,	// (0x000263f6) list_single_graphic_pane_fp_g2_ParamLimits

0x66fa,	// (0x000263f6) list_single_graphic_pane_fp_g2

0xe3ae,	// (0x0002e0aa) list_single_graphic_pane_fp_g3_ParamLimits

0xe3ae,	// (0x0002e0aa) list_single_graphic_pane_fp_g3

0xf1bb,	// (0x0002eeb7) list_single_graphic_pane_fp_g4_ParamLimits

0xf1bb,	// (0x0002eeb7) list_single_graphic_pane_fp_g4

0x6706,	// (0x00026402) list_single_graphic_pane_fp_g5_ParamLimits

0x6706,	// (0x00026402) list_single_graphic_pane_fp_g5

0x0004,

0xfb89,	// (0x0002f885) list_single_graphic_pane_fp_g_ParamLimits

0xfb89,	// (0x0002f885) list_single_graphic_pane_fp_g

0xf1f2,	// (0x0002eeee) list_single_graphic_pane_fp_t1_ParamLimits

0xf1f2,	// (0x0002eeee) list_single_graphic_pane_fp_t1

0xf1e6,	// (0x0002eee2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf1e6,	// (0x0002eee2) list_single_graphic_heading_pane_fp_g1

0x66fa,	// (0x000263f6) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x66fa,	// (0x000263f6) list_single_graphic_heading_pane_fp_g2

0xe3ae,	// (0x0002e0aa) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe3ae,	// (0x0002e0aa) list_single_graphic_heading_pane_fp_g3

0xf1bb,	// (0x0002eeb7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf1bb,	// (0x0002eeb7) list_single_graphic_heading_pane_fp_g4

0x6706,	// (0x00026402) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6706,	// (0x00026402) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0002f885) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002f885) list_single_graphic_heading_pane_fp_g

0xf208,	// (0x0002ef04) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf208,	// (0x0002ef04) list_single_graphic_heading_pane_fp_t1

0xf21e,	// (0x0002ef1a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf21e,	// (0x0002ef1a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x0002f890) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x0002f890) list_single_graphic_heading_pane_fp_t

0xf230,	// (0x0002ef2c) list_single_cale_day_pane_fp_g1_ParamLimits

0xf230,	// (0x0002ef2c) list_single_cale_day_pane_fp_g1

0x6712,	// (0x0002640e) list_single_cale_day_pane_fp_g2_ParamLimits

0x6712,	// (0x0002640e) list_single_cale_day_pane_fp_g2

0xf268,	// (0x0002ef64) list_single_cale_day_pane_fp_g3_ParamLimits

0xf268,	// (0x0002ef64) list_single_cale_day_pane_fp_g3

0xf290,	// (0x0002ef8c) list_single_cale_day_pane_fp_g4_ParamLimits

0xf290,	// (0x0002ef8c) list_single_cale_day_pane_fp_g4

0xf2b4,	// (0x0002efb0) list_single_cale_day_pane_fp_g5_ParamLimits

0xf2b4,	// (0x0002efb0) list_single_cale_day_pane_fp_g5

0x0004,

0xfb99,	// (0x0002f895) list_single_cale_day_pane_fp_g_ParamLimits

0xfb99,	// (0x0002f895) list_single_cale_day_pane_fp_g

0xf2d8,	// (0x0002efd4) list_single_cale_day_pane_fp_t1_ParamLimits

0xf2d8,	// (0x0002efd4) list_single_cale_day_pane_fp_t1

0xf2fe,	// (0x0002effa) list_single_cale_day_pane_fp_t2_ParamLimits

0xf2fe,	// (0x0002effa) list_single_cale_day_pane_fp_t2

0xf317,	// (0x0002f013) list_single_cale_day_pane_fp_t3_ParamLimits

0xf317,	// (0x0002f013) list_single_cale_day_pane_fp_t3

0x0002,

0xfba4,	// (0x0002f8a0) list_single_cale_day_pane_fp_t_ParamLimits

0xfba4,	// (0x0002f8a0) list_single_cale_day_pane_fp_t

0x66fa,	// (0x000263f6) list_empty_pane_fp_g1_ParamLimits

0x66fa,	// (0x000263f6) list_empty_pane_fp_g1

0xf330,	// (0x0002f02c) list_empty_pane_fp_t1

0xf33e,	// (0x0002f03a) list_empty_pane_fp_t2

0x0001,

0xfbab,	// (0x0002f8a7) list_empty_pane_fp_t

0x66fa,	// (0x000263f6) list_single_heading_pane_fp_g1_ParamLimits

0x66fa,	// (0x000263f6) list_single_heading_pane_fp_g1

0xe3ae,	// (0x0002e0aa) list_single_heading_pane_fp_g2_ParamLimits

0xe3ae,	// (0x0002e0aa) list_single_heading_pane_fp_g2

0xf1bb,	// (0x0002eeb7) list_single_heading_pane_fp_g3_ParamLimits

0xf1bb,	// (0x0002eeb7) list_single_heading_pane_fp_g3

0x0002,

0xfbb0,	// (0x0002f8ac) list_single_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0002f8ac) list_single_heading_pane_fp_g

0xf34c,	// (0x0002f048) list_single_heading_pane_fp_t1_ParamLimits

0xf34c,	// (0x0002f048) list_single_heading_pane_fp_t1

0xf35e,	// (0x0002f05a) list_single_heading_pane_fp_t2_ParamLimits

0xf35e,	// (0x0002f05a) list_single_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x0002f8b3) list_single_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x0002f8b3) list_single_heading_pane_fp_t

0x26dc,	// (0x000223d8) aid_size_cell_fast

0x1e77,	// (0x00021b73) soft_indicator_pane_cp1_t1

0x2719,	// (0x00022415) cell_app_pane_cp2_ParamLimits

0x2719,	// (0x00022415) cell_app_pane_cp2

0xbf5f,	// (0x0002bc5b) fep_hwr_candidate_drop_down_list_pane

0xc137,	// (0x0002be33) fep_hwr_candidate_pane_g3_ParamLimits

0xc137,	// (0x0002be33) fep_hwr_candidate_pane_g3

0x9a78,	// (0x00029774) fep_hwr_candidate_pane_g4_ParamLimits

0x9a78,	// (0x00029774) fep_hwr_candidate_pane_g4

0x0002,

0xfb26,	// (0x0002f822) fep_hwr_candidate_pane_g_ParamLimits

0xfb26,	// (0x0002f822) fep_hwr_candidate_pane_g

0x61f9,	// (0x00025ef5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x61f9,	// (0x00025ef5) fep_vkb_candidate_drop_down_list_pane

0x6612,	// (0x0002630e) fep_vkb_candidate_pane_g3

0x661a,	// (0x00026316) fep_vkb_candidate_pane_g4

0x0002,

0xfb53,	// (0x0002f84f) fep_vkb_candidate_pane_g

0xc1a2,	// (0x0002be9e) cell_hwr_candidate_pane_g1_ParamLimits

0xc1b0,	// (0x0002beac) cell_hwr_candidate_pane_g3_ParamLimits

0xc1b0,	// (0x0002beac) cell_hwr_candidate_pane_g3

0x9f89,	// (0x00029c85) cell_hwr_candidate_pane_g4_ParamLimits

0x9f89,	// (0x00029c85) cell_hwr_candidate_pane_g4

0x0002,

0xfb72,	// (0x0002f86e) cell_hwr_candidate_pane_g_ParamLimits

0xfb72,	// (0x0002f86e) cell_hwr_candidate_pane_g

0x6631,	// (0x0002632d) cell_vkb_candidate_pane_g3_ParamLimits

0x6631,	// (0x0002632d) cell_vkb_candidate_pane_g3

0x664c,	// (0x00026348) cell_vkb_candidate_pane_g4_ParamLimits

0x664c,	// (0x00026348) cell_vkb_candidate_pane_g4

0x671e,	// (0x0002641a) cell_app_pane_cp2_g1_ParamLimits

0x671e,	// (0x0002641a) cell_app_pane_cp2_g1

0x673c,	// (0x00026438) cell_app_pane_cp2_g2_ParamLimits

0x673c,	// (0x00026438) cell_app_pane_cp2_g2

0x0001,

0xfbbc,	// (0x0002f8b8) cell_app_pane_cp2_g_ParamLimits

0xfbbc,	// (0x0002f8b8) cell_app_pane_cp2_g

0x6748,	// (0x00026444) cell_app_pane_cp2_t1_ParamLimits

0x6748,	// (0x00026444) cell_app_pane_cp2_t1

0x24d1,	// (0x000221cd) grid_highlight_pane_cp1_ParamLimits

0x24d1,	// (0x000221cd) grid_highlight_pane_cp1

0xc1ef,	// (0x0002beeb) cell_hwr_candidate_pane_cp1_ParamLimits

0xc1ef,	// (0x0002beeb) cell_hwr_candidate_pane_cp1

0xc1a2,	// (0x0002be9e) fep_hwr_candidate_drop_down_list_pane_g1

0xc20e,	// (0x0002bf0a) fep_hwr_candidate_drop_down_list_pane_g2

0xc21b,	// (0x0002bf17) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0002f8bd) fep_hwr_candidate_drop_down_list_pane_g

0xc228,	// (0x0002bf24) fep_hwr_candidate_drop_down_list_scroll_pane

0xc231,	// (0x0002bf2d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc231,	// (0x0002bf2d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xc23e,	// (0x0002bf3a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc23e,	// (0x0002bf3a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xc24b,	// (0x0002bf47) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc24b,	// (0x0002bf47) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc258,	// (0x0002bf54) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc258,	// (0x0002bf54) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc273,	// (0x0002bf6f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc273,	// (0x0002bf6f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xc28e,	// (0x0002bf8a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc28e,	// (0x0002bf8a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xc2a9,	// (0x0002bfa5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc2a9,	// (0x0002bfa5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xc2c4,	// (0x0002bfc0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc2c4,	// (0x0002bfc0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x0002f8c4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x0002f8c4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6774,	// (0x00026470) cell_vkb_candidate_pane_cp1_ParamLimits

0x6774,	// (0x00026470) cell_vkb_candidate_pane_cp1

0x6312,	// (0x0002600e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6312,	// (0x0002600e) fep_vkb_candidate_drop_down_list_pane_g1

0x675a,	// (0x00026456) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x675a,	// (0x00026456) fep_vkb_candidate_drop_down_list_pane_g2

0x6767,	// (0x00026463) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6767,	// (0x00026463) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd9,	// (0x0002f8d5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd9,	// (0x0002f8d5) fep_vkb_candidate_drop_down_list_pane_g

0x67d6,	// (0x000264d2) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x67d6,	// (0x000264d2) fep_vkb_candidate_drop_down_list_scroll_pane

0x67e3,	// (0x000264df) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x67e3,	// (0x000264df) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x67f0,	// (0x000264ec) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x67f0,	// (0x000264ec) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x67fc,	// (0x000264f8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x67fc,	// (0x000264f8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6794,	// (0x00026490) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6794,	// (0x00026490) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x67b5,	// (0x000264b1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x67b5,	// (0x000264b1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6823,	// (0x0002651f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6823,	// (0x0002651f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6844,	// (0x00026540) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6844,	// (0x00026540) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6808,	// (0x00026504) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6808,	// (0x00026504) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe0,	// (0x0002f8dc) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe0,	// (0x0002f8dc) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x1ba8,	// (0x000218a4) title_pane_g1_ParamLimits

0x1bb5,	// (0x000218b1) title_pane_g2_ParamLimits

0xf554,	// (0x0002f250) title_pane_g_ParamLimits

0x2b2a,	// (0x00022826) aid_call2_pane

0x2b22,	// (0x0002281e) aid_call_pane

0x2b32,	// (0x0002282e) popup_clock_analogue_window_g1

0x2b32,	// (0x0002282e) popup_clock_analogue_window_g2

0xb096,	// (0x0002ad92) popup_clock_analogue_window_g3

0xb09f,	// (0x0002ad9b) popup_clock_analogue_window_g4

0x1b94,	// (0x00021890) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0002f3f5) popup_clock_analogue_window_g

0xb0a7,	// (0x0002ada3) popup_clock_analogue_window_t1

0xb0b5,	// (0x0002adb1) clock_digital_number_pane_ParamLimits

0xb0b5,	// (0x0002adb1) clock_digital_number_pane

0xb0c1,	// (0x0002adbd) clock_digital_number_pane_cp02_ParamLimits

0xb0c1,	// (0x0002adbd) clock_digital_number_pane_cp02

0xb0cd,	// (0x0002adc9) clock_digital_number_pane_cp03_ParamLimits

0xb0cd,	// (0x0002adc9) clock_digital_number_pane_cp03

0xb0d9,	// (0x0002add5) clock_digital_number_pane_cp04_ParamLimits

0xb0d9,	// (0x0002add5) clock_digital_number_pane_cp04

0xb0e5,	// (0x0002ade1) clock_digital_separator_pane_ParamLimits

0xb0e5,	// (0x0002ade1) clock_digital_separator_pane

0xb0f1,	// (0x0002aded) popup_clock_digital_window_t1_ParamLimits

0xb0f1,	// (0x0002aded) popup_clock_digital_window_t1

0x1b94,	// (0x00021890) clock_digital_number_pane_g1

0x1b94,	// (0x00021890) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0002f400) clock_digital_number_pane_g

0x1b94,	// (0x00021890) clock_digital_separator_pane_g1

0x1b94,	// (0x00021890) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0002f400) clock_digital_separator_pane_g

0x3499,	// (0x00023195) aid_fill_nsta_ParamLimits

0x35df,	// (0x000232db) indicator_nsta_pane_ParamLimits

0x3752,	// (0x0002344e) popup_clock_analogue_window

0x3752,	// (0x0002344e) popup_clock_digital_window

0x1c7e,	// (0x0002197a) grid_indicator_nsta_pane_ParamLimits

0x5a3d,	// (0x00025739) clock_nsta_pane_t2

0x0001,

0xfaa6,	// (0x0002f7a2) clock_nsta_pane_t

0xb05a,	// (0x0002ad56) aid_size_max_handle

0xb064,	// (0x0002ad60) aid_size_min_handle

0x313b,	// (0x00022e37) editor_scroll_pane

0x6865,	// (0x00026561) ex_editor_pane

0x264b,	// (0x00022347) scroll_pane_cp13

0x2470,	// (0x0002216c) scroll_pane_cp14

0x2b61,	// (0x0002285d) scroll_pane_cp36

0x2b8b,	// (0x00022887) list_single_graphic_hl_pane_cp2_ParamLimits

0x2b8b,	// (0x00022887) list_single_graphic_hl_pane_cp2

0x4fc1,	// (0x00024cbd) list_single_graphic_hl_pane_ParamLimits

0x4fc1,	// (0x00024cbd) list_single_graphic_hl_pane

0xf374,	// (0x0002f070) aid_size_min_hl_cp1

0x686d,	// (0x00026569) list_highlight_pane_cp34_ParamLimits

0x686d,	// (0x00026569) list_highlight_pane_cp34

0x687e,	// (0x0002657a) list_single_graphic_hl_pane_g1_ParamLimits

0x687e,	// (0x0002657a) list_single_graphic_hl_pane_g1

0xf37d,	// (0x0002f079) list_single_graphic_hl_pane_g2_ParamLimits

0xf37d,	// (0x0002f079) list_single_graphic_hl_pane_g2

0xf37d,	// (0x0002f079) list_single_graphic_hl_pane_g3_ParamLimits

0xf37d,	// (0x0002f079) list_single_graphic_hl_pane_g3

0xf389,	// (0x0002f085) list_single_graphic_hl_pane_g4_ParamLimits

0xf389,	// (0x0002f085) list_single_graphic_hl_pane_g4

0xf395,	// (0x0002f091) list_single_graphic_hl_pane_g5_ParamLimits

0xf395,	// (0x0002f091) list_single_graphic_hl_pane_g5

0x0004,

0xfbf1,	// (0x0002f8ed) list_single_graphic_hl_pane_g_ParamLimits

0xfbf1,	// (0x0002f8ed) list_single_graphic_hl_pane_g

0xf3a9,	// (0x0002f0a5) list_single_graphic_hl_pane_t1_ParamLimits

0xf3a9,	// (0x0002f0a5) list_single_graphic_hl_pane_t1

0x688b,	// (0x00026587) aid_size_min_hl_cp2

0x6894,	// (0x00026590) list_highlight_pane_cp34_cp2_ParamLimits

0x6894,	// (0x00026590) list_highlight_pane_cp34_cp2

0x687e,	// (0x0002657a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x687e,	// (0x0002657a) list_single_graphic_hl_pane_g1_cp2

0x68a1,	// (0x0002659d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x68a1,	// (0x0002659d) list_single_graphic_hl_pane_g2_cp2

0x68ad,	// (0x000265a9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x68ad,	// (0x000265a9) list_single_graphic_hl_pane_g3_cp2

0x3072,	// (0x00022d6e) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3072,	// (0x00022d6e) list_single_graphic_hl_pane_g4_cp2

0x68bb,	// (0x000265b7) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x68bb,	// (0x000265b7) list_single_graphic_hl_pane_g5_cp2

0xb3a1,	// (0x0002b09d) control_pane_g4_ParamLimits

0xb3a1,	// (0x0002b09d) control_pane_g4

0x3477,	// (0x00023173) bg_popup_sub_pane_cp10_ParamLimits

0x60a1,	// (0x00025d9d) list_choice_list_pane_ParamLimits

0x60b0,	// (0x00025dac) scroll_pane_cp23

0x1f07,	// (0x00021c03) bg_popup_preview_window_pane_cp02_ParamLimits

0x669d,	// (0x00026399) list_preview_fixed_pane_ParamLimits

0x66b3,	// (0x000263af) list_preview_fixed_pane_cp_ParamLimits

0x66b3,	// (0x000263af) list_preview_fixed_pane_cp

0x66bf,	// (0x000263bb) popup_preview_fixed_window_g1_ParamLimits

0x66bf,	// (0x000263bb) popup_preview_fixed_window_g1

0x66cb,	// (0x000263c7) popup_preview_fixed_window_g2_ParamLimits

0x66cb,	// (0x000263c7) popup_preview_fixed_window_g2

0x0002,

0xfb79,	// (0x0002f875) popup_preview_fixed_window_g_ParamLimits

0xfb79,	// (0x0002f875) popup_preview_fixed_window_g

0xafce,	// (0x0002acca) aid_navi_side_left_pane_ParamLimits

0xafe3,	// (0x0002acdf) aid_navi_side_right_pane_ParamLimits

0xaffb,	// (0x0002acf7) navi_icon_pane_stacon_ParamLimits

0xb00f,	// (0x0002ad0b) navi_navi_pane_stacon_ParamLimits

0xaffb,	// (0x0002acf7) navi_text_pane_stacon_ParamLimits

0xac06,	// (0x0002a902) main_text_info_pane

0x68e5,	// (0x000265e1) listscroll_text_info_pane

0x68ed,	// (0x000265e9) list_text_info_pane_ParamLimits

0x68ed,	// (0x000265e9) list_text_info_pane

0x68fc,	// (0x000265f8) scroll_pane_cp24_ParamLimits

0x68fc,	// (0x000265f8) scroll_pane_cp24

0x691a,	// (0x00026616) list_text_info_pane_t1_ParamLimits

0x691a,	// (0x00026616) list_text_info_pane_t1

0xb4ff,	// (0x0002b1fb) popup_fast_swap2_window_ParamLimits

0xb4ff,	// (0x0002b1fb) popup_fast_swap2_window

0x6953,	// (0x0002664f) aid_size_cell_fast2

0x1b8a,	// (0x00021886) bg_popup_window_pane_cp17

0x3e79,	// (0x00023b75) heading_pane_cp2

0x2147,	// (0x00021e43) listscroll_fast2_pane

0x695d,	// (0x00026659) grid_fast2_pane

0x6967,	// (0x00026663) listscroll_fast2_pane_g1

0x696f,	// (0x0002666b) listscroll_fast2_pane_g2

0x0001,

0xfbfc,	// (0x0002f8f8) listscroll_fast2_pane_g

0x264b,	// (0x00022347) scroll_pane_cp26

0x6979,	// (0x00026675) cell_fast2_pane_ParamLimits

0x6979,	// (0x00026675) cell_fast2_pane

0x698e,	// (0x0002668a) cell_fast2_pane_g1

0x6997,	// (0x00026693) cell_fast2_pane_g2

0x69a0,	// (0x0002669c) cell_fast2_pane_g3

0x0002,

0xfc01,	// (0x0002f8fd) cell_fast2_pane_g

0x222d,	// (0x00021f29) grid_highlight_pane_cp9

0xb4c9,	// (0x0002b1c5) main_eswt_pane_ParamLimits

0xb4c9,	// (0x0002b1c5) main_eswt_pane

0x6911,	// (0x0002660d) list_single_text_info_pane

0x69a8,	// (0x000266a4) eswt_ctrl_button_pane

0x69a8,	// (0x000266a4) eswt_ctrl_canvas_pane

0x69b0,	// (0x000266ac) eswt_ctrl_combo_pane

0x69a8,	// (0x000266a4) eswt_ctrl_default_pane

0x69a8,	// (0x000266a4) eswt_ctrl_label_pane

0x69b8,	// (0x000266b4) eswt_ctrl_wait_pane

0x69c0,	// (0x000266bc) eswt_shell_pane

0x1b8a,	// (0x00021886) listscroll_eswt_app_pane

0x69e0,	// (0x000266dc) popup_eswt_tasktip_window_ParamLimits

0x69e0,	// (0x000266dc) popup_eswt_tasktip_window

0x3a69,	// (0x00023765) bg_popup_window_pane_cp18

0x69f1,	// (0x000266ed) eswt_control_pane_g1_ParamLimits

0x69f1,	// (0x000266ed) eswt_control_pane_g1

0x69fe,	// (0x000266fa) eswt_control_pane_g2_ParamLimits

0x69fe,	// (0x000266fa) eswt_control_pane_g2

0x6a0b,	// (0x00026707) eswt_control_pane_g3_ParamLimits

0x6a0b,	// (0x00026707) eswt_control_pane_g3

0x6a18,	// (0x00026714) eswt_control_pane_g4_ParamLimits

0x6a18,	// (0x00026714) eswt_control_pane_g4

0x0003,

0xfc08,	// (0x0002f904) eswt_control_pane_g_ParamLimits

0xfc08,	// (0x0002f904) eswt_control_pane_g

0x24d1,	// (0x000221cd) bg_button_pane_ParamLimits

0x24d1,	// (0x000221cd) bg_button_pane

0x2242,	// (0x00021f3e) common_borders_pane_copy2_ParamLimits

0x2242,	// (0x00021f3e) common_borders_pane_copy2

0x6a25,	// (0x00026721) control_button_pane_g1_ParamLimits

0x6a25,	// (0x00026721) control_button_pane_g1

0x6a31,	// (0x0002672d) control_button_pane_g2_ParamLimits

0x6a31,	// (0x0002672d) control_button_pane_g2

0x6a3d,	// (0x00026739) control_button_pane_g3_ParamLimits

0x6a3d,	// (0x00026739) control_button_pane_g3

0x0002,

0xfc11,	// (0x0002f90d) control_button_pane_g_ParamLimits

0xfc11,	// (0x0002f90d) control_button_pane_g

0x6a51,	// (0x0002674d) control_button_pane_t1

0x6a5f,	// (0x0002675b) control_button_pane_t2

0x0001,

0xfc18,	// (0x0002f914) control_button_pane_t

0x3979,	// (0x00023675) bg_button_pane_g1

0x3981,	// (0x0002367d) bg_button_pane_g2

0x3989,	// (0x00023685) bg_button_pane_g3

0x3991,	// (0x0002368d) bg_button_pane_g4

0x3999,	// (0x00023695) bg_button_pane_g5

0x39a1,	// (0x0002369d) bg_button_pane_g6

0x39a9,	// (0x000236a5) bg_button_pane_g7

0x39b1,	// (0x000236ad) bg_button_pane_g8

0x39b9,	// (0x000236b5) bg_button_pane_g9

0x0008,

0xf862,	// (0x0002f55e) bg_button_pane_g

0x605c,	// (0x00025d58) common_borders_pane_ParamLimits

0x605c,	// (0x00025d58) common_borders_pane

0x69f1,	// (0x000266ed) eswt_control_pane_g1_copy1_ParamLimits

0x69f1,	// (0x000266ed) eswt_control_pane_g1_copy1

0x69fe,	// (0x000266fa) eswt_control_pane_g2_copy1_ParamLimits

0x69fe,	// (0x000266fa) eswt_control_pane_g2_copy1

0x6a0b,	// (0x00026707) eswt_control_pane_g3_copy1_ParamLimits

0x6a0b,	// (0x00026707) eswt_control_pane_g3_copy1

0x6a18,	// (0x00026714) eswt_control_pane_g4_copy1_ParamLimits

0x6a18,	// (0x00026714) eswt_control_pane_g4_copy1

0x6097,	// (0x00025d93) bg_eswt_ctrl_canvas_pane_g1

0x605c,	// (0x00025d58) common_borders_pane_cp2_ParamLimits

0x605c,	// (0x00025d58) common_borders_pane_cp2

0x605c,	// (0x00025d58) common_borders_pane_cp3_ParamLimits

0x605c,	// (0x00025d58) common_borders_pane_cp3

0x6a6d,	// (0x00026769) separator_horizontal_pane

0x6a75,	// (0x00026771) separator_vertical_pane

0x69f1,	// (0x000266ed) eswt_control_pane_g1_copy2_ParamLimits

0x69f1,	// (0x000266ed) eswt_control_pane_g1_copy2

0x69fe,	// (0x000266fa) eswt_control_pane_g2_copy2_ParamLimits

0x69fe,	// (0x000266fa) eswt_control_pane_g2_copy2

0x6a0b,	// (0x00026707) eswt_control_pane_g3_copy2_ParamLimits

0x6a0b,	// (0x00026707) eswt_control_pane_g3_copy2

0x6a18,	// (0x00026714) eswt_control_pane_g4_copy2_ParamLimits

0x6a18,	// (0x00026714) eswt_control_pane_g4_copy2

0x1b8a,	// (0x00021886) common_borders_pane_cp4

0x6a7e,	// (0x0002677a) separator_horizontal_pane_g1

0x6a87,	// (0x00026783) separator_horizontal_pane_g2

0x6a90,	// (0x0002678c) separator_horizontal_pane_g3

0x0002,

0xfc1d,	// (0x0002f919) separator_horizontal_pane_g

0x69f1,	// (0x000266ed) eswt_control_pane_g1_copy3_ParamLimits

0x69f1,	// (0x000266ed) eswt_control_pane_g1_copy3

0x69fe,	// (0x000266fa) eswt_control_pane_g2_copy3_ParamLimits

0x69fe,	// (0x000266fa) eswt_control_pane_g2_copy3

0x6a0b,	// (0x00026707) eswt_control_pane_g3_copy3_ParamLimits

0x6a0b,	// (0x00026707) eswt_control_pane_g3_copy3

0x6a18,	// (0x00026714) eswt_control_pane_g4_copy3_ParamLimits

0x6a18,	// (0x00026714) eswt_control_pane_g4_copy3

0x1b8a,	// (0x00021886) common_borders_pane_cp5

0x6a99,	// (0x00026795) separator_vertical_pane_g1

0x6aa2,	// (0x0002679e) separator_vertical_pane_g2

0x6aab,	// (0x000267a7) separator_vertical_pane_g3

0x0002,

0xfc24,	// (0x0002f920) separator_vertical_pane_g

0x69f1,	// (0x000266ed) eswt_control_pane_g1_copy4_ParamLimits

0x69f1,	// (0x000266ed) eswt_control_pane_g1_copy4

0x69fe,	// (0x000266fa) eswt_control_pane_g2_copy4_ParamLimits

0x69fe,	// (0x000266fa) eswt_control_pane_g2_copy4

0x6a0b,	// (0x00026707) eswt_control_pane_g3_copy4_ParamLimits

0x6a0b,	// (0x00026707) eswt_control_pane_g3_copy4

0x6a18,	// (0x00026714) eswt_control_pane_g4_copy4_ParamLimits

0x6a18,	// (0x00026714) eswt_control_pane_g4_copy4

0x6ab4,	// (0x000267b0) eswt_ctrl_combo_button_pane

0x6abc,	// (0x000267b8) eswt_ctrl_input_pane

0x6ac4,	// (0x000267c0) popup_choice_list_window_cp70

0x6acc,	// (0x000267c8) eswt_ctrl_input_pane_t1

0x1b8a,	// (0x00021886) input_focus_pane_cp70

0x605c,	// (0x00025d58) bg_button_pane_cp70_ParamLimits

0x605c,	// (0x00025d58) bg_button_pane_cp70

0x6ada,	// (0x000267d6) eswt_ctrl_combo_button_pane_g1

0x6ae2,	// (0x000267de) wait_bar_pane_cp70

0x3a69,	// (0x00023765) bg_popup_window_pane_cp70_ParamLimits

0x3a69,	// (0x00023765) bg_popup_window_pane_cp70

0x6aea,	// (0x000267e6) popup_eswt_tasktip_window_t1

0x6b00,	// (0x000267fc) wait_bar_pane_cp71_ParamLimits

0x6b00,	// (0x000267fc) wait_bar_pane_cp71

0x6b0c,	// (0x00026808) grid_eswt_app_pane

0x2971,	// (0x0002266d) scroll_pane_cp70

0x6b15,	// (0x00026811) cell_eswt_app_pane_ParamLimits

0x6b15,	// (0x00026811) cell_eswt_app_pane

0x6b49,	// (0x00026845) cell_eswt_app_pane_g1_ParamLimits

0x6b49,	// (0x00026845) cell_eswt_app_pane_g1

0x6b78,	// (0x00026874) cell_eswt_app_pane_g2_ParamLimits

0x6b78,	// (0x00026874) cell_eswt_app_pane_g2

0x0001,

0xfc2b,	// (0x0002f927) cell_eswt_app_pane_g_ParamLimits

0xfc2b,	// (0x0002f927) cell_eswt_app_pane_g

0x6ba1,	// (0x0002689d) cell_eswt_app_pane_t1_ParamLimits

0x6ba1,	// (0x0002689d) cell_eswt_app_pane_t1

0x6bd3,	// (0x000268cf) grid_highlight_pane_cp70_ParamLimits

0x6bd3,	// (0x000268cf) grid_highlight_pane_cp70

0x300e,	// (0x00022d0a) set_content_pane_g1

0x33d7,	// (0x000230d3) status_small_volume_pane

0xc2df,	// (0x0002bfdb) status_small_volume_pane_g1

0xc2e7,	// (0x0002bfe3) volume_small2_pane

0xc2f0,	// (0x0002bfec) volume_small2_pane_g1

0xc2f9,	// (0x0002bff5) volume_small2_pane_g2

0xc302,	// (0x0002bffe) volume_small2_pane_g3

0xc30b,	// (0x0002c007) volume_small2_pane_g4

0xc314,	// (0x0002c010) volume_small2_pane_g5

0xc31d,	// (0x0002c019) volume_small2_pane_g6

0xc326,	// (0x0002c022) volume_small2_pane_g7

0xc32f,	// (0x0002c02b) volume_small2_pane_g8

0xc338,	// (0x0002c034) volume_small2_pane_g9

0xc341,	// (0x0002c03d) volume_small2_pane_g10

0x0009,

0xfc30,	// (0x0002f92c) volume_small2_pane_g

0x645a,	// (0x00026156) fep_vkb_top_text_pane_g1_ParamLimits

0x6475,	// (0x00026171) fep_vkb_top_text_pane_t1_ParamLimits

0x66d7,	// (0x000263d3) popup_preview_fixed_window_g3_ParamLimits

0x66d7,	// (0x000263d3) popup_preview_fixed_window_g3

0xb99e,	// (0x0002b69a) popup_toolbar_trans_pane

0x4dd9,	// (0x00024ad5) aid_height_set_list_ParamLimits

0x4dea,	// (0x00024ae6) aid_size_parent_ParamLimits

0x3477,	// (0x00023173) list_highlight_pane_cp2_ParamLimits

0x300e,	// (0x00022d0a) set_content_pane_g1_ParamLimits

0xef0b,	// (0x0002ec07) list_single_image_pane_ParamLimits

0xef0b,	// (0x0002ec07) list_single_image_pane

0x6bdf,	// (0x000268db) aid_size_cell_image_ParamLimits

0x6bdf,	// (0x000268db) aid_size_cell_image

0x6bec,	// (0x000268e8) grid_single_image_pane_ParamLimits

0x6bec,	// (0x000268e8) grid_single_image_pane

0x24eb,	// (0x000221e7) list_single_image_pane_g1_ParamLimits

0x24eb,	// (0x000221e7) list_single_image_pane_g1

0x24f7,	// (0x000221f3) list_single_image_pane_g2_ParamLimits

0x24f7,	// (0x000221f3) list_single_image_pane_g2

0x0001,

0xfc45,	// (0x0002f941) list_single_image_pane_g_ParamLimits

0xfc45,	// (0x0002f941) list_single_image_pane_g

0x6bf8,	// (0x000268f4) list_single_image_pane_t1_ParamLimits

0x6bf8,	// (0x000268f4) list_single_image_pane_t1

0x6c0e,	// (0x0002690a) cell_image_list_pane_ParamLimits

0x6c0e,	// (0x0002690a) cell_image_list_pane

0x6c22,	// (0x0002691e) cell_image_list_pane_g1

0x6c2b,	// (0x00026927) cell_image_list_pane_g2

0x0001,

0xfc4a,	// (0x0002f946) cell_image_list_pane_g

0x6c34,	// (0x00026930) aid_size_cell_tb_trans_pane

0x24d1,	// (0x000221cd) bg_tb_trans_pane

0x6c46,	// (0x00026942) grid_tb_trans_pane

0x3979,	// (0x00023675) bg_tb_trans_pane_g1

0x3981,	// (0x0002367d) bg_tb_trans_pane_g2

0x3989,	// (0x00023685) bg_tb_trans_pane_g3

0x3991,	// (0x0002368d) bg_tb_trans_pane_g4

0x3999,	// (0x00023695) bg_tb_trans_pane_g5

0x39b1,	// (0x000236ad) bg_tb_trans_pane_g6

0x39b9,	// (0x000236b5) bg_tb_trans_pane_g7

0x39a1,	// (0x0002369d) bg_tb_trans_pane_g8

0x39a9,	// (0x000236a5) bg_tb_trans_pane_g9

0x0008,

0xfc4f,	// (0x0002f94b) bg_tb_trans_pane_g

0x6c5a,	// (0x00026956) cell_toolbar_trans_pane_ParamLimits

0x6c5a,	// (0x00026956) cell_toolbar_trans_pane

0x6097,	// (0x00025d93) cell_toolbar_trans_pane_g1

0x5c2b,	// (0x00025927) list_form2_midp_pane_t1

0x5c39,	// (0x00025935) list_form2_midp_pane_t2

0x0001,

0xfaec,	// (0x0002f7e8) list_form2_midp_pane_t

0x5c47,	// (0x00025943) scroll_pane_cp51_ParamLimits

0x5e02,	// (0x00025afe) form2_midp_wait_pane_g1

0x5e0b,	// (0x00025b07) form2_midp_wait_pane_g2

0x5e14,	// (0x00025b10) form2_midp_wait_pane_g3

0x0002,

0xfb01,	// (0x0002f7fd) form2_midp_wait_pane_g

0x1c7e,	// (0x0002197a) list_highlight_pane_cp21_ParamLimits

0x5e63,	// (0x00025b5f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5e72,	// (0x00025b6e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xee97,	// (0x0002eb93) list_single_2graphic_im_pane_ParamLimits

0xee97,	// (0x0002eb93) list_single_2graphic_im_pane

0x6c80,	// (0x0002697c) list_single_2graphic_im_pane_g1_ParamLimits

0x6c80,	// (0x0002697c) list_single_2graphic_im_pane_g1

0x6c91,	// (0x0002698d) list_single_2graphic_im_pane_g2_ParamLimits

0x6c91,	// (0x0002698d) list_single_2graphic_im_pane_g2

0x6c9d,	// (0x00026999) list_single_2graphic_im_pane_g3_ParamLimits

0x6c9d,	// (0x00026999) list_single_2graphic_im_pane_g3

0x0003,

0xfc62,	// (0x0002f95e) list_single_2graphic_im_pane_g_ParamLimits

0xfc62,	// (0x0002f95e) list_single_2graphic_im_pane_g

0x6cbd,	// (0x000269b9) list_single_2graphic_im_pane_t1_ParamLimits

0x6cbd,	// (0x000269b9) list_single_2graphic_im_pane_t1

0x66e3,	// (0x000263df) list_single_graphic_2heading_pane_fp_ParamLimits

0x66e3,	// (0x000263df) list_single_graphic_2heading_pane_fp

0xf1e6,	// (0x0002eee2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf1e6,	// (0x0002eee2) list_single_graphic_2heading_pane_fp_g1

0x66fa,	// (0x000263f6) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x66fa,	// (0x000263f6) list_single_graphic_2heading_pane_fp_g2

0xe3ae,	// (0x0002e0aa) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe3ae,	// (0x0002e0aa) list_single_graphic_2heading_pane_fp_g3

0xf1bb,	// (0x0002eeb7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf1bb,	// (0x0002eeb7) list_single_graphic_2heading_pane_fp_g4

0x6706,	// (0x00026402) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6706,	// (0x00026402) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0002f885) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002f885) list_single_graphic_2heading_pane_fp_g

0xf3bf,	// (0x0002f0bb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf3bf,	// (0x0002f0bb) list_single_graphic_2heading_pane_fp_t1

0xf21e,	// (0x0002ef1a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf21e,	// (0x0002ef1a) list_single_graphic_2heading_pane_fp_t2

0xf3d5,	// (0x0002f0d1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf3d5,	// (0x0002f0d1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6b,	// (0x0002f967) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6b,	// (0x0002f967) list_single_graphic_2heading_pane_fp_t

0x6119,	// (0x00025e15) fep_hwr_write_pane_g5_ParamLimits

0x6119,	// (0x00025e15) fep_hwr_write_pane_g5

0x6125,	// (0x00025e21) fep_hwr_write_pane_g6_ParamLimits

0x6125,	// (0x00025e21) fep_hwr_write_pane_g6

0x69c0,	// (0x000266bc) eswt_shell_pane_ParamLimits

0x3a69,	// (0x00023765) bg_popup_window_pane_cp18_ParamLimits

0x4d38,	// (0x00024a34) heading_pane_cp70

0x6aea,	// (0x000267e6) popup_eswt_tasktip_window_t1_ParamLimits

0x34ee,	// (0x000231ea) aid_touch_tab_arrow_left

0x34fd,	// (0x000231f9) aid_touch_tab_arrow_right

0x1bc6,	// (0x000218c2) title_pane_g3_ParamLimits

0x1bc6,	// (0x000218c2) title_pane_g3

0x2490,	// (0x0002218c) set_value_pane_g1

0xb99e,	// (0x0002b69a) popup_toolbar_trans_pane_ParamLimits

0x6c34,	// (0x00026930) aid_size_cell_tb_trans_pane_ParamLimits

0x24d1,	// (0x000221cd) bg_tb_trans_pane_ParamLimits

0x6c46,	// (0x00026942) grid_tb_trans_pane_ParamLimits

0x1f07,	// (0x00021c03) cont_note_pane_ParamLimits

0x1f07,	// (0x00021c03) cont_note_pane

0x2242,	// (0x00021f3e) cont_snote2_single_text_pane_ParamLimits

0x2242,	// (0x00021f3e) cont_snote2_single_text_pane

0x2242,	// (0x00021f3e) cont_snote2_single_graphic_pane_ParamLimits

0x2242,	// (0x00021f3e) cont_snote2_single_graphic_pane

0x408f,	// (0x00023d8b) cont_note_wait_pane_ParamLimits

0x408f,	// (0x00023d8b) cont_note_wait_pane

0x408f,	// (0x00023d8b) cont_note_image_pane_ParamLimits

0x408f,	// (0x00023d8b) cont_note_image_pane

0x6cee,	// (0x000269ea) popup_note2_window_g1_ParamLimits

0x6cee,	// (0x000269ea) popup_note2_window_g1

0x6d1f,	// (0x00026a1b) popup_note2_window_t1_ParamLimits

0x6d1f,	// (0x00026a1b) popup_note2_window_t1

0x6d64,	// (0x00026a60) popup_note2_window_t2_ParamLimits

0x6d64,	// (0x00026a60) popup_note2_window_t2

0x6da9,	// (0x00026aa5) popup_note2_window_t3_ParamLimits

0x6da9,	// (0x00026aa5) popup_note2_window_t3

0x6dee,	// (0x00026aea) popup_note2_window_t4_ParamLimits

0x6dee,	// (0x00026aea) popup_note2_window_t4

0x1f7f,	// (0x00021c7b) popup_note2_window_t5_ParamLimits

0x1f7f,	// (0x00021c7b) popup_note2_window_t5

0x0004,

0xfc77,	// (0x0002f973) popup_note2_window_t_ParamLimits

0xfc77,	// (0x0002f973) popup_note2_window_t

0x6e1d,	// (0x00026b19) popup_note2_image_window_g1_ParamLimits

0x6e1d,	// (0x00026b19) popup_note2_image_window_g1

0x6e29,	// (0x00026b25) popup_note2_image_window_g2_ParamLimits

0x6e29,	// (0x00026b25) popup_note2_image_window_g2

0x0001,

0xfc82,	// (0x0002f97e) popup_note2_image_window_g_ParamLimits

0xfc82,	// (0x0002f97e) popup_note2_image_window_g

0x6e3b,	// (0x00026b37) popup_note2_image_window_t1_ParamLimits

0x6e3b,	// (0x00026b37) popup_note2_image_window_t1

0x6e53,	// (0x00026b4f) popup_note2_image_window_t2_ParamLimits

0x6e53,	// (0x00026b4f) popup_note2_image_window_t2

0x6e6b,	// (0x00026b67) popup_note2_image_window_t3_ParamLimits

0x6e6b,	// (0x00026b67) popup_note2_image_window_t3

0x0002,

0xfc87,	// (0x0002f983) popup_note2_image_window_t_ParamLimits

0xfc87,	// (0x0002f983) popup_note2_image_window_t

0x409d,	// (0x00023d99) popup_note2_wait_window_g1_ParamLimits

0x409d,	// (0x00023d99) popup_note2_wait_window_g1

0x40a9,	// (0x00023da5) popup_note2_wait_window_g2_ParamLimits

0x40a9,	// (0x00023da5) popup_note2_wait_window_g2

0x40b5,	// (0x00023db1) popup_note2_wait_window_g3_ParamLimits

0x40b5,	// (0x00023db1) popup_note2_wait_window_g3

0x0002,

0xf844,	// (0x0002f540) popup_note2_wait_window_g_ParamLimits

0xf844,	// (0x0002f540) popup_note2_wait_window_g

0x6e87,	// (0x00026b83) popup_note2_wait_window_t1_ParamLimits

0x6e87,	// (0x00026b83) popup_note2_wait_window_t1

0x6ea5,	// (0x00026ba1) popup_note2_wait_window_t2_ParamLimits

0x6ea5,	// (0x00026ba1) popup_note2_wait_window_t2

0x6ec3,	// (0x00026bbf) popup_note2_wait_window_t3_ParamLimits

0x6ec3,	// (0x00026bbf) popup_note2_wait_window_t3

0x6ed5,	// (0x00026bd1) popup_note2_wait_window_t4_ParamLimits

0x6ed5,	// (0x00026bd1) popup_note2_wait_window_t4

0x0003,

0xfc8e,	// (0x0002f98a) popup_note2_wait_window_t_ParamLimits

0xfc8e,	// (0x0002f98a) popup_note2_wait_window_t

0x6ee7,	// (0x00026be3) wait_bar2_pane_ParamLimits

0x6ee7,	// (0x00026be3) wait_bar2_pane

0x6eff,	// (0x00026bfb) popup_snote2_single_text_window_g1_ParamLimits

0x6eff,	// (0x00026bfb) popup_snote2_single_text_window_g1

0x6f27,	// (0x00026c23) popup_snote2_single_text_window_t1_ParamLimits

0x6f27,	// (0x00026c23) popup_snote2_single_text_window_t1

0x6f73,	// (0x00026c6f) popup_snote2_single_text_window_t2_ParamLimits

0x6f73,	// (0x00026c6f) popup_snote2_single_text_window_t2

0x6fbf,	// (0x00026cbb) popup_snote2_single_text_window_t3_ParamLimits

0x6fbf,	// (0x00026cbb) popup_snote2_single_text_window_t3

0x7000,	// (0x00026cfc) popup_snote2_single_text_window_t4_ParamLimits

0x7000,	// (0x00026cfc) popup_snote2_single_text_window_t4

0x7036,	// (0x00026d32) popup_snote2_single_text_window_t5_ParamLimits

0x7036,	// (0x00026d32) popup_snote2_single_text_window_t5

0x0004,

0xfc97,	// (0x0002f993) popup_snote2_single_text_window_t_ParamLimits

0xfc97,	// (0x0002f993) popup_snote2_single_text_window_t

0x7061,	// (0x00026d5d) popup_snote2_single_graphic_window_g1_ParamLimits

0x7061,	// (0x00026d5d) popup_snote2_single_graphic_window_g1

0x7089,	// (0x00026d85) popup_snote2_single_graphic_window_g2_ParamLimits

0x7089,	// (0x00026d85) popup_snote2_single_graphic_window_g2

0x0001,

0xfca2,	// (0x0002f99e) popup_snote2_single_graphic_window_g_ParamLimits

0xfca2,	// (0x0002f99e) popup_snote2_single_graphic_window_g

0x70b1,	// (0x00026dad) popup_snote2_single_graphic_window_t1_ParamLimits

0x70b1,	// (0x00026dad) popup_snote2_single_graphic_window_t1

0x70fd,	// (0x00026df9) popup_snote2_single_graphic_window_t2_ParamLimits

0x70fd,	// (0x00026df9) popup_snote2_single_graphic_window_t2

0x6fbf,	// (0x00026cbb) popup_snote2_single_graphic_window_t3_ParamLimits

0x6fbf,	// (0x00026cbb) popup_snote2_single_graphic_window_t3

0x7000,	// (0x00026cfc) popup_snote2_single_graphic_window_t4_ParamLimits

0x7000,	// (0x00026cfc) popup_snote2_single_graphic_window_t4

0x7036,	// (0x00026d32) popup_snote2_single_graphic_window_t5_ParamLimits

0x7036,	// (0x00026d32) popup_snote2_single_graphic_window_t5

0x0004,

0xfca7,	// (0x0002f9a3) popup_snote2_single_graphic_window_t_ParamLimits

0xfca7,	// (0x0002f9a3) popup_snote2_single_graphic_window_t

0x5b00,	// (0x000257fc) clock_nsta_pane_cp2_t1

0x5b00,	// (0x000257fc) clock_nsta_pane_cp2_t2

0x0001,

0xfac2,	// (0x0002f7be) clock_nsta_pane_cp2_t

0xeb82,	// (0x0002e87e) form_field_data_wide_pane_g1_ParamLimits

0x24eb,	// (0x000221e7) form_field_data_wide_pane_g2_ParamLimits

0x24eb,	// (0x000221e7) form_field_data_wide_pane_g2

0x24f7,	// (0x000221f3) form_field_data_wide_pane_g3_ParamLimits

0x24f7,	// (0x000221f3) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0002f378) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0002f378) form_field_data_wide_pane_g

0x59d9,	// (0x000256d5) grid_touch_3_pane_ParamLimits

0x59d9,	// (0x000256d5) grid_touch_3_pane

0x7149,	// (0x00026e45) cell_touch_3_pane_ParamLimits

0x7149,	// (0x00026e45) cell_touch_3_pane

0x6097,	// (0x00025d93) cell_touch_3_pane_g1

0x6097,	// (0x00025d93) cell_touch_3_pane_g2

0x0001,

0xfb47,	// (0x0002f843) cell_touch_3_pane_g

0x1fb1,	// (0x00021cad) cont_query_data_pane

0x1fb9,	// (0x00021cb5) cont_query_data_pane_cp1

0x7178,	// (0x00026e74) button_value_adjust_pane_cp7

0x7180,	// (0x00026e7c) query_popup_pane_cp3

0x2c1e,	// (0x0002291a) bg_popup_sub_pane_cp22_ParamLimits

0xb110,	// (0x0002ae0c) navi_navi_volume_pane_cp2

0xb12b,	// (0x0002ae27) popup_side_volume_key_window_g2

0xb13a,	// (0x0002ae36) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0002f40e) popup_side_volume_key_window_g

0xb157,	// (0x0002ae53) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0002f415) popup_side_volume_key_window_t

0x2ed8,	// (0x00022bd4) popup_side_volume_key_window_ParamLimits

0xe37a,	// (0x0002e076) list_double_graphic_pane_g4_ParamLimits

0xe37a,	// (0x0002e076) list_double_graphic_pane_g4

0xeee4,	// (0x0002ebe0) list_single_2heading_msg_pane_ParamLimits

0xeee4,	// (0x0002ebe0) list_single_2heading_msg_pane

0xf3f5,	// (0x0002f0f1) list_single_2heading_msg_pane_g1_ParamLimits

0xf3f5,	// (0x0002f0f1) list_single_2heading_msg_pane_g1

0xe1cb,	// (0x0002dec7) list_single_2heading_msg_pane_g2_ParamLimits

0xe1cb,	// (0x0002dec7) list_single_2heading_msg_pane_g2

0xefca,	// (0x0002ecc6) list_single_2heading_msg_pane_g3_ParamLimits

0xefca,	// (0x0002ecc6) list_single_2heading_msg_pane_g3

0xf401,	// (0x0002f0fd) list_single_2heading_msg_pane_g4_ParamLimits

0xf401,	// (0x0002f0fd) list_single_2heading_msg_pane_g4

0x0003,

0xfcb2,	// (0x0002f9ae) list_single_2heading_msg_pane_g_ParamLimits

0xfcb2,	// (0x0002f9ae) list_single_2heading_msg_pane_g

0xf419,	// (0x0002f115) list_single_2heading_msg_pane_t1_ParamLimits

0xf419,	// (0x0002f115) list_single_2heading_msg_pane_t1

0xf441,	// (0x0002f13d) list_single_2heading_msg_pane_t2_ParamLimits

0xf441,	// (0x0002f13d) list_single_2heading_msg_pane_t2

0xf475,	// (0x0002f171) list_single_2heading_msg_pane_t3_ParamLimits

0xf475,	// (0x0002f171) list_single_2heading_msg_pane_t3

0xf4ae,	// (0x0002f1aa) list_single_2heading_msg_pane_t4_ParamLimits

0xf4ae,	// (0x0002f1aa) list_single_2heading_msg_pane_t4

0x0003,

0xfcbb,	// (0x0002f9b7) list_single_2heading_msg_pane_t_ParamLimits

0xfcbb,	// (0x0002f9b7) list_single_2heading_msg_pane_t

0x1bd2,	// (0x000218ce) title_pane_g4_ParamLimits

0x1bd2,	// (0x000218ce) title_pane_g4

0xaf1e,	// (0x0002ac1a) title_pane_stacon_g3_ParamLimits

0xaf1e,	// (0x0002ac1a) title_pane_stacon_g3

0x6cb1,	// (0x000269ad) list_single_2graphic_im_pane_g4_ParamLimits

0x6cb1,	// (0x000269ad) list_single_2graphic_im_pane_g4

0x4ade,	// (0x000247da) popup_side_volume_key_window_cp

0x5313,	// (0x0002500f) main_idle_act2_pane_t1

0xba8e,	// (0x0002b78a) toolbar_button_pane_g10

0x243a,	// (0x00022136) popup_toolbar_window_cp1

0x5af1,	// (0x000257ed) clock_nsta_pane_cp_t1

0x5af1,	// (0x000257ed) clock_nsta_pane_cp_t2

0x0001,

0xfabd,	// (0x0002f7b9) clock_nsta_pane_cp_t

0xb110,	// (0x0002ae0c) navi_navi_volume_pane_cp2_ParamLimits

0xb11f,	// (0x0002ae1b) popup_side_volume_key_window_g1_ParamLimits

0xb12b,	// (0x0002ae27) popup_side_volume_key_window_g2_ParamLimits

0xb13a,	// (0x0002ae36) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0002f40e) popup_side_volume_key_window_g_ParamLimits

0xbf4b,	// (0x0002bc47) fep_hwr_aid_pane

0xbff2,	// (0x0002bcee) bg_fep_hwr_top_pane_g4_ParamLimits

0x60fb,	// (0x00025df7) fep_hwr_top_pane_g1_ParamLimits

0x60e9,	// (0x00025de5) fep_hwr_top_pane_g2_ParamLimits

0xc012,	// (0x0002bd0e) fep_hwr_top_pane_g3_ParamLimits

0xfb12,	// (0x0002f80e) fep_hwr_top_pane_g_ParamLimits

0xc027,	// (0x0002bd23) fep_hwr_top_text_pane_ParamLimits

0x48a8,	// (0x000245a4) aid_touch_tab_arrow_arrow_2

0x489f,	// (0x0002459b) aid_touch_tab_arrow_left_2

0xbf5f,	// (0x0002bc5b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xbf96,	// (0x0002bc92) fep_hwr_prediction_pane

0x6262,	// (0x00025f5e) fep_vkb_prediction_pane

0x6366,	// (0x00026062) fep_vkb_side_pane_g3_ParamLimits

0x6366,	// (0x00026062) fep_vkb_side_pane_g3

0xc1a2,	// (0x0002be9e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc20e,	// (0x0002bf0a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc21b,	// (0x0002bf17) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc1,	// (0x0002f8bd) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc34a,	// (0x0002c046) fep_hwr_prediction_pane_g1

0xc354,	// (0x0002c050) fep_hwr_prediction_pane_g2

0xc35c,	// (0x0002c058) fep_hwr_prediction_pane_g3

0xc364,	// (0x0002c060) fep_hwr_prediction_pane_g4

0x0003,

0xfcc4,	// (0x0002f9c0) fep_hwr_prediction_pane_g

0x8dc0,	// (0x00028abc) fep_vkb_prediction_pane_g1

0x8dca,	// (0x00028ac6) fep_vkb_prediction_pane_g2

0x8dd2,	// (0x00028ace) fep_vkb_prediction_pane_g3

0x8dda,	// (0x00028ad6) fep_vkb_prediction_pane_g4

0x0003,

0xfccd,	// (0x0002f9c9) fep_vkb_prediction_pane_g

0xbd7a,	// (0x0002ba76) slider_set_pane_g3

0xbd8e,	// (0x0002ba8a) slider_set_pane_g4

0xbda6,	// (0x0002baa2) slider_set_pane_g5

0xbd7a,	// (0x0002ba76) slider_set_pane_g6

0xbdbc,	// (0x0002bab8) slider_set_pane_g7

0x4f47,	// (0x00024c43) slider_form_pane_g3

0x4f50,	// (0x00024c4c) slider_form_pane_g4

0x4f58,	// (0x00024c54) slider_form_pane_g5

0x4f47,	// (0x00024c43) slider_form_pane_g6

0x4f60,	// (0x00024c5c) slider_form_pane_g7

0x55bf,	// (0x000252bb) slider_set_pane_vc_g3

0x55c8,	// (0x000252c4) slider_set_pane_vc_g4

0x55d1,	// (0x000252cd) slider_set_pane_vc_g5

0x55bf,	// (0x000252bb) slider_set_pane_vc_g6

0x55da,	// (0x000252d6) slider_set_pane_vc_g7

0x57ae,	// (0x000254aa) slider_form_pane_vc_g1

0x57b7,	// (0x000254b3) slider_form_pane_vc_g2

0x57c0,	// (0x000254bc) slider_form_pane_vc_g3

0x57ae,	// (0x000254aa) slider_form_pane_vc_g4

0x57c9,	// (0x000254c5) slider_form_pane_vc_g5

0x0004,

0xfa8f,	// (0x0002f78b) slider_form_pane_vc_g

0xac06,	// (0x0002a902) main_idle_act3_pane

0x8de2,	// (0x00028ade) ai3_links_pane

0xc36c,	// (0x0002c068) popup_ai3_data_window_ParamLimits

0xc36c,	// (0x0002c068) popup_ai3_data_window

0x1b8a,	// (0x00021886) grid_ai3_links_pane

0xc384,	// (0x0002c080) cell_ai3_links_pane_ParamLimits

0xc384,	// (0x0002c080) cell_ai3_links_pane

0x8deb,	// (0x00028ae7) bg_popup_sub_pane_cp11

0x8df8,	// (0x00028af4) cell_ai3_links_pane_g1

0x1b8a,	// (0x00021886) bg_popup_sub_pane_cp12

0x8e1d,	// (0x00028b19) heading_ai3_data_pane

0x8e25,	// (0x00028b21) list_ai3_gene_pane

0x8e31,	// (0x00028b2d) popup_ai3_data_window_g1

0x8e39,	// (0x00028b35) heading_ai3_data_pane_g1

0x8e41,	// (0x00028b3d) heading_ai3_data_pane_t1

0x8e4f,	// (0x00028b4b) list_double_ai3_gene_pane_ParamLimits

0x8e4f,	// (0x00028b4b) list_double_ai3_gene_pane

0x8e5c,	// (0x00028b58) list_single_ai3_gene_pane_ParamLimits

0x8e5c,	// (0x00028b58) list_single_ai3_gene_pane

0x605c,	// (0x00025d58) list_highlight_pane_cp7_ParamLimits

0x605c,	// (0x00025d58) list_highlight_pane_cp7

0x8e69,	// (0x00028b65) list_single_a13_gene_pane_t1_ParamLimits

0x8e69,	// (0x00028b65) list_single_a13_gene_pane_t1

0x8e80,	// (0x00028b7c) list_single_ai3_gene_pane_g1

0x8e89,	// (0x00028b85) list_single_ai3_gene_pane_g2

0x0001,

0xfcd6,	// (0x0002f9d2) list_single_ai3_gene_pane_g

0x8e91,	// (0x00028b8d) list_double_ai3_gene_pane_g1_ParamLimits

0x8e91,	// (0x00028b8d) list_double_ai3_gene_pane_g1

0x8e9d,	// (0x00028b99) list_double_ai3_gene_pane_t1_ParamLimits

0x8e9d,	// (0x00028b99) list_double_ai3_gene_pane_t1

0x8eb9,	// (0x00028bb5) list_double_ai3_gene_pane_t2_ParamLimits

0x8eb9,	// (0x00028bb5) list_double_ai3_gene_pane_t2

0x8ece,	// (0x00028bca) list_double_ai3_gene_pane_t3_ParamLimits

0x8ece,	// (0x00028bca) list_double_ai3_gene_pane_t3

0x0002,

0xfcdb,	// (0x0002f9d7) list_double_ai3_gene_pane_t_ParamLimits

0xfcdb,	// (0x0002f9d7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf3eb,	// (0x0002f0e7) aid_size_min_col_2

0x7191,	// (0x00026e8d) aid_size_min_msg_ParamLimits

0x7191,	// (0x00026e8d) aid_size_min_msg

0x6466,	// (0x00026162) fep_vkb_top_text_pane_g2_ParamLimits

0x6466,	// (0x00026162) fep_vkb_top_text_pane_g2

0x0001,

0xfb42,	// (0x0002f83e) fep_vkb_top_text_pane_g_ParamLimits

0xfb42,	// (0x0002f83e) fep_vkb_top_text_pane_g

0xac06,	// (0x0002a902) main_hc_apps_shell_pane

0x8eeb,	// (0x00028be7) grid_hc_apps_pane_ParamLimits

0x8eeb,	// (0x00028be7) grid_hc_apps_pane

0x8efa,	// (0x00028bf6) list_hc_apps_pane

0x8f02,	// (0x00028bfe) scroll_pane_cp37_ParamLimits

0x8f02,	// (0x00028bfe) scroll_pane_cp37

0xc39c,	// (0x0002c098) cell_hc_apps_pane_ParamLimits

0xc39c,	// (0x0002c098) cell_hc_apps_pane

0xc44c,	// (0x0002c148) cell_hc_apps_pane_g1_ParamLimits

0xc44c,	// (0x0002c148) cell_hc_apps_pane_g1

0x8f0e,	// (0x00028c0a) cell_hc_apps_pane_g2_ParamLimits

0x8f0e,	// (0x00028c0a) cell_hc_apps_pane_g2

0x8f2a,	// (0x00028c26) cell_hc_apps_pane_g3_ParamLimits

0x8f2a,	// (0x00028c26) cell_hc_apps_pane_g3

0x0002,

0xfce2,	// (0x0002f9de) cell_hc_apps_pane_g_ParamLimits

0xfce2,	// (0x0002f9de) cell_hc_apps_pane_g

0xc47d,	// (0x0002c179) cell_hc_apps_pane_t1_ParamLimits

0xc47d,	// (0x0002c179) cell_hc_apps_pane_t1

0x1f07,	// (0x00021c03) grid_highlight_pane_cp10_ParamLimits

0x1f07,	// (0x00021c03) grid_highlight_pane_cp10

0xc4bd,	// (0x0002c1b9) list_single_hc_apps_pane_ParamLimits

0xc4bd,	// (0x0002c1b9) list_single_hc_apps_pane

0xc530,	// (0x0002c22c) list_single_hc_apps_pane_g1

0xf4d3,	// (0x0002f1cf) list_single_hc_apps_pane_g2

0x0001,

0xfce9,	// (0x0002f9e5) list_single_hc_apps_pane_g

0xf4ec,	// (0x0002f1e8) list_single_hc_apps_pane_g2_copy1

0xf508,	// (0x0002f204) list_single_hc_apps_pane_t1

0x1c7e,	// (0x0002197a) bg_set_opt_pane_cp_ParamLimits

0xae49,	// (0x0002ab45) setting_slider_pane_t1_ParamLimits

0xae62,	// (0x0002ab5e) setting_slider_pane_t2_ParamLimits

0xae7b,	// (0x0002ab77) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0002f260) setting_slider_pane_t_ParamLimits

0xae92,	// (0x0002ab8e) slider_set_pane_ParamLimits

0xb3b5,	// (0x0002b0b1) control_pane_g5_ParamLimits

0xb3b5,	// (0x0002b0b1) control_pane_g5

0x4da4,	// (0x00024aa0) slider_set_pane_g1_ParamLimits

0xbd6e,	// (0x0002ba6a) slider_set_pane_g2_ParamLimits

0xbd7a,	// (0x0002ba76) slider_set_pane_g3_ParamLimits

0xbd8e,	// (0x0002ba8a) slider_set_pane_g4_ParamLimits

0xbda6,	// (0x0002baa2) slider_set_pane_g5_ParamLimits

0xbd7a,	// (0x0002ba76) slider_set_pane_g6_ParamLimits

0xbdbc,	// (0x0002bab8) slider_set_pane_g7_ParamLimits

0xf960,	// (0x0002f65c) slider_set_pane_g_ParamLimits

0x2fb9,	// (0x00022cb5) navi_icon_text_pane_ParamLimits

0x34af,	// (0x000231ab) aid_fill_nsta_2_ParamLimits

0x34ee,	// (0x000231ea) aid_touch_tab_arrow_left_ParamLimits

0x34fd,	// (0x000231f9) aid_touch_tab_arrow_right_ParamLimits

0x356a,	// (0x00023266) clock_nsta_pane_ParamLimits

0x4881,	// (0x0002457d) navi_icon_pane_g1_ParamLimits

0x488d,	// (0x00024589) navi_text_pane_t1_ParamLimits

0x5c05,	// (0x00025901) navi_icon_text_pane_g1_ParamLimits

0x5c11,	// (0x0002590d) navi_icon_text_pane_t1_ParamLimits

0xc530,	// (0x0002c22c) list_single_hc_apps_pane_g1_ParamLimits

0xf4d3,	// (0x0002f1cf) list_single_hc_apps_pane_g2_ParamLimits

0xfce9,	// (0x0002f9e5) list_single_hc_apps_pane_g_ParamLimits

0xf4ec,	// (0x0002f1e8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xf508,	// (0x0002f204) list_single_hc_apps_pane_t1_ParamLimits

0xad63,	// (0x0002aa5f) popup_toolbar2_fixed_window_ParamLimits

0xad63,	// (0x0002aa5f) popup_toolbar2_fixed_window

0xb994,	// (0x0002b690) popup_toolbar2_float_window

0x1b8a,	// (0x00021886) bg_popup_sub_pane_cp27

0x8f4c,	// (0x00028c48) grid_toolbar2_float_pane

0x1b8a,	// (0x00021886) bg_popup_sub_pane_cp26

0x8f4c,	// (0x00028c48) grid_toolbar2_fixed_pane

0xc549,	// (0x0002c245) cell_toolbar2_fixed_pane_ParamLimits

0xc549,	// (0x0002c245) cell_toolbar2_fixed_pane

0xc55a,	// (0x0002c256) cell_toolbar2_fixed_pane_g1

0x8f54,	// (0x00028c50) toolbar2_fixed_button_pane

0x3979,	// (0x00023675) toolbar2_fixed_button_pane_g1

0x3981,	// (0x0002367d) toolbar2_fixed_button_pane_g2

0x3989,	// (0x00023685) toolbar2_fixed_button_pane_g3

0x3991,	// (0x0002368d) toolbar2_fixed_button_pane_g4

0x3999,	// (0x00023695) toolbar2_fixed_button_pane_g5

0x39a1,	// (0x0002369d) toolbar2_fixed_button_pane_g6

0x39a9,	// (0x000236a5) toolbar2_fixed_button_pane_g7

0x39b1,	// (0x000236ad) toolbar2_fixed_button_pane_g8

0x39b9,	// (0x000236b5) toolbar2_fixed_button_pane_g9

0x0008,

0xf862,	// (0x0002f55e) toolbar2_fixed_button_pane_g

0x8f5c,	// (0x00028c58) cell_toolbar2_float_pane_ParamLimits

0x8f5c,	// (0x00028c58) cell_toolbar2_float_pane

0x8f6d,	// (0x00028c69) cell_toolbar2_float_pane_g1

0x8f54,	// (0x00028c50) toolbar2_fixed_button_pane_cp

0x61bb,	// (0x00025eb7) fep_vkb_accented_list_pane_ParamLimits

0x61bb,	// (0x00025eb7) fep_vkb_accented_list_pane

0xc182,	// (0x0002be7e) bg_popup_fep_shadow_pane_g9

0x313b,	// (0x00022e37) bg_popup_fep_shadow_pane_cp3

0x2632,	// (0x0002232e) list_accented_list_pane

0x8f76,	// (0x00028c72) list_single_accented_list_pane_ParamLimits

0x8f76,	// (0x00028c72) list_single_accented_list_pane

0x313b,	// (0x00022e37) list_highlight_pane_cp10

0x8f87,	// (0x00028c83) list_single_accented_list_pane_t1

0xb8e4,	// (0x0002b5e0) popup_slider_window_ParamLimits

0xb8e4,	// (0x0002b5e0) popup_slider_window

0x7188,	// (0x00026e84) aid_indentation_list_msg

0xc60f,	// (0x0002c30b) bg_popup_window_pane_cp19

0x8ff3,	// (0x00028cef) popup_slider_window_g1

0x900f,	// (0x00028d0b) popup_slider_window_g2

0x902b,	// (0x00028d27) popup_slider_window_g3

0x0005,

0xfcee,	// (0x0002f9ea) popup_slider_window_g

0x9047,	// (0x00028d43) popup_slider_window_t1

0x908d,	// (0x00028d89) small_volume_slider_vertical_pane

0x6097,	// (0x00025d93) small_volume_slider_vertical_pane_g1

0x6097,	// (0x00025d93) small_volume_slider_vertical_pane_g2

0x90a9,	// (0x00028da5) small_volume_slider_vertical_pane_g3

0x0002,

0xfd00,	// (0x0002f9fc) small_volume_slider_vertical_pane_g

0xab29,	// (0x0002a825) area_side_right_pane_ParamLimits

0xab29,	// (0x0002a825) area_side_right_pane

0xc689,	// (0x0002c385) aid_size_side_button_ParamLimits

0xc689,	// (0x0002c385) aid_size_side_button

0xc69d,	// (0x0002c399) grid_sctrl_middle_pane_ParamLimits

0xc69d,	// (0x0002c399) grid_sctrl_middle_pane

0xc6bd,	// (0x0002c3b9) sctrl_sk_bottom_pane

0xc6ce,	// (0x0002c3ca) sctrl_sk_top_pane

0xc6e0,	// (0x0002c3dc) aid_touch_sctrl_top

0xc6ed,	// (0x0002c3e9) bg_sctrl_sk_pane_ParamLimits

0xc6ed,	// (0x0002c3e9) bg_sctrl_sk_pane

0xc6fb,	// (0x0002c3f7) sctrl_sk_top_pane_g1

0xc708,	// (0x0002c404) sctrl_sk_top_pane_t1

0xc6e0,	// (0x0002c3dc) aid_touch_sctrl_bottom

0xc6ed,	// (0x0002c3e9) bg_sctrl_sk_pane_cp_ParamLimits

0xc6ed,	// (0x0002c3e9) bg_sctrl_sk_pane_cp

0xc723,	// (0x0002c41f) sctrl_sk_bottom_pane_g1

0xc708,	// (0x0002c404) sctrl_sk_bottom_pane_t1

0xc72c,	// (0x0002c428) cell_sctrl_middle_pane_ParamLimits

0xc72c,	// (0x0002c428) cell_sctrl_middle_pane

0xc747,	// (0x0002c443) aid_touch_sctrl_middle_ParamLimits

0xc747,	// (0x0002c443) aid_touch_sctrl_middle

0xc759,	// (0x0002c455) bg_sctrl_middle_pane_ParamLimits

0xc759,	// (0x0002c455) bg_sctrl_middle_pane

0xc1a2,	// (0x0002be9e) cell_sctrl_middle_pane_g1_ParamLimits

0xc1a2,	// (0x0002be9e) cell_sctrl_middle_pane_g1

0xc767,	// (0x0002c463) cell_sctrl_middle_pane_g2_ParamLimits

0xc767,	// (0x0002c463) cell_sctrl_middle_pane_g2

0x0001,

0xfd0c,	// (0x0002fa08) cell_sctrl_middle_pane_g_ParamLimits

0xfd0c,	// (0x0002fa08) cell_sctrl_middle_pane_g

0x3979,	// (0x00023675) bg_sctrl_middle_pane_g1

0x3989,	// (0x00023685) bg_sctrl_middle_pane_g2

0x3981,	// (0x0002367d) bg_sctrl_middle_pane_g3

0x3999,	// (0x00023695) bg_sctrl_middle_pane_g4

0x3991,	// (0x0002368d) bg_sctrl_middle_pane_g5

0x39a1,	// (0x0002369d) bg_sctrl_middle_pane_g6

0x39a9,	// (0x000236a5) bg_sctrl_middle_pane_g7

0x39b9,	// (0x000236b5) bg_sctrl_middle_pane_g8

0x0007,

0xfd11,	// (0x0002fa0d) bg_sctrl_middle_pane_g

0x39b1,	// (0x000236ad) bg_sctrl_middle_pane_g8_copy1

0x3979,	// (0x00023675) bg_sctrl_sk_pane_g1

0x3981,	// (0x0002367d) bg_sctrl_sk_pane_g2

0x3989,	// (0x00023685) bg_sctrl_sk_pane_g3

0x0008,

0xf862,	// (0x0002f55e) bg_sctrl_sk_pane_g

0x2400,	// (0x000220fc) aid_size_touch_scroll_bar

0x3991,	// (0x0002368d) bg_sctrl_sk_pane_g4

0x3999,	// (0x00023695) bg_sctrl_sk_pane_g5

0x39a1,	// (0x0002369d) bg_sctrl_sk_pane_g6

0x39a9,	// (0x000236a5) bg_sctrl_sk_pane_g7

0x39b1,	// (0x000236ad) bg_sctrl_sk_pane_g8

0x39b9,	// (0x000236b5) bg_sctrl_sk_pane_g9

0xb55d,	// (0x0002b259) popup_fep_china_hwr2_fs_candidate_window

0xb567,	// (0x0002b263) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb567,	// (0x0002b263) popup_fep_china_hwr2_fs_control_window

0xc1a2,	// (0x0002be9e) sctrl_sk_top_pane_g2

0x0001,

0xfd07,	// (0x0002fa03) sctrl_sk_top_pane_g

0xc777,	// (0x0002c473) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc777,	// (0x0002c473) aid_fep_china_hwr2_fs_cell

0xc789,	// (0x0002c485) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc789,	// (0x0002c485) bg_popup_fep_shadow_pane_cp4

0xc7a0,	// (0x0002c49c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc7a0,	// (0x0002c49c) bg_popup_fep_shadow_pane_cp5

0xc7b2,	// (0x0002c4ae) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc7b2,	// (0x0002c4ae) popup_fep_china_hwr2_fs_control_bar_grid

0xc7c2,	// (0x0002c4be) popup_fep_china_hwr2_fs_control_funtion_grid

0x912b,	// (0x00028e27) aid_fep_china_hwr2_fs_candi_cell

0x1b8a,	// (0x00021886) bg_popup_fep_shadow_pane_cp6

0x9135,	// (0x00028e31) popup_fep_china_hwr2_fs_candidate_grid

0xc7ca,	// (0x0002c4c6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc7ca,	// (0x0002c4c6) cell_fep_china_hwr2_fs_funtion_grid

0x6097,	// (0x00025d93) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9111,	// (0x00028e0d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9111,	// (0x00028e0d) cell_fep_china_hwr2_fs_funtion_grid_g1

0x913f,	// (0x00028e3b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x913f,	// (0x00028e3b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd22,	// (0x0002fa1e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd22,	// (0x0002fa1e) cell_fep_china_hwr2_fs_funtion_grid_g

0xc7e2,	// (0x0002c4de) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc7e2,	// (0x0002c4de) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc7f7,	// (0x0002c4f3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc7f7,	// (0x0002c4f3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd27,	// (0x0002fa23) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd27,	// (0x0002fa23) cell_fep_china_hwr2_fs_funtion_grid_t

0x9155,	// (0x00028e51) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x915d,	// (0x00028e59) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9165,	// (0x00028e61) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2c,	// (0x0002fa28) popup_fep_china_hwr2_fs_control_bar_grid_g

0x916d,	// (0x00028e69) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x916d,	// (0x00028e69) cell_fep_china_hwr2_fs_candidate_grid

0x9186,	// (0x00028e82) popup_fep_china_hwr2_fs_candidate_grid_g20

0x918e,	// (0x00028e8a) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6097,	// (0x00025d93) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6097,	// (0x00025d93) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb47,	// (0x0002f843) cell_fep_china_hwr2_fs_candidate_grid_g

0x9196,	// (0x00028e92) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3577,	// (0x00023273) clock_nsta_pane_cp_24_ParamLimits

0x3577,	// (0x00023273) clock_nsta_pane_cp_24

0x35f5,	// (0x000232f1) indicator_nsta_pane_cp_24_ParamLimits

0x35f5,	// (0x000232f1) indicator_nsta_pane_cp_24

0x4709,	// (0x00024405) heading_pane_g1

0x0001,

0xf8c7,	// (0x0002f5c3) heading_pane_g

0x5118,	// (0x00024e14) grid_sct_catagory_button_pane

0x514a,	// (0x00024e46) scroll_pane_cp5_ParamLimits

0x5c53,	// (0x0002594f) button_value_adjust_pane_cp5_ParamLimits

0x5c53,	// (0x0002594f) button_value_adjust_pane_cp5

0x5d32,	// (0x00025a2e) form2_midp_time_pane_ParamLimits

0x91a4,	// (0x00028ea0) cell_sct_catagory_button_pane_ParamLimits

0x91a4,	// (0x00028ea0) cell_sct_catagory_button_pane

0x605c,	// (0x00025d58) bg_button_pane_cp01_ParamLimits

0x605c,	// (0x00025d58) bg_button_pane_cp01

0x6097,	// (0x00025d93) cell_sct_catagory_button_pane_g1

0xb923,	// (0x0002b61f) popup_tb_extension_window

0xc813,	// (0x0002c50f) aid_size_cell_ext_ParamLimits

0xc813,	// (0x0002c50f) aid_size_cell_ext

0x1f07,	// (0x00021c03) bg_tb_trans_pane_cp1_ParamLimits

0x1f07,	// (0x00021c03) bg_tb_trans_pane_cp1

0xc833,	// (0x0002c52f) grid_tb_ext_pane_ParamLimits

0xc833,	// (0x0002c52f) grid_tb_ext_pane

0xc863,	// (0x0002c55f) cell_tb_ext_pane_ParamLimits

0xc863,	// (0x0002c55f) cell_tb_ext_pane

0xc87a,	// (0x0002c576) cell_tb_ext_pane_g1_ParamLimits

0xc87a,	// (0x0002c576) cell_tb_ext_pane_g1

0x91b6,	// (0x00028eb2) cell_tb_ext_pane_t1

0x1f07,	// (0x00021c03) list_highlight_pane_cp11_ParamLimits

0x1f07,	// (0x00021c03) list_highlight_pane_cp11

0xad82,	// (0x0002aa7e) popup_uni_indicator_window_ParamLimits

0xad82,	// (0x0002aa7e) popup_uni_indicator_window

0x24d1,	// (0x000221cd) bg_popup_sub_pane_cp14

0x91d1,	// (0x00028ecd) list_uniindi_pane

0x91dd,	// (0x00028ed9) uniindi_top_pane

0x1f07,	// (0x00021c03) bg_uniindi_top_pane

0x91fc,	// (0x00028ef8) uniindi_top_pane_g1

0x9212,	// (0x00028f0e) uniindi_top_pane_g2

0x0003,

0xfd33,	// (0x0002fa2f) uniindi_top_pane_g

0x923c,	// (0x00028f38) uniindi_top_pane_t1

0x9266,	// (0x00028f62) list_single_uniindi_pane_ParamLimits

0x9266,	// (0x00028f62) list_single_uniindi_pane

0x6097,	// (0x00025d93) bg_uniindi_top_pane_g1

0x9278,	// (0x00028f74) list_single_uniindi_pane_g1

0x928b,	// (0x00028f87) list_single_uniindi_pane_t1

0xac06,	// (0x0002a902) control_bg_pane

0x92b0,	// (0x00028fac) bg_sctrl_sk_pane_cp1

0x92b9,	// (0x00028fb5) bg_sctrl_sk_pane_cp2

0x92c2,	// (0x00028fbe) control_bg_pane_g1

0x92cb,	// (0x00028fc7) control_bg_pane_g2

0x0001,

0xfd3c,	// (0x0002fa38) control_bg_pane_g

0x5a83,	// (0x0002577f) cell_indicator_nsta_pane_g1_ParamLimits

0x5a91,	// (0x0002578d) cell_indicator_nsta_pane_g2_ParamLimits

0xfaab,	// (0x0002f7a7) cell_indicator_nsta_pane_g_ParamLimits

0xf1a8,	// (0x0002eea4) form2_midp_time_pane_t1_ParamLimits

0xb4c9,	// (0x0002b1c5) main_idle_act4_pane_ParamLimits

0xb4c9,	// (0x0002b1c5) main_idle_act4_pane

0xb923,	// (0x0002b61f) popup_tb_extension_window_ParamLimits

0xc853,	// (0x0002c54f) tb_ext_find_pane_ParamLimits

0xc853,	// (0x0002c54f) tb_ext_find_pane

0x92d4,	// (0x00028fd0) ai_gene_pane_1_cp1

0x3278,	// (0x00022f74) ai_gene_pane_2_cp1

0x92dc,	// (0x00028fd8) list_single_idle_plugin_calendar_pane

0x92e5,	// (0x00028fe1) list_single_idle_plugin_notification_pane

0x92ee,	// (0x00028fea) list_single_idle_plugin_player_pane

0xc897,	// (0x0002c593) list_single_idle_plugin_shortcut_pane_ParamLimits

0xc897,	// (0x0002c593) list_single_idle_plugin_shortcut_pane

0xc8b9,	// (0x0002c5b5) main_idle_act4_pane_t1

0xc8cb,	// (0x0002c5c7) main_idle_act4_pane_t2

0x0001,

0xfd41,	// (0x0002fa3d) main_idle_act4_pane_t

0xc8dd,	// (0x0002c5d9) middle_sk_idle_act4_pane_ParamLimits

0xc8dd,	// (0x0002c5d9) middle_sk_idle_act4_pane

0xc8f3,	// (0x0002c5ef) popup_clock_digital_analogue_window_cp2

0xc90d,	// (0x0002c609) shortcut_wheel_idle_act4_pane_ParamLimits

0xc90d,	// (0x0002c609) shortcut_wheel_idle_act4_pane

0x6097,	// (0x00025d93) shortcut_wheel_idle_act4_pane_g1

0x6097,	// (0x00025d93) shortcut_wheel_idle_act4_pane_g2

0x6097,	// (0x00025d93) shortcut_wheel_idle_act4_pane_g3

0x6097,	// (0x00025d93) shortcut_wheel_idle_act4_pane_g4

0x6097,	// (0x00025d93) shortcut_wheel_idle_act4_pane_g5

0x92f7,	// (0x00028ff3) shortcut_wheel_idle_act4_pane_g6

0x92ff,	// (0x00028ffb) shortcut_wheel_idle_act4_pane_g7

0x9307,	// (0x00029003) shortcut_wheel_idle_act4_pane_g8

0x930f,	// (0x0002900b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd46,	// (0x0002fa42) shortcut_wheel_idle_act4_pane_g

0x6312,	// (0x0002600e) middle_sk_idle_act4_pane_g1_ParamLimits

0x6312,	// (0x0002600e) middle_sk_idle_act4_pane_g1

0xc97d,	// (0x0002c679) middle_sk_idle_act4_pane_g2_ParamLimits

0xc97d,	// (0x0002c679) middle_sk_idle_act4_pane_g2

0x0001,

0xfd69,	// (0x0002fa65) middle_sk_idle_act4_pane_g_ParamLimits

0xfd69,	// (0x0002fa65) middle_sk_idle_act4_pane_g

0xc989,	// (0x0002c685) middle_sk_idle_act4_pane_t1_ParamLimits

0xc989,	// (0x0002c685) middle_sk_idle_act4_pane_t1

0xc9a6,	// (0x0002c6a2) grid_ai_shortcut_pane_ParamLimits

0xc9a6,	// (0x0002c6a2) grid_ai_shortcut_pane

0xc9bf,	// (0x0002c6bb) list_highlight_pane_cp16_ParamLimits

0xc9bf,	// (0x0002c6bb) list_highlight_pane_cp16

0xc9cc,	// (0x0002c6c8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xc9cc,	// (0x0002c6c8) list_single_idle_plugin_shortcut_pane_g1

0xc9d8,	// (0x0002c6d4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xc9d8,	// (0x0002c6d4) list_single_idle_plugin_shortcut_pane_g2

0xc9f0,	// (0x0002c6ec) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xc9f0,	// (0x0002c6ec) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6e,	// (0x0002fa6a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6e,	// (0x0002fa6a) list_single_idle_plugin_shortcut_pane_g

0xca03,	// (0x0002c6ff) cell_ai_shortcut_pane_ParamLimits

0xca03,	// (0x0002c6ff) cell_ai_shortcut_pane

0xca24,	// (0x0002c720) cell_ai_shortcut_pane_g1_ParamLimits

0xca24,	// (0x0002c720) cell_ai_shortcut_pane_g1

0x92d4,	// (0x00028fd0) ai_gene_pane_1_cp2

0x9317,	// (0x00029013) ai_gene_pane_2_cp2

0x931f,	// (0x0002901b) list_highlight_pane_cp15

0x9328,	// (0x00029024) list_single_idle_plugin_calendar_pane_g1

0x931f,	// (0x0002901b) list_highlight_pane_cp17

0x9330,	// (0x0002902c) list_single_idle_plugin_calendar_pane_g1_copy1

0x9338,	// (0x00029034) list_single_idle_plugin_player_pane_g1

0x53b3,	// (0x000250af) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd75,	// (0x0002fa71) list_single_idle_plugin_player_pane_g

0x9340,	// (0x0002903c) list_single_idle_plugin_player_pane_t1

0x934e,	// (0x0002904a) list_single_idle_plugin_player_pane_t2

0x935c,	// (0x00029058) list_single_idle_plugin_player_pane_t3

0x936a,	// (0x00029066) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7a,	// (0x0002fa76) list_single_idle_plugin_player_pane_t

0x9378,	// (0x00029074) wait_bar_pane_cp15

0x9380,	// (0x0002907c) grid_ai_notification_pane

0x53b3,	// (0x000250af) list_single_idle_plugin_notification_pane_g1

0xca46,	// (0x0002c742) cell_ai_notification_pane_ParamLimits

0xca46,	// (0x0002c742) cell_ai_notification_pane

0x9389,	// (0x00029085) cell_ai_notification_pane_g1

0x9391,	// (0x0002908d) cell_ai_notification_pane_t1

0xca53,	// (0x0002c74f) tb_ext_find_button_pane

0xca5b,	// (0x0002c757) tb_ext_find_pane_g1

0xca63,	// (0x0002c75f) tb_ext_find_pane_t1

0x2b32,	// (0x0002282e) tb_ext_find_button_pane_g1

0x939f,	// (0x0002909b) tb_ext_find_button_pane_g2

0x0001,

0xfd83,	// (0x0002fa7f) tb_ext_find_button_pane_g

0xc8b9,	// (0x0002c5b5) main_idle_act4_pane_t1_ParamLimits

0xc8cb,	// (0x0002c5c7) main_idle_act4_pane_t2_ParamLimits

0xfd41,	// (0x0002fa3d) main_idle_act4_pane_t_ParamLimits

0xc8f3,	// (0x0002c5ef) popup_clock_digital_analogue_window_cp2_ParamLimits

0xc901,	// (0x0002c5fd) sat_plugin_idle_act4_pane_ParamLimits

0xc901,	// (0x0002c5fd) sat_plugin_idle_act4_pane

0xca71,	// (0x0002c76d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xca71,	// (0x0002c76d) sat_plugin_idle_act4_pane_t1

0xca84,	// (0x0002c780) sat_plugin_idle_act4_pane_t2_ParamLimits

0xca84,	// (0x0002c780) sat_plugin_idle_act4_pane_t2

0xca97,	// (0x0002c793) sat_plugin_idle_act4_pane_t3_ParamLimits

0xca97,	// (0x0002c793) sat_plugin_idle_act4_pane_t3

0xcaaa,	// (0x0002c7a6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xcaaa,	// (0x0002c7a6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd88,	// (0x0002fa84) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd88,	// (0x0002fa84) sat_plugin_idle_act4_pane_t

0xaccb,	// (0x0002a9c7) popup_battery_window_ParamLimits

0xaccb,	// (0x0002a9c7) popup_battery_window

0x1f07,	// (0x00021c03) bg_popup_sub_pane_cp25_ParamLimits

0x1f07,	// (0x00021c03) bg_popup_sub_pane_cp25

0x93a8,	// (0x000290a4) popup_battery_window_g1_ParamLimits

0x93a8,	// (0x000290a4) popup_battery_window_g1

0x93b4,	// (0x000290b0) popup_battery_window_t1_ParamLimits

0x93b4,	// (0x000290b0) popup_battery_window_t1

0x93c6,	// (0x000290c2) popup_battery_window_t2_ParamLimits

0x93c6,	// (0x000290c2) popup_battery_window_t2

0x0001,

0xfd91,	// (0x0002fa8d) popup_battery_window_t_ParamLimits

0xfd91,	// (0x0002fa8d) popup_battery_window_t

0x3143,	// (0x00022e3f) midp_canvas_pane_ParamLimits

0x31ba,	// (0x00022eb6) midp_keypad_pane_ParamLimits

0x31ba,	// (0x00022eb6) midp_keypad_pane

0x3477,	// (0x00023173) main_midp_pane_ParamLimits

0x5b0f,	// (0x0002580b) signal_pane_g2_cp_ParamLimits

0xcabd,	// (0x0002c7b9) aid_size_cell_midp_keypad_ParamLimits

0xcabd,	// (0x0002c7b9) aid_size_cell_midp_keypad

0xcad7,	// (0x0002c7d3) midp_keyp_game_grid_pane_ParamLimits

0xcad7,	// (0x0002c7d3) midp_keyp_game_grid_pane

0xcaf7,	// (0x0002c7f3) midp_keyp_rocker_pane_ParamLimits

0xcaf7,	// (0x0002c7f3) midp_keyp_rocker_pane

0xcb22,	// (0x0002c81e) midp_keyp_sk_left_pane_ParamLimits

0xcb22,	// (0x0002c81e) midp_keyp_sk_left_pane

0xcb7c,	// (0x0002c878) midp_keyp_sk_right_pane_ParamLimits

0xcb7c,	// (0x0002c878) midp_keyp_sk_right_pane

0x1b8a,	// (0x00021886) bg_button_pane_cp03

0xcbd6,	// (0x0002c8d2) midp_keyp_sk_left_pane_g1

0x1b8a,	// (0x00021886) bg_button_pane_cp04

0xcbd6,	// (0x0002c8d2) midp_keyp_sk_right_pane_g1

0x6097,	// (0x00025d93) midp_keyp_rocker_pane_g1

0xcbdf,	// (0x0002c8db) keyp_game_cell_pane_ParamLimits

0xcbdf,	// (0x0002c8db) keyp_game_cell_pane

0x1b8a,	// (0x00021886) bg_button_pane_cp02

0xcbf2,	// (0x0002c8ee) keyp_game_cell_pane_g1

0xad01,	// (0x0002a9fd) popup_fep_vkb2_window_ParamLimits

0xad01,	// (0x0002a9fd) popup_fep_vkb2_window

0xcc09,	// (0x0002c905) aid_size_cell_vkb2_ParamLimits

0xcc09,	// (0x0002c905) aid_size_cell_vkb2

0xcc5d,	// (0x0002c959) popup_fep_vkb2_window_g1_ParamLimits

0xcc5d,	// (0x0002c959) popup_fep_vkb2_window_g1

0xcc9d,	// (0x0002c999) vkb2_area_bottom_pane_ParamLimits

0xcc9d,	// (0x0002c999) vkb2_area_bottom_pane

0xcce9,	// (0x0002c9e5) vkb2_area_keypad_pane_ParamLimits

0xcce9,	// (0x0002c9e5) vkb2_area_keypad_pane

0xcd2b,	// (0x0002ca27) vkb2_area_top_pane_ParamLimits

0xcd2b,	// (0x0002ca27) vkb2_area_top_pane

0xcda5,	// (0x0002caa1) vkb2_top_entry_pane_ParamLimits

0xcda5,	// (0x0002caa1) vkb2_top_entry_pane

0xcdcf,	// (0x0002cacb) vkb2_top_grid_left_pane_ParamLimits

0xcdcf,	// (0x0002cacb) vkb2_top_grid_left_pane

0xcded,	// (0x0002cae9) vkb2_top_grid_right_pane_ParamLimits

0xcded,	// (0x0002cae9) vkb2_top_grid_right_pane

0xce0b,	// (0x0002cb07) vkb2_cell_keypad_pane_ParamLimits

0xce0b,	// (0x0002cb07) vkb2_cell_keypad_pane

0xcedc,	// (0x0002cbd8) vkb2_area_bottom_grid_pane_ParamLimits

0xcedc,	// (0x0002cbd8) vkb2_area_bottom_grid_pane

0xcf02,	// (0x0002cbfe) vkb2_area_bottom_pane_g1_ParamLimits

0xcf02,	// (0x0002cbfe) vkb2_area_bottom_pane_g1

0xcf26,	// (0x0002cc22) vkb2_area_bottom_pane_g2_ParamLimits

0xcf26,	// (0x0002cc22) vkb2_area_bottom_pane_g2

0xcf54,	// (0x0002cc50) vkb2_area_bottom_pane_g3_ParamLimits

0xcf54,	// (0x0002cc50) vkb2_area_bottom_pane_g3

0x0002,

0xfd96,	// (0x0002fa92) vkb2_area_bottom_pane_g_ParamLimits

0xfd96,	// (0x0002fa92) vkb2_area_bottom_pane_g

0xcfb5,	// (0x0002ccb1) vkb2_top_cell_left_pane_ParamLimits

0xcfb5,	// (0x0002ccb1) vkb2_top_cell_left_pane

0xcfd5,	// (0x0002ccd1) vkb2_top_entry_pane_g1_ParamLimits

0xcfd5,	// (0x0002ccd1) vkb2_top_entry_pane_g1

0xcfe3,	// (0x0002ccdf) vkb2_top_entry_pane_t1_ParamLimits

0xcfe3,	// (0x0002ccdf) vkb2_top_entry_pane_t1

0x974f,	// (0x0002944b) vkb2_top_entry_pane_t2_ParamLimits

0x974f,	// (0x0002944b) vkb2_top_entry_pane_t2

0x9781,	// (0x0002947d) vkb2_top_entry_pane_t3_ParamLimits

0x9781,	// (0x0002947d) vkb2_top_entry_pane_t3

0x0002,

0xfd9d,	// (0x0002fa99) vkb2_top_entry_pane_t_ParamLimits

0xfd9d,	// (0x0002fa99) vkb2_top_entry_pane_t

0xd042,	// (0x0002cd3e) vkb2_top_grid_right_pane_g1_ParamLimits

0xd042,	// (0x0002cd3e) vkb2_top_grid_right_pane_g1

0xd058,	// (0x0002cd54) vkb2_top_grid_right_pane_g2_ParamLimits

0xd058,	// (0x0002cd54) vkb2_top_grid_right_pane_g2

0xd070,	// (0x0002cd6c) vkb2_top_grid_right_pane_g3_ParamLimits

0xd070,	// (0x0002cd6c) vkb2_top_grid_right_pane_g3

0xd088,	// (0x0002cd84) vkb2_top_grid_right_pane_g4_ParamLimits

0xd088,	// (0x0002cd84) vkb2_top_grid_right_pane_g4

0x0003,

0xfda4,	// (0x0002faa0) vkb2_top_grid_right_pane_g_ParamLimits

0xfda4,	// (0x0002faa0) vkb2_top_grid_right_pane_g

0xd09e,	// (0x0002cd9a) vkb2_top_cell_left_pane_g1

0xd0b5,	// (0x0002cdb1) vkb2_cell_keypad_pane_g1_ParamLimits

0xd0b5,	// (0x0002cdb1) vkb2_cell_keypad_pane_g1

0x97d1,	// (0x000294cd) vkb2_cell_keypad_pane_t1_ParamLimits

0x97d1,	// (0x000294cd) vkb2_cell_keypad_pane_t1

0xd0c3,	// (0x0002cdbf) vkb2_cell_bottom_grid_pane_ParamLimits

0xd0c3,	// (0x0002cdbf) vkb2_cell_bottom_grid_pane

0xd0fc,	// (0x0002cdf8) vkb2_cell_bottom_grid_pane_g1

0xc921,	// (0x0002c61d) aid_call2_pane_cp02

0xc929,	// (0x0002c625) aid_call_pane_cp02

0xc931,	// (0x0002c62d) clock_digital_number_pane_cp10

0xc939,	// (0x0002c635) clock_digital_number_pane_cp11

0xc941,	// (0x0002c63d) clock_digital_number_pane_cp12

0xc949,	// (0x0002c645) clock_digital_number_pane_cp13

0xc951,	// (0x0002c64d) clock_digital_separator_pane_cp10

0x2b32,	// (0x0002282e) popup_clock_digital_analogue_window_cp2_g1

0x2b32,	// (0x0002282e) popup_clock_digital_analogue_window_cp2_g2

0xc959,	// (0x0002c655) popup_clock_digital_analogue_window_cp2_g3

0x2b32,	// (0x0002282e) popup_clock_digital_analogue_window_cp2_g4

0xc959,	// (0x0002c655) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd59,	// (0x0002fa55) popup_clock_digital_analogue_window_cp2_g

0xc961,	// (0x0002c65d) popup_clock_digital_analogue_window_cp2_t1

0xc96f,	// (0x0002c66b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd64,	// (0x0002fa60) popup_clock_digital_analogue_window_cp2_t

0x6097,	// (0x00025d93) clock_digital_number_pane_cp10_g1

0x6097,	// (0x00025d93) clock_digital_number_pane_cp10_g2

0x0001,

0xfb47,	// (0x0002f843) clock_digital_number_pane_cp10_g

0x6097,	// (0x00025d93) clock_digital_separator_pane_cp10_g1

0x6097,	// (0x00025d93) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb47,	// (0x0002f843) clock_digital_separator_pane_cp10_g

0x921e,	// (0x00028f1a) uniindi_top_pane_g3

0x922f,	// (0x00028f2b) uniindi_top_pane_g4

0xce96,	// (0x0002cb92) vkb2_row_keypad_pane_ParamLimits

0xce96,	// (0x0002cb92) vkb2_row_keypad_pane

0xd11c,	// (0x0002ce18) vkb2_cell_t_keypad_pane_ParamLimits

0xd11c,	// (0x0002ce18) vkb2_cell_t_keypad_pane

0xd12c,	// (0x0002ce28) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xd12c,	// (0x0002ce28) vkb2_cell_t_keypad_pane_cp08

0xd13f,	// (0x0002ce3b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xd13f,	// (0x0002ce3b) vkb2_cell_t_keypad_pane_cp09

0xd153,	// (0x0002ce4f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xd153,	// (0x0002ce4f) vkb2_cell_t_keypad_pane_cp01

0xd164,	// (0x0002ce60) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xd164,	// (0x0002ce60) vkb2_cell_t_keypad_pane_cp02

0xd175,	// (0x0002ce71) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xd175,	// (0x0002ce71) vkb2_cell_t_keypad_pane_cp03

0xd186,	// (0x0002ce82) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xd186,	// (0x0002ce82) vkb2_cell_t_keypad_pane_cp04

0xd197,	// (0x0002ce93) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xd197,	// (0x0002ce93) vkb2_cell_t_keypad_pane_cp05

0xd1a8,	// (0x0002cea4) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xd1a8,	// (0x0002cea4) vkb2_cell_t_keypad_pane_cp06

0xd1b9,	// (0x0002ceb5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xd1b9,	// (0x0002ceb5) vkb2_cell_t_keypad_pane_cp07

0xd1ca,	// (0x0002cec6) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xd1ca,	// (0x0002cec6) vkb2_cell_t_keypad_pane_cp10

0xc1a2,	// (0x0002be9e) vkb2_cell_t_keypad_pane_g1

0x97e8,	// (0x000294e4) vkb2_cell_t_keypad_pane_t1

0xac06,	// (0x0002a902) popup_grid_graphic2_window

0xd1df,	// (0x0002cedb) aid_size_cell_graphic2_ParamLimits

0xd1df,	// (0x0002cedb) aid_size_cell_graphic2

0xd217,	// (0x0002cf13) bg_popup_window_pane_cp21_ParamLimits

0xd217,	// (0x0002cf13) bg_popup_window_pane_cp21

0xd225,	// (0x0002cf21) graphic2_pages_pane_ParamLimits

0xd225,	// (0x0002cf21) graphic2_pages_pane

0xd26b,	// (0x0002cf67) grid_graphic2_control_pane_ParamLimits

0xd26b,	// (0x0002cf67) grid_graphic2_control_pane

0xd2a9,	// (0x0002cfa5) grid_graphic2_pane_ParamLimits

0xd2a9,	// (0x0002cfa5) grid_graphic2_pane

0xd31d,	// (0x0002d019) cell_graphic2_pane

0xac06,	// (0x0002a902) main_comp_mode_pane

0x8e25,	// (0x00028b21) list_ai3_gene_pane_ParamLimits

0xc60f,	// (0x0002c30b) bg_popup_window_pane_cp19_ParamLimits

0x8f95,	// (0x00028c91) bg_touch_area_indi_pane_ParamLimits

0x8f95,	// (0x00028c91) bg_touch_area_indi_pane

0x8fab,	// (0x00028ca7) bg_touch_area_indi_pane_cp01_ParamLimits

0x8fab,	// (0x00028ca7) bg_touch_area_indi_pane_cp01

0x8fc1,	// (0x00028cbd) bg_touch_area_indi_pane_cp02_ParamLimits

0x8fc1,	// (0x00028cbd) bg_touch_area_indi_pane_cp02

0x8fd9,	// (0x00028cd5) bg_touch_area_indi_pane_cp03_ParamLimits

0x8fd9,	// (0x00028cd5) bg_touch_area_indi_pane_cp03

0x8ff3,	// (0x00028cef) popup_slider_window_g1_ParamLimits

0x900f,	// (0x00028d0b) popup_slider_window_g2_ParamLimits

0x902b,	// (0x00028d27) popup_slider_window_g3_ParamLimits

0xfcee,	// (0x0002f9ea) popup_slider_window_g_ParamLimits

0x9047,	// (0x00028d43) popup_slider_window_t1_ParamLimits

0x908d,	// (0x00028d89) small_volume_slider_vertical_pane_ParamLimits

0xd31d,	// (0x0002d019) cell_graphic2_pane_ParamLimits

0xd36b,	// (0x0002d067) bg_button_pane_cp10_ParamLimits

0xd36b,	// (0x0002d067) bg_button_pane_cp10

0xd37e,	// (0x0002d07a) bg_button_pane_cp11_ParamLimits

0xd37e,	// (0x0002d07a) bg_button_pane_cp11

0xd391,	// (0x0002d08d) graphic2_pages_pane_g1_ParamLimits

0xd391,	// (0x0002d08d) graphic2_pages_pane_g1

0xd3ac,	// (0x0002d0a8) graphic2_pages_pane_g2_ParamLimits

0xd3ac,	// (0x0002d0a8) graphic2_pages_pane_g2

0x0001,

0xfdb2,	// (0x0002faae) graphic2_pages_pane_g_ParamLimits

0xfdb2,	// (0x0002faae) graphic2_pages_pane_g

0xd3c4,	// (0x0002d0c0) graphic2_pages_pane_t1_ParamLimits

0xd3c4,	// (0x0002d0c0) graphic2_pages_pane_t1

0xd3da,	// (0x0002d0d6) cell_graphic2_control_pane_ParamLimits

0xd3da,	// (0x0002d0d6) cell_graphic2_control_pane

0xd3fb,	// (0x0002d0f7) cell_graphic2_pane_g1_ParamLimits

0xd3fb,	// (0x0002d0f7) cell_graphic2_pane_g1

0xd408,	// (0x0002d104) cell_graphic2_pane_g2_ParamLimits

0xd408,	// (0x0002d104) cell_graphic2_pane_g2

0xd415,	// (0x0002d111) cell_graphic2_pane_g3_ParamLimits

0xd415,	// (0x0002d111) cell_graphic2_pane_g3

0xd422,	// (0x0002d11e) cell_graphic2_pane_g4_ParamLimits

0xd422,	// (0x0002d11e) cell_graphic2_pane_g4

0xd42f,	// (0x0002d12b) cell_graphic2_pane_g5_ParamLimits

0xd42f,	// (0x0002d12b) cell_graphic2_pane_g5

0x0004,

0xfdb7,	// (0x0002fab3) cell_graphic2_pane_g_ParamLimits

0xfdb7,	// (0x0002fab3) cell_graphic2_pane_g

0xd44a,	// (0x0002d146) cell_graphic2_pane_t1_ParamLimits

0xd44a,	// (0x0002d146) cell_graphic2_pane_t1

0x3a69,	// (0x00023765) grid_highlight_pane_cp11_ParamLimits

0x3a69,	// (0x00023765) grid_highlight_pane_cp11

0x1f07,	// (0x00021c03) bg_button_pane_cp05

0xd473,	// (0x0002d16f) cell_graphic2_control_pane_g1

0x6097,	// (0x00025d93) bg_touch_area_indi_pane_g1

0x9e86,	// (0x00029b82) aid_cmod_rocker_key_size

0x9e90,	// (0x00029b8c) aid_cmode_itu_key_size

0x9e9a,	// (0x00029b96) main_cmode_video_pane

0x9ea4,	// (0x00029ba0) main_comp_mode_itu_pane

0x9eb0,	// (0x00029bac) main_comp_mode_rocker_pane

0x9ebc,	// (0x00029bb8) cell_cmode_rocker_pane_ParamLimits

0x9ebc,	// (0x00029bb8) cell_cmode_rocker_pane

0x9ece,	// (0x00029bca) cell_cmode_itu_pane_ParamLimits

0x9ece,	// (0x00029bca) cell_cmode_itu_pane

0x24d1,	// (0x000221cd) bg_button_pane_cp06_ParamLimits

0x24d1,	// (0x000221cd) bg_button_pane_cp06

0x6312,	// (0x0002600e) cell_cmode_rocker_pane_g1_ParamLimits

0x6312,	// (0x0002600e) cell_cmode_rocker_pane_g1

0x9111,	// (0x00028e0d) cell_cmode_rocker_pane_g2_ParamLimits

0x9111,	// (0x00028e0d) cell_cmode_rocker_pane_g2

0x0001,

0xfdc7,	// (0x0002fac3) cell_cmode_rocker_pane_g_ParamLimits

0xfdc7,	// (0x0002fac3) cell_cmode_rocker_pane_g

0x1b8a,	// (0x00021886) bg_button_pane_cp07

0x9ee3,	// (0x00029bdf) cell_cmode_itu_pane_g1

0x9eec,	// (0x00029be8) cell_cmode_itu_pane_t1

0x9efa,	// (0x00029bf6) cell_cmode_itu_pane_t2

0x0001,

0xfdcc,	// (0x0002fac8) cell_cmode_itu_pane_t

0x92a0,	// (0x00028f9c) aid_touch_ctrl_left

0x92a8,	// (0x00028fa4) aid_touch_ctrl_right

0x1b8a,	// (0x00021886) compa_mode_pane

0xd49b,	// (0x0002d197) aid_cmod_rocker_key_size_cp

0xd4a5,	// (0x0002d1a1) aid_cmode_itu_key_size_cp

0x9f08,	// (0x00029c04) compa_mode_pane_g1

0x9f10,	// (0x00029c0c) compa_mode_pane_g2

0x9f18,	// (0x00029c14) compa_mode_pane_g3

0x0002,

0xfdd1,	// (0x0002facd) compa_mode_pane_g

0xd4af,	// (0x0002d1ab) main_comp_mode_itu_pane_cp

0xd4b7,	// (0x0002d1b3) main_comp_mode_rocker_pane_cp

0xd4bf,	// (0x0002d1bb) cell_cmode_itu_pane_cp_ParamLimits

0xd4bf,	// (0x0002d1bb) cell_cmode_itu_pane_cp

0xd4d4,	// (0x0002d1d0) cell_cmode_rocker_pane_cp_ParamLimits

0xd4d4,	// (0x0002d1d0) cell_cmode_rocker_pane_cp

0x24d1,	// (0x000221cd) bg_button_pane_cp06_cp_ParamLimits

0x24d1,	// (0x000221cd) bg_button_pane_cp06_cp

0x6312,	// (0x0002600e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6312,	// (0x0002600e) cell_cmode_rocker_pane_g1_cp

0x6097,	// (0x00025d93) cell_cmode_rocker_pane_g2_cp

0x1b8a,	// (0x00021886) bg_button_pane_cp07_cp

0xd4e6,	// (0x0002d1e2) cell_cmode_itu_pane_g1_cp

0xd4ef,	// (0x0002d1eb) cell_cmode_itu_pane_t1_cp

0xd4ef,	// (0x0002d1eb) cell_cmode_itu_pane_t2_cp

0x4f34,	// (0x00024c30) settings_code_pane_cp2

0x1c7e,	// (0x0002197a) bg_popup_window_pane_cp3_ParamLimits

0x20d5,	// (0x00021dd1) heading_pane_cp3_ParamLimits

0x20e1,	// (0x00021ddd) listscroll_popup_graphic_pane_ParamLimits

0xbf4b,	// (0x0002bc47) fep_hwr_aid_pane_ParamLimits

0xc6e0,	// (0x0002c3dc) aid_touch_sctrl_top_ParamLimits

0xc6fb,	// (0x0002c3f7) sctrl_sk_top_pane_g1_ParamLimits

0xc1a2,	// (0x0002be9e) sctrl_sk_top_pane_g2_ParamLimits

0xfd07,	// (0x0002fa03) sctrl_sk_top_pane_g_ParamLimits

0xc708,	// (0x0002c404) sctrl_sk_top_pane_t1_ParamLimits

0xc6e0,	// (0x0002c3dc) aid_touch_sctrl_bottom_ParamLimits

0xc708,	// (0x0002c404) sctrl_sk_bottom_pane_t1_ParamLimits

0x91ea,	// (0x00028ee6) aid_area_touch_clock

0xcd6d,	// (0x0002ca69) aid_vkb2_area_top_pane_cell_ParamLimits

0xcd6d,	// (0x0002ca69) aid_vkb2_area_top_pane_cell

0xceb8,	// (0x0002cbb4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xceb8,	// (0x0002cbb4) aid_vkb2_area_bottom_pane_cell

0x9700,	// (0x000293fc) popup_char_count_window

0x9f20,	// (0x00029c1c) popup_char_count_window_g1

0x9f29,	// (0x00029c25) popup_char_count_window_g2

0x9f32,	// (0x00029c2e) popup_char_count_window_g3

0x0002,

0xfdd8,	// (0x0002fad4) popup_char_count_window_g

0x9f3b,	// (0x00029c37) popup_char_count_window_t1

0xcc3b,	// (0x0002c937) popup_fep_char_preview_window_ParamLimits

0xcc3b,	// (0x0002c937) popup_fep_char_preview_window

0xcd8b,	// (0x0002ca87) vkb2_top_candi_pane_ParamLimits

0xcd8b,	// (0x0002ca87) vkb2_top_candi_pane

0xd4fd,	// (0x0002d1f9) cell_vkb2_top_candi_pane_ParamLimits

0xd4fd,	// (0x0002d1f9) cell_vkb2_top_candi_pane

0xd54a,	// (0x0002d246) bg_popup_fep_char_preview_window_ParamLimits

0xd54a,	// (0x0002d246) bg_popup_fep_char_preview_window

0xd558,	// (0x0002d254) popup_fep_char_preview_window_t1_ParamLimits

0xd558,	// (0x0002d254) popup_fep_char_preview_window_t1

0x9f59,	// (0x00029c55) bg_popup_fep_char_preview_window_g1

0x9f51,	// (0x00029c4d) bg_popup_fep_char_preview_window_g2

0x9f49,	// (0x00029c45) bg_popup_fep_char_preview_window_g3

0x9f79,	// (0x00029c75) bg_popup_fep_char_preview_window_g4

0x9f71,	// (0x00029c6d) bg_popup_fep_char_preview_window_g5

0xd592,	// (0x0002d28e) bg_popup_fep_char_preview_window_g6

0x9f69,	// (0x00029c65) bg_popup_fep_char_preview_window_g7

0x9f61,	// (0x00029c5d) bg_popup_fep_char_preview_window_g8

0x9f81,	// (0x00029c7d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddf,	// (0x0002fadb) bg_popup_fep_char_preview_window_g

0xc1a2,	// (0x0002be9e) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc1a2,	// (0x0002be9e) cell_vkb2_top_candi_pane_g1

0xc1b0,	// (0x0002beac) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc1b0,	// (0x0002beac) cell_vkb2_top_candi_pane_g2

0x9f89,	// (0x00029c85) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9f89,	// (0x00029c85) cell_vkb2_top_candi_pane_g3

0xd59a,	// (0x0002d296) cell_vkb2_top_candi_pane_g4_ParamLimits

0xd59a,	// (0x0002d296) cell_vkb2_top_candi_pane_g4

0x67b5,	// (0x000264b1) cell_vkb2_top_candi_pane_g5_ParamLimits

0x67b5,	// (0x000264b1) cell_vkb2_top_candi_pane_g5

0xd5bb,	// (0x0002d2b7) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd5bb,	// (0x0002d2b7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf2,	// (0x0002faee) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf2,	// (0x0002faee) cell_vkb2_top_candi_pane_g

0xd5c9,	// (0x0002d2c5) cell_vkb2_top_candi_pane_t1

0xbd5a,	// (0x0002ba56) aid_size_touch_slider_mark_ParamLimits

0xbd5a,	// (0x0002ba56) aid_size_touch_slider_mark

0xd25b,	// (0x0002cf57) grid_graphic2_catg_pane_ParamLimits

0xd25b,	// (0x0002cf57) grid_graphic2_catg_pane

0xd2f9,	// (0x0002cff5) popup_grid_graphic2_window_t1_ParamLimits

0xd2f9,	// (0x0002cff5) popup_grid_graphic2_window_t1

0xd30b,	// (0x0002d007) popup_grid_graphic2_window_t2_ParamLimits

0xd30b,	// (0x0002d007) popup_grid_graphic2_window_t2

0x0001,

0xfdad,	// (0x0002faa9) popup_grid_graphic2_window_t_ParamLimits

0xfdad,	// (0x0002faa9) popup_grid_graphic2_window_t

0x1f07,	// (0x00021c03) bg_button_pane_cp05_ParamLimits

0xd473,	// (0x0002d16f) cell_graphic2_control_pane_g1_ParamLimits

0xd5e8,	// (0x0002d2e4) cell_graphic2_catg_pane_ParamLimits

0xd5e8,	// (0x0002d2e4) cell_graphic2_catg_pane

0x1b8a,	// (0x00021886) bg_button_pane_cp12

0xd5fa,	// (0x0002d2f6) cell_graphic2_catg_pane_g1

0x91b6,	// (0x00028eb2) cell_tb_ext_pane_t1_ParamLimits

0xd015,	// (0x0002cd11) vkb2_top_cell_right_narrow_pane_ParamLimits

0xd015,	// (0x0002cd11) vkb2_top_cell_right_narrow_pane

0xd02d,	// (0x0002cd29) vkb2_top_cell_right_wide_pane_ParamLimits

0xd02d,	// (0x0002cd29) vkb2_top_cell_right_wide_pane

0xbf3d,	// (0x0002bc39) bg_vkb2_func_pane_ParamLimits

0xbf3d,	// (0x0002bc39) bg_vkb2_func_pane

0xd09e,	// (0x0002cd9a) vkb2_top_cell_left_pane_g1_ParamLimits

0xbf3d,	// (0x0002bc39) bg_vkb2_fuc_pane_cp03_ParamLimits

0xbf3d,	// (0x0002bc39) bg_vkb2_fuc_pane_cp03

0xd0fc,	// (0x0002cdf8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3989,	// (0x00023685) bg_vkb2_func_pane_g1

0x3981,	// (0x0002367d) bg_vkb2_func_pane_g2

0x3991,	// (0x0002368d) bg_vkb2_func_pane_g3

0x3999,	// (0x00023695) bg_vkb2_func_pane_g4

0x39a1,	// (0x0002369d) bg_vkb2_func_pane_g5

0x39a9,	// (0x000236a5) bg_vkb2_func_pane_g6

0x39b9,	// (0x000236b5) bg_vkb2_func_pane_g7

0x39b1,	// (0x000236ad) bg_vkb2_func_pane_g8

0x3979,	// (0x00023675) bg_vkb2_func_pane_g9

0x0008,

0xfdff,	// (0x0002fafb) bg_vkb2_func_pane_g

0xbf3d,	// (0x0002bc39) bg_vkb2_fuc_pane_cp01_ParamLimits

0xbf3d,	// (0x0002bc39) bg_vkb2_fuc_pane_cp01

0xd09e,	// (0x0002cd9a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xd09e,	// (0x0002cd9a) vkb2_top_cell_right_wide_pane_g1

0xbf3d,	// (0x0002bc39) bg_vkb2_fuc_pane_cp02_ParamLimits

0xbf3d,	// (0x0002bc39) bg_vkb2_fuc_pane_cp02

0xd0fc,	// (0x0002cdf8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xd0fc,	// (0x0002cdf8) vkb2_top_cell_right_narrow_pane_g1

0xc58d,	// (0x0002c289) aid_touch_area_decrease_ParamLimits

0xc58d,	// (0x0002c289) aid_touch_area_decrease

0xc5b1,	// (0x0002c2ad) aid_touch_area_increase_ParamLimits

0xc5b1,	// (0x0002c2ad) aid_touch_area_increase

0xc5bd,	// (0x0002c2b9) aid_touch_area_mute_ParamLimits

0xc5bd,	// (0x0002c2b9) aid_touch_area_mute

0xc5e1,	// (0x0002c2dd) aid_touch_area_slider_ParamLimits

0xc5e1,	// (0x0002c2dd) aid_touch_area_slider

0xc61b,	// (0x0002c317) popup_slider_window_g4_ParamLimits

0xc61b,	// (0x0002c317) popup_slider_window_g4

0xc627,	// (0x0002c323) popup_slider_window_g5_ParamLimits

0xc627,	// (0x0002c323) popup_slider_window_g5

0xc649,	// (0x0002c345) popup_slider_window_g6_ParamLimits

0xc649,	// (0x0002c345) popup_slider_window_g6

0x9075,	// (0x00028d71) popup_slider_window_t2_ParamLimits

0x9075,	// (0x00028d71) popup_slider_window_t2

0x0001,

0xfcfb,	// (0x0002f9f7) popup_slider_window_t_ParamLimits

0xfcfb,	// (0x0002f9f7) popup_slider_window_t

0xc65b,	// (0x0002c357) slider_pane_ParamLimits

0xc65b,	// (0x0002c357) slider_pane

0x9faa,	// (0x00029ca6) slider_pane_g1_ParamLimits

0x9faa,	// (0x00029ca6) slider_pane_g1

0x9fbe,	// (0x00029cba) slider_pane_g2_ParamLimits

0x9fbe,	// (0x00029cba) slider_pane_g2

0x9fd4,	// (0x00029cd0) slider_pane_g3_ParamLimits

0x9fd4,	// (0x00029cd0) slider_pane_g3

0x0003,

0xfe12,	// (0x0002fb0e) slider_pane_g_ParamLimits

0xfe12,	// (0x0002fb0e) slider_pane_g

0xb97f,	// (0x0002b67b) popup_tb_float_extension_window_ParamLimits

0xb97f,	// (0x0002b67b) popup_tb_float_extension_window

0xa000,	// (0x00029cfc) aid_size_cell_tb_float_ext

0x1b8a,	// (0x00021886) bg_popup_sub_window_cp28

0xa00c,	// (0x00029d08) grid_tb_float_ext_pane

0xa016,	// (0x00029d12) cell_tb_float_ext_pane_ParamLimits

0xa016,	// (0x00029d12) cell_tb_float_ext_pane

0xa030,	// (0x00029d2c) cell_tb_float_ext_pane_g1

0xa039,	// (0x00029d35) grid_highlight_pane_cp12

0xc08c,	// (0x0002bd88) cell_last_hwr_side_pane_ParamLimits

0xc08c,	// (0x0002bd88) cell_last_hwr_side_pane

0x6097,	// (0x00025d93) cell_last_hwr_side_pane_g1

0xa042,	// (0x00029d3e) cell_last_hwr_side_pane_g2

0x0001,

0xfe1b,	// (0x0002fb17) cell_last_hwr_side_pane_g

0xcf84,	// (0x0002cc80) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcf84,	// (0x0002cc80) vkb2_area_bottom_space_btn_pane

0xc1a2,	// (0x0002be9e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x97e8,	// (0x000294e4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xd5c9,	// (0x0002d2c5) cell_vkb2_top_candi_pane_t1_ParamLimits

0xd603,	// (0x0002d2ff) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xd603,	// (0x0002d2ff) vkb2_area_bottom_space_btn_pane_g1

0xd63d,	// (0x0002d339) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xd63d,	// (0x0002d339) vkb2_area_bottom_space_btn_pane_g2

0xd673,	// (0x0002d36f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xd673,	// (0x0002d36f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe20,	// (0x0002fb1c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe20,	// (0x0002fb1c) vkb2_area_bottom_space_btn_pane_g

0xc000,	// (0x0002bcfc) cel_fep_hwr_func_pane_ParamLimits

0xc000,	// (0x0002bcfc) cel_fep_hwr_func_pane

0xc03c,	// (0x0002bd38) cell_hwr_side_button_pane_ParamLimits

0xc03c,	// (0x0002bd38) cell_hwr_side_button_pane

0x91ea,	// (0x00028ee6) aid_area_touch_clock_ParamLimits

0x1f07,	// (0x00021c03) bg_uniindi_top_pane_ParamLimits

0x91fc,	// (0x00028ef8) uniindi_top_pane_g1_ParamLimits

0x9212,	// (0x00028f0e) uniindi_top_pane_g2_ParamLimits

0x921e,	// (0x00028f1a) uniindi_top_pane_g3_ParamLimits

0x922f,	// (0x00028f2b) uniindi_top_pane_g4_ParamLimits

0xfd33,	// (0x0002fa2f) uniindi_top_pane_g_ParamLimits

0x923c,	// (0x00028f38) uniindi_top_pane_t1_ParamLimits

0x1f07,	// (0x00021c03) bg_vkb2_func_pane_cp01_ParamLimits

0x1f07,	// (0x00021c03) bg_vkb2_func_pane_cp01

0xd6bd,	// (0x0002d3b9) cel_fep_hwr_func_pane_g1_ParamLimits

0xd6bd,	// (0x0002d3b9) cel_fep_hwr_func_pane_g1

0x1f07,	// (0x00021c03) bg_vkb2_func_pane_cp02_ParamLimits

0x1f07,	// (0x00021c03) bg_vkb2_func_pane_cp02

0xd6bd,	// (0x0002d3b9) cell_hwr_side_button_pane_g1_ParamLimits

0xd6bd,	// (0x0002d3b9) cell_hwr_side_button_pane_g1

0x37fc,	// (0x000234f8) status_pane_g4_ParamLimits

0x37fc,	// (0x000234f8) status_pane_g4

0x3814,	// (0x00023510) status_pane_t1

0x5d9a,	// (0x00025a96) form2_midp_gauge_slider_cont_pane

0x5da2,	// (0x00025a9e) form2_midp_gauge_slider_pane_t1_ParamLimits

0x5db4,	// (0x00025ab0) form2_midp_gauge_slider_pane_t2_ParamLimits

0x5dc6,	// (0x00025ac2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafa,	// (0x0002f7f6) form2_midp_gauge_slider_pane_t_ParamLimits

0x5dd8,	// (0x00025ad4) form2_midp_slider_pane_ParamLimits

0xcbfb,	// (0x0002c8f7) aid_size_cell_func_vkb2_ParamLimits

0xcbfb,	// (0x0002c8f7) aid_size_cell_func_vkb2

0x9fec,	// (0x00029ce8) slider_pane_g4_ParamLimits

0x9fec,	// (0x00029ce8) slider_pane_g4

0xd6cb,	// (0x0002d3c7) form2_midp_gauge_slider_pane_t2_cp01

0xd6d9,	// (0x0002d3d5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd6d9,	// (0x0002d3d5) form2_midp_gauge_slider_pane_t3_cp01

0xd6f6,	// (0x0002d3f2) form2_midp_slider_pane_cp01

0x1b8a,	// (0x00021886) navi_smil_pane

0xd721,	// (0x0002d41d) navi_smil_pane_g1

0xd729,	// (0x0002d425) navi_smil_pane_t1

0xd6ff,	// (0x0002d3fb) form2_midp_slider_pane_g1

0xd708,	// (0x0002d404) form2_midp_slider_pane_g2

0xd710,	// (0x0002d40c) form2_midp_slider_pane_g3

0xd6ff,	// (0x0002d3fb) form2_midp_slider_pane_g4

0x1868,	// (0x00021564) form2_midp_slider_pane_g5

0x0004,

0xfe29,	// (0x0002fb25) form2_midp_slider_pane_g

0xd6ad,	// (0x0002d3a9) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xd6ad,	// (0x0002d3a9) vkb2_area_bottom_space_btn_pane_g4

0x3631,	// (0x0002332d) lc0_navi_pane_ParamLimits

0x3631,	// (0x0002332d) lc0_navi_pane

0x36a7,	// (0x000233a3) lc0_stat_indi_pane_ParamLimits

0x36a7,	// (0x000233a3) lc0_stat_indi_pane

0x36be,	// (0x000233ba) ls0_title_pane_ParamLimits

0x36be,	// (0x000233ba) ls0_title_pane

0x24d1,	// (0x000221cd) bg_popup_sub_pane_cp14_ParamLimits

0x91d1,	// (0x00028ecd) list_uniindi_pane_ParamLimits

0x91dd,	// (0x00028ed9) uniindi_top_pane_ParamLimits

0x9278,	// (0x00028f74) list_single_uniindi_pane_g1_ParamLimits

0x928b,	// (0x00028f87) list_single_uniindi_pane_t1_ParamLimits

0xd737,	// (0x0002d433) lc0_stat_clock_pane_ParamLimits

0xd737,	// (0x0002d433) lc0_stat_clock_pane

0x188b,	// (0x00021587) lc0_stat_indi_pane_g1_ParamLimits

0x188b,	// (0x00021587) lc0_stat_indi_pane_g1

0x187e,	// (0x0002157a) lc0_stat_indi_pane_g2_ParamLimits

0x187e,	// (0x0002157a) lc0_stat_indi_pane_g2

0x0001,

0xfe34,	// (0x0002fb30) lc0_stat_indi_pane_g_ParamLimits

0xfe34,	// (0x0002fb30) lc0_stat_indi_pane_g

0xd744,	// (0x0002d440) lc0_uni_indicator_pane_ParamLimits

0xd744,	// (0x0002d440) lc0_uni_indicator_pane

0xd751,	// (0x0002d44d) ls0_title_pane_g1_ParamLimits

0xd751,	// (0x0002d44d) ls0_title_pane_g1

0x18a5,	// (0x000215a1) ls0_title_pane_t1_ParamLimits

0x18a5,	// (0x000215a1) ls0_title_pane_t1

0xd765,	// (0x0002d461) lc0_uni_indicator_pane_g1_ParamLimits

0xd765,	// (0x0002d461) lc0_uni_indicator_pane_g1

0xd77b,	// (0x0002d477) lc0_stat_clock_pane_t1

0xac06,	// (0x0002a902) main_ai5_pane

0xd789,	// (0x0002d485) ai5_sk_pane_ParamLimits

0xd789,	// (0x0002d485) ai5_sk_pane

0x18f1,	// (0x000215ed) cell_ai5_widget_pane_ParamLimits

0x18f1,	// (0x000215ed) cell_ai5_widget_pane

0xd796,	// (0x0002d492) aid_size_cell_widget_grid

0xd7ac,	// (0x0002d4a8) bg_ai5_widget_pane_ParamLimits

0xd7ac,	// (0x0002d4a8) bg_ai5_widget_pane

0xd816,	// (0x0002d512) cell_ai5_widget_pane_g2

0xd826,	// (0x0002d522) cell_ai5_widget_pane_g3

0xd845,	// (0x0002d541) cell_ai5_widget_pane_g4

0xd851,	// (0x0002d54d) cell_ai5_widget_pane_g5

0xd85d,	// (0x0002d559) cell_ai5_widget_pane_g6

0xd869,	// (0x0002d565) cell_ai5_widget_pane_g7

0xd8b1,	// (0x0002d5ad) cell_ai5_widget_pane_t1_ParamLimits

0xd8b1,	// (0x0002d5ad) cell_ai5_widget_pane_t1

0xd8ce,	// (0x0002d5ca) cell_ai5_widget_pane_t2_ParamLimits

0xd8ce,	// (0x0002d5ca) cell_ai5_widget_pane_t2

0xd8e6,	// (0x0002d5e2) cell_ai5_widget_pane_t3_ParamLimits

0xd8e6,	// (0x0002d5e2) cell_ai5_widget_pane_t3

0xd8fe,	// (0x0002d5fa) cell_ai5_widget_pane_t4_ParamLimits

0xd8fe,	// (0x0002d5fa) cell_ai5_widget_pane_t4

0xd918,	// (0x0002d614) cell_ai5_widget_pane_t5_ParamLimits

0xd918,	// (0x0002d614) cell_ai5_widget_pane_t5

0xd937,	// (0x0002d633) cell_ai5_widget_pane_t6_ParamLimits

0xd937,	// (0x0002d633) cell_ai5_widget_pane_t6

0xd949,	// (0x0002d645) cell_ai5_widget_pane_t7_ParamLimits

0xd949,	// (0x0002d645) cell_ai5_widget_pane_t7

0xd962,	// (0x0002d65e) cell_ai5_widget_pane_t8_ParamLimits

0xd962,	// (0x0002d65e) cell_ai5_widget_pane_t8

0x0009,

0xfe4e,	// (0x0002fb4a) cell_ai5_widget_pane_t_ParamLimits

0xfe4e,	// (0x0002fb4a) cell_ai5_widget_pane_t

0xd9ae,	// (0x0002d6aa) grid_ai5_widget_pane

0x24d1,	// (0x000221cd) highlight_cell_ai5_widget_pane_ParamLimits

0x24d1,	// (0x000221cd) highlight_cell_ai5_widget_pane

0x19c1,	// (0x000216bd) ai5_sk_left_pane

0x19cb,	// (0x000216c7) ai5_sk_middle_pane

0x19d5,	// (0x000216d1) ai5_sk_right_pane

0xd9c2,	// (0x0002d6be) bg_ai5_widget_pane_g1_ParamLimits

0xd9c2,	// (0x0002d6be) bg_ai5_widget_pane_g1

0xd9ce,	// (0x0002d6ca) bg_ai5_widget_pane_g2_ParamLimits

0xd9ce,	// (0x0002d6ca) bg_ai5_widget_pane_g2

0xd9da,	// (0x0002d6d6) bg_ai5_widget_pane_g3_ParamLimits

0xd9da,	// (0x0002d6d6) bg_ai5_widget_pane_g3

0xd9e6,	// (0x0002d6e2) bg_ai5_widget_pane_g4_ParamLimits

0xd9e6,	// (0x0002d6e2) bg_ai5_widget_pane_g4

0xd9f2,	// (0x0002d6ee) bg_ai5_widget_pane_g5_ParamLimits

0xd9f2,	// (0x0002d6ee) bg_ai5_widget_pane_g5

0xd9fe,	// (0x0002d6fa) bg_ai5_widget_pane_g6_ParamLimits

0xd9fe,	// (0x0002d6fa) bg_ai5_widget_pane_g6

0xda0a,	// (0x0002d706) bg_ai5_widget_pane_g7_ParamLimits

0xda0a,	// (0x0002d706) bg_ai5_widget_pane_g7

0xda16,	// (0x0002d712) bg_ai5_widget_pane_g8_ParamLimits

0xda16,	// (0x0002d712) bg_ai5_widget_pane_g8

0xda22,	// (0x0002d71e) bg_ai5_widget_pane_g9_ParamLimits

0xda22,	// (0x0002d71e) bg_ai5_widget_pane_g9

0x0008,

0xfe63,	// (0x0002fb5f) bg_ai5_widget_pane_g_ParamLimits

0xfe63,	// (0x0002fb5f) bg_ai5_widget_pane_g

0xda55,	// (0x0002d751) cell_shortcut_ai5_widget_pane_ParamLimits

0xda55,	// (0x0002d751) cell_shortcut_ai5_widget_pane

0x313b,	// (0x00022e37) bg_cell_shortcut_ai5_widget_pane

0xda66,	// (0x0002d762) cell_grid_ai5_widget_pane_g1

0xda6f,	// (0x0002d76b) highlight_cell_shortcut_ai5_widget_pane

0x3989,	// (0x00023685) ai5_sk_left_pane_g1

0xda77,	// (0x0002d773) ai5_sk_left_pane_g2

0xda7f,	// (0x0002d77b) ai5_sk_left_pane_g3

0xda87,	// (0x0002d783) ai5_sk_left_pane_g4

0x0003,

0xfe76,	// (0x0002fb72) ai5_sk_left_pane_g

0xda8f,	// (0x0002d78b) ai5_sk_left_pane_t1

0x3981,	// (0x0002367d) ai5_sk_right_pane_g1

0xda9d,	// (0x0002d799) ai5_sk_right_pane_g2

0xdaa5,	// (0x0002d7a1) ai5_sk_right_pane_g3

0xdaad,	// (0x0002d7a9) ai5_sk_right_pane_g4

0x0003,

0xfe7f,	// (0x0002fb7b) ai5_sk_right_pane_g

0xdab5,	// (0x0002d7b1) ai5_sk_right_pane_t1

0x3981,	// (0x0002367d) ai5_sk_middle_pane_g1

0x3989,	// (0x00023685) ai5_sk_middle_pane_g2

0x39a1,	// (0x0002369d) ai5_sk_middle_pane_g3

0xdaa5,	// (0x0002d7a1) ai5_sk_middle_pane_g4

0xda7f,	// (0x0002d77b) ai5_sk_middle_pane_g5

0xdac3,	// (0x0002d7bf) ai5_sk_middle_pane_g6

0x19df,	// (0x000216db) ai5_sk_middle_pane_g7

0x0006,

0xfe88,	// (0x0002fb84) ai5_sk_middle_pane_g

0x34bd,	// (0x000231b9) aid_touch_area_size_lc0_ParamLimits

0x34bd,	// (0x000231b9) aid_touch_area_size_lc0

0xc1d1,	// (0x0002becd) cell_hwr_candidate_pane_t1_ParamLimits

0x34d9,	// (0x000231d5) aid_touch_navi_pane

0x37a6,	// (0x000234a2) status_dt_navi_pane_ParamLimits

0x37a6,	// (0x000234a2) status_dt_navi_pane

0x37b3,	// (0x000234af) status_dt_sta_pane_ParamLimits

0x37b3,	// (0x000234af) status_dt_sta_pane

0x19e7,	// (0x000216e3) dt_sta_controll_pane

0x19f4,	// (0x000216f0) dt_sta_indi_pane

0x1a01,	// (0x000216fd) dt_sta_title_pane

0x1f07,	// (0x00021c03) bg_dt_sta_indi_pane_ParamLimits

0x1f07,	// (0x00021c03) bg_dt_sta_indi_pane

0xdacb,	// (0x0002d7c7) dt_sta_battery_pane

0xdad3,	// (0x0002d7cf) dt_sta_indi_pane_g1

0xdadc,	// (0x0002d7d8) dt_sta_indi_pane_g2

0xdae5,	// (0x0002d7e1) dt_sta_indi_pane_g3

0x0002,

0xfe97,	// (0x0002fb93) dt_sta_indi_pane_g

0xdaee,	// (0x0002d7ea) dt_sta_signal_pane

0x24d1,	// (0x000221cd) bg_dt_sta_title_pane_ParamLimits

0x24d1,	// (0x000221cd) bg_dt_sta_title_pane

0x4851,	// (0x0002454d) dt_sta_title_pane_g1

0xdaf7,	// (0x0002d7f3) dt_sta_title_pane_t1_ParamLimits

0xdaf7,	// (0x0002d7f3) dt_sta_title_pane_t1

0x1b8a,	// (0x00021886) bg_dt_sta_control_pane

0xdb0c,	// (0x0002d808) dt_sta_controll_pane_g1

0xdb15,	// (0x0002d811) bg_dt_sta_title_pane_g1

0xdb1e,	// (0x0002d81a) bg_dt_sta_title_pane_g2

0xdb27,	// (0x0002d823) bg_dt_sta_title_pane_g3

0x0002,

0xfe9e,	// (0x0002fb9a) bg_dt_sta_title_pane_g

0x6097,	// (0x00025d93) bg_dt_sta_indi_pane_g1

0xdb30,	// (0x0002d82c) dt_sta_signal_pane_g1

0xdb38,	// (0x0002d834) dt_sta_signal_pane_g2

0x0001,

0xfea5,	// (0x0002fba1) dt_sta_signal_pane_g

0xdb40,	// (0x0002d83c) dt_sta_battery_pane_g1

0xdb49,	// (0x0002d845) dt_sta_battery_pane_t1

0x6097,	// (0x00025d93) bg_dt_sta_control_pane_g1

0x2c40,	// (0x0002293c) fep_china_uni_eep_pane

0x2c48,	// (0x00022944) fep_china_uni_entry_pane_ParamLimits

0x2c58,	// (0x00022954) popup_fep_china_uni_window_g1_ParamLimits

0x2c68,	// (0x00022964) popup_fep_china_uni_window_g2_ParamLimits

0x2c68,	// (0x00022964) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0002f41a) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0002f41a) popup_fep_china_uni_window_g

0xdb58,	// (0x0002d854) fep_china_uni_eep_pane_g1

0xdb60,	// (0x0002d85c) fep_china_uni_eep_pane_t1

0xd718,	// (0x0002d414) aid_touch_area_size_smil_player

0x3629,	// (0x00023325) lc0_clock_pane

0x3808,	// (0x00023504) status_pane_g5_ParamLimits

0x3808,	// (0x00023504) status_pane_g5

0xb64c,	// (0x0002b348) popup_keymap_window

0x37c8,	// (0x000234c4) status_icon_pane

0xd826,	// (0x0002d522) cell_ai5_widget_pane_g3_ParamLimits

0xd845,	// (0x0002d541) cell_ai5_widget_pane_g4_ParamLimits

0xd851,	// (0x0002d54d) cell_ai5_widget_pane_g5_ParamLimits

0xd875,	// (0x0002d571) cell_ai5_widget_pane_g8_ParamLimits

0xd875,	// (0x0002d571) cell_ai5_widget_pane_g8

0xd889,	// (0x0002d585) cell_ai5_widget_pane_g9_ParamLimits

0xd889,	// (0x0002d585) cell_ai5_widget_pane_g9

0xd89d,	// (0x0002d599) cell_ai5_widget_pane_g10_ParamLimits

0xd89d,	// (0x0002d599) cell_ai5_widget_pane_g10

0xdb6f,	// (0x0002d86b) status_icon_pane_g1

0x1b8a,	// (0x00021886) bg_popup_sub_pane_cp13

0xdb77,	// (0x0002d873) popup_keymap_window_t1

0x341c,	// (0x00023118) control_pane_g6_ParamLimits

0x341c,	// (0x00023118) control_pane_g6

0x340f,	// (0x0002310b) control_pane_g7_ParamLimits

0x340f,	// (0x0002310b) control_pane_g7

0x3402,	// (0x000230fe) control_pane_g8_ParamLimits

0x3402,	// (0x000230fe) control_pane_g8

0x19e7,	// (0x000216e3) dt_sta_controll_pane_ParamLimits

0x19f4,	// (0x000216f0) dt_sta_indi_pane_ParamLimits

0x1a01,	// (0x000216fd) dt_sta_title_pane_ParamLimits

0x2409,	// (0x00022105) aid_size_touch_scroll_bar_cale

0xacdf,	// (0x0002a9db) popup_discreet_window_ParamLimits

0xacdf,	// (0x0002a9db) popup_discreet_window

0xad59,	// (0x0002aa55) popup_sk_window

0x408f,	// (0x00023d8b) bg_popup_sub_pane_cp28_ParamLimits

0x408f,	// (0x00023d8b) bg_popup_sub_pane_cp28

0xdb85,	// (0x0002d881) popup_discreet_window_g1_ParamLimits

0xdb85,	// (0x0002d881) popup_discreet_window_g1

0xdba5,	// (0x0002d8a1) popup_discreet_window_t1_ParamLimits

0xdba5,	// (0x0002d8a1) popup_discreet_window_t1

0xdbc3,	// (0x0002d8bf) popup_discreet_window_t2_ParamLimits

0xdbc3,	// (0x0002d8bf) popup_discreet_window_t2

0x0002,

0xfeaa,	// (0x0002fba6) popup_discreet_window_t_ParamLimits

0xfeaa,	// (0x0002fba6) popup_discreet_window_t

0xdc15,	// (0x0002d911) popup_sk_window_g1

0xdc1f,	// (0x0002d91b) popup_sk_window_g2

0x0001,

0xfeb1,	// (0x0002fbad) popup_sk_window_g

0xdc29,	// (0x0002d925) popup_sk_window_t1

0xdc37,	// (0x0002d933) popup_sk_window_t1_copy1

0xd816,	// (0x0002d512) cell_ai5_widget_pane_g2_ParamLimits

0xd974,	// (0x0002d670) cell_ai5_widget_pane_t9_ParamLimits

0xd974,	// (0x0002d670) cell_ai5_widget_pane_t9

0x1b8a,	// (0x00021886) main_fep_fshwr2_pane

0xdc45,	// (0x0002d941) aid_fshwr2_btn_pane

0xdc51,	// (0x0002d94d) aid_fshwr2_syb_pane

0xdc62,	// (0x0002d95e) aid_fshwr2_txt_pane

0xdc6e,	// (0x0002d96a) fshwr2_func_candi_pane

0xdc83,	// (0x0002d97f) fshwr2_hwr_syb_pane

0xdc9a,	// (0x0002d996) fshwr2_icf_pane

0x1b8a,	// (0x00021886) fshwr2_icf_bg_pane

0x1ac0,	// (0x000217bc) fshwr2_icf_pane_t1_ParamLimits

0x1ac0,	// (0x000217bc) fshwr2_icf_pane_t1

0x6097,	// (0x00025d93) fshwr2_func_candi_pane_g1

0xdcc3,	// (0x0002d9bf) fshwr2_func_candi_row_pane_ParamLimits

0xdcc3,	// (0x0002d9bf) fshwr2_func_candi_row_pane

0x1ad7,	// (0x000217d3) cell_fshwr2_syb_pane_ParamLimits

0x1ad7,	// (0x000217d3) cell_fshwr2_syb_pane

0x6312,	// (0x0002600e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6312,	// (0x0002600e) fshwr2_hwr_syb_pane_g1

0x1b8a,	// (0x00021886) bg_popup_call_pane_cp01

0xdcd4,	// (0x0002d9d0) fshwr2_func_candi_cell_pane_ParamLimits

0xdcd4,	// (0x0002d9d0) fshwr2_func_candi_cell_pane

0xdd05,	// (0x0002da01) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xdd05,	// (0x0002da01) fshwr2_func_candi_cell_bg_pane

0xdd1f,	// (0x0002da1b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xdd1f,	// (0x0002da1b) fshwr2_func_candi_cell_pane_g1

0xdd3f,	// (0x0002da3b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xdd3f,	// (0x0002da3b) fshwr2_func_candi_cell_pane_t1

0x1b8a,	// (0x00021886) bg_button_pane_cp08

0x313b,	// (0x00022e37) cell_fshwr2_syb_bg_pane

0x1af3,	// (0x000217ef) cell_fshwr2_syb_bg_pane_g1

0xdd52,	// (0x0002da4e) cell_fshwr2_syb_bg_pane_t1

0x24d1,	// (0x000221cd) main_tmo_pane

0x4b8e,	// (0x0002488a) uni_indicator_pane_g1_ParamLimits

0x4ba3,	// (0x0002489f) uni_indicator_pane_g2_ParamLimits

0x4bb9,	// (0x000248b5) uni_indicator_pane_g3_ParamLimits

0x4bcf,	// (0x000248cb) uni_indicator_pane_g4_ParamLimits

0x4bcf,	// (0x000248cb) uni_indicator_pane_g4

0x4be3,	// (0x000248df) uni_indicator_pane_g5_ParamLimits

0x4be3,	// (0x000248df) uni_indicator_pane_g5

0x4bf7,	// (0x000248f3) uni_indicator_pane_g6_ParamLimits

0x4bf7,	// (0x000248f3) uni_indicator_pane_g6

0xf91d,	// (0x0002f619) uni_indicator_pane_g_ParamLimits

0xc56f,	// (0x0002c26b) popup_tmo_note_window_ParamLimits

0xc56f,	// (0x0002c26b) popup_tmo_note_window

0xc759,	// (0x0002c455) fshwr2_bg_pane

0xdd30,	// (0x0002da2c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xdd30,	// (0x0002da2c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb6,	// (0x0002fbb2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb6,	// (0x0002fbb2) fshwr2_func_candi_cell_pane_g

0x6097,	// (0x00025d93) bg_popup_window_pane_cp01

0xdd61,	// (0x0002da5d) bg_popup_window_pane_g1_cp01

0xdd6a,	// (0x0002da66) bg_popup_window_pane_cp22_ParamLimits

0xdd6a,	// (0x0002da66) bg_popup_window_pane_cp22

0xdd78,	// (0x0002da74) listscroll_tmo_link_pane_ParamLimits

0xdd78,	// (0x0002da74) listscroll_tmo_link_pane

0xddb8,	// (0x0002dab4) popup_tmo_note_window_g1_ParamLimits

0xddb8,	// (0x0002dab4) popup_tmo_note_window_g1

0xddc5,	// (0x0002dac1) tmo_note_info_pane_ParamLimits

0xddc5,	// (0x0002dac1) tmo_note_info_pane

0x1afb,	// (0x000217f7) list_tmo_note_info_pane_g1_ParamLimits

0x1afb,	// (0x000217f7) list_tmo_note_info_pane_g1

0xdddf,	// (0x0002dadb) list_tmo_note_info_pane_g2_ParamLimits

0xdddf,	// (0x0002dadb) list_tmo_note_info_pane_g2

0x0001,

0xfebb,	// (0x0002fbb7) list_tmo_note_info_pane_g_ParamLimits

0xfebb,	// (0x0002fbb7) list_tmo_note_info_pane_g

0xddfb,	// (0x0002daf7) list_tmo_note_info_text_pane_ParamLimits

0xddfb,	// (0x0002daf7) list_tmo_note_info_text_pane

0xde3d,	// (0x0002db39) list_tmo_link_pane

0xde4a,	// (0x0002db46) scroll_pane_cp20

0xde57,	// (0x0002db53) list_single_tmo_link_pane_ParamLimits

0xde57,	// (0x0002db53) list_single_tmo_link_pane

0xde67,	// (0x0002db63) list_single_tmo_link_pane_t1

0xde75,	// (0x0002db71) list_tmo_note_info_text_pane_t1_ParamLimits

0xde75,	// (0x0002db71) list_tmo_note_info_text_pane_t1

0x2597,	// (0x00022293) aid_size_touch_scroll_bar_cp01_ParamLimits

0x2597,	// (0x00022293) aid_size_touch_scroll_bar_cp01

0xebe7,	// (0x0002e8e3) aid_size_touch_slider_marker

0xad41,	// (0x0002aa3d) popup_settings_window_ParamLimits

0xad41,	// (0x0002aa3d) popup_settings_window

0xed8b,	// (0x0002ea87) popup_candi_list_indi_window

0x34d9,	// (0x000231d5) aid_touch_navi_pane_ParamLimits

0xc6b4,	// (0x0002c3b0) rs_clock_indi_pane

0xc6bd,	// (0x0002c3b9) sctrl_sk_bottom_pane_ParamLimits

0xc6ce,	// (0x0002c3ca) sctrl_sk_top_pane_ParamLimits

0xcc55,	// (0x0002c951) popup_fep_tooltip_window

0xd796,	// (0x0002d492) aid_size_cell_widget_grid_ParamLimits

0xd80a,	// (0x0002d506) cell_ai5_widget_pane_g1_ParamLimits

0xd80a,	// (0x0002d506) cell_ai5_widget_pane_g1

0xd85d,	// (0x0002d559) cell_ai5_widget_pane_g6_ParamLimits

0xd869,	// (0x0002d565) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe39,	// (0x0002fb35) cell_ai5_widget_pane_g_ParamLimits

0xfe39,	// (0x0002fb35) cell_ai5_widget_pane_g

0xd998,	// (0x0002d694) cell_ai5_widget_pane_t10_ParamLimits

0xd998,	// (0x0002d694) cell_ai5_widget_pane_t10

0xd9ae,	// (0x0002d6aa) grid_ai5_widget_pane_ParamLimits

0xda2e,	// (0x0002d72a) cell_contacts_ai5_widget_pane_ParamLimits

0xda2e,	// (0x0002d72a) cell_contacts_ai5_widget_pane

0xdbd8,	// (0x0002d8d4) popup_discreet_window_t3_ParamLimits

0xdbd8,	// (0x0002d8d4) popup_discreet_window_t3

0xdcaf,	// (0x0002d9ab) popup_fshwr2_char_preview_window_ParamLimits

0xdcaf,	// (0x0002d9ab) popup_fshwr2_char_preview_window

0x1b12,	// (0x0002180e) tmo_note_info_pane_t1

0x1b27,	// (0x00021823) tmo_note_info_pane_t2

0x1b40,	// (0x0002183c) tmo_note_info_pane_t3

0xde19,	// (0x0002db15) tmo_note_info_pane_t4

0xde2b,	// (0x0002db27) tmo_note_info_pane_t5

0x0004,

0xfec0,	// (0x0002fbbc) tmo_note_info_pane_t

0xde3d,	// (0x0002db39) list_tmo_link_pane_ParamLimits

0xde4a,	// (0x0002db46) scroll_pane_cp20_ParamLimits

0x1b8a,	// (0x00021886) bg_popup_fep_char_preview_window_cp01

0xde8e,	// (0x0002db8a) popup_fshwr2_char_preview_window_t1

0xde9c,	// (0x0002db98) popup_candi_list_indi_window_g1

0xdea5,	// (0x0002dba1) bg_cell_contacts_ai5_widget_pane

0xdeb1,	// (0x0002dbad) cell_contacts_ai5_widget_pane_g1

0xdec4,	// (0x0002dbc0) cell_contacts_ai5_widget_pane_g2

0xded0,	// (0x0002dbcc) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecb,	// (0x0002fbc7) cell_contacts_ai5_widget_pane_g

0xdee2,	// (0x0002dbde) cell_contacts_ai5_widget_pane_t1

0x24d1,	// (0x000221cd) highlight_cell_shortcut_ai5_widget_pane_cp01

0xdf5c,	// (0x0002dc58) settings_container_pane

0x313b,	// (0x00022e37) listscroll_set_pane_copy1

0x570b,	// (0x00025407) scroll_pane_cp121_copy1

0xdf68,	// (0x0002dc64) set_content_pane_copy1

0xdf70,	// (0x0002dc6c) aid_height_set_list_copy1_ParamLimits

0xdf70,	// (0x0002dc6c) aid_height_set_list_copy1

0x4dea,	// (0x00024ae6) aid_size_parent_copy1_ParamLimits

0x4dea,	// (0x00024ae6) aid_size_parent_copy1

0xdf7c,	// (0x0002dc78) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdf7c,	// (0x0002dc78) button_value_adjust_pane_cp6_copy1

0x3477,	// (0x00023173) list_highlight_pane_cp2_copy1_ParamLimits

0x3477,	// (0x00023173) list_highlight_pane_cp2_copy1

0xdf90,	// (0x0002dc8c) list_set_pane_copy1_ParamLimits

0xdf90,	// (0x0002dc8c) list_set_pane_copy1

0xdef7,	// (0x0002dbf3) main_pane_set_t1_copy1_ParamLimits

0xdef7,	// (0x0002dbf3) main_pane_set_t1_copy1

0xdf31,	// (0x0002dc2d) main_pane_set_t2_copy1_ParamLimits

0xdf31,	// (0x0002dc2d) main_pane_set_t2_copy1

0xe03d,	// (0x0002dd39) main_pane_set_t3_copy1

0xe04b,	// (0x0002dd47) main_pane_set_t4_copy1

0xdf50,	// (0x0002dc4c) set_content_pane_g1_copy1_ParamLimits

0xdf50,	// (0x0002dc4c) set_content_pane_g1_copy1

0xe059,	// (0x0002dd55) setting_code_pane_copy1

0xe061,	// (0x0002dd5d) setting_slider_graphic_pane_copy1

0xe061,	// (0x0002dd5d) setting_slider_pane_copy1

0xe061,	// (0x0002dd5d) setting_text_pane_copy1

0xe061,	// (0x0002dd5d) setting_volume_pane_copy1

0xe059,	// (0x0002dd55) settings_code_pane_cp2_copy1

0xe069,	// (0x0002dd65) settings_code_pane_cp_copy1_ParamLimits

0xe069,	// (0x0002dd65) settings_code_pane_cp_copy1

0xe07d,	// (0x0002dd79) volume_set_pane_copy1

0xe085,	// (0x0002dd81) volume_set_pane_g10_copy1

0xe08d,	// (0x0002dd89) volume_set_pane_g1_copy1

0xe095,	// (0x0002dd91) volume_set_pane_g2_copy1

0xe09d,	// (0x0002dd99) volume_set_pane_g3_copy1

0xe0a5,	// (0x0002dda1) volume_set_pane_g4_copy1

0xe0ad,	// (0x0002dda9) volume_set_pane_g5_copy1

0xe0b5,	// (0x0002ddb1) volume_set_pane_g6_copy1

0xe0bd,	// (0x0002ddb9) volume_set_pane_g7_copy1

0xe0c5,	// (0x0002ddc1) volume_set_pane_g8_copy1

0xe0cd,	// (0x0002ddc9) volume_set_pane_g9_copy1

0x1c7e,	// (0x0002197a) bg_set_opt_pane_cp_copy1_ParamLimits

0x1c7e,	// (0x0002197a) bg_set_opt_pane_cp_copy1

0xe0d5,	// (0x0002ddd1) setting_slider_pane_t1_copy1_ParamLimits

0xe0d5,	// (0x0002ddd1) setting_slider_pane_t1_copy1

0xe0f3,	// (0x0002ddef) setting_slider_pane_t2_copy1_ParamLimits

0xe0f3,	// (0x0002ddef) setting_slider_pane_t2_copy1

0xe10d,	// (0x0002de09) setting_slider_pane_t3_copy1_ParamLimits

0xe10d,	// (0x0002de09) setting_slider_pane_t3_copy1

0xe125,	// (0x0002de21) slider_set_pane_copy1_ParamLimits

0xe125,	// (0x0002de21) slider_set_pane_copy1

0x2538,	// (0x00022234) set_opt_bg_pane_g1_copy2

0x2540,	// (0x0002223c) set_opt_bg_pane_g2_copy2

0xe13b,	// (0x0002de37) set_opt_bg_pane_g3_copy2

0x2550,	// (0x0002224c) set_opt_bg_pane_g4_copy2

0x2558,	// (0x00022254) set_opt_bg_pane_g5_copy2

0x2560,	// (0x0002225c) set_opt_bg_pane_g6_copy2

0xe145,	// (0x0002de41) set_opt_bg_pane_g7_copy2

0xe14d,	// (0x0002de49) set_opt_bg_pane_g8_copy2

0xe157,	// (0x0002de53) set_opt_bg_pane_g9_copy2

0xe161,	// (0x0002de5d) aid_size_touch_slider_mark_copy1_ParamLimits

0xe161,	// (0x0002de5d) aid_size_touch_slider_mark_copy1

0xe175,	// (0x0002de71) slider_set_pane_g1_copy1

0xe17e,	// (0x0002de7a) slider_set_pane_g2_copy1

0x524a,	// (0x00024f46) slider_set_pane_g3_copy1_ParamLimits

0x524a,	// (0x00024f46) slider_set_pane_g3_copy1

0x525e,	// (0x00024f5a) slider_set_pane_g4_copy1_ParamLimits

0x525e,	// (0x00024f5a) slider_set_pane_g4_copy1

0x5276,	// (0x00024f72) slider_set_pane_g5_copy1_ParamLimits

0x5276,	// (0x00024f72) slider_set_pane_g5_copy1

0x524a,	// (0x00024f46) slider_set_pane_g6_copy1_ParamLimits

0x524a,	// (0x00024f46) slider_set_pane_g6_copy1

0xe186,	// (0x0002de82) slider_set_pane_g7_copy1_ParamLimits

0xe186,	// (0x0002de82) slider_set_pane_g7_copy1

0x1b9e,	// (0x0002189a) bg_set_opt_pane_cp2_copy1

0xe19c,	// (0x0002de98) setting_slider_graphic_pane_g1_copy1

0xe4af,	// (0x0002e1ab) setting_slider_graphic_pane_t1_copy1

0xe4bf,	// (0x0002e1bb) setting_slider_graphic_pane_t2_copy1

0xe4cf,	// (0x0002e1cb) slider_set_pane_cp_copy1

0xe4df,	// (0x0002e1db) input_focus_pane_cp1_copy1

0xe4e8,	// (0x0002e1e4) list_set_text_pane_copy1

0xe4f0,	// (0x0002e1ec) setting_text_pane_g1_copy1

0xf536,	// (0x0002f232) set_text_pane_t1_copy1

0xe4df,	// (0x0002e1db) input_focus_pane_cp2_copy1

0xe4f0,	// (0x0002e1ec) setting_code_pane_g1_copy1

0xe4f9,	// (0x0002e1f5) setting_code_pane_t1_copy1

0x554b,	// (0x00025247) list_set_graphic_pane_copy1

0x1b9e,	// (0x0002189a) bg_set_opt_pane_cp4_copy1

0x2e3d,	// (0x00022b39) list_set_graphic_pane_g1_copy1_ParamLimits

0x2e3d,	// (0x00022b39) list_set_graphic_pane_g1_copy1

0xe507,	// (0x0002e203) list_set_graphic_pane_g2_copy1

0x2e55,	// (0x00022b51) list_set_graphic_pane_t1_copy1_ParamLimits

0x2e55,	// (0x00022b51) list_set_graphic_pane_t1_copy1

0x6097,	// (0x00025d93) rs_clock_indi_pane_g1

0xe50f,	// (0x0002e20b) rs_clock_indi_pane_t1

0xe51d,	// (0x0002e219) rs_indi_pane

0xe525,	// (0x0002e221) rs_indi_pane_g1

0xe52e,	// (0x0002e22a) rs_indi_pane_g2

0xe537,	// (0x0002e233) rs_indi_pane_g3

0x0002,

0xfed2,	// (0x0002fbce) rs_indi_pane_g

0x313b,	// (0x00022e37) bg_popup_preview_window_pane_cp03

0xe540,	// (0x0002e23c) popup_fep_tooltip_window_t1

0x6d12,	// (0x00026a0e) popup_note2_window_g2_ParamLimits

0x6d12,	// (0x00026a0e) popup_note2_window_g2

0x0001,

0xfc72,	// (0x0002f96e) popup_note2_window_g_ParamLimits

0xfc72,	// (0x0002f96e) popup_note2_window_g

0x8deb,	// (0x00028ae7) bg_popup_sub_pane_cp11_ParamLimits

0x8df8,	// (0x00028af4) cell_ai3_links_pane_g1_ParamLimits

0x8e0f,	// (0x00028b0b) cell_ai3_links_pane_t1

0xf536,	// (0x0002f232) set_text_pane_t1_copy1_ParamLimits

0x304a,	// (0x00022d46) cell_graphic_popup_pane_cp2_ParamLimits

0x304a,	// (0x00022d46) cell_graphic_popup_pane_cp2

0x1b55,	// (0x00021851) cell_graphic_popup_pane_g1_cp2

0x221c,	// (0x00021f18) cell_graphic_popup_pane_g2_cp2

0xe54e,	// (0x0002e24a) cell_graphic_popup_pane_g3_cp2

0xe556,	// (0x0002e252) cell_graphic_popup_pane_t2_cp2

0x222d,	// (0x00021f29) grid_highlight_pane_cp3_cp2

0x287a,	// (0x00022576) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x24d1,	// (0x000221cd) main_tmo_pane_ParamLimits

0xc563,	// (0x0002c25f) popup_tmo_big_image_note_window

0xd7fa,	// (0x0002d4f6) cell_ai5_widget_list_pane

0xd802,	// (0x0002d4fe) cell_ai5_widget_lrg_icon_pane

0x1b12,	// (0x0002180e) tmo_note_info_pane_t1_ParamLimits

0x1b27,	// (0x00021823) tmo_note_info_pane_t2_ParamLimits

0x1b40,	// (0x0002183c) tmo_note_info_pane_t3_ParamLimits

0xde19,	// (0x0002db15) tmo_note_info_pane_t4_ParamLimits

0xde2b,	// (0x0002db27) tmo_note_info_pane_t5_ParamLimits

0xfec0,	// (0x0002fbbc) tmo_note_info_pane_t_ParamLimits

0xdf5c,	// (0x0002dc58) settings_container_pane_ParamLimits

0xe4d7,	// (0x0002e1d3) indicator_popup_pane_cp5

0xe4d7,	// (0x0002e1d3) indicator_popup_pane_cp6

0x554b,	// (0x00025247) list_set_graphic_pane_copy1_ParamLimits

0x1b8a,	// (0x00021886) bg_popup_window_pane_cp23

0xe564,	// (0x0002e260) popup_tmo_big_image_note_window_g1

0xe56f,	// (0x0002e26b) popup_tmo_big_image_note_window_t1

0xe57f,	// (0x0002e27b) popup_tmo_big_image_note_window_t2

0xe58f,	// (0x0002e28b) popup_tmo_big_image_note_window_t3

0x0002,

0xfed9,	// (0x0002fbd5) popup_tmo_big_image_note_window_t

0xe59f,	// (0x0002e29b) cell_ai5_widget_lrg_icon_pane_g1

0xe5a7,	// (0x0002e2a3) cell_ai5_widget_lrg_icon_pane_t1

0xe5b5,	// (0x0002e2b1) cell_ai5_widget_list_row_pane_ParamLimits

0xe5b5,	// (0x0002e2b1) cell_ai5_widget_list_row_pane

0xe5ce,	// (0x0002e2ca) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe5ce,	// (0x0002e2ca) cell_ai5_widget_list_row_pane_g1

0xe5db,	// (0x0002e2d7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe5db,	// (0x0002e2d7) cell_ai5_widget_list_row_pane_t1

0xe5f3,	// (0x0002e2ef) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe5f3,	// (0x0002e2ef) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee0,	// (0x0002fbdc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee0,	// (0x0002fbdc) cell_ai5_widget_list_row_pane_t

0xac06,	// (0x0002a902) main_fep_vtchi_ss_pane

0xe62a,	// (0x0002e326) popup_fep_char_pre_window

0xe632,	// (0x0002e32e) popup_fep_ituss_window

0xe653,	// (0x0002e34f) popup_fep_vkbss_window

0xe672,	// (0x0002e36e) grid_vkbss_keypad_pane_ParamLimits

0xe672,	// (0x0002e36e) grid_vkbss_keypad_pane

0xe682,	// (0x0002e37e) ituss_keypad_pane

0xe69e,	// (0x0002e39a) aid_vkbss_key_offset_ParamLimits

0xe69e,	// (0x0002e39a) aid_vkbss_key_offset

0xe6aa,	// (0x0002e3a6) cell_vkbss_key_pane_ParamLimits

0xe6aa,	// (0x0002e3a6) cell_vkbss_key_pane

0x37e4,	// (0x000234e0) bg_cell_vkbss_key_g1_ParamLimits

0x37e4,	// (0x000234e0) bg_cell_vkbss_key_g1

0xe6c0,	// (0x0002e3bc) cell_vkbss_key_3p_pane_ParamLimits

0xe6c0,	// (0x0002e3bc) cell_vkbss_key_3p_pane

0xe6da,	// (0x0002e3d6) cell_vkbss_key_g1_ParamLimits

0xe6da,	// (0x0002e3d6) cell_vkbss_key_g1

0xe6f4,	// (0x0002e3f0) cell_vkbss_key_t1_ParamLimits

0xe6f4,	// (0x0002e3f0) cell_vkbss_key_t1

0xe71f,	// (0x0002e41b) cell_ituss_key_pane_ParamLimits

0xe71f,	// (0x0002e41b) cell_ituss_key_pane

0xe730,	// (0x0002e42c) bg_cell_ituss_key_g1_ParamLimits

0xe730,	// (0x0002e42c) bg_cell_ituss_key_g1

0xe73c,	// (0x0002e438) cell_ituss_key_pane_g1_ParamLimits

0xe73c,	// (0x0002e438) cell_ituss_key_pane_g1

0xe750,	// (0x0002e44c) cell_ituss_key_pane_g2_ParamLimits

0xe750,	// (0x0002e44c) cell_ituss_key_pane_g2

0x0001,

0xfee7,	// (0x0002fbe3) cell_ituss_key_pane_g_ParamLimits

0xfee7,	// (0x0002fbe3) cell_ituss_key_pane_g

0xe77b,	// (0x0002e477) cell_ituss_key_t1_ParamLimits

0xe77b,	// (0x0002e477) cell_ituss_key_t1

0xe7a9,	// (0x0002e4a5) cell_ituss_key_t2_ParamLimits

0xe7a9,	// (0x0002e4a5) cell_ituss_key_t2

0xe7da,	// (0x0002e4d6) cell_ituss_key_t3_ParamLimits

0xe7da,	// (0x0002e4d6) cell_ituss_key_t3

0xe80b,	// (0x0002e507) cell_ituss_key_t4_ParamLimits

0xe80b,	// (0x0002e507) cell_ituss_key_t4

0x0003,

0xfeec,	// (0x0002fbe8) cell_ituss_key_t_ParamLimits

0xfeec,	// (0x0002fbe8) cell_ituss_key_t

0xe83c,	// (0x0002e538) cell_vkbss_key_3p_pane_g1

0xe844,	// (0x0002e540) cell_vkbss_key_3p_pane_g2

0xe84c,	// (0x0002e548) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x0002fbf1) cell_vkbss_key_3p_pane_g

0x1b8a,	// (0x00021886) bg_popup_fep_char_preview_window_cp02

0xe854,	// (0x0002e550) popup_fep_char_pre_window_t1

0x19b7,	// (0x000216b3) main_ai5_sk_pane

0xdea5,	// (0x0002dba1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xdeb1,	// (0x0002dbad) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xdec4,	// (0x0002dbc0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xded0,	// (0x0002dbcc) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecb,	// (0x0002fbc7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xdee2,	// (0x0002dbde) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x24d1,	// (0x000221cd) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x1b5d,	// (0x00021859) main_ai5_sk_pane_g1

0x3ecd,	// (0x00023bc9) popup_query_code_window_g1

0xe648,	// (0x0002e344) popup_fep_vkb_icf_pane

0xe65c,	// (0x0002e358) popup_fep_vtchi_icf_pane

0x24d1,	// (0x000221cd) bg_icf_pane

0xe863,	// (0x0002e55f) list_vkb_icf_pane

0x24d1,	// (0x000221cd) bg_icf_pane_cp01

0xe86f,	// (0x0002e56b) vtchi_icf_list_pane

0xe880,	// (0x0002e57c) list_vkb_icf_pane_t1_ParamLimits

0xe880,	// (0x0002e57c) list_vkb_icf_pane_t1

0xe89a,	// (0x0002e596) vtchi_icf_list_pane_t1_ParamLimits

0xe89a,	// (0x0002e596) vtchi_icf_list_pane_t1

0xe632,	// (0x0002e32e) popup_fep_ituss_window_ParamLimits

0xe65c,	// (0x0002e358) popup_fep_vtchi_icf_pane_ParamLimits

0xe682,	// (0x0002e37e) ituss_keypad_pane_ParamLimits

0xe692,	// (0x0002e38e) ituss_sks_pane

0x24d1,	// (0x000221cd) bg_icf_pane_ParamLimits

0xe61b,	// (0x0002e317) icf_edit_indi_pane_ParamLimits

0xe61b,	// (0x0002e317) icf_edit_indi_pane

0xe863,	// (0x0002e55f) list_vkb_icf_pane_ParamLimits

0x24d1,	// (0x000221cd) bg_icf_pane_cp01_ParamLimits

0xe61b,	// (0x0002e317) icf_edit_indi_pane_cp01_ParamLimits

0xe61b,	// (0x0002e317) icf_edit_indi_pane_cp01

0xe877,	// (0x0002e573) vtchi_query_pane

0x6312,	// (0x0002600e) icf_edit_indi_pane_g1_ParamLimits

0x6312,	// (0x0002600e) icf_edit_indi_pane_g1

0xe92b,	// (0x0002e627) icf_edit_indi_pane_g2_ParamLimits

0xe92b,	// (0x0002e627) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x0002fc09) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x0002fc09) icf_edit_indi_pane_g

0xe93a,	// (0x0002e636) icf_edit_indi_pane_t1

0xe8c1,	// (0x0002e5bd) bg_input_focus_pane_cp042

0x2400,	// (0x000220fc) vtchi_button_pane

0xe8ca,	// (0x0002e5c6) vtchi_query_pane_t1

0xe8d8,	// (0x0002e5d4) vtchi_query_pane_t2

0xe8e6,	// (0x0002e5e2) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x0002fbf8) vtchi_query_pane_t

0x1b8a,	// (0x00021886) bg_button_pane_cp13

0xe8f4,	// (0x0002e5f0) vtchi_button_pane_g1

0xe8fc,	// (0x0002e5f8) ituss_sks_pane_g1

0xe907,	// (0x0002e603) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x0002fbff) ituss_sks_pane_g

0xe90f,	// (0x0002e60b) ituss_sks_pane_t1

0xe91d,	// (0x0002e619) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x0002fc04) ituss_sks_pane_t

0x5ac0,	// (0x000257bc) indicator_nsta_pane_cp_g1

0x5ac9,	// (0x000257c5) indicator_nsta_pane_cp_g2

0x5ad1,	// (0x000257cd) indicator_nsta_pane_cp_g3

0x5ad9,	// (0x000257d5) indicator_nsta_pane_cp_g4

0x5ae1,	// (0x000257dd) indicator_nsta_pane_cp_g5

0x5ae9,	// (0x000257e5) indicator_nsta_pane_cp_g6

0x0005,

0xfab0,	// (0x0002f7ac) indicator_nsta_pane_cp_g

0xd460,	// (0x0002d15c) cell_graphic2_pane_t2_ParamLimits

0xd460,	// (0x0002d15c) cell_graphic2_pane_t2

0x0001,

0xfdc2,	// (0x0002fabe) cell_graphic2_pane_t_ParamLimits

0xfdc2,	// (0x0002fabe) cell_graphic2_pane_t

0xd48d,	// (0x0002d189) cell_graphic2_control_pane_t1

0x2bef,	// (0x000228eb) signal_pane_g3_ParamLimits

0x2bef,	// (0x000228eb) signal_pane_g3

0x2c01,	// (0x000228fd) signal_pane_g4_ParamLimits

0x2c01,	// (0x000228fd) signal_pane_g4

0xe605,	// (0x0002e301) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe605,	// (0x0002e301) cell_ai5_widget_list_row_pane_t3

0xe769,	// (0x0002e465) cell_ituss_key_pane_t1_ParamLimits

0xe769,	// (0x0002e465) cell_ituss_key_pane_t1

0x3afa,	// (0x000237f6) form_field_data_wide_pane_vc_t2_ParamLimits

0x3afa,	// (0x000237f6) form_field_data_wide_pane_vc_t2

0x3b0e,	// (0x0002380a) form_field_data_wide_pane_vc_t3_ParamLimits

0x3b0e,	// (0x0002380a) form_field_data_wide_pane_vc_t3

0x0002,

0xf805,	// (0x0002f501) form_field_data_wide_pane_vc_t_ParamLimits

0xf805,	// (0x0002f501) form_field_data_wide_pane_vc_t

0x577b,	// (0x00025477) form_field_slider_wide_pane_vc_t3_ParamLimits

0x577b,	// (0x00025477) form_field_slider_wide_pane_vc_t3

0x5855,	// (0x00025551) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5855,	// (0x00025551) form_field_popup_wide_pane_vc_t2

0x586c,	// (0x00025568) form_field_popup_wide_pane_vc_t3_ParamLimits

0x586c,	// (0x00025568) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9f,	// (0x0002f79b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9f,	// (0x0002f79b) form_field_popup_wide_pane_vc_t

0xdc45,	// (0x0002d941) aid_fshwr2_btn_pane_ParamLimits

0xdc51,	// (0x0002d94d) aid_fshwr2_syb_pane_ParamLimits

0xdc62,	// (0x0002d95e) aid_fshwr2_txt_pane_ParamLimits

0xc759,	// (0x0002c455) fshwr2_bg_pane_ParamLimits

0xdc6e,	// (0x0002d96a) fshwr2_func_candi_pane_ParamLimits

0xdc83,	// (0x0002d97f) fshwr2_hwr_syb_pane_ParamLimits

0xdc9a,	// (0x0002d996) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small

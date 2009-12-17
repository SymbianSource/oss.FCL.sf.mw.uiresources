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

#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0001f7a4 };

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
0x2870,	// (0x00022014) Screen

0x287a,	// (0x0002201e) application_window_ParamLimits

0x287a,	// (0x0002201e) application_window

0x0585,	// (0x0001fd29) screen_g1

0x28c3,	// (0x00022067) area_bottom_pane_ParamLimits

0x28c3,	// (0x00022067) area_bottom_pane

0x058f,	// (0x0001fd33) area_top_pane_ParamLimits

0x058f,	// (0x0001fd33) area_top_pane

0xc3c0,	// (0x0002bb64) main_pane_ParamLimits

0xc3c0,	// (0x0002bb64) main_pane

0x0607,	// (0x0001fdab) misc_graphics

0x753f,	// (0x00026ce3) battery_pane_ParamLimits

0x753f,	// (0x00026ce3) battery_pane

0x51ab,	// (0x0002494f) bg_status_flat_pane_g8

0x51b3,	// (0x00024957) bg_status_flat_pane_g9

0x4948,	// (0x000240ec) context_pane_ParamLimits

0x4948,	// (0x000240ec) context_pane

0x7671,	// (0x00026e15) navi_pane_ParamLimits

0x7671,	// (0x00026e15) navi_pane

0x78b6,	// (0x0002705a) signal_pane_ParamLimits

0x78b6,	// (0x0002705a) signal_pane

0x0008,

0xf8b2,	// (0x0002f056) bg_status_flat_pane_g

0x7917,	// (0x000270bb) status_pane_g1_ParamLimits

0x7917,	// (0x000270bb) status_pane_g1

0x7923,	// (0x000270c7) status_pane_g2_ParamLimits

0x7923,	// (0x000270c7) status_pane_g2

0x49ae,	// (0x00024152) status_pane_g3_ParamLimits

0x49ae,	// (0x00024152) status_pane_g3

0x0004,

0xf7e5,	// (0x0002ef89) status_pane_g_ParamLimits

0xf7e5,	// (0x0002ef89) status_pane_g

0x792f,	// (0x000270d3) title_pane_ParamLimits

0x792f,	// (0x000270d3) title_pane

0x796c,	// (0x00027110) uni_indicator_pane_ParamLimits

0x796c,	// (0x00027110) uni_indicator_pane

0x479e,	// (0x00023f42) bg_list_pane_ParamLimits

0x479e,	// (0x00023f42) bg_list_pane

0xbd66,	// (0x0002b50a) find_pane

0x714b,	// (0x000268ef) listscroll_app_pane_ParamLimits

0x714b,	// (0x000268ef) listscroll_app_pane

0x47be,	// (0x00023f62) listscroll_form_pane

0xbd6e,	// (0x0002b512) listscroll_gen_pane_ParamLimits

0xbd6e,	// (0x0002b512) listscroll_gen_pane

0x47be,	// (0x00023f62) listscroll_set_pane

0x2eff,	// (0x000226a3) main_idle_act_pane

0x1c81,	// (0x00021425) main_idle_trad_pane

0x1c81,	// (0x00021425) main_list_empty_pane

0x47d8,	// (0x00023f7c) main_midp_pane

0x47e4,	// (0x00023f88) main_pane_g1_ParamLimits

0x47e4,	// (0x00023f88) main_pane_g1

0x7157,	// (0x000268fb) popup_ai_message_window_ParamLimits

0x7157,	// (0x000268fb) popup_ai_message_window

0x71cb,	// (0x0002696f) popup_fep_china_uni_window_ParamLimits

0x71cb,	// (0x0002696f) popup_fep_china_uni_window

0x4814,	// (0x00023fb8) popup_fep_japan_candidate_window_ParamLimits

0x4814,	// (0x00023fb8) popup_fep_japan_candidate_window

0x4832,	// (0x00023fd6) popup_fep_japan_predictive_window_ParamLimits

0x4832,	// (0x00023fd6) popup_fep_japan_predictive_window

0x7209,	// (0x000269ad) popup_find_window

0x7216,	// (0x000269ba) popup_grid_graphic_window_ParamLimits

0x7216,	// (0x000269ba) popup_grid_graphic_window

0x485e,	// (0x00024002) popup_large_graphic_colour_window

0x7234,	// (0x000269d8) popup_menu_window_ParamLimits

0x7234,	// (0x000269d8) popup_menu_window

0x736c,	// (0x00026b10) popup_note_image_window

0x735a,	// (0x00026afe) popup_note_wait_window_ParamLimits

0x735a,	// (0x00026afe) popup_note_wait_window

0x735a,	// (0x00026afe) popup_note_window_ParamLimits

0x735a,	// (0x00026afe) popup_note_window

0x73c0,	// (0x00026b64) popup_query_code_window_ParamLimits

0x73c0,	// (0x00026b64) popup_query_code_window

0x487d,	// (0x00024021) popup_query_data_code_window_ParamLimits

0x487d,	// (0x00024021) popup_query_data_code_window

0x73d2,	// (0x00026b76) popup_query_data_window_ParamLimits

0x73d2,	// (0x00026b76) popup_query_data_window

0x73e8,	// (0x00026b8c) popup_query_sat_info_window_ParamLimits

0x73e8,	// (0x00026b8c) popup_query_sat_info_window

0x7419,	// (0x00026bbd) popup_snote_single_graphic_window_ParamLimits

0x7419,	// (0x00026bbd) popup_snote_single_graphic_window

0x7419,	// (0x00026bbd) popup_snote_single_text_window_ParamLimits

0x7419,	// (0x00026bbd) popup_snote_single_text_window

0x4892,	// (0x00024036) popup_sub_window_general

0x48d4,	// (0x00024078) popup_window_general_ParamLimits

0x48d4,	// (0x00024078) popup_window_general

0x48e7,	// (0x0002408b) power_save_pane

0xcb05,	// (0x0002c2a9) control_pane_g1_ParamLimits

0xcb05,	// (0x0002c2a9) control_pane_g1

0xcb26,	// (0x0002c2ca) control_pane_g2_ParamLimits

0xcb26,	// (0x0002c2ca) control_pane_g2

0x1e8d,	// (0x00021631) control_pane_g3_ParamLimits

0x1e8d,	// (0x00021631) control_pane_g3

0x0007,

0xf7cd,	// (0x0002ef71) control_pane_g_ParamLimits

0xf7cd,	// (0x0002ef71) control_pane_g

0xcb60,	// (0x0002c304) control_pane_t1_ParamLimits

0xcb60,	// (0x0002c304) control_pane_t1

0xcbb2,	// (0x0002c356) control_pane_t2_ParamLimits

0xcbb2,	// (0x0002c356) control_pane_t2

0x0002,

0xf7de,	// (0x0002ef82) control_pane_t_ParamLimits

0xf7de,	// (0x0002ef82) control_pane_t

0x1db0,	// (0x00021554) navi_navi_volume_pane_cp1

0x1db9,	// (0x0002155d) status_small_icon_pane

0x1dc1,	// (0x00021565) status_small_pane_g1_ParamLimits

0x1dc1,	// (0x00021565) status_small_pane_g1

0x1df5,	// (0x00021599) status_small_pane_g2_ParamLimits

0x1df5,	// (0x00021599) status_small_pane_g2

0x1e01,	// (0x000215a5) status_small_pane_g3_ParamLimits

0x1e01,	// (0x000215a5) status_small_pane_g3

0x1e0d,	// (0x000215b1) status_small_pane_g4_ParamLimits

0x1e0d,	// (0x000215b1) status_small_pane_g4

0x1e19,	// (0x000215bd) status_small_pane_g5_ParamLimits

0x1e19,	// (0x000215bd) status_small_pane_g5

0x1e26,	// (0x000215ca) status_small_pane_g6_ParamLimits

0x1e26,	// (0x000215ca) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0002ef60) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0002ef60) status_small_pane_g

0x1e56,	// (0x000215fa) status_small_pane_t1

0x1e79,	// (0x0002161d) status_small_wait_pane_ParamLimits

0x1e79,	// (0x0002161d) status_small_wait_pane

0x3203,	// (0x000229a7) aid_levels_signal_ParamLimits

0x3203,	// (0x000229a7) aid_levels_signal

0x3214,	// (0x000229b8) signal_pane_g1_ParamLimits

0x3214,	// (0x000229b8) signal_pane_g1

0x322a,	// (0x000229ce) signal_pane_g2_ParamLimits

0x322a,	// (0x000229ce) signal_pane_g2

0x0001,

0xf751,	// (0x0002eef5) signal_pane_g_ParamLimits

0xf751,	// (0x0002eef5) signal_pane_g

0x1808,	// (0x00020fac) context_pane_g1

0x2b7a,	// (0x0002231e) title_pane_g1

0x2ba4,	// (0x00022348) title_pane_t1

0x061d,	// (0x0001fdc1) title_pane_t2

0x0643,	// (0x0001fde7) title_pane_t3

0x0002,

0xf59b,	// (0x0002ed3f) title_pane_t

0x7982,	// (0x00027126) aid_levels_battery_ParamLimits

0x7982,	// (0x00027126) aid_levels_battery

0x7995,	// (0x00027139) battery_pane_g1_ParamLimits

0x7995,	// (0x00027139) battery_pane_g1

0x79aa,	// (0x0002714e) battery_pane_g2_ParamLimits

0x79aa,	// (0x0002714e) battery_pane_g2

0x0001,

0xf7f0,	// (0x0002ef94) battery_pane_g_ParamLimits

0xf7f0,	// (0x0002ef94) battery_pane_g

0x7b73,	// (0x00027317) uni_indicator_pane_g1

0x7b88,	// (0x0002732c) uni_indicator_pane_g2

0x7b9e,	// (0x00027342) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0002f0fe) uni_indicator_pane_g

0x137c,	// (0x00020b20) navi_icon_pane_ParamLimits

0x137c,	// (0x00020b20) navi_icon_pane

0x0607,	// (0x0001fdab) navi_midp_pane

0x0607,	// (0x0001fdab) navi_navi_pane

0x137c,	// (0x00020b20) navi_text_pane_ParamLimits

0x137c,	// (0x00020b20) navi_text_pane

0x0585,	// (0x0001fd29) status_small_wait_pane_g1

0x095e,	// (0x00020102) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0002f0f9) status_small_wait_pane_g

0x5721,	// (0x00024ec5) navi_navi_icon_text_pane

0x573b,	// (0x00024edf) navi_navi_pane_g1_ParamLimits

0x573b,	// (0x00024edf) navi_navi_pane_g1

0x5729,	// (0x00024ecd) navi_navi_pane_g2_ParamLimits

0x5729,	// (0x00024ecd) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0002f0c7) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0002f0c7) navi_navi_pane_g

0x574d,	// (0x00024ef1) navi_navi_tabs_pane

0x5721,	// (0x00024ec5) navi_navi_text_pane

0x5721,	// (0x00024ec5) navi_navi_volume_pane

0x56fd,	// (0x00024ea1) navi_text_pane_t1

0x56f1,	// (0x00024e95) navi_icon_pane_g1

0x5645,	// (0x00024de9) navi_navi_text_pane_t1

0xcea3,	// (0x0002c647) navi_navi_volume_pane_g1

0xceab,	// (0x0002c64f) volume_small_pane

0x7ac0,	// (0x00027264) navi_navi_icon_text_pane_g1

0x7ac8,	// (0x0002726c) navi_navi_icon_text_pane_t1

0x51f3,	// (0x00024997) navi_tabs_2_long_pane

0x51f3,	// (0x00024997) navi_tabs_2_pane

0x51f3,	// (0x00024997) navi_tabs_3_long_pane

0x51f3,	// (0x00024997) navi_tabs_3_pane

0x51f3,	// (0x00024997) navi_tabs_4_pane

0xce83,	// (0x0002c627) tabs_2_active_pane_ParamLimits

0xce83,	// (0x0002c627) tabs_2_active_pane

0xce93,	// (0x0002c637) tabs_2_passive_pane_ParamLimits

0xce93,	// (0x0002c637) tabs_2_passive_pane

0xce51,	// (0x0002c5f5) tabs_3_active_pane_ParamLimits

0xce51,	// (0x0002c5f5) tabs_3_active_pane

0xce61,	// (0x0002c605) tabs_3_passive_pane_ParamLimits

0xce61,	// (0x0002c605) tabs_3_passive_pane

0xce72,	// (0x0002c616) tabs_3_passive_pane_cp_ParamLimits

0xce72,	// (0x0002c616) tabs_3_passive_pane_cp

0xce0d,	// (0x0002c5b1) tabs_4_active_pane_ParamLimits

0xce0d,	// (0x0002c5b1) tabs_4_active_pane

0xce1e,	// (0x0002c5c2) tabs_4_passive_pane_ParamLimits

0xce1e,	// (0x0002c5c2) tabs_4_passive_pane

0xce2f,	// (0x0002c5d3) tabs_4_passive_pane_cp_ParamLimits

0xce2f,	// (0x0002c5d3) tabs_4_passive_pane_cp

0xce40,	// (0x0002c5e4) tabs_4_passive_pane_cp2_ParamLimits

0xce40,	// (0x0002c5e4) tabs_4_passive_pane_cp2

0xcded,	// (0x0002c591) tabs_2_long_active_pane_ParamLimits

0xcded,	// (0x0002c591) tabs_2_long_active_pane

0xcdfd,	// (0x0002c5a1) tabs_2_long_passive_pane_ParamLimits

0xcdfd,	// (0x0002c5a1) tabs_2_long_passive_pane

0xcdb8,	// (0x0002c55c) tabs_3_long_active_pane_ParamLimits

0xcdb8,	// (0x0002c55c) tabs_3_long_active_pane

0xcdc9,	// (0x0002c56d) tabs_3_long_passive_pane_ParamLimits

0xcdc9,	// (0x0002c56d) tabs_3_long_passive_pane

0xcddc,	// (0x0002c580) tabs_3_long_passive_pane_cp_ParamLimits

0xcddc,	// (0x0002c580) tabs_3_long_passive_pane_cp

0xcd5e,	// (0x0002c502) volume_small_pane_g1

0xcd67,	// (0x0002c50b) volume_small_pane_g2

0xcd70,	// (0x0002c514) volume_small_pane_g3

0xcd79,	// (0x0002c51d) volume_small_pane_g4

0xcd82,	// (0x0002c526) volume_small_pane_g5

0xcd8b,	// (0x0002c52f) volume_small_pane_g6

0xcd94,	// (0x0002c538) volume_small_pane_g7

0xcd9d,	// (0x0002c541) volume_small_pane_g8

0xcda6,	// (0x0002c54a) volume_small_pane_g9

0xcdaf,	// (0x0002c553) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0002f093) volume_small_pane_g

0x066b,	// (0x0001fe0f) bg_active_tab_pane_cp2_ParamLimits

0x066b,	// (0x0001fe0f) bg_active_tab_pane_cp2

0x0663,	// (0x0001fe07) tabs_3_active_pane_g1

0x2c0c,	// (0x000223b0) tabs_3_active_pane_t1

0x066b,	// (0x0001fe0f) bg_passive_tab_pane_cp2_ParamLimits

0x066b,	// (0x0001fe0f) bg_passive_tab_pane_cp2

0x0663,	// (0x0001fe07) tabs_3_passive_pane_g1

0x2c0c,	// (0x000223b0) tabs_3_passive_pane_t1

0x066b,	// (0x0001fe0f) bg_active_tab_pane_cp3_ParamLimits

0x066b,	// (0x0001fe0f) bg_active_tab_pane_cp3

0x2c1e,	// (0x000223c2) tabs_4_active_pane_g1

0x2c26,	// (0x000223ca) tabs_4_active_pane_t1

0x066b,	// (0x0001fe0f) bg_passive_tab_pane_cp3_ParamLimits

0x066b,	// (0x0001fe0f) bg_passive_tab_pane_cp3

0x2c1e,	// (0x000223c2) tabs_4_1_passive_pane_g1

0x2c26,	// (0x000223ca) tabs_4_1_passive_pane_t1

0x47d8,	// (0x00023f7c) list_highlight_pane_cp2

0x7bf4,	// (0x00027398) list_set_pane_ParamLimits

0x7bf4,	// (0x00027398) list_set_pane

0x7c82,	// (0x00027426) main_pane_set_t1_ParamLimits

0x7c82,	// (0x00027426) main_pane_set_t1

0x7ca2,	// (0x00027446) main_pane_set_t2_ParamLimits

0x7ca2,	// (0x00027446) main_pane_set_t2

0x7cb4,	// (0x00027458) main_pane_set_t3_ParamLimits

0x7cb4,	// (0x00027458) main_pane_set_t3

0x7cc6,	// (0x0002746a) main_pane_set_t4_ParamLimits

0x7cc6,	// (0x0002746a) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0002f163) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0002f163) main_pane_set_t

0x7cd8,	// (0x0002747c) setting_code_pane

0x7ce0,	// (0x00027484) setting_slider_graphic_pane

0x7ce0,	// (0x00027484) setting_slider_pane

0x7ce0,	// (0x00027484) setting_text_pane

0x7ce0,	// (0x00027484) setting_volume_pane

0xc5bf,	// (0x0002bd63) volume_set_pane

0x066b,	// (0x0001fe0f) bg_set_opt_pane_cp

0x0679,	// (0x0001fe1d) setting_slider_pane_t1

0xc5c7,	// (0x0002bd6b) setting_slider_pane_t2

0xc5e0,	// (0x0002bd84) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0002ed46) setting_slider_pane_t

0x068f,	// (0x0001fe33) slider_set_pane

0x0607,	// (0x0001fdab) bg_set_opt_pane_cp2

0x06a5,	// (0x0001fe49) setting_slider_graphic_pane_g1

0xc5f7,	// (0x0002bd9b) setting_slider_graphic_pane_t1

0xc606,	// (0x0002bdaa) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0002ed4d) setting_slider_graphic_pane_t

0xc615,	// (0x0002bdb9) slider_set_pane_cp

0x0607,	// (0x0001fdab) input_focus_pane_cp1

0x5b82,	// (0x00025326) list_set_text_pane

0x0585,	// (0x0001fd29) setting_text_pane_g1

0x0607,	// (0x0001fdab) input_focus_pane_cp2

0x0585,	// (0x0001fd29) setting_code_pane_g1

0x06ae,	// (0x0001fe52) setting_code_pane_t1

0xb64f,	// (0x0002adf3) set_text_pane_t1_ParamLimits

0xb64f,	// (0x0002adf3) set_text_pane_t1

0x1317,	// (0x00020abb) set_opt_bg_pane_g1

0x131f,	// (0x00020ac3) set_opt_bg_pane_g2

0x7bb4,	// (0x00027358) set_opt_bg_pane_g3

0x132f,	// (0x00020ad3) set_opt_bg_pane_g4

0x1337,	// (0x00020adb) set_opt_bg_pane_g5

0x133f,	// (0x00020ae3) set_opt_bg_pane_g6

0x7bbc,	// (0x00027360) set_opt_bg_pane_g7

0x7bc4,	// (0x00027368) set_opt_bg_pane_g8

0x7bcc,	// (0x00027370) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0002f150) set_opt_bg_pane_g

0x5b75,	// (0x00025319) slider_set_pane_g1

0xcf04,	// (0x0002c6a8) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0002f141) slider_set_pane_g

0xceb4,	// (0x0002c658) volume_set_pane_g1

0xcebc,	// (0x0002c660) volume_set_pane_g2

0xcec4,	// (0x0002c668) volume_set_pane_g3

0xcecc,	// (0x0002c670) volume_set_pane_g4

0xced4,	// (0x0002c678) volume_set_pane_g5

0xcedc,	// (0x0002c680) volume_set_pane_g6

0xcee4,	// (0x0002c688) volume_set_pane_g7

0xceec,	// (0x0002c690) volume_set_pane_g8

0xcef4,	// (0x0002c698) volume_set_pane_g9

0xcefc,	// (0x0002c6a0) volume_set_pane_g10

0x0009,

0xf975,	// (0x0002f119) volume_set_pane_g

0x2cc2,	// (0x00022466) indicator_pane_ParamLimits

0x2cc2,	// (0x00022466) indicator_pane

0x2cce,	// (0x00022472) main_idle_pane_g2_ParamLimits

0x2cce,	// (0x00022472) main_idle_pane_g2

0x2cf2,	// (0x00022496) main_pane_idle_g1_ParamLimits

0x2cf2,	// (0x00022496) main_pane_idle_g1

0x06bc,	// (0x0001fe60) popup_clock_digital_analogue_window_ParamLimits

0x06bc,	// (0x0001fe60) popup_clock_digital_analogue_window

0x2cff,	// (0x000224a3) soft_indicator_pane_ParamLimits

0x2cff,	// (0x000224a3) soft_indicator_pane

0x2d0b,	// (0x000224af) wallpaper_pane_ParamLimits

0x2d0b,	// (0x000224af) wallpaper_pane

0x0585,	// (0x0001fd29) wallpaper_pane_g1

0x2d17,	// (0x000224bb) indicator_pane_g1_ParamLimits

0x2d17,	// (0x000224bb) indicator_pane_g1

0x5caa,	// (0x0002544e) navi_navi_icon_text_pane_srt_g1

0x06ea,	// (0x0001fe8e) soft_indicator_pane_t1

0x0704,	// (0x0001fea8) aid_ps_area_pane

0x2d23,	// (0x000224c7) aid_ps_clock_pane

0x0715,	// (0x0001feb9) aid_ps_indicator_pane

0x0721,	// (0x0001fec5) indicator_ps_pane_ParamLimits

0x0721,	// (0x0001fec5) indicator_ps_pane

0x0730,	// (0x0001fed4) power_save_pane_g1_ParamLimits

0x0730,	// (0x0001fed4) power_save_pane_g1

0x073c,	// (0x0001fee0) power_save_pane_g2_ParamLimits

0x073c,	// (0x0001fee0) power_save_pane_g2

0xc33c,	// (0x0002bae0) aid_navinavi_width_pane

0x0704,	// (0x0001fea8) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0002ed52) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0002ed52) power_save_pane_g

0x074a,	// (0x0001feee) power_save_pane_t1_ParamLimits

0x074a,	// (0x0001feee) power_save_pane_t1

0x2d23,	// (0x000224c7) aid_ps_clock_pane_ParamLimits

0x0715,	// (0x0001feb9) aid_ps_indicator_pane_ParamLimits

0x075c,	// (0x0001ff00) power_save_pane_t4_ParamLimits

0x075c,	// (0x0001ff00) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0002ed57) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0002ed57) power_save_pane_t

0x0786,	// (0x0001ff2a) power_save_t3_ParamLimits

0x0786,	// (0x0001ff2a) power_save_t3

0x0771,	// (0x0001ff15) power_save_t2_ParamLimits

0x0771,	// (0x0001ff15) power_save_t2

0x079b,	// (0x0001ff3f) indicator_ps_pane_g1

0x2d2f,	// (0x000224d3) ai_gene_pane_ParamLimits

0x2d2f,	// (0x000224d3) ai_gene_pane

0x2d3b,	// (0x000224df) ai_links_pane_ParamLimits

0x2d3b,	// (0x000224df) ai_links_pane

0x2d47,	// (0x000224eb) indicator_pane_cp1_ParamLimits

0x2d47,	// (0x000224eb) indicator_pane_cp1

0x2d53,	// (0x000224f7) main_pane_idle_g1_cp_ParamLimits

0x2d53,	// (0x000224f7) main_pane_idle_g1_cp

0x07a4,	// (0x0001ff48) popup_ai_links_title_window

0x2d5f,	// (0x00022503) soft_indicator_pane_cp1_ParamLimits

0x2d5f,	// (0x00022503) soft_indicator_pane_cp1

0x59b7,	// (0x0002515b) ai_links_pane_g1

0x59c0,	// (0x00025164) grid_ai_links_pane

0x7b6a,	// (0x0002730e) ai_gene_pane_1

0x59a5,	// (0x00025149) ai_gene_pane_2

0x59ae,	// (0x00025152) list_highlight_pane_cp4

0x7b4e,	// (0x000272f2) cell_ai_link_pane_ParamLimits

0x7b4e,	// (0x000272f2) cell_ai_link_pane

0x599d,	// (0x00025141) cell_ai_link_pane_g1

0x095e,	// (0x00020102) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0002f0f4) cell_ai_link_pane_g

0x0607,	// (0x0001fdab) grid_highlight_cp2

0x0607,	// (0x0001fdab) bg_popup_sub_pane_cp1

0x07bb,	// (0x0001ff5f) popup_ai_links_title_window_t1

0x58ef,	// (0x00025093) ai_gene_pane_1_g1_ParamLimits

0x58ef,	// (0x00025093) ai_gene_pane_1_g1

0x58fb,	// (0x0002509f) ai_gene_pane_1_g2_ParamLimits

0x58fb,	// (0x0002509f) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0002f0ea) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0002f0ea) ai_gene_pane_1_g

0x5908,	// (0x000250ac) ai_gene_pane_1_t1_ParamLimits

0x5908,	// (0x000250ac) ai_gene_pane_1_t1

0x593c,	// (0x000250e0) grid_ai_soft_ind_pane

0x58da,	// (0x0002507e) ai_gene_pane_2_t1_ParamLimits

0x58da,	// (0x0002507e) ai_gene_pane_2_t1

0x2d6b,	// (0x0002250f) main_pane_empty_t1_ParamLimits

0x2d6b,	// (0x0002250f) main_pane_empty_t1

0x2d88,	// (0x0002252c) main_pane_empty_t2_ParamLimits

0x2d88,	// (0x0002252c) main_pane_empty_t2

0x2da0,	// (0x00022544) main_pane_empty_t3_ParamLimits

0x2da0,	// (0x00022544) main_pane_empty_t3

0x2db3,	// (0x00022557) main_pane_empty_t4_ParamLimits

0x2db3,	// (0x00022557) main_pane_empty_t4

0x2dc6,	// (0x0002256a) main_pane_empty_t5_ParamLimits

0x2dc6,	// (0x0002256a) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0002ed5c) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0002ed5c) main_pane_empty_t

0x137c,	// (0x00020b20) bg_popup_window_pane_ParamLimits

0x137c,	// (0x00020b20) bg_popup_window_pane

0x5654,	// (0x00024df8) find_popup_pane_cp2_ParamLimits

0x5654,	// (0x00024df8) find_popup_pane_cp2

0x5660,	// (0x00024e04) heading_pane_ParamLimits

0x5660,	// (0x00024e04) heading_pane

0x0607,	// (0x0001fdab) bg_popup_sub_pane

0x7ae2,	// (0x00027286) bg_popup_window_pane_g1_ParamLimits

0x7ae2,	// (0x00027286) bg_popup_window_pane_g1

0x7aee,	// (0x00027292) bg_popup_window_pane_g2_ParamLimits

0x7aee,	// (0x00027292) bg_popup_window_pane_g2

0x7afa,	// (0x0002729e) bg_popup_window_pane_g3_ParamLimits

0x7afa,	// (0x0002729e) bg_popup_window_pane_g3

0x7b06,	// (0x000272aa) bg_popup_window_pane_g4_ParamLimits

0x7b06,	// (0x000272aa) bg_popup_window_pane_g4

0x7b12,	// (0x000272b6) bg_popup_window_pane_g5_ParamLimits

0x7b12,	// (0x000272b6) bg_popup_window_pane_g5

0x7b1e,	// (0x000272c2) bg_popup_window_pane_g6_ParamLimits

0x7b1e,	// (0x000272c2) bg_popup_window_pane_g6

0x7b2a,	// (0x000272ce) bg_popup_window_pane_g7_ParamLimits

0x7b2a,	// (0x000272ce) bg_popup_window_pane_g7

0x7b36,	// (0x000272da) bg_popup_window_pane_g8_ParamLimits

0x7b36,	// (0x000272da) bg_popup_window_pane_g8

0x7b42,	// (0x000272e6) bg_popup_window_pane_g9_ParamLimits

0x7b42,	// (0x000272e6) bg_popup_window_pane_g9

0x5639,	// (0x00024ddd) bg_popup_window_pane_g10_ParamLimits

0x5639,	// (0x00024ddd) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0002f0b2) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0002f0b2) bg_popup_window_pane_g

0x55f0,	// (0x00024d94) bg_popup_heading_pane_ParamLimits

0x55f0,	// (0x00024d94) bg_popup_heading_pane

0xcf73,	// (0x0002c717) tabs_4_passive_pane_cp_srt_ParamLimits

0xcf73,	// (0x0002c717) tabs_4_passive_pane_cp_srt

0xcf85,	// (0x0002c729) tabs_4_passive_pane_srt_ParamLimits

0x5604,	// (0x00024da8) heading_pane_g2

0xcf85,	// (0x0002c729) tabs_4_passive_pane_srt

0x47d8,	// (0x00023f7c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x47d8,	// (0x00023f7c) bg_passive_tab_pane_cp3_srt

0x560c,	// (0x00024db0) heading_pane_t1_ParamLimits

0x560c,	// (0x00024db0) heading_pane_t1

0x5623,	// (0x00024dc7) heading_pane_t2_ParamLimits

0x5623,	// (0x00024dc7) heading_pane_t2

0x0001,

0xf909,	// (0x0002f0ad) heading_pane_t_ParamLimits

0xf909,	// (0x0002f0ad) heading_pane_t

0x5173,	// (0x00024917) bg_popup_heading_pane_g1

0x5204,	// (0x000249a8) bg_popup_heading_pane_g2

0x520c,	// (0x000249b0) bg_popup_heading_pane_g3

0x5214,	// (0x000249b8) bg_popup_heading_pane_g4

0x521c,	// (0x000249c0) bg_popup_heading_pane_g5

0x5224,	// (0x000249c8) bg_popup_heading_pane_g6

0x522c,	// (0x000249d0) bg_popup_heading_pane_g7

0x5234,	// (0x000249d8) bg_popup_heading_pane_g8

0x523c,	// (0x000249e0) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0002f069) bg_popup_heading_pane_g

0x4a96,	// (0x0002423a) bg_popup_sub_pane_g1

0x4aa6,	// (0x0002424a) bg_popup_sub_pane_g2

0x4a9e,	// (0x00024242) bg_popup_sub_pane_g3

0x4ab6,	// (0x0002425a) bg_popup_sub_pane_g4

0x4aae,	// (0x00024252) bg_popup_sub_pane_g5

0x4abe,	// (0x00024262) bg_popup_sub_pane_g6

0x4ac6,	// (0x0002426a) bg_popup_sub_pane_g7

0x4ad6,	// (0x0002427a) bg_popup_sub_pane_g8

0x4ace,	// (0x00024272) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0002f043) bg_popup_sub_pane_g

0x0655,	// (0x0001fdf9) bg_popup_window_pane_cp5_ParamLimits

0x0655,	// (0x0001fdf9) bg_popup_window_pane_cp5

0x07d8,	// (0x0001ff7c) popup_note_window_g1_ParamLimits

0x07d8,	// (0x0001ff7c) popup_note_window_g1

0x07e4,	// (0x0001ff88) popup_note_window_t1_ParamLimits

0x07e4,	// (0x0001ff88) popup_note_window_t1

0x07fa,	// (0x0001ff9e) popup_note_window_t2_ParamLimits

0x07fa,	// (0x0001ff9e) popup_note_window_t2

0x0810,	// (0x0001ffb4) popup_note_window_t3_ParamLimits

0x0810,	// (0x0001ffb4) popup_note_window_t3

0x0826,	// (0x0001ffca) popup_note_window_t4_ParamLimits

0x0826,	// (0x0001ffca) popup_note_window_t4

0x084e,	// (0x0001fff2) popup_note_window_t5_ParamLimits

0x084e,	// (0x0001fff2) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0002ed67) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0002ed67) popup_note_window_t

0x0872,	// (0x00020016) bg_popup_window_pane_cp6_ParamLimits

0x0872,	// (0x00020016) bg_popup_window_pane_cp6

0x50ef,	// (0x00024893) popup_note_image_window_g1_ParamLimits

0x50ef,	// (0x00024893) popup_note_image_window_g1

0x50fb,	// (0x0002489f) popup_note_image_window_g2_ParamLimits

0x50fb,	// (0x0002489f) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0002f037) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0002f037) popup_note_image_window_g

0x5114,	// (0x000248b8) popup_note_image_window_t1_ParamLimits

0x5114,	// (0x000248b8) popup_note_image_window_t1

0x512d,	// (0x000248d1) popup_note_image_window_t2_ParamLimits

0x512d,	// (0x000248d1) popup_note_image_window_t2

0x5146,	// (0x000248ea) popup_note_image_window_t3_ParamLimits

0x5146,	// (0x000248ea) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0002f03c) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0002f03c) popup_note_image_window_t

0x4fda,	// (0x0002477e) bg_popup_window_pane_cp7_ParamLimits

0x4fda,	// (0x0002477e) bg_popup_window_pane_cp7

0x500a,	// (0x000247ae) popup_note_wait_window_g1_ParamLimits

0x500a,	// (0x000247ae) popup_note_wait_window_g1

0x5016,	// (0x000247ba) popup_note_wait_window_g2_ParamLimits

0x5016,	// (0x000247ba) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0002f025) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0002f025) popup_note_wait_window_g

0x502e,	// (0x000247d2) popup_note_wait_window_t1_ParamLimits

0x502e,	// (0x000247d2) popup_note_wait_window_t1

0x5055,	// (0x000247f9) popup_note_wait_window_t2_ParamLimits

0x5055,	// (0x000247f9) popup_note_wait_window_t2

0x5072,	// (0x00024816) popup_note_wait_window_t3_ParamLimits

0x5072,	// (0x00024816) popup_note_wait_window_t3

0x5085,	// (0x00024829) popup_note_wait_window_t4_ParamLimits

0x5085,	// (0x00024829) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0002f02c) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0002f02c) popup_note_wait_window_t

0x50aa,	// (0x0002484e) wait_bar_pane_ParamLimits

0x50aa,	// (0x0002484e) wait_bar_pane

0x0607,	// (0x0001fdab) wait_anim_pane

0x0607,	// (0x0001fdab) wait_border_pane

0x0585,	// (0x0001fd29) wait_anim_pane_g1

0x0585,	// (0x0001fd29) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0002eef0) wait_anim_pane_g

0x4f8a,	// (0x0002472e) wait_border_pane_g1

0x4f93,	// (0x00024737) wait_border_pane_g2

0x4f9c,	// (0x00024740) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0002f01e) wait_border_pane_g

0x4eec,	// (0x00024690) bg_popup_window_pane_cp16_ParamLimits

0x4eec,	// (0x00024690) bg_popup_window_pane_cp16

0x4efa,	// (0x0002469e) indicator_popup_pane_cp4_ParamLimits

0x4efa,	// (0x0002469e) indicator_popup_pane_cp4

0x4f0e,	// (0x000246b2) popup_query_data_window_t1_ParamLimits

0x4f0e,	// (0x000246b2) popup_query_data_window_t1

0x4f20,	// (0x000246c4) popup_query_data_window_t2_ParamLimits

0x4f20,	// (0x000246c4) popup_query_data_window_t2

0x4f39,	// (0x000246dd) popup_query_data_window_t3_ParamLimits

0x4f39,	// (0x000246dd) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0002f017) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0002f017) popup_query_data_window_t

0x4f53,	// (0x000246f7) query_popup_data_pane_ParamLimits

0x4f53,	// (0x000246f7) query_popup_data_pane

0x4f67,	// (0x0002470b) query_popup_data_pane_cp1_ParamLimits

0x4f67,	// (0x0002470b) query_popup_data_pane_cp1

0x0872,	// (0x00020016) bg_popup_window_pane_cp10_ParamLimits

0x0872,	// (0x00020016) bg_popup_window_pane_cp10

0x4e4f,	// (0x000245f3) indicator_popup_pane_ParamLimits

0x4e4f,	// (0x000245f3) indicator_popup_pane

0x08c9,	// (0x0002006d) popup_query_code_window_t1_ParamLimits

0x08c9,	// (0x0002006d) popup_query_code_window_t1

0x4e67,	// (0x0002460b) popup_query_code_window_t2_ParamLimits

0x4e67,	// (0x0002460b) popup_query_code_window_t2

0x4ea5,	// (0x00024649) popup_query_code_window_t3_ParamLimits

0x4ea5,	// (0x00024649) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0002f010) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0002f010) popup_query_code_window_t

0x4ed4,	// (0x00024678) query_popup_pane_ParamLimits

0x4ed4,	// (0x00024678) query_popup_pane

0x0872,	// (0x00020016) bg_popup_window_pane_cp15_ParamLimits

0x0872,	// (0x00020016) bg_popup_window_pane_cp15

0x0890,	// (0x00020034) indicator_popup_pane_cp1_ParamLimits

0x0890,	// (0x00020034) indicator_popup_pane_cp1

0x08a3,	// (0x00020047) indicator_popup_pane_cp2_ParamLimits

0x08a3,	// (0x00020047) indicator_popup_pane_cp2

0x08b6,	// (0x0002005a) popup_query_data_code_window_g1_ParamLimits

0x08b6,	// (0x0002005a) popup_query_data_code_window_g1

0x08c9,	// (0x0002006d) popup_query_data_code_window_t1_ParamLimits

0x08c9,	// (0x0002006d) popup_query_data_code_window_t1

0x08db,	// (0x0002007f) popup_query_data_code_window_t2_ParamLimits

0x08db,	// (0x0002007f) popup_query_data_code_window_t2

0x08ed,	// (0x00020091) popup_query_data_code_window_t3_ParamLimits

0x08ed,	// (0x00020091) popup_query_data_code_window_t3

0x0903,	// (0x000200a7) popup_query_data_code_window_t4_ParamLimits

0x0903,	// (0x000200a7) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0002ed72) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0002ed72) popup_query_data_code_window_t

0x1b02,	// (0x000212a6) list_single_midp_graphic_pane_g3

0x091b,	// (0x000200bf) query_popup_data_pane_cp2_ParamLimits

0x092e,	// (0x000200d2) query_popup_pane_cp2_ParamLimits

0x092e,	// (0x000200d2) query_popup_pane_cp2

0x0607,	// (0x0001fdab) bg_popup_window_pane_cp11

0x4e23,	// (0x000245c7) heading_pane_cp5

0x09ba,	// (0x0002015e) listscroll_popup_info_pane

0x0607,	// (0x0001fdab) input_focus_pane_cp3

0x0941,	// (0x000200e5) query_popup_pane_t1

0x094f,	// (0x000200f3) list_popup_info_pane_ParamLimits

0x094f,	// (0x000200f3) list_popup_info_pane

0x095e,	// (0x00020102) listscroll_popup_info_pane_g1

0x0966,	// (0x0002010a) scroll_pane_cp7

0x096e,	// (0x00020112) popup_info_list_pane_t1_ParamLimits

0x096e,	// (0x00020112) popup_info_list_pane_t1

0x0988,	// (0x0002012c) popup_info_list_pane_t2_ParamLimits

0x0988,	// (0x0002012c) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0002ed7b) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0002ed7b) popup_info_list_pane_t

0x0607,	// (0x0001fdab) bg_popup_window_pane_cp12

0x5cc4,	// (0x00025468) find_popup_pane

0x066b,	// (0x0001fe0f) bg_popup_window_pane_cp3

0x09a2,	// (0x00020146) heading_pane_cp3

0x09ae,	// (0x00020152) listscroll_popup_graphic_pane

0x0607,	// (0x0001fdab) bg_popup_window_pane_cp4

0x2e29,	// (0x000225cd) heading_pane_cp4

0x09ba,	// (0x0002015e) listscroll_popup_colour_pane

0x09c2,	// (0x00020166) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x09c2,	// (0x00020166) cell_large_graphic_colour_none_popup_pane

0x2e31,	// (0x000225d5) grid_large_graphic_colour_popup_pane_ParamLimits

0x2e31,	// (0x000225d5) grid_large_graphic_colour_popup_pane

0x2e4d,	// (0x000225f1) listscroll_popup_colour_pane_g1_ParamLimits

0x2e4d,	// (0x000225f1) listscroll_popup_colour_pane_g1

0x2e64,	// (0x00022608) listscroll_popup_colour_pane_g2_ParamLimits

0x2e64,	// (0x00022608) listscroll_popup_colour_pane_g2

0x09d2,	// (0x00020176) listscroll_popup_colour_pane_g3_ParamLimits

0x09d2,	// (0x00020176) listscroll_popup_colour_pane_g3

0x2e78,	// (0x0002261c) listscroll_popup_colour_pane_g4_ParamLimits

0x2e78,	// (0x0002261c) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0002ed80) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0002ed80) listscroll_popup_colour_pane_g

0x09e2,	// (0x00020186) scroll_pane_cp6_ParamLimits

0x09e2,	// (0x00020186) scroll_pane_cp6

0x2e87,	// (0x0002262b) cell_large_graphic_colour_popup_pane_ParamLimits

0x2e87,	// (0x0002262b) cell_large_graphic_colour_popup_pane

0x09f4,	// (0x00020198) cell_large_graphic_colour_none_popup_pane_t1

0x0607,	// (0x0001fdab) grid_highlight_pane_cp5

0x0a03,	// (0x000201a7) cell_large_graphic_colour_popup_pane_g1

0x0a0b,	// (0x000201af) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0002ed89) cell_large_graphic_colour_popup_pane_g

0x0a13,	// (0x000201b7) cell_large_graphic_colour_popup_pane_g2_copy1

0x0a1c,	// (0x000201c0) grid_highlight_pane_cp4

0x0a24,	// (0x000201c8) bg_popup_window_pane_cp8_ParamLimits

0x0a24,	// (0x000201c8) bg_popup_window_pane_cp8

0x0a3f,	// (0x000201e3) popup_snote_single_text_window_g1_ParamLimits

0x0a3f,	// (0x000201e3) popup_snote_single_text_window_g1

0x0a51,	// (0x000201f5) popup_snote_single_text_window_t1_ParamLimits

0x0a51,	// (0x000201f5) popup_snote_single_text_window_t1

0x0a64,	// (0x00020208) popup_snote_single_text_window_t2_ParamLimits

0x0a64,	// (0x00020208) popup_snote_single_text_window_t2

0x0a77,	// (0x0002021b) popup_snote_single_text_window_t3_ParamLimits

0x0a77,	// (0x0002021b) popup_snote_single_text_window_t3

0x0ab0,	// (0x00020254) popup_snote_single_text_window_t4_ParamLimits

0x0ab0,	// (0x00020254) popup_snote_single_text_window_t4

0x0ae4,	// (0x00020288) popup_snote_single_text_window_t5_ParamLimits

0x0ae4,	// (0x00020288) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0002ed8e) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0002ed8e) popup_snote_single_text_window_t

0x0b13,	// (0x000202b7) bg_popup_window_pane_cp9_ParamLimits

0x0b13,	// (0x000202b7) bg_popup_window_pane_cp9

0x0a3f,	// (0x000201e3) popup_snote_single_graphic_window_g1_ParamLimits

0x0a3f,	// (0x000201e3) popup_snote_single_graphic_window_g1

0x0b21,	// (0x000202c5) popup_snote_single_graphic_window_g2_ParamLimits

0x0b21,	// (0x000202c5) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0002ed99) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0002ed99) popup_snote_single_graphic_window_g

0x0b2d,	// (0x000202d1) popup_snote_single_graphic_window_t1_ParamLimits

0x0b2d,	// (0x000202d1) popup_snote_single_graphic_window_t1

0x0b40,	// (0x000202e4) popup_snote_single_graphic_window_t2_ParamLimits

0x0b40,	// (0x000202e4) popup_snote_single_graphic_window_t2

0x0a77,	// (0x0002021b) popup_snote_single_graphic_window_t3_ParamLimits

0x0a77,	// (0x0002021b) popup_snote_single_graphic_window_t3

0x0ab0,	// (0x00020254) popup_snote_single_graphic_window_t4_ParamLimits

0x0ab0,	// (0x00020254) popup_snote_single_graphic_window_t4

0x0ae4,	// (0x00020288) popup_snote_single_graphic_window_t5_ParamLimits

0x0ae4,	// (0x00020288) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0002ed9e) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0002ed9e) popup_snote_single_graphic_window_t

0x7dd3,	// (0x00027577) grid_graphic_popup_pane_ParamLimits

0x7dd3,	// (0x00027577) grid_graphic_popup_pane

0x7df6,	// (0x0002759a) listscroll_popup_graphic_pane_g1_ParamLimits

0x7df6,	// (0x0002759a) listscroll_popup_graphic_pane_g1

0x7e0a,	// (0x000275ae) listscroll_popup_graphic_pane_g2_ParamLimits

0x7e0a,	// (0x000275ae) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0002f18d) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0002f18d) listscroll_popup_graphic_pane_g

0x5c7c,	// (0x00025420) scroll_pane_cp5

0x7d8c,	// (0x00027530) cell_graphic_popup_pane_ParamLimits

0x7d8c,	// (0x00027530) cell_graphic_popup_pane

0x5c47,	// (0x000253eb) cell_graphic_popup_pane_g1

0x5c4f,	// (0x000253f3) cell_graphic_popup_pane_g2

0x0a13,	// (0x000201b7) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0002f186) cell_graphic_popup_pane_g

0x5c58,	// (0x000253fc) cell_graphic_popup_pane_t2

0x0a1c,	// (0x000201c0) grid_highlight_pane_cp3

0x0b65,	// (0x00020309) list_gen_pane_ParamLimits

0x0b65,	// (0x00020309) list_gen_pane

0x0b8e,	// (0x00020332) scroll_pane

0x7d5d,	// (0x00027501) bg_list_pane_g1_ParamLimits

0x7d5d,	// (0x00027501) bg_list_pane_g1

0x5bf6,	// (0x0002539a) bg_list_pane_g2_ParamLimits

0x5bf6,	// (0x0002539a) bg_list_pane_g2

0x5c09,	// (0x000253ad) bg_list_pane_g3_ParamLimits

0x5c09,	// (0x000253ad) bg_list_pane_g3

0x5c1b,	// (0x000253bf) bg_list_pane_g4_ParamLimits

0x5c1b,	// (0x000253bf) bg_list_pane_g4

0x7d74,	// (0x00027518) bg_list_pane_g5_ParamLimits

0x7d74,	// (0x00027518) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0002f17b) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0002f17b) bg_list_pane_g

0x7d0d,	// (0x000274b1) list_double2_graphic_large_graphic_pane_ParamLimits

0x7d0d,	// (0x000274b1) list_double2_graphic_large_graphic_pane

0x7d0d,	// (0x000274b1) list_double2_graphic_pane_ParamLimits

0x7d0d,	// (0x000274b1) list_double2_graphic_pane

0x7d0d,	// (0x000274b1) list_double2_large_graphic_pane_ParamLimits

0x7d0d,	// (0x000274b1) list_double2_large_graphic_pane

0x7d0d,	// (0x000274b1) list_double2_pane_ParamLimits

0x7d0d,	// (0x000274b1) list_double2_pane

0x7d0d,	// (0x000274b1) list_double_graphic_heading_pane_ParamLimits

0x7d0d,	// (0x000274b1) list_double_graphic_heading_pane

0x7d0d,	// (0x000274b1) list_double_graphic_pane_ParamLimits

0x7d0d,	// (0x000274b1) list_double_graphic_pane

0x7d0d,	// (0x000274b1) list_double_heading_pane_ParamLimits

0x7d0d,	// (0x000274b1) list_double_heading_pane

0x7d0d,	// (0x000274b1) list_double_large_graphic_pane_ParamLimits

0x7d0d,	// (0x000274b1) list_double_large_graphic_pane

0x7d0d,	// (0x000274b1) list_double_number_pane_ParamLimits

0x7d0d,	// (0x000274b1) list_double_number_pane

0x7d0d,	// (0x000274b1) list_double_pane_ParamLimits

0x7d0d,	// (0x000274b1) list_double_pane

0x7d0d,	// (0x000274b1) list_double_time_pane_ParamLimits

0x7d0d,	// (0x000274b1) list_double_time_pane

0x7d0d,	// (0x000274b1) list_setting_number_pane_ParamLimits

0x7d0d,	// (0x000274b1) list_setting_number_pane

0x7d0d,	// (0x000274b1) list_setting_pane_ParamLimits

0x7d0d,	// (0x000274b1) list_setting_pane

0xbea2,	// (0x0002b646) list_single_2graphic_pane_ParamLimits

0xbea2,	// (0x0002b646) list_single_2graphic_pane

0xbea2,	// (0x0002b646) list_single_graphic_heading_pane_ParamLimits

0xbea2,	// (0x0002b646) list_single_graphic_heading_pane

0xbea2,	// (0x0002b646) list_single_graphic_pane_ParamLimits

0xbea2,	// (0x0002b646) list_single_graphic_pane

0xbea2,	// (0x0002b646) list_single_heading_pane_ParamLimits

0xbea2,	// (0x0002b646) list_single_heading_pane

0xcf39,	// (0x0002c6dd) list_single_large_graphic_pane_ParamLimits

0xcf39,	// (0x0002c6dd) list_single_large_graphic_pane

0xbea2,	// (0x0002b646) list_single_number_heading_pane_ParamLimits

0xbea2,	// (0x0002b646) list_single_number_heading_pane

0xbea2,	// (0x0002b646) list_single_number_pane_ParamLimits

0xbea2,	// (0x0002b646) list_single_number_pane

0xbea2,	// (0x0002b646) list_single_pane_ParamLimits

0xbea2,	// (0x0002b646) list_single_pane

0x0607,	// (0x0001fdab) list_highlight_pane_cp1

0xc61d,	// (0x0002bdc1) list_single_pane_g1_ParamLimits

0xc61d,	// (0x0002bdc1) list_single_pane_g1

0xc629,	// (0x0002bdcd) list_single_pane_g2_ParamLimits

0xc629,	// (0x0002bdcd) list_single_pane_g2

0x0001,

0xf616,	// (0x0002edba) list_single_pane_g_ParamLimits

0xf616,	// (0x0002edba) list_single_pane_g

0xbe78,	// (0x0002b61c) list_single_pane_t1_ParamLimits

0xbe78,	// (0x0002b61c) list_single_pane_t1

0xc61d,	// (0x0002bdc1) list_single_number_pane_g1_ParamLimits

0xc61d,	// (0x0002bdc1) list_single_number_pane_g1

0xc629,	// (0x0002bdcd) list_single_number_pane_g2_ParamLimits

0xc629,	// (0x0002bdcd) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0002edba) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0002edba) list_single_number_pane_g

0xb676,	// (0x0002ae1a) list_single_number_pane_t1_ParamLimits

0xb676,	// (0x0002ae1a) list_single_number_pane_t1

0xbe37,	// (0x0002b5db) list_single_number_pane_t2_ParamLimits

0xbe37,	// (0x0002b5db) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0002f13c) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0002f13c) list_single_number_pane_t

0xb66a,	// (0x0002ae0e) list_single_graphic_pane_g1_ParamLimits

0xb66a,	// (0x0002ae0e) list_single_graphic_pane_g1

0xc61d,	// (0x0002bdc1) list_single_graphic_pane_g2_ParamLimits

0xc61d,	// (0x0002bdc1) list_single_graphic_pane_g2

0xc629,	// (0x0002bdcd) list_single_graphic_pane_g3_ParamLimits

0xc629,	// (0x0002bdcd) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0002eda9) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0002eda9) list_single_graphic_pane_g

0xb676,	// (0x0002ae1a) list_single_graphic_pane_t1_ParamLimits

0xb676,	// (0x0002ae1a) list_single_graphic_pane_t1

0xb68c,	// (0x0002ae30) list_single_heading_pane_g1_ParamLimits

0xb68c,	// (0x0002ae30) list_single_heading_pane_g1

0xc629,	// (0x0002bdcd) list_single_heading_pane_g2_ParamLimits

0xc629,	// (0x0002bdcd) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0002edb0) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0002edb0) list_single_heading_pane_g

0xb69f,	// (0x0002ae43) list_single_heading_pane_t1_ParamLimits

0xb69f,	// (0x0002ae43) list_single_heading_pane_t1

0xb6b5,	// (0x0002ae59) list_single_heading_pane_t2_ParamLimits

0xb6b5,	// (0x0002ae59) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0002edb5) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0002edb5) list_single_heading_pane_t

0xc61d,	// (0x0002bdc1) list_single_number_heading_pane_g1_ParamLimits

0xc61d,	// (0x0002bdc1) list_single_number_heading_pane_g1

0xc629,	// (0x0002bdcd) list_single_number_heading_pane_g2_ParamLimits

0xc629,	// (0x0002bdcd) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0002edba) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0002edba) list_single_number_heading_pane_g

0xb6c7,	// (0x0002ae6b) list_single_number_heading_pane_t1_ParamLimits

0xb6c7,	// (0x0002ae6b) list_single_number_heading_pane_t1

0xb6dd,	// (0x0002ae81) list_single_number_heading_pane_t2_ParamLimits

0xb6dd,	// (0x0002ae81) list_single_number_heading_pane_t2

0xb6ef,	// (0x0002ae93) list_single_number_heading_pane_t3_ParamLimits

0xb6ef,	// (0x0002ae93) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0002edbf) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0002edbf) list_single_number_heading_pane_t

0xb701,	// (0x0002aea5) list_single_graphic_heading_pane_g1_ParamLimits

0xb701,	// (0x0002aea5) list_single_graphic_heading_pane_g1

0xc635,	// (0x0002bdd9) list_single_graphic_heading_pane_g4_ParamLimits

0xc635,	// (0x0002bdd9) list_single_graphic_heading_pane_g4

0xc629,	// (0x0002bdcd) list_single_graphic_heading_pane_g5_ParamLimits

0xc629,	// (0x0002bdcd) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0002edc6) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0002edc6) list_single_graphic_heading_pane_g

0xb6c7,	// (0x0002ae6b) list_single_graphic_heading_pane_t1_ParamLimits

0xb6c7,	// (0x0002ae6b) list_single_graphic_heading_pane_t1

0xb715,	// (0x0002aeb9) list_single_graphic_heading_pane_t2_ParamLimits

0xb715,	// (0x0002aeb9) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0002edcd) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0002edcd) list_single_graphic_heading_pane_t

0xc644,	// (0x0002bde8) list_single_large_graphic_pane_g1_ParamLimits

0xc644,	// (0x0002bde8) list_single_large_graphic_pane_g1

0xc650,	// (0x0002bdf4) list_single_large_graphic_pane_g2_ParamLimits

0xc650,	// (0x0002bdf4) list_single_large_graphic_pane_g2

0xc65c,	// (0x0002be00) list_single_large_graphic_pane_g3_ParamLimits

0xc65c,	// (0x0002be00) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0002edd2) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0002edd2) list_single_large_graphic_pane_g

0x4f93,	// (0x00024737) wait_border_pane_g2_copy1

0xc668,	// (0x0002be0c) list_single_large_graphic_pane_g4_cp2

0xb72d,	// (0x0002aed1) list_single_large_graphic_pane_t1_ParamLimits

0xb72d,	// (0x0002aed1) list_single_large_graphic_pane_t1

0xc670,	// (0x0002be14) list_double_pane_g1_ParamLimits

0xc670,	// (0x0002be14) list_double_pane_g1

0xc67c,	// (0x0002be20) list_double_pane_g2_ParamLimits

0xc67c,	// (0x0002be20) list_double_pane_g2

0x0001,

0xf635,	// (0x0002edd9) list_double_pane_g_ParamLimits

0xf635,	// (0x0002edd9) list_double_pane_g

0xb743,	// (0x0002aee7) list_double_pane_t1_ParamLimits

0xb743,	// (0x0002aee7) list_double_pane_t1

0xb759,	// (0x0002aefd) list_double_pane_t2_ParamLimits

0xb759,	// (0x0002aefd) list_double_pane_t2

0x0001,

0xf63a,	// (0x0002edde) list_double_pane_t_ParamLimits

0xf63a,	// (0x0002edde) list_double_pane_t

0xb76b,	// (0x0002af0f) list_double2_pane_g1_ParamLimits

0xb76b,	// (0x0002af0f) list_double2_pane_g1

0xb77a,	// (0x0002af1e) list_double2_pane_g2_ParamLimits

0xb77a,	// (0x0002af1e) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0002ede3) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0002ede3) list_double2_pane_g

0xb786,	// (0x0002af2a) list_double2_pane_t1_ParamLimits

0xb786,	// (0x0002af2a) list_double2_pane_t1

0xb79c,	// (0x0002af40) list_double2_pane_t2_ParamLimits

0xb79c,	// (0x0002af40) list_double2_pane_t2

0x0001,

0xf644,	// (0x0002ede8) list_double2_pane_t_ParamLimits

0xf644,	// (0x0002ede8) list_double2_pane_t

0xc670,	// (0x0002be14) list_double_number_pane_g1_ParamLimits

0xc670,	// (0x0002be14) list_double_number_pane_g1

0xc67c,	// (0x0002be20) list_double_number_pane_g2_ParamLimits

0xc67c,	// (0x0002be20) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0002edd9) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0002edd9) list_double_number_pane_g

0xb7ae,	// (0x0002af52) list_double_number_pane_t1_ParamLimits

0xb7ae,	// (0x0002af52) list_double_number_pane_t1

0xb7c0,	// (0x0002af64) list_double_number_pane_t2_ParamLimits

0xb7c0,	// (0x0002af64) list_double_number_pane_t2

0xb7d6,	// (0x0002af7a) list_double_number_pane_t3_ParamLimits

0xb7d6,	// (0x0002af7a) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0002eded) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0002eded) list_double_number_pane_t

0xb7e8,	// (0x0002af8c) list_double_graphic_pane_g1_ParamLimits

0xb7e8,	// (0x0002af8c) list_double_graphic_pane_g1

0xc688,	// (0x0002be2c) list_double_graphic_pane_g2_ParamLimits

0xc688,	// (0x0002be2c) list_double_graphic_pane_g2

0xc697,	// (0x0002be3b) list_double_graphic_pane_g3_ParamLimits

0xc697,	// (0x0002be3b) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0002edf4) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0002edf4) list_double_graphic_pane_g

0xb7f4,	// (0x0002af98) list_double_graphic_pane_t1_ParamLimits

0xb7f4,	// (0x0002af98) list_double_graphic_pane_t1

0xb80a,	// (0x0002afae) list_double_graphic_pane_t2_ParamLimits

0xb80a,	// (0x0002afae) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0002edfd) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0002edfd) list_double_graphic_pane_t

0xb81c,	// (0x0002afc0) list_double2_graphic_pane_g1_ParamLimits

0xb81c,	// (0x0002afc0) list_double2_graphic_pane_g1

0x0bc3,	// (0x00020367) list_double2_graphic_pane_g2_ParamLimits

0x0bc3,	// (0x00020367) list_double2_graphic_pane_g2

0xc6af,	// (0x0002be53) list_double2_graphic_pane_g3_ParamLimits

0xc6af,	// (0x0002be53) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0002ee02) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0002ee02) list_double2_graphic_pane_g

0xb828,	// (0x0002afcc) list_double2_graphic_pane_t1_ParamLimits

0xb828,	// (0x0002afcc) list_double2_graphic_pane_t1

0xb83e,	// (0x0002afe2) list_double2_graphic_pane_t2_ParamLimits

0xb83e,	// (0x0002afe2) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0002ee09) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0002ee09) list_double2_graphic_pane_t

0xb850,	// (0x0002aff4) list_double_large_graphic_pane_g1_ParamLimits

0xb850,	// (0x0002aff4) list_double_large_graphic_pane_g1

0xb86d,	// (0x0002b011) list_double_large_graphic_pane_g2_ParamLimits

0xb86d,	// (0x0002b011) list_double_large_graphic_pane_g2

0xc67c,	// (0x0002be20) list_double_large_graphic_pane_g3_ParamLimits

0xc67c,	// (0x0002be20) list_double_large_graphic_pane_g3

0xb881,	// (0x0002b025) list_double_large_graphic_pane_g4_ParamLimits

0xb881,	// (0x0002b025) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0002ee0e) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0002ee0e) list_double_large_graphic_pane_g

0xb892,	// (0x0002b036) list_double_large_graphic_pane_t1_ParamLimits

0xb892,	// (0x0002b036) list_double_large_graphic_pane_t1

0xb8ab,	// (0x0002b04f) list_double_large_graphic_pane_t2_ParamLimits

0xb8ab,	// (0x0002b04f) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0002ee19) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0002ee19) list_double_large_graphic_pane_t

0xc6d0,	// (0x0002be74) list_double2_large_graphic_pane_g1_ParamLimits

0xc6d0,	// (0x0002be74) list_double2_large_graphic_pane_g1

0xc6dc,	// (0x0002be80) list_double2_large_graphic_pane_g2_ParamLimits

0xc6dc,	// (0x0002be80) list_double2_large_graphic_pane_g2

0xc6af,	// (0x0002be53) list_double2_large_graphic_pane_g3_ParamLimits

0xc6af,	// (0x0002be53) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0002ee1e) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0002ee1e) list_double2_large_graphic_pane_g

0xb8bd,	// (0x0002b061) list_double2_large_graphic_pane_t1_ParamLimits

0xb8bd,	// (0x0002b061) list_double2_large_graphic_pane_t1

0xb8d3,	// (0x0002b077) list_double2_large_graphic_pane_t2_ParamLimits

0xb8d3,	// (0x0002b077) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0002ee25) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0002ee25) list_double2_large_graphic_pane_t

0xb8e5,	// (0x0002b089) list_double_heading_pane_g1_ParamLimits

0xb8e5,	// (0x0002b089) list_double_heading_pane_g1

0xb8f4,	// (0x0002b098) list_double_heading_pane_g2_ParamLimits

0xb8f4,	// (0x0002b098) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0002ee2a) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0002ee2a) list_double_heading_pane_g

0xb900,	// (0x0002b0a4) list_double_heading_pane_t1_ParamLimits

0xb900,	// (0x0002b0a4) list_double_heading_pane_t1

0xb79c,	// (0x0002af40) list_double_heading_pane_t2_ParamLimits

0xb79c,	// (0x0002af40) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0002ee2f) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0002ee2f) list_double_heading_pane_t

0xb916,	// (0x0002b0ba) list_double_graphic_heading_pane_g1_ParamLimits

0xb916,	// (0x0002b0ba) list_double_graphic_heading_pane_g1

0xb8e5,	// (0x0002b089) list_double_graphic_heading_pane_g2_ParamLimits

0xb8e5,	// (0x0002b089) list_double_graphic_heading_pane_g2

0xb8f4,	// (0x0002b098) list_double_graphic_heading_pane_g3_ParamLimits

0xb8f4,	// (0x0002b098) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0002ee34) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0002ee34) list_double_graphic_heading_pane_g

0xb922,	// (0x0002b0c6) list_double_graphic_heading_pane_t1_ParamLimits

0xb922,	// (0x0002b0c6) list_double_graphic_heading_pane_t1

0xb83e,	// (0x0002afe2) list_double_graphic_heading_pane_t2_ParamLimits

0xb83e,	// (0x0002afe2) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0002ee3b) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0002ee3b) list_double_graphic_heading_pane_t

0xb938,	// (0x0002b0dc) list_double_time_pane_g1_ParamLimits

0xb938,	// (0x0002b0dc) list_double_time_pane_g1

0xb947,	// (0x0002b0eb) list_double_time_pane_g2_ParamLimits

0xb947,	// (0x0002b0eb) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0002ee40) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0002ee40) list_double_time_pane_g

0xb953,	// (0x0002b0f7) list_double_time_pane_t1_ParamLimits

0xb953,	// (0x0002b0f7) list_double_time_pane_t1

0xb969,	// (0x0002b10d) list_double_time_pane_t2_ParamLimits

0xb969,	// (0x0002b10d) list_double_time_pane_t2

0xb97b,	// (0x0002b11f) list_double_time_pane_t3_ParamLimits

0xb97b,	// (0x0002b11f) list_double_time_pane_t3

0xb98d,	// (0x0002b131) list_double_time_pane_t4_ParamLimits

0xb98d,	// (0x0002b131) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0002ee45) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0002ee45) list_double_time_pane_t

0xb99f,	// (0x0002b143) list_setting_pane_g1_ParamLimits

0xb99f,	// (0x0002b143) list_setting_pane_g1

0xb77a,	// (0x0002af1e) list_setting_pane_g2_ParamLimits

0xb77a,	// (0x0002af1e) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0002ee4e) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0002ee4e) list_setting_pane_g

0xb9ab,	// (0x0002b14f) list_setting_pane_t1_ParamLimits

0xb9ab,	// (0x0002b14f) list_setting_pane_t1

0xb9c5,	// (0x0002b169) list_setting_pane_t2_ParamLimits

0xb9c5,	// (0x0002b169) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0002ee53) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0002ee53) list_setting_pane_t

0xba02,	// (0x0002b1a6) set_value_pane_cp_ParamLimits

0xba02,	// (0x0002b1a6) set_value_pane_cp

0xba0e,	// (0x0002b1b2) list_setting_number_pane_g1_ParamLimits

0xba0e,	// (0x0002b1b2) list_setting_number_pane_g1

0xba1a,	// (0x0002b1be) list_setting_number_pane_g2_ParamLimits

0xba1a,	// (0x0002b1be) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0002ee5a) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0002ee5a) list_setting_number_pane_g

0xba26,	// (0x0002b1ca) list_setting_number_pane_t1_ParamLimits

0xba26,	// (0x0002b1ca) list_setting_number_pane_t1

0xba3d,	// (0x0002b1e1) list_setting_number_pane_t2_ParamLimits

0xba3d,	// (0x0002b1e1) list_setting_number_pane_t2

0xba57,	// (0x0002b1fb) list_setting_number_pane_t3_ParamLimits

0xba57,	// (0x0002b1fb) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0002ee5f) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0002ee5f) list_setting_number_pane_t

0xba02,	// (0x0002b1a6) set_value_pane_ParamLimits

0xba02,	// (0x0002b1a6) set_value_pane

0x1280,	// (0x00020a24) bg_set_opt_pane_ParamLimits

0x1280,	// (0x00020a24) bg_set_opt_pane

0xba98,	// (0x0002b23c) set_value_pane_t1

0x12a1,	// (0x00020a45) slider_set_pane_cp3

0x12aa,	// (0x00020a4e) volume_small_pane_cp

0x12b3,	// (0x00020a57) list_form_gen_pane

0x0bb2,	// (0x00020356) scroll_pane_cp8

0xbab6,	// (0x0002b25a) form_field_data_pane_ParamLimits

0xbab6,	// (0x0002b25a) form_field_data_pane

0xbad6,	// (0x0002b27a) form_field_data_wide_pane_ParamLimits

0xbad6,	// (0x0002b27a) form_field_data_wide_pane

0xbaf5,	// (0x0002b299) form_field_popup_pane_ParamLimits

0xbaf5,	// (0x0002b299) form_field_popup_pane

0xbb0d,	// (0x0002b2b1) form_field_popup_wide_pane_ParamLimits

0xbb0d,	// (0x0002b2b1) form_field_popup_wide_pane

0xbb24,	// (0x0002b2c8) form_field_slider_pane_ParamLimits

0xbb24,	// (0x0002b2c8) form_field_slider_pane

0xbb37,	// (0x0002b2db) form_field_slider_wide_pane_ParamLimits

0xbb37,	// (0x0002b2db) form_field_slider_wide_pane

0x12bc,	// (0x00020a60) data_form_pane

0xbb52,	// (0x0002b2f6) form_field_data_pane_t1

0x12c8,	// (0x00020a6c) input_focus_pane

0x12d6,	// (0x00020a7a) data_form_wide_pane

0xbb76,	// (0x0002b31a) form_field_data_wide_pane_t1

0x0a31,	// (0x000201d5) input_focus_pane_cp6

0xbb98,	// (0x0002b33c) form_field_popup_pane_t1

0x12c8,	// (0x00020a6c) input_focus_pane_cp7

0x12bc,	// (0x00020a60) list_form_pane

0xbbb8,	// (0x0002b35c) form_field_popup_wide_pane_t1

0x12c8,	// (0x00020a6c) input_focus_pane_cp8

0x12f6,	// (0x00020a9a) list_form_wide_pane

0xbbd5,	// (0x0002b379) form_field_slider_pane_t1_ParamLimits

0xbbd5,	// (0x0002b379) form_field_slider_pane_t1

0xbbeb,	// (0x0002b38f) form_field_slider_pane_t2_ParamLimits

0xbbeb,	// (0x0002b38f) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0002ee6f) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0002ee6f) form_field_slider_pane_t

0x0655,	// (0x0001fdf9) input_focus_pane_cp9_ParamLimits

0x0655,	// (0x0001fdf9) input_focus_pane_cp9

0xbc00,	// (0x0002b3a4) slider_cont_pane_ParamLimits

0xbc00,	// (0x0002b3a4) slider_cont_pane

0x1305,	// (0x00020aa9) form_field_slider_wide_pane_t1_ParamLimits

0x1305,	// (0x00020aa9) form_field_slider_wide_pane_t1

0xbc14,	// (0x0002b3b8) form_field_slider_wide_pane_t2_ParamLimits

0xbc14,	// (0x0002b3b8) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0002ee74) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0002ee74) form_field_slider_wide_pane_t

0x0655,	// (0x0001fdf9) input_focus_pane_cp10_ParamLimits

0x0655,	// (0x0001fdf9) input_focus_pane_cp10

0xbc26,	// (0x0002b3ca) slider_cont_pane_cp1_ParamLimits

0xbc26,	// (0x0002b3ca) slider_cont_pane_cp1

0xbc3c,	// (0x0002b3e0) slider_form_pane_cp

0x1317,	// (0x00020abb) input_focus_pane_g1

0x131f,	// (0x00020ac3) input_focus_pane_g2

0x1327,	// (0x00020acb) input_focus_pane_g3

0x132f,	// (0x00020ad3) input_focus_pane_g4

0x1337,	// (0x00020adb) input_focus_pane_g5

0x133f,	// (0x00020ae3) input_focus_pane_g6

0x1347,	// (0x00020aeb) input_focus_pane_g7

0x134f,	// (0x00020af3) input_focus_pane_g8

0x1357,	// (0x00020afb) input_focus_pane_g9

0x0585,	// (0x0001fd29) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0002ee79) input_focus_pane_g

0x4f9c,	// (0x00024740) wait_border_pane_g3_copy1

0xbc44,	// (0x0002b3e8) data_form_pane_t1

0x0585,	// (0x0001fd29) wait_anim_pane_g1_copy1

0xbe49,	// (0x0002b5ed) data_form_wide_pane_t1

0xbc5e,	// (0x0002b402) list_form_graphic_pane_cp_ParamLimits

0xbc5e,	// (0x0002b402) list_form_graphic_pane_cp

0x5b9c,	// (0x00025340) slider_form_pane_g1

0x5ba5,	// (0x00025349) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0002f16c) slider_form_pane_g

0xbc72,	// (0x0002b416) list_form_graphic_pane_ParamLimits

0xbc72,	// (0x0002b416) list_form_graphic_pane

0xbc88,	// (0x0002b42c) list_form_graphic_pane_g1

0xbc90,	// (0x0002b434) list_form_graphic_pane_t1_ParamLimits

0xbc90,	// (0x0002b434) list_form_graphic_pane_t1

0x066b,	// (0x0001fe0f) list_highlight_pane_cp5_ParamLimits

0x066b,	// (0x0001fe0f) list_highlight_pane_cp5

0xbca5,	// (0x0002b449) find_pane_g1

0x1373,	// (0x00020b17) input_find_pane

0xbcae,	// (0x0002b452) input_find_pane_g1_ParamLimits

0xbcae,	// (0x0002b452) input_find_pane_g1

0xbcba,	// (0x0002b45e) input_find_pane_t1_ParamLimits

0xbcba,	// (0x0002b45e) input_find_pane_t1

0xbccf,	// (0x0002b473) input_find_pane_t2_ParamLimits

0xbccf,	// (0x0002b473) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0002ee8e) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0002ee8e) input_find_pane_t

0x137c,	// (0x00020b20) input_focus_pane_cp5_ParamLimits

0x137c,	// (0x00020b20) input_focus_pane_cp5

0x0655,	// (0x0001fdf9) bg_popup_window_pane_cp2_ParamLimits

0x0655,	// (0x0001fdf9) bg_popup_window_pane_cp2

0x1396,	// (0x00020b3a) listscroll_menu_pane_ParamLimits

0x1396,	// (0x00020b3a) listscroll_menu_pane

0x13a2,	// (0x00020b46) popup_submenu_window_ParamLimits

0x13a2,	// (0x00020b46) popup_submenu_window

0x13c6,	// (0x00020b6a) find_popup_pane_g1

0x13ce,	// (0x00020b72) input_popup_find_pane_cp

0x137c,	// (0x00020b20) input_focus_pane_cp4_ParamLimits

0x137c,	// (0x00020b20) input_focus_pane_cp4

0x13d8,	// (0x00020b7c) input_popup_find_pane_t1_ParamLimits

0x13d8,	// (0x00020b7c) input_popup_find_pane_t1

0x0607,	// (0x0001fdab) bg_popup_sub_pane_cp

0x1406,	// (0x00020baa) listscroll_popup_sub_pane

0x140e,	// (0x00020bb2) list_submenu_pane_ParamLimits

0x140e,	// (0x00020bb2) list_submenu_pane

0x141f,	// (0x00020bc3) scroll_pane_cp4

0x135f,	// (0x00020b03) list_single_popup_submenu_pane_ParamLimits

0x135f,	// (0x00020b03) list_single_popup_submenu_pane

0x1427,	// (0x00020bcb) list_single_popup_submenu_pane_g1

0x142f,	// (0x00020bd3) list_single_popup_submenu_pane_t1_ParamLimits

0x142f,	// (0x00020bd3) list_single_popup_submenu_pane_t1

0x066b,	// (0x0001fe0f) bg_active_tab_pane_cp1_ParamLimits

0x066b,	// (0x0001fe0f) bg_active_tab_pane_cp1

0x2ed2,	// (0x00022676) tabs_2_active_pane_g1

0x2eda,	// (0x0002267e) tabs_2_active_pane_t1

0x066b,	// (0x0001fe0f) bg_passive_tab_pane_cp1_ParamLimits

0x066b,	// (0x0001fe0f) bg_passive_tab_pane_cp1

0x2ed2,	// (0x00022676) tabs_2_passive_pane_g1

0x2eda,	// (0x0002267e) tabs_2_passive_pane_t1

0x1837,	// (0x00020fdb) bg_active_tab_pane_cp4

0x2eec,	// (0x00022690) tabs_2_long_active_pane_t1

0x2eff,	// (0x000226a3) bg_passive_tab_pane_cp4

0x557c,	// (0x00024d20) list_single_midp_graphic_pane_g4_ParamLimits

0x1837,	// (0x00020fdb) bg_active_tab_pane_cp5

0x2f0b,	// (0x000226af) tabs_3_long_active_pane_t1

0x2eff,	// (0x000226a3) bg_passive_tab_pane_cp5

0x557c,	// (0x00024d20) list_single_midp_graphic_pane_g4

0x066b,	// (0x0001fe0f) bg_popup_window_pane_cp13_ParamLimits

0x066b,	// (0x0001fe0f) bg_popup_window_pane_cp13

0x144d,	// (0x00020bf1) listscroll_popup_fast_pane_ParamLimits

0x144d,	// (0x00020bf1) listscroll_popup_fast_pane

0x145c,	// (0x00020c00) grid_popup_fast_pane_ParamLimits

0x145c,	// (0x00020c00) grid_popup_fast_pane

0x146e,	// (0x00020c12) scroll_pane_cp9_ParamLimits

0x146e,	// (0x00020c12) scroll_pane_cp9

0x8b2b,	// (0x000282cf) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8b2b,	// (0x000282cf) list_single_graphic_hl_pane_t1_cp2

0x1492,	// (0x00020c36) input_focus_pane_cp20_ParamLimits

0x1492,	// (0x00020c36) input_focus_pane_cp20

0x14a0,	// (0x00020c44) query_popup_data_pane_t1_ParamLimits

0x14a0,	// (0x00020c44) query_popup_data_pane_t1

0x14b3,	// (0x00020c57) query_popup_data_pane_t2_ParamLimits

0x14b3,	// (0x00020c57) query_popup_data_pane_t2

0x14f9,	// (0x00020c9d) query_popup_data_pane_t3_ParamLimits

0x14f9,	// (0x00020c9d) query_popup_data_pane_t3

0x153a,	// (0x00020cde) query_popup_data_pane_t4_ParamLimits

0x153a,	// (0x00020cde) query_popup_data_pane_t4

0x1576,	// (0x00020d1a) query_popup_data_pane_t5_ParamLimits

0x1576,	// (0x00020d1a) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0002ee93) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0002ee93) query_popup_data_pane_t

0x1317,	// (0x00020abb) bg_set_opt_pane_g1

0x131f,	// (0x00020ac3) bg_set_opt_pane_g2

0x1327,	// (0x00020acb) bg_set_opt_pane_g3

0x132f,	// (0x00020ad3) bg_set_opt_pane_g4

0x1337,	// (0x00020adb) bg_set_opt_pane_g5

0x133f,	// (0x00020ae3) bg_set_opt_pane_g6

0x1347,	// (0x00020aeb) bg_set_opt_pane_g7

0x134f,	// (0x00020af3) bg_set_opt_pane_g8

0x1357,	// (0x00020afb) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0002ee9e) bg_set_opt_pane_g

0xc92f,	// (0x0002c0d3) control_top_pane_stacon_ParamLimits

0xc92f,	// (0x0002c0d3) control_top_pane_stacon

0xc982,	// (0x0002c126) signal_pane_stacon_ParamLimits

0xc982,	// (0x0002c126) signal_pane_stacon

0x1994,	// (0x00021138) stacon_top_pane_g1_ParamLimits

0x1994,	// (0x00021138) stacon_top_pane_g1

0xc9a7,	// (0x0002c14b) title_pane_stacon_ParamLimits

0xc9a7,	// (0x0002c14b) title_pane_stacon

0xc9c9,	// (0x0002c16d) uni_indicator_pane_stacon_ParamLimits

0xc9c9,	// (0x0002c16d) uni_indicator_pane_stacon

0xc9de,	// (0x0002c182) battery_pane_stacon_ParamLimits

0xc9de,	// (0x0002c182) battery_pane_stacon

0xca1e,	// (0x0002c1c2) control_bottom_pane_stacon_ParamLimits

0xca1e,	// (0x0002c1c2) control_bottom_pane_stacon

0xca3d,	// (0x0002c1e1) navi_pane_stacon_ParamLimits

0xca3d,	// (0x0002c1e1) navi_pane_stacon

0x19b6,	// (0x0002115a) stacon_bottom_pane_g1_ParamLimits

0x19b6,	// (0x0002115a) stacon_bottom_pane_g1

0x15ad,	// (0x00020d51) aid_levels_signal_lsc_ParamLimits

0x15ad,	// (0x00020d51) aid_levels_signal_lsc

0xc6eb,	// (0x0002be8f) signal_pane_stacon_g1_ParamLimits

0xc6eb,	// (0x0002be8f) signal_pane_stacon_g1

0xc6f7,	// (0x0002be9b) signal_pane_stacon_g2_ParamLimits

0xc6f7,	// (0x0002be9b) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0002eeb1) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0002eeb1) signal_pane_stacon_g

0xc72b,	// (0x0002becf) title_pane_stacon_t1_ParamLimits

0xc72b,	// (0x0002becf) title_pane_stacon_t1

0x15c7,	// (0x00020d6b) uni_indicator_pane_stacon_g1

0x15d1,	// (0x00020d75) uni_indicator_pane_stacon_g2

0x15db,	// (0x00020d7f) uni_indicator_pane_stacon_g3

0x15e5,	// (0x00020d89) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0002eebd) uni_indicator_pane_stacon_g

0xc750,	// (0x0002bef4) control_top_pane_stacon_g1

0xc758,	// (0x0002befc) control_top_pane_stacon_t1_ParamLimits

0xc758,	// (0x0002befc) control_top_pane_stacon_t1

0x15ef,	// (0x00020d93) aid_levels_battery_lsc_ParamLimits

0x15ef,	// (0x00020d93) aid_levels_battery_lsc

0xc789,	// (0x0002bf2d) battery_pane_stacon_g1_ParamLimits

0xc789,	// (0x0002bf2d) battery_pane_stacon_g1

0xc795,	// (0x0002bf39) battery_pane_stacon_g2_ParamLimits

0xc795,	// (0x0002bf39) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0002eec6) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0002eec6) battery_pane_stacon_g

0xc7c4,	// (0x0002bf68) navi_icon_pane_stacon

0xc7d4,	// (0x0002bf78) navi_navi_pane_stacon

0xc7c4,	// (0x0002bf68) navi_text_pane_stacon

0xc750,	// (0x0002bef4) control_bottom_pane_stacon_g1

0xc7e4,	// (0x0002bf88) control_bottom_pane_stacon_t1_ParamLimits

0xc7e4,	// (0x0002bf88) control_bottom_pane_stacon_t1

0x3047,	// (0x000227eb) grid_app_pane_ParamLimits

0x3047,	// (0x000227eb) grid_app_pane

0x3063,	// (0x00022807) scroll_pane_cp15_ParamLimits

0x3063,	// (0x00022807) scroll_pane_cp15

0x3076,	// (0x0002281a) cell_app_pane_ParamLimits

0x3076,	// (0x0002281a) cell_app_pane

0x3098,	// (0x0002283c) cell_app_pane_g1_ParamLimits

0x3098,	// (0x0002283c) cell_app_pane_g1

0x1617,	// (0x00020dbb) cell_app_pane_g2_ParamLimits

0x1617,	// (0x00020dbb) cell_app_pane_g2

0x0001,

0xf727,	// (0x0002eecb) cell_app_pane_g_ParamLimits

0xf727,	// (0x0002eecb) cell_app_pane_g

0x1623,	// (0x00020dc7) cell_app_pane_t1_ParamLimits

0x1623,	// (0x00020dc7) cell_app_pane_t1

0x1635,	// (0x00020dd9) grid_highlight_pane_ParamLimits

0x1635,	// (0x00020dd9) grid_highlight_pane

0x1317,	// (0x00020abb) cell_highlight_pane_g1

0x131f,	// (0x00020ac3) cell_highlight_pane_g2

0x1327,	// (0x00020acb) cell_highlight_pane_g3

0x132f,	// (0x00020ad3) cell_highlight_pane_g4

0x1337,	// (0x00020adb) cell_highlight_pane_g5

0x133f,	// (0x00020ae3) cell_highlight_pane_g6

0x1347,	// (0x00020aeb) cell_highlight_pane_g7

0x134f,	// (0x00020af3) cell_highlight_pane_g8

0x1357,	// (0x00020afb) cell_highlight_pane_g9

0x0585,	// (0x0001fd29) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0002ee79) cell_highlight_pane_g

0x1646,	// (0x00020dea) bg_scroll_pane

0xc828,	// (0x0002bfcc) scroll_handle_pane

0x168d,	// (0x00020e31) scroll_bg_pane_g1

0x16a2,	// (0x00020e46) scroll_bg_pane_g2

0x16ba,	// (0x00020e5e) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0002eed0) scroll_bg_pane_g

0x16cf,	// (0x00020e73) scroll_handle_focus_pane_ParamLimits

0x16cf,	// (0x00020e73) scroll_handle_focus_pane

0x168d,	// (0x00020e31) scroll_handle_pane_g1

0x16dc,	// (0x00020e80) scroll_handle_pane_g2

0x16ba,	// (0x00020e5e) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0002eed7) scroll_handle_pane_g

0x137c,	// (0x00020b20) bg_popup_sub_pane_cp21_ParamLimits

0x137c,	// (0x00020b20) bg_popup_sub_pane_cp21

0x16f0,	// (0x00020e94) popup_fep_japan_predictive_window_t1_ParamLimits

0x16f0,	// (0x00020e94) popup_fep_japan_predictive_window_t1

0x1707,	// (0x00020eab) popup_fep_japan_predictive_window_t2_ParamLimits

0x1707,	// (0x00020eab) popup_fep_japan_predictive_window_t2

0x173a,	// (0x00020ede) popup_fep_japan_predictive_window_t3_ParamLimits

0x173a,	// (0x00020ede) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0002eede) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0002eede) popup_fep_japan_predictive_window_t

0x0607,	// (0x0001fdab) bg_popup_sub_pane_cp23

0x1771,	// (0x00020f15) listscroll_japin_cand_pane

0x1779,	// (0x00020f1d) popup_fep_japan_candidate_window_t1

0x1787,	// (0x00020f2b) candidate_pane_ParamLimits

0x1787,	// (0x00020f2b) candidate_pane

0x179a,	// (0x00020f3e) scroll_pane_cp30

0x17a2,	// (0x00020f46) list_single_popup_jap_candidate_pane_ParamLimits

0x17a2,	// (0x00020f46) list_single_popup_jap_candidate_pane

0x0607,	// (0x0001fdab) list_highlight_pane_cp30

0x17b7,	// (0x00020f5b) list_single_popup_jap_candidate_pane_t1

0x30f8,	// (0x0002289c) level_1_signal

0x3105,	// (0x000228a9) level_2_signal

0x3112,	// (0x000228b6) level_3_signal

0x311f,	// (0x000228c3) level_4_signal

0x312c,	// (0x000228d0) level_5_signal

0x3139,	// (0x000228dd) level_6_signal

0x3146,	// (0x000228ea) level_7_signal

0x30f8,	// (0x0002289c) level_1_battery

0x3105,	// (0x000228a9) level_2_battery

0x3112,	// (0x000228b6) level_3_battery

0x311f,	// (0x000228c3) level_4_battery

0x312c,	// (0x000228d0) level_5_battery

0x3139,	// (0x000228dd) level_6_battery

0x3146,	// (0x000228ea) level_7_battery

0x17de,	// (0x00020f82) list_menu_pane_ParamLimits

0x17de,	// (0x00020f82) list_menu_pane

0x17ef,	// (0x00020f93) scroll_pane_cp25_ParamLimits

0x17ef,	// (0x00020f93) scroll_pane_cp25

0x3172,	// (0x00022916) list_double2_graphic_pane_cp2_ParamLimits

0x3172,	// (0x00022916) list_double2_graphic_pane_cp2

0x3172,	// (0x00022916) list_double2_large_graphic_pane_cp2_ParamLimits

0x3172,	// (0x00022916) list_double2_large_graphic_pane_cp2

0x3172,	// (0x00022916) list_double2_pane_cp2_ParamLimits

0x3172,	// (0x00022916) list_double2_pane_cp2

0x3172,	// (0x00022916) list_double_graphic_pane_cp2_ParamLimits

0x3172,	// (0x00022916) list_double_graphic_pane_cp2

0x3172,	// (0x00022916) list_double_large_graphic_pane_cp2_ParamLimits

0x3172,	// (0x00022916) list_double_large_graphic_pane_cp2

0x3172,	// (0x00022916) list_double_number_pane_cp2_ParamLimits

0x3172,	// (0x00022916) list_double_number_pane_cp2

0x3172,	// (0x00022916) list_double_pane_cp2_ParamLimits

0x3172,	// (0x00022916) list_double_pane_cp2

0x3182,	// (0x00022926) list_single_2graphic_pane_cp2_ParamLimits

0x3182,	// (0x00022926) list_single_2graphic_pane_cp2

0x3182,	// (0x00022926) list_single_graphic_heading_pane_cp2_ParamLimits

0x3182,	// (0x00022926) list_single_graphic_heading_pane_cp2

0x3182,	// (0x00022926) list_single_graphic_pane_cp2_ParamLimits

0x3182,	// (0x00022926) list_single_graphic_pane_cp2

0x3182,	// (0x00022926) list_single_heading_pane_cp2_ParamLimits

0x3182,	// (0x00022926) list_single_heading_pane_cp2

0x3197,	// (0x0002293b) list_single_large_graphic_pane_cp2_ParamLimits

0x3197,	// (0x0002293b) list_single_large_graphic_pane_cp2

0x3182,	// (0x00022926) list_single_number_heading_pane_cp2_ParamLimits

0x3182,	// (0x00022926) list_single_number_heading_pane_cp2

0x3182,	// (0x00022926) list_single_number_pane_cp2_ParamLimits

0x3182,	// (0x00022926) list_single_number_pane_cp2

0x3182,	// (0x00022926) list_single_pane_cp2_ParamLimits

0x3182,	// (0x00022926) list_single_pane_cp2

0x1811,	// (0x00020fb5) bg_popup_sub_pane_cp22

0xc8d7,	// (0x0002c07b) popup_side_volume_key_window_g1

0xc8fb,	// (0x0002c09f) popup_side_volume_key_window_t1

0xc917,	// (0x0002c0bb) volume_small_pane_cp1

0x0655,	// (0x0001fdf9) bg_popup_sub_pane_cp24_ParamLimits

0x0655,	// (0x0001fdf9) bg_popup_sub_pane_cp24

0x1845,	// (0x00020fe9) fep_china_uni_candidate_pane_ParamLimits

0x1845,	// (0x00020fe9) fep_china_uni_candidate_pane

0x1859,	// (0x00020ffd) fep_china_uni_entry_pane

0x1869,	// (0x0002100d) popup_fep_china_uni_window_g1

0x1885,	// (0x00021029) fep_china_uni_entry_pane_g1

0x188d,	// (0x00021031) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0002ef0b) fep_china_uni_entry_pane_g

0x1895,	// (0x00021039) fep_entry_item_pane

0x189f,	// (0x00021043) fep_candidate_item_pane

0x18a7,	// (0x0002104b) fep_china_uni_candidate_pane_g1

0x18af,	// (0x00021053) fep_china_uni_candidate_pane_g2

0x18b7,	// (0x0002105b) fep_china_uni_candidate_pane_g3

0x18bf,	// (0x00021063) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0002ef10) fep_china_uni_candidate_pane_g

0x0585,	// (0x0001fd29) fep_entry_item_pane_g1

0x18c7,	// (0x0002106b) fep_entry_item_pane_t1_ParamLimits

0x18c7,	// (0x0002106b) fep_entry_item_pane_t1

0x18dd,	// (0x00021081) fep_candidate_item_pane_t1_ParamLimits

0x18dd,	// (0x00021081) fep_candidate_item_pane_t1

0x18f2,	// (0x00021096) fep_candidate_item_pane_t2_ParamLimits

0x18f2,	// (0x00021096) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0002ef19) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0002ef19) fep_candidate_item_pane_t

0x066b,	// (0x0001fe0f) list_highlight_pane_cp31_ParamLimits

0x066b,	// (0x0001fe0f) list_highlight_pane_cp31

0x1904,	// (0x000210a8) level_1_signal_lsc

0x190d,	// (0x000210b1) level_2_signal_lsc

0x1916,	// (0x000210ba) level_3_signal_lsc

0x191f,	// (0x000210c3) level_4_signal_lsc

0x1928,	// (0x000210cc) level_5_signal_lsc

0x1931,	// (0x000210d5) level_6_signal_lsc

0x193a,	// (0x000210de) level_7_signal_lsc

0x193a,	// (0x000210de) level_1_battery_lsc

0x1943,	// (0x000210e7) level_2_battery_lsc

0x194c,	// (0x000210f0) level_3_battery_lsc

0x1955,	// (0x000210f9) level_4_battery_lsc

0x195e,	// (0x00021102) level_5_battery_lsc

0x1967,	// (0x0002110b) level_6_battery_lsc

0x1904,	// (0x000210a8) level_7_battery_lsc

0x1970,	// (0x00021114) scroll_handle_focus_pane_g1

0x1979,	// (0x0002111d) scroll_handle_focus_pane_g2

0x1982,	// (0x00021126) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0002ef1e) scroll_handle_focus_pane_g

0xbce4,	// (0x0002b488) list_single_2graphic_pane_g1_ParamLimits

0xbce4,	// (0x0002b488) list_single_2graphic_pane_g1

0xc635,	// (0x0002bdd9) list_single_2graphic_pane_g2_ParamLimits

0xc635,	// (0x0002bdd9) list_single_2graphic_pane_g2

0xc629,	// (0x0002bdcd) list_single_2graphic_pane_g3_ParamLimits

0xc629,	// (0x0002bdcd) list_single_2graphic_pane_g3

0xbcf0,	// (0x0002b494) list_single_2graphic_pane_g4_ParamLimits

0xbcf0,	// (0x0002b494) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0002ef25) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0002ef25) list_single_2graphic_pane_g

0xbcfc,	// (0x0002b4a0) list_single_2graphic_pane_t1_ParamLimits

0xbcfc,	// (0x0002b4a0) list_single_2graphic_pane_t1

0xc91f,	// (0x0002c0c3) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc91f,	// (0x0002c0c3) list_double2_graphic_large_graphic_pane_g1

0xc6dc,	// (0x0002be80) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc6dc,	// (0x0002be80) list_double2_graphic_large_graphic_pane_g2

0xc6af,	// (0x0002be53) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc6af,	// (0x0002be53) list_double2_graphic_large_graphic_pane_g3

0xbd2a,	// (0x0002b4ce) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbd2a,	// (0x0002b4ce) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0002ef2e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0002ef2e) list_double2_graphic_large_graphic_pane_g

0xbd36,	// (0x0002b4da) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbd36,	// (0x0002b4da) list_double2_graphic_large_graphic_pane_t1

0xbd4c,	// (0x0002b4f0) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbd4c,	// (0x0002b4f0) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0002ef37) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0002ef37) list_double2_graphic_large_graphic_pane_t

0x1a5d,	// (0x00021201) popup_fast_swap_window_ParamLimits

0x1a5d,	// (0x00021201) popup_fast_swap_window

0x1a79,	// (0x0002121d) popup_side_volume_key_window

0x1a93,	// (0x00021237) stacon_top_pane

0x1a9d,	// (0x00021241) status_pane_ParamLimits

0x1a9d,	// (0x00021241) status_pane

0x1a93,	// (0x00021237) status_small_pane

0x0607,	// (0x0001fdab) control_pane

0x0607,	// (0x0001fdab) stacon_bottom_pane

0x0bb2,	// (0x00020356) scroll_pane_cp121

0x12b3,	// (0x00020a57) set_content_pane

0x329d,	// (0x00022a41) bg_active_tab_pane_g1_cp1

0x198b,	// (0x0002112f) bg_active_tab_pane_g2_cp1

0x3294,	// (0x00022a38) bg_active_tab_pane_g3_cp1

0x329d,	// (0x00022a41) bg_passive_tab_pane_g1_cp1

0x198b,	// (0x0002112f) bg_passive_tab_pane_g2_cp1

0x3294,	// (0x00022a38) bg_passive_tab_pane_g3_cp1

0x32af,	// (0x00022a53) bg_active_tab_pane_g1_cp2

0x198b,	// (0x0002112f) bg_active_tab_pane_g2_cp2

0x32a6,	// (0x00022a4a) bg_active_tab_pane_g3_cp2

0x32af,	// (0x00022a53) bg_passive_tab_pane_g1_cp2

0x198b,	// (0x0002112f) bg_passive_tab_pane_g2_cp2

0x32a6,	// (0x00022a4a) bg_passive_tab_pane_g3_cp2

0x32c1,	// (0x00022a65) bg_active_tab_pane_g1_cp3

0x198b,	// (0x0002112f) bg_active_tab_pane_g2_cp3

0x32b8,	// (0x00022a5c) bg_active_tab_pane_g3_cp3

0x32c1,	// (0x00022a65) bg_passive_tab_pane_g1_cp3

0x198b,	// (0x0002112f) bg_passive_tab_pane_g2_cp3

0x32b8,	// (0x00022a5c) bg_passive_tab_pane_g3_cp3

0x32d3,	// (0x00022a77) bg_active_tab_pane_g1_cp4

0x198b,	// (0x0002112f) bg_active_tab_pane_g2_cp4

0x32ca,	// (0x00022a6e) bg_active_tab_pane_g3_cp4

0x32d3,	// (0x00022a77) bg_passive_tab_pane_g1_cp4

0x198b,	// (0x0002112f) bg_passive_tab_pane_g2_cp4

0x32ca,	// (0x00022a6e) bg_passive_tab_pane_g3_cp4

0x19d2,	// (0x00021176) bg_active_tab_pane_g1_cp5

0x198b,	// (0x0002112f) bg_active_tab_pane_g2_cp5

0x19db,	// (0x0002117f) bg_active_tab_pane_g3_cp5

0x19d2,	// (0x00021176) bg_passive_tab_pane_g1_cp5

0x198b,	// (0x0002112f) bg_passive_tab_pane_g2_cp5

0x19db,	// (0x0002117f) bg_passive_tab_pane_g3_cp5

0x3409,	// (0x00022bad) list_set_graphic_pane_ParamLimits

0x3409,	// (0x00022bad) list_set_graphic_pane

0x0607,	// (0x0001fdab) bg_set_opt_pane_cp4

0x19e4,	// (0x00021188) list_set_graphic_pane_g1_ParamLimits

0x19e4,	// (0x00021188) list_set_graphic_pane_g1

0x19f0,	// (0x00021194) list_set_graphic_pane_g2_ParamLimits

0x19f0,	// (0x00021194) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0002ef3c) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0002ef3c) list_set_graphic_pane_g

0x0009,

0xfaf2,	// (0x0002f296) volume_small_pane_cp_g

0x1a12,	// (0x000211b6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x1a12,	// (0x000211b6) list_double2_large_graphic_pane_g1_cp2

0x1a1e,	// (0x000211c2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1a1e,	// (0x000211c2) list_double2_large_graphic_pane_g2_cp2

0x1a2d,	// (0x000211d1) list_double2_large_graphic_pane_g3_cp2

0x1a35,	// (0x000211d9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1a35,	// (0x000211d9) list_double2_large_graphic_pane_t1_cp2

0x1a4b,	// (0x000211ef) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1a4b,	// (0x000211ef) list_double2_large_graphic_pane_t2_cp2

0x594c,	// (0x000250f0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x594c,	// (0x000250f0) list_double_large_graphic_pane_g1_cp2

0x595d,	// (0x00025101) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x595d,	// (0x00025101) list_double_large_graphic_pane_g2_cp2

0x1b78,	// (0x0002131c) list_double_large_graphic_pane_g3_cp2

0x596c,	// (0x00025110) list_double_large_graphic_pane_g4_cp

0x5974,	// (0x00025118) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5974,	// (0x00025118) list_double_large_graphic_pane_t1_cp2

0x598b,	// (0x0002512f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x598b,	// (0x0002512f) list_double_large_graphic_pane_t2_cp2

0x1aab,	// (0x0002124f) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1aab,	// (0x0002124f) list_double2_graphic_pane_g1_cp2

0x1ab7,	// (0x0002125b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1ab7,	// (0x0002125b) list_double2_graphic_pane_g2_cp2

0x1ac6,	// (0x0002126a) list_double2_graphic_pane_g3_cp2

0x1ace,	// (0x00021272) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1ace,	// (0x00021272) list_double2_graphic_pane_t1_cp2

0x1ae4,	// (0x00021288) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1ae4,	// (0x00021288) list_double2_graphic_pane_t2_cp2

0x1af6,	// (0x0002129a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1af6,	// (0x0002129a) list_single_number_heading_pane_g1_cp2

0x1b02,	// (0x000212a6) list_single_number_heading_pane_g2_cp2

0x1b0a,	// (0x000212ae) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1b0a,	// (0x000212ae) list_single_number_heading_pane_t1_cp2

0x1b20,	// (0x000212c4) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1b20,	// (0x000212c4) list_single_number_heading_pane_t2_cp2

0x1b32,	// (0x000212d6) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1b32,	// (0x000212d6) list_single_number_heading_pane_t3_cp2

0x1af6,	// (0x0002129a) list_single_heading_pane_g1_cp2_ParamLimits

0x1af6,	// (0x0002129a) list_single_heading_pane_g1_cp2

0x1b02,	// (0x000212a6) list_single_heading_pane_g2_cp2

0x1b0a,	// (0x000212ae) list_single_heading_pane_t1_cp2_ParamLimits

0x1b0a,	// (0x000212ae) list_single_heading_pane_t1_cp2

0x5756,	// (0x00024efa) list_single_heading_pane_t2_cp2_ParamLimits

0x5756,	// (0x00024efa) list_single_heading_pane_t2_cp2

0x56a6,	// (0x00024e4a) list_double_graphic_pane_g1_cp2_ParamLimits

0x56a6,	// (0x00024e4a) list_double_graphic_pane_g1_cp2

0x56b2,	// (0x00024e56) list_double_graphic_pane_g2_cp2_ParamLimits

0x56b2,	// (0x00024e56) list_double_graphic_pane_g2_cp2

0x56c1,	// (0x00024e65) list_double_graphic_pane_g3_cp2

0x56c9,	// (0x00024e6d) list_double_graphic_pane_t1_cp2_ParamLimits

0x56c9,	// (0x00024e6d) list_double_graphic_pane_t1_cp2

0x56df,	// (0x00024e83) list_double_graphic_pane_t2_cp2_ParamLimits

0x56df,	// (0x00024e83) list_double_graphic_pane_t2_cp2

0x1b6c,	// (0x00021310) list_double_number_pane_g1_cp2_ParamLimits

0x1b6c,	// (0x00021310) list_double_number_pane_g1_cp2

0x1b78,	// (0x0002131c) list_double_number_pane_g2_cp2

0x566c,	// (0x00024e10) list_double_number_pane_t1_cp2_ParamLimits

0x566c,	// (0x00024e10) list_double_number_pane_t1_cp2

0x567e,	// (0x00024e22) list_double_number_pane_t2_cp2_ParamLimits

0x567e,	// (0x00024e22) list_double_number_pane_t2_cp2

0x5694,	// (0x00024e38) list_double_number_pane_t3_cp2_ParamLimits

0x5694,	// (0x00024e38) list_double_number_pane_t3_cp2

0x55e4,	// (0x00024d88) list_single_graphic_pane_g1_cp2_ParamLimits

0x55e4,	// (0x00024d88) list_single_graphic_pane_g1_cp2

0x1af6,	// (0x0002129a) list_single_graphic_pane_g2_cp2_ParamLimits

0x1af6,	// (0x0002129a) list_single_graphic_pane_g2_cp2

0x1b02,	// (0x000212a6) list_single_graphic_pane_g3_cp2

0x55bc,	// (0x00024d60) list_single_graphic_pane_t1_cp2_ParamLimits

0x55bc,	// (0x00024d60) list_single_graphic_pane_t1_cp2

0x1af6,	// (0x0002129a) list_single_number_pane_g1_cp2_ParamLimits

0x1af6,	// (0x0002129a) list_single_number_pane_g1_cp2

0x1b02,	// (0x000212a6) list_single_number_pane_g2_cp2

0x55bc,	// (0x00024d60) list_single_number_pane_t1_cp2_ParamLimits

0x55bc,	// (0x00024d60) list_single_number_pane_t1_cp2

0x55d2,	// (0x00024d76) list_single_number_pane_t2_cp2_ParamLimits

0x55d2,	// (0x00024d76) list_single_number_pane_t2_cp2

0x1a1e,	// (0x000211c2) list_double2_pane_g1_cp2_ParamLimits

0x1a1e,	// (0x000211c2) list_double2_pane_g1_cp2

0x1a2d,	// (0x000211d1) list_double2_pane_g2_cp2

0x1b44,	// (0x000212e8) list_double2_pane_t1_cp2_ParamLimits

0x1b44,	// (0x000212e8) list_double2_pane_t1_cp2

0x1b5a,	// (0x000212fe) list_double2_pane_t2_cp2_ParamLimits

0x1b5a,	// (0x000212fe) list_double2_pane_t2_cp2

0x1b6c,	// (0x00021310) list_double_pane_g1_cp2_ParamLimits

0x1b6c,	// (0x00021310) list_double_pane_g1_cp2

0x1b78,	// (0x0002131c) list_double_pane_g2_cp2

0x1b80,	// (0x00021324) list_double_pane_t1_cp2_ParamLimits

0x1b80,	// (0x00021324) list_double_pane_t1_cp2

0x1b96,	// (0x0002133a) list_double_pane_t2_cp2_ParamLimits

0x1b96,	// (0x0002133a) list_double_pane_t2_cp2

0x1bbe,	// (0x00021362) list_single_pane_cp2_g3

0x1af6,	// (0x0002129a) list_single_pane_g1_cp2_ParamLimits

0x1af6,	// (0x0002129a) list_single_pane_g1_cp2

0x1b02,	// (0x000212a6) list_single_pane_g2_cp2

0x1bce,	// (0x00021372) list_single_pane_t1_cp2_ParamLimits

0x1bce,	// (0x00021372) list_single_pane_t1_cp2

0x1be6,	// (0x0002138a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1be6,	// (0x0002138a) list_single_large_graphic_pane_g1_cp2

0x1bf2,	// (0x00021396) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1bf2,	// (0x00021396) list_single_large_graphic_pane_g2_cp2

0x1bfe,	// (0x000213a2) list_single_large_graphic_pane_g3_cp2

0x1c06,	// (0x000213aa) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1c06,	// (0x000213aa) list_single_large_graphic_pane_g4_cp1

0x1c20,	// (0x000213c4) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1c20,	// (0x000213c4) list_single_large_graphic_pane_t1_cp2

0x559e,	// (0x00024d42) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x559e,	// (0x00024d42) list_single_graphic_heading_pane_g1_cp2

0x556d,	// (0x00024d11) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x556d,	// (0x00024d11) list_single_graphic_heading_pane_g4_cp2

0x1b02,	// (0x000212a6) list_single_graphic_heading_pane_g5_cp2

0x1b0a,	// (0x000212ae) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x1b0a,	// (0x000212ae) list_single_graphic_heading_pane_t1_cp2

0x55aa,	// (0x00024d4e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x55aa,	// (0x00024d4e) list_single_graphic_heading_pane_t2_cp2

0x5561,	// (0x00024d05) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5561,	// (0x00024d05) list_single_2graphic_pane_g1_cp2

0x556d,	// (0x00024d11) list_single_2graphic_pane_g2_cp2_ParamLimits

0x556d,	// (0x00024d11) list_single_2graphic_pane_g2_cp2

0x1b02,	// (0x000212a6) list_single_2graphic_pane_g3_cp2

0x557c,	// (0x00024d20) list_single_2graphic_pane_g4_cp2_ParamLimits

0x557c,	// (0x00024d20) list_single_2graphic_pane_g4_cp2

0x5588,	// (0x00024d2c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5588,	// (0x00024d2c) list_single_2graphic_pane_t1_cp2

0x0585,	// (0x0001fd29) list_highlight_pane_g10_cp1

0x5173,	// (0x00024917) list_highlight_pane_g1_cp1

0x517b,	// (0x0002491f) list_highlight_pane_g2_cp1

0x5183,	// (0x00024927) list_highlight_pane_g3_cp1

0x518b,	// (0x0002492f) list_highlight_pane_g4_cp1

0x5193,	// (0x00024937) list_highlight_pane_g5_cp1

0x519b,	// (0x0002493f) list_highlight_pane_g6_cp1

0x51a3,	// (0x00024947) list_highlight_pane_g7_cp1

0x51ab,	// (0x0002494f) list_highlight_pane_g8_cp1

0x51b3,	// (0x00024957) list_highlight_pane_g9_cp1

0x7a8c,	// (0x00027230) form_field_slider_pane_t3

0x7a9a,	// (0x0002723e) form_field_slider_pane_t4

0x50bd,	// (0x00024861) slider_form_pane_ParamLimits

0x50bd,	// (0x00024861) slider_form_pane

0x0607,	// (0x0001fdab) control_abbreviations

0x0607,	// (0x0001fdab) control_conventions

0x0607,	// (0x0001fdab) control_definitions

0x0607,	// (0x0001fdab) format_table_attribute

0x57a0,	// (0x00024f44) bg_popup_preview_window_pane_g9

0x0607,	// (0x0001fdab) format_table_data2

0x0607,	// (0x0001fdab) format_table_data3

0x0607,	// (0x0001fdab) format_table_data_example

0x0008,

0x0607,	// (0x0001fdab) intro_purpose

0xf928,	// (0x0002f0cc) bg_popup_preview_window_pane_g

0x0607,	// (0x0001fdab) texts_category

0x0607,	// (0x0001fdab) texts_graphics

0x1c36,	// (0x000213da) text_digital

0x1c45,	// (0x000213e9) text_primary

0x1c54,	// (0x000213f8) text_primary_small

0x1c63,	// (0x00021407) text_secondary

0x1c72,	// (0x00021416) text_title

0x5c36,	// (0x000253da) bg_passive_tab_pane_g1_cp3_srt

0x198b,	// (0x0002112f) bg_passive_tab_pane_g2_cp3_srt

0x5c2d,	// (0x000253d1) bg_passive_tab_pane_g3_cp3_srt

0x066b,	// (0x0001fe0f) bg_active_tab_pane_cp3_srt_ParamLimits

0x066b,	// (0x0001fe0f) bg_active_tab_pane_cp3_srt

0x5c3f,	// (0x000253e3) tabs_4_active_pane_srt_g1

0x2c26,	// (0x000223ca) tabs_4_active_pane_srt_t1_ParamLimits

0x2c26,	// (0x000223ca) tabs_4_active_pane_srt_t1

0x5c36,	// (0x000253da) bg_active_tab_pane_g1_cp3_copy1

0x198b,	// (0x0002112f) bg_active_tab_pane_g2_cp3_copy1

0x5c2d,	// (0x000253d1) bg_active_tab_pane_g3_cp3_copy1

0x066b,	// (0x0001fe0f) tabs_2_long_active_pane_srt_ParamLimits

0x066b,	// (0x0001fe0f) tabs_2_long_active_pane_srt

0x066b,	// (0x0001fe0f) tabs_2_long_passive_pane_srt_ParamLimits

0x066b,	// (0x0001fe0f) tabs_2_long_passive_pane_srt

0x2eff,	// (0x000226a3) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2eff,	// (0x000226a3) bg_passive_tab_pane_cp4_srt

0x5b6c,	// (0x00025310) bg_passive_tab_pane_g1_cp4_srt

0x198b,	// (0x0002112f) bg_passive_tab_pane_g2_cp4_srt

0x5b63,	// (0x00025307) bg_passive_tab_pane_g3_cp4_srt

0x1837,	// (0x00020fdb) bg_active_tab_pane_cp4_srt_ParamLimits

0x1837,	// (0x00020fdb) bg_active_tab_pane_cp4_srt

0x2eec,	// (0x00022690) tabs_2_long_active_pane_srt_t1_ParamLimits

0x2eec,	// (0x00022690) tabs_2_long_active_pane_srt_t1

0x5b6c,	// (0x00025310) bg_active_tab_pane_g1_cp4_srt

0x198b,	// (0x0002112f) bg_active_tab_pane_g2_cp4_srt

0x5b63,	// (0x00025307) bg_active_tab_pane_g3_cp4_srt

0x0655,	// (0x0001fdf9) tabs_3_long_active_pane_srt_ParamLimits

0x0655,	// (0x0001fdf9) tabs_3_long_active_pane_srt

0x0655,	// (0x0001fdf9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0655,	// (0x0001fdf9) tabs_3_long_passive_pane_cp_srt

0x0655,	// (0x0001fdf9) tabs_3_long_passive_pane_srt_ParamLimits

0x0655,	// (0x0001fdf9) tabs_3_long_passive_pane_srt

0x2eff,	// (0x000226a3) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2eff,	// (0x000226a3) bg_passive_tab_pane_cp5_srt

0x19d2,	// (0x00021176) bg_passive_tab_pane_g1_cp5_srt

0x198b,	// (0x0002112f) bg_passive_tab_pane_g2_cp5_srt

0x19db,	// (0x0002117f) bg_passive_tab_pane_g3_cp5_srt

0x1837,	// (0x00020fdb) bg_active_tab_pane_cp5_srt_ParamLimits

0x1837,	// (0x00020fdb) bg_active_tab_pane_cp5_srt

0x2f0b,	// (0x000226af) tabs_3_long_active_pane_srt_t1_ParamLimits

0x2f0b,	// (0x000226af) tabs_3_long_active_pane_srt_t1

0x19d2,	// (0x00021176) bg_active_tab_pane_g1_cp5_srt

0x198b,	// (0x0002112f) bg_active_tab_pane_g2_cp5_srt

0x19db,	// (0x0002117f) bg_active_tab_pane_g3_cp5_srt

0x5b55,	// (0x000252f9) navi_text_pane_srt_t1

0x5b4d,	// (0x000252f1) navi_icon_pane_srt_g1

0x1d8a,	// (0x0002152e) midp_editing_number_pane_srt

0x1c81,	// (0x00021425) midp_ticker_pane_srt

0x1d92,	// (0x00021536) midp_ticker_pane_srt_g1

0x1d9a,	// (0x0002153e) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0002ef5b) midp_ticker_pane_srt_g

0x1da2,	// (0x00021546) midp_ticker_pane_srt_t1

0x5b3e,	// (0x000252e2) midp_editing_number_pane_t1_copy1

0x341f,	// (0x00022bc3) listscroll_midp_pane

0x341f,	// (0x00022bc3) midp_form_pane

0x1c89,	// (0x0002142d) midp_info_popup_window_ParamLimits

0x1c89,	// (0x0002142d) midp_info_popup_window

0x137c,	// (0x00020b20) bg_popup_sub_pane_cp50_ParamLimits

0x137c,	// (0x00020b20) bg_popup_sub_pane_cp50

0x4e17,	// (0x000245bb) listscroll_midp_info_pane_ParamLimits

0x4e17,	// (0x000245bb) listscroll_midp_info_pane

0x4dff,	// (0x000245a3) listscroll_form_midp_pane_ParamLimits

0x4dff,	// (0x000245a3) listscroll_form_midp_pane

0x4e0b,	// (0x000245af) scroll_bar_cp050

0x7a74,	// (0x00027218) list_midp_pane

0x6f0d,	// (0x000266b1) signal_pane_g2_cp

0x4d31,	// (0x000244d5) listscroll_midp_info_pane_t1_ParamLimits

0x4d31,	// (0x000244d5) listscroll_midp_info_pane_t1

0x4d49,	// (0x000244ed) listscroll_midp_info_pane_t2_ParamLimits

0x4d49,	// (0x000244ed) listscroll_midp_info_pane_t2

0x4d87,	// (0x0002452b) listscroll_midp_info_pane_t3_ParamLimits

0x4d87,	// (0x0002452b) listscroll_midp_info_pane_t3

0x4dc1,	// (0x00024565) listscroll_midp_info_pane_t4_ParamLimits

0x4dc1,	// (0x00024565) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0002f007) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0002f007) listscroll_midp_info_pane_t

0x141f,	// (0x00020bc3) scroll_pane_cp21

0x4cd5,	// (0x00024479) form_midp_field_choice_group_pane

0x4cde,	// (0x00024482) form_midp_field_text_pane

0x4d17,	// (0x000244bb) form_midp_field_time_pane

0x4d1f,	// (0x000244c3) form_midp_gauge_slider_pane

0x4d28,	// (0x000244cc) form_midp_gauge_wait_pane

0x0607,	// (0x0001fdab) form_midp_image_pane

0xbe20,	// (0x0002b5c4) list_single_midp_pane_ParamLimits

0xbe20,	// (0x0002b5c4) list_single_midp_pane

0x7a51,	// (0x000271f5) form_midp_field_text_pane_t1

0x4b84,	// (0x00024328) input_focus_pane_cp050

0x4cc4,	// (0x00024468) list_midp_form_text_pane

0x4c93,	// (0x00024437) form_midp_field_choice_group_pane_t1

0x4ca1,	// (0x00024445) input_focus_pane_cp051

0x4cb5,	// (0x00024459) list_midp_choice_pane

0x0607,	// (0x0001fdab) status_idle_pane

0x4c77,	// (0x0002441b) form_midp_field_time_pane_t1

0x0585,	// (0x0001fd29) wait_anim_pane_g2_copy1

0x4c85,	// (0x00024429) form_midp_field_time_pane_t2

0x0001,

0x1cf4,	// (0x00021498) aid_navinavi_width_2_pane

0xf85e,	// (0x0002f002) form_midp_field_time_pane_t

0x0607,	// (0x0001fdab) input_focus_pane_cp052

0x0607,	// (0x0001fdab) bg_input_focus_pane_cp040

0x4c53,	// (0x000243f7) form_midp_gauge_slider_pane_t1

0x4c61,	// (0x00024405) form_midp_gauge_slider_pane_t2

0x7a35,	// (0x000271d9) form_midp_gauge_slider_pane_t3

0x7a43,	// (0x000271e7) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0002eff9) form_midp_gauge_slider_pane_t

0x4c6f,	// (0x00024413) form_midp_slider_pane

0x066b,	// (0x0001fe0f) bg_input_focus_pane_cp041_ParamLimits

0x066b,	// (0x0001fe0f) bg_input_focus_pane_cp041

0x4c23,	// (0x000243c7) form_midp_gauge_wait_pane_t1_ParamLimits

0x4c23,	// (0x000243c7) form_midp_gauge_wait_pane_t1

0x4c35,	// (0x000243d9) form_midp_gauge_wait_pane_t2_ParamLimits

0x4c35,	// (0x000243d9) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0002eff4) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0002eff4) form_midp_gauge_wait_pane_t

0x4c47,	// (0x000243eb) form_midp_wait_pane_ParamLimits

0x4c47,	// (0x000243eb) form_midp_wait_pane

0x4bed,	// (0x00024391) form_midp_image_pane_g1

0x4bf6,	// (0x0002439a) form_midp_image_pane_t1

0x4c05,	// (0x000243a9) form_midp_image_pane_t2

0x4c14,	// (0x000243b8) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0002efed) form_midp_image_pane_t

0x4be4,	// (0x00024388) list_single_midp_pane_g1

0xbe11,	// (0x0002b5b5) list_single_midp_pane_t1

0x7a1f,	// (0x000271c3) list_midp_form_item_pane_ParamLimits

0x7a1f,	// (0x000271c3) list_midp_form_item_pane

0x1c9c,	// (0x00021440) list_midp_form_item_pane_t1

0x1cab,	// (0x0002144f) midp_ticker_pane_g1

0x1cb7,	// (0x0002145b) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0002ef41) midp_ticker_pane_g

0x1cc3,	// (0x00021467) midp_ticker_pane_t1

0x5b3e,	// (0x000252e2) midp_editing_number_pane_t1

0x5bc6,	// (0x0002536a) midp_editing_number_pane

0x5bd2,	// (0x00025376) midp_ticker_pane

0x5b2e,	// (0x000252d2) ai_message_heading_pane

0x0607,	// (0x0001fdab) bg_popup_window_pane_cp14

0x5b36,	// (0x000252da) listscroll_ai_message_pane

0x5ab8,	// (0x0002525c) ai_message_heading_pane_g1_ParamLimits

0x5ab8,	// (0x0002525c) ai_message_heading_pane_g1

0x5ac4,	// (0x00025268) ai_message_heading_pane_g2_ParamLimits

0x5ac4,	// (0x00025268) ai_message_heading_pane_g2

0x5ad0,	// (0x00025274) ai_message_heading_pane_g3_ParamLimits

0x5ad0,	// (0x00025274) ai_message_heading_pane_g3

0x5adc,	// (0x00025280) ai_message_heading_pane_g4_ParamLimits

0x5adc,	// (0x00025280) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0002f12e) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0002f12e) ai_message_heading_pane_g

0x5ae8,	// (0x0002528c) ai_message_heading_pane_t1_ParamLimits

0x5ae8,	// (0x0002528c) ai_message_heading_pane_t1

0x5b02,	// (0x000252a6) ai_message_heading_pane_t2_ParamLimits

0x5b02,	// (0x000252a6) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0002f137) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0002f137) ai_message_heading_pane_t

0x5b14,	// (0x000252b8) bg_popup_heading_pane_cp1_ParamLimits

0x5b14,	// (0x000252b8) bg_popup_heading_pane_cp1

0x5aa6,	// (0x0002524a) list_ai_message_pane_ParamLimits

0x5aa6,	// (0x0002524a) list_ai_message_pane

0x141f,	// (0x00020bc3) scroll_pane_cp10

0x5a42,	// (0x000251e6) list_ai_message_pane_g1

0x5a4a,	// (0x000251ee) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0002f10b) list_ai_message_pane_g

0x5a52,	// (0x000251f6) list_ai_message_pane_t1_ParamLimits

0x5a52,	// (0x000251f6) list_ai_message_pane_t1

0x5a67,	// (0x0002520b) list_ai_message_pane_t2_ParamLimits

0x5a67,	// (0x0002520b) list_ai_message_pane_t2

0x5a7c,	// (0x00025220) list_ai_message_pane_t3_ParamLimits

0x5a7c,	// (0x00025220) list_ai_message_pane_t3

0x5a91,	// (0x00025235) list_ai_message_pane_t4_ParamLimits

0x5a91,	// (0x00025235) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0002f110) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0002f110) list_ai_message_pane_t

0x5a30,	// (0x000251d4) cell_ai_soft_ind_pane_ParamLimits

0x5a30,	// (0x000251d4) cell_ai_soft_ind_pane

0x1cd5,	// (0x00021479) cell_ai_soft_ind_pane_g1_ParamLimits

0x1cd5,	// (0x00021479) cell_ai_soft_ind_pane_g1

0x0607,	// (0x0001fdab) grid_highlight_cp1

0x1ce2,	// (0x00021486) text_secondary_cp56_ParamLimits

0x1ce2,	// (0x00021486) text_secondary_cp56

0x5a05,	// (0x000251a9) example_general_pane_ParamLimits

0x5a05,	// (0x000251a9) example_general_pane

0x5a11,	// (0x000251b5) example_parent_pane_g1_ParamLimits

0x5a11,	// (0x000251b5) example_parent_pane_g1

0x5a1d,	// (0x000251c1) example_parent_pane_t1_ParamLimits

0x5a1d,	// (0x000251c1) example_parent_pane_t1

0x7378,	// (0x00026b1c) popup_preview_text_window_ParamLimits

0x7378,	// (0x00026b1c) popup_preview_text_window

0x1bc6,	// (0x0002136a) list_single_pane_cp2_g4

0x0872,	// (0x00020016) bg_popup_preview_window_pane_ParamLimits

0x0872,	// (0x00020016) bg_popup_preview_window_pane

0x57a8,	// (0x00024f4c) popup_preview_text_window_t1_ParamLimits

0x57a8,	// (0x00024f4c) popup_preview_text_window_t1

0x57c6,	// (0x00024f6a) popup_preview_text_window_t2_ParamLimits

0x57c6,	// (0x00024f6a) popup_preview_text_window_t2

0x580f,	// (0x00024fb3) popup_preview_text_window_t3_ParamLimits

0x580f,	// (0x00024fb3) popup_preview_text_window_t3

0x5854,	// (0x00024ff8) popup_preview_text_window_t4_ParamLimits

0x5854,	// (0x00024ff8) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0002f0df) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0002f0df) popup_preview_text_window_t

0x58d2,	// (0x00025076) scroll_pane_cp11

0x4a96,	// (0x0002423a) bg_popup_preview_window_pane_g1

0x5768,	// (0x00024f0c) bg_popup_preview_window_pane_g2

0x5770,	// (0x00024f14) bg_popup_preview_window_pane_g3

0x5778,	// (0x00024f1c) bg_popup_preview_window_pane_g4

0x5780,	// (0x00024f24) bg_popup_preview_window_pane_g5

0x5788,	// (0x00024f2c) bg_popup_preview_window_pane_g6

0x5790,	// (0x00024f34) bg_popup_preview_window_pane_g7

0x5798,	// (0x00024f3c) bg_popup_preview_window_pane_g8

0xc344,	// (0x0002bae8) aid_popup_width_pane

0x735a,	// (0x00026afe) popup_midp_note_alarm_window_ParamLimits

0x735a,	// (0x00026afe) popup_midp_note_alarm_window

0x12bc,	// (0x00020a60) data_form_pane_ParamLimits

0xbb4a,	// (0x0002b2ee) form_field_data_pane_g1

0xbb52,	// (0x0002b2f6) form_field_data_pane_t1_ParamLimits

0x12c8,	// (0x00020a6c) input_focus_pane_ParamLimits

0x12d6,	// (0x00020a7a) data_form_wide_pane_ParamLimits

0xbb6a,	// (0x0002b30e) form_field_data_wide_pane_g1

0xbb76,	// (0x0002b31a) form_field_data_wide_pane_t1_ParamLimits

0x0a31,	// (0x000201d5) input_focus_pane_cp6_ParamLimits

0x2ec6,	// (0x0002266a) input_popup_find_pane_g1_ParamLimits

0x2ec6,	// (0x0002266a) input_popup_find_pane_g1

0xc7a5,	// (0x0002bf49) aid_navi_side_left_pane

0xc7b5,	// (0x0002bf59) aid_navi_side_right_pane

0x5244,	// (0x000249e8) bg_popup_window_pane_cp30_ParamLimits

0x5244,	// (0x000249e8) bg_popup_window_pane_cp30

0x52be,	// (0x00024a62) popup_midp_note_alarm_window_g1_ParamLimits

0x52be,	// (0x00024a62) popup_midp_note_alarm_window_g1

0x52ee,	// (0x00024a92) popup_midp_note_alarm_window_t1_ParamLimits

0x52ee,	// (0x00024a92) popup_midp_note_alarm_window_t1

0x538f,	// (0x00024b33) popup_midp_note_alarm_window_t2_ParamLimits

0x538f,	// (0x00024b33) popup_midp_note_alarm_window_t2

0x543d,	// (0x00024be1) popup_midp_note_alarm_window_t3_ParamLimits

0x543d,	// (0x00024be1) popup_midp_note_alarm_window_t3

0x5465,	// (0x00024c09) popup_midp_note_alarm_window_t4_ParamLimits

0x5465,	// (0x00024c09) popup_midp_note_alarm_window_t4

0x5485,	// (0x00024c29) popup_midp_note_alarm_window_t5_ParamLimits

0x5485,	// (0x00024c29) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0002f07c) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0002f07c) popup_midp_note_alarm_window_t

0x5531,	// (0x00024cd5) wait_bar_pane_cp1_ParamLimits

0x5531,	// (0x00024cd5) wait_bar_pane_cp1

0x0607,	// (0x0001fdab) wait_anim_pane_copy1

0x0607,	// (0x0001fdab) wait_border_pane_copy1

0x4f8a,	// (0x0002472e) wait_border_pane_g1_copy1

0xbb90,	// (0x0002b334) form_field_popup_pane_g1

0xbb98,	// (0x0002b33c) form_field_popup_pane_t1_ParamLimits

0x12c8,	// (0x00020a6c) input_focus_pane_cp7_ParamLimits

0x12bc,	// (0x00020a60) list_form_pane_ParamLimits

0xbbb0,	// (0x0002b354) form_field_popup_wide_pane_g1

0xbbb8,	// (0x0002b35c) form_field_popup_wide_pane_t1_ParamLimits

0x12c8,	// (0x00020a6c) input_focus_pane_cp8_ParamLimits

0x12f6,	// (0x00020a9a) list_form_wide_pane_ParamLimits

0x5c66,	// (0x0002540a) aid_size_cell_graphic_pane

0xbc44,	// (0x0002b3e8) data_form_pane_t1_ParamLimits

0xbe49,	// (0x0002b5ed) data_form_wide_pane_t1_ParamLimits

0x757e,	// (0x00026d22) bg_status_flat_pane

0x2ba4,	// (0x00022348) title_pane_t1_ParamLimits

0x061d,	// (0x0001fdc1) title_pane_t2_ParamLimits

0x0643,	// (0x0001fde7) title_pane_t3_ParamLimits

0xf59b,	// (0x0002ed3f) title_pane_t_ParamLimits

0x30f8,	// (0x0002289c) level_1_signal_ParamLimits

0x3105,	// (0x000228a9) level_2_signal_ParamLimits

0x3112,	// (0x000228b6) level_3_signal_ParamLimits

0x311f,	// (0x000228c3) level_4_signal_ParamLimits

0x312c,	// (0x000228d0) level_5_signal_ParamLimits

0x3139,	// (0x000228dd) level_6_signal_ParamLimits

0x3146,	// (0x000228ea) level_7_signal_ParamLimits

0x30f8,	// (0x0002289c) level_1_battery_ParamLimits

0x3105,	// (0x000228a9) level_2_battery_ParamLimits

0x3112,	// (0x000228b6) level_3_battery_ParamLimits

0x311f,	// (0x000228c3) level_4_battery_ParamLimits

0x312c,	// (0x000228d0) level_5_battery_ParamLimits

0x3139,	// (0x000228dd) level_6_battery_ParamLimits

0x3146,	// (0x000228ea) level_7_battery_ParamLimits

0x5173,	// (0x00024917) bg_status_flat_pane_g1

0x517b,	// (0x0002491f) bg_status_flat_pane_g2

0x5183,	// (0x00024927) bg_status_flat_pane_g3

0x518b,	// (0x0002492f) bg_status_flat_pane_g4

0x5193,	// (0x00024937) bg_status_flat_pane_g5

0x519b,	// (0x0002493f) bg_status_flat_pane_g6

0x51a3,	// (0x00024947) bg_status_flat_pane_g7

0x2c0c,	// (0x000223b0) tabs_3_active_pane_t1_ParamLimits

0x2c0c,	// (0x000223b0) tabs_3_passive_pane_t1_ParamLimits

0x2c26,	// (0x000223ca) tabs_4_active_pane_t1_ParamLimits

0x2c26,	// (0x000223ca) tabs_4_1_passive_pane_t1_ParamLimits

0x2eda,	// (0x0002267e) tabs_2_active_pane_t1_ParamLimits

0x2eda,	// (0x0002267e) tabs_2_passive_pane_t1_ParamLimits

0x1837,	// (0x00020fdb) bg_active_tab_pane_cp4_ParamLimits

0x2eec,	// (0x00022690) tabs_2_long_active_pane_t1_ParamLimits

0x2eff,	// (0x000226a3) bg_passive_tab_pane_cp4_ParamLimits

0xccb3,	// (0x0002c457) list_single_midp_graphic_pane_t1_ParamLimits

0x1837,	// (0x00020fdb) bg_active_tab_pane_cp5_ParamLimits

0x2f0b,	// (0x000226af) tabs_3_long_active_pane_t1_ParamLimits

0x2eff,	// (0x000226a3) bg_passive_tab_pane_cp5_ParamLimits

0xccb3,	// (0x0002c457) list_single_midp_graphic_pane_t1

0x757e,	// (0x00026d22) bg_status_flat_pane_ParamLimits

0x4975,	// (0x00024119) indicator_pane_cp2_ParamLimits

0x4975,	// (0x00024119) indicator_pane_cp2

0x789a,	// (0x0002703e) navi_pane_srt_ParamLimits

0x789a,	// (0x0002703e) navi_pane_srt

0x499d,	// (0x00024141) popup_clock_digital_analogue_window_cp1

0x06db,	// (0x0001fe7f) indicator_pane_t1

0x1c81,	// (0x00021425) copy_highlight_pane

0x1c81,	// (0x00021425) cursor_graphics_pane

0x1c81,	// (0x00021425) graphic_within_text_pane

0x1c81,	// (0x00021425) link_highlight_pane

0x5895,	// (0x00025039) popup_preview_text_window_t5_ParamLimits

0x5895,	// (0x00025039) popup_preview_text_window_t5

0x1cfc,	// (0x000214a0) cursor_digital_pane

0x1cfc,	// (0x000214a0) cursor_primary_pane

0x1d0d,	// (0x000214b1) cursor_primary_small_pane

0x1d15,	// (0x000214b9) cursor_secondary_pane

0x1d1d,	// (0x000214c1) cursor_title_pane

0x1cfc,	// (0x000214a0) link_highlight_digital_pane

0x1d04,	// (0x000214a8) link_highlight_primary_pane

0x1d0d,	// (0x000214b1) link_highlight_primary_small_pane

0x1d15,	// (0x000214b9) link_highlight_secondary_pane

0x1d1d,	// (0x000214c1) link_highlight_title_pane

0x1cfc,	// (0x000214a0) copy_highlight_digital_pane

0x1cfc,	// (0x000214a0) copy_highlight_primary_pane

0x1d0d,	// (0x000214b1) copy_highlight_primary_small_pane

0x1d15,	// (0x000214b9) copy_highlight_secondary_pane

0x1d1d,	// (0x000214c1) copy_highlight_title_pane

0x1d15,	// (0x000214b9) graphic_text_digital_pane

0x51f3,	// (0x00024997) graphic_text_primary_pane

0x51fc,	// (0x000249a0) graphic_text_primary_small_pane

0x1d0d,	// (0x000214b1) graphic_text_secondary_pane

0x1cfc,	// (0x000214a0) graphic_text_title_pane

0x34c4,	// (0x00022c68) cursor_primary_pane_g1

0x51e5,	// (0x00024989) cursor_text_primary_t1

0x7ab8,	// (0x0002725c) cursor_primary_small_pane_g1

0x51d7,	// (0x0002497b) cursor_text_primary_small_t1

0x7ab0,	// (0x00027254) cursor_primary_small_pane_g1_copy1

0x51c9,	// (0x0002496d) cursor_text_primary_small_t1_copy1

0x51bb,	// (0x0002495f) cursor_text_title_t1

0x7aa8,	// (0x0002724c) cursor_title_pane_g1

0x34c4,	// (0x00022c68) cursor_digital_pane_g1

0x1d25,	// (0x000214c9) cursor_text_digital_t1

0x1d33,	// (0x000214d7) link_highlight_primary_pane_g1

0x5164,	// (0x00024908) link_highlight_primary_pane_t1

0x1d33,	// (0x000214d7) link_highlight_primary_small_pane_g1

0x1d3b,	// (0x000214df) link_highlight_primary_small_pane_t1

0x1d4a,	// (0x000214ee) link_highlight_secondary_pane_g1

0x1d52,	// (0x000214f6) link_highlight_secondary_pane_t1

0x50c9,	// (0x0002486d) link_highlight_title_pane_g1

0x50e0,	// (0x00024884) link_highlight_title_pane_t1

0x50c9,	// (0x0002486d) link_highlight_digital_pane_g1

0x50d1,	// (0x00024875) link_highlight_digital_pane_t1

0x4fa5,	// (0x00024749) copy_highlight_primary_pane_g1

0x4fcb,	// (0x0002476f) copy_highlight_primary_pane_t1

0x4fa5,	// (0x00024749) copy_highlight_primary_small_pane_g1

0x4fbc,	// (0x00024760) copy_highlight_primary_small_pane_t1

0x1d61,	// (0x00021505) copy_highlight_secondary_pane_g1

0x1d69,	// (0x0002150d) copy_highlight_secondary_pane_t1

0x4fa5,	// (0x00024749) copy_highlight_title_pane_g1

0x4fad,	// (0x00024751) copy_highlight_title_pane_t1

0x4fa5,	// (0x00024749) copy_highlight_digital_pane_g1

0x5d87,	// (0x0002552b) copy_highlight_digital_pane_t1

0x5cdb,	// (0x0002547f) graphic_text_primary_pane_g1

0x5d6b,	// (0x0002550f) graphic_text_primary_pane_t1

0x5d79,	// (0x0002551d) graphic_text_primary_pane_t2

0x0001,

0xfa02,	// (0x0002f1a6) graphic_text_primary_pane_t

0x5d47,	// (0x000254eb) graphic_text_primary_small_pane_g1

0x5d4f,	// (0x000254f3) graphic_text_primary_small_pane_t1

0x5d5d,	// (0x00025501) graphic_text_primary_small_pane_t2

0x0001,

0xf9fd,	// (0x0002f1a1) graphic_text_primary_small_pane_t

0x5d23,	// (0x000254c7) graphic_text_secondary_pane_g1

0x5d2b,	// (0x000254cf) graphic_text_secondary_pane_t1

0x5d39,	// (0x000254dd) graphic_text_secondary_pane_t2

0x0001,

0xf9f8,	// (0x0002f19c) graphic_text_secondary_pane_t

0x5cff,	// (0x000254a3) graphic_text_title_pane_g1

0x5d07,	// (0x000254ab) graphic_text_title_pane_t1

0x5d15,	// (0x000254b9) graphic_text_title_pane_t2

0x0001,

0xf9f3,	// (0x0002f197) graphic_text_title_pane_t

0x5cdb,	// (0x0002547f) graphic_text_digital_pane_g1

0x5ce3,	// (0x00025487) graphic_text_digital_pane_t1

0x5cf1,	// (0x00025495) graphic_text_digital_pane_t2

0x0001,

0xf9ee,	// (0x0002f192) graphic_text_digital_pane_t

0x066b,	// (0x0001fe0f) navi_icon_pane_srt_ParamLimits

0x066b,	// (0x0001fe0f) navi_icon_pane_srt

0x0607,	// (0x0001fdab) navi_midp_pane_srt

0x0607,	// (0x0001fdab) navi_navi_pane_srt

0x066b,	// (0x0001fe0f) navi_text_pane_srt_ParamLimits

0x066b,	// (0x0001fe0f) navi_text_pane_srt

0x5721,	// (0x00024ec5) navi_navi_icon_text_pane_srt

0x573b,	// (0x00024edf) navi_navi_pane_srt_g1_ParamLimits

0x573b,	// (0x00024edf) navi_navi_pane_srt_g1

0x5729,	// (0x00024ecd) navi_navi_pane_srt_g2_ParamLimits

0x5729,	// (0x00024ecd) navi_navi_pane_srt_g2

0x0001,

0xf923,	// (0x0002f0c7) navi_navi_pane_srt_g_ParamLimits

0xf923,	// (0x0002f0c7) navi_navi_pane_srt_g

0x574d,	// (0x00024ef1) navi_navi_tabs_pane_srt

0x5721,	// (0x00024ec5) navi_navi_text_pane_srt

0x5721,	// (0x00024ec5) navi_navi_volume_pane_srt

0x5ccc,	// (0x00025470) navi_navi_text_pane_srt_t1

0xcfea,	// (0x0002c78e) navi_navi_volume_pane_srt_g1

0xcff2,	// (0x0002c796) volume_small_pane_srt_ParamLimits

0xcff2,	// (0x0002c796) volume_small_pane_srt

0xca5c,	// (0x0002c200) volume_small_pane_srt_g1_ParamLimits

0xca5c,	// (0x0002c200) volume_small_pane_srt_g1

0xca6c,	// (0x0002c210) volume_small_pane_srt_g2_ParamLimits

0xca6c,	// (0x0002c210) volume_small_pane_srt_g2

0xca7d,	// (0x0002c221) volume_small_pane_srt_g3_ParamLimits

0xca7d,	// (0x0002c221) volume_small_pane_srt_g3

0xca8e,	// (0x0002c232) volume_small_pane_srt_g4_ParamLimits

0xca8e,	// (0x0002c232) volume_small_pane_srt_g4

0xca9f,	// (0x0002c243) volume_small_pane_srt_g5_ParamLimits

0xca9f,	// (0x0002c243) volume_small_pane_srt_g5

0xcab0,	// (0x0002c254) volume_small_pane_srt_g6_ParamLimits

0xcab0,	// (0x0002c254) volume_small_pane_srt_g6

0xcac1,	// (0x0002c265) volume_small_pane_srt_g7_ParamLimits

0xcac1,	// (0x0002c265) volume_small_pane_srt_g7

0xcad2,	// (0x0002c276) volume_small_pane_srt_g8_ParamLimits

0xcad2,	// (0x0002c276) volume_small_pane_srt_g8

0xcae3,	// (0x0002c287) volume_small_pane_srt_g9_ParamLimits

0xcae3,	// (0x0002c287) volume_small_pane_srt_g9

0xcaf4,	// (0x0002c298) volume_small_pane_srt_g10_ParamLimits

0xcaf4,	// (0x0002c298) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0002ef46) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0002ef46) volume_small_pane_srt_g

0x091b,	// (0x000200bf) query_popup_data_pane_cp2

0x5cb2,	// (0x00025456) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5cb2,	// (0x00025456) navi_navi_icon_text_pane_srt_t1

0x51f3,	// (0x00024997) navi_tabs_2_long_pane_srt

0x51f3,	// (0x00024997) navi_tabs_2_pane_srt

0x51f3,	// (0x00024997) navi_tabs_3_long_pane_srt

0x51f3,	// (0x00024997) navi_tabs_3_pane_srt

0x51f3,	// (0x00024997) navi_tabs_4_pane_srt

0xcfca,	// (0x0002c76e) tabs_2_active_pane_srt_ParamLimits

0xcfca,	// (0x0002c76e) tabs_2_active_pane_srt

0xcfda,	// (0x0002c77e) tabs_2_passive_pane_srt_ParamLimits

0xcfda,	// (0x0002c77e) tabs_2_passive_pane_srt

0x47d8,	// (0x00023f7c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x47d8,	// (0x00023f7c) bg_passive_tab_pane_cp1_srt

0x5c99,	// (0x0002543d) bg_passive_tab_pane_g1_cp1_srt

0x198b,	// (0x0002112f) bg_passive_tab_pane_g2_cp1_srt

0x5c90,	// (0x00025434) bg_passive_tab_pane_g3_cp1_srt

0x066b,	// (0x0001fe0f) bg_active_tab_pane_cp1_srt_ParamLimits

0x066b,	// (0x0001fe0f) bg_active_tab_pane_cp1_srt

0x5ca2,	// (0x00025446) tabs_2_active_pane_srt_g1

0x2eda,	// (0x0002267e) tabs_2_active_pane_srt_t1_ParamLimits

0x2eda,	// (0x0002267e) tabs_2_active_pane_srt_t1

0x5c99,	// (0x0002543d) bg_active_tab_pane_g1_cp1_srt

0x198b,	// (0x0002112f) bg_active_tab_pane_g2_cp1_srt

0x5c90,	// (0x00025434) bg_active_tab_pane_g3_cp1_srt

0xcf97,	// (0x0002c73b) tabs_3_active_pane_srt_ParamLimits

0xcf97,	// (0x0002c73b) tabs_3_active_pane_srt

0xcfa8,	// (0x0002c74c) tabs_3_passive_pane_cp_srt_ParamLimits

0xcfa8,	// (0x0002c74c) tabs_3_passive_pane_cp_srt

0xcfb9,	// (0x0002c75d) tabs_3_passive_pane_srt_ParamLimits

0xcfb9,	// (0x0002c75d) tabs_3_passive_pane_srt

0x47d8,	// (0x00023f7c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x47d8,	// (0x00023f7c) bg_passive_tab_pane_cp2_srt

0x1d78,	// (0x0002151c) bg_passive_tab_pane_g1_cp2_srt

0x198b,	// (0x0002112f) bg_passive_tab_pane_g2_cp2_srt

0x1d81,	// (0x00021525) bg_passive_tab_pane_g3_cp2_srt

0x066b,	// (0x0001fe0f) bg_active_tab_pane_cp2_srt_ParamLimits

0x066b,	// (0x0001fe0f) bg_active_tab_pane_cp2_srt

0x5c88,	// (0x0002542c) tabs_3_active_pane_srt_g1

0x2c0c,	// (0x000223b0) tabs_3_active_pane_srt_t1_ParamLimits

0x2c0c,	// (0x000223b0) tabs_3_active_pane_srt_t1

0x1d78,	// (0x0002151c) bg_active_tab_pane_g1_cp2_srt

0x198b,	// (0x0002112f) bg_active_tab_pane_g2_cp2_srt

0x1d81,	// (0x00021525) bg_active_tab_pane_g3_cp2_srt

0xcf4f,	// (0x0002c6f3) tabs_4_active_pane_srt_ParamLimits

0xcf4f,	// (0x0002c6f3) tabs_4_active_pane_srt

0xcf61,	// (0x0002c705) tabs_4_passive_pane_cp2_srt_ParamLimits

0xcf61,	// (0x0002c705) tabs_4_passive_pane_cp2_srt

0x478e,	// (0x00023f32) aid_size_cell_toolbar

0x2eff,	// (0x000226a3) main_idle_act_pane_ParamLimits

0x485e,	// (0x00024002) popup_large_graphic_colour_window_ParamLimits

0x74ac,	// (0x00026c50) popup_toolbar_window_ParamLimits

0x74ac,	// (0x00026c50) popup_toolbar_window

0xcf26,	// (0x0002c6ca) list_single_graphic_2heading_pane_ParamLimits

0xcf26,	// (0x0002c6ca) list_single_graphic_2heading_pane

0x15fd,	// (0x00020da1) aid_size_cell_apps_grid_lsc_pane

0x160f,	// (0x00020db3) aid_size_cell_apps_grid_prt_pane

0x47d8,	// (0x00023f7c) bg_wml_button_pane_cp1_ParamLimits

0x47d8,	// (0x00023f7c) bg_wml_button_pane_cp1

0x7a51,	// (0x000271f5) form_midp_field_text_pane_t1_ParamLimits

0x4b84,	// (0x00024328) input_focus_pane_cp050_ParamLimits

0x4cc4,	// (0x00024468) list_midp_form_text_pane_ParamLimits

0x4ca1,	// (0x00024445) input_focus_pane_cp051_ParamLimits

0x4cb5,	// (0x00024459) list_midp_choice_pane_ParamLimits

0x79eb,	// (0x0002718f) list_single_2graphic_pane_cp3_ParamLimits

0x79eb,	// (0x0002718f) list_single_2graphic_pane_cp3

0x79ff,	// (0x000271a3) list_single_midp_graphic_pane_ParamLimits

0x79ff,	// (0x000271a3) list_single_midp_graphic_pane

0xbd8b,	// (0x0002b52f) list_single_graphic_2heading_pane_g1_ParamLimits

0xbd8b,	// (0x0002b52f) list_single_graphic_2heading_pane_g1

0xbd97,	// (0x0002b53b) list_single_graphic_2heading_pane_g4_ParamLimits

0xbd97,	// (0x0002b53b) list_single_graphic_2heading_pane_g4

0xb947,	// (0x0002b0eb) list_single_graphic_2heading_pane_g5_ParamLimits

0xb947,	// (0x0002b0eb) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0002ef99) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0002ef99) list_single_graphic_2heading_pane_g

0xbda3,	// (0x0002b547) list_single_graphic_2heading_pane_t1_ParamLimits

0xbda3,	// (0x0002b547) list_single_graphic_2heading_pane_t1

0xbdb7,	// (0x0002b55b) list_single_graphic_2heading_pane_t2_ParamLimits

0xbdb7,	// (0x0002b55b) list_single_graphic_2heading_pane_t2

0xbdd1,	// (0x0002b575) list_single_graphic_2heading_pane_t3_ParamLimits

0xbdd1,	// (0x0002b575) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0002efa0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0002efa0) list_single_graphic_2heading_pane_t

0x49e0,	// (0x00024184) bg_popup_sub_pane_cp2

0x4a06,	// (0x000241aa) grid_toobar_pane

0xcc4f,	// (0x0002c3f3) cell_toolbar_pane_ParamLimits

0xcc4f,	// (0x0002c3f3) cell_toolbar_pane

0x4a3c,	// (0x000241e0) cell_toolbar_pane_g1_ParamLimits

0x4a3c,	// (0x000241e0) cell_toolbar_pane_g1

0x4a4e,	// (0x000241f2) cell_toolbar_pane_g2_ParamLimits

0x4a4e,	// (0x000241f2) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0002efae) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0002efae) cell_toolbar_pane_g

0x4a70,	// (0x00024214) grid_highlight_pane_cp2_ParamLimits

0x4a70,	// (0x00024214) grid_highlight_pane_cp2

0x4a8a,	// (0x0002422e) toolbar_button_pane

0x4a96,	// (0x0002423a) toolbar_button_pane_g1

0x4aa6,	// (0x0002424a) toolbar_button_pane_g2

0x4a9e,	// (0x00024242) toolbar_button_pane_g3

0x4ab6,	// (0x0002425a) toolbar_button_pane_g4

0x4aae,	// (0x00024252) toolbar_button_pane_g5

0x4abe,	// (0x00024262) toolbar_button_pane_g6

0x4ac6,	// (0x0002426a) toolbar_button_pane_g7

0x4ad6,	// (0x0002427a) toolbar_button_pane_g8

0x4ace,	// (0x00024272) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0002efb3) toolbar_button_pane_g

0xcc7e,	// (0x0002c422) list_single_2graphic_pane_g1_cp3_ParamLimits

0xcc7e,	// (0x0002c422) list_single_2graphic_pane_g1_cp3

0xcc8a,	// (0x0002c42e) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcc8a,	// (0x0002c42e) list_single_2graphic_pane_g2_cp3

0x1b02,	// (0x000212a6) list_single_2graphic_pane_g3_cp3

0x557c,	// (0x00024d20) list_single_2graphic_pane_g4_cp3_ParamLimits

0x557c,	// (0x00024d20) list_single_2graphic_pane_g4_cp3

0xcc99,	// (0x0002c43d) list_single_2graphic_pane_t1_cp3_ParamLimits

0xcc99,	// (0x0002c43d) list_single_2graphic_pane_t1_cp3

0x1af6,	// (0x0002129a) list_single_midp_graphic_pane_g2_ParamLimits

0x1af6,	// (0x0002129a) list_single_midp_graphic_pane_g2

0xbd5e,	// (0x0002b502) aid_zoom_text_primary

0xcc47,	// (0x0002c3eb) aid_zoom_text_secondary

0x1e33,	// (0x000215d7) status_small_pane_g7_ParamLimits

0x1e33,	// (0x000215d7) status_small_pane_g7

0x1e56,	// (0x000215fa) status_small_pane_t1_ParamLimits

0x2b87,	// (0x0002232b) title_pane_g2

0x0003,

0xf592,	// (0x0002ed36) title_pane_g

0x2dd9,	// (0x0002257d) aid_size_cell_colour_1_pane_ParamLimits

0x2dd9,	// (0x0002257d) aid_size_cell_colour_1_pane

0x2ded,	// (0x00022591) aid_size_cell_colour_2_pane_ParamLimits

0x2ded,	// (0x00022591) aid_size_cell_colour_2_pane

0x2e01,	// (0x000225a5) aid_size_cell_colour_3_pane_ParamLimits

0x2e01,	// (0x000225a5) aid_size_cell_colour_3_pane

0x2e15,	// (0x000225b9) aid_size_cell_colour_4_pane_ParamLimits

0x2e15,	// (0x000225b9) aid_size_cell_colour_4_pane

0xc707,	// (0x0002beab) title_pane_stacon_g1_ParamLimits

0xc707,	// (0x0002beab) title_pane_stacon_g1

0x5022,	// (0x000247c6) popup_note_wait_window_g3_ParamLimits

0x5022,	// (0x000247c6) popup_note_wait_window_g3

0x5098,	// (0x0002483c) popup_note_wait_window_t5_ParamLimits

0x5098,	// (0x0002483c) popup_note_wait_window_t5

0x0607,	// (0x0001fdab) main_feb_china_hwr_fs_writing_pane

0x719b,	// (0x0002693f) popup_feb_china_hwr_fs_window_ParamLimits

0x719b,	// (0x0002693f) popup_feb_china_hwr_fs_window

0xccc9,	// (0x0002c46d) aid_size_cell_hwr_fs_ParamLimits

0xccc9,	// (0x0002c46d) aid_size_cell_hwr_fs

0x4b84,	// (0x00024328) bg_popup_sub_pane_cp3_ParamLimits

0x4b84,	// (0x00024328) bg_popup_sub_pane_cp3

0xccde,	// (0x0002c482) grid_hwr_fs_pane_ParamLimits

0xccde,	// (0x0002c482) grid_hwr_fs_pane

0xccf2,	// (0x0002c496) linegrid_hwr_fs_pane_ParamLimits

0xccf2,	// (0x0002c496) linegrid_hwr_fs_pane

0xcd02,	// (0x0002c4a6) cell_hwr_fs_pane_ParamLimits

0xcd02,	// (0x0002c4a6) cell_hwr_fs_pane

0x4b90,	// (0x00024334) linegrid_hwr_fs_pane_g1_ParamLimits

0x4b90,	// (0x00024334) linegrid_hwr_fs_pane_g1

0x79bf,	// (0x00027163) linegrid_hwr_fs_pane_g2_ParamLimits

0x79bf,	// (0x00027163) linegrid_hwr_fs_pane_g2

0x4b9c,	// (0x00024340) linegrid_hwr_fs_pane_g3_ParamLimits

0x4b9c,	// (0x00024340) linegrid_hwr_fs_pane_g3

0xcd20,	// (0x0002c4c4) linegrid_hwr_fs_pane_g4_ParamLimits

0xcd20,	// (0x0002c4c4) linegrid_hwr_fs_pane_g4

0xcd3a,	// (0x0002c4de) linegrid_hwr_fs_pane_g5_ParamLimits

0xcd3a,	// (0x0002c4de) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0002efd9) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0002efd9) linegrid_hwr_fs_pane_g

0x4ba8,	// (0x0002434c) cell_hwr_fs_pane_g1_ParamLimits

0x4ba8,	// (0x0002434c) cell_hwr_fs_pane_g1

0x49ae,	// (0x00024152) cell_hwr_fs_pane_g2_ParamLimits

0x49ae,	// (0x00024152) cell_hwr_fs_pane_g2

0x79d1,	// (0x00027175) cell_hwr_fs_pane_g3_ParamLimits

0x79d1,	// (0x00027175) cell_hwr_fs_pane_g3

0x79de,	// (0x00027182) cell_hwr_fs_pane_g4_ParamLimits

0x79de,	// (0x00027182) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0002efe4) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0002efe4) cell_hwr_fs_pane_g

0xcd50,	// (0x0002c4f4) cell_hwr_fs_pane_t1

0x0607,	// (0x0001fdab) grid_highlight_pane_cp6

0x0607,	// (0x0001fdab) main_idle_act2_pane

0x1406,	// (0x00020baa) aid_inside_area_popup_secondary

0x7ad6,	// (0x0002727a) aid_inside_area_window_primary_ParamLimits

0x7ad6,	// (0x0002727a) aid_inside_area_window_primary

0x5d96,	// (0x0002553a) ai2_news_ticker_pane

0x5d9e,	// (0x00025542) aid_size_cell_ai1_link_ParamLimits

0x5d9e,	// (0x00025542) aid_size_cell_ai1_link

0x7e1e,	// (0x000275c2) popup_ai2_data_window_ParamLimits

0x7e1e,	// (0x000275c2) popup_ai2_data_window

0x5db8,	// (0x0002555c) popup_ai2_link_window_ParamLimits

0x5db8,	// (0x0002555c) popup_ai2_link_window

0x4b84,	// (0x00024328) bg_popup_sub_pane_cp4_ParamLimits

0x4b84,	// (0x00024328) bg_popup_sub_pane_cp4

0x5dcc,	// (0x00025570) grid_ai2_link_pane_ParamLimits

0x5dcc,	// (0x00025570) grid_ai2_link_pane

0x5de3,	// (0x00025587) popup_ai2_link_window_g1_ParamLimits

0x5de3,	// (0x00025587) popup_ai2_link_window_g1

0x5def,	// (0x00025593) popup_ai2_link_window_g2_ParamLimits

0x5def,	// (0x00025593) popup_ai2_link_window_g2

0x0001,

0xfa07,	// (0x0002f1ab) popup_ai2_link_window_g_ParamLimits

0xfa07,	// (0x0002f1ab) popup_ai2_link_window_g

0x5dfe,	// (0x000255a2) ai2_mp_button_pane

0x5e06,	// (0x000255aa) ai2_mp_volume_pane

0x4ca1,	// (0x00024445) bg_popup_sub_pane_cp5_ParamLimits

0x4ca1,	// (0x00024445) bg_popup_sub_pane_cp5

0x5e0e,	// (0x000255b2) heading_ai2_gene_pane_ParamLimits

0x5e0e,	// (0x000255b2) heading_ai2_gene_pane

0x5e1a,	// (0x000255be) list_ai2_gene_pane_ParamLimits

0x5e1a,	// (0x000255be) list_ai2_gene_pane

0x5e62,	// (0x00025606) cell_ai2_link_pane_ParamLimits

0x5e62,	// (0x00025606) cell_ai2_link_pane

0x5e78,	// (0x0002561c) cell_ai2_link_pane_g1

0x0607,	// (0x0001fdab) grid_highlight_pane_cp7

0xd007,	// (0x0002c7ab) ai2_mp_volume_pane_g1

0x5f15,	// (0x000256b9) ai2_mp_volume_pane_g2

0x7e49,	// (0x000275ed) list_ai2_gene_pane_t1

0x5f0d,	// (0x000256b1) ai2_mp_volume_pane_g3

0x0002,

0xfa20,	// (0x0002f1c4) ai2_mp_volume_pane_g

0xd00f,	// (0x0002c7b3) volume_small_pane_cp3

0x5f1d,	// (0x000256c1) aid_size_cell_ai2_button

0x5f25,	// (0x000256c9) grid_ai2_button_pane

0x5f2e,	// (0x000256d2) cell_ai2_button_pane_ParamLimits

0x5f2e,	// (0x000256d2) cell_ai2_button_pane

0x0585,	// (0x0001fd29) cell_ai2_button_pane_g1

0x0607,	// (0x0001fdab) grid_highlight_pane_cp8

0x5ecd,	// (0x00025671) ai2_gene_pane_t1_ParamLimits

0x5ecd,	// (0x00025671) ai2_gene_pane_t1

0x7141,	// (0x000268e5) aid_height_parent_landscape

0x7bd4,	// (0x00027378) aid_height_set_list

0x5b8a,	// (0x0002532e) aid_size_parent

0x5c66,	// (0x0002540a) aid_size_cell_graphic_pane_ParamLimits

0x5e2a,	// (0x000255ce) popup_ai2_data_window_g1_ParamLimits

0x5e2a,	// (0x000255ce) popup_ai2_data_window_g1

0x5e36,	// (0x000255da) ai2_news_ticker_pane_g1

0x5e3e,	// (0x000255e2) ai2_news_ticker_pane_g2

0x0001,

0xfa0c,	// (0x0002f1b0) ai2_news_ticker_pane_g

0x5e46,	// (0x000255ea) ai2_news_ticker_pane_t1

0x5e54,	// (0x000255f8) ai2_news_ticker_pane_t2

0x0001,

0xfa11,	// (0x0002f1b5) ai2_news_ticker_pane_t

0x5c47,	// (0x000253eb) heading_ai2_gene_pane_g1

0x5e81,	// (0x00025625) heading_ai2_gene_pane_t1_ParamLimits

0x5e81,	// (0x00025625) heading_ai2_gene_pane_t1

0x5e96,	// (0x0002563a) list_highlight_pane_cp6

0x7e32,	// (0x000275d6) ai2_gene_pane_ParamLimits

0x7e32,	// (0x000275d6) ai2_gene_pane

0x7e57,	// (0x000275fb) list_ai2_gene_pane_t2

0x0001,

0xfa16,	// (0x0002f1ba) list_ai2_gene_pane_t

0x5e9e,	// (0x00025642) list_highlight_pane_cp8_ParamLimits

0x5e9e,	// (0x00025642) list_highlight_pane_cp8

0x5eaf,	// (0x00025653) ai2_gene_pane_g1_ParamLimits

0x5eaf,	// (0x00025653) ai2_gene_pane_g1

0x5ec1,	// (0x00025665) ai2_gene_pane_g2_ParamLimits

0x5ec1,	// (0x00025665) ai2_gene_pane_g2

0x0001,

0xfa1b,	// (0x0002f1bf) ai2_gene_pane_g_ParamLimits

0xfa1b,	// (0x0002f1bf) ai2_gene_pane_g

0x0bb2,	// (0x00020356) scroll_pane_cp12

0xcbfe,	// (0x0002c3a2) control_pane_t3_ParamLimits

0xcbfe,	// (0x0002c3a2) control_pane_t3

0x1e47,	// (0x000215eb) status_small_pane_g8_ParamLimits

0x1e47,	// (0x000215eb) status_small_pane_g8

0x7209,	// (0x000269ad) popup_find_window_ParamLimits

0x736c,	// (0x00026b10) popup_note_image_window_ParamLimits

0xb7e8,	// (0x0002af8c) list_double2_graphic_pane_vc_g1_ParamLimits

0xb7e8,	// (0x0002af8c) list_double2_graphic_pane_vc_g1

0xc670,	// (0x0002be14) list_double2_graphic_pane_vc_g2_ParamLimits

0xc670,	// (0x0002be14) list_double2_graphic_pane_vc_g2

0xc67c,	// (0x0002be20) list_double2_graphic_pane_vc_g3_ParamLimits

0xc67c,	// (0x0002be20) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0002efa7) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0002efa7) list_double2_graphic_pane_vc_g

0xb7c0,	// (0x0002af64) list_double2_graphic_pane_vc_t1_ParamLimits

0xb7c0,	// (0x0002af64) list_double2_graphic_pane_vc_t1

0xc670,	// (0x0002be14) list_single_heading_pane_vc_g1_ParamLimits

0xc670,	// (0x0002be14) list_single_heading_pane_vc_g1

0xc67c,	// (0x0002be20) list_single_heading_pane_vc_g2_ParamLimits

0xc67c,	// (0x0002be20) list_single_heading_pane_vc_g2

0x0001,

0xf635,	// (0x0002edd9) list_single_heading_pane_vc_g_ParamLimits

0xf635,	// (0x0002edd9) list_single_heading_pane_vc_g

0xbde9,	// (0x0002b58d) list_single_heading_pane_vc_t1_ParamLimits

0xbde9,	// (0x0002b58d) list_single_heading_pane_vc_t1

0xbdff,	// (0x0002b5a3) list_single_heading_pane_vc_t2_ParamLimits

0xbdff,	// (0x0002b5a3) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0002efc8) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0002efc8) list_single_heading_pane_vc_t

0x4ade,	// (0x00024282) list_setting_number_pane_vc_g1_ParamLimits

0x4ade,	// (0x00024282) list_setting_number_pane_vc_g1

0x4aea,	// (0x0002428e) list_setting_number_pane_vc_g2_ParamLimits

0x4aea,	// (0x0002428e) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0002efcd) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0002efcd) list_setting_number_pane_vc_g

0x4af6,	// (0x0002429a) list_setting_number_pane_vc_t1_ParamLimits

0x4af6,	// (0x0002429a) list_setting_number_pane_vc_t1

0x4b0a,	// (0x000242ae) list_setting_number_pane_vc_t2_ParamLimits

0x4b0a,	// (0x000242ae) list_setting_number_pane_vc_t2

0x4b26,	// (0x000242ca) list_setting_number_pane_vc_t3_ParamLimits

0x4b26,	// (0x000242ca) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0002efd2) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0002efd2) list_setting_number_pane_vc_t

0x4b4c,	// (0x000242f0) set_value_pane_vc_ParamLimits

0x4b4c,	// (0x000242f0) set_value_pane_vc

0xcf26,	// (0x0002c6ca) list_double2_graphic_pane_vc_ParamLimits

0xcf26,	// (0x0002c6ca) list_double2_graphic_pane_vc

0x5be5,	// (0x00025389) list_double2_large_graphic_pane_vc_ParamLimits

0x5be5,	// (0x00025389) list_double2_large_graphic_pane_vc

0xcf26,	// (0x0002c6ca) list_double2_pane_vc_ParamLimits

0xcf26,	// (0x0002c6ca) list_double2_pane_vc

0xcf26,	// (0x0002c6ca) list_double_graphic_heading_pane_vc_ParamLimits

0xcf26,	// (0x0002c6ca) list_double_graphic_heading_pane_vc

0xcf26,	// (0x0002c6ca) list_double_graphic_pane_vc_ParamLimits

0xcf26,	// (0x0002c6ca) list_double_graphic_pane_vc

0xcf26,	// (0x0002c6ca) list_double_heading_pane_vc_ParamLimits

0xcf26,	// (0x0002c6ca) list_double_heading_pane_vc

0x5be5,	// (0x00025389) list_double_large_graphic_pane_vc_ParamLimits

0x5be5,	// (0x00025389) list_double_large_graphic_pane_vc

0xcf26,	// (0x0002c6ca) list_double_number_pane_vc_ParamLimits

0xcf26,	// (0x0002c6ca) list_double_number_pane_vc

0xcf26,	// (0x0002c6ca) list_double_pane_vc_ParamLimits

0xcf26,	// (0x0002c6ca) list_double_pane_vc

0xcf26,	// (0x0002c6ca) list_double_time_pane_vc_ParamLimits

0xcf26,	// (0x0002c6ca) list_double_time_pane_vc

0xcf26,	// (0x0002c6ca) list_setting_number_pane_vc_ParamLimits

0xcf26,	// (0x0002c6ca) list_setting_number_pane_vc

0xcf26,	// (0x0002c6ca) list_setting_pane_vc_ParamLimits

0xcf26,	// (0x0002c6ca) list_setting_pane_vc

0xcf26,	// (0x0002c6ca) list_single_graphic_heading_pane_vc_ParamLimits

0xcf26,	// (0x0002c6ca) list_single_graphic_heading_pane_vc

0xcf26,	// (0x0002c6ca) list_single_heading_pane_vc_ParamLimits

0xcf26,	// (0x0002c6ca) list_single_heading_pane_vc

0xbe8e,	// (0x0002b632) list_single_number_heading_pane_vc_ParamLimits

0xbe8e,	// (0x0002b632) list_single_number_heading_pane_vc

0xb7e8,	// (0x0002af8c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb7e8,	// (0x0002af8c) list_double_graphic_heading_pane_vc_g1

0xc670,	// (0x0002be14) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc670,	// (0x0002be14) list_double_graphic_heading_pane_vc_g2

0xc67c,	// (0x0002be20) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc67c,	// (0x0002be20) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x0002efa7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0002efa7) list_double_graphic_heading_pane_vc_g

0xbee1,	// (0x0002b685) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xbee1,	// (0x0002b685) list_double_graphic_heading_pane_vc_t1

0xbde9,	// (0x0002b58d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xbde9,	// (0x0002b58d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa27,	// (0x0002f1cb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x0002f1cb) list_double_graphic_heading_pane_vc_t

0x4ade,	// (0x00024282) list_setting_pane_vc_g1_ParamLimits

0x4ade,	// (0x00024282) list_setting_pane_vc_g1

0x4aea,	// (0x0002428e) list_setting_pane_vc_g2_ParamLimits

0x4aea,	// (0x0002428e) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0002efcd) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0002efcd) list_setting_pane_vc_g

0x611d,	// (0x000258c1) list_setting_pane_vc_t1_ParamLimits

0x611d,	// (0x000258c1) list_setting_pane_vc_t1

0x6131,	// (0x000258d5) list_setting_pane_vc_t2_ParamLimits

0x6131,	// (0x000258d5) list_setting_pane_vc_t2

0x0001,

0xfa6a,	// (0x0002f20e) list_setting_pane_vc_t_ParamLimits

0xfa6a,	// (0x0002f20e) list_setting_pane_vc_t

0x4b4c,	// (0x000242f0) set_value_pane_cp_vc_ParamLimits

0x4b4c,	// (0x000242f0) set_value_pane_cp_vc

0xc670,	// (0x0002be14) list_single_number_heading_pane_vc_g1_ParamLimits

0xc670,	// (0x0002be14) list_single_number_heading_pane_vc_g1

0xc67c,	// (0x0002be20) list_single_number_heading_pane_vc_g2_ParamLimits

0xc67c,	// (0x0002be20) list_single_number_heading_pane_vc_g2

0x0001,

0xf635,	// (0x0002edd9) list_single_number_heading_pane_vc_g_ParamLimits

0xf635,	// (0x0002edd9) list_single_number_heading_pane_vc_g

0xbde9,	// (0x0002b58d) list_single_number_heading_pane_vc_t1_ParamLimits

0xbde9,	// (0x0002b58d) list_single_number_heading_pane_vc_t1

0xbef3,	// (0x0002b697) list_single_number_heading_pane_vc_t2_ParamLimits

0xbef3,	// (0x0002b697) list_single_number_heading_pane_vc_t2

0xbf05,	// (0x0002b6a9) list_single_number_heading_pane_vc_t3_ParamLimits

0xbf05,	// (0x0002b6a9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6f,	// (0x0002f213) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x0002f213) list_single_number_heading_pane_vc_t

0xb7e8,	// (0x0002af8c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb7e8,	// (0x0002af8c) list_single_graphic_heading_pane_vc_g1

0xc670,	// (0x0002be14) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc670,	// (0x0002be14) list_single_graphic_heading_pane_vc_g4

0xc67c,	// (0x0002be20) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc67c,	// (0x0002be20) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0002efa7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0002efa7) list_single_graphic_heading_pane_vc_g

0xbde9,	// (0x0002b58d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xbde9,	// (0x0002b58d) list_single_graphic_heading_pane_vc_t1

0xbf17,	// (0x0002b6bb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xbf17,	// (0x0002b6bb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x0002f21a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x0002f21a) list_single_graphic_heading_pane_vc_t

0xc670,	// (0x0002be14) list_double2_pane_vc_g1_ParamLimits

0xc670,	// (0x0002be14) list_double2_pane_vc_g1

0xc67c,	// (0x0002be20) list_double2_pane_vc_g2_ParamLimits

0xc67c,	// (0x0002be20) list_double2_pane_vc_g2

0x0001,

0xf635,	// (0x0002edd9) list_double2_pane_vc_g_ParamLimits

0xf635,	// (0x0002edd9) list_double2_pane_vc_g

0xb743,	// (0x0002aee7) list_double2_pane_vc_t1_ParamLimits

0xb743,	// (0x0002aee7) list_double2_pane_vc_t1

0xc644,	// (0x0002bde8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc644,	// (0x0002bde8) list_double2_large_graphic_pane_vc_g1

0xc650,	// (0x0002bdf4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc650,	// (0x0002bdf4) list_double2_large_graphic_pane_vc_g2

0xc65c,	// (0x0002be00) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc65c,	// (0x0002be00) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x0002edd2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x0002edd2) list_double2_large_graphic_pane_vc_g

0xb72d,	// (0x0002aed1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb72d,	// (0x0002aed1) list_double2_large_graphic_pane_vc_t1

0xd069,	// (0x0002c80d) list_double_time_pane_vc_g1_ParamLimits

0xd069,	// (0x0002c80d) list_double_time_pane_vc_g1

0xd075,	// (0x0002c819) list_double_time_pane_vc_g2_ParamLimits

0xd075,	// (0x0002c819) list_double_time_pane_vc_g2

0x0001,

0xfa7b,	// (0x0002f21f) list_double_time_pane_vc_g_ParamLimits

0xfa7b,	// (0x0002f21f) list_double_time_pane_vc_g

0xbf29,	// (0x0002b6cd) list_double_time_pane_vc_t1_ParamLimits

0xbf29,	// (0x0002b6cd) list_double_time_pane_vc_t1

0xbf42,	// (0x0002b6e6) list_double_time_pane_vc_t2_ParamLimits

0xbf42,	// (0x0002b6e6) list_double_time_pane_vc_t2

0xbf7b,	// (0x0002b71f) list_double_time_pane_vc_t3_ParamLimits

0xbf7b,	// (0x0002b71f) list_double_time_pane_vc_t3

0xbf93,	// (0x0002b737) list_double_time_pane_vc_t4_ParamLimits

0xbf93,	// (0x0002b737) list_double_time_pane_vc_t4

0x0003,

0xfa80,	// (0x0002f224) list_double_time_pane_vc_t_ParamLimits

0xfa80,	// (0x0002f224) list_double_time_pane_vc_t

0xc670,	// (0x0002be14) list_double_pane_vc_g1_ParamLimits

0xc670,	// (0x0002be14) list_double_pane_vc_g1

0xc67c,	// (0x0002be20) list_double_pane_vc_g2_ParamLimits

0xc67c,	// (0x0002be20) list_double_pane_vc_g2

0x0001,

0xf635,	// (0x0002edd9) list_double_pane_vc_g_ParamLimits

0xf635,	// (0x0002edd9) list_double_pane_vc_g

0xbfa5,	// (0x0002b749) list_double_pane_vc_t1_ParamLimits

0xbfa5,	// (0x0002b749) list_double_pane_vc_t1

0xbfb7,	// (0x0002b75b) list_double_pane_vc_t2_ParamLimits

0xbfb7,	// (0x0002b75b) list_double_pane_vc_t2

0x0001,

0xfa89,	// (0x0002f22d) list_double_pane_vc_t_ParamLimits

0xfa89,	// (0x0002f22d) list_double_pane_vc_t

0xc670,	// (0x0002be14) list_double_number_pane_vc_g1_ParamLimits

0xc670,	// (0x0002be14) list_double_number_pane_vc_g1

0xc67c,	// (0x0002be20) list_double_number_pane_vc_g2_ParamLimits

0xc67c,	// (0x0002be20) list_double_number_pane_vc_g2

0x0001,

0xf635,	// (0x0002edd9) list_double_number_pane_vc_g_ParamLimits

0xf635,	// (0x0002edd9) list_double_number_pane_vc_g

0xbfcd,	// (0x0002b771) list_double_number_pane_vc_t1_ParamLimits

0xbfcd,	// (0x0002b771) list_double_number_pane_vc_t1

0xbfe1,	// (0x0002b785) list_double_number_pane_vc_t2_ParamLimits

0xbfe1,	// (0x0002b785) list_double_number_pane_vc_t2

0xbfb7,	// (0x0002b75b) list_double_number_pane_vc_t3_ParamLimits

0xbfb7,	// (0x0002b75b) list_double_number_pane_vc_t3

0x0002,

0xfa8e,	// (0x0002f232) list_double_number_pane_vc_t_ParamLimits

0xfa8e,	// (0x0002f232) list_double_number_pane_vc_t

0xd081,	// (0x0002c825) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd081,	// (0x0002c825) list_double_large_graphic_pane_vc_g1

0xd08d,	// (0x0002c831) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd08d,	// (0x0002c831) list_double_large_graphic_pane_vc_g2

0xc65c,	// (0x0002be00) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc65c,	// (0x0002be00) list_double_large_graphic_pane_vc_g3

0xbff3,	// (0x0002b797) list_double_large_graphic_pane_vc_g4_ParamLimits

0xbff3,	// (0x0002b797) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa95,	// (0x0002f239) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa95,	// (0x0002f239) list_double_large_graphic_pane_vc_g

0xbfff,	// (0x0002b7a3) list_double_large_graphic_pane_vc_t1_ParamLimits

0xbfff,	// (0x0002b7a3) list_double_large_graphic_pane_vc_t1

0xc011,	// (0x0002b7b5) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc011,	// (0x0002b7b5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9e,	// (0x0002f242) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9e,	// (0x0002f242) list_double_large_graphic_pane_vc_t

0xc670,	// (0x0002be14) list_double_heading_pane_vc_g1_ParamLimits

0xc670,	// (0x0002be14) list_double_heading_pane_vc_g1

0xc67c,	// (0x0002be20) list_double_heading_pane_vc_g2_ParamLimits

0xc67c,	// (0x0002be20) list_double_heading_pane_vc_g2

0x0001,

0xf635,	// (0x0002edd9) list_double_heading_pane_vc_g_ParamLimits

0xf635,	// (0x0002edd9) list_double_heading_pane_vc_g

0xc028,	// (0x0002b7cc) list_double_heading_pane_vc_t1_ParamLimits

0xc028,	// (0x0002b7cc) list_double_heading_pane_vc_t1

0xbde9,	// (0x0002b58d) list_double_heading_pane_vc_t2_ParamLimits

0xbde9,	// (0x0002b58d) list_double_heading_pane_vc_t2

0x0001,

0xfaa3,	// (0x0002f247) list_double_heading_pane_vc_t_ParamLimits

0xfaa3,	// (0x0002f247) list_double_heading_pane_vc_t

0xb7e8,	// (0x0002af8c) list_double_graphic_pane_vc_g1_ParamLimits

0xb7e8,	// (0x0002af8c) list_double_graphic_pane_vc_g1

0xc688,	// (0x0002be2c) list_double_graphic_pane_vc_g2_ParamLimits

0xc688,	// (0x0002be2c) list_double_graphic_pane_vc_g2

0xc697,	// (0x0002be3b) list_double_graphic_pane_vc_g3_ParamLimits

0xc697,	// (0x0002be3b) list_double_graphic_pane_vc_g3

0x0002,

0xfaa8,	// (0x0002f24c) list_double_graphic_pane_vc_g_ParamLimits

0xfaa8,	// (0x0002f24c) list_double_graphic_pane_vc_g

0xc03a,	// (0x0002b7de) list_double_graphic_pane_vc_t1_ParamLimits

0xc03a,	// (0x0002b7de) list_double_graphic_pane_vc_t1

0xbfb7,	// (0x0002b75b) list_double_graphic_pane_vc_t2_ParamLimits

0xbfb7,	// (0x0002b75b) list_double_graphic_pane_vc_t2

0x0001,

0xfaaf,	// (0x0002f253) list_double_graphic_pane_vc_t_ParamLimits

0xfaaf,	// (0x0002f253) list_double_graphic_pane_vc_t

0xc34c,	// (0x0002baf0) aid_size_cell_fastswap

0xc354,	// (0x0002baf8) aid_size_cell_touch_ParamLimits

0xc354,	// (0x0002baf8) aid_size_cell_touch

0xc499,	// (0x0002bc3d) popup_fast_swap_wide_window_ParamLimits

0xc499,	// (0x0002bc3d) popup_fast_swap_wide_window

0xc55f,	// (0x0002bd03) touch_pane_ParamLimits

0xc55f,	// (0x0002bd03) touch_pane

0xbaa6,	// (0x0002b24a) button_value_adjust_pane_cp2

0xbaae,	// (0x0002b252) button_value_adjust_pane_cp4

0xbace,	// (0x0002b272) form_field_data_pane_cp2

0xbaed,	// (0x0002b291) form_field_data_wide_pane_cp2

0x1646,	// (0x00020dea) bg_scroll_pane_ParamLimits

0xc828,	// (0x0002bfcc) scroll_handle_pane_ParamLimits

0xc83c,	// (0x0002bfe0) scroll_sc2_down_pane_ParamLimits

0xc83c,	// (0x0002bfe0) scroll_sc2_down_pane

0x1677,	// (0x00020e1b) scroll_sc2_up_pane_ParamLimits

0x1677,	// (0x00020e1b) scroll_sc2_up_pane

0x7f88,	// (0x0002772c) grid_wheel_folder_pane_g1_ParamLimits

0x7f88,	// (0x0002772c) grid_wheel_folder_pane_g1

0xca00,	// (0x0002c1a4) clock_nsta_pane_cp2_ParamLimits

0xca00,	// (0x0002c1a4) clock_nsta_pane_cp2

0x341f,	// (0x00022bc3) listscroll_midp_pane_ParamLimits

0x342b,	// (0x00022bcf) midp_canvas_pane

0xcc3f,	// (0x0002c3e3) nsta_clock_indic_pane

0x47be,	// (0x00023f62) listscroll_form_pane_vc

0x47c6,	// (0x00023f6a) listscroll_set_pane_vc_ParamLimits

0x47c6,	// (0x00023f6a) listscroll_set_pane_vc

0x759a,	// (0x00026d3e) clock_nsta_pane

0x75a7,	// (0x00026d4b) indicator_nsta_pane

0x49e0,	// (0x00024184) bg_popup_sub_pane_cp2_ParamLimits

0x49f4,	// (0x00024198) find_pane_cp2_ParamLimits

0x49f4,	// (0x00024198) find_pane_cp2

0x4a06,	// (0x000241aa) grid_toobar_pane_ParamLimits

0x4b58,	// (0x000242fc) list_form_gen_pane_vc_ParamLimits

0x4b58,	// (0x000242fc) list_form_gen_pane_vc

0x4b6e,	// (0x00024312) scroll_pane_cp8_vc_ParamLimits

0x4b6e,	// (0x00024312) scroll_pane_cp8_vc

0x4bbe,	// (0x00024362) data_form_wide_pane_vc_ParamLimits

0x4bbe,	// (0x00024362) data_form_wide_pane_vc

0x4bca,	// (0x0002436e) form_field_data_wide_pane_vc_g1

0x4bd2,	// (0x00024376) form_field_data_wide_pane_vc_t1_ParamLimits

0x4bd2,	// (0x00024376) form_field_data_wide_pane_vc_t1

0x12c8,	// (0x00020a6c) input_focus_pane_cp6_vc_ParamLimits

0x12c8,	// (0x00020a6c) input_focus_pane_cp6_vc

0x7a74,	// (0x00027218) list_midp_pane_ParamLimits

0x7a80,	// (0x00027224) scroll_pane_cp16_ParamLimits

0x7a80,	// (0x00027224) scroll_pane_cp16

0x4e2b,	// (0x000245cf) button_value_adjust_pane_ParamLimits

0x4e2b,	// (0x000245cf) button_value_adjust_pane

0x7be0,	// (0x00027384) button_value_adjust_pane_cp6_ParamLimits

0x7be0,	// (0x00027384) button_value_adjust_pane_cp6

0x7ce8,	// (0x0002748c) settings_code_pane_cp_ParamLimits

0x7ce8,	// (0x0002748c) settings_code_pane_cp

0x0585,	// (0x0001fd29) cell_touch_pane_g1

0x0585,	// (0x0001fd29) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0002eef0) cell_touch_pane_g

0x7e65,	// (0x00027609) cell_touch_pane_cp_ParamLimits

0x7e65,	// (0x00027609) cell_touch_pane_cp

0x7e75,	// (0x00027619) cell_touch_pane_ParamLimits

0x7e75,	// (0x00027619) cell_touch_pane

0x0585,	// (0x0001fd29) scroll_sc2_down_pane_g1

0x0585,	// (0x0001fd29) scroll_sc2_up_pane_g1

0x0607,	// (0x0001fdab) bg_set_opt_pane_cp4_vc

0x5f40,	// (0x000256e4) list_set_graphic_pane_vc_g1_ParamLimits

0x5f40,	// (0x000256e4) list_set_graphic_pane_vc_g1

0x5f4c,	// (0x000256f0) list_set_graphic_pane_vc_g2_ParamLimits

0x5f4c,	// (0x000256f0) list_set_graphic_pane_vc_g2

0x0001,

0xfa2c,	// (0x0002f1d0) list_set_graphic_pane_vc_g_ParamLimits

0xfa2c,	// (0x0002f1d0) list_set_graphic_pane_vc_g

0x5f58,	// (0x000256fc) text_primary_small_cp13_vc_ParamLimits

0x5f58,	// (0x000256fc) text_primary_small_cp13_vc

0x5f70,	// (0x00025714) list_set_graphic_pane_vc_ParamLimits

0x5f70,	// (0x00025714) list_set_graphic_pane_vc

0x0607,	// (0x0001fdab) input_focus_pane_cp2_vc

0x0585,	// (0x0001fd29) setting_code_pane_vc_g1

0x5f83,	// (0x00025727) setting_code_pane_vc_t1

0x5f91,	// (0x00025735) set_text_pane_vc_t1_ParamLimits

0x5f91,	// (0x00025735) set_text_pane_vc_t1

0x0607,	// (0x0001fdab) input_focus_pane_cp1_vc

0x5fac,	// (0x00025750) list_set_text_pane_vc

0x0585,	// (0x0001fd29) setting_text_pane_vc_g1

0x0607,	// (0x0001fdab) bg_set_opt_pane_cp2_vc

0x5fb6,	// (0x0002575a) setting_slider_graphic_pane_vc_g1

0x5fbe,	// (0x00025762) setting_slider_graphic_pane_vc_t1

0x5fcc,	// (0x00025770) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa31,	// (0x0002f1d5) setting_slider_graphic_pane_vc_t

0x5fda,	// (0x0002577e) slider_set_pane_cp_vc

0x5fe2,	// (0x00025786) slider_set_pane_vc_g1

0x5feb,	// (0x0002578f) slider_set_pane_vc_g2

0x0006,

0xfa36,	// (0x0002f1da) slider_set_pane_vc_g

0x1317,	// (0x00020abb) set_opt_bg_pane_g1_copy1

0x131f,	// (0x00020ac3) set_opt_bg_pane_g2_copy1

0x6017,	// (0x000257bb) set_opt_bg_pane_g3_copy1

0x132f,	// (0x00020ad3) set_opt_bg_pane_g4_copy1

0x1337,	// (0x00020adb) set_opt_bg_pane_g5_copy1

0x133f,	// (0x00020ae3) set_opt_bg_pane_g6_copy1

0x601f,	// (0x000257c3) set_opt_bg_pane_g7_copy1

0x6027,	// (0x000257cb) set_opt_bg_pane_g8_copy1

0x602f,	// (0x000257d3) set_opt_bg_pane_g9_copy1

0x0607,	// (0x0001fdab) bg_set_opt_pane_cp_vc

0x6037,	// (0x000257db) setting_slider_pane_vc_t1

0x5fbe,	// (0x00025762) setting_slider_pane_vc_t2

0x5fcc,	// (0x00025770) setting_slider_pane_vc_t3

0x0002,

0xfa45,	// (0x0002f1e9) setting_slider_pane_vc_t

0x5fda,	// (0x0002577e) slider_set_pane_vc

0xcd5e,	// (0x0002c502) volume_set_pane_vc_g1

0xd018,	// (0x0002c7bc) volume_set_pane_vc_g2

0xd021,	// (0x0002c7c5) volume_set_pane_vc_g3

0xd02a,	// (0x0002c7ce) volume_set_pane_vc_g4

0xd033,	// (0x0002c7d7) volume_set_pane_vc_g5

0xd03c,	// (0x0002c7e0) volume_set_pane_vc_g6

0xd045,	// (0x0002c7e9) volume_set_pane_vc_g7

0xd04e,	// (0x0002c7f2) volume_set_pane_vc_g8

0xd057,	// (0x0002c7fb) volume_set_pane_vc_g9

0xd060,	// (0x0002c804) volume_set_pane_vc_g10

0x0009,

0xfa4c,	// (0x0002f1f0) volume_set_pane_vc_g

0x6046,	// (0x000257ea) volume_set_pane_vc

0x604e,	// (0x000257f2) button_value_adjust_pane_cp1_vc

0x6058,	// (0x000257fc) list_highlight_pane_cp2_vc

0x6061,	// (0x00025805) list_set_pane_vc_ParamLimits

0x6061,	// (0x00025805) list_set_pane_vc

0x60b3,	// (0x00025857) main_pane_set_vc_t1_ParamLimits

0x60b3,	// (0x00025857) main_pane_set_vc_t1

0x60c8,	// (0x0002586c) main_pane_set_vc_t2_ParamLimits

0x60c8,	// (0x0002586c) main_pane_set_vc_t2

0x60da,	// (0x0002587e) main_pane_set_vc_t3_ParamLimits

0x60da,	// (0x0002587e) main_pane_set_vc_t3

0x60ec,	// (0x00025890) main_pane_set_vc_t4_ParamLimits

0x60ec,	// (0x00025890) main_pane_set_vc_t4

0x0003,

0xfa61,	// (0x0002f205) main_pane_set_vc_t_ParamLimits

0xfa61,	// (0x0002f205) main_pane_set_vc_t

0x60fe,	// (0x000258a2) setting_code_pane_vc_ParamLimits

0x60fe,	// (0x000258a2) setting_code_pane_vc

0x610d,	// (0x000258b1) setting_slider_graphic_pane_vc

0x610d,	// (0x000258b1) setting_slider_pane_vc

0x610d,	// (0x000258b1) setting_text_pane_vc

0x610d,	// (0x000258b1) setting_volume_pane_vc

0x6115,	// (0x000258b9) scroll_pane_cp121_vc

0x12b3,	// (0x00020a57) set_content_pane_vc

0x6c5e,	// (0x00026402) button_value_adjust_pane_g1

0x6c67,	// (0x0002640b) button_value_adjust_pane_g2

0x0001,

0xfab4,	// (0x0002f258) button_value_adjust_pane_g

0x6c70,	// (0x00026414) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6c70,	// (0x00026414) form_field_slider_wide_pane_vc_t1

0x6c86,	// (0x0002642a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6c86,	// (0x0002642a) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab9,	// (0x0002f25d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab9,	// (0x0002f25d) form_field_slider_wide_pane_vc_t

0x0655,	// (0x0001fdf9) input_focus_pane_cp10_vc_ParamLimits

0x0655,	// (0x0001fdf9) input_focus_pane_cp10_vc

0x6c9b,	// (0x0002643f) slider_cont_pane_cp1_vc_ParamLimits

0x6c9b,	// (0x0002643f) slider_cont_pane_cp1_vc

0x5fe2,	// (0x00025786) slider_form_pane_g1_cp2

0x5feb,	// (0x0002578f) slider_form_pane_g2_cp2

0x6cb6,	// (0x0002645a) form_field_slider_pane_vc_t3

0x6cc4,	// (0x00026468) form_field_slider_pane_vc_t4

0x6cd2,	// (0x00026476) slider_form_pane_vc_ParamLimits

0x6cd2,	// (0x00026476) slider_form_pane_vc

0x6cdf,	// (0x00026483) form_field_slider_pane_vc_t1_ParamLimits

0x6cdf,	// (0x00026483) form_field_slider_pane_vc_t1

0x6cf5,	// (0x00026499) form_field_slider_pane_vc_t2_ParamLimits

0x6cf5,	// (0x00026499) form_field_slider_pane_vc_t2

0x0001,

0xfac9,	// (0x0002f26d) form_field_slider_pane_vc_t_ParamLimits

0xfac9,	// (0x0002f26d) form_field_slider_pane_vc_t

0x0655,	// (0x0001fdf9) input_focus_pane_cp9_vc_ParamLimits

0x0655,	// (0x0001fdf9) input_focus_pane_cp9_vc

0x6d07,	// (0x000264ab) slider_cont_pane_vc_ParamLimits

0x6d07,	// (0x000264ab) slider_cont_pane_vc

0x6d19,	// (0x000264bd) list_form_graphic_pane_cp_vc_ParamLimits

0x6d19,	// (0x000264bd) list_form_graphic_pane_cp_vc

0x4bca,	// (0x0002436e) form_field_popup_wide_pane_vc_g1

0x6d2e,	// (0x000264d2) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6d2e,	// (0x000264d2) form_field_popup_wide_pane_vc_t1

0x12c8,	// (0x00020a6c) input_focus_pane_cp8_vc_ParamLimits

0x12c8,	// (0x00020a6c) input_focus_pane_cp8_vc

0x6d43,	// (0x000264e7) list_form_wide_pane_vc_ParamLimits

0x6d43,	// (0x000264e7) list_form_wide_pane_vc

0x6d4f,	// (0x000264f3) list_form_graphic_pane_vc_g1

0x6d57,	// (0x000264fb) list_form_graphic_pane_vc_t1_ParamLimits

0x6d57,	// (0x000264fb) list_form_graphic_pane_vc_t1

0x066b,	// (0x0001fe0f) list_highlight_pane_cp5_vc_ParamLimits

0x066b,	// (0x0001fe0f) list_highlight_pane_cp5_vc

0x6d73,	// (0x00026517) list_form_graphic_pane_vc_ParamLimits

0x6d73,	// (0x00026517) list_form_graphic_pane_vc

0x4bca,	// (0x0002436e) form_field_popup_pane_vc_g1

0x6d89,	// (0x0002652d) form_field_popup_pane_vc_t1_ParamLimits

0x6d89,	// (0x0002652d) form_field_popup_pane_vc_t1

0x12c8,	// (0x00020a6c) input_focus_pane_cp7_vc_ParamLimits

0x12c8,	// (0x00020a6c) input_focus_pane_cp7_vc

0x6d9e,	// (0x00026542) list_form_pane_vc_ParamLimits

0x6d9e,	// (0x00026542) list_form_pane_vc

0x6daa,	// (0x0002654e) data_form_pane_vc_t1_ParamLimits

0x6daa,	// (0x0002654e) data_form_pane_vc_t1

0x1317,	// (0x00020abb) input_focus_pane_vc_g1

0x131f,	// (0x00020ac3) input_focus_pane_vc_g2

0x1327,	// (0x00020acb) input_focus_pane_vc_g3

0x132f,	// (0x00020ad3) input_focus_pane_vc_g4

0x1337,	// (0x00020adb) input_focus_pane_vc_g5

0x133f,	// (0x00020ae3) input_focus_pane_vc_g6

0x1347,	// (0x00020aeb) input_focus_pane_vc_g7

0x134f,	// (0x00020af3) input_focus_pane_vc_g8

0x1357,	// (0x00020afb) input_focus_pane_vc_g9

0x0585,	// (0x0001fd29) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0002ee79) input_focus_pane_vc_g

0x4bbe,	// (0x00024362) data_form_pane_vc_ParamLimits

0x4bbe,	// (0x00024362) data_form_pane_vc

0x4bca,	// (0x0002436e) form_field_data_pane_vc_g1

0x6dc5,	// (0x00026569) form_field_data_pane_vc_t1_ParamLimits

0x6dc5,	// (0x00026569) form_field_data_pane_vc_t1

0x12c8,	// (0x00020a6c) input_focus_pane_vc_ParamLimits

0x12c8,	// (0x00020a6c) input_focus_pane_vc

0x1827,	// (0x00020fcb) button_value_adjust_pane_cp3_vc

0x664f,	// (0x00025df3) button_value_adjust_pane_cp5_vc

0x6ddb,	// (0x0002657f) form_field_data_pane_vc_ParamLimits

0x6ddb,	// (0x0002657f) form_field_data_pane_vc

0x182f,	// (0x00020fd3) form_field_data_pane_vc_cp2

0x6df2,	// (0x00026596) form_field_data_wide_pane_vc_ParamLimits

0x6df2,	// (0x00026596) form_field_data_wide_pane_vc

0x6e08,	// (0x000265ac) form_field_data_wide_pane_vc_cp2

0x6e10,	// (0x000265b4) form_field_popup_pane_vc_ParamLimits

0x6e10,	// (0x000265b4) form_field_popup_pane_vc

0x6e27,	// (0x000265cb) form_field_popup_wide_pane_vc_ParamLimits

0x6e27,	// (0x000265cb) form_field_popup_wide_pane_vc

0x6e3d,	// (0x000265e1) form_field_slider_pane_vc_ParamLimits

0x6e3d,	// (0x000265e1) form_field_slider_pane_vc

0x6e50,	// (0x000265f4) form_field_slider_wide_pane_vc_ParamLimits

0x6e50,	// (0x000265f4) form_field_slider_wide_pane_vc

0x7e87,	// (0x0002762b) grid_touch_1_pane_ParamLimits

0x7e87,	// (0x0002762b) grid_touch_1_pane

0x7e93,	// (0x00027637) grid_touch_2_pane_ParamLimits

0x7e93,	// (0x00027637) grid_touch_2_pane

0x1e8d,	// (0x00021631) touch_pane_g1_ParamLimits

0x1e8d,	// (0x00021631) touch_pane_g1

0x6e63,	// (0x00026607) cell_app_pane_cp_wide_ParamLimits

0x6e63,	// (0x00026607) cell_app_pane_cp_wide

0x6e73,	// (0x00026617) grid_popup_fast_wide_pane_ParamLimits

0x6e73,	// (0x00026617) grid_popup_fast_wide_pane

0x6e87,	// (0x0002662b) scroll_pane_cp19_ParamLimits

0x6e87,	// (0x0002662b) scroll_pane_cp19

0x0607,	// (0x0001fdab) bg_popup_window_pane_cp20

0x6e9b,	// (0x0002663f) listscroll_popup_fast_wide_pane

0x066b,	// (0x0001fe0f) grid_indicator_nsta_pane

0x6ea3,	// (0x00026647) clock_nsta_pane_g1

0x6eac,	// (0x00026650) clock_nsta_pane_t1

0x7eab,	// (0x0002764f) cell_indicator_nsta_pane_ParamLimits

0x7eab,	// (0x0002764f) cell_indicator_nsta_pane

0x6ec8,	// (0x0002666c) cell_indicator_nsta_pane_g1

0x7ee3,	// (0x00027687) cell_indicator_nsta_pane_g2

0x0001,

0xfad3,	// (0x0002f277) cell_indicator_nsta_pane_g

0x6ed6,	// (0x0002667a) clock_nsta_pane_cp

0x6ede,	// (0x00026682) indicator_nsta_pane_cp

0x6ee7,	// (0x0002668b) nsta_clock_indic_pane_g1

0x06d3,	// (0x0001fe77) grid_indicator_pane

0x1769,	// (0x00020f0d) scroll_pane_cp29

0xc957,	// (0x0002c0fb) indicator_nsta_pane_cp2_ParamLimits

0xc957,	// (0x0002c0fb) indicator_nsta_pane_cp2

0x066b,	// (0x0001fe0f) main_apps_wheel_pane

0x4cde,	// (0x00024482) form_midp_field_text_pane_ParamLimits

0x4e0b,	// (0x000245af) scroll_bar_cp050_ParamLimits

0x6f1f,	// (0x000266c3) cell_indicator_pane_ParamLimits

0x6f1f,	// (0x000266c3) cell_indicator_pane

0x6f35,	// (0x000266d9) cell_indicator_pane_g1

0x7ef8,	// (0x0002769c) grid_wheel_folder_pane_ParamLimits

0x7ef8,	// (0x0002769c) grid_wheel_folder_pane

0x7f0a,	// (0x000276ae) list_wheel_apps_pane_ParamLimits

0x7f0a,	// (0x000276ae) list_wheel_apps_pane

0x7f19,	// (0x000276bd) main_apps_wheel_pane_g1_ParamLimits

0x7f19,	// (0x000276bd) main_apps_wheel_pane_g1

0x7f2d,	// (0x000276d1) main_apps_wheel_pane_g2_ParamLimits

0x7f2d,	// (0x000276d1) main_apps_wheel_pane_g2

0x0001,

0xfae2,	// (0x0002f286) main_apps_wheel_pane_g_ParamLimits

0xfae2,	// (0x0002f286) main_apps_wheel_pane_g

0x7f41,	// (0x000276e5) main_apps_wheel_pane_t1_ParamLimits

0x7f41,	// (0x000276e5) main_apps_wheel_pane_t1

0x7f60,	// (0x00027704) list_wheel_apps_pane_g1

0x7f68,	// (0x0002770c) list_wheel_apps_pane_g2

0x7f70,	// (0x00027714) list_wheel_apps_pane_g3

0x7f78,	// (0x0002771c) list_wheel_apps_pane_g4

0x7f80,	// (0x00027724) list_wheel_apps_pane_g5

0x0004,

0xfae7,	// (0x0002f28b) list_wheel_apps_pane_g

0x066b,	// (0x0001fe0f) navi_icon_text_pane

0x74ee,	// (0x00026c92) aid_fill_nsta

0x7f9f,	// (0x00027743) navi_icon_text_pane_g1

0x7fab,	// (0x0002774f) navi_icon_text_pane_t1

0x19fc,	// (0x000211a0) list_set_graphic_pane_t1_ParamLimits

0x19fc,	// (0x000211a0) list_set_graphic_pane_t1

0x54b4,	// (0x00024c58) popup_midp_note_alarm_window_t6_ParamLimits

0x54b4,	// (0x00024c58) popup_midp_note_alarm_window_t6

0x54c6,	// (0x00024c6a) popup_midp_note_alarm_window_t7_ParamLimits

0x54c6,	// (0x00024c6a) popup_midp_note_alarm_window_t7

0x54d8,	// (0x00024c7c) popup_midp_note_alarm_window_t8_ParamLimits

0x54d8,	// (0x00024c7c) popup_midp_note_alarm_window_t8

0x54ea,	// (0x00024c8e) popup_midp_note_alarm_window_t9_ParamLimits

0x54ea,	// (0x00024c8e) popup_midp_note_alarm_window_t9

0x54fc,	// (0x00024ca0) popup_midp_note_alarm_window_t10_ParamLimits

0x54fc,	// (0x00024ca0) popup_midp_note_alarm_window_t10

0x550e,	// (0x00024cb2) popup_midp_note_alarm_window_t11_ParamLimits

0x550e,	// (0x00024cb2) popup_midp_note_alarm_window_t11

0x5520,	// (0x00024cc4) scroll_pane_cp17_ParamLimits

0x5520,	// (0x00024cc4) scroll_pane_cp17

0xcd5e,	// (0x0002c502) volume_small_pane_cp_g1

0xd09c,	// (0x0002c840) volume_small_pane_cp_g2

0xd0a5,	// (0x0002c849) volume_small_pane_cp_g3

0xd0ae,	// (0x0002c852) volume_small_pane_cp_g4

0xcd8b,	// (0x0002c52f) volume_small_pane_cp_g5

0xd0b7,	// (0x0002c85b) volume_small_pane_cp_g6

0xd0c0,	// (0x0002c864) volume_small_pane_cp_g7

0xd0c9,	// (0x0002c86d) volume_small_pane_cp_g8

0xd0d2,	// (0x0002c876) volume_small_pane_cp_g9

0xd0db,	// (0x0002c87f) volume_small_pane_cp_g10

0x1cab,	// (0x0002144f) midp_ticker_pane_g1_ParamLimits

0x1cb7,	// (0x0002145b) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0002ef41) midp_ticker_pane_g_ParamLimits

0x1cc3,	// (0x00021467) midp_ticker_pane_t1_ParamLimits

0x74fe,	// (0x00026ca2) aid_fill_nsta_2

0x4df7,	// (0x0002459b) list_form2_midp_pane

0x5bc6,	// (0x0002536a) midp_editing_number_pane_ParamLimits

0x5bd2,	// (0x00025376) midp_ticker_pane_ParamLimits

0x7fbd,	// (0x00027761) form2_midp_field_pane

0x7fe1,	// (0x00027785) scroll_pane_cp51

0x8001,	// (0x000277a5) form2_midp_button_pane_ParamLimits

0x8001,	// (0x000277a5) form2_midp_button_pane

0x8013,	// (0x000277b7) form2_midp_content_pane_ParamLimits

0x8013,	// (0x000277b7) form2_midp_content_pane

0x802d,	// (0x000277d1) form2_midp_field_choice_group_pane

0x8035,	// (0x000277d9) form2_midp_field_pane_g1

0x803d,	// (0x000277e1) form2_midp_field_pane_g2

0x8045,	// (0x000277e9) form2_midp_field_pane_g3

0x804d,	// (0x000277f1) form2_midp_field_pane_g4

0x0003,

0xfb0c,	// (0x0002f2b0) form2_midp_field_pane_g

0x8055,	// (0x000277f9) form2_midp_gauge_slider_pane

0x805d,	// (0x00027801) form2_midp_gauge_wait_pane

0x8065,	// (0x00027809) form2_midp_image_pane_ParamLimits

0x8065,	// (0x00027809) form2_midp_image_pane

0x8080,	// (0x00027824) form2_midp_label_pane_ParamLimits

0x8080,	// (0x00027824) form2_midp_label_pane

0x8099,	// (0x0002783d) form2_midp_label_pane_cp_ParamLimits

0x8099,	// (0x0002783d) form2_midp_label_pane_cp

0x80b8,	// (0x0002785c) form2_midp_string_pane_ParamLimits

0x80b8,	// (0x0002785c) form2_midp_string_pane

0xc04c,	// (0x0002b7f0) form2_midp_text_pane_ParamLimits

0xc04c,	// (0x0002b7f0) form2_midp_text_pane

0x80ca,	// (0x0002786e) form2_midp_time_pane

0x80da,	// (0x0002787e) input_focus_pane_cp51_ParamLimits

0x80da,	// (0x0002787e) input_focus_pane_cp51

0x80f2,	// (0x00027896) form2_midp_label_pane_t1_ParamLimits

0x80f2,	// (0x00027896) form2_midp_label_pane_t1

0xc065,	// (0x0002b809) form2_mdip_text_pane_t1_ParamLimits

0xc065,	// (0x0002b809) form2_mdip_text_pane_t1

0xc080,	// (0x0002b824) form2_midp_time_pane_t1

0x813a,	// (0x000278de) form2_midp_gauge_slider_pane_t1

0x814c,	// (0x000278f0) form2_midp_gauge_slider_pane_t2

0x815e,	// (0x00027902) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb15,	// (0x0002f2b9) form2_midp_gauge_slider_pane_t

0x8170,	// (0x00027914) form2_midp_slider_pane

0x817c,	// (0x00027920) form2_midp_gauge_wait_pane_t1

0x818a,	// (0x0002792e) form2_midp_wait_pane_ParamLimits

0x818a,	// (0x0002792e) form2_midp_wait_pane

0x3182,	// (0x00022926) list_single_2graphic_pane_cp4_ParamLimits

0x3182,	// (0x00022926) list_single_2graphic_pane_cp4

0x79ff,	// (0x000271a3) list_single_midp_graphic_pane_cp_ParamLimits

0x79ff,	// (0x000271a3) list_single_midp_graphic_pane_cp

0x0607,	// (0x0001fdab) list_highlight_pane_cp20

0x81b5,	// (0x00027959) list_single_2graphic_pane_g1_cp4

0x5c47,	// (0x000253eb) list_single_2graphic_pane_g2_cp4

0x81bd,	// (0x00027961) list_single_2graphic_pane_t1_cp4

0x066b,	// (0x0001fe0f) list_highlight_pane_cp21

0x81cc,	// (0x00027970) list_single_midp_graphic_pane_g4_cp

0x81db,	// (0x0002797f) list_single_midp_graphic_pane_t1_cp

0x81f0,	// (0x00027994) form2_mdip_string_pane_t1_ParamLimits

0x81f0,	// (0x00027994) form2_mdip_string_pane_t1

0x0607,	// (0x0001fdab) bg_wml_button_pane_cp2

0x0585,	// (0x0001fd29) form2_midp_image_pane_g1

0xc6bb,	// (0x0002be5f) list_double_large_graphic_pane_g5_ParamLimits

0xc6bb,	// (0x0002be5f) list_double_large_graphic_pane_g5

0x341f,	// (0x00022bc3) midp_form_pane_ParamLimits

0x066b,	// (0x0001fe0f) main_apps_wheel_pane_ParamLimits

0x7390,	// (0x00026b34) popup_preview_window_ParamLimits

0x7390,	// (0x00026b34) popup_preview_window

0x489a,	// (0x0002403e) popup_touch_info_window_ParamLimits

0x489a,	// (0x0002403e) popup_touch_info_window

0x48b8,	// (0x0002405c) popup_touch_menu_window_ParamLimits

0x48b8,	// (0x0002405c) popup_touch_menu_window

0x057b,	// (0x0001fd1f) bg_popup_sub_pane_cp6

0x8268,	// (0x00027a0c) list_touch_menu_pane

0x8270,	// (0x00027a14) list_single_touch_menu_pane_ParamLimits

0x8270,	// (0x00027a14) list_single_touch_menu_pane

0x8287,	// (0x00027a2b) list_single_touch_menu_pane_t1

0x066b,	// (0x0001fe0f) bg_popup_sub_pane_cp7_ParamLimits

0x066b,	// (0x0001fe0f) bg_popup_sub_pane_cp7

0x8295,	// (0x00027a39) heading_sub_pane

0x829d,	// (0x00027a41) list_touch_info_pane_ParamLimits

0x829d,	// (0x00027a41) list_touch_info_pane

0x82ac,	// (0x00027a50) list_single_touch_info_pane_ParamLimits

0x82ac,	// (0x00027a50) list_single_touch_info_pane

0x82bd,	// (0x00027a61) list_single_touch_info_pane_t1

0x82cb,	// (0x00027a6f) list_single_touch_info_pane_t2

0x0001,

0xfb23,	// (0x0002f2c7) list_single_touch_info_pane_t

0x1c81,	// (0x00021425) bg_popup_heading_pane_cp

0x82d9,	// (0x00027a7d) heading_sub_pane_t1

0x4b84,	// (0x00024328) bg_popup_preview_window_pane_cp_ParamLimits

0x4b84,	// (0x00024328) bg_popup_preview_window_pane_cp

0x8295,	// (0x00027a39) heading_preview_pane

0x829d,	// (0x00027a41) list_preview_pane_ParamLimits

0x829d,	// (0x00027a41) list_preview_pane

0x82e7,	// (0x00027a8b) popup_preview_window_g1

0x82ac,	// (0x00027a50) list_single_preview_pane_ParamLimits

0x82ac,	// (0x00027a50) list_single_preview_pane

0x82ef,	// (0x00027a93) list_single_preview_pane_g1

0x82f7,	// (0x00027a9b) list_single_preview_pane_t1

0x82bd,	// (0x00027a61) list_single_preview_pane_t2

0x0001,

0xfb28,	// (0x0002f2cc) list_single_preview_pane_t

0x8305,	// (0x00027aa9) bg_popup_heading_pane_cp2_ParamLimits

0x8305,	// (0x00027aa9) bg_popup_heading_pane_cp2

0x831b,	// (0x00027abf) heading_preview_pane_g1

0x8323,	// (0x00027ac7) heading_preview_pane_t1_ParamLimits

0x8323,	// (0x00027ac7) heading_preview_pane_t1

0x06ea,	// (0x0001fe8e) soft_indicator_pane_t1_ParamLimits

0x0b8e,	// (0x00020332) scroll_pane_ParamLimits

0x1665,	// (0x00020e09) scroll_sc2_left_pane

0x166e,	// (0x00020e12) scroll_sc2_right_pane

0x168d,	// (0x00020e31) scroll_bg_pane_g1_ParamLimits

0x16a2,	// (0x00020e46) scroll_bg_pane_g2_ParamLimits

0x16ba,	// (0x00020e5e) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0002eed0) scroll_bg_pane_g_ParamLimits

0x168d,	// (0x00020e31) scroll_handle_pane_g1_ParamLimits

0x16dc,	// (0x00020e80) scroll_handle_pane_g2_ParamLimits

0x16ba,	// (0x00020e5e) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0002eed7) scroll_handle_pane_g_ParamLimits

0x47f2,	// (0x00023f96) popup_choice_list_window_ParamLimits

0x47f2,	// (0x00023f96) popup_choice_list_window

0x49ec,	// (0x00024190) choice_list_pane

0x4a62,	// (0x00024206) cell_toolbar_pane_t1

0x4a8a,	// (0x0002422e) toolbar_button_pane_ParamLimits

0x5927,	// (0x000250cb) ai_gene_pane_1_t2_ParamLimits

0x5927,	// (0x000250cb) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0002f0ef) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0002f0ef) ai_gene_pane_1_t

0x8340,	// (0x00027ae4) scroll_sc2_left_pane_g1

0x8340,	// (0x00027ae4) scroll_sc2_right_pane_g1

0x47d8,	// (0x00023f7c) bg_popup_sub_pane_cp10

0x834a,	// (0x00027aee) list_choice_list_pane

0x8361,	// (0x00027b05) list_single_choice_list_pane_ParamLimits

0x8361,	// (0x00027b05) list_single_choice_list_pane

0x8375,	// (0x00027b19) list_single_choice_list_pane_g1

0x142f,	// (0x00020bd3) list_single_choice_list_pane_t1_ParamLimits

0x142f,	// (0x00020bd3) list_single_choice_list_pane_t1

0x837d,	// (0x00027b21) choice_list_pane_g1

0x8385,	// (0x00027b29) choice_list_pane_t1

0x057b,	// (0x0001fd1f) input_focus_pane_cp11

0x15ba,	// (0x00020d5e) title_pane_stacon_g2_ParamLimits

0x15ba,	// (0x00020d5e) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0002eeb6) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0002eeb6) title_pane_stacon_g

0x1c81,	// (0x00021425) cursor_press_pane

0x71dd,	// (0x00026981) popup_fep_hwr_window_ParamLimits

0x71dd,	// (0x00026981) popup_fep_hwr_window

0x4844,	// (0x00023fe8) popup_fep_vkb_window_ParamLimits

0x4844,	// (0x00023fe8) popup_fep_vkb_window

0x8393,	// (0x00027b37) cursor_press_pane_g1

0x0002,

0xfb51,	// (0x0002f2f5) fep_vkb_side_pane_g_ParamLimits

0xd10b,	// (0x0002c8af) fep_hwr_candidate_pane_ParamLimits

0xd10b,	// (0x0002c8af) fep_hwr_candidate_pane

0xd133,	// (0x0002c8d7) fep_hwr_side_pane_ParamLimits

0xd133,	// (0x0002c8d7) fep_hwr_side_pane

0xd153,	// (0x0002c8f7) fep_hwr_top_pane_ParamLimits

0xd153,	// (0x0002c8f7) fep_hwr_top_pane

0xd16b,	// (0x0002c90f) fep_hwr_write_pane_ParamLimits

0xd16b,	// (0x0002c90f) fep_hwr_write_pane

0xfb51,	// (0x0002f2f5) fep_vkb_side_pane_g

0x83ad,	// (0x00027b51) fep_hwr_top_pane_g1

0x839b,	// (0x00027b3f) fep_hwr_top_pane_g2

0xd197,	// (0x0002c93b) fep_hwr_top_pane_g3

0x0002,

0xfb2d,	// (0x0002f2d1) fep_hwr_top_pane_g

0xd1ac,	// (0x0002c950) fep_hwr_top_text_pane

0x17d6,	// (0x00020f7a) fep_hwr_top_text_pane_g1

0x83e3,	// (0x00027b87) fep_hwr_top_text_pane_t1

0xd29a,	// (0x0002ca3e) fep_hwr_candidate_pane_g1

0x8601,	// (0x00027da5) fep_vkb_keypad_pane_g3_ParamLimits

0x8601,	// (0x00027da5) fep_vkb_keypad_pane_g3

0x8623,	// (0x00027dc7) fep_vkb_keypad_pane_g4_ParamLimits

0x8623,	// (0x00027dc7) fep_vkb_keypad_pane_g4

0x8692,	// (0x00027e36) fep_vkb_bottom_pane_g2_ParamLimits

0x8692,	// (0x00027e36) fep_vkb_bottom_pane_g2

0x0001,

0xfb58,	// (0x0002f2fc) fep_vkb_bottom_pane_g_ParamLimits

0xfb58,	// (0x0002f2fc) fep_vkb_bottom_pane_g

0x8340,	// (0x00027ae4) cell_vkb_side_pane_g2

0x0001,

0xfb62,	// (0x0002f306) cell_vkb_side_pane_g

0x871d,	// (0x00027ec1) cell_vkb_side_pane_t1

0x872b,	// (0x00027ecf) cell_vkb_side_pane_t1_copy1

0x8340,	// (0x00027ae4) bg_fep_vkb_candidate_pane_g2

0x884f,	// (0x00027ff3) cell_vkb_candidate_pane_ParamLimits

0x83f1,	// (0x00027b95) aid_size_cell_vkb_ParamLimits

0x83f1,	// (0x00027b95) aid_size_cell_vkb

0x884f,	// (0x00027ff3) cell_vkb_candidate_pane

0xd2b4,	// (0x0002ca58) bg_popup_fep_shadow_pane_g1

0x8467,	// (0x00027c0b) fep_vkb_bottom_pane_ParamLimits

0x8467,	// (0x00027c0b) fep_vkb_bottom_pane

0x84b2,	// (0x00027c56) fep_vkb_candidate_pane_ParamLimits

0x84b2,	// (0x00027c56) fep_vkb_candidate_pane

0x84ce,	// (0x00027c72) fep_vkb_keypad_pane_ParamLimits

0x84ce,	// (0x00027c72) fep_vkb_keypad_pane

0x8502,	// (0x00027ca6) fep_vkb_side_pane_ParamLimits

0x8502,	// (0x00027ca6) fep_vkb_side_pane

0x852e,	// (0x00027cd2) fep_vkb_top_pane_ParamLimits

0x852e,	// (0x00027cd2) fep_vkb_top_pane

0x855a,	// (0x00027cfe) fep_vkb_top_pane_g1_ParamLimits

0x855a,	// (0x00027cfe) fep_vkb_top_pane_g1

0x8569,	// (0x00027d0d) fep_vkb_top_pane_g2_ParamLimits

0x8569,	// (0x00027d0d) fep_vkb_top_pane_g2

0x8578,	// (0x00027d1c) fep_vkb_top_pane_g3_ParamLimits

0x8578,	// (0x00027d1c) fep_vkb_top_pane_g3

0x0003,

0xfb48,	// (0x0002f2ec) fep_vkb_top_pane_g_ParamLimits

0xfb48,	// (0x0002f2ec) fep_vkb_top_pane_g

0x8596,	// (0x00027d3a) fep_vkb_top_text_pane_ParamLimits

0x8596,	// (0x00027d3a) fep_vkb_top_text_pane

0x85a7,	// (0x00027d4b) fep_vkb_side_pane_g1_ParamLimits

0x85a7,	// (0x00027d4b) fep_vkb_side_pane_g1

0x85f0,	// (0x00027d94) grid_vkb_side_pane_ParamLimits

0x85f0,	// (0x00027d94) grid_vkb_side_pane

0xd2bc,	// (0x0002ca60) bg_popup_fep_shadow_pane_g2

0xd2c5,	// (0x0002ca69) bg_popup_fep_shadow_pane_g3

0xd2cd,	// (0x0002ca71) bg_popup_fep_shadow_pane_g4

0xd2d6,	// (0x0002ca7a) bg_popup_fep_shadow_pane_g5

0xd2de,	// (0x0002ca82) bg_popup_fep_shadow_pane_g6

0xd2e6,	// (0x0002ca8a) bg_popup_fep_shadow_pane_g7

0x1337,	// (0x00020adb) bg_popup_fep_shadow_pane_g8

0x8641,	// (0x00027de5) grid_vkb_keypad_number_pane_ParamLimits

0x8641,	// (0x00027de5) grid_vkb_keypad_number_pane

0x8651,	// (0x00027df5) grid_vkb_keypad_pane_ParamLimits

0x8651,	// (0x00027df5) grid_vkb_keypad_pane

0x8677,	// (0x00027e1b) fep_vkb_bottom_pane_g1_ParamLimits

0x8677,	// (0x00027e1b) fep_vkb_bottom_pane_g1

0x86a0,	// (0x00027e44) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x86a0,	// (0x00027e44) grid_vkb_keypad_bottom_left_pane

0x86b5,	// (0x00027e59) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x86b5,	// (0x00027e59) grid_vkb_keypad_bottom_right_pane

0x86ca,	// (0x00027e6e) fep_vkb_top_text_pane_g1

0x86e5,	// (0x00027e89) fep_vkb_top_text_pane_t1

0x86fa,	// (0x00027e9e) cell_vkb_side_pane_ParamLimits

0x86fa,	// (0x00027e9e) cell_vkb_side_pane

0x8340,	// (0x00027ae4) cell_vkb_side_pane_g1

0x8739,	// (0x00027edd) cell_vkb_keypad_pane_ParamLimits

0x8739,	// (0x00027edd) cell_vkb_keypad_pane

0x87a6,	// (0x00027f4a) cell_vkb_keypad_pane_g1

0x0008,

0xfb75,	// (0x0002f319) bg_popup_fep_shadow_pane_g

0x8340,	// (0x00027ae4) cell_hwr_side_pane_g1

0x8340,	// (0x00027ae4) cell_hwr_side_pane_g2

0x87b0,	// (0x00027f54) cell_vkb_keypad_pane_t1

0x87be,	// (0x00027f62) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x87be,	// (0x00027f62) cell_vkb_keypad_bottom_left_pane

0x87db,	// (0x00027f7f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x87db,	// (0x00027f7f) cell_vkb_keypad_bottom_right_pane

0x8340,	// (0x00027ae4) cell_vkb_keypad_bottom_left_pane_g1

0x8340,	// (0x00027ae4) cell_vkb_keypad_bottom_right_pane_g1

0x8814,	// (0x00027fb8) cell_vkb_keypad_number_pane_ParamLimits

0x8814,	// (0x00027fb8) cell_vkb_keypad_number_pane

0x8833,	// (0x00027fd7) cell_vkb_keypad_number_pane_g1

0x883d,	// (0x00027fe1) cell_vkb_keypad_number_pane_g2

0x8846,	// (0x00027fea) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb67,	// (0x0002f30b) cell_vkb_keypad_number_pane_g

0x87b0,	// (0x00027f54) cell_vkb_keypad_number_pane_t1

0x8868,	// (0x0002800c) fep_vkb_candidate_pane_g1

0x0001,

0xfb62,	// (0x0002f306) cell_hwr_side_pane_g

0x8881,	// (0x00028025) cell_hwr_side_pane_t1

0xd2f6,	// (0x0002ca9a) cell_hwr_side_pane_t1_copy1

0x8588,	// (0x00027d2c) cell_hwr_candidate_pane_g1

0xd304,	// (0x0002caa8) cell_hwr_candidate_pane_t1

0x8340,	// (0x00027ae4) cell_vkb_candidate_pane_g2

0x8907,	// (0x000280ab) cell_vkb_candidate_pane_t1

0x8493,	// (0x00027c37) bg_popup_fep_shadow_pane_ParamLimits

0x8493,	// (0x00027c37) bg_popup_fep_shadow_pane

0xa335,	// (0x00029ad9) bg_fep_hwr_top_pane_g4

0x83bf,	// (0x00027b63) bg_hwr_side_pane_g1_ParamLimits

0x83bf,	// (0x00027b63) bg_hwr_side_pane_g1

0xd1e8,	// (0x0002c98c) cell_hwr_side_pane_ParamLimits

0xd1e8,	// (0x0002c98c) cell_hwr_side_pane

0xd223,	// (0x0002c9c7) fep_hwr_write_pane_g1_ParamLimits

0xd223,	// (0x0002c9c7) fep_hwr_write_pane_g1

0xd230,	// (0x0002c9d4) fep_hwr_write_pane_g2_ParamLimits

0xd230,	// (0x0002c9d4) fep_hwr_write_pane_g2

0xd23d,	// (0x0002c9e1) fep_hwr_write_pane_g3_ParamLimits

0xd23d,	// (0x0002c9e1) fep_hwr_write_pane_g3

0xd24b,	// (0x0002c9ef) fep_hwr_write_pane_g4_ParamLimits

0xd24b,	// (0x0002c9ef) fep_hwr_write_pane_g4

0x0005,

0xfb34,	// (0x0002f2d8) fep_hwr_write_pane_g_ParamLimits

0xfb34,	// (0x0002f2d8) fep_hwr_write_pane_g

0xa335,	// (0x00029ad9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xa335,	// (0x00029ad9) bg_fep_hwr_candidate_pane_g2

0xd260,	// (0x0002ca04) cell_hwr_candidate_pane_ParamLimits

0xd260,	// (0x0002ca04) cell_hwr_candidate_pane

0xd29a,	// (0x0002ca3e) fep_hwr_candidate_pane_g1_ParamLimits

0x841f,	// (0x00027bc3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x841f,	// (0x00027bc3) bg_popup_fep_shadow_pane_cp2

0x8588,	// (0x00027d2c) fep_vkb_top_pane_g4_ParamLimits

0x8588,	// (0x00027d2c) fep_vkb_top_pane_g4

0x85ce,	// (0x00027d72) fep_vkb_side_pane_g2_ParamLimits

0x85ce,	// (0x00027d72) fep_vkb_side_pane_g2

0xb9d7,	// (0x0002b17b) list_setting_pane_t4_ParamLimits

0xb9d7,	// (0x0002b17b) list_setting_pane_t4

0xba6d,	// (0x0002b211) list_setting_number_pane_t5_ParamLimits

0xba6d,	// (0x0002b211) list_setting_number_pane_t5

0x3172,	// (0x00022916) list_double_heading_pane_cp2_ParamLimits

0x3172,	// (0x00022916) list_double_heading_pane_cp2

0x1af6,	// (0x0002129a) list_double_heading_pane_g1_cp2_ParamLimits

0x1af6,	// (0x0002129a) list_double_heading_pane_g1_cp2

0x8915,	// (0x000280b9) list_double_heading_pane_g2_cp2_ParamLimits

0x8915,	// (0x000280b9) list_double_heading_pane_g2_cp2

0x8929,	// (0x000280cd) list_double_heading_pane_t1_cp2_ParamLimits

0x8929,	// (0x000280cd) list_double_heading_pane_t1_cp2

0x893f,	// (0x000280e3) list_double_heading_pane_t2_cp2_ParamLimits

0x893f,	// (0x000280e3) list_double_heading_pane_t2_cp2

0x0573,	// (0x0001fd17) aid_value_unit2

0xc4d5,	// (0x0002bc79) popup_preview_fixed_window

0x07ca,	// (0x0001ff6e) bg_popup_preview_window_pane_cp02

0x8951,	// (0x000280f5) list_preview_fixed_pane

0x8997,	// (0x0002813b) list_empty_pane_fp_ParamLimits

0x8997,	// (0x0002813b) list_empty_pane_fp

0x8997,	// (0x0002813b) list_single_cale_day_pane_fp_ParamLimits

0x8997,	// (0x0002813b) list_single_cale_day_pane_fp

0x8997,	// (0x0002813b) list_single_graphic_heading_pane_fp_ParamLimits

0x8997,	// (0x0002813b) list_single_graphic_heading_pane_fp

0x8997,	// (0x0002813b) list_single_graphic_pane_fp_ParamLimits

0x8997,	// (0x0002813b) list_single_graphic_pane_fp

0x8997,	// (0x0002813b) list_single_heading_pane_fp_ParamLimits

0x8997,	// (0x0002813b) list_single_heading_pane_fp

0x8997,	// (0x0002813b) list_single_pane_fp_ParamLimits

0x8997,	// (0x0002813b) list_single_pane_fp

0x89ab,	// (0x0002814f) list_single_pane_fp_g1_ParamLimits

0x89ab,	// (0x0002814f) list_single_pane_fp_g1

0xc670,	// (0x0002be14) list_single_pane_fp_g2_ParamLimits

0xc670,	// (0x0002be14) list_single_pane_fp_g2

0xd321,	// (0x0002cac5) list_single_pane_fp_g3_ParamLimits

0xd321,	// (0x0002cac5) list_single_pane_fp_g3

0x89b7,	// (0x0002815b) list_single_pane_fp_g4_ParamLimits

0x89b7,	// (0x0002815b) list_single_pane_fp_g4

0x0003,

0xfb96,	// (0x0002f33a) list_single_pane_fp_g_ParamLimits

0xfb96,	// (0x0002f33a) list_single_pane_fp_g

0xc093,	// (0x0002b837) list_single_pane_fp_t1_ParamLimits

0xc093,	// (0x0002b837) list_single_pane_fp_t1

0xc0aa,	// (0x0002b84e) list_single_graphic_pane_fp_g1_ParamLimits

0xc0aa,	// (0x0002b84e) list_single_graphic_pane_fp_g1

0x89ab,	// (0x0002814f) list_single_graphic_pane_fp_g2_ParamLimits

0x89ab,	// (0x0002814f) list_single_graphic_pane_fp_g2

0xc670,	// (0x0002be14) list_single_graphic_pane_fp_g3_ParamLimits

0xc670,	// (0x0002be14) list_single_graphic_pane_fp_g3

0xd321,	// (0x0002cac5) list_single_graphic_pane_fp_g4_ParamLimits

0xd321,	// (0x0002cac5) list_single_graphic_pane_fp_g4

0x89b7,	// (0x0002815b) list_single_graphic_pane_fp_g5_ParamLimits

0x89b7,	// (0x0002815b) list_single_graphic_pane_fp_g5

0x0004,

0xfb9f,	// (0x0002f343) list_single_graphic_pane_fp_g_ParamLimits

0xfb9f,	// (0x0002f343) list_single_graphic_pane_fp_g

0xc0b6,	// (0x0002b85a) list_single_graphic_pane_fp_t1_ParamLimits

0xc0b6,	// (0x0002b85a) list_single_graphic_pane_fp_t1

0xc0aa,	// (0x0002b84e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc0aa,	// (0x0002b84e) list_single_graphic_heading_pane_fp_g1

0x89ab,	// (0x0002814f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x89ab,	// (0x0002814f) list_single_graphic_heading_pane_fp_g2

0xc670,	// (0x0002be14) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc670,	// (0x0002be14) list_single_graphic_heading_pane_fp_g3

0xd321,	// (0x0002cac5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd321,	// (0x0002cac5) list_single_graphic_heading_pane_fp_g4

0x89b7,	// (0x0002815b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x89b7,	// (0x0002815b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9f,	// (0x0002f343) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9f,	// (0x0002f343) list_single_graphic_heading_pane_fp_g

0xc0cc,	// (0x0002b870) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc0cc,	// (0x0002b870) list_single_graphic_heading_pane_fp_t1

0xc0e2,	// (0x0002b886) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc0e2,	// (0x0002b886) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbaa,	// (0x0002f34e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbaa,	// (0x0002f34e) list_single_graphic_heading_pane_fp_t

0xc0f4,	// (0x0002b898) list_single_cale_day_pane_fp_g1_ParamLimits

0xc0f4,	// (0x0002b898) list_single_cale_day_pane_fp_g1

0x89c3,	// (0x00028167) list_single_cale_day_pane_fp_g2_ParamLimits

0x89c3,	// (0x00028167) list_single_cale_day_pane_fp_g2

0xd335,	// (0x0002cad9) list_single_cale_day_pane_fp_g3_ParamLimits

0xd335,	// (0x0002cad9) list_single_cale_day_pane_fp_g3

0xd35d,	// (0x0002cb01) list_single_cale_day_pane_fp_g4_ParamLimits

0xd35d,	// (0x0002cb01) list_single_cale_day_pane_fp_g4

0xd381,	// (0x0002cb25) list_single_cale_day_pane_fp_g5_ParamLimits

0xd381,	// (0x0002cb25) list_single_cale_day_pane_fp_g5

0x0004,

0xfbaf,	// (0x0002f353) list_single_cale_day_pane_fp_g_ParamLimits

0xfbaf,	// (0x0002f353) list_single_cale_day_pane_fp_g

0xc12c,	// (0x0002b8d0) list_single_cale_day_pane_fp_t1_ParamLimits

0xc12c,	// (0x0002b8d0) list_single_cale_day_pane_fp_t1

0xc152,	// (0x0002b8f6) list_single_cale_day_pane_fp_t2_ParamLimits

0xc152,	// (0x0002b8f6) list_single_cale_day_pane_fp_t2

0xc16b,	// (0x0002b90f) list_single_cale_day_pane_fp_t3_ParamLimits

0xc16b,	// (0x0002b90f) list_single_cale_day_pane_fp_t3

0x0002,

0xfbba,	// (0x0002f35e) list_single_cale_day_pane_fp_t_ParamLimits

0xfbba,	// (0x0002f35e) list_single_cale_day_pane_fp_t

0x89ab,	// (0x0002814f) list_empty_pane_fp_g1_ParamLimits

0x89ab,	// (0x0002814f) list_empty_pane_fp_g1

0xc184,	// (0x0002b928) list_empty_pane_fp_t1

0xc192,	// (0x0002b936) list_empty_pane_fp_t2

0x0001,

0xfbc1,	// (0x0002f365) list_empty_pane_fp_t

0x89ab,	// (0x0002814f) list_single_heading_pane_fp_g1_ParamLimits

0x89ab,	// (0x0002814f) list_single_heading_pane_fp_g1

0xc670,	// (0x0002be14) list_single_heading_pane_fp_g2_ParamLimits

0xc670,	// (0x0002be14) list_single_heading_pane_fp_g2

0xd321,	// (0x0002cac5) list_single_heading_pane_fp_g3_ParamLimits

0xd321,	// (0x0002cac5) list_single_heading_pane_fp_g3

0x0002,

0xfbc6,	// (0x0002f36a) list_single_heading_pane_fp_g_ParamLimits

0xfbc6,	// (0x0002f36a) list_single_heading_pane_fp_g

0xc1a0,	// (0x0002b944) list_single_heading_pane_fp_t1_ParamLimits

0xc1a0,	// (0x0002b944) list_single_heading_pane_fp_t1

0xc1b2,	// (0x0002b956) list_single_heading_pane_fp_t2_ParamLimits

0xc1b2,	// (0x0002b956) list_single_heading_pane_fp_t2

0x0001,

0xfbcd,	// (0x0002f371) list_single_heading_pane_fp_t_ParamLimits

0xfbcd,	// (0x0002f371) list_single_heading_pane_fp_t

0x1444,	// (0x00020be8) aid_size_cell_fast

0x07ad,	// (0x0001ff51) soft_indicator_pane_cp1_t1

0x1481,	// (0x00020c25) cell_app_pane_cp2_ParamLimits

0x1481,	// (0x00020c25) cell_app_pane_cp2

0xd0f8,	// (0x0002c89c) fep_hwr_candidate_drop_down_list_pane

0xa653,	// (0x00029df7) fep_hwr_candidate_pane_g3_ParamLimits

0xa653,	// (0x00029df7) fep_hwr_candidate_pane_g3

0xa660,	// (0x00029e04) fep_hwr_candidate_pane_g4_ParamLimits

0xa660,	// (0x00029e04) fep_hwr_candidate_pane_g4

0x0002,

0xfb41,	// (0x0002f2e5) fep_hwr_candidate_pane_g_ParamLimits

0xfb41,	// (0x0002f2e5) fep_hwr_candidate_pane_g

0x84a1,	// (0x00027c45) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x84a1,	// (0x00027c45) fep_vkb_candidate_drop_down_list_pane

0x8870,	// (0x00028014) fep_vkb_candidate_pane_g3

0x8878,	// (0x0002801c) fep_vkb_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0002f312) fep_vkb_candidate_pane_g

0x8588,	// (0x00027d2c) cell_hwr_candidate_pane_g1_ParamLimits

0x88aa,	// (0x0002804e) cell_hwr_candidate_pane_g3_ParamLimits

0x88aa,	// (0x0002804e) cell_hwr_candidate_pane_g3

0x88cb,	// (0x0002806f) cell_hwr_candidate_pane_g4_ParamLimits

0x88cb,	// (0x0002806f) cell_hwr_candidate_pane_g4

0x0002,

0xfb88,	// (0x0002f32c) cell_hwr_candidate_pane_g_ParamLimits

0xfb88,	// (0x0002f32c) cell_hwr_candidate_pane_g

0x888f,	// (0x00028033) cell_vkb_candidate_pane_g3_ParamLimits

0x888f,	// (0x00028033) cell_vkb_candidate_pane_g3

0x88ec,	// (0x00028090) cell_vkb_candidate_pane_g4_ParamLimits

0x88ec,	// (0x00028090) cell_vkb_candidate_pane_g4

0x89cf,	// (0x00028173) cell_app_pane_cp2_g1_ParamLimits

0x89cf,	// (0x00028173) cell_app_pane_cp2_g1

0x89ed,	// (0x00028191) cell_app_pane_cp2_g2_ParamLimits

0x89ed,	// (0x00028191) cell_app_pane_cp2_g2

0x0001,

0xfbd2,	// (0x0002f376) cell_app_pane_cp2_g_ParamLimits

0xfbd2,	// (0x0002f376) cell_app_pane_cp2_g

0x89f9,	// (0x0002819d) cell_app_pane_cp2_t1_ParamLimits

0x89f9,	// (0x0002819d) cell_app_pane_cp2_t1

0x12c8,	// (0x00020a6c) grid_highlight_pane_cp1_ParamLimits

0x12c8,	// (0x00020a6c) grid_highlight_pane_cp1

0xd3a5,	// (0x0002cb49) cell_hwr_candidate_pane_cp1_ParamLimits

0xd3a5,	// (0x0002cb49) cell_hwr_candidate_pane_cp1

0x8588,	// (0x00027d2c) fep_hwr_candidate_drop_down_list_pane_g1

0x8a0b,	// (0x000281af) fep_hwr_candidate_drop_down_list_pane_g2

0x8a18,	// (0x000281bc) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0002f37b) fep_hwr_candidate_drop_down_list_pane_g

0xd3c3,	// (0x0002cb67) fep_hwr_candidate_drop_down_list_scroll_pane

0xd3cc,	// (0x0002cb70) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd3cc,	// (0x0002cb70) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xd3d9,	// (0x0002cb7d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd3d9,	// (0x0002cb7d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xd3e6,	// (0x0002cb8a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd3e6,	// (0x0002cb8a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x888f,	// (0x00028033) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x888f,	// (0x00028033) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x88ec,	// (0x00028090) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x88ec,	// (0x00028090) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xd3f3,	// (0x0002cb97) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd3f3,	// (0x0002cb97) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xd40e,	// (0x0002cbb2) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd40e,	// (0x0002cbb2) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xd429,	// (0x0002cbcd) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd429,	// (0x0002cbcd) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0002f382) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0002f382) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8a25,	// (0x000281c9) cell_vkb_candidate_pane_cp1_ParamLimits

0x8a25,	// (0x000281c9) cell_vkb_candidate_pane_cp1

0x8588,	// (0x00027d2c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x8588,	// (0x00027d2c) fep_vkb_candidate_drop_down_list_pane_g1

0x8a0b,	// (0x000281af) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8a0b,	// (0x000281af) fep_vkb_candidate_drop_down_list_pane_g2

0x8a18,	// (0x000281bc) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8a18,	// (0x000281bc) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0002f37b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd7,	// (0x0002f37b) fep_vkb_candidate_drop_down_list_pane_g

0x8a48,	// (0x000281ec) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8a48,	// (0x000281ec) fep_vkb_candidate_drop_down_list_scroll_pane

0x8a55,	// (0x000281f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8a55,	// (0x000281f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8a62,	// (0x00028206) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8a62,	// (0x00028206) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8a6e,	// (0x00028212) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8a6e,	// (0x00028212) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x88aa,	// (0x0002804e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x88aa,	// (0x0002804e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x88cb,	// (0x0002806f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x88cb,	// (0x0002806f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8a7a,	// (0x0002821e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8a7a,	// (0x0002821e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8a9b,	// (0x0002823f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8a9b,	// (0x0002823f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8abc,	// (0x00028260) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8abc,	// (0x00028260) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x0002f393) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x0002f393) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x2b7a,	// (0x0002231e) title_pane_g1_ParamLimits

0x2b87,	// (0x0002232b) title_pane_g2_ParamLimits

0xf592,	// (0x0002ed36) title_pane_g_ParamLimits

0x17c6,	// (0x00020f6a) aid_call2_pane

0x17ce,	// (0x00020f72) aid_call_pane

0x17d6,	// (0x00020f7a) popup_clock_analogue_window_g1

0x17d6,	// (0x00020f7a) popup_clock_analogue_window_g2

0xc851,	// (0x0002bff5) popup_clock_analogue_window_g3

0xc85a,	// (0x0002bffe) popup_clock_analogue_window_g4

0x0585,	// (0x0001fd29) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0002eee5) popup_clock_analogue_window_g

0xc862,	// (0x0002c006) popup_clock_analogue_window_t1

0xc870,	// (0x0002c014) clock_digital_number_pane_ParamLimits

0xc870,	// (0x0002c014) clock_digital_number_pane

0xc87c,	// (0x0002c020) clock_digital_number_pane_cp02_ParamLimits

0xc87c,	// (0x0002c020) clock_digital_number_pane_cp02

0xc888,	// (0x0002c02c) clock_digital_number_pane_cp03_ParamLimits

0xc888,	// (0x0002c02c) clock_digital_number_pane_cp03

0xc894,	// (0x0002c038) clock_digital_number_pane_cp04_ParamLimits

0xc894,	// (0x0002c038) clock_digital_number_pane_cp04

0xc8a0,	// (0x0002c044) clock_digital_separator_pane_ParamLimits

0xc8a0,	// (0x0002c044) clock_digital_separator_pane

0xc8ac,	// (0x0002c050) popup_clock_digital_window_t1_ParamLimits

0xc8ac,	// (0x0002c050) popup_clock_digital_window_t1

0x0585,	// (0x0001fd29) clock_digital_number_pane_g1

0x0585,	// (0x0001fd29) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0002eef0) clock_digital_number_pane_g

0x0585,	// (0x0001fd29) clock_digital_separator_pane_g1

0x0585,	// (0x0001fd29) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0002eef0) clock_digital_separator_pane_g

0x74ee,	// (0x00026c92) aid_fill_nsta_ParamLimits

0x75a7,	// (0x00026d4b) indicator_nsta_pane_ParamLimits

0x4995,	// (0x00024139) popup_clock_analogue_window

0x4995,	// (0x00024139) popup_clock_digital_window

0x066b,	// (0x0001fe0f) grid_indicator_nsta_pane_ParamLimits

0x6eba,	// (0x0002665e) clock_nsta_pane_t2

0x0001,

0xface,	// (0x0002f272) clock_nsta_pane_t

0xc815,	// (0x0002bfb9) aid_size_max_handle

0xc81f,	// (0x0002bfc3) aid_size_min_handle

0x1c81,	// (0x00021425) editor_scroll_pane

0x8ad7,	// (0x0002827b) ex_editor_pane

0x141f,	// (0x00020bc3) scroll_pane_cp13

0x0bbb,	// (0x0002035f) scroll_pane_cp14

0x1800,	// (0x00020fa4) scroll_pane_cp36

0x3182,	// (0x00022926) list_single_graphic_hl_pane_cp2_ParamLimits

0x3182,	// (0x00022926) list_single_graphic_hl_pane_cp2

0xbecd,	// (0x0002b671) list_single_graphic_hl_pane_ParamLimits

0xbecd,	// (0x0002b671) list_single_graphic_hl_pane

0xc1c8,	// (0x0002b96c) aid_size_min_hl_cp1

0x8adf,	// (0x00028283) list_highlight_pane_cp34_ParamLimits

0x8adf,	// (0x00028283) list_highlight_pane_cp34

0x8af0,	// (0x00028294) list_single_graphic_hl_pane_g1_ParamLimits

0x8af0,	// (0x00028294) list_single_graphic_hl_pane_g1

0xc1d1,	// (0x0002b975) list_single_graphic_hl_pane_g2_ParamLimits

0xc1d1,	// (0x0002b975) list_single_graphic_hl_pane_g2

0xc1d1,	// (0x0002b975) list_single_graphic_hl_pane_g3_ParamLimits

0xc1d1,	// (0x0002b975) list_single_graphic_hl_pane_g3

0xc670,	// (0x0002be14) list_single_graphic_hl_pane_g4_ParamLimits

0xc670,	// (0x0002be14) list_single_graphic_hl_pane_g4

0xd321,	// (0x0002cac5) list_single_graphic_hl_pane_g5_ParamLimits

0xd321,	// (0x0002cac5) list_single_graphic_hl_pane_g5

0x0004,

0xfc00,	// (0x0002f3a4) list_single_graphic_hl_pane_g_ParamLimits

0xfc00,	// (0x0002f3a4) list_single_graphic_hl_pane_g

0xb7f4,	// (0x0002af98) list_single_graphic_hl_pane_t1_ParamLimits

0xb7f4,	// (0x0002af98) list_single_graphic_hl_pane_t1

0x8afd,	// (0x000282a1) aid_size_min_hl_cp2

0x8b06,	// (0x000282aa) list_highlight_pane_cp34_cp2_ParamLimits

0x8b06,	// (0x000282aa) list_highlight_pane_cp34_cp2

0x8af0,	// (0x00028294) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8af0,	// (0x00028294) list_single_graphic_hl_pane_g1_cp2

0x8b13,	// (0x000282b7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8b13,	// (0x000282b7) list_single_graphic_hl_pane_g2_cp2

0x8b1f,	// (0x000282c3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8b1f,	// (0x000282c3) list_single_graphic_hl_pane_g3_cp2

0x1af6,	// (0x0002129a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1af6,	// (0x0002129a) list_single_graphic_hl_pane_g4_cp2

0x8915,	// (0x000280b9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8915,	// (0x000280b9) list_single_graphic_hl_pane_g5_cp2

0xcb47,	// (0x0002c2eb) control_pane_g4_ParamLimits

0xcb47,	// (0x0002c2eb) control_pane_g4

0x47d8,	// (0x00023f7c) bg_popup_sub_pane_cp10_ParamLimits

0x834a,	// (0x00027aee) list_choice_list_pane_ParamLimits

0x8359,	// (0x00027afd) scroll_pane_cp23

0x07ca,	// (0x0001ff6e) bg_popup_preview_window_pane_cp02_ParamLimits

0x8951,	// (0x000280f5) list_preview_fixed_pane_ParamLimits

0x8967,	// (0x0002810b) list_preview_fixed_pane_cp_ParamLimits

0x8967,	// (0x0002810b) list_preview_fixed_pane_cp

0x8973,	// (0x00028117) popup_preview_fixed_window_g1_ParamLimits

0x8973,	// (0x00028117) popup_preview_fixed_window_g1

0x897f,	// (0x00028123) popup_preview_fixed_window_g2_ParamLimits

0x897f,	// (0x00028123) popup_preview_fixed_window_g2

0x0002,

0xfb8f,	// (0x0002f333) popup_preview_fixed_window_g_ParamLimits

0xfb8f,	// (0x0002f333) popup_preview_fixed_window_g

0xc7a5,	// (0x0002bf49) aid_navi_side_left_pane_ParamLimits

0xc7b5,	// (0x0002bf59) aid_navi_side_right_pane_ParamLimits

0xc7c4,	// (0x0002bf68) navi_icon_pane_stacon_ParamLimits

0xc7d4,	// (0x0002bf78) navi_navi_pane_stacon_ParamLimits

0xc7c4,	// (0x0002bf68) navi_text_pane_stacon_ParamLimits

0x057b,	// (0x0001fd1f) main_text_info_pane

0x8b41,	// (0x000282e5) listscroll_text_info_pane

0x8b49,	// (0x000282ed) list_text_info_pane_ParamLimits

0x8b49,	// (0x000282ed) list_text_info_pane

0x8b58,	// (0x000282fc) scroll_pane_cp24_ParamLimits

0x8b58,	// (0x000282fc) scroll_pane_cp24

0x8b76,	// (0x0002831a) list_text_info_pane_t1_ParamLimits

0x8b76,	// (0x0002831a) list_text_info_pane_t1

0x7163,	// (0x00026907) popup_fast_swap2_window_ParamLimits

0x7163,	// (0x00026907) popup_fast_swap2_window

0x8b93,	// (0x00028337) aid_size_cell_fast2

0x057b,	// (0x0001fd1f) bg_popup_window_pane_cp17

0x4e23,	// (0x000245c7) heading_pane_cp2

0x09ba,	// (0x0002015e) listscroll_fast2_pane

0x8b9d,	// (0x00028341) grid_fast2_pane

0x8ba5,	// (0x00028349) listscroll_fast2_pane_g1

0x8bad,	// (0x00028351) listscroll_fast2_pane_g2

0x0001,

0xfc0b,	// (0x0002f3af) listscroll_fast2_pane_g

0x141f,	// (0x00020bc3) scroll_pane_cp26

0x8bb5,	// (0x00028359) cell_fast2_pane_ParamLimits

0x8bb5,	// (0x00028359) cell_fast2_pane

0x8bcb,	// (0x0002836f) cell_fast2_pane_g1

0x8bd4,	// (0x00028378) cell_fast2_pane_g2

0x8bdd,	// (0x00028381) cell_fast2_pane_g3

0x0002,

0xfc10,	// (0x0002f3b4) cell_fast2_pane_g

0x0a1c,	// (0x000201c0) grid_highlight_pane_cp9

0x0a31,	// (0x000201d5) main_eswt_pane_ParamLimits

0x0a31,	// (0x000201d5) main_eswt_pane

0x8b6d,	// (0x00028311) list_single_text_info_pane

0x8be5,	// (0x00028389) eswt_ctrl_button_pane

0x8be5,	// (0x00028389) eswt_ctrl_canvas_pane

0x8bed,	// (0x00028391) eswt_ctrl_combo_pane

0x8be5,	// (0x00028389) eswt_ctrl_default_pane

0x8be5,	// (0x00028389) eswt_ctrl_label_pane

0x8bf5,	// (0x00028399) eswt_ctrl_wait_pane

0x8bfd,	// (0x000283a1) eswt_shell_pane

0x057b,	// (0x0001fd1f) listscroll_eswt_app_pane

0x8c19,	// (0x000283bd) popup_eswt_tasktip_window_ParamLimits

0x8c19,	// (0x000283bd) popup_eswt_tasktip_window

0x4b84,	// (0x00024328) bg_popup_window_pane_cp18

0x8c2a,	// (0x000283ce) eswt_control_pane_g1_ParamLimits

0x8c2a,	// (0x000283ce) eswt_control_pane_g1

0x8c37,	// (0x000283db) eswt_control_pane_g2_ParamLimits

0x8c37,	// (0x000283db) eswt_control_pane_g2

0x8c44,	// (0x000283e8) eswt_control_pane_g3_ParamLimits

0x8c44,	// (0x000283e8) eswt_control_pane_g3

0x8c51,	// (0x000283f5) eswt_control_pane_g4_ParamLimits

0x8c51,	// (0x000283f5) eswt_control_pane_g4

0x0003,

0xfc17,	// (0x0002f3bb) eswt_control_pane_g_ParamLimits

0xfc17,	// (0x0002f3bb) eswt_control_pane_g

0x12c8,	// (0x00020a6c) bg_button_pane_ParamLimits

0x12c8,	// (0x00020a6c) bg_button_pane

0x0a31,	// (0x000201d5) common_borders_pane_copy2_ParamLimits

0x0a31,	// (0x000201d5) common_borders_pane_copy2

0x8c5e,	// (0x00028402) control_button_pane_g1_ParamLimits

0x8c5e,	// (0x00028402) control_button_pane_g1

0x8c6a,	// (0x0002840e) control_button_pane_g2_ParamLimits

0x8c6a,	// (0x0002840e) control_button_pane_g2

0x8c76,	// (0x0002841a) control_button_pane_g3_ParamLimits

0x8c76,	// (0x0002841a) control_button_pane_g3

0x0002,

0xfc20,	// (0x0002f3c4) control_button_pane_g_ParamLimits

0xfc20,	// (0x0002f3c4) control_button_pane_g

0x8c8a,	// (0x0002842e) control_button_pane_t1

0x8c98,	// (0x0002843c) control_button_pane_t2

0x0001,

0xfc27,	// (0x0002f3cb) control_button_pane_t

0x4a96,	// (0x0002423a) bg_button_pane_g1

0x4aa6,	// (0x0002424a) bg_button_pane_g2

0x4a9e,	// (0x00024242) bg_button_pane_g3

0x4ab6,	// (0x0002425a) bg_button_pane_g4

0x4aae,	// (0x00024252) bg_button_pane_g5

0x4abe,	// (0x00024262) bg_button_pane_g6

0x4ac6,	// (0x0002426a) bg_button_pane_g7

0x4ad6,	// (0x0002427a) bg_button_pane_g8

0x4ace,	// (0x00024272) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0002f043) bg_button_pane_g

0x8305,	// (0x00027aa9) common_borders_pane_ParamLimits

0x8305,	// (0x00027aa9) common_borders_pane

0x8c2a,	// (0x000283ce) eswt_control_pane_g1_copy1_ParamLimits

0x8c2a,	// (0x000283ce) eswt_control_pane_g1_copy1

0x8c37,	// (0x000283db) eswt_control_pane_g2_copy1_ParamLimits

0x8c37,	// (0x000283db) eswt_control_pane_g2_copy1

0x8c44,	// (0x000283e8) eswt_control_pane_g3_copy1_ParamLimits

0x8c44,	// (0x000283e8) eswt_control_pane_g3_copy1

0x8c51,	// (0x000283f5) eswt_control_pane_g4_copy1_ParamLimits

0x8c51,	// (0x000283f5) eswt_control_pane_g4_copy1

0x8340,	// (0x00027ae4) bg_eswt_ctrl_canvas_pane_g1

0x8305,	// (0x00027aa9) common_borders_pane_cp2_ParamLimits

0x8305,	// (0x00027aa9) common_borders_pane_cp2

0x8305,	// (0x00027aa9) common_borders_pane_cp3_ParamLimits

0x8305,	// (0x00027aa9) common_borders_pane_cp3

0x8ca6,	// (0x0002844a) separator_horizontal_pane

0x1665,	// (0x00020e09) separator_vertical_pane

0x8c2a,	// (0x000283ce) eswt_control_pane_g1_copy2_ParamLimits

0x8c2a,	// (0x000283ce) eswt_control_pane_g1_copy2

0x8c37,	// (0x000283db) eswt_control_pane_g2_copy2_ParamLimits

0x8c37,	// (0x000283db) eswt_control_pane_g2_copy2

0x8c44,	// (0x000283e8) eswt_control_pane_g3_copy2_ParamLimits

0x8c44,	// (0x000283e8) eswt_control_pane_g3_copy2

0x8c51,	// (0x000283f5) eswt_control_pane_g4_copy2_ParamLimits

0x8c51,	// (0x000283f5) eswt_control_pane_g4_copy2

0x057b,	// (0x0001fd1f) common_borders_pane_cp4

0x8cae,	// (0x00028452) separator_horizontal_pane_g1

0x8cb7,	// (0x0002845b) separator_horizontal_pane_g2

0x8cc0,	// (0x00028464) separator_horizontal_pane_g3

0x0002,

0xfc2c,	// (0x0002f3d0) separator_horizontal_pane_g

0x8c2a,	// (0x000283ce) eswt_control_pane_g1_copy3_ParamLimits

0x8c2a,	// (0x000283ce) eswt_control_pane_g1_copy3

0x8c37,	// (0x000283db) eswt_control_pane_g2_copy3_ParamLimits

0x8c37,	// (0x000283db) eswt_control_pane_g2_copy3

0x8c44,	// (0x000283e8) eswt_control_pane_g3_copy3_ParamLimits

0x8c44,	// (0x000283e8) eswt_control_pane_g3_copy3

0x8c51,	// (0x000283f5) eswt_control_pane_g4_copy3_ParamLimits

0x8c51,	// (0x000283f5) eswt_control_pane_g4_copy3

0x057b,	// (0x0001fd1f) common_borders_pane_cp5

0x8cc9,	// (0x0002846d) separator_vertical_pane_g1

0x8cd2,	// (0x00028476) separator_vertical_pane_g2

0x8cdb,	// (0x0002847f) separator_vertical_pane_g3

0x0002,

0xfc33,	// (0x0002f3d7) separator_vertical_pane_g

0x8c2a,	// (0x000283ce) eswt_control_pane_g1_copy4_ParamLimits

0x8c2a,	// (0x000283ce) eswt_control_pane_g1_copy4

0x8c37,	// (0x000283db) eswt_control_pane_g2_copy4_ParamLimits

0x8c37,	// (0x000283db) eswt_control_pane_g2_copy4

0x8c44,	// (0x000283e8) eswt_control_pane_g3_copy4_ParamLimits

0x8c44,	// (0x000283e8) eswt_control_pane_g3_copy4

0x8c51,	// (0x000283f5) eswt_control_pane_g4_copy4_ParamLimits

0x8c51,	// (0x000283f5) eswt_control_pane_g4_copy4

0x8ce4,	// (0x00028488) eswt_ctrl_combo_button_pane

0x8cec,	// (0x00028490) eswt_ctrl_input_pane

0x8cf4,	// (0x00028498) popup_choice_list_window_cp70

0x8cfc,	// (0x000284a0) eswt_ctrl_input_pane_t1

0x057b,	// (0x0001fd1f) input_focus_pane_cp70

0x8305,	// (0x00027aa9) bg_button_pane_cp70_ParamLimits

0x8305,	// (0x00027aa9) bg_button_pane_cp70

0x8d0a,	// (0x000284ae) eswt_ctrl_combo_button_pane_g1

0x8d12,	// (0x000284b6) wait_bar_pane_cp70

0x4b84,	// (0x00024328) bg_popup_window_pane_cp70_ParamLimits

0x4b84,	// (0x00024328) bg_popup_window_pane_cp70

0x8d1a,	// (0x000284be) popup_eswt_tasktip_window_t1

0x8d30,	// (0x000284d4) wait_bar_pane_cp71_ParamLimits

0x8d30,	// (0x000284d4) wait_bar_pane_cp71

0x8d3c,	// (0x000284e0) grid_eswt_app_pane

0x166e,	// (0x00020e12) scroll_pane_cp70

0x8d45,	// (0x000284e9) cell_eswt_app_pane_ParamLimits

0x8d45,	// (0x000284e9) cell_eswt_app_pane

0x8d6d,	// (0x00028511) cell_eswt_app_pane_g1_ParamLimits

0x8d6d,	// (0x00028511) cell_eswt_app_pane_g1

0x8d9c,	// (0x00028540) cell_eswt_app_pane_g2_ParamLimits

0x8d9c,	// (0x00028540) cell_eswt_app_pane_g2

0x0001,

0xfc3a,	// (0x0002f3de) cell_eswt_app_pane_g_ParamLimits

0xfc3a,	// (0x0002f3de) cell_eswt_app_pane_g

0x8dc5,	// (0x00028569) cell_eswt_app_pane_t1_ParamLimits

0x8dc5,	// (0x00028569) cell_eswt_app_pane_t1

0x8df7,	// (0x0002859b) grid_highlight_pane_cp70_ParamLimits

0x8df7,	// (0x0002859b) grid_highlight_pane_cp70

0x0bc3,	// (0x00020367) set_content_pane_g1

0x1e70,	// (0x00021614) status_small_volume_pane

0xd444,	// (0x0002cbe8) status_small_volume_pane_g1

0xd44c,	// (0x0002cbf0) volume_small2_pane

0xd455,	// (0x0002cbf9) volume_small2_pane_g1

0xd45e,	// (0x0002cc02) volume_small2_pane_g2

0xd467,	// (0x0002cc0b) volume_small2_pane_g3

0xd470,	// (0x0002cc14) volume_small2_pane_g4

0xd479,	// (0x0002cc1d) volume_small2_pane_g5

0xd482,	// (0x0002cc26) volume_small2_pane_g6

0xd48b,	// (0x0002cc2f) volume_small2_pane_g7

0xd494,	// (0x0002cc38) volume_small2_pane_g8

0xd49d,	// (0x0002cc41) volume_small2_pane_g9

0xd4a6,	// (0x0002cc4a) volume_small2_pane_g10

0x0009,

0xfc3f,	// (0x0002f3e3) volume_small2_pane_g

0x86ca,	// (0x00027e6e) fep_vkb_top_text_pane_g1_ParamLimits

0x86e5,	// (0x00027e89) fep_vkb_top_text_pane_t1_ParamLimits

0x898b,	// (0x0002812f) popup_preview_fixed_window_g3_ParamLimits

0x898b,	// (0x0002812f) popup_preview_fixed_window_g3

0x7497,	// (0x00026c3b) popup_toolbar_trans_pane

0x7bd4,	// (0x00027378) aid_height_set_list_ParamLimits

0x5b8a,	// (0x0002532e) aid_size_parent_ParamLimits

0x47d8,	// (0x00023f7c) list_highlight_pane_cp2_ParamLimits

0x0bc3,	// (0x00020367) set_content_pane_g1_ParamLimits

0x7d4b,	// (0x000274ef) list_single_image_pane_ParamLimits

0x7d4b,	// (0x000274ef) list_single_image_pane

0xd4af,	// (0x0002cc53) aid_size_cell_image_ParamLimits

0xd4af,	// (0x0002cc53) aid_size_cell_image

0xd4bc,	// (0x0002cc60) grid_single_image_pane_ParamLimits

0xd4bc,	// (0x0002cc60) grid_single_image_pane

0x0bc3,	// (0x00020367) list_single_image_pane_g1_ParamLimits

0x0bc3,	// (0x00020367) list_single_image_pane_g1

0x12e2,	// (0x00020a86) list_single_image_pane_g2_ParamLimits

0x12e2,	// (0x00020a86) list_single_image_pane_g2

0x0001,

0xfc54,	// (0x0002f3f8) list_single_image_pane_g_ParamLimits

0xfc54,	// (0x0002f3f8) list_single_image_pane_g

0x6153,	// (0x000258f7) list_single_image_pane_t1_ParamLimits

0x6153,	// (0x000258f7) list_single_image_pane_t1

0xd4c8,	// (0x0002cc6c) cell_image_list_pane_ParamLimits

0xd4c8,	// (0x0002cc6c) cell_image_list_pane

0xd4db,	// (0x0002cc7f) cell_image_list_pane_g1

0xd4e4,	// (0x0002cc88) cell_image_list_pane_g2

0x0001,

0xfc59,	// (0x0002f3fd) cell_image_list_pane_g

0x9c2c,	// (0x000293d0) aid_size_cell_tb_trans_pane

0x12c8,	// (0x00020a6c) bg_tb_trans_pane

0x9c3e,	// (0x000293e2) grid_tb_trans_pane

0x4a96,	// (0x0002423a) bg_tb_trans_pane_g1

0x4aa6,	// (0x0002424a) bg_tb_trans_pane_g2

0x4a9e,	// (0x00024242) bg_tb_trans_pane_g3

0x4ab6,	// (0x0002425a) bg_tb_trans_pane_g4

0x4aae,	// (0x00024252) bg_tb_trans_pane_g5

0x4ad6,	// (0x0002427a) bg_tb_trans_pane_g6

0x4ace,	// (0x00024272) bg_tb_trans_pane_g7

0x4abe,	// (0x00024262) bg_tb_trans_pane_g8

0x4ac6,	// (0x0002426a) bg_tb_trans_pane_g9

0x0008,

0xfc5e,	// (0x0002f402) bg_tb_trans_pane_g

0x9c52,	// (0x000293f6) cell_toolbar_trans_pane_ParamLimits

0x9c52,	// (0x000293f6) cell_toolbar_trans_pane

0x8340,	// (0x00027ae4) cell_toolbar_trans_pane_g1

0x7fc5,	// (0x00027769) list_form2_midp_pane_t1

0x7fd3,	// (0x00027777) list_form2_midp_pane_t2

0x0001,

0xfb07,	// (0x0002f2ab) list_form2_midp_pane_t

0x7fe1,	// (0x00027785) scroll_pane_cp51_ParamLimits

0x819a,	// (0x0002793e) form2_midp_wait_pane_g1

0x81a3,	// (0x00027947) form2_midp_wait_pane_g2

0x81ac,	// (0x00027950) form2_midp_wait_pane_g3

0x0002,

0xfb1c,	// (0x0002f2c0) form2_midp_wait_pane_g

0x066b,	// (0x0001fe0f) list_highlight_pane_cp21_ParamLimits

0x81cc,	// (0x00027970) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x81db,	// (0x0002797f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xbe8e,	// (0x0002b632) list_single_2graphic_im_pane_ParamLimits

0xbe8e,	// (0x0002b632) list_single_2graphic_im_pane

0xd4ed,	// (0x0002cc91) list_single_2graphic_im_pane_g1_ParamLimits

0xd4ed,	// (0x0002cc91) list_single_2graphic_im_pane_g1

0xd4fe,	// (0x0002cca2) list_single_2graphic_im_pane_g2_ParamLimits

0xd4fe,	// (0x0002cca2) list_single_2graphic_im_pane_g2

0xd50a,	// (0x0002ccae) list_single_2graphic_im_pane_g3_ParamLimits

0xd50a,	// (0x0002ccae) list_single_2graphic_im_pane_g3

0x0003,

0xfc71,	// (0x0002f415) list_single_2graphic_im_pane_g_ParamLimits

0xfc71,	// (0x0002f415) list_single_2graphic_im_pane_g

0xd51e,	// (0x0002ccc2) list_single_2graphic_im_pane_t1_ParamLimits

0xd51e,	// (0x0002ccc2) list_single_2graphic_im_pane_t1

0x8997,	// (0x0002813b) list_single_graphic_2heading_pane_fp_ParamLimits

0x8997,	// (0x0002813b) list_single_graphic_2heading_pane_fp

0xc0aa,	// (0x0002b84e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc0aa,	// (0x0002b84e) list_single_graphic_2heading_pane_fp_g1

0x89ab,	// (0x0002814f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x89ab,	// (0x0002814f) list_single_graphic_2heading_pane_fp_g2

0xc670,	// (0x0002be14) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc670,	// (0x0002be14) list_single_graphic_2heading_pane_fp_g3

0xd321,	// (0x0002cac5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd321,	// (0x0002cac5) list_single_graphic_2heading_pane_fp_g4

0x89b7,	// (0x0002815b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x89b7,	// (0x0002815b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9f,	// (0x0002f343) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9f,	// (0x0002f343) list_single_graphic_2heading_pane_fp_g

0xc1dd,	// (0x0002b981) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc1dd,	// (0x0002b981) list_single_graphic_2heading_pane_fp_t1

0xc0e2,	// (0x0002b886) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc0e2,	// (0x0002b886) list_single_graphic_2heading_pane_fp_t2

0xc1f3,	// (0x0002b997) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc1f3,	// (0x0002b997) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7a,	// (0x0002f41e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7a,	// (0x0002f41e) list_single_graphic_2heading_pane_fp_t

0x83cb,	// (0x00027b6f) fep_hwr_write_pane_g5_ParamLimits

0x83cb,	// (0x00027b6f) fep_hwr_write_pane_g5

0x83d7,	// (0x00027b7b) fep_hwr_write_pane_g6_ParamLimits

0x83d7,	// (0x00027b7b) fep_hwr_write_pane_g6

0x8bfd,	// (0x000283a1) eswt_shell_pane_ParamLimits

0x4b84,	// (0x00024328) bg_popup_window_pane_cp18_ParamLimits

0x5b2e,	// (0x000252d2) heading_pane_cp70

0x8d1a,	// (0x000284be) popup_eswt_tasktip_window_t1_ParamLimits

0x7524,	// (0x00026cc8) aid_touch_tab_arrow_left

0x7530,	// (0x00026cd4) aid_touch_tab_arrow_right

0x2b98,	// (0x0002233c) title_pane_g3_ParamLimits

0x2b98,	// (0x0002233c) title_pane_g3

0x1298,	// (0x00020a3c) set_value_pane_g1

0x7497,	// (0x00026c3b) popup_toolbar_trans_pane_ParamLimits

0x9c2c,	// (0x000293d0) aid_size_cell_tb_trans_pane_ParamLimits

0x12c8,	// (0x00020a6c) bg_tb_trans_pane_ParamLimits

0x9c3e,	// (0x000293e2) grid_tb_trans_pane_ParamLimits

0x07ca,	// (0x0001ff6e) cont_note_pane_ParamLimits

0x07ca,	// (0x0001ff6e) cont_note_pane

0x0a31,	// (0x000201d5) cont_snote2_single_text_pane_ParamLimits

0x0a31,	// (0x000201d5) cont_snote2_single_text_pane

0x0a31,	// (0x000201d5) cont_snote2_single_graphic_pane_ParamLimits

0x0a31,	// (0x000201d5) cont_snote2_single_graphic_pane

0x4ffc,	// (0x000247a0) cont_note_wait_pane_ParamLimits

0x4ffc,	// (0x000247a0) cont_note_wait_pane

0x4ffc,	// (0x000247a0) cont_note_image_pane_ParamLimits

0x4ffc,	// (0x000247a0) cont_note_image_pane

0x9c84,	// (0x00029428) popup_note2_window_g1_ParamLimits

0x9c84,	// (0x00029428) popup_note2_window_g1

0x9cb5,	// (0x00029459) popup_note2_window_t1_ParamLimits

0x9cb5,	// (0x00029459) popup_note2_window_t1

0x9cfa,	// (0x0002949e) popup_note2_window_t2_ParamLimits

0x9cfa,	// (0x0002949e) popup_note2_window_t2

0x9d3f,	// (0x000294e3) popup_note2_window_t3_ParamLimits

0x9d3f,	// (0x000294e3) popup_note2_window_t3

0x9d84,	// (0x00029528) popup_note2_window_t4_ParamLimits

0x9d84,	// (0x00029528) popup_note2_window_t4

0x084e,	// (0x0001fff2) popup_note2_window_t5_ParamLimits

0x084e,	// (0x0001fff2) popup_note2_window_t5

0x0004,

0xfc86,	// (0x0002f42a) popup_note2_window_t_ParamLimits

0xfc86,	// (0x0002f42a) popup_note2_window_t

0x9db3,	// (0x00029557) popup_note2_image_window_g1_ParamLimits

0x9db3,	// (0x00029557) popup_note2_image_window_g1

0x9dbf,	// (0x00029563) popup_note2_image_window_g2_ParamLimits

0x9dbf,	// (0x00029563) popup_note2_image_window_g2

0x0001,

0xfc91,	// (0x0002f435) popup_note2_image_window_g_ParamLimits

0xfc91,	// (0x0002f435) popup_note2_image_window_g

0x9dd1,	// (0x00029575) popup_note2_image_window_t1_ParamLimits

0x9dd1,	// (0x00029575) popup_note2_image_window_t1

0x9de9,	// (0x0002958d) popup_note2_image_window_t2_ParamLimits

0x9de9,	// (0x0002958d) popup_note2_image_window_t2

0x9e01,	// (0x000295a5) popup_note2_image_window_t3_ParamLimits

0x9e01,	// (0x000295a5) popup_note2_image_window_t3

0x0002,

0xfc96,	// (0x0002f43a) popup_note2_image_window_t_ParamLimits

0xfc96,	// (0x0002f43a) popup_note2_image_window_t

0x500a,	// (0x000247ae) popup_note2_wait_window_g1_ParamLimits

0x500a,	// (0x000247ae) popup_note2_wait_window_g1

0x5016,	// (0x000247ba) popup_note2_wait_window_g2_ParamLimits

0x5016,	// (0x000247ba) popup_note2_wait_window_g2

0x5022,	// (0x000247c6) popup_note2_wait_window_g3_ParamLimits

0x5022,	// (0x000247c6) popup_note2_wait_window_g3

0x0002,

0xf881,	// (0x0002f025) popup_note2_wait_window_g_ParamLimits

0xf881,	// (0x0002f025) popup_note2_wait_window_g

0x9e1d,	// (0x000295c1) popup_note2_wait_window_t1_ParamLimits

0x9e1d,	// (0x000295c1) popup_note2_wait_window_t1

0x9e3b,	// (0x000295df) popup_note2_wait_window_t2_ParamLimits

0x9e3b,	// (0x000295df) popup_note2_wait_window_t2

0x9e59,	// (0x000295fd) popup_note2_wait_window_t3_ParamLimits

0x9e59,	// (0x000295fd) popup_note2_wait_window_t3

0x9e6b,	// (0x0002960f) popup_note2_wait_window_t4_ParamLimits

0x9e6b,	// (0x0002960f) popup_note2_wait_window_t4

0x0003,

0xfc9d,	// (0x0002f441) popup_note2_wait_window_t_ParamLimits

0xfc9d,	// (0x0002f441) popup_note2_wait_window_t

0x9e7d,	// (0x00029621) wait_bar2_pane_ParamLimits

0x9e7d,	// (0x00029621) wait_bar2_pane

0x9e95,	// (0x00029639) popup_snote2_single_text_window_g1_ParamLimits

0x9e95,	// (0x00029639) popup_snote2_single_text_window_g1

0x9ebd,	// (0x00029661) popup_snote2_single_text_window_t1_ParamLimits

0x9ebd,	// (0x00029661) popup_snote2_single_text_window_t1

0x9f09,	// (0x000296ad) popup_snote2_single_text_window_t2_ParamLimits

0x9f09,	// (0x000296ad) popup_snote2_single_text_window_t2

0x9f55,	// (0x000296f9) popup_snote2_single_text_window_t3_ParamLimits

0x9f55,	// (0x000296f9) popup_snote2_single_text_window_t3

0x9f96,	// (0x0002973a) popup_snote2_single_text_window_t4_ParamLimits

0x9f96,	// (0x0002973a) popup_snote2_single_text_window_t4

0x9fcc,	// (0x00029770) popup_snote2_single_text_window_t5_ParamLimits

0x9fcc,	// (0x00029770) popup_snote2_single_text_window_t5

0x0004,

0xfca6,	// (0x0002f44a) popup_snote2_single_text_window_t_ParamLimits

0xfca6,	// (0x0002f44a) popup_snote2_single_text_window_t

0x9ff7,	// (0x0002979b) popup_snote2_single_graphic_window_g1_ParamLimits

0x9ff7,	// (0x0002979b) popup_snote2_single_graphic_window_g1

0xa01f,	// (0x000297c3) popup_snote2_single_graphic_window_g2_ParamLimits

0xa01f,	// (0x000297c3) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb1,	// (0x0002f455) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb1,	// (0x0002f455) popup_snote2_single_graphic_window_g

0xa047,	// (0x000297eb) popup_snote2_single_graphic_window_t1_ParamLimits

0xa047,	// (0x000297eb) popup_snote2_single_graphic_window_t1

0xa093,	// (0x00029837) popup_snote2_single_graphic_window_t2_ParamLimits

0xa093,	// (0x00029837) popup_snote2_single_graphic_window_t2

0x9f55,	// (0x000296f9) popup_snote2_single_graphic_window_t3_ParamLimits

0x9f55,	// (0x000296f9) popup_snote2_single_graphic_window_t3

0x9f96,	// (0x0002973a) popup_snote2_single_graphic_window_t4_ParamLimits

0x9f96,	// (0x0002973a) popup_snote2_single_graphic_window_t4

0x9fcc,	// (0x00029770) popup_snote2_single_graphic_window_t5_ParamLimits

0x9fcc,	// (0x00029770) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb6,	// (0x0002f45a) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb6,	// (0x0002f45a) popup_snote2_single_graphic_window_t

0x6efe,	// (0x000266a2) clock_nsta_pane_cp2_t1

0x6efe,	// (0x000266a2) clock_nsta_pane_cp2_t2

0x0001,

0xfadd,	// (0x0002f281) clock_nsta_pane_cp2_t

0xbb6a,	// (0x0002b30e) form_field_data_wide_pane_g1_ParamLimits

0x0bc3,	// (0x00020367) form_field_data_wide_pane_g2_ParamLimits

0x0bc3,	// (0x00020367) form_field_data_wide_pane_g2

0x12e2,	// (0x00020a86) form_field_data_wide_pane_g3_ParamLimits

0x12e2,	// (0x00020a86) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0002ee68) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0002ee68) form_field_data_wide_pane_g

0x7e9f,	// (0x00027643) grid_touch_3_pane_ParamLimits

0x7e9f,	// (0x00027643) grid_touch_3_pane

0xd54f,	// (0x0002ccf3) cell_touch_3_pane_ParamLimits

0xd54f,	// (0x0002ccf3) cell_touch_3_pane

0x8340,	// (0x00027ae4) cell_touch_3_pane_g1

0x8340,	// (0x00027ae4) cell_touch_3_pane_g2

0x0001,

0xfb62,	// (0x0002f306) cell_touch_3_pane_g

0x0880,	// (0x00020024) cont_query_data_pane

0x0888,	// (0x0002002c) cont_query_data_pane_cp1

0xa0df,	// (0x00029883) button_value_adjust_pane_cp7

0xa0e7,	// (0x0002988b) query_popup_pane_cp3

0x1811,	// (0x00020fb5) bg_popup_sub_pane_cp22_ParamLimits

0xc8cb,	// (0x0002c06f) navi_navi_volume_pane_cp2

0xc8e3,	// (0x0002c087) popup_side_volume_key_window_g2

0xc8ef,	// (0x0002c093) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0002eefa) popup_side_volume_key_window_g

0xc909,	// (0x0002c0ad) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0002ef01) popup_side_volume_key_window_t

0x1a79,	// (0x0002121d) popup_side_volume_key_window_ParamLimits

0xc6a3,	// (0x0002be47) list_double_graphic_pane_g4_ParamLimits

0xc6a3,	// (0x0002be47) list_double_graphic_pane_g4

0xbeb7,	// (0x0002b65b) list_single_2heading_msg_pane_ParamLimits

0xbeb7,	// (0x0002b65b) list_single_2heading_msg_pane

0xc211,	// (0x0002b9b5) list_single_2heading_msg_pane_g1_ParamLimits

0xc211,	// (0x0002b9b5) list_single_2heading_msg_pane_g1

0x1af6,	// (0x0002129a) list_single_2heading_msg_pane_g2_ParamLimits

0x1af6,	// (0x0002129a) list_single_2heading_msg_pane_g2

0xc21d,	// (0x0002b9c1) list_single_2heading_msg_pane_g3_ParamLimits

0xc21d,	// (0x0002b9c1) list_single_2heading_msg_pane_g3

0xc229,	// (0x0002b9cd) list_single_2heading_msg_pane_g4_ParamLimits

0xc229,	// (0x0002b9cd) list_single_2heading_msg_pane_g4

0x0003,

0xfcc1,	// (0x0002f465) list_single_2heading_msg_pane_g_ParamLimits

0xfcc1,	// (0x0002f465) list_single_2heading_msg_pane_g

0xc241,	// (0x0002b9e5) list_single_2heading_msg_pane_t1_ParamLimits

0xc241,	// (0x0002b9e5) list_single_2heading_msg_pane_t1

0xc269,	// (0x0002ba0d) list_single_2heading_msg_pane_t2_ParamLimits

0xc269,	// (0x0002ba0d) list_single_2heading_msg_pane_t2

0xc298,	// (0x0002ba3c) list_single_2heading_msg_pane_t3_ParamLimits

0xc298,	// (0x0002ba3c) list_single_2heading_msg_pane_t3

0xc2d1,	// (0x0002ba75) list_single_2heading_msg_pane_t4_ParamLimits

0xc2d1,	// (0x0002ba75) list_single_2heading_msg_pane_t4

0x0003,

0xfcca,	// (0x0002f46e) list_single_2heading_msg_pane_t_ParamLimits

0xfcca,	// (0x0002f46e) list_single_2heading_msg_pane_t

0x0611,	// (0x0001fdb5) title_pane_g4_ParamLimits

0x0611,	// (0x0001fdb5) title_pane_g4

0xc71b,	// (0x0002bebf) title_pane_stacon_g3_ParamLimits

0xc71b,	// (0x0002bebf) title_pane_stacon_g3

0x9c78,	// (0x0002941c) list_single_2graphic_im_pane_g4_ParamLimits

0x9c78,	// (0x0002941c) list_single_2graphic_im_pane_g4

0x5944,	// (0x000250e8) popup_side_volume_key_window_cp

0x5daa,	// (0x0002554e) main_idle_act2_pane_t1

0xcc76,	// (0x0002c41a) toolbar_button_pane_g10

0x2ea6,	// (0x0002264a) popup_toolbar_window_cp1

0x6eef,	// (0x00026693) clock_nsta_pane_cp_t1

0x6eef,	// (0x00026693) clock_nsta_pane_cp_t2

0x0001,

0xfad8,	// (0x0002f27c) clock_nsta_pane_cp_t

0xc8cb,	// (0x0002c06f) navi_navi_volume_pane_cp2_ParamLimits

0xc8d7,	// (0x0002c07b) popup_side_volume_key_window_g1_ParamLimits

0xc8e3,	// (0x0002c087) popup_side_volume_key_window_g2_ParamLimits

0xc8ef,	// (0x0002c093) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0002eefa) popup_side_volume_key_window_g_ParamLimits

0xd0e4,	// (0x0002c888) fep_hwr_aid_pane

0xa335,	// (0x00029ad9) bg_fep_hwr_top_pane_g4_ParamLimits

0x83ad,	// (0x00027b51) fep_hwr_top_pane_g1_ParamLimits

0x839b,	// (0x00027b3f) fep_hwr_top_pane_g2_ParamLimits

0xd197,	// (0x0002c93b) fep_hwr_top_pane_g3_ParamLimits

0xfb2d,	// (0x0002f2d1) fep_hwr_top_pane_g_ParamLimits

0xd1ac,	// (0x0002c950) fep_hwr_top_text_pane_ParamLimits

0x5718,	// (0x00024ebc) aid_touch_tab_arrow_arrow_2

0x570f,	// (0x00024eb3) aid_touch_tab_arrow_left_2

0xd0f8,	// (0x0002c89c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xd12b,	// (0x0002c8cf) fep_hwr_prediction_pane

0x84fa,	// (0x00027c9e) fep_vkb_prediction_pane

0x85dc,	// (0x00027d80) fep_vkb_side_pane_g3_ParamLimits

0x85dc,	// (0x00027d80) fep_vkb_side_pane_g3

0x8588,	// (0x00027d2c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x8a0b,	// (0x000281af) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8a18,	// (0x000281bc) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd7,	// (0x0002f37b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xa0f8,	// (0x0002989c) fep_hwr_prediction_pane_g1

0xd590,	// (0x0002cd34) fep_hwr_prediction_pane_g2

0xd598,	// (0x0002cd3c) fep_hwr_prediction_pane_g3

0xd5a0,	// (0x0002cd44) fep_hwr_prediction_pane_g4

0x0003,

0xfcd3,	// (0x0002f477) fep_hwr_prediction_pane_g

0xa0f8,	// (0x0002989c) fep_vkb_prediction_pane_g1

0xa102,	// (0x000298a6) fep_vkb_prediction_pane_g2

0xa10a,	// (0x000298ae) fep_vkb_prediction_pane_g3

0xa112,	// (0x000298b6) fep_vkb_prediction_pane_g4

0x0003,

0xfcdc,	// (0x0002f480) fep_vkb_prediction_pane_g

0x617d,	// (0x00025921) slider_set_pane_g3

0x6191,	// (0x00025935) slider_set_pane_g4

0x61a9,	// (0x0002594d) slider_set_pane_g5

0x617d,	// (0x00025921) slider_set_pane_g6

0xcf10,	// (0x0002c6b4) slider_set_pane_g7

0x5bad,	// (0x00025351) slider_form_pane_g3

0x5bb6,	// (0x0002535a) slider_form_pane_g4

0x5bbe,	// (0x00025362) slider_form_pane_g5

0x5bad,	// (0x00025351) slider_form_pane_g6

0x7d04,	// (0x000274a8) slider_form_pane_g7

0x5ff3,	// (0x00025797) slider_set_pane_vc_g3

0x5ffc,	// (0x000257a0) slider_set_pane_vc_g4

0x6005,	// (0x000257a9) slider_set_pane_vc_g5

0x5ff3,	// (0x00025797) slider_set_pane_vc_g6

0x600e,	// (0x000257b2) slider_set_pane_vc_g7

0x5ff3,	// (0x00025797) slider_form_pane_vc_g1

0x5ffc,	// (0x000257a0) slider_form_pane_vc_g2

0x6005,	// (0x000257a9) slider_form_pane_vc_g3

0x5ff3,	// (0x00025797) slider_form_pane_vc_g4

0x6cad,	// (0x00026451) slider_form_pane_vc_g5

0x0004,

0xfabe,	// (0x0002f262) slider_form_pane_vc_g

0x057b,	// (0x0001fd1f) main_idle_act3_pane

0xa11a,	// (0x000298be) ai3_links_pane

0xd5a8,	// (0x0002cd4c) popup_ai3_data_window_ParamLimits

0xd5a8,	// (0x0002cd4c) popup_ai3_data_window

0x057b,	// (0x0001fd1f) grid_ai3_links_pane

0xd5c0,	// (0x0002cd64) cell_ai3_links_pane_ParamLimits

0xd5c0,	// (0x0002cd64) cell_ai3_links_pane

0xa123,	// (0x000298c7) bg_popup_sub_pane_cp11

0xa130,	// (0x000298d4) cell_ai3_links_pane_g1

0x057b,	// (0x0001fd1f) bg_popup_sub_pane_cp12

0xa155,	// (0x000298f9) heading_ai3_data_pane

0xa15d,	// (0x00029901) list_ai3_gene_pane

0xa169,	// (0x0002990d) popup_ai3_data_window_g1

0xa171,	// (0x00029915) heading_ai3_data_pane_g1

0xa179,	// (0x0002991d) heading_ai3_data_pane_t1

0xa187,	// (0x0002992b) list_double_ai3_gene_pane_ParamLimits

0xa187,	// (0x0002992b) list_double_ai3_gene_pane

0xa194,	// (0x00029938) list_single_ai3_gene_pane_ParamLimits

0xa194,	// (0x00029938) list_single_ai3_gene_pane

0x8305,	// (0x00027aa9) list_highlight_pane_cp7_ParamLimits

0x8305,	// (0x00027aa9) list_highlight_pane_cp7

0xa1a1,	// (0x00029945) list_single_a13_gene_pane_t1_ParamLimits

0xa1a1,	// (0x00029945) list_single_a13_gene_pane_t1

0xa1b8,	// (0x0002995c) list_single_ai3_gene_pane_g1

0xa1c1,	// (0x00029965) list_single_ai3_gene_pane_g2

0x0001,

0xfce5,	// (0x0002f489) list_single_ai3_gene_pane_g

0xa1c9,	// (0x0002996d) list_double_ai3_gene_pane_g1_ParamLimits

0xa1c9,	// (0x0002996d) list_double_ai3_gene_pane_g1

0xa1d5,	// (0x00029979) list_double_ai3_gene_pane_t1_ParamLimits

0xa1d5,	// (0x00029979) list_double_ai3_gene_pane_t1

0xa1f1,	// (0x00029995) list_double_ai3_gene_pane_t2_ParamLimits

0xa1f1,	// (0x00029995) list_double_ai3_gene_pane_t2

0xa206,	// (0x000299aa) list_double_ai3_gene_pane_t3_ParamLimits

0xa206,	// (0x000299aa) list_double_ai3_gene_pane_t3

0x0002,

0xfcea,	// (0x0002f48e) list_double_ai3_gene_pane_t_ParamLimits

0xfcea,	// (0x0002f48e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc209,	// (0x0002b9ad) aid_size_min_col_2

0xd57c,	// (0x0002cd20) aid_size_min_msg_ParamLimits

0xd57c,	// (0x0002cd20) aid_size_min_msg

0x86d6,	// (0x00027e7a) fep_vkb_top_text_pane_g2_ParamLimits

0x86d6,	// (0x00027e7a) fep_vkb_top_text_pane_g2

0x0001,

0xfb5d,	// (0x0002f301) fep_vkb_top_text_pane_g_ParamLimits

0xfb5d,	// (0x0002f301) fep_vkb_top_text_pane_g

0x057b,	// (0x0001fd1f) main_hc_apps_shell_pane

0xa223,	// (0x000299c7) grid_hc_apps_pane_ParamLimits

0xa223,	// (0x000299c7) grid_hc_apps_pane

0xa232,	// (0x000299d6) list_hc_apps_pane

0xa23a,	// (0x000299de) scroll_pane_cp37_ParamLimits

0xa23a,	// (0x000299de) scroll_pane_cp37

0xd5d4,	// (0x0002cd78) cell_hc_apps_pane_ParamLimits

0xd5d4,	// (0x0002cd78) cell_hc_apps_pane

0xd662,	// (0x0002ce06) cell_hc_apps_pane_g1_ParamLimits

0xd662,	// (0x0002ce06) cell_hc_apps_pane_g1

0xa246,	// (0x000299ea) cell_hc_apps_pane_g2_ParamLimits

0xa246,	// (0x000299ea) cell_hc_apps_pane_g2

0xa262,	// (0x00029a06) cell_hc_apps_pane_g3_ParamLimits

0xa262,	// (0x00029a06) cell_hc_apps_pane_g3

0x0002,

0xfcf1,	// (0x0002f495) cell_hc_apps_pane_g_ParamLimits

0xfcf1,	// (0x0002f495) cell_hc_apps_pane_g

0xd68f,	// (0x0002ce33) cell_hc_apps_pane_t1_ParamLimits

0xd68f,	// (0x0002ce33) cell_hc_apps_pane_t1

0x07ca,	// (0x0001ff6e) grid_highlight_pane_cp10_ParamLimits

0x07ca,	// (0x0001ff6e) grid_highlight_pane_cp10

0xd6cd,	// (0x0002ce71) list_single_hc_apps_pane_ParamLimits

0xd6cd,	// (0x0002ce71) list_single_hc_apps_pane

0xd6fd,	// (0x0002cea1) list_single_hc_apps_pane_g1

0xd716,	// (0x0002ceba) list_single_hc_apps_pane_g2

0x0001,

0xfcf8,	// (0x0002f49c) list_single_hc_apps_pane_g

0xd72f,	// (0x0002ced3) list_single_hc_apps_pane_g2_copy1

0xc2f6,	// (0x0002ba9a) list_single_hc_apps_pane_t1

0x066b,	// (0x0001fe0f) bg_set_opt_pane_cp_ParamLimits

0x0679,	// (0x0001fe1d) setting_slider_pane_t1_ParamLimits

0xc5c7,	// (0x0002bd6b) setting_slider_pane_t2_ParamLimits

0xc5e0,	// (0x0002bd84) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0002ed46) setting_slider_pane_t_ParamLimits

0x068f,	// (0x0001fe33) slider_set_pane_ParamLimits

0xcb53,	// (0x0002c2f7) control_pane_g5_ParamLimits

0xcb53,	// (0x0002c2f7) control_pane_g5

0x5b75,	// (0x00025319) slider_set_pane_g1_ParamLimits

0xcf04,	// (0x0002c6a8) slider_set_pane_g2_ParamLimits

0x617d,	// (0x00025921) slider_set_pane_g3_ParamLimits

0x6191,	// (0x00025935) slider_set_pane_g4_ParamLimits

0x61a9,	// (0x0002594d) slider_set_pane_g5_ParamLimits

0x617d,	// (0x00025921) slider_set_pane_g6_ParamLimits

0xcf10,	// (0x0002c6b4) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0002f141) slider_set_pane_g_ParamLimits

0x066b,	// (0x0001fe0f) navi_icon_text_pane_ParamLimits

0x74fe,	// (0x00026ca2) aid_fill_nsta_2_ParamLimits

0x7524,	// (0x00026cc8) aid_touch_tab_arrow_left_ParamLimits

0x7530,	// (0x00026cd4) aid_touch_tab_arrow_right_ParamLimits

0x759a,	// (0x00026d3e) clock_nsta_pane_ParamLimits

0x56f1,	// (0x00024e95) navi_icon_pane_g1_ParamLimits

0x56fd,	// (0x00024ea1) navi_text_pane_t1_ParamLimits

0x7f9f,	// (0x00027743) navi_icon_text_pane_g1_ParamLimits

0x7fab,	// (0x0002774f) navi_icon_text_pane_t1_ParamLimits

0xd6fd,	// (0x0002cea1) list_single_hc_apps_pane_g1_ParamLimits

0xd716,	// (0x0002ceba) list_single_hc_apps_pane_g2_ParamLimits

0xfcf8,	// (0x0002f49c) list_single_hc_apps_pane_g_ParamLimits

0xd72f,	// (0x0002ced3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc2f6,	// (0x0002ba9a) list_single_hc_apps_pane_t1_ParamLimits

0xc4f9,	// (0x0002bc9d) popup_toolbar2_fixed_window_ParamLimits

0xc4f9,	// (0x0002bc9d) popup_toolbar2_fixed_window

0x748f,	// (0x00026c33) popup_toolbar2_float_window

0x057b,	// (0x0001fd1f) bg_popup_sub_pane_cp27

0xa284,	// (0x00029a28) grid_toolbar2_float_pane

0x057b,	// (0x0001fd1f) bg_popup_sub_pane_cp26

0xa284,	// (0x00029a28) grid_toolbar2_fixed_pane

0xd74b,	// (0x0002ceef) cell_toolbar2_fixed_pane_ParamLimits

0xd74b,	// (0x0002ceef) cell_toolbar2_fixed_pane

0xd75c,	// (0x0002cf00) cell_toolbar2_fixed_pane_g1

0xa28c,	// (0x00029a30) toolbar2_fixed_button_pane

0x4a96,	// (0x0002423a) toolbar2_fixed_button_pane_g1

0x4aa6,	// (0x0002424a) toolbar2_fixed_button_pane_g2

0x4a9e,	// (0x00024242) toolbar2_fixed_button_pane_g3

0x4ab6,	// (0x0002425a) toolbar2_fixed_button_pane_g4

0x4aae,	// (0x00024252) toolbar2_fixed_button_pane_g5

0x4abe,	// (0x00024262) toolbar2_fixed_button_pane_g6

0x4ac6,	// (0x0002426a) toolbar2_fixed_button_pane_g7

0x4ad6,	// (0x0002427a) toolbar2_fixed_button_pane_g8

0x4ace,	// (0x00024272) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0002f043) toolbar2_fixed_button_pane_g

0xa294,	// (0x00029a38) cell_toolbar2_float_pane_ParamLimits

0xa294,	// (0x00029a38) cell_toolbar2_float_pane

0xa2a5,	// (0x00029a49) cell_toolbar2_float_pane_g1

0xa28c,	// (0x00029a30) toolbar2_fixed_button_pane_cp

0x845b,	// (0x00027bff) fep_vkb_accented_list_pane_ParamLimits

0x845b,	// (0x00027bff) fep_vkb_accented_list_pane

0xd2ee,	// (0x0002ca92) bg_popup_fep_shadow_pane_g9

0x1c81,	// (0x00021425) bg_popup_fep_shadow_pane_cp3

0x1406,	// (0x00020baa) list_accented_list_pane

0xa2ae,	// (0x00029a52) list_single_accented_list_pane_ParamLimits

0xa2ae,	// (0x00029a52) list_single_accented_list_pane

0x1c81,	// (0x00021425) list_highlight_pane_cp10

0xa2bf,	// (0x00029a63) list_single_accented_list_pane_t1

0x73fd,	// (0x00026ba1) popup_slider_window_ParamLimits

0x73fd,	// (0x00026ba1) popup_slider_window

0xa0ef,	// (0x00029893) aid_indentation_list_msg

0xd7f7,	// (0x0002cf9b) bg_popup_window_pane_cp19

0xa71f,	// (0x00029ec3) popup_slider_window_g1

0xa73b,	// (0x00029edf) popup_slider_window_g2

0xa757,	// (0x00029efb) popup_slider_window_g3

0x0005,

0xfcfd,	// (0x0002f4a1) popup_slider_window_g

0xa773,	// (0x00029f17) popup_slider_window_t1

0xa7b7,	// (0x00029f5b) small_volume_slider_vertical_pane

0x8340,	// (0x00027ae4) small_volume_slider_vertical_pane_g1

0x8340,	// (0x00027ae4) small_volume_slider_vertical_pane_g2

0xa7d3,	// (0x00029f77) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0f,	// (0x0002f4b3) small_volume_slider_vertical_pane_g

0xc377,	// (0x0002bb1b) area_side_right_pane_ParamLimits

0xc377,	// (0x0002bb1b) area_side_right_pane

0xd871,	// (0x0002d015) aid_size_side_button_ParamLimits

0xd871,	// (0x0002d015) aid_size_side_button

0xd885,	// (0x0002d029) grid_sctrl_middle_pane_ParamLimits

0xd885,	// (0x0002d029) grid_sctrl_middle_pane

0xd8a1,	// (0x0002d045) sctrl_sk_bottom_pane

0xd8b2,	// (0x0002d056) sctrl_sk_top_pane

0xd8c4,	// (0x0002d068) aid_touch_sctrl_top

0x07ca,	// (0x0001ff6e) bg_sctrl_sk_pane_ParamLimits

0x07ca,	// (0x0001ff6e) bg_sctrl_sk_pane

0xd8d1,	// (0x0002d075) sctrl_sk_top_pane_g1

0xd8de,	// (0x0002d082) sctrl_sk_top_pane_t1

0xd8c4,	// (0x0002d068) aid_touch_sctrl_bottom

0x07ca,	// (0x0001ff6e) bg_sctrl_sk_pane_cp_ParamLimits

0x07ca,	// (0x0001ff6e) bg_sctrl_sk_pane_cp

0xd8f9,	// (0x0002d09d) sctrl_sk_bottom_pane_g1

0xd8de,	// (0x0002d082) sctrl_sk_bottom_pane_t1

0xd902,	// (0x0002d0a6) cell_sctrl_middle_pane_ParamLimits

0xd902,	// (0x0002d0a6) cell_sctrl_middle_pane

0xd91d,	// (0x0002d0c1) aid_touch_sctrl_middle_ParamLimits

0xd91d,	// (0x0002d0c1) aid_touch_sctrl_middle

0x12c8,	// (0x00020a6c) bg_sctrl_middle_pane_ParamLimits

0x12c8,	// (0x00020a6c) bg_sctrl_middle_pane

0x8588,	// (0x00027d2c) cell_sctrl_middle_pane_g1_ParamLimits

0x8588,	// (0x00027d2c) cell_sctrl_middle_pane_g1

0xd92e,	// (0x0002d0d2) cell_sctrl_middle_pane_g2_ParamLimits

0xd92e,	// (0x0002d0d2) cell_sctrl_middle_pane_g2

0x0001,

0xfd1b,	// (0x0002f4bf) cell_sctrl_middle_pane_g_ParamLimits

0xfd1b,	// (0x0002f4bf) cell_sctrl_middle_pane_g

0x4a96,	// (0x0002423a) bg_sctrl_middle_pane_g1

0x4aa6,	// (0x0002424a) bg_sctrl_middle_pane_g2

0x4a9e,	// (0x00024242) bg_sctrl_middle_pane_g3

0x4ab6,	// (0x0002425a) bg_sctrl_middle_pane_g4

0x4aae,	// (0x00024252) bg_sctrl_middle_pane_g5

0x4abe,	// (0x00024262) bg_sctrl_middle_pane_g6

0x4ac6,	// (0x0002426a) bg_sctrl_middle_pane_g7

0x4ad6,	// (0x0002427a) bg_sctrl_middle_pane_g8

0x0007,

0xfd20,	// (0x0002f4c4) bg_sctrl_middle_pane_g

0x4ace,	// (0x00024272) bg_sctrl_middle_pane_g8_copy1

0x4a96,	// (0x0002423a) bg_sctrl_sk_pane_g1

0x4aa6,	// (0x0002424a) bg_sctrl_sk_pane_g2

0x4a9e,	// (0x00024242) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0002f043) bg_sctrl_sk_pane_g

0x0b53,	// (0x000202f7) aid_size_touch_scroll_bar

0x4ab6,	// (0x0002425a) bg_sctrl_sk_pane_g4

0x4aae,	// (0x00024252) bg_sctrl_sk_pane_g5

0x4abe,	// (0x00024262) bg_sctrl_sk_pane_g6

0x4ac6,	// (0x0002426a) bg_sctrl_sk_pane_g7

0x4ad6,	// (0x0002427a) bg_sctrl_sk_pane_g8

0x4ace,	// (0x00024272) bg_sctrl_sk_pane_g9

0x480c,	// (0x00023fb0) popup_fep_china_hwr2_fs_candidate_window

0x71b9,	// (0x0002695d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x71b9,	// (0x0002695d) popup_fep_china_hwr2_fs_control_window

0x8588,	// (0x00027d2c) sctrl_sk_top_pane_g2

0x0001,

0xfd16,	// (0x0002f4ba) sctrl_sk_top_pane_g

0xd944,	// (0x0002d0e8) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd944,	// (0x0002d0e8) aid_fep_china_hwr2_fs_cell

0xd955,	// (0x0002d0f9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd955,	// (0x0002d0f9) bg_popup_fep_shadow_pane_cp4

0xd96c,	// (0x0002d110) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd96c,	// (0x0002d110) bg_popup_fep_shadow_pane_cp5

0xd97e,	// (0x0002d122) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd97e,	// (0x0002d122) popup_fep_china_hwr2_fs_control_bar_grid

0xd98e,	// (0x0002d132) popup_fep_china_hwr2_fs_control_funtion_grid

0xa7dc,	// (0x00029f80) aid_fep_china_hwr2_fs_candi_cell

0x057b,	// (0x0001fd1f) bg_popup_fep_shadow_pane_cp6

0xa7e6,	// (0x00029f8a) popup_fep_china_hwr2_fs_candidate_grid

0xd996,	// (0x0002d13a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd996,	// (0x0002d13a) cell_fep_china_hwr2_fs_funtion_grid

0x8340,	// (0x00027ae4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xa7ee,	// (0x00029f92) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xa7ee,	// (0x00029f92) cell_fep_china_hwr2_fs_funtion_grid_g1

0xa7fc,	// (0x00029fa0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xa7fc,	// (0x00029fa0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd31,	// (0x0002f4d5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd31,	// (0x0002f4d5) cell_fep_china_hwr2_fs_funtion_grid_g

0xd9ae,	// (0x0002d152) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd9ae,	// (0x0002d152) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd9c3,	// (0x0002d167) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd9c3,	// (0x0002d167) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd36,	// (0x0002f4da) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd36,	// (0x0002f4da) cell_fep_china_hwr2_fs_funtion_grid_t

0xa812,	// (0x00029fb6) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xa81a,	// (0x00029fbe) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xa822,	// (0x00029fc6) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3b,	// (0x0002f4df) popup_fep_china_hwr2_fs_control_bar_grid_g

0xa82a,	// (0x00029fce) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xa82a,	// (0x00029fce) cell_fep_china_hwr2_fs_candidate_grid

0xa843,	// (0x00029fe7) popup_fep_china_hwr2_fs_candidate_grid_g20

0xa84b,	// (0x00029fef) popup_fep_china_hwr2_fs_candidate_grid_g21

0x8340,	// (0x00027ae4) cell_fep_china_hwr2_fs_candidate_grid_g1

0x8340,	// (0x00027ae4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb62,	// (0x0002f306) cell_fep_china_hwr2_fs_candidate_grid_g

0xa853,	// (0x00029ff7) cell_fep_china_hwr2_fs_candidate_grid_t1

0x48fb,	// (0x0002409f) clock_nsta_pane_cp_24_ParamLimits

0x48fb,	// (0x0002409f) clock_nsta_pane_cp_24

0x4958,	// (0x000240fc) indicator_nsta_pane_cp_24_ParamLimits

0x4958,	// (0x000240fc) indicator_nsta_pane_cp_24

0x55fc,	// (0x00024da0) heading_pane_g1

0x0001,

0xf904,	// (0x0002f0a8) heading_pane_g

0x7dee,	// (0x00027592) grid_sct_catagory_button_pane

0x5c7c,	// (0x00025420) scroll_pane_cp5_ParamLimits

0x7fed,	// (0x00027791) button_value_adjust_pane_cp5_ParamLimits

0x7fed,	// (0x00027791) button_value_adjust_pane_cp5

0x80ca,	// (0x0002786e) form2_midp_time_pane_ParamLimits

0xa861,	// (0x0002a005) cell_sct_catagory_button_pane_ParamLimits

0xa861,	// (0x0002a005) cell_sct_catagory_button_pane

0x8305,	// (0x00027aa9) bg_button_pane_cp01_ParamLimits

0x8305,	// (0x00027aa9) bg_button_pane_cp01

0x8340,	// (0x00027ae4) cell_sct_catagory_button_pane_g1

0x742c,	// (0x00026bd0) popup_tb_extension_window

0xd9df,	// (0x0002d183) aid_size_cell_ext_ParamLimits

0xd9df,	// (0x0002d183) aid_size_cell_ext

0x07ca,	// (0x0001ff6e) bg_tb_trans_pane_cp1_ParamLimits

0x07ca,	// (0x0001ff6e) bg_tb_trans_pane_cp1

0xd9ff,	// (0x0002d1a3) grid_tb_ext_pane_ParamLimits

0xd9ff,	// (0x0002d1a3) grid_tb_ext_pane

0xda25,	// (0x0002d1c9) cell_tb_ext_pane_ParamLimits

0xda25,	// (0x0002d1c9) cell_tb_ext_pane

0xda3a,	// (0x0002d1de) cell_tb_ext_pane_g1_ParamLimits

0xda3a,	// (0x0002d1de) cell_tb_ext_pane_g1

0xa873,	// (0x0002a017) cell_tb_ext_pane_t1

0x07ca,	// (0x0001ff6e) list_highlight_pane_cp11_ParamLimits

0x07ca,	// (0x0001ff6e) list_highlight_pane_cp11

0xc518,	// (0x0002bcbc) popup_uni_indicator_window_ParamLimits

0xc518,	// (0x0002bcbc) popup_uni_indicator_window

0x12c8,	// (0x00020a6c) bg_popup_sub_pane_cp14

0xa88e,	// (0x0002a032) list_uniindi_pane

0xa89a,	// (0x0002a03e) uniindi_top_pane

0x07ca,	// (0x0001ff6e) bg_uniindi_top_pane

0xa8b9,	// (0x0002a05d) uniindi_top_pane_g1

0xa8cf,	// (0x0002a073) uniindi_top_pane_g2

0x0003,

0xfd42,	// (0x0002f4e6) uniindi_top_pane_g

0xa8f9,	// (0x0002a09d) uniindi_top_pane_t1

0xa923,	// (0x0002a0c7) list_single_uniindi_pane_ParamLimits

0xa923,	// (0x0002a0c7) list_single_uniindi_pane

0x8340,	// (0x00027ae4) bg_uniindi_top_pane_g1

0xa935,	// (0x0002a0d9) list_single_uniindi_pane_g1

0xa948,	// (0x0002a0ec) list_single_uniindi_pane_t1

0x057b,	// (0x0001fd1f) control_bg_pane

0xa96d,	// (0x0002a111) bg_sctrl_sk_pane_cp1

0xa976,	// (0x0002a11a) bg_sctrl_sk_pane_cp2

0xa97f,	// (0x0002a123) control_bg_pane_g1

0xa988,	// (0x0002a12c) control_bg_pane_g2

0x0001,

0xfd4b,	// (0x0002f4ef) control_bg_pane_g

0x6ec8,	// (0x0002666c) cell_indicator_nsta_pane_g1_ParamLimits

0x7ee3,	// (0x00027687) cell_indicator_nsta_pane_g2_ParamLimits

0xfad3,	// (0x0002f277) cell_indicator_nsta_pane_g_ParamLimits

0xc080,	// (0x0002b824) form2_midp_time_pane_t1_ParamLimits

0x0a31,	// (0x000201d5) main_idle_act4_pane_ParamLimits

0x0a31,	// (0x000201d5) main_idle_act4_pane

0x742c,	// (0x00026bd0) popup_tb_extension_window_ParamLimits

0xda19,	// (0x0002d1bd) tb_ext_find_pane_ParamLimits

0xda19,	// (0x0002d1bd) tb_ext_find_pane

0xa991,	// (0x0002a135) ai_gene_pane_1_cp1

0x1d15,	// (0x000214b9) ai_gene_pane_2_cp1

0xa999,	// (0x0002a13d) list_single_idle_plugin_calendar_pane

0xa9a2,	// (0x0002a146) list_single_idle_plugin_notification_pane

0xa9ab,	// (0x0002a14f) list_single_idle_plugin_player_pane

0xda57,	// (0x0002d1fb) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda57,	// (0x0002d1fb) list_single_idle_plugin_shortcut_pane

0xda79,	// (0x0002d21d) main_idle_act4_pane_t1

0xda8b,	// (0x0002d22f) main_idle_act4_pane_t2

0x0001,

0xfd50,	// (0x0002f4f4) main_idle_act4_pane_t

0xda9d,	// (0x0002d241) middle_sk_idle_act4_pane_ParamLimits

0xda9d,	// (0x0002d241) middle_sk_idle_act4_pane

0xdab3,	// (0x0002d257) popup_clock_digital_analogue_window_cp2

0xdacd,	// (0x0002d271) shortcut_wheel_idle_act4_pane_ParamLimits

0xdacd,	// (0x0002d271) shortcut_wheel_idle_act4_pane

0x8340,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g1

0x8340,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g2

0x8340,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g3

0x8340,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g4

0x8340,	// (0x00027ae4) shortcut_wheel_idle_act4_pane_g5

0xa9b4,	// (0x0002a158) shortcut_wheel_idle_act4_pane_g6

0xa9bc,	// (0x0002a160) shortcut_wheel_idle_act4_pane_g7

0xa9c4,	// (0x0002a168) shortcut_wheel_idle_act4_pane_g8

0xa9cc,	// (0x0002a170) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd55,	// (0x0002f4f9) shortcut_wheel_idle_act4_pane_g

0x8588,	// (0x00027d2c) middle_sk_idle_act4_pane_g1_ParamLimits

0x8588,	// (0x00027d2c) middle_sk_idle_act4_pane_g1

0xdb3d,	// (0x0002d2e1) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb3d,	// (0x0002d2e1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd78,	// (0x0002f51c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd78,	// (0x0002f51c) middle_sk_idle_act4_pane_g

0xdb49,	// (0x0002d2ed) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb49,	// (0x0002d2ed) middle_sk_idle_act4_pane_t1

0xdb66,	// (0x0002d30a) grid_ai_shortcut_pane_ParamLimits

0xdb66,	// (0x0002d30a) grid_ai_shortcut_pane

0xdb7f,	// (0x0002d323) list_highlight_pane_cp16_ParamLimits

0xdb7f,	// (0x0002d323) list_highlight_pane_cp16

0xdb8c,	// (0x0002d330) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb8c,	// (0x0002d330) list_single_idle_plugin_shortcut_pane_g1

0xdb98,	// (0x0002d33c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb98,	// (0x0002d33c) list_single_idle_plugin_shortcut_pane_g2

0xdbb0,	// (0x0002d354) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbb0,	// (0x0002d354) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7d,	// (0x0002f521) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7d,	// (0x0002f521) list_single_idle_plugin_shortcut_pane_g

0xdbc3,	// (0x0002d367) cell_ai_shortcut_pane_ParamLimits

0xdbc3,	// (0x0002d367) cell_ai_shortcut_pane

0xdbe4,	// (0x0002d388) cell_ai_shortcut_pane_g1_ParamLimits

0xdbe4,	// (0x0002d388) cell_ai_shortcut_pane_g1

0xa991,	// (0x0002a135) ai_gene_pane_1_cp2

0xa9d4,	// (0x0002a178) ai_gene_pane_2_cp2

0xa9dc,	// (0x0002a180) list_highlight_pane_cp15

0xa9e5,	// (0x0002a189) list_single_idle_plugin_calendar_pane_g1

0xa9dc,	// (0x0002a180) list_highlight_pane_cp17

0xa9ed,	// (0x0002a191) list_single_idle_plugin_calendar_pane_g1_copy1

0xa9f5,	// (0x0002a199) list_single_idle_plugin_player_pane_g1

0x5e36,	// (0x000255da) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd84,	// (0x0002f528) list_single_idle_plugin_player_pane_g

0xa9fd,	// (0x0002a1a1) list_single_idle_plugin_player_pane_t1

0xaa0b,	// (0x0002a1af) list_single_idle_plugin_player_pane_t2

0xaa19,	// (0x0002a1bd) list_single_idle_plugin_player_pane_t3

0xaa27,	// (0x0002a1cb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd89,	// (0x0002f52d) list_single_idle_plugin_player_pane_t

0xaa35,	// (0x0002a1d9) wait_bar_pane_cp15

0xaa3d,	// (0x0002a1e1) grid_ai_notification_pane

0x5e36,	// (0x000255da) list_single_idle_plugin_notification_pane_g1

0xdc06,	// (0x0002d3aa) cell_ai_notification_pane_ParamLimits

0xdc06,	// (0x0002d3aa) cell_ai_notification_pane

0xaa46,	// (0x0002a1ea) cell_ai_notification_pane_g1

0xaa4e,	// (0x0002a1f2) cell_ai_notification_pane_t1

0xdc13,	// (0x0002d3b7) tb_ext_find_button_pane

0xdc1b,	// (0x0002d3bf) tb_ext_find_pane_g1

0xdc23,	// (0x0002d3c7) tb_ext_find_pane_t1

0x17d6,	// (0x00020f7a) tb_ext_find_button_pane_g1

0xaa5c,	// (0x0002a200) tb_ext_find_button_pane_g2

0x0001,

0xfd92,	// (0x0002f536) tb_ext_find_button_pane_g

0xda79,	// (0x0002d21d) main_idle_act4_pane_t1_ParamLimits

0xda8b,	// (0x0002d22f) main_idle_act4_pane_t2_ParamLimits

0xfd50,	// (0x0002f4f4) main_idle_act4_pane_t_ParamLimits

0xdab3,	// (0x0002d257) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdac1,	// (0x0002d265) sat_plugin_idle_act4_pane_ParamLimits

0xdac1,	// (0x0002d265) sat_plugin_idle_act4_pane

0xdc31,	// (0x0002d3d5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdc31,	// (0x0002d3d5) sat_plugin_idle_act4_pane_t1

0xdc44,	// (0x0002d3e8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdc44,	// (0x0002d3e8) sat_plugin_idle_act4_pane_t2

0xdc57,	// (0x0002d3fb) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdc57,	// (0x0002d3fb) sat_plugin_idle_act4_pane_t3

0xdc6a,	// (0x0002d40e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdc6a,	// (0x0002d40e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd97,	// (0x0002f53b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd97,	// (0x0002f53b) sat_plugin_idle_act4_pane_t

0xc479,	// (0x0002bc1d) popup_battery_window_ParamLimits

0xc479,	// (0x0002bc1d) popup_battery_window

0x07ca,	// (0x0001ff6e) bg_popup_sub_pane_cp25_ParamLimits

0x07ca,	// (0x0001ff6e) bg_popup_sub_pane_cp25

0xaa65,	// (0x0002a209) popup_battery_window_g1_ParamLimits

0xaa65,	// (0x0002a209) popup_battery_window_g1

0xaa71,	// (0x0002a215) popup_battery_window_t1_ParamLimits

0xaa71,	// (0x0002a215) popup_battery_window_t1

0xaa83,	// (0x0002a227) popup_battery_window_t2_ParamLimits

0xaa83,	// (0x0002a227) popup_battery_window_t2

0x0001,

0xfda0,	// (0x0002f544) popup_battery_window_t_ParamLimits

0xfda0,	// (0x0002f544) popup_battery_window_t

0x342b,	// (0x00022bcf) midp_canvas_pane_ParamLimits

0x3487,	// (0x00022c2b) midp_keypad_pane_ParamLimits

0x3487,	// (0x00022c2b) midp_keypad_pane

0x47d8,	// (0x00023f7c) main_midp_pane_ParamLimits

0x6f0d,	// (0x000266b1) signal_pane_g2_cp_ParamLimits

0xdc7d,	// (0x0002d421) aid_size_cell_midp_keypad_ParamLimits

0xdc7d,	// (0x0002d421) aid_size_cell_midp_keypad

0xdc97,	// (0x0002d43b) midp_keyp_game_grid_pane_ParamLimits

0xdc97,	// (0x0002d43b) midp_keyp_game_grid_pane

0xdcb1,	// (0x0002d455) midp_keyp_rocker_pane_ParamLimits

0xdcb1,	// (0x0002d455) midp_keyp_rocker_pane

0xdcde,	// (0x0002d482) midp_keyp_sk_left_pane_ParamLimits

0xdcde,	// (0x0002d482) midp_keyp_sk_left_pane

0xdd36,	// (0x0002d4da) midp_keyp_sk_right_pane_ParamLimits

0xdd36,	// (0x0002d4da) midp_keyp_sk_right_pane

0x057b,	// (0x0001fd1f) bg_button_pane_cp03

0xdd88,	// (0x0002d52c) midp_keyp_sk_left_pane_g1

0x057b,	// (0x0001fd1f) bg_button_pane_cp04

0xdd88,	// (0x0002d52c) midp_keyp_sk_right_pane_g1

0x8340,	// (0x00027ae4) midp_keyp_rocker_pane_g1

0xdd91,	// (0x0002d535) keyp_game_cell_pane_ParamLimits

0xdd91,	// (0x0002d535) keyp_game_cell_pane

0x057b,	// (0x0001fd1f) bg_button_pane_cp02

0xdda2,	// (0x0002d546) keyp_game_cell_pane_g1

0xc4af,	// (0x0002bc53) popup_fep_vkb2_window_ParamLimits

0xc4af,	// (0x0002bc53) popup_fep_vkb2_window

0xddb9,	// (0x0002d55d) aid_size_cell_vkb2_ParamLimits

0xddb9,	// (0x0002d55d) aid_size_cell_vkb2

0xde0d,	// (0x0002d5b1) popup_fep_vkb2_window_g1_ParamLimits

0xde0d,	// (0x0002d5b1) popup_fep_vkb2_window_g1

0xde55,	// (0x0002d5f9) vkb2_area_bottom_pane_ParamLimits

0xde55,	// (0x0002d5f9) vkb2_area_bottom_pane

0xde8d,	// (0x0002d631) vkb2_area_keypad_pane_ParamLimits

0xde8d,	// (0x0002d631) vkb2_area_keypad_pane

0xdec5,	// (0x0002d669) vkb2_area_top_pane_ParamLimits

0xdec5,	// (0x0002d669) vkb2_area_top_pane

0xdf35,	// (0x0002d6d9) vkb2_top_entry_pane_ParamLimits

0xdf35,	// (0x0002d6d9) vkb2_top_entry_pane

0xdf5f,	// (0x0002d703) vkb2_top_grid_left_pane_ParamLimits

0xdf5f,	// (0x0002d703) vkb2_top_grid_left_pane

0xdf7d,	// (0x0002d721) vkb2_top_grid_right_pane_ParamLimits

0xdf7d,	// (0x0002d721) vkb2_top_grid_right_pane

0xdf9b,	// (0x0002d73f) vkb2_cell_keypad_pane_ParamLimits

0xdf9b,	// (0x0002d73f) vkb2_cell_keypad_pane

0xe04c,	// (0x0002d7f0) vkb2_area_bottom_grid_pane_ParamLimits

0xe04c,	// (0x0002d7f0) vkb2_area_bottom_grid_pane

0xe070,	// (0x0002d814) vkb2_area_bottom_pane_g1_ParamLimits

0xe070,	// (0x0002d814) vkb2_area_bottom_pane_g1

0xe094,	// (0x0002d838) vkb2_area_bottom_pane_g2_ParamLimits

0xe094,	// (0x0002d838) vkb2_area_bottom_pane_g2

0xe0c2,	// (0x0002d866) vkb2_area_bottom_pane_g3_ParamLimits

0xe0c2,	// (0x0002d866) vkb2_area_bottom_pane_g3

0x0002,

0xfda5,	// (0x0002f549) vkb2_area_bottom_pane_g_ParamLimits

0xfda5,	// (0x0002f549) vkb2_area_bottom_pane_g

0xe113,	// (0x0002d8b7) vkb2_top_cell_left_pane_ParamLimits

0xe113,	// (0x0002d8b7) vkb2_top_cell_left_pane

0xe133,	// (0x0002d8d7) vkb2_top_entry_pane_g1_ParamLimits

0xe133,	// (0x0002d8d7) vkb2_top_entry_pane_g1

0xe141,	// (0x0002d8e5) vkb2_top_entry_pane_t1_ParamLimits

0xe141,	// (0x0002d8e5) vkb2_top_entry_pane_t1

0xaaa8,	// (0x0002a24c) vkb2_top_entry_pane_t2_ParamLimits

0xaaa8,	// (0x0002a24c) vkb2_top_entry_pane_t2

0xaada,	// (0x0002a27e) vkb2_top_entry_pane_t3_ParamLimits

0xaada,	// (0x0002a27e) vkb2_top_entry_pane_t3

0x0002,

0xfdac,	// (0x0002f550) vkb2_top_entry_pane_t_ParamLimits

0xfdac,	// (0x0002f550) vkb2_top_entry_pane_t

0xe1a0,	// (0x0002d944) vkb2_top_grid_right_pane_g1_ParamLimits

0xe1a0,	// (0x0002d944) vkb2_top_grid_right_pane_g1

0xe1b6,	// (0x0002d95a) vkb2_top_grid_right_pane_g2_ParamLimits

0xe1b6,	// (0x0002d95a) vkb2_top_grid_right_pane_g2

0xe1ce,	// (0x0002d972) vkb2_top_grid_right_pane_g3_ParamLimits

0xe1ce,	// (0x0002d972) vkb2_top_grid_right_pane_g3

0xe1e6,	// (0x0002d98a) vkb2_top_grid_right_pane_g4_ParamLimits

0xe1e6,	// (0x0002d98a) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb3,	// (0x0002f557) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb3,	// (0x0002f557) vkb2_top_grid_right_pane_g

0xe1fc,	// (0x0002d9a0) vkb2_top_cell_left_pane_g1

0xe213,	// (0x0002d9b7) vkb2_cell_keypad_pane_g1_ParamLimits

0xe213,	// (0x0002d9b7) vkb2_cell_keypad_pane_g1

0xaaf0,	// (0x0002a294) vkb2_cell_keypad_pane_t1_ParamLimits

0xaaf0,	// (0x0002a294) vkb2_cell_keypad_pane_t1

0xe221,	// (0x0002d9c5) vkb2_cell_bottom_grid_pane_ParamLimits

0xe221,	// (0x0002d9c5) vkb2_cell_bottom_grid_pane

0xe25a,	// (0x0002d9fe) vkb2_cell_bottom_grid_pane_g1

0xdae1,	// (0x0002d285) aid_call2_pane_cp02

0xdae9,	// (0x0002d28d) aid_call_pane_cp02

0xdaf1,	// (0x0002d295) clock_digital_number_pane_cp10

0xdaf9,	// (0x0002d29d) clock_digital_number_pane_cp11

0xdb01,	// (0x0002d2a5) clock_digital_number_pane_cp12

0xdb09,	// (0x0002d2ad) clock_digital_number_pane_cp13

0xdb11,	// (0x0002d2b5) clock_digital_separator_pane_cp10

0x17d6,	// (0x00020f7a) popup_clock_digital_analogue_window_cp2_g1

0x17d6,	// (0x00020f7a) popup_clock_digital_analogue_window_cp2_g2

0xdb19,	// (0x0002d2bd) popup_clock_digital_analogue_window_cp2_g3

0x17d6,	// (0x00020f7a) popup_clock_digital_analogue_window_cp2_g4

0xdb19,	// (0x0002d2bd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd68,	// (0x0002f50c) popup_clock_digital_analogue_window_cp2_g

0xdb21,	// (0x0002d2c5) popup_clock_digital_analogue_window_cp2_t1

0xdb2f,	// (0x0002d2d3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd73,	// (0x0002f517) popup_clock_digital_analogue_window_cp2_t

0x8340,	// (0x00027ae4) clock_digital_number_pane_cp10_g1

0x8340,	// (0x00027ae4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb62,	// (0x0002f306) clock_digital_number_pane_cp10_g

0x8340,	// (0x00027ae4) clock_digital_separator_pane_cp10_g1

0x8340,	// (0x00027ae4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb62,	// (0x0002f306) clock_digital_separator_pane_cp10_g

0xa8db,	// (0x0002a07f) uniindi_top_pane_g3

0xa8ec,	// (0x0002a090) uniindi_top_pane_g4

0xe006,	// (0x0002d7aa) vkb2_row_keypad_pane_ParamLimits

0xe006,	// (0x0002d7aa) vkb2_row_keypad_pane

0xe276,	// (0x0002da1a) vkb2_cell_t_keypad_pane_ParamLimits

0xe276,	// (0x0002da1a) vkb2_cell_t_keypad_pane

0xe283,	// (0x0002da27) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xe283,	// (0x0002da27) vkb2_cell_t_keypad_pane_cp08

0xe293,	// (0x0002da37) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xe293,	// (0x0002da37) vkb2_cell_t_keypad_pane_cp09

0xe2a4,	// (0x0002da48) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xe2a4,	// (0x0002da48) vkb2_cell_t_keypad_pane_cp01

0xe2b4,	// (0x0002da58) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xe2b4,	// (0x0002da58) vkb2_cell_t_keypad_pane_cp02

0xe2c4,	// (0x0002da68) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xe2c4,	// (0x0002da68) vkb2_cell_t_keypad_pane_cp03

0xe2d4,	// (0x0002da78) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xe2d4,	// (0x0002da78) vkb2_cell_t_keypad_pane_cp04

0xe2e4,	// (0x0002da88) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xe2e4,	// (0x0002da88) vkb2_cell_t_keypad_pane_cp05

0xe2f4,	// (0x0002da98) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xe2f4,	// (0x0002da98) vkb2_cell_t_keypad_pane_cp06

0xe304,	// (0x0002daa8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xe304,	// (0x0002daa8) vkb2_cell_t_keypad_pane_cp07

0xe314,	// (0x0002dab8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xe314,	// (0x0002dab8) vkb2_cell_t_keypad_pane_cp10

0x8588,	// (0x00027d2c) vkb2_cell_t_keypad_pane_g1

0xab07,	// (0x0002a2ab) vkb2_cell_t_keypad_pane_t1

0x057b,	// (0x0001fd1f) popup_grid_graphic2_window

0xe329,	// (0x0002dacd) aid_size_cell_graphic2_ParamLimits

0xe329,	// (0x0002dacd) aid_size_cell_graphic2

0x8493,	// (0x00027c37) bg_popup_window_pane_cp21_ParamLimits

0x8493,	// (0x00027c37) bg_popup_window_pane_cp21

0xe355,	// (0x0002daf9) graphic2_pages_pane_ParamLimits

0xe355,	// (0x0002daf9) graphic2_pages_pane

0xe38f,	// (0x0002db33) grid_graphic2_control_pane_ParamLimits

0xe38f,	// (0x0002db33) grid_graphic2_control_pane

0xe3b7,	// (0x0002db5b) grid_graphic2_pane_ParamLimits

0xe3b7,	// (0x0002db5b) grid_graphic2_pane

0xe407,	// (0x0002dbab) cell_graphic2_pane

0x057b,	// (0x0001fd1f) main_comp_mode_pane

0xa15d,	// (0x00029901) list_ai3_gene_pane_ParamLimits

0xd7f7,	// (0x0002cf9b) bg_popup_window_pane_cp19_ParamLimits

0xa6c7,	// (0x00029e6b) bg_touch_area_indi_pane_ParamLimits

0xa6c7,	// (0x00029e6b) bg_touch_area_indi_pane

0xa6dd,	// (0x00029e81) bg_touch_area_indi_pane_cp01_ParamLimits

0xa6dd,	// (0x00029e81) bg_touch_area_indi_pane_cp01

0xa6f3,	// (0x00029e97) bg_touch_area_indi_pane_cp02_ParamLimits

0xa6f3,	// (0x00029e97) bg_touch_area_indi_pane_cp02

0xa709,	// (0x00029ead) bg_touch_area_indi_pane_cp03_ParamLimits

0xa709,	// (0x00029ead) bg_touch_area_indi_pane_cp03

0xa71f,	// (0x00029ec3) popup_slider_window_g1_ParamLimits

0xa73b,	// (0x00029edf) popup_slider_window_g2_ParamLimits

0xa757,	// (0x00029efb) popup_slider_window_g3_ParamLimits

0xfcfd,	// (0x0002f4a1) popup_slider_window_g_ParamLimits

0xa773,	// (0x00029f17) popup_slider_window_t1_ParamLimits

0xa7b7,	// (0x00029f5b) small_volume_slider_vertical_pane_ParamLimits

0xe407,	// (0x0002dbab) cell_graphic2_pane_ParamLimits

0xe444,	// (0x0002dbe8) bg_button_pane_cp10_ParamLimits

0xe444,	// (0x0002dbe8) bg_button_pane_cp10

0xe455,	// (0x0002dbf9) bg_button_pane_cp11_ParamLimits

0xe455,	// (0x0002dbf9) bg_button_pane_cp11

0xe466,	// (0x0002dc0a) graphic2_pages_pane_g1_ParamLimits

0xe466,	// (0x0002dc0a) graphic2_pages_pane_g1

0xe479,	// (0x0002dc1d) graphic2_pages_pane_g2_ParamLimits

0xe479,	// (0x0002dc1d) graphic2_pages_pane_g2

0x0001,

0xfdc1,	// (0x0002f565) graphic2_pages_pane_g_ParamLimits

0xfdc1,	// (0x0002f565) graphic2_pages_pane_g

0xe48f,	// (0x0002dc33) graphic2_pages_pane_t1_ParamLimits

0xe48f,	// (0x0002dc33) graphic2_pages_pane_t1

0xe4a5,	// (0x0002dc49) cell_graphic2_control_pane_ParamLimits

0xe4a5,	// (0x0002dc49) cell_graphic2_control_pane

0xe4bf,	// (0x0002dc63) cell_graphic2_pane_g1_ParamLimits

0xe4bf,	// (0x0002dc63) cell_graphic2_pane_g1

0xe4cc,	// (0x0002dc70) cell_graphic2_pane_g2_ParamLimits

0xe4cc,	// (0x0002dc70) cell_graphic2_pane_g2

0xe4d9,	// (0x0002dc7d) cell_graphic2_pane_g3_ParamLimits

0xe4d9,	// (0x0002dc7d) cell_graphic2_pane_g3

0xe4e6,	// (0x0002dc8a) cell_graphic2_pane_g4_ParamLimits

0xe4e6,	// (0x0002dc8a) cell_graphic2_pane_g4

0xe4f3,	// (0x0002dc97) cell_graphic2_pane_g5_ParamLimits

0xe4f3,	// (0x0002dc97) cell_graphic2_pane_g5

0x0004,

0xfdc6,	// (0x0002f56a) cell_graphic2_pane_g_ParamLimits

0xfdc6,	// (0x0002f56a) cell_graphic2_pane_g

0xe50e,	// (0x0002dcb2) cell_graphic2_pane_t1_ParamLimits

0xe50e,	// (0x0002dcb2) cell_graphic2_pane_t1

0x4b84,	// (0x00024328) grid_highlight_pane_cp11_ParamLimits

0x4b84,	// (0x00024328) grid_highlight_pane_cp11

0x12c8,	// (0x00020a6c) bg_button_pane_cp05

0xe524,	// (0x0002dcc8) cell_graphic2_control_pane_g1

0x8340,	// (0x00027ae4) bg_touch_area_indi_pane_g1

0xab19,	// (0x0002a2bd) aid_cmod_rocker_key_size

0xab23,	// (0x0002a2c7) aid_cmode_itu_key_size

0xab2d,	// (0x0002a2d1) main_cmode_video_pane

0xab35,	// (0x0002a2d9) main_comp_mode_itu_pane

0xab3f,	// (0x0002a2e3) main_comp_mode_rocker_pane

0xab47,	// (0x0002a2eb) cell_cmode_rocker_pane_ParamLimits

0xab47,	// (0x0002a2eb) cell_cmode_rocker_pane

0xab59,	// (0x0002a2fd) cell_cmode_itu_pane_ParamLimits

0xab59,	// (0x0002a2fd) cell_cmode_itu_pane

0x12c8,	// (0x00020a6c) bg_button_pane_cp06_ParamLimits

0x12c8,	// (0x00020a6c) bg_button_pane_cp06

0x8588,	// (0x00027d2c) cell_cmode_rocker_pane_g1_ParamLimits

0x8588,	// (0x00027d2c) cell_cmode_rocker_pane_g1

0xa7ee,	// (0x00029f92) cell_cmode_rocker_pane_g2_ParamLimits

0xa7ee,	// (0x00029f92) cell_cmode_rocker_pane_g2

0x0001,

0xfdd1,	// (0x0002f575) cell_cmode_rocker_pane_g_ParamLimits

0xfdd1,	// (0x0002f575) cell_cmode_rocker_pane_g

0x057b,	// (0x0001fd1f) bg_button_pane_cp07

0xab6e,	// (0x0002a312) cell_cmode_itu_pane_g1

0xab77,	// (0x0002a31b) cell_cmode_itu_pane_t1

0xab85,	// (0x0002a329) cell_cmode_itu_pane_t2

0x0001,

0xfdd6,	// (0x0002f57a) cell_cmode_itu_pane_t

0xa95d,	// (0x0002a101) aid_touch_ctrl_left

0xa965,	// (0x0002a109) aid_touch_ctrl_right

0x057b,	// (0x0001fd1f) compa_mode_pane

0xe531,	// (0x0002dcd5) aid_cmod_rocker_key_size_cp

0xe53b,	// (0x0002dcdf) aid_cmode_itu_key_size_cp

0xab93,	// (0x0002a337) compa_mode_pane_g1

0xab9b,	// (0x0002a33f) compa_mode_pane_g2

0xaba3,	// (0x0002a347) compa_mode_pane_g3

0x0002,

0xfddb,	// (0x0002f57f) compa_mode_pane_g

0xe545,	// (0x0002dce9) main_comp_mode_itu_pane_cp

0xe54d,	// (0x0002dcf1) main_comp_mode_rocker_pane_cp

0xe555,	// (0x0002dcf9) cell_cmode_itu_pane_cp_ParamLimits

0xe555,	// (0x0002dcf9) cell_cmode_itu_pane_cp

0xe56a,	// (0x0002dd0e) cell_cmode_rocker_pane_cp_ParamLimits

0xe56a,	// (0x0002dd0e) cell_cmode_rocker_pane_cp

0x12c8,	// (0x00020a6c) bg_button_pane_cp06_cp_ParamLimits

0x12c8,	// (0x00020a6c) bg_button_pane_cp06_cp

0x8588,	// (0x00027d2c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x8588,	// (0x00027d2c) cell_cmode_rocker_pane_g1_cp

0x8340,	// (0x00027ae4) cell_cmode_rocker_pane_g2_cp

0x057b,	// (0x0001fd1f) bg_button_pane_cp07_cp

0xe57c,	// (0x0002dd20) cell_cmode_itu_pane_g1_cp

0xe585,	// (0x0002dd29) cell_cmode_itu_pane_t1_cp

0xe593,	// (0x0002dd37) cell_cmode_itu_pane_t2_cp

0x7cfc,	// (0x000274a0) settings_code_pane_cp2

0x066b,	// (0x0001fe0f) bg_popup_window_pane_cp3_ParamLimits

0x09a2,	// (0x00020146) heading_pane_cp3_ParamLimits

0x09ae,	// (0x00020152) listscroll_popup_graphic_pane_ParamLimits

0xd0e4,	// (0x0002c888) fep_hwr_aid_pane_ParamLimits

0xd8c4,	// (0x0002d068) aid_touch_sctrl_top_ParamLimits

0xd8d1,	// (0x0002d075) sctrl_sk_top_pane_g1_ParamLimits

0x8588,	// (0x00027d2c) sctrl_sk_top_pane_g2_ParamLimits

0xfd16,	// (0x0002f4ba) sctrl_sk_top_pane_g_ParamLimits

0xd8de,	// (0x0002d082) sctrl_sk_top_pane_t1_ParamLimits

0xd8c4,	// (0x0002d068) aid_touch_sctrl_bottom_ParamLimits

0xd8de,	// (0x0002d082) sctrl_sk_bottom_pane_t1_ParamLimits

0xa8a7,	// (0x0002a04b) aid_area_touch_clock

0xdefd,	// (0x0002d6a1) aid_vkb2_area_top_pane_cell_ParamLimits

0xdefd,	// (0x0002d6a1) aid_vkb2_area_top_pane_cell

0xe028,	// (0x0002d7cc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe028,	// (0x0002d7cc) aid_vkb2_area_bottom_pane_cell

0xaaa0,	// (0x0002a244) popup_char_count_window

0xabab,	// (0x0002a34f) popup_char_count_window_g1

0xabb4,	// (0x0002a358) popup_char_count_window_g2

0xabbd,	// (0x0002a361) popup_char_count_window_g3

0x0002,

0xfde2,	// (0x0002f586) popup_char_count_window_g

0xabc6,	// (0x0002a36a) popup_char_count_window_t1

0xddeb,	// (0x0002d58f) popup_fep_char_preview_window_ParamLimits

0xddeb,	// (0x0002d58f) popup_fep_char_preview_window

0xdf1b,	// (0x0002d6bf) vkb2_top_candi_pane_ParamLimits

0xdf1b,	// (0x0002d6bf) vkb2_top_candi_pane

0xe5a1,	// (0x0002dd45) cell_vkb2_top_candi_pane_ParamLimits

0xe5a1,	// (0x0002dd45) cell_vkb2_top_candi_pane

0x4ffc,	// (0x000247a0) bg_popup_fep_char_preview_window_ParamLimits

0x4ffc,	// (0x000247a0) bg_popup_fep_char_preview_window

0xe5da,	// (0x0002dd7e) popup_fep_char_preview_window_t1_ParamLimits

0xe5da,	// (0x0002dd7e) popup_fep_char_preview_window_t1

0xac05,	// (0x0002a3a9) bg_popup_fep_char_preview_window_g1

0xabfd,	// (0x0002a3a1) bg_popup_fep_char_preview_window_g2

0xabf5,	// (0x0002a399) bg_popup_fep_char_preview_window_g3

0xac25,	// (0x0002a3c9) bg_popup_fep_char_preview_window_g4

0xac1d,	// (0x0002a3c1) bg_popup_fep_char_preview_window_g5

0xe614,	// (0x0002ddb8) bg_popup_fep_char_preview_window_g6

0xac15,	// (0x0002a3b9) bg_popup_fep_char_preview_window_g7

0xac0d,	// (0x0002a3b1) bg_popup_fep_char_preview_window_g8

0xac2d,	// (0x0002a3d1) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde9,	// (0x0002f58d) bg_popup_fep_char_preview_window_g

0x8588,	// (0x00027d2c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x8588,	// (0x00027d2c) cell_vkb2_top_candi_pane_g1

0x88aa,	// (0x0002804e) cell_vkb2_top_candi_pane_g2_ParamLimits

0x88aa,	// (0x0002804e) cell_vkb2_top_candi_pane_g2

0x88cb,	// (0x0002806f) cell_vkb2_top_candi_pane_g3_ParamLimits

0x88cb,	// (0x0002806f) cell_vkb2_top_candi_pane_g3

0xe61c,	// (0x0002ddc0) cell_vkb2_top_candi_pane_g4_ParamLimits

0xe61c,	// (0x0002ddc0) cell_vkb2_top_candi_pane_g4

0xabd4,	// (0x0002a378) cell_vkb2_top_candi_pane_g5_ParamLimits

0xabd4,	// (0x0002a378) cell_vkb2_top_candi_pane_g5

0xa7ee,	// (0x00029f92) cell_vkb2_top_candi_pane_g6_ParamLimits

0xa7ee,	// (0x00029f92) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfc,	// (0x0002f5a0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfc,	// (0x0002f5a0) cell_vkb2_top_candi_pane_g

0xe63d,	// (0x0002dde1) cell_vkb2_top_candi_pane_t1

0x6169,	// (0x0002590d) aid_size_touch_slider_mark_ParamLimits

0x6169,	// (0x0002590d) aid_size_touch_slider_mark

0xe383,	// (0x0002db27) grid_graphic2_catg_pane_ParamLimits

0xe383,	// (0x0002db27) grid_graphic2_catg_pane

0xe3e3,	// (0x0002db87) popup_grid_graphic2_window_t1_ParamLimits

0xe3e3,	// (0x0002db87) popup_grid_graphic2_window_t1

0xe3f5,	// (0x0002db99) popup_grid_graphic2_window_t2_ParamLimits

0xe3f5,	// (0x0002db99) popup_grid_graphic2_window_t2

0x0001,

0xfdbc,	// (0x0002f560) popup_grid_graphic2_window_t_ParamLimits

0xfdbc,	// (0x0002f560) popup_grid_graphic2_window_t

0x12c8,	// (0x00020a6c) bg_button_pane_cp05_ParamLimits

0xe524,	// (0x0002dcc8) cell_graphic2_control_pane_g1_ParamLimits

0xe653,	// (0x0002ddf7) cell_graphic2_catg_pane_ParamLimits

0xe653,	// (0x0002ddf7) cell_graphic2_catg_pane

0x057b,	// (0x0001fd1f) bg_button_pane_cp12

0xe665,	// (0x0002de09) cell_graphic2_catg_pane_g1

0xa873,	// (0x0002a017) cell_tb_ext_pane_t1_ParamLimits

0xe173,	// (0x0002d917) vkb2_top_cell_right_narrow_pane_ParamLimits

0xe173,	// (0x0002d917) vkb2_top_cell_right_narrow_pane

0xe18b,	// (0x0002d92f) vkb2_top_cell_right_wide_pane_ParamLimits

0xe18b,	// (0x0002d92f) vkb2_top_cell_right_wide_pane

0x8493,	// (0x00027c37) bg_vkb2_func_pane_ParamLimits

0x8493,	// (0x00027c37) bg_vkb2_func_pane

0xe1fc,	// (0x0002d9a0) vkb2_top_cell_left_pane_g1_ParamLimits

0x8493,	// (0x00027c37) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8493,	// (0x00027c37) bg_vkb2_fuc_pane_cp03

0xe25a,	// (0x0002d9fe) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4aa6,	// (0x0002424a) bg_vkb2_func_pane_g1

0x4a9e,	// (0x00024242) bg_vkb2_func_pane_g2

0x4aae,	// (0x00024252) bg_vkb2_func_pane_g3

0x4ab6,	// (0x0002425a) bg_vkb2_func_pane_g4

0x4abe,	// (0x00024262) bg_vkb2_func_pane_g5

0x4ac6,	// (0x0002426a) bg_vkb2_func_pane_g6

0x4ad6,	// (0x0002427a) bg_vkb2_func_pane_g7

0x4ace,	// (0x00024272) bg_vkb2_func_pane_g8

0x4a96,	// (0x0002423a) bg_vkb2_func_pane_g9

0x0008,

0xfe09,	// (0x0002f5ad) bg_vkb2_func_pane_g

0x8493,	// (0x00027c37) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8493,	// (0x00027c37) bg_vkb2_fuc_pane_cp01

0xe1fc,	// (0x0002d9a0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xe1fc,	// (0x0002d9a0) vkb2_top_cell_right_wide_pane_g1

0x8493,	// (0x00027c37) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8493,	// (0x00027c37) bg_vkb2_fuc_pane_cp02

0xe25a,	// (0x0002d9fe) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xe25a,	// (0x0002d9fe) vkb2_top_cell_right_narrow_pane_g1

0xd789,	// (0x0002cf2d) aid_touch_area_decrease_ParamLimits

0xd789,	// (0x0002cf2d) aid_touch_area_decrease

0xd7a1,	// (0x0002cf45) aid_touch_area_increase_ParamLimits

0xd7a1,	// (0x0002cf45) aid_touch_area_increase

0xd7ad,	// (0x0002cf51) aid_touch_area_mute_ParamLimits

0xd7ad,	// (0x0002cf51) aid_touch_area_mute

0xd7c9,	// (0x0002cf6d) aid_touch_area_slider_ParamLimits

0xd7c9,	// (0x0002cf6d) aid_touch_area_slider

0xd803,	// (0x0002cfa7) popup_slider_window_g4_ParamLimits

0xd803,	// (0x0002cfa7) popup_slider_window_g4

0xd80f,	// (0x0002cfb3) popup_slider_window_g5_ParamLimits

0xd80f,	// (0x0002cfb3) popup_slider_window_g5

0xd831,	// (0x0002cfd5) popup_slider_window_g6_ParamLimits

0xd831,	// (0x0002cfd5) popup_slider_window_g6

0xa79f,	// (0x00029f43) popup_slider_window_t2_ParamLimits

0xa79f,	// (0x00029f43) popup_slider_window_t2

0x0001,

0xfd0a,	// (0x0002f4ae) popup_slider_window_t_ParamLimits

0xfd0a,	// (0x0002f4ae) popup_slider_window_t

0xd843,	// (0x0002cfe7) slider_pane_ParamLimits

0xd843,	// (0x0002cfe7) slider_pane

0xac35,	// (0x0002a3d9) slider_pane_g1_ParamLimits

0xac35,	// (0x0002a3d9) slider_pane_g1

0xac49,	// (0x0002a3ed) slider_pane_g2_ParamLimits

0xac49,	// (0x0002a3ed) slider_pane_g2

0xac5f,	// (0x0002a403) slider_pane_g3_ParamLimits

0xac5f,	// (0x0002a403) slider_pane_g3

0x0003,

0xfe1c,	// (0x0002f5c0) slider_pane_g_ParamLimits

0xfe1c,	// (0x0002f5c0) slider_pane_g

0x747c,	// (0x00026c20) popup_tb_float_extension_window_ParamLimits

0x747c,	// (0x00026c20) popup_tb_float_extension_window

0xac8b,	// (0x0002a42f) aid_size_cell_tb_float_ext

0x057b,	// (0x0001fd1f) bg_popup_sub_window_cp28

0xac96,	// (0x0002a43a) grid_tb_float_ext_pane

0xac9e,	// (0x0002a442) cell_tb_float_ext_pane_ParamLimits

0xac9e,	// (0x0002a442) cell_tb_float_ext_pane

0xacb6,	// (0x0002a45a) cell_tb_float_ext_pane_g1

0xacbf,	// (0x0002a463) grid_highlight_pane_cp12

0xd211,	// (0x0002c9b5) cell_last_hwr_side_pane_ParamLimits

0xd211,	// (0x0002c9b5) cell_last_hwr_side_pane

0x8340,	// (0x00027ae4) cell_last_hwr_side_pane_g1

0xacc8,	// (0x0002a46c) cell_last_hwr_side_pane_g2

0x0001,

0xfe25,	// (0x0002f5c9) cell_last_hwr_side_pane_g

0xe0f0,	// (0x0002d894) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe0f0,	// (0x0002d894) vkb2_area_bottom_space_btn_pane

0x8588,	// (0x00027d2c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xab07,	// (0x0002a2ab) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xe63d,	// (0x0002dde1) cell_vkb2_top_candi_pane_t1_ParamLimits

0xe66e,	// (0x0002de12) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xe66e,	// (0x0002de12) vkb2_area_bottom_space_btn_pane_g1

0xe6a4,	// (0x0002de48) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xe6a4,	// (0x0002de48) vkb2_area_bottom_space_btn_pane_g2

0xe6da,	// (0x0002de7e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xe6da,	// (0x0002de7e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2a,	// (0x0002f5ce) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2a,	// (0x0002f5ce) vkb2_area_bottom_space_btn_pane_g

0xd185,	// (0x0002c929) cel_fep_hwr_func_pane_ParamLimits

0xd185,	// (0x0002c929) cel_fep_hwr_func_pane

0xd1c1,	// (0x0002c965) cell_hwr_side_button_pane_ParamLimits

0xd1c1,	// (0x0002c965) cell_hwr_side_button_pane

0xa8a7,	// (0x0002a04b) aid_area_touch_clock_ParamLimits

0x07ca,	// (0x0001ff6e) bg_uniindi_top_pane_ParamLimits

0xa8b9,	// (0x0002a05d) uniindi_top_pane_g1_ParamLimits

0xa8cf,	// (0x0002a073) uniindi_top_pane_g2_ParamLimits

0xa8db,	// (0x0002a07f) uniindi_top_pane_g3_ParamLimits

0xa8ec,	// (0x0002a090) uniindi_top_pane_g4_ParamLimits

0xfd42,	// (0x0002f4e6) uniindi_top_pane_g_ParamLimits

0xa8f9,	// (0x0002a09d) uniindi_top_pane_t1_ParamLimits

0x07ca,	// (0x0001ff6e) bg_vkb2_func_pane_cp01_ParamLimits

0x07ca,	// (0x0001ff6e) bg_vkb2_func_pane_cp01

0xe720,	// (0x0002dec4) cel_fep_hwr_func_pane_g1_ParamLimits

0xe720,	// (0x0002dec4) cel_fep_hwr_func_pane_g1

0x07ca,	// (0x0001ff6e) bg_vkb2_func_pane_cp02_ParamLimits

0x07ca,	// (0x0001ff6e) bg_vkb2_func_pane_cp02

0xe720,	// (0x0002dec4) cell_hwr_side_button_pane_g1_ParamLimits

0xe720,	// (0x0002dec4) cell_hwr_side_button_pane_g1

0x49ba,	// (0x0002415e) status_pane_g4_ParamLimits

0x49ba,	// (0x0002415e) status_pane_g4

0x49d2,	// (0x00024176) status_pane_t1

0x8132,	// (0x000278d6) form2_midp_gauge_slider_cont_pane

0x813a,	// (0x000278de) form2_midp_gauge_slider_pane_t1_ParamLimits

0x814c,	// (0x000278f0) form2_midp_gauge_slider_pane_t2_ParamLimits

0x815e,	// (0x00027902) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb15,	// (0x0002f2b9) form2_midp_gauge_slider_pane_t_ParamLimits

0x8170,	// (0x00027914) form2_midp_slider_pane_ParamLimits

0xddab,	// (0x0002d54f) aid_size_cell_func_vkb2_ParamLimits

0xddab,	// (0x0002d54f) aid_size_cell_func_vkb2

0xac77,	// (0x0002a41b) slider_pane_g4_ParamLimits

0xac77,	// (0x0002a41b) slider_pane_g4

0xe72e,	// (0x0002ded2) form2_midp_gauge_slider_pane_t2_cp01

0xe73c,	// (0x0002dee0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe73c,	// (0x0002dee0) form2_midp_gauge_slider_pane_t3_cp01

0xe759,	// (0x0002defd) form2_midp_slider_pane_cp01

0x057b,	// (0x0001fd1f) navi_smil_pane

0xe78d,	// (0x0002df31) navi_smil_pane_g1

0xe795,	// (0x0002df39) navi_smil_pane_t1

0xe762,	// (0x0002df06) form2_midp_slider_pane_g1

0xe76b,	// (0x0002df0f) form2_midp_slider_pane_g2

0xe773,	// (0x0002df17) form2_midp_slider_pane_g3

0xe762,	// (0x0002df06) form2_midp_slider_pane_g4

0xe77b,	// (0x0002df1f) form2_midp_slider_pane_g5

0x0004,

0xfe33,	// (0x0002f5d7) form2_midp_slider_pane_g

0xe710,	// (0x0002deb4) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xe710,	// (0x0002deb4) vkb2_area_bottom_space_btn_pane_g4

0x75bd,	// (0x00026d61) lc0_navi_pane_ParamLimits

0x75bd,	// (0x00026d61) lc0_navi_pane

0x7633,	// (0x00026dd7) lc0_stat_indi_pane_ParamLimits

0x7633,	// (0x00026dd7) lc0_stat_indi_pane

0x764a,	// (0x00026dee) ls0_title_pane_ParamLimits

0x764a,	// (0x00026dee) ls0_title_pane

0x12c8,	// (0x00020a6c) bg_popup_sub_pane_cp14_ParamLimits

0xa88e,	// (0x0002a032) list_uniindi_pane_ParamLimits

0xa89a,	// (0x0002a03e) uniindi_top_pane_ParamLimits

0xa935,	// (0x0002a0d9) list_single_uniindi_pane_g1_ParamLimits

0xa948,	// (0x0002a0ec) list_single_uniindi_pane_t1_ParamLimits

0xe7a3,	// (0x0002df47) lc0_stat_clock_pane_ParamLimits

0xe7a3,	// (0x0002df47) lc0_stat_clock_pane

0xe7b0,	// (0x0002df54) lc0_stat_indi_pane_g1_ParamLimits

0xe7b0,	// (0x0002df54) lc0_stat_indi_pane_g1

0xe7bd,	// (0x0002df61) lc0_stat_indi_pane_g2_ParamLimits

0xe7bd,	// (0x0002df61) lc0_stat_indi_pane_g2

0x0001,

0xfe3e,	// (0x0002f5e2) lc0_stat_indi_pane_g_ParamLimits

0xfe3e,	// (0x0002f5e2) lc0_stat_indi_pane_g

0xe7ca,	// (0x0002df6e) lc0_uni_indicator_pane_ParamLimits

0xe7ca,	// (0x0002df6e) lc0_uni_indicator_pane

0xe7d7,	// (0x0002df7b) ls0_title_pane_g1_ParamLimits

0xe7d7,	// (0x0002df7b) ls0_title_pane_g1

0xe7eb,	// (0x0002df8f) ls0_title_pane_t1_ParamLimits

0xe7eb,	// (0x0002df8f) ls0_title_pane_t1

0xe821,	// (0x0002dfc5) lc0_uni_indicator_pane_g1_ParamLimits

0xe821,	// (0x0002dfc5) lc0_uni_indicator_pane_g1

0xe833,	// (0x0002dfd7) lc0_stat_clock_pane_t1

0x057b,	// (0x0001fd1f) main_ai5_pane

0xe841,	// (0x0002dfe5) ai5_sk_pane_ParamLimits

0xe841,	// (0x0002dfe5) ai5_sk_pane

0xe84e,	// (0x0002dff2) cell_ai5_widget_pane_ParamLimits

0xe84e,	// (0x0002dff2) cell_ai5_widget_pane

0xe8a9,	// (0x0002e04d) aid_size_cell_widget_grid

0xe8bb,	// (0x0002e05f) bg_ai5_widget_pane_ParamLimits

0xe8bb,	// (0x0002e05f) bg_ai5_widget_pane

0xe8e3,	// (0x0002e087) cell_ai5_widget_pane_g2

0xe8f3,	// (0x0002e097) cell_ai5_widget_pane_g3

0xe907,	// (0x0002e0ab) cell_ai5_widget_pane_g4

0xe913,	// (0x0002e0b7) cell_ai5_widget_pane_g5

0xe91f,	// (0x0002e0c3) cell_ai5_widget_pane_g6

0xe92b,	// (0x0002e0cf) cell_ai5_widget_pane_g7

0xe973,	// (0x0002e117) cell_ai5_widget_pane_t1_ParamLimits

0xe973,	// (0x0002e117) cell_ai5_widget_pane_t1

0xe990,	// (0x0002e134) cell_ai5_widget_pane_t2_ParamLimits

0xe990,	// (0x0002e134) cell_ai5_widget_pane_t2

0xe9a8,	// (0x0002e14c) cell_ai5_widget_pane_t3_ParamLimits

0xe9a8,	// (0x0002e14c) cell_ai5_widget_pane_t3

0xe9c0,	// (0x0002e164) cell_ai5_widget_pane_t4_ParamLimits

0xe9c0,	// (0x0002e164) cell_ai5_widget_pane_t4

0xe9da,	// (0x0002e17e) cell_ai5_widget_pane_t5_ParamLimits

0xe9da,	// (0x0002e17e) cell_ai5_widget_pane_t5

0xe9f9,	// (0x0002e19d) cell_ai5_widget_pane_t6_ParamLimits

0xe9f9,	// (0x0002e19d) cell_ai5_widget_pane_t6

0xea0b,	// (0x0002e1af) cell_ai5_widget_pane_t7_ParamLimits

0xea0b,	// (0x0002e1af) cell_ai5_widget_pane_t7

0xea24,	// (0x0002e1c8) cell_ai5_widget_pane_t8_ParamLimits

0xea24,	// (0x0002e1c8) cell_ai5_widget_pane_t8

0x0009,

0xfe58,	// (0x0002f5fc) cell_ai5_widget_pane_t_ParamLimits

0xfe58,	// (0x0002f5fc) cell_ai5_widget_pane_t

0xea6c,	// (0x0002e210) grid_ai5_widget_pane

0x12c8,	// (0x00020a6c) highlight_cell_ai5_widget_pane_ParamLimits

0x12c8,	// (0x00020a6c) highlight_cell_ai5_widget_pane

0xea82,	// (0x0002e226) ai5_sk_left_pane

0xea8c,	// (0x0002e230) ai5_sk_middle_pane

0xea96,	// (0x0002e23a) ai5_sk_right_pane

0xeaa0,	// (0x0002e244) bg_ai5_widget_pane_g1_ParamLimits

0xeaa0,	// (0x0002e244) bg_ai5_widget_pane_g1

0xeaac,	// (0x0002e250) bg_ai5_widget_pane_g2_ParamLimits

0xeaac,	// (0x0002e250) bg_ai5_widget_pane_g2

0xeab8,	// (0x0002e25c) bg_ai5_widget_pane_g3_ParamLimits

0xeab8,	// (0x0002e25c) bg_ai5_widget_pane_g3

0xeac4,	// (0x0002e268) bg_ai5_widget_pane_g4_ParamLimits

0xeac4,	// (0x0002e268) bg_ai5_widget_pane_g4

0xead0,	// (0x0002e274) bg_ai5_widget_pane_g5_ParamLimits

0xead0,	// (0x0002e274) bg_ai5_widget_pane_g5

0xeadc,	// (0x0002e280) bg_ai5_widget_pane_g6_ParamLimits

0xeadc,	// (0x0002e280) bg_ai5_widget_pane_g6

0xeae8,	// (0x0002e28c) bg_ai5_widget_pane_g7_ParamLimits

0xeae8,	// (0x0002e28c) bg_ai5_widget_pane_g7

0xeaf4,	// (0x0002e298) bg_ai5_widget_pane_g8_ParamLimits

0xeaf4,	// (0x0002e298) bg_ai5_widget_pane_g8

0xeb00,	// (0x0002e2a4) bg_ai5_widget_pane_g9_ParamLimits

0xeb00,	// (0x0002e2a4) bg_ai5_widget_pane_g9

0x0008,

0xfe6d,	// (0x0002f611) bg_ai5_widget_pane_g_ParamLimits

0xfe6d,	// (0x0002f611) bg_ai5_widget_pane_g

0xeb28,	// (0x0002e2cc) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb28,	// (0x0002e2cc) cell_shortcut_ai5_widget_pane

0x06d3,	// (0x0001fe77) bg_cell_shortcut_ai5_widget_pane

0xeb3a,	// (0x0002e2de) cell_grid_ai5_widget_pane_g1

0xeb43,	// (0x0002e2e7) highlight_cell_shortcut_ai5_widget_pane

0x4a9e,	// (0x00024242) ai5_sk_left_pane_g1

0xeb4b,	// (0x0002e2ef) ai5_sk_left_pane_g2

0xeb53,	// (0x0002e2f7) ai5_sk_left_pane_g3

0xeb5b,	// (0x0002e2ff) ai5_sk_left_pane_g4

0x0003,

0xfe80,	// (0x0002f624) ai5_sk_left_pane_g

0xeb63,	// (0x0002e307) ai5_sk_left_pane_t1

0x4aa6,	// (0x0002424a) ai5_sk_right_pane_g1

0xeb71,	// (0x0002e315) ai5_sk_right_pane_g2

0xeb79,	// (0x0002e31d) ai5_sk_right_pane_g3

0xeb81,	// (0x0002e325) ai5_sk_right_pane_g4

0x0003,

0xfe89,	// (0x0002f62d) ai5_sk_right_pane_g

0xeb89,	// (0x0002e32d) ai5_sk_right_pane_t1

0x4aa6,	// (0x0002424a) ai5_sk_middle_pane_g1

0x4a9e,	// (0x00024242) ai5_sk_middle_pane_g2

0x4abe,	// (0x00024262) ai5_sk_middle_pane_g3

0xeb79,	// (0x0002e31d) ai5_sk_middle_pane_g4

0xeb53,	// (0x0002e2f7) ai5_sk_middle_pane_g5

0xeb97,	// (0x0002e33b) ai5_sk_middle_pane_g6

0xeb9f,	// (0x0002e343) ai5_sk_middle_pane_g7

0x0006,

0xfe92,	// (0x0002f636) ai5_sk_middle_pane_g

0x750a,	// (0x00026cae) aid_touch_area_size_lc0_ParamLimits

0x750a,	// (0x00026cae) aid_touch_area_size_lc0

0xd304,	// (0x0002caa8) cell_hwr_candidate_pane_t1_ParamLimits

0x48ef,	// (0x00024093) aid_touch_navi_pane

0x78f5,	// (0x00027099) status_dt_navi_pane_ParamLimits

0x78f5,	// (0x00027099) status_dt_navi_pane

0x7902,	// (0x000270a6) status_dt_sta_pane_ParamLimits

0x7902,	// (0x000270a6) status_dt_sta_pane

0xeba7,	// (0x0002e34b) dt_sta_controll_pane

0xebb4,	// (0x0002e358) dt_sta_indi_pane

0xebc5,	// (0x0002e369) dt_sta_title_pane

0x07ca,	// (0x0001ff6e) bg_dt_sta_indi_pane_ParamLimits

0x07ca,	// (0x0001ff6e) bg_dt_sta_indi_pane

0xebd8,	// (0x0002e37c) dt_sta_battery_pane

0xebe0,	// (0x0002e384) dt_sta_indi_pane_g1

0xebe9,	// (0x0002e38d) dt_sta_indi_pane_g2

0xebf2,	// (0x0002e396) dt_sta_indi_pane_g3

0x0002,

0xfea1,	// (0x0002f645) dt_sta_indi_pane_g

0xebfb,	// (0x0002e39f) dt_sta_signal_pane

0x12c8,	// (0x00020a6c) bg_dt_sta_title_pane_ParamLimits

0x12c8,	// (0x00020a6c) bg_dt_sta_title_pane

0xec04,	// (0x0002e3a8) dt_sta_title_pane_g1

0xec0c,	// (0x0002e3b0) dt_sta_title_pane_t1_ParamLimits

0xec0c,	// (0x0002e3b0) dt_sta_title_pane_t1

0x057b,	// (0x0001fd1f) bg_dt_sta_control_pane

0xec21,	// (0x0002e3c5) dt_sta_controll_pane_g1

0xec2a,	// (0x0002e3ce) bg_dt_sta_title_pane_g1

0xec33,	// (0x0002e3d7) bg_dt_sta_title_pane_g2

0xec3c,	// (0x0002e3e0) bg_dt_sta_title_pane_g3

0x0002,

0xfea8,	// (0x0002f64c) bg_dt_sta_title_pane_g

0x8340,	// (0x00027ae4) bg_dt_sta_indi_pane_g1

0xec45,	// (0x0002e3e9) dt_sta_signal_pane_g1

0xec4d,	// (0x0002e3f1) dt_sta_signal_pane_g2

0x0001,

0xfeaf,	// (0x0002f653) dt_sta_signal_pane_g

0xec55,	// (0x0002e3f9) dt_sta_battery_pane_g1

0xec5e,	// (0x0002e402) dt_sta_battery_pane_t1

0x8340,	// (0x00027ae4) bg_dt_sta_control_pane_g1

0x1851,	// (0x00020ff5) fep_china_uni_eep_pane

0x1859,	// (0x00020ffd) fep_china_uni_entry_pane_ParamLimits

0x1869,	// (0x0002100d) popup_fep_china_uni_window_g1_ParamLimits

0x1879,	// (0x0002101d) popup_fep_china_uni_window_g2_ParamLimits

0x1879,	// (0x0002101d) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0002ef06) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0002ef06) popup_fep_china_uni_window_g

0xec6d,	// (0x0002e411) fep_china_uni_eep_pane_g1

0xec75,	// (0x0002e419) fep_china_uni_eep_pane_t1

0xe784,	// (0x0002df28) aid_touch_area_size_smil_player

0x498d,	// (0x00024131) lc0_clock_pane

0x49c6,	// (0x0002416a) status_pane_g5_ParamLimits

0x49c6,	// (0x0002416a) status_pane_g5

0x722c,	// (0x000269d0) popup_keymap_window

0x49a6,	// (0x0002414a) status_icon_pane

0xe8f3,	// (0x0002e097) cell_ai5_widget_pane_g3_ParamLimits

0xe907,	// (0x0002e0ab) cell_ai5_widget_pane_g4_ParamLimits

0xe913,	// (0x0002e0b7) cell_ai5_widget_pane_g5_ParamLimits

0xe937,	// (0x0002e0db) cell_ai5_widget_pane_g8_ParamLimits

0xe937,	// (0x0002e0db) cell_ai5_widget_pane_g8

0xe94b,	// (0x0002e0ef) cell_ai5_widget_pane_g9_ParamLimits

0xe94b,	// (0x0002e0ef) cell_ai5_widget_pane_g9

0xe95f,	// (0x0002e103) cell_ai5_widget_pane_g10_ParamLimits

0xe95f,	// (0x0002e103) cell_ai5_widget_pane_g10

0xec84,	// (0x0002e428) status_icon_pane_g1

0x057b,	// (0x0001fd1f) bg_popup_sub_pane_cp13

0xec8c,	// (0x0002e430) popup_keymap_window_t1

0x35ea,	// (0x00022d8e) control_pane_g6_ParamLimits

0x35ea,	// (0x00022d8e) control_pane_g6

0x35dd,	// (0x00022d81) control_pane_g7_ParamLimits

0x35dd,	// (0x00022d81) control_pane_g7

0x35d0,	// (0x00022d74) control_pane_g8_ParamLimits

0x35d0,	// (0x00022d74) control_pane_g8

0xeba7,	// (0x0002e34b) dt_sta_controll_pane_ParamLimits

0xebb4,	// (0x0002e358) dt_sta_indi_pane_ParamLimits

0xebc5,	// (0x0002e369) dt_sta_title_pane_ParamLimits

0x0b5c,	// (0x00020300) aid_size_touch_scroll_bar_cale

0xc48d,	// (0x0002bc31) popup_discreet_window_ParamLimits

0xc48d,	// (0x0002bc31) popup_discreet_window

0xc4f1,	// (0x0002bc95) popup_sk_window

0x4ffc,	// (0x000247a0) bg_popup_sub_pane_cp28_ParamLimits

0x4ffc,	// (0x000247a0) bg_popup_sub_pane_cp28

0xec9a,	// (0x0002e43e) popup_discreet_window_g1_ParamLimits

0xec9a,	// (0x0002e43e) popup_discreet_window_g1

0xecba,	// (0x0002e45e) popup_discreet_window_t1_ParamLimits

0xecba,	// (0x0002e45e) popup_discreet_window_t1

0xecd8,	// (0x0002e47c) popup_discreet_window_t2_ParamLimits

0xecd8,	// (0x0002e47c) popup_discreet_window_t2

0x0002,

0xfeb4,	// (0x0002f658) popup_discreet_window_t_ParamLimits

0xfeb4,	// (0x0002f658) popup_discreet_window_t

0xed2a,	// (0x0002e4ce) popup_sk_window_g1

0xed33,	// (0x0002e4d7) popup_sk_window_g2

0x0001,

0xfebb,	// (0x0002f65f) popup_sk_window_g

0xed3c,	// (0x0002e4e0) popup_sk_window_t1

0xed4a,	// (0x0002e4ee) popup_sk_window_t1_copy1

0xe8e3,	// (0x0002e087) cell_ai5_widget_pane_g2_ParamLimits

0xea36,	// (0x0002e1da) cell_ai5_widget_pane_t9_ParamLimits

0xea36,	// (0x0002e1da) cell_ai5_widget_pane_t9

0x057b,	// (0x0001fd1f) main_fep_fshwr2_pane

0xed58,	// (0x0002e4fc) aid_fshwr2_btn_pane

0xed60,	// (0x0002e504) aid_fshwr2_syb_pane

0xed68,	// (0x0002e50c) aid_fshwr2_txt_pane

0xed70,	// (0x0002e514) fshwr2_func_candi_pane

0xed78,	// (0x0002e51c) fshwr2_hwr_syb_pane

0xed80,	// (0x0002e524) fshwr2_icf_pane

0x057b,	// (0x0001fd1f) fshwr2_icf_bg_pane

0xed9a,	// (0x0002e53e) fshwr2_icf_pane_t1_ParamLimits

0xed9a,	// (0x0002e53e) fshwr2_icf_pane_t1

0x8340,	// (0x00027ae4) fshwr2_func_candi_pane_g1

0xedb1,	// (0x0002e555) fshwr2_func_candi_row_pane_ParamLimits

0xedb1,	// (0x0002e555) fshwr2_func_candi_row_pane

0xedc2,	// (0x0002e566) cell_fshwr2_syb_pane_ParamLimits

0xedc2,	// (0x0002e566) cell_fshwr2_syb_pane

0x8588,	// (0x00027d2c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8588,	// (0x00027d2c) fshwr2_hwr_syb_pane_g1

0x057b,	// (0x0001fd1f) bg_popup_call_pane_cp01

0xedd9,	// (0x0002e57d) fshwr2_func_candi_cell_pane_ParamLimits

0xedd9,	// (0x0002e57d) fshwr2_func_candi_cell_pane

0xee04,	// (0x0002e5a8) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xee04,	// (0x0002e5a8) fshwr2_func_candi_cell_bg_pane

0xee1e,	// (0x0002e5c2) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xee1e,	// (0x0002e5c2) fshwr2_func_candi_cell_pane_g1

0xee3e,	// (0x0002e5e2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xee3e,	// (0x0002e5e2) fshwr2_func_candi_cell_pane_t1

0x057b,	// (0x0001fd1f) bg_button_pane_cp08

0x1c81,	// (0x00021425) cell_fshwr2_syb_bg_pane

0xee51,	// (0x0002e5f5) cell_fshwr2_syb_bg_pane_g1

0xee59,	// (0x0002e5fd) cell_fshwr2_syb_bg_pane_t1

0x12c8,	// (0x00020a6c) main_tmo_pane

0x7b73,	// (0x00027317) uni_indicator_pane_g1_ParamLimits

0x7b88,	// (0x0002732c) uni_indicator_pane_g2_ParamLimits

0x7b9e,	// (0x00027342) uni_indicator_pane_g3_ParamLimits

0x59c9,	// (0x0002516d) uni_indicator_pane_g4_ParamLimits

0x59c9,	// (0x0002516d) uni_indicator_pane_g4

0x59dd,	// (0x00025181) uni_indicator_pane_g5_ParamLimits

0x59dd,	// (0x00025181) uni_indicator_pane_g5

0x59f1,	// (0x00025195) uni_indicator_pane_g6_ParamLimits

0x59f1,	// (0x00025195) uni_indicator_pane_g6

0xf95a,	// (0x0002f0fe) uni_indicator_pane_g_ParamLimits

0xd76d,	// (0x0002cf11) popup_tmo_note_window_ParamLimits

0xd76d,	// (0x0002cf11) popup_tmo_note_window

0x057b,	// (0x0001fd1f) fshwr2_bg_pane

0xee2f,	// (0x0002e5d3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xee2f,	// (0x0002e5d3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec0,	// (0x0002f664) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec0,	// (0x0002f664) fshwr2_func_candi_cell_pane_g

0x8340,	// (0x00027ae4) bg_popup_window_pane_cp01

0xee68,	// (0x0002e60c) bg_popup_window_pane_g1_cp01

0xee71,	// (0x0002e615) bg_popup_window_pane_cp22_ParamLimits

0xee71,	// (0x0002e615) bg_popup_window_pane_cp22

0xee7f,	// (0x0002e623) listscroll_tmo_link_pane_ParamLimits

0xee7f,	// (0x0002e623) listscroll_tmo_link_pane

0xeebf,	// (0x0002e663) popup_tmo_note_window_g1_ParamLimits

0xeebf,	// (0x0002e663) popup_tmo_note_window_g1

0xeecc,	// (0x0002e670) tmo_note_info_pane_ParamLimits

0xeecc,	// (0x0002e670) tmo_note_info_pane

0xeee6,	// (0x0002e68a) list_tmo_note_info_pane_g1_ParamLimits

0xeee6,	// (0x0002e68a) list_tmo_note_info_pane_g1

0xeefd,	// (0x0002e6a1) list_tmo_note_info_pane_g2_ParamLimits

0xeefd,	// (0x0002e6a1) list_tmo_note_info_pane_g2

0x0001,

0xfec5,	// (0x0002f669) list_tmo_note_info_pane_g_ParamLimits

0xfec5,	// (0x0002f669) list_tmo_note_info_pane_g

0xef19,	// (0x0002e6bd) list_tmo_note_info_text_pane_ParamLimits

0xef19,	// (0x0002e6bd) list_tmo_note_info_text_pane

0xef9a,	// (0x0002e73e) list_tmo_link_pane

0xefa7,	// (0x0002e74b) scroll_pane_cp20

0xefb4,	// (0x0002e758) list_single_tmo_link_pane_ParamLimits

0xefb4,	// (0x0002e758) list_single_tmo_link_pane

0xefc4,	// (0x0002e768) list_single_tmo_link_pane_t1

0xefd2,	// (0x0002e776) list_tmo_note_info_text_pane_t1_ParamLimits

0xefd2,	// (0x0002e776) list_tmo_note_info_text_pane_t1

0x138a,	// (0x00020b2e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x138a,	// (0x00020b2e) aid_size_touch_scroll_bar_cp01

0xbbcd,	// (0x0002b371) aid_size_touch_slider_marker

0xc4dd,	// (0x0002bc81) popup_settings_window_ParamLimits

0xc4dd,	// (0x0002bc81) popup_settings_window

0xbd83,	// (0x0002b527) popup_candi_list_indi_window

0x48ef,	// (0x00024093) aid_touch_navi_pane_ParamLimits

0xd898,	// (0x0002d03c) rs_clock_indi_pane

0xd8a1,	// (0x0002d045) sctrl_sk_bottom_pane_ParamLimits

0xd8b2,	// (0x0002d056) sctrl_sk_top_pane_ParamLimits

0xde05,	// (0x0002d5a9) popup_fep_tooltip_window

0xe8a9,	// (0x0002e04d) aid_size_cell_widget_grid_ParamLimits

0xe8d7,	// (0x0002e07b) cell_ai5_widget_pane_g1_ParamLimits

0xe8d7,	// (0x0002e07b) cell_ai5_widget_pane_g1

0xe91f,	// (0x0002e0c3) cell_ai5_widget_pane_g6_ParamLimits

0xe92b,	// (0x0002e0cf) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe43,	// (0x0002f5e7) cell_ai5_widget_pane_g_ParamLimits

0xfe43,	// (0x0002f5e7) cell_ai5_widget_pane_g

0xea5a,	// (0x0002e1fe) cell_ai5_widget_pane_t10_ParamLimits

0xea5a,	// (0x0002e1fe) cell_ai5_widget_pane_t10

0xea6c,	// (0x0002e210) grid_ai5_widget_pane_ParamLimits

0xeb0c,	// (0x0002e2b0) cell_contacts_ai5_widget_pane_ParamLimits

0xeb0c,	// (0x0002e2b0) cell_contacts_ai5_widget_pane

0xeced,	// (0x0002e491) popup_discreet_window_t3_ParamLimits

0xeced,	// (0x0002e491) popup_discreet_window_t3

0xed88,	// (0x0002e52c) popup_fshwr2_char_preview_window_ParamLimits

0xed88,	// (0x0002e52c) popup_fshwr2_char_preview_window

0xef37,	// (0x0002e6db) tmo_note_info_pane_t1

0xef4c,	// (0x0002e6f0) tmo_note_info_pane_t2

0xef61,	// (0x0002e705) tmo_note_info_pane_t3

0xef76,	// (0x0002e71a) tmo_note_info_pane_t4

0xef88,	// (0x0002e72c) tmo_note_info_pane_t5

0x0004,

0xfeca,	// (0x0002f66e) tmo_note_info_pane_t

0xef9a,	// (0x0002e73e) list_tmo_link_pane_ParamLimits

0xefa7,	// (0x0002e74b) scroll_pane_cp20_ParamLimits

0x057b,	// (0x0001fd1f) bg_popup_fep_char_preview_window_cp01

0xefeb,	// (0x0002e78f) popup_fshwr2_char_preview_window_t1

0xeff9,	// (0x0002e79d) popup_candi_list_indi_window_g1

0xf002,	// (0x0002e7a6) bg_cell_contacts_ai5_widget_pane

0xf00e,	// (0x0002e7b2) cell_contacts_ai5_widget_pane_g1

0xf022,	// (0x0002e7c6) cell_contacts_ai5_widget_pane_g2

0xf031,	// (0x0002e7d5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed5,	// (0x0002f679) cell_contacts_ai5_widget_pane_g

0xf044,	// (0x0002e7e8) cell_contacts_ai5_widget_pane_t1

0x12c8,	// (0x00020a6c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf0bc,	// (0x0002e860) settings_container_pane

0x1c81,	// (0x00021425) listscroll_set_pane_copy1

0x6115,	// (0x000258b9) scroll_pane_cp121_copy1

0xf0c8,	// (0x0002e86c) set_content_pane_copy1

0xf0d0,	// (0x0002e874) aid_height_set_list_copy1_ParamLimits

0xf0d0,	// (0x0002e874) aid_height_set_list_copy1

0x5b8a,	// (0x0002532e) aid_size_parent_copy1_ParamLimits

0x5b8a,	// (0x0002532e) aid_size_parent_copy1

0xf0dc,	// (0x0002e880) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0dc,	// (0x0002e880) button_value_adjust_pane_cp6_copy1

0x47d8,	// (0x00023f7c) list_highlight_pane_cp2_copy1_ParamLimits

0x47d8,	// (0x00023f7c) list_highlight_pane_cp2_copy1

0xf0f0,	// (0x0002e894) list_set_pane_copy1_ParamLimits

0xf0f0,	// (0x0002e894) list_set_pane_copy1

0xf059,	// (0x0002e7fd) main_pane_set_t1_copy1_ParamLimits

0xf059,	// (0x0002e7fd) main_pane_set_t1_copy1

0xf093,	// (0x0002e837) main_pane_set_t2_copy1_ParamLimits

0xf093,	// (0x0002e837) main_pane_set_t2_copy1

0xf17e,	// (0x0002e922) main_pane_set_t3_copy1

0xf18c,	// (0x0002e930) main_pane_set_t4_copy1

0xf0b0,	// (0x0002e854) set_content_pane_g1_copy1_ParamLimits

0xf0b0,	// (0x0002e854) set_content_pane_g1_copy1

0xf19a,	// (0x0002e93e) setting_code_pane_copy1

0xf1a2,	// (0x0002e946) setting_slider_graphic_pane_copy1

0xf1a2,	// (0x0002e946) setting_slider_pane_copy1

0xf1aa,	// (0x0002e94e) setting_text_pane_copy1

0xf1a2,	// (0x0002e946) setting_volume_pane_copy1

0xf1b2,	// (0x0002e956) settings_code_pane_cp2_copy1

0xf1ba,	// (0x0002e95e) settings_code_pane_cp_copy1_ParamLimits

0xf1ba,	// (0x0002e95e) settings_code_pane_cp_copy1

0xf1ce,	// (0x0002e972) volume_set_pane_copy1

0xf1d6,	// (0x0002e97a) volume_set_pane_g10_copy1

0xf1de,	// (0x0002e982) volume_set_pane_g1_copy1

0xf1e6,	// (0x0002e98a) volume_set_pane_g2_copy1

0xf1ee,	// (0x0002e992) volume_set_pane_g3_copy1

0xf1f6,	// (0x0002e99a) volume_set_pane_g4_copy1

0xf1fe,	// (0x0002e9a2) volume_set_pane_g5_copy1

0xf206,	// (0x0002e9aa) volume_set_pane_g6_copy1

0xf20e,	// (0x0002e9b2) volume_set_pane_g7_copy1

0xf216,	// (0x0002e9ba) volume_set_pane_g8_copy1

0xf21e,	// (0x0002e9c2) volume_set_pane_g9_copy1

0x066b,	// (0x0001fe0f) bg_set_opt_pane_cp_copy1_ParamLimits

0x066b,	// (0x0001fe0f) bg_set_opt_pane_cp_copy1

0x0679,	// (0x0001fe1d) setting_slider_pane_t1_copy1_ParamLimits

0x0679,	// (0x0001fe1d) setting_slider_pane_t1_copy1

0xf226,	// (0x0002e9ca) setting_slider_pane_t2_copy1_ParamLimits

0xf226,	// (0x0002e9ca) setting_slider_pane_t2_copy1

0xf23f,	// (0x0002e9e3) setting_slider_pane_t3_copy1_ParamLimits

0xf23f,	// (0x0002e9e3) setting_slider_pane_t3_copy1

0x068f,	// (0x0001fe33) slider_set_pane_copy1_ParamLimits

0x068f,	// (0x0001fe33) slider_set_pane_copy1

0x1317,	// (0x00020abb) set_opt_bg_pane_g1_copy2

0x131f,	// (0x00020ac3) set_opt_bg_pane_g2_copy2

0xf256,	// (0x0002e9fa) set_opt_bg_pane_g3_copy2

0x132f,	// (0x00020ad3) set_opt_bg_pane_g4_copy2

0x1337,	// (0x00020adb) set_opt_bg_pane_g5_copy2

0x133f,	// (0x00020ae3) set_opt_bg_pane_g6_copy2

0xf25e,	// (0x0002ea02) set_opt_bg_pane_g7_copy2

0xf266,	// (0x0002ea0a) set_opt_bg_pane_g8_copy2

0xf26e,	// (0x0002ea12) set_opt_bg_pane_g9_copy2

0x6169,	// (0x0002590d) aid_size_touch_slider_mark_copy1_ParamLimits

0x6169,	// (0x0002590d) aid_size_touch_slider_mark_copy1

0x5b9c,	// (0x00025340) slider_set_pane_g1_copy1

0x5ba5,	// (0x00025349) slider_set_pane_g2_copy1

0x617d,	// (0x00025921) slider_set_pane_g3_copy1_ParamLimits

0x617d,	// (0x00025921) slider_set_pane_g3_copy1

0x6191,	// (0x00025935) slider_set_pane_g4_copy1_ParamLimits

0x6191,	// (0x00025935) slider_set_pane_g4_copy1

0x61a9,	// (0x0002594d) slider_set_pane_g5_copy1_ParamLimits

0x61a9,	// (0x0002594d) slider_set_pane_g5_copy1

0x617d,	// (0x00025921) slider_set_pane_g6_copy1_ParamLimits

0x617d,	// (0x00025921) slider_set_pane_g6_copy1

0xf276,	// (0x0002ea1a) slider_set_pane_g7_copy1_ParamLimits

0xf276,	// (0x0002ea1a) slider_set_pane_g7_copy1

0x0607,	// (0x0001fdab) bg_set_opt_pane_cp2_copy1

0x06a5,	// (0x0001fe49) setting_slider_graphic_pane_g1_copy1

0xf28c,	// (0x0002ea30) setting_slider_graphic_pane_t1_copy1

0xf29b,	// (0x0002ea3f) setting_slider_graphic_pane_t2_copy1

0xf2aa,	// (0x0002ea4e) slider_set_pane_cp_copy1

0xf2ba,	// (0x0002ea5e) input_focus_pane_cp1_copy1

0xf2c3,	// (0x0002ea67) list_set_text_pane_copy1

0xf2cb,	// (0x0002ea6f) setting_text_pane_g1_copy1

0xc324,	// (0x0002bac8) set_text_pane_t1_copy1

0xf2ba,	// (0x0002ea5e) input_focus_pane_cp2_copy1

0xf2cb,	// (0x0002ea6f) setting_code_pane_g1_copy1

0xf2d4,	// (0x0002ea78) setting_code_pane_t1_copy1

0xf2e2,	// (0x0002ea86) list_set_graphic_pane_copy1

0x0607,	// (0x0001fdab) bg_set_opt_pane_cp4_copy1

0xf2f6,	// (0x0002ea9a) list_set_graphic_pane_g1_copy1_ParamLimits

0xf2f6,	// (0x0002ea9a) list_set_graphic_pane_g1_copy1

0xf302,	// (0x0002eaa6) list_set_graphic_pane_g2_copy1

0x19fc,	// (0x000211a0) list_set_graphic_pane_t1_copy1_ParamLimits

0x19fc,	// (0x000211a0) list_set_graphic_pane_t1_copy1

0x8340,	// (0x00027ae4) rs_clock_indi_pane_g1

0xf30a,	// (0x0002eaae) rs_clock_indi_pane_t1

0xf318,	// (0x0002eabc) rs_indi_pane

0xf320,	// (0x0002eac4) rs_indi_pane_g1

0xf329,	// (0x0002eacd) rs_indi_pane_g2

0xeff9,	// (0x0002e79d) rs_indi_pane_g3

0x0002,

0xfedc,	// (0x0002f680) rs_indi_pane_g

0x1c81,	// (0x00021425) bg_popup_preview_window_pane_cp03

0xf332,	// (0x0002ead6) popup_fep_tooltip_window_t1

0x9ca8,	// (0x0002944c) popup_note2_window_g2_ParamLimits

0x9ca8,	// (0x0002944c) popup_note2_window_g2

0x0001,

0xfc81,	// (0x0002f425) popup_note2_window_g_ParamLimits

0xfc81,	// (0x0002f425) popup_note2_window_g

0xa123,	// (0x000298c7) bg_popup_sub_pane_cp11_ParamLimits

0xa130,	// (0x000298d4) cell_ai3_links_pane_g1_ParamLimits

0xa147,	// (0x000298eb) cell_ai3_links_pane_t1

0xc324,	// (0x0002bac8) set_text_pane_t1_copy1_ParamLimits

0x1ba8,	// (0x0002134c) cell_graphic_popup_pane_cp2_ParamLimits

0x1ba8,	// (0x0002134c) cell_graphic_popup_pane_cp2

0xf340,	// (0x0002eae4) cell_graphic_popup_pane_g1_cp2

0x0a0b,	// (0x000201af) cell_graphic_popup_pane_g2_cp2

0xf348,	// (0x0002eaec) cell_graphic_popup_pane_g3_cp2

0xf350,	// (0x0002eaf4) cell_graphic_popup_pane_t2_cp2

0x0a1c,	// (0x000201c0) grid_highlight_pane_cp3_cp2

0x15fd,	// (0x00020da1) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x12c8,	// (0x00020a6c) main_tmo_pane_ParamLimits

0xd765,	// (0x0002cf09) popup_tmo_big_image_note_window

0xe8c7,	// (0x0002e06b) cell_ai5_widget_list_pane

0xe8cf,	// (0x0002e073) cell_ai5_widget_lrg_icon_pane

0xef37,	// (0x0002e6db) tmo_note_info_pane_t1_ParamLimits

0xef4c,	// (0x0002e6f0) tmo_note_info_pane_t2_ParamLimits

0xef61,	// (0x0002e705) tmo_note_info_pane_t3_ParamLimits

0xef76,	// (0x0002e71a) tmo_note_info_pane_t4_ParamLimits

0xef88,	// (0x0002e72c) tmo_note_info_pane_t5_ParamLimits

0xfeca,	// (0x0002f66e) tmo_note_info_pane_t_ParamLimits

0xf0bc,	// (0x0002e860) settings_container_pane_ParamLimits

0xf2b2,	// (0x0002ea56) indicator_popup_pane_cp5

0xf2b2,	// (0x0002ea56) indicator_popup_pane_cp6

0xf2e2,	// (0x0002ea86) list_set_graphic_pane_copy1_ParamLimits

0x057b,	// (0x0001fd1f) bg_popup_window_pane_cp23

0xf35e,	// (0x0002eb02) popup_tmo_big_image_note_window_g1

0xf367,	// (0x0002eb0b) popup_tmo_big_image_note_window_t1

0xf375,	// (0x0002eb19) popup_tmo_big_image_note_window_t2

0xf383,	// (0x0002eb27) popup_tmo_big_image_note_window_t3

0x0002,

0xfee3,	// (0x0002f687) popup_tmo_big_image_note_window_t

0xf391,	// (0x0002eb35) cell_ai5_widget_lrg_icon_pane_g1

0xf399,	// (0x0002eb3d) cell_ai5_widget_lrg_icon_pane_t1

0xf3a7,	// (0x0002eb4b) cell_ai5_widget_list_row_pane_ParamLimits

0xf3a7,	// (0x0002eb4b) cell_ai5_widget_list_row_pane

0xf3c0,	// (0x0002eb64) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf3c0,	// (0x0002eb64) cell_ai5_widget_list_row_pane_g1

0xf3cd,	// (0x0002eb71) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf3cd,	// (0x0002eb71) cell_ai5_widget_list_row_pane_t1

0xf3e5,	// (0x0002eb89) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf3e5,	// (0x0002eb89) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeea,	// (0x0002f68e) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeea,	// (0x0002f68e) cell_ai5_widget_list_row_pane_t

0x057b,	// (0x0001fd1f) main_fep_vtchi_ss_pane

0xf3f7,	// (0x0002eb9b) popup_fep_char_pre_window

0xf3ff,	// (0x0002eba3) popup_fep_ituss_window

0xf408,	// (0x0002ebac) popup_fep_vkbss_window

0xf411,	// (0x0002ebb5) grid_vkbss_keypad_pane_ParamLimits

0xf411,	// (0x0002ebb5) grid_vkbss_keypad_pane

0xf421,	// (0x0002ebc5) ituss_keypad_pane

0xf429,	// (0x0002ebcd) aid_vkbss_key_offset_ParamLimits

0xf429,	// (0x0002ebcd) aid_vkbss_key_offset

0xf438,	// (0x0002ebdc) cell_vkbss_key_pane_ParamLimits

0xf438,	// (0x0002ebdc) cell_vkbss_key_pane

0xf44e,	// (0x0002ebf2) bg_cell_vkbss_key_g1_ParamLimits

0xf44e,	// (0x0002ebf2) bg_cell_vkbss_key_g1

0xf45a,	// (0x0002ebfe) cell_vkbss_key_3p_pane_ParamLimits

0xf45a,	// (0x0002ebfe) cell_vkbss_key_3p_pane

0xf46e,	// (0x0002ec12) cell_vkbss_key_g1_ParamLimits

0xf46e,	// (0x0002ec12) cell_vkbss_key_g1

0xf482,	// (0x0002ec26) cell_vkbss_key_t1_ParamLimits

0xf482,	// (0x0002ec26) cell_vkbss_key_t1

0xf4ad,	// (0x0002ec51) cell_ituss_key_pane_ParamLimits

0xf4ad,	// (0x0002ec51) cell_ituss_key_pane

0xf4bc,	// (0x0002ec60) bg_cell_ituss_key_g1_ParamLimits

0xf4bc,	// (0x0002ec60) bg_cell_ituss_key_g1

0xf4c8,	// (0x0002ec6c) cell_ituss_key_pane_g1_ParamLimits

0xf4c8,	// (0x0002ec6c) cell_ituss_key_pane_g1

0xf4d4,	// (0x0002ec78) cell_ituss_key_pane_g2_ParamLimits

0xf4d4,	// (0x0002ec78) cell_ituss_key_pane_g2

0x0001,

0xfeef,	// (0x0002f693) cell_ituss_key_pane_g_ParamLimits

0xfeef,	// (0x0002f693) cell_ituss_key_pane_g

0xf4e7,	// (0x0002ec8b) cell_ituss_key_t1_ParamLimits

0xf4e7,	// (0x0002ec8b) cell_ituss_key_t1

0xf505,	// (0x0002eca9) cell_ituss_key_t2_ParamLimits

0xf505,	// (0x0002eca9) cell_ituss_key_t2

0xf524,	// (0x0002ecc8) cell_ituss_key_t3_ParamLimits

0xf524,	// (0x0002ecc8) cell_ituss_key_t3

0xf543,	// (0x0002ece7) cell_ituss_key_t4_ParamLimits

0xf543,	// (0x0002ece7) cell_ituss_key_t4

0x0003,

0xfef4,	// (0x0002f698) cell_ituss_key_t_ParamLimits

0xfef4,	// (0x0002f698) cell_ituss_key_t

0xf562,	// (0x0002ed06) cell_vkbss_key_3p_pane_g1

0xf56a,	// (0x0002ed0e) cell_vkbss_key_3p_pane_g2

0xf572,	// (0x0002ed16) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefd,	// (0x0002f6a1) cell_vkbss_key_3p_pane_g

0x057b,	// (0x0001fd1f) bg_popup_fep_char_preview_window_cp02

0xf57a,	// (0x0002ed1e) popup_fep_char_pre_window_t1

0xe89f,	// (0x0002e043) main_ai5_sk_pane

0xf002,	// (0x0002e7a6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf00e,	// (0x0002e7b2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf022,	// (0x0002e7c6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf031,	// (0x0002e7d5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed5,	// (0x0002f679) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf044,	// (0x0002e7e8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x12c8,	// (0x00020a6c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0002ed2d) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Large

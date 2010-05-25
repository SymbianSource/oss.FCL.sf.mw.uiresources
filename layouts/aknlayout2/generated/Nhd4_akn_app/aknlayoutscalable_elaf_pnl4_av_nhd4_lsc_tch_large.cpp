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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00048ebd };

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
0x9660,	// (0x0005251d) Screen

0x9674,	// (0x00052531) application_window_ParamLimits

0x9674,	// (0x00052531) application_window

0x968e,	// (0x0005254b) screen_g1

0x96c0,	// (0x0005257d) area_bottom_pane_ParamLimits

0x96c0,	// (0x0005257d) area_bottom_pane

0xedb1,	// (0x00057c6e) area_top_pane_ParamLimits

0xedb1,	// (0x00057c6e) area_top_pane

0xee45,	// (0x00057d02) main_pane_ParamLimits

0xee45,	// (0x00057d02) main_pane

0x977e,	// (0x0005263b) misc_graphics

0xc16a,	// (0x00055027) battery_pane_ParamLimits

0xc16a,	// (0x00055027) battery_pane

0x350f,	// (0x0004c3cc) bg_status_flat_pane_g8

0x3517,	// (0x0004c3d4) bg_status_flat_pane_g9

0x2915,	// (0x0004b7d2) context_pane_ParamLimits

0x2915,	// (0x0004b7d2) context_pane

0xc2d5,	// (0x00055192) navi_pane_ParamLimits

0xc2d5,	// (0x00055192) navi_pane

0xc353,	// (0x00055210) signal_pane_ParamLimits

0xc353,	// (0x00055210) signal_pane

0x0008,

0xf868,	// (0x00058725) bg_status_flat_pane_g

0xc3e3,	// (0x000552a0) status_pane_g1_ParamLimits

0xc3e3,	// (0x000552a0) status_pane_g1

0xc3f9,	// (0x000552b6) status_pane_g2_ParamLimits

0xc3f9,	// (0x000552b6) status_pane_g2

0x2b3c,	// (0x0004b9f9) status_pane_g3_ParamLimits

0x2b3c,	// (0x0004b9f9) status_pane_g3

0x0004,

0xf79b,	// (0x00058658) status_pane_g_ParamLimits

0xf79b,	// (0x00058658) status_pane_g

0xc405,	// (0x000552c2) title_pane_ParamLimits

0xc405,	// (0x000552c2) title_pane

0xc468,	// (0x00055325) uni_indicator_pane_ParamLimits

0xc468,	// (0x00055325) uni_indicator_pane

0x2771,	// (0x0004b62e) bg_list_pane_ParamLimits

0x2771,	// (0x0004b62e) bg_list_pane

0xae89,	// (0x00053d46) find_pane

0xae91,	// (0x00053d4e) listscroll_app_pane_ParamLimits

0xae91,	// (0x00053d4e) listscroll_app_pane

0x279d,	// (0x0004b65a) listscroll_form_pane

0xaea1,	// (0x00053d5e) listscroll_gen_pane_ParamLimits

0xaea1,	// (0x00053d5e) listscroll_gen_pane

0x083d,	// (0x000496fa) listscroll_set_pane

0x4073,	// (0x0004cf30) main_idle_act_pane

0x2471,	// (0x0004b32e) main_idle_trad_pane

0x2471,	// (0x0004b32e) main_list_empty_pane

0x27b7,	// (0x0004b674) main_midp_pane

0x27c3,	// (0x0004b680) main_pane_g1_ParamLimits

0x27c3,	// (0x0004b680) main_pane_g1

0xaeb5,	// (0x00053d72) popup_ai_message_window_ParamLimits

0xaeb5,	// (0x00053d72) popup_ai_message_window

0xaf66,	// (0x00053e23) popup_fep_china_uni_window_ParamLimits

0xaf66,	// (0x00053e23) popup_fep_china_uni_window

0xafc0,	// (0x00053e7d) popup_fep_japan_candidate_window_ParamLimits

0xafc0,	// (0x00053e7d) popup_fep_japan_candidate_window

0xafde,	// (0x00053e9b) popup_fep_japan_predictive_window_ParamLimits

0xafde,	// (0x00053e9b) popup_fep_japan_predictive_window

0xaff0,	// (0x00053ead) popup_find_window

0xb00d,	// (0x00053eca) popup_grid_graphic_window_ParamLimits

0xb00d,	// (0x00053eca) popup_grid_graphic_window

0xb0ab,	// (0x00053f68) popup_large_graphic_colour_window

0xb0d1,	// (0x00053f8e) popup_menu_window_ParamLimits

0xb0d1,	// (0x00053f8e) popup_menu_window

0xb2a3,	// (0x00054160) popup_note_image_window

0xb269,	// (0x00054126) popup_note_wait_window_ParamLimits

0xb269,	// (0x00054126) popup_note_wait_window

0xb2bb,	// (0x00054178) popup_note_window_ParamLimits

0xb2bb,	// (0x00054178) popup_note_window

0xb36a,	// (0x00054227) popup_query_code_window_ParamLimits

0xb36a,	// (0x00054227) popup_query_code_window

0xb3a4,	// (0x00054261) popup_query_data_code_window_ParamLimits

0xb3a4,	// (0x00054261) popup_query_data_code_window

0xb3c1,	// (0x0005427e) popup_query_data_window_ParamLimits

0xb3c1,	// (0x0005427e) popup_query_data_window

0xb443,	// (0x00054300) popup_query_sat_info_window_ParamLimits

0xb443,	// (0x00054300) popup_query_sat_info_window

0xb4da,	// (0x00054397) popup_snote_single_graphic_window_ParamLimits

0xb4da,	// (0x00054397) popup_snote_single_graphic_window

0xb4da,	// (0x00054397) popup_snote_single_text_window_ParamLimits

0xb4da,	// (0x00054397) popup_snote_single_text_window

0x0c9b,	// (0x00049b58) popup_sub_window_general

0xb637,	// (0x000544f4) popup_window_general_ParamLimits

0xb637,	// (0x000544f4) popup_window_general

0x27d1,	// (0x0004b68e) power_save_pane

0xace7,	// (0x00053ba4) control_pane_g1_ParamLimits

0xace7,	// (0x00053ba4) control_pane_g1

0xad10,	// (0x00053bcd) control_pane_g2_ParamLimits

0xad10,	// (0x00053bcd) control_pane_g2

0x2734,	// (0x0004b5f1) control_pane_g3_ParamLimits

0x2734,	// (0x0004b5f1) control_pane_g3

0x0007,

0xf783,	// (0x00058640) control_pane_g_ParamLimits

0xf783,	// (0x00058640) control_pane_g

0xad78,	// (0x00053c35) control_pane_t1_ParamLimits

0xad78,	// (0x00053c35) control_pane_t1

0xadde,	// (0x00053c9b) control_pane_t2_ParamLimits

0xadde,	// (0x00053c9b) control_pane_t2

0x0002,

0xf794,	// (0x00058651) control_pane_t_ParamLimits

0xf794,	// (0x00058651) control_pane_t

0xac40,	// (0x00053afd) navi_navi_volume_pane_cp1

0xac48,	// (0x00053b05) status_small_icon_pane

0x2669,	// (0x0004b526) status_small_pane_g1_ParamLimits

0x2669,	// (0x0004b526) status_small_pane_g1

0xac50,	// (0x00053b0d) status_small_pane_g2_ParamLimits

0xac50,	// (0x00053b0d) status_small_pane_g2

0xac5c,	// (0x00053b19) status_small_pane_g3_ParamLimits

0xac5c,	// (0x00053b19) status_small_pane_g3

0xac68,	// (0x00053b25) status_small_pane_g4_ParamLimits

0xac68,	// (0x00053b25) status_small_pane_g4

0xac74,	// (0x00053b31) status_small_pane_g5_ParamLimits

0xac74,	// (0x00053b31) status_small_pane_g5

0xac82,	// (0x00053b3f) status_small_pane_g6_ParamLimits

0xac82,	// (0x00053b3f) status_small_pane_g6

0x0007,

0xf772,	// (0x0005862f) status_small_pane_g_ParamLimits

0xf772,	// (0x0005862f) status_small_pane_g

0xacb1,	// (0x00053b6e) status_small_pane_t1

0xacd3,	// (0x00053b90) status_small_wait_pane_ParamLimits

0xacd3,	// (0x00053b90) status_small_wait_pane

0xa996,	// (0x00053853) aid_levels_signal_ParamLimits

0xa996,	// (0x00053853) aid_levels_signal

0xa9ae,	// (0x0005386b) signal_pane_g1_ParamLimits

0xa9ae,	// (0x0005386b) signal_pane_g1

0xa9c9,	// (0x00053886) signal_pane_g2_ParamLimits

0xa9c9,	// (0x00053886) signal_pane_g2

0x0003,

0xf703,	// (0x000585c0) signal_pane_g_ParamLimits

0xf703,	// (0x000585c0) signal_pane_g

0xc07a,	// (0x00054f37) context_pane_g1

0x98c8,	// (0x00052785) title_pane_g1

0x990b,	// (0x000527c8) title_pane_t1

0x9997,	// (0x00052854) title_pane_t2

0x99bd,	// (0x0005287a) title_pane_t3

0x0002,

0xf557,	// (0x00058414) title_pane_t

0xc490,	// (0x0005534d) aid_levels_battery_ParamLimits

0xc490,	// (0x0005534d) aid_levels_battery

0xc4ac,	// (0x00055369) battery_pane_g1_ParamLimits

0xc4ac,	// (0x00055369) battery_pane_g1

0xc4c9,	// (0x00055386) battery_pane_g2_ParamLimits

0xc4c9,	// (0x00055386) battery_pane_g2

0x0001,

0xf7a6,	// (0x00058663) battery_pane_g_ParamLimits

0xf7a6,	// (0x00058663) battery_pane_g

0xca8f,	// (0x0005594c) uni_indicator_pane_g1

0xcaa5,	// (0x00055962) uni_indicator_pane_g2

0xcabb,	// (0x00055978) uni_indicator_pane_g3

0x0005,

0xf910,	// (0x000587cd) uni_indicator_pane_g

0x0543,	// (0x00049400) navi_icon_pane_ParamLimits

0x0543,	// (0x00049400) navi_icon_pane

0x048d,	// (0x0004934a) navi_midp_pane

0x055f,	// (0x0004941c) navi_navi_pane

0x0569,	// (0x00049426) navi_text_pane_ParamLimits

0x0569,	// (0x00049426) navi_text_pane

0x968e,	// (0x0005254b) status_small_wait_pane_g1

0x9f17,	// (0x00052dd4) status_small_wait_pane_g2

0x0001,

0xf90b,	// (0x000587c8) status_small_wait_pane_g

0xc9e8,	// (0x000558a5) navi_navi_icon_text_pane

0x3b62,	// (0x0004ca1f) navi_navi_pane_g1_ParamLimits

0x3b62,	// (0x0004ca1f) navi_navi_pane_g1

0x3b74,	// (0x0004ca31) navi_navi_pane_g2_ParamLimits

0x3b74,	// (0x0004ca31) navi_navi_pane_g2

0x0001,

0xf8d9,	// (0x00058796) navi_navi_pane_g_ParamLimits

0xf8d9,	// (0x00058796) navi_navi_pane_g

0x3b86,	// (0x0004ca43) navi_navi_tabs_pane

0x3b8f,	// (0x0004ca4c) navi_navi_text_pane

0xc9e8,	// (0x000558a5) navi_navi_volume_pane

0x3b36,	// (0x0004c9f3) navi_text_pane_t1

0x3b2a,	// (0x0004c9e7) navi_icon_pane_g1

0x3a7d,	// (0x0004c93a) navi_navi_text_pane_t1

0xb6f4,	// (0x000545b1) navi_navi_volume_pane_g1

0x1089,	// (0x00049f46) volume_small_pane

0x39e3,	// (0x0004c8a0) navi_navi_icon_text_pane_g1

0xc940,	// (0x000557fd) navi_navi_icon_text_pane_t1

0x055f,	// (0x0004941c) navi_tabs_2_long_pane

0x055f,	// (0x0004941c) navi_tabs_2_pane

0x055f,	// (0x0004941c) navi_tabs_3_long_pane

0x055f,	// (0x0004941c) navi_tabs_3_pane

0x055f,	// (0x0004941c) navi_tabs_4_pane

0x1061,	// (0x00049f1e) tabs_2_active_pane_ParamLimits

0x1061,	// (0x00049f1e) tabs_2_active_pane

0x1071,	// (0x00049f2e) tabs_2_passive_pane_ParamLimits

0x1071,	// (0x00049f2e) tabs_2_passive_pane

0x102f,	// (0x00049eec) tabs_3_active_pane_ParamLimits

0x102f,	// (0x00049eec) tabs_3_active_pane

0x103f,	// (0x00049efc) tabs_3_passive_pane_ParamLimits

0x103f,	// (0x00049efc) tabs_3_passive_pane

0x1050,	// (0x00049f0d) tabs_3_passive_pane_cp_ParamLimits

0x1050,	// (0x00049f0d) tabs_3_passive_pane_cp

0x0feb,	// (0x00049ea8) tabs_4_active_pane_ParamLimits

0x0feb,	// (0x00049ea8) tabs_4_active_pane

0x0ffc,	// (0x00049eb9) tabs_4_passive_pane_ParamLimits

0x0ffc,	// (0x00049eb9) tabs_4_passive_pane

0x100d,	// (0x00049eca) tabs_4_passive_pane_cp_ParamLimits

0x100d,	// (0x00049eca) tabs_4_passive_pane_cp

0x101e,	// (0x00049edb) tabs_4_passive_pane_cp2_ParamLimits

0x101e,	// (0x00049edb) tabs_4_passive_pane_cp2

0x0fc7,	// (0x00049e84) tabs_2_long_active_pane_ParamLimits

0x0fc7,	// (0x00049e84) tabs_2_long_active_pane

0x0fd9,	// (0x00049e96) tabs_2_long_passive_pane_ParamLimits

0x0fd9,	// (0x00049e96) tabs_2_long_passive_pane

0x0f82,	// (0x00049e3f) tabs_3_long_active_pane_ParamLimits

0x0f82,	// (0x00049e3f) tabs_3_long_active_pane

0x0f9b,	// (0x00049e58) tabs_3_long_passive_pane_ParamLimits

0x0f9b,	// (0x00049e58) tabs_3_long_passive_pane

0x0fae,	// (0x00049e6b) tabs_3_long_passive_pane_cp_ParamLimits

0x0fae,	// (0x00049e6b) tabs_3_long_passive_pane_cp

0x0f28,	// (0x00049de5) volume_small_pane_g1

0x0f31,	// (0x00049dee) volume_small_pane_g2

0x0f3a,	// (0x00049df7) volume_small_pane_g3

0x0f43,	// (0x00049e00) volume_small_pane_g4

0x0f4c,	// (0x00049e09) volume_small_pane_g5

0x0f55,	// (0x00049e12) volume_small_pane_g6

0x0f5e,	// (0x00049e1b) volume_small_pane_g7

0x0f67,	// (0x00049e24) volume_small_pane_g8

0x0f70,	// (0x00049e2d) volume_small_pane_g9

0x0f79,	// (0x00049e36) volume_small_pane_g10

0x0009,

0xf8a5,	// (0x00058762) volume_small_pane_g

0x99cf,	// (0x0005288c) bg_active_tab_pane_cp2_ParamLimits

0x99cf,	// (0x0005288c) bg_active_tab_pane_cp2

0x99dd,	// (0x0005289a) tabs_3_active_pane_g1

0x99e5,	// (0x000528a2) tabs_3_active_pane_t1

0x99cf,	// (0x0005288c) bg_passive_tab_pane_cp2_ParamLimits

0x99cf,	// (0x0005288c) bg_passive_tab_pane_cp2

0x99dd,	// (0x0005289a) tabs_3_passive_pane_g1

0x99e5,	// (0x000528a2) tabs_3_passive_pane_t1

0x99cf,	// (0x0005288c) bg_active_tab_pane_cp3_ParamLimits

0x99cf,	// (0x0005288c) bg_active_tab_pane_cp3

0x99f7,	// (0x000528b4) tabs_4_active_pane_g1

0x99ff,	// (0x000528bc) tabs_4_active_pane_t1

0x99cf,	// (0x0005288c) bg_passive_tab_pane_cp3_ParamLimits

0x99cf,	// (0x0005288c) bg_passive_tab_pane_cp3

0x99f7,	// (0x000528b4) tabs_4_1_passive_pane_g1

0x99ff,	// (0x000528bc) tabs_4_1_passive_pane_t1

0x27b7,	// (0x0004b674) list_highlight_pane_cp2

0xcbc1,	// (0x00055a7e) list_set_pane_ParamLimits

0xcbc1,	// (0x00055a7e) list_set_pane

0xcc5b,	// (0x00055b18) main_pane_set_t1_ParamLimits

0xcc5b,	// (0x00055b18) main_pane_set_t1

0xcc7b,	// (0x00055b38) main_pane_set_t2_ParamLimits

0xcc7b,	// (0x00055b38) main_pane_set_t2

0xcc8f,	// (0x00055b4c) main_pane_set_t3_ParamLimits

0xcc8f,	// (0x00055b4c) main_pane_set_t3

0xcca1,	// (0x00055b5e) main_pane_set_t4_ParamLimits

0xcca1,	// (0x00055b5e) main_pane_set_t4

0x0003,

0xf975,	// (0x00058832) main_pane_set_t_ParamLimits

0xf975,	// (0x00058832) main_pane_set_t

0xccb3,	// (0x00055b70) setting_code_pane

0xccbd,	// (0x00055b7a) setting_slider_graphic_pane

0xccbd,	// (0x00055b7a) setting_slider_pane

0xccbd,	// (0x00055b7a) setting_text_pane

0xccbd,	// (0x00055b7a) setting_volume_pane

0x9a11,	// (0x000528ce) volume_set_pane

0x9a19,	// (0x000528d6) bg_set_opt_pane_cp

0x9a27,	// (0x000528e4) setting_slider_pane_t1

0x9a40,	// (0x000528fd) setting_slider_pane_t2

0x9a5a,	// (0x00052917) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005841b) setting_slider_pane_t

0x9a72,	// (0x0005292f) slider_set_pane

0x977e,	// (0x0005263b) bg_set_opt_pane_cp2

0x9a88,	// (0x00052945) setting_slider_graphic_pane_g1

0x9a91,	// (0x0005294e) setting_slider_graphic_pane_t1

0x9aa1,	// (0x0005295e) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00058422) setting_slider_graphic_pane_t

0x9ab1,	// (0x0005296e) slider_set_pane_cp

0x977e,	// (0x0005263b) input_focus_pane_cp1

0x405a,	// (0x0004cf17) list_set_text_pane

0x968e,	// (0x0005254b) setting_text_pane_g1

0x977e,	// (0x0005263b) input_focus_pane_cp2

0x968e,	// (0x0005254b) setting_code_pane_g1

0x9ab9,	// (0x00052976) setting_code_pane_t1

0xe17a,	// (0x00057037) set_text_pane_t1_ParamLimits

0xe17a,	// (0x00057037) set_text_pane_t1

0xa395,	// (0x00053252) set_opt_bg_pane_g1

0xa39d,	// (0x0005325a) set_opt_bg_pane_g2

0xcb76,	// (0x00055a33) set_opt_bg_pane_g3

0xa3ad,	// (0x0005326a) set_opt_bg_pane_g4

0xa3b5,	// (0x00053272) set_opt_bg_pane_g5

0xa3bd,	// (0x0005327a) set_opt_bg_pane_g6

0xcb80,	// (0x00055a3d) set_opt_bg_pane_g7

0xcb88,	// (0x00055a45) set_opt_bg_pane_g8

0xcb92,	// (0x00055a4f) set_opt_bg_pane_g9

0x0008,

0xf962,	// (0x0005881f) set_opt_bg_pane_g

0xcb69,	// (0x00055a26) slider_set_pane_g1

0x10f6,	// (0x00049fb3) slider_set_pane_g2

0x0006,

0xf953,	// (0x00058810) slider_set_pane_g

0xb6fc,	// (0x000545b9) volume_set_pane_g1

0xb704,	// (0x000545c1) volume_set_pane_g2

0xb70c,	// (0x000545c9) volume_set_pane_g3

0xb714,	// (0x000545d1) volume_set_pane_g4

0xb71c,	// (0x000545d9) volume_set_pane_g5

0xb724,	// (0x000545e1) volume_set_pane_g6

0xb72c,	// (0x000545e9) volume_set_pane_g7

0xb734,	// (0x000545f1) volume_set_pane_g8

0xb73c,	// (0x000545f9) volume_set_pane_g9

0xb744,	// (0x00054601) volume_set_pane_g10

0x0009,

0xf92b,	// (0x000587e8) volume_set_pane_g

0x9ac7,	// (0x00052984) indicator_pane_ParamLimits

0x9ac7,	// (0x00052984) indicator_pane

0x9aef,	// (0x000529ac) main_idle_pane_g2_ParamLimits

0x9aef,	// (0x000529ac) main_idle_pane_g2

0x9b27,	// (0x000529e4) main_pane_idle_g1_ParamLimits

0x9b27,	// (0x000529e4) main_pane_idle_g1

0x9b4e,	// (0x00052a0b) popup_clock_digital_analogue_window_ParamLimits

0x9b4e,	// (0x00052a0b) popup_clock_digital_analogue_window

0x9b65,	// (0x00052a22) soft_indicator_pane_ParamLimits

0x9b65,	// (0x00052a22) soft_indicator_pane

0x9b89,	// (0x00052a46) wallpaper_pane_ParamLimits

0x9b89,	// (0x00052a46) wallpaper_pane

0x968e,	// (0x0005254b) wallpaper_pane_g1

0x9ba3,	// (0x00052a60) indicator_pane_g1_ParamLimits

0x9ba3,	// (0x00052a60) indicator_pane_g1

0x4423,	// (0x0004d2e0) navi_navi_icon_text_pane_srt_g1

0x9bc8,	// (0x00052a85) soft_indicator_pane_t1

0x9be2,	// (0x00052a9f) aid_ps_area_pane

0x9bf3,	// (0x00052ab0) aid_ps_clock_pane

0x9c01,	// (0x00052abe) aid_ps_indicator_pane

0x9c0d,	// (0x00052aca) indicator_ps_pane_ParamLimits

0x9c0d,	// (0x00052aca) indicator_ps_pane

0x9c1c,	// (0x00052ad9) power_save_pane_g1_ParamLimits

0x9c1c,	// (0x00052ad9) power_save_pane_g1

0x9c28,	// (0x00052ae5) power_save_pane_g2_ParamLimits

0x9c28,	// (0x00052ae5) power_save_pane_g2

0xed91,	// (0x00057c4e) aid_navinavi_width_pane

0x9be2,	// (0x00052a9f) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00058427) power_save_pane_g_ParamLimits

0xf56a,	// (0x00058427) power_save_pane_g

0x9c36,	// (0x00052af3) power_save_pane_t1_ParamLimits

0x9c36,	// (0x00052af3) power_save_pane_t1

0x9bf3,	// (0x00052ab0) aid_ps_clock_pane_ParamLimits

0x9c01,	// (0x00052abe) aid_ps_indicator_pane_ParamLimits

0x9c48,	// (0x00052b05) power_save_pane_t4_ParamLimits

0x9c48,	// (0x00052b05) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005842c) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005842c) power_save_pane_t

0x9c72,	// (0x00052b2f) power_save_t3_ParamLimits

0x9c72,	// (0x00052b2f) power_save_t3

0x9c5d,	// (0x00052b1a) power_save_t2_ParamLimits

0x9c5d,	// (0x00052b1a) power_save_t2

0x9c87,	// (0x00052b44) indicator_ps_pane_g1

0x9c90,	// (0x00052b4d) ai_gene_pane_ParamLimits

0x9c90,	// (0x00052b4d) ai_gene_pane

0x9ca7,	// (0x00052b64) ai_links_pane_ParamLimits

0x9ca7,	// (0x00052b64) ai_links_pane

0x9cbf,	// (0x00052b7c) indicator_pane_cp1_ParamLimits

0x9cbf,	// (0x00052b7c) indicator_pane_cp1

0x9cce,	// (0x00052b8b) main_pane_idle_g1_cp_ParamLimits

0x9cce,	// (0x00052b8b) main_pane_idle_g1_cp

0x9ce6,	// (0x00052ba3) popup_ai_links_title_window

0x9cef,	// (0x00052bac) soft_indicator_pane_cp1_ParamLimits

0x9cef,	// (0x00052bac) soft_indicator_pane_cp1

0x3e21,	// (0x0004ccde) ai_links_pane_g1

0x3e2a,	// (0x0004cce7) grid_ai_links_pane

0xca86,	// (0x00055943) ai_gene_pane_1

0x3e0f,	// (0x0004cccc) ai_gene_pane_2

0x3e18,	// (0x0004ccd5) list_highlight_pane_cp4

0xca62,	// (0x0005591f) cell_ai_link_pane_ParamLimits

0xca62,	// (0x0005591f) cell_ai_link_pane

0x3de0,	// (0x0004cc9d) cell_ai_link_pane_g1

0x9f17,	// (0x00052dd4) cell_ai_link_pane_g2

0x0001,

0xf906,	// (0x000587c3) cell_ai_link_pane_g

0x977e,	// (0x0005263b) grid_highlight_cp2

0x977e,	// (0x0005263b) bg_popup_sub_pane_cp1

0x9d11,	// (0x00052bce) popup_ai_links_title_window_t1

0x3d30,	// (0x0004cbed) ai_gene_pane_1_g1_ParamLimits

0x3d30,	// (0x0004cbed) ai_gene_pane_1_g1

0x3d3c,	// (0x0004cbf9) ai_gene_pane_1_g2_ParamLimits

0x3d3c,	// (0x0004cbf9) ai_gene_pane_1_g2

0x0001,

0xf8fc,	// (0x000587b9) ai_gene_pane_1_g_ParamLimits

0xf8fc,	// (0x000587b9) ai_gene_pane_1_g

0x3d49,	// (0x0004cc06) ai_gene_pane_1_t1_ParamLimits

0x3d49,	// (0x0004cc06) ai_gene_pane_1_t1

0x3d7d,	// (0x0004cc3a) grid_ai_soft_ind_pane

0x3d1b,	// (0x0004cbd8) ai_gene_pane_2_t1_ParamLimits

0x3d1b,	// (0x0004cbd8) ai_gene_pane_2_t1

0x9d20,	// (0x00052bdd) main_pane_empty_t1_ParamLimits

0x9d20,	// (0x00052bdd) main_pane_empty_t1

0x9d38,	// (0x00052bf5) main_pane_empty_t2_ParamLimits

0x9d38,	// (0x00052bf5) main_pane_empty_t2

0x9d4d,	// (0x00052c0a) main_pane_empty_t3_ParamLimits

0x9d4d,	// (0x00052c0a) main_pane_empty_t3

0x9d5f,	// (0x00052c1c) main_pane_empty_t4_ParamLimits

0x9d5f,	// (0x00052c1c) main_pane_empty_t4

0x9d71,	// (0x00052c2e) main_pane_empty_t5_ParamLimits

0x9d71,	// (0x00052c2e) main_pane_empty_t5

0x0004,

0xf574,	// (0x00058431) main_pane_empty_t_ParamLimits

0xf574,	// (0x00058431) main_pane_empty_t

0xa3e6,	// (0x000532a3) bg_popup_window_pane_ParamLimits

0xa3e6,	// (0x000532a3) bg_popup_window_pane

0xc9dc,	// (0x00055899) find_popup_pane_cp2_ParamLimits

0xc9dc,	// (0x00055899) find_popup_pane_cp2

0x3a97,	// (0x0004c954) heading_pane_ParamLimits

0x3a97,	// (0x0004c954) heading_pane

0x977e,	// (0x0005263b) bg_popup_sub_pane

0xc95d,	// (0x0005581a) bg_popup_window_pane_g1_ParamLimits

0xc95d,	// (0x0005581a) bg_popup_window_pane_g1

0xc96c,	// (0x00055829) bg_popup_window_pane_g2_ParamLimits

0xc96c,	// (0x00055829) bg_popup_window_pane_g2

0xc978,	// (0x00055835) bg_popup_window_pane_g3_ParamLimits

0xc978,	// (0x00055835) bg_popup_window_pane_g3

0xc984,	// (0x00055841) bg_popup_window_pane_g4_ParamLimits

0xc984,	// (0x00055841) bg_popup_window_pane_g4

0xc993,	// (0x00055850) bg_popup_window_pane_g5_ParamLimits

0xc993,	// (0x00055850) bg_popup_window_pane_g5

0xc9a3,	// (0x00055860) bg_popup_window_pane_g6_ParamLimits

0xc9a3,	// (0x00055860) bg_popup_window_pane_g6

0xc9af,	// (0x0005586c) bg_popup_window_pane_g7_ParamLimits

0xc9af,	// (0x0005586c) bg_popup_window_pane_g7

0xc9be,	// (0x0005587b) bg_popup_window_pane_g8_ParamLimits

0xc9be,	// (0x0005587b) bg_popup_window_pane_g8

0xc9cd,	// (0x0005588a) bg_popup_window_pane_g9_ParamLimits

0xc9cd,	// (0x0005588a) bg_popup_window_pane_g9

0x3a71,	// (0x0004c92e) bg_popup_window_pane_g10_ParamLimits

0x3a71,	// (0x0004c92e) bg_popup_window_pane_g10

0x0009,

0xf8c4,	// (0x00058781) bg_popup_window_pane_g_ParamLimits

0xf8c4,	// (0x00058781) bg_popup_window_pane_g

0x399a,	// (0x0004c857) bg_popup_heading_pane_ParamLimits

0x399a,	// (0x0004c857) bg_popup_heading_pane

0x121a,	// (0x0004a0d7) tabs_4_passive_pane_cp_srt_ParamLimits

0x121a,	// (0x0004a0d7) tabs_4_passive_pane_cp_srt

0x122c,	// (0x0004a0e9) tabs_4_passive_pane_srt_ParamLimits

0x39ae,	// (0x0004c86b) heading_pane_g2

0x122c,	// (0x0004a0e9) tabs_4_passive_pane_srt

0x2d38,	// (0x0004bbf5) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2d38,	// (0x0004bbf5) bg_passive_tab_pane_cp3_srt

0x39b6,	// (0x0004c873) heading_pane_t1_ParamLimits

0x39b6,	// (0x0004c873) heading_pane_t1

0x39cd,	// (0x0004c88a) heading_pane_t2_ParamLimits

0x39cd,	// (0x0004c88a) heading_pane_t2

0x0001,

0xf8bf,	// (0x0005877c) heading_pane_t_ParamLimits

0xf8bf,	// (0x0005877c) heading_pane_t

0x34d7,	// (0x0004c394) bg_popup_heading_pane_g1

0x3586,	// (0x0004c443) bg_popup_heading_pane_g2

0x3590,	// (0x0004c44d) bg_popup_heading_pane_g3

0x359a,	// (0x0004c457) bg_popup_heading_pane_g4

0x35a4,	// (0x0004c461) bg_popup_heading_pane_g5

0x35ae,	// (0x0004c46b) bg_popup_heading_pane_g6

0x35b6,	// (0x0004c473) bg_popup_heading_pane_g7

0x35be,	// (0x0004c47b) bg_popup_heading_pane_g8

0x35c8,	// (0x0004c485) bg_popup_heading_pane_g9

0x0008,

0xf87b,	// (0x00058738) bg_popup_heading_pane_g

0x2cc4,	// (0x0004bb81) bg_popup_sub_pane_g1

0x2ccc,	// (0x0004bb89) bg_popup_sub_pane_g2

0x2cd4,	// (0x0004bb91) bg_popup_sub_pane_g3

0x2cdc,	// (0x0004bb99) bg_popup_sub_pane_g4

0x2ce4,	// (0x0004bba1) bg_popup_sub_pane_g5

0x2cec,	// (0x0004bba9) bg_popup_sub_pane_g6

0x2cf4,	// (0x0004bbb1) bg_popup_sub_pane_g7

0x2cfc,	// (0x0004bbb9) bg_popup_sub_pane_g8

0x2d04,	// (0x0004bbc1) bg_popup_sub_pane_g9

0x0008,

0xf855,	// (0x00058712) bg_popup_sub_pane_g

0x99cf,	// (0x0005288c) bg_popup_window_pane_cp5_ParamLimits

0x99cf,	// (0x0005288c) bg_popup_window_pane_cp5

0x9d91,	// (0x00052c4e) popup_note_window_g1_ParamLimits

0x9d91,	// (0x00052c4e) popup_note_window_g1

0x9d9d,	// (0x00052c5a) popup_note_window_t1_ParamLimits

0x9d9d,	// (0x00052c5a) popup_note_window_t1

0x9db3,	// (0x00052c70) popup_note_window_t2_ParamLimits

0x9db3,	// (0x00052c70) popup_note_window_t2

0x9dc9,	// (0x00052c86) popup_note_window_t3_ParamLimits

0x9dc9,	// (0x00052c86) popup_note_window_t3

0x9ddf,	// (0x00052c9c) popup_note_window_t4_ParamLimits

0x9ddf,	// (0x00052c9c) popup_note_window_t4

0x9e07,	// (0x00052cc4) popup_note_window_t5_ParamLimits

0x9e07,	// (0x00052cc4) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005843c) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005843c) popup_note_window_t

0x9e2b,	// (0x00052ce8) bg_popup_window_pane_cp6_ParamLimits

0x9e2b,	// (0x00052ce8) bg_popup_window_pane_cp6

0x3453,	// (0x0004c310) popup_note_image_window_g1_ParamLimits

0x3453,	// (0x0004c310) popup_note_image_window_g1

0xc802,	// (0x000556bf) popup_note_image_window_g2_ParamLimits

0xc802,	// (0x000556bf) popup_note_image_window_g2

0x0001,

0xf849,	// (0x00058706) popup_note_image_window_g_ParamLimits

0xf849,	// (0x00058706) popup_note_image_window_g

0x3478,	// (0x0004c335) popup_note_image_window_t1_ParamLimits

0x3478,	// (0x0004c335) popup_note_image_window_t1

0x3491,	// (0x0004c34e) popup_note_image_window_t2_ParamLimits

0x3491,	// (0x0004c34e) popup_note_image_window_t2

0x34aa,	// (0x0004c367) popup_note_image_window_t3_ParamLimits

0x34aa,	// (0x0004c367) popup_note_image_window_t3

0x0002,

0xf84e,	// (0x0005870b) popup_note_image_window_t_ParamLimits

0xf84e,	// (0x0005870b) popup_note_image_window_t

0x331c,	// (0x0004c1d9) bg_popup_window_pane_cp7_ParamLimits

0x331c,	// (0x0004c1d9) bg_popup_window_pane_cp7

0x334c,	// (0x0004c209) popup_note_wait_window_g1_ParamLimits

0x334c,	// (0x0004c209) popup_note_wait_window_g1

0x3358,	// (0x0004c215) popup_note_wait_window_g2_ParamLimits

0x3358,	// (0x0004c215) popup_note_wait_window_g2

0x0002,

0xf837,	// (0x000586f4) popup_note_wait_window_g_ParamLimits

0xf837,	// (0x000586f4) popup_note_wait_window_g

0x3370,	// (0x0004c22d) popup_note_wait_window_t1_ParamLimits

0x3370,	// (0x0004c22d) popup_note_wait_window_t1

0xc7a3,	// (0x00055660) popup_note_wait_window_t2_ParamLimits

0xc7a3,	// (0x00055660) popup_note_wait_window_t2

0xc7c0,	// (0x0005567d) popup_note_wait_window_t3_ParamLimits

0xc7c0,	// (0x0005567d) popup_note_wait_window_t3

0xc7d3,	// (0x00055690) popup_note_wait_window_t4_ParamLimits

0xc7d3,	// (0x00055690) popup_note_wait_window_t4

0x0004,

0xf83e,	// (0x000586fb) popup_note_wait_window_t_ParamLimits

0xf83e,	// (0x000586fb) popup_note_wait_window_t

0x33ec,	// (0x0004c2a9) wait_bar_pane_ParamLimits

0x33ec,	// (0x0004c2a9) wait_bar_pane

0x977e,	// (0x0005263b) wait_anim_pane

0x977e,	// (0x0005263b) wait_border_pane

0x968e,	// (0x0005254b) wait_anim_pane_g1

0x968e,	// (0x0005254b) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x000585bb) wait_anim_pane_g

0x32c8,	// (0x0004c185) wait_border_pane_g1

0x32d3,	// (0x0004c190) wait_border_pane_g2

0x32dc,	// (0x0004c199) wait_border_pane_g3

0x0002,

0xf830,	// (0x000586ed) wait_border_pane_g

0x3133,	// (0x0004bff0) bg_popup_window_pane_cp16_ParamLimits

0x3133,	// (0x0004bff0) bg_popup_window_pane_cp16

0xc753,	// (0x00055610) indicator_popup_pane_cp4_ParamLimits

0xc753,	// (0x00055610) indicator_popup_pane_cp4

0x3247,	// (0x0004c104) popup_query_data_window_t1_ParamLimits

0x3247,	// (0x0004c104) popup_query_data_window_t1

0x3259,	// (0x0004c116) popup_query_data_window_t2_ParamLimits

0x3259,	// (0x0004c116) popup_query_data_window_t2

0x3272,	// (0x0004c12f) popup_query_data_window_t3_ParamLimits

0x3272,	// (0x0004c12f) popup_query_data_window_t3

0x0002,

0xf829,	// (0x000586e6) popup_query_data_window_t_ParamLimits

0xf829,	// (0x000586e6) popup_query_data_window_t

0xc767,	// (0x00055624) query_popup_data_pane_ParamLimits

0xc767,	// (0x00055624) query_popup_data_pane

0xc77b,	// (0x00055638) query_popup_data_pane_cp1_ParamLimits

0xc77b,	// (0x00055638) query_popup_data_pane_cp1

0x3133,	// (0x0004bff0) bg_popup_window_pane_cp10_ParamLimits

0x3133,	// (0x0004bff0) bg_popup_window_pane_cp10

0xc6ce,	// (0x0005558b) indicator_popup_pane_ParamLimits

0xc6ce,	// (0x0005558b) indicator_popup_pane

0xc6f0,	// (0x000555ad) popup_query_code_window_t1_ParamLimits

0xc6f0,	// (0x000555ad) popup_query_code_window_t1

0xc70a,	// (0x000555c7) popup_query_code_window_t2_ParamLimits

0xc70a,	// (0x000555c7) popup_query_code_window_t2

0x31ea,	// (0x0004c0a7) popup_query_code_window_t3_ParamLimits

0x31ea,	// (0x0004c0a7) popup_query_code_window_t3

0x0002,

0xf822,	// (0x000586df) popup_query_code_window_t_ParamLimits

0xf822,	// (0x000586df) popup_query_code_window_t

0x3219,	// (0x0004c0d6) query_popup_pane_ParamLimits

0x3219,	// (0x0004c0d6) query_popup_pane

0x9e2b,	// (0x00052ce8) bg_popup_window_pane_cp15_ParamLimits

0x9e2b,	// (0x00052ce8) bg_popup_window_pane_cp15

0x9e49,	// (0x00052d06) indicator_popup_pane_cp1_ParamLimits

0x9e49,	// (0x00052d06) indicator_popup_pane_cp1

0x9e5c,	// (0x00052d19) indicator_popup_pane_cp2_ParamLimits

0x9e5c,	// (0x00052d19) indicator_popup_pane_cp2

0x9e6f,	// (0x00052d2c) popup_query_data_code_window_g1_ParamLimits

0x9e6f,	// (0x00052d2c) popup_query_data_code_window_g1

0x9e82,	// (0x00052d3f) popup_query_data_code_window_t1_ParamLimits

0x9e82,	// (0x00052d3f) popup_query_data_code_window_t1

0x9e94,	// (0x00052d51) popup_query_data_code_window_t2_ParamLimits

0x9e94,	// (0x00052d51) popup_query_data_code_window_t2

0x9ea6,	// (0x00052d63) popup_query_data_code_window_t3_ParamLimits

0x9ea6,	// (0x00052d63) popup_query_data_code_window_t3

0x9ebc,	// (0x00052d79) popup_query_data_code_window_t4_ParamLimits

0x9ebc,	// (0x00052d79) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00058447) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00058447) popup_query_data_code_window_t

0x0501,	// (0x000493be) list_single_midp_graphic_pane_g3

0x9ed4,	// (0x00052d91) query_popup_data_pane_cp2_ParamLimits

0x9ee7,	// (0x00052da4) query_popup_pane_cp2_ParamLimits

0x9ee7,	// (0x00052da4) query_popup_pane_cp2

0x977e,	// (0x0005263b) bg_popup_window_pane_cp11

0x312b,	// (0x0004bfe8) heading_pane_cp5

0x9fd0,	// (0x00052e8d) listscroll_popup_info_pane

0x977e,	// (0x0005263b) input_focus_pane_cp3

0x9efa,	// (0x00052db7) query_popup_pane_t1

0x9f08,	// (0x00052dc5) list_popup_info_pane_ParamLimits

0x9f08,	// (0x00052dc5) list_popup_info_pane

0x9f17,	// (0x00052dd4) listscroll_popup_info_pane_g1

0x9f1f,	// (0x00052ddc) scroll_pane_cp7

0x9f29,	// (0x00052de6) popup_info_list_pane_t1_ParamLimits

0x9f29,	// (0x00052de6) popup_info_list_pane_t1

0x9f43,	// (0x00052e00) popup_info_list_pane_t2_ParamLimits

0x9f43,	// (0x00052e00) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00058450) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00058450) popup_info_list_pane_t

0x977e,	// (0x0005263b) bg_popup_window_pane_cp12

0xce7a,	// (0x00055d37) find_popup_pane

0x9a19,	// (0x000528d6) bg_popup_window_pane_cp3

0x9f5d,	// (0x00052e1a) heading_pane_cp3

0x9f69,	// (0x00052e26) listscroll_popup_graphic_pane

0x977e,	// (0x0005263b) bg_popup_window_pane_cp4

0x9fc8,	// (0x00052e85) heading_pane_cp4

0x9fd0,	// (0x00052e8d) listscroll_popup_colour_pane

0x9fd8,	// (0x00052e95) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9fd8,	// (0x00052e95) cell_large_graphic_colour_none_popup_pane

0x9fec,	// (0x00052ea9) grid_large_graphic_colour_popup_pane_ParamLimits

0x9fec,	// (0x00052ea9) grid_large_graphic_colour_popup_pane

0xa010,	// (0x00052ecd) listscroll_popup_colour_pane_g1_ParamLimits

0xa010,	// (0x00052ecd) listscroll_popup_colour_pane_g1

0xa027,	// (0x00052ee4) listscroll_popup_colour_pane_g2_ParamLimits

0xa027,	// (0x00052ee4) listscroll_popup_colour_pane_g2

0xa03e,	// (0x00052efb) listscroll_popup_colour_pane_g3_ParamLimits

0xa03e,	// (0x00052efb) listscroll_popup_colour_pane_g3

0xa04e,	// (0x00052f0b) listscroll_popup_colour_pane_g4_ParamLimits

0xa04e,	// (0x00052f0b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00058455) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00058455) listscroll_popup_colour_pane_g

0xa05e,	// (0x00052f1b) scroll_pane_cp6_ParamLimits

0xa05e,	// (0x00052f1b) scroll_pane_cp6

0xa070,	// (0x00052f2d) cell_large_graphic_colour_popup_pane_ParamLimits

0xa070,	// (0x00052f2d) cell_large_graphic_colour_popup_pane

0xa08f,	// (0x00052f4c) cell_large_graphic_colour_none_popup_pane_t1

0x977e,	// (0x0005263b) grid_highlight_pane_cp5

0xa09e,	// (0x00052f5b) cell_large_graphic_colour_popup_pane_g1

0xa0a6,	// (0x00052f63) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005845e) cell_large_graphic_colour_popup_pane_g

0xa0ae,	// (0x00052f6b) cell_large_graphic_colour_popup_pane_g2_copy1

0xa0b7,	// (0x00052f74) grid_highlight_pane_cp4

0xa0bf,	// (0x00052f7c) bg_popup_window_pane_cp8_ParamLimits

0xa0bf,	// (0x00052f7c) bg_popup_window_pane_cp8

0xa0da,	// (0x00052f97) popup_snote_single_text_window_g1_ParamLimits

0xa0da,	// (0x00052f97) popup_snote_single_text_window_g1

0xa0ec,	// (0x00052fa9) popup_snote_single_text_window_t1_ParamLimits

0xa0ec,	// (0x00052fa9) popup_snote_single_text_window_t1

0xa0ff,	// (0x00052fbc) popup_snote_single_text_window_t2_ParamLimits

0xa0ff,	// (0x00052fbc) popup_snote_single_text_window_t2

0xa112,	// (0x00052fcf) popup_snote_single_text_window_t3_ParamLimits

0xa112,	// (0x00052fcf) popup_snote_single_text_window_t3

0xa14b,	// (0x00053008) popup_snote_single_text_window_t4_ParamLimits

0xa14b,	// (0x00053008) popup_snote_single_text_window_t4

0xa17f,	// (0x0005303c) popup_snote_single_text_window_t5_ParamLimits

0xa17f,	// (0x0005303c) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00058463) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00058463) popup_snote_single_text_window_t

0xa1ae,	// (0x0005306b) bg_popup_window_pane_cp9_ParamLimits

0xa1ae,	// (0x0005306b) bg_popup_window_pane_cp9

0xa0da,	// (0x00052f97) popup_snote_single_graphic_window_g1_ParamLimits

0xa0da,	// (0x00052f97) popup_snote_single_graphic_window_g1

0xa1bc,	// (0x00053079) popup_snote_single_graphic_window_g2_ParamLimits

0xa1bc,	// (0x00053079) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005846e) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005846e) popup_snote_single_graphic_window_g

0xa1c8,	// (0x00053085) popup_snote_single_graphic_window_t1_ParamLimits

0xa1c8,	// (0x00053085) popup_snote_single_graphic_window_t1

0xa1db,	// (0x00053098) popup_snote_single_graphic_window_t2_ParamLimits

0xa1db,	// (0x00053098) popup_snote_single_graphic_window_t2

0xa112,	// (0x00052fcf) popup_snote_single_graphic_window_t3_ParamLimits

0xa112,	// (0x00052fcf) popup_snote_single_graphic_window_t3

0xa14b,	// (0x00053008) popup_snote_single_graphic_window_t4_ParamLimits

0xa14b,	// (0x00053008) popup_snote_single_graphic_window_t4

0xa1ee,	// (0x000530ab) popup_snote_single_graphic_window_t5_ParamLimits

0xa1ee,	// (0x000530ab) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00058473) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00058473) popup_snote_single_graphic_window_t

0x437f,	// (0x0004d23c) grid_graphic_popup_pane_ParamLimits

0x437f,	// (0x0004d23c) grid_graphic_popup_pane

0x43a9,	// (0x0004d266) listscroll_popup_graphic_pane_g1_ParamLimits

0x43a9,	// (0x0004d266) listscroll_popup_graphic_pane_g1

0xce18,	// (0x00055cd5) listscroll_popup_graphic_pane_g2_ParamLimits

0xce18,	// (0x00055cd5) listscroll_popup_graphic_pane_g2

0x0001,

0xf99f,	// (0x0005885c) listscroll_popup_graphic_pane_g_ParamLimits

0xf99f,	// (0x0005885c) listscroll_popup_graphic_pane_g

0x43d1,	// (0x0004d28e) scroll_pane_cp5

0xcdbd,	// (0x00055c7a) cell_graphic_popup_pane_ParamLimits

0xcdbd,	// (0x00055c7a) cell_graphic_popup_pane

0x42ff,	// (0x0004d1bc) cell_graphic_popup_pane_g1

0x4307,	// (0x0004d1c4) cell_graphic_popup_pane_g2

0xa0ae,	// (0x00052f6b) cell_graphic_popup_pane_g3

0x0002,

0xf998,	// (0x00058855) cell_graphic_popup_pane_g

0x4310,	// (0x0004d1cd) cell_graphic_popup_pane_t2

0xa0b7,	// (0x00052f74) grid_highlight_pane_cp3

0xa22f,	// (0x000530ec) list_gen_pane_ParamLimits

0xa22f,	// (0x000530ec) list_gen_pane

0xa261,	// (0x0005311e) scroll_pane

0xcd27,	// (0x00055be4) bg_list_pane_g1_ParamLimits

0xcd27,	// (0x00055be4) bg_list_pane_g1

0xcd42,	// (0x00055bff) bg_list_pane_g2_ParamLimits

0xcd42,	// (0x00055bff) bg_list_pane_g2

0xcd55,	// (0x00055c12) bg_list_pane_g3_ParamLimits

0xcd55,	// (0x00055c12) bg_list_pane_g3

0xcd67,	// (0x00055c24) bg_list_pane_g4_ParamLimits

0xcd67,	// (0x00055c24) bg_list_pane_g4

0xcd79,	// (0x00055c36) bg_list_pane_g5_ParamLimits

0xcd79,	// (0x00055c36) bg_list_pane_g5

0x0004,

0xf98d,	// (0x0005884a) bg_list_pane_g_ParamLimits

0xf98d,	// (0x0005884a) bg_list_pane_g

0xb7b8,	// (0x00054675) list_double2_graphic_large_graphic_pane_ParamLimits

0xb7b8,	// (0x00054675) list_double2_graphic_large_graphic_pane

0xb7b8,	// (0x00054675) list_double2_graphic_pane_ParamLimits

0xb7b8,	// (0x00054675) list_double2_graphic_pane

0xb7b8,	// (0x00054675) list_double2_large_graphic_pane_ParamLimits

0xb7b8,	// (0x00054675) list_double2_large_graphic_pane

0xb7b8,	// (0x00054675) list_double2_pane_ParamLimits

0xb7b8,	// (0x00054675) list_double2_pane

0xb7b8,	// (0x00054675) list_double_graphic_heading_pane_ParamLimits

0xb7b8,	// (0x00054675) list_double_graphic_heading_pane

0xb7b8,	// (0x00054675) list_double_graphic_pane_ParamLimits

0xb7b8,	// (0x00054675) list_double_graphic_pane

0xb7b8,	// (0x00054675) list_double_heading_pane_ParamLimits

0xb7b8,	// (0x00054675) list_double_heading_pane

0xb7b8,	// (0x00054675) list_double_large_graphic_pane_ParamLimits

0xb7b8,	// (0x00054675) list_double_large_graphic_pane

0xb7b8,	// (0x00054675) list_double_number_pane_ParamLimits

0xb7b8,	// (0x00054675) list_double_number_pane

0xb7b8,	// (0x00054675) list_double_pane_ParamLimits

0xb7b8,	// (0x00054675) list_double_pane

0xb7b8,	// (0x00054675) list_double_time_pane_ParamLimits

0xb7b8,	// (0x00054675) list_double_time_pane

0xb7b8,	// (0x00054675) list_setting_number_pane_ParamLimits

0xb7b8,	// (0x00054675) list_setting_number_pane

0xb7b8,	// (0x00054675) list_setting_pane_ParamLimits

0xb7b8,	// (0x00054675) list_setting_pane

0xccf0,	// (0x00055bad) list_single_2graphic_pane_ParamLimits

0xccf0,	// (0x00055bad) list_single_2graphic_pane

0xccf0,	// (0x00055bad) list_single_graphic_heading_pane_ParamLimits

0xccf0,	// (0x00055bad) list_single_graphic_heading_pane

0xccf0,	// (0x00055bad) list_single_graphic_pane_ParamLimits

0xccf0,	// (0x00055bad) list_single_graphic_pane

0xccf0,	// (0x00055bad) list_single_heading_pane_ParamLimits

0xccf0,	// (0x00055bad) list_single_heading_pane

0xccf0,	// (0x00055bad) list_single_large_graphic_pane_ParamLimits

0xccf0,	// (0x00055bad) list_single_large_graphic_pane

0xccf0,	// (0x00055bad) list_single_number_heading_pane_ParamLimits

0xccf0,	// (0x00055bad) list_single_number_heading_pane

0xccf0,	// (0x00055bad) list_single_number_pane_ParamLimits

0xccf0,	// (0x00055bad) list_single_number_pane

0xccf0,	// (0x00055bad) list_single_pane_ParamLimits

0xccf0,	// (0x00055bad) list_single_pane

0x977e,	// (0x0005263b) list_highlight_pane_cp1

0xf38b,	// (0x00058248) list_single_pane_g1_ParamLimits

0xf38b,	// (0x00058248) list_single_pane_g1

0xf397,	// (0x00058254) list_single_pane_g2_ParamLimits

0xf397,	// (0x00058254) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005848f) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005848f) list_single_pane_g

0x94bd,	// (0x0005237a) list_single_pane_t1_ParamLimits

0x94bd,	// (0x0005237a) list_single_pane_t1

0xf38b,	// (0x00058248) list_single_number_pane_g1_ParamLimits

0xf38b,	// (0x00058248) list_single_number_pane_g1

0xf397,	// (0x00058254) list_single_number_pane_g2_ParamLimits

0xf397,	// (0x00058254) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005848f) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005848f) list_single_number_pane_g

0xe19f,	// (0x0005705c) list_single_number_pane_t1_ParamLimits

0xe19f,	// (0x0005705c) list_single_number_pane_t1

0x947d,	// (0x0005233a) list_single_number_pane_t2_ParamLimits

0x947d,	// (0x0005233a) list_single_number_pane_t2

0x0001,

0xf94e,	// (0x0005880b) list_single_number_pane_t_ParamLimits

0xf94e,	// (0x0005880b) list_single_number_pane_t

0xe193,	// (0x00057050) list_single_graphic_pane_g1_ParamLimits

0xe193,	// (0x00057050) list_single_graphic_pane_g1

0xf38b,	// (0x00058248) list_single_graphic_pane_g2_ParamLimits

0xf38b,	// (0x00058248) list_single_graphic_pane_g2

0xf397,	// (0x00058254) list_single_graphic_pane_g3_ParamLimits

0xf397,	// (0x00058254) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005847e) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005847e) list_single_graphic_pane_g

0xe19f,	// (0x0005705c) list_single_graphic_pane_t1_ParamLimits

0xe19f,	// (0x0005705c) list_single_graphic_pane_t1

0x8e8b,	// (0x00051d48) list_single_heading_pane_g1_ParamLimits

0x8e8b,	// (0x00051d48) list_single_heading_pane_g1

0xf397,	// (0x00058254) list_single_heading_pane_g2_ParamLimits

0xf397,	// (0x00058254) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00058485) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00058485) list_single_heading_pane_g

0x8e9e,	// (0x00051d5b) list_single_heading_pane_t1_ParamLimits

0x8e9e,	// (0x00051d5b) list_single_heading_pane_t1

0xa295,	// (0x00053152) list_single_heading_pane_t2_ParamLimits

0xa295,	// (0x00053152) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005848a) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005848a) list_single_heading_pane_t

0xf38b,	// (0x00058248) list_single_number_heading_pane_g1_ParamLimits

0xf38b,	// (0x00058248) list_single_number_heading_pane_g1

0xf397,	// (0x00058254) list_single_number_heading_pane_g2_ParamLimits

0xf397,	// (0x00058254) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005848f) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005848f) list_single_number_heading_pane_g

0x8eb4,	// (0x00051d71) list_single_number_heading_pane_t1_ParamLimits

0x8eb4,	// (0x00051d71) list_single_number_heading_pane_t1

0x8eca,	// (0x00051d87) list_single_number_heading_pane_t2_ParamLimits

0x8eca,	// (0x00051d87) list_single_number_heading_pane_t2

0x8edc,	// (0x00051d99) list_single_number_heading_pane_t3_ParamLimits

0x8edc,	// (0x00051d99) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00058494) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00058494) list_single_number_heading_pane_t

0x8eee,	// (0x00051dab) list_single_graphic_heading_pane_g1_ParamLimits

0x8eee,	// (0x00051dab) list_single_graphic_heading_pane_g1

0xa2a7,	// (0x00053164) list_single_graphic_heading_pane_g4_ParamLimits

0xa2a7,	// (0x00053164) list_single_graphic_heading_pane_g4

0xf397,	// (0x00058254) list_single_graphic_heading_pane_g5_ParamLimits

0xf397,	// (0x00058254) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005849b) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005849b) list_single_graphic_heading_pane_g

0x8eb4,	// (0x00051d71) list_single_graphic_heading_pane_t1_ParamLimits

0x8eb4,	// (0x00051d71) list_single_graphic_heading_pane_t1

0x8f04,	// (0x00051dc1) list_single_graphic_heading_pane_t2_ParamLimits

0x8f04,	// (0x00051dc1) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x000584a2) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x000584a2) list_single_graphic_heading_pane_t

0x1310,	// (0x0004a1cd) list_single_large_graphic_pane_g1_ParamLimits

0x1310,	// (0x0004a1cd) list_single_large_graphic_pane_g1

0xf38b,	// (0x00058248) list_single_large_graphic_pane_g2_ParamLimits

0xf38b,	// (0x00058248) list_single_large_graphic_pane_g2

0xf397,	// (0x00058254) list_single_large_graphic_pane_g3_ParamLimits

0xf397,	// (0x00058254) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x000584a7) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x000584a7) list_single_large_graphic_pane_g

0x32d3,	// (0x0004c190) wait_border_pane_g2_copy1

0xa2b8,	// (0x00053175) list_single_large_graphic_pane_g4_cp2

0xe19f,	// (0x0005705c) list_single_large_graphic_pane_t1_ParamLimits

0xe19f,	// (0x0005705c) list_single_large_graphic_pane_t1

0x4c1a,	// (0x0004dad7) list_double_pane_g1_ParamLimits

0x4c1a,	// (0x0004dad7) list_double_pane_g1

0xf3a3,	// (0x00058260) list_double_pane_g2_ParamLimits

0xf3a3,	// (0x00058260) list_double_pane_g2

0x0001,

0xf5f1,	// (0x000584ae) list_double_pane_g_ParamLimits

0xf5f1,	// (0x000584ae) list_double_pane_g

0x8f1c,	// (0x00051dd9) list_double_pane_t1_ParamLimits

0x8f1c,	// (0x00051dd9) list_double_pane_t1

0x8f32,	// (0x00051def) list_double_pane_t2_ParamLimits

0x8f32,	// (0x00051def) list_double_pane_t2

0x0001,

0xf5f6,	// (0x000584b3) list_double_pane_t_ParamLimits

0xf5f6,	// (0x000584b3) list_double_pane_t

0x8f44,	// (0x00051e01) list_double2_pane_g1_ParamLimits

0x8f44,	// (0x00051e01) list_double2_pane_g1

0x8f55,	// (0x00051e12) list_double2_pane_g2_ParamLimits

0x8f55,	// (0x00051e12) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x000584b8) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x000584b8) list_double2_pane_g

0x8f61,	// (0x00051e1e) list_double2_pane_t1_ParamLimits

0x8f61,	// (0x00051e1e) list_double2_pane_t1

0x8f77,	// (0x00051e34) list_double2_pane_t2_ParamLimits

0x8f77,	// (0x00051e34) list_double2_pane_t2

0x0001,

0xf600,	// (0x000584bd) list_double2_pane_t_ParamLimits

0xf600,	// (0x000584bd) list_double2_pane_t

0x4c1a,	// (0x0004dad7) list_double_number_pane_g1_ParamLimits

0x4c1a,	// (0x0004dad7) list_double_number_pane_g1

0xf3a3,	// (0x00058260) list_double_number_pane_g2_ParamLimits

0xf3a3,	// (0x00058260) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x000584ae) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x000584ae) list_double_number_pane_g

0x8f89,	// (0x00051e46) list_double_number_pane_t1_ParamLimits

0x8f89,	// (0x00051e46) list_double_number_pane_t1

0x8f9b,	// (0x00051e58) list_double_number_pane_t2_ParamLimits

0x8f9b,	// (0x00051e58) list_double_number_pane_t2

0x8fb1,	// (0x00051e6e) list_double_number_pane_t3_ParamLimits

0x8fb1,	// (0x00051e6e) list_double_number_pane_t3

0x0002,

0xf605,	// (0x000584c2) list_double_number_pane_t_ParamLimits

0xf605,	// (0x000584c2) list_double_number_pane_t

0x8fc3,	// (0x00051e80) list_double_graphic_pane_g1_ParamLimits

0x8fc3,	// (0x00051e80) list_double_graphic_pane_g1

0x8fcf,	// (0x00051e8c) list_double_graphic_pane_g2_ParamLimits

0x8fcf,	// (0x00051e8c) list_double_graphic_pane_g2

0x8fde,	// (0x00051e9b) list_double_graphic_pane_g3_ParamLimits

0x8fde,	// (0x00051e9b) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x000584c9) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x000584c9) list_double_graphic_pane_g

0x8f9b,	// (0x00051e58) list_double_graphic_pane_t1_ParamLimits

0x8f9b,	// (0x00051e58) list_double_graphic_pane_t1

0x8fb1,	// (0x00051e6e) list_double_graphic_pane_t2_ParamLimits

0x8fb1,	// (0x00051e6e) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x000584d2) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x000584d2) list_double_graphic_pane_t

0x8ff6,	// (0x00051eb3) list_double2_graphic_pane_g1_ParamLimits

0x8ff6,	// (0x00051eb3) list_double2_graphic_pane_g1

0xa2c0,	// (0x0005317d) list_double2_graphic_pane_g2_ParamLimits

0xa2c0,	// (0x0005317d) list_double2_graphic_pane_g2

0xa2cc,	// (0x00053189) list_double2_graphic_pane_g3_ParamLimits

0xa2cc,	// (0x00053189) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x000584d7) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x000584d7) list_double2_graphic_pane_g

0x9002,	// (0x00051ebf) list_double2_graphic_pane_t1_ParamLimits

0x9002,	// (0x00051ebf) list_double2_graphic_pane_t1

0x9018,	// (0x00051ed5) list_double2_graphic_pane_t2_ParamLimits

0x9018,	// (0x00051ed5) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x000584de) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x000584de) list_double2_graphic_pane_t

0x902a,	// (0x00051ee7) list_double_large_graphic_pane_g1_ParamLimits

0x902a,	// (0x00051ee7) list_double_large_graphic_pane_g1

0x9049,	// (0x00051f06) list_double_large_graphic_pane_g2_ParamLimits

0x9049,	// (0x00051f06) list_double_large_graphic_pane_g2

0xf3a3,	// (0x00058260) list_double_large_graphic_pane_g3_ParamLimits

0xf3a3,	// (0x00058260) list_double_large_graphic_pane_g3

0x905f,	// (0x00051f1c) list_double_large_graphic_pane_g4_ParamLimits

0x905f,	// (0x00051f1c) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x000584e3) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x000584e3) list_double_large_graphic_pane_g

0x9072,	// (0x00051f2f) list_double_large_graphic_pane_t1_ParamLimits

0x9072,	// (0x00051f2f) list_double_large_graphic_pane_t1

0x908b,	// (0x00051f48) list_double_large_graphic_pane_t2_ParamLimits

0x908b,	// (0x00051f48) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x000584ee) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x000584ee) list_double_large_graphic_pane_t

0xa2d8,	// (0x00053195) list_double2_large_graphic_pane_g1_ParamLimits

0xa2d8,	// (0x00053195) list_double2_large_graphic_pane_g1

0x909d,	// (0x00051f5a) list_double2_large_graphic_pane_g2_ParamLimits

0x909d,	// (0x00051f5a) list_double2_large_graphic_pane_g2

0xa2cc,	// (0x00053189) list_double2_large_graphic_pane_g3_ParamLimits

0xa2cc,	// (0x00053189) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x000584f3) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x000584f3) list_double2_large_graphic_pane_g

0x9002,	// (0x00051ebf) list_double2_large_graphic_pane_t1_ParamLimits

0x9002,	// (0x00051ebf) list_double2_large_graphic_pane_t1

0x9018,	// (0x00051ed5) list_double2_large_graphic_pane_t2_ParamLimits

0x9018,	// (0x00051ed5) list_double2_large_graphic_pane_t2

0x0001,

0xf621,	// (0x000584de) list_double2_large_graphic_pane_t_ParamLimits

0xf621,	// (0x000584de) list_double2_large_graphic_pane_t

0x90ae,	// (0x00051f6b) list_double_heading_pane_g1_ParamLimits

0x90ae,	// (0x00051f6b) list_double_heading_pane_g1

0xa2e4,	// (0x000531a1) list_double_heading_pane_g2_ParamLimits

0xa2e4,	// (0x000531a1) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x000584fa) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x000584fa) list_double_heading_pane_g

0x90bf,	// (0x00051f7c) list_double_heading_pane_t1_ParamLimits

0x90bf,	// (0x00051f7c) list_double_heading_pane_t1

0x9018,	// (0x00051ed5) list_double_heading_pane_t2_ParamLimits

0x9018,	// (0x00051ed5) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x000584ff) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x000584ff) list_double_heading_pane_t

0x90d5,	// (0x00051f92) list_double_graphic_heading_pane_g1_ParamLimits

0x90d5,	// (0x00051f92) list_double_graphic_heading_pane_g1

0x90ae,	// (0x00051f6b) list_double_graphic_heading_pane_g2_ParamLimits

0x90ae,	// (0x00051f6b) list_double_graphic_heading_pane_g2

0xa2e4,	// (0x000531a1) list_double_graphic_heading_pane_g3_ParamLimits

0xa2e4,	// (0x000531a1) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00058504) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00058504) list_double_graphic_heading_pane_g

0x90bf,	// (0x00051f7c) list_double_graphic_heading_pane_t1_ParamLimits

0x90bf,	// (0x00051f7c) list_double_graphic_heading_pane_t1

0x9018,	// (0x00051ed5) list_double_graphic_heading_pane_t2_ParamLimits

0x9018,	// (0x00051ed5) list_double_graphic_heading_pane_t2

0x0001,

0xf642,	// (0x000584ff) list_double_graphic_heading_pane_t_ParamLimits

0xf642,	// (0x000584ff) list_double_graphic_heading_pane_t

0x90e1,	// (0x00051f9e) list_double_time_pane_g1_ParamLimits

0x90e1,	// (0x00051f9e) list_double_time_pane_g1

0xe1b5,	// (0x00057072) list_double_time_pane_g2_ParamLimits

0xe1b5,	// (0x00057072) list_double_time_pane_g2

0x0001,

0xf64e,	// (0x0005850b) list_double_time_pane_g_ParamLimits

0xf64e,	// (0x0005850b) list_double_time_pane_g

0x90f2,	// (0x00051faf) list_double_time_pane_t1_ParamLimits

0x90f2,	// (0x00051faf) list_double_time_pane_t1

0x9108,	// (0x00051fc5) list_double_time_pane_t2_ParamLimits

0x9108,	// (0x00051fc5) list_double_time_pane_t2

0x911a,	// (0x00051fd7) list_double_time_pane_t3_ParamLimits

0x911a,	// (0x00051fd7) list_double_time_pane_t3

0x912c,	// (0x00051fe9) list_double_time_pane_t4_ParamLimits

0x912c,	// (0x00051fe9) list_double_time_pane_t4

0x0003,

0xf653,	// (0x00058510) list_double_time_pane_t_ParamLimits

0xf653,	// (0x00058510) list_double_time_pane_t

0x913e,	// (0x00051ffb) list_setting_pane_g1_ParamLimits

0x913e,	// (0x00051ffb) list_setting_pane_g1

0x914a,	// (0x00052007) list_setting_pane_g2_ParamLimits

0x914a,	// (0x00052007) list_setting_pane_g2

0x0001,

0xf65c,	// (0x00058519) list_setting_pane_g_ParamLimits

0xf65c,	// (0x00058519) list_setting_pane_g

0x9156,	// (0x00052013) list_setting_pane_t1_ParamLimits

0x9156,	// (0x00052013) list_setting_pane_t1

0x9170,	// (0x0005202d) list_setting_pane_t2_ParamLimits

0x9170,	// (0x0005202d) list_setting_pane_t2

0x0002,

0xf661,	// (0x0005851e) list_setting_pane_t_ParamLimits

0xf661,	// (0x0005851e) list_setting_pane_t

0x91af,	// (0x0005206c) set_value_pane_cp_ParamLimits

0x91af,	// (0x0005206c) set_value_pane_cp

0x91bb,	// (0x00052078) list_setting_number_pane_g1_ParamLimits

0x91bb,	// (0x00052078) list_setting_number_pane_g1

0x91c7,	// (0x00052084) list_setting_number_pane_g2_ParamLimits

0x91c7,	// (0x00052084) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x00058525) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x00058525) list_setting_number_pane_g

0x91d3,	// (0x00052090) list_setting_number_pane_t1_ParamLimits

0x91d3,	// (0x00052090) list_setting_number_pane_t1

0x91ec,	// (0x000520a9) list_setting_number_pane_t2_ParamLimits

0x91ec,	// (0x000520a9) list_setting_number_pane_t2

0x9206,	// (0x000520c3) list_setting_number_pane_t3_ParamLimits

0x9206,	// (0x000520c3) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0005852a) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0005852a) list_setting_number_pane_t

0x91af,	// (0x0005206c) set_value_pane_ParamLimits

0x91af,	// (0x0005206c) set_value_pane

0xa2f0,	// (0x000531ad) bg_set_opt_pane_ParamLimits

0xa2f0,	// (0x000531ad) bg_set_opt_pane

0xe1c1,	// (0x0005707e) set_value_pane_t1

0xa311,	// (0x000531ce) slider_set_pane_cp3

0xa31a,	// (0x000531d7) volume_small_pane_cp

0xa323,	// (0x000531e0) list_form_gen_pane

0xa32c,	// (0x000531e9) scroll_pane_cp8

0x9249,	// (0x00052106) form_field_data_pane_ParamLimits

0x9249,	// (0x00052106) form_field_data_pane

0x9260,	// (0x0005211d) form_field_data_wide_pane_ParamLimits

0x9260,	// (0x0005211d) form_field_data_wide_pane

0x9280,	// (0x0005213d) form_field_popup_pane_ParamLimits

0x9280,	// (0x0005213d) form_field_popup_pane

0x9298,	// (0x00052155) form_field_popup_wide_pane_ParamLimits

0x9298,	// (0x00052155) form_field_popup_wide_pane

0xe1df,	// (0x0005709c) form_field_slider_pane_ParamLimits

0xe1df,	// (0x0005709c) form_field_slider_pane

0x92af,	// (0x0005216c) form_field_slider_wide_pane_ParamLimits

0x92af,	// (0x0005216c) form_field_slider_wide_pane

0xa33d,	// (0x000531fa) data_form_pane

0x92cc,	// (0x00052189) form_field_data_pane_t1

0xa349,	// (0x00053206) input_focus_pane

0xe1f2,	// (0x000570af) data_form_wide_pane

0xe20f,	// (0x000570cc) form_field_data_wide_pane_t1

0xa0cc,	// (0x00052f89) input_focus_pane_cp6

0x92e6,	// (0x000521a3) form_field_popup_pane_t1

0xa349,	// (0x00053206) input_focus_pane_cp7

0xa36b,	// (0x00053228) list_form_pane

0xe239,	// (0x000570f6) form_field_popup_wide_pane_t1

0xa349,	// (0x00053206) input_focus_pane_cp8

0xa377,	// (0x00053234) list_form_wide_pane

0x9308,	// (0x000521c5) form_field_slider_pane_t1_ParamLimits

0x9308,	// (0x000521c5) form_field_slider_pane_t1

0x9320,	// (0x000521dd) form_field_slider_pane_t2_ParamLimits

0x9320,	// (0x000521dd) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0005853a) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0005853a) form_field_slider_pane_t

0x99cf,	// (0x0005288c) input_focus_pane_cp9_ParamLimits

0x99cf,	// (0x0005288c) input_focus_pane_cp9

0x9335,	// (0x000521f2) slider_cont_pane_ParamLimits

0x9335,	// (0x000521f2) slider_cont_pane

0xa383,	// (0x00053240) form_field_slider_wide_pane_t1_ParamLimits

0xa383,	// (0x00053240) form_field_slider_wide_pane_t1

0xe24e,	// (0x0005710b) form_field_slider_wide_pane_t2_ParamLimits

0xe24e,	// (0x0005710b) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0005853f) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0005853f) form_field_slider_wide_pane_t

0x99cf,	// (0x0005288c) input_focus_pane_cp10_ParamLimits

0x99cf,	// (0x0005288c) input_focus_pane_cp10

0x9349,	// (0x00052206) slider_cont_pane_cp1_ParamLimits

0x9349,	// (0x00052206) slider_cont_pane_cp1

0x935d,	// (0x0005221a) slider_form_pane_cp

0xa395,	// (0x00053252) input_focus_pane_g1

0xa39d,	// (0x0005325a) input_focus_pane_g2

0xa3a5,	// (0x00053262) input_focus_pane_g3

0xa3ad,	// (0x0005326a) input_focus_pane_g4

0xa3b5,	// (0x00053272) input_focus_pane_g5

0xa3bd,	// (0x0005327a) input_focus_pane_g6

0xa3c5,	// (0x00053282) input_focus_pane_g7

0xa3cd,	// (0x0005328a) input_focus_pane_g8

0xa3d5,	// (0x00053292) input_focus_pane_g9

0x968e,	// (0x0005254b) input_focus_pane_g10

0x0009,

0xf687,	// (0x00058544) input_focus_pane_g

0x32dc,	// (0x0004c199) wait_border_pane_g3_copy1

0x9365,	// (0x00052222) data_form_pane_t1

0x968e,	// (0x0005254b) wait_anim_pane_g1_copy1

0x948f,	// (0x0005234c) data_form_wide_pane_t1

0x937f,	// (0x0005223c) list_form_graphic_pane_cp_ParamLimits

0x937f,	// (0x0005223c) list_form_graphic_pane_cp

0x41cb,	// (0x0004d088) slider_form_pane_g1

0x41d4,	// (0x0004d091) slider_form_pane_g2

0x0006,

0xf97e,	// (0x0005883b) slider_form_pane_g

0x937f,	// (0x0005223c) list_form_graphic_pane_ParamLimits

0x937f,	// (0x0005223c) list_form_graphic_pane

0x9391,	// (0x0005224e) list_form_graphic_pane_g1

0x9399,	// (0x00052256) list_form_graphic_pane_t1_ParamLimits

0x9399,	// (0x00052256) list_form_graphic_pane_t1

0x9a19,	// (0x000528d6) list_highlight_pane_cp5_ParamLimits

0x9a19,	// (0x000528d6) list_highlight_pane_cp5

0x93ae,	// (0x0005226b) find_pane_g1

0xa3dd,	// (0x0005329a) input_find_pane

0x93b7,	// (0x00052274) input_find_pane_g1_ParamLimits

0x93b7,	// (0x00052274) input_find_pane_g1

0x93c3,	// (0x00052280) input_find_pane_t1_ParamLimits

0x93c3,	// (0x00052280) input_find_pane_t1

0x93d8,	// (0x00052295) input_find_pane_t2_ParamLimits

0x93d8,	// (0x00052295) input_find_pane_t2

0x0001,

0xf69c,	// (0x00058559) input_find_pane_t_ParamLimits

0xf69c,	// (0x00058559) input_find_pane_t

0xa3e6,	// (0x000532a3) input_focus_pane_cp5_ParamLimits

0xa3e6,	// (0x000532a3) input_focus_pane_cp5

0xa400,	// (0x000532bd) bg_popup_window_pane_cp2_ParamLimits

0xa400,	// (0x000532bd) bg_popup_window_pane_cp2

0xa40d,	// (0x000532ca) listscroll_menu_pane_ParamLimits

0xa40d,	// (0x000532ca) listscroll_menu_pane

0xa419,	// (0x000532d6) popup_submenu_window_ParamLimits

0xa419,	// (0x000532d6) popup_submenu_window

0xa441,	// (0x000532fe) find_popup_pane_g1

0xa449,	// (0x00053306) input_popup_find_pane_cp

0xa3e6,	// (0x000532a3) input_focus_pane_cp4_ParamLimits

0xa3e6,	// (0x000532a3) input_focus_pane_cp4

0xa461,	// (0x0005331e) input_popup_find_pane_t1_ParamLimits

0xa461,	// (0x0005331e) input_popup_find_pane_t1

0x977e,	// (0x0005263b) bg_popup_sub_pane_cp

0xa48f,	// (0x0005334c) listscroll_popup_sub_pane

0xa497,	// (0x00053354) list_submenu_pane_ParamLimits

0xa497,	// (0x00053354) list_submenu_pane

0xa4a8,	// (0x00053365) scroll_pane_cp4

0xa4b0,	// (0x0005336d) list_single_popup_submenu_pane_ParamLimits

0xa4b0,	// (0x0005336d) list_single_popup_submenu_pane

0xa4c4,	// (0x00053381) list_single_popup_submenu_pane_g1

0xa4cc,	// (0x00053389) list_single_popup_submenu_pane_t1_ParamLimits

0xa4cc,	// (0x00053389) list_single_popup_submenu_pane_t1

0x99cf,	// (0x0005288c) bg_active_tab_pane_cp1_ParamLimits

0x99cf,	// (0x0005288c) bg_active_tab_pane_cp1

0xa4e1,	// (0x0005339e) tabs_2_active_pane_g1

0xa4e9,	// (0x000533a6) tabs_2_active_pane_t1

0x99cf,	// (0x0005288c) bg_passive_tab_pane_cp1_ParamLimits

0x99cf,	// (0x0005288c) bg_passive_tab_pane_cp1

0xa4e1,	// (0x0005339e) tabs_2_passive_pane_g1

0xa4e9,	// (0x000533a6) tabs_2_passive_pane_t1

0x9a19,	// (0x000528d6) bg_active_tab_pane_cp4

0xa4fb,	// (0x000533b8) tabs_2_long_active_pane_t1

0x27b7,	// (0x0004b674) bg_passive_tab_pane_cp4

0x0e35,	// (0x00049cf2) list_single_midp_graphic_pane_g4_ParamLimits

0x9a19,	// (0x000528d6) bg_active_tab_pane_cp5

0xa50e,	// (0x000533cb) tabs_3_long_active_pane_t1

0x27b7,	// (0x0004b674) bg_passive_tab_pane_cp5

0x0e35,	// (0x00049cf2) list_single_midp_graphic_pane_g4

0x9a19,	// (0x000528d6) bg_popup_window_pane_cp13_ParamLimits

0x9a19,	// (0x000528d6) bg_popup_window_pane_cp13

0xa529,	// (0x000533e6) listscroll_popup_fast_pane_ParamLimits

0xa529,	// (0x000533e6) listscroll_popup_fast_pane

0xa535,	// (0x000533f2) grid_popup_fast_pane_ParamLimits

0xa535,	// (0x000533f2) grid_popup_fast_pane

0xa547,	// (0x00053404) scroll_pane_cp9_ParamLimits

0xa547,	// (0x00053404) scroll_pane_cp9

0x5ab4,	// (0x0004e971) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5ab4,	// (0x0004e971) list_single_graphic_hl_pane_t1_cp2

0xa56b,	// (0x00053428) input_focus_pane_cp20_ParamLimits

0xa56b,	// (0x00053428) input_focus_pane_cp20

0xa579,	// (0x00053436) query_popup_data_pane_t1_ParamLimits

0xa579,	// (0x00053436) query_popup_data_pane_t1

0xa58c,	// (0x00053449) query_popup_data_pane_t2_ParamLimits

0xa58c,	// (0x00053449) query_popup_data_pane_t2

0xa5d2,	// (0x0005348f) query_popup_data_pane_t3_ParamLimits

0xa5d2,	// (0x0005348f) query_popup_data_pane_t3

0xa613,	// (0x000534d0) query_popup_data_pane_t4_ParamLimits

0xa613,	// (0x000534d0) query_popup_data_pane_t4

0xa64f,	// (0x0005350c) query_popup_data_pane_t5_ParamLimits

0xa64f,	// (0x0005350c) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0005855e) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0005855e) query_popup_data_pane_t

0xa395,	// (0x00053252) bg_set_opt_pane_g1

0xa39d,	// (0x0005325a) bg_set_opt_pane_g2

0xa3a5,	// (0x00053262) bg_set_opt_pane_g3

0xa3ad,	// (0x0005326a) bg_set_opt_pane_g4

0xa3b5,	// (0x00053272) bg_set_opt_pane_g5

0xa3bd,	// (0x0005327a) bg_set_opt_pane_g6

0xa3c5,	// (0x00053282) bg_set_opt_pane_g7

0xa3cd,	// (0x0005328a) bg_set_opt_pane_g8

0xa3d5,	// (0x00053292) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00058569) bg_set_opt_pane_g

0x02da,	// (0x00049197) control_top_pane_stacon_ParamLimits

0x02da,	// (0x00049197) control_top_pane_stacon

0x032d,	// (0x000491ea) signal_pane_stacon_ParamLimits

0x032d,	// (0x000491ea) signal_pane_stacon

0xe346,	// (0x00057203) stacon_top_pane_g1_ParamLimits

0xe346,	// (0x00057203) stacon_top_pane_g1

0x0352,	// (0x0004920f) title_pane_stacon_ParamLimits

0x0352,	// (0x0004920f) title_pane_stacon

0x037c,	// (0x00049239) uni_indicator_pane_stacon_ParamLimits

0x037c,	// (0x00049239) uni_indicator_pane_stacon

0x0391,	// (0x0004924e) battery_pane_stacon_ParamLimits

0x0391,	// (0x0004924e) battery_pane_stacon

0x03d5,	// (0x00049292) control_bottom_pane_stacon_ParamLimits

0x03d5,	// (0x00049292) control_bottom_pane_stacon

0x03f8,	// (0x000492b5) navi_pane_stacon_ParamLimits

0x03f8,	// (0x000492b5) navi_pane_stacon

0xe368,	// (0x00057225) stacon_bottom_pane_g1_ParamLimits

0xe368,	// (0x00057225) stacon_bottom_pane_g1

0xf3c4,	// (0x00058281) aid_levels_signal_lsc_ParamLimits

0xf3c4,	// (0x00058281) aid_levels_signal_lsc

0xf3da,	// (0x00058297) signal_pane_stacon_g1_ParamLimits

0xf3da,	// (0x00058297) signal_pane_stacon_g1

0xf3ee,	// (0x000582ab) signal_pane_stacon_g2_ParamLimits

0xf3ee,	// (0x000582ab) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0005857c) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0005857c) signal_pane_stacon_g

0xf423,	// (0x000582e0) title_pane_stacon_t1_ParamLimits

0xf423,	// (0x000582e0) title_pane_stacon_t1

0xa693,	// (0x00053550) uni_indicator_pane_stacon_g1

0xa69d,	// (0x0005355a) uni_indicator_pane_stacon_g2

0xa6a7,	// (0x00053564) uni_indicator_pane_stacon_g3

0xa6b1,	// (0x0005356e) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00058588) uni_indicator_pane_stacon_g

0xf448,	// (0x00058305) control_top_pane_stacon_g1

0xf450,	// (0x0005830d) control_top_pane_stacon_t1_ParamLimits

0xf450,	// (0x0005830d) control_top_pane_stacon_t1

0xf487,	// (0x00058344) aid_levels_battery_lsc_ParamLimits

0xf487,	// (0x00058344) aid_levels_battery_lsc

0xf49e,	// (0x0005835b) battery_pane_stacon_g1_ParamLimits

0xf49e,	// (0x0005835b) battery_pane_stacon_g1

0xf4b1,	// (0x0005836e) battery_pane_stacon_g2_ParamLimits

0xf4b1,	// (0x0005836e) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00058591) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00058591) battery_pane_stacon_g

0xf4ef,	// (0x000583ac) navi_icon_pane_stacon

0xf503,	// (0x000583c0) navi_navi_pane_stacon

0xf4ef,	// (0x000583ac) navi_text_pane_stacon

0xf448,	// (0x00058305) control_bottom_pane_stacon_g1

0xf517,	// (0x000583d4) control_bottom_pane_stacon_t1_ParamLimits

0xf517,	// (0x000583d4) control_bottom_pane_stacon_t1

0xa6d5,	// (0x00053592) grid_app_pane_ParamLimits

0xa6d5,	// (0x00053592) grid_app_pane

0xa70d,	// (0x000535ca) scroll_pane_cp15_ParamLimits

0xa70d,	// (0x000535ca) scroll_pane_cp15

0xa722,	// (0x000535df) cell_app_pane_ParamLimits

0xa722,	// (0x000535df) cell_app_pane

0xa767,	// (0x00053624) cell_app_pane_g1_ParamLimits

0xa767,	// (0x00053624) cell_app_pane_g1

0xa78b,	// (0x00053648) cell_app_pane_g2_ParamLimits

0xa78b,	// (0x00053648) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00058596) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00058596) cell_app_pane_g

0xa797,	// (0x00053654) cell_app_pane_t1_ParamLimits

0xa797,	// (0x00053654) cell_app_pane_t1

0xa7ae,	// (0x0005366b) grid_highlight_pane_ParamLimits

0xa7ae,	// (0x0005366b) grid_highlight_pane

0xa395,	// (0x00053252) cell_highlight_pane_g1

0xa39d,	// (0x0005325a) cell_highlight_pane_g2

0xa3a5,	// (0x00053262) cell_highlight_pane_g3

0xa3ad,	// (0x0005326a) cell_highlight_pane_g4

0xa3b5,	// (0x00053272) cell_highlight_pane_g5

0xa3bd,	// (0x0005327a) cell_highlight_pane_g6

0xa3c5,	// (0x00053282) cell_highlight_pane_g7

0xa3cd,	// (0x0005328a) cell_highlight_pane_g8

0xa3d5,	// (0x00053292) cell_highlight_pane_g9

0x968e,	// (0x0005254b) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00058544) cell_highlight_pane_g

0xa7c8,	// (0x00053685) bg_scroll_pane

0xa7e7,	// (0x000536a4) scroll_handle_pane

0xa823,	// (0x000536e0) scroll_bg_pane_g1

0xa838,	// (0x000536f5) scroll_bg_pane_g2

0xa850,	// (0x0005370d) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0005859b) scroll_bg_pane_g

0xa865,	// (0x00053722) scroll_handle_focus_pane_ParamLimits

0xa865,	// (0x00053722) scroll_handle_focus_pane

0xa823,	// (0x000536e0) scroll_handle_pane_g1

0xa872,	// (0x0005372f) scroll_handle_pane_g2

0xa850,	// (0x0005370d) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x000585a2) scroll_handle_pane_g

0xa3e6,	// (0x000532a3) bg_popup_sub_pane_cp21_ParamLimits

0xa3e6,	// (0x000532a3) bg_popup_sub_pane_cp21

0xa886,	// (0x00053743) popup_fep_japan_predictive_window_t1_ParamLimits

0xa886,	// (0x00053743) popup_fep_japan_predictive_window_t1

0xa89d,	// (0x0005375a) popup_fep_japan_predictive_window_t2_ParamLimits

0xa89d,	// (0x0005375a) popup_fep_japan_predictive_window_t2

0xa8d0,	// (0x0005378d) popup_fep_japan_predictive_window_t3_ParamLimits

0xa8d0,	// (0x0005378d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x000585a9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x000585a9) popup_fep_japan_predictive_window_t

0x977e,	// (0x0005263b) bg_popup_sub_pane_cp23

0xa907,	// (0x000537c4) listscroll_japin_cand_pane

0xa90f,	// (0x000537cc) popup_fep_japan_candidate_window_t1

0xa91d,	// (0x000537da) candidate_pane_ParamLimits

0xa91d,	// (0x000537da) candidate_pane

0xa92f,	// (0x000537ec) scroll_pane_cp30

0xa937,	// (0x000537f4) list_single_popup_jap_candidate_pane_ParamLimits

0xa937,	// (0x000537f4) list_single_popup_jap_candidate_pane

0x977e,	// (0x0005263b) list_highlight_pane_cp30

0xa94c,	// (0x00053809) list_single_popup_jap_candidate_pane_t1

0xa95b,	// (0x00053818) level_1_signal

0xa968,	// (0x00053825) level_2_signal

0xbfd1,	// (0x00054e8e) level_3_signal

0xbfde,	// (0x00054e9b) level_4_signal

0xbfeb,	// (0x00054ea8) level_5_signal

0xbff8,	// (0x00054eb5) level_6_signal

0xc005,	// (0x00054ec2) level_7_signal

0xa95b,	// (0x00053818) level_1_battery

0xa968,	// (0x00053825) level_2_battery

0xbfd1,	// (0x00054e8e) level_3_battery

0xbfde,	// (0x00054e9b) level_4_battery

0xbfeb,	// (0x00054ea8) level_5_battery

0xbff8,	// (0x00054eb5) level_6_battery

0xc005,	// (0x00054ec2) level_7_battery

0xc02a,	// (0x00054ee7) list_menu_pane_ParamLimits

0xc02a,	// (0x00054ee7) list_menu_pane

0xc040,	// (0x00054efd) scroll_pane_cp25_ParamLimits

0xc040,	// (0x00054efd) scroll_pane_cp25

0xa975,	// (0x00053832) list_double2_graphic_pane_cp2_ParamLimits

0xa975,	// (0x00053832) list_double2_graphic_pane_cp2

0xa975,	// (0x00053832) list_double2_large_graphic_pane_cp2_ParamLimits

0xa975,	// (0x00053832) list_double2_large_graphic_pane_cp2

0xa975,	// (0x00053832) list_double2_pane_cp2_ParamLimits

0xa975,	// (0x00053832) list_double2_pane_cp2

0xa975,	// (0x00053832) list_double_graphic_pane_cp2_ParamLimits

0xa975,	// (0x00053832) list_double_graphic_pane_cp2

0xa975,	// (0x00053832) list_double_large_graphic_pane_cp2_ParamLimits

0xa975,	// (0x00053832) list_double_large_graphic_pane_cp2

0xa975,	// (0x00053832) list_double_number_pane_cp2_ParamLimits

0xa975,	// (0x00053832) list_double_number_pane_cp2

0xa975,	// (0x00053832) list_double_pane_cp2_ParamLimits

0xa975,	// (0x00053832) list_double_pane_cp2

0xa984,	// (0x00053841) list_single_2graphic_pane_cp2_ParamLimits

0xa984,	// (0x00053841) list_single_2graphic_pane_cp2

0xa984,	// (0x00053841) list_single_graphic_heading_pane_cp2_ParamLimits

0xa984,	// (0x00053841) list_single_graphic_heading_pane_cp2

0xa984,	// (0x00053841) list_single_graphic_pane_cp2_ParamLimits

0xa984,	// (0x00053841) list_single_graphic_pane_cp2

0xa984,	// (0x00053841) list_single_heading_pane_cp2_ParamLimits

0xa984,	// (0x00053841) list_single_heading_pane_cp2

0xc069,	// (0x00054f26) list_single_large_graphic_pane_cp2_ParamLimits

0xc069,	// (0x00054f26) list_single_large_graphic_pane_cp2

0xa984,	// (0x00053841) list_single_number_heading_pane_cp2_ParamLimits

0xa984,	// (0x00053841) list_single_number_heading_pane_cp2

0xa984,	// (0x00053841) list_single_number_pane_cp2_ParamLimits

0xa984,	// (0x00053841) list_single_number_pane_cp2

0xa984,	// (0x00053841) list_single_pane_cp2_ParamLimits

0xa984,	// (0x00053841) list_single_pane_cp2

0xc083,	// (0x00054f40) bg_popup_sub_pane_cp22

0x0211,	// (0x000490ce) popup_side_volume_key_window_g1

0x0235,	// (0x000490f2) popup_side_volume_key_window_t1

0xaa4c,	// (0x00053909) volume_small_pane_cp1

0x99cf,	// (0x0005288c) bg_popup_sub_pane_cp24_ParamLimits

0x99cf,	// (0x0005288c) bg_popup_sub_pane_cp24

0xc099,	// (0x00054f56) fep_china_uni_candidate_pane_ParamLimits

0xc099,	// (0x00054f56) fep_china_uni_candidate_pane

0xc0ad,	// (0x00054f6a) fep_china_uni_entry_pane

0xc0bd,	// (0x00054f7a) popup_fep_china_uni_window_g1

0xaa54,	// (0x00053911) fep_china_uni_entry_pane_g1

0xaa5c,	// (0x00053919) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x000585da) fep_china_uni_entry_pane_g

0xe260,	// (0x0005711d) fep_entry_item_pane

0xe26a,	// (0x00057127) fep_candidate_item_pane

0xaa64,	// (0x00053921) fep_china_uni_candidate_pane_g1

0xe272,	// (0x0005712f) fep_china_uni_candidate_pane_g2

0xe27a,	// (0x00057137) fep_china_uni_candidate_pane_g3

0xaa6c,	// (0x00053929) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x000585df) fep_china_uni_candidate_pane_g

0x968e,	// (0x0005254b) fep_entry_item_pane_g1

0xe282,	// (0x0005713f) fep_entry_item_pane_t1_ParamLimits

0xe282,	// (0x0005713f) fep_entry_item_pane_t1

0xe298,	// (0x00057155) fep_candidate_item_pane_t1_ParamLimits

0xe298,	// (0x00057155) fep_candidate_item_pane_t1

0xe2ad,	// (0x0005716a) fep_candidate_item_pane_t2_ParamLimits

0xe2ad,	// (0x0005716a) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x000585e8) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x000585e8) fep_candidate_item_pane_t

0x9a19,	// (0x000528d6) list_highlight_pane_cp31_ParamLimits

0x9a19,	// (0x000528d6) list_highlight_pane_cp31

0xe2bf,	// (0x0005717c) level_1_signal_lsc

0xe2c8,	// (0x00057185) level_2_signal_lsc

0xe2d1,	// (0x0005718e) level_3_signal_lsc

0xe2da,	// (0x00057197) level_4_signal_lsc

0xe2e3,	// (0x000571a0) level_5_signal_lsc

0xe2ec,	// (0x000571a9) level_6_signal_lsc

0xe2f5,	// (0x000571b2) level_7_signal_lsc

0xe2f5,	// (0x000571b2) level_1_battery_lsc

0xe2fe,	// (0x000571bb) level_2_battery_lsc

0xe307,	// (0x000571c4) level_3_battery_lsc

0xe310,	// (0x000571cd) level_4_battery_lsc

0xe319,	// (0x000571d6) level_5_battery_lsc

0xe322,	// (0x000571df) level_6_battery_lsc

0xe2bf,	// (0x0005717c) level_7_battery_lsc

0xe32b,	// (0x000571e8) scroll_handle_focus_pane_g1

0xe334,	// (0x000571f1) scroll_handle_focus_pane_g2

0xe33d,	// (0x000571fa) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x000585ed) scroll_handle_focus_pane_g

0x93ed,	// (0x000522aa) list_single_2graphic_pane_g1_ParamLimits

0x93ed,	// (0x000522aa) list_single_2graphic_pane_g1

0xa2a7,	// (0x00053164) list_single_2graphic_pane_g2_ParamLimits

0xa2a7,	// (0x00053164) list_single_2graphic_pane_g2

0xf397,	// (0x00058254) list_single_2graphic_pane_g3_ParamLimits

0xf397,	// (0x00058254) list_single_2graphic_pane_g3

0x93f9,	// (0x000522b6) list_single_2graphic_pane_g4_ParamLimits

0x93f9,	// (0x000522b6) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x000585f4) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x000585f4) list_single_2graphic_pane_g

0x9405,	// (0x000522c2) list_single_2graphic_pane_t1_ParamLimits

0x9405,	// (0x000522c2) list_single_2graphic_pane_t1

0xaa74,	// (0x00053931) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xaa74,	// (0x00053931) list_double2_graphic_large_graphic_pane_g1

0x909d,	// (0x00051f5a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x909d,	// (0x00051f5a) list_double2_graphic_large_graphic_pane_g2

0xa2cc,	// (0x00053189) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa2cc,	// (0x00053189) list_double2_graphic_large_graphic_pane_g3

0x9433,	// (0x000522f0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9433,	// (0x000522f0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x000585fd) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x000585fd) list_double2_graphic_large_graphic_pane_g

0x943f,	// (0x000522fc) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x943f,	// (0x000522fc) list_double2_graphic_large_graphic_pane_t1

0x9455,	// (0x00052312) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9455,	// (0x00052312) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00058606) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00058606) list_double2_graphic_large_graphic_pane_t

0xaaf9,	// (0x000539b6) popup_fast_swap_window_ParamLimits

0xaaf9,	// (0x000539b6) popup_fast_swap_window

0xab15,	// (0x000539d2) popup_side_volume_key_window

0x048d,	// (0x0004934a) stacon_top_pane

0x0497,	// (0x00049354) status_pane_ParamLimits

0x0497,	// (0x00049354) status_pane

0xab2f,	// (0x000539ec) status_small_pane

0x977e,	// (0x0005263b) control_pane

0x977e,	// (0x0005263b) stacon_bottom_pane

0xa32c,	// (0x000531e9) scroll_pane_cp121

0xa323,	// (0x000531e0) set_content_pane

0xaa86,	// (0x00053943) bg_active_tab_pane_g1_cp1

0xaa8f,	// (0x0005394c) bg_active_tab_pane_g2_cp1

0xaa98,	// (0x00053955) bg_active_tab_pane_g3_cp1

0xaa86,	// (0x00053943) bg_passive_tab_pane_g1_cp1

0xaa8f,	// (0x0005394c) bg_passive_tab_pane_g2_cp1

0xaa98,	// (0x00053955) bg_passive_tab_pane_g3_cp1

0xaaa1,	// (0x0005395e) bg_active_tab_pane_g1_cp2

0xaa8f,	// (0x0005394c) bg_active_tab_pane_g2_cp2

0xaaaa,	// (0x00053967) bg_active_tab_pane_g3_cp2

0xaaa1,	// (0x0005395e) bg_passive_tab_pane_g1_cp2

0xaa8f,	// (0x0005394c) bg_passive_tab_pane_g2_cp2

0xaaaa,	// (0x00053967) bg_passive_tab_pane_g3_cp2

0xaab3,	// (0x00053970) bg_active_tab_pane_g1_cp3

0xaa8f,	// (0x0005394c) bg_active_tab_pane_g2_cp3

0xaabc,	// (0x00053979) bg_active_tab_pane_g3_cp3

0xaab3,	// (0x00053970) bg_passive_tab_pane_g1_cp3

0xaa8f,	// (0x0005394c) bg_passive_tab_pane_g2_cp3

0xaabc,	// (0x00053979) bg_passive_tab_pane_g3_cp3

0xaac5,	// (0x00053982) bg_active_tab_pane_g1_cp4

0xaa8f,	// (0x0005394c) bg_active_tab_pane_g2_cp4

0xaad0,	// (0x0005398d) bg_active_tab_pane_g3_cp4

0xaac5,	// (0x00053982) bg_passive_tab_pane_g1_cp4

0xaa8f,	// (0x0005394c) bg_passive_tab_pane_g2_cp4

0xaad0,	// (0x0005398d) bg_passive_tab_pane_g3_cp4

0xaadb,	// (0x00053998) bg_active_tab_pane_g1_cp5

0xaa8f,	// (0x0005394c) bg_active_tab_pane_g2_cp5

0xaae4,	// (0x000539a1) bg_active_tab_pane_g3_cp5

0xaadb,	// (0x00053998) bg_passive_tab_pane_g1_cp5

0xaa8f,	// (0x0005394c) bg_passive_tab_pane_g2_cp5

0xaae4,	// (0x000539a1) bg_passive_tab_pane_g3_cp5

0x4791,	// (0x0004d64e) list_set_graphic_pane_ParamLimits

0x4791,	// (0x0004d64e) list_set_graphic_pane

0x977e,	// (0x0005263b) bg_set_opt_pane_cp4

0xe384,	// (0x00057241) list_set_graphic_pane_g1_ParamLimits

0xe384,	// (0x00057241) list_set_graphic_pane_g1

0xe390,	// (0x0005724d) list_set_graphic_pane_g2_ParamLimits

0xe390,	// (0x0005724d) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0005860b) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0005860b) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x00058990) volume_small_pane_cp_g

0xaaed,	// (0x000539aa) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xaaed,	// (0x000539aa) list_double2_large_graphic_pane_g1_cp2

0xe3b2,	// (0x0005726f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xe3b2,	// (0x0005726f) list_double2_large_graphic_pane_g2_cp2

0xe3c3,	// (0x00057280) list_double2_large_graphic_pane_g3_cp2

0xe3cb,	// (0x00057288) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe3cb,	// (0x00057288) list_double2_large_graphic_pane_t1_cp2

0xe3e1,	// (0x0005729e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe3e1,	// (0x0005729e) list_double2_large_graphic_pane_t2_cp2

0xca51,	// (0x0005590e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xca51,	// (0x0005590e) list_double_large_graphic_pane_g1_cp2

0x3d9e,	// (0x0004cc5b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3d9e,	// (0x0004cc5b) list_double_large_graphic_pane_g2_cp2

0x05b2,	// (0x0004946f) list_double_large_graphic_pane_g3_cp2

0x3daf,	// (0x0004cc6c) list_double_large_graphic_pane_g4_cp

0x3db7,	// (0x0004cc74) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3db7,	// (0x0004cc74) list_double_large_graphic_pane_t1_cp2

0x3dce,	// (0x0004cc8b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3dce,	// (0x0004cc8b) list_double_large_graphic_pane_t2_cp2

0x04b0,	// (0x0004936d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x04b0,	// (0x0004936d) list_double2_graphic_pane_g1_cp2

0x04be,	// (0x0004937b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x04be,	// (0x0004937b) list_double2_graphic_pane_g2_cp2

0x04cf,	// (0x0004938c) list_double2_graphic_pane_g3_cp2

0x04d9,	// (0x00049396) list_double2_graphic_pane_t1_cp2_ParamLimits

0x04d9,	// (0x00049396) list_double2_graphic_pane_t1_cp2

0x04ef,	// (0x000493ac) list_double2_graphic_pane_t2_cp2_ParamLimits

0x04ef,	// (0x000493ac) list_double2_graphic_pane_t2_cp2

0xc0d9,	// (0x00054f96) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc0d9,	// (0x00054f96) list_single_number_heading_pane_g1_cp2

0x0501,	// (0x000493be) list_single_number_heading_pane_g2_cp2

0x0509,	// (0x000493c6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0509,	// (0x000493c6) list_single_number_heading_pane_t1_cp2

0x051f,	// (0x000493dc) list_single_number_heading_pane_t2_cp2_ParamLimits

0x051f,	// (0x000493dc) list_single_number_heading_pane_t2_cp2

0x0531,	// (0x000493ee) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0531,	// (0x000493ee) list_single_number_heading_pane_t3_cp2

0xc0d9,	// (0x00054f96) list_single_heading_pane_g1_cp2_ParamLimits

0xc0d9,	// (0x00054f96) list_single_heading_pane_g1_cp2

0x0501,	// (0x000493be) list_single_heading_pane_g2_cp2

0x0509,	// (0x000493c6) list_single_heading_pane_t1_cp2_ParamLimits

0x0509,	// (0x000493c6) list_single_heading_pane_t1_cp2

0x3b97,	// (0x0004ca54) list_single_heading_pane_t2_cp2_ParamLimits

0x3b97,	// (0x0004ca54) list_single_heading_pane_t2_cp2

0x3adf,	// (0x0004c99c) list_double_graphic_pane_g1_cp2_ParamLimits

0x3adf,	// (0x0004c99c) list_double_graphic_pane_g1_cp2

0x3aeb,	// (0x0004c9a8) list_double_graphic_pane_g2_cp2_ParamLimits

0x3aeb,	// (0x0004c9a8) list_double_graphic_pane_g2_cp2

0x3afa,	// (0x0004c9b7) list_double_graphic_pane_g3_cp2

0x3b02,	// (0x0004c9bf) list_double_graphic_pane_t1_cp2_ParamLimits

0x3b02,	// (0x0004c9bf) list_double_graphic_pane_t1_cp2

0x3b18,	// (0x0004c9d5) list_double_graphic_pane_t2_cp2_ParamLimits

0x3b18,	// (0x0004c9d5) list_double_graphic_pane_t2_cp2

0x05a6,	// (0x00049463) list_double_number_pane_g1_cp2_ParamLimits

0x05a6,	// (0x00049463) list_double_number_pane_g1_cp2

0x05b2,	// (0x0004946f) list_double_number_pane_g2_cp2

0x3aa3,	// (0x0004c960) list_double_number_pane_t1_cp2_ParamLimits

0x3aa3,	// (0x0004c960) list_double_number_pane_t1_cp2

0x3ab7,	// (0x0004c974) list_double_number_pane_t2_cp2_ParamLimits

0x3ab7,	// (0x0004c974) list_double_number_pane_t2_cp2

0x3acd,	// (0x0004c98a) list_double_number_pane_t3_cp2_ParamLimits

0x3acd,	// (0x0004c98a) list_double_number_pane_t3_cp2

0x398c,	// (0x0004c849) list_single_graphic_pane_g1_cp2_ParamLimits

0x398c,	// (0x0004c849) list_single_graphic_pane_g1_cp2

0x23aa,	// (0x0004b267) list_single_graphic_pane_g2_cp2_ParamLimits

0x23aa,	// (0x0004b267) list_single_graphic_pane_g2_cp2

0x23b6,	// (0x0004b273) list_single_graphic_pane_g3_cp2

0x3962,	// (0x0004c81f) list_single_graphic_pane_t1_cp2_ParamLimits

0x3962,	// (0x0004c81f) list_single_graphic_pane_t1_cp2

0x23aa,	// (0x0004b267) list_single_number_pane_g1_cp2_ParamLimits

0x23aa,	// (0x0004b267) list_single_number_pane_g1_cp2

0x23b6,	// (0x0004b273) list_single_number_pane_g2_cp2

0x3962,	// (0x0004c81f) list_single_number_pane_t1_cp2_ParamLimits

0x3962,	// (0x0004c81f) list_single_number_pane_t1_cp2

0x3978,	// (0x0004c835) list_single_number_pane_t2_cp2_ParamLimits

0x3978,	// (0x0004c835) list_single_number_pane_t2_cp2

0xe3b2,	// (0x0005726f) list_double2_pane_g1_cp2_ParamLimits

0xe3b2,	// (0x0005726f) list_double2_pane_g1_cp2

0xe3c3,	// (0x00057280) list_double2_pane_g2_cp2

0x057e,	// (0x0004943b) list_double2_pane_t1_cp2_ParamLimits

0x057e,	// (0x0004943b) list_double2_pane_t1_cp2

0x0594,	// (0x00049451) list_double2_pane_t2_cp2_ParamLimits

0x0594,	// (0x00049451) list_double2_pane_t2_cp2

0x05a6,	// (0x00049463) list_double_pane_g1_cp2_ParamLimits

0x05a6,	// (0x00049463) list_double_pane_g1_cp2

0x05b2,	// (0x0004946f) list_double_pane_g2_cp2

0x05ba,	// (0x00049477) list_double_pane_t1_cp2_ParamLimits

0x05ba,	// (0x00049477) list_double_pane_t1_cp2

0x05d0,	// (0x0004948d) list_double_pane_t2_cp2_ParamLimits

0x05d0,	// (0x0004948d) list_double_pane_t2_cp2

0xab3a,	// (0x000539f7) list_single_pane_cp2_g3

0x23aa,	// (0x0004b267) list_single_pane_g1_cp2_ParamLimits

0x23aa,	// (0x0004b267) list_single_pane_g1_cp2

0x23b6,	// (0x0004b273) list_single_pane_g2_cp2

0x23be,	// (0x0004b27b) list_single_pane_t1_cp2_ParamLimits

0x23be,	// (0x0004b27b) list_single_pane_t1_cp2

0xab42,	// (0x000539ff) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xab42,	// (0x000539ff) list_single_large_graphic_pane_g1_cp2

0x23e2,	// (0x0004b29f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x23e2,	// (0x0004b29f) list_single_large_graphic_pane_g2_cp2

0x23ee,	// (0x0004b2ab) list_single_large_graphic_pane_g3_cp2

0xab4e,	// (0x00053a0b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xab4e,	// (0x00053a0b) list_single_large_graphic_pane_g4_cp1

0x2410,	// (0x0004b2cd) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2410,	// (0x0004b2cd) list_single_large_graphic_pane_t1_cp2

0x392e,	// (0x0004c7eb) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x392e,	// (0x0004c7eb) list_single_graphic_heading_pane_g1_cp2

0x38fb,	// (0x0004c7b8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x38fb,	// (0x0004c7b8) list_single_graphic_heading_pane_g4_cp2

0x23b6,	// (0x0004b273) list_single_graphic_heading_pane_g5_cp2

0x393a,	// (0x0004c7f7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x393a,	// (0x0004c7f7) list_single_graphic_heading_pane_t1_cp2

0x3950,	// (0x0004c80d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3950,	// (0x0004c80d) list_single_graphic_heading_pane_t2_cp2

0x38ef,	// (0x0004c7ac) list_single_2graphic_pane_g1_cp2_ParamLimits

0x38ef,	// (0x0004c7ac) list_single_2graphic_pane_g1_cp2

0x38fb,	// (0x0004c7b8) list_single_2graphic_pane_g2_cp2_ParamLimits

0x38fb,	// (0x0004c7b8) list_single_2graphic_pane_g2_cp2

0x23b6,	// (0x0004b273) list_single_2graphic_pane_g3_cp2

0x390c,	// (0x0004c7c9) list_single_2graphic_pane_g4_cp2_ParamLimits

0x390c,	// (0x0004c7c9) list_single_2graphic_pane_g4_cp2

0x3918,	// (0x0004c7d5) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3918,	// (0x0004c7d5) list_single_2graphic_pane_t1_cp2

0x968e,	// (0x0005254b) list_highlight_pane_g10_cp1

0x34d7,	// (0x0004c394) list_highlight_pane_g1_cp1

0x34df,	// (0x0004c39c) list_highlight_pane_g2_cp1

0x34e7,	// (0x0004c3a4) list_highlight_pane_g3_cp1

0x34ef,	// (0x0004c3ac) list_highlight_pane_g4_cp1

0x34f7,	// (0x0004c3b4) list_highlight_pane_g5_cp1

0x34ff,	// (0x0004c3bc) list_highlight_pane_g6_cp1

0x3507,	// (0x0004c3c4) list_highlight_pane_g7_cp1

0x350f,	// (0x0004c3cc) list_highlight_pane_g8_cp1

0x3517,	// (0x0004c3d4) list_highlight_pane_g9_cp1

0xc7e6,	// (0x000556a3) form_field_slider_pane_t3

0xc7f4,	// (0x000556b1) form_field_slider_pane_t4

0x341b,	// (0x0004c2d8) slider_form_pane_ParamLimits

0x341b,	// (0x0004c2d8) slider_form_pane

0x977e,	// (0x0005263b) control_abbreviations

0x977e,	// (0x0005263b) control_conventions

0x977e,	// (0x0005263b) control_definitions

0x977e,	// (0x0005263b) format_table_attribute

0xca28,	// (0x000558e5) bg_popup_preview_window_pane_g9

0x977e,	// (0x0005263b) format_table_data2

0x977e,	// (0x0005263b) format_table_data3

0x977e,	// (0x0005263b) format_table_data_example

0x0008,

0x977e,	// (0x0005263b) intro_purpose

0xf8de,	// (0x0005879b) bg_popup_preview_window_pane_g

0x977e,	// (0x0005263b) texts_category

0x977e,	// (0x0005263b) texts_graphics

0x2426,	// (0x0004b2e3) text_digital

0x2435,	// (0x0004b2f2) text_primary

0x2444,	// (0x0004b301) text_primary_small

0x2453,	// (0x0004b310) text_secondary

0x2462,	// (0x0004b31f) text_title

0xcd8d,	// (0x00055c4a) bg_passive_tab_pane_g1_cp3_srt

0xaa8f,	// (0x0005394c) bg_passive_tab_pane_g2_cp3_srt

0xcd96,	// (0x00055c53) bg_passive_tab_pane_g3_cp3_srt

0x99cf,	// (0x0005288c) bg_active_tab_pane_cp3_srt_ParamLimits

0x99cf,	// (0x0005288c) bg_active_tab_pane_cp3_srt

0xcd9f,	// (0x00055c5c) tabs_4_active_pane_srt_g1

0xcda7,	// (0x00055c64) tabs_4_active_pane_srt_t1_ParamLimits

0xcda7,	// (0x00055c64) tabs_4_active_pane_srt_t1

0xcd8d,	// (0x00055c4a) bg_active_tab_pane_g1_cp3_copy1

0xaa8f,	// (0x0005394c) bg_active_tab_pane_g2_cp3_copy1

0xcd96,	// (0x00055c53) bg_active_tab_pane_g3_cp3_copy1

0x9a19,	// (0x000528d6) tabs_2_long_active_pane_srt_ParamLimits

0x9a19,	// (0x000528d6) tabs_2_long_active_pane_srt

0x9a19,	// (0x000528d6) tabs_2_long_passive_pane_srt_ParamLimits

0x9a19,	// (0x000528d6) tabs_2_long_passive_pane_srt

0x27b7,	// (0x0004b674) bg_passive_tab_pane_cp4_srt_ParamLimits

0x27b7,	// (0x0004b674) bg_passive_tab_pane_cp4_srt

0xcb40,	// (0x000559fd) bg_passive_tab_pane_g1_cp4_srt

0xaa8f,	// (0x0005394c) bg_passive_tab_pane_g2_cp4_srt

0xcb49,	// (0x00055a06) bg_passive_tab_pane_g3_cp4_srt

0x9a19,	// (0x000528d6) bg_active_tab_pane_cp4_srt_ParamLimits

0x9a19,	// (0x000528d6) bg_active_tab_pane_cp4_srt

0xcb52,	// (0x00055a0f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcb52,	// (0x00055a0f) tabs_2_long_active_pane_srt_t1

0xcb40,	// (0x000559fd) bg_active_tab_pane_g1_cp4_srt

0xaa8f,	// (0x0005394c) bg_active_tab_pane_g2_cp4_srt

0xcb49,	// (0x00055a06) bg_active_tab_pane_g3_cp4_srt

0x99cf,	// (0x0005288c) tabs_3_long_active_pane_srt_ParamLimits

0x99cf,	// (0x0005288c) tabs_3_long_active_pane_srt

0x99cf,	// (0x0005288c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x99cf,	// (0x0005288c) tabs_3_long_passive_pane_cp_srt

0x99cf,	// (0x0005288c) tabs_3_long_passive_pane_srt_ParamLimits

0x99cf,	// (0x0005288c) tabs_3_long_passive_pane_srt

0x27b7,	// (0x0004b674) bg_passive_tab_pane_cp5_srt_ParamLimits

0x27b7,	// (0x0004b674) bg_passive_tab_pane_cp5_srt

0xaadb,	// (0x00053998) bg_passive_tab_pane_g1_cp5_srt

0xaa8f,	// (0x0005394c) bg_passive_tab_pane_g2_cp5_srt

0xaae4,	// (0x000539a1) bg_passive_tab_pane_g3_cp5_srt

0x9a19,	// (0x000528d6) bg_active_tab_pane_cp5_srt_ParamLimits

0x9a19,	// (0x000528d6) bg_active_tab_pane_cp5_srt

0xcb2a,	// (0x000559e7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xcb2a,	// (0x000559e7) tabs_3_long_active_pane_srt_t1

0xaadb,	// (0x00053998) bg_active_tab_pane_g1_cp5_srt

0xaa8f,	// (0x0005394c) bg_active_tab_pane_g2_cp5_srt

0xaae4,	// (0x000539a1) bg_active_tab_pane_g3_cp5_srt

0x3fe2,	// (0x0004ce9f) navi_text_pane_srt_t1

0x3fda,	// (0x0004ce97) navi_icon_pane_srt_g1

0x2633,	// (0x0004b4f0) midp_editing_number_pane_srt

0x2471,	// (0x0004b32e) midp_ticker_pane_srt

0x263b,	// (0x0004b4f8) midp_ticker_pane_srt_g1

0x2643,	// (0x0004b500) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0005862a) midp_ticker_pane_srt_g

0x264b,	// (0x0004b508) midp_ticker_pane_srt_t1

0x3fcb,	// (0x0004ce88) midp_editing_number_pane_t1_copy1

0xab68,	// (0x00053a25) listscroll_midp_pane

0xab68,	// (0x00053a25) midp_form_pane

0xabd3,	// (0x00053a90) midp_info_popup_window_ParamLimits

0xabd3,	// (0x00053a90) midp_info_popup_window

0xa3e6,	// (0x000532a3) bg_popup_sub_pane_cp50_ParamLimits

0xa3e6,	// (0x000532a3) bg_popup_sub_pane_cp50

0x311f,	// (0x0004bfdc) listscroll_midp_info_pane_ParamLimits

0x311f,	// (0x0004bfdc) listscroll_midp_info_pane

0x30ff,	// (0x0004bfbc) listscroll_form_midp_pane_ParamLimits

0x30ff,	// (0x0004bfbc) listscroll_form_midp_pane

0x310b,	// (0x0004bfc8) scroll_bar_cp050

0x30ff,	// (0x0004bfbc) list_midp_pane

0xcf49,	// (0x00055e06) signal_pane_g2_cp

0x3019,	// (0x0004bed6) listscroll_midp_info_pane_t1_ParamLimits

0x3019,	// (0x0004bed6) listscroll_midp_info_pane_t1

0xc620,	// (0x000554dd) listscroll_midp_info_pane_t2_ParamLimits

0xc620,	// (0x000554dd) listscroll_midp_info_pane_t2

0xc65e,	// (0x0005551b) listscroll_midp_info_pane_t3_ParamLimits

0xc65e,	// (0x0005551b) listscroll_midp_info_pane_t3

0xc698,	// (0x00055555) listscroll_midp_info_pane_t4_ParamLimits

0xc698,	// (0x00055555) listscroll_midp_info_pane_t4

0x0003,

0xf819,	// (0x000586d6) listscroll_midp_info_pane_t_ParamLimits

0xf819,	// (0x000586d6) listscroll_midp_info_pane_t

0xa4a8,	// (0x00053365) scroll_pane_cp21

0x2fb9,	// (0x0004be76) form_midp_field_choice_group_pane

0xc5e3,	// (0x000554a0) form_midp_field_text_pane

0x2fff,	// (0x0004bebc) form_midp_field_time_pane

0x3007,	// (0x0004bec4) form_midp_gauge_slider_pane

0x3010,	// (0x0004becd) form_midp_gauge_wait_pane

0x977e,	// (0x0005263b) form_midp_image_pane

0x9467,	// (0x00052324) list_single_midp_pane_ParamLimits

0x9467,	// (0x00052324) list_single_midp_pane

0xc5c1,	// (0x0005547e) form_midp_field_text_pane_t1

0x2d38,	// (0x0004bbf5) input_focus_pane_cp050

0x2fa8,	// (0x0004be65) list_midp_form_text_pane

0x2f3d,	// (0x0004bdfa) form_midp_field_choice_group_pane_t1

0x2f4b,	// (0x0004be08) input_focus_pane_cp051

0x2f5f,	// (0x0004be1c) list_midp_choice_pane

0x977e,	// (0x0005263b) status_idle_pane

0x2f21,	// (0x0004bdde) form_midp_field_time_pane_t1

0x968e,	// (0x0005254b) wait_anim_pane_g2_copy1

0x2f2f,	// (0x0004bdec) form_midp_field_time_pane_t2

0x0001,

0x259b,	// (0x0004b458) aid_navinavi_width_2_pane

0xf814,	// (0x000586d1) form_midp_field_time_pane_t

0x977e,	// (0x0005263b) input_focus_pane_cp052

0x977e,	// (0x0005263b) bg_input_focus_pane_cp040

0x2ee1,	// (0x0004bd9e) form_midp_gauge_slider_pane_t1

0x2eef,	// (0x0004bdac) form_midp_gauge_slider_pane_t2

0xc5a5,	// (0x00055462) form_midp_gauge_slider_pane_t3

0xc5b3,	// (0x00055470) form_midp_gauge_slider_pane_t4

0x0003,

0xf80b,	// (0x000586c8) form_midp_gauge_slider_pane_t

0x2f19,	// (0x0004bdd6) form_midp_slider_pane

0x9a19,	// (0x000528d6) bg_input_focus_pane_cp041_ParamLimits

0x9a19,	// (0x000528d6) bg_input_focus_pane_cp041

0x2eae,	// (0x0004bd6b) form_midp_gauge_wait_pane_t1_ParamLimits

0x2eae,	// (0x0004bd6b) form_midp_gauge_wait_pane_t1

0x2ec0,	// (0x0004bd7d) form_midp_gauge_wait_pane_t2_ParamLimits

0x2ec0,	// (0x0004bd7d) form_midp_gauge_wait_pane_t2

0x0001,

0xf806,	// (0x000586c3) form_midp_gauge_wait_pane_t_ParamLimits

0xf806,	// (0x000586c3) form_midp_gauge_wait_pane_t

0x2ed2,	// (0x0004bd8f) form_midp_wait_pane_ParamLimits

0x2ed2,	// (0x0004bd8f) form_midp_wait_pane

0xc56f,	// (0x0005542c) form_midp_image_pane_g1

0xc578,	// (0x00055435) form_midp_image_pane_t1

0xc587,	// (0x00055444) form_midp_image_pane_t2

0xc596,	// (0x00055453) form_midp_image_pane_t3

0x0002,

0xf7ff,	// (0x000586bc) form_midp_image_pane_t

0x2e6f,	// (0x0004bd2c) list_single_midp_pane_g1

0xef20,	// (0x00057ddd) list_single_midp_pane_t1

0xc55a,	// (0x00055417) list_midp_form_item_pane_ParamLimits

0xc55a,	// (0x00055417) list_midp_form_item_pane

0x2543,	// (0x0004b400) list_midp_form_item_pane_t1

0x2552,	// (0x0004b40f) midp_ticker_pane_g1

0x255e,	// (0x0004b41b) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00058610) midp_ticker_pane_g

0x256a,	// (0x0004b427) midp_ticker_pane_t1

0x4218,	// (0x0004d0d5) midp_editing_number_pane_t1

0x41f6,	// (0x0004d0b3) midp_editing_number_pane

0x4205,	// (0x0004d0c2) midp_ticker_pane

0x3fbb,	// (0x0004ce78) ai_message_heading_pane

0x977e,	// (0x0005263b) bg_popup_window_pane_cp14

0x3fc3,	// (0x0004ce80) listscroll_ai_message_pane

0x3f45,	// (0x0004ce02) ai_message_heading_pane_g1_ParamLimits

0x3f45,	// (0x0004ce02) ai_message_heading_pane_g1

0xcaf2,	// (0x000559af) ai_message_heading_pane_g2_ParamLimits

0xcaf2,	// (0x000559af) ai_message_heading_pane_g2

0x3f5d,	// (0x0004ce1a) ai_message_heading_pane_g3_ParamLimits

0x3f5d,	// (0x0004ce1a) ai_message_heading_pane_g3

0x3f69,	// (0x0004ce26) ai_message_heading_pane_g4_ParamLimits

0x3f69,	// (0x0004ce26) ai_message_heading_pane_g4

0x0003,

0xf940,	// (0x000587fd) ai_message_heading_pane_g_ParamLimits

0xf940,	// (0x000587fd) ai_message_heading_pane_g

0xcafe,	// (0x000559bb) ai_message_heading_pane_t1_ParamLimits

0xcafe,	// (0x000559bb) ai_message_heading_pane_t1

0xcb18,	// (0x000559d5) ai_message_heading_pane_t2_ParamLimits

0xcb18,	// (0x000559d5) ai_message_heading_pane_t2

0x0001,

0xf949,	// (0x00058806) ai_message_heading_pane_t_ParamLimits

0xf949,	// (0x00058806) ai_message_heading_pane_t

0x3fa1,	// (0x0004ce5e) bg_popup_heading_pane_cp1_ParamLimits

0x3fa1,	// (0x0004ce5e) bg_popup_heading_pane_cp1

0x3f33,	// (0x0004cdf0) list_ai_message_pane_ParamLimits

0x3f33,	// (0x0004cdf0) list_ai_message_pane

0xa4a8,	// (0x00053365) scroll_pane_cp10

0x3ecf,	// (0x0004cd8c) list_ai_message_pane_g1

0x3ed7,	// (0x0004cd94) list_ai_message_pane_g2

0x0001,

0xf91d,	// (0x000587da) list_ai_message_pane_g

0x3edf,	// (0x0004cd9c) list_ai_message_pane_t1_ParamLimits

0x3edf,	// (0x0004cd9c) list_ai_message_pane_t1

0x3ef4,	// (0x0004cdb1) list_ai_message_pane_t2_ParamLimits

0x3ef4,	// (0x0004cdb1) list_ai_message_pane_t2

0x3f09,	// (0x0004cdc6) list_ai_message_pane_t3_ParamLimits

0x3f09,	// (0x0004cdc6) list_ai_message_pane_t3

0x3f1e,	// (0x0004cddb) list_ai_message_pane_t4_ParamLimits

0x3f1e,	// (0x0004cddb) list_ai_message_pane_t4

0x0003,

0xf922,	// (0x000587df) list_ai_message_pane_t_ParamLimits

0xf922,	// (0x000587df) list_ai_message_pane_t

0xcace,	// (0x0005598b) cell_ai_soft_ind_pane_ParamLimits

0xcace,	// (0x0005598b) cell_ai_soft_ind_pane

0x257c,	// (0x0004b439) cell_ai_soft_ind_pane_g1_ParamLimits

0x257c,	// (0x0004b439) cell_ai_soft_ind_pane_g1

0x977e,	// (0x0005263b) grid_highlight_cp1

0x2589,	// (0x0004b446) text_secondary_cp56_ParamLimits

0x2589,	// (0x0004b446) text_secondary_cp56

0x3e8f,	// (0x0004cd4c) example_general_pane_ParamLimits

0x3e8f,	// (0x0004cd4c) example_general_pane

0x3e9b,	// (0x0004cd58) example_parent_pane_g1_ParamLimits

0x3e9b,	// (0x0004cd58) example_parent_pane_g1

0x3ea7,	// (0x0004cd64) example_parent_pane_t1_ParamLimits

0x3ea7,	// (0x0004cd64) example_parent_pane_t1

0xb2ed,	// (0x000541aa) popup_preview_text_window_ParamLimits

0xb2ed,	// (0x000541aa) popup_preview_text_window

0x0602,	// (0x000494bf) list_single_pane_cp2_g4

0x9e2b,	// (0x00052ce8) bg_popup_preview_window_pane_ParamLimits

0x9e2b,	// (0x00052ce8) bg_popup_preview_window_pane

0xca30,	// (0x000558ed) popup_preview_text_window_t1_ParamLimits

0xca30,	// (0x000558ed) popup_preview_text_window_t1

0x3c07,	// (0x0004cac4) popup_preview_text_window_t2_ParamLimits

0x3c07,	// (0x0004cac4) popup_preview_text_window_t2

0x3c50,	// (0x0004cb0d) popup_preview_text_window_t3_ParamLimits

0x3c50,	// (0x0004cb0d) popup_preview_text_window_t3

0x3c95,	// (0x0004cb52) popup_preview_text_window_t4_ParamLimits

0x3c95,	// (0x0004cb52) popup_preview_text_window_t4

0x0004,

0xf8f1,	// (0x000587ae) popup_preview_text_window_t_ParamLimits

0xf8f1,	// (0x000587ae) popup_preview_text_window_t

0x3d13,	// (0x0004cbd0) scroll_pane_cp11

0x2cc4,	// (0x0004bb81) bg_popup_preview_window_pane_g1

0xc9f0,	// (0x000558ad) bg_popup_preview_window_pane_g2

0xc9f8,	// (0x000558b5) bg_popup_preview_window_pane_g3

0xca00,	// (0x000558bd) bg_popup_preview_window_pane_g4

0xca08,	// (0x000558c5) bg_popup_preview_window_pane_g5

0xca10,	// (0x000558cd) bg_popup_preview_window_pane_g6

0xca18,	// (0x000558d5) bg_popup_preview_window_pane_g7

0xca20,	// (0x000558dd) bg_popup_preview_window_pane_g8

0xed9d,	// (0x00057c5a) aid_popup_width_pane

0xb269,	// (0x00054126) popup_midp_note_alarm_window_ParamLimits

0xb269,	// (0x00054126) popup_midp_note_alarm_window

0xa33d,	// (0x000531fa) data_form_pane_ParamLimits

0x92c2,	// (0x0005217f) form_field_data_pane_g1

0x92cc,	// (0x00052189) form_field_data_pane_t1_ParamLimits

0xa349,	// (0x00053206) input_focus_pane_ParamLimits

0xe1f2,	// (0x000570af) data_form_wide_pane_ParamLimits

0xe203,	// (0x000570c0) form_field_data_wide_pane_g1

0xe20f,	// (0x000570cc) form_field_data_wide_pane_t1_ParamLimits

0xa0cc,	// (0x00052f89) input_focus_pane_cp6_ParamLimits

0xa453,	// (0x00053310) input_popup_find_pane_g1_ParamLimits

0xa453,	// (0x00053310) input_popup_find_pane_g1

0xf4c2,	// (0x0005837f) aid_navi_side_left_pane

0xf4d7,	// (0x00058394) aid_navi_side_right_pane

0x35d2,	// (0x0004c48f) bg_popup_window_pane_cp30_ParamLimits

0x35d2,	// (0x0004c48f) bg_popup_window_pane_cp30

0x364c,	// (0x0004c509) popup_midp_note_alarm_window_g1_ParamLimits

0x364c,	// (0x0004c509) popup_midp_note_alarm_window_g1

0x367c,	// (0x0004c539) popup_midp_note_alarm_window_t1_ParamLimits

0x367c,	// (0x0004c539) popup_midp_note_alarm_window_t1

0xc839,	// (0x000556f6) popup_midp_note_alarm_window_t2_ParamLimits

0xc839,	// (0x000556f6) popup_midp_note_alarm_window_t2

0xc8e7,	// (0x000557a4) popup_midp_note_alarm_window_t3_ParamLimits

0xc8e7,	// (0x000557a4) popup_midp_note_alarm_window_t3

0xc90f,	// (0x000557cc) popup_midp_note_alarm_window_t4_ParamLimits

0xc90f,	// (0x000557cc) popup_midp_note_alarm_window_t4

0x3813,	// (0x0004c6d0) popup_midp_note_alarm_window_t5_ParamLimits

0x3813,	// (0x0004c6d0) popup_midp_note_alarm_window_t5

0x000a,

0xf88e,	// (0x0005874b) popup_midp_note_alarm_window_t_ParamLimits

0xf88e,	// (0x0005874b) popup_midp_note_alarm_window_t

0x38bf,	// (0x0004c77c) wait_bar_pane_cp1_ParamLimits

0x38bf,	// (0x0004c77c) wait_bar_pane_cp1

0x977e,	// (0x0005263b) wait_anim_pane_copy1

0x977e,	// (0x0005263b) wait_border_pane_copy1

0x32c8,	// (0x0004c185) wait_border_pane_g1_copy1

0xe229,	// (0x000570e6) form_field_popup_pane_g1

0x92e6,	// (0x000521a3) form_field_popup_pane_t1_ParamLimits

0xa349,	// (0x00053206) input_focus_pane_cp7_ParamLimits

0xa36b,	// (0x00053228) list_form_pane_ParamLimits

0xe231,	// (0x000570ee) form_field_popup_wide_pane_g1

0xe239,	// (0x000570f6) form_field_popup_wide_pane_t1_ParamLimits

0xa349,	// (0x00053206) input_focus_pane_cp8_ParamLimits

0xa377,	// (0x00053234) list_form_wide_pane_ParamLimits

0xce00,	// (0x00055cbd) aid_size_cell_graphic_pane

0x9365,	// (0x00052222) data_form_pane_t1_ParamLimits

0x948f,	// (0x0005234c) data_form_wide_pane_t1_ParamLimits

0xc1c9,	// (0x00055086) bg_status_flat_pane

0x990b,	// (0x000527c8) title_pane_t1_ParamLimits

0x9997,	// (0x00052854) title_pane_t2_ParamLimits

0x99bd,	// (0x0005287a) title_pane_t3_ParamLimits

0xf557,	// (0x00058414) title_pane_t_ParamLimits

0xa95b,	// (0x00053818) level_1_signal_ParamLimits

0xa968,	// (0x00053825) level_2_signal_ParamLimits

0xbfd1,	// (0x00054e8e) level_3_signal_ParamLimits

0xbfde,	// (0x00054e9b) level_4_signal_ParamLimits

0xbfeb,	// (0x00054ea8) level_5_signal_ParamLimits

0xbff8,	// (0x00054eb5) level_6_signal_ParamLimits

0xc005,	// (0x00054ec2) level_7_signal_ParamLimits

0xa95b,	// (0x00053818) level_1_battery_ParamLimits

0xa968,	// (0x00053825) level_2_battery_ParamLimits

0xbfd1,	// (0x00054e8e) level_3_battery_ParamLimits

0xbfde,	// (0x00054e9b) level_4_battery_ParamLimits

0xbfeb,	// (0x00054ea8) level_5_battery_ParamLimits

0xbff8,	// (0x00054eb5) level_6_battery_ParamLimits

0xc005,	// (0x00054ec2) level_7_battery_ParamLimits

0x34d7,	// (0x0004c394) bg_status_flat_pane_g1

0x34df,	// (0x0004c39c) bg_status_flat_pane_g2

0x34e7,	// (0x0004c3a4) bg_status_flat_pane_g3

0x34ef,	// (0x0004c3ac) bg_status_flat_pane_g4

0x34f7,	// (0x0004c3b4) bg_status_flat_pane_g5

0x34ff,	// (0x0004c3bc) bg_status_flat_pane_g6

0x3507,	// (0x0004c3c4) bg_status_flat_pane_g7

0x99e5,	// (0x000528a2) tabs_3_active_pane_t1_ParamLimits

0x99e5,	// (0x000528a2) tabs_3_passive_pane_t1_ParamLimits

0x99ff,	// (0x000528bc) tabs_4_active_pane_t1_ParamLimits

0x99ff,	// (0x000528bc) tabs_4_1_passive_pane_t1_ParamLimits

0xa4e9,	// (0x000533a6) tabs_2_active_pane_t1_ParamLimits

0xa4e9,	// (0x000533a6) tabs_2_passive_pane_t1_ParamLimits

0x9a19,	// (0x000528d6) bg_active_tab_pane_cp4_ParamLimits

0xa4fb,	// (0x000533b8) tabs_2_long_active_pane_t1_ParamLimits

0x27b7,	// (0x0004b674) bg_passive_tab_pane_cp4_ParamLimits

0x0e5d,	// (0x00049d1a) list_single_midp_graphic_pane_t1_ParamLimits

0x9a19,	// (0x000528d6) bg_active_tab_pane_cp5_ParamLimits

0xa50e,	// (0x000533cb) tabs_3_long_active_pane_t1_ParamLimits

0x27b7,	// (0x0004b674) bg_passive_tab_pane_cp5_ParamLimits

0x0e5d,	// (0x00049d1a) list_single_midp_graphic_pane_t1

0xc1c9,	// (0x00055086) bg_status_flat_pane_ParamLimits

0x2957,	// (0x0004b814) indicator_pane_cp2_ParamLimits

0x2957,	// (0x0004b814) indicator_pane_cp2

0xc347,	// (0x00055204) navi_pane_srt_ParamLimits

0xc347,	// (0x00055204) navi_pane_srt

0x2aa6,	// (0x0004b963) popup_clock_digital_analogue_window_cp1

0x9bb9,	// (0x00052a76) indicator_pane_t1

0x2471,	// (0x0004b32e) copy_highlight_pane

0x2471,	// (0x0004b32e) cursor_graphics_pane

0x2471,	// (0x0004b32e) graphic_within_text_pane

0x2471,	// (0x0004b32e) link_highlight_pane

0x3cd6,	// (0x0004cb93) popup_preview_text_window_t5_ParamLimits

0x3cd6,	// (0x0004cb93) popup_preview_text_window_t5

0x25a3,	// (0x0004b460) cursor_digital_pane

0x25a3,	// (0x0004b460) cursor_primary_pane

0x25b4,	// (0x0004b471) cursor_primary_small_pane

0x25bc,	// (0x0004b479) cursor_secondary_pane

0x25c4,	// (0x0004b481) cursor_title_pane

0x25a3,	// (0x0004b460) link_highlight_digital_pane

0x25ab,	// (0x0004b468) link_highlight_primary_pane

0x25b4,	// (0x0004b471) link_highlight_primary_small_pane

0x25bc,	// (0x0004b479) link_highlight_secondary_pane

0x25c4,	// (0x0004b481) link_highlight_title_pane

0x25a3,	// (0x0004b460) copy_highlight_digital_pane

0x25a3,	// (0x0004b460) copy_highlight_primary_pane

0x25b4,	// (0x0004b471) copy_highlight_primary_small_pane

0x25bc,	// (0x0004b479) copy_highlight_secondary_pane

0x25c4,	// (0x0004b481) copy_highlight_title_pane

0x25bc,	// (0x0004b479) graphic_text_digital_pane

0x3575,	// (0x0004c432) graphic_text_primary_pane

0x357e,	// (0x0004c43b) graphic_text_primary_small_pane

0x25b4,	// (0x0004b471) graphic_text_secondary_pane

0x25a3,	// (0x0004b460) graphic_text_title_pane

0xac24,	// (0x00053ae1) cursor_primary_pane_g1

0x3567,	// (0x0004c424) cursor_text_primary_t1

0xc82f,	// (0x000556ec) cursor_primary_small_pane_g1

0x3559,	// (0x0004c416) cursor_text_primary_small_t1

0xc825,	// (0x000556e2) cursor_primary_small_pane_g1_copy1

0x3541,	// (0x0004c3fe) cursor_text_primary_small_t1_copy1

0x351f,	// (0x0004c3dc) cursor_text_title_t1

0xc81b,	// (0x000556d8) cursor_title_pane_g1

0xac24,	// (0x00053ae1) cursor_digital_pane_g1

0x25d6,	// (0x0004b493) cursor_text_digital_t1

0x25e4,	// (0x0004b4a1) link_highlight_primary_pane_g1

0x34c8,	// (0x0004c385) link_highlight_primary_pane_t1

0x25e4,	// (0x0004b4a1) link_highlight_primary_small_pane_g1

0x25ec,	// (0x0004b4a9) link_highlight_primary_small_pane_t1

0x25e4,	// (0x0004b4a1) link_highlight_secondary_pane_g1

0x25fb,	// (0x0004b4b8) link_highlight_secondary_pane_t1

0x342d,	// (0x0004c2ea) link_highlight_title_pane_g1

0x3444,	// (0x0004c301) link_highlight_title_pane_t1

0x342d,	// (0x0004c2ea) link_highlight_digital_pane_g1

0x3435,	// (0x0004c2f2) link_highlight_digital_pane_t1

0x32e7,	// (0x0004c1a4) copy_highlight_primary_pane_g1

0x330d,	// (0x0004c1ca) copy_highlight_primary_pane_t1

0x32e7,	// (0x0004c1a4) copy_highlight_primary_small_pane_g1

0x32fe,	// (0x0004c1bb) copy_highlight_primary_small_pane_t1

0x260a,	// (0x0004b4c7) copy_highlight_secondary_pane_g1

0x2612,	// (0x0004b4cf) copy_highlight_secondary_pane_t1

0x32e7,	// (0x0004c1a4) copy_highlight_title_pane_g1

0x32ef,	// (0x0004c1ac) copy_highlight_title_pane_t1

0x32e7,	// (0x0004c1a4) copy_highlight_digital_pane_g1

0x4535,	// (0x0004d3f2) copy_highlight_digital_pane_t1

0x4489,	// (0x0004d346) graphic_text_primary_pane_g1

0x4519,	// (0x0004d3d6) graphic_text_primary_pane_t1

0x4527,	// (0x0004d3e4) graphic_text_primary_pane_t2

0x0001,

0xf9bd,	// (0x0005887a) graphic_text_primary_pane_t

0x44f5,	// (0x0004d3b2) graphic_text_primary_small_pane_g1

0x44fd,	// (0x0004d3ba) graphic_text_primary_small_pane_t1

0x450b,	// (0x0004d3c8) graphic_text_primary_small_pane_t2

0x0001,

0xf9b8,	// (0x00058875) graphic_text_primary_small_pane_t

0x44d1,	// (0x0004d38e) graphic_text_secondary_pane_g1

0x44d9,	// (0x0004d396) graphic_text_secondary_pane_t1

0x44e7,	// (0x0004d3a4) graphic_text_secondary_pane_t2

0x0001,

0xf9b3,	// (0x00058870) graphic_text_secondary_pane_t

0x44ad,	// (0x0004d36a) graphic_text_title_pane_g1

0x44b5,	// (0x0004d372) graphic_text_title_pane_t1

0x44c3,	// (0x0004d380) graphic_text_title_pane_t2

0x0001,

0xf9ae,	// (0x0005886b) graphic_text_title_pane_t

0x4489,	// (0x0004d346) graphic_text_digital_pane_g1

0x4491,	// (0x0004d34e) graphic_text_digital_pane_t1

0x449f,	// (0x0004d35c) graphic_text_digital_pane_t2

0x0001,

0xf9a9,	// (0x00058866) graphic_text_digital_pane_t

0x9a19,	// (0x000528d6) navi_icon_pane_srt_ParamLimits

0x9a19,	// (0x000528d6) navi_icon_pane_srt

0x977e,	// (0x0005263b) navi_midp_pane_srt

0x977e,	// (0x0005263b) navi_navi_pane_srt

0x9a19,	// (0x000528d6) navi_text_pane_srt_ParamLimits

0x9a19,	// (0x000528d6) navi_text_pane_srt

0x4454,	// (0x0004d311) navi_navi_icon_text_pane_srt

0x445c,	// (0x0004d319) navi_navi_pane_srt_g1_ParamLimits

0x445c,	// (0x0004d319) navi_navi_pane_srt_g1

0x446e,	// (0x0004d32b) navi_navi_pane_srt_g2_ParamLimits

0x446e,	// (0x0004d32b) navi_navi_pane_srt_g2

0x0001,

0xf9a4,	// (0x00058861) navi_navi_pane_srt_g_ParamLimits

0xf9a4,	// (0x00058861) navi_navi_pane_srt_g

0x4480,	// (0x0004d33d) navi_navi_tabs_pane_srt

0x4454,	// (0x0004d311) navi_navi_text_pane_srt

0x4454,	// (0x0004d311) navi_navi_volume_pane_srt

0x4445,	// (0x0004d302) navi_navi_text_pane_srt_t1

0x1291,	// (0x0004a14e) navi_navi_volume_pane_srt_g1

0x1299,	// (0x0004a156) volume_small_pane_srt_ParamLimits

0x1299,	// (0x0004a156) volume_small_pane_srt

0x060a,	// (0x000494c7) volume_small_pane_srt_g1_ParamLimits

0x060a,	// (0x000494c7) volume_small_pane_srt_g1

0x061a,	// (0x000494d7) volume_small_pane_srt_g2_ParamLimits

0x061a,	// (0x000494d7) volume_small_pane_srt_g2

0x062b,	// (0x000494e8) volume_small_pane_srt_g3_ParamLimits

0x062b,	// (0x000494e8) volume_small_pane_srt_g3

0x063c,	// (0x000494f9) volume_small_pane_srt_g4_ParamLimits

0x063c,	// (0x000494f9) volume_small_pane_srt_g4

0x064d,	// (0x0004950a) volume_small_pane_srt_g5_ParamLimits

0x064d,	// (0x0004950a) volume_small_pane_srt_g5

0x065e,	// (0x0004951b) volume_small_pane_srt_g6_ParamLimits

0x065e,	// (0x0004951b) volume_small_pane_srt_g6

0x066f,	// (0x0004952c) volume_small_pane_srt_g7_ParamLimits

0x066f,	// (0x0004952c) volume_small_pane_srt_g7

0x0680,	// (0x0004953d) volume_small_pane_srt_g8_ParamLimits

0x0680,	// (0x0004953d) volume_small_pane_srt_g8

0x0691,	// (0x0004954e) volume_small_pane_srt_g9_ParamLimits

0x0691,	// (0x0004954e) volume_small_pane_srt_g9

0x06a2,	// (0x0004955f) volume_small_pane_srt_g10_ParamLimits

0x06a2,	// (0x0004955f) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00058615) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00058615) volume_small_pane_srt_g

0x9ed4,	// (0x00052d91) query_popup_data_pane_cp2

0x442b,	// (0x0004d2e8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x442b,	// (0x0004d2e8) navi_navi_icon_text_pane_srt_t1

0x3575,	// (0x0004c432) navi_tabs_2_long_pane_srt

0x3575,	// (0x0004c432) navi_tabs_2_pane_srt

0x3575,	// (0x0004c432) navi_tabs_3_long_pane_srt

0x3575,	// (0x0004c432) navi_tabs_3_pane_srt

0x3575,	// (0x0004c432) navi_tabs_4_pane_srt

0xb810,	// (0x000546cd) tabs_2_active_pane_srt_ParamLimits

0xb810,	// (0x000546cd) tabs_2_active_pane_srt

0xb820,	// (0x000546dd) tabs_2_passive_pane_srt_ParamLimits

0xb820,	// (0x000546dd) tabs_2_passive_pane_srt

0x2d38,	// (0x0004bbf5) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2d38,	// (0x0004bbf5) bg_passive_tab_pane_cp1_srt

0xce4a,	// (0x00055d07) bg_passive_tab_pane_g1_cp1_srt

0xaa8f,	// (0x0005394c) bg_passive_tab_pane_g2_cp1_srt

0xce53,	// (0x00055d10) bg_passive_tab_pane_g3_cp1_srt

0x99cf,	// (0x0005288c) bg_active_tab_pane_cp1_srt_ParamLimits

0x99cf,	// (0x0005288c) bg_active_tab_pane_cp1_srt

0xce5c,	// (0x00055d19) tabs_2_active_pane_srt_g1

0xce64,	// (0x00055d21) tabs_2_active_pane_srt_t1_ParamLimits

0xce64,	// (0x00055d21) tabs_2_active_pane_srt_t1

0xce4a,	// (0x00055d07) bg_active_tab_pane_g1_cp1_srt

0xaa8f,	// (0x0005394c) bg_active_tab_pane_g2_cp1_srt

0xce53,	// (0x00055d10) bg_active_tab_pane_g3_cp1_srt

0xb7dd,	// (0x0005469a) tabs_3_active_pane_srt_ParamLimits

0xb7dd,	// (0x0005469a) tabs_3_active_pane_srt

0xb7ee,	// (0x000546ab) tabs_3_passive_pane_cp_srt_ParamLimits

0xb7ee,	// (0x000546ab) tabs_3_passive_pane_cp_srt

0xb7ff,	// (0x000546bc) tabs_3_passive_pane_srt_ParamLimits

0xb7ff,	// (0x000546bc) tabs_3_passive_pane_srt

0x2d38,	// (0x0004bbf5) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2d38,	// (0x0004bbf5) bg_passive_tab_pane_cp2_srt

0xac2e,	// (0x00053aeb) bg_passive_tab_pane_g1_cp2_srt

0xaa8f,	// (0x0005394c) bg_passive_tab_pane_g2_cp2_srt

0xac37,	// (0x00053af4) bg_passive_tab_pane_g3_cp2_srt

0x99cf,	// (0x0005288c) bg_active_tab_pane_cp2_srt_ParamLimits

0x99cf,	// (0x0005288c) bg_active_tab_pane_cp2_srt

0xce2c,	// (0x00055ce9) tabs_3_active_pane_srt_g1

0xce34,	// (0x00055cf1) tabs_3_active_pane_srt_t1_ParamLimits

0xce34,	// (0x00055cf1) tabs_3_active_pane_srt_t1

0xac2e,	// (0x00053aeb) bg_active_tab_pane_g1_cp2_srt

0xaa8f,	// (0x0005394c) bg_active_tab_pane_g2_cp2_srt

0xac37,	// (0x00053af4) bg_active_tab_pane_g3_cp2_srt

0x11f6,	// (0x0004a0b3) tabs_4_active_pane_srt_ParamLimits

0x11f6,	// (0x0004a0b3) tabs_4_active_pane_srt

0x1208,	// (0x0004a0c5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1208,	// (0x0004a0c5) tabs_4_passive_pane_cp2_srt

0x0811,	// (0x000496ce) aid_size_cell_toolbar

0x4073,	// (0x0004cf30) main_idle_act_pane_ParamLimits

0xb0ab,	// (0x00053f68) popup_large_graphic_colour_window_ParamLimits

0xb59f,	// (0x0005445c) popup_toolbar_window_ParamLimits

0xb59f,	// (0x0005445c) popup_toolbar_window

0x4227,	// (0x0004d0e4) list_single_graphic_2heading_pane_ParamLimits

0x4227,	// (0x0004d0e4) list_single_graphic_2heading_pane

0xa6bb,	// (0x00053578) aid_size_cell_apps_grid_lsc_pane

0xa6cd,	// (0x0005358a) aid_size_cell_apps_grid_prt_pane

0x27b7,	// (0x0004b674) bg_wml_button_pane_cp1_ParamLimits

0x27b7,	// (0x0004b674) bg_wml_button_pane_cp1

0xc5c1,	// (0x0005547e) form_midp_field_text_pane_t1_ParamLimits

0x2d38,	// (0x0004bbf5) input_focus_pane_cp050_ParamLimits

0x2fa8,	// (0x0004be65) list_midp_form_text_pane_ParamLimits

0x2f4b,	// (0x0004be08) input_focus_pane_cp051_ParamLimits

0x2f5f,	// (0x0004be1c) list_midp_choice_pane_ParamLimits

0xc526,	// (0x000553e3) list_single_2graphic_pane_cp3_ParamLimits

0xc526,	// (0x000553e3) list_single_2graphic_pane_cp3

0xc53a,	// (0x000553f7) list_single_midp_graphic_pane_ParamLimits

0xc53a,	// (0x000553f7) list_single_midp_graphic_pane

0xe403,	// (0x000572c0) list_single_graphic_2heading_pane_g1_ParamLimits

0xe403,	// (0x000572c0) list_single_graphic_2heading_pane_g1

0xe40f,	// (0x000572cc) list_single_graphic_2heading_pane_g4_ParamLimits

0xe40f,	// (0x000572cc) list_single_graphic_2heading_pane_g4

0xe41b,	// (0x000572d8) list_single_graphic_2heading_pane_g5_ParamLimits

0xe41b,	// (0x000572d8) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00058668) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00058668) list_single_graphic_2heading_pane_g

0xe427,	// (0x000572e4) list_single_graphic_2heading_pane_t1_ParamLimits

0xe427,	// (0x000572e4) list_single_graphic_2heading_pane_t1

0xe43b,	// (0x000572f8) list_single_graphic_2heading_pane_t2_ParamLimits

0xe43b,	// (0x000572f8) list_single_graphic_2heading_pane_t2

0xe455,	// (0x00057312) list_single_graphic_2heading_pane_t3_ParamLimits

0xe455,	// (0x00057312) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0005866f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0005866f) list_single_graphic_2heading_pane_t

0x2c02,	// (0x0004babf) bg_popup_sub_pane_cp2

0x2c2c,	// (0x0004bae9) grid_toobar_pane

0x0de0,	// (0x00049c9d) cell_toolbar_pane_ParamLimits

0x0de0,	// (0x00049c9d) cell_toolbar_pane

0x2c68,	// (0x0004bb25) cell_toolbar_pane_g1_ParamLimits

0x2c68,	// (0x0004bb25) cell_toolbar_pane_g1

0xc4e6,	// (0x000553a3) cell_toolbar_pane_g2_ParamLimits

0xc4e6,	// (0x000553a3) cell_toolbar_pane_g2

0x0001,

0xf7b9,	// (0x00058676) cell_toolbar_pane_g_ParamLimits

0xf7b9,	// (0x00058676) cell_toolbar_pane_g

0x2c9e,	// (0x0004bb5b) grid_highlight_pane_cp2_ParamLimits

0x2c9e,	// (0x0004bb5b) grid_highlight_pane_cp2

0x2cb8,	// (0x0004bb75) toolbar_button_pane

0x2cc4,	// (0x0004bb81) toolbar_button_pane_g1

0x2ccc,	// (0x0004bb89) toolbar_button_pane_g2

0x2cd4,	// (0x0004bb91) toolbar_button_pane_g3

0x2cdc,	// (0x0004bb99) toolbar_button_pane_g4

0x2ce4,	// (0x0004bba1) toolbar_button_pane_g5

0x2cec,	// (0x0004bba9) toolbar_button_pane_g6

0x2cf4,	// (0x0004bbb1) toolbar_button_pane_g7

0x2cfc,	// (0x0004bbb9) toolbar_button_pane_g8

0x2d04,	// (0x0004bbc1) toolbar_button_pane_g9

0x0009,

0xf7be,	// (0x0005867b) toolbar_button_pane_g

0x0e18,	// (0x00049cd5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0e18,	// (0x00049cd5) list_single_2graphic_pane_g1_cp3

0xb64c,	// (0x00054509) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb64c,	// (0x00054509) list_single_2graphic_pane_g2_cp3

0x0501,	// (0x000493be) list_single_2graphic_pane_g3_cp3

0x0e35,	// (0x00049cf2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0e35,	// (0x00049cf2) list_single_2graphic_pane_g4_cp3

0xb65d,	// (0x0005451a) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb65d,	// (0x0005451a) list_single_2graphic_pane_t1_cp3

0xc0d9,	// (0x00054f96) list_single_midp_graphic_pane_g2_ParamLimits

0xc0d9,	// (0x00054f96) list_single_midp_graphic_pane_g2

0xe3f3,	// (0x000572b0) aid_zoom_text_primary

0x0819,	// (0x000496d6) aid_zoom_text_secondary

0xac8e,	// (0x00053b4b) status_small_pane_g7_ParamLimits

0xac8e,	// (0x00053b4b) status_small_pane_g7

0xacb1,	// (0x00053b6e) status_small_pane_t1_ParamLimits

0x98db,	// (0x00052798) title_pane_g2

0x0003,

0xf54e,	// (0x0005840b) title_pane_g

0x9f78,	// (0x00052e35) aid_size_cell_colour_1_pane_ParamLimits

0x9f78,	// (0x00052e35) aid_size_cell_colour_1_pane

0x9f8c,	// (0x00052e49) aid_size_cell_colour_2_pane_ParamLimits

0x9f8c,	// (0x00052e49) aid_size_cell_colour_2_pane

0x9fa0,	// (0x00052e5d) aid_size_cell_colour_3_pane_ParamLimits

0x9fa0,	// (0x00052e5d) aid_size_cell_colour_3_pane

0x9fb4,	// (0x00052e71) aid_size_cell_colour_4_pane_ParamLimits

0x9fb4,	// (0x00052e71) aid_size_cell_colour_4_pane

0xf3ff,	// (0x000582bc) title_pane_stacon_g1_ParamLimits

0xf3ff,	// (0x000582bc) title_pane_stacon_g1

0x3364,	// (0x0004c221) popup_note_wait_window_g3_ParamLimits

0x3364,	// (0x0004c221) popup_note_wait_window_g3

0x33da,	// (0x0004c297) popup_note_wait_window_t5_ParamLimits

0x33da,	// (0x0004c297) popup_note_wait_window_t5

0x977e,	// (0x0005263b) main_feb_china_hwr_fs_writing_pane

0xaf2d,	// (0x00053dea) popup_feb_china_hwr_fs_window_ParamLimits

0xaf2d,	// (0x00053dea) popup_feb_china_hwr_fs_window

0xb679,	// (0x00054536) aid_size_cell_hwr_fs_ParamLimits

0xb679,	// (0x00054536) aid_size_cell_hwr_fs

0x2d38,	// (0x0004bbf5) bg_popup_sub_pane_cp3_ParamLimits

0x2d38,	// (0x0004bbf5) bg_popup_sub_pane_cp3

0xb68e,	// (0x0005454b) grid_hwr_fs_pane_ParamLimits

0xb68e,	// (0x0005454b) grid_hwr_fs_pane

0x0eb8,	// (0x00049d75) linegrid_hwr_fs_pane_ParamLimits

0x0eb8,	// (0x00049d75) linegrid_hwr_fs_pane

0xb6a6,	// (0x00054563) cell_hwr_fs_pane_ParamLimits

0xb6a6,	// (0x00054563) cell_hwr_fs_pane

0x2d44,	// (0x0004bc01) linegrid_hwr_fs_pane_g1_ParamLimits

0x2d44,	// (0x0004bc01) linegrid_hwr_fs_pane_g1

0xc4fa,	// (0x000553b7) linegrid_hwr_fs_pane_g2_ParamLimits

0xc4fa,	// (0x000553b7) linegrid_hwr_fs_pane_g2

0x2d62,	// (0x0004bc1f) linegrid_hwr_fs_pane_g3_ParamLimits

0x2d62,	// (0x0004bc1f) linegrid_hwr_fs_pane_g3

0xb6cc,	// (0x00054589) linegrid_hwr_fs_pane_g4_ParamLimits

0xb6cc,	// (0x00054589) linegrid_hwr_fs_pane_g4

0x0f04,	// (0x00049dc1) linegrid_hwr_fs_pane_g5_ParamLimits

0x0f04,	// (0x00049dc1) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e4,	// (0x000586a1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e4,	// (0x000586a1) linegrid_hwr_fs_pane_g

0x2d6e,	// (0x0004bc2b) cell_hwr_fs_pane_g1_ParamLimits

0x2d6e,	// (0x0004bc2b) cell_hwr_fs_pane_g1

0x2b3c,	// (0x0004b9f9) cell_hwr_fs_pane_g2_ParamLimits

0x2b3c,	// (0x0004b9f9) cell_hwr_fs_pane_g2

0xc50c,	// (0x000553c9) cell_hwr_fs_pane_g3_ParamLimits

0xc50c,	// (0x000553c9) cell_hwr_fs_pane_g3

0xc519,	// (0x000553d6) cell_hwr_fs_pane_g4_ParamLimits

0xc519,	// (0x000553d6) cell_hwr_fs_pane_g4

0x0003,

0xf7ef,	// (0x000586ac) cell_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x000586ac) cell_hwr_fs_pane_g

0xb6e6,	// (0x000545a3) cell_hwr_fs_pane_t1

0x977e,	// (0x0005263b) grid_highlight_pane_cp6

0x977e,	// (0x0005263b) main_idle_act2_pane

0xa48f,	// (0x0005334c) aid_inside_area_popup_secondary

0xc94e,	// (0x0005580b) aid_inside_area_window_primary_ParamLimits

0xc94e,	// (0x0005580b) aid_inside_area_window_primary

0xce82,	// (0x00055d3f) ai2_news_ticker_pane

0x454c,	// (0x0004d409) aid_size_cell_ai1_link_ParamLimits

0x454c,	// (0x0004d409) aid_size_cell_ai1_link

0xce8a,	// (0x00055d47) popup_ai2_data_window_ParamLimits

0xce8a,	// (0x00055d47) popup_ai2_data_window

0x457c,	// (0x0004d439) popup_ai2_link_window_ParamLimits

0x457c,	// (0x0004d439) popup_ai2_link_window

0x2d38,	// (0x0004bbf5) bg_popup_sub_pane_cp4_ParamLimits

0x2d38,	// (0x0004bbf5) bg_popup_sub_pane_cp4

0x4590,	// (0x0004d44d) grid_ai2_link_pane_ParamLimits

0x4590,	// (0x0004d44d) grid_ai2_link_pane

0x45a7,	// (0x0004d464) popup_ai2_link_window_g1_ParamLimits

0x45a7,	// (0x0004d464) popup_ai2_link_window_g1

0x45b3,	// (0x0004d470) popup_ai2_link_window_g2_ParamLimits

0x45b3,	// (0x0004d470) popup_ai2_link_window_g2

0x0001,

0xf9c2,	// (0x0005887f) popup_ai2_link_window_g_ParamLimits

0xf9c2,	// (0x0005887f) popup_ai2_link_window_g

0x45c2,	// (0x0004d47f) ai2_mp_button_pane

0x45ca,	// (0x0004d487) ai2_mp_volume_pane

0x2f4b,	// (0x0004be08) bg_popup_sub_pane_cp5_ParamLimits

0x2f4b,	// (0x0004be08) bg_popup_sub_pane_cp5

0x45d2,	// (0x0004d48f) heading_ai2_gene_pane_ParamLimits

0x45d2,	// (0x0004d48f) heading_ai2_gene_pane

0x45de,	// (0x0004d49b) list_ai2_gene_pane_ParamLimits

0x45de,	// (0x0004d49b) list_ai2_gene_pane

0x4626,	// (0x0004d4e3) cell_ai2_link_pane_ParamLimits

0x4626,	// (0x0004d4e3) cell_ai2_link_pane

0x463c,	// (0x0004d4f9) cell_ai2_link_pane_g1

0x977e,	// (0x0005263b) grid_highlight_pane_cp7

0x12ae,	// (0x0004a16b) ai2_mp_volume_pane_g1

0x470c,	// (0x0004d5c9) ai2_mp_volume_pane_g2

0x4681,	// (0x0004d53e) list_ai2_gene_pane_t1

0x4714,	// (0x0004d5d1) ai2_mp_volume_pane_g3

0x0002,

0xf9db,	// (0x00058898) ai2_mp_volume_pane_g

0xb830,	// (0x000546ed) volume_small_pane_cp3

0x471c,	// (0x0004d5d9) aid_size_cell_ai2_button

0x4724,	// (0x0004d5e1) grid_ai2_button_pane

0x472d,	// (0x0004d5ea) cell_ai2_button_pane_ParamLimits

0x472d,	// (0x0004d5ea) cell_ai2_button_pane

0x968e,	// (0x0005254b) cell_ai2_button_pane_g1

0x977e,	// (0x0005263b) grid_highlight_pane_cp8

0x46cc,	// (0x0004d589) ai2_gene_pane_t1_ParamLimits

0x46cc,	// (0x0004d589) ai2_gene_pane_t1

0xae7f,	// (0x00053d3c) aid_height_parent_landscape

0xcb9c,	// (0x00055a59) aid_height_set_list

0x4073,	// (0x0004cf30) aid_size_parent

0xce00,	// (0x00055cbd) aid_size_cell_graphic_pane_ParamLimits

0x45ee,	// (0x0004d4ab) popup_ai2_data_window_g1_ParamLimits

0x45ee,	// (0x0004d4ab) popup_ai2_data_window_g1

0x45fa,	// (0x0004d4b7) ai2_news_ticker_pane_g1

0x4602,	// (0x0004d4bf) ai2_news_ticker_pane_g2

0x0001,

0xf9c7,	// (0x00058884) ai2_news_ticker_pane_g

0x460a,	// (0x0004d4c7) ai2_news_ticker_pane_t1

0x4618,	// (0x0004d4d5) ai2_news_ticker_pane_t2

0x0001,

0xf9cc,	// (0x00058889) ai2_news_ticker_pane_t

0x4645,	// (0x0004d502) heading_ai2_gene_pane_g1

0x464d,	// (0x0004d50a) heading_ai2_gene_pane_t1_ParamLimits

0x464d,	// (0x0004d50a) heading_ai2_gene_pane_t1

0x4662,	// (0x0004d51f) list_highlight_pane_cp6

0x466a,	// (0x0004d527) ai2_gene_pane_ParamLimits

0x466a,	// (0x0004d527) ai2_gene_pane

0x468f,	// (0x0004d54c) list_ai2_gene_pane_t2

0x0001,

0xf9d1,	// (0x0005888e) list_ai2_gene_pane_t

0x469d,	// (0x0004d55a) list_highlight_pane_cp8_ParamLimits

0x469d,	// (0x0004d55a) list_highlight_pane_cp8

0x46ae,	// (0x0004d56b) ai2_gene_pane_g1_ParamLimits

0x46ae,	// (0x0004d56b) ai2_gene_pane_g1

0x46c0,	// (0x0004d57d) ai2_gene_pane_g2_ParamLimits

0x46c0,	// (0x0004d57d) ai2_gene_pane_g2

0x0001,

0xf9d6,	// (0x00058893) ai2_gene_pane_g_ParamLimits

0xf9d6,	// (0x00058893) ai2_gene_pane_g

0xa284,	// (0x00053141) scroll_pane_cp12

0xae3c,	// (0x00053cf9) control_pane_t3_ParamLimits

0xae3c,	// (0x00053cf9) control_pane_t3

0xaca2,	// (0x00053b5f) status_small_pane_g8_ParamLimits

0xaca2,	// (0x00053b5f) status_small_pane_g8

0xaff0,	// (0x00053ead) popup_find_window_ParamLimits

0xb2a3,	// (0x00054160) popup_note_image_window_ParamLimits

0xe193,	// (0x00057050) list_double2_graphic_pane_vc_g1_ParamLimits

0xe193,	// (0x00057050) list_double2_graphic_pane_vc_g1

0xf38b,	// (0x00058248) list_double2_graphic_pane_vc_g2_ParamLimits

0xf38b,	// (0x00058248) list_double2_graphic_pane_vc_g2

0xf397,	// (0x00058254) list_double2_graphic_pane_vc_g3_ParamLimits

0xf397,	// (0x00058254) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x0005847e) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x0005847e) list_double2_graphic_pane_vc_g

0xe19f,	// (0x0005705c) list_double2_graphic_pane_vc_t1_ParamLimits

0xe19f,	// (0x0005705c) list_double2_graphic_pane_vc_t1

0xf38b,	// (0x00058248) list_single_heading_pane_vc_g1_ParamLimits

0xf38b,	// (0x00058248) list_single_heading_pane_vc_g1

0xf397,	// (0x00058254) list_single_heading_pane_vc_g2_ParamLimits

0xf397,	// (0x00058254) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005848f) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005848f) list_single_heading_pane_vc_g

0xe46d,	// (0x0005732a) list_single_heading_pane_vc_t1_ParamLimits

0xe46d,	// (0x0005732a) list_single_heading_pane_vc_t1

0xe483,	// (0x00057340) list_single_heading_pane_vc_t2_ParamLimits

0xe483,	// (0x00057340) list_single_heading_pane_vc_t2

0x0001,

0xf7d3,	// (0x00058690) list_single_heading_pane_vc_t_ParamLimits

0xf7d3,	// (0x00058690) list_single_heading_pane_vc_t

0x0e73,	// (0x00049d30) list_setting_number_pane_vc_g1_ParamLimits

0x0e73,	// (0x00049d30) list_setting_number_pane_vc_g1

0x0e7f,	// (0x00049d3c) list_setting_number_pane_vc_g2_ParamLimits

0x0e7f,	// (0x00049d3c) list_setting_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x00058695) list_setting_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x00058695) list_setting_number_pane_vc_g

0xe495,	// (0x00057352) list_setting_number_pane_vc_t1_ParamLimits

0xe495,	// (0x00057352) list_setting_number_pane_vc_t1

0xe4a9,	// (0x00057366) list_setting_number_pane_vc_t2_ParamLimits

0xe4a9,	// (0x00057366) list_setting_number_pane_vc_t2

0xe4c5,	// (0x00057382) list_setting_number_pane_vc_t3_ParamLimits

0xe4c5,	// (0x00057382) list_setting_number_pane_vc_t3

0x0002,

0xf7dd,	// (0x0005869a) list_setting_number_pane_vc_t_ParamLimits

0xf7dd,	// (0x0005869a) list_setting_number_pane_vc_t

0xe4ef,	// (0x000573ac) set_value_pane_vc_ParamLimits

0xe4ef,	// (0x000573ac) set_value_pane_vc

0x4227,	// (0x0004d0e4) list_double2_graphic_pane_vc_ParamLimits

0x4227,	// (0x0004d0e4) list_double2_graphic_pane_vc

0x4227,	// (0x0004d0e4) list_double2_large_graphic_pane_vc_ParamLimits

0x4227,	// (0x0004d0e4) list_double2_large_graphic_pane_vc

0x4227,	// (0x0004d0e4) list_double2_pane_vc_ParamLimits

0x4227,	// (0x0004d0e4) list_double2_pane_vc

0x4227,	// (0x0004d0e4) list_double_graphic_heading_pane_vc_ParamLimits

0x4227,	// (0x0004d0e4) list_double_graphic_heading_pane_vc

0x4227,	// (0x0004d0e4) list_double_graphic_pane_vc_ParamLimits

0x4227,	// (0x0004d0e4) list_double_graphic_pane_vc

0x4227,	// (0x0004d0e4) list_double_heading_pane_vc_ParamLimits

0x4227,	// (0x0004d0e4) list_double_heading_pane_vc

0x4239,	// (0x0004d0f6) list_double_large_graphic_pane_vc_ParamLimits

0x4239,	// (0x0004d0f6) list_double_large_graphic_pane_vc

0x4227,	// (0x0004d0e4) list_double_number_pane_vc_ParamLimits

0x4227,	// (0x0004d0e4) list_double_number_pane_vc

0x4227,	// (0x0004d0e4) list_double_pane_vc_ParamLimits

0x4227,	// (0x0004d0e4) list_double_pane_vc

0x4227,	// (0x0004d0e4) list_double_time_pane_vc_ParamLimits

0x4227,	// (0x0004d0e4) list_double_time_pane_vc

0x4227,	// (0x0004d0e4) list_setting_number_pane_vc_ParamLimits

0x4227,	// (0x0004d0e4) list_setting_number_pane_vc

0x4227,	// (0x0004d0e4) list_setting_pane_vc_ParamLimits

0x4227,	// (0x0004d0e4) list_setting_pane_vc

0x4227,	// (0x0004d0e4) list_single_graphic_heading_pane_vc_ParamLimits

0x4227,	// (0x0004d0e4) list_single_graphic_heading_pane_vc

0x4227,	// (0x0004d0e4) list_single_heading_pane_vc_ParamLimits

0x4227,	// (0x0004d0e4) list_single_heading_pane_vc

0x4227,	// (0x0004d0e4) list_single_number_heading_pane_vc_ParamLimits

0x4227,	// (0x0004d0e4) list_single_number_heading_pane_vc

0xef2f,	// (0x00057dec) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xef2f,	// (0x00057dec) list_double_graphic_heading_pane_vc_g1

0xf38b,	// (0x00058248) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xf38b,	// (0x00058248) list_double_graphic_heading_pane_vc_g2

0xf397,	// (0x00058254) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xf397,	// (0x00058254) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e2,	// (0x0005889f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e2,	// (0x0005889f) list_double_graphic_heading_pane_vc_g

0xef3b,	// (0x00057df8) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xef3b,	// (0x00057df8) list_double_graphic_heading_pane_vc_t1

0xef4f,	// (0x00057e0c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xef4f,	// (0x00057e0c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x000588a6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x000588a6) list_double_graphic_heading_pane_vc_t

0x0e73,	// (0x00049d30) list_setting_pane_vc_g1_ParamLimits

0x0e73,	// (0x00049d30) list_setting_pane_vc_g1

0x0e7f,	// (0x00049d3c) list_setting_pane_vc_g2_ParamLimits

0x0e7f,	// (0x00049d3c) list_setting_pane_vc_g2

0x0001,

0xf7d8,	// (0x00058695) list_setting_pane_vc_g_ParamLimits

0xf7d8,	// (0x00058695) list_setting_pane_vc_g

0xef67,	// (0x00057e24) list_setting_pane_vc_t1_ParamLimits

0xef67,	// (0x00057e24) list_setting_pane_vc_t1

0xef83,	// (0x00057e40) list_setting_pane_vc_t2_ParamLimits

0xef83,	// (0x00057e40) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x000588e9) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x000588e9) list_setting_pane_vc_t

0xe4ef,	// (0x000573ac) set_value_pane_cp_vc_ParamLimits

0xe4ef,	// (0x000573ac) set_value_pane_cp_vc

0xf38b,	// (0x00058248) list_single_number_heading_pane_vc_g1_ParamLimits

0xf38b,	// (0x00058248) list_single_number_heading_pane_vc_g1

0xf397,	// (0x00058254) list_single_number_heading_pane_vc_g2_ParamLimits

0xf397,	// (0x00058254) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005848f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005848f) list_single_number_heading_pane_vc_g

0xef9d,	// (0x00057e5a) list_single_number_heading_pane_vc_t1_ParamLimits

0xef9d,	// (0x00057e5a) list_single_number_heading_pane_vc_t1

0xefb3,	// (0x00057e70) list_single_number_heading_pane_vc_t2_ParamLimits

0xefb3,	// (0x00057e70) list_single_number_heading_pane_vc_t2

0xefc5,	// (0x00057e82) list_single_number_heading_pane_vc_t3_ParamLimits

0xefc5,	// (0x00057e82) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x000588ee) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x000588ee) list_single_number_heading_pane_vc_t

0xefd7,	// (0x00057e94) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xefd7,	// (0x00057e94) list_single_graphic_heading_pane_vc_g1

0xf38b,	// (0x00058248) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xf38b,	// (0x00058248) list_single_graphic_heading_pane_vc_g4

0xf397,	// (0x00058254) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xf397,	// (0x00058254) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa38,	// (0x000588f5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa38,	// (0x000588f5) list_single_graphic_heading_pane_vc_g

0xe46d,	// (0x0005732a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe46d,	// (0x0005732a) list_single_graphic_heading_pane_vc_t1

0xefe3,	// (0x00057ea0) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xefe3,	// (0x00057ea0) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x000588fc) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x000588fc) list_single_graphic_heading_pane_vc_t

0xf38b,	// (0x00058248) list_double2_pane_vc_g1_ParamLimits

0xf38b,	// (0x00058248) list_double2_pane_vc_g1

0xf397,	// (0x00058254) list_double2_pane_vc_g2_ParamLimits

0xf397,	// (0x00058254) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005848f) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005848f) list_double2_pane_vc_g

0xeff5,	// (0x00057eb2) list_double2_pane_vc_t1_ParamLimits

0xeff5,	// (0x00057eb2) list_double2_pane_vc_t1

0x1310,	// (0x0004a1cd) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1310,	// (0x0004a1cd) list_double2_large_graphic_pane_vc_g1

0xf38b,	// (0x00058248) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf38b,	// (0x00058248) list_double2_large_graphic_pane_vc_g2

0xf397,	// (0x00058254) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf397,	// (0x00058254) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x000584a7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x000584a7) list_double2_large_graphic_pane_vc_g

0xe19f,	// (0x0005705c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe19f,	// (0x0005705c) list_double2_large_graphic_pane_vc_t1

0x131c,	// (0x0004a1d9) list_double_time_pane_vc_g1_ParamLimits

0x131c,	// (0x0004a1d9) list_double_time_pane_vc_g1

0x1328,	// (0x0004a1e5) list_double_time_pane_vc_g2_ParamLimits

0x1328,	// (0x0004a1e5) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x00058901) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x00058901) list_double_time_pane_vc_g

0xf00d,	// (0x00057eca) list_double_time_pane_vc_t1_ParamLimits

0xf00d,	// (0x00057eca) list_double_time_pane_vc_t1

0xf031,	// (0x00057eee) list_double_time_pane_vc_t2_ParamLimits

0xf031,	// (0x00057eee) list_double_time_pane_vc_t2

0xf080,	// (0x00057f3d) list_double_time_pane_vc_t3_ParamLimits

0xf080,	// (0x00057f3d) list_double_time_pane_vc_t3

0xf092,	// (0x00057f4f) list_double_time_pane_vc_t4_ParamLimits

0xf092,	// (0x00057f4f) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x00058906) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x00058906) list_double_time_pane_vc_t

0xf38b,	// (0x00058248) list_double_pane_vc_g1_ParamLimits

0xf38b,	// (0x00058248) list_double_pane_vc_g1

0xf397,	// (0x00058254) list_double_pane_vc_g2_ParamLimits

0xf397,	// (0x00058254) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005848f) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005848f) list_double_pane_vc_g

0xf0a6,	// (0x00057f63) list_double_pane_vc_t1_ParamLimits

0xf0a6,	// (0x00057f63) list_double_pane_vc_t1

0xf0ba,	// (0x00057f77) list_double_pane_vc_t2_ParamLimits

0xf0ba,	// (0x00057f77) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x0005890f) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x0005890f) list_double_pane_vc_t

0xf38b,	// (0x00058248) list_double_number_pane_vc_g1_ParamLimits

0xf38b,	// (0x00058248) list_double_number_pane_vc_g1

0xf397,	// (0x00058254) list_double_number_pane_vc_g2_ParamLimits

0xf397,	// (0x00058254) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005848f) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005848f) list_double_number_pane_vc_g

0xf0d2,	// (0x00057f8f) list_double_number_pane_vc_t1_ParamLimits

0xf0d2,	// (0x00057f8f) list_double_number_pane_vc_t1

0xf0a6,	// (0x00057f63) list_double_number_pane_vc_t2_ParamLimits

0xf0a6,	// (0x00057f63) list_double_number_pane_vc_t2

0xf0e4,	// (0x00057fa1) list_double_number_pane_vc_t3_ParamLimits

0xf0e4,	// (0x00057fa1) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x00058914) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x00058914) list_double_number_pane_vc_t

0x1334,	// (0x0004a1f1) list_double_large_graphic_pane_vc_g1_ParamLimits

0x1334,	// (0x0004a1f1) list_double_large_graphic_pane_vc_g1

0x1356,	// (0x0004a213) list_double_large_graphic_pane_vc_g2_ParamLimits

0x1356,	// (0x0004a213) list_double_large_graphic_pane_vc_g2

0x136a,	// (0x0004a227) list_double_large_graphic_pane_vc_g3_ParamLimits

0x136a,	// (0x0004a227) list_double_large_graphic_pane_vc_g3

0xf0fc,	// (0x00057fb9) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf0fc,	// (0x00057fb9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x0005891b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x0005891b) list_double_large_graphic_pane_vc_g

0xf108,	// (0x00057fc5) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf108,	// (0x00057fc5) list_double_large_graphic_pane_vc_t1

0xf124,	// (0x00057fe1) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf124,	// (0x00057fe1) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x00058924) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x00058924) list_double_large_graphic_pane_vc_t

0xf38b,	// (0x00058248) list_double_heading_pane_vc_g1_ParamLimits

0xf38b,	// (0x00058248) list_double_heading_pane_vc_g1

0xf397,	// (0x00058254) list_double_heading_pane_vc_g2_ParamLimits

0xf397,	// (0x00058254) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005848f) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005848f) list_double_heading_pane_vc_g

0xf146,	// (0x00058003) list_double_heading_pane_vc_t1_ParamLimits

0xf146,	// (0x00058003) list_double_heading_pane_vc_t1

0xf15a,	// (0x00058017) list_double_heading_pane_vc_t2_ParamLimits

0xf15a,	// (0x00058017) list_double_heading_pane_vc_t2

0x0001,

0xfa6c,	// (0x00058929) list_double_heading_pane_vc_t_ParamLimits

0xfa6c,	// (0x00058929) list_double_heading_pane_vc_t

0xf172,	// (0x0005802f) list_double_graphic_pane_vc_g1_ParamLimits

0xf172,	// (0x0005802f) list_double_graphic_pane_vc_g1

0x1379,	// (0x0004a236) list_double_graphic_pane_vc_g2_ParamLimits

0x1379,	// (0x0004a236) list_double_graphic_pane_vc_g2

0xf38b,	// (0x00058248) list_double_graphic_pane_vc_g3_ParamLimits

0xf38b,	// (0x00058248) list_double_graphic_pane_vc_g3

0x0003,

0xfa71,	// (0x0005892e) list_double_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x0005892e) list_double_graphic_pane_vc_g

0xf185,	// (0x00058042) list_double_graphic_pane_vc_t1_ParamLimits

0xf185,	// (0x00058042) list_double_graphic_pane_vc_t1

0xf1a4,	// (0x00058061) list_double_graphic_pane_vc_t2_ParamLimits

0xf1a4,	// (0x00058061) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x00058937) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x00058937) list_double_graphic_pane_vc_t

0xeda9,	// (0x00057c66) aid_size_cell_fastswap

0x9698,	// (0x00052555) aid_size_cell_touch_ParamLimits

0x9698,	// (0x00052555) aid_size_cell_touch

0xef00,	// (0x00057dbd) popup_fast_swap_wide_window_ParamLimits

0xef00,	// (0x00057dbd) popup_fast_swap_wide_window

0x9872,	// (0x0005272f) touch_pane_ParamLimits

0x9872,	// (0x0005272f) touch_pane

0xa335,	// (0x000531f2) button_value_adjust_pane_cp2

0xe1cf,	// (0x0005708c) button_value_adjust_pane_cp4

0xe1d7,	// (0x00057094) form_field_data_pane_cp2

0x9276,	// (0x00052133) form_field_data_wide_pane_cp2

0xa7c8,	// (0x00053685) bg_scroll_pane_ParamLimits

0xa7e7,	// (0x000536a4) scroll_handle_pane_ParamLimits

0x0058,	// (0x00048f15) scroll_sc2_down_pane_ParamLimits

0x0058,	// (0x00048f15) scroll_sc2_down_pane

0xa80d,	// (0x000536ca) scroll_sc2_up_pane_ParamLimits

0xa80d,	// (0x000536ca) scroll_sc2_up_pane

0xcfd1,	// (0x00055e8e) grid_wheel_folder_pane_g1_ParamLimits

0xcfd1,	// (0x00055e8e) grid_wheel_folder_pane_g1

0x03b3,	// (0x00049270) clock_nsta_pane_cp2_ParamLimits

0x03b3,	// (0x00049270) clock_nsta_pane_cp2

0xab68,	// (0x00053a25) listscroll_midp_pane_ParamLimits

0xab74,	// (0x00053a31) midp_canvas_pane

0x2769,	// (0x0004b626) nsta_clock_indic_pane

0x279d,	// (0x0004b65a) listscroll_form_pane_vc

0x27a5,	// (0x0004b662) listscroll_set_pane_vc_ParamLimits

0x27a5,	// (0x0004b662) listscroll_set_pane_vc

0xc1f1,	// (0x000550ae) clock_nsta_pane

0xc21b,	// (0x000550d8) indicator_nsta_pane

0x2c02,	// (0x0004babf) bg_popup_sub_pane_cp2_ParamLimits

0x2c16,	// (0x0004bad3) find_pane_cp2_ParamLimits

0x2c16,	// (0x0004bad3) find_pane_cp2

0x2c2c,	// (0x0004bae9) grid_toobar_pane_ParamLimits

0x2d0c,	// (0x0004bbc9) list_form_gen_pane_vc_ParamLimits

0x2d0c,	// (0x0004bbc9) list_form_gen_pane_vc

0x2d22,	// (0x0004bbdf) scroll_pane_cp8_vc_ParamLimits

0x2d22,	// (0x0004bbdf) scroll_pane_cp8_vc

0x2d9e,	// (0x0004bc5b) data_form_wide_pane_vc_ParamLimits

0x2d9e,	// (0x0004bc5b) data_form_wide_pane_vc

0x2daa,	// (0x0004bc67) form_field_data_wide_pane_vc_g1

0x2db2,	// (0x0004bc6f) form_field_data_wide_pane_vc_t1_ParamLimits

0x2db2,	// (0x0004bc6f) form_field_data_wide_pane_vc_t1

0xa349,	// (0x00053206) input_focus_pane_cp6_vc_ParamLimits

0xa349,	// (0x00053206) input_focus_pane_cp6_vc

0x30ff,	// (0x0004bfbc) list_midp_pane_ParamLimits

0x43d1,	// (0x0004d28e) scroll_pane_cp16_ParamLimits

0x43d1,	// (0x0004d28e) scroll_pane_cp16

0x3141,	// (0x0004bffe) button_value_adjust_pane_ParamLimits

0x3141,	// (0x0004bffe) button_value_adjust_pane

0xcbad,	// (0x00055a6a) button_value_adjust_pane_cp6_ParamLimits

0xcbad,	// (0x00055a6a) button_value_adjust_pane_cp6

0xccc7,	// (0x00055b84) settings_code_pane_cp_ParamLimits

0xccc7,	// (0x00055b84) settings_code_pane_cp

0x968e,	// (0x0005254b) cell_touch_pane_g1

0x968e,	// (0x0005254b) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x000585bb) cell_touch_pane_g

0xcea0,	// (0x00055d5d) cell_touch_pane_cp_ParamLimits

0xcea0,	// (0x00055d5d) cell_touch_pane_cp

0xcebc,	// (0x00055d79) cell_touch_pane_ParamLimits

0xcebc,	// (0x00055d79) cell_touch_pane

0x968e,	// (0x0005254b) scroll_sc2_down_pane_g1

0x968e,	// (0x0005254b) scroll_sc2_up_pane_g1

0x977e,	// (0x0005263b) bg_set_opt_pane_cp4_vc

0x4761,	// (0x0004d61e) list_set_graphic_pane_vc_g1_ParamLimits

0x4761,	// (0x0004d61e) list_set_graphic_pane_vc_g1

0x476d,	// (0x0004d62a) list_set_graphic_pane_vc_g2_ParamLimits

0x476d,	// (0x0004d62a) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x000588ab) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x000588ab) list_set_graphic_pane_vc_g

0x4779,	// (0x0004d636) text_primary_small_cp13_vc_ParamLimits

0x4779,	// (0x0004d636) text_primary_small_cp13_vc

0x4791,	// (0x0004d64e) list_set_graphic_pane_vc_ParamLimits

0x4791,	// (0x0004d64e) list_set_graphic_pane_vc

0x977e,	// (0x0005263b) input_focus_pane_cp2_vc

0x968e,	// (0x0005254b) setting_code_pane_vc_g1

0x9ab9,	// (0x00052976) setting_code_pane_vc_t1

0x47a4,	// (0x0004d661) set_text_pane_vc_t1_ParamLimits

0x47a4,	// (0x0004d661) set_text_pane_vc_t1

0x977e,	// (0x0005263b) input_focus_pane_cp1_vc

0x47c0,	// (0x0004d67d) list_set_text_pane_vc

0x968e,	// (0x0005254b) setting_text_pane_vc_g1

0x977e,	// (0x0005263b) bg_set_opt_pane_cp2_vc

0x9a88,	// (0x00052945) setting_slider_graphic_pane_vc_g1

0x47ca,	// (0x0004d687) setting_slider_graphic_pane_vc_t1

0x47da,	// (0x0004d697) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x000588b0) setting_slider_graphic_pane_vc_t

0x47ea,	// (0x0004d6a7) slider_set_pane_cp_vc

0x47f2,	// (0x0004d6af) slider_set_pane_vc_g1

0x47fb,	// (0x0004d6b8) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x000588b5) slider_set_pane_vc_g

0xa395,	// (0x00053252) set_opt_bg_pane_g1_copy1

0xa39d,	// (0x0005325a) set_opt_bg_pane_g2_copy1

0x4827,	// (0x0004d6e4) set_opt_bg_pane_g3_copy1

0xa3ad,	// (0x0005326a) set_opt_bg_pane_g4_copy1

0xa3b5,	// (0x00053272) set_opt_bg_pane_g5_copy1

0xa3bd,	// (0x0005327a) set_opt_bg_pane_g6_copy1

0x482f,	// (0x0004d6ec) set_opt_bg_pane_g7_copy1

0x4837,	// (0x0004d6f4) set_opt_bg_pane_g8_copy1

0x483f,	// (0x0004d6fc) set_opt_bg_pane_g9_copy1

0x977e,	// (0x0005263b) bg_set_opt_pane_cp_vc

0x4847,	// (0x0004d704) setting_slider_pane_vc_t1

0x4856,	// (0x0004d713) setting_slider_pane_vc_t2

0x4866,	// (0x0004d723) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x000588c4) setting_slider_pane_vc_t

0x4876,	// (0x0004d733) slider_set_pane_vc

0x0f28,	// (0x00049de5) volume_set_pane_vc_g1

0x12bf,	// (0x0004a17c) volume_set_pane_vc_g2

0x12c8,	// (0x0004a185) volume_set_pane_vc_g3

0x12d1,	// (0x0004a18e) volume_set_pane_vc_g4

0x12da,	// (0x0004a197) volume_set_pane_vc_g5

0x12e3,	// (0x0004a1a0) volume_set_pane_vc_g6

0x12ec,	// (0x0004a1a9) volume_set_pane_vc_g7

0x12f5,	// (0x0004a1b2) volume_set_pane_vc_g8

0x12fe,	// (0x0004a1bb) volume_set_pane_vc_g9

0x1307,	// (0x0004a1c4) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x000588cb) volume_set_pane_vc_g

0x487e,	// (0x0004d73b) volume_set_pane_vc

0x4886,	// (0x0004d743) button_value_adjust_pane_cp1_vc

0x4890,	// (0x0004d74d) list_highlight_pane_cp2_vc

0x4899,	// (0x0004d756) list_set_pane_vc_ParamLimits

0x4899,	// (0x0004d756) list_set_pane_vc

0x48f7,	// (0x0004d7b4) main_pane_set_vc_t1_ParamLimits

0x48f7,	// (0x0004d7b4) main_pane_set_vc_t1

0x490c,	// (0x0004d7c9) main_pane_set_vc_t2_ParamLimits

0x490c,	// (0x0004d7c9) main_pane_set_vc_t2

0x491e,	// (0x0004d7db) main_pane_set_vc_t3_ParamLimits

0x491e,	// (0x0004d7db) main_pane_set_vc_t3

0x4930,	// (0x0004d7ed) main_pane_set_vc_t4_ParamLimits

0x4930,	// (0x0004d7ed) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x000588e0) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x000588e0) main_pane_set_vc_t

0x4942,	// (0x0004d7ff) setting_code_pane_vc_ParamLimits

0x4942,	// (0x0004d7ff) setting_code_pane_vc

0x4951,	// (0x0004d80e) setting_slider_graphic_pane_vc

0x4951,	// (0x0004d80e) setting_slider_pane_vc

0x4951,	// (0x0004d80e) setting_text_pane_vc

0x4951,	// (0x0004d80e) setting_volume_pane_vc

0x4959,	// (0x0004d816) scroll_pane_cp121_vc

0xa323,	// (0x000531e0) set_content_pane_vc

0x4961,	// (0x0004d81e) button_value_adjust_pane_g1

0x496a,	// (0x0004d827) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0005893c) button_value_adjust_pane_g

0x4973,	// (0x0004d830) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4973,	// (0x0004d830) form_field_slider_wide_pane_vc_t1

0x4987,	// (0x0004d844) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4987,	// (0x0004d844) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x00058941) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x00058941) form_field_slider_wide_pane_vc_t

0x99cf,	// (0x0005288c) input_focus_pane_cp10_vc_ParamLimits

0x99cf,	// (0x0005288c) input_focus_pane_cp10_vc

0x49b5,	// (0x0004d872) slider_cont_pane_cp1_vc_ParamLimits

0x49b5,	// (0x0004d872) slider_cont_pane_cp1_vc

0x49c7,	// (0x0004d884) slider_form_pane_g1_cp2

0x47fb,	// (0x0004d6b8) slider_form_pane_g2_cp2

0x49f4,	// (0x0004d8b1) form_field_slider_pane_vc_t3

0x4a02,	// (0x0004d8bf) form_field_slider_pane_vc_t4

0x4a10,	// (0x0004d8cd) slider_form_pane_vc_ParamLimits

0x4a10,	// (0x0004d8cd) slider_form_pane_vc

0x4a1d,	// (0x0004d8da) form_field_slider_pane_vc_t1_ParamLimits

0x4a1d,	// (0x0004d8da) form_field_slider_pane_vc_t1

0x4987,	// (0x0004d844) form_field_slider_pane_vc_t2_ParamLimits

0x4987,	// (0x0004d844) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x00058953) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x00058953) form_field_slider_pane_vc_t

0x99cf,	// (0x0005288c) input_focus_pane_cp9_vc_ParamLimits

0x99cf,	// (0x0005288c) input_focus_pane_cp9_vc

0x4a39,	// (0x0004d8f6) slider_cont_pane_vc_ParamLimits

0x4a39,	// (0x0004d8f6) slider_cont_pane_vc

0x4a4d,	// (0x0004d90a) list_form_graphic_pane_cp_vc_ParamLimits

0x4a4d,	// (0x0004d90a) list_form_graphic_pane_cp_vc

0x2daa,	// (0x0004bc67) form_field_popup_wide_pane_vc_g1

0x4a62,	// (0x0004d91f) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4a62,	// (0x0004d91f) form_field_popup_wide_pane_vc_t1

0xa349,	// (0x00053206) input_focus_pane_cp8_vc_ParamLimits

0xa349,	// (0x00053206) input_focus_pane_cp8_vc

0x4aa7,	// (0x0004d964) list_form_wide_pane_vc_ParamLimits

0x4aa7,	// (0x0004d964) list_form_wide_pane_vc

0x4ab3,	// (0x0004d970) list_form_graphic_pane_vc_g1

0x4abb,	// (0x0004d978) list_form_graphic_pane_vc_t1_ParamLimits

0x4abb,	// (0x0004d978) list_form_graphic_pane_vc_t1

0x9a19,	// (0x000528d6) list_highlight_pane_cp5_vc_ParamLimits

0x9a19,	// (0x000528d6) list_highlight_pane_cp5_vc

0x4ad7,	// (0x0004d994) list_form_graphic_pane_vc_ParamLimits

0x4ad7,	// (0x0004d994) list_form_graphic_pane_vc

0x2daa,	// (0x0004bc67) form_field_popup_pane_vc_g1

0x4aed,	// (0x0004d9aa) form_field_popup_pane_vc_t1_ParamLimits

0x4aed,	// (0x0004d9aa) form_field_popup_pane_vc_t1

0xa349,	// (0x00053206) input_focus_pane_cp7_vc_ParamLimits

0xa349,	// (0x00053206) input_focus_pane_cp7_vc

0x4b04,	// (0x0004d9c1) list_form_pane_vc_ParamLimits

0x4b04,	// (0x0004d9c1) list_form_pane_vc

0x4b10,	// (0x0004d9cd) data_form_pane_vc_t1_ParamLimits

0x4b10,	// (0x0004d9cd) data_form_pane_vc_t1

0xa395,	// (0x00053252) input_focus_pane_vc_g1

0xa39d,	// (0x0005325a) input_focus_pane_vc_g2

0xa3a5,	// (0x00053262) input_focus_pane_vc_g3

0xa3ad,	// (0x0005326a) input_focus_pane_vc_g4

0xa3b5,	// (0x00053272) input_focus_pane_vc_g5

0xa3bd,	// (0x0005327a) input_focus_pane_vc_g6

0xa3c5,	// (0x00053282) input_focus_pane_vc_g7

0xa3cd,	// (0x0005328a) input_focus_pane_vc_g8

0xa3d5,	// (0x00053292) input_focus_pane_vc_g9

0x968e,	// (0x0005254b) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00058544) input_focus_pane_vc_g

0x2d9e,	// (0x0004bc5b) data_form_pane_vc_ParamLimits

0x2d9e,	// (0x0004bc5b) data_form_pane_vc

0x2daa,	// (0x0004bc67) form_field_data_pane_vc_g1

0x4b2b,	// (0x0004d9e8) form_field_data_pane_vc_t1_ParamLimits

0x4b2b,	// (0x0004d9e8) form_field_data_pane_vc_t1

0xa349,	// (0x00053206) input_focus_pane_vc_ParamLimits

0xa349,	// (0x00053206) input_focus_pane_vc

0x4b45,	// (0x0004da02) button_value_adjust_pane_cp3_vc

0x4b4d,	// (0x0004da0a) button_value_adjust_pane_cp5_vc

0x4b55,	// (0x0004da12) form_field_data_pane_vc_ParamLimits

0x4b55,	// (0x0004da12) form_field_data_pane_vc

0x4b6c,	// (0x0004da29) form_field_data_pane_vc_cp2

0x4b74,	// (0x0004da31) form_field_data_wide_pane_vc_ParamLimits

0x4b74,	// (0x0004da31) form_field_data_wide_pane_vc

0x4b8a,	// (0x0004da47) form_field_data_wide_pane_vc_cp2

0x4b92,	// (0x0004da4f) form_field_popup_pane_vc_ParamLimits

0x4b92,	// (0x0004da4f) form_field_popup_pane_vc

0x4ba9,	// (0x0004da66) form_field_popup_wide_pane_vc_ParamLimits

0x4ba9,	// (0x0004da66) form_field_popup_wide_pane_vc

0x4bbf,	// (0x0004da7c) form_field_slider_pane_vc_ParamLimits

0x4bbf,	// (0x0004da7c) form_field_slider_pane_vc

0x4bd2,	// (0x0004da8f) form_field_slider_wide_pane_vc_ParamLimits

0x4bd2,	// (0x0004da8f) form_field_slider_wide_pane_vc

0xced9,	// (0x00055d96) grid_touch_1_pane_ParamLimits

0xced9,	// (0x00055d96) grid_touch_1_pane

0xceed,	// (0x00055daa) grid_touch_2_pane_ParamLimits

0xceed,	// (0x00055daa) grid_touch_2_pane

0x4cac,	// (0x0004db69) touch_pane_g1_ParamLimits

0x4cac,	// (0x0004db69) touch_pane_g1

0x4c09,	// (0x0004dac6) cell_app_pane_cp_wide_ParamLimits

0x4c09,	// (0x0004dac6) cell_app_pane_cp_wide

0x4c26,	// (0x0004dae3) grid_popup_fast_wide_pane_ParamLimits

0x4c26,	// (0x0004dae3) grid_popup_fast_wide_pane

0x4c3a,	// (0x0004daf7) scroll_pane_cp19_ParamLimits

0x4c3a,	// (0x0004daf7) scroll_pane_cp19

0x977e,	// (0x0005263b) bg_popup_window_pane_cp20

0x4c4e,	// (0x0004db0b) listscroll_popup_fast_wide_pane

0xcf17,	// (0x00055dd4) grid_indicator_nsta_pane

0x4c56,	// (0x0004db13) clock_nsta_pane_g1

0x4c5f,	// (0x0004db1c) clock_nsta_pane_t1

0xcf25,	// (0x00055de2) cell_indicator_nsta_pane_ParamLimits

0xcf25,	// (0x00055de2) cell_indicator_nsta_pane

0x4cac,	// (0x0004db69) cell_indicator_nsta_pane_g1

0xcf3c,	// (0x00055df9) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x00058964) cell_indicator_nsta_pane_g

0x4cc7,	// (0x0004db84) clock_nsta_pane_cp

0x4ccf,	// (0x0004db8c) indicator_nsta_pane_cp

0x4cd7,	// (0x0004db94) nsta_clock_indic_pane_g1

0x9b9b,	// (0x00052a58) grid_indicator_pane

0xa8ff,	// (0x000537bc) scroll_pane_cp29

0x0302,	// (0x000491bf) indicator_nsta_pane_cp2_ParamLimits

0x0302,	// (0x000491bf) indicator_nsta_pane_cp2

0x9a19,	// (0x000528d6) main_apps_wheel_pane

0xc5e3,	// (0x000554a0) form_midp_field_text_pane_ParamLimits

0x310b,	// (0x0004bfc8) scroll_bar_cp050_ParamLimits

0x4d27,	// (0x0004dbe4) cell_indicator_pane_ParamLimits

0x4d27,	// (0x0004dbe4) cell_indicator_pane

0x4d40,	// (0x0004dbfd) cell_indicator_pane_g1

0xcf5b,	// (0x00055e18) grid_wheel_folder_pane_ParamLimits

0xcf5b,	// (0x00055e18) grid_wheel_folder_pane

0xcf69,	// (0x00055e26) list_wheel_apps_pane_ParamLimits

0xcf69,	// (0x00055e26) list_wheel_apps_pane

0xcf77,	// (0x00055e34) main_apps_wheel_pane_g1_ParamLimits

0xcf77,	// (0x00055e34) main_apps_wheel_pane_g1

0xcf83,	// (0x00055e40) main_apps_wheel_pane_g2_ParamLimits

0xcf83,	// (0x00055e40) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x00058980) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x00058980) main_apps_wheel_pane_g

0xcf91,	// (0x00055e4e) main_apps_wheel_pane_t1_ParamLimits

0xcf91,	// (0x00055e4e) main_apps_wheel_pane_t1

0xcfa5,	// (0x00055e62) list_wheel_apps_pane_g1

0xcfad,	// (0x00055e6a) list_wheel_apps_pane_g2

0xcfb5,	// (0x00055e72) list_wheel_apps_pane_g3

0xcfbd,	// (0x00055e7a) list_wheel_apps_pane_g4

0xcfc7,	// (0x00055e84) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x00058985) list_wheel_apps_pane_g

0x0551,	// (0x0004940e) navi_icon_text_pane

0xc0e5,	// (0x00054fa2) aid_fill_nsta

0x4e07,	// (0x0004dcc4) navi_icon_text_pane_g1

0x4e13,	// (0x0004dcd0) navi_icon_text_pane_t1

0xe39c,	// (0x00057259) list_set_graphic_pane_t1_ParamLimits

0xe39c,	// (0x00057259) list_set_graphic_pane_t1

0x3842,	// (0x0004c6ff) popup_midp_note_alarm_window_t6_ParamLimits

0x3842,	// (0x0004c6ff) popup_midp_note_alarm_window_t6

0x3854,	// (0x0004c711) popup_midp_note_alarm_window_t7_ParamLimits

0x3854,	// (0x0004c711) popup_midp_note_alarm_window_t7

0x3866,	// (0x0004c723) popup_midp_note_alarm_window_t8_ParamLimits

0x3866,	// (0x0004c723) popup_midp_note_alarm_window_t8

0x3878,	// (0x0004c735) popup_midp_note_alarm_window_t9_ParamLimits

0x3878,	// (0x0004c735) popup_midp_note_alarm_window_t9

0x388a,	// (0x0004c747) popup_midp_note_alarm_window_t10_ParamLimits

0x388a,	// (0x0004c747) popup_midp_note_alarm_window_t10

0x389c,	// (0x0004c759) popup_midp_note_alarm_window_t11_ParamLimits

0x389c,	// (0x0004c759) popup_midp_note_alarm_window_t11

0xc92f,	// (0x000557ec) scroll_pane_cp17_ParamLimits

0xc92f,	// (0x000557ec) scroll_pane_cp17

0x0f28,	// (0x00049de5) volume_small_pane_cp_g1

0x1396,	// (0x0004a253) volume_small_pane_cp_g2

0x139f,	// (0x0004a25c) volume_small_pane_cp_g3

0x13a8,	// (0x0004a265) volume_small_pane_cp_g4

0x13b1,	// (0x0004a26e) volume_small_pane_cp_g5

0x12da,	// (0x0004a197) volume_small_pane_cp_g6

0x13ba,	// (0x0004a277) volume_small_pane_cp_g7

0x13c3,	// (0x0004a280) volume_small_pane_cp_g8

0x13cc,	// (0x0004a289) volume_small_pane_cp_g9

0x13d5,	// (0x0004a292) volume_small_pane_cp_g10

0x2552,	// (0x0004b40f) midp_ticker_pane_g1_ParamLimits

0x255e,	// (0x0004b41b) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00058610) midp_ticker_pane_g_ParamLimits

0x256a,	// (0x0004b427) midp_ticker_pane_t1_ParamLimits

0xc109,	// (0x00054fc6) aid_fill_nsta_2

0x30f7,	// (0x0004bfb4) list_form2_midp_pane

0x41f6,	// (0x0004d0b3) midp_editing_number_pane_ParamLimits

0x4205,	// (0x0004d0c2) midp_ticker_pane_ParamLimits

0x4e25,	// (0x0004dce2) form2_midp_field_pane

0x4e49,	// (0x0004dd06) scroll_pane_cp51

0x4e69,	// (0x0004dd26) form2_midp_button_pane_ParamLimits

0x4e69,	// (0x0004dd26) form2_midp_button_pane

0x4e7b,	// (0x0004dd38) form2_midp_content_pane_ParamLimits

0x4e7b,	// (0x0004dd38) form2_midp_content_pane

0x4e95,	// (0x0004dd52) form2_midp_field_choice_group_pane

0x4e9d,	// (0x0004dd5a) form2_midp_field_pane_g1

0x4ea5,	// (0x0004dd62) form2_midp_field_pane_g2

0x4ead,	// (0x0004dd6a) form2_midp_field_pane_g3

0x4eb5,	// (0x0004dd72) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x000589aa) form2_midp_field_pane_g

0x4ebd,	// (0x0004dd7a) form2_midp_gauge_slider_pane

0x4ec5,	// (0x0004dd82) form2_midp_gauge_wait_pane

0x4ecd,	// (0x0004dd8a) form2_midp_image_pane_ParamLimits

0x4ecd,	// (0x0004dd8a) form2_midp_image_pane

0xcffa,	// (0x00055eb7) form2_midp_label_pane_ParamLimits

0xcffa,	// (0x00055eb7) form2_midp_label_pane

0xd013,	// (0x00055ed0) form2_midp_label_pane_cp_ParamLimits

0xd013,	// (0x00055ed0) form2_midp_label_pane_cp

0x4f22,	// (0x0004dddf) form2_midp_string_pane_ParamLimits

0x4f22,	// (0x0004dddf) form2_midp_string_pane

0x94d3,	// (0x00052390) form2_midp_text_pane_ParamLimits

0x94d3,	// (0x00052390) form2_midp_text_pane

0x4f34,	// (0x0004ddf1) form2_midp_time_pane

0x4f44,	// (0x0004de01) input_focus_pane_cp51_ParamLimits

0x4f44,	// (0x0004de01) input_focus_pane_cp51

0xd032,	// (0x00055eef) form2_midp_label_pane_t1_ParamLimits

0xd032,	// (0x00055eef) form2_midp_label_pane_t1

0x94ec,	// (0x000523a9) form2_mdip_text_pane_t1_ParamLimits

0x94ec,	// (0x000523a9) form2_mdip_text_pane_t1

0xf1ce,	// (0x0005808b) form2_midp_time_pane_t1

0x4fa5,	// (0x0004de62) form2_midp_gauge_slider_pane_t1

0xd072,	// (0x00055f2f) form2_midp_gauge_slider_pane_t2

0xd084,	// (0x00055f41) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x000589b3) form2_midp_gauge_slider_pane_t

0x4fdb,	// (0x0004de98) form2_midp_slider_pane

0x4fe7,	// (0x0004dea4) form2_midp_gauge_wait_pane_t1

0x4ff5,	// (0x0004deb2) form2_midp_wait_pane_ParamLimits

0x4ff5,	// (0x0004deb2) form2_midp_wait_pane

0xc526,	// (0x000553e3) list_single_2graphic_pane_cp4_ParamLimits

0xc526,	// (0x000553e3) list_single_2graphic_pane_cp4

0xd096,	// (0x00055f53) list_single_midp_graphic_pane_cp_ParamLimits

0xd096,	// (0x00055f53) list_single_midp_graphic_pane_cp

0x977e,	// (0x0005263b) list_highlight_pane_cp20

0x5048,	// (0x0004df05) list_single_2graphic_pane_g1_cp4

0x4645,	// (0x0004d502) list_single_2graphic_pane_g2_cp4

0x5050,	// (0x0004df0d) list_single_2graphic_pane_t1_cp4

0x9a19,	// (0x000528d6) list_highlight_pane_cp21

0x505f,	// (0x0004df1c) list_single_midp_graphic_pane_g4_cp

0x506e,	// (0x0004df2b) list_single_midp_graphic_pane_t1_cp

0xd0b5,	// (0x00055f72) form2_mdip_string_pane_t1_ParamLimits

0xd0b5,	// (0x00055f72) form2_mdip_string_pane_t1

0x977e,	// (0x0005263b) bg_wml_button_pane_cp2

0x968e,	// (0x0005254b) form2_midp_image_pane_g1

0xf3af,	// (0x0005826c) list_double_large_graphic_pane_g5_ParamLimits

0xf3af,	// (0x0005826c) list_double_large_graphic_pane_g5

0xab68,	// (0x00053a25) midp_form_pane_ParamLimits

0x9a19,	// (0x000528d6) main_apps_wheel_pane_ParamLimits

0xb32a,	// (0x000541e7) popup_preview_window_ParamLimits

0xb32a,	// (0x000541e7) popup_preview_window

0xb5f7,	// (0x000544b4) popup_touch_info_window_ParamLimits

0xb5f7,	// (0x000544b4) popup_touch_info_window

0xb615,	// (0x000544d2) popup_touch_menu_window_ParamLimits

0xb615,	// (0x000544d2) popup_touch_menu_window

0x9684,	// (0x00052541) bg_popup_sub_pane_cp6

0x5184,	// (0x0004e041) list_touch_menu_pane

0xd129,	// (0x00055fe6) list_single_touch_menu_pane_ParamLimits

0xd129,	// (0x00055fe6) list_single_touch_menu_pane

0xd13d,	// (0x00055ffa) list_single_touch_menu_pane_t1

0x9a19,	// (0x000528d6) bg_popup_sub_pane_cp7_ParamLimits

0x9a19,	// (0x000528d6) bg_popup_sub_pane_cp7

0x51b0,	// (0x0004e06d) heading_sub_pane

0x51b8,	// (0x0004e075) list_touch_info_pane_ParamLimits

0x51b8,	// (0x0004e075) list_touch_info_pane

0x51c7,	// (0x0004e084) list_single_touch_info_pane_ParamLimits

0x51c7,	// (0x0004e084) list_single_touch_info_pane

0x51d9,	// (0x0004e096) list_single_touch_info_pane_t1

0x51e7,	// (0x0004e0a4) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x000589c1) list_single_touch_info_pane_t

0x2471,	// (0x0004b32e) bg_popup_heading_pane_cp

0x51f5,	// (0x0004e0b2) heading_sub_pane_t1

0x2d38,	// (0x0004bbf5) bg_popup_preview_window_pane_cp_ParamLimits

0x2d38,	// (0x0004bbf5) bg_popup_preview_window_pane_cp

0x51b0,	// (0x0004e06d) heading_preview_pane

0x51b8,	// (0x0004e075) list_preview_pane_ParamLimits

0x51b8,	// (0x0004e075) list_preview_pane

0x5203,	// (0x0004e0c0) popup_preview_window_g1

0x51c7,	// (0x0004e084) list_single_preview_pane_ParamLimits

0x51c7,	// (0x0004e084) list_single_preview_pane

0x520b,	// (0x0004e0c8) list_single_preview_pane_g1

0x5213,	// (0x0004e0d0) list_single_preview_pane_t1

0x51d9,	// (0x0004e096) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x000589c6) list_single_preview_pane_t

0x5221,	// (0x0004e0de) bg_popup_heading_pane_cp2_ParamLimits

0x5221,	// (0x0004e0de) bg_popup_heading_pane_cp2

0x5237,	// (0x0004e0f4) heading_preview_pane_g1

0x523f,	// (0x0004e0fc) heading_preview_pane_t1_ParamLimits

0x523f,	// (0x0004e0fc) heading_preview_pane_t1

0x9bc8,	// (0x00052a85) soft_indicator_pane_t1_ParamLimits

0xa261,	// (0x0005311e) scroll_pane_ParamLimits

0xa7fb,	// (0x000536b8) scroll_sc2_left_pane

0xa804,	// (0x000536c1) scroll_sc2_right_pane

0xa823,	// (0x000536e0) scroll_bg_pane_g1_ParamLimits

0xa838,	// (0x000536f5) scroll_bg_pane_g2_ParamLimits

0xa850,	// (0x0005370d) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0005859b) scroll_bg_pane_g_ParamLimits

0xa823,	// (0x000536e0) scroll_handle_pane_g1_ParamLimits

0xa872,	// (0x0005372f) scroll_handle_pane_g2_ParamLimits

0xa850,	// (0x0005370d) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x000585a2) scroll_handle_pane_g_ParamLimits

0xaed1,	// (0x00053d8e) popup_choice_list_window_ParamLimits

0xaed1,	// (0x00053d8e) popup_choice_list_window

0x2c0e,	// (0x0004bacb) choice_list_pane

0x2c90,	// (0x0004bb4d) cell_toolbar_pane_t1

0x2cb8,	// (0x0004bb75) toolbar_button_pane_ParamLimits

0x3d68,	// (0x0004cc25) ai_gene_pane_1_t2_ParamLimits

0x3d68,	// (0x0004cc25) ai_gene_pane_1_t2

0x0001,

0xf901,	// (0x000587be) ai_gene_pane_1_t_ParamLimits

0xf901,	// (0x000587be) ai_gene_pane_1_t

0x525c,	// (0x0004e119) scroll_sc2_left_pane_g1

0x525c,	// (0x0004e119) scroll_sc2_right_pane_g1

0x27b7,	// (0x0004b674) bg_popup_sub_pane_cp10

0x5266,	// (0x0004e123) list_choice_list_pane

0xd14b,	// (0x00056008) list_single_choice_list_pane_ParamLimits

0xd14b,	// (0x00056008) list_single_choice_list_pane

0xd15f,	// (0x0005601c) list_single_choice_list_pane_g1

0xa4cc,	// (0x00053389) list_single_choice_list_pane_t1_ParamLimits

0xa4cc,	// (0x00053389) list_single_choice_list_pane_t1

0x529a,	// (0x0004e157) choice_list_pane_g1

0xd167,	// (0x00056024) choice_list_pane_t1

0x9684,	// (0x00052541) input_focus_pane_cp11

0xa686,	// (0x00053543) title_pane_stacon_g2_ParamLimits

0xa686,	// (0x00053543) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00058581) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00058581) title_pane_stacon_g

0x2471,	// (0x0004b32e) cursor_press_pane

0xaf78,	// (0x00053e35) popup_fep_hwr_window_ParamLimits

0xaf78,	// (0x00053e35) popup_fep_hwr_window

0x0973,	// (0x00049830) popup_fep_vkb_window_ParamLimits

0x0973,	// (0x00049830) popup_fep_vkb_window

0xd175,	// (0x00056032) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x000589ef) fep_vkb_side_pane_g_ParamLimits

0x1417,	// (0x0004a2d4) fep_hwr_candidate_pane_ParamLimits

0x1417,	// (0x0004a2d4) fep_hwr_candidate_pane

0x1441,	// (0x0004a2fe) fep_hwr_side_pane_ParamLimits

0x1441,	// (0x0004a2fe) fep_hwr_side_pane

0x1461,	// (0x0004a31e) fep_hwr_top_pane_ParamLimits

0x1461,	// (0x0004a31e) fep_hwr_top_pane

0x1479,	// (0x0004a336) fep_hwr_write_pane_ParamLimits

0x1479,	// (0x0004a336) fep_hwr_write_pane

0xfb32,	// (0x000589ef) fep_vkb_side_pane_g

0x52b8,	// (0x0004e175) fep_hwr_top_pane_g1

0x52ca,	// (0x0004e187) fep_hwr_top_pane_g2

0x14a5,	// (0x0004a362) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x000589cb) fep_hwr_top_pane_g

0x14ba,	// (0x0004a377) fep_hwr_top_text_pane

0xc022,	// (0x00054edf) fep_hwr_top_text_pane_g1

0x5300,	// (0x0004e1bd) fep_hwr_top_text_pane_t1

0x15b0,	// (0x0004a46d) fep_hwr_candidate_pane_g1

0x5545,	// (0x0004e402) fep_vkb_keypad_pane_g3_ParamLimits

0x5545,	// (0x0004e402) fep_vkb_keypad_pane_g3

0x556d,	// (0x0004e42a) fep_vkb_keypad_pane_g4_ParamLimits

0x556d,	// (0x0004e42a) fep_vkb_keypad_pane_g4

0x55dc,	// (0x0004e499) fep_vkb_bottom_pane_g2_ParamLimits

0x55dc,	// (0x0004e499) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x000589f6) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x000589f6) fep_vkb_bottom_pane_g

0x525c,	// (0x0004e119) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x00058a00) cell_vkb_side_pane_g

0x5667,	// (0x0004e524) cell_vkb_side_pane_t1

0x5675,	// (0x0004e532) cell_vkb_side_pane_t1_copy1

0x525c,	// (0x0004e119) bg_fep_vkb_candidate_pane_g2

0x57a1,	// (0x0004e65e) cell_vkb_candidate_pane_ParamLimits

0x530e,	// (0x0004e1cb) aid_size_cell_vkb_ParamLimits

0x530e,	// (0x0004e1cb) aid_size_cell_vkb

0x57a1,	// (0x0004e65e) cell_vkb_candidate_pane

0x15ca,	// (0x0004a487) bg_popup_fep_shadow_pane_g1

0xd1b7,	// (0x00056074) fep_vkb_bottom_pane_ParamLimits

0xd1b7,	// (0x00056074) fep_vkb_bottom_pane

0x53d2,	// (0x0004e28f) fep_vkb_candidate_pane_ParamLimits

0x53d2,	// (0x0004e28f) fep_vkb_candidate_pane

0xd1dc,	// (0x00056099) fep_vkb_keypad_pane_ParamLimits

0xd1dc,	// (0x00056099) fep_vkb_keypad_pane

0xd211,	// (0x000560ce) fep_vkb_side_pane_ParamLimits

0xd211,	// (0x000560ce) fep_vkb_side_pane

0xd24d,	// (0x0005610a) fep_vkb_top_pane_ParamLimits

0xd24d,	// (0x0005610a) fep_vkb_top_pane

0x549e,	// (0x0004e35b) fep_vkb_top_pane_g1_ParamLimits

0x549e,	// (0x0004e35b) fep_vkb_top_pane_g1

0x54ad,	// (0x0004e36a) fep_vkb_top_pane_g2_ParamLimits

0x54ad,	// (0x0004e36a) fep_vkb_top_pane_g2

0x54bc,	// (0x0004e379) fep_vkb_top_pane_g3_ParamLimits

0x54bc,	// (0x0004e379) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x000589e6) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x000589e6) fep_vkb_top_pane_g

0x54da,	// (0x0004e397) fep_vkb_top_text_pane_ParamLimits

0x54da,	// (0x0004e397) fep_vkb_top_text_pane

0xd282,	// (0x0005613f) fep_vkb_side_pane_g1_ParamLimits

0xd282,	// (0x0005613f) fep_vkb_side_pane_g1

0x5534,	// (0x0004e3f1) grid_vkb_side_pane_ParamLimits

0x5534,	// (0x0004e3f1) grid_vkb_side_pane

0x15d2,	// (0x0004a48f) bg_popup_fep_shadow_pane_g2

0x15db,	// (0x0004a498) bg_popup_fep_shadow_pane_g3

0x15e3,	// (0x0004a4a0) bg_popup_fep_shadow_pane_g4

0x15ec,	// (0x0004a4a9) bg_popup_fep_shadow_pane_g5

0x15f6,	// (0x0004a4b3) bg_popup_fep_shadow_pane_g6

0x15fe,	// (0x0004a4bb) bg_popup_fep_shadow_pane_g7

0xa3b5,	// (0x00053272) bg_popup_fep_shadow_pane_g8

0x558b,	// (0x0004e448) grid_vkb_keypad_number_pane_ParamLimits

0x558b,	// (0x0004e448) grid_vkb_keypad_number_pane

0x559b,	// (0x0004e458) grid_vkb_keypad_pane_ParamLimits

0x559b,	// (0x0004e458) grid_vkb_keypad_pane

0x55c1,	// (0x0004e47e) fep_vkb_bottom_pane_g1_ParamLimits

0x55c1,	// (0x0004e47e) fep_vkb_bottom_pane_g1

0x55ea,	// (0x0004e4a7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x55ea,	// (0x0004e4a7) grid_vkb_keypad_bottom_left_pane

0x55ff,	// (0x0004e4bc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x55ff,	// (0x0004e4bc) grid_vkb_keypad_bottom_right_pane

0x5614,	// (0x0004e4d1) fep_vkb_top_text_pane_g1

0xd2c9,	// (0x00056186) fep_vkb_top_text_pane_t1

0xd2db,	// (0x00056198) cell_vkb_side_pane_ParamLimits

0xd2db,	// (0x00056198) cell_vkb_side_pane

0x525c,	// (0x0004e119) cell_vkb_side_pane_g1

0x5683,	// (0x0004e540) cell_vkb_keypad_pane_ParamLimits

0x5683,	// (0x0004e540) cell_vkb_keypad_pane

0x56f8,	// (0x0004e5b5) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x00058a13) bg_popup_fep_shadow_pane_g

0x525c,	// (0x0004e119) cell_hwr_side_pane_g1

0x525c,	// (0x0004e119) cell_hwr_side_pane_g2

0x5702,	// (0x0004e5bf) cell_vkb_keypad_pane_t1

0xd2f1,	// (0x000561ae) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd2f1,	// (0x000561ae) cell_vkb_keypad_bottom_left_pane

0xd306,	// (0x000561c3) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd306,	// (0x000561c3) cell_vkb_keypad_bottom_right_pane

0x525c,	// (0x0004e119) cell_vkb_keypad_bottom_left_pane_g1

0x525c,	// (0x0004e119) cell_vkb_keypad_bottom_right_pane_g1

0x5766,	// (0x0004e623) cell_vkb_keypad_number_pane_ParamLimits

0x5766,	// (0x0004e623) cell_vkb_keypad_number_pane

0x5785,	// (0x0004e642) cell_vkb_keypad_number_pane_g1

0x578f,	// (0x0004e64c) cell_vkb_keypad_number_pane_g2

0x5798,	// (0x0004e655) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x00058a05) cell_vkb_keypad_number_pane_g

0x5702,	// (0x0004e5bf) cell_vkb_keypad_number_pane_t1

0x57bc,	// (0x0004e679) fep_vkb_candidate_pane_g1

0x0001,

0xfb43,	// (0x00058a00) cell_hwr_side_pane_g

0x57d5,	// (0x0004e692) cell_hwr_side_pane_t1

0x1610,	// (0x0004a4cd) cell_hwr_side_pane_t1_copy1

0x54cc,	// (0x0004e389) cell_hwr_candidate_pane_g1

0x161e,	// (0x0004a4db) cell_hwr_candidate_pane_t1

0x525c,	// (0x0004e119) cell_vkb_candidate_pane_g2

0x585b,	// (0x0004e718) cell_vkb_candidate_pane_t1

0x13de,	// (0x0004a29b) bg_popup_fep_shadow_pane_ParamLimits

0x13de,	// (0x0004a29b) bg_popup_fep_shadow_pane

0xd17d,	// (0x0005603a) bg_fep_hwr_top_pane_g4

0x52dc,	// (0x0004e199) bg_hwr_side_pane_g1_ParamLimits

0x52dc,	// (0x0004e199) bg_hwr_side_pane_g1

0xb851,	// (0x0005470e) cell_hwr_side_pane_ParamLimits

0xb851,	// (0x0005470e) cell_hwr_side_pane

0x1531,	// (0x0004a3ee) fep_hwr_write_pane_g1_ParamLimits

0x1531,	// (0x0004a3ee) fep_hwr_write_pane_g1

0x153e,	// (0x0004a3fb) fep_hwr_write_pane_g2_ParamLimits

0x153e,	// (0x0004a3fb) fep_hwr_write_pane_g2

0x154b,	// (0x0004a408) fep_hwr_write_pane_g3_ParamLimits

0x154b,	// (0x0004a408) fep_hwr_write_pane_g3

0xb871,	// (0x0005472e) fep_hwr_write_pane_g4_ParamLimits

0xb871,	// (0x0005472e) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x000589d2) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x000589d2) fep_hwr_write_pane_g

0xd17d,	// (0x0005603a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd17d,	// (0x0005603a) bg_fep_hwr_candidate_pane_g2

0x156e,	// (0x0004a42b) cell_hwr_candidate_pane_ParamLimits

0x156e,	// (0x0004a42b) cell_hwr_candidate_pane

0x15b0,	// (0x0004a46d) fep_hwr_candidate_pane_g1_ParamLimits

0x533c,	// (0x0004e1f9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x533c,	// (0x0004e1f9) bg_popup_fep_shadow_pane_cp2

0x54cc,	// (0x0004e389) fep_vkb_top_pane_g4_ParamLimits

0x54cc,	// (0x0004e389) fep_vkb_top_pane_g4

0x5512,	// (0x0004e3cf) fep_vkb_side_pane_g2_ParamLimits

0x5512,	// (0x0004e3cf) fep_vkb_side_pane_g2

0x9184,	// (0x00052041) list_setting_pane_t4_ParamLimits

0x9184,	// (0x00052041) list_setting_pane_t4

0x921e,	// (0x000520db) list_setting_number_pane_t5_ParamLimits

0x921e,	// (0x000520db) list_setting_number_pane_t5

0xc059,	// (0x00054f16) list_double_heading_pane_cp2_ParamLimits

0xc059,	// (0x00054f16) list_double_heading_pane_cp2

0x4c1a,	// (0x0004dad7) list_double_heading_pane_g1_cp2_ParamLimits

0x4c1a,	// (0x0004dad7) list_double_heading_pane_g1_cp2

0x5869,	// (0x0004e726) list_double_heading_pane_g2_cp2_ParamLimits

0x5869,	// (0x0004e726) list_double_heading_pane_g2_cp2

0x587d,	// (0x0004e73a) list_double_heading_pane_t1_cp2_ParamLimits

0x587d,	// (0x0004e73a) list_double_heading_pane_t1_cp2

0x5893,	// (0x0004e750) list_double_heading_pane_t2_cp2_ParamLimits

0x5893,	// (0x0004e750) list_double_heading_pane_t2_cp2

0x966c,	// (0x00052529) aid_value_unit2

0xef16,	// (0x00057dd3) popup_preview_fixed_window

0x9d83,	// (0x00052c40) bg_popup_preview_window_pane_cp02

0x58a5,	// (0x0004e762) list_preview_fixed_pane

0x58eb,	// (0x0004e7a8) list_empty_pane_fp_ParamLimits

0x58eb,	// (0x0004e7a8) list_empty_pane_fp

0x58eb,	// (0x0004e7a8) list_single_cale_day_pane_fp_ParamLimits

0x58eb,	// (0x0004e7a8) list_single_cale_day_pane_fp

0x58eb,	// (0x0004e7a8) list_single_graphic_heading_pane_fp_ParamLimits

0x58eb,	// (0x0004e7a8) list_single_graphic_heading_pane_fp

0x58eb,	// (0x0004e7a8) list_single_graphic_pane_fp_ParamLimits

0x58eb,	// (0x0004e7a8) list_single_graphic_pane_fp

0x58eb,	// (0x0004e7a8) list_single_heading_pane_fp_ParamLimits

0x58eb,	// (0x0004e7a8) list_single_heading_pane_fp

0x58eb,	// (0x0004e7a8) list_single_pane_fp_ParamLimits

0x58eb,	// (0x0004e7a8) list_single_pane_fp

0x5901,	// (0x0004e7be) list_single_pane_fp_g1_ParamLimits

0x5901,	// (0x0004e7be) list_single_pane_fp_g1

0x590d,	// (0x0004e7ca) list_single_pane_fp_g2_ParamLimits

0x590d,	// (0x0004e7ca) list_single_pane_fp_g2

0x5919,	// (0x0004e7d6) list_single_pane_fp_g3_ParamLimits

0x5919,	// (0x0004e7d6) list_single_pane_fp_g3

0x592d,	// (0x0004e7ea) list_single_pane_fp_g4_ParamLimits

0x592d,	// (0x0004e7ea) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x00058a34) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x00058a34) list_single_pane_fp_g

0xf1e1,	// (0x0005809e) list_single_pane_fp_t1_ParamLimits

0xf1e1,	// (0x0005809e) list_single_pane_fp_t1

0xf1f8,	// (0x000580b5) list_single_graphic_pane_fp_g1_ParamLimits

0xf1f8,	// (0x000580b5) list_single_graphic_pane_fp_g1

0x5901,	// (0x0004e7be) list_single_graphic_pane_fp_g2_ParamLimits

0x5901,	// (0x0004e7be) list_single_graphic_pane_fp_g2

0x590d,	// (0x0004e7ca) list_single_graphic_pane_fp_g3_ParamLimits

0x590d,	// (0x0004e7ca) list_single_graphic_pane_fp_g3

0x5919,	// (0x0004e7d6) list_single_graphic_pane_fp_g4_ParamLimits

0x5919,	// (0x0004e7d6) list_single_graphic_pane_fp_g4

0x592d,	// (0x0004e7ea) list_single_graphic_pane_fp_g5_ParamLimits

0x592d,	// (0x0004e7ea) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x00058a3d) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x00058a3d) list_single_graphic_pane_fp_g

0xf204,	// (0x000580c1) list_single_graphic_pane_fp_t1_ParamLimits

0xf204,	// (0x000580c1) list_single_graphic_pane_fp_t1

0xf1f8,	// (0x000580b5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf1f8,	// (0x000580b5) list_single_graphic_heading_pane_fp_g1

0x5901,	// (0x0004e7be) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5901,	// (0x0004e7be) list_single_graphic_heading_pane_fp_g2

0x590d,	// (0x0004e7ca) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x590d,	// (0x0004e7ca) list_single_graphic_heading_pane_fp_g3

0x5919,	// (0x0004e7d6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5919,	// (0x0004e7d6) list_single_graphic_heading_pane_fp_g4

0x592d,	// (0x0004e7ea) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x592d,	// (0x0004e7ea) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x00058a3d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x00058a3d) list_single_graphic_heading_pane_fp_g

0xf21a,	// (0x000580d7) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf21a,	// (0x000580d7) list_single_graphic_heading_pane_fp_t1

0xf230,	// (0x000580ed) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf230,	// (0x000580ed) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x00058a48) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x00058a48) list_single_graphic_heading_pane_fp_t

0xf242,	// (0x000580ff) list_single_cale_day_pane_fp_g1_ParamLimits

0xf242,	// (0x000580ff) list_single_cale_day_pane_fp_g1

0x5939,	// (0x0004e7f6) list_single_cale_day_pane_fp_g2_ParamLimits

0x5939,	// (0x0004e7f6) list_single_cale_day_pane_fp_g2

0x163c,	// (0x0004a4f9) list_single_cale_day_pane_fp_g3_ParamLimits

0x163c,	// (0x0004a4f9) list_single_cale_day_pane_fp_g3

0x1664,	// (0x0004a521) list_single_cale_day_pane_fp_g4_ParamLimits

0x1664,	// (0x0004a521) list_single_cale_day_pane_fp_g4

0x1688,	// (0x0004a545) list_single_cale_day_pane_fp_g5_ParamLimits

0x1688,	// (0x0004a545) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x00058a4d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x00058a4d) list_single_cale_day_pane_fp_g

0xf27a,	// (0x00058137) list_single_cale_day_pane_fp_t1_ParamLimits

0xf27a,	// (0x00058137) list_single_cale_day_pane_fp_t1

0xf2a0,	// (0x0005815d) list_single_cale_day_pane_fp_t2_ParamLimits

0xf2a0,	// (0x0005815d) list_single_cale_day_pane_fp_t2

0xf2b9,	// (0x00058176) list_single_cale_day_pane_fp_t3_ParamLimits

0xf2b9,	// (0x00058176) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x00058a58) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x00058a58) list_single_cale_day_pane_fp_t

0x5901,	// (0x0004e7be) list_empty_pane_fp_g1_ParamLimits

0x5901,	// (0x0004e7be) list_empty_pane_fp_g1

0xf2d2,	// (0x0005818f) list_empty_pane_fp_t1

0xf2e0,	// (0x0005819d) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x00058a5f) list_empty_pane_fp_t

0x5901,	// (0x0004e7be) list_single_heading_pane_fp_g1_ParamLimits

0x5901,	// (0x0004e7be) list_single_heading_pane_fp_g1

0x590d,	// (0x0004e7ca) list_single_heading_pane_fp_g2_ParamLimits

0x590d,	// (0x0004e7ca) list_single_heading_pane_fp_g2

0x5919,	// (0x0004e7d6) list_single_heading_pane_fp_g3_ParamLimits

0x5919,	// (0x0004e7d6) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x00058a64) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x00058a64) list_single_heading_pane_fp_g

0xf2ee,	// (0x000581ab) list_single_heading_pane_fp_t1_ParamLimits

0xf2ee,	// (0x000581ab) list_single_heading_pane_fp_t1

0xf300,	// (0x000581bd) list_single_heading_pane_fp_t2_ParamLimits

0xf300,	// (0x000581bd) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x00058a6b) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x00058a6b) list_single_heading_pane_fp_t

0xa520,	// (0x000533dd) aid_size_cell_fast

0x9d03,	// (0x00052bc0) soft_indicator_pane_cp1_t1

0xa55a,	// (0x00053417) cell_app_pane_cp2_ParamLimits

0xa55a,	// (0x00053417) cell_app_pane_cp2

0x1400,	// (0x0004a2bd) fep_hwr_candidate_drop_down_list_pane

0xd18b,	// (0x00056048) fep_hwr_candidate_pane_g3_ParamLimits

0xd18b,	// (0x00056048) fep_hwr_candidate_pane_g3

0xd198,	// (0x00056055) fep_hwr_candidate_pane_g4_ParamLimits

0xd198,	// (0x00056055) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x000589df) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x000589df) fep_hwr_candidate_pane_g

0x53c1,	// (0x0004e27e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x53c1,	// (0x0004e27e) fep_vkb_candidate_drop_down_list_pane

0x57c4,	// (0x0004e681) fep_vkb_candidate_pane_g3

0x57cc,	// (0x0004e689) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x00058a0c) fep_vkb_candidate_pane_g

0x54cc,	// (0x0004e389) cell_hwr_candidate_pane_g1_ParamLimits

0x57e3,	// (0x0004e6a0) cell_hwr_candidate_pane_g3_ParamLimits

0x57e3,	// (0x0004e6a0) cell_hwr_candidate_pane_g3

0x5804,	// (0x0004e6c1) cell_hwr_candidate_pane_g4_ParamLimits

0x5804,	// (0x0004e6c1) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x00058a26) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x00058a26) cell_hwr_candidate_pane_g

0x5825,	// (0x0004e6e2) cell_vkb_candidate_pane_g3_ParamLimits

0x5825,	// (0x0004e6e2) cell_vkb_candidate_pane_g3

0x5840,	// (0x0004e6fd) cell_vkb_candidate_pane_g4_ParamLimits

0x5840,	// (0x0004e6fd) cell_vkb_candidate_pane_g4

0xd321,	// (0x000561de) cell_app_pane_cp2_g1_ParamLimits

0xd321,	// (0x000561de) cell_app_pane_cp2_g1

0x5963,	// (0x0004e820) cell_app_pane_cp2_g2_ParamLimits

0x5963,	// (0x0004e820) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x00058a70) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x00058a70) cell_app_pane_cp2_g

0x596f,	// (0x0004e82c) cell_app_pane_cp2_t1_ParamLimits

0x596f,	// (0x0004e82c) cell_app_pane_cp2_t1

0xa349,	// (0x00053206) grid_highlight_pane_cp1_ParamLimits

0xa349,	// (0x00053206) grid_highlight_pane_cp1

0x16ac,	// (0x0004a569) cell_hwr_candidate_pane_cp1_ParamLimits

0x16ac,	// (0x0004a569) cell_hwr_candidate_pane_cp1

0x54cc,	// (0x0004e389) fep_hwr_candidate_drop_down_list_pane_g1

0x5981,	// (0x0004e83e) fep_hwr_candidate_drop_down_list_pane_g2

0x598e,	// (0x0004e84b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x00058a75) fep_hwr_candidate_drop_down_list_pane_g

0x16cb,	// (0x0004a588) fep_hwr_candidate_drop_down_list_scroll_pane

0x16d4,	// (0x0004a591) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x16d4,	// (0x0004a591) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x16e1,	// (0x0004a59e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x16e1,	// (0x0004a59e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x16ee,	// (0x0004a5ab) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x16ee,	// (0x0004a5ab) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5825,	// (0x0004e6e2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5825,	// (0x0004e6e2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5840,	// (0x0004e6fd) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5840,	// (0x0004e6fd) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x16fb,	// (0x0004a5b8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x16fb,	// (0x0004a5b8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1716,	// (0x0004a5d3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1716,	// (0x0004a5d3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1731,	// (0x0004a5ee) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1731,	// (0x0004a5ee) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x00058a7c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x00058a7c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x599b,	// (0x0004e858) cell_vkb_candidate_pane_cp1_ParamLimits

0x599b,	// (0x0004e858) cell_vkb_candidate_pane_cp1

0x54cc,	// (0x0004e389) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x54cc,	// (0x0004e389) fep_vkb_candidate_drop_down_list_pane_g1

0x5981,	// (0x0004e83e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5981,	// (0x0004e83e) fep_vkb_candidate_drop_down_list_pane_g2

0x598e,	// (0x0004e84b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x598e,	// (0x0004e84b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x00058a75) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb8,	// (0x00058a75) fep_vkb_candidate_drop_down_list_pane_g

0x59bb,	// (0x0004e878) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x59bb,	// (0x0004e878) fep_vkb_candidate_drop_down_list_scroll_pane

0x59c8,	// (0x0004e885) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x59c8,	// (0x0004e885) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x59d5,	// (0x0004e892) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x59d5,	// (0x0004e892) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x59e1,	// (0x0004e89e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x59e1,	// (0x0004e89e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x57e3,	// (0x0004e6a0) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x57e3,	// (0x0004e6a0) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5804,	// (0x0004e6c1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5804,	// (0x0004e6c1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x59ed,	// (0x0004e8aa) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x59ed,	// (0x0004e8aa) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5a0e,	// (0x0004e8cb) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5a0e,	// (0x0004e8cb) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5a2f,	// (0x0004e8ec) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5a2f,	// (0x0004e8ec) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x00058a8d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x00058a8d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x98c8,	// (0x00052785) title_pane_g1_ParamLimits

0x98db,	// (0x00052798) title_pane_g2_ParamLimits

0xf54e,	// (0x0005840b) title_pane_g_ParamLimits

0xc012,	// (0x00054ecf) aid_call2_pane

0xc01a,	// (0x00054ed7) aid_call_pane

0xc022,	// (0x00054edf) popup_clock_analogue_window_g1

0xc022,	// (0x00054edf) popup_clock_analogue_window_g2

0x0106,	// (0x00048fc3) popup_clock_analogue_window_g3

0x010f,	// (0x00048fcc) popup_clock_analogue_window_g4

0x968e,	// (0x0005254b) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x000585b0) popup_clock_analogue_window_g

0x0117,	// (0x00048fd4) popup_clock_analogue_window_t1

0x014f,	// (0x0004900c) clock_digital_number_pane_ParamLimits

0x014f,	// (0x0004900c) clock_digital_number_pane

0x015b,	// (0x00049018) clock_digital_number_pane_cp02_ParamLimits

0x015b,	// (0x00049018) clock_digital_number_pane_cp02

0x0167,	// (0x00049024) clock_digital_number_pane_cp03_ParamLimits

0x0167,	// (0x00049024) clock_digital_number_pane_cp03

0x0173,	// (0x00049030) clock_digital_number_pane_cp04_ParamLimits

0x0173,	// (0x00049030) clock_digital_number_pane_cp04

0x017f,	// (0x0004903c) clock_digital_separator_pane_ParamLimits

0x017f,	// (0x0004903c) clock_digital_separator_pane

0x018b,	// (0x00049048) popup_clock_digital_window_t1_ParamLimits

0x018b,	// (0x00049048) popup_clock_digital_window_t1

0x968e,	// (0x0005254b) clock_digital_number_pane_g1

0x968e,	// (0x0005254b) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x000585bb) clock_digital_number_pane_g

0x968e,	// (0x0005254b) clock_digital_separator_pane_g1

0x968e,	// (0x0005254b) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x000585bb) clock_digital_separator_pane_g

0xc0e5,	// (0x00054fa2) aid_fill_nsta_ParamLimits

0xc21b,	// (0x000550d8) indicator_nsta_pane_ParamLimits

0x2a9e,	// (0x0004b95b) popup_clock_analogue_window

0x2a9e,	// (0x0004b95b) popup_clock_digital_window

0xcf17,	// (0x00055dd4) grid_indicator_nsta_pane_ParamLimits

0x4c6d,	// (0x0004db2a) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0005895f) clock_nsta_pane_t

0x0031,	// (0x00048eee) aid_size_max_handle

0xa7bf,	// (0x0005367c) aid_size_min_handle

0x2471,	// (0x0004b32e) editor_scroll_pane

0x5a4a,	// (0x0004e907) ex_editor_pane

0xa4a8,	// (0x00053365) scroll_pane_cp13

0xa28d,	// (0x0005314a) scroll_pane_cp14

0xc051,	// (0x00054f0e) scroll_pane_cp36

0xa984,	// (0x00053841) list_single_graphic_hl_pane_cp2_ParamLimits

0xa984,	// (0x00053841) list_single_graphic_hl_pane_cp2

0xcd03,	// (0x00055bc0) list_single_graphic_hl_pane_ParamLimits

0xcd03,	// (0x00055bc0) list_single_graphic_hl_pane

0x9506,	// (0x000523c3) aid_size_min_hl_cp1

0x5a52,	// (0x0004e90f) list_highlight_pane_cp34_ParamLimits

0x5a52,	// (0x0004e90f) list_highlight_pane_cp34

0x5a63,	// (0x0004e920) list_single_graphic_hl_pane_g1_ParamLimits

0x5a63,	// (0x0004e920) list_single_graphic_hl_pane_g1

0x950f,	// (0x000523cc) list_single_graphic_hl_pane_g2_ParamLimits

0x950f,	// (0x000523cc) list_single_graphic_hl_pane_g2

0x950f,	// (0x000523cc) list_single_graphic_hl_pane_g3_ParamLimits

0x950f,	// (0x000523cc) list_single_graphic_hl_pane_g3

0x23aa,	// (0x0004b267) list_single_graphic_hl_pane_g4_ParamLimits

0x23aa,	// (0x0004b267) list_single_graphic_hl_pane_g4

0x5aa0,	// (0x0004e95d) list_single_graphic_hl_pane_g5_ParamLimits

0x5aa0,	// (0x0004e95d) list_single_graphic_hl_pane_g5

0x0004,

0xfbe1,	// (0x00058a9e) list_single_graphic_hl_pane_g_ParamLimits

0xfbe1,	// (0x00058a9e) list_single_graphic_hl_pane_g

0x951b,	// (0x000523d8) list_single_graphic_hl_pane_t1_ParamLimits

0x951b,	// (0x000523d8) list_single_graphic_hl_pane_t1

0x5a70,	// (0x0004e92d) aid_size_min_hl_cp2

0x5a79,	// (0x0004e936) list_highlight_pane_cp34_cp2_ParamLimits

0x5a79,	// (0x0004e936) list_highlight_pane_cp34_cp2

0x5a63,	// (0x0004e920) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5a63,	// (0x0004e920) list_single_graphic_hl_pane_g1_cp2

0x5a86,	// (0x0004e943) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5a86,	// (0x0004e943) list_single_graphic_hl_pane_g2_cp2

0xd33f,	// (0x000561fc) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd33f,	// (0x000561fc) list_single_graphic_hl_pane_g3_cp2

0x23aa,	// (0x0004b267) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x23aa,	// (0x0004b267) list_single_graphic_hl_pane_g4_cp2

0x5aa0,	// (0x0004e95d) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5aa0,	// (0x0004e95d) list_single_graphic_hl_pane_g5_cp2

0xad39,	// (0x00053bf6) control_pane_g4_ParamLimits

0xad39,	// (0x00053bf6) control_pane_g4

0x27b7,	// (0x0004b674) bg_popup_sub_pane_cp10_ParamLimits

0x5266,	// (0x0004e123) list_choice_list_pane_ParamLimits

0x5275,	// (0x0004e132) scroll_pane_cp23

0x9d83,	// (0x00052c40) bg_popup_preview_window_pane_cp02_ParamLimits

0x58a5,	// (0x0004e762) list_preview_fixed_pane_ParamLimits

0x58bb,	// (0x0004e778) list_preview_fixed_pane_cp_ParamLimits

0x58bb,	// (0x0004e778) list_preview_fixed_pane_cp

0x58c7,	// (0x0004e784) popup_preview_fixed_window_g1_ParamLimits

0x58c7,	// (0x0004e784) popup_preview_fixed_window_g1

0x58d3,	// (0x0004e790) popup_preview_fixed_window_g2_ParamLimits

0x58d3,	// (0x0004e790) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x00058a2d) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x00058a2d) popup_preview_fixed_window_g

0xf4c2,	// (0x0005837f) aid_navi_side_left_pane_ParamLimits

0xf4d7,	// (0x00058394) aid_navi_side_right_pane_ParamLimits

0xf4ef,	// (0x000583ac) navi_icon_pane_stacon_ParamLimits

0xf503,	// (0x000583c0) navi_navi_pane_stacon_ParamLimits

0xf4ef,	// (0x000583ac) navi_text_pane_stacon_ParamLimits

0x9684,	// (0x00052541) main_text_info_pane

0x5aca,	// (0x0004e987) listscroll_text_info_pane

0x5ad2,	// (0x0004e98f) list_text_info_pane_ParamLimits

0x5ad2,	// (0x0004e98f) list_text_info_pane

0x5ae1,	// (0x0004e99e) scroll_pane_cp24_ParamLimits

0x5ae1,	// (0x0004e99e) scroll_pane_cp24

0xd34d,	// (0x0005620a) list_text_info_pane_t1_ParamLimits

0xd34d,	// (0x0005620a) list_text_info_pane_t1

0xaeed,	// (0x00053daa) popup_fast_swap2_window_ParamLimits

0xaeed,	// (0x00053daa) popup_fast_swap2_window

0x5b33,	// (0x0004e9f0) aid_size_cell_fast2

0x9684,	// (0x00052541) bg_popup_window_pane_cp17

0x312b,	// (0x0004bfe8) heading_pane_cp2

0x9fd0,	// (0x00052e8d) listscroll_fast2_pane

0x5b3d,	// (0x0004e9fa) grid_fast2_pane

0x5b47,	// (0x0004ea04) listscroll_fast2_pane_g1

0x5b4f,	// (0x0004ea0c) listscroll_fast2_pane_g2

0x0001,

0xfbec,	// (0x00058aa9) listscroll_fast2_pane_g

0xa4a8,	// (0x00053365) scroll_pane_cp26

0x5b59,	// (0x0004ea16) cell_fast2_pane_ParamLimits

0x5b59,	// (0x0004ea16) cell_fast2_pane

0x5b6e,	// (0x0004ea2b) cell_fast2_pane_g1

0x5b77,	// (0x0004ea34) cell_fast2_pane_g2

0x5b80,	// (0x0004ea3d) cell_fast2_pane_g3

0x0002,

0xfbf1,	// (0x00058aae) cell_fast2_pane_g

0xa0b7,	// (0x00052f74) grid_highlight_pane_cp9

0xa0cc,	// (0x00052f89) main_eswt_pane_ParamLimits

0xa0cc,	// (0x00052f89) main_eswt_pane

0x5af6,	// (0x0004e9b3) list_single_text_info_pane

0x5b88,	// (0x0004ea45) eswt_ctrl_button_pane

0x5b88,	// (0x0004ea45) eswt_ctrl_canvas_pane

0xd369,	// (0x00056226) eswt_ctrl_combo_pane

0x5b88,	// (0x0004ea45) eswt_ctrl_default_pane

0x5b88,	// (0x0004ea45) eswt_ctrl_label_pane

0x5b98,	// (0x0004ea55) eswt_ctrl_wait_pane

0xd371,	// (0x0005622e) eswt_shell_pane

0x9684,	// (0x00052541) listscroll_eswt_app_pane

0x5bc0,	// (0x0004ea7d) popup_eswt_tasktip_window_ParamLimits

0x5bc0,	// (0x0004ea7d) popup_eswt_tasktip_window

0x2d38,	// (0x0004bbf5) bg_popup_window_pane_cp18

0x5bd1,	// (0x0004ea8e) eswt_control_pane_g1_ParamLimits

0x5bd1,	// (0x0004ea8e) eswt_control_pane_g1

0x5bde,	// (0x0004ea9b) eswt_control_pane_g2_ParamLimits

0x5bde,	// (0x0004ea9b) eswt_control_pane_g2

0x5beb,	// (0x0004eaa8) eswt_control_pane_g3_ParamLimits

0x5beb,	// (0x0004eaa8) eswt_control_pane_g3

0x5bf8,	// (0x0004eab5) eswt_control_pane_g4_ParamLimits

0x5bf8,	// (0x0004eab5) eswt_control_pane_g4

0x0003,

0xfbf8,	// (0x00058ab5) eswt_control_pane_g_ParamLimits

0xfbf8,	// (0x00058ab5) eswt_control_pane_g

0xa349,	// (0x00053206) bg_button_pane_ParamLimits

0xa349,	// (0x00053206) bg_button_pane

0xa0cc,	// (0x00052f89) common_borders_pane_copy2_ParamLimits

0xa0cc,	// (0x00052f89) common_borders_pane_copy2

0x5c05,	// (0x0004eac2) control_button_pane_g1_ParamLimits

0x5c05,	// (0x0004eac2) control_button_pane_g1

0x5c11,	// (0x0004eace) control_button_pane_g2_ParamLimits

0x5c11,	// (0x0004eace) control_button_pane_g2

0x5c1d,	// (0x0004eada) control_button_pane_g3_ParamLimits

0x5c1d,	// (0x0004eada) control_button_pane_g3

0x0002,

0xfc01,	// (0x00058abe) control_button_pane_g_ParamLimits

0xfc01,	// (0x00058abe) control_button_pane_g

0x5c31,	// (0x0004eaee) control_button_pane_t1

0x5c3f,	// (0x0004eafc) control_button_pane_t2

0x0001,

0xfc08,	// (0x00058ac5) control_button_pane_t

0x2cc4,	// (0x0004bb81) bg_button_pane_g1

0x2ccc,	// (0x0004bb89) bg_button_pane_g2

0x2cd4,	// (0x0004bb91) bg_button_pane_g3

0x2cdc,	// (0x0004bb99) bg_button_pane_g4

0x2ce4,	// (0x0004bba1) bg_button_pane_g5

0x2cec,	// (0x0004bba9) bg_button_pane_g6

0x2cf4,	// (0x0004bbb1) bg_button_pane_g7

0x2cfc,	// (0x0004bbb9) bg_button_pane_g8

0x2d04,	// (0x0004bbc1) bg_button_pane_g9

0x0008,

0xf855,	// (0x00058712) bg_button_pane_g

0x5221,	// (0x0004e0de) common_borders_pane_ParamLimits

0x5221,	// (0x0004e0de) common_borders_pane

0x5bd1,	// (0x0004ea8e) eswt_control_pane_g1_copy1_ParamLimits

0x5bd1,	// (0x0004ea8e) eswt_control_pane_g1_copy1

0x5bde,	// (0x0004ea9b) eswt_control_pane_g2_copy1_ParamLimits

0x5bde,	// (0x0004ea9b) eswt_control_pane_g2_copy1

0x5beb,	// (0x0004eaa8) eswt_control_pane_g3_copy1_ParamLimits

0x5beb,	// (0x0004eaa8) eswt_control_pane_g3_copy1

0x5bf8,	// (0x0004eab5) eswt_control_pane_g4_copy1_ParamLimits

0x5bf8,	// (0x0004eab5) eswt_control_pane_g4_copy1

0x525c,	// (0x0004e119) bg_eswt_ctrl_canvas_pane_g1

0x5221,	// (0x0004e0de) common_borders_pane_cp2_ParamLimits

0x5221,	// (0x0004e0de) common_borders_pane_cp2

0x5221,	// (0x0004e0de) common_borders_pane_cp3_ParamLimits

0x5221,	// (0x0004e0de) common_borders_pane_cp3

0x5c4d,	// (0x0004eb0a) separator_horizontal_pane

0x5c55,	// (0x0004eb12) separator_vertical_pane

0x5bd1,	// (0x0004ea8e) eswt_control_pane_g1_copy2_ParamLimits

0x5bd1,	// (0x0004ea8e) eswt_control_pane_g1_copy2

0x5bde,	// (0x0004ea9b) eswt_control_pane_g2_copy2_ParamLimits

0x5bde,	// (0x0004ea9b) eswt_control_pane_g2_copy2

0x5beb,	// (0x0004eaa8) eswt_control_pane_g3_copy2_ParamLimits

0x5beb,	// (0x0004eaa8) eswt_control_pane_g3_copy2

0x5bf8,	// (0x0004eab5) eswt_control_pane_g4_copy2_ParamLimits

0x5bf8,	// (0x0004eab5) eswt_control_pane_g4_copy2

0x9684,	// (0x00052541) common_borders_pane_cp4

0x5c5e,	// (0x0004eb1b) separator_horizontal_pane_g1

0x5c67,	// (0x0004eb24) separator_horizontal_pane_g2

0x5c70,	// (0x0004eb2d) separator_horizontal_pane_g3

0x0002,

0xfc0d,	// (0x00058aca) separator_horizontal_pane_g

0x5bd1,	// (0x0004ea8e) eswt_control_pane_g1_copy3_ParamLimits

0x5bd1,	// (0x0004ea8e) eswt_control_pane_g1_copy3

0x5bde,	// (0x0004ea9b) eswt_control_pane_g2_copy3_ParamLimits

0x5bde,	// (0x0004ea9b) eswt_control_pane_g2_copy3

0x5beb,	// (0x0004eaa8) eswt_control_pane_g3_copy3_ParamLimits

0x5beb,	// (0x0004eaa8) eswt_control_pane_g3_copy3

0x5bf8,	// (0x0004eab5) eswt_control_pane_g4_copy3_ParamLimits

0x5bf8,	// (0x0004eab5) eswt_control_pane_g4_copy3

0x9684,	// (0x00052541) common_borders_pane_cp5

0x5c79,	// (0x0004eb36) separator_vertical_pane_g1

0x5c82,	// (0x0004eb3f) separator_vertical_pane_g2

0x5c8b,	// (0x0004eb48) separator_vertical_pane_g3

0x0002,

0xfc14,	// (0x00058ad1) separator_vertical_pane_g

0x5bd1,	// (0x0004ea8e) eswt_control_pane_g1_copy4_ParamLimits

0x5bd1,	// (0x0004ea8e) eswt_control_pane_g1_copy4

0x5bde,	// (0x0004ea9b) eswt_control_pane_g2_copy4_ParamLimits

0x5bde,	// (0x0004ea9b) eswt_control_pane_g2_copy4

0x5beb,	// (0x0004eaa8) eswt_control_pane_g3_copy4_ParamLimits

0x5beb,	// (0x0004eaa8) eswt_control_pane_g3_copy4

0x5bf8,	// (0x0004eab5) eswt_control_pane_g4_copy4_ParamLimits

0x5bf8,	// (0x0004eab5) eswt_control_pane_g4_copy4

0xd391,	// (0x0005624e) eswt_ctrl_combo_button_pane

0xd399,	// (0x00056256) eswt_ctrl_input_pane

0xd3a1,	// (0x0005625e) popup_choice_list_window_cp70

0xd3a9,	// (0x00056266) eswt_ctrl_input_pane_t1

0x9684,	// (0x00052541) input_focus_pane_cp70

0x5221,	// (0x0004e0de) bg_button_pane_cp70_ParamLimits

0x5221,	// (0x0004e0de) bg_button_pane_cp70

0xd3b7,	// (0x00056274) eswt_ctrl_combo_button_pane_g1

0x5cc2,	// (0x0004eb7f) wait_bar_pane_cp70

0x2d38,	// (0x0004bbf5) bg_popup_window_pane_cp70_ParamLimits

0x2d38,	// (0x0004bbf5) bg_popup_window_pane_cp70

0x5cca,	// (0x0004eb87) popup_eswt_tasktip_window_t1

0x5ce0,	// (0x0004eb9d) wait_bar_pane_cp71_ParamLimits

0x5ce0,	// (0x0004eb9d) wait_bar_pane_cp71

0x5cec,	// (0x0004eba9) grid_eswt_app_pane

0xa804,	// (0x000536c1) scroll_pane_cp70

0xd3bf,	// (0x0005627c) cell_eswt_app_pane_ParamLimits

0xd3bf,	// (0x0005627c) cell_eswt_app_pane

0xd3e9,	// (0x000562a6) cell_eswt_app_pane_g1_ParamLimits

0xd3e9,	// (0x000562a6) cell_eswt_app_pane_g1

0xd418,	// (0x000562d5) cell_eswt_app_pane_g2_ParamLimits

0xd418,	// (0x000562d5) cell_eswt_app_pane_g2

0x0001,

0xfc1b,	// (0x00058ad8) cell_eswt_app_pane_g_ParamLimits

0xfc1b,	// (0x00058ad8) cell_eswt_app_pane_g

0xd43c,	// (0x000562f9) cell_eswt_app_pane_t1_ParamLimits

0xd43c,	// (0x000562f9) cell_eswt_app_pane_t1

0x5daa,	// (0x0004ec67) grid_highlight_pane_cp70_ParamLimits

0x5daa,	// (0x0004ec67) grid_highlight_pane_cp70

0x05a6,	// (0x00049463) set_content_pane_g1

0xaccb,	// (0x00053b88) status_small_volume_pane

0xb886,	// (0x00054743) status_small_volume_pane_g1

0xb88e,	// (0x0005474b) volume_small2_pane

0xb897,	// (0x00054754) volume_small2_pane_g1

0xb8a0,	// (0x0005475d) volume_small2_pane_g2

0xb8a9,	// (0x00054766) volume_small2_pane_g3

0xb8b2,	// (0x0005476f) volume_small2_pane_g4

0xb8bb,	// (0x00054778) volume_small2_pane_g5

0xb8c4,	// (0x00054781) volume_small2_pane_g6

0xb8cd,	// (0x0005478a) volume_small2_pane_g7

0xb8d6,	// (0x00054793) volume_small2_pane_g8

0xb8df,	// (0x0005479c) volume_small2_pane_g9

0xb8e8,	// (0x000547a5) volume_small2_pane_g10

0x0009,

0xfc20,	// (0x00058add) volume_small2_pane_g

0x5614,	// (0x0004e4d1) fep_vkb_top_text_pane_g1_ParamLimits

0xd2c9,	// (0x00056186) fep_vkb_top_text_pane_t1_ParamLimits

0x58df,	// (0x0004e79c) popup_preview_fixed_window_g3_ParamLimits

0x58df,	// (0x0004e79c) popup_preview_fixed_window_g3

0xb58a,	// (0x00054447) popup_toolbar_trans_pane

0xcb9c,	// (0x00055a59) aid_height_set_list_ParamLimits

0x4073,	// (0x0004cf30) aid_size_parent_ParamLimits

0x27b7,	// (0x0004b674) list_highlight_pane_cp2_ParamLimits

0x05a6,	// (0x00049463) set_content_pane_g1_ParamLimits

0xcd15,	// (0x00055bd2) list_single_image_pane_ParamLimits

0xcd15,	// (0x00055bd2) list_single_image_pane

0xd46e,	// (0x0005632b) aid_size_cell_image_ParamLimits

0xd46e,	// (0x0005632b) aid_size_cell_image

0xd47b,	// (0x00056338) grid_single_image_pane_ParamLimits

0xd47b,	// (0x00056338) grid_single_image_pane

0x590d,	// (0x0004e7ca) list_single_image_pane_g1_ParamLimits

0x590d,	// (0x0004e7ca) list_single_image_pane_g1

0x5919,	// (0x0004e7d6) list_single_image_pane_g2_ParamLimits

0x5919,	// (0x0004e7d6) list_single_image_pane_g2

0x0001,

0xfc35,	// (0x00058af2) list_single_image_pane_g_ParamLimits

0xfc35,	// (0x00058af2) list_single_image_pane_g

0x5dd1,	// (0x0004ec8e) list_single_image_pane_t1_ParamLimits

0x5dd1,	// (0x0004ec8e) list_single_image_pane_t1

0xd487,	// (0x00056344) cell_image_list_pane_ParamLimits

0xd487,	// (0x00056344) cell_image_list_pane

0xd49b,	// (0x00056358) cell_image_list_pane_g1

0xd4a4,	// (0x00056361) cell_image_list_pane_g2

0x0001,

0xfc3a,	// (0x00058af7) cell_image_list_pane_g

0xd4ad,	// (0x0005636a) aid_size_cell_tb_trans_pane

0xa349,	// (0x00053206) bg_tb_trans_pane

0xd4bf,	// (0x0005637c) grid_tb_trans_pane

0x2cc4,	// (0x0004bb81) bg_tb_trans_pane_g1

0x2ccc,	// (0x0004bb89) bg_tb_trans_pane_g2

0x2cd4,	// (0x0004bb91) bg_tb_trans_pane_g3

0x2cdc,	// (0x0004bb99) bg_tb_trans_pane_g4

0x2ce4,	// (0x0004bba1) bg_tb_trans_pane_g5

0x2cfc,	// (0x0004bbb9) bg_tb_trans_pane_g6

0x2d04,	// (0x0004bbc1) bg_tb_trans_pane_g7

0x2cec,	// (0x0004bba9) bg_tb_trans_pane_g8

0x2cf4,	// (0x0004bbb1) bg_tb_trans_pane_g9

0x0008,

0xfc3f,	// (0x00058afc) bg_tb_trans_pane_g

0xd4d3,	// (0x00056390) cell_toolbar_trans_pane_ParamLimits

0xd4d3,	// (0x00056390) cell_toolbar_trans_pane

0x525c,	// (0x0004e119) cell_toolbar_trans_pane_g1

0xcfde,	// (0x00055e9b) list_form2_midp_pane_t1

0xcfec,	// (0x00055ea9) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x000589a5) list_form2_midp_pane_t

0x4e49,	// (0x0004dd06) scroll_pane_cp51_ParamLimits

0x5005,	// (0x0004dec2) form2_midp_wait_pane_g1

0x500e,	// (0x0004decb) form2_midp_wait_pane_g2

0x5017,	// (0x0004ded4) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x000589ba) form2_midp_wait_pane_g

0x9a19,	// (0x000528d6) list_highlight_pane_cp21_ParamLimits

0x505f,	// (0x0004df1c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x506e,	// (0x0004df2b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4227,	// (0x0004d0e4) list_single_2graphic_im_pane_ParamLimits

0x4227,	// (0x0004d0e4) list_single_2graphic_im_pane

0xd4f9,	// (0x000563b6) list_single_2graphic_im_pane_g1_ParamLimits

0xd4f9,	// (0x000563b6) list_single_2graphic_im_pane_g1

0xd50a,	// (0x000563c7) list_single_2graphic_im_pane_g2_ParamLimits

0xd50a,	// (0x000563c7) list_single_2graphic_im_pane_g2

0xd516,	// (0x000563d3) list_single_2graphic_im_pane_g3_ParamLimits

0xd516,	// (0x000563d3) list_single_2graphic_im_pane_g3

0x0003,

0xfc52,	// (0x00058b0f) list_single_2graphic_im_pane_g_ParamLimits

0xfc52,	// (0x00058b0f) list_single_2graphic_im_pane_g

0xd52a,	// (0x000563e7) list_single_2graphic_im_pane_t1_ParamLimits

0xd52a,	// (0x000563e7) list_single_2graphic_im_pane_t1

0x58eb,	// (0x0004e7a8) list_single_graphic_2heading_pane_fp_ParamLimits

0x58eb,	// (0x0004e7a8) list_single_graphic_2heading_pane_fp

0xf1f8,	// (0x000580b5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf1f8,	// (0x000580b5) list_single_graphic_2heading_pane_fp_g1

0x5901,	// (0x0004e7be) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5901,	// (0x0004e7be) list_single_graphic_2heading_pane_fp_g2

0x590d,	// (0x0004e7ca) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x590d,	// (0x0004e7ca) list_single_graphic_2heading_pane_fp_g3

0x5919,	// (0x0004e7d6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5919,	// (0x0004e7d6) list_single_graphic_2heading_pane_fp_g4

0x592d,	// (0x0004e7ea) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x592d,	// (0x0004e7ea) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x00058a3d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x00058a3d) list_single_graphic_2heading_pane_fp_g

0xf316,	// (0x000581d3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf316,	// (0x000581d3) list_single_graphic_2heading_pane_fp_t1

0xf230,	// (0x000580ed) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf230,	// (0x000580ed) list_single_graphic_2heading_pane_fp_t2

0xf32c,	// (0x000581e9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf32c,	// (0x000581e9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5b,	// (0x00058b18) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5b,	// (0x00058b18) list_single_graphic_2heading_pane_fp_t

0x52e8,	// (0x0004e1a5) fep_hwr_write_pane_g5_ParamLimits

0x52e8,	// (0x0004e1a5) fep_hwr_write_pane_g5

0x52f4,	// (0x0004e1b1) fep_hwr_write_pane_g6_ParamLimits

0x52f4,	// (0x0004e1b1) fep_hwr_write_pane_g6

0xd371,	// (0x0005622e) eswt_shell_pane_ParamLimits

0x2d38,	// (0x0004bbf5) bg_popup_window_pane_cp18_ParamLimits

0x3fbb,	// (0x0004ce78) heading_pane_cp70

0x5cca,	// (0x0004eb87) popup_eswt_tasktip_window_t1_ParamLimits

0xc140,	// (0x00054ffd) aid_touch_tab_arrow_left

0xc156,	// (0x00055013) aid_touch_tab_arrow_right

0x98f3,	// (0x000527b0) title_pane_g3_ParamLimits

0x98f3,	// (0x000527b0) title_pane_g3

0xa308,	// (0x000531c5) set_value_pane_g1

0xb58a,	// (0x00054447) popup_toolbar_trans_pane_ParamLimits

0xd4ad,	// (0x0005636a) aid_size_cell_tb_trans_pane_ParamLimits

0xa349,	// (0x00053206) bg_tb_trans_pane_ParamLimits

0xd4bf,	// (0x0005637c) grid_tb_trans_pane_ParamLimits

0x9d83,	// (0x00052c40) cont_note_pane_ParamLimits

0x9d83,	// (0x00052c40) cont_note_pane

0xa0cc,	// (0x00052f89) cont_snote2_single_text_pane_ParamLimits

0xa0cc,	// (0x00052f89) cont_snote2_single_text_pane

0xa0cc,	// (0x00052f89) cont_snote2_single_graphic_pane_ParamLimits

0xa0cc,	// (0x00052f89) cont_snote2_single_graphic_pane

0x333e,	// (0x0004c1fb) cont_note_wait_pane_ParamLimits

0x333e,	// (0x0004c1fb) cont_note_wait_pane

0x333e,	// (0x0004c1fb) cont_note_image_pane_ParamLimits

0x333e,	// (0x0004c1fb) cont_note_image_pane

0x5ec7,	// (0x0004ed84) popup_note2_window_g1_ParamLimits

0x5ec7,	// (0x0004ed84) popup_note2_window_g1

0xd568,	// (0x00056425) popup_note2_window_t1_ParamLimits

0xd568,	// (0x00056425) popup_note2_window_t1

0xd5ad,	// (0x0005646a) popup_note2_window_t2_ParamLimits

0xd5ad,	// (0x0005646a) popup_note2_window_t2

0xd5f2,	// (0x000564af) popup_note2_window_t3_ParamLimits

0xd5f2,	// (0x000564af) popup_note2_window_t3

0x5fc7,	// (0x0004ee84) popup_note2_window_t4_ParamLimits

0x5fc7,	// (0x0004ee84) popup_note2_window_t4

0x9e07,	// (0x00052cc4) popup_note2_window_t5_ParamLimits

0x9e07,	// (0x00052cc4) popup_note2_window_t5

0x0004,

0xfc67,	// (0x00058b24) popup_note2_window_t_ParamLimits

0xfc67,	// (0x00058b24) popup_note2_window_t

0x5ff6,	// (0x0004eeb3) popup_note2_image_window_g1_ParamLimits

0x5ff6,	// (0x0004eeb3) popup_note2_image_window_g1

0xd637,	// (0x000564f4) popup_note2_image_window_g2_ParamLimits

0xd637,	// (0x000564f4) popup_note2_image_window_g2

0x0001,

0xfc72,	// (0x00058b2f) popup_note2_image_window_g_ParamLimits

0xfc72,	// (0x00058b2f) popup_note2_image_window_g

0x6014,	// (0x0004eed1) popup_note2_image_window_t1_ParamLimits

0x6014,	// (0x0004eed1) popup_note2_image_window_t1

0x602c,	// (0x0004eee9) popup_note2_image_window_t2_ParamLimits

0x602c,	// (0x0004eee9) popup_note2_image_window_t2

0x6044,	// (0x0004ef01) popup_note2_image_window_t3_ParamLimits

0x6044,	// (0x0004ef01) popup_note2_image_window_t3

0x0002,

0xfc77,	// (0x00058b34) popup_note2_image_window_t_ParamLimits

0xfc77,	// (0x00058b34) popup_note2_image_window_t

0x334c,	// (0x0004c209) popup_note2_wait_window_g1_ParamLimits

0x334c,	// (0x0004c209) popup_note2_wait_window_g1

0x3358,	// (0x0004c215) popup_note2_wait_window_g2_ParamLimits

0x3358,	// (0x0004c215) popup_note2_wait_window_g2

0x3364,	// (0x0004c221) popup_note2_wait_window_g3_ParamLimits

0x3364,	// (0x0004c221) popup_note2_wait_window_g3

0x0002,

0xf837,	// (0x000586f4) popup_note2_wait_window_g_ParamLimits

0xf837,	// (0x000586f4) popup_note2_wait_window_g

0x6060,	// (0x0004ef1d) popup_note2_wait_window_t1_ParamLimits

0x6060,	// (0x0004ef1d) popup_note2_wait_window_t1

0x607e,	// (0x0004ef3b) popup_note2_wait_window_t2_ParamLimits

0x607e,	// (0x0004ef3b) popup_note2_wait_window_t2

0x609c,	// (0x0004ef59) popup_note2_wait_window_t3_ParamLimits

0x609c,	// (0x0004ef59) popup_note2_wait_window_t3

0x60ae,	// (0x0004ef6b) popup_note2_wait_window_t4_ParamLimits

0x60ae,	// (0x0004ef6b) popup_note2_wait_window_t4

0x0003,

0xfc7e,	// (0x00058b3b) popup_note2_wait_window_t_ParamLimits

0xfc7e,	// (0x00058b3b) popup_note2_wait_window_t

0x60c0,	// (0x0004ef7d) wait_bar2_pane_ParamLimits

0x60c0,	// (0x0004ef7d) wait_bar2_pane

0x60d8,	// (0x0004ef95) popup_snote2_single_text_window_g1_ParamLimits

0x60d8,	// (0x0004ef95) popup_snote2_single_text_window_g1

0x6100,	// (0x0004efbd) popup_snote2_single_text_window_t1_ParamLimits

0x6100,	// (0x0004efbd) popup_snote2_single_text_window_t1

0x614c,	// (0x0004f009) popup_snote2_single_text_window_t2_ParamLimits

0x614c,	// (0x0004f009) popup_snote2_single_text_window_t2

0x6198,	// (0x0004f055) popup_snote2_single_text_window_t3_ParamLimits

0x6198,	// (0x0004f055) popup_snote2_single_text_window_t3

0x61d9,	// (0x0004f096) popup_snote2_single_text_window_t4_ParamLimits

0x61d9,	// (0x0004f096) popup_snote2_single_text_window_t4

0x620f,	// (0x0004f0cc) popup_snote2_single_text_window_t5_ParamLimits

0x620f,	// (0x0004f0cc) popup_snote2_single_text_window_t5

0x0004,

0xfc87,	// (0x00058b44) popup_snote2_single_text_window_t_ParamLimits

0xfc87,	// (0x00058b44) popup_snote2_single_text_window_t

0xd649,	// (0x00056506) popup_snote2_single_graphic_window_g1_ParamLimits

0xd649,	// (0x00056506) popup_snote2_single_graphic_window_g1

0x6262,	// (0x0004f11f) popup_snote2_single_graphic_window_g2_ParamLimits

0x6262,	// (0x0004f11f) popup_snote2_single_graphic_window_g2

0x0001,

0xfc92,	// (0x00058b4f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc92,	// (0x00058b4f) popup_snote2_single_graphic_window_g

0x628a,	// (0x0004f147) popup_snote2_single_graphic_window_t1_ParamLimits

0x628a,	// (0x0004f147) popup_snote2_single_graphic_window_t1

0x62d6,	// (0x0004f193) popup_snote2_single_graphic_window_t2_ParamLimits

0x62d6,	// (0x0004f193) popup_snote2_single_graphic_window_t2

0x6198,	// (0x0004f055) popup_snote2_single_graphic_window_t3_ParamLimits

0x6198,	// (0x0004f055) popup_snote2_single_graphic_window_t3

0x61d9,	// (0x0004f096) popup_snote2_single_graphic_window_t4_ParamLimits

0x61d9,	// (0x0004f096) popup_snote2_single_graphic_window_t4

0x620f,	// (0x0004f0cc) popup_snote2_single_graphic_window_t5_ParamLimits

0x620f,	// (0x0004f0cc) popup_snote2_single_graphic_window_t5

0x0004,

0xfc97,	// (0x00058b54) popup_snote2_single_graphic_window_t_ParamLimits

0xfc97,	// (0x00058b54) popup_snote2_single_graphic_window_t

0x4d06,	// (0x0004dbc3) clock_nsta_pane_cp2_t1

0x4d06,	// (0x0004dbc3) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0005897b) clock_nsta_pane_cp2_t

0xe203,	// (0x000570c0) form_field_data_wide_pane_g1_ParamLimits

0xa2c0,	// (0x0005317d) form_field_data_wide_pane_g2_ParamLimits

0xa2c0,	// (0x0005317d) form_field_data_wide_pane_g2

0xa357,	// (0x00053214) form_field_data_wide_pane_g3_ParamLimits

0xa357,	// (0x00053214) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00058533) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00058533) form_field_data_wide_pane_g

0xcf01,	// (0x00055dbe) grid_touch_3_pane_ParamLimits

0xcf01,	// (0x00055dbe) grid_touch_3_pane

0xd671,	// (0x0005652e) cell_touch_3_pane_ParamLimits

0xd671,	// (0x0005652e) cell_touch_3_pane

0x525c,	// (0x0004e119) cell_touch_3_pane_g1

0x525c,	// (0x0004e119) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x00058a00) cell_touch_3_pane_g

0x9e39,	// (0x00052cf6) cont_query_data_pane

0x9e41,	// (0x00052cfe) cont_query_data_pane_cp1

0x6350,	// (0x0004f20d) button_value_adjust_pane_cp7

0x6358,	// (0x0004f215) query_popup_pane_cp3

0xc083,	// (0x00054f40) bg_popup_sub_pane_cp22_ParamLimits

0xaa11,	// (0x000538ce) navi_navi_volume_pane_cp2

0xaa20,	// (0x000538dd) popup_side_volume_key_window_g2

0xaa2f,	// (0x000538ec) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x000585c9) popup_side_volume_key_window_g

0xaa3e,	// (0x000538fb) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x000585d0) popup_side_volume_key_window_t

0xab15,	// (0x000539d2) popup_side_volume_key_window_ParamLimits

0x8fea,	// (0x00051ea7) list_double_graphic_pane_g4_ParamLimits

0x8fea,	// (0x00051ea7) list_double_graphic_pane_g4

0xb7ca,	// (0x00054687) list_single_2heading_msg_pane_ParamLimits

0xb7ca,	// (0x00054687) list_single_2heading_msg_pane

0xb8f1,	// (0x000547ae) list_single_2heading_msg_pane_g1_ParamLimits

0xb8f1,	// (0x000547ae) list_single_2heading_msg_pane_g1

0xb8fd,	// (0x000547ba) list_single_2heading_msg_pane_g2_ParamLimits

0xb8fd,	// (0x000547ba) list_single_2heading_msg_pane_g2

0xb910,	// (0x000547cd) list_single_2heading_msg_pane_g3_ParamLimits

0xb910,	// (0x000547cd) list_single_2heading_msg_pane_g3

0xb91c,	// (0x000547d9) list_single_2heading_msg_pane_g4_ParamLimits

0xb91c,	// (0x000547d9) list_single_2heading_msg_pane_g4

0x0003,

0xfca2,	// (0x00058b5f) list_single_2heading_msg_pane_g_ParamLimits

0xfca2,	// (0x00058b5f) list_single_2heading_msg_pane_g

0x9531,	// (0x000523ee) list_single_2heading_msg_pane_t1_ParamLimits

0x9531,	// (0x000523ee) list_single_2heading_msg_pane_t1

0x9559,	// (0x00052416) list_single_2heading_msg_pane_t2_ParamLimits

0x9559,	// (0x00052416) list_single_2heading_msg_pane_t2

0x95c4,	// (0x00052481) list_single_2heading_msg_pane_t3_ParamLimits

0x95c4,	// (0x00052481) list_single_2heading_msg_pane_t3

0xf34c,	// (0x00058209) list_single_2heading_msg_pane_t4_ParamLimits

0xf34c,	// (0x00058209) list_single_2heading_msg_pane_t4

0x0003,

0xfcab,	// (0x00058b68) list_single_2heading_msg_pane_t_ParamLimits

0xfcab,	// (0x00058b68) list_single_2heading_msg_pane_t

0x98ff,	// (0x000527bc) title_pane_g4_ParamLimits

0x98ff,	// (0x000527bc) title_pane_g4

0xf413,	// (0x000582d0) title_pane_stacon_g3_ParamLimits

0xf413,	// (0x000582d0) title_pane_stacon_g3

0x5e8a,	// (0x0004ed47) list_single_2graphic_im_pane_g4_ParamLimits

0x5e8a,	// (0x0004ed47) list_single_2graphic_im_pane_g4

0xca49,	// (0x00055906) popup_side_volume_key_window_cp

0x4558,	// (0x0004d415) main_idle_act2_pane_t1

0x0e10,	// (0x00049ccd) toolbar_button_pane_g10

0xa257,	// (0x00053114) popup_toolbar_window_cp1

0x4cf7,	// (0x0004dbb4) clock_nsta_pane_cp_t1

0x4cf7,	// (0x0004dbb4) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x00058976) clock_nsta_pane_cp_t

0xaa11,	// (0x000538ce) navi_navi_volume_pane_cp2_ParamLimits

0x0211,	// (0x000490ce) popup_side_volume_key_window_g1_ParamLimits

0xaa20,	// (0x000538dd) popup_side_volume_key_window_g2_ParamLimits

0xaa2f,	// (0x000538ec) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x000585c9) popup_side_volume_key_window_g_ParamLimits

0x13ec,	// (0x0004a2a9) fep_hwr_aid_pane

0xd17d,	// (0x0005603a) bg_fep_hwr_top_pane_g4_ParamLimits

0x52b8,	// (0x0004e175) fep_hwr_top_pane_g1_ParamLimits

0x52ca,	// (0x0004e187) fep_hwr_top_pane_g2_ParamLimits

0x14a5,	// (0x0004a362) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x000589cb) fep_hwr_top_pane_g_ParamLimits

0x14ba,	// (0x0004a377) fep_hwr_top_text_pane_ParamLimits

0x3b48,	// (0x0004ca05) aid_touch_tab_arrow_arrow_2

0x3b51,	// (0x0004ca0e) aid_touch_tab_arrow_left_2

0x1400,	// (0x0004a2bd) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1437,	// (0x0004a2f4) fep_hwr_prediction_pane

0x5423,	// (0x0004e2e0) fep_vkb_prediction_pane

0xd2a9,	// (0x00056166) fep_vkb_side_pane_g3_ParamLimits

0xd2a9,	// (0x00056166) fep_vkb_side_pane_g3

0x54cc,	// (0x0004e389) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5981,	// (0x0004e83e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x598e,	// (0x0004e84b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x00058a75) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x637d,	// (0x0004f23a) fep_hwr_prediction_pane_g1

0x17e7,	// (0x0004a6a4) fep_hwr_prediction_pane_g2

0x17ef,	// (0x0004a6ac) fep_hwr_prediction_pane_g3

0x17f7,	// (0x0004a6b4) fep_hwr_prediction_pane_g4

0x0003,

0xfcb4,	// (0x00058b71) fep_hwr_prediction_pane_g

0x637d,	// (0x0004f23a) fep_vkb_prediction_pane_g1

0x6387,	// (0x0004f244) fep_vkb_prediction_pane_g2

0x638f,	// (0x0004f24c) fep_vkb_prediction_pane_g3

0x6397,	// (0x0004f254) fep_vkb_prediction_pane_g4

0x0003,

0xfcbd,	// (0x00058b7a) fep_vkb_prediction_pane_g

0xb760,	// (0x0005461d) slider_set_pane_g3

0xb774,	// (0x00054631) slider_set_pane_g4

0xb78c,	// (0x00054649) slider_set_pane_g5

0xb760,	// (0x0005461d) slider_set_pane_g6

0xb7a2,	// (0x0005465f) slider_set_pane_g7

0x41d4,	// (0x0004d091) slider_form_pane_g3

0x41dd,	// (0x0004d09a) slider_form_pane_g4

0x41e5,	// (0x0004d0a2) slider_form_pane_g5

0x41d4,	// (0x0004d091) slider_form_pane_g6

0xcce7,	// (0x00055ba4) slider_form_pane_g7

0x4803,	// (0x0004d6c0) slider_set_pane_vc_g3

0x480c,	// (0x0004d6c9) slider_set_pane_vc_g4

0x4815,	// (0x0004d6d2) slider_set_pane_vc_g5

0x4803,	// (0x0004d6c0) slider_set_pane_vc_g6

0x481e,	// (0x0004d6db) slider_set_pane_vc_g7

0x49d0,	// (0x0004d88d) slider_form_pane_vc_g1

0x49d9,	// (0x0004d896) slider_form_pane_vc_g2

0x49e2,	// (0x0004d89f) slider_form_pane_vc_g3

0x49d0,	// (0x0004d88d) slider_form_pane_vc_g4

0x49eb,	// (0x0004d8a8) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x00058948) slider_form_pane_vc_g

0x9684,	// (0x00052541) main_idle_act3_pane

0x639f,	// (0x0004f25c) ai3_links_pane

0xd6ba,	// (0x00056577) popup_ai3_data_window_ParamLimits

0xd6ba,	// (0x00056577) popup_ai3_data_window

0x9684,	// (0x00052541) grid_ai3_links_pane

0xd6d2,	// (0x0005658f) cell_ai3_links_pane_ParamLimits

0xd6d2,	// (0x0005658f) cell_ai3_links_pane

0x63d8,	// (0x0004f295) bg_popup_sub_pane_cp11

0x63e5,	// (0x0004f2a2) cell_ai3_links_pane_g1

0x9684,	// (0x00052541) bg_popup_sub_pane_cp12

0x640a,	// (0x0004f2c7) heading_ai3_data_pane

0x6412,	// (0x0004f2cf) list_ai3_gene_pane

0x641e,	// (0x0004f2db) popup_ai3_data_window_g1

0x6426,	// (0x0004f2e3) heading_ai3_data_pane_g1

0x642e,	// (0x0004f2eb) heading_ai3_data_pane_t1

0xd6ec,	// (0x000565a9) list_double_ai3_gene_pane_ParamLimits

0xd6ec,	// (0x000565a9) list_double_ai3_gene_pane

0x6449,	// (0x0004f306) list_single_ai3_gene_pane_ParamLimits

0x6449,	// (0x0004f306) list_single_ai3_gene_pane

0x5221,	// (0x0004e0de) list_highlight_pane_cp7_ParamLimits

0x5221,	// (0x0004e0de) list_highlight_pane_cp7

0x6456,	// (0x0004f313) list_single_a13_gene_pane_t1_ParamLimits

0x6456,	// (0x0004f313) list_single_a13_gene_pane_t1

0x646d,	// (0x0004f32a) list_single_ai3_gene_pane_g1

0x6476,	// (0x0004f333) list_single_ai3_gene_pane_g2

0x0001,

0xfcc6,	// (0x00058b83) list_single_ai3_gene_pane_g

0x647e,	// (0x0004f33b) list_double_ai3_gene_pane_g1_ParamLimits

0x647e,	// (0x0004f33b) list_double_ai3_gene_pane_g1

0xd6f9,	// (0x000565b6) list_double_ai3_gene_pane_t1_ParamLimits

0xd6f9,	// (0x000565b6) list_double_ai3_gene_pane_t1

0x64a6,	// (0x0004f363) list_double_ai3_gene_pane_t2_ParamLimits

0x64a6,	// (0x0004f363) list_double_ai3_gene_pane_t2

0x64bb,	// (0x0004f378) list_double_ai3_gene_pane_t3_ParamLimits

0x64bb,	// (0x0004f378) list_double_ai3_gene_pane_t3

0x0002,

0xfccb,	// (0x00058b88) list_double_ai3_gene_pane_t_ParamLimits

0xfccb,	// (0x00058b88) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf342,	// (0x000581ff) aid_size_min_col_2

0xd6a4,	// (0x00056561) aid_size_min_msg_ParamLimits

0xd6a4,	// (0x00056561) aid_size_min_msg

0xd2bd,	// (0x0005617a) fep_vkb_top_text_pane_g2_ParamLimits

0xd2bd,	// (0x0005617a) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x000589fb) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x000589fb) fep_vkb_top_text_pane_g

0x9684,	// (0x00052541) main_hc_apps_shell_pane

0x64d8,	// (0x0004f395) grid_hc_apps_pane_ParamLimits

0x64d8,	// (0x0004f395) grid_hc_apps_pane

0x64e7,	// (0x0004f3a4) list_hc_apps_pane

0x64ef,	// (0x0004f3ac) scroll_pane_cp37_ParamLimits

0x64ef,	// (0x0004f3ac) scroll_pane_cp37

0xd715,	// (0x000565d2) cell_hc_apps_pane_ParamLimits

0xd715,	// (0x000565d2) cell_hc_apps_pane

0xd7d3,	// (0x00056690) cell_hc_apps_pane_g1_ParamLimits

0xd7d3,	// (0x00056690) cell_hc_apps_pane_g1

0x65da,	// (0x0004f497) cell_hc_apps_pane_g2_ParamLimits

0x65da,	// (0x0004f497) cell_hc_apps_pane_g2

0x65f6,	// (0x0004f4b3) cell_hc_apps_pane_g3_ParamLimits

0x65f6,	// (0x0004f4b3) cell_hc_apps_pane_g3

0x0002,

0xfcd2,	// (0x00058b8f) cell_hc_apps_pane_g_ParamLimits

0xfcd2,	// (0x00058b8f) cell_hc_apps_pane_g

0xd800,	// (0x000566bd) cell_hc_apps_pane_t1_ParamLimits

0xd800,	// (0x000566bd) cell_hc_apps_pane_t1

0x9d83,	// (0x00052c40) grid_highlight_pane_cp10_ParamLimits

0x9d83,	// (0x00052c40) grid_highlight_pane_cp10

0xd83e,	// (0x000566fb) list_single_hc_apps_pane_ParamLimits

0xd83e,	// (0x000566fb) list_single_hc_apps_pane

0xd86e,	// (0x0005672b) list_single_hc_apps_pane_g1

0xb934,	// (0x000547f1) list_single_hc_apps_pane_g2

0x0001,

0xfcd9,	// (0x00058b96) list_single_hc_apps_pane_g

0xb94d,	// (0x0005480a) list_single_hc_apps_pane_g2_copy1

0x9632,	// (0x000524ef) list_single_hc_apps_pane_t1

0x9a19,	// (0x000528d6) bg_set_opt_pane_cp_ParamLimits

0x9a27,	// (0x000528e4) setting_slider_pane_t1_ParamLimits

0x9a40,	// (0x000528fd) setting_slider_pane_t2_ParamLimits

0x9a5a,	// (0x00052917) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005841b) setting_slider_pane_t_ParamLimits

0x9a72,	// (0x0005292f) slider_set_pane_ParamLimits

0x0715,	// (0x000495d2) control_pane_g5_ParamLimits

0x0715,	// (0x000495d2) control_pane_g5

0xcb69,	// (0x00055a26) slider_set_pane_g1_ParamLimits

0x10f6,	// (0x00049fb3) slider_set_pane_g2_ParamLimits

0xb760,	// (0x0005461d) slider_set_pane_g3_ParamLimits

0xb774,	// (0x00054631) slider_set_pane_g4_ParamLimits

0xb78c,	// (0x00054649) slider_set_pane_g5_ParamLimits

0xb760,	// (0x0005461d) slider_set_pane_g6_ParamLimits

0xb7a2,	// (0x0005465f) slider_set_pane_g7_ParamLimits

0xf953,	// (0x00058810) slider_set_pane_g_ParamLimits

0x0551,	// (0x0004940e) navi_icon_text_pane_ParamLimits

0xc109,	// (0x00054fc6) aid_fill_nsta_2_ParamLimits

0xc140,	// (0x00054ffd) aid_touch_tab_arrow_left_ParamLimits

0xc156,	// (0x00055013) aid_touch_tab_arrow_right_ParamLimits

0xc1f1,	// (0x000550ae) clock_nsta_pane_ParamLimits

0x3b2a,	// (0x0004c9e7) navi_icon_pane_g1_ParamLimits

0x3b36,	// (0x0004c9f3) navi_text_pane_t1_ParamLimits

0x4e07,	// (0x0004dcc4) navi_icon_text_pane_g1_ParamLimits

0x4e13,	// (0x0004dcd0) navi_icon_text_pane_t1_ParamLimits

0xd86e,	// (0x0005672b) list_single_hc_apps_pane_g1_ParamLimits

0xb934,	// (0x000547f1) list_single_hc_apps_pane_g2_ParamLimits

0xfcd9,	// (0x00058b96) list_single_hc_apps_pane_g_ParamLimits

0xb94d,	// (0x0005480a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9632,	// (0x000524ef) list_single_hc_apps_pane_t1_ParamLimits

0x97f8,	// (0x000526b5) popup_toolbar2_fixed_window_ParamLimits

0x97f8,	// (0x000526b5) popup_toolbar2_fixed_window

0xb580,	// (0x0005443d) popup_toolbar2_float_window

0x9684,	// (0x00052541) bg_popup_sub_pane_cp27

0x66d4,	// (0x0004f591) grid_toolbar2_float_pane

0x9684,	// (0x00052541) bg_popup_sub_pane_cp26

0x66d4,	// (0x0004f591) grid_toolbar2_fixed_pane

0xd887,	// (0x00056744) cell_toolbar2_fixed_pane_ParamLimits

0xd887,	// (0x00056744) cell_toolbar2_fixed_pane

0xd8a1,	// (0x0005675e) cell_toolbar2_fixed_pane_g1

0x2c44,	// (0x0004bb01) toolbar2_fixed_button_pane

0x2cc4,	// (0x0004bb81) toolbar2_fixed_button_pane_g1

0x2ccc,	// (0x0004bb89) toolbar2_fixed_button_pane_g2

0x2cd4,	// (0x0004bb91) toolbar2_fixed_button_pane_g3

0x2cdc,	// (0x0004bb99) toolbar2_fixed_button_pane_g4

0x2ce4,	// (0x0004bba1) toolbar2_fixed_button_pane_g5

0x2cec,	// (0x0004bba9) toolbar2_fixed_button_pane_g6

0x2cf4,	// (0x0004bbb1) toolbar2_fixed_button_pane_g7

0x2cfc,	// (0x0004bbb9) toolbar2_fixed_button_pane_g8

0x2d04,	// (0x0004bbc1) toolbar2_fixed_button_pane_g9

0x0008,

0xf855,	// (0x00058712) toolbar2_fixed_button_pane_g

0x66f5,	// (0x0004f5b2) cell_toolbar2_float_pane_ParamLimits

0x66f5,	// (0x0004f5b2) cell_toolbar2_float_pane

0x6706,	// (0x0004f5c3) cell_toolbar2_float_pane_g1

0x2c44,	// (0x0004bb01) toolbar2_fixed_button_pane_cp

0xd1a5,	// (0x00056062) fep_vkb_accented_list_pane_ParamLimits

0xd1a5,	// (0x00056062) fep_vkb_accented_list_pane

0x1608,	// (0x0004a4c5) bg_popup_fep_shadow_pane_g9

0x2471,	// (0x0004b32e) bg_popup_fep_shadow_pane_cp3

0xa48f,	// (0x0005334c) list_accented_list_pane

0x670f,	// (0x0004f5cc) list_single_accented_list_pane_ParamLimits

0x670f,	// (0x0004f5cc) list_single_accented_list_pane

0x2471,	// (0x0004b32e) list_highlight_pane_cp10

0x6720,	// (0x0004f5dd) list_single_accented_list_pane_t1

0xb4aa,	// (0x00054367) popup_slider_window_ParamLimits

0xb4aa,	// (0x00054367) popup_slider_window

0x6360,	// (0x0004f21d) aid_indentation_list_msg

0xd996,	// (0x00056853) bg_popup_window_pane_cp19

0x6840,	// (0x0004f6fd) popup_slider_window_g1

0x685c,	// (0x0004f719) popup_slider_window_g2

0x6878,	// (0x0004f735) popup_slider_window_g3

0x0005,

0xfcde,	// (0x00058b9b) popup_slider_window_g

0x68d4,	// (0x0004f791) popup_slider_window_t1

0x6948,	// (0x0004f805) small_volume_slider_vertical_pane

0x525c,	// (0x0004e119) small_volume_slider_vertical_pane_g1

0x525c,	// (0x0004e119) small_volume_slider_vertical_pane_g2

0x6964,	// (0x0004f821) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf0,	// (0x00058bad) small_volume_slider_vertical_pane_g

0x973c,	// (0x000525f9) area_side_right_pane_ParamLimits

0x973c,	// (0x000525f9) area_side_right_pane

0xb969,	// (0x00054826) aid_size_side_button_ParamLimits

0xb969,	// (0x00054826) aid_size_side_button

0xb982,	// (0x0005483f) grid_sctrl_middle_pane_ParamLimits

0xb982,	// (0x0005483f) grid_sctrl_middle_pane

0x1867,	// (0x0004a724) sctrl_sk_bottom_pane

0x1878,	// (0x0004a735) sctrl_sk_top_pane

0x188a,	// (0x0004a747) aid_touch_sctrl_top

0x9d83,	// (0x00052c40) bg_sctrl_sk_pane_ParamLimits

0x9d83,	// (0x00052c40) bg_sctrl_sk_pane

0x1897,	// (0x0004a754) sctrl_sk_top_pane_g1

0x18a4,	// (0x0004a761) sctrl_sk_top_pane_t1

0x188a,	// (0x0004a747) aid_touch_sctrl_bottom

0x9d83,	// (0x00052c40) bg_sctrl_sk_pane_cp_ParamLimits

0x9d83,	// (0x00052c40) bg_sctrl_sk_pane_cp

0x18bf,	// (0x0004a77c) sctrl_sk_bottom_pane_g1

0x18a4,	// (0x0004a761) sctrl_sk_bottom_pane_t1

0xb99c,	// (0x00054859) cell_sctrl_middle_pane_ParamLimits

0xb99c,	// (0x00054859) cell_sctrl_middle_pane

0xb9ad,	// (0x0005486a) aid_touch_sctrl_middle_ParamLimits

0xb9ad,	// (0x0005486a) aid_touch_sctrl_middle

0xb9ba,	// (0x00054877) bg_sctrl_middle_pane_ParamLimits

0xb9ba,	// (0x00054877) bg_sctrl_middle_pane

0x69ec,	// (0x0004f8a9) cell_sctrl_middle_pane_g1_ParamLimits

0x69ec,	// (0x0004f8a9) cell_sctrl_middle_pane_g1

0xb9c8,	// (0x00054885) cell_sctrl_middle_pane_g2_ParamLimits

0xb9c8,	// (0x00054885) cell_sctrl_middle_pane_g2

0x0001,

0xfcfc,	// (0x00058bb9) cell_sctrl_middle_pane_g_ParamLimits

0xfcfc,	// (0x00058bb9) cell_sctrl_middle_pane_g

0x2cc4,	// (0x0004bb81) bg_sctrl_middle_pane_g1

0x2ccc,	// (0x0004bb89) bg_sctrl_middle_pane_g2

0x2cd4,	// (0x0004bb91) bg_sctrl_middle_pane_g3

0x2cdc,	// (0x0004bb99) bg_sctrl_middle_pane_g4

0x2ce4,	// (0x0004bba1) bg_sctrl_middle_pane_g5

0x2cec,	// (0x0004bba9) bg_sctrl_middle_pane_g6

0x2cf4,	// (0x0004bbb1) bg_sctrl_middle_pane_g7

0x2cfc,	// (0x0004bbb9) bg_sctrl_middle_pane_g8

0x0007,

0xfd01,	// (0x00058bbe) bg_sctrl_middle_pane_g

0x2d04,	// (0x0004bbc1) bg_sctrl_middle_pane_g8_copy1

0x2cc4,	// (0x0004bb81) bg_sctrl_sk_pane_g1

0x2ccc,	// (0x0004bb89) bg_sctrl_sk_pane_g2

0x2cd4,	// (0x0004bb91) bg_sctrl_sk_pane_g3

0x0008,

0xf855,	// (0x00058712) bg_sctrl_sk_pane_g

0xa21d,	// (0x000530da) aid_size_touch_scroll_bar

0x2cdc,	// (0x0004bb99) bg_sctrl_sk_pane_g4

0x2ce4,	// (0x0004bba1) bg_sctrl_sk_pane_g5

0x2cec,	// (0x0004bba9) bg_sctrl_sk_pane_g6

0x2cf4,	// (0x0004bbb1) bg_sctrl_sk_pane_g7

0x2cfc,	// (0x0004bbb9) bg_sctrl_sk_pane_g8

0x2d04,	// (0x0004bbc1) bg_sctrl_sk_pane_g9

0x08cd,	// (0x0004978a) popup_fep_china_hwr2_fs_candidate_window

0xaf4a,	// (0x00053e07) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xaf4a,	// (0x00053e07) popup_fep_china_hwr2_fs_control_window

0x54cc,	// (0x0004e389) sctrl_sk_top_pane_g2

0x0001,

0xfcf7,	// (0x00058bb4) sctrl_sk_top_pane_g

0xda4e,	// (0x0005690b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda4e,	// (0x0005690b) aid_fep_china_hwr2_fs_cell

0xda62,	// (0x0005691f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda62,	// (0x0005691f) bg_popup_fep_shadow_pane_cp4

0xda79,	// (0x00056936) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda79,	// (0x00056936) bg_popup_fep_shadow_pane_cp5

0xda8b,	// (0x00056948) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda8b,	// (0x00056948) popup_fep_china_hwr2_fs_control_bar_grid

0xda9f,	// (0x0005695c) popup_fep_china_hwr2_fs_control_funtion_grid

0x69c0,	// (0x0004f87d) aid_fep_china_hwr2_fs_candi_cell

0x9684,	// (0x00052541) bg_popup_fep_shadow_pane_cp6

0x69ca,	// (0x0004f887) popup_fep_china_hwr2_fs_candidate_grid

0xdaa7,	// (0x00056964) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdaa7,	// (0x00056964) cell_fep_china_hwr2_fs_funtion_grid

0x525c,	// (0x0004e119) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x69ec,	// (0x0004f8a9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x69ec,	// (0x0004f8a9) cell_fep_china_hwr2_fs_funtion_grid_g1

0x69fa,	// (0x0004f8b7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x69fa,	// (0x0004f8b7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd12,	// (0x00058bcf) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd12,	// (0x00058bcf) cell_fep_china_hwr2_fs_funtion_grid_g

0xdabf,	// (0x0005697c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdabf,	// (0x0005697c) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdad4,	// (0x00056991) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdad4,	// (0x00056991) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd17,	// (0x00058bd4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd17,	// (0x00058bd4) cell_fep_china_hwr2_fs_funtion_grid_t

0x6a41,	// (0x0004f8fe) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6a49,	// (0x0004f906) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6a51,	// (0x0004f90e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1c,	// (0x00058bd9) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6a59,	// (0x0004f916) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6a59,	// (0x0004f916) cell_fep_china_hwr2_fs_candidate_grid

0x6a72,	// (0x0004f92f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6a7a,	// (0x0004f937) popup_fep_china_hwr2_fs_candidate_grid_g21

0x525c,	// (0x0004e119) cell_fep_china_hwr2_fs_candidate_grid_g1

0x525c,	// (0x0004e119) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x00058a00) cell_fep_china_hwr2_fs_candidate_grid_g

0x6a82,	// (0x0004f93f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x28bd,	// (0x0004b77a) clock_nsta_pane_cp_24_ParamLimits

0x28bd,	// (0x0004b77a) clock_nsta_pane_cp_24

0x293b,	// (0x0004b7f8) indicator_nsta_pane_cp_24_ParamLimits

0x293b,	// (0x0004b7f8) indicator_nsta_pane_cp_24

0x39a6,	// (0x0004c863) heading_pane_g1

0x0001,

0xf8ba,	// (0x00058777) heading_pane_g

0x43a1,	// (0x0004d25e) grid_sct_catagory_button_pane

0x43d1,	// (0x0004d28e) scroll_pane_cp5_ParamLimits

0x4e55,	// (0x0004dd12) button_value_adjust_pane_cp5_ParamLimits

0x4e55,	// (0x0004dd12) button_value_adjust_pane_cp5

0x4f34,	// (0x0004ddf1) form2_midp_time_pane_ParamLimits

0x6a90,	// (0x0004f94d) cell_sct_catagory_button_pane_ParamLimits

0x6a90,	// (0x0004f94d) cell_sct_catagory_button_pane

0x5221,	// (0x0004e0de) bg_button_pane_cp01_ParamLimits

0x5221,	// (0x0004e0de) bg_button_pane_cp01

0x525c,	// (0x0004e119) cell_sct_catagory_button_pane_g1

0xb523,	// (0x000543e0) popup_tb_extension_window

0xdaf0,	// (0x000569ad) aid_size_cell_ext_ParamLimits

0xdaf0,	// (0x000569ad) aid_size_cell_ext

0xa0cc,	// (0x00052f89) bg_tb_trans_pane_cp1_ParamLimits

0xa0cc,	// (0x00052f89) bg_tb_trans_pane_cp1

0xdb16,	// (0x000569d3) grid_tb_ext_pane_ParamLimits

0xdb16,	// (0x000569d3) grid_tb_ext_pane

0xdb55,	// (0x00056a12) cell_tb_ext_pane_ParamLimits

0xdb55,	// (0x00056a12) cell_tb_ext_pane

0xdb7d,	// (0x00056a3a) cell_tb_ext_pane_g1_ParamLimits

0xdb7d,	// (0x00056a3a) cell_tb_ext_pane_g1

0x6b26,	// (0x0004f9e3) cell_tb_ext_pane_t1

0x9d83,	// (0x00052c40) list_highlight_pane_cp11_ParamLimits

0x9d83,	// (0x00052c40) list_highlight_pane_cp11

0x980d,	// (0x000526ca) popup_uni_indicator_window_ParamLimits

0x980d,	// (0x000526ca) popup_uni_indicator_window

0xa349,	// (0x00053206) bg_popup_sub_pane_cp14

0xdb9a,	// (0x00056a57) list_uniindi_pane

0xdba6,	// (0x00056a63) uniindi_top_pane

0x9d83,	// (0x00052c40) bg_uniindi_top_pane

0xdbc5,	// (0x00056a82) uniindi_top_pane_g1

0xdbdb,	// (0x00056a98) uniindi_top_pane_g2

0x0003,

0xfd23,	// (0x00058be0) uniindi_top_pane_g

0xdbf8,	// (0x00056ab5) uniindi_top_pane_t1

0x6bd7,	// (0x0004fa94) list_single_uniindi_pane_ParamLimits

0x6bd7,	// (0x0004fa94) list_single_uniindi_pane

0x525c,	// (0x0004e119) bg_uniindi_top_pane_g1

0x6be9,	// (0x0004faa6) list_single_uniindi_pane_g1

0x6bfc,	// (0x0004fab9) list_single_uniindi_pane_t1

0x9684,	// (0x00052541) control_bg_pane

0x6c21,	// (0x0004fade) bg_sctrl_sk_pane_cp1

0x6c2a,	// (0x0004fae7) bg_sctrl_sk_pane_cp2

0x6c33,	// (0x0004faf0) control_bg_pane_g1

0x6c3c,	// (0x0004faf9) control_bg_pane_g2

0x0001,

0xfd2c,	// (0x00058be9) control_bg_pane_g

0x4cac,	// (0x0004db69) cell_indicator_nsta_pane_g1_ParamLimits

0xcf3c,	// (0x00055df9) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x00058964) cell_indicator_nsta_pane_g_ParamLimits

0xf1ce,	// (0x0005808b) form2_midp_time_pane_t1_ParamLimits

0x13de,	// (0x0004a29b) main_idle_act4_pane_ParamLimits

0x13de,	// (0x0004a29b) main_idle_act4_pane

0xb523,	// (0x000543e0) popup_tb_extension_window_ParamLimits

0xdb3b,	// (0x000569f8) tb_ext_find_pane_ParamLimits

0xdb3b,	// (0x000569f8) tb_ext_find_pane

0x6c45,	// (0x0004fb02) ai_gene_pane_1_cp1

0x25bc,	// (0x0004b479) ai_gene_pane_2_cp1

0xdc22,	// (0x00056adf) list_single_idle_plugin_calendar_pane

0x6c56,	// (0x0004fb13) list_single_idle_plugin_notification_pane

0x6c5f,	// (0x0004fb1c) list_single_idle_plugin_player_pane

0xdc2b,	// (0x00056ae8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc2b,	// (0x00056ae8) list_single_idle_plugin_shortcut_pane

0xdc53,	// (0x00056b10) main_idle_act4_pane_t1

0xdc6a,	// (0x00056b27) main_idle_act4_pane_t2

0x0001,

0xfd31,	// (0x00058bee) main_idle_act4_pane_t

0xdc81,	// (0x00056b3e) middle_sk_idle_act4_pane_ParamLimits

0xdc81,	// (0x00056b3e) middle_sk_idle_act4_pane

0xdc9d,	// (0x00056b5a) popup_clock_digital_analogue_window_cp2

0xdcc9,	// (0x00056b86) shortcut_wheel_idle_act4_pane_ParamLimits

0xdcc9,	// (0x00056b86) shortcut_wheel_idle_act4_pane

0x525c,	// (0x0004e119) shortcut_wheel_idle_act4_pane_g1

0x525c,	// (0x0004e119) shortcut_wheel_idle_act4_pane_g2

0x525c,	// (0x0004e119) shortcut_wheel_idle_act4_pane_g3

0x525c,	// (0x0004e119) shortcut_wheel_idle_act4_pane_g4

0x525c,	// (0x0004e119) shortcut_wheel_idle_act4_pane_g5

0x6cf2,	// (0x0004fbaf) shortcut_wheel_idle_act4_pane_g6

0x6cfa,	// (0x0004fbb7) shortcut_wheel_idle_act4_pane_g7

0x6d02,	// (0x0004fbbf) shortcut_wheel_idle_act4_pane_g8

0x6d0a,	// (0x0004fbc7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd36,	// (0x00058bf3) shortcut_wheel_idle_act4_pane_g

0xd17d,	// (0x0005603a) middle_sk_idle_act4_pane_g1_ParamLimits

0xd17d,	// (0x0005603a) middle_sk_idle_act4_pane_g1

0xdd46,	// (0x00056c03) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd46,	// (0x00056c03) middle_sk_idle_act4_pane_g2

0x0001,

0xfd59,	// (0x00058c16) middle_sk_idle_act4_pane_g_ParamLimits

0xfd59,	// (0x00058c16) middle_sk_idle_act4_pane_g

0xdd5e,	// (0x00056c1b) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd5e,	// (0x00056c1b) middle_sk_idle_act4_pane_t1

0xdd8d,	// (0x00056c4a) grid_ai_shortcut_pane_ParamLimits

0xdd8d,	// (0x00056c4a) grid_ai_shortcut_pane

0xddaa,	// (0x00056c67) list_highlight_pane_cp16_ParamLimits

0xddaa,	// (0x00056c67) list_highlight_pane_cp16

0xddb7,	// (0x00056c74) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddb7,	// (0x00056c74) list_single_idle_plugin_shortcut_pane_g1

0xddc3,	// (0x00056c80) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xddc3,	// (0x00056c80) list_single_idle_plugin_shortcut_pane_g2

0xdddf,	// (0x00056c9c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdddf,	// (0x00056c9c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5e,	// (0x00058c1b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5e,	// (0x00058c1b) list_single_idle_plugin_shortcut_pane_g

0xddf4,	// (0x00056cb1) cell_ai_shortcut_pane_ParamLimits

0xddf4,	// (0x00056cb1) cell_ai_shortcut_pane

0xde0a,	// (0x00056cc7) cell_ai_shortcut_pane_g1_ParamLimits

0xde0a,	// (0x00056cc7) cell_ai_shortcut_pane_g1

0x6c45,	// (0x0004fb02) ai_gene_pane_1_cp2

0x6e3a,	// (0x0004fcf7) ai_gene_pane_2_cp2

0x6e42,	// (0x0004fcff) list_highlight_pane_cp15

0xde2c,	// (0x00056ce9) list_single_idle_plugin_calendar_pane_g1

0x6e42,	// (0x0004fcff) list_highlight_pane_cp17

0x6e53,	// (0x0004fd10) list_single_idle_plugin_calendar_pane_g1_copy1

0x6e5b,	// (0x0004fd18) list_single_idle_plugin_player_pane_g1

0x45fa,	// (0x0004d4b7) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd65,	// (0x00058c22) list_single_idle_plugin_player_pane_g

0x6e63,	// (0x0004fd20) list_single_idle_plugin_player_pane_t1

0x6e71,	// (0x0004fd2e) list_single_idle_plugin_player_pane_t2

0x6e7f,	// (0x0004fd3c) list_single_idle_plugin_player_pane_t3

0x6e8d,	// (0x0004fd4a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6a,	// (0x00058c27) list_single_idle_plugin_player_pane_t

0x6e9b,	// (0x0004fd58) wait_bar_pane_cp15

0x6ea3,	// (0x0004fd60) grid_ai_notification_pane

0x45fa,	// (0x0004d4b7) list_single_idle_plugin_notification_pane_g1

0xde34,	// (0x00056cf1) cell_ai_notification_pane_ParamLimits

0xde34,	// (0x00056cf1) cell_ai_notification_pane

0x6eb9,	// (0x0004fd76) cell_ai_notification_pane_g1

0x6ec1,	// (0x0004fd7e) cell_ai_notification_pane_t1

0xde41,	// (0x00056cfe) tb_ext_find_button_pane

0xde49,	// (0x00056d06) tb_ext_find_pane_g1

0xde51,	// (0x00056d0e) tb_ext_find_pane_t1

0xc022,	// (0x00054edf) tb_ext_find_button_pane_g1

0xde5f,	// (0x00056d1c) tb_ext_find_button_pane_g2

0x0001,

0xfd73,	// (0x00058c30) tb_ext_find_button_pane_g

0xdc53,	// (0x00056b10) main_idle_act4_pane_t1_ParamLimits

0xdc6a,	// (0x00056b27) main_idle_act4_pane_t2_ParamLimits

0xfd31,	// (0x00058bee) main_idle_act4_pane_t_ParamLimits

0xdc9d,	// (0x00056b5a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdcb5,	// (0x00056b72) sat_plugin_idle_act4_pane_ParamLimits

0xdcb5,	// (0x00056b72) sat_plugin_idle_act4_pane

0xde68,	// (0x00056d25) sat_plugin_idle_act4_pane_t1_ParamLimits

0xde68,	// (0x00056d25) sat_plugin_idle_act4_pane_t1

0xde80,	// (0x00056d3d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xde80,	// (0x00056d3d) sat_plugin_idle_act4_pane_t2

0xde98,	// (0x00056d55) sat_plugin_idle_act4_pane_t3_ParamLimits

0xde98,	// (0x00056d55) sat_plugin_idle_act4_pane_t3

0xdeb0,	// (0x00056d6d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdeb0,	// (0x00056d6d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd78,	// (0x00058c35) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd78,	// (0x00058c35) sat_plugin_idle_act4_pane_t

0x9788,	// (0x00052645) popup_battery_window_ParamLimits

0x9788,	// (0x00052645) popup_battery_window

0x9d83,	// (0x00052c40) bg_popup_sub_pane_cp25_ParamLimits

0x9d83,	// (0x00052c40) bg_popup_sub_pane_cp25

0x6f42,	// (0x0004fdff) popup_battery_window_g1_ParamLimits

0x6f42,	// (0x0004fdff) popup_battery_window_g1

0x6f4e,	// (0x0004fe0b) popup_battery_window_t1_ParamLimits

0x6f4e,	// (0x0004fe0b) popup_battery_window_t1

0x6f60,	// (0x0004fe1d) popup_battery_window_t2_ParamLimits

0x6f60,	// (0x0004fe1d) popup_battery_window_t2

0x0001,

0xfd81,	// (0x00058c3e) popup_battery_window_t_ParamLimits

0xfd81,	// (0x00058c3e) popup_battery_window_t

0xab74,	// (0x00053a31) midp_canvas_pane_ParamLimits

0xabe6,	// (0x00053aa3) midp_keypad_pane_ParamLimits

0xabe6,	// (0x00053aa3) midp_keypad_pane

0x27b7,	// (0x0004b674) main_midp_pane_ParamLimits

0xcf49,	// (0x00055e06) signal_pane_g2_cp_ParamLimits

0xdec8,	// (0x00056d85) aid_size_cell_midp_keypad_ParamLimits

0xdec8,	// (0x00056d85) aid_size_cell_midp_keypad

0xdee6,	// (0x00056da3) midp_keyp_game_grid_pane_ParamLimits

0xdee6,	// (0x00056da3) midp_keyp_game_grid_pane

0xdf0d,	// (0x00056dca) midp_keyp_rocker_pane_ParamLimits

0xdf0d,	// (0x00056dca) midp_keyp_rocker_pane

0xdf5e,	// (0x00056e1b) midp_keyp_sk_left_pane_ParamLimits

0xdf5e,	// (0x00056e1b) midp_keyp_sk_left_pane

0xdfb2,	// (0x00056e6f) midp_keyp_sk_right_pane_ParamLimits

0xdfb2,	// (0x00056e6f) midp_keyp_sk_right_pane

0x9684,	// (0x00052541) bg_button_pane_cp03

0xe006,	// (0x00056ec3) midp_keyp_sk_left_pane_g1

0x9684,	// (0x00052541) bg_button_pane_cp04

0xe006,	// (0x00056ec3) midp_keyp_sk_right_pane_g1

0x525c,	// (0x0004e119) midp_keyp_rocker_pane_g1

0xe00f,	// (0x00056ecc) keyp_game_cell_pane_ParamLimits

0xe00f,	// (0x00056ecc) keyp_game_cell_pane

0x9684,	// (0x00052541) bg_button_pane_cp02

0xe033,	// (0x00056ef0) keyp_game_cell_pane_g1

0x97a8,	// (0x00052665) popup_fep_vkb2_window_ParamLimits

0x97a8,	// (0x00052665) popup_fep_vkb2_window

0xb9d4,	// (0x00054891) aid_size_cell_vkb2_ParamLimits

0xb9d4,	// (0x00054891) aid_size_cell_vkb2

0xba12,	// (0x000548cf) popup_fep_vkb2_window_g1_ParamLimits

0xba12,	// (0x000548cf) popup_fep_vkb2_window_g1

0xba62,	// (0x0005491f) vkb2_area_bottom_pane_ParamLimits

0xba62,	// (0x0005491f) vkb2_area_bottom_pane

0xbab6,	// (0x00054973) vkb2_area_keypad_pane_ParamLimits

0xbab6,	// (0x00054973) vkb2_area_keypad_pane

0xbafe,	// (0x000549bb) vkb2_area_top_pane_ParamLimits

0xbafe,	// (0x000549bb) vkb2_area_top_pane

0xbb84,	// (0x00054a41) vkb2_top_entry_pane_ParamLimits

0xbb84,	// (0x00054a41) vkb2_top_entry_pane

0xbbb1,	// (0x00054a6e) vkb2_top_grid_left_pane_ParamLimits

0xbbb1,	// (0x00054a6e) vkb2_top_grid_left_pane

0xbbd1,	// (0x00054a8e) vkb2_top_grid_right_pane_ParamLimits

0xbbd1,	// (0x00054a8e) vkb2_top_grid_right_pane

0x1b1d,	// (0x0004a9da) vkb2_cell_keypad_pane_ParamLimits

0x1b1d,	// (0x0004a9da) vkb2_cell_keypad_pane

0xbc17,	// (0x00054ad4) vkb2_area_bottom_grid_pane_ParamLimits

0xbc17,	// (0x00054ad4) vkb2_area_bottom_grid_pane

0xbc41,	// (0x00054afe) vkb2_area_bottom_pane_g1_ParamLimits

0xbc41,	// (0x00054afe) vkb2_area_bottom_pane_g1

0xbc67,	// (0x00054b24) vkb2_area_bottom_pane_g2_ParamLimits

0xbc67,	// (0x00054b24) vkb2_area_bottom_pane_g2

0xbc98,	// (0x00054b55) vkb2_area_bottom_pane_g3_ParamLimits

0xbc98,	// (0x00054b55) vkb2_area_bottom_pane_g3

0x0002,

0xfd86,	// (0x00058c43) vkb2_area_bottom_pane_g_ParamLimits

0xfd86,	// (0x00058c43) vkb2_area_bottom_pane_g

0x1cc7,	// (0x0004ab84) vkb2_top_cell_left_pane_ParamLimits

0x1cc7,	// (0x0004ab84) vkb2_top_cell_left_pane

0xe03c,	// (0x00056ef9) vkb2_top_entry_pane_g1_ParamLimits

0xe03c,	// (0x00056ef9) vkb2_top_entry_pane_g1

0xe04a,	// (0x00056f07) vkb2_top_entry_pane_t1_ParamLimits

0xe04a,	// (0x00056f07) vkb2_top_entry_pane_t1

0x7111,	// (0x0004ffce) vkb2_top_entry_pane_t2_ParamLimits

0x7111,	// (0x0004ffce) vkb2_top_entry_pane_t2

0x7143,	// (0x00050000) vkb2_top_entry_pane_t3_ParamLimits

0x7143,	// (0x00050000) vkb2_top_entry_pane_t3

0x0002,

0xfd8d,	// (0x00058c4a) vkb2_top_entry_pane_t_ParamLimits

0xfd8d,	// (0x00058c4a) vkb2_top_entry_pane_t

0xbd02,	// (0x00054bbf) vkb2_top_grid_right_pane_g1_ParamLimits

0xbd02,	// (0x00054bbf) vkb2_top_grid_right_pane_g1

0x1d2a,	// (0x0004abe7) vkb2_top_grid_right_pane_g2_ParamLimits

0x1d2a,	// (0x0004abe7) vkb2_top_grid_right_pane_g2

0x1d42,	// (0x0004abff) vkb2_top_grid_right_pane_g3_ParamLimits

0x1d42,	// (0x0004abff) vkb2_top_grid_right_pane_g3

0xbd18,	// (0x00054bd5) vkb2_top_grid_right_pane_g4_ParamLimits

0xbd18,	// (0x00054bd5) vkb2_top_grid_right_pane_g4

0x0003,

0xfd94,	// (0x00058c51) vkb2_top_grid_right_pane_g_ParamLimits

0xfd94,	// (0x00058c51) vkb2_top_grid_right_pane_g

0x1d70,	// (0x0004ac2d) vkb2_top_cell_left_pane_g1

0x1d87,	// (0x0004ac44) vkb2_cell_keypad_pane_g1_ParamLimits

0x1d87,	// (0x0004ac44) vkb2_cell_keypad_pane_g1

0x7167,	// (0x00050024) vkb2_cell_keypad_pane_t1_ParamLimits

0x7167,	// (0x00050024) vkb2_cell_keypad_pane_t1

0x1d95,	// (0x0004ac52) vkb2_cell_bottom_grid_pane_ParamLimits

0x1d95,	// (0x0004ac52) vkb2_cell_bottom_grid_pane

0x1dce,	// (0x0004ac8b) vkb2_cell_bottom_grid_pane_g1

0xdcea,	// (0x00056ba7) aid_call2_pane_cp02

0xdcf2,	// (0x00056baf) aid_call_pane_cp02

0xdcfa,	// (0x00056bb7) clock_digital_number_pane_cp10

0xdd02,	// (0x00056bbf) clock_digital_number_pane_cp11

0xdd0a,	// (0x00056bc7) clock_digital_number_pane_cp12

0xdd12,	// (0x00056bcf) clock_digital_number_pane_cp13

0xdd1a,	// (0x00056bd7) clock_digital_separator_pane_cp10

0xc022,	// (0x00054edf) popup_clock_digital_analogue_window_cp2_g1

0xc022,	// (0x00054edf) popup_clock_digital_analogue_window_cp2_g2

0xdd22,	// (0x00056bdf) popup_clock_digital_analogue_window_cp2_g3

0xc022,	// (0x00054edf) popup_clock_digital_analogue_window_cp2_g4

0xdd22,	// (0x00056bdf) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd49,	// (0x00058c06) popup_clock_digital_analogue_window_cp2_g

0xdd2a,	// (0x00056be7) popup_clock_digital_analogue_window_cp2_t1

0xdd38,	// (0x00056bf5) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd54,	// (0x00058c11) popup_clock_digital_analogue_window_cp2_t

0x525c,	// (0x0004e119) clock_digital_number_pane_cp10_g1

0x525c,	// (0x0004e119) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x00058a00) clock_digital_number_pane_cp10_g

0x525c,	// (0x0004e119) clock_digital_separator_pane_cp10_g1

0x525c,	// (0x0004e119) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x00058a00) clock_digital_separator_pane_cp10_g

0xdbe7,	// (0x00056aa4) uniindi_top_pane_g3

0x6ba0,	// (0x0004fa5d) uniindi_top_pane_g4

0x1ba8,	// (0x0004aa65) vkb2_row_keypad_pane_ParamLimits

0x1ba8,	// (0x0004aa65) vkb2_row_keypad_pane

0x1dea,	// (0x0004aca7) vkb2_cell_t_keypad_pane_ParamLimits

0x1dea,	// (0x0004aca7) vkb2_cell_t_keypad_pane

0x1dfa,	// (0x0004acb7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1dfa,	// (0x0004acb7) vkb2_cell_t_keypad_pane_cp08

0x1e0d,	// (0x0004acca) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1e0d,	// (0x0004acca) vkb2_cell_t_keypad_pane_cp09

0x1e21,	// (0x0004acde) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1e21,	// (0x0004acde) vkb2_cell_t_keypad_pane_cp01

0x1e32,	// (0x0004acef) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1e32,	// (0x0004acef) vkb2_cell_t_keypad_pane_cp02

0x1e43,	// (0x0004ad00) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1e43,	// (0x0004ad00) vkb2_cell_t_keypad_pane_cp03

0x1e54,	// (0x0004ad11) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1e54,	// (0x0004ad11) vkb2_cell_t_keypad_pane_cp04

0x1e65,	// (0x0004ad22) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1e65,	// (0x0004ad22) vkb2_cell_t_keypad_pane_cp05

0x1e76,	// (0x0004ad33) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1e76,	// (0x0004ad33) vkb2_cell_t_keypad_pane_cp06

0x1e87,	// (0x0004ad44) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1e87,	// (0x0004ad44) vkb2_cell_t_keypad_pane_cp07

0x1e98,	// (0x0004ad55) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1e98,	// (0x0004ad55) vkb2_cell_t_keypad_pane_cp10

0x54cc,	// (0x0004e389) vkb2_cell_t_keypad_pane_g1

0x717e,	// (0x0005003b) vkb2_cell_t_keypad_pane_t1

0x9684,	// (0x00052541) popup_grid_graphic2_window

0xe083,	// (0x00056f40) aid_size_cell_graphic2_ParamLimits

0xe083,	// (0x00056f40) aid_size_cell_graphic2

0xe0c1,	// (0x00056f7e) bg_popup_window_pane_cp21_ParamLimits

0xe0c1,	// (0x00056f7e) bg_popup_window_pane_cp21

0xe0cf,	// (0x00056f8c) graphic2_pages_pane_ParamLimits

0xe0cf,	// (0x00056f8c) graphic2_pages_pane

0xe125,	// (0x00056fe2) grid_graphic2_control_pane_ParamLimits

0xe125,	// (0x00056fe2) grid_graphic2_control_pane

0xe4ff,	// (0x000573bc) grid_graphic2_pane_ParamLimits

0xe4ff,	// (0x000573bc) grid_graphic2_pane

0xe586,	// (0x00057443) cell_graphic2_pane

0x9684,	// (0x00052541) main_comp_mode_pane

0x6412,	// (0x0004f2cf) list_ai3_gene_pane_ParamLimits

0xd996,	// (0x00056853) bg_popup_window_pane_cp19_ParamLimits

0x67e2,	// (0x0004f69f) bg_touch_area_indi_pane_ParamLimits

0x67e2,	// (0x0004f69f) bg_touch_area_indi_pane

0x67f8,	// (0x0004f6b5) bg_touch_area_indi_pane_cp01_ParamLimits

0x67f8,	// (0x0004f6b5) bg_touch_area_indi_pane_cp01

0x680e,	// (0x0004f6cb) bg_touch_area_indi_pane_cp02_ParamLimits

0x680e,	// (0x0004f6cb) bg_touch_area_indi_pane_cp02

0x6826,	// (0x0004f6e3) bg_touch_area_indi_pane_cp03_ParamLimits

0x6826,	// (0x0004f6e3) bg_touch_area_indi_pane_cp03

0x6840,	// (0x0004f6fd) popup_slider_window_g1_ParamLimits

0x685c,	// (0x0004f719) popup_slider_window_g2_ParamLimits

0x6878,	// (0x0004f735) popup_slider_window_g3_ParamLimits

0xfcde,	// (0x00058b9b) popup_slider_window_g_ParamLimits

0x68d4,	// (0x0004f791) popup_slider_window_t1_ParamLimits

0x6948,	// (0x0004f805) small_volume_slider_vertical_pane_ParamLimits

0xe586,	// (0x00057443) cell_graphic2_pane_ParamLimits

0xe5e1,	// (0x0005749e) bg_button_pane_cp10_ParamLimits

0xe5e1,	// (0x0005749e) bg_button_pane_cp10

0xe5f4,	// (0x000574b1) bg_button_pane_cp11_ParamLimits

0xe5f4,	// (0x000574b1) bg_button_pane_cp11

0xe607,	// (0x000574c4) graphic2_pages_pane_g1_ParamLimits

0xe607,	// (0x000574c4) graphic2_pages_pane_g1

0xe622,	// (0x000574df) graphic2_pages_pane_g2_ParamLimits

0xe622,	// (0x000574df) graphic2_pages_pane_g2

0x0001,

0xfda2,	// (0x00058c5f) graphic2_pages_pane_g_ParamLimits

0xfda2,	// (0x00058c5f) graphic2_pages_pane_g

0xe63a,	// (0x000574f7) graphic2_pages_pane_t1_ParamLimits

0xe63a,	// (0x000574f7) graphic2_pages_pane_t1

0xe652,	// (0x0005750f) cell_graphic2_control_pane_ParamLimits

0xe652,	// (0x0005750f) cell_graphic2_control_pane

0xe684,	// (0x00057541) cell_graphic2_pane_g1_ParamLimits

0xe684,	// (0x00057541) cell_graphic2_pane_g1

0xd18b,	// (0x00056048) cell_graphic2_pane_g2_ParamLimits

0xd18b,	// (0x00056048) cell_graphic2_pane_g2

0xe16d,	// (0x0005702a) cell_graphic2_pane_g3_ParamLimits

0xe16d,	// (0x0005702a) cell_graphic2_pane_g3

0xd198,	// (0x00056055) cell_graphic2_pane_g4_ParamLimits

0xd198,	// (0x00056055) cell_graphic2_pane_g4

0xe691,	// (0x0005754e) cell_graphic2_pane_g5_ParamLimits

0xe691,	// (0x0005754e) cell_graphic2_pane_g5

0x0004,

0xfda7,	// (0x00058c64) cell_graphic2_pane_g_ParamLimits

0xfda7,	// (0x00058c64) cell_graphic2_pane_g

0xe6b1,	// (0x0005756e) cell_graphic2_pane_t1_ParamLimits

0xe6b1,	// (0x0005756e) cell_graphic2_pane_t1

0x399a,	// (0x0004c857) grid_highlight_pane_cp11_ParamLimits

0x399a,	// (0x0004c857) grid_highlight_pane_cp11

0x9d83,	// (0x00052c40) bg_button_pane_cp05

0xe6fd,	// (0x000575ba) cell_graphic2_control_pane_g1

0x525c,	// (0x0004e119) bg_touch_area_indi_pane_g1

0x745a,	// (0x00050317) aid_cmod_rocker_key_size

0x7464,	// (0x00050321) aid_cmode_itu_key_size

0x748f,	// (0x0005034c) main_cmode_video_pane

0x7499,	// (0x00050356) main_comp_mode_itu_pane

0x74a5,	// (0x00050362) main_comp_mode_rocker_pane

0x74b1,	// (0x0005036e) cell_cmode_rocker_pane_ParamLimits

0x74b1,	// (0x0005036e) cell_cmode_rocker_pane

0x74c3,	// (0x00050380) cell_cmode_itu_pane_ParamLimits

0x74c3,	// (0x00050380) cell_cmode_itu_pane

0xa349,	// (0x00053206) bg_button_pane_cp06_ParamLimits

0xa349,	// (0x00053206) bg_button_pane_cp06

0x54cc,	// (0x0004e389) cell_cmode_rocker_pane_g1_ParamLimits

0x54cc,	// (0x0004e389) cell_cmode_rocker_pane_g1

0x69ec,	// (0x0004f8a9) cell_cmode_rocker_pane_g2_ParamLimits

0x69ec,	// (0x0004f8a9) cell_cmode_rocker_pane_g2

0x0001,

0xfdb7,	// (0x00058c74) cell_cmode_rocker_pane_g_ParamLimits

0xfdb7,	// (0x00058c74) cell_cmode_rocker_pane_g

0x9684,	// (0x00052541) bg_button_pane_cp07

0x74d8,	// (0x00050395) cell_cmode_itu_pane_g1

0x74e1,	// (0x0005039e) cell_cmode_itu_pane_t1

0x74ef,	// (0x000503ac) cell_cmode_itu_pane_t2

0x0001,

0xfdbc,	// (0x00058c79) cell_cmode_itu_pane_t

0x6c11,	// (0x0004face) aid_touch_ctrl_left

0x6c19,	// (0x0004fad6) aid_touch_ctrl_right

0x9684,	// (0x00052541) compa_mode_pane

0xe723,	// (0x000575e0) aid_cmod_rocker_key_size_cp

0xe72d,	// (0x000575ea) aid_cmode_itu_key_size_cp

0x7511,	// (0x000503ce) compa_mode_pane_g1

0x7519,	// (0x000503d6) compa_mode_pane_g2

0x7521,	// (0x000503de) compa_mode_pane_g3

0x0002,

0xfdc1,	// (0x00058c7e) compa_mode_pane_g

0xe737,	// (0x000575f4) main_comp_mode_itu_pane_cp

0xe73f,	// (0x000575fc) main_comp_mode_rocker_pane_cp

0xe747,	// (0x00057604) cell_cmode_itu_pane_cp_ParamLimits

0xe747,	// (0x00057604) cell_cmode_itu_pane_cp

0xe75c,	// (0x00057619) cell_cmode_rocker_pane_cp_ParamLimits

0xe75c,	// (0x00057619) cell_cmode_rocker_pane_cp

0xa349,	// (0x00053206) bg_button_pane_cp06_cp_ParamLimits

0xa349,	// (0x00053206) bg_button_pane_cp06_cp

0x54cc,	// (0x0004e389) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x54cc,	// (0x0004e389) cell_cmode_rocker_pane_g1_cp

0x525c,	// (0x0004e119) cell_cmode_rocker_pane_g2_cp

0x9684,	// (0x00052541) bg_button_pane_cp07_cp

0xe76e,	// (0x0005762b) cell_cmode_itu_pane_g1_cp

0xe777,	// (0x00057634) cell_cmode_itu_pane_t1_cp

0xe777,	// (0x00057634) cell_cmode_itu_pane_t2_cp

0xccdd,	// (0x00055b9a) settings_code_pane_cp2

0x9a19,	// (0x000528d6) bg_popup_window_pane_cp3_ParamLimits

0x9f5d,	// (0x00052e1a) heading_pane_cp3_ParamLimits

0x9f69,	// (0x00052e26) listscroll_popup_graphic_pane_ParamLimits

0x13ec,	// (0x0004a2a9) fep_hwr_aid_pane_ParamLimits

0x188a,	// (0x0004a747) aid_touch_sctrl_top_ParamLimits

0x1897,	// (0x0004a754) sctrl_sk_top_pane_g1_ParamLimits

0x54cc,	// (0x0004e389) sctrl_sk_top_pane_g2_ParamLimits

0xfcf7,	// (0x00058bb4) sctrl_sk_top_pane_g_ParamLimits

0x18a4,	// (0x0004a761) sctrl_sk_top_pane_t1_ParamLimits

0x188a,	// (0x0004a747) aid_touch_sctrl_bottom_ParamLimits

0x18a4,	// (0x0004a761) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbb3,	// (0x00056a70) aid_area_touch_clock

0xbb46,	// (0x00054a03) aid_vkb2_area_top_pane_cell_ParamLimits

0xbb46,	// (0x00054a03) aid_vkb2_area_top_pane_cell

0xbbf1,	// (0x00054aae) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbbf1,	// (0x00054aae) aid_vkb2_area_bottom_pane_cell

0x70c9,	// (0x0004ff86) popup_char_count_window

0x7577,	// (0x00050434) popup_char_count_window_g1

0x7580,	// (0x0005043d) popup_char_count_window_g2

0x7589,	// (0x00050446) popup_char_count_window_g3

0x0002,

0xfdc8,	// (0x00058c85) popup_char_count_window_g

0x7592,	// (0x0005044f) popup_char_count_window_t1

0x1945,	// (0x0004a802) popup_fep_char_preview_window_ParamLimits

0x1945,	// (0x0004a802) popup_fep_char_preview_window

0xbb66,	// (0x00054a23) vkb2_top_candi_pane_ParamLimits

0xbb66,	// (0x00054a23) vkb2_top_candi_pane

0xe785,	// (0x00057642) cell_vkb2_top_candi_pane_ParamLimits

0xe785,	// (0x00057642) cell_vkb2_top_candi_pane

0x333e,	// (0x0004c1fb) bg_popup_fep_char_preview_window_ParamLimits

0x333e,	// (0x0004c1fb) bg_popup_fep_char_preview_window

0x1ead,	// (0x0004ad6a) popup_fep_char_preview_window_t1_ParamLimits

0x1ead,	// (0x0004ad6a) popup_fep_char_preview_window_t1

0x75ed,	// (0x000504aa) bg_popup_fep_char_preview_window_g1

0x75f5,	// (0x000504b2) bg_popup_fep_char_preview_window_g2

0x75fd,	// (0x000504ba) bg_popup_fep_char_preview_window_g3

0x7605,	// (0x000504c2) bg_popup_fep_char_preview_window_g4

0x760d,	// (0x000504ca) bg_popup_fep_char_preview_window_g5

0x1ee7,	// (0x0004ada4) bg_popup_fep_char_preview_window_g6

0x7615,	// (0x000504d2) bg_popup_fep_char_preview_window_g7

0x761d,	// (0x000504da) bg_popup_fep_char_preview_window_g8

0x7625,	// (0x000504e2) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcf,	// (0x00058c8c) bg_popup_fep_char_preview_window_g

0x54cc,	// (0x0004e389) cell_vkb2_top_candi_pane_g1_ParamLimits

0x54cc,	// (0x0004e389) cell_vkb2_top_candi_pane_g1

0x57e3,	// (0x0004e6a0) cell_vkb2_top_candi_pane_g2_ParamLimits

0x57e3,	// (0x0004e6a0) cell_vkb2_top_candi_pane_g2

0x5804,	// (0x0004e6c1) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5804,	// (0x0004e6c1) cell_vkb2_top_candi_pane_g3

0x1eef,	// (0x0004adac) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1eef,	// (0x0004adac) cell_vkb2_top_candi_pane_g4

0x746e,	// (0x0005032b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x746e,	// (0x0005032b) cell_vkb2_top_candi_pane_g5

0x69ec,	// (0x0004f8a9) cell_vkb2_top_candi_pane_g6_ParamLimits

0x69ec,	// (0x0004f8a9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde2,	// (0x00058c9f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde2,	// (0x00058c9f) cell_vkb2_top_candi_pane_g

0x1f10,	// (0x0004adcd) cell_vkb2_top_candi_pane_t1

0xb74c,	// (0x00054609) aid_size_touch_slider_mark_ParamLimits

0xb74c,	// (0x00054609) aid_size_touch_slider_mark

0xe10b,	// (0x00056fc8) grid_graphic2_catg_pane_ParamLimits

0xe10b,	// (0x00056fc8) grid_graphic2_catg_pane

0xe559,	// (0x00057416) popup_grid_graphic2_window_t1_ParamLimits

0xe559,	// (0x00057416) popup_grid_graphic2_window_t1

0xe56f,	// (0x0005742c) popup_grid_graphic2_window_t2_ParamLimits

0xe56f,	// (0x0005742c) popup_grid_graphic2_window_t2

0x0001,

0xfd9d,	// (0x00058c5a) popup_grid_graphic2_window_t_ParamLimits

0xfd9d,	// (0x00058c5a) popup_grid_graphic2_window_t

0x9d83,	// (0x00052c40) bg_button_pane_cp05_ParamLimits

0xe6fd,	// (0x000575ba) cell_graphic2_control_pane_g1_ParamLimits

0xe7eb,	// (0x000576a8) cell_graphic2_catg_pane_ParamLimits

0xe7eb,	// (0x000576a8) cell_graphic2_catg_pane

0x9684,	// (0x00052541) bg_button_pane_cp12

0xe7fd,	// (0x000576ba) cell_graphic2_catg_pane_g1

0x6b26,	// (0x0004f9e3) cell_tb_ext_pane_t1_ParamLimits

0x1ce7,	// (0x0004aba4) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1ce7,	// (0x0004aba4) vkb2_top_cell_right_narrow_pane

0x1cff,	// (0x0004abbc) vkb2_top_cell_right_wide_pane_ParamLimits

0x1cff,	// (0x0004abbc) vkb2_top_cell_right_wide_pane

0x13de,	// (0x0004a29b) bg_vkb2_func_pane_ParamLimits

0x13de,	// (0x0004a29b) bg_vkb2_func_pane

0x1d70,	// (0x0004ac2d) vkb2_top_cell_left_pane_g1_ParamLimits

0x13de,	// (0x0004a29b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x13de,	// (0x0004a29b) bg_vkb2_fuc_pane_cp03

0x1dce,	// (0x0004ac8b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2ccc,	// (0x0004bb89) bg_vkb2_func_pane_g1

0x2cd4,	// (0x0004bb91) bg_vkb2_func_pane_g2

0x2ce4,	// (0x0004bba1) bg_vkb2_func_pane_g3

0x2cdc,	// (0x0004bb99) bg_vkb2_func_pane_g4

0x2cec,	// (0x0004bba9) bg_vkb2_func_pane_g5

0x2cf4,	// (0x0004bbb1) bg_vkb2_func_pane_g6

0x2cfc,	// (0x0004bbb9) bg_vkb2_func_pane_g7

0x2d04,	// (0x0004bbc1) bg_vkb2_func_pane_g8

0x2cc4,	// (0x0004bb81) bg_vkb2_func_pane_g9

0x0008,

0xfdef,	// (0x00058cac) bg_vkb2_func_pane_g

0x13de,	// (0x0004a29b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x13de,	// (0x0004a29b) bg_vkb2_fuc_pane_cp01

0x1d70,	// (0x0004ac2d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1d70,	// (0x0004ac2d) vkb2_top_cell_right_wide_pane_g1

0x13de,	// (0x0004a29b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x13de,	// (0x0004a29b) bg_vkb2_fuc_pane_cp02

0x1dce,	// (0x0004ac8b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1dce,	// (0x0004ac8b) vkb2_top_cell_right_narrow_pane_g1

0xd8d4,	// (0x00056791) aid_touch_area_decrease_ParamLimits

0xd8d4,	// (0x00056791) aid_touch_area_decrease

0xd90a,	// (0x000567c7) aid_touch_area_increase_ParamLimits

0xd90a,	// (0x000567c7) aid_touch_area_increase

0xd932,	// (0x000567ef) aid_touch_area_mute_ParamLimits

0xd932,	// (0x000567ef) aid_touch_area_mute

0xd962,	// (0x0005681f) aid_touch_area_slider_ParamLimits

0xd962,	// (0x0005681f) aid_touch_area_slider

0xd9a2,	// (0x0005685f) popup_slider_window_g4_ParamLimits

0xd9a2,	// (0x0005685f) popup_slider_window_g4

0xd9ca,	// (0x00056887) popup_slider_window_g5_ParamLimits

0xd9ca,	// (0x00056887) popup_slider_window_g5

0xd9fe,	// (0x000568bb) popup_slider_window_g6_ParamLimits

0xd9fe,	// (0x000568bb) popup_slider_window_g6

0x6902,	// (0x0004f7bf) popup_slider_window_t2_ParamLimits

0x6902,	// (0x0004f7bf) popup_slider_window_t2

0x0001,

0xfceb,	// (0x00058ba8) popup_slider_window_t_ParamLimits

0xfceb,	// (0x00058ba8) popup_slider_window_t

0xda1a,	// (0x000568d7) slider_pane_ParamLimits

0xda1a,	// (0x000568d7) slider_pane

0x7648,	// (0x00050505) slider_pane_g1_ParamLimits

0x7648,	// (0x00050505) slider_pane_g1

0x765c,	// (0x00050519) slider_pane_g2_ParamLimits

0x765c,	// (0x00050519) slider_pane_g2

0x7672,	// (0x0005052f) slider_pane_g3_ParamLimits

0x7672,	// (0x0005052f) slider_pane_g3

0x0003,

0xfe02,	// (0x00058cbf) slider_pane_g_ParamLimits

0xfe02,	// (0x00058cbf) slider_pane_g

0xb56b,	// (0x00054428) popup_tb_float_extension_window_ParamLimits

0xb56b,	// (0x00054428) popup_tb_float_extension_window

0x769e,	// (0x0005055b) aid_size_cell_tb_float_ext

0x9684,	// (0x00052541) bg_popup_sub_window_cp28

0xe806,	// (0x000576c3) grid_tb_float_ext_pane

0xe810,	// (0x000576cd) cell_tb_float_ext_pane_ParamLimits

0xe810,	// (0x000576cd) cell_tb_float_ext_pane

0xe82a,	// (0x000576e7) cell_tb_float_ext_pane_g1

0xe833,	// (0x000576f0) grid_highlight_pane_cp12

0xb864,	// (0x00054721) cell_last_hwr_side_pane_ParamLimits

0xb864,	// (0x00054721) cell_last_hwr_side_pane

0x525c,	// (0x0004e119) cell_last_hwr_side_pane_g1

0x76e0,	// (0x0005059d) cell_last_hwr_side_pane_g2

0x0001,

0xfe0b,	// (0x00058cc8) cell_last_hwr_side_pane_g

0xbccd,	// (0x00054b8a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbccd,	// (0x00054b8a) vkb2_area_bottom_space_btn_pane

0x54cc,	// (0x0004e389) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x717e,	// (0x0005003b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1f10,	// (0x0004adcd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1f2f,	// (0x0004adec) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1f2f,	// (0x0004adec) vkb2_area_bottom_space_btn_pane_g1

0x1f69,	// (0x0004ae26) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1f69,	// (0x0004ae26) vkb2_area_bottom_space_btn_pane_g2

0x1f9f,	// (0x0004ae5c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1f9f,	// (0x0004ae5c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe10,	// (0x00058ccd) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe10,	// (0x00058ccd) vkb2_area_bottom_space_btn_pane_g

0x1493,	// (0x0004a350) cel_fep_hwr_func_pane_ParamLimits

0x1493,	// (0x0004a350) cel_fep_hwr_func_pane

0xb839,	// (0x000546f6) cell_hwr_side_button_pane_ParamLimits

0xb839,	// (0x000546f6) cell_hwr_side_button_pane

0xdbb3,	// (0x00056a70) aid_area_touch_clock_ParamLimits

0x9d83,	// (0x00052c40) bg_uniindi_top_pane_ParamLimits

0xdbc5,	// (0x00056a82) uniindi_top_pane_g1_ParamLimits

0xdbdb,	// (0x00056a98) uniindi_top_pane_g2_ParamLimits

0xdbe7,	// (0x00056aa4) uniindi_top_pane_g3_ParamLimits

0x6ba0,	// (0x0004fa5d) uniindi_top_pane_g4_ParamLimits

0xfd23,	// (0x00058be0) uniindi_top_pane_g_ParamLimits

0xdbf8,	// (0x00056ab5) uniindi_top_pane_t1_ParamLimits

0x9d83,	// (0x00052c40) bg_vkb2_func_pane_cp01_ParamLimits

0x9d83,	// (0x00052c40) bg_vkb2_func_pane_cp01

0x76e9,	// (0x000505a6) cel_fep_hwr_func_pane_g1_ParamLimits

0x76e9,	// (0x000505a6) cel_fep_hwr_func_pane_g1

0x9d83,	// (0x00052c40) bg_vkb2_func_pane_cp02_ParamLimits

0x9d83,	// (0x00052c40) bg_vkb2_func_pane_cp02

0x76e9,	// (0x000505a6) cell_hwr_side_button_pane_g1_ParamLimits

0x76e9,	// (0x000505a6) cell_hwr_side_button_pane_g1

0x2b48,	// (0x0004ba05) status_pane_g4_ParamLimits

0x2b48,	// (0x0004ba05) status_pane_g4

0x2b62,	// (0x0004ba1f) status_pane_t1

0x4f9d,	// (0x0004de5a) form2_midp_gauge_slider_cont_pane

0x4fa5,	// (0x0004de62) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd072,	// (0x00055f2f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd084,	// (0x00055f41) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x000589b3) form2_midp_gauge_slider_pane_t_ParamLimits

0x4fdb,	// (0x0004de98) form2_midp_slider_pane_ParamLimits

0x1905,	// (0x0004a7c2) aid_size_cell_func_vkb2_ParamLimits

0x1905,	// (0x0004a7c2) aid_size_cell_func_vkb2

0x768a,	// (0x00050547) slider_pane_g4_ParamLimits

0x768a,	// (0x00050547) slider_pane_g4

0xbd2e,	// (0x00054beb) form2_midp_gauge_slider_pane_t2_cp01

0xbd3c,	// (0x00054bf9) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbd3c,	// (0x00054bf9) form2_midp_gauge_slider_pane_t3_cp01

0x2014,	// (0x0004aed1) form2_midp_slider_pane_cp01

0x9684,	// (0x00052541) navi_smil_pane

0x7722,	// (0x000505df) navi_smil_pane_g1

0x772a,	// (0x000505e7) navi_smil_pane_t1

0x76f7,	// (0x000505b4) form2_midp_slider_pane_g1

0x7700,	// (0x000505bd) form2_midp_slider_pane_g2

0x7708,	// (0x000505c5) form2_midp_slider_pane_g3

0x76f7,	// (0x000505b4) form2_midp_slider_pane_g4

0xe83c,	// (0x000576f9) form2_midp_slider_pane_g5

0x0004,

0xfe19,	// (0x00058cd6) form2_midp_slider_pane_g

0x1fd9,	// (0x0004ae96) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1fd9,	// (0x0004ae96) vkb2_area_bottom_space_btn_pane_g4

0xc23c,	// (0x000550f9) lc0_navi_pane_ParamLimits

0xc23c,	// (0x000550f9) lc0_navi_pane

0xc2a6,	// (0x00055163) lc0_stat_indi_pane_ParamLimits

0xc2a6,	// (0x00055163) lc0_stat_indi_pane

0xc2bb,	// (0x00055178) ls0_title_pane_ParamLimits

0xc2bb,	// (0x00055178) ls0_title_pane

0xa349,	// (0x00053206) bg_popup_sub_pane_cp14_ParamLimits

0xdb9a,	// (0x00056a57) list_uniindi_pane_ParamLimits

0xdba6,	// (0x00056a63) uniindi_top_pane_ParamLimits

0x6be9,	// (0x0004faa6) list_single_uniindi_pane_g1_ParamLimits

0x6bfc,	// (0x0004fab9) list_single_uniindi_pane_t1_ParamLimits

0xbd59,	// (0x00054c16) lc0_stat_clock_pane_ParamLimits

0xbd59,	// (0x00054c16) lc0_stat_clock_pane

0xe847,	// (0x00057704) lc0_stat_indi_pane_g1_ParamLimits

0xe847,	// (0x00057704) lc0_stat_indi_pane_g1

0xe854,	// (0x00057711) lc0_stat_indi_pane_g2_ParamLimits

0xe854,	// (0x00057711) lc0_stat_indi_pane_g2

0x0001,

0xfe24,	// (0x00058ce1) lc0_stat_indi_pane_g_ParamLimits

0xfe24,	// (0x00058ce1) lc0_stat_indi_pane_g

0xbd69,	// (0x00054c26) lc0_uni_indicator_pane_ParamLimits

0xbd69,	// (0x00054c26) lc0_uni_indicator_pane

0xe861,	// (0x0005771e) ls0_title_pane_g1_ParamLimits

0xe861,	// (0x0005771e) ls0_title_pane_g1

0xe875,	// (0x00057732) ls0_title_pane_t1_ParamLimits

0xe875,	// (0x00057732) ls0_title_pane_t1

0xbd79,	// (0x00054c36) lc0_uni_indicator_pane_g1_ParamLimits

0xbd79,	// (0x00054c36) lc0_uni_indicator_pane_g1

0x779c,	// (0x00050659) lc0_stat_clock_pane_t1

0x9684,	// (0x00052541) main_ai5_pane

0x77aa,	// (0x00050667) ai5_sk_pane_ParamLimits

0x77aa,	// (0x00050667) ai5_sk_pane

0xe8a3,	// (0x00057760) cell_ai5_widget_pane_ParamLimits

0xe8a3,	// (0x00057760) cell_ai5_widget_pane

0x7869,	// (0x00050726) aid_size_cell_widget_grid

0x7877,	// (0x00050734) bg_ai5_widget_pane_ParamLimits

0x7877,	// (0x00050734) bg_ai5_widget_pane

0x78eb,	// (0x000507a8) cell_ai5_widget_pane_g2

0x78fb,	// (0x000507b8) cell_ai5_widget_pane_g3

0x7912,	// (0x000507cf) cell_ai5_widget_pane_g4

0x791e,	// (0x000507db) cell_ai5_widget_pane_g5

0x792a,	// (0x000507e7) cell_ai5_widget_pane_g6

0x7936,	// (0x000507f3) cell_ai5_widget_pane_g7

0x797e,	// (0x0005083b) cell_ai5_widget_pane_t1_ParamLimits

0x797e,	// (0x0005083b) cell_ai5_widget_pane_t1

0x799b,	// (0x00050858) cell_ai5_widget_pane_t2_ParamLimits

0x799b,	// (0x00050858) cell_ai5_widget_pane_t2

0x79b3,	// (0x00050870) cell_ai5_widget_pane_t3_ParamLimits

0x79b3,	// (0x00050870) cell_ai5_widget_pane_t3

0x79cb,	// (0x00050888) cell_ai5_widget_pane_t4_ParamLimits

0x79cb,	// (0x00050888) cell_ai5_widget_pane_t4

0x79e8,	// (0x000508a5) cell_ai5_widget_pane_t5_ParamLimits

0x79e8,	// (0x000508a5) cell_ai5_widget_pane_t5

0x7a07,	// (0x000508c4) cell_ai5_widget_pane_t6_ParamLimits

0x7a07,	// (0x000508c4) cell_ai5_widget_pane_t6

0x7a19,	// (0x000508d6) cell_ai5_widget_pane_t7_ParamLimits

0x7a19,	// (0x000508d6) cell_ai5_widget_pane_t7

0x7a32,	// (0x000508ef) cell_ai5_widget_pane_t8_ParamLimits

0x7a32,	// (0x000508ef) cell_ai5_widget_pane_t8

0x0009,

0xfe3e,	// (0x00058cfb) cell_ai5_widget_pane_t_ParamLimits

0xfe3e,	// (0x00058cfb) cell_ai5_widget_pane_t

0x7a86,	// (0x00050943) grid_ai5_widget_pane

0xa349,	// (0x00053206) highlight_cell_ai5_widget_pane_ParamLimits

0xa349,	// (0x00053206) highlight_cell_ai5_widget_pane

0xe909,	// (0x000577c6) ai5_sk_left_pane

0xe913,	// (0x000577d0) ai5_sk_middle_pane

0xe91d,	// (0x000577da) ai5_sk_right_pane

0x7ab2,	// (0x0005096f) bg_ai5_widget_pane_g1_ParamLimits

0x7ab2,	// (0x0005096f) bg_ai5_widget_pane_g1

0x7abe,	// (0x0005097b) bg_ai5_widget_pane_g2_ParamLimits

0x7abe,	// (0x0005097b) bg_ai5_widget_pane_g2

0x7aca,	// (0x00050987) bg_ai5_widget_pane_g3_ParamLimits

0x7aca,	// (0x00050987) bg_ai5_widget_pane_g3

0x7ad6,	// (0x00050993) bg_ai5_widget_pane_g4_ParamLimits

0x7ad6,	// (0x00050993) bg_ai5_widget_pane_g4

0x7ae2,	// (0x0005099f) bg_ai5_widget_pane_g5_ParamLimits

0x7ae2,	// (0x0005099f) bg_ai5_widget_pane_g5

0x7aee,	// (0x000509ab) bg_ai5_widget_pane_g6_ParamLimits

0x7aee,	// (0x000509ab) bg_ai5_widget_pane_g6

0x7afa,	// (0x000509b7) bg_ai5_widget_pane_g7_ParamLimits

0x7afa,	// (0x000509b7) bg_ai5_widget_pane_g7

0x7b06,	// (0x000509c3) bg_ai5_widget_pane_g8_ParamLimits

0x7b06,	// (0x000509c3) bg_ai5_widget_pane_g8

0x7b12,	// (0x000509cf) bg_ai5_widget_pane_g9_ParamLimits

0x7b12,	// (0x000509cf) bg_ai5_widget_pane_g9

0x0008,

0xfe53,	// (0x00058d10) bg_ai5_widget_pane_g_ParamLimits

0xfe53,	// (0x00058d10) bg_ai5_widget_pane_g

0x7b44,	// (0x00050a01) cell_shortcut_ai5_widget_pane_ParamLimits

0x7b44,	// (0x00050a01) cell_shortcut_ai5_widget_pane

0x2471,	// (0x0004b32e) bg_cell_shortcut_ai5_widget_pane

0x7b55,	// (0x00050a12) cell_grid_ai5_widget_pane_g1

0x2471,	// (0x0004b32e) highlight_cell_shortcut_ai5_widget_pane

0x2cd4,	// (0x0004bb91) ai5_sk_left_pane_g1

0x7b5e,	// (0x00050a1b) ai5_sk_left_pane_g2

0x7b66,	// (0x00050a23) ai5_sk_left_pane_g3

0x7b6e,	// (0x00050a2b) ai5_sk_left_pane_g4

0x0003,

0xfe66,	// (0x00058d23) ai5_sk_left_pane_g

0x7b76,	// (0x00050a33) ai5_sk_left_pane_t1

0x2ccc,	// (0x0004bb89) ai5_sk_right_pane_g1

0x7b84,	// (0x00050a41) ai5_sk_right_pane_g2

0x7b8c,	// (0x00050a49) ai5_sk_right_pane_g3

0x7b94,	// (0x00050a51) ai5_sk_right_pane_g4

0x0003,

0xfe6f,	// (0x00058d2c) ai5_sk_right_pane_g

0x7b9c,	// (0x00050a59) ai5_sk_right_pane_t1

0x2ccc,	// (0x0004bb89) ai5_sk_middle_pane_g1

0x2cd4,	// (0x0004bb91) ai5_sk_middle_pane_g2

0x2cec,	// (0x0004bba9) ai5_sk_middle_pane_g3

0x7b8c,	// (0x00050a49) ai5_sk_middle_pane_g4

0x7b66,	// (0x00050a23) ai5_sk_middle_pane_g5

0x7baa,	// (0x00050a67) ai5_sk_middle_pane_g6

0xe927,	// (0x000577e4) ai5_sk_middle_pane_g7

0x0006,

0xfe78,	// (0x00058d35) ai5_sk_middle_pane_g

0xc128,	// (0x00054fe5) aid_touch_area_size_lc0_ParamLimits

0xc128,	// (0x00054fe5) aid_touch_area_size_lc0

0x161e,	// (0x0004a4db) cell_hwr_candidate_pane_t1_ParamLimits

0x2819,	// (0x0004b6d6) aid_touch_navi_pane

0xc3b4,	// (0x00055271) status_dt_navi_pane_ParamLimits

0xc3b4,	// (0x00055271) status_dt_navi_pane

0xc3cc,	// (0x00055289) status_dt_sta_pane_ParamLimits

0xc3cc,	// (0x00055289) status_dt_sta_pane

0xe92f,	// (0x000577ec) dt_sta_controll_pane

0xe93c,	// (0x000577f9) dt_sta_indi_pane

0xe949,	// (0x00057806) dt_sta_title_pane

0x9d83,	// (0x00052c40) bg_dt_sta_indi_pane_ParamLimits

0x9d83,	// (0x00052c40) bg_dt_sta_indi_pane

0xe95b,	// (0x00057818) dt_sta_battery_pane

0xe963,	// (0x00057820) dt_sta_indi_pane_g1

0x7bfc,	// (0x00050ab9) dt_sta_indi_pane_g2

0x7c05,	// (0x00050ac2) dt_sta_indi_pane_g3

0x0002,

0xfe87,	// (0x00058d44) dt_sta_indi_pane_g

0x7c0e,	// (0x00050acb) dt_sta_signal_pane

0xa349,	// (0x00053206) bg_dt_sta_title_pane_ParamLimits

0xa349,	// (0x00053206) bg_dt_sta_title_pane

0x3afa,	// (0x0004c9b7) dt_sta_title_pane_g1

0xe96c,	// (0x00057829) dt_sta_title_pane_t1_ParamLimits

0xe96c,	// (0x00057829) dt_sta_title_pane_t1

0x9684,	// (0x00052541) bg_dt_sta_control_pane

0xe981,	// (0x0005783e) dt_sta_controll_pane_g1

0xe98a,	// (0x00057847) bg_dt_sta_title_pane_g1

0xe993,	// (0x00057850) bg_dt_sta_title_pane_g2

0xe99c,	// (0x00057859) bg_dt_sta_title_pane_g3

0x0002,

0xfe8e,	// (0x00058d4b) bg_dt_sta_title_pane_g

0x525c,	// (0x0004e119) bg_dt_sta_indi_pane_g1

0x7c50,	// (0x00050b0d) dt_sta_signal_pane_g1

0x7c58,	// (0x00050b15) dt_sta_signal_pane_g2

0x0001,

0xfe95,	// (0x00058d52) dt_sta_signal_pane_g

0x7c60,	// (0x00050b1d) dt_sta_battery_pane_g1

0x7c69,	// (0x00050b26) dt_sta_battery_pane_t1

0x525c,	// (0x0004e119) bg_dt_sta_control_pane_g1

0xc0a5,	// (0x00054f62) fep_china_uni_eep_pane

0xc0ad,	// (0x00054f6a) fep_china_uni_entry_pane_ParamLimits

0xc0bd,	// (0x00054f7a) popup_fep_china_uni_window_g1_ParamLimits

0xc0cd,	// (0x00054f8a) popup_fep_china_uni_window_g2_ParamLimits

0xc0cd,	// (0x00054f8a) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x000585d5) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x000585d5) popup_fep_china_uni_window_g

0x7c78,	// (0x00050b35) fep_china_uni_eep_pane_g1

0x7c80,	// (0x00050b3d) fep_china_uni_eep_pane_t1

0x7719,	// (0x000505d6) aid_touch_area_size_smil_player

0x296f,	// (0x0004b82c) lc0_clock_pane

0x2b56,	// (0x0004ba13) status_pane_g5_ParamLimits

0x2b56,	// (0x0004ba13) status_pane_g5

0xb0a1,	// (0x00053f5e) popup_keymap_window

0x2b14,	// (0x0004b9d1) status_icon_pane

0x78fb,	// (0x000507b8) cell_ai5_widget_pane_g3_ParamLimits

0x7912,	// (0x000507cf) cell_ai5_widget_pane_g4_ParamLimits

0x791e,	// (0x000507db) cell_ai5_widget_pane_g5_ParamLimits

0x7942,	// (0x000507ff) cell_ai5_widget_pane_g8_ParamLimits

0x7942,	// (0x000507ff) cell_ai5_widget_pane_g8

0x7956,	// (0x00050813) cell_ai5_widget_pane_g9_ParamLimits

0x7956,	// (0x00050813) cell_ai5_widget_pane_g9

0x796a,	// (0x00050827) cell_ai5_widget_pane_g10_ParamLimits

0x796a,	// (0x00050827) cell_ai5_widget_pane_g10

0x7c8f,	// (0x00050b4c) status_icon_pane_g1

0x9684,	// (0x00052541) bg_popup_sub_pane_cp13

0x7c97,	// (0x00050b54) popup_keymap_window_t1

0xad51,	// (0x00053c0e) control_pane_g6_ParamLimits

0xad51,	// (0x00053c0e) control_pane_g6

0xad5e,	// (0x00053c1b) control_pane_g7_ParamLimits

0xad5e,	// (0x00053c1b) control_pane_g7

0xad6b,	// (0x00053c28) control_pane_g8_ParamLimits

0xad6b,	// (0x00053c28) control_pane_g8

0xe92f,	// (0x000577ec) dt_sta_controll_pane_ParamLimits

0xe93c,	// (0x000577f9) dt_sta_indi_pane_ParamLimits

0xe949,	// (0x00057806) dt_sta_title_pane_ParamLimits

0xa226,	// (0x000530e3) aid_size_touch_scroll_bar_cale

0x979c,	// (0x00052659) popup_discreet_window_ParamLimits

0x979c,	// (0x00052659) popup_discreet_window

0x97ee,	// (0x000526ab) popup_sk_window

0x333e,	// (0x0004c1fb) bg_popup_sub_pane_cp28_ParamLimits

0x333e,	// (0x0004c1fb) bg_popup_sub_pane_cp28

0x7ca5,	// (0x00050b62) popup_discreet_window_g1_ParamLimits

0x7ca5,	// (0x00050b62) popup_discreet_window_g1

0xe9a5,	// (0x00057862) popup_discreet_window_t1_ParamLimits

0xe9a5,	// (0x00057862) popup_discreet_window_t1

0x7ce3,	// (0x00050ba0) popup_discreet_window_t2_ParamLimits

0x7ce3,	// (0x00050ba0) popup_discreet_window_t2

0x0002,

0xfe9a,	// (0x00058d57) popup_discreet_window_t_ParamLimits

0xfe9a,	// (0x00058d57) popup_discreet_window_t

0x204b,	// (0x0004af08) popup_sk_window_g1

0x2055,	// (0x0004af12) popup_sk_window_g2

0x0001,

0xfea1,	// (0x00058d5e) popup_sk_window_g

0xbda4,	// (0x00054c61) popup_sk_window_t1

0xbdb2,	// (0x00054c6f) popup_sk_window_t1_copy1

0x78eb,	// (0x000507a8) cell_ai5_widget_pane_g2_ParamLimits

0x7a44,	// (0x00050901) cell_ai5_widget_pane_t9_ParamLimits

0x7a44,	// (0x00050901) cell_ai5_widget_pane_t9

0x9684,	// (0x00052541) main_fep_fshwr2_pane

0xbdc0,	// (0x00054c7d) aid_fshwr2_btn_pane

0xbdd2,	// (0x00054c8f) aid_fshwr2_syb_pane

0xbde4,	// (0x00054ca1) aid_fshwr2_txt_pane

0xbdf3,	// (0x00054cb0) fshwr2_func_candi_pane

0xbe12,	// (0x00054ccf) fshwr2_hwr_syb_pane

0xbe2d,	// (0x00054cea) fshwr2_icf_pane

0x9684,	// (0x00052541) fshwr2_icf_bg_pane

0x20fa,	// (0x0004afb7) fshwr2_icf_pane_t1_ParamLimits

0x20fa,	// (0x0004afb7) fshwr2_icf_pane_t1

0xc022,	// (0x00054edf) fshwr2_func_candi_pane_g1

0xe9c3,	// (0x00057880) fshwr2_func_candi_row_pane_ParamLimits

0xe9c3,	// (0x00057880) fshwr2_func_candi_row_pane

0xbe59,	// (0x00054d16) cell_fshwr2_syb_pane_ParamLimits

0xbe59,	// (0x00054d16) cell_fshwr2_syb_pane

0x54cc,	// (0x0004e389) fshwr2_hwr_syb_pane_g1_ParamLimits

0x54cc,	// (0x0004e389) fshwr2_hwr_syb_pane_g1

0x9684,	// (0x00052541) bg_popup_call_pane_cp01

0xbe6f,	// (0x00054d2c) fshwr2_func_candi_cell_pane_ParamLimits

0xbe6f,	// (0x00054d2c) fshwr2_func_candi_cell_pane

0xe9e6,	// (0x000578a3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe9e6,	// (0x000578a3) fshwr2_func_candi_cell_bg_pane

0xbeba,	// (0x00054d77) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbeba,	// (0x00054d77) fshwr2_func_candi_cell_pane_g1

0xbef1,	// (0x00054dae) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbef1,	// (0x00054dae) fshwr2_func_candi_cell_pane_t1

0x9684,	// (0x00052541) bg_button_pane_cp08

0x7d45,	// (0x00050c02) cell_fshwr2_syb_bg_pane

0xbf0c,	// (0x00054dc9) cell_fshwr2_syb_bg_pane_g1

0xbf14,	// (0x00054dd1) cell_fshwr2_syb_bg_pane_t1

0xa349,	// (0x00053206) main_tmo_pane

0xca8f,	// (0x0005594c) uni_indicator_pane_g1_ParamLimits

0xcaa5,	// (0x00055962) uni_indicator_pane_g2_ParamLimits

0xcabb,	// (0x00055978) uni_indicator_pane_g3_ParamLimits

0x3e67,	// (0x0004cd24) uni_indicator_pane_g4_ParamLimits

0x3e67,	// (0x0004cd24) uni_indicator_pane_g4

0x3e7b,	// (0x0004cd38) uni_indicator_pane_g5_ParamLimits

0x3e7b,	// (0x0004cd38) uni_indicator_pane_g5

0x3e7b,	// (0x0004cd38) uni_indicator_pane_g6_ParamLimits

0x3e7b,	// (0x0004cd38) uni_indicator_pane_g6

0xf910,	// (0x000587cd) uni_indicator_pane_g_ParamLimits

0xd8b6,	// (0x00056773) popup_tmo_note_window_ParamLimits

0xd8b6,	// (0x00056773) popup_tmo_note_window

0xa349,	// (0x00053206) fshwr2_bg_pane

0xbee2,	// (0x00054d9f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbee2,	// (0x00054d9f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea6,	// (0x00058d63) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea6,	// (0x00058d63) fshwr2_func_candi_cell_pane_g

0x525c,	// (0x0004e119) bg_popup_window_pane_cp01

0x21c6,	// (0x0004b083) bg_popup_window_pane_g1_cp01

0x7d4d,	// (0x00050c0a) bg_popup_window_pane_cp22_ParamLimits

0x7d4d,	// (0x00050c0a) bg_popup_window_pane_cp22

0xe9f2,	// (0x000578af) listscroll_tmo_link_pane_ParamLimits

0xe9f2,	// (0x000578af) listscroll_tmo_link_pane

0x7d9b,	// (0x00050c58) popup_tmo_note_window_g1_ParamLimits

0x7d9b,	// (0x00050c58) popup_tmo_note_window_g1

0xea32,	// (0x000578ef) tmo_note_info_pane_ParamLimits

0xea32,	// (0x000578ef) tmo_note_info_pane

0xea4c,	// (0x00057909) list_tmo_note_info_pane_g1_ParamLimits

0xea4c,	// (0x00057909) list_tmo_note_info_pane_g1

0x7dd9,	// (0x00050c96) list_tmo_note_info_pane_g2_ParamLimits

0x7dd9,	// (0x00050c96) list_tmo_note_info_pane_g2

0x0001,

0xfeab,	// (0x00058d68) list_tmo_note_info_pane_g_ParamLimits

0xfeab,	// (0x00058d68) list_tmo_note_info_pane_g

0x7df5,	// (0x00050cb2) list_tmo_note_info_text_pane_ParamLimits

0x7df5,	// (0x00050cb2) list_tmo_note_info_text_pane

0x7e76,	// (0x00050d33) list_tmo_link_pane

0x7e83,	// (0x00050d40) scroll_pane_cp20

0x7e90,	// (0x00050d4d) list_single_tmo_link_pane_ParamLimits

0x7e90,	// (0x00050d4d) list_single_tmo_link_pane

0x7ea0,	// (0x00050d5d) list_single_tmo_link_pane_t1

0x7eae,	// (0x00050d6b) list_tmo_note_info_text_pane_t1_ParamLimits

0x7eae,	// (0x00050d6b) list_tmo_note_info_text_pane_t1

0xa3f4,	// (0x000532b1) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa3f4,	// (0x000532b1) aid_size_touch_scroll_bar_cp01

0x9300,	// (0x000521bd) aid_size_touch_slider_marker

0x97de,	// (0x0005269b) popup_settings_window_ParamLimits

0x97de,	// (0x0005269b) popup_settings_window

0xe3fb,	// (0x000572b8) popup_candi_list_indi_window

0x2819,	// (0x0004b6d6) aid_touch_navi_pane_ParamLimits

0x185e,	// (0x0004a71b) rs_clock_indi_pane

0x1867,	// (0x0004a724) sctrl_sk_bottom_pane_ParamLimits

0x1878,	// (0x0004a735) sctrl_sk_top_pane_ParamLimits

0xba0a,	// (0x000548c7) popup_fep_tooltip_window

0x7869,	// (0x00050726) aid_size_cell_widget_grid_ParamLimits

0x78d6,	// (0x00050793) cell_ai5_widget_pane_g1_ParamLimits

0x78d6,	// (0x00050793) cell_ai5_widget_pane_g1

0x792a,	// (0x000507e7) cell_ai5_widget_pane_g6_ParamLimits

0x7936,	// (0x000507f3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe29,	// (0x00058ce6) cell_ai5_widget_pane_g_ParamLimits

0xfe29,	// (0x00058ce6) cell_ai5_widget_pane_g

0x7a68,	// (0x00050925) cell_ai5_widget_pane_t10_ParamLimits

0x7a68,	// (0x00050925) cell_ai5_widget_pane_t10

0x7a86,	// (0x00050943) grid_ai5_widget_pane_ParamLimits

0x7b1e,	// (0x000509db) cell_contacts_ai5_widget_pane_ParamLimits

0x7b1e,	// (0x000509db) cell_contacts_ai5_widget_pane

0x7cf8,	// (0x00050bb5) popup_discreet_window_t3_ParamLimits

0x7cf8,	// (0x00050bb5) popup_discreet_window_t3

0xbe45,	// (0x00054d02) popup_fshwr2_char_preview_window_ParamLimits

0xbe45,	// (0x00054d02) popup_fshwr2_char_preview_window

0xea63,	// (0x00057920) tmo_note_info_pane_t1

0xea78,	// (0x00057935) tmo_note_info_pane_t2

0xea8f,	// (0x0005794c) tmo_note_info_pane_t3

0x7e52,	// (0x00050d0f) tmo_note_info_pane_t4

0x7e64,	// (0x00050d21) tmo_note_info_pane_t5

0x0004,

0xfeb0,	// (0x00058d6d) tmo_note_info_pane_t

0x7e76,	// (0x00050d33) list_tmo_link_pane_ParamLimits

0x7e83,	// (0x00050d40) scroll_pane_cp20_ParamLimits

0x9684,	// (0x00052541) bg_popup_fep_char_preview_window_cp01

0xeaa4,	// (0x00057961) popup_fshwr2_char_preview_window_t1

0x7ed5,	// (0x00050d92) popup_candi_list_indi_window_g1

0x7ede,	// (0x00050d9b) bg_cell_contacts_ai5_widget_pane

0x7eea,	// (0x00050da7) cell_contacts_ai5_widget_pane_g1

0x5963,	// (0x0004e820) cell_contacts_ai5_widget_pane_g2

0x7eff,	// (0x00050dbc) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebb,	// (0x00058d78) cell_contacts_ai5_widget_pane_g

0x7f0b,	// (0x00050dc8) cell_contacts_ai5_widget_pane_t1

0xa349,	// (0x00053206) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7f82,	// (0x00050e3f) settings_container_pane

0x2471,	// (0x0004b32e) listscroll_set_pane_copy1

0x4959,	// (0x0004d816) scroll_pane_cp121_copy1

0x30f7,	// (0x0004bfb4) set_content_pane_copy1

0xeb17,	// (0x000579d4) aid_height_set_list_copy1_ParamLimits

0xeb17,	// (0x000579d4) aid_height_set_list_copy1

0x4073,	// (0x0004cf30) aid_size_parent_copy1_ParamLimits

0x4073,	// (0x0004cf30) aid_size_parent_copy1

0xeb23,	// (0x000579e0) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeb23,	// (0x000579e0) button_value_adjust_pane_cp6_copy1

0x27b7,	// (0x0004b674) list_highlight_pane_cp2_copy1_ParamLimits

0x27b7,	// (0x0004b674) list_highlight_pane_cp2_copy1

0xeb37,	// (0x000579f4) list_set_pane_copy1_ParamLimits

0xeb37,	// (0x000579f4) list_set_pane_copy1

0xeab2,	// (0x0005796f) main_pane_set_t1_copy1_ParamLimits

0xeab2,	// (0x0005796f) main_pane_set_t1_copy1

0xeaec,	// (0x000579a9) main_pane_set_t2_copy1_ParamLimits

0xeaec,	// (0x000579a9) main_pane_set_t2_copy1

0xebe4,	// (0x00057aa1) main_pane_set_t3_copy1

0xebf2,	// (0x00057aaf) main_pane_set_t4_copy1

0xeb0b,	// (0x000579c8) set_content_pane_g1_copy1_ParamLimits

0xeb0b,	// (0x000579c8) set_content_pane_g1_copy1

0xec00,	// (0x00057abd) setting_code_pane_copy1

0x807f,	// (0x00050f3c) setting_slider_graphic_pane_copy1

0x807f,	// (0x00050f3c) setting_slider_pane_copy1

0x807f,	// (0x00050f3c) setting_text_pane_copy1

0x807f,	// (0x00050f3c) setting_volume_pane_copy1

0xec00,	// (0x00057abd) settings_code_pane_cp2_copy1

0xec08,	// (0x00057ac5) settings_code_pane_cp_copy1_ParamLimits

0xec08,	// (0x00057ac5) settings_code_pane_cp_copy1

0xbf23,	// (0x00054de0) volume_set_pane_copy1

0xec1c,	// (0x00057ad9) volume_set_pane_g10_copy1

0xec24,	// (0x00057ae1) volume_set_pane_g1_copy1

0xec2c,	// (0x00057ae9) volume_set_pane_g2_copy1

0xec34,	// (0x00057af1) volume_set_pane_g3_copy1

0xec3c,	// (0x00057af9) volume_set_pane_g4_copy1

0xec44,	// (0x00057b01) volume_set_pane_g5_copy1

0xec4c,	// (0x00057b09) volume_set_pane_g6_copy1

0xec54,	// (0x00057b11) volume_set_pane_g7_copy1

0xec5c,	// (0x00057b19) volume_set_pane_g8_copy1

0xec64,	// (0x00057b21) volume_set_pane_g9_copy1

0x9a19,	// (0x000528d6) bg_set_opt_pane_cp_copy1_ParamLimits

0x9a19,	// (0x000528d6) bg_set_opt_pane_cp_copy1

0xbf2b,	// (0x00054de8) setting_slider_pane_t1_copy1_ParamLimits

0xbf2b,	// (0x00054de8) setting_slider_pane_t1_copy1

0xbf49,	// (0x00054e06) setting_slider_pane_t2_copy1_ParamLimits

0xbf49,	// (0x00054e06) setting_slider_pane_t2_copy1

0xbf63,	// (0x00054e20) setting_slider_pane_t3_copy1_ParamLimits

0xbf63,	// (0x00054e20) setting_slider_pane_t3_copy1

0xbf7b,	// (0x00054e38) slider_set_pane_copy1_ParamLimits

0xbf7b,	// (0x00054e38) slider_set_pane_copy1

0xa395,	// (0x00053252) set_opt_bg_pane_g1_copy2

0xa39d,	// (0x0005325a) set_opt_bg_pane_g2_copy2

0x80eb,	// (0x00050fa8) set_opt_bg_pane_g3_copy2

0xa3ad,	// (0x0005326a) set_opt_bg_pane_g4_copy2

0xa3b5,	// (0x00053272) set_opt_bg_pane_g5_copy2

0xa3bd,	// (0x0005327a) set_opt_bg_pane_g6_copy2

0xec6c,	// (0x00057b29) set_opt_bg_pane_g7_copy2

0x80fd,	// (0x00050fba) set_opt_bg_pane_g8_copy2

0x8107,	// (0x00050fc4) set_opt_bg_pane_g9_copy2

0xbf91,	// (0x00054e4e) aid_size_touch_slider_mark_copy1_ParamLimits

0xbf91,	// (0x00054e4e) aid_size_touch_slider_mark_copy1

0xec74,	// (0x00057b31) slider_set_pane_g1_copy1

0x2251,	// (0x0004b10e) slider_set_pane_g2_copy1

0xb760,	// (0x0005461d) slider_set_pane_g3_copy1_ParamLimits

0xb760,	// (0x0005461d) slider_set_pane_g3_copy1

0xb774,	// (0x00054631) slider_set_pane_g4_copy1_ParamLimits

0xb774,	// (0x00054631) slider_set_pane_g4_copy1

0xb78c,	// (0x00054649) slider_set_pane_g5_copy1_ParamLimits

0xb78c,	// (0x00054649) slider_set_pane_g5_copy1

0xb760,	// (0x0005461d) slider_set_pane_g6_copy1_ParamLimits

0xb760,	// (0x0005461d) slider_set_pane_g6_copy1

0xbfa5,	// (0x00054e62) slider_set_pane_g7_copy1_ParamLimits

0xbfa5,	// (0x00054e62) slider_set_pane_g7_copy1

0x977e,	// (0x0005263b) bg_set_opt_pane_cp2_copy1

0xec7d,	// (0x00057b3a) setting_slider_graphic_pane_g1_copy1

0xec86,	// (0x00057b43) setting_slider_graphic_pane_t1_copy1

0xec96,	// (0x00057b53) setting_slider_graphic_pane_t2_copy1

0xeca6,	// (0x00057b63) slider_set_pane_cp_copy1

0x8153,	// (0x00051010) input_focus_pane_cp1_copy1

0x815c,	// (0x00051019) list_set_text_pane_copy1

0x8164,	// (0x00051021) setting_text_pane_g1_copy1

0xf371,	// (0x0005822e) set_text_pane_t1_copy1

0x8153,	// (0x00051010) input_focus_pane_cp2_copy1

0x8164,	// (0x00051021) setting_code_pane_g1_copy1

0x816d,	// (0x0005102a) setting_code_pane_t1_copy1

0x817b,	// (0x00051038) list_set_graphic_pane_copy1

0x977e,	// (0x0005263b) bg_set_opt_pane_cp4_copy1

0xe384,	// (0x00057241) list_set_graphic_pane_g1_copy1_ParamLimits

0xe384,	// (0x00057241) list_set_graphic_pane_g1_copy1

0x818f,	// (0x0005104c) list_set_graphic_pane_g2_copy1

0xe39c,	// (0x00057259) list_set_graphic_pane_t1_copy1_ParamLimits

0xe39c,	// (0x00057259) list_set_graphic_pane_t1_copy1

0x525c,	// (0x0004e119) rs_clock_indi_pane_g1

0x8197,	// (0x00051054) rs_clock_indi_pane_t1

0x81a5,	// (0x00051062) rs_indi_pane

0x81ad,	// (0x0005106a) rs_indi_pane_g1

0x81b6,	// (0x00051073) rs_indi_pane_g2

0x7ed5,	// (0x00050d92) rs_indi_pane_g3

0x0002,

0xfec2,	// (0x00058d7f) rs_indi_pane_g

0x2471,	// (0x0004b32e) bg_popup_preview_window_pane_cp03

0x81bf,	// (0x0005107c) popup_fep_tooltip_window_t1

0xd55b,	// (0x00056418) popup_note2_window_g2_ParamLimits

0xd55b,	// (0x00056418) popup_note2_window_g2

0x0001,

0xfc62,	// (0x00058b1f) popup_note2_window_g_ParamLimits

0xfc62,	// (0x00058b1f) popup_note2_window_g

0x63d8,	// (0x0004f295) bg_popup_sub_pane_cp11_ParamLimits

0x63e5,	// (0x0004f2a2) cell_ai3_links_pane_g1_ParamLimits

0x63fc,	// (0x0004f2b9) cell_ai3_links_pane_t1

0xf371,	// (0x0005822e) set_text_pane_t1_copy1_ParamLimits

0x05e2,	// (0x0004949f) cell_graphic_popup_pane_cp2_ParamLimits

0x05e2,	// (0x0004949f) cell_graphic_popup_pane_cp2

0xecb6,	// (0x00057b73) cell_graphic_popup_pane_g1_cp2

0xa0a6,	// (0x00052f63) cell_graphic_popup_pane_g2_cp2

0x81d5,	// (0x00051092) cell_graphic_popup_pane_g3_cp2

0xecbe,	// (0x00057b7b) cell_graphic_popup_pane_t2_cp2

0xa0b7,	// (0x00052f74) grid_highlight_pane_cp3_cp2

0xa6bb,	// (0x00053578) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xa349,	// (0x00053206) main_tmo_pane_ParamLimits

0xd8aa,	// (0x00056767) popup_tmo_big_image_note_window

0x78c5,	// (0x00050782) cell_ai5_widget_list_pane

0x78cd,	// (0x0005078a) cell_ai5_widget_lrg_icon_pane

0xea63,	// (0x00057920) tmo_note_info_pane_t1_ParamLimits

0xea78,	// (0x00057935) tmo_note_info_pane_t2_ParamLimits

0xea8f,	// (0x0005794c) tmo_note_info_pane_t3_ParamLimits

0x7e52,	// (0x00050d0f) tmo_note_info_pane_t4_ParamLimits

0x7e64,	// (0x00050d21) tmo_note_info_pane_t5_ParamLimits

0xfeb0,	// (0x00058d6d) tmo_note_info_pane_t_ParamLimits

0x7f82,	// (0x00050e3f) settings_container_pane_ParamLimits

0xecae,	// (0x00057b6b) indicator_popup_pane_cp5

0xecae,	// (0x00057b6b) indicator_popup_pane_cp6

0x817b,	// (0x00051038) list_set_graphic_pane_copy1_ParamLimits

0x9684,	// (0x00052541) bg_popup_window_pane_cp23

0x81eb,	// (0x000510a8) popup_tmo_big_image_note_window_g1

0x81f4,	// (0x000510b1) popup_tmo_big_image_note_window_t1

0x8204,	// (0x000510c1) popup_tmo_big_image_note_window_t2

0x8214,	// (0x000510d1) popup_tmo_big_image_note_window_t3

0x0002,

0xfec9,	// (0x00058d86) popup_tmo_big_image_note_window_t

0x525c,	// (0x0004e119) cell_ai5_widget_lrg_icon_pane_g1

0x8224,	// (0x000510e1) cell_ai5_widget_lrg_icon_pane_t1

0x8232,	// (0x000510ef) cell_ai5_widget_list_row_pane_ParamLimits

0x8232,	// (0x000510ef) cell_ai5_widget_list_row_pane

0x8249,	// (0x00051106) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8249,	// (0x00051106) cell_ai5_widget_list_row_pane_g1

0xeccc,	// (0x00057b89) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeccc,	// (0x00057b89) cell_ai5_widget_list_row_pane_t1

0x8281,	// (0x0005113e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8281,	// (0x0005113e) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed0,	// (0x00058d8d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed0,	// (0x00058d8d) cell_ai5_widget_list_row_pane_t

0x9684,	// (0x00052541) main_fep_vtchi_ss_pane

0x82c5,	// (0x00051182) popup_fep_char_pre_window

0x82cd,	// (0x0005118a) popup_fep_ituss_window

0xed0c,	// (0x00057bc9) popup_fep_vkbss_window

0xed19,	// (0x00057bd6) grid_vkbss_keypad_pane_ParamLimits

0xed19,	// (0x00057bd6) grid_vkbss_keypad_pane

0x8324,	// (0x000511e1) ituss_keypad_pane

0x227b,	// (0x0004b138) aid_vkbss_key_offset_ParamLimits

0x227b,	// (0x0004b138) aid_vkbss_key_offset

0xbfbb,	// (0x00054e78) cell_vkbss_key_pane_ParamLimits

0xbfbb,	// (0x00054e78) cell_vkbss_key_pane

0x2b30,	// (0x0004b9ed) bg_cell_vkbss_key_g1_ParamLimits

0x2b30,	// (0x0004b9ed) bg_cell_vkbss_key_g1

0xed29,	// (0x00057be6) cell_vkbss_key_3p_pane_ParamLimits

0xed29,	// (0x00057be6) cell_vkbss_key_3p_pane

0xed43,	// (0x00057c00) cell_vkbss_key_g1_ParamLimits

0xed43,	// (0x00057c00) cell_vkbss_key_g1

0xed5d,	// (0x00057c1a) cell_vkbss_key_t1_ParamLimits

0xed5d,	// (0x00057c1a) cell_vkbss_key_t1

0x229d,	// (0x0004b15a) cell_ituss_key_pane_ParamLimits

0x229d,	// (0x0004b15a) cell_ituss_key_pane

0x8386,	// (0x00051243) bg_cell_ituss_key_g1_ParamLimits

0x8386,	// (0x00051243) bg_cell_ituss_key_g1

0x8392,	// (0x0005124f) cell_ituss_key_pane_g1_ParamLimits

0x8392,	// (0x0005124f) cell_ituss_key_pane_g1

0x22ae,	// (0x0004b16b) cell_ituss_key_pane_g2_ParamLimits

0x22ae,	// (0x0004b16b) cell_ituss_key_pane_g2

0x0002,

0xfed7,	// (0x00058d94) cell_ituss_key_pane_g_ParamLimits

0xfed7,	// (0x00058d94) cell_ituss_key_pane_g

0x22da,	// (0x0004b197) cell_ituss_key_t1_ParamLimits

0x22da,	// (0x0004b197) cell_ituss_key_t1

0x2314,	// (0x0004b1d1) cell_ituss_key_t2_ParamLimits

0x2314,	// (0x0004b1d1) cell_ituss_key_t2

0x2345,	// (0x0004b202) cell_ituss_key_t3_ParamLimits

0x2345,	// (0x0004b202) cell_ituss_key_t3

0x2314,	// (0x0004b1d1) cell_ituss_key_t4_ParamLimits

0x2314,	// (0x0004b1d1) cell_ituss_key_t4

0x0004,

0xfede,	// (0x00058d9b) cell_ituss_key_t_ParamLimits

0xfede,	// (0x00058d9b) cell_ituss_key_t

0x83b8,	// (0x00051275) cell_vkbss_key_3p_pane_g1

0x83c0,	// (0x0005127d) cell_vkbss_key_3p_pane_g2

0x83c8,	// (0x00051285) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee9,	// (0x00058da6) cell_vkbss_key_3p_pane_g

0x9684,	// (0x00052541) bg_popup_fep_char_preview_window_cp02

0x2388,	// (0x0004b245) popup_fep_char_pre_window_t1

0xe8ff,	// (0x000577bc) main_ai5_sk_pane

0x7ede,	// (0x00050d9b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7eea,	// (0x00050da7) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5963,	// (0x0004e820) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7eff,	// (0x00050dbc) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebb,	// (0x00058d78) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7f0b,	// (0x00050dc8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xa349,	// (0x00053206) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xed88,	// (0x00057c45) main_ai5_sk_pane_g1

0xc6e8,	// (0x000555a5) popup_query_code_window_g1

0x82e3,	// (0x000511a0) popup_fep_vkb_icf_pane

0x8302,	// (0x000511bf) popup_fep_vtchi_icf_pane

0x83d9,	// (0x00051296) bg_icf_pane

0x83e5,	// (0x000512a2) list_vkb_icf_pane

0x83f4,	// (0x000512b1) bg_icf_pane_cp01

0x8407,	// (0x000512c4) vtchi_icf_list_pane

0x8417,	// (0x000512d4) list_vkb_icf_pane_t1_ParamLimits

0x8417,	// (0x000512d4) list_vkb_icf_pane_t1

0x842e,	// (0x000512eb) vtchi_icf_list_pane_t1_ParamLimits

0x842e,	// (0x000512eb) vtchi_icf_list_pane_t1

0x82cd,	// (0x0005118a) popup_fep_ituss_window_ParamLimits

0x8302,	// (0x000511bf) popup_fep_vtchi_icf_pane_ParamLimits

0x8324,	// (0x000511e1) ituss_keypad_pane_ParamLimits

0x226f,	// (0x0004b12c) ituss_sks_pane

0x83d9,	// (0x00051296) bg_icf_pane_ParamLimits

0xecfd,	// (0x00057bba) icf_edit_indi_pane_ParamLimits

0xecfd,	// (0x00057bba) icf_edit_indi_pane

0x83e5,	// (0x000512a2) list_vkb_icf_pane_ParamLimits

0x83f4,	// (0x000512b1) bg_icf_pane_cp01_ParamLimits

0x82b8,	// (0x00051175) icf_edit_indi_pane_cp01_ParamLimits

0x82b8,	// (0x00051175) icf_edit_indi_pane_cp01

0x840f,	// (0x000512cc) vtchi_query_pane

0x54cc,	// (0x0004e389) icf_edit_indi_pane_g1_ParamLimits

0x54cc,	// (0x0004e389) icf_edit_indi_pane_g1

0x84a3,	// (0x00051360) icf_edit_indi_pane_g2_ParamLimits

0x84a3,	// (0x00051360) icf_edit_indi_pane_g2

0x0001,

0xff01,	// (0x00058dbe) icf_edit_indi_pane_g_ParamLimits

0xff01,	// (0x00058dbe) icf_edit_indi_pane_g

0x84b2,	// (0x0005136f) icf_edit_indi_pane_t1

0x844c,	// (0x00051309) bg_input_focus_pane_cp042

0xa21d,	// (0x000530da) vtchi_button_pane

0x8455,	// (0x00051312) vtchi_query_pane_t1

0x8463,	// (0x00051320) vtchi_query_pane_t2

0x8471,	// (0x0005132e) vtchi_query_pane_t3

0x0002,

0xfef0,	// (0x00058dad) vtchi_query_pane_t

0x9684,	// (0x00052541) bg_button_pane_cp13

0x847f,	// (0x0005133c) vtchi_button_pane_g1

0x2397,	// (0x0004b254) ituss_sks_pane_g1

0x23a2,	// (0x0004b25f) ituss_sks_pane_g2

0x0001,

0xfef7,	// (0x00058db4) ituss_sks_pane_g

0x8487,	// (0x00051344) ituss_sks_pane_t1

0x8495,	// (0x00051352) ituss_sks_pane_t2

0x0001,

0xfefc,	// (0x00058db9) ituss_sks_pane_t

0x4cdf,	// (0x0004db9c) indicator_nsta_pane_cp_g1

0x4ce7,	// (0x0004dba4) indicator_nsta_pane_cp_g2

0x4cef,	// (0x0004dbac) indicator_nsta_pane_cp_g3

0x4cdf,	// (0x0004db9c) indicator_nsta_pane_cp_g4

0x4ce7,	// (0x0004dba4) indicator_nsta_pane_cp_g5

0x4cef,	// (0x0004dbac) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x00058969) indicator_nsta_pane_cp_g

0xe6dc,	// (0x00057599) cell_graphic2_pane_t2_ParamLimits

0xe6dc,	// (0x00057599) cell_graphic2_pane_t2

0x0001,

0xfdb2,	// (0x00058c6f) cell_graphic2_pane_t_ParamLimits

0xfdb2,	// (0x00058c6f) cell_graphic2_pane_t

0xe715,	// (0x000575d2) cell_graphic2_control_pane_t1

0xa9e5,	// (0x000538a2) signal_pane_g3_ParamLimits

0xa9e5,	// (0x000538a2) signal_pane_g3

0xa9f9,	// (0x000538b6) signal_pane_g4_ParamLimits

0xa9f9,	// (0x000538b6) signal_pane_g4

0x8293,	// (0x00051150) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8293,	// (0x00051150) cell_ai5_widget_list_row_pane_t3

0x83a6,	// (0x00051263) cell_ituss_key_pane_t1_ParamLimits

0x83a6,	// (0x00051263) cell_ituss_key_pane_t1

0x2dc6,	// (0x0004bc83) form_field_data_wide_pane_vc_t2_ParamLimits

0x2dc6,	// (0x0004bc83) form_field_data_wide_pane_vc_t2

0x2dda,	// (0x0004bc97) form_field_data_wide_pane_vc_t3_ParamLimits

0x2dda,	// (0x0004bc97) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f8,	// (0x000586b5) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f8,	// (0x000586b5) form_field_data_wide_pane_vc_t

0x499b,	// (0x0004d858) form_field_slider_wide_pane_vc_t3_ParamLimits

0x499b,	// (0x0004d858) form_field_slider_wide_pane_vc_t3

0x4a79,	// (0x0004d936) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4a79,	// (0x0004d936) form_field_popup_wide_pane_vc_t2

0x4a90,	// (0x0004d94d) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4a90,	// (0x0004d94d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x00058958) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x00058958) form_field_popup_wide_pane_vc_t

0xbdc0,	// (0x00054c7d) aid_fshwr2_btn_pane_ParamLimits

0xbdd2,	// (0x00054c8f) aid_fshwr2_syb_pane_ParamLimits

0xbde4,	// (0x00054ca1) aid_fshwr2_txt_pane_ParamLimits

0xa349,	// (0x00053206) fshwr2_bg_pane_ParamLimits

0xbdf3,	// (0x00054cb0) fshwr2_func_candi_pane_ParamLimits

0xbe12,	// (0x00054ccf) fshwr2_hwr_syb_pane_ParamLimits

0xbe2d,	// (0x00054cea) fshwr2_icf_pane_ParamLimits

0x138a,	// (0x0004a247) list_double_graphic_pane_vc_g4_ParamLimits

0x138a,	// (0x0004a247) list_double_graphic_pane_vc_g4

0x22ce,	// (0x0004b18b) cell_ituss_key_pane_g3_ParamLimits

0x22ce,	// (0x0004b18b) cell_ituss_key_pane_g3

0x2376,	// (0x0004b233) cell_ituss_key_t5_ParamLimits

0x2376,	// (0x0004b233) cell_ituss_key_t5

0xed0c,	// (0x00057bc9) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large

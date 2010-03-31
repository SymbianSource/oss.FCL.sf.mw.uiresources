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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001a897 };

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
0x7c9d,	// (0x00022534) Screen

0x7cb1,	// (0x00022548) application_window_ParamLimits

0x7cb1,	// (0x00022548) application_window

0x7ccb,	// (0x00022562) screen_g1

0x5b52,	// (0x000203e9) area_bottom_pane_ParamLimits

0x5b52,	// (0x000203e9) area_bottom_pane

0x5c12,	// (0x000204a9) area_top_pane_ParamLimits

0x5c12,	// (0x000204a9) area_top_pane

0x5ca6,	// (0x0002053d) main_pane_ParamLimits

0x5ca6,	// (0x0002053d) main_pane

0x7cd5,	// (0x0002256c) misc_graphics

0x967e,	// (0x00023f15) battery_pane_ParamLimits

0x967e,	// (0x00023f15) battery_pane

0xa350,	// (0x00024be7) bg_status_flat_pane_g8

0xa358,	// (0x00024bef) bg_status_flat_pane_g9

0x9740,	// (0x00023fd7) context_pane_ParamLimits

0x9740,	// (0x00023fd7) context_pane

0x9856,	// (0x000240ed) navi_pane_ParamLimits

0x9856,	// (0x000240ed) navi_pane

0x98da,	// (0x00024171) signal_pane_ParamLimits

0x98da,	// (0x00024171) signal_pane

0x0008,

0xf878,	// (0x0002a10f) bg_status_flat_pane_g

0x9947,	// (0x000241de) status_pane_g1_ParamLimits

0x9947,	// (0x000241de) status_pane_g1

0x995b,	// (0x000241f2) status_pane_g2_ParamLimits

0x995b,	// (0x000241f2) status_pane_g2

0x9967,	// (0x000241fe) status_pane_g3_ParamLimits

0x9967,	// (0x000241fe) status_pane_g3

0x0004,

0xf7a6,	// (0x0002a03d) status_pane_g_ParamLimits

0xf7a6,	// (0x0002a03d) status_pane_g

0x999b,	// (0x00024232) title_pane_ParamLimits

0x999b,	// (0x00024232) title_pane

0x99d8,	// (0x0002426f) uni_indicator_pane_ParamLimits

0x99d8,	// (0x0002426f) uni_indicator_pane

0x95a2,	// (0x00023e39) bg_list_pane_ParamLimits

0x95a2,	// (0x00023e39) bg_list_pane

0x51df,	// (0x0001fa76) find_pane

0x95c2,	// (0x00023e59) listscroll_app_pane_ParamLimits

0x95c2,	// (0x00023e59) listscroll_app_pane

0x95ce,	// (0x00023e65) listscroll_form_pane

0x51e7,	// (0x0001fa7e) listscroll_gen_pane_ParamLimits

0x51e7,	// (0x0001fa7e) listscroll_gen_pane

0x6571,	// (0x00020e08) listscroll_set_pane

0x8805,	// (0x0002309c) main_idle_act_pane

0x92a8,	// (0x00023b3f) main_idle_trad_pane

0x92a8,	// (0x00023b3f) main_list_empty_pane

0x95e8,	// (0x00023e7f) main_midp_pane

0x95f4,	// (0x00023e8b) main_pane_g1_ParamLimits

0x95f4,	// (0x00023e8b) main_pane_g1

0x6579,	// (0x00020e10) popup_ai_message_window_ParamLimits

0x6579,	// (0x00020e10) popup_ai_message_window

0x661f,	// (0x00020eb6) popup_fep_china_uni_window_ParamLimits

0x661f,	// (0x00020eb6) popup_fep_china_uni_window

0x667b,	// (0x00020f12) popup_fep_japan_candidate_window_ParamLimits

0x667b,	// (0x00020f12) popup_fep_japan_candidate_window

0x669b,	// (0x00020f32) popup_fep_japan_predictive_window_ParamLimits

0x669b,	// (0x00020f32) popup_fep_japan_predictive_window

0x66cb,	// (0x00020f62) popup_find_window

0x66d8,	// (0x00020f6f) popup_grid_graphic_window_ParamLimits

0x66d8,	// (0x00020f6f) popup_grid_graphic_window

0x6700,	// (0x00020f97) popup_large_graphic_colour_window

0x6726,	// (0x00020fbd) popup_menu_window_ParamLimits

0x6726,	// (0x00020fbd) popup_menu_window

0x68de,	// (0x00021175) popup_note_image_window

0x68ca,	// (0x00021161) popup_note_wait_window_ParamLimits

0x68ca,	// (0x00021161) popup_note_wait_window

0x68ca,	// (0x00021161) popup_note_window_ParamLimits

0x68ca,	// (0x00021161) popup_note_window

0x6934,	// (0x000211cb) popup_query_code_window_ParamLimits

0x6934,	// (0x000211cb) popup_query_code_window

0x6948,	// (0x000211df) popup_query_data_code_window_ParamLimits

0x6948,	// (0x000211df) popup_query_data_code_window

0x6965,	// (0x000211fc) popup_query_data_window_ParamLimits

0x6965,	// (0x000211fc) popup_query_data_window

0x6981,	// (0x00021218) popup_query_sat_info_window_ParamLimits

0x6981,	// (0x00021218) popup_query_sat_info_window

0x69ba,	// (0x00021251) popup_snote_single_graphic_window_ParamLimits

0x69ba,	// (0x00021251) popup_snote_single_graphic_window

0x69ba,	// (0x00021251) popup_snote_single_text_window_ParamLimits

0x69ba,	// (0x00021251) popup_snote_single_text_window

0x69cf,	// (0x00021266) popup_sub_window_general

0x6aff,	// (0x00021396) popup_window_general_ParamLimits

0x6aff,	// (0x00021396) popup_window_general

0x9602,	// (0x00023e99) power_save_pane

0x640d,	// (0x00020ca4) control_pane_g1_ParamLimits

0x640d,	// (0x00020ca4) control_pane_g1

0x6434,	// (0x00020ccb) control_pane_g2_ParamLimits

0x6434,	// (0x00020ccb) control_pane_g2

0x9565,	// (0x00023dfc) control_pane_g3_ParamLimits

0x9565,	// (0x00023dfc) control_pane_g3

0x0007,

0xf78e,	// (0x0002a025) control_pane_g_ParamLimits

0xf78e,	// (0x0002a025) control_pane_g

0x647e,	// (0x00020d15) control_pane_t1_ParamLimits

0x647e,	// (0x00020d15) control_pane_t1

0x64ca,	// (0x00020d61) control_pane_t2_ParamLimits

0x64ca,	// (0x00020d61) control_pane_t2

0x0002,

0xf79f,	// (0x0002a036) control_pane_t_ParamLimits

0xf79f,	// (0x0002a036) control_pane_t

0x9486,	// (0x00023d1d) navi_navi_volume_pane_cp1

0x948f,	// (0x00023d26) status_small_icon_pane

0x9497,	// (0x00023d2e) status_small_pane_g1_ParamLimits

0x9497,	// (0x00023d2e) status_small_pane_g1

0x94cb,	// (0x00023d62) status_small_pane_g2_ParamLimits

0x94cb,	// (0x00023d62) status_small_pane_g2

0x94d7,	// (0x00023d6e) status_small_pane_g3_ParamLimits

0x94d7,	// (0x00023d6e) status_small_pane_g3

0x94e3,	// (0x00023d7a) status_small_pane_g4_ParamLimits

0x94e3,	// (0x00023d7a) status_small_pane_g4

0x94ef,	// (0x00023d86) status_small_pane_g5_ParamLimits

0x94ef,	// (0x00023d86) status_small_pane_g5

0x94fe,	// (0x00023d95) status_small_pane_g6_ParamLimits

0x94fe,	// (0x00023d95) status_small_pane_g6

0x0007,

0xf77d,	// (0x0002a014) status_small_pane_g_ParamLimits

0xf77d,	// (0x0002a014) status_small_pane_g

0x952e,	// (0x00023dc5) status_small_pane_t1

0x9551,	// (0x00023de8) status_small_wait_pane_ParamLimits

0x9551,	// (0x00023de8) status_small_wait_pane

0x8d25,	// (0x000235bc) aid_levels_signal_ParamLimits

0x8d25,	// (0x000235bc) aid_levels_signal

0x8d37,	// (0x000235ce) signal_pane_g1_ParamLimits

0x8d37,	// (0x000235ce) signal_pane_g1

0x8d4c,	// (0x000235e3) signal_pane_g2_ParamLimits

0x8d4c,	// (0x000235e3) signal_pane_g2

0x0003,

0xf70e,	// (0x00029fa5) signal_pane_g_ParamLimits

0xf70e,	// (0x00029fa5) signal_pane_g

0x8d87,	// (0x0002361e) context_pane_g1

0x7cdf,	// (0x00022576) title_pane_g1

0x7d15,	// (0x000225ac) title_pane_t1

0x7d7d,	// (0x00022614) title_pane_t2

0x7da3,	// (0x0002263a) title_pane_t3

0x0002,

0xf55d,	// (0x00029df4) title_pane_t

0x99f0,	// (0x00024287) aid_levels_battery_ParamLimits

0x99f0,	// (0x00024287) aid_levels_battery

0x9a04,	// (0x0002429b) battery_pane_g1_ParamLimits

0x9a04,	// (0x0002429b) battery_pane_g1

0x9a1a,	// (0x000242b1) battery_pane_g2_ParamLimits

0x9a1a,	// (0x000242b1) battery_pane_g2

0x0001,

0xf7b1,	// (0x0002a048) battery_pane_g_ParamLimits

0xf7b1,	// (0x0002a048) battery_pane_g

0xac86,	// (0x0002551d) uni_indicator_pane_g1

0xac9d,	// (0x00025534) uni_indicator_pane_g2

0xacb0,	// (0x00025547) uni_indicator_pane_g3

0x0005,

0xf920,	// (0x0002a1b7) uni_indicator_pane_g

0x911a,	// (0x000239b1) navi_icon_pane_ParamLimits

0x911a,	// (0x000239b1) navi_icon_pane

0x9063,	// (0x000238fa) navi_midp_pane

0x9136,	// (0x000239cd) navi_navi_pane

0x9140,	// (0x000239d7) navi_text_pane_ParamLimits

0x9140,	// (0x000239d7) navi_text_pane

0x7ccb,	// (0x00022562) status_small_wait_pane_g1

0x81d2,	// (0x00022a69) status_small_wait_pane_g2

0x0001,

0xf91b,	// (0x0002a1b2) status_small_wait_pane_g

0xa9ab,	// (0x00025242) navi_navi_icon_text_pane

0xa9b3,	// (0x0002524a) navi_navi_pane_g1_ParamLimits

0xa9b3,	// (0x0002524a) navi_navi_pane_g1

0xa9c5,	// (0x0002525c) navi_navi_pane_g2_ParamLimits

0xa9c5,	// (0x0002525c) navi_navi_pane_g2

0x0001,

0xf8e9,	// (0x0002a180) navi_navi_pane_g_ParamLimits

0xf8e9,	// (0x0002a180) navi_navi_pane_g

0xa9d7,	// (0x0002526e) navi_navi_tabs_pane

0xa9e0,	// (0x00025277) navi_navi_text_pane

0xa9ab,	// (0x00025242) navi_navi_volume_pane

0xa987,	// (0x0002521e) navi_text_pane_t1

0xa97b,	// (0x00025212) navi_icon_pane_g1

0xa8ce,	// (0x00025165) navi_navi_text_pane_t1

0x6d9f,	// (0x00021636) navi_navi_volume_pane_g1

0x6da7,	// (0x0002163e) volume_small_pane

0xa834,	// (0x000250cb) navi_navi_icon_text_pane_g1

0xa83c,	// (0x000250d3) navi_navi_icon_text_pane_t1

0x9136,	// (0x000239cd) navi_tabs_2_long_pane

0x9136,	// (0x000239cd) navi_tabs_2_pane

0x9136,	// (0x000239cd) navi_tabs_3_long_pane

0x9136,	// (0x000239cd) navi_tabs_3_pane

0x9136,	// (0x000239cd) navi_tabs_4_pane

0x6d7f,	// (0x00021616) tabs_2_active_pane_ParamLimits

0x6d7f,	// (0x00021616) tabs_2_active_pane

0x6d8f,	// (0x00021626) tabs_2_passive_pane_ParamLimits

0x6d8f,	// (0x00021626) tabs_2_passive_pane

0x6d4d,	// (0x000215e4) tabs_3_active_pane_ParamLimits

0x6d4d,	// (0x000215e4) tabs_3_active_pane

0x6d5d,	// (0x000215f4) tabs_3_passive_pane_ParamLimits

0x6d5d,	// (0x000215f4) tabs_3_passive_pane

0x6d6e,	// (0x00021605) tabs_3_passive_pane_cp_ParamLimits

0x6d6e,	// (0x00021605) tabs_3_passive_pane_cp

0x6d09,	// (0x000215a0) tabs_4_active_pane_ParamLimits

0x6d09,	// (0x000215a0) tabs_4_active_pane

0x6d1a,	// (0x000215b1) tabs_4_passive_pane_ParamLimits

0x6d1a,	// (0x000215b1) tabs_4_passive_pane

0x6d2b,	// (0x000215c2) tabs_4_passive_pane_cp_ParamLimits

0x6d2b,	// (0x000215c2) tabs_4_passive_pane_cp

0x6d3c,	// (0x000215d3) tabs_4_passive_pane_cp2_ParamLimits

0x6d3c,	// (0x000215d3) tabs_4_passive_pane_cp2

0x6ce5,	// (0x0002157c) tabs_2_long_active_pane_ParamLimits

0x6ce5,	// (0x0002157c) tabs_2_long_active_pane

0x6cf7,	// (0x0002158e) tabs_2_long_passive_pane_ParamLimits

0x6cf7,	// (0x0002158e) tabs_2_long_passive_pane

0x6ca6,	// (0x0002153d) tabs_3_long_active_pane_ParamLimits

0x6ca6,	// (0x0002153d) tabs_3_long_active_pane

0x6cb9,	// (0x00021550) tabs_3_long_passive_pane_ParamLimits

0x6cb9,	// (0x00021550) tabs_3_long_passive_pane

0x6cd2,	// (0x00021569) tabs_3_long_passive_pane_cp_ParamLimits

0x6cd2,	// (0x00021569) tabs_3_long_passive_pane_cp

0x6c4c,	// (0x000214e3) volume_small_pane_g1

0x6c55,	// (0x000214ec) volume_small_pane_g2

0x6c5e,	// (0x000214f5) volume_small_pane_g3

0x6c67,	// (0x000214fe) volume_small_pane_g4

0x6c70,	// (0x00021507) volume_small_pane_g5

0x6c79,	// (0x00021510) volume_small_pane_g6

0x6c82,	// (0x00021519) volume_small_pane_g7

0x6c8b,	// (0x00021522) volume_small_pane_g8

0x6c94,	// (0x0002152b) volume_small_pane_g9

0x6c9d,	// (0x00021534) volume_small_pane_g10

0x0009,

0xf8b5,	// (0x0002a14c) volume_small_pane_g

0x7db5,	// (0x0002264c) bg_active_tab_pane_cp2_ParamLimits

0x7db5,	// (0x0002264c) bg_active_tab_pane_cp2

0x7dc3,	// (0x0002265a) tabs_3_active_pane_g1

0x7dcb,	// (0x00022662) tabs_3_active_pane_t1

0x7db5,	// (0x0002264c) bg_passive_tab_pane_cp2_ParamLimits

0x7db5,	// (0x0002264c) bg_passive_tab_pane_cp2

0x7dc3,	// (0x0002265a) tabs_3_passive_pane_g1

0x7dcb,	// (0x00022662) tabs_3_passive_pane_t1

0x7db5,	// (0x0002264c) bg_active_tab_pane_cp3_ParamLimits

0x7db5,	// (0x0002264c) bg_active_tab_pane_cp3

0x7ddd,	// (0x00022674) tabs_4_active_pane_g1

0x7de5,	// (0x0002267c) tabs_4_active_pane_t1

0x7db5,	// (0x0002264c) bg_passive_tab_pane_cp3_ParamLimits

0x7db5,	// (0x0002264c) bg_passive_tab_pane_cp3

0x7ddd,	// (0x00022674) tabs_4_1_passive_pane_g1

0x7de5,	// (0x0002267c) tabs_4_1_passive_pane_t1

0x95e8,	// (0x00023e7f) list_highlight_pane_cp2

0xaf38,	// (0x000257cf) list_set_pane_ParamLimits

0xaf38,	// (0x000257cf) list_set_pane

0xafde,	// (0x00025875) main_pane_set_t1_ParamLimits

0xafde,	// (0x00025875) main_pane_set_t1

0xaffe,	// (0x00025895) main_pane_set_t2_ParamLimits

0xaffe,	// (0x00025895) main_pane_set_t2

0xb012,	// (0x000258a9) main_pane_set_t3_ParamLimits

0xb012,	// (0x000258a9) main_pane_set_t3

0xb024,	// (0x000258bb) main_pane_set_t4_ParamLimits

0xb024,	// (0x000258bb) main_pane_set_t4

0x0003,

0xf985,	// (0x0002a21c) main_pane_set_t_ParamLimits

0xf985,	// (0x0002a21c) main_pane_set_t

0xb036,	// (0x000258cd) setting_code_pane

0xb042,	// (0x000258d9) setting_slider_graphic_pane

0xb042,	// (0x000258d9) setting_slider_pane

0xb042,	// (0x000258d9) setting_text_pane

0xb042,	// (0x000258d9) setting_volume_pane

0x5ef5,	// (0x0002078c) volume_set_pane

0x7db5,	// (0x0002264c) bg_set_opt_pane_cp

0x5efd,	// (0x00020794) setting_slider_pane_t1

0x5f16,	// (0x000207ad) setting_slider_pane_t2

0x5f30,	// (0x000207c7) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00029dfb) setting_slider_pane_t

0x5f48,	// (0x000207df) slider_set_pane

0x7cd5,	// (0x0002256c) bg_set_opt_pane_cp2

0x7df7,	// (0x0002268e) setting_slider_graphic_pane_g1

0x5f5e,	// (0x000207f5) setting_slider_graphic_pane_t1

0x5f6e,	// (0x00020805) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00029e02) setting_slider_graphic_pane_t

0x5f7e,	// (0x00020815) slider_set_pane_cp

0x7cd5,	// (0x0002256c) input_focus_pane_cp1

0xaef7,	// (0x0002578e) list_set_text_pane

0x7ccb,	// (0x00022562) setting_text_pane_g1

0x7cd5,	// (0x0002256c) input_focus_pane_cp2

0x7ccb,	// (0x00022562) setting_code_pane_g1

0x7e00,	// (0x00022697) setting_code_pane_t1

0x4a32,	// (0x0001f2c9) set_text_pane_t1_ParamLimits

0x4a32,	// (0x0001f2c9) set_text_pane_t1

0x867c,	// (0x00022f13) set_opt_bg_pane_g1

0x8684,	// (0x00022f1b) set_opt_bg_pane_g2

0xaed1,	// (0x00025768) set_opt_bg_pane_g3

0x8694,	// (0x00022f2b) set_opt_bg_pane_g4

0x869c,	// (0x00022f33) set_opt_bg_pane_g5

0x86a4,	// (0x00022f3b) set_opt_bg_pane_g6

0xaedb,	// (0x00025772) set_opt_bg_pane_g7

0xaee3,	// (0x0002577a) set_opt_bg_pane_g8

0xaeed,	// (0x00025784) set_opt_bg_pane_g9

0x0008,

0xf972,	// (0x0002a209) set_opt_bg_pane_g

0xae82,	// (0x00025719) slider_set_pane_g1

0x6e14,	// (0x000216ab) slider_set_pane_g2

0x0006,

0xf963,	// (0x0002a1fa) slider_set_pane_g

0x6db0,	// (0x00021647) volume_set_pane_g1

0x6db8,	// (0x0002164f) volume_set_pane_g2

0x6dc0,	// (0x00021657) volume_set_pane_g3

0x6dc8,	// (0x0002165f) volume_set_pane_g4

0x6dd0,	// (0x00021667) volume_set_pane_g5

0x6dd8,	// (0x0002166f) volume_set_pane_g6

0x6de0,	// (0x00021677) volume_set_pane_g7

0x6de8,	// (0x0002167f) volume_set_pane_g8

0x6df0,	// (0x00021687) volume_set_pane_g9

0x6df8,	// (0x0002168f) volume_set_pane_g10

0x0009,

0xf93b,	// (0x0002a1d2) volume_set_pane_g

0x7e0e,	// (0x000226a5) indicator_pane_ParamLimits

0x7e0e,	// (0x000226a5) indicator_pane

0x7e1a,	// (0x000226b1) main_idle_pane_g2_ParamLimits

0x7e1a,	// (0x000226b1) main_idle_pane_g2

0x7e42,	// (0x000226d9) main_pane_idle_g1_ParamLimits

0x7e42,	// (0x000226d9) main_pane_idle_g1

0x7e4f,	// (0x000226e6) popup_clock_digital_analogue_window_ParamLimits

0x7e4f,	// (0x000226e6) popup_clock_digital_analogue_window

0x7e66,	// (0x000226fd) soft_indicator_pane_ParamLimits

0x7e66,	// (0x000226fd) soft_indicator_pane

0x7e72,	// (0x00022709) wallpaper_pane_ParamLimits

0x7e72,	// (0x00022709) wallpaper_pane

0x7ccb,	// (0x00022562) wallpaper_pane_g1

0x7e86,	// (0x0002271d) indicator_pane_g1_ParamLimits

0x7e86,	// (0x0002271d) indicator_pane_g1

0xb2d1,	// (0x00025b68) navi_navi_icon_text_pane_srt_g1

0x7ea1,	// (0x00022738) soft_indicator_pane_t1

0x7ebb,	// (0x00022752) aid_ps_area_pane

0x7ecc,	// (0x00022763) aid_ps_clock_pane

0x7eda,	// (0x00022771) aid_ps_indicator_pane

0x7ee6,	// (0x0002277d) indicator_ps_pane_ParamLimits

0x7ee6,	// (0x0002277d) indicator_ps_pane

0x7ef5,	// (0x0002278c) power_save_pane_g1_ParamLimits

0x7ef5,	// (0x0002278c) power_save_pane_g1

0x7f01,	// (0x00022798) power_save_pane_g2_ParamLimits

0x7f01,	// (0x00022798) power_save_pane_g2

0x5b06,	// (0x0002039d) aid_navinavi_width_pane

0x7ebb,	// (0x00022752) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00029e07) power_save_pane_g_ParamLimits

0xf570,	// (0x00029e07) power_save_pane_g

0x7f0f,	// (0x000227a6) power_save_pane_t1_ParamLimits

0x7f0f,	// (0x000227a6) power_save_pane_t1

0x7ecc,	// (0x00022763) aid_ps_clock_pane_ParamLimits

0x7eda,	// (0x00022771) aid_ps_indicator_pane_ParamLimits

0x7f21,	// (0x000227b8) power_save_pane_t4_ParamLimits

0x7f21,	// (0x000227b8) power_save_pane_t4

0x0001,

0xf575,	// (0x00029e0c) power_save_pane_t_ParamLimits

0xf575,	// (0x00029e0c) power_save_pane_t

0x7f4b,	// (0x000227e2) power_save_t3_ParamLimits

0x7f4b,	// (0x000227e2) power_save_t3

0x7f36,	// (0x000227cd) power_save_t2_ParamLimits

0x7f36,	// (0x000227cd) power_save_t2

0x7f60,	// (0x000227f7) indicator_ps_pane_g1

0x7f69,	// (0x00022800) ai_gene_pane_ParamLimits

0x7f69,	// (0x00022800) ai_gene_pane

0x7f75,	// (0x0002280c) ai_links_pane_ParamLimits

0x7f75,	// (0x0002280c) ai_links_pane

0x7f81,	// (0x00022818) indicator_pane_cp1_ParamLimits

0x7f81,	// (0x00022818) indicator_pane_cp1

0x7f8d,	// (0x00022824) main_pane_idle_g1_cp_ParamLimits

0x7f8d,	// (0x00022824) main_pane_idle_g1_cp

0x7f99,	// (0x00022830) popup_ai_links_title_window

0x7fa2,	// (0x00022839) soft_indicator_pane_cp1_ParamLimits

0x7fa2,	// (0x00022839) soft_indicator_pane_cp1

0xac74,	// (0x0002550b) ai_links_pane_g1

0xac7d,	// (0x00025514) grid_ai_links_pane

0xac57,	// (0x000254ee) ai_gene_pane_1

0xac62,	// (0x000254f9) ai_gene_pane_2

0xac6b,	// (0x00025502) list_highlight_pane_cp4

0xac3b,	// (0x000254d2) cell_ai_link_pane_ParamLimits

0xac3b,	// (0x000254d2) cell_ai_link_pane

0xac33,	// (0x000254ca) cell_ai_link_pane_g1

0x81d2,	// (0x00022a69) cell_ai_link_pane_g2

0x0001,

0xf916,	// (0x0002a1ad) cell_ai_link_pane_g

0x7cd5,	// (0x0002256c) grid_highlight_cp2

0x7cd5,	// (0x0002256c) bg_popup_sub_pane_cp1

0x7fbc,	// (0x00022853) popup_ai_links_title_window_t1

0xab81,	// (0x00025418) ai_gene_pane_1_g1_ParamLimits

0xab81,	// (0x00025418) ai_gene_pane_1_g1

0xab8d,	// (0x00025424) ai_gene_pane_1_g2_ParamLimits

0xab8d,	// (0x00025424) ai_gene_pane_1_g2

0x0001,

0xf90c,	// (0x0002a1a3) ai_gene_pane_1_g_ParamLimits

0xf90c,	// (0x0002a1a3) ai_gene_pane_1_g

0xab9a,	// (0x00025431) ai_gene_pane_1_t1_ParamLimits

0xab9a,	// (0x00025431) ai_gene_pane_1_t1

0xabce,	// (0x00025465) grid_ai_soft_ind_pane

0xab6c,	// (0x00025403) ai_gene_pane_2_t1_ParamLimits

0xab6c,	// (0x00025403) ai_gene_pane_2_t1

0x7fcb,	// (0x00022862) main_pane_empty_t1_ParamLimits

0x7fcb,	// (0x00022862) main_pane_empty_t1

0x7fe3,	// (0x0002287a) main_pane_empty_t2_ParamLimits

0x7fe3,	// (0x0002287a) main_pane_empty_t2

0x7ff8,	// (0x0002288f) main_pane_empty_t3_ParamLimits

0x7ff8,	// (0x0002288f) main_pane_empty_t3

0x800a,	// (0x000228a1) main_pane_empty_t4_ParamLimits

0x800a,	// (0x000228a1) main_pane_empty_t4

0x801c,	// (0x000228b3) main_pane_empty_t5_ParamLimits

0x801c,	// (0x000228b3) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00029e11) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00029e11) main_pane_empty_t

0x86cd,	// (0x00022f64) bg_popup_window_pane_ParamLimits

0x86cd,	// (0x00022f64) bg_popup_window_pane

0xa8dc,	// (0x00025173) find_popup_pane_cp2_ParamLimits

0xa8dc,	// (0x00025173) find_popup_pane_cp2

0xa8e8,	// (0x0002517f) heading_pane_ParamLimits

0xa8e8,	// (0x0002517f) heading_pane

0x7cd5,	// (0x0002256c) bg_popup_sub_pane

0xa856,	// (0x000250ed) bg_popup_window_pane_g1_ParamLimits

0xa856,	// (0x000250ed) bg_popup_window_pane_g1

0xa862,	// (0x000250f9) bg_popup_window_pane_g2_ParamLimits

0xa862,	// (0x000250f9) bg_popup_window_pane_g2

0xa86e,	// (0x00025105) bg_popup_window_pane_g3_ParamLimits

0xa86e,	// (0x00025105) bg_popup_window_pane_g3

0xa87a,	// (0x00025111) bg_popup_window_pane_g4_ParamLimits

0xa87a,	// (0x00025111) bg_popup_window_pane_g4

0xa886,	// (0x0002511d) bg_popup_window_pane_g5_ParamLimits

0xa886,	// (0x0002511d) bg_popup_window_pane_g5

0xa892,	// (0x00025129) bg_popup_window_pane_g6_ParamLimits

0xa892,	// (0x00025129) bg_popup_window_pane_g6

0xa89e,	// (0x00025135) bg_popup_window_pane_g7_ParamLimits

0xa89e,	// (0x00025135) bg_popup_window_pane_g7

0xa8aa,	// (0x00025141) bg_popup_window_pane_g8_ParamLimits

0xa8aa,	// (0x00025141) bg_popup_window_pane_g8

0xa8b6,	// (0x0002514d) bg_popup_window_pane_g9_ParamLimits

0xa8b6,	// (0x0002514d) bg_popup_window_pane_g9

0xa8c2,	// (0x00025159) bg_popup_window_pane_g10_ParamLimits

0xa8c2,	// (0x00025159) bg_popup_window_pane_g10

0x0009,

0xf8d4,	// (0x0002a16b) bg_popup_window_pane_g_ParamLimits

0xf8d4,	// (0x0002a16b) bg_popup_window_pane_g

0xa7eb,	// (0x00025082) bg_popup_heading_pane_ParamLimits

0xa7eb,	// (0x00025082) bg_popup_heading_pane

0x6e5a,	// (0x000216f1) tabs_4_passive_pane_cp_srt_ParamLimits

0x6e5a,	// (0x000216f1) tabs_4_passive_pane_cp_srt

0x6e6c,	// (0x00021703) tabs_4_passive_pane_srt_ParamLimits

0xa7ff,	// (0x00025096) heading_pane_g2

0x6e6c,	// (0x00021703) tabs_4_passive_pane_srt

0x95e8,	// (0x00023e7f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x95e8,	// (0x00023e7f) bg_passive_tab_pane_cp3_srt

0xa807,	// (0x0002509e) heading_pane_t1_ParamLimits

0xa807,	// (0x0002509e) heading_pane_t1

0xa81e,	// (0x000250b5) heading_pane_t2_ParamLimits

0xa81e,	// (0x000250b5) heading_pane_t2

0x0001,

0xf8cf,	// (0x0002a166) heading_pane_t_ParamLimits

0xf8cf,	// (0x0002a166) heading_pane_t

0xa318,	// (0x00024baf) bg_popup_heading_pane_g1

0xa3c7,	// (0x00024c5e) bg_popup_heading_pane_g2

0xa3d1,	// (0x00024c68) bg_popup_heading_pane_g3

0xa3db,	// (0x00024c72) bg_popup_heading_pane_g4

0xa3e5,	// (0x00024c7c) bg_popup_heading_pane_g5

0xa3ef,	// (0x00024c86) bg_popup_heading_pane_g6

0xa3f7,	// (0x00024c8e) bg_popup_heading_pane_g7

0xa3ff,	// (0x00024c96) bg_popup_heading_pane_g8

0xa409,	// (0x00024ca0) bg_popup_heading_pane_g9

0x0008,

0xf88b,	// (0x0002a122) bg_popup_heading_pane_g

0x9af2,	// (0x00024389) bg_popup_sub_pane_g1

0x9afa,	// (0x00024391) bg_popup_sub_pane_g2

0x9b02,	// (0x00024399) bg_popup_sub_pane_g3

0x9b0a,	// (0x000243a1) bg_popup_sub_pane_g4

0x9b12,	// (0x000243a9) bg_popup_sub_pane_g5

0x9b1a,	// (0x000243b1) bg_popup_sub_pane_g6

0x9b22,	// (0x000243b9) bg_popup_sub_pane_g7

0x9b2a,	// (0x000243c1) bg_popup_sub_pane_g8

0x9b32,	// (0x000243c9) bg_popup_sub_pane_g9

0x0008,

0xf865,	// (0x0002a0fc) bg_popup_sub_pane_g

0x8030,	// (0x000228c7) bg_popup_window_pane_cp5_ParamLimits

0x8030,	// (0x000228c7) bg_popup_window_pane_cp5

0x804c,	// (0x000228e3) popup_note_window_g1_ParamLimits

0x804c,	// (0x000228e3) popup_note_window_g1

0x8058,	// (0x000228ef) popup_note_window_t1_ParamLimits

0x8058,	// (0x000228ef) popup_note_window_t1

0x806e,	// (0x00022905) popup_note_window_t2_ParamLimits

0x806e,	// (0x00022905) popup_note_window_t2

0x8084,	// (0x0002291b) popup_note_window_t3_ParamLimits

0x8084,	// (0x0002291b) popup_note_window_t3

0x809a,	// (0x00022931) popup_note_window_t4_ParamLimits

0x809a,	// (0x00022931) popup_note_window_t4

0x80c2,	// (0x00022959) popup_note_window_t5_ParamLimits

0x80c2,	// (0x00022959) popup_note_window_t5

0x0004,

0xf585,	// (0x00029e1c) popup_note_window_t_ParamLimits

0xf585,	// (0x00029e1c) popup_note_window_t

0x80e6,	// (0x0002297d) bg_popup_window_pane_cp6_ParamLimits

0x80e6,	// (0x0002297d) bg_popup_window_pane_cp6

0xa294,	// (0x00024b2b) popup_note_image_window_g1_ParamLimits

0xa294,	// (0x00024b2b) popup_note_image_window_g1

0xa2a0,	// (0x00024b37) popup_note_image_window_g2_ParamLimits

0xa2a0,	// (0x00024b37) popup_note_image_window_g2

0x0001,

0xf859,	// (0x0002a0f0) popup_note_image_window_g_ParamLimits

0xf859,	// (0x0002a0f0) popup_note_image_window_g

0xa2b9,	// (0x00024b50) popup_note_image_window_t1_ParamLimits

0xa2b9,	// (0x00024b50) popup_note_image_window_t1

0xa2d2,	// (0x00024b69) popup_note_image_window_t2_ParamLimits

0xa2d2,	// (0x00024b69) popup_note_image_window_t2

0xa2eb,	// (0x00024b82) popup_note_image_window_t3_ParamLimits

0xa2eb,	// (0x00024b82) popup_note_image_window_t3

0x0002,

0xf85e,	// (0x0002a0f5) popup_note_image_window_t_ParamLimits

0xf85e,	// (0x0002a0f5) popup_note_image_window_t

0xa155,	// (0x000249ec) bg_popup_window_pane_cp7_ParamLimits

0xa155,	// (0x000249ec) bg_popup_window_pane_cp7

0xa185,	// (0x00024a1c) popup_note_wait_window_g1_ParamLimits

0xa185,	// (0x00024a1c) popup_note_wait_window_g1

0xa191,	// (0x00024a28) popup_note_wait_window_g2_ParamLimits

0xa191,	// (0x00024a28) popup_note_wait_window_g2

0x0002,

0xf847,	// (0x0002a0de) popup_note_wait_window_g_ParamLimits

0xf847,	// (0x0002a0de) popup_note_wait_window_g

0xa1a9,	// (0x00024a40) popup_note_wait_window_t1_ParamLimits

0xa1a9,	// (0x00024a40) popup_note_wait_window_t1

0xa1d0,	// (0x00024a67) popup_note_wait_window_t2_ParamLimits

0xa1d0,	// (0x00024a67) popup_note_wait_window_t2

0xa1ed,	// (0x00024a84) popup_note_wait_window_t3_ParamLimits

0xa1ed,	// (0x00024a84) popup_note_wait_window_t3

0xa200,	// (0x00024a97) popup_note_wait_window_t4_ParamLimits

0xa200,	// (0x00024a97) popup_note_wait_window_t4

0x0004,

0xf84e,	// (0x0002a0e5) popup_note_wait_window_t_ParamLimits

0xf84e,	// (0x0002a0e5) popup_note_wait_window_t

0xa225,	// (0x00024abc) wait_bar_pane_ParamLimits

0xa225,	// (0x00024abc) wait_bar_pane

0x7cd5,	// (0x0002256c) wait_anim_pane

0x7cd5,	// (0x0002256c) wait_border_pane

0x7ccb,	// (0x00022562) wait_anim_pane_g1

0x7ccb,	// (0x00022562) wait_anim_pane_g2

0x0001,

0xf709,	// (0x00029fa0) wait_anim_pane_g

0xa0f9,	// (0x00024990) wait_border_pane_g1

0xa104,	// (0x0002499b) wait_border_pane_g2

0xa10d,	// (0x000249a4) wait_border_pane_g3

0x0002,

0xf840,	// (0x0002a0d7) wait_border_pane_g

0x9f64,	// (0x000247fb) bg_popup_window_pane_cp16_ParamLimits

0x9f64,	// (0x000247fb) bg_popup_window_pane_cp16

0xa064,	// (0x000248fb) indicator_popup_pane_cp4_ParamLimits

0xa064,	// (0x000248fb) indicator_popup_pane_cp4

0xa078,	// (0x0002490f) popup_query_data_window_t1_ParamLimits

0xa078,	// (0x0002490f) popup_query_data_window_t1

0xa08a,	// (0x00024921) popup_query_data_window_t2_ParamLimits

0xa08a,	// (0x00024921) popup_query_data_window_t2

0xa0a3,	// (0x0002493a) popup_query_data_window_t3_ParamLimits

0xa0a3,	// (0x0002493a) popup_query_data_window_t3

0x0002,

0xf839,	// (0x0002a0d0) popup_query_data_window_t_ParamLimits

0xf839,	// (0x0002a0d0) popup_query_data_window_t

0xa0bd,	// (0x00024954) query_popup_data_pane_ParamLimits

0xa0bd,	// (0x00024954) query_popup_data_pane

0xa0d1,	// (0x00024968) query_popup_data_pane_cp1_ParamLimits

0xa0d1,	// (0x00024968) query_popup_data_pane_cp1

0x9f64,	// (0x000247fb) bg_popup_window_pane_cp10_ParamLimits

0x9f64,	// (0x000247fb) bg_popup_window_pane_cp10

0x9f96,	// (0x0002482d) indicator_popup_pane_ParamLimits

0x9f96,	// (0x0002482d) indicator_popup_pane

0x9fb8,	// (0x0002484f) popup_query_code_window_t1_ParamLimits

0x9fb8,	// (0x0002484f) popup_query_code_window_t1

0x9fd2,	// (0x00024869) popup_query_code_window_t2_ParamLimits

0x9fd2,	// (0x00024869) popup_query_code_window_t2

0xa01b,	// (0x000248b2) popup_query_code_window_t3_ParamLimits

0xa01b,	// (0x000248b2) popup_query_code_window_t3

0x0002,

0xf832,	// (0x0002a0c9) popup_query_code_window_t_ParamLimits

0xf832,	// (0x0002a0c9) popup_query_code_window_t

0xa04a,	// (0x000248e1) query_popup_pane_ParamLimits

0xa04a,	// (0x000248e1) query_popup_pane

0x80e6,	// (0x0002297d) bg_popup_window_pane_cp15_ParamLimits

0x80e6,	// (0x0002297d) bg_popup_window_pane_cp15

0x8104,	// (0x0002299b) indicator_popup_pane_cp1_ParamLimits

0x8104,	// (0x0002299b) indicator_popup_pane_cp1

0x8117,	// (0x000229ae) indicator_popup_pane_cp2_ParamLimits

0x8117,	// (0x000229ae) indicator_popup_pane_cp2

0x812a,	// (0x000229c1) popup_query_data_code_window_g1_ParamLimits

0x812a,	// (0x000229c1) popup_query_data_code_window_g1

0x813d,	// (0x000229d4) popup_query_data_code_window_t1_ParamLimits

0x813d,	// (0x000229d4) popup_query_data_code_window_t1

0x814f,	// (0x000229e6) popup_query_data_code_window_t2_ParamLimits

0x814f,	// (0x000229e6) popup_query_data_code_window_t2

0x8161,	// (0x000229f8) popup_query_data_code_window_t3_ParamLimits

0x8161,	// (0x000229f8) popup_query_data_code_window_t3

0x8177,	// (0x00022a0e) popup_query_data_code_window_t4_ParamLimits

0x8177,	// (0x00022a0e) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00029e27) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00029e27) popup_query_data_code_window_t

0x6b69,	// (0x00021400) list_single_midp_graphic_pane_g3

0x818f,	// (0x00022a26) query_popup_data_pane_cp2_ParamLimits

0x81a2,	// (0x00022a39) query_popup_pane_cp2_ParamLimits

0x81a2,	// (0x00022a39) query_popup_pane_cp2

0x7cd5,	// (0x0002256c) bg_popup_window_pane_cp11

0x9f5c,	// (0x000247f3) heading_pane_cp5

0x828a,	// (0x00022b21) listscroll_popup_info_pane

0x7cd5,	// (0x0002256c) input_focus_pane_cp3

0x81b5,	// (0x00022a4c) query_popup_pane_t1

0x81c3,	// (0x00022a5a) list_popup_info_pane_ParamLimits

0x81c3,	// (0x00022a5a) list_popup_info_pane

0x81d2,	// (0x00022a69) listscroll_popup_info_pane_g1

0x81da,	// (0x00022a71) scroll_pane_cp7

0x81e4,	// (0x00022a7b) popup_info_list_pane_t1_ParamLimits

0x81e4,	// (0x00022a7b) popup_info_list_pane_t1

0x81fe,	// (0x00022a95) popup_info_list_pane_t2_ParamLimits

0x81fe,	// (0x00022a95) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00029e30) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00029e30) popup_info_list_pane_t

0x7cd5,	// (0x0002256c) bg_popup_window_pane_cp12

0xb2eb,	// (0x00025b82) find_popup_pane

0x7db5,	// (0x0002264c) bg_popup_window_pane_cp3

0x8218,	// (0x00022aaf) heading_pane_cp3

0x8224,	// (0x00022abb) listscroll_popup_graphic_pane

0x7cd5,	// (0x0002256c) bg_popup_window_pane_cp4

0x8280,	// (0x00022b17) heading_pane_cp4

0x828a,	// (0x00022b21) listscroll_popup_colour_pane

0x8292,	// (0x00022b29) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8292,	// (0x00022b29) cell_large_graphic_colour_none_popup_pane

0x82a6,	// (0x00022b3d) grid_large_graphic_colour_popup_pane_ParamLimits

0x82a6,	// (0x00022b3d) grid_large_graphic_colour_popup_pane

0x82d2,	// (0x00022b69) listscroll_popup_colour_pane_g1_ParamLimits

0x82d2,	// (0x00022b69) listscroll_popup_colour_pane_g1

0x82e9,	// (0x00022b80) listscroll_popup_colour_pane_g2_ParamLimits

0x82e9,	// (0x00022b80) listscroll_popup_colour_pane_g2

0x8300,	// (0x00022b97) listscroll_popup_colour_pane_g3_ParamLimits

0x8300,	// (0x00022b97) listscroll_popup_colour_pane_g3

0x8310,	// (0x00022ba7) listscroll_popup_colour_pane_g4_ParamLimits

0x8310,	// (0x00022ba7) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00029e35) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00029e35) listscroll_popup_colour_pane_g

0x8324,	// (0x00022bbb) scroll_pane_cp6_ParamLimits

0x8324,	// (0x00022bbb) scroll_pane_cp6

0x8336,	// (0x00022bcd) cell_large_graphic_colour_popup_pane_ParamLimits

0x8336,	// (0x00022bcd) cell_large_graphic_colour_popup_pane

0x8355,	// (0x00022bec) cell_large_graphic_colour_none_popup_pane_t1

0x7cd5,	// (0x0002256c) grid_highlight_pane_cp5

0x8364,	// (0x00022bfb) cell_large_graphic_colour_popup_pane_g1

0x836c,	// (0x00022c03) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00029e3e) cell_large_graphic_colour_popup_pane_g

0x8374,	// (0x00022c0b) cell_large_graphic_colour_popup_pane_g2_copy1

0x837d,	// (0x00022c14) grid_highlight_pane_cp4

0x8385,	// (0x00022c1c) bg_popup_window_pane_cp8_ParamLimits

0x8385,	// (0x00022c1c) bg_popup_window_pane_cp8

0x83a0,	// (0x00022c37) popup_snote_single_text_window_g1_ParamLimits

0x83a0,	// (0x00022c37) popup_snote_single_text_window_g1

0x83b2,	// (0x00022c49) popup_snote_single_text_window_t1_ParamLimits

0x83b2,	// (0x00022c49) popup_snote_single_text_window_t1

0x83c5,	// (0x00022c5c) popup_snote_single_text_window_t2_ParamLimits

0x83c5,	// (0x00022c5c) popup_snote_single_text_window_t2

0x83d8,	// (0x00022c6f) popup_snote_single_text_window_t3_ParamLimits

0x83d8,	// (0x00022c6f) popup_snote_single_text_window_t3

0x8411,	// (0x00022ca8) popup_snote_single_text_window_t4_ParamLimits

0x8411,	// (0x00022ca8) popup_snote_single_text_window_t4

0x8445,	// (0x00022cdc) popup_snote_single_text_window_t5_ParamLimits

0x8445,	// (0x00022cdc) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00029e43) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00029e43) popup_snote_single_text_window_t

0x8474,	// (0x00022d0b) bg_popup_window_pane_cp9_ParamLimits

0x8474,	// (0x00022d0b) bg_popup_window_pane_cp9

0x83a0,	// (0x00022c37) popup_snote_single_graphic_window_g1_ParamLimits

0x83a0,	// (0x00022c37) popup_snote_single_graphic_window_g1

0x8482,	// (0x00022d19) popup_snote_single_graphic_window_g2_ParamLimits

0x8482,	// (0x00022d19) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00029e4e) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00029e4e) popup_snote_single_graphic_window_g

0x848e,	// (0x00022d25) popup_snote_single_graphic_window_t1_ParamLimits

0x848e,	// (0x00022d25) popup_snote_single_graphic_window_t1

0x84a1,	// (0x00022d38) popup_snote_single_graphic_window_t2_ParamLimits

0x84a1,	// (0x00022d38) popup_snote_single_graphic_window_t2

0x84b4,	// (0x00022d4b) popup_snote_single_graphic_window_t3_ParamLimits

0x84b4,	// (0x00022d4b) popup_snote_single_graphic_window_t3

0x84ed,	// (0x00022d84) popup_snote_single_graphic_window_t4_ParamLimits

0x84ed,	// (0x00022d84) popup_snote_single_graphic_window_t4

0x8521,	// (0x00022db8) popup_snote_single_graphic_window_t5_ParamLimits

0x8521,	// (0x00022db8) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00029e53) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00029e53) popup_snote_single_graphic_window_t

0xb22f,	// (0x00025ac6) grid_graphic_popup_pane_ParamLimits

0xb22f,	// (0x00025ac6) grid_graphic_popup_pane

0xb257,	// (0x00025aee) listscroll_popup_graphic_pane_g1_ParamLimits

0xb257,	// (0x00025aee) listscroll_popup_graphic_pane_g1

0xb26b,	// (0x00025b02) listscroll_popup_graphic_pane_g2_ParamLimits

0xb26b,	// (0x00025b02) listscroll_popup_graphic_pane_g2

0x0001,

0xf9af,	// (0x0002a246) listscroll_popup_graphic_pane_g_ParamLimits

0xf9af,	// (0x0002a246) listscroll_popup_graphic_pane_g

0xb27f,	// (0x00025b16) scroll_pane_cp5

0xb1d8,	// (0x00025a6f) cell_graphic_popup_pane_ParamLimits

0xb1d8,	// (0x00025a6f) cell_graphic_popup_pane

0xb1b9,	// (0x00025a50) cell_graphic_popup_pane_g1

0xb1c1,	// (0x00025a58) cell_graphic_popup_pane_g2

0x8374,	// (0x00022c0b) cell_graphic_popup_pane_g3

0x0002,

0xf9a8,	// (0x0002a23f) cell_graphic_popup_pane_g

0xb1ca,	// (0x00025a61) cell_graphic_popup_pane_t2

0x837d,	// (0x00022c14) grid_highlight_pane_cp3

0x8562,	// (0x00022df9) list_gen_pane_ParamLimits

0x8562,	// (0x00022df9) list_gen_pane

0x8594,	// (0x00022e2b) scroll_pane

0xb111,	// (0x000259a8) bg_list_pane_g1_ParamLimits

0xb111,	// (0x000259a8) bg_list_pane_g1

0xb12e,	// (0x000259c5) bg_list_pane_g2_ParamLimits

0xb12e,	// (0x000259c5) bg_list_pane_g2

0xb143,	// (0x000259da) bg_list_pane_g3_ParamLimits

0xb143,	// (0x000259da) bg_list_pane_g3

0xb157,	// (0x000259ee) bg_list_pane_g4_ParamLimits

0xb157,	// (0x000259ee) bg_list_pane_g4

0xb16b,	// (0x00025a02) bg_list_pane_g5_ParamLimits

0xb16b,	// (0x00025a02) bg_list_pane_g5

0x0004,

0xf99d,	// (0x0002a234) bg_list_pane_g_ParamLimits

0xf99d,	// (0x0002a234) bg_list_pane_g

0x53dc,	// (0x0001fc73) list_double2_graphic_large_graphic_pane_ParamLimits

0x53dc,	// (0x0001fc73) list_double2_graphic_large_graphic_pane

0x53dc,	// (0x0001fc73) list_double2_graphic_pane_ParamLimits

0x53dc,	// (0x0001fc73) list_double2_graphic_pane

0x53dc,	// (0x0001fc73) list_double2_large_graphic_pane_ParamLimits

0x53dc,	// (0x0001fc73) list_double2_large_graphic_pane

0x53dc,	// (0x0001fc73) list_double2_pane_ParamLimits

0x53dc,	// (0x0001fc73) list_double2_pane

0x53dc,	// (0x0001fc73) list_double_graphic_heading_pane_ParamLimits

0x53dc,	// (0x0001fc73) list_double_graphic_heading_pane

0x53dc,	// (0x0001fc73) list_double_graphic_pane_ParamLimits

0x53dc,	// (0x0001fc73) list_double_graphic_pane

0x53dc,	// (0x0001fc73) list_double_heading_pane_ParamLimits

0x53dc,	// (0x0001fc73) list_double_heading_pane

0x53dc,	// (0x0001fc73) list_double_large_graphic_pane_ParamLimits

0x53dc,	// (0x0001fc73) list_double_large_graphic_pane

0x53dc,	// (0x0001fc73) list_double_number_pane_ParamLimits

0x53dc,	// (0x0001fc73) list_double_number_pane

0x53dc,	// (0x0001fc73) list_double_pane_ParamLimits

0x53dc,	// (0x0001fc73) list_double_pane

0x53dc,	// (0x0001fc73) list_double_time_pane_ParamLimits

0x53dc,	// (0x0001fc73) list_double_time_pane

0x53dc,	// (0x0001fc73) list_setting_number_pane_ParamLimits

0x53dc,	// (0x0001fc73) list_setting_number_pane

0x53dc,	// (0x0001fc73) list_setting_pane_ParamLimits

0x53dc,	// (0x0001fc73) list_setting_pane

0x5417,	// (0x0001fcae) list_single_2graphic_pane_ParamLimits

0x5417,	// (0x0001fcae) list_single_2graphic_pane

0x5417,	// (0x0001fcae) list_single_graphic_heading_pane_ParamLimits

0x5417,	// (0x0001fcae) list_single_graphic_heading_pane

0x5417,	// (0x0001fcae) list_single_graphic_pane_ParamLimits

0x5417,	// (0x0001fcae) list_single_graphic_pane

0x5417,	// (0x0001fcae) list_single_heading_pane_ParamLimits

0x5417,	// (0x0001fcae) list_single_heading_pane

0x5457,	// (0x0001fcee) list_single_large_graphic_pane_ParamLimits

0x5457,	// (0x0001fcee) list_single_large_graphic_pane

0x5417,	// (0x0001fcae) list_single_number_heading_pane_ParamLimits

0x5417,	// (0x0001fcae) list_single_number_heading_pane

0x5417,	// (0x0001fcae) list_single_number_pane_ParamLimits

0x5417,	// (0x0001fcae) list_single_number_pane

0x5417,	// (0x0001fcae) list_single_pane_ParamLimits

0x5417,	// (0x0001fcae) list_single_pane

0x7cd5,	// (0x0002256c) list_highlight_pane_cp1

0x4a59,	// (0x0001f2f0) list_single_pane_g1_ParamLimits

0x4a59,	// (0x0001f2f0) list_single_pane_g1

0x4a65,	// (0x0001f2fc) list_single_pane_g2_ParamLimits

0x4a65,	// (0x0001f2fc) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00029e65) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00029e65) list_single_pane_g

0x53c6,	// (0x0001fc5d) list_single_pane_t1_ParamLimits

0x53c6,	// (0x0001fc5d) list_single_pane_t1

0x4a59,	// (0x0001f2f0) list_single_number_pane_g1_ParamLimits

0x4a59,	// (0x0001f2f0) list_single_number_pane_g1

0x4a65,	// (0x0001f2fc) list_single_number_pane_g2_ParamLimits

0x4a65,	// (0x0001f2fc) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00029e65) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00029e65) list_single_number_pane_g

0x5370,	// (0x0001fc07) list_single_number_pane_t1_ParamLimits

0x5370,	// (0x0001fc07) list_single_number_pane_t1

0x5386,	// (0x0001fc1d) list_single_number_pane_t2_ParamLimits

0x5386,	// (0x0001fc1d) list_single_number_pane_t2

0x0001,

0xf95e,	// (0x0002a1f5) list_single_number_pane_t_ParamLimits

0xf95e,	// (0x0002a1f5) list_single_number_pane_t

0x4a4d,	// (0x0001f2e4) list_single_graphic_pane_g1_ParamLimits

0x4a4d,	// (0x0001f2e4) list_single_graphic_pane_g1

0x4a59,	// (0x0001f2f0) list_single_graphic_pane_g2_ParamLimits

0x4a59,	// (0x0001f2f0) list_single_graphic_pane_g2

0x4a65,	// (0x0001f2fc) list_single_graphic_pane_g3_ParamLimits

0x4a65,	// (0x0001f2fc) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00029e5e) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00029e5e) list_single_graphic_pane_g

0x4a71,	// (0x0001f308) list_single_graphic_pane_t1_ParamLimits

0x4a71,	// (0x0001f308) list_single_graphic_pane_t1

0x4a59,	// (0x0001f2f0) list_single_heading_pane_g1_ParamLimits

0x4a59,	// (0x0001f2f0) list_single_heading_pane_g1

0x4a65,	// (0x0001f2fc) list_single_heading_pane_g2_ParamLimits

0x4a65,	// (0x0001f2fc) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00029e65) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00029e65) list_single_heading_pane_g

0x4a87,	// (0x0001f31e) list_single_heading_pane_t1_ParamLimits

0x4a87,	// (0x0001f31e) list_single_heading_pane_t1

0x4a9d,	// (0x0001f334) list_single_heading_pane_t2_ParamLimits

0x4a9d,	// (0x0001f334) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00029e6a) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00029e6a) list_single_heading_pane_t

0x4a59,	// (0x0001f2f0) list_single_number_heading_pane_g1_ParamLimits

0x4a59,	// (0x0001f2f0) list_single_number_heading_pane_g1

0x4a65,	// (0x0001f2fc) list_single_number_heading_pane_g2_ParamLimits

0x4a65,	// (0x0001f2fc) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00029e65) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00029e65) list_single_number_heading_pane_g

0x4a87,	// (0x0001f31e) list_single_number_heading_pane_t1_ParamLimits

0x4a87,	// (0x0001f31e) list_single_number_heading_pane_t1

0x4aaf,	// (0x0001f346) list_single_number_heading_pane_t2_ParamLimits

0x4aaf,	// (0x0001f346) list_single_number_heading_pane_t2

0x4ac1,	// (0x0001f358) list_single_number_heading_pane_t3_ParamLimits

0x4ac1,	// (0x0001f358) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x00029e6f) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x00029e6f) list_single_number_heading_pane_t

0x4ad3,	// (0x0001f36a) list_single_graphic_heading_pane_g1_ParamLimits

0x4ad3,	// (0x0001f36a) list_single_graphic_heading_pane_g1

0x4adf,	// (0x0001f376) list_single_graphic_heading_pane_g4_ParamLimits

0x4adf,	// (0x0001f376) list_single_graphic_heading_pane_g4

0x4a65,	// (0x0001f2fc) list_single_graphic_heading_pane_g5_ParamLimits

0x4a65,	// (0x0001f2fc) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00029e76) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00029e76) list_single_graphic_heading_pane_g

0x4a87,	// (0x0001f31e) list_single_graphic_heading_pane_t1_ParamLimits

0x4a87,	// (0x0001f31e) list_single_graphic_heading_pane_t1

0x4af0,	// (0x0001f387) list_single_graphic_heading_pane_t2_ParamLimits

0x4af0,	// (0x0001f387) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x00029e7d) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x00029e7d) list_single_graphic_heading_pane_t

0x4b02,	// (0x0001f399) list_single_large_graphic_pane_g1_ParamLimits

0x4b02,	// (0x0001f399) list_single_large_graphic_pane_g1

0x4b0e,	// (0x0001f3a5) list_single_large_graphic_pane_g2_ParamLimits

0x4b0e,	// (0x0001f3a5) list_single_large_graphic_pane_g2

0x4b1a,	// (0x0001f3b1) list_single_large_graphic_pane_g3_ParamLimits

0x4b1a,	// (0x0001f3b1) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00029e82) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00029e82) list_single_large_graphic_pane_g

0xa104,	// (0x0002499b) wait_border_pane_g2_copy1

0x4b26,	// (0x0001f3bd) list_single_large_graphic_pane_g4_cp2

0x4b2e,	// (0x0001f3c5) list_single_large_graphic_pane_t1_ParamLimits

0x4b2e,	// (0x0001f3c5) list_single_large_graphic_pane_t1

0x4b44,	// (0x0001f3db) list_double_pane_g1_ParamLimits

0x4b44,	// (0x0001f3db) list_double_pane_g1

0x4b50,	// (0x0001f3e7) list_double_pane_g2_ParamLimits

0x4b50,	// (0x0001f3e7) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00029e89) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00029e89) list_double_pane_g

0x4b5c,	// (0x0001f3f3) list_double_pane_t1_ParamLimits

0x4b5c,	// (0x0001f3f3) list_double_pane_t1

0x4b72,	// (0x0001f409) list_double_pane_t2_ParamLimits

0x4b72,	// (0x0001f409) list_double_pane_t2

0x0001,

0xf5f7,	// (0x00029e8e) list_double_pane_t_ParamLimits

0xf5f7,	// (0x00029e8e) list_double_pane_t

0x4b84,	// (0x0001f41b) list_double2_pane_g1_ParamLimits

0x4b84,	// (0x0001f41b) list_double2_pane_g1

0x4b95,	// (0x0001f42c) list_double2_pane_g2_ParamLimits

0x4b95,	// (0x0001f42c) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00029e93) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00029e93) list_double2_pane_g

0x4ba1,	// (0x0001f438) list_double2_pane_t1_ParamLimits

0x4ba1,	// (0x0001f438) list_double2_pane_t1

0x4bb7,	// (0x0001f44e) list_double2_pane_t2_ParamLimits

0x4bb7,	// (0x0001f44e) list_double2_pane_t2

0x0001,

0xf601,	// (0x00029e98) list_double2_pane_t_ParamLimits

0xf601,	// (0x00029e98) list_double2_pane_t

0x4b44,	// (0x0001f3db) list_double_number_pane_g1_ParamLimits

0x4b44,	// (0x0001f3db) list_double_number_pane_g1

0x4b50,	// (0x0001f3e7) list_double_number_pane_g2_ParamLimits

0x4b50,	// (0x0001f3e7) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00029e89) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00029e89) list_double_number_pane_g

0x4bc9,	// (0x0001f460) list_double_number_pane_t1_ParamLimits

0x4bc9,	// (0x0001f460) list_double_number_pane_t1

0x4bdb,	// (0x0001f472) list_double_number_pane_t2_ParamLimits

0x4bdb,	// (0x0001f472) list_double_number_pane_t2

0x4bf1,	// (0x0001f488) list_double_number_pane_t3_ParamLimits

0x4bf1,	// (0x0001f488) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00029e9d) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00029e9d) list_double_number_pane_t

0x4c03,	// (0x0001f49a) list_double_graphic_pane_g1_ParamLimits

0x4c03,	// (0x0001f49a) list_double_graphic_pane_g1

0x4c0f,	// (0x0001f4a6) list_double_graphic_pane_g2_ParamLimits

0x4c0f,	// (0x0001f4a6) list_double_graphic_pane_g2

0x4c1e,	// (0x0001f4b5) list_double_graphic_pane_g3_ParamLimits

0x4c1e,	// (0x0001f4b5) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00029ea4) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00029ea4) list_double_graphic_pane_g

0x4c36,	// (0x0001f4cd) list_double_graphic_pane_t1_ParamLimits

0x4c36,	// (0x0001f4cd) list_double_graphic_pane_t1

0x4c4c,	// (0x0001f4e3) list_double_graphic_pane_t2_ParamLimits

0x4c4c,	// (0x0001f4e3) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00029ead) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00029ead) list_double_graphic_pane_t

0x4c5e,	// (0x0001f4f5) list_double2_graphic_pane_g1_ParamLimits

0x4c5e,	// (0x0001f4f5) list_double2_graphic_pane_g1

0x4c6a,	// (0x0001f501) list_double2_graphic_pane_g2_ParamLimits

0x4c6a,	// (0x0001f501) list_double2_graphic_pane_g2

0x4b95,	// (0x0001f42c) list_double2_graphic_pane_g3_ParamLimits

0x4b95,	// (0x0001f42c) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x00029eb2) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x00029eb2) list_double2_graphic_pane_g

0x4c76,	// (0x0001f50d) list_double2_graphic_pane_t1_ParamLimits

0x4c76,	// (0x0001f50d) list_double2_graphic_pane_t1

0x4c8c,	// (0x0001f523) list_double2_graphic_pane_t2_ParamLimits

0x4c8c,	// (0x0001f523) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00029eb9) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00029eb9) list_double2_graphic_pane_t

0x4c9e,	// (0x0001f535) list_double_large_graphic_pane_g1_ParamLimits

0x4c9e,	// (0x0001f535) list_double_large_graphic_pane_g1

0x4cb1,	// (0x0001f548) list_double_large_graphic_pane_g2_ParamLimits

0x4cb1,	// (0x0001f548) list_double_large_graphic_pane_g2

0x4b50,	// (0x0001f3e7) list_double_large_graphic_pane_g3_ParamLimits

0x4b50,	// (0x0001f3e7) list_double_large_graphic_pane_g3

0x4cc2,	// (0x0001f559) list_double_large_graphic_pane_g4_ParamLimits

0x4cc2,	// (0x0001f559) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00029ebe) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00029ebe) list_double_large_graphic_pane_g

0x4ce9,	// (0x0001f580) list_double_large_graphic_pane_t1_ParamLimits

0x4ce9,	// (0x0001f580) list_double_large_graphic_pane_t1

0x4d02,	// (0x0001f599) list_double_large_graphic_pane_t2_ParamLimits

0x4d02,	// (0x0001f599) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00029ec9) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00029ec9) list_double_large_graphic_pane_t

0x4d14,	// (0x0001f5ab) list_double2_large_graphic_pane_g1_ParamLimits

0x4d14,	// (0x0001f5ab) list_double2_large_graphic_pane_g1

0x4b84,	// (0x0001f41b) list_double2_large_graphic_pane_g2_ParamLimits

0x4b84,	// (0x0001f41b) list_double2_large_graphic_pane_g2

0x4b95,	// (0x0001f42c) list_double2_large_graphic_pane_g3_ParamLimits

0x4b95,	// (0x0001f42c) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00029ece) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00029ece) list_double2_large_graphic_pane_g

0x4d20,	// (0x0001f5b7) list_double2_large_graphic_pane_t1_ParamLimits

0x4d20,	// (0x0001f5b7) list_double2_large_graphic_pane_t1

0x4d36,	// (0x0001f5cd) list_double2_large_graphic_pane_t2_ParamLimits

0x4d36,	// (0x0001f5cd) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00029ed5) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00029ed5) list_double2_large_graphic_pane_t

0x4d48,	// (0x0001f5df) list_double_heading_pane_g1_ParamLimits

0x4d48,	// (0x0001f5df) list_double_heading_pane_g1

0x4d59,	// (0x0001f5f0) list_double_heading_pane_g2_ParamLimits

0x4d59,	// (0x0001f5f0) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00029eda) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00029eda) list_double_heading_pane_g

0x4d65,	// (0x0001f5fc) list_double_heading_pane_t1_ParamLimits

0x4d65,	// (0x0001f5fc) list_double_heading_pane_t1

0x4bb7,	// (0x0001f44e) list_double_heading_pane_t2_ParamLimits

0x4bb7,	// (0x0001f44e) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00029edf) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00029edf) list_double_heading_pane_t

0x4d7b,	// (0x0001f612) list_double_graphic_heading_pane_g1_ParamLimits

0x4d7b,	// (0x0001f612) list_double_graphic_heading_pane_g1

0x4d48,	// (0x0001f5df) list_double_graphic_heading_pane_g2_ParamLimits

0x4d48,	// (0x0001f5df) list_double_graphic_heading_pane_g2

0x4d59,	// (0x0001f5f0) list_double_graphic_heading_pane_g3_ParamLimits

0x4d59,	// (0x0001f5f0) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00029ee4) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00029ee4) list_double_graphic_heading_pane_g

0x4d87,	// (0x0001f61e) list_double_graphic_heading_pane_t1_ParamLimits

0x4d87,	// (0x0001f61e) list_double_graphic_heading_pane_t1

0x4c8c,	// (0x0001f523) list_double_graphic_heading_pane_t2_ParamLimits

0x4c8c,	// (0x0001f523) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00029eeb) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00029eeb) list_double_graphic_heading_pane_t

0x4cb1,	// (0x0001f548) list_double_time_pane_g1_ParamLimits

0x4cb1,	// (0x0001f548) list_double_time_pane_g1

0x4b50,	// (0x0001f3e7) list_double_time_pane_g2_ParamLimits

0x4b50,	// (0x0001f3e7) list_double_time_pane_g2

0x0001,

0xf659,	// (0x00029ef0) list_double_time_pane_g_ParamLimits

0xf659,	// (0x00029ef0) list_double_time_pane_g

0x4d9d,	// (0x0001f634) list_double_time_pane_t1_ParamLimits

0x4d9d,	// (0x0001f634) list_double_time_pane_t1

0x4db3,	// (0x0001f64a) list_double_time_pane_t2_ParamLimits

0x4db3,	// (0x0001f64a) list_double_time_pane_t2

0x4dc5,	// (0x0001f65c) list_double_time_pane_t3_ParamLimits

0x4dc5,	// (0x0001f65c) list_double_time_pane_t3

0x4dd7,	// (0x0001f66e) list_double_time_pane_t4_ParamLimits

0x4dd7,	// (0x0001f66e) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00029ef5) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00029ef5) list_double_time_pane_t

0x4c6a,	// (0x0001f501) list_setting_pane_g1_ParamLimits

0x4c6a,	// (0x0001f501) list_setting_pane_g1

0x4b95,	// (0x0001f42c) list_setting_pane_g2_ParamLimits

0x4b95,	// (0x0001f42c) list_setting_pane_g2

0x0001,

0xf667,	// (0x00029efe) list_setting_pane_g_ParamLimits

0xf667,	// (0x00029efe) list_setting_pane_g

0x4de9,	// (0x0001f680) list_setting_pane_t1_ParamLimits

0x4de9,	// (0x0001f680) list_setting_pane_t1

0x4e03,	// (0x0001f69a) list_setting_pane_t2_ParamLimits

0x4e03,	// (0x0001f69a) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00029f03) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00029f03) list_setting_pane_t

0x4e42,	// (0x0001f6d9) set_value_pane_cp_ParamLimits

0x4e42,	// (0x0001f6d9) set_value_pane_cp

0x4e4e,	// (0x0001f6e5) list_setting_number_pane_g1_ParamLimits

0x4e4e,	// (0x0001f6e5) list_setting_number_pane_g1

0x4e5a,	// (0x0001f6f1) list_setting_number_pane_g2_ParamLimits

0x4e5a,	// (0x0001f6f1) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x00029f0a) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x00029f0a) list_setting_number_pane_g

0x4e66,	// (0x0001f6fd) list_setting_number_pane_t1_ParamLimits

0x4e66,	// (0x0001f6fd) list_setting_number_pane_t1

0x4e7f,	// (0x0001f716) list_setting_number_pane_t2_ParamLimits

0x4e7f,	// (0x0001f716) list_setting_number_pane_t2

0x4e99,	// (0x0001f730) list_setting_number_pane_t3_ParamLimits

0x4e99,	// (0x0001f730) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x00029f0f) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x00029f0f) list_setting_number_pane_t

0x4e42,	// (0x0001f6d9) set_value_pane_ParamLimits

0x4e42,	// (0x0001f6d9) set_value_pane

0x85c8,	// (0x00022e5f) bg_set_opt_pane_ParamLimits

0x85c8,	// (0x00022e5f) bg_set_opt_pane

0x4edc,	// (0x0001f773) set_value_pane_t1

0x85e9,	// (0x00022e80) slider_set_pane_cp3

0x85f2,	// (0x00022e89) volume_small_pane_cp

0x85fb,	// (0x00022e92) list_form_gen_pane

0x8604,	// (0x00022e9b) scroll_pane_cp8

0x4ef2,	// (0x0001f789) form_field_data_pane_ParamLimits

0x4ef2,	// (0x0001f789) form_field_data_pane

0x4f12,	// (0x0001f7a9) form_field_data_wide_pane_ParamLimits

0x4f12,	// (0x0001f7a9) form_field_data_wide_pane

0x4f33,	// (0x0001f7ca) form_field_popup_pane_ParamLimits

0x4f33,	// (0x0001f7ca) form_field_popup_pane

0x4f53,	// (0x0001f7ea) form_field_popup_wide_pane_ParamLimits

0x4f53,	// (0x0001f7ea) form_field_popup_wide_pane

0x4f70,	// (0x0001f807) form_field_slider_pane_ParamLimits

0x4f70,	// (0x0001f807) form_field_slider_pane

0x4f83,	// (0x0001f81a) form_field_slider_wide_pane_ParamLimits

0x4f83,	// (0x0001f81a) form_field_slider_wide_pane

0x8615,	// (0x00022eac) data_form_pane

0x4fa0,	// (0x0001f837) form_field_data_pane_t1

0x8621,	// (0x00022eb8) input_focus_pane

0x4fb8,	// (0x0001f84f) data_form_wide_pane

0x4fd5,	// (0x0001f86c) form_field_data_wide_pane_t1

0x8392,	// (0x00022c29) input_focus_pane_cp6

0x4ff7,	// (0x0001f88e) form_field_popup_pane_t1

0x8621,	// (0x00022eb8) input_focus_pane_cp7

0x864f,	// (0x00022ee6) list_form_pane

0x5017,	// (0x0001f8ae) form_field_popup_wide_pane_t1

0x8621,	// (0x00022eb8) input_focus_pane_cp8

0x865b,	// (0x00022ef2) list_form_wide_pane

0x5034,	// (0x0001f8cb) form_field_slider_pane_t1_ParamLimits

0x5034,	// (0x0001f8cb) form_field_slider_pane_t1

0x504a,	// (0x0001f8e1) form_field_slider_pane_t2_ParamLimits

0x504a,	// (0x0001f8e1) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x00029f1f) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x00029f1f) form_field_slider_pane_t

0x8030,	// (0x000228c7) input_focus_pane_cp9_ParamLimits

0x8030,	// (0x000228c7) input_focus_pane_cp9

0x505f,	// (0x0001f8f6) slider_cont_pane_ParamLimits

0x505f,	// (0x0001f8f6) slider_cont_pane

0x866a,	// (0x00022f01) form_field_slider_wide_pane_t1_ParamLimits

0x866a,	// (0x00022f01) form_field_slider_wide_pane_t1

0x5073,	// (0x0001f90a) form_field_slider_wide_pane_t2_ParamLimits

0x5073,	// (0x0001f90a) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x00029f24) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x00029f24) form_field_slider_wide_pane_t

0x8030,	// (0x000228c7) input_focus_pane_cp10_ParamLimits

0x8030,	// (0x000228c7) input_focus_pane_cp10

0x5085,	// (0x0001f91c) slider_cont_pane_cp1_ParamLimits

0x5085,	// (0x0001f91c) slider_cont_pane_cp1

0x5099,	// (0x0001f930) slider_form_pane_cp

0x867c,	// (0x00022f13) input_focus_pane_g1

0x8684,	// (0x00022f1b) input_focus_pane_g2

0x868c,	// (0x00022f23) input_focus_pane_g3

0x8694,	// (0x00022f2b) input_focus_pane_g4

0x869c,	// (0x00022f33) input_focus_pane_g5

0x86a4,	// (0x00022f3b) input_focus_pane_g6

0x86ac,	// (0x00022f43) input_focus_pane_g7

0x86b4,	// (0x00022f4b) input_focus_pane_g8

0x86bc,	// (0x00022f53) input_focus_pane_g9

0x7ccb,	// (0x00022562) input_focus_pane_g10

0x0009,

0xf692,	// (0x00029f29) input_focus_pane_g

0xa10d,	// (0x000249a4) wait_border_pane_g3_copy1

0x50a1,	// (0x0001f938) data_form_pane_t1

0x7ccb,	// (0x00022562) wait_anim_pane_g1_copy1

0x5398,	// (0x0001fc2f) data_form_wide_pane_t1

0x50bc,	// (0x0001f953) list_form_graphic_pane_cp_ParamLimits

0x50bc,	// (0x0001f953) list_form_graphic_pane_cp

0xb06c,	// (0x00025903) slider_form_pane_g1

0xb075,	// (0x0002590c) slider_form_pane_g2

0x0006,

0xf98e,	// (0x0002a225) slider_form_pane_g

0x50d5,	// (0x0001f96c) list_form_graphic_pane_ParamLimits

0x50d5,	// (0x0001f96c) list_form_graphic_pane

0x50f1,	// (0x0001f988) list_form_graphic_pane_g1

0x50f9,	// (0x0001f990) list_form_graphic_pane_t1_ParamLimits

0x50f9,	// (0x0001f990) list_form_graphic_pane_t1

0x7db5,	// (0x0002264c) list_highlight_pane_cp5_ParamLimits

0x7db5,	// (0x0002264c) list_highlight_pane_cp5

0x510e,	// (0x0001f9a5) find_pane_g1

0x86c4,	// (0x00022f5b) input_find_pane

0x5117,	// (0x0001f9ae) input_find_pane_g1_ParamLimits

0x5117,	// (0x0001f9ae) input_find_pane_g1

0x5123,	// (0x0001f9ba) input_find_pane_t1_ParamLimits

0x5123,	// (0x0001f9ba) input_find_pane_t1

0x5138,	// (0x0001f9cf) input_find_pane_t2_ParamLimits

0x5138,	// (0x0001f9cf) input_find_pane_t2

0x0001,

0xf6a7,	// (0x00029f3e) input_find_pane_t_ParamLimits

0xf6a7,	// (0x00029f3e) input_find_pane_t

0x86cd,	// (0x00022f64) input_focus_pane_cp5_ParamLimits

0x86cd,	// (0x00022f64) input_focus_pane_cp5

0x86e7,	// (0x00022f7e) bg_popup_window_pane_cp2_ParamLimits

0x86e7,	// (0x00022f7e) bg_popup_window_pane_cp2

0x86f4,	// (0x00022f8b) listscroll_menu_pane_ParamLimits

0x86f4,	// (0x00022f8b) listscroll_menu_pane

0x8700,	// (0x00022f97) popup_submenu_window_ParamLimits

0x8700,	// (0x00022f97) popup_submenu_window

0x872c,	// (0x00022fc3) find_popup_pane_g1

0x8734,	// (0x00022fcb) input_popup_find_pane_cp

0x86cd,	// (0x00022f64) input_focus_pane_cp4_ParamLimits

0x86cd,	// (0x00022f64) input_focus_pane_cp4

0x874a,	// (0x00022fe1) input_popup_find_pane_t1_ParamLimits

0x874a,	// (0x00022fe1) input_popup_find_pane_t1

0x7cd5,	// (0x0002256c) bg_popup_sub_pane_cp

0x8778,	// (0x0002300f) listscroll_popup_sub_pane

0x8780,	// (0x00023017) list_submenu_pane_ParamLimits

0x8780,	// (0x00023017) list_submenu_pane

0x8791,	// (0x00023028) scroll_pane_cp4

0x8799,	// (0x00023030) list_single_popup_submenu_pane_ParamLimits

0x8799,	// (0x00023030) list_single_popup_submenu_pane

0x87ad,	// (0x00023044) list_single_popup_submenu_pane_g1

0x87b5,	// (0x0002304c) list_single_popup_submenu_pane_t1_ParamLimits

0x87b5,	// (0x0002304c) list_single_popup_submenu_pane_t1

0x7db5,	// (0x0002264c) bg_active_tab_pane_cp1_ParamLimits

0x7db5,	// (0x0002264c) bg_active_tab_pane_cp1

0x87ca,	// (0x00023061) tabs_2_active_pane_g1

0x87d2,	// (0x00023069) tabs_2_active_pane_t1

0x7db5,	// (0x0002264c) bg_passive_tab_pane_cp1_ParamLimits

0x7db5,	// (0x0002264c) bg_passive_tab_pane_cp1

0x87ca,	// (0x00023061) tabs_2_passive_pane_g1

0x87d2,	// (0x00023069) tabs_2_passive_pane_t1

0x87e4,	// (0x0002307b) bg_active_tab_pane_cp4

0x87f2,	// (0x00023089) tabs_2_long_active_pane_t1

0x8805,	// (0x0002309c) bg_passive_tab_pane_cp4

0x6b71,	// (0x00021408) list_single_midp_graphic_pane_g4_ParamLimits

0x87e4,	// (0x0002307b) bg_active_tab_pane_cp5

0x8811,	// (0x000230a8) tabs_3_long_active_pane_t1

0x8805,	// (0x0002309c) bg_passive_tab_pane_cp5

0x6b71,	// (0x00021408) list_single_midp_graphic_pane_g4

0x7db5,	// (0x0002264c) bg_popup_window_pane_cp13_ParamLimits

0x7db5,	// (0x0002264c) bg_popup_window_pane_cp13

0x882c,	// (0x000230c3) listscroll_popup_fast_pane_ParamLimits

0x882c,	// (0x000230c3) listscroll_popup_fast_pane

0x883b,	// (0x000230d2) grid_popup_fast_pane_ParamLimits

0x883b,	// (0x000230d2) grid_popup_fast_pane

0x884d,	// (0x000230e4) scroll_pane_cp9_ParamLimits

0x884d,	// (0x000230e4) scroll_pane_cp9

0xc964,	// (0x000271fb) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc964,	// (0x000271fb) list_single_graphic_hl_pane_t1_cp2

0x8871,	// (0x00023108) input_focus_pane_cp20_ParamLimits

0x8871,	// (0x00023108) input_focus_pane_cp20

0x887f,	// (0x00023116) query_popup_data_pane_t1_ParamLimits

0x887f,	// (0x00023116) query_popup_data_pane_t1

0x8892,	// (0x00023129) query_popup_data_pane_t2_ParamLimits

0x8892,	// (0x00023129) query_popup_data_pane_t2

0x88d8,	// (0x0002316f) query_popup_data_pane_t3_ParamLimits

0x88d8,	// (0x0002316f) query_popup_data_pane_t3

0x8919,	// (0x000231b0) query_popup_data_pane_t4_ParamLimits

0x8919,	// (0x000231b0) query_popup_data_pane_t4

0x8955,	// (0x000231ec) query_popup_data_pane_t5_ParamLimits

0x8955,	// (0x000231ec) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x00029f43) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x00029f43) query_popup_data_pane_t

0x867c,	// (0x00022f13) bg_set_opt_pane_g1

0x8684,	// (0x00022f1b) bg_set_opt_pane_g2

0x868c,	// (0x00022f23) bg_set_opt_pane_g3

0x8694,	// (0x00022f2b) bg_set_opt_pane_g4

0x869c,	// (0x00022f33) bg_set_opt_pane_g5

0x86a4,	// (0x00022f3b) bg_set_opt_pane_g6

0x86ac,	// (0x00022f43) bg_set_opt_pane_g7

0x86b4,	// (0x00022f4b) bg_set_opt_pane_g8

0x86bc,	// (0x00022f53) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x00029f4e) bg_set_opt_pane_g

0x6223,	// (0x00020aba) control_top_pane_stacon_ParamLimits

0x6223,	// (0x00020aba) control_top_pane_stacon

0x6276,	// (0x00020b0d) signal_pane_stacon_ParamLimits

0x6276,	// (0x00020b0d) signal_pane_stacon

0x8f41,	// (0x000237d8) stacon_top_pane_g1_ParamLimits

0x8f41,	// (0x000237d8) stacon_top_pane_g1

0x629b,	// (0x00020b32) title_pane_stacon_ParamLimits

0x629b,	// (0x00020b32) title_pane_stacon

0x62c5,	// (0x00020b5c) uni_indicator_pane_stacon_ParamLimits

0x62c5,	// (0x00020b5c) uni_indicator_pane_stacon

0x62da,	// (0x00020b71) battery_pane_stacon_ParamLimits

0x62da,	// (0x00020b71) battery_pane_stacon

0x631e,	// (0x00020bb5) control_bottom_pane_stacon_ParamLimits

0x631e,	// (0x00020bb5) control_bottom_pane_stacon

0x6341,	// (0x00020bd8) navi_pane_stacon_ParamLimits

0x6341,	// (0x00020bd8) navi_pane_stacon

0x8f63,	// (0x000237fa) stacon_bottom_pane_g1_ParamLimits

0x8f63,	// (0x000237fa) stacon_bottom_pane_g1

0x5f86,	// (0x0002081d) aid_levels_signal_lsc_ParamLimits

0x5f86,	// (0x0002081d) aid_levels_signal_lsc

0x5f9c,	// (0x00020833) signal_pane_stacon_g1_ParamLimits

0x5f9c,	// (0x00020833) signal_pane_stacon_g1

0x5fb0,	// (0x00020847) signal_pane_stacon_g2_ParamLimits

0x5fb0,	// (0x00020847) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00029f61) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00029f61) signal_pane_stacon_g

0x5fe5,	// (0x0002087c) title_pane_stacon_t1_ParamLimits

0x5fe5,	// (0x0002087c) title_pane_stacon_t1

0x8999,	// (0x00023230) uni_indicator_pane_stacon_g1

0x89a3,	// (0x0002323a) uni_indicator_pane_stacon_g2

0x89ad,	// (0x00023244) uni_indicator_pane_stacon_g3

0x89b7,	// (0x0002324e) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x00029f6d) uni_indicator_pane_stacon_g

0x600a,	// (0x000208a1) control_top_pane_stacon_g1

0x6012,	// (0x000208a9) control_top_pane_stacon_t1_ParamLimits

0x6012,	// (0x000208a9) control_top_pane_stacon_t1

0x6049,	// (0x000208e0) aid_levels_battery_lsc_ParamLimits

0x6049,	// (0x000208e0) aid_levels_battery_lsc

0x6060,	// (0x000208f7) battery_pane_stacon_g1_ParamLimits

0x6060,	// (0x000208f7) battery_pane_stacon_g1

0x6073,	// (0x0002090a) battery_pane_stacon_g2_ParamLimits

0x6073,	// (0x0002090a) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x00029f76) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x00029f76) battery_pane_stacon_g

0x60b1,	// (0x00020948) navi_icon_pane_stacon

0x60c5,	// (0x0002095c) navi_navi_pane_stacon

0x60b1,	// (0x00020948) navi_text_pane_stacon

0x600a,	// (0x000208a1) control_bottom_pane_stacon_g1

0x60d9,	// (0x00020970) control_bottom_pane_stacon_t1_ParamLimits

0x60d9,	// (0x00020970) control_bottom_pane_stacon_t1

0x89db,	// (0x00023272) grid_app_pane_ParamLimits

0x89db,	// (0x00023272) grid_app_pane

0x89ff,	// (0x00023296) scroll_pane_cp15_ParamLimits

0x89ff,	// (0x00023296) scroll_pane_cp15

0x8a12,	// (0x000232a9) cell_app_pane_ParamLimits

0x8a12,	// (0x000232a9) cell_app_pane

0x8a36,	// (0x000232cd) cell_app_pane_g1_ParamLimits

0x8a36,	// (0x000232cd) cell_app_pane_g1

0x8a56,	// (0x000232ed) cell_app_pane_g2_ParamLimits

0x8a56,	// (0x000232ed) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x00029f7b) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x00029f7b) cell_app_pane_g

0x8a62,	// (0x000232f9) cell_app_pane_t1_ParamLimits

0x8a62,	// (0x000232f9) cell_app_pane_t1

0x8a79,	// (0x00023310) grid_highlight_pane_ParamLimits

0x8a79,	// (0x00023310) grid_highlight_pane

0x867c,	// (0x00022f13) cell_highlight_pane_g1

0x8684,	// (0x00022f1b) cell_highlight_pane_g2

0x868c,	// (0x00022f23) cell_highlight_pane_g3

0x8694,	// (0x00022f2b) cell_highlight_pane_g4

0x869c,	// (0x00022f33) cell_highlight_pane_g5

0x86a4,	// (0x00022f3b) cell_highlight_pane_g6

0x86ac,	// (0x00022f43) cell_highlight_pane_g7

0x86b4,	// (0x00022f4b) cell_highlight_pane_g8

0x86bc,	// (0x00022f53) cell_highlight_pane_g9

0x7ccb,	// (0x00022562) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x00029f29) cell_highlight_pane_g

0x8a8a,	// (0x00023321) bg_scroll_pane

0x6123,	// (0x000209ba) scroll_handle_pane

0x8ad1,	// (0x00023368) scroll_bg_pane_g1

0x8ae6,	// (0x0002337d) scroll_bg_pane_g2

0x8afe,	// (0x00023395) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x00029f80) scroll_bg_pane_g

0x8b13,	// (0x000233aa) scroll_handle_focus_pane_ParamLimits

0x8b13,	// (0x000233aa) scroll_handle_focus_pane

0x8ad1,	// (0x00023368) scroll_handle_pane_g1

0x8b20,	// (0x000233b7) scroll_handle_pane_g2

0x8afe,	// (0x00023395) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x00029f87) scroll_handle_pane_g

0x86cd,	// (0x00022f64) bg_popup_sub_pane_cp21_ParamLimits

0x86cd,	// (0x00022f64) bg_popup_sub_pane_cp21

0x8b34,	// (0x000233cb) popup_fep_japan_predictive_window_t1_ParamLimits

0x8b34,	// (0x000233cb) popup_fep_japan_predictive_window_t1

0x8b4e,	// (0x000233e5) popup_fep_japan_predictive_window_t2_ParamLimits

0x8b4e,	// (0x000233e5) popup_fep_japan_predictive_window_t2

0x8b81,	// (0x00023418) popup_fep_japan_predictive_window_t3_ParamLimits

0x8b81,	// (0x00023418) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x00029f8e) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x00029f8e) popup_fep_japan_predictive_window_t

0x7cd5,	// (0x0002256c) bg_popup_sub_pane_cp23

0x8bb8,	// (0x0002344f) listscroll_japin_cand_pane

0x8bc0,	// (0x00023457) popup_fep_japan_candidate_window_t1

0x8bce,	// (0x00023465) candidate_pane_ParamLimits

0x8bce,	// (0x00023465) candidate_pane

0x8be0,	// (0x00023477) scroll_pane_cp30

0x8be8,	// (0x0002347f) list_single_popup_jap_candidate_pane_ParamLimits

0x8be8,	// (0x0002347f) list_single_popup_jap_candidate_pane

0x7cd5,	// (0x0002256c) list_highlight_pane_cp30

0x8bfd,	// (0x00023494) list_single_popup_jap_candidate_pane_t1

0x8c0c,	// (0x000234a3) level_1_signal

0x8c1e,	// (0x000234b5) level_2_signal

0x8c31,	// (0x000234c8) level_3_signal

0x8c44,	// (0x000234db) level_4_signal

0x8c57,	// (0x000234ee) level_5_signal

0x8c6a,	// (0x00023501) level_6_signal

0x8c7d,	// (0x00023514) level_7_signal

0x8c0c,	// (0x000234a3) level_1_battery

0x8c1e,	// (0x000234b5) level_2_battery

0x8c31,	// (0x000234c8) level_3_battery

0x8c44,	// (0x000234db) level_4_battery

0x8c57,	// (0x000234ee) level_5_battery

0x8c6a,	// (0x00023501) level_6_battery

0x8c7d,	// (0x00023514) level_7_battery

0x8ca8,	// (0x0002353f) list_menu_pane_ParamLimits

0x8ca8,	// (0x0002353f) list_menu_pane

0x8cbe,	// (0x00023555) scroll_pane_cp25_ParamLimits

0x8cbe,	// (0x00023555) scroll_pane_cp25

0x8cd7,	// (0x0002356e) list_double2_graphic_pane_cp2_ParamLimits

0x8cd7,	// (0x0002356e) list_double2_graphic_pane_cp2

0x8cd7,	// (0x0002356e) list_double2_large_graphic_pane_cp2_ParamLimits

0x8cd7,	// (0x0002356e) list_double2_large_graphic_pane_cp2

0x8cd7,	// (0x0002356e) list_double2_pane_cp2_ParamLimits

0x8cd7,	// (0x0002356e) list_double2_pane_cp2

0x8cd7,	// (0x0002356e) list_double_graphic_pane_cp2_ParamLimits

0x8cd7,	// (0x0002356e) list_double_graphic_pane_cp2

0x8cd7,	// (0x0002356e) list_double_large_graphic_pane_cp2_ParamLimits

0x8cd7,	// (0x0002356e) list_double_large_graphic_pane_cp2

0x8cd7,	// (0x0002356e) list_double_number_pane_cp2_ParamLimits

0x8cd7,	// (0x0002356e) list_double_number_pane_cp2

0x8cd7,	// (0x0002356e) list_double_pane_cp2_ParamLimits

0x8cd7,	// (0x0002356e) list_double_pane_cp2

0x8cfb,	// (0x00023592) list_single_2graphic_pane_cp2_ParamLimits

0x8cfb,	// (0x00023592) list_single_2graphic_pane_cp2

0x8cfb,	// (0x00023592) list_single_graphic_heading_pane_cp2_ParamLimits

0x8cfb,	// (0x00023592) list_single_graphic_heading_pane_cp2

0x8cfb,	// (0x00023592) list_single_graphic_pane_cp2_ParamLimits

0x8cfb,	// (0x00023592) list_single_graphic_pane_cp2

0x8cfb,	// (0x00023592) list_single_heading_pane_cp2_ParamLimits

0x8cfb,	// (0x00023592) list_single_heading_pane_cp2

0x8d14,	// (0x000235ab) list_single_large_graphic_pane_cp2_ParamLimits

0x8d14,	// (0x000235ab) list_single_large_graphic_pane_cp2

0x8cfb,	// (0x00023592) list_single_number_heading_pane_cp2_ParamLimits

0x8cfb,	// (0x00023592) list_single_number_heading_pane_cp2

0x8cfb,	// (0x00023592) list_single_number_pane_cp2_ParamLimits

0x8cfb,	// (0x00023592) list_single_number_pane_cp2

0x8cfb,	// (0x00023592) list_single_pane_cp2_ParamLimits

0x8cfb,	// (0x00023592) list_single_pane_cp2

0x8d90,	// (0x00023627) bg_popup_sub_pane_cp22

0x61d5,	// (0x00020a6c) popup_side_volume_key_window_g1

0x61ff,	// (0x00020a96) popup_side_volume_key_window_t1

0x621b,	// (0x00020ab2) volume_small_pane_cp1

0x8030,	// (0x000228c7) bg_popup_sub_pane_cp24_ParamLimits

0x8030,	// (0x000228c7) bg_popup_sub_pane_cp24

0x8da6,	// (0x0002363d) fep_china_uni_candidate_pane_ParamLimits

0x8da6,	// (0x0002363d) fep_china_uni_candidate_pane

0x8dba,	// (0x00023651) fep_china_uni_entry_pane

0x8dca,	// (0x00023661) popup_fep_china_uni_window_g1

0x8de6,	// (0x0002367d) fep_china_uni_entry_pane_g1

0x8dee,	// (0x00023685) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x00029fbf) fep_china_uni_entry_pane_g

0x8df6,	// (0x0002368d) fep_entry_item_pane

0x8e00,	// (0x00023697) fep_candidate_item_pane

0x8e08,	// (0x0002369f) fep_china_uni_candidate_pane_g1

0x8e10,	// (0x000236a7) fep_china_uni_candidate_pane_g2

0x8e18,	// (0x000236af) fep_china_uni_candidate_pane_g3

0x8e20,	// (0x000236b7) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x00029fc4) fep_china_uni_candidate_pane_g

0x7ccb,	// (0x00022562) fep_entry_item_pane_g1

0x8e28,	// (0x000236bf) fep_entry_item_pane_t1_ParamLimits

0x8e28,	// (0x000236bf) fep_entry_item_pane_t1

0x8e3e,	// (0x000236d5) fep_candidate_item_pane_t1_ParamLimits

0x8e3e,	// (0x000236d5) fep_candidate_item_pane_t1

0x8e53,	// (0x000236ea) fep_candidate_item_pane_t2_ParamLimits

0x8e53,	// (0x000236ea) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x00029fcd) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x00029fcd) fep_candidate_item_pane_t

0x7db5,	// (0x0002264c) list_highlight_pane_cp31_ParamLimits

0x7db5,	// (0x0002264c) list_highlight_pane_cp31

0x8e65,	// (0x000236fc) level_1_signal_lsc

0x8e6e,	// (0x00023705) level_2_signal_lsc

0x8e77,	// (0x0002370e) level_3_signal_lsc

0x8e80,	// (0x00023717) level_4_signal_lsc

0x8e89,	// (0x00023720) level_5_signal_lsc

0x8e92,	// (0x00023729) level_6_signal_lsc

0x8e9b,	// (0x00023732) level_7_signal_lsc

0x8e9b,	// (0x00023732) level_1_battery_lsc

0x8ea4,	// (0x0002373b) level_2_battery_lsc

0x8ead,	// (0x00023744) level_3_battery_lsc

0x8eb6,	// (0x0002374d) level_4_battery_lsc

0x8ebf,	// (0x00023756) level_5_battery_lsc

0x8ec8,	// (0x0002375f) level_6_battery_lsc

0x8e65,	// (0x000236fc) level_7_battery_lsc

0x8ed1,	// (0x00023768) scroll_handle_focus_pane_g1

0x8eda,	// (0x00023771) scroll_handle_focus_pane_g2

0x8ee3,	// (0x0002377a) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x00029fd2) scroll_handle_focus_pane_g

0x514d,	// (0x0001f9e4) list_single_2graphic_pane_g1_ParamLimits

0x514d,	// (0x0001f9e4) list_single_2graphic_pane_g1

0x4adf,	// (0x0001f376) list_single_2graphic_pane_g2_ParamLimits

0x4adf,	// (0x0001f376) list_single_2graphic_pane_g2

0x4a65,	// (0x0001f2fc) list_single_2graphic_pane_g3_ParamLimits

0x4a65,	// (0x0001f2fc) list_single_2graphic_pane_g3

0x5159,	// (0x0001f9f0) list_single_2graphic_pane_g4_ParamLimits

0x5159,	// (0x0001f9f0) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x00029fd9) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x00029fd9) list_single_2graphic_pane_g

0x5165,	// (0x0001f9fc) list_single_2graphic_pane_t1_ParamLimits

0x5165,	// (0x0001f9fc) list_single_2graphic_pane_t1

0x5193,	// (0x0001fa2a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5193,	// (0x0001fa2a) list_double2_graphic_large_graphic_pane_g1

0x4b84,	// (0x0001f41b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4b84,	// (0x0001f41b) list_double2_graphic_large_graphic_pane_g2

0x4b95,	// (0x0001f42c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4b95,	// (0x0001f42c) list_double2_graphic_large_graphic_pane_g3

0x51a3,	// (0x0001fa3a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x51a3,	// (0x0001fa3a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x00029fe2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x00029fe2) list_double2_graphic_large_graphic_pane_g

0x51af,	// (0x0001fa46) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x51af,	// (0x0001fa46) list_double2_graphic_large_graphic_pane_t1

0x51c5,	// (0x0001fa5c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x51c5,	// (0x0001fa5c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x00029feb) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x00029feb) list_double2_graphic_large_graphic_pane_t

0x902b,	// (0x000238c2) popup_fast_swap_window_ParamLimits

0x902b,	// (0x000238c2) popup_fast_swap_window

0x9047,	// (0x000238de) popup_side_volume_key_window

0x9063,	// (0x000238fa) stacon_top_pane

0x906d,	// (0x00023904) status_pane_ParamLimits

0x906d,	// (0x00023904) status_pane

0x9063,	// (0x000238fa) status_small_pane

0x7cd5,	// (0x0002256c) control_pane

0x7cd5,	// (0x0002256c) stacon_bottom_pane

0x8604,	// (0x00022e9b) scroll_pane_cp121

0x85fb,	// (0x00022e92) set_content_pane

0x8eec,	// (0x00023783) bg_active_tab_pane_g1_cp1

0x8ef5,	// (0x0002378c) bg_active_tab_pane_g2_cp1

0x8efe,	// (0x00023795) bg_active_tab_pane_g3_cp1

0x8eec,	// (0x00023783) bg_passive_tab_pane_g1_cp1

0x8ef5,	// (0x0002378c) bg_passive_tab_pane_g2_cp1

0x8efe,	// (0x00023795) bg_passive_tab_pane_g3_cp1

0x8f07,	// (0x0002379e) bg_active_tab_pane_g1_cp2

0x8ef5,	// (0x0002378c) bg_active_tab_pane_g2_cp2

0x8f10,	// (0x000237a7) bg_active_tab_pane_g3_cp2

0x8f07,	// (0x0002379e) bg_passive_tab_pane_g1_cp2

0x8ef5,	// (0x0002378c) bg_passive_tab_pane_g2_cp2

0x8f10,	// (0x000237a7) bg_passive_tab_pane_g3_cp2

0x8f19,	// (0x000237b0) bg_active_tab_pane_g1_cp3

0x8ef5,	// (0x0002378c) bg_active_tab_pane_g2_cp3

0x8f22,	// (0x000237b9) bg_active_tab_pane_g3_cp3

0x8f19,	// (0x000237b0) bg_passive_tab_pane_g1_cp3

0x8ef5,	// (0x0002378c) bg_passive_tab_pane_g2_cp3

0x8f22,	// (0x000237b9) bg_passive_tab_pane_g3_cp3

0x8f2b,	// (0x000237c2) bg_active_tab_pane_g1_cp4

0x8ef5,	// (0x0002378c) bg_active_tab_pane_g2_cp4

0x8f36,	// (0x000237cd) bg_active_tab_pane_g3_cp4

0x8f2b,	// (0x000237c2) bg_passive_tab_pane_g1_cp4

0x8ef5,	// (0x0002378c) bg_passive_tab_pane_g2_cp4

0x8f36,	// (0x000237cd) bg_passive_tab_pane_g3_cp4

0x8f7f,	// (0x00023816) bg_active_tab_pane_g1_cp5

0x8ef5,	// (0x0002378c) bg_active_tab_pane_g2_cp5

0x8f88,	// (0x0002381f) bg_active_tab_pane_g3_cp5

0x8f7f,	// (0x00023816) bg_passive_tab_pane_g1_cp5

0x8ef5,	// (0x0002378c) bg_passive_tab_pane_g2_cp5

0x8f88,	// (0x0002381f) bg_passive_tab_pane_g3_cp5

0x8f91,	// (0x00023828) list_set_graphic_pane_ParamLimits

0x8f91,	// (0x00023828) list_set_graphic_pane

0x7cd5,	// (0x0002256c) bg_set_opt_pane_cp4

0x8fae,	// (0x00023845) list_set_graphic_pane_g1_ParamLimits

0x8fae,	// (0x00023845) list_set_graphic_pane_g1

0x8fba,	// (0x00023851) list_set_graphic_pane_g2_ParamLimits

0x8fba,	// (0x00023851) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x00029ff0) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x00029ff0) list_set_graphic_pane_g

0x0009,

0xfac5,	// (0x0002a35c) volume_small_pane_cp_g

0x8fde,	// (0x00023875) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8fde,	// (0x00023875) list_double2_large_graphic_pane_g1_cp2

0x8fea,	// (0x00023881) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8fea,	// (0x00023881) list_double2_large_graphic_pane_g2_cp2

0x8ffb,	// (0x00023892) list_double2_large_graphic_pane_g3_cp2

0x9003,	// (0x0002389a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9003,	// (0x0002389a) list_double2_large_graphic_pane_t1_cp2

0x9019,	// (0x000238b0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9019,	// (0x000238b0) list_double2_large_graphic_pane_t2_cp2

0xabe0,	// (0x00025477) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xabe0,	// (0x00025477) list_double_large_graphic_pane_g1_cp2

0xabf1,	// (0x00025488) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xabf1,	// (0x00025488) list_double_large_graphic_pane_g2_cp2

0x9189,	// (0x00023a20) list_double_large_graphic_pane_g3_cp2

0xac02,	// (0x00025499) list_double_large_graphic_pane_g4_cp

0xac0a,	// (0x000254a1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xac0a,	// (0x000254a1) list_double_large_graphic_pane_t1_cp2

0xac21,	// (0x000254b8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac21,	// (0x000254b8) list_double_large_graphic_pane_t2_cp2

0x907b,	// (0x00023912) list_double2_graphic_pane_g1_cp2_ParamLimits

0x907b,	// (0x00023912) list_double2_graphic_pane_g1_cp2

0x9089,	// (0x00023920) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9089,	// (0x00023920) list_double2_graphic_pane_g2_cp2

0x909a,	// (0x00023931) list_double2_graphic_pane_g3_cp2

0x90a4,	// (0x0002393b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x90a4,	// (0x0002393b) list_double2_graphic_pane_t1_cp2

0x90ba,	// (0x00023951) list_double2_graphic_pane_t2_cp2_ParamLimits

0x90ba,	// (0x00023951) list_double2_graphic_pane_t2_cp2

0x90cc,	// (0x00023963) list_single_number_heading_pane_g1_cp2_ParamLimits

0x90cc,	// (0x00023963) list_single_number_heading_pane_g1_cp2

0x90d8,	// (0x0002396f) list_single_number_heading_pane_g2_cp2

0x90e0,	// (0x00023977) list_single_number_heading_pane_t1_cp2_ParamLimits

0x90e0,	// (0x00023977) list_single_number_heading_pane_t1_cp2

0x90f6,	// (0x0002398d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x90f6,	// (0x0002398d) list_single_number_heading_pane_t2_cp2

0x9108,	// (0x0002399f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9108,	// (0x0002399f) list_single_number_heading_pane_t3_cp2

0x90cc,	// (0x00023963) list_single_heading_pane_g1_cp2_ParamLimits

0x90cc,	// (0x00023963) list_single_heading_pane_g1_cp2

0x90d8,	// (0x0002396f) list_single_heading_pane_g2_cp2

0x90e0,	// (0x00023977) list_single_heading_pane_t1_cp2_ParamLimits

0x90e0,	// (0x00023977) list_single_heading_pane_t1_cp2

0xa9e8,	// (0x0002527f) list_single_heading_pane_t2_cp2_ParamLimits

0xa9e8,	// (0x0002527f) list_single_heading_pane_t2_cp2

0xa930,	// (0x000251c7) list_double_graphic_pane_g1_cp2_ParamLimits

0xa930,	// (0x000251c7) list_double_graphic_pane_g1_cp2

0xa93c,	// (0x000251d3) list_double_graphic_pane_g2_cp2_ParamLimits

0xa93c,	// (0x000251d3) list_double_graphic_pane_g2_cp2

0xa94b,	// (0x000251e2) list_double_graphic_pane_g3_cp2

0xa953,	// (0x000251ea) list_double_graphic_pane_t1_cp2_ParamLimits

0xa953,	// (0x000251ea) list_double_graphic_pane_t1_cp2

0xa969,	// (0x00025200) list_double_graphic_pane_t2_cp2_ParamLimits

0xa969,	// (0x00025200) list_double_graphic_pane_t2_cp2

0x917d,	// (0x00023a14) list_double_number_pane_g1_cp2_ParamLimits

0x917d,	// (0x00023a14) list_double_number_pane_g1_cp2

0x9189,	// (0x00023a20) list_double_number_pane_g2_cp2

0xa8f4,	// (0x0002518b) list_double_number_pane_t1_cp2_ParamLimits

0xa8f4,	// (0x0002518b) list_double_number_pane_t1_cp2

0xa908,	// (0x0002519f) list_double_number_pane_t2_cp2_ParamLimits

0xa908,	// (0x0002519f) list_double_number_pane_t2_cp2

0xa91e,	// (0x000251b5) list_double_number_pane_t3_cp2_ParamLimits

0xa91e,	// (0x000251b5) list_double_number_pane_t3_cp2

0xa7dd,	// (0x00025074) list_single_graphic_pane_g1_cp2_ParamLimits

0xa7dd,	// (0x00025074) list_single_graphic_pane_g1_cp2

0x91e1,	// (0x00023a78) list_single_graphic_pane_g2_cp2_ParamLimits

0x91e1,	// (0x00023a78) list_single_graphic_pane_g2_cp2

0x91ed,	// (0x00023a84) list_single_graphic_pane_g3_cp2

0xa7b3,	// (0x0002504a) list_single_graphic_pane_t1_cp2_ParamLimits

0xa7b3,	// (0x0002504a) list_single_graphic_pane_t1_cp2

0x91e1,	// (0x00023a78) list_single_number_pane_g1_cp2_ParamLimits

0x91e1,	// (0x00023a78) list_single_number_pane_g1_cp2

0x91ed,	// (0x00023a84) list_single_number_pane_g2_cp2

0xa7b3,	// (0x0002504a) list_single_number_pane_t1_cp2_ParamLimits

0xa7b3,	// (0x0002504a) list_single_number_pane_t1_cp2

0xa7c9,	// (0x00025060) list_single_number_pane_t2_cp2_ParamLimits

0xa7c9,	// (0x00025060) list_single_number_pane_t2_cp2

0x8fea,	// (0x00023881) list_double2_pane_g1_cp2_ParamLimits

0x8fea,	// (0x00023881) list_double2_pane_g1_cp2

0x8ffb,	// (0x00023892) list_double2_pane_g2_cp2

0x9155,	// (0x000239ec) list_double2_pane_t1_cp2_ParamLimits

0x9155,	// (0x000239ec) list_double2_pane_t1_cp2

0x916b,	// (0x00023a02) list_double2_pane_t2_cp2_ParamLimits

0x916b,	// (0x00023a02) list_double2_pane_t2_cp2

0x917d,	// (0x00023a14) list_double_pane_g1_cp2_ParamLimits

0x917d,	// (0x00023a14) list_double_pane_g1_cp2

0x9189,	// (0x00023a20) list_double_pane_g2_cp2

0x9191,	// (0x00023a28) list_double_pane_t1_cp2_ParamLimits

0x9191,	// (0x00023a28) list_double_pane_t1_cp2

0x91a7,	// (0x00023a3e) list_double_pane_t2_cp2_ParamLimits

0x91a7,	// (0x00023a3e) list_double_pane_t2_cp2

0x91d1,	// (0x00023a68) list_single_pane_cp2_g3

0x91e1,	// (0x00023a78) list_single_pane_g1_cp2_ParamLimits

0x91e1,	// (0x00023a78) list_single_pane_g1_cp2

0x91ed,	// (0x00023a84) list_single_pane_g2_cp2

0x91f5,	// (0x00023a8c) list_single_pane_t1_cp2_ParamLimits

0x91f5,	// (0x00023a8c) list_single_pane_t1_cp2

0x920d,	// (0x00023aa4) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x920d,	// (0x00023aa4) list_single_large_graphic_pane_g1_cp2

0x9219,	// (0x00023ab0) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9219,	// (0x00023ab0) list_single_large_graphic_pane_g2_cp2

0x9225,	// (0x00023abc) list_single_large_graphic_pane_g3_cp2

0x922d,	// (0x00023ac4) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x922d,	// (0x00023ac4) list_single_large_graphic_pane_g4_cp1

0x9247,	// (0x00023ade) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9247,	// (0x00023ade) list_single_large_graphic_pane_t1_cp2

0xa77f,	// (0x00025016) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa77f,	// (0x00025016) list_single_graphic_heading_pane_g1_cp2

0xa74c,	// (0x00024fe3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa74c,	// (0x00024fe3) list_single_graphic_heading_pane_g4_cp2

0x91ed,	// (0x00023a84) list_single_graphic_heading_pane_g5_cp2

0xa78b,	// (0x00025022) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa78b,	// (0x00025022) list_single_graphic_heading_pane_t1_cp2

0xa7a1,	// (0x00025038) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa7a1,	// (0x00025038) list_single_graphic_heading_pane_t2_cp2

0xa740,	// (0x00024fd7) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa740,	// (0x00024fd7) list_single_2graphic_pane_g1_cp2

0xa74c,	// (0x00024fe3) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa74c,	// (0x00024fe3) list_single_2graphic_pane_g2_cp2

0x91ed,	// (0x00023a84) list_single_2graphic_pane_g3_cp2

0xa75d,	// (0x00024ff4) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa75d,	// (0x00024ff4) list_single_2graphic_pane_g4_cp2

0xa769,	// (0x00025000) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa769,	// (0x00025000) list_single_2graphic_pane_t1_cp2

0x7ccb,	// (0x00022562) list_highlight_pane_g10_cp1

0xa318,	// (0x00024baf) list_highlight_pane_g1_cp1

0xa320,	// (0x00024bb7) list_highlight_pane_g2_cp1

0xa328,	// (0x00024bbf) list_highlight_pane_g3_cp1

0xa330,	// (0x00024bc7) list_highlight_pane_g4_cp1

0xa338,	// (0x00024bcf) list_highlight_pane_g5_cp1

0xa340,	// (0x00024bd7) list_highlight_pane_g6_cp1

0xa348,	// (0x00024bdf) list_highlight_pane_g7_cp1

0xa350,	// (0x00024be7) list_highlight_pane_g8_cp1

0xa358,	// (0x00024bef) list_highlight_pane_g9_cp1

0xa238,	// (0x00024acf) form_field_slider_pane_t3

0xa246,	// (0x00024add) form_field_slider_pane_t4

0xa254,	// (0x00024aeb) slider_form_pane_ParamLimits

0xa254,	// (0x00024aeb) slider_form_pane

0x7cd5,	// (0x0002256c) control_abbreviations

0x7cd5,	// (0x0002256c) control_conventions

0x7cd5,	// (0x0002256c) control_definitions

0x7cd5,	// (0x0002256c) format_table_attribute

0xaa32,	// (0x000252c9) bg_popup_preview_window_pane_g9

0x7cd5,	// (0x0002256c) format_table_data2

0x7cd5,	// (0x0002256c) format_table_data3

0x7cd5,	// (0x0002256c) format_table_data_example

0x0008,

0x7cd5,	// (0x0002256c) intro_purpose

0xf8ee,	// (0x0002a185) bg_popup_preview_window_pane_g

0x7cd5,	// (0x0002256c) texts_category

0x7cd5,	// (0x0002256c) texts_graphics

0x925d,	// (0x00023af4) text_digital

0x926c,	// (0x00023b03) text_primary

0x927b,	// (0x00023b12) text_primary_small

0x928a,	// (0x00023b21) text_secondary

0x9299,	// (0x00023b30) text_title

0xb18d,	// (0x00025a24) bg_passive_tab_pane_g1_cp3_srt

0x8ef5,	// (0x0002378c) bg_passive_tab_pane_g2_cp3_srt

0xb196,	// (0x00025a2d) bg_passive_tab_pane_g3_cp3_srt

0x7db5,	// (0x0002264c) bg_active_tab_pane_cp3_srt_ParamLimits

0x7db5,	// (0x0002264c) bg_active_tab_pane_cp3_srt

0xb19f,	// (0x00025a36) tabs_4_active_pane_srt_g1

0xb1a7,	// (0x00025a3e) tabs_4_active_pane_srt_t1_ParamLimits

0xb1a7,	// (0x00025a3e) tabs_4_active_pane_srt_t1

0xb18d,	// (0x00025a24) bg_active_tab_pane_g1_cp3_copy1

0x8ef5,	// (0x0002378c) bg_active_tab_pane_g2_cp3_copy1

0xb196,	// (0x00025a2d) bg_active_tab_pane_g3_cp3_copy1

0x7db5,	// (0x0002264c) tabs_2_long_active_pane_srt_ParamLimits

0x7db5,	// (0x0002264c) tabs_2_long_active_pane_srt

0x7db5,	// (0x0002264c) tabs_2_long_passive_pane_srt_ParamLimits

0x7db5,	// (0x0002264c) tabs_2_long_passive_pane_srt

0x8805,	// (0x0002309c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8805,	// (0x0002309c) bg_passive_tab_pane_cp4_srt

0xae5d,	// (0x000256f4) bg_passive_tab_pane_g1_cp4_srt

0x8ef5,	// (0x0002378c) bg_passive_tab_pane_g2_cp4_srt

0xae66,	// (0x000256fd) bg_passive_tab_pane_g3_cp4_srt

0x87e4,	// (0x0002307b) bg_active_tab_pane_cp4_srt_ParamLimits

0x87e4,	// (0x0002307b) bg_active_tab_pane_cp4_srt

0xae6f,	// (0x00025706) tabs_2_long_active_pane_srt_t1_ParamLimits

0xae6f,	// (0x00025706) tabs_2_long_active_pane_srt_t1

0xae5d,	// (0x000256f4) bg_active_tab_pane_g1_cp4_srt

0x8ef5,	// (0x0002378c) bg_active_tab_pane_g2_cp4_srt

0xae66,	// (0x000256fd) bg_active_tab_pane_g3_cp4_srt

0x8030,	// (0x000228c7) tabs_3_long_active_pane_srt_ParamLimits

0x8030,	// (0x000228c7) tabs_3_long_active_pane_srt

0x8030,	// (0x000228c7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8030,	// (0x000228c7) tabs_3_long_passive_pane_cp_srt

0x8030,	// (0x000228c7) tabs_3_long_passive_pane_srt_ParamLimits

0x8030,	// (0x000228c7) tabs_3_long_passive_pane_srt

0x8805,	// (0x0002309c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8805,	// (0x0002309c) bg_passive_tab_pane_cp5_srt

0x8f7f,	// (0x00023816) bg_passive_tab_pane_g1_cp5_srt

0x8ef5,	// (0x0002378c) bg_passive_tab_pane_g2_cp5_srt

0x8f88,	// (0x0002381f) bg_passive_tab_pane_g3_cp5_srt

0x87e4,	// (0x0002307b) bg_active_tab_pane_cp5_srt_ParamLimits

0x87e4,	// (0x0002307b) bg_active_tab_pane_cp5_srt

0xae4b,	// (0x000256e2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae4b,	// (0x000256e2) tabs_3_long_active_pane_srt_t1

0x8f7f,	// (0x00023816) bg_active_tab_pane_g1_cp5_srt

0x8ef5,	// (0x0002378c) bg_active_tab_pane_g2_cp5_srt

0x8f88,	// (0x0002381f) bg_active_tab_pane_g3_cp5_srt

0xae3d,	// (0x000256d4) navi_text_pane_srt_t1

0xae35,	// (0x000256cc) navi_icon_pane_srt_g1

0x9460,	// (0x00023cf7) midp_editing_number_pane_srt

0x92a8,	// (0x00023b3f) midp_ticker_pane_srt

0x9468,	// (0x00023cff) midp_ticker_pane_srt_g1

0x9470,	// (0x00023d07) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0002a00f) midp_ticker_pane_srt_g

0x9478,	// (0x00023d0f) midp_ticker_pane_srt_t1

0xae26,	// (0x000256bd) midp_editing_number_pane_t1_copy1

0x8805,	// (0x0002309c) listscroll_midp_pane

0x8805,	// (0x0002309c) midp_form_pane

0x9312,	// (0x00023ba9) midp_info_popup_window_ParamLimits

0x9312,	// (0x00023ba9) midp_info_popup_window

0x86cd,	// (0x00022f64) bg_popup_sub_pane_cp50_ParamLimits

0x86cd,	// (0x00022f64) bg_popup_sub_pane_cp50

0x9f50,	// (0x000247e7) listscroll_midp_info_pane_ParamLimits

0x9f50,	// (0x000247e7) listscroll_midp_info_pane

0x9f38,	// (0x000247cf) listscroll_form_midp_pane_ParamLimits

0x9f38,	// (0x000247cf) listscroll_form_midp_pane

0x9f44,	// (0x000247db) scroll_bar_cp050

0x9f18,	// (0x000247af) list_midp_pane

0xbbe9,	// (0x00026480) signal_pane_g2_cp

0x9e52,	// (0x000246e9) listscroll_midp_info_pane_t1_ParamLimits

0x9e52,	// (0x000246e9) listscroll_midp_info_pane_t1

0x9e6a,	// (0x00024701) listscroll_midp_info_pane_t2_ParamLimits

0x9e6a,	// (0x00024701) listscroll_midp_info_pane_t2

0x9ea8,	// (0x0002473f) listscroll_midp_info_pane_t3_ParamLimits

0x9ea8,	// (0x0002473f) listscroll_midp_info_pane_t3

0x9ee2,	// (0x00024779) listscroll_midp_info_pane_t4_ParamLimits

0x9ee2,	// (0x00024779) listscroll_midp_info_pane_t4

0x0003,

0xf829,	// (0x0002a0c0) listscroll_midp_info_pane_t_ParamLimits

0xf829,	// (0x0002a0c0) listscroll_midp_info_pane_t

0x8791,	// (0x00023028) scroll_pane_cp21

0x9df0,	// (0x00024687) form_midp_field_choice_group_pane

0x9df9,	// (0x00024690) form_midp_field_text_pane

0x9e38,	// (0x000246cf) form_midp_field_time_pane

0x9e40,	// (0x000246d7) form_midp_gauge_slider_pane

0x9e49,	// (0x000246e0) form_midp_gauge_wait_pane

0x7cd5,	// (0x0002256c) form_midp_image_pane

0x533e,	// (0x0001fbd5) list_single_midp_pane_ParamLimits

0x533e,	// (0x0001fbd5) list_single_midp_pane

0x9da8,	// (0x0002463f) form_midp_field_text_pane_t1

0x9b66,	// (0x000243fd) input_focus_pane_cp050

0x9ddf,	// (0x00024676) list_midp_form_text_pane

0x9d77,	// (0x0002460e) form_midp_field_choice_group_pane_t1

0x9d85,	// (0x0002461c) input_focus_pane_cp051

0x9d99,	// (0x00024630) list_midp_choice_pane

0x7cd5,	// (0x0002256c) status_idle_pane

0x9d5b,	// (0x000245f2) form_midp_field_time_pane_t1

0x7ccb,	// (0x00022562) wait_anim_pane_g2_copy1

0x9d69,	// (0x00024600) form_midp_field_time_pane_t2

0x0001,

0x93c0,	// (0x00023c57) aid_navinavi_width_2_pane

0xf824,	// (0x0002a0bb) form_midp_field_time_pane_t

0x7cd5,	// (0x0002256c) input_focus_pane_cp052

0x7cd5,	// (0x0002256c) bg_input_focus_pane_cp040

0x9d1b,	// (0x000245b2) form_midp_gauge_slider_pane_t1

0x9d29,	// (0x000245c0) form_midp_gauge_slider_pane_t2

0x9d37,	// (0x000245ce) form_midp_gauge_slider_pane_t3

0x9d45,	// (0x000245dc) form_midp_gauge_slider_pane_t4

0x0003,

0xf81b,	// (0x0002a0b2) form_midp_gauge_slider_pane_t

0x9d53,	// (0x000245ea) form_midp_slider_pane

0x7db5,	// (0x0002264c) bg_input_focus_pane_cp041_ParamLimits

0x7db5,	// (0x0002264c) bg_input_focus_pane_cp041

0x9ce8,	// (0x0002457f) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ce8,	// (0x0002457f) form_midp_gauge_wait_pane_t1

0x9cfa,	// (0x00024591) form_midp_gauge_wait_pane_t2_ParamLimits

0x9cfa,	// (0x00024591) form_midp_gauge_wait_pane_t2

0x0001,

0xf816,	// (0x0002a0ad) form_midp_gauge_wait_pane_t_ParamLimits

0xf816,	// (0x0002a0ad) form_midp_gauge_wait_pane_t

0x9d0c,	// (0x000245a3) form_midp_wait_pane_ParamLimits

0x9d0c,	// (0x000245a3) form_midp_wait_pane

0x9cb2,	// (0x00024549) form_midp_image_pane_g1

0x9cbb,	// (0x00024552) form_midp_image_pane_t1

0x9cca,	// (0x00024561) form_midp_image_pane_t2

0x9cd9,	// (0x00024570) form_midp_image_pane_t3

0x0002,

0xf80f,	// (0x0002a0a6) form_midp_image_pane_t

0x9ca9,	// (0x00024540) list_single_midp_pane_g1

0x532f,	// (0x0001fbc6) list_single_midp_pane_t1

0x9c81,	// (0x00024518) list_midp_form_item_pane_ParamLimits

0x9c81,	// (0x00024518) list_midp_form_item_pane

0x9368,	// (0x00023bff) list_midp_form_item_pane_t1

0x9377,	// (0x00023c0e) midp_ticker_pane_g1

0x9383,	// (0x00023c1a) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x00029ff5) midp_ticker_pane_g

0x938f,	// (0x00023c26) midp_ticker_pane_t1

0xb0b9,	// (0x00025950) midp_editing_number_pane_t1

0xb097,	// (0x0002592e) midp_editing_number_pane

0xb0a6,	// (0x0002593d) midp_ticker_pane

0xae16,	// (0x000256ad) ai_message_heading_pane

0x7cd5,	// (0x0002256c) bg_popup_window_pane_cp14

0xae1e,	// (0x000256b5) listscroll_ai_message_pane

0xada0,	// (0x00025637) ai_message_heading_pane_g1_ParamLimits

0xada0,	// (0x00025637) ai_message_heading_pane_g1

0xadac,	// (0x00025643) ai_message_heading_pane_g2_ParamLimits

0xadac,	// (0x00025643) ai_message_heading_pane_g2

0xadb8,	// (0x0002564f) ai_message_heading_pane_g3_ParamLimits

0xadb8,	// (0x0002564f) ai_message_heading_pane_g3

0xadc4,	// (0x0002565b) ai_message_heading_pane_g4_ParamLimits

0xadc4,	// (0x0002565b) ai_message_heading_pane_g4

0x0003,

0xf950,	// (0x0002a1e7) ai_message_heading_pane_g_ParamLimits

0xf950,	// (0x0002a1e7) ai_message_heading_pane_g

0xadd0,	// (0x00025667) ai_message_heading_pane_t1_ParamLimits

0xadd0,	// (0x00025667) ai_message_heading_pane_t1

0xadea,	// (0x00025681) ai_message_heading_pane_t2_ParamLimits

0xadea,	// (0x00025681) ai_message_heading_pane_t2

0x0001,

0xf959,	// (0x0002a1f0) ai_message_heading_pane_t_ParamLimits

0xf959,	// (0x0002a1f0) ai_message_heading_pane_t

0xadfc,	// (0x00025693) bg_popup_heading_pane_cp1_ParamLimits

0xadfc,	// (0x00025693) bg_popup_heading_pane_cp1

0xad8e,	// (0x00025625) list_ai_message_pane_ParamLimits

0xad8e,	// (0x00025625) list_ai_message_pane

0x8791,	// (0x00023028) scroll_pane_cp10

0xad2a,	// (0x000255c1) list_ai_message_pane_g1

0xad32,	// (0x000255c9) list_ai_message_pane_g2

0x0001,

0xf92d,	// (0x0002a1c4) list_ai_message_pane_g

0xad3a,	// (0x000255d1) list_ai_message_pane_t1_ParamLimits

0xad3a,	// (0x000255d1) list_ai_message_pane_t1

0xad4f,	// (0x000255e6) list_ai_message_pane_t2_ParamLimits

0xad4f,	// (0x000255e6) list_ai_message_pane_t2

0xad64,	// (0x000255fb) list_ai_message_pane_t3_ParamLimits

0xad64,	// (0x000255fb) list_ai_message_pane_t3

0xad79,	// (0x00025610) list_ai_message_pane_t4_ParamLimits

0xad79,	// (0x00025610) list_ai_message_pane_t4

0x0003,

0xf932,	// (0x0002a1c9) list_ai_message_pane_t_ParamLimits

0xf932,	// (0x0002a1c9) list_ai_message_pane_t

0xad15,	// (0x000255ac) cell_ai_soft_ind_pane_ParamLimits

0xad15,	// (0x000255ac) cell_ai_soft_ind_pane

0x93a1,	// (0x00023c38) cell_ai_soft_ind_pane_g1_ParamLimits

0x93a1,	// (0x00023c38) cell_ai_soft_ind_pane_g1

0x7cd5,	// (0x0002256c) grid_highlight_cp1

0x93ae,	// (0x00023c45) text_secondary_cp56_ParamLimits

0x93ae,	// (0x00023c45) text_secondary_cp56

0xacea,	// (0x00025581) example_general_pane_ParamLimits

0xacea,	// (0x00025581) example_general_pane

0xacf6,	// (0x0002558d) example_parent_pane_g1_ParamLimits

0xacf6,	// (0x0002558d) example_parent_pane_g1

0xad02,	// (0x00025599) example_parent_pane_t1_ParamLimits

0xad02,	// (0x00025599) example_parent_pane_t1

0x68ec,	// (0x00021183) popup_preview_text_window_ParamLimits

0x68ec,	// (0x00021183) popup_preview_text_window

0x91d9,	// (0x00023a70) list_single_pane_cp2_g4

0x80e6,	// (0x0002297d) bg_popup_preview_window_pane_ParamLimits

0x80e6,	// (0x0002297d) bg_popup_preview_window_pane

0xaa3a,	// (0x000252d1) popup_preview_text_window_t1_ParamLimits

0xaa3a,	// (0x000252d1) popup_preview_text_window_t1

0xaa58,	// (0x000252ef) popup_preview_text_window_t2_ParamLimits

0xaa58,	// (0x000252ef) popup_preview_text_window_t2

0xaaa1,	// (0x00025338) popup_preview_text_window_t3_ParamLimits

0xaaa1,	// (0x00025338) popup_preview_text_window_t3

0xaae6,	// (0x0002537d) popup_preview_text_window_t4_ParamLimits

0xaae6,	// (0x0002537d) popup_preview_text_window_t4

0x0004,

0xf901,	// (0x0002a198) popup_preview_text_window_t_ParamLimits

0xf901,	// (0x0002a198) popup_preview_text_window_t

0xab64,	// (0x000253fb) scroll_pane_cp11

0x9af2,	// (0x00024389) bg_popup_preview_window_pane_g1

0xa9fa,	// (0x00025291) bg_popup_preview_window_pane_g2

0xaa02,	// (0x00025299) bg_popup_preview_window_pane_g3

0xaa0a,	// (0x000252a1) bg_popup_preview_window_pane_g4

0xaa12,	// (0x000252a9) bg_popup_preview_window_pane_g5

0xaa1a,	// (0x000252b1) bg_popup_preview_window_pane_g6

0xaa22,	// (0x000252b9) bg_popup_preview_window_pane_g7

0xaa2a,	// (0x000252c1) bg_popup_preview_window_pane_g8

0x5b12,	// (0x000203a9) aid_popup_width_pane

0x68ca,	// (0x00021161) popup_midp_note_alarm_window_ParamLimits

0x68ca,	// (0x00021161) popup_midp_note_alarm_window

0x8615,	// (0x00022eac) data_form_pane_ParamLimits

0x4f96,	// (0x0001f82d) form_field_data_pane_g1

0x4fa0,	// (0x0001f837) form_field_data_pane_t1_ParamLimits

0x8621,	// (0x00022eb8) input_focus_pane_ParamLimits

0x4fb8,	// (0x0001f84f) data_form_wide_pane_ParamLimits

0x4fc9,	// (0x0001f860) form_field_data_wide_pane_g1

0x4fd5,	// (0x0001f86c) form_field_data_wide_pane_t1_ParamLimits

0x8392,	// (0x00022c29) input_focus_pane_cp6_ParamLimits

0x873e,	// (0x00022fd5) input_popup_find_pane_g1_ParamLimits

0x873e,	// (0x00022fd5) input_popup_find_pane_g1

0x6084,	// (0x0002091b) aid_navi_side_left_pane

0x6099,	// (0x00020930) aid_navi_side_right_pane

0xa413,	// (0x00024caa) bg_popup_window_pane_cp30_ParamLimits

0xa413,	// (0x00024caa) bg_popup_window_pane_cp30

0xa48d,	// (0x00024d24) popup_midp_note_alarm_window_g1_ParamLimits

0xa48d,	// (0x00024d24) popup_midp_note_alarm_window_g1

0xa4bd,	// (0x00024d54) popup_midp_note_alarm_window_t1_ParamLimits

0xa4bd,	// (0x00024d54) popup_midp_note_alarm_window_t1

0xa55e,	// (0x00024df5) popup_midp_note_alarm_window_t2_ParamLimits

0xa55e,	// (0x00024df5) popup_midp_note_alarm_window_t2

0xa60c,	// (0x00024ea3) popup_midp_note_alarm_window_t3_ParamLimits

0xa60c,	// (0x00024ea3) popup_midp_note_alarm_window_t3

0xa63e,	// (0x00024ed5) popup_midp_note_alarm_window_t4_ParamLimits

0xa63e,	// (0x00024ed5) popup_midp_note_alarm_window_t4

0xa664,	// (0x00024efb) popup_midp_note_alarm_window_t5_ParamLimits

0xa664,	// (0x00024efb) popup_midp_note_alarm_window_t5

0x000a,

0xf89e,	// (0x0002a135) popup_midp_note_alarm_window_t_ParamLimits

0xf89e,	// (0x0002a135) popup_midp_note_alarm_window_t

0xa710,	// (0x00024fa7) wait_bar_pane_cp1_ParamLimits

0xa710,	// (0x00024fa7) wait_bar_pane_cp1

0x7cd5,	// (0x0002256c) wait_anim_pane_copy1

0x7cd5,	// (0x0002256c) wait_border_pane_copy1

0xa0f9,	// (0x00024990) wait_border_pane_g1_copy1

0x4fef,	// (0x0001f886) form_field_popup_pane_g1

0x4ff7,	// (0x0001f88e) form_field_popup_pane_t1_ParamLimits

0x8621,	// (0x00022eb8) input_focus_pane_cp7_ParamLimits

0x864f,	// (0x00022ee6) list_form_pane_ParamLimits

0x500f,	// (0x0001f8a6) form_field_popup_wide_pane_g1

0x5017,	// (0x0001f8ae) form_field_popup_wide_pane_t1_ParamLimits

0x8621,	// (0x00022eb8) input_focus_pane_cp8_ParamLimits

0x865b,	// (0x00022ef2) list_form_wide_pane_ParamLimits

0xb219,	// (0x00025ab0) aid_size_cell_graphic_pane

0x50a1,	// (0x0001f938) data_form_pane_t1_ParamLimits

0x5398,	// (0x0001fc2f) data_form_wide_pane_t1_ParamLimits

0x96bf,	// (0x00023f56) bg_status_flat_pane

0x7d15,	// (0x000225ac) title_pane_t1_ParamLimits

0x7d7d,	// (0x00022614) title_pane_t2_ParamLimits

0x7da3,	// (0x0002263a) title_pane_t3_ParamLimits

0xf55d,	// (0x00029df4) title_pane_t_ParamLimits

0x8c0c,	// (0x000234a3) level_1_signal_ParamLimits

0x8c1e,	// (0x000234b5) level_2_signal_ParamLimits

0x8c31,	// (0x000234c8) level_3_signal_ParamLimits

0x8c44,	// (0x000234db) level_4_signal_ParamLimits

0x8c57,	// (0x000234ee) level_5_signal_ParamLimits

0x8c6a,	// (0x00023501) level_6_signal_ParamLimits

0x8c7d,	// (0x00023514) level_7_signal_ParamLimits

0x8c0c,	// (0x000234a3) level_1_battery_ParamLimits

0x8c1e,	// (0x000234b5) level_2_battery_ParamLimits

0x8c31,	// (0x000234c8) level_3_battery_ParamLimits

0x8c44,	// (0x000234db) level_4_battery_ParamLimits

0x8c57,	// (0x000234ee) level_5_battery_ParamLimits

0x8c6a,	// (0x00023501) level_6_battery_ParamLimits

0x8c7d,	// (0x00023514) level_7_battery_ParamLimits

0xa318,	// (0x00024baf) bg_status_flat_pane_g1

0xa320,	// (0x00024bb7) bg_status_flat_pane_g2

0xa328,	// (0x00024bbf) bg_status_flat_pane_g3

0xa330,	// (0x00024bc7) bg_status_flat_pane_g4

0xa338,	// (0x00024bcf) bg_status_flat_pane_g5

0xa340,	// (0x00024bd7) bg_status_flat_pane_g6

0xa348,	// (0x00024bdf) bg_status_flat_pane_g7

0x7dcb,	// (0x00022662) tabs_3_active_pane_t1_ParamLimits

0x7dcb,	// (0x00022662) tabs_3_passive_pane_t1_ParamLimits

0x7de5,	// (0x0002267c) tabs_4_active_pane_t1_ParamLimits

0x7de5,	// (0x0002267c) tabs_4_1_passive_pane_t1_ParamLimits

0x87d2,	// (0x00023069) tabs_2_active_pane_t1_ParamLimits

0x87d2,	// (0x00023069) tabs_2_passive_pane_t1_ParamLimits

0x87e4,	// (0x0002307b) bg_active_tab_pane_cp4_ParamLimits

0x87f2,	// (0x00023089) tabs_2_long_active_pane_t1_ParamLimits

0x8805,	// (0x0002309c) bg_passive_tab_pane_cp4_ParamLimits

0x6b99,	// (0x00021430) list_single_midp_graphic_pane_t1_ParamLimits

0x87e4,	// (0x0002307b) bg_active_tab_pane_cp5_ParamLimits

0x8811,	// (0x000230a8) tabs_3_long_active_pane_t1_ParamLimits

0x8805,	// (0x0002309c) bg_passive_tab_pane_cp5_ParamLimits

0x6b99,	// (0x00021430) list_single_midp_graphic_pane_t1

0x96bf,	// (0x00023f56) bg_status_flat_pane_ParamLimits

0x9782,	// (0x00024019) indicator_pane_cp2_ParamLimits

0x9782,	// (0x00024019) indicator_pane_cp2

0x98ad,	// (0x00024144) navi_pane_srt_ParamLimits

0x98ad,	// (0x00024144) navi_pane_srt

0x98d1,	// (0x00024168) popup_clock_digital_analogue_window_cp1

0x7e92,	// (0x00022729) indicator_pane_t1

0x92a8,	// (0x00023b3f) copy_highlight_pane

0x92a8,	// (0x00023b3f) cursor_graphics_pane

0x92a8,	// (0x00023b3f) graphic_within_text_pane

0x92a8,	// (0x00023b3f) link_highlight_pane

0xab27,	// (0x000253be) popup_preview_text_window_t5_ParamLimits

0xab27,	// (0x000253be) popup_preview_text_window_t5

0x93c8,	// (0x00023c5f) cursor_digital_pane

0x93c8,	// (0x00023c5f) cursor_primary_pane

0x93d9,	// (0x00023c70) cursor_primary_small_pane

0x93e1,	// (0x00023c78) cursor_secondary_pane

0x93e9,	// (0x00023c80) cursor_title_pane

0x93c8,	// (0x00023c5f) link_highlight_digital_pane

0x93d0,	// (0x00023c67) link_highlight_primary_pane

0x93d9,	// (0x00023c70) link_highlight_primary_small_pane

0x93e1,	// (0x00023c78) link_highlight_secondary_pane

0x93e9,	// (0x00023c80) link_highlight_title_pane

0x93c8,	// (0x00023c5f) copy_highlight_digital_pane

0x93c8,	// (0x00023c5f) copy_highlight_primary_pane

0x93d9,	// (0x00023c70) copy_highlight_primary_small_pane

0x93e1,	// (0x00023c78) copy_highlight_secondary_pane

0x93e9,	// (0x00023c80) copy_highlight_title_pane

0x93e1,	// (0x00023c78) graphic_text_digital_pane

0xa3b6,	// (0x00024c4d) graphic_text_primary_pane

0xa3bf,	// (0x00024c56) graphic_text_primary_small_pane

0x93d9,	// (0x00023c70) graphic_text_secondary_pane

0x93c8,	// (0x00023c5f) graphic_text_title_pane

0x93f1,	// (0x00023c88) cursor_primary_pane_g1

0xa3a8,	// (0x00024c3f) cursor_text_primary_t1

0xa390,	// (0x00024c27) cursor_primary_small_pane_g1

0xa39a,	// (0x00024c31) cursor_text_primary_small_t1

0xa378,	// (0x00024c0f) cursor_primary_small_pane_g1_copy1

0xa382,	// (0x00024c19) cursor_text_primary_small_t1_copy1

0xa360,	// (0x00024bf7) cursor_text_title_t1

0xa36e,	// (0x00024c05) cursor_title_pane_g1

0x93f1,	// (0x00023c88) cursor_digital_pane_g1

0x93fb,	// (0x00023c92) cursor_text_digital_t1

0x9420,	// (0x00023cb7) link_highlight_primary_pane_g1

0xa309,	// (0x00024ba0) link_highlight_primary_pane_t1

0x9409,	// (0x00023ca0) link_highlight_primary_small_pane_g1

0x9411,	// (0x00023ca8) link_highlight_primary_small_pane_t1

0x9420,	// (0x00023cb7) link_highlight_secondary_pane_g1

0x9428,	// (0x00023cbf) link_highlight_secondary_pane_t1

0xa27d,	// (0x00024b14) link_highlight_title_pane_g1

0xa285,	// (0x00024b1c) link_highlight_title_pane_t1

0xa266,	// (0x00024afd) link_highlight_digital_pane_g1

0xa26e,	// (0x00024b05) link_highlight_digital_pane_t1

0xa13e,	// (0x000249d5) copy_highlight_primary_pane_g1

0xa146,	// (0x000249dd) copy_highlight_primary_pane_t1

0xa118,	// (0x000249af) copy_highlight_primary_small_pane_g1

0xa12f,	// (0x000249c6) copy_highlight_primary_small_pane_t1

0x9437,	// (0x00023cce) copy_highlight_secondary_pane_g1

0x943f,	// (0x00023cd6) copy_highlight_secondary_pane_t1

0xa118,	// (0x000249af) copy_highlight_title_pane_g1

0xa120,	// (0x000249b7) copy_highlight_title_pane_t1

0xa13e,	// (0x000249d5) copy_highlight_digital_pane_g1

0xb3e3,	// (0x00025c7a) copy_highlight_digital_pane_t1

0xb337,	// (0x00025bce) graphic_text_primary_pane_g1

0xb3c7,	// (0x00025c5e) graphic_text_primary_pane_t1

0xb3d5,	// (0x00025c6c) graphic_text_primary_pane_t2

0x0001,

0xf9cd,	// (0x0002a264) graphic_text_primary_pane_t

0xb3a3,	// (0x00025c3a) graphic_text_primary_small_pane_g1

0xb3ab,	// (0x00025c42) graphic_text_primary_small_pane_t1

0xb3b9,	// (0x00025c50) graphic_text_primary_small_pane_t2

0x0001,

0xf9c8,	// (0x0002a25f) graphic_text_primary_small_pane_t

0xb37f,	// (0x00025c16) graphic_text_secondary_pane_g1

0xb387,	// (0x00025c1e) graphic_text_secondary_pane_t1

0xb395,	// (0x00025c2c) graphic_text_secondary_pane_t2

0x0001,

0xf9c3,	// (0x0002a25a) graphic_text_secondary_pane_t

0xb35b,	// (0x00025bf2) graphic_text_title_pane_g1

0xb363,	// (0x00025bfa) graphic_text_title_pane_t1

0xb371,	// (0x00025c08) graphic_text_title_pane_t2

0x0001,

0xf9be,	// (0x0002a255) graphic_text_title_pane_t

0xb337,	// (0x00025bce) graphic_text_digital_pane_g1

0xb33f,	// (0x00025bd6) graphic_text_digital_pane_t1

0xb34d,	// (0x00025be4) graphic_text_digital_pane_t2

0x0001,

0xf9b9,	// (0x0002a250) graphic_text_digital_pane_t

0x7db5,	// (0x0002264c) navi_icon_pane_srt_ParamLimits

0x7db5,	// (0x0002264c) navi_icon_pane_srt

0x7cd5,	// (0x0002256c) navi_midp_pane_srt

0x7cd5,	// (0x0002256c) navi_navi_pane_srt

0x7db5,	// (0x0002264c) navi_text_pane_srt_ParamLimits

0x7db5,	// (0x0002264c) navi_text_pane_srt

0xb302,	// (0x00025b99) navi_navi_icon_text_pane_srt

0xb30a,	// (0x00025ba1) navi_navi_pane_srt_g1_ParamLimits

0xb30a,	// (0x00025ba1) navi_navi_pane_srt_g1

0xb31c,	// (0x00025bb3) navi_navi_pane_srt_g2_ParamLimits

0xb31c,	// (0x00025bb3) navi_navi_pane_srt_g2

0x0001,

0xf9b4,	// (0x0002a24b) navi_navi_pane_srt_g_ParamLimits

0xf9b4,	// (0x0002a24b) navi_navi_pane_srt_g

0xb32e,	// (0x00025bc5) navi_navi_tabs_pane_srt

0xb302,	// (0x00025b99) navi_navi_text_pane_srt

0xb302,	// (0x00025b99) navi_navi_volume_pane_srt

0xb2f3,	// (0x00025b8a) navi_navi_text_pane_srt_t1

0x6ed1,	// (0x00021768) navi_navi_volume_pane_srt_g1

0x6ed9,	// (0x00021770) volume_small_pane_srt_ParamLimits

0x6ed9,	// (0x00021770) volume_small_pane_srt

0x6364,	// (0x00020bfb) volume_small_pane_srt_g1_ParamLimits

0x6364,	// (0x00020bfb) volume_small_pane_srt_g1

0x6374,	// (0x00020c0b) volume_small_pane_srt_g2_ParamLimits

0x6374,	// (0x00020c0b) volume_small_pane_srt_g2

0x6385,	// (0x00020c1c) volume_small_pane_srt_g3_ParamLimits

0x6385,	// (0x00020c1c) volume_small_pane_srt_g3

0x6396,	// (0x00020c2d) volume_small_pane_srt_g4_ParamLimits

0x6396,	// (0x00020c2d) volume_small_pane_srt_g4

0x63a7,	// (0x00020c3e) volume_small_pane_srt_g5_ParamLimits

0x63a7,	// (0x00020c3e) volume_small_pane_srt_g5

0x63b8,	// (0x00020c4f) volume_small_pane_srt_g6_ParamLimits

0x63b8,	// (0x00020c4f) volume_small_pane_srt_g6

0x63c9,	// (0x00020c60) volume_small_pane_srt_g7_ParamLimits

0x63c9,	// (0x00020c60) volume_small_pane_srt_g7

0x63da,	// (0x00020c71) volume_small_pane_srt_g8_ParamLimits

0x63da,	// (0x00020c71) volume_small_pane_srt_g8

0x63eb,	// (0x00020c82) volume_small_pane_srt_g9_ParamLimits

0x63eb,	// (0x00020c82) volume_small_pane_srt_g9

0x63fc,	// (0x00020c93) volume_small_pane_srt_g10_ParamLimits

0x63fc,	// (0x00020c93) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x00029ffa) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x00029ffa) volume_small_pane_srt_g

0x818f,	// (0x00022a26) query_popup_data_pane_cp2

0xb2d9,	// (0x00025b70) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2d9,	// (0x00025b70) navi_navi_icon_text_pane_srt_t1

0xa3b6,	// (0x00024c4d) navi_tabs_2_long_pane_srt

0xa3b6,	// (0x00024c4d) navi_tabs_2_pane_srt

0xa3b6,	// (0x00024c4d) navi_tabs_3_long_pane_srt

0xa3b6,	// (0x00024c4d) navi_tabs_3_pane_srt

0xa3b6,	// (0x00024c4d) navi_tabs_4_pane_srt

0x6eb1,	// (0x00021748) tabs_2_active_pane_srt_ParamLimits

0x6eb1,	// (0x00021748) tabs_2_active_pane_srt

0x6ec1,	// (0x00021758) tabs_2_passive_pane_srt_ParamLimits

0x6ec1,	// (0x00021758) tabs_2_passive_pane_srt

0x95e8,	// (0x00023e7f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x95e8,	// (0x00023e7f) bg_passive_tab_pane_cp1_srt

0xb2a5,	// (0x00025b3c) bg_passive_tab_pane_g1_cp1_srt

0x8ef5,	// (0x0002378c) bg_passive_tab_pane_g2_cp1_srt

0xb2ae,	// (0x00025b45) bg_passive_tab_pane_g3_cp1_srt

0x7db5,	// (0x0002264c) bg_active_tab_pane_cp1_srt_ParamLimits

0x7db5,	// (0x0002264c) bg_active_tab_pane_cp1_srt

0xb2b7,	// (0x00025b4e) tabs_2_active_pane_srt_g1

0xb2bf,	// (0x00025b56) tabs_2_active_pane_srt_t1_ParamLimits

0xb2bf,	// (0x00025b56) tabs_2_active_pane_srt_t1

0xb2a5,	// (0x00025b3c) bg_active_tab_pane_g1_cp1_srt

0x8ef5,	// (0x0002378c) bg_active_tab_pane_g2_cp1_srt

0xb2ae,	// (0x00025b45) bg_active_tab_pane_g3_cp1_srt

0x6e7e,	// (0x00021715) tabs_3_active_pane_srt_ParamLimits

0x6e7e,	// (0x00021715) tabs_3_active_pane_srt

0x6e8f,	// (0x00021726) tabs_3_passive_pane_cp_srt_ParamLimits

0x6e8f,	// (0x00021726) tabs_3_passive_pane_cp_srt

0x6ea0,	// (0x00021737) tabs_3_passive_pane_srt_ParamLimits

0x6ea0,	// (0x00021737) tabs_3_passive_pane_srt

0x95e8,	// (0x00023e7f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x95e8,	// (0x00023e7f) bg_passive_tab_pane_cp2_srt

0x944e,	// (0x00023ce5) bg_passive_tab_pane_g1_cp2_srt

0x8ef5,	// (0x0002378c) bg_passive_tab_pane_g2_cp2_srt

0x9457,	// (0x00023cee) bg_passive_tab_pane_g3_cp2_srt

0x7db5,	// (0x0002264c) bg_active_tab_pane_cp2_srt_ParamLimits

0x7db5,	// (0x0002264c) bg_active_tab_pane_cp2_srt

0xb28b,	// (0x00025b22) tabs_3_active_pane_srt_g1

0xb293,	// (0x00025b2a) tabs_3_active_pane_srt_t1_ParamLimits

0xb293,	// (0x00025b2a) tabs_3_active_pane_srt_t1

0x944e,	// (0x00023ce5) bg_active_tab_pane_g1_cp2_srt

0x8ef5,	// (0x0002378c) bg_active_tab_pane_g2_cp2_srt

0x9457,	// (0x00023cee) bg_active_tab_pane_g3_cp2_srt

0x6e36,	// (0x000216cd) tabs_4_active_pane_srt_ParamLimits

0x6e36,	// (0x000216cd) tabs_4_active_pane_srt

0x6e48,	// (0x000216df) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6e48,	// (0x000216df) tabs_4_passive_pane_cp2_srt

0x6561,	// (0x00020df8) aid_size_cell_toolbar

0x8805,	// (0x0002309c) main_idle_act_pane_ParamLimits

0x6700,	// (0x00020f97) popup_large_graphic_colour_window_ParamLimits

0x6a67,	// (0x000212fe) popup_toolbar_window_ParamLimits

0x6a67,	// (0x000212fe) popup_toolbar_window

0xb0c8,	// (0x0002595f) list_single_graphic_2heading_pane_ParamLimits

0xb0c8,	// (0x0002595f) list_single_graphic_2heading_pane

0x89c1,	// (0x00023258) aid_size_cell_apps_grid_lsc_pane

0x89d3,	// (0x0002326a) aid_size_cell_apps_grid_prt_pane

0x95e8,	// (0x00023e7f) bg_wml_button_pane_cp1_ParamLimits

0x95e8,	// (0x00023e7f) bg_wml_button_pane_cp1

0x9da8,	// (0x0002463f) form_midp_field_text_pane_t1_ParamLimits

0x9b66,	// (0x000243fd) input_focus_pane_cp050_ParamLimits

0x9ddf,	// (0x00024676) list_midp_form_text_pane_ParamLimits

0x9d85,	// (0x0002461c) input_focus_pane_cp051_ParamLimits

0x9d99,	// (0x00024630) list_midp_choice_pane_ParamLimits

0x9c2b,	// (0x000244c2) list_single_2graphic_pane_cp3_ParamLimits

0x9c2b,	// (0x000244c2) list_single_2graphic_pane_cp3

0x9c4f,	// (0x000244e6) list_single_midp_graphic_pane_ParamLimits

0x9c4f,	// (0x000244e6) list_single_midp_graphic_pane

0x5203,	// (0x0001fa9a) list_single_graphic_2heading_pane_g1_ParamLimits

0x5203,	// (0x0001fa9a) list_single_graphic_2heading_pane_g1

0x520f,	// (0x0001faa6) list_single_graphic_2heading_pane_g4_ParamLimits

0x520f,	// (0x0001faa6) list_single_graphic_2heading_pane_g4

0x521b,	// (0x0001fab2) list_single_graphic_2heading_pane_g5_ParamLimits

0x521b,	// (0x0001fab2) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0002a04d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0002a04d) list_single_graphic_2heading_pane_g

0x5227,	// (0x0001fabe) list_single_graphic_2heading_pane_t1_ParamLimits

0x5227,	// (0x0001fabe) list_single_graphic_2heading_pane_t1

0x523b,	// (0x0001fad2) list_single_graphic_2heading_pane_t2_ParamLimits

0x523b,	// (0x0001fad2) list_single_graphic_2heading_pane_t2

0x5257,	// (0x0001faee) list_single_graphic_2heading_pane_t3_ParamLimits

0x5257,	// (0x0001faee) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0002a054) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0002a054) list_single_graphic_2heading_pane_t

0x9a30,	// (0x000242c7) bg_popup_sub_pane_cp2

0x9a5a,	// (0x000242f1) grid_toobar_pane

0x6b14,	// (0x000213ab) cell_toolbar_pane_ParamLimits

0x6b14,	// (0x000213ab) cell_toolbar_pane

0x9a96,	// (0x0002432d) cell_toolbar_pane_g1_ParamLimits

0x9a96,	// (0x0002432d) cell_toolbar_pane_g1

0x9aaa,	// (0x00024341) cell_toolbar_pane_g2_ParamLimits

0x9aaa,	// (0x00024341) cell_toolbar_pane_g2

0x0001,

0xf7c4,	// (0x0002a05b) cell_toolbar_pane_g_ParamLimits

0xf7c4,	// (0x0002a05b) cell_toolbar_pane_g

0x9acc,	// (0x00024363) grid_highlight_pane_cp2_ParamLimits

0x9acc,	// (0x00024363) grid_highlight_pane_cp2

0x9ae6,	// (0x0002437d) toolbar_button_pane

0x9af2,	// (0x00024389) toolbar_button_pane_g1

0x9afa,	// (0x00024391) toolbar_button_pane_g2

0x9b02,	// (0x00024399) toolbar_button_pane_g3

0x9b0a,	// (0x000243a1) toolbar_button_pane_g4

0x9b12,	// (0x000243a9) toolbar_button_pane_g5

0x9b1a,	// (0x000243b1) toolbar_button_pane_g6

0x9b22,	// (0x000243b9) toolbar_button_pane_g7

0x9b2a,	// (0x000243c1) toolbar_button_pane_g8

0x9b32,	// (0x000243c9) toolbar_button_pane_g9

0x0009,

0xf7c9,	// (0x0002a060) toolbar_button_pane_g

0x6b4c,	// (0x000213e3) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6b4c,	// (0x000213e3) list_single_2graphic_pane_g1_cp3

0x6b58,	// (0x000213ef) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6b58,	// (0x000213ef) list_single_2graphic_pane_g2_cp3

0x6b69,	// (0x00021400) list_single_2graphic_pane_g3_cp3

0x6b71,	// (0x00021408) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6b71,	// (0x00021408) list_single_2graphic_pane_g4_cp3

0x6b7d,	// (0x00021414) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6b7d,	// (0x00021414) list_single_2graphic_pane_t1_cp3

0x9bb2,	// (0x00024449) list_single_midp_graphic_pane_g2_ParamLimits

0x9bb2,	// (0x00024449) list_single_midp_graphic_pane_g2

0x6569,	// (0x00020e00) aid_zoom_text_primary

0x51d7,	// (0x0001fa6e) aid_zoom_text_secondary

0x950b,	// (0x00023da2) status_small_pane_g7_ParamLimits

0x950b,	// (0x00023da2) status_small_pane_g7

0x952e,	// (0x00023dc5) status_small_pane_t1_ParamLimits

0x7cec,	// (0x00022583) title_pane_g2

0x0003,

0xf554,	// (0x00029deb) title_pane_g

0x8230,	// (0x00022ac7) aid_size_cell_colour_1_pane_ParamLimits

0x8230,	// (0x00022ac7) aid_size_cell_colour_1_pane

0x8244,	// (0x00022adb) aid_size_cell_colour_2_pane_ParamLimits

0x8244,	// (0x00022adb) aid_size_cell_colour_2_pane

0x8258,	// (0x00022aef) aid_size_cell_colour_3_pane_ParamLimits

0x8258,	// (0x00022aef) aid_size_cell_colour_3_pane

0x826c,	// (0x00022b03) aid_size_cell_colour_4_pane_ParamLimits

0x826c,	// (0x00022b03) aid_size_cell_colour_4_pane

0x5fc1,	// (0x00020858) title_pane_stacon_g1_ParamLimits

0x5fc1,	// (0x00020858) title_pane_stacon_g1

0xa19d,	// (0x00024a34) popup_note_wait_window_g3_ParamLimits

0xa19d,	// (0x00024a34) popup_note_wait_window_g3

0xa213,	// (0x00024aaa) popup_note_wait_window_t5_ParamLimits

0xa213,	// (0x00024aaa) popup_note_wait_window_t5

0x7cd5,	// (0x0002256c) main_feb_china_hwr_fs_writing_pane

0x65e5,	// (0x00020e7c) popup_feb_china_hwr_fs_window_ParamLimits

0x65e5,	// (0x00020e7c) popup_feb_china_hwr_fs_window

0x6baf,	// (0x00021446) aid_size_cell_hwr_fs_ParamLimits

0x6baf,	// (0x00021446) aid_size_cell_hwr_fs

0x9b66,	// (0x000243fd) bg_popup_sub_pane_cp3_ParamLimits

0x9b66,	// (0x000243fd) bg_popup_sub_pane_cp3

0x6bc4,	// (0x0002145b) grid_hwr_fs_pane_ParamLimits

0x6bc4,	// (0x0002145b) grid_hwr_fs_pane

0x6bdc,	// (0x00021473) linegrid_hwr_fs_pane_ParamLimits

0x6bdc,	// (0x00021473) linegrid_hwr_fs_pane

0x6bec,	// (0x00021483) cell_hwr_fs_pane_ParamLimits

0x6bec,	// (0x00021483) cell_hwr_fs_pane

0x9b72,	// (0x00024409) linegrid_hwr_fs_pane_g1_ParamLimits

0x9b72,	// (0x00024409) linegrid_hwr_fs_pane_g1

0x9b7e,	// (0x00024415) linegrid_hwr_fs_pane_g2_ParamLimits

0x9b7e,	// (0x00024415) linegrid_hwr_fs_pane_g2

0x9b90,	// (0x00024427) linegrid_hwr_fs_pane_g3_ParamLimits

0x9b90,	// (0x00024427) linegrid_hwr_fs_pane_g3

0x6c0e,	// (0x000214a5) linegrid_hwr_fs_pane_g4_ParamLimits

0x6c0e,	// (0x000214a5) linegrid_hwr_fs_pane_g4

0x6c28,	// (0x000214bf) linegrid_hwr_fs_pane_g5_ParamLimits

0x6c28,	// (0x000214bf) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f4,	// (0x0002a08b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0002a08b) linegrid_hwr_fs_pane_g

0x9b9c,	// (0x00024433) cell_hwr_fs_pane_g1_ParamLimits

0x9b9c,	// (0x00024433) cell_hwr_fs_pane_g1

0x9967,	// (0x000241fe) cell_hwr_fs_pane_g2_ParamLimits

0x9967,	// (0x000241fe) cell_hwr_fs_pane_g2

0x9bbe,	// (0x00024455) cell_hwr_fs_pane_g3_ParamLimits

0x9bbe,	// (0x00024455) cell_hwr_fs_pane_g3

0x9bcb,	// (0x00024462) cell_hwr_fs_pane_g4_ParamLimits

0x9bcb,	// (0x00024462) cell_hwr_fs_pane_g4

0x0003,

0xf7ff,	// (0x0002a096) cell_hwr_fs_pane_g_ParamLimits

0xf7ff,	// (0x0002a096) cell_hwr_fs_pane_g

0x6c3e,	// (0x000214d5) cell_hwr_fs_pane_t1

0x7cd5,	// (0x0002256c) grid_highlight_pane_cp6

0x7cd5,	// (0x0002256c) main_idle_act2_pane

0x8778,	// (0x0002300f) aid_inside_area_popup_secondary

0xa84a,	// (0x000250e1) aid_inside_area_window_primary_ParamLimits

0xa84a,	// (0x000250e1) aid_inside_area_window_primary

0xb3f2,	// (0x00025c89) ai2_news_ticker_pane

0xb3fa,	// (0x00025c91) aid_size_cell_ai1_link_ParamLimits

0xb3fa,	// (0x00025c91) aid_size_cell_ai1_link

0xb414,	// (0x00025cab) popup_ai2_data_window_ParamLimits

0xb414,	// (0x00025cab) popup_ai2_data_window

0xb42a,	// (0x00025cc1) popup_ai2_link_window_ParamLimits

0xb42a,	// (0x00025cc1) popup_ai2_link_window

0x9b66,	// (0x000243fd) bg_popup_sub_pane_cp4_ParamLimits

0x9b66,	// (0x000243fd) bg_popup_sub_pane_cp4

0xb43e,	// (0x00025cd5) grid_ai2_link_pane_ParamLimits

0xb43e,	// (0x00025cd5) grid_ai2_link_pane

0xb455,	// (0x00025cec) popup_ai2_link_window_g1_ParamLimits

0xb455,	// (0x00025cec) popup_ai2_link_window_g1

0xb461,	// (0x00025cf8) popup_ai2_link_window_g2_ParamLimits

0xb461,	// (0x00025cf8) popup_ai2_link_window_g2

0x0001,

0xf9d2,	// (0x0002a269) popup_ai2_link_window_g_ParamLimits

0xf9d2,	// (0x0002a269) popup_ai2_link_window_g

0xb470,	// (0x00025d07) ai2_mp_button_pane

0xb478,	// (0x00025d0f) ai2_mp_volume_pane

0x9d85,	// (0x0002461c) bg_popup_sub_pane_cp5_ParamLimits

0x9d85,	// (0x0002461c) bg_popup_sub_pane_cp5

0xb480,	// (0x00025d17) heading_ai2_gene_pane_ParamLimits

0xb480,	// (0x00025d17) heading_ai2_gene_pane

0xb48c,	// (0x00025d23) list_ai2_gene_pane_ParamLimits

0xb48c,	// (0x00025d23) list_ai2_gene_pane

0xb4d4,	// (0x00025d6b) cell_ai2_link_pane_ParamLimits

0xb4d4,	// (0x00025d6b) cell_ai2_link_pane

0xb4ea,	// (0x00025d81) cell_ai2_link_pane_g1

0x7cd5,	// (0x0002256c) grid_highlight_pane_cp7

0x6eee,	// (0x00021785) ai2_mp_volume_pane_g1

0xb5ba,	// (0x00025e51) ai2_mp_volume_pane_g2

0xb52f,	// (0x00025dc6) list_ai2_gene_pane_t1

0xb5c2,	// (0x00025e59) ai2_mp_volume_pane_g3

0x0002,

0xf9eb,	// (0x0002a282) ai2_mp_volume_pane_g

0x6ef6,	// (0x0002178d) volume_small_pane_cp3

0xb5ca,	// (0x00025e61) aid_size_cell_ai2_button

0xb5d2,	// (0x00025e69) grid_ai2_button_pane

0xb5db,	// (0x00025e72) cell_ai2_button_pane_ParamLimits

0xb5db,	// (0x00025e72) cell_ai2_button_pane

0x7ccb,	// (0x00022562) cell_ai2_button_pane_g1

0x7cd5,	// (0x0002256c) grid_highlight_pane_cp8

0xb57a,	// (0x00025e11) ai2_gene_pane_t1_ParamLimits

0xb57a,	// (0x00025e11) ai2_gene_pane_t1

0x6557,	// (0x00020dee) aid_height_parent_landscape

0xaeff,	// (0x00025796) aid_height_set_list

0xaf10,	// (0x000257a7) aid_size_parent

0xb219,	// (0x00025ab0) aid_size_cell_graphic_pane_ParamLimits

0xb49c,	// (0x00025d33) popup_ai2_data_window_g1_ParamLimits

0xb49c,	// (0x00025d33) popup_ai2_data_window_g1

0xb4a8,	// (0x00025d3f) ai2_news_ticker_pane_g1

0xb4b0,	// (0x00025d47) ai2_news_ticker_pane_g2

0x0001,

0xf9d7,	// (0x0002a26e) ai2_news_ticker_pane_g

0xb4b8,	// (0x00025d4f) ai2_news_ticker_pane_t1

0xb4c6,	// (0x00025d5d) ai2_news_ticker_pane_t2

0x0001,

0xf9dc,	// (0x0002a273) ai2_news_ticker_pane_t

0xb4f3,	// (0x00025d8a) heading_ai2_gene_pane_g1

0xb4fb,	// (0x00025d92) heading_ai2_gene_pane_t1_ParamLimits

0xb4fb,	// (0x00025d92) heading_ai2_gene_pane_t1

0xb510,	// (0x00025da7) list_highlight_pane_cp6

0xb518,	// (0x00025daf) ai2_gene_pane_ParamLimits

0xb518,	// (0x00025daf) ai2_gene_pane

0xb53d,	// (0x00025dd4) list_ai2_gene_pane_t2

0x0001,

0xf9e1,	// (0x0002a278) list_ai2_gene_pane_t

0xb54b,	// (0x00025de2) list_highlight_pane_cp8_ParamLimits

0xb54b,	// (0x00025de2) list_highlight_pane_cp8

0xb55c,	// (0x00025df3) ai2_gene_pane_g1_ParamLimits

0xb55c,	// (0x00025df3) ai2_gene_pane_g1

0xb56e,	// (0x00025e05) ai2_gene_pane_g2_ParamLimits

0xb56e,	// (0x00025e05) ai2_gene_pane_g2

0x0001,

0xf9e6,	// (0x0002a27d) ai2_gene_pane_g_ParamLimits

0xf9e6,	// (0x0002a27d) ai2_gene_pane_g

0x85b7,	// (0x00022e4e) scroll_pane_cp12

0x6516,	// (0x00020dad) control_pane_t3_ParamLimits

0x6516,	// (0x00020dad) control_pane_t3

0x951f,	// (0x00023db6) status_small_pane_g8_ParamLimits

0x951f,	// (0x00023db6) status_small_pane_g8

0x66cb,	// (0x00020f62) popup_find_window_ParamLimits

0x68de,	// (0x00021175) popup_note_image_window_ParamLimits

0x5203,	// (0x0001fa9a) list_double2_graphic_pane_vc_g1_ParamLimits

0x5203,	// (0x0001fa9a) list_double2_graphic_pane_vc_g1

0x520f,	// (0x0001faa6) list_double2_graphic_pane_vc_g2_ParamLimits

0x520f,	// (0x0001faa6) list_double2_graphic_pane_vc_g2

0x521b,	// (0x0001fab2) list_double2_graphic_pane_vc_g3_ParamLimits

0x521b,	// (0x0001fab2) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b6,	// (0x0002a04d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002a04d) list_double2_graphic_pane_vc_g

0x526f,	// (0x0001fb06) list_double2_graphic_pane_vc_t1_ParamLimits

0x526f,	// (0x0001fb06) list_double2_graphic_pane_vc_t1

0x520f,	// (0x0001faa6) list_single_heading_pane_vc_g1_ParamLimits

0x520f,	// (0x0001faa6) list_single_heading_pane_vc_g1

0x521b,	// (0x0001fab2) list_single_heading_pane_vc_g2_ParamLimits

0x521b,	// (0x0001fab2) list_single_heading_pane_vc_g2

0x0001,

0xf7de,	// (0x0002a075) list_single_heading_pane_vc_g_ParamLimits

0xf7de,	// (0x0002a075) list_single_heading_pane_vc_g

0x5285,	// (0x0001fb1c) list_single_heading_pane_vc_t1_ParamLimits

0x5285,	// (0x0001fb1c) list_single_heading_pane_vc_t1

0x529d,	// (0x0001fb34) list_single_heading_pane_vc_t2_ParamLimits

0x529d,	// (0x0001fb34) list_single_heading_pane_vc_t2

0x0001,

0xf7e3,	// (0x0002a07a) list_single_heading_pane_vc_t_ParamLimits

0xf7e3,	// (0x0002a07a) list_single_heading_pane_vc_t

0x52b9,	// (0x0001fb50) list_setting_number_pane_vc_g1_ParamLimits

0x52b9,	// (0x0001fb50) list_setting_number_pane_vc_g1

0x52c5,	// (0x0001fb5c) list_setting_number_pane_vc_g2_ParamLimits

0x52c5,	// (0x0001fb5c) list_setting_number_pane_vc_g2

0x0001,

0xf7e8,	// (0x0002a07f) list_setting_number_pane_vc_g_ParamLimits

0xf7e8,	// (0x0002a07f) list_setting_number_pane_vc_g

0x52d1,	// (0x0001fb68) list_setting_number_pane_vc_t1_ParamLimits

0x52d1,	// (0x0001fb68) list_setting_number_pane_vc_t1

0x52e5,	// (0x0001fb7c) list_setting_number_pane_vc_t2_ParamLimits

0x52e5,	// (0x0001fb7c) list_setting_number_pane_vc_t2

0x5301,	// (0x0001fb98) list_setting_number_pane_vc_t3_ParamLimits

0x5301,	// (0x0001fb98) list_setting_number_pane_vc_t3

0x0002,

0xf7ed,	// (0x0002a084) list_setting_number_pane_vc_t_ParamLimits

0xf7ed,	// (0x0002a084) list_setting_number_pane_vc_t

0x531f,	// (0x0001fbb6) set_value_pane_vc_ParamLimits

0x531f,	// (0x0001fbb6) set_value_pane_vc

0xb0c8,	// (0x0002595f) list_double2_graphic_pane_vc_ParamLimits

0xb0c8,	// (0x0002595f) list_double2_graphic_pane_vc

0xb0c8,	// (0x0002595f) list_double2_large_graphic_pane_vc_ParamLimits

0xb0c8,	// (0x0002595f) list_double2_large_graphic_pane_vc

0xb0c8,	// (0x0002595f) list_double2_pane_vc_ParamLimits

0xb0c8,	// (0x0002595f) list_double2_pane_vc

0xb0c8,	// (0x0002595f) list_double_graphic_heading_pane_vc_ParamLimits

0xb0c8,	// (0x0002595f) list_double_graphic_heading_pane_vc

0xb0c8,	// (0x0002595f) list_double_graphic_pane_vc_ParamLimits

0xb0c8,	// (0x0002595f) list_double_graphic_pane_vc

0xb0c8,	// (0x0002595f) list_double_heading_pane_vc_ParamLimits

0xb0c8,	// (0x0002595f) list_double_heading_pane_vc

0xb0c8,	// (0x0002595f) list_double_large_graphic_pane_vc_ParamLimits

0xb0c8,	// (0x0002595f) list_double_large_graphic_pane_vc

0xb0c8,	// (0x0002595f) list_double_number_pane_vc_ParamLimits

0xb0c8,	// (0x0002595f) list_double_number_pane_vc

0xb0c8,	// (0x0002595f) list_double_pane_vc_ParamLimits

0xb0c8,	// (0x0002595f) list_double_pane_vc

0xb0c8,	// (0x0002595f) list_double_time_pane_vc_ParamLimits

0xb0c8,	// (0x0002595f) list_double_time_pane_vc

0xb0c8,	// (0x0002595f) list_setting_number_pane_vc_ParamLimits

0xb0c8,	// (0x0002595f) list_setting_number_pane_vc

0xb0c8,	// (0x0002595f) list_setting_pane_vc_ParamLimits

0xb0c8,	// (0x0002595f) list_setting_pane_vc

0xb0c8,	// (0x0002595f) list_single_graphic_heading_pane_vc_ParamLimits

0xb0c8,	// (0x0002595f) list_single_graphic_heading_pane_vc

0xb0c8,	// (0x0002595f) list_single_heading_pane_vc_ParamLimits

0xb0c8,	// (0x0002595f) list_single_heading_pane_vc

0x53f8,	// (0x0001fc8f) list_single_number_heading_pane_vc_ParamLimits

0x53f8,	// (0x0001fc8f) list_single_number_heading_pane_vc

0x5203,	// (0x0001fa9a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5203,	// (0x0001fa9a) list_double_graphic_heading_pane_vc_g1

0x520f,	// (0x0001faa6) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x520f,	// (0x0001faa6) list_double_graphic_heading_pane_vc_g2

0x521b,	// (0x0001fab2) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x521b,	// (0x0001fab2) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b6,	// (0x0002a04d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002a04d) list_double_graphic_heading_pane_vc_g

0x5479,	// (0x0001fd10) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5479,	// (0x0001fd10) list_double_graphic_heading_pane_vc_t1

0x5495,	// (0x0001fd2c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5495,	// (0x0001fd2c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f2,	// (0x0002a289) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f2,	// (0x0002a289) list_double_graphic_heading_pane_vc_t

0x52b9,	// (0x0001fb50) list_setting_pane_vc_g1_ParamLimits

0x52b9,	// (0x0001fb50) list_setting_pane_vc_g1

0x52c5,	// (0x0001fb5c) list_setting_pane_vc_g2_ParamLimits

0x52c5,	// (0x0001fb5c) list_setting_pane_vc_g2

0x0001,

0xf7e8,	// (0x0002a07f) list_setting_pane_vc_g_ParamLimits

0xf7e8,	// (0x0002a07f) list_setting_pane_vc_g

0x54b3,	// (0x0001fd4a) list_setting_pane_vc_t1_ParamLimits

0x54b3,	// (0x0001fd4a) list_setting_pane_vc_t1

0x54cf,	// (0x0001fd66) list_setting_pane_vc_t2_ParamLimits

0x54cf,	// (0x0001fd66) list_setting_pane_vc_t2

0x0001,

0xfa20,	// (0x0002a2b7) list_setting_pane_vc_t_ParamLimits

0xfa20,	// (0x0002a2b7) list_setting_pane_vc_t

0x531f,	// (0x0001fbb6) set_value_pane_cp_vc_ParamLimits

0x531f,	// (0x0001fbb6) set_value_pane_cp_vc

0x520f,	// (0x0001faa6) list_single_number_heading_pane_vc_g1_ParamLimits

0x520f,	// (0x0001faa6) list_single_number_heading_pane_vc_g1

0x521b,	// (0x0001fab2) list_single_number_heading_pane_vc_g2_ParamLimits

0x521b,	// (0x0001fab2) list_single_number_heading_pane_vc_g2

0x0001,

0xf7de,	// (0x0002a075) list_single_number_heading_pane_vc_g_ParamLimits

0xf7de,	// (0x0002a075) list_single_number_heading_pane_vc_g

0x5285,	// (0x0001fb1c) list_single_number_heading_pane_vc_t1_ParamLimits

0x5285,	// (0x0001fb1c) list_single_number_heading_pane_vc_t1

0x54eb,	// (0x0001fd82) list_single_number_heading_pane_vc_t2_ParamLimits

0x54eb,	// (0x0001fd82) list_single_number_heading_pane_vc_t2

0x54ff,	// (0x0001fd96) list_single_number_heading_pane_vc_t3_ParamLimits

0x54ff,	// (0x0001fd96) list_single_number_heading_pane_vc_t3

0x0002,

0xfa25,	// (0x0002a2bc) list_single_number_heading_pane_vc_t_ParamLimits

0xfa25,	// (0x0002a2bc) list_single_number_heading_pane_vc_t

0x5203,	// (0x0001fa9a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5203,	// (0x0001fa9a) list_single_graphic_heading_pane_vc_g1

0x520f,	// (0x0001faa6) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x520f,	// (0x0001faa6) list_single_graphic_heading_pane_vc_g4

0x521b,	// (0x0001fab2) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x521b,	// (0x0001fab2) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b6,	// (0x0002a04d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002a04d) list_single_graphic_heading_pane_vc_g

0x5285,	// (0x0001fb1c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5285,	// (0x0001fb1c) list_single_graphic_heading_pane_vc_t1

0x5511,	// (0x0001fda8) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5511,	// (0x0001fda8) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2c,	// (0x0002a2c3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x0002a2c3) list_single_graphic_heading_pane_vc_t

0x520f,	// (0x0001faa6) list_double2_pane_vc_g1_ParamLimits

0x520f,	// (0x0001faa6) list_double2_pane_vc_g1

0x521b,	// (0x0001fab2) list_double2_pane_vc_g2_ParamLimits

0x521b,	// (0x0001fab2) list_double2_pane_vc_g2

0x0001,

0xf7de,	// (0x0002a075) list_double2_pane_vc_g_ParamLimits

0xf7de,	// (0x0002a075) list_double2_pane_vc_g

0x5525,	// (0x0001fdbc) list_double2_pane_vc_t1_ParamLimits

0x5525,	// (0x0001fdbc) list_double2_pane_vc_t1

0x553b,	// (0x0001fdd2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x553b,	// (0x0001fdd2) list_double2_large_graphic_pane_vc_g1

0x520f,	// (0x0001faa6) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x520f,	// (0x0001faa6) list_double2_large_graphic_pane_vc_g2

0x521b,	// (0x0001fab2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x521b,	// (0x0001fab2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa31,	// (0x0002a2c8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa31,	// (0x0002a2c8) list_double2_large_graphic_pane_vc_g

0x5547,	// (0x0001fdde) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5547,	// (0x0001fdde) list_double2_large_graphic_pane_vc_t1

0x555d,	// (0x0001fdf4) list_double_time_pane_vc_g1_ParamLimits

0x555d,	// (0x0001fdf4) list_double_time_pane_vc_g1

0x5569,	// (0x0001fe00) list_double_time_pane_vc_g2_ParamLimits

0x5569,	// (0x0001fe00) list_double_time_pane_vc_g2

0x0001,

0xfa38,	// (0x0002a2cf) list_double_time_pane_vc_g_ParamLimits

0xfa38,	// (0x0002a2cf) list_double_time_pane_vc_g

0x5575,	// (0x0001fe0c) list_double_time_pane_vc_t1_ParamLimits

0x5575,	// (0x0001fe0c) list_double_time_pane_vc_t1

0x5599,	// (0x0001fe30) list_double_time_pane_vc_t2_ParamLimits

0x5599,	// (0x0001fe30) list_double_time_pane_vc_t2

0x55e8,	// (0x0001fe7f) list_double_time_pane_vc_t3_ParamLimits

0x55e8,	// (0x0001fe7f) list_double_time_pane_vc_t3

0x55fa,	// (0x0001fe91) list_double_time_pane_vc_t4_ParamLimits

0x55fa,	// (0x0001fe91) list_double_time_pane_vc_t4

0x0003,

0xfa3d,	// (0x0002a2d4) list_double_time_pane_vc_t_ParamLimits

0xfa3d,	// (0x0002a2d4) list_double_time_pane_vc_t

0x520f,	// (0x0001faa6) list_double_pane_vc_g1_ParamLimits

0x520f,	// (0x0001faa6) list_double_pane_vc_g1

0x521b,	// (0x0001fab2) list_double_pane_vc_g2_ParamLimits

0x521b,	// (0x0001fab2) list_double_pane_vc_g2

0x0001,

0xf7de,	// (0x0002a075) list_double_pane_vc_g_ParamLimits

0xf7de,	// (0x0002a075) list_double_pane_vc_g

0x560e,	// (0x0001fea5) list_double_pane_vc_t1_ParamLimits

0x560e,	// (0x0001fea5) list_double_pane_vc_t1

0x5622,	// (0x0001feb9) list_double_pane_vc_t2_ParamLimits

0x5622,	// (0x0001feb9) list_double_pane_vc_t2

0x0001,

0xfa46,	// (0x0002a2dd) list_double_pane_vc_t_ParamLimits

0xfa46,	// (0x0002a2dd) list_double_pane_vc_t

0x520f,	// (0x0001faa6) list_double_number_pane_vc_g1_ParamLimits

0x520f,	// (0x0001faa6) list_double_number_pane_vc_g1

0x521b,	// (0x0001fab2) list_double_number_pane_vc_g2_ParamLimits

0x521b,	// (0x0001fab2) list_double_number_pane_vc_g2

0x0001,

0xf7de,	// (0x0002a075) list_double_number_pane_vc_g_ParamLimits

0xf7de,	// (0x0002a075) list_double_number_pane_vc_g

0x563a,	// (0x0001fed1) list_double_number_pane_vc_t1_ParamLimits

0x563a,	// (0x0001fed1) list_double_number_pane_vc_t1

0x564c,	// (0x0001fee3) list_double_number_pane_vc_t2_ParamLimits

0x564c,	// (0x0001fee3) list_double_number_pane_vc_t2

0x5660,	// (0x0001fef7) list_double_number_pane_vc_t3_ParamLimits

0x5660,	// (0x0001fef7) list_double_number_pane_vc_t3

0x0002,

0xfa4b,	// (0x0002a2e2) list_double_number_pane_vc_t_ParamLimits

0xfa4b,	// (0x0002a2e2) list_double_number_pane_vc_t

0x5678,	// (0x0001ff0f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5678,	// (0x0001ff0f) list_double_large_graphic_pane_vc_g1

0x5684,	// (0x0001ff1b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5684,	// (0x0001ff1b) list_double_large_graphic_pane_vc_g2

0x521b,	// (0x0001fab2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x521b,	// (0x0001fab2) list_double_large_graphic_pane_vc_g3

0x5693,	// (0x0001ff2a) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5693,	// (0x0001ff2a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa52,	// (0x0002a2e9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa52,	// (0x0002a2e9) list_double_large_graphic_pane_vc_g

0x569f,	// (0x0001ff36) list_double_large_graphic_pane_vc_t1_ParamLimits

0x569f,	// (0x0001ff36) list_double_large_graphic_pane_vc_t1

0x56b3,	// (0x0001ff4a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x56b3,	// (0x0001ff4a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5b,	// (0x0002a2f2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5b,	// (0x0002a2f2) list_double_large_graphic_pane_vc_t

0x520f,	// (0x0001faa6) list_double_heading_pane_vc_g1_ParamLimits

0x520f,	// (0x0001faa6) list_double_heading_pane_vc_g1

0x521b,	// (0x0001fab2) list_double_heading_pane_vc_g2_ParamLimits

0x521b,	// (0x0001fab2) list_double_heading_pane_vc_g2

0x0001,

0xf7de,	// (0x0002a075) list_double_heading_pane_vc_g_ParamLimits

0xf7de,	// (0x0002a075) list_double_heading_pane_vc_g

0x56cc,	// (0x0001ff63) list_double_heading_pane_vc_t1_ParamLimits

0x56cc,	// (0x0001ff63) list_double_heading_pane_vc_t1

0x5285,	// (0x0001fb1c) list_double_heading_pane_vc_t2_ParamLimits

0x5285,	// (0x0001fb1c) list_double_heading_pane_vc_t2

0x0001,

0xfa60,	// (0x0002a2f7) list_double_heading_pane_vc_t_ParamLimits

0xfa60,	// (0x0002a2f7) list_double_heading_pane_vc_t

0x5203,	// (0x0001fa9a) list_double_graphic_pane_vc_g1_ParamLimits

0x5203,	// (0x0001fa9a) list_double_graphic_pane_vc_g1

0x56e0,	// (0x0001ff77) list_double_graphic_pane_vc_g2_ParamLimits

0x56e0,	// (0x0001ff77) list_double_graphic_pane_vc_g2

0x56ef,	// (0x0001ff86) list_double_graphic_pane_vc_g3_ParamLimits

0x56ef,	// (0x0001ff86) list_double_graphic_pane_vc_g3

0x0002,

0xfa65,	// (0x0002a2fc) list_double_graphic_pane_vc_g_ParamLimits

0xfa65,	// (0x0002a2fc) list_double_graphic_pane_vc_g

0x56fb,	// (0x0001ff92) list_double_graphic_pane_vc_t1_ParamLimits

0x56fb,	// (0x0001ff92) list_double_graphic_pane_vc_t1

0x570f,	// (0x0001ffa6) list_double_graphic_pane_vc_t2_ParamLimits

0x570f,	// (0x0001ffa6) list_double_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x0002a303) list_double_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x0002a303) list_double_graphic_pane_vc_t

0x5b1e,	// (0x000203b5) aid_size_cell_fastswap

0x5b26,	// (0x000203bd) aid_size_cell_touch_ParamLimits

0x5b26,	// (0x000203bd) aid_size_cell_touch

0x5d81,	// (0x00020618) popup_fast_swap_wide_window_ParamLimits

0x5d81,	// (0x00020618) popup_fast_swap_wide_window

0x5e95,	// (0x0002072c) touch_pane_ParamLimits

0x5e95,	// (0x0002072c) touch_pane

0x860d,	// (0x00022ea4) button_value_adjust_pane_cp2

0x4eea,	// (0x0001f781) button_value_adjust_pane_cp4

0x4f0a,	// (0x0001f7a1) form_field_data_pane_cp2

0x4f29,	// (0x0001f7c0) form_field_data_wide_pane_cp2

0x8a8a,	// (0x00023321) bg_scroll_pane_ParamLimits

0x6123,	// (0x000209ba) scroll_handle_pane_ParamLimits

0x6137,	// (0x000209ce) scroll_sc2_down_pane_ParamLimits

0x6137,	// (0x000209ce) scroll_sc2_down_pane

0x8abb,	// (0x00023352) scroll_sc2_up_pane_ParamLimits

0x8abb,	// (0x00023352) scroll_sc2_up_pane

0xbcbe,	// (0x00026555) grid_wheel_folder_pane_g1_ParamLimits

0xbcbe,	// (0x00026555) grid_wheel_folder_pane_g1

0x62fc,	// (0x00020b93) clock_nsta_pane_cp2_ParamLimits

0x62fc,	// (0x00020b93) clock_nsta_pane_cp2

0x8805,	// (0x0002309c) listscroll_midp_pane_ParamLimits

0x92b0,	// (0x00023b47) midp_canvas_pane

0x959a,	// (0x00023e31) nsta_clock_indic_pane

0x95ce,	// (0x00023e65) listscroll_form_pane_vc

0x95d6,	// (0x00023e6d) listscroll_set_pane_vc_ParamLimits

0x95d6,	// (0x00023e6d) listscroll_set_pane_vc

0x96db,	// (0x00023f72) clock_nsta_pane

0x9750,	// (0x00023fe7) indicator_nsta_pane

0x9a30,	// (0x000242c7) bg_popup_sub_pane_cp2_ParamLimits

0x9a44,	// (0x000242db) find_pane_cp2_ParamLimits

0x9a44,	// (0x000242db) find_pane_cp2

0x9a5a,	// (0x000242f1) grid_toobar_pane_ParamLimits

0x9b3a,	// (0x000243d1) list_form_gen_pane_vc_ParamLimits

0x9b3a,	// (0x000243d1) list_form_gen_pane_vc

0x9b50,	// (0x000243e7) scroll_pane_cp8_vc_ParamLimits

0x9b50,	// (0x000243e7) scroll_pane_cp8_vc

0x9bd8,	// (0x0002446f) data_form_wide_pane_vc_ParamLimits

0x9bd8,	// (0x0002446f) data_form_wide_pane_vc

0x9be4,	// (0x0002447b) form_field_data_wide_pane_vc_g1

0x9bec,	// (0x00024483) form_field_data_wide_pane_vc_t1_ParamLimits

0x9bec,	// (0x00024483) form_field_data_wide_pane_vc_t1

0x8621,	// (0x00022eb8) input_focus_pane_cp6_vc_ParamLimits

0x8621,	// (0x00022eb8) input_focus_pane_cp6_vc

0x9f18,	// (0x000247af) list_midp_pane_ParamLimits

0x9f24,	// (0x000247bb) scroll_pane_cp16_ParamLimits

0x9f24,	// (0x000247bb) scroll_pane_cp16

0x9f72,	// (0x00024809) button_value_adjust_pane_ParamLimits

0x9f72,	// (0x00024809) button_value_adjust_pane

0xaf22,	// (0x000257b9) button_value_adjust_pane_cp6_ParamLimits

0xaf22,	// (0x000257b9) button_value_adjust_pane_cp6

0xb04c,	// (0x000258e3) settings_code_pane_cp_ParamLimits

0xb04c,	// (0x000258e3) settings_code_pane_cp

0x7ccb,	// (0x00022562) cell_touch_pane_g1

0x7ccb,	// (0x00022562) cell_touch_pane_g2

0x0001,

0xf709,	// (0x00029fa0) cell_touch_pane_g

0xb5ed,	// (0x00025e84) cell_touch_pane_cp_ParamLimits

0xb5ed,	// (0x00025e84) cell_touch_pane_cp

0xb5fd,	// (0x00025e94) cell_touch_pane_ParamLimits

0xb5fd,	// (0x00025e94) cell_touch_pane

0x7ccb,	// (0x00022562) scroll_sc2_down_pane_g1

0x7ccb,	// (0x00022562) scroll_sc2_up_pane_g1

0x7cd5,	// (0x0002256c) bg_set_opt_pane_cp4_vc

0xb60f,	// (0x00025ea6) list_set_graphic_pane_vc_g1_ParamLimits

0xb60f,	// (0x00025ea6) list_set_graphic_pane_vc_g1

0xb61b,	// (0x00025eb2) list_set_graphic_pane_vc_g2_ParamLimits

0xb61b,	// (0x00025eb2) list_set_graphic_pane_vc_g2

0x0001,

0xf9f7,	// (0x0002a28e) list_set_graphic_pane_vc_g_ParamLimits

0xf9f7,	// (0x0002a28e) list_set_graphic_pane_vc_g

0xb627,	// (0x00025ebe) text_primary_small_cp13_vc_ParamLimits

0xb627,	// (0x00025ebe) text_primary_small_cp13_vc

0xb63f,	// (0x00025ed6) list_set_graphic_pane_vc_ParamLimits

0xb63f,	// (0x00025ed6) list_set_graphic_pane_vc

0x7cd5,	// (0x0002256c) input_focus_pane_cp2_vc

0x7ccb,	// (0x00022562) setting_code_pane_vc_g1

0x7e00,	// (0x00022697) setting_code_pane_vc_t1

0xb651,	// (0x00025ee8) set_text_pane_vc_t1_ParamLimits

0xb651,	// (0x00025ee8) set_text_pane_vc_t1

0x7cd5,	// (0x0002256c) input_focus_pane_cp1_vc

0xb66d,	// (0x00025f04) list_set_text_pane_vc

0x7ccb,	// (0x00022562) setting_text_pane_vc_g1

0x7cd5,	// (0x0002256c) bg_set_opt_pane_cp2_vc

0x7df7,	// (0x0002268e) setting_slider_graphic_pane_vc_g1

0xb677,	// (0x00025f0e) setting_slider_graphic_pane_vc_t1

0xb687,	// (0x00025f1e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fc,	// (0x0002a293) setting_slider_graphic_pane_vc_t

0xb697,	// (0x00025f2e) slider_set_pane_cp_vc

0xb69f,	// (0x00025f36) slider_set_pane_vc_g1

0xb6a8,	// (0x00025f3f) slider_set_pane_vc_g2

0x0006,

0xfa01,	// (0x0002a298) slider_set_pane_vc_g

0x867c,	// (0x00022f13) set_opt_bg_pane_g1_copy1

0x8684,	// (0x00022f1b) set_opt_bg_pane_g2_copy1

0xb6d4,	// (0x00025f6b) set_opt_bg_pane_g3_copy1

0x8694,	// (0x00022f2b) set_opt_bg_pane_g4_copy1

0x869c,	// (0x00022f33) set_opt_bg_pane_g5_copy1

0x86a4,	// (0x00022f3b) set_opt_bg_pane_g6_copy1

0xb6de,	// (0x00025f75) set_opt_bg_pane_g7_copy1

0xb6e6,	// (0x00025f7d) set_opt_bg_pane_g8_copy1

0xb6f0,	// (0x00025f87) set_opt_bg_pane_g9_copy1

0x7cd5,	// (0x0002256c) bg_set_opt_pane_cp_vc

0xb6fa,	// (0x00025f91) setting_slider_pane_vc_t1

0xb709,	// (0x00025fa0) setting_slider_pane_vc_t2

0xb719,	// (0x00025fb0) setting_slider_pane_vc_t3

0x0002,

0xfa10,	// (0x0002a2a7) setting_slider_pane_vc_t

0xb729,	// (0x00025fc0) slider_set_pane_vc

0x6c4c,	// (0x000214e3) volume_set_pane_vc_g1

0x6c55,	// (0x000214ec) volume_set_pane_vc_g2

0x6c5e,	// (0x000214f5) volume_set_pane_vc_g3

0x6c67,	// (0x000214fe) volume_set_pane_vc_g4

0x6c70,	// (0x00021507) volume_set_pane_vc_g5

0x6c79,	// (0x00021510) volume_set_pane_vc_g6

0x6c82,	// (0x00021519) volume_set_pane_vc_g7

0x6c8b,	// (0x00021522) volume_set_pane_vc_g8

0x6c94,	// (0x0002152b) volume_set_pane_vc_g9

0x6c9d,	// (0x00021534) volume_set_pane_vc_g10

0x0009,

0xf8b5,	// (0x0002a14c) volume_set_pane_vc_g

0xb731,	// (0x00025fc8) volume_set_pane_vc

0xb739,	// (0x00025fd0) button_value_adjust_pane_cp1_vc

0xb743,	// (0x00025fda) list_highlight_pane_cp2_vc

0xb74c,	// (0x00025fe3) list_set_pane_vc_ParamLimits

0xb74c,	// (0x00025fe3) list_set_pane_vc

0xb7b6,	// (0x0002604d) main_pane_set_vc_t1_ParamLimits

0xb7b6,	// (0x0002604d) main_pane_set_vc_t1

0xb7cb,	// (0x00026062) main_pane_set_vc_t2_ParamLimits

0xb7cb,	// (0x00026062) main_pane_set_vc_t2

0xb7dd,	// (0x00026074) main_pane_set_vc_t3_ParamLimits

0xb7dd,	// (0x00026074) main_pane_set_vc_t3

0xb7f1,	// (0x00026088) main_pane_set_vc_t4_ParamLimits

0xb7f1,	// (0x00026088) main_pane_set_vc_t4

0x0003,

0xfa17,	// (0x0002a2ae) main_pane_set_vc_t_ParamLimits

0xfa17,	// (0x0002a2ae) main_pane_set_vc_t

0xb805,	// (0x0002609c) setting_code_pane_vc_ParamLimits

0xb805,	// (0x0002609c) setting_code_pane_vc

0xb816,	// (0x000260ad) setting_slider_graphic_pane_vc

0xb816,	// (0x000260ad) setting_slider_pane_vc

0xb816,	// (0x000260ad) setting_text_pane_vc

0xb816,	// (0x000260ad) setting_volume_pane_vc

0xb820,	// (0x000260b7) scroll_pane_cp121_vc

0x85fb,	// (0x00022e92) set_content_pane_vc

0xb828,	// (0x000260bf) button_value_adjust_pane_g1

0xb831,	// (0x000260c8) button_value_adjust_pane_g2

0x0001,

0xfa71,	// (0x0002a308) button_value_adjust_pane_g

0xb83a,	// (0x000260d1) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb83a,	// (0x000260d1) form_field_slider_wide_pane_vc_t1

0xb84e,	// (0x000260e5) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb84e,	// (0x000260e5) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa76,	// (0x0002a30d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa76,	// (0x0002a30d) form_field_slider_wide_pane_vc_t

0x8030,	// (0x000228c7) input_focus_pane_cp10_vc_ParamLimits

0x8030,	// (0x000228c7) input_focus_pane_cp10_vc

0xb87c,	// (0x00026113) slider_cont_pane_cp1_vc_ParamLimits

0xb87c,	// (0x00026113) slider_cont_pane_cp1_vc

0xb88e,	// (0x00026125) slider_form_pane_g1_cp2

0xb6a8,	// (0x00025f3f) slider_form_pane_g2_cp2

0xb8bb,	// (0x00026152) form_field_slider_pane_vc_t3

0xb8c9,	// (0x00026160) form_field_slider_pane_vc_t4

0xb8d7,	// (0x0002616e) slider_form_pane_vc_ParamLimits

0xb8d7,	// (0x0002616e) slider_form_pane_vc

0xb8e4,	// (0x0002617b) form_field_slider_pane_vc_t1_ParamLimits

0xb8e4,	// (0x0002617b) form_field_slider_pane_vc_t1

0xb84e,	// (0x000260e5) form_field_slider_pane_vc_t2_ParamLimits

0xb84e,	// (0x000260e5) form_field_slider_pane_vc_t2

0x0001,

0xfa88,	// (0x0002a31f) form_field_slider_pane_vc_t_ParamLimits

0xfa88,	// (0x0002a31f) form_field_slider_pane_vc_t

0x8030,	// (0x000228c7) input_focus_pane_cp9_vc_ParamLimits

0x8030,	// (0x000228c7) input_focus_pane_cp9_vc

0xb900,	// (0x00026197) slider_cont_pane_vc_ParamLimits

0xb900,	// (0x00026197) slider_cont_pane_vc

0xb914,	// (0x000261ab) list_form_graphic_pane_cp_vc_ParamLimits

0xb914,	// (0x000261ab) list_form_graphic_pane_cp_vc

0x9be4,	// (0x0002447b) form_field_popup_wide_pane_vc_g1

0xb929,	// (0x000261c0) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb929,	// (0x000261c0) form_field_popup_wide_pane_vc_t1

0x8621,	// (0x00022eb8) input_focus_pane_cp8_vc_ParamLimits

0x8621,	// (0x00022eb8) input_focus_pane_cp8_vc

0xb96e,	// (0x00026205) list_form_wide_pane_vc_ParamLimits

0xb96e,	// (0x00026205) list_form_wide_pane_vc

0xb97a,	// (0x00026211) list_form_graphic_pane_vc_g1

0xb982,	// (0x00026219) list_form_graphic_pane_vc_t1_ParamLimits

0xb982,	// (0x00026219) list_form_graphic_pane_vc_t1

0x7db5,	// (0x0002264c) list_highlight_pane_cp5_vc_ParamLimits

0x7db5,	// (0x0002264c) list_highlight_pane_cp5_vc

0xb99e,	// (0x00026235) list_form_graphic_pane_vc_ParamLimits

0xb99e,	// (0x00026235) list_form_graphic_pane_vc

0x9be4,	// (0x0002447b) form_field_popup_pane_vc_g1

0xb9b4,	// (0x0002624b) form_field_popup_pane_vc_t1_ParamLimits

0xb9b4,	// (0x0002624b) form_field_popup_pane_vc_t1

0x8621,	// (0x00022eb8) input_focus_pane_cp7_vc_ParamLimits

0x8621,	// (0x00022eb8) input_focus_pane_cp7_vc

0xb9cb,	// (0x00026262) list_form_pane_vc_ParamLimits

0xb9cb,	// (0x00026262) list_form_pane_vc

0xb9d7,	// (0x0002626e) data_form_pane_vc_t1_ParamLimits

0xb9d7,	// (0x0002626e) data_form_pane_vc_t1

0x867c,	// (0x00022f13) input_focus_pane_vc_g1

0x8684,	// (0x00022f1b) input_focus_pane_vc_g2

0x868c,	// (0x00022f23) input_focus_pane_vc_g3

0x8694,	// (0x00022f2b) input_focus_pane_vc_g4

0x869c,	// (0x00022f33) input_focus_pane_vc_g5

0x86a4,	// (0x00022f3b) input_focus_pane_vc_g6

0x86ac,	// (0x00022f43) input_focus_pane_vc_g7

0x86b4,	// (0x00022f4b) input_focus_pane_vc_g8

0x86bc,	// (0x00022f53) input_focus_pane_vc_g9

0x7ccb,	// (0x00022562) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x00029f29) input_focus_pane_vc_g

0x9bd8,	// (0x0002446f) data_form_pane_vc_ParamLimits

0x9bd8,	// (0x0002446f) data_form_pane_vc

0x9be4,	// (0x0002447b) form_field_data_pane_vc_g1

0xb9f2,	// (0x00026289) form_field_data_pane_vc_t1_ParamLimits

0xb9f2,	// (0x00026289) form_field_data_pane_vc_t1

0x8621,	// (0x00022eb8) input_focus_pane_vc_ParamLimits

0x8621,	// (0x00022eb8) input_focus_pane_vc

0xba0c,	// (0x000262a3) button_value_adjust_pane_cp3_vc

0xba14,	// (0x000262ab) button_value_adjust_pane_cp5_vc

0xba1c,	// (0x000262b3) form_field_data_pane_vc_ParamLimits

0xba1c,	// (0x000262b3) form_field_data_pane_vc

0xba33,	// (0x000262ca) form_field_data_pane_vc_cp2

0xba3b,	// (0x000262d2) form_field_data_wide_pane_vc_ParamLimits

0xba3b,	// (0x000262d2) form_field_data_wide_pane_vc

0xba51,	// (0x000262e8) form_field_data_wide_pane_vc_cp2

0xba59,	// (0x000262f0) form_field_popup_pane_vc_ParamLimits

0xba59,	// (0x000262f0) form_field_popup_pane_vc

0xba70,	// (0x00026307) form_field_popup_wide_pane_vc_ParamLimits

0xba70,	// (0x00026307) form_field_popup_wide_pane_vc

0xba86,	// (0x0002631d) form_field_slider_pane_vc_ParamLimits

0xba86,	// (0x0002631d) form_field_slider_pane_vc

0xba99,	// (0x00026330) form_field_slider_wide_pane_vc_ParamLimits

0xba99,	// (0x00026330) form_field_slider_wide_pane_vc

0xbaac,	// (0x00026343) grid_touch_1_pane_ParamLimits

0xbaac,	// (0x00026343) grid_touch_1_pane

0xbab8,	// (0x0002634f) grid_touch_2_pane_ParamLimits

0xbab8,	// (0x0002634f) grid_touch_2_pane

0x9565,	// (0x00023dfc) touch_pane_g1_ParamLimits

0x9565,	// (0x00023dfc) touch_pane_g1

0xbad0,	// (0x00026367) cell_app_pane_cp_wide_ParamLimits

0xbad0,	// (0x00026367) cell_app_pane_cp_wide

0xbae1,	// (0x00026378) grid_popup_fast_wide_pane_ParamLimits

0xbae1,	// (0x00026378) grid_popup_fast_wide_pane

0xbaf5,	// (0x0002638c) scroll_pane_cp19_ParamLimits

0xbaf5,	// (0x0002638c) scroll_pane_cp19

0x7cd5,	// (0x0002256c) bg_popup_window_pane_cp20

0xbb09,	// (0x000263a0) listscroll_popup_fast_wide_pane

0x7db5,	// (0x0002264c) grid_indicator_nsta_pane

0xbb11,	// (0x000263a8) clock_nsta_pane_g1

0xbb1a,	// (0x000263b1) clock_nsta_pane_t1

0xbb36,	// (0x000263cd) cell_indicator_nsta_pane_ParamLimits

0xbb36,	// (0x000263cd) cell_indicator_nsta_pane

0xbb6e,	// (0x00026405) cell_indicator_nsta_pane_g1

0xbb7c,	// (0x00026413) cell_indicator_nsta_pane_g2

0x0001,

0xfa99,	// (0x0002a330) cell_indicator_nsta_pane_g

0xbb92,	// (0x00026429) clock_nsta_pane_cp

0xbb9a,	// (0x00026431) indicator_nsta_pane_cp

0xbba2,	// (0x00026439) nsta_clock_indic_pane_g1

0x7e7e,	// (0x00022715) grid_indicator_pane

0x8bb0,	// (0x00023447) scroll_pane_cp29

0x624b,	// (0x00020ae2) indicator_nsta_pane_cp2_ParamLimits

0x624b,	// (0x00020ae2) indicator_nsta_pane_cp2

0x7db5,	// (0x0002264c) main_apps_wheel_pane

0x9df9,	// (0x00024690) form_midp_field_text_pane_ParamLimits

0x9f44,	// (0x000247db) scroll_bar_cp050_ParamLimits

0xbbfb,	// (0x00026492) cell_indicator_pane_ParamLimits

0xbbfb,	// (0x00026492) cell_indicator_pane

0xbc12,	// (0x000264a9) cell_indicator_pane_g1

0xbc1c,	// (0x000264b3) grid_wheel_folder_pane_ParamLimits

0xbc1c,	// (0x000264b3) grid_wheel_folder_pane

0xbc32,	// (0x000264c9) list_wheel_apps_pane_ParamLimits

0xbc32,	// (0x000264c9) list_wheel_apps_pane

0xbc43,	// (0x000264da) main_apps_wheel_pane_g1_ParamLimits

0xbc43,	// (0x000264da) main_apps_wheel_pane_g1

0xbc57,	// (0x000264ee) main_apps_wheel_pane_g2_ParamLimits

0xbc57,	// (0x000264ee) main_apps_wheel_pane_g2

0x0001,

0xfab5,	// (0x0002a34c) main_apps_wheel_pane_g_ParamLimits

0xfab5,	// (0x0002a34c) main_apps_wheel_pane_g

0xbc6f,	// (0x00026506) main_apps_wheel_pane_t1_ParamLimits

0xbc6f,	// (0x00026506) main_apps_wheel_pane_t1

0xbc92,	// (0x00026529) list_wheel_apps_pane_g1

0xbc9a,	// (0x00026531) list_wheel_apps_pane_g2

0xbca2,	// (0x00026539) list_wheel_apps_pane_g3

0xbcaa,	// (0x00026541) list_wheel_apps_pane_g4

0xbcb4,	// (0x0002654b) list_wheel_apps_pane_g5

0x0004,

0xfaba,	// (0x0002a351) list_wheel_apps_pane_g

0x9128,	// (0x000239bf) navi_icon_text_pane

0x960a,	// (0x00023ea1) aid_fill_nsta

0xbcd7,	// (0x0002656e) navi_icon_text_pane_g1

0xbce3,	// (0x0002657a) navi_icon_text_pane_t1

0x8fc6,	// (0x0002385d) list_set_graphic_pane_t1_ParamLimits

0x8fc6,	// (0x0002385d) list_set_graphic_pane_t1

0xa693,	// (0x00024f2a) popup_midp_note_alarm_window_t6_ParamLimits

0xa693,	// (0x00024f2a) popup_midp_note_alarm_window_t6

0xa6a5,	// (0x00024f3c) popup_midp_note_alarm_window_t7_ParamLimits

0xa6a5,	// (0x00024f3c) popup_midp_note_alarm_window_t7

0xa6b7,	// (0x00024f4e) popup_midp_note_alarm_window_t8_ParamLimits

0xa6b7,	// (0x00024f4e) popup_midp_note_alarm_window_t8

0xa6c9,	// (0x00024f60) popup_midp_note_alarm_window_t9_ParamLimits

0xa6c9,	// (0x00024f60) popup_midp_note_alarm_window_t9

0xa6db,	// (0x00024f72) popup_midp_note_alarm_window_t10_ParamLimits

0xa6db,	// (0x00024f72) popup_midp_note_alarm_window_t10

0xa6ed,	// (0x00024f84) popup_midp_note_alarm_window_t11_ParamLimits

0xa6ed,	// (0x00024f84) popup_midp_note_alarm_window_t11

0xa6ff,	// (0x00024f96) scroll_pane_cp17_ParamLimits

0xa6ff,	// (0x00024f96) scroll_pane_cp17

0x6c4c,	// (0x000214e3) volume_small_pane_cp_g1

0x6eff,	// (0x00021796) volume_small_pane_cp_g2

0x6f08,	// (0x0002179f) volume_small_pane_cp_g3

0x6f11,	// (0x000217a8) volume_small_pane_cp_g4

0x6f1a,	// (0x000217b1) volume_small_pane_cp_g5

0x6f23,	// (0x000217ba) volume_small_pane_cp_g6

0x6f2c,	// (0x000217c3) volume_small_pane_cp_g7

0x6f35,	// (0x000217cc) volume_small_pane_cp_g8

0x6f3e,	// (0x000217d5) volume_small_pane_cp_g9

0x6f47,	// (0x000217de) volume_small_pane_cp_g10

0x9377,	// (0x00023c0e) midp_ticker_pane_g1_ParamLimits

0x9383,	// (0x00023c1a) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x00029ff5) midp_ticker_pane_g_ParamLimits

0x938f,	// (0x00023c26) midp_ticker_pane_t1_ParamLimits

0x9620,	// (0x00023eb7) aid_fill_nsta_2

0x9f30,	// (0x000247c7) list_form2_midp_pane

0xb097,	// (0x0002592e) midp_editing_number_pane_ParamLimits

0xb0a6,	// (0x0002593d) midp_ticker_pane_ParamLimits

0xbcf5,	// (0x0002658c) form2_midp_field_pane

0xbd19,	// (0x000265b0) scroll_pane_cp51

0xbd39,	// (0x000265d0) form2_midp_button_pane_ParamLimits

0xbd39,	// (0x000265d0) form2_midp_button_pane

0xbd4b,	// (0x000265e2) form2_midp_content_pane_ParamLimits

0xbd4b,	// (0x000265e2) form2_midp_content_pane

0xbd65,	// (0x000265fc) form2_midp_field_choice_group_pane

0xbd6d,	// (0x00026604) form2_midp_field_pane_g1

0xbd75,	// (0x0002660c) form2_midp_field_pane_g2

0xbd7d,	// (0x00026614) form2_midp_field_pane_g3

0xbd85,	// (0x0002661c) form2_midp_field_pane_g4

0x0003,

0xfadf,	// (0x0002a376) form2_midp_field_pane_g

0xbd8d,	// (0x00026624) form2_midp_gauge_slider_pane

0xbd95,	// (0x0002662c) form2_midp_gauge_wait_pane

0xbd9d,	// (0x00026634) form2_midp_image_pane_ParamLimits

0xbd9d,	// (0x00026634) form2_midp_image_pane

0xbdb8,	// (0x0002664f) form2_midp_label_pane_ParamLimits

0xbdb8,	// (0x0002664f) form2_midp_label_pane

0xbdd1,	// (0x00026668) form2_midp_label_pane_cp_ParamLimits

0xbdd1,	// (0x00026668) form2_midp_label_pane_cp

0xbdf2,	// (0x00026689) form2_midp_string_pane_ParamLimits

0xbdf2,	// (0x00026689) form2_midp_string_pane

0x5727,	// (0x0001ffbe) form2_midp_text_pane_ParamLimits

0x5727,	// (0x0001ffbe) form2_midp_text_pane

0xbe04,	// (0x0002669b) form2_midp_time_pane

0xbe14,	// (0x000266ab) input_focus_pane_cp51_ParamLimits

0xbe14,	// (0x000266ab) input_focus_pane_cp51

0xbe2c,	// (0x000266c3) form2_midp_label_pane_t1_ParamLimits

0xbe2c,	// (0x000266c3) form2_midp_label_pane_t1

0x5742,	// (0x0001ffd9) form2_mdip_text_pane_t1_ParamLimits

0x5742,	// (0x0001ffd9) form2_mdip_text_pane_t1

0x5760,	// (0x0001fff7) form2_midp_time_pane_t1

0xbe75,	// (0x0002670c) form2_midp_gauge_slider_pane_t1

0xbe87,	// (0x0002671e) form2_midp_gauge_slider_pane_t2

0xbe99,	// (0x00026730) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae8,	// (0x0002a37f) form2_midp_gauge_slider_pane_t

0xbeab,	// (0x00026742) form2_midp_slider_pane

0xbeb7,	// (0x0002674e) form2_midp_gauge_wait_pane_t1

0xbec5,	// (0x0002675c) form2_midp_wait_pane_ParamLimits

0xbec5,	// (0x0002675c) form2_midp_wait_pane

0x9c2b,	// (0x000244c2) list_single_2graphic_pane_cp4_ParamLimits

0x9c2b,	// (0x000244c2) list_single_2graphic_pane_cp4

0xbef0,	// (0x00026787) list_single_midp_graphic_pane_cp_ParamLimits

0xbef0,	// (0x00026787) list_single_midp_graphic_pane_cp

0x7cd5,	// (0x0002256c) list_highlight_pane_cp20

0xbf1f,	// (0x000267b6) list_single_2graphic_pane_g1_cp4

0xbf27,	// (0x000267be) list_single_2graphic_pane_g2_cp4

0xbf2f,	// (0x000267c6) list_single_2graphic_pane_t1_cp4

0x7db5,	// (0x0002264c) list_highlight_pane_cp21

0xbf3e,	// (0x000267d5) list_single_midp_graphic_pane_g4_cp

0xbf4d,	// (0x000267e4) list_single_midp_graphic_pane_t1_cp

0xbf62,	// (0x000267f9) form2_mdip_string_pane_t1_ParamLimits

0xbf62,	// (0x000267f9) form2_mdip_string_pane_t1

0x7cd5,	// (0x0002256c) bg_wml_button_pane_cp2

0x7ccb,	// (0x00022562) form2_midp_image_pane_g1

0x4cd4,	// (0x0001f56b) list_double_large_graphic_pane_g5_ParamLimits

0x4cd4,	// (0x0001f56b) list_double_large_graphic_pane_g5

0x8805,	// (0x0002309c) midp_form_pane_ParamLimits

0x7db5,	// (0x0002264c) main_apps_wheel_pane_ParamLimits

0x6904,	// (0x0002119b) popup_preview_window_ParamLimits

0x6904,	// (0x0002119b) popup_preview_window

0x6abf,	// (0x00021356) popup_touch_info_window_ParamLimits

0x6abf,	// (0x00021356) popup_touch_info_window

0x6add,	// (0x00021374) popup_touch_menu_window_ParamLimits

0x6add,	// (0x00021374) popup_touch_menu_window

0x7cc1,	// (0x00022558) bg_popup_sub_pane_cp6

0xc05b,	// (0x000268f2) list_touch_menu_pane

0xc063,	// (0x000268fa) list_single_touch_menu_pane_ParamLimits

0xc063,	// (0x000268fa) list_single_touch_menu_pane

0xc079,	// (0x00026910) list_single_touch_menu_pane_t1

0x7db5,	// (0x0002264c) bg_popup_sub_pane_cp7_ParamLimits

0x7db5,	// (0x0002264c) bg_popup_sub_pane_cp7

0xc087,	// (0x0002691e) heading_sub_pane

0xc08f,	// (0x00026926) list_touch_info_pane_ParamLimits

0xc08f,	// (0x00026926) list_touch_info_pane

0xc09e,	// (0x00026935) list_single_touch_info_pane_ParamLimits

0xc09e,	// (0x00026935) list_single_touch_info_pane

0xc0b0,	// (0x00026947) list_single_touch_info_pane_t1

0xc0be,	// (0x00026955) list_single_touch_info_pane_t2

0x0001,

0xfaf6,	// (0x0002a38d) list_single_touch_info_pane_t

0x92a8,	// (0x00023b3f) bg_popup_heading_pane_cp

0xc0cc,	// (0x00026963) heading_sub_pane_t1

0x9b66,	// (0x000243fd) bg_popup_preview_window_pane_cp_ParamLimits

0x9b66,	// (0x000243fd) bg_popup_preview_window_pane_cp

0xc087,	// (0x0002691e) heading_preview_pane

0xc08f,	// (0x00026926) list_preview_pane_ParamLimits

0xc08f,	// (0x00026926) list_preview_pane

0xc0da,	// (0x00026971) popup_preview_window_g1

0xc09e,	// (0x00026935) list_single_preview_pane_ParamLimits

0xc09e,	// (0x00026935) list_single_preview_pane

0xc0e2,	// (0x00026979) list_single_preview_pane_g1

0xc0ea,	// (0x00026981) list_single_preview_pane_t1

0xc0b0,	// (0x00026947) list_single_preview_pane_t2

0x0001,

0xfafb,	// (0x0002a392) list_single_preview_pane_t

0xc0f8,	// (0x0002698f) bg_popup_heading_pane_cp2_ParamLimits

0xc0f8,	// (0x0002698f) bg_popup_heading_pane_cp2

0xc10e,	// (0x000269a5) heading_preview_pane_g1

0xc116,	// (0x000269ad) heading_preview_pane_t1_ParamLimits

0xc116,	// (0x000269ad) heading_preview_pane_t1

0x7ea1,	// (0x00022738) soft_indicator_pane_t1_ParamLimits

0x8594,	// (0x00022e2b) scroll_pane_ParamLimits

0x8aa9,	// (0x00023340) scroll_sc2_left_pane

0x8ab2,	// (0x00023349) scroll_sc2_right_pane

0x8ad1,	// (0x00023368) scroll_bg_pane_g1_ParamLimits

0x8ae6,	// (0x0002337d) scroll_bg_pane_g2_ParamLimits

0x8afe,	// (0x00023395) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x00029f80) scroll_bg_pane_g_ParamLimits

0x8ad1,	// (0x00023368) scroll_handle_pane_g1_ParamLimits

0x8b20,	// (0x000233b7) scroll_handle_pane_g2_ParamLimits

0x8afe,	// (0x00023395) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x00029f87) scroll_handle_pane_g_ParamLimits

0x6587,	// (0x00020e1e) popup_choice_list_window_ParamLimits

0x6587,	// (0x00020e1e) popup_choice_list_window

0x9a3c,	// (0x000242d3) choice_list_pane

0x9abe,	// (0x00024355) cell_toolbar_pane_t1

0x9ae6,	// (0x0002437d) toolbar_button_pane_ParamLimits

0xabb9,	// (0x00025450) ai_gene_pane_1_t2_ParamLimits

0xabb9,	// (0x00025450) ai_gene_pane_1_t2

0x0001,

0xf911,	// (0x0002a1a8) ai_gene_pane_1_t_ParamLimits

0xf911,	// (0x0002a1a8) ai_gene_pane_1_t

0xc133,	// (0x000269ca) scroll_sc2_left_pane_g1

0xc133,	// (0x000269ca) scroll_sc2_right_pane_g1

0x95e8,	// (0x00023e7f) bg_popup_sub_pane_cp10

0xc13d,	// (0x000269d4) list_choice_list_pane

0xc156,	// (0x000269ed) list_single_choice_list_pane_ParamLimits

0xc156,	// (0x000269ed) list_single_choice_list_pane

0xc169,	// (0x00026a00) list_single_choice_list_pane_g1

0x87b5,	// (0x0002304c) list_single_choice_list_pane_t1_ParamLimits

0x87b5,	// (0x0002304c) list_single_choice_list_pane_t1

0xc171,	// (0x00026a08) choice_list_pane_g1

0xc179,	// (0x00026a10) choice_list_pane_t1

0x7cc1,	// (0x00022558) input_focus_pane_cp11

0x898c,	// (0x00023223) title_pane_stacon_g2_ParamLimits

0x898c,	// (0x00023223) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x00029f66) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00029f66) title_pane_stacon_g

0x92a8,	// (0x00023b3f) cursor_press_pane

0x6633,	// (0x00020eca) popup_fep_hwr_window_ParamLimits

0x6633,	// (0x00020eca) popup_fep_hwr_window

0x66ad,	// (0x00020f44) popup_fep_vkb_window_ParamLimits

0x66ad,	// (0x00020f44) popup_fep_vkb_window

0xc187,	// (0x00026a1e) cursor_press_pane_g1

0x0002,

0xfb24,	// (0x0002a3bb) fep_vkb_side_pane_g_ParamLimits

0x6f89,	// (0x00021820) fep_hwr_candidate_pane_ParamLimits

0x6f89,	// (0x00021820) fep_hwr_candidate_pane

0x6fb3,	// (0x0002184a) fep_hwr_side_pane_ParamLimits

0x6fb3,	// (0x0002184a) fep_hwr_side_pane

0x6fd3,	// (0x0002186a) fep_hwr_top_pane_ParamLimits

0x6fd3,	// (0x0002186a) fep_hwr_top_pane

0x6feb,	// (0x00021882) fep_hwr_write_pane_ParamLimits

0x6feb,	// (0x00021882) fep_hwr_write_pane

0xfb24,	// (0x0002a3bb) fep_vkb_side_pane_g

0xc18f,	// (0x00026a26) fep_hwr_top_pane_g1

0xc1a1,	// (0x00026a38) fep_hwr_top_pane_g2

0x7017,	// (0x000218ae) fep_hwr_top_pane_g3

0x0002,

0xfb00,	// (0x0002a397) fep_hwr_top_pane_g

0x702c,	// (0x000218c3) fep_hwr_top_text_pane

0x8ca0,	// (0x00023537) fep_hwr_top_text_pane_g1

0xc1d7,	// (0x00026a6e) fep_hwr_top_text_pane_t1

0x7122,	// (0x000219b9) fep_hwr_candidate_pane_g1

0xc42a,	// (0x00026cc1) fep_vkb_keypad_pane_g3_ParamLimits

0xc42a,	// (0x00026cc1) fep_vkb_keypad_pane_g3

0xc452,	// (0x00026ce9) fep_vkb_keypad_pane_g4_ParamLimits

0xc452,	// (0x00026ce9) fep_vkb_keypad_pane_g4

0xc4c1,	// (0x00026d58) fep_vkb_bottom_pane_g2_ParamLimits

0xc4c1,	// (0x00026d58) fep_vkb_bottom_pane_g2

0x0001,

0xfb2b,	// (0x0002a3c2) fep_vkb_bottom_pane_g_ParamLimits

0xfb2b,	// (0x0002a3c2) fep_vkb_bottom_pane_g

0xc133,	// (0x000269ca) cell_vkb_side_pane_g2

0x0001,

0xfb35,	// (0x0002a3cc) cell_vkb_side_pane_g

0xc54c,	// (0x00026de3) cell_vkb_side_pane_t1

0xc55a,	// (0x00026df1) cell_vkb_side_pane_t1_copy1

0xc133,	// (0x000269ca) bg_fep_vkb_candidate_pane_g2

0xc686,	// (0x00026f1d) cell_vkb_candidate_pane_ParamLimits

0xc1e5,	// (0x00026a7c) aid_size_cell_vkb_ParamLimits

0xc1e5,	// (0x00026a7c) aid_size_cell_vkb

0xc686,	// (0x00026f1d) cell_vkb_candidate_pane

0x713c,	// (0x000219d3) bg_popup_fep_shadow_pane_g1

0xc273,	// (0x00026b0a) fep_vkb_bottom_pane_ParamLimits

0xc273,	// (0x00026b0a) fep_vkb_bottom_pane

0xc2a9,	// (0x00026b40) fep_vkb_candidate_pane_ParamLimits

0xc2a9,	// (0x00026b40) fep_vkb_candidate_pane

0xc2c5,	// (0x00026b5c) fep_vkb_keypad_pane_ParamLimits

0xc2c5,	// (0x00026b5c) fep_vkb_keypad_pane

0xc30b,	// (0x00026ba2) fep_vkb_side_pane_ParamLimits

0xc30b,	// (0x00026ba2) fep_vkb_side_pane

0xc347,	// (0x00026bde) fep_vkb_top_pane_ParamLimits

0xc347,	// (0x00026bde) fep_vkb_top_pane

0xc383,	// (0x00026c1a) fep_vkb_top_pane_g1_ParamLimits

0xc383,	// (0x00026c1a) fep_vkb_top_pane_g1

0xc392,	// (0x00026c29) fep_vkb_top_pane_g2_ParamLimits

0xc392,	// (0x00026c29) fep_vkb_top_pane_g2

0xc3a1,	// (0x00026c38) fep_vkb_top_pane_g3_ParamLimits

0xc3a1,	// (0x00026c38) fep_vkb_top_pane_g3

0x0003,

0xfb1b,	// (0x0002a3b2) fep_vkb_top_pane_g_ParamLimits

0xfb1b,	// (0x0002a3b2) fep_vkb_top_pane_g

0xc3bf,	// (0x00026c56) fep_vkb_top_text_pane_ParamLimits

0xc3bf,	// (0x00026c56) fep_vkb_top_text_pane

0xc3d0,	// (0x00026c67) fep_vkb_side_pane_g1_ParamLimits

0xc3d0,	// (0x00026c67) fep_vkb_side_pane_g1

0xc419,	// (0x00026cb0) grid_vkb_side_pane_ParamLimits

0xc419,	// (0x00026cb0) grid_vkb_side_pane

0x7144,	// (0x000219db) bg_popup_fep_shadow_pane_g2

0x714d,	// (0x000219e4) bg_popup_fep_shadow_pane_g3

0x7155,	// (0x000219ec) bg_popup_fep_shadow_pane_g4

0x715e,	// (0x000219f5) bg_popup_fep_shadow_pane_g5

0x7168,	// (0x000219ff) bg_popup_fep_shadow_pane_g6

0x7170,	// (0x00021a07) bg_popup_fep_shadow_pane_g7

0x869c,	// (0x00022f33) bg_popup_fep_shadow_pane_g8

0xc470,	// (0x00026d07) grid_vkb_keypad_number_pane_ParamLimits

0xc470,	// (0x00026d07) grid_vkb_keypad_number_pane

0xc480,	// (0x00026d17) grid_vkb_keypad_pane_ParamLimits

0xc480,	// (0x00026d17) grid_vkb_keypad_pane

0xc4a6,	// (0x00026d3d) fep_vkb_bottom_pane_g1_ParamLimits

0xc4a6,	// (0x00026d3d) fep_vkb_bottom_pane_g1

0xc4cf,	// (0x00026d66) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc4cf,	// (0x00026d66) grid_vkb_keypad_bottom_left_pane

0xc4e4,	// (0x00026d7b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc4e4,	// (0x00026d7b) grid_vkb_keypad_bottom_right_pane

0xc4f9,	// (0x00026d90) fep_vkb_top_text_pane_g1

0xc514,	// (0x00026dab) fep_vkb_top_text_pane_t1

0xc529,	// (0x00026dc0) cell_vkb_side_pane_ParamLimits

0xc529,	// (0x00026dc0) cell_vkb_side_pane

0xc133,	// (0x000269ca) cell_vkb_side_pane_g1

0xc568,	// (0x00026dff) cell_vkb_keypad_pane_ParamLimits

0xc568,	// (0x00026dff) cell_vkb_keypad_pane

0xc5dd,	// (0x00026e74) cell_vkb_keypad_pane_g1

0x0008,

0xfb48,	// (0x0002a3df) bg_popup_fep_shadow_pane_g

0xc133,	// (0x000269ca) cell_hwr_side_pane_g1

0xc133,	// (0x000269ca) cell_hwr_side_pane_g2

0xc5e7,	// (0x00026e7e) cell_vkb_keypad_pane_t1

0xc5f5,	// (0x00026e8c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc5f5,	// (0x00026e8c) cell_vkb_keypad_bottom_left_pane

0xc612,	// (0x00026ea9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc612,	// (0x00026ea9) cell_vkb_keypad_bottom_right_pane

0xc133,	// (0x000269ca) cell_vkb_keypad_bottom_left_pane_g1

0xc133,	// (0x000269ca) cell_vkb_keypad_bottom_right_pane_g1

0xc64b,	// (0x00026ee2) cell_vkb_keypad_number_pane_ParamLimits

0xc64b,	// (0x00026ee2) cell_vkb_keypad_number_pane

0xc66a,	// (0x00026f01) cell_vkb_keypad_number_pane_g1

0xc674,	// (0x00026f0b) cell_vkb_keypad_number_pane_g2

0xc67d,	// (0x00026f14) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3a,	// (0x0002a3d1) cell_vkb_keypad_number_pane_g

0xc5e7,	// (0x00026e7e) cell_vkb_keypad_number_pane_t1

0xc6a1,	// (0x00026f38) fep_vkb_candidate_pane_g1

0x0001,

0xfb35,	// (0x0002a3cc) cell_hwr_side_pane_g

0xc6ba,	// (0x00026f51) cell_hwr_side_pane_t1

0x7182,	// (0x00021a19) cell_hwr_side_pane_t1_copy1

0xc3b1,	// (0x00026c48) cell_hwr_candidate_pane_g1

0x7190,	// (0x00021a27) cell_hwr_candidate_pane_t1

0xc133,	// (0x000269ca) cell_vkb_candidate_pane_g2

0xc740,	// (0x00026fd7) cell_vkb_candidate_pane_t1

0x6f50,	// (0x000217e7) bg_popup_fep_shadow_pane_ParamLimits

0x6f50,	// (0x000217e7) bg_popup_fep_shadow_pane

0x1e7e,	// (0x0001c715) bg_fep_hwr_top_pane_g4

0xc1b3,	// (0x00026a4a) bg_hwr_side_pane_g1_ParamLimits

0xc1b3,	// (0x00026a4a) bg_hwr_side_pane_g1

0x7068,	// (0x000218ff) cell_hwr_side_pane_ParamLimits

0x7068,	// (0x000218ff) cell_hwr_side_pane

0x70a3,	// (0x0002193a) fep_hwr_write_pane_g1_ParamLimits

0x70a3,	// (0x0002193a) fep_hwr_write_pane_g1

0x70b0,	// (0x00021947) fep_hwr_write_pane_g2_ParamLimits

0x70b0,	// (0x00021947) fep_hwr_write_pane_g2

0x70bd,	// (0x00021954) fep_hwr_write_pane_g3_ParamLimits

0x70bd,	// (0x00021954) fep_hwr_write_pane_g3

0x70cb,	// (0x00021962) fep_hwr_write_pane_g4_ParamLimits

0x70cb,	// (0x00021962) fep_hwr_write_pane_g4

0x0005,

0xfb07,	// (0x0002a39e) fep_hwr_write_pane_g_ParamLimits

0xfb07,	// (0x0002a39e) fep_hwr_write_pane_g

0x1e7e,	// (0x0001c715) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1e7e,	// (0x0001c715) bg_fep_hwr_candidate_pane_g2

0x70e0,	// (0x00021977) cell_hwr_candidate_pane_ParamLimits

0x70e0,	// (0x00021977) cell_hwr_candidate_pane

0x7122,	// (0x000219b9) fep_hwr_candidate_pane_g1_ParamLimits

0xc213,	// (0x00026aaa) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc213,	// (0x00026aaa) bg_popup_fep_shadow_pane_cp2

0xc3b1,	// (0x00026c48) fep_vkb_top_pane_g4_ParamLimits

0xc3b1,	// (0x00026c48) fep_vkb_top_pane_g4

0xc3f7,	// (0x00026c8e) fep_vkb_side_pane_g2_ParamLimits

0xc3f7,	// (0x00026c8e) fep_vkb_side_pane_g2

0x4e17,	// (0x0001f6ae) list_setting_pane_t4_ParamLimits

0x4e17,	// (0x0001f6ae) list_setting_pane_t4

0x4eb1,	// (0x0001f748) list_setting_number_pane_t5_ParamLimits

0x4eb1,	// (0x0001f748) list_setting_number_pane_t5

0x8ce7,	// (0x0002357e) list_double_heading_pane_cp2_ParamLimits

0x8ce7,	// (0x0002357e) list_double_heading_pane_cp2

0x862f,	// (0x00022ec6) list_double_heading_pane_g1_cp2_ParamLimits

0x862f,	// (0x00022ec6) list_double_heading_pane_g1_cp2

0x863b,	// (0x00022ed2) list_double_heading_pane_g2_cp2_ParamLimits

0x863b,	// (0x00022ed2) list_double_heading_pane_g2_cp2

0xc74e,	// (0x00026fe5) list_double_heading_pane_t1_cp2_ParamLimits

0xc74e,	// (0x00026fe5) list_double_heading_pane_t1_cp2

0xc764,	// (0x00026ffb) list_double_heading_pane_t2_cp2_ParamLimits

0xc764,	// (0x00026ffb) list_double_heading_pane_t2_cp2

0x7ca9,	// (0x00022540) aid_value_unit2

0x5ddb,	// (0x00020672) popup_preview_fixed_window

0x803e,	// (0x000228d5) bg_popup_preview_window_pane_cp02

0xc776,	// (0x0002700d) list_preview_fixed_pane

0xc7bc,	// (0x00027053) list_empty_pane_fp_ParamLimits

0xc7bc,	// (0x00027053) list_empty_pane_fp

0xc7bc,	// (0x00027053) list_single_cale_day_pane_fp_ParamLimits

0xc7bc,	// (0x00027053) list_single_cale_day_pane_fp

0xc7bc,	// (0x00027053) list_single_graphic_heading_pane_fp_ParamLimits

0xc7bc,	// (0x00027053) list_single_graphic_heading_pane_fp

0xc7bc,	// (0x00027053) list_single_graphic_pane_fp_ParamLimits

0xc7bc,	// (0x00027053) list_single_graphic_pane_fp

0xc7bc,	// (0x00027053) list_single_heading_pane_fp_ParamLimits

0xc7bc,	// (0x00027053) list_single_heading_pane_fp

0xc7bc,	// (0x00027053) list_single_pane_fp_ParamLimits

0xc7bc,	// (0x00027053) list_single_pane_fp

0xc7d1,	// (0x00027068) list_single_pane_fp_g1_ParamLimits

0xc7d1,	// (0x00027068) list_single_pane_fp_g1

0x5773,	// (0x0002000a) list_single_pane_fp_g2_ParamLimits

0x5773,	// (0x0002000a) list_single_pane_fp_g2

0x577f,	// (0x00020016) list_single_pane_fp_g3_ParamLimits

0x577f,	// (0x00020016) list_single_pane_fp_g3

0xc7dd,	// (0x00027074) list_single_pane_fp_g4_ParamLimits

0xc7dd,	// (0x00027074) list_single_pane_fp_g4

0x0003,

0xfb69,	// (0x0002a400) list_single_pane_fp_g_ParamLimits

0xfb69,	// (0x0002a400) list_single_pane_fp_g

0x5793,	// (0x0002002a) list_single_pane_fp_t1_ParamLimits

0x5793,	// (0x0002002a) list_single_pane_fp_t1

0x57aa,	// (0x00020041) list_single_graphic_pane_fp_g1_ParamLimits

0x57aa,	// (0x00020041) list_single_graphic_pane_fp_g1

0xc7d1,	// (0x00027068) list_single_graphic_pane_fp_g2_ParamLimits

0xc7d1,	// (0x00027068) list_single_graphic_pane_fp_g2

0x5773,	// (0x0002000a) list_single_graphic_pane_fp_g3_ParamLimits

0x5773,	// (0x0002000a) list_single_graphic_pane_fp_g3

0x577f,	// (0x00020016) list_single_graphic_pane_fp_g4_ParamLimits

0x577f,	// (0x00020016) list_single_graphic_pane_fp_g4

0xc7dd,	// (0x00027074) list_single_graphic_pane_fp_g5_ParamLimits

0xc7dd,	// (0x00027074) list_single_graphic_pane_fp_g5

0x0004,

0xfb72,	// (0x0002a409) list_single_graphic_pane_fp_g_ParamLimits

0xfb72,	// (0x0002a409) list_single_graphic_pane_fp_g

0x57b6,	// (0x0002004d) list_single_graphic_pane_fp_t1_ParamLimits

0x57b6,	// (0x0002004d) list_single_graphic_pane_fp_t1

0x57aa,	// (0x00020041) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x57aa,	// (0x00020041) list_single_graphic_heading_pane_fp_g1

0xc7d1,	// (0x00027068) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc7d1,	// (0x00027068) list_single_graphic_heading_pane_fp_g2

0x5773,	// (0x0002000a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5773,	// (0x0002000a) list_single_graphic_heading_pane_fp_g3

0x577f,	// (0x00020016) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x577f,	// (0x00020016) list_single_graphic_heading_pane_fp_g4

0xc7dd,	// (0x00027074) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc7dd,	// (0x00027074) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb72,	// (0x0002a409) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb72,	// (0x0002a409) list_single_graphic_heading_pane_fp_g

0x57cc,	// (0x00020063) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x57cc,	// (0x00020063) list_single_graphic_heading_pane_fp_t1

0x57e2,	// (0x00020079) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x57e2,	// (0x00020079) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7d,	// (0x0002a414) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7d,	// (0x0002a414) list_single_graphic_heading_pane_fp_t

0x57f4,	// (0x0002008b) list_single_cale_day_pane_fp_g1_ParamLimits

0x57f4,	// (0x0002008b) list_single_cale_day_pane_fp_g1

0xc7e9,	// (0x00027080) list_single_cale_day_pane_fp_g2_ParamLimits

0xc7e9,	// (0x00027080) list_single_cale_day_pane_fp_g2

0x582c,	// (0x000200c3) list_single_cale_day_pane_fp_g3_ParamLimits

0x582c,	// (0x000200c3) list_single_cale_day_pane_fp_g3

0x5854,	// (0x000200eb) list_single_cale_day_pane_fp_g4_ParamLimits

0x5854,	// (0x000200eb) list_single_cale_day_pane_fp_g4

0x5878,	// (0x0002010f) list_single_cale_day_pane_fp_g5_ParamLimits

0x5878,	// (0x0002010f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb82,	// (0x0002a419) list_single_cale_day_pane_fp_g_ParamLimits

0xfb82,	// (0x0002a419) list_single_cale_day_pane_fp_g

0x589c,	// (0x00020133) list_single_cale_day_pane_fp_t1_ParamLimits

0x589c,	// (0x00020133) list_single_cale_day_pane_fp_t1

0x58c2,	// (0x00020159) list_single_cale_day_pane_fp_t2_ParamLimits

0x58c2,	// (0x00020159) list_single_cale_day_pane_fp_t2

0x58db,	// (0x00020172) list_single_cale_day_pane_fp_t3_ParamLimits

0x58db,	// (0x00020172) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8d,	// (0x0002a424) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8d,	// (0x0002a424) list_single_cale_day_pane_fp_t

0xc7d1,	// (0x00027068) list_empty_pane_fp_g1_ParamLimits

0xc7d1,	// (0x00027068) list_empty_pane_fp_g1

0x58f4,	// (0x0002018b) list_empty_pane_fp_t1

0x5902,	// (0x00020199) list_empty_pane_fp_t2

0x0001,

0xfb94,	// (0x0002a42b) list_empty_pane_fp_t

0xc7d1,	// (0x00027068) list_single_heading_pane_fp_g1_ParamLimits

0xc7d1,	// (0x00027068) list_single_heading_pane_fp_g1

0x5773,	// (0x0002000a) list_single_heading_pane_fp_g2_ParamLimits

0x5773,	// (0x0002000a) list_single_heading_pane_fp_g2

0x577f,	// (0x00020016) list_single_heading_pane_fp_g3_ParamLimits

0x577f,	// (0x00020016) list_single_heading_pane_fp_g3

0x0002,

0xfb99,	// (0x0002a430) list_single_heading_pane_fp_g_ParamLimits

0xfb99,	// (0x0002a430) list_single_heading_pane_fp_g

0x5910,	// (0x000201a7) list_single_heading_pane_fp_t1_ParamLimits

0x5910,	// (0x000201a7) list_single_heading_pane_fp_t1

0x5922,	// (0x000201b9) list_single_heading_pane_fp_t2_ParamLimits

0x5922,	// (0x000201b9) list_single_heading_pane_fp_t2

0x0001,

0xfba0,	// (0x0002a437) list_single_heading_pane_fp_t_ParamLimits

0xfba0,	// (0x0002a437) list_single_heading_pane_fp_t

0x8823,	// (0x000230ba) aid_size_cell_fast

0x7fae,	// (0x00022845) soft_indicator_pane_cp1_t1

0x8860,	// (0x000230f7) cell_app_pane_cp2_ParamLimits

0x8860,	// (0x000230f7) cell_app_pane_cp2

0x6f72,	// (0x00021809) fep_hwr_candidate_drop_down_list_pane

0x1e8c,	// (0x0001c723) fep_hwr_candidate_pane_g3_ParamLimits

0x1e8c,	// (0x0001c723) fep_hwr_candidate_pane_g3

0x1e99,	// (0x0001c730) fep_hwr_candidate_pane_g4_ParamLimits

0x1e99,	// (0x0001c730) fep_hwr_candidate_pane_g4

0x0002,

0xfb14,	// (0x0002a3ab) fep_hwr_candidate_pane_g_ParamLimits

0xfb14,	// (0x0002a3ab) fep_hwr_candidate_pane_g

0xc298,	// (0x00026b2f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc298,	// (0x00026b2f) fep_vkb_candidate_drop_down_list_pane

0xc6a9,	// (0x00026f40) fep_vkb_candidate_pane_g3

0xc6b1,	// (0x00026f48) fep_vkb_candidate_pane_g4

0x0002,

0xfb41,	// (0x0002a3d8) fep_vkb_candidate_pane_g

0xc3b1,	// (0x00026c48) cell_hwr_candidate_pane_g1_ParamLimits

0xc6c8,	// (0x00026f5f) cell_hwr_candidate_pane_g3_ParamLimits

0xc6c8,	// (0x00026f5f) cell_hwr_candidate_pane_g3

0xc6e9,	// (0x00026f80) cell_hwr_candidate_pane_g4_ParamLimits

0xc6e9,	// (0x00026f80) cell_hwr_candidate_pane_g4

0x0002,

0xfb5b,	// (0x0002a3f2) cell_hwr_candidate_pane_g_ParamLimits

0xfb5b,	// (0x0002a3f2) cell_hwr_candidate_pane_g

0xc70a,	// (0x00026fa1) cell_vkb_candidate_pane_g3_ParamLimits

0xc70a,	// (0x00026fa1) cell_vkb_candidate_pane_g3

0xc725,	// (0x00026fbc) cell_vkb_candidate_pane_g4_ParamLimits

0xc725,	// (0x00026fbc) cell_vkb_candidate_pane_g4

0xc7f5,	// (0x0002708c) cell_app_pane_cp2_g1_ParamLimits

0xc7f5,	// (0x0002708c) cell_app_pane_cp2_g1

0xc813,	// (0x000270aa) cell_app_pane_cp2_g2_ParamLimits

0xc813,	// (0x000270aa) cell_app_pane_cp2_g2

0x0001,

0xfba5,	// (0x0002a43c) cell_app_pane_cp2_g_ParamLimits

0xfba5,	// (0x0002a43c) cell_app_pane_cp2_g

0xc81f,	// (0x000270b6) cell_app_pane_cp2_t1_ParamLimits

0xc81f,	// (0x000270b6) cell_app_pane_cp2_t1

0x8621,	// (0x00022eb8) grid_highlight_pane_cp1_ParamLimits

0x8621,	// (0x00022eb8) grid_highlight_pane_cp1

0x71ae,	// (0x00021a45) cell_hwr_candidate_pane_cp1_ParamLimits

0x71ae,	// (0x00021a45) cell_hwr_candidate_pane_cp1

0xc3b1,	// (0x00026c48) fep_hwr_candidate_drop_down_list_pane_g1

0xc831,	// (0x000270c8) fep_hwr_candidate_drop_down_list_pane_g2

0xc83e,	// (0x000270d5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbaa,	// (0x0002a441) fep_hwr_candidate_drop_down_list_pane_g

0x71cd,	// (0x00021a64) fep_hwr_candidate_drop_down_list_scroll_pane

0x71d6,	// (0x00021a6d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71d6,	// (0x00021a6d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71e3,	// (0x00021a7a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71e3,	// (0x00021a7a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x71f0,	// (0x00021a87) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71f0,	// (0x00021a87) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc70a,	// (0x00026fa1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc70a,	// (0x00026fa1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc725,	// (0x00026fbc) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc725,	// (0x00026fbc) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x71fd,	// (0x00021a94) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71fd,	// (0x00021a94) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7218,	// (0x00021aaf) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7218,	// (0x00021aaf) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7233,	// (0x00021aca) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7233,	// (0x00021aca) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb1,	// (0x0002a448) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb1,	// (0x0002a448) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc84b,	// (0x000270e2) cell_vkb_candidate_pane_cp1_ParamLimits

0xc84b,	// (0x000270e2) cell_vkb_candidate_pane_cp1

0xc3b1,	// (0x00026c48) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc3b1,	// (0x00026c48) fep_vkb_candidate_drop_down_list_pane_g1

0xc831,	// (0x000270c8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc831,	// (0x000270c8) fep_vkb_candidate_drop_down_list_pane_g2

0xc83e,	// (0x000270d5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc83e,	// (0x000270d5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbaa,	// (0x0002a441) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbaa,	// (0x0002a441) fep_vkb_candidate_drop_down_list_pane_g

0xc86b,	// (0x00027102) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc86b,	// (0x00027102) fep_vkb_candidate_drop_down_list_scroll_pane

0xc878,	// (0x0002710f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc878,	// (0x0002710f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc885,	// (0x0002711c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc885,	// (0x0002711c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc891,	// (0x00027128) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc891,	// (0x00027128) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc6c8,	// (0x00026f5f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6c8,	// (0x00026f5f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc6e9,	// (0x00026f80) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6e9,	// (0x00026f80) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc89d,	// (0x00027134) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc89d,	// (0x00027134) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8be,	// (0x00027155) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8be,	// (0x00027155) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8df,	// (0x00027176) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8df,	// (0x00027176) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc2,	// (0x0002a459) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc2,	// (0x0002a459) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7cdf,	// (0x00022576) title_pane_g1_ParamLimits

0x7cec,	// (0x00022583) title_pane_g2_ParamLimits

0xf554,	// (0x00029deb) title_pane_g_ParamLimits

0x8c90,	// (0x00023527) aid_call2_pane

0x8c98,	// (0x0002352f) aid_call_pane

0x8ca0,	// (0x00023537) popup_clock_analogue_window_g1

0x8ca0,	// (0x00023537) popup_clock_analogue_window_g2

0x614c,	// (0x000209e3) popup_clock_analogue_window_g3

0x6155,	// (0x000209ec) popup_clock_analogue_window_g4

0x7ccb,	// (0x00022562) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x00029f95) popup_clock_analogue_window_g

0x615d,	// (0x000209f4) popup_clock_analogue_window_t1

0x616b,	// (0x00020a02) clock_digital_number_pane_ParamLimits

0x616b,	// (0x00020a02) clock_digital_number_pane

0x6177,	// (0x00020a0e) clock_digital_number_pane_cp02_ParamLimits

0x6177,	// (0x00020a0e) clock_digital_number_pane_cp02

0x6183,	// (0x00020a1a) clock_digital_number_pane_cp03_ParamLimits

0x6183,	// (0x00020a1a) clock_digital_number_pane_cp03

0x618f,	// (0x00020a26) clock_digital_number_pane_cp04_ParamLimits

0x618f,	// (0x00020a26) clock_digital_number_pane_cp04

0x619b,	// (0x00020a32) clock_digital_separator_pane_ParamLimits

0x619b,	// (0x00020a32) clock_digital_separator_pane

0x61a7,	// (0x00020a3e) popup_clock_digital_window_t1_ParamLimits

0x61a7,	// (0x00020a3e) popup_clock_digital_window_t1

0x7ccb,	// (0x00022562) clock_digital_number_pane_g1

0x7ccb,	// (0x00022562) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x00029fa0) clock_digital_number_pane_g

0x7ccb,	// (0x00022562) clock_digital_separator_pane_g1

0x7ccb,	// (0x00022562) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x00029fa0) clock_digital_separator_pane_g

0x960a,	// (0x00023ea1) aid_fill_nsta_ParamLimits

0x9750,	// (0x00023fe7) indicator_nsta_pane_ParamLimits

0x98c9,	// (0x00024160) popup_clock_analogue_window

0x98c9,	// (0x00024160) popup_clock_digital_window

0x7db5,	// (0x0002264c) grid_indicator_nsta_pane_ParamLimits

0xbb28,	// (0x000263bf) clock_nsta_pane_t2

0x0001,

0xfa94,	// (0x0002a32b) clock_nsta_pane_t

0x6110,	// (0x000209a7) aid_size_max_handle

0x611a,	// (0x000209b1) aid_size_min_handle

0x92a8,	// (0x00023b3f) editor_scroll_pane

0xc8fa,	// (0x00027191) ex_editor_pane

0x8791,	// (0x00023028) scroll_pane_cp13

0x85c0,	// (0x00022e57) scroll_pane_cp14

0x8ccf,	// (0x00023566) scroll_pane_cp36

0x8cfb,	// (0x00023592) list_single_graphic_hl_pane_cp2_ParamLimits

0x8cfb,	// (0x00023592) list_single_graphic_hl_pane_cp2

0xb0da,	// (0x00025971) list_single_graphic_hl_pane_ParamLimits

0xb0da,	// (0x00025971) list_single_graphic_hl_pane

0x5938,	// (0x000201cf) aid_size_min_hl_cp1

0xc902,	// (0x00027199) list_highlight_pane_cp34_ParamLimits

0xc902,	// (0x00027199) list_highlight_pane_cp34

0xc913,	// (0x000271aa) list_single_graphic_hl_pane_g1_ParamLimits

0xc913,	// (0x000271aa) list_single_graphic_hl_pane_g1

0x5941,	// (0x000201d8) list_single_graphic_hl_pane_g2_ParamLimits

0x5941,	// (0x000201d8) list_single_graphic_hl_pane_g2

0x5941,	// (0x000201d8) list_single_graphic_hl_pane_g3_ParamLimits

0x5941,	// (0x000201d8) list_single_graphic_hl_pane_g3

0x594d,	// (0x000201e4) list_single_graphic_hl_pane_g4_ParamLimits

0x594d,	// (0x000201e4) list_single_graphic_hl_pane_g4

0x5959,	// (0x000201f0) list_single_graphic_hl_pane_g5_ParamLimits

0x5959,	// (0x000201f0) list_single_graphic_hl_pane_g5

0x0004,

0xfbd3,	// (0x0002a46a) list_single_graphic_hl_pane_g_ParamLimits

0xfbd3,	// (0x0002a46a) list_single_graphic_hl_pane_g

0x596d,	// (0x00020204) list_single_graphic_hl_pane_t1_ParamLimits

0x596d,	// (0x00020204) list_single_graphic_hl_pane_t1

0xc920,	// (0x000271b7) aid_size_min_hl_cp2

0xc929,	// (0x000271c0) list_highlight_pane_cp34_cp2_ParamLimits

0xc929,	// (0x000271c0) list_highlight_pane_cp34_cp2

0xc913,	// (0x000271aa) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc913,	// (0x000271aa) list_single_graphic_hl_pane_g1_cp2

0xc936,	// (0x000271cd) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc936,	// (0x000271cd) list_single_graphic_hl_pane_g2_cp2

0xc942,	// (0x000271d9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc942,	// (0x000271d9) list_single_graphic_hl_pane_g3_cp2

0xb7aa,	// (0x00026041) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xb7aa,	// (0x00026041) list_single_graphic_hl_pane_g4_cp2

0xc950,	// (0x000271e7) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc950,	// (0x000271e7) list_single_graphic_hl_pane_g5_cp2

0x645b,	// (0x00020cf2) control_pane_g4_ParamLimits

0x645b,	// (0x00020cf2) control_pane_g4

0x95e8,	// (0x00023e7f) bg_popup_sub_pane_cp10_ParamLimits

0xc13d,	// (0x000269d4) list_choice_list_pane_ParamLimits

0xc14c,	// (0x000269e3) scroll_pane_cp23

0x803e,	// (0x000228d5) bg_popup_preview_window_pane_cp02_ParamLimits

0xc776,	// (0x0002700d) list_preview_fixed_pane_ParamLimits

0xc78c,	// (0x00027023) list_preview_fixed_pane_cp_ParamLimits

0xc78c,	// (0x00027023) list_preview_fixed_pane_cp

0xc798,	// (0x0002702f) popup_preview_fixed_window_g1_ParamLimits

0xc798,	// (0x0002702f) popup_preview_fixed_window_g1

0xc7a4,	// (0x0002703b) popup_preview_fixed_window_g2_ParamLimits

0xc7a4,	// (0x0002703b) popup_preview_fixed_window_g2

0x0002,

0xfb62,	// (0x0002a3f9) popup_preview_fixed_window_g_ParamLimits

0xfb62,	// (0x0002a3f9) popup_preview_fixed_window_g

0x6084,	// (0x0002091b) aid_navi_side_left_pane_ParamLimits

0x6099,	// (0x00020930) aid_navi_side_right_pane_ParamLimits

0x60b1,	// (0x00020948) navi_icon_pane_stacon_ParamLimits

0x60c5,	// (0x0002095c) navi_navi_pane_stacon_ParamLimits

0x60b1,	// (0x00020948) navi_text_pane_stacon_ParamLimits

0x7cc1,	// (0x00022558) main_text_info_pane

0xc97a,	// (0x00027211) listscroll_text_info_pane

0xc982,	// (0x00027219) list_text_info_pane_ParamLimits

0xc982,	// (0x00027219) list_text_info_pane

0xc991,	// (0x00027228) scroll_pane_cp24_ParamLimits

0xc991,	// (0x00027228) scroll_pane_cp24

0xc9af,	// (0x00027246) list_text_info_pane_t1_ParamLimits

0xc9af,	// (0x00027246) list_text_info_pane_t1

0x65a5,	// (0x00020e3c) popup_fast_swap2_window_ParamLimits

0x65a5,	// (0x00020e3c) popup_fast_swap2_window

0xc9e0,	// (0x00027277) aid_size_cell_fast2

0x7cc1,	// (0x00022558) bg_popup_window_pane_cp17

0x9f5c,	// (0x000247f3) heading_pane_cp2

0x828a,	// (0x00022b21) listscroll_fast2_pane

0xc9ea,	// (0x00027281) grid_fast2_pane

0xc9f4,	// (0x0002728b) listscroll_fast2_pane_g1

0xc9fc,	// (0x00027293) listscroll_fast2_pane_g2

0x0001,

0xfbde,	// (0x0002a475) listscroll_fast2_pane_g

0x8791,	// (0x00023028) scroll_pane_cp26

0xca06,	// (0x0002729d) cell_fast2_pane_ParamLimits

0xca06,	// (0x0002729d) cell_fast2_pane

0xca1b,	// (0x000272b2) cell_fast2_pane_g1

0xca24,	// (0x000272bb) cell_fast2_pane_g2

0xca2d,	// (0x000272c4) cell_fast2_pane_g3

0x0002,

0xfbe3,	// (0x0002a47a) cell_fast2_pane_g

0x837d,	// (0x00022c14) grid_highlight_pane_cp9

0x8392,	// (0x00022c29) main_eswt_pane_ParamLimits

0x8392,	// (0x00022c29) main_eswt_pane

0xc9a6,	// (0x0002723d) list_single_text_info_pane

0xca35,	// (0x000272cc) eswt_ctrl_button_pane

0xca35,	// (0x000272cc) eswt_ctrl_canvas_pane

0xca3d,	// (0x000272d4) eswt_ctrl_combo_pane

0xca35,	// (0x000272cc) eswt_ctrl_default_pane

0xca35,	// (0x000272cc) eswt_ctrl_label_pane

0xca45,	// (0x000272dc) eswt_ctrl_wait_pane

0xca4d,	// (0x000272e4) eswt_shell_pane

0x7cc1,	// (0x00022558) listscroll_eswt_app_pane

0xca6d,	// (0x00027304) popup_eswt_tasktip_window_ParamLimits

0xca6d,	// (0x00027304) popup_eswt_tasktip_window

0x9b66,	// (0x000243fd) bg_popup_window_pane_cp18

0xca7e,	// (0x00027315) eswt_control_pane_g1_ParamLimits

0xca7e,	// (0x00027315) eswt_control_pane_g1

0xca8b,	// (0x00027322) eswt_control_pane_g2_ParamLimits

0xca8b,	// (0x00027322) eswt_control_pane_g2

0xca98,	// (0x0002732f) eswt_control_pane_g3_ParamLimits

0xca98,	// (0x0002732f) eswt_control_pane_g3

0xcaa5,	// (0x0002733c) eswt_control_pane_g4_ParamLimits

0xcaa5,	// (0x0002733c) eswt_control_pane_g4

0x0003,

0xfbea,	// (0x0002a481) eswt_control_pane_g_ParamLimits

0xfbea,	// (0x0002a481) eswt_control_pane_g

0x8621,	// (0x00022eb8) bg_button_pane_ParamLimits

0x8621,	// (0x00022eb8) bg_button_pane

0x8392,	// (0x00022c29) common_borders_pane_copy2_ParamLimits

0x8392,	// (0x00022c29) common_borders_pane_copy2

0xcab2,	// (0x00027349) control_button_pane_g1_ParamLimits

0xcab2,	// (0x00027349) control_button_pane_g1

0xcabe,	// (0x00027355) control_button_pane_g2_ParamLimits

0xcabe,	// (0x00027355) control_button_pane_g2

0xcaca,	// (0x00027361) control_button_pane_g3_ParamLimits

0xcaca,	// (0x00027361) control_button_pane_g3

0x0002,

0xfbf3,	// (0x0002a48a) control_button_pane_g_ParamLimits

0xfbf3,	// (0x0002a48a) control_button_pane_g

0xcade,	// (0x00027375) control_button_pane_t1

0xcaec,	// (0x00027383) control_button_pane_t2

0x0001,

0xfbfa,	// (0x0002a491) control_button_pane_t

0x9af2,	// (0x00024389) bg_button_pane_g1

0x9afa,	// (0x00024391) bg_button_pane_g2

0x9b02,	// (0x00024399) bg_button_pane_g3

0x9b0a,	// (0x000243a1) bg_button_pane_g4

0x9b12,	// (0x000243a9) bg_button_pane_g5

0x9b1a,	// (0x000243b1) bg_button_pane_g6

0x9b22,	// (0x000243b9) bg_button_pane_g7

0x9b2a,	// (0x000243c1) bg_button_pane_g8

0x9b32,	// (0x000243c9) bg_button_pane_g9

0x0008,

0xf865,	// (0x0002a0fc) bg_button_pane_g

0xc0f8,	// (0x0002698f) common_borders_pane_ParamLimits

0xc0f8,	// (0x0002698f) common_borders_pane

0xca7e,	// (0x00027315) eswt_control_pane_g1_copy1_ParamLimits

0xca7e,	// (0x00027315) eswt_control_pane_g1_copy1

0xca8b,	// (0x00027322) eswt_control_pane_g2_copy1_ParamLimits

0xca8b,	// (0x00027322) eswt_control_pane_g2_copy1

0xca98,	// (0x0002732f) eswt_control_pane_g3_copy1_ParamLimits

0xca98,	// (0x0002732f) eswt_control_pane_g3_copy1

0xcaa5,	// (0x0002733c) eswt_control_pane_g4_copy1_ParamLimits

0xcaa5,	// (0x0002733c) eswt_control_pane_g4_copy1

0xc133,	// (0x000269ca) bg_eswt_ctrl_canvas_pane_g1

0xc0f8,	// (0x0002698f) common_borders_pane_cp2_ParamLimits

0xc0f8,	// (0x0002698f) common_borders_pane_cp2

0xc0f8,	// (0x0002698f) common_borders_pane_cp3_ParamLimits

0xc0f8,	// (0x0002698f) common_borders_pane_cp3

0xcafa,	// (0x00027391) separator_horizontal_pane

0xcb02,	// (0x00027399) separator_vertical_pane

0xca7e,	// (0x00027315) eswt_control_pane_g1_copy2_ParamLimits

0xca7e,	// (0x00027315) eswt_control_pane_g1_copy2

0xca8b,	// (0x00027322) eswt_control_pane_g2_copy2_ParamLimits

0xca8b,	// (0x00027322) eswt_control_pane_g2_copy2

0xca98,	// (0x0002732f) eswt_control_pane_g3_copy2_ParamLimits

0xca98,	// (0x0002732f) eswt_control_pane_g3_copy2

0xcaa5,	// (0x0002733c) eswt_control_pane_g4_copy2_ParamLimits

0xcaa5,	// (0x0002733c) eswt_control_pane_g4_copy2

0x7cc1,	// (0x00022558) common_borders_pane_cp4

0xcb0b,	// (0x000273a2) separator_horizontal_pane_g1

0xcb14,	// (0x000273ab) separator_horizontal_pane_g2

0xcb1d,	// (0x000273b4) separator_horizontal_pane_g3

0x0002,

0xfbff,	// (0x0002a496) separator_horizontal_pane_g

0xca7e,	// (0x00027315) eswt_control_pane_g1_copy3_ParamLimits

0xca7e,	// (0x00027315) eswt_control_pane_g1_copy3

0xca8b,	// (0x00027322) eswt_control_pane_g2_copy3_ParamLimits

0xca8b,	// (0x00027322) eswt_control_pane_g2_copy3

0xca98,	// (0x0002732f) eswt_control_pane_g3_copy3_ParamLimits

0xca98,	// (0x0002732f) eswt_control_pane_g3_copy3

0xcaa5,	// (0x0002733c) eswt_control_pane_g4_copy3_ParamLimits

0xcaa5,	// (0x0002733c) eswt_control_pane_g4_copy3

0x7cc1,	// (0x00022558) common_borders_pane_cp5

0xcb26,	// (0x000273bd) separator_vertical_pane_g1

0xcb2f,	// (0x000273c6) separator_vertical_pane_g2

0xcb38,	// (0x000273cf) separator_vertical_pane_g3

0x0002,

0xfc06,	// (0x0002a49d) separator_vertical_pane_g

0xca7e,	// (0x00027315) eswt_control_pane_g1_copy4_ParamLimits

0xca7e,	// (0x00027315) eswt_control_pane_g1_copy4

0xca8b,	// (0x00027322) eswt_control_pane_g2_copy4_ParamLimits

0xca8b,	// (0x00027322) eswt_control_pane_g2_copy4

0xca98,	// (0x0002732f) eswt_control_pane_g3_copy4_ParamLimits

0xca98,	// (0x0002732f) eswt_control_pane_g3_copy4

0xcaa5,	// (0x0002733c) eswt_control_pane_g4_copy4_ParamLimits

0xcaa5,	// (0x0002733c) eswt_control_pane_g4_copy4

0xcb41,	// (0x000273d8) eswt_ctrl_combo_button_pane

0xcb49,	// (0x000273e0) eswt_ctrl_input_pane

0xcb51,	// (0x000273e8) popup_choice_list_window_cp70

0xcb59,	// (0x000273f0) eswt_ctrl_input_pane_t1

0x7cc1,	// (0x00022558) input_focus_pane_cp70

0xc0f8,	// (0x0002698f) bg_button_pane_cp70_ParamLimits

0xc0f8,	// (0x0002698f) bg_button_pane_cp70

0xcb67,	// (0x000273fe) eswt_ctrl_combo_button_pane_g1

0xcb6f,	// (0x00027406) wait_bar_pane_cp70

0x9b66,	// (0x000243fd) bg_popup_window_pane_cp70_ParamLimits

0x9b66,	// (0x000243fd) bg_popup_window_pane_cp70

0xcb77,	// (0x0002740e) popup_eswt_tasktip_window_t1

0xcb8d,	// (0x00027424) wait_bar_pane_cp71_ParamLimits

0xcb8d,	// (0x00027424) wait_bar_pane_cp71

0xcb99,	// (0x00027430) grid_eswt_app_pane

0x8ab2,	// (0x00023349) scroll_pane_cp70

0xcba2,	// (0x00027439) cell_eswt_app_pane_ParamLimits

0xcba2,	// (0x00027439) cell_eswt_app_pane

0xcbd2,	// (0x00027469) cell_eswt_app_pane_g1_ParamLimits

0xcbd2,	// (0x00027469) cell_eswt_app_pane_g1

0xcc01,	// (0x00027498) cell_eswt_app_pane_g2_ParamLimits

0xcc01,	// (0x00027498) cell_eswt_app_pane_g2

0x0001,

0xfc0d,	// (0x0002a4a4) cell_eswt_app_pane_g_ParamLimits

0xfc0d,	// (0x0002a4a4) cell_eswt_app_pane_g

0xcc2a,	// (0x000274c1) cell_eswt_app_pane_t1_ParamLimits

0xcc2a,	// (0x000274c1) cell_eswt_app_pane_t1

0xcc5c,	// (0x000274f3) grid_highlight_pane_cp70_ParamLimits

0xcc5c,	// (0x000274f3) grid_highlight_pane_cp70

0x917d,	// (0x00023a14) set_content_pane_g1

0x9548,	// (0x00023ddf) status_small_volume_pane

0x724e,	// (0x00021ae5) status_small_volume_pane_g1

0x7256,	// (0x00021aed) volume_small2_pane

0x725f,	// (0x00021af6) volume_small2_pane_g1

0x7268,	// (0x00021aff) volume_small2_pane_g2

0x7271,	// (0x00021b08) volume_small2_pane_g3

0x727a,	// (0x00021b11) volume_small2_pane_g4

0x7283,	// (0x00021b1a) volume_small2_pane_g5

0x728c,	// (0x00021b23) volume_small2_pane_g6

0x7295,	// (0x00021b2c) volume_small2_pane_g7

0x729e,	// (0x00021b35) volume_small2_pane_g8

0x72a7,	// (0x00021b3e) volume_small2_pane_g9

0x72b0,	// (0x00021b47) volume_small2_pane_g10

0x0009,

0xfc12,	// (0x0002a4a9) volume_small2_pane_g

0xc4f9,	// (0x00026d90) fep_vkb_top_text_pane_g1_ParamLimits

0xc514,	// (0x00026dab) fep_vkb_top_text_pane_t1_ParamLimits

0xc7b0,	// (0x00027047) popup_preview_fixed_window_g3_ParamLimits

0xc7b0,	// (0x00027047) popup_preview_fixed_window_g3

0x6a52,	// (0x000212e9) popup_toolbar_trans_pane

0xaeff,	// (0x00025796) aid_height_set_list_ParamLimits

0xaf10,	// (0x000257a7) aid_size_parent_ParamLimits

0x95e8,	// (0x00023e7f) list_highlight_pane_cp2_ParamLimits

0x917d,	// (0x00023a14) set_content_pane_g1_ParamLimits

0xb0f6,	// (0x0002598d) list_single_image_pane_ParamLimits

0xb0f6,	// (0x0002598d) list_single_image_pane

0xcc68,	// (0x000274ff) aid_size_cell_image_ParamLimits

0xcc68,	// (0x000274ff) aid_size_cell_image

0xcc75,	// (0x0002750c) grid_single_image_pane_ParamLimits

0xcc75,	// (0x0002750c) grid_single_image_pane

0x9bb2,	// (0x00024449) list_single_image_pane_g1_ParamLimits

0x9bb2,	// (0x00024449) list_single_image_pane_g1

0xcc81,	// (0x00027518) list_single_image_pane_g2_ParamLimits

0xcc81,	// (0x00027518) list_single_image_pane_g2

0x0001,

0xfc27,	// (0x0002a4be) list_single_image_pane_g_ParamLimits

0xfc27,	// (0x0002a4be) list_single_image_pane_g

0xcc95,	// (0x0002752c) list_single_image_pane_t1_ParamLimits

0xcc95,	// (0x0002752c) list_single_image_pane_t1

0xccab,	// (0x00027542) cell_image_list_pane_ParamLimits

0xccab,	// (0x00027542) cell_image_list_pane

0xccbf,	// (0x00027556) cell_image_list_pane_g1

0xccc8,	// (0x0002755f) cell_image_list_pane_g2

0x0001,

0xfc2c,	// (0x0002a4c3) cell_image_list_pane_g

0xccd1,	// (0x00027568) aid_size_cell_tb_trans_pane

0x8621,	// (0x00022eb8) bg_tb_trans_pane

0xcce3,	// (0x0002757a) grid_tb_trans_pane

0x9af2,	// (0x00024389) bg_tb_trans_pane_g1

0x9afa,	// (0x00024391) bg_tb_trans_pane_g2

0x9b02,	// (0x00024399) bg_tb_trans_pane_g3

0x9b0a,	// (0x000243a1) bg_tb_trans_pane_g4

0x9b12,	// (0x000243a9) bg_tb_trans_pane_g5

0x9b2a,	// (0x000243c1) bg_tb_trans_pane_g6

0x9b32,	// (0x000243c9) bg_tb_trans_pane_g7

0x9b1a,	// (0x000243b1) bg_tb_trans_pane_g8

0x9b22,	// (0x000243b9) bg_tb_trans_pane_g9

0x0008,

0xfc31,	// (0x0002a4c8) bg_tb_trans_pane_g

0xccf7,	// (0x0002758e) cell_toolbar_trans_pane_ParamLimits

0xccf7,	// (0x0002758e) cell_toolbar_trans_pane

0xc133,	// (0x000269ca) cell_toolbar_trans_pane_g1

0xbcfd,	// (0x00026594) list_form2_midp_pane_t1

0xbd0b,	// (0x000265a2) list_form2_midp_pane_t2

0x0001,

0xfada,	// (0x0002a371) list_form2_midp_pane_t

0xbd19,	// (0x000265b0) scroll_pane_cp51_ParamLimits

0xbed5,	// (0x0002676c) form2_midp_wait_pane_g1

0xbede,	// (0x00026775) form2_midp_wait_pane_g2

0xbee7,	// (0x0002677e) form2_midp_wait_pane_g3

0x0002,

0xfaef,	// (0x0002a386) form2_midp_wait_pane_g

0x7db5,	// (0x0002264c) list_highlight_pane_cp21_ParamLimits

0xbf3e,	// (0x000267d5) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf4d,	// (0x000267e4) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x53f8,	// (0x0001fc8f) list_single_2graphic_im_pane_ParamLimits

0x53f8,	// (0x0001fc8f) list_single_2graphic_im_pane

0xcd1d,	// (0x000275b4) list_single_2graphic_im_pane_g1_ParamLimits

0xcd1d,	// (0x000275b4) list_single_2graphic_im_pane_g1

0xcd2e,	// (0x000275c5) list_single_2graphic_im_pane_g2_ParamLimits

0xcd2e,	// (0x000275c5) list_single_2graphic_im_pane_g2

0xcd3a,	// (0x000275d1) list_single_2graphic_im_pane_g3_ParamLimits

0xcd3a,	// (0x000275d1) list_single_2graphic_im_pane_g3

0x0003,

0xfc44,	// (0x0002a4db) list_single_2graphic_im_pane_g_ParamLimits

0xfc44,	// (0x0002a4db) list_single_2graphic_im_pane_g

0xcd5a,	// (0x000275f1) list_single_2graphic_im_pane_t1_ParamLimits

0xcd5a,	// (0x000275f1) list_single_2graphic_im_pane_t1

0xc7bc,	// (0x00027053) list_single_graphic_2heading_pane_fp_ParamLimits

0xc7bc,	// (0x00027053) list_single_graphic_2heading_pane_fp

0x57aa,	// (0x00020041) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x57aa,	// (0x00020041) list_single_graphic_2heading_pane_fp_g1

0xc7d1,	// (0x00027068) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc7d1,	// (0x00027068) list_single_graphic_2heading_pane_fp_g2

0x5773,	// (0x0002000a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5773,	// (0x0002000a) list_single_graphic_2heading_pane_fp_g3

0x577f,	// (0x00020016) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x577f,	// (0x00020016) list_single_graphic_2heading_pane_fp_g4

0xc7dd,	// (0x00027074) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc7dd,	// (0x00027074) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb72,	// (0x0002a409) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb72,	// (0x0002a409) list_single_graphic_2heading_pane_fp_g

0x5983,	// (0x0002021a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5983,	// (0x0002021a) list_single_graphic_2heading_pane_fp_t1

0x57e2,	// (0x00020079) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x57e2,	// (0x00020079) list_single_graphic_2heading_pane_fp_t2

0x5999,	// (0x00020230) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5999,	// (0x00020230) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4d,	// (0x0002a4e4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4d,	// (0x0002a4e4) list_single_graphic_2heading_pane_fp_t

0xc1bf,	// (0x00026a56) fep_hwr_write_pane_g5_ParamLimits

0xc1bf,	// (0x00026a56) fep_hwr_write_pane_g5

0xc1cb,	// (0x00026a62) fep_hwr_write_pane_g6_ParamLimits

0xc1cb,	// (0x00026a62) fep_hwr_write_pane_g6

0xca4d,	// (0x000272e4) eswt_shell_pane_ParamLimits

0x9b66,	// (0x000243fd) bg_popup_window_pane_cp18_ParamLimits

0xae16,	// (0x000256ad) heading_pane_cp70

0xcb77,	// (0x0002740e) popup_eswt_tasktip_window_t1_ParamLimits

0x965f,	// (0x00023ef6) aid_touch_tab_arrow_left

0x966e,	// (0x00023f05) aid_touch_tab_arrow_right

0x7cfd,	// (0x00022594) title_pane_g3_ParamLimits

0x7cfd,	// (0x00022594) title_pane_g3

0x85e0,	// (0x00022e77) set_value_pane_g1

0x6a52,	// (0x000212e9) popup_toolbar_trans_pane_ParamLimits

0xccd1,	// (0x00027568) aid_size_cell_tb_trans_pane_ParamLimits

0x8621,	// (0x00022eb8) bg_tb_trans_pane_ParamLimits

0xcce3,	// (0x0002757a) grid_tb_trans_pane_ParamLimits

0x803e,	// (0x000228d5) cont_note_pane_ParamLimits

0x803e,	// (0x000228d5) cont_note_pane

0x8392,	// (0x00022c29) cont_snote2_single_text_pane_ParamLimits

0x8392,	// (0x00022c29) cont_snote2_single_text_pane

0x8392,	// (0x00022c29) cont_snote2_single_graphic_pane_ParamLimits

0x8392,	// (0x00022c29) cont_snote2_single_graphic_pane

0xa177,	// (0x00024a0e) cont_note_wait_pane_ParamLimits

0xa177,	// (0x00024a0e) cont_note_wait_pane

0xa177,	// (0x00024a0e) cont_note_image_pane_ParamLimits

0xa177,	// (0x00024a0e) cont_note_image_pane

0xcd8b,	// (0x00027622) popup_note2_window_g1_ParamLimits

0xcd8b,	// (0x00027622) popup_note2_window_g1

0xcdbc,	// (0x00027653) popup_note2_window_t1_ParamLimits

0xcdbc,	// (0x00027653) popup_note2_window_t1

0xce01,	// (0x00027698) popup_note2_window_t2_ParamLimits

0xce01,	// (0x00027698) popup_note2_window_t2

0xce46,	// (0x000276dd) popup_note2_window_t3_ParamLimits

0xce46,	// (0x000276dd) popup_note2_window_t3

0xce8b,	// (0x00027722) popup_note2_window_t4_ParamLimits

0xce8b,	// (0x00027722) popup_note2_window_t4

0x80c2,	// (0x00022959) popup_note2_window_t5_ParamLimits

0x80c2,	// (0x00022959) popup_note2_window_t5

0x0004,

0xfc59,	// (0x0002a4f0) popup_note2_window_t_ParamLimits

0xfc59,	// (0x0002a4f0) popup_note2_window_t

0xceba,	// (0x00027751) popup_note2_image_window_g1_ParamLimits

0xceba,	// (0x00027751) popup_note2_image_window_g1

0xcec6,	// (0x0002775d) popup_note2_image_window_g2_ParamLimits

0xcec6,	// (0x0002775d) popup_note2_image_window_g2

0x0001,

0xfc64,	// (0x0002a4fb) popup_note2_image_window_g_ParamLimits

0xfc64,	// (0x0002a4fb) popup_note2_image_window_g

0xced8,	// (0x0002776f) popup_note2_image_window_t1_ParamLimits

0xced8,	// (0x0002776f) popup_note2_image_window_t1

0xcef0,	// (0x00027787) popup_note2_image_window_t2_ParamLimits

0xcef0,	// (0x00027787) popup_note2_image_window_t2

0xcf08,	// (0x0002779f) popup_note2_image_window_t3_ParamLimits

0xcf08,	// (0x0002779f) popup_note2_image_window_t3

0x0002,

0xfc69,	// (0x0002a500) popup_note2_image_window_t_ParamLimits

0xfc69,	// (0x0002a500) popup_note2_image_window_t

0xa185,	// (0x00024a1c) popup_note2_wait_window_g1_ParamLimits

0xa185,	// (0x00024a1c) popup_note2_wait_window_g1

0xcf24,	// (0x000277bb) popup_note2_wait_window_g2_ParamLimits

0xcf24,	// (0x000277bb) popup_note2_wait_window_g2

0xa19d,	// (0x00024a34) popup_note2_wait_window_g3_ParamLimits

0xa19d,	// (0x00024a34) popup_note2_wait_window_g3

0x0002,

0xfc70,	// (0x0002a507) popup_note2_wait_window_g_ParamLimits

0xfc70,	// (0x0002a507) popup_note2_wait_window_g

0xcf30,	// (0x000277c7) popup_note2_wait_window_t1_ParamLimits

0xcf30,	// (0x000277c7) popup_note2_wait_window_t1

0xcf4e,	// (0x000277e5) popup_note2_wait_window_t2_ParamLimits

0xcf4e,	// (0x000277e5) popup_note2_wait_window_t2

0xcf6c,	// (0x00027803) popup_note2_wait_window_t3_ParamLimits

0xcf6c,	// (0x00027803) popup_note2_wait_window_t3

0xcf7e,	// (0x00027815) popup_note2_wait_window_t4_ParamLimits

0xcf7e,	// (0x00027815) popup_note2_wait_window_t4

0x0003,

0xfc77,	// (0x0002a50e) popup_note2_wait_window_t_ParamLimits

0xfc77,	// (0x0002a50e) popup_note2_wait_window_t

0xcf90,	// (0x00027827) wait_bar2_pane_ParamLimits

0xcf90,	// (0x00027827) wait_bar2_pane

0xcfa8,	// (0x0002783f) popup_snote2_single_text_window_g1_ParamLimits

0xcfa8,	// (0x0002783f) popup_snote2_single_text_window_g1

0xcfd0,	// (0x00027867) popup_snote2_single_text_window_t1_ParamLimits

0xcfd0,	// (0x00027867) popup_snote2_single_text_window_t1

0xd01c,	// (0x000278b3) popup_snote2_single_text_window_t2_ParamLimits

0xd01c,	// (0x000278b3) popup_snote2_single_text_window_t2

0xd068,	// (0x000278ff) popup_snote2_single_text_window_t3_ParamLimits

0xd068,	// (0x000278ff) popup_snote2_single_text_window_t3

0xd0a9,	// (0x00027940) popup_snote2_single_text_window_t4_ParamLimits

0xd0a9,	// (0x00027940) popup_snote2_single_text_window_t4

0xd0df,	// (0x00027976) popup_snote2_single_text_window_t5_ParamLimits

0xd0df,	// (0x00027976) popup_snote2_single_text_window_t5

0x0004,

0xfc80,	// (0x0002a517) popup_snote2_single_text_window_t_ParamLimits

0xfc80,	// (0x0002a517) popup_snote2_single_text_window_t

0xd10a,	// (0x000279a1) popup_snote2_single_graphic_window_g1_ParamLimits

0xd10a,	// (0x000279a1) popup_snote2_single_graphic_window_g1

0xd132,	// (0x000279c9) popup_snote2_single_graphic_window_g2_ParamLimits

0xd132,	// (0x000279c9) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8b,	// (0x0002a522) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8b,	// (0x0002a522) popup_snote2_single_graphic_window_g

0xd15a,	// (0x000279f1) popup_snote2_single_graphic_window_t1_ParamLimits

0xd15a,	// (0x000279f1) popup_snote2_single_graphic_window_t1

0xd1a6,	// (0x00027a3d) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1a6,	// (0x00027a3d) popup_snote2_single_graphic_window_t2

0xd068,	// (0x000278ff) popup_snote2_single_graphic_window_t3_ParamLimits

0xd068,	// (0x000278ff) popup_snote2_single_graphic_window_t3

0xd0a9,	// (0x00027940) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0a9,	// (0x00027940) popup_snote2_single_graphic_window_t4

0xd0df,	// (0x00027976) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0df,	// (0x00027976) popup_snote2_single_graphic_window_t5

0x0004,

0xfc90,	// (0x0002a527) popup_snote2_single_graphic_window_t_ParamLimits

0xfc90,	// (0x0002a527) popup_snote2_single_graphic_window_t

0xbbda,	// (0x00026471) clock_nsta_pane_cp2_t1

0xbbda,	// (0x00026471) clock_nsta_pane_cp2_t2

0x0001,

0xfab0,	// (0x0002a347) clock_nsta_pane_cp2_t

0x4fc9,	// (0x0001f860) form_field_data_wide_pane_g1_ParamLimits

0x862f,	// (0x00022ec6) form_field_data_wide_pane_g2_ParamLimits

0x862f,	// (0x00022ec6) form_field_data_wide_pane_g2

0x863b,	// (0x00022ed2) form_field_data_wide_pane_g3_ParamLimits

0x863b,	// (0x00022ed2) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x00029f18) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x00029f18) form_field_data_wide_pane_g

0xbac4,	// (0x0002635b) grid_touch_3_pane_ParamLimits

0xbac4,	// (0x0002635b) grid_touch_3_pane

0xd1f2,	// (0x00027a89) cell_touch_3_pane_ParamLimits

0xd1f2,	// (0x00027a89) cell_touch_3_pane

0xc133,	// (0x000269ca) cell_touch_3_pane_g1

0xc133,	// (0x000269ca) cell_touch_3_pane_g2

0x0001,

0xfb35,	// (0x0002a3cc) cell_touch_3_pane_g

0x80f4,	// (0x0002298b) cont_query_data_pane

0x80fc,	// (0x00022993) cont_query_data_pane_cp1

0xd220,	// (0x00027ab7) button_value_adjust_pane_cp7

0xd228,	// (0x00027abf) query_popup_pane_cp3

0x8d90,	// (0x00023627) bg_popup_sub_pane_cp22_ParamLimits

0x61c6,	// (0x00020a5d) navi_navi_volume_pane_cp2

0x61e1,	// (0x00020a78) popup_side_volume_key_window_g2

0x61f0,	// (0x00020a87) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x00029fae) popup_side_volume_key_window_g

0x620d,	// (0x00020aa4) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x00029fb5) popup_side_volume_key_window_t

0x9047,	// (0x000238de) popup_side_volume_key_window_ParamLimits

0x4c2a,	// (0x0001f4c1) list_double_graphic_pane_g4_ParamLimits

0x4c2a,	// (0x0001f4c1) list_double_graphic_pane_g4

0x5437,	// (0x0001fcce) list_single_2heading_msg_pane_ParamLimits

0x5437,	// (0x0001fcce) list_single_2heading_msg_pane

0x59b9,	// (0x00020250) list_single_2heading_msg_pane_g1_ParamLimits

0x59b9,	// (0x00020250) list_single_2heading_msg_pane_g1

0x4a59,	// (0x0001f2f0) list_single_2heading_msg_pane_g2_ParamLimits

0x4a59,	// (0x0001f2f0) list_single_2heading_msg_pane_g2

0x59c5,	// (0x0002025c) list_single_2heading_msg_pane_g3_ParamLimits

0x59c5,	// (0x0002025c) list_single_2heading_msg_pane_g3

0x59d1,	// (0x00020268) list_single_2heading_msg_pane_g4_ParamLimits

0x59d1,	// (0x00020268) list_single_2heading_msg_pane_g4

0x0003,

0xfc9b,	// (0x0002a532) list_single_2heading_msg_pane_g_ParamLimits

0xfc9b,	// (0x0002a532) list_single_2heading_msg_pane_g

0x59e9,	// (0x00020280) list_single_2heading_msg_pane_t1_ParamLimits

0x59e9,	// (0x00020280) list_single_2heading_msg_pane_t1

0x5a11,	// (0x000202a8) list_single_2heading_msg_pane_t2_ParamLimits

0x5a11,	// (0x000202a8) list_single_2heading_msg_pane_t2

0x5a45,	// (0x000202dc) list_single_2heading_msg_pane_t3_ParamLimits

0x5a45,	// (0x000202dc) list_single_2heading_msg_pane_t3

0x5a7e,	// (0x00020315) list_single_2heading_msg_pane_t4_ParamLimits

0x5a7e,	// (0x00020315) list_single_2heading_msg_pane_t4

0x0003,

0xfca4,	// (0x0002a53b) list_single_2heading_msg_pane_t_ParamLimits

0xfca4,	// (0x0002a53b) list_single_2heading_msg_pane_t

0x7d09,	// (0x000225a0) title_pane_g4_ParamLimits

0x7d09,	// (0x000225a0) title_pane_g4

0x5fd5,	// (0x0002086c) title_pane_stacon_g3_ParamLimits

0x5fd5,	// (0x0002086c) title_pane_stacon_g3

0xcd4e,	// (0x000275e5) list_single_2graphic_im_pane_g4_ParamLimits

0xcd4e,	// (0x000275e5) list_single_2graphic_im_pane_g4

0xabd6,	// (0x0002546d) popup_side_volume_key_window_cp

0xb406,	// (0x00025c9d) main_idle_act2_pane_t1

0x6b44,	// (0x000213db) toolbar_button_pane_g10

0x858a,	// (0x00022e21) popup_toolbar_window_cp1

0xbbcb,	// (0x00026462) clock_nsta_pane_cp_t1

0xbbcb,	// (0x00026462) clock_nsta_pane_cp_t2

0x0001,

0xfaab,	// (0x0002a342) clock_nsta_pane_cp_t

0x61c6,	// (0x00020a5d) navi_navi_volume_pane_cp2_ParamLimits

0x61d5,	// (0x00020a6c) popup_side_volume_key_window_g1_ParamLimits

0x61e1,	// (0x00020a78) popup_side_volume_key_window_g2_ParamLimits

0x61f0,	// (0x00020a87) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x00029fae) popup_side_volume_key_window_g_ParamLimits

0x6f5e,	// (0x000217f5) fep_hwr_aid_pane

0x1e7e,	// (0x0001c715) bg_fep_hwr_top_pane_g4_ParamLimits

0xc18f,	// (0x00026a26) fep_hwr_top_pane_g1_ParamLimits

0xc1a1,	// (0x00026a38) fep_hwr_top_pane_g2_ParamLimits

0x7017,	// (0x000218ae) fep_hwr_top_pane_g3_ParamLimits

0xfb00,	// (0x0002a397) fep_hwr_top_pane_g_ParamLimits

0x702c,	// (0x000218c3) fep_hwr_top_text_pane_ParamLimits

0xa999,	// (0x00025230) aid_touch_tab_arrow_arrow_2

0xa9a2,	// (0x00025239) aid_touch_tab_arrow_left_2

0x6f72,	// (0x00021809) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6fa9,	// (0x00021840) fep_hwr_prediction_pane

0xc301,	// (0x00026b98) fep_vkb_prediction_pane

0xc405,	// (0x00026c9c) fep_vkb_side_pane_g3_ParamLimits

0xc405,	// (0x00026c9c) fep_vkb_side_pane_g3

0xc3b1,	// (0x00026c48) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc831,	// (0x000270c8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc83e,	// (0x000270d5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbaa,	// (0x0002a441) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd24d,	// (0x00027ae4) fep_hwr_prediction_pane_g1

0x72b9,	// (0x00021b50) fep_hwr_prediction_pane_g2

0x72c1,	// (0x00021b58) fep_hwr_prediction_pane_g3

0x72c9,	// (0x00021b60) fep_hwr_prediction_pane_g4

0x0003,

0xfcad,	// (0x0002a544) fep_hwr_prediction_pane_g

0xd24d,	// (0x00027ae4) fep_vkb_prediction_pane_g1

0xd257,	// (0x00027aee) fep_vkb_prediction_pane_g2

0xd25f,	// (0x00027af6) fep_vkb_prediction_pane_g3

0xd267,	// (0x00027afe) fep_vkb_prediction_pane_g4

0x0003,

0xfcb6,	// (0x0002a54d) fep_vkb_prediction_pane_g

0xae8f,	// (0x00025726) slider_set_pane_g3

0xaea3,	// (0x0002573a) slider_set_pane_g4

0xaebb,	// (0x00025752) slider_set_pane_g5

0xae8f,	// (0x00025726) slider_set_pane_g6

0x6e20,	// (0x000216b7) slider_set_pane_g7

0xb075,	// (0x0002590c) slider_form_pane_g3

0xb07e,	// (0x00025915) slider_form_pane_g4

0xb086,	// (0x0002591d) slider_form_pane_g5

0xb075,	// (0x0002590c) slider_form_pane_g6

0xb08e,	// (0x00025925) slider_form_pane_g7

0xb6b0,	// (0x00025f47) slider_set_pane_vc_g3

0xb6b9,	// (0x00025f50) slider_set_pane_vc_g4

0xb6c2,	// (0x00025f59) slider_set_pane_vc_g5

0xb6b0,	// (0x00025f47) slider_set_pane_vc_g6

0xb6cb,	// (0x00025f62) slider_set_pane_vc_g7

0xb897,	// (0x0002612e) slider_form_pane_vc_g1

0xb8a0,	// (0x00026137) slider_form_pane_vc_g2

0xb8a9,	// (0x00026140) slider_form_pane_vc_g3

0xb897,	// (0x0002612e) slider_form_pane_vc_g4

0xb8b2,	// (0x00026149) slider_form_pane_vc_g5

0x0004,

0xfa7d,	// (0x0002a314) slider_form_pane_vc_g

0x7cc1,	// (0x00022558) main_idle_act3_pane

0xd26f,	// (0x00027b06) ai3_links_pane

0xd278,	// (0x00027b0f) popup_ai3_data_window_ParamLimits

0xd278,	// (0x00027b0f) popup_ai3_data_window

0x7cc1,	// (0x00022558) grid_ai3_links_pane

0xd292,	// (0x00027b29) cell_ai3_links_pane_ParamLimits

0xd292,	// (0x00027b29) cell_ai3_links_pane

0xd2aa,	// (0x00027b41) bg_popup_sub_pane_cp11

0xd2b7,	// (0x00027b4e) cell_ai3_links_pane_g1

0x7cc1,	// (0x00022558) bg_popup_sub_pane_cp12

0xd2dc,	// (0x00027b73) heading_ai3_data_pane

0xd2e4,	// (0x00027b7b) list_ai3_gene_pane

0xd2f0,	// (0x00027b87) popup_ai3_data_window_g1

0xd2f8,	// (0x00027b8f) heading_ai3_data_pane_g1

0xd300,	// (0x00027b97) heading_ai3_data_pane_t1

0xd30e,	// (0x00027ba5) list_double_ai3_gene_pane_ParamLimits

0xd30e,	// (0x00027ba5) list_double_ai3_gene_pane

0xd31b,	// (0x00027bb2) list_single_ai3_gene_pane_ParamLimits

0xd31b,	// (0x00027bb2) list_single_ai3_gene_pane

0xc0f8,	// (0x0002698f) list_highlight_pane_cp7_ParamLimits

0xc0f8,	// (0x0002698f) list_highlight_pane_cp7

0xd328,	// (0x00027bbf) list_single_a13_gene_pane_t1_ParamLimits

0xd328,	// (0x00027bbf) list_single_a13_gene_pane_t1

0xd33f,	// (0x00027bd6) list_single_ai3_gene_pane_g1

0xd348,	// (0x00027bdf) list_single_ai3_gene_pane_g2

0x0001,

0xfcbf,	// (0x0002a556) list_single_ai3_gene_pane_g

0xd350,	// (0x00027be7) list_double_ai3_gene_pane_g1_ParamLimits

0xd350,	// (0x00027be7) list_double_ai3_gene_pane_g1

0xd35c,	// (0x00027bf3) list_double_ai3_gene_pane_t1_ParamLimits

0xd35c,	// (0x00027bf3) list_double_ai3_gene_pane_t1

0xd378,	// (0x00027c0f) list_double_ai3_gene_pane_t2_ParamLimits

0xd378,	// (0x00027c0f) list_double_ai3_gene_pane_t2

0xd38e,	// (0x00027c25) list_double_ai3_gene_pane_t3_ParamLimits

0xd38e,	// (0x00027c25) list_double_ai3_gene_pane_t3

0x0002,

0xfcc4,	// (0x0002a55b) list_double_ai3_gene_pane_t_ParamLimits

0xfcc4,	// (0x0002a55b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x59af,	// (0x00020246) aid_size_min_col_2

0xd239,	// (0x00027ad0) aid_size_min_msg_ParamLimits

0xd239,	// (0x00027ad0) aid_size_min_msg

0xc505,	// (0x00026d9c) fep_vkb_top_text_pane_g2_ParamLimits

0xc505,	// (0x00026d9c) fep_vkb_top_text_pane_g2

0x0001,

0xfb30,	// (0x0002a3c7) fep_vkb_top_text_pane_g_ParamLimits

0xfb30,	// (0x0002a3c7) fep_vkb_top_text_pane_g

0x7cc1,	// (0x00022558) main_hc_apps_shell_pane

0xd3ab,	// (0x00027c42) grid_hc_apps_pane_ParamLimits

0xd3ab,	// (0x00027c42) grid_hc_apps_pane

0xd3ba,	// (0x00027c51) list_hc_apps_pane

0xd3c2,	// (0x00027c59) scroll_pane_cp37_ParamLimits

0xd3c2,	// (0x00027c59) scroll_pane_cp37

0xd3ce,	// (0x00027c65) cell_hc_apps_pane_ParamLimits

0xd3ce,	// (0x00027c65) cell_hc_apps_pane

0xd47c,	// (0x00027d13) cell_hc_apps_pane_g1_ParamLimits

0xd47c,	// (0x00027d13) cell_hc_apps_pane_g1

0xd4ad,	// (0x00027d44) cell_hc_apps_pane_g2_ParamLimits

0xd4ad,	// (0x00027d44) cell_hc_apps_pane_g2

0xd4c9,	// (0x00027d60) cell_hc_apps_pane_g3_ParamLimits

0xd4c9,	// (0x00027d60) cell_hc_apps_pane_g3

0x0002,

0xfccb,	// (0x0002a562) cell_hc_apps_pane_g_ParamLimits

0xfccb,	// (0x0002a562) cell_hc_apps_pane_g

0xd4eb,	// (0x00027d82) cell_hc_apps_pane_t1_ParamLimits

0xd4eb,	// (0x00027d82) cell_hc_apps_pane_t1

0x803e,	// (0x000228d5) grid_highlight_pane_cp10_ParamLimits

0x803e,	// (0x000228d5) grid_highlight_pane_cp10

0xd52b,	// (0x00027dc2) list_single_hc_apps_pane_ParamLimits

0xd52b,	// (0x00027dc2) list_single_hc_apps_pane

0xd587,	// (0x00027e1e) list_single_hc_apps_pane_g1

0x5aa3,	// (0x0002033a) list_single_hc_apps_pane_g2

0x0001,

0xfcd2,	// (0x0002a569) list_single_hc_apps_pane_g

0x5abc,	// (0x00020353) list_single_hc_apps_pane_g2_copy1

0x5ad8,	// (0x0002036f) list_single_hc_apps_pane_t1

0x7db5,	// (0x0002264c) bg_set_opt_pane_cp_ParamLimits

0x5efd,	// (0x00020794) setting_slider_pane_t1_ParamLimits

0x5f16,	// (0x000207ad) setting_slider_pane_t2_ParamLimits

0x5f30,	// (0x000207c7) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00029dfb) setting_slider_pane_t_ParamLimits

0x5f48,	// (0x000207df) slider_set_pane_ParamLimits

0x646f,	// (0x00020d06) control_pane_g5_ParamLimits

0x646f,	// (0x00020d06) control_pane_g5

0xae82,	// (0x00025719) slider_set_pane_g1_ParamLimits

0x6e14,	// (0x000216ab) slider_set_pane_g2_ParamLimits

0xae8f,	// (0x00025726) slider_set_pane_g3_ParamLimits

0xaea3,	// (0x0002573a) slider_set_pane_g4_ParamLimits

0xaebb,	// (0x00025752) slider_set_pane_g5_ParamLimits

0xae8f,	// (0x00025726) slider_set_pane_g6_ParamLimits

0x6e20,	// (0x000216b7) slider_set_pane_g7_ParamLimits

0xf963,	// (0x0002a1fa) slider_set_pane_g_ParamLimits

0x9128,	// (0x000239bf) navi_icon_text_pane_ParamLimits

0x9620,	// (0x00023eb7) aid_fill_nsta_2_ParamLimits

0x965f,	// (0x00023ef6) aid_touch_tab_arrow_left_ParamLimits

0x966e,	// (0x00023f05) aid_touch_tab_arrow_right_ParamLimits

0x96db,	// (0x00023f72) clock_nsta_pane_ParamLimits

0xa97b,	// (0x00025212) navi_icon_pane_g1_ParamLimits

0xa987,	// (0x0002521e) navi_text_pane_t1_ParamLimits

0xbcd7,	// (0x0002656e) navi_icon_text_pane_g1_ParamLimits

0xbce3,	// (0x0002657a) navi_icon_text_pane_t1_ParamLimits

0xd587,	// (0x00027e1e) list_single_hc_apps_pane_g1_ParamLimits

0x5aa3,	// (0x0002033a) list_single_hc_apps_pane_g2_ParamLimits

0xfcd2,	// (0x0002a569) list_single_hc_apps_pane_g_ParamLimits

0x5abc,	// (0x00020353) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5ad8,	// (0x0002036f) list_single_hc_apps_pane_t1_ParamLimits

0x5e07,	// (0x0002069e) popup_toolbar2_fixed_window_ParamLimits

0x5e07,	// (0x0002069e) popup_toolbar2_fixed_window

0x6a48,	// (0x000212df) popup_toolbar2_float_window

0x7cc1,	// (0x00022558) bg_popup_sub_pane_cp27

0xd5a0,	// (0x00027e37) grid_toolbar2_float_pane

0x7cc1,	// (0x00022558) bg_popup_sub_pane_cp26

0xd5a0,	// (0x00027e37) grid_toolbar2_fixed_pane

0xd5a8,	// (0x00027e3f) cell_toolbar2_fixed_pane_ParamLimits

0xd5a8,	// (0x00027e3f) cell_toolbar2_fixed_pane

0xd5b8,	// (0x00027e4f) cell_toolbar2_fixed_pane_g1

0xd5c1,	// (0x00027e58) toolbar2_fixed_button_pane

0x9af2,	// (0x00024389) toolbar2_fixed_button_pane_g1

0x9afa,	// (0x00024391) toolbar2_fixed_button_pane_g2

0x9b02,	// (0x00024399) toolbar2_fixed_button_pane_g3

0x9b0a,	// (0x000243a1) toolbar2_fixed_button_pane_g4

0x9b12,	// (0x000243a9) toolbar2_fixed_button_pane_g5

0x9b1a,	// (0x000243b1) toolbar2_fixed_button_pane_g6

0x9b22,	// (0x000243b9) toolbar2_fixed_button_pane_g7

0x9b2a,	// (0x000243c1) toolbar2_fixed_button_pane_g8

0x9b32,	// (0x000243c9) toolbar2_fixed_button_pane_g9

0x0008,

0xf865,	// (0x0002a0fc) toolbar2_fixed_button_pane_g

0xd5c9,	// (0x00027e60) cell_toolbar2_float_pane_ParamLimits

0xd5c9,	// (0x00027e60) cell_toolbar2_float_pane

0xd5da,	// (0x00027e71) cell_toolbar2_float_pane_g1

0xd5c1,	// (0x00027e58) toolbar2_fixed_button_pane_cp

0xc261,	// (0x00026af8) fep_vkb_accented_list_pane_ParamLimits

0xc261,	// (0x00026af8) fep_vkb_accented_list_pane

0x717a,	// (0x00021a11) bg_popup_fep_shadow_pane_g9

0x92a8,	// (0x00023b3f) bg_popup_fep_shadow_pane_cp3

0x8778,	// (0x0002300f) list_accented_list_pane

0xd5e3,	// (0x00027e7a) list_single_accented_list_pane_ParamLimits

0xd5e3,	// (0x00027e7a) list_single_accented_list_pane

0x92a8,	// (0x00023b3f) list_highlight_pane_cp10

0xd5f4,	// (0x00027e8b) list_single_accented_list_pane_t1

0x6998,	// (0x0002122f) popup_slider_window_ParamLimits

0x6998,	// (0x0002122f) popup_slider_window

0xd230,	// (0x00027ac7) aid_indentation_list_msg

0xd6ae,	// (0x00027f45) bg_popup_window_pane_cp19

0xd718,	// (0x00027faf) popup_slider_window_g1

0xd734,	// (0x00027fcb) popup_slider_window_g2

0xd750,	// (0x00027fe7) popup_slider_window_g3

0x0005,

0x0033,	// (0x0001a8ca) popup_slider_window_g

0xd7ac,	// (0x00028043) popup_slider_window_t1

0xd820,	// (0x000280b7) small_volume_slider_vertical_pane

0xc133,	// (0x000269ca) small_volume_slider_vertical_pane_g1

0xc133,	// (0x000269ca) small_volume_slider_vertical_pane_g2

0xd83c,	// (0x000280d3) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd7,	// (0x0002a56e) small_volume_slider_vertical_pane_g

0x5bc9,	// (0x00020460) area_side_right_pane_ParamLimits

0x5bc9,	// (0x00020460) area_side_right_pane

0x72d1,	// (0x00021b68) aid_size_side_button_ParamLimits

0x72d1,	// (0x00021b68) aid_size_side_button

0x72e5,	// (0x00021b7c) grid_sctrl_middle_pane_ParamLimits

0x72e5,	// (0x00021b7c) grid_sctrl_middle_pane

0x7304,	// (0x00021b9b) sctrl_sk_bottom_pane

0x7315,	// (0x00021bac) sctrl_sk_top_pane

0x7327,	// (0x00021bbe) aid_touch_sctrl_top

0x803e,	// (0x000228d5) bg_sctrl_sk_pane_ParamLimits

0x803e,	// (0x000228d5) bg_sctrl_sk_pane

0x7334,	// (0x00021bcb) sctrl_sk_top_pane_g1

0x7341,	// (0x00021bd8) sctrl_sk_top_pane_t1

0x7327,	// (0x00021bbe) aid_touch_sctrl_bottom

0x803e,	// (0x000228d5) bg_sctrl_sk_pane_cp_ParamLimits

0x803e,	// (0x000228d5) bg_sctrl_sk_pane_cp

0x735c,	// (0x00021bf3) sctrl_sk_bottom_pane_g1

0x7341,	// (0x00021bd8) sctrl_sk_bottom_pane_t1

0x7365,	// (0x00021bfc) cell_sctrl_middle_pane_ParamLimits

0x7365,	// (0x00021bfc) cell_sctrl_middle_pane

0x7380,	// (0x00021c17) aid_touch_sctrl_middle_ParamLimits

0x7380,	// (0x00021c17) aid_touch_sctrl_middle

0x8621,	// (0x00022eb8) bg_sctrl_middle_pane_ParamLimits

0x8621,	// (0x00022eb8) bg_sctrl_middle_pane

0xc3b1,	// (0x00026c48) cell_sctrl_middle_pane_g1_ParamLimits

0xc3b1,	// (0x00026c48) cell_sctrl_middle_pane_g1

0x7392,	// (0x00021c29) cell_sctrl_middle_pane_g2_ParamLimits

0x7392,	// (0x00021c29) cell_sctrl_middle_pane_g2

0x0001,

0xfce3,	// (0x0002a57a) cell_sctrl_middle_pane_g_ParamLimits

0xfce3,	// (0x0002a57a) cell_sctrl_middle_pane_g

0x9af2,	// (0x00024389) bg_sctrl_middle_pane_g1

0x9afa,	// (0x00024391) bg_sctrl_middle_pane_g2

0x9b02,	// (0x00024399) bg_sctrl_middle_pane_g3

0x9b0a,	// (0x000243a1) bg_sctrl_middle_pane_g4

0x9b12,	// (0x000243a9) bg_sctrl_middle_pane_g5

0x9b1a,	// (0x000243b1) bg_sctrl_middle_pane_g6

0x9b22,	// (0x000243b9) bg_sctrl_middle_pane_g7

0x9b2a,	// (0x000243c1) bg_sctrl_middle_pane_g8

0x0007,

0xfce8,	// (0x0002a57f) bg_sctrl_middle_pane_g

0x9b32,	// (0x000243c9) bg_sctrl_middle_pane_g8_copy1

0x9af2,	// (0x00024389) bg_sctrl_sk_pane_g1

0x9afa,	// (0x00024391) bg_sctrl_sk_pane_g2

0x9b02,	// (0x00024399) bg_sctrl_sk_pane_g3

0x0008,

0xf865,	// (0x0002a0fc) bg_sctrl_sk_pane_g

0x8550,	// (0x00022de7) aid_size_touch_scroll_bar

0x9b0a,	// (0x000243a1) bg_sctrl_sk_pane_g4

0x9b12,	// (0x000243a9) bg_sctrl_sk_pane_g5

0x9b1a,	// (0x000243b1) bg_sctrl_sk_pane_g6

0x9b22,	// (0x000243b9) bg_sctrl_sk_pane_g7

0x9b2a,	// (0x000243c1) bg_sctrl_sk_pane_g8

0x9b32,	// (0x000243c9) bg_sctrl_sk_pane_g9

0x6603,	// (0x00020e9a) popup_fep_china_hwr2_fs_candidate_window

0x660d,	// (0x00020ea4) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x660d,	// (0x00020ea4) popup_fep_china_hwr2_fs_control_window

0xc3b1,	// (0x00026c48) sctrl_sk_top_pane_g2

0x0001,

0xfcde,	// (0x0002a575) sctrl_sk_top_pane_g

0xd845,	// (0x000280dc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd845,	// (0x000280dc) aid_fep_china_hwr2_fs_cell

0xd857,	// (0x000280ee) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd857,	// (0x000280ee) bg_popup_fep_shadow_pane_cp4

0xd86e,	// (0x00028105) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd86e,	// (0x00028105) bg_popup_fep_shadow_pane_cp5

0xd880,	// (0x00028117) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd880,	// (0x00028117) popup_fep_china_hwr2_fs_control_bar_grid

0xd890,	// (0x00028127) popup_fep_china_hwr2_fs_control_funtion_grid

0xd898,	// (0x0002812f) aid_fep_china_hwr2_fs_candi_cell

0x7cc1,	// (0x00022558) bg_popup_fep_shadow_pane_cp6

0xd8a2,	// (0x00028139) popup_fep_china_hwr2_fs_candidate_grid

0xd8ac,	// (0x00028143) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd8ac,	// (0x00028143) cell_fep_china_hwr2_fs_funtion_grid

0xc133,	// (0x000269ca) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd8c4,	// (0x0002815b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd8c4,	// (0x0002815b) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8d2,	// (0x00028169) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8d2,	// (0x00028169) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0x0067,	// (0x0001a8fe) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0x0067,	// (0x0001a8fe) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8e8,	// (0x0002817f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8e8,	// (0x0002817f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8fd,	// (0x00028194) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8fd,	// (0x00028194) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x006c,	// (0x0001a903) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x006c,	// (0x0001a903) cell_fep_china_hwr2_fs_funtion_grid_t

0xd919,	// (0x000281b0) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd921,	// (0x000281b8) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd929,	// (0x000281c0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0x0071,	// (0x0001a908) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd931,	// (0x000281c8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd931,	// (0x000281c8) cell_fep_china_hwr2_fs_candidate_grid

0xd94a,	// (0x000281e1) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd952,	// (0x000281e9) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc133,	// (0x000269ca) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc133,	// (0x000269ca) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb35,	// (0x0002a3cc) cell_fep_china_hwr2_fs_candidate_grid_g

0xd95a,	// (0x000281f1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x96e8,	// (0x00023f7f) clock_nsta_pane_cp_24_ParamLimits

0x96e8,	// (0x00023f7f) clock_nsta_pane_cp_24

0x9766,	// (0x00023ffd) indicator_nsta_pane_cp_24_ParamLimits

0x9766,	// (0x00023ffd) indicator_nsta_pane_cp_24

0xa7f7,	// (0x0002508e) heading_pane_g1

0x0001,

0xf8ca,	// (0x0002a161) heading_pane_g

0xb24f,	// (0x00025ae6) grid_sct_catagory_button_pane

0xb27f,	// (0x00025b16) scroll_pane_cp5_ParamLimits

0xbd25,	// (0x000265bc) button_value_adjust_pane_cp5_ParamLimits

0xbd25,	// (0x000265bc) button_value_adjust_pane_cp5

0xbe04,	// (0x0002669b) form2_midp_time_pane_ParamLimits

0xd968,	// (0x000281ff) cell_sct_catagory_button_pane_ParamLimits

0xd968,	// (0x000281ff) cell_sct_catagory_button_pane

0xc0f8,	// (0x0002698f) bg_button_pane_cp01_ParamLimits

0xc0f8,	// (0x0002698f) bg_button_pane_cp01

0xc133,	// (0x000269ca) cell_sct_catagory_button_pane_g1

0x69d7,	// (0x0002126e) popup_tb_extension_window

0xd97a,	// (0x00028211) aid_size_cell_ext_ParamLimits

0xd97a,	// (0x00028211) aid_size_cell_ext

0x803e,	// (0x000228d5) bg_tb_trans_pane_cp1_ParamLimits

0x803e,	// (0x000228d5) bg_tb_trans_pane_cp1

0xd99a,	// (0x00028231) grid_tb_ext_pane_ParamLimits

0xd99a,	// (0x00028231) grid_tb_ext_pane

0xd9c8,	// (0x0002825f) cell_tb_ext_pane_ParamLimits

0xd9c8,	// (0x0002825f) cell_tb_ext_pane

0xd9df,	// (0x00028276) cell_tb_ext_pane_g1_ParamLimits

0xd9df,	// (0x00028276) cell_tb_ext_pane_g1

0xd9fc,	// (0x00028293) cell_tb_ext_pane_t1

0x803e,	// (0x000228d5) list_highlight_pane_cp11_ParamLimits

0x803e,	// (0x000228d5) list_highlight_pane_cp11

0x5e26,	// (0x000206bd) popup_uni_indicator_window_ParamLimits

0x5e26,	// (0x000206bd) popup_uni_indicator_window

0x8621,	// (0x00022eb8) bg_popup_sub_pane_cp14

0xda17,	// (0x000282ae) list_uniindi_pane

0xda23,	// (0x000282ba) uniindi_top_pane

0x803e,	// (0x000228d5) bg_uniindi_top_pane

0xda42,	// (0x000282d9) uniindi_top_pane_g1

0xda58,	// (0x000282ef) uniindi_top_pane_g2

0x0003,

0x0078,	// (0x0001a90f) uniindi_top_pane_g

0xda82,	// (0x00028319) uniindi_top_pane_t1

0xdaac,	// (0x00028343) list_single_uniindi_pane_ParamLimits

0xdaac,	// (0x00028343) list_single_uniindi_pane

0xc133,	// (0x000269ca) bg_uniindi_top_pane_g1

0xdabf,	// (0x00028356) list_single_uniindi_pane_g1

0xdad2,	// (0x00028369) list_single_uniindi_pane_t1

0x7cc1,	// (0x00022558) control_bg_pane

0xdaf7,	// (0x0002838e) bg_sctrl_sk_pane_cp1

0xdb00,	// (0x00028397) bg_sctrl_sk_pane_cp2

0xdb09,	// (0x000283a0) control_bg_pane_g1

0xdb12,	// (0x000283a9) control_bg_pane_g2

0x0001,

0x0081,	// (0x0001a918) control_bg_pane_g

0xbb6e,	// (0x00026405) cell_indicator_nsta_pane_g1_ParamLimits

0xbb7c,	// (0x00026413) cell_indicator_nsta_pane_g2_ParamLimits

0xfa99,	// (0x0002a330) cell_indicator_nsta_pane_g_ParamLimits

0x5760,	// (0x0001fff7) form2_midp_time_pane_t1_ParamLimits

0x8392,	// (0x00022c29) main_idle_act4_pane_ParamLimits

0x8392,	// (0x00022c29) main_idle_act4_pane

0x69d7,	// (0x0002126e) popup_tb_extension_window_ParamLimits

0xd9b8,	// (0x0002824f) tb_ext_find_pane_ParamLimits

0xd9b8,	// (0x0002824f) tb_ext_find_pane

0xdb1b,	// (0x000283b2) ai_gene_pane_1_cp1

0x93e1,	// (0x00023c78) ai_gene_pane_2_cp1

0xdb23,	// (0x000283ba) list_single_idle_plugin_calendar_pane

0xdb2c,	// (0x000283c3) list_single_idle_plugin_notification_pane

0xdb35,	// (0x000283cc) list_single_idle_plugin_player_pane

0xdb3e,	// (0x000283d5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb3e,	// (0x000283d5) list_single_idle_plugin_shortcut_pane

0xdb60,	// (0x000283f7) main_idle_act4_pane_t1

0xdb72,	// (0x00028409) main_idle_act4_pane_t2

0x0001,

0x0086,	// (0x0001a91d) main_idle_act4_pane_t

0xdb84,	// (0x0002841b) middle_sk_idle_act4_pane_ParamLimits

0xdb84,	// (0x0002841b) middle_sk_idle_act4_pane

0xdb9a,	// (0x00028431) popup_clock_digital_analogue_window_cp2

0xdbb4,	// (0x0002844b) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbb4,	// (0x0002844b) shortcut_wheel_idle_act4_pane

0xc133,	// (0x000269ca) shortcut_wheel_idle_act4_pane_g1

0xc133,	// (0x000269ca) shortcut_wheel_idle_act4_pane_g2

0xc133,	// (0x000269ca) shortcut_wheel_idle_act4_pane_g3

0xc133,	// (0x000269ca) shortcut_wheel_idle_act4_pane_g4

0xc133,	// (0x000269ca) shortcut_wheel_idle_act4_pane_g5

0xdbc8,	// (0x0002845f) shortcut_wheel_idle_act4_pane_g6

0xdbd0,	// (0x00028467) shortcut_wheel_idle_act4_pane_g7

0xdbd8,	// (0x0002846f) shortcut_wheel_idle_act4_pane_g8

0xdbe0,	// (0x00028477) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfcf9,	// (0x0002a590) shortcut_wheel_idle_act4_pane_g

0xc3b1,	// (0x00026c48) middle_sk_idle_act4_pane_g1_ParamLimits

0xc3b1,	// (0x00026c48) middle_sk_idle_act4_pane_g1

0xdc44,	// (0x000284db) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc44,	// (0x000284db) middle_sk_idle_act4_pane_g2

0x0001,

0xfd17,	// (0x0002a5ae) middle_sk_idle_act4_pane_g_ParamLimits

0xfd17,	// (0x0002a5ae) middle_sk_idle_act4_pane_g

0xdc50,	// (0x000284e7) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc50,	// (0x000284e7) middle_sk_idle_act4_pane_t1

0xdc6d,	// (0x00028504) grid_ai_shortcut_pane_ParamLimits

0xdc6d,	// (0x00028504) grid_ai_shortcut_pane

0xdc86,	// (0x0002851d) list_highlight_pane_cp16_ParamLimits

0xdc86,	// (0x0002851d) list_highlight_pane_cp16

0xdc93,	// (0x0002852a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc93,	// (0x0002852a) list_single_idle_plugin_shortcut_pane_g1

0xdc9f,	// (0x00028536) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc9f,	// (0x00028536) list_single_idle_plugin_shortcut_pane_g2

0xdcb7,	// (0x0002854e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcb7,	// (0x0002854e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x00b3,	// (0x0001a94a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x00b3,	// (0x0001a94a) list_single_idle_plugin_shortcut_pane_g

0xdcca,	// (0x00028561) cell_ai_shortcut_pane_ParamLimits

0xdcca,	// (0x00028561) cell_ai_shortcut_pane

0xdcee,	// (0x00028585) cell_ai_shortcut_pane_g1_ParamLimits

0xdcee,	// (0x00028585) cell_ai_shortcut_pane_g1

0xdb1b,	// (0x000283b2) ai_gene_pane_1_cp2

0xdd10,	// (0x000285a7) ai_gene_pane_2_cp2

0xdd18,	// (0x000285af) list_highlight_pane_cp15

0xdd21,	// (0x000285b8) list_single_idle_plugin_calendar_pane_g1

0xdd18,	// (0x000285af) list_highlight_pane_cp17

0xdd29,	// (0x000285c0) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd31,	// (0x000285c8) list_single_idle_plugin_player_pane_g1

0xb4a8,	// (0x00025d3f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd1c,	// (0x0002a5b3) list_single_idle_plugin_player_pane_g

0xdd39,	// (0x000285d0) list_single_idle_plugin_player_pane_t1

0xdd47,	// (0x000285de) list_single_idle_plugin_player_pane_t2

0xdd55,	// (0x000285ec) list_single_idle_plugin_player_pane_t3

0xdd63,	// (0x000285fa) list_single_idle_plugin_player_pane_t4

0x0003,

0x00bf,	// (0x0001a956) list_single_idle_plugin_player_pane_t

0xdd71,	// (0x00028608) wait_bar_pane_cp15

0xdd79,	// (0x00028610) grid_ai_notification_pane

0xb4a8,	// (0x00025d3f) list_single_idle_plugin_notification_pane_g1

0xdd82,	// (0x00028619) cell_ai_notification_pane_ParamLimits

0xdd82,	// (0x00028619) cell_ai_notification_pane

0xdd8f,	// (0x00028626) cell_ai_notification_pane_g1

0xdd97,	// (0x0002862e) cell_ai_notification_pane_t1

0xdda5,	// (0x0002863c) tb_ext_find_button_pane

0xddad,	// (0x00028644) tb_ext_find_pane_g1

0xddb5,	// (0x0002864c) tb_ext_find_pane_t1

0x8ca0,	// (0x00023537) tb_ext_find_button_pane_g1

0xddc3,	// (0x0002865a) tb_ext_find_button_pane_g2

0x0001,

0xfd21,	// (0x0002a5b8) tb_ext_find_button_pane_g

0xdb60,	// (0x000283f7) main_idle_act4_pane_t1_ParamLimits

0xdb72,	// (0x00028409) main_idle_act4_pane_t2_ParamLimits

0x0086,	// (0x0001a91d) main_idle_act4_pane_t_ParamLimits

0xdb9a,	// (0x00028431) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdba8,	// (0x0002843f) sat_plugin_idle_act4_pane_ParamLimits

0xdba8,	// (0x0002843f) sat_plugin_idle_act4_pane

0xddcc,	// (0x00028663) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddcc,	// (0x00028663) sat_plugin_idle_act4_pane_t1

0xdddf,	// (0x00028676) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdddf,	// (0x00028676) sat_plugin_idle_act4_pane_t2

0xddf2,	// (0x00028689) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddf2,	// (0x00028689) sat_plugin_idle_act4_pane_t3

0xde05,	// (0x0002869c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde05,	// (0x0002869c) sat_plugin_idle_act4_pane_t4

0x0003,

0x00cd,	// (0x0001a964) sat_plugin_idle_act4_pane_t_ParamLimits

0x00cd,	// (0x0001a964) sat_plugin_idle_act4_pane_t

0x5d61,	// (0x000205f8) popup_battery_window_ParamLimits

0x5d61,	// (0x000205f8) popup_battery_window

0x803e,	// (0x000228d5) bg_popup_sub_pane_cp25_ParamLimits

0x803e,	// (0x000228d5) bg_popup_sub_pane_cp25

0xde18,	// (0x000286af) popup_battery_window_g1_ParamLimits

0xde18,	// (0x000286af) popup_battery_window_g1

0xde24,	// (0x000286bb) popup_battery_window_t1_ParamLimits

0xde24,	// (0x000286bb) popup_battery_window_t1

0xde36,	// (0x000286cd) popup_battery_window_t2_ParamLimits

0xde36,	// (0x000286cd) popup_battery_window_t2

0x0001,

0x00d6,	// (0x0001a96d) popup_battery_window_t_ParamLimits

0x00d6,	// (0x0001a96d) popup_battery_window_t

0x92b0,	// (0x00023b47) midp_canvas_pane_ParamLimits

0x9325,	// (0x00023bbc) midp_keypad_pane_ParamLimits

0x9325,	// (0x00023bbc) midp_keypad_pane

0x95e8,	// (0x00023e7f) main_midp_pane_ParamLimits

0xbbe9,	// (0x00026480) signal_pane_g2_cp_ParamLimits

0xde53,	// (0x000286ea) aid_size_cell_midp_keypad_ParamLimits

0xde53,	// (0x000286ea) aid_size_cell_midp_keypad

0xde6d,	// (0x00028704) midp_keyp_game_grid_pane_ParamLimits

0xde6d,	// (0x00028704) midp_keyp_game_grid_pane

0xde8d,	// (0x00028724) midp_keyp_rocker_pane_ParamLimits

0xde8d,	// (0x00028724) midp_keyp_rocker_pane

0xdec2,	// (0x00028759) midp_keyp_sk_left_pane_ParamLimits

0xdec2,	// (0x00028759) midp_keyp_sk_left_pane

0xdf1a,	// (0x000287b1) midp_keyp_sk_right_pane_ParamLimits

0xdf1a,	// (0x000287b1) midp_keyp_sk_right_pane

0x7cc1,	// (0x00022558) bg_button_pane_cp03

0xdf72,	// (0x00028809) midp_keyp_sk_left_pane_g1

0x7cc1,	// (0x00022558) bg_button_pane_cp04

0xdf72,	// (0x00028809) midp_keyp_sk_right_pane_g1

0xc133,	// (0x000269ca) midp_keyp_rocker_pane_g1

0xdf7b,	// (0x00028812) keyp_game_cell_pane_ParamLimits

0xdf7b,	// (0x00028812) keyp_game_cell_pane

0x7cc1,	// (0x00022558) bg_button_pane_cp02

0xdf8e,	// (0x00028825) keyp_game_cell_pane_g1

0x5da5,	// (0x0002063c) popup_fep_vkb2_window_ParamLimits

0x5da5,	// (0x0002063c) popup_fep_vkb2_window

0x73b0,	// (0x00021c47) aid_size_cell_vkb2_ParamLimits

0x73b0,	// (0x00021c47) aid_size_cell_vkb2

0x7404,	// (0x00021c9b) popup_fep_vkb2_window_g1_ParamLimits

0x7404,	// (0x00021c9b) popup_fep_vkb2_window_g1

0x744c,	// (0x00021ce3) vkb2_area_bottom_pane_ParamLimits

0x744c,	// (0x00021ce3) vkb2_area_bottom_pane

0x7498,	// (0x00021d2f) vkb2_area_keypad_pane_ParamLimits

0x7498,	// (0x00021d2f) vkb2_area_keypad_pane

0x74da,	// (0x00021d71) vkb2_area_top_pane_ParamLimits

0x74da,	// (0x00021d71) vkb2_area_top_pane

0x7554,	// (0x00021deb) vkb2_top_entry_pane_ParamLimits

0x7554,	// (0x00021deb) vkb2_top_entry_pane

0x757e,	// (0x00021e15) vkb2_top_grid_left_pane_ParamLimits

0x757e,	// (0x00021e15) vkb2_top_grid_left_pane

0x759c,	// (0x00021e33) vkb2_top_grid_right_pane_ParamLimits

0x759c,	// (0x00021e33) vkb2_top_grid_right_pane

0x75ba,	// (0x00021e51) vkb2_cell_keypad_pane_ParamLimits

0x75ba,	// (0x00021e51) vkb2_cell_keypad_pane

0x768b,	// (0x00021f22) vkb2_area_bottom_grid_pane_ParamLimits

0x768b,	// (0x00021f22) vkb2_area_bottom_grid_pane

0x76b1,	// (0x00021f48) vkb2_area_bottom_pane_g1_ParamLimits

0x76b1,	// (0x00021f48) vkb2_area_bottom_pane_g1

0x76d5,	// (0x00021f6c) vkb2_area_bottom_pane_g2_ParamLimits

0x76d5,	// (0x00021f6c) vkb2_area_bottom_pane_g2

0x7703,	// (0x00021f9a) vkb2_area_bottom_pane_g3_ParamLimits

0x7703,	// (0x00021f9a) vkb2_area_bottom_pane_g3

0x0002,

0xfd26,	// (0x0002a5bd) vkb2_area_bottom_pane_g_ParamLimits

0xfd26,	// (0x0002a5bd) vkb2_area_bottom_pane_g

0x7764,	// (0x00021ffb) vkb2_top_cell_left_pane_ParamLimits

0x7764,	// (0x00021ffb) vkb2_top_cell_left_pane

0xdf9f,	// (0x00028836) vkb2_top_entry_pane_g1_ParamLimits

0xdf9f,	// (0x00028836) vkb2_top_entry_pane_g1

0xdfad,	// (0x00028844) vkb2_top_entry_pane_t1_ParamLimits

0xdfad,	// (0x00028844) vkb2_top_entry_pane_t1

0xdfdf,	// (0x00028876) vkb2_top_entry_pane_t2_ParamLimits

0xdfdf,	// (0x00028876) vkb2_top_entry_pane_t2

0xe011,	// (0x000288a8) vkb2_top_entry_pane_t3_ParamLimits

0xe011,	// (0x000288a8) vkb2_top_entry_pane_t3

0x0002,

0x00e2,	// (0x0001a979) vkb2_top_entry_pane_t_ParamLimits

0x00e2,	// (0x0001a979) vkb2_top_entry_pane_t

0x77b1,	// (0x00022048) vkb2_top_grid_right_pane_g1_ParamLimits

0x77b1,	// (0x00022048) vkb2_top_grid_right_pane_g1

0x77c7,	// (0x0002205e) vkb2_top_grid_right_pane_g2_ParamLimits

0x77c7,	// (0x0002205e) vkb2_top_grid_right_pane_g2

0x77df,	// (0x00022076) vkb2_top_grid_right_pane_g3_ParamLimits

0x77df,	// (0x00022076) vkb2_top_grid_right_pane_g3

0x77f7,	// (0x0002208e) vkb2_top_grid_right_pane_g4_ParamLimits

0x77f7,	// (0x0002208e) vkb2_top_grid_right_pane_g4

0x0003,

0xfd2d,	// (0x0002a5c4) vkb2_top_grid_right_pane_g_ParamLimits

0xfd2d,	// (0x0002a5c4) vkb2_top_grid_right_pane_g

0x780d,	// (0x000220a4) vkb2_top_cell_left_pane_g1

0x7824,	// (0x000220bb) vkb2_cell_keypad_pane_g1_ParamLimits

0x7824,	// (0x000220bb) vkb2_cell_keypad_pane_g1

0xe035,	// (0x000288cc) vkb2_cell_keypad_pane_t1_ParamLimits

0xe035,	// (0x000288cc) vkb2_cell_keypad_pane_t1

0x7832,	// (0x000220c9) vkb2_cell_bottom_grid_pane_ParamLimits

0x7832,	// (0x000220c9) vkb2_cell_bottom_grid_pane

0x786b,	// (0x00022102) vkb2_cell_bottom_grid_pane_g1

0xdbe8,	// (0x0002847f) aid_call2_pane_cp02

0xdbf0,	// (0x00028487) aid_call_pane_cp02

0xdbf8,	// (0x0002848f) clock_digital_number_pane_cp10

0xdc00,	// (0x00028497) clock_digital_number_pane_cp11

0xdc08,	// (0x0002849f) clock_digital_number_pane_cp12

0xdc10,	// (0x000284a7) clock_digital_number_pane_cp13

0xdc18,	// (0x000284af) clock_digital_separator_pane_cp10

0x8ca0,	// (0x00023537) popup_clock_digital_analogue_window_cp2_g1

0x8ca0,	// (0x00023537) popup_clock_digital_analogue_window_cp2_g2

0xdc20,	// (0x000284b7) popup_clock_digital_analogue_window_cp2_g3

0x8ca0,	// (0x00023537) popup_clock_digital_analogue_window_cp2_g4

0xdc20,	// (0x000284b7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd0c,	// (0x0002a5a3) popup_clock_digital_analogue_window_cp2_g

0xdc28,	// (0x000284bf) popup_clock_digital_analogue_window_cp2_t1

0xdc36,	// (0x000284cd) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x00a9,	// (0x0001a940) popup_clock_digital_analogue_window_cp2_t

0xc133,	// (0x000269ca) clock_digital_number_pane_cp10_g1

0xc133,	// (0x000269ca) clock_digital_number_pane_cp10_g2

0x0001,

0xfb35,	// (0x0002a3cc) clock_digital_number_pane_cp10_g

0xc133,	// (0x000269ca) clock_digital_separator_pane_cp10_g1

0xc133,	// (0x000269ca) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb35,	// (0x0002a3cc) clock_digital_separator_pane_cp10_g

0xda64,	// (0x000282fb) uniindi_top_pane_g3

0xda75,	// (0x0002830c) uniindi_top_pane_g4

0x7645,	// (0x00021edc) vkb2_row_keypad_pane_ParamLimits

0x7645,	// (0x00021edc) vkb2_row_keypad_pane

0x7887,	// (0x0002211e) vkb2_cell_t_keypad_pane_ParamLimits

0x7887,	// (0x0002211e) vkb2_cell_t_keypad_pane

0x7897,	// (0x0002212e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7897,	// (0x0002212e) vkb2_cell_t_keypad_pane_cp08

0x78aa,	// (0x00022141) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x78aa,	// (0x00022141) vkb2_cell_t_keypad_pane_cp09

0x78be,	// (0x00022155) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x78be,	// (0x00022155) vkb2_cell_t_keypad_pane_cp01

0x78cf,	// (0x00022166) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x78cf,	// (0x00022166) vkb2_cell_t_keypad_pane_cp02

0x78e0,	// (0x00022177) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x78e0,	// (0x00022177) vkb2_cell_t_keypad_pane_cp03

0x78f1,	// (0x00022188) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x78f1,	// (0x00022188) vkb2_cell_t_keypad_pane_cp04

0x7902,	// (0x00022199) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7902,	// (0x00022199) vkb2_cell_t_keypad_pane_cp05

0x7913,	// (0x000221aa) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7913,	// (0x000221aa) vkb2_cell_t_keypad_pane_cp06

0x7924,	// (0x000221bb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7924,	// (0x000221bb) vkb2_cell_t_keypad_pane_cp07

0x7935,	// (0x000221cc) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7935,	// (0x000221cc) vkb2_cell_t_keypad_pane_cp10

0xc3b1,	// (0x00026c48) vkb2_cell_t_keypad_pane_g1

0xe04c,	// (0x000288e3) vkb2_cell_t_keypad_pane_t1

0x7cc1,	// (0x00022558) popup_grid_graphic2_window

0xe05e,	// (0x000288f5) aid_size_cell_graphic2_ParamLimits

0xe05e,	// (0x000288f5) aid_size_cell_graphic2

0xe096,	// (0x0002892d) bg_popup_window_pane_cp21_ParamLimits

0xe096,	// (0x0002892d) bg_popup_window_pane_cp21

0xe0a4,	// (0x0002893b) graphic2_pages_pane_ParamLimits

0xe0a4,	// (0x0002893b) graphic2_pages_pane

0xe0ea,	// (0x00028981) grid_graphic2_control_pane_ParamLimits

0xe0ea,	// (0x00028981) grid_graphic2_control_pane

0xe128,	// (0x000289bf) grid_graphic2_pane_ParamLimits

0xe128,	// (0x000289bf) grid_graphic2_pane

0xe19c,	// (0x00028a33) cell_graphic2_pane

0x7cc1,	// (0x00022558) main_comp_mode_pane

0xd2e4,	// (0x00027b7b) list_ai3_gene_pane_ParamLimits

0xd6ae,	// (0x00027f45) bg_popup_window_pane_cp19_ParamLimits

0xd6ba,	// (0x00027f51) bg_touch_area_indi_pane_ParamLimits

0xd6ba,	// (0x00027f51) bg_touch_area_indi_pane

0xd6d0,	// (0x00027f67) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6d0,	// (0x00027f67) bg_touch_area_indi_pane_cp01

0xd6e6,	// (0x00027f7d) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6e6,	// (0x00027f7d) bg_touch_area_indi_pane_cp02

0xd6fe,	// (0x00027f95) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6fe,	// (0x00027f95) bg_touch_area_indi_pane_cp03

0xd718,	// (0x00027faf) popup_slider_window_g1_ParamLimits

0xd734,	// (0x00027fcb) popup_slider_window_g2_ParamLimits

0xd750,	// (0x00027fe7) popup_slider_window_g3_ParamLimits

0x0033,	// (0x0001a8ca) popup_slider_window_g_ParamLimits

0xd7ac,	// (0x00028043) popup_slider_window_t1_ParamLimits

0xd820,	// (0x000280b7) small_volume_slider_vertical_pane_ParamLimits

0xe19c,	// (0x00028a33) cell_graphic2_pane_ParamLimits

0xe1ea,	// (0x00028a81) bg_button_pane_cp10_ParamLimits

0xe1ea,	// (0x00028a81) bg_button_pane_cp10

0xe1fd,	// (0x00028a94) bg_button_pane_cp11_ParamLimits

0xe1fd,	// (0x00028a94) bg_button_pane_cp11

0xe210,	// (0x00028aa7) graphic2_pages_pane_g1_ParamLimits

0xe210,	// (0x00028aa7) graphic2_pages_pane_g1

0xe22b,	// (0x00028ac2) graphic2_pages_pane_g2_ParamLimits

0xe22b,	// (0x00028ac2) graphic2_pages_pane_g2

0x0001,

0x00f7,	// (0x0001a98e) graphic2_pages_pane_g_ParamLimits

0x00f7,	// (0x0001a98e) graphic2_pages_pane_g

0xe243,	// (0x00028ada) graphic2_pages_pane_t1_ParamLimits

0xe243,	// (0x00028ada) graphic2_pages_pane_t1

0xe25b,	// (0x00028af2) cell_graphic2_control_pane_ParamLimits

0xe25b,	// (0x00028af2) cell_graphic2_control_pane

0xe27c,	// (0x00028b13) cell_graphic2_pane_g1_ParamLimits

0xe27c,	// (0x00028b13) cell_graphic2_pane_g1

0xe289,	// (0x00028b20) cell_graphic2_pane_g2_ParamLimits

0xe289,	// (0x00028b20) cell_graphic2_pane_g2

0xe296,	// (0x00028b2d) cell_graphic2_pane_g3_ParamLimits

0xe296,	// (0x00028b2d) cell_graphic2_pane_g3

0xe2a3,	// (0x00028b3a) cell_graphic2_pane_g4_ParamLimits

0xe2a3,	// (0x00028b3a) cell_graphic2_pane_g4

0xe2b0,	// (0x00028b47) cell_graphic2_pane_g5_ParamLimits

0xe2b0,	// (0x00028b47) cell_graphic2_pane_g5

0x0004,

0x00fc,	// (0x0001a993) cell_graphic2_pane_g_ParamLimits

0x00fc,	// (0x0001a993) cell_graphic2_pane_g

0xe2cb,	// (0x00028b62) cell_graphic2_pane_t1_ParamLimits

0xe2cb,	// (0x00028b62) cell_graphic2_pane_t1

0x9b66,	// (0x000243fd) grid_highlight_pane_cp11_ParamLimits

0x9b66,	// (0x000243fd) grid_highlight_pane_cp11

0x803e,	// (0x000228d5) bg_button_pane_cp05

0xe2f4,	// (0x00028b8b) cell_graphic2_control_pane_g1

0xc133,	// (0x000269ca) bg_touch_area_indi_pane_g1

0xe31c,	// (0x00028bb3) aid_cmod_rocker_key_size

0xe326,	// (0x00028bbd) aid_cmode_itu_key_size

0xe330,	// (0x00028bc7) main_cmode_video_pane

0xe33a,	// (0x00028bd1) main_comp_mode_itu_pane

0xe346,	// (0x00028bdd) main_comp_mode_rocker_pane

0xe352,	// (0x00028be9) cell_cmode_rocker_pane_ParamLimits

0xe352,	// (0x00028be9) cell_cmode_rocker_pane

0xe364,	// (0x00028bfb) cell_cmode_itu_pane_ParamLimits

0xe364,	// (0x00028bfb) cell_cmode_itu_pane

0x8621,	// (0x00022eb8) bg_button_pane_cp06_ParamLimits

0x8621,	// (0x00022eb8) bg_button_pane_cp06

0xc3b1,	// (0x00026c48) cell_cmode_rocker_pane_g1_ParamLimits

0xc3b1,	// (0x00026c48) cell_cmode_rocker_pane_g1

0xd8c4,	// (0x0002815b) cell_cmode_rocker_pane_g2_ParamLimits

0xd8c4,	// (0x0002815b) cell_cmode_rocker_pane_g2

0x0001,

0xfd36,	// (0x0002a5cd) cell_cmode_rocker_pane_g_ParamLimits

0xfd36,	// (0x0002a5cd) cell_cmode_rocker_pane_g

0x7cc1,	// (0x00022558) bg_button_pane_cp07

0xe379,	// (0x00028c10) cell_cmode_itu_pane_g1

0xe382,	// (0x00028c19) cell_cmode_itu_pane_t1

0xe390,	// (0x00028c27) cell_cmode_itu_pane_t2

0x0001,

0x0111,	// (0x0001a9a8) cell_cmode_itu_pane_t

0xdae7,	// (0x0002837e) aid_touch_ctrl_left

0xdaef,	// (0x00028386) aid_touch_ctrl_right

0x7cc1,	// (0x00022558) compa_mode_pane

0xe39e,	// (0x00028c35) aid_cmod_rocker_key_size_cp

0xe3a8,	// (0x00028c3f) aid_cmode_itu_key_size_cp

0xe3b2,	// (0x00028c49) compa_mode_pane_g1

0xe3ba,	// (0x00028c51) compa_mode_pane_g2

0xe3c2,	// (0x00028c59) compa_mode_pane_g3

0x0002,

0x0116,	// (0x0001a9ad) compa_mode_pane_g

0xe3ca,	// (0x00028c61) main_comp_mode_itu_pane_cp

0xe3d2,	// (0x00028c69) main_comp_mode_rocker_pane_cp

0xe3da,	// (0x00028c71) cell_cmode_itu_pane_cp_ParamLimits

0xe3da,	// (0x00028c71) cell_cmode_itu_pane_cp

0xe3ef,	// (0x00028c86) cell_cmode_rocker_pane_cp_ParamLimits

0xe3ef,	// (0x00028c86) cell_cmode_rocker_pane_cp

0x8621,	// (0x00022eb8) bg_button_pane_cp06_cp_ParamLimits

0x8621,	// (0x00022eb8) bg_button_pane_cp06_cp

0xc3b1,	// (0x00026c48) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc3b1,	// (0x00026c48) cell_cmode_rocker_pane_g1_cp

0xc133,	// (0x000269ca) cell_cmode_rocker_pane_g2_cp

0x7cc1,	// (0x00022558) bg_button_pane_cp07_cp

0xb075,	// (0x0002590c) cell_cmode_itu_pane_g1_cp

0xe401,	// (0x00028c98) cell_cmode_itu_pane_t1_cp

0xe401,	// (0x00028c98) cell_cmode_itu_pane_t2_cp

0xb062,	// (0x000258f9) settings_code_pane_cp2

0x7db5,	// (0x0002264c) bg_popup_window_pane_cp3_ParamLimits

0x8218,	// (0x00022aaf) heading_pane_cp3_ParamLimits

0x8224,	// (0x00022abb) listscroll_popup_graphic_pane_ParamLimits

0x6f5e,	// (0x000217f5) fep_hwr_aid_pane_ParamLimits

0x7327,	// (0x00021bbe) aid_touch_sctrl_top_ParamLimits

0x7334,	// (0x00021bcb) sctrl_sk_top_pane_g1_ParamLimits

0xc3b1,	// (0x00026c48) sctrl_sk_top_pane_g2_ParamLimits

0xfcde,	// (0x0002a575) sctrl_sk_top_pane_g_ParamLimits

0x7341,	// (0x00021bd8) sctrl_sk_top_pane_t1_ParamLimits

0x7327,	// (0x00021bbe) aid_touch_sctrl_bottom_ParamLimits

0x7341,	// (0x00021bd8) sctrl_sk_bottom_pane_t1_ParamLimits

0xda30,	// (0x000282c7) aid_area_touch_clock

0x751c,	// (0x00021db3) aid_vkb2_area_top_pane_cell_ParamLimits

0x751c,	// (0x00021db3) aid_vkb2_area_top_pane_cell

0x7667,	// (0x00021efe) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7667,	// (0x00021efe) aid_vkb2_area_bottom_pane_cell

0xdf97,	// (0x0002882e) popup_char_count_window

0xe40f,	// (0x00028ca6) popup_char_count_window_g1

0xe418,	// (0x00028caf) popup_char_count_window_g2

0xe421,	// (0x00028cb8) popup_char_count_window_g3

0x0002,

0xfd3b,	// (0x0002a5d2) popup_char_count_window_g

0xe42a,	// (0x00028cc1) popup_char_count_window_t1

0x73e2,	// (0x00021c79) popup_fep_char_preview_window_ParamLimits

0x73e2,	// (0x00021c79) popup_fep_char_preview_window

0x753a,	// (0x00021dd1) vkb2_top_candi_pane_ParamLimits

0x753a,	// (0x00021dd1) vkb2_top_candi_pane

0xe438,	// (0x00028ccf) cell_vkb2_top_candi_pane_ParamLimits

0xe438,	// (0x00028ccf) cell_vkb2_top_candi_pane

0xa177,	// (0x00024a0e) bg_popup_fep_char_preview_window_ParamLimits

0xa177,	// (0x00024a0e) bg_popup_fep_char_preview_window

0x794a,	// (0x000221e1) popup_fep_char_preview_window_t1_ParamLimits

0x794a,	// (0x000221e1) popup_fep_char_preview_window_t1

0xe485,	// (0x00028d1c) bg_popup_fep_char_preview_window_g1

0xe48d,	// (0x00028d24) bg_popup_fep_char_preview_window_g2

0xe495,	// (0x00028d2c) bg_popup_fep_char_preview_window_g3

0xe49d,	// (0x00028d34) bg_popup_fep_char_preview_window_g4

0xe4a5,	// (0x00028d3c) bg_popup_fep_char_preview_window_g5

0x7984,	// (0x0002221b) bg_popup_fep_char_preview_window_g6

0xe4ad,	// (0x00028d44) bg_popup_fep_char_preview_window_g7

0xe4b5,	// (0x00028d4c) bg_popup_fep_char_preview_window_g8

0xe4bd,	// (0x00028d54) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd42,	// (0x0002a5d9) bg_popup_fep_char_preview_window_g

0xc3b1,	// (0x00026c48) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc3b1,	// (0x00026c48) cell_vkb2_top_candi_pane_g1

0xc6c8,	// (0x00026f5f) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc6c8,	// (0x00026f5f) cell_vkb2_top_candi_pane_g2

0xc6e9,	// (0x00026f80) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc6e9,	// (0x00026f80) cell_vkb2_top_candi_pane_g3

0x798c,	// (0x00022223) cell_vkb2_top_candi_pane_g4_ParamLimits

0x798c,	// (0x00022223) cell_vkb2_top_candi_pane_g4

0xe4c5,	// (0x00028d5c) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe4c5,	// (0x00028d5c) cell_vkb2_top_candi_pane_g5

0xd8c4,	// (0x0002815b) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd8c4,	// (0x0002815b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfd55,	// (0x0002a5ec) cell_vkb2_top_candi_pane_g_ParamLimits

0xfd55,	// (0x0002a5ec) cell_vkb2_top_candi_pane_g

0x79ad,	// (0x00022244) cell_vkb2_top_candi_pane_t1

0x6e00,	// (0x00021697) aid_size_touch_slider_mark_ParamLimits

0x6e00,	// (0x00021697) aid_size_touch_slider_mark

0xe0da,	// (0x00028971) grid_graphic2_catg_pane_ParamLimits

0xe0da,	// (0x00028971) grid_graphic2_catg_pane

0xe178,	// (0x00028a0f) popup_grid_graphic2_window_t1_ParamLimits

0xe178,	// (0x00028a0f) popup_grid_graphic2_window_t1

0xe18a,	// (0x00028a21) popup_grid_graphic2_window_t2_ParamLimits

0xe18a,	// (0x00028a21) popup_grid_graphic2_window_t2

0x0001,

0x00f2,	// (0x0001a989) popup_grid_graphic2_window_t_ParamLimits

0x00f2,	// (0x0001a989) popup_grid_graphic2_window_t

0x803e,	// (0x000228d5) bg_button_pane_cp05_ParamLimits

0xe2f4,	// (0x00028b8b) cell_graphic2_control_pane_g1_ParamLimits

0xe4e6,	// (0x00028d7d) cell_graphic2_catg_pane_ParamLimits

0xe4e6,	// (0x00028d7d) cell_graphic2_catg_pane

0x7cc1,	// (0x00022558) bg_button_pane_cp12

0xe4f8,	// (0x00028d8f) cell_graphic2_catg_pane_g1

0xd9fc,	// (0x00028293) cell_tb_ext_pane_t1_ParamLimits

0x7784,	// (0x0002201b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7784,	// (0x0002201b) vkb2_top_cell_right_narrow_pane

0x779c,	// (0x00022033) vkb2_top_cell_right_wide_pane_ParamLimits

0x779c,	// (0x00022033) vkb2_top_cell_right_wide_pane

0x6f50,	// (0x000217e7) bg_vkb2_func_pane_ParamLimits

0x6f50,	// (0x000217e7) bg_vkb2_func_pane

0x780d,	// (0x000220a4) vkb2_top_cell_left_pane_g1_ParamLimits

0x6f50,	// (0x000217e7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6f50,	// (0x000217e7) bg_vkb2_fuc_pane_cp03

0x786b,	// (0x00022102) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9afa,	// (0x00024391) bg_vkb2_func_pane_g1

0x9b02,	// (0x00024399) bg_vkb2_func_pane_g2

0x9b12,	// (0x000243a9) bg_vkb2_func_pane_g3

0x9b0a,	// (0x000243a1) bg_vkb2_func_pane_g4

0x9b1a,	// (0x000243b1) bg_vkb2_func_pane_g5

0x9b22,	// (0x000243b9) bg_vkb2_func_pane_g6

0x9b2a,	// (0x000243c1) bg_vkb2_func_pane_g7

0x9b32,	// (0x000243c9) bg_vkb2_func_pane_g8

0x9af2,	// (0x00024389) bg_vkb2_func_pane_g9

0x0008,

0xfd62,	// (0x0002a5f9) bg_vkb2_func_pane_g

0x6f50,	// (0x000217e7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6f50,	// (0x000217e7) bg_vkb2_fuc_pane_cp01

0x780d,	// (0x000220a4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x780d,	// (0x000220a4) vkb2_top_cell_right_wide_pane_g1

0x6f50,	// (0x000217e7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6f50,	// (0x000217e7) bg_vkb2_fuc_pane_cp02

0x786b,	// (0x00022102) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x786b,	// (0x00022102) vkb2_top_cell_right_narrow_pane_g1

0xd632,	// (0x00027ec9) aid_touch_area_decrease_ParamLimits

0xd632,	// (0x00027ec9) aid_touch_area_decrease

0xd650,	// (0x00027ee7) aid_touch_area_increase_ParamLimits

0xd650,	// (0x00027ee7) aid_touch_area_increase

0xd65c,	// (0x00027ef3) aid_touch_area_mute_ParamLimits

0xd65c,	// (0x00027ef3) aid_touch_area_mute

0xd680,	// (0x00027f17) aid_touch_area_slider_ParamLimits

0xd680,	// (0x00027f17) aid_touch_area_slider

0xd76c,	// (0x00028003) popup_slider_window_g4_ParamLimits

0xd76c,	// (0x00028003) popup_slider_window_g4

0xd778,	// (0x0002800f) popup_slider_window_g5_ParamLimits

0xd778,	// (0x0002800f) popup_slider_window_g5

0xd79a,	// (0x00028031) popup_slider_window_g6_ParamLimits

0xd79a,	// (0x00028031) popup_slider_window_g6

0xd7da,	// (0x00028071) popup_slider_window_t2_ParamLimits

0xd7da,	// (0x00028071) popup_slider_window_t2

0x0001,

0x0040,	// (0x0001a8d7) popup_slider_window_t_ParamLimits

0x0040,	// (0x0001a8d7) popup_slider_window_t

0xd7f2,	// (0x00028089) slider_pane_ParamLimits

0xd7f2,	// (0x00028089) slider_pane

0xe501,	// (0x00028d98) slider_pane_g1_ParamLimits

0xe501,	// (0x00028d98) slider_pane_g1

0xe515,	// (0x00028dac) slider_pane_g2_ParamLimits

0xe515,	// (0x00028dac) slider_pane_g2

0xe52b,	// (0x00028dc2) slider_pane_g3_ParamLimits

0xe52b,	// (0x00028dc2) slider_pane_g3

0x0003,

0x0157,	// (0x0001a9ee) slider_pane_g_ParamLimits

0x0157,	// (0x0001a9ee) slider_pane_g

0x6a33,	// (0x000212ca) popup_tb_float_extension_window_ParamLimits

0x6a33,	// (0x000212ca) popup_tb_float_extension_window

0xe557,	// (0x00028dee) aid_size_cell_tb_float_ext

0x7cc1,	// (0x00022558) bg_popup_sub_window_cp28

0xe563,	// (0x00028dfa) grid_tb_float_ext_pane

0xe56d,	// (0x00028e04) cell_tb_float_ext_pane_ParamLimits

0xe56d,	// (0x00028e04) cell_tb_float_ext_pane

0xe587,	// (0x00028e1e) cell_tb_float_ext_pane_g1

0xe590,	// (0x00028e27) grid_highlight_pane_cp12

0x7091,	// (0x00021928) cell_last_hwr_side_pane_ParamLimits

0x7091,	// (0x00021928) cell_last_hwr_side_pane

0xc133,	// (0x000269ca) cell_last_hwr_side_pane_g1

0xe599,	// (0x00028e30) cell_last_hwr_side_pane_g2

0x0001,

0xfd75,	// (0x0002a60c) cell_last_hwr_side_pane_g

0x7733,	// (0x00021fca) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7733,	// (0x00021fca) vkb2_area_bottom_space_btn_pane

0xc3b1,	// (0x00026c48) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe04c,	// (0x000288e3) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x79ad,	// (0x00022244) cell_vkb2_top_candi_pane_t1_ParamLimits

0x79cc,	// (0x00022263) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x79cc,	// (0x00022263) vkb2_area_bottom_space_btn_pane_g1

0x7a06,	// (0x0002229d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7a06,	// (0x0002229d) vkb2_area_bottom_space_btn_pane_g2

0x7a3c,	// (0x000222d3) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a3c,	// (0x000222d3) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfd7a,	// (0x0002a611) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfd7a,	// (0x0002a611) vkb2_area_bottom_space_btn_pane_g

0x7005,	// (0x0002189c) cel_fep_hwr_func_pane_ParamLimits

0x7005,	// (0x0002189c) cel_fep_hwr_func_pane

0x7041,	// (0x000218d8) cell_hwr_side_button_pane_ParamLimits

0x7041,	// (0x000218d8) cell_hwr_side_button_pane

0xda30,	// (0x000282c7) aid_area_touch_clock_ParamLimits

0x803e,	// (0x000228d5) bg_uniindi_top_pane_ParamLimits

0xda42,	// (0x000282d9) uniindi_top_pane_g1_ParamLimits

0xda58,	// (0x000282ef) uniindi_top_pane_g2_ParamLimits

0xda64,	// (0x000282fb) uniindi_top_pane_g3_ParamLimits

0xda75,	// (0x0002830c) uniindi_top_pane_g4_ParamLimits

0x0078,	// (0x0001a90f) uniindi_top_pane_g_ParamLimits

0xda82,	// (0x00028319) uniindi_top_pane_t1_ParamLimits

0x803e,	// (0x000228d5) bg_vkb2_func_pane_cp01_ParamLimits

0x803e,	// (0x000228d5) bg_vkb2_func_pane_cp01

0xe5a2,	// (0x00028e39) cel_fep_hwr_func_pane_g1_ParamLimits

0xe5a2,	// (0x00028e39) cel_fep_hwr_func_pane_g1

0x803e,	// (0x000228d5) bg_vkb2_func_pane_cp02_ParamLimits

0x803e,	// (0x000228d5) bg_vkb2_func_pane_cp02

0xe5a2,	// (0x00028e39) cell_hwr_side_button_pane_g1_ParamLimits

0xe5a2,	// (0x00028e39) cell_hwr_side_button_pane_g1

0x9973,	// (0x0002420a) status_pane_g4_ParamLimits

0x9973,	// (0x0002420a) status_pane_g4

0x998d,	// (0x00024224) status_pane_t1

0xbe6d,	// (0x00026704) form2_midp_gauge_slider_cont_pane

0xbe75,	// (0x0002670c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe87,	// (0x0002671e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe99,	// (0x00026730) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae8,	// (0x0002a37f) form2_midp_gauge_slider_pane_t_ParamLimits

0xbeab,	// (0x00026742) form2_midp_slider_pane_ParamLimits

0x73a2,	// (0x00021c39) aid_size_cell_func_vkb2_ParamLimits

0x73a2,	// (0x00021c39) aid_size_cell_func_vkb2

0xe543,	// (0x00028dda) slider_pane_g4_ParamLimits

0xe543,	// (0x00028dda) slider_pane_g4

0x7a86,	// (0x0002231d) form2_midp_gauge_slider_pane_t2_cp01

0x7a94,	// (0x0002232b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7a94,	// (0x0002232b) form2_midp_gauge_slider_pane_t3_cp01

0x7ab1,	// (0x00022348) form2_midp_slider_pane_cp01

0x7cc1,	// (0x00022558) navi_smil_pane

0xe5db,	// (0x00028e72) navi_smil_pane_g1

0xe5e3,	// (0x00028e7a) navi_smil_pane_t1

0xe5b0,	// (0x00028e47) form2_midp_slider_pane_g1

0xe5b9,	// (0x00028e50) form2_midp_slider_pane_g2

0xe5c1,	// (0x00028e58) form2_midp_slider_pane_g3

0xe5b0,	// (0x00028e47) form2_midp_slider_pane_g4

0xe5c9,	// (0x00028e60) form2_midp_slider_pane_g5

0x0004,

0x016e,	// (0x0001aa05) form2_midp_slider_pane_g

0x7a76,	// (0x0002230d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7a76,	// (0x0002230d) vkb2_area_bottom_space_btn_pane_g4

0x97a2,	// (0x00024039) lc0_navi_pane_ParamLimits

0x97a2,	// (0x00024039) lc0_navi_pane

0x9818,	// (0x000240af) lc0_stat_indi_pane_ParamLimits

0x9818,	// (0x000240af) lc0_stat_indi_pane

0x982f,	// (0x000240c6) ls0_title_pane_ParamLimits

0x982f,	// (0x000240c6) ls0_title_pane

0x8621,	// (0x00022eb8) bg_popup_sub_pane_cp14_ParamLimits

0xda17,	// (0x000282ae) list_uniindi_pane_ParamLimits

0xda23,	// (0x000282ba) uniindi_top_pane_ParamLimits

0xdabf,	// (0x00028356) list_single_uniindi_pane_g1_ParamLimits

0xdad2,	// (0x00028369) list_single_uniindi_pane_t1_ParamLimits

0x7aba,	// (0x00022351) lc0_stat_clock_pane_ParamLimits

0x7aba,	// (0x00022351) lc0_stat_clock_pane

0xe5f1,	// (0x00028e88) lc0_stat_indi_pane_g1_ParamLimits

0xe5f1,	// (0x00028e88) lc0_stat_indi_pane_g1

0xe5fe,	// (0x00028e95) lc0_stat_indi_pane_g2_ParamLimits

0xe5fe,	// (0x00028e95) lc0_stat_indi_pane_g2

0x0001,

0x0179,	// (0x0001aa10) lc0_stat_indi_pane_g_ParamLimits

0x0179,	// (0x0001aa10) lc0_stat_indi_pane_g

0x7ac7,	// (0x0002235e) lc0_uni_indicator_pane_ParamLimits

0x7ac7,	// (0x0002235e) lc0_uni_indicator_pane

0xe60b,	// (0x00028ea2) ls0_title_pane_g1_ParamLimits

0xe60b,	// (0x00028ea2) ls0_title_pane_g1

0xe61f,	// (0x00028eb6) ls0_title_pane_t1_ParamLimits

0xe61f,	// (0x00028eb6) ls0_title_pane_t1

0x7ad4,	// (0x0002236b) lc0_uni_indicator_pane_g1_ParamLimits

0x7ad4,	// (0x0002236b) lc0_uni_indicator_pane_g1

0xe655,	// (0x00028eec) lc0_stat_clock_pane_t1

0x7cc1,	// (0x00022558) main_ai5_pane

0xe663,	// (0x00028efa) ai5_sk_pane_ParamLimits

0xe663,	// (0x00028efa) ai5_sk_pane

0xe670,	// (0x00028f07) cell_ai5_widget_pane_ParamLimits

0xe670,	// (0x00028f07) cell_ai5_widget_pane

0xe726,	// (0x00028fbd) aid_size_cell_widget_grid

0xe73c,	// (0x00028fd3) bg_ai5_widget_pane_ParamLimits

0xe73c,	// (0x00028fd3) bg_ai5_widget_pane

0xe7b0,	// (0x00029047) cell_ai5_widget_pane_g2

0xe7c0,	// (0x00029057) cell_ai5_widget_pane_g3

0xe7d7,	// (0x0002906e) cell_ai5_widget_pane_g4

0xe7e3,	// (0x0002907a) cell_ai5_widget_pane_g5

0xe7ef,	// (0x00029086) cell_ai5_widget_pane_g6

0xe7fb,	// (0x00029092) cell_ai5_widget_pane_g7

0xe843,	// (0x000290da) cell_ai5_widget_pane_t1_ParamLimits

0xe843,	// (0x000290da) cell_ai5_widget_pane_t1

0xe860,	// (0x000290f7) cell_ai5_widget_pane_t2_ParamLimits

0xe860,	// (0x000290f7) cell_ai5_widget_pane_t2

0xe878,	// (0x0002910f) cell_ai5_widget_pane_t3_ParamLimits

0xe878,	// (0x0002910f) cell_ai5_widget_pane_t3

0xe890,	// (0x00029127) cell_ai5_widget_pane_t4_ParamLimits

0xe890,	// (0x00029127) cell_ai5_widget_pane_t4

0xe8ad,	// (0x00029144) cell_ai5_widget_pane_t5_ParamLimits

0xe8ad,	// (0x00029144) cell_ai5_widget_pane_t5

0xe8cc,	// (0x00029163) cell_ai5_widget_pane_t6_ParamLimits

0xe8cc,	// (0x00029163) cell_ai5_widget_pane_t6

0xe8de,	// (0x00029175) cell_ai5_widget_pane_t7_ParamLimits

0xe8de,	// (0x00029175) cell_ai5_widget_pane_t7

0xe8f7,	// (0x0002918e) cell_ai5_widget_pane_t8_ParamLimits

0xe8f7,	// (0x0002918e) cell_ai5_widget_pane_t8

0x0009,

0x0193,	// (0x0001aa2a) cell_ai5_widget_pane_t_ParamLimits

0x0193,	// (0x0001aa2a) cell_ai5_widget_pane_t

0xe94b,	// (0x000291e2) grid_ai5_widget_pane

0x8621,	// (0x00022eb8) highlight_cell_ai5_widget_pane_ParamLimits

0x8621,	// (0x00022eb8) highlight_cell_ai5_widget_pane

0xe963,	// (0x000291fa) ai5_sk_left_pane

0xe96d,	// (0x00029204) ai5_sk_middle_pane

0xe977,	// (0x0002920e) ai5_sk_right_pane

0xe981,	// (0x00029218) bg_ai5_widget_pane_g1_ParamLimits

0xe981,	// (0x00029218) bg_ai5_widget_pane_g1

0xe98d,	// (0x00029224) bg_ai5_widget_pane_g2_ParamLimits

0xe98d,	// (0x00029224) bg_ai5_widget_pane_g2

0xe999,	// (0x00029230) bg_ai5_widget_pane_g3_ParamLimits

0xe999,	// (0x00029230) bg_ai5_widget_pane_g3

0xe9a5,	// (0x0002923c) bg_ai5_widget_pane_g4_ParamLimits

0xe9a5,	// (0x0002923c) bg_ai5_widget_pane_g4

0xe9b1,	// (0x00029248) bg_ai5_widget_pane_g5_ParamLimits

0xe9b1,	// (0x00029248) bg_ai5_widget_pane_g5

0xe9bd,	// (0x00029254) bg_ai5_widget_pane_g6_ParamLimits

0xe9bd,	// (0x00029254) bg_ai5_widget_pane_g6

0xe9c9,	// (0x00029260) bg_ai5_widget_pane_g7_ParamLimits

0xe9c9,	// (0x00029260) bg_ai5_widget_pane_g7

0xe9d5,	// (0x0002926c) bg_ai5_widget_pane_g8_ParamLimits

0xe9d5,	// (0x0002926c) bg_ai5_widget_pane_g8

0xe9e1,	// (0x00029278) bg_ai5_widget_pane_g9_ParamLimits

0xe9e1,	// (0x00029278) bg_ai5_widget_pane_g9

0x0008,

0x01a8,	// (0x0001aa3f) bg_ai5_widget_pane_g_ParamLimits

0x01a8,	// (0x0001aa3f) bg_ai5_widget_pane_g

0xea13,	// (0x000292aa) cell_shortcut_ai5_widget_pane_ParamLimits

0xea13,	// (0x000292aa) cell_shortcut_ai5_widget_pane

0x92a8,	// (0x00023b3f) bg_cell_shortcut_ai5_widget_pane

0xea24,	// (0x000292bb) cell_grid_ai5_widget_pane_g1

0xea2d,	// (0x000292c4) highlight_cell_shortcut_ai5_widget_pane

0x9b02,	// (0x00024399) ai5_sk_left_pane_g1

0xea35,	// (0x000292cc) ai5_sk_left_pane_g2

0xea3d,	// (0x000292d4) ai5_sk_left_pane_g3

0xea45,	// (0x000292dc) ai5_sk_left_pane_g4

0x0003,

0xfd83,	// (0x0002a61a) ai5_sk_left_pane_g

0xea4d,	// (0x000292e4) ai5_sk_left_pane_t1

0x9afa,	// (0x00024391) ai5_sk_right_pane_g1

0xea5b,	// (0x000292f2) ai5_sk_right_pane_g2

0xea63,	// (0x000292fa) ai5_sk_right_pane_g3

0xea6b,	// (0x00029302) ai5_sk_right_pane_g4

0x0003,

0xfd8c,	// (0x0002a623) ai5_sk_right_pane_g

0xea73,	// (0x0002930a) ai5_sk_right_pane_t1

0x9afa,	// (0x00024391) ai5_sk_middle_pane_g1

0x9b02,	// (0x00024399) ai5_sk_middle_pane_g2

0x9b1a,	// (0x000243b1) ai5_sk_middle_pane_g3

0xea63,	// (0x000292fa) ai5_sk_middle_pane_g4

0xea3d,	// (0x000292d4) ai5_sk_middle_pane_g5

0xea81,	// (0x00029318) ai5_sk_middle_pane_g6

0xea89,	// (0x00029320) ai5_sk_middle_pane_g7

0x0006,

0xfd95,	// (0x0002a62c) ai5_sk_middle_pane_g

0x962e,	// (0x00023ec5) aid_touch_area_size_lc0_ParamLimits

0x962e,	// (0x00023ec5) aid_touch_area_size_lc0

0x7190,	// (0x00021a27) cell_hwr_candidate_pane_t1_ParamLimits

0x964a,	// (0x00023ee1) aid_touch_navi_pane

0x991d,	// (0x000241b4) status_dt_navi_pane_ParamLimits

0x991d,	// (0x000241b4) status_dt_navi_pane

0x992a,	// (0x000241c1) status_dt_sta_pane_ParamLimits

0x992a,	// (0x000241c1) status_dt_sta_pane

0xea91,	// (0x00029328) dt_sta_controll_pane

0xea9e,	// (0x00029335) dt_sta_indi_pane

0xeaaf,	// (0x00029346) dt_sta_title_pane

0x803e,	// (0x000228d5) bg_dt_sta_indi_pane_ParamLimits

0x803e,	// (0x000228d5) bg_dt_sta_indi_pane

0xeac2,	// (0x00029359) dt_sta_battery_pane

0xeaca,	// (0x00029361) dt_sta_indi_pane_g1

0xead3,	// (0x0002936a) dt_sta_indi_pane_g2

0xeadc,	// (0x00029373) dt_sta_indi_pane_g3

0x0002,

0x01dc,	// (0x0001aa73) dt_sta_indi_pane_g

0xeae5,	// (0x0002937c) dt_sta_signal_pane

0x8621,	// (0x00022eb8) bg_dt_sta_title_pane_ParamLimits

0x8621,	// (0x00022eb8) bg_dt_sta_title_pane

0xeaee,	// (0x00029385) dt_sta_title_pane_g1

0xeaf6,	// (0x0002938d) dt_sta_title_pane_t1_ParamLimits

0xeaf6,	// (0x0002938d) dt_sta_title_pane_t1

0x7cc1,	// (0x00022558) bg_dt_sta_control_pane

0xeb0b,	// (0x000293a2) dt_sta_controll_pane_g1

0xeb14,	// (0x000293ab) bg_dt_sta_title_pane_g1

0xeb1d,	// (0x000293b4) bg_dt_sta_title_pane_g2

0xeb26,	// (0x000293bd) bg_dt_sta_title_pane_g3

0x0002,

0x01e3,	// (0x0001aa7a) bg_dt_sta_title_pane_g

0xc133,	// (0x000269ca) bg_dt_sta_indi_pane_g1

0xeb2f,	// (0x000293c6) dt_sta_signal_pane_g1

0xeb37,	// (0x000293ce) dt_sta_signal_pane_g2

0x0001,

0x01ea,	// (0x0001aa81) dt_sta_signal_pane_g

0xeb3f,	// (0x000293d6) dt_sta_battery_pane_g1

0xeb48,	// (0x000293df) dt_sta_battery_pane_t1

0xc133,	// (0x000269ca) bg_dt_sta_control_pane_g1

0x8db2,	// (0x00023649) fep_china_uni_eep_pane

0x8dba,	// (0x00023651) fep_china_uni_entry_pane_ParamLimits

0x8dca,	// (0x00023661) popup_fep_china_uni_window_g1_ParamLimits

0x8dda,	// (0x00023671) popup_fep_china_uni_window_g2_ParamLimits

0x8dda,	// (0x00023671) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x00029fba) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x00029fba) popup_fep_china_uni_window_g

0xeb57,	// (0x000293ee) fep_china_uni_eep_pane_g1

0xeb5f,	// (0x000293f6) fep_china_uni_eep_pane_t1

0xe5d2,	// (0x00028e69) aid_touch_area_size_smil_player

0x979a,	// (0x00024031) lc0_clock_pane

0x9981,	// (0x00024218) status_pane_g5_ParamLimits

0x9981,	// (0x00024218) status_pane_g5

0x66f8,	// (0x00020f8f) popup_keymap_window

0x993f,	// (0x000241d6) status_icon_pane

0xe7c0,	// (0x00029057) cell_ai5_widget_pane_g3_ParamLimits

0xe7d7,	// (0x0002906e) cell_ai5_widget_pane_g4_ParamLimits

0xe7e3,	// (0x0002907a) cell_ai5_widget_pane_g5_ParamLimits

0xe807,	// (0x0002909e) cell_ai5_widget_pane_g8_ParamLimits

0xe807,	// (0x0002909e) cell_ai5_widget_pane_g8

0xe81b,	// (0x000290b2) cell_ai5_widget_pane_g9_ParamLimits

0xe81b,	// (0x000290b2) cell_ai5_widget_pane_g9

0xe82f,	// (0x000290c6) cell_ai5_widget_pane_g10_ParamLimits

0xe82f,	// (0x000290c6) cell_ai5_widget_pane_g10

0xeb6e,	// (0x00029405) status_icon_pane_g1

0x7cc1,	// (0x00022558) bg_popup_sub_pane_cp13

0xeb76,	// (0x0002940d) popup_keymap_window_t1

0x9573,	// (0x00023e0a) control_pane_g6_ParamLimits

0x9573,	// (0x00023e0a) control_pane_g6

0x9580,	// (0x00023e17) control_pane_g7_ParamLimits

0x9580,	// (0x00023e17) control_pane_g7

0x958d,	// (0x00023e24) control_pane_g8_ParamLimits

0x958d,	// (0x00023e24) control_pane_g8

0xea91,	// (0x00029328) dt_sta_controll_pane_ParamLimits

0xea9e,	// (0x00029335) dt_sta_indi_pane_ParamLimits

0xeaaf,	// (0x00029346) dt_sta_title_pane_ParamLimits

0x8559,	// (0x00022df0) aid_size_touch_scroll_bar_cale

0x5d75,	// (0x0002060c) popup_discreet_window_ParamLimits

0x5d75,	// (0x0002060c) popup_discreet_window

0x5dfd,	// (0x00020694) popup_sk_window

0xa177,	// (0x00024a0e) bg_popup_sub_pane_cp28_ParamLimits

0xa177,	// (0x00024a0e) bg_popup_sub_pane_cp28

0xeb84,	// (0x0002941b) popup_discreet_window_g1_ParamLimits

0xeb84,	// (0x0002941b) popup_discreet_window_g1

0xeba4,	// (0x0002943b) popup_discreet_window_t1_ParamLimits

0xeba4,	// (0x0002943b) popup_discreet_window_t1

0xebc2,	// (0x00029459) popup_discreet_window_t2_ParamLimits

0xebc2,	// (0x00029459) popup_discreet_window_t2

0x0002,

0x01ef,	// (0x0001aa86) popup_discreet_window_t_ParamLimits

0x01ef,	// (0x0001aa86) popup_discreet_window_t

0x7ae8,	// (0x0002237f) popup_sk_window_g1

0x7af2,	// (0x00022389) popup_sk_window_g2

0x0001,

0xfda4,	// (0x0002a63b) popup_sk_window_g

0x7afc,	// (0x00022393) popup_sk_window_t1

0x7b0a,	// (0x000223a1) popup_sk_window_t1_copy1

0xe7b0,	// (0x00029047) cell_ai5_widget_pane_g2_ParamLimits

0xe909,	// (0x000291a0) cell_ai5_widget_pane_t9_ParamLimits

0xe909,	// (0x000291a0) cell_ai5_widget_pane_t9

0x7cc1,	// (0x00022558) main_fep_fshwr2_pane

0x7b18,	// (0x000223af) aid_fshwr2_btn_pane

0x7b24,	// (0x000223bb) aid_fshwr2_syb_pane

0x7b35,	// (0x000223cc) aid_fshwr2_txt_pane

0x7b41,	// (0x000223d8) fshwr2_func_candi_pane

0x7b59,	// (0x000223f0) fshwr2_hwr_syb_pane

0x7b70,	// (0x00022407) fshwr2_icf_pane

0x7cc1,	// (0x00022558) fshwr2_icf_bg_pane

0xec14,	// (0x000294ab) fshwr2_icf_pane_t1_ParamLimits

0xec14,	// (0x000294ab) fshwr2_icf_pane_t1

0x8ca0,	// (0x00023537) fshwr2_func_candi_pane_g1

0xec2c,	// (0x000294c3) fshwr2_func_candi_row_pane_ParamLimits

0xec2c,	// (0x000294c3) fshwr2_func_candi_row_pane

0xec3c,	// (0x000294d3) cell_fshwr2_syb_pane_ParamLimits

0xec3c,	// (0x000294d3) cell_fshwr2_syb_pane

0xc3b1,	// (0x00026c48) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc3b1,	// (0x00026c48) fshwr2_hwr_syb_pane_g1

0x7cc1,	// (0x00022558) bg_popup_call_pane_cp01

0xec56,	// (0x000294ed) fshwr2_func_candi_cell_pane_ParamLimits

0xec56,	// (0x000294ed) fshwr2_func_candi_cell_pane

0xec81,	// (0x00029518) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec81,	// (0x00029518) fshwr2_func_candi_cell_bg_pane

0xec8d,	// (0x00029524) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec8d,	// (0x00029524) fshwr2_func_candi_cell_pane_g1

0xecb5,	// (0x0002954c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xecb5,	// (0x0002954c) fshwr2_func_candi_cell_pane_t1

0x7cc1,	// (0x00022558) bg_button_pane_cp08

0x92a8,	// (0x00023b3f) cell_fshwr2_syb_bg_pane

0xecc8,	// (0x0002955f) cell_fshwr2_syb_bg_pane_g1

0xecd0,	// (0x00029567) cell_fshwr2_syb_bg_pane_t1

0x8621,	// (0x00022eb8) main_tmo_pane

0xac86,	// (0x0002551d) uni_indicator_pane_g1_ParamLimits

0xac9d,	// (0x00025534) uni_indicator_pane_g2_ParamLimits

0xacb0,	// (0x00025547) uni_indicator_pane_g3_ParamLimits

0xacc2,	// (0x00025559) uni_indicator_pane_g4_ParamLimits

0xacc2,	// (0x00025559) uni_indicator_pane_g4

0xacd6,	// (0x0002556d) uni_indicator_pane_g5_ParamLimits

0xacd6,	// (0x0002556d) uni_indicator_pane_g5

0xacd6,	// (0x0002556d) uni_indicator_pane_g6_ParamLimits

0xacd6,	// (0x0002556d) uni_indicator_pane_g6

0xf920,	// (0x0002a1b7) uni_indicator_pane_g_ParamLimits

0xd60e,	// (0x00027ea5) popup_tmo_note_window_ParamLimits

0xd60e,	// (0x00027ea5) popup_tmo_note_window

0x8621,	// (0x00022eb8) fshwr2_bg_pane

0xeca6,	// (0x0002953d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xeca6,	// (0x0002953d) fshwr2_func_candi_cell_pane_g2

0x0001,

0x01fb,	// (0x0001aa92) fshwr2_func_candi_cell_pane_g_ParamLimits

0x01fb,	// (0x0001aa92) fshwr2_func_candi_cell_pane_g

0xc133,	// (0x000269ca) bg_popup_window_pane_cp01

0xecdf,	// (0x00029576) bg_popup_window_pane_g1_cp01

0xece8,	// (0x0002957f) bg_popup_window_pane_cp22_ParamLimits

0xece8,	// (0x0002957f) bg_popup_window_pane_cp22

0xecf6,	// (0x0002958d) listscroll_tmo_link_pane_ParamLimits

0xecf6,	// (0x0002958d) listscroll_tmo_link_pane

0xed36,	// (0x000295cd) popup_tmo_note_window_g1_ParamLimits

0xed36,	// (0x000295cd) popup_tmo_note_window_g1

0xed43,	// (0x000295da) tmo_note_info_pane_ParamLimits

0xed43,	// (0x000295da) tmo_note_info_pane

0xed5d,	// (0x000295f4) list_tmo_note_info_pane_g1_ParamLimits

0xed5d,	// (0x000295f4) list_tmo_note_info_pane_g1

0xed74,	// (0x0002960b) list_tmo_note_info_pane_g2_ParamLimits

0xed74,	// (0x0002960b) list_tmo_note_info_pane_g2

0x0001,

0x0200,	// (0x0001aa97) list_tmo_note_info_pane_g_ParamLimits

0x0200,	// (0x0001aa97) list_tmo_note_info_pane_g

0xed90,	// (0x00029627) list_tmo_note_info_text_pane_ParamLimits

0xed90,	// (0x00029627) list_tmo_note_info_text_pane

0xee11,	// (0x000296a8) list_tmo_link_pane

0xee1e,	// (0x000296b5) scroll_pane_cp20

0xee2b,	// (0x000296c2) list_single_tmo_link_pane_ParamLimits

0xee2b,	// (0x000296c2) list_single_tmo_link_pane

0xee3b,	// (0x000296d2) list_single_tmo_link_pane_t1

0xee49,	// (0x000296e0) list_tmo_note_info_text_pane_t1_ParamLimits

0xee49,	// (0x000296e0) list_tmo_note_info_text_pane_t1

0x86db,	// (0x00022f72) aid_size_touch_scroll_bar_cp01_ParamLimits

0x86db,	// (0x00022f72) aid_size_touch_scroll_bar_cp01

0x502c,	// (0x0001f8c3) aid_size_touch_slider_marker

0x5de5,	// (0x0002067c) popup_settings_window_ParamLimits

0x5de5,	// (0x0002067c) popup_settings_window

0x51fb,	// (0x0001fa92) popup_candi_list_indi_window

0x964a,	// (0x00023ee1) aid_touch_navi_pane_ParamLimits

0x72fb,	// (0x00021b92) rs_clock_indi_pane

0x7304,	// (0x00021b9b) sctrl_sk_bottom_pane_ParamLimits

0x7315,	// (0x00021bac) sctrl_sk_top_pane_ParamLimits

0x73fc,	// (0x00021c93) popup_fep_tooltip_window

0xe726,	// (0x00028fbd) aid_size_cell_widget_grid_ParamLimits

0xe79b,	// (0x00029032) cell_ai5_widget_pane_g1_ParamLimits

0xe79b,	// (0x00029032) cell_ai5_widget_pane_g1

0xe7ef,	// (0x00029086) cell_ai5_widget_pane_g6_ParamLimits

0xe7fb,	// (0x00029092) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x017e,	// (0x0001aa15) cell_ai5_widget_pane_g_ParamLimits

0x017e,	// (0x0001aa15) cell_ai5_widget_pane_g

0xe92d,	// (0x000291c4) cell_ai5_widget_pane_t10_ParamLimits

0xe92d,	// (0x000291c4) cell_ai5_widget_pane_t10

0xe94b,	// (0x000291e2) grid_ai5_widget_pane_ParamLimits

0xe9ed,	// (0x00029284) cell_contacts_ai5_widget_pane_ParamLimits

0xe9ed,	// (0x00029284) cell_contacts_ai5_widget_pane

0xebd7,	// (0x0002946e) popup_discreet_window_t3_ParamLimits

0xebd7,	// (0x0002946e) popup_discreet_window_t3

0x7b85,	// (0x0002241c) popup_fshwr2_char_preview_window_ParamLimits

0x7b85,	// (0x0002241c) popup_fshwr2_char_preview_window

0xedae,	// (0x00029645) tmo_note_info_pane_t1

0xedc3,	// (0x0002965a) tmo_note_info_pane_t2

0xedd8,	// (0x0002966f) tmo_note_info_pane_t3

0xeded,	// (0x00029684) tmo_note_info_pane_t4

0xedff,	// (0x00029696) tmo_note_info_pane_t5

0x0004,

0x0205,	// (0x0001aa9c) tmo_note_info_pane_t

0xee11,	// (0x000296a8) list_tmo_link_pane_ParamLimits

0xee1e,	// (0x000296b5) scroll_pane_cp20_ParamLimits

0x7cc1,	// (0x00022558) bg_popup_fep_char_preview_window_cp01

0xee62,	// (0x000296f9) popup_fshwr2_char_preview_window_t1

0xee70,	// (0x00029707) popup_candi_list_indi_window_g1

0xee79,	// (0x00029710) bg_cell_contacts_ai5_widget_pane

0xee85,	// (0x0002971c) cell_contacts_ai5_widget_pane_g1

0xc813,	// (0x000270aa) cell_contacts_ai5_widget_pane_g2

0xee98,	// (0x0002972f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfda9,	// (0x0002a640) cell_contacts_ai5_widget_pane_g

0xeeaa,	// (0x00029741) cell_contacts_ai5_widget_pane_t1

0x8621,	// (0x00022eb8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef21,	// (0x000297b8) settings_container_pane

0x92a8,	// (0x00023b3f) listscroll_set_pane_copy1

0xb820,	// (0x000260b7) scroll_pane_cp121_copy1

0xef2d,	// (0x000297c4) set_content_pane_copy1

0xef35,	// (0x000297cc) aid_height_set_list_copy1_ParamLimits

0xef35,	// (0x000297cc) aid_height_set_list_copy1

0xaf10,	// (0x000257a7) aid_size_parent_copy1_ParamLimits

0xaf10,	// (0x000257a7) aid_size_parent_copy1

0xef41,	// (0x000297d8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef41,	// (0x000297d8) button_value_adjust_pane_cp6_copy1

0x95e8,	// (0x00023e7f) list_highlight_pane_cp2_copy1_ParamLimits

0x95e8,	// (0x00023e7f) list_highlight_pane_cp2_copy1

0xef55,	// (0x000297ec) list_set_pane_copy1_ParamLimits

0xef55,	// (0x000297ec) list_set_pane_copy1

0xeebc,	// (0x00029753) main_pane_set_t1_copy1_ParamLimits

0xeebc,	// (0x00029753) main_pane_set_t1_copy1

0xeef6,	// (0x0002978d) main_pane_set_t2_copy1_ParamLimits

0xeef6,	// (0x0002978d) main_pane_set_t2_copy1

0xf002,	// (0x00029899) main_pane_set_t3_copy1

0xf010,	// (0x000298a7) main_pane_set_t4_copy1

0xef15,	// (0x000297ac) set_content_pane_g1_copy1_ParamLimits

0xef15,	// (0x000297ac) set_content_pane_g1_copy1

0xf01e,	// (0x000298b5) setting_code_pane_copy1

0xf026,	// (0x000298bd) setting_slider_graphic_pane_copy1

0xf026,	// (0x000298bd) setting_slider_pane_copy1

0xf026,	// (0x000298bd) setting_text_pane_copy1

0xf026,	// (0x000298bd) setting_volume_pane_copy1

0xf01e,	// (0x000298b5) settings_code_pane_cp2_copy1

0xf02e,	// (0x000298c5) settings_code_pane_cp_copy1_ParamLimits

0xf02e,	// (0x000298c5) settings_code_pane_cp_copy1

0x7b99,	// (0x00022430) volume_set_pane_copy1

0xf042,	// (0x000298d9) volume_set_pane_g10_copy1

0xf04a,	// (0x000298e1) volume_set_pane_g1_copy1

0xf052,	// (0x000298e9) volume_set_pane_g2_copy1

0xf05a,	// (0x000298f1) volume_set_pane_g3_copy1

0xf062,	// (0x000298f9) volume_set_pane_g4_copy1

0xf06a,	// (0x00029901) volume_set_pane_g5_copy1

0xf072,	// (0x00029909) volume_set_pane_g6_copy1

0xf07a,	// (0x00029911) volume_set_pane_g7_copy1

0xf082,	// (0x00029919) volume_set_pane_g8_copy1

0xf08a,	// (0x00029921) volume_set_pane_g9_copy1

0x7db5,	// (0x0002264c) bg_set_opt_pane_cp_copy1_ParamLimits

0x7db5,	// (0x0002264c) bg_set_opt_pane_cp_copy1

0x7ba1,	// (0x00022438) setting_slider_pane_t1_copy1_ParamLimits

0x7ba1,	// (0x00022438) setting_slider_pane_t1_copy1

0x7bbf,	// (0x00022456) setting_slider_pane_t2_copy1_ParamLimits

0x7bbf,	// (0x00022456) setting_slider_pane_t2_copy1

0x7bd9,	// (0x00022470) setting_slider_pane_t3_copy1_ParamLimits

0x7bd9,	// (0x00022470) setting_slider_pane_t3_copy1

0x7bf1,	// (0x00022488) slider_set_pane_copy1_ParamLimits

0x7bf1,	// (0x00022488) slider_set_pane_copy1

0x867c,	// (0x00022f13) set_opt_bg_pane_g1_copy2

0x8684,	// (0x00022f1b) set_opt_bg_pane_g2_copy2

0xf092,	// (0x00029929) set_opt_bg_pane_g3_copy2

0x8694,	// (0x00022f2b) set_opt_bg_pane_g4_copy2

0x869c,	// (0x00022f33) set_opt_bg_pane_g5_copy2

0x86a4,	// (0x00022f3b) set_opt_bg_pane_g6_copy2

0xf09c,	// (0x00029933) set_opt_bg_pane_g7_copy2

0xf0a4,	// (0x0002993b) set_opt_bg_pane_g8_copy2

0xf0ae,	// (0x00029945) set_opt_bg_pane_g9_copy2

0xf0b8,	// (0x0002994f) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0b8,	// (0x0002994f) aid_size_touch_slider_mark_copy1

0xf0cc,	// (0x00029963) slider_set_pane_g1_copy1

0xf0d5,	// (0x0002996c) slider_set_pane_g2_copy1

0xae8f,	// (0x00025726) slider_set_pane_g3_copy1_ParamLimits

0xae8f,	// (0x00025726) slider_set_pane_g3_copy1

0xaea3,	// (0x0002573a) slider_set_pane_g4_copy1_ParamLimits

0xaea3,	// (0x0002573a) slider_set_pane_g4_copy1

0xaebb,	// (0x00025752) slider_set_pane_g5_copy1_ParamLimits

0xaebb,	// (0x00025752) slider_set_pane_g5_copy1

0xae8f,	// (0x00025726) slider_set_pane_g6_copy1_ParamLimits

0xae8f,	// (0x00025726) slider_set_pane_g6_copy1

0xf0dd,	// (0x00029974) slider_set_pane_g7_copy1_ParamLimits

0xf0dd,	// (0x00029974) slider_set_pane_g7_copy1

0x7cd5,	// (0x0002256c) bg_set_opt_pane_cp2_copy1

0xf0f3,	// (0x0002998a) setting_slider_graphic_pane_g1_copy1

0xf10c,	// (0x000299a3) setting_slider_graphic_pane_t1_copy1

0xf0fc,	// (0x00029993) setting_slider_graphic_pane_t2_copy1

0xf11c,	// (0x000299b3) slider_set_pane_cp_copy1

0xf12c,	// (0x000299c3) input_focus_pane_cp1_copy1

0xf135,	// (0x000299cc) list_set_text_pane_copy1

0xf13d,	// (0x000299d4) setting_text_pane_g1_copy1

0x4a32,	// (0x0001f2c9) set_text_pane_t1_copy1

0xf12c,	// (0x000299c3) input_focus_pane_cp2_copy1

0xf13d,	// (0x000299d4) setting_code_pane_g1_copy1

0xf146,	// (0x000299dd) setting_code_pane_t1_copy1

0xf154,	// (0x000299eb) list_set_graphic_pane_copy1

0x7cd5,	// (0x0002256c) bg_set_opt_pane_cp4_copy1

0x8fae,	// (0x00023845) list_set_graphic_pane_g1_copy1_ParamLimits

0x8fae,	// (0x00023845) list_set_graphic_pane_g1_copy1

0xf166,	// (0x000299fd) list_set_graphic_pane_g2_copy1

0x8fc6,	// (0x0002385d) list_set_graphic_pane_t1_copy1_ParamLimits

0x8fc6,	// (0x0002385d) list_set_graphic_pane_t1_copy1

0xc133,	// (0x000269ca) rs_clock_indi_pane_g1

0xf16e,	// (0x00029a05) rs_clock_indi_pane_t1

0xf17c,	// (0x00029a13) rs_indi_pane

0xf184,	// (0x00029a1b) rs_indi_pane_g1

0xf18d,	// (0x00029a24) rs_indi_pane_g2

0xf196,	// (0x00029a2d) rs_indi_pane_g3

0x0002,

0x0217,	// (0x0001aaae) rs_indi_pane_g

0x92a8,	// (0x00023b3f) bg_popup_preview_window_pane_cp03

0xf19f,	// (0x00029a36) popup_fep_tooltip_window_t1

0xcdaf,	// (0x00027646) popup_note2_window_g2_ParamLimits

0xcdaf,	// (0x00027646) popup_note2_window_g2

0x0001,

0xfc54,	// (0x0002a4eb) popup_note2_window_g_ParamLimits

0xfc54,	// (0x0002a4eb) popup_note2_window_g

0xd2aa,	// (0x00027b41) bg_popup_sub_pane_cp11_ParamLimits

0xd2b7,	// (0x00027b4e) cell_ai3_links_pane_g1_ParamLimits

0xd2ce,	// (0x00027b65) cell_ai3_links_pane_t1

0x4a32,	// (0x0001f2c9) set_text_pane_t1_copy1_ParamLimits

0x91b9,	// (0x00023a50) cell_graphic_popup_pane_cp2_ParamLimits

0x91b9,	// (0x00023a50) cell_graphic_popup_pane_cp2

0xf1ad,	// (0x00029a44) cell_graphic_popup_pane_g1_cp2

0x836c,	// (0x00022c03) cell_graphic_popup_pane_g2_cp2

0xf1b5,	// (0x00029a4c) cell_graphic_popup_pane_g3_cp2

0xf1bd,	// (0x00029a54) cell_graphic_popup_pane_t2_cp2

0x837d,	// (0x00022c14) grid_highlight_pane_cp3_cp2

0x89c1,	// (0x00023258) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8621,	// (0x00022eb8) main_tmo_pane_ParamLimits

0xd602,	// (0x00027e99) popup_tmo_big_image_note_window

0xe78a,	// (0x00029021) cell_ai5_widget_list_pane

0xe792,	// (0x00029029) cell_ai5_widget_lrg_icon_pane

0xedae,	// (0x00029645) tmo_note_info_pane_t1_ParamLimits

0xedc3,	// (0x0002965a) tmo_note_info_pane_t2_ParamLimits

0xedd8,	// (0x0002966f) tmo_note_info_pane_t3_ParamLimits

0xeded,	// (0x00029684) tmo_note_info_pane_t4_ParamLimits

0xedff,	// (0x00029696) tmo_note_info_pane_t5_ParamLimits

0x0205,	// (0x0001aa9c) tmo_note_info_pane_t_ParamLimits

0xef21,	// (0x000297b8) settings_container_pane_ParamLimits

0xf124,	// (0x000299bb) indicator_popup_pane_cp5

0xf124,	// (0x000299bb) indicator_popup_pane_cp6

0xf154,	// (0x000299eb) list_set_graphic_pane_copy1_ParamLimits

0x7cc1,	// (0x00022558) bg_popup_window_pane_cp23

0xf1cb,	// (0x00029a62) popup_tmo_big_image_note_window_g1

0xf1d5,	// (0x00029a6c) popup_tmo_big_image_note_window_t1

0xf1e5,	// (0x00029a7c) popup_tmo_big_image_note_window_t2

0xf1f5,	// (0x00029a8c) popup_tmo_big_image_note_window_t3

0x0002,

0x021e,	// (0x0001aab5) popup_tmo_big_image_note_window_t

0xc133,	// (0x000269ca) cell_ai5_widget_lrg_icon_pane_g1

0xf205,	// (0x00029a9c) cell_ai5_widget_lrg_icon_pane_t1

0xf213,	// (0x00029aaa) cell_ai5_widget_list_row_pane_ParamLimits

0xf213,	// (0x00029aaa) cell_ai5_widget_list_row_pane

0xf22c,	// (0x00029ac3) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf22c,	// (0x00029ac3) cell_ai5_widget_list_row_pane_g1

0xf239,	// (0x00029ad0) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf239,	// (0x00029ad0) cell_ai5_widget_list_row_pane_t1

0xf26a,	// (0x00029b01) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf26a,	// (0x00029b01) cell_ai5_widget_list_row_pane_t2

0x0002,

0x0225,	// (0x0001aabc) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0225,	// (0x0001aabc) cell_ai5_widget_list_row_pane_t

0x7cc1,	// (0x00022558) main_fep_vtchi_ss_pane

0x7c16,	// (0x000224ad) popup_fep_char_pre_window

0x7c1e,	// (0x000224b5) popup_fep_ituss_window

0x7c3f,	// (0x000224d6) popup_fep_vkbss_window

0xf292,	// (0x00029b29) grid_vkbss_keypad_pane_ParamLimits

0xf292,	// (0x00029b29) grid_vkbss_keypad_pane

0xf2a2,	// (0x00029b39) ituss_keypad_pane

0x7c6a,	// (0x00022501) aid_vkbss_key_offset_ParamLimits

0x7c6a,	// (0x00022501) aid_vkbss_key_offset

0x7c76,	// (0x0002250d) cell_vkbss_key_pane_ParamLimits

0x7c76,	// (0x0002250d) cell_vkbss_key_pane

0xf2b2,	// (0x00029b49) bg_cell_vkbss_key_g1_ParamLimits

0xf2b2,	// (0x00029b49) bg_cell_vkbss_key_g1

0xf2be,	// (0x00029b55) cell_vkbss_key_3p_pane_ParamLimits

0xf2be,	// (0x00029b55) cell_vkbss_key_3p_pane

0xf2d8,	// (0x00029b6f) cell_vkbss_key_g1_ParamLimits

0xf2d8,	// (0x00029b6f) cell_vkbss_key_g1

0xf2f2,	// (0x00029b89) cell_vkbss_key_t1_ParamLimits

0xf2f2,	// (0x00029b89) cell_vkbss_key_t1

0x7c8c,	// (0x00022523) cell_ituss_key_pane_ParamLimits

0x7c8c,	// (0x00022523) cell_ituss_key_pane

0xf31d,	// (0x00029bb4) bg_cell_ituss_key_g1_ParamLimits

0xf31d,	// (0x00029bb4) bg_cell_ituss_key_g1

0xf329,	// (0x00029bc0) cell_ituss_key_pane_g1_ParamLimits

0xf329,	// (0x00029bc0) cell_ituss_key_pane_g1

0xf343,	// (0x00029bda) cell_ituss_key_pane_g2_ParamLimits

0xf343,	// (0x00029bda) cell_ituss_key_pane_g2

0x0001,

0x022c,	// (0x0001aac3) cell_ituss_key_pane_g_ParamLimits

0x022c,	// (0x0001aac3) cell_ituss_key_pane_g

0xf371,	// (0x00029c08) cell_ituss_key_t1_ParamLimits

0xf371,	// (0x00029c08) cell_ituss_key_t1

0xf3ab,	// (0x00029c42) cell_ituss_key_t2_ParamLimits

0xf3ab,	// (0x00029c42) cell_ituss_key_t2

0xf3dc,	// (0x00029c73) cell_ituss_key_t3_ParamLimits

0xf3dc,	// (0x00029c73) cell_ituss_key_t3

0xf416,	// (0x00029cad) cell_ituss_key_t4_ParamLimits

0xf416,	// (0x00029cad) cell_ituss_key_t4

0x0003,

0x0231,	// (0x0001aac8) cell_ituss_key_t_ParamLimits

0x0231,	// (0x0001aac8) cell_ituss_key_t

0xf450,	// (0x00029ce7) cell_vkbss_key_3p_pane_g1

0xf458,	// (0x00029cef) cell_vkbss_key_3p_pane_g2

0xf460,	// (0x00029cf7) cell_vkbss_key_3p_pane_g3

0x0002,

0x023a,	// (0x0001aad1) cell_vkbss_key_3p_pane_g

0x7cc1,	// (0x00022558) bg_popup_fep_char_preview_window_cp02

0xf468,	// (0x00029cff) popup_fep_char_pre_window_t1

0xe71c,	// (0x00028fb3) main_ai5_sk_pane

0xee79,	// (0x00029710) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee85,	// (0x0002971c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc813,	// (0x000270aa) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee98,	// (0x0002972f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfda9,	// (0x0002a640) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeeaa,	// (0x00029741) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8621,	// (0x00022eb8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf477,	// (0x00029d0e) main_ai5_sk_pane_g1

0x9fb0,	// (0x00024847) popup_query_code_window_g1

0x7c34,	// (0x000224cb) popup_fep_vkb_icf_pane

0x7c48,	// (0x000224df) popup_fep_vtchi_icf_pane

0x8621,	// (0x00022eb8) bg_icf_pane

0xf480,	// (0x00029d17) list_vkb_icf_pane

0x8621,	// (0x00022eb8) bg_icf_pane_cp01

0xf48c,	// (0x00029d23) vtchi_icf_list_pane

0xf49d,	// (0x00029d34) list_vkb_icf_pane_t1_ParamLimits

0xf49d,	// (0x00029d34) list_vkb_icf_pane_t1

0xf4b3,	// (0x00029d4a) vtchi_icf_list_pane_t1_ParamLimits

0xf4b3,	// (0x00029d4a) vtchi_icf_list_pane_t1

0x7c1e,	// (0x000224b5) popup_fep_ituss_window_ParamLimits

0x7c48,	// (0x000224df) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a2,	// (0x00029b39) ituss_keypad_pane_ParamLimits

0x7c5e,	// (0x000224f5) ituss_sks_pane

0x8621,	// (0x00022eb8) bg_icf_pane_ParamLimits

0x7c07,	// (0x0002249e) icf_edit_indi_pane_ParamLimits

0x7c07,	// (0x0002249e) icf_edit_indi_pane

0xf480,	// (0x00029d17) list_vkb_icf_pane_ParamLimits

0x8621,	// (0x00022eb8) bg_icf_pane_cp01_ParamLimits

0x7c07,	// (0x0002249e) icf_edit_indi_pane_cp01_ParamLimits

0x7c07,	// (0x0002249e) icf_edit_indi_pane_cp01

0xf494,	// (0x00029d2b) vtchi_query_pane

0xc3b1,	// (0x00026c48) icf_edit_indi_pane_g1_ParamLimits

0xc3b1,	// (0x00026c48) icf_edit_indi_pane_g1

0xf537,	// (0x00029dce) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x00029dce) icf_edit_indi_pane_g2

0x0001,

0xfdb0,	// (0x0002a647) icf_edit_indi_pane_g_ParamLimits

0xfdb0,	// (0x0002a647) icf_edit_indi_pane_g

0xf546,	// (0x00029ddd) icf_edit_indi_pane_t1

0xf4cd,	// (0x00029d64) bg_input_focus_pane_cp042

0x8550,	// (0x00022de7) vtchi_button_pane

0xf4d6,	// (0x00029d6d) vtchi_query_pane_t1

0xf4e4,	// (0x00029d7b) vtchi_query_pane_t2

0xf4f2,	// (0x00029d89) vtchi_query_pane_t3

0x0002,

0x0241,	// (0x0001aad8) vtchi_query_pane_t

0x7cc1,	// (0x00022558) bg_button_pane_cp13

0xf500,	// (0x00029d97) vtchi_button_pane_g1

0xf508,	// (0x00029d9f) ituss_sks_pane_g1

0xf513,	// (0x00029daa) ituss_sks_pane_g2

0x0001,

0x0248,	// (0x0001aadf) ituss_sks_pane_g

0xf51b,	// (0x00029db2) ituss_sks_pane_t1

0xf529,	// (0x00029dc0) ituss_sks_pane_t2

0x0001,

0x024d,	// (0x0001aae4) ituss_sks_pane_t

0xbbaa,	// (0x00026441) indicator_nsta_pane_cp_g1

0xbbb3,	// (0x0002644a) indicator_nsta_pane_cp_g2

0xbbbb,	// (0x00026452) indicator_nsta_pane_cp_g3

0xbbc3,	// (0x0002645a) indicator_nsta_pane_cp_g4

0xbbc3,	// (0x0002645a) indicator_nsta_pane_cp_g5

0xbbc3,	// (0x0002645a) indicator_nsta_pane_cp_g6

0x0005,

0xfa9e,	// (0x0002a335) indicator_nsta_pane_cp_g

0xe2e1,	// (0x00028b78) cell_graphic2_pane_t2_ParamLimits

0xe2e1,	// (0x00028b78) cell_graphic2_pane_t2

0x0001,

0x0107,	// (0x0001a99e) cell_graphic2_pane_t_ParamLimits

0x0107,	// (0x0001a99e) cell_graphic2_pane_t

0xe30e,	// (0x00028ba5) cell_graphic2_control_pane_t1

0x8d61,	// (0x000235f8) signal_pane_g3_ParamLimits

0x8d61,	// (0x000235f8) signal_pane_g3

0x8d73,	// (0x0002360a) signal_pane_g4_ParamLimits

0x8d73,	// (0x0002360a) signal_pane_g4

0xf27c,	// (0x00029b13) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf27c,	// (0x00029b13) cell_ai5_widget_list_row_pane_t3

0xf35f,	// (0x00029bf6) cell_ituss_key_pane_t1_ParamLimits

0xf35f,	// (0x00029bf6) cell_ituss_key_pane_t1

0x9c03,	// (0x0002449a) form_field_data_wide_pane_vc_t2_ParamLimits

0x9c03,	// (0x0002449a) form_field_data_wide_pane_vc_t2

0x9c17,	// (0x000244ae) form_field_data_wide_pane_vc_t3_ParamLimits

0x9c17,	// (0x000244ae) form_field_data_wide_pane_vc_t3

0x0002,

0xf808,	// (0x0002a09f) form_field_data_wide_pane_vc_t_ParamLimits

0xf808,	// (0x0002a09f) form_field_data_wide_pane_vc_t

0xb862,	// (0x000260f9) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb862,	// (0x000260f9) form_field_slider_wide_pane_vc_t3

0xb940,	// (0x000261d7) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb940,	// (0x000261d7) form_field_popup_wide_pane_vc_t2

0xb957,	// (0x000261ee) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb957,	// (0x000261ee) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8d,	// (0x0002a324) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0002a324) form_field_popup_wide_pane_vc_t

0x7b18,	// (0x000223af) aid_fshwr2_btn_pane_ParamLimits

0x7b24,	// (0x000223bb) aid_fshwr2_syb_pane_ParamLimits

0x7b35,	// (0x000223cc) aid_fshwr2_txt_pane_ParamLimits

0x8621,	// (0x00022eb8) fshwr2_bg_pane_ParamLimits

0x7b41,	// (0x000223d8) fshwr2_func_candi_pane_ParamLimits

0x7b59,	// (0x000223f0) fshwr2_hwr_syb_pane_ParamLimits

0x7b70,	// (0x00022407) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small

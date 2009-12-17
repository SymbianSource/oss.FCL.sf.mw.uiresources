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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002e3fb };

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
0x9cfe,	// (0x000380f9) Screen

0x9d0a,	// (0x00038105) application_window_ParamLimits

0x9d0a,	// (0x00038105) application_window

0x3eaa,	// (0x000322a5) screen_g1

0x9d66,	// (0x00038161) area_bottom_pane_ParamLimits

0x9d66,	// (0x00038161) area_bottom_pane

0x9e26,	// (0x00038221) area_top_pane_ParamLimits

0x9e26,	// (0x00038221) area_top_pane

0x9eba,	// (0x000382b5) main_pane_ParamLimits

0x9eba,	// (0x000382b5) main_pane

0x3eb4,	// (0x000322af) misc_graphics

0xc550,	// (0x0003a94b) battery_pane_ParamLimits

0xc550,	// (0x0003a94b) battery_pane

0x6249,	// (0x00034644) bg_status_flat_pane_g8

0x6251,	// (0x0003464c) bg_status_flat_pane_g9

0x597a,	// (0x00033d75) context_pane_ParamLimits

0x597a,	// (0x00033d75) context_pane

0xc684,	// (0x0003aa7f) navi_pane_ParamLimits

0xc684,	// (0x0003aa7f) navi_pane

0xc6f0,	// (0x0003aaeb) signal_pane_ParamLimits

0xc6f0,	// (0x0003aaeb) signal_pane

0x0008,

0xf8b7,	// (0x0003dcb2) bg_status_flat_pane_g

0xc755,	// (0x0003ab50) status_pane_g1_ParamLimits

0xc755,	// (0x0003ab50) status_pane_g1

0xc769,	// (0x0003ab64) status_pane_g2_ParamLimits

0xc769,	// (0x0003ab64) status_pane_g2

0x59df,	// (0x00033dda) status_pane_g3_ParamLimits

0x59df,	// (0x00033dda) status_pane_g3

0x0004,

0xf7e5,	// (0x0003dbe0) status_pane_g_ParamLimits

0xf7e5,	// (0x0003dbe0) status_pane_g

0xc775,	// (0x0003ab70) title_pane_ParamLimits

0xc775,	// (0x0003ab70) title_pane

0xc7b2,	// (0x0003abad) uni_indicator_pane_ParamLimits

0xc7b2,	// (0x0003abad) uni_indicator_pane

0x57a9,	// (0x00033ba4) bg_list_pane_ParamLimits

0x57a9,	// (0x00033ba4) bg_list_pane

0xaded,	// (0x000391e8) find_pane

0xadf5,	// (0x000391f0) listscroll_app_pane_ParamLimits

0xadf5,	// (0x000391f0) listscroll_app_pane

0x57c9,	// (0x00033bc4) listscroll_form_pane

0xae01,	// (0x000391fc) listscroll_gen_pane_ParamLimits

0xae01,	// (0x000391fc) listscroll_gen_pane

0x57c9,	// (0x00033bc4) listscroll_set_pane

0xa583,	// (0x0003897e) main_idle_act_pane

0x5587,	// (0x00033982) main_idle_trad_pane

0x5587,	// (0x00033982) main_list_empty_pane

0x4cba,	// (0x000330b5) main_midp_pane

0x57e3,	// (0x00033bde) main_pane_g1_ParamLimits

0x57e3,	// (0x00033bde) main_pane_g1

0xae15,	// (0x00039210) popup_ai_message_window_ParamLimits

0xae15,	// (0x00039210) popup_ai_message_window

0xae93,	// (0x0003928e) popup_fep_china_uni_window_ParamLimits

0xae93,	// (0x0003928e) popup_fep_china_uni_window

0x5815,	// (0x00033c10) popup_fep_japan_candidate_window_ParamLimits

0x5815,	// (0x00033c10) popup_fep_japan_candidate_window

0x5835,	// (0x00033c30) popup_fep_japan_predictive_window_ParamLimits

0x5835,	// (0x00033c30) popup_fep_japan_predictive_window

0xaeef,	// (0x000392ea) popup_find_window

0xaefc,	// (0x000392f7) popup_grid_graphic_window_ParamLimits

0xaefc,	// (0x000392f7) popup_grid_graphic_window

0x5865,	// (0x00033c60) popup_large_graphic_colour_window

0xaf24,	// (0x0003931f) popup_menu_window_ParamLimits

0xaf24,	// (0x0003931f) popup_menu_window

0xb0dc,	// (0x000394d7) popup_note_image_window

0xb0c8,	// (0x000394c3) popup_note_wait_window_ParamLimits

0xb0c8,	// (0x000394c3) popup_note_wait_window

0xb0c8,	// (0x000394c3) popup_note_window_ParamLimits

0xb0c8,	// (0x000394c3) popup_note_window

0xb132,	// (0x0003952d) popup_query_code_window_ParamLimits

0xb132,	// (0x0003952d) popup_query_code_window

0x588b,	// (0x00033c86) popup_query_data_code_window_ParamLimits

0x588b,	// (0x00033c86) popup_query_data_code_window

0xb146,	// (0x00039541) popup_query_data_window_ParamLimits

0xb146,	// (0x00039541) popup_query_data_window

0xb162,	// (0x0003955d) popup_query_sat_info_window_ParamLimits

0xb162,	// (0x0003955d) popup_query_sat_info_window

0xb19b,	// (0x00039596) popup_snote_single_graphic_window_ParamLimits

0xb19b,	// (0x00039596) popup_snote_single_graphic_window

0xb19b,	// (0x00039596) popup_snote_single_text_window_ParamLimits

0xb19b,	// (0x00039596) popup_snote_single_text_window

0x58a8,	// (0x00033ca3) popup_sub_window_general

0x58f0,	// (0x00033ceb) popup_window_general_ParamLimits

0x58f0,	// (0x00033ceb) popup_window_general

0x5905,	// (0x00033d00) power_save_pane

0xac68,	// (0x00039063) control_pane_g1_ParamLimits

0xac68,	// (0x00039063) control_pane_g1

0xac91,	// (0x0003908c) control_pane_g2_ParamLimits

0xac91,	// (0x0003908c) control_pane_g2

0x5783,	// (0x00033b7e) control_pane_g3_ParamLimits

0x5783,	// (0x00033b7e) control_pane_g3

0x0007,

0xf7cd,	// (0x0003dbc8) control_pane_g_ParamLimits

0xf7cd,	// (0x0003dbc8) control_pane_g

0xacf6,	// (0x000390f1) control_pane_t1_ParamLimits

0xacf6,	// (0x000390f1) control_pane_t1

0xad48,	// (0x00039143) control_pane_t2_ParamLimits

0xad48,	// (0x00039143) control_pane_t2

0x0002,

0xf7de,	// (0x0003dbd9) control_pane_t_ParamLimits

0xf7de,	// (0x0003dbd9) control_pane_t

0x56a4,	// (0x00033a9f) navi_navi_volume_pane_cp1

0x56ad,	// (0x00033aa8) status_small_icon_pane

0x56b5,	// (0x00033ab0) status_small_pane_g1_ParamLimits

0x56b5,	// (0x00033ab0) status_small_pane_g1

0x56e9,	// (0x00033ae4) status_small_pane_g2_ParamLimits

0x56e9,	// (0x00033ae4) status_small_pane_g2

0x56f5,	// (0x00033af0) status_small_pane_g3_ParamLimits

0x56f5,	// (0x00033af0) status_small_pane_g3

0x5701,	// (0x00033afc) status_small_pane_g4_ParamLimits

0x5701,	// (0x00033afc) status_small_pane_g4

0x570d,	// (0x00033b08) status_small_pane_g5_ParamLimits

0x570d,	// (0x00033b08) status_small_pane_g5

0x571c,	// (0x00033b17) status_small_pane_g6_ParamLimits

0x571c,	// (0x00033b17) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0003dbb7) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0003dbb7) status_small_pane_g

0x574c,	// (0x00033b47) status_small_pane_t1

0x576f,	// (0x00033b6a) status_small_wait_pane_ParamLimits

0x576f,	// (0x00033b6a) status_small_wait_pane

0xa891,	// (0x00038c8c) aid_levels_signal_ParamLimits

0xa891,	// (0x00038c8c) aid_levels_signal

0xa8a3,	// (0x00038c9e) signal_pane_g1_ParamLimits

0xa8a3,	// (0x00038c9e) signal_pane_g1

0xa8b8,	// (0x00038cb3) signal_pane_g2_ParamLimits

0xa8b8,	// (0x00038cb3) signal_pane_g2

0x0001,

0xf751,	// (0x0003db4c) signal_pane_g_ParamLimits

0xf751,	// (0x0003db4c) signal_pane_g

0x50ed,	// (0x000334e8) context_pane_g1

0xa0ff,	// (0x000384fa) title_pane_g1

0xa129,	// (0x00038524) title_pane_t1

0x3eca,	// (0x000322c5) title_pane_t2

0x3ef0,	// (0x000322eb) title_pane_t3

0x0002,

0xf59b,	// (0x0003d996) title_pane_t

0xc7ca,	// (0x0003abc5) aid_levels_battery_ParamLimits

0xc7ca,	// (0x0003abc5) aid_levels_battery

0xc7de,	// (0x0003abd9) battery_pane_g1_ParamLimits

0xc7de,	// (0x0003abd9) battery_pane_g1

0xc7f4,	// (0x0003abef) battery_pane_g2_ParamLimits

0xc7f4,	// (0x0003abef) battery_pane_g2

0x0001,

0xf7f0,	// (0x0003dbeb) battery_pane_g_ParamLimits

0xf7f0,	// (0x0003dbeb) battery_pane_g

0xca32,	// (0x0003ae2d) uni_indicator_pane_g1

0xca47,	// (0x0003ae42) uni_indicator_pane_g2

0xca5d,	// (0x0003ae58) uni_indicator_pane_g3

0x0005,

0xf95f,	// (0x0003dd5a) uni_indicator_pane_g

0x53f9,	// (0x000337f4) navi_icon_pane_ParamLimits

0x53f9,	// (0x000337f4) navi_icon_pane

0x5342,	// (0x0003373d) navi_midp_pane

0x5415,	// (0x00033810) navi_navi_pane

0x541f,	// (0x0003381a) navi_text_pane_ParamLimits

0x541f,	// (0x0003381a) navi_text_pane

0x3eaa,	// (0x000322a5) status_small_wait_pane_g1

0x4828,	// (0x00032c23) status_small_wait_pane_g2

0x0001,

0xf95a,	// (0x0003dd55) status_small_wait_pane_g

0x67da,	// (0x00034bd5) navi_navi_icon_text_pane

0x67f4,	// (0x00034bef) navi_navi_pane_g1_ParamLimits

0x67f4,	// (0x00034bef) navi_navi_pane_g1

0x67e2,	// (0x00034bdd) navi_navi_pane_g2_ParamLimits

0x67e2,	// (0x00034bdd) navi_navi_pane_g2

0x0001,

0xf928,	// (0x0003dd23) navi_navi_pane_g_ParamLimits

0xf928,	// (0x0003dd23) navi_navi_pane_g

0x6806,	// (0x00034c01) navi_navi_tabs_pane

0x680f,	// (0x00034c0a) navi_navi_text_pane

0x67da,	// (0x00034bd5) navi_navi_volume_pane

0xc9f6,	// (0x0003adf1) navi_text_pane_t1

0xc9e7,	// (0x0003ade2) navi_icon_pane_g1

0x671b,	// (0x00034b16) navi_navi_text_pane_t1

0xb447,	// (0x00039842) navi_navi_volume_pane_g1

0xb44f,	// (0x0003984a) volume_small_pane

0xc959,	// (0x0003ad54) navi_navi_icon_text_pane_g1

0xc961,	// (0x0003ad5c) navi_navi_icon_text_pane_t1

0x5415,	// (0x00033810) navi_tabs_2_long_pane

0x5415,	// (0x00033810) navi_tabs_2_pane

0x5415,	// (0x00033810) navi_tabs_3_long_pane

0x5415,	// (0x00033810) navi_tabs_3_pane

0x5415,	// (0x00033810) navi_tabs_4_pane

0xb427,	// (0x00039822) tabs_2_active_pane_ParamLimits

0xb427,	// (0x00039822) tabs_2_active_pane

0xb437,	// (0x00039832) tabs_2_passive_pane_ParamLimits

0xb437,	// (0x00039832) tabs_2_passive_pane

0xb3f5,	// (0x000397f0) tabs_3_active_pane_ParamLimits

0xb3f5,	// (0x000397f0) tabs_3_active_pane

0xb405,	// (0x00039800) tabs_3_passive_pane_ParamLimits

0xb405,	// (0x00039800) tabs_3_passive_pane

0xb416,	// (0x00039811) tabs_3_passive_pane_cp_ParamLimits

0xb416,	// (0x00039811) tabs_3_passive_pane_cp

0xb3b1,	// (0x000397ac) tabs_4_active_pane_ParamLimits

0xb3b1,	// (0x000397ac) tabs_4_active_pane

0xb3c2,	// (0x000397bd) tabs_4_passive_pane_ParamLimits

0xb3c2,	// (0x000397bd) tabs_4_passive_pane

0xb3d3,	// (0x000397ce) tabs_4_passive_pane_cp_ParamLimits

0xb3d3,	// (0x000397ce) tabs_4_passive_pane_cp

0xb3e4,	// (0x000397df) tabs_4_passive_pane_cp2_ParamLimits

0xb3e4,	// (0x000397df) tabs_4_passive_pane_cp2

0xb38d,	// (0x00039788) tabs_2_long_active_pane_ParamLimits

0xb38d,	// (0x00039788) tabs_2_long_active_pane

0xb39f,	// (0x0003979a) tabs_2_long_passive_pane_ParamLimits

0xb39f,	// (0x0003979a) tabs_2_long_passive_pane

0xb34e,	// (0x00039749) tabs_3_long_active_pane_ParamLimits

0xb34e,	// (0x00039749) tabs_3_long_active_pane

0xb361,	// (0x0003975c) tabs_3_long_passive_pane_ParamLimits

0xb361,	// (0x0003975c) tabs_3_long_passive_pane

0xb37a,	// (0x00039775) tabs_3_long_passive_pane_cp_ParamLimits

0xb37a,	// (0x00039775) tabs_3_long_passive_pane_cp

0xb2f4,	// (0x000396ef) volume_small_pane_g1

0xb2fd,	// (0x000396f8) volume_small_pane_g2

0xb306,	// (0x00039701) volume_small_pane_g3

0xb30f,	// (0x0003970a) volume_small_pane_g4

0xb318,	// (0x00039713) volume_small_pane_g5

0xb321,	// (0x0003971c) volume_small_pane_g6

0xb32a,	// (0x00039725) volume_small_pane_g7

0xb333,	// (0x0003972e) volume_small_pane_g8

0xb33c,	// (0x00039737) volume_small_pane_g9

0xb345,	// (0x00039740) volume_small_pane_g10

0x0009,

0xf8f4,	// (0x0003dcef) volume_small_pane_g

0x3f10,	// (0x0003230b) bg_active_tab_pane_cp2_ParamLimits

0x3f10,	// (0x0003230b) bg_active_tab_pane_cp2

0xa191,	// (0x0003858c) tabs_3_active_pane_g1

0xa199,	// (0x00038594) tabs_3_active_pane_t1

0x3f10,	// (0x0003230b) bg_passive_tab_pane_cp2_ParamLimits

0x3f10,	// (0x0003230b) bg_passive_tab_pane_cp2

0xa191,	// (0x0003858c) tabs_3_passive_pane_g1

0xa199,	// (0x00038594) tabs_3_passive_pane_t1

0x3f10,	// (0x0003230b) bg_active_tab_pane_cp3_ParamLimits

0x3f10,	// (0x0003230b) bg_active_tab_pane_cp3

0xa1ab,	// (0x000385a6) tabs_4_active_pane_g1

0xa1b3,	// (0x000385ae) tabs_4_active_pane_t1

0x3f10,	// (0x0003230b) bg_passive_tab_pane_cp3_ParamLimits

0x3f10,	// (0x0003230b) bg_passive_tab_pane_cp3

0xa1ab,	// (0x000385a6) tabs_4_1_passive_pane_g1

0xa1b3,	// (0x000385ae) tabs_4_1_passive_pane_t1

0x4cba,	// (0x000330b5) list_highlight_pane_cp2

0xcad4,	// (0x0003aecf) list_set_pane_ParamLimits

0xcad4,	// (0x0003aecf) list_set_pane

0xcb7a,	// (0x0003af75) main_pane_set_t1_ParamLimits

0xcb7a,	// (0x0003af75) main_pane_set_t1

0xcb9a,	// (0x0003af95) main_pane_set_t2_ParamLimits

0xcb9a,	// (0x0003af95) main_pane_set_t2

0xcbae,	// (0x0003afa9) main_pane_set_t3_ParamLimits

0xcbae,	// (0x0003afa9) main_pane_set_t3

0xcbc0,	// (0x0003afbb) main_pane_set_t4_ParamLimits

0xcbc0,	// (0x0003afbb) main_pane_set_t4

0x0003,

0xf9c4,	// (0x0003ddbf) main_pane_set_t_ParamLimits

0xf9c4,	// (0x0003ddbf) main_pane_set_t

0xcbd2,	// (0x0003afcd) setting_code_pane

0xcbde,	// (0x0003afd9) setting_slider_graphic_pane

0xcbde,	// (0x0003afd9) setting_slider_pane

0xcbde,	// (0x0003afd9) setting_text_pane

0xcbde,	// (0x0003afd9) setting_volume_pane

0xa1c5,	// (0x000385c0) volume_set_pane

0x3f10,	// (0x0003230b) bg_set_opt_pane_cp

0xa1cd,	// (0x000385c8) setting_slider_pane_t1

0xa1e6,	// (0x000385e1) setting_slider_pane_t2

0xa200,	// (0x000385fb) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0003d99d) setting_slider_pane_t

0xa218,	// (0x00038613) slider_set_pane

0x3eb4,	// (0x000322af) bg_set_opt_pane_cp2

0x3f1e,	// (0x00032319) setting_slider_graphic_pane_g1

0xa22e,	// (0x00038629) setting_slider_graphic_pane_t1

0xa23e,	// (0x00038639) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0003d9a4) setting_slider_graphic_pane_t

0xa24e,	// (0x00038649) slider_set_pane_cp

0x3eb4,	// (0x000322af) input_focus_pane_cp1

0x6c79,	// (0x00035074) list_set_text_pane

0x3eaa,	// (0x000322a5) setting_text_pane_g1

0x3eb4,	// (0x000322af) input_focus_pane_cp2

0x3eaa,	// (0x000322a5) setting_code_pane_g1

0x3f27,	// (0x00032322) setting_code_pane_t1

0x8f19,	// (0x00037314) set_text_pane_t1_ParamLimits

0x8f19,	// (0x00037314) set_text_pane_t1

0x4bc9,	// (0x00032fc4) set_opt_bg_pane_g1

0x4bd1,	// (0x00032fcc) set_opt_bg_pane_g2

0x6c53,	// (0x0003504e) set_opt_bg_pane_g3

0x4be1,	// (0x00032fdc) set_opt_bg_pane_g4

0x4be9,	// (0x00032fe4) set_opt_bg_pane_g5

0x4bf1,	// (0x00032fec) set_opt_bg_pane_g6

0x6c5d,	// (0x00035058) set_opt_bg_pane_g7

0x6c65,	// (0x00035060) set_opt_bg_pane_g8

0x6c6f,	// (0x0003506a) set_opt_bg_pane_g9

0x0008,

0xf9b1,	// (0x0003ddac) set_opt_bg_pane_g

0x6c46,	// (0x00035041) slider_set_pane_g1

0xb4bc,	// (0x000398b7) slider_set_pane_g2

0x0006,

0xf9a2,	// (0x0003dd9d) slider_set_pane_g

0xb458,	// (0x00039853) volume_set_pane_g1

0xb460,	// (0x0003985b) volume_set_pane_g2

0xb468,	// (0x00039863) volume_set_pane_g3

0xb470,	// (0x0003986b) volume_set_pane_g4

0xb478,	// (0x00039873) volume_set_pane_g5

0xb480,	// (0x0003987b) volume_set_pane_g6

0xb488,	// (0x00039883) volume_set_pane_g7

0xb490,	// (0x0003988b) volume_set_pane_g8

0xb498,	// (0x00039893) volume_set_pane_g9

0xb4a0,	// (0x0003989b) volume_set_pane_g10

0x0009,

0xf97a,	// (0x0003dd75) volume_set_pane_g

0xa256,	// (0x00038651) indicator_pane_ParamLimits

0xa256,	// (0x00038651) indicator_pane

0xa262,	// (0x0003865d) main_idle_pane_g2_ParamLimits

0xa262,	// (0x0003865d) main_idle_pane_g2

0xa28a,	// (0x00038685) main_pane_idle_g1_ParamLimits

0xa28a,	// (0x00038685) main_pane_idle_g1

0x4586,	// (0x00032981) popup_clock_digital_analogue_window_ParamLimits

0x4586,	// (0x00032981) popup_clock_digital_analogue_window

0xa297,	// (0x00038692) soft_indicator_pane_ParamLimits

0xa297,	// (0x00038692) soft_indicator_pane

0xa2a3,	// (0x0003869e) wallpaper_pane_ParamLimits

0xa2a3,	// (0x0003869e) wallpaper_pane

0x3eaa,	// (0x000322a5) wallpaper_pane_g1

0xa2af,	// (0x000386aa) indicator_pane_g1_ParamLimits

0xa2af,	// (0x000386aa) indicator_pane_g1

0x6dbb,	// (0x000351b6) navi_navi_icon_text_pane_srt_g1

0x45b4,	// (0x000329af) soft_indicator_pane_t1

0x45ce,	// (0x000329c9) aid_ps_area_pane

0xa2bb,	// (0x000386b6) aid_ps_clock_pane

0x45df,	// (0x000329da) aid_ps_indicator_pane

0x45eb,	// (0x000329e6) indicator_ps_pane_ParamLimits

0x45eb,	// (0x000329e6) indicator_ps_pane

0x45fa,	// (0x000329f5) power_save_pane_g1_ParamLimits

0x45fa,	// (0x000329f5) power_save_pane_g1

0x4606,	// (0x00032a01) power_save_pane_g2_ParamLimits

0x4606,	// (0x00032a01) power_save_pane_g2

0x9d1a,	// (0x00038115) aid_navinavi_width_pane

0x45ce,	// (0x000329c9) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0003d9a9) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0003d9a9) power_save_pane_g

0x4614,	// (0x00032a0f) power_save_pane_t1_ParamLimits

0x4614,	// (0x00032a0f) power_save_pane_t1

0xa2bb,	// (0x000386b6) aid_ps_clock_pane_ParamLimits

0x45df,	// (0x000329da) aid_ps_indicator_pane_ParamLimits

0x4626,	// (0x00032a21) power_save_pane_t4_ParamLimits

0x4626,	// (0x00032a21) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0003d9ae) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0003d9ae) power_save_pane_t

0x4650,	// (0x00032a4b) power_save_t3_ParamLimits

0x4650,	// (0x00032a4b) power_save_t3

0x463b,	// (0x00032a36) power_save_t2_ParamLimits

0x463b,	// (0x00032a36) power_save_t2

0x4665,	// (0x00032a60) indicator_ps_pane_g1

0xa2c9,	// (0x000386c4) ai_gene_pane_ParamLimits

0xa2c9,	// (0x000386c4) ai_gene_pane

0xa2d5,	// (0x000386d0) ai_links_pane_ParamLimits

0xa2d5,	// (0x000386d0) ai_links_pane

0xa2e1,	// (0x000386dc) indicator_pane_cp1_ParamLimits

0xa2e1,	// (0x000386dc) indicator_pane_cp1

0xa2ed,	// (0x000386e8) main_pane_idle_g1_cp_ParamLimits

0xa2ed,	// (0x000386e8) main_pane_idle_g1_cp

0x466e,	// (0x00032a69) popup_ai_links_title_window

0xa2f9,	// (0x000386f4) soft_indicator_pane_cp1_ParamLimits

0xa2f9,	// (0x000386f4) soft_indicator_pane_cp1

0x6a9a,	// (0x00034e95) ai_links_pane_g1

0x6aa3,	// (0x00034e9e) grid_ai_links_pane

0xca27,	// (0x0003ae22) ai_gene_pane_1

0x6a88,	// (0x00034e83) ai_gene_pane_2

0x6a91,	// (0x00034e8c) list_highlight_pane_cp4

0xca0b,	// (0x0003ae06) cell_ai_link_pane_ParamLimits

0xca0b,	// (0x0003ae06) cell_ai_link_pane

0x6a80,	// (0x00034e7b) cell_ai_link_pane_g1

0x4828,	// (0x00032c23) cell_ai_link_pane_g2

0x0001,

0xf955,	// (0x0003dd50) cell_ai_link_pane_g

0x3eb4,	// (0x000322af) grid_highlight_cp2

0x3eb4,	// (0x000322af) bg_popup_sub_pane_cp1

0x4685,	// (0x00032a80) popup_ai_links_title_window_t1

0x69ce,	// (0x00034dc9) ai_gene_pane_1_g1_ParamLimits

0x69ce,	// (0x00034dc9) ai_gene_pane_1_g1

0x69da,	// (0x00034dd5) ai_gene_pane_1_g2_ParamLimits

0x69da,	// (0x00034dd5) ai_gene_pane_1_g2

0x0001,

0xf94b,	// (0x0003dd46) ai_gene_pane_1_g_ParamLimits

0xf94b,	// (0x0003dd46) ai_gene_pane_1_g

0x69e7,	// (0x00034de2) ai_gene_pane_1_t1_ParamLimits

0x69e7,	// (0x00034de2) ai_gene_pane_1_t1

0x6a1b,	// (0x00034e16) grid_ai_soft_ind_pane

0x69b9,	// (0x00034db4) ai_gene_pane_2_t1_ParamLimits

0x69b9,	// (0x00034db4) ai_gene_pane_2_t1

0xa305,	// (0x00038700) main_pane_empty_t1_ParamLimits

0xa305,	// (0x00038700) main_pane_empty_t1

0xa31d,	// (0x00038718) main_pane_empty_t2_ParamLimits

0xa31d,	// (0x00038718) main_pane_empty_t2

0xa332,	// (0x0003872d) main_pane_empty_t3_ParamLimits

0xa332,	// (0x0003872d) main_pane_empty_t3

0xa344,	// (0x0003873f) main_pane_empty_t4_ParamLimits

0xa344,	// (0x0003873f) main_pane_empty_t4

0xa356,	// (0x00038751) main_pane_empty_t5_ParamLimits

0xa356,	// (0x00038751) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0003d9b3) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0003d9b3) main_pane_empty_t

0x4c1a,	// (0x00033015) bg_popup_window_pane_ParamLimits

0x4c1a,	// (0x00033015) bg_popup_window_pane

0x6729,	// (0x00034b24) find_popup_pane_cp2_ParamLimits

0x6729,	// (0x00034b24) find_popup_pane_cp2

0x6735,	// (0x00034b30) heading_pane_ParamLimits

0x6735,	// (0x00034b30) heading_pane

0x3eb4,	// (0x000322af) bg_popup_sub_pane

0xc97b,	// (0x0003ad76) bg_popup_window_pane_g1_ParamLimits

0xc97b,	// (0x0003ad76) bg_popup_window_pane_g1

0xc987,	// (0x0003ad82) bg_popup_window_pane_g2_ParamLimits

0xc987,	// (0x0003ad82) bg_popup_window_pane_g2

0xc993,	// (0x0003ad8e) bg_popup_window_pane_g3_ParamLimits

0xc993,	// (0x0003ad8e) bg_popup_window_pane_g3

0xc99f,	// (0x0003ad9a) bg_popup_window_pane_g4_ParamLimits

0xc99f,	// (0x0003ad9a) bg_popup_window_pane_g4

0xc9ab,	// (0x0003ada6) bg_popup_window_pane_g5_ParamLimits

0xc9ab,	// (0x0003ada6) bg_popup_window_pane_g5

0xc9b7,	// (0x0003adb2) bg_popup_window_pane_g6_ParamLimits

0xc9b7,	// (0x0003adb2) bg_popup_window_pane_g6

0xc9c3,	// (0x0003adbe) bg_popup_window_pane_g7_ParamLimits

0xc9c3,	// (0x0003adbe) bg_popup_window_pane_g7

0xc9cf,	// (0x0003adca) bg_popup_window_pane_g8_ParamLimits

0xc9cf,	// (0x0003adca) bg_popup_window_pane_g8

0xc9db,	// (0x0003add6) bg_popup_window_pane_g9_ParamLimits

0xc9db,	// (0x0003add6) bg_popup_window_pane_g9

0x670f,	// (0x00034b0a) bg_popup_window_pane_g10_ParamLimits

0x670f,	// (0x00034b0a) bg_popup_window_pane_g10

0x0009,

0xf913,	// (0x0003dd0e) bg_popup_window_pane_g_ParamLimits

0xf913,	// (0x0003dd0e) bg_popup_window_pane_g

0x66c6,	// (0x00034ac1) bg_popup_heading_pane_ParamLimits

0x66c6,	// (0x00034ac1) bg_popup_heading_pane

0xb5e8,	// (0x000399e3) tabs_4_passive_pane_cp_srt_ParamLimits

0xb5e8,	// (0x000399e3) tabs_4_passive_pane_cp_srt

0xb5fa,	// (0x000399f5) tabs_4_passive_pane_srt_ParamLimits

0x66da,	// (0x00034ad5) heading_pane_g2

0xb5fa,	// (0x000399f5) tabs_4_passive_pane_srt

0x4cba,	// (0x000330b5) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4cba,	// (0x000330b5) bg_passive_tab_pane_cp3_srt

0x66e2,	// (0x00034add) heading_pane_t1_ParamLimits

0x66e2,	// (0x00034add) heading_pane_t1

0x66f9,	// (0x00034af4) heading_pane_t2_ParamLimits

0x66f9,	// (0x00034af4) heading_pane_t2

0x0001,

0xf90e,	// (0x0003dd09) heading_pane_t_ParamLimits

0xf90e,	// (0x0003dd09) heading_pane_t

0x6211,	// (0x0003460c) bg_popup_heading_pane_g1

0x62a2,	// (0x0003469d) bg_popup_heading_pane_g2

0x62ac,	// (0x000346a7) bg_popup_heading_pane_g3

0x62b6,	// (0x000346b1) bg_popup_heading_pane_g4

0x62c0,	// (0x000346bb) bg_popup_heading_pane_g5

0x62ca,	// (0x000346c5) bg_popup_heading_pane_g6

0x62d2,	// (0x000346cd) bg_popup_heading_pane_g7

0x62da,	// (0x000346d5) bg_popup_heading_pane_g8

0x62e4,	// (0x000346df) bg_popup_heading_pane_g9

0x0008,

0xf8ca,	// (0x0003dcc5) bg_popup_heading_pane_g

0x5b05,	// (0x00033f00) bg_popup_sub_pane_g1

0x5b15,	// (0x00033f10) bg_popup_sub_pane_g2

0x5b0d,	// (0x00033f08) bg_popup_sub_pane_g3

0x5b25,	// (0x00033f20) bg_popup_sub_pane_g4

0x5b1d,	// (0x00033f18) bg_popup_sub_pane_g5

0x5b2d,	// (0x00033f28) bg_popup_sub_pane_g6

0x5b35,	// (0x00033f30) bg_popup_sub_pane_g7

0x5b45,	// (0x00033f40) bg_popup_sub_pane_g8

0x5b3d,	// (0x00033f38) bg_popup_sub_pane_g9

0x0008,

0xf8a4,	// (0x0003dc9f) bg_popup_sub_pane_g

0x3f02,	// (0x000322fd) bg_popup_window_pane_cp5_ParamLimits

0x3f02,	// (0x000322fd) bg_popup_window_pane_cp5

0x46a2,	// (0x00032a9d) popup_note_window_g1_ParamLimits

0x46a2,	// (0x00032a9d) popup_note_window_g1

0x46ae,	// (0x00032aa9) popup_note_window_t1_ParamLimits

0x46ae,	// (0x00032aa9) popup_note_window_t1

0x46c4,	// (0x00032abf) popup_note_window_t2_ParamLimits

0x46c4,	// (0x00032abf) popup_note_window_t2

0x46da,	// (0x00032ad5) popup_note_window_t3_ParamLimits

0x46da,	// (0x00032ad5) popup_note_window_t3

0x46f0,	// (0x00032aeb) popup_note_window_t4_ParamLimits

0x46f0,	// (0x00032aeb) popup_note_window_t4

0x4718,	// (0x00032b13) popup_note_window_t5_ParamLimits

0x4718,	// (0x00032b13) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0003d9be) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0003d9be) popup_note_window_t

0x473c,	// (0x00032b37) bg_popup_window_pane_cp6_ParamLimits

0x473c,	// (0x00032b37) bg_popup_window_pane_cp6

0x618d,	// (0x00034588) popup_note_image_window_g1_ParamLimits

0x618d,	// (0x00034588) popup_note_image_window_g1

0x6199,	// (0x00034594) popup_note_image_window_g2_ParamLimits

0x6199,	// (0x00034594) popup_note_image_window_g2

0x0001,

0xf898,	// (0x0003dc93) popup_note_image_window_g_ParamLimits

0xf898,	// (0x0003dc93) popup_note_image_window_g

0x61b2,	// (0x000345ad) popup_note_image_window_t1_ParamLimits

0x61b2,	// (0x000345ad) popup_note_image_window_t1

0x61cb,	// (0x000345c6) popup_note_image_window_t2_ParamLimits

0x61cb,	// (0x000345c6) popup_note_image_window_t2

0x61e4,	// (0x000345df) popup_note_image_window_t3_ParamLimits

0x61e4,	// (0x000345df) popup_note_image_window_t3

0x0002,

0xf89d,	// (0x0003dc98) popup_note_image_window_t_ParamLimits

0xf89d,	// (0x0003dc98) popup_note_image_window_t

0x606a,	// (0x00034465) bg_popup_window_pane_cp7_ParamLimits

0x606a,	// (0x00034465) bg_popup_window_pane_cp7

0x609a,	// (0x00034495) popup_note_wait_window_g1_ParamLimits

0x609a,	// (0x00034495) popup_note_wait_window_g1

0x60a6,	// (0x000344a1) popup_note_wait_window_g2_ParamLimits

0x60a6,	// (0x000344a1) popup_note_wait_window_g2

0x0002,

0xf886,	// (0x0003dc81) popup_note_wait_window_g_ParamLimits

0xf886,	// (0x0003dc81) popup_note_wait_window_g

0x60be,	// (0x000344b9) popup_note_wait_window_t1_ParamLimits

0x60be,	// (0x000344b9) popup_note_wait_window_t1

0x60e5,	// (0x000344e0) popup_note_wait_window_t2_ParamLimits

0x60e5,	// (0x000344e0) popup_note_wait_window_t2

0x6102,	// (0x000344fd) popup_note_wait_window_t3_ParamLimits

0x6102,	// (0x000344fd) popup_note_wait_window_t3

0x6115,	// (0x00034510) popup_note_wait_window_t4_ParamLimits

0x6115,	// (0x00034510) popup_note_wait_window_t4

0x0004,

0xf88d,	// (0x0003dc88) popup_note_wait_window_t_ParamLimits

0xf88d,	// (0x0003dc88) popup_note_wait_window_t

0x613a,	// (0x00034535) wait_bar_pane_ParamLimits

0x613a,	// (0x00034535) wait_bar_pane

0x3eb4,	// (0x000322af) wait_anim_pane

0x3eb4,	// (0x000322af) wait_border_pane

0x3eaa,	// (0x000322a5) wait_anim_pane_g1

0x3eaa,	// (0x000322a5) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0003db47) wait_anim_pane_g

0x600e,	// (0x00034409) wait_border_pane_g1

0x6019,	// (0x00034414) wait_border_pane_g2

0x6022,	// (0x0003441d) wait_border_pane_g3

0x0002,

0xf87f,	// (0x0003dc7a) wait_border_pane_g

0x5f6b,	// (0x00034366) bg_popup_window_pane_cp16_ParamLimits

0x5f6b,	// (0x00034366) bg_popup_window_pane_cp16

0x5f79,	// (0x00034374) indicator_popup_pane_cp4_ParamLimits

0x5f79,	// (0x00034374) indicator_popup_pane_cp4

0x5f8d,	// (0x00034388) popup_query_data_window_t1_ParamLimits

0x5f8d,	// (0x00034388) popup_query_data_window_t1

0x5f9f,	// (0x0003439a) popup_query_data_window_t2_ParamLimits

0x5f9f,	// (0x0003439a) popup_query_data_window_t2

0x5fb8,	// (0x000343b3) popup_query_data_window_t3_ParamLimits

0x5fb8,	// (0x000343b3) popup_query_data_window_t3

0x0002,

0xf878,	// (0x0003dc73) popup_query_data_window_t_ParamLimits

0xf878,	// (0x0003dc73) popup_query_data_window_t

0x5fd2,	// (0x000343cd) query_popup_data_pane_ParamLimits

0x5fd2,	// (0x000343cd) query_popup_data_pane

0x5fe6,	// (0x000343e1) query_popup_data_pane_cp1_ParamLimits

0x5fe6,	// (0x000343e1) query_popup_data_pane_cp1

0x473c,	// (0x00032b37) bg_popup_window_pane_cp10_ParamLimits

0x473c,	// (0x00032b37) bg_popup_window_pane_cp10

0x5ece,	// (0x000342c9) indicator_popup_pane_ParamLimits

0x5ece,	// (0x000342c9) indicator_popup_pane

0x4793,	// (0x00032b8e) popup_query_code_window_t1_ParamLimits

0x4793,	// (0x00032b8e) popup_query_code_window_t1

0x5ee6,	// (0x000342e1) popup_query_code_window_t2_ParamLimits

0x5ee6,	// (0x000342e1) popup_query_code_window_t2

0x5f24,	// (0x0003431f) popup_query_code_window_t3_ParamLimits

0x5f24,	// (0x0003431f) popup_query_code_window_t3

0x0002,

0xf871,	// (0x0003dc6c) popup_query_code_window_t_ParamLimits

0xf871,	// (0x0003dc6c) popup_query_code_window_t

0x5f53,	// (0x0003434e) query_popup_pane_ParamLimits

0x5f53,	// (0x0003434e) query_popup_pane

0x473c,	// (0x00032b37) bg_popup_window_pane_cp15_ParamLimits

0x473c,	// (0x00032b37) bg_popup_window_pane_cp15

0x475a,	// (0x00032b55) indicator_popup_pane_cp1_ParamLimits

0x475a,	// (0x00032b55) indicator_popup_pane_cp1

0x476d,	// (0x00032b68) indicator_popup_pane_cp2_ParamLimits

0x476d,	// (0x00032b68) indicator_popup_pane_cp2

0x4780,	// (0x00032b7b) popup_query_data_code_window_g1_ParamLimits

0x4780,	// (0x00032b7b) popup_query_data_code_window_g1

0x4793,	// (0x00032b8e) popup_query_data_code_window_t1_ParamLimits

0x4793,	// (0x00032b8e) popup_query_data_code_window_t1

0x47a5,	// (0x00032ba0) popup_query_data_code_window_t2_ParamLimits

0x47a5,	// (0x00032ba0) popup_query_data_code_window_t2

0x47b7,	// (0x00032bb2) popup_query_data_code_window_t3_ParamLimits

0x47b7,	// (0x00032bb2) popup_query_data_code_window_t3

0x47cd,	// (0x00032bc8) popup_query_data_code_window_t4_ParamLimits

0x47cd,	// (0x00032bc8) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0003d9c9) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0003d9c9) popup_query_data_code_window_t

0xb211,	// (0x0003960c) list_single_midp_graphic_pane_g3

0x47e5,	// (0x00032be0) query_popup_data_pane_cp2_ParamLimits

0x47f8,	// (0x00032bf3) query_popup_pane_cp2_ParamLimits

0x47f8,	// (0x00032bf3) query_popup_pane_cp2

0x3eb4,	// (0x000322af) bg_popup_window_pane_cp11

0x5ea2,	// (0x0003429d) heading_pane_cp5

0x4886,	// (0x00032c81) listscroll_popup_info_pane

0x3eb4,	// (0x000322af) input_focus_pane_cp3

0x480b,	// (0x00032c06) query_popup_pane_t1

0x4819,	// (0x00032c14) list_popup_info_pane_ParamLimits

0x4819,	// (0x00032c14) list_popup_info_pane

0x4828,	// (0x00032c23) listscroll_popup_info_pane_g1

0x4830,	// (0x00032c2b) scroll_pane_cp7

0x483a,	// (0x00032c35) popup_info_list_pane_t1_ParamLimits

0x483a,	// (0x00032c35) popup_info_list_pane_t1

0x4854,	// (0x00032c4f) popup_info_list_pane_t2_ParamLimits

0x4854,	// (0x00032c4f) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0003d9d2) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0003d9d2) popup_info_list_pane_t

0x3eb4,	// (0x000322af) bg_popup_window_pane_cp12

0x6dd5,	// (0x000351d0) find_popup_pane

0x3f10,	// (0x0003230b) bg_popup_window_pane_cp3

0x486e,	// (0x00032c69) heading_pane_cp3

0x487a,	// (0x00032c75) listscroll_popup_graphic_pane

0x3eb4,	// (0x000322af) bg_popup_window_pane_cp4

0xa3ba,	// (0x000387b5) heading_pane_cp4

0x4886,	// (0x00032c81) listscroll_popup_colour_pane

0xa3c4,	// (0x000387bf) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa3c4,	// (0x000387bf) cell_large_graphic_colour_none_popup_pane

0xa3d8,	// (0x000387d3) grid_large_graphic_colour_popup_pane_ParamLimits

0xa3d8,	// (0x000387d3) grid_large_graphic_colour_popup_pane

0xa404,	// (0x000387ff) listscroll_popup_colour_pane_g1_ParamLimits

0xa404,	// (0x000387ff) listscroll_popup_colour_pane_g1

0xa41b,	// (0x00038816) listscroll_popup_colour_pane_g2_ParamLimits

0xa41b,	// (0x00038816) listscroll_popup_colour_pane_g2

0xa432,	// (0x0003882d) listscroll_popup_colour_pane_g3_ParamLimits

0xa432,	// (0x0003882d) listscroll_popup_colour_pane_g3

0xa442,	// (0x0003883d) listscroll_popup_colour_pane_g4_ParamLimits

0xa442,	// (0x0003883d) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0003d9d7) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0003d9d7) listscroll_popup_colour_pane_g

0x488e,	// (0x00032c89) scroll_pane_cp6_ParamLimits

0x488e,	// (0x00032c89) scroll_pane_cp6

0xa456,	// (0x00038851) cell_large_graphic_colour_popup_pane_ParamLimits

0xa456,	// (0x00038851) cell_large_graphic_colour_popup_pane

0x48a0,	// (0x00032c9b) cell_large_graphic_colour_none_popup_pane_t1

0x3eb4,	// (0x000322af) grid_highlight_pane_cp5

0x48af,	// (0x00032caa) cell_large_graphic_colour_popup_pane_g1

0x48b7,	// (0x00032cb2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0003d9e0) cell_large_graphic_colour_popup_pane_g

0x48bf,	// (0x00032cba) cell_large_graphic_colour_popup_pane_g2_copy1

0x48c8,	// (0x00032cc3) grid_highlight_pane_cp4

0x48d0,	// (0x00032ccb) bg_popup_window_pane_cp8_ParamLimits

0x48d0,	// (0x00032ccb) bg_popup_window_pane_cp8

0x48eb,	// (0x00032ce6) popup_snote_single_text_window_g1_ParamLimits

0x48eb,	// (0x00032ce6) popup_snote_single_text_window_g1

0x48fd,	// (0x00032cf8) popup_snote_single_text_window_t1_ParamLimits

0x48fd,	// (0x00032cf8) popup_snote_single_text_window_t1

0x4910,	// (0x00032d0b) popup_snote_single_text_window_t2_ParamLimits

0x4910,	// (0x00032d0b) popup_snote_single_text_window_t2

0x4923,	// (0x00032d1e) popup_snote_single_text_window_t3_ParamLimits

0x4923,	// (0x00032d1e) popup_snote_single_text_window_t3

0x495c,	// (0x00032d57) popup_snote_single_text_window_t4_ParamLimits

0x495c,	// (0x00032d57) popup_snote_single_text_window_t4

0x4990,	// (0x00032d8b) popup_snote_single_text_window_t5_ParamLimits

0x4990,	// (0x00032d8b) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0003d9e5) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0003d9e5) popup_snote_single_text_window_t

0x49bf,	// (0x00032dba) bg_popup_window_pane_cp9_ParamLimits

0x49bf,	// (0x00032dba) bg_popup_window_pane_cp9

0x48eb,	// (0x00032ce6) popup_snote_single_graphic_window_g1_ParamLimits

0x48eb,	// (0x00032ce6) popup_snote_single_graphic_window_g1

0x49cd,	// (0x00032dc8) popup_snote_single_graphic_window_g2_ParamLimits

0x49cd,	// (0x00032dc8) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0003d9f0) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0003d9f0) popup_snote_single_graphic_window_g

0x49d9,	// (0x00032dd4) popup_snote_single_graphic_window_t1_ParamLimits

0x49d9,	// (0x00032dd4) popup_snote_single_graphic_window_t1

0x49ec,	// (0x00032de7) popup_snote_single_graphic_window_t2_ParamLimits

0x49ec,	// (0x00032de7) popup_snote_single_graphic_window_t2

0x49ff,	// (0x00032dfa) popup_snote_single_graphic_window_t3_ParamLimits

0x49ff,	// (0x00032dfa) popup_snote_single_graphic_window_t3

0x4a38,	// (0x00032e33) popup_snote_single_graphic_window_t4_ParamLimits

0x4a38,	// (0x00032e33) popup_snote_single_graphic_window_t4

0x4a6c,	// (0x00032e67) popup_snote_single_graphic_window_t5_ParamLimits

0x4a6c,	// (0x00032e67) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0003d9f5) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0003d9f5) popup_snote_single_graphic_window_t

0x6d5d,	// (0x00035158) grid_graphic_popup_pane_ParamLimits

0x6d5d,	// (0x00035158) grid_graphic_popup_pane

0x6d85,	// (0x00035180) listscroll_popup_graphic_pane_g1_ParamLimits

0x6d85,	// (0x00035180) listscroll_popup_graphic_pane_g1

0xccc9,	// (0x0003b0c4) listscroll_popup_graphic_pane_g2_ParamLimits

0xccc9,	// (0x0003b0c4) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ee,	// (0x0003dde9) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ee,	// (0x0003dde9) listscroll_popup_graphic_pane_g

0x6853,	// (0x00034c4e) scroll_pane_cp5

0xcc88,	// (0x0003b083) cell_graphic_popup_pane_ParamLimits

0xcc88,	// (0x0003b083) cell_graphic_popup_pane

0x6d28,	// (0x00035123) cell_graphic_popup_pane_g1

0x6d30,	// (0x0003512b) cell_graphic_popup_pane_g2

0x48bf,	// (0x00032cba) cell_graphic_popup_pane_g3

0x0002,

0xf9e7,	// (0x0003dde2) cell_graphic_popup_pane_g

0x6d39,	// (0x00035134) cell_graphic_popup_pane_t2

0x48c8,	// (0x00032cc3) grid_highlight_pane_cp3

0x4aad,	// (0x00032ea8) list_gen_pane_ParamLimits

0x4aad,	// (0x00032ea8) list_gen_pane

0x4ad5,	// (0x00032ed0) scroll_pane

0xcc3b,	// (0x0003b036) bg_list_pane_g1_ParamLimits

0xcc3b,	// (0x0003b036) bg_list_pane_g1

0x6cd7,	// (0x000350d2) bg_list_pane_g2_ParamLimits

0x6cd7,	// (0x000350d2) bg_list_pane_g2

0x6cea,	// (0x000350e5) bg_list_pane_g3_ParamLimits

0x6cea,	// (0x000350e5) bg_list_pane_g3

0x6cfc,	// (0x000350f7) bg_list_pane_g4_ParamLimits

0x6cfc,	// (0x000350f7) bg_list_pane_g4

0xcc56,	// (0x0003b051) bg_list_pane_g5_ParamLimits

0xcc56,	// (0x0003b051) bg_list_pane_g5

0x0004,

0xf9dc,	// (0x0003ddd7) bg_list_pane_g_ParamLimits

0xf9dc,	// (0x0003ddd7) bg_list_pane_g

0x9837,	// (0x00037c32) list_double2_graphic_large_graphic_pane_ParamLimits

0x9837,	// (0x00037c32) list_double2_graphic_large_graphic_pane

0x9837,	// (0x00037c32) list_double2_graphic_pane_ParamLimits

0x9837,	// (0x00037c32) list_double2_graphic_pane

0x9837,	// (0x00037c32) list_double2_large_graphic_pane_ParamLimits

0x9837,	// (0x00037c32) list_double2_large_graphic_pane

0xcc20,	// (0x0003b01b) list_double2_pane_ParamLimits

0xcc20,	// (0x0003b01b) list_double2_pane

0x9837,	// (0x00037c32) list_double_graphic_heading_pane_ParamLimits

0x9837,	// (0x00037c32) list_double_graphic_heading_pane

0x9837,	// (0x00037c32) list_double_graphic_pane_ParamLimits

0x9837,	// (0x00037c32) list_double_graphic_pane

0x9837,	// (0x00037c32) list_double_heading_pane_ParamLimits

0x9837,	// (0x00037c32) list_double_heading_pane

0x9837,	// (0x00037c32) list_double_large_graphic_pane_ParamLimits

0x9837,	// (0x00037c32) list_double_large_graphic_pane

0x9837,	// (0x00037c32) list_double_number_pane_ParamLimits

0x9837,	// (0x00037c32) list_double_number_pane

0x9837,	// (0x00037c32) list_double_pane_ParamLimits

0x9837,	// (0x00037c32) list_double_pane

0x9837,	// (0x00037c32) list_double_time_pane_ParamLimits

0x9837,	// (0x00037c32) list_double_time_pane

0x9837,	// (0x00037c32) list_setting_number_pane_ParamLimits

0x9837,	// (0x00037c32) list_setting_number_pane

0x9837,	// (0x00037c32) list_setting_pane_ParamLimits

0x9837,	// (0x00037c32) list_setting_pane

0xb54f,	// (0x0003994a) list_single_2graphic_pane_ParamLimits

0xb54f,	// (0x0003994a) list_single_2graphic_pane

0xb54f,	// (0x0003994a) list_single_graphic_heading_pane_ParamLimits

0xb54f,	// (0x0003994a) list_single_graphic_heading_pane

0xb54f,	// (0x0003994a) list_single_graphic_pane_ParamLimits

0xb54f,	// (0x0003994a) list_single_graphic_pane

0xb54f,	// (0x0003994a) list_single_heading_pane_ParamLimits

0xb54f,	// (0x0003994a) list_single_heading_pane

0xb5a5,	// (0x000399a0) list_single_large_graphic_pane_ParamLimits

0xb5a5,	// (0x000399a0) list_single_large_graphic_pane

0xb54f,	// (0x0003994a) list_single_number_heading_pane_ParamLimits

0xb54f,	// (0x0003994a) list_single_number_heading_pane

0xb54f,	// (0x0003994a) list_single_number_pane_ParamLimits

0xb54f,	// (0x0003994a) list_single_number_pane

0xb54f,	// (0x0003994a) list_single_pane_ParamLimits

0xb54f,	// (0x0003994a) list_single_pane

0x3eb4,	// (0x000322af) list_highlight_pane_cp1

0xa47f,	// (0x0003887a) list_single_pane_g1_ParamLimits

0xa47f,	// (0x0003887a) list_single_pane_g1

0xa48b,	// (0x00038886) list_single_pane_g2_ParamLimits

0xa48b,	// (0x00038886) list_single_pane_g2

0x0001,

0xf616,	// (0x0003da11) list_single_pane_g_ParamLimits

0xf616,	// (0x0003da11) list_single_pane_g

0x9821,	// (0x00037c1c) list_single_pane_t1_ParamLimits

0x9821,	// (0x00037c1c) list_single_pane_t1

0xa47f,	// (0x0003887a) list_single_number_pane_g1_ParamLimits

0xa47f,	// (0x0003887a) list_single_number_pane_g1

0xa48b,	// (0x00038886) list_single_number_pane_g2_ParamLimits

0xa48b,	// (0x00038886) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0003da11) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0003da11) list_single_number_pane_g

0x97c9,	// (0x00037bc4) list_single_number_pane_t1_ParamLimits

0x97c9,	// (0x00037bc4) list_single_number_pane_t1

0x97df,	// (0x00037bda) list_single_number_pane_t2_ParamLimits

0x97df,	// (0x00037bda) list_single_number_pane_t2

0x0001,

0xf99d,	// (0x0003dd98) list_single_number_pane_t_ParamLimits

0xf99d,	// (0x0003dd98) list_single_number_pane_t

0x8f32,	// (0x0003732d) list_single_graphic_pane_g1_ParamLimits

0x8f32,	// (0x0003732d) list_single_graphic_pane_g1

0xa47f,	// (0x0003887a) list_single_graphic_pane_g2_ParamLimits

0xa47f,	// (0x0003887a) list_single_graphic_pane_g2

0xa48b,	// (0x00038886) list_single_graphic_pane_g3_ParamLimits

0xa48b,	// (0x00038886) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0003da00) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0003da00) list_single_graphic_pane_g

0x8f3e,	// (0x00037339) list_single_graphic_pane_t1_ParamLimits

0x8f3e,	// (0x00037339) list_single_graphic_pane_t1

0x8f54,	// (0x0003734f) list_single_heading_pane_g1_ParamLimits

0x8f54,	// (0x0003734f) list_single_heading_pane_g1

0xa48b,	// (0x00038886) list_single_heading_pane_g2_ParamLimits

0xa48b,	// (0x00038886) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0003da07) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0003da07) list_single_heading_pane_g

0x8f67,	// (0x00037362) list_single_heading_pane_t1_ParamLimits

0x8f67,	// (0x00037362) list_single_heading_pane_t1

0xa497,	// (0x00038892) list_single_heading_pane_t2_ParamLimits

0xa497,	// (0x00038892) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0003da0c) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0003da0c) list_single_heading_pane_t

0xa47f,	// (0x0003887a) list_single_number_heading_pane_g1_ParamLimits

0xa47f,	// (0x0003887a) list_single_number_heading_pane_g1

0xa48b,	// (0x00038886) list_single_number_heading_pane_g2_ParamLimits

0xa48b,	// (0x00038886) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0003da11) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0003da11) list_single_number_heading_pane_g

0x8f7d,	// (0x00037378) list_single_number_heading_pane_t1_ParamLimits

0x8f7d,	// (0x00037378) list_single_number_heading_pane_t1

0x8f93,	// (0x0003738e) list_single_number_heading_pane_t2_ParamLimits

0x8f93,	// (0x0003738e) list_single_number_heading_pane_t2

0x8fa5,	// (0x000373a0) list_single_number_heading_pane_t3_ParamLimits

0x8fa5,	// (0x000373a0) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0003da16) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0003da16) list_single_number_heading_pane_t

0x8fb7,	// (0x000373b2) list_single_graphic_heading_pane_g1_ParamLimits

0x8fb7,	// (0x000373b2) list_single_graphic_heading_pane_g1

0xa4a9,	// (0x000388a4) list_single_graphic_heading_pane_g4_ParamLimits

0xa4a9,	// (0x000388a4) list_single_graphic_heading_pane_g4

0xa48b,	// (0x00038886) list_single_graphic_heading_pane_g5_ParamLimits

0xa48b,	// (0x00038886) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0003da1d) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003da1d) list_single_graphic_heading_pane_g

0x8f7d,	// (0x00037378) list_single_graphic_heading_pane_t1_ParamLimits

0x8f7d,	// (0x00037378) list_single_graphic_heading_pane_t1

0x8fcf,	// (0x000373ca) list_single_graphic_heading_pane_t2_ParamLimits

0x8fcf,	// (0x000373ca) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003da24) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003da24) list_single_graphic_heading_pane_t

0xa4ba,	// (0x000388b5) list_single_large_graphic_pane_g1_ParamLimits

0xa4ba,	// (0x000388b5) list_single_large_graphic_pane_g1

0xa4c6,	// (0x000388c1) list_single_large_graphic_pane_g2_ParamLimits

0xa4c6,	// (0x000388c1) list_single_large_graphic_pane_g2

0xa4d2,	// (0x000388cd) list_single_large_graphic_pane_g3_ParamLimits

0xa4d2,	// (0x000388cd) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0003da29) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0003da29) list_single_large_graphic_pane_g

0x6019,	// (0x00034414) wait_border_pane_g2_copy1

0xa4de,	// (0x000388d9) list_single_large_graphic_pane_g4_cp2

0x8fe5,	// (0x000373e0) list_single_large_graphic_pane_t1_ParamLimits

0x8fe5,	// (0x000373e0) list_single_large_graphic_pane_t1

0x545c,	// (0x00033857) list_double_pane_g1_ParamLimits

0x545c,	// (0x00033857) list_double_pane_g1

0x8ffb,	// (0x000373f6) list_double_pane_g2_ParamLimits

0x8ffb,	// (0x000373f6) list_double_pane_g2

0x0001,

0xf635,	// (0x0003da30) list_double_pane_g_ParamLimits

0xf635,	// (0x0003da30) list_double_pane_g

0x9007,	// (0x00037402) list_double_pane_t1_ParamLimits

0x9007,	// (0x00037402) list_double_pane_t1

0x901d,	// (0x00037418) list_double_pane_t2_ParamLimits

0x901d,	// (0x00037418) list_double_pane_t2

0x0001,

0xf63a,	// (0x0003da35) list_double_pane_t_ParamLimits

0xf63a,	// (0x0003da35) list_double_pane_t

0x902f,	// (0x0003742a) list_double2_pane_g1_ParamLimits

0x902f,	// (0x0003742a) list_double2_pane_g1

0x9040,	// (0x0003743b) list_double2_pane_g2_ParamLimits

0x9040,	// (0x0003743b) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0003da3a) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0003da3a) list_double2_pane_g

0x904c,	// (0x00037447) list_double2_pane_t1_ParamLimits

0x904c,	// (0x00037447) list_double2_pane_t1

0x9062,	// (0x0003745d) list_double2_pane_t2_ParamLimits

0x9062,	// (0x0003745d) list_double2_pane_t2

0x0001,

0xf644,	// (0x0003da3f) list_double2_pane_t_ParamLimits

0xf644,	// (0x0003da3f) list_double2_pane_t

0x545c,	// (0x00033857) list_double_number_pane_g1_ParamLimits

0x545c,	// (0x00033857) list_double_number_pane_g1

0x8ffb,	// (0x000373f6) list_double_number_pane_g2_ParamLimits

0x8ffb,	// (0x000373f6) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0003da30) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0003da30) list_double_number_pane_g

0x9074,	// (0x0003746f) list_double_number_pane_t1_ParamLimits

0x9074,	// (0x0003746f) list_double_number_pane_t1

0x9086,	// (0x00037481) list_double_number_pane_t2_ParamLimits

0x9086,	// (0x00037481) list_double_number_pane_t2

0x909c,	// (0x00037497) list_double_number_pane_t3_ParamLimits

0x909c,	// (0x00037497) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0003da44) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0003da44) list_double_number_pane_t

0x90ae,	// (0x000374a9) list_double_graphic_pane_g1_ParamLimits

0x90ae,	// (0x000374a9) list_double_graphic_pane_g1

0x6789,	// (0x00034b84) list_double_graphic_pane_g2_ParamLimits

0x6789,	// (0x00034b84) list_double_graphic_pane_g2

0x90ba,	// (0x000374b5) list_double_graphic_pane_g3_ParamLimits

0x90ba,	// (0x000374b5) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0003da4b) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0003da4b) list_double_graphic_pane_g

0x90d2,	// (0x000374cd) list_double_graphic_pane_t1_ParamLimits

0x90d2,	// (0x000374cd) list_double_graphic_pane_t1

0x90e8,	// (0x000374e3) list_double_graphic_pane_t2_ParamLimits

0x90e8,	// (0x000374e3) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0003da54) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0003da54) list_double_graphic_pane_t

0x90fa,	// (0x000374f5) list_double2_graphic_pane_g1_ParamLimits

0x90fa,	// (0x000374f5) list_double2_graphic_pane_g1

0x9106,	// (0x00037501) list_double2_graphic_pane_g2_ParamLimits

0x9106,	// (0x00037501) list_double2_graphic_pane_g2

0x9112,	// (0x0003750d) list_double2_graphic_pane_g3_ParamLimits

0x9112,	// (0x0003750d) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0003da59) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0003da59) list_double2_graphic_pane_g

0x911e,	// (0x00037519) list_double2_graphic_pane_t1_ParamLimits

0x911e,	// (0x00037519) list_double2_graphic_pane_t1

0x9134,	// (0x0003752f) list_double2_graphic_pane_t2_ParamLimits

0x9134,	// (0x0003752f) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0003da60) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0003da60) list_double2_graphic_pane_t

0x9146,	// (0x00037541) list_double_large_graphic_pane_g1_ParamLimits

0x9146,	// (0x00037541) list_double_large_graphic_pane_g1

0x916f,	// (0x0003756a) list_double_large_graphic_pane_g2_ParamLimits

0x916f,	// (0x0003756a) list_double_large_graphic_pane_g2

0x8ffb,	// (0x000373f6) list_double_large_graphic_pane_g3_ParamLimits

0x8ffb,	// (0x000373f6) list_double_large_graphic_pane_g3

0x9185,	// (0x00037580) list_double_large_graphic_pane_g4_ParamLimits

0x9185,	// (0x00037580) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0003da65) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0003da65) list_double_large_graphic_pane_g

0x9196,	// (0x00037591) list_double_large_graphic_pane_t1_ParamLimits

0x9196,	// (0x00037591) list_double_large_graphic_pane_t1

0x91af,	// (0x000375aa) list_double_large_graphic_pane_t2_ParamLimits

0x91af,	// (0x000375aa) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0003da70) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0003da70) list_double_large_graphic_pane_t

0x91c1,	// (0x000375bc) list_double2_large_graphic_pane_g1_ParamLimits

0x91c1,	// (0x000375bc) list_double2_large_graphic_pane_g1

0x91cd,	// (0x000375c8) list_double2_large_graphic_pane_g2_ParamLimits

0x91cd,	// (0x000375c8) list_double2_large_graphic_pane_g2

0x9112,	// (0x0003750d) list_double2_large_graphic_pane_g3_ParamLimits

0x9112,	// (0x0003750d) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0003da75) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0003da75) list_double2_large_graphic_pane_g

0x91de,	// (0x000375d9) list_double2_large_graphic_pane_t1_ParamLimits

0x91de,	// (0x000375d9) list_double2_large_graphic_pane_t1

0x91f4,	// (0x000375ef) list_double2_large_graphic_pane_t2_ParamLimits

0x91f4,	// (0x000375ef) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0003da7c) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0003da7c) list_double2_large_graphic_pane_t

0x9206,	// (0x00037601) list_double_heading_pane_g1_ParamLimits

0x9206,	// (0x00037601) list_double_heading_pane_g1

0x9217,	// (0x00037612) list_double_heading_pane_g2_ParamLimits

0x9217,	// (0x00037612) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0003da81) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0003da81) list_double_heading_pane_g

0x9223,	// (0x0003761e) list_double_heading_pane_t1_ParamLimits

0x9223,	// (0x0003761e) list_double_heading_pane_t1

0x9239,	// (0x00037634) list_double_heading_pane_t2_ParamLimits

0x9239,	// (0x00037634) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0003da86) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0003da86) list_double_heading_pane_t

0x90fa,	// (0x000374f5) list_double_graphic_heading_pane_g1_ParamLimits

0x90fa,	// (0x000374f5) list_double_graphic_heading_pane_g1

0x9206,	// (0x00037601) list_double_graphic_heading_pane_g2_ParamLimits

0x9206,	// (0x00037601) list_double_graphic_heading_pane_g2

0x9217,	// (0x00037612) list_double_graphic_heading_pane_g3_ParamLimits

0x9217,	// (0x00037612) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0003da8b) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0003da8b) list_double_graphic_heading_pane_g

0x924b,	// (0x00037646) list_double_graphic_heading_pane_t1_ParamLimits

0x924b,	// (0x00037646) list_double_graphic_heading_pane_t1

0x9134,	// (0x0003752f) list_double_graphic_heading_pane_t2_ParamLimits

0x9134,	// (0x0003752f) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0003da92) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0003da92) list_double_graphic_heading_pane_t

0x9261,	// (0x0003765c) list_double_time_pane_g1_ParamLimits

0x9261,	// (0x0003765c) list_double_time_pane_g1

0x9272,	// (0x0003766d) list_double_time_pane_g2_ParamLimits

0x9272,	// (0x0003766d) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0003da97) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0003da97) list_double_time_pane_g

0x927e,	// (0x00037679) list_double_time_pane_t1_ParamLimits

0x927e,	// (0x00037679) list_double_time_pane_t1

0x9294,	// (0x0003768f) list_double_time_pane_t2_ParamLimits

0x9294,	// (0x0003768f) list_double_time_pane_t2

0x92a6,	// (0x000376a1) list_double_time_pane_t3_ParamLimits

0x92a6,	// (0x000376a1) list_double_time_pane_t3

0x92b8,	// (0x000376b3) list_double_time_pane_t4_ParamLimits

0x92b8,	// (0x000376b3) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0003da9c) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0003da9c) list_double_time_pane_t

0x92ca,	// (0x000376c5) list_setting_pane_g1_ParamLimits

0x92ca,	// (0x000376c5) list_setting_pane_g1

0x92d6,	// (0x000376d1) list_setting_pane_g2_ParamLimits

0x92d6,	// (0x000376d1) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0003daa5) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0003daa5) list_setting_pane_g

0x92e2,	// (0x000376dd) list_setting_pane_t1_ParamLimits

0x92e2,	// (0x000376dd) list_setting_pane_t1

0x92fc,	// (0x000376f7) list_setting_pane_t2_ParamLimits

0x92fc,	// (0x000376f7) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0003daaa) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0003daaa) list_setting_pane_t

0x933b,	// (0x00037736) set_value_pane_cp_ParamLimits

0x933b,	// (0x00037736) set_value_pane_cp

0x9347,	// (0x00037742) list_setting_number_pane_g1_ParamLimits

0x9347,	// (0x00037742) list_setting_number_pane_g1

0x9353,	// (0x0003774e) list_setting_number_pane_g2_ParamLimits

0x9353,	// (0x0003774e) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0003dab1) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0003dab1) list_setting_number_pane_g

0x935f,	// (0x0003775a) list_setting_number_pane_t1_ParamLimits

0x935f,	// (0x0003775a) list_setting_number_pane_t1

0x9378,	// (0x00037773) list_setting_number_pane_t2_ParamLimits

0x9378,	// (0x00037773) list_setting_number_pane_t2

0x9392,	// (0x0003778d) list_setting_number_pane_t3_ParamLimits

0x9392,	// (0x0003778d) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0003dab6) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0003dab6) list_setting_number_pane_t

0x933b,	// (0x00037736) set_value_pane_ParamLimits

0x933b,	// (0x00037736) set_value_pane

0x4b09,	// (0x00032f04) bg_set_opt_pane_ParamLimits

0x4b09,	// (0x00032f04) bg_set_opt_pane

0x93d5,	// (0x000377d0) set_value_pane_t1

0x4b2a,	// (0x00032f25) slider_set_pane_cp3

0x4b33,	// (0x00032f2e) volume_small_pane_cp

0x4b3c,	// (0x00032f37) list_form_gen_pane

0x4b45,	// (0x00032f40) scroll_pane_cp8

0x93eb,	// (0x000377e6) form_field_data_pane_ParamLimits

0x93eb,	// (0x000377e6) form_field_data_pane

0x940f,	// (0x0003780a) form_field_data_wide_pane_ParamLimits

0x940f,	// (0x0003780a) form_field_data_wide_pane

0x9432,	// (0x0003782d) form_field_popup_pane_ParamLimits

0x9432,	// (0x0003782d) form_field_popup_pane

0x9452,	// (0x0003784d) form_field_popup_wide_pane_ParamLimits

0x9452,	// (0x0003784d) form_field_popup_wide_pane

0x9471,	// (0x0003786c) form_field_slider_pane_ParamLimits

0x9471,	// (0x0003786c) form_field_slider_pane

0x9484,	// (0x0003787f) form_field_slider_wide_pane_ParamLimits

0x9484,	// (0x0003787f) form_field_slider_wide_pane

0x4b56,	// (0x00032f51) data_form_pane

0x94a1,	// (0x0003789c) form_field_data_pane_t1

0x4b62,	// (0x00032f5d) input_focus_pane

0x4b70,	// (0x00032f6b) data_form_wide_pane

0x94c5,	// (0x000378c0) form_field_data_wide_pane_t1

0x48dd,	// (0x00032cd8) input_focus_pane_cp6

0x94e7,	// (0x000378e2) form_field_popup_pane_t1

0x4b62,	// (0x00032f5d) input_focus_pane_cp7

0x4b9c,	// (0x00032f97) list_form_pane

0x9507,	// (0x00037902) form_field_popup_wide_pane_t1

0x4b62,	// (0x00032f5d) input_focus_pane_cp8

0x4ba8,	// (0x00032fa3) list_form_wide_pane

0x9524,	// (0x0003791f) form_field_slider_pane_t1_ParamLimits

0x9524,	// (0x0003791f) form_field_slider_pane_t1

0x953a,	// (0x00037935) form_field_slider_pane_t2_ParamLimits

0x953a,	// (0x00037935) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0003dac6) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0003dac6) form_field_slider_pane_t

0x3f02,	// (0x000322fd) input_focus_pane_cp9_ParamLimits

0x3f02,	// (0x000322fd) input_focus_pane_cp9

0x954f,	// (0x0003794a) slider_cont_pane_ParamLimits

0x954f,	// (0x0003794a) slider_cont_pane

0x4bb7,	// (0x00032fb2) form_field_slider_wide_pane_t1_ParamLimits

0x4bb7,	// (0x00032fb2) form_field_slider_wide_pane_t1

0x9563,	// (0x0003795e) form_field_slider_wide_pane_t2_ParamLimits

0x9563,	// (0x0003795e) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0003dacb) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0003dacb) form_field_slider_wide_pane_t

0x3f02,	// (0x000322fd) input_focus_pane_cp10_ParamLimits

0x3f02,	// (0x000322fd) input_focus_pane_cp10

0x9575,	// (0x00037970) slider_cont_pane_cp1_ParamLimits

0x9575,	// (0x00037970) slider_cont_pane_cp1

0x9589,	// (0x00037984) slider_form_pane_cp

0x4bc9,	// (0x00032fc4) input_focus_pane_g1

0x4bd1,	// (0x00032fcc) input_focus_pane_g2

0x4bd9,	// (0x00032fd4) input_focus_pane_g3

0x4be1,	// (0x00032fdc) input_focus_pane_g4

0x4be9,	// (0x00032fe4) input_focus_pane_g5

0x4bf1,	// (0x00032fec) input_focus_pane_g6

0x4bf9,	// (0x00032ff4) input_focus_pane_g7

0x4c01,	// (0x00032ffc) input_focus_pane_g8

0x4c09,	// (0x00033004) input_focus_pane_g9

0x3eaa,	// (0x000322a5) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0003dad0) input_focus_pane_g

0x6022,	// (0x0003441d) wait_border_pane_g3_copy1

0x9591,	// (0x0003798c) data_form_pane_t1

0x3eaa,	// (0x000322a5) wait_anim_pane_g1_copy1

0x97f1,	// (0x00037bec) data_form_wide_pane_t1

0x95ac,	// (0x000379a7) list_form_graphic_pane_cp_ParamLimits

0x95ac,	// (0x000379a7) list_form_graphic_pane_cp

0x6c81,	// (0x0003507c) slider_form_pane_g1

0x6c8a,	// (0x00035085) slider_form_pane_g2

0x0006,

0xf9cd,	// (0x0003ddc8) slider_form_pane_g

0x95c5,	// (0x000379c0) list_form_graphic_pane_ParamLimits

0x95c5,	// (0x000379c0) list_form_graphic_pane

0x95e1,	// (0x000379dc) list_form_graphic_pane_g1

0x95e9,	// (0x000379e4) list_form_graphic_pane_t1_ParamLimits

0x95e9,	// (0x000379e4) list_form_graphic_pane_t1

0x3f10,	// (0x0003230b) list_highlight_pane_cp5_ParamLimits

0x3f10,	// (0x0003230b) list_highlight_pane_cp5

0x95fe,	// (0x000379f9) find_pane_g1

0x4c11,	// (0x0003300c) input_find_pane

0x9607,	// (0x00037a02) input_find_pane_g1_ParamLimits

0x9607,	// (0x00037a02) input_find_pane_g1

0x9613,	// (0x00037a0e) input_find_pane_t1_ParamLimits

0x9613,	// (0x00037a0e) input_find_pane_t1

0x9628,	// (0x00037a23) input_find_pane_t2_ParamLimits

0x9628,	// (0x00037a23) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0003dae5) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0003dae5) input_find_pane_t

0x4c1a,	// (0x00033015) input_focus_pane_cp5_ParamLimits

0x4c1a,	// (0x00033015) input_focus_pane_cp5

0xa507,	// (0x00038902) bg_popup_window_pane_cp2_ParamLimits

0xa507,	// (0x00038902) bg_popup_window_pane_cp2

0xa514,	// (0x0003890f) listscroll_menu_pane_ParamLimits

0xa514,	// (0x0003890f) listscroll_menu_pane

0xa520,	// (0x0003891b) popup_submenu_window_ParamLimits

0xa520,	// (0x0003891b) popup_submenu_window

0x4c28,	// (0x00033023) find_popup_pane_g1

0x4c30,	// (0x0003302b) input_popup_find_pane_cp

0x4c1a,	// (0x00033015) input_focus_pane_cp4_ParamLimits

0x4c1a,	// (0x00033015) input_focus_pane_cp4

0x4c3a,	// (0x00033035) input_popup_find_pane_t1_ParamLimits

0x4c3a,	// (0x00033035) input_popup_find_pane_t1

0x3eb4,	// (0x000322af) bg_popup_sub_pane_cp

0x4c68,	// (0x00033063) listscroll_popup_sub_pane

0x4c70,	// (0x0003306b) list_submenu_pane_ParamLimits

0x4c70,	// (0x0003306b) list_submenu_pane

0x4c81,	// (0x0003307c) scroll_pane_cp4

0x4c89,	// (0x00033084) list_single_popup_submenu_pane_ParamLimits

0x4c89,	// (0x00033084) list_single_popup_submenu_pane

0x4c9d,	// (0x00033098) list_single_popup_submenu_pane_g1

0x4ca5,	// (0x000330a0) list_single_popup_submenu_pane_t1_ParamLimits

0x4ca5,	// (0x000330a0) list_single_popup_submenu_pane_t1

0x3f10,	// (0x0003230b) bg_active_tab_pane_cp1_ParamLimits

0x3f10,	// (0x0003230b) bg_active_tab_pane_cp1

0xa556,	// (0x00038951) tabs_2_active_pane_g1

0xa55e,	// (0x00038959) tabs_2_active_pane_t1

0x3f10,	// (0x0003230b) bg_passive_tab_pane_cp1_ParamLimits

0x3f10,	// (0x0003230b) bg_passive_tab_pane_cp1

0xa556,	// (0x00038951) tabs_2_passive_pane_g1

0xa55e,	// (0x00038959) tabs_2_passive_pane_t1

0x5a3d,	// (0x00033e38) bg_active_tab_pane_cp4

0xa570,	// (0x0003896b) tabs_2_long_active_pane_t1

0xa583,	// (0x0003897e) bg_passive_tab_pane_cp4

0xb219,	// (0x00039614) list_single_midp_graphic_pane_g4_ParamLimits

0x5a3d,	// (0x00033e38) bg_active_tab_pane_cp5

0xa58f,	// (0x0003898a) tabs_3_long_active_pane_t1

0xa583,	// (0x0003897e) bg_passive_tab_pane_cp5

0xb219,	// (0x00039614) list_single_midp_graphic_pane_g4

0x3f10,	// (0x0003230b) bg_popup_window_pane_cp13_ParamLimits

0x3f10,	// (0x0003230b) bg_popup_window_pane_cp13

0x4ccf,	// (0x000330ca) listscroll_popup_fast_pane_ParamLimits

0x4ccf,	// (0x000330ca) listscroll_popup_fast_pane

0x4cde,	// (0x000330d9) grid_popup_fast_pane_ParamLimits

0x4cde,	// (0x000330d9) grid_popup_fast_pane

0x4cf0,	// (0x000330eb) scroll_pane_cp9_ParamLimits

0x4cf0,	// (0x000330eb) scroll_pane_cp9

0x7f09,	// (0x00036304) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7f09,	// (0x00036304) list_single_graphic_hl_pane_t1_cp2

0x4d14,	// (0x0003310f) input_focus_pane_cp20_ParamLimits

0x4d14,	// (0x0003310f) input_focus_pane_cp20

0x4d22,	// (0x0003311d) query_popup_data_pane_t1_ParamLimits

0x4d22,	// (0x0003311d) query_popup_data_pane_t1

0x4d35,	// (0x00033130) query_popup_data_pane_t2_ParamLimits

0x4d35,	// (0x00033130) query_popup_data_pane_t2

0x4d7b,	// (0x00033176) query_popup_data_pane_t3_ParamLimits

0x4d7b,	// (0x00033176) query_popup_data_pane_t3

0x4dbc,	// (0x000331b7) query_popup_data_pane_t4_ParamLimits

0x4dbc,	// (0x000331b7) query_popup_data_pane_t4

0x4df8,	// (0x000331f3) query_popup_data_pane_t5_ParamLimits

0x4df8,	// (0x000331f3) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0003daea) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0003daea) query_popup_data_pane_t

0x4bc9,	// (0x00032fc4) bg_set_opt_pane_g1

0x4bd1,	// (0x00032fcc) bg_set_opt_pane_g2

0x4bd9,	// (0x00032fd4) bg_set_opt_pane_g3

0x4be1,	// (0x00032fdc) bg_set_opt_pane_g4

0x4be9,	// (0x00032fe4) bg_set_opt_pane_g5

0x4bf1,	// (0x00032fec) bg_set_opt_pane_g6

0x4bf9,	// (0x00032ff4) bg_set_opt_pane_g7

0x4c01,	// (0x00032ffc) bg_set_opt_pane_g8

0x4c09,	// (0x00033004) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0003daf5) bg_set_opt_pane_g

0xa964,	// (0x00038d5f) control_top_pane_stacon_ParamLimits

0xa964,	// (0x00038d5f) control_top_pane_stacon

0xa9b7,	// (0x00038db2) signal_pane_stacon_ParamLimits

0xa9b7,	// (0x00038db2) signal_pane_stacon

0x526d,	// (0x00033668) stacon_top_pane_g1_ParamLimits

0x526d,	// (0x00033668) stacon_top_pane_g1

0xa9dc,	// (0x00038dd7) title_pane_stacon_ParamLimits

0xa9dc,	// (0x00038dd7) title_pane_stacon

0xaa06,	// (0x00038e01) uni_indicator_pane_stacon_ParamLimits

0xaa06,	// (0x00038e01) uni_indicator_pane_stacon

0xaa1b,	// (0x00038e16) battery_pane_stacon_ParamLimits

0xaa1b,	// (0x00038e16) battery_pane_stacon

0xaa5f,	// (0x00038e5a) control_bottom_pane_stacon_ParamLimits

0xaa5f,	// (0x00038e5a) control_bottom_pane_stacon

0xaa82,	// (0x00038e7d) navi_pane_stacon_ParamLimits

0xaa82,	// (0x00038e7d) navi_pane_stacon

0x528f,	// (0x0003368a) stacon_bottom_pane_g1_ParamLimits

0x528f,	// (0x0003368a) stacon_bottom_pane_g1

0xa5a1,	// (0x0003899c) aid_levels_signal_lsc_ParamLimits

0xa5a1,	// (0x0003899c) aid_levels_signal_lsc

0xa5b8,	// (0x000389b3) signal_pane_stacon_g1_ParamLimits

0xa5b8,	// (0x000389b3) signal_pane_stacon_g1

0xa5cc,	// (0x000389c7) signal_pane_stacon_g2_ParamLimits

0xa5cc,	// (0x000389c7) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0003db08) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0003db08) signal_pane_stacon_g

0xa601,	// (0x000389fc) title_pane_stacon_t1_ParamLimits

0xa601,	// (0x000389fc) title_pane_stacon_t1

0x4e50,	// (0x0003324b) uni_indicator_pane_stacon_g1

0x4e5a,	// (0x00033255) uni_indicator_pane_stacon_g2

0x4e3c,	// (0x00033237) uni_indicator_pane_stacon_g3

0x4e46,	// (0x00033241) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0003db14) uni_indicator_pane_stacon_g

0xa626,	// (0x00038a21) control_top_pane_stacon_g1

0xa62e,	// (0x00038a29) control_top_pane_stacon_t1_ParamLimits

0xa62e,	// (0x00038a29) control_top_pane_stacon_t1

0xa665,	// (0x00038a60) aid_levels_battery_lsc_ParamLimits

0xa665,	// (0x00038a60) aid_levels_battery_lsc

0xa67d,	// (0x00038a78) battery_pane_stacon_g1_ParamLimits

0xa67d,	// (0x00038a78) battery_pane_stacon_g1

0xa690,	// (0x00038a8b) battery_pane_stacon_g2_ParamLimits

0xa690,	// (0x00038a8b) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0003db1d) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0003db1d) battery_pane_stacon_g

0xa6ce,	// (0x00038ac9) navi_icon_pane_stacon

0xa6e2,	// (0x00038add) navi_navi_pane_stacon

0xa6ce,	// (0x00038ac9) navi_text_pane_stacon

0xa626,	// (0x00038a21) control_bottom_pane_stacon_g1

0xa6f6,	// (0x00038af1) control_bottom_pane_stacon_t1_ParamLimits

0xa6f6,	// (0x00038af1) control_bottom_pane_stacon_t1

0xa72d,	// (0x00038b28) grid_app_pane_ParamLimits

0xa72d,	// (0x00038b28) grid_app_pane

0xa751,	// (0x00038b4c) scroll_pane_cp15_ParamLimits

0xa751,	// (0x00038b4c) scroll_pane_cp15

0xa766,	// (0x00038b61) cell_app_pane_ParamLimits

0xa766,	// (0x00038b61) cell_app_pane

0xa78a,	// (0x00038b85) cell_app_pane_g1_ParamLimits

0xa78a,	// (0x00038b85) cell_app_pane_g1

0x4e7e,	// (0x00033279) cell_app_pane_g2_ParamLimits

0x4e7e,	// (0x00033279) cell_app_pane_g2

0x0001,

0xf727,	// (0x0003db22) cell_app_pane_g_ParamLimits

0xf727,	// (0x0003db22) cell_app_pane_g

0x4e8a,	// (0x00033285) cell_app_pane_t1_ParamLimits

0x4e8a,	// (0x00033285) cell_app_pane_t1

0x4e9c,	// (0x00033297) grid_highlight_pane_ParamLimits

0x4e9c,	// (0x00033297) grid_highlight_pane

0x4bc9,	// (0x00032fc4) cell_highlight_pane_g1

0x4bd1,	// (0x00032fcc) cell_highlight_pane_g2

0x4bd9,	// (0x00032fd4) cell_highlight_pane_g3

0x4be1,	// (0x00032fdc) cell_highlight_pane_g4

0x4be9,	// (0x00032fe4) cell_highlight_pane_g5

0x4bf1,	// (0x00032fec) cell_highlight_pane_g6

0x4bf9,	// (0x00032ff4) cell_highlight_pane_g7

0x4c01,	// (0x00032ffc) cell_highlight_pane_g8

0x4c09,	// (0x00033004) cell_highlight_pane_g9

0x3eaa,	// (0x000322a5) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0003dad0) cell_highlight_pane_g

0x4ead,	// (0x000332a8) bg_scroll_pane

0xa7c1,	// (0x00038bbc) scroll_handle_pane

0x4ef4,	// (0x000332ef) scroll_bg_pane_g1

0x4f09,	// (0x00033304) scroll_bg_pane_g2

0x4f21,	// (0x0003331c) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0003db27) scroll_bg_pane_g

0x4f36,	// (0x00033331) scroll_handle_focus_pane_ParamLimits

0x4f36,	// (0x00033331) scroll_handle_focus_pane

0x4ef4,	// (0x000332ef) scroll_handle_pane_g1

0x4f43,	// (0x0003333e) scroll_handle_pane_g2

0x4f21,	// (0x0003331c) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0003db2e) scroll_handle_pane_g

0x4c1a,	// (0x00033015) bg_popup_sub_pane_cp21_ParamLimits

0x4c1a,	// (0x00033015) bg_popup_sub_pane_cp21

0x4f57,	// (0x00033352) popup_fep_japan_predictive_window_t1_ParamLimits

0x4f57,	// (0x00033352) popup_fep_japan_predictive_window_t1

0x4f71,	// (0x0003336c) popup_fep_japan_predictive_window_t2_ParamLimits

0x4f71,	// (0x0003336c) popup_fep_japan_predictive_window_t2

0x4fa4,	// (0x0003339f) popup_fep_japan_predictive_window_t3_ParamLimits

0x4fa4,	// (0x0003339f) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0003db35) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0003db35) popup_fep_japan_predictive_window_t

0x3eb4,	// (0x000322af) bg_popup_sub_pane_cp23

0x4fdb,	// (0x000333d6) listscroll_japin_cand_pane

0x4fe3,	// (0x000333de) popup_fep_japan_candidate_window_t1

0x4ff1,	// (0x000333ec) candidate_pane_ParamLimits

0x4ff1,	// (0x000333ec) candidate_pane

0x5003,	// (0x000333fe) scroll_pane_cp30

0x500b,	// (0x00033406) list_single_popup_jap_candidate_pane_ParamLimits

0x500b,	// (0x00033406) list_single_popup_jap_candidate_pane

0x3eb4,	// (0x000322af) list_highlight_pane_cp30

0x5020,	// (0x0003341b) list_single_popup_jap_candidate_pane_t1

0x502f,	// (0x0003342a) level_1_signal

0x503c,	// (0x00033437) level_2_signal

0x5049,	// (0x00033444) level_3_signal

0x5056,	// (0x00033451) level_4_signal

0x5063,	// (0x0003345e) level_5_signal

0x5070,	// (0x0003346b) level_6_signal

0x507d,	// (0x00033478) level_7_signal

0x502f,	// (0x0003342a) level_1_battery

0x503c,	// (0x00033437) level_2_battery

0x5049,	// (0x00033444) level_3_battery

0x5056,	// (0x00033451) level_4_battery

0x5063,	// (0x0003345e) level_5_battery

0x5070,	// (0x0003346b) level_6_battery

0x507d,	// (0x00033478) level_7_battery

0x50a2,	// (0x0003349d) list_menu_pane_ParamLimits

0x50a2,	// (0x0003349d) list_menu_pane

0x50b3,	// (0x000334ae) scroll_pane_cp25_ParamLimits

0x50b3,	// (0x000334ae) scroll_pane_cp25

0x50cc,	// (0x000334c7) list_double2_graphic_pane_cp2_ParamLimits

0x50cc,	// (0x000334c7) list_double2_graphic_pane_cp2

0x50cc,	// (0x000334c7) list_double2_large_graphic_pane_cp2_ParamLimits

0x50cc,	// (0x000334c7) list_double2_large_graphic_pane_cp2

0x50cc,	// (0x000334c7) list_double2_pane_cp2_ParamLimits

0x50cc,	// (0x000334c7) list_double2_pane_cp2

0x50cc,	// (0x000334c7) list_double_graphic_pane_cp2_ParamLimits

0x50cc,	// (0x000334c7) list_double_graphic_pane_cp2

0x50cc,	// (0x000334c7) list_double_large_graphic_pane_cp2_ParamLimits

0x50cc,	// (0x000334c7) list_double_large_graphic_pane_cp2

0x50cc,	// (0x000334c7) list_double_number_pane_cp2_ParamLimits

0x50cc,	// (0x000334c7) list_double_number_pane_cp2

0x50cc,	// (0x000334c7) list_double_pane_cp2_ParamLimits

0x50cc,	// (0x000334c7) list_double_pane_cp2

0xa81d,	// (0x00038c18) list_single_2graphic_pane_cp2_ParamLimits

0xa81d,	// (0x00038c18) list_single_2graphic_pane_cp2

0xa81d,	// (0x00038c18) list_single_graphic_heading_pane_cp2_ParamLimits

0xa81d,	// (0x00038c18) list_single_graphic_heading_pane_cp2

0xa81d,	// (0x00038c18) list_single_graphic_pane_cp2_ParamLimits

0xa81d,	// (0x00038c18) list_single_graphic_pane_cp2

0xa81d,	// (0x00038c18) list_single_heading_pane_cp2_ParamLimits

0xa81d,	// (0x00038c18) list_single_heading_pane_cp2

0x50dc,	// (0x000334d7) list_single_large_graphic_pane_cp2_ParamLimits

0x50dc,	// (0x000334d7) list_single_large_graphic_pane_cp2

0xa81d,	// (0x00038c18) list_single_number_heading_pane_cp2_ParamLimits

0xa81d,	// (0x00038c18) list_single_number_heading_pane_cp2

0xa81d,	// (0x00038c18) list_single_number_pane_cp2_ParamLimits

0xa81d,	// (0x00038c18) list_single_number_pane_cp2

0xa81d,	// (0x00038c18) list_single_pane_cp2_ParamLimits

0xa81d,	// (0x00038c18) list_single_pane_cp2

0x50f6,	// (0x000334f1) bg_popup_sub_pane_cp22

0xa8dc,	// (0x00038cd7) popup_side_volume_key_window_g1

0xa906,	// (0x00038d01) popup_side_volume_key_window_t1

0xa922,	// (0x00038d1d) volume_small_pane_cp1

0x3f02,	// (0x000322fd) bg_popup_sub_pane_cp24_ParamLimits

0x3f02,	// (0x000322fd) bg_popup_sub_pane_cp24

0x510c,	// (0x00033507) fep_china_uni_candidate_pane_ParamLimits

0x510c,	// (0x00033507) fep_china_uni_candidate_pane

0x5120,	// (0x0003351b) fep_china_uni_entry_pane

0x5130,	// (0x0003352b) popup_fep_china_uni_window_g1

0x514c,	// (0x00033547) fep_china_uni_entry_pane_g1

0x5154,	// (0x0003354f) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0003db62) fep_china_uni_entry_pane_g

0x515c,	// (0x00033557) fep_entry_item_pane

0x5166,	// (0x00033561) fep_candidate_item_pane

0x516e,	// (0x00033569) fep_china_uni_candidate_pane_g1

0x5176,	// (0x00033571) fep_china_uni_candidate_pane_g2

0x517e,	// (0x00033579) fep_china_uni_candidate_pane_g3

0x5186,	// (0x00033581) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0003db67) fep_china_uni_candidate_pane_g

0x3eaa,	// (0x000322a5) fep_entry_item_pane_g1

0x518e,	// (0x00033589) fep_entry_item_pane_t1_ParamLimits

0x518e,	// (0x00033589) fep_entry_item_pane_t1

0x51a4,	// (0x0003359f) fep_candidate_item_pane_t1_ParamLimits

0x51a4,	// (0x0003359f) fep_candidate_item_pane_t1

0x51b9,	// (0x000335b4) fep_candidate_item_pane_t2_ParamLimits

0x51b9,	// (0x000335b4) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0003db70) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0003db70) fep_candidate_item_pane_t

0x3f10,	// (0x0003230b) list_highlight_pane_cp31_ParamLimits

0x3f10,	// (0x0003230b) list_highlight_pane_cp31

0x51cb,	// (0x000335c6) level_1_signal_lsc

0x51d4,	// (0x000335cf) level_2_signal_lsc

0x51dd,	// (0x000335d8) level_3_signal_lsc

0x51e6,	// (0x000335e1) level_4_signal_lsc

0x51ef,	// (0x000335ea) level_5_signal_lsc

0x51f8,	// (0x000335f3) level_6_signal_lsc

0x5201,	// (0x000335fc) level_7_signal_lsc

0x5201,	// (0x000335fc) level_1_battery_lsc

0x520a,	// (0x00033605) level_2_battery_lsc

0x5213,	// (0x0003360e) level_3_battery_lsc

0x521c,	// (0x00033617) level_4_battery_lsc

0x5225,	// (0x00033620) level_5_battery_lsc

0x522e,	// (0x00033629) level_6_battery_lsc

0x51cb,	// (0x000335c6) level_7_battery_lsc

0x5237,	// (0x00033632) scroll_handle_focus_pane_g1

0x5240,	// (0x0003363b) scroll_handle_focus_pane_g2

0x5249,	// (0x00033644) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0003db75) scroll_handle_focus_pane_g

0x963d,	// (0x00037a38) list_single_2graphic_pane_g1_ParamLimits

0x963d,	// (0x00037a38) list_single_2graphic_pane_g1

0xa4a9,	// (0x000388a4) list_single_2graphic_pane_g2_ParamLimits

0xa4a9,	// (0x000388a4) list_single_2graphic_pane_g2

0xa48b,	// (0x00038886) list_single_2graphic_pane_g3_ParamLimits

0xa48b,	// (0x00038886) list_single_2graphic_pane_g3

0x9649,	// (0x00037a44) list_single_2graphic_pane_g4_ParamLimits

0x9649,	// (0x00037a44) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0003db7c) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0003db7c) list_single_2graphic_pane_g

0x9655,	// (0x00037a50) list_single_2graphic_pane_t1_ParamLimits

0x9655,	// (0x00037a50) list_single_2graphic_pane_t1

0x9683,	// (0x00037a7e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9683,	// (0x00037a7e) list_double2_graphic_large_graphic_pane_g1

0x91cd,	// (0x000375c8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x91cd,	// (0x000375c8) list_double2_graphic_large_graphic_pane_g2

0x9112,	// (0x0003750d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9112,	// (0x0003750d) list_double2_graphic_large_graphic_pane_g3

0x9693,	// (0x00037a8e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9693,	// (0x00037a8e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0003db85) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0003db85) list_double2_graphic_large_graphic_pane_g

0x969f,	// (0x00037a9a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x969f,	// (0x00037a9a) list_double2_graphic_large_graphic_pane_t1

0x96b5,	// (0x00037ab0) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x96b5,	// (0x00037ab0) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0003db8e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0003db8e) list_double2_graphic_large_graphic_pane_t

0x530a,	// (0x00033705) popup_fast_swap_window_ParamLimits

0x530a,	// (0x00033705) popup_fast_swap_window

0x5326,	// (0x00033721) popup_side_volume_key_window

0x5342,	// (0x0003373d) stacon_top_pane

0x534c,	// (0x00033747) status_pane_ParamLimits

0x534c,	// (0x00033747) status_pane

0x5342,	// (0x0003373d) status_small_pane

0x3eb4,	// (0x000322af) control_pane

0x3eb4,	// (0x000322af) stacon_bottom_pane

0x4b45,	// (0x00032f40) scroll_pane_cp121

0x4b3c,	// (0x00032f37) set_content_pane

0xa92a,	// (0x00038d25) bg_active_tab_pane_g1_cp1

0x525b,	// (0x00033656) bg_active_tab_pane_g2_cp1

0xa933,	// (0x00038d2e) bg_active_tab_pane_g3_cp1

0xa92a,	// (0x00038d25) bg_passive_tab_pane_g1_cp1

0x525b,	// (0x00033656) bg_passive_tab_pane_g2_cp1

0xa933,	// (0x00038d2e) bg_passive_tab_pane_g3_cp1

0x5264,	// (0x0003365f) bg_active_tab_pane_g1_cp2

0x525b,	// (0x00033656) bg_active_tab_pane_g2_cp2

0x5252,	// (0x0003364d) bg_active_tab_pane_g3_cp2

0x5264,	// (0x0003365f) bg_passive_tab_pane_g1_cp2

0x525b,	// (0x00033656) bg_passive_tab_pane_g2_cp2

0x5252,	// (0x0003364d) bg_passive_tab_pane_g3_cp2

0xa93c,	// (0x00038d37) bg_active_tab_pane_g1_cp3

0x525b,	// (0x00033656) bg_active_tab_pane_g2_cp3

0xa945,	// (0x00038d40) bg_active_tab_pane_g3_cp3

0xa93c,	// (0x00038d37) bg_passive_tab_pane_g1_cp3

0x525b,	// (0x00033656) bg_passive_tab_pane_g2_cp3

0xa945,	// (0x00038d40) bg_passive_tab_pane_g3_cp3

0xa94e,	// (0x00038d49) bg_active_tab_pane_g1_cp4

0x525b,	// (0x00033656) bg_active_tab_pane_g2_cp4

0xa959,	// (0x00038d54) bg_active_tab_pane_g3_cp4

0xa94e,	// (0x00038d49) bg_passive_tab_pane_g1_cp4

0x525b,	// (0x00033656) bg_passive_tab_pane_g2_cp4

0xa959,	// (0x00038d54) bg_passive_tab_pane_g3_cp4

0x52b4,	// (0x000336af) bg_active_tab_pane_g1_cp5

0x525b,	// (0x00033656) bg_active_tab_pane_g2_cp5

0x52ab,	// (0x000336a6) bg_active_tab_pane_g3_cp5

0x52b4,	// (0x000336af) bg_passive_tab_pane_g1_cp5

0x525b,	// (0x00033656) bg_passive_tab_pane_g2_cp5

0x52ab,	// (0x000336a6) bg_passive_tab_pane_g3_cp5

0xaaa5,	// (0x00038ea0) list_set_graphic_pane_ParamLimits

0xaaa5,	// (0x00038ea0) list_set_graphic_pane

0x3eb4,	// (0x000322af) bg_set_opt_pane_cp4

0xaac2,	// (0x00038ebd) list_set_graphic_pane_g1_ParamLimits

0xaac2,	// (0x00038ebd) list_set_graphic_pane_g1

0xaace,	// (0x00038ec9) list_set_graphic_pane_g2_ParamLimits

0xaace,	// (0x00038ec9) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0003db93) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0003db93) list_set_graphic_pane_g

0x0009,

0xfaee,	// (0x0003dee9) volume_small_pane_cp_g

0x52bd,	// (0x000336b8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x52bd,	// (0x000336b8) list_double2_large_graphic_pane_g1_cp2

0x52c9,	// (0x000336c4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x52c9,	// (0x000336c4) list_double2_large_graphic_pane_g2_cp2

0x52da,	// (0x000336d5) list_double2_large_graphic_pane_g3_cp2

0x52e2,	// (0x000336dd) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x52e2,	// (0x000336dd) list_double2_large_graphic_pane_t1_cp2

0x52f8,	// (0x000336f3) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x52f8,	// (0x000336f3) list_double2_large_graphic_pane_t2_cp2

0x6a2d,	// (0x00034e28) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6a2d,	// (0x00034e28) list_double_large_graphic_pane_g1_cp2

0x6a3e,	// (0x00034e39) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6a3e,	// (0x00034e39) list_double_large_graphic_pane_g2_cp2

0x5468,	// (0x00033863) list_double_large_graphic_pane_g3_cp2

0x6a4f,	// (0x00034e4a) list_double_large_graphic_pane_g4_cp

0x6a57,	// (0x00034e52) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6a57,	// (0x00034e52) list_double_large_graphic_pane_t1_cp2

0x6a6e,	// (0x00034e69) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6a6e,	// (0x00034e69) list_double_large_graphic_pane_t2_cp2

0x535a,	// (0x00033755) list_double2_graphic_pane_g1_cp2_ParamLimits

0x535a,	// (0x00033755) list_double2_graphic_pane_g1_cp2

0x5368,	// (0x00033763) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5368,	// (0x00033763) list_double2_graphic_pane_g2_cp2

0x5379,	// (0x00033774) list_double2_graphic_pane_g3_cp2

0x5383,	// (0x0003377e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x5383,	// (0x0003377e) list_double2_graphic_pane_t1_cp2

0x5399,	// (0x00033794) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5399,	// (0x00033794) list_double2_graphic_pane_t2_cp2

0x53ab,	// (0x000337a6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x53ab,	// (0x000337a6) list_single_number_heading_pane_g1_cp2

0x53b7,	// (0x000337b2) list_single_number_heading_pane_g2_cp2

0x53bf,	// (0x000337ba) list_single_number_heading_pane_t1_cp2_ParamLimits

0x53bf,	// (0x000337ba) list_single_number_heading_pane_t1_cp2

0x53d5,	// (0x000337d0) list_single_number_heading_pane_t2_cp2_ParamLimits

0x53d5,	// (0x000337d0) list_single_number_heading_pane_t2_cp2

0x53e7,	// (0x000337e2) list_single_number_heading_pane_t3_cp2_ParamLimits

0x53e7,	// (0x000337e2) list_single_number_heading_pane_t3_cp2

0x53ab,	// (0x000337a6) list_single_heading_pane_g1_cp2_ParamLimits

0x53ab,	// (0x000337a6) list_single_heading_pane_g1_cp2

0x53b7,	// (0x000337b2) list_single_heading_pane_g2_cp2

0x53bf,	// (0x000337ba) list_single_heading_pane_t1_cp2_ParamLimits

0x53bf,	// (0x000337ba) list_single_heading_pane_t1_cp2

0x6817,	// (0x00034c12) list_single_heading_pane_t2_cp2_ParamLimits

0x6817,	// (0x00034c12) list_single_heading_pane_t2_cp2

0x677d,	// (0x00034b78) list_double_graphic_pane_g1_cp2_ParamLimits

0x677d,	// (0x00034b78) list_double_graphic_pane_g1_cp2

0x6789,	// (0x00034b84) list_double_graphic_pane_g2_cp2_ParamLimits

0x6789,	// (0x00034b84) list_double_graphic_pane_g2_cp2

0x6798,	// (0x00034b93) list_double_graphic_pane_g3_cp2

0x67a0,	// (0x00034b9b) list_double_graphic_pane_t1_cp2_ParamLimits

0x67a0,	// (0x00034b9b) list_double_graphic_pane_t1_cp2

0x67b6,	// (0x00034bb1) list_double_graphic_pane_t2_cp2_ParamLimits

0x67b6,	// (0x00034bb1) list_double_graphic_pane_t2_cp2

0x545c,	// (0x00033857) list_double_number_pane_g1_cp2_ParamLimits

0x545c,	// (0x00033857) list_double_number_pane_g1_cp2

0x5468,	// (0x00033863) list_double_number_pane_g2_cp2

0x6741,	// (0x00034b3c) list_double_number_pane_t1_cp2_ParamLimits

0x6741,	// (0x00034b3c) list_double_number_pane_t1_cp2

0x6755,	// (0x00034b50) list_double_number_pane_t2_cp2_ParamLimits

0x6755,	// (0x00034b50) list_double_number_pane_t2_cp2

0x676b,	// (0x00034b66) list_double_number_pane_t3_cp2_ParamLimits

0x676b,	// (0x00034b66) list_double_number_pane_t3_cp2

0x66b8,	// (0x00034ab3) list_single_graphic_pane_g1_cp2_ParamLimits

0x66b8,	// (0x00034ab3) list_single_graphic_pane_g1_cp2

0x54c0,	// (0x000338bb) list_single_graphic_pane_g2_cp2_ParamLimits

0x54c0,	// (0x000338bb) list_single_graphic_pane_g2_cp2

0x54cc,	// (0x000338c7) list_single_graphic_pane_g3_cp2

0x668e,	// (0x00034a89) list_single_graphic_pane_t1_cp2_ParamLimits

0x668e,	// (0x00034a89) list_single_graphic_pane_t1_cp2

0x54c0,	// (0x000338bb) list_single_number_pane_g1_cp2_ParamLimits

0x54c0,	// (0x000338bb) list_single_number_pane_g1_cp2

0x54cc,	// (0x000338c7) list_single_number_pane_g2_cp2

0x668e,	// (0x00034a89) list_single_number_pane_t1_cp2_ParamLimits

0x668e,	// (0x00034a89) list_single_number_pane_t1_cp2

0x66a4,	// (0x00034a9f) list_single_number_pane_t2_cp2_ParamLimits

0x66a4,	// (0x00034a9f) list_single_number_pane_t2_cp2

0x52c9,	// (0x000336c4) list_double2_pane_g1_cp2_ParamLimits

0x52c9,	// (0x000336c4) list_double2_pane_g1_cp2

0x52da,	// (0x000336d5) list_double2_pane_g2_cp2

0x5434,	// (0x0003382f) list_double2_pane_t1_cp2_ParamLimits

0x5434,	// (0x0003382f) list_double2_pane_t1_cp2

0x544a,	// (0x00033845) list_double2_pane_t2_cp2_ParamLimits

0x544a,	// (0x00033845) list_double2_pane_t2_cp2

0x545c,	// (0x00033857) list_double_pane_g1_cp2_ParamLimits

0x545c,	// (0x00033857) list_double_pane_g1_cp2

0x5468,	// (0x00033863) list_double_pane_g2_cp2

0x5470,	// (0x0003386b) list_double_pane_t1_cp2_ParamLimits

0x5470,	// (0x0003386b) list_double_pane_t1_cp2

0x5486,	// (0x00033881) list_double_pane_t2_cp2_ParamLimits

0x5486,	// (0x00033881) list_double_pane_t2_cp2

0x54b0,	// (0x000338ab) list_single_pane_cp2_g3

0x54c0,	// (0x000338bb) list_single_pane_g1_cp2_ParamLimits

0x54c0,	// (0x000338bb) list_single_pane_g1_cp2

0x54cc,	// (0x000338c7) list_single_pane_g2_cp2

0x54d4,	// (0x000338cf) list_single_pane_t1_cp2_ParamLimits

0x54d4,	// (0x000338cf) list_single_pane_t1_cp2

0x54ec,	// (0x000338e7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x54ec,	// (0x000338e7) list_single_large_graphic_pane_g1_cp2

0x54f8,	// (0x000338f3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x54f8,	// (0x000338f3) list_single_large_graphic_pane_g2_cp2

0x5504,	// (0x000338ff) list_single_large_graphic_pane_g3_cp2

0x550c,	// (0x00033907) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x550c,	// (0x00033907) list_single_large_graphic_pane_g4_cp1

0x5526,	// (0x00033921) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5526,	// (0x00033921) list_single_large_graphic_pane_t1_cp2

0x665a,	// (0x00034a55) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x665a,	// (0x00034a55) list_single_graphic_heading_pane_g1_cp2

0x6627,	// (0x00034a22) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6627,	// (0x00034a22) list_single_graphic_heading_pane_g4_cp2

0x54cc,	// (0x000338c7) list_single_graphic_heading_pane_g5_cp2

0x6666,	// (0x00034a61) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6666,	// (0x00034a61) list_single_graphic_heading_pane_t1_cp2

0x667c,	// (0x00034a77) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x667c,	// (0x00034a77) list_single_graphic_heading_pane_t2_cp2

0x661b,	// (0x00034a16) list_single_2graphic_pane_g1_cp2_ParamLimits

0x661b,	// (0x00034a16) list_single_2graphic_pane_g1_cp2

0x6627,	// (0x00034a22) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6627,	// (0x00034a22) list_single_2graphic_pane_g2_cp2

0x54cc,	// (0x000338c7) list_single_2graphic_pane_g3_cp2

0x6638,	// (0x00034a33) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6638,	// (0x00034a33) list_single_2graphic_pane_g4_cp2

0x6644,	// (0x00034a3f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6644,	// (0x00034a3f) list_single_2graphic_pane_t1_cp2

0x3eaa,	// (0x000322a5) list_highlight_pane_g10_cp1

0x6211,	// (0x0003460c) list_highlight_pane_g1_cp1

0x6219,	// (0x00034614) list_highlight_pane_g2_cp1

0x6221,	// (0x0003461c) list_highlight_pane_g3_cp1

0x6229,	// (0x00034624) list_highlight_pane_g4_cp1

0x6231,	// (0x0003462c) list_highlight_pane_g5_cp1

0x6239,	// (0x00034634) list_highlight_pane_g6_cp1

0x6241,	// (0x0003463c) list_highlight_pane_g7_cp1

0x6249,	// (0x00034644) list_highlight_pane_g8_cp1

0x6251,	// (0x0003464c) list_highlight_pane_g9_cp1

0xc91f,	// (0x0003ad1a) form_field_slider_pane_t3

0xc92d,	// (0x0003ad28) form_field_slider_pane_t4

0x614d,	// (0x00034548) slider_form_pane_ParamLimits

0x614d,	// (0x00034548) slider_form_pane

0x3eb4,	// (0x000322af) control_abbreviations

0x3eb4,	// (0x000322af) control_conventions

0x3eb4,	// (0x000322af) control_definitions

0x3eb4,	// (0x000322af) format_table_attribute

0x687f,	// (0x00034c7a) bg_popup_preview_window_pane_g9

0x3eb4,	// (0x000322af) format_table_data2

0x3eb4,	// (0x000322af) format_table_data3

0x3eb4,	// (0x000322af) format_table_data_example

0x0008,

0x3eb4,	// (0x000322af) intro_purpose

0xf92d,	// (0x0003dd28) bg_popup_preview_window_pane_g

0x3eb4,	// (0x000322af) texts_category

0x3eb4,	// (0x000322af) texts_graphics

0x553c,	// (0x00033937) text_digital

0x554b,	// (0x00033946) text_primary

0x555a,	// (0x00033955) text_primary_small

0x5569,	// (0x00033964) text_secondary

0x5578,	// (0x00033973) text_title

0x6d17,	// (0x00035112) bg_passive_tab_pane_g1_cp3_srt

0x525b,	// (0x00033656) bg_passive_tab_pane_g2_cp3_srt

0x6d0e,	// (0x00035109) bg_passive_tab_pane_g3_cp3_srt

0x3f10,	// (0x0003230b) bg_active_tab_pane_cp3_srt_ParamLimits

0x3f10,	// (0x0003230b) bg_active_tab_pane_cp3_srt

0x6d20,	// (0x0003511b) tabs_4_active_pane_srt_g1

0xcc76,	// (0x0003b071) tabs_4_active_pane_srt_t1_ParamLimits

0xcc76,	// (0x0003b071) tabs_4_active_pane_srt_t1

0x6d17,	// (0x00035112) bg_active_tab_pane_g1_cp3_copy1

0x525b,	// (0x00033656) bg_active_tab_pane_g2_cp3_copy1

0x6d0e,	// (0x00035109) bg_active_tab_pane_g3_cp3_copy1

0x3f10,	// (0x0003230b) tabs_2_long_active_pane_srt_ParamLimits

0x3f10,	// (0x0003230b) tabs_2_long_active_pane_srt

0x3f10,	// (0x0003230b) tabs_2_long_passive_pane_srt_ParamLimits

0x3f10,	// (0x0003230b) tabs_2_long_passive_pane_srt

0xa583,	// (0x0003897e) bg_passive_tab_pane_cp4_srt_ParamLimits

0xa583,	// (0x0003897e) bg_passive_tab_pane_cp4_srt

0x6c3d,	// (0x00035038) bg_passive_tab_pane_g1_cp4_srt

0x525b,	// (0x00033656) bg_passive_tab_pane_g2_cp4_srt

0x6c34,	// (0x0003502f) bg_passive_tab_pane_g3_cp4_srt

0x5a3d,	// (0x00033e38) bg_active_tab_pane_cp4_srt_ParamLimits

0x5a3d,	// (0x00033e38) bg_active_tab_pane_cp4_srt

0xca9a,	// (0x0003ae95) tabs_2_long_active_pane_srt_t1_ParamLimits

0xca9a,	// (0x0003ae95) tabs_2_long_active_pane_srt_t1

0x6c3d,	// (0x00035038) bg_active_tab_pane_g1_cp4_srt

0x525b,	// (0x00033656) bg_active_tab_pane_g2_cp4_srt

0x6c34,	// (0x0003502f) bg_active_tab_pane_g3_cp4_srt

0x3f02,	// (0x000322fd) tabs_3_long_active_pane_srt_ParamLimits

0x3f02,	// (0x000322fd) tabs_3_long_active_pane_srt

0x3f02,	// (0x000322fd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3f02,	// (0x000322fd) tabs_3_long_passive_pane_cp_srt

0x3f02,	// (0x000322fd) tabs_3_long_passive_pane_srt_ParamLimits

0x3f02,	// (0x000322fd) tabs_3_long_passive_pane_srt

0xa583,	// (0x0003897e) bg_passive_tab_pane_cp5_srt_ParamLimits

0xa583,	// (0x0003897e) bg_passive_tab_pane_cp5_srt

0x52b4,	// (0x000336af) bg_passive_tab_pane_g1_cp5_srt

0x525b,	// (0x00033656) bg_passive_tab_pane_g2_cp5_srt

0x52ab,	// (0x000336a6) bg_passive_tab_pane_g3_cp5_srt

0x5a3d,	// (0x00033e38) bg_active_tab_pane_cp5_srt_ParamLimits

0x5a3d,	// (0x00033e38) bg_active_tab_pane_cp5_srt

0xca88,	// (0x0003ae83) tabs_3_long_active_pane_srt_t1_ParamLimits

0xca88,	// (0x0003ae83) tabs_3_long_active_pane_srt_t1

0x52b4,	// (0x000336af) bg_active_tab_pane_g1_cp5_srt

0x525b,	// (0x00033656) bg_active_tab_pane_g2_cp5_srt

0x52ab,	// (0x000336a6) bg_active_tab_pane_g3_cp5_srt

0x6c26,	// (0x00035021) navi_text_pane_srt_t1

0x6c1e,	// (0x00035019) navi_icon_pane_srt_g1

0x567e,	// (0x00033a79) midp_editing_number_pane_srt

0x5587,	// (0x00033982) midp_ticker_pane_srt

0x5686,	// (0x00033a81) midp_ticker_pane_srt_g1

0x568e,	// (0x00033a89) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0003dbb2) midp_ticker_pane_srt_g

0x5696,	// (0x00033a91) midp_ticker_pane_srt_t1

0x6c0f,	// (0x0003500a) midp_editing_number_pane_t1_copy1

0xaaf2,	// (0x00038eed) listscroll_midp_pane

0xaaf2,	// (0x00038eed) midp_form_pane

0x558f,	// (0x0003398a) midp_info_popup_window_ParamLimits

0x558f,	// (0x0003398a) midp_info_popup_window

0x4c1a,	// (0x00033015) bg_popup_sub_pane_cp50_ParamLimits

0x4c1a,	// (0x00033015) bg_popup_sub_pane_cp50

0x5e96,	// (0x00034291) listscroll_midp_info_pane_ParamLimits

0x5e96,	// (0x00034291) listscroll_midp_info_pane

0x5e7e,	// (0x00034279) listscroll_form_midp_pane_ParamLimits

0x5e7e,	// (0x00034279) listscroll_form_midp_pane

0x5e8a,	// (0x00034285) scroll_bar_cp050

0xc907,	// (0x0003ad02) list_midp_pane

0x7590,	// (0x0003598b) signal_pane_g2_cp

0x5db0,	// (0x000341ab) listscroll_midp_info_pane_t1_ParamLimits

0x5db0,	// (0x000341ab) listscroll_midp_info_pane_t1

0x5dc8,	// (0x000341c3) listscroll_midp_info_pane_t2_ParamLimits

0x5dc8,	// (0x000341c3) listscroll_midp_info_pane_t2

0x5e06,	// (0x00034201) listscroll_midp_info_pane_t3_ParamLimits

0x5e06,	// (0x00034201) listscroll_midp_info_pane_t3

0x5e40,	// (0x0003423b) listscroll_midp_info_pane_t4_ParamLimits

0x5e40,	// (0x0003423b) listscroll_midp_info_pane_t4

0x0003,

0xf868,	// (0x0003dc63) listscroll_midp_info_pane_t_ParamLimits

0xf868,	// (0x0003dc63) listscroll_midp_info_pane_t

0x4c81,	// (0x0003307c) scroll_pane_cp21

0x5d4e,	// (0x00034149) form_midp_field_choice_group_pane

0x5d57,	// (0x00034152) form_midp_field_text_pane

0x5d96,	// (0x00034191) form_midp_field_time_pane

0x5d9e,	// (0x00034199) form_midp_gauge_slider_pane

0x5da7,	// (0x000341a2) form_midp_gauge_wait_pane

0x3eb4,	// (0x000322af) form_midp_image_pane

0x979e,	// (0x00037b99) list_single_midp_pane_ParamLimits

0x979e,	// (0x00037b99) list_single_midp_pane

0xc8d0,	// (0x0003accb) form_midp_field_text_pane_t1

0x5bf5,	// (0x00033ff0) input_focus_pane_cp050

0x5d3d,	// (0x00034138) list_midp_form_text_pane

0x5d0c,	// (0x00034107) form_midp_field_choice_group_pane_t1

0x5d1a,	// (0x00034115) input_focus_pane_cp051

0x5d2e,	// (0x00034129) list_midp_choice_pane

0x3eb4,	// (0x000322af) status_idle_pane

0x5cf0,	// (0x000340eb) form_midp_field_time_pane_t1

0x3eaa,	// (0x000322a5) wait_anim_pane_g2_copy1

0x5cfe,	// (0x000340f9) form_midp_field_time_pane_t2

0x0001,

0x55e8,	// (0x000339e3) aid_navinavi_width_2_pane

0xf863,	// (0x0003dc5e) form_midp_field_time_pane_t

0x3eb4,	// (0x000322af) input_focus_pane_cp052

0x3eb4,	// (0x000322af) bg_input_focus_pane_cp040

0x5ccc,	// (0x000340c7) form_midp_gauge_slider_pane_t1

0x5cda,	// (0x000340d5) form_midp_gauge_slider_pane_t2

0xc8b4,	// (0x0003acaf) form_midp_gauge_slider_pane_t3

0xc8c2,	// (0x0003acbd) form_midp_gauge_slider_pane_t4

0x0003,

0xf85a,	// (0x0003dc55) form_midp_gauge_slider_pane_t

0x5ce8,	// (0x000340e3) form_midp_slider_pane

0x3f10,	// (0x0003230b) bg_input_focus_pane_cp041_ParamLimits

0x3f10,	// (0x0003230b) bg_input_focus_pane_cp041

0x5c99,	// (0x00034094) form_midp_gauge_wait_pane_t1_ParamLimits

0x5c99,	// (0x00034094) form_midp_gauge_wait_pane_t1

0x5cab,	// (0x000340a6) form_midp_gauge_wait_pane_t2_ParamLimits

0x5cab,	// (0x000340a6) form_midp_gauge_wait_pane_t2

0x0001,

0xf855,	// (0x0003dc50) form_midp_gauge_wait_pane_t_ParamLimits

0xf855,	// (0x0003dc50) form_midp_gauge_wait_pane_t

0x5cbd,	// (0x000340b8) form_midp_wait_pane_ParamLimits

0x5cbd,	// (0x000340b8) form_midp_wait_pane

0x5c63,	// (0x0003405e) form_midp_image_pane_g1

0x5c6c,	// (0x00034067) form_midp_image_pane_t1

0x5c7b,	// (0x00034076) form_midp_image_pane_t2

0x5c8a,	// (0x00034085) form_midp_image_pane_t3

0x0002,

0xf84e,	// (0x0003dc49) form_midp_image_pane_t

0x5c5a,	// (0x00034055) list_single_midp_pane_g1

0x978f,	// (0x00037b8a) list_single_midp_pane_t1

0xc88c,	// (0x0003ac87) list_midp_form_item_pane_ParamLimits

0xc88c,	// (0x0003ac87) list_midp_form_item_pane

0x55a2,	// (0x0003399d) list_midp_form_item_pane_t1

0x55b1,	// (0x000339ac) midp_ticker_pane_g1

0x55bd,	// (0x000339b8) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0003db98) midp_ticker_pane_g

0xaba3,	// (0x00038f9e) midp_ticker_pane_t1

0xcc11,	// (0x0003b00c) midp_editing_number_pane_t1

0x6ca3,	// (0x0003509e) midp_editing_number_pane

0x6cb2,	// (0x000350ad) midp_ticker_pane

0x6bff,	// (0x00034ffa) ai_message_heading_pane

0x3eb4,	// (0x000322af) bg_popup_window_pane_cp14

0x6c07,	// (0x00035002) listscroll_ai_message_pane

0x6b89,	// (0x00034f84) ai_message_heading_pane_g1_ParamLimits

0x6b89,	// (0x00034f84) ai_message_heading_pane_g1

0x6b95,	// (0x00034f90) ai_message_heading_pane_g2_ParamLimits

0x6b95,	// (0x00034f90) ai_message_heading_pane_g2

0x6ba1,	// (0x00034f9c) ai_message_heading_pane_g3_ParamLimits

0x6ba1,	// (0x00034f9c) ai_message_heading_pane_g3

0x6bad,	// (0x00034fa8) ai_message_heading_pane_g4_ParamLimits

0x6bad,	// (0x00034fa8) ai_message_heading_pane_g4

0x0003,

0xf98f,	// (0x0003dd8a) ai_message_heading_pane_g_ParamLimits

0xf98f,	// (0x0003dd8a) ai_message_heading_pane_g

0x6bb9,	// (0x00034fb4) ai_message_heading_pane_t1_ParamLimits

0x6bb9,	// (0x00034fb4) ai_message_heading_pane_t1

0x6bd3,	// (0x00034fce) ai_message_heading_pane_t2_ParamLimits

0x6bd3,	// (0x00034fce) ai_message_heading_pane_t2

0x0001,

0xf998,	// (0x0003dd93) ai_message_heading_pane_t_ParamLimits

0xf998,	// (0x0003dd93) ai_message_heading_pane_t

0x6be5,	// (0x00034fe0) bg_popup_heading_pane_cp1_ParamLimits

0x6be5,	// (0x00034fe0) bg_popup_heading_pane_cp1

0x6b77,	// (0x00034f72) list_ai_message_pane_ParamLimits

0x6b77,	// (0x00034f72) list_ai_message_pane

0x4c81,	// (0x0003307c) scroll_pane_cp10

0x6b13,	// (0x00034f0e) list_ai_message_pane_g1

0x6b1b,	// (0x00034f16) list_ai_message_pane_g2

0x0001,

0xf96c,	// (0x0003dd67) list_ai_message_pane_g

0x6b23,	// (0x00034f1e) list_ai_message_pane_t1_ParamLimits

0x6b23,	// (0x00034f1e) list_ai_message_pane_t1

0x6b38,	// (0x00034f33) list_ai_message_pane_t2_ParamLimits

0x6b38,	// (0x00034f33) list_ai_message_pane_t2

0x6b4d,	// (0x00034f48) list_ai_message_pane_t3_ParamLimits

0x6b4d,	// (0x00034f48) list_ai_message_pane_t3

0x6b62,	// (0x00034f5d) list_ai_message_pane_t4_ParamLimits

0x6b62,	// (0x00034f5d) list_ai_message_pane_t4

0x0003,

0xf971,	// (0x0003dd6c) list_ai_message_pane_t_ParamLimits

0xf971,	// (0x0003dd6c) list_ai_message_pane_t

0xca73,	// (0x0003ae6e) cell_ai_soft_ind_pane_ParamLimits

0xca73,	// (0x0003ae6e) cell_ai_soft_ind_pane

0x55c9,	// (0x000339c4) cell_ai_soft_ind_pane_g1_ParamLimits

0x55c9,	// (0x000339c4) cell_ai_soft_ind_pane_g1

0x3eb4,	// (0x000322af) grid_highlight_cp1

0x55d6,	// (0x000339d1) text_secondary_cp56_ParamLimits

0x55d6,	// (0x000339d1) text_secondary_cp56

0x6ae8,	// (0x00034ee3) example_general_pane_ParamLimits

0x6ae8,	// (0x00034ee3) example_general_pane

0x6af4,	// (0x00034eef) example_parent_pane_g1_ParamLimits

0x6af4,	// (0x00034eef) example_parent_pane_g1

0x6b00,	// (0x00034efb) example_parent_pane_t1_ParamLimits

0x6b00,	// (0x00034efb) example_parent_pane_t1

0xb0ea,	// (0x000394e5) popup_preview_text_window_ParamLimits

0xb0ea,	// (0x000394e5) popup_preview_text_window

0x54b8,	// (0x000338b3) list_single_pane_cp2_g4

0x473c,	// (0x00032b37) bg_popup_preview_window_pane_ParamLimits

0x473c,	// (0x00032b37) bg_popup_preview_window_pane

0x6887,	// (0x00034c82) popup_preview_text_window_t1_ParamLimits

0x6887,	// (0x00034c82) popup_preview_text_window_t1

0x68a5,	// (0x00034ca0) popup_preview_text_window_t2_ParamLimits

0x68a5,	// (0x00034ca0) popup_preview_text_window_t2

0x68ee,	// (0x00034ce9) popup_preview_text_window_t3_ParamLimits

0x68ee,	// (0x00034ce9) popup_preview_text_window_t3

0x6933,	// (0x00034d2e) popup_preview_text_window_t4_ParamLimits

0x6933,	// (0x00034d2e) popup_preview_text_window_t4

0x0004,

0xf940,	// (0x0003dd3b) popup_preview_text_window_t_ParamLimits

0xf940,	// (0x0003dd3b) popup_preview_text_window_t

0x69b1,	// (0x00034dac) scroll_pane_cp11

0x5b05,	// (0x00033f00) bg_popup_preview_window_pane_g1

0x6829,	// (0x00034c24) bg_popup_preview_window_pane_g2

0x6831,	// (0x00034c2c) bg_popup_preview_window_pane_g3

0x6839,	// (0x00034c34) bg_popup_preview_window_pane_g4

0x685f,	// (0x00034c5a) bg_popup_preview_window_pane_g5

0x6867,	// (0x00034c62) bg_popup_preview_window_pane_g6

0x686f,	// (0x00034c6a) bg_popup_preview_window_pane_g7

0x6877,	// (0x00034c72) bg_popup_preview_window_pane_g8

0x9d26,	// (0x00038121) aid_popup_width_pane

0xb0c8,	// (0x000394c3) popup_midp_note_alarm_window_ParamLimits

0xb0c8,	// (0x000394c3) popup_midp_note_alarm_window

0x4b56,	// (0x00032f51) data_form_pane_ParamLimits

0x9497,	// (0x00037892) form_field_data_pane_g1

0x94a1,	// (0x0003789c) form_field_data_pane_t1_ParamLimits

0x4b62,	// (0x00032f5d) input_focus_pane_ParamLimits

0x4b70,	// (0x00032f6b) data_form_wide_pane_ParamLimits

0x94b9,	// (0x000378b4) form_field_data_wide_pane_g1

0x94c5,	// (0x000378c0) form_field_data_wide_pane_t1_ParamLimits

0x48dd,	// (0x00032cd8) input_focus_pane_cp6_ParamLimits

0xa54a,	// (0x00038945) input_popup_find_pane_g1_ParamLimits

0xa54a,	// (0x00038945) input_popup_find_pane_g1

0xa6a1,	// (0x00038a9c) aid_navi_side_left_pane

0xa6b6,	// (0x00038ab1) aid_navi_side_right_pane

0x62ee,	// (0x000346e9) bg_popup_window_pane_cp30_ParamLimits

0x62ee,	// (0x000346e9) bg_popup_window_pane_cp30

0x6368,	// (0x00034763) popup_midp_note_alarm_window_g1_ParamLimits

0x6368,	// (0x00034763) popup_midp_note_alarm_window_g1

0x6398,	// (0x00034793) popup_midp_note_alarm_window_t1_ParamLimits

0x6398,	// (0x00034793) popup_midp_note_alarm_window_t1

0x6439,	// (0x00034834) popup_midp_note_alarm_window_t2_ParamLimits

0x6439,	// (0x00034834) popup_midp_note_alarm_window_t2

0x64e7,	// (0x000348e2) popup_midp_note_alarm_window_t3_ParamLimits

0x64e7,	// (0x000348e2) popup_midp_note_alarm_window_t3

0x6519,	// (0x00034914) popup_midp_note_alarm_window_t4_ParamLimits

0x6519,	// (0x00034914) popup_midp_note_alarm_window_t4

0x653f,	// (0x0003493a) popup_midp_note_alarm_window_t5_ParamLimits

0x653f,	// (0x0003493a) popup_midp_note_alarm_window_t5

0x000a,

0xf8dd,	// (0x0003dcd8) popup_midp_note_alarm_window_t_ParamLimits

0xf8dd,	// (0x0003dcd8) popup_midp_note_alarm_window_t

0x65eb,	// (0x000349e6) wait_bar_pane_cp1_ParamLimits

0x65eb,	// (0x000349e6) wait_bar_pane_cp1

0x3eb4,	// (0x000322af) wait_anim_pane_copy1

0x3eb4,	// (0x000322af) wait_border_pane_copy1

0x600e,	// (0x00034409) wait_border_pane_g1_copy1

0x94df,	// (0x000378da) form_field_popup_pane_g1

0x94e7,	// (0x000378e2) form_field_popup_pane_t1_ParamLimits

0x4b62,	// (0x00032f5d) input_focus_pane_cp7_ParamLimits

0x4b9c,	// (0x00032f97) list_form_pane_ParamLimits

0x94ff,	// (0x000378fa) form_field_popup_wide_pane_g1

0x9507,	// (0x00037902) form_field_popup_wide_pane_t1_ParamLimits

0x4b62,	// (0x00032f5d) input_focus_pane_cp8_ParamLimits

0x4ba8,	// (0x00032fa3) list_form_wide_pane_ParamLimits

0x6d47,	// (0x00035142) aid_size_cell_graphic_pane

0x9591,	// (0x0003798c) data_form_pane_t1_ParamLimits

0x97f1,	// (0x00037bec) data_form_wide_pane_t1_ParamLimits

0xc591,	// (0x0003a98c) bg_status_flat_pane

0xa129,	// (0x00038524) title_pane_t1_ParamLimits

0x3eca,	// (0x000322c5) title_pane_t2_ParamLimits

0x3ef0,	// (0x000322eb) title_pane_t3_ParamLimits

0xf59b,	// (0x0003d996) title_pane_t_ParamLimits

0x502f,	// (0x0003342a) level_1_signal_ParamLimits

0x503c,	// (0x00033437) level_2_signal_ParamLimits

0x5049,	// (0x00033444) level_3_signal_ParamLimits

0x5056,	// (0x00033451) level_4_signal_ParamLimits

0x5063,	// (0x0003345e) level_5_signal_ParamLimits

0x5070,	// (0x0003346b) level_6_signal_ParamLimits

0x507d,	// (0x00033478) level_7_signal_ParamLimits

0x502f,	// (0x0003342a) level_1_battery_ParamLimits

0x503c,	// (0x00033437) level_2_battery_ParamLimits

0x5049,	// (0x00033444) level_3_battery_ParamLimits

0x5056,	// (0x00033451) level_4_battery_ParamLimits

0x5063,	// (0x0003345e) level_5_battery_ParamLimits

0x5070,	// (0x0003346b) level_6_battery_ParamLimits

0x507d,	// (0x00033478) level_7_battery_ParamLimits

0x6211,	// (0x0003460c) bg_status_flat_pane_g1

0x6219,	// (0x00034614) bg_status_flat_pane_g2

0x6221,	// (0x0003461c) bg_status_flat_pane_g3

0x6229,	// (0x00034624) bg_status_flat_pane_g4

0x6231,	// (0x0003462c) bg_status_flat_pane_g5

0x6239,	// (0x00034634) bg_status_flat_pane_g6

0x6241,	// (0x0003463c) bg_status_flat_pane_g7

0xa199,	// (0x00038594) tabs_3_active_pane_t1_ParamLimits

0xa199,	// (0x00038594) tabs_3_passive_pane_t1_ParamLimits

0xa1b3,	// (0x000385ae) tabs_4_active_pane_t1_ParamLimits

0xa1b3,	// (0x000385ae) tabs_4_1_passive_pane_t1_ParamLimits

0xa55e,	// (0x00038959) tabs_2_active_pane_t1_ParamLimits

0xa55e,	// (0x00038959) tabs_2_passive_pane_t1_ParamLimits

0x5a3d,	// (0x00033e38) bg_active_tab_pane_cp4_ParamLimits

0xa570,	// (0x0003896b) tabs_2_long_active_pane_t1_ParamLimits

0xa583,	// (0x0003897e) bg_passive_tab_pane_cp4_ParamLimits

0xb241,	// (0x0003963c) list_single_midp_graphic_pane_t1_ParamLimits

0x5a3d,	// (0x00033e38) bg_active_tab_pane_cp5_ParamLimits

0xa58f,	// (0x0003898a) tabs_3_long_active_pane_t1_ParamLimits

0xa583,	// (0x0003897e) bg_passive_tab_pane_cp5_ParamLimits

0xb241,	// (0x0003963c) list_single_midp_graphic_pane_t1

0xc591,	// (0x0003a98c) bg_status_flat_pane_ParamLimits

0x59a6,	// (0x00033da1) indicator_pane_cp2_ParamLimits

0x59a6,	// (0x00033da1) indicator_pane_cp2

0xc6d4,	// (0x0003aacf) navi_pane_srt_ParamLimits

0xc6d4,	// (0x0003aacf) navi_pane_srt

0x59ce,	// (0x00033dc9) popup_clock_digital_analogue_window_cp1

0x45a5,	// (0x000329a0) indicator_pane_t1

0x5587,	// (0x00033982) copy_highlight_pane

0x5587,	// (0x00033982) cursor_graphics_pane

0x5587,	// (0x00033982) graphic_within_text_pane

0x5587,	// (0x00033982) link_highlight_pane

0x6974,	// (0x00034d6f) popup_preview_text_window_t5_ParamLimits

0x6974,	// (0x00034d6f) popup_preview_text_window_t5

0x55f0,	// (0x000339eb) cursor_digital_pane

0x55f0,	// (0x000339eb) cursor_primary_pane

0x5601,	// (0x000339fc) cursor_primary_small_pane

0x5609,	// (0x00033a04) cursor_secondary_pane

0x5611,	// (0x00033a0c) cursor_title_pane

0x55f0,	// (0x000339eb) link_highlight_digital_pane

0x55f8,	// (0x000339f3) link_highlight_primary_pane

0x5601,	// (0x000339fc) link_highlight_primary_small_pane

0x5609,	// (0x00033a04) link_highlight_secondary_pane

0x5611,	// (0x00033a0c) link_highlight_title_pane

0x55f0,	// (0x000339eb) copy_highlight_digital_pane

0x55f0,	// (0x000339eb) copy_highlight_primary_pane

0x5601,	// (0x000339fc) copy_highlight_primary_small_pane

0x5609,	// (0x00033a04) copy_highlight_secondary_pane

0x5611,	// (0x00033a0c) copy_highlight_title_pane

0x5609,	// (0x00033a04) graphic_text_digital_pane

0x6291,	// (0x0003468c) graphic_text_primary_pane

0x629a,	// (0x00034695) graphic_text_primary_small_pane

0x5601,	// (0x000339fc) graphic_text_secondary_pane

0x55f0,	// (0x000339eb) graphic_text_title_pane

0xabb5,	// (0x00038fb0) cursor_primary_pane_g1

0x6283,	// (0x0003467e) cursor_text_primary_t1

0xc94f,	// (0x0003ad4a) cursor_primary_small_pane_g1

0x6275,	// (0x00034670) cursor_text_primary_small_t1

0xc945,	// (0x0003ad40) cursor_primary_small_pane_g1_copy1

0x6267,	// (0x00034662) cursor_text_primary_small_t1_copy1

0x6259,	// (0x00034654) cursor_text_title_t1

0xc93b,	// (0x0003ad36) cursor_title_pane_g1

0xabb5,	// (0x00038fb0) cursor_digital_pane_g1

0x5619,	// (0x00033a14) cursor_text_digital_t1

0x563e,	// (0x00033a39) link_highlight_primary_pane_g1

0x6202,	// (0x000345fd) link_highlight_primary_pane_t1

0x5627,	// (0x00033a22) link_highlight_primary_small_pane_g1

0x562f,	// (0x00033a2a) link_highlight_primary_small_pane_t1

0x563e,	// (0x00033a39) link_highlight_secondary_pane_g1

0x5646,	// (0x00033a41) link_highlight_secondary_pane_t1

0x6176,	// (0x00034571) link_highlight_title_pane_g1

0x617e,	// (0x00034579) link_highlight_title_pane_t1

0x615f,	// (0x0003455a) link_highlight_digital_pane_g1

0x6167,	// (0x00034562) link_highlight_digital_pane_t1

0x6053,	// (0x0003444e) copy_highlight_primary_pane_g1

0x605b,	// (0x00034456) copy_highlight_primary_pane_t1

0x602d,	// (0x00034428) copy_highlight_primary_small_pane_g1

0x6044,	// (0x0003443f) copy_highlight_primary_small_pane_t1

0x5655,	// (0x00033a50) copy_highlight_secondary_pane_g1

0x565d,	// (0x00033a58) copy_highlight_secondary_pane_t1

0x602d,	// (0x00034428) copy_highlight_title_pane_g1

0x6035,	// (0x00034430) copy_highlight_title_pane_t1

0x6053,	// (0x0003444e) copy_highlight_digital_pane_g1

0x6ecd,	// (0x000352c8) copy_highlight_digital_pane_t1

0x6e21,	// (0x0003521c) graphic_text_primary_pane_g1

0x6eb1,	// (0x000352ac) graphic_text_primary_pane_t1

0x6ebf,	// (0x000352ba) graphic_text_primary_pane_t2

0x0001,

0xfa0c,	// (0x0003de07) graphic_text_primary_pane_t

0x6e8d,	// (0x00035288) graphic_text_primary_small_pane_g1

0x6e95,	// (0x00035290) graphic_text_primary_small_pane_t1

0x6ea3,	// (0x0003529e) graphic_text_primary_small_pane_t2

0x0001,

0xfa07,	// (0x0003de02) graphic_text_primary_small_pane_t

0x6e69,	// (0x00035264) graphic_text_secondary_pane_g1

0x6e71,	// (0x0003526c) graphic_text_secondary_pane_t1

0x6e7f,	// (0x0003527a) graphic_text_secondary_pane_t2

0x0001,

0xfa02,	// (0x0003ddfd) graphic_text_secondary_pane_t

0x6e45,	// (0x00035240) graphic_text_title_pane_g1

0x6e4d,	// (0x00035248) graphic_text_title_pane_t1

0x6e5b,	// (0x00035256) graphic_text_title_pane_t2

0x0001,

0xf9fd,	// (0x0003ddf8) graphic_text_title_pane_t

0x6e21,	// (0x0003521c) graphic_text_digital_pane_g1

0x6e29,	// (0x00035224) graphic_text_digital_pane_t1

0x6e37,	// (0x00035232) graphic_text_digital_pane_t2

0x0001,

0xf9f8,	// (0x0003ddf3) graphic_text_digital_pane_t

0x3f10,	// (0x0003230b) navi_icon_pane_srt_ParamLimits

0x3f10,	// (0x0003230b) navi_icon_pane_srt

0x3eb4,	// (0x000322af) navi_midp_pane_srt

0x3eb4,	// (0x000322af) navi_navi_pane_srt

0x3f10,	// (0x0003230b) navi_text_pane_srt_ParamLimits

0x3f10,	// (0x0003230b) navi_text_pane_srt

0x6dec,	// (0x000351e7) navi_navi_icon_text_pane_srt

0x6e06,	// (0x00035201) navi_navi_pane_srt_g1_ParamLimits

0x6e06,	// (0x00035201) navi_navi_pane_srt_g1

0x6df4,	// (0x000351ef) navi_navi_pane_srt_g2_ParamLimits

0x6df4,	// (0x000351ef) navi_navi_pane_srt_g2

0x0001,

0xf9f3,	// (0x0003ddee) navi_navi_pane_srt_g_ParamLimits

0xf9f3,	// (0x0003ddee) navi_navi_pane_srt_g

0x6e18,	// (0x00035213) navi_navi_tabs_pane_srt

0x6dec,	// (0x000351e7) navi_navi_text_pane_srt

0x6dec,	// (0x000351e7) navi_navi_volume_pane_srt

0x6ddd,	// (0x000351d8) navi_navi_text_pane_srt_t1

0xb65f,	// (0x00039a5a) navi_navi_volume_pane_srt_g1

0xb667,	// (0x00039a62) volume_small_pane_srt_ParamLimits

0xb667,	// (0x00039a62) volume_small_pane_srt

0xabbf,	// (0x00038fba) volume_small_pane_srt_g1_ParamLimits

0xabbf,	// (0x00038fba) volume_small_pane_srt_g1

0xabcf,	// (0x00038fca) volume_small_pane_srt_g2_ParamLimits

0xabcf,	// (0x00038fca) volume_small_pane_srt_g2

0xabe0,	// (0x00038fdb) volume_small_pane_srt_g3_ParamLimits

0xabe0,	// (0x00038fdb) volume_small_pane_srt_g3

0xabf1,	// (0x00038fec) volume_small_pane_srt_g4_ParamLimits

0xabf1,	// (0x00038fec) volume_small_pane_srt_g4

0xac02,	// (0x00038ffd) volume_small_pane_srt_g5_ParamLimits

0xac02,	// (0x00038ffd) volume_small_pane_srt_g5

0xac13,	// (0x0003900e) volume_small_pane_srt_g6_ParamLimits

0xac13,	// (0x0003900e) volume_small_pane_srt_g6

0xac24,	// (0x0003901f) volume_small_pane_srt_g7_ParamLimits

0xac24,	// (0x0003901f) volume_small_pane_srt_g7

0xac35,	// (0x00039030) volume_small_pane_srt_g8_ParamLimits

0xac35,	// (0x00039030) volume_small_pane_srt_g8

0xac46,	// (0x00039041) volume_small_pane_srt_g9_ParamLimits

0xac46,	// (0x00039041) volume_small_pane_srt_g9

0xac57,	// (0x00039052) volume_small_pane_srt_g10_ParamLimits

0xac57,	// (0x00039052) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0003db9d) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0003db9d) volume_small_pane_srt_g

0x47e5,	// (0x00032be0) query_popup_data_pane_cp2

0x6dc3,	// (0x000351be) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6dc3,	// (0x000351be) navi_navi_icon_text_pane_srt_t1

0x6291,	// (0x0003468c) navi_tabs_2_long_pane_srt

0x6291,	// (0x0003468c) navi_tabs_2_pane_srt

0x6291,	// (0x0003468c) navi_tabs_3_long_pane_srt

0x6291,	// (0x0003468c) navi_tabs_3_pane_srt

0x6291,	// (0x0003468c) navi_tabs_4_pane_srt

0xb63f,	// (0x00039a3a) tabs_2_active_pane_srt_ParamLimits

0xb63f,	// (0x00039a3a) tabs_2_active_pane_srt

0xb64f,	// (0x00039a4a) tabs_2_passive_pane_srt_ParamLimits

0xb64f,	// (0x00039a4a) tabs_2_passive_pane_srt

0x4cba,	// (0x000330b5) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4cba,	// (0x000330b5) bg_passive_tab_pane_cp1_srt

0x6daa,	// (0x000351a5) bg_passive_tab_pane_g1_cp1_srt

0x525b,	// (0x00033656) bg_passive_tab_pane_g2_cp1_srt

0x6da1,	// (0x0003519c) bg_passive_tab_pane_g3_cp1_srt

0x3f10,	// (0x0003230b) bg_active_tab_pane_cp1_srt_ParamLimits

0x3f10,	// (0x0003230b) bg_active_tab_pane_cp1_srt

0x6db3,	// (0x000351ae) tabs_2_active_pane_srt_g1

0xccef,	// (0x0003b0ea) tabs_2_active_pane_srt_t1_ParamLimits

0xccef,	// (0x0003b0ea) tabs_2_active_pane_srt_t1

0x6daa,	// (0x000351a5) bg_active_tab_pane_g1_cp1_srt

0x525b,	// (0x00033656) bg_active_tab_pane_g2_cp1_srt

0x6da1,	// (0x0003519c) bg_active_tab_pane_g3_cp1_srt

0xb60c,	// (0x00039a07) tabs_3_active_pane_srt_ParamLimits

0xb60c,	// (0x00039a07) tabs_3_active_pane_srt

0xb61d,	// (0x00039a18) tabs_3_passive_pane_cp_srt_ParamLimits

0xb61d,	// (0x00039a18) tabs_3_passive_pane_cp_srt

0xb62e,	// (0x00039a29) tabs_3_passive_pane_srt_ParamLimits

0xb62e,	// (0x00039a29) tabs_3_passive_pane_srt

0x4cba,	// (0x000330b5) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4cba,	// (0x000330b5) bg_passive_tab_pane_cp2_srt

0x5675,	// (0x00033a70) bg_passive_tab_pane_g1_cp2_srt

0x525b,	// (0x00033656) bg_passive_tab_pane_g2_cp2_srt

0x566c,	// (0x00033a67) bg_passive_tab_pane_g3_cp2_srt

0x3f10,	// (0x0003230b) bg_active_tab_pane_cp2_srt_ParamLimits

0x3f10,	// (0x0003230b) bg_active_tab_pane_cp2_srt

0x6d99,	// (0x00035194) tabs_3_active_pane_srt_g1

0xccdd,	// (0x0003b0d8) tabs_3_active_pane_srt_t1_ParamLimits

0xccdd,	// (0x0003b0d8) tabs_3_active_pane_srt_t1

0x5675,	// (0x00033a70) bg_active_tab_pane_g1_cp2_srt

0x525b,	// (0x00033656) bg_active_tab_pane_g2_cp2_srt

0x566c,	// (0x00033a67) bg_active_tab_pane_g3_cp2_srt

0xb5c4,	// (0x000399bf) tabs_4_active_pane_srt_ParamLimits

0xb5c4,	// (0x000399bf) tabs_4_active_pane_srt

0xb5d6,	// (0x000399d1) tabs_4_passive_pane_cp2_srt_ParamLimits

0xb5d6,	// (0x000399d1) tabs_4_passive_pane_cp2_srt

0x5799,	// (0x00033b94) aid_size_cell_toolbar

0xa583,	// (0x0003897e) main_idle_act_pane_ParamLimits

0x5865,	// (0x00033c60) popup_large_graphic_colour_window_ParamLimits

0xc49d,	// (0x0003a898) popup_toolbar_window_ParamLimits

0xc49d,	// (0x0003a898) popup_toolbar_window

0x6cc5,	// (0x000350c0) list_single_graphic_2heading_pane_ParamLimits

0x6cc5,	// (0x000350c0) list_single_graphic_2heading_pane

0x4e64,	// (0x0003325f) aid_size_cell_apps_grid_lsc_pane

0x4e76,	// (0x00033271) aid_size_cell_apps_grid_prt_pane

0x4cba,	// (0x000330b5) bg_wml_button_pane_cp1_ParamLimits

0x4cba,	// (0x000330b5) bg_wml_button_pane_cp1

0xc8d0,	// (0x0003accb) form_midp_field_text_pane_t1_ParamLimits

0x5bf5,	// (0x00033ff0) input_focus_pane_cp050_ParamLimits

0x5d3d,	// (0x00034138) list_midp_form_text_pane_ParamLimits

0x5d1a,	// (0x00034115) input_focus_pane_cp051_ParamLimits

0x5d2e,	// (0x00034129) list_midp_choice_pane_ParamLimits

0xc836,	// (0x0003ac31) list_single_2graphic_pane_cp3_ParamLimits

0xc836,	// (0x0003ac31) list_single_2graphic_pane_cp3

0xc85a,	// (0x0003ac55) list_single_midp_graphic_pane_ParamLimits

0xc85a,	// (0x0003ac55) list_single_midp_graphic_pane

0x96d7,	// (0x00037ad2) list_single_graphic_2heading_pane_g1_ParamLimits

0x96d7,	// (0x00037ad2) list_single_graphic_2heading_pane_g1

0x96e3,	// (0x00037ade) list_single_graphic_2heading_pane_g4_ParamLimits

0x96e3,	// (0x00037ade) list_single_graphic_2heading_pane_g4

0x96ef,	// (0x00037aea) list_single_graphic_2heading_pane_g5_ParamLimits

0x96ef,	// (0x00037aea) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0003dbf0) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0003dbf0) list_single_graphic_2heading_pane_g

0x96fb,	// (0x00037af6) list_single_graphic_2heading_pane_t1_ParamLimits

0x96fb,	// (0x00037af6) list_single_graphic_2heading_pane_t1

0x970f,	// (0x00037b0a) list_single_graphic_2heading_pane_t2_ParamLimits

0x970f,	// (0x00037b0a) list_single_graphic_2heading_pane_t2

0x972b,	// (0x00037b26) list_single_graphic_2heading_pane_t3_ParamLimits

0x972b,	// (0x00037b26) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0003dbf7) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0003dbf7) list_single_graphic_2heading_pane_t

0x5a13,	// (0x00033e0e) bg_popup_sub_pane_cp2

0x5a6d,	// (0x00033e68) grid_toobar_pane

0xb1b0,	// (0x000395ab) cell_toolbar_pane_ParamLimits

0xb1b0,	// (0x000395ab) cell_toolbar_pane

0x5aa9,	// (0x00033ea4) cell_toolbar_pane_g1_ParamLimits

0x5aa9,	// (0x00033ea4) cell_toolbar_pane_g1

0x5abd,	// (0x00033eb8) cell_toolbar_pane_g2_ParamLimits

0x5abd,	// (0x00033eb8) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0003dc05) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0003dc05) cell_toolbar_pane_g

0x5adf,	// (0x00033eda) grid_highlight_pane_cp2_ParamLimits

0x5adf,	// (0x00033eda) grid_highlight_pane_cp2

0x5af9,	// (0x00033ef4) toolbar_button_pane

0x5b05,	// (0x00033f00) toolbar_button_pane_g1

0x5b15,	// (0x00033f10) toolbar_button_pane_g2

0x5b0d,	// (0x00033f08) toolbar_button_pane_g3

0x5b25,	// (0x00033f20) toolbar_button_pane_g4

0x5b1d,	// (0x00033f18) toolbar_button_pane_g5

0x5b2d,	// (0x00033f28) toolbar_button_pane_g6

0x5b35,	// (0x00033f30) toolbar_button_pane_g7

0x5b45,	// (0x00033f40) toolbar_button_pane_g8

0x5b3d,	// (0x00033f38) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0003dc0a) toolbar_button_pane_g

0xb1f4,	// (0x000395ef) list_single_2graphic_pane_g1_cp3_ParamLimits

0xb1f4,	// (0x000395ef) list_single_2graphic_pane_g1_cp3

0xb200,	// (0x000395fb) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb200,	// (0x000395fb) list_single_2graphic_pane_g2_cp3

0xb211,	// (0x0003960c) list_single_2graphic_pane_g3_cp3

0xb219,	// (0x00039614) list_single_2graphic_pane_g4_cp3_ParamLimits

0xb219,	// (0x00039614) list_single_2graphic_pane_g4_cp3

0xb225,	// (0x00039620) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb225,	// (0x00039620) list_single_2graphic_pane_t1_cp3

0x5a4b,	// (0x00033e46) list_single_midp_graphic_pane_g2_ParamLimits

0x5a4b,	// (0x00033e46) list_single_midp_graphic_pane_g2

0x96c7,	// (0x00037ac2) aid_zoom_text_primary

0xade5,	// (0x000391e0) aid_zoom_text_secondary

0x5729,	// (0x00033b24) status_small_pane_g7_ParamLimits

0x5729,	// (0x00033b24) status_small_pane_g7

0x574c,	// (0x00033b47) status_small_pane_t1_ParamLimits

0xa10c,	// (0x00038507) title_pane_g2

0x0003,

0xf592,	// (0x0003d98d) title_pane_g

0xa36a,	// (0x00038765) aid_size_cell_colour_1_pane_ParamLimits

0xa36a,	// (0x00038765) aid_size_cell_colour_1_pane

0xa37e,	// (0x00038779) aid_size_cell_colour_2_pane_ParamLimits

0xa37e,	// (0x00038779) aid_size_cell_colour_2_pane

0xa392,	// (0x0003878d) aid_size_cell_colour_3_pane_ParamLimits

0xa392,	// (0x0003878d) aid_size_cell_colour_3_pane

0xa3a6,	// (0x000387a1) aid_size_cell_colour_4_pane_ParamLimits

0xa3a6,	// (0x000387a1) aid_size_cell_colour_4_pane

0xa5dd,	// (0x000389d8) title_pane_stacon_g1_ParamLimits

0xa5dd,	// (0x000389d8) title_pane_stacon_g1

0x60b2,	// (0x000344ad) popup_note_wait_window_g3_ParamLimits

0x60b2,	// (0x000344ad) popup_note_wait_window_g3

0x6128,	// (0x00034523) popup_note_wait_window_t5_ParamLimits

0x6128,	// (0x00034523) popup_note_wait_window_t5

0x3eb4,	// (0x000322af) main_feb_china_hwr_fs_writing_pane

0xae63,	// (0x0003925e) popup_feb_china_hwr_fs_window_ParamLimits

0xae63,	// (0x0003925e) popup_feb_china_hwr_fs_window

0xb257,	// (0x00039652) aid_size_cell_hwr_fs_ParamLimits

0xb257,	// (0x00039652) aid_size_cell_hwr_fs

0x5bf5,	// (0x00033ff0) bg_popup_sub_pane_cp3_ParamLimits

0x5bf5,	// (0x00033ff0) bg_popup_sub_pane_cp3

0xb26c,	// (0x00039667) grid_hwr_fs_pane_ParamLimits

0xb26c,	// (0x00039667) grid_hwr_fs_pane

0xb284,	// (0x0003967f) linegrid_hwr_fs_pane_ParamLimits

0xb284,	// (0x0003967f) linegrid_hwr_fs_pane

0xb294,	// (0x0003968f) cell_hwr_fs_pane_ParamLimits

0xb294,	// (0x0003968f) cell_hwr_fs_pane

0x5c01,	// (0x00033ffc) linegrid_hwr_fs_pane_g1_ParamLimits

0x5c01,	// (0x00033ffc) linegrid_hwr_fs_pane_g1

0xc80a,	// (0x0003ac05) linegrid_hwr_fs_pane_g2_ParamLimits

0xc80a,	// (0x0003ac05) linegrid_hwr_fs_pane_g2

0x5c0d,	// (0x00034008) linegrid_hwr_fs_pane_g3_ParamLimits

0x5c0d,	// (0x00034008) linegrid_hwr_fs_pane_g3

0xb2b6,	// (0x000396b1) linegrid_hwr_fs_pane_g4_ParamLimits

0xb2b6,	// (0x000396b1) linegrid_hwr_fs_pane_g4

0xb2d0,	// (0x000396cb) linegrid_hwr_fs_pane_g5_ParamLimits

0xb2d0,	// (0x000396cb) linegrid_hwr_fs_pane_g5

0x0004,

0xf83a,	// (0x0003dc35) linegrid_hwr_fs_pane_g_ParamLimits

0xf83a,	// (0x0003dc35) linegrid_hwr_fs_pane_g

0x5c19,	// (0x00034014) cell_hwr_fs_pane_g1_ParamLimits

0x5c19,	// (0x00034014) cell_hwr_fs_pane_g1

0x59df,	// (0x00033dda) cell_hwr_fs_pane_g2_ParamLimits

0x59df,	// (0x00033dda) cell_hwr_fs_pane_g2

0xc81c,	// (0x0003ac17) cell_hwr_fs_pane_g3_ParamLimits

0xc81c,	// (0x0003ac17) cell_hwr_fs_pane_g3

0xc829,	// (0x0003ac24) cell_hwr_fs_pane_g4_ParamLimits

0xc829,	// (0x0003ac24) cell_hwr_fs_pane_g4

0x0003,

0xf845,	// (0x0003dc40) cell_hwr_fs_pane_g_ParamLimits

0xf845,	// (0x0003dc40) cell_hwr_fs_pane_g

0xb2e6,	// (0x000396e1) cell_hwr_fs_pane_t1

0x3eb4,	// (0x000322af) grid_highlight_pane_cp6

0x3eb4,	// (0x000322af) main_idle_act2_pane

0x4c68,	// (0x00033063) aid_inside_area_popup_secondary

0xc96f,	// (0x0003ad6a) aid_inside_area_window_primary_ParamLimits

0xc96f,	// (0x0003ad6a) aid_inside_area_window_primary

0x6edc,	// (0x000352d7) ai2_news_ticker_pane

0x6ee4,	// (0x000352df) aid_size_cell_ai1_link_ParamLimits

0x6ee4,	// (0x000352df) aid_size_cell_ai1_link

0xcd01,	// (0x0003b0fc) popup_ai2_data_window_ParamLimits

0xcd01,	// (0x0003b0fc) popup_ai2_data_window

0x6efe,	// (0x000352f9) popup_ai2_link_window_ParamLimits

0x6efe,	// (0x000352f9) popup_ai2_link_window

0x5bf5,	// (0x00033ff0) bg_popup_sub_pane_cp4_ParamLimits

0x5bf5,	// (0x00033ff0) bg_popup_sub_pane_cp4

0x6f12,	// (0x0003530d) grid_ai2_link_pane_ParamLimits

0x6f12,	// (0x0003530d) grid_ai2_link_pane

0x6f35,	// (0x00035330) popup_ai2_link_window_g1_ParamLimits

0x6f35,	// (0x00035330) popup_ai2_link_window_g1

0x6f41,	// (0x0003533c) popup_ai2_link_window_g2_ParamLimits

0x6f41,	// (0x0003533c) popup_ai2_link_window_g2

0x0001,

0xfa11,	// (0x0003de0c) popup_ai2_link_window_g_ParamLimits

0xfa11,	// (0x0003de0c) popup_ai2_link_window_g

0x6f50,	// (0x0003534b) ai2_mp_button_pane

0x6f58,	// (0x00035353) ai2_mp_volume_pane

0x5d1a,	// (0x00034115) bg_popup_sub_pane_cp5_ParamLimits

0x5d1a,	// (0x00034115) bg_popup_sub_pane_cp5

0x6f60,	// (0x0003535b) heading_ai2_gene_pane_ParamLimits

0x6f60,	// (0x0003535b) heading_ai2_gene_pane

0x6f6c,	// (0x00035367) list_ai2_gene_pane_ParamLimits

0x6f6c,	// (0x00035367) list_ai2_gene_pane

0x6fb4,	// (0x000353af) cell_ai2_link_pane_ParamLimits

0x6fb4,	// (0x000353af) cell_ai2_link_pane

0x6fca,	// (0x000353c5) cell_ai2_link_pane_g1

0x3eb4,	// (0x000322af) grid_highlight_pane_cp7

0xb67c,	// (0x00039a77) ai2_mp_volume_pane_g1

0x706f,	// (0x0003546a) ai2_mp_volume_pane_g2

0xcd2e,	// (0x0003b129) list_ai2_gene_pane_t1

0x7067,	// (0x00035462) ai2_mp_volume_pane_g3

0x0002,

0xfa2a,	// (0x0003de25) ai2_mp_volume_pane_g

0xb684,	// (0x00039a7f) volume_small_pane_cp3

0x7077,	// (0x00035472) aid_size_cell_ai2_button

0x707f,	// (0x0003547a) grid_ai2_button_pane

0x7088,	// (0x00035483) cell_ai2_button_pane_ParamLimits

0x7088,	// (0x00035483) cell_ai2_button_pane

0x3eaa,	// (0x000322a5) cell_ai2_button_pane_g1

0x3eb4,	// (0x000322af) grid_highlight_pane_cp8

0x7027,	// (0x00035422) ai2_gene_pane_t1_ParamLimits

0x7027,	// (0x00035422) ai2_gene_pane_t1

0xaddb,	// (0x000391d6) aid_height_parent_landscape

0xcaad,	// (0x0003aea8) aid_height_set_list

0x6841,	// (0x00034c3c) aid_size_parent

0x6d47,	// (0x00035142) aid_size_cell_graphic_pane_ParamLimits

0x6f7c,	// (0x00035377) popup_ai2_data_window_g1_ParamLimits

0x6f7c,	// (0x00035377) popup_ai2_data_window_g1

0x6f88,	// (0x00035383) ai2_news_ticker_pane_g1

0x6f90,	// (0x0003538b) ai2_news_ticker_pane_g2

0x0001,

0xfa16,	// (0x0003de11) ai2_news_ticker_pane_g

0x6f98,	// (0x00035393) ai2_news_ticker_pane_t1

0x6fa6,	// (0x000353a1) ai2_news_ticker_pane_t2

0x0001,

0xfa1b,	// (0x0003de16) ai2_news_ticker_pane_t

0x6fd3,	// (0x000353ce) heading_ai2_gene_pane_g1

0x6fdb,	// (0x000353d6) heading_ai2_gene_pane_t1_ParamLimits

0x6fdb,	// (0x000353d6) heading_ai2_gene_pane_t1

0x6ff0,	// (0x000353eb) list_highlight_pane_cp6

0xcd17,	// (0x0003b112) ai2_gene_pane_ParamLimits

0xcd17,	// (0x0003b112) ai2_gene_pane

0xcd3c,	// (0x0003b137) list_ai2_gene_pane_t2

0x0001,

0xfa20,	// (0x0003de1b) list_ai2_gene_pane_t

0x6ff8,	// (0x000353f3) list_highlight_pane_cp8_ParamLimits

0x6ff8,	// (0x000353f3) list_highlight_pane_cp8

0x7009,	// (0x00035404) ai2_gene_pane_g1_ParamLimits

0x7009,	// (0x00035404) ai2_gene_pane_g1

0x701b,	// (0x00035416) ai2_gene_pane_g2_ParamLimits

0x701b,	// (0x00035416) ai2_gene_pane_g2

0x0001,

0xfa25,	// (0x0003de20) ai2_gene_pane_g_ParamLimits

0xfa25,	// (0x0003de20) ai2_gene_pane_g

0x4af8,	// (0x00032ef3) scroll_pane_cp12

0xad9a,	// (0x00039195) control_pane_t3_ParamLimits

0xad9a,	// (0x00039195) control_pane_t3

0x573d,	// (0x00033b38) status_small_pane_g8_ParamLimits

0x573d,	// (0x00033b38) status_small_pane_g8

0xaeef,	// (0x000392ea) popup_find_window_ParamLimits

0xb0dc,	// (0x000394d7) popup_note_image_window_ParamLimits

0x9743,	// (0x00037b3e) list_double2_graphic_pane_vc_g1_ParamLimits

0x9743,	// (0x00037b3e) list_double2_graphic_pane_vc_g1

0x6f29,	// (0x00035324) list_double2_graphic_pane_vc_g2_ParamLimits

0x6f29,	// (0x00035324) list_double2_graphic_pane_vc_g2

0xb1e0,	// (0x000395db) list_double2_graphic_pane_vc_g3_ParamLimits

0xb1e0,	// (0x000395db) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0003dbfe) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0003dbfe) list_double2_graphic_pane_vc_g

0x974f,	// (0x00037b4a) list_double2_graphic_pane_vc_t1_ParamLimits

0x974f,	// (0x00037b4a) list_double2_graphic_pane_vc_t1

0x6f29,	// (0x00035324) list_single_heading_pane_vc_g1_ParamLimits

0x6f29,	// (0x00035324) list_single_heading_pane_vc_g1

0xb1e0,	// (0x000395db) list_single_heading_pane_vc_g2_ParamLimits

0xb1e0,	// (0x000395db) list_single_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0003dc1f) list_single_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0003dc1f) list_single_heading_pane_vc_g

0x9765,	// (0x00037b60) list_single_heading_pane_vc_t1_ParamLimits

0x9765,	// (0x00037b60) list_single_heading_pane_vc_t1

0x977b,	// (0x00037b76) list_single_heading_pane_vc_t2_ParamLimits

0x977b,	// (0x00037b76) list_single_heading_pane_vc_t2

0x0001,

0xf829,	// (0x0003dc24) list_single_heading_pane_vc_t_ParamLimits

0xf829,	// (0x0003dc24) list_single_heading_pane_vc_t

0x5b4d,	// (0x00033f48) list_setting_number_pane_vc_g1_ParamLimits

0x5b4d,	// (0x00033f48) list_setting_number_pane_vc_g1

0x5b59,	// (0x00033f54) list_setting_number_pane_vc_g2_ParamLimits

0x5b59,	// (0x00033f54) list_setting_number_pane_vc_g2

0x0001,

0xf82e,	// (0x0003dc29) list_setting_number_pane_vc_g_ParamLimits

0xf82e,	// (0x0003dc29) list_setting_number_pane_vc_g

0x5b65,	// (0x00033f60) list_setting_number_pane_vc_t1_ParamLimits

0x5b65,	// (0x00033f60) list_setting_number_pane_vc_t1

0x5b79,	// (0x00033f74) list_setting_number_pane_vc_t2_ParamLimits

0x5b79,	// (0x00033f74) list_setting_number_pane_vc_t2

0x5b95,	// (0x00033f90) list_setting_number_pane_vc_t3_ParamLimits

0x5b95,	// (0x00033f90) list_setting_number_pane_vc_t3

0x0002,

0xf833,	// (0x0003dc2e) list_setting_number_pane_vc_t_ParamLimits

0xf833,	// (0x0003dc2e) list_setting_number_pane_vc_t

0x5bbb,	// (0x00033fb6) set_value_pane_vc_ParamLimits

0x5bbb,	// (0x00033fb6) set_value_pane_vc

0x6cc5,	// (0x000350c0) list_double2_graphic_pane_vc_ParamLimits

0x6cc5,	// (0x000350c0) list_double2_graphic_pane_vc

0xb520,	// (0x0003991b) list_double2_large_graphic_pane_vc_ParamLimits

0xb520,	// (0x0003991b) list_double2_large_graphic_pane_vc

0x6cc5,	// (0x000350c0) list_double2_pane_vc_ParamLimits

0x6cc5,	// (0x000350c0) list_double2_pane_vc

0x6cc5,	// (0x000350c0) list_double_graphic_heading_pane_vc_ParamLimits

0x6cc5,	// (0x000350c0) list_double_graphic_heading_pane_vc

0x6cc5,	// (0x000350c0) list_double_graphic_pane_vc_ParamLimits

0x6cc5,	// (0x000350c0) list_double_graphic_pane_vc

0x6cc5,	// (0x000350c0) list_double_heading_pane_vc_ParamLimits

0x6cc5,	// (0x000350c0) list_double_heading_pane_vc

0xb520,	// (0x0003991b) list_double_large_graphic_pane_vc_ParamLimits

0xb520,	// (0x0003991b) list_double_large_graphic_pane_vc

0x6cc5,	// (0x000350c0) list_double_number_pane_vc_ParamLimits

0x6cc5,	// (0x000350c0) list_double_number_pane_vc

0x6cc5,	// (0x000350c0) list_double_pane_vc_ParamLimits

0x6cc5,	// (0x000350c0) list_double_pane_vc

0x6cc5,	// (0x000350c0) list_double_time_pane_vc_ParamLimits

0x6cc5,	// (0x000350c0) list_double_time_pane_vc

0x6cc5,	// (0x000350c0) list_setting_number_pane_vc_ParamLimits

0x6cc5,	// (0x000350c0) list_setting_number_pane_vc

0x6cc5,	// (0x000350c0) list_setting_pane_vc_ParamLimits

0x6cc5,	// (0x000350c0) list_setting_pane_vc

0x6cc5,	// (0x000350c0) list_single_graphic_heading_pane_vc_ParamLimits

0x6cc5,	// (0x000350c0) list_single_graphic_heading_pane_vc

0x6cc5,	// (0x000350c0) list_single_heading_pane_vc_ParamLimits

0x6cc5,	// (0x000350c0) list_single_heading_pane_vc

0xb531,	// (0x0003992c) list_single_number_heading_pane_vc_ParamLimits

0xb531,	// (0x0003992c) list_single_number_heading_pane_vc

0x9743,	// (0x00037b3e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9743,	// (0x00037b3e) list_double_graphic_heading_pane_vc_g1

0x6f29,	// (0x00035324) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6f29,	// (0x00035324) list_double_graphic_heading_pane_vc_g2

0xb1e0,	// (0x000395db) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb1e0,	// (0x000395db) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x0003dbfe) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003dbfe) list_double_graphic_heading_pane_vc_g

0x986a,	// (0x00037c65) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x986a,	// (0x00037c65) list_double_graphic_heading_pane_vc_t1

0x9765,	// (0x00037b60) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9765,	// (0x00037b60) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa31,	// (0x0003de2c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0003de2c) list_double_graphic_heading_pane_vc_t

0x5b4d,	// (0x00033f48) list_setting_pane_vc_g1_ParamLimits

0x5b4d,	// (0x00033f48) list_setting_pane_vc_g1

0x5b59,	// (0x00033f54) list_setting_pane_vc_g2_ParamLimits

0x5b59,	// (0x00033f54) list_setting_pane_vc_g2

0x0001,

0xf82e,	// (0x0003dc29) list_setting_pane_vc_g_ParamLimits

0xf82e,	// (0x0003dc29) list_setting_pane_vc_g

0x729e,	// (0x00035699) list_setting_pane_vc_t1_ParamLimits

0x729e,	// (0x00035699) list_setting_pane_vc_t1

0x72b2,	// (0x000356ad) list_setting_pane_vc_t2_ParamLimits

0x72b2,	// (0x000356ad) list_setting_pane_vc_t2

0x0001,

0xfa5f,	// (0x0003de5a) list_setting_pane_vc_t_ParamLimits

0xfa5f,	// (0x0003de5a) list_setting_pane_vc_t

0x5bbb,	// (0x00033fb6) set_value_pane_cp_vc_ParamLimits

0x5bbb,	// (0x00033fb6) set_value_pane_cp_vc

0x6f29,	// (0x00035324) list_single_number_heading_pane_vc_g1_ParamLimits

0x6f29,	// (0x00035324) list_single_number_heading_pane_vc_g1

0xb1e0,	// (0x000395db) list_single_number_heading_pane_vc_g2_ParamLimits

0xb1e0,	// (0x000395db) list_single_number_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0003dc1f) list_single_number_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0003dc1f) list_single_number_heading_pane_vc_g

0x9765,	// (0x00037b60) list_single_number_heading_pane_vc_t1_ParamLimits

0x9765,	// (0x00037b60) list_single_number_heading_pane_vc_t1

0x987e,	// (0x00037c79) list_single_number_heading_pane_vc_t2_ParamLimits

0x987e,	// (0x00037c79) list_single_number_heading_pane_vc_t2

0x9892,	// (0x00037c8d) list_single_number_heading_pane_vc_t3_ParamLimits

0x9892,	// (0x00037c8d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa64,	// (0x0003de5f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa64,	// (0x0003de5f) list_single_number_heading_pane_vc_t

0x9743,	// (0x00037b3e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9743,	// (0x00037b3e) list_single_graphic_heading_pane_vc_g1

0x6f29,	// (0x00035324) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6f29,	// (0x00035324) list_single_graphic_heading_pane_vc_g4

0xb1e0,	// (0x000395db) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xb1e0,	// (0x000395db) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0003dbfe) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003dbfe) list_single_graphic_heading_pane_vc_g

0x9765,	// (0x00037b60) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9765,	// (0x00037b60) list_single_graphic_heading_pane_vc_t1

0x98a4,	// (0x00037c9f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x98a4,	// (0x00037c9f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6b,	// (0x0003de66) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6b,	// (0x0003de66) list_single_graphic_heading_pane_vc_t

0x6f29,	// (0x00035324) list_double2_pane_vc_g1_ParamLimits

0x6f29,	// (0x00035324) list_double2_pane_vc_g1

0xb1e0,	// (0x000395db) list_double2_pane_vc_g2_ParamLimits

0xb1e0,	// (0x000395db) list_double2_pane_vc_g2

0x0001,

0xf824,	// (0x0003dc1f) list_double2_pane_vc_g_ParamLimits

0xf824,	// (0x0003dc1f) list_double2_pane_vc_g

0x98b8,	// (0x00037cb3) list_double2_pane_vc_t1_ParamLimits

0x98b8,	// (0x00037cb3) list_double2_pane_vc_t1

0xb68d,	// (0x00039a88) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb68d,	// (0x00039a88) list_double2_large_graphic_pane_vc_g1

0xb699,	// (0x00039a94) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb699,	// (0x00039a94) list_double2_large_graphic_pane_vc_g2

0xb6a5,	// (0x00039aa0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb6a5,	// (0x00039aa0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa70,	// (0x0003de6b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa70,	// (0x0003de6b) list_double2_large_graphic_pane_vc_g

0x98ce,	// (0x00037cc9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x98ce,	// (0x00037cc9) list_double2_large_graphic_pane_vc_t1

0xb6b1,	// (0x00039aac) list_double_time_pane_vc_g1_ParamLimits

0xb6b1,	// (0x00039aac) list_double_time_pane_vc_g1

0xb6bd,	// (0x00039ab8) list_double_time_pane_vc_g2_ParamLimits

0xb6bd,	// (0x00039ab8) list_double_time_pane_vc_g2

0x0001,

0xfa77,	// (0x0003de72) list_double_time_pane_vc_g_ParamLimits

0xfa77,	// (0x0003de72) list_double_time_pane_vc_g

0x98e4,	// (0x00037cdf) list_double_time_pane_vc_t1_ParamLimits

0x98e4,	// (0x00037cdf) list_double_time_pane_vc_t1

0x98fd,	// (0x00037cf8) list_double_time_pane_vc_t2_ParamLimits

0x98fd,	// (0x00037cf8) list_double_time_pane_vc_t2

0x993d,	// (0x00037d38) list_double_time_pane_vc_t3_ParamLimits

0x993d,	// (0x00037d38) list_double_time_pane_vc_t3

0x9955,	// (0x00037d50) list_double_time_pane_vc_t4_ParamLimits

0x9955,	// (0x00037d50) list_double_time_pane_vc_t4

0x0003,

0xfa7c,	// (0x0003de77) list_double_time_pane_vc_t_ParamLimits

0xfa7c,	// (0x0003de77) list_double_time_pane_vc_t

0x6f29,	// (0x00035324) list_double_pane_vc_g1_ParamLimits

0x6f29,	// (0x00035324) list_double_pane_vc_g1

0xb1e0,	// (0x000395db) list_double_pane_vc_g2_ParamLimits

0xb1e0,	// (0x000395db) list_double_pane_vc_g2

0x0001,

0xf824,	// (0x0003dc1f) list_double_pane_vc_g_ParamLimits

0xf824,	// (0x0003dc1f) list_double_pane_vc_g

0x9969,	// (0x00037d64) list_double_pane_vc_t1_ParamLimits

0x9969,	// (0x00037d64) list_double_pane_vc_t1

0x997b,	// (0x00037d76) list_double_pane_vc_t2_ParamLimits

0x997b,	// (0x00037d76) list_double_pane_vc_t2

0x0001,

0xfa85,	// (0x0003de80) list_double_pane_vc_t_ParamLimits

0xfa85,	// (0x0003de80) list_double_pane_vc_t

0x6f29,	// (0x00035324) list_double_number_pane_vc_g1_ParamLimits

0x6f29,	// (0x00035324) list_double_number_pane_vc_g1

0xb1e0,	// (0x000395db) list_double_number_pane_vc_g2_ParamLimits

0xb1e0,	// (0x000395db) list_double_number_pane_vc_g2

0x0001,

0xf824,	// (0x0003dc1f) list_double_number_pane_vc_g_ParamLimits

0xf824,	// (0x0003dc1f) list_double_number_pane_vc_g

0x9993,	// (0x00037d8e) list_double_number_pane_vc_t1_ParamLimits

0x9993,	// (0x00037d8e) list_double_number_pane_vc_t1

0x99a7,	// (0x00037da2) list_double_number_pane_vc_t2_ParamLimits

0x99a7,	// (0x00037da2) list_double_number_pane_vc_t2

0x997b,	// (0x00037d76) list_double_number_pane_vc_t3_ParamLimits

0x997b,	// (0x00037d76) list_double_number_pane_vc_t3

0x0002,

0xfa8a,	// (0x0003de85) list_double_number_pane_vc_t_ParamLimits

0xfa8a,	// (0x0003de85) list_double_number_pane_vc_t

0xb6c9,	// (0x00039ac4) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb6c9,	// (0x00039ac4) list_double_large_graphic_pane_vc_g1

0xb6d5,	// (0x00039ad0) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb6d5,	// (0x00039ad0) list_double_large_graphic_pane_vc_g2

0xb6a5,	// (0x00039aa0) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb6a5,	// (0x00039aa0) list_double_large_graphic_pane_vc_g3

0x99b9,	// (0x00037db4) list_double_large_graphic_pane_vc_g4_ParamLimits

0x99b9,	// (0x00037db4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa91,	// (0x0003de8c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa91,	// (0x0003de8c) list_double_large_graphic_pane_vc_g

0x99c5,	// (0x00037dc0) list_double_large_graphic_pane_vc_t1_ParamLimits

0x99c5,	// (0x00037dc0) list_double_large_graphic_pane_vc_t1

0x99d7,	// (0x00037dd2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x99d7,	// (0x00037dd2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9a,	// (0x0003de95) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9a,	// (0x0003de95) list_double_large_graphic_pane_vc_t

0x6f29,	// (0x00035324) list_double_heading_pane_vc_g1_ParamLimits

0x6f29,	// (0x00035324) list_double_heading_pane_vc_g1

0xb1e0,	// (0x000395db) list_double_heading_pane_vc_g2_ParamLimits

0xb1e0,	// (0x000395db) list_double_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0003dc1f) list_double_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0003dc1f) list_double_heading_pane_vc_g

0x99f0,	// (0x00037deb) list_double_heading_pane_vc_t1_ParamLimits

0x99f0,	// (0x00037deb) list_double_heading_pane_vc_t1

0x9765,	// (0x00037b60) list_double_heading_pane_vc_t2_ParamLimits

0x9765,	// (0x00037b60) list_double_heading_pane_vc_t2

0x0001,

0xfa9f,	// (0x0003de9a) list_double_heading_pane_vc_t_ParamLimits

0xfa9f,	// (0x0003de9a) list_double_heading_pane_vc_t

0x9743,	// (0x00037b3e) list_double_graphic_pane_vc_g1_ParamLimits

0x9743,	// (0x00037b3e) list_double_graphic_pane_vc_g1

0xb6e4,	// (0x00039adf) list_double_graphic_pane_vc_g2_ParamLimits

0xb6e4,	// (0x00039adf) list_double_graphic_pane_vc_g2

0xb6f3,	// (0x00039aee) list_double_graphic_pane_vc_g3_ParamLimits

0xb6f3,	// (0x00039aee) list_double_graphic_pane_vc_g3

0x0002,

0xfaa4,	// (0x0003de9f) list_double_graphic_pane_vc_g_ParamLimits

0xfaa4,	// (0x0003de9f) list_double_graphic_pane_vc_g

0x9a04,	// (0x00037dff) list_double_graphic_pane_vc_t1_ParamLimits

0x9a04,	// (0x00037dff) list_double_graphic_pane_vc_t1

0x997b,	// (0x00037d76) list_double_graphic_pane_vc_t2_ParamLimits

0x997b,	// (0x00037d76) list_double_graphic_pane_vc_t2

0x0001,

0xfaab,	// (0x0003dea6) list_double_graphic_pane_vc_t_ParamLimits

0xfaab,	// (0x0003dea6) list_double_graphic_pane_vc_t

0x9d32,	// (0x0003812d) aid_size_cell_fastswap

0x9d3a,	// (0x00038135) aid_size_cell_touch_ParamLimits

0x9d3a,	// (0x00038135) aid_size_cell_touch

0x9f95,	// (0x00038390) popup_fast_swap_wide_window_ParamLimits

0x9f95,	// (0x00038390) popup_fast_swap_wide_window

0xa09f,	// (0x0003849a) touch_pane_ParamLimits

0xa09f,	// (0x0003849a) touch_pane

0x4b4e,	// (0x00032f49) button_value_adjust_pane_cp2

0x93e3,	// (0x000377de) button_value_adjust_pane_cp4

0x9407,	// (0x00037802) form_field_data_pane_cp2

0x9428,	// (0x00037823) form_field_data_wide_pane_cp2

0x4ead,	// (0x000332a8) bg_scroll_pane_ParamLimits

0xa7c1,	// (0x00038bbc) scroll_handle_pane_ParamLimits

0xa7d5,	// (0x00038bd0) scroll_sc2_down_pane_ParamLimits

0xa7d5,	// (0x00038bd0) scroll_sc2_down_pane

0x4ede,	// (0x000332d9) scroll_sc2_up_pane_ParamLimits

0x4ede,	// (0x000332d9) scroll_sc2_up_pane

0xce7e,	// (0x0003b279) grid_wheel_folder_pane_g1_ParamLimits

0xce7e,	// (0x0003b279) grid_wheel_folder_pane_g1

0xaa3d,	// (0x00038e38) clock_nsta_pane_cp2_ParamLimits

0xaa3d,	// (0x00038e38) clock_nsta_pane_cp2

0xaaf2,	// (0x00038eed) listscroll_midp_pane_ParamLimits

0xaafe,	// (0x00038ef9) midp_canvas_pane

0x5791,	// (0x00033b8c) nsta_clock_indic_pane

0x57c9,	// (0x00033bc4) listscroll_form_pane_vc

0x57d1,	// (0x00033bcc) listscroll_set_pane_vc_ParamLimits

0x57d1,	// (0x00033bcc) listscroll_set_pane_vc

0xc5ad,	// (0x0003a9a8) clock_nsta_pane

0xc5ba,	// (0x0003a9b5) indicator_nsta_pane

0x5a13,	// (0x00033e0e) bg_popup_sub_pane_cp2_ParamLimits

0x5a27,	// (0x00033e22) find_pane_cp2_ParamLimits

0x5a27,	// (0x00033e22) find_pane_cp2

0x5a6d,	// (0x00033e68) grid_toobar_pane_ParamLimits

0x5bc9,	// (0x00033fc4) list_form_gen_pane_vc_ParamLimits

0x5bc9,	// (0x00033fc4) list_form_gen_pane_vc

0x5bdf,	// (0x00033fda) scroll_pane_cp8_vc_ParamLimits

0x5bdf,	// (0x00033fda) scroll_pane_cp8_vc

0x5c2f,	// (0x0003402a) data_form_wide_pane_vc_ParamLimits

0x5c2f,	// (0x0003402a) data_form_wide_pane_vc

0x5c3b,	// (0x00034036) form_field_data_wide_pane_vc_g1

0x5c43,	// (0x0003403e) form_field_data_wide_pane_vc_t1_ParamLimits

0x5c43,	// (0x0003403e) form_field_data_wide_pane_vc_t1

0x4b62,	// (0x00032f5d) input_focus_pane_cp6_vc_ParamLimits

0x4b62,	// (0x00032f5d) input_focus_pane_cp6_vc

0xc907,	// (0x0003ad02) list_midp_pane_ParamLimits

0xc913,	// (0x0003ad0e) scroll_pane_cp16_ParamLimits

0xc913,	// (0x0003ad0e) scroll_pane_cp16

0x5eaa,	// (0x000342a5) button_value_adjust_pane_ParamLimits

0x5eaa,	// (0x000342a5) button_value_adjust_pane

0xcabe,	// (0x0003aeb9) button_value_adjust_pane_cp6_ParamLimits

0xcabe,	// (0x0003aeb9) button_value_adjust_pane_cp6

0xcbe8,	// (0x0003afe3) settings_code_pane_cp_ParamLimits

0xcbe8,	// (0x0003afe3) settings_code_pane_cp

0x3eaa,	// (0x000322a5) cell_touch_pane_g1

0x3eaa,	// (0x000322a5) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0003db47) cell_touch_pane_g

0xcd4a,	// (0x0003b145) cell_touch_pane_cp_ParamLimits

0xcd4a,	// (0x0003b145) cell_touch_pane_cp

0xcd5a,	// (0x0003b155) cell_touch_pane_ParamLimits

0xcd5a,	// (0x0003b155) cell_touch_pane

0x3eaa,	// (0x000322a5) scroll_sc2_down_pane_g1

0x3eaa,	// (0x000322a5) scroll_sc2_up_pane_g1

0x3eb4,	// (0x000322af) bg_set_opt_pane_cp4_vc

0x709a,	// (0x00035495) list_set_graphic_pane_vc_g1_ParamLimits

0x709a,	// (0x00035495) list_set_graphic_pane_vc_g1

0x70a6,	// (0x000354a1) list_set_graphic_pane_vc_g2_ParamLimits

0x70a6,	// (0x000354a1) list_set_graphic_pane_vc_g2

0x0001,

0xfa36,	// (0x0003de31) list_set_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x0003de31) list_set_graphic_pane_vc_g

0x70b2,	// (0x000354ad) text_primary_small_cp13_vc_ParamLimits

0x70b2,	// (0x000354ad) text_primary_small_cp13_vc

0x70ca,	// (0x000354c5) list_set_graphic_pane_vc_ParamLimits

0x70ca,	// (0x000354c5) list_set_graphic_pane_vc

0x3eb4,	// (0x000322af) input_focus_pane_cp2_vc

0x3eaa,	// (0x000322a5) setting_code_pane_vc_g1

0x70de,	// (0x000354d9) setting_code_pane_vc_t1

0x70ec,	// (0x000354e7) set_text_pane_vc_t1_ParamLimits

0x70ec,	// (0x000354e7) set_text_pane_vc_t1

0x3eb4,	// (0x000322af) input_focus_pane_cp1_vc

0x7107,	// (0x00035502) list_set_text_pane_vc

0x3eaa,	// (0x000322a5) setting_text_pane_vc_g1

0x3eb4,	// (0x000322af) bg_set_opt_pane_cp2_vc

0x7111,	// (0x0003550c) setting_slider_graphic_pane_vc_g1

0x7119,	// (0x00035514) setting_slider_graphic_pane_vc_t1

0x7127,	// (0x00035522) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3b,	// (0x0003de36) setting_slider_graphic_pane_vc_t

0x7135,	// (0x00035530) slider_set_pane_cp_vc

0x713d,	// (0x00035538) slider_set_pane_vc_g1

0x7146,	// (0x00035541) slider_set_pane_vc_g2

0x0006,

0xfa40,	// (0x0003de3b) slider_set_pane_vc_g

0x4bc9,	// (0x00032fc4) set_opt_bg_pane_g1_copy1

0x4bd1,	// (0x00032fcc) set_opt_bg_pane_g2_copy1

0x7172,	// (0x0003556d) set_opt_bg_pane_g3_copy1

0x4be1,	// (0x00032fdc) set_opt_bg_pane_g4_copy1

0x4be9,	// (0x00032fe4) set_opt_bg_pane_g5_copy1

0x4bf1,	// (0x00032fec) set_opt_bg_pane_g6_copy1

0x717c,	// (0x00035577) set_opt_bg_pane_g7_copy1

0x7184,	// (0x0003557f) set_opt_bg_pane_g8_copy1

0x718e,	// (0x00035589) set_opt_bg_pane_g9_copy1

0x3eb4,	// (0x000322af) bg_set_opt_pane_cp_vc

0x7198,	// (0x00035593) setting_slider_pane_vc_t1

0x7119,	// (0x00035514) setting_slider_pane_vc_t2

0x7127,	// (0x00035522) setting_slider_pane_vc_t3

0x0002,

0xfa4f,	// (0x0003de4a) setting_slider_pane_vc_t

0x7135,	// (0x00035530) slider_set_pane_vc

0xb2f4,	// (0x000396ef) volume_set_pane_vc_g1

0xb2fd,	// (0x000396f8) volume_set_pane_vc_g2

0xb306,	// (0x00039701) volume_set_pane_vc_g3

0xb30f,	// (0x0003970a) volume_set_pane_vc_g4

0xb318,	// (0x00039713) volume_set_pane_vc_g5

0xb321,	// (0x0003971c) volume_set_pane_vc_g6

0xb32a,	// (0x00039725) volume_set_pane_vc_g7

0xb333,	// (0x0003972e) volume_set_pane_vc_g8

0xb33c,	// (0x00039737) volume_set_pane_vc_g9

0xb345,	// (0x00039740) volume_set_pane_vc_g10

0x0009,

0xf8f4,	// (0x0003dcef) volume_set_pane_vc_g

0x71a7,	// (0x000355a2) volume_set_pane_vc

0x71af,	// (0x000355aa) button_value_adjust_pane_cp1_vc

0x71b9,	// (0x000355b4) list_highlight_pane_cp2_vc

0x71c2,	// (0x000355bd) list_set_pane_vc_ParamLimits

0x71c2,	// (0x000355bd) list_set_pane_vc

0x722c,	// (0x00035627) main_pane_set_vc_t1_ParamLimits

0x722c,	// (0x00035627) main_pane_set_vc_t1

0x7241,	// (0x0003563c) main_pane_set_vc_t2_ParamLimits

0x7241,	// (0x0003563c) main_pane_set_vc_t2

0x7253,	// (0x0003564e) main_pane_set_vc_t3_ParamLimits

0x7253,	// (0x0003564e) main_pane_set_vc_t3

0x7267,	// (0x00035662) main_pane_set_vc_t4_ParamLimits

0x7267,	// (0x00035662) main_pane_set_vc_t4

0x0003,

0xfa56,	// (0x0003de51) main_pane_set_vc_t_ParamLimits

0xfa56,	// (0x0003de51) main_pane_set_vc_t

0x727b,	// (0x00035676) setting_code_pane_vc_ParamLimits

0x727b,	// (0x00035676) setting_code_pane_vc

0x728c,	// (0x00035687) setting_slider_graphic_pane_vc

0x728c,	// (0x00035687) setting_slider_pane_vc

0x728c,	// (0x00035687) setting_text_pane_vc

0x728c,	// (0x00035687) setting_volume_pane_vc

0x7296,	// (0x00035691) scroll_pane_cp121_vc

0x4b3c,	// (0x00032f37) set_content_pane_vc

0x72d4,	// (0x000356cf) button_value_adjust_pane_g1

0x72dd,	// (0x000356d8) button_value_adjust_pane_g2

0x0001,

0xfab0,	// (0x0003deab) button_value_adjust_pane_g

0x72e6,	// (0x000356e1) form_field_slider_wide_pane_vc_t1_ParamLimits

0x72e6,	// (0x000356e1) form_field_slider_wide_pane_vc_t1

0x72fa,	// (0x000356f5) form_field_slider_wide_pane_vc_t2_ParamLimits

0x72fa,	// (0x000356f5) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab5,	// (0x0003deb0) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab5,	// (0x0003deb0) form_field_slider_wide_pane_vc_t

0x3f02,	// (0x000322fd) input_focus_pane_cp10_vc_ParamLimits

0x3f02,	// (0x000322fd) input_focus_pane_cp10_vc

0x730c,	// (0x00035707) slider_cont_pane_cp1_vc_ParamLimits

0x730c,	// (0x00035707) slider_cont_pane_cp1_vc

0x713d,	// (0x00035538) slider_form_pane_g1_cp2

0x7146,	// (0x00035541) slider_form_pane_g2_cp2

0x7325,	// (0x00035720) form_field_slider_pane_vc_t3

0x7333,	// (0x0003572e) form_field_slider_pane_vc_t4

0x7341,	// (0x0003573c) slider_form_pane_vc_ParamLimits

0x7341,	// (0x0003573c) slider_form_pane_vc

0x734e,	// (0x00035749) form_field_slider_pane_vc_t1_ParamLimits

0x734e,	// (0x00035749) form_field_slider_pane_vc_t1

0x72fa,	// (0x000356f5) form_field_slider_pane_vc_t2_ParamLimits

0x72fa,	// (0x000356f5) form_field_slider_pane_vc_t2

0x0001,

0xfac5,	// (0x0003dec0) form_field_slider_pane_vc_t_ParamLimits

0xfac5,	// (0x0003dec0) form_field_slider_pane_vc_t

0x3f02,	// (0x000322fd) input_focus_pane_cp9_vc_ParamLimits

0x3f02,	// (0x000322fd) input_focus_pane_cp9_vc

0x736a,	// (0x00035765) slider_cont_pane_vc_ParamLimits

0x736a,	// (0x00035765) slider_cont_pane_vc

0x737c,	// (0x00035777) list_form_graphic_pane_cp_vc_ParamLimits

0x737c,	// (0x00035777) list_form_graphic_pane_cp_vc

0x5c3b,	// (0x00034036) form_field_popup_wide_pane_vc_g1

0x7391,	// (0x0003578c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7391,	// (0x0003578c) form_field_popup_wide_pane_vc_t1

0x4b62,	// (0x00032f5d) input_focus_pane_cp8_vc_ParamLimits

0x4b62,	// (0x00032f5d) input_focus_pane_cp8_vc

0x73a8,	// (0x000357a3) list_form_wide_pane_vc_ParamLimits

0x73a8,	// (0x000357a3) list_form_wide_pane_vc

0x73b4,	// (0x000357af) list_form_graphic_pane_vc_g1

0x73bc,	// (0x000357b7) list_form_graphic_pane_vc_t1_ParamLimits

0x73bc,	// (0x000357b7) list_form_graphic_pane_vc_t1

0x3f10,	// (0x0003230b) list_highlight_pane_cp5_vc_ParamLimits

0x3f10,	// (0x0003230b) list_highlight_pane_cp5_vc

0x73d8,	// (0x000357d3) list_form_graphic_pane_vc_ParamLimits

0x73d8,	// (0x000357d3) list_form_graphic_pane_vc

0x5c3b,	// (0x00034036) form_field_popup_pane_vc_g1

0x73ee,	// (0x000357e9) form_field_popup_pane_vc_t1_ParamLimits

0x73ee,	// (0x000357e9) form_field_popup_pane_vc_t1

0x4b62,	// (0x00032f5d) input_focus_pane_cp7_vc_ParamLimits

0x4b62,	// (0x00032f5d) input_focus_pane_cp7_vc

0x7405,	// (0x00035800) list_form_pane_vc_ParamLimits

0x7405,	// (0x00035800) list_form_pane_vc

0x7411,	// (0x0003580c) data_form_pane_vc_t1_ParamLimits

0x7411,	// (0x0003580c) data_form_pane_vc_t1

0x4bc9,	// (0x00032fc4) input_focus_pane_vc_g1

0x4bd1,	// (0x00032fcc) input_focus_pane_vc_g2

0x4bd9,	// (0x00032fd4) input_focus_pane_vc_g3

0x4be1,	// (0x00032fdc) input_focus_pane_vc_g4

0x4be9,	// (0x00032fe4) input_focus_pane_vc_g5

0x4bf1,	// (0x00032fec) input_focus_pane_vc_g6

0x4bf9,	// (0x00032ff4) input_focus_pane_vc_g7

0x4c01,	// (0x00032ffc) input_focus_pane_vc_g8

0x4c09,	// (0x00033004) input_focus_pane_vc_g9

0x3eaa,	// (0x000322a5) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0003dad0) input_focus_pane_vc_g

0x5c2f,	// (0x0003402a) data_form_pane_vc_ParamLimits

0x5c2f,	// (0x0003402a) data_form_pane_vc

0x5c3b,	// (0x00034036) form_field_data_pane_vc_g1

0x742c,	// (0x00035827) form_field_data_pane_vc_t1_ParamLimits

0x742c,	// (0x00035827) form_field_data_pane_vc_t1

0x4b62,	// (0x00032f5d) input_focus_pane_vc_ParamLimits

0x4b62,	// (0x00032f5d) input_focus_pane_vc

0x7446,	// (0x00035841) button_value_adjust_pane_cp3_vc

0x744e,	// (0x00035849) button_value_adjust_pane_cp5_vc

0x7456,	// (0x00035851) form_field_data_pane_vc_ParamLimits

0x7456,	// (0x00035851) form_field_data_pane_vc

0x746d,	// (0x00035868) form_field_data_pane_vc_cp2

0x7475,	// (0x00035870) form_field_data_wide_pane_vc_ParamLimits

0x7475,	// (0x00035870) form_field_data_wide_pane_vc

0x748b,	// (0x00035886) form_field_data_wide_pane_vc_cp2

0x7493,	// (0x0003588e) form_field_popup_pane_vc_ParamLimits

0x7493,	// (0x0003588e) form_field_popup_pane_vc

0x74aa,	// (0x000358a5) form_field_popup_wide_pane_vc_ParamLimits

0x74aa,	// (0x000358a5) form_field_popup_wide_pane_vc

0x74c0,	// (0x000358bb) form_field_slider_pane_vc_ParamLimits

0x74c0,	// (0x000358bb) form_field_slider_pane_vc

0x74d3,	// (0x000358ce) form_field_slider_wide_pane_vc_ParamLimits

0x74d3,	// (0x000358ce) form_field_slider_wide_pane_vc

0xcd6c,	// (0x0003b167) grid_touch_1_pane_ParamLimits

0xcd6c,	// (0x0003b167) grid_touch_1_pane

0xcd78,	// (0x0003b173) grid_touch_2_pane_ParamLimits

0xcd78,	// (0x0003b173) grid_touch_2_pane

0x5783,	// (0x00033b7e) touch_pane_g1_ParamLimits

0x5783,	// (0x00033b7e) touch_pane_g1

0x74f4,	// (0x000358ef) cell_app_pane_cp_wide_ParamLimits

0x74f4,	// (0x000358ef) cell_app_pane_cp_wide

0x7505,	// (0x00035900) grid_popup_fast_wide_pane_ParamLimits

0x7505,	// (0x00035900) grid_popup_fast_wide_pane

0x7519,	// (0x00035914) scroll_pane_cp19_ParamLimits

0x7519,	// (0x00035914) scroll_pane_cp19

0x3eb4,	// (0x000322af) bg_popup_window_pane_cp20

0x752d,	// (0x00035928) listscroll_popup_fast_wide_pane

0x3f10,	// (0x0003230b) grid_indicator_nsta_pane

0x7535,	// (0x00035930) clock_nsta_pane_g1

0x753e,	// (0x00035939) clock_nsta_pane_t1

0xcd90,	// (0x0003b18b) cell_indicator_nsta_pane_ParamLimits

0xcd90,	// (0x0003b18b) cell_indicator_nsta_pane

0x74e6,	// (0x000358e1) cell_indicator_nsta_pane_g1

0xcdc8,	// (0x0003b1c3) cell_indicator_nsta_pane_g2

0x0001,

0xfacf,	// (0x0003deca) cell_indicator_nsta_pane_g

0x755a,	// (0x00035955) clock_nsta_pane_cp

0x7562,	// (0x0003595d) indicator_nsta_pane_cp

0x756a,	// (0x00035965) nsta_clock_indic_pane_g1

0x459d,	// (0x00032998) grid_indicator_pane

0x4fd3,	// (0x000333ce) scroll_pane_cp29

0xa98c,	// (0x00038d87) indicator_nsta_pane_cp2_ParamLimits

0xa98c,	// (0x00038d87) indicator_nsta_pane_cp2

0x3f10,	// (0x0003230b) main_apps_wheel_pane

0x5d57,	// (0x00034152) form_midp_field_text_pane_ParamLimits

0x5e8a,	// (0x00034285) scroll_bar_cp050_ParamLimits

0x75a2,	// (0x0003599d) cell_indicator_pane_ParamLimits

0x75a2,	// (0x0003599d) cell_indicator_pane

0x75b9,	// (0x000359b4) cell_indicator_pane_g1

0xcdde,	// (0x0003b1d9) grid_wheel_folder_pane_ParamLimits

0xcdde,	// (0x0003b1d9) grid_wheel_folder_pane

0xcdf2,	// (0x0003b1ed) list_wheel_apps_pane_ParamLimits

0xcdf2,	// (0x0003b1ed) list_wheel_apps_pane

0xce03,	// (0x0003b1fe) main_apps_wheel_pane_g1_ParamLimits

0xce03,	// (0x0003b1fe) main_apps_wheel_pane_g1

0xce17,	// (0x0003b212) main_apps_wheel_pane_g2_ParamLimits

0xce17,	// (0x0003b212) main_apps_wheel_pane_g2

0x0001,

0xfade,	// (0x0003ded9) main_apps_wheel_pane_g_ParamLimits

0xfade,	// (0x0003ded9) main_apps_wheel_pane_g

0xce2f,	// (0x0003b22a) main_apps_wheel_pane_t1_ParamLimits

0xce2f,	// (0x0003b22a) main_apps_wheel_pane_t1

0xce52,	// (0x0003b24d) list_wheel_apps_pane_g1

0xce5a,	// (0x0003b255) list_wheel_apps_pane_g2

0xce62,	// (0x0003b25d) list_wheel_apps_pane_g3

0xce6a,	// (0x0003b265) list_wheel_apps_pane_g4

0xce74,	// (0x0003b26f) list_wheel_apps_pane_g5

0x0004,

0xfae3,	// (0x0003dede) list_wheel_apps_pane_g

0x5407,	// (0x00033802) navi_icon_text_pane

0xc4f5,	// (0x0003a8f0) aid_fill_nsta

0xce97,	// (0x0003b292) navi_icon_text_pane_g1

0xcea6,	// (0x0003b2a1) navi_icon_text_pane_t1

0xaada,	// (0x00038ed5) list_set_graphic_pane_t1_ParamLimits

0xaada,	// (0x00038ed5) list_set_graphic_pane_t1

0x656e,	// (0x00034969) popup_midp_note_alarm_window_t6_ParamLimits

0x656e,	// (0x00034969) popup_midp_note_alarm_window_t6

0x6580,	// (0x0003497b) popup_midp_note_alarm_window_t7_ParamLimits

0x6580,	// (0x0003497b) popup_midp_note_alarm_window_t7

0x6592,	// (0x0003498d) popup_midp_note_alarm_window_t8_ParamLimits

0x6592,	// (0x0003498d) popup_midp_note_alarm_window_t8

0x65a4,	// (0x0003499f) popup_midp_note_alarm_window_t9_ParamLimits

0x65a4,	// (0x0003499f) popup_midp_note_alarm_window_t9

0x65b6,	// (0x000349b1) popup_midp_note_alarm_window_t10_ParamLimits

0x65b6,	// (0x000349b1) popup_midp_note_alarm_window_t10

0x65c8,	// (0x000349c3) popup_midp_note_alarm_window_t11_ParamLimits

0x65c8,	// (0x000349c3) popup_midp_note_alarm_window_t11

0x65da,	// (0x000349d5) scroll_pane_cp17_ParamLimits

0x65da,	// (0x000349d5) scroll_pane_cp17

0xb2f4,	// (0x000396ef) volume_small_pane_cp_g1

0xb6ff,	// (0x00039afa) volume_small_pane_cp_g2

0xb708,	// (0x00039b03) volume_small_pane_cp_g3

0xb711,	// (0x00039b0c) volume_small_pane_cp_g4

0xb71a,	// (0x00039b15) volume_small_pane_cp_g5

0xb723,	// (0x00039b1e) volume_small_pane_cp_g6

0xb72c,	// (0x00039b27) volume_small_pane_cp_g7

0xb735,	// (0x00039b30) volume_small_pane_cp_g8

0xb73e,	// (0x00039b39) volume_small_pane_cp_g9

0xb747,	// (0x00039b42) volume_small_pane_cp_g10

0x55b1,	// (0x000339ac) midp_ticker_pane_g1_ParamLimits

0x55bd,	// (0x000339b8) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0003db98) midp_ticker_pane_g_ParamLimits

0xaba3,	// (0x00038f9e) midp_ticker_pane_t1_ParamLimits

0xc50b,	// (0x0003a906) aid_fill_nsta_2

0x5e76,	// (0x00034271) list_form2_midp_pane

0x6ca3,	// (0x0003509e) midp_editing_number_pane_ParamLimits

0x6cb2,	// (0x000350ad) midp_ticker_pane_ParamLimits

0x75c3,	// (0x000359be) form2_midp_field_pane

0x75cb,	// (0x000359c6) scroll_pane_cp51

0x75eb,	// (0x000359e6) form2_midp_button_pane_ParamLimits

0x75eb,	// (0x000359e6) form2_midp_button_pane

0x75fd,	// (0x000359f8) form2_midp_content_pane_ParamLimits

0x75fd,	// (0x000359f8) form2_midp_content_pane

0x7625,	// (0x00035a20) form2_midp_field_choice_group_pane

0x762d,	// (0x00035a28) form2_midp_field_pane_g1

0x7635,	// (0x00035a30) form2_midp_field_pane_g2

0x763d,	// (0x00035a38) form2_midp_field_pane_g3

0x7645,	// (0x00035a40) form2_midp_field_pane_g4

0x0003,

0xfb08,	// (0x0003df03) form2_midp_field_pane_g

0x764d,	// (0x00035a48) form2_midp_gauge_slider_pane

0x7655,	// (0x00035a50) form2_midp_gauge_wait_pane

0x765d,	// (0x00035a58) form2_midp_image_pane_ParamLimits

0x765d,	// (0x00035a58) form2_midp_image_pane

0x7678,	// (0x00035a73) form2_midp_label_pane_ParamLimits

0x7678,	// (0x00035a73) form2_midp_label_pane

0xced7,	// (0x0003b2d2) form2_midp_label_pane_cp_ParamLimits

0xced7,	// (0x0003b2d2) form2_midp_label_pane_cp

0x7691,	// (0x00035a8c) form2_midp_string_pane_ParamLimits

0x7691,	// (0x00035a8c) form2_midp_string_pane

0x9a16,	// (0x00037e11) form2_midp_text_pane_ParamLimits

0x9a16,	// (0x00037e11) form2_midp_text_pane

0x76a3,	// (0x00035a9e) form2_midp_time_pane

0x76b3,	// (0x00035aae) input_focus_pane_cp51_ParamLimits

0x76b3,	// (0x00035aae) input_focus_pane_cp51

0x76cb,	// (0x00035ac6) form2_midp_label_pane_t1_ParamLimits

0x76cb,	// (0x00035ac6) form2_midp_label_pane_t1

0x9a35,	// (0x00037e30) form2_mdip_text_pane_t1_ParamLimits

0x9a35,	// (0x00037e30) form2_mdip_text_pane_t1

0x9a53,	// (0x00037e4e) form2_midp_time_pane_t1

0x7714,	// (0x00035b0f) form2_midp_gauge_slider_pane_t1

0xcef8,	// (0x0003b2f3) form2_midp_gauge_slider_pane_t2

0xcf0a,	// (0x0003b305) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb11,	// (0x0003df0c) form2_midp_gauge_slider_pane_t

0x7726,	// (0x00035b21) form2_midp_slider_pane

0x7732,	// (0x00035b2d) form2_midp_gauge_wait_pane_t1

0x7740,	// (0x00035b3b) form2_midp_wait_pane_ParamLimits

0x7740,	// (0x00035b3b) form2_midp_wait_pane

0xc836,	// (0x0003ac31) list_single_2graphic_pane_cp4_ParamLimits

0xc836,	// (0x0003ac31) list_single_2graphic_pane_cp4

0xcf1c,	// (0x0003b317) list_single_midp_graphic_pane_cp_ParamLimits

0xcf1c,	// (0x0003b317) list_single_midp_graphic_pane_cp

0x3eb4,	// (0x000322af) list_highlight_pane_cp20

0x776b,	// (0x00035b66) list_single_2graphic_pane_g1_cp4

0x7773,	// (0x00035b6e) list_single_2graphic_pane_g2_cp4

0x777b,	// (0x00035b76) list_single_2graphic_pane_t1_cp4

0x3f10,	// (0x0003230b) list_highlight_pane_cp21

0x778a,	// (0x00035b85) list_single_midp_graphic_pane_g4_cp

0x7799,	// (0x00035b94) list_single_midp_graphic_pane_t1_cp

0xcf4b,	// (0x0003b346) form2_mdip_string_pane_t1_ParamLimits

0xcf4b,	// (0x0003b346) form2_mdip_string_pane_t1

0x3eb4,	// (0x000322af) bg_wml_button_pane_cp2

0x3eaa,	// (0x000322a5) form2_midp_image_pane_g1

0xa4e6,	// (0x000388e1) list_double_large_graphic_pane_g5_ParamLimits

0xa4e6,	// (0x000388e1) list_double_large_graphic_pane_g5

0xaaf2,	// (0x00038eed) midp_form_pane_ParamLimits

0x3f10,	// (0x0003230b) main_apps_wheel_pane_ParamLimits

0xb102,	// (0x000394fd) popup_preview_window_ParamLimits

0xb102,	// (0x000394fd) popup_preview_window

0x58b0,	// (0x00033cab) popup_touch_info_window_ParamLimits

0x58b0,	// (0x00033cab) popup_touch_info_window

0x58ce,	// (0x00033cc9) popup_touch_menu_window_ParamLimits

0x58ce,	// (0x00033cc9) popup_touch_menu_window

0x3ea0,	// (0x0003229b) bg_popup_sub_pane_cp6

0x77ae,	// (0x00035ba9) list_touch_menu_pane

0x77b6,	// (0x00035bb1) list_single_touch_menu_pane_ParamLimits

0x77b6,	// (0x00035bb1) list_single_touch_menu_pane

0x77cd,	// (0x00035bc8) list_single_touch_menu_pane_t1

0x3f10,	// (0x0003230b) bg_popup_sub_pane_cp7_ParamLimits

0x3f10,	// (0x0003230b) bg_popup_sub_pane_cp7

0x77db,	// (0x00035bd6) heading_sub_pane

0x77e3,	// (0x00035bde) list_touch_info_pane_ParamLimits

0x77e3,	// (0x00035bde) list_touch_info_pane

0x77f2,	// (0x00035bed) list_single_touch_info_pane_ParamLimits

0x77f2,	// (0x00035bed) list_single_touch_info_pane

0x7804,	// (0x00035bff) list_single_touch_info_pane_t1

0x7812,	// (0x00035c0d) list_single_touch_info_pane_t2

0x0001,

0xfb1f,	// (0x0003df1a) list_single_touch_info_pane_t

0x5587,	// (0x00033982) bg_popup_heading_pane_cp

0x7820,	// (0x00035c1b) heading_sub_pane_t1

0x5bf5,	// (0x00033ff0) bg_popup_preview_window_pane_cp_ParamLimits

0x5bf5,	// (0x00033ff0) bg_popup_preview_window_pane_cp

0x77db,	// (0x00035bd6) heading_preview_pane

0x77e3,	// (0x00035bde) list_preview_pane_ParamLimits

0x77e3,	// (0x00035bde) list_preview_pane

0x782e,	// (0x00035c29) popup_preview_window_g1

0x77f2,	// (0x00035bed) list_single_preview_pane_ParamLimits

0x77f2,	// (0x00035bed) list_single_preview_pane

0x7836,	// (0x00035c31) list_single_preview_pane_g1

0x783e,	// (0x00035c39) list_single_preview_pane_t1

0x7804,	// (0x00035bff) list_single_preview_pane_t2

0x0001,

0xfb24,	// (0x0003df1f) list_single_preview_pane_t

0x784c,	// (0x00035c47) bg_popup_heading_pane_cp2_ParamLimits

0x784c,	// (0x00035c47) bg_popup_heading_pane_cp2

0x7862,	// (0x00035c5d) heading_preview_pane_g1

0x786a,	// (0x00035c65) heading_preview_pane_t1_ParamLimits

0x786a,	// (0x00035c65) heading_preview_pane_t1

0x45b4,	// (0x000329af) soft_indicator_pane_t1_ParamLimits

0x4ad5,	// (0x00032ed0) scroll_pane_ParamLimits

0x4ed5,	// (0x000332d0) scroll_sc2_left_pane

0x4ecc,	// (0x000332c7) scroll_sc2_right_pane

0x4ef4,	// (0x000332ef) scroll_bg_pane_g1_ParamLimits

0x4f09,	// (0x00033304) scroll_bg_pane_g2_ParamLimits

0x4f21,	// (0x0003331c) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0003db27) scroll_bg_pane_g_ParamLimits

0x4ef4,	// (0x000332ef) scroll_handle_pane_g1_ParamLimits

0x4f43,	// (0x0003333e) scroll_handle_pane_g2_ParamLimits

0x4f21,	// (0x0003331c) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0003db2e) scroll_handle_pane_g_ParamLimits

0x57f1,	// (0x00033bec) popup_choice_list_window_ParamLimits

0x57f1,	// (0x00033bec) popup_choice_list_window

0x5a1f,	// (0x00033e1a) choice_list_pane

0x5ad1,	// (0x00033ecc) cell_toolbar_pane_t1

0x5af9,	// (0x00033ef4) toolbar_button_pane_ParamLimits

0x6a06,	// (0x00034e01) ai_gene_pane_1_t2_ParamLimits

0x6a06,	// (0x00034e01) ai_gene_pane_1_t2

0x0001,

0xf950,	// (0x0003dd4b) ai_gene_pane_1_t_ParamLimits

0xf950,	// (0x0003dd4b) ai_gene_pane_1_t

0x7887,	// (0x00035c82) scroll_sc2_left_pane_g1

0x7887,	// (0x00035c82) scroll_sc2_right_pane_g1

0x4cba,	// (0x000330b5) bg_popup_sub_pane_cp10

0x7891,	// (0x00035c8c) list_choice_list_pane

0x78a8,	// (0x00035ca3) list_single_choice_list_pane_ParamLimits

0x78a8,	// (0x00035ca3) list_single_choice_list_pane

0x78bc,	// (0x00035cb7) list_single_choice_list_pane_g1

0x78c4,	// (0x00035cbf) list_single_choice_list_pane_t1_ParamLimits

0x78c4,	// (0x00035cbf) list_single_choice_list_pane_t1

0x78d9,	// (0x00035cd4) choice_list_pane_g1

0x78e1,	// (0x00035cdc) choice_list_pane_t1

0x3ea0,	// (0x0003229b) input_focus_pane_cp11

0x4e2f,	// (0x0003322a) title_pane_stacon_g2_ParamLimits

0x4e2f,	// (0x0003322a) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0003db0d) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0003db0d) title_pane_stacon_g

0x5587,	// (0x00033982) cursor_press_pane

0xaea7,	// (0x000392a2) popup_fep_hwr_window_ParamLimits

0xaea7,	// (0x000392a2) popup_fep_hwr_window

0x5847,	// (0x00033c42) popup_fep_vkb_window_ParamLimits

0x5847,	// (0x00033c42) popup_fep_vkb_window

0x78ef,	// (0x00035cea) cursor_press_pane_g1

0x0002,

0xfb4d,	// (0x0003df48) fep_vkb_side_pane_g_ParamLimits

0xb77b,	// (0x00039b76) fep_hwr_candidate_pane_ParamLimits

0xb77b,	// (0x00039b76) fep_hwr_candidate_pane

0xb7a5,	// (0x00039ba0) fep_hwr_side_pane_ParamLimits

0xb7a5,	// (0x00039ba0) fep_hwr_side_pane

0xb7c5,	// (0x00039bc0) fep_hwr_top_pane_ParamLimits

0xb7c5,	// (0x00039bc0) fep_hwr_top_pane

0xb7dd,	// (0x00039bd8) fep_hwr_write_pane_ParamLimits

0xb7dd,	// (0x00039bd8) fep_hwr_write_pane

0xfb4d,	// (0x0003df48) fep_vkb_side_pane_g

0x7909,	// (0x00035d04) fep_hwr_top_pane_g1

0x78f7,	// (0x00035cf2) fep_hwr_top_pane_g2

0xb809,	// (0x00039c04) fep_hwr_top_pane_g3

0x0002,

0xfb29,	// (0x0003df24) fep_hwr_top_pane_g

0xb81e,	// (0x00039c19) fep_hwr_top_text_pane

0x509a,	// (0x00033495) fep_hwr_top_text_pane_g1

0x793f,	// (0x00035d3a) fep_hwr_top_text_pane_t1

0xb914,	// (0x00039d0f) fep_hwr_candidate_pane_g1

0x7a6c,	// (0x00035e67) fep_vkb_keypad_pane_g3_ParamLimits

0x7a6c,	// (0x00035e67) fep_vkb_keypad_pane_g3

0x7a94,	// (0x00035e8f) fep_vkb_keypad_pane_g4_ParamLimits

0x7a94,	// (0x00035e8f) fep_vkb_keypad_pane_g4

0x7b03,	// (0x00035efe) fep_vkb_bottom_pane_g2_ParamLimits

0x7b03,	// (0x00035efe) fep_vkb_bottom_pane_g2

0x0001,

0xfb54,	// (0x0003df4f) fep_vkb_bottom_pane_g_ParamLimits

0xfb54,	// (0x0003df4f) fep_vkb_bottom_pane_g

0x7887,	// (0x00035c82) cell_vkb_side_pane_g2

0x0001,

0xfb5e,	// (0x0003df59) cell_vkb_side_pane_g

0x7b47,	// (0x00035f42) cell_vkb_side_pane_t1

0x7b55,	// (0x00035f50) cell_vkb_side_pane_t1_copy1

0x7887,	// (0x00035c82) bg_fep_vkb_candidate_pane_g2

0x7c2b,	// (0x00036026) cell_vkb_candidate_pane_ParamLimits

0x794d,	// (0x00035d48) aid_size_cell_vkb_ParamLimits

0x794d,	// (0x00035d48) aid_size_cell_vkb

0x7c2b,	// (0x00036026) cell_vkb_candidate_pane

0xb92e,	// (0x00039d29) bg_popup_fep_shadow_pane_g1

0xd056,	// (0x0003b451) fep_vkb_bottom_pane_ParamLimits

0xd056,	// (0x0003b451) fep_vkb_bottom_pane

0x79da,	// (0x00035dd5) fep_vkb_candidate_pane_ParamLimits

0x79da,	// (0x00035dd5) fep_vkb_candidate_pane

0xd07b,	// (0x0003b476) fep_vkb_keypad_pane_ParamLimits

0xd07b,	// (0x0003b476) fep_vkb_keypad_pane

0xd0b7,	// (0x0003b4b2) fep_vkb_side_pane_ParamLimits

0xd0b7,	// (0x0003b4b2) fep_vkb_side_pane

0xd0f3,	// (0x0003b4ee) fep_vkb_top_pane_ParamLimits

0xd0f3,	// (0x0003b4ee) fep_vkb_top_pane

0x7a00,	// (0x00035dfb) fep_vkb_top_pane_g1_ParamLimits

0x7a00,	// (0x00035dfb) fep_vkb_top_pane_g1

0x7a0f,	// (0x00035e0a) fep_vkb_top_pane_g2_ParamLimits

0x7a0f,	// (0x00035e0a) fep_vkb_top_pane_g2

0x7a1e,	// (0x00035e19) fep_vkb_top_pane_g3_ParamLimits

0x7a1e,	// (0x00035e19) fep_vkb_top_pane_g3

0x0003,

0xfb44,	// (0x0003df3f) fep_vkb_top_pane_g_ParamLimits

0xfb44,	// (0x0003df3f) fep_vkb_top_pane_g

0x7a3c,	// (0x00035e37) fep_vkb_top_text_pane_ParamLimits

0x7a3c,	// (0x00035e37) fep_vkb_top_text_pane

0xd12f,	// (0x0003b52a) fep_vkb_side_pane_g1_ParamLimits

0xd12f,	// (0x0003b52a) fep_vkb_side_pane_g1

0x7a5b,	// (0x00035e56) grid_vkb_side_pane_ParamLimits

0x7a5b,	// (0x00035e56) grid_vkb_side_pane

0xb936,	// (0x00039d31) bg_popup_fep_shadow_pane_g2

0xb93f,	// (0x00039d3a) bg_popup_fep_shadow_pane_g3

0xb947,	// (0x00039d42) bg_popup_fep_shadow_pane_g4

0xb950,	// (0x00039d4b) bg_popup_fep_shadow_pane_g5

0xb95a,	// (0x00039d55) bg_popup_fep_shadow_pane_g6

0xb962,	// (0x00039d5d) bg_popup_fep_shadow_pane_g7

0x4be9,	// (0x00032fe4) bg_popup_fep_shadow_pane_g8

0x7ab2,	// (0x00035ead) grid_vkb_keypad_number_pane_ParamLimits

0x7ab2,	// (0x00035ead) grid_vkb_keypad_number_pane

0x7ac2,	// (0x00035ebd) grid_vkb_keypad_pane_ParamLimits

0x7ac2,	// (0x00035ebd) grid_vkb_keypad_pane

0x7ae8,	// (0x00035ee3) fep_vkb_bottom_pane_g1_ParamLimits

0x7ae8,	// (0x00035ee3) fep_vkb_bottom_pane_g1

0x7b11,	// (0x00035f0c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7b11,	// (0x00035f0c) grid_vkb_keypad_bottom_left_pane

0x7b26,	// (0x00035f21) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7b26,	// (0x00035f21) grid_vkb_keypad_bottom_right_pane

0x7b3b,	// (0x00035f36) fep_vkb_top_text_pane_g1

0xd179,	// (0x0003b574) fep_vkb_top_text_pane_t1

0xd18e,	// (0x0003b589) cell_vkb_side_pane_ParamLimits

0xd18e,	// (0x0003b589) cell_vkb_side_pane

0x7887,	// (0x00035c82) cell_vkb_side_pane_g1

0x7b63,	// (0x00035f5e) cell_vkb_keypad_pane_ParamLimits

0x7b63,	// (0x00035f5e) cell_vkb_keypad_pane

0x7bd8,	// (0x00035fd3) cell_vkb_keypad_pane_g1

0x0008,

0xfb71,	// (0x0003df6c) bg_popup_fep_shadow_pane_g

0x7887,	// (0x00035c82) cell_hwr_side_pane_g1

0x7887,	// (0x00035c82) cell_hwr_side_pane_g2

0x7be2,	// (0x00035fdd) cell_vkb_keypad_pane_t1

0xd1b1,	// (0x0003b5ac) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd1b1,	// (0x0003b5ac) cell_vkb_keypad_bottom_left_pane

0xd1ce,	// (0x0003b5c9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd1ce,	// (0x0003b5c9) cell_vkb_keypad_bottom_right_pane

0x7887,	// (0x00035c82) cell_vkb_keypad_bottom_left_pane_g1

0x7887,	// (0x00035c82) cell_vkb_keypad_bottom_right_pane_g1

0x7bf0,	// (0x00035feb) cell_vkb_keypad_number_pane_ParamLimits

0x7bf0,	// (0x00035feb) cell_vkb_keypad_number_pane

0x7c0f,	// (0x0003600a) cell_vkb_keypad_number_pane_g1

0x7c19,	// (0x00036014) cell_vkb_keypad_number_pane_g2

0x7c22,	// (0x0003601d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb63,	// (0x0003df5e) cell_vkb_keypad_number_pane_g

0x7be2,	// (0x00035fdd) cell_vkb_keypad_number_pane_t1

0x7c46,	// (0x00036041) fep_vkb_candidate_pane_g1

0x0001,

0xfb5e,	// (0x0003df59) cell_hwr_side_pane_g

0x7c5f,	// (0x0003605a) cell_hwr_side_pane_t1

0xb974,	// (0x00039d6f) cell_hwr_side_pane_t1_copy1

0x7a2e,	// (0x00035e29) cell_hwr_candidate_pane_g1

0xb982,	// (0x00039d7d) cell_hwr_candidate_pane_t1

0x7887,	// (0x00035c82) cell_vkb_candidate_pane_g2

0x7ca3,	// (0x0003609e) cell_vkb_candidate_pane_t1

0x7617,	// (0x00035a12) bg_popup_fep_shadow_pane_ParamLimits

0x7617,	// (0x00035a12) bg_popup_fep_shadow_pane

0x0fde,	// (0x0002f3d9) bg_fep_hwr_top_pane_g4

0x791b,	// (0x00035d16) bg_hwr_side_pane_g1_ParamLimits

0x791b,	// (0x00035d16) bg_hwr_side_pane_g1

0xb85a,	// (0x00039c55) cell_hwr_side_pane_ParamLimits

0xb85a,	// (0x00039c55) cell_hwr_side_pane

0xb895,	// (0x00039c90) fep_hwr_write_pane_g1_ParamLimits

0xb895,	// (0x00039c90) fep_hwr_write_pane_g1

0xb8a2,	// (0x00039c9d) fep_hwr_write_pane_g2_ParamLimits

0xb8a2,	// (0x00039c9d) fep_hwr_write_pane_g2

0xb8af,	// (0x00039caa) fep_hwr_write_pane_g3_ParamLimits

0xb8af,	// (0x00039caa) fep_hwr_write_pane_g3

0xb8bd,	// (0x00039cb8) fep_hwr_write_pane_g4_ParamLimits

0xb8bd,	// (0x00039cb8) fep_hwr_write_pane_g4

0x0005,

0xfb30,	// (0x0003df2b) fep_hwr_write_pane_g_ParamLimits

0xfb30,	// (0x0003df2b) fep_hwr_write_pane_g

0x0fde,	// (0x0002f3d9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0fde,	// (0x0002f3d9) bg_fep_hwr_candidate_pane_g2

0xb8d2,	// (0x00039ccd) cell_hwr_candidate_pane_ParamLimits

0xb8d2,	// (0x00039ccd) cell_hwr_candidate_pane

0xb914,	// (0x00039d0f) fep_hwr_candidate_pane_g1_ParamLimits

0x797b,	// (0x00035d76) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x797b,	// (0x00035d76) bg_popup_fep_shadow_pane_cp2

0x7a2e,	// (0x00035e29) fep_vkb_top_pane_g4_ParamLimits

0x7a2e,	// (0x00035e29) fep_vkb_top_pane_g4

0x7a4d,	// (0x00035e48) fep_vkb_side_pane_g2_ParamLimits

0x7a4d,	// (0x00035e48) fep_vkb_side_pane_g2

0x9310,	// (0x0003770b) list_setting_pane_t4_ParamLimits

0x9310,	// (0x0003770b) list_setting_pane_t4

0x93aa,	// (0x000377a5) list_setting_number_pane_t5_ParamLimits

0x93aa,	// (0x000377a5) list_setting_number_pane_t5

0xa809,	// (0x00038c04) list_double_heading_pane_cp2_ParamLimits

0xa809,	// (0x00038c04) list_double_heading_pane_cp2

0x4b7c,	// (0x00032f77) list_double_heading_pane_g1_cp2_ParamLimits

0x4b7c,	// (0x00032f77) list_double_heading_pane_g1_cp2

0x4b88,	// (0x00032f83) list_double_heading_pane_g2_cp2_ParamLimits

0x4b88,	// (0x00032f83) list_double_heading_pane_g2_cp2

0x7cb1,	// (0x000360ac) list_double_heading_pane_t1_cp2_ParamLimits

0x7cb1,	// (0x000360ac) list_double_heading_pane_t1_cp2

0x7d09,	// (0x00036104) list_double_heading_pane_t2_cp2_ParamLimits

0x7d09,	// (0x00036104) list_double_heading_pane_t2_cp2

0x3e98,	// (0x00032293) aid_value_unit2

0x9fef,	// (0x000383ea) popup_preview_fixed_window

0x4694,	// (0x00032a8f) bg_popup_preview_window_pane_cp02

0x7d1b,	// (0x00036116) list_preview_fixed_pane

0x7d61,	// (0x0003615c) list_empty_pane_fp_ParamLimits

0x7d61,	// (0x0003615c) list_empty_pane_fp

0x7d61,	// (0x0003615c) list_single_cale_day_pane_fp_ParamLimits

0x7d61,	// (0x0003615c) list_single_cale_day_pane_fp

0x7d61,	// (0x0003615c) list_single_graphic_heading_pane_fp_ParamLimits

0x7d61,	// (0x0003615c) list_single_graphic_heading_pane_fp

0x7d61,	// (0x0003615c) list_single_graphic_pane_fp_ParamLimits

0x7d61,	// (0x0003615c) list_single_graphic_pane_fp

0x7d61,	// (0x0003615c) list_single_heading_pane_fp_ParamLimits

0x7d61,	// (0x0003615c) list_single_heading_pane_fp

0x7d61,	// (0x0003615c) list_single_pane_fp_ParamLimits

0x7d61,	// (0x0003615c) list_single_pane_fp

0x7d76,	// (0x00036171) list_single_pane_fp_g1_ParamLimits

0x7d76,	// (0x00036171) list_single_pane_fp_g1

0x5a4b,	// (0x00033e46) list_single_pane_fp_g2_ParamLimits

0x5a4b,	// (0x00033e46) list_single_pane_fp_g2

0x8101,	// (0x000364fc) list_single_pane_fp_g3_ParamLimits

0x8101,	// (0x000364fc) list_single_pane_fp_g3

0x7d82,	// (0x0003617d) list_single_pane_fp_g4_ParamLimits

0x7d82,	// (0x0003617d) list_single_pane_fp_g4

0x0003,

0xfb92,	// (0x0003df8d) list_single_pane_fp_g_ParamLimits

0xfb92,	// (0x0003df8d) list_single_pane_fp_g

0x9a66,	// (0x00037e61) list_single_pane_fp_t1_ParamLimits

0x9a66,	// (0x00037e61) list_single_pane_fp_t1

0x9a7d,	// (0x00037e78) list_single_graphic_pane_fp_g1_ParamLimits

0x9a7d,	// (0x00037e78) list_single_graphic_pane_fp_g1

0x7d76,	// (0x00036171) list_single_graphic_pane_fp_g2_ParamLimits

0x7d76,	// (0x00036171) list_single_graphic_pane_fp_g2

0x5a4b,	// (0x00033e46) list_single_graphic_pane_fp_g3_ParamLimits

0x5a4b,	// (0x00033e46) list_single_graphic_pane_fp_g3

0x8101,	// (0x000364fc) list_single_graphic_pane_fp_g4_ParamLimits

0x8101,	// (0x000364fc) list_single_graphic_pane_fp_g4

0x7d82,	// (0x0003617d) list_single_graphic_pane_fp_g5_ParamLimits

0x7d82,	// (0x0003617d) list_single_graphic_pane_fp_g5

0x0004,

0xfb9b,	// (0x0003df96) list_single_graphic_pane_fp_g_ParamLimits

0xfb9b,	// (0x0003df96) list_single_graphic_pane_fp_g

0x9a89,	// (0x00037e84) list_single_graphic_pane_fp_t1_ParamLimits

0x9a89,	// (0x00037e84) list_single_graphic_pane_fp_t1

0x9a7d,	// (0x00037e78) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x9a7d,	// (0x00037e78) list_single_graphic_heading_pane_fp_g1

0x7d76,	// (0x00036171) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7d76,	// (0x00036171) list_single_graphic_heading_pane_fp_g2

0x5a4b,	// (0x00033e46) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5a4b,	// (0x00033e46) list_single_graphic_heading_pane_fp_g3

0x8101,	// (0x000364fc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8101,	// (0x000364fc) list_single_graphic_heading_pane_fp_g4

0x7d82,	// (0x0003617d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7d82,	// (0x0003617d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9b,	// (0x0003df96) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9b,	// (0x0003df96) list_single_graphic_heading_pane_fp_g

0x9a9f,	// (0x00037e9a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x9a9f,	// (0x00037e9a) list_single_graphic_heading_pane_fp_t1

0x9ab5,	// (0x00037eb0) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x9ab5,	// (0x00037eb0) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba6,	// (0x0003dfa1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba6,	// (0x0003dfa1) list_single_graphic_heading_pane_fp_t

0x9ac7,	// (0x00037ec2) list_single_cale_day_pane_fp_g1_ParamLimits

0x9ac7,	// (0x00037ec2) list_single_cale_day_pane_fp_g1

0x7d8e,	// (0x00036189) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d8e,	// (0x00036189) list_single_cale_day_pane_fp_g2

0xb9a0,	// (0x00039d9b) list_single_cale_day_pane_fp_g3_ParamLimits

0xb9a0,	// (0x00039d9b) list_single_cale_day_pane_fp_g3

0xb9c8,	// (0x00039dc3) list_single_cale_day_pane_fp_g4_ParamLimits

0xb9c8,	// (0x00039dc3) list_single_cale_day_pane_fp_g4

0xb9ec,	// (0x00039de7) list_single_cale_day_pane_fp_g5_ParamLimits

0xb9ec,	// (0x00039de7) list_single_cale_day_pane_fp_g5

0x0004,

0xfbab,	// (0x0003dfa6) list_single_cale_day_pane_fp_g_ParamLimits

0xfbab,	// (0x0003dfa6) list_single_cale_day_pane_fp_g

0x9aff,	// (0x00037efa) list_single_cale_day_pane_fp_t1_ParamLimits

0x9aff,	// (0x00037efa) list_single_cale_day_pane_fp_t1

0x9b25,	// (0x00037f20) list_single_cale_day_pane_fp_t2_ParamLimits

0x9b25,	// (0x00037f20) list_single_cale_day_pane_fp_t2

0x9b3e,	// (0x00037f39) list_single_cale_day_pane_fp_t3_ParamLimits

0x9b3e,	// (0x00037f39) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb6,	// (0x0003dfb1) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb6,	// (0x0003dfb1) list_single_cale_day_pane_fp_t

0x7d76,	// (0x00036171) list_empty_pane_fp_g1_ParamLimits

0x7d76,	// (0x00036171) list_empty_pane_fp_g1

0x9b57,	// (0x00037f52) list_empty_pane_fp_t1

0x9b65,	// (0x00037f60) list_empty_pane_fp_t2

0x0001,

0xfbbd,	// (0x0003dfb8) list_empty_pane_fp_t

0x7d76,	// (0x00036171) list_single_heading_pane_fp_g1_ParamLimits

0x7d76,	// (0x00036171) list_single_heading_pane_fp_g1

0x5a4b,	// (0x00033e46) list_single_heading_pane_fp_g2_ParamLimits

0x5a4b,	// (0x00033e46) list_single_heading_pane_fp_g2

0x8101,	// (0x000364fc) list_single_heading_pane_fp_g3_ParamLimits

0x8101,	// (0x000364fc) list_single_heading_pane_fp_g3

0x0002,

0xfbc2,	// (0x0003dfbd) list_single_heading_pane_fp_g_ParamLimits

0xfbc2,	// (0x0003dfbd) list_single_heading_pane_fp_g

0x9b73,	// (0x00037f6e) list_single_heading_pane_fp_t1_ParamLimits

0x9b73,	// (0x00037f6e) list_single_heading_pane_fp_t1

0x9b85,	// (0x00037f80) list_single_heading_pane_fp_t2_ParamLimits

0x9b85,	// (0x00037f80) list_single_heading_pane_fp_t2

0x0001,

0xfbc9,	// (0x0003dfc4) list_single_heading_pane_fp_t_ParamLimits

0xfbc9,	// (0x0003dfc4) list_single_heading_pane_fp_t

0x4cc6,	// (0x000330c1) aid_size_cell_fast

0x4677,	// (0x00032a72) soft_indicator_pane_cp1_t1

0x4d03,	// (0x000330fe) cell_app_pane_cp2_ParamLimits

0x4d03,	// (0x000330fe) cell_app_pane_cp2

0xb764,	// (0x00039b5f) fep_hwr_candidate_drop_down_list_pane

0x133e,	// (0x0002f739) fep_hwr_candidate_pane_g3_ParamLimits

0x133e,	// (0x0002f739) fep_hwr_candidate_pane_g3

0x134b,	// (0x0002f746) fep_hwr_candidate_pane_g4_ParamLimits

0x134b,	// (0x0002f746) fep_hwr_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0003df38) fep_hwr_candidate_pane_g_ParamLimits

0xfb3d,	// (0x0003df38) fep_hwr_candidate_pane_g

0x79c9,	// (0x00035dc4) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x79c9,	// (0x00035dc4) fep_vkb_candidate_drop_down_list_pane

0x7c4e,	// (0x00036049) fep_vkb_candidate_pane_g3

0x7c56,	// (0x00036051) fep_vkb_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0003df65) fep_vkb_candidate_pane_g

0x7a2e,	// (0x00035e29) cell_hwr_candidate_pane_g1_ParamLimits

0x7cc7,	// (0x000360c2) cell_hwr_candidate_pane_g3_ParamLimits

0x7cc7,	// (0x000360c2) cell_hwr_candidate_pane_g3

0x7ce8,	// (0x000360e3) cell_hwr_candidate_pane_g4_ParamLimits

0x7ce8,	// (0x000360e3) cell_hwr_candidate_pane_g4

0x0002,

0xfb84,	// (0x0003df7f) cell_hwr_candidate_pane_g_ParamLimits

0xfb84,	// (0x0003df7f) cell_hwr_candidate_pane_g

0x7c6d,	// (0x00036068) cell_vkb_candidate_pane_g3_ParamLimits

0x7c6d,	// (0x00036068) cell_vkb_candidate_pane_g3

0x7c88,	// (0x00036083) cell_vkb_candidate_pane_g4_ParamLimits

0x7c88,	// (0x00036083) cell_vkb_candidate_pane_g4

0x7d9a,	// (0x00036195) cell_app_pane_cp2_g1_ParamLimits

0x7d9a,	// (0x00036195) cell_app_pane_cp2_g1

0x7db8,	// (0x000361b3) cell_app_pane_cp2_g2_ParamLimits

0x7db8,	// (0x000361b3) cell_app_pane_cp2_g2

0x0001,

0xfbce,	// (0x0003dfc9) cell_app_pane_cp2_g_ParamLimits

0xfbce,	// (0x0003dfc9) cell_app_pane_cp2_g

0x7dc4,	// (0x000361bf) cell_app_pane_cp2_t1_ParamLimits

0x7dc4,	// (0x000361bf) cell_app_pane_cp2_t1

0x4b62,	// (0x00032f5d) grid_highlight_pane_cp1_ParamLimits

0x4b62,	// (0x00032f5d) grid_highlight_pane_cp1

0xba10,	// (0x00039e0b) cell_hwr_candidate_pane_cp1_ParamLimits

0xba10,	// (0x00039e0b) cell_hwr_candidate_pane_cp1

0x7a2e,	// (0x00035e29) fep_hwr_candidate_drop_down_list_pane_g1

0x7df6,	// (0x000361f1) fep_hwr_candidate_drop_down_list_pane_g2

0x7e03,	// (0x000361fe) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd3,	// (0x0003dfce) fep_hwr_candidate_drop_down_list_pane_g

0xba2f,	// (0x00039e2a) fep_hwr_candidate_drop_down_list_scroll_pane

0xba38,	// (0x00039e33) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xba38,	// (0x00039e33) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xba45,	// (0x00039e40) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xba45,	// (0x00039e40) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xba52,	// (0x00039e4d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xba52,	// (0x00039e4d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c6d,	// (0x00036068) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c6d,	// (0x00036068) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c88,	// (0x00036083) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c88,	// (0x00036083) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xba5f,	// (0x00039e5a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xba5f,	// (0x00039e5a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xba7a,	// (0x00039e75) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xba7a,	// (0x00039e75) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xba95,	// (0x00039e90) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xba95,	// (0x00039e90) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x0003dfd5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x0003dfd5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7dd6,	// (0x000361d1) cell_vkb_candidate_pane_cp1_ParamLimits

0x7dd6,	// (0x000361d1) cell_vkb_candidate_pane_cp1

0x7a2e,	// (0x00035e29) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7a2e,	// (0x00035e29) fep_vkb_candidate_drop_down_list_pane_g1

0x7df6,	// (0x000361f1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7df6,	// (0x000361f1) fep_vkb_candidate_drop_down_list_pane_g2

0x7e03,	// (0x000361fe) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7e03,	// (0x000361fe) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd3,	// (0x0003dfce) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd3,	// (0x0003dfce) fep_vkb_candidate_drop_down_list_pane_g

0x7e10,	// (0x0003620b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7e10,	// (0x0003620b) fep_vkb_candidate_drop_down_list_scroll_pane

0x7e1d,	// (0x00036218) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7e1d,	// (0x00036218) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7e2a,	// (0x00036225) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7e2a,	// (0x00036225) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7e36,	// (0x00036231) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7e36,	// (0x00036231) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7cc7,	// (0x000360c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7cc7,	// (0x000360c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7ce8,	// (0x000360e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7ce8,	// (0x000360e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7e42,	// (0x0003623d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7e42,	// (0x0003623d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7e63,	// (0x0003625e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7e63,	// (0x0003625e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7e84,	// (0x0003627f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7e84,	// (0x0003627f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbeb,	// (0x0003dfe6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbeb,	// (0x0003dfe6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa0ff,	// (0x000384fa) title_pane_g1_ParamLimits

0xa10c,	// (0x00038507) title_pane_g2_ParamLimits

0xf592,	// (0x0003d98d) title_pane_g_ParamLimits

0x5092,	// (0x0003348d) aid_call2_pane

0x508a,	// (0x00033485) aid_call_pane

0x509a,	// (0x00033495) popup_clock_analogue_window_g1

0x509a,	// (0x00033495) popup_clock_analogue_window_g2

0xa7ea,	// (0x00038be5) popup_clock_analogue_window_g3

0xa7f3,	// (0x00038bee) popup_clock_analogue_window_g4

0x3eaa,	// (0x000322a5) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0003db3c) popup_clock_analogue_window_g

0xa7fb,	// (0x00038bf6) popup_clock_analogue_window_t1

0xa836,	// (0x00038c31) clock_digital_number_pane_ParamLimits

0xa836,	// (0x00038c31) clock_digital_number_pane

0xa842,	// (0x00038c3d) clock_digital_number_pane_cp02_ParamLimits

0xa842,	// (0x00038c3d) clock_digital_number_pane_cp02

0xa84e,	// (0x00038c49) clock_digital_number_pane_cp03_ParamLimits

0xa84e,	// (0x00038c49) clock_digital_number_pane_cp03

0xa85a,	// (0x00038c55) clock_digital_number_pane_cp04_ParamLimits

0xa85a,	// (0x00038c55) clock_digital_number_pane_cp04

0xa866,	// (0x00038c61) clock_digital_separator_pane_ParamLimits

0xa866,	// (0x00038c61) clock_digital_separator_pane

0xa872,	// (0x00038c6d) popup_clock_digital_window_t1_ParamLimits

0xa872,	// (0x00038c6d) popup_clock_digital_window_t1

0x3eaa,	// (0x000322a5) clock_digital_number_pane_g1

0x3eaa,	// (0x000322a5) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0003db47) clock_digital_number_pane_g

0x3eaa,	// (0x000322a5) clock_digital_separator_pane_g1

0x3eaa,	// (0x000322a5) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0003db47) clock_digital_separator_pane_g

0xc4f5,	// (0x0003a8f0) aid_fill_nsta_ParamLimits

0xc5ba,	// (0x0003a9b5) indicator_nsta_pane_ParamLimits

0x59c6,	// (0x00033dc1) popup_clock_analogue_window

0x59c6,	// (0x00033dc1) popup_clock_digital_window

0x3f10,	// (0x0003230b) grid_indicator_nsta_pane_ParamLimits

0x754c,	// (0x00035947) clock_nsta_pane_t2

0x0001,

0xfaca,	// (0x0003dec5) clock_nsta_pane_t

0xa7ae,	// (0x00038ba9) aid_size_max_handle

0xa7b8,	// (0x00038bb3) aid_size_min_handle

0x5587,	// (0x00033982) editor_scroll_pane

0x7e9f,	// (0x0003629a) ex_editor_pane

0x4c81,	// (0x0003307c) scroll_pane_cp13

0x4b01,	// (0x00032efc) scroll_pane_cp14

0x50c4,	// (0x000334bf) scroll_pane_cp36

0xa81d,	// (0x00038c18) list_single_graphic_hl_pane_cp2_ParamLimits

0xa81d,	// (0x00038c18) list_single_graphic_hl_pane_cp2

0x984f,	// (0x00037c4a) list_single_graphic_hl_pane_ParamLimits

0x984f,	// (0x00037c4a) list_single_graphic_hl_pane

0x9b9b,	// (0x00037f96) aid_size_min_hl_cp1

0x7ea7,	// (0x000362a2) list_highlight_pane_cp34_ParamLimits

0x7ea7,	// (0x000362a2) list_highlight_pane_cp34

0x7eb8,	// (0x000362b3) list_single_graphic_hl_pane_g1_ParamLimits

0x7eb8,	// (0x000362b3) list_single_graphic_hl_pane_g1

0x9ba4,	// (0x00037f9f) list_single_graphic_hl_pane_g2_ParamLimits

0x9ba4,	// (0x00037f9f) list_single_graphic_hl_pane_g2

0x9ba4,	// (0x00037f9f) list_single_graphic_hl_pane_g3_ParamLimits

0x9ba4,	// (0x00037f9f) list_single_graphic_hl_pane_g3

0x54f8,	// (0x000338f3) list_single_graphic_hl_pane_g4_ParamLimits

0x54f8,	// (0x000338f3) list_single_graphic_hl_pane_g4

0xbab0,	// (0x00039eab) list_single_graphic_hl_pane_g5_ParamLimits

0xbab0,	// (0x00039eab) list_single_graphic_hl_pane_g5

0x0004,

0xfbfc,	// (0x0003dff7) list_single_graphic_hl_pane_g_ParamLimits

0xfbfc,	// (0x0003dff7) list_single_graphic_hl_pane_g

0x9bb0,	// (0x00037fab) list_single_graphic_hl_pane_t1_ParamLimits

0x9bb0,	// (0x00037fab) list_single_graphic_hl_pane_t1

0x7ec5,	// (0x000362c0) aid_size_min_hl_cp2

0x7ece,	// (0x000362c9) list_highlight_pane_cp34_cp2_ParamLimits

0x7ece,	// (0x000362c9) list_highlight_pane_cp34_cp2

0x7eb8,	// (0x000362b3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7eb8,	// (0x000362b3) list_single_graphic_hl_pane_g1_cp2

0x7edb,	// (0x000362d6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7edb,	// (0x000362d6) list_single_graphic_hl_pane_g2_cp2

0x7ee7,	// (0x000362e2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7ee7,	// (0x000362e2) list_single_graphic_hl_pane_g3_cp2

0x6f29,	// (0x00035324) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6f29,	// (0x00035324) list_single_graphic_hl_pane_g4_cp2

0x7ef5,	// (0x000362f0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7ef5,	// (0x000362f0) list_single_graphic_hl_pane_g5_cp2

0xacb4,	// (0x000390af) control_pane_g4_ParamLimits

0xacb4,	// (0x000390af) control_pane_g4

0x4cba,	// (0x000330b5) bg_popup_sub_pane_cp10_ParamLimits

0x7891,	// (0x00035c8c) list_choice_list_pane_ParamLimits

0x78a0,	// (0x00035c9b) scroll_pane_cp23

0x4694,	// (0x00032a8f) bg_popup_preview_window_pane_cp02_ParamLimits

0x7d1b,	// (0x00036116) list_preview_fixed_pane_ParamLimits

0x7d31,	// (0x0003612c) list_preview_fixed_pane_cp_ParamLimits

0x7d31,	// (0x0003612c) list_preview_fixed_pane_cp

0x7d3d,	// (0x00036138) popup_preview_fixed_window_g1_ParamLimits

0x7d3d,	// (0x00036138) popup_preview_fixed_window_g1

0x7d49,	// (0x00036144) popup_preview_fixed_window_g2_ParamLimits

0x7d49,	// (0x00036144) popup_preview_fixed_window_g2

0x0002,

0xfb8b,	// (0x0003df86) popup_preview_fixed_window_g_ParamLimits

0xfb8b,	// (0x0003df86) popup_preview_fixed_window_g

0xa6a1,	// (0x00038a9c) aid_navi_side_left_pane_ParamLimits

0xa6b6,	// (0x00038ab1) aid_navi_side_right_pane_ParamLimits

0xa6ce,	// (0x00038ac9) navi_icon_pane_stacon_ParamLimits

0xa6e2,	// (0x00038add) navi_navi_pane_stacon_ParamLimits

0xa6ce,	// (0x00038ac9) navi_text_pane_stacon_ParamLimits

0x3ea0,	// (0x0003229b) main_text_info_pane

0x7f1f,	// (0x0003631a) listscroll_text_info_pane

0x7f27,	// (0x00036322) list_text_info_pane_ParamLimits

0x7f27,	// (0x00036322) list_text_info_pane

0x7f36,	// (0x00036331) scroll_pane_cp24_ParamLimits

0x7f36,	// (0x00036331) scroll_pane_cp24

0xd207,	// (0x0003b602) list_text_info_pane_t1_ParamLimits

0xd207,	// (0x0003b602) list_text_info_pane_t1

0xae23,	// (0x0003921e) popup_fast_swap2_window_ParamLimits

0xae23,	// (0x0003921e) popup_fast_swap2_window

0x7f54,	// (0x0003634f) aid_size_cell_fast2

0x3ea0,	// (0x0003229b) bg_popup_window_pane_cp17

0x5ea2,	// (0x0003429d) heading_pane_cp2

0x4886,	// (0x00032c81) listscroll_fast2_pane

0x7f5e,	// (0x00036359) grid_fast2_pane

0x7f68,	// (0x00036363) listscroll_fast2_pane_g1

0x7f70,	// (0x0003636b) listscroll_fast2_pane_g2

0x0001,

0xfc07,	// (0x0003e002) listscroll_fast2_pane_g

0x4c81,	// (0x0003307c) scroll_pane_cp26

0x7f7a,	// (0x00036375) cell_fast2_pane_ParamLimits

0x7f7a,	// (0x00036375) cell_fast2_pane

0x7f8f,	// (0x0003638a) cell_fast2_pane_g1

0x7f98,	// (0x00036393) cell_fast2_pane_g2

0x7fa1,	// (0x0003639c) cell_fast2_pane_g3

0x0002,

0xfc0c,	// (0x0003e007) cell_fast2_pane_g

0x48c8,	// (0x00032cc3) grid_highlight_pane_cp9

0x48dd,	// (0x00032cd8) main_eswt_pane_ParamLimits

0x48dd,	// (0x00032cd8) main_eswt_pane

0x7f4b,	// (0x00036346) list_single_text_info_pane

0x7fa9,	// (0x000363a4) eswt_ctrl_button_pane

0x7fa9,	// (0x000363a4) eswt_ctrl_canvas_pane

0x7fb1,	// (0x000363ac) eswt_ctrl_combo_pane

0x7fa9,	// (0x000363a4) eswt_ctrl_default_pane

0x7fa9,	// (0x000363a4) eswt_ctrl_label_pane

0x7fb9,	// (0x000363b4) eswt_ctrl_wait_pane

0x7fc1,	// (0x000363bc) eswt_shell_pane

0x3ea0,	// (0x0003229b) listscroll_eswt_app_pane

0x7fe1,	// (0x000363dc) popup_eswt_tasktip_window_ParamLimits

0x7fe1,	// (0x000363dc) popup_eswt_tasktip_window

0x5bf5,	// (0x00033ff0) bg_popup_window_pane_cp18

0x7ff2,	// (0x000363ed) eswt_control_pane_g1_ParamLimits

0x7ff2,	// (0x000363ed) eswt_control_pane_g1

0x7fff,	// (0x000363fa) eswt_control_pane_g2_ParamLimits

0x7fff,	// (0x000363fa) eswt_control_pane_g2

0x800c,	// (0x00036407) eswt_control_pane_g3_ParamLimits

0x800c,	// (0x00036407) eswt_control_pane_g3

0x8019,	// (0x00036414) eswt_control_pane_g4_ParamLimits

0x8019,	// (0x00036414) eswt_control_pane_g4

0x0003,

0xfc13,	// (0x0003e00e) eswt_control_pane_g_ParamLimits

0xfc13,	// (0x0003e00e) eswt_control_pane_g

0x4b62,	// (0x00032f5d) bg_button_pane_ParamLimits

0x4b62,	// (0x00032f5d) bg_button_pane

0x48dd,	// (0x00032cd8) common_borders_pane_copy2_ParamLimits

0x48dd,	// (0x00032cd8) common_borders_pane_copy2

0x8026,	// (0x00036421) control_button_pane_g1_ParamLimits

0x8026,	// (0x00036421) control_button_pane_g1

0x8032,	// (0x0003642d) control_button_pane_g2_ParamLimits

0x8032,	// (0x0003642d) control_button_pane_g2

0x803e,	// (0x00036439) control_button_pane_g3_ParamLimits

0x803e,	// (0x00036439) control_button_pane_g3

0x0002,

0xfc1c,	// (0x0003e017) control_button_pane_g_ParamLimits

0xfc1c,	// (0x0003e017) control_button_pane_g

0x8052,	// (0x0003644d) control_button_pane_t1

0x8060,	// (0x0003645b) control_button_pane_t2

0x0001,

0xfc23,	// (0x0003e01e) control_button_pane_t

0x5b05,	// (0x00033f00) bg_button_pane_g1

0x5b15,	// (0x00033f10) bg_button_pane_g2

0x5b0d,	// (0x00033f08) bg_button_pane_g3

0x5b25,	// (0x00033f20) bg_button_pane_g4

0x5b1d,	// (0x00033f18) bg_button_pane_g5

0x5b2d,	// (0x00033f28) bg_button_pane_g6

0x5b35,	// (0x00033f30) bg_button_pane_g7

0x5b45,	// (0x00033f40) bg_button_pane_g8

0x5b3d,	// (0x00033f38) bg_button_pane_g9

0x0008,

0xf8a4,	// (0x0003dc9f) bg_button_pane_g

0x784c,	// (0x00035c47) common_borders_pane_ParamLimits

0x784c,	// (0x00035c47) common_borders_pane

0x7ff2,	// (0x000363ed) eswt_control_pane_g1_copy1_ParamLimits

0x7ff2,	// (0x000363ed) eswt_control_pane_g1_copy1

0x7fff,	// (0x000363fa) eswt_control_pane_g2_copy1_ParamLimits

0x7fff,	// (0x000363fa) eswt_control_pane_g2_copy1

0x800c,	// (0x00036407) eswt_control_pane_g3_copy1_ParamLimits

0x800c,	// (0x00036407) eswt_control_pane_g3_copy1

0x8019,	// (0x00036414) eswt_control_pane_g4_copy1_ParamLimits

0x8019,	// (0x00036414) eswt_control_pane_g4_copy1

0x7887,	// (0x00035c82) bg_eswt_ctrl_canvas_pane_g1

0x784c,	// (0x00035c47) common_borders_pane_cp2_ParamLimits

0x784c,	// (0x00035c47) common_borders_pane_cp2

0x784c,	// (0x00035c47) common_borders_pane_cp3_ParamLimits

0x784c,	// (0x00035c47) common_borders_pane_cp3

0x806e,	// (0x00036469) separator_horizontal_pane

0x8076,	// (0x00036471) separator_vertical_pane

0x7ff2,	// (0x000363ed) eswt_control_pane_g1_copy2_ParamLimits

0x7ff2,	// (0x000363ed) eswt_control_pane_g1_copy2

0x7fff,	// (0x000363fa) eswt_control_pane_g2_copy2_ParamLimits

0x7fff,	// (0x000363fa) eswt_control_pane_g2_copy2

0x800c,	// (0x00036407) eswt_control_pane_g3_copy2_ParamLimits

0x800c,	// (0x00036407) eswt_control_pane_g3_copy2

0x8019,	// (0x00036414) eswt_control_pane_g4_copy2_ParamLimits

0x8019,	// (0x00036414) eswt_control_pane_g4_copy2

0x3ea0,	// (0x0003229b) common_borders_pane_cp4

0x807f,	// (0x0003647a) separator_horizontal_pane_g1

0x8088,	// (0x00036483) separator_horizontal_pane_g2

0x8091,	// (0x0003648c) separator_horizontal_pane_g3

0x0002,

0xfc28,	// (0x0003e023) separator_horizontal_pane_g

0x7ff2,	// (0x000363ed) eswt_control_pane_g1_copy3_ParamLimits

0x7ff2,	// (0x000363ed) eswt_control_pane_g1_copy3

0x7fff,	// (0x000363fa) eswt_control_pane_g2_copy3_ParamLimits

0x7fff,	// (0x000363fa) eswt_control_pane_g2_copy3

0x800c,	// (0x00036407) eswt_control_pane_g3_copy3_ParamLimits

0x800c,	// (0x00036407) eswt_control_pane_g3_copy3

0x8019,	// (0x00036414) eswt_control_pane_g4_copy3_ParamLimits

0x8019,	// (0x00036414) eswt_control_pane_g4_copy3

0x3ea0,	// (0x0003229b) common_borders_pane_cp5

0x809a,	// (0x00036495) separator_vertical_pane_g1

0x80a3,	// (0x0003649e) separator_vertical_pane_g2

0x80ac,	// (0x000364a7) separator_vertical_pane_g3

0x0002,

0xfc2f,	// (0x0003e02a) separator_vertical_pane_g

0x7ff2,	// (0x000363ed) eswt_control_pane_g1_copy4_ParamLimits

0x7ff2,	// (0x000363ed) eswt_control_pane_g1_copy4

0x7fff,	// (0x000363fa) eswt_control_pane_g2_copy4_ParamLimits

0x7fff,	// (0x000363fa) eswt_control_pane_g2_copy4

0x800c,	// (0x00036407) eswt_control_pane_g3_copy4_ParamLimits

0x800c,	// (0x00036407) eswt_control_pane_g3_copy4

0x8019,	// (0x00036414) eswt_control_pane_g4_copy4_ParamLimits

0x8019,	// (0x00036414) eswt_control_pane_g4_copy4

0xd238,	// (0x0003b633) eswt_ctrl_combo_button_pane

0xd240,	// (0x0003b63b) eswt_ctrl_input_pane

0xd248,	// (0x0003b643) popup_choice_list_window_cp70

0xd250,	// (0x0003b64b) eswt_ctrl_input_pane_t1

0x3ea0,	// (0x0003229b) input_focus_pane_cp70

0x784c,	// (0x00035c47) bg_button_pane_cp70_ParamLimits

0x784c,	// (0x00035c47) bg_button_pane_cp70

0xd25e,	// (0x0003b659) eswt_ctrl_combo_button_pane_g1

0x80b5,	// (0x000364b0) wait_bar_pane_cp70

0x5bf5,	// (0x00033ff0) bg_popup_window_pane_cp70_ParamLimits

0x5bf5,	// (0x00033ff0) bg_popup_window_pane_cp70

0x80bd,	// (0x000364b8) popup_eswt_tasktip_window_t1

0x80d3,	// (0x000364ce) wait_bar_pane_cp71_ParamLimits

0x80d3,	// (0x000364ce) wait_bar_pane_cp71

0x80df,	// (0x000364da) grid_eswt_app_pane

0x4ecc,	// (0x000332c7) scroll_pane_cp70

0xd266,	// (0x0003b661) cell_eswt_app_pane_ParamLimits

0xd266,	// (0x0003b661) cell_eswt_app_pane

0xd296,	// (0x0003b691) cell_eswt_app_pane_g1_ParamLimits

0xd296,	// (0x0003b691) cell_eswt_app_pane_g1

0xd2c5,	// (0x0003b6c0) cell_eswt_app_pane_g2_ParamLimits

0xd2c5,	// (0x0003b6c0) cell_eswt_app_pane_g2

0x0001,

0xfc36,	// (0x0003e031) cell_eswt_app_pane_g_ParamLimits

0xfc36,	// (0x0003e031) cell_eswt_app_pane_g

0xd2ee,	// (0x0003b6e9) cell_eswt_app_pane_t1_ParamLimits

0xd2ee,	// (0x0003b6e9) cell_eswt_app_pane_t1

0x80e8,	// (0x000364e3) grid_highlight_pane_cp70_ParamLimits

0x80e8,	// (0x000364e3) grid_highlight_pane_cp70

0x545c,	// (0x00033857) set_content_pane_g1

0x5766,	// (0x00033b61) status_small_volume_pane

0xbac4,	// (0x00039ebf) status_small_volume_pane_g1

0xbacc,	// (0x00039ec7) volume_small2_pane

0xbad5,	// (0x00039ed0) volume_small2_pane_g1

0xbade,	// (0x00039ed9) volume_small2_pane_g2

0xbae7,	// (0x00039ee2) volume_small2_pane_g3

0xbaf0,	// (0x00039eeb) volume_small2_pane_g4

0xbaf9,	// (0x00039ef4) volume_small2_pane_g5

0xbb02,	// (0x00039efd) volume_small2_pane_g6

0xbb0b,	// (0x00039f06) volume_small2_pane_g7

0xbb14,	// (0x00039f0f) volume_small2_pane_g8

0xbb1d,	// (0x00039f18) volume_small2_pane_g9

0xbb26,	// (0x00039f21) volume_small2_pane_g10

0x0009,

0xfc3b,	// (0x0003e036) volume_small2_pane_g

0x7b3b,	// (0x00035f36) fep_vkb_top_text_pane_g1_ParamLimits

0xd179,	// (0x0003b574) fep_vkb_top_text_pane_t1_ParamLimits

0x7d55,	// (0x00036150) popup_preview_fixed_window_g3_ParamLimits

0x7d55,	// (0x00036150) popup_preview_fixed_window_g3

0xc488,	// (0x0003a883) popup_toolbar_trans_pane

0xcaad,	// (0x0003aea8) aid_height_set_list_ParamLimits

0x6841,	// (0x00034c3c) aid_size_parent_ParamLimits

0x4cba,	// (0x000330b5) list_highlight_pane_cp2_ParamLimits

0x545c,	// (0x00033857) set_content_pane_g1_ParamLimits

0xb58d,	// (0x00039988) list_single_image_pane_ParamLimits

0xb58d,	// (0x00039988) list_single_image_pane

0x80f4,	// (0x000364ef) aid_size_cell_image_ParamLimits

0x80f4,	// (0x000364ef) aid_size_cell_image

0xd320,	// (0x0003b71b) grid_single_image_pane_ParamLimits

0xd320,	// (0x0003b71b) grid_single_image_pane

0x5a4b,	// (0x00033e46) list_single_image_pane_g1_ParamLimits

0x5a4b,	// (0x00033e46) list_single_image_pane_g1

0x8101,	// (0x000364fc) list_single_image_pane_g2_ParamLimits

0x8101,	// (0x000364fc) list_single_image_pane_g2

0x0001,

0xfc50,	// (0x0003e04b) list_single_image_pane_g_ParamLimits

0xfc50,	// (0x0003e04b) list_single_image_pane_g

0x5a57,	// (0x00033e52) list_single_image_pane_t1_ParamLimits

0x5a57,	// (0x00033e52) list_single_image_pane_t1

0xd32e,	// (0x0003b729) cell_image_list_pane_ParamLimits

0xd32e,	// (0x0003b729) cell_image_list_pane

0x8115,	// (0x00036510) cell_image_list_pane_g1

0x811e,	// (0x00036519) cell_image_list_pane_g2

0x0001,

0xfc55,	// (0x0003e050) cell_image_list_pane_g

0x8127,	// (0x00036522) aid_size_cell_tb_trans_pane

0x4b62,	// (0x00032f5d) bg_tb_trans_pane

0x8139,	// (0x00036534) grid_tb_trans_pane

0x5b05,	// (0x00033f00) bg_tb_trans_pane_g1

0x5b15,	// (0x00033f10) bg_tb_trans_pane_g2

0x5b0d,	// (0x00033f08) bg_tb_trans_pane_g3

0x5b25,	// (0x00033f20) bg_tb_trans_pane_g4

0x5b1d,	// (0x00033f18) bg_tb_trans_pane_g5

0x5b45,	// (0x00033f40) bg_tb_trans_pane_g6

0x5b3d,	// (0x00033f38) bg_tb_trans_pane_g7

0x5b2d,	// (0x00033f28) bg_tb_trans_pane_g8

0x5b35,	// (0x00033f30) bg_tb_trans_pane_g9

0x0008,

0xfc5a,	// (0x0003e055) bg_tb_trans_pane_g

0x814d,	// (0x00036548) cell_toolbar_trans_pane_ParamLimits

0x814d,	// (0x00036548) cell_toolbar_trans_pane

0x7887,	// (0x00035c82) cell_toolbar_trans_pane_g1

0xcebb,	// (0x0003b2b6) list_form2_midp_pane_t1

0xcec9,	// (0x0003b2c4) list_form2_midp_pane_t2

0x0001,

0xfb03,	// (0x0003defe) list_form2_midp_pane_t

0x75cb,	// (0x000359c6) scroll_pane_cp51_ParamLimits

0x7750,	// (0x00035b4b) form2_midp_wait_pane_g1

0x7759,	// (0x00035b54) form2_midp_wait_pane_g2

0x7762,	// (0x00035b5d) form2_midp_wait_pane_g3

0x0002,

0xfb18,	// (0x0003df13) form2_midp_wait_pane_g

0x3f10,	// (0x0003230b) list_highlight_pane_cp21_ParamLimits

0x778a,	// (0x00035b85) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7799,	// (0x00035b94) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb531,	// (0x0003992c) list_single_2graphic_im_pane_ParamLimits

0xb531,	// (0x0003992c) list_single_2graphic_im_pane

0xd341,	// (0x0003b73c) list_single_2graphic_im_pane_g1_ParamLimits

0xd341,	// (0x0003b73c) list_single_2graphic_im_pane_g1

0xd352,	// (0x0003b74d) list_single_2graphic_im_pane_g2_ParamLimits

0xd352,	// (0x0003b74d) list_single_2graphic_im_pane_g2

0xd35e,	// (0x0003b759) list_single_2graphic_im_pane_g3_ParamLimits

0xd35e,	// (0x0003b759) list_single_2graphic_im_pane_g3

0x0003,

0xfc6d,	// (0x0003e068) list_single_2graphic_im_pane_g_ParamLimits

0xfc6d,	// (0x0003e068) list_single_2graphic_im_pane_g

0xd372,	// (0x0003b76d) list_single_2graphic_im_pane_t1_ParamLimits

0xd372,	// (0x0003b76d) list_single_2graphic_im_pane_t1

0x7d61,	// (0x0003615c) list_single_graphic_2heading_pane_fp_ParamLimits

0x7d61,	// (0x0003615c) list_single_graphic_2heading_pane_fp

0x9a7d,	// (0x00037e78) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x9a7d,	// (0x00037e78) list_single_graphic_2heading_pane_fp_g1

0x7d76,	// (0x00036171) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7d76,	// (0x00036171) list_single_graphic_2heading_pane_fp_g2

0x5a4b,	// (0x00033e46) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5a4b,	// (0x00033e46) list_single_graphic_2heading_pane_fp_g3

0x8101,	// (0x000364fc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8101,	// (0x000364fc) list_single_graphic_2heading_pane_fp_g4

0x7d82,	// (0x0003617d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7d82,	// (0x0003617d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9b,	// (0x0003df96) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9b,	// (0x0003df96) list_single_graphic_2heading_pane_fp_g

0x9bc6,	// (0x00037fc1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x9bc6,	// (0x00037fc1) list_single_graphic_2heading_pane_fp_t1

0x9ab5,	// (0x00037eb0) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x9ab5,	// (0x00037eb0) list_single_graphic_2heading_pane_fp_t2

0x9bdc,	// (0x00037fd7) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x9bdc,	// (0x00037fd7) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc76,	// (0x0003e071) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc76,	// (0x0003e071) list_single_graphic_2heading_pane_fp_t

0x7927,	// (0x00035d22) fep_hwr_write_pane_g5_ParamLimits

0x7927,	// (0x00035d22) fep_hwr_write_pane_g5

0x7933,	// (0x00035d2e) fep_hwr_write_pane_g6_ParamLimits

0x7933,	// (0x00035d2e) fep_hwr_write_pane_g6

0x7fc1,	// (0x000363bc) eswt_shell_pane_ParamLimits

0x5bf5,	// (0x00033ff0) bg_popup_window_pane_cp18_ParamLimits

0x6bff,	// (0x00034ffa) heading_pane_cp70

0x80bd,	// (0x000364b8) popup_eswt_tasktip_window_t1_ParamLimits

0xc535,	// (0x0003a930) aid_touch_tab_arrow_left

0xc541,	// (0x0003a93c) aid_touch_tab_arrow_right

0xa11d,	// (0x00038518) title_pane_g3_ParamLimits

0xa11d,	// (0x00038518) title_pane_g3

0x4b21,	// (0x00032f1c) set_value_pane_g1

0xc488,	// (0x0003a883) popup_toolbar_trans_pane_ParamLimits

0x8127,	// (0x00036522) aid_size_cell_tb_trans_pane_ParamLimits

0x4b62,	// (0x00032f5d) bg_tb_trans_pane_ParamLimits

0x8139,	// (0x00036534) grid_tb_trans_pane_ParamLimits

0x4694,	// (0x00032a8f) cont_note_pane_ParamLimits

0x4694,	// (0x00032a8f) cont_note_pane

0x48dd,	// (0x00032cd8) cont_snote2_single_text_pane_ParamLimits

0x48dd,	// (0x00032cd8) cont_snote2_single_text_pane

0x48dd,	// (0x00032cd8) cont_snote2_single_graphic_pane_ParamLimits

0x48dd,	// (0x00032cd8) cont_snote2_single_graphic_pane

0x608c,	// (0x00034487) cont_note_wait_pane_ParamLimits

0x608c,	// (0x00034487) cont_note_wait_pane

0x608c,	// (0x00034487) cont_note_image_pane_ParamLimits

0x608c,	// (0x00034487) cont_note_image_pane

0x817f,	// (0x0003657a) popup_note2_window_g1_ParamLimits

0x817f,	// (0x0003657a) popup_note2_window_g1

0x81b0,	// (0x000365ab) popup_note2_window_t1_ParamLimits

0x81b0,	// (0x000365ab) popup_note2_window_t1

0x81f5,	// (0x000365f0) popup_note2_window_t2_ParamLimits

0x81f5,	// (0x000365f0) popup_note2_window_t2

0x823a,	// (0x00036635) popup_note2_window_t3_ParamLimits

0x823a,	// (0x00036635) popup_note2_window_t3

0x827f,	// (0x0003667a) popup_note2_window_t4_ParamLimits

0x827f,	// (0x0003667a) popup_note2_window_t4

0x4718,	// (0x00032b13) popup_note2_window_t5_ParamLimits

0x4718,	// (0x00032b13) popup_note2_window_t5

0x0004,

0xfc82,	// (0x0003e07d) popup_note2_window_t_ParamLimits

0xfc82,	// (0x0003e07d) popup_note2_window_t

0x82ae,	// (0x000366a9) popup_note2_image_window_g1_ParamLimits

0x82ae,	// (0x000366a9) popup_note2_image_window_g1

0x82ba,	// (0x000366b5) popup_note2_image_window_g2_ParamLimits

0x82ba,	// (0x000366b5) popup_note2_image_window_g2

0x0001,

0xfc8d,	// (0x0003e088) popup_note2_image_window_g_ParamLimits

0xfc8d,	// (0x0003e088) popup_note2_image_window_g

0x82cc,	// (0x000366c7) popup_note2_image_window_t1_ParamLimits

0x82cc,	// (0x000366c7) popup_note2_image_window_t1

0x82e4,	// (0x000366df) popup_note2_image_window_t2_ParamLimits

0x82e4,	// (0x000366df) popup_note2_image_window_t2

0x82fc,	// (0x000366f7) popup_note2_image_window_t3_ParamLimits

0x82fc,	// (0x000366f7) popup_note2_image_window_t3

0x0002,

0xfc92,	// (0x0003e08d) popup_note2_image_window_t_ParamLimits

0xfc92,	// (0x0003e08d) popup_note2_image_window_t

0x609a,	// (0x00034495) popup_note2_wait_window_g1_ParamLimits

0x609a,	// (0x00034495) popup_note2_wait_window_g1

0x8318,	// (0x00036713) popup_note2_wait_window_g2_ParamLimits

0x8318,	// (0x00036713) popup_note2_wait_window_g2

0x60b2,	// (0x000344ad) popup_note2_wait_window_g3_ParamLimits

0x60b2,	// (0x000344ad) popup_note2_wait_window_g3

0x0002,

0xfc99,	// (0x0003e094) popup_note2_wait_window_g_ParamLimits

0xfc99,	// (0x0003e094) popup_note2_wait_window_g

0x8324,	// (0x0003671f) popup_note2_wait_window_t1_ParamLimits

0x8324,	// (0x0003671f) popup_note2_wait_window_t1

0x8342,	// (0x0003673d) popup_note2_wait_window_t2_ParamLimits

0x8342,	// (0x0003673d) popup_note2_wait_window_t2

0x8360,	// (0x0003675b) popup_note2_wait_window_t3_ParamLimits

0x8360,	// (0x0003675b) popup_note2_wait_window_t3

0x8372,	// (0x0003676d) popup_note2_wait_window_t4_ParamLimits

0x8372,	// (0x0003676d) popup_note2_wait_window_t4

0x0003,

0xfca0,	// (0x0003e09b) popup_note2_wait_window_t_ParamLimits

0xfca0,	// (0x0003e09b) popup_note2_wait_window_t

0x8384,	// (0x0003677f) wait_bar2_pane_ParamLimits

0x8384,	// (0x0003677f) wait_bar2_pane

0x839c,	// (0x00036797) popup_snote2_single_text_window_g1_ParamLimits

0x839c,	// (0x00036797) popup_snote2_single_text_window_g1

0x83c4,	// (0x000367bf) popup_snote2_single_text_window_t1_ParamLimits

0x83c4,	// (0x000367bf) popup_snote2_single_text_window_t1

0x8410,	// (0x0003680b) popup_snote2_single_text_window_t2_ParamLimits

0x8410,	// (0x0003680b) popup_snote2_single_text_window_t2

0x845c,	// (0x00036857) popup_snote2_single_text_window_t3_ParamLimits

0x845c,	// (0x00036857) popup_snote2_single_text_window_t3

0x849d,	// (0x00036898) popup_snote2_single_text_window_t4_ParamLimits

0x849d,	// (0x00036898) popup_snote2_single_text_window_t4

0x84d3,	// (0x000368ce) popup_snote2_single_text_window_t5_ParamLimits

0x84d3,	// (0x000368ce) popup_snote2_single_text_window_t5

0x0004,

0xfca9,	// (0x0003e0a4) popup_snote2_single_text_window_t_ParamLimits

0xfca9,	// (0x0003e0a4) popup_snote2_single_text_window_t

0x84fe,	// (0x000368f9) popup_snote2_single_graphic_window_g1_ParamLimits

0x84fe,	// (0x000368f9) popup_snote2_single_graphic_window_g1

0x8526,	// (0x00036921) popup_snote2_single_graphic_window_g2_ParamLimits

0x8526,	// (0x00036921) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb4,	// (0x0003e0af) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb4,	// (0x0003e0af) popup_snote2_single_graphic_window_g

0x854e,	// (0x00036949) popup_snote2_single_graphic_window_t1_ParamLimits

0x854e,	// (0x00036949) popup_snote2_single_graphic_window_t1

0x859a,	// (0x00036995) popup_snote2_single_graphic_window_t2_ParamLimits

0x859a,	// (0x00036995) popup_snote2_single_graphic_window_t2

0x845c,	// (0x00036857) popup_snote2_single_graphic_window_t3_ParamLimits

0x845c,	// (0x00036857) popup_snote2_single_graphic_window_t3

0x849d,	// (0x00036898) popup_snote2_single_graphic_window_t4_ParamLimits

0x849d,	// (0x00036898) popup_snote2_single_graphic_window_t4

0x84d3,	// (0x000368ce) popup_snote2_single_graphic_window_t5_ParamLimits

0x84d3,	// (0x000368ce) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb9,	// (0x0003e0b4) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb9,	// (0x0003e0b4) popup_snote2_single_graphic_window_t

0x7581,	// (0x0003597c) clock_nsta_pane_cp2_t1

0x7581,	// (0x0003597c) clock_nsta_pane_cp2_t2

0x0001,

0xfad9,	// (0x0003ded4) clock_nsta_pane_cp2_t

0x94b9,	// (0x000378b4) form_field_data_wide_pane_g1_ParamLimits

0x4b7c,	// (0x00032f77) form_field_data_wide_pane_g2_ParamLimits

0x4b7c,	// (0x00032f77) form_field_data_wide_pane_g2

0x4b88,	// (0x00032f83) form_field_data_wide_pane_g3_ParamLimits

0x4b88,	// (0x00032f83) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0003dabf) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0003dabf) form_field_data_wide_pane_g

0xcd84,	// (0x0003b17f) grid_touch_3_pane_ParamLimits

0xcd84,	// (0x0003b17f) grid_touch_3_pane

0xd3a3,	// (0x0003b79e) cell_touch_3_pane_ParamLimits

0xd3a3,	// (0x0003b79e) cell_touch_3_pane

0x7887,	// (0x00035c82) cell_touch_3_pane_g1

0x7887,	// (0x00035c82) cell_touch_3_pane_g2

0x0001,

0xfb5e,	// (0x0003df59) cell_touch_3_pane_g

0x474a,	// (0x00032b45) cont_query_data_pane

0x4752,	// (0x00032b4d) cont_query_data_pane_cp1

0xd3d1,	// (0x0003b7cc) button_value_adjust_pane_cp7

0xd3d9,	// (0x0003b7d4) query_popup_pane_cp3

0x50f6,	// (0x000334f1) bg_popup_sub_pane_cp22_ParamLimits

0xa8cd,	// (0x00038cc8) navi_navi_volume_pane_cp2

0xa8e8,	// (0x00038ce3) popup_side_volume_key_window_g2

0xa8f7,	// (0x00038cf2) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0003db51) popup_side_volume_key_window_g

0xa914,	// (0x00038d0f) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0003db58) popup_side_volume_key_window_t

0x5326,	// (0x00033721) popup_side_volume_key_window_ParamLimits

0x90c6,	// (0x000374c1) list_double_graphic_pane_g4_ParamLimits

0x90c6,	// (0x000374c1) list_double_graphic_pane_g4

0xb56e,	// (0x00039969) list_single_2heading_msg_pane_ParamLimits

0xb56e,	// (0x00039969) list_single_2heading_msg_pane

0xbb2f,	// (0x00039f2a) list_single_2heading_msg_pane_g1_ParamLimits

0xbb2f,	// (0x00039f2a) list_single_2heading_msg_pane_g1

0x54c0,	// (0x000338bb) list_single_2heading_msg_pane_g2_ParamLimits

0x54c0,	// (0x000338bb) list_single_2heading_msg_pane_g2

0xbb3b,	// (0x00039f36) list_single_2heading_msg_pane_g3_ParamLimits

0xbb3b,	// (0x00039f36) list_single_2heading_msg_pane_g3

0xbb47,	// (0x00039f42) list_single_2heading_msg_pane_g4_ParamLimits

0xbb47,	// (0x00039f42) list_single_2heading_msg_pane_g4

0x0003,

0xfcc4,	// (0x0003e0bf) list_single_2heading_msg_pane_g_ParamLimits

0xfcc4,	// (0x0003e0bf) list_single_2heading_msg_pane_g

0x9bfc,	// (0x00037ff7) list_single_2heading_msg_pane_t1_ParamLimits

0x9bfc,	// (0x00037ff7) list_single_2heading_msg_pane_t1

0x9c24,	// (0x0003801f) list_single_2heading_msg_pane_t2_ParamLimits

0x9c24,	// (0x0003801f) list_single_2heading_msg_pane_t2

0x9c58,	// (0x00038053) list_single_2heading_msg_pane_t3_ParamLimits

0x9c58,	// (0x00038053) list_single_2heading_msg_pane_t3

0x9c91,	// (0x0003808c) list_single_2heading_msg_pane_t4_ParamLimits

0x9c91,	// (0x0003808c) list_single_2heading_msg_pane_t4

0x0003,

0xfccd,	// (0x0003e0c8) list_single_2heading_msg_pane_t_ParamLimits

0xfccd,	// (0x0003e0c8) list_single_2heading_msg_pane_t

0x3ebe,	// (0x000322b9) title_pane_g4_ParamLimits

0x3ebe,	// (0x000322b9) title_pane_g4

0xa5f1,	// (0x000389ec) title_pane_stacon_g3_ParamLimits

0xa5f1,	// (0x000389ec) title_pane_stacon_g3

0x8173,	// (0x0003656e) list_single_2graphic_im_pane_g4_ParamLimits

0x8173,	// (0x0003656e) list_single_2graphic_im_pane_g4

0x6a23,	// (0x00034e1e) popup_side_volume_key_window_cp

0x6ef0,	// (0x000352eb) main_idle_act2_pane_t1

0xb1ec,	// (0x000395e7) toolbar_button_pane_g10

0xa475,	// (0x00038870) popup_toolbar_window_cp1

0x7572,	// (0x0003596d) clock_nsta_pane_cp_t1

0x7572,	// (0x0003596d) clock_nsta_pane_cp_t2

0x0001,

0xfad4,	// (0x0003decf) clock_nsta_pane_cp_t

0xa8cd,	// (0x00038cc8) navi_navi_volume_pane_cp2_ParamLimits

0xa8dc,	// (0x00038cd7) popup_side_volume_key_window_g1_ParamLimits

0xa8e8,	// (0x00038ce3) popup_side_volume_key_window_g2_ParamLimits

0xa8f7,	// (0x00038cf2) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0003db51) popup_side_volume_key_window_g_ParamLimits

0xb750,	// (0x00039b4b) fep_hwr_aid_pane

0x0fde,	// (0x0002f3d9) bg_fep_hwr_top_pane_g4_ParamLimits

0x7909,	// (0x00035d04) fep_hwr_top_pane_g1_ParamLimits

0x78f7,	// (0x00035cf2) fep_hwr_top_pane_g2_ParamLimits

0xb809,	// (0x00039c04) fep_hwr_top_pane_g3_ParamLimits

0xfb29,	// (0x0003df24) fep_hwr_top_pane_g_ParamLimits

0xb81e,	// (0x00039c19) fep_hwr_top_text_pane_ParamLimits

0x67d1,	// (0x00034bcc) aid_touch_tab_arrow_arrow_2

0x67c8,	// (0x00034bc3) aid_touch_tab_arrow_left_2

0xb764,	// (0x00039b5f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xb79b,	// (0x00039b96) fep_hwr_prediction_pane

0x79f6,	// (0x00035df1) fep_vkb_prediction_pane

0xd156,	// (0x0003b551) fep_vkb_side_pane_g3_ParamLimits

0xd156,	// (0x0003b551) fep_vkb_side_pane_g3

0x7a2e,	// (0x00035e29) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7df6,	// (0x000361f1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7e03,	// (0x000361fe) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd3,	// (0x0003dfce) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd3fe,	// (0x0003b7f9) fep_hwr_prediction_pane_g1

0xbb5f,	// (0x00039f5a) fep_hwr_prediction_pane_g2

0xbb67,	// (0x00039f62) fep_hwr_prediction_pane_g3

0xbb6f,	// (0x00039f6a) fep_hwr_prediction_pane_g4

0x0003,

0xfcd6,	// (0x0003e0d1) fep_hwr_prediction_pane_g

0xd3fe,	// (0x0003b7f9) fep_vkb_prediction_pane_g1

0xd408,	// (0x0003b803) fep_vkb_prediction_pane_g2

0xd410,	// (0x0003b80b) fep_vkb_prediction_pane_g3

0xd418,	// (0x0003b813) fep_vkb_prediction_pane_g4

0x0003,

0xfcdf,	// (0x0003e0da) fep_vkb_prediction_pane_g

0xb4c8,	// (0x000398c3) slider_set_pane_g3

0xb4dc,	// (0x000398d7) slider_set_pane_g4

0xb4f4,	// (0x000398ef) slider_set_pane_g5

0xb4c8,	// (0x000398c3) slider_set_pane_g6

0xb50a,	// (0x00039905) slider_set_pane_g7

0x6c8a,	// (0x00035085) slider_form_pane_g3

0x6c93,	// (0x0003508e) slider_form_pane_g4

0x6c9b,	// (0x00035096) slider_form_pane_g5

0x6c8a,	// (0x00035085) slider_form_pane_g6

0xcc08,	// (0x0003b003) slider_form_pane_g7

0x714e,	// (0x00035549) slider_set_pane_vc_g3

0x7157,	// (0x00035552) slider_set_pane_vc_g4

0x7160,	// (0x0003555b) slider_set_pane_vc_g5

0x714e,	// (0x00035549) slider_set_pane_vc_g6

0x7169,	// (0x00035564) slider_set_pane_vc_g7

0x714e,	// (0x00035549) slider_form_pane_vc_g1

0x7157,	// (0x00035552) slider_form_pane_vc_g2

0x7160,	// (0x0003555b) slider_form_pane_vc_g3

0x714e,	// (0x00035549) slider_form_pane_vc_g4

0x731c,	// (0x00035717) slider_form_pane_vc_g5

0x0004,

0xfaba,	// (0x0003deb5) slider_form_pane_vc_g

0x3ea0,	// (0x0003229b) main_idle_act3_pane

0xd420,	// (0x0003b81b) ai3_links_pane

0xd429,	// (0x0003b824) popup_ai3_data_window_ParamLimits

0xd429,	// (0x0003b824) popup_ai3_data_window

0x3ea0,	// (0x0003229b) grid_ai3_links_pane

0xd443,	// (0x0003b83e) cell_ai3_links_pane_ParamLimits

0xd443,	// (0x0003b83e) cell_ai3_links_pane

0xd45b,	// (0x0003b856) bg_popup_sub_pane_cp11

0xd468,	// (0x0003b863) cell_ai3_links_pane_g1

0x3ea0,	// (0x0003229b) bg_popup_sub_pane_cp12

0xd48d,	// (0x0003b888) heading_ai3_data_pane

0xd495,	// (0x0003b890) list_ai3_gene_pane

0xd4a1,	// (0x0003b89c) popup_ai3_data_window_g1

0xd4a9,	// (0x0003b8a4) heading_ai3_data_pane_g1

0xd4b1,	// (0x0003b8ac) heading_ai3_data_pane_t1

0xd4bf,	// (0x0003b8ba) list_double_ai3_gene_pane_ParamLimits

0xd4bf,	// (0x0003b8ba) list_double_ai3_gene_pane

0xd4cc,	// (0x0003b8c7) list_single_ai3_gene_pane_ParamLimits

0xd4cc,	// (0x0003b8c7) list_single_ai3_gene_pane

0x784c,	// (0x00035c47) list_highlight_pane_cp7_ParamLimits

0x784c,	// (0x00035c47) list_highlight_pane_cp7

0xd4d9,	// (0x0003b8d4) list_single_a13_gene_pane_t1_ParamLimits

0xd4d9,	// (0x0003b8d4) list_single_a13_gene_pane_t1

0xd4f0,	// (0x0003b8eb) list_single_ai3_gene_pane_g1

0xd4f9,	// (0x0003b8f4) list_single_ai3_gene_pane_g2

0x0001,

0xfce8,	// (0x0003e0e3) list_single_ai3_gene_pane_g

0xd501,	// (0x0003b8fc) list_double_ai3_gene_pane_g1_ParamLimits

0xd501,	// (0x0003b8fc) list_double_ai3_gene_pane_g1

0xd50d,	// (0x0003b908) list_double_ai3_gene_pane_t1_ParamLimits

0xd50d,	// (0x0003b908) list_double_ai3_gene_pane_t1

0xd529,	// (0x0003b924) list_double_ai3_gene_pane_t2_ParamLimits

0xd529,	// (0x0003b924) list_double_ai3_gene_pane_t2

0xd53f,	// (0x0003b93a) list_double_ai3_gene_pane_t3_ParamLimits

0xd53f,	// (0x0003b93a) list_double_ai3_gene_pane_t3

0x0002,

0xfced,	// (0x0003e0e8) list_double_ai3_gene_pane_t_ParamLimits

0xfced,	// (0x0003e0e8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9bf2,	// (0x00037fed) aid_size_min_col_2

0xd3ea,	// (0x0003b7e5) aid_size_min_msg_ParamLimits

0xd3ea,	// (0x0003b7e5) aid_size_min_msg

0xd16a,	// (0x0003b565) fep_vkb_top_text_pane_g2_ParamLimits

0xd16a,	// (0x0003b565) fep_vkb_top_text_pane_g2

0x0001,

0xfb59,	// (0x0003df54) fep_vkb_top_text_pane_g_ParamLimits

0xfb59,	// (0x0003df54) fep_vkb_top_text_pane_g

0x3ea0,	// (0x0003229b) main_hc_apps_shell_pane

0xd55c,	// (0x0003b957) grid_hc_apps_pane_ParamLimits

0xd55c,	// (0x0003b957) grid_hc_apps_pane

0xd56b,	// (0x0003b966) list_hc_apps_pane

0xd573,	// (0x0003b96e) scroll_pane_cp37_ParamLimits

0xd573,	// (0x0003b96e) scroll_pane_cp37

0xd57f,	// (0x0003b97a) cell_hc_apps_pane_ParamLimits

0xd57f,	// (0x0003b97a) cell_hc_apps_pane

0xd62d,	// (0x0003ba28) cell_hc_apps_pane_g1_ParamLimits

0xd62d,	// (0x0003ba28) cell_hc_apps_pane_g1

0xd65e,	// (0x0003ba59) cell_hc_apps_pane_g2_ParamLimits

0xd65e,	// (0x0003ba59) cell_hc_apps_pane_g2

0xd67a,	// (0x0003ba75) cell_hc_apps_pane_g3_ParamLimits

0xd67a,	// (0x0003ba75) cell_hc_apps_pane_g3

0x0002,

0xfcf4,	// (0x0003e0ef) cell_hc_apps_pane_g_ParamLimits

0xfcf4,	// (0x0003e0ef) cell_hc_apps_pane_g

0xd69c,	// (0x0003ba97) cell_hc_apps_pane_t1_ParamLimits

0xd69c,	// (0x0003ba97) cell_hc_apps_pane_t1

0x4694,	// (0x00032a8f) grid_highlight_pane_cp10_ParamLimits

0x4694,	// (0x00032a8f) grid_highlight_pane_cp10

0xd6dc,	// (0x0003bad7) list_single_hc_apps_pane_ParamLimits

0xd6dc,	// (0x0003bad7) list_single_hc_apps_pane

0xd738,	// (0x0003bb33) list_single_hc_apps_pane_g1

0xbb77,	// (0x00039f72) list_single_hc_apps_pane_g2

0x0001,

0xfcfb,	// (0x0003e0f6) list_single_hc_apps_pane_g

0xbb90,	// (0x00039f8b) list_single_hc_apps_pane_g2_copy1

0x9cb6,	// (0x000380b1) list_single_hc_apps_pane_t1

0x3f10,	// (0x0003230b) bg_set_opt_pane_cp_ParamLimits

0xa1cd,	// (0x000385c8) setting_slider_pane_t1_ParamLimits

0xa1e6,	// (0x000385e1) setting_slider_pane_t2_ParamLimits

0xa200,	// (0x000385fb) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0003d99d) setting_slider_pane_t_ParamLimits

0xa218,	// (0x00038613) slider_set_pane_ParamLimits

0xacc0,	// (0x000390bb) control_pane_g5_ParamLimits

0xacc0,	// (0x000390bb) control_pane_g5

0x6c46,	// (0x00035041) slider_set_pane_g1_ParamLimits

0xb4bc,	// (0x000398b7) slider_set_pane_g2_ParamLimits

0xb4c8,	// (0x000398c3) slider_set_pane_g3_ParamLimits

0xb4dc,	// (0x000398d7) slider_set_pane_g4_ParamLimits

0xb4f4,	// (0x000398ef) slider_set_pane_g5_ParamLimits

0xb4c8,	// (0x000398c3) slider_set_pane_g6_ParamLimits

0xb50a,	// (0x00039905) slider_set_pane_g7_ParamLimits

0xf9a2,	// (0x0003dd9d) slider_set_pane_g_ParamLimits

0x5407,	// (0x00033802) navi_icon_text_pane_ParamLimits

0xc50b,	// (0x0003a906) aid_fill_nsta_2_ParamLimits

0xc535,	// (0x0003a930) aid_touch_tab_arrow_left_ParamLimits

0xc541,	// (0x0003a93c) aid_touch_tab_arrow_right_ParamLimits

0xc5ad,	// (0x0003a9a8) clock_nsta_pane_ParamLimits

0xc9e7,	// (0x0003ade2) navi_icon_pane_g1_ParamLimits

0xc9f6,	// (0x0003adf1) navi_text_pane_t1_ParamLimits

0xce97,	// (0x0003b292) navi_icon_text_pane_g1_ParamLimits

0xcea6,	// (0x0003b2a1) navi_icon_text_pane_t1_ParamLimits

0xd738,	// (0x0003bb33) list_single_hc_apps_pane_g1_ParamLimits

0xbb77,	// (0x00039f72) list_single_hc_apps_pane_g2_ParamLimits

0xfcfb,	// (0x0003e0f6) list_single_hc_apps_pane_g_ParamLimits

0xbb90,	// (0x00039f8b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9cb6,	// (0x000380b1) list_single_hc_apps_pane_t1_ParamLimits

0xa01b,	// (0x00038416) popup_toolbar2_fixed_window_ParamLimits

0xa01b,	// (0x00038416) popup_toolbar2_fixed_window

0xc47e,	// (0x0003a879) popup_toolbar2_float_window

0x3ea0,	// (0x0003229b) bg_popup_sub_pane_cp27

0xd751,	// (0x0003bb4c) grid_toolbar2_float_pane

0x3ea0,	// (0x0003229b) bg_popup_sub_pane_cp26

0xd751,	// (0x0003bb4c) grid_toolbar2_fixed_pane

0xd759,	// (0x0003bb54) cell_toolbar2_fixed_pane_ParamLimits

0xd759,	// (0x0003bb54) cell_toolbar2_fixed_pane

0xd769,	// (0x0003bb64) cell_toolbar2_fixed_pane_g1

0xd772,	// (0x0003bb6d) toolbar2_fixed_button_pane

0x5b05,	// (0x00033f00) toolbar2_fixed_button_pane_g1

0x5b15,	// (0x00033f10) toolbar2_fixed_button_pane_g2

0x5b0d,	// (0x00033f08) toolbar2_fixed_button_pane_g3

0x5b25,	// (0x00033f20) toolbar2_fixed_button_pane_g4

0x5b1d,	// (0x00033f18) toolbar2_fixed_button_pane_g5

0x5b2d,	// (0x00033f28) toolbar2_fixed_button_pane_g6

0x5b35,	// (0x00033f30) toolbar2_fixed_button_pane_g7

0x5b45,	// (0x00033f40) toolbar2_fixed_button_pane_g8

0x5b3d,	// (0x00033f38) toolbar2_fixed_button_pane_g9

0x0008,

0xf8a4,	// (0x0003dc9f) toolbar2_fixed_button_pane_g

0xd77a,	// (0x0003bb75) cell_toolbar2_float_pane_ParamLimits

0xd77a,	// (0x0003bb75) cell_toolbar2_float_pane

0xd78b,	// (0x0003bb86) cell_toolbar2_float_pane_g1

0xd772,	// (0x0003bb6d) toolbar2_fixed_button_pane_cp

0xd044,	// (0x0003b43f) fep_vkb_accented_list_pane_ParamLimits

0xd044,	// (0x0003b43f) fep_vkb_accented_list_pane

0xb96c,	// (0x00039d67) bg_popup_fep_shadow_pane_g9

0x5587,	// (0x00033982) bg_popup_fep_shadow_pane_cp3

0x4c68,	// (0x00033063) list_accented_list_pane

0xd794,	// (0x0003bb8f) list_single_accented_list_pane_ParamLimits

0xd794,	// (0x0003bb8f) list_single_accented_list_pane

0x5587,	// (0x00033982) list_highlight_pane_cp10

0xd7a5,	// (0x0003bba0) list_single_accented_list_pane_t1

0xb179,	// (0x00039574) popup_slider_window_ParamLimits

0xb179,	// (0x00039574) popup_slider_window

0xd3e1,	// (0x0003b7dc) aid_indentation_list_msg

0xd85f,	// (0x0003bc5a) bg_popup_window_pane_cp19

0xd8c9,	// (0x0003bcc4) popup_slider_window_g1

0xd8e5,	// (0x0003bce0) popup_slider_window_g2

0xd901,	// (0x0003bcfc) popup_slider_window_g3

0x0005,

0xfd00,	// (0x0003e0fb) popup_slider_window_g

0xd95d,	// (0x0003bd58) popup_slider_window_t1

0xd9d1,	// (0x0003bdcc) small_volume_slider_vertical_pane

0x7887,	// (0x00035c82) small_volume_slider_vertical_pane_g1

0x7887,	// (0x00035c82) small_volume_slider_vertical_pane_g2

0xd9ed,	// (0x0003bde8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd12,	// (0x0003e10d) small_volume_slider_vertical_pane_g

0x9ddd,	// (0x000381d8) area_side_right_pane_ParamLimits

0x9ddd,	// (0x000381d8) area_side_right_pane

0xbbac,	// (0x00039fa7) aid_size_side_button_ParamLimits

0xbbac,	// (0x00039fa7) aid_size_side_button

0xbbc0,	// (0x00039fbb) grid_sctrl_middle_pane_ParamLimits

0xbbc0,	// (0x00039fbb) grid_sctrl_middle_pane

0xbbe0,	// (0x00039fdb) sctrl_sk_bottom_pane

0xbbf1,	// (0x00039fec) sctrl_sk_top_pane

0xbc03,	// (0x00039ffe) aid_touch_sctrl_top

0x4694,	// (0x00032a8f) bg_sctrl_sk_pane_ParamLimits

0x4694,	// (0x00032a8f) bg_sctrl_sk_pane

0xbc10,	// (0x0003a00b) sctrl_sk_top_pane_g1

0xbc1d,	// (0x0003a018) sctrl_sk_top_pane_t1

0xbc03,	// (0x00039ffe) aid_touch_sctrl_bottom

0x4694,	// (0x00032a8f) bg_sctrl_sk_pane_cp_ParamLimits

0x4694,	// (0x00032a8f) bg_sctrl_sk_pane_cp

0xbc38,	// (0x0003a033) sctrl_sk_bottom_pane_g1

0xbc1d,	// (0x0003a018) sctrl_sk_bottom_pane_t1

0xbc41,	// (0x0003a03c) cell_sctrl_middle_pane_ParamLimits

0xbc41,	// (0x0003a03c) cell_sctrl_middle_pane

0xbc5c,	// (0x0003a057) aid_touch_sctrl_middle_ParamLimits

0xbc5c,	// (0x0003a057) aid_touch_sctrl_middle

0x4b62,	// (0x00032f5d) bg_sctrl_middle_pane_ParamLimits

0x4b62,	// (0x00032f5d) bg_sctrl_middle_pane

0x7a2e,	// (0x00035e29) cell_sctrl_middle_pane_g1_ParamLimits

0x7a2e,	// (0x00035e29) cell_sctrl_middle_pane_g1

0xbc6e,	// (0x0003a069) cell_sctrl_middle_pane_g2_ParamLimits

0xbc6e,	// (0x0003a069) cell_sctrl_middle_pane_g2

0x0001,

0xfd1e,	// (0x0003e119) cell_sctrl_middle_pane_g_ParamLimits

0xfd1e,	// (0x0003e119) cell_sctrl_middle_pane_g

0x5b05,	// (0x00033f00) bg_sctrl_middle_pane_g1

0x5b15,	// (0x00033f10) bg_sctrl_middle_pane_g2

0x5b0d,	// (0x00033f08) bg_sctrl_middle_pane_g3

0x5b25,	// (0x00033f20) bg_sctrl_middle_pane_g4

0x5b1d,	// (0x00033f18) bg_sctrl_middle_pane_g5

0x5b2d,	// (0x00033f28) bg_sctrl_middle_pane_g6

0x5b35,	// (0x00033f30) bg_sctrl_middle_pane_g7

0x5b45,	// (0x00033f40) bg_sctrl_middle_pane_g8

0x0007,

0xfd23,	// (0x0003e11e) bg_sctrl_middle_pane_g

0x5b3d,	// (0x00033f38) bg_sctrl_middle_pane_g8_copy1

0x5b05,	// (0x00033f00) bg_sctrl_sk_pane_g1

0x5b15,	// (0x00033f10) bg_sctrl_sk_pane_g2

0x5b0d,	// (0x00033f08) bg_sctrl_sk_pane_g3

0x0008,

0xf8a4,	// (0x0003dc9f) bg_sctrl_sk_pane_g

0x4a9b,	// (0x00032e96) aid_size_touch_scroll_bar

0x5b25,	// (0x00033f20) bg_sctrl_sk_pane_g4

0x5b1d,	// (0x00033f18) bg_sctrl_sk_pane_g5

0x5b2d,	// (0x00033f28) bg_sctrl_sk_pane_g6

0x5b35,	// (0x00033f30) bg_sctrl_sk_pane_g7

0x5b45,	// (0x00033f40) bg_sctrl_sk_pane_g8

0x5b3d,	// (0x00033f38) bg_sctrl_sk_pane_g9

0x580b,	// (0x00033c06) popup_fep_china_hwr2_fs_candidate_window

0xae81,	// (0x0003927c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xae81,	// (0x0003927c) popup_fep_china_hwr2_fs_control_window

0x7a2e,	// (0x00035e29) sctrl_sk_top_pane_g2

0x0001,

0xfd19,	// (0x0003e114) sctrl_sk_top_pane_g

0xd9f6,	// (0x0003bdf1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9f6,	// (0x0003bdf1) aid_fep_china_hwr2_fs_cell

0xda08,	// (0x0003be03) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda08,	// (0x0003be03) bg_popup_fep_shadow_pane_cp4

0xda1f,	// (0x0003be1a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda1f,	// (0x0003be1a) bg_popup_fep_shadow_pane_cp5

0xda31,	// (0x0003be2c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda31,	// (0x0003be2c) popup_fep_china_hwr2_fs_control_bar_grid

0xda41,	// (0x0003be3c) popup_fep_china_hwr2_fs_control_funtion_grid

0xda49,	// (0x0003be44) aid_fep_china_hwr2_fs_candi_cell

0x3ea0,	// (0x0003229b) bg_popup_fep_shadow_pane_cp6

0xda53,	// (0x0003be4e) popup_fep_china_hwr2_fs_candidate_grid

0xda5d,	// (0x0003be58) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda5d,	// (0x0003be58) cell_fep_china_hwr2_fs_funtion_grid

0x7887,	// (0x00035c82) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda75,	// (0x0003be70) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda75,	// (0x0003be70) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda83,	// (0x0003be7e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda83,	// (0x0003be7e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd34,	// (0x0003e12f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd34,	// (0x0003e12f) cell_fep_china_hwr2_fs_funtion_grid_g

0xda99,	// (0x0003be94) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda99,	// (0x0003be94) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdaae,	// (0x0003bea9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdaae,	// (0x0003bea9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd39,	// (0x0003e134) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd39,	// (0x0003e134) cell_fep_china_hwr2_fs_funtion_grid_t

0xdaca,	// (0x0003bec5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdad2,	// (0x0003becd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdada,	// (0x0003bed5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3e,	// (0x0003e139) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdae2,	// (0x0003bedd) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdae2,	// (0x0003bedd) cell_fep_china_hwr2_fs_candidate_grid

0xdafb,	// (0x0003bef6) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb03,	// (0x0003befe) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7887,	// (0x00035c82) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7887,	// (0x00035c82) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb5e,	// (0x0003df59) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb0b,	// (0x0003bf06) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5922,	// (0x00033d1d) clock_nsta_pane_cp_24_ParamLimits

0x5922,	// (0x00033d1d) clock_nsta_pane_cp_24

0x598a,	// (0x00033d85) indicator_nsta_pane_cp_24_ParamLimits

0x598a,	// (0x00033d85) indicator_nsta_pane_cp_24

0x66d2,	// (0x00034acd) heading_pane_g1

0x0001,

0xf909,	// (0x0003dd04) heading_pane_g

0x6d7d,	// (0x00035178) grid_sct_catagory_button_pane

0x6853,	// (0x00034c4e) scroll_pane_cp5_ParamLimits

0x75d7,	// (0x000359d2) button_value_adjust_pane_cp5_ParamLimits

0x75d7,	// (0x000359d2) button_value_adjust_pane_cp5

0x76a3,	// (0x00035a9e) form2_midp_time_pane_ParamLimits

0xdb19,	// (0x0003bf14) cell_sct_catagory_button_pane_ParamLimits

0xdb19,	// (0x0003bf14) cell_sct_catagory_button_pane

0x784c,	// (0x00035c47) bg_button_pane_cp01_ParamLimits

0x784c,	// (0x00035c47) bg_button_pane_cp01

0x7887,	// (0x00035c82) cell_sct_catagory_button_pane_g1

0xc40d,	// (0x0003a808) popup_tb_extension_window

0xdb2b,	// (0x0003bf26) aid_size_cell_ext_ParamLimits

0xdb2b,	// (0x0003bf26) aid_size_cell_ext

0x4694,	// (0x00032a8f) bg_tb_trans_pane_cp1_ParamLimits

0x4694,	// (0x00032a8f) bg_tb_trans_pane_cp1

0xdb4b,	// (0x0003bf46) grid_tb_ext_pane_ParamLimits

0xdb4b,	// (0x0003bf46) grid_tb_ext_pane

0xdb79,	// (0x0003bf74) cell_tb_ext_pane_ParamLimits

0xdb79,	// (0x0003bf74) cell_tb_ext_pane

0xdb90,	// (0x0003bf8b) cell_tb_ext_pane_g1_ParamLimits

0xdb90,	// (0x0003bf8b) cell_tb_ext_pane_g1

0xdbad,	// (0x0003bfa8) cell_tb_ext_pane_t1

0x4694,	// (0x00032a8f) list_highlight_pane_cp11_ParamLimits

0x4694,	// (0x00032a8f) list_highlight_pane_cp11

0xa03a,	// (0x00038435) popup_uni_indicator_window_ParamLimits

0xa03a,	// (0x00038435) popup_uni_indicator_window

0x4b62,	// (0x00032f5d) bg_popup_sub_pane_cp14

0xdbc8,	// (0x0003bfc3) list_uniindi_pane

0xdbd4,	// (0x0003bfcf) uniindi_top_pane

0x4694,	// (0x00032a8f) bg_uniindi_top_pane

0xdbf3,	// (0x0003bfee) uniindi_top_pane_g1

0xdc09,	// (0x0003c004) uniindi_top_pane_g2

0x0003,

0xfd45,	// (0x0003e140) uniindi_top_pane_g

0xdc33,	// (0x0003c02e) uniindi_top_pane_t1

0xdc5d,	// (0x0003c058) list_single_uniindi_pane_ParamLimits

0xdc5d,	// (0x0003c058) list_single_uniindi_pane

0x7887,	// (0x00035c82) bg_uniindi_top_pane_g1

0xdc70,	// (0x0003c06b) list_single_uniindi_pane_g1

0xdc83,	// (0x0003c07e) list_single_uniindi_pane_t1

0x3ea0,	// (0x0003229b) control_bg_pane

0xdca8,	// (0x0003c0a3) bg_sctrl_sk_pane_cp1

0xdcb1,	// (0x0003c0ac) bg_sctrl_sk_pane_cp2

0xdcba,	// (0x0003c0b5) control_bg_pane_g1

0xdcc3,	// (0x0003c0be) control_bg_pane_g2

0x0001,

0xfd4e,	// (0x0003e149) control_bg_pane_g

0x74e6,	// (0x000358e1) cell_indicator_nsta_pane_g1_ParamLimits

0xcdc8,	// (0x0003b1c3) cell_indicator_nsta_pane_g2_ParamLimits

0xfacf,	// (0x0003deca) cell_indicator_nsta_pane_g_ParamLimits

0x9a53,	// (0x00037e4e) form2_midp_time_pane_t1_ParamLimits

0x48dd,	// (0x00032cd8) main_idle_act4_pane_ParamLimits

0x48dd,	// (0x00032cd8) main_idle_act4_pane

0xc40d,	// (0x0003a808) popup_tb_extension_window_ParamLimits

0xdb69,	// (0x0003bf64) tb_ext_find_pane_ParamLimits

0xdb69,	// (0x0003bf64) tb_ext_find_pane

0xdccc,	// (0x0003c0c7) ai_gene_pane_1_cp1

0x5609,	// (0x00033a04) ai_gene_pane_2_cp1

0xdcd4,	// (0x0003c0cf) list_single_idle_plugin_calendar_pane

0xdcdd,	// (0x0003c0d8) list_single_idle_plugin_notification_pane

0xdce6,	// (0x0003c0e1) list_single_idle_plugin_player_pane

0xdcef,	// (0x0003c0ea) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcef,	// (0x0003c0ea) list_single_idle_plugin_shortcut_pane

0xdd11,	// (0x0003c10c) main_idle_act4_pane_t1

0xdd23,	// (0x0003c11e) main_idle_act4_pane_t2

0x0001,

0xfd53,	// (0x0003e14e) main_idle_act4_pane_t

0xdd35,	// (0x0003c130) middle_sk_idle_act4_pane_ParamLimits

0xdd35,	// (0x0003c130) middle_sk_idle_act4_pane

0xdd4b,	// (0x0003c146) popup_clock_digital_analogue_window_cp2

0xdd65,	// (0x0003c160) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd65,	// (0x0003c160) shortcut_wheel_idle_act4_pane

0x7887,	// (0x00035c82) shortcut_wheel_idle_act4_pane_g1

0x7887,	// (0x00035c82) shortcut_wheel_idle_act4_pane_g2

0x7887,	// (0x00035c82) shortcut_wheel_idle_act4_pane_g3

0x7887,	// (0x00035c82) shortcut_wheel_idle_act4_pane_g4

0x7887,	// (0x00035c82) shortcut_wheel_idle_act4_pane_g5

0xdd79,	// (0x0003c174) shortcut_wheel_idle_act4_pane_g6

0xdd81,	// (0x0003c17c) shortcut_wheel_idle_act4_pane_g7

0xdd89,	// (0x0003c184) shortcut_wheel_idle_act4_pane_g8

0xdd91,	// (0x0003c18c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd58,	// (0x0003e153) shortcut_wheel_idle_act4_pane_g

0x7a2e,	// (0x00035e29) middle_sk_idle_act4_pane_g1_ParamLimits

0x7a2e,	// (0x00035e29) middle_sk_idle_act4_pane_g1

0xddf5,	// (0x0003c1f0) middle_sk_idle_act4_pane_g2_ParamLimits

0xddf5,	// (0x0003c1f0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7b,	// (0x0003e176) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7b,	// (0x0003e176) middle_sk_idle_act4_pane_g

0xde01,	// (0x0003c1fc) middle_sk_idle_act4_pane_t1_ParamLimits

0xde01,	// (0x0003c1fc) middle_sk_idle_act4_pane_t1

0xde1e,	// (0x0003c219) grid_ai_shortcut_pane_ParamLimits

0xde1e,	// (0x0003c219) grid_ai_shortcut_pane

0xde37,	// (0x0003c232) list_highlight_pane_cp16_ParamLimits

0xde37,	// (0x0003c232) list_highlight_pane_cp16

0xde44,	// (0x0003c23f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde44,	// (0x0003c23f) list_single_idle_plugin_shortcut_pane_g1

0xde50,	// (0x0003c24b) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde50,	// (0x0003c24b) list_single_idle_plugin_shortcut_pane_g2

0xde68,	// (0x0003c263) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde68,	// (0x0003c263) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd80,	// (0x0003e17b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd80,	// (0x0003e17b) list_single_idle_plugin_shortcut_pane_g

0xde7b,	// (0x0003c276) cell_ai_shortcut_pane_ParamLimits

0xde7b,	// (0x0003c276) cell_ai_shortcut_pane

0xde9f,	// (0x0003c29a) cell_ai_shortcut_pane_g1_ParamLimits

0xde9f,	// (0x0003c29a) cell_ai_shortcut_pane_g1

0xdccc,	// (0x0003c0c7) ai_gene_pane_1_cp2

0xdec1,	// (0x0003c2bc) ai_gene_pane_2_cp2

0xdec9,	// (0x0003c2c4) list_highlight_pane_cp15

0xded2,	// (0x0003c2cd) list_single_idle_plugin_calendar_pane_g1

0xdec9,	// (0x0003c2c4) list_highlight_pane_cp17

0xdeda,	// (0x0003c2d5) list_single_idle_plugin_calendar_pane_g1_copy1

0xdee2,	// (0x0003c2dd) list_single_idle_plugin_player_pane_g1

0x6f88,	// (0x00035383) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd87,	// (0x0003e182) list_single_idle_plugin_player_pane_g

0xdeea,	// (0x0003c2e5) list_single_idle_plugin_player_pane_t1

0xdef8,	// (0x0003c2f3) list_single_idle_plugin_player_pane_t2

0xdf06,	// (0x0003c301) list_single_idle_plugin_player_pane_t3

0xdf14,	// (0x0003c30f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8c,	// (0x0003e187) list_single_idle_plugin_player_pane_t

0xdf22,	// (0x0003c31d) wait_bar_pane_cp15

0xdf2a,	// (0x0003c325) grid_ai_notification_pane

0x6f88,	// (0x00035383) list_single_idle_plugin_notification_pane_g1

0xdf33,	// (0x0003c32e) cell_ai_notification_pane_ParamLimits

0xdf33,	// (0x0003c32e) cell_ai_notification_pane

0xdf40,	// (0x0003c33b) cell_ai_notification_pane_g1

0xdf48,	// (0x0003c343) cell_ai_notification_pane_t1

0xdf56,	// (0x0003c351) tb_ext_find_button_pane

0xdf5e,	// (0x0003c359) tb_ext_find_pane_g1

0xdf66,	// (0x0003c361) tb_ext_find_pane_t1

0x509a,	// (0x00033495) tb_ext_find_button_pane_g1

0xdf74,	// (0x0003c36f) tb_ext_find_button_pane_g2

0x0001,

0xfd95,	// (0x0003e190) tb_ext_find_button_pane_g

0xdd11,	// (0x0003c10c) main_idle_act4_pane_t1_ParamLimits

0xdd23,	// (0x0003c11e) main_idle_act4_pane_t2_ParamLimits

0xfd53,	// (0x0003e14e) main_idle_act4_pane_t_ParamLimits

0xdd4b,	// (0x0003c146) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd59,	// (0x0003c154) sat_plugin_idle_act4_pane_ParamLimits

0xdd59,	// (0x0003c154) sat_plugin_idle_act4_pane

0xdf7d,	// (0x0003c378) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf7d,	// (0x0003c378) sat_plugin_idle_act4_pane_t1

0xdf90,	// (0x0003c38b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf90,	// (0x0003c38b) sat_plugin_idle_act4_pane_t2

0xdfa3,	// (0x0003c39e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfa3,	// (0x0003c39e) sat_plugin_idle_act4_pane_t3

0xdfb6,	// (0x0003c3b1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfb6,	// (0x0003c3b1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9a,	// (0x0003e195) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9a,	// (0x0003e195) sat_plugin_idle_act4_pane_t

0x9f75,	// (0x00038370) popup_battery_window_ParamLimits

0x9f75,	// (0x00038370) popup_battery_window

0x4694,	// (0x00032a8f) bg_popup_sub_pane_cp25_ParamLimits

0x4694,	// (0x00032a8f) bg_popup_sub_pane_cp25

0xdfc9,	// (0x0003c3c4) popup_battery_window_g1_ParamLimits

0xdfc9,	// (0x0003c3c4) popup_battery_window_g1

0xdfd5,	// (0x0003c3d0) popup_battery_window_t1_ParamLimits

0xdfd5,	// (0x0003c3d0) popup_battery_window_t1

0xdfe7,	// (0x0003c3e2) popup_battery_window_t2_ParamLimits

0xdfe7,	// (0x0003c3e2) popup_battery_window_t2

0x0001,

0xfda3,	// (0x0003e19e) popup_battery_window_t_ParamLimits

0xfda3,	// (0x0003e19e) popup_battery_window_t

0xaafe,	// (0x00038ef9) midp_canvas_pane_ParamLimits

0xab60,	// (0x00038f5b) midp_keypad_pane_ParamLimits

0xab60,	// (0x00038f5b) midp_keypad_pane

0x4cba,	// (0x000330b5) main_midp_pane_ParamLimits

0x7590,	// (0x0003598b) signal_pane_g2_cp_ParamLimits

0xe004,	// (0x0003c3ff) aid_size_cell_midp_keypad_ParamLimits

0xe004,	// (0x0003c3ff) aid_size_cell_midp_keypad

0xe01e,	// (0x0003c419) midp_keyp_game_grid_pane_ParamLimits

0xe01e,	// (0x0003c419) midp_keyp_game_grid_pane

0xe03e,	// (0x0003c439) midp_keyp_rocker_pane_ParamLimits

0xe03e,	// (0x0003c439) midp_keyp_rocker_pane

0xe077,	// (0x0003c472) midp_keyp_sk_left_pane_ParamLimits

0xe077,	// (0x0003c472) midp_keyp_sk_left_pane

0xe0d1,	// (0x0003c4cc) midp_keyp_sk_right_pane_ParamLimits

0xe0d1,	// (0x0003c4cc) midp_keyp_sk_right_pane

0x3ea0,	// (0x0003229b) bg_button_pane_cp03

0xe12b,	// (0x0003c526) midp_keyp_sk_left_pane_g1

0x3ea0,	// (0x0003229b) bg_button_pane_cp04

0xe12b,	// (0x0003c526) midp_keyp_sk_right_pane_g1

0x7887,	// (0x00035c82) midp_keyp_rocker_pane_g1

0xe134,	// (0x0003c52f) keyp_game_cell_pane_ParamLimits

0xe134,	// (0x0003c52f) keyp_game_cell_pane

0x3ea0,	// (0x0003229b) bg_button_pane_cp02

0xe147,	// (0x0003c542) keyp_game_cell_pane_g1

0x9fb9,	// (0x000383b4) popup_fep_vkb2_window_ParamLimits

0x9fb9,	// (0x000383b4) popup_fep_vkb2_window

0xbc8f,	// (0x0003a08a) aid_size_cell_vkb2_ParamLimits

0xbc8f,	// (0x0003a08a) aid_size_cell_vkb2

0xbce3,	// (0x0003a0de) popup_fep_vkb2_window_g1_ParamLimits

0xbce3,	// (0x0003a0de) popup_fep_vkb2_window_g1

0xbd2b,	// (0x0003a126) vkb2_area_bottom_pane_ParamLimits

0xbd2b,	// (0x0003a126) vkb2_area_bottom_pane

0xbd77,	// (0x0003a172) vkb2_area_keypad_pane_ParamLimits

0xbd77,	// (0x0003a172) vkb2_area_keypad_pane

0xbdb9,	// (0x0003a1b4) vkb2_area_top_pane_ParamLimits

0xbdb9,	// (0x0003a1b4) vkb2_area_top_pane

0xbe33,	// (0x0003a22e) vkb2_top_entry_pane_ParamLimits

0xbe33,	// (0x0003a22e) vkb2_top_entry_pane

0xbe5d,	// (0x0003a258) vkb2_top_grid_left_pane_ParamLimits

0xbe5d,	// (0x0003a258) vkb2_top_grid_left_pane

0xbe7b,	// (0x0003a276) vkb2_top_grid_right_pane_ParamLimits

0xbe7b,	// (0x0003a276) vkb2_top_grid_right_pane

0xbe99,	// (0x0003a294) vkb2_cell_keypad_pane_ParamLimits

0xbe99,	// (0x0003a294) vkb2_cell_keypad_pane

0xbf6a,	// (0x0003a365) vkb2_area_bottom_grid_pane_ParamLimits

0xbf6a,	// (0x0003a365) vkb2_area_bottom_grid_pane

0xbf90,	// (0x0003a38b) vkb2_area_bottom_pane_g1_ParamLimits

0xbf90,	// (0x0003a38b) vkb2_area_bottom_pane_g1

0xbfb4,	// (0x0003a3af) vkb2_area_bottom_pane_g2_ParamLimits

0xbfb4,	// (0x0003a3af) vkb2_area_bottom_pane_g2

0xbfe2,	// (0x0003a3dd) vkb2_area_bottom_pane_g3_ParamLimits

0xbfe2,	// (0x0003a3dd) vkb2_area_bottom_pane_g3

0x0002,

0xfda8,	// (0x0003e1a3) vkb2_area_bottom_pane_g_ParamLimits

0xfda8,	// (0x0003e1a3) vkb2_area_bottom_pane_g

0xc043,	// (0x0003a43e) vkb2_top_cell_left_pane_ParamLimits

0xc043,	// (0x0003a43e) vkb2_top_cell_left_pane

0xe158,	// (0x0003c553) vkb2_top_entry_pane_g1_ParamLimits

0xe158,	// (0x0003c553) vkb2_top_entry_pane_g1

0xe166,	// (0x0003c561) vkb2_top_entry_pane_t1_ParamLimits

0xe166,	// (0x0003c561) vkb2_top_entry_pane_t1

0xe198,	// (0x0003c593) vkb2_top_entry_pane_t2_ParamLimits

0xe198,	// (0x0003c593) vkb2_top_entry_pane_t2

0xe1ca,	// (0x0003c5c5) vkb2_top_entry_pane_t3_ParamLimits

0xe1ca,	// (0x0003c5c5) vkb2_top_entry_pane_t3

0x0002,

0xfdaf,	// (0x0003e1aa) vkb2_top_entry_pane_t_ParamLimits

0xfdaf,	// (0x0003e1aa) vkb2_top_entry_pane_t

0xc090,	// (0x0003a48b) vkb2_top_grid_right_pane_g1_ParamLimits

0xc090,	// (0x0003a48b) vkb2_top_grid_right_pane_g1

0xc0a6,	// (0x0003a4a1) vkb2_top_grid_right_pane_g2_ParamLimits

0xc0a6,	// (0x0003a4a1) vkb2_top_grid_right_pane_g2

0xc0be,	// (0x0003a4b9) vkb2_top_grid_right_pane_g3_ParamLimits

0xc0be,	// (0x0003a4b9) vkb2_top_grid_right_pane_g3

0xc0d6,	// (0x0003a4d1) vkb2_top_grid_right_pane_g4_ParamLimits

0xc0d6,	// (0x0003a4d1) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb6,	// (0x0003e1b1) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb6,	// (0x0003e1b1) vkb2_top_grid_right_pane_g

0xc0ec,	// (0x0003a4e7) vkb2_top_cell_left_pane_g1

0xc103,	// (0x0003a4fe) vkb2_cell_keypad_pane_g1_ParamLimits

0xc103,	// (0x0003a4fe) vkb2_cell_keypad_pane_g1

0xe1e0,	// (0x0003c5db) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1e0,	// (0x0003c5db) vkb2_cell_keypad_pane_t1

0xc111,	// (0x0003a50c) vkb2_cell_bottom_grid_pane_ParamLimits

0xc111,	// (0x0003a50c) vkb2_cell_bottom_grid_pane

0xc14a,	// (0x0003a545) vkb2_cell_bottom_grid_pane_g1

0xdd99,	// (0x0003c194) aid_call2_pane_cp02

0xdda1,	// (0x0003c19c) aid_call_pane_cp02

0xdda9,	// (0x0003c1a4) clock_digital_number_pane_cp10

0xddb1,	// (0x0003c1ac) clock_digital_number_pane_cp11

0xddb9,	// (0x0003c1b4) clock_digital_number_pane_cp12

0xddc1,	// (0x0003c1bc) clock_digital_number_pane_cp13

0xddc9,	// (0x0003c1c4) clock_digital_separator_pane_cp10

0x509a,	// (0x00033495) popup_clock_digital_analogue_window_cp2_g1

0x509a,	// (0x00033495) popup_clock_digital_analogue_window_cp2_g2

0xddd1,	// (0x0003c1cc) popup_clock_digital_analogue_window_cp2_g3

0x509a,	// (0x00033495) popup_clock_digital_analogue_window_cp2_g4

0xddd1,	// (0x0003c1cc) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6b,	// (0x0003e166) popup_clock_digital_analogue_window_cp2_g

0xddd9,	// (0x0003c1d4) popup_clock_digital_analogue_window_cp2_t1

0xdde7,	// (0x0003c1e2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd76,	// (0x0003e171) popup_clock_digital_analogue_window_cp2_t

0x7887,	// (0x00035c82) clock_digital_number_pane_cp10_g1

0x7887,	// (0x00035c82) clock_digital_number_pane_cp10_g2

0x0001,

0xfb5e,	// (0x0003df59) clock_digital_number_pane_cp10_g

0x7887,	// (0x00035c82) clock_digital_separator_pane_cp10_g1

0x7887,	// (0x00035c82) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb5e,	// (0x0003df59) clock_digital_separator_pane_cp10_g

0xdc15,	// (0x0003c010) uniindi_top_pane_g3

0xdc26,	// (0x0003c021) uniindi_top_pane_g4

0xbf24,	// (0x0003a31f) vkb2_row_keypad_pane_ParamLimits

0xbf24,	// (0x0003a31f) vkb2_row_keypad_pane

0xc166,	// (0x0003a561) vkb2_cell_t_keypad_pane_ParamLimits

0xc166,	// (0x0003a561) vkb2_cell_t_keypad_pane

0xc176,	// (0x0003a571) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xc176,	// (0x0003a571) vkb2_cell_t_keypad_pane_cp08

0xc189,	// (0x0003a584) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xc189,	// (0x0003a584) vkb2_cell_t_keypad_pane_cp09

0xc19d,	// (0x0003a598) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xc19d,	// (0x0003a598) vkb2_cell_t_keypad_pane_cp01

0xc1ae,	// (0x0003a5a9) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xc1ae,	// (0x0003a5a9) vkb2_cell_t_keypad_pane_cp02

0xc1bf,	// (0x0003a5ba) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xc1bf,	// (0x0003a5ba) vkb2_cell_t_keypad_pane_cp03

0xc1d0,	// (0x0003a5cb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xc1d0,	// (0x0003a5cb) vkb2_cell_t_keypad_pane_cp04

0xc1e1,	// (0x0003a5dc) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xc1e1,	// (0x0003a5dc) vkb2_cell_t_keypad_pane_cp05

0xc1f2,	// (0x0003a5ed) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xc1f2,	// (0x0003a5ed) vkb2_cell_t_keypad_pane_cp06

0xc203,	// (0x0003a5fe) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xc203,	// (0x0003a5fe) vkb2_cell_t_keypad_pane_cp07

0xc214,	// (0x0003a60f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xc214,	// (0x0003a60f) vkb2_cell_t_keypad_pane_cp10

0x7a2e,	// (0x00035e29) vkb2_cell_t_keypad_pane_g1

0xe1f7,	// (0x0003c5f2) vkb2_cell_t_keypad_pane_t1

0x3ea0,	// (0x0003229b) popup_grid_graphic2_window

0xe209,	// (0x0003c604) aid_size_cell_graphic2_ParamLimits

0xe209,	// (0x0003c604) aid_size_cell_graphic2

0x7617,	// (0x00035a12) bg_popup_window_pane_cp21_ParamLimits

0x7617,	// (0x00035a12) bg_popup_window_pane_cp21

0xe235,	// (0x0003c630) graphic2_pages_pane_ParamLimits

0xe235,	// (0x0003c630) graphic2_pages_pane

0xe27b,	// (0x0003c676) grid_graphic2_control_pane_ParamLimits

0xe27b,	// (0x0003c676) grid_graphic2_control_pane

0xe2ca,	// (0x0003c6c5) grid_graphic2_pane_ParamLimits

0xe2ca,	// (0x0003c6c5) grid_graphic2_pane

0xe32a,	// (0x0003c725) cell_graphic2_pane

0x3ea0,	// (0x0003229b) main_comp_mode_pane

0xd495,	// (0x0003b890) list_ai3_gene_pane_ParamLimits

0xd85f,	// (0x0003bc5a) bg_popup_window_pane_cp19_ParamLimits

0xd86b,	// (0x0003bc66) bg_touch_area_indi_pane_ParamLimits

0xd86b,	// (0x0003bc66) bg_touch_area_indi_pane

0xd881,	// (0x0003bc7c) bg_touch_area_indi_pane_cp01_ParamLimits

0xd881,	// (0x0003bc7c) bg_touch_area_indi_pane_cp01

0xd897,	// (0x0003bc92) bg_touch_area_indi_pane_cp02_ParamLimits

0xd897,	// (0x0003bc92) bg_touch_area_indi_pane_cp02

0xd8af,	// (0x0003bcaa) bg_touch_area_indi_pane_cp03_ParamLimits

0xd8af,	// (0x0003bcaa) bg_touch_area_indi_pane_cp03

0xd8c9,	// (0x0003bcc4) popup_slider_window_g1_ParamLimits

0xd8e5,	// (0x0003bce0) popup_slider_window_g2_ParamLimits

0xd901,	// (0x0003bcfc) popup_slider_window_g3_ParamLimits

0xfd00,	// (0x0003e0fb) popup_slider_window_g_ParamLimits

0xd95d,	// (0x0003bd58) popup_slider_window_t1_ParamLimits

0xd9d1,	// (0x0003bdcc) small_volume_slider_vertical_pane_ParamLimits

0xe32a,	// (0x0003c725) cell_graphic2_pane_ParamLimits

0xe379,	// (0x0003c774) bg_button_pane_cp10_ParamLimits

0xe379,	// (0x0003c774) bg_button_pane_cp10

0xe38c,	// (0x0003c787) bg_button_pane_cp11_ParamLimits

0xe38c,	// (0x0003c787) bg_button_pane_cp11

0xe39f,	// (0x0003c79a) graphic2_pages_pane_g1_ParamLimits

0xe39f,	// (0x0003c79a) graphic2_pages_pane_g1

0xe3ba,	// (0x0003c7b5) graphic2_pages_pane_g2_ParamLimits

0xe3ba,	// (0x0003c7b5) graphic2_pages_pane_g2

0x0001,

0xfdc4,	// (0x0003e1bf) graphic2_pages_pane_g_ParamLimits

0xfdc4,	// (0x0003e1bf) graphic2_pages_pane_g

0xe3d2,	// (0x0003c7cd) graphic2_pages_pane_t1_ParamLimits

0xe3d2,	// (0x0003c7cd) graphic2_pages_pane_t1

0xe3ea,	// (0x0003c7e5) cell_graphic2_control_pane_ParamLimits

0xe3ea,	// (0x0003c7e5) cell_graphic2_control_pane

0xe404,	// (0x0003c7ff) cell_graphic2_pane_g1_ParamLimits

0xe404,	// (0x0003c7ff) cell_graphic2_pane_g1

0xe411,	// (0x0003c80c) cell_graphic2_pane_g2_ParamLimits

0xe411,	// (0x0003c80c) cell_graphic2_pane_g2

0xe41e,	// (0x0003c819) cell_graphic2_pane_g3_ParamLimits

0xe41e,	// (0x0003c819) cell_graphic2_pane_g3

0xe42b,	// (0x0003c826) cell_graphic2_pane_g4_ParamLimits

0xe42b,	// (0x0003c826) cell_graphic2_pane_g4

0xe438,	// (0x0003c833) cell_graphic2_pane_g5_ParamLimits

0xe438,	// (0x0003c833) cell_graphic2_pane_g5

0x0004,

0xfdc9,	// (0x0003e1c4) cell_graphic2_pane_g_ParamLimits

0xfdc9,	// (0x0003e1c4) cell_graphic2_pane_g

0xe453,	// (0x0003c84e) cell_graphic2_pane_t1_ParamLimits

0xe453,	// (0x0003c84e) cell_graphic2_pane_t1

0x5bf5,	// (0x00033ff0) grid_highlight_pane_cp11_ParamLimits

0x5bf5,	// (0x00033ff0) grid_highlight_pane_cp11

0x4b62,	// (0x00032f5d) bg_button_pane_cp05

0xe469,	// (0x0003c864) cell_graphic2_control_pane_g1

0x7887,	// (0x00035c82) bg_touch_area_indi_pane_g1

0xe476,	// (0x0003c871) aid_cmod_rocker_key_size

0xe480,	// (0x0003c87b) aid_cmode_itu_key_size

0xe48a,	// (0x0003c885) main_cmode_video_pane

0xe494,	// (0x0003c88f) main_comp_mode_itu_pane

0xe4a0,	// (0x0003c89b) main_comp_mode_rocker_pane

0xe4ac,	// (0x0003c8a7) cell_cmode_rocker_pane_ParamLimits

0xe4ac,	// (0x0003c8a7) cell_cmode_rocker_pane

0xe4be,	// (0x0003c8b9) cell_cmode_itu_pane_ParamLimits

0xe4be,	// (0x0003c8b9) cell_cmode_itu_pane

0x4b62,	// (0x00032f5d) bg_button_pane_cp06_ParamLimits

0x4b62,	// (0x00032f5d) bg_button_pane_cp06

0x7a2e,	// (0x00035e29) cell_cmode_rocker_pane_g1_ParamLimits

0x7a2e,	// (0x00035e29) cell_cmode_rocker_pane_g1

0xda75,	// (0x0003be70) cell_cmode_rocker_pane_g2_ParamLimits

0xda75,	// (0x0003be70) cell_cmode_rocker_pane_g2

0x0001,

0xfdd4,	// (0x0003e1cf) cell_cmode_rocker_pane_g_ParamLimits

0xfdd4,	// (0x0003e1cf) cell_cmode_rocker_pane_g

0x3ea0,	// (0x0003229b) bg_button_pane_cp07

0xe4d3,	// (0x0003c8ce) cell_cmode_itu_pane_g1

0xe4dc,	// (0x0003c8d7) cell_cmode_itu_pane_t1

0xe4ea,	// (0x0003c8e5) cell_cmode_itu_pane_t2

0x0001,

0xfdd9,	// (0x0003e1d4) cell_cmode_itu_pane_t

0xdc98,	// (0x0003c093) aid_touch_ctrl_left

0xdca0,	// (0x0003c09b) aid_touch_ctrl_right

0x3ea0,	// (0x0003229b) compa_mode_pane

0xe4f8,	// (0x0003c8f3) aid_cmod_rocker_key_size_cp

0xe502,	// (0x0003c8fd) aid_cmode_itu_key_size_cp

0xe50c,	// (0x0003c907) compa_mode_pane_g1

0xe514,	// (0x0003c90f) compa_mode_pane_g2

0xe51c,	// (0x0003c917) compa_mode_pane_g3

0x0002,

0xfdde,	// (0x0003e1d9) compa_mode_pane_g

0xe524,	// (0x0003c91f) main_comp_mode_itu_pane_cp

0xe52c,	// (0x0003c927) main_comp_mode_rocker_pane_cp

0xe534,	// (0x0003c92f) cell_cmode_itu_pane_cp_ParamLimits

0xe534,	// (0x0003c92f) cell_cmode_itu_pane_cp

0xe549,	// (0x0003c944) cell_cmode_rocker_pane_cp_ParamLimits

0xe549,	// (0x0003c944) cell_cmode_rocker_pane_cp

0x4b62,	// (0x00032f5d) bg_button_pane_cp06_cp_ParamLimits

0x4b62,	// (0x00032f5d) bg_button_pane_cp06_cp

0x7a2e,	// (0x00035e29) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7a2e,	// (0x00035e29) cell_cmode_rocker_pane_g1_cp

0x7887,	// (0x00035c82) cell_cmode_rocker_pane_g2_cp

0x3ea0,	// (0x0003229b) bg_button_pane_cp07_cp

0x6c8a,	// (0x00035085) cell_cmode_itu_pane_g1_cp

0xe55b,	// (0x0003c956) cell_cmode_itu_pane_t1_cp

0xe55b,	// (0x0003c956) cell_cmode_itu_pane_t2_cp

0xcbfe,	// (0x0003aff9) settings_code_pane_cp2

0x3f10,	// (0x0003230b) bg_popup_window_pane_cp3_ParamLimits

0x486e,	// (0x00032c69) heading_pane_cp3_ParamLimits

0x487a,	// (0x00032c75) listscroll_popup_graphic_pane_ParamLimits

0xb750,	// (0x00039b4b) fep_hwr_aid_pane_ParamLimits

0xbc03,	// (0x00039ffe) aid_touch_sctrl_top_ParamLimits

0xbc10,	// (0x0003a00b) sctrl_sk_top_pane_g1_ParamLimits

0x7a2e,	// (0x00035e29) sctrl_sk_top_pane_g2_ParamLimits

0xfd19,	// (0x0003e114) sctrl_sk_top_pane_g_ParamLimits

0xbc1d,	// (0x0003a018) sctrl_sk_top_pane_t1_ParamLimits

0xbc03,	// (0x00039ffe) aid_touch_sctrl_bottom_ParamLimits

0xbc1d,	// (0x0003a018) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbe1,	// (0x0003bfdc) aid_area_touch_clock

0xbdfb,	// (0x0003a1f6) aid_vkb2_area_top_pane_cell_ParamLimits

0xbdfb,	// (0x0003a1f6) aid_vkb2_area_top_pane_cell

0xbf46,	// (0x0003a341) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbf46,	// (0x0003a341) aid_vkb2_area_bottom_pane_cell

0xe150,	// (0x0003c54b) popup_char_count_window

0xe569,	// (0x0003c964) popup_char_count_window_g1

0xe572,	// (0x0003c96d) popup_char_count_window_g2

0xe57b,	// (0x0003c976) popup_char_count_window_g3

0x0002,

0xfde5,	// (0x0003e1e0) popup_char_count_window_g

0xe584,	// (0x0003c97f) popup_char_count_window_t1

0xbcc1,	// (0x0003a0bc) popup_fep_char_preview_window_ParamLimits

0xbcc1,	// (0x0003a0bc) popup_fep_char_preview_window

0xbe19,	// (0x0003a214) vkb2_top_candi_pane_ParamLimits

0xbe19,	// (0x0003a214) vkb2_top_candi_pane

0xe592,	// (0x0003c98d) cell_vkb2_top_candi_pane_ParamLimits

0xe592,	// (0x0003c98d) cell_vkb2_top_candi_pane

0x608c,	// (0x00034487) bg_popup_fep_char_preview_window_ParamLimits

0x608c,	// (0x00034487) bg_popup_fep_char_preview_window

0xc229,	// (0x0003a624) popup_fep_char_preview_window_t1_ParamLimits

0xc229,	// (0x0003a624) popup_fep_char_preview_window_t1

0xe5df,	// (0x0003c9da) bg_popup_fep_char_preview_window_g1

0xe5e7,	// (0x0003c9e2) bg_popup_fep_char_preview_window_g2

0xe5ef,	// (0x0003c9ea) bg_popup_fep_char_preview_window_g3

0xe5f7,	// (0x0003c9f2) bg_popup_fep_char_preview_window_g4

0xe5ff,	// (0x0003c9fa) bg_popup_fep_char_preview_window_g5

0xc263,	// (0x0003a65e) bg_popup_fep_char_preview_window_g6

0xe607,	// (0x0003ca02) bg_popup_fep_char_preview_window_g7

0xe60f,	// (0x0003ca0a) bg_popup_fep_char_preview_window_g8

0xe617,	// (0x0003ca12) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdec,	// (0x0003e1e7) bg_popup_fep_char_preview_window_g

0x7a2e,	// (0x00035e29) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7a2e,	// (0x00035e29) cell_vkb2_top_candi_pane_g1

0x7cc7,	// (0x000360c2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7cc7,	// (0x000360c2) cell_vkb2_top_candi_pane_g2

0x7ce8,	// (0x000360e3) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7ce8,	// (0x000360e3) cell_vkb2_top_candi_pane_g3

0xc26b,	// (0x0003a666) cell_vkb2_top_candi_pane_g4_ParamLimits

0xc26b,	// (0x0003a666) cell_vkb2_top_candi_pane_g4

0xe2a9,	// (0x0003c6a4) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe2a9,	// (0x0003c6a4) cell_vkb2_top_candi_pane_g5

0xda75,	// (0x0003be70) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda75,	// (0x0003be70) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdff,	// (0x0003e1fa) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdff,	// (0x0003e1fa) cell_vkb2_top_candi_pane_g

0xc28c,	// (0x0003a687) cell_vkb2_top_candi_pane_t1

0xb4a8,	// (0x000398a3) aid_size_touch_slider_mark_ParamLimits

0xb4a8,	// (0x000398a3) aid_size_touch_slider_mark

0xe26b,	// (0x0003c666) grid_graphic2_catg_pane_ParamLimits

0xe26b,	// (0x0003c666) grid_graphic2_catg_pane

0xe306,	// (0x0003c701) popup_grid_graphic2_window_t1_ParamLimits

0xe306,	// (0x0003c701) popup_grid_graphic2_window_t1

0xe318,	// (0x0003c713) popup_grid_graphic2_window_t2_ParamLimits

0xe318,	// (0x0003c713) popup_grid_graphic2_window_t2

0x0001,

0xfdbf,	// (0x0003e1ba) popup_grid_graphic2_window_t_ParamLimits

0xfdbf,	// (0x0003e1ba) popup_grid_graphic2_window_t

0x4b62,	// (0x00032f5d) bg_button_pane_cp05_ParamLimits

0xe469,	// (0x0003c864) cell_graphic2_control_pane_g1_ParamLimits

0xe61f,	// (0x0003ca1a) cell_graphic2_catg_pane_ParamLimits

0xe61f,	// (0x0003ca1a) cell_graphic2_catg_pane

0x3ea0,	// (0x0003229b) bg_button_pane_cp12

0xe631,	// (0x0003ca2c) cell_graphic2_catg_pane_g1

0xdbad,	// (0x0003bfa8) cell_tb_ext_pane_t1_ParamLimits

0xc063,	// (0x0003a45e) vkb2_top_cell_right_narrow_pane_ParamLimits

0xc063,	// (0x0003a45e) vkb2_top_cell_right_narrow_pane

0xc07b,	// (0x0003a476) vkb2_top_cell_right_wide_pane_ParamLimits

0xc07b,	// (0x0003a476) vkb2_top_cell_right_wide_pane

0x7617,	// (0x00035a12) bg_vkb2_func_pane_ParamLimits

0x7617,	// (0x00035a12) bg_vkb2_func_pane

0xc0ec,	// (0x0003a4e7) vkb2_top_cell_left_pane_g1_ParamLimits

0x7617,	// (0x00035a12) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7617,	// (0x00035a12) bg_vkb2_fuc_pane_cp03

0xc14a,	// (0x0003a545) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5b15,	// (0x00033f10) bg_vkb2_func_pane_g1

0x5b0d,	// (0x00033f08) bg_vkb2_func_pane_g2

0x5b1d,	// (0x00033f18) bg_vkb2_func_pane_g3

0x5b25,	// (0x00033f20) bg_vkb2_func_pane_g4

0x5b2d,	// (0x00033f28) bg_vkb2_func_pane_g5

0x5b35,	// (0x00033f30) bg_vkb2_func_pane_g6

0x5b45,	// (0x00033f40) bg_vkb2_func_pane_g7

0x5b3d,	// (0x00033f38) bg_vkb2_func_pane_g8

0x5b05,	// (0x00033f00) bg_vkb2_func_pane_g9

0x0008,

0xfe0c,	// (0x0003e207) bg_vkb2_func_pane_g

0x7617,	// (0x00035a12) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7617,	// (0x00035a12) bg_vkb2_fuc_pane_cp01

0xc0ec,	// (0x0003a4e7) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xc0ec,	// (0x0003a4e7) vkb2_top_cell_right_wide_pane_g1

0x7617,	// (0x00035a12) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7617,	// (0x00035a12) bg_vkb2_fuc_pane_cp02

0xc14a,	// (0x0003a545) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xc14a,	// (0x0003a545) vkb2_top_cell_right_narrow_pane_g1

0xd7e3,	// (0x0003bbde) aid_touch_area_decrease_ParamLimits

0xd7e3,	// (0x0003bbde) aid_touch_area_decrease

0xd801,	// (0x0003bbfc) aid_touch_area_increase_ParamLimits

0xd801,	// (0x0003bbfc) aid_touch_area_increase

0xd80d,	// (0x0003bc08) aid_touch_area_mute_ParamLimits

0xd80d,	// (0x0003bc08) aid_touch_area_mute

0xd831,	// (0x0003bc2c) aid_touch_area_slider_ParamLimits

0xd831,	// (0x0003bc2c) aid_touch_area_slider

0xd91d,	// (0x0003bd18) popup_slider_window_g4_ParamLimits

0xd91d,	// (0x0003bd18) popup_slider_window_g4

0xd929,	// (0x0003bd24) popup_slider_window_g5_ParamLimits

0xd929,	// (0x0003bd24) popup_slider_window_g5

0xd94b,	// (0x0003bd46) popup_slider_window_g6_ParamLimits

0xd94b,	// (0x0003bd46) popup_slider_window_g6

0xd98b,	// (0x0003bd86) popup_slider_window_t2_ParamLimits

0xd98b,	// (0x0003bd86) popup_slider_window_t2

0x0001,

0xfd0d,	// (0x0003e108) popup_slider_window_t_ParamLimits

0xfd0d,	// (0x0003e108) popup_slider_window_t

0xd9a3,	// (0x0003bd9e) slider_pane_ParamLimits

0xd9a3,	// (0x0003bd9e) slider_pane

0xe63a,	// (0x0003ca35) slider_pane_g1_ParamLimits

0xe63a,	// (0x0003ca35) slider_pane_g1

0xe64e,	// (0x0003ca49) slider_pane_g2_ParamLimits

0xe64e,	// (0x0003ca49) slider_pane_g2

0xe664,	// (0x0003ca5f) slider_pane_g3_ParamLimits

0xe664,	// (0x0003ca5f) slider_pane_g3

0x0003,

0xfe1f,	// (0x0003e21a) slider_pane_g_ParamLimits

0xfe1f,	// (0x0003e21a) slider_pane_g

0xc469,	// (0x0003a864) popup_tb_float_extension_window_ParamLimits

0xc469,	// (0x0003a864) popup_tb_float_extension_window

0xe690,	// (0x0003ca8b) aid_size_cell_tb_float_ext

0x3ea0,	// (0x0003229b) bg_popup_sub_window_cp28

0xe69c,	// (0x0003ca97) grid_tb_float_ext_pane

0xe6a6,	// (0x0003caa1) cell_tb_float_ext_pane_ParamLimits

0xe6a6,	// (0x0003caa1) cell_tb_float_ext_pane

0xe6c0,	// (0x0003cabb) cell_tb_float_ext_pane_g1

0xe6c9,	// (0x0003cac4) grid_highlight_pane_cp12

0xb883,	// (0x00039c7e) cell_last_hwr_side_pane_ParamLimits

0xb883,	// (0x00039c7e) cell_last_hwr_side_pane

0x7887,	// (0x00035c82) cell_last_hwr_side_pane_g1

0xe6d2,	// (0x0003cacd) cell_last_hwr_side_pane_g2

0x0001,

0xfe28,	// (0x0003e223) cell_last_hwr_side_pane_g

0xc012,	// (0x0003a40d) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc012,	// (0x0003a40d) vkb2_area_bottom_space_btn_pane

0x7a2e,	// (0x00035e29) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1f7,	// (0x0003c5f2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xc28c,	// (0x0003a687) cell_vkb2_top_candi_pane_t1_ParamLimits

0xc2ab,	// (0x0003a6a6) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xc2ab,	// (0x0003a6a6) vkb2_area_bottom_space_btn_pane_g1

0xc2e5,	// (0x0003a6e0) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xc2e5,	// (0x0003a6e0) vkb2_area_bottom_space_btn_pane_g2

0xc31b,	// (0x0003a716) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xc31b,	// (0x0003a716) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2d,	// (0x0003e228) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2d,	// (0x0003e228) vkb2_area_bottom_space_btn_pane_g

0xb7f7,	// (0x00039bf2) cel_fep_hwr_func_pane_ParamLimits

0xb7f7,	// (0x00039bf2) cel_fep_hwr_func_pane

0xb833,	// (0x00039c2e) cell_hwr_side_button_pane_ParamLimits

0xb833,	// (0x00039c2e) cell_hwr_side_button_pane

0xdbe1,	// (0x0003bfdc) aid_area_touch_clock_ParamLimits

0x4694,	// (0x00032a8f) bg_uniindi_top_pane_ParamLimits

0xdbf3,	// (0x0003bfee) uniindi_top_pane_g1_ParamLimits

0xdc09,	// (0x0003c004) uniindi_top_pane_g2_ParamLimits

0xdc15,	// (0x0003c010) uniindi_top_pane_g3_ParamLimits

0xdc26,	// (0x0003c021) uniindi_top_pane_g4_ParamLimits

0xfd45,	// (0x0003e140) uniindi_top_pane_g_ParamLimits

0xdc33,	// (0x0003c02e) uniindi_top_pane_t1_ParamLimits

0x4694,	// (0x00032a8f) bg_vkb2_func_pane_cp01_ParamLimits

0x4694,	// (0x00032a8f) bg_vkb2_func_pane_cp01

0xe6db,	// (0x0003cad6) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6db,	// (0x0003cad6) cel_fep_hwr_func_pane_g1

0x4694,	// (0x00032a8f) bg_vkb2_func_pane_cp02_ParamLimits

0x4694,	// (0x00032a8f) bg_vkb2_func_pane_cp02

0xe6db,	// (0x0003cad6) cell_hwr_side_button_pane_g1_ParamLimits

0xe6db,	// (0x0003cad6) cell_hwr_side_button_pane_g1

0x59eb,	// (0x00033de6) status_pane_g4_ParamLimits

0x59eb,	// (0x00033de6) status_pane_g4

0x5a05,	// (0x00033e00) status_pane_t1

0x770c,	// (0x00035b07) form2_midp_gauge_slider_cont_pane

0x7714,	// (0x00035b0f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcef8,	// (0x0003b2f3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcf0a,	// (0x0003b305) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb11,	// (0x0003df0c) form2_midp_gauge_slider_pane_t_ParamLimits

0x7726,	// (0x00035b21) form2_midp_slider_pane_ParamLimits

0xbc81,	// (0x0003a07c) aid_size_cell_func_vkb2_ParamLimits

0xbc81,	// (0x0003a07c) aid_size_cell_func_vkb2

0xe67c,	// (0x0003ca77) slider_pane_g4_ParamLimits

0xe67c,	// (0x0003ca77) slider_pane_g4

0xc365,	// (0x0003a760) form2_midp_gauge_slider_pane_t2_cp01

0xc373,	// (0x0003a76e) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc373,	// (0x0003a76e) form2_midp_gauge_slider_pane_t3_cp01

0xc390,	// (0x0003a78b) form2_midp_slider_pane_cp01

0x3ea0,	// (0x0003229b) navi_smil_pane

0xe70b,	// (0x0003cb06) navi_smil_pane_g1

0xe713,	// (0x0003cb0e) navi_smil_pane_t1

0xe6e9,	// (0x0003cae4) form2_midp_slider_pane_g1

0xe6f2,	// (0x0003caed) form2_midp_slider_pane_g2

0xe6fa,	// (0x0003caf5) form2_midp_slider_pane_g3

0xe6e9,	// (0x0003cae4) form2_midp_slider_pane_g4

0xe8f9,	// (0x0003ccf4) form2_midp_slider_pane_g5

0x0004,

0xfe36,	// (0x0003e231) form2_midp_slider_pane_g

0xc355,	// (0x0003a750) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xc355,	// (0x0003a750) vkb2_area_bottom_space_btn_pane_g4

0xc5d0,	// (0x0003a9cb) lc0_navi_pane_ParamLimits

0xc5d0,	// (0x0003a9cb) lc0_navi_pane

0xc646,	// (0x0003aa41) lc0_stat_indi_pane_ParamLimits

0xc646,	// (0x0003aa41) lc0_stat_indi_pane

0xc65d,	// (0x0003aa58) ls0_title_pane_ParamLimits

0xc65d,	// (0x0003aa58) ls0_title_pane

0x4b62,	// (0x00032f5d) bg_popup_sub_pane_cp14_ParamLimits

0xdbc8,	// (0x0003bfc3) list_uniindi_pane_ParamLimits

0xdbd4,	// (0x0003bfcf) uniindi_top_pane_ParamLimits

0xdc70,	// (0x0003c06b) list_single_uniindi_pane_g1_ParamLimits

0xdc83,	// (0x0003c07e) list_single_uniindi_pane_t1_ParamLimits

0xc399,	// (0x0003a794) lc0_stat_clock_pane_ParamLimits

0xc399,	// (0x0003a794) lc0_stat_clock_pane

0xe902,	// (0x0003ccfd) lc0_stat_indi_pane_g1_ParamLimits

0xe902,	// (0x0003ccfd) lc0_stat_indi_pane_g1

0xe90f,	// (0x0003cd0a) lc0_stat_indi_pane_g2_ParamLimits

0xe90f,	// (0x0003cd0a) lc0_stat_indi_pane_g2

0x0001,

0xfe41,	// (0x0003e23c) lc0_stat_indi_pane_g_ParamLimits

0xfe41,	// (0x0003e23c) lc0_stat_indi_pane_g

0xc3a6,	// (0x0003a7a1) lc0_uni_indicator_pane_ParamLimits

0xc3a6,	// (0x0003a7a1) lc0_uni_indicator_pane

0xe721,	// (0x0003cb1c) ls0_title_pane_g1_ParamLimits

0xe721,	// (0x0003cb1c) ls0_title_pane_g1

0xe91c,	// (0x0003cd17) ls0_title_pane_t1_ParamLimits

0xe91c,	// (0x0003cd17) ls0_title_pane_t1

0xc3b3,	// (0x0003a7ae) lc0_uni_indicator_pane_g1_ParamLimits

0xc3b3,	// (0x0003a7ae) lc0_uni_indicator_pane_g1

0xe735,	// (0x0003cb30) lc0_stat_clock_pane_t1

0x3ea0,	// (0x0003229b) main_ai5_pane

0xe743,	// (0x0003cb3e) ai5_sk_pane_ParamLimits

0xe743,	// (0x0003cb3e) ai5_sk_pane

0xe952,	// (0x0003cd4d) cell_ai5_widget_pane_ParamLimits

0xe952,	// (0x0003cd4d) cell_ai5_widget_pane

0xe750,	// (0x0003cb4b) aid_size_cell_widget_grid

0xe762,	// (0x0003cb5d) bg_ai5_widget_pane_ParamLimits

0xe762,	// (0x0003cb5d) bg_ai5_widget_pane

0xef3b,	// (0x0003d336) cell_ai5_widget_pane_g2

0xef4b,	// (0x0003d346) cell_ai5_widget_pane_g3

0xef5f,	// (0x0003d35a) cell_ai5_widget_pane_g4

0xef6b,	// (0x0003d366) cell_ai5_widget_pane_g5

0xef77,	// (0x0003d372) cell_ai5_widget_pane_g6

0xef83,	// (0x0003d37e) cell_ai5_widget_pane_g7

0xefcb,	// (0x0003d3c6) cell_ai5_widget_pane_t1_ParamLimits

0xefcb,	// (0x0003d3c6) cell_ai5_widget_pane_t1

0xefe8,	// (0x0003d3e3) cell_ai5_widget_pane_t2_ParamLimits

0xefe8,	// (0x0003d3e3) cell_ai5_widget_pane_t2

0xf000,	// (0x0003d3fb) cell_ai5_widget_pane_t3_ParamLimits

0xf000,	// (0x0003d3fb) cell_ai5_widget_pane_t3

0xf018,	// (0x0003d413) cell_ai5_widget_pane_t4_ParamLimits

0xf018,	// (0x0003d413) cell_ai5_widget_pane_t4

0xf032,	// (0x0003d42d) cell_ai5_widget_pane_t5_ParamLimits

0xf032,	// (0x0003d42d) cell_ai5_widget_pane_t5

0xe76e,	// (0x0003cb69) cell_ai5_widget_pane_t6_ParamLimits

0xe76e,	// (0x0003cb69) cell_ai5_widget_pane_t6

0xe780,	// (0x0003cb7b) cell_ai5_widget_pane_t7_ParamLimits

0xe780,	// (0x0003cb7b) cell_ai5_widget_pane_t7

0xf051,	// (0x0003d44c) cell_ai5_widget_pane_t8_ParamLimits

0xf051,	// (0x0003d44c) cell_ai5_widget_pane_t8

0x0009,

0xfe46,	// (0x0003e241) cell_ai5_widget_pane_t_ParamLimits

0xfe46,	// (0x0003e241) cell_ai5_widget_pane_t

0xf099,	// (0x0003d494) grid_ai5_widget_pane

0x4b62,	// (0x00032f5d) highlight_cell_ai5_widget_pane_ParamLimits

0x4b62,	// (0x00032f5d) highlight_cell_ai5_widget_pane

0xf0b1,	// (0x0003d4ac) ai5_sk_left_pane

0xf0bb,	// (0x0003d4b6) ai5_sk_middle_pane

0xf0c5,	// (0x0003d4c0) ai5_sk_right_pane

0xe799,	// (0x0003cb94) bg_ai5_widget_pane_g1_ParamLimits

0xe799,	// (0x0003cb94) bg_ai5_widget_pane_g1

0xe7a5,	// (0x0003cba0) bg_ai5_widget_pane_g2_ParamLimits

0xe7a5,	// (0x0003cba0) bg_ai5_widget_pane_g2

0xe7b1,	// (0x0003cbac) bg_ai5_widget_pane_g3_ParamLimits

0xe7b1,	// (0x0003cbac) bg_ai5_widget_pane_g3

0xe7bd,	// (0x0003cbb8) bg_ai5_widget_pane_g4_ParamLimits

0xe7bd,	// (0x0003cbb8) bg_ai5_widget_pane_g4

0xe7c9,	// (0x0003cbc4) bg_ai5_widget_pane_g5_ParamLimits

0xe7c9,	// (0x0003cbc4) bg_ai5_widget_pane_g5

0xe7d5,	// (0x0003cbd0) bg_ai5_widget_pane_g6_ParamLimits

0xe7d5,	// (0x0003cbd0) bg_ai5_widget_pane_g6

0xe7e1,	// (0x0003cbdc) bg_ai5_widget_pane_g7_ParamLimits

0xe7e1,	// (0x0003cbdc) bg_ai5_widget_pane_g7

0xe7ed,	// (0x0003cbe8) bg_ai5_widget_pane_g8_ParamLimits

0xe7ed,	// (0x0003cbe8) bg_ai5_widget_pane_g8

0xe7f9,	// (0x0003cbf4) bg_ai5_widget_pane_g9_ParamLimits

0xe7f9,	// (0x0003cbf4) bg_ai5_widget_pane_g9

0x0008,

0xfe5b,	// (0x0003e256) bg_ai5_widget_pane_g_ParamLimits

0xfe5b,	// (0x0003e256) bg_ai5_widget_pane_g

0xe805,	// (0x0003cc00) cell_shortcut_ai5_widget_pane_ParamLimits

0xe805,	// (0x0003cc00) cell_shortcut_ai5_widget_pane

0x459d,	// (0x00032998) bg_cell_shortcut_ai5_widget_pane

0xe817,	// (0x0003cc12) cell_grid_ai5_widget_pane_g1

0xe820,	// (0x0003cc1b) highlight_cell_shortcut_ai5_widget_pane

0x5b0d,	// (0x00033f08) ai5_sk_left_pane_g1

0xe828,	// (0x0003cc23) ai5_sk_left_pane_g2

0xe830,	// (0x0003cc2b) ai5_sk_left_pane_g3

0xe838,	// (0x0003cc33) ai5_sk_left_pane_g4

0x0003,

0xfe6e,	// (0x0003e269) ai5_sk_left_pane_g

0xe840,	// (0x0003cc3b) ai5_sk_left_pane_t1

0x5b15,	// (0x00033f10) ai5_sk_right_pane_g1

0xe84e,	// (0x0003cc49) ai5_sk_right_pane_g2

0xe856,	// (0x0003cc51) ai5_sk_right_pane_g3

0xe85e,	// (0x0003cc59) ai5_sk_right_pane_g4

0x0003,

0xfe77,	// (0x0003e272) ai5_sk_right_pane_g

0xe866,	// (0x0003cc61) ai5_sk_right_pane_t1

0x5b15,	// (0x00033f10) ai5_sk_middle_pane_g1

0x5b0d,	// (0x00033f08) ai5_sk_middle_pane_g2

0x5b2d,	// (0x00033f28) ai5_sk_middle_pane_g3

0xe856,	// (0x0003cc51) ai5_sk_middle_pane_g4

0xe830,	// (0x0003cc2b) ai5_sk_middle_pane_g5

0xe874,	// (0x0003cc6f) ai5_sk_middle_pane_g6

0xf0eb,	// (0x0003d4e6) ai5_sk_middle_pane_g7

0x0006,

0xfe80,	// (0x0003e27b) ai5_sk_middle_pane_g

0xc519,	// (0x0003a914) aid_touch_area_size_lc0_ParamLimits

0xc519,	// (0x0003a914) aid_touch_area_size_lc0

0xb982,	// (0x00039d7d) cell_hwr_candidate_pane_t1_ParamLimits

0x590d,	// (0x00033d08) aid_touch_navi_pane

0xc733,	// (0x0003ab2e) status_dt_navi_pane_ParamLimits

0xc733,	// (0x0003ab2e) status_dt_navi_pane

0xc740,	// (0x0003ab3b) status_dt_sta_pane_ParamLimits

0xc740,	// (0x0003ab3b) status_dt_sta_pane

0xf0f3,	// (0x0003d4ee) dt_sta_controll_pane

0xf100,	// (0x0003d4fb) dt_sta_indi_pane

0xf111,	// (0x0003d50c) dt_sta_title_pane

0x4694,	// (0x00032a8f) bg_dt_sta_indi_pane_ParamLimits

0x4694,	// (0x00032a8f) bg_dt_sta_indi_pane

0xe87c,	// (0x0003cc77) dt_sta_battery_pane

0xf124,	// (0x0003d51f) dt_sta_indi_pane_g1

0xf12d,	// (0x0003d528) dt_sta_indi_pane_g2

0xf136,	// (0x0003d531) dt_sta_indi_pane_g3

0x0002,

0x035d,	// (0x0002e758) dt_sta_indi_pane_g

0xf13f,	// (0x0003d53a) dt_sta_signal_pane

0x4b62,	// (0x00032f5d) bg_dt_sta_title_pane_ParamLimits

0x4b62,	// (0x00032f5d) bg_dt_sta_title_pane

0xf148,	// (0x0003d543) dt_sta_title_pane_g1

0xf150,	// (0x0003d54b) dt_sta_title_pane_t1_ParamLimits

0xf150,	// (0x0003d54b) dt_sta_title_pane_t1

0x3ea0,	// (0x0003229b) bg_dt_sta_control_pane

0xf165,	// (0x0003d560) dt_sta_controll_pane_g1

0xf16e,	// (0x0003d569) bg_dt_sta_title_pane_g1

0xf177,	// (0x0003d572) bg_dt_sta_title_pane_g2

0xf180,	// (0x0003d57b) bg_dt_sta_title_pane_g3

0x0002,

0x0364,	// (0x0002e75f) bg_dt_sta_title_pane_g

0x7887,	// (0x00035c82) bg_dt_sta_indi_pane_g1

0xe884,	// (0x0003cc7f) dt_sta_signal_pane_g1

0xe88c,	// (0x0003cc87) dt_sta_signal_pane_g2

0x0001,

0xfe8f,	// (0x0003e28a) dt_sta_signal_pane_g

0xe894,	// (0x0003cc8f) dt_sta_battery_pane_g1

0xe89d,	// (0x0003cc98) dt_sta_battery_pane_t1

0x7887,	// (0x00035c82) bg_dt_sta_control_pane_g1

0x5118,	// (0x00033513) fep_china_uni_eep_pane

0x5120,	// (0x0003351b) fep_china_uni_entry_pane_ParamLimits

0x5130,	// (0x0003352b) popup_fep_china_uni_window_g1_ParamLimits

0x5140,	// (0x0003353b) popup_fep_china_uni_window_g2_ParamLimits

0x5140,	// (0x0003353b) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0003db5d) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0003db5d) popup_fep_china_uni_window_g

0xe8ac,	// (0x0003cca7) fep_china_uni_eep_pane_g1

0xe8b4,	// (0x0003ccaf) fep_china_uni_eep_pane_t1

0xe702,	// (0x0003cafd) aid_touch_area_size_smil_player

0x59be,	// (0x00033db9) lc0_clock_pane

0x59f9,	// (0x00033df4) status_pane_g5_ParamLimits

0x59f9,	// (0x00033df4) status_pane_g5

0xaf1c,	// (0x00039317) popup_keymap_window

0x59d7,	// (0x00033dd2) status_icon_pane

0xef4b,	// (0x0003d346) cell_ai5_widget_pane_g3_ParamLimits

0xef5f,	// (0x0003d35a) cell_ai5_widget_pane_g4_ParamLimits

0xef6b,	// (0x0003d366) cell_ai5_widget_pane_g5_ParamLimits

0xef8f,	// (0x0003d38a) cell_ai5_widget_pane_g8_ParamLimits

0xef8f,	// (0x0003d38a) cell_ai5_widget_pane_g8

0xefa3,	// (0x0003d39e) cell_ai5_widget_pane_g9_ParamLimits

0xefa3,	// (0x0003d39e) cell_ai5_widget_pane_g9

0xefb7,	// (0x0003d3b2) cell_ai5_widget_pane_g10_ParamLimits

0xefb7,	// (0x0003d3b2) cell_ai5_widget_pane_g10

0xe8c3,	// (0x0003ccbe) status_icon_pane_g1

0x3ea0,	// (0x0003229b) bg_popup_sub_pane_cp13

0xe8cb,	// (0x0003ccc6) popup_keymap_window_t1

0xaccf,	// (0x000390ca) control_pane_g6_ParamLimits

0xaccf,	// (0x000390ca) control_pane_g6

0xacdc,	// (0x000390d7) control_pane_g7_ParamLimits

0xacdc,	// (0x000390d7) control_pane_g7

0xace9,	// (0x000390e4) control_pane_g8_ParamLimits

0xace9,	// (0x000390e4) control_pane_g8

0xf0f3,	// (0x0003d4ee) dt_sta_controll_pane_ParamLimits

0xf100,	// (0x0003d4fb) dt_sta_indi_pane_ParamLimits

0xf111,	// (0x0003d50c) dt_sta_title_pane_ParamLimits

0x4aa4,	// (0x00032e9f) aid_size_touch_scroll_bar_cale

0x9f89,	// (0x00038384) popup_discreet_window_ParamLimits

0x9f89,	// (0x00038384) popup_discreet_window

0xa011,	// (0x0003840c) popup_sk_window

0x608c,	// (0x00034487) bg_popup_sub_pane_cp28_ParamLimits

0x608c,	// (0x00034487) bg_popup_sub_pane_cp28

0xe8d9,	// (0x0003ccd4) popup_discreet_window_g1_ParamLimits

0xe8d9,	// (0x0003ccd4) popup_discreet_window_g1

0xe9ca,	// (0x0003cdc5) popup_discreet_window_t1_ParamLimits

0xe9ca,	// (0x0003cdc5) popup_discreet_window_t1

0xe9e8,	// (0x0003cde3) popup_discreet_window_t2_ParamLimits

0xe9e8,	// (0x0003cde3) popup_discreet_window_t2

0x0002,

0xfe94,	// (0x0003e28f) popup_discreet_window_t_ParamLimits

0xfe94,	// (0x0003e28f) popup_discreet_window_t

0xc3c7,	// (0x0003a7c2) popup_sk_window_g1

0xc3d1,	// (0x0003a7cc) popup_sk_window_g2

0x0001,

0xfe9b,	// (0x0003e296) popup_sk_window_g

0xea3a,	// (0x0003ce35) popup_sk_window_t1

0xea48,	// (0x0003ce43) popup_sk_window_t1_copy1

0xef3b,	// (0x0003d336) cell_ai5_widget_pane_g2_ParamLimits

0xf063,	// (0x0003d45e) cell_ai5_widget_pane_t9_ParamLimits

0xf063,	// (0x0003d45e) cell_ai5_widget_pane_t9

0x3ea0,	// (0x0003229b) main_fep_fshwr2_pane

0xf189,	// (0x0003d584) aid_fshwr2_btn_pane

0xf191,	// (0x0003d58c) aid_fshwr2_syb_pane

0xf199,	// (0x0003d594) aid_fshwr2_txt_pane

0xf1a1,	// (0x0003d59c) fshwr2_func_candi_pane

0xf1ad,	// (0x0003d5a8) fshwr2_hwr_syb_pane

0xf1b9,	// (0x0003d5b4) fshwr2_icf_pane

0x3ea0,	// (0x0003229b) fshwr2_icf_bg_pane

0xf1c3,	// (0x0003d5be) fshwr2_icf_pane_t1_ParamLimits

0xf1c3,	// (0x0003d5be) fshwr2_icf_pane_t1

0x7887,	// (0x00035c82) fshwr2_func_candi_pane_g1

0xea6a,	// (0x0003ce65) fshwr2_func_candi_row_pane_ParamLimits

0xea6a,	// (0x0003ce65) fshwr2_func_candi_row_pane

0xf1da,	// (0x0003d5d5) cell_fshwr2_syb_pane_ParamLimits

0xf1da,	// (0x0003d5d5) cell_fshwr2_syb_pane

0x7a2e,	// (0x00035e29) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7a2e,	// (0x00035e29) fshwr2_hwr_syb_pane_g1

0x3ea0,	// (0x0003229b) bg_popup_call_pane_cp01

0xea7b,	// (0x0003ce76) fshwr2_func_candi_cell_pane_ParamLimits

0xea7b,	// (0x0003ce76) fshwr2_func_candi_cell_pane

0xeaac,	// (0x0003cea7) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeaac,	// (0x0003cea7) fshwr2_func_candi_cell_bg_pane

0xeac6,	// (0x0003cec1) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xeac6,	// (0x0003cec1) fshwr2_func_candi_cell_pane_g1

0xeaee,	// (0x0003cee9) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xeaee,	// (0x0003cee9) fshwr2_func_candi_cell_pane_t1

0x3ea0,	// (0x0003229b) bg_button_pane_cp08

0x5587,	// (0x00033982) cell_fshwr2_syb_bg_pane

0xf1f4,	// (0x0003d5ef) cell_fshwr2_syb_bg_pane_g1

0xf1fc,	// (0x0003d5f7) cell_fshwr2_syb_bg_pane_t1

0x4b62,	// (0x00032f5d) main_tmo_pane

0xca32,	// (0x0003ae2d) uni_indicator_pane_g1_ParamLimits

0xca47,	// (0x0003ae42) uni_indicator_pane_g2_ParamLimits

0xca5d,	// (0x0003ae58) uni_indicator_pane_g3_ParamLimits

0x6aac,	// (0x00034ea7) uni_indicator_pane_g4_ParamLimits

0x6aac,	// (0x00034ea7) uni_indicator_pane_g4

0x6ac0,	// (0x00034ebb) uni_indicator_pane_g5_ParamLimits

0x6ac0,	// (0x00034ebb) uni_indicator_pane_g5

0x6ad4,	// (0x00034ecf) uni_indicator_pane_g6_ParamLimits

0x6ad4,	// (0x00034ecf) uni_indicator_pane_g6

0xf95f,	// (0x0003dd5a) uni_indicator_pane_g_ParamLimits

0xd7bf,	// (0x0003bbba) popup_tmo_note_window_ParamLimits

0xd7bf,	// (0x0003bbba) popup_tmo_note_window

0x3ea0,	// (0x0003229b) fshwr2_bg_pane

0xeadf,	// (0x0003ceda) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xeadf,	// (0x0003ceda) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea0,	// (0x0003e29b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea0,	// (0x0003e29b) fshwr2_func_candi_cell_pane_g

0x7887,	// (0x00035c82) bg_popup_window_pane_cp01

0xeb01,	// (0x0003cefc) bg_popup_window_pane_g1_cp01

0xeb0a,	// (0x0003cf05) bg_popup_window_pane_cp22_ParamLimits

0xeb0a,	// (0x0003cf05) bg_popup_window_pane_cp22

0xeb18,	// (0x0003cf13) listscroll_tmo_link_pane_ParamLimits

0xeb18,	// (0x0003cf13) listscroll_tmo_link_pane

0xeb58,	// (0x0003cf53) popup_tmo_note_window_g1_ParamLimits

0xeb58,	// (0x0003cf53) popup_tmo_note_window_g1

0xeb65,	// (0x0003cf60) tmo_note_info_pane_ParamLimits

0xeb65,	// (0x0003cf60) tmo_note_info_pane

0xf20b,	// (0x0003d606) list_tmo_note_info_pane_g1_ParamLimits

0xf20b,	// (0x0003d606) list_tmo_note_info_pane_g1

0xeb7f,	// (0x0003cf7a) list_tmo_note_info_pane_g2_ParamLimits

0xeb7f,	// (0x0003cf7a) list_tmo_note_info_pane_g2

0x0001,

0xfea5,	// (0x0003e2a0) list_tmo_note_info_pane_g_ParamLimits

0xfea5,	// (0x0003e2a0) list_tmo_note_info_pane_g

0xeb9b,	// (0x0003cf96) list_tmo_note_info_text_pane_ParamLimits

0xeb9b,	// (0x0003cf96) list_tmo_note_info_text_pane

0xebdd,	// (0x0003cfd8) list_tmo_link_pane

0xebea,	// (0x0003cfe5) scroll_pane_cp20

0xebf7,	// (0x0003cff2) list_single_tmo_link_pane_ParamLimits

0xebf7,	// (0x0003cff2) list_single_tmo_link_pane

0xec07,	// (0x0003d002) list_single_tmo_link_pane_t1

0xec15,	// (0x0003d010) list_tmo_note_info_text_pane_t1_ParamLimits

0xec15,	// (0x0003d010) list_tmo_note_info_text_pane_t1

0xa4fb,	// (0x000388f6) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa4fb,	// (0x000388f6) aid_size_touch_scroll_bar_cp01

0x951c,	// (0x00037917) aid_size_touch_slider_marker

0x9ff9,	// (0x000383f4) popup_settings_window_ParamLimits

0x9ff9,	// (0x000383f4) popup_settings_window

0x96cf,	// (0x00037aca) popup_candi_list_indi_window

0x590d,	// (0x00033d08) aid_touch_navi_pane_ParamLimits

0xbbd7,	// (0x00039fd2) rs_clock_indi_pane

0xbbe0,	// (0x00039fdb) sctrl_sk_bottom_pane_ParamLimits

0xbbf1,	// (0x00039fec) sctrl_sk_top_pane_ParamLimits

0xbcdb,	// (0x0003a0d6) popup_fep_tooltip_window

0xe750,	// (0x0003cb4b) aid_size_cell_widget_grid_ParamLimits

0xef2f,	// (0x0003d32a) cell_ai5_widget_pane_g1_ParamLimits

0xef2f,	// (0x0003d32a) cell_ai5_widget_pane_g1

0xef77,	// (0x0003d372) cell_ai5_widget_pane_g6_ParamLimits

0xef83,	// (0x0003d37e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x02ff,	// (0x0002e6fa) cell_ai5_widget_pane_g_ParamLimits

0x02ff,	// (0x0002e6fa) cell_ai5_widget_pane_g

0xf087,	// (0x0003d482) cell_ai5_widget_pane_t10_ParamLimits

0xf087,	// (0x0003d482) cell_ai5_widget_pane_t10

0xf099,	// (0x0003d494) grid_ai5_widget_pane_ParamLimits

0xf0cf,	// (0x0003d4ca) cell_contacts_ai5_widget_pane_ParamLimits

0xf0cf,	// (0x0003d4ca) cell_contacts_ai5_widget_pane

0xe9fd,	// (0x0003cdf8) popup_discreet_window_t3_ParamLimits

0xe9fd,	// (0x0003cdf8) popup_discreet_window_t3

0xea56,	// (0x0003ce51) popup_fshwr2_char_preview_window_ParamLimits

0xea56,	// (0x0003ce51) popup_fshwr2_char_preview_window

0xf222,	// (0x0003d61d) tmo_note_info_pane_t1

0xf237,	// (0x0003d632) tmo_note_info_pane_t2

0xf24c,	// (0x0003d647) tmo_note_info_pane_t3

0xebb9,	// (0x0003cfb4) tmo_note_info_pane_t4

0xebcb,	// (0x0003cfc6) tmo_note_info_pane_t5

0x0004,

0xfeaa,	// (0x0003e2a5) tmo_note_info_pane_t

0xebdd,	// (0x0003cfd8) list_tmo_link_pane_ParamLimits

0xebea,	// (0x0003cfe5) scroll_pane_cp20_ParamLimits

0x3ea0,	// (0x0003229b) bg_popup_fep_char_preview_window_cp01

0xec2e,	// (0x0003d029) popup_fshwr2_char_preview_window_t1

0xec3c,	// (0x0003d037) popup_candi_list_indi_window_g1

0xec45,	// (0x0003d040) bg_cell_contacts_ai5_widget_pane

0xf261,	// (0x0003d65c) cell_contacts_ai5_widget_pane_g1

0xf276,	// (0x0003d671) cell_contacts_ai5_widget_pane_g2

0xf285,	// (0x0003d680) cell_contacts_ai5_widget_pane_g3

0x0002,

0x0391,	// (0x0002e78c) cell_contacts_ai5_widget_pane_g

0xf299,	// (0x0003d694) cell_contacts_ai5_widget_pane_t1

0x4b62,	// (0x00032f5d) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf310,	// (0x0003d70b) settings_container_pane

0x5587,	// (0x00033982) listscroll_set_pane_copy1

0x7296,	// (0x00035691) scroll_pane_cp121_copy1

0xec51,	// (0x0003d04c) set_content_pane_copy1

0xf31c,	// (0x0003d717) aid_height_set_list_copy1_ParamLimits

0xf31c,	// (0x0003d717) aid_height_set_list_copy1

0x6841,	// (0x00034c3c) aid_size_parent_copy1_ParamLimits

0x6841,	// (0x00034c3c) aid_size_parent_copy1

0xf328,	// (0x0003d723) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf328,	// (0x0003d723) button_value_adjust_pane_cp6_copy1

0x4cba,	// (0x000330b5) list_highlight_pane_cp2_copy1_ParamLimits

0x4cba,	// (0x000330b5) list_highlight_pane_cp2_copy1

0xf33c,	// (0x0003d737) list_set_pane_copy1_ParamLimits

0xf33c,	// (0x0003d737) list_set_pane_copy1

0xf2ab,	// (0x0003d6a6) main_pane_set_t1_copy1_ParamLimits

0xf2ab,	// (0x0003d6a6) main_pane_set_t1_copy1

0xf2e5,	// (0x0003d6e0) main_pane_set_t2_copy1_ParamLimits

0xf2e5,	// (0x0003d6e0) main_pane_set_t2_copy1

0xf3e9,	// (0x0003d7e4) main_pane_set_t3_copy1

0xf3f7,	// (0x0003d7f2) main_pane_set_t4_copy1

0xf304,	// (0x0003d6ff) set_content_pane_g1_copy1_ParamLimits

0xf304,	// (0x0003d6ff) set_content_pane_g1_copy1

0xf405,	// (0x0003d800) setting_code_pane_copy1

0xec59,	// (0x0003d054) setting_slider_graphic_pane_copy1

0xec59,	// (0x0003d054) setting_slider_pane_copy1

0xec63,	// (0x0003d05e) setting_text_pane_copy1

0xec6d,	// (0x0003d068) setting_volume_pane_copy1

0xf40f,	// (0x0003d80a) settings_code_pane_cp2_copy1

0xf417,	// (0x0003d812) settings_code_pane_cp_copy1_ParamLimits

0xf417,	// (0x0003d812) settings_code_pane_cp_copy1

0xf42b,	// (0x0003d826) volume_set_pane_copy1

0xf433,	// (0x0003d82e) volume_set_pane_g10_copy1

0xf43b,	// (0x0003d836) volume_set_pane_g1_copy1

0xf443,	// (0x0003d83e) volume_set_pane_g2_copy1

0xf44b,	// (0x0003d846) volume_set_pane_g3_copy1

0xf453,	// (0x0003d84e) volume_set_pane_g4_copy1

0xf45b,	// (0x0003d856) volume_set_pane_g5_copy1

0xf463,	// (0x0003d85e) volume_set_pane_g6_copy1

0xf46b,	// (0x0003d866) volume_set_pane_g7_copy1

0xf473,	// (0x0003d86e) volume_set_pane_g8_copy1

0xf47b,	// (0x0003d876) volume_set_pane_g9_copy1

0x3f10,	// (0x0003230b) bg_set_opt_pane_cp_copy1_ParamLimits

0x3f10,	// (0x0003230b) bg_set_opt_pane_cp_copy1

0xec76,	// (0x0003d071) setting_slider_pane_t1_copy1_ParamLimits

0xec76,	// (0x0003d071) setting_slider_pane_t1_copy1

0xf483,	// (0x0003d87e) setting_slider_pane_t2_copy1_ParamLimits

0xf483,	// (0x0003d87e) setting_slider_pane_t2_copy1

0xf49d,	// (0x0003d898) setting_slider_pane_t3_copy1_ParamLimits

0xf49d,	// (0x0003d898) setting_slider_pane_t3_copy1

0xf4b5,	// (0x0003d8b0) slider_set_pane_copy1_ParamLimits

0xf4b5,	// (0x0003d8b0) slider_set_pane_copy1

0x4bc9,	// (0x00032fc4) set_opt_bg_pane_g1_copy2

0x4bd1,	// (0x00032fcc) set_opt_bg_pane_g2_copy2

0xec94,	// (0x0003d08f) set_opt_bg_pane_g3_copy2

0x4be1,	// (0x00032fdc) set_opt_bg_pane_g4_copy2

0x4be9,	// (0x00032fe4) set_opt_bg_pane_g5_copy2

0x4bf1,	// (0x00032fec) set_opt_bg_pane_g6_copy2

0xf4cb,	// (0x0003d8c6) set_opt_bg_pane_g7_copy2

0xec9e,	// (0x0003d099) set_opt_bg_pane_g8_copy2

0xeca8,	// (0x0003d0a3) set_opt_bg_pane_g9_copy2

0xc3db,	// (0x0003a7d6) aid_size_touch_slider_mark_copy1_ParamLimits

0xc3db,	// (0x0003a7d6) aid_size_touch_slider_mark_copy1

0xecb2,	// (0x0003d0ad) slider_set_pane_g1_copy1

0xc3ef,	// (0x0003a7ea) slider_set_pane_g2_copy1

0xb4c8,	// (0x000398c3) slider_set_pane_g3_copy1_ParamLimits

0xb4c8,	// (0x000398c3) slider_set_pane_g3_copy1

0xb4dc,	// (0x000398d7) slider_set_pane_g4_copy1_ParamLimits

0xb4dc,	// (0x000398d7) slider_set_pane_g4_copy1

0xb4f4,	// (0x000398ef) slider_set_pane_g5_copy1_ParamLimits

0xb4f4,	// (0x000398ef) slider_set_pane_g5_copy1

0xb4c8,	// (0x000398c3) slider_set_pane_g6_copy1_ParamLimits

0xb4c8,	// (0x000398c3) slider_set_pane_g6_copy1

0xc3f7,	// (0x0003a7f2) slider_set_pane_g7_copy1_ParamLimits

0xc3f7,	// (0x0003a7f2) slider_set_pane_g7_copy1

0x3eb4,	// (0x000322af) bg_set_opt_pane_cp2_copy1

0xecbb,	// (0x0003d0b6) setting_slider_graphic_pane_g1_copy1

0xf4d3,	// (0x0003d8ce) setting_slider_graphic_pane_t1_copy1

0xf4e3,	// (0x0003d8de) setting_slider_graphic_pane_t2_copy1

0xf4f3,	// (0x0003d8ee) slider_set_pane_cp_copy1

0xeccc,	// (0x0003d0c7) input_focus_pane_cp1_copy1

0xecd5,	// (0x0003d0d0) list_set_text_pane_copy1

0xecdd,	// (0x0003d0d8) setting_text_pane_g1_copy1

0x9ce4,	// (0x000380df) set_text_pane_t1_copy1

0xeccc,	// (0x0003d0c7) input_focus_pane_cp2_copy1

0xecdd,	// (0x0003d0d8) setting_code_pane_g1_copy1

0xf4fb,	// (0x0003d8f6) setting_code_pane_t1_copy1

0xf509,	// (0x0003d904) list_set_graphic_pane_copy1

0x3eb4,	// (0x000322af) bg_set_opt_pane_cp4_copy1

0xaac2,	// (0x00038ebd) list_set_graphic_pane_g1_copy1_ParamLimits

0xaac2,	// (0x00038ebd) list_set_graphic_pane_g1_copy1

0xf51b,	// (0x0003d916) list_set_graphic_pane_g2_copy1

0xaada,	// (0x00038ed5) list_set_graphic_pane_t1_copy1_ParamLimits

0xaada,	// (0x00038ed5) list_set_graphic_pane_t1_copy1

0x7887,	// (0x00035c82) rs_clock_indi_pane_g1

0xece6,	// (0x0003d0e1) rs_clock_indi_pane_t1

0xe87c,	// (0x0003cc77) rs_indi_pane

0xecf4,	// (0x0003d0ef) rs_indi_pane_g1

0xecfd,	// (0x0003d0f8) rs_indi_pane_g2

0xed06,	// (0x0003d101) rs_indi_pane_g3

0x0002,

0xfeb5,	// (0x0003e2b0) rs_indi_pane_g

0x5587,	// (0x00033982) bg_popup_preview_window_pane_cp03

0xed0f,	// (0x0003d10a) popup_fep_tooltip_window_t1

0x81a3,	// (0x0003659e) popup_note2_window_g2_ParamLimits

0x81a3,	// (0x0003659e) popup_note2_window_g2

0x0001,

0xfc7d,	// (0x0003e078) popup_note2_window_g_ParamLimits

0xfc7d,	// (0x0003e078) popup_note2_window_g

0xd45b,	// (0x0003b856) bg_popup_sub_pane_cp11_ParamLimits

0xd468,	// (0x0003b863) cell_ai3_links_pane_g1_ParamLimits

0xd47f,	// (0x0003b87a) cell_ai3_links_pane_t1

0x9ce4,	// (0x000380df) set_text_pane_t1_copy1_ParamLimits

0x5498,	// (0x00033893) cell_graphic_popup_pane_cp2_ParamLimits

0x5498,	// (0x00033893) cell_graphic_popup_pane_cp2

0xed1d,	// (0x0003d118) cell_graphic_popup_pane_g1_cp2

0x48b7,	// (0x00032cb2) cell_graphic_popup_pane_g2_cp2

0xed25,	// (0x0003d120) cell_graphic_popup_pane_g3_cp2

0xed2d,	// (0x0003d128) cell_graphic_popup_pane_t2_cp2

0x48c8,	// (0x00032cc3) grid_highlight_pane_cp3_cp2

0x4e64,	// (0x0003325f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4b62,	// (0x00032f5d) main_tmo_pane_ParamLimits

0xd7b3,	// (0x0003bbae) popup_tmo_big_image_note_window

0xef1f,	// (0x0003d31a) cell_ai5_widget_list_pane

0xef27,	// (0x0003d322) cell_ai5_widget_lrg_icon_pane

0xf222,	// (0x0003d61d) tmo_note_info_pane_t1_ParamLimits

0xf237,	// (0x0003d632) tmo_note_info_pane_t2_ParamLimits

0xf24c,	// (0x0003d647) tmo_note_info_pane_t3_ParamLimits

0xebb9,	// (0x0003cfb4) tmo_note_info_pane_t4_ParamLimits

0xebcb,	// (0x0003cfc6) tmo_note_info_pane_t5_ParamLimits

0xfeaa,	// (0x0003e2a5) tmo_note_info_pane_t_ParamLimits

0xf310,	// (0x0003d70b) settings_container_pane_ParamLimits

0xecc4,	// (0x0003d0bf) indicator_popup_pane_cp5

0xecc4,	// (0x0003d0bf) indicator_popup_pane_cp6

0xf509,	// (0x0003d904) list_set_graphic_pane_copy1_ParamLimits

0x3ea0,	// (0x0003229b) bg_popup_window_pane_cp23

0xed3b,	// (0x0003d136) popup_tmo_big_image_note_window_g1

0xed45,	// (0x0003d140) popup_tmo_big_image_note_window_t1

0xed55,	// (0x0003d150) popup_tmo_big_image_note_window_t2

0xed65,	// (0x0003d160) popup_tmo_big_image_note_window_t3

0x0002,

0xfebc,	// (0x0003e2b7) popup_tmo_big_image_note_window_t

0xf523,	// (0x0003d91e) cell_ai5_widget_lrg_icon_pane_g1

0xf52b,	// (0x0003d926) cell_ai5_widget_lrg_icon_pane_t1

0xf539,	// (0x0003d934) cell_ai5_widget_list_row_pane_ParamLimits

0xf539,	// (0x0003d934) cell_ai5_widget_list_row_pane

0xf552,	// (0x0003d94d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf552,	// (0x0003d94d) cell_ai5_widget_list_row_pane_g1

0xf55f,	// (0x0003d95a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf55f,	// (0x0003d95a) cell_ai5_widget_list_row_pane_t1

0xf577,	// (0x0003d972) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf577,	// (0x0003d972) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfec3,	// (0x0003e2be) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec3,	// (0x0003e2be) cell_ai5_widget_list_row_pane_t

0x3ea0,	// (0x0003229b) main_fep_vtchi_ss_pane

0xed75,	// (0x0003d170) popup_fep_char_pre_window

0xed7d,	// (0x0003d178) popup_fep_ituss_window

0xed88,	// (0x0003d183) popup_fep_vkbss_window

0xed91,	// (0x0003d18c) grid_vkbss_keypad_pane_ParamLimits

0xed91,	// (0x0003d18c) grid_vkbss_keypad_pane

0xeda1,	// (0x0003d19c) ituss_keypad_pane

0xeda9,	// (0x0003d1a4) aid_vkbss_key_offset_ParamLimits

0xeda9,	// (0x0003d1a4) aid_vkbss_key_offset

0xedb8,	// (0x0003d1b3) cell_vkbss_key_pane_ParamLimits

0xedb8,	// (0x0003d1b3) cell_vkbss_key_pane

0xedce,	// (0x0003d1c9) bg_cell_vkbss_key_g1_ParamLimits

0xedce,	// (0x0003d1c9) bg_cell_vkbss_key_g1

0xedda,	// (0x0003d1d5) cell_vkbss_key_3p_pane_ParamLimits

0xedda,	// (0x0003d1d5) cell_vkbss_key_3p_pane

0xedf4,	// (0x0003d1ef) cell_vkbss_key_g1_ParamLimits

0xedf4,	// (0x0003d1ef) cell_vkbss_key_g1

0xee0e,	// (0x0003d209) cell_vkbss_key_t1_ParamLimits

0xee0e,	// (0x0003d209) cell_vkbss_key_t1

0xee39,	// (0x0003d234) cell_ituss_key_pane_ParamLimits

0xee39,	// (0x0003d234) cell_ituss_key_pane

0xee48,	// (0x0003d243) bg_cell_ituss_key_g1_ParamLimits

0xee48,	// (0x0003d243) bg_cell_ituss_key_g1

0xee54,	// (0x0003d24f) cell_ituss_key_pane_g1_ParamLimits

0xee54,	// (0x0003d24f) cell_ituss_key_pane_g1

0xee60,	// (0x0003d25b) cell_ituss_key_pane_g2_ParamLimits

0xee60,	// (0x0003d25b) cell_ituss_key_pane_g2

0x0001,

0xfec8,	// (0x0003e2c3) cell_ituss_key_pane_g_ParamLimits

0xfec8,	// (0x0003e2c3) cell_ituss_key_pane_g

0xee73,	// (0x0003d26e) cell_ituss_key_t1_ParamLimits

0xee73,	// (0x0003d26e) cell_ituss_key_t1

0xee91,	// (0x0003d28c) cell_ituss_key_t2_ParamLimits

0xee91,	// (0x0003d28c) cell_ituss_key_t2

0xeeb0,	// (0x0003d2ab) cell_ituss_key_t3_ParamLimits

0xeeb0,	// (0x0003d2ab) cell_ituss_key_t3

0xeecf,	// (0x0003d2ca) cell_ituss_key_t4_ParamLimits

0xeecf,	// (0x0003d2ca) cell_ituss_key_t4

0x0003,

0xfecd,	// (0x0003e2c8) cell_ituss_key_t_ParamLimits

0xfecd,	// (0x0003e2c8) cell_ituss_key_t

0xeeee,	// (0x0003d2e9) cell_vkbss_key_3p_pane_g1

0xeef6,	// (0x0003d2f1) cell_vkbss_key_3p_pane_g2

0xeefe,	// (0x0003d2f9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed6,	// (0x0003e2d1) cell_vkbss_key_3p_pane_g

0x3ea0,	// (0x0003229b) bg_popup_fep_char_preview_window_cp02

0xef06,	// (0x0003d301) popup_fep_char_pre_window_t1

0xef15,	// (0x0003d310) main_ai5_sk_pane

0xec45,	// (0x0003d040) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf261,	// (0x0003d65c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf276,	// (0x0003d671) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf285,	// (0x0003d680) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x0391,	// (0x0002e78c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf299,	// (0x0003d694) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4b62,	// (0x00032f5d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0003d984) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large

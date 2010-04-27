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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0005b30e };

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
0x9bf3,	// (0x00064f01) Screen

0x9bff,	// (0x00064f0d) application_window_ParamLimits

0x9bff,	// (0x00064f0d) application_window

0x5cdb,	// (0x00060fe9) screen_g1

0x9c37,	// (0x00064f45) area_bottom_pane_ParamLimits

0x9c37,	// (0x00064f45) area_bottom_pane

0xe67f,	// (0x0006998d) area_top_pane_ParamLimits

0xe67f,	// (0x0006998d) area_top_pane

0xe71d,	// (0x00069a2b) main_pane_ParamLimits

0xe71d,	// (0x00069a2b) main_pane

0x5ce5,	// (0x00060ff3) misc_graphics

0xb6d1,	// (0x000669df) battery_pane_ParamLimits

0xb6d1,	// (0x000669df) battery_pane

0x2b3f,	// (0x0005de4d) bg_status_flat_pane_g8

0x2b47,	// (0x0005de55) bg_status_flat_pane_g9

0x1f49,	// (0x0005d257) context_pane_ParamLimits

0x1f49,	// (0x0005d257) context_pane

0xb848,	// (0x00066b56) navi_pane_ParamLimits

0xb848,	// (0x00066b56) navi_pane

0xb8d2,	// (0x00066be0) signal_pane_ParamLimits

0xb8d2,	// (0x00066be0) signal_pane

0x0008,

0xf879,	// (0x0006ab87) bg_status_flat_pane_g

0xb962,	// (0x00066c70) status_pane_g1_ParamLimits

0xb962,	// (0x00066c70) status_pane_g1

0xb978,	// (0x00066c86) status_pane_g2_ParamLimits

0xb978,	// (0x00066c86) status_pane_g2

0x218a,	// (0x0005d498) status_pane_g3_ParamLimits

0x218a,	// (0x0005d498) status_pane_g3

0x0004,

0xf7a5,	// (0x0006aab3) status_pane_g_ParamLimits

0xf7a5,	// (0x0006aab3) status_pane_g

0xb984,	// (0x00066c92) title_pane_ParamLimits

0xb984,	// (0x00066c92) title_pane

0xb9e7,	// (0x00066cf5) uni_indicator_pane_ParamLimits

0xb9e7,	// (0x00066cf5) uni_indicator_pane

0x0100,	// (0x0005b40e) bg_list_pane_ParamLimits

0x0100,	// (0x0005b40e) bg_list_pane

0xaef1,	// (0x000661ff) find_pane

0xaef9,	// (0x00066207) listscroll_app_pane_ParamLimits

0xaef9,	// (0x00066207) listscroll_app_pane

0x0134,	// (0x0005b442) listscroll_form_pane

0xaf09,	// (0x00066217) listscroll_gen_pane_ParamLimits

0xaf09,	// (0x00066217) listscroll_gen_pane

0x0150,	// (0x0005b45e) listscroll_set_pane

0x36de,	// (0x0005e9ec) main_idle_act_pane

0xe9a8,	// (0x00069cb6) main_idle_trad_pane

0xe9a8,	// (0x00069cb6) main_list_empty_pane

0x016a,	// (0x0005b478) main_midp_pane

0x0176,	// (0x0005b484) main_pane_g1_ParamLimits

0x0176,	// (0x0005b484) main_pane_g1

0xaf2b,	// (0x00066239) popup_ai_message_window_ParamLimits

0xaf2b,	// (0x00066239) popup_ai_message_window

0xafcb,	// (0x000662d9) popup_fep_china_uni_window_ParamLimits

0xafcb,	// (0x000662d9) popup_fep_china_uni_window

0x1902,	// (0x0005cc10) popup_fep_japan_candidate_window_ParamLimits

0x1902,	// (0x0005cc10) popup_fep_japan_candidate_window

0x192c,	// (0x0005cc3a) popup_fep_japan_predictive_window_ParamLimits

0x192c,	// (0x0005cc3a) popup_fep_japan_predictive_window

0xb02b,	// (0x00066339) popup_find_window

0xb048,	// (0x00066356) popup_grid_graphic_window_ParamLimits

0xb048,	// (0x00066356) popup_grid_graphic_window

0x199d,	// (0x0005ccab) popup_large_graphic_colour_window

0xb0ec,	// (0x000663fa) popup_menu_window_ParamLimits

0xb0ec,	// (0x000663fa) popup_menu_window

0xb2dc,	// (0x000665ea) popup_note_image_window

0xb29c,	// (0x000665aa) popup_note_wait_window_ParamLimits

0xb29c,	// (0x000665aa) popup_note_wait_window

0xb2f4,	// (0x00066602) popup_note_window_ParamLimits

0xb2f4,	// (0x00066602) popup_note_window

0xb3a2,	// (0x000666b0) popup_query_code_window_ParamLimits

0xb3a2,	// (0x000666b0) popup_query_code_window

0x1c09,	// (0x0005cf17) popup_query_data_code_window_ParamLimits

0x1c09,	// (0x0005cf17) popup_query_data_code_window

0xb3e2,	// (0x000666f0) popup_query_data_window_ParamLimits

0xb3e2,	// (0x000666f0) popup_query_data_window

0xb476,	// (0x00066784) popup_query_sat_info_window_ParamLimits

0xb476,	// (0x00066784) popup_query_sat_info_window

0xb521,	// (0x0006682f) popup_snote_single_graphic_window_ParamLimits

0xb521,	// (0x0006682f) popup_snote_single_graphic_window

0xb521,	// (0x0006682f) popup_snote_single_text_window_ParamLimits

0xb521,	// (0x0006682f) popup_snote_single_text_window

0x1ca4,	// (0x0005cfb2) popup_sub_window_general

0x1dea,	// (0x0005d0f8) popup_window_general_ParamLimits

0x1dea,	// (0x0005d0f8) popup_window_general

0x1e03,	// (0x0005d111) power_save_pane

0xad5f,	// (0x0006606d) control_pane_g1_ParamLimits

0xad5f,	// (0x0006606d) control_pane_g1

0xad88,	// (0x00066096) control_pane_g2_ParamLimits

0xad88,	// (0x00066096) control_pane_g2

0xeafd,	// (0x00069e0b) control_pane_g3_ParamLimits

0xeafd,	// (0x00069e0b) control_pane_g3

0x0007,

0xf78d,	// (0x0006aa9b) control_pane_g_ParamLimits

0xf78d,	// (0x0006aa9b) control_pane_g

0xadea,	// (0x000660f8) control_pane_t1_ParamLimits

0xadea,	// (0x000660f8) control_pane_t1

0xae48,	// (0x00066156) control_pane_t2_ParamLimits

0xae48,	// (0x00066156) control_pane_t2

0x0002,

0xf79e,	// (0x0006aaac) control_pane_t_ParamLimits

0xf79e,	// (0x0006aaac) control_pane_t

0xacb8,	// (0x00065fc6) navi_navi_volume_pane_cp1

0xacc0,	// (0x00065fce) status_small_icon_pane

0xeac9,	// (0x00069dd7) status_small_pane_g1_ParamLimits

0xeac9,	// (0x00069dd7) status_small_pane_g1

0xacc8,	// (0x00065fd6) status_small_pane_g2_ParamLimits

0xacc8,	// (0x00065fd6) status_small_pane_g2

0xacd4,	// (0x00065fe2) status_small_pane_g3_ParamLimits

0xacd4,	// (0x00065fe2) status_small_pane_g3

0xace0,	// (0x00065fee) status_small_pane_g4_ParamLimits

0xace0,	// (0x00065fee) status_small_pane_g4

0xacec,	// (0x00065ffa) status_small_pane_g5_ParamLimits

0xacec,	// (0x00065ffa) status_small_pane_g5

0xacfa,	// (0x00066008) status_small_pane_g6_ParamLimits

0xacfa,	// (0x00066008) status_small_pane_g6

0x0007,

0xf77c,	// (0x0006aa8a) status_small_pane_g_ParamLimits

0xf77c,	// (0x0006aa8a) status_small_pane_g

0xad29,	// (0x00066037) status_small_pane_t1

0xad4b,	// (0x00066059) status_small_wait_pane_ParamLimits

0xad4b,	// (0x00066059) status_small_wait_pane

0xa9f2,	// (0x00065d00) aid_levels_signal_ParamLimits

0xa9f2,	// (0x00065d00) aid_levels_signal

0xaa0a,	// (0x00065d18) signal_pane_g1_ParamLimits

0xaa0a,	// (0x00065d18) signal_pane_g1

0xaa25,	// (0x00065d33) signal_pane_g2_ParamLimits

0xaa25,	// (0x00065d33) signal_pane_g2

0x0003,

0xf70d,	// (0x0006aa1b) signal_pane_g_ParamLimits

0xf70d,	// (0x0006aa1b) signal_pane_g

0x8ed5,	// (0x000641e3) context_pane_g1

0x9e23,	// (0x00065131) title_pane_g1

0x9e4e,	// (0x0006515c) title_pane_t1

0x5d07,	// (0x00061015) title_pane_t2

0x5d2d,	// (0x0006103b) title_pane_t3

0x0002,

0xf557,	// (0x0006a865) title_pane_t

0xba0f,	// (0x00066d1d) aid_levels_battery_ParamLimits

0xba0f,	// (0x00066d1d) aid_levels_battery

0xba2b,	// (0x00066d39) battery_pane_g1_ParamLimits

0xba2b,	// (0x00066d39) battery_pane_g1

0xba48,	// (0x00066d56) battery_pane_g2_ParamLimits

0xba48,	// (0x00066d56) battery_pane_g2

0x0001,

0xf7b0,	// (0x0006aabe) battery_pane_g_ParamLimits

0xf7b0,	// (0x0006aabe) battery_pane_g

0xc7fc,	// (0x00067b0a) uni_indicator_pane_g1

0xc812,	// (0x00067b20) uni_indicator_pane_g2

0xc828,	// (0x00067b36) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0006ac2f) uni_indicator_pane_g

0x9183,	// (0x00064491) navi_icon_pane_ParamLimits

0x9183,	// (0x00064491) navi_icon_pane

0x9107,	// (0x00064415) navi_midp_pane

0x919f,	// (0x000644ad) navi_navi_pane

0x91a9,	// (0x000644b7) navi_text_pane_ParamLimits

0x91a9,	// (0x000644b7) navi_text_pane

0x5cdb,	// (0x00060fe9) status_small_wait_pane_g1

0x6028,	// (0x00061336) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0006ac2a) status_small_wait_pane_g

0xc763,	// (0x00067a71) navi_navi_icon_text_pane

0xc76b,	// (0x00067a79) navi_navi_pane_g1_ParamLimits

0xc76b,	// (0x00067a79) navi_navi_pane_g1

0xc77d,	// (0x00067a8b) navi_navi_pane_g2_ParamLimits

0xc77d,	// (0x00067a8b) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0006abf8) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0006abf8) navi_navi_pane_g

0x31c8,	// (0x0005e4d6) navi_navi_tabs_pane

0xc78f,	// (0x00067a9d) navi_navi_text_pane

0xc763,	// (0x00067a71) navi_navi_volume_pane

0xc751,	// (0x00067a5f) navi_text_pane_t1

0xc745,	// (0x00067a53) navi_icon_pane_g1

0x30bf,	// (0x0005e3cd) navi_navi_text_pane_t1

0xbca2,	// (0x00066fb0) navi_navi_volume_pane_g1

0xbcaa,	// (0x00066fb8) volume_small_pane

0xc68d,	// (0x0006799b) navi_navi_icon_text_pane_g1

0xc695,	// (0x000679a3) navi_navi_icon_text_pane_t1

0x919f,	// (0x000644ad) navi_tabs_2_long_pane

0x919f,	// (0x000644ad) navi_tabs_2_pane

0x919f,	// (0x000644ad) navi_tabs_3_long_pane

0x919f,	// (0x000644ad) navi_tabs_3_pane

0x919f,	// (0x000644ad) navi_tabs_4_pane

0xbc82,	// (0x00066f90) tabs_2_active_pane_ParamLimits

0xbc82,	// (0x00066f90) tabs_2_active_pane

0xbc92,	// (0x00066fa0) tabs_2_passive_pane_ParamLimits

0xbc92,	// (0x00066fa0) tabs_2_passive_pane

0xbc50,	// (0x00066f5e) tabs_3_active_pane_ParamLimits

0xbc50,	// (0x00066f5e) tabs_3_active_pane

0xbc60,	// (0x00066f6e) tabs_3_passive_pane_ParamLimits

0xbc60,	// (0x00066f6e) tabs_3_passive_pane

0xbc71,	// (0x00066f7f) tabs_3_passive_pane_cp_ParamLimits

0xbc71,	// (0x00066f7f) tabs_3_passive_pane_cp

0xbc0c,	// (0x00066f1a) tabs_4_active_pane_ParamLimits

0xbc0c,	// (0x00066f1a) tabs_4_active_pane

0xbc1d,	// (0x00066f2b) tabs_4_passive_pane_ParamLimits

0xbc1d,	// (0x00066f2b) tabs_4_passive_pane

0xbc2e,	// (0x00066f3c) tabs_4_passive_pane_cp_ParamLimits

0xbc2e,	// (0x00066f3c) tabs_4_passive_pane_cp

0xbc3f,	// (0x00066f4d) tabs_4_passive_pane_cp2_ParamLimits

0xbc3f,	// (0x00066f4d) tabs_4_passive_pane_cp2

0xbbe8,	// (0x00066ef6) tabs_2_long_active_pane_ParamLimits

0xbbe8,	// (0x00066ef6) tabs_2_long_active_pane

0xbbfa,	// (0x00066f08) tabs_2_long_passive_pane_ParamLimits

0xbbfa,	// (0x00066f08) tabs_2_long_passive_pane

0xbb9d,	// (0x00066eab) tabs_3_long_active_pane_ParamLimits

0xbb9d,	// (0x00066eab) tabs_3_long_active_pane

0xbbb6,	// (0x00066ec4) tabs_3_long_passive_pane_ParamLimits

0xbbb6,	// (0x00066ec4) tabs_3_long_passive_pane

0xbbcf,	// (0x00066edd) tabs_3_long_passive_pane_cp_ParamLimits

0xbbcf,	// (0x00066edd) tabs_3_long_passive_pane_cp

0x0424,	// (0x0005b732) volume_small_pane_g1

0xbb4c,	// (0x00066e5a) volume_small_pane_g2

0xbb55,	// (0x00066e63) volume_small_pane_g3

0xbb5e,	// (0x00066e6c) volume_small_pane_g4

0xbb67,	// (0x00066e75) volume_small_pane_g5

0xbb70,	// (0x00066e7e) volume_small_pane_g6

0xbb79,	// (0x00066e87) volume_small_pane_g7

0xbb82,	// (0x00066e90) volume_small_pane_g8

0xbb8b,	// (0x00066e99) volume_small_pane_g9

0xbb94,	// (0x00066ea2) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0006abc4) volume_small_pane_g

0x5e72,	// (0x00061180) bg_active_tab_pane_cp2_ParamLimits

0x5e72,	// (0x00061180) bg_active_tab_pane_cp2

0x9eda,	// (0x000651e8) tabs_3_active_pane_g1

0x9ee2,	// (0x000651f0) tabs_3_active_pane_t1

0x5e72,	// (0x00061180) bg_passive_tab_pane_cp2_ParamLimits

0x5e72,	// (0x00061180) bg_passive_tab_pane_cp2

0x9eda,	// (0x000651e8) tabs_3_passive_pane_g1

0x9ee2,	// (0x000651f0) tabs_3_passive_pane_t1

0x5e72,	// (0x00061180) bg_active_tab_pane_cp3_ParamLimits

0x5e72,	// (0x00061180) bg_active_tab_pane_cp3

0x9ef4,	// (0x00065202) tabs_4_active_pane_g1

0x9efc,	// (0x0006520a) tabs_4_active_pane_t1

0x5e72,	// (0x00061180) bg_passive_tab_pane_cp3_ParamLimits

0x5e72,	// (0x00061180) bg_passive_tab_pane_cp3

0x9ef4,	// (0x00065202) tabs_4_1_passive_pane_g1

0x9efc,	// (0x0006520a) tabs_4_1_passive_pane_t1

0x016a,	// (0x0005b478) list_highlight_pane_cp2

0xc8bd,	// (0x00067bcb) list_set_pane_ParamLimits

0xc8bd,	// (0x00067bcb) list_set_pane

0xc985,	// (0x00067c93) main_pane_set_t1_ParamLimits

0xc985,	// (0x00067c93) main_pane_set_t1

0xc9a5,	// (0x00067cb3) main_pane_set_t2_ParamLimits

0xc9a5,	// (0x00067cb3) main_pane_set_t2

0xc9b9,	// (0x00067cc7) main_pane_set_t3_ParamLimits

0xc9b9,	// (0x00067cc7) main_pane_set_t3

0xc9cd,	// (0x00067cdb) main_pane_set_t4_ParamLimits

0xc9cd,	// (0x00067cdb) main_pane_set_t4

0x0003,

0xf986,	// (0x0006ac94) main_pane_set_t_ParamLimits

0xf986,	// (0x0006ac94) main_pane_set_t

0xc9e1,	// (0x00067cef) setting_code_pane

0x3832,	// (0x0005eb40) setting_slider_graphic_pane

0x3832,	// (0x0005eb40) setting_slider_pane

0x3832,	// (0x0005eb40) setting_text_pane

0x3832,	// (0x0005eb40) setting_volume_pane

0xe82c,	// (0x00069b3a) volume_set_pane

0x5d3f,	// (0x0006104d) bg_set_opt_pane_cp

0xe836,	// (0x00069b44) setting_slider_pane_t1

0xe84f,	// (0x00069b5d) setting_slider_pane_t2

0xe869,	// (0x00069b77) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0006a86c) setting_slider_pane_t

0xe881,	// (0x00069b8f) slider_set_pane

0x5ce5,	// (0x00060ff3) bg_set_opt_pane_cp2

0x5d4d,	// (0x0006105b) setting_slider_graphic_pane_g1

0xe897,	// (0x00069ba5) setting_slider_graphic_pane_t1

0xe8a7,	// (0x00069bb5) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0006a873) setting_slider_graphic_pane_t

0xe8b7,	// (0x00069bc5) slider_set_pane_cp

0x5ce5,	// (0x00060ff3) input_focus_pane_cp1

0x36c5,	// (0x0005e9d3) list_set_text_pane

0x5cdb,	// (0x00060fe9) setting_text_pane_g1

0x5ce5,	// (0x00060ff3) input_focus_pane_cp2

0x5cdb,	// (0x00060fe9) setting_code_pane_g1

0x5d56,	// (0x00061064) setting_code_pane_t1

0xc476,	// (0x00067784) set_text_pane_t1_ParamLimits

0xc476,	// (0x00067784) set_text_pane_t1

0x89f7,	// (0x00063d05) set_opt_bg_pane_g1

0x89ff,	// (0x00063d0d) set_opt_bg_pane_g2

0x369d,	// (0x0005e9ab) set_opt_bg_pane_g3

0x8a0f,	// (0x00063d1d) set_opt_bg_pane_g4

0x8a17,	// (0x00063d25) set_opt_bg_pane_g5

0x8a1f,	// (0x00063d2d) set_opt_bg_pane_g6

0x36a7,	// (0x0005e9b5) set_opt_bg_pane_g7

0x36b1,	// (0x0005e9bf) set_opt_bg_pane_g8

0x36bb,	// (0x0005e9c9) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0006ac81) set_opt_bg_pane_g

0x3690,	// (0x0005e99e) slider_set_pane_g1

0x0630,	// (0x0005b93e) slider_set_pane_g2

0x0006,

0xf964,	// (0x0006ac72) slider_set_pane_g

0x0590,	// (0x0005b89e) volume_set_pane_g1

0x059a,	// (0x0005b8a8) volume_set_pane_g2

0x05a4,	// (0x0005b8b2) volume_set_pane_g3

0x05ae,	// (0x0005b8bc) volume_set_pane_g4

0x05b8,	// (0x0005b8c6) volume_set_pane_g5

0x05c2,	// (0x0005b8d0) volume_set_pane_g6

0x05cc,	// (0x0005b8da) volume_set_pane_g7

0x05d6,	// (0x0005b8e4) volume_set_pane_g8

0x05e0,	// (0x0005b8ee) volume_set_pane_g9

0x05ea,	// (0x0005b8f8) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0006ac4a) volume_set_pane_g

0x9f0e,	// (0x0006521c) indicator_pane_ParamLimits

0x9f0e,	// (0x0006521c) indicator_pane

0x9f3a,	// (0x00065248) main_idle_pane_g2_ParamLimits

0x9f3a,	// (0x00065248) main_idle_pane_g2

0x9f72,	// (0x00065280) main_pane_idle_g1_ParamLimits

0x9f72,	// (0x00065280) main_pane_idle_g1

0x5d64,	// (0x00061072) popup_clock_digital_analogue_window_ParamLimits

0x5d64,	// (0x00061072) popup_clock_digital_analogue_window

0x9fa0,	// (0x000652ae) soft_indicator_pane_ParamLimits

0x9fa0,	// (0x000652ae) soft_indicator_pane

0x9fbc,	// (0x000652ca) wallpaper_pane_ParamLimits

0x9fbc,	// (0x000652ca) wallpaper_pane

0x5cdb,	// (0x00060fe9) wallpaper_pane_g1

0x9fce,	// (0x000652dc) indicator_pane_g1_ParamLimits

0x9fce,	// (0x000652dc) indicator_pane_g1

0x3c9b,	// (0x0005efa9) navi_navi_icon_text_pane_srt_g1

0x5d92,	// (0x000610a0) soft_indicator_pane_t1

0x5dac,	// (0x000610ba) aid_ps_area_pane

0x9fe7,	// (0x000652f5) aid_ps_clock_pane

0x5dbd,	// (0x000610cb) aid_ps_indicator_pane

0x5dc9,	// (0x000610d7) indicator_ps_pane_ParamLimits

0x5dc9,	// (0x000610d7) indicator_ps_pane

0x5dd8,	// (0x000610e6) power_save_pane_g1_ParamLimits

0x5dd8,	// (0x000610e6) power_save_pane_g1

0x5de4,	// (0x000610f2) power_save_pane_g2_ParamLimits

0x5de4,	// (0x000610f2) power_save_pane_g2

0xe65f,	// (0x0006996d) aid_navinavi_width_pane

0x5dac,	// (0x000610ba) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0006a878) power_save_pane_g_ParamLimits

0xf56a,	// (0x0006a878) power_save_pane_g

0x5df2,	// (0x00061100) power_save_pane_t1_ParamLimits

0x5df2,	// (0x00061100) power_save_pane_t1

0x9fe7,	// (0x000652f5) aid_ps_clock_pane_ParamLimits

0x5dbd,	// (0x000610cb) aid_ps_indicator_pane_ParamLimits

0x5e04,	// (0x00061112) power_save_pane_t4_ParamLimits

0x5e04,	// (0x00061112) power_save_pane_t4

0x0001,

0xf56f,	// (0x0006a87d) power_save_pane_t_ParamLimits

0xf56f,	// (0x0006a87d) power_save_pane_t

0x5e2e,	// (0x0006113c) power_save_t3_ParamLimits

0x5e2e,	// (0x0006113c) power_save_t3

0x5e19,	// (0x00061127) power_save_t2_ParamLimits

0x5e19,	// (0x00061127) power_save_t2

0x5e43,	// (0x00061151) indicator_ps_pane_g1

0x9ff5,	// (0x00065303) ai_gene_pane_ParamLimits

0x9ff5,	// (0x00065303) ai_gene_pane

0xa00c,	// (0x0006531a) ai_links_pane_ParamLimits

0xa00c,	// (0x0006531a) ai_links_pane

0xa024,	// (0x00065332) indicator_pane_cp1_ParamLimits

0xa024,	// (0x00065332) indicator_pane_cp1

0xa033,	// (0x00065341) main_pane_idle_g1_cp_ParamLimits

0xa033,	// (0x00065341) main_pane_idle_g1_cp

0x5e4c,	// (0x0006115a) popup_ai_links_title_window

0xa04b,	// (0x00065359) soft_indicator_pane_cp1_ParamLimits

0xa04b,	// (0x00065359) soft_indicator_pane_cp1

0x3477,	// (0x0005e785) ai_links_pane_g1

0x3480,	// (0x0005e78e) grid_ai_links_pane

0xc7f3,	// (0x00067b01) ai_gene_pane_1

0x3465,	// (0x0005e773) ai_gene_pane_2

0x346e,	// (0x0005e77c) list_highlight_pane_cp4

0xc7cf,	// (0x00067add) cell_ai_link_pane_ParamLimits

0xc7cf,	// (0x00067add) cell_ai_link_pane

0x3434,	// (0x0005e742) cell_ai_link_pane_g1

0x6028,	// (0x00061336) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0006ac25) cell_ai_link_pane_g

0x5ce5,	// (0x00060ff3) grid_highlight_cp2

0x5ce5,	// (0x00060ff3) bg_popup_sub_pane_cp1

0x5e63,	// (0x00061171) popup_ai_links_title_window_t1

0x3380,	// (0x0005e68e) ai_gene_pane_1_g1_ParamLimits

0x3380,	// (0x0005e68e) ai_gene_pane_1_g1

0x338c,	// (0x0005e69a) ai_gene_pane_1_g2_ParamLimits

0x338c,	// (0x0005e69a) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0006ac1b) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0006ac1b) ai_gene_pane_1_g

0x3399,	// (0x0005e6a7) ai_gene_pane_1_t1_ParamLimits

0x3399,	// (0x0005e6a7) ai_gene_pane_1_t1

0x33cd,	// (0x0005e6db) grid_ai_soft_ind_pane

0x336b,	// (0x0005e679) ai_gene_pane_2_t1_ParamLimits

0x336b,	// (0x0005e679) ai_gene_pane_2_t1

0xa05f,	// (0x0006536d) main_pane_empty_t1_ParamLimits

0xa05f,	// (0x0006536d) main_pane_empty_t1

0xa077,	// (0x00065385) main_pane_empty_t2_ParamLimits

0xa077,	// (0x00065385) main_pane_empty_t2

0xa08c,	// (0x0006539a) main_pane_empty_t3_ParamLimits

0xa08c,	// (0x0006539a) main_pane_empty_t3

0xa09e,	// (0x000653ac) main_pane_empty_t4_ParamLimits

0xa09e,	// (0x000653ac) main_pane_empty_t4

0xa0b0,	// (0x000653be) main_pane_empty_t5_ParamLimits

0xa0b0,	// (0x000653be) main_pane_empty_t5

0x0004,

0xf574,	// (0x0006a882) main_pane_empty_t_ParamLimits

0xf574,	// (0x0006a882) main_pane_empty_t

0x8a48,	// (0x00063d56) bg_popup_window_pane_ParamLimits

0x8a48,	// (0x00063d56) bg_popup_window_pane

0x30cd,	// (0x0005e3db) find_popup_pane_cp2_ParamLimits

0x30cd,	// (0x0005e3db) find_popup_pane_cp2

0x30d9,	// (0x0005e3e7) heading_pane_ParamLimits

0x30d9,	// (0x0005e3e7) heading_pane

0x5ce5,	// (0x00060ff3) bg_popup_sub_pane

0xc6b2,	// (0x000679c0) bg_popup_window_pane_g1_ParamLimits

0xc6b2,	// (0x000679c0) bg_popup_window_pane_g1

0xc6c1,	// (0x000679cf) bg_popup_window_pane_g2_ParamLimits

0xc6c1,	// (0x000679cf) bg_popup_window_pane_g2

0xc6cd,	// (0x000679db) bg_popup_window_pane_g3_ParamLimits

0xc6cd,	// (0x000679db) bg_popup_window_pane_g3

0xc6d9,	// (0x000679e7) bg_popup_window_pane_g4_ParamLimits

0xc6d9,	// (0x000679e7) bg_popup_window_pane_g4

0xc6e8,	// (0x000679f6) bg_popup_window_pane_g5_ParamLimits

0xc6e8,	// (0x000679f6) bg_popup_window_pane_g5

0xc6f8,	// (0x00067a06) bg_popup_window_pane_g6_ParamLimits

0xc6f8,	// (0x00067a06) bg_popup_window_pane_g6

0xc704,	// (0x00067a12) bg_popup_window_pane_g7_ParamLimits

0xc704,	// (0x00067a12) bg_popup_window_pane_g7

0xc713,	// (0x00067a21) bg_popup_window_pane_g8_ParamLimits

0xc713,	// (0x00067a21) bg_popup_window_pane_g8

0xc722,	// (0x00067a30) bg_popup_window_pane_g9_ParamLimits

0xc722,	// (0x00067a30) bg_popup_window_pane_g9

0x30b3,	// (0x0005e3c1) bg_popup_window_pane_g10_ParamLimits

0x30b3,	// (0x0005e3c1) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0006abe3) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0006abe3) bg_popup_window_pane_g

0x2fdc,	// (0x0005e2ea) bg_popup_heading_pane_ParamLimits

0x2fdc,	// (0x0005e2ea) bg_popup_heading_pane

0x0744,	// (0x0005ba52) tabs_4_passive_pane_cp_srt_ParamLimits

0x0744,	// (0x0005ba52) tabs_4_passive_pane_cp_srt

0x0756,	// (0x0005ba64) tabs_4_passive_pane_srt_ParamLimits

0x2ff0,	// (0x0005e2fe) heading_pane_g2

0x0756,	// (0x0005ba64) tabs_4_passive_pane_srt

0x2389,	// (0x0005d697) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2389,	// (0x0005d697) bg_passive_tab_pane_cp3_srt

0x2ff8,	// (0x0005e306) heading_pane_t1_ParamLimits

0x2ff8,	// (0x0005e306) heading_pane_t1

0x300f,	// (0x0005e31d) heading_pane_t2_ParamLimits

0x300f,	// (0x0005e31d) heading_pane_t2

0x0001,

0xf8d0,	// (0x0006abde) heading_pane_t_ParamLimits

0xf8d0,	// (0x0006abde) heading_pane_t

0x2b07,	// (0x0005de15) bg_popup_heading_pane_g1

0x2bb6,	// (0x0005dec4) bg_popup_heading_pane_g2

0x2bc0,	// (0x0005dece) bg_popup_heading_pane_g3

0x2bca,	// (0x0005ded8) bg_popup_heading_pane_g4

0x2bd4,	// (0x0005dee2) bg_popup_heading_pane_g5

0x2bde,	// (0x0005deec) bg_popup_heading_pane_g6

0x2be6,	// (0x0005def4) bg_popup_heading_pane_g7

0x2bee,	// (0x0005defc) bg_popup_heading_pane_g8

0x2bf8,	// (0x0005df06) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0006ab9a) bg_popup_heading_pane_g

0x2315,	// (0x0005d623) bg_popup_sub_pane_g1

0x2325,	// (0x0005d633) bg_popup_sub_pane_g2

0x231d,	// (0x0005d62b) bg_popup_sub_pane_g3

0x2335,	// (0x0005d643) bg_popup_sub_pane_g4

0x232d,	// (0x0005d63b) bg_popup_sub_pane_g5

0x233d,	// (0x0005d64b) bg_popup_sub_pane_g6

0x2345,	// (0x0005d653) bg_popup_sub_pane_g7

0x2355,	// (0x0005d663) bg_popup_sub_pane_g8

0x234d,	// (0x0005d65b) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0006ab74) bg_popup_sub_pane_g

0x5e72,	// (0x00061180) bg_popup_window_pane_cp5_ParamLimits

0x5e72,	// (0x00061180) bg_popup_window_pane_cp5

0x5e8e,	// (0x0006119c) popup_note_window_g1_ParamLimits

0x5e8e,	// (0x0006119c) popup_note_window_g1

0x5e9a,	// (0x000611a8) popup_note_window_t1_ParamLimits

0x5e9a,	// (0x000611a8) popup_note_window_t1

0x5eb0,	// (0x000611be) popup_note_window_t2_ParamLimits

0x5eb0,	// (0x000611be) popup_note_window_t2

0x5ec6,	// (0x000611d4) popup_note_window_t3_ParamLimits

0x5ec6,	// (0x000611d4) popup_note_window_t3

0x5edc,	// (0x000611ea) popup_note_window_t4_ParamLimits

0x5edc,	// (0x000611ea) popup_note_window_t4

0x5f04,	// (0x00061212) popup_note_window_t5_ParamLimits

0x5f04,	// (0x00061212) popup_note_window_t5

0x0004,

0xf57f,	// (0x0006a88d) popup_note_window_t_ParamLimits

0xf57f,	// (0x0006a88d) popup_note_window_t

0x5f28,	// (0x00061236) bg_popup_window_pane_cp6_ParamLimits

0x5f28,	// (0x00061236) bg_popup_window_pane_cp6

0x2a83,	// (0x0005dd91) popup_note_image_window_g1_ParamLimits

0x2a83,	// (0x0005dd91) popup_note_image_window_g1

0x2a8f,	// (0x0005dd9d) popup_note_image_window_g2_ParamLimits

0x2a8f,	// (0x0005dd9d) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0006ab68) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0006ab68) popup_note_image_window_g

0x2aa8,	// (0x0005ddb6) popup_note_image_window_t1_ParamLimits

0x2aa8,	// (0x0005ddb6) popup_note_image_window_t1

0x2ac1,	// (0x0005ddcf) popup_note_image_window_t2_ParamLimits

0x2ac1,	// (0x0005ddcf) popup_note_image_window_t2

0x2ada,	// (0x0005dde8) popup_note_image_window_t3_ParamLimits

0x2ada,	// (0x0005dde8) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0006ab6d) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0006ab6d) popup_note_image_window_t

0x2943,	// (0x0005dc51) bg_popup_window_pane_cp7_ParamLimits

0x2943,	// (0x0005dc51) bg_popup_window_pane_cp7

0x2973,	// (0x0005dc81) popup_note_wait_window_g1_ParamLimits

0x2973,	// (0x0005dc81) popup_note_wait_window_g1

0x297f,	// (0x0005dc8d) popup_note_wait_window_g2_ParamLimits

0x297f,	// (0x0005dc8d) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0006ab56) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0006ab56) popup_note_wait_window_g

0x2997,	// (0x0005dca5) popup_note_wait_window_t1_ParamLimits

0x2997,	// (0x0005dca5) popup_note_wait_window_t1

0x29be,	// (0x0005dccc) popup_note_wait_window_t2_ParamLimits

0x29be,	// (0x0005dccc) popup_note_wait_window_t2

0x29dc,	// (0x0005dcea) popup_note_wait_window_t3_ParamLimits

0x29dc,	// (0x0005dcea) popup_note_wait_window_t3

0x29ef,	// (0x0005dcfd) popup_note_wait_window_t4_ParamLimits

0x29ef,	// (0x0005dcfd) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0006ab5d) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0006ab5d) popup_note_wait_window_t

0x2a14,	// (0x0005dd22) wait_bar_pane_ParamLimits

0x2a14,	// (0x0005dd22) wait_bar_pane

0x5ce5,	// (0x00060ff3) wait_anim_pane

0x5ce5,	// (0x00060ff3) wait_border_pane

0x5cdb,	// (0x00060fe9) wait_anim_pane_g1

0x5cdb,	// (0x00060fe9) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0006aa16) wait_anim_pane_g

0x28e7,	// (0x0005dbf5) wait_border_pane_g1

0x28f2,	// (0x0005dc00) wait_border_pane_g2

0x28fb,	// (0x0005dc09) wait_border_pane_g3

0x0002,

0xf841,	// (0x0006ab4f) wait_border_pane_g

0x2751,	// (0x0005da5f) bg_popup_window_pane_cp16_ParamLimits

0x2751,	// (0x0005da5f) bg_popup_window_pane_cp16

0x2851,	// (0x0005db5f) indicator_popup_pane_cp4_ParamLimits

0x2851,	// (0x0005db5f) indicator_popup_pane_cp4

0x2865,	// (0x0005db73) popup_query_data_window_t1_ParamLimits

0x2865,	// (0x0005db73) popup_query_data_window_t1

0x2877,	// (0x0005db85) popup_query_data_window_t2_ParamLimits

0x2877,	// (0x0005db85) popup_query_data_window_t2

0x2890,	// (0x0005db9e) popup_query_data_window_t3_ParamLimits

0x2890,	// (0x0005db9e) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0006ab48) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0006ab48) popup_query_data_window_t

0x28aa,	// (0x0005dbb8) query_popup_data_pane_ParamLimits

0x28aa,	// (0x0005dbb8) query_popup_data_pane

0x28be,	// (0x0005dbcc) query_popup_data_pane_cp1_ParamLimits

0x28be,	// (0x0005dbcc) query_popup_data_pane_cp1

0x2751,	// (0x0005da5f) bg_popup_window_pane_cp10_ParamLimits

0x2751,	// (0x0005da5f) bg_popup_window_pane_cp10

0x2783,	// (0x0005da91) indicator_popup_pane_ParamLimits

0x2783,	// (0x0005da91) indicator_popup_pane

0x27a5,	// (0x0005dab3) popup_query_code_window_t1_ParamLimits

0x27a5,	// (0x0005dab3) popup_query_code_window_t1

0x27bf,	// (0x0005dacd) popup_query_code_window_t2_ParamLimits

0x27bf,	// (0x0005dacd) popup_query_code_window_t2

0x2808,	// (0x0005db16) popup_query_code_window_t3_ParamLimits

0x2808,	// (0x0005db16) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0006ab41) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0006ab41) popup_query_code_window_t

0x2837,	// (0x0005db45) query_popup_pane_ParamLimits

0x2837,	// (0x0005db45) query_popup_pane

0x5f28,	// (0x00061236) bg_popup_window_pane_cp15_ParamLimits

0x5f28,	// (0x00061236) bg_popup_window_pane_cp15

0x5f48,	// (0x00061256) indicator_popup_pane_cp1_ParamLimits

0x5f48,	// (0x00061256) indicator_popup_pane_cp1

0x5f5b,	// (0x00061269) indicator_popup_pane_cp2_ParamLimits

0x5f5b,	// (0x00061269) indicator_popup_pane_cp2

0x5f76,	// (0x00061284) popup_query_data_code_window_g1_ParamLimits

0x5f76,	// (0x00061284) popup_query_data_code_window_g1

0x5f89,	// (0x00061297) popup_query_data_code_window_t1_ParamLimits

0x5f89,	// (0x00061297) popup_query_data_code_window_t1

0x5f9b,	// (0x000612a9) popup_query_data_code_window_t2_ParamLimits

0x5f9b,	// (0x000612a9) popup_query_data_code_window_t2

0x5fad,	// (0x000612bb) popup_query_data_code_window_t3_ParamLimits

0x5fad,	// (0x000612bb) popup_query_data_code_window_t3

0x5fc3,	// (0x000612d1) popup_query_data_code_window_t4_ParamLimits

0x5fc3,	// (0x000612d1) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0006a898) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0006a898) popup_query_data_code_window_t

0x02f9,	// (0x0005b607) list_single_midp_graphic_pane_g3

0x5fdd,	// (0x000612eb) query_popup_data_pane_cp2_ParamLimits

0x5ff0,	// (0x000612fe) query_popup_pane_cp2_ParamLimits

0x5ff0,	// (0x000612fe) query_popup_pane_cp2

0x5ce5,	// (0x00060ff3) bg_popup_window_pane_cp11

0x2749,	// (0x0005da57) heading_pane_cp5

0x6086,	// (0x00061394) listscroll_popup_info_pane

0x5ce5,	// (0x00060ff3) input_focus_pane_cp3

0x600b,	// (0x00061319) query_popup_pane_t1

0x6019,	// (0x00061327) list_popup_info_pane_ParamLimits

0x6019,	// (0x00061327) list_popup_info_pane

0x6028,	// (0x00061336) listscroll_popup_info_pane_g1

0x6030,	// (0x0006133e) scroll_pane_cp7

0x603a,	// (0x00061348) popup_info_list_pane_t1_ParamLimits

0x603a,	// (0x00061348) popup_info_list_pane_t1

0x6054,	// (0x00061362) popup_info_list_pane_t2_ParamLimits

0x6054,	// (0x00061362) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0006a8a1) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0006a8a1) popup_info_list_pane_t

0x5ce5,	// (0x00060ff3) bg_popup_window_pane_cp12

0x3cb5,	// (0x0005efc3) find_popup_pane

0x5d3f,	// (0x0006104d) bg_popup_window_pane_cp3

0x606e,	// (0x0006137c) heading_pane_cp3

0x607a,	// (0x00061388) listscroll_popup_graphic_pane

0x5ce5,	// (0x00060ff3) bg_popup_window_pane_cp4

0xa112,	// (0x00065420) heading_pane_cp4

0x6086,	// (0x00061394) listscroll_popup_colour_pane

0xa11c,	// (0x0006542a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa11c,	// (0x0006542a) cell_large_graphic_colour_none_popup_pane

0xa130,	// (0x0006543e) grid_large_graphic_colour_popup_pane_ParamLimits

0xa130,	// (0x0006543e) grid_large_graphic_colour_popup_pane

0xa154,	// (0x00065462) listscroll_popup_colour_pane_g1_ParamLimits

0xa154,	// (0x00065462) listscroll_popup_colour_pane_g1

0xa16b,	// (0x00065479) listscroll_popup_colour_pane_g2_ParamLimits

0xa16b,	// (0x00065479) listscroll_popup_colour_pane_g2

0xa182,	// (0x00065490) listscroll_popup_colour_pane_g3_ParamLimits

0xa182,	// (0x00065490) listscroll_popup_colour_pane_g3

0xa192,	// (0x000654a0) listscroll_popup_colour_pane_g4_ParamLimits

0xa192,	// (0x000654a0) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0006a8a6) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0006a8a6) listscroll_popup_colour_pane_g

0x608e,	// (0x0006139c) scroll_pane_cp6_ParamLimits

0x608e,	// (0x0006139c) scroll_pane_cp6

0xa1a2,	// (0x000654b0) cell_large_graphic_colour_popup_pane_ParamLimits

0xa1a2,	// (0x000654b0) cell_large_graphic_colour_popup_pane

0x60a0,	// (0x000613ae) cell_large_graphic_colour_none_popup_pane_t1

0x5ce5,	// (0x00060ff3) grid_highlight_pane_cp5

0x60af,	// (0x000613bd) cell_large_graphic_colour_popup_pane_g1

0x60b7,	// (0x000613c5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0006a8af) cell_large_graphic_colour_popup_pane_g

0x60bf,	// (0x000613cd) cell_large_graphic_colour_popup_pane_g2_copy1

0x60c8,	// (0x000613d6) grid_highlight_pane_cp4

0x60d0,	// (0x000613de) bg_popup_window_pane_cp8_ParamLimits

0x60d0,	// (0x000613de) bg_popup_window_pane_cp8

0x60eb,	// (0x000613f9) popup_snote_single_text_window_g1_ParamLimits

0x60eb,	// (0x000613f9) popup_snote_single_text_window_g1

0x60fd,	// (0x0006140b) popup_snote_single_text_window_t1_ParamLimits

0x60fd,	// (0x0006140b) popup_snote_single_text_window_t1

0x6110,	// (0x0006141e) popup_snote_single_text_window_t2_ParamLimits

0x6110,	// (0x0006141e) popup_snote_single_text_window_t2

0x6123,	// (0x00061431) popup_snote_single_text_window_t3_ParamLimits

0x6123,	// (0x00061431) popup_snote_single_text_window_t3

0x615c,	// (0x0006146a) popup_snote_single_text_window_t4_ParamLimits

0x615c,	// (0x0006146a) popup_snote_single_text_window_t4

0x6190,	// (0x0006149e) popup_snote_single_text_window_t5_ParamLimits

0x6190,	// (0x0006149e) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0006a8b4) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0006a8b4) popup_snote_single_text_window_t

0x61bf,	// (0x000614cd) bg_popup_window_pane_cp9_ParamLimits

0x61bf,	// (0x000614cd) bg_popup_window_pane_cp9

0x60eb,	// (0x000613f9) popup_snote_single_graphic_window_g1_ParamLimits

0x60eb,	// (0x000613f9) popup_snote_single_graphic_window_g1

0x61cd,	// (0x000614db) popup_snote_single_graphic_window_g2_ParamLimits

0x61cd,	// (0x000614db) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0006a8bf) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0006a8bf) popup_snote_single_graphic_window_g

0x61d9,	// (0x000614e7) popup_snote_single_graphic_window_t1_ParamLimits

0x61d9,	// (0x000614e7) popup_snote_single_graphic_window_t1

0x61ec,	// (0x000614fa) popup_snote_single_graphic_window_t2_ParamLimits

0x61ec,	// (0x000614fa) popup_snote_single_graphic_window_t2

0x61ff,	// (0x0006150d) popup_snote_single_graphic_window_t3_ParamLimits

0x61ff,	// (0x0006150d) popup_snote_single_graphic_window_t3

0x6238,	// (0x00061546) popup_snote_single_graphic_window_t4_ParamLimits

0x6238,	// (0x00061546) popup_snote_single_graphic_window_t4

0x626c,	// (0x0006157a) popup_snote_single_graphic_window_t5_ParamLimits

0x626c,	// (0x0006157a) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0006a8c4) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0006a8c4) popup_snote_single_graphic_window_t

0x3bf3,	// (0x0005ef01) grid_graphic_popup_pane_ParamLimits

0x3bf3,	// (0x0005ef01) grid_graphic_popup_pane

0x3c21,	// (0x0005ef2f) listscroll_popup_graphic_pane_g1_ParamLimits

0x3c21,	// (0x0005ef2f) listscroll_popup_graphic_pane_g1

0xcafb,	// (0x00067e09) listscroll_popup_graphic_pane_g2_ParamLimits

0xcafb,	// (0x00067e09) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0006acbe) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0006acbe) listscroll_popup_graphic_pane_g

0x3c49,	// (0x0005ef57) scroll_pane_cp5

0xcaba,	// (0x00067dc8) cell_graphic_popup_pane_ParamLimits

0xcaba,	// (0x00067dc8) cell_graphic_popup_pane

0x3b7c,	// (0x0005ee8a) cell_graphic_popup_pane_g1

0x3b84,	// (0x0005ee92) cell_graphic_popup_pane_g2

0x60bf,	// (0x000613cd) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0006acb7) cell_graphic_popup_pane_g

0x3b8d,	// (0x0005ee9b) cell_graphic_popup_pane_t2

0x60c8,	// (0x000613d6) grid_highlight_pane_cp3

0x62ad,	// (0x000615bb) list_gen_pane_ParamLimits

0x62ad,	// (0x000615bb) list_gen_pane

0x62d5,	// (0x000615e3) scroll_pane

0xca71,	// (0x00067d7f) bg_list_pane_g1_ParamLimits

0xca71,	// (0x00067d7f) bg_list_pane_g1

0x3af1,	// (0x0005edff) bg_list_pane_g2_ParamLimits

0x3af1,	// (0x0005edff) bg_list_pane_g2

0x3b06,	// (0x0005ee14) bg_list_pane_g3_ParamLimits

0x3b06,	// (0x0005ee14) bg_list_pane_g3

0x3b1a,	// (0x0005ee28) bg_list_pane_g4_ParamLimits

0x3b1a,	// (0x0005ee28) bg_list_pane_g4

0xca8e,	// (0x00067d9c) bg_list_pane_g5_ParamLimits

0xca8e,	// (0x00067d9c) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0006acac) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0006acac) bg_list_pane_g

0xca1f,	// (0x00067d2d) list_double2_graphic_large_graphic_pane_ParamLimits

0xca1f,	// (0x00067d2d) list_double2_graphic_large_graphic_pane

0xca1f,	// (0x00067d2d) list_double2_graphic_pane_ParamLimits

0xca1f,	// (0x00067d2d) list_double2_graphic_pane

0xca1f,	// (0x00067d2d) list_double2_large_graphic_pane_ParamLimits

0xca1f,	// (0x00067d2d) list_double2_large_graphic_pane

0xca1f,	// (0x00067d2d) list_double2_pane_ParamLimits

0xca1f,	// (0x00067d2d) list_double2_pane

0xca1f,	// (0x00067d2d) list_double_graphic_heading_pane_ParamLimits

0xca1f,	// (0x00067d2d) list_double_graphic_heading_pane

0xca1f,	// (0x00067d2d) list_double_graphic_pane_ParamLimits

0xca1f,	// (0x00067d2d) list_double_graphic_pane

0xca1f,	// (0x00067d2d) list_double_heading_pane_ParamLimits

0xca1f,	// (0x00067d2d) list_double_heading_pane

0xca1f,	// (0x00067d2d) list_double_large_graphic_pane_ParamLimits

0xca1f,	// (0x00067d2d) list_double_large_graphic_pane

0xca1f,	// (0x00067d2d) list_double_number_pane_ParamLimits

0xca1f,	// (0x00067d2d) list_double_number_pane

0xca1f,	// (0x00067d2d) list_double_pane_ParamLimits

0xca1f,	// (0x00067d2d) list_double_pane

0xca1f,	// (0x00067d2d) list_double_time_pane_ParamLimits

0xca1f,	// (0x00067d2d) list_double_time_pane

0xca1f,	// (0x00067d2d) list_setting_number_pane_ParamLimits

0xca1f,	// (0x00067d2d) list_setting_number_pane

0xca1f,	// (0x00067d2d) list_setting_pane_ParamLimits

0xca1f,	// (0x00067d2d) list_setting_pane

0xca33,	// (0x00067d41) list_single_2graphic_pane_ParamLimits

0xca33,	// (0x00067d41) list_single_2graphic_pane

0xca33,	// (0x00067d41) list_single_graphic_heading_pane_ParamLimits

0xca33,	// (0x00067d41) list_single_graphic_heading_pane

0xca33,	// (0x00067d41) list_single_graphic_pane_ParamLimits

0xca33,	// (0x00067d41) list_single_graphic_pane

0xca33,	// (0x00067d41) list_single_heading_pane_ParamLimits

0xca33,	// (0x00067d41) list_single_heading_pane

0xca33,	// (0x00067d41) list_single_large_graphic_pane_ParamLimits

0xca33,	// (0x00067d41) list_single_large_graphic_pane

0xca33,	// (0x00067d41) list_single_number_heading_pane_ParamLimits

0xca33,	// (0x00067d41) list_single_number_heading_pane

0xca33,	// (0x00067d41) list_single_number_pane_ParamLimits

0xca33,	// (0x00067d41) list_single_number_pane

0xca33,	// (0x00067d41) list_single_pane_ParamLimits

0xca33,	// (0x00067d41) list_single_pane

0x5ce5,	// (0x00060ff3) list_highlight_pane_cp1

0xc48f,	// (0x0006779d) list_single_pane_g1_ParamLimits

0xc48f,	// (0x0006779d) list_single_pane_g1

0x02c8,	// (0x0005b5d6) list_single_pane_g2_ParamLimits

0x02c8,	// (0x0005b5d6) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0006a8e0) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0006a8e0) list_single_pane_g

0xec5a,	// (0x00069f68) list_single_pane_t1_ParamLimits

0xec5a,	// (0x00069f68) list_single_pane_t1

0xc48f,	// (0x0006779d) list_single_number_pane_g1_ParamLimits

0xc48f,	// (0x0006779d) list_single_number_pane_g1

0x02c8,	// (0x0005b5d6) list_single_number_pane_g2_ParamLimits

0x02c8,	// (0x0005b5d6) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0006a8e0) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0006a8e0) list_single_number_pane_g

0xeb9b,	// (0x00069ea9) list_single_number_pane_t1_ParamLimits

0xeb9b,	// (0x00069ea9) list_single_number_pane_t1

0xbcb3,	// (0x00066fc1) list_single_number_pane_t2_ParamLimits

0xbcb3,	// (0x00066fc1) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0006ac6d) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0006ac6d) list_single_number_pane_t

0xa1cd,	// (0x000654db) list_single_graphic_pane_g1_ParamLimits

0xa1cd,	// (0x000654db) list_single_graphic_pane_g1

0xc48f,	// (0x0006779d) list_single_graphic_pane_g2_ParamLimits

0xc48f,	// (0x0006779d) list_single_graphic_pane_g2

0x02c8,	// (0x0005b5d6) list_single_graphic_pane_g3_ParamLimits

0x02c8,	// (0x0005b5d6) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0006a8cf) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0006a8cf) list_single_graphic_pane_g

0xa1d9,	// (0x000654e7) list_single_graphic_pane_t1_ParamLimits

0xa1d9,	// (0x000654e7) list_single_graphic_pane_t1

0xa1ef,	// (0x000654fd) list_single_heading_pane_g1_ParamLimits

0xa1ef,	// (0x000654fd) list_single_heading_pane_g1

0x02c8,	// (0x0005b5d6) list_single_heading_pane_g2_ParamLimits

0x02c8,	// (0x0005b5d6) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0006a8d6) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0006a8d6) list_single_heading_pane_g

0xa202,	// (0x00065510) list_single_heading_pane_t1_ParamLimits

0xa202,	// (0x00065510) list_single_heading_pane_t1

0xa218,	// (0x00065526) list_single_heading_pane_t2_ParamLimits

0xa218,	// (0x00065526) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0006a8db) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0006a8db) list_single_heading_pane_t

0xc48f,	// (0x0006779d) list_single_number_heading_pane_g1_ParamLimits

0xc48f,	// (0x0006779d) list_single_number_heading_pane_g1

0x02c8,	// (0x0005b5d6) list_single_number_heading_pane_g2_ParamLimits

0x02c8,	// (0x0005b5d6) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0006a8e0) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0006a8e0) list_single_number_heading_pane_g

0xc49b,	// (0x000677a9) list_single_number_heading_pane_t1_ParamLimits

0xc49b,	// (0x000677a9) list_single_number_heading_pane_t1

0xa22a,	// (0x00065538) list_single_number_heading_pane_t2_ParamLimits

0xa22a,	// (0x00065538) list_single_number_heading_pane_t2

0xc4b1,	// (0x000677bf) list_single_number_heading_pane_t3_ParamLimits

0xc4b1,	// (0x000677bf) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0006a8e5) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0006a8e5) list_single_number_heading_pane_t

0xa23c,	// (0x0006554a) list_single_graphic_heading_pane_g1_ParamLimits

0xa23c,	// (0x0006554a) list_single_graphic_heading_pane_g1

0xa254,	// (0x00065562) list_single_graphic_heading_pane_g4_ParamLimits

0xa254,	// (0x00065562) list_single_graphic_heading_pane_g4

0x02c8,	// (0x0005b5d6) list_single_graphic_heading_pane_g5_ParamLimits

0x02c8,	// (0x0005b5d6) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0006a8ec) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0006a8ec) list_single_graphic_heading_pane_g

0xc49b,	// (0x000677a9) list_single_graphic_heading_pane_t1_ParamLimits

0xc49b,	// (0x000677a9) list_single_graphic_heading_pane_t1

0xa265,	// (0x00065573) list_single_graphic_heading_pane_t2_ParamLimits

0xa265,	// (0x00065573) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0006a8f3) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0006a8f3) list_single_graphic_heading_pane_t

0x397c,	// (0x0005ec8a) list_single_large_graphic_pane_g1_ParamLimits

0x397c,	// (0x0005ec8a) list_single_large_graphic_pane_g1

0xc48f,	// (0x0006779d) list_single_large_graphic_pane_g2_ParamLimits

0xc48f,	// (0x0006779d) list_single_large_graphic_pane_g2

0x02c8,	// (0x0005b5d6) list_single_large_graphic_pane_g3_ParamLimits

0x02c8,	// (0x0005b5d6) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0006a8f8) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0006a8f8) list_single_large_graphic_pane_g

0x28f2,	// (0x0005dc00) wait_border_pane_g2_copy1

0xa27d,	// (0x0006558b) list_single_large_graphic_pane_g4_cp2

0xc49b,	// (0x000677a9) list_single_large_graphic_pane_t1_ParamLimits

0xc49b,	// (0x000677a9) list_single_large_graphic_pane_t1

0x50e6,	// (0x000603f4) list_double_pane_g1_ParamLimits

0x50e6,	// (0x000603f4) list_double_pane_g1

0xa285,	// (0x00065593) list_double_pane_g2_ParamLimits

0xa285,	// (0x00065593) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0006a8ff) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0006a8ff) list_double_pane_g

0xa291,	// (0x0006559f) list_double_pane_t1_ParamLimits

0xa291,	// (0x0006559f) list_double_pane_t1

0xa2a7,	// (0x000655b5) list_double_pane_t2_ParamLimits

0xa2a7,	// (0x000655b5) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0006a904) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0006a904) list_double_pane_t

0xa2b9,	// (0x000655c7) list_double2_pane_g1_ParamLimits

0xa2b9,	// (0x000655c7) list_double2_pane_g1

0xa2ca,	// (0x000655d8) list_double2_pane_g2_ParamLimits

0xa2ca,	// (0x000655d8) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0006a909) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0006a909) list_double2_pane_g

0xa2d6,	// (0x000655e4) list_double2_pane_t1_ParamLimits

0xa2d6,	// (0x000655e4) list_double2_pane_t1

0xa2ec,	// (0x000655fa) list_double2_pane_t2_ParamLimits

0xa2ec,	// (0x000655fa) list_double2_pane_t2

0x0001,

0xf600,	// (0x0006a90e) list_double2_pane_t_ParamLimits

0xf600,	// (0x0006a90e) list_double2_pane_t

0x50e6,	// (0x000603f4) list_double_number_pane_g1_ParamLimits

0x50e6,	// (0x000603f4) list_double_number_pane_g1

0xa285,	// (0x00065593) list_double_number_pane_g2_ParamLimits

0xa285,	// (0x00065593) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0006a8ff) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0006a8ff) list_double_number_pane_g

0xa2fe,	// (0x0006560c) list_double_number_pane_t1_ParamLimits

0xa2fe,	// (0x0006560c) list_double_number_pane_t1

0xa310,	// (0x0006561e) list_double_number_pane_t2_ParamLimits

0xa310,	// (0x0006561e) list_double_number_pane_t2

0xa326,	// (0x00065634) list_double_number_pane_t3_ParamLimits

0xa326,	// (0x00065634) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0006a913) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0006a913) list_double_number_pane_t

0xa338,	// (0x00065646) list_double_graphic_pane_g1_ParamLimits

0xa338,	// (0x00065646) list_double_graphic_pane_g1

0xa344,	// (0x00065652) list_double_graphic_pane_g2_ParamLimits

0xa344,	// (0x00065652) list_double_graphic_pane_g2

0xa353,	// (0x00065661) list_double_graphic_pane_g3_ParamLimits

0xa353,	// (0x00065661) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0006a91a) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0006a91a) list_double_graphic_pane_g

0xa36b,	// (0x00065679) list_double_graphic_pane_t1_ParamLimits

0xa36b,	// (0x00065679) list_double_graphic_pane_t1

0xa381,	// (0x0006568f) list_double_graphic_pane_t2_ParamLimits

0xa381,	// (0x0006568f) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0006a923) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0006a923) list_double_graphic_pane_t

0xa393,	// (0x000656a1) list_double2_graphic_pane_g1_ParamLimits

0xa393,	// (0x000656a1) list_double2_graphic_pane_g1

0xa39f,	// (0x000656ad) list_double2_graphic_pane_g2_ParamLimits

0xa39f,	// (0x000656ad) list_double2_graphic_pane_g2

0xa3ab,	// (0x000656b9) list_double2_graphic_pane_g3_ParamLimits

0xa3ab,	// (0x000656b9) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0006a928) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0006a928) list_double2_graphic_pane_g

0xa3b7,	// (0x000656c5) list_double2_graphic_pane_t1_ParamLimits

0xa3b7,	// (0x000656c5) list_double2_graphic_pane_t1

0xa3cd,	// (0x000656db) list_double2_graphic_pane_t2_ParamLimits

0xa3cd,	// (0x000656db) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0006a92f) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0006a92f) list_double2_graphic_pane_t

0xa3df,	// (0x000656ed) list_double_large_graphic_pane_g1_ParamLimits

0xa3df,	// (0x000656ed) list_double_large_graphic_pane_g1

0xa40a,	// (0x00065718) list_double_large_graphic_pane_g2_ParamLimits

0xa40a,	// (0x00065718) list_double_large_graphic_pane_g2

0xa285,	// (0x00065593) list_double_large_graphic_pane_g3_ParamLimits

0xa285,	// (0x00065593) list_double_large_graphic_pane_g3

0xa420,	// (0x0006572e) list_double_large_graphic_pane_g4_ParamLimits

0xa420,	// (0x0006572e) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0006a934) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0006a934) list_double_large_graphic_pane_g

0xa433,	// (0x00065741) list_double_large_graphic_pane_t1_ParamLimits

0xa433,	// (0x00065741) list_double_large_graphic_pane_t1

0xa44c,	// (0x0006575a) list_double_large_graphic_pane_t2_ParamLimits

0xa44c,	// (0x0006575a) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0006a93f) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0006a93f) list_double_large_graphic_pane_t

0xa45e,	// (0x0006576c) list_double2_large_graphic_pane_g1_ParamLimits

0xa45e,	// (0x0006576c) list_double2_large_graphic_pane_g1

0xa46a,	// (0x00065778) list_double2_large_graphic_pane_g2_ParamLimits

0xa46a,	// (0x00065778) list_double2_large_graphic_pane_g2

0xa3ab,	// (0x000656b9) list_double2_large_graphic_pane_g3_ParamLimits

0xa3ab,	// (0x000656b9) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0006a944) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0006a944) list_double2_large_graphic_pane_g

0xa47b,	// (0x00065789) list_double2_large_graphic_pane_t1_ParamLimits

0xa47b,	// (0x00065789) list_double2_large_graphic_pane_t1

0xa491,	// (0x0006579f) list_double2_large_graphic_pane_t2_ParamLimits

0xa491,	// (0x0006579f) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0006a94b) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0006a94b) list_double2_large_graphic_pane_t

0xa4a3,	// (0x000657b1) list_double_heading_pane_g1_ParamLimits

0xa4a3,	// (0x000657b1) list_double_heading_pane_g1

0xa4b4,	// (0x000657c2) list_double_heading_pane_g2_ParamLimits

0xa4b4,	// (0x000657c2) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0006a950) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0006a950) list_double_heading_pane_g

0xa4c0,	// (0x000657ce) list_double_heading_pane_t1_ParamLimits

0xa4c0,	// (0x000657ce) list_double_heading_pane_t1

0xa4d6,	// (0x000657e4) list_double_heading_pane_t2_ParamLimits

0xa4d6,	// (0x000657e4) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0006a955) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0006a955) list_double_heading_pane_t

0xc4c3,	// (0x000677d1) list_double_graphic_heading_pane_g1_ParamLimits

0xc4c3,	// (0x000677d1) list_double_graphic_heading_pane_g1

0xa4a3,	// (0x000657b1) list_double_graphic_heading_pane_g2_ParamLimits

0xa4a3,	// (0x000657b1) list_double_graphic_heading_pane_g2

0xa4b4,	// (0x000657c2) list_double_graphic_heading_pane_g3_ParamLimits

0xa4b4,	// (0x000657c2) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0006a95a) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0006a95a) list_double_graphic_heading_pane_g

0xa4e8,	// (0x000657f6) list_double_graphic_heading_pane_t1_ParamLimits

0xa4e8,	// (0x000657f6) list_double_graphic_heading_pane_t1

0xa4fe,	// (0x0006580c) list_double_graphic_heading_pane_t2_ParamLimits

0xa4fe,	// (0x0006580c) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0006a961) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0006a961) list_double_graphic_heading_pane_t

0xa510,	// (0x0006581e) list_double_time_pane_g1_ParamLimits

0xa510,	// (0x0006581e) list_double_time_pane_g1

0xa521,	// (0x0006582f) list_double_time_pane_g2_ParamLimits

0xa521,	// (0x0006582f) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0006a966) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0006a966) list_double_time_pane_g

0xa52d,	// (0x0006583b) list_double_time_pane_t1_ParamLimits

0xa52d,	// (0x0006583b) list_double_time_pane_t1

0xa543,	// (0x00065851) list_double_time_pane_t2_ParamLimits

0xa543,	// (0x00065851) list_double_time_pane_t2

0xa555,	// (0x00065863) list_double_time_pane_t3_ParamLimits

0xa555,	// (0x00065863) list_double_time_pane_t3

0xa567,	// (0x00065875) list_double_time_pane_t4_ParamLimits

0xa567,	// (0x00065875) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0006a96b) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0006a96b) list_double_time_pane_t

0xa579,	// (0x00065887) list_setting_pane_g1_ParamLimits

0xa579,	// (0x00065887) list_setting_pane_g1

0xa585,	// (0x00065893) list_setting_pane_g2_ParamLimits

0xa585,	// (0x00065893) list_setting_pane_g2

0x0001,

0xf666,	// (0x0006a974) list_setting_pane_g_ParamLimits

0xf666,	// (0x0006a974) list_setting_pane_g

0xa591,	// (0x0006589f) list_setting_pane_t1_ParamLimits

0xa591,	// (0x0006589f) list_setting_pane_t1

0xa5ab,	// (0x000658b9) list_setting_pane_t2_ParamLimits

0xa5ab,	// (0x000658b9) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0006a979) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0006a979) list_setting_pane_t

0xa5ea,	// (0x000658f8) set_value_pane_cp_ParamLimits

0xa5ea,	// (0x000658f8) set_value_pane_cp

0xa5f8,	// (0x00065906) list_setting_number_pane_g1_ParamLimits

0xa5f8,	// (0x00065906) list_setting_number_pane_g1

0xa604,	// (0x00065912) list_setting_number_pane_g2_ParamLimits

0xa604,	// (0x00065912) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0006a980) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0006a980) list_setting_number_pane_g

0xa610,	// (0x0006591e) list_setting_number_pane_t1_ParamLimits

0xa610,	// (0x0006591e) list_setting_number_pane_t1

0xa629,	// (0x00065937) list_setting_number_pane_t2_ParamLimits

0xa629,	// (0x00065937) list_setting_number_pane_t2

0xa643,	// (0x00065951) list_setting_number_pane_t3_ParamLimits

0xa643,	// (0x00065951) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0006a985) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0006a985) list_setting_number_pane_t

0xa5ea,	// (0x000658f8) set_value_pane_ParamLimits

0xa5ea,	// (0x000658f8) set_value_pane

0x8943,	// (0x00063c51) bg_set_opt_pane_ParamLimits

0x8943,	// (0x00063c51) bg_set_opt_pane

0xc4cf,	// (0x000677dd) set_value_pane_t1

0x8964,	// (0x00063c72) slider_set_pane_cp3

0x896d,	// (0x00063c7b) volume_small_pane_cp

0x8976,	// (0x00063c84) list_form_gen_pane

0x897f,	// (0x00063c8d) scroll_pane_cp8

0xa686,	// (0x00065994) form_field_data_pane_ParamLimits

0xa686,	// (0x00065994) form_field_data_pane

0xa6a3,	// (0x000659b1) form_field_data_wide_pane_ParamLimits

0xa6a3,	// (0x000659b1) form_field_data_wide_pane

0xa6c7,	// (0x000659d5) form_field_popup_pane_ParamLimits

0xa6c7,	// (0x000659d5) form_field_popup_pane

0xc4ed,	// (0x000677fb) form_field_popup_wide_pane_ParamLimits

0xc4ed,	// (0x000677fb) form_field_popup_wide_pane

0xc50e,	// (0x0006781c) form_field_slider_pane_ParamLimits

0xc50e,	// (0x0006781c) form_field_slider_pane

0xc521,	// (0x0006782f) form_field_slider_wide_pane_ParamLimits

0xc521,	// (0x0006782f) form_field_slider_wide_pane

0x8990,	// (0x00063c9e) data_form_pane

0xa6f3,	// (0x00065a01) form_field_data_pane_t1

0x899c,	// (0x00063caa) input_focus_pane

0xc534,	// (0x00067842) data_form_wide_pane

0xc551,	// (0x0006785f) form_field_data_wide_pane_t1

0x60dd,	// (0x000613eb) input_focus_pane_cp6

0xa70d,	// (0x00065a1b) form_field_popup_pane_t1

0x899c,	// (0x00063caa) input_focus_pane_cp7

0x89ca,	// (0x00063cd8) list_form_pane

0xc57b,	// (0x00067889) form_field_popup_wide_pane_t1

0x899c,	// (0x00063caa) input_focus_pane_cp8

0x89d6,	// (0x00063ce4) list_form_wide_pane

0xa72f,	// (0x00065a3d) form_field_slider_pane_t1_ParamLimits

0xa72f,	// (0x00065a3d) form_field_slider_pane_t1

0xa747,	// (0x00065a55) form_field_slider_pane_t2_ParamLimits

0xa747,	// (0x00065a55) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0006a995) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0006a995) form_field_slider_pane_t

0x5e72,	// (0x00061180) input_focus_pane_cp9_ParamLimits

0x5e72,	// (0x00061180) input_focus_pane_cp9

0xa75c,	// (0x00065a6a) slider_cont_pane_ParamLimits

0xa75c,	// (0x00065a6a) slider_cont_pane

0x89e5,	// (0x00063cf3) form_field_slider_wide_pane_t1_ParamLimits

0x89e5,	// (0x00063cf3) form_field_slider_wide_pane_t1

0xc590,	// (0x0006789e) form_field_slider_wide_pane_t2_ParamLimits

0xc590,	// (0x0006789e) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0006a99a) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0006a99a) form_field_slider_wide_pane_t

0x5e72,	// (0x00061180) input_focus_pane_cp10_ParamLimits

0x5e72,	// (0x00061180) input_focus_pane_cp10

0xa770,	// (0x00065a7e) slider_cont_pane_cp1_ParamLimits

0xa770,	// (0x00065a7e) slider_cont_pane_cp1

0xa784,	// (0x00065a92) slider_form_pane_cp

0x89f7,	// (0x00063d05) input_focus_pane_g1

0x89ff,	// (0x00063d0d) input_focus_pane_g2

0x8a07,	// (0x00063d15) input_focus_pane_g3

0x8a0f,	// (0x00063d1d) input_focus_pane_g4

0x8a17,	// (0x00063d25) input_focus_pane_g5

0x8a1f,	// (0x00063d2d) input_focus_pane_g6

0x8a27,	// (0x00063d35) input_focus_pane_g7

0x8a2f,	// (0x00063d3d) input_focus_pane_g8

0x8a37,	// (0x00063d45) input_focus_pane_g9

0x5cdb,	// (0x00060fe9) input_focus_pane_g10

0x0009,

0xf691,	// (0x0006a99f) input_focus_pane_g

0x28fb,	// (0x0005dc09) wait_border_pane_g3_copy1

0xa78c,	// (0x00065a9a) data_form_pane_t1

0x5cdb,	// (0x00060fe9) wait_anim_pane_g1_copy1

0xbcc5,	// (0x00066fd3) data_form_wide_pane_t1

0xc5a2,	// (0x000678b0) list_form_graphic_pane_cp_ParamLimits

0xc5a2,	// (0x000678b0) list_form_graphic_pane_cp

0x385a,	// (0x0005eb68) slider_form_pane_g1

0x3863,	// (0x0005eb71) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0006ac9d) slider_form_pane_g

0xa7a8,	// (0x00065ab6) list_form_graphic_pane_ParamLimits

0xa7a8,	// (0x00065ab6) list_form_graphic_pane

0xc5b4,	// (0x000678c2) list_form_graphic_pane_g1

0xe8d4,	// (0x00069be2) list_form_graphic_pane_t1_ParamLimits

0xe8d4,	// (0x00069be2) list_form_graphic_pane_t1

0x5d3f,	// (0x0006104d) list_highlight_pane_cp5_ParamLimits

0x5d3f,	// (0x0006104d) list_highlight_pane_cp5

0xa7b9,	// (0x00065ac7) find_pane_g1

0x8a3f,	// (0x00063d4d) input_find_pane

0xa7c2,	// (0x00065ad0) input_find_pane_g1_ParamLimits

0xa7c2,	// (0x00065ad0) input_find_pane_g1

0xa7ce,	// (0x00065adc) input_find_pane_t1_ParamLimits

0xa7ce,	// (0x00065adc) input_find_pane_t1

0xa7e3,	// (0x00065af1) input_find_pane_t2_ParamLimits

0xa7e3,	// (0x00065af1) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0006a9b4) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0006a9b4) input_find_pane_t

0x8a48,	// (0x00063d56) input_focus_pane_cp5_ParamLimits

0x8a48,	// (0x00063d56) input_focus_pane_cp5

0x8a56,	// (0x00063d64) bg_popup_window_pane_cp2_ParamLimits

0x8a56,	// (0x00063d64) bg_popup_window_pane_cp2

0x8a63,	// (0x00063d71) listscroll_menu_pane_ParamLimits

0x8a63,	// (0x00063d71) listscroll_menu_pane

0xa804,	// (0x00065b12) popup_submenu_window_ParamLimits

0xa804,	// (0x00065b12) popup_submenu_window

0x8a6f,	// (0x00063d7d) find_popup_pane_g1

0x8a77,	// (0x00063d85) input_popup_find_pane_cp

0x8a48,	// (0x00063d56) input_focus_pane_cp4_ParamLimits

0x8a48,	// (0x00063d56) input_focus_pane_cp4

0x8a81,	// (0x00063d8f) input_popup_find_pane_t1_ParamLimits

0x8a81,	// (0x00063d8f) input_popup_find_pane_t1

0x5ce5,	// (0x00060ff3) bg_popup_sub_pane_cp

0x8aaf,	// (0x00063dbd) listscroll_popup_sub_pane

0x8ab7,	// (0x00063dc5) list_submenu_pane_ParamLimits

0x8ab7,	// (0x00063dc5) list_submenu_pane

0x8ac8,	// (0x00063dd6) scroll_pane_cp4

0x8ad0,	// (0x00063dde) list_single_popup_submenu_pane_ParamLimits

0x8ad0,	// (0x00063dde) list_single_popup_submenu_pane

0x8ae5,	// (0x00063df3) list_single_popup_submenu_pane_g1

0x8aed,	// (0x00063dfb) list_single_popup_submenu_pane_t1_ParamLimits

0x8aed,	// (0x00063dfb) list_single_popup_submenu_pane_t1

0x5e72,	// (0x00061180) bg_active_tab_pane_cp1_ParamLimits

0x5e72,	// (0x00061180) bg_active_tab_pane_cp1

0xa842,	// (0x00065b50) tabs_2_active_pane_g1

0xa84a,	// (0x00065b58) tabs_2_active_pane_t1

0x5e72,	// (0x00061180) bg_passive_tab_pane_cp1_ParamLimits

0x5e72,	// (0x00061180) bg_passive_tab_pane_cp1

0xa842,	// (0x00065b50) tabs_2_passive_pane_g1

0xa84a,	// (0x00065b58) tabs_2_passive_pane_t1

0x5d3f,	// (0x0006104d) bg_active_tab_pane_cp4

0xa85c,	// (0x00065b6a) tabs_2_long_active_pane_t1

0x016a,	// (0x0005b478) bg_passive_tab_pane_cp4

0x0301,	// (0x0005b60f) list_single_midp_graphic_pane_g4_ParamLimits

0x5d3f,	// (0x0006104d) bg_active_tab_pane_cp5

0xa86f,	// (0x00065b7d) tabs_3_long_active_pane_t1

0x016a,	// (0x0005b478) bg_passive_tab_pane_cp5

0x0301,	// (0x0005b60f) list_single_midp_graphic_pane_g4

0x5d3f,	// (0x0006104d) bg_popup_window_pane_cp13_ParamLimits

0x5d3f,	// (0x0006104d) bg_popup_window_pane_cp13

0x8b0b,	// (0x00063e19) listscroll_popup_fast_pane_ParamLimits

0x8b0b,	// (0x00063e19) listscroll_popup_fast_pane

0x8b1a,	// (0x00063e28) grid_popup_fast_pane_ParamLimits

0x8b1a,	// (0x00063e28) grid_popup_fast_pane

0x8b2c,	// (0x00063e3a) scroll_pane_cp9_ParamLimits

0x8b2c,	// (0x00063e3a) scroll_pane_cp9

0x5368,	// (0x00060676) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5368,	// (0x00060676) list_single_graphic_hl_pane_t1_cp2

0x8b50,	// (0x00063e5e) input_focus_pane_cp20_ParamLimits

0x8b50,	// (0x00063e5e) input_focus_pane_cp20

0x8b5e,	// (0x00063e6c) query_popup_data_pane_t1_ParamLimits

0x8b5e,	// (0x00063e6c) query_popup_data_pane_t1

0x8b71,	// (0x00063e7f) query_popup_data_pane_t2_ParamLimits

0x8b71,	// (0x00063e7f) query_popup_data_pane_t2

0x8bb7,	// (0x00063ec5) query_popup_data_pane_t3_ParamLimits

0x8bb7,	// (0x00063ec5) query_popup_data_pane_t3

0x8bf8,	// (0x00063f06) query_popup_data_pane_t4_ParamLimits

0x8bf8,	// (0x00063f06) query_popup_data_pane_t4

0x8c34,	// (0x00063f42) query_popup_data_pane_t5_ParamLimits

0x8c34,	// (0x00063f42) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0006a9b9) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0006a9b9) query_popup_data_pane_t

0x89f7,	// (0x00063d05) bg_set_opt_pane_g1

0x89ff,	// (0x00063d0d) bg_set_opt_pane_g2

0x8a07,	// (0x00063d15) bg_set_opt_pane_g3

0x8a0f,	// (0x00063d1d) bg_set_opt_pane_g4

0x8a17,	// (0x00063d25) bg_set_opt_pane_g5

0x8a1f,	// (0x00063d2d) bg_set_opt_pane_g6

0x8a27,	// (0x00063d35) bg_set_opt_pane_g7

0x8a2f,	// (0x00063d3d) bg_set_opt_pane_g8

0x8a37,	// (0x00063d45) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0006a9c4) bg_set_opt_pane_g

0xf352,	// (0x0006a660) control_top_pane_stacon_ParamLimits

0xf352,	// (0x0006a660) control_top_pane_stacon

0xf3a5,	// (0x0006a6b3) signal_pane_stacon_ParamLimits

0xf3a5,	// (0x0006a6b3) signal_pane_stacon

0x904b,	// (0x00064359) stacon_top_pane_g1_ParamLimits

0x904b,	// (0x00064359) stacon_top_pane_g1

0xf3ca,	// (0x0006a6d8) title_pane_stacon_ParamLimits

0xf3ca,	// (0x0006a6d8) title_pane_stacon

0xf3f4,	// (0x0006a702) uni_indicator_pane_stacon_ParamLimits

0xf3f4,	// (0x0006a702) uni_indicator_pane_stacon

0xf40c,	// (0x0006a71a) battery_pane_stacon_ParamLimits

0xf40c,	// (0x0006a71a) battery_pane_stacon

0xf450,	// (0x0006a75e) control_bottom_pane_stacon_ParamLimits

0xf450,	// (0x0006a75e) control_bottom_pane_stacon

0xf473,	// (0x0006a781) navi_pane_stacon_ParamLimits

0xf473,	// (0x0006a781) navi_pane_stacon

0x906d,	// (0x0006437b) stacon_bottom_pane_g1_ParamLimits

0x906d,	// (0x0006437b) stacon_bottom_pane_g1

0xf0b8,	// (0x0006a3c6) aid_levels_signal_lsc_ParamLimits

0xf0b8,	// (0x0006a3c6) aid_levels_signal_lsc

0xf0cf,	// (0x0006a3dd) signal_pane_stacon_g1_ParamLimits

0xf0cf,	// (0x0006a3dd) signal_pane_stacon_g1

0xf0e3,	// (0x0006a3f1) signal_pane_stacon_g2_ParamLimits

0xf0e3,	// (0x0006a3f1) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0006a9d7) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0006a9d7) signal_pane_stacon_g

0xf118,	// (0x0006a426) title_pane_stacon_t1_ParamLimits

0xf118,	// (0x0006a426) title_pane_stacon_t1

0x8c78,	// (0x00063f86) uni_indicator_pane_stacon_g1

0x8c82,	// (0x00063f90) uni_indicator_pane_stacon_g2

0x8c8c,	// (0x00063f9a) uni_indicator_pane_stacon_g3

0x8c96,	// (0x00063fa4) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0006a9e3) uni_indicator_pane_stacon_g

0xf13d,	// (0x0006a44b) control_top_pane_stacon_g1

0xf145,	// (0x0006a453) control_top_pane_stacon_t1_ParamLimits

0xf145,	// (0x0006a453) control_top_pane_stacon_t1

0xf17c,	// (0x0006a48a) aid_levels_battery_lsc_ParamLimits

0xf17c,	// (0x0006a48a) aid_levels_battery_lsc

0xf194,	// (0x0006a4a2) battery_pane_stacon_g1_ParamLimits

0xf194,	// (0x0006a4a2) battery_pane_stacon_g1

0xf1a7,	// (0x0006a4b5) battery_pane_stacon_g2_ParamLimits

0xf1a7,	// (0x0006a4b5) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0006a9ec) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0006a9ec) battery_pane_stacon_g

0xf1e5,	// (0x0006a4f3) navi_icon_pane_stacon

0xf1f9,	// (0x0006a507) navi_navi_pane_stacon

0xf1e5,	// (0x0006a4f3) navi_text_pane_stacon

0xf13d,	// (0x0006a44b) control_bottom_pane_stacon_g1

0xf20f,	// (0x0006a51d) control_bottom_pane_stacon_t1_ParamLimits

0xf20f,	// (0x0006a51d) control_bottom_pane_stacon_t1

0xa881,	// (0x00065b8f) grid_app_pane_ParamLimits

0xa881,	// (0x00065b8f) grid_app_pane

0xa8b9,	// (0x00065bc7) scroll_pane_cp15_ParamLimits

0xa8b9,	// (0x00065bc7) scroll_pane_cp15

0xa8ce,	// (0x00065bdc) cell_app_pane_ParamLimits

0xa8ce,	// (0x00065bdc) cell_app_pane

0xa91b,	// (0x00065c29) cell_app_pane_g1_ParamLimits

0xa91b,	// (0x00065c29) cell_app_pane_g1

0x8cba,	// (0x00063fc8) cell_app_pane_g2_ParamLimits

0x8cba,	// (0x00063fc8) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0006a9f1) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0006a9f1) cell_app_pane_g

0x8cc6,	// (0x00063fd4) cell_app_pane_t1_ParamLimits

0x8cc6,	// (0x00063fd4) cell_app_pane_t1

0x8cdd,	// (0x00063feb) grid_highlight_pane_ParamLimits

0x8cdd,	// (0x00063feb) grid_highlight_pane

0x89f7,	// (0x00063d05) cell_highlight_pane_g1

0x89ff,	// (0x00063d0d) cell_highlight_pane_g2

0x8a07,	// (0x00063d15) cell_highlight_pane_g3

0x8a0f,	// (0x00063d1d) cell_highlight_pane_g4

0x8a17,	// (0x00063d25) cell_highlight_pane_g5

0x8a1f,	// (0x00063d2d) cell_highlight_pane_g6

0x8a27,	// (0x00063d35) cell_highlight_pane_g7

0x8a2f,	// (0x00063d3d) cell_highlight_pane_g8

0x8a37,	// (0x00063d45) cell_highlight_pane_g9

0x5cdb,	// (0x00060fe9) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0006a99f) cell_highlight_pane_g

0x8cee,	// (0x00063ffc) bg_scroll_pane

0xf250,	// (0x0006a55e) scroll_handle_pane

0x8d35,	// (0x00064043) scroll_bg_pane_g1

0x8d4a,	// (0x00064058) scroll_bg_pane_g2

0x8d62,	// (0x00064070) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0006a9f6) scroll_bg_pane_g

0x8d77,	// (0x00064085) scroll_handle_focus_pane_ParamLimits

0x8d77,	// (0x00064085) scroll_handle_focus_pane

0x8d35,	// (0x00064043) scroll_handle_pane_g1

0x8d84,	// (0x00064092) scroll_handle_pane_g2

0x8d62,	// (0x00064070) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0006a9fd) scroll_handle_pane_g

0x8a48,	// (0x00063d56) bg_popup_sub_pane_cp21_ParamLimits

0x8a48,	// (0x00063d56) bg_popup_sub_pane_cp21

0x8d98,	// (0x000640a6) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d98,	// (0x000640a6) popup_fep_japan_predictive_window_t1

0x8daf,	// (0x000640bd) popup_fep_japan_predictive_window_t2_ParamLimits

0x8daf,	// (0x000640bd) popup_fep_japan_predictive_window_t2

0x8de2,	// (0x000640f0) popup_fep_japan_predictive_window_t3_ParamLimits

0x8de2,	// (0x000640f0) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0006aa04) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0006aa04) popup_fep_japan_predictive_window_t

0x5ce5,	// (0x00060ff3) bg_popup_sub_pane_cp23

0x8e19,	// (0x00064127) listscroll_japin_cand_pane

0x8e21,	// (0x0006412f) popup_fep_japan_candidate_window_t1

0x8e2f,	// (0x0006413d) candidate_pane_ParamLimits

0x8e2f,	// (0x0006413d) candidate_pane

0x8e41,	// (0x0006414f) scroll_pane_cp30

0x8e4b,	// (0x00064159) list_single_popup_jap_candidate_pane_ParamLimits

0x8e4b,	// (0x00064159) list_single_popup_jap_candidate_pane

0x5ce5,	// (0x00060ff3) list_highlight_pane_cp30

0x8e5f,	// (0x0006416d) list_single_popup_jap_candidate_pane_t1

0xa944,	// (0x00065c52) level_1_signal

0xa956,	// (0x00065c64) level_2_signal

0xa969,	// (0x00065c77) level_3_signal

0xa97c,	// (0x00065c8a) level_4_signal

0xa98f,	// (0x00065c9d) level_5_signal

0xa9a2,	// (0x00065cb0) level_6_signal

0xa9b5,	// (0x00065cc3) level_7_signal

0xa944,	// (0x00065c52) level_1_battery

0xa956,	// (0x00065c64) level_2_battery

0xa969,	// (0x00065c77) level_3_battery

0xa97c,	// (0x00065c8a) level_4_battery

0xa98f,	// (0x00065c9d) level_5_battery

0xa9a2,	// (0x00065cb0) level_6_battery

0xa9b5,	// (0x00065cc3) level_7_battery

0x8e86,	// (0x00064194) list_menu_pane_ParamLimits

0x8e86,	// (0x00064194) list_menu_pane

0x8e9c,	// (0x000641aa) scroll_pane_cp25_ParamLimits

0x8e9c,	// (0x000641aa) scroll_pane_cp25

0x8eb5,	// (0x000641c3) list_double2_graphic_pane_cp2_ParamLimits

0x8eb5,	// (0x000641c3) list_double2_graphic_pane_cp2

0x8eb5,	// (0x000641c3) list_double2_large_graphic_pane_cp2_ParamLimits

0x8eb5,	// (0x000641c3) list_double2_large_graphic_pane_cp2

0x8eb5,	// (0x000641c3) list_double2_pane_cp2_ParamLimits

0x8eb5,	// (0x000641c3) list_double2_pane_cp2

0x8eb5,	// (0x000641c3) list_double_graphic_pane_cp2_ParamLimits

0x8eb5,	// (0x000641c3) list_double_graphic_pane_cp2

0x8eb5,	// (0x000641c3) list_double_large_graphic_pane_cp2_ParamLimits

0x8eb5,	// (0x000641c3) list_double_large_graphic_pane_cp2

0x8eb5,	// (0x000641c3) list_double_number_pane_cp2_ParamLimits

0x8eb5,	// (0x000641c3) list_double_number_pane_cp2

0x8eb5,	// (0x000641c3) list_double_pane_cp2_ParamLimits

0x8eb5,	// (0x000641c3) list_double_pane_cp2

0xa9db,	// (0x00065ce9) list_single_2graphic_pane_cp2_ParamLimits

0xa9db,	// (0x00065ce9) list_single_2graphic_pane_cp2

0xa9db,	// (0x00065ce9) list_single_graphic_heading_pane_cp2_ParamLimits

0xa9db,	// (0x00065ce9) list_single_graphic_heading_pane_cp2

0xa9db,	// (0x00065ce9) list_single_graphic_pane_cp2_ParamLimits

0xa9db,	// (0x00065ce9) list_single_graphic_pane_cp2

0xa9db,	// (0x00065ce9) list_single_heading_pane_cp2_ParamLimits

0xa9db,	// (0x00065ce9) list_single_heading_pane_cp2

0x8ec5,	// (0x000641d3) list_single_large_graphic_pane_cp2_ParamLimits

0x8ec5,	// (0x000641d3) list_single_large_graphic_pane_cp2

0xa9db,	// (0x00065ce9) list_single_number_heading_pane_cp2_ParamLimits

0xa9db,	// (0x00065ce9) list_single_number_heading_pane_cp2

0xa9db,	// (0x00065ce9) list_single_number_pane_cp2_ParamLimits

0xa9db,	// (0x00065ce9) list_single_number_pane_cp2

0xa9db,	// (0x00065ce9) list_single_pane_cp2_ParamLimits

0xa9db,	// (0x00065ce9) list_single_pane_cp2

0x8ede,	// (0x000641ec) bg_popup_sub_pane_cp22

0xf302,	// (0x0006a610) popup_side_volume_key_window_g1

0xf32c,	// (0x0006a63a) popup_side_volume_key_window_t1

0xf34a,	// (0x0006a658) volume_small_pane_cp1

0x5e72,	// (0x00061180) bg_popup_sub_pane_cp24_ParamLimits

0x5e72,	// (0x00061180) bg_popup_sub_pane_cp24

0x8ef4,	// (0x00064202) fep_china_uni_candidate_pane_ParamLimits

0x8ef4,	// (0x00064202) fep_china_uni_candidate_pane

0x8f08,	// (0x00064216) fep_china_uni_entry_pane

0x8f18,	// (0x00064226) popup_fep_china_uni_window_g1

0x8f34,	// (0x00064242) fep_china_uni_entry_pane_g1

0x8f3e,	// (0x0006424c) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0006aa35) fep_china_uni_entry_pane_g

0x8f48,	// (0x00064256) fep_entry_item_pane

0x8f52,	// (0x00064260) fep_candidate_item_pane

0x8f5a,	// (0x00064268) fep_china_uni_candidate_pane_g1

0x8f64,	// (0x00064272) fep_china_uni_candidate_pane_g2

0x8f6c,	// (0x0006427a) fep_china_uni_candidate_pane_g3

0x8f74,	// (0x00064282) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0006aa3a) fep_china_uni_candidate_pane_g

0x5cdb,	// (0x00060fe9) fep_entry_item_pane_g1

0x8f7e,	// (0x0006428c) fep_entry_item_pane_t1_ParamLimits

0x8f7e,	// (0x0006428c) fep_entry_item_pane_t1

0x8f94,	// (0x000642a2) fep_candidate_item_pane_t1_ParamLimits

0x8f94,	// (0x000642a2) fep_candidate_item_pane_t1

0x8fa9,	// (0x000642b7) fep_candidate_item_pane_t2_ParamLimits

0x8fa9,	// (0x000642b7) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0006aa43) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0006aa43) fep_candidate_item_pane_t

0x5d3f,	// (0x0006104d) list_highlight_pane_cp31_ParamLimits

0x5d3f,	// (0x0006104d) list_highlight_pane_cp31

0x8fbb,	// (0x000642c9) level_1_signal_lsc

0x8fc4,	// (0x000642d2) level_2_signal_lsc

0x8fcd,	// (0x000642db) level_3_signal_lsc

0x8fd6,	// (0x000642e4) level_4_signal_lsc

0x8fdf,	// (0x000642ed) level_5_signal_lsc

0x8fe8,	// (0x000642f6) level_6_signal_lsc

0x8ff1,	// (0x000642ff) level_7_signal_lsc

0x8ff1,	// (0x000642ff) level_1_battery_lsc

0x8ffa,	// (0x00064308) level_2_battery_lsc

0x9003,	// (0x00064311) level_3_battery_lsc

0x900c,	// (0x0006431a) level_4_battery_lsc

0x9015,	// (0x00064323) level_5_battery_lsc

0x901e,	// (0x0006432c) level_6_battery_lsc

0x8fbb,	// (0x000642c9) level_7_battery_lsc

0x9027,	// (0x00064335) scroll_handle_focus_pane_g1

0x9030,	// (0x0006433e) scroll_handle_focus_pane_g2

0x9039,	// (0x00064347) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0006aa48) scroll_handle_focus_pane_g

0xaa6d,	// (0x00065d7b) list_single_2graphic_pane_g1_ParamLimits

0xaa6d,	// (0x00065d7b) list_single_2graphic_pane_g1

0xa254,	// (0x00065562) list_single_2graphic_pane_g2_ParamLimits

0xa254,	// (0x00065562) list_single_2graphic_pane_g2

0x02c8,	// (0x0005b5d6) list_single_2graphic_pane_g3_ParamLimits

0x02c8,	// (0x0005b5d6) list_single_2graphic_pane_g3

0xaa79,	// (0x00065d87) list_single_2graphic_pane_g4_ParamLimits

0xaa79,	// (0x00065d87) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0006aa4f) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0006aa4f) list_single_2graphic_pane_g

0xaa8a,	// (0x00065d98) list_single_2graphic_pane_t1_ParamLimits

0xaa8a,	// (0x00065d98) list_single_2graphic_pane_t1

0xaab8,	// (0x00065dc6) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xaab8,	// (0x00065dc6) list_double2_graphic_large_graphic_pane_g1

0xa46a,	// (0x00065778) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa46a,	// (0x00065778) list_double2_graphic_large_graphic_pane_g2

0xa3ab,	// (0x000656b9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa3ab,	// (0x000656b9) list_double2_graphic_large_graphic_pane_g3

0xaaca,	// (0x00065dd8) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xaaca,	// (0x00065dd8) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0006aa58) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0006aa58) list_double2_graphic_large_graphic_pane_g

0xaad6,	// (0x00065de4) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xaad6,	// (0x00065de4) list_double2_graphic_large_graphic_pane_t1

0xaaec,	// (0x00065dfa) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xaaec,	// (0x00065dfa) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0006aa61) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0006aa61) list_double2_graphic_large_graphic_pane_t

0x90cb,	// (0x000643d9) popup_fast_swap_window_ParamLimits

0x90cb,	// (0x000643d9) popup_fast_swap_window

0x90e9,	// (0x000643f7) popup_side_volume_key_window

0x9107,	// (0x00064415) stacon_top_pane

0x9111,	// (0x0006441f) status_pane_ParamLimits

0x9111,	// (0x0006441f) status_pane

0xab95,	// (0x00065ea3) status_small_pane

0x5ce5,	// (0x00060ff3) control_pane

0x5ce5,	// (0x00060ff3) stacon_bottom_pane

0x897f,	// (0x00063c8d) scroll_pane_cp121

0x8976,	// (0x00063c84) set_content_pane

0xaafe,	// (0x00065e0c) bg_active_tab_pane_g1_cp1

0x9042,	// (0x00064350) bg_active_tab_pane_g2_cp1

0xab07,	// (0x00065e15) bg_active_tab_pane_g3_cp1

0xaafe,	// (0x00065e0c) bg_passive_tab_pane_g1_cp1

0x9042,	// (0x00064350) bg_passive_tab_pane_g2_cp1

0xab07,	// (0x00065e15) bg_passive_tab_pane_g3_cp1

0xab10,	// (0x00065e1e) bg_active_tab_pane_g1_cp2

0x9042,	// (0x00064350) bg_active_tab_pane_g2_cp2

0xab19,	// (0x00065e27) bg_active_tab_pane_g3_cp2

0xab10,	// (0x00065e1e) bg_passive_tab_pane_g1_cp2

0x9042,	// (0x00064350) bg_passive_tab_pane_g2_cp2

0xab19,	// (0x00065e27) bg_passive_tab_pane_g3_cp2

0xab22,	// (0x00065e30) bg_active_tab_pane_g1_cp3

0x9042,	// (0x00064350) bg_active_tab_pane_g2_cp3

0xab2b,	// (0x00065e39) bg_active_tab_pane_g3_cp3

0xab22,	// (0x00065e30) bg_passive_tab_pane_g1_cp3

0x9042,	// (0x00064350) bg_passive_tab_pane_g2_cp3

0xab2b,	// (0x00065e39) bg_passive_tab_pane_g3_cp3

0xab34,	// (0x00065e42) bg_active_tab_pane_g1_cp4

0x9042,	// (0x00064350) bg_active_tab_pane_g2_cp4

0xab3d,	// (0x00065e4b) bg_active_tab_pane_g3_cp4

0xab34,	// (0x00065e42) bg_passive_tab_pane_g1_cp4

0x9042,	// (0x00064350) bg_passive_tab_pane_g2_cp4

0xab3d,	// (0x00065e4b) bg_passive_tab_pane_g3_cp4

0x9089,	// (0x00064397) bg_active_tab_pane_g1_cp5

0x9042,	// (0x00064350) bg_active_tab_pane_g2_cp5

0x9092,	// (0x000643a0) bg_active_tab_pane_g3_cp5

0x9089,	// (0x00064397) bg_passive_tab_pane_g1_cp5

0x9042,	// (0x00064350) bg_passive_tab_pane_g2_cp5

0x9092,	// (0x000643a0) bg_passive_tab_pane_g3_cp5

0x400b,	// (0x0005f319) list_set_graphic_pane_ParamLimits

0x400b,	// (0x0005f319) list_set_graphic_pane

0x5ce5,	// (0x00060ff3) bg_set_opt_pane_cp4

0xab46,	// (0x00065e54) list_set_graphic_pane_g1_ParamLimits

0xab46,	// (0x00065e54) list_set_graphic_pane_g1

0xab52,	// (0x00065e60) list_set_graphic_pane_g2_ParamLimits

0xab52,	// (0x00065e60) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0006aa66) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0006aa66) list_set_graphic_pane_g

0x0009,

0xfae2,	// (0x0006adf0) volume_small_pane_cp_g

0xab76,	// (0x00065e84) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xab76,	// (0x00065e84) list_double2_large_graphic_pane_g1_cp2

0xab84,	// (0x00065e92) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xab84,	// (0x00065e92) list_double2_large_graphic_pane_g2_cp2

0x909b,	// (0x000643a9) list_double2_large_graphic_pane_g3_cp2

0x90a3,	// (0x000643b1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x90a3,	// (0x000643b1) list_double2_large_graphic_pane_t1_cp2

0x90b9,	// (0x000643c7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x90b9,	// (0x000643c7) list_double2_large_graphic_pane_t2_cp2

0xc7ab,	// (0x00067ab9) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc7ab,	// (0x00067ab9) list_double_large_graphic_pane_g1_cp2

0xc7be,	// (0x00067acc) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc7be,	// (0x00067acc) list_double_large_graphic_pane_g2_cp2

0x91f2,	// (0x00064500) list_double_large_graphic_pane_g3_cp2

0x3403,	// (0x0005e711) list_double_large_graphic_pane_g4_cp

0x340b,	// (0x0005e719) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x340b,	// (0x0005e719) list_double_large_graphic_pane_t1_cp2

0x3422,	// (0x0005e730) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3422,	// (0x0005e730) list_double_large_graphic_pane_t2_cp2

0xaba0,	// (0x00065eae) list_double2_graphic_pane_g1_cp2_ParamLimits

0xaba0,	// (0x00065eae) list_double2_graphic_pane_g1_cp2

0xabae,	// (0x00065ebc) list_double2_graphic_pane_g2_cp2_ParamLimits

0xabae,	// (0x00065ebc) list_double2_graphic_pane_g2_cp2

0xabbf,	// (0x00065ecd) list_double2_graphic_pane_g3_cp2

0x911f,	// (0x0006442d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x911f,	// (0x0006442d) list_double2_graphic_pane_t1_cp2

0x9135,	// (0x00064443) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9135,	// (0x00064443) list_double2_graphic_pane_t2_cp2

0x9147,	// (0x00064455) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9147,	// (0x00064455) list_single_number_heading_pane_g1_cp2

0x9153,	// (0x00064461) list_single_number_heading_pane_g2_cp2

0x915b,	// (0x00064469) list_single_number_heading_pane_t1_cp2_ParamLimits

0x915b,	// (0x00064469) list_single_number_heading_pane_t1_cp2

0xabc9,	// (0x00065ed7) list_single_number_heading_pane_t2_cp2_ParamLimits

0xabc9,	// (0x00065ed7) list_single_number_heading_pane_t2_cp2

0x9171,	// (0x0006447f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9171,	// (0x0006447f) list_single_number_heading_pane_t3_cp2

0x9147,	// (0x00064455) list_single_heading_pane_g1_cp2_ParamLimits

0x9147,	// (0x00064455) list_single_heading_pane_g1_cp2

0x9153,	// (0x00064461) list_single_heading_pane_g2_cp2

0x915b,	// (0x00064469) list_single_heading_pane_t1_cp2_ParamLimits

0x915b,	// (0x00064469) list_single_heading_pane_t1_cp2

0xc797,	// (0x00067aa5) list_single_heading_pane_t2_cp2_ParamLimits

0xc797,	// (0x00067aa5) list_single_heading_pane_t2_cp2

0x3121,	// (0x0005e42f) list_double_graphic_pane_g1_cp2_ParamLimits

0x3121,	// (0x0005e42f) list_double_graphic_pane_g1_cp2

0x312d,	// (0x0005e43b) list_double_graphic_pane_g2_cp2_ParamLimits

0x312d,	// (0x0005e43b) list_double_graphic_pane_g2_cp2

0x313c,	// (0x0005e44a) list_double_graphic_pane_g3_cp2

0x3144,	// (0x0005e452) list_double_graphic_pane_t1_cp2_ParamLimits

0x3144,	// (0x0005e452) list_double_graphic_pane_t1_cp2

0x315a,	// (0x0005e468) list_double_graphic_pane_t2_cp2_ParamLimits

0x315a,	// (0x0005e468) list_double_graphic_pane_t2_cp2

0x91e6,	// (0x000644f4) list_double_number_pane_g1_cp2_ParamLimits

0x91e6,	// (0x000644f4) list_double_number_pane_g1_cp2

0x91f2,	// (0x00064500) list_double_number_pane_g2_cp2

0xc731,	// (0x00067a3f) list_double_number_pane_t1_cp2_ParamLimits

0xc731,	// (0x00067a3f) list_double_number_pane_t1_cp2

0x30f9,	// (0x0005e407) list_double_number_pane_t2_cp2_ParamLimits

0x30f9,	// (0x0005e407) list_double_number_pane_t2_cp2

0x310f,	// (0x0005e41d) list_double_number_pane_t3_cp2_ParamLimits

0x310f,	// (0x0005e41d) list_double_number_pane_t3_cp2

0xc67f,	// (0x0006798d) list_single_graphic_pane_g1_cp2_ParamLimits

0xc67f,	// (0x0006798d) list_single_graphic_pane_g1_cp2

0xe8f9,	// (0x00069c07) list_single_graphic_pane_g2_cp2_ParamLimits

0xe8f9,	// (0x00069c07) list_single_graphic_pane_g2_cp2

0xe905,	// (0x00069c13) list_single_graphic_pane_g3_cp2

0x2fa4,	// (0x0005e2b2) list_single_graphic_pane_t1_cp2_ParamLimits

0x2fa4,	// (0x0005e2b2) list_single_graphic_pane_t1_cp2

0xe8f9,	// (0x00069c07) list_single_number_pane_g1_cp2_ParamLimits

0xe8f9,	// (0x00069c07) list_single_number_pane_g1_cp2

0xe905,	// (0x00069c13) list_single_number_pane_g2_cp2

0x2fa4,	// (0x0005e2b2) list_single_number_pane_t1_cp2_ParamLimits

0x2fa4,	// (0x0005e2b2) list_single_number_pane_t1_cp2

0xc66b,	// (0x00067979) list_single_number_pane_t2_cp2_ParamLimits

0xc66b,	// (0x00067979) list_single_number_pane_t2_cp2

0xab84,	// (0x00065e92) list_double2_pane_g1_cp2_ParamLimits

0xab84,	// (0x00065e92) list_double2_pane_g1_cp2

0x909b,	// (0x000643a9) list_double2_pane_g2_cp2

0x91be,	// (0x000644cc) list_double2_pane_t1_cp2_ParamLimits

0x91be,	// (0x000644cc) list_double2_pane_t1_cp2

0x91d4,	// (0x000644e2) list_double2_pane_t2_cp2_ParamLimits

0x91d4,	// (0x000644e2) list_double2_pane_t2_cp2

0x91e6,	// (0x000644f4) list_double_pane_g1_cp2_ParamLimits

0x91e6,	// (0x000644f4) list_double_pane_g1_cp2

0x91f2,	// (0x00064500) list_double_pane_g2_cp2

0x91fa,	// (0x00064508) list_double_pane_t1_cp2_ParamLimits

0x91fa,	// (0x00064508) list_double_pane_t1_cp2

0x9210,	// (0x0006451e) list_double_pane_t2_cp2_ParamLimits

0x9210,	// (0x0006451e) list_double_pane_t2_cp2

0xe8e9,	// (0x00069bf7) list_single_pane_cp2_g3

0xe8f9,	// (0x00069c07) list_single_pane_g1_cp2_ParamLimits

0xe8f9,	// (0x00069c07) list_single_pane_g1_cp2

0xe905,	// (0x00069c13) list_single_pane_g2_cp2

0xe90d,	// (0x00069c1b) list_single_pane_t1_cp2_ParamLimits

0xe90d,	// (0x00069c1b) list_single_pane_t1_cp2

0xabf7,	// (0x00065f05) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xabf7,	// (0x00065f05) list_single_large_graphic_pane_g1_cp2

0xc48f,	// (0x0006779d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc48f,	// (0x0006779d) list_single_large_graphic_pane_g2_cp2

0xe925,	// (0x00069c33) list_single_large_graphic_pane_g3_cp2

0xe92d,	// (0x00069c3b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xe92d,	// (0x00069c3b) list_single_large_graphic_pane_g4_cp1

0xe947,	// (0x00069c55) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xe947,	// (0x00069c55) list_single_large_graphic_pane_t1_cp2

0x2f6e,	// (0x0005e27c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2f6e,	// (0x0005e27c) list_single_graphic_heading_pane_g1_cp2

0xc646,	// (0x00067954) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc646,	// (0x00067954) list_single_graphic_heading_pane_g4_cp2

0xe905,	// (0x00069c13) list_single_graphic_heading_pane_g5_cp2

0x2f7a,	// (0x0005e288) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2f7a,	// (0x0005e288) list_single_graphic_heading_pane_t1_cp2

0xc657,	// (0x00067965) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc657,	// (0x00067965) list_single_graphic_heading_pane_t2_cp2

0x2f2f,	// (0x0005e23d) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2f2f,	// (0x0005e23d) list_single_2graphic_pane_g1_cp2

0xc646,	// (0x00067954) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc646,	// (0x00067954) list_single_2graphic_pane_g2_cp2

0xe905,	// (0x00069c13) list_single_2graphic_pane_g3_cp2

0x2f4c,	// (0x0005e25a) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2f4c,	// (0x0005e25a) list_single_2graphic_pane_g4_cp2

0x2f58,	// (0x0005e266) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2f58,	// (0x0005e266) list_single_2graphic_pane_t1_cp2

0x5cdb,	// (0x00060fe9) list_highlight_pane_g10_cp1

0x2b07,	// (0x0005de15) list_highlight_pane_g1_cp1

0x2b0f,	// (0x0005de1d) list_highlight_pane_g2_cp1

0x2b17,	// (0x0005de25) list_highlight_pane_g3_cp1

0x2b1f,	// (0x0005de2d) list_highlight_pane_g4_cp1

0x2b27,	// (0x0005de35) list_highlight_pane_g5_cp1

0x2b2f,	// (0x0005de3d) list_highlight_pane_g6_cp1

0x2b37,	// (0x0005de45) list_highlight_pane_g7_cp1

0x2b3f,	// (0x0005de4d) list_highlight_pane_g8_cp1

0x2b47,	// (0x0005de55) list_highlight_pane_g9_cp1

0xc60c,	// (0x0006791a) form_field_slider_pane_t3

0xc61a,	// (0x00067928) form_field_slider_pane_t4

0x2a43,	// (0x0005dd51) slider_form_pane_ParamLimits

0x2a43,	// (0x0005dd51) slider_form_pane

0x5ce5,	// (0x00060ff3) control_abbreviations

0x5ce5,	// (0x00060ff3) control_conventions

0x5ce5,	// (0x00060ff3) control_definitions

0x5ce5,	// (0x00060ff3) format_table_attribute

0x322f,	// (0x0005e53d) bg_popup_preview_window_pane_g9

0x5ce5,	// (0x00060ff3) format_table_data2

0x5ce5,	// (0x00060ff3) format_table_data3

0x5ce5,	// (0x00060ff3) format_table_data_example

0x0008,

0x5ce5,	// (0x00060ff3) intro_purpose

0xf8ef,	// (0x0006abfd) bg_popup_preview_window_pane_g

0x5ce5,	// (0x00060ff3) texts_category

0x5ce5,	// (0x00060ff3) texts_graphics

0xe95d,	// (0x00069c6b) text_digital

0xe96c,	// (0x00069c7a) text_primary

0xe97b,	// (0x00069c89) text_primary_small

0xe98a,	// (0x00069c98) text_secondary

0xe999,	// (0x00069ca7) text_title

0x3b50,	// (0x0005ee5e) bg_passive_tab_pane_g1_cp3_srt

0x9042,	// (0x00064350) bg_passive_tab_pane_g2_cp3_srt

0x3b59,	// (0x0005ee67) bg_passive_tab_pane_g3_cp3_srt

0x5e72,	// (0x00061180) bg_active_tab_pane_cp3_srt_ParamLimits

0x5e72,	// (0x00061180) bg_active_tab_pane_cp3_srt

0x3b62,	// (0x0005ee70) tabs_4_active_pane_srt_g1

0xcaa4,	// (0x00067db2) tabs_4_active_pane_srt_t1_ParamLimits

0xcaa4,	// (0x00067db2) tabs_4_active_pane_srt_t1

0x3b50,	// (0x0005ee5e) bg_active_tab_pane_g1_cp3_copy1

0x9042,	// (0x00064350) bg_active_tab_pane_g2_cp3_copy1

0x3b59,	// (0x0005ee67) bg_active_tab_pane_g3_cp3_copy1

0x5d3f,	// (0x0006104d) tabs_2_long_active_pane_srt_ParamLimits

0x5d3f,	// (0x0006104d) tabs_2_long_active_pane_srt

0x5d3f,	// (0x0006104d) tabs_2_long_passive_pane_srt_ParamLimits

0x5d3f,	// (0x0006104d) tabs_2_long_passive_pane_srt

0x016a,	// (0x0005b478) bg_passive_tab_pane_cp4_srt_ParamLimits

0x016a,	// (0x0005b478) bg_passive_tab_pane_cp4_srt

0x366b,	// (0x0005e979) bg_passive_tab_pane_g1_cp4_srt

0x9042,	// (0x00064350) bg_passive_tab_pane_g2_cp4_srt

0x3674,	// (0x0005e982) bg_passive_tab_pane_g3_cp4_srt

0x5d3f,	// (0x0006104d) bg_active_tab_pane_cp4_srt_ParamLimits

0x5d3f,	// (0x0006104d) bg_active_tab_pane_cp4_srt

0xc881,	// (0x00067b8f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc881,	// (0x00067b8f) tabs_2_long_active_pane_srt_t1

0x366b,	// (0x0005e979) bg_active_tab_pane_g1_cp4_srt

0x9042,	// (0x00064350) bg_active_tab_pane_g2_cp4_srt

0x3674,	// (0x0005e982) bg_active_tab_pane_g3_cp4_srt

0x5e72,	// (0x00061180) tabs_3_long_active_pane_srt_ParamLimits

0x5e72,	// (0x00061180) tabs_3_long_active_pane_srt

0x5e72,	// (0x00061180) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x5e72,	// (0x00061180) tabs_3_long_passive_pane_cp_srt

0x5e72,	// (0x00061180) tabs_3_long_passive_pane_srt_ParamLimits

0x5e72,	// (0x00061180) tabs_3_long_passive_pane_srt

0x016a,	// (0x0005b478) bg_passive_tab_pane_cp5_srt_ParamLimits

0x016a,	// (0x0005b478) bg_passive_tab_pane_cp5_srt

0x9089,	// (0x00064397) bg_passive_tab_pane_g1_cp5_srt

0x9042,	// (0x00064350) bg_passive_tab_pane_g2_cp5_srt

0x9092,	// (0x000643a0) bg_passive_tab_pane_g3_cp5_srt

0x5d3f,	// (0x0006104d) bg_active_tab_pane_cp5_srt_ParamLimits

0x5d3f,	// (0x0006104d) bg_active_tab_pane_cp5_srt

0xc86b,	// (0x00067b79) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc86b,	// (0x00067b79) tabs_3_long_active_pane_srt_t1

0x9089,	// (0x00064397) bg_active_tab_pane_g1_cp5_srt

0x9042,	// (0x00064350) bg_active_tab_pane_g2_cp5_srt

0x9092,	// (0x000643a0) bg_active_tab_pane_g3_cp5_srt

0x364b,	// (0x0005e959) navi_text_pane_srt_t1

0x3643,	// (0x0005e951) navi_icon_pane_srt_g1

0xeaa3,	// (0x00069db1) midp_editing_number_pane_srt

0xe9a8,	// (0x00069cb6) midp_ticker_pane_srt

0xeaab,	// (0x00069db9) midp_ticker_pane_srt_g1

0xeab3,	// (0x00069dc1) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0006aa85) midp_ticker_pane_srt_g

0xeabb,	// (0x00069dc9) midp_ticker_pane_srt_t1

0x3634,	// (0x0005e942) midp_editing_number_pane_t1_copy1

0x016a,	// (0x0005b478) listscroll_midp_pane

0x016a,	// (0x0005b478) midp_form_pane

0xe9b0,	// (0x00069cbe) midp_info_popup_window_ParamLimits

0xe9b0,	// (0x00069cbe) midp_info_popup_window

0x8a48,	// (0x00063d56) bg_popup_sub_pane_cp50_ParamLimits

0x8a48,	// (0x00063d56) bg_popup_sub_pane_cp50

0x273d,	// (0x0005da4b) listscroll_midp_info_pane_ParamLimits

0x273d,	// (0x0005da4b) listscroll_midp_info_pane

0x2725,	// (0x0005da33) listscroll_form_midp_pane_ParamLimits

0x2725,	// (0x0005da33) listscroll_form_midp_pane

0x2731,	// (0x0005da3f) scroll_bar_cp050

0xc600,	// (0x0006790e) list_midp_pane

0x45e5,	// (0x0005f8f3) signal_pane_g2_cp

0x263f,	// (0x0005d94d) listscroll_midp_info_pane_t1_ParamLimits

0x263f,	// (0x0005d94d) listscroll_midp_info_pane_t1

0x2657,	// (0x0005d965) listscroll_midp_info_pane_t2_ParamLimits

0x2657,	// (0x0005d965) listscroll_midp_info_pane_t2

0x2695,	// (0x0005d9a3) listscroll_midp_info_pane_t3_ParamLimits

0x2695,	// (0x0005d9a3) listscroll_midp_info_pane_t3

0x26cf,	// (0x0005d9dd) listscroll_midp_info_pane_t4_ParamLimits

0x26cf,	// (0x0005d9dd) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0006ab38) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0006ab38) listscroll_midp_info_pane_t

0x8ac8,	// (0x00063dd6) scroll_pane_cp21

0x25d9,	// (0x0005d8e7) form_midp_field_choice_group_pane

0x25e2,	// (0x0005d8f0) form_midp_field_text_pane

0x2625,	// (0x0005d933) form_midp_field_time_pane

0x262d,	// (0x0005d93b) form_midp_gauge_slider_pane

0x2636,	// (0x0005d944) form_midp_gauge_wait_pane

0x5ce5,	// (0x00060ff3) form_midp_image_pane

0xbb30,	// (0x00066e3e) list_single_midp_pane_ParamLimits

0xbb30,	// (0x00066e3e) list_single_midp_pane

0xc5d8,	// (0x000678e6) form_midp_field_text_pane_t1

0x2389,	// (0x0005d697) input_focus_pane_cp050

0x25c8,	// (0x0005d8d6) list_midp_form_text_pane

0x256c,	// (0x0005d87a) form_midp_field_choice_group_pane_t1

0x257a,	// (0x0005d888) input_focus_pane_cp051

0x258e,	// (0x0005d89c) list_midp_choice_pane

0x5ce5,	// (0x00060ff3) status_idle_pane

0x2550,	// (0x0005d85e) form_midp_field_time_pane_t1

0x5cdb,	// (0x00060fe9) wait_anim_pane_g2_copy1

0x255e,	// (0x0005d86c) form_midp_field_time_pane_t2

0x0001,

0xea0b,	// (0x00069d19) aid_navinavi_width_2_pane

0xf825,	// (0x0006ab33) form_midp_field_time_pane_t

0x5ce5,	// (0x00060ff3) input_focus_pane_cp052

0x5ce5,	// (0x00060ff3) bg_input_focus_pane_cp040

0x2510,	// (0x0005d81e) form_midp_gauge_slider_pane_t1

0x251e,	// (0x0005d82c) form_midp_gauge_slider_pane_t2

0xc5bc,	// (0x000678ca) form_midp_gauge_slider_pane_t3

0xc5ca,	// (0x000678d8) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0006ab2a) form_midp_gauge_slider_pane_t

0x2548,	// (0x0005d856) form_midp_slider_pane

0x5d3f,	// (0x0006104d) bg_input_focus_pane_cp041_ParamLimits

0x5d3f,	// (0x0006104d) bg_input_focus_pane_cp041

0x24dd,	// (0x0005d7eb) form_midp_gauge_wait_pane_t1_ParamLimits

0x24dd,	// (0x0005d7eb) form_midp_gauge_wait_pane_t1

0x24ef,	// (0x0005d7fd) form_midp_gauge_wait_pane_t2_ParamLimits

0x24ef,	// (0x0005d7fd) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0006ab25) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0006ab25) form_midp_gauge_wait_pane_t

0x2501,	// (0x0005d80f) form_midp_wait_pane_ParamLimits

0x2501,	// (0x0005d80f) form_midp_wait_pane

0x24a5,	// (0x0005d7b3) form_midp_image_pane_g1

0x24ae,	// (0x0005d7bc) form_midp_image_pane_t1

0x24bd,	// (0x0005d7cb) form_midp_image_pane_t2

0x24cc,	// (0x0005d7da) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0006ab1e) form_midp_image_pane_t

0x249c,	// (0x0005d7aa) list_single_midp_pane_g1

0xec4b,	// (0x00069f59) list_single_midp_pane_t1

0xbb19,	// (0x00066e27) list_midp_form_item_pane_ParamLimits

0xbb19,	// (0x00066e27) list_midp_form_item_pane

0xe9c5,	// (0x00069cd3) list_midp_form_item_pane_t1

0xe9d4,	// (0x00069ce2) midp_ticker_pane_g1

0xe9e0,	// (0x00069cee) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0006aa6b) midp_ticker_pane_g

0xac9c,	// (0x00065faa) midp_ticker_pane_t1

0xca10,	// (0x00067d1e) midp_editing_number_pane_t1

0x3885,	// (0x0005eb93) midp_editing_number_pane

0x3894,	// (0x0005eba2) midp_ticker_pane

0x3624,	// (0x0005e932) ai_message_heading_pane

0x5ce5,	// (0x00060ff3) bg_popup_window_pane_cp14

0x362c,	// (0x0005e93a) listscroll_ai_message_pane

0x35aa,	// (0x0005e8b8) ai_message_heading_pane_g1_ParamLimits

0x35aa,	// (0x0005e8b8) ai_message_heading_pane_g1

0x35b6,	// (0x0005e8c4) ai_message_heading_pane_g2_ParamLimits

0x35b6,	// (0x0005e8c4) ai_message_heading_pane_g2

0x35c4,	// (0x0005e8d2) ai_message_heading_pane_g3_ParamLimits

0x35c4,	// (0x0005e8d2) ai_message_heading_pane_g3

0x35d0,	// (0x0005e8de) ai_message_heading_pane_g4_ParamLimits

0x35d0,	// (0x0005e8de) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0006ac5f) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0006ac5f) ai_message_heading_pane_g

0x35dc,	// (0x0005e8ea) ai_message_heading_pane_t1_ParamLimits

0x35dc,	// (0x0005e8ea) ai_message_heading_pane_t1

0x35f6,	// (0x0005e904) ai_message_heading_pane_t2_ParamLimits

0x35f6,	// (0x0005e904) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0006ac68) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0006ac68) ai_message_heading_pane_t

0x360a,	// (0x0005e918) bg_popup_heading_pane_cp1_ParamLimits

0x360a,	// (0x0005e918) bg_popup_heading_pane_cp1

0x3598,	// (0x0005e8a6) list_ai_message_pane_ParamLimits

0x3598,	// (0x0005e8a6) list_ai_message_pane

0x8ac8,	// (0x00063dd6) scroll_pane_cp10

0x3534,	// (0x0005e842) list_ai_message_pane_g1

0x353c,	// (0x0005e84a) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0006ac3c) list_ai_message_pane_g

0x3544,	// (0x0005e852) list_ai_message_pane_t1_ParamLimits

0x3544,	// (0x0005e852) list_ai_message_pane_t1

0x3559,	// (0x0005e867) list_ai_message_pane_t2_ParamLimits

0x3559,	// (0x0005e867) list_ai_message_pane_t2

0x356e,	// (0x0005e87c) list_ai_message_pane_t3_ParamLimits

0x356e,	// (0x0005e87c) list_ai_message_pane_t3

0x3583,	// (0x0005e891) list_ai_message_pane_t4_ParamLimits

0x3583,	// (0x0005e891) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0006ac41) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0006ac41) list_ai_message_pane_t

0xc851,	// (0x00067b5f) cell_ai_soft_ind_pane_ParamLimits

0xc851,	// (0x00067b5f) cell_ai_soft_ind_pane

0xe9ec,	// (0x00069cfa) cell_ai_soft_ind_pane_g1_ParamLimits

0xe9ec,	// (0x00069cfa) cell_ai_soft_ind_pane_g1

0x5ce5,	// (0x00060ff3) grid_highlight_cp1

0xe9f9,	// (0x00069d07) text_secondary_cp56_ParamLimits

0xe9f9,	// (0x00069d07) text_secondary_cp56

0x34f2,	// (0x0005e800) example_general_pane_ParamLimits

0x34f2,	// (0x0005e800) example_general_pane

0x34fe,	// (0x0005e80c) example_parent_pane_g1_ParamLimits

0x34fe,	// (0x0005e80c) example_parent_pane_g1

0x350a,	// (0x0005e818) example_parent_pane_t1_ParamLimits

0x350a,	// (0x0005e818) example_parent_pane_t1

0xb32c,	// (0x0006663a) popup_preview_text_window_ParamLimits

0xb32c,	// (0x0006663a) popup_preview_text_window

0xe8f1,	// (0x00069bff) list_single_pane_cp2_g4

0x5f28,	// (0x00061236) bg_popup_preview_window_pane_ParamLimits

0x5f28,	// (0x00061236) bg_popup_preview_window_pane

0x3239,	// (0x0005e547) popup_preview_text_window_t1_ParamLimits

0x3239,	// (0x0005e547) popup_preview_text_window_t1

0x3257,	// (0x0005e565) popup_preview_text_window_t2_ParamLimits

0x3257,	// (0x0005e565) popup_preview_text_window_t2

0x32a0,	// (0x0005e5ae) popup_preview_text_window_t3_ParamLimits

0x32a0,	// (0x0005e5ae) popup_preview_text_window_t3

0x32e5,	// (0x0005e5f3) popup_preview_text_window_t4_ParamLimits

0x32e5,	// (0x0005e5f3) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0006ac10) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0006ac10) popup_preview_text_window_t

0x3363,	// (0x0005e671) scroll_pane_cp11

0x2315,	// (0x0005d623) bg_popup_preview_window_pane_g1

0x31ed,	// (0x0005e4fb) bg_popup_preview_window_pane_g2

0x31f7,	// (0x0005e505) bg_popup_preview_window_pane_g3

0x3201,	// (0x0005e50f) bg_popup_preview_window_pane_g4

0x320b,	// (0x0005e519) bg_popup_preview_window_pane_g5

0x3215,	// (0x0005e523) bg_popup_preview_window_pane_g6

0x321d,	// (0x0005e52b) bg_popup_preview_window_pane_g7

0x3225,	// (0x0005e533) bg_popup_preview_window_pane_g8

0xe66b,	// (0x00069979) aid_popup_width_pane

0xb29c,	// (0x000665aa) popup_midp_note_alarm_window_ParamLimits

0xb29c,	// (0x000665aa) popup_midp_note_alarm_window

0x8990,	// (0x00063c9e) data_form_pane_ParamLimits

0xa6e9,	// (0x000659f7) form_field_data_pane_g1

0xa6f3,	// (0x00065a01) form_field_data_pane_t1_ParamLimits

0x899c,	// (0x00063caa) input_focus_pane_ParamLimits

0xc534,	// (0x00067842) data_form_wide_pane_ParamLimits

0xc545,	// (0x00067853) form_field_data_wide_pane_g1

0xc551,	// (0x0006785f) form_field_data_wide_pane_t1_ParamLimits

0x60dd,	// (0x000613eb) input_focus_pane_cp6_ParamLimits

0xa834,	// (0x00065b42) input_popup_find_pane_g1_ParamLimits

0xa834,	// (0x00065b42) input_popup_find_pane_g1

0xf1b8,	// (0x0006a4c6) aid_navi_side_left_pane

0xf1cd,	// (0x0006a4db) aid_navi_side_right_pane

0x2c02,	// (0x0005df10) bg_popup_window_pane_cp30_ParamLimits

0x2c02,	// (0x0005df10) bg_popup_window_pane_cp30

0x2c7c,	// (0x0005df8a) popup_midp_note_alarm_window_g1_ParamLimits

0x2c7c,	// (0x0005df8a) popup_midp_note_alarm_window_g1

0x2cac,	// (0x0005dfba) popup_midp_note_alarm_window_t1_ParamLimits

0x2cac,	// (0x0005dfba) popup_midp_note_alarm_window_t1

0x2d4d,	// (0x0005e05b) popup_midp_note_alarm_window_t2_ParamLimits

0x2d4d,	// (0x0005e05b) popup_midp_note_alarm_window_t2

0x2dfb,	// (0x0005e109) popup_midp_note_alarm_window_t3_ParamLimits

0x2dfb,	// (0x0005e109) popup_midp_note_alarm_window_t3

0x2e2d,	// (0x0005e13b) popup_midp_note_alarm_window_t4_ParamLimits

0x2e2d,	// (0x0005e13b) popup_midp_note_alarm_window_t4

0x2e53,	// (0x0005e161) popup_midp_note_alarm_window_t5_ParamLimits

0x2e53,	// (0x0005e161) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0006abad) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0006abad) popup_midp_note_alarm_window_t

0x2eff,	// (0x0005e20d) wait_bar_pane_cp1_ParamLimits

0x2eff,	// (0x0005e20d) wait_bar_pane_cp1

0x5ce5,	// (0x00060ff3) wait_anim_pane_copy1

0x5ce5,	// (0x00060ff3) wait_border_pane_copy1

0x28e7,	// (0x0005dbf5) wait_border_pane_g1_copy1

0xc56b,	// (0x00067879) form_field_popup_pane_g1

0xa70d,	// (0x00065a1b) form_field_popup_pane_t1_ParamLimits

0x899c,	// (0x00063caa) input_focus_pane_cp7_ParamLimits

0x89ca,	// (0x00063cd8) list_form_pane_ParamLimits

0xc573,	// (0x00067881) form_field_popup_wide_pane_g1

0xc57b,	// (0x00067889) form_field_popup_wide_pane_t1_ParamLimits

0x899c,	// (0x00063caa) input_focus_pane_cp8_ParamLimits

0x89d6,	// (0x00063ce4) list_form_wide_pane_ParamLimits

0x3bdd,	// (0x0005eeeb) aid_size_cell_graphic_pane

0xa78c,	// (0x00065a9a) data_form_pane_t1_ParamLimits

0xbcc5,	// (0x00066fd3) data_form_wide_pane_t1_ParamLimits

0xb730,	// (0x00066a3e) bg_status_flat_pane

0x9e4e,	// (0x0006515c) title_pane_t1_ParamLimits

0x5d07,	// (0x00061015) title_pane_t2_ParamLimits

0x5d2d,	// (0x0006103b) title_pane_t3_ParamLimits

0xf557,	// (0x0006a865) title_pane_t_ParamLimits

0xa944,	// (0x00065c52) level_1_signal_ParamLimits

0xa956,	// (0x00065c64) level_2_signal_ParamLimits

0xa969,	// (0x00065c77) level_3_signal_ParamLimits

0xa97c,	// (0x00065c8a) level_4_signal_ParamLimits

0xa98f,	// (0x00065c9d) level_5_signal_ParamLimits

0xa9a2,	// (0x00065cb0) level_6_signal_ParamLimits

0xa9b5,	// (0x00065cc3) level_7_signal_ParamLimits

0xa944,	// (0x00065c52) level_1_battery_ParamLimits

0xa956,	// (0x00065c64) level_2_battery_ParamLimits

0xa969,	// (0x00065c77) level_3_battery_ParamLimits

0xa97c,	// (0x00065c8a) level_4_battery_ParamLimits

0xa98f,	// (0x00065c9d) level_5_battery_ParamLimits

0xa9a2,	// (0x00065cb0) level_6_battery_ParamLimits

0xa9b5,	// (0x00065cc3) level_7_battery_ParamLimits

0x2b07,	// (0x0005de15) bg_status_flat_pane_g1

0x2b0f,	// (0x0005de1d) bg_status_flat_pane_g2

0x2b17,	// (0x0005de25) bg_status_flat_pane_g3

0x2b1f,	// (0x0005de2d) bg_status_flat_pane_g4

0x2b27,	// (0x0005de35) bg_status_flat_pane_g5

0x2b2f,	// (0x0005de3d) bg_status_flat_pane_g6

0x2b37,	// (0x0005de45) bg_status_flat_pane_g7

0x9ee2,	// (0x000651f0) tabs_3_active_pane_t1_ParamLimits

0x9ee2,	// (0x000651f0) tabs_3_passive_pane_t1_ParamLimits

0x9efc,	// (0x0006520a) tabs_4_active_pane_t1_ParamLimits

0x9efc,	// (0x0006520a) tabs_4_1_passive_pane_t1_ParamLimits

0xa84a,	// (0x00065b58) tabs_2_active_pane_t1_ParamLimits

0xa84a,	// (0x00065b58) tabs_2_passive_pane_t1_ParamLimits

0x5d3f,	// (0x0006104d) bg_active_tab_pane_cp4_ParamLimits

0xa85c,	// (0x00065b6a) tabs_2_long_active_pane_t1_ParamLimits

0x016a,	// (0x0005b478) bg_passive_tab_pane_cp4_ParamLimits

0x0334,	// (0x0005b642) list_single_midp_graphic_pane_t1_ParamLimits

0x5d3f,	// (0x0006104d) bg_active_tab_pane_cp5_ParamLimits

0xa86f,	// (0x00065b7d) tabs_3_long_active_pane_t1_ParamLimits

0x016a,	// (0x0005b478) bg_passive_tab_pane_cp5_ParamLimits

0x0334,	// (0x0005b642) list_single_midp_graphic_pane_t1

0xb730,	// (0x00066a3e) bg_status_flat_pane_ParamLimits

0x1f8d,	// (0x0005d29b) indicator_pane_cp2_ParamLimits

0x1f8d,	// (0x0005d29b) indicator_pane_cp2

0xb8c6,	// (0x00066bd4) navi_pane_srt_ParamLimits

0xb8c6,	// (0x00066bd4) navi_pane_srt

0x20f4,	// (0x0005d402) popup_clock_digital_analogue_window_cp1

0x5d83,	// (0x00061091) indicator_pane_t1

0xe9a8,	// (0x00069cb6) copy_highlight_pane

0xe9a8,	// (0x00069cb6) cursor_graphics_pane

0xe9a8,	// (0x00069cb6) graphic_within_text_pane

0xe9a8,	// (0x00069cb6) link_highlight_pane

0x3326,	// (0x0005e634) popup_preview_text_window_t5_ParamLimits

0x3326,	// (0x0005e634) popup_preview_text_window_t5

0xea15,	// (0x00069d23) cursor_digital_pane

0xea15,	// (0x00069d23) cursor_primary_pane

0xea26,	// (0x00069d34) cursor_primary_small_pane

0xea2e,	// (0x00069d3c) cursor_secondary_pane

0xea36,	// (0x00069d44) cursor_title_pane

0xea15,	// (0x00069d23) link_highlight_digital_pane

0xea1d,	// (0x00069d2b) link_highlight_primary_pane

0xea26,	// (0x00069d34) link_highlight_primary_small_pane

0xea2e,	// (0x00069d3c) link_highlight_secondary_pane

0xea36,	// (0x00069d44) link_highlight_title_pane

0xea15,	// (0x00069d23) copy_highlight_digital_pane

0xea15,	// (0x00069d23) copy_highlight_primary_pane

0xea26,	// (0x00069d34) copy_highlight_primary_small_pane

0xea2e,	// (0x00069d3c) copy_highlight_secondary_pane

0xea36,	// (0x00069d44) copy_highlight_title_pane

0xea2e,	// (0x00069d3c) graphic_text_digital_pane

0x2ba5,	// (0x0005deb3) graphic_text_primary_pane

0x2bae,	// (0x0005debc) graphic_text_primary_small_pane

0xea26,	// (0x00069d34) graphic_text_secondary_pane

0xea15,	// (0x00069d23) graphic_text_title_pane

0xacae,	// (0x00065fbc) cursor_primary_pane_g1

0x2b97,	// (0x0005dea5) cursor_text_primary_t1

0xc63c,	// (0x0006794a) cursor_primary_small_pane_g1

0x2b89,	// (0x0005de97) cursor_text_primary_small_t1

0xc632,	// (0x00067940) cursor_primary_small_pane_g1_copy1

0x2b71,	// (0x0005de7f) cursor_text_primary_small_t1_copy1

0x2b4f,	// (0x0005de5d) cursor_text_title_t1

0xc628,	// (0x00067936) cursor_title_pane_g1

0xacae,	// (0x00065fbc) cursor_digital_pane_g1

0xea3e,	// (0x00069d4c) cursor_text_digital_t1

0xea4c,	// (0x00069d5a) link_highlight_primary_pane_g1

0x2af8,	// (0x0005de06) link_highlight_primary_pane_t1

0xea4c,	// (0x00069d5a) link_highlight_primary_small_pane_g1

0xea54,	// (0x00069d62) link_highlight_primary_small_pane_t1

0xea63,	// (0x00069d71) link_highlight_secondary_pane_g1

0xea6b,	// (0x00069d79) link_highlight_secondary_pane_t1

0x2a6c,	// (0x0005dd7a) link_highlight_title_pane_g1

0x2a74,	// (0x0005dd82) link_highlight_title_pane_t1

0x2a55,	// (0x0005dd63) link_highlight_digital_pane_g1

0x2a5d,	// (0x0005dd6b) link_highlight_digital_pane_t1

0x291d,	// (0x0005dc2b) copy_highlight_primary_pane_g1

0x2934,	// (0x0005dc42) copy_highlight_primary_pane_t1

0x291d,	// (0x0005dc2b) copy_highlight_primary_small_pane_g1

0x2925,	// (0x0005dc33) copy_highlight_primary_small_pane_t1

0xea7a,	// (0x00069d88) copy_highlight_secondary_pane_g1

0xea82,	// (0x00069d90) copy_highlight_secondary_pane_t1

0x2906,	// (0x0005dc14) copy_highlight_title_pane_g1

0x290e,	// (0x0005dc1c) copy_highlight_title_pane_t1

0x291d,	// (0x0005dc2b) copy_highlight_digital_pane_g1

0x3dad,	// (0x0005f0bb) copy_highlight_digital_pane_t1

0x3d01,	// (0x0005f00f) graphic_text_primary_pane_g1

0x3d91,	// (0x0005f09f) graphic_text_primary_pane_t1

0x3d9f,	// (0x0005f0ad) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0006acdc) graphic_text_primary_pane_t

0x3d6d,	// (0x0005f07b) graphic_text_primary_small_pane_g1

0x3d75,	// (0x0005f083) graphic_text_primary_small_pane_t1

0x3d83,	// (0x0005f091) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0006acd7) graphic_text_primary_small_pane_t

0x3d49,	// (0x0005f057) graphic_text_secondary_pane_g1

0x3d51,	// (0x0005f05f) graphic_text_secondary_pane_t1

0x3d5f,	// (0x0005f06d) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0006acd2) graphic_text_secondary_pane_t

0x3d25,	// (0x0005f033) graphic_text_title_pane_g1

0x3d2d,	// (0x0005f03b) graphic_text_title_pane_t1

0x3d3b,	// (0x0005f049) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0006accd) graphic_text_title_pane_t

0x3d01,	// (0x0005f00f) graphic_text_digital_pane_g1

0x3d09,	// (0x0005f017) graphic_text_digital_pane_t1

0x3d17,	// (0x0005f025) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0006acc8) graphic_text_digital_pane_t

0x5d3f,	// (0x0006104d) navi_icon_pane_srt_ParamLimits

0x5d3f,	// (0x0006104d) navi_icon_pane_srt

0x5ce5,	// (0x00060ff3) navi_midp_pane_srt

0x5ce5,	// (0x00060ff3) navi_navi_pane_srt

0x5d3f,	// (0x0006104d) navi_text_pane_srt_ParamLimits

0x5d3f,	// (0x0006104d) navi_text_pane_srt

0x3ccc,	// (0x0005efda) navi_navi_icon_text_pane_srt

0x3cd4,	// (0x0005efe2) navi_navi_pane_srt_g1_ParamLimits

0x3cd4,	// (0x0005efe2) navi_navi_pane_srt_g1

0x3ce6,	// (0x0005eff4) navi_navi_pane_srt_g2_ParamLimits

0x3ce6,	// (0x0005eff4) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0006acc3) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0006acc3) navi_navi_pane_srt_g

0x3cf8,	// (0x0005f006) navi_navi_tabs_pane_srt

0x3ccc,	// (0x0005efda) navi_navi_text_pane_srt

0x3ccc,	// (0x0005efda) navi_navi_volume_pane_srt

0x3cbd,	// (0x0005efcb) navi_navi_text_pane_srt_t1

0x07bb,	// (0x0005bac9) navi_navi_volume_pane_srt_g1

0x07c3,	// (0x0005bad1) volume_small_pane_srt_ParamLimits

0x07c3,	// (0x0005bad1) volume_small_pane_srt

0xf496,	// (0x0006a7a4) volume_small_pane_srt_g1_ParamLimits

0xf496,	// (0x0006a7a4) volume_small_pane_srt_g1

0xf4a6,	// (0x0006a7b4) volume_small_pane_srt_g2_ParamLimits

0xf4a6,	// (0x0006a7b4) volume_small_pane_srt_g2

0xf4b7,	// (0x0006a7c5) volume_small_pane_srt_g3_ParamLimits

0xf4b7,	// (0x0006a7c5) volume_small_pane_srt_g3

0xf4c8,	// (0x0006a7d6) volume_small_pane_srt_g4_ParamLimits

0xf4c8,	// (0x0006a7d6) volume_small_pane_srt_g4

0xf4d9,	// (0x0006a7e7) volume_small_pane_srt_g5_ParamLimits

0xf4d9,	// (0x0006a7e7) volume_small_pane_srt_g5

0xf4ea,	// (0x0006a7f8) volume_small_pane_srt_g6_ParamLimits

0xf4ea,	// (0x0006a7f8) volume_small_pane_srt_g6

0xf4fb,	// (0x0006a809) volume_small_pane_srt_g7_ParamLimits

0xf4fb,	// (0x0006a809) volume_small_pane_srt_g7

0xf50c,	// (0x0006a81a) volume_small_pane_srt_g8_ParamLimits

0xf50c,	// (0x0006a81a) volume_small_pane_srt_g8

0xf51d,	// (0x0006a82b) volume_small_pane_srt_g9_ParamLimits

0xf51d,	// (0x0006a82b) volume_small_pane_srt_g9

0xf52e,	// (0x0006a83c) volume_small_pane_srt_g10_ParamLimits

0xf52e,	// (0x0006a83c) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0006aa70) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0006aa70) volume_small_pane_srt_g

0x5fdd,	// (0x000612eb) query_popup_data_pane_cp2

0x3ca3,	// (0x0005efb1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3ca3,	// (0x0005efb1) navi_navi_icon_text_pane_srt_t1

0x2ba5,	// (0x0005deb3) navi_tabs_2_long_pane_srt

0x2ba5,	// (0x0005deb3) navi_tabs_2_pane_srt

0x2ba5,	// (0x0005deb3) navi_tabs_3_long_pane_srt

0x2ba5,	// (0x0005deb3) navi_tabs_3_pane_srt

0x2ba5,	// (0x0005deb3) navi_tabs_4_pane_srt

0x079b,	// (0x0005baa9) tabs_2_active_pane_srt_ParamLimits

0x079b,	// (0x0005baa9) tabs_2_active_pane_srt

0x07ab,	// (0x0005bab9) tabs_2_passive_pane_srt_ParamLimits

0x07ab,	// (0x0005bab9) tabs_2_passive_pane_srt

0x2389,	// (0x0005d697) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2389,	// (0x0005d697) bg_passive_tab_pane_cp1_srt

0x3c6f,	// (0x0005ef7d) bg_passive_tab_pane_g1_cp1_srt

0x9042,	// (0x00064350) bg_passive_tab_pane_g2_cp1_srt

0x3c78,	// (0x0005ef86) bg_passive_tab_pane_g3_cp1_srt

0x5e72,	// (0x00061180) bg_active_tab_pane_cp1_srt_ParamLimits

0x5e72,	// (0x00061180) bg_active_tab_pane_cp1_srt

0x3c81,	// (0x0005ef8f) tabs_2_active_pane_srt_g1

0xcb25,	// (0x00067e33) tabs_2_active_pane_srt_t1_ParamLimits

0xcb25,	// (0x00067e33) tabs_2_active_pane_srt_t1

0x3c6f,	// (0x0005ef7d) bg_active_tab_pane_g1_cp1_srt

0x9042,	// (0x00064350) bg_active_tab_pane_g2_cp1_srt

0x3c78,	// (0x0005ef86) bg_active_tab_pane_g3_cp1_srt

0x0768,	// (0x0005ba76) tabs_3_active_pane_srt_ParamLimits

0x0768,	// (0x0005ba76) tabs_3_active_pane_srt

0x0779,	// (0x0005ba87) tabs_3_passive_pane_cp_srt_ParamLimits

0x0779,	// (0x0005ba87) tabs_3_passive_pane_cp_srt

0x078a,	// (0x0005ba98) tabs_3_passive_pane_srt_ParamLimits

0x078a,	// (0x0005ba98) tabs_3_passive_pane_srt

0x2389,	// (0x0005d697) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2389,	// (0x0005d697) bg_passive_tab_pane_cp2_srt

0xea91,	// (0x00069d9f) bg_passive_tab_pane_g1_cp2_srt

0x9042,	// (0x00064350) bg_passive_tab_pane_g2_cp2_srt

0xea9a,	// (0x00069da8) bg_passive_tab_pane_g3_cp2_srt

0x5e72,	// (0x00061180) bg_active_tab_pane_cp2_srt_ParamLimits

0x5e72,	// (0x00061180) bg_active_tab_pane_cp2_srt

0x3c55,	// (0x0005ef63) tabs_3_active_pane_srt_g1

0xcb0f,	// (0x00067e1d) tabs_3_active_pane_srt_t1_ParamLimits

0xcb0f,	// (0x00067e1d) tabs_3_active_pane_srt_t1

0xea91,	// (0x00069d9f) bg_active_tab_pane_g1_cp2_srt

0x9042,	// (0x00064350) bg_active_tab_pane_g2_cp2_srt

0xea9a,	// (0x00069da8) bg_active_tab_pane_g3_cp2_srt

0x0720,	// (0x0005ba2e) tabs_4_active_pane_srt_ParamLimits

0x0720,	// (0x0005ba2e) tabs_4_active_pane_srt

0x0732,	// (0x0005ba40) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0732,	// (0x0005ba40) tabs_4_passive_pane_cp2_srt

0x00f8,	// (0x0005b406) aid_size_cell_toolbar

0x36de,	// (0x0005e9ec) main_idle_act_pane_ParamLimits

0x199d,	// (0x0005ccab) popup_large_graphic_colour_window_ParamLimits

0xb5f2,	// (0x00066900) popup_toolbar_window_ParamLimits

0xb5f2,	// (0x00066900) popup_toolbar_window

0x38b6,	// (0x0005ebc4) list_single_graphic_2heading_pane_ParamLimits

0x38b6,	// (0x0005ebc4) list_single_graphic_2heading_pane

0x8ca0,	// (0x00063fae) aid_size_cell_apps_grid_lsc_pane

0x8cb2,	// (0x00063fc0) aid_size_cell_apps_grid_prt_pane

0x016a,	// (0x0005b478) bg_wml_button_pane_cp1_ParamLimits

0x016a,	// (0x0005b478) bg_wml_button_pane_cp1

0xc5d8,	// (0x000678e6) form_midp_field_text_pane_t1_ParamLimits

0x2389,	// (0x0005d697) input_focus_pane_cp050_ParamLimits

0x25c8,	// (0x0005d8d6) list_midp_form_text_pane_ParamLimits

0x257a,	// (0x0005d888) input_focus_pane_cp051_ParamLimits

0x258e,	// (0x0005d89c) list_midp_choice_pane_ParamLimits

0xbb03,	// (0x00066e11) list_single_2graphic_pane_cp3_ParamLimits

0xbb03,	// (0x00066e11) list_single_2graphic_pane_cp3

0x4908,	// (0x0005fc16) list_single_midp_graphic_pane_ParamLimits

0x4908,	// (0x0005fc16) list_single_midp_graphic_pane

0xeb23,	// (0x00069e31) list_single_graphic_2heading_pane_g1_ParamLimits

0xeb23,	// (0x00069e31) list_single_graphic_2heading_pane_g1

0xeb2f,	// (0x00069e3d) list_single_graphic_2heading_pane_g4_ParamLimits

0xeb2f,	// (0x00069e3d) list_single_graphic_2heading_pane_g4

0xeb3b,	// (0x00069e49) list_single_graphic_2heading_pane_g5_ParamLimits

0xeb3b,	// (0x00069e49) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0006aac3) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0006aac3) list_single_graphic_2heading_pane_g

0xeb47,	// (0x00069e55) list_single_graphic_2heading_pane_t1_ParamLimits

0xeb47,	// (0x00069e55) list_single_graphic_2heading_pane_t1

0xeb5b,	// (0x00069e69) list_single_graphic_2heading_pane_t2_ParamLimits

0xeb5b,	// (0x00069e69) list_single_graphic_2heading_pane_t2

0xeb77,	// (0x00069e85) list_single_graphic_2heading_pane_t3_ParamLimits

0xeb77,	// (0x00069e85) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0006aaca) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0006aaca) list_single_graphic_2heading_pane_t

0x2253,	// (0x0005d561) bg_popup_sub_pane_cp2

0x227d,	// (0x0005d58b) grid_toobar_pane

0x0298,	// (0x0005b5a6) cell_toolbar_pane_ParamLimits

0x0298,	// (0x0005b5a6) cell_toolbar_pane

0x22b9,	// (0x0005d5c7) cell_toolbar_pane_g1_ParamLimits

0x22b9,	// (0x0005d5c7) cell_toolbar_pane_g1

0x22cd,	// (0x0005d5db) cell_toolbar_pane_g2_ParamLimits

0x22cd,	// (0x0005d5db) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0006aad8) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0006aad8) cell_toolbar_pane_g

0x22ef,	// (0x0005d5fd) grid_highlight_pane_cp2_ParamLimits

0x22ef,	// (0x0005d5fd) grid_highlight_pane_cp2

0x2309,	// (0x0005d617) toolbar_button_pane

0x2315,	// (0x0005d623) toolbar_button_pane_g1

0x231d,	// (0x0005d62b) toolbar_button_pane_g2

0x2325,	// (0x0005d633) toolbar_button_pane_g3

0x232d,	// (0x0005d63b) toolbar_button_pane_g4

0x2335,	// (0x0005d643) toolbar_button_pane_g5

0x233d,	// (0x0005d64b) toolbar_button_pane_g6

0x2345,	// (0x0005d653) toolbar_button_pane_g7

0x234d,	// (0x0005d65b) toolbar_button_pane_g8

0x2355,	// (0x0005d663) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0006aadd) toolbar_button_pane_g

0x02dc,	// (0x0005b5ea) list_single_2graphic_pane_g1_cp3_ParamLimits

0x02dc,	// (0x0005b5ea) list_single_2graphic_pane_g1_cp3

0xba65,	// (0x00066d73) list_single_2graphic_pane_g2_cp3_ParamLimits

0xba65,	// (0x00066d73) list_single_2graphic_pane_g2_cp3

0x02f9,	// (0x0005b607) list_single_2graphic_pane_g3_cp3

0x0301,	// (0x0005b60f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0301,	// (0x0005b60f) list_single_2graphic_pane_g4_cp3

0x030d,	// (0x0005b61b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x030d,	// (0x0005b61b) list_single_2graphic_pane_t1_cp3

0x0328,	// (0x0005b636) list_single_midp_graphic_pane_g2_ParamLimits

0x0328,	// (0x0005b636) list_single_midp_graphic_pane_g2

0xeb0b,	// (0x00069e19) aid_zoom_text_primary

0xeb13,	// (0x00069e21) aid_zoom_text_secondary

0xad06,	// (0x00066014) status_small_pane_g7_ParamLimits

0xad06,	// (0x00066014) status_small_pane_g7

0xad29,	// (0x00066037) status_small_pane_t1_ParamLimits

0x9e36,	// (0x00065144) title_pane_g2

0x0003,

0xf54e,	// (0x0006a85c) title_pane_g

0xa0c2,	// (0x000653d0) aid_size_cell_colour_1_pane_ParamLimits

0xa0c2,	// (0x000653d0) aid_size_cell_colour_1_pane

0xa0d6,	// (0x000653e4) aid_size_cell_colour_2_pane_ParamLimits

0xa0d6,	// (0x000653e4) aid_size_cell_colour_2_pane

0xa0ea,	// (0x000653f8) aid_size_cell_colour_3_pane_ParamLimits

0xa0ea,	// (0x000653f8) aid_size_cell_colour_3_pane

0xa0fe,	// (0x0006540c) aid_size_cell_colour_4_pane_ParamLimits

0xa0fe,	// (0x0006540c) aid_size_cell_colour_4_pane

0xf0f4,	// (0x0006a402) title_pane_stacon_g1_ParamLimits

0xf0f4,	// (0x0006a402) title_pane_stacon_g1

0x298b,	// (0x0005dc99) popup_note_wait_window_g3_ParamLimits

0x298b,	// (0x0005dc99) popup_note_wait_window_g3

0x2a02,	// (0x0005dd10) popup_note_wait_window_t5_ParamLimits

0x2a02,	// (0x0005dd10) popup_note_wait_window_t5

0x5ce5,	// (0x00060ff3) main_feb_china_hwr_fs_writing_pane

0xaf89,	// (0x00066297) popup_feb_china_hwr_fs_window_ParamLimits

0xaf89,	// (0x00066297) popup_feb_china_hwr_fs_window

0xba76,	// (0x00066d84) aid_size_cell_hwr_fs_ParamLimits

0xba76,	// (0x00066d84) aid_size_cell_hwr_fs

0x2389,	// (0x0005d697) bg_popup_sub_pane_cp3_ParamLimits

0x2389,	// (0x0005d697) bg_popup_sub_pane_cp3

0xba8b,	// (0x00066d99) grid_hwr_fs_pane_ParamLimits

0xba8b,	// (0x00066d99) grid_hwr_fs_pane

0x038f,	// (0x0005b69d) linegrid_hwr_fs_pane_ParamLimits

0x038f,	// (0x0005b69d) linegrid_hwr_fs_pane

0xbaa3,	// (0x00066db1) cell_hwr_fs_pane_ParamLimits

0xbaa3,	// (0x00066db1) cell_hwr_fs_pane

0x2395,	// (0x0005d6a3) linegrid_hwr_fs_pane_g1_ParamLimits

0x2395,	// (0x0005d6a3) linegrid_hwr_fs_pane_g1

0xbac9,	// (0x00066dd7) linegrid_hwr_fs_pane_g2_ParamLimits

0xbac9,	// (0x00066dd7) linegrid_hwr_fs_pane_g2

0x23b3,	// (0x0005d6c1) linegrid_hwr_fs_pane_g3_ParamLimits

0x23b3,	// (0x0005d6c1) linegrid_hwr_fs_pane_g3

0x03c3,	// (0x0005b6d1) linegrid_hwr_fs_pane_g4_ParamLimits

0x03c3,	// (0x0005b6d1) linegrid_hwr_fs_pane_g4

0x03e1,	// (0x0005b6ef) linegrid_hwr_fs_pane_g5_ParamLimits

0x03e1,	// (0x0005b6ef) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0006ab03) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0006ab03) linegrid_hwr_fs_pane_g

0x23bf,	// (0x0005d6cd) cell_hwr_fs_pane_g1_ParamLimits

0x23bf,	// (0x0005d6cd) cell_hwr_fs_pane_g1

0x218a,	// (0x0005d498) cell_hwr_fs_pane_g2_ParamLimits

0x218a,	// (0x0005d498) cell_hwr_fs_pane_g2

0xbadb,	// (0x00066de9) cell_hwr_fs_pane_g3_ParamLimits

0xbadb,	// (0x00066de9) cell_hwr_fs_pane_g3

0xbae8,	// (0x00066df6) cell_hwr_fs_pane_g4_ParamLimits

0xbae8,	// (0x00066df6) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0006ab0e) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0006ab0e) cell_hwr_fs_pane_g

0xbaf5,	// (0x00066e03) cell_hwr_fs_pane_t1

0x5ce5,	// (0x00060ff3) grid_highlight_pane_cp6

0x5ce5,	// (0x00060ff3) main_idle_act2_pane

0x8aaf,	// (0x00063dbd) aid_inside_area_popup_secondary

0xc6a3,	// (0x000679b1) aid_inside_area_window_primary_ParamLimits

0xc6a3,	// (0x000679b1) aid_inside_area_window_primary

0x3dbc,	// (0x0005f0ca) ai2_news_ticker_pane

0x3dc4,	// (0x0005f0d2) aid_size_cell_ai1_link_ParamLimits

0x3dc4,	// (0x0005f0d2) aid_size_cell_ai1_link

0x3dde,	// (0x0005f0ec) popup_ai2_data_window_ParamLimits

0x3dde,	// (0x0005f0ec) popup_ai2_data_window

0x3dfc,	// (0x0005f10a) popup_ai2_link_window_ParamLimits

0x3dfc,	// (0x0005f10a) popup_ai2_link_window

0x2389,	// (0x0005d697) bg_popup_sub_pane_cp4_ParamLimits

0x2389,	// (0x0005d697) bg_popup_sub_pane_cp4

0x3e12,	// (0x0005f120) grid_ai2_link_pane_ParamLimits

0x3e12,	// (0x0005f120) grid_ai2_link_pane

0x3e29,	// (0x0005f137) popup_ai2_link_window_g1_ParamLimits

0x3e29,	// (0x0005f137) popup_ai2_link_window_g1

0x3e35,	// (0x0005f143) popup_ai2_link_window_g2_ParamLimits

0x3e35,	// (0x0005f143) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0006ace1) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0006ace1) popup_ai2_link_window_g

0x3e46,	// (0x0005f154) ai2_mp_button_pane

0x3e4e,	// (0x0005f15c) ai2_mp_volume_pane

0x257a,	// (0x0005d888) bg_popup_sub_pane_cp5_ParamLimits

0x257a,	// (0x0005d888) bg_popup_sub_pane_cp5

0x3e56,	// (0x0005f164) heading_ai2_gene_pane_ParamLimits

0x3e56,	// (0x0005f164) heading_ai2_gene_pane

0x3e62,	// (0x0005f170) list_ai2_gene_pane_ParamLimits

0x3e62,	// (0x0005f170) list_ai2_gene_pane

0x3eaa,	// (0x0005f1b8) cell_ai2_link_pane_ParamLimits

0x3eaa,	// (0x0005f1b8) cell_ai2_link_pane

0x3ec0,	// (0x0005f1ce) cell_ai2_link_pane_g1

0x5ce5,	// (0x00060ff3) grid_highlight_pane_cp7

0x07d8,	// (0x0005bae6) ai2_mp_volume_pane_g1

0x3f93,	// (0x0005f2a1) ai2_mp_volume_pane_g2

0x3f08,	// (0x0005f216) list_ai2_gene_pane_t1

0x3f9b,	// (0x0005f2a9) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0006acfa) ai2_mp_volume_pane_g

0x07e0,	// (0x0005baee) volume_small_pane_cp3

0x3fa3,	// (0x0005f2b1) aid_size_cell_ai2_button

0x3fab,	// (0x0005f2b9) grid_ai2_button_pane

0x3fb4,	// (0x0005f2c2) cell_ai2_button_pane_ParamLimits

0x3fb4,	// (0x0005f2c2) cell_ai2_button_pane

0x5cdb,	// (0x00060fe9) cell_ai2_button_pane_g1

0x5ce5,	// (0x00060ff3) grid_highlight_pane_cp8

0x3f53,	// (0x0005f261) ai2_gene_pane_t1_ParamLimits

0x3f53,	// (0x0005f261) ai2_gene_pane_t1

0xaee7,	// (0x000661f5) aid_height_parent_landscape

0xc898,	// (0x00067ba6) aid_height_set_list

0x36de,	// (0x0005e9ec) aid_size_parent

0x3bdd,	// (0x0005eeeb) aid_size_cell_graphic_pane_ParamLimits

0x3e72,	// (0x0005f180) popup_ai2_data_window_g1_ParamLimits

0x3e72,	// (0x0005f180) popup_ai2_data_window_g1

0x3e7e,	// (0x0005f18c) ai2_news_ticker_pane_g1

0x3e86,	// (0x0005f194) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0006ace6) ai2_news_ticker_pane_g

0x3e8e,	// (0x0005f19c) ai2_news_ticker_pane_t1

0x3e9c,	// (0x0005f1aa) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0006aceb) ai2_news_ticker_pane_t

0x3ec9,	// (0x0005f1d7) heading_ai2_gene_pane_g1

0x3ed1,	// (0x0005f1df) heading_ai2_gene_pane_t1_ParamLimits

0x3ed1,	// (0x0005f1df) heading_ai2_gene_pane_t1

0x3ee6,	// (0x0005f1f4) list_highlight_pane_cp6

0x3eee,	// (0x0005f1fc) ai2_gene_pane_ParamLimits

0x3eee,	// (0x0005f1fc) ai2_gene_pane

0x3f16,	// (0x0005f224) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0006acf0) list_ai2_gene_pane_t

0x3f24,	// (0x0005f232) list_highlight_pane_cp8_ParamLimits

0x3f24,	// (0x0005f232) list_highlight_pane_cp8

0x3f35,	// (0x0005f243) ai2_gene_pane_g1_ParamLimits

0x3f35,	// (0x0005f243) ai2_gene_pane_g1

0x3f47,	// (0x0005f255) ai2_gene_pane_g2_ParamLimits

0x3f47,	// (0x0005f255) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0006acf5) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0006acf5) ai2_gene_pane_g

0x62f8,	// (0x00061606) scroll_pane_cp12

0xaea6,	// (0x000661b4) control_pane_t3_ParamLimits

0xaea6,	// (0x000661b4) control_pane_t3

0xad1a,	// (0x00066028) status_small_pane_g8_ParamLimits

0xad1a,	// (0x00066028) status_small_pane_g8

0xb02b,	// (0x00066339) popup_find_window_ParamLimits

0xb2dc,	// (0x000665ea) popup_note_image_window_ParamLimits

0xeb8f,	// (0x00069e9d) list_double2_graphic_pane_vc_g1_ParamLimits

0xeb8f,	// (0x00069e9d) list_double2_graphic_pane_vc_g1

0xc48f,	// (0x0006779d) list_double2_graphic_pane_vc_g2_ParamLimits

0xc48f,	// (0x0006779d) list_double2_graphic_pane_vc_g2

0x02c8,	// (0x0005b5d6) list_double2_graphic_pane_vc_g3_ParamLimits

0x02c8,	// (0x0005b5d6) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0006aad1) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0006aad1) list_double2_graphic_pane_vc_g

0xeb9b,	// (0x00069ea9) list_double2_graphic_pane_vc_t1_ParamLimits

0xeb9b,	// (0x00069ea9) list_double2_graphic_pane_vc_t1

0xc48f,	// (0x0006779d) list_single_heading_pane_vc_g1_ParamLimits

0xc48f,	// (0x0006779d) list_single_heading_pane_vc_g1

0x02c8,	// (0x0005b5d6) list_single_heading_pane_vc_g2_ParamLimits

0x02c8,	// (0x0005b5d6) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a8e0) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a8e0) list_single_heading_pane_vc_g

0xebb1,	// (0x00069ebf) list_single_heading_pane_vc_t1_ParamLimits

0xebb1,	// (0x00069ebf) list_single_heading_pane_vc_t1

0xebc9,	// (0x00069ed7) list_single_heading_pane_vc_t2_ParamLimits

0xebc9,	// (0x00069ed7) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0006aaf2) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0006aaf2) list_single_heading_pane_vc_t

0x034a,	// (0x0005b658) list_setting_number_pane_vc_g1_ParamLimits

0x034a,	// (0x0005b658) list_setting_number_pane_vc_g1

0x0356,	// (0x0005b664) list_setting_number_pane_vc_g2_ParamLimits

0x0356,	// (0x0005b664) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0006aaf7) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0006aaf7) list_setting_number_pane_vc_g

0xebdb,	// (0x00069ee9) list_setting_number_pane_vc_t1_ParamLimits

0xebdb,	// (0x00069ee9) list_setting_number_pane_vc_t1

0xebef,	// (0x00069efd) list_setting_number_pane_vc_t2_ParamLimits

0xebef,	// (0x00069efd) list_setting_number_pane_vc_t2

0xec0b,	// (0x00069f19) list_setting_number_pane_vc_t3_ParamLimits

0xec0b,	// (0x00069f19) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0006aafc) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0006aafc) list_setting_number_pane_vc_t

0xec39,	// (0x00069f47) set_value_pane_vc_ParamLimits

0xec39,	// (0x00069f47) set_value_pane_vc

0x38b6,	// (0x0005ebc4) list_double2_graphic_pane_vc_ParamLimits

0x38b6,	// (0x0005ebc4) list_double2_graphic_pane_vc

0x38b6,	// (0x0005ebc4) list_double2_large_graphic_pane_vc_ParamLimits

0x38b6,	// (0x0005ebc4) list_double2_large_graphic_pane_vc

0x38b6,	// (0x0005ebc4) list_double2_pane_vc_ParamLimits

0x38b6,	// (0x0005ebc4) list_double2_pane_vc

0x38b6,	// (0x0005ebc4) list_double_graphic_heading_pane_vc_ParamLimits

0x38b6,	// (0x0005ebc4) list_double_graphic_heading_pane_vc

0x38b6,	// (0x0005ebc4) list_double_graphic_pane_vc_ParamLimits

0x38b6,	// (0x0005ebc4) list_double_graphic_pane_vc

0x38b6,	// (0x0005ebc4) list_double_heading_pane_vc_ParamLimits

0x38b6,	// (0x0005ebc4) list_double_heading_pane_vc

0x38ca,	// (0x0005ebd8) list_double_large_graphic_pane_vc_ParamLimits

0x38ca,	// (0x0005ebd8) list_double_large_graphic_pane_vc

0x38b6,	// (0x0005ebc4) list_double_number_pane_vc_ParamLimits

0x38b6,	// (0x0005ebc4) list_double_number_pane_vc

0x38b6,	// (0x0005ebc4) list_double_pane_vc_ParamLimits

0x38b6,	// (0x0005ebc4) list_double_pane_vc

0x38b6,	// (0x0005ebc4) list_double_time_pane_vc_ParamLimits

0x38b6,	// (0x0005ebc4) list_double_time_pane_vc

0x38b6,	// (0x0005ebc4) list_setting_number_pane_vc_ParamLimits

0x38b6,	// (0x0005ebc4) list_setting_number_pane_vc

0x38b6,	// (0x0005ebc4) list_setting_pane_vc_ParamLimits

0x38b6,	// (0x0005ebc4) list_setting_pane_vc

0x38b6,	// (0x0005ebc4) list_single_graphic_heading_pane_vc_ParamLimits

0x38b6,	// (0x0005ebc4) list_single_graphic_heading_pane_vc

0x38b6,	// (0x0005ebc4) list_single_heading_pane_vc_ParamLimits

0x38b6,	// (0x0005ebc4) list_single_heading_pane_vc

0x38b6,	// (0x0005ebc4) list_single_number_heading_pane_vc_ParamLimits

0x38b6,	// (0x0005ebc4) list_single_number_heading_pane_vc

0xeb8f,	// (0x00069e9d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xeb8f,	// (0x00069e9d) list_double_graphic_heading_pane_vc_g1

0x3964,	// (0x0005ec72) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3964,	// (0x0005ec72) list_double_graphic_heading_pane_vc_g2

0x3970,	// (0x0005ec7e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3970,	// (0x0005ec7e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x0006ad01) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x0006ad01) list_double_graphic_heading_pane_vc_g

0xec70,	// (0x00069f7e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xec70,	// (0x00069f7e) list_double_graphic_heading_pane_vc_t1

0xec86,	// (0x00069f94) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xec86,	// (0x00069f94) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0006ad08) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0006ad08) list_double_graphic_heading_pane_vc_t

0x034a,	// (0x0005b658) list_setting_pane_vc_g1_ParamLimits

0x034a,	// (0x0005b658) list_setting_pane_vc_g1

0x0356,	// (0x0005b664) list_setting_pane_vc_g2_ParamLimits

0x0356,	// (0x0005b664) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0006aaf7) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0006aaf7) list_setting_pane_vc_g

0xeca4,	// (0x00069fb2) list_setting_pane_vc_t1_ParamLimits

0xeca4,	// (0x00069fb2) list_setting_pane_vc_t1

0xecc0,	// (0x00069fce) list_setting_pane_vc_t2_ParamLimits

0xecc0,	// (0x00069fce) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0006ad4b) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0006ad4b) list_setting_pane_vc_t

0xec39,	// (0x00069f47) set_value_pane_cp_vc_ParamLimits

0xec39,	// (0x00069f47) set_value_pane_cp_vc

0xc48f,	// (0x0006779d) list_single_number_heading_pane_vc_g1_ParamLimits

0xc48f,	// (0x0006779d) list_single_number_heading_pane_vc_g1

0x02c8,	// (0x0005b5d6) list_single_number_heading_pane_vc_g2_ParamLimits

0x02c8,	// (0x0005b5d6) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a8e0) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a8e0) list_single_number_heading_pane_vc_g

0xebb1,	// (0x00069ebf) list_single_number_heading_pane_vc_t1_ParamLimits

0xebb1,	// (0x00069ebf) list_single_number_heading_pane_vc_t1

0xecdc,	// (0x00069fea) list_single_number_heading_pane_vc_t2_ParamLimits

0xecdc,	// (0x00069fea) list_single_number_heading_pane_vc_t2

0xc4b1,	// (0x000677bf) list_single_number_heading_pane_vc_t3_ParamLimits

0xc4b1,	// (0x000677bf) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0006ad50) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0006ad50) list_single_number_heading_pane_vc_t

0xeb8f,	// (0x00069e9d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeb8f,	// (0x00069e9d) list_single_graphic_heading_pane_vc_g1

0xc48f,	// (0x0006779d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc48f,	// (0x0006779d) list_single_graphic_heading_pane_vc_g4

0x02c8,	// (0x0005b5d6) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x02c8,	// (0x0005b5d6) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0006aad1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0006aad1) list_single_graphic_heading_pane_vc_g

0xebb1,	// (0x00069ebf) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xebb1,	// (0x00069ebf) list_single_graphic_heading_pane_vc_t1

0xecee,	// (0x00069ffc) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xecee,	// (0x00069ffc) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0006ad57) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0006ad57) list_single_graphic_heading_pane_vc_t

0xc48f,	// (0x0006779d) list_double2_pane_vc_g1_ParamLimits

0xc48f,	// (0x0006779d) list_double2_pane_vc_g1

0x02c8,	// (0x0005b5d6) list_double2_pane_vc_g2_ParamLimits

0x02c8,	// (0x0005b5d6) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a8e0) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a8e0) list_double2_pane_vc_g

0xec5a,	// (0x00069f68) list_double2_pane_vc_t1_ParamLimits

0xec5a,	// (0x00069f68) list_double2_pane_vc_t1

0x397c,	// (0x0005ec8a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x397c,	// (0x0005ec8a) list_double2_large_graphic_pane_vc_g1

0xc48f,	// (0x0006779d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc48f,	// (0x0006779d) list_double2_large_graphic_pane_vc_g2

0x02c8,	// (0x0005b5d6) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x02c8,	// (0x0005b5d6) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0006a8f8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0006a8f8) list_double2_large_graphic_pane_vc_g

0xc49b,	// (0x000677a9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc49b,	// (0x000677a9) list_double2_large_graphic_pane_vc_t1

0x3988,	// (0x0005ec96) list_double_time_pane_vc_g1_ParamLimits

0x3988,	// (0x0005ec96) list_double_time_pane_vc_g1

0x3994,	// (0x0005eca2) list_double_time_pane_vc_g2_ParamLimits

0x3994,	// (0x0005eca2) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0006ad5c) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0006ad5c) list_double_time_pane_vc_g

0xed00,	// (0x0006a00e) list_double_time_pane_vc_t1_ParamLimits

0xed00,	// (0x0006a00e) list_double_time_pane_vc_t1

0xed2a,	// (0x0006a038) list_double_time_pane_vc_t2_ParamLimits

0xed2a,	// (0x0006a038) list_double_time_pane_vc_t2

0xed73,	// (0x0006a081) list_double_time_pane_vc_t3_ParamLimits

0xed73,	// (0x0006a081) list_double_time_pane_vc_t3

0xed85,	// (0x0006a093) list_double_time_pane_vc_t4_ParamLimits

0xed85,	// (0x0006a093) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0006ad61) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0006ad61) list_double_time_pane_vc_t

0xc48f,	// (0x0006779d) list_double_pane_vc_g1_ParamLimits

0xc48f,	// (0x0006779d) list_double_pane_vc_g1

0x02c8,	// (0x0005b5d6) list_double_pane_vc_g2_ParamLimits

0x02c8,	// (0x0005b5d6) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a8e0) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a8e0) list_double_pane_vc_g

0xedaa,	// (0x0006a0b8) list_double_pane_vc_t1_ParamLimits

0xedaa,	// (0x0006a0b8) list_double_pane_vc_t1

0xedbe,	// (0x0006a0cc) list_double_pane_vc_t2_ParamLimits

0xedbe,	// (0x0006a0cc) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0006ad6a) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0006ad6a) list_double_pane_vc_t

0xc48f,	// (0x0006779d) list_double_number_pane_vc_g1_ParamLimits

0xc48f,	// (0x0006779d) list_double_number_pane_vc_g1

0x02c8,	// (0x0005b5d6) list_double_number_pane_vc_g2_ParamLimits

0x02c8,	// (0x0005b5d6) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a8e0) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a8e0) list_double_number_pane_vc_g

0xedd4,	// (0x0006a0e2) list_double_number_pane_vc_t1_ParamLimits

0xedd4,	// (0x0006a0e2) list_double_number_pane_vc_t1

0xede8,	// (0x0006a0f6) list_double_number_pane_vc_t2_ParamLimits

0xede8,	// (0x0006a0f6) list_double_number_pane_vc_t2

0xedfc,	// (0x0006a10a) list_double_number_pane_vc_t3_ParamLimits

0xedfc,	// (0x0006a10a) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0006ad6f) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0006ad6f) list_double_number_pane_vc_t

0x39a0,	// (0x0005ecae) list_double_large_graphic_pane_vc_g1_ParamLimits

0x39a0,	// (0x0005ecae) list_double_large_graphic_pane_vc_g1

0x39c8,	// (0x0005ecd6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x39c8,	// (0x0005ecd6) list_double_large_graphic_pane_vc_g2

0x39dc,	// (0x0005ecea) list_double_large_graphic_pane_vc_g3_ParamLimits

0x39dc,	// (0x0005ecea) list_double_large_graphic_pane_vc_g3

0xee12,	// (0x0006a120) list_double_large_graphic_pane_vc_g4_ParamLimits

0xee12,	// (0x0006a120) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0006ad76) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0006ad76) list_double_large_graphic_pane_vc_g

0xee22,	// (0x0006a130) list_double_large_graphic_pane_vc_t1_ParamLimits

0xee22,	// (0x0006a130) list_double_large_graphic_pane_vc_t1

0xee44,	// (0x0006a152) list_double_large_graphic_pane_vc_t2_ParamLimits

0xee44,	// (0x0006a152) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0006ad7f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0006ad7f) list_double_large_graphic_pane_vc_t

0x3964,	// (0x0005ec72) list_double_heading_pane_vc_g1_ParamLimits

0x3964,	// (0x0005ec72) list_double_heading_pane_vc_g1

0x3970,	// (0x0005ec7e) list_double_heading_pane_vc_g2_ParamLimits

0x3970,	// (0x0005ec7e) list_double_heading_pane_vc_g2

0x0001,

0xfa76,	// (0x0006ad84) list_double_heading_pane_vc_g_ParamLimits

0xfa76,	// (0x0006ad84) list_double_heading_pane_vc_g

0xee64,	// (0x0006a172) list_double_heading_pane_vc_t1_ParamLimits

0xee64,	// (0x0006a172) list_double_heading_pane_vc_t1

0xebb1,	// (0x00069ebf) list_double_heading_pane_vc_t2_ParamLimits

0xebb1,	// (0x00069ebf) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x0006ad89) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0006ad89) list_double_heading_pane_vc_t

0xee76,	// (0x0006a184) list_double_graphic_pane_vc_g1_ParamLimits

0xee76,	// (0x0006a184) list_double_graphic_pane_vc_g1

0x39eb,	// (0x0005ecf9) list_double_graphic_pane_vc_g2_ParamLimits

0x39eb,	// (0x0005ecf9) list_double_graphic_pane_vc_g2

0xc48f,	// (0x0006779d) list_double_graphic_pane_vc_g3_ParamLimits

0xc48f,	// (0x0006779d) list_double_graphic_pane_vc_g3

0x0003,

0xfa80,	// (0x0006ad8e) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x0006ad8e) list_double_graphic_pane_vc_g

0xee82,	// (0x0006a190) list_double_graphic_pane_vc_t1_ParamLimits

0xee82,	// (0x0006a190) list_double_graphic_pane_vc_t1

0xeeac,	// (0x0006a1ba) list_double_graphic_pane_vc_t2_ParamLimits

0xeeac,	// (0x0006a1ba) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x0006ad97) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x0006ad97) list_double_graphic_pane_vc_t

0xe677,	// (0x00069985) aid_size_cell_fastswap

0x9c0f,	// (0x00064f1d) aid_size_cell_touch_ParamLimits

0x9c0f,	// (0x00064f1d) aid_size_cell_touch

0xe7fe,	// (0x00069b0c) popup_fast_swap_wide_window_ParamLimits

0xe7fe,	// (0x00069b0c) popup_fast_swap_wide_window

0x9dcd,	// (0x000650db) touch_pane_ParamLimits

0x9dcd,	// (0x000650db) touch_pane

0x8988,	// (0x00063c96) button_value_adjust_pane_cp2

0xc4dd,	// (0x000677eb) button_value_adjust_pane_cp4

0xc4e5,	// (0x000677f3) form_field_data_pane_cp2

0xa6bd,	// (0x000659cb) form_field_data_wide_pane_cp2

0x8cee,	// (0x00063ffc) bg_scroll_pane_ParamLimits

0xf250,	// (0x0006a55e) scroll_handle_pane_ParamLimits

0xf264,	// (0x0006a572) scroll_sc2_down_pane_ParamLimits

0xf264,	// (0x0006a572) scroll_sc2_down_pane

0x8d1f,	// (0x0006402d) scroll_sc2_up_pane_ParamLimits

0x8d1f,	// (0x0006402d) scroll_sc2_up_pane

0xcc7c,	// (0x00067f8a) grid_wheel_folder_pane_g1_ParamLimits

0xcc7c,	// (0x00067f8a) grid_wheel_folder_pane_g1

0xf42e,	// (0x0006a73c) clock_nsta_pane_cp2_ParamLimits

0xf42e,	// (0x0006a73c) clock_nsta_pane_cp2

0x016a,	// (0x0005b478) listscroll_midp_pane_ParamLimits

0xac05,	// (0x00065f13) midp_canvas_pane

0x00e6,	// (0x0005b3f4) nsta_clock_indic_pane

0x0134,	// (0x0005b442) listscroll_form_pane_vc

0x0158,	// (0x0005b466) listscroll_set_pane_vc_ParamLimits

0x0158,	// (0x0005b466) listscroll_set_pane_vc

0xb758,	// (0x00066a66) clock_nsta_pane

0xb782,	// (0x00066a90) indicator_nsta_pane

0x2253,	// (0x0005d561) bg_popup_sub_pane_cp2_ParamLimits

0x2267,	// (0x0005d575) find_pane_cp2_ParamLimits

0x2267,	// (0x0005d575) find_pane_cp2

0x227d,	// (0x0005d58b) grid_toobar_pane_ParamLimits

0x235d,	// (0x0005d66b) list_form_gen_pane_vc_ParamLimits

0x235d,	// (0x0005d66b) list_form_gen_pane_vc

0x2373,	// (0x0005d681) scroll_pane_cp8_vc_ParamLimits

0x2373,	// (0x0005d681) scroll_pane_cp8_vc

0x23ef,	// (0x0005d6fd) data_form_wide_pane_vc_ParamLimits

0x23ef,	// (0x0005d6fd) data_form_wide_pane_vc

0x23fb,	// (0x0005d709) form_field_data_wide_pane_vc_g1

0x2403,	// (0x0005d711) form_field_data_wide_pane_vc_t1_ParamLimits

0x2403,	// (0x0005d711) form_field_data_wide_pane_vc_t1

0x899c,	// (0x00063caa) input_focus_pane_cp6_vc_ParamLimits

0x899c,	// (0x00063caa) input_focus_pane_cp6_vc

0xc600,	// (0x0006790e) list_midp_pane_ParamLimits

0x3c49,	// (0x0005ef57) scroll_pane_cp16_ParamLimits

0x3c49,	// (0x0005ef57) scroll_pane_cp16

0x275f,	// (0x0005da6d) button_value_adjust_pane_ParamLimits

0x275f,	// (0x0005da6d) button_value_adjust_pane

0xc8a9,	// (0x00067bb7) button_value_adjust_pane_cp6_ParamLimits

0xc8a9,	// (0x00067bb7) button_value_adjust_pane_cp6

0xc9eb,	// (0x00067cf9) settings_code_pane_cp_ParamLimits

0xc9eb,	// (0x00067cf9) settings_code_pane_cp

0x5cdb,	// (0x00060fe9) cell_touch_pane_g1

0x5cdb,	// (0x00060fe9) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0006aa16) cell_touch_pane_g

0xcb3b,	// (0x00067e49) cell_touch_pane_cp_ParamLimits

0xcb3b,	// (0x00067e49) cell_touch_pane_cp

0xcb57,	// (0x00067e65) cell_touch_pane_ParamLimits

0xcb57,	// (0x00067e65) cell_touch_pane

0x5cdb,	// (0x00060fe9) scroll_sc2_down_pane_g1

0x5cdb,	// (0x00060fe9) scroll_sc2_up_pane_g1

0x5ce5,	// (0x00060ff3) bg_set_opt_pane_cp4_vc

0x3fe7,	// (0x0005f2f5) list_set_graphic_pane_vc_g1_ParamLimits

0x3fe7,	// (0x0005f2f5) list_set_graphic_pane_vc_g1

0xcb75,	// (0x00067e83) list_set_graphic_pane_vc_g2_ParamLimits

0xcb75,	// (0x00067e83) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0006ad0d) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0006ad0d) list_set_graphic_pane_vc_g

0x3ff3,	// (0x0005f301) text_primary_small_cp13_vc_ParamLimits

0x3ff3,	// (0x0005f301) text_primary_small_cp13_vc

0x400b,	// (0x0005f319) list_set_graphic_pane_vc_ParamLimits

0x400b,	// (0x0005f319) list_set_graphic_pane_vc

0x5ce5,	// (0x00060ff3) input_focus_pane_cp2_vc

0x5cdb,	// (0x00060fe9) setting_code_pane_vc_g1

0x5d56,	// (0x00061064) setting_code_pane_vc_t1

0x4020,	// (0x0005f32e) set_text_pane_vc_t1_ParamLimits

0x4020,	// (0x0005f32e) set_text_pane_vc_t1

0x5ce5,	// (0x00060ff3) input_focus_pane_cp1_vc

0x403e,	// (0x0005f34c) list_set_text_pane_vc

0x5cdb,	// (0x00060fe9) setting_text_pane_vc_g1

0x5ce5,	// (0x00060ff3) bg_set_opt_pane_cp2_vc

0x5d4d,	// (0x0006105b) setting_slider_graphic_pane_vc_g1

0x4048,	// (0x0005f356) setting_slider_graphic_pane_vc_t1

0x405a,	// (0x0005f368) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0006ad12) setting_slider_graphic_pane_vc_t

0x406c,	// (0x0005f37a) slider_set_pane_cp_vc

0x4076,	// (0x0005f384) slider_set_pane_vc_g1

0x407f,	// (0x0005f38d) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0006ad17) slider_set_pane_vc_g

0x89f7,	// (0x00063d05) set_opt_bg_pane_g1_copy1

0x89ff,	// (0x00063d0d) set_opt_bg_pane_g2_copy1

0x40ab,	// (0x0005f3b9) set_opt_bg_pane_g3_copy1

0x8a0f,	// (0x00063d1d) set_opt_bg_pane_g4_copy1

0x8a17,	// (0x00063d25) set_opt_bg_pane_g5_copy1

0x8a1f,	// (0x00063d2d) set_opt_bg_pane_g6_copy1

0x40b5,	// (0x0005f3c3) set_opt_bg_pane_g7_copy1

0x40bf,	// (0x0005f3cd) set_opt_bg_pane_g8_copy1

0x40c9,	// (0x0005f3d7) set_opt_bg_pane_g9_copy1

0x5ce5,	// (0x00060ff3) bg_set_opt_pane_cp_vc

0x40d3,	// (0x0005f3e1) setting_slider_pane_vc_t1

0x40e2,	// (0x0005f3f0) setting_slider_pane_vc_t2

0x40f4,	// (0x0005f402) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0006ad26) setting_slider_pane_vc_t

0x4106,	// (0x0005f414) slider_set_pane_vc

0x0424,	// (0x0005b732) volume_set_pane_vc_g1

0x042d,	// (0x0005b73b) volume_set_pane_vc_g2

0x0436,	// (0x0005b744) volume_set_pane_vc_g3

0x043f,	// (0x0005b74d) volume_set_pane_vc_g4

0x0448,	// (0x0005b756) volume_set_pane_vc_g5

0x0451,	// (0x0005b75f) volume_set_pane_vc_g6

0x045a,	// (0x0005b768) volume_set_pane_vc_g7

0x0463,	// (0x0005b771) volume_set_pane_vc_g8

0x046c,	// (0x0005b77a) volume_set_pane_vc_g9

0x0475,	// (0x0005b783) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0006ad2d) volume_set_pane_vc_g

0x4110,	// (0x0005f41e) volume_set_pane_vc

0x411a,	// (0x0005f428) button_value_adjust_pane_cp1_vc

0x4124,	// (0x0005f432) list_highlight_pane_cp2_vc

0x412d,	// (0x0005f43b) list_set_pane_vc_ParamLimits

0x412d,	// (0x0005f43b) list_set_pane_vc

0x419d,	// (0x0005f4ab) main_pane_set_vc_t1_ParamLimits

0x419d,	// (0x0005f4ab) main_pane_set_vc_t1

0x41b2,	// (0x0005f4c0) main_pane_set_vc_t2_ParamLimits

0x41b2,	// (0x0005f4c0) main_pane_set_vc_t2

0x41c4,	// (0x0005f4d2) main_pane_set_vc_t3_ParamLimits

0x41c4,	// (0x0005f4d2) main_pane_set_vc_t3

0x41d8,	// (0x0005f4e6) main_pane_set_vc_t4_ParamLimits

0x41d8,	// (0x0005f4e6) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0006ad42) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0006ad42) main_pane_set_vc_t

0x41ec,	// (0x0005f4fa) setting_code_pane_vc_ParamLimits

0x41ec,	// (0x0005f4fa) setting_code_pane_vc

0x41fd,	// (0x0005f50b) setting_slider_graphic_pane_vc

0x41fd,	// (0x0005f50b) setting_slider_pane_vc

0x41fd,	// (0x0005f50b) setting_text_pane_vc

0x41fd,	// (0x0005f50b) setting_volume_pane_vc

0x4207,	// (0x0005f515) scroll_pane_cp121_vc

0x8976,	// (0x00063c84) set_content_pane_vc

0x420f,	// (0x0005f51d) button_value_adjust_pane_g1

0x4218,	// (0x0005f526) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x0006ad9c) button_value_adjust_pane_g

0x4221,	// (0x0005f52f) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4221,	// (0x0005f52f) form_field_slider_wide_pane_vc_t1

0x4233,	// (0x0005f541) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4233,	// (0x0005f541) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa93,	// (0x0006ada1) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x0006ada1) form_field_slider_wide_pane_vc_t

0x5e72,	// (0x00061180) input_focus_pane_cp10_vc_ParamLimits

0x5e72,	// (0x00061180) input_focus_pane_cp10_vc

0x425f,	// (0x0005f56d) slider_cont_pane_cp1_vc_ParamLimits

0x425f,	// (0x0005f56d) slider_cont_pane_cp1_vc

0x4271,	// (0x0005f57f) slider_form_pane_g1_cp2

0x407f,	// (0x0005f38d) slider_form_pane_g2_cp2

0x429e,	// (0x0005f5ac) form_field_slider_pane_vc_t3

0x42ac,	// (0x0005f5ba) form_field_slider_pane_vc_t4

0x42ba,	// (0x0005f5c8) slider_form_pane_vc_ParamLimits

0x42ba,	// (0x0005f5c8) slider_form_pane_vc

0x42c7,	// (0x0005f5d5) form_field_slider_pane_vc_t1_ParamLimits

0x42c7,	// (0x0005f5d5) form_field_slider_pane_vc_t1

0x4233,	// (0x0005f541) form_field_slider_pane_vc_t2_ParamLimits

0x4233,	// (0x0005f541) form_field_slider_pane_vc_t2

0x0001,

0xfaa5,	// (0x0006adb3) form_field_slider_pane_vc_t_ParamLimits

0xfaa5,	// (0x0006adb3) form_field_slider_pane_vc_t

0x5e72,	// (0x00061180) input_focus_pane_cp9_vc_ParamLimits

0x5e72,	// (0x00061180) input_focus_pane_cp9_vc

0x42dd,	// (0x0005f5eb) slider_cont_pane_vc_ParamLimits

0x42dd,	// (0x0005f5eb) slider_cont_pane_vc

0x42f1,	// (0x0005f5ff) list_form_graphic_pane_cp_vc_ParamLimits

0x42f1,	// (0x0005f5ff) list_form_graphic_pane_cp_vc

0x23fb,	// (0x0005d709) form_field_popup_wide_pane_vc_g1

0x4306,	// (0x0005f614) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4306,	// (0x0005f614) form_field_popup_wide_pane_vc_t1

0x899c,	// (0x00063caa) input_focus_pane_cp8_vc_ParamLimits

0x899c,	// (0x00063caa) input_focus_pane_cp8_vc

0x434b,	// (0x0005f659) list_form_wide_pane_vc_ParamLimits

0x434b,	// (0x0005f659) list_form_wide_pane_vc

0x4357,	// (0x0005f665) list_form_graphic_pane_vc_g1

0x435f,	// (0x0005f66d) list_form_graphic_pane_vc_t1_ParamLimits

0x435f,	// (0x0005f66d) list_form_graphic_pane_vc_t1

0x5d3f,	// (0x0006104d) list_highlight_pane_cp5_vc_ParamLimits

0x5d3f,	// (0x0006104d) list_highlight_pane_cp5_vc

0x437b,	// (0x0005f689) list_form_graphic_pane_vc_ParamLimits

0x437b,	// (0x0005f689) list_form_graphic_pane_vc

0x23fb,	// (0x0005d709) form_field_popup_pane_vc_g1

0x4391,	// (0x0005f69f) form_field_popup_pane_vc_t1_ParamLimits

0x4391,	// (0x0005f69f) form_field_popup_pane_vc_t1

0x899c,	// (0x00063caa) input_focus_pane_cp7_vc_ParamLimits

0x899c,	// (0x00063caa) input_focus_pane_cp7_vc

0x43a8,	// (0x0005f6b6) list_form_pane_vc_ParamLimits

0x43a8,	// (0x0005f6b6) list_form_pane_vc

0x43b4,	// (0x0005f6c2) data_form_pane_vc_t1_ParamLimits

0x43b4,	// (0x0005f6c2) data_form_pane_vc_t1

0x89f7,	// (0x00063d05) input_focus_pane_vc_g1

0x89ff,	// (0x00063d0d) input_focus_pane_vc_g2

0x8a07,	// (0x00063d15) input_focus_pane_vc_g3

0x8a0f,	// (0x00063d1d) input_focus_pane_vc_g4

0x8a17,	// (0x00063d25) input_focus_pane_vc_g5

0x8a1f,	// (0x00063d2d) input_focus_pane_vc_g6

0x8a27,	// (0x00063d35) input_focus_pane_vc_g7

0x8a2f,	// (0x00063d3d) input_focus_pane_vc_g8

0x8a37,	// (0x00063d45) input_focus_pane_vc_g9

0x5cdb,	// (0x00060fe9) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0006a99f) input_focus_pane_vc_g

0x23ef,	// (0x0005d6fd) data_form_pane_vc_ParamLimits

0x23ef,	// (0x0005d6fd) data_form_pane_vc

0x23fb,	// (0x0005d709) form_field_data_pane_vc_g1

0x43d1,	// (0x0005f6df) form_field_data_pane_vc_t1_ParamLimits

0x43d1,	// (0x0005f6df) form_field_data_pane_vc_t1

0x899c,	// (0x00063caa) input_focus_pane_vc_ParamLimits

0x899c,	// (0x00063caa) input_focus_pane_vc

0x43eb,	// (0x0005f6f9) button_value_adjust_pane_cp3_vc

0x43f3,	// (0x0005f701) button_value_adjust_pane_cp5_vc

0x43fb,	// (0x0005f709) form_field_data_pane_vc_ParamLimits

0x43fb,	// (0x0005f709) form_field_data_pane_vc

0x4416,	// (0x0005f724) form_field_data_pane_vc_cp2

0x441e,	// (0x0005f72c) form_field_data_wide_pane_vc_ParamLimits

0x441e,	// (0x0005f72c) form_field_data_wide_pane_vc

0x4438,	// (0x0005f746) form_field_data_wide_pane_vc_cp2

0x4440,	// (0x0005f74e) form_field_popup_pane_vc_ParamLimits

0x4440,	// (0x0005f74e) form_field_popup_pane_vc

0x445b,	// (0x0005f769) form_field_popup_wide_pane_vc_ParamLimits

0x445b,	// (0x0005f769) form_field_popup_wide_pane_vc

0x4475,	// (0x0005f783) form_field_slider_pane_vc_ParamLimits

0x4475,	// (0x0005f783) form_field_slider_pane_vc

0x4488,	// (0x0005f796) form_field_slider_wide_pane_vc_ParamLimits

0x4488,	// (0x0005f796) form_field_slider_wide_pane_vc

0xcb81,	// (0x00067e8f) grid_touch_1_pane_ParamLimits

0xcb81,	// (0x00067e8f) grid_touch_1_pane

0xcb95,	// (0x00067ea3) grid_touch_2_pane_ParamLimits

0xcb95,	// (0x00067ea3) grid_touch_2_pane

0x4559,	// (0x0005f867) touch_pane_g1_ParamLimits

0x4559,	// (0x0005f867) touch_pane_g1

0x44c1,	// (0x0005f7cf) cell_app_pane_cp_wide_ParamLimits

0x44c1,	// (0x0005f7cf) cell_app_pane_cp_wide

0x44d2,	// (0x0005f7e0) grid_popup_fast_wide_pane_ParamLimits

0x44d2,	// (0x0005f7e0) grid_popup_fast_wide_pane

0x44e6,	// (0x0005f7f4) scroll_pane_cp19_ParamLimits

0x44e6,	// (0x0005f7f4) scroll_pane_cp19

0x5ce5,	// (0x00060ff3) bg_popup_window_pane_cp20

0x44fa,	// (0x0005f808) listscroll_popup_fast_wide_pane

0xcbc1,	// (0x00067ecf) grid_indicator_nsta_pane

0x4502,	// (0x0005f810) clock_nsta_pane_g1

0x450b,	// (0x0005f819) clock_nsta_pane_t1

0xcbcf,	// (0x00067edd) cell_indicator_nsta_pane_ParamLimits

0xcbcf,	// (0x00067edd) cell_indicator_nsta_pane

0x4559,	// (0x0005f867) cell_indicator_nsta_pane_g1

0xcbe8,	// (0x00067ef6) cell_indicator_nsta_pane_g2

0x0001,

0xfab6,	// (0x0006adc4) cell_indicator_nsta_pane_g

0x457d,	// (0x0005f88b) clock_nsta_pane_cp

0x4585,	// (0x0005f893) indicator_nsta_pane_cp

0x458e,	// (0x0005f89c) nsta_clock_indic_pane_g1

0x5d7b,	// (0x00061089) grid_indicator_pane

0x8e11,	// (0x0006411f) scroll_pane_cp29

0xf37a,	// (0x0006a688) indicator_nsta_pane_cp2_ParamLimits

0xf37a,	// (0x0006a688) indicator_nsta_pane_cp2

0x5d3f,	// (0x0006104d) main_apps_wheel_pane

0x25e2,	// (0x0005d8f0) form_midp_field_text_pane_ParamLimits

0x2731,	// (0x0005da3f) scroll_bar_cp050_ParamLimits

0x45f7,	// (0x0005f905) cell_indicator_pane_ParamLimits

0x45f7,	// (0x0005f905) cell_indicator_pane

0x460f,	// (0x0005f91d) cell_indicator_pane_g1

0xcbfe,	// (0x00067f0c) grid_wheel_folder_pane_ParamLimits

0xcbfe,	// (0x00067f0c) grid_wheel_folder_pane

0xcc0c,	// (0x00067f1a) list_wheel_apps_pane_ParamLimits

0xcc0c,	// (0x00067f1a) list_wheel_apps_pane

0xcc1a,	// (0x00067f28) main_apps_wheel_pane_g1_ParamLimits

0xcc1a,	// (0x00067f28) main_apps_wheel_pane_g1

0xcc2a,	// (0x00067f38) main_apps_wheel_pane_g2_ParamLimits

0xcc2a,	// (0x00067f38) main_apps_wheel_pane_g2

0x0001,

0xfad2,	// (0x0006ade0) main_apps_wheel_pane_g_ParamLimits

0xfad2,	// (0x0006ade0) main_apps_wheel_pane_g

0xcc3a,	// (0x00067f48) main_apps_wheel_pane_t1_ParamLimits

0xcc3a,	// (0x00067f48) main_apps_wheel_pane_t1

0xcc52,	// (0x00067f60) list_wheel_apps_pane_g1

0xcc5a,	// (0x00067f68) list_wheel_apps_pane_g2

0xcc62,	// (0x00067f70) list_wheel_apps_pane_g3

0xcc6a,	// (0x00067f78) list_wheel_apps_pane_g4

0xcc72,	// (0x00067f80) list_wheel_apps_pane_g5

0x0004,

0xfad7,	// (0x0006ade5) list_wheel_apps_pane_g

0x9191,	// (0x0006449f) navi_icon_text_pane

0xb64a,	// (0x00066958) aid_fill_nsta

0xcc8f,	// (0x00067f9d) navi_icon_text_pane_g1

0xcc9b,	// (0x00067fa9) navi_icon_text_pane_t1

0xab5e,	// (0x00065e6c) list_set_graphic_pane_t1_ParamLimits

0xab5e,	// (0x00065e6c) list_set_graphic_pane_t1

0x2e82,	// (0x0005e190) popup_midp_note_alarm_window_t6_ParamLimits

0x2e82,	// (0x0005e190) popup_midp_note_alarm_window_t6

0x2e94,	// (0x0005e1a2) popup_midp_note_alarm_window_t7_ParamLimits

0x2e94,	// (0x0005e1a2) popup_midp_note_alarm_window_t7

0x2ea6,	// (0x0005e1b4) popup_midp_note_alarm_window_t8_ParamLimits

0x2ea6,	// (0x0005e1b4) popup_midp_note_alarm_window_t8

0x2eb8,	// (0x0005e1c6) popup_midp_note_alarm_window_t9_ParamLimits

0x2eb8,	// (0x0005e1c6) popup_midp_note_alarm_window_t9

0x2eca,	// (0x0005e1d8) popup_midp_note_alarm_window_t10_ParamLimits

0x2eca,	// (0x0005e1d8) popup_midp_note_alarm_window_t10

0x2edc,	// (0x0005e1ea) popup_midp_note_alarm_window_t11_ParamLimits

0x2edc,	// (0x0005e1ea) popup_midp_note_alarm_window_t11

0x2eee,	// (0x0005e1fc) scroll_pane_cp17_ParamLimits

0x2eee,	// (0x0005e1fc) scroll_pane_cp17

0x0424,	// (0x0005b732) volume_small_pane_cp_g1

0x07e9,	// (0x0005baf7) volume_small_pane_cp_g2

0x07f2,	// (0x0005bb00) volume_small_pane_cp_g3

0x07fb,	// (0x0005bb09) volume_small_pane_cp_g4

0x0804,	// (0x0005bb12) volume_small_pane_cp_g5

0x080d,	// (0x0005bb1b) volume_small_pane_cp_g6

0x0816,	// (0x0005bb24) volume_small_pane_cp_g7

0x081f,	// (0x0005bb2d) volume_small_pane_cp_g8

0x0828,	// (0x0005bb36) volume_small_pane_cp_g9

0x0831,	// (0x0005bb3f) volume_small_pane_cp_g10

0xe9d4,	// (0x00069ce2) midp_ticker_pane_g1_ParamLimits

0xe9e0,	// (0x00069cee) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0006aa6b) midp_ticker_pane_g_ParamLimits

0xac9c,	// (0x00065faa) midp_ticker_pane_t1_ParamLimits

0xb66e,	// (0x0006697c) aid_fill_nsta_2

0x271d,	// (0x0005da2b) list_form2_midp_pane

0x3885,	// (0x0005eb93) midp_editing_number_pane_ParamLimits

0x3894,	// (0x0005eba2) midp_ticker_pane_ParamLimits

0x4702,	// (0x0005fa10) form2_midp_field_pane

0x4726,	// (0x0005fa34) scroll_pane_cp51

0x4746,	// (0x0005fa54) form2_midp_button_pane_ParamLimits

0x4746,	// (0x0005fa54) form2_midp_button_pane

0x4758,	// (0x0005fa66) form2_midp_content_pane_ParamLimits

0x4758,	// (0x0005fa66) form2_midp_content_pane

0x4772,	// (0x0005fa80) form2_midp_field_choice_group_pane

0x477a,	// (0x0005fa88) form2_midp_field_pane_g1

0x4782,	// (0x0005fa90) form2_midp_field_pane_g2

0x478a,	// (0x0005fa98) form2_midp_field_pane_g3

0x4792,	// (0x0005faa0) form2_midp_field_pane_g4

0x0003,

0xfafc,	// (0x0006ae0a) form2_midp_field_pane_g

0x479a,	// (0x0005faa8) form2_midp_gauge_slider_pane

0x47a2,	// (0x0005fab0) form2_midp_gauge_wait_pane

0x47aa,	// (0x0005fab8) form2_midp_image_pane_ParamLimits

0x47aa,	// (0x0005fab8) form2_midp_image_pane

0x47c5,	// (0x0005fad3) form2_midp_label_pane_ParamLimits

0x47c5,	// (0x0005fad3) form2_midp_label_pane

0xccc9,	// (0x00067fd7) form2_midp_label_pane_cp_ParamLimits

0xccc9,	// (0x00067fd7) form2_midp_label_pane_cp

0x4805,	// (0x0005fb13) form2_midp_string_pane_ParamLimits

0x4805,	// (0x0005fb13) form2_midp_string_pane

0xeeca,	// (0x0006a1d8) form2_midp_text_pane_ParamLimits

0xeeca,	// (0x0006a1d8) form2_midp_text_pane

0x4817,	// (0x0005fb25) form2_midp_time_pane

0x4827,	// (0x0005fb35) input_focus_pane_cp51_ParamLimits

0x4827,	// (0x0005fb35) input_focus_pane_cp51

0x483f,	// (0x0005fb4d) form2_midp_label_pane_t1_ParamLimits

0x483f,	// (0x0005fb4d) form2_midp_label_pane_t1

0xeeed,	// (0x0006a1fb) form2_mdip_text_pane_t1_ParamLimits

0xeeed,	// (0x0006a1fb) form2_mdip_text_pane_t1

0xef0c,	// (0x0006a21a) form2_midp_time_pane_t1

0x488d,	// (0x0005fb9b) form2_midp_gauge_slider_pane_t1

0xccea,	// (0x00067ff8) form2_midp_gauge_slider_pane_t2

0xccfc,	// (0x0006800a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb05,	// (0x0006ae13) form2_midp_gauge_slider_pane_t

0x48c3,	// (0x0005fbd1) form2_midp_slider_pane

0x48cf,	// (0x0005fbdd) form2_midp_gauge_wait_pane_t1

0x48dd,	// (0x0005fbeb) form2_midp_wait_pane_ParamLimits

0x48dd,	// (0x0005fbeb) form2_midp_wait_pane

0x2442,	// (0x0005d750) list_single_2graphic_pane_cp4_ParamLimits

0x2442,	// (0x0005d750) list_single_2graphic_pane_cp4

0x4908,	// (0x0005fc16) list_single_midp_graphic_pane_cp_ParamLimits

0x4908,	// (0x0005fc16) list_single_midp_graphic_pane_cp

0x5ce5,	// (0x00060ff3) list_highlight_pane_cp20

0x492c,	// (0x0005fc3a) list_single_2graphic_pane_g1_cp4

0x3ec9,	// (0x0005f1d7) list_single_2graphic_pane_g2_cp4

0x4934,	// (0x0005fc42) list_single_2graphic_pane_t1_cp4

0x5d3f,	// (0x0006104d) list_highlight_pane_cp21

0x4943,	// (0x0005fc51) list_single_midp_graphic_pane_g4_cp

0x4952,	// (0x0005fc60) list_single_midp_graphic_pane_t1_cp

0xcd0e,	// (0x0006801c) form2_mdip_string_pane_t1_ParamLimits

0xcd0e,	// (0x0006801c) form2_mdip_string_pane_t1

0x5ce5,	// (0x00060ff3) bg_wml_button_pane_cp2

0x5cdb,	// (0x00060fe9) form2_midp_image_pane_g1

0xe8bf,	// (0x00069bcd) list_double_large_graphic_pane_g5_ParamLimits

0xe8bf,	// (0x00069bcd) list_double_large_graphic_pane_g5

0x016a,	// (0x0005b478) midp_form_pane_ParamLimits

0x5d3f,	// (0x0006104d) main_apps_wheel_pane_ParamLimits

0xb362,	// (0x00066670) popup_preview_window_ParamLimits

0xb362,	// (0x00066670) popup_preview_window

0x1d9c,	// (0x0005d0aa) popup_touch_info_window_ParamLimits

0x1d9c,	// (0x0005d0aa) popup_touch_info_window

0x1dbe,	// (0x0005d0cc) popup_touch_menu_window_ParamLimits

0x1dbe,	// (0x0005d0cc) popup_touch_menu_window

0x5cd1,	// (0x00060fdf) bg_popup_sub_pane_cp6

0x4a0c,	// (0x0005fd1a) list_touch_menu_pane

0x4a14,	// (0x0005fd22) list_single_touch_menu_pane_ParamLimits

0x4a14,	// (0x0005fd22) list_single_touch_menu_pane

0x4a2c,	// (0x0005fd3a) list_single_touch_menu_pane_t1

0x5d3f,	// (0x0006104d) bg_popup_sub_pane_cp7_ParamLimits

0x5d3f,	// (0x0006104d) bg_popup_sub_pane_cp7

0x4a3a,	// (0x0005fd48) heading_sub_pane

0x4a42,	// (0x0005fd50) list_touch_info_pane_ParamLimits

0x4a42,	// (0x0005fd50) list_touch_info_pane

0x4a51,	// (0x0005fd5f) list_single_touch_info_pane_ParamLimits

0x4a51,	// (0x0005fd5f) list_single_touch_info_pane

0x4a63,	// (0x0005fd71) list_single_touch_info_pane_t1

0x4a71,	// (0x0005fd7f) list_single_touch_info_pane_t2

0x0001,

0xfb13,	// (0x0006ae21) list_single_touch_info_pane_t

0xe9a8,	// (0x00069cb6) bg_popup_heading_pane_cp

0x4a7f,	// (0x0005fd8d) heading_sub_pane_t1

0x2389,	// (0x0005d697) bg_popup_preview_window_pane_cp_ParamLimits

0x2389,	// (0x0005d697) bg_popup_preview_window_pane_cp

0x4a3a,	// (0x0005fd48) heading_preview_pane

0x4a42,	// (0x0005fd50) list_preview_pane_ParamLimits

0x4a42,	// (0x0005fd50) list_preview_pane

0x4a8d,	// (0x0005fd9b) popup_preview_window_g1

0x4a51,	// (0x0005fd5f) list_single_preview_pane_ParamLimits

0x4a51,	// (0x0005fd5f) list_single_preview_pane

0x4a95,	// (0x0005fda3) list_single_preview_pane_g1

0x4a9d,	// (0x0005fdab) list_single_preview_pane_t1

0x4a63,	// (0x0005fd71) list_single_preview_pane_t2

0x0001,

0xfb18,	// (0x0006ae26) list_single_preview_pane_t

0x4aab,	// (0x0005fdb9) bg_popup_heading_pane_cp2_ParamLimits

0x4aab,	// (0x0005fdb9) bg_popup_heading_pane_cp2

0x4ac1,	// (0x0005fdcf) heading_preview_pane_g1

0x4ac9,	// (0x0005fdd7) heading_preview_pane_t1_ParamLimits

0x4ac9,	// (0x0005fdd7) heading_preview_pane_t1

0x5d92,	// (0x000610a0) soft_indicator_pane_t1_ParamLimits

0x62d5,	// (0x000615e3) scroll_pane_ParamLimits

0x8d0d,	// (0x0006401b) scroll_sc2_left_pane

0x8d16,	// (0x00064024) scroll_sc2_right_pane

0x8d35,	// (0x00064043) scroll_bg_pane_g1_ParamLimits

0x8d4a,	// (0x00064058) scroll_bg_pane_g2_ParamLimits

0x8d62,	// (0x00064070) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0006a9f6) scroll_bg_pane_g_ParamLimits

0x8d35,	// (0x00064043) scroll_handle_pane_g1_ParamLimits

0x8d84,	// (0x00064092) scroll_handle_pane_g2_ParamLimits

0x8d62,	// (0x00064070) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0006a9fd) scroll_handle_pane_g_ParamLimits

0x0192,	// (0x0005b4a0) popup_choice_list_window_ParamLimits

0x0192,	// (0x0005b4a0) popup_choice_list_window

0x225f,	// (0x0005d56d) choice_list_pane

0x22e1,	// (0x0005d5ef) cell_toolbar_pane_t1

0x2309,	// (0x0005d617) toolbar_button_pane_ParamLimits

0x33b8,	// (0x0005e6c6) ai_gene_pane_1_t2_ParamLimits

0x33b8,	// (0x0005e6c6) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0006ac20) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0006ac20) ai_gene_pane_1_t

0x4ae6,	// (0x0005fdf4) scroll_sc2_left_pane_g1

0x4ae6,	// (0x0005fdf4) scroll_sc2_right_pane_g1

0x016a,	// (0x0005b478) bg_popup_sub_pane_cp10

0x4af0,	// (0x0005fdfe) list_choice_list_pane

0x4b09,	// (0x0005fe17) list_single_choice_list_pane_ParamLimits

0x4b09,	// (0x0005fe17) list_single_choice_list_pane

0x4b21,	// (0x0005fe2f) list_single_choice_list_pane_g1

0x8aed,	// (0x00063dfb) list_single_choice_list_pane_t1_ParamLimits

0x8aed,	// (0x00063dfb) list_single_choice_list_pane_t1

0x4b29,	// (0x0005fe37) choice_list_pane_g1

0x4b31,	// (0x0005fe3f) choice_list_pane_t1

0x5cd1,	// (0x00060fdf) input_focus_pane_cp11

0x8c6b,	// (0x00063f79) title_pane_stacon_g2_ParamLimits

0x8c6b,	// (0x00063f79) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0006a9dc) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0006a9dc) title_pane_stacon_g

0xe9a8,	// (0x00069cb6) cursor_press_pane

0xafdf,	// (0x000662ed) popup_fep_hwr_window_ParamLimits

0xafdf,	// (0x000662ed) popup_fep_hwr_window

0x1940,	// (0x0005cc4e) popup_fep_vkb_window_ParamLimits

0x1940,	// (0x0005cc4e) popup_fep_vkb_window

0x4b3f,	// (0x0005fe4d) cursor_press_pane_g1

0x0002,

0xfb41,	// (0x0006ae4f) fep_vkb_side_pane_g_ParamLimits

0x0873,	// (0x0005bb81) fep_hwr_candidate_pane_ParamLimits

0x0873,	// (0x0005bb81) fep_hwr_candidate_pane

0x089d,	// (0x0005bbab) fep_hwr_side_pane_ParamLimits

0x089d,	// (0x0005bbab) fep_hwr_side_pane

0x08bf,	// (0x0005bbcd) fep_hwr_top_pane_ParamLimits

0x08bf,	// (0x0005bbcd) fep_hwr_top_pane

0x08d7,	// (0x0005bbe5) fep_hwr_write_pane_ParamLimits

0x08d7,	// (0x0005bbe5) fep_hwr_write_pane

0xfb41,	// (0x0006ae4f) fep_vkb_side_pane_g

0x4b47,	// (0x0005fe55) fep_hwr_top_pane_g1

0x4b59,	// (0x0005fe67) fep_hwr_top_pane_g2

0x0911,	// (0x0005bc1f) fep_hwr_top_pane_g3

0x0002,

0xfb1d,	// (0x0006ae2b) fep_hwr_top_pane_g

0x0926,	// (0x0005bc34) fep_hwr_top_text_pane

0x8e7e,	// (0x0006418c) fep_hwr_top_text_pane_g1

0x4b8f,	// (0x0005fe9d) fep_hwr_top_text_pane_t1

0x0a30,	// (0x0005bd3e) fep_hwr_candidate_pane_g1

0x4dda,	// (0x000600e8) fep_vkb_keypad_pane_g3_ParamLimits

0x4dda,	// (0x000600e8) fep_vkb_keypad_pane_g3

0x4e06,	// (0x00060114) fep_vkb_keypad_pane_g4_ParamLimits

0x4e06,	// (0x00060114) fep_vkb_keypad_pane_g4

0x4e7d,	// (0x0006018b) fep_vkb_bottom_pane_g2_ParamLimits

0x4e7d,	// (0x0006018b) fep_vkb_bottom_pane_g2

0x0001,

0xfb48,	// (0x0006ae56) fep_vkb_bottom_pane_g_ParamLimits

0xfb48,	// (0x0006ae56) fep_vkb_bottom_pane_g

0x4ae6,	// (0x0005fdf4) cell_vkb_side_pane_g2

0x0001,

0xfb52,	// (0x0006ae60) cell_vkb_side_pane_g

0x4f08,	// (0x00060216) cell_vkb_side_pane_t1

0x4f16,	// (0x00060224) cell_vkb_side_pane_t1_copy1

0x4ae6,	// (0x0005fdf4) bg_fep_vkb_candidate_pane_g2

0x505a,	// (0x00060368) cell_vkb_candidate_pane_ParamLimits

0x4b9d,	// (0x0005feab) aid_size_cell_vkb_ParamLimits

0x4b9d,	// (0x0005feab) aid_size_cell_vkb

0x505a,	// (0x00060368) cell_vkb_candidate_pane

0x0a57,	// (0x0005bd65) bg_popup_fep_shadow_pane_g1

0xcdc3,	// (0x000680d1) fep_vkb_bottom_pane_ParamLimits

0xcdc3,	// (0x000680d1) fep_vkb_bottom_pane

0x4c6c,	// (0x0005ff7a) fep_vkb_candidate_pane_ParamLimits

0x4c6c,	// (0x0005ff7a) fep_vkb_candidate_pane

0xcdef,	// (0x000680fd) fep_vkb_keypad_pane_ParamLimits

0xcdef,	// (0x000680fd) fep_vkb_keypad_pane

0xce16,	// (0x00068124) fep_vkb_side_pane_ParamLimits

0xce16,	// (0x00068124) fep_vkb_side_pane

0xce52,	// (0x00068160) fep_vkb_top_pane_ParamLimits

0xce52,	// (0x00068160) fep_vkb_top_pane

0x4d33,	// (0x00060041) fep_vkb_top_pane_g1_ParamLimits

0x4d33,	// (0x00060041) fep_vkb_top_pane_g1

0x4d42,	// (0x00060050) fep_vkb_top_pane_g2_ParamLimits

0x4d42,	// (0x00060050) fep_vkb_top_pane_g2

0x4d51,	// (0x0006005f) fep_vkb_top_pane_g3_ParamLimits

0x4d51,	// (0x0006005f) fep_vkb_top_pane_g3

0x0003,

0xfb38,	// (0x0006ae46) fep_vkb_top_pane_g_ParamLimits

0xfb38,	// (0x0006ae46) fep_vkb_top_pane_g

0x4d6f,	// (0x0006007d) fep_vkb_top_text_pane_ParamLimits

0x4d6f,	// (0x0006007d) fep_vkb_top_text_pane

0xce8e,	// (0x0006819c) fep_vkb_side_pane_g1_ParamLimits

0xce8e,	// (0x0006819c) fep_vkb_side_pane_g1

0x4dc9,	// (0x000600d7) grid_vkb_side_pane_ParamLimits

0x4dc9,	// (0x000600d7) grid_vkb_side_pane

0x0a5f,	// (0x0005bd6d) bg_popup_fep_shadow_pane_g2

0x0a68,	// (0x0005bd76) bg_popup_fep_shadow_pane_g3

0x0a70,	// (0x0005bd7e) bg_popup_fep_shadow_pane_g4

0x0a79,	// (0x0005bd87) bg_popup_fep_shadow_pane_g5

0x0a83,	// (0x0005bd91) bg_popup_fep_shadow_pane_g6

0x0a8b,	// (0x0005bd99) bg_popup_fep_shadow_pane_g7

0x8a0f,	// (0x00063d1d) bg_popup_fep_shadow_pane_g8

0x4e28,	// (0x00060136) grid_vkb_keypad_number_pane_ParamLimits

0x4e28,	// (0x00060136) grid_vkb_keypad_number_pane

0x4e3c,	// (0x0006014a) grid_vkb_keypad_pane_ParamLimits

0x4e3c,	// (0x0006014a) grid_vkb_keypad_pane

0x4e62,	// (0x00060170) fep_vkb_bottom_pane_g1_ParamLimits

0x4e62,	// (0x00060170) fep_vkb_bottom_pane_g1

0x4e8b,	// (0x00060199) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4e8b,	// (0x00060199) grid_vkb_keypad_bottom_left_pane

0x4ea0,	// (0x000601ae) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4ea0,	// (0x000601ae) grid_vkb_keypad_bottom_right_pane

0x4eb5,	// (0x000601c3) fep_vkb_top_text_pane_g1

0xced5,	// (0x000681e3) fep_vkb_top_text_pane_t1

0xcee7,	// (0x000681f5) cell_vkb_side_pane_ParamLimits

0xcee7,	// (0x000681f5) cell_vkb_side_pane

0x4ae6,	// (0x0005fdf4) cell_vkb_side_pane_g1

0x4f24,	// (0x00060232) cell_vkb_keypad_pane_ParamLimits

0x4f24,	// (0x00060232) cell_vkb_keypad_pane

0x4fb1,	// (0x000602bf) cell_vkb_keypad_pane_g1

0x0008,

0xfb65,	// (0x0006ae73) bg_popup_fep_shadow_pane_g

0x0a9d,	// (0x0005bdab) cell_hwr_side_pane_g1

0x0a9d,	// (0x0005bdab) cell_hwr_side_pane_g2

0x4fbb,	// (0x000602c9) cell_vkb_keypad_pane_t1

0xcefd,	// (0x0006820b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcefd,	// (0x0006820b) cell_vkb_keypad_bottom_left_pane

0xcf12,	// (0x00068220) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcf12,	// (0x00068220) cell_vkb_keypad_bottom_right_pane

0x4ae6,	// (0x0005fdf4) cell_vkb_keypad_bottom_left_pane_g1

0x4ae6,	// (0x0005fdf4) cell_vkb_keypad_bottom_right_pane_g1

0x501f,	// (0x0006032d) cell_vkb_keypad_number_pane_ParamLimits

0x501f,	// (0x0006032d) cell_vkb_keypad_number_pane

0x503e,	// (0x0006034c) cell_vkb_keypad_number_pane_g1

0x5048,	// (0x00060356) cell_vkb_keypad_number_pane_g2

0x5051,	// (0x0006035f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb57,	// (0x0006ae65) cell_vkb_keypad_number_pane_g

0x4fbb,	// (0x000602c9) cell_vkb_keypad_number_pane_t1

0x507b,	// (0x00060389) fep_vkb_candidate_pane_g1

0x0001,

0xfb78,	// (0x0006ae86) cell_hwr_side_pane_g

0x5094,	// (0x000603a2) cell_hwr_side_pane_t1

0x0aa7,	// (0x0005bdb5) cell_hwr_side_pane_t1_copy1

0x0ab5,	// (0x0005bdc3) cell_hwr_candidate_pane_g1

0x0ae4,	// (0x0005bdf2) cell_hwr_candidate_pane_t1

0x4ae6,	// (0x0005fdf4) cell_vkb_candidate_pane_g2

0x50d8,	// (0x000603e6) cell_vkb_candidate_pane_t1

0x083a,	// (0x0005bb48) bg_popup_fep_shadow_pane_ParamLimits

0x083a,	// (0x0005bb48) bg_popup_fep_shadow_pane

0x08f1,	// (0x0005bbff) bg_fep_hwr_top_pane_g4

0x4b6b,	// (0x0005fe79) bg_hwr_side_pane_g1_ParamLimits

0x4b6b,	// (0x0005fe79) bg_hwr_side_pane_g1

0xbd1e,	// (0x0006702c) cell_hwr_side_pane_ParamLimits

0xbd1e,	// (0x0006702c) cell_hwr_side_pane

0x09a1,	// (0x0005bcaf) fep_hwr_write_pane_g1_ParamLimits

0x09a1,	// (0x0005bcaf) fep_hwr_write_pane_g1

0x09ae,	// (0x0005bcbc) fep_hwr_write_pane_g2_ParamLimits

0x09ae,	// (0x0005bcbc) fep_hwr_write_pane_g2

0x09bb,	// (0x0005bcc9) fep_hwr_write_pane_g3_ParamLimits

0x09bb,	// (0x0005bcc9) fep_hwr_write_pane_g3

0xbd3e,	// (0x0006704c) fep_hwr_write_pane_g4_ParamLimits

0xbd3e,	// (0x0006704c) fep_hwr_write_pane_g4

0x0005,

0xfb24,	// (0x0006ae32) fep_hwr_write_pane_g_ParamLimits

0xfb24,	// (0x0006ae32) fep_hwr_write_pane_g

0x08f1,	// (0x0005bbff) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x08f1,	// (0x0005bbff) bg_fep_hwr_candidate_pane_g2

0x09de,	// (0x0005bcec) cell_hwr_candidate_pane_ParamLimits

0x09de,	// (0x0005bcec) cell_hwr_candidate_pane

0x0a30,	// (0x0005bd3e) fep_hwr_candidate_pane_g1_ParamLimits

0x4bcb,	// (0x0005fed9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4bcb,	// (0x0005fed9) bg_popup_fep_shadow_pane_cp2

0x4d61,	// (0x0006006f) fep_vkb_top_pane_g4_ParamLimits

0x4d61,	// (0x0006006f) fep_vkb_top_pane_g4

0x4da7,	// (0x000600b5) fep_vkb_side_pane_g2_ParamLimits

0x4da7,	// (0x000600b5) fep_vkb_side_pane_g2

0xa5bf,	// (0x000658cd) list_setting_pane_t4_ParamLimits

0xa5bf,	// (0x000658cd) list_setting_pane_t4

0xa65b,	// (0x00065969) list_setting_number_pane_t5_ParamLimits

0xa65b,	// (0x00065969) list_setting_number_pane_t5

0xa9c8,	// (0x00065cd6) list_double_heading_pane_cp2_ParamLimits

0xa9c8,	// (0x00065cd6) list_double_heading_pane_cp2

0x50e6,	// (0x000603f4) list_double_heading_pane_g1_cp2_ParamLimits

0x50e6,	// (0x000603f4) list_double_heading_pane_g1_cp2

0x50f2,	// (0x00060400) list_double_heading_pane_g2_cp2_ParamLimits

0x50f2,	// (0x00060400) list_double_heading_pane_g2_cp2

0x5106,	// (0x00060414) list_double_heading_pane_t1_cp2_ParamLimits

0x5106,	// (0x00060414) list_double_heading_pane_t1_cp2

0x511c,	// (0x0006042a) list_double_heading_pane_t2_cp2_ParamLimits

0x511c,	// (0x0006042a) list_double_heading_pane_t2_cp2

0x5cc9,	// (0x00060fd7) aid_value_unit2

0xe822,	// (0x00069b30) popup_preview_fixed_window

0x5e80,	// (0x0006118e) bg_popup_preview_window_pane_cp02

0x512e,	// (0x0006043c) list_preview_fixed_pane

0x5174,	// (0x00060482) list_empty_pane_fp_ParamLimits

0x5174,	// (0x00060482) list_empty_pane_fp

0x5174,	// (0x00060482) list_single_cale_day_pane_fp_ParamLimits

0x5174,	// (0x00060482) list_single_cale_day_pane_fp

0x5174,	// (0x00060482) list_single_graphic_heading_pane_fp_ParamLimits

0x5174,	// (0x00060482) list_single_graphic_heading_pane_fp

0x5174,	// (0x00060482) list_single_graphic_pane_fp_ParamLimits

0x5174,	// (0x00060482) list_single_graphic_pane_fp

0x5174,	// (0x00060482) list_single_heading_pane_fp_ParamLimits

0x5174,	// (0x00060482) list_single_heading_pane_fp

0x5174,	// (0x00060482) list_single_pane_fp_ParamLimits

0x5174,	// (0x00060482) list_single_pane_fp

0x518d,	// (0x0006049b) list_single_pane_fp_g1_ParamLimits

0x518d,	// (0x0006049b) list_single_pane_fp_g1

0x50e6,	// (0x000603f4) list_single_pane_fp_g2_ParamLimits

0x50e6,	// (0x000603f4) list_single_pane_fp_g2

0x50f2,	// (0x00060400) list_single_pane_fp_g3_ParamLimits

0x50f2,	// (0x00060400) list_single_pane_fp_g3

0x5199,	// (0x000604a7) list_single_pane_fp_g4_ParamLimits

0x5199,	// (0x000604a7) list_single_pane_fp_g4

0x0003,

0xfb8b,	// (0x0006ae99) list_single_pane_fp_g_ParamLimits

0xfb8b,	// (0x0006ae99) list_single_pane_fp_g

0xef1f,	// (0x0006a22d) list_single_pane_fp_t1_ParamLimits

0xef1f,	// (0x0006a22d) list_single_pane_fp_t1

0xef36,	// (0x0006a244) list_single_graphic_pane_fp_g1_ParamLimits

0xef36,	// (0x0006a244) list_single_graphic_pane_fp_g1

0x518d,	// (0x0006049b) list_single_graphic_pane_fp_g2_ParamLimits

0x518d,	// (0x0006049b) list_single_graphic_pane_fp_g2

0x50e6,	// (0x000603f4) list_single_graphic_pane_fp_g3_ParamLimits

0x50e6,	// (0x000603f4) list_single_graphic_pane_fp_g3

0x50f2,	// (0x00060400) list_single_graphic_pane_fp_g4_ParamLimits

0x50f2,	// (0x00060400) list_single_graphic_pane_fp_g4

0x5199,	// (0x000604a7) list_single_graphic_pane_fp_g5_ParamLimits

0x5199,	// (0x000604a7) list_single_graphic_pane_fp_g5

0x0004,

0xfb94,	// (0x0006aea2) list_single_graphic_pane_fp_g_ParamLimits

0xfb94,	// (0x0006aea2) list_single_graphic_pane_fp_g

0xef42,	// (0x0006a250) list_single_graphic_pane_fp_t1_ParamLimits

0xef42,	// (0x0006a250) list_single_graphic_pane_fp_t1

0xef36,	// (0x0006a244) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xef36,	// (0x0006a244) list_single_graphic_heading_pane_fp_g1

0x518d,	// (0x0006049b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x518d,	// (0x0006049b) list_single_graphic_heading_pane_fp_g2

0x50e6,	// (0x000603f4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x50e6,	// (0x000603f4) list_single_graphic_heading_pane_fp_g3

0x50f2,	// (0x00060400) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x50f2,	// (0x00060400) list_single_graphic_heading_pane_fp_g4

0x5199,	// (0x000604a7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5199,	// (0x000604a7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb94,	// (0x0006aea2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb94,	// (0x0006aea2) list_single_graphic_heading_pane_fp_g

0xef58,	// (0x0006a266) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xef58,	// (0x0006a266) list_single_graphic_heading_pane_fp_t1

0xef6e,	// (0x0006a27c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xef6e,	// (0x0006a27c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9f,	// (0x0006aead) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9f,	// (0x0006aead) list_single_graphic_heading_pane_fp_t

0xef80,	// (0x0006a28e) list_single_cale_day_pane_fp_g1_ParamLimits

0xef80,	// (0x0006a28e) list_single_cale_day_pane_fp_g1

0x51a5,	// (0x000604b3) list_single_cale_day_pane_fp_g2_ParamLimits

0x51a5,	// (0x000604b3) list_single_cale_day_pane_fp_g2

0x3a08,	// (0x0005ed16) list_single_cale_day_pane_fp_g3_ParamLimits

0x3a08,	// (0x0005ed16) list_single_cale_day_pane_fp_g3

0x3a30,	// (0x0005ed3e) list_single_cale_day_pane_fp_g4_ParamLimits

0x3a30,	// (0x0005ed3e) list_single_cale_day_pane_fp_g4

0x3a54,	// (0x0005ed62) list_single_cale_day_pane_fp_g5_ParamLimits

0x3a54,	// (0x0005ed62) list_single_cale_day_pane_fp_g5

0x0004,

0xfba4,	// (0x0006aeb2) list_single_cale_day_pane_fp_g_ParamLimits

0xfba4,	// (0x0006aeb2) list_single_cale_day_pane_fp_g

0xefb8,	// (0x0006a2c6) list_single_cale_day_pane_fp_t1_ParamLimits

0xefb8,	// (0x0006a2c6) list_single_cale_day_pane_fp_t1

0xefde,	// (0x0006a2ec) list_single_cale_day_pane_fp_t2_ParamLimits

0xefde,	// (0x0006a2ec) list_single_cale_day_pane_fp_t2

0xeff7,	// (0x0006a305) list_single_cale_day_pane_fp_t3_ParamLimits

0xeff7,	// (0x0006a305) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaf,	// (0x0006aebd) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaf,	// (0x0006aebd) list_single_cale_day_pane_fp_t

0x518d,	// (0x0006049b) list_empty_pane_fp_g1_ParamLimits

0x518d,	// (0x0006049b) list_empty_pane_fp_g1

0xf010,	// (0x0006a31e) list_empty_pane_fp_t1

0xf01e,	// (0x0006a32c) list_empty_pane_fp_t2

0x0001,

0xfbb6,	// (0x0006aec4) list_empty_pane_fp_t

0x518d,	// (0x0006049b) list_single_heading_pane_fp_g1_ParamLimits

0x518d,	// (0x0006049b) list_single_heading_pane_fp_g1

0x50e6,	// (0x000603f4) list_single_heading_pane_fp_g2_ParamLimits

0x50e6,	// (0x000603f4) list_single_heading_pane_fp_g2

0x50f2,	// (0x00060400) list_single_heading_pane_fp_g3_ParamLimits

0x50f2,	// (0x00060400) list_single_heading_pane_fp_g3

0x0002,

0xfbbb,	// (0x0006aec9) list_single_heading_pane_fp_g_ParamLimits

0xfbbb,	// (0x0006aec9) list_single_heading_pane_fp_g

0xf02c,	// (0x0006a33a) list_single_heading_pane_fp_t1_ParamLimits

0xf02c,	// (0x0006a33a) list_single_heading_pane_fp_t1

0xf03e,	// (0x0006a34c) list_single_heading_pane_fp_t2_ParamLimits

0xf03e,	// (0x0006a34c) list_single_heading_pane_fp_t2

0x0001,

0xfbc2,	// (0x0006aed0) list_single_heading_pane_fp_t_ParamLimits

0xfbc2,	// (0x0006aed0) list_single_heading_pane_fp_t

0x8b02,	// (0x00063e10) aid_size_cell_fast

0x5e55,	// (0x00061163) soft_indicator_pane_cp1_t1

0x8b3f,	// (0x00063e4d) cell_app_pane_cp2_ParamLimits

0x8b3f,	// (0x00063e4d) cell_app_pane_cp2

0x085c,	// (0x0005bb6a) fep_hwr_candidate_drop_down_list_pane

0x0a4a,	// (0x0005bd58) fep_hwr_candidate_pane_g3_ParamLimits

0x0a4a,	// (0x0005bd58) fep_hwr_candidate_pane_g3

0xcda4,	// (0x000680b2) fep_hwr_candidate_pane_g4_ParamLimits

0xcda4,	// (0x000680b2) fep_hwr_candidate_pane_g4

0x0002,

0xfb31,	// (0x0006ae3f) fep_hwr_candidate_pane_g_ParamLimits

0xfb31,	// (0x0006ae3f) fep_hwr_candidate_pane_g

0x4c5b,	// (0x0005ff69) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4c5b,	// (0x0005ff69) fep_vkb_candidate_drop_down_list_pane

0x5083,	// (0x00060391) fep_vkb_candidate_pane_g3

0x508b,	// (0x00060399) fep_vkb_candidate_pane_g4

0x0002,

0xfb5e,	// (0x0006ae6c) fep_vkb_candidate_pane_g

0x0ab5,	// (0x0005bdc3) cell_hwr_candidate_pane_g1_ParamLimits

0x0ac3,	// (0x0005bdd1) cell_hwr_candidate_pane_g3_ParamLimits

0x0ac3,	// (0x0005bdd1) cell_hwr_candidate_pane_g3

0x6309,	// (0x00061617) cell_hwr_candidate_pane_g4_ParamLimits

0x6309,	// (0x00061617) cell_hwr_candidate_pane_g4

0x0002,

0xfb7d,	// (0x0006ae8b) cell_hwr_candidate_pane_g_ParamLimits

0xfb7d,	// (0x0006ae8b) cell_hwr_candidate_pane_g

0x50a2,	// (0x000603b0) cell_vkb_candidate_pane_g3_ParamLimits

0x50a2,	// (0x000603b0) cell_vkb_candidate_pane_g3

0x50bd,	// (0x000603cb) cell_vkb_candidate_pane_g4_ParamLimits

0x50bd,	// (0x000603cb) cell_vkb_candidate_pane_g4

0x51b1,	// (0x000604bf) cell_app_pane_cp2_g1_ParamLimits

0x51b1,	// (0x000604bf) cell_app_pane_cp2_g1

0x51cf,	// (0x000604dd) cell_app_pane_cp2_g2_ParamLimits

0x51cf,	// (0x000604dd) cell_app_pane_cp2_g2

0x0001,

0xfbc7,	// (0x0006aed5) cell_app_pane_cp2_g_ParamLimits

0xfbc7,	// (0x0006aed5) cell_app_pane_cp2_g

0x51db,	// (0x000604e9) cell_app_pane_cp2_t1_ParamLimits

0x51db,	// (0x000604e9) cell_app_pane_cp2_t1

0x899c,	// (0x00063caa) grid_highlight_pane_cp1_ParamLimits

0x899c,	// (0x00063caa) grid_highlight_pane_cp1

0x0b02,	// (0x0005be10) cell_hwr_candidate_pane_cp1_ParamLimits

0x0b02,	// (0x0005be10) cell_hwr_candidate_pane_cp1

0x0ab5,	// (0x0005bdc3) fep_hwr_candidate_drop_down_list_pane_g1

0x0b26,	// (0x0005be34) fep_hwr_candidate_drop_down_list_pane_g2

0x0b33,	// (0x0005be41) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcc,	// (0x0006aeda) fep_hwr_candidate_drop_down_list_pane_g

0x0b40,	// (0x0005be4e) fep_hwr_candidate_drop_down_list_scroll_pane

0x0b49,	// (0x0005be57) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0b49,	// (0x0005be57) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0b56,	// (0x0005be64) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0b56,	// (0x0005be64) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0b63,	// (0x0005be71) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0b63,	// (0x0005be71) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0b70,	// (0x0005be7e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0b70,	// (0x0005be7e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0b8b,	// (0x0005be99) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0b8b,	// (0x0005be99) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0ba6,	// (0x0005beb4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0ba6,	// (0x0005beb4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0bc1,	// (0x0005becf) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0bc1,	// (0x0005becf) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0bdc,	// (0x0005beea) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0bdc,	// (0x0005beea) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd3,	// (0x0006aee1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd3,	// (0x0006aee1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x51ed,	// (0x000604fb) cell_vkb_candidate_pane_cp1_ParamLimits

0x51ed,	// (0x000604fb) cell_vkb_candidate_pane_cp1

0x4d61,	// (0x0006006f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4d61,	// (0x0006006f) fep_vkb_candidate_drop_down_list_pane_g1

0x5213,	// (0x00060521) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5213,	// (0x00060521) fep_vkb_candidate_drop_down_list_pane_g2

0x5220,	// (0x0006052e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5220,	// (0x0006052e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe4,	// (0x0006aef2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe4,	// (0x0006aef2) fep_vkb_candidate_drop_down_list_pane_g

0x522d,	// (0x0006053b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x522d,	// (0x0006053b) fep_vkb_candidate_drop_down_list_scroll_pane

0x523a,	// (0x00060548) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x523a,	// (0x00060548) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5247,	// (0x00060555) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5247,	// (0x00060555) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5253,	// (0x00060561) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5253,	// (0x00060561) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x525f,	// (0x0006056d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x525f,	// (0x0006056d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5280,	// (0x0006058e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5280,	// (0x0006058e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x52a1,	// (0x000605af) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x52a1,	// (0x000605af) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x52c2,	// (0x000605d0) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x52c2,	// (0x000605d0) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x52e3,	// (0x000605f1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x52e3,	// (0x000605f1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbeb,	// (0x0006aef9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbeb,	// (0x0006aef9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9e23,	// (0x00065131) title_pane_g1_ParamLimits

0x9e36,	// (0x00065144) title_pane_g2_ParamLimits

0xf54e,	// (0x0006a85c) title_pane_g_ParamLimits

0x8e6e,	// (0x0006417c) aid_call2_pane

0x8e76,	// (0x00064184) aid_call_pane

0x8e7e,	// (0x0006418c) popup_clock_analogue_window_g1

0x8e7e,	// (0x0006418c) popup_clock_analogue_window_g2

0xf279,	// (0x0006a587) popup_clock_analogue_window_g3

0xf282,	// (0x0006a590) popup_clock_analogue_window_g4

0x5cdb,	// (0x00060fe9) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0006aa0b) popup_clock_analogue_window_g

0xf28a,	// (0x0006a598) popup_clock_analogue_window_t1

0xf298,	// (0x0006a5a6) clock_digital_number_pane_ParamLimits

0xf298,	// (0x0006a5a6) clock_digital_number_pane

0xf2a4,	// (0x0006a5b2) clock_digital_number_pane_cp02_ParamLimits

0xf2a4,	// (0x0006a5b2) clock_digital_number_pane_cp02

0xf2b0,	// (0x0006a5be) clock_digital_number_pane_cp03_ParamLimits

0xf2b0,	// (0x0006a5be) clock_digital_number_pane_cp03

0xf2bc,	// (0x0006a5ca) clock_digital_number_pane_cp04_ParamLimits

0xf2bc,	// (0x0006a5ca) clock_digital_number_pane_cp04

0xf2c8,	// (0x0006a5d6) clock_digital_separator_pane_ParamLimits

0xf2c8,	// (0x0006a5d6) clock_digital_separator_pane

0xf2d4,	// (0x0006a5e2) popup_clock_digital_window_t1_ParamLimits

0xf2d4,	// (0x0006a5e2) popup_clock_digital_window_t1

0x5cdb,	// (0x00060fe9) clock_digital_number_pane_g1

0x5cdb,	// (0x00060fe9) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0006aa16) clock_digital_number_pane_g

0x5cdb,	// (0x00060fe9) clock_digital_separator_pane_g1

0x5cdb,	// (0x00060fe9) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0006aa16) clock_digital_separator_pane_g

0xb64a,	// (0x00066958) aid_fill_nsta_ParamLimits

0xb782,	// (0x00066a90) indicator_nsta_pane_ParamLimits

0x20ec,	// (0x0005d3fa) popup_clock_analogue_window

0x20ec,	// (0x0005d3fa) popup_clock_digital_window

0xcbc1,	// (0x00067ecf) grid_indicator_nsta_pane_ParamLimits

0x4519,	// (0x0005f827) clock_nsta_pane_t2

0x0001,

0xfab1,	// (0x0006adbf) clock_nsta_pane_t

0xf246,	// (0x0006a554) aid_size_max_handle

0xa93b,	// (0x00065c49) aid_size_min_handle

0xe9a8,	// (0x00069cb6) editor_scroll_pane

0x52fe,	// (0x0006060c) ex_editor_pane

0x8ac8,	// (0x00063dd6) scroll_pane_cp13

0x6301,	// (0x0006160f) scroll_pane_cp14

0x8ead,	// (0x000641bb) scroll_pane_cp36

0xa9db,	// (0x00065ce9) list_single_graphic_hl_pane_cp2_ParamLimits

0xa9db,	// (0x00065ce9) list_single_graphic_hl_pane_cp2

0xca5d,	// (0x00067d6b) list_single_graphic_hl_pane_ParamLimits

0xca5d,	// (0x00067d6b) list_single_graphic_hl_pane

0xf054,	// (0x0006a362) aid_size_min_hl_cp1

0x5306,	// (0x00060614) list_highlight_pane_cp34_ParamLimits

0x5306,	// (0x00060614) list_highlight_pane_cp34

0x5317,	// (0x00060625) list_single_graphic_hl_pane_g1_ParamLimits

0x5317,	// (0x00060625) list_single_graphic_hl_pane_g1

0xbd53,	// (0x00067061) list_single_graphic_hl_pane_g2_ParamLimits

0xbd53,	// (0x00067061) list_single_graphic_hl_pane_g2

0xbd53,	// (0x00067061) list_single_graphic_hl_pane_g3_ParamLimits

0xbd53,	// (0x00067061) list_single_graphic_hl_pane_g3

0xcf2d,	// (0x0006823b) list_single_graphic_hl_pane_g4_ParamLimits

0xcf2d,	// (0x0006823b) list_single_graphic_hl_pane_g4

0x5354,	// (0x00060662) list_single_graphic_hl_pane_g5_ParamLimits

0x5354,	// (0x00060662) list_single_graphic_hl_pane_g5

0x0004,

0xfbfc,	// (0x0006af0a) list_single_graphic_hl_pane_g_ParamLimits

0xfbfc,	// (0x0006af0a) list_single_graphic_hl_pane_g

0xbd5f,	// (0x0006706d) list_single_graphic_hl_pane_t1_ParamLimits

0xbd5f,	// (0x0006706d) list_single_graphic_hl_pane_t1

0x5324,	// (0x00060632) aid_size_min_hl_cp2

0x532d,	// (0x0006063b) list_highlight_pane_cp34_cp2_ParamLimits

0x532d,	// (0x0006063b) list_highlight_pane_cp34_cp2

0x5317,	// (0x00060625) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5317,	// (0x00060625) list_single_graphic_hl_pane_g1_cp2

0x533a,	// (0x00060648) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x533a,	// (0x00060648) list_single_graphic_hl_pane_g2_cp2

0xcf39,	// (0x00068247) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcf39,	// (0x00068247) list_single_graphic_hl_pane_g3_cp2

0xcf2d,	// (0x0006823b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcf2d,	// (0x0006823b) list_single_graphic_hl_pane_g4_cp2

0x5354,	// (0x00060662) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5354,	// (0x00060662) list_single_graphic_hl_pane_g5_cp2

0xadad,	// (0x000660bb) control_pane_g4_ParamLimits

0xadad,	// (0x000660bb) control_pane_g4

0x016a,	// (0x0005b478) bg_popup_sub_pane_cp10_ParamLimits

0x4af0,	// (0x0005fdfe) list_choice_list_pane_ParamLimits

0x4aff,	// (0x0005fe0d) scroll_pane_cp23

0x5e80,	// (0x0006118e) bg_popup_preview_window_pane_cp02_ParamLimits

0x512e,	// (0x0006043c) list_preview_fixed_pane_ParamLimits

0x5144,	// (0x00060452) list_preview_fixed_pane_cp_ParamLimits

0x5144,	// (0x00060452) list_preview_fixed_pane_cp

0x5150,	// (0x0006045e) popup_preview_fixed_window_g1_ParamLimits

0x5150,	// (0x0006045e) popup_preview_fixed_window_g1

0x515c,	// (0x0006046a) popup_preview_fixed_window_g2_ParamLimits

0x515c,	// (0x0006046a) popup_preview_fixed_window_g2

0x0002,

0xfb84,	// (0x0006ae92) popup_preview_fixed_window_g_ParamLimits

0xfb84,	// (0x0006ae92) popup_preview_fixed_window_g

0xf1b8,	// (0x0006a4c6) aid_navi_side_left_pane_ParamLimits

0xf1cd,	// (0x0006a4db) aid_navi_side_right_pane_ParamLimits

0xf1e5,	// (0x0006a4f3) navi_icon_pane_stacon_ParamLimits

0xf1f9,	// (0x0006a507) navi_navi_pane_stacon_ParamLimits

0xf1e5,	// (0x0006a4f3) navi_text_pane_stacon_ParamLimits

0x5cd1,	// (0x00060fdf) main_text_info_pane

0x537e,	// (0x0006068c) listscroll_text_info_pane

0x5386,	// (0x00060694) list_text_info_pane_ParamLimits

0x5386,	// (0x00060694) list_text_info_pane

0x5395,	// (0x000606a3) scroll_pane_cp24_ParamLimits

0x5395,	// (0x000606a3) scroll_pane_cp24

0xcf47,	// (0x00068255) list_text_info_pane_t1_ParamLimits

0xcf47,	// (0x00068255) list_text_info_pane_t1

0xaf43,	// (0x00066251) popup_fast_swap2_window_ParamLimits

0xaf43,	// (0x00066251) popup_fast_swap2_window

0x53d8,	// (0x000606e6) aid_size_cell_fast2

0x5cd1,	// (0x00060fdf) bg_popup_window_pane_cp17

0x2749,	// (0x0005da57) heading_pane_cp2

0x6086,	// (0x00061394) listscroll_fast2_pane

0x53e2,	// (0x000606f0) grid_fast2_pane

0x53ec,	// (0x000606fa) listscroll_fast2_pane_g1

0x53f6,	// (0x00060704) listscroll_fast2_pane_g2

0x0001,

0xfc07,	// (0x0006af15) listscroll_fast2_pane_g

0x8ac8,	// (0x00063dd6) scroll_pane_cp26

0x5400,	// (0x0006070e) cell_fast2_pane_ParamLimits

0x5400,	// (0x0006070e) cell_fast2_pane

0x5417,	// (0x00060725) cell_fast2_pane_g1

0x5420,	// (0x0006072e) cell_fast2_pane_g2

0x5429,	// (0x00060737) cell_fast2_pane_g3

0x0002,

0xfc0c,	// (0x0006af1a) cell_fast2_pane_g

0x60c8,	// (0x000613d6) grid_highlight_pane_cp9

0x60dd,	// (0x000613eb) main_eswt_pane_ParamLimits

0x60dd,	// (0x000613eb) main_eswt_pane

0x53aa,	// (0x000606b8) list_single_text_info_pane

0x5431,	// (0x0006073f) eswt_ctrl_button_pane

0x5431,	// (0x0006073f) eswt_ctrl_canvas_pane

0x5439,	// (0x00060747) eswt_ctrl_combo_pane

0x5431,	// (0x0006073f) eswt_ctrl_default_pane

0x5431,	// (0x0006073f) eswt_ctrl_label_pane

0x5441,	// (0x0006074f) eswt_ctrl_wait_pane

0x5449,	// (0x00060757) eswt_shell_pane

0x5cd1,	// (0x00060fdf) listscroll_eswt_app_pane

0x5469,	// (0x00060777) popup_eswt_tasktip_window_ParamLimits

0x5469,	// (0x00060777) popup_eswt_tasktip_window

0x2389,	// (0x0005d697) bg_popup_window_pane_cp18

0x547a,	// (0x00060788) eswt_control_pane_g1_ParamLimits

0x547a,	// (0x00060788) eswt_control_pane_g1

0x5487,	// (0x00060795) eswt_control_pane_g2_ParamLimits

0x5487,	// (0x00060795) eswt_control_pane_g2

0x5494,	// (0x000607a2) eswt_control_pane_g3_ParamLimits

0x5494,	// (0x000607a2) eswt_control_pane_g3

0x54a1,	// (0x000607af) eswt_control_pane_g4_ParamLimits

0x54a1,	// (0x000607af) eswt_control_pane_g4

0x0003,

0xfc13,	// (0x0006af21) eswt_control_pane_g_ParamLimits

0xfc13,	// (0x0006af21) eswt_control_pane_g

0x899c,	// (0x00063caa) bg_button_pane_ParamLimits

0x899c,	// (0x00063caa) bg_button_pane

0x60dd,	// (0x000613eb) common_borders_pane_copy2_ParamLimits

0x60dd,	// (0x000613eb) common_borders_pane_copy2

0x54ae,	// (0x000607bc) control_button_pane_g1_ParamLimits

0x54ae,	// (0x000607bc) control_button_pane_g1

0x54ba,	// (0x000607c8) control_button_pane_g2_ParamLimits

0x54ba,	// (0x000607c8) control_button_pane_g2

0x54c6,	// (0x000607d4) control_button_pane_g3_ParamLimits

0x54c6,	// (0x000607d4) control_button_pane_g3

0x0002,

0xfc1c,	// (0x0006af2a) control_button_pane_g_ParamLimits

0xfc1c,	// (0x0006af2a) control_button_pane_g

0x54da,	// (0x000607e8) control_button_pane_t1

0x54e8,	// (0x000607f6) control_button_pane_t2

0x0001,

0xfc23,	// (0x0006af31) control_button_pane_t

0x2315,	// (0x0005d623) bg_button_pane_g1

0x2325,	// (0x0005d633) bg_button_pane_g2

0x231d,	// (0x0005d62b) bg_button_pane_g3

0x2335,	// (0x0005d643) bg_button_pane_g4

0x232d,	// (0x0005d63b) bg_button_pane_g5

0x233d,	// (0x0005d64b) bg_button_pane_g6

0x2345,	// (0x0005d653) bg_button_pane_g7

0x2355,	// (0x0005d663) bg_button_pane_g8

0x234d,	// (0x0005d65b) bg_button_pane_g9

0x0008,

0xf866,	// (0x0006ab74) bg_button_pane_g

0x4aab,	// (0x0005fdb9) common_borders_pane_ParamLimits

0x4aab,	// (0x0005fdb9) common_borders_pane

0x547a,	// (0x00060788) eswt_control_pane_g1_copy1_ParamLimits

0x547a,	// (0x00060788) eswt_control_pane_g1_copy1

0x5487,	// (0x00060795) eswt_control_pane_g2_copy1_ParamLimits

0x5487,	// (0x00060795) eswt_control_pane_g2_copy1

0x5494,	// (0x000607a2) eswt_control_pane_g3_copy1_ParamLimits

0x5494,	// (0x000607a2) eswt_control_pane_g3_copy1

0x54a1,	// (0x000607af) eswt_control_pane_g4_copy1_ParamLimits

0x54a1,	// (0x000607af) eswt_control_pane_g4_copy1

0x4ae6,	// (0x0005fdf4) bg_eswt_ctrl_canvas_pane_g1

0x4aab,	// (0x0005fdb9) common_borders_pane_cp2_ParamLimits

0x4aab,	// (0x0005fdb9) common_borders_pane_cp2

0x4aab,	// (0x0005fdb9) common_borders_pane_cp3_ParamLimits

0x4aab,	// (0x0005fdb9) common_borders_pane_cp3

0x54f6,	// (0x00060804) separator_horizontal_pane

0x54fe,	// (0x0006080c) separator_vertical_pane

0x547a,	// (0x00060788) eswt_control_pane_g1_copy2_ParamLimits

0x547a,	// (0x00060788) eswt_control_pane_g1_copy2

0x5487,	// (0x00060795) eswt_control_pane_g2_copy2_ParamLimits

0x5487,	// (0x00060795) eswt_control_pane_g2_copy2

0x5494,	// (0x000607a2) eswt_control_pane_g3_copy2_ParamLimits

0x5494,	// (0x000607a2) eswt_control_pane_g3_copy2

0x54a1,	// (0x000607af) eswt_control_pane_g4_copy2_ParamLimits

0x54a1,	// (0x000607af) eswt_control_pane_g4_copy2

0x5cd1,	// (0x00060fdf) common_borders_pane_cp4

0x5507,	// (0x00060815) separator_horizontal_pane_g1

0x5510,	// (0x0006081e) separator_horizontal_pane_g2

0x5519,	// (0x00060827) separator_horizontal_pane_g3

0x0002,

0xfc28,	// (0x0006af36) separator_horizontal_pane_g

0x547a,	// (0x00060788) eswt_control_pane_g1_copy3_ParamLimits

0x547a,	// (0x00060788) eswt_control_pane_g1_copy3

0x5487,	// (0x00060795) eswt_control_pane_g2_copy3_ParamLimits

0x5487,	// (0x00060795) eswt_control_pane_g2_copy3

0x5494,	// (0x000607a2) eswt_control_pane_g3_copy3_ParamLimits

0x5494,	// (0x000607a2) eswt_control_pane_g3_copy3

0x54a1,	// (0x000607af) eswt_control_pane_g4_copy3_ParamLimits

0x54a1,	// (0x000607af) eswt_control_pane_g4_copy3

0x5cd1,	// (0x00060fdf) common_borders_pane_cp5

0x5522,	// (0x00060830) separator_vertical_pane_g1

0x552b,	// (0x00060839) separator_vertical_pane_g2

0x5534,	// (0x00060842) separator_vertical_pane_g3

0x0002,

0xfc2f,	// (0x0006af3d) separator_vertical_pane_g

0x547a,	// (0x00060788) eswt_control_pane_g1_copy4_ParamLimits

0x547a,	// (0x00060788) eswt_control_pane_g1_copy4

0x5487,	// (0x00060795) eswt_control_pane_g2_copy4_ParamLimits

0x5487,	// (0x00060795) eswt_control_pane_g2_copy4

0x5494,	// (0x000607a2) eswt_control_pane_g3_copy4_ParamLimits

0x5494,	// (0x000607a2) eswt_control_pane_g3_copy4

0x54a1,	// (0x000607af) eswt_control_pane_g4_copy4_ParamLimits

0x54a1,	// (0x000607af) eswt_control_pane_g4_copy4

0xcf69,	// (0x00068277) eswt_ctrl_combo_button_pane

0xcf71,	// (0x0006827f) eswt_ctrl_input_pane

0xcf79,	// (0x00068287) popup_choice_list_window_cp70

0xcf81,	// (0x0006828f) eswt_ctrl_input_pane_t1

0x5cd1,	// (0x00060fdf) input_focus_pane_cp70

0x4aab,	// (0x0005fdb9) bg_button_pane_cp70_ParamLimits

0x4aab,	// (0x0005fdb9) bg_button_pane_cp70

0xcf8f,	// (0x0006829d) eswt_ctrl_combo_button_pane_g1

0x556b,	// (0x00060879) wait_bar_pane_cp70

0x2389,	// (0x0005d697) bg_popup_window_pane_cp70_ParamLimits

0x2389,	// (0x0005d697) bg_popup_window_pane_cp70

0x5573,	// (0x00060881) popup_eswt_tasktip_window_t1

0x5589,	// (0x00060897) wait_bar_pane_cp71_ParamLimits

0x5589,	// (0x00060897) wait_bar_pane_cp71

0x5595,	// (0x000608a3) grid_eswt_app_pane

0x8d0d,	// (0x0006401b) scroll_pane_cp70

0xcf97,	// (0x000682a5) cell_eswt_app_pane_ParamLimits

0xcf97,	// (0x000682a5) cell_eswt_app_pane

0xcfc9,	// (0x000682d7) cell_eswt_app_pane_g1_ParamLimits

0xcfc9,	// (0x000682d7) cell_eswt_app_pane_g1

0xcff8,	// (0x00068306) cell_eswt_app_pane_g2_ParamLimits

0xcff8,	// (0x00068306) cell_eswt_app_pane_g2

0x0001,

0xfc36,	// (0x0006af44) cell_eswt_app_pane_g_ParamLimits

0xfc36,	// (0x0006af44) cell_eswt_app_pane_g

0xd021,	// (0x0006832f) cell_eswt_app_pane_t1_ParamLimits

0xd021,	// (0x0006832f) cell_eswt_app_pane_t1

0x565a,	// (0x00060968) grid_highlight_pane_cp70_ParamLimits

0x565a,	// (0x00060968) grid_highlight_pane_cp70

0x91e6,	// (0x000644f4) set_content_pane_g1

0xad43,	// (0x00066051) status_small_volume_pane

0x0c19,	// (0x0005bf27) status_small_volume_pane_g1

0x0c21,	// (0x0005bf2f) volume_small2_pane

0x0c2a,	// (0x0005bf38) volume_small2_pane_g1

0x0c33,	// (0x0005bf41) volume_small2_pane_g2

0x0c3c,	// (0x0005bf4a) volume_small2_pane_g3

0x0c45,	// (0x0005bf53) volume_small2_pane_g4

0x0c4e,	// (0x0005bf5c) volume_small2_pane_g5

0x0c57,	// (0x0005bf65) volume_small2_pane_g6

0x0c60,	// (0x0005bf6e) volume_small2_pane_g7

0x0c69,	// (0x0005bf77) volume_small2_pane_g8

0x0c72,	// (0x0005bf80) volume_small2_pane_g9

0x0c7b,	// (0x0005bf89) volume_small2_pane_g10

0x0009,

0xfc3b,	// (0x0006af49) volume_small2_pane_g

0x4eb5,	// (0x000601c3) fep_vkb_top_text_pane_g1_ParamLimits

0xced5,	// (0x000681e3) fep_vkb_top_text_pane_t1_ParamLimits

0x5168,	// (0x00060476) popup_preview_fixed_window_g3_ParamLimits

0x5168,	// (0x00060476) popup_preview_fixed_window_g3

0xb5dd,	// (0x000668eb) popup_toolbar_trans_pane

0xc898,	// (0x00067ba6) aid_height_set_list_ParamLimits

0x36de,	// (0x0005e9ec) aid_size_parent_ParamLimits

0x016a,	// (0x0005b478) list_highlight_pane_cp2_ParamLimits

0x91e6,	// (0x000644f4) set_content_pane_g1_ParamLimits

0xbcf5,	// (0x00067003) list_single_image_pane_ParamLimits

0xbcf5,	// (0x00067003) list_single_image_pane

0xd053,	// (0x00068361) aid_size_cell_image_ParamLimits

0xd053,	// (0x00068361) aid_size_cell_image

0xd060,	// (0x0006836e) grid_single_image_pane_ParamLimits

0xd060,	// (0x0006836e) grid_single_image_pane

0x89aa,	// (0x00063cb8) list_single_image_pane_g1_ParamLimits

0x89aa,	// (0x00063cb8) list_single_image_pane_g1

0x89b6,	// (0x00063cc4) list_single_image_pane_g2_ParamLimits

0x89b6,	// (0x00063cc4) list_single_image_pane_g2

0x0001,

0xfc50,	// (0x0006af5e) list_single_image_pane_g_ParamLimits

0xfc50,	// (0x0006af5e) list_single_image_pane_g

0x5681,	// (0x0006098f) list_single_image_pane_t1_ParamLimits

0x5681,	// (0x0006098f) list_single_image_pane_t1

0xd06e,	// (0x0006837c) cell_image_list_pane_ParamLimits

0xd06e,	// (0x0006837c) cell_image_list_pane

0xd082,	// (0x00068390) cell_image_list_pane_g1

0xd08b,	// (0x00068399) cell_image_list_pane_g2

0x0001,

0xfc55,	// (0x0006af63) cell_image_list_pane_g

0x56bf,	// (0x000609cd) aid_size_cell_tb_trans_pane

0x899c,	// (0x00063caa) bg_tb_trans_pane

0x56d1,	// (0x000609df) grid_tb_trans_pane

0x2315,	// (0x0005d623) bg_tb_trans_pane_g1

0x2325,	// (0x0005d633) bg_tb_trans_pane_g2

0x231d,	// (0x0005d62b) bg_tb_trans_pane_g3

0x2335,	// (0x0005d643) bg_tb_trans_pane_g4

0x232d,	// (0x0005d63b) bg_tb_trans_pane_g5

0x2355,	// (0x0005d663) bg_tb_trans_pane_g6

0x234d,	// (0x0005d65b) bg_tb_trans_pane_g7

0x233d,	// (0x0005d64b) bg_tb_trans_pane_g8

0x2345,	// (0x0005d653) bg_tb_trans_pane_g9

0x0008,

0xfc5a,	// (0x0006af68) bg_tb_trans_pane_g

0x56e5,	// (0x000609f3) cell_toolbar_trans_pane_ParamLimits

0x56e5,	// (0x000609f3) cell_toolbar_trans_pane

0x4ae6,	// (0x0005fdf4) cell_toolbar_trans_pane_g1

0xccad,	// (0x00067fbb) list_form2_midp_pane_t1

0xccbb,	// (0x00067fc9) list_form2_midp_pane_t2

0x0001,

0xfaf7,	// (0x0006ae05) list_form2_midp_pane_t

0x4726,	// (0x0005fa34) scroll_pane_cp51_ParamLimits

0x48ed,	// (0x0005fbfb) form2_midp_wait_pane_g1

0x48f6,	// (0x0005fc04) form2_midp_wait_pane_g2

0x48ff,	// (0x0005fc0d) form2_midp_wait_pane_g3

0x0002,

0xfb0c,	// (0x0006ae1a) form2_midp_wait_pane_g

0x5d3f,	// (0x0006104d) list_highlight_pane_cp21_ParamLimits

0x4943,	// (0x0005fc51) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4952,	// (0x0005fc60) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x38b6,	// (0x0005ebc4) list_single_2graphic_im_pane_ParamLimits

0x38b6,	// (0x0005ebc4) list_single_2graphic_im_pane

0xd094,	// (0x000683a2) list_single_2graphic_im_pane_g1_ParamLimits

0xd094,	// (0x000683a2) list_single_2graphic_im_pane_g1

0xd0a5,	// (0x000683b3) list_single_2graphic_im_pane_g2_ParamLimits

0xd0a5,	// (0x000683b3) list_single_2graphic_im_pane_g2

0xd0b1,	// (0x000683bf) list_single_2graphic_im_pane_g3_ParamLimits

0xd0b1,	// (0x000683bf) list_single_2graphic_im_pane_g3

0x0003,

0xfc6d,	// (0x0006af7b) list_single_2graphic_im_pane_g_ParamLimits

0xfc6d,	// (0x0006af7b) list_single_2graphic_im_pane_g

0xd0c5,	// (0x000683d3) list_single_2graphic_im_pane_t1_ParamLimits

0xd0c5,	// (0x000683d3) list_single_2graphic_im_pane_t1

0x5174,	// (0x00060482) list_single_graphic_2heading_pane_fp_ParamLimits

0x5174,	// (0x00060482) list_single_graphic_2heading_pane_fp

0xef36,	// (0x0006a244) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xef36,	// (0x0006a244) list_single_graphic_2heading_pane_fp_g1

0x518d,	// (0x0006049b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x518d,	// (0x0006049b) list_single_graphic_2heading_pane_fp_g2

0x50e6,	// (0x000603f4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x50e6,	// (0x000603f4) list_single_graphic_2heading_pane_fp_g3

0x50f2,	// (0x00060400) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x50f2,	// (0x00060400) list_single_graphic_2heading_pane_fp_g4

0x5199,	// (0x000604a7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5199,	// (0x000604a7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb94,	// (0x0006aea2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb94,	// (0x0006aea2) list_single_graphic_2heading_pane_fp_g

0xf05d,	// (0x0006a36b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf05d,	// (0x0006a36b) list_single_graphic_2heading_pane_fp_t1

0xef6e,	// (0x0006a27c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xef6e,	// (0x0006a27c) list_single_graphic_2heading_pane_fp_t2

0xf073,	// (0x0006a381) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf073,	// (0x0006a381) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc76,	// (0x0006af84) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc76,	// (0x0006af84) list_single_graphic_2heading_pane_fp_t

0x4b77,	// (0x0005fe85) fep_hwr_write_pane_g5_ParamLimits

0x4b77,	// (0x0005fe85) fep_hwr_write_pane_g5

0x4b83,	// (0x0005fe91) fep_hwr_write_pane_g6_ParamLimits

0x4b83,	// (0x0005fe91) fep_hwr_write_pane_g6

0x5449,	// (0x00060757) eswt_shell_pane_ParamLimits

0x2389,	// (0x0005d697) bg_popup_window_pane_cp18_ParamLimits

0x3624,	// (0x0005e932) heading_pane_cp70

0x5573,	// (0x00060881) popup_eswt_tasktip_window_t1_ParamLimits

0xb6a7,	// (0x000669b5) aid_touch_tab_arrow_left

0xb6bd,	// (0x000669cb) aid_touch_tab_arrow_right

0x5cef,	// (0x00060ffd) title_pane_g3_ParamLimits

0x5cef,	// (0x00060ffd) title_pane_g3

0x895b,	// (0x00063c69) set_value_pane_g1

0xb5dd,	// (0x000668eb) popup_toolbar_trans_pane_ParamLimits

0x56bf,	// (0x000609cd) aid_size_cell_tb_trans_pane_ParamLimits

0x899c,	// (0x00063caa) bg_tb_trans_pane_ParamLimits

0x56d1,	// (0x000609df) grid_tb_trans_pane_ParamLimits

0x5e80,	// (0x0006118e) cont_note_pane_ParamLimits

0x5e80,	// (0x0006118e) cont_note_pane

0x60dd,	// (0x000613eb) cont_snote2_single_text_pane_ParamLimits

0x60dd,	// (0x000613eb) cont_snote2_single_text_pane

0x60dd,	// (0x000613eb) cont_snote2_single_graphic_pane_ParamLimits

0x60dd,	// (0x000613eb) cont_snote2_single_graphic_pane

0x2965,	// (0x0005dc73) cont_note_wait_pane_ParamLimits

0x2965,	// (0x0005dc73) cont_note_wait_pane

0x2965,	// (0x0005dc73) cont_note_image_pane_ParamLimits

0x2965,	// (0x0005dc73) cont_note_image_pane

0x5779,	// (0x00060a87) popup_note2_window_g1_ParamLimits

0x5779,	// (0x00060a87) popup_note2_window_g1

0x57aa,	// (0x00060ab8) popup_note2_window_t1_ParamLimits

0x57aa,	// (0x00060ab8) popup_note2_window_t1

0x57ef,	// (0x00060afd) popup_note2_window_t2_ParamLimits

0x57ef,	// (0x00060afd) popup_note2_window_t2

0x5834,	// (0x00060b42) popup_note2_window_t3_ParamLimits

0x5834,	// (0x00060b42) popup_note2_window_t3

0x5879,	// (0x00060b87) popup_note2_window_t4_ParamLimits

0x5879,	// (0x00060b87) popup_note2_window_t4

0x5f04,	// (0x00061212) popup_note2_window_t5_ParamLimits

0x5f04,	// (0x00061212) popup_note2_window_t5

0x0004,

0xfc82,	// (0x0006af90) popup_note2_window_t_ParamLimits

0xfc82,	// (0x0006af90) popup_note2_window_t

0x58a8,	// (0x00060bb6) popup_note2_image_window_g1_ParamLimits

0x58a8,	// (0x00060bb6) popup_note2_image_window_g1

0x58b4,	// (0x00060bc2) popup_note2_image_window_g2_ParamLimits

0x58b4,	// (0x00060bc2) popup_note2_image_window_g2

0x0001,

0xfc8d,	// (0x0006af9b) popup_note2_image_window_g_ParamLimits

0xfc8d,	// (0x0006af9b) popup_note2_image_window_g

0x58c6,	// (0x00060bd4) popup_note2_image_window_t1_ParamLimits

0x58c6,	// (0x00060bd4) popup_note2_image_window_t1

0x58de,	// (0x00060bec) popup_note2_image_window_t2_ParamLimits

0x58de,	// (0x00060bec) popup_note2_image_window_t2

0x58f6,	// (0x00060c04) popup_note2_image_window_t3_ParamLimits

0x58f6,	// (0x00060c04) popup_note2_image_window_t3

0x0002,

0xfc92,	// (0x0006afa0) popup_note2_image_window_t_ParamLimits

0xfc92,	// (0x0006afa0) popup_note2_image_window_t

0x2973,	// (0x0005dc81) popup_note2_wait_window_g1_ParamLimits

0x2973,	// (0x0005dc81) popup_note2_wait_window_g1

0x5912,	// (0x00060c20) popup_note2_wait_window_g2_ParamLimits

0x5912,	// (0x00060c20) popup_note2_wait_window_g2

0x298b,	// (0x0005dc99) popup_note2_wait_window_g3_ParamLimits

0x298b,	// (0x0005dc99) popup_note2_wait_window_g3

0x0002,

0xfc99,	// (0x0006afa7) popup_note2_wait_window_g_ParamLimits

0xfc99,	// (0x0006afa7) popup_note2_wait_window_g

0x591e,	// (0x00060c2c) popup_note2_wait_window_t1_ParamLimits

0x591e,	// (0x00060c2c) popup_note2_wait_window_t1

0x593c,	// (0x00060c4a) popup_note2_wait_window_t2_ParamLimits

0x593c,	// (0x00060c4a) popup_note2_wait_window_t2

0x595a,	// (0x00060c68) popup_note2_wait_window_t3_ParamLimits

0x595a,	// (0x00060c68) popup_note2_wait_window_t3

0x596c,	// (0x00060c7a) popup_note2_wait_window_t4_ParamLimits

0x596c,	// (0x00060c7a) popup_note2_wait_window_t4

0x0003,

0xfca0,	// (0x0006afae) popup_note2_wait_window_t_ParamLimits

0xfca0,	// (0x0006afae) popup_note2_wait_window_t

0x597e,	// (0x00060c8c) wait_bar2_pane_ParamLimits

0x597e,	// (0x00060c8c) wait_bar2_pane

0x5996,	// (0x00060ca4) popup_snote2_single_text_window_g1_ParamLimits

0x5996,	// (0x00060ca4) popup_snote2_single_text_window_g1

0x59be,	// (0x00060ccc) popup_snote2_single_text_window_t1_ParamLimits

0x59be,	// (0x00060ccc) popup_snote2_single_text_window_t1

0x5a0a,	// (0x00060d18) popup_snote2_single_text_window_t2_ParamLimits

0x5a0a,	// (0x00060d18) popup_snote2_single_text_window_t2

0x5a56,	// (0x00060d64) popup_snote2_single_text_window_t3_ParamLimits

0x5a56,	// (0x00060d64) popup_snote2_single_text_window_t3

0x5a97,	// (0x00060da5) popup_snote2_single_text_window_t4_ParamLimits

0x5a97,	// (0x00060da5) popup_snote2_single_text_window_t4

0x5acd,	// (0x00060ddb) popup_snote2_single_text_window_t5_ParamLimits

0x5acd,	// (0x00060ddb) popup_snote2_single_text_window_t5

0x0004,

0xfca9,	// (0x0006afb7) popup_snote2_single_text_window_t_ParamLimits

0xfca9,	// (0x0006afb7) popup_snote2_single_text_window_t

0x5af8,	// (0x00060e06) popup_snote2_single_graphic_window_g1_ParamLimits

0x5af8,	// (0x00060e06) popup_snote2_single_graphic_window_g1

0x5b20,	// (0x00060e2e) popup_snote2_single_graphic_window_g2_ParamLimits

0x5b20,	// (0x00060e2e) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb4,	// (0x0006afc2) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb4,	// (0x0006afc2) popup_snote2_single_graphic_window_g

0x5b48,	// (0x00060e56) popup_snote2_single_graphic_window_t1_ParamLimits

0x5b48,	// (0x00060e56) popup_snote2_single_graphic_window_t1

0x5b94,	// (0x00060ea2) popup_snote2_single_graphic_window_t2_ParamLimits

0x5b94,	// (0x00060ea2) popup_snote2_single_graphic_window_t2

0x5a56,	// (0x00060d64) popup_snote2_single_graphic_window_t3_ParamLimits

0x5a56,	// (0x00060d64) popup_snote2_single_graphic_window_t3

0x5a97,	// (0x00060da5) popup_snote2_single_graphic_window_t4_ParamLimits

0x5a97,	// (0x00060da5) popup_snote2_single_graphic_window_t4

0x5acd,	// (0x00060ddb) popup_snote2_single_graphic_window_t5_ParamLimits

0x5acd,	// (0x00060ddb) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb9,	// (0x0006afc7) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb9,	// (0x0006afc7) popup_snote2_single_graphic_window_t

0x45d6,	// (0x0005f8e4) clock_nsta_pane_cp2_t1

0x45d6,	// (0x0005f8e4) clock_nsta_pane_cp2_t2

0x0001,

0xfacd,	// (0x0006addb) clock_nsta_pane_cp2_t

0xc545,	// (0x00067853) form_field_data_wide_pane_g1_ParamLimits

0x89aa,	// (0x00063cb8) form_field_data_wide_pane_g2_ParamLimits

0x89aa,	// (0x00063cb8) form_field_data_wide_pane_g2

0x89b6,	// (0x00063cc4) form_field_data_wide_pane_g3_ParamLimits

0x89b6,	// (0x00063cc4) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0006a98e) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0006a98e) form_field_data_wide_pane_g

0xcbab,	// (0x00067eb9) grid_touch_3_pane_ParamLimits

0xcbab,	// (0x00067eb9) grid_touch_3_pane

0xd0f6,	// (0x00068404) cell_touch_3_pane_ParamLimits

0xd0f6,	// (0x00068404) cell_touch_3_pane

0x4ae6,	// (0x0005fdf4) cell_touch_3_pane_g1

0x4ae6,	// (0x0005fdf4) cell_touch_3_pane_g2

0x0001,

0xfb52,	// (0x0006ae60) cell_touch_3_pane_g

0x5f36,	// (0x00061244) cont_query_data_pane

0x5f3e,	// (0x0006124c) cont_query_data_pane_cp1

0x5c13,	// (0x00060f21) button_value_adjust_pane_cp7

0x5c1b,	// (0x00060f29) query_popup_pane_cp3

0x8ede,	// (0x000641ec) bg_popup_sub_pane_cp22_ParamLimits

0xf2f3,	// (0x0006a601) navi_navi_volume_pane_cp2

0xf30e,	// (0x0006a61c) popup_side_volume_key_window_g2

0xf31d,	// (0x0006a62b) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0006aa24) popup_side_volume_key_window_g

0xf33a,	// (0x0006a648) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0006aa2b) popup_side_volume_key_window_t

0x90e9,	// (0x000643f7) popup_side_volume_key_window_ParamLimits

0xa35f,	// (0x0006566d) list_double_graphic_pane_g4_ParamLimits

0xa35f,	// (0x0006566d) list_double_graphic_pane_g4

0xca48,	// (0x00067d56) list_single_2heading_msg_pane_ParamLimits

0xca48,	// (0x00067d56) list_single_2heading_msg_pane

0xd140,	// (0x0006844e) list_single_2heading_msg_pane_g1_ParamLimits

0xd140,	// (0x0006844e) list_single_2heading_msg_pane_g1

0xd14c,	// (0x0006845a) list_single_2heading_msg_pane_g2_ParamLimits

0xd14c,	// (0x0006845a) list_single_2heading_msg_pane_g2

0xd15f,	// (0x0006846d) list_single_2heading_msg_pane_g3_ParamLimits

0xd15f,	// (0x0006846d) list_single_2heading_msg_pane_g3

0xd16b,	// (0x00068479) list_single_2heading_msg_pane_g4_ParamLimits

0xd16b,	// (0x00068479) list_single_2heading_msg_pane_g4

0x0003,

0xfcc4,	// (0x0006afd2) list_single_2heading_msg_pane_g_ParamLimits

0xfcc4,	// (0x0006afd2) list_single_2heading_msg_pane_g

0xbd75,	// (0x00067083) list_single_2heading_msg_pane_t1_ParamLimits

0xbd75,	// (0x00067083) list_single_2heading_msg_pane_t1

0xbd9d,	// (0x000670ab) list_single_2heading_msg_pane_t2_ParamLimits

0xbd9d,	// (0x000670ab) list_single_2heading_msg_pane_t2

0xbe08,	// (0x00067116) list_single_2heading_msg_pane_t3_ParamLimits

0xbe08,	// (0x00067116) list_single_2heading_msg_pane_t3

0xf093,	// (0x0006a3a1) list_single_2heading_msg_pane_t4_ParamLimits

0xf093,	// (0x0006a3a1) list_single_2heading_msg_pane_t4

0x0003,

0xfccd,	// (0x0006afdb) list_single_2heading_msg_pane_t_ParamLimits

0xfccd,	// (0x0006afdb) list_single_2heading_msg_pane_t

0x5cfb,	// (0x00061009) title_pane_g4_ParamLimits

0x5cfb,	// (0x00061009) title_pane_g4

0xf108,	// (0x0006a416) title_pane_stacon_g3_ParamLimits

0xf108,	// (0x0006a416) title_pane_stacon_g3

0x573c,	// (0x00060a4a) list_single_2graphic_im_pane_g4_ParamLimits

0x573c,	// (0x00060a4a) list_single_2graphic_im_pane_g4

0x33d5,	// (0x0005e6e3) popup_side_volume_key_window_cp

0x3dd0,	// (0x0005f0de) main_idle_act2_pane_t1

0x02d4,	// (0x0005b5e2) toolbar_button_pane_g10

0xa1c3,	// (0x000654d1) popup_toolbar_window_cp1

0x45c7,	// (0x0005f8d5) clock_nsta_pane_cp_t1

0x45c7,	// (0x0005f8d5) clock_nsta_pane_cp_t2

0x0001,

0xfac8,	// (0x0006add6) clock_nsta_pane_cp_t

0xf2f3,	// (0x0006a601) navi_navi_volume_pane_cp2_ParamLimits

0xf302,	// (0x0006a610) popup_side_volume_key_window_g1_ParamLimits

0xf30e,	// (0x0006a61c) popup_side_volume_key_window_g2_ParamLimits

0xf31d,	// (0x0006a62b) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0006aa24) popup_side_volume_key_window_g_ParamLimits

0x0848,	// (0x0005bb56) fep_hwr_aid_pane

0x08f1,	// (0x0005bbff) bg_fep_hwr_top_pane_g4_ParamLimits

0x4b47,	// (0x0005fe55) fep_hwr_top_pane_g1_ParamLimits

0x4b59,	// (0x0005fe67) fep_hwr_top_pane_g2_ParamLimits

0x0911,	// (0x0005bc1f) fep_hwr_top_pane_g3_ParamLimits

0xfb1d,	// (0x0006ae2b) fep_hwr_top_pane_g_ParamLimits

0x0926,	// (0x0005bc34) fep_hwr_top_text_pane_ParamLimits

0x318a,	// (0x0005e498) aid_touch_tab_arrow_arrow_2

0x3193,	// (0x0005e4a1) aid_touch_tab_arrow_left_2

0x085c,	// (0x0005bb6a) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0893,	// (0x0005bba1) fep_hwr_prediction_pane

0x4caf,	// (0x0005ffbd) fep_vkb_prediction_pane

0xceb5,	// (0x000681c3) fep_vkb_side_pane_g3_ParamLimits

0xceb5,	// (0x000681c3) fep_vkb_side_pane_g3

0x0ab5,	// (0x0005bdc3) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0b26,	// (0x0005be34) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0b33,	// (0x0005be41) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcc,	// (0x0006aeda) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0d14,	// (0x0005c022) fep_hwr_prediction_pane_g1

0x0d1e,	// (0x0005c02c) fep_hwr_prediction_pane_g2

0x0d26,	// (0x0005c034) fep_hwr_prediction_pane_g3

0x0d2e,	// (0x0005c03c) fep_hwr_prediction_pane_g4

0x0003,

0xfcd6,	// (0x0006afe4) fep_hwr_prediction_pane_g

0x5c42,	// (0x00060f50) fep_vkb_prediction_pane_g1

0x5c4c,	// (0x00060f5a) fep_vkb_prediction_pane_g2

0x5c54,	// (0x00060f62) fep_vkb_prediction_pane_g3

0x5c5c,	// (0x00060f6a) fep_vkb_prediction_pane_g4

0x0003,

0xfcdf,	// (0x0006afed) fep_vkb_prediction_pane_g

0x063c,	// (0x0005b94a) slider_set_pane_g3

0x0650,	// (0x0005b95e) slider_set_pane_g4

0x0668,	// (0x0005b976) slider_set_pane_g5

0x063c,	// (0x0005b94a) slider_set_pane_g6

0x067e,	// (0x0005b98c) slider_set_pane_g7

0x3863,	// (0x0005eb71) slider_form_pane_g3

0x386c,	// (0x0005eb7a) slider_form_pane_g4

0x3874,	// (0x0005eb82) slider_form_pane_g5

0x3863,	// (0x0005eb71) slider_form_pane_g6

0xca07,	// (0x00067d15) slider_form_pane_g7

0x4087,	// (0x0005f395) slider_set_pane_vc_g3

0x4090,	// (0x0005f39e) slider_set_pane_vc_g4

0x4099,	// (0x0005f3a7) slider_set_pane_vc_g5

0x4087,	// (0x0005f395) slider_set_pane_vc_g6

0x40a2,	// (0x0005f3b0) slider_set_pane_vc_g7

0x427a,	// (0x0005f588) slider_form_pane_vc_g1

0x4283,	// (0x0005f591) slider_form_pane_vc_g2

0x428c,	// (0x0005f59a) slider_form_pane_vc_g3

0x427a,	// (0x0005f588) slider_form_pane_vc_g4

0x4295,	// (0x0005f5a3) slider_form_pane_vc_g5

0x0004,

0xfa9a,	// (0x0006ada8) slider_form_pane_vc_g

0x5cd1,	// (0x00060fdf) main_idle_act3_pane

0x5c64,	// (0x00060f72) ai3_links_pane

0xd183,	// (0x00068491) popup_ai3_data_window_ParamLimits

0xd183,	// (0x00068491) popup_ai3_data_window

0x5cd1,	// (0x00060fdf) grid_ai3_links_pane

0xd1a1,	// (0x000684af) cell_ai3_links_pane_ParamLimits

0xd1a1,	// (0x000684af) cell_ai3_links_pane

0x5ca5,	// (0x00060fb3) bg_popup_sub_pane_cp11

0x5cb2,	// (0x00060fc0) cell_ai3_links_pane_g1

0x5cd1,	// (0x00060fdf) bg_popup_sub_pane_cp12

0x6338,	// (0x00061646) heading_ai3_data_pane

0x6340,	// (0x0006164e) list_ai3_gene_pane

0x634c,	// (0x0006165a) popup_ai3_data_window_g1

0x6354,	// (0x00061662) heading_ai3_data_pane_g1

0x635c,	// (0x0006166a) heading_ai3_data_pane_t1

0x636a,	// (0x00061678) list_double_ai3_gene_pane_ParamLimits

0x636a,	// (0x00061678) list_double_ai3_gene_pane

0x6377,	// (0x00061685) list_single_ai3_gene_pane_ParamLimits

0x6377,	// (0x00061685) list_single_ai3_gene_pane

0x4aab,	// (0x0005fdb9) list_highlight_pane_cp7_ParamLimits

0x4aab,	// (0x0005fdb9) list_highlight_pane_cp7

0x6384,	// (0x00061692) list_single_a13_gene_pane_t1_ParamLimits

0x6384,	// (0x00061692) list_single_a13_gene_pane_t1

0x639b,	// (0x000616a9) list_single_ai3_gene_pane_g1

0x63a4,	// (0x000616b2) list_single_ai3_gene_pane_g2

0x0001,

0xfce8,	// (0x0006aff6) list_single_ai3_gene_pane_g

0x63ac,	// (0x000616ba) list_double_ai3_gene_pane_g1_ParamLimits

0x63ac,	// (0x000616ba) list_double_ai3_gene_pane_g1

0x63b8,	// (0x000616c6) list_double_ai3_gene_pane_t1_ParamLimits

0x63b8,	// (0x000616c6) list_double_ai3_gene_pane_t1

0x63d4,	// (0x000616e2) list_double_ai3_gene_pane_t2_ParamLimits

0x63d4,	// (0x000616e2) list_double_ai3_gene_pane_t2

0x63e9,	// (0x000616f7) list_double_ai3_gene_pane_t3_ParamLimits

0x63e9,	// (0x000616f7) list_double_ai3_gene_pane_t3

0x0002,

0xfced,	// (0x0006affb) list_double_ai3_gene_pane_t_ParamLimits

0xfced,	// (0x0006affb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf089,	// (0x0006a397) aid_size_min_col_2

0xd12a,	// (0x00068438) aid_size_min_msg_ParamLimits

0xd12a,	// (0x00068438) aid_size_min_msg

0xcec9,	// (0x000681d7) fep_vkb_top_text_pane_g2_ParamLimits

0xcec9,	// (0x000681d7) fep_vkb_top_text_pane_g2

0x0001,

0xfb4d,	// (0x0006ae5b) fep_vkb_top_text_pane_g_ParamLimits

0xfb4d,	// (0x0006ae5b) fep_vkb_top_text_pane_g

0x5cd1,	// (0x00060fdf) main_hc_apps_shell_pane

0x6406,	// (0x00061714) grid_hc_apps_pane_ParamLimits

0x6406,	// (0x00061714) grid_hc_apps_pane

0x6415,	// (0x00061723) list_hc_apps_pane

0x641d,	// (0x0006172b) scroll_pane_cp37_ParamLimits

0x641d,	// (0x0006172b) scroll_pane_cp37

0xd1bb,	// (0x000684c9) cell_hc_apps_pane_ParamLimits

0xd1bb,	// (0x000684c9) cell_hc_apps_pane

0xd285,	// (0x00068593) cell_hc_apps_pane_g1_ParamLimits

0xd285,	// (0x00068593) cell_hc_apps_pane_g1

0x6512,	// (0x00061820) cell_hc_apps_pane_g2_ParamLimits

0x6512,	// (0x00061820) cell_hc_apps_pane_g2

0x652e,	// (0x0006183c) cell_hc_apps_pane_g3_ParamLimits

0x652e,	// (0x0006183c) cell_hc_apps_pane_g3

0x0002,

0xfcf4,	// (0x0006b002) cell_hc_apps_pane_g_ParamLimits

0xfcf4,	// (0x0006b002) cell_hc_apps_pane_g

0xd2b2,	// (0x000685c0) cell_hc_apps_pane_t1_ParamLimits

0xd2b2,	// (0x000685c0) cell_hc_apps_pane_t1

0x5e80,	// (0x0006118e) grid_highlight_pane_cp10_ParamLimits

0x5e80,	// (0x0006118e) grid_highlight_pane_cp10

0xd2f2,	// (0x00068600) list_single_hc_apps_pane_ParamLimits

0xd2f2,	// (0x00068600) list_single_hc_apps_pane

0xd32c,	// (0x0006863a) list_single_hc_apps_pane_g1

0xd345,	// (0x00068653) list_single_hc_apps_pane_g2

0x0001,

0xfcfb,	// (0x0006b009) list_single_hc_apps_pane_g

0xd35e,	// (0x0006866c) list_single_hc_apps_pane_g2_copy1

0xbe76,	// (0x00067184) list_single_hc_apps_pane_t1

0x5d3f,	// (0x0006104d) bg_set_opt_pane_cp_ParamLimits

0xe836,	// (0x00069b44) setting_slider_pane_t1_ParamLimits

0xe84f,	// (0x00069b5d) setting_slider_pane_t2_ParamLimits

0xe869,	// (0x00069b77) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0006a86c) setting_slider_pane_t_ParamLimits

0xe881,	// (0x00069b8f) slider_set_pane_ParamLimits

0xf53f,	// (0x0006a84d) control_pane_g5_ParamLimits

0xf53f,	// (0x0006a84d) control_pane_g5

0x3690,	// (0x0005e99e) slider_set_pane_g1_ParamLimits

0x0630,	// (0x0005b93e) slider_set_pane_g2_ParamLimits

0x063c,	// (0x0005b94a) slider_set_pane_g3_ParamLimits

0x0650,	// (0x0005b95e) slider_set_pane_g4_ParamLimits

0x0668,	// (0x0005b976) slider_set_pane_g5_ParamLimits

0x063c,	// (0x0005b94a) slider_set_pane_g6_ParamLimits

0x067e,	// (0x0005b98c) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0006ac72) slider_set_pane_g_ParamLimits

0x9191,	// (0x0006449f) navi_icon_text_pane_ParamLimits

0xb66e,	// (0x0006697c) aid_fill_nsta_2_ParamLimits

0xb6a7,	// (0x000669b5) aid_touch_tab_arrow_left_ParamLimits

0xb6bd,	// (0x000669cb) aid_touch_tab_arrow_right_ParamLimits

0xb758,	// (0x00066a66) clock_nsta_pane_ParamLimits

0xc745,	// (0x00067a53) navi_icon_pane_g1_ParamLimits

0xc751,	// (0x00067a5f) navi_text_pane_t1_ParamLimits

0xcc8f,	// (0x00067f9d) navi_icon_text_pane_g1_ParamLimits

0xcc9b,	// (0x00067fa9) navi_icon_text_pane_t1_ParamLimits

0xd32c,	// (0x0006863a) list_single_hc_apps_pane_g1_ParamLimits

0xd345,	// (0x00068653) list_single_hc_apps_pane_g2_ParamLimits

0xfcfb,	// (0x0006b009) list_single_hc_apps_pane_g_ParamLimits

0xd35e,	// (0x0006866c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbe76,	// (0x00067184) list_single_hc_apps_pane_t1_ParamLimits

0x9d49,	// (0x00065057) popup_toolbar2_fixed_window_ParamLimits

0x9d49,	// (0x00065057) popup_toolbar2_fixed_window

0xb5d3,	// (0x000668e1) popup_toolbar2_float_window

0x5cd1,	// (0x00060fdf) bg_popup_sub_pane_cp27

0x65e8,	// (0x000618f6) grid_toolbar2_float_pane

0x5cd1,	// (0x00060fdf) bg_popup_sub_pane_cp26

0x65e8,	// (0x000618f6) grid_toolbar2_fixed_pane

0xd37a,	// (0x00068688) cell_toolbar2_fixed_pane_ParamLimits

0xd37a,	// (0x00068688) cell_toolbar2_fixed_pane

0xd397,	// (0x000686a5) cell_toolbar2_fixed_pane_g1

0x6609,	// (0x00061917) toolbar2_fixed_button_pane

0x2315,	// (0x0005d623) toolbar2_fixed_button_pane_g1

0x2325,	// (0x0005d633) toolbar2_fixed_button_pane_g2

0x231d,	// (0x0005d62b) toolbar2_fixed_button_pane_g3

0x2335,	// (0x0005d643) toolbar2_fixed_button_pane_g4

0x232d,	// (0x0005d63b) toolbar2_fixed_button_pane_g5

0x233d,	// (0x0005d64b) toolbar2_fixed_button_pane_g6

0x2345,	// (0x0005d653) toolbar2_fixed_button_pane_g7

0x2355,	// (0x0005d663) toolbar2_fixed_button_pane_g8

0x234d,	// (0x0005d65b) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0006ab74) toolbar2_fixed_button_pane_g

0x6611,	// (0x0006191f) cell_toolbar2_float_pane_ParamLimits

0x6611,	// (0x0006191f) cell_toolbar2_float_pane

0x6622,	// (0x00061930) cell_toolbar2_float_pane_g1

0x6609,	// (0x00061917) toolbar2_fixed_button_pane_cp

0xcdb1,	// (0x000680bf) fep_vkb_accented_list_pane_ParamLimits

0xcdb1,	// (0x000680bf) fep_vkb_accented_list_pane

0x0a95,	// (0x0005bda3) bg_popup_fep_shadow_pane_g9

0xe9a8,	// (0x00069cb6) bg_popup_fep_shadow_pane_cp3

0x8aaf,	// (0x00063dbd) list_accented_list_pane

0x662b,	// (0x00061939) list_single_accented_list_pane_ParamLimits

0x662b,	// (0x00061939) list_single_accented_list_pane

0xe9a8,	// (0x00069cb6) list_highlight_pane_cp10

0x663c,	// (0x0006194a) list_single_accented_list_pane_t1

0xb4ef,	// (0x000667fd) popup_slider_window_ParamLimits

0xb4ef,	// (0x000667fd) popup_slider_window

0x5c23,	// (0x00060f31) aid_indentation_list_msg

0xd4a2,	// (0x000687b0) bg_popup_window_pane_cp19

0x6776,	// (0x00061a84) popup_slider_window_g1

0x6792,	// (0x00061aa0) popup_slider_window_g2

0x67ae,	// (0x00061abc) popup_slider_window_g3

0x0005,

0xfd00,	// (0x0006b00e) popup_slider_window_g

0x680a,	// (0x00061b18) popup_slider_window_t1

0x687e,	// (0x00061b8c) small_volume_slider_vertical_pane

0x4ae6,	// (0x0005fdf4) small_volume_slider_vertical_pane_g1

0x4ae6,	// (0x0005fdf4) small_volume_slider_vertical_pane_g2

0x689a,	// (0x00061ba8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd12,	// (0x0006b020) small_volume_slider_vertical_pane_g

0x9cb3,	// (0x00064fc1) area_side_right_pane_ParamLimits

0x9cb3,	// (0x00064fc1) area_side_right_pane

0xbea4,	// (0x000671b2) aid_size_side_button_ParamLimits

0xbea4,	// (0x000671b2) aid_size_side_button

0xbebd,	// (0x000671cb) grid_sctrl_middle_pane_ParamLimits

0xbebd,	// (0x000671cb) grid_sctrl_middle_pane

0x0d98,	// (0x0005c0a6) sctrl_sk_bottom_pane

0x0da9,	// (0x0005c0b7) sctrl_sk_top_pane

0x0dbb,	// (0x0005c0c9) aid_touch_sctrl_top

0x0dc8,	// (0x0005c0d6) bg_sctrl_sk_pane_ParamLimits

0x0dc8,	// (0x0005c0d6) bg_sctrl_sk_pane

0x0dd6,	// (0x0005c0e4) sctrl_sk_top_pane_g1

0x0de3,	// (0x0005c0f1) sctrl_sk_top_pane_t1

0x0dbb,	// (0x0005c0c9) aid_touch_sctrl_bottom

0x0dc8,	// (0x0005c0d6) bg_sctrl_sk_pane_cp_ParamLimits

0x0dc8,	// (0x0005c0d6) bg_sctrl_sk_pane_cp

0x0dfe,	// (0x0005c10c) sctrl_sk_bottom_pane_g1

0x0de3,	// (0x0005c0f1) sctrl_sk_bottom_pane_t1

0xbed7,	// (0x000671e5) cell_sctrl_middle_pane_ParamLimits

0xbed7,	// (0x000671e5) cell_sctrl_middle_pane

0xbeea,	// (0x000671f8) aid_touch_sctrl_middle_ParamLimits

0xbeea,	// (0x000671f8) aid_touch_sctrl_middle

0xbef7,	// (0x00067205) bg_sctrl_middle_pane_ParamLimits

0xbef7,	// (0x00067205) bg_sctrl_middle_pane

0x1481,	// (0x0005c78f) cell_sctrl_middle_pane_g1_ParamLimits

0x1481,	// (0x0005c78f) cell_sctrl_middle_pane_g1

0xbf05,	// (0x00067213) cell_sctrl_middle_pane_g2_ParamLimits

0xbf05,	// (0x00067213) cell_sctrl_middle_pane_g2

0x0001,

0xfd1e,	// (0x0006b02c) cell_sctrl_middle_pane_g_ParamLimits

0xfd1e,	// (0x0006b02c) cell_sctrl_middle_pane_g

0x2315,	// (0x0005d623) bg_sctrl_middle_pane_g1

0x231d,	// (0x0005d62b) bg_sctrl_middle_pane_g2

0x2325,	// (0x0005d633) bg_sctrl_middle_pane_g3

0x232d,	// (0x0005d63b) bg_sctrl_middle_pane_g4

0x2335,	// (0x0005d643) bg_sctrl_middle_pane_g5

0x233d,	// (0x0005d64b) bg_sctrl_middle_pane_g6

0x2345,	// (0x0005d653) bg_sctrl_middle_pane_g7

0x234d,	// (0x0005d65b) bg_sctrl_middle_pane_g8

0x0007,

0xfd23,	// (0x0006b031) bg_sctrl_middle_pane_g

0x2355,	// (0x0005d663) bg_sctrl_middle_pane_g8_copy1

0x2315,	// (0x0005d623) bg_sctrl_sk_pane_g1

0x2325,	// (0x0005d633) bg_sctrl_sk_pane_g2

0x231d,	// (0x0005d62b) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0006ab74) bg_sctrl_sk_pane_g

0x629b,	// (0x000615a9) aid_size_touch_scroll_bar

0x2335,	// (0x0005d643) bg_sctrl_sk_pane_g4

0x232d,	// (0x0005d63b) bg_sctrl_sk_pane_g5

0x233d,	// (0x0005d64b) bg_sctrl_sk_pane_g6

0x2345,	// (0x0005d653) bg_sctrl_sk_pane_g7

0x2355,	// (0x0005d663) bg_sctrl_sk_pane_g8

0x234d,	// (0x0005d65b) bg_sctrl_sk_pane_g9

0x0218,	// (0x0005b526) popup_fep_china_hwr2_fs_candidate_window

0xafa7,	// (0x000662b5) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xafa7,	// (0x000662b5) popup_fep_china_hwr2_fs_control_window

0x0ab5,	// (0x0005bdc3) sctrl_sk_top_pane_g2

0x0001,

0xfd19,	// (0x0006b027) sctrl_sk_top_pane_g

0xd55a,	// (0x00068868) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd55a,	// (0x00068868) aid_fep_china_hwr2_fs_cell

0xd570,	// (0x0006887e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd570,	// (0x0006887e) bg_popup_fep_shadow_pane_cp4

0xd587,	// (0x00068895) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd587,	// (0x00068895) bg_popup_fep_shadow_pane_cp5

0xd599,	// (0x000688a7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd599,	// (0x000688a7) popup_fep_china_hwr2_fs_control_bar_grid

0xd5ad,	// (0x000688bb) popup_fep_china_hwr2_fs_control_funtion_grid

0x68f9,	// (0x00061c07) aid_fep_china_hwr2_fs_candi_cell

0x5cd1,	// (0x00060fdf) bg_popup_fep_shadow_pane_cp6

0x6903,	// (0x00061c11) popup_fep_china_hwr2_fs_candidate_grid

0xd5b5,	// (0x000688c3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd5b5,	// (0x000688c3) cell_fep_china_hwr2_fs_funtion_grid

0x4ae6,	// (0x0005fdf4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6925,	// (0x00061c33) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6925,	// (0x00061c33) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6933,	// (0x00061c41) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6933,	// (0x00061c41) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd34,	// (0x0006b042) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd34,	// (0x0006b042) cell_fep_china_hwr2_fs_funtion_grid_g

0xd5cd,	// (0x000688db) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd5cd,	// (0x000688db) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd5e2,	// (0x000688f0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd5e2,	// (0x000688f0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd39,	// (0x0006b047) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd39,	// (0x0006b047) cell_fep_china_hwr2_fs_funtion_grid_t

0x697a,	// (0x00061c88) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6982,	// (0x00061c90) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x698a,	// (0x00061c98) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3e,	// (0x0006b04c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6992,	// (0x00061ca0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6992,	// (0x00061ca0) cell_fep_china_hwr2_fs_candidate_grid

0x69b1,	// (0x00061cbf) popup_fep_china_hwr2_fs_candidate_grid_g20

0x69b9,	// (0x00061cc7) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4ae6,	// (0x0005fdf4) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4ae6,	// (0x0005fdf4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb52,	// (0x0006ae60) cell_fep_china_hwr2_fs_candidate_grid_g

0x69c1,	// (0x00061ccf) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1ef1,	// (0x0005d1ff) clock_nsta_pane_cp_24_ParamLimits

0x1ef1,	// (0x0005d1ff) clock_nsta_pane_cp_24

0x1f71,	// (0x0005d27f) indicator_nsta_pane_cp_24_ParamLimits

0x1f71,	// (0x0005d27f) indicator_nsta_pane_cp_24

0x2fe8,	// (0x0005e2f6) heading_pane_g1

0x0001,

0xf8cb,	// (0x0006abd9) heading_pane_g

0x3c17,	// (0x0005ef25) grid_sct_catagory_button_pane

0x3c49,	// (0x0005ef57) scroll_pane_cp5_ParamLimits

0x4732,	// (0x0005fa40) button_value_adjust_pane_cp5_ParamLimits

0x4732,	// (0x0005fa40) button_value_adjust_pane_cp5

0x4817,	// (0x0005fb25) form2_midp_time_pane_ParamLimits

0x69cf,	// (0x00061cdd) cell_sct_catagory_button_pane_ParamLimits

0x69cf,	// (0x00061cdd) cell_sct_catagory_button_pane

0x4aab,	// (0x0005fdb9) bg_button_pane_cp01_ParamLimits

0x4aab,	// (0x0005fdb9) bg_button_pane_cp01

0x4ae6,	// (0x0005fdf4) cell_sct_catagory_button_pane_g1

0xb570,	// (0x0006687e) popup_tb_extension_window

0xd5fe,	// (0x0006890c) aid_size_cell_ext_ParamLimits

0xd5fe,	// (0x0006890c) aid_size_cell_ext

0x60dd,	// (0x000613eb) bg_tb_trans_pane_cp1_ParamLimits

0x60dd,	// (0x000613eb) bg_tb_trans_pane_cp1

0xd624,	// (0x00068932) grid_tb_ext_pane_ParamLimits

0xd624,	// (0x00068932) grid_tb_ext_pane

0xd664,	// (0x00068972) cell_tb_ext_pane_ParamLimits

0xd664,	// (0x00068972) cell_tb_ext_pane

0xd68c,	// (0x0006899a) cell_tb_ext_pane_g1_ParamLimits

0xd68c,	// (0x0006899a) cell_tb_ext_pane_g1

0x6a65,	// (0x00061d73) cell_tb_ext_pane_t1

0x5e80,	// (0x0006118e) list_highlight_pane_cp11_ParamLimits

0x5e80,	// (0x0006118e) list_highlight_pane_cp11

0x9d5e,	// (0x0006506c) popup_uni_indicator_window_ParamLimits

0x9d5e,	// (0x0006506c) popup_uni_indicator_window

0x899c,	// (0x00063caa) bg_popup_sub_pane_cp14

0x6a80,	// (0x00061d8e) list_uniindi_pane

0x6a8c,	// (0x00061d9a) uniindi_top_pane

0x5e80,	// (0x0006118e) bg_uniindi_top_pane

0x6aad,	// (0x00061dbb) uniindi_top_pane_g1

0x6ac3,	// (0x00061dd1) uniindi_top_pane_g2

0x0003,

0xfd45,	// (0x0006b053) uniindi_top_pane_g

0x6aed,	// (0x00061dfb) uniindi_top_pane_t1

0x6b19,	// (0x00061e27) list_single_uniindi_pane_ParamLimits

0x6b19,	// (0x00061e27) list_single_uniindi_pane

0x4ae6,	// (0x0005fdf4) bg_uniindi_top_pane_g1

0x6b2b,	// (0x00061e39) list_single_uniindi_pane_g1

0x6b3e,	// (0x00061e4c) list_single_uniindi_pane_t1

0xe713,	// (0x00069a21) control_bg_pane

0x6b63,	// (0x00061e71) bg_sctrl_sk_pane_cp1

0x6b6c,	// (0x00061e7a) bg_sctrl_sk_pane_cp2

0x6b75,	// (0x00061e83) control_bg_pane_g1

0x6b7e,	// (0x00061e8c) control_bg_pane_g2

0x0001,

0xfd4e,	// (0x0006b05c) control_bg_pane_g

0x4559,	// (0x0005f867) cell_indicator_nsta_pane_g1_ParamLimits

0xcbe8,	// (0x00067ef6) cell_indicator_nsta_pane_g2_ParamLimits

0xfab6,	// (0x0006adc4) cell_indicator_nsta_pane_g_ParamLimits

0xef0c,	// (0x0006a21a) form2_midp_time_pane_t1_ParamLimits

0xaf1d,	// (0x0006622b) main_idle_act4_pane_ParamLimits

0xaf1d,	// (0x0006622b) main_idle_act4_pane

0xb570,	// (0x0006687e) popup_tb_extension_window_ParamLimits

0xd64c,	// (0x0006895a) tb_ext_find_pane_ParamLimits

0xd64c,	// (0x0006895a) tb_ext_find_pane

0x6b87,	// (0x00061e95) ai_gene_pane_1_cp1

0xea2e,	// (0x00069d3c) ai_gene_pane_2_cp1

0x6b8f,	// (0x00061e9d) list_single_idle_plugin_calendar_pane

0x6b98,	// (0x00061ea6) list_single_idle_plugin_notification_pane

0x6ba1,	// (0x00061eaf) list_single_idle_plugin_player_pane

0xd6a9,	// (0x000689b7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd6a9,	// (0x000689b7) list_single_idle_plugin_shortcut_pane

0xd6d1,	// (0x000689df) main_idle_act4_pane_t1

0xd6e9,	// (0x000689f7) main_idle_act4_pane_t2

0x0001,

0xfd53,	// (0x0006b061) main_idle_act4_pane_t

0xd701,	// (0x00068a0f) middle_sk_idle_act4_pane_ParamLimits

0xd701,	// (0x00068a0f) middle_sk_idle_act4_pane

0xd71d,	// (0x00068a2b) popup_clock_digital_analogue_window_cp2

0xd744,	// (0x00068a52) shortcut_wheel_idle_act4_pane_ParamLimits

0xd744,	// (0x00068a52) shortcut_wheel_idle_act4_pane

0x4ae6,	// (0x0005fdf4) shortcut_wheel_idle_act4_pane_g1

0x4ae6,	// (0x0005fdf4) shortcut_wheel_idle_act4_pane_g2

0x4ae6,	// (0x0005fdf4) shortcut_wheel_idle_act4_pane_g3

0x4ae6,	// (0x0005fdf4) shortcut_wheel_idle_act4_pane_g4

0x4ae6,	// (0x0005fdf4) shortcut_wheel_idle_act4_pane_g5

0x6c34,	// (0x00061f42) shortcut_wheel_idle_act4_pane_g6

0x6c3c,	// (0x00061f4a) shortcut_wheel_idle_act4_pane_g7

0x6c44,	// (0x00061f52) shortcut_wheel_idle_act4_pane_g8

0x6c4c,	// (0x00061f5a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd58,	// (0x0006b066) shortcut_wheel_idle_act4_pane_g

0xd7c1,	// (0x00068acf) middle_sk_idle_act4_pane_g1_ParamLimits

0xd7c1,	// (0x00068acf) middle_sk_idle_act4_pane_g1

0xd7cf,	// (0x00068add) middle_sk_idle_act4_pane_g2_ParamLimits

0xd7cf,	// (0x00068add) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7b,	// (0x0006b089) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7b,	// (0x0006b089) middle_sk_idle_act4_pane_g

0xd7e7,	// (0x00068af5) middle_sk_idle_act4_pane_t1_ParamLimits

0xd7e7,	// (0x00068af5) middle_sk_idle_act4_pane_t1

0xd816,	// (0x00068b24) grid_ai_shortcut_pane_ParamLimits

0xd816,	// (0x00068b24) grid_ai_shortcut_pane

0xd833,	// (0x00068b41) list_highlight_pane_cp16_ParamLimits

0xd833,	// (0x00068b41) list_highlight_pane_cp16

0xd840,	// (0x00068b4e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd840,	// (0x00068b4e) list_single_idle_plugin_shortcut_pane_g1

0xd84c,	// (0x00068b5a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd84c,	// (0x00068b5a) list_single_idle_plugin_shortcut_pane_g2

0xd86a,	// (0x00068b78) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd86a,	// (0x00068b78) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd80,	// (0x0006b08e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd80,	// (0x0006b08e) list_single_idle_plugin_shortcut_pane_g

0xd87f,	// (0x00068b8d) cell_ai_shortcut_pane_ParamLimits

0xd87f,	// (0x00068b8d) cell_ai_shortcut_pane

0xd895,	// (0x00068ba3) cell_ai_shortcut_pane_g1_ParamLimits

0xd895,	// (0x00068ba3) cell_ai_shortcut_pane_g1

0x6b87,	// (0x00061e95) ai_gene_pane_1_cp2

0x6d7d,	// (0x0006208b) ai_gene_pane_2_cp2

0x6d85,	// (0x00062093) list_highlight_pane_cp15

0x6d8e,	// (0x0006209c) list_single_idle_plugin_calendar_pane_g1

0x6d85,	// (0x00062093) list_highlight_pane_cp17

0x6d96,	// (0x000620a4) list_single_idle_plugin_calendar_pane_g1_copy1

0x6d9e,	// (0x000620ac) list_single_idle_plugin_player_pane_g1

0x3e7e,	// (0x0005f18c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd87,	// (0x0006b095) list_single_idle_plugin_player_pane_g

0x6da6,	// (0x000620b4) list_single_idle_plugin_player_pane_t1

0x6db4,	// (0x000620c2) list_single_idle_plugin_player_pane_t2

0x6dc2,	// (0x000620d0) list_single_idle_plugin_player_pane_t3

0x6dd0,	// (0x000620de) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8c,	// (0x0006b09a) list_single_idle_plugin_player_pane_t

0x6dde,	// (0x000620ec) wait_bar_pane_cp15

0x6de6,	// (0x000620f4) grid_ai_notification_pane

0x3e7e,	// (0x0005f18c) list_single_idle_plugin_notification_pane_g1

0xd8b7,	// (0x00068bc5) cell_ai_notification_pane_ParamLimits

0xd8b7,	// (0x00068bc5) cell_ai_notification_pane

0x6dfc,	// (0x0006210a) cell_ai_notification_pane_g1

0x6e04,	// (0x00062112) cell_ai_notification_pane_t1

0xd8c4,	// (0x00068bd2) tb_ext_find_button_pane

0xd8cc,	// (0x00068bda) tb_ext_find_pane_g1

0xd8d4,	// (0x00068be2) tb_ext_find_pane_t1

0x8e7e,	// (0x0006418c) tb_ext_find_button_pane_g1

0x6e30,	// (0x0006213e) tb_ext_find_button_pane_g2

0x0001,

0xfd95,	// (0x0006b0a3) tb_ext_find_button_pane_g

0xd6d1,	// (0x000689df) main_idle_act4_pane_t1_ParamLimits

0xd6e9,	// (0x000689f7) main_idle_act4_pane_t2_ParamLimits

0xfd53,	// (0x0006b061) main_idle_act4_pane_t_ParamLimits

0xd71d,	// (0x00068a2b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd734,	// (0x00068a42) sat_plugin_idle_act4_pane_ParamLimits

0xd734,	// (0x00068a42) sat_plugin_idle_act4_pane

0xd8e2,	// (0x00068bf0) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd8e2,	// (0x00068bf0) sat_plugin_idle_act4_pane_t1

0xd8fa,	// (0x00068c08) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd8fa,	// (0x00068c08) sat_plugin_idle_act4_pane_t2

0xd912,	// (0x00068c20) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd912,	// (0x00068c20) sat_plugin_idle_act4_pane_t3

0xd92a,	// (0x00068c38) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd92a,	// (0x00068c38) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9a,	// (0x0006b0a8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9a,	// (0x0006b0a8) sat_plugin_idle_act4_pane_t

0xe7d8,	// (0x00069ae6) popup_battery_window_ParamLimits

0xe7d8,	// (0x00069ae6) popup_battery_window

0x5e80,	// (0x0006118e) bg_popup_sub_pane_cp25_ParamLimits

0x5e80,	// (0x0006118e) bg_popup_sub_pane_cp25

0x6e85,	// (0x00062193) popup_battery_window_g1_ParamLimits

0x6e85,	// (0x00062193) popup_battery_window_g1

0x6e91,	// (0x0006219f) popup_battery_window_t1_ParamLimits

0x6e91,	// (0x0006219f) popup_battery_window_t1

0x6ea3,	// (0x000621b1) popup_battery_window_t2_ParamLimits

0x6ea3,	// (0x000621b1) popup_battery_window_t2

0x0001,

0xfda3,	// (0x0006b0b1) popup_battery_window_t_ParamLimits

0xfda3,	// (0x0006b0b1) popup_battery_window_t

0xac05,	// (0x00065f13) midp_canvas_pane_ParamLimits

0xac60,	// (0x00065f6e) midp_keypad_pane_ParamLimits

0xac60,	// (0x00065f6e) midp_keypad_pane

0x016a,	// (0x0005b478) main_midp_pane_ParamLimits

0x45e5,	// (0x0005f8f3) signal_pane_g2_cp_ParamLimits

0xd942,	// (0x00068c50) aid_size_cell_midp_keypad_ParamLimits

0xd942,	// (0x00068c50) aid_size_cell_midp_keypad

0xd960,	// (0x00068c6e) midp_keyp_game_grid_pane_ParamLimits

0xd960,	// (0x00068c6e) midp_keyp_game_grid_pane

0xd987,	// (0x00068c95) midp_keyp_rocker_pane_ParamLimits

0xd987,	// (0x00068c95) midp_keyp_rocker_pane

0xd9c6,	// (0x00068cd4) midp_keyp_sk_left_pane_ParamLimits

0xd9c6,	// (0x00068cd4) midp_keyp_sk_left_pane

0xda1a,	// (0x00068d28) midp_keyp_sk_right_pane_ParamLimits

0xda1a,	// (0x00068d28) midp_keyp_sk_right_pane

0x5cd1,	// (0x00060fdf) bg_button_pane_cp03

0xda6e,	// (0x00068d7c) midp_keyp_sk_left_pane_g1

0x5cd1,	// (0x00060fdf) bg_button_pane_cp04

0xda6e,	// (0x00068d7c) midp_keyp_sk_right_pane_g1

0x4ae6,	// (0x0005fdf4) midp_keyp_rocker_pane_g1

0xda77,	// (0x00068d85) keyp_game_cell_pane_ParamLimits

0xda77,	// (0x00068d85) keyp_game_cell_pane

0x5cd1,	// (0x00060fdf) bg_button_pane_cp02

0xda9d,	// (0x00068dab) keyp_game_cell_pane_g1

0x9cf5,	// (0x00065003) popup_fep_vkb2_window_ParamLimits

0x9cf5,	// (0x00065003) popup_fep_vkb2_window

0xbf11,	// (0x0006721f) aid_size_cell_vkb2_ParamLimits

0xbf11,	// (0x0006721f) aid_size_cell_vkb2

0xbf47,	// (0x00067255) popup_fep_vkb2_window_g1_ParamLimits

0xbf47,	// (0x00067255) popup_fep_vkb2_window_g1

0xbf97,	// (0x000672a5) vkb2_area_bottom_pane_ParamLimits

0xbf97,	// (0x000672a5) vkb2_area_bottom_pane

0xbff3,	// (0x00067301) vkb2_area_keypad_pane_ParamLimits

0xbff3,	// (0x00067301) vkb2_area_keypad_pane

0xc041,	// (0x0006734f) vkb2_area_top_pane_ParamLimits

0xc041,	// (0x0006734f) vkb2_area_top_pane

0xc0c7,	// (0x000673d5) vkb2_top_entry_pane_ParamLimits

0xc0c7,	// (0x000673d5) vkb2_top_entry_pane

0xc0f4,	// (0x00067402) vkb2_top_grid_left_pane_ParamLimits

0xc0f4,	// (0x00067402) vkb2_top_grid_left_pane

0xc114,	// (0x00067422) vkb2_top_grid_right_pane_ParamLimits

0xc114,	// (0x00067422) vkb2_top_grid_right_pane

0x1078,	// (0x0005c386) vkb2_cell_keypad_pane_ParamLimits

0x1078,	// (0x0005c386) vkb2_cell_keypad_pane

0xc15a,	// (0x00067468) vkb2_area_bottom_grid_pane_ParamLimits

0xc15a,	// (0x00067468) vkb2_area_bottom_grid_pane

0xc184,	// (0x00067492) vkb2_area_bottom_pane_g1_ParamLimits

0xc184,	// (0x00067492) vkb2_area_bottom_pane_g1

0xc1aa,	// (0x000674b8) vkb2_area_bottom_pane_g2_ParamLimits

0xc1aa,	// (0x000674b8) vkb2_area_bottom_pane_g2

0xc1db,	// (0x000674e9) vkb2_area_bottom_pane_g3_ParamLimits

0xc1db,	// (0x000674e9) vkb2_area_bottom_pane_g3

0x0002,

0xfda8,	// (0x0006b0b6) vkb2_area_bottom_pane_g_ParamLimits

0xfda8,	// (0x0006b0b6) vkb2_area_bottom_pane_g

0x1222,	// (0x0005c530) vkb2_top_cell_left_pane_ParamLimits

0x1222,	// (0x0005c530) vkb2_top_cell_left_pane

0xdaa6,	// (0x00068db4) vkb2_top_entry_pane_g1_ParamLimits

0xdaa6,	// (0x00068db4) vkb2_top_entry_pane_g1

0xdab4,	// (0x00068dc2) vkb2_top_entry_pane_t1_ParamLimits

0xdab4,	// (0x00068dc2) vkb2_top_entry_pane_t1

0x7046,	// (0x00062354) vkb2_top_entry_pane_t2_ParamLimits

0x7046,	// (0x00062354) vkb2_top_entry_pane_t2

0x7078,	// (0x00062386) vkb2_top_entry_pane_t3_ParamLimits

0x7078,	// (0x00062386) vkb2_top_entry_pane_t3

0x0002,

0xfdaf,	// (0x0006b0bd) vkb2_top_entry_pane_t_ParamLimits

0xfdaf,	// (0x0006b0bd) vkb2_top_entry_pane_t

0xc245,	// (0x00067553) vkb2_top_grid_right_pane_g1_ParamLimits

0xc245,	// (0x00067553) vkb2_top_grid_right_pane_g1

0x1285,	// (0x0005c593) vkb2_top_grid_right_pane_g2_ParamLimits

0x1285,	// (0x0005c593) vkb2_top_grid_right_pane_g2

0x129d,	// (0x0005c5ab) vkb2_top_grid_right_pane_g3_ParamLimits

0x129d,	// (0x0005c5ab) vkb2_top_grid_right_pane_g3

0xc25b,	// (0x00067569) vkb2_top_grid_right_pane_g4_ParamLimits

0xc25b,	// (0x00067569) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb6,	// (0x0006b0c4) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb6,	// (0x0006b0c4) vkb2_top_grid_right_pane_g

0x12cb,	// (0x0005c5d9) vkb2_top_cell_left_pane_g1

0x12e2,	// (0x0005c5f0) vkb2_cell_keypad_pane_g1_ParamLimits

0x12e2,	// (0x0005c5f0) vkb2_cell_keypad_pane_g1

0x709c,	// (0x000623aa) vkb2_cell_keypad_pane_t1_ParamLimits

0x709c,	// (0x000623aa) vkb2_cell_keypad_pane_t1

0x12f0,	// (0x0005c5fe) vkb2_cell_bottom_grid_pane_ParamLimits

0x12f0,	// (0x0005c5fe) vkb2_cell_bottom_grid_pane

0x1329,	// (0x0005c637) vkb2_cell_bottom_grid_pane_g1

0xd765,	// (0x00068a73) aid_call2_pane_cp02

0xd76d,	// (0x00068a7b) aid_call_pane_cp02

0xd775,	// (0x00068a83) clock_digital_number_pane_cp10

0xd77d,	// (0x00068a8b) clock_digital_number_pane_cp11

0xd785,	// (0x00068a93) clock_digital_number_pane_cp12

0xd78d,	// (0x00068a9b) clock_digital_number_pane_cp13

0xd795,	// (0x00068aa3) clock_digital_separator_pane_cp10

0x8e7e,	// (0x0006418c) popup_clock_digital_analogue_window_cp2_g1

0x8e7e,	// (0x0006418c) popup_clock_digital_analogue_window_cp2_g2

0xd79d,	// (0x00068aab) popup_clock_digital_analogue_window_cp2_g3

0x8e7e,	// (0x0006418c) popup_clock_digital_analogue_window_cp2_g4

0xd79d,	// (0x00068aab) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6b,	// (0x0006b079) popup_clock_digital_analogue_window_cp2_g

0xd7a5,	// (0x00068ab3) popup_clock_digital_analogue_window_cp2_t1

0xd7b3,	// (0x00068ac1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd76,	// (0x0006b084) popup_clock_digital_analogue_window_cp2_t

0x4ae6,	// (0x0005fdf4) clock_digital_number_pane_cp10_g1

0x4ae6,	// (0x0005fdf4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb52,	// (0x0006ae60) clock_digital_number_pane_cp10_g

0x4ae6,	// (0x0005fdf4) clock_digital_separator_pane_cp10_g1

0x4ae6,	// (0x0005fdf4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb52,	// (0x0006ae60) clock_digital_separator_pane_cp10_g

0x6acf,	// (0x00061ddd) uniindi_top_pane_g3

0x6ae0,	// (0x00061dee) uniindi_top_pane_g4

0x1103,	// (0x0005c411) vkb2_row_keypad_pane_ParamLimits

0x1103,	// (0x0005c411) vkb2_row_keypad_pane

0x1345,	// (0x0005c653) vkb2_cell_t_keypad_pane_ParamLimits

0x1345,	// (0x0005c653) vkb2_cell_t_keypad_pane

0x1355,	// (0x0005c663) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1355,	// (0x0005c663) vkb2_cell_t_keypad_pane_cp08

0x136a,	// (0x0005c678) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x136a,	// (0x0005c678) vkb2_cell_t_keypad_pane_cp09

0x137e,	// (0x0005c68c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x137e,	// (0x0005c68c) vkb2_cell_t_keypad_pane_cp01

0x138f,	// (0x0005c69d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x138f,	// (0x0005c69d) vkb2_cell_t_keypad_pane_cp02

0x13a0,	// (0x0005c6ae) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x13a0,	// (0x0005c6ae) vkb2_cell_t_keypad_pane_cp03

0x13b1,	// (0x0005c6bf) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x13b1,	// (0x0005c6bf) vkb2_cell_t_keypad_pane_cp04

0x13c2,	// (0x0005c6d0) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x13c2,	// (0x0005c6d0) vkb2_cell_t_keypad_pane_cp05

0x13d3,	// (0x0005c6e1) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x13d3,	// (0x0005c6e1) vkb2_cell_t_keypad_pane_cp06

0x13e6,	// (0x0005c6f4) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x13e6,	// (0x0005c6f4) vkb2_cell_t_keypad_pane_cp07

0x13fb,	// (0x0005c709) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x13fb,	// (0x0005c709) vkb2_cell_t_keypad_pane_cp10

0x0ab5,	// (0x0005bdc3) vkb2_cell_t_keypad_pane_g1

0x70b3,	// (0x000623c1) vkb2_cell_t_keypad_pane_t1

0xe713,	// (0x00069a21) popup_grid_graphic2_window

0xdaed,	// (0x00068dfb) aid_size_cell_graphic2_ParamLimits

0xdaed,	// (0x00068dfb) aid_size_cell_graphic2

0xdb2b,	// (0x00068e39) bg_popup_window_pane_cp21_ParamLimits

0xdb2b,	// (0x00068e39) bg_popup_window_pane_cp21

0xdb39,	// (0x00068e47) graphic2_pages_pane_ParamLimits

0xdb39,	// (0x00068e47) graphic2_pages_pane

0xdb91,	// (0x00068e9f) grid_graphic2_control_pane_ParamLimits

0xdb91,	// (0x00068e9f) grid_graphic2_control_pane

0xdbd9,	// (0x00068ee7) grid_graphic2_pane_ParamLimits

0xdbd9,	// (0x00068ee7) grid_graphic2_pane

0xdc64,	// (0x00068f72) cell_graphic2_pane

0x5cd1,	// (0x00060fdf) main_comp_mode_pane

0x6340,	// (0x0006164e) list_ai3_gene_pane_ParamLimits

0xd4a2,	// (0x000687b0) bg_popup_window_pane_cp19_ParamLimits

0x6714,	// (0x00061a22) bg_touch_area_indi_pane_ParamLimits

0x6714,	// (0x00061a22) bg_touch_area_indi_pane

0x672a,	// (0x00061a38) bg_touch_area_indi_pane_cp01_ParamLimits

0x672a,	// (0x00061a38) bg_touch_area_indi_pane_cp01

0x6742,	// (0x00061a50) bg_touch_area_indi_pane_cp02_ParamLimits

0x6742,	// (0x00061a50) bg_touch_area_indi_pane_cp02

0x675c,	// (0x00061a6a) bg_touch_area_indi_pane_cp03_ParamLimits

0x675c,	// (0x00061a6a) bg_touch_area_indi_pane_cp03

0x6776,	// (0x00061a84) popup_slider_window_g1_ParamLimits

0x6792,	// (0x00061aa0) popup_slider_window_g2_ParamLimits

0x67ae,	// (0x00061abc) popup_slider_window_g3_ParamLimits

0xfd00,	// (0x0006b00e) popup_slider_window_g_ParamLimits

0x680a,	// (0x00061b18) popup_slider_window_t1_ParamLimits

0x687e,	// (0x00061b8c) small_volume_slider_vertical_pane_ParamLimits

0xdc64,	// (0x00068f72) cell_graphic2_pane_ParamLimits

0xdcc7,	// (0x00068fd5) bg_button_pane_cp10_ParamLimits

0xdcc7,	// (0x00068fd5) bg_button_pane_cp10

0xdcda,	// (0x00068fe8) bg_button_pane_cp11_ParamLimits

0xdcda,	// (0x00068fe8) bg_button_pane_cp11

0xdced,	// (0x00068ffb) graphic2_pages_pane_g1_ParamLimits

0xdced,	// (0x00068ffb) graphic2_pages_pane_g1

0xdd08,	// (0x00069016) graphic2_pages_pane_g2_ParamLimits

0xdd08,	// (0x00069016) graphic2_pages_pane_g2

0x0001,

0xfdc4,	// (0x0006b0d2) graphic2_pages_pane_g_ParamLimits

0xfdc4,	// (0x0006b0d2) graphic2_pages_pane_g

0xdd20,	// (0x0006902e) graphic2_pages_pane_t1_ParamLimits

0xdd20,	// (0x0006902e) graphic2_pages_pane_t1

0xdd38,	// (0x00069046) cell_graphic2_control_pane_ParamLimits

0xdd38,	// (0x00069046) cell_graphic2_control_pane

0xdd6c,	// (0x0006907a) cell_graphic2_pane_g1_ParamLimits

0xdd6c,	// (0x0006907a) cell_graphic2_pane_g1

0xdd79,	// (0x00069087) cell_graphic2_pane_g2_ParamLimits

0xdd79,	// (0x00069087) cell_graphic2_pane_g2

0xcda4,	// (0x000680b2) cell_graphic2_pane_g3_ParamLimits

0xcda4,	// (0x000680b2) cell_graphic2_pane_g3

0xdd86,	// (0x00069094) cell_graphic2_pane_g4_ParamLimits

0xdd86,	// (0x00069094) cell_graphic2_pane_g4

0xdd93,	// (0x000690a1) cell_graphic2_pane_g5_ParamLimits

0xdd93,	// (0x000690a1) cell_graphic2_pane_g5

0x0004,

0xfdc9,	// (0x0006b0d7) cell_graphic2_pane_g_ParamLimits

0xfdc9,	// (0x0006b0d7) cell_graphic2_pane_g

0xddb3,	// (0x000690c1) cell_graphic2_pane_t1_ParamLimits

0xddb3,	// (0x000690c1) cell_graphic2_pane_t1

0x2fdc,	// (0x0005e2ea) grid_highlight_pane_cp11_ParamLimits

0x2fdc,	// (0x0005e2ea) grid_highlight_pane_cp11

0x5e80,	// (0x0006118e) bg_button_pane_cp05

0xdde8,	// (0x000690f6) cell_graphic2_control_pane_g1

0x4ae6,	// (0x0005fdf4) bg_touch_area_indi_pane_g1

0x738d,	// (0x0006269b) aid_cmod_rocker_key_size

0x7397,	// (0x000626a5) aid_cmode_itu_key_size

0x73a1,	// (0x000626af) main_cmode_video_pane

0x73ab,	// (0x000626b9) main_comp_mode_itu_pane

0x73b7,	// (0x000626c5) main_comp_mode_rocker_pane

0x73c3,	// (0x000626d1) cell_cmode_rocker_pane_ParamLimits

0x73c3,	// (0x000626d1) cell_cmode_rocker_pane

0x73d7,	// (0x000626e5) cell_cmode_itu_pane_ParamLimits

0x73d7,	// (0x000626e5) cell_cmode_itu_pane

0x899c,	// (0x00063caa) bg_button_pane_cp06_ParamLimits

0x899c,	// (0x00063caa) bg_button_pane_cp06

0x4d61,	// (0x0006006f) cell_cmode_rocker_pane_g1_ParamLimits

0x4d61,	// (0x0006006f) cell_cmode_rocker_pane_g1

0x6925,	// (0x00061c33) cell_cmode_rocker_pane_g2_ParamLimits

0x6925,	// (0x00061c33) cell_cmode_rocker_pane_g2

0x0001,

0xfdd9,	// (0x0006b0e7) cell_cmode_rocker_pane_g_ParamLimits

0xfdd9,	// (0x0006b0e7) cell_cmode_rocker_pane_g

0x5cd1,	// (0x00060fdf) bg_button_pane_cp07

0x73ee,	// (0x000626fc) cell_cmode_itu_pane_g1

0x73f7,	// (0x00062705) cell_cmode_itu_pane_t1

0x7405,	// (0x00062713) cell_cmode_itu_pane_t2

0x0001,

0xfdde,	// (0x0006b0ec) cell_cmode_itu_pane_t

0x6b53,	// (0x00061e61) aid_touch_ctrl_left

0x6b5b,	// (0x00061e69) aid_touch_ctrl_right

0x5cd1,	// (0x00060fdf) compa_mode_pane

0xde0e,	// (0x0006911c) aid_cmod_rocker_key_size_cp

0xde18,	// (0x00069126) aid_cmode_itu_key_size_cp

0x7427,	// (0x00062735) compa_mode_pane_g1

0x742f,	// (0x0006273d) compa_mode_pane_g2

0x7437,	// (0x00062745) compa_mode_pane_g3

0x0002,

0xfde3,	// (0x0006b0f1) compa_mode_pane_g

0xde22,	// (0x00069130) main_comp_mode_itu_pane_cp

0xde2a,	// (0x00069138) main_comp_mode_rocker_pane_cp

0xde32,	// (0x00069140) cell_cmode_itu_pane_cp_ParamLimits

0xde32,	// (0x00069140) cell_cmode_itu_pane_cp

0xde47,	// (0x00069155) cell_cmode_rocker_pane_cp_ParamLimits

0xde47,	// (0x00069155) cell_cmode_rocker_pane_cp

0x899c,	// (0x00063caa) bg_button_pane_cp06_cp_ParamLimits

0x899c,	// (0x00063caa) bg_button_pane_cp06_cp

0x4d61,	// (0x0006006f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4d61,	// (0x0006006f) cell_cmode_rocker_pane_g1_cp

0x4ae6,	// (0x0005fdf4) cell_cmode_rocker_pane_g2_cp

0x5cd1,	// (0x00060fdf) bg_button_pane_cp07_cp

0xde59,	// (0x00069167) cell_cmode_itu_pane_g1_cp

0xde62,	// (0x00069170) cell_cmode_itu_pane_t1_cp

0xde62,	// (0x00069170) cell_cmode_itu_pane_t2_cp

0xc9ff,	// (0x00067d0d) settings_code_pane_cp2

0x5d3f,	// (0x0006104d) bg_popup_window_pane_cp3_ParamLimits

0x606e,	// (0x0006137c) heading_pane_cp3_ParamLimits

0x607a,	// (0x00061388) listscroll_popup_graphic_pane_ParamLimits

0x0848,	// (0x0005bb56) fep_hwr_aid_pane_ParamLimits

0x0dbb,	// (0x0005c0c9) aid_touch_sctrl_top_ParamLimits

0x0dd6,	// (0x0005c0e4) sctrl_sk_top_pane_g1_ParamLimits

0x0ab5,	// (0x0005bdc3) sctrl_sk_top_pane_g2_ParamLimits

0xfd19,	// (0x0006b027) sctrl_sk_top_pane_g_ParamLimits

0x0de3,	// (0x0005c0f1) sctrl_sk_top_pane_t1_ParamLimits

0x0dbb,	// (0x0005c0c9) aid_touch_sctrl_bottom_ParamLimits

0x0de3,	// (0x0005c0f1) sctrl_sk_bottom_pane_t1_ParamLimits

0x6a99,	// (0x00061da7) aid_area_touch_clock

0xc089,	// (0x00067397) aid_vkb2_area_top_pane_cell_ParamLimits

0xc089,	// (0x00067397) aid_vkb2_area_top_pane_cell

0xc134,	// (0x00067442) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc134,	// (0x00067442) aid_vkb2_area_bottom_pane_cell

0x6ffe,	// (0x0006230c) popup_char_count_window

0x748d,	// (0x0006279b) popup_char_count_window_g1

0x7496,	// (0x000627a4) popup_char_count_window_g2

0x749f,	// (0x000627ad) popup_char_count_window_g3

0x0002,

0xfdea,	// (0x0006b0f8) popup_char_count_window_g

0x74a8,	// (0x000627b6) popup_char_count_window_t1

0x0e94,	// (0x0005c1a2) popup_fep_char_preview_window_ParamLimits

0x0e94,	// (0x0005c1a2) popup_fep_char_preview_window

0xc0a9,	// (0x000673b7) vkb2_top_candi_pane_ParamLimits

0xc0a9,	// (0x000673b7) vkb2_top_candi_pane

0xde70,	// (0x0006917e) cell_vkb2_top_candi_pane_ParamLimits

0xde70,	// (0x0006917e) cell_vkb2_top_candi_pane

0x1410,	// (0x0005c71e) bg_popup_fep_char_preview_window_ParamLimits

0x1410,	// (0x0005c71e) bg_popup_fep_char_preview_window

0x141e,	// (0x0005c72c) popup_fep_char_preview_window_t1_ParamLimits

0x141e,	// (0x0005c72c) popup_fep_char_preview_window_t1

0x7507,	// (0x00062815) bg_popup_fep_char_preview_window_g1

0x750f,	// (0x0006281d) bg_popup_fep_char_preview_window_g2

0x7517,	// (0x00062825) bg_popup_fep_char_preview_window_g3

0x751f,	// (0x0006282d) bg_popup_fep_char_preview_window_g4

0x7527,	// (0x00062835) bg_popup_fep_char_preview_window_g5

0x1458,	// (0x0005c766) bg_popup_fep_char_preview_window_g6

0x752f,	// (0x0006283d) bg_popup_fep_char_preview_window_g7

0x7537,	// (0x00062845) bg_popup_fep_char_preview_window_g8

0x753f,	// (0x0006284d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf1,	// (0x0006b0ff) bg_popup_fep_char_preview_window_g

0x0ab5,	// (0x0005bdc3) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0ab5,	// (0x0005bdc3) cell_vkb2_top_candi_pane_g1

0x0ac3,	// (0x0005bdd1) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0ac3,	// (0x0005bdd1) cell_vkb2_top_candi_pane_g2

0x6309,	// (0x00061617) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6309,	// (0x00061617) cell_vkb2_top_candi_pane_g3

0x1460,	// (0x0005c76e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1460,	// (0x0005c76e) cell_vkb2_top_candi_pane_g4

0x5280,	// (0x0006058e) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5280,	// (0x0006058e) cell_vkb2_top_candi_pane_g5

0x1481,	// (0x0005c78f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1481,	// (0x0005c78f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe04,	// (0x0006b112) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe04,	// (0x0006b112) cell_vkb2_top_candi_pane_g

0x148f,	// (0x0005c79d) cell_vkb2_top_candi_pane_t1

0x061c,	// (0x0005b92a) aid_size_touch_slider_mark_ParamLimits

0x061c,	// (0x0005b92a) aid_size_touch_slider_mark

0xdb75,	// (0x00068e83) grid_graphic2_catg_pane_ParamLimits

0xdb75,	// (0x00068e83) grid_graphic2_catg_pane

0xdc33,	// (0x00068f41) popup_grid_graphic2_window_t1_ParamLimits

0xdc33,	// (0x00068f41) popup_grid_graphic2_window_t1

0xdc49,	// (0x00068f57) popup_grid_graphic2_window_t2_ParamLimits

0xdc49,	// (0x00068f57) popup_grid_graphic2_window_t2

0x0001,

0xfdbf,	// (0x0006b0cd) popup_grid_graphic2_window_t_ParamLimits

0xfdbf,	// (0x0006b0cd) popup_grid_graphic2_window_t

0x5e80,	// (0x0006118e) bg_button_pane_cp05_ParamLimits

0xdde8,	// (0x000690f6) cell_graphic2_control_pane_g1_ParamLimits

0xdeda,	// (0x000691e8) cell_graphic2_catg_pane_ParamLimits

0xdeda,	// (0x000691e8) cell_graphic2_catg_pane

0x5cd1,	// (0x00060fdf) bg_button_pane_cp12

0xdeec,	// (0x000691fa) cell_graphic2_catg_pane_g1

0x6a65,	// (0x00061d73) cell_tb_ext_pane_t1_ParamLimits

0x1242,	// (0x0005c550) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1242,	// (0x0005c550) vkb2_top_cell_right_narrow_pane

0x125a,	// (0x0005c568) vkb2_top_cell_right_wide_pane_ParamLimits

0x125a,	// (0x0005c568) vkb2_top_cell_right_wide_pane

0x083a,	// (0x0005bb48) bg_vkb2_func_pane_ParamLimits

0x083a,	// (0x0005bb48) bg_vkb2_func_pane

0x12cb,	// (0x0005c5d9) vkb2_top_cell_left_pane_g1_ParamLimits

0x083a,	// (0x0005bb48) bg_vkb2_fuc_pane_cp03_ParamLimits

0x083a,	// (0x0005bb48) bg_vkb2_fuc_pane_cp03

0x1329,	// (0x0005c637) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x231d,	// (0x0005d62b) bg_vkb2_func_pane_g1

0x2325,	// (0x0005d633) bg_vkb2_func_pane_g2

0x2335,	// (0x0005d643) bg_vkb2_func_pane_g3

0x232d,	// (0x0005d63b) bg_vkb2_func_pane_g4

0x233d,	// (0x0005d64b) bg_vkb2_func_pane_g5

0x2345,	// (0x0005d653) bg_vkb2_func_pane_g6

0x234d,	// (0x0005d65b) bg_vkb2_func_pane_g7

0x2355,	// (0x0005d663) bg_vkb2_func_pane_g8

0x2315,	// (0x0005d623) bg_vkb2_func_pane_g9

0x0008,

0xfe11,	// (0x0006b11f) bg_vkb2_func_pane_g

0x083a,	// (0x0005bb48) bg_vkb2_fuc_pane_cp01_ParamLimits

0x083a,	// (0x0005bb48) bg_vkb2_fuc_pane_cp01

0x12cb,	// (0x0005c5d9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x12cb,	// (0x0005c5d9) vkb2_top_cell_right_wide_pane_g1

0x083a,	// (0x0005bb48) bg_vkb2_fuc_pane_cp02_ParamLimits

0x083a,	// (0x0005bb48) bg_vkb2_fuc_pane_cp02

0x1329,	// (0x0005c637) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1329,	// (0x0005c637) vkb2_top_cell_right_narrow_pane_g1

0xd3dc,	// (0x000686ea) aid_touch_area_decrease_ParamLimits

0xd3dc,	// (0x000686ea) aid_touch_area_decrease

0xd416,	// (0x00068724) aid_touch_area_increase_ParamLimits

0xd416,	// (0x00068724) aid_touch_area_increase

0xd43e,	// (0x0006874c) aid_touch_area_mute_ParamLimits

0xd43e,	// (0x0006874c) aid_touch_area_mute

0xd46e,	// (0x0006877c) aid_touch_area_slider_ParamLimits

0xd46e,	// (0x0006877c) aid_touch_area_slider

0xd4ae,	// (0x000687bc) popup_slider_window_g4_ParamLimits

0xd4ae,	// (0x000687bc) popup_slider_window_g4

0xd4d6,	// (0x000687e4) popup_slider_window_g5_ParamLimits

0xd4d6,	// (0x000687e4) popup_slider_window_g5

0xd50a,	// (0x00068818) popup_slider_window_g6_ParamLimits

0xd50a,	// (0x00068818) popup_slider_window_g6

0x6838,	// (0x00061b46) popup_slider_window_t2_ParamLimits

0x6838,	// (0x00061b46) popup_slider_window_t2

0x0001,

0xfd0d,	// (0x0006b01b) popup_slider_window_t_ParamLimits

0xfd0d,	// (0x0006b01b) popup_slider_window_t

0xd526,	// (0x00068834) slider_pane_ParamLimits

0xd526,	// (0x00068834) slider_pane

0x7562,	// (0x00062870) slider_pane_g1_ParamLimits

0x7562,	// (0x00062870) slider_pane_g1

0x7576,	// (0x00062884) slider_pane_g2_ParamLimits

0x7576,	// (0x00062884) slider_pane_g2

0x758c,	// (0x0006289a) slider_pane_g3_ParamLimits

0x758c,	// (0x0006289a) slider_pane_g3

0x0003,

0xfe24,	// (0x0006b132) slider_pane_g_ParamLimits

0xfe24,	// (0x0006b132) slider_pane_g

0xb5bc,	// (0x000668ca) popup_tb_float_extension_window_ParamLimits

0xb5bc,	// (0x000668ca) popup_tb_float_extension_window

0x75b8,	// (0x000628c6) aid_size_cell_tb_float_ext

0x5cd1,	// (0x00060fdf) bg_popup_sub_window_cp28

0x75c4,	// (0x000628d2) grid_tb_float_ext_pane

0x75d0,	// (0x000628de) cell_tb_float_ext_pane_ParamLimits

0x75d0,	// (0x000628de) cell_tb_float_ext_pane

0x75ec,	// (0x000628fa) cell_tb_float_ext_pane_g1

0x75f5,	// (0x00062903) grid_highlight_pane_cp12

0xbd31,	// (0x0006703f) cell_last_hwr_side_pane_ParamLimits

0xbd31,	// (0x0006703f) cell_last_hwr_side_pane

0x4ae6,	// (0x0005fdf4) cell_last_hwr_side_pane_g1

0x75fe,	// (0x0006290c) cell_last_hwr_side_pane_g2

0x0001,

0xfe2d,	// (0x0006b13b) cell_last_hwr_side_pane_g

0xc210,	// (0x0006751e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc210,	// (0x0006751e) vkb2_area_bottom_space_btn_pane

0x0ab5,	// (0x0005bdc3) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x70b3,	// (0x000623c1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x148f,	// (0x0005c79d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x14ad,	// (0x0005c7bb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x14ad,	// (0x0005c7bb) vkb2_area_bottom_space_btn_pane_g1

0x14e7,	// (0x0005c7f5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x14e7,	// (0x0005c7f5) vkb2_area_bottom_space_btn_pane_g2

0x151d,	// (0x0005c82b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x151d,	// (0x0005c82b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe32,	// (0x0006b140) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe32,	// (0x0006b140) vkb2_area_bottom_space_btn_pane_g

0x08ff,	// (0x0005bc0d) cel_fep_hwr_func_pane_ParamLimits

0x08ff,	// (0x0005bc0d) cel_fep_hwr_func_pane

0xbd06,	// (0x00067014) cell_hwr_side_button_pane_ParamLimits

0xbd06,	// (0x00067014) cell_hwr_side_button_pane

0x6a99,	// (0x00061da7) aid_area_touch_clock_ParamLimits

0x5e80,	// (0x0006118e) bg_uniindi_top_pane_ParamLimits

0x6aad,	// (0x00061dbb) uniindi_top_pane_g1_ParamLimits

0x6ac3,	// (0x00061dd1) uniindi_top_pane_g2_ParamLimits

0x6acf,	// (0x00061ddd) uniindi_top_pane_g3_ParamLimits

0x6ae0,	// (0x00061dee) uniindi_top_pane_g4_ParamLimits

0xfd45,	// (0x0006b053) uniindi_top_pane_g_ParamLimits

0x6aed,	// (0x00061dfb) uniindi_top_pane_t1_ParamLimits

0x5e80,	// (0x0006118e) bg_vkb2_func_pane_cp01_ParamLimits

0x5e80,	// (0x0006118e) bg_vkb2_func_pane_cp01

0x7607,	// (0x00062915) cel_fep_hwr_func_pane_g1_ParamLimits

0x7607,	// (0x00062915) cel_fep_hwr_func_pane_g1

0x5e80,	// (0x0006118e) bg_vkb2_func_pane_cp02_ParamLimits

0x5e80,	// (0x0006118e) bg_vkb2_func_pane_cp02

0x7607,	// (0x00062915) cell_hwr_side_button_pane_g1_ParamLimits

0x7607,	// (0x00062915) cell_hwr_side_button_pane_g1

0x2196,	// (0x0005d4a4) status_pane_g4_ParamLimits

0x2196,	// (0x0005d4a4) status_pane_g4

0x21b0,	// (0x0005d4be) status_pane_t1

0x4885,	// (0x0005fb93) form2_midp_gauge_slider_cont_pane

0x488d,	// (0x0005fb9b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xccea,	// (0x00067ff8) form2_midp_gauge_slider_pane_t2_ParamLimits

0xccfc,	// (0x0006800a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb05,	// (0x0006ae13) form2_midp_gauge_slider_pane_t_ParamLimits

0x48c3,	// (0x0005fbd1) form2_midp_slider_pane_ParamLimits

0x0e54,	// (0x0005c162) aid_size_cell_func_vkb2_ParamLimits

0x0e54,	// (0x0005c162) aid_size_cell_func_vkb2

0x75a4,	// (0x000628b2) slider_pane_g4_ParamLimits

0x75a4,	// (0x000628b2) slider_pane_g4

0xc271,	// (0x0006757f) form2_midp_gauge_slider_pane_t2_cp01

0xc27f,	// (0x0006758d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc27f,	// (0x0006758d) form2_midp_gauge_slider_pane_t3_cp01

0x1592,	// (0x0005c8a0) form2_midp_slider_pane_cp01

0x5cd1,	// (0x00060fdf) navi_smil_pane

0x7640,	// (0x0006294e) navi_smil_pane_g1

0x7648,	// (0x00062956) navi_smil_pane_t1

0x7615,	// (0x00062923) form2_midp_slider_pane_g1

0x761e,	// (0x0006292c) form2_midp_slider_pane_g2

0x7626,	// (0x00062934) form2_midp_slider_pane_g3

0x7615,	// (0x00062923) form2_midp_slider_pane_g4

0xdef5,	// (0x00069203) form2_midp_slider_pane_g5

0x0004,

0xfe3b,	// (0x0006b149) form2_midp_slider_pane_g

0x1557,	// (0x0005c865) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1557,	// (0x0005c865) vkb2_area_bottom_space_btn_pane_g4

0xb7a3,	// (0x00066ab1) lc0_navi_pane_ParamLimits

0xb7a3,	// (0x00066ab1) lc0_navi_pane

0xb813,	// (0x00066b21) lc0_stat_indi_pane_ParamLimits

0xb813,	// (0x00066b21) lc0_stat_indi_pane

0xb828,	// (0x00066b36) ls0_title_pane_ParamLimits

0xb828,	// (0x00066b36) ls0_title_pane

0x899c,	// (0x00063caa) bg_popup_sub_pane_cp14_ParamLimits

0x6a80,	// (0x00061d8e) list_uniindi_pane_ParamLimits

0x6a8c,	// (0x00061d9a) uniindi_top_pane_ParamLimits

0x6b2b,	// (0x00061e39) list_single_uniindi_pane_g1_ParamLimits

0x6b3e,	// (0x00061e4c) list_single_uniindi_pane_t1_ParamLimits

0xc29c,	// (0x000675aa) lc0_stat_clock_pane_ParamLimits

0xc29c,	// (0x000675aa) lc0_stat_clock_pane

0xdefe,	// (0x0006920c) lc0_stat_indi_pane_g1_ParamLimits

0xdefe,	// (0x0006920c) lc0_stat_indi_pane_g1

0xdf0b,	// (0x00069219) lc0_stat_indi_pane_g2_ParamLimits

0xdf0b,	// (0x00069219) lc0_stat_indi_pane_g2

0x0001,

0xfe46,	// (0x0006b154) lc0_stat_indi_pane_g_ParamLimits

0xfe46,	// (0x0006b154) lc0_stat_indi_pane_g

0xc2a9,	// (0x000675b7) lc0_uni_indicator_pane_ParamLimits

0xc2a9,	// (0x000675b7) lc0_uni_indicator_pane

0xdf18,	// (0x00069226) ls0_title_pane_g1_ParamLimits

0xdf18,	// (0x00069226) ls0_title_pane_g1

0xdf2c,	// (0x0006923a) ls0_title_pane_t1_ParamLimits

0xdf2c,	// (0x0006923a) ls0_title_pane_t1

0xc2b6,	// (0x000675c4) lc0_uni_indicator_pane_g1_ParamLimits

0xc2b6,	// (0x000675c4) lc0_uni_indicator_pane_g1

0x76ba,	// (0x000629c8) lc0_stat_clock_pane_t1

0x5cd1,	// (0x00060fdf) main_ai5_pane

0x76c8,	// (0x000629d6) ai5_sk_pane_ParamLimits

0x76c8,	// (0x000629d6) ai5_sk_pane

0xdf5a,	// (0x00069268) cell_ai5_widget_pane_ParamLimits

0xdf5a,	// (0x00069268) cell_ai5_widget_pane

0x7c71,	// (0x00062f7f) aid_size_cell_widget_grid

0x7c7f,	// (0x00062f8d) bg_ai5_widget_pane_ParamLimits

0x7c7f,	// (0x00062f8d) bg_ai5_widget_pane

0x7cf3,	// (0x00063001) cell_ai5_widget_pane_g2

0x7d03,	// (0x00063011) cell_ai5_widget_pane_g3

0x7d1a,	// (0x00063028) cell_ai5_widget_pane_g4

0x7d26,	// (0x00063034) cell_ai5_widget_pane_g5

0xe2b1,	// (0x000695bf) cell_ai5_widget_pane_g6

0xe2bd,	// (0x000695cb) cell_ai5_widget_pane_g7

0x7d86,	// (0x00063094) cell_ai5_widget_pane_t1_ParamLimits

0x7d86,	// (0x00063094) cell_ai5_widget_pane_t1

0x7da3,	// (0x000630b1) cell_ai5_widget_pane_t2_ParamLimits

0x7da3,	// (0x000630b1) cell_ai5_widget_pane_t2

0x7dbb,	// (0x000630c9) cell_ai5_widget_pane_t3_ParamLimits

0x7dbb,	// (0x000630c9) cell_ai5_widget_pane_t3

0x7dd3,	// (0x000630e1) cell_ai5_widget_pane_t4_ParamLimits

0x7dd3,	// (0x000630e1) cell_ai5_widget_pane_t4

0x7df0,	// (0x000630fe) cell_ai5_widget_pane_t5_ParamLimits

0x7df0,	// (0x000630fe) cell_ai5_widget_pane_t5

0x7e0f,	// (0x0006311d) cell_ai5_widget_pane_t6_ParamLimits

0x7e0f,	// (0x0006311d) cell_ai5_widget_pane_t6

0x7e21,	// (0x0006312f) cell_ai5_widget_pane_t7_ParamLimits

0x7e21,	// (0x0006312f) cell_ai5_widget_pane_t7

0x7e3a,	// (0x00063148) cell_ai5_widget_pane_t8_ParamLimits

0x7e3a,	// (0x00063148) cell_ai5_widget_pane_t8

0x0009,

0xfe60,	// (0x0006b16e) cell_ai5_widget_pane_t_ParamLimits

0xfe60,	// (0x0006b16e) cell_ai5_widget_pane_t

0x7e8e,	// (0x0006319c) grid_ai5_widget_pane

0x899c,	// (0x00063caa) highlight_cell_ai5_widget_pane_ParamLimits

0x899c,	// (0x00063caa) highlight_cell_ai5_widget_pane

0xe2c9,	// (0x000695d7) ai5_sk_left_pane

0xe2d3,	// (0x000695e1) ai5_sk_middle_pane

0xe2dd,	// (0x000695eb) ai5_sk_right_pane

0x7eba,	// (0x000631c8) bg_ai5_widget_pane_g1_ParamLimits

0x7eba,	// (0x000631c8) bg_ai5_widget_pane_g1

0x7ec6,	// (0x000631d4) bg_ai5_widget_pane_g2_ParamLimits

0x7ec6,	// (0x000631d4) bg_ai5_widget_pane_g2

0x7ed2,	// (0x000631e0) bg_ai5_widget_pane_g3_ParamLimits

0x7ed2,	// (0x000631e0) bg_ai5_widget_pane_g3

0x7ede,	// (0x000631ec) bg_ai5_widget_pane_g4_ParamLimits

0x7ede,	// (0x000631ec) bg_ai5_widget_pane_g4

0x7eea,	// (0x000631f8) bg_ai5_widget_pane_g5_ParamLimits

0x7eea,	// (0x000631f8) bg_ai5_widget_pane_g5

0x7ef6,	// (0x00063204) bg_ai5_widget_pane_g6_ParamLimits

0x7ef6,	// (0x00063204) bg_ai5_widget_pane_g6

0x7f02,	// (0x00063210) bg_ai5_widget_pane_g7_ParamLimits

0x7f02,	// (0x00063210) bg_ai5_widget_pane_g7

0x7f0e,	// (0x0006321c) bg_ai5_widget_pane_g8_ParamLimits

0x7f0e,	// (0x0006321c) bg_ai5_widget_pane_g8

0x7f1a,	// (0x00063228) bg_ai5_widget_pane_g9_ParamLimits

0x7f1a,	// (0x00063228) bg_ai5_widget_pane_g9

0x0008,

0xfe75,	// (0x0006b183) bg_ai5_widget_pane_g_ParamLimits

0xfe75,	// (0x0006b183) bg_ai5_widget_pane_g

0x7f52,	// (0x00063260) cell_shortcut_ai5_widget_pane_ParamLimits

0x7f52,	// (0x00063260) cell_shortcut_ai5_widget_pane

0xe9a8,	// (0x00069cb6) bg_cell_shortcut_ai5_widget_pane

0x7f65,	// (0x00063273) cell_grid_ai5_widget_pane_g1

0xe9a8,	// (0x00069cb6) highlight_cell_shortcut_ai5_widget_pane

0x231d,	// (0x0005d62b) ai5_sk_left_pane_g1

0x7f6e,	// (0x0006327c) ai5_sk_left_pane_g2

0x7f76,	// (0x00063284) ai5_sk_left_pane_g3

0x7f7e,	// (0x0006328c) ai5_sk_left_pane_g4

0x0003,

0xfe88,	// (0x0006b196) ai5_sk_left_pane_g

0x7f86,	// (0x00063294) ai5_sk_left_pane_t1

0x2325,	// (0x0005d633) ai5_sk_right_pane_g1

0x7f94,	// (0x000632a2) ai5_sk_right_pane_g2

0x7f9c,	// (0x000632aa) ai5_sk_right_pane_g3

0x7fa4,	// (0x000632b2) ai5_sk_right_pane_g4

0x0003,

0xfe91,	// (0x0006b19f) ai5_sk_right_pane_g

0x7fac,	// (0x000632ba) ai5_sk_right_pane_t1

0x2325,	// (0x0005d633) ai5_sk_middle_pane_g1

0x231d,	// (0x0005d62b) ai5_sk_middle_pane_g2

0x233d,	// (0x0005d64b) ai5_sk_middle_pane_g3

0x7f9c,	// (0x000632aa) ai5_sk_middle_pane_g4

0x7f76,	// (0x00063284) ai5_sk_middle_pane_g5

0x7fba,	// (0x000632c8) ai5_sk_middle_pane_g6

0xe2e7,	// (0x000695f5) ai5_sk_middle_pane_g7

0x0006,

0xfe9a,	// (0x0006b1a8) ai5_sk_middle_pane_g

0xb68d,	// (0x0006699b) aid_touch_area_size_lc0_ParamLimits

0xb68d,	// (0x0006699b) aid_touch_area_size_lc0

0x0ae4,	// (0x0005bdf2) cell_hwr_candidate_pane_t1_ParamLimits

0x1e4d,	// (0x0005d15b) aid_touch_navi_pane

0xb933,	// (0x00066c41) status_dt_navi_pane_ParamLimits

0xb933,	// (0x00066c41) status_dt_navi_pane

0xb94b,	// (0x00066c59) status_dt_sta_pane_ParamLimits

0xb94b,	// (0x00066c59) status_dt_sta_pane

0xe2ef,	// (0x000695fd) dt_sta_controll_pane

0xe2fc,	// (0x0006960a) dt_sta_indi_pane

0xe309,	// (0x00069617) dt_sta_title_pane

0x5e80,	// (0x0006118e) bg_dt_sta_indi_pane_ParamLimits

0x5e80,	// (0x0006118e) bg_dt_sta_indi_pane

0xe31b,	// (0x00069629) dt_sta_battery_pane

0xe323,	// (0x00069631) dt_sta_indi_pane_g1

0xe32c,	// (0x0006963a) dt_sta_indi_pane_g2

0xe335,	// (0x00069643) dt_sta_indi_pane_g3

0x0002,

0xfea9,	// (0x0006b1b7) dt_sta_indi_pane_g

0xe33e,	// (0x0006964c) dt_sta_signal_pane

0x899c,	// (0x00063caa) bg_dt_sta_title_pane_ParamLimits

0x899c,	// (0x00063caa) bg_dt_sta_title_pane

0xe347,	// (0x00069655) dt_sta_title_pane_g1

0xe34f,	// (0x0006965d) dt_sta_title_pane_t1_ParamLimits

0xe34f,	// (0x0006965d) dt_sta_title_pane_t1

0x5cd1,	// (0x00060fdf) bg_dt_sta_control_pane

0xe364,	// (0x00069672) dt_sta_controll_pane_g1

0xe36d,	// (0x0006967b) bg_dt_sta_title_pane_g1

0xe376,	// (0x00069684) bg_dt_sta_title_pane_g2

0xe37f,	// (0x0006968d) bg_dt_sta_title_pane_g3

0x0002,

0xfeb0,	// (0x0006b1be) bg_dt_sta_title_pane_g

0x4ae6,	// (0x0005fdf4) bg_dt_sta_indi_pane_g1

0x8068,	// (0x00063376) dt_sta_signal_pane_g1

0x8070,	// (0x0006337e) dt_sta_signal_pane_g2

0x0001,

0xfeb7,	// (0x0006b1c5) dt_sta_signal_pane_g

0x8078,	// (0x00063386) dt_sta_battery_pane_g1

0x8081,	// (0x0006338f) dt_sta_battery_pane_t1

0x4ae6,	// (0x0005fdf4) bg_dt_sta_control_pane_g1

0x8f00,	// (0x0006420e) fep_china_uni_eep_pane

0x8f08,	// (0x00064216) fep_china_uni_entry_pane_ParamLimits

0x8f18,	// (0x00064226) popup_fep_china_uni_window_g1_ParamLimits

0x8f28,	// (0x00064236) popup_fep_china_uni_window_g2_ParamLimits

0x8f28,	// (0x00064236) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0006aa30) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0006aa30) popup_fep_china_uni_window_g

0x8090,	// (0x0006339e) fep_china_uni_eep_pane_g1

0x8098,	// (0x000633a6) fep_china_uni_eep_pane_t1

0x7637,	// (0x00062945) aid_touch_area_size_smil_player

0x1fa5,	// (0x0005d2b3) lc0_clock_pane

0x21a4,	// (0x0005d4b2) status_pane_g5_ParamLimits

0x21a4,	// (0x0005d4b2) status_pane_g5

0xb0e2,	// (0x000663f0) popup_keymap_window

0x2162,	// (0x0005d470) status_icon_pane

0x7d03,	// (0x00063011) cell_ai5_widget_pane_g3_ParamLimits

0x7d1a,	// (0x00063028) cell_ai5_widget_pane_g4_ParamLimits

0x7d26,	// (0x00063034) cell_ai5_widget_pane_g5_ParamLimits

0x7d4a,	// (0x00063058) cell_ai5_widget_pane_g8_ParamLimits

0x7d4a,	// (0x00063058) cell_ai5_widget_pane_g8

0x7d5e,	// (0x0006306c) cell_ai5_widget_pane_g9_ParamLimits

0x7d5e,	// (0x0006306c) cell_ai5_widget_pane_g9

0x7d72,	// (0x00063080) cell_ai5_widget_pane_g10_ParamLimits

0x7d72,	// (0x00063080) cell_ai5_widget_pane_g10

0x80a7,	// (0x000633b5) status_icon_pane_g1

0x5cd1,	// (0x00060fdf) bg_popup_sub_pane_cp13

0x80af,	// (0x000633bd) popup_keymap_window_t1

0xadc3,	// (0x000660d1) control_pane_g6_ParamLimits

0xadc3,	// (0x000660d1) control_pane_g6

0xadd0,	// (0x000660de) control_pane_g7_ParamLimits

0xadd0,	// (0x000660de) control_pane_g7

0xaddd,	// (0x000660eb) control_pane_g8_ParamLimits

0xaddd,	// (0x000660eb) control_pane_g8

0xe2ef,	// (0x000695fd) dt_sta_controll_pane_ParamLimits

0xe2fc,	// (0x0006960a) dt_sta_indi_pane_ParamLimits

0xe309,	// (0x00069617) dt_sta_title_pane_ParamLimits

0x62a4,	// (0x000615b2) aid_size_touch_scroll_bar_cale

0xe7f0,	// (0x00069afe) popup_discreet_window_ParamLimits

0xe7f0,	// (0x00069afe) popup_discreet_window

0x9d3f,	// (0x0006504d) popup_sk_window

0x2965,	// (0x0005dc73) bg_popup_sub_pane_cp28_ParamLimits

0x2965,	// (0x0005dc73) bg_popup_sub_pane_cp28

0x80bd,	// (0x000633cb) popup_discreet_window_g1_ParamLimits

0x80bd,	// (0x000633cb) popup_discreet_window_g1

0x80dd,	// (0x000633eb) popup_discreet_window_t1_ParamLimits

0x80dd,	// (0x000633eb) popup_discreet_window_t1

0x80fb,	// (0x00063409) popup_discreet_window_t2_ParamLimits

0x80fb,	// (0x00063409) popup_discreet_window_t2

0x0002,

0xfebc,	// (0x0006b1ca) popup_discreet_window_t_ParamLimits

0xfebc,	// (0x0006b1ca) popup_discreet_window_t

0x15c8,	// (0x0005c8d6) popup_sk_window_g1

0x15d2,	// (0x0005c8e0) popup_sk_window_g2

0x0001,

0xfec3,	// (0x0006b1d1) popup_sk_window_g

0x15dc,	// (0x0005c8ea) popup_sk_window_t1

0x15ec,	// (0x0005c8fa) popup_sk_window_t1_copy1

0x7cf3,	// (0x00063001) cell_ai5_widget_pane_g2_ParamLimits

0x7e4c,	// (0x0006315a) cell_ai5_widget_pane_t9_ParamLimits

0x7e4c,	// (0x0006315a) cell_ai5_widget_pane_t9

0x5cd1,	// (0x00060fdf) main_fep_fshwr2_pane

0xc2d5,	// (0x000675e3) aid_fshwr2_btn_pane

0xc2e6,	// (0x000675f4) aid_fshwr2_syb_pane

0xc2f7,	// (0x00067605) aid_fshwr2_txt_pane

0xc303,	// (0x00067611) fshwr2_func_candi_pane

0xc324,	// (0x00067632) fshwr2_hwr_syb_pane

0xc341,	// (0x0006764f) fshwr2_icf_pane

0xe713,	// (0x00069a21) fshwr2_icf_bg_pane

0x166e,	// (0x0005c97c) fshwr2_icf_pane_t1_ParamLimits

0x166e,	// (0x0005c97c) fshwr2_icf_pane_t1

0x8e7e,	// (0x0006418c) fshwr2_func_candi_pane_g1

0xe388,	// (0x00069696) fshwr2_func_candi_row_pane_ParamLimits

0xe388,	// (0x00069696) fshwr2_func_candi_row_pane

0xc36d,	// (0x0006767b) cell_fshwr2_syb_pane_ParamLimits

0xc36d,	// (0x0006767b) cell_fshwr2_syb_pane

0x0ab5,	// (0x0005bdc3) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0ab5,	// (0x0005bdc3) fshwr2_hwr_syb_pane_g1

0xe713,	// (0x00069a21) bg_popup_call_pane_cp01

0xc383,	// (0x00067691) fshwr2_func_candi_cell_pane_ParamLimits

0xc383,	// (0x00067691) fshwr2_func_candi_cell_pane

0xe398,	// (0x000696a6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe398,	// (0x000696a6) fshwr2_func_candi_cell_bg_pane

0xc3b3,	// (0x000676c1) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc3b3,	// (0x000676c1) fshwr2_func_candi_cell_pane_g1

0xc3e2,	// (0x000676f0) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc3e2,	// (0x000676f0) fshwr2_func_candi_cell_pane_t1

0xe713,	// (0x00069a21) bg_button_pane_cp08

0x8169,	// (0x00063477) cell_fshwr2_syb_bg_pane

0xc3f5,	// (0x00067703) cell_fshwr2_syb_bg_pane_g1

0xc3fd,	// (0x0006770b) cell_fshwr2_syb_bg_pane_t1

0x899c,	// (0x00063caa) main_tmo_pane

0xc7fc,	// (0x00067b0a) uni_indicator_pane_g1_ParamLimits

0xc812,	// (0x00067b20) uni_indicator_pane_g2_ParamLimits

0xc828,	// (0x00067b36) uni_indicator_pane_g3_ParamLimits

0xc83d,	// (0x00067b4b) uni_indicator_pane_g4_ParamLimits

0xc83d,	// (0x00067b4b) uni_indicator_pane_g4

0x34de,	// (0x0005e7ec) uni_indicator_pane_g5_ParamLimits

0x34de,	// (0x0005e7ec) uni_indicator_pane_g5

0x34de,	// (0x0005e7ec) uni_indicator_pane_g6_ParamLimits

0x34de,	// (0x0005e7ec) uni_indicator_pane_g6

0xf921,	// (0x0006ac2f) uni_indicator_pane_g_ParamLimits

0xd3ac,	// (0x000686ba) popup_tmo_note_window_ParamLimits

0xd3ac,	// (0x000686ba) popup_tmo_note_window

0x0e36,	// (0x0005c144) fshwr2_bg_pane

0xc3d3,	// (0x000676e1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc3d3,	// (0x000676e1) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec8,	// (0x0006b1d6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec8,	// (0x0006b1d6) fshwr2_func_candi_cell_pane_g

0x0a9d,	// (0x0005bdab) bg_popup_window_pane_cp01

0x171a,	// (0x0005ca28) bg_popup_window_pane_g1_cp01

0x8171,	// (0x0006347f) bg_popup_window_pane_cp22_ParamLimits

0x8171,	// (0x0006347f) bg_popup_window_pane_cp22

0x817f,	// (0x0006348d) listscroll_tmo_link_pane_ParamLimits

0x817f,	// (0x0006348d) listscroll_tmo_link_pane

0x81bf,	// (0x000634cd) popup_tmo_note_window_g1_ParamLimits

0x81bf,	// (0x000634cd) popup_tmo_note_window_g1

0x81cc,	// (0x000634da) tmo_note_info_pane_ParamLimits

0x81cc,	// (0x000634da) tmo_note_info_pane

0xe3a4,	// (0x000696b2) list_tmo_note_info_pane_g1_ParamLimits

0xe3a4,	// (0x000696b2) list_tmo_note_info_pane_g1

0x81fd,	// (0x0006350b) list_tmo_note_info_pane_g2_ParamLimits

0x81fd,	// (0x0006350b) list_tmo_note_info_pane_g2

0x0001,

0xfecd,	// (0x0006b1db) list_tmo_note_info_pane_g_ParamLimits

0xfecd,	// (0x0006b1db) list_tmo_note_info_pane_g

0x8219,	// (0x00063527) list_tmo_note_info_text_pane_ParamLimits

0x8219,	// (0x00063527) list_tmo_note_info_text_pane

0x829e,	// (0x000635ac) list_tmo_link_pane

0x82ab,	// (0x000635b9) scroll_pane_cp20

0x82b8,	// (0x000635c6) list_single_tmo_link_pane_ParamLimits

0x82b8,	// (0x000635c6) list_single_tmo_link_pane

0x82c8,	// (0x000635d6) list_single_tmo_link_pane_t1

0x82d6,	// (0x000635e4) list_tmo_note_info_text_pane_t1_ParamLimits

0x82d6,	// (0x000635e4) list_tmo_note_info_text_pane_t1

0xa7f8,	// (0x00065b06) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa7f8,	// (0x00065b06) aid_size_touch_scroll_bar_cp01

0xa727,	// (0x00065a35) aid_size_touch_slider_marker

0x9d2f,	// (0x0006503d) popup_settings_window_ParamLimits

0x9d2f,	// (0x0006503d) popup_settings_window

0xeb1b,	// (0x00069e29) popup_candi_list_indi_window

0x1e4d,	// (0x0005d15b) aid_touch_navi_pane_ParamLimits

0x0d8f,	// (0x0005c09d) rs_clock_indi_pane

0x0d98,	// (0x0005c0a6) sctrl_sk_bottom_pane_ParamLimits

0x0da9,	// (0x0005c0b7) sctrl_sk_top_pane_ParamLimits

0x0eae,	// (0x0005c1bc) popup_fep_tooltip_window

0x7c71,	// (0x00062f7f) aid_size_cell_widget_grid_ParamLimits

0x7cde,	// (0x00062fec) cell_ai5_widget_pane_g1_ParamLimits

0x7cde,	// (0x00062fec) cell_ai5_widget_pane_g1

0xe2b1,	// (0x000695bf) cell_ai5_widget_pane_g6_ParamLimits

0xe2bd,	// (0x000695cb) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4b,	// (0x0006b159) cell_ai5_widget_pane_g_ParamLimits

0xfe4b,	// (0x0006b159) cell_ai5_widget_pane_g

0x7e70,	// (0x0006317e) cell_ai5_widget_pane_t10_ParamLimits

0x7e70,	// (0x0006317e) cell_ai5_widget_pane_t10

0x7e8e,	// (0x0006319c) grid_ai5_widget_pane_ParamLimits

0x7f26,	// (0x00063234) cell_contacts_ai5_widget_pane_ParamLimits

0x7f26,	// (0x00063234) cell_contacts_ai5_widget_pane

0x8110,	// (0x0006341e) popup_discreet_window_t3_ParamLimits

0x8110,	// (0x0006341e) popup_discreet_window_t3

0xc359,	// (0x00067667) popup_fshwr2_char_preview_window_ParamLimits

0xc359,	// (0x00067667) popup_fshwr2_char_preview_window

0xe3bb,	// (0x000696c9) tmo_note_info_pane_t1

0xe3d0,	// (0x000696de) tmo_note_info_pane_t2

0xe3e9,	// (0x000696f7) tmo_note_info_pane_t3

0x827a,	// (0x00063588) tmo_note_info_pane_t4

0x828c,	// (0x0006359a) tmo_note_info_pane_t5

0x0004,

0xfed2,	// (0x0006b1e0) tmo_note_info_pane_t

0x829e,	// (0x000635ac) list_tmo_link_pane_ParamLimits

0x82ab,	// (0x000635b9) scroll_pane_cp20_ParamLimits

0xe713,	// (0x00069a21) bg_popup_fep_char_preview_window_cp01

0x82ef,	// (0x000635fd) popup_fshwr2_char_preview_window_t1

0x82fd,	// (0x0006360b) popup_candi_list_indi_window_g1

0x8306,	// (0x00063614) bg_cell_contacts_ai5_widget_pane

0x8312,	// (0x00063620) cell_contacts_ai5_widget_pane_g1

0x8327,	// (0x00063635) cell_contacts_ai5_widget_pane_g2

0x8333,	// (0x00063641) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfedd,	// (0x0006b1eb) cell_contacts_ai5_widget_pane_g

0x833f,	// (0x0006364d) cell_contacts_ai5_widget_pane_t1

0x899c,	// (0x00063caa) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe463,	// (0x00069771) settings_container_pane

0xe9a8,	// (0x00069cb6) listscroll_set_pane_copy1

0x4207,	// (0x0005f515) scroll_pane_cp121_copy1

0x83c2,	// (0x000636d0) set_content_pane_copy1

0xe46f,	// (0x0006977d) aid_height_set_list_copy1_ParamLimits

0xe46f,	// (0x0006977d) aid_height_set_list_copy1

0x36de,	// (0x0005e9ec) aid_size_parent_copy1_ParamLimits

0x36de,	// (0x0005e9ec) aid_size_parent_copy1

0xe47b,	// (0x00069789) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe47b,	// (0x00069789) button_value_adjust_pane_cp6_copy1

0x016a,	// (0x0005b478) list_highlight_pane_cp2_copy1_ParamLimits

0x016a,	// (0x0005b478) list_highlight_pane_cp2_copy1

0xe48f,	// (0x0006979d) list_set_pane_copy1_ParamLimits

0xe48f,	// (0x0006979d) list_set_pane_copy1

0xe3fe,	// (0x0006970c) main_pane_set_t1_copy1_ParamLimits

0xe3fe,	// (0x0006970c) main_pane_set_t1_copy1

0xe438,	// (0x00069746) main_pane_set_t2_copy1_ParamLimits

0xe438,	// (0x00069746) main_pane_set_t2_copy1

0xe556,	// (0x00069864) main_pane_set_t3_copy1

0xe564,	// (0x00069872) main_pane_set_t4_copy1

0xe457,	// (0x00069765) set_content_pane_g1_copy1_ParamLimits

0xe457,	// (0x00069765) set_content_pane_g1_copy1

0xe572,	// (0x00069880) setting_code_pane_copy1

0x84d5,	// (0x000637e3) setting_slider_graphic_pane_copy1

0x84d5,	// (0x000637e3) setting_slider_pane_copy1

0x84d5,	// (0x000637e3) setting_text_pane_copy1

0x84d5,	// (0x000637e3) setting_volume_pane_copy1

0xe572,	// (0x00069880) settings_code_pane_cp2_copy1

0xe57a,	// (0x00069888) settings_code_pane_cp_copy1_ParamLimits

0xe57a,	// (0x00069888) settings_code_pane_cp_copy1

0xc40c,	// (0x0006771a) volume_set_pane_copy1

0xe58e,	// (0x0006989c) volume_set_pane_g10_copy1

0xe59a,	// (0x000698a8) volume_set_pane_g1_copy1

0xe5a4,	// (0x000698b2) volume_set_pane_g2_copy1

0xe5ae,	// (0x000698bc) volume_set_pane_g3_copy1

0xe5b8,	// (0x000698c6) volume_set_pane_g4_copy1

0xe5c2,	// (0x000698d0) volume_set_pane_g5_copy1

0xe5cc,	// (0x000698da) volume_set_pane_g6_copy1

0xe5d6,	// (0x000698e4) volume_set_pane_g7_copy1

0xe5e0,	// (0x000698ee) volume_set_pane_g8_copy1

0xe5ea,	// (0x000698f8) volume_set_pane_g9_copy1

0x5d3f,	// (0x0006104d) bg_set_opt_pane_cp_copy1_ParamLimits

0x5d3f,	// (0x0006104d) bg_set_opt_pane_cp_copy1

0x172f,	// (0x0005ca3d) setting_slider_pane_t1_copy1_ParamLimits

0x172f,	// (0x0005ca3d) setting_slider_pane_t1_copy1

0xc418,	// (0x00067726) setting_slider_pane_t2_copy1_ParamLimits

0xc418,	// (0x00067726) setting_slider_pane_t2_copy1

0xc432,	// (0x00067740) setting_slider_pane_t3_copy1_ParamLimits

0xc432,	// (0x00067740) setting_slider_pane_t3_copy1

0xc44a,	// (0x00067758) slider_set_pane_copy1_ParamLimits

0xc44a,	// (0x00067758) slider_set_pane_copy1

0x89f7,	// (0x00063d05) set_opt_bg_pane_g1_copy2

0x89ff,	// (0x00063d0d) set_opt_bg_pane_g2_copy2

0x8557,	// (0x00063865) set_opt_bg_pane_g3_copy2

0x8a0f,	// (0x00063d1d) set_opt_bg_pane_g4_copy2

0x8a17,	// (0x00063d25) set_opt_bg_pane_g5_copy2

0x8a1f,	// (0x00063d2d) set_opt_bg_pane_g6_copy2

0xe5f4,	// (0x00069902) set_opt_bg_pane_g7_copy2

0x856b,	// (0x00063879) set_opt_bg_pane_g8_copy2

0x8575,	// (0x00063883) set_opt_bg_pane_g9_copy2

0x1795,	// (0x0005caa3) aid_size_touch_slider_mark_copy1_ParamLimits

0x1795,	// (0x0005caa3) aid_size_touch_slider_mark_copy1

0x857f,	// (0x0006388d) slider_set_pane_g1_copy1

0x17a9,	// (0x0005cab7) slider_set_pane_g2_copy1

0x063c,	// (0x0005b94a) slider_set_pane_g3_copy1_ParamLimits

0x063c,	// (0x0005b94a) slider_set_pane_g3_copy1

0x0650,	// (0x0005b95e) slider_set_pane_g4_copy1_ParamLimits

0x0650,	// (0x0005b95e) slider_set_pane_g4_copy1

0x0668,	// (0x0005b976) slider_set_pane_g5_copy1_ParamLimits

0x0668,	// (0x0005b976) slider_set_pane_g5_copy1

0x063c,	// (0x0005b94a) slider_set_pane_g6_copy1_ParamLimits

0x063c,	// (0x0005b94a) slider_set_pane_g6_copy1

0xc460,	// (0x0006776e) slider_set_pane_g7_copy1_ParamLimits

0xc460,	// (0x0006776e) slider_set_pane_g7_copy1

0x5ce5,	// (0x00060ff3) bg_set_opt_pane_cp2_copy1

0x8588,	// (0x00063896) setting_slider_graphic_pane_g1_copy1

0xe5fe,	// (0x0006990c) setting_slider_graphic_pane_t1_copy1

0xe60e,	// (0x0006991c) setting_slider_graphic_pane_t2_copy1

0xe61e,	// (0x0006992c) slider_set_pane_cp_copy1

0x85c1,	// (0x000638cf) input_focus_pane_cp1_copy1

0x85ca,	// (0x000638d8) list_set_text_pane_copy1

0x85d2,	// (0x000638e0) setting_text_pane_g1_copy1

0xc476,	// (0x00067784) set_text_pane_t1_copy1

0x85c1,	// (0x000638cf) input_focus_pane_cp2_copy1

0x85d2,	// (0x000638e0) setting_code_pane_g1_copy1

0xe626,	// (0x00069934) setting_code_pane_t1_copy1

0xe634,	// (0x00069942) list_set_graphic_pane_copy1

0x5ce5,	// (0x00060ff3) bg_set_opt_pane_cp4_copy1

0xab46,	// (0x00065e54) list_set_graphic_pane_g1_copy1_ParamLimits

0xab46,	// (0x00065e54) list_set_graphic_pane_g1_copy1

0xe646,	// (0x00069954) list_set_graphic_pane_g2_copy1

0xab5e,	// (0x00065e6c) list_set_graphic_pane_t1_copy1_ParamLimits

0xab5e,	// (0x00065e6c) list_set_graphic_pane_t1_copy1

0x4ae6,	// (0x0005fdf4) rs_clock_indi_pane_g1

0x8603,	// (0x00063911) rs_clock_indi_pane_t1

0x8611,	// (0x0006391f) rs_indi_pane

0x8619,	// (0x00063927) rs_indi_pane_g1

0x8622,	// (0x00063930) rs_indi_pane_g2

0x862b,	// (0x00063939) rs_indi_pane_g3

0x0002,

0xfee4,	// (0x0006b1f2) rs_indi_pane_g

0xe9a8,	// (0x00069cb6) bg_popup_preview_window_pane_cp03

0x8634,	// (0x00063942) popup_fep_tooltip_window_t1

0x579d,	// (0x00060aab) popup_note2_window_g2_ParamLimits

0x579d,	// (0x00060aab) popup_note2_window_g2

0x0001,

0xfc7d,	// (0x0006af8b) popup_note2_window_g_ParamLimits

0xfc7d,	// (0x0006af8b) popup_note2_window_g

0x5ca5,	// (0x00060fb3) bg_popup_sub_pane_cp11_ParamLimits

0x5cb2,	// (0x00060fc0) cell_ai3_links_pane_g1_ParamLimits

0x632a,	// (0x00061638) cell_ai3_links_pane_t1

0xc476,	// (0x00067784) set_text_pane_t1_copy1_ParamLimits

0xabdd,	// (0x00065eeb) cell_graphic_popup_pane_cp2_ParamLimits

0xabdd,	// (0x00065eeb) cell_graphic_popup_pane_cp2

0xe64e,	// (0x0006995c) cell_graphic_popup_pane_g1_cp2

0x60b7,	// (0x000613c5) cell_graphic_popup_pane_g2_cp2

0x864a,	// (0x00063958) cell_graphic_popup_pane_g3_cp2

0x8652,	// (0x00063960) cell_graphic_popup_pane_t2_cp2

0x60c8,	// (0x000613d6) grid_highlight_pane_cp3_cp2

0x8ca0,	// (0x00063fae) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x899c,	// (0x00063caa) main_tmo_pane_ParamLimits

0xd3a0,	// (0x000686ae) popup_tmo_big_image_note_window

0x7ccd,	// (0x00062fdb) cell_ai5_widget_list_pane

0x7cd5,	// (0x00062fe3) cell_ai5_widget_lrg_icon_pane

0xe3bb,	// (0x000696c9) tmo_note_info_pane_t1_ParamLimits

0xe3d0,	// (0x000696de) tmo_note_info_pane_t2_ParamLimits

0xe3e9,	// (0x000696f7) tmo_note_info_pane_t3_ParamLimits

0x827a,	// (0x00063588) tmo_note_info_pane_t4_ParamLimits

0x828c,	// (0x0006359a) tmo_note_info_pane_t5_ParamLimits

0xfed2,	// (0x0006b1e0) tmo_note_info_pane_t_ParamLimits

0xe463,	// (0x00069771) settings_container_pane_ParamLimits

0x85b9,	// (0x000638c7) indicator_popup_pane_cp5

0x85b9,	// (0x000638c7) indicator_popup_pane_cp6

0xe634,	// (0x00069942) list_set_graphic_pane_copy1_ParamLimits

0x5cd1,	// (0x00060fdf) bg_popup_window_pane_cp23

0x8660,	// (0x0006396e) popup_tmo_big_image_note_window_g1

0x866c,	// (0x0006397a) popup_tmo_big_image_note_window_t1

0x867c,	// (0x0006398a) popup_tmo_big_image_note_window_t2

0x868c,	// (0x0006399a) popup_tmo_big_image_note_window_t3

0x0002,

0xfeeb,	// (0x0006b1f9) popup_tmo_big_image_note_window_t

0x4ae6,	// (0x0005fdf4) cell_ai5_widget_lrg_icon_pane_g1

0x869c,	// (0x000639aa) cell_ai5_widget_lrg_icon_pane_t1

0x86aa,	// (0x000639b8) cell_ai5_widget_list_row_pane_ParamLimits

0x86aa,	// (0x000639b8) cell_ai5_widget_list_row_pane

0x86c2,	// (0x000639d0) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x86c2,	// (0x000639d0) cell_ai5_widget_list_row_pane_g1

0x86cf,	// (0x000639dd) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x86cf,	// (0x000639dd) cell_ai5_widget_list_row_pane_t1

0x86fa,	// (0x00063a08) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x86fa,	// (0x00063a08) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfef2,	// (0x0006b200) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef2,	// (0x0006b200) cell_ai5_widget_list_row_pane_t

0xe713,	// (0x00069a21) main_fep_vtchi_ss_pane

0x873e,	// (0x00063a4c) popup_fep_char_pre_window

0x8746,	// (0x00063a54) popup_fep_ituss_window

0x8767,	// (0x00063a75) popup_fep_vkbss_window

0x8788,	// (0x00063a96) grid_vkbss_keypad_pane_ParamLimits

0x8788,	// (0x00063a96) grid_vkbss_keypad_pane

0x8798,	// (0x00063aa6) ituss_keypad_pane

0x17d3,	// (0x0005cae1) aid_vkbss_key_offset_ParamLimits

0x17d3,	// (0x0005cae1) aid_vkbss_key_offset

0x17df,	// (0x0005caed) cell_vkbss_key_pane_ParamLimits

0x17df,	// (0x0005caed) cell_vkbss_key_pane

0x87a7,	// (0x00063ab5) bg_cell_vkbss_key_g1_ParamLimits

0x87a7,	// (0x00063ab5) bg_cell_vkbss_key_g1

0x87b3,	// (0x00063ac1) cell_vkbss_key_3p_pane_ParamLimits

0x87b3,	// (0x00063ac1) cell_vkbss_key_3p_pane

0x87cd,	// (0x00063adb) cell_vkbss_key_g1_ParamLimits

0x87cd,	// (0x00063adb) cell_vkbss_key_g1

0x87e7,	// (0x00063af5) cell_vkbss_key_t1_ParamLimits

0x87e7,	// (0x00063af5) cell_vkbss_key_t1

0x17f5,	// (0x0005cb03) cell_ituss_key_pane_ParamLimits

0x17f5,	// (0x0005cb03) cell_ituss_key_pane

0x8812,	// (0x00063b20) bg_cell_ituss_key_g1_ParamLimits

0x8812,	// (0x00063b20) bg_cell_ituss_key_g1

0x881e,	// (0x00063b2c) cell_ituss_key_pane_g1_ParamLimits

0x881e,	// (0x00063b2c) cell_ituss_key_pane_g1

0x1806,	// (0x0005cb14) cell_ituss_key_pane_g2_ParamLimits

0x1806,	// (0x0005cb14) cell_ituss_key_pane_g2

0x0002,

0xfef9,	// (0x0006b207) cell_ituss_key_pane_g_ParamLimits

0xfef9,	// (0x0006b207) cell_ituss_key_pane_g

0x1832,	// (0x0005cb40) cell_ituss_key_t1_ParamLimits

0x1832,	// (0x0005cb40) cell_ituss_key_t1

0x186c,	// (0x0005cb7a) cell_ituss_key_t2_ParamLimits

0x186c,	// (0x0005cb7a) cell_ituss_key_t2

0x189d,	// (0x0005cbab) cell_ituss_key_t3_ParamLimits

0x189d,	// (0x0005cbab) cell_ituss_key_t3

0x186c,	// (0x0005cb7a) cell_ituss_key_t4_ParamLimits

0x186c,	// (0x0005cb7a) cell_ituss_key_t4

0x0004,

0xff00,	// (0x0006b20e) cell_ituss_key_t_ParamLimits

0xff00,	// (0x0006b20e) cell_ituss_key_t

0x8844,	// (0x00063b52) cell_vkbss_key_3p_pane_g1

0x884c,	// (0x00063b5a) cell_vkbss_key_3p_pane_g2

0x8854,	// (0x00063b62) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0b,	// (0x0006b219) cell_vkbss_key_3p_pane_g

0xe713,	// (0x00069a21) bg_popup_fep_char_preview_window_cp02

0x18e0,	// (0x0005cbee) popup_fep_char_pre_window_t1

0xe2a7,	// (0x000695b5) main_ai5_sk_pane

0x8306,	// (0x00063614) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8312,	// (0x00063620) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8327,	// (0x00063635) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8333,	// (0x00063641) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfedd,	// (0x0006b1eb) cell_contacts_ai5_widget_pane_g_ParamLimits

0x833f,	// (0x0006364d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x899c,	// (0x00063caa) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe656,	// (0x00069964) main_ai5_sk_pane_g1

0x279d,	// (0x0005daab) popup_query_code_window_g1

0x875c,	// (0x00063a6a) popup_fep_vkb_icf_pane

0x8772,	// (0x00063a80) popup_fep_vtchi_icf_pane

0x8865,	// (0x00063b73) bg_icf_pane

0x8871,	// (0x00063b7f) list_vkb_icf_pane

0x887d,	// (0x00063b8b) bg_icf_pane_cp01

0x8890,	// (0x00063b9e) vtchi_icf_list_pane

0x88a1,	// (0x00063baf) list_vkb_icf_pane_t1_ParamLimits

0x88a1,	// (0x00063baf) list_vkb_icf_pane_t1

0x88b7,	// (0x00063bc5) vtchi_icf_list_pane_t1_ParamLimits

0x88b7,	// (0x00063bc5) vtchi_icf_list_pane_t1

0x8746,	// (0x00063a54) popup_fep_ituss_window_ParamLimits

0x8772,	// (0x00063a80) popup_fep_vtchi_icf_pane_ParamLimits

0x8798,	// (0x00063aa6) ituss_keypad_pane_ParamLimits

0x17c7,	// (0x0005cad5) ituss_sks_pane

0x8865,	// (0x00063b73) bg_icf_pane_ParamLimits

0x8722,	// (0x00063a30) icf_edit_indi_pane_ParamLimits

0x8722,	// (0x00063a30) icf_edit_indi_pane

0x8871,	// (0x00063b7f) list_vkb_icf_pane_ParamLimits

0x887d,	// (0x00063b8b) bg_icf_pane_cp01_ParamLimits

0x8731,	// (0x00063a3f) icf_edit_indi_pane_cp01_ParamLimits

0x8731,	// (0x00063a3f) icf_edit_indi_pane_cp01

0x8898,	// (0x00063ba6) vtchi_query_pane

0x4d61,	// (0x0006006f) icf_edit_indi_pane_g1_ParamLimits

0x4d61,	// (0x0006006f) icf_edit_indi_pane_g1

0x8926,	// (0x00063c34) icf_edit_indi_pane_g2_ParamLimits

0x8926,	// (0x00063c34) icf_edit_indi_pane_g2

0x0001,

0xff23,	// (0x0006b231) icf_edit_indi_pane_g_ParamLimits

0xff23,	// (0x0006b231) icf_edit_indi_pane_g

0x8935,	// (0x00063c43) icf_edit_indi_pane_t1

0x88cf,	// (0x00063bdd) bg_input_focus_pane_cp042

0x629b,	// (0x000615a9) vtchi_button_pane

0x88d8,	// (0x00063be6) vtchi_query_pane_t1

0x88e6,	// (0x00063bf4) vtchi_query_pane_t2

0x88f4,	// (0x00063c02) vtchi_query_pane_t3

0x0002,

0xff12,	// (0x0006b220) vtchi_query_pane_t

0xe713,	// (0x00069a21) bg_button_pane_cp13

0x8902,	// (0x00063c10) vtchi_button_pane_g1

0x18ef,	// (0x0005cbfd) ituss_sks_pane_g1

0x18fa,	// (0x0005cc08) ituss_sks_pane_g2

0x0001,

0xff19,	// (0x0006b227) ituss_sks_pane_g

0x890a,	// (0x00063c18) ituss_sks_pane_t1

0x8918,	// (0x00063c26) ituss_sks_pane_t2

0x0001,

0xff1e,	// (0x0006b22c) ituss_sks_pane_t

0x4596,	// (0x0005f8a4) indicator_nsta_pane_cp_g1

0x459f,	// (0x0005f8ad) indicator_nsta_pane_cp_g2

0x45a7,	// (0x0005f8b5) indicator_nsta_pane_cp_g3

0x45af,	// (0x0005f8bd) indicator_nsta_pane_cp_g4

0x45b7,	// (0x0005f8c5) indicator_nsta_pane_cp_g5

0x45bf,	// (0x0005f8cd) indicator_nsta_pane_cp_g6

0x0005,

0xfabb,	// (0x0006adc9) indicator_nsta_pane_cp_g

0xddca,	// (0x000690d8) cell_graphic2_pane_t2_ParamLimits

0xddca,	// (0x000690d8) cell_graphic2_pane_t2

0x0001,

0xfdd4,	// (0x0006b0e2) cell_graphic2_pane_t_ParamLimits

0xfdd4,	// (0x0006b0e2) cell_graphic2_pane_t

0xde00,	// (0x0006910e) cell_graphic2_control_pane_t1

0xaa41,	// (0x00065d4f) signal_pane_g3_ParamLimits

0xaa41,	// (0x00065d4f) signal_pane_g3

0xaa55,	// (0x00065d63) signal_pane_g4_ParamLimits

0xaa55,	// (0x00065d63) signal_pane_g4

0x870c,	// (0x00063a1a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x870c,	// (0x00063a1a) cell_ai5_widget_list_row_pane_t3

0x8832,	// (0x00063b40) cell_ituss_key_pane_t1_ParamLimits

0x8832,	// (0x00063b40) cell_ituss_key_pane_t1

0x241a,	// (0x0005d728) form_field_data_wide_pane_vc_t2_ParamLimits

0x241a,	// (0x0005d728) form_field_data_wide_pane_vc_t2

0x242e,	// (0x0005d73c) form_field_data_wide_pane_vc_t3_ParamLimits

0x242e,	// (0x0005d73c) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0006ab17) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0006ab17) form_field_data_wide_pane_vc_t

0x4247,	// (0x0005f555) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4247,	// (0x0005f555) form_field_slider_wide_pane_vc_t3

0x431d,	// (0x0005f62b) form_field_popup_wide_pane_vc_t2_ParamLimits

0x431d,	// (0x0005f62b) form_field_popup_wide_pane_vc_t2

0x4334,	// (0x0005f642) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4334,	// (0x0005f642) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaaa,	// (0x0006adb8) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaaa,	// (0x0006adb8) form_field_popup_wide_pane_vc_t

0xc2d5,	// (0x000675e3) aid_fshwr2_btn_pane_ParamLimits

0xc2e6,	// (0x000675f4) aid_fshwr2_syb_pane_ParamLimits

0xc2f7,	// (0x00067605) aid_fshwr2_txt_pane_ParamLimits

0x0e36,	// (0x0005c144) fshwr2_bg_pane_ParamLimits

0xc303,	// (0x00067611) fshwr2_func_candi_pane_ParamLimits

0xc324,	// (0x00067632) fshwr2_hwr_syb_pane_ParamLimits

0xc341,	// (0x0006764f) fshwr2_icf_pane_ParamLimits

0x39fc,	// (0x0005ed0a) list_double_graphic_pane_vc_g4_ParamLimits

0x39fc,	// (0x0005ed0a) list_double_graphic_pane_vc_g4

0x1826,	// (0x0005cb34) cell_ituss_key_pane_g3_ParamLimits

0x1826,	// (0x0005cb34) cell_ituss_key_pane_g3

0x18ce,	// (0x0005cbdc) cell_ituss_key_t5_ParamLimits

0x18ce,	// (0x0005cbdc) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large

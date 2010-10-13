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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0003ae0d };

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
0x317e,	// (0x0003df8b) Screen

0x3188,	// (0x0003df95) application_window_ParamLimits

0x3188,	// (0x0003df95) application_window

0x790d,	// (0x0004271a) screen_g1

0x3196,	// (0x0003dfa3) area_bottom_pane_ParamLimits

0x3196,	// (0x0003dfa3) area_bottom_pane

0x7917,	// (0x00042724) area_top_pane_ParamLimits

0x7917,	// (0x00042724) area_top_pane

0x4322,	// (0x0003f12f) main_pane_ParamLimits

0x4322,	// (0x0003f12f) main_pane

0x798f,	// (0x0004279c) misc_graphics

0x9fdb,	// (0x00044de8) battery_pane_ParamLimits

0x9fdb,	// (0x00044de8) battery_pane

0xcaba,	// (0x000478c7) bg_status_flat_pane_g8

0xcac2,	// (0x000478cf) bg_status_flat_pane_g9

0xc201,	// (0x0004700e) context_pane_ParamLimits

0xc201,	// (0x0004700e) context_pane

0xa135,	// (0x00044f42) navi_pane_ParamLimits

0xa135,	// (0x00044f42) navi_pane

0xa1aa,	// (0x00044fb7) signal_pane_ParamLimits

0xa1aa,	// (0x00044fb7) signal_pane

0x0008,

0xf84d,	// (0x0004a65a) bg_status_flat_pane_g

0xa236,	// (0x00045043) status_pane_g1_ParamLimits

0xa236,	// (0x00045043) status_pane_g1

0xa242,	// (0x0004504f) status_pane_g2_ParamLimits

0xa242,	// (0x0004504f) status_pane_g2

0xc267,	// (0x00047074) status_pane_g3_ParamLimits

0xc267,	// (0x00047074) status_pane_g3

0x0004,

0xf780,	// (0x0004a58d) status_pane_g_ParamLimits

0xf780,	// (0x0004a58d) status_pane_g

0xa24e,	// (0x0004505b) title_pane_ParamLimits

0xa24e,	// (0x0004505b) title_pane

0xa2a9,	// (0x000450b6) uni_indicator_pane_ParamLimits

0xa2a9,	// (0x000450b6) uni_indicator_pane

0xc158,	// (0x00046f65) bg_list_pane_ParamLimits

0xc158,	// (0x00046f65) bg_list_pane

0x0f8c,	// (0x0003bd99) find_pane

0x99bc,	// (0x000447c9) listscroll_app_pane_ParamLimits

0x99bc,	// (0x000447c9) listscroll_app_pane

0xc178,	// (0x00046f85) listscroll_form_pane

0x0f94,	// (0x0003bda1) listscroll_gen_pane_ParamLimits

0x0f94,	// (0x0003bda1) listscroll_gen_pane

0x4b19,	// (0x0003f926) listscroll_set_pane

0x99cc,	// (0x000447d9) main_idle_act_pane

0xbfc3,	// (0x00046dd0) main_idle_trad_pane

0xbfc3,	// (0x00046dd0) main_list_empty_pane

0x94e7,	// (0x000442f4) main_midp_pane

0xc192,	// (0x00046f9f) main_pane_g1_ParamLimits

0xc192,	// (0x00046f9f) main_pane_g1

0x99df,	// (0x000447ec) popup_ai_message_window_ParamLimits

0x99df,	// (0x000447ec) popup_ai_message_window

0x9a63,	// (0x00044870) popup_fep_china_uni_window_ParamLimits

0x9a63,	// (0x00044870) popup_fep_china_uni_window

0x4c03,	// (0x0003fa10) popup_fep_japan_candidate_window_ParamLimits

0x4c03,	// (0x0003fa10) popup_fep_japan_candidate_window

0x4c21,	// (0x0003fa2e) popup_fep_japan_predictive_window_ParamLimits

0x4c21,	// (0x0003fa2e) popup_fep_japan_predictive_window

0x9aa1,	// (0x000448ae) popup_find_window

0x9aba,	// (0x000448c7) popup_grid_graphic_window_ParamLimits

0x9aba,	// (0x000448c7) popup_grid_graphic_window

0x4c78,	// (0x0003fa85) popup_large_graphic_colour_window

0x9b36,	// (0x00044943) popup_menu_window_ParamLimits

0x9b36,	// (0x00044943) popup_menu_window

0x9c94,	// (0x00044aa1) popup_note_image_window

0x9c5c,	// (0x00044a69) popup_note_wait_window_ParamLimits

0x9c5c,	// (0x00044a69) popup_note_wait_window

0x9caa,	// (0x00044ab7) popup_note_window_ParamLimits

0x9caa,	// (0x00044ab7) popup_note_window

0x9d3e,	// (0x00044b4b) popup_query_code_window_ParamLimits

0x9d3e,	// (0x00044b4b) popup_query_code_window

0x4e35,	// (0x0003fc42) popup_query_data_code_window_ParamLimits

0x4e35,	// (0x0003fc42) popup_query_data_code_window

0x9d76,	// (0x00044b83) popup_query_data_window_ParamLimits

0x9d76,	// (0x00044b83) popup_query_data_window

0x9dea,	// (0x00044bf7) popup_query_sat_info_window_ParamLimits

0x9dea,	// (0x00044bf7) popup_query_sat_info_window

0x9e77,	// (0x00044c84) popup_snote_single_graphic_window_ParamLimits

0x9e77,	// (0x00044c84) popup_snote_single_graphic_window

0x9e77,	// (0x00044c84) popup_snote_single_text_window_ParamLimits

0x9e77,	// (0x00044c84) popup_snote_single_text_window

0x4ea4,	// (0x0003fcb1) popup_sub_window_general

0x4fa8,	// (0x0003fdb5) popup_window_general_ParamLimits

0x4fa8,	// (0x0003fdb5) popup_window_general

0xc1a0,	// (0x00046fad) power_save_pane

0x9866,	// (0x00044673) control_pane_g1_ParamLimits

0x9866,	// (0x00044673) control_pane_g1

0x49d6,	// (0x0003f7e3) control_pane_g2_ParamLimits

0x49d6,	// (0x0003f7e3) control_pane_g2

0xc14a,	// (0x00046f57) control_pane_g3_ParamLimits

0xc14a,	// (0x00046f57) control_pane_g3

0x0007,

0xf768,	// (0x0004a575) control_pane_g_ParamLimits

0xf768,	// (0x0004a575) control_pane_g

0x98c2,	// (0x000446cf) control_pane_t1_ParamLimits

0x98c2,	// (0x000446cf) control_pane_t1

0x991e,	// (0x0004472b) control_pane_t2_ParamLimits

0x991e,	// (0x0004472b) control_pane_t2

0x0002,

0xf779,	// (0x0004a586) control_pane_t_ParamLimits

0xf779,	// (0x0004a586) control_pane_t

0xc0f2,	// (0x00046eff) navi_navi_volume_pane_cp1

0xc0fa,	// (0x00046f07) status_small_icon_pane

0xc102,	// (0x00046f0f) status_small_pane_g1_ParamLimits

0xc102,	// (0x00046f0f) status_small_pane_g1

0x97e5,	// (0x000445f2) status_small_pane_g2_ParamLimits

0x97e5,	// (0x000445f2) status_small_pane_g2

0x97f1,	// (0x000445fe) status_small_pane_g3_ParamLimits

0x97f1,	// (0x000445fe) status_small_pane_g3

0x97fd,	// (0x0004460a) status_small_pane_g4_ParamLimits

0x97fd,	// (0x0004460a) status_small_pane_g4

0x9809,	// (0x00044616) status_small_pane_g5_ParamLimits

0x9809,	// (0x00044616) status_small_pane_g5

0xc136,	// (0x00046f43) status_small_pane_g6_ParamLimits

0xc136,	// (0x00046f43) status_small_pane_g6

0x0007,

0xf757,	// (0x0004a564) status_small_pane_g_ParamLimits

0xf757,	// (0x0004a564) status_small_pane_g

0x9838,	// (0x00044645) status_small_pane_t1

0x9852,	// (0x0004465f) status_small_wait_pane_ParamLimits

0x9852,	// (0x0004465f) status_small_wait_pane

0x968b,	// (0x00044498) aid_levels_signal_ParamLimits

0x968b,	// (0x00044498) aid_levels_signal

0x969f,	// (0x000444ac) signal_pane_g1_ParamLimits

0x969f,	// (0x000444ac) signal_pane_g1

0x96b9,	// (0x000444c6) signal_pane_g2_ParamLimits

0x96b9,	// (0x000444c6) signal_pane_g2

0x0003,

0xf6e8,	// (0x0004a4f5) signal_pane_g_ParamLimits

0xf6e8,	// (0x0004a4f5) signal_pane_g

0xbb74,	// (0x00046981) context_pane_g1

0x90e0,	// (0x00043eed) title_pane_g1

0x9122,	// (0x00043f2f) title_pane_t1

0x79a5,	// (0x000427b2) title_pane_t2

0x79cb,	// (0x000427d8) title_pane_t3

0x0002,

0xf532,	// (0x0004a33f) title_pane_t

0xa2cf,	// (0x000450dc) aid_levels_battery_ParamLimits

0xa2cf,	// (0x000450dc) aid_levels_battery

0xa2e7,	// (0x000450f4) battery_pane_g1_ParamLimits

0xa2e7,	// (0x000450f4) battery_pane_g1

0xa302,	// (0x0004510f) battery_pane_g2_ParamLimits

0xa302,	// (0x0004510f) battery_pane_g2

0x0001,

0xf78b,	// (0x0004a598) battery_pane_g_ParamLimits

0xf78b,	// (0x0004a598) battery_pane_g

0xa60a,	// (0x00045417) uni_indicator_pane_g1

0xa61e,	// (0x0004542b) uni_indicator_pane_g2

0xa633,	// (0x00045440) uni_indicator_pane_g3

0x0005,

0xf8f5,	// (0x0004a702) uni_indicator_pane_g

0x8156,	// (0x00042f63) navi_icon_pane_ParamLimits

0x8156,	// (0x00042f63) navi_icon_pane

0x798f,	// (0x0004279c) navi_midp_pane

0x798f,	// (0x0004279c) navi_navi_pane

0x8156,	// (0x00042f63) navi_text_pane_ParamLimits

0x8156,	// (0x00042f63) navi_text_pane

0x790d,	// (0x0004271a) status_small_wait_pane_g1

0x7ce0,	// (0x00042aed) status_small_wait_pane_g2

0x0001,

0xf8f0,	// (0x0004a6fd) status_small_wait_pane_g

0xa5b0,	// (0x000453bd) navi_navi_icon_text_pane

0xa5b8,	// (0x000453c5) navi_navi_pane_g1_ParamLimits

0xa5b8,	// (0x000453c5) navi_navi_pane_g1

0xa5ca,	// (0x000453d7) navi_navi_pane_g2_ParamLimits

0xa5ca,	// (0x000453d7) navi_navi_pane_g2

0x0001,

0xf8be,	// (0x0004a6cb) navi_navi_pane_g_ParamLimits

0xf8be,	// (0x0004a6cb) navi_navi_pane_g

0xa5dc,	// (0x000453e9) navi_navi_tabs_pane

0xa5b0,	// (0x000453bd) navi_navi_text_pane

0xa5b0,	// (0x000453bd) navi_navi_volume_pane

0xcffd,	// (0x00047e0a) navi_text_pane_t1

0xcff1,	// (0x00047dfe) navi_icon_pane_g1

0xcf54,	// (0x00047d61) navi_navi_text_pane_t1

0x522f,	// (0x0004003c) navi_navi_volume_pane_g1

0xa5a7,	// (0x000453b4) volume_small_pane

0xa503,	// (0x00045310) navi_navi_icon_text_pane_g1

0xa50b,	// (0x00045318) navi_navi_icon_text_pane_t1

0xcb02,	// (0x0004790f) navi_tabs_2_long_pane

0xcb02,	// (0x0004790f) navi_tabs_2_pane

0xcb02,	// (0x0004790f) navi_tabs_3_long_pane

0xcb02,	// (0x0004790f) navi_tabs_3_pane

0xcb02,	// (0x0004790f) navi_tabs_4_pane

0xa4e3,	// (0x000452f0) tabs_2_active_pane_ParamLimits

0xa4e3,	// (0x000452f0) tabs_2_active_pane

0xa4f3,	// (0x00045300) tabs_2_passive_pane_ParamLimits

0xa4f3,	// (0x00045300) tabs_2_passive_pane

0xa4b1,	// (0x000452be) tabs_3_active_pane_ParamLimits

0xa4b1,	// (0x000452be) tabs_3_active_pane

0xa4c1,	// (0x000452ce) tabs_3_passive_pane_ParamLimits

0xa4c1,	// (0x000452ce) tabs_3_passive_pane

0xa4d2,	// (0x000452df) tabs_3_passive_pane_cp_ParamLimits

0xa4d2,	// (0x000452df) tabs_3_passive_pane_cp

0xa46d,	// (0x0004527a) tabs_4_active_pane_ParamLimits

0xa46d,	// (0x0004527a) tabs_4_active_pane

0xa47e,	// (0x0004528b) tabs_4_passive_pane_ParamLimits

0xa47e,	// (0x0004528b) tabs_4_passive_pane

0xa48f,	// (0x0004529c) tabs_4_passive_pane_cp_ParamLimits

0xa48f,	// (0x0004529c) tabs_4_passive_pane_cp

0xa4a0,	// (0x000452ad) tabs_4_passive_pane_cp2_ParamLimits

0xa4a0,	// (0x000452ad) tabs_4_passive_pane_cp2

0xa44d,	// (0x0004525a) tabs_2_long_active_pane_ParamLimits

0xa44d,	// (0x0004525a) tabs_2_long_active_pane

0xa45d,	// (0x0004526a) tabs_2_long_passive_pane_ParamLimits

0xa45d,	// (0x0004526a) tabs_2_long_passive_pane

0xa416,	// (0x00045223) tabs_3_long_active_pane_ParamLimits

0xa416,	// (0x00045223) tabs_3_long_active_pane

0xa429,	// (0x00045236) tabs_3_long_passive_pane_ParamLimits

0xa429,	// (0x00045236) tabs_3_long_passive_pane

0xa43a,	// (0x00045247) tabs_3_long_passive_pane_cp_ParamLimits

0xa43a,	// (0x00045247) tabs_3_long_passive_pane_cp

0x50ea,	// (0x0003fef7) volume_small_pane_g1

0x50f3,	// (0x0003ff00) volume_small_pane_g2

0x50fc,	// (0x0003ff09) volume_small_pane_g3

0x5105,	// (0x0003ff12) volume_small_pane_g4

0x510e,	// (0x0003ff1b) volume_small_pane_g5

0x5117,	// (0x0003ff24) volume_small_pane_g6

0x5120,	// (0x0003ff2d) volume_small_pane_g7

0x5129,	// (0x0003ff36) volume_small_pane_g8

0x5132,	// (0x0003ff3f) volume_small_pane_g9

0x513b,	// (0x0003ff48) volume_small_pane_g10

0x0009,

0xf88a,	// (0x0004a697) volume_small_pane_g

0x7b18,	// (0x00042925) bg_active_tab_pane_cp2_ParamLimits

0x7b18,	// (0x00042925) bg_active_tab_pane_cp2

0x79eb,	// (0x000427f8) tabs_3_active_pane_g1

0x91af,	// (0x00043fbc) tabs_3_active_pane_t1

0x7b18,	// (0x00042925) bg_passive_tab_pane_cp2_ParamLimits

0x7b18,	// (0x00042925) bg_passive_tab_pane_cp2

0x79eb,	// (0x000427f8) tabs_3_passive_pane_g1

0x91af,	// (0x00043fbc) tabs_3_passive_pane_t1

0x7b18,	// (0x00042925) bg_active_tab_pane_cp3_ParamLimits

0x7b18,	// (0x00042925) bg_active_tab_pane_cp3

0xd4f1,	// (0x000482fe) tabs_4_active_pane_g1

0x91c5,	// (0x00043fd2) tabs_4_active_pane_t1

0x7b18,	// (0x00042925) bg_passive_tab_pane_cp3_ParamLimits

0x7b18,	// (0x00042925) bg_passive_tab_pane_cp3

0xd4f1,	// (0x000482fe) tabs_4_1_passive_pane_g1

0x91c5,	// (0x00043fd2) tabs_4_1_passive_pane_t1

0x94e7,	// (0x000442f4) list_highlight_pane_cp2

0xa6e2,	// (0x000454ef) list_set_pane_ParamLimits

0xa6e2,	// (0x000454ef) list_set_pane

0xa770,	// (0x0004557d) main_pane_set_t1_ParamLimits

0xa770,	// (0x0004557d) main_pane_set_t1

0xa790,	// (0x0004559d) main_pane_set_t2_ParamLimits

0xa790,	// (0x0004559d) main_pane_set_t2

0xa7a4,	// (0x000455b1) main_pane_set_t3_ParamLimits

0xa7a4,	// (0x000455b1) main_pane_set_t3

0xa7b6,	// (0x000455c3) main_pane_set_t4_ParamLimits

0xa7b6,	// (0x000455c3) main_pane_set_t4

0x0003,

0xf95a,	// (0x0004a767) main_pane_set_t_ParamLimits

0xf95a,	// (0x0004a767) main_pane_set_t

0xa7c8,	// (0x000455d5) setting_code_pane

0xa7d0,	// (0x000455dd) setting_slider_graphic_pane

0xa7d0,	// (0x000455dd) setting_slider_pane

0xa7d0,	// (0x000455dd) setting_text_pane

0xa7d0,	// (0x000455dd) setting_volume_pane

0x91db,	// (0x00043fe8) volume_set_pane

0x79dd,	// (0x000427ea) bg_set_opt_pane_cp

0x4529,	// (0x0003f336) setting_slider_pane_t1

0x91e3,	// (0x00043ff0) setting_slider_pane_t2

0x91fc,	// (0x00044009) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0004a346) setting_slider_pane_t

0x456f,	// (0x0003f37c) slider_set_pane

0x798f,	// (0x0004279c) bg_set_opt_pane_cp2

0x79f3,	// (0x00042800) setting_slider_graphic_pane_g1

0x9213,	// (0x00044020) setting_slider_graphic_pane_t1

0x9222,	// (0x0004402f) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0004a34d) setting_slider_graphic_pane_t

0x9231,	// (0x0004403e) slider_set_pane_cp

0x798f,	// (0x0004279c) input_focus_pane_cp1

0xd56b,	// (0x00048378) list_set_text_pane

0x790d,	// (0x0004271a) setting_text_pane_g1

0x798f,	// (0x0004279c) input_focus_pane_cp2

0x790d,	// (0x0004271a) setting_code_pane_g1

0x79fc,	// (0x00042809) setting_code_pane_t1

0x09cb,	// (0x0003b7d8) set_text_pane_t1_ParamLimits

0x09cb,	// (0x0003b7d8) set_text_pane_t1

0x80a4,	// (0x00042eb1) set_opt_bg_pane_g1

0x80ac,	// (0x00042eb9) set_opt_bg_pane_g2

0xa6ae,	// (0x000454bb) set_opt_bg_pane_g3

0x80bc,	// (0x00042ec9) set_opt_bg_pane_g4

0x80c4,	// (0x00042ed1) set_opt_bg_pane_g5

0x80cc,	// (0x00042ed9) set_opt_bg_pane_g6

0xa6b6,	// (0x000454c3) set_opt_bg_pane_g7

0xa6be,	// (0x000454cb) set_opt_bg_pane_g8

0xa6c6,	// (0x000454d3) set_opt_bg_pane_g9

0x0008,

0xf947,	// (0x0004a754) set_opt_bg_pane_g

0xd55e,	// (0x0004836b) slider_set_pane_g1

0x52a4,	// (0x000400b1) slider_set_pane_g2

0x0006,

0xf938,	// (0x0004a745) slider_set_pane_g

0xa648,	// (0x00045455) volume_set_pane_g1

0xa650,	// (0x0004545d) volume_set_pane_g2

0xa658,	// (0x00045465) volume_set_pane_g3

0xa660,	// (0x0004546d) volume_set_pane_g4

0xa668,	// (0x00045475) volume_set_pane_g5

0xa670,	// (0x0004547d) volume_set_pane_g6

0xa678,	// (0x00045485) volume_set_pane_g7

0xa680,	// (0x0004548d) volume_set_pane_g8

0xa688,	// (0x00045495) volume_set_pane_g9

0xa690,	// (0x0004549d) volume_set_pane_g10

0x0009,

0xf910,	// (0x0004a71d) volume_set_pane_g

0x9239,	// (0x00044046) indicator_pane_ParamLimits

0x9239,	// (0x00044046) indicator_pane

0x9261,	// (0x0004406e) main_idle_pane_g2_ParamLimits

0x9261,	// (0x0004406e) main_idle_pane_g2

0x9291,	// (0x0004409e) main_pane_idle_g1_ParamLimits

0x9291,	// (0x0004409e) main_pane_idle_g1

0x7a0a,	// (0x00042817) popup_clock_digital_analogue_window_ParamLimits

0x7a0a,	// (0x00042817) popup_clock_digital_analogue_window

0x92b6,	// (0x000440c3) soft_indicator_pane_ParamLimits

0x92b6,	// (0x000440c3) soft_indicator_pane

0x92d0,	// (0x000440dd) wallpaper_pane_ParamLimits

0x92d0,	// (0x000440dd) wallpaper_pane

0x790d,	// (0x0004271a) wallpaper_pane_g1

0x92e2,	// (0x000440ef) indicator_pane_g1_ParamLimits

0x92e2,	// (0x000440ef) indicator_pane_g1

0xd660,	// (0x0004846d) navi_navi_icon_text_pane_srt_g1

0x7a38,	// (0x00042845) soft_indicator_pane_t1

0x7a52,	// (0x0004285f) aid_ps_area_pane

0x92fb,	// (0x00044108) aid_ps_clock_pane

0x7a63,	// (0x00042870) aid_ps_indicator_pane

0x7a6f,	// (0x0004287c) indicator_ps_pane_ParamLimits

0x7a6f,	// (0x0004287c) indicator_ps_pane

0x7a7e,	// (0x0004288b) power_save_pane_g1_ParamLimits

0x7a7e,	// (0x0004288b) power_save_pane_g1

0x7a8a,	// (0x00042897) power_save_pane_g2_ParamLimits

0x7a8a,	// (0x00042897) power_save_pane_g2

0x4294,	// (0x0003f0a1) aid_navinavi_width_pane

0x7a52,	// (0x0004285f) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0004a352) power_save_pane_g_ParamLimits

0xf545,	// (0x0004a352) power_save_pane_g

0x7a98,	// (0x000428a5) power_save_pane_t1_ParamLimits

0x7a98,	// (0x000428a5) power_save_pane_t1

0x92fb,	// (0x00044108) aid_ps_clock_pane_ParamLimits

0x7a63,	// (0x00042870) aid_ps_indicator_pane_ParamLimits

0x7aaa,	// (0x000428b7) power_save_pane_t4_ParamLimits

0x7aaa,	// (0x000428b7) power_save_pane_t4

0x0001,

0xf54a,	// (0x0004a357) power_save_pane_t_ParamLimits

0xf54a,	// (0x0004a357) power_save_pane_t

0x7ad4,	// (0x000428e1) power_save_t3_ParamLimits

0x7ad4,	// (0x000428e1) power_save_t3

0x7abf,	// (0x000428cc) power_save_t2_ParamLimits

0x7abf,	// (0x000428cc) power_save_t2

0x7ae9,	// (0x000428f6) indicator_ps_pane_g1

0x9307,	// (0x00044114) ai_gene_pane_ParamLimits

0x9307,	// (0x00044114) ai_gene_pane

0x931e,	// (0x0004412b) ai_links_pane_ParamLimits

0x931e,	// (0x0004412b) ai_links_pane

0x9330,	// (0x0004413d) indicator_pane_cp1_ParamLimits

0x9330,	// (0x0004413d) indicator_pane_cp1

0x933f,	// (0x0004414c) main_pane_idle_g1_cp_ParamLimits

0x933f,	// (0x0004414c) main_pane_idle_g1_cp

0x7af2,	// (0x000428ff) popup_ai_links_title_window

0x9357,	// (0x00044164) soft_indicator_pane_cp1_ParamLimits

0x9357,	// (0x00044164) soft_indicator_pane_cp1

0xd282,	// (0x0004808f) ai_links_pane_g1

0xd28b,	// (0x00048098) grid_ai_links_pane

0xa601,	// (0x0004540e) ai_gene_pane_1

0xd270,	// (0x0004807d) ai_gene_pane_2

0xd279,	// (0x00048086) list_highlight_pane_cp4

0xa5e5,	// (0x000453f2) cell_ai_link_pane_ParamLimits

0xa5e5,	// (0x000453f2) cell_ai_link_pane

0xd268,	// (0x00048075) cell_ai_link_pane_g1

0x7ce0,	// (0x00042aed) cell_ai_link_pane_g2

0x0001,

0xf8eb,	// (0x0004a6f8) cell_ai_link_pane_g

0x798f,	// (0x0004279c) grid_highlight_cp2

0x798f,	// (0x0004279c) bg_popup_sub_pane_cp1

0x7b09,	// (0x00042916) popup_ai_links_title_window_t1

0xd1ba,	// (0x00047fc7) ai_gene_pane_1_g1_ParamLimits

0xd1ba,	// (0x00047fc7) ai_gene_pane_1_g1

0xd1c6,	// (0x00047fd3) ai_gene_pane_1_g2_ParamLimits

0xd1c6,	// (0x00047fd3) ai_gene_pane_1_g2

0x0001,

0xf8e1,	// (0x0004a6ee) ai_gene_pane_1_g_ParamLimits

0xf8e1,	// (0x0004a6ee) ai_gene_pane_1_g

0xd1d3,	// (0x00047fe0) ai_gene_pane_1_t1_ParamLimits

0xd1d3,	// (0x00047fe0) ai_gene_pane_1_t1

0xd207,	// (0x00048014) grid_ai_soft_ind_pane

0xd1a5,	// (0x00047fb2) ai_gene_pane_2_t1_ParamLimits

0xd1a5,	// (0x00047fb2) ai_gene_pane_2_t1

0x936b,	// (0x00044178) main_pane_empty_t1_ParamLimits

0x936b,	// (0x00044178) main_pane_empty_t1

0x9388,	// (0x00044195) main_pane_empty_t2_ParamLimits

0x9388,	// (0x00044195) main_pane_empty_t2

0x93a0,	// (0x000441ad) main_pane_empty_t3_ParamLimits

0x93a0,	// (0x000441ad) main_pane_empty_t3

0x93b3,	// (0x000441c0) main_pane_empty_t4_ParamLimits

0x93b3,	// (0x000441c0) main_pane_empty_t4

0x93c6,	// (0x000441d3) main_pane_empty_t5_ParamLimits

0x93c6,	// (0x000441d3) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0004a35c) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0004a35c) main_pane_empty_t

0x8156,	// (0x00042f63) bg_popup_window_pane_ParamLimits

0x8156,	// (0x00042f63) bg_popup_window_pane

0xcf63,	// (0x00047d70) find_popup_pane_cp2_ParamLimits

0xcf63,	// (0x00047d70) find_popup_pane_cp2

0xcf6f,	// (0x00047d7c) heading_pane_ParamLimits

0xcf6f,	// (0x00047d7c) heading_pane

0x798f,	// (0x0004279c) bg_popup_sub_pane

0xa528,	// (0x00045335) bg_popup_window_pane_g1_ParamLimits

0xa528,	// (0x00045335) bg_popup_window_pane_g1

0xa537,	// (0x00045344) bg_popup_window_pane_g2_ParamLimits

0xa537,	// (0x00045344) bg_popup_window_pane_g2

0xa543,	// (0x00045350) bg_popup_window_pane_g3_ParamLimits

0xa543,	// (0x00045350) bg_popup_window_pane_g3

0xa54f,	// (0x0004535c) bg_popup_window_pane_g4_ParamLimits

0xa54f,	// (0x0004535c) bg_popup_window_pane_g4

0xa55e,	// (0x0004536b) bg_popup_window_pane_g5_ParamLimits

0xa55e,	// (0x0004536b) bg_popup_window_pane_g5

0xa56e,	// (0x0004537b) bg_popup_window_pane_g6_ParamLimits

0xa56e,	// (0x0004537b) bg_popup_window_pane_g6

0xa57a,	// (0x00045387) bg_popup_window_pane_g7_ParamLimits

0xa57a,	// (0x00045387) bg_popup_window_pane_g7

0xa589,	// (0x00045396) bg_popup_window_pane_g8_ParamLimits

0xa589,	// (0x00045396) bg_popup_window_pane_g8

0xa598,	// (0x000453a5) bg_popup_window_pane_g9_ParamLimits

0xa598,	// (0x000453a5) bg_popup_window_pane_g9

0xcf48,	// (0x00047d55) bg_popup_window_pane_g10_ParamLimits

0xcf48,	// (0x00047d55) bg_popup_window_pane_g10

0x0009,

0xf8a9,	// (0x0004a6b6) bg_popup_window_pane_g_ParamLimits

0xf8a9,	// (0x0004a6b6) bg_popup_window_pane_g

0xceff,	// (0x00047d0c) bg_popup_heading_pane_ParamLimits

0xceff,	// (0x00047d0c) bg_popup_heading_pane

0x532c,	// (0x00040139) tabs_4_passive_pane_cp_srt_ParamLimits

0x532c,	// (0x00040139) tabs_4_passive_pane_cp_srt

0x533e,	// (0x0004014b) tabs_4_passive_pane_srt_ParamLimits

0xcf13,	// (0x00047d20) heading_pane_g2

0x533e,	// (0x0004014b) tabs_4_passive_pane_srt

0xc3c3,	// (0x000471d0) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc3c3,	// (0x000471d0) bg_passive_tab_pane_cp3_srt

0xcf1b,	// (0x00047d28) heading_pane_t1_ParamLimits

0xcf1b,	// (0x00047d28) heading_pane_t1

0xcf32,	// (0x00047d3f) heading_pane_t2_ParamLimits

0xcf32,	// (0x00047d3f) heading_pane_t2

0x0001,

0xf8a4,	// (0x0004a6b1) heading_pane_t_ParamLimits

0xf8a4,	// (0x0004a6b1) heading_pane_t

0xca82,	// (0x0004788f) bg_popup_heading_pane_g1

0xcb13,	// (0x00047920) bg_popup_heading_pane_g2

0xcb1b,	// (0x00047928) bg_popup_heading_pane_g3

0xcb23,	// (0x00047930) bg_popup_heading_pane_g4

0xcb2b,	// (0x00047938) bg_popup_heading_pane_g5

0xcb33,	// (0x00047940) bg_popup_heading_pane_g6

0xcb3b,	// (0x00047948) bg_popup_heading_pane_g7

0xcb43,	// (0x00047950) bg_popup_heading_pane_g8

0xcb4b,	// (0x00047958) bg_popup_heading_pane_g9

0x0008,

0xf860,	// (0x0004a66d) bg_popup_heading_pane_g

0xc34f,	// (0x0004715c) bg_popup_sub_pane_g1

0xc35f,	// (0x0004716c) bg_popup_sub_pane_g2

0xc357,	// (0x00047164) bg_popup_sub_pane_g3

0xc36f,	// (0x0004717c) bg_popup_sub_pane_g4

0xc367,	// (0x00047174) bg_popup_sub_pane_g5

0xc377,	// (0x00047184) bg_popup_sub_pane_g6

0xc37f,	// (0x0004718c) bg_popup_sub_pane_g7

0xc38f,	// (0x0004719c) bg_popup_sub_pane_g8

0xc387,	// (0x00047194) bg_popup_sub_pane_g9

0x0008,

0xf83a,	// (0x0004a647) bg_popup_sub_pane_g

0x7b18,	// (0x00042925) bg_popup_window_pane_cp5_ParamLimits

0x7b18,	// (0x00042925) bg_popup_window_pane_cp5

0x7b34,	// (0x00042941) popup_note_window_g1_ParamLimits

0x7b34,	// (0x00042941) popup_note_window_g1

0x7b40,	// (0x0004294d) popup_note_window_t1_ParamLimits

0x7b40,	// (0x0004294d) popup_note_window_t1

0x7b56,	// (0x00042963) popup_note_window_t2_ParamLimits

0x7b56,	// (0x00042963) popup_note_window_t2

0x7b6c,	// (0x00042979) popup_note_window_t3_ParamLimits

0x7b6c,	// (0x00042979) popup_note_window_t3

0x7b82,	// (0x0004298f) popup_note_window_t4_ParamLimits

0x7b82,	// (0x0004298f) popup_note_window_t4

0x7baa,	// (0x000429b7) popup_note_window_t5_ParamLimits

0x7baa,	// (0x000429b7) popup_note_window_t5

0x0004,

0xf55a,	// (0x0004a367) popup_note_window_t_ParamLimits

0xf55a,	// (0x0004a367) popup_note_window_t

0x7bf4,	// (0x00042a01) bg_popup_window_pane_cp6_ParamLimits

0x7bf4,	// (0x00042a01) bg_popup_window_pane_cp6

0xc9fe,	// (0x0004780b) popup_note_image_window_g1_ParamLimits

0xc9fe,	// (0x0004780b) popup_note_image_window_g1

0xca0a,	// (0x00047817) popup_note_image_window_g2_ParamLimits

0xca0a,	// (0x00047817) popup_note_image_window_g2

0x0001,

0xf82e,	// (0x0004a63b) popup_note_image_window_g_ParamLimits

0xf82e,	// (0x0004a63b) popup_note_image_window_g

0xca23,	// (0x00047830) popup_note_image_window_t1_ParamLimits

0xca23,	// (0x00047830) popup_note_image_window_t1

0xca3c,	// (0x00047849) popup_note_image_window_t2_ParamLimits

0xca3c,	// (0x00047849) popup_note_image_window_t2

0xca55,	// (0x00047862) popup_note_image_window_t3_ParamLimits

0xca55,	// (0x00047862) popup_note_image_window_t3

0x0002,

0xf833,	// (0x0004a640) popup_note_image_window_t_ParamLimits

0xf833,	// (0x0004a640) popup_note_image_window_t

0xc8e9,	// (0x000476f6) bg_popup_window_pane_cp7_ParamLimits

0xc8e9,	// (0x000476f6) bg_popup_window_pane_cp7

0xc919,	// (0x00047726) popup_note_wait_window_g1_ParamLimits

0xc919,	// (0x00047726) popup_note_wait_window_g1

0xc925,	// (0x00047732) popup_note_wait_window_g2_ParamLimits

0xc925,	// (0x00047732) popup_note_wait_window_g2

0x0002,

0xf81c,	// (0x0004a629) popup_note_wait_window_g_ParamLimits

0xf81c,	// (0x0004a629) popup_note_wait_window_g

0xc93d,	// (0x0004774a) popup_note_wait_window_t1_ParamLimits

0xc93d,	// (0x0004774a) popup_note_wait_window_t1

0xc964,	// (0x00047771) popup_note_wait_window_t2_ParamLimits

0xc964,	// (0x00047771) popup_note_wait_window_t2

0xc981,	// (0x0004778e) popup_note_wait_window_t3_ParamLimits

0xc981,	// (0x0004778e) popup_note_wait_window_t3

0xc994,	// (0x000477a1) popup_note_wait_window_t4_ParamLimits

0xc994,	// (0x000477a1) popup_note_wait_window_t4

0x0004,

0xf823,	// (0x0004a630) popup_note_wait_window_t_ParamLimits

0xf823,	// (0x0004a630) popup_note_wait_window_t

0xc9b9,	// (0x000477c6) wait_bar_pane_ParamLimits

0xc9b9,	// (0x000477c6) wait_bar_pane

0x798f,	// (0x0004279c) wait_anim_pane

0x798f,	// (0x0004279c) wait_border_pane

0x790d,	// (0x0004271a) wait_anim_pane_g1

0x790d,	// (0x0004271a) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x0004a4f0) wait_anim_pane_g

0xc899,	// (0x000476a6) wait_border_pane_g1

0xc8a2,	// (0x000476af) wait_border_pane_g2

0xc8ab,	// (0x000476b8) wait_border_pane_g3

0x0002,

0xf815,	// (0x0004a622) wait_border_pane_g

0xc709,	// (0x00047516) bg_popup_window_pane_cp16_ParamLimits

0xc709,	// (0x00047516) bg_popup_window_pane_cp16

0xc809,	// (0x00047616) indicator_popup_pane_cp4_ParamLimits

0xc809,	// (0x00047616) indicator_popup_pane_cp4

0xc81d,	// (0x0004762a) popup_query_data_window_t1_ParamLimits

0xc81d,	// (0x0004762a) popup_query_data_window_t1

0xc82f,	// (0x0004763c) popup_query_data_window_t2_ParamLimits

0xc82f,	// (0x0004763c) popup_query_data_window_t2

0xc848,	// (0x00047655) popup_query_data_window_t3_ParamLimits

0xc848,	// (0x00047655) popup_query_data_window_t3

0x0002,

0xf80e,	// (0x0004a61b) popup_query_data_window_t_ParamLimits

0xf80e,	// (0x0004a61b) popup_query_data_window_t

0xc862,	// (0x0004766f) query_popup_data_pane_ParamLimits

0xc862,	// (0x0004766f) query_popup_data_pane

0xc876,	// (0x00047683) query_popup_data_pane_cp1_ParamLimits

0xc876,	// (0x00047683) query_popup_data_pane_cp1

0xc709,	// (0x00047516) bg_popup_window_pane_cp10_ParamLimits

0xc709,	// (0x00047516) bg_popup_window_pane_cp10

0xc73b,	// (0x00047548) indicator_popup_pane_ParamLimits

0xc73b,	// (0x00047548) indicator_popup_pane

0xc75d,	// (0x0004756a) popup_query_code_window_t1_ParamLimits

0xc75d,	// (0x0004756a) popup_query_code_window_t1

0xc777,	// (0x00047584) popup_query_code_window_t2_ParamLimits

0xc777,	// (0x00047584) popup_query_code_window_t2

0xc7c0,	// (0x000475cd) popup_query_code_window_t3_ParamLimits

0xc7c0,	// (0x000475cd) popup_query_code_window_t3

0x0002,

0xf807,	// (0x0004a614) popup_query_code_window_t_ParamLimits

0xf807,	// (0x0004a614) popup_query_code_window_t

0xc7ef,	// (0x000475fc) query_popup_pane_ParamLimits

0xc7ef,	// (0x000475fc) query_popup_pane

0x7bf4,	// (0x00042a01) bg_popup_window_pane_cp15_ParamLimits

0x7bf4,	// (0x00042a01) bg_popup_window_pane_cp15

0x7c12,	// (0x00042a1f) indicator_popup_pane_cp1_ParamLimits

0x7c12,	// (0x00042a1f) indicator_popup_pane_cp1

0x7c25,	// (0x00042a32) indicator_popup_pane_cp2_ParamLimits

0x7c25,	// (0x00042a32) indicator_popup_pane_cp2

0x7c38,	// (0x00042a45) popup_query_data_code_window_g1_ParamLimits

0x7c38,	// (0x00042a45) popup_query_data_code_window_g1

0x7c4b,	// (0x00042a58) popup_query_data_code_window_t1_ParamLimits

0x7c4b,	// (0x00042a58) popup_query_data_code_window_t1

0x7c5d,	// (0x00042a6a) popup_query_data_code_window_t2_ParamLimits

0x7c5d,	// (0x00042a6a) popup_query_data_code_window_t2

0x7c6f,	// (0x00042a7c) popup_query_data_code_window_t3_ParamLimits

0x7c6f,	// (0x00042a7c) popup_query_data_code_window_t3

0x7c85,	// (0x00042a92) popup_query_data_code_window_t4_ParamLimits

0x7c85,	// (0x00042a92) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0004a372) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0004a372) popup_query_data_code_window_t

0x5005,	// (0x0003fe12) list_single_midp_graphic_pane_g3

0x7c9d,	// (0x00042aaa) query_popup_data_pane_cp2_ParamLimits

0x7cb0,	// (0x00042abd) query_popup_pane_cp2_ParamLimits

0x7cb0,	// (0x00042abd) query_popup_pane_cp2

0x798f,	// (0x0004279c) bg_popup_window_pane_cp11

0xc6ed,	// (0x000474fa) heading_pane_cp5

0xc6f5,	// (0x00047502) listscroll_popup_info_pane

0x798f,	// (0x0004279c) input_focus_pane_cp3

0x7cc3,	// (0x00042ad0) query_popup_pane_t1

0x7cd1,	// (0x00042ade) list_popup_info_pane_ParamLimits

0x7cd1,	// (0x00042ade) list_popup_info_pane

0x7ce0,	// (0x00042aed) listscroll_popup_info_pane_g1

0x7ce8,	// (0x00042af5) scroll_pane_cp7

0x7cf0,	// (0x00042afd) popup_info_list_pane_t1_ParamLimits

0x7cf0,	// (0x00042afd) popup_info_list_pane_t1

0x7d0a,	// (0x00042b17) popup_info_list_pane_t2_ParamLimits

0x7d0a,	// (0x00042b17) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0004a37b) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0004a37b) popup_info_list_pane_t

0x798f,	// (0x0004279c) bg_popup_window_pane_cp12

0xd67a,	// (0x00048487) find_popup_pane

0x79dd,	// (0x000427ea) bg_popup_window_pane_cp3

0x7d24,	// (0x00042b31) heading_pane_cp3

0x7d33,	// (0x00042b40) listscroll_popup_graphic_pane

0x798f,	// (0x0004279c) bg_popup_window_pane_cp4

0x9429,	// (0x00044236) heading_pane_cp4

0x7d42,	// (0x00042b4f) listscroll_popup_colour_pane

0x7d4a,	// (0x00042b57) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7d4a,	// (0x00042b57) cell_large_graphic_colour_none_popup_pane

0x9431,	// (0x0004423e) grid_large_graphic_colour_popup_pane_ParamLimits

0x9431,	// (0x0004423e) grid_large_graphic_colour_popup_pane

0x944d,	// (0x0004425a) listscroll_popup_colour_pane_g1_ParamLimits

0x944d,	// (0x0004425a) listscroll_popup_colour_pane_g1

0x9464,	// (0x00044271) listscroll_popup_colour_pane_g2_ParamLimits

0x9464,	// (0x00044271) listscroll_popup_colour_pane_g2

0x7d5a,	// (0x00042b67) listscroll_popup_colour_pane_g3_ParamLimits

0x7d5a,	// (0x00042b67) listscroll_popup_colour_pane_g3

0x9478,	// (0x00044285) listscroll_popup_colour_pane_g4_ParamLimits

0x9478,	// (0x00044285) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0004a380) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0004a380) listscroll_popup_colour_pane_g

0x7d6a,	// (0x00042b77) scroll_pane_cp6_ParamLimits

0x7d6a,	// (0x00042b77) scroll_pane_cp6

0x9487,	// (0x00044294) cell_large_graphic_colour_popup_pane_ParamLimits

0x9487,	// (0x00044294) cell_large_graphic_colour_popup_pane

0x7d7c,	// (0x00042b89) cell_large_graphic_colour_none_popup_pane_t1

0x798f,	// (0x0004279c) grid_highlight_pane_cp5

0x7d8b,	// (0x00042b98) cell_large_graphic_colour_popup_pane_g1

0x7d93,	// (0x00042ba0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0004a389) cell_large_graphic_colour_popup_pane_g

0x7d9b,	// (0x00042ba8) cell_large_graphic_colour_popup_pane_g2_copy1

0x7da4,	// (0x00042bb1) grid_highlight_pane_cp4

0x7dac,	// (0x00042bb9) bg_popup_window_pane_cp8_ParamLimits

0x7dac,	// (0x00042bb9) bg_popup_window_pane_cp8

0x7dc7,	// (0x00042bd4) popup_snote_single_text_window_g1_ParamLimits

0x7dc7,	// (0x00042bd4) popup_snote_single_text_window_g1

0x7dd9,	// (0x00042be6) popup_snote_single_text_window_t1_ParamLimits

0x7dd9,	// (0x00042be6) popup_snote_single_text_window_t1

0x7dec,	// (0x00042bf9) popup_snote_single_text_window_t2_ParamLimits

0x7dec,	// (0x00042bf9) popup_snote_single_text_window_t2

0x7dff,	// (0x00042c0c) popup_snote_single_text_window_t3_ParamLimits

0x7dff,	// (0x00042c0c) popup_snote_single_text_window_t3

0x7e38,	// (0x00042c45) popup_snote_single_text_window_t4_ParamLimits

0x7e38,	// (0x00042c45) popup_snote_single_text_window_t4

0x7e6c,	// (0x00042c79) popup_snote_single_text_window_t5_ParamLimits

0x7e6c,	// (0x00042c79) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0004a38e) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0004a38e) popup_snote_single_text_window_t

0x7e9b,	// (0x00042ca8) bg_popup_window_pane_cp9_ParamLimits

0x7e9b,	// (0x00042ca8) bg_popup_window_pane_cp9

0x7dc7,	// (0x00042bd4) popup_snote_single_graphic_window_g1_ParamLimits

0x7dc7,	// (0x00042bd4) popup_snote_single_graphic_window_g1

0x7ea9,	// (0x00042cb6) popup_snote_single_graphic_window_g2_ParamLimits

0x7ea9,	// (0x00042cb6) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0004a399) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0004a399) popup_snote_single_graphic_window_g

0x7eb5,	// (0x00042cc2) popup_snote_single_graphic_window_t1_ParamLimits

0x7eb5,	// (0x00042cc2) popup_snote_single_graphic_window_t1

0x7ec8,	// (0x00042cd5) popup_snote_single_graphic_window_t2_ParamLimits

0x7ec8,	// (0x00042cd5) popup_snote_single_graphic_window_t2

0x7dff,	// (0x00042c0c) popup_snote_single_graphic_window_t3_ParamLimits

0x7dff,	// (0x00042c0c) popup_snote_single_graphic_window_t3

0x7e38,	// (0x00042c45) popup_snote_single_graphic_window_t4_ParamLimits

0x7e38,	// (0x00042c45) popup_snote_single_graphic_window_t4

0x7e6c,	// (0x00042c79) popup_snote_single_graphic_window_t5_ParamLimits

0x7e6c,	// (0x00042c79) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0004a39e) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0004a39e) popup_snote_single_graphic_window_t

0xa8ad,	// (0x000456ba) grid_graphic_popup_pane_ParamLimits

0xa8ad,	// (0x000456ba) grid_graphic_popup_pane

0xa8d0,	// (0x000456dd) listscroll_popup_graphic_pane_g1_ParamLimits

0xa8d0,	// (0x000456dd) listscroll_popup_graphic_pane_g1

0xa8e4,	// (0x000456f1) listscroll_popup_graphic_pane_g2_ParamLimits

0xa8e4,	// (0x000456f1) listscroll_popup_graphic_pane_g2

0x0001,

0xf984,	// (0x0004a791) listscroll_popup_graphic_pane_g_ParamLimits

0xf984,	// (0x0004a791) listscroll_popup_graphic_pane_g

0xd513,	// (0x00048320) scroll_pane_cp5

0xa869,	// (0x00045676) cell_graphic_popup_pane_ParamLimits

0xa869,	// (0x00045676) cell_graphic_popup_pane

0xd623,	// (0x00048430) cell_graphic_popup_pane_g1

0xd62b,	// (0x00048438) cell_graphic_popup_pane_g2

0x7d9b,	// (0x00042ba8) cell_graphic_popup_pane_g3

0x0002,

0xf97d,	// (0x0004a78a) cell_graphic_popup_pane_g

0xd634,	// (0x00048441) cell_graphic_popup_pane_t2

0x7da4,	// (0x00042bb1) grid_highlight_pane_cp3

0x7eed,	// (0x00042cfa) list_gen_pane_ParamLimits

0x7eed,	// (0x00042cfa) list_gen_pane

0x7f16,	// (0x00042d23) scroll_pane

0xa83c,	// (0x00045649) bg_list_pane_g1_ParamLimits

0xa83c,	// (0x00045649) bg_list_pane_g1

0xd5da,	// (0x000483e7) bg_list_pane_g2_ParamLimits

0xd5da,	// (0x000483e7) bg_list_pane_g2

0xd5ed,	// (0x000483fa) bg_list_pane_g3_ParamLimits

0xd5ed,	// (0x000483fa) bg_list_pane_g3

0xd5ff,	// (0x0004840c) bg_list_pane_g4_ParamLimits

0xd5ff,	// (0x0004840c) bg_list_pane_g4

0xa857,	// (0x00045664) bg_list_pane_g5_ParamLimits

0xa857,	// (0x00045664) bg_list_pane_g5

0x0004,

0xf972,	// (0x0004a77f) bg_list_pane_g_ParamLimits

0xf972,	// (0x0004a77f) bg_list_pane_g

0x1c32,	// (0x0003ca3f) list_double2_graphic_large_graphic_pane_ParamLimits

0x1c32,	// (0x0003ca3f) list_double2_graphic_large_graphic_pane

0x1c32,	// (0x0003ca3f) list_double2_graphic_pane_ParamLimits

0x1c32,	// (0x0003ca3f) list_double2_graphic_pane

0x1c32,	// (0x0003ca3f) list_double2_large_graphic_pane_ParamLimits

0x1c32,	// (0x0003ca3f) list_double2_large_graphic_pane

0x1c32,	// (0x0003ca3f) list_double2_pane_ParamLimits

0x1c32,	// (0x0003ca3f) list_double2_pane

0x1c32,	// (0x0003ca3f) list_double_graphic_heading_pane_ParamLimits

0x1c32,	// (0x0003ca3f) list_double_graphic_heading_pane

0x1c32,	// (0x0003ca3f) list_double_graphic_pane_ParamLimits

0x1c32,	// (0x0003ca3f) list_double_graphic_pane

0x1c32,	// (0x0003ca3f) list_double_heading_pane_ParamLimits

0x1c32,	// (0x0003ca3f) list_double_heading_pane

0x1c32,	// (0x0003ca3f) list_double_large_graphic_pane_ParamLimits

0x1c32,	// (0x0003ca3f) list_double_large_graphic_pane

0x1c32,	// (0x0003ca3f) list_double_number_pane_ParamLimits

0x1c32,	// (0x0003ca3f) list_double_number_pane

0x1c32,	// (0x0003ca3f) list_double_pane_ParamLimits

0x1c32,	// (0x0003ca3f) list_double_pane

0x1c32,	// (0x0003ca3f) list_double_time_pane_ParamLimits

0x1c32,	// (0x0003ca3f) list_double_time_pane

0x1c32,	// (0x0003ca3f) list_setting_number_pane_ParamLimits

0x1c32,	// (0x0003ca3f) list_setting_number_pane

0x1c32,	// (0x0003ca3f) list_setting_pane_ParamLimits

0x1c32,	// (0x0003ca3f) list_setting_pane

0x0ff7,	// (0x0003be04) list_single_2graphic_pane_ParamLimits

0x0ff7,	// (0x0003be04) list_single_2graphic_pane

0x0ff7,	// (0x0003be04) list_single_graphic_heading_pane_ParamLimits

0x0ff7,	// (0x0003be04) list_single_graphic_heading_pane

0x0ff7,	// (0x0003be04) list_single_graphic_pane_ParamLimits

0x0ff7,	// (0x0003be04) list_single_graphic_pane

0x0ff7,	// (0x0003be04) list_single_heading_pane_ParamLimits

0x0ff7,	// (0x0003be04) list_single_heading_pane

0xa82a,	// (0x00045637) list_single_large_graphic_pane_ParamLimits

0xa82a,	// (0x00045637) list_single_large_graphic_pane

0x0ff7,	// (0x0003be04) list_single_number_heading_pane_ParamLimits

0x0ff7,	// (0x0003be04) list_single_number_heading_pane

0x0ff7,	// (0x0003be04) list_single_number_pane_ParamLimits

0x0ff7,	// (0x0003be04) list_single_number_pane

0x0ff7,	// (0x0003be04) list_single_pane_ParamLimits

0x0ff7,	// (0x0003be04) list_single_pane

0x798f,	// (0x0004279c) list_highlight_pane_cp1

0x7fd4,	// (0x00042de1) list_single_pane_g1_ParamLimits

0x7fd4,	// (0x00042de1) list_single_pane_g1

0x7fe0,	// (0x00042ded) list_single_pane_g2_ParamLimits

0x7fe0,	// (0x00042ded) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0004a3ba) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0004a3ba) list_single_pane_g

0x742f,	// (0x0004223c) list_single_pane_t1_ParamLimits

0x742f,	// (0x0004223c) list_single_pane_t1

0x7fd4,	// (0x00042de1) list_single_number_pane_g1_ParamLimits

0x7fd4,	// (0x00042de1) list_single_number_pane_g1

0x7fe0,	// (0x00042ded) list_single_number_pane_g2_ParamLimits

0x7fe0,	// (0x00042ded) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0004a3ba) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0004a3ba) list_single_number_pane_g

0x6cee,	// (0x00041afb) list_single_number_pane_t1_ParamLimits

0x6cee,	// (0x00041afb) list_single_number_pane_t1

0x0fbe,	// (0x0003bdcb) list_single_number_pane_t2_ParamLimits

0x0fbe,	// (0x0003bdcb) list_single_number_pane_t2

0x0001,

0xf933,	// (0x0004a740) list_single_number_pane_t_ParamLimits

0xf933,	// (0x0004a740) list_single_number_pane_t

0x6ce2,	// (0x00041aef) list_single_graphic_pane_g1_ParamLimits

0x6ce2,	// (0x00041aef) list_single_graphic_pane_g1

0x7fd4,	// (0x00042de1) list_single_graphic_pane_g2_ParamLimits

0x7fd4,	// (0x00042de1) list_single_graphic_pane_g2

0x7fe0,	// (0x00042ded) list_single_graphic_pane_g3_ParamLimits

0x7fe0,	// (0x00042ded) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0004a3a9) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0004a3a9) list_single_graphic_pane_g

0x6cee,	// (0x00041afb) list_single_graphic_pane_t1_ParamLimits

0x6cee,	// (0x00041afb) list_single_graphic_pane_t1

0x09e4,	// (0x0003b7f1) list_single_heading_pane_g1_ParamLimits

0x09e4,	// (0x0003b7f1) list_single_heading_pane_g1

0x7fe0,	// (0x00042ded) list_single_heading_pane_g2_ParamLimits

0x7fe0,	// (0x00042ded) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0004a3b0) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0004a3b0) list_single_heading_pane_g

0x09f7,	// (0x0003b804) list_single_heading_pane_t1_ParamLimits

0x09f7,	// (0x0003b804) list_single_heading_pane_t1

0x0a0d,	// (0x0003b81a) list_single_heading_pane_t2_ParamLimits

0x0a0d,	// (0x0003b81a) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0004a3b5) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0004a3b5) list_single_heading_pane_t

0x7fd4,	// (0x00042de1) list_single_number_heading_pane_g1_ParamLimits

0x7fd4,	// (0x00042de1) list_single_number_heading_pane_g1

0x7fe0,	// (0x00042ded) list_single_number_heading_pane_g2_ParamLimits

0x7fe0,	// (0x00042ded) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0004a3ba) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0004a3ba) list_single_number_heading_pane_g

0x6d9e,	// (0x00041bab) list_single_number_heading_pane_t1_ParamLimits

0x6d9e,	// (0x00041bab) list_single_number_heading_pane_t1

0x0a1f,	// (0x0003b82c) list_single_number_heading_pane_t2_ParamLimits

0x0a1f,	// (0x0003b82c) list_single_number_heading_pane_t2

0x740b,	// (0x00042218) list_single_number_heading_pane_t3_ParamLimits

0x740b,	// (0x00042218) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0004a3bf) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0004a3bf) list_single_number_heading_pane_t

0x0a31,	// (0x0003b83e) list_single_graphic_heading_pane_g1_ParamLimits

0x0a31,	// (0x0003b83e) list_single_graphic_heading_pane_g1

0x1308,	// (0x0003c115) list_single_graphic_heading_pane_g4_ParamLimits

0x1308,	// (0x0003c115) list_single_graphic_heading_pane_g4

0x7fe0,	// (0x00042ded) list_single_graphic_heading_pane_g5_ParamLimits

0x7fe0,	// (0x00042ded) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0004a3c6) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0004a3c6) list_single_graphic_heading_pane_g

0x6d9e,	// (0x00041bab) list_single_graphic_heading_pane_t1_ParamLimits

0x6d9e,	// (0x00041bab) list_single_graphic_heading_pane_t1

0x0a45,	// (0x0003b852) list_single_graphic_heading_pane_t2_ParamLimits

0x0a45,	// (0x0003b852) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0004a3cd) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0004a3cd) list_single_graphic_heading_pane_t

0x7f84,	// (0x00042d91) list_single_large_graphic_pane_g1_ParamLimits

0x7f84,	// (0x00042d91) list_single_large_graphic_pane_g1

0x7f90,	// (0x00042d9d) list_single_large_graphic_pane_g2_ParamLimits

0x7f90,	// (0x00042d9d) list_single_large_graphic_pane_g2

0x7f9c,	// (0x00042da9) list_single_large_graphic_pane_g3_ParamLimits

0x7f9c,	// (0x00042da9) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0004a3d2) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0004a3d2) list_single_large_graphic_pane_g

0xc8a2,	// (0x000476af) wait_border_pane_g2_copy1

0x7fa8,	// (0x00042db5) list_single_large_graphic_pane_g4_cp2

0x6bd8,	// (0x000419e5) list_single_large_graphic_pane_t1_ParamLimits

0x6bd8,	// (0x000419e5) list_single_large_graphic_pane_t1

0xbb51,	// (0x0004695e) list_double_pane_g1_ParamLimits

0xbb51,	// (0x0004695e) list_double_pane_g1

0x1319,	// (0x0003c126) list_double_pane_g2_ParamLimits

0x1319,	// (0x0003c126) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0004a3d9) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0004a3d9) list_double_pane_g

0x0a5d,	// (0x0003b86a) list_double_pane_t1_ParamLimits

0x0a5d,	// (0x0003b86a) list_double_pane_t1

0x0a73,	// (0x0003b880) list_double_pane_t2_ParamLimits

0x0a73,	// (0x0003b880) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0004a3de) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0004a3de) list_double_pane_t

0x0a85,	// (0x0003b892) list_double2_pane_g1_ParamLimits

0x0a85,	// (0x0003b892) list_double2_pane_g1

0x0a96,	// (0x0003b8a3) list_double2_pane_g2_ParamLimits

0x0a96,	// (0x0003b8a3) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0004a3e3) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0004a3e3) list_double2_pane_g

0x0aa2,	// (0x0003b8af) list_double2_pane_t1_ParamLimits

0x0aa2,	// (0x0003b8af) list_double2_pane_t1

0x0ab8,	// (0x0003b8c5) list_double2_pane_t2_ParamLimits

0x0ab8,	// (0x0003b8c5) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0004a3e8) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0004a3e8) list_double2_pane_t

0xbb51,	// (0x0004695e) list_double_number_pane_g1_ParamLimits

0xbb51,	// (0x0004695e) list_double_number_pane_g1

0x1319,	// (0x0003c126) list_double_number_pane_g2_ParamLimits

0x1319,	// (0x0003c126) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0004a3d9) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0004a3d9) list_double_number_pane_g

0x0aca,	// (0x0003b8d7) list_double_number_pane_t1_ParamLimits

0x0aca,	// (0x0003b8d7) list_double_number_pane_t1

0x0adc,	// (0x0003b8e9) list_double_number_pane_t2_ParamLimits

0x0adc,	// (0x0003b8e9) list_double_number_pane_t2

0x0af2,	// (0x0003b8ff) list_double_number_pane_t3_ParamLimits

0x0af2,	// (0x0003b8ff) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0004a3ed) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0004a3ed) list_double_number_pane_t

0x0b04,	// (0x0003b911) list_double_graphic_pane_g1_ParamLimits

0x0b04,	// (0x0003b911) list_double_graphic_pane_g1

0xbb5d,	// (0x0004696a) list_double_graphic_pane_g2_ParamLimits

0xbb5d,	// (0x0004696a) list_double_graphic_pane_g2

0x1325,	// (0x0003c132) list_double_graphic_pane_g3_ParamLimits

0x1325,	// (0x0003c132) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0004a3f4) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0004a3f4) list_double_graphic_pane_g

0x0b1c,	// (0x0003b929) list_double_graphic_pane_t1_ParamLimits

0x0b1c,	// (0x0003b929) list_double_graphic_pane_t1

0x0b32,	// (0x0003b93f) list_double_graphic_pane_t2_ParamLimits

0x0b32,	// (0x0003b93f) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0004a3fd) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0004a3fd) list_double_graphic_pane_t

0x6df7,	// (0x00041c04) list_double2_graphic_pane_g1_ParamLimits

0x6df7,	// (0x00041c04) list_double2_graphic_pane_g1

0x1331,	// (0x0003c13e) list_double2_graphic_pane_g2_ParamLimits

0x1331,	// (0x0003c13e) list_double2_graphic_pane_g2

0x133d,	// (0x0003c14a) list_double2_graphic_pane_g3_ParamLimits

0x133d,	// (0x0003c14a) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0004a402) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0004a402) list_double2_graphic_pane_g

0x0b44,	// (0x0003b951) list_double2_graphic_pane_t1_ParamLimits

0x0b44,	// (0x0003b951) list_double2_graphic_pane_t1

0x0b5a,	// (0x0003b967) list_double2_graphic_pane_t2_ParamLimits

0x0b5a,	// (0x0003b967) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0004a409) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0004a409) list_double2_graphic_pane_t

0x0b6c,	// (0x0003b979) list_double_large_graphic_pane_g1_ParamLimits

0x0b6c,	// (0x0003b979) list_double_large_graphic_pane_g1

0x0b90,	// (0x0003b99d) list_double_large_graphic_pane_g2_ParamLimits

0x0b90,	// (0x0003b99d) list_double_large_graphic_pane_g2

0x1319,	// (0x0003c126) list_double_large_graphic_pane_g3_ParamLimits

0x1319,	// (0x0003c126) list_double_large_graphic_pane_g3

0x0ba6,	// (0x0003b9b3) list_double_large_graphic_pane_g4_ParamLimits

0x0ba6,	// (0x0003b9b3) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0004a40e) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0004a40e) list_double_large_graphic_pane_g

0x0bb7,	// (0x0003b9c4) list_double_large_graphic_pane_t1_ParamLimits

0x0bb7,	// (0x0003b9c4) list_double_large_graphic_pane_t1

0x0bd0,	// (0x0003b9dd) list_double_large_graphic_pane_t2_ParamLimits

0x0bd0,	// (0x0003b9dd) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0004a419) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0004a419) list_double_large_graphic_pane_t

0x1349,	// (0x0003c156) list_double2_large_graphic_pane_g1_ParamLimits

0x1349,	// (0x0003c156) list_double2_large_graphic_pane_g1

0x1355,	// (0x0003c162) list_double2_large_graphic_pane_g2_ParamLimits

0x1355,	// (0x0003c162) list_double2_large_graphic_pane_g2

0x133d,	// (0x0003c14a) list_double2_large_graphic_pane_g3_ParamLimits

0x133d,	// (0x0003c14a) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x0004a41e) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x0004a41e) list_double2_large_graphic_pane_g

0x0be2,	// (0x0003b9ef) list_double2_large_graphic_pane_t1_ParamLimits

0x0be2,	// (0x0003b9ef) list_double2_large_graphic_pane_t1

0x0bf8,	// (0x0003ba05) list_double2_large_graphic_pane_t2_ParamLimits

0x0bf8,	// (0x0003ba05) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x0004a425) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x0004a425) list_double2_large_graphic_pane_t

0x0c0a,	// (0x0003ba17) list_double_heading_pane_g1_ParamLimits

0x0c0a,	// (0x0003ba17) list_double_heading_pane_g1

0x7f57,	// (0x00042d64) list_double_heading_pane_g2_ParamLimits

0x7f57,	// (0x00042d64) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0004a42a) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0004a42a) list_double_heading_pane_g

0x0c1b,	// (0x0003ba28) list_double_heading_pane_t1_ParamLimits

0x0c1b,	// (0x0003ba28) list_double_heading_pane_t1

0x0ab8,	// (0x0003b8c5) list_double_heading_pane_t2_ParamLimits

0x0ab8,	// (0x0003b8c5) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x0004a42f) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x0004a42f) list_double_heading_pane_t

0x6df7,	// (0x00041c04) list_double_graphic_heading_pane_g1_ParamLimits

0x6df7,	// (0x00041c04) list_double_graphic_heading_pane_g1

0x0c0a,	// (0x0003ba17) list_double_graphic_heading_pane_g2_ParamLimits

0x0c0a,	// (0x0003ba17) list_double_graphic_heading_pane_g2

0x7f57,	// (0x00042d64) list_double_graphic_heading_pane_g3_ParamLimits

0x7f57,	// (0x00042d64) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x0004a434) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x0004a434) list_double_graphic_heading_pane_g

0x0c31,	// (0x0003ba3e) list_double_graphic_heading_pane_t1_ParamLimits

0x0c31,	// (0x0003ba3e) list_double_graphic_heading_pane_t1

0x0b5a,	// (0x0003b967) list_double_graphic_heading_pane_t2_ParamLimits

0x0b5a,	// (0x0003b967) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0004a43b) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0004a43b) list_double_graphic_heading_pane_t

0x0c47,	// (0x0003ba54) list_double_time_pane_g1_ParamLimits

0x0c47,	// (0x0003ba54) list_double_time_pane_g1

0x0c58,	// (0x0003ba65) list_double_time_pane_g2_ParamLimits

0x0c58,	// (0x0003ba65) list_double_time_pane_g2

0x0001,

0xf633,	// (0x0004a440) list_double_time_pane_g_ParamLimits

0xf633,	// (0x0004a440) list_double_time_pane_g

0x0c64,	// (0x0003ba71) list_double_time_pane_t1_ParamLimits

0x0c64,	// (0x0003ba71) list_double_time_pane_t1

0x0c7a,	// (0x0003ba87) list_double_time_pane_t2_ParamLimits

0x0c7a,	// (0x0003ba87) list_double_time_pane_t2

0x0c8c,	// (0x0003ba99) list_double_time_pane_t3_ParamLimits

0x0c8c,	// (0x0003ba99) list_double_time_pane_t3

0x0c9e,	// (0x0003baab) list_double_time_pane_t4_ParamLimits

0x0c9e,	// (0x0003baab) list_double_time_pane_t4

0x0003,

0xf638,	// (0x0004a445) list_double_time_pane_t_ParamLimits

0xf638,	// (0x0004a445) list_double_time_pane_t

0x0cb0,	// (0x0003babd) list_setting_pane_g1_ParamLimits

0x0cb0,	// (0x0003babd) list_setting_pane_g1

0x6e28,	// (0x00041c35) list_setting_pane_g2_ParamLimits

0x6e28,	// (0x00041c35) list_setting_pane_g2

0x0001,

0xf641,	// (0x0004a44e) list_setting_pane_g_ParamLimits

0xf641,	// (0x0004a44e) list_setting_pane_g

0x0cbc,	// (0x0003bac9) list_setting_pane_t1_ParamLimits

0x0cbc,	// (0x0003bac9) list_setting_pane_t1

0x0cd6,	// (0x0003bae3) list_setting_pane_t2_ParamLimits

0x0cd6,	// (0x0003bae3) list_setting_pane_t2

0x0002,

0xf646,	// (0x0004a453) list_setting_pane_t_ParamLimits

0xf646,	// (0x0004a453) list_setting_pane_t

0x0d13,	// (0x0003bb20) set_value_pane_cp_ParamLimits

0x0d13,	// (0x0003bb20) set_value_pane_cp

0x0d1f,	// (0x0003bb2c) list_setting_number_pane_g1_ParamLimits

0x0d1f,	// (0x0003bb2c) list_setting_number_pane_g1

0x0d2b,	// (0x0003bb38) list_setting_number_pane_g2_ParamLimits

0x0d2b,	// (0x0003bb38) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0004a45a) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0004a45a) list_setting_number_pane_g

0x0d37,	// (0x0003bb44) list_setting_number_pane_t1_ParamLimits

0x0d37,	// (0x0003bb44) list_setting_number_pane_t1

0x0d50,	// (0x0003bb5d) list_setting_number_pane_t2_ParamLimits

0x0d50,	// (0x0003bb5d) list_setting_number_pane_t2

0x0d6a,	// (0x0003bb77) list_setting_number_pane_t3_ParamLimits

0x0d6a,	// (0x0003bb77) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x0004a45f) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x0004a45f) list_setting_number_pane_t

0x0d13,	// (0x0003bb20) set_value_pane_ParamLimits

0x0d13,	// (0x0003bb20) set_value_pane

0x800d,	// (0x00042e1a) bg_set_opt_pane_ParamLimits

0x800d,	// (0x00042e1a) bg_set_opt_pane

0x6f85,	// (0x00041d92) set_value_pane_t1

0x802e,	// (0x00042e3b) slider_set_pane_cp3

0x8037,	// (0x00042e44) volume_small_pane_cp

0x8040,	// (0x00042e4d) list_form_gen_pane

0x7f3a,	// (0x00042d47) scroll_pane_cp8

0x0dad,	// (0x0003bbba) form_field_data_pane_ParamLimits

0x0dad,	// (0x0003bbba) form_field_data_pane

0x0dc4,	// (0x0003bbd1) form_field_data_wide_pane_ParamLimits

0x0dc4,	// (0x0003bbd1) form_field_data_wide_pane

0x0de4,	// (0x0003bbf1) form_field_popup_pane_ParamLimits

0x0de4,	// (0x0003bbf1) form_field_popup_pane

0x0dfc,	// (0x0003bc09) form_field_popup_wide_pane_ParamLimits

0x0dfc,	// (0x0003bc09) form_field_popup_wide_pane

0x7011,	// (0x00041e1e) form_field_slider_pane_ParamLimits

0x7011,	// (0x00041e1e) form_field_slider_pane

0x7024,	// (0x00041e31) form_field_slider_wide_pane_ParamLimits

0x7024,	// (0x00041e31) form_field_slider_wide_pane

0x8049,	// (0x00042e56) data_form_pane

0x0e1d,	// (0x0003bc2a) form_field_data_pane_t1

0x8055,	// (0x00042e62) input_focus_pane

0x8063,	// (0x00042e70) data_form_wide_pane

0x7063,	// (0x00041e70) form_field_data_wide_pane_t1

0x7db9,	// (0x00042bc6) input_focus_pane_cp6

0x0e35,	// (0x0003bc42) form_field_popup_pane_t1

0x8055,	// (0x00042e62) input_focus_pane_cp7

0x8049,	// (0x00042e56) list_form_pane

0x70a5,	// (0x00041eb2) form_field_popup_wide_pane_t1

0x8055,	// (0x00042e62) input_focus_pane_cp8

0x8083,	// (0x00042e90) list_form_wide_pane

0x0e55,	// (0x0003bc62) form_field_slider_pane_t1_ParamLimits

0x0e55,	// (0x0003bc62) form_field_slider_pane_t1

0x0e6b,	// (0x0003bc78) form_field_slider_pane_t2_ParamLimits

0x0e6b,	// (0x0003bc78) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x0004a46f) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x0004a46f) form_field_slider_pane_t

0x7b18,	// (0x00042925) input_focus_pane_cp9_ParamLimits

0x7b18,	// (0x00042925) input_focus_pane_cp9

0x0e80,	// (0x0003bc8d) slider_cont_pane_ParamLimits

0x0e80,	// (0x0003bc8d) slider_cont_pane

0x8092,	// (0x00042e9f) form_field_slider_wide_pane_t1_ParamLimits

0x8092,	// (0x00042e9f) form_field_slider_wide_pane_t1

0x7101,	// (0x00041f0e) form_field_slider_wide_pane_t2_ParamLimits

0x7101,	// (0x00041f0e) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x0004a474) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x0004a474) form_field_slider_wide_pane_t

0x7b18,	// (0x00042925) input_focus_pane_cp10_ParamLimits

0x7b18,	// (0x00042925) input_focus_pane_cp10

0x0e94,	// (0x0003bca1) slider_cont_pane_cp1_ParamLimits

0x0e94,	// (0x0003bca1) slider_cont_pane_cp1

0x0eaa,	// (0x0003bcb7) slider_form_pane_cp

0x80a4,	// (0x00042eb1) input_focus_pane_g1

0x80ac,	// (0x00042eb9) input_focus_pane_g2

0x80b4,	// (0x00042ec1) input_focus_pane_g3

0x80bc,	// (0x00042ec9) input_focus_pane_g4

0x80c4,	// (0x00042ed1) input_focus_pane_g5

0x80cc,	// (0x00042ed9) input_focus_pane_g6

0x80d4,	// (0x00042ee1) input_focus_pane_g7

0x80dc,	// (0x00042ee9) input_focus_pane_g8

0x80e4,	// (0x00042ef1) input_focus_pane_g9

0x790d,	// (0x0004271a) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0004a479) input_focus_pane_g

0xc8ab,	// (0x000476b8) wait_border_pane_g3_copy1

0x0eb2,	// (0x0003bcbf) data_form_pane_t1

0x790d,	// (0x0004271a) wait_anim_pane_g1_copy1

0x0fd0,	// (0x0003bddd) data_form_wide_pane_t1

0x0eca,	// (0x0003bcd7) list_form_graphic_pane_cp_ParamLimits

0x0eca,	// (0x0003bcd7) list_form_graphic_pane_cp

0xd591,	// (0x0004839e) slider_form_pane_g1

0xd59a,	// (0x000483a7) slider_form_pane_g2

0x0006,

0xf963,	// (0x0004a770) slider_form_pane_g

0x714b,	// (0x00041f58) list_form_graphic_pane_ParamLimits

0x714b,	// (0x00041f58) list_form_graphic_pane

0x7175,	// (0x00041f82) list_form_graphic_pane_g1

0x717d,	// (0x00041f8a) list_form_graphic_pane_t1_ParamLimits

0x717d,	// (0x00041f8a) list_form_graphic_pane_t1

0x79dd,	// (0x000427ea) list_highlight_pane_cp5_ParamLimits

0x79dd,	// (0x000427ea) list_highlight_pane_cp5

0x0edd,	// (0x0003bcea) find_pane_g1

0x80ec,	// (0x00042ef9) input_find_pane

0x0ee8,	// (0x0003bcf5) input_find_pane_g1_ParamLimits

0x0ee8,	// (0x0003bcf5) input_find_pane_g1

0x0ef4,	// (0x0003bd01) input_find_pane_t1_ParamLimits

0x0ef4,	// (0x0003bd01) input_find_pane_t1

0x0f09,	// (0x0003bd16) input_find_pane_t2_ParamLimits

0x0f09,	// (0x0003bd16) input_find_pane_t2

0x0001,

0xf681,	// (0x0004a48e) input_find_pane_t_ParamLimits

0xf681,	// (0x0004a48e) input_find_pane_t

0x80f5,	// (0x00042f02) input_focus_pane_cp5_ParamLimits

0x80f5,	// (0x00042f02) input_focus_pane_cp5

0x7b18,	// (0x00042925) bg_popup_window_pane_cp2_ParamLimits

0x7b18,	// (0x00042925) bg_popup_window_pane_cp2

0x8114,	// (0x00042f21) listscroll_menu_pane_ParamLimits

0x8114,	// (0x00042f21) listscroll_menu_pane

0x8120,	// (0x00042f2d) popup_submenu_window_ParamLimits

0x8120,	// (0x00042f2d) popup_submenu_window

0x8144,	// (0x00042f51) find_popup_pane_g1

0x814c,	// (0x00042f59) input_popup_find_pane_cp

0x8156,	// (0x00042f63) input_focus_pane_cp4_ParamLimits

0x8156,	// (0x00042f63) input_focus_pane_cp4

0x8164,	// (0x00042f71) input_popup_find_pane_t1_ParamLimits

0x8164,	// (0x00042f71) input_popup_find_pane_t1

0x798f,	// (0x0004279c) bg_popup_sub_pane_cp

0x8192,	// (0x00042f9f) listscroll_popup_sub_pane

0x819a,	// (0x00042fa7) list_submenu_pane_ParamLimits

0x819a,	// (0x00042fa7) list_submenu_pane

0x81ab,	// (0x00042fb8) scroll_pane_cp4

0x81b3,	// (0x00042fc0) list_single_popup_submenu_pane_ParamLimits

0x81b3,	// (0x00042fc0) list_single_popup_submenu_pane

0x81c5,	// (0x00042fd2) list_single_popup_submenu_pane_g1

0x81cd,	// (0x00042fda) list_single_popup_submenu_pane_t1_ParamLimits

0x81cd,	// (0x00042fda) list_single_popup_submenu_pane_t1

0x7b18,	// (0x00042925) bg_active_tab_pane_cp1_ParamLimits

0x7b18,	// (0x00042925) bg_active_tab_pane_cp1

0xd4f9,	// (0x00048306) tabs_2_active_pane_g1

0x94ba,	// (0x000442c7) tabs_2_active_pane_t1

0x7b18,	// (0x00042925) bg_passive_tab_pane_cp1_ParamLimits

0x7b18,	// (0x00042925) bg_passive_tab_pane_cp1

0xd4f9,	// (0x00048306) tabs_2_passive_pane_g1

0x94ba,	// (0x000442c7) tabs_2_passive_pane_t1

0x79dd,	// (0x000427ea) bg_active_tab_pane_cp4

0x94d0,	// (0x000442dd) tabs_2_long_active_pane_t1

0x94e7,	// (0x000442f4) bg_passive_tab_pane_cp4

0x500d,	// (0x0003fe1a) list_single_midp_graphic_pane_g4_ParamLimits

0x79dd,	// (0x000427ea) bg_active_tab_pane_cp5

0x94f3,	// (0x00044300) tabs_3_long_active_pane_t1

0x94e7,	// (0x000442f4) bg_passive_tab_pane_cp5

0x500d,	// (0x0003fe1a) list_single_midp_graphic_pane_g4

0x79dd,	// (0x000427ea) bg_popup_window_pane_cp13_ParamLimits

0x79dd,	// (0x000427ea) bg_popup_window_pane_cp13

0x81eb,	// (0x00042ff8) listscroll_popup_fast_pane_ParamLimits

0x81eb,	// (0x00042ff8) listscroll_popup_fast_pane

0x81fa,	// (0x00043007) grid_popup_fast_pane_ParamLimits

0x81fa,	// (0x00043007) grid_popup_fast_pane

0x820c,	// (0x00043019) scroll_pane_cp9_ParamLimits

0x820c,	// (0x00043019) scroll_pane_cp9

0xe86b,	// (0x00049678) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe86b,	// (0x00049678) list_single_graphic_hl_pane_t1_cp2

0x8230,	// (0x0004303d) input_focus_pane_cp20_ParamLimits

0x8230,	// (0x0004303d) input_focus_pane_cp20

0x823e,	// (0x0004304b) query_popup_data_pane_t1_ParamLimits

0x823e,	// (0x0004304b) query_popup_data_pane_t1

0x8251,	// (0x0004305e) query_popup_data_pane_t2_ParamLimits

0x8251,	// (0x0004305e) query_popup_data_pane_t2

0x8297,	// (0x000430a4) query_popup_data_pane_t3_ParamLimits

0x8297,	// (0x000430a4) query_popup_data_pane_t3

0x82d8,	// (0x000430e5) query_popup_data_pane_t4_ParamLimits

0x82d8,	// (0x000430e5) query_popup_data_pane_t4

0x8314,	// (0x00043121) query_popup_data_pane_t5_ParamLimits

0x8314,	// (0x00043121) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x0004a493) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x0004a493) query_popup_data_pane_t

0x80a4,	// (0x00042eb1) bg_set_opt_pane_g1

0x80ac,	// (0x00042eb9) bg_set_opt_pane_g2

0x80b4,	// (0x00042ec1) bg_set_opt_pane_g3

0x80bc,	// (0x00042ec9) bg_set_opt_pane_g4

0x80c4,	// (0x00042ed1) bg_set_opt_pane_g5

0x80cc,	// (0x00042ed9) bg_set_opt_pane_g6

0x80d4,	// (0x00042ee1) bg_set_opt_pane_g7

0x80dc,	// (0x00042ee9) bg_set_opt_pane_g8

0x80e4,	// (0x00042ef1) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x0004a49e) bg_set_opt_pane_g

0x47df,	// (0x0003f5ec) control_top_pane_stacon_ParamLimits

0x47df,	// (0x0003f5ec) control_top_pane_stacon

0x4832,	// (0x0003f63f) signal_pane_stacon_ParamLimits

0x4832,	// (0x0003f63f) signal_pane_stacon

0xbce2,	// (0x00046aef) stacon_top_pane_g1_ParamLimits

0xbce2,	// (0x00046aef) stacon_top_pane_g1

0x4857,	// (0x0003f664) title_pane_stacon_ParamLimits

0x4857,	// (0x0003f664) title_pane_stacon

0x4879,	// (0x0003f686) uni_indicator_pane_stacon_ParamLimits

0x4879,	// (0x0003f686) uni_indicator_pane_stacon

0x488e,	// (0x0003f69b) battery_pane_stacon_ParamLimits

0x488e,	// (0x0003f69b) battery_pane_stacon

0x48ce,	// (0x0003f6db) control_bottom_pane_stacon_ParamLimits

0x48ce,	// (0x0003f6db) control_bottom_pane_stacon

0x48ed,	// (0x0003f6fa) navi_pane_stacon_ParamLimits

0x48ed,	// (0x0003f6fa) navi_pane_stacon

0xbd04,	// (0x00046b11) stacon_bottom_pane_g1_ParamLimits

0xbd04,	// (0x00046b11) stacon_bottom_pane_g1

0x834b,	// (0x00043158) aid_levels_signal_lsc_ParamLimits

0x834b,	// (0x00043158) aid_levels_signal_lsc

0x45ab,	// (0x0003f3b8) signal_pane_stacon_g1_ParamLimits

0x45ab,	// (0x0003f3b8) signal_pane_stacon_g1

0x45b7,	// (0x0003f3c4) signal_pane_stacon_g2_ParamLimits

0x45b7,	// (0x0003f3c4) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x0004a4b1) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0004a4b1) signal_pane_stacon_g

0x45eb,	// (0x0003f3f8) title_pane_stacon_t1_ParamLimits

0x45eb,	// (0x0003f3f8) title_pane_stacon_t1

0x8365,	// (0x00043172) uni_indicator_pane_stacon_g1

0x836f,	// (0x0004317c) uni_indicator_pane_stacon_g2

0x8379,	// (0x00043186) uni_indicator_pane_stacon_g3

0x8383,	// (0x00043190) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x0004a4bd) uni_indicator_pane_stacon_g

0x4610,	// (0x0003f41d) control_top_pane_stacon_g1

0x4618,	// (0x0003f425) control_top_pane_stacon_t1_ParamLimits

0x4618,	// (0x0003f425) control_top_pane_stacon_t1

0x838d,	// (0x0004319a) aid_levels_battery_lsc_ParamLimits

0x838d,	// (0x0004319a) aid_levels_battery_lsc

0x4649,	// (0x0003f456) battery_pane_stacon_g1_ParamLimits

0x4649,	// (0x0003f456) battery_pane_stacon_g1

0x4655,	// (0x0003f462) battery_pane_stacon_g2_ParamLimits

0x4655,	// (0x0003f462) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0004a4c6) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0004a4c6) battery_pane_stacon_g

0x4684,	// (0x0003f491) navi_icon_pane_stacon

0x4694,	// (0x0003f4a1) navi_navi_pane_stacon

0x4684,	// (0x0003f491) navi_text_pane_stacon

0x4610,	// (0x0003f41d) control_bottom_pane_stacon_g1

0x46a4,	// (0x0003f4b1) control_bottom_pane_stacon_t1_ParamLimits

0x46a4,	// (0x0003f4b1) control_bottom_pane_stacon_t1

0x9509,	// (0x00044316) grid_app_pane_ParamLimits

0x9509,	// (0x00044316) grid_app_pane

0x9537,	// (0x00044344) scroll_pane_cp15_ParamLimits

0x9537,	// (0x00044344) scroll_pane_cp15

0x954a,	// (0x00044357) cell_app_pane_ParamLimits

0x954a,	// (0x00044357) cell_app_pane

0x9587,	// (0x00044394) cell_app_pane_g1_ParamLimits

0x9587,	// (0x00044394) cell_app_pane_g1

0x83b5,	// (0x000431c2) cell_app_pane_g2_ParamLimits

0x83b5,	// (0x000431c2) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0004a4cb) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0004a4cb) cell_app_pane_g

0x95ab,	// (0x000443b8) cell_app_pane_t1_ParamLimits

0x95ab,	// (0x000443b8) cell_app_pane_t1

0x83c1,	// (0x000431ce) grid_highlight_pane_ParamLimits

0x83c1,	// (0x000431ce) grid_highlight_pane

0x80a4,	// (0x00042eb1) cell_highlight_pane_g1

0x80ac,	// (0x00042eb9) cell_highlight_pane_g2

0x80b4,	// (0x00042ec1) cell_highlight_pane_g3

0x80bc,	// (0x00042ec9) cell_highlight_pane_g4

0x80c4,	// (0x00042ed1) cell_highlight_pane_g5

0x80cc,	// (0x00042ed9) cell_highlight_pane_g6

0x80d4,	// (0x00042ee1) cell_highlight_pane_g7

0x80dc,	// (0x00042ee9) cell_highlight_pane_g8

0x80e4,	// (0x00042ef1) cell_highlight_pane_g9

0x790d,	// (0x0004271a) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0004a479) cell_highlight_pane_g

0x83d2,	// (0x000431df) bg_scroll_pane

0x46e8,	// (0x0003f4f5) scroll_handle_pane

0x8419,	// (0x00043226) scroll_bg_pane_g1

0x842e,	// (0x0004323b) scroll_bg_pane_g2

0x8446,	// (0x00043253) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x0004a4d0) scroll_bg_pane_g

0x845b,	// (0x00043268) scroll_handle_focus_pane_ParamLimits

0x845b,	// (0x00043268) scroll_handle_focus_pane

0x8419,	// (0x00043226) scroll_handle_pane_g1

0x8468,	// (0x00043275) scroll_handle_pane_g2

0x8446,	// (0x00043253) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0004a4d7) scroll_handle_pane_g

0x8156,	// (0x00042f63) bg_popup_sub_pane_cp21_ParamLimits

0x8156,	// (0x00042f63) bg_popup_sub_pane_cp21

0x847c,	// (0x00043289) popup_fep_japan_predictive_window_t1_ParamLimits

0x847c,	// (0x00043289) popup_fep_japan_predictive_window_t1

0x8493,	// (0x000432a0) popup_fep_japan_predictive_window_t2_ParamLimits

0x8493,	// (0x000432a0) popup_fep_japan_predictive_window_t2

0x84c6,	// (0x000432d3) popup_fep_japan_predictive_window_t3_ParamLimits

0x84c6,	// (0x000432d3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x0004a4de) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x0004a4de) popup_fep_japan_predictive_window_t

0x798f,	// (0x0004279c) bg_popup_sub_pane_cp23

0x84fd,	// (0x0004330a) listscroll_japin_cand_pane

0x8505,	// (0x00043312) popup_fep_japan_candidate_window_t1

0x8513,	// (0x00043320) candidate_pane_ParamLimits

0x8513,	// (0x00043320) candidate_pane

0x8526,	// (0x00043333) scroll_pane_cp30

0x852e,	// (0x0004333b) list_single_popup_jap_candidate_pane_ParamLimits

0x852e,	// (0x0004333b) list_single_popup_jap_candidate_pane

0x798f,	// (0x0004279c) list_highlight_pane_cp30

0x8543,	// (0x00043350) list_single_popup_jap_candidate_pane_t1

0x95cb,	// (0x000443d8) level_1_signal

0x95dd,	// (0x000443ea) level_2_signal

0x95f0,	// (0x000443fd) level_3_signal

0x9603,	// (0x00044410) level_4_signal

0x9616,	// (0x00044423) level_5_signal

0x9629,	// (0x00044436) level_6_signal

0x963c,	// (0x00044449) level_7_signal

0x95cb,	// (0x000443d8) level_1_battery

0x95dd,	// (0x000443ea) level_2_battery

0x95f0,	// (0x000443fd) level_3_battery

0x9603,	// (0x00044410) level_4_battery

0x9616,	// (0x00044423) level_5_battery

0x9629,	// (0x00044436) level_6_battery

0x963c,	// (0x00044449) level_7_battery

0x856a,	// (0x00043377) list_menu_pane_ParamLimits

0x856a,	// (0x00043377) list_menu_pane

0x8580,	// (0x0004338d) scroll_pane_cp25_ParamLimits

0x8580,	// (0x0004338d) scroll_pane_cp25

0x964f,	// (0x0004445c) list_double2_graphic_pane_cp2_ParamLimits

0x964f,	// (0x0004445c) list_double2_graphic_pane_cp2

0x964f,	// (0x0004445c) list_double2_large_graphic_pane_cp2_ParamLimits

0x964f,	// (0x0004445c) list_double2_large_graphic_pane_cp2

0x964f,	// (0x0004445c) list_double2_pane_cp2_ParamLimits

0x964f,	// (0x0004445c) list_double2_pane_cp2

0x964f,	// (0x0004445c) list_double_graphic_pane_cp2_ParamLimits

0x964f,	// (0x0004445c) list_double_graphic_pane_cp2

0x964f,	// (0x0004445c) list_double_large_graphic_pane_cp2_ParamLimits

0x964f,	// (0x0004445c) list_double_large_graphic_pane_cp2

0x964f,	// (0x0004445c) list_double_number_pane_cp2_ParamLimits

0x964f,	// (0x0004445c) list_double_number_pane_cp2

0x964f,	// (0x0004445c) list_double_pane_cp2_ParamLimits

0x964f,	// (0x0004445c) list_double_pane_cp2

0x966a,	// (0x00044477) list_single_2graphic_pane_cp2_ParamLimits

0x966a,	// (0x00044477) list_single_2graphic_pane_cp2

0x966a,	// (0x00044477) list_single_graphic_heading_pane_cp2_ParamLimits

0x966a,	// (0x00044477) list_single_graphic_heading_pane_cp2

0x966a,	// (0x00044477) list_single_graphic_pane_cp2_ParamLimits

0x966a,	// (0x00044477) list_single_graphic_pane_cp2

0x966a,	// (0x00044477) list_single_heading_pane_cp2_ParamLimits

0x966a,	// (0x00044477) list_single_heading_pane_cp2

0x967b,	// (0x00044488) list_single_large_graphic_pane_cp2_ParamLimits

0x967b,	// (0x00044488) list_single_large_graphic_pane_cp2

0x966a,	// (0x00044477) list_single_number_heading_pane_cp2_ParamLimits

0x966a,	// (0x00044477) list_single_number_heading_pane_cp2

0x966a,	// (0x00044477) list_single_number_pane_cp2_ParamLimits

0x966a,	// (0x00044477) list_single_number_pane_cp2

0x966a,	// (0x00044477) list_single_pane_cp2_ParamLimits

0x966a,	// (0x00044477) list_single_pane_cp2

0xbb7d,	// (0x0004698a) bg_popup_sub_pane_cp22

0x4797,	// (0x0003f5a4) popup_side_volume_key_window_g1

0x47bb,	// (0x0003f5c8) popup_side_volume_key_window_t1

0x47d7,	// (0x0003f5e4) volume_small_pane_cp1

0x7b18,	// (0x00042925) bg_popup_sub_pane_cp24_ParamLimits

0x7b18,	// (0x00042925) bg_popup_sub_pane_cp24

0xbb93,	// (0x000469a0) fep_china_uni_candidate_pane_ParamLimits

0xbb93,	// (0x000469a0) fep_china_uni_candidate_pane

0xbba7,	// (0x000469b4) fep_china_uni_entry_pane

0xbbb7,	// (0x000469c4) popup_fep_china_uni_window_g1

0xbbd3,	// (0x000469e0) fep_china_uni_entry_pane_g1

0xbbdb,	// (0x000469e8) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x0004a50f) fep_china_uni_entry_pane_g

0xbbe3,	// (0x000469f0) fep_entry_item_pane

0xbbed,	// (0x000469fa) fep_candidate_item_pane

0xbbf5,	// (0x00046a02) fep_china_uni_candidate_pane_g1

0xbbfd,	// (0x00046a0a) fep_china_uni_candidate_pane_g2

0xbc05,	// (0x00046a12) fep_china_uni_candidate_pane_g3

0xbc0d,	// (0x00046a1a) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x0004a514) fep_china_uni_candidate_pane_g

0x790d,	// (0x0004271a) fep_entry_item_pane_g1

0xbc15,	// (0x00046a22) fep_entry_item_pane_t1_ParamLimits

0xbc15,	// (0x00046a22) fep_entry_item_pane_t1

0xbc2b,	// (0x00046a38) fep_candidate_item_pane_t1_ParamLimits

0xbc2b,	// (0x00046a38) fep_candidate_item_pane_t1

0xbc40,	// (0x00046a4d) fep_candidate_item_pane_t2_ParamLimits

0xbc40,	// (0x00046a4d) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x0004a51d) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x0004a51d) fep_candidate_item_pane_t

0x79dd,	// (0x000427ea) list_highlight_pane_cp31_ParamLimits

0x79dd,	// (0x000427ea) list_highlight_pane_cp31

0xbc52,	// (0x00046a5f) level_1_signal_lsc

0xbc5b,	// (0x00046a68) level_2_signal_lsc

0xbc64,	// (0x00046a71) level_3_signal_lsc

0xbc6d,	// (0x00046a7a) level_4_signal_lsc

0xbc76,	// (0x00046a83) level_5_signal_lsc

0xbc7f,	// (0x00046a8c) level_6_signal_lsc

0xbc88,	// (0x00046a95) level_7_signal_lsc

0xbc88,	// (0x00046a95) level_1_battery_lsc

0xbc91,	// (0x00046a9e) level_2_battery_lsc

0xbc9a,	// (0x00046aa7) level_3_battery_lsc

0xbca3,	// (0x00046ab0) level_4_battery_lsc

0xbcac,	// (0x00046ab9) level_5_battery_lsc

0xbcb5,	// (0x00046ac2) level_6_battery_lsc

0xbc52,	// (0x00046a5f) level_7_battery_lsc

0xbcbe,	// (0x00046acb) scroll_handle_focus_pane_g1

0xbcc7,	// (0x00046ad4) scroll_handle_focus_pane_g2

0xbcd0,	// (0x00046add) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x0004a522) scroll_handle_focus_pane_g

0x0f1e,	// (0x0003bd2b) list_single_2graphic_pane_g1_ParamLimits

0x0f1e,	// (0x0003bd2b) list_single_2graphic_pane_g1

0x1308,	// (0x0003c115) list_single_2graphic_pane_g2_ParamLimits

0x1308,	// (0x0003c115) list_single_2graphic_pane_g2

0x7fe0,	// (0x00042ded) list_single_2graphic_pane_g3_ParamLimits

0x7fe0,	// (0x00042ded) list_single_2graphic_pane_g3

0x0f2a,	// (0x0003bd37) list_single_2graphic_pane_g4_ParamLimits

0x0f2a,	// (0x0003bd37) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0004a529) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0004a529) list_single_2graphic_pane_g

0x0f36,	// (0x0003bd43) list_single_2graphic_pane_t1_ParamLimits

0x0f36,	// (0x0003bd43) list_single_2graphic_pane_t1

0x136f,	// (0x0003c17c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x136f,	// (0x0003c17c) list_double2_graphic_large_graphic_pane_g1

0x1355,	// (0x0003c162) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x1355,	// (0x0003c162) list_double2_graphic_large_graphic_pane_g2

0x133d,	// (0x0003c14a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x133d,	// (0x0003c14a) list_double2_graphic_large_graphic_pane_g3

0x137f,	// (0x0003c18c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x137f,	// (0x0003c18c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x0004a532) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x0004a532) list_double2_graphic_large_graphic_pane_g

0x0f64,	// (0x0003bd71) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x0f64,	// (0x0003bd71) list_double2_graphic_large_graphic_pane_t1

0x0f7a,	// (0x0003bd87) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x0f7a,	// (0x0003bd87) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x0004a53b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x0004a53b) list_double2_graphic_large_graphic_pane_t

0xbdab,	// (0x00046bb8) popup_fast_swap_window_ParamLimits

0xbdab,	// (0x00046bb8) popup_fast_swap_window

0xbdc7,	// (0x00046bd4) popup_side_volume_key_window

0xbde1,	// (0x00046bee) stacon_top_pane

0xbdeb,	// (0x00046bf8) status_pane_ParamLimits

0xbdeb,	// (0x00046bf8) status_pane

0x9736,	// (0x00044543) status_small_pane

0x798f,	// (0x0004279c) control_pane

0x798f,	// (0x0004279c) stacon_bottom_pane

0x7f3a,	// (0x00042d47) scroll_pane_cp121

0x8040,	// (0x00042e4d) set_content_pane

0xd501,	// (0x0004830e) bg_active_tab_pane_g1_cp1

0xbcd9,	// (0x00046ae6) bg_active_tab_pane_g2_cp1

0xd50a,	// (0x00048317) bg_active_tab_pane_g3_cp1

0xd501,	// (0x0004830e) bg_passive_tab_pane_g1_cp1

0xbcd9,	// (0x00046ae6) bg_passive_tab_pane_g2_cp1

0xd50a,	// (0x00048317) bg_passive_tab_pane_g3_cp1

0x9700,	// (0x0004450d) bg_active_tab_pane_g1_cp2

0xbcd9,	// (0x00046ae6) bg_active_tab_pane_g2_cp2

0x9709,	// (0x00044516) bg_active_tab_pane_g3_cp2

0x9700,	// (0x0004450d) bg_passive_tab_pane_g1_cp2

0xbcd9,	// (0x00046ae6) bg_passive_tab_pane_g2_cp2

0x9709,	// (0x00044516) bg_passive_tab_pane_g3_cp2

0x9712,	// (0x0004451f) bg_active_tab_pane_g1_cp3

0xbcd9,	// (0x00046ae6) bg_active_tab_pane_g2_cp3

0x971b,	// (0x00044528) bg_active_tab_pane_g3_cp3

0x9712,	// (0x0004451f) bg_passive_tab_pane_g1_cp3

0xbcd9,	// (0x00046ae6) bg_passive_tab_pane_g2_cp3

0x971b,	// (0x00044528) bg_passive_tab_pane_g3_cp3

0x9724,	// (0x00044531) bg_active_tab_pane_g1_cp4

0xbcd9,	// (0x00046ae6) bg_active_tab_pane_g2_cp4

0x972d,	// (0x0004453a) bg_active_tab_pane_g3_cp4

0x9724,	// (0x00044531) bg_passive_tab_pane_g1_cp4

0xbcd9,	// (0x00046ae6) bg_passive_tab_pane_g2_cp4

0x972d,	// (0x0004453a) bg_passive_tab_pane_g3_cp4

0xbd20,	// (0x00046b2d) bg_active_tab_pane_g1_cp5

0xbcd9,	// (0x00046ae6) bg_active_tab_pane_g2_cp5

0xbd29,	// (0x00046b36) bg_active_tab_pane_g3_cp5

0xbd20,	// (0x00046b2d) bg_passive_tab_pane_g1_cp5

0xbcd9,	// (0x00046ae6) bg_passive_tab_pane_g2_cp5

0xbd29,	// (0x00046b36) bg_passive_tab_pane_g3_cp5

0x31ff,	// (0x0003e00c) list_set_graphic_pane_ParamLimits

0x31ff,	// (0x0003e00c) list_set_graphic_pane

0x798f,	// (0x0004279c) bg_set_opt_pane_cp4

0xbd32,	// (0x00046b3f) list_set_graphic_pane_g1_ParamLimits

0xbd32,	// (0x00046b3f) list_set_graphic_pane_g1

0xbd3e,	// (0x00046b4b) list_set_graphic_pane_g2_ParamLimits

0xbd3e,	// (0x00046b4b) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x0004a540) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x0004a540) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0004a8b7) volume_small_pane_cp_g

0xbd60,	// (0x00046b6d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xbd60,	// (0x00046b6d) list_double2_large_graphic_pane_g1_cp2

0xbd6c,	// (0x00046b79) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbd6c,	// (0x00046b79) list_double2_large_graphic_pane_g2_cp2

0xbd7b,	// (0x00046b88) list_double2_large_graphic_pane_g3_cp2

0xbd83,	// (0x00046b90) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbd83,	// (0x00046b90) list_double2_large_graphic_pane_t1_cp2

0xbd99,	// (0x00046ba6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbd99,	// (0x00046ba6) list_double2_large_graphic_pane_t2_cp2

0xd217,	// (0x00048024) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd217,	// (0x00048024) list_double_large_graphic_pane_g1_cp2

0xd228,	// (0x00048035) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd228,	// (0x00048035) list_double_large_graphic_pane_g2_cp2

0xbeba,	// (0x00046cc7) list_double_large_graphic_pane_g3_cp2

0xd237,	// (0x00048044) list_double_large_graphic_pane_g4_cp

0xd23f,	// (0x0004804c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd23f,	// (0x0004804c) list_double_large_graphic_pane_t1_cp2

0xd256,	// (0x00048063) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd256,	// (0x00048063) list_double_large_graphic_pane_t2_cp2

0xbdf9,	// (0x00046c06) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbdf9,	// (0x00046c06) list_double2_graphic_pane_g1_cp2

0xbe05,	// (0x00046c12) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbe05,	// (0x00046c12) list_double2_graphic_pane_g2_cp2

0xbe14,	// (0x00046c21) list_double2_graphic_pane_g3_cp2

0xbe1c,	// (0x00046c29) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbe1c,	// (0x00046c29) list_double2_graphic_pane_t1_cp2

0xbe32,	// (0x00046c3f) list_double2_graphic_pane_t2_cp2_ParamLimits

0xbe32,	// (0x00046c3f) list_double2_graphic_pane_t2_cp2

0xbe44,	// (0x00046c51) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbe44,	// (0x00046c51) list_single_number_heading_pane_g1_cp2

0xbe50,	// (0x00046c5d) list_single_number_heading_pane_g2_cp2

0xbe58,	// (0x00046c65) list_single_number_heading_pane_t1_cp2_ParamLimits

0xbe58,	// (0x00046c65) list_single_number_heading_pane_t1_cp2

0xbe6e,	// (0x00046c7b) list_single_number_heading_pane_t2_cp2_ParamLimits

0xbe6e,	// (0x00046c7b) list_single_number_heading_pane_t2_cp2

0xbe80,	// (0x00046c8d) list_single_number_heading_pane_t3_cp2_ParamLimits

0xbe80,	// (0x00046c8d) list_single_number_heading_pane_t3_cp2

0xbe44,	// (0x00046c51) list_single_heading_pane_g1_cp2_ParamLimits

0xbe44,	// (0x00046c51) list_single_heading_pane_g1_cp2

0xbe50,	// (0x00046c5d) list_single_heading_pane_g2_cp2

0xbe58,	// (0x00046c65) list_single_heading_pane_t1_cp2_ParamLimits

0xbe58,	// (0x00046c65) list_single_heading_pane_t1_cp2

0xd021,	// (0x00047e2e) list_single_heading_pane_t2_cp2_ParamLimits

0xd021,	// (0x00047e2e) list_single_heading_pane_t2_cp2

0xcfb5,	// (0x00047dc2) list_double_graphic_pane_g1_cp2_ParamLimits

0xcfb5,	// (0x00047dc2) list_double_graphic_pane_g1_cp2

0xbb5d,	// (0x0004696a) list_double_graphic_pane_g2_cp2_ParamLimits

0xbb5d,	// (0x0004696a) list_double_graphic_pane_g2_cp2

0xcfc1,	// (0x00047dce) list_double_graphic_pane_g3_cp2

0xcfc9,	// (0x00047dd6) list_double_graphic_pane_t1_cp2_ParamLimits

0xcfc9,	// (0x00047dd6) list_double_graphic_pane_t1_cp2

0xcfdf,	// (0x00047dec) list_double_graphic_pane_t2_cp2_ParamLimits

0xcfdf,	// (0x00047dec) list_double_graphic_pane_t2_cp2

0xbb51,	// (0x0004695e) list_double_number_pane_g1_cp2_ParamLimits

0xbb51,	// (0x0004695e) list_double_number_pane_g1_cp2

0xbeba,	// (0x00046cc7) list_double_number_pane_g2_cp2

0xcf7b,	// (0x00047d88) list_double_number_pane_t1_cp2_ParamLimits

0xcf7b,	// (0x00047d88) list_double_number_pane_t1_cp2

0xcf8d,	// (0x00047d9a) list_double_number_pane_t2_cp2_ParamLimits

0xcf8d,	// (0x00047d9a) list_double_number_pane_t2_cp2

0xcfa3,	// (0x00047db0) list_double_number_pane_t3_cp2_ParamLimits

0xcfa3,	// (0x00047db0) list_double_number_pane_t3_cp2

0xcef3,	// (0x00047d00) list_single_graphic_pane_g1_cp2_ParamLimits

0xcef3,	// (0x00047d00) list_single_graphic_pane_g1_cp2

0xbe44,	// (0x00046c51) list_single_graphic_pane_g2_cp2_ParamLimits

0xbe44,	// (0x00046c51) list_single_graphic_pane_g2_cp2

0xbe50,	// (0x00046c5d) list_single_graphic_pane_g3_cp2

0xcecb,	// (0x00047cd8) list_single_graphic_pane_t1_cp2_ParamLimits

0xcecb,	// (0x00047cd8) list_single_graphic_pane_t1_cp2

0xbe44,	// (0x00046c51) list_single_number_pane_g1_cp2_ParamLimits

0xbe44,	// (0x00046c51) list_single_number_pane_g1_cp2

0xbe50,	// (0x00046c5d) list_single_number_pane_g2_cp2

0xcecb,	// (0x00047cd8) list_single_number_pane_t1_cp2_ParamLimits

0xcecb,	// (0x00047cd8) list_single_number_pane_t1_cp2

0xcee1,	// (0x00047cee) list_single_number_pane_t2_cp2_ParamLimits

0xcee1,	// (0x00047cee) list_single_number_pane_t2_cp2

0xbd6c,	// (0x00046b79) list_double2_pane_g1_cp2_ParamLimits

0xbd6c,	// (0x00046b79) list_double2_pane_g1_cp2

0xbd7b,	// (0x00046b88) list_double2_pane_g2_cp2

0xbe92,	// (0x00046c9f) list_double2_pane_t1_cp2_ParamLimits

0xbe92,	// (0x00046c9f) list_double2_pane_t1_cp2

0xbea8,	// (0x00046cb5) list_double2_pane_t2_cp2_ParamLimits

0xbea8,	// (0x00046cb5) list_double2_pane_t2_cp2

0xbb51,	// (0x0004695e) list_double_pane_g1_cp2_ParamLimits

0xbb51,	// (0x0004695e) list_double_pane_g1_cp2

0xbeba,	// (0x00046cc7) list_double_pane_g2_cp2

0xbec2,	// (0x00046ccf) list_double_pane_t1_cp2_ParamLimits

0xbec2,	// (0x00046ccf) list_double_pane_t1_cp2

0xbed8,	// (0x00046ce5) list_double_pane_t2_cp2_ParamLimits

0xbed8,	// (0x00046ce5) list_double_pane_t2_cp2

0xbf00,	// (0x00046d0d) list_single_pane_cp2_g3

0xbe44,	// (0x00046c51) list_single_pane_g1_cp2_ParamLimits

0xbe44,	// (0x00046c51) list_single_pane_g1_cp2

0xbe50,	// (0x00046c5d) list_single_pane_g2_cp2

0xbf10,	// (0x00046d1d) list_single_pane_t1_cp2_ParamLimits

0xbf10,	// (0x00046d1d) list_single_pane_t1_cp2

0xbf28,	// (0x00046d35) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xbf28,	// (0x00046d35) list_single_large_graphic_pane_g1_cp2

0xbf34,	// (0x00046d41) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xbf34,	// (0x00046d41) list_single_large_graphic_pane_g2_cp2

0xbf40,	// (0x00046d4d) list_single_large_graphic_pane_g3_cp2

0xbf48,	// (0x00046d55) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xbf48,	// (0x00046d55) list_single_large_graphic_pane_g4_cp1

0xbf62,	// (0x00046d6f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xbf62,	// (0x00046d6f) list_single_large_graphic_pane_t1_cp2

0xcead,	// (0x00047cba) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xcead,	// (0x00047cba) list_single_graphic_heading_pane_g1_cp2

0xce7c,	// (0x00047c89) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xce7c,	// (0x00047c89) list_single_graphic_heading_pane_g4_cp2

0xbe50,	// (0x00046c5d) list_single_graphic_heading_pane_g5_cp2

0xbe58,	// (0x00046c65) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xbe58,	// (0x00046c65) list_single_graphic_heading_pane_t1_cp2

0xceb9,	// (0x00047cc6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xceb9,	// (0x00047cc6) list_single_graphic_heading_pane_t2_cp2

0xce70,	// (0x00047c7d) list_single_2graphic_pane_g1_cp2_ParamLimits

0xce70,	// (0x00047c7d) list_single_2graphic_pane_g1_cp2

0xce7c,	// (0x00047c89) list_single_2graphic_pane_g2_cp2_ParamLimits

0xce7c,	// (0x00047c89) list_single_2graphic_pane_g2_cp2

0xbe50,	// (0x00046c5d) list_single_2graphic_pane_g3_cp2

0xce8b,	// (0x00047c98) list_single_2graphic_pane_g4_cp2_ParamLimits

0xce8b,	// (0x00047c98) list_single_2graphic_pane_g4_cp2

0xce97,	// (0x00047ca4) list_single_2graphic_pane_t1_cp2_ParamLimits

0xce97,	// (0x00047ca4) list_single_2graphic_pane_t1_cp2

0x790d,	// (0x0004271a) list_highlight_pane_g10_cp1

0xca82,	// (0x0004788f) list_highlight_pane_g1_cp1

0xca8a,	// (0x00047897) list_highlight_pane_g2_cp1

0xca92,	// (0x0004789f) list_highlight_pane_g3_cp1

0xca9a,	// (0x000478a7) list_highlight_pane_g4_cp1

0xcaa2,	// (0x000478af) list_highlight_pane_g5_cp1

0xcaaa,	// (0x000478b7) list_highlight_pane_g6_cp1

0xcab2,	// (0x000478bf) list_highlight_pane_g7_cp1

0xcaba,	// (0x000478c7) list_highlight_pane_g8_cp1

0xcac2,	// (0x000478cf) list_highlight_pane_g9_cp1

0xa3dc,	// (0x000451e9) form_field_slider_pane_t3

0xa3ea,	// (0x000451f7) form_field_slider_pane_t4

0xc9cc,	// (0x000477d9) slider_form_pane_ParamLimits

0xc9cc,	// (0x000477d9) slider_form_pane

0x798f,	// (0x0004279c) control_abbreviations

0x798f,	// (0x0004279c) control_conventions

0x798f,	// (0x0004279c) control_definitions

0x798f,	// (0x0004279c) format_table_attribute

0xd06b,	// (0x00047e78) bg_popup_preview_window_pane_g9

0x798f,	// (0x0004279c) format_table_data2

0x798f,	// (0x0004279c) format_table_data3

0x798f,	// (0x0004279c) format_table_data_example

0x0008,

0x798f,	// (0x0004279c) intro_purpose

0xf8c3,	// (0x0004a6d0) bg_popup_preview_window_pane_g

0x798f,	// (0x0004279c) texts_category

0x798f,	// (0x0004279c) texts_graphics

0xbf78,	// (0x00046d85) text_digital

0xbf87,	// (0x00046d94) text_primary

0xbf96,	// (0x00046da3) text_primary_small

0xbfa5,	// (0x00046db2) text_secondary

0xbfb4,	// (0x00046dc1) text_title

0xd611,	// (0x0004841e) bg_passive_tab_pane_g1_cp3_srt

0xbcd9,	// (0x00046ae6) bg_passive_tab_pane_g2_cp3_srt

0xd61a,	// (0x00048427) bg_passive_tab_pane_g3_cp3_srt

0x7b18,	// (0x00042925) bg_active_tab_pane_cp3_srt_ParamLimits

0x7b18,	// (0x00042925) bg_active_tab_pane_cp3_srt

0xd4f1,	// (0x000482fe) tabs_4_active_pane_srt_g1

0x91c5,	// (0x00043fd2) tabs_4_active_pane_srt_t1_ParamLimits

0x91c5,	// (0x00043fd2) tabs_4_active_pane_srt_t1

0xd611,	// (0x0004841e) bg_active_tab_pane_g1_cp3_copy1

0xbcd9,	// (0x00046ae6) bg_active_tab_pane_g2_cp3_copy1

0xd61a,	// (0x00048427) bg_active_tab_pane_g3_cp3_copy1

0x79dd,	// (0x000427ea) tabs_2_long_active_pane_srt_ParamLimits

0x79dd,	// (0x000427ea) tabs_2_long_active_pane_srt

0x79dd,	// (0x000427ea) tabs_2_long_passive_pane_srt_ParamLimits

0x79dd,	// (0x000427ea) tabs_2_long_passive_pane_srt

0x94e7,	// (0x000442f4) bg_passive_tab_pane_cp4_srt_ParamLimits

0x94e7,	// (0x000442f4) bg_passive_tab_pane_cp4_srt

0xd54c,	// (0x00048359) bg_passive_tab_pane_g1_cp4_srt

0xbcd9,	// (0x00046ae6) bg_passive_tab_pane_g2_cp4_srt

0xd555,	// (0x00048362) bg_passive_tab_pane_g3_cp4_srt

0x79dd,	// (0x000427ea) bg_active_tab_pane_cp4_srt_ParamLimits

0x79dd,	// (0x000427ea) bg_active_tab_pane_cp4_srt

0x94d0,	// (0x000442dd) tabs_2_long_active_pane_srt_t1_ParamLimits

0x94d0,	// (0x000442dd) tabs_2_long_active_pane_srt_t1

0xd54c,	// (0x00048359) bg_active_tab_pane_g1_cp4_srt

0xbcd9,	// (0x00046ae6) bg_active_tab_pane_g2_cp4_srt

0xd555,	// (0x00048362) bg_active_tab_pane_g3_cp4_srt

0x7b18,	// (0x00042925) tabs_3_long_active_pane_srt_ParamLimits

0x7b18,	// (0x00042925) tabs_3_long_active_pane_srt

0x7b18,	// (0x00042925) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7b18,	// (0x00042925) tabs_3_long_passive_pane_cp_srt

0x7b18,	// (0x00042925) tabs_3_long_passive_pane_srt_ParamLimits

0x7b18,	// (0x00042925) tabs_3_long_passive_pane_srt

0x94e7,	// (0x000442f4) bg_passive_tab_pane_cp5_srt_ParamLimits

0x94e7,	// (0x000442f4) bg_passive_tab_pane_cp5_srt

0xbd20,	// (0x00046b2d) bg_passive_tab_pane_g1_cp5_srt

0xbcd9,	// (0x00046ae6) bg_passive_tab_pane_g2_cp5_srt

0xbd29,	// (0x00046b36) bg_passive_tab_pane_g3_cp5_srt

0x79dd,	// (0x000427ea) bg_active_tab_pane_cp5_srt_ParamLimits

0x79dd,	// (0x000427ea) bg_active_tab_pane_cp5_srt

0x94f3,	// (0x00044300) tabs_3_long_active_pane_srt_t1_ParamLimits

0x94f3,	// (0x00044300) tabs_3_long_active_pane_srt_t1

0xbd20,	// (0x00046b2d) bg_active_tab_pane_g1_cp5_srt

0xbcd9,	// (0x00046ae6) bg_active_tab_pane_g2_cp5_srt

0xbd29,	// (0x00046b36) bg_active_tab_pane_g3_cp5_srt

0xd53e,	// (0x0004834b) navi_text_pane_srt_t1

0xd536,	// (0x00048343) navi_icon_pane_srt_g1

0xc0cc,	// (0x00046ed9) midp_editing_number_pane_srt

0xbfc3,	// (0x00046dd0) midp_ticker_pane_srt

0xc0d4,	// (0x00046ee1) midp_ticker_pane_srt_g1

0xc0dc,	// (0x00046ee9) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x0004a55f) midp_ticker_pane_srt_g

0xc0e4,	// (0x00046ef1) midp_ticker_pane_srt_t1

0xd527,	// (0x00048334) midp_editing_number_pane_t1_copy1

0x973f,	// (0x0004454c) listscroll_midp_pane

0x973f,	// (0x0004454c) midp_form_pane

0xbfcb,	// (0x00046dd8) midp_info_popup_window_ParamLimits

0xbfcb,	// (0x00046dd8) midp_info_popup_window

0x8156,	// (0x00042f63) bg_popup_sub_pane_cp50_ParamLimits

0x8156,	// (0x00042f63) bg_popup_sub_pane_cp50

0xc6e1,	// (0x000474ee) listscroll_midp_info_pane_ParamLimits

0xc6e1,	// (0x000474ee) listscroll_midp_info_pane

0xc6c9,	// (0x000474d6) listscroll_form_midp_pane_ParamLimits

0xc6c9,	// (0x000474d6) listscroll_form_midp_pane

0xc6d5,	// (0x000474e2) scroll_bar_cp050

0xa3d0,	// (0x000451dd) list_midp_pane

0xde13,	// (0x00048c20) signal_pane_g2_cp

0xc5fb,	// (0x00047408) listscroll_midp_info_pane_t1_ParamLimits

0xc5fb,	// (0x00047408) listscroll_midp_info_pane_t1

0xc613,	// (0x00047420) listscroll_midp_info_pane_t2_ParamLimits

0xc613,	// (0x00047420) listscroll_midp_info_pane_t2

0xc651,	// (0x0004745e) listscroll_midp_info_pane_t3_ParamLimits

0xc651,	// (0x0004745e) listscroll_midp_info_pane_t3

0xc68b,	// (0x00047498) listscroll_midp_info_pane_t4_ParamLimits

0xc68b,	// (0x00047498) listscroll_midp_info_pane_t4

0x0003,

0xf7fe,	// (0x0004a60b) listscroll_midp_info_pane_t_ParamLimits

0xf7fe,	// (0x0004a60b) listscroll_midp_info_pane_t

0x81ab,	// (0x00042fb8) scroll_pane_cp21

0xc59f,	// (0x000473ac) form_midp_field_choice_group_pane

0xc5a8,	// (0x000473b5) form_midp_field_text_pane

0xc5e1,	// (0x000473ee) form_midp_field_time_pane

0xc5e9,	// (0x000473f6) form_midp_gauge_slider_pane

0xc5f2,	// (0x000473ff) form_midp_gauge_wait_pane

0x798f,	// (0x0004279c) form_midp_image_pane

0x0fa9,	// (0x0003bdb6) list_single_midp_pane_ParamLimits

0x0fa9,	// (0x0003bdb6) list_single_midp_pane

0xc56d,	// (0x0004737a) form_midp_field_text_pane_t1

0xc3c3,	// (0x000471d0) input_focus_pane_cp050

0xc58e,	// (0x0004739b) list_midp_form_text_pane

0xc53c,	// (0x00047349) form_midp_field_choice_group_pane_t1

0xc54a,	// (0x00047357) input_focus_pane_cp051

0xc55e,	// (0x0004736b) list_midp_choice_pane

0x798f,	// (0x0004279c) status_idle_pane

0xc520,	// (0x0004732d) form_midp_field_time_pane_t1

0x790d,	// (0x0004271a) wait_anim_pane_g2_copy1

0xc52e,	// (0x0004733b) form_midp_field_time_pane_t2

0x0001,

0xc036,	// (0x00046e43) aid_navinavi_width_2_pane

0xf7f9,	// (0x0004a606) form_midp_field_time_pane_t

0x798f,	// (0x0004279c) input_focus_pane_cp052

0x798f,	// (0x0004279c) bg_input_focus_pane_cp040

0xc4fc,	// (0x00047309) form_midp_gauge_slider_pane_t1

0xc50a,	// (0x00047317) form_midp_gauge_slider_pane_t2

0xa3b4,	// (0x000451c1) form_midp_gauge_slider_pane_t3

0xa3c2,	// (0x000451cf) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f0,	// (0x0004a5fd) form_midp_gauge_slider_pane_t

0xc518,	// (0x00047325) form_midp_slider_pane

0x79dd,	// (0x000427ea) bg_input_focus_pane_cp041_ParamLimits

0x79dd,	// (0x000427ea) bg_input_focus_pane_cp041

0xc4cc,	// (0x000472d9) form_midp_gauge_wait_pane_t1_ParamLimits

0xc4cc,	// (0x000472d9) form_midp_gauge_wait_pane_t1

0xc4de,	// (0x000472eb) form_midp_gauge_wait_pane_t2_ParamLimits

0xc4de,	// (0x000472eb) form_midp_gauge_wait_pane_t2

0x0001,

0xf7eb,	// (0x0004a5f8) form_midp_gauge_wait_pane_t_ParamLimits

0xf7eb,	// (0x0004a5f8) form_midp_gauge_wait_pane_t

0xc4f0,	// (0x000472fd) form_midp_wait_pane_ParamLimits

0xc4f0,	// (0x000472fd) form_midp_wait_pane

0xc496,	// (0x000472a3) form_midp_image_pane_g1

0xc49f,	// (0x000472ac) form_midp_image_pane_t1

0xc4ae,	// (0x000472bb) form_midp_image_pane_t2

0xc4bd,	// (0x000472ca) form_midp_image_pane_t3

0x0002,

0xf7e4,	// (0x0004a5f1) form_midp_image_pane_t

0xc48d,	// (0x0004729a) list_single_midp_pane_g1

0x72eb,	// (0x000420f8) list_single_midp_pane_t1

0xc479,	// (0x00047286) list_midp_form_item_pane_ParamLimits

0xc479,	// (0x00047286) list_midp_form_item_pane

0xbfde,	// (0x00046deb) list_midp_form_item_pane_t1

0xbfed,	// (0x00046dfa) midp_ticker_pane_g1

0xbff9,	// (0x00046e06) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x0004a545) midp_ticker_pane_g

0xc005,	// (0x00046e12) midp_ticker_pane_t1

0xd527,	// (0x00048334) midp_editing_number_pane_t1

0xd5bb,	// (0x000483c8) midp_editing_number_pane

0xd5c7,	// (0x000483d4) midp_ticker_pane

0xd3e5,	// (0x000481f2) ai_message_heading_pane

0x798f,	// (0x0004279c) bg_popup_window_pane_cp14

0xd51f,	// (0x0004832c) listscroll_ai_message_pane

0xd36f,	// (0x0004817c) ai_message_heading_pane_g1_ParamLimits

0xd36f,	// (0x0004817c) ai_message_heading_pane_g1

0xd37b,	// (0x00048188) ai_message_heading_pane_g2_ParamLimits

0xd37b,	// (0x00048188) ai_message_heading_pane_g2

0xd387,	// (0x00048194) ai_message_heading_pane_g3_ParamLimits

0xd387,	// (0x00048194) ai_message_heading_pane_g3

0xd393,	// (0x000481a0) ai_message_heading_pane_g4_ParamLimits

0xd393,	// (0x000481a0) ai_message_heading_pane_g4

0x0003,

0xf925,	// (0x0004a732) ai_message_heading_pane_g_ParamLimits

0xf925,	// (0x0004a732) ai_message_heading_pane_g

0xd39f,	// (0x000481ac) ai_message_heading_pane_t1_ParamLimits

0xd39f,	// (0x000481ac) ai_message_heading_pane_t1

0xd3b9,	// (0x000481c6) ai_message_heading_pane_t2_ParamLimits

0xd3b9,	// (0x000481c6) ai_message_heading_pane_t2

0x0001,

0xf92e,	// (0x0004a73b) ai_message_heading_pane_t_ParamLimits

0xf92e,	// (0x0004a73b) ai_message_heading_pane_t

0xd3cb,	// (0x000481d8) bg_popup_heading_pane_cp1_ParamLimits

0xd3cb,	// (0x000481d8) bg_popup_heading_pane_cp1

0xd35d,	// (0x0004816a) list_ai_message_pane_ParamLimits

0xd35d,	// (0x0004816a) list_ai_message_pane

0x81ab,	// (0x00042fb8) scroll_pane_cp10

0xd2f9,	// (0x00048106) list_ai_message_pane_g1

0xd301,	// (0x0004810e) list_ai_message_pane_g2

0x0001,

0xf902,	// (0x0004a70f) list_ai_message_pane_g

0xd309,	// (0x00048116) list_ai_message_pane_t1_ParamLimits

0xd309,	// (0x00048116) list_ai_message_pane_t1

0xd31e,	// (0x0004812b) list_ai_message_pane_t2_ParamLimits

0xd31e,	// (0x0004812b) list_ai_message_pane_t2

0xd333,	// (0x00048140) list_ai_message_pane_t3_ParamLimits

0xd333,	// (0x00048140) list_ai_message_pane_t3

0xd348,	// (0x00048155) list_ai_message_pane_t4_ParamLimits

0xd348,	// (0x00048155) list_ai_message_pane_t4

0x0003,

0xf907,	// (0x0004a714) list_ai_message_pane_t_ParamLimits

0xf907,	// (0x0004a714) list_ai_message_pane_t

0xd2e7,	// (0x000480f4) cell_ai_soft_ind_pane_ParamLimits

0xd2e7,	// (0x000480f4) cell_ai_soft_ind_pane

0xc017,	// (0x00046e24) cell_ai_soft_ind_pane_g1_ParamLimits

0xc017,	// (0x00046e24) cell_ai_soft_ind_pane_g1

0x798f,	// (0x0004279c) grid_highlight_cp1

0xc024,	// (0x00046e31) text_secondary_cp56_ParamLimits

0xc024,	// (0x00046e31) text_secondary_cp56

0xd2bc,	// (0x000480c9) example_general_pane_ParamLimits

0xd2bc,	// (0x000480c9) example_general_pane

0xd2c8,	// (0x000480d5) example_parent_pane_g1_ParamLimits

0xd2c8,	// (0x000480d5) example_parent_pane_g1

0xd2d4,	// (0x000480e1) example_parent_pane_t1_ParamLimits

0xd2d4,	// (0x000480e1) example_parent_pane_t1

0x9cda,	// (0x00044ae7) popup_preview_text_window_ParamLimits

0x9cda,	// (0x00044ae7) popup_preview_text_window

0xbf08,	// (0x00046d15) list_single_pane_cp2_g4

0x7bf4,	// (0x00042a01) bg_popup_preview_window_pane_ParamLimits

0x7bf4,	// (0x00042a01) bg_popup_preview_window_pane

0xd073,	// (0x00047e80) popup_preview_text_window_t1_ParamLimits

0xd073,	// (0x00047e80) popup_preview_text_window_t1

0xd091,	// (0x00047e9e) popup_preview_text_window_t2_ParamLimits

0xd091,	// (0x00047e9e) popup_preview_text_window_t2

0xd0da,	// (0x00047ee7) popup_preview_text_window_t3_ParamLimits

0xd0da,	// (0x00047ee7) popup_preview_text_window_t3

0xd11f,	// (0x00047f2c) popup_preview_text_window_t4_ParamLimits

0xd11f,	// (0x00047f2c) popup_preview_text_window_t4

0x0004,

0xf8d6,	// (0x0004a6e3) popup_preview_text_window_t_ParamLimits

0xf8d6,	// (0x0004a6e3) popup_preview_text_window_t

0xd19d,	// (0x00047faa) scroll_pane_cp11

0xc34f,	// (0x0004715c) bg_popup_preview_window_pane_g1

0xd033,	// (0x00047e40) bg_popup_preview_window_pane_g2

0xd03b,	// (0x00047e48) bg_popup_preview_window_pane_g3

0xd043,	// (0x00047e50) bg_popup_preview_window_pane_g4

0xd04b,	// (0x00047e58) bg_popup_preview_window_pane_g5

0xd053,	// (0x00047e60) bg_popup_preview_window_pane_g6

0xd05b,	// (0x00047e68) bg_popup_preview_window_pane_g7

0xd063,	// (0x00047e70) bg_popup_preview_window_pane_g8

0x429c,	// (0x0003f0a9) aid_popup_width_pane

0x9c5c,	// (0x00044a69) popup_midp_note_alarm_window_ParamLimits

0x9c5c,	// (0x00044a69) popup_midp_note_alarm_window

0x8049,	// (0x00042e56) data_form_pane_ParamLimits

0x0e13,	// (0x0003bc20) form_field_data_pane_g1

0x0e1d,	// (0x0003bc2a) form_field_data_pane_t1_ParamLimits

0x8055,	// (0x00042e62) input_focus_pane_ParamLimits

0x8063,	// (0x00042e70) data_form_wide_pane_ParamLimits

0x7057,	// (0x00041e64) form_field_data_wide_pane_g1

0x7063,	// (0x00041e70) form_field_data_wide_pane_t1_ParamLimits

0x7db9,	// (0x00042bc6) input_focus_pane_cp6_ParamLimits

0x94ae,	// (0x000442bb) input_popup_find_pane_g1_ParamLimits

0x94ae,	// (0x000442bb) input_popup_find_pane_g1

0x4665,	// (0x0003f472) aid_navi_side_left_pane

0x4675,	// (0x0003f482) aid_navi_side_right_pane

0xcb53,	// (0x00047960) bg_popup_window_pane_cp30_ParamLimits

0xcb53,	// (0x00047960) bg_popup_window_pane_cp30

0xcbcd,	// (0x000479da) popup_midp_note_alarm_window_g1_ParamLimits

0xcbcd,	// (0x000479da) popup_midp_note_alarm_window_g1

0xcbfd,	// (0x00047a0a) popup_midp_note_alarm_window_t1_ParamLimits

0xcbfd,	// (0x00047a0a) popup_midp_note_alarm_window_t1

0xcc9e,	// (0x00047aab) popup_midp_note_alarm_window_t2_ParamLimits

0xcc9e,	// (0x00047aab) popup_midp_note_alarm_window_t2

0xcd4c,	// (0x00047b59) popup_midp_note_alarm_window_t3_ParamLimits

0xcd4c,	// (0x00047b59) popup_midp_note_alarm_window_t3

0xcd74,	// (0x00047b81) popup_midp_note_alarm_window_t4_ParamLimits

0xcd74,	// (0x00047b81) popup_midp_note_alarm_window_t4

0xcd94,	// (0x00047ba1) popup_midp_note_alarm_window_t5_ParamLimits

0xcd94,	// (0x00047ba1) popup_midp_note_alarm_window_t5

0x000a,

0xf873,	// (0x0004a680) popup_midp_note_alarm_window_t_ParamLimits

0xf873,	// (0x0004a680) popup_midp_note_alarm_window_t

0xce40,	// (0x00047c4d) wait_bar_pane_cp1_ParamLimits

0xce40,	// (0x00047c4d) wait_bar_pane_cp1

0x798f,	// (0x0004279c) wait_anim_pane_copy1

0x798f,	// (0x0004279c) wait_border_pane_copy1

0xc899,	// (0x000476a6) wait_border_pane_g1_copy1

0x707d,	// (0x00041e8a) form_field_popup_pane_g1

0x0e35,	// (0x0003bc42) form_field_popup_pane_t1_ParamLimits

0x8055,	// (0x00042e62) input_focus_pane_cp7_ParamLimits

0x8049,	// (0x00042e56) list_form_pane_ParamLimits

0x709d,	// (0x00041eaa) form_field_popup_wide_pane_g1

0x70a5,	// (0x00041eb2) form_field_popup_wide_pane_t1_ParamLimits

0x8055,	// (0x00042e62) input_focus_pane_cp8_ParamLimits

0x8083,	// (0x00042e90) list_form_wide_pane_ParamLimits

0xd642,	// (0x0004844f) aid_size_cell_graphic_pane

0x0eb2,	// (0x0003bcbf) data_form_pane_t1_ParamLimits

0x0fd0,	// (0x0003bddd) data_form_wide_pane_t1_ParamLimits

0xa038,	// (0x00044e45) bg_status_flat_pane

0x9122,	// (0x00043f2f) title_pane_t1_ParamLimits

0x79a5,	// (0x000427b2) title_pane_t2_ParamLimits

0x79cb,	// (0x000427d8) title_pane_t3_ParamLimits

0xf532,	// (0x0004a33f) title_pane_t_ParamLimits

0x95cb,	// (0x000443d8) level_1_signal_ParamLimits

0x95dd,	// (0x000443ea) level_2_signal_ParamLimits

0x95f0,	// (0x000443fd) level_3_signal_ParamLimits

0x9603,	// (0x00044410) level_4_signal_ParamLimits

0x9616,	// (0x00044423) level_5_signal_ParamLimits

0x9629,	// (0x00044436) level_6_signal_ParamLimits

0x963c,	// (0x00044449) level_7_signal_ParamLimits

0x95cb,	// (0x000443d8) level_1_battery_ParamLimits

0x95dd,	// (0x000443ea) level_2_battery_ParamLimits

0x95f0,	// (0x000443fd) level_3_battery_ParamLimits

0x9603,	// (0x00044410) level_4_battery_ParamLimits

0x9616,	// (0x00044423) level_5_battery_ParamLimits

0x9629,	// (0x00044436) level_6_battery_ParamLimits

0x963c,	// (0x00044449) level_7_battery_ParamLimits

0xca82,	// (0x0004788f) bg_status_flat_pane_g1

0xca8a,	// (0x00047897) bg_status_flat_pane_g2

0xca92,	// (0x0004789f) bg_status_flat_pane_g3

0xca9a,	// (0x000478a7) bg_status_flat_pane_g4

0xcaa2,	// (0x000478af) bg_status_flat_pane_g5

0xcaaa,	// (0x000478b7) bg_status_flat_pane_g6

0xcab2,	// (0x000478bf) bg_status_flat_pane_g7

0x91af,	// (0x00043fbc) tabs_3_active_pane_t1_ParamLimits

0x91af,	// (0x00043fbc) tabs_3_passive_pane_t1_ParamLimits

0x91c5,	// (0x00043fd2) tabs_4_active_pane_t1_ParamLimits

0x91c5,	// (0x00043fd2) tabs_4_1_passive_pane_t1_ParamLimits

0x94ba,	// (0x000442c7) tabs_2_active_pane_t1_ParamLimits

0x94ba,	// (0x000442c7) tabs_2_passive_pane_t1_ParamLimits

0x79dd,	// (0x000427ea) bg_active_tab_pane_cp4_ParamLimits

0x94d0,	// (0x000442dd) tabs_2_long_active_pane_t1_ParamLimits

0x94e7,	// (0x000442f4) bg_passive_tab_pane_cp4_ParamLimits

0x503f,	// (0x0003fe4c) list_single_midp_graphic_pane_t1_ParamLimits

0x79dd,	// (0x000427ea) bg_active_tab_pane_cp5_ParamLimits

0x94f3,	// (0x00044300) tabs_3_long_active_pane_t1_ParamLimits

0x94e7,	// (0x000442f4) bg_passive_tab_pane_cp5_ParamLimits

0x503f,	// (0x0003fe4c) list_single_midp_graphic_pane_t1

0xa038,	// (0x00044e45) bg_status_flat_pane_ParamLimits

0xc22e,	// (0x0004703b) indicator_pane_cp2_ParamLimits

0xc22e,	// (0x0004703b) indicator_pane_cp2

0xa19e,	// (0x00044fab) navi_pane_srt_ParamLimits

0xa19e,	// (0x00044fab) navi_pane_srt

0xc256,	// (0x00047063) popup_clock_digital_analogue_window_cp1

0x7a29,	// (0x00042836) indicator_pane_t1

0xbfc3,	// (0x00046dd0) copy_highlight_pane

0xbfc3,	// (0x00046dd0) cursor_graphics_pane

0xbfc3,	// (0x00046dd0) graphic_within_text_pane

0xbfc3,	// (0x00046dd0) link_highlight_pane

0xd160,	// (0x00047f6d) popup_preview_text_window_t5_ParamLimits

0xd160,	// (0x00047f6d) popup_preview_text_window_t5

0xc03e,	// (0x00046e4b) cursor_digital_pane

0xc03e,	// (0x00046e4b) cursor_primary_pane

0xc04f,	// (0x00046e5c) cursor_primary_small_pane

0xc057,	// (0x00046e64) cursor_secondary_pane

0xc05f,	// (0x00046e6c) cursor_title_pane

0xc03e,	// (0x00046e4b) link_highlight_digital_pane

0xc046,	// (0x00046e53) link_highlight_primary_pane

0xc04f,	// (0x00046e5c) link_highlight_primary_small_pane

0xc057,	// (0x00046e64) link_highlight_secondary_pane

0xc05f,	// (0x00046e6c) link_highlight_title_pane

0xc03e,	// (0x00046e4b) copy_highlight_digital_pane

0xc03e,	// (0x00046e4b) copy_highlight_primary_pane

0xc04f,	// (0x00046e5c) copy_highlight_primary_small_pane

0xc057,	// (0x00046e64) copy_highlight_secondary_pane

0xc05f,	// (0x00046e6c) copy_highlight_title_pane

0xc057,	// (0x00046e64) graphic_text_digital_pane

0xcb02,	// (0x0004790f) graphic_text_primary_pane

0xcb0b,	// (0x00047918) graphic_text_primary_small_pane

0xc04f,	// (0x00046e5c) graphic_text_secondary_pane

0xc03e,	// (0x00046e4b) graphic_text_title_pane

0x97db,	// (0x000445e8) cursor_primary_pane_g1

0xcaf4,	// (0x00047901) cursor_text_primary_t1

0xa40c,	// (0x00045219) cursor_primary_small_pane_g1

0xcae6,	// (0x000478f3) cursor_text_primary_small_t1

0xa402,	// (0x0004520f) cursor_primary_small_pane_g1_copy1

0xcad8,	// (0x000478e5) cursor_text_primary_small_t1_copy1

0xcaca,	// (0x000478d7) cursor_text_title_t1

0xa3f8,	// (0x00045205) cursor_title_pane_g1

0x97db,	// (0x000445e8) cursor_digital_pane_g1

0xc067,	// (0x00046e74) cursor_text_digital_t1

0xc075,	// (0x00046e82) link_highlight_primary_pane_g1

0xca73,	// (0x00047880) link_highlight_primary_pane_t1

0xc075,	// (0x00046e82) link_highlight_primary_small_pane_g1

0xc07d,	// (0x00046e8a) link_highlight_primary_small_pane_t1

0xc08c,	// (0x00046e99) link_highlight_secondary_pane_g1

0xc094,	// (0x00046ea1) link_highlight_secondary_pane_t1

0xc9d8,	// (0x000477e5) link_highlight_title_pane_g1

0xc9ef,	// (0x000477fc) link_highlight_title_pane_t1

0xc9d8,	// (0x000477e5) link_highlight_digital_pane_g1

0xc9e0,	// (0x000477ed) link_highlight_digital_pane_t1

0xc8b4,	// (0x000476c1) copy_highlight_primary_pane_g1

0xc8da,	// (0x000476e7) copy_highlight_primary_pane_t1

0xc8b4,	// (0x000476c1) copy_highlight_primary_small_pane_g1

0xc8cb,	// (0x000476d8) copy_highlight_primary_small_pane_t1

0xc0a3,	// (0x00046eb0) copy_highlight_secondary_pane_g1

0xc0ab,	// (0x00046eb8) copy_highlight_secondary_pane_t1

0xc8b4,	// (0x000476c1) copy_highlight_title_pane_g1

0xc8bc,	// (0x000476c9) copy_highlight_title_pane_t1

0xc8b4,	// (0x000476c1) copy_highlight_digital_pane_g1

0xd73d,	// (0x0004854a) copy_highlight_digital_pane_t1

0xd691,	// (0x0004849e) graphic_text_primary_pane_g1

0xd721,	// (0x0004852e) graphic_text_primary_pane_t1

0xd72f,	// (0x0004853c) graphic_text_primary_pane_t2

0x0001,

0xf9a2,	// (0x0004a7af) graphic_text_primary_pane_t

0xd6fd,	// (0x0004850a) graphic_text_primary_small_pane_g1

0xd705,	// (0x00048512) graphic_text_primary_small_pane_t1

0xd713,	// (0x00048520) graphic_text_primary_small_pane_t2

0x0001,

0xf99d,	// (0x0004a7aa) graphic_text_primary_small_pane_t

0xd6d9,	// (0x000484e6) graphic_text_secondary_pane_g1

0xd6e1,	// (0x000484ee) graphic_text_secondary_pane_t1

0xd6ef,	// (0x000484fc) graphic_text_secondary_pane_t2

0x0001,

0xf998,	// (0x0004a7a5) graphic_text_secondary_pane_t

0xd6b5,	// (0x000484c2) graphic_text_title_pane_g1

0xd6bd,	// (0x000484ca) graphic_text_title_pane_t1

0xd6cb,	// (0x000484d8) graphic_text_title_pane_t2

0x0001,

0xf993,	// (0x0004a7a0) graphic_text_title_pane_t

0xd691,	// (0x0004849e) graphic_text_digital_pane_g1

0xd699,	// (0x000484a6) graphic_text_digital_pane_t1

0xd6a7,	// (0x000484b4) graphic_text_digital_pane_t2

0x0001,

0xf98e,	// (0x0004a79b) graphic_text_digital_pane_t

0x79dd,	// (0x000427ea) navi_icon_pane_srt_ParamLimits

0x79dd,	// (0x000427ea) navi_icon_pane_srt

0x798f,	// (0x0004279c) navi_midp_pane_srt

0x798f,	// (0x0004279c) navi_navi_pane_srt

0x79dd,	// (0x000427ea) navi_text_pane_srt_ParamLimits

0x79dd,	// (0x000427ea) navi_text_pane_srt

0xd3ed,	// (0x000481fa) navi_navi_icon_text_pane_srt

0xd3f5,	// (0x00048202) navi_navi_pane_srt_g1_ParamLimits

0xd3f5,	// (0x00048202) navi_navi_pane_srt_g1

0xd407,	// (0x00048214) navi_navi_pane_srt_g2_ParamLimits

0xd407,	// (0x00048214) navi_navi_pane_srt_g2

0x0001,

0xf989,	// (0x0004a796) navi_navi_pane_srt_g_ParamLimits

0xf989,	// (0x0004a796) navi_navi_pane_srt_g

0xd419,	// (0x00048226) navi_navi_tabs_pane_srt

0xd3ed,	// (0x000481fa) navi_navi_text_pane_srt

0xd3ed,	// (0x000481fa) navi_navi_volume_pane_srt

0xd682,	// (0x0004848f) navi_navi_text_pane_srt_t1

0x53a3,	// (0x000401b0) navi_navi_volume_pane_srt_g1

0x53ab,	// (0x000401b8) volume_small_pane_srt_ParamLimits

0x53ab,	// (0x000401b8) volume_small_pane_srt

0x490c,	// (0x0003f719) volume_small_pane_srt_g1_ParamLimits

0x490c,	// (0x0003f719) volume_small_pane_srt_g1

0x491c,	// (0x0003f729) volume_small_pane_srt_g2_ParamLimits

0x491c,	// (0x0003f729) volume_small_pane_srt_g2

0x492d,	// (0x0003f73a) volume_small_pane_srt_g3_ParamLimits

0x492d,	// (0x0003f73a) volume_small_pane_srt_g3

0x493e,	// (0x0003f74b) volume_small_pane_srt_g4_ParamLimits

0x493e,	// (0x0003f74b) volume_small_pane_srt_g4

0x494f,	// (0x0003f75c) volume_small_pane_srt_g5_ParamLimits

0x494f,	// (0x0003f75c) volume_small_pane_srt_g5

0x4960,	// (0x0003f76d) volume_small_pane_srt_g6_ParamLimits

0x4960,	// (0x0003f76d) volume_small_pane_srt_g6

0x4971,	// (0x0003f77e) volume_small_pane_srt_g7_ParamLimits

0x4971,	// (0x0003f77e) volume_small_pane_srt_g7

0x4982,	// (0x0003f78f) volume_small_pane_srt_g8_ParamLimits

0x4982,	// (0x0003f78f) volume_small_pane_srt_g8

0x4993,	// (0x0003f7a0) volume_small_pane_srt_g9_ParamLimits

0x4993,	// (0x0003f7a0) volume_small_pane_srt_g9

0x49a4,	// (0x0003f7b1) volume_small_pane_srt_g10_ParamLimits

0x49a4,	// (0x0003f7b1) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0004a54a) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0004a54a) volume_small_pane_srt_g

0x7c9d,	// (0x00042aaa) query_popup_data_pane_cp2

0xd668,	// (0x00048475) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd668,	// (0x00048475) navi_navi_icon_text_pane_srt_t1

0xcb02,	// (0x0004790f) navi_tabs_2_long_pane_srt

0xcb02,	// (0x0004790f) navi_tabs_2_pane_srt

0xcb02,	// (0x0004790f) navi_tabs_3_long_pane_srt

0xcb02,	// (0x0004790f) navi_tabs_3_pane_srt

0xcb02,	// (0x0004790f) navi_tabs_4_pane_srt

0x5383,	// (0x00040190) tabs_2_active_pane_srt_ParamLimits

0x5383,	// (0x00040190) tabs_2_active_pane_srt

0x5393,	// (0x000401a0) tabs_2_passive_pane_srt_ParamLimits

0x5393,	// (0x000401a0) tabs_2_passive_pane_srt

0xc3c3,	// (0x000471d0) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc3c3,	// (0x000471d0) bg_passive_tab_pane_cp1_srt

0xd501,	// (0x0004830e) bg_passive_tab_pane_g1_cp1_srt

0xbcd9,	// (0x00046ae6) bg_passive_tab_pane_g2_cp1_srt

0xd50a,	// (0x00048317) bg_passive_tab_pane_g3_cp1_srt

0x7b18,	// (0x00042925) bg_active_tab_pane_cp1_srt_ParamLimits

0x7b18,	// (0x00042925) bg_active_tab_pane_cp1_srt

0xd4f9,	// (0x00048306) tabs_2_active_pane_srt_g1

0x94ba,	// (0x000442c7) tabs_2_active_pane_srt_t1_ParamLimits

0x94ba,	// (0x000442c7) tabs_2_active_pane_srt_t1

0xd501,	// (0x0004830e) bg_active_tab_pane_g1_cp1_srt

0xbcd9,	// (0x00046ae6) bg_active_tab_pane_g2_cp1_srt

0xd50a,	// (0x00048317) bg_active_tab_pane_g3_cp1_srt

0x5350,	// (0x0004015d) tabs_3_active_pane_srt_ParamLimits

0x5350,	// (0x0004015d) tabs_3_active_pane_srt

0x5361,	// (0x0004016e) tabs_3_passive_pane_cp_srt_ParamLimits

0x5361,	// (0x0004016e) tabs_3_passive_pane_cp_srt

0x5372,	// (0x0004017f) tabs_3_passive_pane_srt_ParamLimits

0x5372,	// (0x0004017f) tabs_3_passive_pane_srt

0xc3c3,	// (0x000471d0) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc3c3,	// (0x000471d0) bg_passive_tab_pane_cp2_srt

0xc0ba,	// (0x00046ec7) bg_passive_tab_pane_g1_cp2_srt

0xbcd9,	// (0x00046ae6) bg_passive_tab_pane_g2_cp2_srt

0xc0c3,	// (0x00046ed0) bg_passive_tab_pane_g3_cp2_srt

0x7b18,	// (0x00042925) bg_active_tab_pane_cp2_srt_ParamLimits

0x7b18,	// (0x00042925) bg_active_tab_pane_cp2_srt

0xd658,	// (0x00048465) tabs_3_active_pane_srt_g1

0x91af,	// (0x00043fbc) tabs_3_active_pane_srt_t1_ParamLimits

0x91af,	// (0x00043fbc) tabs_3_active_pane_srt_t1

0xc0ba,	// (0x00046ec7) bg_active_tab_pane_g1_cp2_srt

0xbcd9,	// (0x00046ae6) bg_active_tab_pane_g2_cp2_srt

0xc0c3,	// (0x00046ed0) bg_active_tab_pane_g3_cp2_srt

0x5308,	// (0x00040115) tabs_4_active_pane_srt_ParamLimits

0x5308,	// (0x00040115) tabs_4_active_pane_srt

0x531a,	// (0x00040127) tabs_4_passive_pane_cp2_srt_ParamLimits

0x531a,	// (0x00040127) tabs_4_passive_pane_cp2_srt

0x4b09,	// (0x0003f916) aid_size_cell_toolbar

0x99cc,	// (0x000447d9) main_idle_act_pane_ParamLimits

0x4c78,	// (0x0003fa85) popup_large_graphic_colour_window_ParamLimits

0x9f2a,	// (0x00044d37) popup_toolbar_window_ParamLimits

0x9f2a,	// (0x00044d37) popup_toolbar_window

0x7366,	// (0x00042173) list_single_graphic_2heading_pane_ParamLimits

0x7366,	// (0x00042173) list_single_graphic_2heading_pane

0x839b,	// (0x000431a8) aid_size_cell_apps_grid_lsc_pane

0x83ad,	// (0x000431ba) aid_size_cell_apps_grid_prt_pane

0x94e7,	// (0x000442f4) bg_wml_button_pane_cp1_ParamLimits

0x94e7,	// (0x000442f4) bg_wml_button_pane_cp1

0xc56d,	// (0x0004737a) form_midp_field_text_pane_t1_ParamLimits

0xc3c3,	// (0x000471d0) input_focus_pane_cp050_ParamLimits

0xc58e,	// (0x0004739b) list_midp_form_text_pane_ParamLimits

0xc54a,	// (0x00047357) input_focus_pane_cp051_ParamLimits

0xc55e,	// (0x0004736b) list_midp_choice_pane_ParamLimits

0xc447,	// (0x00047254) list_single_2graphic_pane_cp3_ParamLimits

0xc447,	// (0x00047254) list_single_2graphic_pane_cp3

0xc45a,	// (0x00047267) list_single_midp_graphic_pane_ParamLimits

0xc45a,	// (0x00047267) list_single_midp_graphic_pane

0x422a,	// (0x0003f037) list_single_graphic_2heading_pane_g1_ParamLimits

0x422a,	// (0x0003f037) list_single_graphic_2heading_pane_g1

0x4236,	// (0x0003f043) list_single_graphic_2heading_pane_g4_ParamLimits

0x4236,	// (0x0003f043) list_single_graphic_2heading_pane_g4

0x4242,	// (0x0003f04f) list_single_graphic_2heading_pane_g5_ParamLimits

0x4242,	// (0x0003f04f) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x0004a59d) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x0004a59d) list_single_graphic_2heading_pane_g

0x424e,	// (0x0003f05b) list_single_graphic_2heading_pane_t1_ParamLimits

0x424e,	// (0x0003f05b) list_single_graphic_2heading_pane_t1

0x4262,	// (0x0003f06f) list_single_graphic_2heading_pane_t2_ParamLimits

0x4262,	// (0x0003f06f) list_single_graphic_2heading_pane_t2

0x427c,	// (0x0003f089) list_single_graphic_2heading_pane_t3_ParamLimits

0x427c,	// (0x0003f089) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x0004a5a4) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x0004a5a4) list_single_graphic_2heading_pane_t

0xc299,	// (0x000470a6) bg_popup_sub_pane_cp2

0xc2bf,	// (0x000470cc) grid_toobar_pane

0x4fbb,	// (0x0003fdc8) cell_toolbar_pane_ParamLimits

0x4fbb,	// (0x0003fdc8) cell_toolbar_pane

0xc2f5,	// (0x00047102) cell_toolbar_pane_g1_ParamLimits

0xc2f5,	// (0x00047102) cell_toolbar_pane_g1

0xc307,	// (0x00047114) cell_toolbar_pane_g2_ParamLimits

0xc307,	// (0x00047114) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x0004a5ab) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x0004a5ab) cell_toolbar_pane_g

0xc329,	// (0x00047136) grid_highlight_pane_cp2_ParamLimits

0xc329,	// (0x00047136) grid_highlight_pane_cp2

0xc343,	// (0x00047150) toolbar_button_pane

0xc34f,	// (0x0004715c) toolbar_button_pane_g1

0xc357,	// (0x00047164) toolbar_button_pane_g2

0xc35f,	// (0x0004716c) toolbar_button_pane_g3

0xc367,	// (0x00047174) toolbar_button_pane_g4

0xc36f,	// (0x0004717c) toolbar_button_pane_g5

0xc377,	// (0x00047184) toolbar_button_pane_g6

0xc37f,	// (0x0004718c) toolbar_button_pane_g7

0xc387,	// (0x00047194) toolbar_button_pane_g8

0xc38f,	// (0x0004719c) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x0004a5b0) toolbar_button_pane_g

0x4fea,	// (0x0003fdf7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x4fea,	// (0x0003fdf7) list_single_2graphic_pane_g1_cp3

0xa31c,	// (0x00045129) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa31c,	// (0x00045129) list_single_2graphic_pane_g2_cp3

0x5005,	// (0x0003fe12) list_single_2graphic_pane_g3_cp3

0x500d,	// (0x0003fe1a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x500d,	// (0x0003fe1a) list_single_2graphic_pane_g4_cp3

0x5019,	// (0x0003fe26) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5019,	// (0x0003fe26) list_single_2graphic_pane_t1_cp3

0x5033,	// (0x0003fe40) list_single_midp_graphic_pane_g2_ParamLimits

0x5033,	// (0x0003fe40) list_single_midp_graphic_pane_g2

0x4222,	// (0x0003f02f) aid_zoom_text_primary

0x4b11,	// (0x0003f91e) aid_zoom_text_secondary

0x9815,	// (0x00044622) status_small_pane_g7_ParamLimits

0x9815,	// (0x00044622) status_small_pane_g7

0x9838,	// (0x00044645) status_small_pane_t1_ParamLimits

0x90f7,	// (0x00043f04) title_pane_g2

0x0003,

0xf529,	// (0x0004a336) title_pane_g

0x93d9,	// (0x000441e6) aid_size_cell_colour_1_pane_ParamLimits

0x93d9,	// (0x000441e6) aid_size_cell_colour_1_pane

0x93ed,	// (0x000441fa) aid_size_cell_colour_2_pane_ParamLimits

0x93ed,	// (0x000441fa) aid_size_cell_colour_2_pane

0x9401,	// (0x0004420e) aid_size_cell_colour_3_pane_ParamLimits

0x9401,	// (0x0004420e) aid_size_cell_colour_3_pane

0x9415,	// (0x00044222) aid_size_cell_colour_4_pane_ParamLimits

0x9415,	// (0x00044222) aid_size_cell_colour_4_pane

0x45c7,	// (0x0003f3d4) title_pane_stacon_g1_ParamLimits

0x45c7,	// (0x0003f3d4) title_pane_stacon_g1

0xc931,	// (0x0004773e) popup_note_wait_window_g3_ParamLimits

0xc931,	// (0x0004773e) popup_note_wait_window_g3

0xc9a7,	// (0x000477b4) popup_note_wait_window_t5_ParamLimits

0xc9a7,	// (0x000477b4) popup_note_wait_window_t5

0x798f,	// (0x0004279c) main_feb_china_hwr_fs_writing_pane

0x9a2d,	// (0x0004483a) popup_feb_china_hwr_fs_window_ParamLimits

0x9a2d,	// (0x0004483a) popup_feb_china_hwr_fs_window

0xa32d,	// (0x0004513a) aid_size_cell_hwr_fs_ParamLimits

0xa32d,	// (0x0004513a) aid_size_cell_hwr_fs

0xc3c3,	// (0x000471d0) bg_popup_sub_pane_cp3_ParamLimits

0xc3c3,	// (0x000471d0) bg_popup_sub_pane_cp3

0xa342,	// (0x0004514f) grid_hwr_fs_pane_ParamLimits

0xa342,	// (0x0004514f) grid_hwr_fs_pane

0x507e,	// (0x0003fe8b) linegrid_hwr_fs_pane_ParamLimits

0x507e,	// (0x0003fe8b) linegrid_hwr_fs_pane

0xa35a,	// (0x00045167) cell_hwr_fs_pane_ParamLimits

0xa35a,	// (0x00045167) cell_hwr_fs_pane

0xc3cf,	// (0x000471dc) linegrid_hwr_fs_pane_g1_ParamLimits

0xc3cf,	// (0x000471dc) linegrid_hwr_fs_pane_g1

0xa37a,	// (0x00045187) linegrid_hwr_fs_pane_g2_ParamLimits

0xa37a,	// (0x00045187) linegrid_hwr_fs_pane_g2

0xc3db,	// (0x000471e8) linegrid_hwr_fs_pane_g3_ParamLimits

0xc3db,	// (0x000471e8) linegrid_hwr_fs_pane_g3

0x50ac,	// (0x0003feb9) linegrid_hwr_fs_pane_g4_ParamLimits

0x50ac,	// (0x0003feb9) linegrid_hwr_fs_pane_g4

0x50c6,	// (0x0003fed3) linegrid_hwr_fs_pane_g5_ParamLimits

0x50c6,	// (0x0003fed3) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c9,	// (0x0004a5d6) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c9,	// (0x0004a5d6) linegrid_hwr_fs_pane_g

0xc3e7,	// (0x000471f4) cell_hwr_fs_pane_g1_ParamLimits

0xc3e7,	// (0x000471f4) cell_hwr_fs_pane_g1

0xc267,	// (0x00047074) cell_hwr_fs_pane_g2_ParamLimits

0xc267,	// (0x00047074) cell_hwr_fs_pane_g2

0xa38c,	// (0x00045199) cell_hwr_fs_pane_g3_ParamLimits

0xa38c,	// (0x00045199) cell_hwr_fs_pane_g3

0xa399,	// (0x000451a6) cell_hwr_fs_pane_g4_ParamLimits

0xa399,	// (0x000451a6) cell_hwr_fs_pane_g4

0x0003,

0xf7d4,	// (0x0004a5e1) cell_hwr_fs_pane_g_ParamLimits

0xf7d4,	// (0x0004a5e1) cell_hwr_fs_pane_g

0xa3a6,	// (0x000451b3) cell_hwr_fs_pane_t1

0x798f,	// (0x0004279c) grid_highlight_pane_cp6

0x798f,	// (0x0004279c) main_idle_act2_pane

0x8192,	// (0x00042f9f) aid_inside_area_popup_secondary

0xa519,	// (0x00045326) aid_inside_area_window_primary_ParamLimits

0xa519,	// (0x00045326) aid_inside_area_window_primary

0xd74c,	// (0x00048559) ai2_news_ticker_pane

0xd754,	// (0x00048561) aid_size_cell_ai1_link_ParamLimits

0xd754,	// (0x00048561) aid_size_cell_ai1_link

0xa8f8,	// (0x00045705) popup_ai2_data_window_ParamLimits

0xa8f8,	// (0x00045705) popup_ai2_data_window

0xd76e,	// (0x0004857b) popup_ai2_link_window_ParamLimits

0xd76e,	// (0x0004857b) popup_ai2_link_window

0xc3c3,	// (0x000471d0) bg_popup_sub_pane_cp4_ParamLimits

0xc3c3,	// (0x000471d0) bg_popup_sub_pane_cp4

0xd782,	// (0x0004858f) grid_ai2_link_pane_ParamLimits

0xd782,	// (0x0004858f) grid_ai2_link_pane

0xd799,	// (0x000485a6) popup_ai2_link_window_g1_ParamLimits

0xd799,	// (0x000485a6) popup_ai2_link_window_g1

0xd7a5,	// (0x000485b2) popup_ai2_link_window_g2_ParamLimits

0xd7a5,	// (0x000485b2) popup_ai2_link_window_g2

0x0001,

0xf9a7,	// (0x0004a7b4) popup_ai2_link_window_g_ParamLimits

0xf9a7,	// (0x0004a7b4) popup_ai2_link_window_g

0xd7b4,	// (0x000485c1) ai2_mp_button_pane

0xd7bc,	// (0x000485c9) ai2_mp_volume_pane

0xc54a,	// (0x00047357) bg_popup_sub_pane_cp5_ParamLimits

0xc54a,	// (0x00047357) bg_popup_sub_pane_cp5

0xd7c4,	// (0x000485d1) heading_ai2_gene_pane_ParamLimits

0xd7c4,	// (0x000485d1) heading_ai2_gene_pane

0xd7d0,	// (0x000485dd) list_ai2_gene_pane_ParamLimits

0xd7d0,	// (0x000485dd) list_ai2_gene_pane

0xd818,	// (0x00048625) cell_ai2_link_pane_ParamLimits

0xd818,	// (0x00048625) cell_ai2_link_pane

0xd82e,	// (0x0004863b) cell_ai2_link_pane_g1

0x798f,	// (0x0004279c) grid_highlight_pane_cp7

0x53c0,	// (0x000401cd) ai2_mp_volume_pane_g1

0xd8cb,	// (0x000486d8) ai2_mp_volume_pane_g2

0xa922,	// (0x0004572f) list_ai2_gene_pane_t1

0xd8d3,	// (0x000486e0) ai2_mp_volume_pane_g3

0x0002,

0xf9c0,	// (0x0004a7cd) ai2_mp_volume_pane_g

0x53c8,	// (0x000401d5) volume_small_pane_cp3

0xd8db,	// (0x000486e8) aid_size_cell_ai2_button

0xd8e3,	// (0x000486f0) grid_ai2_button_pane

0xd8ec,	// (0x000486f9) cell_ai2_button_pane_ParamLimits

0xd8ec,	// (0x000486f9) cell_ai2_button_pane

0x790d,	// (0x0004271a) cell_ai2_button_pane_g1

0x798f,	// (0x0004279c) grid_highlight_pane_cp8

0xd88b,	// (0x00048698) ai2_gene_pane_t1_ParamLimits

0xd88b,	// (0x00048698) ai2_gene_pane_t1

0x99b4,	// (0x000447c1) aid_height_parent_landscape

0xd573,	// (0x00048380) aid_height_set_list

0xd57f,	// (0x0004838c) aid_size_parent

0xd642,	// (0x0004844f) aid_size_cell_graphic_pane_ParamLimits

0xd7e0,	// (0x000485ed) popup_ai2_data_window_g1_ParamLimits

0xd7e0,	// (0x000485ed) popup_ai2_data_window_g1

0xd7ec,	// (0x000485f9) ai2_news_ticker_pane_g1

0xd7f4,	// (0x00048601) ai2_news_ticker_pane_g2

0x0001,

0xf9ac,	// (0x0004a7b9) ai2_news_ticker_pane_g

0xd7fc,	// (0x00048609) ai2_news_ticker_pane_t1

0xd80a,	// (0x00048617) ai2_news_ticker_pane_t2

0x0001,

0xf9b1,	// (0x0004a7be) ai2_news_ticker_pane_t

0xd837,	// (0x00048644) heading_ai2_gene_pane_g1

0xd83f,	// (0x0004864c) heading_ai2_gene_pane_t1_ParamLimits

0xd83f,	// (0x0004864c) heading_ai2_gene_pane_t1

0xd854,	// (0x00048661) list_highlight_pane_cp6

0xa90c,	// (0x00045719) ai2_gene_pane_ParamLimits

0xa90c,	// (0x00045719) ai2_gene_pane

0xa930,	// (0x0004573d) list_ai2_gene_pane_t2

0x0001,

0xf9b6,	// (0x0004a7c3) list_ai2_gene_pane_t

0xd85c,	// (0x00048669) list_highlight_pane_cp8_ParamLimits

0xd85c,	// (0x00048669) list_highlight_pane_cp8

0xd86d,	// (0x0004867a) ai2_gene_pane_g1_ParamLimits

0xd86d,	// (0x0004867a) ai2_gene_pane_g1

0xd87f,	// (0x0004868c) ai2_gene_pane_g2_ParamLimits

0xd87f,	// (0x0004868c) ai2_gene_pane_g2

0x0001,

0xf9bb,	// (0x0004a7c8) ai2_gene_pane_g_ParamLimits

0xf9bb,	// (0x0004a7c8) ai2_gene_pane_g

0x7f3a,	// (0x00042d47) scroll_pane_cp12

0x9973,	// (0x00044780) control_pane_t3_ParamLimits

0x9973,	// (0x00044780) control_pane_t3

0x9829,	// (0x00044636) status_small_pane_g8_ParamLimits

0x9829,	// (0x00044636) status_small_pane_g8

0x9aa1,	// (0x000448ae) popup_find_window_ParamLimits

0x9c94,	// (0x00044aa1) popup_note_image_window_ParamLimits

0x6ce2,	// (0x00041aef) list_double2_graphic_pane_vc_g1_ParamLimits

0x6ce2,	// (0x00041aef) list_double2_graphic_pane_vc_g1

0x7fd4,	// (0x00042de1) list_double2_graphic_pane_vc_g2_ParamLimits

0x7fd4,	// (0x00042de1) list_double2_graphic_pane_vc_g2

0x7fe0,	// (0x00042ded) list_double2_graphic_pane_vc_g3_ParamLimits

0x7fe0,	// (0x00042ded) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x0004a3a9) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x0004a3a9) list_double2_graphic_pane_vc_g

0x6cee,	// (0x00041afb) list_double2_graphic_pane_vc_t1_ParamLimits

0x6cee,	// (0x00041afb) list_double2_graphic_pane_vc_t1

0x7fd4,	// (0x00042de1) list_single_heading_pane_vc_g1_ParamLimits

0x7fd4,	// (0x00042de1) list_single_heading_pane_vc_g1

0x7fe0,	// (0x00042ded) list_single_heading_pane_vc_g2_ParamLimits

0x7fe0,	// (0x00042ded) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004a3ba) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004a3ba) list_single_heading_pane_vc_g

0x7247,	// (0x00042054) list_single_heading_pane_vc_t1_ParamLimits

0x7247,	// (0x00042054) list_single_heading_pane_vc_t1

0x725d,	// (0x0004206a) list_single_heading_pane_vc_t2_ParamLimits

0x725d,	// (0x0004206a) list_single_heading_pane_vc_t2

0x0001,

0xf7b8,	// (0x0004a5c5) list_single_heading_pane_vc_t_ParamLimits

0xf7b8,	// (0x0004a5c5) list_single_heading_pane_vc_t

0x726f,	// (0x0004207c) list_setting_number_pane_vc_g1_ParamLimits

0x726f,	// (0x0004207c) list_setting_number_pane_vc_g1

0x727b,	// (0x00042088) list_setting_number_pane_vc_g2_ParamLimits

0x727b,	// (0x00042088) list_setting_number_pane_vc_g2

0x0001,

0xf7bd,	// (0x0004a5ca) list_setting_number_pane_vc_g_ParamLimits

0xf7bd,	// (0x0004a5ca) list_setting_number_pane_vc_g

0x7287,	// (0x00042094) list_setting_number_pane_vc_t1_ParamLimits

0x7287,	// (0x00042094) list_setting_number_pane_vc_t1

0x729b,	// (0x000420a8) list_setting_number_pane_vc_t2_ParamLimits

0x729b,	// (0x000420a8) list_setting_number_pane_vc_t2

0x72b7,	// (0x000420c4) list_setting_number_pane_vc_t3_ParamLimits

0x72b7,	// (0x000420c4) list_setting_number_pane_vc_t3

0x0002,

0xf7c2,	// (0x0004a5cf) list_setting_number_pane_vc_t_ParamLimits

0xf7c2,	// (0x0004a5cf) list_setting_number_pane_vc_t

0x72df,	// (0x000420ec) set_value_pane_vc_ParamLimits

0x72df,	// (0x000420ec) set_value_pane_vc

0x7366,	// (0x00042173) list_double2_graphic_pane_vc_ParamLimits

0x7366,	// (0x00042173) list_double2_graphic_pane_vc

0xa7fd,	// (0x0004560a) list_double2_large_graphic_pane_vc_ParamLimits

0xa7fd,	// (0x0004560a) list_double2_large_graphic_pane_vc

0x7366,	// (0x00042173) list_double2_pane_vc_ParamLimits

0x7366,	// (0x00042173) list_double2_pane_vc

0x7366,	// (0x00042173) list_double_graphic_heading_pane_vc_ParamLimits

0x7366,	// (0x00042173) list_double_graphic_heading_pane_vc

0x7366,	// (0x00042173) list_double_graphic_pane_vc_ParamLimits

0x7366,	// (0x00042173) list_double_graphic_pane_vc

0x7366,	// (0x00042173) list_double_heading_pane_vc_ParamLimits

0x7366,	// (0x00042173) list_double_heading_pane_vc

0xa80e,	// (0x0004561b) list_double_large_graphic_pane_vc_ParamLimits

0xa80e,	// (0x0004561b) list_double_large_graphic_pane_vc

0x7366,	// (0x00042173) list_double_number_pane_vc_ParamLimits

0x7366,	// (0x00042173) list_double_number_pane_vc

0x7366,	// (0x00042173) list_double_pane_vc_ParamLimits

0x7366,	// (0x00042173) list_double_pane_vc

0x7366,	// (0x00042173) list_double_time_pane_vc_ParamLimits

0x7366,	// (0x00042173) list_double_time_pane_vc

0x7366,	// (0x00042173) list_setting_number_pane_vc_ParamLimits

0x7366,	// (0x00042173) list_setting_number_pane_vc

0x7366,	// (0x00042173) list_setting_pane_vc_ParamLimits

0x7366,	// (0x00042173) list_setting_pane_vc

0x7366,	// (0x00042173) list_single_graphic_heading_pane_vc_ParamLimits

0x7366,	// (0x00042173) list_single_graphic_heading_pane_vc

0x7366,	// (0x00042173) list_single_heading_pane_vc_ParamLimits

0x7366,	// (0x00042173) list_single_heading_pane_vc

0x7366,	// (0x00042173) list_single_number_heading_pane_vc_ParamLimits

0x7366,	// (0x00042173) list_single_number_heading_pane_vc

0x6ce2,	// (0x00041aef) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x6ce2,	// (0x00041aef) list_double_graphic_heading_pane_vc_g1

0x7fd4,	// (0x00042de1) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7fd4,	// (0x00042de1) list_double_graphic_heading_pane_vc_g2

0x7fe0,	// (0x00042ded) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7fe0,	// (0x00042ded) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf59c,	// (0x0004a3a9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0004a3a9) list_double_graphic_heading_pane_vc_g

0x73a3,	// (0x000421b0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x73a3,	// (0x000421b0) list_double_graphic_heading_pane_vc_t1

0x73b9,	// (0x000421c6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x73b9,	// (0x000421c6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c7,	// (0x0004a7d4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c7,	// (0x0004a7d4) list_double_graphic_heading_pane_vc_t

0x726f,	// (0x0004207c) list_setting_pane_vc_g1_ParamLimits

0x726f,	// (0x0004207c) list_setting_pane_vc_g1

0x727b,	// (0x00042088) list_setting_pane_vc_g2_ParamLimits

0x727b,	// (0x00042088) list_setting_pane_vc_g2

0x0001,

0xf7bd,	// (0x0004a5ca) list_setting_pane_vc_g_ParamLimits

0xf7bd,	// (0x0004a5ca) list_setting_pane_vc_g

0x73d1,	// (0x000421de) list_setting_pane_vc_t1_ParamLimits

0x73d1,	// (0x000421de) list_setting_pane_vc_t1

0x73e5,	// (0x000421f2) list_setting_pane_vc_t2_ParamLimits

0x73e5,	// (0x000421f2) list_setting_pane_vc_t2

0x0001,

0xfa0a,	// (0x0004a817) list_setting_pane_vc_t_ParamLimits

0xfa0a,	// (0x0004a817) list_setting_pane_vc_t

0x72df,	// (0x000420ec) set_value_pane_cp_vc_ParamLimits

0x72df,	// (0x000420ec) set_value_pane_cp_vc

0x7fd4,	// (0x00042de1) list_single_number_heading_pane_vc_g1_ParamLimits

0x7fd4,	// (0x00042de1) list_single_number_heading_pane_vc_g1

0x7fe0,	// (0x00042ded) list_single_number_heading_pane_vc_g2_ParamLimits

0x7fe0,	// (0x00042ded) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004a3ba) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004a3ba) list_single_number_heading_pane_vc_g

0x7247,	// (0x00042054) list_single_number_heading_pane_vc_t1_ParamLimits

0x7247,	// (0x00042054) list_single_number_heading_pane_vc_t1

0x73f9,	// (0x00042206) list_single_number_heading_pane_vc_t2_ParamLimits

0x73f9,	// (0x00042206) list_single_number_heading_pane_vc_t2

0x740b,	// (0x00042218) list_single_number_heading_pane_vc_t3_ParamLimits

0x740b,	// (0x00042218) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0f,	// (0x0004a81c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0004a81c) list_single_number_heading_pane_vc_t

0x6ce2,	// (0x00041aef) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x6ce2,	// (0x00041aef) list_single_graphic_heading_pane_vc_g1

0x7fd4,	// (0x00042de1) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7fd4,	// (0x00042de1) list_single_graphic_heading_pane_vc_g4

0x7fe0,	// (0x00042ded) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7fe0,	// (0x00042ded) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf59c,	// (0x0004a3a9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0004a3a9) list_single_graphic_heading_pane_vc_g

0x7247,	// (0x00042054) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x7247,	// (0x00042054) list_single_graphic_heading_pane_vc_t1

0x741d,	// (0x0004222a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x741d,	// (0x0004222a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa16,	// (0x0004a823) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x0004a823) list_single_graphic_heading_pane_vc_t

0x7fd4,	// (0x00042de1) list_double2_pane_vc_g1_ParamLimits

0x7fd4,	// (0x00042de1) list_double2_pane_vc_g1

0x7fe0,	// (0x00042ded) list_double2_pane_vc_g2_ParamLimits

0x7fe0,	// (0x00042ded) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004a3ba) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004a3ba) list_double2_pane_vc_g

0x742f,	// (0x0004223c) list_double2_pane_vc_t1_ParamLimits

0x742f,	// (0x0004223c) list_double2_pane_vc_t1

0x7f84,	// (0x00042d91) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7f84,	// (0x00042d91) list_double2_large_graphic_pane_vc_g1

0x7f90,	// (0x00042d9d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7f90,	// (0x00042d9d) list_double2_large_graphic_pane_vc_g2

0x7f9c,	// (0x00042da9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7f9c,	// (0x00042da9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x0004a3d2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x0004a3d2) list_double2_large_graphic_pane_vc_g

0x6bd8,	// (0x000419e5) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6bd8,	// (0x000419e5) list_double2_large_graphic_pane_vc_t1

0x7445,	// (0x00042252) list_double_time_pane_vc_g1_ParamLimits

0x7445,	// (0x00042252) list_double_time_pane_vc_g1

0x7451,	// (0x0004225e) list_double_time_pane_vc_g2_ParamLimits

0x7451,	// (0x0004225e) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0004a828) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0004a828) list_double_time_pane_vc_g

0x745d,	// (0x0004226a) list_double_time_pane_vc_t1_ParamLimits

0x745d,	// (0x0004226a) list_double_time_pane_vc_t1

0x747b,	// (0x00042288) list_double_time_pane_vc_t2_ParamLimits

0x747b,	// (0x00042288) list_double_time_pane_vc_t2

0x74c4,	// (0x000422d1) list_double_time_pane_vc_t3_ParamLimits

0x74c4,	// (0x000422d1) list_double_time_pane_vc_t3

0x74d6,	// (0x000422e3) list_double_time_pane_vc_t4_ParamLimits

0x74d6,	// (0x000422e3) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0004a82d) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0004a82d) list_double_time_pane_vc_t

0x7fd4,	// (0x00042de1) list_double_pane_vc_g1_ParamLimits

0x7fd4,	// (0x00042de1) list_double_pane_vc_g1

0x7fe0,	// (0x00042ded) list_double_pane_vc_g2_ParamLimits

0x7fe0,	// (0x00042ded) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004a3ba) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004a3ba) list_double_pane_vc_g

0x74e8,	// (0x000422f5) list_double_pane_vc_t1_ParamLimits

0x74e8,	// (0x000422f5) list_double_pane_vc_t1

0x74fa,	// (0x00042307) list_double_pane_vc_t2_ParamLimits

0x74fa,	// (0x00042307) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0004a836) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0004a836) list_double_pane_vc_t

0x7fd4,	// (0x00042de1) list_double_number_pane_vc_g1_ParamLimits

0x7fd4,	// (0x00042de1) list_double_number_pane_vc_g1

0x7fe0,	// (0x00042ded) list_double_number_pane_vc_g2_ParamLimits

0x7fe0,	// (0x00042ded) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004a3ba) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004a3ba) list_double_number_pane_vc_g

0x7510,	// (0x0004231d) list_double_number_pane_vc_t1_ParamLimits

0x7510,	// (0x0004231d) list_double_number_pane_vc_t1

0x7524,	// (0x00042331) list_double_number_pane_vc_t2_ParamLimits

0x7524,	// (0x00042331) list_double_number_pane_vc_t2

0x7536,	// (0x00042343) list_double_number_pane_vc_t3_ParamLimits

0x7536,	// (0x00042343) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0004a83b) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0004a83b) list_double_number_pane_vc_t

0xd422,	// (0x0004822f) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd422,	// (0x0004822f) list_double_large_graphic_pane_vc_g1

0xd44a,	// (0x00048257) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd44a,	// (0x00048257) list_double_large_graphic_pane_vc_g2

0xd45e,	// (0x0004826b) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd45e,	// (0x0004826b) list_double_large_graphic_pane_vc_g3

0x754c,	// (0x00042359) list_double_large_graphic_pane_vc_g4_ParamLimits

0x754c,	// (0x00042359) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0004a842) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0004a842) list_double_large_graphic_pane_vc_g

0x755c,	// (0x00042369) list_double_large_graphic_pane_vc_t1_ParamLimits

0x755c,	// (0x00042369) list_double_large_graphic_pane_vc_t1

0x7576,	// (0x00042383) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7576,	// (0x00042383) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0004a84b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0004a84b) list_double_large_graphic_pane_vc_t

0x7fd4,	// (0x00042de1) list_double_heading_pane_vc_g1_ParamLimits

0x7fd4,	// (0x00042de1) list_double_heading_pane_vc_g1

0x7fe0,	// (0x00042ded) list_double_heading_pane_vc_g2_ParamLimits

0x7fe0,	// (0x00042ded) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004a3ba) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004a3ba) list_double_heading_pane_vc_g

0x7596,	// (0x000423a3) list_double_heading_pane_vc_t1_ParamLimits

0x7596,	// (0x000423a3) list_double_heading_pane_vc_t1

0x7247,	// (0x00042054) list_double_heading_pane_vc_t2_ParamLimits

0x7247,	// (0x00042054) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0004a850) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0004a850) list_double_heading_pane_vc_t

0x75a8,	// (0x000423b5) list_double_graphic_pane_vc_g1_ParamLimits

0x75a8,	// (0x000423b5) list_double_graphic_pane_vc_g1

0x75b4,	// (0x000423c1) list_double_graphic_pane_vc_g2_ParamLimits

0x75b4,	// (0x000423c1) list_double_graphic_pane_vc_g2

0x7fd4,	// (0x00042de1) list_double_graphic_pane_vc_g3_ParamLimits

0x7fd4,	// (0x00042de1) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0004a855) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0004a855) list_double_graphic_pane_vc_g

0x75d1,	// (0x000423de) list_double_graphic_pane_vc_t1_ParamLimits

0x75d1,	// (0x000423de) list_double_graphic_pane_vc_t1

0x75ef,	// (0x000423fc) list_double_graphic_pane_vc_t2_ParamLimits

0x75ef,	// (0x000423fc) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0004a85e) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0004a85e) list_double_graphic_pane_vc_t

0x42a4,	// (0x0003f0b1) aid_size_cell_fastswap

0x8f92,	// (0x00043d9f) aid_size_cell_touch_ParamLimits

0x8f92,	// (0x00043d9f) aid_size_cell_touch

0x43fb,	// (0x0003f208) popup_fast_swap_wide_window_ParamLimits

0x43fb,	// (0x0003f208) popup_fast_swap_wide_window

0x908a,	// (0x00043e97) touch_pane_ParamLimits

0x908a,	// (0x00043e97) touch_pane

0x6f93,	// (0x00041da0) button_value_adjust_pane_cp2

0x6f9b,	// (0x00041da8) button_value_adjust_pane_cp4

0x6fbb,	// (0x00041dc8) form_field_data_pane_cp2

0x0dda,	// (0x0003bbe7) form_field_data_wide_pane_cp2

0x83d2,	// (0x000431df) bg_scroll_pane_ParamLimits

0x46e8,	// (0x0003f4f5) scroll_handle_pane_ParamLimits

0x46fc,	// (0x0003f509) scroll_sc2_down_pane_ParamLimits

0x46fc,	// (0x0003f509) scroll_sc2_down_pane

0x8403,	// (0x00043210) scroll_sc2_up_pane_ParamLimits

0x8403,	// (0x00043210) scroll_sc2_up_pane

0xaa52,	// (0x0004585f) grid_wheel_folder_pane_g1_ParamLimits

0xaa52,	// (0x0004585f) grid_wheel_folder_pane_g1

0x48b0,	// (0x0003f6bd) clock_nsta_pane_cp2_ParamLimits

0x48b0,	// (0x0003f6bd) clock_nsta_pane_cp2

0x973f,	// (0x0004454c) listscroll_midp_pane_ParamLimits

0x974e,	// (0x0004455b) midp_canvas_pane

0x4af7,	// (0x0003f904) nsta_clock_indic_pane

0xc178,	// (0x00046f85) listscroll_form_pane_vc

0xc180,	// (0x00046f8d) listscroll_set_pane_vc_ParamLimits

0xc180,	// (0x00046f8d) listscroll_set_pane_vc

0xa060,	// (0x00044e6d) clock_nsta_pane

0xa083,	// (0x00044e90) indicator_nsta_pane

0xc299,	// (0x000470a6) bg_popup_sub_pane_cp2_ParamLimits

0xc2ad,	// (0x000470ba) find_pane_cp2_ParamLimits

0xc2ad,	// (0x000470ba) find_pane_cp2

0xc2bf,	// (0x000470cc) grid_toobar_pane_ParamLimits

0xc397,	// (0x000471a4) list_form_gen_pane_vc_ParamLimits

0xc397,	// (0x000471a4) list_form_gen_pane_vc

0xc3ad,	// (0x000471ba) scroll_pane_cp8_vc_ParamLimits

0xc3ad,	// (0x000471ba) scroll_pane_cp8_vc

0xc3fd,	// (0x0004720a) data_form_wide_pane_vc_ParamLimits

0xc3fd,	// (0x0004720a) data_form_wide_pane_vc

0xc409,	// (0x00047216) form_field_data_wide_pane_vc_g1

0xc411,	// (0x0004721e) form_field_data_wide_pane_vc_t1_ParamLimits

0xc411,	// (0x0004721e) form_field_data_wide_pane_vc_t1

0x8055,	// (0x00042e62) input_focus_pane_cp6_vc_ParamLimits

0x8055,	// (0x00042e62) input_focus_pane_cp6_vc

0xa3d0,	// (0x000451dd) list_midp_pane_ParamLimits

0xd513,	// (0x00048320) scroll_pane_cp16_ParamLimits

0xd513,	// (0x00048320) scroll_pane_cp16

0xc717,	// (0x00047524) button_value_adjust_pane_ParamLimits

0xc717,	// (0x00047524) button_value_adjust_pane

0xa6ce,	// (0x000454db) button_value_adjust_pane_cp6_ParamLimits

0xa6ce,	// (0x000454db) button_value_adjust_pane_cp6

0xa7d8,	// (0x000455e5) settings_code_pane_cp_ParamLimits

0xa7d8,	// (0x000455e5) settings_code_pane_cp

0x790d,	// (0x0004271a) cell_touch_pane_g1

0x790d,	// (0x0004271a) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x0004a4f0) cell_touch_pane_g

0xa93e,	// (0x0004574b) cell_touch_pane_cp_ParamLimits

0xa93e,	// (0x0004574b) cell_touch_pane_cp

0xa95a,	// (0x00045767) cell_touch_pane_ParamLimits

0xa95a,	// (0x00045767) cell_touch_pane

0x790d,	// (0x0004271a) scroll_sc2_down_pane_g1

0x790d,	// (0x0004271a) scroll_sc2_up_pane_g1

0x798f,	// (0x0004279c) bg_set_opt_pane_cp4_vc

0xd8fe,	// (0x0004870b) list_set_graphic_pane_vc_g1_ParamLimits

0xd8fe,	// (0x0004870b) list_set_graphic_pane_vc_g1

0xd90a,	// (0x00048717) list_set_graphic_pane_vc_g2_ParamLimits

0xd90a,	// (0x00048717) list_set_graphic_pane_vc_g2

0x0001,

0xf9cc,	// (0x0004a7d9) list_set_graphic_pane_vc_g_ParamLimits

0xf9cc,	// (0x0004a7d9) list_set_graphic_pane_vc_g

0xd916,	// (0x00048723) text_primary_small_cp13_vc_ParamLimits

0xd916,	// (0x00048723) text_primary_small_cp13_vc

0xd92e,	// (0x0004873b) list_set_graphic_pane_vc_ParamLimits

0xd92e,	// (0x0004873b) list_set_graphic_pane_vc

0x798f,	// (0x0004279c) input_focus_pane_cp2_vc

0x790d,	// (0x0004271a) setting_code_pane_vc_g1

0xd941,	// (0x0004874e) setting_code_pane_vc_t1

0xd94f,	// (0x0004875c) set_text_pane_vc_t1_ParamLimits

0xd94f,	// (0x0004875c) set_text_pane_vc_t1

0x798f,	// (0x0004279c) input_focus_pane_cp1_vc

0xd96a,	// (0x00048777) list_set_text_pane_vc

0x790d,	// (0x0004271a) setting_text_pane_vc_g1

0x798f,	// (0x0004279c) bg_set_opt_pane_cp2_vc

0xd974,	// (0x00048781) setting_slider_graphic_pane_vc_g1

0xd97c,	// (0x00048789) setting_slider_graphic_pane_vc_t1

0xd98a,	// (0x00048797) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d1,	// (0x0004a7de) setting_slider_graphic_pane_vc_t

0xd998,	// (0x000487a5) slider_set_pane_cp_vc

0xd9a0,	// (0x000487ad) slider_set_pane_vc_g1

0xd9a9,	// (0x000487b6) slider_set_pane_vc_g2

0x0006,

0xf9d6,	// (0x0004a7e3) slider_set_pane_vc_g

0x80a4,	// (0x00042eb1) set_opt_bg_pane_g1_copy1

0x80ac,	// (0x00042eb9) set_opt_bg_pane_g2_copy1

0xd9d5,	// (0x000487e2) set_opt_bg_pane_g3_copy1

0x80bc,	// (0x00042ec9) set_opt_bg_pane_g4_copy1

0x80c4,	// (0x00042ed1) set_opt_bg_pane_g5_copy1

0x80cc,	// (0x00042ed9) set_opt_bg_pane_g6_copy1

0xd9dd,	// (0x000487ea) set_opt_bg_pane_g7_copy1

0xd9e5,	// (0x000487f2) set_opt_bg_pane_g8_copy1

0xd9ed,	// (0x000487fa) set_opt_bg_pane_g9_copy1

0x798f,	// (0x0004279c) bg_set_opt_pane_cp_vc

0xd9f5,	// (0x00048802) setting_slider_pane_vc_t1

0xd97c,	// (0x00048789) setting_slider_pane_vc_t2

0xd98a,	// (0x00048797) setting_slider_pane_vc_t3

0x0002,

0xf9e5,	// (0x0004a7f2) setting_slider_pane_vc_t

0xd998,	// (0x000487a5) slider_set_pane_vc

0x50ea,	// (0x0003fef7) volume_set_pane_vc_g1

0x53d1,	// (0x000401de) volume_set_pane_vc_g2

0x53da,	// (0x000401e7) volume_set_pane_vc_g3

0x53e3,	// (0x000401f0) volume_set_pane_vc_g4

0x53ec,	// (0x000401f9) volume_set_pane_vc_g5

0x53f5,	// (0x00040202) volume_set_pane_vc_g6

0x53fe,	// (0x0004020b) volume_set_pane_vc_g7

0x5407,	// (0x00040214) volume_set_pane_vc_g8

0x5410,	// (0x0004021d) volume_set_pane_vc_g9

0x5419,	// (0x00040226) volume_set_pane_vc_g10

0x0009,

0xf9ec,	// (0x0004a7f9) volume_set_pane_vc_g

0xda04,	// (0x00048811) volume_set_pane_vc

0xda0c,	// (0x00048819) button_value_adjust_pane_cp1_vc

0xda16,	// (0x00048823) list_highlight_pane_cp2_vc

0xda1f,	// (0x0004882c) list_set_pane_vc_ParamLimits

0xda1f,	// (0x0004882c) list_set_pane_vc

0xda71,	// (0x0004887e) main_pane_set_vc_t1_ParamLimits

0xda71,	// (0x0004887e) main_pane_set_vc_t1

0xda86,	// (0x00048893) main_pane_set_vc_t2_ParamLimits

0xda86,	// (0x00048893) main_pane_set_vc_t2

0xda98,	// (0x000488a5) main_pane_set_vc_t3_ParamLimits

0xda98,	// (0x000488a5) main_pane_set_vc_t3

0xdaaa,	// (0x000488b7) main_pane_set_vc_t4_ParamLimits

0xdaaa,	// (0x000488b7) main_pane_set_vc_t4

0x0003,

0xfa01,	// (0x0004a80e) main_pane_set_vc_t_ParamLimits

0xfa01,	// (0x0004a80e) main_pane_set_vc_t

0xdabc,	// (0x000488c9) setting_code_pane_vc_ParamLimits

0xdabc,	// (0x000488c9) setting_code_pane_vc

0xdacb,	// (0x000488d8) setting_slider_graphic_pane_vc

0xdacb,	// (0x000488d8) setting_slider_pane_vc

0xdacb,	// (0x000488d8) setting_text_pane_vc

0xdacb,	// (0x000488d8) setting_volume_pane_vc

0xdad3,	// (0x000488e0) scroll_pane_cp121_vc

0x8040,	// (0x00042e4d) set_content_pane_vc

0xdadb,	// (0x000488e8) button_value_adjust_pane_g1

0xdae4,	// (0x000488f1) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0004a863) button_value_adjust_pane_g

0xdaed,	// (0x000488fa) form_field_slider_wide_pane_vc_t1_ParamLimits

0xdaed,	// (0x000488fa) form_field_slider_wide_pane_vc_t1

0xdb03,	// (0x00048910) form_field_slider_wide_pane_vc_t2_ParamLimits

0xdb03,	// (0x00048910) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0004a868) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0004a868) form_field_slider_wide_pane_vc_t

0x7b18,	// (0x00042925) input_focus_pane_cp10_vc_ParamLimits

0x7b18,	// (0x00042925) input_focus_pane_cp10_vc

0xdb2e,	// (0x0004893b) slider_cont_pane_cp1_vc_ParamLimits

0xdb2e,	// (0x0004893b) slider_cont_pane_cp1_vc

0xd9a0,	// (0x000487ad) slider_form_pane_g1_cp2

0xd9a9,	// (0x000487b6) slider_form_pane_g2_cp2

0xdb49,	// (0x00048956) form_field_slider_pane_vc_t3

0xdb57,	// (0x00048964) form_field_slider_pane_vc_t4

0xdb65,	// (0x00048972) slider_form_pane_vc_ParamLimits

0xdb65,	// (0x00048972) slider_form_pane_vc

0xdb72,	// (0x0004897f) form_field_slider_pane_vc_t1_ParamLimits

0xdb72,	// (0x0004897f) form_field_slider_pane_vc_t1

0xdb88,	// (0x00048995) form_field_slider_pane_vc_t2_ParamLimits

0xdb88,	// (0x00048995) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0004a87a) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0004a87a) form_field_slider_pane_vc_t

0x7b18,	// (0x00042925) input_focus_pane_cp9_vc_ParamLimits

0x7b18,	// (0x00042925) input_focus_pane_cp9_vc

0xdb9a,	// (0x000489a7) slider_cont_pane_vc_ParamLimits

0xdb9a,	// (0x000489a7) slider_cont_pane_vc

0xdbac,	// (0x000489b9) list_form_graphic_pane_cp_vc_ParamLimits

0xdbac,	// (0x000489b9) list_form_graphic_pane_cp_vc

0xc409,	// (0x00047216) form_field_popup_wide_pane_vc_g1

0xdbc1,	// (0x000489ce) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdbc1,	// (0x000489ce) form_field_popup_wide_pane_vc_t1

0x8055,	// (0x00042e62) input_focus_pane_cp8_vc_ParamLimits

0x8055,	// (0x00042e62) input_focus_pane_cp8_vc

0xdc00,	// (0x00048a0d) list_form_wide_pane_vc_ParamLimits

0xdc00,	// (0x00048a0d) list_form_wide_pane_vc

0xdc0c,	// (0x00048a19) list_form_graphic_pane_vc_g1

0xdc14,	// (0x00048a21) list_form_graphic_pane_vc_t1_ParamLimits

0xdc14,	// (0x00048a21) list_form_graphic_pane_vc_t1

0x79dd,	// (0x000427ea) list_highlight_pane_cp5_vc_ParamLimits

0x79dd,	// (0x000427ea) list_highlight_pane_cp5_vc

0xdc30,	// (0x00048a3d) list_form_graphic_pane_vc_ParamLimits

0xdc30,	// (0x00048a3d) list_form_graphic_pane_vc

0xc409,	// (0x00047216) form_field_popup_pane_vc_g1

0xdc46,	// (0x00048a53) form_field_popup_pane_vc_t1_ParamLimits

0xdc46,	// (0x00048a53) form_field_popup_pane_vc_t1

0x8055,	// (0x00042e62) input_focus_pane_cp7_vc_ParamLimits

0x8055,	// (0x00042e62) input_focus_pane_cp7_vc

0xdc5b,	// (0x00048a68) list_form_pane_vc_ParamLimits

0xdc5b,	// (0x00048a68) list_form_pane_vc

0xdc67,	// (0x00048a74) data_form_pane_vc_t1_ParamLimits

0xdc67,	// (0x00048a74) data_form_pane_vc_t1

0x80a4,	// (0x00042eb1) input_focus_pane_vc_g1

0x80ac,	// (0x00042eb9) input_focus_pane_vc_g2

0x80b4,	// (0x00042ec1) input_focus_pane_vc_g3

0x80bc,	// (0x00042ec9) input_focus_pane_vc_g4

0x80c4,	// (0x00042ed1) input_focus_pane_vc_g5

0x80cc,	// (0x00042ed9) input_focus_pane_vc_g6

0x80d4,	// (0x00042ee1) input_focus_pane_vc_g7

0x80dc,	// (0x00042ee9) input_focus_pane_vc_g8

0x80e4,	// (0x00042ef1) input_focus_pane_vc_g9

0x790d,	// (0x0004271a) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0004a479) input_focus_pane_vc_g

0xc3fd,	// (0x0004720a) data_form_pane_vc_ParamLimits

0xc3fd,	// (0x0004720a) data_form_pane_vc

0xc409,	// (0x00047216) form_field_data_pane_vc_g1

0xdc82,	// (0x00048a8f) form_field_data_pane_vc_t1_ParamLimits

0xdc82,	// (0x00048a8f) form_field_data_pane_vc_t1

0x8055,	// (0x00042e62) input_focus_pane_vc_ParamLimits

0x8055,	// (0x00042e62) input_focus_pane_vc

0xdc98,	// (0x00048aa5) button_value_adjust_pane_cp3_vc

0xdca0,	// (0x00048aad) button_value_adjust_pane_cp5_vc

0xdca8,	// (0x00048ab5) form_field_data_pane_vc_ParamLimits

0xdca8,	// (0x00048ab5) form_field_data_pane_vc

0xdcbf,	// (0x00048acc) form_field_data_pane_vc_cp2

0xdcc7,	// (0x00048ad4) form_field_data_wide_pane_vc_ParamLimits

0xdcc7,	// (0x00048ad4) form_field_data_wide_pane_vc

0xdcdd,	// (0x00048aea) form_field_data_wide_pane_vc_cp2

0xdce5,	// (0x00048af2) form_field_popup_pane_vc_ParamLimits

0xdce5,	// (0x00048af2) form_field_popup_pane_vc

0xdcfc,	// (0x00048b09) form_field_popup_wide_pane_vc_ParamLimits

0xdcfc,	// (0x00048b09) form_field_popup_wide_pane_vc

0xdd12,	// (0x00048b1f) form_field_slider_pane_vc_ParamLimits

0xdd12,	// (0x00048b1f) form_field_slider_pane_vc

0xdd25,	// (0x00048b32) form_field_slider_wide_pane_vc_ParamLimits

0xdd25,	// (0x00048b32) form_field_slider_wide_pane_vc

0xa978,	// (0x00045785) grid_touch_1_pane_ParamLimits

0xa978,	// (0x00045785) grid_touch_1_pane

0xa98c,	// (0x00045799) grid_touch_2_pane_ParamLimits

0xa98c,	// (0x00045799) grid_touch_2_pane

0xdd38,	// (0x00048b45) touch_pane_g1_ParamLimits

0xdd38,	// (0x00048b45) touch_pane_g1

0xdd46,	// (0x00048b53) cell_app_pane_cp_wide_ParamLimits

0xdd46,	// (0x00048b53) cell_app_pane_cp_wide

0xdd56,	// (0x00048b63) grid_popup_fast_wide_pane_ParamLimits

0xdd56,	// (0x00048b63) grid_popup_fast_wide_pane

0xdd6a,	// (0x00048b77) scroll_pane_cp19_ParamLimits

0xdd6a,	// (0x00048b77) scroll_pane_cp19

0x798f,	// (0x0004279c) bg_popup_window_pane_cp20

0xdd7e,	// (0x00048b8b) listscroll_popup_fast_wide_pane

0xa9b6,	// (0x000457c3) grid_indicator_nsta_pane

0xdd86,	// (0x00048b93) clock_nsta_pane_g1

0xdd8f,	// (0x00048b9c) clock_nsta_pane_t1

0xa9c2,	// (0x000457cf) cell_indicator_nsta_pane_ParamLimits

0xa9c2,	// (0x000457cf) cell_indicator_nsta_pane

0xdd38,	// (0x00048b45) cell_indicator_nsta_pane_g1

0xa9d9,	// (0x000457e6) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0004a88b) cell_indicator_nsta_pane_g

0xddab,	// (0x00048bb8) clock_nsta_pane_cp

0xddb3,	// (0x00048bc0) indicator_nsta_pane_cp

0xddbc,	// (0x00048bc9) nsta_clock_indic_pane_g1

0x7a21,	// (0x0004282e) grid_indicator_pane

0x84f5,	// (0x00043302) scroll_pane_cp29

0x4807,	// (0x0003f614) indicator_nsta_pane_cp2_ParamLimits

0x4807,	// (0x0003f614) indicator_nsta_pane_cp2

0x79dd,	// (0x000427ea) main_apps_wheel_pane

0xc5a8,	// (0x000473b5) form_midp_field_text_pane_ParamLimits

0xc6d5,	// (0x000474e2) scroll_bar_cp050_ParamLimits

0xde25,	// (0x00048c32) cell_indicator_pane_ParamLimits

0xde25,	// (0x00048c32) cell_indicator_pane

0xde3b,	// (0x00048c48) cell_indicator_pane_g1

0xa9e6,	// (0x000457f3) grid_wheel_folder_pane_ParamLimits

0xa9e6,	// (0x000457f3) grid_wheel_folder_pane

0xa9f4,	// (0x00045801) list_wheel_apps_pane_ParamLimits

0xa9f4,	// (0x00045801) list_wheel_apps_pane

0xaa00,	// (0x0004580d) main_apps_wheel_pane_g1_ParamLimits

0xaa00,	// (0x0004580d) main_apps_wheel_pane_g1

0xaa0c,	// (0x00045819) main_apps_wheel_pane_g2_ParamLimits

0xaa0c,	// (0x00045819) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0004a8a7) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0004a8a7) main_apps_wheel_pane_g

0xaa18,	// (0x00045825) main_apps_wheel_pane_t1_ParamLimits

0xaa18,	// (0x00045825) main_apps_wheel_pane_t1

0xaa2a,	// (0x00045837) list_wheel_apps_pane_g1

0xaa32,	// (0x0004583f) list_wheel_apps_pane_g2

0xaa3a,	// (0x00045847) list_wheel_apps_pane_g3

0xaa42,	// (0x0004584f) list_wheel_apps_pane_g4

0xaa4a,	// (0x00045857) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0004a8ac) list_wheel_apps_pane_g

0x79dd,	// (0x000427ea) navi_icon_text_pane

0x9f6c,	// (0x00044d79) aid_fill_nsta

0xde45,	// (0x00048c52) navi_icon_text_pane_g1

0xde51,	// (0x00048c5e) navi_icon_text_pane_t1

0xbd4a,	// (0x00046b57) list_set_graphic_pane_t1_ParamLimits

0xbd4a,	// (0x00046b57) list_set_graphic_pane_t1

0xcdc3,	// (0x00047bd0) popup_midp_note_alarm_window_t6_ParamLimits

0xcdc3,	// (0x00047bd0) popup_midp_note_alarm_window_t6

0xcdd5,	// (0x00047be2) popup_midp_note_alarm_window_t7_ParamLimits

0xcdd5,	// (0x00047be2) popup_midp_note_alarm_window_t7

0xcde7,	// (0x00047bf4) popup_midp_note_alarm_window_t8_ParamLimits

0xcde7,	// (0x00047bf4) popup_midp_note_alarm_window_t8

0xcdf9,	// (0x00047c06) popup_midp_note_alarm_window_t9_ParamLimits

0xcdf9,	// (0x00047c06) popup_midp_note_alarm_window_t9

0xce0b,	// (0x00047c18) popup_midp_note_alarm_window_t10_ParamLimits

0xce0b,	// (0x00047c18) popup_midp_note_alarm_window_t10

0xce1d,	// (0x00047c2a) popup_midp_note_alarm_window_t11_ParamLimits

0xce1d,	// (0x00047c2a) popup_midp_note_alarm_window_t11

0xce2f,	// (0x00047c3c) scroll_pane_cp17_ParamLimits

0xce2f,	// (0x00047c3c) scroll_pane_cp17

0x50ea,	// (0x0003fef7) volume_small_pane_cp_g1

0x5422,	// (0x0004022f) volume_small_pane_cp_g2

0x542b,	// (0x00040238) volume_small_pane_cp_g3

0x5434,	// (0x00040241) volume_small_pane_cp_g4

0x5117,	// (0x0003ff24) volume_small_pane_cp_g5

0x543d,	// (0x0004024a) volume_small_pane_cp_g6

0x5446,	// (0x00040253) volume_small_pane_cp_g7

0x544f,	// (0x0004025c) volume_small_pane_cp_g8

0x5458,	// (0x00040265) volume_small_pane_cp_g9

0x5461,	// (0x0004026e) volume_small_pane_cp_g10

0xbfed,	// (0x00046dfa) midp_ticker_pane_g1_ParamLimits

0xbff9,	// (0x00046e06) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x0004a545) midp_ticker_pane_g_ParamLimits

0xc005,	// (0x00046e12) midp_ticker_pane_t1_ParamLimits

0x9f82,	// (0x00044d8f) aid_fill_nsta_2

0xc6c1,	// (0x000474ce) list_form2_midp_pane

0xd5bb,	// (0x000483c8) midp_editing_number_pane_ParamLimits

0xd5c7,	// (0x000483d4) midp_ticker_pane_ParamLimits

0xde63,	// (0x00048c70) form2_midp_field_pane

0xde6b,	// (0x00048c78) scroll_pane_cp51

0xde8b,	// (0x00048c98) form2_midp_button_pane_ParamLimits

0xde8b,	// (0x00048c98) form2_midp_button_pane

0xde9d,	// (0x00048caa) form2_midp_content_pane_ParamLimits

0xde9d,	// (0x00048caa) form2_midp_content_pane

0xdeb7,	// (0x00048cc4) form2_midp_field_choice_group_pane

0xdebf,	// (0x00048ccc) form2_midp_field_pane_g1

0xdec7,	// (0x00048cd4) form2_midp_field_pane_g2

0xdecf,	// (0x00048cdc) form2_midp_field_pane_g3

0xded7,	// (0x00048ce4) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0004a8d1) form2_midp_field_pane_g

0xdedf,	// (0x00048cec) form2_midp_gauge_slider_pane

0xdee7,	// (0x00048cf4) form2_midp_gauge_wait_pane

0xdeef,	// (0x00048cfc) form2_midp_image_pane_ParamLimits

0xdeef,	// (0x00048cfc) form2_midp_image_pane

0xdf0a,	// (0x00048d17) form2_midp_label_pane_ParamLimits

0xdf0a,	// (0x00048d17) form2_midp_label_pane

0xaa7f,	// (0x0004588c) form2_midp_label_pane_cp_ParamLimits

0xaa7f,	// (0x0004588c) form2_midp_label_pane_cp

0xdf23,	// (0x00048d30) form2_midp_string_pane_ParamLimits

0xdf23,	// (0x00048d30) form2_midp_string_pane

0x760d,	// (0x0004241a) form2_midp_text_pane_ParamLimits

0x760d,	// (0x0004241a) form2_midp_text_pane

0xdf35,	// (0x00048d42) form2_midp_time_pane

0xdf45,	// (0x00048d52) input_focus_pane_cp51_ParamLimits

0xdf45,	// (0x00048d52) input_focus_pane_cp51

0xdf5d,	// (0x00048d6a) form2_midp_label_pane_t1_ParamLimits

0xdf5d,	// (0x00048d6a) form2_midp_label_pane_t1

0x7626,	// (0x00042433) form2_mdip_text_pane_t1_ParamLimits

0x7626,	// (0x00042433) form2_mdip_text_pane_t1

0x763f,	// (0x0004244c) form2_midp_time_pane_t1

0xdfa5,	// (0x00048db2) form2_midp_gauge_slider_pane_t1

0xaa9e,	// (0x000458ab) form2_midp_gauge_slider_pane_t2

0xaab0,	// (0x000458bd) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0004a8da) form2_midp_gauge_slider_pane_t

0xdfb7,	// (0x00048dc4) form2_midp_slider_pane

0xdfc3,	// (0x00048dd0) form2_midp_gauge_wait_pane_t1

0xdfd1,	// (0x00048dde) form2_midp_wait_pane_ParamLimits

0xdfd1,	// (0x00048dde) form2_midp_wait_pane

0xc447,	// (0x00047254) list_single_2graphic_pane_cp4_ParamLimits

0xc447,	// (0x00047254) list_single_2graphic_pane_cp4

0xdffc,	// (0x00048e09) list_single_midp_graphic_pane_cp_ParamLimits

0xdffc,	// (0x00048e09) list_single_midp_graphic_pane_cp

0x798f,	// (0x0004279c) list_highlight_pane_cp20

0xe01a,	// (0x00048e27) list_single_2graphic_pane_g1_cp4

0xd837,	// (0x00048644) list_single_2graphic_pane_g2_cp4

0xe022,	// (0x00048e2f) list_single_2graphic_pane_t1_cp4

0x79dd,	// (0x000427ea) list_highlight_pane_cp21

0xe031,	// (0x00048e3e) list_single_midp_graphic_pane_g4_cp

0xe040,	// (0x00048e4d) list_single_midp_graphic_pane_t1_cp

0xe055,	// (0x00048e62) form2_mdip_string_pane_t1_ParamLimits

0xe055,	// (0x00048e62) form2_mdip_string_pane_t1

0x798f,	// (0x0004279c) bg_wml_button_pane_cp2

0x790d,	// (0x0004271a) form2_midp_image_pane_g1

0x7fec,	// (0x00042df9) list_double_large_graphic_pane_g5_ParamLimits

0x7fec,	// (0x00042df9) list_double_large_graphic_pane_g5

0x973f,	// (0x0004454c) midp_form_pane_ParamLimits

0x79dd,	// (0x000427ea) main_apps_wheel_pane_ParamLimits

0x9d0e,	// (0x00044b1b) popup_preview_window_ParamLimits

0x9d0e,	// (0x00044b1b) popup_preview_window

0x4f6e,	// (0x0003fd7b) popup_touch_info_window_ParamLimits

0x4f6e,	// (0x0003fd7b) popup_touch_info_window

0x4f8c,	// (0x0003fd99) popup_touch_menu_window_ParamLimits

0x4f8c,	// (0x0003fd99) popup_touch_menu_window

0x7903,	// (0x00042710) bg_popup_sub_pane_cp6

0xe0bf,	// (0x00048ecc) list_touch_menu_pane

0xe0c7,	// (0x00048ed4) list_single_touch_menu_pane_ParamLimits

0xe0c7,	// (0x00048ed4) list_single_touch_menu_pane

0xe0de,	// (0x00048eeb) list_single_touch_menu_pane_t1

0x79dd,	// (0x000427ea) bg_popup_sub_pane_cp7_ParamLimits

0x79dd,	// (0x000427ea) bg_popup_sub_pane_cp7

0xe0ec,	// (0x00048ef9) heading_sub_pane

0xe0f4,	// (0x00048f01) list_touch_info_pane_ParamLimits

0xe0f4,	// (0x00048f01) list_touch_info_pane

0xe103,	// (0x00048f10) list_single_touch_info_pane_ParamLimits

0xe103,	// (0x00048f10) list_single_touch_info_pane

0xe114,	// (0x00048f21) list_single_touch_info_pane_t1

0xe122,	// (0x00048f2f) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0004a8e8) list_single_touch_info_pane_t

0xbfc3,	// (0x00046dd0) bg_popup_heading_pane_cp

0xe130,	// (0x00048f3d) heading_sub_pane_t1

0xc3c3,	// (0x000471d0) bg_popup_preview_window_pane_cp_ParamLimits

0xc3c3,	// (0x000471d0) bg_popup_preview_window_pane_cp

0xe0ec,	// (0x00048ef9) heading_preview_pane

0xe0f4,	// (0x00048f01) list_preview_pane_ParamLimits

0xe0f4,	// (0x00048f01) list_preview_pane

0xe13e,	// (0x00048f4b) popup_preview_window_g1

0xe103,	// (0x00048f10) list_single_preview_pane_ParamLimits

0xe103,	// (0x00048f10) list_single_preview_pane

0xe146,	// (0x00048f53) list_single_preview_pane_g1

0xe14e,	// (0x00048f5b) list_single_preview_pane_t1

0xe114,	// (0x00048f21) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0004a8ed) list_single_preview_pane_t

0xe15c,	// (0x00048f69) bg_popup_heading_pane_cp2_ParamLimits

0xe15c,	// (0x00048f69) bg_popup_heading_pane_cp2

0xe172,	// (0x00048f7f) heading_preview_pane_g1

0xe17a,	// (0x00048f87) heading_preview_pane_t1_ParamLimits

0xe17a,	// (0x00048f87) heading_preview_pane_t1

0x7a38,	// (0x00042845) soft_indicator_pane_t1_ParamLimits

0x7f16,	// (0x00042d23) scroll_pane_ParamLimits

0x83f1,	// (0x000431fe) scroll_sc2_left_pane

0x83fa,	// (0x00043207) scroll_sc2_right_pane

0x8419,	// (0x00043226) scroll_bg_pane_g1_ParamLimits

0x842e,	// (0x0004323b) scroll_bg_pane_g2_ParamLimits

0x8446,	// (0x00043253) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x0004a4d0) scroll_bg_pane_g_ParamLimits

0x8419,	// (0x00043226) scroll_handle_pane_g1_ParamLimits

0x8468,	// (0x00043275) scroll_handle_pane_g2_ParamLimits

0x8446,	// (0x00043253) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0004a4d7) scroll_handle_pane_g_ParamLimits

0x4b3b,	// (0x0003f948) popup_choice_list_window_ParamLimits

0x4b3b,	// (0x0003f948) popup_choice_list_window

0xc2a5,	// (0x000470b2) choice_list_pane

0xc31b,	// (0x00047128) cell_toolbar_pane_t1

0xc343,	// (0x00047150) toolbar_button_pane_ParamLimits

0xd1f2,	// (0x00047fff) ai_gene_pane_1_t2_ParamLimits

0xd1f2,	// (0x00047fff) ai_gene_pane_1_t2

0x0001,

0xf8e6,	// (0x0004a6f3) ai_gene_pane_1_t_ParamLimits

0xf8e6,	// (0x0004a6f3) ai_gene_pane_1_t

0xe197,	// (0x00048fa4) scroll_sc2_left_pane_g1

0xe197,	// (0x00048fa4) scroll_sc2_right_pane_g1

0x94e7,	// (0x000442f4) bg_popup_sub_pane_cp10

0xe1a1,	// (0x00048fae) list_choice_list_pane

0xe1b8,	// (0x00048fc5) list_single_choice_list_pane_ParamLimits

0xe1b8,	// (0x00048fc5) list_single_choice_list_pane

0xe1ca,	// (0x00048fd7) list_single_choice_list_pane_g1

0x81cd,	// (0x00042fda) list_single_choice_list_pane_t1_ParamLimits

0x81cd,	// (0x00042fda) list_single_choice_list_pane_t1

0xe1d2,	// (0x00048fdf) choice_list_pane_g1

0xe1da,	// (0x00048fe7) choice_list_pane_t1

0x7903,	// (0x00042710) input_focus_pane_cp11

0x8358,	// (0x00043165) title_pane_stacon_g2_ParamLimits

0x8358,	// (0x00043165) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x0004a4b6) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x0004a4b6) title_pane_stacon_g

0xbfc3,	// (0x00046dd0) cursor_press_pane

0x9a75,	// (0x00044882) popup_fep_hwr_window_ParamLimits

0x9a75,	// (0x00044882) popup_fep_hwr_window

0x4c33,	// (0x0003fa40) popup_fep_vkb_window_ParamLimits

0x4c33,	// (0x0003fa40) popup_fep_vkb_window

0xe1e8,	// (0x00048ff5) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0004a916) fep_vkb_side_pane_g_ParamLimits

0x549f,	// (0x000402ac) fep_hwr_candidate_pane_ParamLimits

0x549f,	// (0x000402ac) fep_hwr_candidate_pane

0x54c7,	// (0x000402d4) fep_hwr_side_pane_ParamLimits

0x54c7,	// (0x000402d4) fep_hwr_side_pane

0x54e7,	// (0x000402f4) fep_hwr_top_pane_ParamLimits

0x54e7,	// (0x000402f4) fep_hwr_top_pane

0x54ff,	// (0x0004030c) fep_hwr_write_pane_ParamLimits

0x54ff,	// (0x0004030c) fep_hwr_write_pane

0xfb09,	// (0x0004a916) fep_vkb_side_pane_g

0xe1f0,	// (0x00048ffd) fep_hwr_top_pane_g1

0xe202,	// (0x0004900f) fep_hwr_top_pane_g2

0x5539,	// (0x00040346) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0004a8f2) fep_hwr_top_pane_g

0x554e,	// (0x0004035b) fep_hwr_top_text_pane

0x8562,	// (0x0004336f) fep_hwr_top_text_pane_g1

0xe238,	// (0x00049045) fep_hwr_top_text_pane_t1

0x563c,	// (0x00040449) fep_hwr_candidate_pane_g1

0xe401,	// (0x0004920e) fep_vkb_keypad_pane_g3_ParamLimits

0xe401,	// (0x0004920e) fep_vkb_keypad_pane_g3

0xe423,	// (0x00049230) fep_vkb_keypad_pane_g4_ParamLimits

0xe423,	// (0x00049230) fep_vkb_keypad_pane_g4

0xe492,	// (0x0004929f) fep_vkb_bottom_pane_g2_ParamLimits

0xe492,	// (0x0004929f) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0004a91d) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0004a91d) fep_vkb_bottom_pane_g

0xe197,	// (0x00048fa4) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0004a927) cell_vkb_side_pane_g

0xe4d6,	// (0x000492e3) cell_vkb_side_pane_t1

0xe4e4,	// (0x000492f1) cell_vkb_side_pane_t1_copy1

0xe197,	// (0x00048fa4) bg_fep_vkb_candidate_pane_g2

0xe5b2,	// (0x000493bf) cell_vkb_candidate_pane_ParamLimits

0xe246,	// (0x00049053) aid_size_cell_vkb_ParamLimits

0xe246,	// (0x00049053) aid_size_cell_vkb

0xe5b2,	// (0x000493bf) cell_vkb_candidate_pane

0x5663,	// (0x00040470) bg_popup_fep_shadow_pane_g1

0xe2b0,	// (0x000490bd) fep_vkb_bottom_pane_ParamLimits

0xe2b0,	// (0x000490bd) fep_vkb_bottom_pane

0xe2ed,	// (0x000490fa) fep_vkb_candidate_pane_ParamLimits

0xe2ed,	// (0x000490fa) fep_vkb_candidate_pane

0xe309,	// (0x00049116) fep_vkb_keypad_pane_ParamLimits

0xe309,	// (0x00049116) fep_vkb_keypad_pane

0xe33d,	// (0x0004914a) fep_vkb_side_pane_ParamLimits

0xe33d,	// (0x0004914a) fep_vkb_side_pane

0xe369,	// (0x00049176) fep_vkb_top_pane_ParamLimits

0xe369,	// (0x00049176) fep_vkb_top_pane

0xe395,	// (0x000491a2) fep_vkb_top_pane_g1_ParamLimits

0xe395,	// (0x000491a2) fep_vkb_top_pane_g1

0xe3a4,	// (0x000491b1) fep_vkb_top_pane_g2_ParamLimits

0xe3a4,	// (0x000491b1) fep_vkb_top_pane_g2

0xe3b3,	// (0x000491c0) fep_vkb_top_pane_g3_ParamLimits

0xe3b3,	// (0x000491c0) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0004a90d) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0004a90d) fep_vkb_top_pane_g

0xe3d1,	// (0x000491de) fep_vkb_top_text_pane_ParamLimits

0xe3d1,	// (0x000491de) fep_vkb_top_text_pane

0xab1f,	// (0x0004592c) fep_vkb_side_pane_g1_ParamLimits

0xab1f,	// (0x0004592c) fep_vkb_side_pane_g1

0xe3f0,	// (0x000491fd) grid_vkb_side_pane_ParamLimits

0xe3f0,	// (0x000491fd) grid_vkb_side_pane

0x566b,	// (0x00040478) bg_popup_fep_shadow_pane_g2

0x5674,	// (0x00040481) bg_popup_fep_shadow_pane_g3

0x567c,	// (0x00040489) bg_popup_fep_shadow_pane_g4

0x5685,	// (0x00040492) bg_popup_fep_shadow_pane_g5

0x568d,	// (0x0004049a) bg_popup_fep_shadow_pane_g6

0x5695,	// (0x000404a2) bg_popup_fep_shadow_pane_g7

0x80bc,	// (0x00042ec9) bg_popup_fep_shadow_pane_g8

0xe441,	// (0x0004924e) grid_vkb_keypad_number_pane_ParamLimits

0xe441,	// (0x0004924e) grid_vkb_keypad_number_pane

0xe451,	// (0x0004925e) grid_vkb_keypad_pane_ParamLimits

0xe451,	// (0x0004925e) grid_vkb_keypad_pane

0xe477,	// (0x00049284) fep_vkb_bottom_pane_g1_ParamLimits

0xe477,	// (0x00049284) fep_vkb_bottom_pane_g1

0xe4a0,	// (0x000492ad) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe4a0,	// (0x000492ad) grid_vkb_keypad_bottom_left_pane

0xe4b5,	// (0x000492c2) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe4b5,	// (0x000492c2) grid_vkb_keypad_bottom_right_pane

0xe4ca,	// (0x000492d7) fep_vkb_top_text_pane_g1

0xab66,	// (0x00045973) fep_vkb_top_text_pane_t1

0xab78,	// (0x00045985) cell_vkb_side_pane_ParamLimits

0xab78,	// (0x00045985) cell_vkb_side_pane

0xe197,	// (0x00048fa4) cell_vkb_side_pane_g1

0xe4f2,	// (0x000492ff) cell_vkb_keypad_pane_ParamLimits

0xe4f2,	// (0x000492ff) cell_vkb_keypad_pane

0xe55f,	// (0x0004936c) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0004a93a) bg_popup_fep_shadow_pane_g

0x56a5,	// (0x000404b2) cell_hwr_side_pane_g1

0x56a5,	// (0x000404b2) cell_hwr_side_pane_g2

0xe569,	// (0x00049376) cell_vkb_keypad_pane_t1

0xab8e,	// (0x0004599b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xab8e,	// (0x0004599b) cell_vkb_keypad_bottom_left_pane

0xaba3,	// (0x000459b0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xaba3,	// (0x000459b0) cell_vkb_keypad_bottom_right_pane

0xe197,	// (0x00048fa4) cell_vkb_keypad_bottom_left_pane_g1

0xe197,	// (0x00048fa4) cell_vkb_keypad_bottom_right_pane_g1

0xe577,	// (0x00049384) cell_vkb_keypad_number_pane_ParamLimits

0xe577,	// (0x00049384) cell_vkb_keypad_number_pane

0xe596,	// (0x000493a3) cell_vkb_keypad_number_pane_g1

0xe5a0,	// (0x000493ad) cell_vkb_keypad_number_pane_g2

0xe5a9,	// (0x000493b6) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0004a92c) cell_vkb_keypad_number_pane_g

0xe569,	// (0x00049376) cell_vkb_keypad_number_pane_t1

0xe5cb,	// (0x000493d8) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x0004a94d) cell_hwr_side_pane_g

0xe5e4,	// (0x000493f1) cell_hwr_side_pane_t1

0x56af,	// (0x000404bc) cell_hwr_side_pane_t1_copy1

0x56bd,	// (0x000404ca) cell_hwr_candidate_pane_g1

0x56ec,	// (0x000404f9) cell_hwr_candidate_pane_t1

0xe197,	// (0x00048fa4) cell_vkb_candidate_pane_g2

0xe628,	// (0x00049435) cell_vkb_candidate_pane_t1

0x546a,	// (0x00040277) bg_popup_fep_shadow_pane_ParamLimits

0x546a,	// (0x00040277) bg_popup_fep_shadow_pane

0x5519,	// (0x00040326) bg_fep_hwr_top_pane_g4

0xe214,	// (0x00049021) bg_hwr_side_pane_g1_ParamLimits

0xe214,	// (0x00049021) bg_hwr_side_pane_g1

0xaada,	// (0x000458e7) cell_hwr_side_pane_ParamLimits

0xaada,	// (0x000458e7) cell_hwr_side_pane

0x55c5,	// (0x000403d2) fep_hwr_write_pane_g1_ParamLimits

0x55c5,	// (0x000403d2) fep_hwr_write_pane_g1

0x55d2,	// (0x000403df) fep_hwr_write_pane_g2_ParamLimits

0x55d2,	// (0x000403df) fep_hwr_write_pane_g2

0x55df,	// (0x000403ec) fep_hwr_write_pane_g3_ParamLimits

0x55df,	// (0x000403ec) fep_hwr_write_pane_g3

0xaafa,	// (0x00045907) fep_hwr_write_pane_g4_ParamLimits

0xaafa,	// (0x00045907) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0004a8f9) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0004a8f9) fep_hwr_write_pane_g

0x5519,	// (0x00040326) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5519,	// (0x00040326) bg_fep_hwr_candidate_pane_g2

0x5602,	// (0x0004040f) cell_hwr_candidate_pane_ParamLimits

0x5602,	// (0x0004040f) cell_hwr_candidate_pane

0x563c,	// (0x00040449) fep_hwr_candidate_pane_g1_ParamLimits

0xe274,	// (0x00049081) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe274,	// (0x00049081) bg_popup_fep_shadow_pane_cp2

0xe3c3,	// (0x000491d0) fep_vkb_top_pane_g4_ParamLimits

0xe3c3,	// (0x000491d0) fep_vkb_top_pane_g4

0xe3e2,	// (0x000491ef) fep_vkb_side_pane_g2_ParamLimits

0xe3e2,	// (0x000491ef) fep_vkb_side_pane_g2

0x0ce8,	// (0x0003baf5) list_setting_pane_t4_ParamLimits

0x0ce8,	// (0x0003baf5) list_setting_pane_t4

0x0d82,	// (0x0003bb8f) list_setting_number_pane_t5_ParamLimits

0x0d82,	// (0x0003bb8f) list_setting_number_pane_t5

0x965e,	// (0x0004446b) list_double_heading_pane_cp2_ParamLimits

0x965e,	// (0x0004446b) list_double_heading_pane_cp2

0xbe44,	// (0x00046c51) list_double_heading_pane_g1_cp2_ParamLimits

0xbe44,	// (0x00046c51) list_double_heading_pane_g1_cp2

0xe636,	// (0x00049443) list_double_heading_pane_g2_cp2_ParamLimits

0xe636,	// (0x00049443) list_double_heading_pane_g2_cp2

0xe64a,	// (0x00049457) list_double_heading_pane_t1_cp2_ParamLimits

0xe64a,	// (0x00049457) list_double_heading_pane_t1_cp2

0xe660,	// (0x0004946d) list_double_heading_pane_t2_cp2_ParamLimits

0xe660,	// (0x0004946d) list_double_heading_pane_t2_cp2

0x78fb,	// (0x00042708) aid_value_unit2

0x4437,	// (0x0003f244) popup_preview_fixed_window

0x7b26,	// (0x00042933) bg_popup_preview_window_pane_cp02

0xe672,	// (0x0004947f) list_preview_fixed_pane

0xe6b8,	// (0x000494c5) list_empty_pane_fp_ParamLimits

0xe6b8,	// (0x000494c5) list_empty_pane_fp

0xe6b8,	// (0x000494c5) list_single_cale_day_pane_fp_ParamLimits

0xe6b8,	// (0x000494c5) list_single_cale_day_pane_fp

0xe6b8,	// (0x000494c5) list_single_graphic_heading_pane_fp_ParamLimits

0xe6b8,	// (0x000494c5) list_single_graphic_heading_pane_fp

0xe6b8,	// (0x000494c5) list_single_graphic_pane_fp_ParamLimits

0xe6b8,	// (0x000494c5) list_single_graphic_pane_fp

0xe6b8,	// (0x000494c5) list_single_heading_pane_fp_ParamLimits

0xe6b8,	// (0x000494c5) list_single_heading_pane_fp

0xe6b8,	// (0x000494c5) list_single_pane_fp_ParamLimits

0xe6b8,	// (0x000494c5) list_single_pane_fp

0xe6cc,	// (0x000494d9) list_single_pane_fp_g1_ParamLimits

0xe6cc,	// (0x000494d9) list_single_pane_fp_g1

0x7fd4,	// (0x00042de1) list_single_pane_fp_g2_ParamLimits

0x7fd4,	// (0x00042de1) list_single_pane_fp_g2

0xd46d,	// (0x0004827a) list_single_pane_fp_g3_ParamLimits

0xd46d,	// (0x0004827a) list_single_pane_fp_g3

0xe6d8,	// (0x000494e5) list_single_pane_fp_g4_ParamLimits

0xe6d8,	// (0x000494e5) list_single_pane_fp_g4

0x0003,

0xfb53,	// (0x0004a960) list_single_pane_fp_g_ParamLimits

0xfb53,	// (0x0004a960) list_single_pane_fp_g

0x7652,	// (0x0004245f) list_single_pane_fp_t1_ParamLimits

0x7652,	// (0x0004245f) list_single_pane_fp_t1

0x7669,	// (0x00042476) list_single_graphic_pane_fp_g1_ParamLimits

0x7669,	// (0x00042476) list_single_graphic_pane_fp_g1

0xe6cc,	// (0x000494d9) list_single_graphic_pane_fp_g2_ParamLimits

0xe6cc,	// (0x000494d9) list_single_graphic_pane_fp_g2

0x7fd4,	// (0x00042de1) list_single_graphic_pane_fp_g3_ParamLimits

0x7fd4,	// (0x00042de1) list_single_graphic_pane_fp_g3

0xd46d,	// (0x0004827a) list_single_graphic_pane_fp_g4_ParamLimits

0xd46d,	// (0x0004827a) list_single_graphic_pane_fp_g4

0xe6d8,	// (0x000494e5) list_single_graphic_pane_fp_g5_ParamLimits

0xe6d8,	// (0x000494e5) list_single_graphic_pane_fp_g5

0x0004,

0xfb5c,	// (0x0004a969) list_single_graphic_pane_fp_g_ParamLimits

0xfb5c,	// (0x0004a969) list_single_graphic_pane_fp_g

0x7675,	// (0x00042482) list_single_graphic_pane_fp_t1_ParamLimits

0x7675,	// (0x00042482) list_single_graphic_pane_fp_t1

0x7669,	// (0x00042476) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7669,	// (0x00042476) list_single_graphic_heading_pane_fp_g1

0xe6cc,	// (0x000494d9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe6cc,	// (0x000494d9) list_single_graphic_heading_pane_fp_g2

0x7fd4,	// (0x00042de1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7fd4,	// (0x00042de1) list_single_graphic_heading_pane_fp_g3

0xd46d,	// (0x0004827a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd46d,	// (0x0004827a) list_single_graphic_heading_pane_fp_g4

0xe6d8,	// (0x000494e5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe6d8,	// (0x000494e5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0004a969) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0004a969) list_single_graphic_heading_pane_fp_g

0x768b,	// (0x00042498) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x768b,	// (0x00042498) list_single_graphic_heading_pane_fp_t1

0x76a1,	// (0x000424ae) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x76a1,	// (0x000424ae) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb67,	// (0x0004a974) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb67,	// (0x0004a974) list_single_graphic_heading_pane_fp_t

0x76b3,	// (0x000424c0) list_single_cale_day_pane_fp_g1_ParamLimits

0x76b3,	// (0x000424c0) list_single_cale_day_pane_fp_g1

0xe6e4,	// (0x000494f1) list_single_cale_day_pane_fp_g2_ParamLimits

0xe6e4,	// (0x000494f1) list_single_cale_day_pane_fp_g2

0xd481,	// (0x0004828e) list_single_cale_day_pane_fp_g3_ParamLimits

0xd481,	// (0x0004828e) list_single_cale_day_pane_fp_g3

0xd4a9,	// (0x000482b6) list_single_cale_day_pane_fp_g4_ParamLimits

0xd4a9,	// (0x000482b6) list_single_cale_day_pane_fp_g4

0xd4cd,	// (0x000482da) list_single_cale_day_pane_fp_g5_ParamLimits

0xd4cd,	// (0x000482da) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6c,	// (0x0004a979) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6c,	// (0x0004a979) list_single_cale_day_pane_fp_g

0x76eb,	// (0x000424f8) list_single_cale_day_pane_fp_t1_ParamLimits

0x76eb,	// (0x000424f8) list_single_cale_day_pane_fp_t1

0x7711,	// (0x0004251e) list_single_cale_day_pane_fp_t2_ParamLimits

0x7711,	// (0x0004251e) list_single_cale_day_pane_fp_t2

0x772a,	// (0x00042537) list_single_cale_day_pane_fp_t3_ParamLimits

0x772a,	// (0x00042537) list_single_cale_day_pane_fp_t3

0x0002,

0xfb77,	// (0x0004a984) list_single_cale_day_pane_fp_t_ParamLimits

0xfb77,	// (0x0004a984) list_single_cale_day_pane_fp_t

0xe6cc,	// (0x000494d9) list_empty_pane_fp_g1_ParamLimits

0xe6cc,	// (0x000494d9) list_empty_pane_fp_g1

0x7743,	// (0x00042550) list_empty_pane_fp_t1

0x7751,	// (0x0004255e) list_empty_pane_fp_t2

0x0001,

0xfb7e,	// (0x0004a98b) list_empty_pane_fp_t

0xe6cc,	// (0x000494d9) list_single_heading_pane_fp_g1_ParamLimits

0xe6cc,	// (0x000494d9) list_single_heading_pane_fp_g1

0x7fd4,	// (0x00042de1) list_single_heading_pane_fp_g2_ParamLimits

0x7fd4,	// (0x00042de1) list_single_heading_pane_fp_g2

0xd46d,	// (0x0004827a) list_single_heading_pane_fp_g3_ParamLimits

0xd46d,	// (0x0004827a) list_single_heading_pane_fp_g3

0x0002,

0xfb83,	// (0x0004a990) list_single_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0004a990) list_single_heading_pane_fp_g

0x775f,	// (0x0004256c) list_single_heading_pane_fp_t1_ParamLimits

0x775f,	// (0x0004256c) list_single_heading_pane_fp_t1

0x7771,	// (0x0004257e) list_single_heading_pane_fp_t2_ParamLimits

0x7771,	// (0x0004257e) list_single_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0004a997) list_single_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0004a997) list_single_heading_pane_fp_t

0x81e2,	// (0x00042fef) aid_size_cell_fast

0x7afb,	// (0x00042908) soft_indicator_pane_cp1_t1

0x821f,	// (0x0004302c) cell_app_pane_cp2_ParamLimits

0x821f,	// (0x0004302c) cell_app_pane_cp2

0x548c,	// (0x00040299) fep_hwr_candidate_drop_down_list_pane

0x5656,	// (0x00040463) fep_hwr_candidate_pane_g3_ParamLimits

0x5656,	// (0x00040463) fep_hwr_candidate_pane_g3

0x2349,	// (0x0003d156) fep_hwr_candidate_pane_g4_ParamLimits

0x2349,	// (0x0003d156) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0004a906) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0004a906) fep_hwr_candidate_pane_g

0xe2dc,	// (0x000490e9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe2dc,	// (0x000490e9) fep_vkb_candidate_drop_down_list_pane

0xe5d3,	// (0x000493e0) fep_vkb_candidate_pane_g3

0xe5db,	// (0x000493e8) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0004a933) fep_vkb_candidate_pane_g

0x56bd,	// (0x000404ca) cell_hwr_candidate_pane_g1_ParamLimits

0x56cb,	// (0x000404d8) cell_hwr_candidate_pane_g3_ParamLimits

0x56cb,	// (0x000404d8) cell_hwr_candidate_pane_g3

0x2599,	// (0x0003d3a6) cell_hwr_candidate_pane_g4_ParamLimits

0x2599,	// (0x0003d3a6) cell_hwr_candidate_pane_g4

0x0002,

0xfb45,	// (0x0004a952) cell_hwr_candidate_pane_g_ParamLimits

0xfb45,	// (0x0004a952) cell_hwr_candidate_pane_g

0xe5f2,	// (0x000493ff) cell_vkb_candidate_pane_g3_ParamLimits

0xe5f2,	// (0x000493ff) cell_vkb_candidate_pane_g3

0xe60d,	// (0x0004941a) cell_vkb_candidate_pane_g4_ParamLimits

0xe60d,	// (0x0004941a) cell_vkb_candidate_pane_g4

0xe6f0,	// (0x000494fd) cell_app_pane_cp2_g1_ParamLimits

0xe6f0,	// (0x000494fd) cell_app_pane_cp2_g1

0xe70e,	// (0x0004951b) cell_app_pane_cp2_g2_ParamLimits

0xe70e,	// (0x0004951b) cell_app_pane_cp2_g2

0x0001,

0xfb8f,	// (0x0004a99c) cell_app_pane_cp2_g_ParamLimits

0xfb8f,	// (0x0004a99c) cell_app_pane_cp2_g

0xe71a,	// (0x00049527) cell_app_pane_cp2_t1_ParamLimits

0xe71a,	// (0x00049527) cell_app_pane_cp2_t1

0x8055,	// (0x00042e62) grid_highlight_pane_cp1_ParamLimits

0x8055,	// (0x00042e62) grid_highlight_pane_cp1

0x5709,	// (0x00040516) cell_hwr_candidate_pane_cp1_ParamLimits

0x5709,	// (0x00040516) cell_hwr_candidate_pane_cp1

0x56bd,	// (0x000404ca) fep_hwr_candidate_drop_down_list_pane_g1

0x5727,	// (0x00040534) fep_hwr_candidate_drop_down_list_pane_g2

0x5734,	// (0x00040541) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x0004a9a1) fep_hwr_candidate_drop_down_list_pane_g

0x5741,	// (0x0004054e) fep_hwr_candidate_drop_down_list_scroll_pane

0x574a,	// (0x00040557) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x574a,	// (0x00040557) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5757,	// (0x00040564) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5757,	// (0x00040564) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5764,	// (0x00040571) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5764,	// (0x00040571) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5771,	// (0x0004057e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5771,	// (0x0004057e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x578c,	// (0x00040599) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x578c,	// (0x00040599) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x57a7,	// (0x000405b4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x57a7,	// (0x000405b4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x57c2,	// (0x000405cf) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x57c2,	// (0x000405cf) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x57dd,	// (0x000405ea) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x57dd,	// (0x000405ea) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x0004a9a8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x0004a9a8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xabbe,	// (0x000459cb) cell_vkb_candidate_pane_cp1_ParamLimits

0xabbe,	// (0x000459cb) cell_vkb_candidate_pane_cp1

0xe3c3,	// (0x000491d0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe3c3,	// (0x000491d0) fep_vkb_candidate_drop_down_list_pane_g1

0xe72c,	// (0x00049539) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe72c,	// (0x00049539) fep_vkb_candidate_drop_down_list_pane_g2

0xe739,	// (0x00049546) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe739,	// (0x00049546) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbac,	// (0x0004a9b9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbac,	// (0x0004a9b9) fep_vkb_candidate_drop_down_list_pane_g

0xe746,	// (0x00049553) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe746,	// (0x00049553) fep_vkb_candidate_drop_down_list_scroll_pane

0xe753,	// (0x00049560) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe753,	// (0x00049560) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe760,	// (0x0004956d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe760,	// (0x0004956d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe76c,	// (0x00049579) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe76c,	// (0x00049579) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe778,	// (0x00049585) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe778,	// (0x00049585) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe799,	// (0x000495a6) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe799,	// (0x000495a6) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe7ba,	// (0x000495c7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe7ba,	// (0x000495c7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe7db,	// (0x000495e8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe7db,	// (0x000495e8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe7fc,	// (0x00049609) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe7fc,	// (0x00049609) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb3,	// (0x0004a9c0) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb3,	// (0x0004a9c0) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x90e0,	// (0x00043eed) title_pane_g1_ParamLimits

0x90f7,	// (0x00043f04) title_pane_g2_ParamLimits

0xf529,	// (0x0004a336) title_pane_g_ParamLimits

0x8552,	// (0x0004335f) aid_call2_pane

0x855a,	// (0x00043367) aid_call_pane

0x8562,	// (0x0004336f) popup_clock_analogue_window_g1

0x8562,	// (0x0004336f) popup_clock_analogue_window_g2

0x4711,	// (0x0003f51e) popup_clock_analogue_window_g3

0x471a,	// (0x0003f527) popup_clock_analogue_window_g4

0x790d,	// (0x0004271a) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x0004a4e5) popup_clock_analogue_window_g

0x4722,	// (0x0003f52f) popup_clock_analogue_window_t1

0x4730,	// (0x0003f53d) clock_digital_number_pane_ParamLimits

0x4730,	// (0x0003f53d) clock_digital_number_pane

0x473c,	// (0x0003f549) clock_digital_number_pane_cp02_ParamLimits

0x473c,	// (0x0003f549) clock_digital_number_pane_cp02

0x4748,	// (0x0003f555) clock_digital_number_pane_cp03_ParamLimits

0x4748,	// (0x0003f555) clock_digital_number_pane_cp03

0x4754,	// (0x0003f561) clock_digital_number_pane_cp04_ParamLimits

0x4754,	// (0x0003f561) clock_digital_number_pane_cp04

0x4760,	// (0x0003f56d) clock_digital_separator_pane_ParamLimits

0x4760,	// (0x0003f56d) clock_digital_separator_pane

0x476c,	// (0x0003f579) popup_clock_digital_window_t1_ParamLimits

0x476c,	// (0x0003f579) popup_clock_digital_window_t1

0x790d,	// (0x0004271a) clock_digital_number_pane_g1

0x790d,	// (0x0004271a) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x0004a4f0) clock_digital_number_pane_g

0x790d,	// (0x0004271a) clock_digital_separator_pane_g1

0x790d,	// (0x0004271a) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x0004a4f0) clock_digital_separator_pane_g

0x9f6c,	// (0x00044d79) aid_fill_nsta_ParamLimits

0xa083,	// (0x00044e90) indicator_nsta_pane_ParamLimits

0xc24e,	// (0x0004705b) popup_clock_analogue_window

0xc24e,	// (0x0004705b) popup_clock_digital_window

0xa9b6,	// (0x000457c3) grid_indicator_nsta_pane_ParamLimits

0xdd9d,	// (0x00048baa) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0004a886) clock_nsta_pane_t

0x46d5,	// (0x0003f4e2) aid_size_max_handle

0x95c2,	// (0x000443cf) aid_size_min_handle

0xbfc3,	// (0x00046dd0) editor_scroll_pane

0xe817,	// (0x00049624) ex_editor_pane

0x81ab,	// (0x00042fb8) scroll_pane_cp13

0x7f43,	// (0x00042d50) scroll_pane_cp14

0xbb6c,	// (0x00046979) scroll_pane_cp36

0x966a,	// (0x00044477) list_single_graphic_hl_pane_cp2_ParamLimits

0x966a,	// (0x00044477) list_single_graphic_hl_pane_cp2

0x1c58,	// (0x0003ca65) list_single_graphic_hl_pane_ParamLimits

0x1c58,	// (0x0003ca65) list_single_graphic_hl_pane

0x7787,	// (0x00042594) aid_size_min_hl_cp1

0xe81f,	// (0x0004962c) list_highlight_pane_cp34_ParamLimits

0xe81f,	// (0x0004962c) list_highlight_pane_cp34

0xe830,	// (0x0004963d) list_single_graphic_hl_pane_g1_ParamLimits

0xe830,	// (0x0004963d) list_single_graphic_hl_pane_g1

0x100b,	// (0x0003be18) list_single_graphic_hl_pane_g2_ParamLimits

0x100b,	// (0x0003be18) list_single_graphic_hl_pane_g2

0x100b,	// (0x0003be18) list_single_graphic_hl_pane_g3_ParamLimits

0x100b,	// (0x0003be18) list_single_graphic_hl_pane_g3

0x7f4b,	// (0x00042d58) list_single_graphic_hl_pane_g4_ParamLimits

0x7f4b,	// (0x00042d58) list_single_graphic_hl_pane_g4

0x806f,	// (0x00042e7c) list_single_graphic_hl_pane_g5_ParamLimits

0x806f,	// (0x00042e7c) list_single_graphic_hl_pane_g5

0x0004,

0xfbc4,	// (0x0004a9d1) list_single_graphic_hl_pane_g_ParamLimits

0xfbc4,	// (0x0004a9d1) list_single_graphic_hl_pane_g

0x1017,	// (0x0003be24) list_single_graphic_hl_pane_t1_ParamLimits

0x1017,	// (0x0003be24) list_single_graphic_hl_pane_t1

0xe83d,	// (0x0004964a) aid_size_min_hl_cp2

0xe846,	// (0x00049653) list_highlight_pane_cp34_cp2_ParamLimits

0xe846,	// (0x00049653) list_highlight_pane_cp34_cp2

0xe830,	// (0x0004963d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe830,	// (0x0004963d) list_single_graphic_hl_pane_g1_cp2

0xe853,	// (0x00049660) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe853,	// (0x00049660) list_single_graphic_hl_pane_g2_cp2

0xe85f,	// (0x0004966c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe85f,	// (0x0004966c) list_single_graphic_hl_pane_g3_cp2

0xbe44,	// (0x00046c51) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbe44,	// (0x00046c51) list_single_graphic_hl_pane_g4_cp2

0xe636,	// (0x00049443) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe636,	// (0x00049443) list_single_graphic_hl_pane_g5_cp2

0x9887,	// (0x00044694) control_pane_g4_ParamLimits

0x9887,	// (0x00044694) control_pane_g4

0x94e7,	// (0x000442f4) bg_popup_sub_pane_cp10_ParamLimits

0xe1a1,	// (0x00048fae) list_choice_list_pane_ParamLimits

0xe1b0,	// (0x00048fbd) scroll_pane_cp23

0x7b26,	// (0x00042933) bg_popup_preview_window_pane_cp02_ParamLimits

0xe672,	// (0x0004947f) list_preview_fixed_pane_ParamLimits

0xe688,	// (0x00049495) list_preview_fixed_pane_cp_ParamLimits

0xe688,	// (0x00049495) list_preview_fixed_pane_cp

0xe694,	// (0x000494a1) popup_preview_fixed_window_g1_ParamLimits

0xe694,	// (0x000494a1) popup_preview_fixed_window_g1

0xe6a0,	// (0x000494ad) popup_preview_fixed_window_g2_ParamLimits

0xe6a0,	// (0x000494ad) popup_preview_fixed_window_g2

0x0002,

0xfb4c,	// (0x0004a959) popup_preview_fixed_window_g_ParamLimits

0xfb4c,	// (0x0004a959) popup_preview_fixed_window_g

0x4665,	// (0x0003f472) aid_navi_side_left_pane_ParamLimits

0x4675,	// (0x0003f482) aid_navi_side_right_pane_ParamLimits

0x4684,	// (0x0003f491) navi_icon_pane_stacon_ParamLimits

0x4694,	// (0x0003f4a1) navi_navi_pane_stacon_ParamLimits

0x4684,	// (0x0003f491) navi_text_pane_stacon_ParamLimits

0x4318,	// (0x0003f125) main_text_info_pane

0xe881,	// (0x0004968e) listscroll_text_info_pane

0xe889,	// (0x00049696) list_text_info_pane_ParamLimits

0xe889,	// (0x00049696) list_text_info_pane

0xe898,	// (0x000496a5) scroll_pane_cp24_ParamLimits

0xe898,	// (0x000496a5) scroll_pane_cp24

0xabde,	// (0x000459eb) list_text_info_pane_t1_ParamLimits

0xabde,	// (0x000459eb) list_text_info_pane_t1

0x99f5,	// (0x00044802) popup_fast_swap2_window_ParamLimits

0x99f5,	// (0x00044802) popup_fast_swap2_window

0xe8b6,	// (0x000496c3) aid_size_cell_fast2

0x7903,	// (0x00042710) bg_popup_window_pane_cp17

0xc6ed,	// (0x000474fa) heading_pane_cp2

0xc6f5,	// (0x00047502) listscroll_fast2_pane

0xe8c0,	// (0x000496cd) grid_fast2_pane

0xe8c8,	// (0x000496d5) listscroll_fast2_pane_g1

0xe8d0,	// (0x000496dd) listscroll_fast2_pane_g2

0x0001,

0xfbcf,	// (0x0004a9dc) listscroll_fast2_pane_g

0x81ab,	// (0x00042fb8) scroll_pane_cp26

0xe8d8,	// (0x000496e5) cell_fast2_pane_ParamLimits

0xe8d8,	// (0x000496e5) cell_fast2_pane

0xe8ee,	// (0x000496fb) cell_fast2_pane_g1

0xe8f7,	// (0x00049704) cell_fast2_pane_g2

0xe900,	// (0x0004970d) cell_fast2_pane_g3

0x0002,

0xfbd4,	// (0x0004a9e1) cell_fast2_pane_g

0x7da4,	// (0x00042bb1) grid_highlight_pane_cp9

0x4b21,	// (0x0003f92e) main_eswt_pane_ParamLimits

0x4b21,	// (0x0003f92e) main_eswt_pane

0xe8ad,	// (0x000496ba) list_single_text_info_pane

0xe908,	// (0x00049715) eswt_ctrl_button_pane

0xe908,	// (0x00049715) eswt_ctrl_canvas_pane

0xe910,	// (0x0004971d) eswt_ctrl_combo_pane

0xe908,	// (0x00049715) eswt_ctrl_default_pane

0xe908,	// (0x00049715) eswt_ctrl_label_pane

0xe918,	// (0x00049725) eswt_ctrl_wait_pane

0xe920,	// (0x0004972d) eswt_shell_pane

0x7903,	// (0x00042710) listscroll_eswt_app_pane

0xe93c,	// (0x00049749) popup_eswt_tasktip_window_ParamLimits

0xe93c,	// (0x00049749) popup_eswt_tasktip_window

0xc3c3,	// (0x000471d0) bg_popup_window_pane_cp18

0xe94d,	// (0x0004975a) eswt_control_pane_g1_ParamLimits

0xe94d,	// (0x0004975a) eswt_control_pane_g1

0xe95a,	// (0x00049767) eswt_control_pane_g2_ParamLimits

0xe95a,	// (0x00049767) eswt_control_pane_g2

0xe967,	// (0x00049774) eswt_control_pane_g3_ParamLimits

0xe967,	// (0x00049774) eswt_control_pane_g3

0xe974,	// (0x00049781) eswt_control_pane_g4_ParamLimits

0xe974,	// (0x00049781) eswt_control_pane_g4

0x0003,

0xfbdb,	// (0x0004a9e8) eswt_control_pane_g_ParamLimits

0xfbdb,	// (0x0004a9e8) eswt_control_pane_g

0x8055,	// (0x00042e62) bg_button_pane_ParamLimits

0x8055,	// (0x00042e62) bg_button_pane

0x7db9,	// (0x00042bc6) common_borders_pane_copy2_ParamLimits

0x7db9,	// (0x00042bc6) common_borders_pane_copy2

0xe981,	// (0x0004978e) control_button_pane_g1_ParamLimits

0xe981,	// (0x0004978e) control_button_pane_g1

0xe98d,	// (0x0004979a) control_button_pane_g2_ParamLimits

0xe98d,	// (0x0004979a) control_button_pane_g2

0xe999,	// (0x000497a6) control_button_pane_g3_ParamLimits

0xe999,	// (0x000497a6) control_button_pane_g3

0x0002,

0xfbe4,	// (0x0004a9f1) control_button_pane_g_ParamLimits

0xfbe4,	// (0x0004a9f1) control_button_pane_g

0xe9ad,	// (0x000497ba) control_button_pane_t1

0xe9bb,	// (0x000497c8) control_button_pane_t2

0x0001,

0xfbeb,	// (0x0004a9f8) control_button_pane_t

0xc34f,	// (0x0004715c) bg_button_pane_g1

0xc35f,	// (0x0004716c) bg_button_pane_g2

0xc357,	// (0x00047164) bg_button_pane_g3

0xc36f,	// (0x0004717c) bg_button_pane_g4

0xc367,	// (0x00047174) bg_button_pane_g5

0xc377,	// (0x00047184) bg_button_pane_g6

0xc37f,	// (0x0004718c) bg_button_pane_g7

0xc38f,	// (0x0004719c) bg_button_pane_g8

0xc387,	// (0x00047194) bg_button_pane_g9

0x0008,

0xf83a,	// (0x0004a647) bg_button_pane_g

0xe15c,	// (0x00048f69) common_borders_pane_ParamLimits

0xe15c,	// (0x00048f69) common_borders_pane

0xe94d,	// (0x0004975a) eswt_control_pane_g1_copy1_ParamLimits

0xe94d,	// (0x0004975a) eswt_control_pane_g1_copy1

0xe95a,	// (0x00049767) eswt_control_pane_g2_copy1_ParamLimits

0xe95a,	// (0x00049767) eswt_control_pane_g2_copy1

0xe967,	// (0x00049774) eswt_control_pane_g3_copy1_ParamLimits

0xe967,	// (0x00049774) eswt_control_pane_g3_copy1

0xe974,	// (0x00049781) eswt_control_pane_g4_copy1_ParamLimits

0xe974,	// (0x00049781) eswt_control_pane_g4_copy1

0xe197,	// (0x00048fa4) bg_eswt_ctrl_canvas_pane_g1

0xe15c,	// (0x00048f69) common_borders_pane_cp2_ParamLimits

0xe15c,	// (0x00048f69) common_borders_pane_cp2

0xe15c,	// (0x00048f69) common_borders_pane_cp3_ParamLimits

0xe15c,	// (0x00048f69) common_borders_pane_cp3

0xe9c9,	// (0x000497d6) separator_horizontal_pane

0x83fa,	// (0x00043207) separator_vertical_pane

0xe94d,	// (0x0004975a) eswt_control_pane_g1_copy2_ParamLimits

0xe94d,	// (0x0004975a) eswt_control_pane_g1_copy2

0xe95a,	// (0x00049767) eswt_control_pane_g2_copy2_ParamLimits

0xe95a,	// (0x00049767) eswt_control_pane_g2_copy2

0xe967,	// (0x00049774) eswt_control_pane_g3_copy2_ParamLimits

0xe967,	// (0x00049774) eswt_control_pane_g3_copy2

0xe974,	// (0x00049781) eswt_control_pane_g4_copy2_ParamLimits

0xe974,	// (0x00049781) eswt_control_pane_g4_copy2

0x7903,	// (0x00042710) common_borders_pane_cp4

0xe9d1,	// (0x000497de) separator_horizontal_pane_g1

0xe9da,	// (0x000497e7) separator_horizontal_pane_g2

0xe9e3,	// (0x000497f0) separator_horizontal_pane_g3

0x0002,

0xfbf0,	// (0x0004a9fd) separator_horizontal_pane_g

0xe94d,	// (0x0004975a) eswt_control_pane_g1_copy3_ParamLimits

0xe94d,	// (0x0004975a) eswt_control_pane_g1_copy3

0xe95a,	// (0x00049767) eswt_control_pane_g2_copy3_ParamLimits

0xe95a,	// (0x00049767) eswt_control_pane_g2_copy3

0xe967,	// (0x00049774) eswt_control_pane_g3_copy3_ParamLimits

0xe967,	// (0x00049774) eswt_control_pane_g3_copy3

0xe974,	// (0x00049781) eswt_control_pane_g4_copy3_ParamLimits

0xe974,	// (0x00049781) eswt_control_pane_g4_copy3

0x7903,	// (0x00042710) common_borders_pane_cp5

0xe9ec,	// (0x000497f9) separator_vertical_pane_g1

0xe9f5,	// (0x00049802) separator_vertical_pane_g2

0xe9fe,	// (0x0004980b) separator_vertical_pane_g3

0x0002,

0xfbf7,	// (0x0004aa04) separator_vertical_pane_g

0xe94d,	// (0x0004975a) eswt_control_pane_g1_copy4_ParamLimits

0xe94d,	// (0x0004975a) eswt_control_pane_g1_copy4

0xe95a,	// (0x00049767) eswt_control_pane_g2_copy4_ParamLimits

0xe95a,	// (0x00049767) eswt_control_pane_g2_copy4

0xe967,	// (0x00049774) eswt_control_pane_g3_copy4_ParamLimits

0xe967,	// (0x00049774) eswt_control_pane_g3_copy4

0xe974,	// (0x00049781) eswt_control_pane_g4_copy4_ParamLimits

0xe974,	// (0x00049781) eswt_control_pane_g4_copy4

0xabf9,	// (0x00045a06) eswt_ctrl_combo_button_pane

0xac01,	// (0x00045a0e) eswt_ctrl_input_pane

0xac09,	// (0x00045a16) popup_choice_list_window_cp70

0xac11,	// (0x00045a1e) eswt_ctrl_input_pane_t1

0x7903,	// (0x00042710) input_focus_pane_cp70

0xe15c,	// (0x00048f69) bg_button_pane_cp70_ParamLimits

0xe15c,	// (0x00048f69) bg_button_pane_cp70

0xd7f4,	// (0x00048601) eswt_ctrl_combo_button_pane_g1

0xea07,	// (0x00049814) wait_bar_pane_cp70

0xc3c3,	// (0x000471d0) bg_popup_window_pane_cp70_ParamLimits

0xc3c3,	// (0x000471d0) bg_popup_window_pane_cp70

0xea0f,	// (0x0004981c) popup_eswt_tasktip_window_t1

0xea25,	// (0x00049832) wait_bar_pane_cp71_ParamLimits

0xea25,	// (0x00049832) wait_bar_pane_cp71

0xea31,	// (0x0004983e) grid_eswt_app_pane

0x83f1,	// (0x000431fe) scroll_pane_cp70

0xac1f,	// (0x00045a2c) cell_eswt_app_pane_ParamLimits

0xac1f,	// (0x00045a2c) cell_eswt_app_pane

0xac47,	// (0x00045a54) cell_eswt_app_pane_g1_ParamLimits

0xac47,	// (0x00045a54) cell_eswt_app_pane_g1

0xac76,	// (0x00045a83) cell_eswt_app_pane_g2_ParamLimits

0xac76,	// (0x00045a83) cell_eswt_app_pane_g2

0x0001,

0xfbfe,	// (0x0004aa0b) cell_eswt_app_pane_g_ParamLimits

0xfbfe,	// (0x0004aa0b) cell_eswt_app_pane_g

0xac9f,	// (0x00045aac) cell_eswt_app_pane_t1_ParamLimits

0xac9f,	// (0x00045aac) cell_eswt_app_pane_t1

0xea3a,	// (0x00049847) grid_highlight_pane_cp70_ParamLimits

0xea3a,	// (0x00049847) grid_highlight_pane_cp70

0x7f4b,	// (0x00042d58) set_content_pane_g1

0xc142,	// (0x00046f4f) status_small_volume_pane

0x57f8,	// (0x00040605) status_small_volume_pane_g1

0x5800,	// (0x0004060d) volume_small2_pane

0x5809,	// (0x00040616) volume_small2_pane_g1

0x5812,	// (0x0004061f) volume_small2_pane_g2

0x581b,	// (0x00040628) volume_small2_pane_g3

0x5824,	// (0x00040631) volume_small2_pane_g4

0x582d,	// (0x0004063a) volume_small2_pane_g5

0x5836,	// (0x00040643) volume_small2_pane_g6

0x583f,	// (0x0004064c) volume_small2_pane_g7

0x5848,	// (0x00040655) volume_small2_pane_g8

0x5851,	// (0x0004065e) volume_small2_pane_g9

0x585a,	// (0x00040667) volume_small2_pane_g10

0x0009,

0xfc03,	// (0x0004aa10) volume_small2_pane_g

0xe4ca,	// (0x000492d7) fep_vkb_top_text_pane_g1_ParamLimits

0xab66,	// (0x00045973) fep_vkb_top_text_pane_t1_ParamLimits

0xe6ac,	// (0x000494b9) popup_preview_fixed_window_g3_ParamLimits

0xe6ac,	// (0x000494b9) popup_preview_fixed_window_g3

0x9f15,	// (0x00044d22) popup_toolbar_trans_pane

0xd573,	// (0x00048380) aid_height_set_list_ParamLimits

0xd57f,	// (0x0004838c) aid_size_parent_ParamLimits

0x94e7,	// (0x000442f4) list_highlight_pane_cp2_ParamLimits

0x7f4b,	// (0x00042d58) set_content_pane_g1_ParamLimits

0x821f,	// (0x0004302c) list_single_image_pane_ParamLimits

0x821f,	// (0x0004302c) list_single_image_pane

0xacd1,	// (0x00045ade) aid_size_cell_image_ParamLimits

0xacd1,	// (0x00045ade) aid_size_cell_image

0xacde,	// (0x00045aeb) grid_single_image_pane_ParamLimits

0xacde,	// (0x00045aeb) grid_single_image_pane

0x7f4b,	// (0x00042d58) list_single_image_pane_g1_ParamLimits

0x7f4b,	// (0x00042d58) list_single_image_pane_g1

0x806f,	// (0x00042e7c) list_single_image_pane_g2_ParamLimits

0x806f,	// (0x00042e7c) list_single_image_pane_g2

0x0001,

0xfc18,	// (0x0004aa25) list_single_image_pane_g_ParamLimits

0xfc18,	// (0x0004aa25) list_single_image_pane_g

0xea46,	// (0x00049853) list_single_image_pane_t1_ParamLimits

0xea46,	// (0x00049853) list_single_image_pane_t1

0xacec,	// (0x00045af9) cell_image_list_pane_ParamLimits

0xacec,	// (0x00045af9) cell_image_list_pane

0xad00,	// (0x00045b0d) cell_image_list_pane_g1

0xad09,	// (0x00045b16) cell_image_list_pane_g2

0x0001,

0xfc1d,	// (0x0004aa2a) cell_image_list_pane_g

0xea5c,	// (0x00049869) aid_size_cell_tb_trans_pane

0x8055,	// (0x00042e62) bg_tb_trans_pane

0xea6e,	// (0x0004987b) grid_tb_trans_pane

0xc34f,	// (0x0004715c) bg_tb_trans_pane_g1

0xc35f,	// (0x0004716c) bg_tb_trans_pane_g2

0xc357,	// (0x00047164) bg_tb_trans_pane_g3

0xc36f,	// (0x0004717c) bg_tb_trans_pane_g4

0xc367,	// (0x00047174) bg_tb_trans_pane_g5

0xc38f,	// (0x0004719c) bg_tb_trans_pane_g6

0xc387,	// (0x00047194) bg_tb_trans_pane_g7

0xc377,	// (0x00047184) bg_tb_trans_pane_g8

0xc37f,	// (0x0004718c) bg_tb_trans_pane_g9

0x0008,

0xfc22,	// (0x0004aa2f) bg_tb_trans_pane_g

0xea82,	// (0x0004988f) cell_toolbar_trans_pane_ParamLimits

0xea82,	// (0x0004988f) cell_toolbar_trans_pane

0xe197,	// (0x00048fa4) cell_toolbar_trans_pane_g1

0xaa63,	// (0x00045870) list_form2_midp_pane_t1

0xaa71,	// (0x0004587e) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0004a8cc) list_form2_midp_pane_t

0xde6b,	// (0x00048c78) scroll_pane_cp51_ParamLimits

0xdfe1,	// (0x00048dee) form2_midp_wait_pane_g1

0xdfea,	// (0x00048df7) form2_midp_wait_pane_g2

0xdff3,	// (0x00048e00) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0004a8e1) form2_midp_wait_pane_g

0x79dd,	// (0x000427ea) list_highlight_pane_cp21_ParamLimits

0xe031,	// (0x00048e3e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe040,	// (0x00048e4d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7366,	// (0x00042173) list_single_2graphic_im_pane_ParamLimits

0x7366,	// (0x00042173) list_single_2graphic_im_pane

0xad12,	// (0x00045b1f) list_single_2graphic_im_pane_g1_ParamLimits

0xad12,	// (0x00045b1f) list_single_2graphic_im_pane_g1

0xad23,	// (0x00045b30) list_single_2graphic_im_pane_g2_ParamLimits

0xad23,	// (0x00045b30) list_single_2graphic_im_pane_g2

0xad2f,	// (0x00045b3c) list_single_2graphic_im_pane_g3_ParamLimits

0xad2f,	// (0x00045b3c) list_single_2graphic_im_pane_g3

0x0003,

0xfc35,	// (0x0004aa42) list_single_2graphic_im_pane_g_ParamLimits

0xfc35,	// (0x0004aa42) list_single_2graphic_im_pane_g

0xad43,	// (0x00045b50) list_single_2graphic_im_pane_t1_ParamLimits

0xad43,	// (0x00045b50) list_single_2graphic_im_pane_t1

0xe6b8,	// (0x000494c5) list_single_graphic_2heading_pane_fp_ParamLimits

0xe6b8,	// (0x000494c5) list_single_graphic_2heading_pane_fp

0x7669,	// (0x00042476) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7669,	// (0x00042476) list_single_graphic_2heading_pane_fp_g1

0xe6cc,	// (0x000494d9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe6cc,	// (0x000494d9) list_single_graphic_2heading_pane_fp_g2

0x7fd4,	// (0x00042de1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7fd4,	// (0x00042de1) list_single_graphic_2heading_pane_fp_g3

0xd46d,	// (0x0004827a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd46d,	// (0x0004827a) list_single_graphic_2heading_pane_fp_g4

0xe6d8,	// (0x000494e5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe6d8,	// (0x000494e5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0004a969) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0004a969) list_single_graphic_2heading_pane_fp_g

0x779c,	// (0x000425a9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x779c,	// (0x000425a9) list_single_graphic_2heading_pane_fp_t1

0x76a1,	// (0x000424ae) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x76a1,	// (0x000424ae) list_single_graphic_2heading_pane_fp_t2

0x77b2,	// (0x000425bf) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x77b2,	// (0x000425bf) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3e,	// (0x0004aa4b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3e,	// (0x0004aa4b) list_single_graphic_2heading_pane_fp_t

0xe220,	// (0x0004902d) fep_hwr_write_pane_g5_ParamLimits

0xe220,	// (0x0004902d) fep_hwr_write_pane_g5

0xe22c,	// (0x00049039) fep_hwr_write_pane_g6_ParamLimits

0xe22c,	// (0x00049039) fep_hwr_write_pane_g6

0xe920,	// (0x0004972d) eswt_shell_pane_ParamLimits

0xc3c3,	// (0x000471d0) bg_popup_window_pane_cp18_ParamLimits

0xd3e5,	// (0x000481f2) heading_pane_cp70

0xea0f,	// (0x0004981c) popup_eswt_tasktip_window_t1_ParamLimits

0x9fb0,	// (0x00044dbd) aid_touch_tab_arrow_left

0x9fc4,	// (0x00044dd1) aid_touch_tab_arrow_right

0x9116,	// (0x00043f23) title_pane_g3_ParamLimits

0x9116,	// (0x00043f23) title_pane_g3

0x8025,	// (0x00042e32) set_value_pane_g1

0x9f15,	// (0x00044d22) popup_toolbar_trans_pane_ParamLimits

0xea5c,	// (0x00049869) aid_size_cell_tb_trans_pane_ParamLimits

0x8055,	// (0x00042e62) bg_tb_trans_pane_ParamLimits

0xea6e,	// (0x0004987b) grid_tb_trans_pane_ParamLimits

0x7b26,	// (0x00042933) cont_note_pane_ParamLimits

0x7b26,	// (0x00042933) cont_note_pane

0x7db9,	// (0x00042bc6) cont_snote2_single_text_pane_ParamLimits

0x7db9,	// (0x00042bc6) cont_snote2_single_text_pane

0x7db9,	// (0x00042bc6) cont_snote2_single_graphic_pane_ParamLimits

0x7db9,	// (0x00042bc6) cont_snote2_single_graphic_pane

0xc90b,	// (0x00047718) cont_note_wait_pane_ParamLimits

0xc90b,	// (0x00047718) cont_note_wait_pane

0xc90b,	// (0x00047718) cont_note_image_pane_ParamLimits

0xc90b,	// (0x00047718) cont_note_image_pane

0xeab4,	// (0x000498c1) popup_note2_window_g1_ParamLimits

0xeab4,	// (0x000498c1) popup_note2_window_g1

0xeae5,	// (0x000498f2) popup_note2_window_t1_ParamLimits

0xeae5,	// (0x000498f2) popup_note2_window_t1

0xeb2a,	// (0x00049937) popup_note2_window_t2_ParamLimits

0xeb2a,	// (0x00049937) popup_note2_window_t2

0xeb6f,	// (0x0004997c) popup_note2_window_t3_ParamLimits

0xeb6f,	// (0x0004997c) popup_note2_window_t3

0xebb4,	// (0x000499c1) popup_note2_window_t4_ParamLimits

0xebb4,	// (0x000499c1) popup_note2_window_t4

0x7baa,	// (0x000429b7) popup_note2_window_t5_ParamLimits

0x7baa,	// (0x000429b7) popup_note2_window_t5

0x0004,

0xfc4a,	// (0x0004aa57) popup_note2_window_t_ParamLimits

0xfc4a,	// (0x0004aa57) popup_note2_window_t

0xebe3,	// (0x000499f0) popup_note2_image_window_g1_ParamLimits

0xebe3,	// (0x000499f0) popup_note2_image_window_g1

0xebef,	// (0x000499fc) popup_note2_image_window_g2_ParamLimits

0xebef,	// (0x000499fc) popup_note2_image_window_g2

0x0001,

0xfc55,	// (0x0004aa62) popup_note2_image_window_g_ParamLimits

0xfc55,	// (0x0004aa62) popup_note2_image_window_g

0xec01,	// (0x00049a0e) popup_note2_image_window_t1_ParamLimits

0xec01,	// (0x00049a0e) popup_note2_image_window_t1

0xec19,	// (0x00049a26) popup_note2_image_window_t2_ParamLimits

0xec19,	// (0x00049a26) popup_note2_image_window_t2

0xec31,	// (0x00049a3e) popup_note2_image_window_t3_ParamLimits

0xec31,	// (0x00049a3e) popup_note2_image_window_t3

0x0002,

0xfc5a,	// (0x0004aa67) popup_note2_image_window_t_ParamLimits

0xfc5a,	// (0x0004aa67) popup_note2_image_window_t

0xc919,	// (0x00047726) popup_note2_wait_window_g1_ParamLimits

0xc919,	// (0x00047726) popup_note2_wait_window_g1

0xc925,	// (0x00047732) popup_note2_wait_window_g2_ParamLimits

0xc925,	// (0x00047732) popup_note2_wait_window_g2

0xc931,	// (0x0004773e) popup_note2_wait_window_g3_ParamLimits

0xc931,	// (0x0004773e) popup_note2_wait_window_g3

0x0002,

0xf81c,	// (0x0004a629) popup_note2_wait_window_g_ParamLimits

0xf81c,	// (0x0004a629) popup_note2_wait_window_g

0xec4d,	// (0x00049a5a) popup_note2_wait_window_t1_ParamLimits

0xec4d,	// (0x00049a5a) popup_note2_wait_window_t1

0xec6b,	// (0x00049a78) popup_note2_wait_window_t2_ParamLimits

0xec6b,	// (0x00049a78) popup_note2_wait_window_t2

0xec89,	// (0x00049a96) popup_note2_wait_window_t3_ParamLimits

0xec89,	// (0x00049a96) popup_note2_wait_window_t3

0xec9b,	// (0x00049aa8) popup_note2_wait_window_t4_ParamLimits

0xec9b,	// (0x00049aa8) popup_note2_wait_window_t4

0x0003,

0xfc61,	// (0x0004aa6e) popup_note2_wait_window_t_ParamLimits

0xfc61,	// (0x0004aa6e) popup_note2_wait_window_t

0xecad,	// (0x00049aba) wait_bar2_pane_ParamLimits

0xecad,	// (0x00049aba) wait_bar2_pane

0xecc5,	// (0x00049ad2) popup_snote2_single_text_window_g1_ParamLimits

0xecc5,	// (0x00049ad2) popup_snote2_single_text_window_g1

0xeced,	// (0x00049afa) popup_snote2_single_text_window_t1_ParamLimits

0xeced,	// (0x00049afa) popup_snote2_single_text_window_t1

0xed39,	// (0x00049b46) popup_snote2_single_text_window_t2_ParamLimits

0xed39,	// (0x00049b46) popup_snote2_single_text_window_t2

0xed85,	// (0x00049b92) popup_snote2_single_text_window_t3_ParamLimits

0xed85,	// (0x00049b92) popup_snote2_single_text_window_t3

0xedc6,	// (0x00049bd3) popup_snote2_single_text_window_t4_ParamLimits

0xedc6,	// (0x00049bd3) popup_snote2_single_text_window_t4

0xedfc,	// (0x00049c09) popup_snote2_single_text_window_t5_ParamLimits

0xedfc,	// (0x00049c09) popup_snote2_single_text_window_t5

0x0004,

0xfc6a,	// (0x0004aa77) popup_snote2_single_text_window_t_ParamLimits

0xfc6a,	// (0x0004aa77) popup_snote2_single_text_window_t

0xee27,	// (0x00049c34) popup_snote2_single_graphic_window_g1_ParamLimits

0xee27,	// (0x00049c34) popup_snote2_single_graphic_window_g1

0xee4f,	// (0x00049c5c) popup_snote2_single_graphic_window_g2_ParamLimits

0xee4f,	// (0x00049c5c) popup_snote2_single_graphic_window_g2

0x0001,

0xfc75,	// (0x0004aa82) popup_snote2_single_graphic_window_g_ParamLimits

0xfc75,	// (0x0004aa82) popup_snote2_single_graphic_window_g

0xee77,	// (0x00049c84) popup_snote2_single_graphic_window_t1_ParamLimits

0xee77,	// (0x00049c84) popup_snote2_single_graphic_window_t1

0xeec3,	// (0x00049cd0) popup_snote2_single_graphic_window_t2_ParamLimits

0xeec3,	// (0x00049cd0) popup_snote2_single_graphic_window_t2

0xed85,	// (0x00049b92) popup_snote2_single_graphic_window_t3_ParamLimits

0xed85,	// (0x00049b92) popup_snote2_single_graphic_window_t3

0xedc6,	// (0x00049bd3) popup_snote2_single_graphic_window_t4_ParamLimits

0xedc6,	// (0x00049bd3) popup_snote2_single_graphic_window_t4

0xedfc,	// (0x00049c09) popup_snote2_single_graphic_window_t5_ParamLimits

0xedfc,	// (0x00049c09) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7a,	// (0x0004aa87) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7a,	// (0x0004aa87) popup_snote2_single_graphic_window_t

0xde04,	// (0x00048c11) clock_nsta_pane_cp2_t1

0xde04,	// (0x00048c11) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0004a8a2) clock_nsta_pane_cp2_t

0x7057,	// (0x00041e64) form_field_data_wide_pane_g1_ParamLimits

0x7f4b,	// (0x00042d58) form_field_data_wide_pane_g2_ParamLimits

0x7f4b,	// (0x00042d58) form_field_data_wide_pane_g2

0x806f,	// (0x00042e7c) form_field_data_wide_pane_g3_ParamLimits

0x806f,	// (0x00042e7c) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0004a468) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0004a468) form_field_data_wide_pane_g

0xa9a0,	// (0x000457ad) grid_touch_3_pane_ParamLimits

0xa9a0,	// (0x000457ad) grid_touch_3_pane

0xad74,	// (0x00045b81) cell_touch_3_pane_ParamLimits

0xad74,	// (0x00045b81) cell_touch_3_pane

0xe197,	// (0x00048fa4) cell_touch_3_pane_g1

0xe197,	// (0x00048fa4) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0004a927) cell_touch_3_pane_g

0x7c02,	// (0x00042a0f) cont_query_data_pane

0x7c0a,	// (0x00042a17) cont_query_data_pane_cp1

0xef0f,	// (0x00049d1c) button_value_adjust_pane_cp7

0xef17,	// (0x00049d24) query_popup_pane_cp3

0xbb7d,	// (0x0004698a) bg_popup_sub_pane_cp22_ParamLimits

0x478b,	// (0x0003f598) navi_navi_volume_pane_cp2

0x47a3,	// (0x0003f5b0) popup_side_volume_key_window_g2

0x47af,	// (0x0003f5bc) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x0004a4fe) popup_side_volume_key_window_g

0x47c9,	// (0x0003f5d6) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x0004a505) popup_side_volume_key_window_t

0xbdc7,	// (0x00046bd4) popup_side_volume_key_window_ParamLimits

0x0b10,	// (0x0003b91d) list_double_graphic_pane_g4_ParamLimits

0x0b10,	// (0x0003b91d) list_double_graphic_pane_g4

0x1c43,	// (0x0003ca50) list_single_2heading_msg_pane_ParamLimits

0x1c43,	// (0x0003ca50) list_single_2heading_msg_pane

0x1cb8,	// (0x0003cac5) list_single_2heading_msg_pane_g1_ParamLimits

0x1cb8,	// (0x0003cac5) list_single_2heading_msg_pane_g1

0x1cc4,	// (0x0003cad1) list_single_2heading_msg_pane_g2_ParamLimits

0x1cc4,	// (0x0003cad1) list_single_2heading_msg_pane_g2

0x1cd7,	// (0x0003cae4) list_single_2heading_msg_pane_g3_ParamLimits

0x1cd7,	// (0x0003cae4) list_single_2heading_msg_pane_g3

0x1ce3,	// (0x0003caf0) list_single_2heading_msg_pane_g4_ParamLimits

0x1ce3,	// (0x0003caf0) list_single_2heading_msg_pane_g4

0x0003,

0xfc85,	// (0x0004aa92) list_single_2heading_msg_pane_g_ParamLimits

0xfc85,	// (0x0004aa92) list_single_2heading_msg_pane_g

0x102d,	// (0x0003be3a) list_single_2heading_msg_pane_t1_ParamLimits

0x102d,	// (0x0003be3a) list_single_2heading_msg_pane_t1

0x1055,	// (0x0003be62) list_single_2heading_msg_pane_t2_ParamLimits

0x1055,	// (0x0003be62) list_single_2heading_msg_pane_t2

0x10c0,	// (0x0003becd) list_single_2heading_msg_pane_t3_ParamLimits

0x10c0,	// (0x0003becd) list_single_2heading_msg_pane_t3

0x7890,	// (0x0004269d) list_single_2heading_msg_pane_t4_ParamLimits

0x7890,	// (0x0004269d) list_single_2heading_msg_pane_t4

0x0003,

0xfc8e,	// (0x0004aa9b) list_single_2heading_msg_pane_t_ParamLimits

0xfc8e,	// (0x0004aa9b) list_single_2heading_msg_pane_t

0x7999,	// (0x000427a6) title_pane_g4_ParamLimits

0x7999,	// (0x000427a6) title_pane_g4

0x45db,	// (0x0003f3e8) title_pane_stacon_g3_ParamLimits

0x45db,	// (0x0003f3e8) title_pane_stacon_g3

0xeaa8,	// (0x000498b5) list_single_2graphic_im_pane_g4_ParamLimits

0xeaa8,	// (0x000498b5) list_single_2graphic_im_pane_g4

0xd20f,	// (0x0004801c) popup_side_volume_key_window_cp

0xd760,	// (0x0004856d) main_idle_act2_pane_t1

0x4fe2,	// (0x0003fdef) toolbar_button_pane_g10

0x94a6,	// (0x000442b3) popup_toolbar_window_cp1

0xddf5,	// (0x00048c02) clock_nsta_pane_cp_t1

0xddf5,	// (0x00048c02) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0004a89d) clock_nsta_pane_cp_t

0x478b,	// (0x0003f598) navi_navi_volume_pane_cp2_ParamLimits

0x4797,	// (0x0003f5a4) popup_side_volume_key_window_g1_ParamLimits

0x47a3,	// (0x0003f5b0) popup_side_volume_key_window_g2_ParamLimits

0x47af,	// (0x0003f5bc) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x0004a4fe) popup_side_volume_key_window_g_ParamLimits

0x5478,	// (0x00040285) fep_hwr_aid_pane

0x5519,	// (0x00040326) bg_fep_hwr_top_pane_g4_ParamLimits

0xe1f0,	// (0x00048ffd) fep_hwr_top_pane_g1_ParamLimits

0xe202,	// (0x0004900f) fep_hwr_top_pane_g2_ParamLimits

0x5539,	// (0x00040346) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0004a8f2) fep_hwr_top_pane_g_ParamLimits

0x554e,	// (0x0004035b) fep_hwr_top_text_pane_ParamLimits

0xd00f,	// (0x00047e1c) aid_touch_tab_arrow_arrow_2

0xd018,	// (0x00047e25) aid_touch_tab_arrow_left_2

0x548c,	// (0x00040299) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x54bf,	// (0x000402cc) fep_hwr_prediction_pane

0xe335,	// (0x00049142) fep_vkb_prediction_pane

0xab46,	// (0x00045953) fep_vkb_side_pane_g3_ParamLimits

0xab46,	// (0x00045953) fep_vkb_side_pane_g3

0x56bd,	// (0x000404ca) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5727,	// (0x00040534) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5734,	// (0x00040541) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb94,	// (0x0004a9a1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5863,	// (0x00040670) fep_hwr_prediction_pane_g1

0x586d,	// (0x0004067a) fep_hwr_prediction_pane_g2

0x5875,	// (0x00040682) fep_hwr_prediction_pane_g3

0x587d,	// (0x0004068a) fep_hwr_prediction_pane_g4

0x0003,

0xfc97,	// (0x0004aaa4) fep_hwr_prediction_pane_g

0xef28,	// (0x00049d35) fep_vkb_prediction_pane_g1

0xef32,	// (0x00049d3f) fep_vkb_prediction_pane_g2

0xef3a,	// (0x00049d47) fep_vkb_prediction_pane_g3

0xef42,	// (0x00049d4f) fep_vkb_prediction_pane_g4

0x0003,

0xfca0,	// (0x0004aaad) fep_vkb_prediction_pane_g

0x52b0,	// (0x000400bd) slider_set_pane_g3

0x52c4,	// (0x000400d1) slider_set_pane_g4

0x52dc,	// (0x000400e9) slider_set_pane_g5

0x52b0,	// (0x000400bd) slider_set_pane_g6

0xa698,	// (0x000454a5) slider_set_pane_g7

0xd5a2,	// (0x000483af) slider_form_pane_g3

0xd5ab,	// (0x000483b8) slider_form_pane_g4

0xd5b3,	// (0x000483c0) slider_form_pane_g5

0xd5a2,	// (0x000483af) slider_form_pane_g6

0xa7f4,	// (0x00045601) slider_form_pane_g7

0xd9b1,	// (0x000487be) slider_set_pane_vc_g3

0xd9ba,	// (0x000487c7) slider_set_pane_vc_g4

0xd9c3,	// (0x000487d0) slider_set_pane_vc_g5

0xd9b1,	// (0x000487be) slider_set_pane_vc_g6

0xd9cc,	// (0x000487d9) slider_set_pane_vc_g7

0xd9b1,	// (0x000487be) slider_form_pane_vc_g1

0xd9ba,	// (0x000487c7) slider_form_pane_vc_g2

0xd9c3,	// (0x000487d0) slider_form_pane_vc_g3

0xd9b1,	// (0x000487be) slider_form_pane_vc_g4

0xdb40,	// (0x0004894d) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0004a86f) slider_form_pane_vc_g

0x4318,	// (0x0003f125) main_idle_act3_pane

0xef4a,	// (0x00049d57) ai3_links_pane

0xadbb,	// (0x00045bc8) popup_ai3_data_window_ParamLimits

0xadbb,	// (0x00045bc8) popup_ai3_data_window

0x7903,	// (0x00042710) grid_ai3_links_pane

0xadd3,	// (0x00045be0) cell_ai3_links_pane_ParamLimits

0xadd3,	// (0x00045be0) cell_ai3_links_pane

0xef53,	// (0x00049d60) bg_popup_sub_pane_cp11

0xef60,	// (0x00049d6d) cell_ai3_links_pane_g1

0x7903,	// (0x00042710) bg_popup_sub_pane_cp12

0xef85,	// (0x00049d92) heading_ai3_data_pane

0xef8d,	// (0x00049d9a) list_ai3_gene_pane

0xef99,	// (0x00049da6) popup_ai3_data_window_g1

0xefa1,	// (0x00049dae) heading_ai3_data_pane_g1

0xefa9,	// (0x00049db6) heading_ai3_data_pane_t1

0xefb7,	// (0x00049dc4) list_double_ai3_gene_pane_ParamLimits

0xefb7,	// (0x00049dc4) list_double_ai3_gene_pane

0xefc4,	// (0x00049dd1) list_single_ai3_gene_pane_ParamLimits

0xefc4,	// (0x00049dd1) list_single_ai3_gene_pane

0xe15c,	// (0x00048f69) list_highlight_pane_cp7_ParamLimits

0xe15c,	// (0x00048f69) list_highlight_pane_cp7

0xefd1,	// (0x00049dde) list_single_a13_gene_pane_t1_ParamLimits

0xefd1,	// (0x00049dde) list_single_a13_gene_pane_t1

0xefe8,	// (0x00049df5) list_single_ai3_gene_pane_g1

0xeff1,	// (0x00049dfe) list_single_ai3_gene_pane_g2

0x0001,

0xfca9,	// (0x0004aab6) list_single_ai3_gene_pane_g

0xeff9,	// (0x00049e06) list_double_ai3_gene_pane_g1_ParamLimits

0xeff9,	// (0x00049e06) list_double_ai3_gene_pane_g1

0xf005,	// (0x00049e12) list_double_ai3_gene_pane_t1_ParamLimits

0xf005,	// (0x00049e12) list_double_ai3_gene_pane_t1

0xf021,	// (0x00049e2e) list_double_ai3_gene_pane_t2_ParamLimits

0xf021,	// (0x00049e2e) list_double_ai3_gene_pane_t2

0xf036,	// (0x00049e43) list_double_ai3_gene_pane_t3_ParamLimits

0xf036,	// (0x00049e43) list_double_ai3_gene_pane_t3

0x0002,

0xfcae,	// (0x0004aabb) list_double_ai3_gene_pane_t_ParamLimits

0xfcae,	// (0x0004aabb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x77c8,	// (0x000425d5) aid_size_min_col_2

0xada7,	// (0x00045bb4) aid_size_min_msg_ParamLimits

0xada7,	// (0x00045bb4) aid_size_min_msg

0xab5a,	// (0x00045967) fep_vkb_top_text_pane_g2_ParamLimits

0xab5a,	// (0x00045967) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0004a922) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0004a922) fep_vkb_top_text_pane_g

0x4318,	// (0x0003f125) main_hc_apps_shell_pane

0xf053,	// (0x00049e60) grid_hc_apps_pane_ParamLimits

0xf053,	// (0x00049e60) grid_hc_apps_pane

0xf065,	// (0x00049e72) list_hc_apps_pane

0xf06d,	// (0x00049e7a) scroll_pane_cp37_ParamLimits

0xf06d,	// (0x00049e7a) scroll_pane_cp37

0xade9,	// (0x00045bf6) cell_hc_apps_pane_ParamLimits

0xade9,	// (0x00045bf6) cell_hc_apps_pane

0xae83,	// (0x00045c90) cell_hc_apps_pane_g1_ParamLimits

0xae83,	// (0x00045c90) cell_hc_apps_pane_g1

0xf079,	// (0x00049e86) cell_hc_apps_pane_g2_ParamLimits

0xf079,	// (0x00049e86) cell_hc_apps_pane_g2

0xf095,	// (0x00049ea2) cell_hc_apps_pane_g3_ParamLimits

0xf095,	// (0x00049ea2) cell_hc_apps_pane_g3

0x0002,

0xfcb5,	// (0x0004aac2) cell_hc_apps_pane_g_ParamLimits

0xfcb5,	// (0x0004aac2) cell_hc_apps_pane_g

0xaeaf,	// (0x00045cbc) cell_hc_apps_pane_t1_ParamLimits

0xaeaf,	// (0x00045cbc) cell_hc_apps_pane_t1

0x7b26,	// (0x00042933) grid_highlight_pane_cp10_ParamLimits

0x7b26,	// (0x00042933) grid_highlight_pane_cp10

0xaeed,	// (0x00045cfa) list_single_hc_apps_pane_ParamLimits

0xaeed,	// (0x00045cfa) list_single_hc_apps_pane

0xaf19,	// (0x00045d26) list_single_hc_apps_pane_g1

0x1cfb,	// (0x0003cb08) list_single_hc_apps_pane_g2

0x0001,

0xfcbc,	// (0x0004aac9) list_single_hc_apps_pane_g

0x1d14,	// (0x0003cb21) list_single_hc_apps_pane_g2_copy1

0x112e,	// (0x0003bf3b) list_single_hc_apps_pane_t1

0x79dd,	// (0x000427ea) bg_set_opt_pane_cp_ParamLimits

0x4529,	// (0x0003f336) setting_slider_pane_t1_ParamLimits

0x91e3,	// (0x00043ff0) setting_slider_pane_t2_ParamLimits

0x91fc,	// (0x00044009) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0004a346) setting_slider_pane_t_ParamLimits

0x456f,	// (0x0003f37c) slider_set_pane_ParamLimits

0x4a0b,	// (0x0003f818) control_pane_g5_ParamLimits

0x4a0b,	// (0x0003f818) control_pane_g5

0xd55e,	// (0x0004836b) slider_set_pane_g1_ParamLimits

0x52a4,	// (0x000400b1) slider_set_pane_g2_ParamLimits

0x52b0,	// (0x000400bd) slider_set_pane_g3_ParamLimits

0x52c4,	// (0x000400d1) slider_set_pane_g4_ParamLimits

0x52dc,	// (0x000400e9) slider_set_pane_g5_ParamLimits

0x52b0,	// (0x000400bd) slider_set_pane_g6_ParamLimits

0xa698,	// (0x000454a5) slider_set_pane_g7_ParamLimits

0xf938,	// (0x0004a745) slider_set_pane_g_ParamLimits

0x79dd,	// (0x000427ea) navi_icon_text_pane_ParamLimits

0x9f82,	// (0x00044d8f) aid_fill_nsta_2_ParamLimits

0x9fb0,	// (0x00044dbd) aid_touch_tab_arrow_left_ParamLimits

0x9fc4,	// (0x00044dd1) aid_touch_tab_arrow_right_ParamLimits

0xa060,	// (0x00044e6d) clock_nsta_pane_ParamLimits

0xcff1,	// (0x00047dfe) navi_icon_pane_g1_ParamLimits

0xcffd,	// (0x00047e0a) navi_text_pane_t1_ParamLimits

0xde45,	// (0x00048c52) navi_icon_text_pane_g1_ParamLimits

0xde51,	// (0x00048c5e) navi_icon_text_pane_t1_ParamLimits

0xaf19,	// (0x00045d26) list_single_hc_apps_pane_g1_ParamLimits

0x1cfb,	// (0x0003cb08) list_single_hc_apps_pane_g2_ParamLimits

0xfcbc,	// (0x0004aac9) list_single_hc_apps_pane_g_ParamLimits

0x1d14,	// (0x0003cb21) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x112e,	// (0x0003bf3b) list_single_hc_apps_pane_t1_ParamLimits

0x902e,	// (0x00043e3b) popup_toolbar2_fixed_window_ParamLimits

0x902e,	// (0x00043e3b) popup_toolbar2_fixed_window

0x9f0d,	// (0x00044d1a) popup_toolbar2_float_window

0x7903,	// (0x00042710) bg_popup_sub_pane_cp27

0xf0b7,	// (0x00049ec4) grid_toolbar2_float_pane

0x7903,	// (0x00042710) bg_popup_sub_pane_cp26

0xf0b7,	// (0x00049ec4) grid_toolbar2_fixed_pane

0xaf32,	// (0x00045d3f) cell_toolbar2_fixed_pane_ParamLimits

0xaf32,	// (0x00045d3f) cell_toolbar2_fixed_pane

0xaf4d,	// (0x00045d5a) cell_toolbar2_fixed_pane_g1

0xf0bf,	// (0x00049ecc) toolbar2_fixed_button_pane

0xc34f,	// (0x0004715c) toolbar2_fixed_button_pane_g1

0xc35f,	// (0x0004716c) toolbar2_fixed_button_pane_g2

0xc357,	// (0x00047164) toolbar2_fixed_button_pane_g3

0xc36f,	// (0x0004717c) toolbar2_fixed_button_pane_g4

0xc367,	// (0x00047174) toolbar2_fixed_button_pane_g5

0xc377,	// (0x00047184) toolbar2_fixed_button_pane_g6

0xc37f,	// (0x0004718c) toolbar2_fixed_button_pane_g7

0xc38f,	// (0x0004719c) toolbar2_fixed_button_pane_g8

0xc387,	// (0x00047194) toolbar2_fixed_button_pane_g9

0x0008,

0xf83a,	// (0x0004a647) toolbar2_fixed_button_pane_g

0xf0c7,	// (0x00049ed4) cell_toolbar2_float_pane_ParamLimits

0xf0c7,	// (0x00049ed4) cell_toolbar2_float_pane

0xf0d8,	// (0x00049ee5) cell_toolbar2_float_pane_g1

0xf0bf,	// (0x00049ecc) toolbar2_fixed_button_pane_cp

0xab0f,	// (0x0004591c) fep_vkb_accented_list_pane_ParamLimits

0xab0f,	// (0x0004591c) fep_vkb_accented_list_pane

0x569d,	// (0x000404aa) bg_popup_fep_shadow_pane_g9

0xbfc3,	// (0x00046dd0) bg_popup_fep_shadow_pane_cp3

0x8192,	// (0x00042f9f) list_accented_list_pane

0xf0e1,	// (0x00049eee) list_single_accented_list_pane_ParamLimits

0xf0e1,	// (0x00049eee) list_single_accented_list_pane

0xbfc3,	// (0x00046dd0) list_highlight_pane_cp10

0xf0f2,	// (0x00049eff) list_single_accented_list_pane_t1

0x9e4f,	// (0x00044c5c) popup_slider_window_ParamLimits

0x9e4f,	// (0x00044c5c) popup_slider_window

0xef1f,	// (0x00049d2c) aid_indentation_list_msg

0xb02c,	// (0x00045e39) bg_popup_window_pane_cp19

0xf158,	// (0x00049f65) popup_slider_window_g1

0xf174,	// (0x00049f81) popup_slider_window_g2

0xf190,	// (0x00049f9d) popup_slider_window_g3

0x0005,

0xfcc1,	// (0x0004aace) popup_slider_window_g

0xf1ac,	// (0x00049fb9) popup_slider_window_t1

0xf1f0,	// (0x00049ffd) small_volume_slider_vertical_pane

0xe197,	// (0x00048fa4) small_volume_slider_vertical_pane_g1

0xe197,	// (0x00048fa4) small_volume_slider_vertical_pane_g2

0xf20c,	// (0x0004a019) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd3,	// (0x0004aae0) small_volume_slider_vertical_pane_g

0x8fb2,	// (0x00043dbf) area_side_right_pane_ParamLimits

0x8fb2,	// (0x00043dbf) area_side_right_pane

0xb0e4,	// (0x00045ef1) aid_size_side_button_ParamLimits

0xb0e4,	// (0x00045ef1) aid_size_side_button

0xb0fd,	// (0x00045f0a) grid_sctrl_middle_pane_ParamLimits

0xb0fd,	// (0x00045f0a) grid_sctrl_middle_pane

0x58b5,	// (0x000406c2) sctrl_sk_bottom_pane

0x58c6,	// (0x000406d3) sctrl_sk_top_pane

0x58d8,	// (0x000406e5) aid_touch_sctrl_top

0x58e5,	// (0x000406f2) bg_sctrl_sk_pane_ParamLimits

0x58e5,	// (0x000406f2) bg_sctrl_sk_pane

0x58f3,	// (0x00040700) sctrl_sk_top_pane_g1

0x5900,	// (0x0004070d) sctrl_sk_top_pane_t1

0x58d8,	// (0x000406e5) aid_touch_sctrl_bottom

0x58e5,	// (0x000406f2) bg_sctrl_sk_pane_cp_ParamLimits

0x58e5,	// (0x000406f2) bg_sctrl_sk_pane_cp

0x591b,	// (0x00040728) sctrl_sk_bottom_pane_g1

0x5900,	// (0x0004070d) sctrl_sk_bottom_pane_t1

0xb113,	// (0x00045f20) cell_sctrl_middle_pane_ParamLimits

0xb113,	// (0x00045f20) cell_sctrl_middle_pane

0xb124,	// (0x00045f31) aid_touch_sctrl_middle_ParamLimits

0xb124,	// (0x00045f31) aid_touch_sctrl_middle

0xb131,	// (0x00045f3e) bg_sctrl_middle_pane_ParamLimits

0xb131,	// (0x00045f3e) bg_sctrl_middle_pane

0x623b,	// (0x00041048) cell_sctrl_middle_pane_g1_ParamLimits

0x623b,	// (0x00041048) cell_sctrl_middle_pane_g1

0xb13f,	// (0x00045f4c) cell_sctrl_middle_pane_g2_ParamLimits

0xb13f,	// (0x00045f4c) cell_sctrl_middle_pane_g2

0x0001,

0xfcdf,	// (0x0004aaec) cell_sctrl_middle_pane_g_ParamLimits

0xfcdf,	// (0x0004aaec) cell_sctrl_middle_pane_g

0xc34f,	// (0x0004715c) bg_sctrl_middle_pane_g1

0xc357,	// (0x00047164) bg_sctrl_middle_pane_g2

0xc35f,	// (0x0004716c) bg_sctrl_middle_pane_g3

0xc367,	// (0x00047174) bg_sctrl_middle_pane_g4

0xc36f,	// (0x0004717c) bg_sctrl_middle_pane_g5

0xc377,	// (0x00047184) bg_sctrl_middle_pane_g6

0xc37f,	// (0x0004718c) bg_sctrl_middle_pane_g7

0xc387,	// (0x00047194) bg_sctrl_middle_pane_g8

0x0007,

0xfce4,	// (0x0004aaf1) bg_sctrl_middle_pane_g

0xc38f,	// (0x0004719c) bg_sctrl_middle_pane_g8_copy1

0xc34f,	// (0x0004715c) bg_sctrl_sk_pane_g1

0xc35f,	// (0x0004716c) bg_sctrl_sk_pane_g2

0xc357,	// (0x00047164) bg_sctrl_sk_pane_g3

0x0008,

0xf83a,	// (0x0004a647) bg_sctrl_sk_pane_g

0x7edb,	// (0x00042ce8) aid_size_touch_scroll_bar

0xc36f,	// (0x0004717c) bg_sctrl_sk_pane_g4

0xc367,	// (0x00047174) bg_sctrl_sk_pane_g5

0xc377,	// (0x00047184) bg_sctrl_sk_pane_g6

0xc37f,	// (0x0004718c) bg_sctrl_sk_pane_g7

0xc38f,	// (0x0004719c) bg_sctrl_sk_pane_g8

0xc387,	// (0x00047194) bg_sctrl_sk_pane_g9

0x4bab,	// (0x0003f9b8) popup_fep_china_hwr2_fs_candidate_window

0x9a4a,	// (0x00044857) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9a4a,	// (0x00044857) popup_fep_china_hwr2_fs_control_window

0x56bd,	// (0x000404ca) sctrl_sk_top_pane_g2

0x0001,

0xfcda,	// (0x0004aae7) sctrl_sk_top_pane_g

0xb14c,	// (0x00045f59) aid_fep_china_hwr2_fs_cell_ParamLimits

0xb14c,	// (0x00045f59) aid_fep_china_hwr2_fs_cell

0xb160,	// (0x00045f6d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xb160,	// (0x00045f6d) bg_popup_fep_shadow_pane_cp4

0xb177,	// (0x00045f84) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xb177,	// (0x00045f84) bg_popup_fep_shadow_pane_cp5

0xb189,	// (0x00045f96) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xb189,	// (0x00045f96) popup_fep_china_hwr2_fs_control_bar_grid

0xb19d,	// (0x00045faa) popup_fep_china_hwr2_fs_control_funtion_grid

0xf215,	// (0x0004a022) aid_fep_china_hwr2_fs_candi_cell

0x7903,	// (0x00042710) bg_popup_fep_shadow_pane_cp6

0xf21f,	// (0x0004a02c) popup_fep_china_hwr2_fs_candidate_grid

0xb1a5,	// (0x00045fb2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xb1a5,	// (0x00045fb2) cell_fep_china_hwr2_fs_funtion_grid

0xe197,	// (0x00048fa4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xf227,	// (0x0004a034) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xf227,	// (0x0004a034) cell_fep_china_hwr2_fs_funtion_grid_g1

0xf235,	// (0x0004a042) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xf235,	// (0x0004a042) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf5,	// (0x0004ab02) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf5,	// (0x0004ab02) cell_fep_china_hwr2_fs_funtion_grid_g

0xb1bd,	// (0x00045fca) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xb1bd,	// (0x00045fca) cell_fep_china_hwr2_fs_funtion_grid_t1

0xb1d2,	// (0x00045fdf) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xb1d2,	// (0x00045fdf) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfa,	// (0x0004ab07) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfa,	// (0x0004ab07) cell_fep_china_hwr2_fs_funtion_grid_t

0xf24b,	// (0x0004a058) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xf253,	// (0x0004a060) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xf25b,	// (0x0004a068) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcff,	// (0x0004ab0c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xf263,	// (0x0004a070) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xf263,	// (0x0004a070) cell_fep_china_hwr2_fs_candidate_grid

0xf27c,	// (0x0004a089) popup_fep_china_hwr2_fs_candidate_grid_g20

0xf284,	// (0x0004a091) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe197,	// (0x00048fa4) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe197,	// (0x00048fa4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0004a927) cell_fep_china_hwr2_fs_candidate_grid_g

0xf28c,	// (0x0004a099) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc1b4,	// (0x00046fc1) clock_nsta_pane_cp_24_ParamLimits

0xc1b4,	// (0x00046fc1) clock_nsta_pane_cp_24

0xc211,	// (0x0004701e) indicator_nsta_pane_cp_24_ParamLimits

0xc211,	// (0x0004701e) indicator_nsta_pane_cp_24

0xcf0b,	// (0x00047d18) heading_pane_g1

0x0001,

0xf89f,	// (0x0004a6ac) heading_pane_g

0xa8c8,	// (0x000456d5) grid_sct_catagory_button_pane

0xd513,	// (0x00048320) scroll_pane_cp5_ParamLimits

0xde77,	// (0x00048c84) button_value_adjust_pane_cp5_ParamLimits

0xde77,	// (0x00048c84) button_value_adjust_pane_cp5

0xdf35,	// (0x00048d42) form2_midp_time_pane_ParamLimits

0xf29a,	// (0x0004a0a7) cell_sct_catagory_button_pane_ParamLimits

0xf29a,	// (0x0004a0a7) cell_sct_catagory_button_pane

0xe15c,	// (0x00048f69) bg_button_pane_cp01_ParamLimits

0xe15c,	// (0x00048f69) bg_button_pane_cp01

0xe197,	// (0x00048fa4) cell_sct_catagory_button_pane_g1

0x9ebe,	// (0x00044ccb) popup_tb_extension_window

0xb1ee,	// (0x00045ffb) aid_size_cell_ext_ParamLimits

0xb1ee,	// (0x00045ffb) aid_size_cell_ext

0x7db9,	// (0x00042bc6) bg_tb_trans_pane_cp1_ParamLimits

0x7db9,	// (0x00042bc6) bg_tb_trans_pane_cp1

0xb214,	// (0x00046021) grid_tb_ext_pane_ParamLimits

0xb214,	// (0x00046021) grid_tb_ext_pane

0xb24a,	// (0x00046057) cell_tb_ext_pane_ParamLimits

0xb24a,	// (0x00046057) cell_tb_ext_pane

0xb26e,	// (0x0004607b) cell_tb_ext_pane_g1_ParamLimits

0xb26e,	// (0x0004607b) cell_tb_ext_pane_g1

0xf2ac,	// (0x0004a0b9) cell_tb_ext_pane_t1

0x7b26,	// (0x00042933) list_highlight_pane_cp11_ParamLimits

0x7b26,	// (0x00042933) list_highlight_pane_cp11

0x9043,	// (0x00043e50) popup_uni_indicator_window_ParamLimits

0x9043,	// (0x00043e50) popup_uni_indicator_window

0x8055,	// (0x00042e62) bg_popup_sub_pane_cp14

0xf2c7,	// (0x0004a0d4) list_uniindi_pane

0xf2d3,	// (0x0004a0e0) uniindi_top_pane

0x7b26,	// (0x00042933) bg_uniindi_top_pane

0xf2f2,	// (0x0004a0ff) uniindi_top_pane_g1

0xf308,	// (0x0004a115) uniindi_top_pane_g2

0x0003,

0xfd06,	// (0x0004ab13) uniindi_top_pane_g

0xf332,	// (0x0004a13f) uniindi_top_pane_t1

0xf35c,	// (0x0004a169) list_single_uniindi_pane_ParamLimits

0xf35c,	// (0x0004a169) list_single_uniindi_pane

0xe197,	// (0x00048fa4) bg_uniindi_top_pane_g1

0xf36e,	// (0x0004a17b) list_single_uniindi_pane_g1

0xf381,	// (0x0004a18e) list_single_uniindi_pane_t1

0x4318,	// (0x0003f125) control_bg_pane

0xf3a6,	// (0x0004a1b3) bg_sctrl_sk_pane_cp1

0xf3af,	// (0x0004a1bc) bg_sctrl_sk_pane_cp2

0xf3b8,	// (0x0004a1c5) control_bg_pane_g1

0xf3c1,	// (0x0004a1ce) control_bg_pane_g2

0x0001,

0xfd0f,	// (0x0004ab1c) control_bg_pane_g

0xdd38,	// (0x00048b45) cell_indicator_nsta_pane_g1_ParamLimits

0xa9d9,	// (0x000457e6) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0004a88b) cell_indicator_nsta_pane_g_ParamLimits

0x763f,	// (0x0004244c) form2_midp_time_pane_t1_ParamLimits

0x546a,	// (0x00040277) main_idle_act4_pane_ParamLimits

0x546a,	// (0x00040277) main_idle_act4_pane

0x9ebe,	// (0x00044ccb) popup_tb_extension_window_ParamLimits

0xb234,	// (0x00046041) tb_ext_find_pane_ParamLimits

0xb234,	// (0x00046041) tb_ext_find_pane

0xf3ca,	// (0x0004a1d7) ai_gene_pane_1_cp1

0xc057,	// (0x00046e64) ai_gene_pane_2_cp1

0xf3d2,	// (0x0004a1df) list_single_idle_plugin_calendar_pane

0xf3db,	// (0x0004a1e8) list_single_idle_plugin_notification_pane

0xf3e4,	// (0x0004a1f1) list_single_idle_plugin_player_pane

0xb28b,	// (0x00046098) list_single_idle_plugin_shortcut_pane_ParamLimits

0xb28b,	// (0x00046098) list_single_idle_plugin_shortcut_pane

0xb2b3,	// (0x000460c0) main_idle_act4_pane_t1

0xb2c9,	// (0x000460d6) main_idle_act4_pane_t2

0x0001,

0xfd14,	// (0x0004ab21) main_idle_act4_pane_t

0xb2df,	// (0x000460ec) middle_sk_idle_act4_pane_ParamLimits

0xb2df,	// (0x000460ec) middle_sk_idle_act4_pane

0xb2fb,	// (0x00046108) popup_clock_digital_analogue_window_cp2

0xb321,	// (0x0004612e) shortcut_wheel_idle_act4_pane_ParamLimits

0xb321,	// (0x0004612e) shortcut_wheel_idle_act4_pane

0xe197,	// (0x00048fa4) shortcut_wheel_idle_act4_pane_g1

0xe197,	// (0x00048fa4) shortcut_wheel_idle_act4_pane_g2

0xe197,	// (0x00048fa4) shortcut_wheel_idle_act4_pane_g3

0xe197,	// (0x00048fa4) shortcut_wheel_idle_act4_pane_g4

0xe197,	// (0x00048fa4) shortcut_wheel_idle_act4_pane_g5

0xf3ed,	// (0x0004a1fa) shortcut_wheel_idle_act4_pane_g6

0xf3f5,	// (0x0004a202) shortcut_wheel_idle_act4_pane_g7

0xf3fd,	// (0x0004a20a) shortcut_wheel_idle_act4_pane_g8

0xf405,	// (0x0004a212) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd19,	// (0x0004ab26) shortcut_wheel_idle_act4_pane_g

0x3821,	// (0x0003e62e) middle_sk_idle_act4_pane_g1_ParamLimits

0x3821,	// (0x0003e62e) middle_sk_idle_act4_pane_g1

0xb39c,	// (0x000461a9) middle_sk_idle_act4_pane_g2_ParamLimits

0xb39c,	// (0x000461a9) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3c,	// (0x0004ab49) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3c,	// (0x0004ab49) middle_sk_idle_act4_pane_g

0xb3b4,	// (0x000461c1) middle_sk_idle_act4_pane_t1_ParamLimits

0xb3b4,	// (0x000461c1) middle_sk_idle_act4_pane_t1

0xb3e3,	// (0x000461f0) grid_ai_shortcut_pane_ParamLimits

0xb3e3,	// (0x000461f0) grid_ai_shortcut_pane

0xb400,	// (0x0004620d) list_highlight_pane_cp16_ParamLimits

0xb400,	// (0x0004620d) list_highlight_pane_cp16

0xb40d,	// (0x0004621a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb40d,	// (0x0004621a) list_single_idle_plugin_shortcut_pane_g1

0xb419,	// (0x00046226) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb419,	// (0x00046226) list_single_idle_plugin_shortcut_pane_g2

0xb435,	// (0x00046242) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb435,	// (0x00046242) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd41,	// (0x0004ab4e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd41,	// (0x0004ab4e) list_single_idle_plugin_shortcut_pane_g

0xb44a,	// (0x00046257) cell_ai_shortcut_pane_ParamLimits

0xb44a,	// (0x00046257) cell_ai_shortcut_pane

0xb460,	// (0x0004626d) cell_ai_shortcut_pane_g1_ParamLimits

0xb460,	// (0x0004626d) cell_ai_shortcut_pane_g1

0xf3ca,	// (0x0004a1d7) ai_gene_pane_1_cp2

0xf40d,	// (0x0004a21a) ai_gene_pane_2_cp2

0xf415,	// (0x0004a222) list_highlight_pane_cp15

0xf41e,	// (0x0004a22b) list_single_idle_plugin_calendar_pane_g1

0xf415,	// (0x0004a222) list_highlight_pane_cp17

0xf426,	// (0x0004a233) list_single_idle_plugin_calendar_pane_g1_copy1

0xf42e,	// (0x0004a23b) list_single_idle_plugin_player_pane_g1

0xd7ec,	// (0x000485f9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd48,	// (0x0004ab55) list_single_idle_plugin_player_pane_g

0xf436,	// (0x0004a243) list_single_idle_plugin_player_pane_t1

0xf444,	// (0x0004a251) list_single_idle_plugin_player_pane_t2

0xf452,	// (0x0004a25f) list_single_idle_plugin_player_pane_t3

0xf460,	// (0x0004a26d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4d,	// (0x0004ab5a) list_single_idle_plugin_player_pane_t

0xf46e,	// (0x0004a27b) wait_bar_pane_cp15

0xf476,	// (0x0004a283) grid_ai_notification_pane

0xd7ec,	// (0x000485f9) list_single_idle_plugin_notification_pane_g1

0xb482,	// (0x0004628f) cell_ai_notification_pane_ParamLimits

0xb482,	// (0x0004628f) cell_ai_notification_pane

0xf47f,	// (0x0004a28c) cell_ai_notification_pane_g1

0xf487,	// (0x0004a294) cell_ai_notification_pane_t1

0xb48f,	// (0x0004629c) tb_ext_find_button_pane

0xb497,	// (0x000462a4) tb_ext_find_pane_g1

0xb49f,	// (0x000462ac) tb_ext_find_pane_t1

0x8562,	// (0x0004336f) tb_ext_find_button_pane_g1

0xf495,	// (0x0004a2a2) tb_ext_find_button_pane_g2

0x0001,

0xfd56,	// (0x0004ab63) tb_ext_find_button_pane_g

0xb2b3,	// (0x000460c0) main_idle_act4_pane_t1_ParamLimits

0xb2c9,	// (0x000460d6) main_idle_act4_pane_t2_ParamLimits

0xfd14,	// (0x0004ab21) main_idle_act4_pane_t_ParamLimits

0xb2fb,	// (0x00046108) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb311,	// (0x0004611e) sat_plugin_idle_act4_pane_ParamLimits

0xb311,	// (0x0004611e) sat_plugin_idle_act4_pane

0xb4ad,	// (0x000462ba) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb4ad,	// (0x000462ba) sat_plugin_idle_act4_pane_t1

0xb4c5,	// (0x000462d2) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb4c5,	// (0x000462d2) sat_plugin_idle_act4_pane_t2

0xb4dd,	// (0x000462ea) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb4dd,	// (0x000462ea) sat_plugin_idle_act4_pane_t3

0xb4f5,	// (0x00046302) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb4f5,	// (0x00046302) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5b,	// (0x0004ab68) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5b,	// (0x0004ab68) sat_plugin_idle_act4_pane_t

0x43db,	// (0x0003f1e8) popup_battery_window_ParamLimits

0x43db,	// (0x0003f1e8) popup_battery_window

0x7b26,	// (0x00042933) bg_popup_sub_pane_cp25_ParamLimits

0x7b26,	// (0x00042933) bg_popup_sub_pane_cp25

0xf49e,	// (0x0004a2ab) popup_battery_window_g1_ParamLimits

0xf49e,	// (0x0004a2ab) popup_battery_window_g1

0xf4aa,	// (0x0004a2b7) popup_battery_window_t1_ParamLimits

0xf4aa,	// (0x0004a2b7) popup_battery_window_t1

0xf4bc,	// (0x0004a2c9) popup_battery_window_t2_ParamLimits

0xf4bc,	// (0x0004a2c9) popup_battery_window_t2

0x0001,

0xfd64,	// (0x0004ab71) popup_battery_window_t_ParamLimits

0xfd64,	// (0x0004ab71) popup_battery_window_t

0x974e,	// (0x0004455b) midp_canvas_pane_ParamLimits

0x97a3,	// (0x000445b0) midp_keypad_pane_ParamLimits

0x97a3,	// (0x000445b0) midp_keypad_pane

0x94e7,	// (0x000442f4) main_midp_pane_ParamLimits

0xde13,	// (0x00048c20) signal_pane_g2_cp_ParamLimits

0xb50d,	// (0x0004631a) aid_size_cell_midp_keypad_ParamLimits

0xb50d,	// (0x0004631a) aid_size_cell_midp_keypad

0xb52b,	// (0x00046338) midp_keyp_game_grid_pane_ParamLimits

0xb52b,	// (0x00046338) midp_keyp_game_grid_pane

0xb54a,	// (0x00046357) midp_keyp_rocker_pane_ParamLimits

0xb54a,	// (0x00046357) midp_keyp_rocker_pane

0xb58b,	// (0x00046398) midp_keyp_sk_left_pane_ParamLimits

0xb58b,	// (0x00046398) midp_keyp_sk_left_pane

0xb5dd,	// (0x000463ea) midp_keyp_sk_right_pane_ParamLimits

0xb5dd,	// (0x000463ea) midp_keyp_sk_right_pane

0x7903,	// (0x00042710) bg_button_pane_cp03

0xb629,	// (0x00046436) midp_keyp_sk_left_pane_g1

0x7903,	// (0x00042710) bg_button_pane_cp04

0xb629,	// (0x00046436) midp_keyp_sk_right_pane_g1

0xe197,	// (0x00048fa4) midp_keyp_rocker_pane_g1

0xb632,	// (0x0004643f) keyp_game_cell_pane_ParamLimits

0xb632,	// (0x0004643f) keyp_game_cell_pane

0x7903,	// (0x00042710) bg_button_pane_cp02

0xb654,	// (0x00046461) keyp_game_cell_pane_g1

0x8ff4,	// (0x00043e01) popup_fep_vkb2_window_ParamLimits

0x8ff4,	// (0x00043e01) popup_fep_vkb2_window

0xb65d,	// (0x0004646a) aid_size_cell_vkb2_ParamLimits

0xb65d,	// (0x0004646a) aid_size_cell_vkb2

0xb693,	// (0x000464a0) popup_fep_vkb2_window_g1_ParamLimits

0xb693,	// (0x000464a0) popup_fep_vkb2_window_g1

0xb6e3,	// (0x000464f0) vkb2_area_bottom_pane_ParamLimits

0xb6e3,	// (0x000464f0) vkb2_area_bottom_pane

0xb721,	// (0x0004652e) vkb2_area_keypad_pane_ParamLimits

0xb721,	// (0x0004652e) vkb2_area_keypad_pane

0xb75f,	// (0x0004656c) vkb2_area_top_pane_ParamLimits

0xb75f,	// (0x0004656c) vkb2_area_top_pane

0xb7db,	// (0x000465e8) vkb2_top_entry_pane_ParamLimits

0xb7db,	// (0x000465e8) vkb2_top_entry_pane

0xb808,	// (0x00046615) vkb2_top_grid_left_pane_ParamLimits

0xb808,	// (0x00046615) vkb2_top_grid_left_pane

0xb828,	// (0x00046635) vkb2_top_grid_right_pane_ParamLimits

0xb828,	// (0x00046635) vkb2_top_grid_right_pane

0x5b64,	// (0x00040971) vkb2_cell_keypad_pane_ParamLimits

0x5b64,	// (0x00040971) vkb2_cell_keypad_pane

0xb86e,	// (0x0004667b) vkb2_area_bottom_grid_pane_ParamLimits

0xb86e,	// (0x0004667b) vkb2_area_bottom_grid_pane

0xb894,	// (0x000466a1) vkb2_area_bottom_pane_g1_ParamLimits

0xb894,	// (0x000466a1) vkb2_area_bottom_pane_g1

0xb8ba,	// (0x000466c7) vkb2_area_bottom_pane_g2_ParamLimits

0xb8ba,	// (0x000466c7) vkb2_area_bottom_pane_g2

0xb8eb,	// (0x000466f8) vkb2_area_bottom_pane_g3_ParamLimits

0xb8eb,	// (0x000466f8) vkb2_area_bottom_pane_g3

0x0002,

0xfd69,	// (0x0004ab76) vkb2_area_bottom_pane_g_ParamLimits

0xfd69,	// (0x0004ab76) vkb2_area_bottom_pane_g

0x5cdc,	// (0x00040ae9) vkb2_top_cell_left_pane_ParamLimits

0x5cdc,	// (0x00040ae9) vkb2_top_cell_left_pane

0x207c,	// (0x0003ce89) vkb2_top_entry_pane_g1_ParamLimits

0x207c,	// (0x0003ce89) vkb2_top_entry_pane_g1

0x208a,	// (0x0003ce97) vkb2_top_entry_pane_t1_ParamLimits

0x208a,	// (0x0003ce97) vkb2_top_entry_pane_t1

0xf4e1,	// (0x0004a2ee) vkb2_top_entry_pane_t2_ParamLimits

0xf4e1,	// (0x0004a2ee) vkb2_top_entry_pane_t2

0xf513,	// (0x0004a320) vkb2_top_entry_pane_t3_ParamLimits

0xf513,	// (0x0004a320) vkb2_top_entry_pane_t3

0x0002,

0xfd70,	// (0x0004ab7d) vkb2_top_entry_pane_t_ParamLimits

0xfd70,	// (0x0004ab7d) vkb2_top_entry_pane_t

0xb941,	// (0x0004674e) vkb2_top_grid_right_pane_g1_ParamLimits

0xb941,	// (0x0004674e) vkb2_top_grid_right_pane_g1

0x5d3f,	// (0x00040b4c) vkb2_top_grid_right_pane_g2_ParamLimits

0x5d3f,	// (0x00040b4c) vkb2_top_grid_right_pane_g2

0x5d57,	// (0x00040b64) vkb2_top_grid_right_pane_g3_ParamLimits

0x5d57,	// (0x00040b64) vkb2_top_grid_right_pane_g3

0xb957,	// (0x00046764) vkb2_top_grid_right_pane_g4_ParamLimits

0xb957,	// (0x00046764) vkb2_top_grid_right_pane_g4

0x0003,

0xfd77,	// (0x0004ab84) vkb2_top_grid_right_pane_g_ParamLimits

0xfd77,	// (0x0004ab84) vkb2_top_grid_right_pane_g

0x5d85,	// (0x00040b92) vkb2_top_cell_left_pane_g1

0x5d9c,	// (0x00040ba9) vkb2_cell_keypad_pane_g1_ParamLimits

0x5d9c,	// (0x00040ba9) vkb2_cell_keypad_pane_g1

0x20ef,	// (0x0003cefc) vkb2_cell_keypad_pane_t1_ParamLimits

0x20ef,	// (0x0003cefc) vkb2_cell_keypad_pane_t1

0x5daa,	// (0x00040bb7) vkb2_cell_bottom_grid_pane_ParamLimits

0x5daa,	// (0x00040bb7) vkb2_cell_bottom_grid_pane

0x5de3,	// (0x00040bf0) vkb2_cell_bottom_grid_pane_g1

0xb340,	// (0x0004614d) aid_call2_pane_cp02

0xb348,	// (0x00046155) aid_call_pane_cp02

0xb350,	// (0x0004615d) clock_digital_number_pane_cp10

0xb358,	// (0x00046165) clock_digital_number_pane_cp11

0xb360,	// (0x0004616d) clock_digital_number_pane_cp12

0xb368,	// (0x00046175) clock_digital_number_pane_cp13

0xb370,	// (0x0004617d) clock_digital_separator_pane_cp10

0x8562,	// (0x0004336f) popup_clock_digital_analogue_window_cp2_g1

0x8562,	// (0x0004336f) popup_clock_digital_analogue_window_cp2_g2

0xb378,	// (0x00046185) popup_clock_digital_analogue_window_cp2_g3

0x8562,	// (0x0004336f) popup_clock_digital_analogue_window_cp2_g4

0xb378,	// (0x00046185) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2c,	// (0x0004ab39) popup_clock_digital_analogue_window_cp2_g

0xb380,	// (0x0004618d) popup_clock_digital_analogue_window_cp2_t1

0xb38e,	// (0x0004619b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd37,	// (0x0004ab44) popup_clock_digital_analogue_window_cp2_t

0xe197,	// (0x00048fa4) clock_digital_number_pane_cp10_g1

0xe197,	// (0x00048fa4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0004a927) clock_digital_number_pane_cp10_g

0xe197,	// (0x00048fa4) clock_digital_separator_pane_cp10_g1

0xe197,	// (0x00048fa4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0004a927) clock_digital_separator_pane_cp10_g

0xf314,	// (0x0004a121) uniindi_top_pane_g3

0xf325,	// (0x0004a132) uniindi_top_pane_g4

0x5bcf,	// (0x000409dc) vkb2_row_keypad_pane_ParamLimits

0x5bcf,	// (0x000409dc) vkb2_row_keypad_pane

0x5dff,	// (0x00040c0c) vkb2_cell_t_keypad_pane_ParamLimits

0x5dff,	// (0x00040c0c) vkb2_cell_t_keypad_pane

0x5e0c,	// (0x00040c19) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x5e0c,	// (0x00040c19) vkb2_cell_t_keypad_pane_cp08

0x5e1c,	// (0x00040c29) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x5e1c,	// (0x00040c29) vkb2_cell_t_keypad_pane_cp09

0x5e2d,	// (0x00040c3a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x5e2d,	// (0x00040c3a) vkb2_cell_t_keypad_pane_cp01

0x5e3d,	// (0x00040c4a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x5e3d,	// (0x00040c4a) vkb2_cell_t_keypad_pane_cp02

0x5e4d,	// (0x00040c5a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x5e4d,	// (0x00040c5a) vkb2_cell_t_keypad_pane_cp03

0x5e5d,	// (0x00040c6a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x5e5d,	// (0x00040c6a) vkb2_cell_t_keypad_pane_cp04

0x5e6d,	// (0x00040c7a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x5e6d,	// (0x00040c7a) vkb2_cell_t_keypad_pane_cp05

0x5e7d,	// (0x00040c8a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x5e7d,	// (0x00040c8a) vkb2_cell_t_keypad_pane_cp06

0x5e8d,	// (0x00040c9a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x5e8d,	// (0x00040c9a) vkb2_cell_t_keypad_pane_cp07

0x5e9d,	// (0x00040caa) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x5e9d,	// (0x00040caa) vkb2_cell_t_keypad_pane_cp10

0x56bd,	// (0x000404ca) vkb2_cell_t_keypad_pane_g1

0x2106,	// (0x0003cf13) vkb2_cell_t_keypad_pane_t1

0x4318,	// (0x0003f125) popup_grid_graphic2_window

0x2118,	// (0x0003cf25) aid_size_cell_graphic2_ParamLimits

0x2118,	// (0x0003cf25) aid_size_cell_graphic2

0x2156,	// (0x0003cf63) bg_popup_window_pane_cp21_ParamLimits

0x2156,	// (0x0003cf63) bg_popup_window_pane_cp21

0x2164,	// (0x0003cf71) graphic2_pages_pane_ParamLimits

0x2164,	// (0x0003cf71) graphic2_pages_pane

0x21ad,	// (0x0003cfba) grid_graphic2_control_pane_ParamLimits

0x21ad,	// (0x0003cfba) grid_graphic2_control_pane

0x21eb,	// (0x0003cff8) grid_graphic2_pane_ParamLimits

0x21eb,	// (0x0003cff8) grid_graphic2_pane

0x225a,	// (0x0003d067) cell_graphic2_pane

0x4318,	// (0x0003f125) main_comp_mode_pane

0xef8d,	// (0x00049d9a) list_ai3_gene_pane_ParamLimits

0xb02c,	// (0x00045e39) bg_popup_window_pane_cp19_ParamLimits

0xf100,	// (0x00049f0d) bg_touch_area_indi_pane_ParamLimits

0xf100,	// (0x00049f0d) bg_touch_area_indi_pane

0xf116,	// (0x00049f23) bg_touch_area_indi_pane_cp01_ParamLimits

0xf116,	// (0x00049f23) bg_touch_area_indi_pane_cp01

0xf12c,	// (0x00049f39) bg_touch_area_indi_pane_cp02_ParamLimits

0xf12c,	// (0x00049f39) bg_touch_area_indi_pane_cp02

0xf142,	// (0x00049f4f) bg_touch_area_indi_pane_cp03_ParamLimits

0xf142,	// (0x00049f4f) bg_touch_area_indi_pane_cp03

0xf158,	// (0x00049f65) popup_slider_window_g1_ParamLimits

0xf174,	// (0x00049f81) popup_slider_window_g2_ParamLimits

0xf190,	// (0x00049f9d) popup_slider_window_g3_ParamLimits

0xfcc1,	// (0x0004aace) popup_slider_window_g_ParamLimits

0xf1ac,	// (0x00049fb9) popup_slider_window_t1_ParamLimits

0xf1f0,	// (0x00049ffd) small_volume_slider_vertical_pane_ParamLimits

0x225a,	// (0x0003d067) cell_graphic2_pane_ParamLimits

0x22a5,	// (0x0003d0b2) bg_button_pane_cp10_ParamLimits

0x22a5,	// (0x0003d0b2) bg_button_pane_cp10

0x22b6,	// (0x0003d0c3) bg_button_pane_cp11_ParamLimits

0x22b6,	// (0x0003d0c3) bg_button_pane_cp11

0x22c7,	// (0x0003d0d4) graphic2_pages_pane_g1_ParamLimits

0x22c7,	// (0x0003d0d4) graphic2_pages_pane_g1

0x22e2,	// (0x0003d0ef) graphic2_pages_pane_g2_ParamLimits

0x22e2,	// (0x0003d0ef) graphic2_pages_pane_g2

0x0001,

0xfd85,	// (0x0004ab92) graphic2_pages_pane_g_ParamLimits

0xfd85,	// (0x0004ab92) graphic2_pages_pane_g

0x22fa,	// (0x0003d107) graphic2_pages_pane_t1_ParamLimits

0x22fa,	// (0x0003d107) graphic2_pages_pane_t1

0x2312,	// (0x0003d11f) cell_graphic2_control_pane_ParamLimits

0x2312,	// (0x0003d11f) cell_graphic2_control_pane

0x233c,	// (0x0003d149) cell_graphic2_pane_g1_ParamLimits

0x233c,	// (0x0003d149) cell_graphic2_pane_g1

0x382f,	// (0x0003e63c) cell_graphic2_pane_g2_ParamLimits

0x382f,	// (0x0003e63c) cell_graphic2_pane_g2

0x2349,	// (0x0003d156) cell_graphic2_pane_g3_ParamLimits

0x2349,	// (0x0003d156) cell_graphic2_pane_g3

0x383c,	// (0x0003e649) cell_graphic2_pane_g4_ParamLimits

0x383c,	// (0x0003e649) cell_graphic2_pane_g4

0x2356,	// (0x0003d163) cell_graphic2_pane_g5_ParamLimits

0x2356,	// (0x0003d163) cell_graphic2_pane_g5

0x0004,

0xfd8a,	// (0x0004ab97) cell_graphic2_pane_g_ParamLimits

0xfd8a,	// (0x0004ab97) cell_graphic2_pane_g

0x2373,	// (0x0003d180) cell_graphic2_pane_t1_ParamLimits

0x2373,	// (0x0003d180) cell_graphic2_pane_t1

0xceff,	// (0x00047d0c) grid_highlight_pane_cp11_ParamLimits

0xceff,	// (0x00047d0c) grid_highlight_pane_cp11

0x7b26,	// (0x00042933) bg_button_pane_cp05

0x23a8,	// (0x0003d1b5) cell_graphic2_control_pane_g1

0xe197,	// (0x00048fa4) bg_touch_area_indi_pane_g1

0x23d0,	// (0x0003d1dd) aid_cmod_rocker_key_size

0x23da,	// (0x0003d1e7) aid_cmode_itu_key_size

0x23e4,	// (0x0003d1f1) main_cmode_video_pane

0x23ec,	// (0x0003d1f9) main_comp_mode_itu_pane

0x23f6,	// (0x0003d203) main_comp_mode_rocker_pane

0x23fe,	// (0x0003d20b) cell_cmode_rocker_pane_ParamLimits

0x23fe,	// (0x0003d20b) cell_cmode_rocker_pane

0x2410,	// (0x0003d21d) cell_cmode_itu_pane_ParamLimits

0x2410,	// (0x0003d21d) cell_cmode_itu_pane

0x8055,	// (0x00042e62) bg_button_pane_cp06_ParamLimits

0x8055,	// (0x00042e62) bg_button_pane_cp06

0xe3c3,	// (0x000491d0) cell_cmode_rocker_pane_g1_ParamLimits

0xe3c3,	// (0x000491d0) cell_cmode_rocker_pane_g1

0xf227,	// (0x0004a034) cell_cmode_rocker_pane_g2_ParamLimits

0xf227,	// (0x0004a034) cell_cmode_rocker_pane_g2

0x0001,

0xfd9a,	// (0x0004aba7) cell_cmode_rocker_pane_g_ParamLimits

0xfd9a,	// (0x0004aba7) cell_cmode_rocker_pane_g

0x7903,	// (0x00042710) bg_button_pane_cp07

0x2425,	// (0x0003d232) cell_cmode_itu_pane_g1

0x242e,	// (0x0003d23b) cell_cmode_itu_pane_t1

0x243c,	// (0x0003d249) cell_cmode_itu_pane_t2

0x0001,

0xfd9f,	// (0x0004abac) cell_cmode_itu_pane_t

0xf396,	// (0x0004a1a3) aid_touch_ctrl_left

0xf39e,	// (0x0004a1ab) aid_touch_ctrl_right

0x7903,	// (0x00042710) compa_mode_pane

0x244a,	// (0x0003d257) aid_cmod_rocker_key_size_cp

0x2454,	// (0x0003d261) aid_cmode_itu_key_size_cp

0x245e,	// (0x0003d26b) compa_mode_pane_g1

0x2466,	// (0x0003d273) compa_mode_pane_g2

0x246e,	// (0x0003d27b) compa_mode_pane_g3

0x0002,

0xfda4,	// (0x0004abb1) compa_mode_pane_g

0x2476,	// (0x0003d283) main_comp_mode_itu_pane_cp

0x2480,	// (0x0003d28d) main_comp_mode_rocker_pane_cp

0x248a,	// (0x0003d297) cell_cmode_itu_pane_cp_ParamLimits

0x248a,	// (0x0003d297) cell_cmode_itu_pane_cp

0x249f,	// (0x0003d2ac) cell_cmode_rocker_pane_cp_ParamLimits

0x249f,	// (0x0003d2ac) cell_cmode_rocker_pane_cp

0x8055,	// (0x00042e62) bg_button_pane_cp06_cp_ParamLimits

0x8055,	// (0x00042e62) bg_button_pane_cp06_cp

0xe3c3,	// (0x000491d0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe3c3,	// (0x000491d0) cell_cmode_rocker_pane_g1_cp

0xe197,	// (0x00048fa4) cell_cmode_rocker_pane_g2_cp

0x7903,	// (0x00042710) bg_button_pane_cp07_cp

0x24b1,	// (0x0003d2be) cell_cmode_itu_pane_g1_cp

0x24ba,	// (0x0003d2c7) cell_cmode_itu_pane_t1_cp

0x24c8,	// (0x0003d2d5) cell_cmode_itu_pane_t2_cp

0xa7ec,	// (0x000455f9) settings_code_pane_cp2

0x79dd,	// (0x000427ea) bg_popup_window_pane_cp3_ParamLimits

0x7d24,	// (0x00042b31) heading_pane_cp3_ParamLimits

0x7d33,	// (0x00042b40) listscroll_popup_graphic_pane_ParamLimits

0x5478,	// (0x00040285) fep_hwr_aid_pane_ParamLimits

0x58d8,	// (0x000406e5) aid_touch_sctrl_top_ParamLimits

0x58f3,	// (0x00040700) sctrl_sk_top_pane_g1_ParamLimits

0x56bd,	// (0x000404ca) sctrl_sk_top_pane_g2_ParamLimits

0xfcda,	// (0x0004aae7) sctrl_sk_top_pane_g_ParamLimits

0x5900,	// (0x0004070d) sctrl_sk_top_pane_t1_ParamLimits

0x58d8,	// (0x000406e5) aid_touch_sctrl_bottom_ParamLimits

0x5900,	// (0x0004070d) sctrl_sk_bottom_pane_t1_ParamLimits

0xf2e0,	// (0x0004a0ed) aid_area_touch_clock

0xb79d,	// (0x000465aa) aid_vkb2_area_top_pane_cell_ParamLimits

0xb79d,	// (0x000465aa) aid_vkb2_area_top_pane_cell

0xb848,	// (0x00046655) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb848,	// (0x00046655) aid_vkb2_area_bottom_pane_cell

0xf4d9,	// (0x0004a2e6) popup_char_count_window

0x24d6,	// (0x0003d2e3) popup_char_count_window_g1

0x24df,	// (0x0003d2ec) popup_char_count_window_g2

0x24e8,	// (0x0003d2f5) popup_char_count_window_g3

0x0002,

0xfdab,	// (0x0004abb8) popup_char_count_window_g

0x24f1,	// (0x0003d2fe) popup_char_count_window_t1

0x59b4,	// (0x000407c1) popup_fep_char_preview_window_ParamLimits

0x59b4,	// (0x000407c1) popup_fep_char_preview_window

0xb7bd,	// (0x000465ca) vkb2_top_candi_pane_ParamLimits

0xb7bd,	// (0x000465ca) vkb2_top_candi_pane

0x24ff,	// (0x0003d30c) cell_vkb2_top_candi_pane_ParamLimits

0x24ff,	// (0x0003d30c) cell_vkb2_top_candi_pane

0x61ca,	// (0x00040fd7) bg_popup_fep_char_preview_window_ParamLimits

0x61ca,	// (0x00040fd7) bg_popup_fep_char_preview_window

0x61d8,	// (0x00040fe5) popup_fep_char_preview_window_t1_ParamLimits

0x61d8,	// (0x00040fe5) popup_fep_char_preview_window_t1

0x2559,	// (0x0003d366) bg_popup_fep_char_preview_window_g1

0x2551,	// (0x0003d35e) bg_popup_fep_char_preview_window_g2

0x2549,	// (0x0003d356) bg_popup_fep_char_preview_window_g3

0x2581,	// (0x0003d38e) bg_popup_fep_char_preview_window_g4

0x2579,	// (0x0003d386) bg_popup_fep_char_preview_window_g5

0x2571,	// (0x0003d37e) bg_popup_fep_char_preview_window_g6

0x2569,	// (0x0003d376) bg_popup_fep_char_preview_window_g7

0x2561,	// (0x0003d36e) bg_popup_fep_char_preview_window_g8

0x2589,	// (0x0003d396) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb2,	// (0x0004abbf) bg_popup_fep_char_preview_window_g

0x56bd,	// (0x000404ca) cell_vkb2_top_candi_pane_g1_ParamLimits

0x56bd,	// (0x000404ca) cell_vkb2_top_candi_pane_g1

0x56cb,	// (0x000404d8) cell_vkb2_top_candi_pane_g2_ParamLimits

0x56cb,	// (0x000404d8) cell_vkb2_top_candi_pane_g2

0x2599,	// (0x0003d3a6) cell_vkb2_top_candi_pane_g3_ParamLimits

0x2599,	// (0x0003d3a6) cell_vkb2_top_candi_pane_g3

0x621a,	// (0x00041027) cell_vkb2_top_candi_pane_g4_ParamLimits

0x621a,	// (0x00041027) cell_vkb2_top_candi_pane_g4

0xe799,	// (0x000495a6) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe799,	// (0x000495a6) cell_vkb2_top_candi_pane_g5

0x623b,	// (0x00041048) cell_vkb2_top_candi_pane_g6_ParamLimits

0x623b,	// (0x00041048) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc7,	// (0x0004abd4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc7,	// (0x0004abd4) cell_vkb2_top_candi_pane_g

0x6249,	// (0x00041056) cell_vkb2_top_candi_pane_t1

0x5290,	// (0x0004009d) aid_size_touch_slider_mark_ParamLimits

0x5290,	// (0x0004009d) aid_size_touch_slider_mark

0x2198,	// (0x0003cfa5) grid_graphic2_catg_pane_ParamLimits

0x2198,	// (0x0003cfa5) grid_graphic2_catg_pane

0x222f,	// (0x0003d03c) popup_grid_graphic2_window_t1_ParamLimits

0x222f,	// (0x0003d03c) popup_grid_graphic2_window_t1

0x2244,	// (0x0003d051) popup_grid_graphic2_window_t2_ParamLimits

0x2244,	// (0x0003d051) popup_grid_graphic2_window_t2

0x0001,

0xfd80,	// (0x0004ab8d) popup_grid_graphic2_window_t_ParamLimits

0xfd80,	// (0x0004ab8d) popup_grid_graphic2_window_t

0x7b26,	// (0x00042933) bg_button_pane_cp05_ParamLimits

0x23a8,	// (0x0003d1b5) cell_graphic2_control_pane_g1_ParamLimits

0xf35c,	// (0x0004a169) cell_graphic2_catg_pane_ParamLimits

0xf35c,	// (0x0004a169) cell_graphic2_catg_pane

0x7903,	// (0x00042710) bg_button_pane_cp12

0x25ba,	// (0x0003d3c7) cell_graphic2_catg_pane_g1

0xf2ac,	// (0x0004a0b9) cell_tb_ext_pane_t1_ParamLimits

0x5cfc,	// (0x00040b09) vkb2_top_cell_right_narrow_pane_ParamLimits

0x5cfc,	// (0x00040b09) vkb2_top_cell_right_narrow_pane

0x5d14,	// (0x00040b21) vkb2_top_cell_right_wide_pane_ParamLimits

0x5d14,	// (0x00040b21) vkb2_top_cell_right_wide_pane

0x546a,	// (0x00040277) bg_vkb2_func_pane_ParamLimits

0x546a,	// (0x00040277) bg_vkb2_func_pane

0x5d85,	// (0x00040b92) vkb2_top_cell_left_pane_g1_ParamLimits

0x546a,	// (0x00040277) bg_vkb2_fuc_pane_cp03_ParamLimits

0x546a,	// (0x00040277) bg_vkb2_fuc_pane_cp03

0x5de3,	// (0x00040bf0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc357,	// (0x00047164) bg_vkb2_func_pane_g1

0xc35f,	// (0x0004716c) bg_vkb2_func_pane_g2

0xc36f,	// (0x0004717c) bg_vkb2_func_pane_g3

0xc367,	// (0x00047174) bg_vkb2_func_pane_g4

0xc377,	// (0x00047184) bg_vkb2_func_pane_g5

0xc37f,	// (0x0004718c) bg_vkb2_func_pane_g6

0xc387,	// (0x00047194) bg_vkb2_func_pane_g7

0xc38f,	// (0x0004719c) bg_vkb2_func_pane_g8

0xc34f,	// (0x0004715c) bg_vkb2_func_pane_g9

0x0008,

0xfdd4,	// (0x0004abe1) bg_vkb2_func_pane_g

0x546a,	// (0x00040277) bg_vkb2_fuc_pane_cp01_ParamLimits

0x546a,	// (0x00040277) bg_vkb2_fuc_pane_cp01

0x5d85,	// (0x00040b92) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x5d85,	// (0x00040b92) vkb2_top_cell_right_wide_pane_g1

0x546a,	// (0x00040277) bg_vkb2_fuc_pane_cp02_ParamLimits

0x546a,	// (0x00040277) bg_vkb2_fuc_pane_cp02

0x5de3,	// (0x00040bf0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x5de3,	// (0x00040bf0) vkb2_top_cell_right_narrow_pane_g1

0xaf7a,	// (0x00045d87) aid_touch_area_decrease_ParamLimits

0xaf7a,	// (0x00045d87) aid_touch_area_decrease

0xafa8,	// (0x00045db5) aid_touch_area_increase_ParamLimits

0xafa8,	// (0x00045db5) aid_touch_area_increase

0xafd0,	// (0x00045ddd) aid_touch_area_mute_ParamLimits

0xafd0,	// (0x00045ddd) aid_touch_area_mute

0xaff8,	// (0x00045e05) aid_touch_area_slider_ParamLimits

0xaff8,	// (0x00045e05) aid_touch_area_slider

0xb038,	// (0x00045e45) popup_slider_window_g4_ParamLimits

0xb038,	// (0x00045e45) popup_slider_window_g4

0xb060,	// (0x00045e6d) popup_slider_window_g5_ParamLimits

0xb060,	// (0x00045e6d) popup_slider_window_g5

0xb094,	// (0x00045ea1) popup_slider_window_g6_ParamLimits

0xb094,	// (0x00045ea1) popup_slider_window_g6

0xf1d8,	// (0x00049fe5) popup_slider_window_t2_ParamLimits

0xf1d8,	// (0x00049fe5) popup_slider_window_t2

0x0001,

0xfcce,	// (0x0004aadb) popup_slider_window_t_ParamLimits

0xfcce,	// (0x0004aadb) popup_slider_window_t

0xb0b0,	// (0x00045ebd) slider_pane_ParamLimits

0xb0b0,	// (0x00045ebd) slider_pane

0x25c3,	// (0x0003d3d0) slider_pane_g1_ParamLimits

0x25c3,	// (0x0003d3d0) slider_pane_g1

0x25d7,	// (0x0003d3e4) slider_pane_g2_ParamLimits

0x25d7,	// (0x0003d3e4) slider_pane_g2

0x25ed,	// (0x0003d3fa) slider_pane_g3_ParamLimits

0x25ed,	// (0x0003d3fa) slider_pane_g3

0x0003,

0xfde7,	// (0x0004abf4) slider_pane_g_ParamLimits

0xfde7,	// (0x0004abf4) slider_pane_g

0x9efa,	// (0x00044d07) popup_tb_float_extension_window_ParamLimits

0x9efa,	// (0x00044d07) popup_tb_float_extension_window

0x2619,	// (0x0003d426) aid_size_cell_tb_float_ext

0x7903,	// (0x00042710) bg_popup_sub_window_cp28

0x2624,	// (0x0003d431) grid_tb_float_ext_pane

0x262c,	// (0x0003d439) cell_tb_float_ext_pane_ParamLimits

0x262c,	// (0x0003d439) cell_tb_float_ext_pane

0x2644,	// (0x0003d451) cell_tb_float_ext_pane_g1

0x264d,	// (0x0003d45a) grid_highlight_pane_cp12

0xaaed,	// (0x000458fa) cell_last_hwr_side_pane_ParamLimits

0xaaed,	// (0x000458fa) cell_last_hwr_side_pane

0xe197,	// (0x00048fa4) cell_last_hwr_side_pane_g1

0x2656,	// (0x0003d463) cell_last_hwr_side_pane_g2

0x0001,

0xfdf0,	// (0x0004abfd) cell_last_hwr_side_pane_g

0xb91c,	// (0x00046729) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb91c,	// (0x00046729) vkb2_area_bottom_space_btn_pane

0x56bd,	// (0x000404ca) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x2106,	// (0x0003cf13) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6249,	// (0x00041056) cell_vkb2_top_candi_pane_t1_ParamLimits

0x627a,	// (0x00041087) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x627a,	// (0x00041087) vkb2_area_bottom_space_btn_pane_g1

0x62b0,	// (0x000410bd) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x62b0,	// (0x000410bd) vkb2_area_bottom_space_btn_pane_g2

0x62e6,	// (0x000410f3) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x62e6,	// (0x000410f3) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf5,	// (0x0004ac02) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf5,	// (0x0004ac02) vkb2_area_bottom_space_btn_pane_g

0x5527,	// (0x00040334) cel_fep_hwr_func_pane_ParamLimits

0x5527,	// (0x00040334) cel_fep_hwr_func_pane

0xaac2,	// (0x000458cf) cell_hwr_side_button_pane_ParamLimits

0xaac2,	// (0x000458cf) cell_hwr_side_button_pane

0xf2e0,	// (0x0004a0ed) aid_area_touch_clock_ParamLimits

0x7b26,	// (0x00042933) bg_uniindi_top_pane_ParamLimits

0xf2f2,	// (0x0004a0ff) uniindi_top_pane_g1_ParamLimits

0xf308,	// (0x0004a115) uniindi_top_pane_g2_ParamLimits

0xf314,	// (0x0004a121) uniindi_top_pane_g3_ParamLimits

0xf325,	// (0x0004a132) uniindi_top_pane_g4_ParamLimits

0xfd06,	// (0x0004ab13) uniindi_top_pane_g_ParamLimits

0xf332,	// (0x0004a13f) uniindi_top_pane_t1_ParamLimits

0x7b26,	// (0x00042933) bg_vkb2_func_pane_cp01_ParamLimits

0x7b26,	// (0x00042933) bg_vkb2_func_pane_cp01

0x265f,	// (0x0003d46c) cel_fep_hwr_func_pane_g1_ParamLimits

0x265f,	// (0x0003d46c) cel_fep_hwr_func_pane_g1

0x7b26,	// (0x00042933) bg_vkb2_func_pane_cp02_ParamLimits

0x7b26,	// (0x00042933) bg_vkb2_func_pane_cp02

0x265f,	// (0x0003d46c) cell_hwr_side_button_pane_g1_ParamLimits

0x265f,	// (0x0003d46c) cell_hwr_side_button_pane_g1

0xc273,	// (0x00047080) status_pane_g4_ParamLimits

0xc273,	// (0x00047080) status_pane_g4

0xc28b,	// (0x00047098) status_pane_t1

0xdf9d,	// (0x00048daa) form2_midp_gauge_slider_cont_pane

0xdfa5,	// (0x00048db2) form2_midp_gauge_slider_pane_t1_ParamLimits

0xaa9e,	// (0x000458ab) form2_midp_gauge_slider_pane_t2_ParamLimits

0xaab0,	// (0x000458bd) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0004a8da) form2_midp_gauge_slider_pane_t_ParamLimits

0xdfb7,	// (0x00048dc4) form2_midp_slider_pane_ParamLimits

0x5974,	// (0x00040781) aid_size_cell_func_vkb2_ParamLimits

0x5974,	// (0x00040781) aid_size_cell_func_vkb2

0x2605,	// (0x0003d412) slider_pane_g4_ParamLimits

0x2605,	// (0x0003d412) slider_pane_g4

0xb975,	// (0x00046782) form2_midp_gauge_slider_pane_t2_cp01

0xb983,	// (0x00046790) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb983,	// (0x00046790) form2_midp_gauge_slider_pane_t3_cp01

0x6357,	// (0x00041164) form2_midp_slider_pane_cp01

0x7903,	// (0x00042710) navi_smil_pane

0x26c3,	// (0x0003d4d0) navi_smil_pane_g1

0x26cb,	// (0x0003d4d8) navi_smil_pane_t1

0x2698,	// (0x0003d4a5) form2_midp_slider_pane_g1

0x26a1,	// (0x0003d4ae) form2_midp_slider_pane_g2

0x26a9,	// (0x0003d4b6) form2_midp_slider_pane_g3

0x2698,	// (0x0003d4a5) form2_midp_slider_pane_g4

0x26b1,	// (0x0003d4be) form2_midp_slider_pane_g5

0x0004,

0xfdfe,	// (0x0004ac0b) form2_midp_slider_pane_g

0x631c,	// (0x00041129) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x631c,	// (0x00041129) vkb2_area_bottom_space_btn_pane_g4

0xa09c,	// (0x00044ea9) lc0_navi_pane_ParamLimits

0xa09c,	// (0x00044ea9) lc0_navi_pane

0xa106,	// (0x00044f13) lc0_stat_indi_pane_ParamLimits

0xa106,	// (0x00044f13) lc0_stat_indi_pane

0xa11b,	// (0x00044f28) ls0_title_pane_ParamLimits

0xa11b,	// (0x00044f28) ls0_title_pane

0x8055,	// (0x00042e62) bg_popup_sub_pane_cp14_ParamLimits

0xf2c7,	// (0x0004a0d4) list_uniindi_pane_ParamLimits

0xf2d3,	// (0x0004a0e0) uniindi_top_pane_ParamLimits

0xf36e,	// (0x0004a17b) list_single_uniindi_pane_g1_ParamLimits

0xf381,	// (0x0004a18e) list_single_uniindi_pane_t1_ParamLimits

0xb9a0,	// (0x000467ad) lc0_stat_clock_pane_ParamLimits

0xb9a0,	// (0x000467ad) lc0_stat_clock_pane

0x26f3,	// (0x0003d500) lc0_stat_indi_pane_g1_ParamLimits

0x26f3,	// (0x0003d500) lc0_stat_indi_pane_g1

0x26e6,	// (0x0003d4f3) lc0_stat_indi_pane_g2_ParamLimits

0x26e6,	// (0x0003d4f3) lc0_stat_indi_pane_g2

0x0001,

0xfe09,	// (0x0004ac16) lc0_stat_indi_pane_g_ParamLimits

0xfe09,	// (0x0004ac16) lc0_stat_indi_pane_g

0xb9ad,	// (0x000467ba) lc0_uni_indicator_pane_ParamLimits

0xb9ad,	// (0x000467ba) lc0_uni_indicator_pane

0x270d,	// (0x0003d51a) ls0_title_pane_g1_ParamLimits

0x270d,	// (0x0003d51a) ls0_title_pane_g1

0x2721,	// (0x0003d52e) ls0_title_pane_t1_ParamLimits

0x2721,	// (0x0003d52e) ls0_title_pane_t1

0xb9ba,	// (0x000467c7) lc0_uni_indicator_pane_g1_ParamLimits

0xb9ba,	// (0x000467c7) lc0_uni_indicator_pane_g1

0x2764,	// (0x0003d571) lc0_stat_clock_pane_t1

0x4318,	// (0x0003f125) main_ai5_pane

0x2772,	// (0x0003d57f) ai5_sk_pane_ParamLimits

0x2772,	// (0x0003d57f) ai5_sk_pane

0x277f,	// (0x0003d58c) cell_ai5_widget_pane_ParamLimits

0x277f,	// (0x0003d58c) cell_ai5_widget_pane

0x27ef,	// (0x0003d5fc) aid_size_cell_widget_grid

0x27fc,	// (0x0003d609) bg_ai5_widget_pane_ParamLimits

0x27fc,	// (0x0003d609) bg_ai5_widget_pane

0x2853,	// (0x0003d660) cell_ai5_widget_pane_g2

0x2867,	// (0x0003d674) cell_ai5_widget_pane_g3

0x2881,	// (0x0003d68e) cell_ai5_widget_pane_g4

0x2891,	// (0x0003d69e) cell_ai5_widget_pane_g5

0x28a1,	// (0x0003d6ae) cell_ai5_widget_pane_g6

0x28ad,	// (0x0003d6ba) cell_ai5_widget_pane_g7

0x2919,	// (0x0003d726) cell_ai5_widget_pane_t1_ParamLimits

0x2919,	// (0x0003d726) cell_ai5_widget_pane_t1

0x2936,	// (0x0003d743) cell_ai5_widget_pane_t2_ParamLimits

0x2936,	// (0x0003d743) cell_ai5_widget_pane_t2

0x294e,	// (0x0003d75b) cell_ai5_widget_pane_t3_ParamLimits

0x294e,	// (0x0003d75b) cell_ai5_widget_pane_t3

0x2966,	// (0x0003d773) cell_ai5_widget_pane_t4_ParamLimits

0x2966,	// (0x0003d773) cell_ai5_widget_pane_t4

0x298c,	// (0x0003d799) cell_ai5_widget_pane_t5_ParamLimits

0x298c,	// (0x0003d799) cell_ai5_widget_pane_t5

0x29ab,	// (0x0003d7b8) cell_ai5_widget_pane_t6_ParamLimits

0x29ab,	// (0x0003d7b8) cell_ai5_widget_pane_t6

0x29bd,	// (0x0003d7ca) cell_ai5_widget_pane_t7_ParamLimits

0x29bd,	// (0x0003d7ca) cell_ai5_widget_pane_t7

0x29dc,	// (0x0003d7e9) cell_ai5_widget_pane_t8_ParamLimits

0x29dc,	// (0x0003d7e9) cell_ai5_widget_pane_t8

0x000b,

0xfe29,	// (0x0004ac36) cell_ai5_widget_pane_t_ParamLimits

0xfe29,	// (0x0004ac36) cell_ai5_widget_pane_t

0x2a60,	// (0x0003d86d) grid_ai5_widget_pane

0x8055,	// (0x00042e62) highlight_cell_ai5_widget_pane_ParamLimits

0x8055,	// (0x00042e62) highlight_cell_ai5_widget_pane

0x2a6c,	// (0x0003d879) ai5_sk_left_pane

0x2a76,	// (0x0003d883) ai5_sk_middle_pane

0x2a80,	// (0x0003d88d) ai5_sk_right_pane

0x2a8a,	// (0x0003d897) bg_ai5_widget_pane_g1_ParamLimits

0x2a8a,	// (0x0003d897) bg_ai5_widget_pane_g1

0x2a96,	// (0x0003d8a3) bg_ai5_widget_pane_g2_ParamLimits

0x2a96,	// (0x0003d8a3) bg_ai5_widget_pane_g2

0x2aa2,	// (0x0003d8af) bg_ai5_widget_pane_g3_ParamLimits

0x2aa2,	// (0x0003d8af) bg_ai5_widget_pane_g3

0x2aae,	// (0x0003d8bb) bg_ai5_widget_pane_g4_ParamLimits

0x2aae,	// (0x0003d8bb) bg_ai5_widget_pane_g4

0x2aba,	// (0x0003d8c7) bg_ai5_widget_pane_g5_ParamLimits

0x2aba,	// (0x0003d8c7) bg_ai5_widget_pane_g5

0x2ac6,	// (0x0003d8d3) bg_ai5_widget_pane_g6_ParamLimits

0x2ac6,	// (0x0003d8d3) bg_ai5_widget_pane_g6

0x2ad2,	// (0x0003d8df) bg_ai5_widget_pane_g7_ParamLimits

0x2ad2,	// (0x0003d8df) bg_ai5_widget_pane_g7

0x2ade,	// (0x0003d8eb) bg_ai5_widget_pane_g8_ParamLimits

0x2ade,	// (0x0003d8eb) bg_ai5_widget_pane_g8

0x2aea,	// (0x0003d8f7) bg_ai5_widget_pane_g9_ParamLimits

0x2aea,	// (0x0003d8f7) bg_ai5_widget_pane_g9

0x0008,

0xfe42,	// (0x0004ac4f) bg_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x0004ac4f) bg_ai5_widget_pane_g

0x2b1a,	// (0x0003d927) cell_shortcut_ai5_widget_pane_ParamLimits

0x2b1a,	// (0x0003d927) cell_shortcut_ai5_widget_pane

0x2b2b,	// (0x0003d938) bg_cell_shortcut_ai5_widget_pane

0x7ce0,	// (0x00042aed) cell_grid_ai5_widget_pane_g1

0xbfc3,	// (0x00046dd0) highlight_cell_shortcut_ai5_widget_pane

0xc357,	// (0x00047164) ai5_sk_left_pane_g1

0x2b33,	// (0x0003d940) ai5_sk_left_pane_g2

0x2b3b,	// (0x0003d948) ai5_sk_left_pane_g3

0x2b43,	// (0x0003d950) ai5_sk_left_pane_g4

0x0003,

0xfe55,	// (0x0004ac62) ai5_sk_left_pane_g

0x2b4b,	// (0x0003d958) ai5_sk_left_pane_t1

0xc35f,	// (0x0004716c) ai5_sk_right_pane_g1

0x2b59,	// (0x0003d966) ai5_sk_right_pane_g2

0x2b61,	// (0x0003d96e) ai5_sk_right_pane_g3

0x2b69,	// (0x0003d976) ai5_sk_right_pane_g4

0x0003,

0xfe5e,	// (0x0004ac6b) ai5_sk_right_pane_g

0x2b71,	// (0x0003d97e) ai5_sk_right_pane_t1

0xc35f,	// (0x0004716c) ai5_sk_middle_pane_g1

0xc357,	// (0x00047164) ai5_sk_middle_pane_g2

0xc377,	// (0x00047184) ai5_sk_middle_pane_g3

0x2b61,	// (0x0003d96e) ai5_sk_middle_pane_g4

0x2b3b,	// (0x0003d948) ai5_sk_middle_pane_g5

0x2b7f,	// (0x0003d98c) ai5_sk_middle_pane_g6

0x2b87,	// (0x0003d994) ai5_sk_middle_pane_g7

0x0006,

0xfe67,	// (0x0004ac74) ai5_sk_middle_pane_g

0x9f9a,	// (0x00044da7) aid_touch_area_size_lc0_ParamLimits

0x9f9a,	// (0x00044da7) aid_touch_area_size_lc0

0x56ec,	// (0x000404f9) cell_hwr_candidate_pane_t1_ParamLimits

0xc1a8,	// (0x00046fb5) aid_touch_navi_pane

0xa207,	// (0x00045014) status_dt_navi_pane_ParamLimits

0xa207,	// (0x00045014) status_dt_navi_pane

0xa21f,	// (0x0004502c) status_dt_sta_pane_ParamLimits

0xa21f,	// (0x0004502c) status_dt_sta_pane

0x2b8f,	// (0x0003d99c) dt_sta_controll_pane

0x2b9c,	// (0x0003d9a9) dt_sta_indi_pane

0x2ba9,	// (0x0003d9b6) dt_sta_title_pane

0x7b26,	// (0x00042933) bg_dt_sta_indi_pane_ParamLimits

0x7b26,	// (0x00042933) bg_dt_sta_indi_pane

0x2bbb,	// (0x0003d9c8) dt_sta_battery_pane

0x2bc3,	// (0x0003d9d0) dt_sta_indi_pane_g1

0x2bcc,	// (0x0003d9d9) dt_sta_indi_pane_g2

0x2bd5,	// (0x0003d9e2) dt_sta_indi_pane_g3

0x0002,

0xfe76,	// (0x0004ac83) dt_sta_indi_pane_g

0x2bde,	// (0x0003d9eb) dt_sta_signal_pane

0x8055,	// (0x00042e62) bg_dt_sta_title_pane_ParamLimits

0x8055,	// (0x00042e62) bg_dt_sta_title_pane

0x2be7,	// (0x0003d9f4) dt_sta_title_pane_g1

0x2bef,	// (0x0003d9fc) dt_sta_title_pane_t1_ParamLimits

0x2bef,	// (0x0003d9fc) dt_sta_title_pane_t1

0x7903,	// (0x00042710) bg_dt_sta_control_pane

0x2c04,	// (0x0003da11) dt_sta_controll_pane_g1

0x2c0d,	// (0x0003da1a) bg_dt_sta_title_pane_g1

0x2c16,	// (0x0003da23) bg_dt_sta_title_pane_g2

0x2c1f,	// (0x0003da2c) bg_dt_sta_title_pane_g3

0x0002,

0xfe7d,	// (0x0004ac8a) bg_dt_sta_title_pane_g

0xe197,	// (0x00048fa4) bg_dt_sta_indi_pane_g1

0x2c28,	// (0x0003da35) dt_sta_signal_pane_g1

0x2c30,	// (0x0003da3d) dt_sta_signal_pane_g2

0x0001,

0xfe84,	// (0x0004ac91) dt_sta_signal_pane_g

0x2c38,	// (0x0003da45) dt_sta_battery_pane_g1

0x2c41,	// (0x0003da4e) dt_sta_battery_pane_t1

0xe197,	// (0x00048fa4) bg_dt_sta_control_pane_g1

0xbb9f,	// (0x000469ac) fep_china_uni_eep_pane

0xbba7,	// (0x000469b4) fep_china_uni_entry_pane_ParamLimits

0xbbb7,	// (0x000469c4) popup_fep_china_uni_window_g1_ParamLimits

0xbbc7,	// (0x000469d4) popup_fep_china_uni_window_g2_ParamLimits

0xbbc7,	// (0x000469d4) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x0004a50a) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x0004a50a) popup_fep_china_uni_window_g

0x2c50,	// (0x0003da5d) fep_china_uni_eep_pane_g1

0x2c58,	// (0x0003da65) fep_china_uni_eep_pane_t1

0x26ba,	// (0x0003d4c7) aid_touch_area_size_smil_player

0xc246,	// (0x00047053) lc0_clock_pane

0xc27f,	// (0x0004708c) status_pane_g5_ParamLimits

0xc27f,	// (0x0004708c) status_pane_g5

0x9b2e,	// (0x0004493b) popup_keymap_window

0xc25f,	// (0x0004706c) status_icon_pane

0x2867,	// (0x0003d674) cell_ai5_widget_pane_g3_ParamLimits

0x2881,	// (0x0003d68e) cell_ai5_widget_pane_g4_ParamLimits

0x2891,	// (0x0003d69e) cell_ai5_widget_pane_g5_ParamLimits

0x28b9,	// (0x0003d6c6) cell_ai5_widget_pane_g8_ParamLimits

0x28b9,	// (0x0003d6c6) cell_ai5_widget_pane_g8

0x28cd,	// (0x0003d6da) cell_ai5_widget_pane_g9_ParamLimits

0x28cd,	// (0x0003d6da) cell_ai5_widget_pane_g9

0x28e1,	// (0x0003d6ee) cell_ai5_widget_pane_g10_ParamLimits

0x28e1,	// (0x0003d6ee) cell_ai5_widget_pane_g10

0x2c67,	// (0x0003da74) status_icon_pane_g1

0x7903,	// (0x00042710) bg_popup_sub_pane_cp13

0x2c6f,	// (0x0003da7c) popup_keymap_window_t1

0x989b,	// (0x000446a8) control_pane_g6_ParamLimits

0x989b,	// (0x000446a8) control_pane_g6

0x98a8,	// (0x000446b5) control_pane_g7_ParamLimits

0x98a8,	// (0x000446b5) control_pane_g7

0x98b5,	// (0x000446c2) control_pane_g8_ParamLimits

0x98b5,	// (0x000446c2) control_pane_g8

0x2b8f,	// (0x0003d99c) dt_sta_controll_pane_ParamLimits

0x2b9c,	// (0x0003d9a9) dt_sta_indi_pane_ParamLimits

0x2ba9,	// (0x0003d9b6) dt_sta_title_pane_ParamLimits

0x7ee4,	// (0x00042cf1) aid_size_touch_scroll_bar_cale

0x43ef,	// (0x0003f1fc) popup_discreet_window_ParamLimits

0x43ef,	// (0x0003f1fc) popup_discreet_window

0x9026,	// (0x00043e33) popup_sk_window

0xc90b,	// (0x00047718) bg_popup_sub_pane_cp28_ParamLimits

0xc90b,	// (0x00047718) bg_popup_sub_pane_cp28

0x2c7d,	// (0x0003da8a) popup_discreet_window_g1_ParamLimits

0x2c7d,	// (0x0003da8a) popup_discreet_window_g1

0x2c9d,	// (0x0003daaa) popup_discreet_window_t1_ParamLimits

0x2c9d,	// (0x0003daaa) popup_discreet_window_t1

0x2cbb,	// (0x0003dac8) popup_discreet_window_t2_ParamLimits

0x2cbb,	// (0x0003dac8) popup_discreet_window_t2

0x0002,

0xfe89,	// (0x0004ac96) popup_discreet_window_t_ParamLimits

0xfe89,	// (0x0004ac96) popup_discreet_window_t

0x6733,	// (0x00041540) popup_sk_window_g1

0x673c,	// (0x00041549) popup_sk_window_g2

0x0001,

0xfe90,	// (0x0004ac9d) popup_sk_window_g

0x6745,	// (0x00041552) popup_sk_window_t1

0x6753,	// (0x00041560) popup_sk_window_t1_copy1

0x2853,	// (0x0003d660) cell_ai5_widget_pane_g2_ParamLimits

0x29ee,	// (0x0003d7fb) cell_ai5_widget_pane_t9_ParamLimits

0x29ee,	// (0x0003d7fb) cell_ai5_widget_pane_t9

0x7903,	// (0x00042710) main_fep_fshwr2_pane

0xb9cf,	// (0x000467dc) aid_fshwr2_btn_pane

0xb9e3,	// (0x000467f0) aid_fshwr2_syb_pane

0xb9f7,	// (0x00046804) aid_fshwr2_txt_pane

0xba07,	// (0x00046814) fshwr2_func_candi_pane

0xba1f,	// (0x0004682c) fshwr2_hwr_syb_pane

0xba37,	// (0x00046844) fshwr2_icf_pane

0x4318,	// (0x0003f125) fshwr2_icf_bg_pane

0xba61,	// (0x0004686e) fshwr2_icf_pane_t1_ParamLimits

0xba61,	// (0x0004686e) fshwr2_icf_pane_t1

0x8562,	// (0x0004336f) fshwr2_func_candi_pane_g1

0x2db6,	// (0x0003dbc3) fshwr2_func_candi_row_pane_ParamLimits

0x2db6,	// (0x0003dbc3) fshwr2_func_candi_row_pane

0xba78,	// (0x00046885) cell_fshwr2_syb_pane_ParamLimits

0xba78,	// (0x00046885) cell_fshwr2_syb_pane

0x6833,	// (0x00041640) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6833,	// (0x00041640) fshwr2_hwr_syb_pane_g1

0x4318,	// (0x0003f125) bg_popup_call_pane_cp01

0xba9a,	// (0x000468a7) fshwr2_func_candi_cell_pane_ParamLimits

0xba9a,	// (0x000468a7) fshwr2_func_candi_cell_pane

0xc6fd,	// (0x0004750a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xc6fd,	// (0x0004750a) fshwr2_func_candi_cell_bg_pane

0xbad9,	// (0x000468e6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbad9,	// (0x000468e6) fshwr2_func_candi_cell_pane_g1

0xbb10,	// (0x0004691d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbb10,	// (0x0004691d) fshwr2_func_candi_cell_pane_t1

0x4318,	// (0x0003f125) bg_button_pane_cp08

0x94e7,	// (0x000442f4) cell_fshwr2_syb_bg_pane

0xbb2b,	// (0x00046938) cell_fshwr2_syb_bg_pane_g1

0xbb3b,	// (0x00046948) cell_fshwr2_syb_bg_pane_t1

0x8055,	// (0x00042e62) main_tmo_pane

0xa60a,	// (0x00045417) uni_indicator_pane_g1_ParamLimits

0xa61e,	// (0x0004542b) uni_indicator_pane_g2_ParamLimits

0xa633,	// (0x00045440) uni_indicator_pane_g3_ParamLimits

0xd294,	// (0x000480a1) uni_indicator_pane_g4_ParamLimits

0xd294,	// (0x000480a1) uni_indicator_pane_g4

0xd2a8,	// (0x000480b5) uni_indicator_pane_g5_ParamLimits

0xd2a8,	// (0x000480b5) uni_indicator_pane_g5

0xd2a8,	// (0x000480b5) uni_indicator_pane_g6_ParamLimits

0xd2a8,	// (0x000480b5) uni_indicator_pane_g6

0xf8f5,	// (0x0004a702) uni_indicator_pane_g_ParamLimits

0xaf5e,	// (0x00045d6b) popup_tmo_note_window_ParamLimits

0xaf5e,	// (0x00045d6b) popup_tmo_note_window

0x5950,	// (0x0004075d) fshwr2_bg_pane

0xbb01,	// (0x0004690e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbb01,	// (0x0004690e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe95,	// (0x0004aca2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe95,	// (0x0004aca2) fshwr2_func_candi_cell_pane_g

0x56a5,	// (0x000404b2) bg_popup_window_pane_cp01

0x68dd,	// (0x000416ea) bg_popup_window_pane_g1_cp01

0x2eb2,	// (0x0003dcbf) bg_popup_window_pane_cp22_ParamLimits

0x2eb2,	// (0x0003dcbf) bg_popup_window_pane_cp22

0x2ec0,	// (0x0003dccd) listscroll_tmo_link_pane_ParamLimits

0x2ec0,	// (0x0003dccd) listscroll_tmo_link_pane

0x2f00,	// (0x0003dd0d) popup_tmo_note_window_g1_ParamLimits

0x2f00,	// (0x0003dd0d) popup_tmo_note_window_g1

0x2f0d,	// (0x0003dd1a) tmo_note_info_pane_ParamLimits

0x2f0d,	// (0x0003dd1a) tmo_note_info_pane

0x2f27,	// (0x0003dd34) list_tmo_note_info_pane_g1_ParamLimits

0x2f27,	// (0x0003dd34) list_tmo_note_info_pane_g1

0x2f3e,	// (0x0003dd4b) list_tmo_note_info_pane_g2_ParamLimits

0x2f3e,	// (0x0003dd4b) list_tmo_note_info_pane_g2

0x0001,

0xfe9a,	// (0x0004aca7) list_tmo_note_info_pane_g_ParamLimits

0xfe9a,	// (0x0004aca7) list_tmo_note_info_pane_g

0x2f5a,	// (0x0003dd67) list_tmo_note_info_text_pane_ParamLimits

0x2f5a,	// (0x0003dd67) list_tmo_note_info_text_pane

0x2fdb,	// (0x0003dde8) list_tmo_link_pane

0x2fe8,	// (0x0003ddf5) scroll_pane_cp20

0x2ff5,	// (0x0003de02) list_single_tmo_link_pane_ParamLimits

0x2ff5,	// (0x0003de02) list_single_tmo_link_pane

0x3005,	// (0x0003de12) list_single_tmo_link_pane_t1

0x3013,	// (0x0003de20) list_tmo_note_info_text_pane_t1_ParamLimits

0x3013,	// (0x0003de20) list_tmo_note_info_text_pane_t1

0x8108,	// (0x00042f15) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8108,	// (0x00042f15) aid_size_touch_scroll_bar_cp01

0x0e4d,	// (0x0003bc5a) aid_size_touch_slider_marker

0x901a,	// (0x00043e27) popup_settings_window_ParamLimits

0x901a,	// (0x00043e27) popup_settings_window

0x723f,	// (0x0004204c) popup_candi_list_indi_window

0xc1a8,	// (0x00046fb5) aid_touch_navi_pane_ParamLimits

0x58ac,	// (0x000406b9) rs_clock_indi_pane

0x58b5,	// (0x000406c2) sctrl_sk_bottom_pane_ParamLimits

0x58c6,	// (0x000406d3) sctrl_sk_top_pane_ParamLimits

0x59ce,	// (0x000407db) popup_fep_tooltip_window

0x27ef,	// (0x0003d5fc) aid_size_cell_widget_grid_ParamLimits

0x283f,	// (0x0003d64c) cell_ai5_widget_pane_g1_ParamLimits

0x283f,	// (0x0003d64c) cell_ai5_widget_pane_g1

0x28a1,	// (0x0003d6ae) cell_ai5_widget_pane_g6_ParamLimits

0x28ad,	// (0x0003d6ba) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0e,	// (0x0004ac1b) cell_ai5_widget_pane_g_ParamLimits

0xfe0e,	// (0x0004ac1b) cell_ai5_widget_pane_g

0x2a1d,	// (0x0003d82a) cell_ai5_widget_pane_t10_ParamLimits

0x2a1d,	// (0x0003d82a) cell_ai5_widget_pane_t10

0x2a60,	// (0x0003d86d) grid_ai5_widget_pane_ParamLimits

0x2af6,	// (0x0003d903) cell_contacts_ai5_widget_pane_ParamLimits

0x2af6,	// (0x0003d903) cell_contacts_ai5_widget_pane

0x2cd0,	// (0x0003dadd) popup_discreet_window_t3_ParamLimits

0x2cd0,	// (0x0003dadd) popup_discreet_window_t3

0xba4f,	// (0x0004685c) popup_fshwr2_char_preview_window_ParamLimits

0xba4f,	// (0x0004685c) popup_fshwr2_char_preview_window

0x2f78,	// (0x0003dd85) tmo_note_info_pane_t1

0x2f8d,	// (0x0003dd9a) tmo_note_info_pane_t2

0x2fa2,	// (0x0003ddaf) tmo_note_info_pane_t3

0x2fb7,	// (0x0003ddc4) tmo_note_info_pane_t4

0x2fc9,	// (0x0003ddd6) tmo_note_info_pane_t5

0x0004,

0xfe9f,	// (0x0004acac) tmo_note_info_pane_t

0x2fdb,	// (0x0003dde8) list_tmo_link_pane_ParamLimits

0x2fe8,	// (0x0003ddf5) scroll_pane_cp20_ParamLimits

0x4318,	// (0x0003f125) bg_popup_fep_char_preview_window_cp01

0x3214,	// (0x0003e021) popup_fshwr2_char_preview_window_t1

0x3222,	// (0x0003e02f) popup_candi_list_indi_window_g1

0x322b,	// (0x0003e038) bg_cell_contacts_ai5_widget_pane

0x3237,	// (0x0003e044) cell_contacts_ai5_widget_pane_g1

0x324c,	// (0x0003e059) cell_contacts_ai5_widget_pane_g2

0x3258,	// (0x0003e065) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaa,	// (0x0004acb7) cell_contacts_ai5_widget_pane_g

0x3264,	// (0x0003e071) cell_contacts_ai5_widget_pane_t1

0x8055,	// (0x00042e62) highlight_cell_shortcut_ai5_widget_pane_cp01

0x32d9,	// (0x0003e0e6) settings_container_pane

0xbfc3,	// (0x00046dd0) listscroll_set_pane_copy1

0xdad3,	// (0x000488e0) scroll_pane_cp121_copy1

0x32e5,	// (0x0003e0f2) set_content_pane_copy1

0x32ed,	// (0x0003e0fa) aid_height_set_list_copy1_ParamLimits

0x32ed,	// (0x0003e0fa) aid_height_set_list_copy1

0xd57f,	// (0x0004838c) aid_size_parent_copy1_ParamLimits

0xd57f,	// (0x0004838c) aid_size_parent_copy1

0x32f9,	// (0x0003e106) button_value_adjust_pane_cp6_copy1_ParamLimits

0x32f9,	// (0x0003e106) button_value_adjust_pane_cp6_copy1

0x94e7,	// (0x000442f4) list_highlight_pane_cp2_copy1_ParamLimits

0x94e7,	// (0x000442f4) list_highlight_pane_cp2_copy1

0x330d,	// (0x0003e11a) list_set_pane_copy1_ParamLimits

0x330d,	// (0x0003e11a) list_set_pane_copy1

0x3276,	// (0x0003e083) main_pane_set_t1_copy1_ParamLimits

0x3276,	// (0x0003e083) main_pane_set_t1_copy1

0x32b0,	// (0x0003e0bd) main_pane_set_t2_copy1_ParamLimits

0x32b0,	// (0x0003e0bd) main_pane_set_t2_copy1

0x339b,	// (0x0003e1a8) main_pane_set_t3_copy1

0x33a9,	// (0x0003e1b6) main_pane_set_t4_copy1

0x32cd,	// (0x0003e0da) set_content_pane_g1_copy1_ParamLimits

0x32cd,	// (0x0003e0da) set_content_pane_g1_copy1

0x33b7,	// (0x0003e1c4) setting_code_pane_copy1

0x33bf,	// (0x0003e1cc) setting_slider_graphic_pane_copy1

0x33bf,	// (0x0003e1cc) setting_slider_pane_copy1

0x33bf,	// (0x0003e1cc) setting_text_pane_copy1

0x33bf,	// (0x0003e1cc) setting_volume_pane_copy1

0x33c7,	// (0x0003e1d4) settings_code_pane_cp2_copy1

0x33cf,	// (0x0003e1dc) settings_code_pane_cp_copy1_ParamLimits

0x33cf,	// (0x0003e1dc) settings_code_pane_cp_copy1

0x68e6,	// (0x000416f3) volume_set_pane_copy1

0x33e3,	// (0x0003e1f0) volume_set_pane_g10_copy1

0x33eb,	// (0x0003e1f8) volume_set_pane_g1_copy1

0x33f3,	// (0x0003e200) volume_set_pane_g2_copy1

0x33fb,	// (0x0003e208) volume_set_pane_g3_copy1

0x3403,	// (0x0003e210) volume_set_pane_g4_copy1

0x340b,	// (0x0003e218) volume_set_pane_g5_copy1

0x3413,	// (0x0003e220) volume_set_pane_g6_copy1

0x341b,	// (0x0003e228) volume_set_pane_g7_copy1

0x3423,	// (0x0003e230) volume_set_pane_g8_copy1

0x342b,	// (0x0003e238) volume_set_pane_g9_copy1

0x79dd,	// (0x000427ea) bg_set_opt_pane_cp_copy1_ParamLimits

0x79dd,	// (0x000427ea) bg_set_opt_pane_cp_copy1

0x68ee,	// (0x000416fb) setting_slider_pane_t1_copy1_ParamLimits

0x68ee,	// (0x000416fb) setting_slider_pane_t1_copy1

0x6905,	// (0x00041712) setting_slider_pane_t2_copy1_ParamLimits

0x6905,	// (0x00041712) setting_slider_pane_t2_copy1

0x691e,	// (0x0004172b) setting_slider_pane_t3_copy1_ParamLimits

0x691e,	// (0x0004172b) setting_slider_pane_t3_copy1

0x456f,	// (0x0003f37c) slider_set_pane_copy1_ParamLimits

0x456f,	// (0x0003f37c) slider_set_pane_copy1

0x80a4,	// (0x00042eb1) set_opt_bg_pane_g1_copy2

0x80ac,	// (0x00042eb9) set_opt_bg_pane_g2_copy2

0x3433,	// (0x0003e240) set_opt_bg_pane_g3_copy2

0x80bc,	// (0x00042ec9) set_opt_bg_pane_g4_copy2

0x80c4,	// (0x00042ed1) set_opt_bg_pane_g5_copy2

0x80cc,	// (0x00042ed9) set_opt_bg_pane_g6_copy2

0x343b,	// (0x0003e248) set_opt_bg_pane_g7_copy2

0x3443,	// (0x0003e250) set_opt_bg_pane_g8_copy2

0x344b,	// (0x0003e258) set_opt_bg_pane_g9_copy2

0x5290,	// (0x0004009d) aid_size_touch_slider_mark_copy1_ParamLimits

0x5290,	// (0x0004009d) aid_size_touch_slider_mark_copy1

0xd591,	// (0x0004839e) slider_set_pane_g1_copy1

0xd5b3,	// (0x000483c0) slider_set_pane_g2_copy1

0x52b0,	// (0x000400bd) slider_set_pane_g3_copy1_ParamLimits

0x52b0,	// (0x000400bd) slider_set_pane_g3_copy1

0x52c4,	// (0x000400d1) slider_set_pane_g4_copy1_ParamLimits

0x52c4,	// (0x000400d1) slider_set_pane_g4_copy1

0x52dc,	// (0x000400e9) slider_set_pane_g5_copy1_ParamLimits

0x52dc,	// (0x000400e9) slider_set_pane_g5_copy1

0x52b0,	// (0x000400bd) slider_set_pane_g6_copy1_ParamLimits

0x52b0,	// (0x000400bd) slider_set_pane_g6_copy1

0x6935,	// (0x00041742) slider_set_pane_g7_copy1_ParamLimits

0x6935,	// (0x00041742) slider_set_pane_g7_copy1

0x798f,	// (0x0004279c) bg_set_opt_pane_cp2_copy1

0x79f3,	// (0x00042800) setting_slider_graphic_pane_g1_copy1

0x694b,	// (0x00041758) setting_slider_graphic_pane_t1_copy1

0x695a,	// (0x00041767) setting_slider_graphic_pane_t2_copy1

0x6969,	// (0x00041776) slider_set_pane_cp_copy1

0x345b,	// (0x0003e268) input_focus_pane_cp1_copy1

0x3464,	// (0x0003e271) list_set_text_pane_copy1

0x346c,	// (0x0003e279) setting_text_pane_g1_copy1

0x78e3,	// (0x000426f0) set_text_pane_t1_copy1

0x345b,	// (0x0003e268) input_focus_pane_cp2_copy1

0x346c,	// (0x0003e279) setting_code_pane_g1_copy1

0x3475,	// (0x0003e282) setting_code_pane_t1_copy1

0x31ff,	// (0x0003e00c) list_set_graphic_pane_copy1

0x798f,	// (0x0004279c) bg_set_opt_pane_cp4_copy1

0xbd32,	// (0x00046b3f) list_set_graphic_pane_g1_copy1_ParamLimits

0xbd32,	// (0x00046b3f) list_set_graphic_pane_g1_copy1

0x3483,	// (0x0003e290) list_set_graphic_pane_g2_copy1

0xbd4a,	// (0x00046b57) list_set_graphic_pane_t1_copy1_ParamLimits

0xbd4a,	// (0x00046b57) list_set_graphic_pane_t1_copy1

0xe197,	// (0x00048fa4) rs_clock_indi_pane_g1

0x348b,	// (0x0003e298) rs_clock_indi_pane_t1

0x3499,	// (0x0003e2a6) rs_indi_pane

0x34a1,	// (0x0003e2ae) rs_indi_pane_g1

0x34aa,	// (0x0003e2b7) rs_indi_pane_g2

0x3222,	// (0x0003e02f) rs_indi_pane_g3

0x0002,

0xfeb1,	// (0x0004acbe) rs_indi_pane_g

0xbfc3,	// (0x00046dd0) bg_popup_preview_window_pane_cp03

0x34b3,	// (0x0003e2c0) popup_fep_tooltip_window_t1

0xead8,	// (0x000498e5) popup_note2_window_g2_ParamLimits

0xead8,	// (0x000498e5) popup_note2_window_g2

0x0001,

0xfc45,	// (0x0004aa52) popup_note2_window_g_ParamLimits

0xfc45,	// (0x0004aa52) popup_note2_window_g

0xef53,	// (0x00049d60) bg_popup_sub_pane_cp11_ParamLimits

0xef60,	// (0x00049d6d) cell_ai3_links_pane_g1_ParamLimits

0xef77,	// (0x00049d84) cell_ai3_links_pane_t1

0x78e3,	// (0x000426f0) set_text_pane_t1_copy1_ParamLimits

0xbeea,	// (0x00046cf7) cell_graphic_popup_pane_cp2_ParamLimits

0xbeea,	// (0x00046cf7) cell_graphic_popup_pane_cp2

0x34c1,	// (0x0003e2ce) cell_graphic_popup_pane_g1_cp2

0x7d93,	// (0x00042ba0) cell_graphic_popup_pane_g2_cp2

0x34c9,	// (0x0003e2d6) cell_graphic_popup_pane_g3_cp2

0x34d1,	// (0x0003e2de) cell_graphic_popup_pane_t2_cp2

0x7da4,	// (0x00042bb1) grid_highlight_pane_cp3_cp2

0x839b,	// (0x000431a8) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8055,	// (0x00042e62) main_tmo_pane_ParamLimits

0xaf56,	// (0x00045d63) popup_tmo_big_image_note_window

0x282e,	// (0x0003d63b) cell_ai5_widget_list_pane

0x2836,	// (0x0003d643) cell_ai5_widget_lrg_icon_pane

0x2f78,	// (0x0003dd85) tmo_note_info_pane_t1_ParamLimits

0x2f8d,	// (0x0003dd9a) tmo_note_info_pane_t2_ParamLimits

0x2fa2,	// (0x0003ddaf) tmo_note_info_pane_t3_ParamLimits

0x2fb7,	// (0x0003ddc4) tmo_note_info_pane_t4_ParamLimits

0x2fc9,	// (0x0003ddd6) tmo_note_info_pane_t5_ParamLimits

0xfe9f,	// (0x0004acac) tmo_note_info_pane_t_ParamLimits

0x32d9,	// (0x0003e0e6) settings_container_pane_ParamLimits

0x3453,	// (0x0003e260) indicator_popup_pane_cp5

0x3453,	// (0x0003e260) indicator_popup_pane_cp6

0x31ff,	// (0x0003e00c) list_set_graphic_pane_copy1_ParamLimits

0x7903,	// (0x00042710) bg_popup_window_pane_cp23

0x34df,	// (0x0003e2ec) popup_tmo_big_image_note_window_g1

0x34e8,	// (0x0003e2f5) popup_tmo_big_image_note_window_t1

0x34f6,	// (0x0003e303) popup_tmo_big_image_note_window_t2

0x3504,	// (0x0003e311) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb8,	// (0x0004acc5) popup_tmo_big_image_note_window_t

0xe197,	// (0x00048fa4) cell_ai5_widget_lrg_icon_pane_g1

0x3512,	// (0x0003e31f) cell_ai5_widget_lrg_icon_pane_t1

0x302c,	// (0x0003de39) cell_ai5_widget_list_row_pane_ParamLimits

0x302c,	// (0x0003de39) cell_ai5_widget_list_row_pane

0x3043,	// (0x0003de50) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3043,	// (0x0003de50) cell_ai5_widget_list_row_pane_g1

0x3050,	// (0x0003de5d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x3050,	// (0x0003de5d) cell_ai5_widget_list_row_pane_t1

0x3081,	// (0x0003de8e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3081,	// (0x0003de8e) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebf,	// (0x0004accc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebf,	// (0x0004accc) cell_ai5_widget_list_row_pane_t

0x4318,	// (0x0003f125) main_fep_vtchi_ss_pane

0x352d,	// (0x0003e33a) popup_fep_char_pre_window

0x3535,	// (0x0003e342) popup_fep_ituss_window

0x30d4,	// (0x0003dee1) popup_fep_vkbss_window

0x3570,	// (0x0003e37d) grid_vkbss_keypad_pane_ParamLimits

0x3570,	// (0x0003e37d) grid_vkbss_keypad_pane

0x3580,	// (0x0003e38d) ituss_keypad_pane

0x697b,	// (0x00041788) aid_vkbss_key_offset_ParamLimits

0x697b,	// (0x00041788) aid_vkbss_key_offset

0x6987,	// (0x00041794) cell_vkbss_key_pane_ParamLimits

0x6987,	// (0x00041794) cell_vkbss_key_pane

0x358f,	// (0x0003e39c) bg_cell_vkbss_key_g1_ParamLimits

0x358f,	// (0x0003e39c) bg_cell_vkbss_key_g1

0x359b,	// (0x0003e3a8) cell_vkbss_key_3p_pane_ParamLimits

0x359b,	// (0x0003e3a8) cell_vkbss_key_3p_pane

0x35d1,	// (0x0003e3de) cell_vkbss_key_g1_ParamLimits

0x35d1,	// (0x0003e3de) cell_vkbss_key_g1

0x3607,	// (0x0003e414) cell_vkbss_key_t1_ParamLimits

0x3607,	// (0x0003e414) cell_vkbss_key_t1

0x69bb,	// (0x000417c8) cell_ituss_key_pane_ParamLimits

0x69bb,	// (0x000417c8) cell_ituss_key_pane

0x3677,	// (0x0003e484) bg_cell_ituss_key_g1_ParamLimits

0x3677,	// (0x0003e484) bg_cell_ituss_key_g1

0x3683,	// (0x0003e490) cell_ituss_key_pane_g1_ParamLimits

0x3683,	// (0x0003e490) cell_ituss_key_pane_g1

0x69cc,	// (0x000417d9) cell_ituss_key_pane_g2_ParamLimits

0x69cc,	// (0x000417d9) cell_ituss_key_pane_g2

0x0005,

0xfec6,	// (0x0004acd3) cell_ituss_key_pane_g_ParamLimits

0xfec6,	// (0x0004acd3) cell_ituss_key_pane_g

0x6a50,	// (0x0004185d) cell_ituss_key_t1_ParamLimits

0x6a50,	// (0x0004185d) cell_ituss_key_t1

0x6a86,	// (0x00041893) cell_ituss_key_t2_ParamLimits

0x6a86,	// (0x00041893) cell_ituss_key_t2

0x6ab7,	// (0x000418c4) cell_ituss_key_t3_ParamLimits

0x6ab7,	// (0x000418c4) cell_ituss_key_t3

0x6a86,	// (0x00041893) cell_ituss_key_t4_ParamLimits

0x6a86,	// (0x00041893) cell_ituss_key_t4

0x0004,

0xfed3,	// (0x0004ace0) cell_ituss_key_t_ParamLimits

0xfed3,	// (0x0004ace0) cell_ituss_key_t

0x36b9,	// (0x0003e4c6) cell_vkbss_key_3p_pane_g1

0x36b1,	// (0x0003e4be) cell_vkbss_key_3p_pane_g2

0x36a9,	// (0x0003e4b6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x0004aceb) cell_vkbss_key_3p_pane_g

0xbfc3,	// (0x00046dd0) bg_popup_fep_char_preview_window_cp02

0x36c1,	// (0x0003e4ce) popup_fep_char_pre_window_t1

0x27dc,	// (0x0003d5e9) main_ai5_sk_pane

0x322b,	// (0x0003e038) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x3237,	// (0x0003e044) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x324c,	// (0x0003e059) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x3258,	// (0x0003e065) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaa,	// (0x0004acb7) cell_contacts_ai5_widget_pane_g_ParamLimits

0x3264,	// (0x0003e071) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8055,	// (0x00042e62) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x30e1,	// (0x0003deee) main_ai5_sk_pane_g1

0xc755,	// (0x00047562) popup_query_code_window_g1

0x30c5,	// (0x0003ded2) popup_fep_vkb_icf_pane

0x3547,	// (0x0003e354) popup_fep_vtchi_icf_pane

0x94e7,	// (0x000442f4) bg_icf_pane

0x94e7,	// (0x000442f4) list_vkb_icf_pane

0x36cf,	// (0x0003e4dc) bg_icf_pane_cp01

0x36e2,	// (0x0003e4ef) vtchi_icf_list_pane

0x3136,	// (0x0003df43) list_vkb_icf_pane_t1_ParamLimits

0x3136,	// (0x0003df43) list_vkb_icf_pane_t1

0x36f2,	// (0x0003e4ff) vtchi_icf_list_pane_t1_ParamLimits

0x36f2,	// (0x0003e4ff) vtchi_icf_list_pane_t1

0x3535,	// (0x0003e342) popup_fep_ituss_window_ParamLimits

0x3547,	// (0x0003e354) popup_fep_vtchi_icf_pane_ParamLimits

0x3580,	// (0x0003e38d) ituss_keypad_pane_ParamLimits

0x6971,	// (0x0004177e) ituss_sks_pane

0x94e7,	// (0x000442f4) bg_icf_pane_ParamLimits

0x30a9,	// (0x0003deb6) icf_edit_indi_pane_ParamLimits

0x30a9,	// (0x0003deb6) icf_edit_indi_pane

0x94e7,	// (0x000442f4) list_vkb_icf_pane_ParamLimits

0x36cf,	// (0x0003e4dc) bg_icf_pane_cp01_ParamLimits

0x3520,	// (0x0003e32d) icf_edit_indi_pane_cp01_ParamLimits

0x3520,	// (0x0003e32d) icf_edit_indi_pane_cp01

0x36ea,	// (0x0003e4f7) vtchi_query_pane

0x265f,	// (0x0003d46c) icf_edit_indi_pane_g1_ParamLimits

0x265f,	// (0x0003d46c) icf_edit_indi_pane_g1

0x314c,	// (0x0003df59) icf_edit_indi_pane_g2_ParamLimits

0x314c,	// (0x0003df59) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0004ad16) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0004ad16) icf_edit_indi_pane_g

0x3160,	// (0x0003df6d) icf_edit_indi_pane_t1

0x370a,	// (0x0003e517) bg_input_focus_pane_cp042

0x3713,	// (0x0003e520) vtchi_button_pane

0x371c,	// (0x0003e529) vtchi_query_pane_t1

0x372a,	// (0x0003e537) vtchi_query_pane_t2

0x3738,	// (0x0003e545) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0004ad05) vtchi_query_pane_t

0x4318,	// (0x0003f125) bg_button_pane_cp13

0x3746,	// (0x0003e553) vtchi_button_pane_g1

0x6afa,	// (0x00041907) ituss_sks_pane_g1

0x6b03,	// (0x00041910) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0004ad0c) ituss_sks_pane_g

0x375c,	// (0x0003e569) ituss_sks_pane_t1

0x374e,	// (0x0003e55b) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0004ad11) ituss_sks_pane_t

0xddc4,	// (0x00048bd1) indicator_nsta_pane_cp_g1

0xddcd,	// (0x00048bda) indicator_nsta_pane_cp_g2

0xddd5,	// (0x00048be2) indicator_nsta_pane_cp_g3

0xdddd,	// (0x00048bea) indicator_nsta_pane_cp_g4

0xdde5,	// (0x00048bf2) indicator_nsta_pane_cp_g5

0xdded,	// (0x00048bfa) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0004a890) indicator_nsta_pane_cp_g

0x238a,	// (0x0003d197) cell_graphic2_pane_t2_ParamLimits

0x238a,	// (0x0003d197) cell_graphic2_pane_t2

0x0001,

0xfd95,	// (0x0004aba2) cell_graphic2_pane_t_ParamLimits

0xfd95,	// (0x0004aba2) cell_graphic2_pane_t

0x23c2,	// (0x0003d1cf) cell_graphic2_control_pane_t1

0x96d4,	// (0x000444e1) signal_pane_g3_ParamLimits

0x96d4,	// (0x000444e1) signal_pane_g3

0x96e8,	// (0x000444f5) signal_pane_g4_ParamLimits

0x96e8,	// (0x000444f5) signal_pane_g4

0x3093,	// (0x0003dea0) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x3093,	// (0x0003dea0) cell_ai5_widget_list_row_pane_t3

0x3697,	// (0x0003e4a4) cell_ituss_key_pane_t1_ParamLimits

0x3697,	// (0x0003e4a4) cell_ituss_key_pane_t1

0xc423,	// (0x00047230) form_field_data_wide_pane_vc_t2_ParamLimits

0xc423,	// (0x00047230) form_field_data_wide_pane_vc_t2

0xc435,	// (0x00047242) form_field_data_wide_pane_vc_t3_ParamLimits

0xc435,	// (0x00047242) form_field_data_wide_pane_vc_t3

0x0002,

0xf7dd,	// (0x0004a5ea) form_field_data_wide_pane_vc_t_ParamLimits

0xf7dd,	// (0x0004a5ea) form_field_data_wide_pane_vc_t

0xdb18,	// (0x00048925) form_field_slider_wide_pane_vc_t3_ParamLimits

0xdb18,	// (0x00048925) form_field_slider_wide_pane_vc_t3

0xdbd6,	// (0x000489e3) form_field_popup_wide_pane_vc_t2_ParamLimits

0xdbd6,	// (0x000489e3) form_field_popup_wide_pane_vc_t2

0xdbeb,	// (0x000489f8) form_field_popup_wide_pane_vc_t3_ParamLimits

0xdbeb,	// (0x000489f8) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0004a87f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0004a87f) form_field_popup_wide_pane_vc_t

0xb9cf,	// (0x000467dc) aid_fshwr2_btn_pane_ParamLimits

0xb9e3,	// (0x000467f0) aid_fshwr2_syb_pane_ParamLimits

0xb9f7,	// (0x00046804) aid_fshwr2_txt_pane_ParamLimits

0x5950,	// (0x0004075d) fshwr2_bg_pane_ParamLimits

0xba07,	// (0x00046814) fshwr2_func_candi_pane_ParamLimits

0xba1f,	// (0x0004682c) fshwr2_hwr_syb_pane_ParamLimits

0xba37,	// (0x00046844) fshwr2_icf_pane_ParamLimits

0x75c5,	// (0x000423d2) list_double_graphic_pane_vc_g4_ParamLimits

0x75c5,	// (0x000423d2) list_double_graphic_pane_vc_g4

0x69ec,	// (0x000417f9) cell_ituss_key_pane_g3_ParamLimits

0x69ec,	// (0x000417f9) cell_ituss_key_pane_g3

0x6ae8,	// (0x000418f5) cell_ituss_key_t5_ParamLimits

0x6ae8,	// (0x000418f5) cell_ituss_key_t5

0x30d4,	// (0x0003dee1) popup_fep_vkbss_window_ParamLimits

0x27e6,	// (0x0003d5f3) aid_cell_ai5_quarter

0x3160,	// (0x0003df6d) icf_edit_indi_pane_t1_ParamLimits

0x7bce,	// (0x000429db) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7bce,	// (0x000429db) aid_tch_indicator_popup_pane_cp2

0x7be1,	// (0x000429ee) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7be1,	// (0x000429ee) aid_tch_query_popup_data_pane_cp2

0xc6fd,	// (0x0004750a) aid_tch_query_popup_pane_ParamLimits

0xc6fd,	// (0x0004750a) aid_tch_query_popup_pane

0xc6fd,	// (0x0004750a) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xc6fd,	// (0x0004750a) aid_tch_query_popup_data_pane_cp1

0x94e7,	// (0x000442f4) cell_fshwr2_syb_bg_pane_ParamLimits

0xbb2b,	// (0x00046938) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbb3b,	// (0x00046948) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x30c5,	// (0x0003ded2) popup_fep_vkb_icf_pane_ParamLimits

0xb96d,	// (0x0004677a) bg_popup_fep_char_preview_window_g10

0x28f5,	// (0x0003d702) cell_ai5_widget_pane_g11_ParamLimits

0x28f5,	// (0x0003d702) cell_ai5_widget_pane_g11

0x2901,	// (0x0003d70e) cell_ai5_widget_pane_g12_ParamLimits

0x2901,	// (0x0003d70e) cell_ai5_widget_pane_g12

0x290d,	// (0x0003d71a) cell_ai5_widget_pane_g13_ParamLimits

0x290d,	// (0x0003d71a) cell_ai5_widget_pane_g13

0x2a3c,	// (0x0003d849) cell_ai5_widget_pane_t11_ParamLimits

0x2a3c,	// (0x0003d849) cell_ai5_widget_pane_t11

0x2a4e,	// (0x0003d85b) cell_ai5_widget_pane_t12_ParamLimits

0x2a4e,	// (0x0003d85b) cell_ai5_widget_pane_t12

0x69f8,	// (0x00041805) cell_ituss_key_pane_g4_ParamLimits

0x69f8,	// (0x00041805) cell_ituss_key_pane_g4

0x6a14,	// (0x00041821) cell_ituss_key_pane_g5_ParamLimits

0x6a14,	// (0x00041821) cell_ituss_key_pane_g5

0x6a30,	// (0x0004183d) cell_ituss_key_pane_g6_ParamLimits

0x6a30,	// (0x0004183d) cell_ituss_key_pane_g6

0xc34f,	// (0x0004715c) bg_icf_pane_g1

0x30ea,	// (0x0003def7) bg_icf_pane_g2

0x30f4,	// (0x0003df01) bg_icf_pane_g3

0x30fc,	// (0x0003df09) bg_icf_pane_g4

0x3106,	// (0x0003df13) bg_icf_pane_g5

0x3110,	// (0x0003df1d) bg_icf_pane_g6

0x311a,	// (0x0003df27) bg_icf_pane_g7

0x3122,	// (0x0003df2f) bg_icf_pane_g8

0x312c,	// (0x0003df39) bg_icf_pane_g9

0x0008,

0xfee5,	// (0x0004acf2) bg_icf_pane_g

0x355d,	// (0x0003e36a) popup_hyb_candi_window_ParamLimits

0x355d,	// (0x0003e36a) popup_hyb_candi_window

0xc3c3,	// (0x000471d0) bg_popup_sub_pane_cp01_ParamLimits

0xc3c3,	// (0x000471d0) bg_popup_sub_pane_cp01

0x376a,	// (0x0003e577) entry_hyb_candi_pane_ParamLimits

0x376a,	// (0x0003e577) entry_hyb_candi_pane

0x3779,	// (0x0003e586) grid_hyb_candi_pane_ParamLimits

0x3779,	// (0x0003e586) grid_hyb_candi_pane

0x378e,	// (0x0003e59b) grid_hyb_phrase_pane_ParamLimits

0x378e,	// (0x0003e59b) grid_hyb_phrase_pane

0x379d,	// (0x0003e5aa) cell_hyb_candi_pane_ParamLimits

0x379d,	// (0x0003e5aa) cell_hyb_candi_pane

0x37b5,	// (0x0003e5c2) cell_hyb_candi_scroll_pane

0x8562,	// (0x0004336f) cell_hyb_candi_pane_g1

0x37be,	// (0x0003e5cb) cell_hyb_candi_pane_t1

0x37cc,	// (0x0003e5d9) cell_hyb_phrase_pane

0x8562,	// (0x0004336f) cell_hyb_phrase_pane_g1

0x37d5,	// (0x0003e5e2) cell_hyb_phrase_pane_t1

0x37e3,	// (0x0003e5f0) entry_hyb_candi_pane_t1

0xbfc3,	// (0x00046dd0) input_focus_pane_cp06

0x37f1,	// (0x0003e5fe) cell_hyb_candi_scroll_pane_g1

0x37f9,	// (0x0003e606) cell_hyb_candi_scroll_pane_g1_aid

0x3801,	// (0x0003e60e) cell_hyb_candi_scroll_pane_g2

0x3809,	// (0x0003e616) cell_hyb_candi_scroll_pane_g2_aid

0x3811,	// (0x0003e61e) cell_hyb_candi_scroll_pane_g3

0x3819,	// (0x0003e626) cell_hyb_candi_scroll_pane_g4
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large

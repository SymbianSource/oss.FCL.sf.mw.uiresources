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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002f049 };

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
0xd0aa,	// (0x0003c0f3) Screen

0xd0b6,	// (0x0003c0ff) application_window_ParamLimits

0xd0b6,	// (0x0003c0ff) application_window

0x365b,	// (0x000326a4) screen_g1

0xb7ab,	// (0x0003a7f4) area_bottom_pane_ParamLimits

0xb7ab,	// (0x0003a7f4) area_bottom_pane

0x01aa,	// (0x0002f1f3) area_top_pane_ParamLimits

0x01aa,	// (0x0002f1f3) area_top_pane

0x0248,	// (0x0002f291) main_pane_ParamLimits

0x0248,	// (0x0002f291) main_pane

0x3665,	// (0x000326ae) misc_graphics

0xd7f2,	// (0x0003c83b) battery_pane_ParamLimits

0xd7f2,	// (0x0003c83b) battery_pane

0x5d23,	// (0x00034d6c) bg_status_flat_pane_g8

0x5d2b,	// (0x00034d74) bg_status_flat_pane_g9

0x5105,	// (0x0003414e) context_pane_ParamLimits

0x5105,	// (0x0003414e) context_pane

0xd95d,	// (0x0003c9a6) navi_pane_ParamLimits

0xd95d,	// (0x0003c9a6) navi_pane

0xd9db,	// (0x0003ca24) signal_pane_ParamLimits

0xd9db,	// (0x0003ca24) signal_pane

0x0008,

0xf874,	// (0x0003e8bd) bg_status_flat_pane_g

0xda6b,	// (0x0003cab4) status_pane_g1_ParamLimits

0xda6b,	// (0x0003cab4) status_pane_g1

0xda81,	// (0x0003caca) status_pane_g2_ParamLimits

0xda81,	// (0x0003caca) status_pane_g2

0x532c,	// (0x00034375) status_pane_g3_ParamLimits

0x532c,	// (0x00034375) status_pane_g3

0x0004,

0xf7a0,	// (0x0003e7e9) status_pane_g_ParamLimits

0xf7a0,	// (0x0003e7e9) status_pane_g

0xda8d,	// (0x0003cad6) title_pane_ParamLimits

0xda8d,	// (0x0003cad6) title_pane

0xdaf0,	// (0x0003cb39) uni_indicator_pane_ParamLimits

0xdaf0,	// (0x0003cb39) uni_indicator_pane

0x4f73,	// (0x00033fbc) bg_list_pane_ParamLimits

0x4f73,	// (0x00033fbc) bg_list_pane

0xd765,	// (0x0003c7ae) find_pane

0x552b,	// (0x00034574) listscroll_app_pane_ParamLimits

0x552b,	// (0x00034574) listscroll_app_pane

0x4f9f,	// (0x00033fe8) listscroll_form_pane

0xc0fa,	// (0x0003b143) listscroll_gen_pane_ParamLimits

0xc0fa,	// (0x0003b143) listscroll_gen_pane

0x12ca,	// (0x00030313) listscroll_set_pane

0x6899,	// (0x000358e2) main_idle_act_pane

0x4c6f,	// (0x00033cb8) main_idle_trad_pane

0x4c6f,	// (0x00033cb8) main_list_empty_pane

0x4f93,	// (0x00033fdc) main_midp_pane

0x4fb9,	// (0x00034002) main_pane_g1_ParamLimits

0x4fb9,	// (0x00034002) main_pane_g1

0xc10e,	// (0x0003b157) popup_ai_message_window_ParamLimits

0xc10e,	// (0x0003b157) popup_ai_message_window

0xc19f,	// (0x0003b1e8) popup_fep_china_uni_window_ParamLimits

0xc19f,	// (0x0003b1e8) popup_fep_china_uni_window

0x13e2,	// (0x0003042b) popup_fep_japan_candidate_window_ParamLimits

0x13e2,	// (0x0003042b) popup_fep_japan_candidate_window

0x1402,	// (0x0003044b) popup_fep_japan_predictive_window_ParamLimits

0x1402,	// (0x0003044b) popup_fep_japan_predictive_window

0xc1fb,	// (0x0003b244) popup_find_window

0xc218,	// (0x0003b261) popup_grid_graphic_window_ParamLimits

0xc218,	// (0x0003b261) popup_grid_graphic_window

0x1469,	// (0x000304b2) popup_large_graphic_colour_window

0xc2b6,	// (0x0003b2ff) popup_menu_window_ParamLimits

0xc2b6,	// (0x0003b2ff) popup_menu_window

0xc488,	// (0x0003b4d1) popup_note_image_window

0xc44e,	// (0x0003b497) popup_note_wait_window_ParamLimits

0xc44e,	// (0x0003b497) popup_note_wait_window

0xc4a0,	// (0x0003b4e9) popup_note_window_ParamLimits

0xc4a0,	// (0x0003b4e9) popup_note_window

0xc546,	// (0x0003b58f) popup_query_code_window_ParamLimits

0xc546,	// (0x0003b58f) popup_query_code_window

0x16b1,	// (0x000306fa) popup_query_data_code_window_ParamLimits

0x16b1,	// (0x000306fa) popup_query_data_code_window

0xc580,	// (0x0003b5c9) popup_query_data_window_ParamLimits

0xc580,	// (0x0003b5c9) popup_query_data_window

0xc602,	// (0x0003b64b) popup_query_sat_info_window_ParamLimits

0xc602,	// (0x0003b64b) popup_query_sat_info_window

0xc699,	// (0x0003b6e2) popup_snote_single_graphic_window_ParamLimits

0xc699,	// (0x0003b6e2) popup_snote_single_graphic_window

0xc699,	// (0x0003b6e2) popup_snote_single_text_window_ParamLimits

0xc699,	// (0x0003b6e2) popup_snote_single_text_window

0x1738,	// (0x00030781) popup_sub_window_general

0x1868,	// (0x000308b1) popup_window_general_ParamLimits

0x1868,	// (0x000308b1) popup_window_general

0x4fc7,	// (0x00034010) power_save_pane

0xbf7f,	// (0x0003afc8) control_pane_g1_ParamLimits

0xbf7f,	// (0x0003afc8) control_pane_g1

0xbfa8,	// (0x0003aff1) control_pane_g2_ParamLimits

0xbfa8,	// (0x0003aff1) control_pane_g2

0x4f36,	// (0x00033f7f) control_pane_g3_ParamLimits

0x4f36,	// (0x00033f7f) control_pane_g3

0x0007,

0xf788,	// (0x0003e7d1) control_pane_g_ParamLimits

0xf788,	// (0x0003e7d1) control_pane_g

0xbfe9,	// (0x0003b032) control_pane_t1_ParamLimits

0xbfe9,	// (0x0003b032) control_pane_t1

0xc04f,	// (0x0003b098) control_pane_t2_ParamLimits

0xc04f,	// (0x0003b098) control_pane_t2

0x0002,

0xf799,	// (0x0003e7e2) control_pane_t_ParamLimits

0xf799,	// (0x0003e7e2) control_pane_t

0xd697,	// (0x0003c6e0) navi_navi_volume_pane_cp1

0xd69f,	// (0x0003c6e8) status_small_icon_pane

0x4e6b,	// (0x00033eb4) status_small_pane_g1_ParamLimits

0x4e6b,	// (0x00033eb4) status_small_pane_g1

0xd6a7,	// (0x0003c6f0) status_small_pane_g2_ParamLimits

0xd6a7,	// (0x0003c6f0) status_small_pane_g2

0xd6b3,	// (0x0003c6fc) status_small_pane_g3_ParamLimits

0xd6b3,	// (0x0003c6fc) status_small_pane_g3

0xd6bf,	// (0x0003c708) status_small_pane_g4_ParamLimits

0xd6bf,	// (0x0003c708) status_small_pane_g4

0xd6cb,	// (0x0003c714) status_small_pane_g5_ParamLimits

0xd6cb,	// (0x0003c714) status_small_pane_g5

0xd6d9,	// (0x0003c722) status_small_pane_g6_ParamLimits

0xd6d9,	// (0x0003c722) status_small_pane_g6

0x0007,

0xf777,	// (0x0003e7c0) status_small_pane_g_ParamLimits

0xf777,	// (0x0003e7c0) status_small_pane_g

0xd708,	// (0x0003c751) status_small_pane_t1

0xd72a,	// (0x0003c773) status_small_wait_pane_ParamLimits

0xd72a,	// (0x0003c773) status_small_wait_pane

0xd562,	// (0x0003c5ab) aid_levels_signal_ParamLimits

0xd562,	// (0x0003c5ab) aid_levels_signal

0xd57a,	// (0x0003c5c3) signal_pane_g1_ParamLimits

0xd57a,	// (0x0003c5c3) signal_pane_g1

0xd595,	// (0x0003c5de) signal_pane_g2_ParamLimits

0xd595,	// (0x0003c5de) signal_pane_g2

0x0003,

0xf708,	// (0x0003e751) signal_pane_g_ParamLimits

0xf708,	// (0x0003e751) signal_pane_g

0x4743,	// (0x0003378c) context_pane_g1

0xd0c6,	// (0x0003c10f) title_pane_g1

0xd0fd,	// (0x0003c146) title_pane_t1

0x370d,	// (0x00032756) title_pane_t2

0x3733,	// (0x0003277c) title_pane_t3

0x0002,

0xf557,	// (0x0003e5a0) title_pane_t

0xdb18,	// (0x0003cb61) aid_levels_battery_ParamLimits

0xdb18,	// (0x0003cb61) aid_levels_battery

0xdb34,	// (0x0003cb7d) battery_pane_g1_ParamLimits

0xdb34,	// (0x0003cb7d) battery_pane_g1

0xdb51,	// (0x0003cb9a) battery_pane_g2_ParamLimits

0xdb51,	// (0x0003cb9a) battery_pane_g2

0x0001,

0xf7ab,	// (0x0003e7f4) battery_pane_g_ParamLimits

0xf7ab,	// (0x0003e7f4) battery_pane_g

0xdd12,	// (0x0003cd5b) uni_indicator_pane_g1

0xdd27,	// (0x0003cd70) uni_indicator_pane_g2

0xdd3d,	// (0x0003cd86) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0003e965) uni_indicator_pane_g

0x4ae1,	// (0x00033b2a) navi_icon_pane_ParamLimits

0x4ae1,	// (0x00033b2a) navi_icon_pane

0x4a1f,	// (0x00033a68) navi_midp_pane

0x4afd,	// (0x00033b46) navi_navi_pane

0x4b07,	// (0x00033b50) navi_text_pane_ParamLimits

0x4b07,	// (0x00033b50) navi_text_pane

0x365b,	// (0x000326a4) status_small_wait_pane_g1

0x3b88,	// (0x00032bd1) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0003e960) status_small_wait_pane_g

0x637e,	// (0x000353c7) navi_navi_icon_text_pane

0x6386,	// (0x000353cf) navi_navi_pane_g1_ParamLimits

0x6386,	// (0x000353cf) navi_navi_pane_g1

0x6398,	// (0x000353e1) navi_navi_pane_g2_ParamLimits

0x6398,	// (0x000353e1) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0003e92e) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0003e92e) navi_navi_pane_g

0x63aa,	// (0x000353f3) navi_navi_tabs_pane

0x63b3,	// (0x000353fc) navi_navi_text_pane

0x637e,	// (0x000353c7) navi_navi_volume_pane

0x635a,	// (0x000353a3) navi_text_pane_t1

0x634e,	// (0x00035397) navi_icon_pane_g1

0x62a1,	// (0x000352ea) navi_navi_text_pane_t1

0x1b14,	// (0x00030b5d) navi_navi_volume_pane_g1

0x1b1c,	// (0x00030b65) volume_small_pane

0x6207,	// (0x00035250) navi_navi_icon_text_pane_g1

0x620f,	// (0x00035258) navi_navi_icon_text_pane_t1

0x4afd,	// (0x00033b46) navi_tabs_2_long_pane

0x4afd,	// (0x00033b46) navi_tabs_2_pane

0x4afd,	// (0x00033b46) navi_tabs_3_long_pane

0x4afd,	// (0x00033b46) navi_tabs_3_pane

0x4afd,	// (0x00033b46) navi_tabs_4_pane

0x1af4,	// (0x00030b3d) tabs_2_active_pane_ParamLimits

0x1af4,	// (0x00030b3d) tabs_2_active_pane

0x1b04,	// (0x00030b4d) tabs_2_passive_pane_ParamLimits

0x1b04,	// (0x00030b4d) tabs_2_passive_pane

0x1ac2,	// (0x00030b0b) tabs_3_active_pane_ParamLimits

0x1ac2,	// (0x00030b0b) tabs_3_active_pane

0x1ad2,	// (0x00030b1b) tabs_3_passive_pane_ParamLimits

0x1ad2,	// (0x00030b1b) tabs_3_passive_pane

0x1ae3,	// (0x00030b2c) tabs_3_passive_pane_cp_ParamLimits

0x1ae3,	// (0x00030b2c) tabs_3_passive_pane_cp

0x1a7e,	// (0x00030ac7) tabs_4_active_pane_ParamLimits

0x1a7e,	// (0x00030ac7) tabs_4_active_pane

0x1a8f,	// (0x00030ad8) tabs_4_passive_pane_ParamLimits

0x1a8f,	// (0x00030ad8) tabs_4_passive_pane

0x1aa0,	// (0x00030ae9) tabs_4_passive_pane_cp_ParamLimits

0x1aa0,	// (0x00030ae9) tabs_4_passive_pane_cp

0x1ab1,	// (0x00030afa) tabs_4_passive_pane_cp2_ParamLimits

0x1ab1,	// (0x00030afa) tabs_4_passive_pane_cp2

0x1a5a,	// (0x00030aa3) tabs_2_long_active_pane_ParamLimits

0x1a5a,	// (0x00030aa3) tabs_2_long_active_pane

0x1a6c,	// (0x00030ab5) tabs_2_long_passive_pane_ParamLimits

0x1a6c,	// (0x00030ab5) tabs_2_long_passive_pane

0x1a1b,	// (0x00030a64) tabs_3_long_active_pane_ParamLimits

0x1a1b,	// (0x00030a64) tabs_3_long_active_pane

0x1a2e,	// (0x00030a77) tabs_3_long_passive_pane_ParamLimits

0x1a2e,	// (0x00030a77) tabs_3_long_passive_pane

0x1a47,	// (0x00030a90) tabs_3_long_passive_pane_cp_ParamLimits

0x1a47,	// (0x00030a90) tabs_3_long_passive_pane_cp

0x19c1,	// (0x00030a0a) volume_small_pane_g1

0x19ca,	// (0x00030a13) volume_small_pane_g2

0x19d3,	// (0x00030a1c) volume_small_pane_g3

0x19dc,	// (0x00030a25) volume_small_pane_g4

0x19e5,	// (0x00030a2e) volume_small_pane_g5

0x19ee,	// (0x00030a37) volume_small_pane_g6

0x19f7,	// (0x00030a40) volume_small_pane_g7

0x1a00,	// (0x00030a49) volume_small_pane_g8

0x1a09,	// (0x00030a52) volume_small_pane_g9

0x1a12,	// (0x00030a5b) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0003e8fa) volume_small_pane_g

0x39c0,	// (0x00032a09) bg_active_tab_pane_cp2_ParamLimits

0x39c0,	// (0x00032a09) bg_active_tab_pane_cp2

0x3753,	// (0x0003279c) tabs_3_active_pane_g1

0xd189,	// (0x0003c1d2) tabs_3_active_pane_t1

0x39c0,	// (0x00032a09) bg_passive_tab_pane_cp2_ParamLimits

0x39c0,	// (0x00032a09) bg_passive_tab_pane_cp2

0x3753,	// (0x0003279c) tabs_3_passive_pane_g1

0xd189,	// (0x0003c1d2) tabs_3_passive_pane_t1

0x39c0,	// (0x00032a09) bg_active_tab_pane_cp3_ParamLimits

0x39c0,	// (0x00032a09) bg_active_tab_pane_cp3

0x376d,	// (0x000327b6) tabs_4_active_pane_g1

0xd19b,	// (0x0003c1e4) tabs_4_active_pane_t1

0x39c0,	// (0x00032a09) bg_passive_tab_pane_cp3_ParamLimits

0x39c0,	// (0x00032a09) bg_passive_tab_pane_cp3

0x376d,	// (0x000327b6) tabs_4_1_passive_pane_g1

0xd19b,	// (0x0003c1e4) tabs_4_1_passive_pane_t1

0x4f93,	// (0x00033fdc) list_highlight_pane_cp2

0xddc3,	// (0x0003ce0c) list_set_pane_ParamLimits

0xddc3,	// (0x0003ce0c) list_set_pane

0xde5d,	// (0x0003cea6) main_pane_set_t1_ParamLimits

0xde5d,	// (0x0003cea6) main_pane_set_t1

0xde7d,	// (0x0003cec6) main_pane_set_t2_ParamLimits

0xde7d,	// (0x0003cec6) main_pane_set_t2

0xde91,	// (0x0003ceda) main_pane_set_t3_ParamLimits

0xde91,	// (0x0003ceda) main_pane_set_t3

0xdea3,	// (0x0003ceec) main_pane_set_t4_ParamLimits

0xdea3,	// (0x0003ceec) main_pane_set_t4

0x0003,

0xf981,	// (0x0003e9ca) main_pane_set_t_ParamLimits

0xf981,	// (0x0003e9ca) main_pane_set_t

0xdeb5,	// (0x0003cefe) setting_code_pane

0xdebf,	// (0x0003cf08) setting_slider_graphic_pane

0xdebf,	// (0x0003cf08) setting_slider_pane

0xdebf,	// (0x0003cf08) setting_text_pane

0xdebf,	// (0x0003cf08) setting_volume_pane

0x0497,	// (0x0002f4e0) volume_set_pane

0x3745,	// (0x0003278e) bg_set_opt_pane_cp

0x049f,	// (0x0002f4e8) setting_slider_pane_t1

0x04b8,	// (0x0002f501) setting_slider_pane_t2

0x04d2,	// (0x0002f51b) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003e5a7) setting_slider_pane_t

0x04ea,	// (0x0002f533) slider_set_pane

0x3665,	// (0x000326ae) bg_set_opt_pane_cp2

0x3787,	// (0x000327d0) setting_slider_graphic_pane_g1

0x0500,	// (0x0002f549) setting_slider_graphic_pane_t1

0x0510,	// (0x0002f559) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003e5ae) setting_slider_graphic_pane_t

0x0520,	// (0x0002f569) slider_set_pane_cp

0x3665,	// (0x000326ae) input_focus_pane_cp1

0x6880,	// (0x000358c9) list_set_text_pane

0x365b,	// (0x000326a4) setting_text_pane_g1

0x3665,	// (0x000326ae) input_focus_pane_cp2

0x365b,	// (0x000326a4) setting_code_pane_g1

0x3790,	// (0x000327d9) setting_code_pane_t1

0x0528,	// (0x0002f571) set_text_pane_t1_ParamLimits

0x0528,	// (0x0002f571) set_text_pane_t1

0x4032,	// (0x0003307b) set_opt_bg_pane_g1

0x403a,	// (0x00033083) set_opt_bg_pane_g2

0x685a,	// (0x000358a3) set_opt_bg_pane_g3

0x404a,	// (0x00033093) set_opt_bg_pane_g4

0x4052,	// (0x0003309b) set_opt_bg_pane_g5

0x405a,	// (0x000330a3) set_opt_bg_pane_g6

0x6864,	// (0x000358ad) set_opt_bg_pane_g7

0x686c,	// (0x000358b5) set_opt_bg_pane_g8

0x6876,	// (0x000358bf) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0003e9b7) set_opt_bg_pane_g

0x684d,	// (0x00035896) slider_set_pane_g1

0x1b89,	// (0x00030bd2) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0003e9a8) slider_set_pane_g

0x1b25,	// (0x00030b6e) volume_set_pane_g1

0x1b2d,	// (0x00030b76) volume_set_pane_g2

0x1b35,	// (0x00030b7e) volume_set_pane_g3

0x1b3d,	// (0x00030b86) volume_set_pane_g4

0x1b45,	// (0x00030b8e) volume_set_pane_g5

0x1b4d,	// (0x00030b96) volume_set_pane_g6

0x1b55,	// (0x00030b9e) volume_set_pane_g7

0x1b5d,	// (0x00030ba6) volume_set_pane_g8

0x1b65,	// (0x00030bae) volume_set_pane_g9

0x1b6d,	// (0x00030bb6) volume_set_pane_g10

0x0009,

0xf937,	// (0x0003e980) volume_set_pane_g

0xd1ad,	// (0x0003c1f6) indicator_pane_ParamLimits

0xd1ad,	// (0x0003c1f6) indicator_pane

0xd1d5,	// (0x0003c21e) main_idle_pane_g2_ParamLimits

0xd1d5,	// (0x0003c21e) main_idle_pane_g2

0xd20d,	// (0x0003c256) main_pane_idle_g1_ParamLimits

0xd20d,	// (0x0003c256) main_pane_idle_g1

0x37df,	// (0x00032828) popup_clock_digital_analogue_window_ParamLimits

0x37df,	// (0x00032828) popup_clock_digital_analogue_window

0xd234,	// (0x0003c27d) soft_indicator_pane_ParamLimits

0xd234,	// (0x0003c27d) soft_indicator_pane

0xd24e,	// (0x0003c297) wallpaper_pane_ParamLimits

0xd24e,	// (0x0003c297) wallpaper_pane

0x365b,	// (0x000326a4) wallpaper_pane_g1

0xd260,	// (0x0003c2a9) indicator_pane_g1_ParamLimits

0xd260,	// (0x0003c2a9) indicator_pane_g1

0x6c84,	// (0x00035ccd) navi_navi_icon_text_pane_srt_g1

0x3831,	// (0x0003287a) soft_indicator_pane_t1

0x384b,	// (0x00032894) aid_ps_area_pane

0xd276,	// (0x0003c2bf) aid_ps_clock_pane

0x386a,	// (0x000328b3) aid_ps_indicator_pane

0x3876,	// (0x000328bf) indicator_ps_pane_ParamLimits

0x3876,	// (0x000328bf) indicator_ps_pane

0x3885,	// (0x000328ce) power_save_pane_g1_ParamLimits

0x3885,	// (0x000328ce) power_save_pane_g1

0x3891,	// (0x000328da) power_save_pane_g2_ParamLimits

0x3891,	// (0x000328da) power_save_pane_g2

0x009e,	// (0x0002f0e7) aid_navinavi_width_pane

0x384b,	// (0x00032894) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003e5b3) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003e5b3) power_save_pane_g

0x389f,	// (0x000328e8) power_save_pane_t1_ParamLimits

0x389f,	// (0x000328e8) power_save_pane_t1

0xd276,	// (0x0003c2bf) aid_ps_clock_pane_ParamLimits

0x386a,	// (0x000328b3) aid_ps_indicator_pane_ParamLimits

0x38b1,	// (0x000328fa) power_save_pane_t4_ParamLimits

0x38b1,	// (0x000328fa) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003e5b8) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003e5b8) power_save_pane_t

0x38db,	// (0x00032924) power_save_t3_ParamLimits

0x38db,	// (0x00032924) power_save_t3

0x38c6,	// (0x0003290f) power_save_t2_ParamLimits

0x38c6,	// (0x0003290f) power_save_t2

0x38f0,	// (0x00032939) indicator_ps_pane_g1

0xd284,	// (0x0003c2cd) ai_gene_pane_ParamLimits

0xd284,	// (0x0003c2cd) ai_gene_pane

0xd29b,	// (0x0003c2e4) ai_links_pane_ParamLimits

0xd29b,	// (0x0003c2e4) ai_links_pane

0xd2b3,	// (0x0003c2fc) indicator_pane_cp1_ParamLimits

0xd2b3,	// (0x0003c2fc) indicator_pane_cp1

0xd2c2,	// (0x0003c30b) main_pane_idle_g1_cp_ParamLimits

0xd2c2,	// (0x0003c30b) main_pane_idle_g1_cp

0x3929,	// (0x00032972) popup_ai_links_title_window

0xd2da,	// (0x0003c323) soft_indicator_pane_cp1_ParamLimits

0xd2da,	// (0x0003c323) soft_indicator_pane_cp1

0x6647,	// (0x00035690) ai_links_pane_g1

0x6650,	// (0x00035699) grid_ai_links_pane

0xdd09,	// (0x0003cd52) ai_gene_pane_1

0x6635,	// (0x0003567e) ai_gene_pane_2

0x663e,	// (0x00035687) list_highlight_pane_cp4

0xdce5,	// (0x0003cd2e) cell_ai_link_pane_ParamLimits

0xdce5,	// (0x0003cd2e) cell_ai_link_pane

0x6606,	// (0x0003564f) cell_ai_link_pane_g1

0x3b88,	// (0x00032bd1) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0003e95b) cell_ai_link_pane_g

0x3665,	// (0x000326ae) grid_highlight_cp2

0x3665,	// (0x000326ae) bg_popup_sub_pane_cp1

0x394c,	// (0x00032995) popup_ai_links_title_window_t1

0x6554,	// (0x0003559d) ai_gene_pane_1_g1_ParamLimits

0x6554,	// (0x0003559d) ai_gene_pane_1_g1

0x6560,	// (0x000355a9) ai_gene_pane_1_g2_ParamLimits

0x6560,	// (0x000355a9) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0003e951) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0003e951) ai_gene_pane_1_g

0x656d,	// (0x000355b6) ai_gene_pane_1_t1_ParamLimits

0x656d,	// (0x000355b6) ai_gene_pane_1_t1

0x65a1,	// (0x000355ea) grid_ai_soft_ind_pane

0x653f,	// (0x00035588) ai_gene_pane_2_t1_ParamLimits

0x653f,	// (0x00035588) ai_gene_pane_2_t1

0xd2ee,	// (0x0003c337) main_pane_empty_t1_ParamLimits

0xd2ee,	// (0x0003c337) main_pane_empty_t1

0xd306,	// (0x0003c34f) main_pane_empty_t2_ParamLimits

0xd306,	// (0x0003c34f) main_pane_empty_t2

0xd31b,	// (0x0003c364) main_pane_empty_t3_ParamLimits

0xd31b,	// (0x0003c364) main_pane_empty_t3

0xd32d,	// (0x0003c376) main_pane_empty_t4_ParamLimits

0xd32d,	// (0x0003c376) main_pane_empty_t4

0xd33f,	// (0x0003c388) main_pane_empty_t5_ParamLimits

0xd33f,	// (0x0003c388) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003e5bd) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003e5bd) main_pane_empty_t

0x4083,	// (0x000330cc) bg_popup_window_pane_ParamLimits

0x4083,	// (0x000330cc) bg_popup_window_pane

0x62af,	// (0x000352f8) find_popup_pane_cp2_ParamLimits

0x62af,	// (0x000352f8) find_popup_pane_cp2

0x62bb,	// (0x00035304) heading_pane_ParamLimits

0x62bb,	// (0x00035304) heading_pane

0x3665,	// (0x000326ae) bg_popup_sub_pane

0xdc66,	// (0x0003ccaf) bg_popup_window_pane_g1_ParamLimits

0xdc66,	// (0x0003ccaf) bg_popup_window_pane_g1

0xdc75,	// (0x0003ccbe) bg_popup_window_pane_g2_ParamLimits

0xdc75,	// (0x0003ccbe) bg_popup_window_pane_g2

0xdc81,	// (0x0003ccca) bg_popup_window_pane_g3_ParamLimits

0xdc81,	// (0x0003ccca) bg_popup_window_pane_g3

0xdc8d,	// (0x0003ccd6) bg_popup_window_pane_g4_ParamLimits

0xdc8d,	// (0x0003ccd6) bg_popup_window_pane_g4

0xdc9c,	// (0x0003cce5) bg_popup_window_pane_g5_ParamLimits

0xdc9c,	// (0x0003cce5) bg_popup_window_pane_g5

0xdcac,	// (0x0003ccf5) bg_popup_window_pane_g6_ParamLimits

0xdcac,	// (0x0003ccf5) bg_popup_window_pane_g6

0xdcb8,	// (0x0003cd01) bg_popup_window_pane_g7_ParamLimits

0xdcb8,	// (0x0003cd01) bg_popup_window_pane_g7

0xdcc7,	// (0x0003cd10) bg_popup_window_pane_g8_ParamLimits

0xdcc7,	// (0x0003cd10) bg_popup_window_pane_g8

0xdcd6,	// (0x0003cd1f) bg_popup_window_pane_g9_ParamLimits

0xdcd6,	// (0x0003cd1f) bg_popup_window_pane_g9

0x6295,	// (0x000352de) bg_popup_window_pane_g10_ParamLimits

0x6295,	// (0x000352de) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0003e919) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0003e919) bg_popup_window_pane_g

0x61be,	// (0x00035207) bg_popup_heading_pane_ParamLimits

0x61be,	// (0x00035207) bg_popup_heading_pane

0x1c11,	// (0x00030c5a) tabs_4_passive_pane_cp_srt_ParamLimits

0x1c11,	// (0x00030c5a) tabs_4_passive_pane_cp_srt

0x1c23,	// (0x00030c6c) tabs_4_passive_pane_srt_ParamLimits

0x61d2,	// (0x0003521b) heading_pane_g2

0x1c23,	// (0x00030c6c) tabs_4_passive_pane_srt

0x552b,	// (0x00034574) bg_passive_tab_pane_cp3_srt_ParamLimits

0x552b,	// (0x00034574) bg_passive_tab_pane_cp3_srt

0x61da,	// (0x00035223) heading_pane_t1_ParamLimits

0x61da,	// (0x00035223) heading_pane_t1

0x61f1,	// (0x0003523a) heading_pane_t2_ParamLimits

0x61f1,	// (0x0003523a) heading_pane_t2

0x0001,

0xf8cb,	// (0x0003e914) heading_pane_t_ParamLimits

0xf8cb,	// (0x0003e914) heading_pane_t

0x5ceb,	// (0x00034d34) bg_popup_heading_pane_g1

0x5d9a,	// (0x00034de3) bg_popup_heading_pane_g2

0x5da4,	// (0x00034ded) bg_popup_heading_pane_g3

0x5dae,	// (0x00034df7) bg_popup_heading_pane_g4

0x5db8,	// (0x00034e01) bg_popup_heading_pane_g5

0x5dc2,	// (0x00034e0b) bg_popup_heading_pane_g6

0x5dca,	// (0x00034e13) bg_popup_heading_pane_g7

0x5dd2,	// (0x00034e1b) bg_popup_heading_pane_g8

0x5ddc,	// (0x00034e25) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0003e8d0) bg_popup_heading_pane_g

0x54b7,	// (0x00034500) bg_popup_sub_pane_g1

0x54c7,	// (0x00034510) bg_popup_sub_pane_g2

0x54bf,	// (0x00034508) bg_popup_sub_pane_g3

0x54d7,	// (0x00034520) bg_popup_sub_pane_g4

0x54cf,	// (0x00034518) bg_popup_sub_pane_g5

0x54df,	// (0x00034528) bg_popup_sub_pane_g6

0x54e7,	// (0x00034530) bg_popup_sub_pane_g7

0x54f7,	// (0x00034540) bg_popup_sub_pane_g8

0x54ef,	// (0x00034538) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0003e8aa) bg_popup_sub_pane_g

0x39c0,	// (0x00032a09) bg_popup_window_pane_cp5_ParamLimits

0x39c0,	// (0x00032a09) bg_popup_window_pane_cp5

0x39dc,	// (0x00032a25) popup_note_window_g1_ParamLimits

0x39dc,	// (0x00032a25) popup_note_window_g1

0x39e8,	// (0x00032a31) popup_note_window_t1_ParamLimits

0x39e8,	// (0x00032a31) popup_note_window_t1

0x39fe,	// (0x00032a47) popup_note_window_t2_ParamLimits

0x39fe,	// (0x00032a47) popup_note_window_t2

0x3a14,	// (0x00032a5d) popup_note_window_t3_ParamLimits

0x3a14,	// (0x00032a5d) popup_note_window_t3

0x3a2a,	// (0x00032a73) popup_note_window_t4_ParamLimits

0x3a2a,	// (0x00032a73) popup_note_window_t4

0x3a52,	// (0x00032a9b) popup_note_window_t5_ParamLimits

0x3a52,	// (0x00032a9b) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003e5c8) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003e5c8) popup_note_window_t

0x3a9c,	// (0x00032ae5) bg_popup_window_pane_cp6_ParamLimits

0x3a9c,	// (0x00032ae5) bg_popup_window_pane_cp6

0x5c67,	// (0x00034cb0) popup_note_image_window_g1_ParamLimits

0x5c67,	// (0x00034cb0) popup_note_image_window_g1

0x5c73,	// (0x00034cbc) popup_note_image_window_g2_ParamLimits

0x5c73,	// (0x00034cbc) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0003e89e) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0003e89e) popup_note_image_window_g

0x5c8c,	// (0x00034cd5) popup_note_image_window_t1_ParamLimits

0x5c8c,	// (0x00034cd5) popup_note_image_window_t1

0x5ca5,	// (0x00034cee) popup_note_image_window_t2_ParamLimits

0x5ca5,	// (0x00034cee) popup_note_image_window_t2

0x5cbe,	// (0x00034d07) popup_note_image_window_t3_ParamLimits

0x5cbe,	// (0x00034d07) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0003e8a3) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0003e8a3) popup_note_image_window_t

0x5b28,	// (0x00034b71) bg_popup_window_pane_cp7_ParamLimits

0x5b28,	// (0x00034b71) bg_popup_window_pane_cp7

0x5b58,	// (0x00034ba1) popup_note_wait_window_g1_ParamLimits

0x5b58,	// (0x00034ba1) popup_note_wait_window_g1

0x5b64,	// (0x00034bad) popup_note_wait_window_g2_ParamLimits

0x5b64,	// (0x00034bad) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0003e88c) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0003e88c) popup_note_wait_window_g

0x5b7c,	// (0x00034bc5) popup_note_wait_window_t1_ParamLimits

0x5b7c,	// (0x00034bc5) popup_note_wait_window_t1

0x5ba3,	// (0x00034bec) popup_note_wait_window_t2_ParamLimits

0x5ba3,	// (0x00034bec) popup_note_wait_window_t2

0x5bc0,	// (0x00034c09) popup_note_wait_window_t3_ParamLimits

0x5bc0,	// (0x00034c09) popup_note_wait_window_t3

0x5bd3,	// (0x00034c1c) popup_note_wait_window_t4_ParamLimits

0x5bd3,	// (0x00034c1c) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0003e893) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0003e893) popup_note_wait_window_t

0x5bf8,	// (0x00034c41) wait_bar_pane_ParamLimits

0x5bf8,	// (0x00034c41) wait_bar_pane

0x3665,	// (0x000326ae) wait_anim_pane

0x3665,	// (0x000326ae) wait_border_pane

0x365b,	// (0x000326a4) wait_anim_pane_g1

0x365b,	// (0x000326a4) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0003e74c) wait_anim_pane_g

0x5acc,	// (0x00034b15) wait_border_pane_g1

0x5ad7,	// (0x00034b20) wait_border_pane_g2

0x5ae0,	// (0x00034b29) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0003e885) wait_border_pane_g

0x5937,	// (0x00034980) bg_popup_window_pane_cp16_ParamLimits

0x5937,	// (0x00034980) bg_popup_window_pane_cp16

0x5a37,	// (0x00034a80) indicator_popup_pane_cp4_ParamLimits

0x5a37,	// (0x00034a80) indicator_popup_pane_cp4

0x5a4b,	// (0x00034a94) popup_query_data_window_t1_ParamLimits

0x5a4b,	// (0x00034a94) popup_query_data_window_t1

0x5a5d,	// (0x00034aa6) popup_query_data_window_t2_ParamLimits

0x5a5d,	// (0x00034aa6) popup_query_data_window_t2

0x5a76,	// (0x00034abf) popup_query_data_window_t3_ParamLimits

0x5a76,	// (0x00034abf) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0003e87e) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0003e87e) popup_query_data_window_t

0x5a90,	// (0x00034ad9) query_popup_data_pane_ParamLimits

0x5a90,	// (0x00034ad9) query_popup_data_pane

0x5aa4,	// (0x00034aed) query_popup_data_pane_cp1_ParamLimits

0x5aa4,	// (0x00034aed) query_popup_data_pane_cp1

0x5937,	// (0x00034980) bg_popup_window_pane_cp10_ParamLimits

0x5937,	// (0x00034980) bg_popup_window_pane_cp10

0x5969,	// (0x000349b2) indicator_popup_pane_ParamLimits

0x5969,	// (0x000349b2) indicator_popup_pane

0x598b,	// (0x000349d4) popup_query_code_window_t1_ParamLimits

0x598b,	// (0x000349d4) popup_query_code_window_t1

0x59a5,	// (0x000349ee) popup_query_code_window_t2_ParamLimits

0x59a5,	// (0x000349ee) popup_query_code_window_t2

0x59ee,	// (0x00034a37) popup_query_code_window_t3_ParamLimits

0x59ee,	// (0x00034a37) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0003e877) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0003e877) popup_query_code_window_t

0x5a1d,	// (0x00034a66) query_popup_pane_ParamLimits

0x5a1d,	// (0x00034a66) query_popup_pane

0x3a9c,	// (0x00032ae5) bg_popup_window_pane_cp15_ParamLimits

0x3a9c,	// (0x00032ae5) bg_popup_window_pane_cp15

0x3aba,	// (0x00032b03) indicator_popup_pane_cp1_ParamLimits

0x3aba,	// (0x00032b03) indicator_popup_pane_cp1

0x3acd,	// (0x00032b16) indicator_popup_pane_cp2_ParamLimits

0x3acd,	// (0x00032b16) indicator_popup_pane_cp2

0x3ae0,	// (0x00032b29) popup_query_data_code_window_g1_ParamLimits

0x3ae0,	// (0x00032b29) popup_query_data_code_window_g1

0x3af3,	// (0x00032b3c) popup_query_data_code_window_t1_ParamLimits

0x3af3,	// (0x00032b3c) popup_query_data_code_window_t1

0x3b05,	// (0x00032b4e) popup_query_data_code_window_t2_ParamLimits

0x3b05,	// (0x00032b4e) popup_query_data_code_window_t2

0x3b17,	// (0x00032b60) popup_query_data_code_window_t3_ParamLimits

0x3b17,	// (0x00032b60) popup_query_data_code_window_t3

0x3b2d,	// (0x00032b76) popup_query_data_code_window_t4_ParamLimits

0x3b2d,	// (0x00032b76) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003e5d3) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003e5d3) popup_query_data_code_window_t

0x18d2,	// (0x0003091b) list_single_midp_graphic_pane_g3

0x3b45,	// (0x00032b8e) query_popup_data_pane_cp2_ParamLimits

0x3b58,	// (0x00032ba1) query_popup_pane_cp2_ParamLimits

0x3b58,	// (0x00032ba1) query_popup_pane_cp2

0x3665,	// (0x000326ae) bg_popup_window_pane_cp11

0x5923,	// (0x0003496c) heading_pane_cp5

0x3c43,	// (0x00032c8c) listscroll_popup_info_pane

0x3665,	// (0x000326ae) input_focus_pane_cp3

0x3b6b,	// (0x00032bb4) query_popup_pane_t1

0x3b79,	// (0x00032bc2) list_popup_info_pane_ParamLimits

0x3b79,	// (0x00032bc2) list_popup_info_pane

0x3b88,	// (0x00032bd1) listscroll_popup_info_pane_g1

0x3b90,	// (0x00032bd9) scroll_pane_cp7

0x3b9a,	// (0x00032be3) popup_info_list_pane_t1_ParamLimits

0x3b9a,	// (0x00032be3) popup_info_list_pane_t1

0x3bb4,	// (0x00032bfd) popup_info_list_pane_t2_ParamLimits

0x3bb4,	// (0x00032bfd) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003e5dc) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003e5dc) popup_info_list_pane_t

0x3665,	// (0x000326ae) bg_popup_window_pane_cp12

0x6c9e,	// (0x00035ce7) find_popup_pane

0x3745,	// (0x0003278e) bg_popup_window_pane_cp3

0x3bce,	// (0x00032c17) heading_pane_cp3

0x3bda,	// (0x00032c23) listscroll_popup_graphic_pane

0x3665,	// (0x000326ae) bg_popup_window_pane_cp4

0xd3a1,	// (0x0003c3ea) heading_pane_cp4

0x3c43,	// (0x00032c8c) listscroll_popup_colour_pane

0x3c4b,	// (0x00032c94) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3c4b,	// (0x00032c94) cell_large_graphic_colour_none_popup_pane

0xd3a9,	// (0x0003c3f2) grid_large_graphic_colour_popup_pane_ParamLimits

0xd3a9,	// (0x0003c3f2) grid_large_graphic_colour_popup_pane

0x3c8b,	// (0x00032cd4) listscroll_popup_colour_pane_g1_ParamLimits

0x3c8b,	// (0x00032cd4) listscroll_popup_colour_pane_g1

0x3ca2,	// (0x00032ceb) listscroll_popup_colour_pane_g2_ParamLimits

0x3ca2,	// (0x00032ceb) listscroll_popup_colour_pane_g2

0x3cb9,	// (0x00032d02) listscroll_popup_colour_pane_g3_ParamLimits

0x3cb9,	// (0x00032d02) listscroll_popup_colour_pane_g3

0xd3cd,	// (0x0003c416) listscroll_popup_colour_pane_g4_ParamLimits

0xd3cd,	// (0x0003c416) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003e5e1) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003e5e1) listscroll_popup_colour_pane_g

0x3cdd,	// (0x00032d26) scroll_pane_cp6_ParamLimits

0x3cdd,	// (0x00032d26) scroll_pane_cp6

0xd3dd,	// (0x0003c426) cell_large_graphic_colour_popup_pane_ParamLimits

0xd3dd,	// (0x0003c426) cell_large_graphic_colour_popup_pane

0x3d0e,	// (0x00032d57) cell_large_graphic_colour_none_popup_pane_t1

0x3665,	// (0x000326ae) grid_highlight_pane_cp5

0x3d1d,	// (0x00032d66) cell_large_graphic_colour_popup_pane_g1

0x3d25,	// (0x00032d6e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003e5ea) cell_large_graphic_colour_popup_pane_g

0x3d2d,	// (0x00032d76) cell_large_graphic_colour_popup_pane_g2_copy1

0x3d36,	// (0x00032d7f) grid_highlight_pane_cp4

0x3d3e,	// (0x00032d87) bg_popup_window_pane_cp8_ParamLimits

0x3d3e,	// (0x00032d87) bg_popup_window_pane_cp8

0x3d59,	// (0x00032da2) popup_snote_single_text_window_g1_ParamLimits

0x3d59,	// (0x00032da2) popup_snote_single_text_window_g1

0x3d6b,	// (0x00032db4) popup_snote_single_text_window_t1_ParamLimits

0x3d6b,	// (0x00032db4) popup_snote_single_text_window_t1

0x3d7e,	// (0x00032dc7) popup_snote_single_text_window_t2_ParamLimits

0x3d7e,	// (0x00032dc7) popup_snote_single_text_window_t2

0x3d91,	// (0x00032dda) popup_snote_single_text_window_t3_ParamLimits

0x3d91,	// (0x00032dda) popup_snote_single_text_window_t3

0x3dca,	// (0x00032e13) popup_snote_single_text_window_t4_ParamLimits

0x3dca,	// (0x00032e13) popup_snote_single_text_window_t4

0x3dfe,	// (0x00032e47) popup_snote_single_text_window_t5_ParamLimits

0x3dfe,	// (0x00032e47) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003e5ef) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003e5ef) popup_snote_single_text_window_t

0x3e2d,	// (0x00032e76) bg_popup_window_pane_cp9_ParamLimits

0x3e2d,	// (0x00032e76) bg_popup_window_pane_cp9

0x3d59,	// (0x00032da2) popup_snote_single_graphic_window_g1_ParamLimits

0x3d59,	// (0x00032da2) popup_snote_single_graphic_window_g1

0x3e3b,	// (0x00032e84) popup_snote_single_graphic_window_g2_ParamLimits

0x3e3b,	// (0x00032e84) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003e5fa) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003e5fa) popup_snote_single_graphic_window_g

0x3e47,	// (0x00032e90) popup_snote_single_graphic_window_t1_ParamLimits

0x3e47,	// (0x00032e90) popup_snote_single_graphic_window_t1

0x3e5a,	// (0x00032ea3) popup_snote_single_graphic_window_t2_ParamLimits

0x3e5a,	// (0x00032ea3) popup_snote_single_graphic_window_t2

0x3e6d,	// (0x00032eb6) popup_snote_single_graphic_window_t3_ParamLimits

0x3e6d,	// (0x00032eb6) popup_snote_single_graphic_window_t3

0x3ea6,	// (0x00032eef) popup_snote_single_graphic_window_t4_ParamLimits

0x3ea6,	// (0x00032eef) popup_snote_single_graphic_window_t4

0x3eda,	// (0x00032f23) popup_snote_single_graphic_window_t5_ParamLimits

0x3eda,	// (0x00032f23) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003e5ff) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003e5ff) popup_snote_single_graphic_window_t

0x6be0,	// (0x00035c29) grid_graphic_popup_pane_ParamLimits

0x6be0,	// (0x00035c29) grid_graphic_popup_pane

0x6c0a,	// (0x00035c53) listscroll_popup_graphic_pane_g1_ParamLimits

0x6c0a,	// (0x00035c53) listscroll_popup_graphic_pane_g1

0xdfce,	// (0x0003d017) listscroll_popup_graphic_pane_g2_ParamLimits

0xdfce,	// (0x0003d017) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0003e9f4) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0003e9f4) listscroll_popup_graphic_pane_g

0x6c32,	// (0x00035c7b) scroll_pane_cp5

0xdf73,	// (0x0003cfbc) cell_graphic_popup_pane_ParamLimits

0xdf73,	// (0x0003cfbc) cell_graphic_popup_pane

0x6b60,	// (0x00035ba9) cell_graphic_popup_pane_g1

0x6b68,	// (0x00035bb1) cell_graphic_popup_pane_g2

0x3d2d,	// (0x00032d76) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0003e9ed) cell_graphic_popup_pane_g

0x6b71,	// (0x00035bba) cell_graphic_popup_pane_t2

0x3d36,	// (0x00032d7f) grid_highlight_pane_cp3

0x3f1b,	// (0x00032f64) list_gen_pane_ParamLimits

0x3f1b,	// (0x00032f64) list_gen_pane

0x3f4d,	// (0x00032f96) scroll_pane

0xdf2a,	// (0x0003cf73) bg_list_pane_g1_ParamLimits

0xdf2a,	// (0x0003cf73) bg_list_pane_g1

0x6ad5,	// (0x00035b1e) bg_list_pane_g2_ParamLimits

0x6ad5,	// (0x00035b1e) bg_list_pane_g2

0x6aea,	// (0x00035b33) bg_list_pane_g3_ParamLimits

0x6aea,	// (0x00035b33) bg_list_pane_g3

0x6afe,	// (0x00035b47) bg_list_pane_g4_ParamLimits

0x6afe,	// (0x00035b47) bg_list_pane_g4

0xdf47,	// (0x0003cf90) bg_list_pane_g5_ParamLimits

0xdf47,	// (0x0003cf90) bg_list_pane_g5

0x0004,

0xf999,	// (0x0003e9e2) bg_list_pane_g_ParamLimits

0xf999,	// (0x0003e9e2) bg_list_pane_g

0xdef2,	// (0x0003cf3b) list_double2_graphic_large_graphic_pane_ParamLimits

0xdef2,	// (0x0003cf3b) list_double2_graphic_large_graphic_pane

0xdef2,	// (0x0003cf3b) list_double2_graphic_pane_ParamLimits

0xdef2,	// (0x0003cf3b) list_double2_graphic_pane

0xdef2,	// (0x0003cf3b) list_double2_large_graphic_pane_ParamLimits

0xdef2,	// (0x0003cf3b) list_double2_large_graphic_pane

0xdef2,	// (0x0003cf3b) list_double2_pane_ParamLimits

0xdef2,	// (0x0003cf3b) list_double2_pane

0xdef2,	// (0x0003cf3b) list_double_graphic_heading_pane_ParamLimits

0xdef2,	// (0x0003cf3b) list_double_graphic_heading_pane

0xdef2,	// (0x0003cf3b) list_double_graphic_pane_ParamLimits

0xdef2,	// (0x0003cf3b) list_double_graphic_pane

0xdef2,	// (0x0003cf3b) list_double_heading_pane_ParamLimits

0xdef2,	// (0x0003cf3b) list_double_heading_pane

0xdef2,	// (0x0003cf3b) list_double_large_graphic_pane_ParamLimits

0xdef2,	// (0x0003cf3b) list_double_large_graphic_pane

0xdef2,	// (0x0003cf3b) list_double_number_pane_ParamLimits

0xdef2,	// (0x0003cf3b) list_double_number_pane

0xdef2,	// (0x0003cf3b) list_double_pane_ParamLimits

0xdef2,	// (0x0003cf3b) list_double_pane

0xdef2,	// (0x0003cf3b) list_double_time_pane_ParamLimits

0xdef2,	// (0x0003cf3b) list_double_time_pane

0xdef2,	// (0x0003cf3b) list_setting_number_pane_ParamLimits

0xdef2,	// (0x0003cf3b) list_setting_number_pane

0xdef2,	// (0x0003cf3b) list_setting_pane_ParamLimits

0xdef2,	// (0x0003cf3b) list_setting_pane

0xdf04,	// (0x0003cf4d) list_single_2graphic_pane_ParamLimits

0xdf04,	// (0x0003cf4d) list_single_2graphic_pane

0xdf04,	// (0x0003cf4d) list_single_graphic_heading_pane_ParamLimits

0xdf04,	// (0x0003cf4d) list_single_graphic_heading_pane

0xdf04,	// (0x0003cf4d) list_single_graphic_pane_ParamLimits

0xdf04,	// (0x0003cf4d) list_single_graphic_pane

0xdf04,	// (0x0003cf4d) list_single_heading_pane_ParamLimits

0xdf04,	// (0x0003cf4d) list_single_heading_pane

0xdf04,	// (0x0003cf4d) list_single_large_graphic_pane_ParamLimits

0xdf04,	// (0x0003cf4d) list_single_large_graphic_pane

0xdf04,	// (0x0003cf4d) list_single_number_heading_pane_ParamLimits

0xdf04,	// (0x0003cf4d) list_single_number_heading_pane

0xdf04,	// (0x0003cf4d) list_single_number_pane_ParamLimits

0xdf04,	// (0x0003cf4d) list_single_number_pane

0xdf04,	// (0x0003cf4d) list_single_pane_ParamLimits

0xdf04,	// (0x0003cf4d) list_single_pane

0x3665,	// (0x000326ae) list_highlight_pane_cp1

0x2cd9,	// (0x00031d22) list_single_pane_g1_ParamLimits

0x2cd9,	// (0x00031d22) list_single_pane_g1

0x2ce5,	// (0x00031d2e) list_single_pane_g2_ParamLimits

0x2ce5,	// (0x00031d2e) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003e611) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003e611) list_single_pane_g

0x2fc3,	// (0x0003200c) list_single_pane_t1_ParamLimits

0x2fc3,	// (0x0003200c) list_single_pane_t1

0x2cd9,	// (0x00031d22) list_single_number_pane_g1_ParamLimits

0x2cd9,	// (0x00031d22) list_single_number_pane_g1

0x2ce5,	// (0x00031d2e) list_single_number_pane_g2_ParamLimits

0x2ce5,	// (0x00031d2e) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003e611) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003e611) list_single_number_pane_g

0x2cf1,	// (0x00031d3a) list_single_number_pane_t1_ParamLimits

0x2cf1,	// (0x00031d3a) list_single_number_pane_t1

0xc83f,	// (0x0003b888) list_single_number_pane_t2_ParamLimits

0xc83f,	// (0x0003b888) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0003e9a3) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0003e9a3) list_single_number_pane_t

0xb989,	// (0x0003a9d2) list_single_graphic_pane_g1_ParamLimits

0xb989,	// (0x0003a9d2) list_single_graphic_pane_g1

0x2cd9,	// (0x00031d22) list_single_graphic_pane_g2_ParamLimits

0x2cd9,	// (0x00031d22) list_single_graphic_pane_g2

0x2ce5,	// (0x00031d2e) list_single_graphic_pane_g3_ParamLimits

0x2ce5,	// (0x00031d2e) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003e60a) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003e60a) list_single_graphic_pane_g

0xb995,	// (0x0003a9de) list_single_graphic_pane_t1_ParamLimits

0xb995,	// (0x0003a9de) list_single_graphic_pane_t1

0x2cd9,	// (0x00031d22) list_single_heading_pane_g1_ParamLimits

0x2cd9,	// (0x00031d22) list_single_heading_pane_g1

0x2ce5,	// (0x00031d2e) list_single_heading_pane_g2_ParamLimits

0x2ce5,	// (0x00031d2e) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003e611) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003e611) list_single_heading_pane_g

0xb9ab,	// (0x0003a9f4) list_single_heading_pane_t1_ParamLimits

0xb9ab,	// (0x0003a9f4) list_single_heading_pane_t1

0xb9c1,	// (0x0003aa0a) list_single_heading_pane_t2_ParamLimits

0xb9c1,	// (0x0003aa0a) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003e616) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003e616) list_single_heading_pane_t

0x2cd9,	// (0x00031d22) list_single_number_heading_pane_g1_ParamLimits

0x2cd9,	// (0x00031d22) list_single_number_heading_pane_g1

0x2ce5,	// (0x00031d2e) list_single_number_heading_pane_g2_ParamLimits

0x2ce5,	// (0x00031d2e) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003e611) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003e611) list_single_number_heading_pane_g

0xb9ab,	// (0x0003a9f4) list_single_number_heading_pane_t1_ParamLimits

0xb9ab,	// (0x0003a9f4) list_single_number_heading_pane_t1

0x2f77,	// (0x00031fc0) list_single_number_heading_pane_t2_ParamLimits

0x2f77,	// (0x00031fc0) list_single_number_heading_pane_t2

0x2f89,	// (0x00031fd2) list_single_number_heading_pane_t3_ParamLimits

0x2f89,	// (0x00031fd2) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003e61b) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003e61b) list_single_number_heading_pane_t

0x2ccd,	// (0x00031d16) list_single_graphic_heading_pane_g1_ParamLimits

0x2ccd,	// (0x00031d16) list_single_graphic_heading_pane_g1

0xb9d3,	// (0x0003aa1c) list_single_graphic_heading_pane_g4_ParamLimits

0xb9d3,	// (0x0003aa1c) list_single_graphic_heading_pane_g4

0x2ce5,	// (0x00031d2e) list_single_graphic_heading_pane_g5_ParamLimits

0x2ce5,	// (0x00031d2e) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003e622) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003e622) list_single_graphic_heading_pane_g

0xb9ab,	// (0x0003a9f4) list_single_graphic_heading_pane_t1_ParamLimits

0xb9ab,	// (0x0003a9f4) list_single_graphic_heading_pane_t1

0xb9e4,	// (0x0003aa2d) list_single_graphic_heading_pane_t2_ParamLimits

0xb9e4,	// (0x0003aa2d) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003e629) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003e629) list_single_graphic_heading_pane_t

0x2fd9,	// (0x00032022) list_single_large_graphic_pane_g1_ParamLimits

0x2fd9,	// (0x00032022) list_single_large_graphic_pane_g1

0x2cd9,	// (0x00031d22) list_single_large_graphic_pane_g2_ParamLimits

0x2cd9,	// (0x00031d22) list_single_large_graphic_pane_g2

0x2ce5,	// (0x00031d2e) list_single_large_graphic_pane_g3_ParamLimits

0x2ce5,	// (0x00031d2e) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003e62e) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003e62e) list_single_large_graphic_pane_g

0x5ad7,	// (0x00034b20) wait_border_pane_g2_copy1

0xb9f6,	// (0x0003aa3f) list_single_large_graphic_pane_g4_cp2

0x2fe5,	// (0x0003202e) list_single_large_graphic_pane_t1_ParamLimits

0x2fe5,	// (0x0003202e) list_single_large_graphic_pane_t1

0xb9fe,	// (0x0003aa47) list_double_pane_g1_ParamLimits

0xb9fe,	// (0x0003aa47) list_double_pane_g1

0xba0a,	// (0x0003aa53) list_double_pane_g2_ParamLimits

0xba0a,	// (0x0003aa53) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003e635) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003e635) list_double_pane_g

0xba16,	// (0x0003aa5f) list_double_pane_t1_ParamLimits

0xba16,	// (0x0003aa5f) list_double_pane_t1

0xba2c,	// (0x0003aa75) list_double_pane_t2_ParamLimits

0xba2c,	// (0x0003aa75) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003e63a) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003e63a) list_double_pane_t

0xba3e,	// (0x0003aa87) list_double2_pane_g1_ParamLimits

0xba3e,	// (0x0003aa87) list_double2_pane_g1

0xba4f,	// (0x0003aa98) list_double2_pane_g2_ParamLimits

0xba4f,	// (0x0003aa98) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003e63f) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003e63f) list_double2_pane_g

0xba5b,	// (0x0003aaa4) list_double2_pane_t1_ParamLimits

0xba5b,	// (0x0003aaa4) list_double2_pane_t1

0xba71,	// (0x0003aaba) list_double2_pane_t2_ParamLimits

0xba71,	// (0x0003aaba) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003e644) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003e644) list_double2_pane_t

0xb9fe,	// (0x0003aa47) list_double_number_pane_g1_ParamLimits

0xb9fe,	// (0x0003aa47) list_double_number_pane_g1

0xba0a,	// (0x0003aa53) list_double_number_pane_g2_ParamLimits

0xba0a,	// (0x0003aa53) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003e635) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003e635) list_double_number_pane_g

0xba83,	// (0x0003aacc) list_double_number_pane_t1_ParamLimits

0xba83,	// (0x0003aacc) list_double_number_pane_t1

0xba95,	// (0x0003aade) list_double_number_pane_t2_ParamLimits

0xba95,	// (0x0003aade) list_double_number_pane_t2

0xbaab,	// (0x0003aaf4) list_double_number_pane_t3_ParamLimits

0xbaab,	// (0x0003aaf4) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003e649) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003e649) list_double_number_pane_t

0xbabd,	// (0x0003ab06) list_double_graphic_pane_g1_ParamLimits

0xbabd,	// (0x0003ab06) list_double_graphic_pane_g1

0xbac9,	// (0x0003ab12) list_double_graphic_pane_g2_ParamLimits

0xbac9,	// (0x0003ab12) list_double_graphic_pane_g2

0xbad8,	// (0x0003ab21) list_double_graphic_pane_g3_ParamLimits

0xbad8,	// (0x0003ab21) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003e650) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003e650) list_double_graphic_pane_g

0xbaf0,	// (0x0003ab39) list_double_graphic_pane_t1_ParamLimits

0xbaf0,	// (0x0003ab39) list_double_graphic_pane_t1

0xbb06,	// (0x0003ab4f) list_double_graphic_pane_t2_ParamLimits

0xbb06,	// (0x0003ab4f) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003e659) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003e659) list_double_graphic_pane_t

0x0871,	// (0x0002f8ba) list_double2_graphic_pane_g1_ParamLimits

0x0871,	// (0x0002f8ba) list_double2_graphic_pane_g1

0x329a,	// (0x000322e3) list_double2_graphic_pane_g2_ParamLimits

0x329a,	// (0x000322e3) list_double2_graphic_pane_g2

0xba4f,	// (0x0003aa98) list_double2_graphic_pane_g3_ParamLimits

0xba4f,	// (0x0003aa98) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003e65e) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003e65e) list_double2_graphic_pane_g

0xbb18,	// (0x0003ab61) list_double2_graphic_pane_t1_ParamLimits

0xbb18,	// (0x0003ab61) list_double2_graphic_pane_t1

0xbb2e,	// (0x0003ab77) list_double2_graphic_pane_t2_ParamLimits

0xbb2e,	// (0x0003ab77) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003e665) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003e665) list_double2_graphic_pane_t

0xbb40,	// (0x0003ab89) list_double_large_graphic_pane_g1_ParamLimits

0xbb40,	// (0x0003ab89) list_double_large_graphic_pane_g1

0xbb5f,	// (0x0003aba8) list_double_large_graphic_pane_g2_ParamLimits

0xbb5f,	// (0x0003aba8) list_double_large_graphic_pane_g2

0xba0a,	// (0x0003aa53) list_double_large_graphic_pane_g3_ParamLimits

0xba0a,	// (0x0003aa53) list_double_large_graphic_pane_g3

0xbb70,	// (0x0003abb9) list_double_large_graphic_pane_g4_ParamLimits

0xbb70,	// (0x0003abb9) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003e66a) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003e66a) list_double_large_graphic_pane_g

0xbb83,	// (0x0003abcc) list_double_large_graphic_pane_t1_ParamLimits

0xbb83,	// (0x0003abcc) list_double_large_graphic_pane_t1

0xbb9c,	// (0x0003abe5) list_double_large_graphic_pane_t2_ParamLimits

0xbb9c,	// (0x0003abe5) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003e675) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003e675) list_double_large_graphic_pane_t

0xbbae,	// (0x0003abf7) list_double2_large_graphic_pane_g1_ParamLimits

0xbbae,	// (0x0003abf7) list_double2_large_graphic_pane_g1

0xba3e,	// (0x0003aa87) list_double2_large_graphic_pane_g2_ParamLimits

0xba3e,	// (0x0003aa87) list_double2_large_graphic_pane_g2

0xba4f,	// (0x0003aa98) list_double2_large_graphic_pane_g3_ParamLimits

0xba4f,	// (0x0003aa98) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003e67a) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003e67a) list_double2_large_graphic_pane_g

0xbbba,	// (0x0003ac03) list_double2_large_graphic_pane_t1_ParamLimits

0xbbba,	// (0x0003ac03) list_double2_large_graphic_pane_t1

0xbbd0,	// (0x0003ac19) list_double2_large_graphic_pane_t2_ParamLimits

0xbbd0,	// (0x0003ac19) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0003e681) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0003e681) list_double2_large_graphic_pane_t

0xbbe2,	// (0x0003ac2b) list_double_heading_pane_g1_ParamLimits

0xbbe2,	// (0x0003ac2b) list_double_heading_pane_g1

0x0646,	// (0x0002f68f) list_double_heading_pane_g2_ParamLimits

0x0646,	// (0x0002f68f) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003e686) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003e686) list_double_heading_pane_g

0xbbf3,	// (0x0003ac3c) list_double_heading_pane_t1_ParamLimits

0xbbf3,	// (0x0003ac3c) list_double_heading_pane_t1

0xba71,	// (0x0003aaba) list_double_heading_pane_t2_ParamLimits

0xba71,	// (0x0003aaba) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0003e68b) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0003e68b) list_double_heading_pane_t

0x0871,	// (0x0002f8ba) list_double_graphic_heading_pane_g1_ParamLimits

0x0871,	// (0x0002f8ba) list_double_graphic_heading_pane_g1

0xbbe2,	// (0x0003ac2b) list_double_graphic_heading_pane_g2_ParamLimits

0xbbe2,	// (0x0003ac2b) list_double_graphic_heading_pane_g2

0x0646,	// (0x0002f68f) list_double_graphic_heading_pane_g3_ParamLimits

0x0646,	// (0x0002f68f) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0003e690) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0003e690) list_double_graphic_heading_pane_g

0xbc09,	// (0x0003ac52) list_double_graphic_heading_pane_t1_ParamLimits

0xbc09,	// (0x0003ac52) list_double_graphic_heading_pane_t1

0xbb2e,	// (0x0003ab77) list_double_graphic_heading_pane_t2_ParamLimits

0xbb2e,	// (0x0003ab77) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003e697) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003e697) list_double_graphic_heading_pane_t

0xbb5f,	// (0x0003aba8) list_double_time_pane_g1_ParamLimits

0xbb5f,	// (0x0003aba8) list_double_time_pane_g1

0xba0a,	// (0x0003aa53) list_double_time_pane_g2_ParamLimits

0xba0a,	// (0x0003aa53) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0003e69c) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0003e69c) list_double_time_pane_g

0xbc1f,	// (0x0003ac68) list_double_time_pane_t1_ParamLimits

0xbc1f,	// (0x0003ac68) list_double_time_pane_t1

0xbc35,	// (0x0003ac7e) list_double_time_pane_t2_ParamLimits

0xbc35,	// (0x0003ac7e) list_double_time_pane_t2

0xbc47,	// (0x0003ac90) list_double_time_pane_t3_ParamLimits

0xbc47,	// (0x0003ac90) list_double_time_pane_t3

0xbc59,	// (0x0003aca2) list_double_time_pane_t4_ParamLimits

0xbc59,	// (0x0003aca2) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0003e6a1) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0003e6a1) list_double_time_pane_t

0xbc6b,	// (0x0003acb4) list_setting_pane_g1_ParamLimits

0xbc6b,	// (0x0003acb4) list_setting_pane_g1

0xbc77,	// (0x0003acc0) list_setting_pane_g2_ParamLimits

0xbc77,	// (0x0003acc0) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003e6aa) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003e6aa) list_setting_pane_g

0xbc83,	// (0x0003accc) list_setting_pane_t1_ParamLimits

0xbc83,	// (0x0003accc) list_setting_pane_t1

0xbc9d,	// (0x0003ace6) list_setting_pane_t2_ParamLimits

0xbc9d,	// (0x0003ace6) list_setting_pane_t2

0x0002,

0xf666,	// (0x0003e6af) list_setting_pane_t_ParamLimits

0xf666,	// (0x0003e6af) list_setting_pane_t

0xbcdc,	// (0x0003ad25) set_value_pane_cp_ParamLimits

0xbcdc,	// (0x0003ad25) set_value_pane_cp

0xbce8,	// (0x0003ad31) list_setting_number_pane_g1_ParamLimits

0xbce8,	// (0x0003ad31) list_setting_number_pane_g1

0xbcf4,	// (0x0003ad3d) list_setting_number_pane_g2_ParamLimits

0xbcf4,	// (0x0003ad3d) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0003e6b6) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0003e6b6) list_setting_number_pane_g

0xbd00,	// (0x0003ad49) list_setting_number_pane_t1_ParamLimits

0xbd00,	// (0x0003ad49) list_setting_number_pane_t1

0xbd19,	// (0x0003ad62) list_setting_number_pane_t2_ParamLimits

0xbd19,	// (0x0003ad62) list_setting_number_pane_t2

0xbd33,	// (0x0003ad7c) list_setting_number_pane_t3_ParamLimits

0xbd33,	// (0x0003ad7c) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003e6bb) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003e6bb) list_setting_number_pane_t

0xbcdc,	// (0x0003ad25) set_value_pane_ParamLimits

0xbcdc,	// (0x0003ad25) set_value_pane

0x3f81,	// (0x00032fca) bg_set_opt_pane_ParamLimits

0x3f81,	// (0x00032fca) bg_set_opt_pane

0x09d2,	// (0x0002fa1b) set_value_pane_t1

0x3fa2,	// (0x00032feb) slider_set_pane_cp3

0x3fab,	// (0x00032ff4) volume_small_pane_cp

0x3fb4,	// (0x00032ffd) list_form_gen_pane

0x3fbd,	// (0x00033006) scroll_pane_cp8

0xbd76,	// (0x0003adbf) form_field_data_pane_ParamLimits

0xbd76,	// (0x0003adbf) form_field_data_pane

0xbd8d,	// (0x0003add6) form_field_data_wide_pane_ParamLimits

0xbd8d,	// (0x0003add6) form_field_data_wide_pane

0xbdad,	// (0x0003adf6) form_field_popup_pane_ParamLimits

0xbdad,	// (0x0003adf6) form_field_popup_pane

0xbdc5,	// (0x0003ae0e) form_field_popup_wide_pane_ParamLimits

0xbdc5,	// (0x0003ae0e) form_field_popup_wide_pane

0x0a66,	// (0x0002faaf) form_field_slider_pane_ParamLimits

0x0a66,	// (0x0002faaf) form_field_slider_pane

0x0a79,	// (0x0002fac2) form_field_slider_wide_pane_ParamLimits

0x0a79,	// (0x0002fac2) form_field_slider_wide_pane

0x3fce,	// (0x00033017) data_form_pane

0xbde6,	// (0x0003ae2f) form_field_data_pane_t1

0x3fda,	// (0x00033023) input_focus_pane

0x0aae,	// (0x0002faf7) data_form_wide_pane

0x0acb,	// (0x0002fb14) form_field_data_wide_pane_t1

0x3d4b,	// (0x00032d94) input_focus_pane_cp6

0xbe00,	// (0x0003ae49) form_field_popup_pane_t1

0x3fda,	// (0x00033023) input_focus_pane_cp7

0x4008,	// (0x00033051) list_form_pane

0x0b0d,	// (0x0002fb56) form_field_popup_wide_pane_t1

0x3fda,	// (0x00033023) input_focus_pane_cp8

0x4014,	// (0x0003305d) list_form_wide_pane

0xbe22,	// (0x0003ae6b) form_field_slider_pane_t1_ParamLimits

0xbe22,	// (0x0003ae6b) form_field_slider_pane_t1

0xbe3a,	// (0x0003ae83) form_field_slider_pane_t2_ParamLimits

0xbe3a,	// (0x0003ae83) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003e6cb) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003e6cb) form_field_slider_pane_t

0x39c0,	// (0x00032a09) input_focus_pane_cp9_ParamLimits

0x39c0,	// (0x00032a09) input_focus_pane_cp9

0xbe4f,	// (0x0003ae98) slider_cont_pane_ParamLimits

0xbe4f,	// (0x0003ae98) slider_cont_pane

0x4020,	// (0x00033069) form_field_slider_wide_pane_t1_ParamLimits

0x4020,	// (0x00033069) form_field_slider_wide_pane_t1

0x0b69,	// (0x0002fbb2) form_field_slider_wide_pane_t2_ParamLimits

0x0b69,	// (0x0002fbb2) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0003e6d0) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0003e6d0) form_field_slider_wide_pane_t

0x39c0,	// (0x00032a09) input_focus_pane_cp10_ParamLimits

0x39c0,	// (0x00032a09) input_focus_pane_cp10

0xbe63,	// (0x0003aeac) slider_cont_pane_cp1_ParamLimits

0xbe63,	// (0x0003aeac) slider_cont_pane_cp1

0xbe77,	// (0x0003aec0) slider_form_pane_cp

0x4032,	// (0x0003307b) input_focus_pane_g1

0x403a,	// (0x00033083) input_focus_pane_g2

0x4042,	// (0x0003308b) input_focus_pane_g3

0x404a,	// (0x00033093) input_focus_pane_g4

0x4052,	// (0x0003309b) input_focus_pane_g5

0x405a,	// (0x000330a3) input_focus_pane_g6

0x4062,	// (0x000330ab) input_focus_pane_g7

0x406a,	// (0x000330b3) input_focus_pane_g8

0x4072,	// (0x000330bb) input_focus_pane_g9

0x365b,	// (0x000326a4) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0003e6d5) input_focus_pane_g

0x5ae0,	// (0x00034b29) wait_border_pane_g3_copy1

0xbe7f,	// (0x0003aec8) data_form_pane_t1

0x365b,	// (0x000326a4) wait_anim_pane_g1_copy1

0xc851,	// (0x0003b89a) data_form_wide_pane_t1

0xbe99,	// (0x0003aee2) list_form_graphic_pane_cp_ParamLimits

0xbe99,	// (0x0003aee2) list_form_graphic_pane_cp

0x69f5,	// (0x00035a3e) slider_form_pane_g1

0x69fe,	// (0x00035a47) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0003e9d3) slider_form_pane_g

0xbe99,	// (0x0003aee2) list_form_graphic_pane_ParamLimits

0xbe99,	// (0x0003aee2) list_form_graphic_pane

0x0be7,	// (0x0002fc30) list_form_graphic_pane_g1

0x0bef,	// (0x0002fc38) list_form_graphic_pane_t1_ParamLimits

0x0bef,	// (0x0002fc38) list_form_graphic_pane_t1

0x3745,	// (0x0003278e) list_highlight_pane_cp5_ParamLimits

0x3745,	// (0x0003278e) list_highlight_pane_cp5

0xbeab,	// (0x0003aef4) find_pane_g1

0x407a,	// (0x000330c3) input_find_pane

0xbeb4,	// (0x0003aefd) input_find_pane_g1_ParamLimits

0xbeb4,	// (0x0003aefd) input_find_pane_g1

0xbec0,	// (0x0003af09) input_find_pane_t1_ParamLimits

0xbec0,	// (0x0003af09) input_find_pane_t1

0xbed5,	// (0x0003af1e) input_find_pane_t2_ParamLimits

0xbed5,	// (0x0003af1e) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003e6ea) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003e6ea) input_find_pane_t

0x4083,	// (0x000330cc) input_focus_pane_cp5_ParamLimits

0x4083,	// (0x000330cc) input_focus_pane_cp5

0x409d,	// (0x000330e6) bg_popup_window_pane_cp2_ParamLimits

0x409d,	// (0x000330e6) bg_popup_window_pane_cp2

0x40aa,	// (0x000330f3) listscroll_menu_pane_ParamLimits

0x40aa,	// (0x000330f3) listscroll_menu_pane

0xd412,	// (0x0003c45b) popup_submenu_window_ParamLimits

0xd412,	// (0x0003c45b) popup_submenu_window

0x40e2,	// (0x0003312b) find_popup_pane_g1

0x40ea,	// (0x00033133) input_popup_find_pane_cp

0x4083,	// (0x000330cc) input_focus_pane_cp4_ParamLimits

0x4083,	// (0x000330cc) input_focus_pane_cp4

0x4100,	// (0x00033149) input_popup_find_pane_t1_ParamLimits

0x4100,	// (0x00033149) input_popup_find_pane_t1

0x3665,	// (0x000326ae) bg_popup_sub_pane_cp

0x412e,	// (0x00033177) listscroll_popup_sub_pane

0x4136,	// (0x0003317f) list_submenu_pane_ParamLimits

0x4136,	// (0x0003317f) list_submenu_pane

0x4147,	// (0x00033190) scroll_pane_cp4

0x414f,	// (0x00033198) list_single_popup_submenu_pane_ParamLimits

0x414f,	// (0x00033198) list_single_popup_submenu_pane

0x4163,	// (0x000331ac) list_single_popup_submenu_pane_g1

0x416b,	// (0x000331b4) list_single_popup_submenu_pane_t1_ParamLimits

0x416b,	// (0x000331b4) list_single_popup_submenu_pane_t1

0x39c0,	// (0x00032a09) bg_active_tab_pane_cp1_ParamLimits

0x39c0,	// (0x00032a09) bg_active_tab_pane_cp1

0x4180,	// (0x000331c9) tabs_2_active_pane_g1

0xd44c,	// (0x0003c495) tabs_2_active_pane_t1

0x39c0,	// (0x00032a09) bg_passive_tab_pane_cp1_ParamLimits

0x39c0,	// (0x00032a09) bg_passive_tab_pane_cp1

0x4180,	// (0x000331c9) tabs_2_passive_pane_g1

0xd44c,	// (0x0003c495) tabs_2_passive_pane_t1

0x3745,	// (0x0003278e) bg_active_tab_pane_cp4

0xd45e,	// (0x0003c4a7) tabs_2_long_active_pane_t1

0x4f93,	// (0x00033fdc) bg_passive_tab_pane_cp4

0x18da,	// (0x00030923) list_single_midp_graphic_pane_g4_ParamLimits

0x3745,	// (0x0003278e) bg_active_tab_pane_cp5

0xd471,	// (0x0003c4ba) tabs_3_long_active_pane_t1

0x4f93,	// (0x00033fdc) bg_passive_tab_pane_cp5

0x18da,	// (0x00030923) list_single_midp_graphic_pane_g4

0x3745,	// (0x0003278e) bg_popup_window_pane_cp13_ParamLimits

0x3745,	// (0x0003278e) bg_popup_window_pane_cp13

0x41e2,	// (0x0003322b) listscroll_popup_fast_pane_ParamLimits

0x41e2,	// (0x0003322b) listscroll_popup_fast_pane

0x41f1,	// (0x0003323a) grid_popup_fast_pane_ParamLimits

0x41f1,	// (0x0003323a) grid_popup_fast_pane

0x4203,	// (0x0003324c) scroll_pane_cp9_ParamLimits

0x4203,	// (0x0003324c) scroll_pane_cp9

0x82f4,	// (0x0003733d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x82f4,	// (0x0003733d) list_single_graphic_hl_pane_t1_cp2

0x4227,	// (0x00033270) input_focus_pane_cp20_ParamLimits

0x4227,	// (0x00033270) input_focus_pane_cp20

0x4235,	// (0x0003327e) query_popup_data_pane_t1_ParamLimits

0x4235,	// (0x0003327e) query_popup_data_pane_t1

0x4248,	// (0x00033291) query_popup_data_pane_t2_ParamLimits

0x4248,	// (0x00033291) query_popup_data_pane_t2

0x428e,	// (0x000332d7) query_popup_data_pane_t3_ParamLimits

0x428e,	// (0x000332d7) query_popup_data_pane_t3

0x42cf,	// (0x00033318) query_popup_data_pane_t4_ParamLimits

0x42cf,	// (0x00033318) query_popup_data_pane_t4

0x430b,	// (0x00033354) query_popup_data_pane_t5_ParamLimits

0x430b,	// (0x00033354) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0003e6ef) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0003e6ef) query_popup_data_pane_t

0x4032,	// (0x0003307b) bg_set_opt_pane_g1

0x403a,	// (0x00033083) bg_set_opt_pane_g2

0x4042,	// (0x0003308b) bg_set_opt_pane_g3

0x404a,	// (0x00033093) bg_set_opt_pane_g4

0x4052,	// (0x0003309b) bg_set_opt_pane_g5

0x405a,	// (0x000330a3) bg_set_opt_pane_g6

0x4062,	// (0x000330ab) bg_set_opt_pane_g7

0x406a,	// (0x000330b3) bg_set_opt_pane_g8

0x4072,	// (0x000330bb) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0003e6fa) bg_set_opt_pane_g

0x0f6a,	// (0x0002ffb3) control_top_pane_stacon_ParamLimits

0x0f6a,	// (0x0002ffb3) control_top_pane_stacon

0x0fbd,	// (0x00030006) signal_pane_stacon_ParamLimits

0x0fbd,	// (0x00030006) signal_pane_stacon

0x48fd,	// (0x00033946) stacon_top_pane_g1_ParamLimits

0x48fd,	// (0x00033946) stacon_top_pane_g1

0x0fe2,	// (0x0003002b) title_pane_stacon_ParamLimits

0x0fe2,	// (0x0003002b) title_pane_stacon

0x100c,	// (0x00030055) uni_indicator_pane_stacon_ParamLimits

0x100c,	// (0x00030055) uni_indicator_pane_stacon

0x1021,	// (0x0003006a) battery_pane_stacon_ParamLimits

0x1021,	// (0x0003006a) battery_pane_stacon

0x1065,	// (0x000300ae) control_bottom_pane_stacon_ParamLimits

0x1065,	// (0x000300ae) control_bottom_pane_stacon

0x1088,	// (0x000300d1) navi_pane_stacon_ParamLimits

0x1088,	// (0x000300d1) navi_pane_stacon

0x491f,	// (0x00033968) stacon_bottom_pane_g1_ParamLimits

0x491f,	// (0x00033968) stacon_bottom_pane_g1

0x0c43,	// (0x0002fc8c) aid_levels_signal_lsc_ParamLimits

0x0c43,	// (0x0002fc8c) aid_levels_signal_lsc

0x0c59,	// (0x0002fca2) signal_pane_stacon_g1_ParamLimits

0x0c59,	// (0x0002fca2) signal_pane_stacon_g1

0x0c6d,	// (0x0002fcb6) signal_pane_stacon_g2_ParamLimits

0x0c6d,	// (0x0002fcb6) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0003e70d) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003e70d) signal_pane_stacon_g

0x0ca2,	// (0x0002fceb) title_pane_stacon_t1_ParamLimits

0x0ca2,	// (0x0002fceb) title_pane_stacon_t1

0x434f,	// (0x00033398) uni_indicator_pane_stacon_g1

0x4359,	// (0x000333a2) uni_indicator_pane_stacon_g2

0x4363,	// (0x000333ac) uni_indicator_pane_stacon_g3

0x436d,	// (0x000333b6) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0003e719) uni_indicator_pane_stacon_g

0x0cc7,	// (0x0002fd10) control_top_pane_stacon_g1

0x0ccf,	// (0x0002fd18) control_top_pane_stacon_t1_ParamLimits

0x0ccf,	// (0x0002fd18) control_top_pane_stacon_t1

0x0d06,	// (0x0002fd4f) aid_levels_battery_lsc_ParamLimits

0x0d06,	// (0x0002fd4f) aid_levels_battery_lsc

0x0d1d,	// (0x0002fd66) battery_pane_stacon_g1_ParamLimits

0x0d1d,	// (0x0002fd66) battery_pane_stacon_g1

0x0d30,	// (0x0002fd79) battery_pane_stacon_g2_ParamLimits

0x0d30,	// (0x0002fd79) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0003e722) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0003e722) battery_pane_stacon_g

0x0d6e,	// (0x0002fdb7) navi_icon_pane_stacon

0x0d82,	// (0x0002fdcb) navi_navi_pane_stacon

0x0d6e,	// (0x0002fdb7) navi_text_pane_stacon

0x0cc7,	// (0x0002fd10) control_bottom_pane_stacon_g1

0x0d96,	// (0x0002fddf) control_bottom_pane_stacon_t1_ParamLimits

0x0d96,	// (0x0002fddf) control_bottom_pane_stacon_t1

0xd483,	// (0x0003c4cc) grid_app_pane_ParamLimits

0xd483,	// (0x0003c4cc) grid_app_pane

0xd4bb,	// (0x0003c504) scroll_pane_cp15_ParamLimits

0xd4bb,	// (0x0003c504) scroll_pane_cp15

0xd4d0,	// (0x0003c519) cell_app_pane_ParamLimits

0xd4d0,	// (0x0003c519) cell_app_pane

0xd515,	// (0x0003c55e) cell_app_pane_g1_ParamLimits

0xd515,	// (0x0003c55e) cell_app_pane_g1

0x4412,	// (0x0003345b) cell_app_pane_g2_ParamLimits

0x4412,	// (0x0003345b) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0003e727) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0003e727) cell_app_pane_g

0xd539,	// (0x0003c582) cell_app_pane_t1_ParamLimits

0xd539,	// (0x0003c582) cell_app_pane_t1

0x4435,	// (0x0003347e) grid_highlight_pane_ParamLimits

0x4435,	// (0x0003347e) grid_highlight_pane

0x4032,	// (0x0003307b) cell_highlight_pane_g1

0x403a,	// (0x00033083) cell_highlight_pane_g2

0x4042,	// (0x0003308b) cell_highlight_pane_g3

0x404a,	// (0x00033093) cell_highlight_pane_g4

0x4052,	// (0x0003309b) cell_highlight_pane_g5

0x405a,	// (0x000330a3) cell_highlight_pane_g6

0x4062,	// (0x000330ab) cell_highlight_pane_g7

0x406a,	// (0x000330b3) cell_highlight_pane_g8

0x4072,	// (0x000330bb) cell_highlight_pane_g9

0x365b,	// (0x000326a4) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0003e6d5) cell_highlight_pane_g

0x4446,	// (0x0003348f) bg_scroll_pane

0x0de0,	// (0x0002fe29) scroll_handle_pane

0x448d,	// (0x000334d6) scroll_bg_pane_g1

0x44a2,	// (0x000334eb) scroll_bg_pane_g2

0x44ba,	// (0x00033503) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0003e72c) scroll_bg_pane_g

0x44cf,	// (0x00033518) scroll_handle_focus_pane_ParamLimits

0x44cf,	// (0x00033518) scroll_handle_focus_pane

0x448d,	// (0x000334d6) scroll_handle_pane_g1

0x44dc,	// (0x00033525) scroll_handle_pane_g2

0x44ba,	// (0x00033503) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0003e733) scroll_handle_pane_g

0x4083,	// (0x000330cc) bg_popup_sub_pane_cp21_ParamLimits

0x4083,	// (0x000330cc) bg_popup_sub_pane_cp21

0x44f0,	// (0x00033539) popup_fep_japan_predictive_window_t1_ParamLimits

0x44f0,	// (0x00033539) popup_fep_japan_predictive_window_t1

0x450a,	// (0x00033553) popup_fep_japan_predictive_window_t2_ParamLimits

0x450a,	// (0x00033553) popup_fep_japan_predictive_window_t2

0x453d,	// (0x00033586) popup_fep_japan_predictive_window_t3_ParamLimits

0x453d,	// (0x00033586) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0003e73a) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0003e73a) popup_fep_japan_predictive_window_t

0x3665,	// (0x000326ae) bg_popup_sub_pane_cp23

0x4574,	// (0x000335bd) listscroll_japin_cand_pane

0x457c,	// (0x000335c5) popup_fep_japan_candidate_window_t1

0x458a,	// (0x000335d3) candidate_pane_ParamLimits

0x458a,	// (0x000335d3) candidate_pane

0x459c,	// (0x000335e5) scroll_pane_cp30

0x45a4,	// (0x000335ed) list_single_popup_jap_candidate_pane_ParamLimits

0x45a4,	// (0x000335ed) list_single_popup_jap_candidate_pane

0x3665,	// (0x000326ae) list_highlight_pane_cp30

0x45b9,	// (0x00033602) list_single_popup_jap_candidate_pane_t1

0x45c8,	// (0x00033611) level_1_signal

0x45da,	// (0x00033623) level_2_signal

0x45ed,	// (0x00033636) level_3_signal

0x4600,	// (0x00033649) level_4_signal

0x4613,	// (0x0003365c) level_5_signal

0x4626,	// (0x0003366f) level_6_signal

0x4639,	// (0x00033682) level_7_signal

0x45c8,	// (0x00033611) level_1_battery

0x45da,	// (0x00033623) level_2_battery

0x45ed,	// (0x00033636) level_3_battery

0x4600,	// (0x00033649) level_4_battery

0x4613,	// (0x0003365c) level_5_battery

0x4626,	// (0x0003366f) level_6_battery

0x4639,	// (0x00033682) level_7_battery

0x4664,	// (0x000336ad) list_menu_pane_ParamLimits

0x4664,	// (0x000336ad) list_menu_pane

0x467a,	// (0x000336c3) scroll_pane_cp25_ParamLimits

0x467a,	// (0x000336c3) scroll_pane_cp25

0x4693,	// (0x000336dc) list_double2_graphic_pane_cp2_ParamLimits

0x4693,	// (0x000336dc) list_double2_graphic_pane_cp2

0x4693,	// (0x000336dc) list_double2_large_graphic_pane_cp2_ParamLimits

0x4693,	// (0x000336dc) list_double2_large_graphic_pane_cp2

0x4693,	// (0x000336dc) list_double2_pane_cp2_ParamLimits

0x4693,	// (0x000336dc) list_double2_pane_cp2

0x4693,	// (0x000336dc) list_double_graphic_pane_cp2_ParamLimits

0x4693,	// (0x000336dc) list_double_graphic_pane_cp2

0x4693,	// (0x000336dc) list_double_large_graphic_pane_cp2_ParamLimits

0x4693,	// (0x000336dc) list_double_large_graphic_pane_cp2

0x4693,	// (0x000336dc) list_double_number_pane_cp2_ParamLimits

0x4693,	// (0x000336dc) list_double_number_pane_cp2

0x4693,	// (0x000336dc) list_double_pane_cp2_ParamLimits

0x4693,	// (0x000336dc) list_double_pane_cp2

0xd550,	// (0x0003c599) list_single_2graphic_pane_cp2_ParamLimits

0xd550,	// (0x0003c599) list_single_2graphic_pane_cp2

0xd550,	// (0x0003c599) list_single_graphic_heading_pane_cp2_ParamLimits

0xd550,	// (0x0003c599) list_single_graphic_heading_pane_cp2

0xd550,	// (0x0003c599) list_single_graphic_pane_cp2_ParamLimits

0xd550,	// (0x0003c599) list_single_graphic_pane_cp2

0xd550,	// (0x0003c599) list_single_heading_pane_cp2_ParamLimits

0xd550,	// (0x0003c599) list_single_heading_pane_cp2

0x46d0,	// (0x00033719) list_single_large_graphic_pane_cp2_ParamLimits

0x46d0,	// (0x00033719) list_single_large_graphic_pane_cp2

0xd550,	// (0x0003c599) list_single_number_heading_pane_cp2_ParamLimits

0xd550,	// (0x0003c599) list_single_number_heading_pane_cp2

0xd550,	// (0x0003c599) list_single_number_pane_cp2_ParamLimits

0xd550,	// (0x0003c599) list_single_number_pane_cp2

0xd550,	// (0x0003c599) list_single_pane_cp2_ParamLimits

0xd550,	// (0x0003c599) list_single_pane_cp2

0x474c,	// (0x00033795) bg_popup_sub_pane_cp22

0x0e92,	// (0x0002fedb) popup_side_volume_key_window_g1

0x0ebc,	// (0x0002ff05) popup_side_volume_key_window_t1

0x0ed8,	// (0x0002ff21) volume_small_pane_cp1

0x39c0,	// (0x00032a09) bg_popup_sub_pane_cp24_ParamLimits

0x39c0,	// (0x00032a09) bg_popup_sub_pane_cp24

0x4762,	// (0x000337ab) fep_china_uni_candidate_pane_ParamLimits

0x4762,	// (0x000337ab) fep_china_uni_candidate_pane

0x4776,	// (0x000337bf) fep_china_uni_entry_pane

0x4786,	// (0x000337cf) popup_fep_china_uni_window_g1

0x47a2,	// (0x000337eb) fep_china_uni_entry_pane_g1

0x47aa,	// (0x000337f3) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0003e76b) fep_china_uni_entry_pane_g

0x47b2,	// (0x000337fb) fep_entry_item_pane

0x47bc,	// (0x00033805) fep_candidate_item_pane

0x47c4,	// (0x0003380d) fep_china_uni_candidate_pane_g1

0x47cc,	// (0x00033815) fep_china_uni_candidate_pane_g2

0x47d4,	// (0x0003381d) fep_china_uni_candidate_pane_g3

0x47dc,	// (0x00033825) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0003e770) fep_china_uni_candidate_pane_g

0x365b,	// (0x000326a4) fep_entry_item_pane_g1

0x47e4,	// (0x0003382d) fep_entry_item_pane_t1_ParamLimits

0x47e4,	// (0x0003382d) fep_entry_item_pane_t1

0x47fa,	// (0x00033843) fep_candidate_item_pane_t1_ParamLimits

0x47fa,	// (0x00033843) fep_candidate_item_pane_t1

0x480f,	// (0x00033858) fep_candidate_item_pane_t2_ParamLimits

0x480f,	// (0x00033858) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003e779) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003e779) fep_candidate_item_pane_t

0x3745,	// (0x0003278e) list_highlight_pane_cp31_ParamLimits

0x3745,	// (0x0003278e) list_highlight_pane_cp31

0x4821,	// (0x0003386a) level_1_signal_lsc

0x482a,	// (0x00033873) level_2_signal_lsc

0x4833,	// (0x0003387c) level_3_signal_lsc

0x483c,	// (0x00033885) level_4_signal_lsc

0x4845,	// (0x0003388e) level_5_signal_lsc

0x484e,	// (0x00033897) level_6_signal_lsc

0x4857,	// (0x000338a0) level_7_signal_lsc

0x4857,	// (0x000338a0) level_1_battery_lsc

0x4860,	// (0x000338a9) level_2_battery_lsc

0x4869,	// (0x000338b2) level_3_battery_lsc

0x4872,	// (0x000338bb) level_4_battery_lsc

0x487b,	// (0x000338c4) level_5_battery_lsc

0x4884,	// (0x000338cd) level_6_battery_lsc

0x4821,	// (0x0003386a) level_7_battery_lsc

0x488d,	// (0x000338d6) scroll_handle_focus_pane_g1

0x4896,	// (0x000338df) scroll_handle_focus_pane_g2

0x489f,	// (0x000338e8) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0003e77e) scroll_handle_focus_pane_g

0xbef3,	// (0x0003af3c) list_single_2graphic_pane_g1_ParamLimits

0xbef3,	// (0x0003af3c) list_single_2graphic_pane_g1

0xb9d3,	// (0x0003aa1c) list_single_2graphic_pane_g2_ParamLimits

0xb9d3,	// (0x0003aa1c) list_single_2graphic_pane_g2

0x2ce5,	// (0x00031d2e) list_single_2graphic_pane_g3_ParamLimits

0x2ce5,	// (0x00031d2e) list_single_2graphic_pane_g3

0xbeff,	// (0x0003af48) list_single_2graphic_pane_g4_ParamLimits

0xbeff,	// (0x0003af48) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0003e785) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0003e785) list_single_2graphic_pane_g

0xbf0b,	// (0x0003af54) list_single_2graphic_pane_t1_ParamLimits

0xbf0b,	// (0x0003af54) list_single_2graphic_pane_t1

0xbf39,	// (0x0003af82) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbf39,	// (0x0003af82) list_double2_graphic_large_graphic_pane_g1

0xba3e,	// (0x0003aa87) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xba3e,	// (0x0003aa87) list_double2_graphic_large_graphic_pane_g2

0xba4f,	// (0x0003aa98) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xba4f,	// (0x0003aa98) list_double2_graphic_large_graphic_pane_g3

0xbf4b,	// (0x0003af94) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbf4b,	// (0x0003af94) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0003e78e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0003e78e) list_double2_graphic_large_graphic_pane_g

0xbf57,	// (0x0003afa0) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbf57,	// (0x0003afa0) list_double2_graphic_large_graphic_pane_t1

0xbf6d,	// (0x0003afb6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbf6d,	// (0x0003afb6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003e797) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003e797) list_double2_graphic_large_graphic_pane_t

0x49e7,	// (0x00033a30) popup_fast_swap_window_ParamLimits

0x49e7,	// (0x00033a30) popup_fast_swap_window

0x4a03,	// (0x00033a4c) popup_side_volume_key_window

0x4a1f,	// (0x00033a68) stacon_top_pane

0x4a29,	// (0x00033a72) status_pane_ParamLimits

0x4a29,	// (0x00033a72) status_pane

0xd5dd,	// (0x0003c626) status_small_pane

0x3665,	// (0x000326ae) control_pane

0x3665,	// (0x000326ae) stacon_bottom_pane

0x3fbd,	// (0x00033006) scroll_pane_cp121

0x3fb4,	// (0x00032ffd) set_content_pane

0x48a8,	// (0x000338f1) bg_active_tab_pane_g1_cp1

0x48b1,	// (0x000338fa) bg_active_tab_pane_g2_cp1

0x48ba,	// (0x00033903) bg_active_tab_pane_g3_cp1

0x48a8,	// (0x000338f1) bg_passive_tab_pane_g1_cp1

0x48b1,	// (0x000338fa) bg_passive_tab_pane_g2_cp1

0x48ba,	// (0x00033903) bg_passive_tab_pane_g3_cp1

0x48c3,	// (0x0003390c) bg_active_tab_pane_g1_cp2

0x48b1,	// (0x000338fa) bg_active_tab_pane_g2_cp2

0x48cc,	// (0x00033915) bg_active_tab_pane_g3_cp2

0x48c3,	// (0x0003390c) bg_passive_tab_pane_g1_cp2

0x48b1,	// (0x000338fa) bg_passive_tab_pane_g2_cp2

0x48cc,	// (0x00033915) bg_passive_tab_pane_g3_cp2

0x48d5,	// (0x0003391e) bg_active_tab_pane_g1_cp3

0x48b1,	// (0x000338fa) bg_active_tab_pane_g2_cp3

0x48de,	// (0x00033927) bg_active_tab_pane_g3_cp3

0x48d5,	// (0x0003391e) bg_passive_tab_pane_g1_cp3

0x48b1,	// (0x000338fa) bg_passive_tab_pane_g2_cp3

0x48de,	// (0x00033927) bg_passive_tab_pane_g3_cp3

0x48e7,	// (0x00033930) bg_active_tab_pane_g1_cp4

0x48b1,	// (0x000338fa) bg_active_tab_pane_g2_cp4

0x48f2,	// (0x0003393b) bg_active_tab_pane_g3_cp4

0x48e7,	// (0x00033930) bg_passive_tab_pane_g1_cp4

0x48b1,	// (0x000338fa) bg_passive_tab_pane_g2_cp4

0x48f2,	// (0x0003393b) bg_passive_tab_pane_g3_cp4

0x493b,	// (0x00033984) bg_active_tab_pane_g1_cp5

0x48b1,	// (0x000338fa) bg_active_tab_pane_g2_cp5

0x4944,	// (0x0003398d) bg_active_tab_pane_g3_cp5

0x493b,	// (0x00033984) bg_passive_tab_pane_g1_cp5

0x48b1,	// (0x000338fa) bg_passive_tab_pane_g2_cp5

0x4944,	// (0x0003398d) bg_passive_tab_pane_g3_cp5

0x6ff2,	// (0x0003603b) list_set_graphic_pane_ParamLimits

0x6ff2,	// (0x0003603b) list_set_graphic_pane

0x3665,	// (0x000326ae) bg_set_opt_pane_cp4

0x496a,	// (0x000339b3) list_set_graphic_pane_g1_ParamLimits

0x496a,	// (0x000339b3) list_set_graphic_pane_g1

0x4976,	// (0x000339bf) list_set_graphic_pane_g2_ParamLimits

0x4976,	// (0x000339bf) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003e79c) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003e79c) list_set_graphic_pane_g

0x0009,

0xfabc,	// (0x0003eb05) volume_small_pane_cp_g

0x499a,	// (0x000339e3) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x499a,	// (0x000339e3) list_double2_large_graphic_pane_g1_cp2

0x49a6,	// (0x000339ef) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x49a6,	// (0x000339ef) list_double2_large_graphic_pane_g2_cp2

0x49b7,	// (0x00033a00) list_double2_large_graphic_pane_g3_cp2

0x49bf,	// (0x00033a08) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x49bf,	// (0x00033a08) list_double2_large_graphic_pane_t1_cp2

0x49d5,	// (0x00033a1e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x49d5,	// (0x00033a1e) list_double2_large_graphic_pane_t2_cp2

0x65b3,	// (0x000355fc) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x65b3,	// (0x000355fc) list_double_large_graphic_pane_g1_cp2

0x65c4,	// (0x0003560d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x65c4,	// (0x0003560d) list_double_large_graphic_pane_g2_cp2

0x4b50,	// (0x00033b99) list_double_large_graphic_pane_g3_cp2

0x65d5,	// (0x0003561e) list_double_large_graphic_pane_g4_cp

0x65dd,	// (0x00035626) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x65dd,	// (0x00035626) list_double_large_graphic_pane_t1_cp2

0x65f4,	// (0x0003563d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x65f4,	// (0x0003563d) list_double_large_graphic_pane_t2_cp2

0x4a42,	// (0x00033a8b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4a42,	// (0x00033a8b) list_double2_graphic_pane_g1_cp2

0x4a50,	// (0x00033a99) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4a50,	// (0x00033a99) list_double2_graphic_pane_g2_cp2

0x4a61,	// (0x00033aaa) list_double2_graphic_pane_g3_cp2

0x4a6b,	// (0x00033ab4) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4a6b,	// (0x00033ab4) list_double2_graphic_pane_t1_cp2

0x4a81,	// (0x00033aca) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4a81,	// (0x00033aca) list_double2_graphic_pane_t2_cp2

0x4a93,	// (0x00033adc) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4a93,	// (0x00033adc) list_single_number_heading_pane_g1_cp2

0x4a9f,	// (0x00033ae8) list_single_number_heading_pane_g2_cp2

0x4aa7,	// (0x00033af0) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4aa7,	// (0x00033af0) list_single_number_heading_pane_t1_cp2

0x4abd,	// (0x00033b06) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4abd,	// (0x00033b06) list_single_number_heading_pane_t2_cp2

0x4acf,	// (0x00033b18) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4acf,	// (0x00033b18) list_single_number_heading_pane_t3_cp2

0x4a93,	// (0x00033adc) list_single_heading_pane_g1_cp2_ParamLimits

0x4a93,	// (0x00033adc) list_single_heading_pane_g1_cp2

0x4a9f,	// (0x00033ae8) list_single_heading_pane_g2_cp2

0x4aa7,	// (0x00033af0) list_single_heading_pane_t1_cp2_ParamLimits

0x4aa7,	// (0x00033af0) list_single_heading_pane_t1_cp2

0x63bb,	// (0x00035404) list_single_heading_pane_t2_cp2_ParamLimits

0x63bb,	// (0x00035404) list_single_heading_pane_t2_cp2

0x6303,	// (0x0003534c) list_double_graphic_pane_g1_cp2_ParamLimits

0x6303,	// (0x0003534c) list_double_graphic_pane_g1_cp2

0x630f,	// (0x00035358) list_double_graphic_pane_g2_cp2_ParamLimits

0x630f,	// (0x00035358) list_double_graphic_pane_g2_cp2

0x631e,	// (0x00035367) list_double_graphic_pane_g3_cp2

0x6326,	// (0x0003536f) list_double_graphic_pane_t1_cp2_ParamLimits

0x6326,	// (0x0003536f) list_double_graphic_pane_t1_cp2

0x633c,	// (0x00035385) list_double_graphic_pane_t2_cp2_ParamLimits

0x633c,	// (0x00035385) list_double_graphic_pane_t2_cp2

0x4b44,	// (0x00033b8d) list_double_number_pane_g1_cp2_ParamLimits

0x4b44,	// (0x00033b8d) list_double_number_pane_g1_cp2

0x4b50,	// (0x00033b99) list_double_number_pane_g2_cp2

0x62c7,	// (0x00035310) list_double_number_pane_t1_cp2_ParamLimits

0x62c7,	// (0x00035310) list_double_number_pane_t1_cp2

0x62db,	// (0x00035324) list_double_number_pane_t2_cp2_ParamLimits

0x62db,	// (0x00035324) list_double_number_pane_t2_cp2

0x62f1,	// (0x0003533a) list_double_number_pane_t3_cp2_ParamLimits

0x62f1,	// (0x0003533a) list_double_number_pane_t3_cp2

0x61b0,	// (0x000351f9) list_single_graphic_pane_g1_cp2_ParamLimits

0x61b0,	// (0x000351f9) list_single_graphic_pane_g1_cp2

0x4ba8,	// (0x00033bf1) list_single_graphic_pane_g2_cp2_ParamLimits

0x4ba8,	// (0x00033bf1) list_single_graphic_pane_g2_cp2

0x4bb4,	// (0x00033bfd) list_single_graphic_pane_g3_cp2

0x6186,	// (0x000351cf) list_single_graphic_pane_t1_cp2_ParamLimits

0x6186,	// (0x000351cf) list_single_graphic_pane_t1_cp2

0x4ba8,	// (0x00033bf1) list_single_number_pane_g1_cp2_ParamLimits

0x4ba8,	// (0x00033bf1) list_single_number_pane_g1_cp2

0x4bb4,	// (0x00033bfd) list_single_number_pane_g2_cp2

0x6186,	// (0x000351cf) list_single_number_pane_t1_cp2_ParamLimits

0x6186,	// (0x000351cf) list_single_number_pane_t1_cp2

0x619c,	// (0x000351e5) list_single_number_pane_t2_cp2_ParamLimits

0x619c,	// (0x000351e5) list_single_number_pane_t2_cp2

0x49a6,	// (0x000339ef) list_double2_pane_g1_cp2_ParamLimits

0x49a6,	// (0x000339ef) list_double2_pane_g1_cp2

0x49b7,	// (0x00033a00) list_double2_pane_g2_cp2

0x4b1c,	// (0x00033b65) list_double2_pane_t1_cp2_ParamLimits

0x4b1c,	// (0x00033b65) list_double2_pane_t1_cp2

0x4b32,	// (0x00033b7b) list_double2_pane_t2_cp2_ParamLimits

0x4b32,	// (0x00033b7b) list_double2_pane_t2_cp2

0x4b44,	// (0x00033b8d) list_double_pane_g1_cp2_ParamLimits

0x4b44,	// (0x00033b8d) list_double_pane_g1_cp2

0x4b50,	// (0x00033b99) list_double_pane_g2_cp2

0x4b58,	// (0x00033ba1) list_double_pane_t1_cp2_ParamLimits

0x4b58,	// (0x00033ba1) list_double_pane_t1_cp2

0x4b6e,	// (0x00033bb7) list_double_pane_t2_cp2_ParamLimits

0x4b6e,	// (0x00033bb7) list_double_pane_t2_cp2

0x4b98,	// (0x00033be1) list_single_pane_cp2_g3

0x4ba8,	// (0x00033bf1) list_single_pane_g1_cp2_ParamLimits

0x4ba8,	// (0x00033bf1) list_single_pane_g1_cp2

0x4bb4,	// (0x00033bfd) list_single_pane_g2_cp2

0x4bbc,	// (0x00033c05) list_single_pane_t1_cp2_ParamLimits

0x4bbc,	// (0x00033c05) list_single_pane_t1_cp2

0x4bd4,	// (0x00033c1d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4bd4,	// (0x00033c1d) list_single_large_graphic_pane_g1_cp2

0x4be0,	// (0x00033c29) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4be0,	// (0x00033c29) list_single_large_graphic_pane_g2_cp2

0x4bec,	// (0x00033c35) list_single_large_graphic_pane_g3_cp2

0x4bf4,	// (0x00033c3d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4bf4,	// (0x00033c3d) list_single_large_graphic_pane_g4_cp1

0x4c0e,	// (0x00033c57) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4c0e,	// (0x00033c57) list_single_large_graphic_pane_t1_cp2

0x6152,	// (0x0003519b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6152,	// (0x0003519b) list_single_graphic_heading_pane_g1_cp2

0x611f,	// (0x00035168) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x611f,	// (0x00035168) list_single_graphic_heading_pane_g4_cp2

0x4bb4,	// (0x00033bfd) list_single_graphic_heading_pane_g5_cp2

0x615e,	// (0x000351a7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x615e,	// (0x000351a7) list_single_graphic_heading_pane_t1_cp2

0x6174,	// (0x000351bd) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6174,	// (0x000351bd) list_single_graphic_heading_pane_t2_cp2

0x6113,	// (0x0003515c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6113,	// (0x0003515c) list_single_2graphic_pane_g1_cp2

0x611f,	// (0x00035168) list_single_2graphic_pane_g2_cp2_ParamLimits

0x611f,	// (0x00035168) list_single_2graphic_pane_g2_cp2

0x4bb4,	// (0x00033bfd) list_single_2graphic_pane_g3_cp2

0x6130,	// (0x00035179) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6130,	// (0x00035179) list_single_2graphic_pane_g4_cp2

0x613c,	// (0x00035185) list_single_2graphic_pane_t1_cp2_ParamLimits

0x613c,	// (0x00035185) list_single_2graphic_pane_t1_cp2

0x365b,	// (0x000326a4) list_highlight_pane_g10_cp1

0x5ceb,	// (0x00034d34) list_highlight_pane_g1_cp1

0x5cf3,	// (0x00034d3c) list_highlight_pane_g2_cp1

0x5cfb,	// (0x00034d44) list_highlight_pane_g3_cp1

0x5d03,	// (0x00034d4c) list_highlight_pane_g4_cp1

0x5d0b,	// (0x00034d54) list_highlight_pane_g5_cp1

0x5d13,	// (0x00034d5c) list_highlight_pane_g6_cp1

0x5d1b,	// (0x00034d64) list_highlight_pane_g7_cp1

0x5d23,	// (0x00034d6c) list_highlight_pane_g8_cp1

0x5d2b,	// (0x00034d74) list_highlight_pane_g9_cp1

0xdc1d,	// (0x0003cc66) form_field_slider_pane_t3

0xdc2b,	// (0x0003cc74) form_field_slider_pane_t4

0x5c27,	// (0x00034c70) slider_form_pane_ParamLimits

0x5c27,	// (0x00034c70) slider_form_pane

0x3665,	// (0x000326ae) control_abbreviations

0x3665,	// (0x000326ae) control_conventions

0x3665,	// (0x000326ae) control_definitions

0x3665,	// (0x000326ae) format_table_attribute

0x6405,	// (0x0003544e) bg_popup_preview_window_pane_g9

0x3665,	// (0x000326ae) format_table_data2

0x3665,	// (0x000326ae) format_table_data3

0x3665,	// (0x000326ae) format_table_data_example

0x0008,

0x3665,	// (0x000326ae) intro_purpose

0xf8ea,	// (0x0003e933) bg_popup_preview_window_pane_g

0x3665,	// (0x000326ae) texts_category

0x3665,	// (0x000326ae) texts_graphics

0x4c24,	// (0x00033c6d) text_digital

0x4c33,	// (0x00033c7c) text_primary

0x4c42,	// (0x00033c8b) text_primary_small

0x4c51,	// (0x00033c9a) text_secondary

0x4c60,	// (0x00033ca9) text_title

0x6b34,	// (0x00035b7d) bg_passive_tab_pane_g1_cp3_srt

0x48b1,	// (0x000338fa) bg_passive_tab_pane_g2_cp3_srt

0x6b3d,	// (0x00035b86) bg_passive_tab_pane_g3_cp3_srt

0x39c0,	// (0x00032a09) bg_active_tab_pane_cp3_srt_ParamLimits

0x39c0,	// (0x00032a09) bg_active_tab_pane_cp3_srt

0x6b46,	// (0x00035b8f) tabs_4_active_pane_srt_g1

0xdf5d,	// (0x0003cfa6) tabs_4_active_pane_srt_t1_ParamLimits

0xdf5d,	// (0x0003cfa6) tabs_4_active_pane_srt_t1

0x6b34,	// (0x00035b7d) bg_active_tab_pane_g1_cp3_copy1

0x48b1,	// (0x000338fa) bg_active_tab_pane_g2_cp3_copy1

0x6b3d,	// (0x00035b86) bg_active_tab_pane_g3_cp3_copy1

0x3745,	// (0x0003278e) tabs_2_long_active_pane_srt_ParamLimits

0x3745,	// (0x0003278e) tabs_2_long_active_pane_srt

0x3745,	// (0x0003278e) tabs_2_long_passive_pane_srt_ParamLimits

0x3745,	// (0x0003278e) tabs_2_long_passive_pane_srt

0x4f93,	// (0x00033fdc) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4f93,	// (0x00033fdc) bg_passive_tab_pane_cp4_srt

0x6828,	// (0x00035871) bg_passive_tab_pane_g1_cp4_srt

0x48b1,	// (0x000338fa) bg_passive_tab_pane_g2_cp4_srt

0x6831,	// (0x0003587a) bg_passive_tab_pane_g3_cp4_srt

0x3745,	// (0x0003278e) bg_active_tab_pane_cp4_srt_ParamLimits

0x3745,	// (0x0003278e) bg_active_tab_pane_cp4_srt

0xdd87,	// (0x0003cdd0) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdd87,	// (0x0003cdd0) tabs_2_long_active_pane_srt_t1

0x6828,	// (0x00035871) bg_active_tab_pane_g1_cp4_srt

0x48b1,	// (0x000338fa) bg_active_tab_pane_g2_cp4_srt

0x6831,	// (0x0003587a) bg_active_tab_pane_g3_cp4_srt

0x39c0,	// (0x00032a09) tabs_3_long_active_pane_srt_ParamLimits

0x39c0,	// (0x00032a09) tabs_3_long_active_pane_srt

0x39c0,	// (0x00032a09) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x39c0,	// (0x00032a09) tabs_3_long_passive_pane_cp_srt

0x39c0,	// (0x00032a09) tabs_3_long_passive_pane_srt_ParamLimits

0x39c0,	// (0x00032a09) tabs_3_long_passive_pane_srt

0x4f93,	// (0x00033fdc) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4f93,	// (0x00033fdc) bg_passive_tab_pane_cp5_srt

0x493b,	// (0x00033984) bg_passive_tab_pane_g1_cp5_srt

0x48b1,	// (0x000338fa) bg_passive_tab_pane_g2_cp5_srt

0x4944,	// (0x0003398d) bg_passive_tab_pane_g3_cp5_srt

0x3745,	// (0x0003278e) bg_active_tab_pane_cp5_srt_ParamLimits

0x3745,	// (0x0003278e) bg_active_tab_pane_cp5_srt

0xdd71,	// (0x0003cdba) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd71,	// (0x0003cdba) tabs_3_long_active_pane_srt_t1

0x493b,	// (0x00033984) bg_active_tab_pane_g1_cp5_srt

0x48b1,	// (0x000338fa) bg_active_tab_pane_g2_cp5_srt

0x4944,	// (0x0003398d) bg_active_tab_pane_g3_cp5_srt

0x6808,	// (0x00035851) navi_text_pane_srt_t1

0x6800,	// (0x00035849) navi_icon_pane_srt_g1

0x4e35,	// (0x00033e7e) midp_editing_number_pane_srt

0x4c6f,	// (0x00033cb8) midp_ticker_pane_srt

0x4e3d,	// (0x00033e86) midp_ticker_pane_srt_g1

0x4e45,	// (0x00033e8e) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003e7bb) midp_ticker_pane_srt_g

0x4e4d,	// (0x00033e96) midp_ticker_pane_srt_t1

0x67f1,	// (0x0003583a) midp_editing_number_pane_t1_copy1

0xd5e8,	// (0x0003c631) listscroll_midp_pane

0xd5e8,	// (0x0003c631) midp_form_pane

0x4ce7,	// (0x00033d30) midp_info_popup_window_ParamLimits

0x4ce7,	// (0x00033d30) midp_info_popup_window

0x4083,	// (0x000330cc) bg_popup_sub_pane_cp50_ParamLimits

0x4083,	// (0x000330cc) bg_popup_sub_pane_cp50

0x5917,	// (0x00034960) listscroll_midp_info_pane_ParamLimits

0x5917,	// (0x00034960) listscroll_midp_info_pane

0x58f7,	// (0x00034940) listscroll_form_midp_pane_ParamLimits

0x58f7,	// (0x00034940) listscroll_form_midp_pane

0x5903,	// (0x0003494c) scroll_bar_cp050

0x58f7,	// (0x00034940) list_midp_pane

0x7578,	// (0x000365c1) signal_pane_g2_cp

0x5805,	// (0x0003484e) listscroll_midp_info_pane_t1_ParamLimits

0x5805,	// (0x0003484e) listscroll_midp_info_pane_t1

0x581d,	// (0x00034866) listscroll_midp_info_pane_t2_ParamLimits

0x581d,	// (0x00034866) listscroll_midp_info_pane_t2

0x585b,	// (0x000348a4) listscroll_midp_info_pane_t3_ParamLimits

0x585b,	// (0x000348a4) listscroll_midp_info_pane_t3

0x58a1,	// (0x000348ea) listscroll_midp_info_pane_t4_ParamLimits

0x58a1,	// (0x000348ea) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0003e86e) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0003e86e) listscroll_midp_info_pane_t

0x4147,	// (0x00033190) scroll_pane_cp21

0x57a3,	// (0x000347ec) form_midp_field_choice_group_pane

0x57ac,	// (0x000347f5) form_midp_field_text_pane

0x57eb,	// (0x00034834) form_midp_field_time_pane

0x57f3,	// (0x0003483c) form_midp_gauge_slider_pane

0x57fc,	// (0x00034845) form_midp_gauge_wait_pane

0x3665,	// (0x000326ae) form_midp_image_pane

0xc828,	// (0x0003b871) list_single_midp_pane_ParamLimits

0xc828,	// (0x0003b871) list_single_midp_pane

0xdbfc,	// (0x0003cc45) form_midp_field_text_pane_t1

0x552b,	// (0x00034574) input_focus_pane_cp050

0x5792,	// (0x000347db) list_midp_form_text_pane

0x572a,	// (0x00034773) form_midp_field_choice_group_pane_t1

0x5738,	// (0x00034781) input_focus_pane_cp051

0x574c,	// (0x00034795) list_midp_choice_pane

0x3665,	// (0x000326ae) status_idle_pane

0x570e,	// (0x00034757) form_midp_field_time_pane_t1

0x365b,	// (0x000326a4) wait_anim_pane_g2_copy1

0x571c,	// (0x00034765) form_midp_field_time_pane_t2

0x0001,

0x4d95,	// (0x00033dde) aid_navinavi_width_2_pane

0xf820,	// (0x0003e869) form_midp_field_time_pane_t

0x3665,	// (0x000326ae) input_focus_pane_cp052

0x3665,	// (0x000326ae) bg_input_focus_pane_cp040

0x56ce,	// (0x00034717) form_midp_gauge_slider_pane_t1

0x56dc,	// (0x00034725) form_midp_gauge_slider_pane_t2

0xdbe0,	// (0x0003cc29) form_midp_gauge_slider_pane_t3

0xdbee,	// (0x0003cc37) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0003e860) form_midp_gauge_slider_pane_t

0x5706,	// (0x0003474f) form_midp_slider_pane

0x3745,	// (0x0003278e) bg_input_focus_pane_cp041_ParamLimits

0x3745,	// (0x0003278e) bg_input_focus_pane_cp041

0x569b,	// (0x000346e4) form_midp_gauge_wait_pane_t1_ParamLimits

0x569b,	// (0x000346e4) form_midp_gauge_wait_pane_t1

0x56ad,	// (0x000346f6) form_midp_gauge_wait_pane_t2_ParamLimits

0x56ad,	// (0x000346f6) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0003e85b) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0003e85b) form_midp_gauge_wait_pane_t

0x56bf,	// (0x00034708) form_midp_wait_pane_ParamLimits

0x56bf,	// (0x00034708) form_midp_wait_pane

0x5665,	// (0x000346ae) form_midp_image_pane_g1

0x566e,	// (0x000346b7) form_midp_image_pane_t1

0x567d,	// (0x000346c6) form_midp_image_pane_t2

0x568c,	// (0x000346d5) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0003e854) form_midp_image_pane_t

0x565c,	// (0x000346a5) list_single_midp_pane_g1

0x2da5,	// (0x00031dee) list_single_midp_pane_t1

0xdbcc,	// (0x0003cc15) list_midp_form_item_pane_ParamLimits

0xdbcc,	// (0x0003cc15) list_midp_form_item_pane

0x4d3d,	// (0x00033d86) list_midp_form_item_pane_t1

0x4d4c,	// (0x00033d95) midp_ticker_pane_g1

0x4d58,	// (0x00033da1) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0003e7a1) midp_ticker_pane_g

0x4d64,	// (0x00033dad) midp_ticker_pane_t1

0x6a42,	// (0x00035a8b) midp_editing_number_pane_t1

0x6a20,	// (0x00035a69) midp_editing_number_pane

0x6a2f,	// (0x00035a78) midp_ticker_pane

0x67e1,	// (0x0003582a) ai_message_heading_pane

0x3665,	// (0x000326ae) bg_popup_window_pane_cp14

0x67e9,	// (0x00035832) listscroll_ai_message_pane

0x676b,	// (0x000357b4) ai_message_heading_pane_g1_ParamLimits

0x676b,	// (0x000357b4) ai_message_heading_pane_g1

0x6777,	// (0x000357c0) ai_message_heading_pane_g2_ParamLimits

0x6777,	// (0x000357c0) ai_message_heading_pane_g2

0x6783,	// (0x000357cc) ai_message_heading_pane_g3_ParamLimits

0x6783,	// (0x000357cc) ai_message_heading_pane_g3

0x678f,	// (0x000357d8) ai_message_heading_pane_g4_ParamLimits

0x678f,	// (0x000357d8) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0003e995) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0003e995) ai_message_heading_pane_g

0x679b,	// (0x000357e4) ai_message_heading_pane_t1_ParamLimits

0x679b,	// (0x000357e4) ai_message_heading_pane_t1

0x67b5,	// (0x000357fe) ai_message_heading_pane_t2_ParamLimits

0x67b5,	// (0x000357fe) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0003e99e) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0003e99e) ai_message_heading_pane_t

0x67c7,	// (0x00035810) bg_popup_heading_pane_cp1_ParamLimits

0x67c7,	// (0x00035810) bg_popup_heading_pane_cp1

0x6759,	// (0x000357a2) list_ai_message_pane_ParamLimits

0x6759,	// (0x000357a2) list_ai_message_pane

0x4147,	// (0x00033190) scroll_pane_cp10

0x66f5,	// (0x0003573e) list_ai_message_pane_g1

0x66fd,	// (0x00035746) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0003e972) list_ai_message_pane_g

0x6705,	// (0x0003574e) list_ai_message_pane_t1_ParamLimits

0x6705,	// (0x0003574e) list_ai_message_pane_t1

0x671a,	// (0x00035763) list_ai_message_pane_t2_ParamLimits

0x671a,	// (0x00035763) list_ai_message_pane_t2

0x672f,	// (0x00035778) list_ai_message_pane_t3_ParamLimits

0x672f,	// (0x00035778) list_ai_message_pane_t3

0x6744,	// (0x0003578d) list_ai_message_pane_t4_ParamLimits

0x6744,	// (0x0003578d) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0003e977) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0003e977) list_ai_message_pane_t

0xdd50,	// (0x0003cd99) cell_ai_soft_ind_pane_ParamLimits

0xdd50,	// (0x0003cd99) cell_ai_soft_ind_pane

0x4d76,	// (0x00033dbf) cell_ai_soft_ind_pane_g1_ParamLimits

0x4d76,	// (0x00033dbf) cell_ai_soft_ind_pane_g1

0x3665,	// (0x000326ae) grid_highlight_cp1

0x4d83,	// (0x00033dcc) text_secondary_cp56_ParamLimits

0x4d83,	// (0x00033dcc) text_secondary_cp56

0x66b5,	// (0x000356fe) example_general_pane_ParamLimits

0x66b5,	// (0x000356fe) example_general_pane

0x66c1,	// (0x0003570a) example_parent_pane_g1_ParamLimits

0x66c1,	// (0x0003570a) example_parent_pane_g1

0x66cd,	// (0x00035716) example_parent_pane_t1_ParamLimits

0x66cd,	// (0x00035716) example_parent_pane_t1

0xc4d2,	// (0x0003b51b) popup_preview_text_window_ParamLimits

0xc4d2,	// (0x0003b51b) popup_preview_text_window

0x4ba0,	// (0x00033be9) list_single_pane_cp2_g4

0x3a9c,	// (0x00032ae5) bg_popup_preview_window_pane_ParamLimits

0x3a9c,	// (0x00032ae5) bg_popup_preview_window_pane

0x640d,	// (0x00035456) popup_preview_text_window_t1_ParamLimits

0x640d,	// (0x00035456) popup_preview_text_window_t1

0x642b,	// (0x00035474) popup_preview_text_window_t2_ParamLimits

0x642b,	// (0x00035474) popup_preview_text_window_t2

0x6474,	// (0x000354bd) popup_preview_text_window_t3_ParamLimits

0x6474,	// (0x000354bd) popup_preview_text_window_t3

0x64b9,	// (0x00035502) popup_preview_text_window_t4_ParamLimits

0x64b9,	// (0x00035502) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0003e946) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0003e946) popup_preview_text_window_t

0x6537,	// (0x00035580) scroll_pane_cp11

0x54b7,	// (0x00034500) bg_popup_preview_window_pane_g1

0x63cd,	// (0x00035416) bg_popup_preview_window_pane_g2

0x63d5,	// (0x0003541e) bg_popup_preview_window_pane_g3

0x63dd,	// (0x00035426) bg_popup_preview_window_pane_g4

0x63e5,	// (0x0003542e) bg_popup_preview_window_pane_g5

0x63ed,	// (0x00035436) bg_popup_preview_window_pane_g6

0x63f5,	// (0x0003543e) bg_popup_preview_window_pane_g7

0x63fd,	// (0x00035446) bg_popup_preview_window_pane_g8

0x00aa,	// (0x0002f0f3) aid_popup_width_pane

0xc44e,	// (0x0003b497) popup_midp_note_alarm_window_ParamLimits

0xc44e,	// (0x0003b497) popup_midp_note_alarm_window

0x3fce,	// (0x00033017) data_form_pane_ParamLimits

0xbddc,	// (0x0003ae25) form_field_data_pane_g1

0xbde6,	// (0x0003ae2f) form_field_data_pane_t1_ParamLimits

0x3fda,	// (0x00033023) input_focus_pane_ParamLimits

0x0aae,	// (0x0002faf7) data_form_wide_pane_ParamLimits

0x0abf,	// (0x0002fb08) form_field_data_wide_pane_g1

0x0acb,	// (0x0002fb14) form_field_data_wide_pane_t1_ParamLimits

0x3d4b,	// (0x00032d94) input_focus_pane_cp6_ParamLimits

0xd43e,	// (0x0003c487) input_popup_find_pane_g1_ParamLimits

0xd43e,	// (0x0003c487) input_popup_find_pane_g1

0x0d41,	// (0x0002fd8a) aid_navi_side_left_pane

0x0d56,	// (0x0002fd9f) aid_navi_side_right_pane

0x5de6,	// (0x00034e2f) bg_popup_window_pane_cp30_ParamLimits

0x5de6,	// (0x00034e2f) bg_popup_window_pane_cp30

0x5e60,	// (0x00034ea9) popup_midp_note_alarm_window_g1_ParamLimits

0x5e60,	// (0x00034ea9) popup_midp_note_alarm_window_g1

0x5e90,	// (0x00034ed9) popup_midp_note_alarm_window_t1_ParamLimits

0x5e90,	// (0x00034ed9) popup_midp_note_alarm_window_t1

0x5f31,	// (0x00034f7a) popup_midp_note_alarm_window_t2_ParamLimits

0x5f31,	// (0x00034f7a) popup_midp_note_alarm_window_t2

0x5fdf,	// (0x00035028) popup_midp_note_alarm_window_t3_ParamLimits

0x5fdf,	// (0x00035028) popup_midp_note_alarm_window_t3

0x6011,	// (0x0003505a) popup_midp_note_alarm_window_t4_ParamLimits

0x6011,	// (0x0003505a) popup_midp_note_alarm_window_t4

0x6037,	// (0x00035080) popup_midp_note_alarm_window_t5_ParamLimits

0x6037,	// (0x00035080) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0003e8e3) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0003e8e3) popup_midp_note_alarm_window_t

0x60e3,	// (0x0003512c) wait_bar_pane_cp1_ParamLimits

0x60e3,	// (0x0003512c) wait_bar_pane_cp1

0x3665,	// (0x000326ae) wait_anim_pane_copy1

0x3665,	// (0x000326ae) wait_border_pane_copy1

0x5acc,	// (0x00034b15) wait_border_pane_g1_copy1

0x0ae5,	// (0x0002fb2e) form_field_popup_pane_g1

0xbe00,	// (0x0003ae49) form_field_popup_pane_t1_ParamLimits

0x3fda,	// (0x00033023) input_focus_pane_cp7_ParamLimits

0x4008,	// (0x00033051) list_form_pane_ParamLimits

0x0b05,	// (0x0002fb4e) form_field_popup_wide_pane_g1

0x0b0d,	// (0x0002fb56) form_field_popup_wide_pane_t1_ParamLimits

0x3fda,	// (0x00033023) input_focus_pane_cp8_ParamLimits

0x4014,	// (0x0003305d) list_form_wide_pane_ParamLimits

0xdfb6,	// (0x0003cfff) aid_size_cell_graphic_pane

0xbe7f,	// (0x0003aec8) data_form_pane_t1_ParamLimits

0xc851,	// (0x0003b89a) data_form_wide_pane_t1_ParamLimits

0xd851,	// (0x0003c89a) bg_status_flat_pane

0xd0fd,	// (0x0003c146) title_pane_t1_ParamLimits

0x370d,	// (0x00032756) title_pane_t2_ParamLimits

0x3733,	// (0x0003277c) title_pane_t3_ParamLimits

0xf557,	// (0x0003e5a0) title_pane_t_ParamLimits

0x45c8,	// (0x00033611) level_1_signal_ParamLimits

0x45da,	// (0x00033623) level_2_signal_ParamLimits

0x45ed,	// (0x00033636) level_3_signal_ParamLimits

0x4600,	// (0x00033649) level_4_signal_ParamLimits

0x4613,	// (0x0003365c) level_5_signal_ParamLimits

0x4626,	// (0x0003366f) level_6_signal_ParamLimits

0x4639,	// (0x00033682) level_7_signal_ParamLimits

0x45c8,	// (0x00033611) level_1_battery_ParamLimits

0x45da,	// (0x00033623) level_2_battery_ParamLimits

0x45ed,	// (0x00033636) level_3_battery_ParamLimits

0x4600,	// (0x00033649) level_4_battery_ParamLimits

0x4613,	// (0x0003365c) level_5_battery_ParamLimits

0x4626,	// (0x0003366f) level_6_battery_ParamLimits

0x4639,	// (0x00033682) level_7_battery_ParamLimits

0x5ceb,	// (0x00034d34) bg_status_flat_pane_g1

0x5cf3,	// (0x00034d3c) bg_status_flat_pane_g2

0x5cfb,	// (0x00034d44) bg_status_flat_pane_g3

0x5d03,	// (0x00034d4c) bg_status_flat_pane_g4

0x5d0b,	// (0x00034d54) bg_status_flat_pane_g5

0x5d13,	// (0x00034d5c) bg_status_flat_pane_g6

0x5d1b,	// (0x00034d64) bg_status_flat_pane_g7

0xd189,	// (0x0003c1d2) tabs_3_active_pane_t1_ParamLimits

0xd189,	// (0x0003c1d2) tabs_3_passive_pane_t1_ParamLimits

0xd19b,	// (0x0003c1e4) tabs_4_active_pane_t1_ParamLimits

0xd19b,	// (0x0003c1e4) tabs_4_1_passive_pane_t1_ParamLimits

0xd44c,	// (0x0003c495) tabs_2_active_pane_t1_ParamLimits

0xd44c,	// (0x0003c495) tabs_2_passive_pane_t1_ParamLimits

0x3745,	// (0x0003278e) bg_active_tab_pane_cp4_ParamLimits

0xd45e,	// (0x0003c4a7) tabs_2_long_active_pane_t1_ParamLimits

0x4f93,	// (0x00033fdc) bg_passive_tab_pane_cp4_ParamLimits

0x190e,	// (0x00030957) list_single_midp_graphic_pane_t1_ParamLimits

0x3745,	// (0x0003278e) bg_active_tab_pane_cp5_ParamLimits

0xd471,	// (0x0003c4ba) tabs_3_long_active_pane_t1_ParamLimits

0x4f93,	// (0x00033fdc) bg_passive_tab_pane_cp5_ParamLimits

0x190e,	// (0x00030957) list_single_midp_graphic_pane_t1

0xd851,	// (0x0003c89a) bg_status_flat_pane_ParamLimits

0x5147,	// (0x00034190) indicator_pane_cp2_ParamLimits

0x5147,	// (0x00034190) indicator_pane_cp2

0xd9cf,	// (0x0003ca18) navi_pane_srt_ParamLimits

0xd9cf,	// (0x0003ca18) navi_pane_srt

0x5296,	// (0x000342df) popup_clock_digital_analogue_window_cp1

0x3822,	// (0x0003286b) indicator_pane_t1

0x4c6f,	// (0x00033cb8) copy_highlight_pane

0x4c6f,	// (0x00033cb8) cursor_graphics_pane

0x4c6f,	// (0x00033cb8) graphic_within_text_pane

0x4c6f,	// (0x00033cb8) link_highlight_pane

0x64fa,	// (0x00035543) popup_preview_text_window_t5_ParamLimits

0x64fa,	// (0x00035543) popup_preview_text_window_t5

0x4d9d,	// (0x00033de6) cursor_digital_pane

0x4d9d,	// (0x00033de6) cursor_primary_pane

0x4dae,	// (0x00033df7) cursor_primary_small_pane

0x4db6,	// (0x00033dff) cursor_secondary_pane

0x4dbe,	// (0x00033e07) cursor_title_pane

0x4d9d,	// (0x00033de6) link_highlight_digital_pane

0x4da5,	// (0x00033dee) link_highlight_primary_pane

0x4dae,	// (0x00033df7) link_highlight_primary_small_pane

0x4db6,	// (0x00033dff) link_highlight_secondary_pane

0x4dbe,	// (0x00033e07) link_highlight_title_pane

0x4d9d,	// (0x00033de6) copy_highlight_digital_pane

0x4d9d,	// (0x00033de6) copy_highlight_primary_pane

0x4dae,	// (0x00033df7) copy_highlight_primary_small_pane

0x4db6,	// (0x00033dff) copy_highlight_secondary_pane

0x4dbe,	// (0x00033e07) copy_highlight_title_pane

0x4db6,	// (0x00033dff) graphic_text_digital_pane

0x5d89,	// (0x00034dd2) graphic_text_primary_pane

0x5d92,	// (0x00034ddb) graphic_text_primary_small_pane

0x4dae,	// (0x00033df7) graphic_text_secondary_pane

0x4d9d,	// (0x00033de6) graphic_text_title_pane

0xd68d,	// (0x0003c6d6) cursor_primary_pane_g1

0x5d7b,	// (0x00034dc4) cursor_text_primary_t1

0xdc4d,	// (0x0003cc96) cursor_primary_small_pane_g1

0x5d6d,	// (0x00034db6) cursor_text_primary_small_t1

0xdc43,	// (0x0003cc8c) cursor_primary_small_pane_g1_copy1

0x5d55,	// (0x00034d9e) cursor_text_primary_small_t1_copy1

0x5d33,	// (0x00034d7c) cursor_text_title_t1

0xdc39,	// (0x0003cc82) cursor_title_pane_g1

0xd68d,	// (0x0003c6d6) cursor_digital_pane_g1

0x4dd0,	// (0x00033e19) cursor_text_digital_t1

0x4df5,	// (0x00033e3e) link_highlight_primary_pane_g1

0x5cdc,	// (0x00034d25) link_highlight_primary_pane_t1

0x4dde,	// (0x00033e27) link_highlight_primary_small_pane_g1

0x4de6,	// (0x00033e2f) link_highlight_primary_small_pane_t1

0x4df5,	// (0x00033e3e) link_highlight_secondary_pane_g1

0x4dfd,	// (0x00033e46) link_highlight_secondary_pane_t1

0x5c50,	// (0x00034c99) link_highlight_title_pane_g1

0x5c58,	// (0x00034ca1) link_highlight_title_pane_t1

0x5c39,	// (0x00034c82) link_highlight_digital_pane_g1

0x5c41,	// (0x00034c8a) link_highlight_digital_pane_t1

0x5b11,	// (0x00034b5a) copy_highlight_primary_pane_g1

0x5b19,	// (0x00034b62) copy_highlight_primary_pane_t1

0x5aeb,	// (0x00034b34) copy_highlight_primary_small_pane_g1

0x5b02,	// (0x00034b4b) copy_highlight_primary_small_pane_t1

0x4e0c,	// (0x00033e55) copy_highlight_secondary_pane_g1

0x4e14,	// (0x00033e5d) copy_highlight_secondary_pane_t1

0x5aeb,	// (0x00034b34) copy_highlight_title_pane_g1

0x5af3,	// (0x00034b3c) copy_highlight_title_pane_t1

0x5b11,	// (0x00034b5a) copy_highlight_digital_pane_g1

0x6d96,	// (0x00035ddf) copy_highlight_digital_pane_t1

0x6cea,	// (0x00035d33) graphic_text_primary_pane_g1

0x6d7a,	// (0x00035dc3) graphic_text_primary_pane_t1

0x6d88,	// (0x00035dd1) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0003ea12) graphic_text_primary_pane_t

0x6d56,	// (0x00035d9f) graphic_text_primary_small_pane_g1

0x6d5e,	// (0x00035da7) graphic_text_primary_small_pane_t1

0x6d6c,	// (0x00035db5) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0003ea0d) graphic_text_primary_small_pane_t

0x6d32,	// (0x00035d7b) graphic_text_secondary_pane_g1

0x6d3a,	// (0x00035d83) graphic_text_secondary_pane_t1

0x6d48,	// (0x00035d91) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0003ea08) graphic_text_secondary_pane_t

0x6d0e,	// (0x00035d57) graphic_text_title_pane_g1

0x6d16,	// (0x00035d5f) graphic_text_title_pane_t1

0x6d24,	// (0x00035d6d) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0003ea03) graphic_text_title_pane_t

0x6cea,	// (0x00035d33) graphic_text_digital_pane_g1

0x6cf2,	// (0x00035d3b) graphic_text_digital_pane_t1

0x6d00,	// (0x00035d49) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0003e9fe) graphic_text_digital_pane_t

0x3745,	// (0x0003278e) navi_icon_pane_srt_ParamLimits

0x3745,	// (0x0003278e) navi_icon_pane_srt

0x3665,	// (0x000326ae) navi_midp_pane_srt

0x3665,	// (0x000326ae) navi_navi_pane_srt

0x3745,	// (0x0003278e) navi_text_pane_srt_ParamLimits

0x3745,	// (0x0003278e) navi_text_pane_srt

0x6cb5,	// (0x00035cfe) navi_navi_icon_text_pane_srt

0x6cbd,	// (0x00035d06) navi_navi_pane_srt_g1_ParamLimits

0x6cbd,	// (0x00035d06) navi_navi_pane_srt_g1

0x6ccf,	// (0x00035d18) navi_navi_pane_srt_g2_ParamLimits

0x6ccf,	// (0x00035d18) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0003e9f9) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0003e9f9) navi_navi_pane_srt_g

0x6ce1,	// (0x00035d2a) navi_navi_tabs_pane_srt

0x6cb5,	// (0x00035cfe) navi_navi_text_pane_srt

0x6cb5,	// (0x00035cfe) navi_navi_volume_pane_srt

0x6ca6,	// (0x00035cef) navi_navi_text_pane_srt_t1

0x1c88,	// (0x00030cd1) navi_navi_volume_pane_srt_g1

0x1c90,	// (0x00030cd9) volume_small_pane_srt_ParamLimits

0x1c90,	// (0x00030cd9) volume_small_pane_srt

0x10ab,	// (0x000300f4) volume_small_pane_srt_g1_ParamLimits

0x10ab,	// (0x000300f4) volume_small_pane_srt_g1

0x10bb,	// (0x00030104) volume_small_pane_srt_g2_ParamLimits

0x10bb,	// (0x00030104) volume_small_pane_srt_g2

0x10cc,	// (0x00030115) volume_small_pane_srt_g3_ParamLimits

0x10cc,	// (0x00030115) volume_small_pane_srt_g3

0x10dd,	// (0x00030126) volume_small_pane_srt_g4_ParamLimits

0x10dd,	// (0x00030126) volume_small_pane_srt_g4

0x10ee,	// (0x00030137) volume_small_pane_srt_g5_ParamLimits

0x10ee,	// (0x00030137) volume_small_pane_srt_g5

0x10ff,	// (0x00030148) volume_small_pane_srt_g6_ParamLimits

0x10ff,	// (0x00030148) volume_small_pane_srt_g6

0x1110,	// (0x00030159) volume_small_pane_srt_g7_ParamLimits

0x1110,	// (0x00030159) volume_small_pane_srt_g7

0x1121,	// (0x0003016a) volume_small_pane_srt_g8_ParamLimits

0x1121,	// (0x0003016a) volume_small_pane_srt_g8

0x1132,	// (0x0003017b) volume_small_pane_srt_g9_ParamLimits

0x1132,	// (0x0003017b) volume_small_pane_srt_g9

0x1143,	// (0x0003018c) volume_small_pane_srt_g10_ParamLimits

0x1143,	// (0x0003018c) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003e7a6) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003e7a6) volume_small_pane_srt_g

0x3b45,	// (0x00032b8e) query_popup_data_pane_cp2

0x6c8c,	// (0x00035cd5) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6c8c,	// (0x00035cd5) navi_navi_icon_text_pane_srt_t1

0x5d89,	// (0x00034dd2) navi_tabs_2_long_pane_srt

0x5d89,	// (0x00034dd2) navi_tabs_2_pane_srt

0x5d89,	// (0x00034dd2) navi_tabs_3_long_pane_srt

0x5d89,	// (0x00034dd2) navi_tabs_3_pane_srt

0x5d89,	// (0x00034dd2) navi_tabs_4_pane_srt

0x1c68,	// (0x00030cb1) tabs_2_active_pane_srt_ParamLimits

0x1c68,	// (0x00030cb1) tabs_2_active_pane_srt

0x1c78,	// (0x00030cc1) tabs_2_passive_pane_srt_ParamLimits

0x1c78,	// (0x00030cc1) tabs_2_passive_pane_srt

0x552b,	// (0x00034574) bg_passive_tab_pane_cp1_srt_ParamLimits

0x552b,	// (0x00034574) bg_passive_tab_pane_cp1_srt

0x6c58,	// (0x00035ca1) bg_passive_tab_pane_g1_cp1_srt

0x48b1,	// (0x000338fa) bg_passive_tab_pane_g2_cp1_srt

0x6c61,	// (0x00035caa) bg_passive_tab_pane_g3_cp1_srt

0x39c0,	// (0x00032a09) bg_active_tab_pane_cp1_srt_ParamLimits

0x39c0,	// (0x00032a09) bg_active_tab_pane_cp1_srt

0x6c6a,	// (0x00035cb3) tabs_2_active_pane_srt_g1

0xdff8,	// (0x0003d041) tabs_2_active_pane_srt_t1_ParamLimits

0xdff8,	// (0x0003d041) tabs_2_active_pane_srt_t1

0x6c58,	// (0x00035ca1) bg_active_tab_pane_g1_cp1_srt

0x48b1,	// (0x000338fa) bg_active_tab_pane_g2_cp1_srt

0x6c61,	// (0x00035caa) bg_active_tab_pane_g3_cp1_srt

0x1c35,	// (0x00030c7e) tabs_3_active_pane_srt_ParamLimits

0x1c35,	// (0x00030c7e) tabs_3_active_pane_srt

0x1c46,	// (0x00030c8f) tabs_3_passive_pane_cp_srt_ParamLimits

0x1c46,	// (0x00030c8f) tabs_3_passive_pane_cp_srt

0x1c57,	// (0x00030ca0) tabs_3_passive_pane_srt_ParamLimits

0x1c57,	// (0x00030ca0) tabs_3_passive_pane_srt

0x552b,	// (0x00034574) bg_passive_tab_pane_cp2_srt_ParamLimits

0x552b,	// (0x00034574) bg_passive_tab_pane_cp2_srt

0x4e23,	// (0x00033e6c) bg_passive_tab_pane_g1_cp2_srt

0x48b1,	// (0x000338fa) bg_passive_tab_pane_g2_cp2_srt

0x4e2c,	// (0x00033e75) bg_passive_tab_pane_g3_cp2_srt

0x39c0,	// (0x00032a09) bg_active_tab_pane_cp2_srt_ParamLimits

0x39c0,	// (0x00032a09) bg_active_tab_pane_cp2_srt

0x6c3e,	// (0x00035c87) tabs_3_active_pane_srt_g1

0xdfe2,	// (0x0003d02b) tabs_3_active_pane_srt_t1_ParamLimits

0xdfe2,	// (0x0003d02b) tabs_3_active_pane_srt_t1

0x4e23,	// (0x00033e6c) bg_active_tab_pane_g1_cp2_srt

0x48b1,	// (0x000338fa) bg_active_tab_pane_g2_cp2_srt

0x4e2c,	// (0x00033e75) bg_active_tab_pane_g3_cp2_srt

0x1bed,	// (0x00030c36) tabs_4_active_pane_srt_ParamLimits

0x1bed,	// (0x00030c36) tabs_4_active_pane_srt

0x1bff,	// (0x00030c48) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1bff,	// (0x00030c48) tabs_4_passive_pane_cp2_srt

0x12b2,	// (0x000302fb) aid_size_cell_toolbar

0x6899,	// (0x000358e2) main_idle_act_pane_ParamLimits

0x1469,	// (0x000304b2) popup_large_graphic_colour_window_ParamLimits

0xc75e,	// (0x0003b7a7) popup_toolbar_window_ParamLimits

0xc75e,	// (0x0003b7a7) popup_toolbar_window

0x6a51,	// (0x00035a9a) list_single_graphic_2heading_pane_ParamLimits

0x6a51,	// (0x00035a9a) list_single_graphic_2heading_pane

0x4377,	// (0x000333c0) aid_size_cell_apps_grid_lsc_pane

0x4389,	// (0x000333d2) aid_size_cell_apps_grid_prt_pane

0x4f93,	// (0x00033fdc) bg_wml_button_pane_cp1_ParamLimits

0x4f93,	// (0x00033fdc) bg_wml_button_pane_cp1

0xdbfc,	// (0x0003cc45) form_midp_field_text_pane_t1_ParamLimits

0x552b,	// (0x00034574) input_focus_pane_cp050_ParamLimits

0x5792,	// (0x000347db) list_midp_form_text_pane_ParamLimits

0x5738,	// (0x00034781) input_focus_pane_cp051_ParamLimits

0x574c,	// (0x00034795) list_midp_choice_pane_ParamLimits

0xdb9a,	// (0x0003cbe3) list_single_2graphic_pane_cp3_ParamLimits

0xdb9a,	// (0x0003cbe3) list_single_2graphic_pane_cp3

0xdbad,	// (0x0003cbf6) list_single_midp_graphic_pane_ParamLimits

0xdbad,	// (0x0003cbf6) list_single_midp_graphic_pane

0x0034,	// (0x0002f07d) list_single_graphic_2heading_pane_g1_ParamLimits

0x0034,	// (0x0002f07d) list_single_graphic_2heading_pane_g1

0x0040,	// (0x0002f089) list_single_graphic_2heading_pane_g4_ParamLimits

0x0040,	// (0x0002f089) list_single_graphic_2heading_pane_g4

0x004c,	// (0x0002f095) list_single_graphic_2heading_pane_g5_ParamLimits

0x004c,	// (0x0002f095) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003e7f9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003e7f9) list_single_graphic_2heading_pane_g

0x0058,	// (0x0002f0a1) list_single_graphic_2heading_pane_t1_ParamLimits

0x0058,	// (0x0002f0a1) list_single_graphic_2heading_pane_t1

0x006c,	// (0x0002f0b5) list_single_graphic_2heading_pane_t2_ParamLimits

0x006c,	// (0x0002f0b5) list_single_graphic_2heading_pane_t2

0x0086,	// (0x0002f0cf) list_single_graphic_2heading_pane_t3_ParamLimits

0x0086,	// (0x0002f0cf) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003e800) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003e800) list_single_graphic_2heading_pane_t

0x53f5,	// (0x0003443e) bg_popup_sub_pane_cp2

0x541f,	// (0x00034468) grid_toobar_pane

0x187d,	// (0x000308c6) cell_toolbar_pane_ParamLimits

0x187d,	// (0x000308c6) cell_toolbar_pane

0x545b,	// (0x000344a4) cell_toolbar_pane_g1_ParamLimits

0x545b,	// (0x000344a4) cell_toolbar_pane_g1

0x546f,	// (0x000344b8) cell_toolbar_pane_g2_ParamLimits

0x546f,	// (0x000344b8) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003e80e) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003e80e) cell_toolbar_pane_g

0x5491,	// (0x000344da) grid_highlight_pane_cp2_ParamLimits

0x5491,	// (0x000344da) grid_highlight_pane_cp2

0x54ab,	// (0x000344f4) toolbar_button_pane

0x54b7,	// (0x00034500) toolbar_button_pane_g1

0x54bf,	// (0x00034508) toolbar_button_pane_g2

0x54c7,	// (0x00034510) toolbar_button_pane_g3

0x54cf,	// (0x00034518) toolbar_button_pane_g4

0x54d7,	// (0x00034520) toolbar_button_pane_g5

0x54df,	// (0x00034528) toolbar_button_pane_g6

0x54e7,	// (0x00034530) toolbar_button_pane_g7

0x54ef,	// (0x00034538) toolbar_button_pane_g8

0x54f7,	// (0x00034540) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0003e813) toolbar_button_pane_g

0x18b5,	// (0x000308fe) list_single_2graphic_pane_g1_cp3_ParamLimits

0x18b5,	// (0x000308fe) list_single_2graphic_pane_g1_cp3

0xc7b6,	// (0x0003b7ff) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc7b6,	// (0x0003b7ff) list_single_2graphic_pane_g2_cp3

0x18d2,	// (0x0003091b) list_single_2graphic_pane_g3_cp3

0x18da,	// (0x00030923) list_single_2graphic_pane_g4_cp3_ParamLimits

0x18da,	// (0x00030923) list_single_2graphic_pane_g4_cp3

0x18e6,	// (0x0003092f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x18e6,	// (0x0003092f) list_single_2graphic_pane_t1_cp3

0x1902,	// (0x0003094b) list_single_midp_graphic_pane_g2_ParamLimits

0x1902,	// (0x0003094b) list_single_midp_graphic_pane_g2

0x12ba,	// (0x00030303) aid_zoom_text_primary

0x0018,	// (0x0002f061) aid_zoom_text_secondary

0xd6e5,	// (0x0003c72e) status_small_pane_g7_ParamLimits

0xd6e5,	// (0x0003c72e) status_small_pane_g7

0xd708,	// (0x0003c751) status_small_pane_t1_ParamLimits

0xd0d9,	// (0x0003c122) title_pane_g2

0x0003,

0xf54e,	// (0x0003e597) title_pane_g

0xd351,	// (0x0003c39a) aid_size_cell_colour_1_pane_ParamLimits

0xd351,	// (0x0003c39a) aid_size_cell_colour_1_pane

0xd365,	// (0x0003c3ae) aid_size_cell_colour_2_pane_ParamLimits

0xd365,	// (0x0003c3ae) aid_size_cell_colour_2_pane

0xd379,	// (0x0003c3c2) aid_size_cell_colour_3_pane_ParamLimits

0xd379,	// (0x0003c3c2) aid_size_cell_colour_3_pane

0xd38d,	// (0x0003c3d6) aid_size_cell_colour_4_pane_ParamLimits

0xd38d,	// (0x0003c3d6) aid_size_cell_colour_4_pane

0x0c7e,	// (0x0002fcc7) title_pane_stacon_g1_ParamLimits

0x0c7e,	// (0x0002fcc7) title_pane_stacon_g1

0x5b70,	// (0x00034bb9) popup_note_wait_window_g3_ParamLimits

0x5b70,	// (0x00034bb9) popup_note_wait_window_g3

0x5be6,	// (0x00034c2f) popup_note_wait_window_t5_ParamLimits

0x5be6,	// (0x00034c2f) popup_note_wait_window_t5

0x3665,	// (0x000326ae) main_feb_china_hwr_fs_writing_pane

0xc166,	// (0x0003b1af) popup_feb_china_hwr_fs_window_ParamLimits

0xc166,	// (0x0003b1af) popup_feb_china_hwr_fs_window

0xc7c7,	// (0x0003b810) aid_size_cell_hwr_fs_ParamLimits

0xc7c7,	// (0x0003b810) aid_size_cell_hwr_fs

0x552b,	// (0x00034574) bg_popup_sub_pane_cp3_ParamLimits

0x552b,	// (0x00034574) bg_popup_sub_pane_cp3

0xc7dc,	// (0x0003b825) grid_hwr_fs_pane_ParamLimits

0xc7dc,	// (0x0003b825) grid_hwr_fs_pane

0x1951,	// (0x0003099a) linegrid_hwr_fs_pane_ParamLimits

0x1951,	// (0x0003099a) linegrid_hwr_fs_pane

0xc7f4,	// (0x0003b83d) cell_hwr_fs_pane_ParamLimits

0xc7f4,	// (0x0003b83d) cell_hwr_fs_pane

0x5537,	// (0x00034580) linegrid_hwr_fs_pane_g1_ParamLimits

0x5537,	// (0x00034580) linegrid_hwr_fs_pane_g1

0xdb6e,	// (0x0003cbb7) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb6e,	// (0x0003cbb7) linegrid_hwr_fs_pane_g2

0x5555,	// (0x0003459e) linegrid_hwr_fs_pane_g3_ParamLimits

0x5555,	// (0x0003459e) linegrid_hwr_fs_pane_g3

0x1983,	// (0x000309cc) linegrid_hwr_fs_pane_g4_ParamLimits

0x1983,	// (0x000309cc) linegrid_hwr_fs_pane_g4

0x199d,	// (0x000309e6) linegrid_hwr_fs_pane_g5_ParamLimits

0x199d,	// (0x000309e6) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0003e839) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0003e839) linegrid_hwr_fs_pane_g

0x5561,	// (0x000345aa) cell_hwr_fs_pane_g1_ParamLimits

0x5561,	// (0x000345aa) cell_hwr_fs_pane_g1

0x532c,	// (0x00034375) cell_hwr_fs_pane_g2_ParamLimits

0x532c,	// (0x00034375) cell_hwr_fs_pane_g2

0xdb80,	// (0x0003cbc9) cell_hwr_fs_pane_g3_ParamLimits

0xdb80,	// (0x0003cbc9) cell_hwr_fs_pane_g3

0xdb8d,	// (0x0003cbd6) cell_hwr_fs_pane_g4_ParamLimits

0xdb8d,	// (0x0003cbd6) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0003e844) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003e844) cell_hwr_fs_pane_g

0xc81a,	// (0x0003b863) cell_hwr_fs_pane_t1

0x3665,	// (0x000326ae) grid_highlight_pane_cp6

0x3665,	// (0x000326ae) main_idle_act2_pane

0x412e,	// (0x00033177) aid_inside_area_popup_secondary

0xdc57,	// (0x0003cca0) aid_inside_area_window_primary_ParamLimits

0xdc57,	// (0x0003cca0) aid_inside_area_window_primary

0x6da5,	// (0x00035dee) ai2_news_ticker_pane

0x6dad,	// (0x00035df6) aid_size_cell_ai1_link_ParamLimits

0x6dad,	// (0x00035df6) aid_size_cell_ai1_link

0xe00e,	// (0x0003d057) popup_ai2_data_window_ParamLimits

0xe00e,	// (0x0003d057) popup_ai2_data_window

0x6ddd,	// (0x00035e26) popup_ai2_link_window_ParamLimits

0x6ddd,	// (0x00035e26) popup_ai2_link_window

0x552b,	// (0x00034574) bg_popup_sub_pane_cp4_ParamLimits

0x552b,	// (0x00034574) bg_popup_sub_pane_cp4

0x6df1,	// (0x00035e3a) grid_ai2_link_pane_ParamLimits

0x6df1,	// (0x00035e3a) grid_ai2_link_pane

0x6e08,	// (0x00035e51) popup_ai2_link_window_g1_ParamLimits

0x6e08,	// (0x00035e51) popup_ai2_link_window_g1

0x6e14,	// (0x00035e5d) popup_ai2_link_window_g2_ParamLimits

0x6e14,	// (0x00035e5d) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0003ea17) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0003ea17) popup_ai2_link_window_g

0x6e23,	// (0x00035e6c) ai2_mp_button_pane

0x6e2b,	// (0x00035e74) ai2_mp_volume_pane

0x5738,	// (0x00034781) bg_popup_sub_pane_cp5_ParamLimits

0x5738,	// (0x00034781) bg_popup_sub_pane_cp5

0x6e33,	// (0x00035e7c) heading_ai2_gene_pane_ParamLimits

0x6e33,	// (0x00035e7c) heading_ai2_gene_pane

0x6e3f,	// (0x00035e88) list_ai2_gene_pane_ParamLimits

0x6e3f,	// (0x00035e88) list_ai2_gene_pane

0x6e87,	// (0x00035ed0) cell_ai2_link_pane_ParamLimits

0x6e87,	// (0x00035ed0) cell_ai2_link_pane

0x6e9d,	// (0x00035ee6) cell_ai2_link_pane_g1

0x3665,	// (0x000326ae) grid_highlight_pane_cp7

0x1ca5,	// (0x00030cee) ai2_mp_volume_pane_g1

0x6f6d,	// (0x00035fb6) ai2_mp_volume_pane_g2

0xe038,	// (0x0003d081) list_ai2_gene_pane_t1

0x6f75,	// (0x00035fbe) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0003ea30) ai2_mp_volume_pane_g

0x1cad,	// (0x00030cf6) volume_small_pane_cp3

0x6f7d,	// (0x00035fc6) aid_size_cell_ai2_button

0x6f85,	// (0x00035fce) grid_ai2_button_pane

0x6f8e,	// (0x00035fd7) cell_ai2_button_pane_ParamLimits

0x6f8e,	// (0x00035fd7) cell_ai2_button_pane

0x365b,	// (0x000326a4) cell_ai2_button_pane_g1

0x3665,	// (0x000326ae) grid_highlight_pane_cp8

0x6f2d,	// (0x00035f76) ai2_gene_pane_t1_ParamLimits

0x6f2d,	// (0x00035f76) ai2_gene_pane_t1

0xc0f0,	// (0x0003b139) aid_height_parent_landscape

0xdd9e,	// (0x0003cde7) aid_height_set_list

0x6899,	// (0x000358e2) aid_size_parent

0xdfb6,	// (0x0003cfff) aid_size_cell_graphic_pane_ParamLimits

0x6e4f,	// (0x00035e98) popup_ai2_data_window_g1_ParamLimits

0x6e4f,	// (0x00035e98) popup_ai2_data_window_g1

0x6e5b,	// (0x00035ea4) ai2_news_ticker_pane_g1

0x6e63,	// (0x00035eac) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0003ea1c) ai2_news_ticker_pane_g

0x6e6b,	// (0x00035eb4) ai2_news_ticker_pane_t1

0x6e79,	// (0x00035ec2) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0003ea21) ai2_news_ticker_pane_t

0x6ea6,	// (0x00035eef) heading_ai2_gene_pane_g1

0x6eae,	// (0x00035ef7) heading_ai2_gene_pane_t1_ParamLimits

0x6eae,	// (0x00035ef7) heading_ai2_gene_pane_t1

0x6ec3,	// (0x00035f0c) list_highlight_pane_cp6

0xe022,	// (0x0003d06b) ai2_gene_pane_ParamLimits

0xe022,	// (0x0003d06b) ai2_gene_pane

0xe046,	// (0x0003d08f) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0003ea26) list_ai2_gene_pane_t

0x6efe,	// (0x00035f47) list_highlight_pane_cp8_ParamLimits

0x6efe,	// (0x00035f47) list_highlight_pane_cp8

0x6f0f,	// (0x00035f58) ai2_gene_pane_g1_ParamLimits

0x6f0f,	// (0x00035f58) ai2_gene_pane_g1

0x6f21,	// (0x00035f6a) ai2_gene_pane_g2_ParamLimits

0x6f21,	// (0x00035f6a) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0003ea2b) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0003ea2b) ai2_gene_pane_g

0x3f70,	// (0x00032fb9) scroll_pane_cp12

0xc0ad,	// (0x0003b0f6) control_pane_t3_ParamLimits

0xc0ad,	// (0x0003b0f6) control_pane_t3

0xd6f9,	// (0x0003c742) status_small_pane_g8_ParamLimits

0xd6f9,	// (0x0003c742) status_small_pane_g8

0xc1fb,	// (0x0003b244) popup_find_window_ParamLimits

0xc488,	// (0x0003b4d1) popup_note_image_window_ParamLimits

0x2ccd,	// (0x00031d16) list_double2_graphic_pane_vc_g1_ParamLimits

0x2ccd,	// (0x00031d16) list_double2_graphic_pane_vc_g1

0x2cd9,	// (0x00031d22) list_double2_graphic_pane_vc_g2_ParamLimits

0x2cd9,	// (0x00031d22) list_double2_graphic_pane_vc_g2

0x2ce5,	// (0x00031d2e) list_double2_graphic_pane_vc_g3_ParamLimits

0x2ce5,	// (0x00031d2e) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0003e807) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0003e807) list_double2_graphic_pane_vc_g

0x2cf1,	// (0x00031d3a) list_double2_graphic_pane_vc_t1_ParamLimits

0x2cf1,	// (0x00031d3a) list_double2_graphic_pane_vc_t1

0x2cd9,	// (0x00031d22) list_single_heading_pane_vc_g1_ParamLimits

0x2cd9,	// (0x00031d22) list_single_heading_pane_vc_g1

0x2ce5,	// (0x00031d2e) list_single_heading_pane_vc_g2_ParamLimits

0x2ce5,	// (0x00031d2e) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e611) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e611) list_single_heading_pane_vc_g

0x2d07,	// (0x00031d50) list_single_heading_pane_vc_t1_ParamLimits

0x2d07,	// (0x00031d50) list_single_heading_pane_vc_t1

0x2d1d,	// (0x00031d66) list_single_heading_pane_vc_t2_ParamLimits

0x2d1d,	// (0x00031d66) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0003e828) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0003e828) list_single_heading_pane_vc_t

0x2d2f,	// (0x00031d78) list_setting_number_pane_vc_g1_ParamLimits

0x2d2f,	// (0x00031d78) list_setting_number_pane_vc_g1

0x2d3b,	// (0x00031d84) list_setting_number_pane_vc_g2_ParamLimits

0x2d3b,	// (0x00031d84) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003e82d) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003e82d) list_setting_number_pane_vc_g

0x2d47,	// (0x00031d90) list_setting_number_pane_vc_t1_ParamLimits

0x2d47,	// (0x00031d90) list_setting_number_pane_vc_t1

0x2d5b,	// (0x00031da4) list_setting_number_pane_vc_t2_ParamLimits

0x2d5b,	// (0x00031da4) list_setting_number_pane_vc_t2

0x2d77,	// (0x00031dc0) list_setting_number_pane_vc_t3_ParamLimits

0x2d77,	// (0x00031dc0) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0003e832) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0003e832) list_setting_number_pane_vc_t

0x2d95,	// (0x00031dde) set_value_pane_vc_ParamLimits

0x2d95,	// (0x00031dde) set_value_pane_vc

0x6a51,	// (0x00035a9a) list_double2_graphic_pane_vc_ParamLimits

0x6a51,	// (0x00035a9a) list_double2_graphic_pane_vc

0x6a51,	// (0x00035a9a) list_double2_large_graphic_pane_vc_ParamLimits

0x6a51,	// (0x00035a9a) list_double2_large_graphic_pane_vc

0x6a51,	// (0x00035a9a) list_double2_pane_vc_ParamLimits

0x6a51,	// (0x00035a9a) list_double2_pane_vc

0x6a51,	// (0x00035a9a) list_double_graphic_heading_pane_vc_ParamLimits

0x6a51,	// (0x00035a9a) list_double_graphic_heading_pane_vc

0x6a51,	// (0x00035a9a) list_double_graphic_pane_vc_ParamLimits

0x6a51,	// (0x00035a9a) list_double_graphic_pane_vc

0x6a51,	// (0x00035a9a) list_double_heading_pane_vc_ParamLimits

0x6a51,	// (0x00035a9a) list_double_heading_pane_vc

0x6a63,	// (0x00035aac) list_double_large_graphic_pane_vc_ParamLimits

0x6a63,	// (0x00035aac) list_double_large_graphic_pane_vc

0x6a51,	// (0x00035a9a) list_double_number_pane_vc_ParamLimits

0x6a51,	// (0x00035a9a) list_double_number_pane_vc

0x6a51,	// (0x00035a9a) list_double_pane_vc_ParamLimits

0x6a51,	// (0x00035a9a) list_double_pane_vc

0x6a51,	// (0x00035a9a) list_double_time_pane_vc_ParamLimits

0x6a51,	// (0x00035a9a) list_double_time_pane_vc

0x6a51,	// (0x00035a9a) list_setting_number_pane_vc_ParamLimits

0x6a51,	// (0x00035a9a) list_setting_number_pane_vc

0x6a51,	// (0x00035a9a) list_setting_pane_vc_ParamLimits

0x6a51,	// (0x00035a9a) list_setting_pane_vc

0x6a51,	// (0x00035a9a) list_single_graphic_heading_pane_vc_ParamLimits

0x6a51,	// (0x00035a9a) list_single_graphic_heading_pane_vc

0x6a51,	// (0x00035a9a) list_single_heading_pane_vc_ParamLimits

0x6a51,	// (0x00035a9a) list_single_heading_pane_vc

0x6a51,	// (0x00035a9a) list_single_number_heading_pane_vc_ParamLimits

0x6a51,	// (0x00035a9a) list_single_number_heading_pane_vc

0x2ccd,	// (0x00031d16) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2ccd,	// (0x00031d16) list_double_graphic_heading_pane_vc_g1

0x2cd9,	// (0x00031d22) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2cd9,	// (0x00031d22) list_double_graphic_heading_pane_vc_g2

0x2ce5,	// (0x00031d2e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2ce5,	// (0x00031d2e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0003e807) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003e807) list_double_graphic_heading_pane_vc_g

0x2eef,	// (0x00031f38) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2eef,	// (0x00031f38) list_double_graphic_heading_pane_vc_t1

0x2f0b,	// (0x00031f54) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2f0b,	// (0x00031f54) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0003ea37) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0003ea37) list_double_graphic_heading_pane_vc_t

0x2d2f,	// (0x00031d78) list_setting_pane_vc_g1_ParamLimits

0x2d2f,	// (0x00031d78) list_setting_pane_vc_g1

0x2d3b,	// (0x00031d84) list_setting_pane_vc_g2_ParamLimits

0x2d3b,	// (0x00031d84) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003e82d) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003e82d) list_setting_pane_vc_g

0x2f29,	// (0x00031f72) list_setting_pane_vc_t1_ParamLimits

0x2f29,	// (0x00031f72) list_setting_pane_vc_t1

0x2f45,	// (0x00031f8e) list_setting_pane_vc_t2_ParamLimits

0x2f45,	// (0x00031f8e) list_setting_pane_vc_t2

0x0001,

0xfa1c,	// (0x0003ea65) list_setting_pane_vc_t_ParamLimits

0xfa1c,	// (0x0003ea65) list_setting_pane_vc_t

0x2d95,	// (0x00031dde) set_value_pane_cp_vc_ParamLimits

0x2d95,	// (0x00031dde) set_value_pane_cp_vc

0x2cd9,	// (0x00031d22) list_single_number_heading_pane_vc_g1_ParamLimits

0x2cd9,	// (0x00031d22) list_single_number_heading_pane_vc_g1

0x2ce5,	// (0x00031d2e) list_single_number_heading_pane_vc_g2_ParamLimits

0x2ce5,	// (0x00031d2e) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e611) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e611) list_single_number_heading_pane_vc_g

0x2f61,	// (0x00031faa) list_single_number_heading_pane_vc_t1_ParamLimits

0x2f61,	// (0x00031faa) list_single_number_heading_pane_vc_t1

0x2f77,	// (0x00031fc0) list_single_number_heading_pane_vc_t2_ParamLimits

0x2f77,	// (0x00031fc0) list_single_number_heading_pane_vc_t2

0x2f89,	// (0x00031fd2) list_single_number_heading_pane_vc_t3_ParamLimits

0x2f89,	// (0x00031fd2) list_single_number_heading_pane_vc_t3

0x0002,

0xfa21,	// (0x0003ea6a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa21,	// (0x0003ea6a) list_single_number_heading_pane_vc_t

0x2ccd,	// (0x00031d16) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2ccd,	// (0x00031d16) list_single_graphic_heading_pane_vc_g1

0x2cd9,	// (0x00031d22) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2cd9,	// (0x00031d22) list_single_graphic_heading_pane_vc_g4

0x2ce5,	// (0x00031d2e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2ce5,	// (0x00031d2e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0003e807) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003e807) list_single_graphic_heading_pane_vc_g

0x2f9b,	// (0x00031fe4) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x2f9b,	// (0x00031fe4) list_single_graphic_heading_pane_vc_t1

0x2fb1,	// (0x00031ffa) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2fb1,	// (0x00031ffa) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa28,	// (0x0003ea71) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0003ea71) list_single_graphic_heading_pane_vc_t

0x2cd9,	// (0x00031d22) list_double2_pane_vc_g1_ParamLimits

0x2cd9,	// (0x00031d22) list_double2_pane_vc_g1

0x2ce5,	// (0x00031d2e) list_double2_pane_vc_g2_ParamLimits

0x2ce5,	// (0x00031d2e) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e611) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e611) list_double2_pane_vc_g

0x2fc3,	// (0x0003200c) list_double2_pane_vc_t1_ParamLimits

0x2fc3,	// (0x0003200c) list_double2_pane_vc_t1

0x2fd9,	// (0x00032022) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2fd9,	// (0x00032022) list_double2_large_graphic_pane_vc_g1

0x2cd9,	// (0x00031d22) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2cd9,	// (0x00031d22) list_double2_large_graphic_pane_vc_g2

0x2ce5,	// (0x00031d2e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2ce5,	// (0x00031d2e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0003e62e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0003e62e) list_double2_large_graphic_pane_vc_g

0x2fe5,	// (0x0003202e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2fe5,	// (0x0003202e) list_double2_large_graphic_pane_vc_t1

0x2ffb,	// (0x00032044) list_double_time_pane_vc_g1_ParamLimits

0x2ffb,	// (0x00032044) list_double_time_pane_vc_g1

0x3007,	// (0x00032050) list_double_time_pane_vc_g2_ParamLimits

0x3007,	// (0x00032050) list_double_time_pane_vc_g2

0x0001,

0xfa2d,	// (0x0003ea76) list_double_time_pane_vc_g_ParamLimits

0xfa2d,	// (0x0003ea76) list_double_time_pane_vc_g

0x3013,	// (0x0003205c) list_double_time_pane_vc_t1_ParamLimits

0x3013,	// (0x0003205c) list_double_time_pane_vc_t1

0x3037,	// (0x00032080) list_double_time_pane_vc_t2_ParamLimits

0x3037,	// (0x00032080) list_double_time_pane_vc_t2

0x3086,	// (0x000320cf) list_double_time_pane_vc_t3_ParamLimits

0x3086,	// (0x000320cf) list_double_time_pane_vc_t3

0x3098,	// (0x000320e1) list_double_time_pane_vc_t4_ParamLimits

0x3098,	// (0x000320e1) list_double_time_pane_vc_t4

0x0003,

0xfa32,	// (0x0003ea7b) list_double_time_pane_vc_t_ParamLimits

0xfa32,	// (0x0003ea7b) list_double_time_pane_vc_t

0x2cd9,	// (0x00031d22) list_double_pane_vc_g1_ParamLimits

0x2cd9,	// (0x00031d22) list_double_pane_vc_g1

0x2ce5,	// (0x00031d2e) list_double_pane_vc_g2_ParamLimits

0x2ce5,	// (0x00031d2e) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e611) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e611) list_double_pane_vc_g

0x30ac,	// (0x000320f5) list_double_pane_vc_t1_ParamLimits

0x30ac,	// (0x000320f5) list_double_pane_vc_t1

0x30c0,	// (0x00032109) list_double_pane_vc_t2_ParamLimits

0x30c0,	// (0x00032109) list_double_pane_vc_t2

0x0001,

0xfa3b,	// (0x0003ea84) list_double_pane_vc_t_ParamLimits

0xfa3b,	// (0x0003ea84) list_double_pane_vc_t

0x2cd9,	// (0x00031d22) list_double_number_pane_vc_g1_ParamLimits

0x2cd9,	// (0x00031d22) list_double_number_pane_vc_g1

0x2ce5,	// (0x00031d2e) list_double_number_pane_vc_g2_ParamLimits

0x2ce5,	// (0x00031d2e) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e611) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e611) list_double_number_pane_vc_g

0x30d8,	// (0x00032121) list_double_number_pane_vc_t1_ParamLimits

0x30d8,	// (0x00032121) list_double_number_pane_vc_t1

0x30ea,	// (0x00032133) list_double_number_pane_vc_t2_ParamLimits

0x30ea,	// (0x00032133) list_double_number_pane_vc_t2

0x30fe,	// (0x00032147) list_double_number_pane_vc_t3_ParamLimits

0x30fe,	// (0x00032147) list_double_number_pane_vc_t3

0x0002,

0xfa40,	// (0x0003ea89) list_double_number_pane_vc_t_ParamLimits

0xfa40,	// (0x0003ea89) list_double_number_pane_vc_t

0x3116,	// (0x0003215f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3116,	// (0x0003215f) list_double_large_graphic_pane_vc_g1

0x3138,	// (0x00032181) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3138,	// (0x00032181) list_double_large_graphic_pane_vc_g2

0x314c,	// (0x00032195) list_double_large_graphic_pane_vc_g3_ParamLimits

0x314c,	// (0x00032195) list_double_large_graphic_pane_vc_g3

0x315b,	// (0x000321a4) list_double_large_graphic_pane_vc_g4_ParamLimits

0x315b,	// (0x000321a4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa47,	// (0x0003ea90) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0003ea90) list_double_large_graphic_pane_vc_g

0x3167,	// (0x000321b0) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3167,	// (0x000321b0) list_double_large_graphic_pane_vc_t1

0x3183,	// (0x000321cc) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3183,	// (0x000321cc) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0003ea99) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0003ea99) list_double_large_graphic_pane_vc_t

0x2cd9,	// (0x00031d22) list_double_heading_pane_vc_g1_ParamLimits

0x2cd9,	// (0x00031d22) list_double_heading_pane_vc_g1

0x2ce5,	// (0x00031d2e) list_double_heading_pane_vc_g2_ParamLimits

0x2ce5,	// (0x00031d2e) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e611) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e611) list_double_heading_pane_vc_g

0x31a5,	// (0x000321ee) list_double_heading_pane_vc_t1_ParamLimits

0x31a5,	// (0x000321ee) list_double_heading_pane_vc_t1

0x31b9,	// (0x00032202) list_double_heading_pane_vc_t2_ParamLimits

0x31b9,	// (0x00032202) list_double_heading_pane_vc_t2

0x0001,

0xfa55,	// (0x0003ea9e) list_double_heading_pane_vc_t_ParamLimits

0xfa55,	// (0x0003ea9e) list_double_heading_pane_vc_t

0x31d1,	// (0x0003221a) list_double_graphic_pane_vc_g1_ParamLimits

0x31d1,	// (0x0003221a) list_double_graphic_pane_vc_g1

0x31dd,	// (0x00032226) list_double_graphic_pane_vc_g2_ParamLimits

0x31dd,	// (0x00032226) list_double_graphic_pane_vc_g2

0x2cd9,	// (0x00031d22) list_double_graphic_pane_vc_g3_ParamLimits

0x2cd9,	// (0x00031d22) list_double_graphic_pane_vc_g3

0x0003,

0xfa5a,	// (0x0003eaa3) list_double_graphic_pane_vc_g_ParamLimits

0xfa5a,	// (0x0003eaa3) list_double_graphic_pane_vc_g

0x31fa,	// (0x00032243) list_double_graphic_pane_vc_t1_ParamLimits

0x31fa,	// (0x00032243) list_double_graphic_pane_vc_t1

0x3224,	// (0x0003226d) list_double_graphic_pane_vc_t2_ParamLimits

0x3224,	// (0x0003226d) list_double_graphic_pane_vc_t2

0x0001,

0xfa63,	// (0x0003eaac) list_double_graphic_pane_vc_t_ParamLimits

0xfa63,	// (0x0003eaac) list_double_graphic_pane_vc_t

0x00b6,	// (0x0002f0ff) aid_size_cell_fastswap

0xb783,	// (0x0003a7cc) aid_size_cell_touch_ParamLimits

0xb783,	// (0x0003a7cc) aid_size_cell_touch

0x0323,	// (0x0002f36c) popup_fast_swap_wide_window_ParamLimits

0x0323,	// (0x0002f36c) popup_fast_swap_wide_window

0xb933,	// (0x0003a97c) touch_pane_ParamLimits

0xb933,	// (0x0003a97c) touch_pane

0x3fc6,	// (0x0003300f) button_value_adjust_pane_cp2

0x09e0,	// (0x0002fa29) button_value_adjust_pane_cp4

0x0a00,	// (0x0002fa49) form_field_data_pane_cp2

0xbda3,	// (0x0003adec) form_field_data_wide_pane_cp2

0x4446,	// (0x0003348f) bg_scroll_pane_ParamLimits

0x0de0,	// (0x0002fe29) scroll_handle_pane_ParamLimits

0x0df4,	// (0x0002fe3d) scroll_sc2_down_pane_ParamLimits

0x0df4,	// (0x0002fe3d) scroll_sc2_down_pane

0x4477,	// (0x000334c0) scroll_sc2_up_pane_ParamLimits

0x4477,	// (0x000334c0) scroll_sc2_up_pane

0xe166,	// (0x0003d1af) grid_wheel_folder_pane_g1_ParamLimits

0xe166,	// (0x0003d1af) grid_wheel_folder_pane_g1

0x1043,	// (0x0003008c) clock_nsta_pane_cp2_ParamLimits

0x1043,	// (0x0003008c) clock_nsta_pane_cp2

0xd5e8,	// (0x0003c631) listscroll_midp_pane_ParamLimits

0xd5f4,	// (0x0003c63d) midp_canvas_pane

0x4f6b,	// (0x00033fb4) nsta_clock_indic_pane

0x4f9f,	// (0x00033fe8) listscroll_form_pane_vc

0x4fa7,	// (0x00033ff0) listscroll_set_pane_vc_ParamLimits

0x4fa7,	// (0x00033ff0) listscroll_set_pane_vc

0xd879,	// (0x0003c8c2) clock_nsta_pane

0xd8a3,	// (0x0003c8ec) indicator_nsta_pane

0x53f5,	// (0x0003443e) bg_popup_sub_pane_cp2_ParamLimits

0x5409,	// (0x00034452) find_pane_cp2_ParamLimits

0x5409,	// (0x00034452) find_pane_cp2

0x541f,	// (0x00034468) grid_toobar_pane_ParamLimits

0x54ff,	// (0x00034548) list_form_gen_pane_vc_ParamLimits

0x54ff,	// (0x00034548) list_form_gen_pane_vc

0x5515,	// (0x0003455e) scroll_pane_cp8_vc_ParamLimits

0x5515,	// (0x0003455e) scroll_pane_cp8_vc

0x5591,	// (0x000345da) data_form_wide_pane_vc_ParamLimits

0x5591,	// (0x000345da) data_form_wide_pane_vc

0x559d,	// (0x000345e6) form_field_data_wide_pane_vc_g1

0x55a5,	// (0x000345ee) form_field_data_wide_pane_vc_t1_ParamLimits

0x55a5,	// (0x000345ee) form_field_data_wide_pane_vc_t1

0x3fda,	// (0x00033023) input_focus_pane_cp6_vc_ParamLimits

0x3fda,	// (0x00033023) input_focus_pane_cp6_vc

0x58f7,	// (0x00034940) list_midp_pane_ParamLimits

0x6c32,	// (0x00035c7b) scroll_pane_cp16_ParamLimits

0x6c32,	// (0x00035c7b) scroll_pane_cp16

0x5945,	// (0x0003498e) button_value_adjust_pane_ParamLimits

0x5945,	// (0x0003498e) button_value_adjust_pane

0xddaf,	// (0x0003cdf8) button_value_adjust_pane_cp6_ParamLimits

0xddaf,	// (0x0003cdf8) button_value_adjust_pane_cp6

0xdec9,	// (0x0003cf12) settings_code_pane_cp_ParamLimits

0xdec9,	// (0x0003cf12) settings_code_pane_cp

0x365b,	// (0x000326a4) cell_touch_pane_g1

0x365b,	// (0x000326a4) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0003e74c) cell_touch_pane_g

0xe054,	// (0x0003d09d) cell_touch_pane_cp_ParamLimits

0xe054,	// (0x0003d09d) cell_touch_pane_cp

0xe070,	// (0x0003d0b9) cell_touch_pane_ParamLimits

0xe070,	// (0x0003d0b9) cell_touch_pane

0x365b,	// (0x000326a4) scroll_sc2_down_pane_g1

0x365b,	// (0x000326a4) scroll_sc2_up_pane_g1

0x3665,	// (0x000326ae) bg_set_opt_pane_cp4_vc

0x6fc2,	// (0x0003600b) list_set_graphic_pane_vc_g1_ParamLimits

0x6fc2,	// (0x0003600b) list_set_graphic_pane_vc_g1

0x6fce,	// (0x00036017) list_set_graphic_pane_vc_g2_ParamLimits

0x6fce,	// (0x00036017) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0003ea3c) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0003ea3c) list_set_graphic_pane_vc_g

0x6fda,	// (0x00036023) text_primary_small_cp13_vc_ParamLimits

0x6fda,	// (0x00036023) text_primary_small_cp13_vc

0x6ff2,	// (0x0003603b) list_set_graphic_pane_vc_ParamLimits

0x6ff2,	// (0x0003603b) list_set_graphic_pane_vc

0x3665,	// (0x000326ae) input_focus_pane_cp2_vc

0x365b,	// (0x000326a4) setting_code_pane_vc_g1

0x3790,	// (0x000327d9) setting_code_pane_vc_t1

0x7004,	// (0x0003604d) set_text_pane_vc_t1_ParamLimits

0x7004,	// (0x0003604d) set_text_pane_vc_t1

0x3665,	// (0x000326ae) input_focus_pane_cp1_vc

0x7020,	// (0x00036069) list_set_text_pane_vc

0x365b,	// (0x000326a4) setting_text_pane_vc_g1

0x3665,	// (0x000326ae) bg_set_opt_pane_cp2_vc

0x3787,	// (0x000327d0) setting_slider_graphic_pane_vc_g1

0x702a,	// (0x00036073) setting_slider_graphic_pane_vc_t1

0x703a,	// (0x00036083) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0003ea41) setting_slider_graphic_pane_vc_t

0x704a,	// (0x00036093) slider_set_pane_cp_vc

0x7052,	// (0x0003609b) slider_set_pane_vc_g1

0x705b,	// (0x000360a4) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0003ea46) slider_set_pane_vc_g

0x4032,	// (0x0003307b) set_opt_bg_pane_g1_copy1

0x403a,	// (0x00033083) set_opt_bg_pane_g2_copy1

0x7087,	// (0x000360d0) set_opt_bg_pane_g3_copy1

0x404a,	// (0x00033093) set_opt_bg_pane_g4_copy1

0x4052,	// (0x0003309b) set_opt_bg_pane_g5_copy1

0x405a,	// (0x000330a3) set_opt_bg_pane_g6_copy1

0x7091,	// (0x000360da) set_opt_bg_pane_g7_copy1

0x7099,	// (0x000360e2) set_opt_bg_pane_g8_copy1

0x70a3,	// (0x000360ec) set_opt_bg_pane_g9_copy1

0x3665,	// (0x000326ae) bg_set_opt_pane_cp_vc

0x70ad,	// (0x000360f6) setting_slider_pane_vc_t1

0x70bc,	// (0x00036105) setting_slider_pane_vc_t2

0x70cc,	// (0x00036115) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0003ea55) setting_slider_pane_vc_t

0x70dc,	// (0x00036125) slider_set_pane_vc

0x19c1,	// (0x00030a0a) volume_set_pane_vc_g1

0x19ca,	// (0x00030a13) volume_set_pane_vc_g2

0x19d3,	// (0x00030a1c) volume_set_pane_vc_g3

0x19dc,	// (0x00030a25) volume_set_pane_vc_g4

0x19e5,	// (0x00030a2e) volume_set_pane_vc_g5

0x19ee,	// (0x00030a37) volume_set_pane_vc_g6

0x19f7,	// (0x00030a40) volume_set_pane_vc_g7

0x1a00,	// (0x00030a49) volume_set_pane_vc_g8

0x1a09,	// (0x00030a52) volume_set_pane_vc_g9

0x1a12,	// (0x00030a5b) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0003e8fa) volume_set_pane_vc_g

0x70e4,	// (0x0003612d) volume_set_pane_vc

0x70ec,	// (0x00036135) button_value_adjust_pane_cp1_vc

0x70f6,	// (0x0003613f) list_highlight_pane_cp2_vc

0x70ff,	// (0x00036148) list_set_pane_vc_ParamLimits

0x70ff,	// (0x00036148) list_set_pane_vc

0x715d,	// (0x000361a6) main_pane_set_vc_t1_ParamLimits

0x715d,	// (0x000361a6) main_pane_set_vc_t1

0x7172,	// (0x000361bb) main_pane_set_vc_t2_ParamLimits

0x7172,	// (0x000361bb) main_pane_set_vc_t2

0x7184,	// (0x000361cd) main_pane_set_vc_t3_ParamLimits

0x7184,	// (0x000361cd) main_pane_set_vc_t3

0x7198,	// (0x000361e1) main_pane_set_vc_t4_ParamLimits

0x7198,	// (0x000361e1) main_pane_set_vc_t4

0x0003,

0xfa13,	// (0x0003ea5c) main_pane_set_vc_t_ParamLimits

0xfa13,	// (0x0003ea5c) main_pane_set_vc_t

0x71ac,	// (0x000361f5) setting_code_pane_vc_ParamLimits

0x71ac,	// (0x000361f5) setting_code_pane_vc

0x71bd,	// (0x00036206) setting_slider_graphic_pane_vc

0x71bd,	// (0x00036206) setting_slider_pane_vc

0x71bd,	// (0x00036206) setting_text_pane_vc

0x71bd,	// (0x00036206) setting_volume_pane_vc

0x71c7,	// (0x00036210) scroll_pane_cp121_vc

0x3fb4,	// (0x00032ffd) set_content_pane_vc

0x71cf,	// (0x00036218) button_value_adjust_pane_g1

0x71d8,	// (0x00036221) button_value_adjust_pane_g2

0x0001,

0xfa68,	// (0x0003eab1) button_value_adjust_pane_g

0x71e1,	// (0x0003622a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x71e1,	// (0x0003622a) form_field_slider_wide_pane_vc_t1

0x71f5,	// (0x0003623e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x71f5,	// (0x0003623e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6d,	// (0x0003eab6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003eab6) form_field_slider_wide_pane_vc_t

0x39c0,	// (0x00032a09) input_focus_pane_cp10_vc_ParamLimits

0x39c0,	// (0x00032a09) input_focus_pane_cp10_vc

0x7223,	// (0x0003626c) slider_cont_pane_cp1_vc_ParamLimits

0x7223,	// (0x0003626c) slider_cont_pane_cp1_vc

0x7235,	// (0x0003627e) slider_form_pane_g1_cp2

0x705b,	// (0x000360a4) slider_form_pane_g2_cp2

0x7262,	// (0x000362ab) form_field_slider_pane_vc_t3

0x7270,	// (0x000362b9) form_field_slider_pane_vc_t4

0x727e,	// (0x000362c7) slider_form_pane_vc_ParamLimits

0x727e,	// (0x000362c7) slider_form_pane_vc

0x728b,	// (0x000362d4) form_field_slider_pane_vc_t1_ParamLimits

0x728b,	// (0x000362d4) form_field_slider_pane_vc_t1

0x71f5,	// (0x0003623e) form_field_slider_pane_vc_t2_ParamLimits

0x71f5,	// (0x0003623e) form_field_slider_pane_vc_t2

0x0001,

0xfa7f,	// (0x0003eac8) form_field_slider_pane_vc_t_ParamLimits

0xfa7f,	// (0x0003eac8) form_field_slider_pane_vc_t

0x39c0,	// (0x00032a09) input_focus_pane_cp9_vc_ParamLimits

0x39c0,	// (0x00032a09) input_focus_pane_cp9_vc

0x72a7,	// (0x000362f0) slider_cont_pane_vc_ParamLimits

0x72a7,	// (0x000362f0) slider_cont_pane_vc

0x72bb,	// (0x00036304) list_form_graphic_pane_cp_vc_ParamLimits

0x72bb,	// (0x00036304) list_form_graphic_pane_cp_vc

0x559d,	// (0x000345e6) form_field_popup_wide_pane_vc_g1

0x72d0,	// (0x00036319) form_field_popup_wide_pane_vc_t1_ParamLimits

0x72d0,	// (0x00036319) form_field_popup_wide_pane_vc_t1

0x3fda,	// (0x00033023) input_focus_pane_cp8_vc_ParamLimits

0x3fda,	// (0x00033023) input_focus_pane_cp8_vc

0x7315,	// (0x0003635e) list_form_wide_pane_vc_ParamLimits

0x7315,	// (0x0003635e) list_form_wide_pane_vc

0x7321,	// (0x0003636a) list_form_graphic_pane_vc_g1

0x7329,	// (0x00036372) list_form_graphic_pane_vc_t1_ParamLimits

0x7329,	// (0x00036372) list_form_graphic_pane_vc_t1

0x3745,	// (0x0003278e) list_highlight_pane_cp5_vc_ParamLimits

0x3745,	// (0x0003278e) list_highlight_pane_cp5_vc

0x7345,	// (0x0003638e) list_form_graphic_pane_vc_ParamLimits

0x7345,	// (0x0003638e) list_form_graphic_pane_vc

0x559d,	// (0x000345e6) form_field_popup_pane_vc_g1

0x735b,	// (0x000363a4) form_field_popup_pane_vc_t1_ParamLimits

0x735b,	// (0x000363a4) form_field_popup_pane_vc_t1

0x3fda,	// (0x00033023) input_focus_pane_cp7_vc_ParamLimits

0x3fda,	// (0x00033023) input_focus_pane_cp7_vc

0x7372,	// (0x000363bb) list_form_pane_vc_ParamLimits

0x7372,	// (0x000363bb) list_form_pane_vc

0x737e,	// (0x000363c7) data_form_pane_vc_t1_ParamLimits

0x737e,	// (0x000363c7) data_form_pane_vc_t1

0x4032,	// (0x0003307b) input_focus_pane_vc_g1

0x403a,	// (0x00033083) input_focus_pane_vc_g2

0x4042,	// (0x0003308b) input_focus_pane_vc_g3

0x404a,	// (0x00033093) input_focus_pane_vc_g4

0x4052,	// (0x0003309b) input_focus_pane_vc_g5

0x405a,	// (0x000330a3) input_focus_pane_vc_g6

0x4062,	// (0x000330ab) input_focus_pane_vc_g7

0x406a,	// (0x000330b3) input_focus_pane_vc_g8

0x4072,	// (0x000330bb) input_focus_pane_vc_g9

0x365b,	// (0x000326a4) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0003e6d5) input_focus_pane_vc_g

0x5591,	// (0x000345da) data_form_pane_vc_ParamLimits

0x5591,	// (0x000345da) data_form_pane_vc

0x559d,	// (0x000345e6) form_field_data_pane_vc_g1

0x7399,	// (0x000363e2) form_field_data_pane_vc_t1_ParamLimits

0x7399,	// (0x000363e2) form_field_data_pane_vc_t1

0x3fda,	// (0x00033023) input_focus_pane_vc_ParamLimits

0x3fda,	// (0x00033023) input_focus_pane_vc

0x73b3,	// (0x000363fc) button_value_adjust_pane_cp3_vc

0x73bb,	// (0x00036404) button_value_adjust_pane_cp5_vc

0x73c3,	// (0x0003640c) form_field_data_pane_vc_ParamLimits

0x73c3,	// (0x0003640c) form_field_data_pane_vc

0x73da,	// (0x00036423) form_field_data_pane_vc_cp2

0x73e2,	// (0x0003642b) form_field_data_wide_pane_vc_ParamLimits

0x73e2,	// (0x0003642b) form_field_data_wide_pane_vc

0x73f8,	// (0x00036441) form_field_data_wide_pane_vc_cp2

0x7400,	// (0x00036449) form_field_popup_pane_vc_ParamLimits

0x7400,	// (0x00036449) form_field_popup_pane_vc

0x7417,	// (0x00036460) form_field_popup_wide_pane_vc_ParamLimits

0x7417,	// (0x00036460) form_field_popup_wide_pane_vc

0x742d,	// (0x00036476) form_field_slider_pane_vc_ParamLimits

0x742d,	// (0x00036476) form_field_slider_pane_vc

0x7440,	// (0x00036489) form_field_slider_wide_pane_vc_ParamLimits

0x7440,	// (0x00036489) form_field_slider_wide_pane_vc

0xe08e,	// (0x0003d0d7) grid_touch_1_pane_ParamLimits

0xe08e,	// (0x0003d0d7) grid_touch_1_pane

0xe0a2,	// (0x0003d0eb) grid_touch_2_pane_ParamLimits

0xe0a2,	// (0x0003d0eb) grid_touch_2_pane

0x750e,	// (0x00036557) touch_pane_g1_ParamLimits

0x750e,	// (0x00036557) touch_pane_g1

0x7477,	// (0x000364c0) cell_app_pane_cp_wide_ParamLimits

0x7477,	// (0x000364c0) cell_app_pane_cp_wide

0x7488,	// (0x000364d1) grid_popup_fast_wide_pane_ParamLimits

0x7488,	// (0x000364d1) grid_popup_fast_wide_pane

0x749c,	// (0x000364e5) scroll_pane_cp19_ParamLimits

0x749c,	// (0x000364e5) scroll_pane_cp19

0x3665,	// (0x000326ae) bg_popup_window_pane_cp20

0x74b0,	// (0x000364f9) listscroll_popup_fast_wide_pane

0x419a,	// (0x000331e3) grid_indicator_nsta_pane

0x74b8,	// (0x00036501) clock_nsta_pane_g1

0x74c1,	// (0x0003650a) clock_nsta_pane_t1

0xe0cc,	// (0x0003d115) cell_indicator_nsta_pane_ParamLimits

0xe0cc,	// (0x0003d115) cell_indicator_nsta_pane

0x750e,	// (0x00036557) cell_indicator_nsta_pane_g1

0xe0e3,	// (0x0003d12c) cell_indicator_nsta_pane_g2

0x0001,

0xfa90,	// (0x0003ead9) cell_indicator_nsta_pane_g

0x7529,	// (0x00036572) clock_nsta_pane_cp

0x7532,	// (0x0003657b) indicator_nsta_pane_cp

0x753a,	// (0x00036583) nsta_clock_indic_pane_g1

0x380e,	// (0x00032857) grid_indicator_pane

0x456c,	// (0x000335b5) scroll_pane_cp29

0x0f92,	// (0x0002ffdb) indicator_nsta_pane_cp2_ParamLimits

0x0f92,	// (0x0002ffdb) indicator_nsta_pane_cp2

0x3745,	// (0x0003278e) main_apps_wheel_pane

0x57ac,	// (0x000347f5) form_midp_field_text_pane_ParamLimits

0x5903,	// (0x0003494c) scroll_bar_cp050_ParamLimits

0x758a,	// (0x000365d3) cell_indicator_pane_ParamLimits

0x758a,	// (0x000365d3) cell_indicator_pane

0x75a1,	// (0x000365ea) cell_indicator_pane_g1

0xe0f0,	// (0x0003d139) grid_wheel_folder_pane_ParamLimits

0xe0f0,	// (0x0003d139) grid_wheel_folder_pane

0xe0fe,	// (0x0003d147) list_wheel_apps_pane_ParamLimits

0xe0fe,	// (0x0003d147) list_wheel_apps_pane

0xe10c,	// (0x0003d155) main_apps_wheel_pane_g1_ParamLimits

0xe10c,	// (0x0003d155) main_apps_wheel_pane_g1

0xe118,	// (0x0003d161) main_apps_wheel_pane_g2_ParamLimits

0xe118,	// (0x0003d161) main_apps_wheel_pane_g2

0x0001,

0xfaac,	// (0x0003eaf5) main_apps_wheel_pane_g_ParamLimits

0xfaac,	// (0x0003eaf5) main_apps_wheel_pane_g

0xe126,	// (0x0003d16f) main_apps_wheel_pane_t1_ParamLimits

0xe126,	// (0x0003d16f) main_apps_wheel_pane_t1

0xe13a,	// (0x0003d183) list_wheel_apps_pane_g1

0xe142,	// (0x0003d18b) list_wheel_apps_pane_g2

0xe14a,	// (0x0003d193) list_wheel_apps_pane_g3

0xe152,	// (0x0003d19b) list_wheel_apps_pane_g4

0xe15c,	// (0x0003d1a5) list_wheel_apps_pane_g5

0x0004,

0xfab1,	// (0x0003eafa) list_wheel_apps_pane_g

0x4aef,	// (0x00033b38) navi_icon_text_pane

0xd76d,	// (0x0003c7b6) aid_fill_nsta

0x7666,	// (0x000366af) navi_icon_text_pane_g1

0x7672,	// (0x000366bb) navi_icon_text_pane_t1

0x4982,	// (0x000339cb) list_set_graphic_pane_t1_ParamLimits

0x4982,	// (0x000339cb) list_set_graphic_pane_t1

0x6066,	// (0x000350af) popup_midp_note_alarm_window_t6_ParamLimits

0x6066,	// (0x000350af) popup_midp_note_alarm_window_t6

0x6078,	// (0x000350c1) popup_midp_note_alarm_window_t7_ParamLimits

0x6078,	// (0x000350c1) popup_midp_note_alarm_window_t7

0x608a,	// (0x000350d3) popup_midp_note_alarm_window_t8_ParamLimits

0x608a,	// (0x000350d3) popup_midp_note_alarm_window_t8

0x609c,	// (0x000350e5) popup_midp_note_alarm_window_t9_ParamLimits

0x609c,	// (0x000350e5) popup_midp_note_alarm_window_t9

0x60ae,	// (0x000350f7) popup_midp_note_alarm_window_t10_ParamLimits

0x60ae,	// (0x000350f7) popup_midp_note_alarm_window_t10

0x60c0,	// (0x00035109) popup_midp_note_alarm_window_t11_ParamLimits

0x60c0,	// (0x00035109) popup_midp_note_alarm_window_t11

0x60d2,	// (0x0003511b) scroll_pane_cp17_ParamLimits

0x60d2,	// (0x0003511b) scroll_pane_cp17

0x19c1,	// (0x00030a0a) volume_small_pane_cp_g1

0x1cb6,	// (0x00030cff) volume_small_pane_cp_g2

0x1cbf,	// (0x00030d08) volume_small_pane_cp_g3

0x1cc8,	// (0x00030d11) volume_small_pane_cp_g4

0x1cd1,	// (0x00030d1a) volume_small_pane_cp_g5

0x1cda,	// (0x00030d23) volume_small_pane_cp_g6

0x1ce3,	// (0x00030d2c) volume_small_pane_cp_g7

0x1cec,	// (0x00030d35) volume_small_pane_cp_g8

0x1cf5,	// (0x00030d3e) volume_small_pane_cp_g9

0x1cfe,	// (0x00030d47) volume_small_pane_cp_g10

0x4d4c,	// (0x00033d95) midp_ticker_pane_g1_ParamLimits

0x4d58,	// (0x00033da1) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0003e7a1) midp_ticker_pane_g_ParamLimits

0x4d64,	// (0x00033dad) midp_ticker_pane_t1_ParamLimits

0xd791,	// (0x0003c7da) aid_fill_nsta_2

0x58ef,	// (0x00034938) list_form2_midp_pane

0x6a20,	// (0x00035a69) midp_editing_number_pane_ParamLimits

0x6a2f,	// (0x00035a78) midp_ticker_pane_ParamLimits

0x7684,	// (0x000366cd) form2_midp_field_pane

0x76a8,	// (0x000366f1) scroll_pane_cp51

0x76c8,	// (0x00036711) form2_midp_button_pane_ParamLimits

0x76c8,	// (0x00036711) form2_midp_button_pane

0x76da,	// (0x00036723) form2_midp_content_pane_ParamLimits

0x76da,	// (0x00036723) form2_midp_content_pane

0x76f4,	// (0x0003673d) form2_midp_field_choice_group_pane

0x76fc,	// (0x00036745) form2_midp_field_pane_g1

0x7704,	// (0x0003674d) form2_midp_field_pane_g2

0x770c,	// (0x00036755) form2_midp_field_pane_g3

0x7714,	// (0x0003675d) form2_midp_field_pane_g4

0x0003,

0xfad6,	// (0x0003eb1f) form2_midp_field_pane_g

0x771c,	// (0x00036765) form2_midp_gauge_slider_pane

0x7724,	// (0x0003676d) form2_midp_gauge_wait_pane

0x772c,	// (0x00036775) form2_midp_image_pane_ParamLimits

0x772c,	// (0x00036775) form2_midp_image_pane

0x7747,	// (0x00036790) form2_midp_label_pane_ParamLimits

0x7747,	// (0x00036790) form2_midp_label_pane

0xe18f,	// (0x0003d1d8) form2_midp_label_pane_cp_ParamLimits

0xe18f,	// (0x0003d1d8) form2_midp_label_pane_cp

0x7781,	// (0x000367ca) form2_midp_string_pane_ParamLimits

0x7781,	// (0x000367ca) form2_midp_string_pane

0xc8a1,	// (0x0003b8ea) form2_midp_text_pane_ParamLimits

0xc8a1,	// (0x0003b8ea) form2_midp_text_pane

0x7793,	// (0x000367dc) form2_midp_time_pane

0x77a3,	// (0x000367ec) input_focus_pane_cp51_ParamLimits

0x77a3,	// (0x000367ec) input_focus_pane_cp51

0x77bb,	// (0x00036804) form2_midp_label_pane_t1_ParamLimits

0x77bb,	// (0x00036804) form2_midp_label_pane_t1

0xc8ba,	// (0x0003b903) form2_mdip_text_pane_t1_ParamLimits

0xc8ba,	// (0x0003b903) form2_mdip_text_pane_t1

0x3287,	// (0x000322d0) form2_midp_time_pane_t1

0x7804,	// (0x0003684d) form2_midp_gauge_slider_pane_t1

0xe1ae,	// (0x0003d1f7) form2_midp_gauge_slider_pane_t2

0xe1c0,	// (0x0003d209) form2_midp_gauge_slider_pane_t3

0x0002,

0xfadf,	// (0x0003eb28) form2_midp_gauge_slider_pane_t

0x783a,	// (0x00036883) form2_midp_slider_pane

0x7846,	// (0x0003688f) form2_midp_gauge_wait_pane_t1

0x7854,	// (0x0003689d) form2_midp_wait_pane_ParamLimits

0x7854,	// (0x0003689d) form2_midp_wait_pane

0xe1d2,	// (0x0003d21b) list_single_2graphic_pane_cp4_ParamLimits

0xe1d2,	// (0x0003d21b) list_single_2graphic_pane_cp4

0xdbad,	// (0x0003cbf6) list_single_midp_graphic_pane_cp_ParamLimits

0xdbad,	// (0x0003cbf6) list_single_midp_graphic_pane_cp

0x3665,	// (0x000326ae) list_highlight_pane_cp20

0x78a3,	// (0x000368ec) list_single_2graphic_pane_g1_cp4

0x78ab,	// (0x000368f4) list_single_2graphic_pane_g2_cp4

0x78b3,	// (0x000368fc) list_single_2graphic_pane_t1_cp4

0x3745,	// (0x0003278e) list_highlight_pane_cp21

0x78c2,	// (0x0003690b) list_single_midp_graphic_pane_g4_cp

0x78d1,	// (0x0003691a) list_single_midp_graphic_pane_t1_cp

0xe1e6,	// (0x0003d22f) form2_mdip_string_pane_t1_ParamLimits

0xe1e6,	// (0x0003d22f) form2_mdip_string_pane_t1

0x3665,	// (0x000326ae) bg_wml_button_pane_cp2

0x365b,	// (0x000326a4) form2_midp_image_pane_g1

0x07ca,	// (0x0002f813) list_double_large_graphic_pane_g5_ParamLimits

0x07ca,	// (0x0002f813) list_double_large_graphic_pane_g5

0xd5e8,	// (0x0003c631) midp_form_pane_ParamLimits

0x3745,	// (0x0003278e) main_apps_wheel_pane_ParamLimits

0xc506,	// (0x0003b54f) popup_preview_window_ParamLimits

0xc506,	// (0x0003b54f) popup_preview_window

0x1828,	// (0x00030871) popup_touch_info_window_ParamLimits

0x1828,	// (0x00030871) popup_touch_info_window

0x1846,	// (0x0003088f) popup_touch_menu_window_ParamLimits

0x1846,	// (0x0003088f) popup_touch_menu_window

0x3651,	// (0x0003269a) bg_popup_sub_pane_cp6

0x79df,	// (0x00036a28) list_touch_menu_pane

0x79e7,	// (0x00036a30) list_single_touch_menu_pane_ParamLimits

0x79e7,	// (0x00036a30) list_single_touch_menu_pane

0x79fd,	// (0x00036a46) list_single_touch_menu_pane_t1

0x3745,	// (0x0003278e) bg_popup_sub_pane_cp7_ParamLimits

0x3745,	// (0x0003278e) bg_popup_sub_pane_cp7

0x7a0b,	// (0x00036a54) heading_sub_pane

0x7a13,	// (0x00036a5c) list_touch_info_pane_ParamLimits

0x7a13,	// (0x00036a5c) list_touch_info_pane

0x7a22,	// (0x00036a6b) list_single_touch_info_pane_ParamLimits

0x7a22,	// (0x00036a6b) list_single_touch_info_pane

0x7a34,	// (0x00036a7d) list_single_touch_info_pane_t1

0x7a42,	// (0x00036a8b) list_single_touch_info_pane_t2

0x0001,

0xfaed,	// (0x0003eb36) list_single_touch_info_pane_t

0x4c6f,	// (0x00033cb8) bg_popup_heading_pane_cp

0x7a50,	// (0x00036a99) heading_sub_pane_t1

0x552b,	// (0x00034574) bg_popup_preview_window_pane_cp_ParamLimits

0x552b,	// (0x00034574) bg_popup_preview_window_pane_cp

0x7a0b,	// (0x00036a54) heading_preview_pane

0x7a13,	// (0x00036a5c) list_preview_pane_ParamLimits

0x7a13,	// (0x00036a5c) list_preview_pane

0x7a5e,	// (0x00036aa7) popup_preview_window_g1

0x7a22,	// (0x00036a6b) list_single_preview_pane_ParamLimits

0x7a22,	// (0x00036a6b) list_single_preview_pane

0x7a66,	// (0x00036aaf) list_single_preview_pane_g1

0x7a6e,	// (0x00036ab7) list_single_preview_pane_t1

0x7a34,	// (0x00036a7d) list_single_preview_pane_t2

0x0001,

0xfaf2,	// (0x0003eb3b) list_single_preview_pane_t

0x7a7c,	// (0x00036ac5) bg_popup_heading_pane_cp2_ParamLimits

0x7a7c,	// (0x00036ac5) bg_popup_heading_pane_cp2

0x7a92,	// (0x00036adb) heading_preview_pane_g1

0x7a9a,	// (0x00036ae3) heading_preview_pane_t1_ParamLimits

0x7a9a,	// (0x00036ae3) heading_preview_pane_t1

0x3831,	// (0x0003287a) soft_indicator_pane_t1_ParamLimits

0x3f4d,	// (0x00032f96) scroll_pane_ParamLimits

0x4465,	// (0x000334ae) scroll_sc2_left_pane

0x446e,	// (0x000334b7) scroll_sc2_right_pane

0x448d,	// (0x000334d6) scroll_bg_pane_g1_ParamLimits

0x44a2,	// (0x000334eb) scroll_bg_pane_g2_ParamLimits

0x44ba,	// (0x00033503) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0003e72c) scroll_bg_pane_g_ParamLimits

0x448d,	// (0x000334d6) scroll_handle_pane_g1_ParamLimits

0x44dc,	// (0x00033525) scroll_handle_pane_g2_ParamLimits

0x44ba,	// (0x00033503) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0003e733) scroll_handle_pane_g_ParamLimits

0x12ee,	// (0x00030337) popup_choice_list_window_ParamLimits

0x12ee,	// (0x00030337) popup_choice_list_window

0x5401,	// (0x0003444a) choice_list_pane

0x5483,	// (0x000344cc) cell_toolbar_pane_t1

0x54ab,	// (0x000344f4) toolbar_button_pane_ParamLimits

0x658c,	// (0x000355d5) ai_gene_pane_1_t2_ParamLimits

0x658c,	// (0x000355d5) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0003e956) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0003e956) ai_gene_pane_1_t

0x7ab7,	// (0x00036b00) scroll_sc2_left_pane_g1

0x7ab7,	// (0x00036b00) scroll_sc2_right_pane_g1

0x4f93,	// (0x00033fdc) bg_popup_sub_pane_cp10

0x7ac1,	// (0x00036b0a) list_choice_list_pane

0x7ae6,	// (0x00036b2f) list_single_choice_list_pane_ParamLimits

0x7ae6,	// (0x00036b2f) list_single_choice_list_pane

0x7af9,	// (0x00036b42) list_single_choice_list_pane_g1

0x416b,	// (0x000331b4) list_single_choice_list_pane_t1_ParamLimits

0x416b,	// (0x000331b4) list_single_choice_list_pane_t1

0x7b01,	// (0x00036b4a) choice_list_pane_g1

0x7b09,	// (0x00036b52) choice_list_pane_t1

0x3651,	// (0x0003269a) input_focus_pane_cp11

0x4342,	// (0x0003338b) title_pane_stacon_g2_ParamLimits

0x4342,	// (0x0003338b) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0003e712) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003e712) title_pane_stacon_g

0x4c6f,	// (0x00033cb8) cursor_press_pane

0xc1b3,	// (0x0003b1fc) popup_fep_hwr_window_ParamLimits

0xc1b3,	// (0x0003b1fc) popup_fep_hwr_window

0x1414,	// (0x0003045d) popup_fep_vkb_window_ParamLimits

0x1414,	// (0x0003045d) popup_fep_vkb_window

0x7b17,	// (0x00036b60) cursor_press_pane_g1

0x0002,

0xfb1b,	// (0x0003eb64) fep_vkb_side_pane_g_ParamLimits

0x1d40,	// (0x00030d89) fep_hwr_candidate_pane_ParamLimits

0x1d40,	// (0x00030d89) fep_hwr_candidate_pane

0x1d6a,	// (0x00030db3) fep_hwr_side_pane_ParamLimits

0x1d6a,	// (0x00030db3) fep_hwr_side_pane

0x1d8a,	// (0x00030dd3) fep_hwr_top_pane_ParamLimits

0x1d8a,	// (0x00030dd3) fep_hwr_top_pane

0x1da2,	// (0x00030deb) fep_hwr_write_pane_ParamLimits

0x1da2,	// (0x00030deb) fep_hwr_write_pane

0xfb1b,	// (0x0003eb64) fep_vkb_side_pane_g

0x7b1f,	// (0x00036b68) fep_hwr_top_pane_g1

0x7b31,	// (0x00036b7a) fep_hwr_top_pane_g2

0x1ddc,	// (0x00030e25) fep_hwr_top_pane_g3

0x0002,

0xfaf7,	// (0x0003eb40) fep_hwr_top_pane_g

0x1df1,	// (0x00030e3a) fep_hwr_top_text_pane

0x465c,	// (0x000336a5) fep_hwr_top_text_pane_g1

0x7b67,	// (0x00036bb0) fep_hwr_top_text_pane_t1

0x1ee7,	// (0x00030f30) fep_hwr_candidate_pane_g1

0x7dba,	// (0x00036e03) fep_vkb_keypad_pane_g3_ParamLimits

0x7dba,	// (0x00036e03) fep_vkb_keypad_pane_g3

0x7de2,	// (0x00036e2b) fep_vkb_keypad_pane_g4_ParamLimits

0x7de2,	// (0x00036e2b) fep_vkb_keypad_pane_g4

0x7e51,	// (0x00036e9a) fep_vkb_bottom_pane_g2_ParamLimits

0x7e51,	// (0x00036e9a) fep_vkb_bottom_pane_g2

0x0001,

0xfb22,	// (0x0003eb6b) fep_vkb_bottom_pane_g_ParamLimits

0xfb22,	// (0x0003eb6b) fep_vkb_bottom_pane_g

0x7ab7,	// (0x00036b00) cell_vkb_side_pane_g2

0x0001,

0xfb2c,	// (0x0003eb75) cell_vkb_side_pane_g

0x7edc,	// (0x00036f25) cell_vkb_side_pane_t1

0x7eea,	// (0x00036f33) cell_vkb_side_pane_t1_copy1

0x7ab7,	// (0x00036b00) bg_fep_vkb_candidate_pane_g2

0x8016,	// (0x0003705f) cell_vkb_candidate_pane_ParamLimits

0x7b75,	// (0x00036bbe) aid_size_cell_vkb_ParamLimits

0x7b75,	// (0x00036bbe) aid_size_cell_vkb

0x8016,	// (0x0003705f) cell_vkb_candidate_pane

0x1f0e,	// (0x00030f57) bg_popup_fep_shadow_pane_g1

0xe268,	// (0x0003d2b1) fep_vkb_bottom_pane_ParamLimits

0xe268,	// (0x0003d2b1) fep_vkb_bottom_pane

0x7c39,	// (0x00036c82) fep_vkb_candidate_pane_ParamLimits

0x7c39,	// (0x00036c82) fep_vkb_candidate_pane

0xe28d,	// (0x0003d2d6) fep_vkb_keypad_pane_ParamLimits

0xe28d,	// (0x0003d2d6) fep_vkb_keypad_pane

0xe2c9,	// (0x0003d312) fep_vkb_side_pane_ParamLimits

0xe2c9,	// (0x0003d312) fep_vkb_side_pane

0xe305,	// (0x0003d34e) fep_vkb_top_pane_ParamLimits

0xe305,	// (0x0003d34e) fep_vkb_top_pane

0x7d13,	// (0x00036d5c) fep_vkb_top_pane_g1_ParamLimits

0x7d13,	// (0x00036d5c) fep_vkb_top_pane_g1

0x7d22,	// (0x00036d6b) fep_vkb_top_pane_g2_ParamLimits

0x7d22,	// (0x00036d6b) fep_vkb_top_pane_g2

0x7d31,	// (0x00036d7a) fep_vkb_top_pane_g3_ParamLimits

0x7d31,	// (0x00036d7a) fep_vkb_top_pane_g3

0x0003,

0xfb12,	// (0x0003eb5b) fep_vkb_top_pane_g_ParamLimits

0xfb12,	// (0x0003eb5b) fep_vkb_top_pane_g

0x7d4f,	// (0x00036d98) fep_vkb_top_text_pane_ParamLimits

0x7d4f,	// (0x00036d98) fep_vkb_top_text_pane

0xe341,	// (0x0003d38a) fep_vkb_side_pane_g1_ParamLimits

0xe341,	// (0x0003d38a) fep_vkb_side_pane_g1

0x7da9,	// (0x00036df2) grid_vkb_side_pane_ParamLimits

0x7da9,	// (0x00036df2) grid_vkb_side_pane

0x1f16,	// (0x00030f5f) bg_popup_fep_shadow_pane_g2

0x1f1f,	// (0x00030f68) bg_popup_fep_shadow_pane_g3

0x1f27,	// (0x00030f70) bg_popup_fep_shadow_pane_g4

0x1f30,	// (0x00030f79) bg_popup_fep_shadow_pane_g5

0x1f3a,	// (0x00030f83) bg_popup_fep_shadow_pane_g6

0x1f42,	// (0x00030f8b) bg_popup_fep_shadow_pane_g7

0x404a,	// (0x00033093) bg_popup_fep_shadow_pane_g8

0x7e00,	// (0x00036e49) grid_vkb_keypad_number_pane_ParamLimits

0x7e00,	// (0x00036e49) grid_vkb_keypad_number_pane

0x7e10,	// (0x00036e59) grid_vkb_keypad_pane_ParamLimits

0x7e10,	// (0x00036e59) grid_vkb_keypad_pane

0x7e36,	// (0x00036e7f) fep_vkb_bottom_pane_g1_ParamLimits

0x7e36,	// (0x00036e7f) fep_vkb_bottom_pane_g1

0x7e5f,	// (0x00036ea8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7e5f,	// (0x00036ea8) grid_vkb_keypad_bottom_left_pane

0x7e74,	// (0x00036ebd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7e74,	// (0x00036ebd) grid_vkb_keypad_bottom_right_pane

0x7e89,	// (0x00036ed2) fep_vkb_top_text_pane_g1

0xe3b0,	// (0x0003d3f9) fep_vkb_top_text_pane_t1

0xe3c2,	// (0x0003d40b) cell_vkb_side_pane_ParamLimits

0xe3c2,	// (0x0003d40b) cell_vkb_side_pane

0x7ab7,	// (0x00036b00) cell_vkb_side_pane_g1

0x7ef8,	// (0x00036f41) cell_vkb_keypad_pane_ParamLimits

0x7ef8,	// (0x00036f41) cell_vkb_keypad_pane

0x7f6d,	// (0x00036fb6) cell_vkb_keypad_pane_g1

0x0008,

0xfb3f,	// (0x0003eb88) bg_popup_fep_shadow_pane_g

0x1f54,	// (0x00030f9d) cell_hwr_side_pane_g1

0x1f54,	// (0x00030f9d) cell_hwr_side_pane_g2

0x7f77,	// (0x00036fc0) cell_vkb_keypad_pane_t1

0xe3d8,	// (0x0003d421) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe3d8,	// (0x0003d421) cell_vkb_keypad_bottom_left_pane

0xe3ed,	// (0x0003d436) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe3ed,	// (0x0003d436) cell_vkb_keypad_bottom_right_pane

0x7ab7,	// (0x00036b00) cell_vkb_keypad_bottom_left_pane_g1

0x7ab7,	// (0x00036b00) cell_vkb_keypad_bottom_right_pane_g1

0x7fdb,	// (0x00037024) cell_vkb_keypad_number_pane_ParamLimits

0x7fdb,	// (0x00037024) cell_vkb_keypad_number_pane

0x7ffa,	// (0x00037043) cell_vkb_keypad_number_pane_g1

0x8004,	// (0x0003704d) cell_vkb_keypad_number_pane_g2

0x800d,	// (0x00037056) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb31,	// (0x0003eb7a) cell_vkb_keypad_number_pane_g

0x7f77,	// (0x00036fc0) cell_vkb_keypad_number_pane_t1

0x8031,	// (0x0003707a) fep_vkb_candidate_pane_g1

0x0001,

0xfb52,	// (0x0003eb9b) cell_hwr_side_pane_g

0x804a,	// (0x00037093) cell_hwr_side_pane_t1

0x1f5e,	// (0x00030fa7) cell_hwr_side_pane_t1_copy1

0x1f6c,	// (0x00030fb5) cell_hwr_candidate_pane_g1

0x1f9b,	// (0x00030fe4) cell_hwr_candidate_pane_t1

0x7ab7,	// (0x00036b00) cell_vkb_candidate_pane_g2

0x808e,	// (0x000370d7) cell_vkb_candidate_pane_t1

0x1d07,	// (0x00030d50) bg_popup_fep_shadow_pane_ParamLimits

0x1d07,	// (0x00030d50) bg_popup_fep_shadow_pane

0x1dbc,	// (0x00030e05) bg_fep_hwr_top_pane_g4

0x7b43,	// (0x00036b8c) bg_hwr_side_pane_g1_ParamLimits

0x7b43,	// (0x00036b8c) bg_hwr_side_pane_g1

0xc8ef,	// (0x0003b938) cell_hwr_side_pane_ParamLimits

0xc8ef,	// (0x0003b938) cell_hwr_side_pane

0x1e68,	// (0x00030eb1) fep_hwr_write_pane_g1_ParamLimits

0x1e68,	// (0x00030eb1) fep_hwr_write_pane_g1

0x1e75,	// (0x00030ebe) fep_hwr_write_pane_g2_ParamLimits

0x1e75,	// (0x00030ebe) fep_hwr_write_pane_g2

0x1e82,	// (0x00030ecb) fep_hwr_write_pane_g3_ParamLimits

0x1e82,	// (0x00030ecb) fep_hwr_write_pane_g3

0xc90f,	// (0x0003b958) fep_hwr_write_pane_g4_ParamLimits

0xc90f,	// (0x0003b958) fep_hwr_write_pane_g4

0x0005,

0xfafe,	// (0x0003eb47) fep_hwr_write_pane_g_ParamLimits

0xfafe,	// (0x0003eb47) fep_hwr_write_pane_g

0x1dbc,	// (0x00030e05) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1dbc,	// (0x00030e05) bg_fep_hwr_candidate_pane_g2

0x1ea5,	// (0x00030eee) cell_hwr_candidate_pane_ParamLimits

0x1ea5,	// (0x00030eee) cell_hwr_candidate_pane

0x1ee7,	// (0x00030f30) fep_hwr_candidate_pane_g1_ParamLimits

0x7ba3,	// (0x00036bec) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7ba3,	// (0x00036bec) bg_popup_fep_shadow_pane_cp2

0x7d41,	// (0x00036d8a) fep_vkb_top_pane_g4_ParamLimits

0x7d41,	// (0x00036d8a) fep_vkb_top_pane_g4

0x7d87,	// (0x00036dd0) fep_vkb_side_pane_g2_ParamLimits

0x7d87,	// (0x00036dd0) fep_vkb_side_pane_g2

0xbcb1,	// (0x0003acfa) list_setting_pane_t4_ParamLimits

0xbcb1,	// (0x0003acfa) list_setting_pane_t4

0xbd4b,	// (0x0003ad94) list_setting_number_pane_t5_ParamLimits

0xbd4b,	// (0x0003ad94) list_setting_number_pane_t5

0x4693,	// (0x000336dc) list_double_heading_pane_cp2_ParamLimits

0x4693,	// (0x000336dc) list_double_heading_pane_cp2

0x3fe8,	// (0x00033031) list_double_heading_pane_g1_cp2_ParamLimits

0x3fe8,	// (0x00033031) list_double_heading_pane_g1_cp2

0x3ff4,	// (0x0003303d) list_double_heading_pane_g2_cp2_ParamLimits

0x3ff4,	// (0x0003303d) list_double_heading_pane_g2_cp2

0x809c,	// (0x000370e5) list_double_heading_pane_t1_cp2_ParamLimits

0x809c,	// (0x000370e5) list_double_heading_pane_t1_cp2

0x80b2,	// (0x000370fb) list_double_heading_pane_t2_cp2_ParamLimits

0x80b2,	// (0x000370fb) list_double_heading_pane_t2_cp2

0x3639,	// (0x00032682) aid_value_unit2

0x037d,	// (0x0002f3c6) popup_preview_fixed_window

0x39ce,	// (0x00032a17) bg_popup_preview_window_pane_cp02

0x80c4,	// (0x0003710d) list_preview_fixed_pane

0x810a,	// (0x00037153) list_empty_pane_fp_ParamLimits

0x810a,	// (0x00037153) list_empty_pane_fp

0x810a,	// (0x00037153) list_single_cale_day_pane_fp_ParamLimits

0x810a,	// (0x00037153) list_single_cale_day_pane_fp

0x810a,	// (0x00037153) list_single_graphic_heading_pane_fp_ParamLimits

0x810a,	// (0x00037153) list_single_graphic_heading_pane_fp

0x810a,	// (0x00037153) list_single_graphic_pane_fp_ParamLimits

0x810a,	// (0x00037153) list_single_graphic_pane_fp

0x810a,	// (0x00037153) list_single_heading_pane_fp_ParamLimits

0x810a,	// (0x00037153) list_single_heading_pane_fp

0x810a,	// (0x00037153) list_single_pane_fp_ParamLimits

0x810a,	// (0x00037153) list_single_pane_fp

0x811f,	// (0x00037168) list_single_pane_fp_g1_ParamLimits

0x811f,	// (0x00037168) list_single_pane_fp_g1

0x329a,	// (0x000322e3) list_single_pane_fp_g2_ParamLimits

0x329a,	// (0x000322e3) list_single_pane_fp_g2

0x32a6,	// (0x000322ef) list_single_pane_fp_g3_ParamLimits

0x32a6,	// (0x000322ef) list_single_pane_fp_g3

0x812b,	// (0x00037174) list_single_pane_fp_g4_ParamLimits

0x812b,	// (0x00037174) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0003ebae) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0003ebae) list_single_pane_fp_g

0x32ba,	// (0x00032303) list_single_pane_fp_t1_ParamLimits

0x32ba,	// (0x00032303) list_single_pane_fp_t1

0x32d1,	// (0x0003231a) list_single_graphic_pane_fp_g1_ParamLimits

0x32d1,	// (0x0003231a) list_single_graphic_pane_fp_g1

0x811f,	// (0x00037168) list_single_graphic_pane_fp_g2_ParamLimits

0x811f,	// (0x00037168) list_single_graphic_pane_fp_g2

0x329a,	// (0x000322e3) list_single_graphic_pane_fp_g3_ParamLimits

0x329a,	// (0x000322e3) list_single_graphic_pane_fp_g3

0x32a6,	// (0x000322ef) list_single_graphic_pane_fp_g4_ParamLimits

0x32a6,	// (0x000322ef) list_single_graphic_pane_fp_g4

0x812b,	// (0x00037174) list_single_graphic_pane_fp_g5_ParamLimits

0x812b,	// (0x00037174) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003ebb7) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003ebb7) list_single_graphic_pane_fp_g

0x32dd,	// (0x00032326) list_single_graphic_pane_fp_t1_ParamLimits

0x32dd,	// (0x00032326) list_single_graphic_pane_fp_t1

0x32d1,	// (0x0003231a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x32d1,	// (0x0003231a) list_single_graphic_heading_pane_fp_g1

0x811f,	// (0x00037168) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x811f,	// (0x00037168) list_single_graphic_heading_pane_fp_g2

0x329a,	// (0x000322e3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x329a,	// (0x000322e3) list_single_graphic_heading_pane_fp_g3

0x32a6,	// (0x000322ef) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x32a6,	// (0x000322ef) list_single_graphic_heading_pane_fp_g4

0x812b,	// (0x00037174) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x812b,	// (0x00037174) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003ebb7) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003ebb7) list_single_graphic_heading_pane_fp_g

0x32f3,	// (0x0003233c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x32f3,	// (0x0003233c) list_single_graphic_heading_pane_fp_t1

0x3309,	// (0x00032352) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3309,	// (0x00032352) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0003ebc2) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0003ebc2) list_single_graphic_heading_pane_fp_t

0x331b,	// (0x00032364) list_single_cale_day_pane_fp_g1_ParamLimits

0x331b,	// (0x00032364) list_single_cale_day_pane_fp_g1

0x8137,	// (0x00037180) list_single_cale_day_pane_fp_g2_ParamLimits

0x8137,	// (0x00037180) list_single_cale_day_pane_fp_g2

0x3353,	// (0x0003239c) list_single_cale_day_pane_fp_g3_ParamLimits

0x3353,	// (0x0003239c) list_single_cale_day_pane_fp_g3

0x337b,	// (0x000323c4) list_single_cale_day_pane_fp_g4_ParamLimits

0x337b,	// (0x000323c4) list_single_cale_day_pane_fp_g4

0x339f,	// (0x000323e8) list_single_cale_day_pane_fp_g5_ParamLimits

0x339f,	// (0x000323e8) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003ebc7) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003ebc7) list_single_cale_day_pane_fp_g

0x33c3,	// (0x0003240c) list_single_cale_day_pane_fp_t1_ParamLimits

0x33c3,	// (0x0003240c) list_single_cale_day_pane_fp_t1

0x33e9,	// (0x00032432) list_single_cale_day_pane_fp_t2_ParamLimits

0x33e9,	// (0x00032432) list_single_cale_day_pane_fp_t2

0x3402,	// (0x0003244b) list_single_cale_day_pane_fp_t3_ParamLimits

0x3402,	// (0x0003244b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0003ebd2) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0003ebd2) list_single_cale_day_pane_fp_t

0x811f,	// (0x00037168) list_empty_pane_fp_g1_ParamLimits

0x811f,	// (0x00037168) list_empty_pane_fp_g1

0x341b,	// (0x00032464) list_empty_pane_fp_t1

0x3429,	// (0x00032472) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0003ebd9) list_empty_pane_fp_t

0x811f,	// (0x00037168) list_single_heading_pane_fp_g1_ParamLimits

0x811f,	// (0x00037168) list_single_heading_pane_fp_g1

0x329a,	// (0x000322e3) list_single_heading_pane_fp_g2_ParamLimits

0x329a,	// (0x000322e3) list_single_heading_pane_fp_g2

0x32a6,	// (0x000322ef) list_single_heading_pane_fp_g3_ParamLimits

0x32a6,	// (0x000322ef) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0003ebde) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0003ebde) list_single_heading_pane_fp_g

0x3437,	// (0x00032480) list_single_heading_pane_fp_t1_ParamLimits

0x3437,	// (0x00032480) list_single_heading_pane_fp_t1

0x3449,	// (0x00032492) list_single_heading_pane_fp_t2_ParamLimits

0x3449,	// (0x00032492) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0003ebe5) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0003ebe5) list_single_heading_pane_fp_t

0x41d9,	// (0x00033222) aid_size_cell_fast

0x393e,	// (0x00032987) soft_indicator_pane_cp1_t1

0x4216,	// (0x0003325f) cell_app_pane_cp2_ParamLimits

0x4216,	// (0x0003325f) cell_app_pane_cp2

0x1d29,	// (0x00030d72) fep_hwr_candidate_drop_down_list_pane

0x1f01,	// (0x00030f4a) fep_hwr_candidate_pane_g3_ParamLimits

0x1f01,	// (0x00030f4a) fep_hwr_candidate_pane_g3

0xed14,	// (0x0003dd5d) fep_hwr_candidate_pane_g4_ParamLimits

0xed14,	// (0x0003dd5d) fep_hwr_candidate_pane_g4

0x0002,

0xfb0b,	// (0x0003eb54) fep_hwr_candidate_pane_g_ParamLimits

0xfb0b,	// (0x0003eb54) fep_hwr_candidate_pane_g

0x7c28,	// (0x00036c71) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7c28,	// (0x00036c71) fep_vkb_candidate_drop_down_list_pane

0x8039,	// (0x00037082) fep_vkb_candidate_pane_g3

0x8041,	// (0x0003708a) fep_vkb_candidate_pane_g4

0x0002,

0xfb38,	// (0x0003eb81) fep_vkb_candidate_pane_g

0x1f6c,	// (0x00030fb5) cell_hwr_candidate_pane_g1_ParamLimits

0x1f7a,	// (0x00030fc3) cell_hwr_candidate_pane_g3_ParamLimits

0x1f7a,	// (0x00030fc3) cell_hwr_candidate_pane_g3

0x9d1a,	// (0x00038d63) cell_hwr_candidate_pane_g4_ParamLimits

0x9d1a,	// (0x00038d63) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0003eba0) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0003eba0) cell_hwr_candidate_pane_g

0x8058,	// (0x000370a1) cell_vkb_candidate_pane_g3_ParamLimits

0x8058,	// (0x000370a1) cell_vkb_candidate_pane_g3

0x8073,	// (0x000370bc) cell_vkb_candidate_pane_g4_ParamLimits

0x8073,	// (0x000370bc) cell_vkb_candidate_pane_g4

0x8143,	// (0x0003718c) cell_app_pane_cp2_g1_ParamLimits

0x8143,	// (0x0003718c) cell_app_pane_cp2_g1

0x8161,	// (0x000371aa) cell_app_pane_cp2_g2_ParamLimits

0x8161,	// (0x000371aa) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0003ebea) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0003ebea) cell_app_pane_cp2_g

0x816d,	// (0x000371b6) cell_app_pane_cp2_t1_ParamLimits

0x816d,	// (0x000371b6) cell_app_pane_cp2_t1

0x3fda,	// (0x00033023) grid_highlight_pane_cp1_ParamLimits

0x3fda,	// (0x00033023) grid_highlight_pane_cp1

0x1fb9,	// (0x00031002) cell_hwr_candidate_pane_cp1_ParamLimits

0x1fb9,	// (0x00031002) cell_hwr_candidate_pane_cp1

0x1f6c,	// (0x00030fb5) fep_hwr_candidate_drop_down_list_pane_g1

0x1fd8,	// (0x00031021) fep_hwr_candidate_drop_down_list_pane_g2

0x1fe5,	// (0x0003102e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0003ebef) fep_hwr_candidate_drop_down_list_pane_g

0x1ff2,	// (0x0003103b) fep_hwr_candidate_drop_down_list_scroll_pane

0x1ffb,	// (0x00031044) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1ffb,	// (0x00031044) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2008,	// (0x00031051) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2008,	// (0x00031051) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2015,	// (0x0003105e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2015,	// (0x0003105e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x2022,	// (0x0003106b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x2022,	// (0x0003106b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x203d,	// (0x00031086) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x203d,	// (0x00031086) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2058,	// (0x000310a1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2058,	// (0x000310a1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2073,	// (0x000310bc) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2073,	// (0x000310bc) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x208e,	// (0x000310d7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x208e,	// (0x000310d7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0003ebf6) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0003ebf6) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x817f,	// (0x000371c8) cell_vkb_candidate_pane_cp1_ParamLimits

0x817f,	// (0x000371c8) cell_vkb_candidate_pane_cp1

0x7d41,	// (0x00036d8a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7d41,	// (0x00036d8a) fep_vkb_candidate_drop_down_list_pane_g1

0x819f,	// (0x000371e8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x819f,	// (0x000371e8) fep_vkb_candidate_drop_down_list_pane_g2

0x81ac,	// (0x000371f5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x81ac,	// (0x000371f5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x0003ec07) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x0003ec07) fep_vkb_candidate_drop_down_list_pane_g

0x81b9,	// (0x00037202) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x81b9,	// (0x00037202) fep_vkb_candidate_drop_down_list_scroll_pane

0x81c6,	// (0x0003720f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x81c6,	// (0x0003720f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x81d3,	// (0x0003721c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x81d3,	// (0x0003721c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x81df,	// (0x00037228) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x81df,	// (0x00037228) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x81eb,	// (0x00037234) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x81eb,	// (0x00037234) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x820c,	// (0x00037255) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x820c,	// (0x00037255) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x822d,	// (0x00037276) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x822d,	// (0x00037276) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x824e,	// (0x00037297) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x824e,	// (0x00037297) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x826f,	// (0x000372b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x826f,	// (0x000372b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x0003ec0e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x0003ec0e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd0c6,	// (0x0003c10f) title_pane_g1_ParamLimits

0xd0d9,	// (0x0003c122) title_pane_g2_ParamLimits

0xf54e,	// (0x0003e597) title_pane_g_ParamLimits

0x464c,	// (0x00033695) aid_call2_pane

0x4654,	// (0x0003369d) aid_call_pane

0x465c,	// (0x000336a5) popup_clock_analogue_window_g1

0x465c,	// (0x000336a5) popup_clock_analogue_window_g2

0x0e09,	// (0x0002fe52) popup_clock_analogue_window_g3

0x0e12,	// (0x0002fe5b) popup_clock_analogue_window_g4

0x365b,	// (0x000326a4) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0003e741) popup_clock_analogue_window_g

0x0e1a,	// (0x0002fe63) popup_clock_analogue_window_t1

0x0e28,	// (0x0002fe71) clock_digital_number_pane_ParamLimits

0x0e28,	// (0x0002fe71) clock_digital_number_pane

0x0e34,	// (0x0002fe7d) clock_digital_number_pane_cp02_ParamLimits

0x0e34,	// (0x0002fe7d) clock_digital_number_pane_cp02

0x0e40,	// (0x0002fe89) clock_digital_number_pane_cp03_ParamLimits

0x0e40,	// (0x0002fe89) clock_digital_number_pane_cp03

0x0e4c,	// (0x0002fe95) clock_digital_number_pane_cp04_ParamLimits

0x0e4c,	// (0x0002fe95) clock_digital_number_pane_cp04

0x0e58,	// (0x0002fea1) clock_digital_separator_pane_ParamLimits

0x0e58,	// (0x0002fea1) clock_digital_separator_pane

0x0e64,	// (0x0002fead) popup_clock_digital_window_t1_ParamLimits

0x0e64,	// (0x0002fead) popup_clock_digital_window_t1

0x365b,	// (0x000326a4) clock_digital_number_pane_g1

0x365b,	// (0x000326a4) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0003e74c) clock_digital_number_pane_g

0x365b,	// (0x000326a4) clock_digital_separator_pane_g1

0x365b,	// (0x000326a4) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0003e74c) clock_digital_separator_pane_g

0xd76d,	// (0x0003c7b6) aid_fill_nsta_ParamLimits

0xd8a3,	// (0x0003c8ec) indicator_nsta_pane_ParamLimits

0x528e,	// (0x000342d7) popup_clock_analogue_window

0x528e,	// (0x000342d7) popup_clock_digital_window

0x419a,	// (0x000331e3) grid_indicator_nsta_pane_ParamLimits

0x74cf,	// (0x00036518) clock_nsta_pane_t2

0x0001,

0xfa8b,	// (0x0003ead4) clock_nsta_pane_t

0x0dcd,	// (0x0002fe16) aid_size_max_handle

0xbeea,	// (0x0003af33) aid_size_min_handle

0x4c6f,	// (0x00033cb8) editor_scroll_pane

0x828a,	// (0x000372d3) ex_editor_pane

0x4147,	// (0x00033190) scroll_pane_cp13

0x3f79,	// (0x00032fc2) scroll_pane_cp14

0x468b,	// (0x000336d4) scroll_pane_cp36

0xd550,	// (0x0003c599) list_single_graphic_hl_pane_cp2_ParamLimits

0xd550,	// (0x0003c599) list_single_graphic_hl_pane_cp2

0xc87d,	// (0x0003b8c6) list_single_graphic_hl_pane_ParamLimits

0xc87d,	// (0x0003b8c6) list_single_graphic_hl_pane

0x345f,	// (0x000324a8) aid_size_min_hl_cp1

0x8292,	// (0x000372db) list_highlight_pane_cp34_ParamLimits

0x8292,	// (0x000372db) list_highlight_pane_cp34

0x82a3,	// (0x000372ec) list_single_graphic_hl_pane_g1_ParamLimits

0x82a3,	// (0x000372ec) list_single_graphic_hl_pane_g1

0xc924,	// (0x0003b96d) list_single_graphic_hl_pane_g2_ParamLimits

0xc924,	// (0x0003b96d) list_single_graphic_hl_pane_g2

0xc924,	// (0x0003b96d) list_single_graphic_hl_pane_g3_ParamLimits

0xc924,	// (0x0003b96d) list_single_graphic_hl_pane_g3

0xc930,	// (0x0003b979) list_single_graphic_hl_pane_g4_ParamLimits

0xc930,	// (0x0003b979) list_single_graphic_hl_pane_g4

0xc93c,	// (0x0003b985) list_single_graphic_hl_pane_g5_ParamLimits

0xc93c,	// (0x0003b985) list_single_graphic_hl_pane_g5

0x0004,

0xfbd6,	// (0x0003ec1f) list_single_graphic_hl_pane_g_ParamLimits

0xfbd6,	// (0x0003ec1f) list_single_graphic_hl_pane_g

0xc950,	// (0x0003b999) list_single_graphic_hl_pane_t1_ParamLimits

0xc950,	// (0x0003b999) list_single_graphic_hl_pane_t1

0x82b0,	// (0x000372f9) aid_size_min_hl_cp2

0x82b9,	// (0x00037302) list_highlight_pane_cp34_cp2_ParamLimits

0x82b9,	// (0x00037302) list_highlight_pane_cp34_cp2

0x82a3,	// (0x000372ec) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x82a3,	// (0x000372ec) list_single_graphic_hl_pane_g1_cp2

0x82c6,	// (0x0003730f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x82c6,	// (0x0003730f) list_single_graphic_hl_pane_g2_cp2

0x82d2,	// (0x0003731b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x82d2,	// (0x0003731b) list_single_graphic_hl_pane_g3_cp2

0x7ad0,	// (0x00036b19) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7ad0,	// (0x00036b19) list_single_graphic_hl_pane_g4_cp2

0x82e0,	// (0x00037329) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x82e0,	// (0x00037329) list_single_graphic_hl_pane_g5_cp2

0xbfd1,	// (0x0003b01a) control_pane_g4_ParamLimits

0xbfd1,	// (0x0003b01a) control_pane_g4

0x4f93,	// (0x00033fdc) bg_popup_sub_pane_cp10_ParamLimits

0x7ac1,	// (0x00036b0a) list_choice_list_pane_ParamLimits

0x7adc,	// (0x00036b25) scroll_pane_cp23

0x39ce,	// (0x00032a17) bg_popup_preview_window_pane_cp02_ParamLimits

0x80c4,	// (0x0003710d) list_preview_fixed_pane_ParamLimits

0x80da,	// (0x00037123) list_preview_fixed_pane_cp_ParamLimits

0x80da,	// (0x00037123) list_preview_fixed_pane_cp

0x80e6,	// (0x0003712f) popup_preview_fixed_window_g1_ParamLimits

0x80e6,	// (0x0003712f) popup_preview_fixed_window_g1

0x80f2,	// (0x0003713b) popup_preview_fixed_window_g2_ParamLimits

0x80f2,	// (0x0003713b) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0003eba7) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0003eba7) popup_preview_fixed_window_g

0x0d41,	// (0x0002fd8a) aid_navi_side_left_pane_ParamLimits

0x0d56,	// (0x0002fd9f) aid_navi_side_right_pane_ParamLimits

0x0d6e,	// (0x0002fdb7) navi_icon_pane_stacon_ParamLimits

0x0d82,	// (0x0002fdcb) navi_navi_pane_stacon_ParamLimits

0x0d6e,	// (0x0002fdb7) navi_text_pane_stacon_ParamLimits

0x023e,	// (0x0002f287) main_text_info_pane

0x830a,	// (0x00037353) listscroll_text_info_pane

0x8312,	// (0x0003735b) list_text_info_pane_ParamLimits

0x8312,	// (0x0003735b) list_text_info_pane

0x8321,	// (0x0003736a) scroll_pane_cp24_ParamLimits

0x8321,	// (0x0003736a) scroll_pane_cp24

0xe408,	// (0x0003d451) list_text_info_pane_t1_ParamLimits

0xe408,	// (0x0003d451) list_text_info_pane_t1

0xc126,	// (0x0003b16f) popup_fast_swap2_window_ParamLimits

0xc126,	// (0x0003b16f) popup_fast_swap2_window

0x8370,	// (0x000373b9) aid_size_cell_fast2

0x3651,	// (0x0003269a) bg_popup_window_pane_cp17

0x5923,	// (0x0003496c) heading_pane_cp2

0x3c43,	// (0x00032c8c) listscroll_fast2_pane

0x837a,	// (0x000373c3) grid_fast2_pane

0x8384,	// (0x000373cd) listscroll_fast2_pane_g1

0x838c,	// (0x000373d5) listscroll_fast2_pane_g2

0x0001,

0xfbe1,	// (0x0003ec2a) listscroll_fast2_pane_g

0x4147,	// (0x00033190) scroll_pane_cp26

0x8396,	// (0x000373df) cell_fast2_pane_ParamLimits

0x8396,	// (0x000373df) cell_fast2_pane

0x83ab,	// (0x000373f4) cell_fast2_pane_g1

0x83b4,	// (0x000373fd) cell_fast2_pane_g2

0x83bd,	// (0x00037406) cell_fast2_pane_g3

0x0002,

0xfbe6,	// (0x0003ec2f) cell_fast2_pane_g

0x3d36,	// (0x00032d7f) grid_highlight_pane_cp9

0x12d2,	// (0x0003031b) main_eswt_pane_ParamLimits

0x12d2,	// (0x0003031b) main_eswt_pane

0x8336,	// (0x0003737f) list_single_text_info_pane

0x83c5,	// (0x0003740e) eswt_ctrl_button_pane

0x83c5,	// (0x0003740e) eswt_ctrl_canvas_pane

0x83cd,	// (0x00037416) eswt_ctrl_combo_pane

0x83c5,	// (0x0003740e) eswt_ctrl_default_pane

0x83c5,	// (0x0003740e) eswt_ctrl_label_pane

0x83d5,	// (0x0003741e) eswt_ctrl_wait_pane

0x83dd,	// (0x00037426) eswt_shell_pane

0x3651,	// (0x0003269a) listscroll_eswt_app_pane

0x83fd,	// (0x00037446) popup_eswt_tasktip_window_ParamLimits

0x83fd,	// (0x00037446) popup_eswt_tasktip_window

0x552b,	// (0x00034574) bg_popup_window_pane_cp18

0x840e,	// (0x00037457) eswt_control_pane_g1_ParamLimits

0x840e,	// (0x00037457) eswt_control_pane_g1

0x841b,	// (0x00037464) eswt_control_pane_g2_ParamLimits

0x841b,	// (0x00037464) eswt_control_pane_g2

0x8428,	// (0x00037471) eswt_control_pane_g3_ParamLimits

0x8428,	// (0x00037471) eswt_control_pane_g3

0x8435,	// (0x0003747e) eswt_control_pane_g4_ParamLimits

0x8435,	// (0x0003747e) eswt_control_pane_g4

0x0003,

0xfbed,	// (0x0003ec36) eswt_control_pane_g_ParamLimits

0xfbed,	// (0x0003ec36) eswt_control_pane_g

0x3fda,	// (0x00033023) bg_button_pane_ParamLimits

0x3fda,	// (0x00033023) bg_button_pane

0x3d4b,	// (0x00032d94) common_borders_pane_copy2_ParamLimits

0x3d4b,	// (0x00032d94) common_borders_pane_copy2

0x8442,	// (0x0003748b) control_button_pane_g1_ParamLimits

0x8442,	// (0x0003748b) control_button_pane_g1

0x844e,	// (0x00037497) control_button_pane_g2_ParamLimits

0x844e,	// (0x00037497) control_button_pane_g2

0x845a,	// (0x000374a3) control_button_pane_g3_ParamLimits

0x845a,	// (0x000374a3) control_button_pane_g3

0x0002,

0xfbf6,	// (0x0003ec3f) control_button_pane_g_ParamLimits

0xfbf6,	// (0x0003ec3f) control_button_pane_g

0x846e,	// (0x000374b7) control_button_pane_t1

0x847c,	// (0x000374c5) control_button_pane_t2

0x0001,

0xfbfd,	// (0x0003ec46) control_button_pane_t

0x54b7,	// (0x00034500) bg_button_pane_g1

0x54c7,	// (0x00034510) bg_button_pane_g2

0x54bf,	// (0x00034508) bg_button_pane_g3

0x54d7,	// (0x00034520) bg_button_pane_g4

0x54cf,	// (0x00034518) bg_button_pane_g5

0x54df,	// (0x00034528) bg_button_pane_g6

0x54e7,	// (0x00034530) bg_button_pane_g7

0x54f7,	// (0x00034540) bg_button_pane_g8

0x54ef,	// (0x00034538) bg_button_pane_g9

0x0008,

0xf861,	// (0x0003e8aa) bg_button_pane_g

0x7a7c,	// (0x00036ac5) common_borders_pane_ParamLimits

0x7a7c,	// (0x00036ac5) common_borders_pane

0x840e,	// (0x00037457) eswt_control_pane_g1_copy1_ParamLimits

0x840e,	// (0x00037457) eswt_control_pane_g1_copy1

0x841b,	// (0x00037464) eswt_control_pane_g2_copy1_ParamLimits

0x841b,	// (0x00037464) eswt_control_pane_g2_copy1

0x8428,	// (0x00037471) eswt_control_pane_g3_copy1_ParamLimits

0x8428,	// (0x00037471) eswt_control_pane_g3_copy1

0x8435,	// (0x0003747e) eswt_control_pane_g4_copy1_ParamLimits

0x8435,	// (0x0003747e) eswt_control_pane_g4_copy1

0x7ab7,	// (0x00036b00) bg_eswt_ctrl_canvas_pane_g1

0x7a7c,	// (0x00036ac5) common_borders_pane_cp2_ParamLimits

0x7a7c,	// (0x00036ac5) common_borders_pane_cp2

0x7a7c,	// (0x00036ac5) common_borders_pane_cp3_ParamLimits

0x7a7c,	// (0x00036ac5) common_borders_pane_cp3

0x848a,	// (0x000374d3) separator_horizontal_pane

0x8492,	// (0x000374db) separator_vertical_pane

0x840e,	// (0x00037457) eswt_control_pane_g1_copy2_ParamLimits

0x840e,	// (0x00037457) eswt_control_pane_g1_copy2

0x841b,	// (0x00037464) eswt_control_pane_g2_copy2_ParamLimits

0x841b,	// (0x00037464) eswt_control_pane_g2_copy2

0x8428,	// (0x00037471) eswt_control_pane_g3_copy2_ParamLimits

0x8428,	// (0x00037471) eswt_control_pane_g3_copy2

0x8435,	// (0x0003747e) eswt_control_pane_g4_copy2_ParamLimits

0x8435,	// (0x0003747e) eswt_control_pane_g4_copy2

0x3651,	// (0x0003269a) common_borders_pane_cp4

0x849b,	// (0x000374e4) separator_horizontal_pane_g1

0x84a4,	// (0x000374ed) separator_horizontal_pane_g2

0x84ad,	// (0x000374f6) separator_horizontal_pane_g3

0x0002,

0xfc02,	// (0x0003ec4b) separator_horizontal_pane_g

0x840e,	// (0x00037457) eswt_control_pane_g1_copy3_ParamLimits

0x840e,	// (0x00037457) eswt_control_pane_g1_copy3

0x841b,	// (0x00037464) eswt_control_pane_g2_copy3_ParamLimits

0x841b,	// (0x00037464) eswt_control_pane_g2_copy3

0x8428,	// (0x00037471) eswt_control_pane_g3_copy3_ParamLimits

0x8428,	// (0x00037471) eswt_control_pane_g3_copy3

0x8435,	// (0x0003747e) eswt_control_pane_g4_copy3_ParamLimits

0x8435,	// (0x0003747e) eswt_control_pane_g4_copy3

0x3651,	// (0x0003269a) common_borders_pane_cp5

0x84b6,	// (0x000374ff) separator_vertical_pane_g1

0x84bf,	// (0x00037508) separator_vertical_pane_g2

0x84c8,	// (0x00037511) separator_vertical_pane_g3

0x0002,

0xfc09,	// (0x0003ec52) separator_vertical_pane_g

0x840e,	// (0x00037457) eswt_control_pane_g1_copy4_ParamLimits

0x840e,	// (0x00037457) eswt_control_pane_g1_copy4

0x841b,	// (0x00037464) eswt_control_pane_g2_copy4_ParamLimits

0x841b,	// (0x00037464) eswt_control_pane_g2_copy4

0x8428,	// (0x00037471) eswt_control_pane_g3_copy4_ParamLimits

0x8428,	// (0x00037471) eswt_control_pane_g3_copy4

0x8435,	// (0x0003747e) eswt_control_pane_g4_copy4_ParamLimits

0x8435,	// (0x0003747e) eswt_control_pane_g4_copy4

0xe423,	// (0x0003d46c) eswt_ctrl_combo_button_pane

0xe42b,	// (0x0003d474) eswt_ctrl_input_pane

0xe433,	// (0x0003d47c) popup_choice_list_window_cp70

0xe43b,	// (0x0003d484) eswt_ctrl_input_pane_t1

0x3651,	// (0x0003269a) input_focus_pane_cp70

0x7a7c,	// (0x00036ac5) bg_button_pane_cp70_ParamLimits

0x7a7c,	// (0x00036ac5) bg_button_pane_cp70

0xe449,	// (0x0003d492) eswt_ctrl_combo_button_pane_g1

0x84ff,	// (0x00037548) wait_bar_pane_cp70

0x552b,	// (0x00034574) bg_popup_window_pane_cp70_ParamLimits

0x552b,	// (0x00034574) bg_popup_window_pane_cp70

0x8507,	// (0x00037550) popup_eswt_tasktip_window_t1

0x851d,	// (0x00037566) wait_bar_pane_cp71_ParamLimits

0x851d,	// (0x00037566) wait_bar_pane_cp71

0x8529,	// (0x00037572) grid_eswt_app_pane

0x4465,	// (0x000334ae) scroll_pane_cp70

0xe451,	// (0x0003d49a) cell_eswt_app_pane_ParamLimits

0xe451,	// (0x0003d49a) cell_eswt_app_pane

0xe47b,	// (0x0003d4c4) cell_eswt_app_pane_g1_ParamLimits

0xe47b,	// (0x0003d4c4) cell_eswt_app_pane_g1

0xe4aa,	// (0x0003d4f3) cell_eswt_app_pane_g2_ParamLimits

0xe4aa,	// (0x0003d4f3) cell_eswt_app_pane_g2

0x0001,

0xfc10,	// (0x0003ec59) cell_eswt_app_pane_g_ParamLimits

0xfc10,	// (0x0003ec59) cell_eswt_app_pane_g

0xe4d3,	// (0x0003d51c) cell_eswt_app_pane_t1_ParamLimits

0xe4d3,	// (0x0003d51c) cell_eswt_app_pane_t1

0x85ec,	// (0x00037635) grid_highlight_pane_cp70_ParamLimits

0x85ec,	// (0x00037635) grid_highlight_pane_cp70

0x4b44,	// (0x00033b8d) set_content_pane_g1

0xd722,	// (0x0003c76b) status_small_volume_pane

0x20a9,	// (0x000310f2) status_small_volume_pane_g1

0x20b1,	// (0x000310fa) volume_small2_pane

0x20ba,	// (0x00031103) volume_small2_pane_g1

0x20c3,	// (0x0003110c) volume_small2_pane_g2

0x20cc,	// (0x00031115) volume_small2_pane_g3

0x20d5,	// (0x0003111e) volume_small2_pane_g4

0x20de,	// (0x00031127) volume_small2_pane_g5

0x20e7,	// (0x00031130) volume_small2_pane_g6

0x20f0,	// (0x00031139) volume_small2_pane_g7

0x20f9,	// (0x00031142) volume_small2_pane_g8

0x2102,	// (0x0003114b) volume_small2_pane_g9

0x210b,	// (0x00031154) volume_small2_pane_g10

0x0009,

0xfc15,	// (0x0003ec5e) volume_small2_pane_g

0x7e89,	// (0x00036ed2) fep_vkb_top_text_pane_g1_ParamLimits

0xe3b0,	// (0x0003d3f9) fep_vkb_top_text_pane_t1_ParamLimits

0x80fe,	// (0x00037147) popup_preview_fixed_window_g3_ParamLimits

0x80fe,	// (0x00037147) popup_preview_fixed_window_g3

0xc749,	// (0x0003b792) popup_toolbar_trans_pane

0xdd9e,	// (0x0003cde7) aid_height_set_list_ParamLimits

0x6899,	// (0x000358e2) aid_size_parent_ParamLimits

0x4f93,	// (0x00033fdc) list_highlight_pane_cp2_ParamLimits

0x4b44,	// (0x00033b8d) set_content_pane_g1_ParamLimits

0xc88f,	// (0x0003b8d8) list_single_image_pane_ParamLimits

0xc88f,	// (0x0003b8d8) list_single_image_pane

0xe505,	// (0x0003d54e) aid_size_cell_image_ParamLimits

0xe505,	// (0x0003d54e) aid_size_cell_image

0xe512,	// (0x0003d55b) grid_single_image_pane_ParamLimits

0xe512,	// (0x0003d55b) grid_single_image_pane

0x5895,	// (0x000348de) list_single_image_pane_g1_ParamLimits

0x5895,	// (0x000348de) list_single_image_pane_g1

0x8611,	// (0x0003765a) list_single_image_pane_g2_ParamLimits

0x8611,	// (0x0003765a) list_single_image_pane_g2

0x0001,

0xfc2a,	// (0x0003ec73) list_single_image_pane_g_ParamLimits

0xfc2a,	// (0x0003ec73) list_single_image_pane_g

0x8625,	// (0x0003766e) list_single_image_pane_t1_ParamLimits

0x8625,	// (0x0003766e) list_single_image_pane_t1

0xe520,	// (0x0003d569) cell_image_list_pane_ParamLimits

0xe520,	// (0x0003d569) cell_image_list_pane

0xe536,	// (0x0003d57f) cell_image_list_pane_g1

0xe53f,	// (0x0003d588) cell_image_list_pane_g2

0x0001,

0xfc2f,	// (0x0003ec78) cell_image_list_pane_g

0x8661,	// (0x000376aa) aid_size_cell_tb_trans_pane

0x3fda,	// (0x00033023) bg_tb_trans_pane

0x8673,	// (0x000376bc) grid_tb_trans_pane

0x54b7,	// (0x00034500) bg_tb_trans_pane_g1

0x54c7,	// (0x00034510) bg_tb_trans_pane_g2

0x54bf,	// (0x00034508) bg_tb_trans_pane_g3

0x54d7,	// (0x00034520) bg_tb_trans_pane_g4

0x54cf,	// (0x00034518) bg_tb_trans_pane_g5

0x54f7,	// (0x00034540) bg_tb_trans_pane_g6

0x54ef,	// (0x00034538) bg_tb_trans_pane_g7

0x54df,	// (0x00034528) bg_tb_trans_pane_g8

0x54e7,	// (0x00034530) bg_tb_trans_pane_g9

0x0008,

0xfc34,	// (0x0003ec7d) bg_tb_trans_pane_g

0x8687,	// (0x000376d0) cell_toolbar_trans_pane_ParamLimits

0x8687,	// (0x000376d0) cell_toolbar_trans_pane

0x7ab7,	// (0x00036b00) cell_toolbar_trans_pane_g1

0xe173,	// (0x0003d1bc) list_form2_midp_pane_t1

0xe181,	// (0x0003d1ca) list_form2_midp_pane_t2

0x0001,

0xfad1,	// (0x0003eb1a) list_form2_midp_pane_t

0x76a8,	// (0x000366f1) scroll_pane_cp51_ParamLimits

0x7864,	// (0x000368ad) form2_midp_wait_pane_g1

0x786d,	// (0x000368b6) form2_midp_wait_pane_g2

0x7876,	// (0x000368bf) form2_midp_wait_pane_g3

0x0002,

0xfae6,	// (0x0003eb2f) form2_midp_wait_pane_g

0x3745,	// (0x0003278e) list_highlight_pane_cp21_ParamLimits

0x78c2,	// (0x0003690b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x78d1,	// (0x0003691a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6a51,	// (0x00035a9a) list_single_2graphic_im_pane_ParamLimits

0x6a51,	// (0x00035a9a) list_single_2graphic_im_pane

0xe548,	// (0x0003d591) list_single_2graphic_im_pane_g1_ParamLimits

0xe548,	// (0x0003d591) list_single_2graphic_im_pane_g1

0xe559,	// (0x0003d5a2) list_single_2graphic_im_pane_g2_ParamLimits

0xe559,	// (0x0003d5a2) list_single_2graphic_im_pane_g2

0xe565,	// (0x0003d5ae) list_single_2graphic_im_pane_g3_ParamLimits

0xe565,	// (0x0003d5ae) list_single_2graphic_im_pane_g3

0x0003,

0xfc47,	// (0x0003ec90) list_single_2graphic_im_pane_g_ParamLimits

0xfc47,	// (0x0003ec90) list_single_2graphic_im_pane_g

0xe579,	// (0x0003d5c2) list_single_2graphic_im_pane_t1_ParamLimits

0xe579,	// (0x0003d5c2) list_single_2graphic_im_pane_t1

0x810a,	// (0x00037153) list_single_graphic_2heading_pane_fp_ParamLimits

0x810a,	// (0x00037153) list_single_graphic_2heading_pane_fp

0x32d1,	// (0x0003231a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x32d1,	// (0x0003231a) list_single_graphic_2heading_pane_fp_g1

0x811f,	// (0x00037168) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x811f,	// (0x00037168) list_single_graphic_2heading_pane_fp_g2

0x329a,	// (0x000322e3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x329a,	// (0x000322e3) list_single_graphic_2heading_pane_fp_g3

0x32a6,	// (0x000322ef) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x32a6,	// (0x000322ef) list_single_graphic_2heading_pane_fp_g4

0x812b,	// (0x00037174) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x812b,	// (0x00037174) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003ebb7) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003ebb7) list_single_graphic_2heading_pane_fp_g

0x34aa,	// (0x000324f3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x34aa,	// (0x000324f3) list_single_graphic_2heading_pane_fp_t1

0x3309,	// (0x00032352) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3309,	// (0x00032352) list_single_graphic_2heading_pane_fp_t2

0x34c0,	// (0x00032509) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x34c0,	// (0x00032509) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc50,	// (0x0003ec99) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc50,	// (0x0003ec99) list_single_graphic_2heading_pane_fp_t

0x7b4f,	// (0x00036b98) fep_hwr_write_pane_g5_ParamLimits

0x7b4f,	// (0x00036b98) fep_hwr_write_pane_g5

0x7b5b,	// (0x00036ba4) fep_hwr_write_pane_g6_ParamLimits

0x7b5b,	// (0x00036ba4) fep_hwr_write_pane_g6

0x83dd,	// (0x00037426) eswt_shell_pane_ParamLimits

0x552b,	// (0x00034574) bg_popup_window_pane_cp18_ParamLimits

0x67e1,	// (0x0003582a) heading_pane_cp70

0x8507,	// (0x00037550) popup_eswt_tasktip_window_t1_ParamLimits

0xd7c8,	// (0x0003c811) aid_touch_tab_arrow_left

0xd7de,	// (0x0003c827) aid_touch_tab_arrow_right

0xd0f1,	// (0x0003c13a) title_pane_g3_ParamLimits

0xd0f1,	// (0x0003c13a) title_pane_g3

0x3f99,	// (0x00032fe2) set_value_pane_g1

0xc749,	// (0x0003b792) popup_toolbar_trans_pane_ParamLimits

0x8661,	// (0x000376aa) aid_size_cell_tb_trans_pane_ParamLimits

0x3fda,	// (0x00033023) bg_tb_trans_pane_ParamLimits

0x8673,	// (0x000376bc) grid_tb_trans_pane_ParamLimits

0x39ce,	// (0x00032a17) cont_note_pane_ParamLimits

0x39ce,	// (0x00032a17) cont_note_pane

0x3d4b,	// (0x00032d94) cont_snote2_single_text_pane_ParamLimits

0x3d4b,	// (0x00032d94) cont_snote2_single_text_pane

0x3d4b,	// (0x00032d94) cont_snote2_single_graphic_pane_ParamLimits

0x3d4b,	// (0x00032d94) cont_snote2_single_graphic_pane

0x5b4a,	// (0x00034b93) cont_note_wait_pane_ParamLimits

0x5b4a,	// (0x00034b93) cont_note_wait_pane

0x5b4a,	// (0x00034b93) cont_note_image_pane_ParamLimits

0x5b4a,	// (0x00034b93) cont_note_image_pane

0x871b,	// (0x00037764) popup_note2_window_g1_ParamLimits

0x871b,	// (0x00037764) popup_note2_window_g1

0x874c,	// (0x00037795) popup_note2_window_t1_ParamLimits

0x874c,	// (0x00037795) popup_note2_window_t1

0x8791,	// (0x000377da) popup_note2_window_t2_ParamLimits

0x8791,	// (0x000377da) popup_note2_window_t2

0x87d6,	// (0x0003781f) popup_note2_window_t3_ParamLimits

0x87d6,	// (0x0003781f) popup_note2_window_t3

0x881b,	// (0x00037864) popup_note2_window_t4_ParamLimits

0x881b,	// (0x00037864) popup_note2_window_t4

0x3a52,	// (0x00032a9b) popup_note2_window_t5_ParamLimits

0x3a52,	// (0x00032a9b) popup_note2_window_t5

0x0004,

0xfc5c,	// (0x0003eca5) popup_note2_window_t_ParamLimits

0xfc5c,	// (0x0003eca5) popup_note2_window_t

0x884a,	// (0x00037893) popup_note2_image_window_g1_ParamLimits

0x884a,	// (0x00037893) popup_note2_image_window_g1

0x8856,	// (0x0003789f) popup_note2_image_window_g2_ParamLimits

0x8856,	// (0x0003789f) popup_note2_image_window_g2

0x0001,

0xfc67,	// (0x0003ecb0) popup_note2_image_window_g_ParamLimits

0xfc67,	// (0x0003ecb0) popup_note2_image_window_g

0x8868,	// (0x000378b1) popup_note2_image_window_t1_ParamLimits

0x8868,	// (0x000378b1) popup_note2_image_window_t1

0x8880,	// (0x000378c9) popup_note2_image_window_t2_ParamLimits

0x8880,	// (0x000378c9) popup_note2_image_window_t2

0x8898,	// (0x000378e1) popup_note2_image_window_t3_ParamLimits

0x8898,	// (0x000378e1) popup_note2_image_window_t3

0x0002,

0xfc6c,	// (0x0003ecb5) popup_note2_image_window_t_ParamLimits

0xfc6c,	// (0x0003ecb5) popup_note2_image_window_t

0x5b58,	// (0x00034ba1) popup_note2_wait_window_g1_ParamLimits

0x5b58,	// (0x00034ba1) popup_note2_wait_window_g1

0x88b4,	// (0x000378fd) popup_note2_wait_window_g2_ParamLimits

0x88b4,	// (0x000378fd) popup_note2_wait_window_g2

0x5b70,	// (0x00034bb9) popup_note2_wait_window_g3_ParamLimits

0x5b70,	// (0x00034bb9) popup_note2_wait_window_g3

0x0002,

0xfc73,	// (0x0003ecbc) popup_note2_wait_window_g_ParamLimits

0xfc73,	// (0x0003ecbc) popup_note2_wait_window_g

0x88c0,	// (0x00037909) popup_note2_wait_window_t1_ParamLimits

0x88c0,	// (0x00037909) popup_note2_wait_window_t1

0x88de,	// (0x00037927) popup_note2_wait_window_t2_ParamLimits

0x88de,	// (0x00037927) popup_note2_wait_window_t2

0x88fc,	// (0x00037945) popup_note2_wait_window_t3_ParamLimits

0x88fc,	// (0x00037945) popup_note2_wait_window_t3

0x890e,	// (0x00037957) popup_note2_wait_window_t4_ParamLimits

0x890e,	// (0x00037957) popup_note2_wait_window_t4

0x0003,

0xfc7a,	// (0x0003ecc3) popup_note2_wait_window_t_ParamLimits

0xfc7a,	// (0x0003ecc3) popup_note2_wait_window_t

0x8920,	// (0x00037969) wait_bar2_pane_ParamLimits

0x8920,	// (0x00037969) wait_bar2_pane

0x8938,	// (0x00037981) popup_snote2_single_text_window_g1_ParamLimits

0x8938,	// (0x00037981) popup_snote2_single_text_window_g1

0x8960,	// (0x000379a9) popup_snote2_single_text_window_t1_ParamLimits

0x8960,	// (0x000379a9) popup_snote2_single_text_window_t1

0x89ac,	// (0x000379f5) popup_snote2_single_text_window_t2_ParamLimits

0x89ac,	// (0x000379f5) popup_snote2_single_text_window_t2

0x89f8,	// (0x00037a41) popup_snote2_single_text_window_t3_ParamLimits

0x89f8,	// (0x00037a41) popup_snote2_single_text_window_t3

0x8a39,	// (0x00037a82) popup_snote2_single_text_window_t4_ParamLimits

0x8a39,	// (0x00037a82) popup_snote2_single_text_window_t4

0x8a6f,	// (0x00037ab8) popup_snote2_single_text_window_t5_ParamLimits

0x8a6f,	// (0x00037ab8) popup_snote2_single_text_window_t5

0x0004,

0xfc83,	// (0x0003eccc) popup_snote2_single_text_window_t_ParamLimits

0xfc83,	// (0x0003eccc) popup_snote2_single_text_window_t

0x8a9a,	// (0x00037ae3) popup_snote2_single_graphic_window_g1_ParamLimits

0x8a9a,	// (0x00037ae3) popup_snote2_single_graphic_window_g1

0x8ac2,	// (0x00037b0b) popup_snote2_single_graphic_window_g2_ParamLimits

0x8ac2,	// (0x00037b0b) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8e,	// (0x0003ecd7) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8e,	// (0x0003ecd7) popup_snote2_single_graphic_window_g

0x8aea,	// (0x00037b33) popup_snote2_single_graphic_window_t1_ParamLimits

0x8aea,	// (0x00037b33) popup_snote2_single_graphic_window_t1

0x8b36,	// (0x00037b7f) popup_snote2_single_graphic_window_t2_ParamLimits

0x8b36,	// (0x00037b7f) popup_snote2_single_graphic_window_t2

0x89f8,	// (0x00037a41) popup_snote2_single_graphic_window_t3_ParamLimits

0x89f8,	// (0x00037a41) popup_snote2_single_graphic_window_t3

0x8a39,	// (0x00037a82) popup_snote2_single_graphic_window_t4_ParamLimits

0x8a39,	// (0x00037a82) popup_snote2_single_graphic_window_t4

0x8a6f,	// (0x00037ab8) popup_snote2_single_graphic_window_t5_ParamLimits

0x8a6f,	// (0x00037ab8) popup_snote2_single_graphic_window_t5

0x0004,

0xfc93,	// (0x0003ecdc) popup_snote2_single_graphic_window_t_ParamLimits

0xfc93,	// (0x0003ecdc) popup_snote2_single_graphic_window_t

0x7569,	// (0x000365b2) clock_nsta_pane_cp2_t1

0x7569,	// (0x000365b2) clock_nsta_pane_cp2_t2

0x0001,

0xfaa7,	// (0x0003eaf0) clock_nsta_pane_cp2_t

0x0abf,	// (0x0002fb08) form_field_data_wide_pane_g1_ParamLimits

0x3fe8,	// (0x00033031) form_field_data_wide_pane_g2_ParamLimits

0x3fe8,	// (0x00033031) form_field_data_wide_pane_g2

0x3ff4,	// (0x0003303d) form_field_data_wide_pane_g3_ParamLimits

0x3ff4,	// (0x0003303d) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0003e6c4) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0003e6c4) form_field_data_wide_pane_g

0xe0b6,	// (0x0003d0ff) grid_touch_3_pane_ParamLimits

0xe0b6,	// (0x0003d0ff) grid_touch_3_pane

0xe5aa,	// (0x0003d5f3) cell_touch_3_pane_ParamLimits

0xe5aa,	// (0x0003d5f3) cell_touch_3_pane

0x7ab7,	// (0x00036b00) cell_touch_3_pane_g1

0x7ab7,	// (0x00036b00) cell_touch_3_pane_g2

0x0001,

0xfb2c,	// (0x0003eb75) cell_touch_3_pane_g

0x3aaa,	// (0x00032af3) cont_query_data_pane

0x3ab2,	// (0x00032afb) cont_query_data_pane_cp1

0x8bb0,	// (0x00037bf9) button_value_adjust_pane_cp7

0x8bb8,	// (0x00037c01) query_popup_pane_cp3

0x474c,	// (0x00033795) bg_popup_sub_pane_cp22_ParamLimits

0x0e83,	// (0x0002fecc) navi_navi_volume_pane_cp2

0x0e9e,	// (0x0002fee7) popup_side_volume_key_window_g2

0x0ead,	// (0x0002fef6) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0003e75a) popup_side_volume_key_window_g

0x0eca,	// (0x0002ff13) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0003e761) popup_side_volume_key_window_t

0x4a03,	// (0x00033a4c) popup_side_volume_key_window_ParamLimits

0xbae4,	// (0x0003ab2d) list_double_graphic_pane_g4_ParamLimits

0xbae4,	// (0x0003ab2d) list_double_graphic_pane_g4

0xdf17,	// (0x0003cf60) list_single_2heading_msg_pane_ParamLimits

0xdf17,	// (0x0003cf60) list_single_2heading_msg_pane

0xc966,	// (0x0003b9af) list_single_2heading_msg_pane_g1_ParamLimits

0xc966,	// (0x0003b9af) list_single_2heading_msg_pane_g1

0xc972,	// (0x0003b9bb) list_single_2heading_msg_pane_g2_ParamLimits

0xc972,	// (0x0003b9bb) list_single_2heading_msg_pane_g2

0xc985,	// (0x0003b9ce) list_single_2heading_msg_pane_g3_ParamLimits

0xc985,	// (0x0003b9ce) list_single_2heading_msg_pane_g3

0xc991,	// (0x0003b9da) list_single_2heading_msg_pane_g4_ParamLimits

0xc991,	// (0x0003b9da) list_single_2heading_msg_pane_g4

0x0003,

0xfc9e,	// (0x0003ece7) list_single_2heading_msg_pane_g_ParamLimits

0xfc9e,	// (0x0003ece7) list_single_2heading_msg_pane_g

0xc9a9,	// (0x0003b9f2) list_single_2heading_msg_pane_t1_ParamLimits

0xc9a9,	// (0x0003b9f2) list_single_2heading_msg_pane_t1

0xc9d1,	// (0x0003ba1a) list_single_2heading_msg_pane_t2_ParamLimits

0xc9d1,	// (0x0003ba1a) list_single_2heading_msg_pane_t2

0xca3c,	// (0x0003ba85) list_single_2heading_msg_pane_t3_ParamLimits

0xca3c,	// (0x0003ba85) list_single_2heading_msg_pane_t3

0x35a5,	// (0x000325ee) list_single_2heading_msg_pane_t4_ParamLimits

0x35a5,	// (0x000325ee) list_single_2heading_msg_pane_t4

0x0003,

0xfca7,	// (0x0003ecf0) list_single_2heading_msg_pane_t_ParamLimits

0xfca7,	// (0x0003ecf0) list_single_2heading_msg_pane_t

0x3699,	// (0x000326e2) title_pane_g4_ParamLimits

0x3699,	// (0x000326e2) title_pane_g4

0x0c92,	// (0x0002fcdb) title_pane_stacon_g3_ParamLimits

0x0c92,	// (0x0002fcdb) title_pane_stacon_g3

0x86de,	// (0x00037727) list_single_2graphic_im_pane_g4_ParamLimits

0x86de,	// (0x00037727) list_single_2graphic_im_pane_g4

0x65a9,	// (0x000355f2) popup_side_volume_key_window_cp

0x6db9,	// (0x00035e02) main_idle_act2_pane_t1

0x18ad,	// (0x000308f6) toolbar_button_pane_g10

0xd3fc,	// (0x0003c445) popup_toolbar_window_cp1

0x755a,	// (0x000365a3) clock_nsta_pane_cp_t1

0x755a,	// (0x000365a3) clock_nsta_pane_cp_t2

0x0001,

0xfaa2,	// (0x0003eaeb) clock_nsta_pane_cp_t

0x0e83,	// (0x0002fecc) navi_navi_volume_pane_cp2_ParamLimits

0x0e92,	// (0x0002fedb) popup_side_volume_key_window_g1_ParamLimits

0x0e9e,	// (0x0002fee7) popup_side_volume_key_window_g2_ParamLimits

0x0ead,	// (0x0002fef6) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0003e75a) popup_side_volume_key_window_g_ParamLimits

0x1d15,	// (0x00030d5e) fep_hwr_aid_pane

0x1dbc,	// (0x00030e05) bg_fep_hwr_top_pane_g4_ParamLimits

0x7b1f,	// (0x00036b68) fep_hwr_top_pane_g1_ParamLimits

0x7b31,	// (0x00036b7a) fep_hwr_top_pane_g2_ParamLimits

0x1ddc,	// (0x00030e25) fep_hwr_top_pane_g3_ParamLimits

0xfaf7,	// (0x0003eb40) fep_hwr_top_pane_g_ParamLimits

0x1df1,	// (0x00030e3a) fep_hwr_top_text_pane_ParamLimits

0x636c,	// (0x000353b5) aid_touch_tab_arrow_arrow_2

0x6375,	// (0x000353be) aid_touch_tab_arrow_left_2

0x1d29,	// (0x00030d72) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1d60,	// (0x00030da9) fep_hwr_prediction_pane

0x7c91,	// (0x00036cda) fep_vkb_prediction_pane

0xe368,	// (0x0003d3b1) fep_vkb_side_pane_g3_ParamLimits

0xe368,	// (0x0003d3b1) fep_vkb_side_pane_g3

0x1f6c,	// (0x00030fb5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1fd8,	// (0x00031021) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1fe5,	// (0x0003102e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0003ebef) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x2114,	// (0x0003115d) fep_hwr_prediction_pane_g1

0x211e,	// (0x00031167) fep_hwr_prediction_pane_g2

0x2126,	// (0x0003116f) fep_hwr_prediction_pane_g3

0x212e,	// (0x00031177) fep_hwr_prediction_pane_g4

0x0003,

0xfcb0,	// (0x0003ecf9) fep_hwr_prediction_pane_g

0x8bdd,	// (0x00037c26) fep_vkb_prediction_pane_g1

0x8be7,	// (0x00037c30) fep_vkb_prediction_pane_g2

0x8bef,	// (0x00037c38) fep_vkb_prediction_pane_g3

0x8bf7,	// (0x00037c40) fep_vkb_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0003ed02) fep_vkb_prediction_pane_g

0x1b95,	// (0x00030bde) slider_set_pane_g3

0x1ba9,	// (0x00030bf2) slider_set_pane_g4

0x1bc1,	// (0x00030c0a) slider_set_pane_g5

0x1b95,	// (0x00030bde) slider_set_pane_g6

0x1bd7,	// (0x00030c20) slider_set_pane_g7

0x69fe,	// (0x00035a47) slider_form_pane_g3

0x6a07,	// (0x00035a50) slider_form_pane_g4

0x6a0f,	// (0x00035a58) slider_form_pane_g5

0x69fe,	// (0x00035a47) slider_form_pane_g6

0xdee9,	// (0x0003cf32) slider_form_pane_g7

0x7063,	// (0x000360ac) slider_set_pane_vc_g3

0x706c,	// (0x000360b5) slider_set_pane_vc_g4

0x7075,	// (0x000360be) slider_set_pane_vc_g5

0x7063,	// (0x000360ac) slider_set_pane_vc_g6

0x707e,	// (0x000360c7) slider_set_pane_vc_g7

0x723e,	// (0x00036287) slider_form_pane_vc_g1

0x7247,	// (0x00036290) slider_form_pane_vc_g2

0x7250,	// (0x00036299) slider_form_pane_vc_g3

0x723e,	// (0x00036287) slider_form_pane_vc_g4

0x7259,	// (0x000362a2) slider_form_pane_vc_g5

0x0004,

0xfa74,	// (0x0003eabd) slider_form_pane_vc_g

0x023e,	// (0x0002f287) main_idle_act3_pane

0x8bff,	// (0x00037c48) ai3_links_pane

0xe5f2,	// (0x0003d63b) popup_ai3_data_window_ParamLimits

0xe5f2,	// (0x0003d63b) popup_ai3_data_window

0x3651,	// (0x0003269a) grid_ai3_links_pane

0xe60c,	// (0x0003d655) cell_ai3_links_pane_ParamLimits

0xe60c,	// (0x0003d655) cell_ai3_links_pane

0x8c3a,	// (0x00037c83) bg_popup_sub_pane_cp11

0x8c47,	// (0x00037c90) cell_ai3_links_pane_g1

0x3651,	// (0x0003269a) bg_popup_sub_pane_cp12

0x8c6c,	// (0x00037cb5) heading_ai3_data_pane

0x8c74,	// (0x00037cbd) list_ai3_gene_pane

0x8c80,	// (0x00037cc9) popup_ai3_data_window_g1

0x8c88,	// (0x00037cd1) heading_ai3_data_pane_g1

0x8c90,	// (0x00037cd9) heading_ai3_data_pane_t1

0x8c9e,	// (0x00037ce7) list_double_ai3_gene_pane_ParamLimits

0x8c9e,	// (0x00037ce7) list_double_ai3_gene_pane

0x8cab,	// (0x00037cf4) list_single_ai3_gene_pane_ParamLimits

0x8cab,	// (0x00037cf4) list_single_ai3_gene_pane

0x7a7c,	// (0x00036ac5) list_highlight_pane_cp7_ParamLimits

0x7a7c,	// (0x00036ac5) list_highlight_pane_cp7

0x8cb8,	// (0x00037d01) list_single_a13_gene_pane_t1_ParamLimits

0x8cb8,	// (0x00037d01) list_single_a13_gene_pane_t1

0x8ccf,	// (0x00037d18) list_single_ai3_gene_pane_g1

0x8cd8,	// (0x00037d21) list_single_ai3_gene_pane_g2

0x0001,

0xfcc2,	// (0x0003ed0b) list_single_ai3_gene_pane_g

0x8ce0,	// (0x00037d29) list_double_ai3_gene_pane_g1_ParamLimits

0x8ce0,	// (0x00037d29) list_double_ai3_gene_pane_g1

0x8cec,	// (0x00037d35) list_double_ai3_gene_pane_t1_ParamLimits

0x8cec,	// (0x00037d35) list_double_ai3_gene_pane_t1

0x8d08,	// (0x00037d51) list_double_ai3_gene_pane_t2_ParamLimits

0x8d08,	// (0x00037d51) list_double_ai3_gene_pane_t2

0x8d1e,	// (0x00037d67) list_double_ai3_gene_pane_t3_ParamLimits

0x8d1e,	// (0x00037d67) list_double_ai3_gene_pane_t3

0x0002,

0xfcc7,	// (0x0003ed10) list_double_ai3_gene_pane_t_ParamLimits

0xfcc7,	// (0x0003ed10) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x34d6,	// (0x0003251f) aid_size_min_col_2

0xe5dc,	// (0x0003d625) aid_size_min_msg_ParamLimits

0xe5dc,	// (0x0003d625) aid_size_min_msg

0xe3a4,	// (0x0003d3ed) fep_vkb_top_text_pane_g2_ParamLimits

0xe3a4,	// (0x0003d3ed) fep_vkb_top_text_pane_g2

0x0001,

0xfb27,	// (0x0003eb70) fep_vkb_top_text_pane_g_ParamLimits

0xfb27,	// (0x0003eb70) fep_vkb_top_text_pane_g

0x023e,	// (0x0002f287) main_hc_apps_shell_pane

0x8d3b,	// (0x00037d84) grid_hc_apps_pane_ParamLimits

0x8d3b,	// (0x00037d84) grid_hc_apps_pane

0x8d4a,	// (0x00037d93) list_hc_apps_pane

0x8d52,	// (0x00037d9b) scroll_pane_cp37_ParamLimits

0x8d52,	// (0x00037d9b) scroll_pane_cp37

0xe626,	// (0x0003d66f) cell_hc_apps_pane_ParamLimits

0xe626,	// (0x0003d66f) cell_hc_apps_pane

0xe6e4,	// (0x0003d72d) cell_hc_apps_pane_g1_ParamLimits

0xe6e4,	// (0x0003d72d) cell_hc_apps_pane_g1

0x8e3d,	// (0x00037e86) cell_hc_apps_pane_g2_ParamLimits

0x8e3d,	// (0x00037e86) cell_hc_apps_pane_g2

0x8e59,	// (0x00037ea2) cell_hc_apps_pane_g3_ParamLimits

0x8e59,	// (0x00037ea2) cell_hc_apps_pane_g3

0x0002,

0xfcce,	// (0x0003ed17) cell_hc_apps_pane_g_ParamLimits

0xfcce,	// (0x0003ed17) cell_hc_apps_pane_g

0xe711,	// (0x0003d75a) cell_hc_apps_pane_t1_ParamLimits

0xe711,	// (0x0003d75a) cell_hc_apps_pane_t1

0x39ce,	// (0x00032a17) grid_highlight_pane_cp10_ParamLimits

0x39ce,	// (0x00032a17) grid_highlight_pane_cp10

0xe74f,	// (0x0003d798) list_single_hc_apps_pane_ParamLimits

0xe74f,	// (0x0003d798) list_single_hc_apps_pane

0xe77c,	// (0x0003d7c5) list_single_hc_apps_pane_g1

0xcaaa,	// (0x0003baf3) list_single_hc_apps_pane_g2

0x0001,

0xfcd5,	// (0x0003ed1e) list_single_hc_apps_pane_g

0xcac3,	// (0x0003bb0c) list_single_hc_apps_pane_g2_copy1

0xcadf,	// (0x0003bb28) list_single_hc_apps_pane_t1

0x3745,	// (0x0003278e) bg_set_opt_pane_cp_ParamLimits

0x049f,	// (0x0002f4e8) setting_slider_pane_t1_ParamLimits

0x04b8,	// (0x0002f501) setting_slider_pane_t2_ParamLimits

0x04d2,	// (0x0002f51b) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003e5a7) setting_slider_pane_t_ParamLimits

0x04ea,	// (0x0002f533) slider_set_pane_ParamLimits

0x11b6,	// (0x000301ff) control_pane_g5_ParamLimits

0x11b6,	// (0x000301ff) control_pane_g5

0x684d,	// (0x00035896) slider_set_pane_g1_ParamLimits

0x1b89,	// (0x00030bd2) slider_set_pane_g2_ParamLimits

0x1b95,	// (0x00030bde) slider_set_pane_g3_ParamLimits

0x1ba9,	// (0x00030bf2) slider_set_pane_g4_ParamLimits

0x1bc1,	// (0x00030c0a) slider_set_pane_g5_ParamLimits

0x1b95,	// (0x00030bde) slider_set_pane_g6_ParamLimits

0x1bd7,	// (0x00030c20) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0003e9a8) slider_set_pane_g_ParamLimits

0x4aef,	// (0x00033b38) navi_icon_text_pane_ParamLimits

0xd791,	// (0x0003c7da) aid_fill_nsta_2_ParamLimits

0xd7c8,	// (0x0003c811) aid_touch_tab_arrow_left_ParamLimits

0xd7de,	// (0x0003c827) aid_touch_tab_arrow_right_ParamLimits

0xd879,	// (0x0003c8c2) clock_nsta_pane_ParamLimits

0x634e,	// (0x00035397) navi_icon_pane_g1_ParamLimits

0x635a,	// (0x000353a3) navi_text_pane_t1_ParamLimits

0x7666,	// (0x000366af) navi_icon_text_pane_g1_ParamLimits

0x7672,	// (0x000366bb) navi_icon_text_pane_t1_ParamLimits

0xe77c,	// (0x0003d7c5) list_single_hc_apps_pane_g1_ParamLimits

0xcaaa,	// (0x0003baf3) list_single_hc_apps_pane_g2_ParamLimits

0xfcd5,	// (0x0003ed1e) list_single_hc_apps_pane_g_ParamLimits

0xcac3,	// (0x0003bb0c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcadf,	// (0x0003bb28) list_single_hc_apps_pane_t1_ParamLimits

0xb8b9,	// (0x0003a902) popup_toolbar2_fixed_window_ParamLimits

0xb8b9,	// (0x0003a902) popup_toolbar2_fixed_window

0xc73f,	// (0x0003b788) popup_toolbar2_float_window

0x3651,	// (0x0003269a) bg_popup_sub_pane_cp27

0x8f30,	// (0x00037f79) grid_toolbar2_float_pane

0x3651,	// (0x0003269a) bg_popup_sub_pane_cp26

0x8f30,	// (0x00037f79) grid_toolbar2_fixed_pane

0xe795,	// (0x0003d7de) cell_toolbar2_fixed_pane_ParamLimits

0xe795,	// (0x0003d7de) cell_toolbar2_fixed_pane

0xe7af,	// (0x0003d7f8) cell_toolbar2_fixed_pane_g1

0x8f51,	// (0x00037f9a) toolbar2_fixed_button_pane

0x54b7,	// (0x00034500) toolbar2_fixed_button_pane_g1

0x54c7,	// (0x00034510) toolbar2_fixed_button_pane_g2

0x54bf,	// (0x00034508) toolbar2_fixed_button_pane_g3

0x54d7,	// (0x00034520) toolbar2_fixed_button_pane_g4

0x54cf,	// (0x00034518) toolbar2_fixed_button_pane_g5

0x54df,	// (0x00034528) toolbar2_fixed_button_pane_g6

0x54e7,	// (0x00034530) toolbar2_fixed_button_pane_g7

0x54f7,	// (0x00034540) toolbar2_fixed_button_pane_g8

0x54ef,	// (0x00034538) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0003e8aa) toolbar2_fixed_button_pane_g

0x8f59,	// (0x00037fa2) cell_toolbar2_float_pane_ParamLimits

0x8f59,	// (0x00037fa2) cell_toolbar2_float_pane

0x8f6a,	// (0x00037fb3) cell_toolbar2_float_pane_g1

0x8f51,	// (0x00037f9a) toolbar2_fixed_button_pane_cp

0xe256,	// (0x0003d29f) fep_vkb_accented_list_pane_ParamLimits

0xe256,	// (0x0003d29f) fep_vkb_accented_list_pane

0x1f4c,	// (0x00030f95) bg_popup_fep_shadow_pane_g9

0x4c6f,	// (0x00033cb8) bg_popup_fep_shadow_pane_cp3

0x412e,	// (0x00033177) list_accented_list_pane

0x8f73,	// (0x00037fbc) list_single_accented_list_pane_ParamLimits

0x8f73,	// (0x00037fbc) list_single_accented_list_pane

0x4c6f,	// (0x00033cb8) list_highlight_pane_cp10

0x8f84,	// (0x00037fcd) list_single_accented_list_pane_t1

0xc669,	// (0x0003b6b2) popup_slider_window_ParamLimits

0xc669,	// (0x0003b6b2) popup_slider_window

0x8bc0,	// (0x00037c09) aid_indentation_list_msg

0xe8a6,	// (0x0003d8ef) bg_popup_window_pane_cp19

0x90b0,	// (0x000380f9) popup_slider_window_g1

0x90cc,	// (0x00038115) popup_slider_window_g2

0x90e8,	// (0x00038131) popup_slider_window_g3

0x0005,

0xfcda,	// (0x0003ed23) popup_slider_window_g

0x914e,	// (0x00038197) popup_slider_window_t1

0x91c2,	// (0x0003820b) small_volume_slider_vertical_pane

0x7ab7,	// (0x00036b00) small_volume_slider_vertical_pane_g1

0x7ab7,	// (0x00036b00) small_volume_slider_vertical_pane_g2

0x91de,	// (0x00038227) small_volume_slider_vertical_pane_g3

0x0002,

0xfcec,	// (0x0003ed35) small_volume_slider_vertical_pane_g

0xb827,	// (0x0003a870) area_side_right_pane_ParamLimits

0xb827,	// (0x0003a870) area_side_right_pane

0xcb0d,	// (0x0003bb56) aid_size_side_button_ParamLimits

0xcb0d,	// (0x0003bb56) aid_size_side_button

0xcb26,	// (0x0003bb6f) grid_sctrl_middle_pane_ParamLimits

0xcb26,	// (0x0003bb6f) grid_sctrl_middle_pane

0x2169,	// (0x000311b2) sctrl_sk_bottom_pane

0x217a,	// (0x000311c3) sctrl_sk_top_pane

0x218c,	// (0x000311d5) aid_touch_sctrl_top

0x2199,	// (0x000311e2) bg_sctrl_sk_pane_ParamLimits

0x2199,	// (0x000311e2) bg_sctrl_sk_pane

0x21a7,	// (0x000311f0) sctrl_sk_top_pane_g1

0x21b4,	// (0x000311fd) sctrl_sk_top_pane_t1

0x218c,	// (0x000311d5) aid_touch_sctrl_bottom

0x2199,	// (0x000311e2) bg_sctrl_sk_pane_cp_ParamLimits

0x2199,	// (0x000311e2) bg_sctrl_sk_pane_cp

0x21cf,	// (0x00031218) sctrl_sk_bottom_pane_g1

0x21b4,	// (0x000311fd) sctrl_sk_bottom_pane_t1

0xcb40,	// (0x0003bb89) cell_sctrl_middle_pane_ParamLimits

0xcb40,	// (0x0003bb89) cell_sctrl_middle_pane

0xcb51,	// (0x0003bb9a) aid_touch_sctrl_middle_ParamLimits

0xcb51,	// (0x0003bb9a) aid_touch_sctrl_middle

0xcb5e,	// (0x0003bba7) bg_sctrl_middle_pane_ParamLimits

0xcb5e,	// (0x0003bba7) bg_sctrl_middle_pane

0x283c,	// (0x00031885) cell_sctrl_middle_pane_g1_ParamLimits

0x283c,	// (0x00031885) cell_sctrl_middle_pane_g1

0xcb6c,	// (0x0003bbb5) cell_sctrl_middle_pane_g2_ParamLimits

0xcb6c,	// (0x0003bbb5) cell_sctrl_middle_pane_g2

0x0001,

0xfcf8,	// (0x0003ed41) cell_sctrl_middle_pane_g_ParamLimits

0xfcf8,	// (0x0003ed41) cell_sctrl_middle_pane_g

0x54b7,	// (0x00034500) bg_sctrl_middle_pane_g1

0x54bf,	// (0x00034508) bg_sctrl_middle_pane_g2

0x54c7,	// (0x00034510) bg_sctrl_middle_pane_g3

0x54cf,	// (0x00034518) bg_sctrl_middle_pane_g4

0x54d7,	// (0x00034520) bg_sctrl_middle_pane_g5

0x54df,	// (0x00034528) bg_sctrl_middle_pane_g6

0x54e7,	// (0x00034530) bg_sctrl_middle_pane_g7

0x54ef,	// (0x00034538) bg_sctrl_middle_pane_g8

0x0007,

0xfcfd,	// (0x0003ed46) bg_sctrl_middle_pane_g

0x54f7,	// (0x00034540) bg_sctrl_middle_pane_g8_copy1

0x54b7,	// (0x00034500) bg_sctrl_sk_pane_g1

0x54c7,	// (0x00034510) bg_sctrl_sk_pane_g2

0x54bf,	// (0x00034508) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0003e8aa) bg_sctrl_sk_pane_g

0x3f09,	// (0x00032f52) aid_size_touch_scroll_bar

0x54d7,	// (0x00034520) bg_sctrl_sk_pane_g4

0x54cf,	// (0x00034518) bg_sctrl_sk_pane_g5

0x54df,	// (0x00034528) bg_sctrl_sk_pane_g6

0x54e7,	// (0x00034530) bg_sctrl_sk_pane_g7

0x54f7,	// (0x00034540) bg_sctrl_sk_pane_g8

0x54ef,	// (0x00034538) bg_sctrl_sk_pane_g9

0x136a,	// (0x000303b3) popup_fep_china_hwr2_fs_candidate_window

0xc183,	// (0x0003b1cc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc183,	// (0x0003b1cc) popup_fep_china_hwr2_fs_control_window

0x1f6c,	// (0x00030fb5) sctrl_sk_top_pane_g2

0x0001,

0xfcf3,	// (0x0003ed3c) sctrl_sk_top_pane_g

0xe95e,	// (0x0003d9a7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe95e,	// (0x0003d9a7) aid_fep_china_hwr2_fs_cell

0xe972,	// (0x0003d9bb) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe972,	// (0x0003d9bb) bg_popup_fep_shadow_pane_cp4

0xe989,	// (0x0003d9d2) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe989,	// (0x0003d9d2) bg_popup_fep_shadow_pane_cp5

0xe99b,	// (0x0003d9e4) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe99b,	// (0x0003d9e4) popup_fep_china_hwr2_fs_control_bar_grid

0xe9af,	// (0x0003d9f8) popup_fep_china_hwr2_fs_control_funtion_grid

0x923a,	// (0x00038283) aid_fep_china_hwr2_fs_candi_cell

0x3651,	// (0x0003269a) bg_popup_fep_shadow_pane_cp6

0x9244,	// (0x0003828d) popup_fep_china_hwr2_fs_candidate_grid

0xe9b7,	// (0x0003da00) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe9b7,	// (0x0003da00) cell_fep_china_hwr2_fs_funtion_grid

0x7ab7,	// (0x00036b00) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9266,	// (0x000382af) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9266,	// (0x000382af) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9274,	// (0x000382bd) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9274,	// (0x000382bd) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0e,	// (0x0003ed57) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0e,	// (0x0003ed57) cell_fep_china_hwr2_fs_funtion_grid_g

0xe9cf,	// (0x0003da18) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe9cf,	// (0x0003da18) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe9e4,	// (0x0003da2d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe9e4,	// (0x0003da2d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd13,	// (0x0003ed5c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd13,	// (0x0003ed5c) cell_fep_china_hwr2_fs_funtion_grid_t

0x92bb,	// (0x00038304) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x92c3,	// (0x0003830c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x92cb,	// (0x00038314) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd18,	// (0x0003ed61) popup_fep_china_hwr2_fs_control_bar_grid_g

0x92d3,	// (0x0003831c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x92d3,	// (0x0003831c) cell_fep_china_hwr2_fs_candidate_grid

0x92ec,	// (0x00038335) popup_fep_china_hwr2_fs_candidate_grid_g20

0x92f4,	// (0x0003833d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7ab7,	// (0x00036b00) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7ab7,	// (0x00036b00) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2c,	// (0x0003eb75) cell_fep_china_hwr2_fs_candidate_grid_g

0x92fc,	// (0x00038345) cell_fep_china_hwr2_fs_candidate_grid_t1

0x50ad,	// (0x000340f6) clock_nsta_pane_cp_24_ParamLimits

0x50ad,	// (0x000340f6) clock_nsta_pane_cp_24

0x512b,	// (0x00034174) indicator_nsta_pane_cp_24_ParamLimits

0x512b,	// (0x00034174) indicator_nsta_pane_cp_24

0x61ca,	// (0x00035213) heading_pane_g1

0x0001,

0xf8c6,	// (0x0003e90f) heading_pane_g

0x6c02,	// (0x00035c4b) grid_sct_catagory_button_pane

0x6c32,	// (0x00035c7b) scroll_pane_cp5_ParamLimits

0x76b4,	// (0x000366fd) button_value_adjust_pane_cp5_ParamLimits

0x76b4,	// (0x000366fd) button_value_adjust_pane_cp5

0x7793,	// (0x000367dc) form2_midp_time_pane_ParamLimits

0x930a,	// (0x00038353) cell_sct_catagory_button_pane_ParamLimits

0x930a,	// (0x00038353) cell_sct_catagory_button_pane

0x7a7c,	// (0x00036ac5) bg_button_pane_cp01_ParamLimits

0x7a7c,	// (0x00036ac5) bg_button_pane_cp01

0x7ab7,	// (0x00036b00) cell_sct_catagory_button_pane_g1

0xc6e2,	// (0x0003b72b) popup_tb_extension_window

0xea00,	// (0x0003da49) aid_size_cell_ext_ParamLimits

0xea00,	// (0x0003da49) aid_size_cell_ext

0x3d4b,	// (0x00032d94) bg_tb_trans_pane_cp1_ParamLimits

0x3d4b,	// (0x00032d94) bg_tb_trans_pane_cp1

0xea26,	// (0x0003da6f) grid_tb_ext_pane_ParamLimits

0xea26,	// (0x0003da6f) grid_tb_ext_pane

0xea61,	// (0x0003daaa) cell_tb_ext_pane_ParamLimits

0xea61,	// (0x0003daaa) cell_tb_ext_pane

0xea89,	// (0x0003dad2) cell_tb_ext_pane_g1_ParamLimits

0xea89,	// (0x0003dad2) cell_tb_ext_pane_g1

0x939e,	// (0x000383e7) cell_tb_ext_pane_t1

0x39ce,	// (0x00032a17) list_highlight_pane_cp11_ParamLimits

0x39ce,	// (0x00032a17) list_highlight_pane_cp11

0xb8ce,	// (0x0003a917) popup_uni_indicator_window_ParamLimits

0xb8ce,	// (0x0003a917) popup_uni_indicator_window

0x3fda,	// (0x00033023) bg_popup_sub_pane_cp14

0x93b9,	// (0x00038402) list_uniindi_pane

0x93c5,	// (0x0003840e) uniindi_top_pane

0x39ce,	// (0x00032a17) bg_uniindi_top_pane

0x93e4,	// (0x0003842d) uniindi_top_pane_g1

0x93fa,	// (0x00038443) uniindi_top_pane_g2

0x0003,

0xfd1f,	// (0x0003ed68) uniindi_top_pane_g

0x9424,	// (0x0003846d) uniindi_top_pane_t1

0x944e,	// (0x00038497) list_single_uniindi_pane_ParamLimits

0x944e,	// (0x00038497) list_single_uniindi_pane

0x7ab7,	// (0x00036b00) bg_uniindi_top_pane_g1

0x9461,	// (0x000384aa) list_single_uniindi_pane_g1

0x9474,	// (0x000384bd) list_single_uniindi_pane_t1

0x023e,	// (0x0002f287) control_bg_pane

0x9499,	// (0x000384e2) bg_sctrl_sk_pane_cp1

0x94a2,	// (0x000384eb) bg_sctrl_sk_pane_cp2

0x94ab,	// (0x000384f4) control_bg_pane_g1

0x94b4,	// (0x000384fd) control_bg_pane_g2

0x0001,

0xfd28,	// (0x0003ed71) control_bg_pane_g

0x750e,	// (0x00036557) cell_indicator_nsta_pane_g1_ParamLimits

0xe0e3,	// (0x0003d12c) cell_indicator_nsta_pane_g2_ParamLimits

0xfa90,	// (0x0003ead9) cell_indicator_nsta_pane_g_ParamLimits

0x3287,	// (0x000322d0) form2_midp_time_pane_t1_ParamLimits

0x1d07,	// (0x00030d50) main_idle_act4_pane_ParamLimits

0x1d07,	// (0x00030d50) main_idle_act4_pane

0xc6e2,	// (0x0003b72b) popup_tb_extension_window_ParamLimits

0xea48,	// (0x0003da91) tb_ext_find_pane_ParamLimits

0xea48,	// (0x0003da91) tb_ext_find_pane

0x94bd,	// (0x00038506) ai_gene_pane_1_cp1

0x4db6,	// (0x00033dff) ai_gene_pane_2_cp1

0x94c5,	// (0x0003850e) list_single_idle_plugin_calendar_pane

0x94ce,	// (0x00038517) list_single_idle_plugin_notification_pane

0x94d7,	// (0x00038520) list_single_idle_plugin_player_pane

0xeaa6,	// (0x0003daef) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeaa6,	// (0x0003daef) list_single_idle_plugin_shortcut_pane

0xeace,	// (0x0003db17) main_idle_act4_pane_t1

0xeae4,	// (0x0003db2d) main_idle_act4_pane_t2

0x0001,

0xfd2d,	// (0x0003ed76) main_idle_act4_pane_t

0xeafa,	// (0x0003db43) middle_sk_idle_act4_pane_ParamLimits

0xeafa,	// (0x0003db43) middle_sk_idle_act4_pane

0xeb16,	// (0x0003db5f) popup_clock_digital_analogue_window_cp2

0xeb3e,	// (0x0003db87) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb3e,	// (0x0003db87) shortcut_wheel_idle_act4_pane

0x7ab7,	// (0x00036b00) shortcut_wheel_idle_act4_pane_g1

0x7ab7,	// (0x00036b00) shortcut_wheel_idle_act4_pane_g2

0x7ab7,	// (0x00036b00) shortcut_wheel_idle_act4_pane_g3

0x7ab7,	// (0x00036b00) shortcut_wheel_idle_act4_pane_g4

0x7ab7,	// (0x00036b00) shortcut_wheel_idle_act4_pane_g5

0x956a,	// (0x000385b3) shortcut_wheel_idle_act4_pane_g6

0x9572,	// (0x000385bb) shortcut_wheel_idle_act4_pane_g7

0x957a,	// (0x000385c3) shortcut_wheel_idle_act4_pane_g8

0x9582,	// (0x000385cb) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd32,	// (0x0003ed7b) shortcut_wheel_idle_act4_pane_g

0xe37c,	// (0x0003d3c5) middle_sk_idle_act4_pane_g1_ParamLimits

0xe37c,	// (0x0003d3c5) middle_sk_idle_act4_pane_g1

0xebbb,	// (0x0003dc04) middle_sk_idle_act4_pane_g2_ParamLimits

0xebbb,	// (0x0003dc04) middle_sk_idle_act4_pane_g2

0x0001,

0xfd55,	// (0x0003ed9e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd55,	// (0x0003ed9e) middle_sk_idle_act4_pane_g

0xebd3,	// (0x0003dc1c) middle_sk_idle_act4_pane_t1_ParamLimits

0xebd3,	// (0x0003dc1c) middle_sk_idle_act4_pane_t1

0xec02,	// (0x0003dc4b) grid_ai_shortcut_pane_ParamLimits

0xec02,	// (0x0003dc4b) grid_ai_shortcut_pane

0xec1f,	// (0x0003dc68) list_highlight_pane_cp16_ParamLimits

0xec1f,	// (0x0003dc68) list_highlight_pane_cp16

0xec2c,	// (0x0003dc75) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec2c,	// (0x0003dc75) list_single_idle_plugin_shortcut_pane_g1

0xec38,	// (0x0003dc81) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec38,	// (0x0003dc81) list_single_idle_plugin_shortcut_pane_g2

0xec54,	// (0x0003dc9d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec54,	// (0x0003dc9d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5a,	// (0x0003eda3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5a,	// (0x0003eda3) list_single_idle_plugin_shortcut_pane_g

0xec69,	// (0x0003dcb2) cell_ai_shortcut_pane_ParamLimits

0xec69,	// (0x0003dcb2) cell_ai_shortcut_pane

0xec7f,	// (0x0003dcc8) cell_ai_shortcut_pane_g1_ParamLimits

0xec7f,	// (0x0003dcc8) cell_ai_shortcut_pane_g1

0x94bd,	// (0x00038506) ai_gene_pane_1_cp2

0x96b2,	// (0x000386fb) ai_gene_pane_2_cp2

0x96ba,	// (0x00038703) list_highlight_pane_cp15

0x96c3,	// (0x0003870c) list_single_idle_plugin_calendar_pane_g1

0x96ba,	// (0x00038703) list_highlight_pane_cp17

0x96cb,	// (0x00038714) list_single_idle_plugin_calendar_pane_g1_copy1

0x96d3,	// (0x0003871c) list_single_idle_plugin_player_pane_g1

0x6e5b,	// (0x00035ea4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd61,	// (0x0003edaa) list_single_idle_plugin_player_pane_g

0x96db,	// (0x00038724) list_single_idle_plugin_player_pane_t1

0x96e9,	// (0x00038732) list_single_idle_plugin_player_pane_t2

0x96f7,	// (0x00038740) list_single_idle_plugin_player_pane_t3

0x9705,	// (0x0003874e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd66,	// (0x0003edaf) list_single_idle_plugin_player_pane_t

0x9713,	// (0x0003875c) wait_bar_pane_cp15

0x971b,	// (0x00038764) grid_ai_notification_pane

0x6e5b,	// (0x00035ea4) list_single_idle_plugin_notification_pane_g1

0xeca1,	// (0x0003dcea) cell_ai_notification_pane_ParamLimits

0xeca1,	// (0x0003dcea) cell_ai_notification_pane

0x9731,	// (0x0003877a) cell_ai_notification_pane_g1

0x9739,	// (0x00038782) cell_ai_notification_pane_t1

0xecae,	// (0x0003dcf7) tb_ext_find_button_pane

0xecb6,	// (0x0003dcff) tb_ext_find_pane_g1

0xecbe,	// (0x0003dd07) tb_ext_find_pane_t1

0x465c,	// (0x000336a5) tb_ext_find_button_pane_g1

0x9765,	// (0x000387ae) tb_ext_find_button_pane_g2

0x0001,

0xfd6f,	// (0x0003edb8) tb_ext_find_button_pane_g

0xeace,	// (0x0003db17) main_idle_act4_pane_t1_ParamLimits

0xeae4,	// (0x0003db2d) main_idle_act4_pane_t2_ParamLimits

0xfd2d,	// (0x0003ed76) main_idle_act4_pane_t_ParamLimits

0xeb16,	// (0x0003db5f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb2e,	// (0x0003db77) sat_plugin_idle_act4_pane_ParamLimits

0xeb2e,	// (0x0003db77) sat_plugin_idle_act4_pane

0xeccc,	// (0x0003dd15) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeccc,	// (0x0003dd15) sat_plugin_idle_act4_pane_t1

0xece4,	// (0x0003dd2d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xece4,	// (0x0003dd2d) sat_plugin_idle_act4_pane_t2

0xecfc,	// (0x0003dd45) sat_plugin_idle_act4_pane_t3_ParamLimits

0xecfc,	// (0x0003dd45) sat_plugin_idle_act4_pane_t3

0xed21,	// (0x0003dd6a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xed21,	// (0x0003dd6a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd74,	// (0x0003edbd) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd74,	// (0x0003edbd) sat_plugin_idle_act4_pane_t

0x0303,	// (0x0002f34c) popup_battery_window_ParamLimits

0x0303,	// (0x0002f34c) popup_battery_window

0x39ce,	// (0x00032a17) bg_popup_sub_pane_cp25_ParamLimits

0x39ce,	// (0x00032a17) bg_popup_sub_pane_cp25

0x97ba,	// (0x00038803) popup_battery_window_g1_ParamLimits

0x97ba,	// (0x00038803) popup_battery_window_g1

0x97c6,	// (0x0003880f) popup_battery_window_t1_ParamLimits

0x97c6,	// (0x0003880f) popup_battery_window_t1

0x97d8,	// (0x00038821) popup_battery_window_t2_ParamLimits

0x97d8,	// (0x00038821) popup_battery_window_t2

0x0001,

0xfd7d,	// (0x0003edc6) popup_battery_window_t_ParamLimits

0xfd7d,	// (0x0003edc6) popup_battery_window_t

0xd5f4,	// (0x0003c63d) midp_canvas_pane_ParamLimits

0xd651,	// (0x0003c69a) midp_keypad_pane_ParamLimits

0xd651,	// (0x0003c69a) midp_keypad_pane

0x4f93,	// (0x00033fdc) main_midp_pane_ParamLimits

0x7578,	// (0x000365c1) signal_pane_g2_cp_ParamLimits

0xed39,	// (0x0003dd82) aid_size_cell_midp_keypad_ParamLimits

0xed39,	// (0x0003dd82) aid_size_cell_midp_keypad

0xed57,	// (0x0003dda0) midp_keyp_game_grid_pane_ParamLimits

0xed57,	// (0x0003dda0) midp_keyp_game_grid_pane

0xed7e,	// (0x0003ddc7) midp_keyp_rocker_pane_ParamLimits

0xed7e,	// (0x0003ddc7) midp_keyp_rocker_pane

0xedcf,	// (0x0003de18) midp_keyp_sk_left_pane_ParamLimits

0xedcf,	// (0x0003de18) midp_keyp_sk_left_pane

0xee23,	// (0x0003de6c) midp_keyp_sk_right_pane_ParamLimits

0xee23,	// (0x0003de6c) midp_keyp_sk_right_pane

0x3651,	// (0x0003269a) bg_button_pane_cp03

0xee77,	// (0x0003dec0) midp_keyp_sk_left_pane_g1

0x3651,	// (0x0003269a) bg_button_pane_cp04

0xee77,	// (0x0003dec0) midp_keyp_sk_right_pane_g1

0x7ab7,	// (0x00036b00) midp_keyp_rocker_pane_g1

0xee80,	// (0x0003dec9) keyp_game_cell_pane_ParamLimits

0xee80,	// (0x0003dec9) keyp_game_cell_pane

0x3651,	// (0x0003269a) bg_button_pane_cp02

0xeea4,	// (0x0003deed) keyp_game_cell_pane_g1

0xb869,	// (0x0003a8b2) popup_fep_vkb2_window_ParamLimits

0xb869,	// (0x0003a8b2) popup_fep_vkb2_window

0xcb78,	// (0x0003bbc1) aid_size_cell_vkb2_ParamLimits

0xcb78,	// (0x0003bbc1) aid_size_cell_vkb2

0xcbae,	// (0x0003bbf7) popup_fep_vkb2_window_g1_ParamLimits

0xcbae,	// (0x0003bbf7) popup_fep_vkb2_window_g1

0xcbfe,	// (0x0003bc47) vkb2_area_bottom_pane_ParamLimits

0xcbfe,	// (0x0003bc47) vkb2_area_bottom_pane

0xcc52,	// (0x0003bc9b) vkb2_area_keypad_pane_ParamLimits

0xcc52,	// (0x0003bc9b) vkb2_area_keypad_pane

0xcc9a,	// (0x0003bce3) vkb2_area_top_pane_ParamLimits

0xcc9a,	// (0x0003bce3) vkb2_area_top_pane

0xcd20,	// (0x0003bd69) vkb2_top_entry_pane_ParamLimits

0xcd20,	// (0x0003bd69) vkb2_top_entry_pane

0xcd4d,	// (0x0003bd96) vkb2_top_grid_left_pane_ParamLimits

0xcd4d,	// (0x0003bd96) vkb2_top_grid_left_pane

0xcd6d,	// (0x0003bdb6) vkb2_top_grid_right_pane_ParamLimits

0xcd6d,	// (0x0003bdb6) vkb2_top_grid_right_pane

0x243b,	// (0x00031484) vkb2_cell_keypad_pane_ParamLimits

0x243b,	// (0x00031484) vkb2_cell_keypad_pane

0xcdb3,	// (0x0003bdfc) vkb2_area_bottom_grid_pane_ParamLimits

0xcdb3,	// (0x0003bdfc) vkb2_area_bottom_grid_pane

0xcddd,	// (0x0003be26) vkb2_area_bottom_pane_g1_ParamLimits

0xcddd,	// (0x0003be26) vkb2_area_bottom_pane_g1

0xce03,	// (0x0003be4c) vkb2_area_bottom_pane_g2_ParamLimits

0xce03,	// (0x0003be4c) vkb2_area_bottom_pane_g2

0xce34,	// (0x0003be7d) vkb2_area_bottom_pane_g3_ParamLimits

0xce34,	// (0x0003be7d) vkb2_area_bottom_pane_g3

0x0002,

0xfd82,	// (0x0003edcb) vkb2_area_bottom_pane_g_ParamLimits

0xfd82,	// (0x0003edcb) vkb2_area_bottom_pane_g

0x25e5,	// (0x0003162e) vkb2_top_cell_left_pane_ParamLimits

0x25e5,	// (0x0003162e) vkb2_top_cell_left_pane

0xeead,	// (0x0003def6) vkb2_top_entry_pane_g1_ParamLimits

0xeead,	// (0x0003def6) vkb2_top_entry_pane_g1

0xeebb,	// (0x0003df04) vkb2_top_entry_pane_t1_ParamLimits

0xeebb,	// (0x0003df04) vkb2_top_entry_pane_t1

0x9989,	// (0x000389d2) vkb2_top_entry_pane_t2_ParamLimits

0x9989,	// (0x000389d2) vkb2_top_entry_pane_t2

0x99bb,	// (0x00038a04) vkb2_top_entry_pane_t3_ParamLimits

0x99bb,	// (0x00038a04) vkb2_top_entry_pane_t3

0x0002,

0xfd89,	// (0x0003edd2) vkb2_top_entry_pane_t_ParamLimits

0xfd89,	// (0x0003edd2) vkb2_top_entry_pane_t

0xce9e,	// (0x0003bee7) vkb2_top_grid_right_pane_g1_ParamLimits

0xce9e,	// (0x0003bee7) vkb2_top_grid_right_pane_g1

0x2648,	// (0x00031691) vkb2_top_grid_right_pane_g2_ParamLimits

0x2648,	// (0x00031691) vkb2_top_grid_right_pane_g2

0x2660,	// (0x000316a9) vkb2_top_grid_right_pane_g3_ParamLimits

0x2660,	// (0x000316a9) vkb2_top_grid_right_pane_g3

0xceb4,	// (0x0003befd) vkb2_top_grid_right_pane_g4_ParamLimits

0xceb4,	// (0x0003befd) vkb2_top_grid_right_pane_g4

0x0003,

0xfd90,	// (0x0003edd9) vkb2_top_grid_right_pane_g_ParamLimits

0xfd90,	// (0x0003edd9) vkb2_top_grid_right_pane_g

0x268e,	// (0x000316d7) vkb2_top_cell_left_pane_g1

0x26a5,	// (0x000316ee) vkb2_cell_keypad_pane_g1_ParamLimits

0x26a5,	// (0x000316ee) vkb2_cell_keypad_pane_g1

0x99df,	// (0x00038a28) vkb2_cell_keypad_pane_t1_ParamLimits

0x99df,	// (0x00038a28) vkb2_cell_keypad_pane_t1

0x26b3,	// (0x000316fc) vkb2_cell_bottom_grid_pane_ParamLimits

0x26b3,	// (0x000316fc) vkb2_cell_bottom_grid_pane

0x26ec,	// (0x00031735) vkb2_cell_bottom_grid_pane_g1

0xeb5f,	// (0x0003dba8) aid_call2_pane_cp02

0xeb67,	// (0x0003dbb0) aid_call_pane_cp02

0xeb6f,	// (0x0003dbb8) clock_digital_number_pane_cp10

0xeb77,	// (0x0003dbc0) clock_digital_number_pane_cp11

0xeb7f,	// (0x0003dbc8) clock_digital_number_pane_cp12

0xeb87,	// (0x0003dbd0) clock_digital_number_pane_cp13

0xeb8f,	// (0x0003dbd8) clock_digital_separator_pane_cp10

0x465c,	// (0x000336a5) popup_clock_digital_analogue_window_cp2_g1

0x465c,	// (0x000336a5) popup_clock_digital_analogue_window_cp2_g2

0xeb97,	// (0x0003dbe0) popup_clock_digital_analogue_window_cp2_g3

0x465c,	// (0x000336a5) popup_clock_digital_analogue_window_cp2_g4

0xeb97,	// (0x0003dbe0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd45,	// (0x0003ed8e) popup_clock_digital_analogue_window_cp2_g

0xeb9f,	// (0x0003dbe8) popup_clock_digital_analogue_window_cp2_t1

0xebad,	// (0x0003dbf6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd50,	// (0x0003ed99) popup_clock_digital_analogue_window_cp2_t

0x7ab7,	// (0x00036b00) clock_digital_number_pane_cp10_g1

0x7ab7,	// (0x00036b00) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0003eb75) clock_digital_number_pane_cp10_g

0x7ab7,	// (0x00036b00) clock_digital_separator_pane_cp10_g1

0x7ab7,	// (0x00036b00) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0003eb75) clock_digital_separator_pane_cp10_g

0x9406,	// (0x0003844f) uniindi_top_pane_g3

0x9417,	// (0x00038460) uniindi_top_pane_g4

0x24c6,	// (0x0003150f) vkb2_row_keypad_pane_ParamLimits

0x24c6,	// (0x0003150f) vkb2_row_keypad_pane

0x2708,	// (0x00031751) vkb2_cell_t_keypad_pane_ParamLimits

0x2708,	// (0x00031751) vkb2_cell_t_keypad_pane

0x2718,	// (0x00031761) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2718,	// (0x00031761) vkb2_cell_t_keypad_pane_cp08

0x272b,	// (0x00031774) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x272b,	// (0x00031774) vkb2_cell_t_keypad_pane_cp09

0x273f,	// (0x00031788) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x273f,	// (0x00031788) vkb2_cell_t_keypad_pane_cp01

0x2750,	// (0x00031799) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2750,	// (0x00031799) vkb2_cell_t_keypad_pane_cp02

0x2761,	// (0x000317aa) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2761,	// (0x000317aa) vkb2_cell_t_keypad_pane_cp03

0x2772,	// (0x000317bb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2772,	// (0x000317bb) vkb2_cell_t_keypad_pane_cp04

0x2783,	// (0x000317cc) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2783,	// (0x000317cc) vkb2_cell_t_keypad_pane_cp05

0x2794,	// (0x000317dd) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2794,	// (0x000317dd) vkb2_cell_t_keypad_pane_cp06

0x27a5,	// (0x000317ee) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x27a5,	// (0x000317ee) vkb2_cell_t_keypad_pane_cp07

0x27b6,	// (0x000317ff) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x27b6,	// (0x000317ff) vkb2_cell_t_keypad_pane_cp10

0x1f6c,	// (0x00030fb5) vkb2_cell_t_keypad_pane_g1

0x99f6,	// (0x00038a3f) vkb2_cell_t_keypad_pane_t1

0x023e,	// (0x0002f287) popup_grid_graphic2_window

0xeef4,	// (0x0003df3d) aid_size_cell_graphic2_ParamLimits

0xeef4,	// (0x0003df3d) aid_size_cell_graphic2

0xef32,	// (0x0003df7b) bg_popup_window_pane_cp21_ParamLimits

0xef32,	// (0x0003df7b) bg_popup_window_pane_cp21

0xef40,	// (0x0003df89) graphic2_pages_pane_ParamLimits

0xef40,	// (0x0003df89) graphic2_pages_pane

0xef96,	// (0x0003dfdf) grid_graphic2_control_pane_ParamLimits

0xef96,	// (0x0003dfdf) grid_graphic2_control_pane

0xefde,	// (0x0003e027) grid_graphic2_pane_ParamLimits

0xefde,	// (0x0003e027) grid_graphic2_pane

0xf065,	// (0x0003e0ae) cell_graphic2_pane

0x023e,	// (0x0002f287) main_comp_mode_pane

0x8c74,	// (0x00037cbd) list_ai3_gene_pane_ParamLimits

0xe8a6,	// (0x0003d8ef) bg_popup_window_pane_cp19_ParamLimits

0x9054,	// (0x0003809d) bg_touch_area_indi_pane_ParamLimits

0x9054,	// (0x0003809d) bg_touch_area_indi_pane

0x906a,	// (0x000380b3) bg_touch_area_indi_pane_cp01_ParamLimits

0x906a,	// (0x000380b3) bg_touch_area_indi_pane_cp01

0x9080,	// (0x000380c9) bg_touch_area_indi_pane_cp02_ParamLimits

0x9080,	// (0x000380c9) bg_touch_area_indi_pane_cp02

0x9096,	// (0x000380df) bg_touch_area_indi_pane_cp03_ParamLimits

0x9096,	// (0x000380df) bg_touch_area_indi_pane_cp03

0x90b0,	// (0x000380f9) popup_slider_window_g1_ParamLimits

0x90cc,	// (0x00038115) popup_slider_window_g2_ParamLimits

0x90e8,	// (0x00038131) popup_slider_window_g3_ParamLimits

0xfcda,	// (0x0003ed23) popup_slider_window_g_ParamLimits

0x914e,	// (0x00038197) popup_slider_window_t1_ParamLimits

0x91c2,	// (0x0003820b) small_volume_slider_vertical_pane_ParamLimits

0xf065,	// (0x0003e0ae) cell_graphic2_pane_ParamLimits

0xf0c0,	// (0x0003e109) bg_button_pane_cp10_ParamLimits

0xf0c0,	// (0x0003e109) bg_button_pane_cp10

0xf0d3,	// (0x0003e11c) bg_button_pane_cp11_ParamLimits

0xf0d3,	// (0x0003e11c) bg_button_pane_cp11

0xf0e6,	// (0x0003e12f) graphic2_pages_pane_g1_ParamLimits

0xf0e6,	// (0x0003e12f) graphic2_pages_pane_g1

0xf101,	// (0x0003e14a) graphic2_pages_pane_g2_ParamLimits

0xf101,	// (0x0003e14a) graphic2_pages_pane_g2

0x0001,

0xfd9e,	// (0x0003ede7) graphic2_pages_pane_g_ParamLimits

0xfd9e,	// (0x0003ede7) graphic2_pages_pane_g

0xf119,	// (0x0003e162) graphic2_pages_pane_t1_ParamLimits

0xf119,	// (0x0003e162) graphic2_pages_pane_t1

0xf131,	// (0x0003e17a) cell_graphic2_control_pane_ParamLimits

0xf131,	// (0x0003e17a) cell_graphic2_control_pane

0xf163,	// (0x0003e1ac) cell_graphic2_pane_g1_ParamLimits

0xf163,	// (0x0003e1ac) cell_graphic2_pane_g1

0xe38a,	// (0x0003d3d3) cell_graphic2_pane_g2_ParamLimits

0xe38a,	// (0x0003d3d3) cell_graphic2_pane_g2

0xed14,	// (0x0003dd5d) cell_graphic2_pane_g3_ParamLimits

0xed14,	// (0x0003dd5d) cell_graphic2_pane_g3

0xe397,	// (0x0003d3e0) cell_graphic2_pane_g4_ParamLimits

0xe397,	// (0x0003d3e0) cell_graphic2_pane_g4

0xf170,	// (0x0003e1b9) cell_graphic2_pane_g5_ParamLimits

0xf170,	// (0x0003e1b9) cell_graphic2_pane_g5

0x0004,

0xfda3,	// (0x0003edec) cell_graphic2_pane_g_ParamLimits

0xfda3,	// (0x0003edec) cell_graphic2_pane_g

0xf190,	// (0x0003e1d9) cell_graphic2_pane_t1_ParamLimits

0xf190,	// (0x0003e1d9) cell_graphic2_pane_t1

0x61be,	// (0x00035207) grid_highlight_pane_cp11_ParamLimits

0x61be,	// (0x00035207) grid_highlight_pane_cp11

0x39ce,	// (0x00032a17) bg_button_pane_cp05

0xf1d9,	// (0x0003e222) cell_graphic2_control_pane_g1

0x7ab7,	// (0x00036b00) bg_touch_area_indi_pane_g1

0x9cd2,	// (0x00038d1b) aid_cmod_rocker_key_size

0x9cdc,	// (0x00038d25) aid_cmode_itu_key_size

0x9ce6,	// (0x00038d2f) main_cmode_video_pane

0x9cf0,	// (0x00038d39) main_comp_mode_itu_pane

0x9cfc,	// (0x00038d45) main_comp_mode_rocker_pane

0x9d08,	// (0x00038d51) cell_cmode_rocker_pane_ParamLimits

0x9d08,	// (0x00038d51) cell_cmode_rocker_pane

0x9d3b,	// (0x00038d84) cell_cmode_itu_pane_ParamLimits

0x9d3b,	// (0x00038d84) cell_cmode_itu_pane

0x3fda,	// (0x00033023) bg_button_pane_cp06_ParamLimits

0x3fda,	// (0x00033023) bg_button_pane_cp06

0x7d41,	// (0x00036d8a) cell_cmode_rocker_pane_g1_ParamLimits

0x7d41,	// (0x00036d8a) cell_cmode_rocker_pane_g1

0x9266,	// (0x000382af) cell_cmode_rocker_pane_g2_ParamLimits

0x9266,	// (0x000382af) cell_cmode_rocker_pane_g2

0x0001,

0xfdb3,	// (0x0003edfc) cell_cmode_rocker_pane_g_ParamLimits

0xfdb3,	// (0x0003edfc) cell_cmode_rocker_pane_g

0x3651,	// (0x0003269a) bg_button_pane_cp07

0x9d50,	// (0x00038d99) cell_cmode_itu_pane_g1

0x9d59,	// (0x00038da2) cell_cmode_itu_pane_t1

0x9d67,	// (0x00038db0) cell_cmode_itu_pane_t2

0x0001,

0xfdb8,	// (0x0003ee01) cell_cmode_itu_pane_t

0x9489,	// (0x000384d2) aid_touch_ctrl_left

0x9491,	// (0x000384da) aid_touch_ctrl_right

0x3651,	// (0x0003269a) compa_mode_pane

0xf1fd,	// (0x0003e246) aid_cmod_rocker_key_size_cp

0xf207,	// (0x0003e250) aid_cmode_itu_key_size_cp

0x9d89,	// (0x00038dd2) compa_mode_pane_g1

0x9d91,	// (0x00038dda) compa_mode_pane_g2

0x9d99,	// (0x00038de2) compa_mode_pane_g3

0x0002,

0xfdbd,	// (0x0003ee06) compa_mode_pane_g

0xf211,	// (0x0003e25a) main_comp_mode_itu_pane_cp

0xf219,	// (0x0003e262) main_comp_mode_rocker_pane_cp

0xf221,	// (0x0003e26a) cell_cmode_itu_pane_cp_ParamLimits

0xf221,	// (0x0003e26a) cell_cmode_itu_pane_cp

0xf236,	// (0x0003e27f) cell_cmode_rocker_pane_cp_ParamLimits

0xf236,	// (0x0003e27f) cell_cmode_rocker_pane_cp

0x3fda,	// (0x00033023) bg_button_pane_cp06_cp_ParamLimits

0x3fda,	// (0x00033023) bg_button_pane_cp06_cp

0x7d41,	// (0x00036d8a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7d41,	// (0x00036d8a) cell_cmode_rocker_pane_g1_cp

0x7ab7,	// (0x00036b00) cell_cmode_rocker_pane_g2_cp

0x3651,	// (0x0003269a) bg_button_pane_cp07_cp

0xf248,	// (0x0003e291) cell_cmode_itu_pane_g1_cp

0xf251,	// (0x0003e29a) cell_cmode_itu_pane_t1_cp

0xf251,	// (0x0003e29a) cell_cmode_itu_pane_t2_cp

0xdedf,	// (0x0003cf28) settings_code_pane_cp2

0x3745,	// (0x0003278e) bg_popup_window_pane_cp3_ParamLimits

0x3bce,	// (0x00032c17) heading_pane_cp3_ParamLimits

0x3bda,	// (0x00032c23) listscroll_popup_graphic_pane_ParamLimits

0x1d15,	// (0x00030d5e) fep_hwr_aid_pane_ParamLimits

0x218c,	// (0x000311d5) aid_touch_sctrl_top_ParamLimits

0x21a7,	// (0x000311f0) sctrl_sk_top_pane_g1_ParamLimits

0x1f6c,	// (0x00030fb5) sctrl_sk_top_pane_g2_ParamLimits

0xfcf3,	// (0x0003ed3c) sctrl_sk_top_pane_g_ParamLimits

0x21b4,	// (0x000311fd) sctrl_sk_top_pane_t1_ParamLimits

0x218c,	// (0x000311d5) aid_touch_sctrl_bottom_ParamLimits

0x21b4,	// (0x000311fd) sctrl_sk_bottom_pane_t1_ParamLimits

0x93d2,	// (0x0003841b) aid_area_touch_clock

0xcce2,	// (0x0003bd2b) aid_vkb2_area_top_pane_cell_ParamLimits

0xcce2,	// (0x0003bd2b) aid_vkb2_area_top_pane_cell

0xcd8d,	// (0x0003bdd6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcd8d,	// (0x0003bdd6) aid_vkb2_area_bottom_pane_cell

0x9941,	// (0x0003898a) popup_char_count_window

0x9de6,	// (0x00038e2f) popup_char_count_window_g1

0x9def,	// (0x00038e38) popup_char_count_window_g2

0x9df8,	// (0x00038e41) popup_char_count_window_g3

0x0002,

0xfdc4,	// (0x0003ee0d) popup_char_count_window_g

0x9e01,	// (0x00038e4a) popup_char_count_window_t1

0x2263,	// (0x000312ac) popup_fep_char_preview_window_ParamLimits

0x2263,	// (0x000312ac) popup_fep_char_preview_window

0xcd02,	// (0x0003bd4b) vkb2_top_candi_pane_ParamLimits

0xcd02,	// (0x0003bd4b) vkb2_top_candi_pane

0xf25f,	// (0x0003e2a8) cell_vkb2_top_candi_pane_ParamLimits

0xf25f,	// (0x0003e2a8) cell_vkb2_top_candi_pane

0x27cb,	// (0x00031814) bg_popup_fep_char_preview_window_ParamLimits

0x27cb,	// (0x00031814) bg_popup_fep_char_preview_window

0x27d9,	// (0x00031822) popup_fep_char_preview_window_t1_ParamLimits

0x27d9,	// (0x00031822) popup_fep_char_preview_window_t1

0x9e5c,	// (0x00038ea5) bg_popup_fep_char_preview_window_g1

0x9e64,	// (0x00038ead) bg_popup_fep_char_preview_window_g2

0x9e6c,	// (0x00038eb5) bg_popup_fep_char_preview_window_g3

0x9e74,	// (0x00038ebd) bg_popup_fep_char_preview_window_g4

0x9e7c,	// (0x00038ec5) bg_popup_fep_char_preview_window_g5

0x2813,	// (0x0003185c) bg_popup_fep_char_preview_window_g6

0x9e84,	// (0x00038ecd) bg_popup_fep_char_preview_window_g7

0x9e8c,	// (0x00038ed5) bg_popup_fep_char_preview_window_g8

0x9e94,	// (0x00038edd) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcb,	// (0x0003ee14) bg_popup_fep_char_preview_window_g

0x1f6c,	// (0x00030fb5) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1f6c,	// (0x00030fb5) cell_vkb2_top_candi_pane_g1

0x1f7a,	// (0x00030fc3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1f7a,	// (0x00030fc3) cell_vkb2_top_candi_pane_g2

0x9d1a,	// (0x00038d63) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9d1a,	// (0x00038d63) cell_vkb2_top_candi_pane_g3

0x281b,	// (0x00031864) cell_vkb2_top_candi_pane_g4_ParamLimits

0x281b,	// (0x00031864) cell_vkb2_top_candi_pane_g4

0x820c,	// (0x00037255) cell_vkb2_top_candi_pane_g5_ParamLimits

0x820c,	// (0x00037255) cell_vkb2_top_candi_pane_g5

0x283c,	// (0x00031885) cell_vkb2_top_candi_pane_g6_ParamLimits

0x283c,	// (0x00031885) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdde,	// (0x0003ee27) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdde,	// (0x0003ee27) cell_vkb2_top_candi_pane_g

0x284a,	// (0x00031893) cell_vkb2_top_candi_pane_t1

0x1b75,	// (0x00030bbe) aid_size_touch_slider_mark_ParamLimits

0x1b75,	// (0x00030bbe) aid_size_touch_slider_mark

0xef7c,	// (0x0003dfc5) grid_graphic2_catg_pane_ParamLimits

0xef7c,	// (0x0003dfc5) grid_graphic2_catg_pane

0xf038,	// (0x0003e081) popup_grid_graphic2_window_t1_ParamLimits

0xf038,	// (0x0003e081) popup_grid_graphic2_window_t1

0xf04e,	// (0x0003e097) popup_grid_graphic2_window_t2_ParamLimits

0xf04e,	// (0x0003e097) popup_grid_graphic2_window_t2

0x0001,

0xfd99,	// (0x0003ede2) popup_grid_graphic2_window_t_ParamLimits

0xfd99,	// (0x0003ede2) popup_grid_graphic2_window_t

0x39ce,	// (0x00032a17) bg_button_pane_cp05_ParamLimits

0xf1d9,	// (0x0003e222) cell_graphic2_control_pane_g1_ParamLimits

0xf2c5,	// (0x0003e30e) cell_graphic2_catg_pane_ParamLimits

0xf2c5,	// (0x0003e30e) cell_graphic2_catg_pane

0x3651,	// (0x0003269a) bg_button_pane_cp12

0xf2d7,	// (0x0003e320) cell_graphic2_catg_pane_g1

0x939e,	// (0x000383e7) cell_tb_ext_pane_t1_ParamLimits

0x2605,	// (0x0003164e) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2605,	// (0x0003164e) vkb2_top_cell_right_narrow_pane

0x261d,	// (0x00031666) vkb2_top_cell_right_wide_pane_ParamLimits

0x261d,	// (0x00031666) vkb2_top_cell_right_wide_pane

0x1d07,	// (0x00030d50) bg_vkb2_func_pane_ParamLimits

0x1d07,	// (0x00030d50) bg_vkb2_func_pane

0x268e,	// (0x000316d7) vkb2_top_cell_left_pane_g1_ParamLimits

0x1d07,	// (0x00030d50) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1d07,	// (0x00030d50) bg_vkb2_fuc_pane_cp03

0x26ec,	// (0x00031735) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x54bf,	// (0x00034508) bg_vkb2_func_pane_g1

0x54c7,	// (0x00034510) bg_vkb2_func_pane_g2

0x54d7,	// (0x00034520) bg_vkb2_func_pane_g3

0x54cf,	// (0x00034518) bg_vkb2_func_pane_g4

0x54df,	// (0x00034528) bg_vkb2_func_pane_g5

0x54e7,	// (0x00034530) bg_vkb2_func_pane_g6

0x54ef,	// (0x00034538) bg_vkb2_func_pane_g7

0x54f7,	// (0x00034540) bg_vkb2_func_pane_g8

0x54b7,	// (0x00034500) bg_vkb2_func_pane_g9

0x0008,

0xfdeb,	// (0x0003ee34) bg_vkb2_func_pane_g

0x1d07,	// (0x00030d50) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1d07,	// (0x00030d50) bg_vkb2_fuc_pane_cp01

0x268e,	// (0x000316d7) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x268e,	// (0x000316d7) vkb2_top_cell_right_wide_pane_g1

0x1d07,	// (0x00030d50) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1d07,	// (0x00030d50) bg_vkb2_fuc_pane_cp02

0x26ec,	// (0x00031735) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x26ec,	// (0x00031735) vkb2_top_cell_right_narrow_pane_g1

0xe7e8,	// (0x0003d831) aid_touch_area_decrease_ParamLimits

0xe7e8,	// (0x0003d831) aid_touch_area_decrease

0xe822,	// (0x0003d86b) aid_touch_area_increase_ParamLimits

0xe822,	// (0x0003d86b) aid_touch_area_increase

0xe84a,	// (0x0003d893) aid_touch_area_mute_ParamLimits

0xe84a,	// (0x0003d893) aid_touch_area_mute

0xe872,	// (0x0003d8bb) aid_touch_area_slider_ParamLimits

0xe872,	// (0x0003d8bb) aid_touch_area_slider

0xe8b2,	// (0x0003d8fb) popup_slider_window_g4_ParamLimits

0xe8b2,	// (0x0003d8fb) popup_slider_window_g4

0xe8da,	// (0x0003d923) popup_slider_window_g5_ParamLimits

0xe8da,	// (0x0003d923) popup_slider_window_g5

0xe90e,	// (0x0003d957) popup_slider_window_g6_ParamLimits

0xe90e,	// (0x0003d957) popup_slider_window_g6

0x917c,	// (0x000381c5) popup_slider_window_t2_ParamLimits

0x917c,	// (0x000381c5) popup_slider_window_t2

0x0001,

0xfce7,	// (0x0003ed30) popup_slider_window_t_ParamLimits

0xfce7,	// (0x0003ed30) popup_slider_window_t

0xe92a,	// (0x0003d973) slider_pane_ParamLimits

0xe92a,	// (0x0003d973) slider_pane

0x9eb7,	// (0x00038f00) slider_pane_g1_ParamLimits

0x9eb7,	// (0x00038f00) slider_pane_g1

0x9ecb,	// (0x00038f14) slider_pane_g2_ParamLimits

0x9ecb,	// (0x00038f14) slider_pane_g2

0x9ee1,	// (0x00038f2a) slider_pane_g3_ParamLimits

0x9ee1,	// (0x00038f2a) slider_pane_g3

0x0003,

0xfdfe,	// (0x0003ee47) slider_pane_g_ParamLimits

0xfdfe,	// (0x0003ee47) slider_pane_g

0xc72a,	// (0x0003b773) popup_tb_float_extension_window_ParamLimits

0xc72a,	// (0x0003b773) popup_tb_float_extension_window

0x9f0d,	// (0x00038f56) aid_size_cell_tb_float_ext

0x3651,	// (0x0003269a) bg_popup_sub_window_cp28

0x9f19,	// (0x00038f62) grid_tb_float_ext_pane

0x9f23,	// (0x00038f6c) cell_tb_float_ext_pane_ParamLimits

0x9f23,	// (0x00038f6c) cell_tb_float_ext_pane

0x9f3d,	// (0x00038f86) cell_tb_float_ext_pane_g1

0x9f46,	// (0x00038f8f) grid_highlight_pane_cp12

0xc902,	// (0x0003b94b) cell_last_hwr_side_pane_ParamLimits

0xc902,	// (0x0003b94b) cell_last_hwr_side_pane

0x7ab7,	// (0x00036b00) cell_last_hwr_side_pane_g1

0x9f4f,	// (0x00038f98) cell_last_hwr_side_pane_g2

0x0001,

0xfe07,	// (0x0003ee50) cell_last_hwr_side_pane_g

0xce69,	// (0x0003beb2) vkb2_area_bottom_space_btn_pane_ParamLimits

0xce69,	// (0x0003beb2) vkb2_area_bottom_space_btn_pane

0x1f6c,	// (0x00030fb5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x99f6,	// (0x00038a3f) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x284a,	// (0x00031893) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2869,	// (0x000318b2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2869,	// (0x000318b2) vkb2_area_bottom_space_btn_pane_g1

0x28a3,	// (0x000318ec) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x28a3,	// (0x000318ec) vkb2_area_bottom_space_btn_pane_g2

0x28d9,	// (0x00031922) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x28d9,	// (0x00031922) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0c,	// (0x0003ee55) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0c,	// (0x0003ee55) vkb2_area_bottom_space_btn_pane_g

0x1dca,	// (0x00030e13) cel_fep_hwr_func_pane_ParamLimits

0x1dca,	// (0x00030e13) cel_fep_hwr_func_pane

0xc8d7,	// (0x0003b920) cell_hwr_side_button_pane_ParamLimits

0xc8d7,	// (0x0003b920) cell_hwr_side_button_pane

0x93d2,	// (0x0003841b) aid_area_touch_clock_ParamLimits

0x39ce,	// (0x00032a17) bg_uniindi_top_pane_ParamLimits

0x93e4,	// (0x0003842d) uniindi_top_pane_g1_ParamLimits

0x93fa,	// (0x00038443) uniindi_top_pane_g2_ParamLimits

0x9406,	// (0x0003844f) uniindi_top_pane_g3_ParamLimits

0x9417,	// (0x00038460) uniindi_top_pane_g4_ParamLimits

0xfd1f,	// (0x0003ed68) uniindi_top_pane_g_ParamLimits

0x9424,	// (0x0003846d) uniindi_top_pane_t1_ParamLimits

0x39ce,	// (0x00032a17) bg_vkb2_func_pane_cp01_ParamLimits

0x39ce,	// (0x00032a17) bg_vkb2_func_pane_cp01

0x9f58,	// (0x00038fa1) cel_fep_hwr_func_pane_g1_ParamLimits

0x9f58,	// (0x00038fa1) cel_fep_hwr_func_pane_g1

0x39ce,	// (0x00032a17) bg_vkb2_func_pane_cp02_ParamLimits

0x39ce,	// (0x00032a17) bg_vkb2_func_pane_cp02

0x9f58,	// (0x00038fa1) cell_hwr_side_button_pane_g1_ParamLimits

0x9f58,	// (0x00038fa1) cell_hwr_side_button_pane_g1

0x5338,	// (0x00034381) status_pane_g4_ParamLimits

0x5338,	// (0x00034381) status_pane_g4

0x5352,	// (0x0003439b) status_pane_t1

0x77fc,	// (0x00036845) form2_midp_gauge_slider_cont_pane

0x7804,	// (0x0003684d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe1ae,	// (0x0003d1f7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe1c0,	// (0x0003d209) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfadf,	// (0x0003eb28) form2_midp_gauge_slider_pane_t_ParamLimits

0x783a,	// (0x00036883) form2_midp_slider_pane_ParamLimits

0x2223,	// (0x0003126c) aid_size_cell_func_vkb2_ParamLimits

0x2223,	// (0x0003126c) aid_size_cell_func_vkb2

0x9ef9,	// (0x00038f42) slider_pane_g4_ParamLimits

0x9ef9,	// (0x00038f42) slider_pane_g4

0xceca,	// (0x0003bf13) form2_midp_gauge_slider_pane_t2_cp01

0xced8,	// (0x0003bf21) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xced8,	// (0x0003bf21) form2_midp_gauge_slider_pane_t3_cp01

0x294e,	// (0x00031997) form2_midp_slider_pane_cp01

0x3651,	// (0x0003269a) navi_smil_pane

0x9f91,	// (0x00038fda) navi_smil_pane_g1

0x9f99,	// (0x00038fe2) navi_smil_pane_t1

0x9f66,	// (0x00038faf) form2_midp_slider_pane_g1

0x9f6f,	// (0x00038fb8) form2_midp_slider_pane_g2

0x9f77,	// (0x00038fc0) form2_midp_slider_pane_g3

0x9f66,	// (0x00038faf) form2_midp_slider_pane_g4

0xf2e0,	// (0x0003e329) form2_midp_slider_pane_g5

0x0004,

0xfe15,	// (0x0003ee5e) form2_midp_slider_pane_g

0x2913,	// (0x0003195c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2913,	// (0x0003195c) vkb2_area_bottom_space_btn_pane_g4

0xd8c4,	// (0x0003c90d) lc0_navi_pane_ParamLimits

0xd8c4,	// (0x0003c90d) lc0_navi_pane

0xd92e,	// (0x0003c977) lc0_stat_indi_pane_ParamLimits

0xd92e,	// (0x0003c977) lc0_stat_indi_pane

0xd943,	// (0x0003c98c) ls0_title_pane_ParamLimits

0xd943,	// (0x0003c98c) ls0_title_pane

0x3fda,	// (0x00033023) bg_popup_sub_pane_cp14_ParamLimits

0x93b9,	// (0x00038402) list_uniindi_pane_ParamLimits

0x93c5,	// (0x0003840e) uniindi_top_pane_ParamLimits

0x9461,	// (0x000384aa) list_single_uniindi_pane_g1_ParamLimits

0x9474,	// (0x000384bd) list_single_uniindi_pane_t1_ParamLimits

0xcef5,	// (0x0003bf3e) lc0_stat_clock_pane_ParamLimits

0xcef5,	// (0x0003bf3e) lc0_stat_clock_pane

0xf2eb,	// (0x0003e334) lc0_stat_indi_pane_g1_ParamLimits

0xf2eb,	// (0x0003e334) lc0_stat_indi_pane_g1

0xf2f8,	// (0x0003e341) lc0_stat_indi_pane_g2_ParamLimits

0xf2f8,	// (0x0003e341) lc0_stat_indi_pane_g2

0x0001,

0xfe20,	// (0x0003ee69) lc0_stat_indi_pane_g_ParamLimits

0xfe20,	// (0x0003ee69) lc0_stat_indi_pane_g

0xcf02,	// (0x0003bf4b) lc0_uni_indicator_pane_ParamLimits

0xcf02,	// (0x0003bf4b) lc0_uni_indicator_pane

0xf305,	// (0x0003e34e) ls0_title_pane_g1_ParamLimits

0xf305,	// (0x0003e34e) ls0_title_pane_g1

0xf319,	// (0x0003e362) ls0_title_pane_t1_ParamLimits

0xf319,	// (0x0003e362) ls0_title_pane_t1

0xcf0f,	// (0x0003bf58) lc0_uni_indicator_pane_g1_ParamLimits

0xcf0f,	// (0x0003bf58) lc0_uni_indicator_pane_g1

0xa00b,	// (0x00039054) lc0_stat_clock_pane_t1

0x023e,	// (0x0002f287) main_ai5_pane

0xa019,	// (0x00039062) ai5_sk_pane_ParamLimits

0xa019,	// (0x00039062) ai5_sk_pane

0xf347,	// (0x0003e390) cell_ai5_widget_pane_ParamLimits

0xf347,	// (0x0003e390) cell_ai5_widget_pane

0xa0e1,	// (0x0003912a) aid_size_cell_widget_grid

0xa0f7,	// (0x00039140) bg_ai5_widget_pane_ParamLimits

0xa0f7,	// (0x00039140) bg_ai5_widget_pane

0xa16f,	// (0x000391b8) cell_ai5_widget_pane_g2

0xa183,	// (0x000391cc) cell_ai5_widget_pane_g3

0xa19d,	// (0x000391e6) cell_ai5_widget_pane_g4

0xa1ad,	// (0x000391f6) cell_ai5_widget_pane_g5

0xa1bd,	// (0x00039206) cell_ai5_widget_pane_g6

0xa1c9,	// (0x00039212) cell_ai5_widget_pane_g7

0xa211,	// (0x0003925a) cell_ai5_widget_pane_t1_ParamLimits

0xa211,	// (0x0003925a) cell_ai5_widget_pane_t1

0xa22e,	// (0x00039277) cell_ai5_widget_pane_t2_ParamLimits

0xa22e,	// (0x00039277) cell_ai5_widget_pane_t2

0xa246,	// (0x0003928f) cell_ai5_widget_pane_t3_ParamLimits

0xa246,	// (0x0003928f) cell_ai5_widget_pane_t3

0xa25e,	// (0x000392a7) cell_ai5_widget_pane_t4_ParamLimits

0xa25e,	// (0x000392a7) cell_ai5_widget_pane_t4

0xa284,	// (0x000392cd) cell_ai5_widget_pane_t5_ParamLimits

0xa284,	// (0x000392cd) cell_ai5_widget_pane_t5

0xa2a4,	// (0x000392ed) cell_ai5_widget_pane_t6_ParamLimits

0xa2a4,	// (0x000392ed) cell_ai5_widget_pane_t6

0xa2b6,	// (0x000392ff) cell_ai5_widget_pane_t7_ParamLimits

0xa2b6,	// (0x000392ff) cell_ai5_widget_pane_t7

0xa2cf,	// (0x00039318) cell_ai5_widget_pane_t8_ParamLimits

0xa2cf,	// (0x00039318) cell_ai5_widget_pane_t8

0x0009,

0xfe3a,	// (0x0003ee83) cell_ai5_widget_pane_t_ParamLimits

0xfe3a,	// (0x0003ee83) cell_ai5_widget_pane_t

0xa32e,	// (0x00039377) grid_ai5_widget_pane

0x3fda,	// (0x00033023) highlight_cell_ai5_widget_pane_ParamLimits

0x3fda,	// (0x00033023) highlight_cell_ai5_widget_pane

0xf3ad,	// (0x0003e3f6) ai5_sk_left_pane

0xf3b7,	// (0x0003e400) ai5_sk_middle_pane

0xf3c1,	// (0x0003e40a) ai5_sk_right_pane

0xa363,	// (0x000393ac) bg_ai5_widget_pane_g1_ParamLimits

0xa363,	// (0x000393ac) bg_ai5_widget_pane_g1

0xa36f,	// (0x000393b8) bg_ai5_widget_pane_g2_ParamLimits

0xa36f,	// (0x000393b8) bg_ai5_widget_pane_g2

0xa37b,	// (0x000393c4) bg_ai5_widget_pane_g3_ParamLimits

0xa37b,	// (0x000393c4) bg_ai5_widget_pane_g3

0xa387,	// (0x000393d0) bg_ai5_widget_pane_g4_ParamLimits

0xa387,	// (0x000393d0) bg_ai5_widget_pane_g4

0xa393,	// (0x000393dc) bg_ai5_widget_pane_g5_ParamLimits

0xa393,	// (0x000393dc) bg_ai5_widget_pane_g5

0xa39f,	// (0x000393e8) bg_ai5_widget_pane_g6_ParamLimits

0xa39f,	// (0x000393e8) bg_ai5_widget_pane_g6

0xa3ab,	// (0x000393f4) bg_ai5_widget_pane_g7_ParamLimits

0xa3ab,	// (0x000393f4) bg_ai5_widget_pane_g7

0xa3b7,	// (0x00039400) bg_ai5_widget_pane_g8_ParamLimits

0xa3b7,	// (0x00039400) bg_ai5_widget_pane_g8

0xa3c3,	// (0x0003940c) bg_ai5_widget_pane_g9_ParamLimits

0xa3c3,	// (0x0003940c) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x0003ee98) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0003ee98) bg_ai5_widget_pane_g

0xa3f5,	// (0x0003943e) cell_shortcut_ai5_widget_pane_ParamLimits

0xa3f5,	// (0x0003943e) cell_shortcut_ai5_widget_pane

0x4c6f,	// (0x00033cb8) bg_cell_shortcut_ai5_widget_pane

0xa406,	// (0x0003944f) cell_grid_ai5_widget_pane_g1

0x4c6f,	// (0x00033cb8) highlight_cell_shortcut_ai5_widget_pane

0x54bf,	// (0x00034508) ai5_sk_left_pane_g1

0xa40f,	// (0x00039458) ai5_sk_left_pane_g2

0xa417,	// (0x00039460) ai5_sk_left_pane_g3

0xa41f,	// (0x00039468) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x0003eeab) ai5_sk_left_pane_g

0xa427,	// (0x00039470) ai5_sk_left_pane_t1

0x54c7,	// (0x00034510) ai5_sk_right_pane_g1

0xa435,	// (0x0003947e) ai5_sk_right_pane_g2

0xa43d,	// (0x00039486) ai5_sk_right_pane_g3

0xa445,	// (0x0003948e) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x0003eeb4) ai5_sk_right_pane_g

0xa44d,	// (0x00039496) ai5_sk_right_pane_t1

0x54c7,	// (0x00034510) ai5_sk_middle_pane_g1

0x54bf,	// (0x00034508) ai5_sk_middle_pane_g2

0x54df,	// (0x00034528) ai5_sk_middle_pane_g3

0xa43d,	// (0x00039486) ai5_sk_middle_pane_g4

0xa417,	// (0x00039460) ai5_sk_middle_pane_g5

0xa45b,	// (0x000394a4) ai5_sk_middle_pane_g6

0xf3cb,	// (0x0003e414) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x0003eebd) ai5_sk_middle_pane_g

0xd7b0,	// (0x0003c7f9) aid_touch_area_size_lc0_ParamLimits

0xd7b0,	// (0x0003c7f9) aid_touch_area_size_lc0

0x1f9b,	// (0x00030fe4) cell_hwr_candidate_pane_t1_ParamLimits

0x500f,	// (0x00034058) aid_touch_navi_pane

0xda3c,	// (0x0003ca85) status_dt_navi_pane_ParamLimits

0xda3c,	// (0x0003ca85) status_dt_navi_pane

0xda54,	// (0x0003ca9d) status_dt_sta_pane_ParamLimits

0xda54,	// (0x0003ca9d) status_dt_sta_pane

0xf3d3,	// (0x0003e41c) dt_sta_controll_pane

0xf3e0,	// (0x0003e429) dt_sta_indi_pane

0xf3ed,	// (0x0003e436) dt_sta_title_pane

0x39ce,	// (0x00032a17) bg_dt_sta_indi_pane_ParamLimits

0x39ce,	// (0x00032a17) bg_dt_sta_indi_pane

0xf3ff,	// (0x0003e448) dt_sta_battery_pane

0xf407,	// (0x0003e450) dt_sta_indi_pane_g1

0xa4ad,	// (0x000394f6) dt_sta_indi_pane_g2

0xa4b6,	// (0x000394ff) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x0003eecc) dt_sta_indi_pane_g

0xa4bf,	// (0x00039508) dt_sta_signal_pane

0x3fda,	// (0x00033023) bg_dt_sta_title_pane_ParamLimits

0x3fda,	// (0x00033023) bg_dt_sta_title_pane

0xa4c8,	// (0x00039511) dt_sta_title_pane_g1

0xa4d0,	// (0x00039519) dt_sta_title_pane_t1_ParamLimits

0xa4d0,	// (0x00039519) dt_sta_title_pane_t1

0x3651,	// (0x0003269a) bg_dt_sta_control_pane

0xf410,	// (0x0003e459) dt_sta_controll_pane_g1

0xa4ee,	// (0x00039537) bg_dt_sta_title_pane_g1

0xa4f7,	// (0x00039540) bg_dt_sta_title_pane_g2

0xa500,	// (0x00039549) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x0003eed3) bg_dt_sta_title_pane_g

0x7ab7,	// (0x00036b00) bg_dt_sta_indi_pane_g1

0xa509,	// (0x00039552) dt_sta_signal_pane_g1

0xa511,	// (0x0003955a) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x0003eeda) dt_sta_signal_pane_g

0xa519,	// (0x00039562) dt_sta_battery_pane_g1

0xa522,	// (0x0003956b) dt_sta_battery_pane_t1

0x7ab7,	// (0x00036b00) bg_dt_sta_control_pane_g1

0x476e,	// (0x000337b7) fep_china_uni_eep_pane

0x4776,	// (0x000337bf) fep_china_uni_entry_pane_ParamLimits

0x4786,	// (0x000337cf) popup_fep_china_uni_window_g1_ParamLimits

0x4796,	// (0x000337df) popup_fep_china_uni_window_g2_ParamLimits

0x4796,	// (0x000337df) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0003e766) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0003e766) popup_fep_china_uni_window_g

0xa531,	// (0x0003957a) fep_china_uni_eep_pane_g1

0xa539,	// (0x00039582) fep_china_uni_eep_pane_t1

0x9f88,	// (0x00038fd1) aid_touch_area_size_smil_player

0x515f,	// (0x000341a8) lc0_clock_pane

0x5346,	// (0x0003438f) status_pane_g5_ParamLimits

0x5346,	// (0x0003438f) status_pane_g5

0xc2ac,	// (0x0003b2f5) popup_keymap_window

0x5304,	// (0x0003434d) status_icon_pane

0xa183,	// (0x000391cc) cell_ai5_widget_pane_g3_ParamLimits

0xa19d,	// (0x000391e6) cell_ai5_widget_pane_g4_ParamLimits

0xa1ad,	// (0x000391f6) cell_ai5_widget_pane_g5_ParamLimits

0xa1d5,	// (0x0003921e) cell_ai5_widget_pane_g8_ParamLimits

0xa1d5,	// (0x0003921e) cell_ai5_widget_pane_g8

0xa1e9,	// (0x00039232) cell_ai5_widget_pane_g9_ParamLimits

0xa1e9,	// (0x00039232) cell_ai5_widget_pane_g9

0xa1fd,	// (0x00039246) cell_ai5_widget_pane_g10_ParamLimits

0xa1fd,	// (0x00039246) cell_ai5_widget_pane_g10

0xa548,	// (0x00039591) status_icon_pane_g1

0x3651,	// (0x0003269a) bg_popup_sub_pane_cp13

0xa550,	// (0x00039599) popup_keymap_window_t1

0xd73e,	// (0x0003c787) control_pane_g6_ParamLimits

0xd73e,	// (0x0003c787) control_pane_g6

0xd74b,	// (0x0003c794) control_pane_g7_ParamLimits

0xd74b,	// (0x0003c794) control_pane_g7

0xd758,	// (0x0003c7a1) control_pane_g8_ParamLimits

0xd758,	// (0x0003c7a1) control_pane_g8

0xf3d3,	// (0x0003e41c) dt_sta_controll_pane_ParamLimits

0xf3e0,	// (0x0003e429) dt_sta_indi_pane_ParamLimits

0xf3ed,	// (0x0003e436) dt_sta_title_pane_ParamLimits

0x3f12,	// (0x00032f5b) aid_size_touch_scroll_bar_cale

0x0317,	// (0x0002f360) popup_discreet_window_ParamLimits

0x0317,	// (0x0002f360) popup_discreet_window

0xb8af,	// (0x0003a8f8) popup_sk_window

0x5b4a,	// (0x00034b93) bg_popup_sub_pane_cp28_ParamLimits

0x5b4a,	// (0x00034b93) bg_popup_sub_pane_cp28

0xa55e,	// (0x000395a7) popup_discreet_window_g1_ParamLimits

0xa55e,	// (0x000395a7) popup_discreet_window_g1

0xa57e,	// (0x000395c7) popup_discreet_window_t1_ParamLimits

0xa57e,	// (0x000395c7) popup_discreet_window_t1

0xa59c,	// (0x000395e5) popup_discreet_window_t2_ParamLimits

0xa59c,	// (0x000395e5) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x0003eedf) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x0003eedf) popup_discreet_window_t

0x2985,	// (0x000319ce) popup_sk_window_g1

0x298f,	// (0x000319d8) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x0003eee6) popup_sk_window_g

0x2997,	// (0x000319e0) popup_sk_window_t1

0x29a5,	// (0x000319ee) popup_sk_window_t1_copy1

0xa16f,	// (0x000391b8) cell_ai5_widget_pane_g2_ParamLimits

0xa2e1,	// (0x0003932a) cell_ai5_widget_pane_t9_ParamLimits

0xa2e1,	// (0x0003932a) cell_ai5_widget_pane_t9

0x3651,	// (0x0003269a) main_fep_fshwr2_pane

0xcf36,	// (0x0003bf7f) aid_fshwr2_btn_pane

0xcf47,	// (0x0003bf90) aid_fshwr2_syb_pane

0xcf58,	// (0x0003bfa1) aid_fshwr2_txt_pane

0xcf64,	// (0x0003bfad) fshwr2_func_candi_pane

0xcf83,	// (0x0003bfcc) fshwr2_hwr_syb_pane

0xcf9e,	// (0x0003bfe7) fshwr2_icf_pane

0x023e,	// (0x0002f287) fshwr2_icf_bg_pane

0x2a25,	// (0x00031a6e) fshwr2_icf_pane_t1_ParamLimits

0x2a25,	// (0x00031a6e) fshwr2_icf_pane_t1

0x465c,	// (0x000336a5) fshwr2_func_candi_pane_g1

0xf419,	// (0x0003e462) fshwr2_func_candi_row_pane_ParamLimits

0xf419,	// (0x0003e462) fshwr2_func_candi_row_pane

0xcfca,	// (0x0003c013) cell_fshwr2_syb_pane_ParamLimits

0xcfca,	// (0x0003c013) cell_fshwr2_syb_pane

0x1f6c,	// (0x00030fb5) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1f6c,	// (0x00030fb5) fshwr2_hwr_syb_pane_g1

0x023e,	// (0x0002f287) bg_popup_call_pane_cp01

0xcfe0,	// (0x0003c029) fshwr2_func_candi_cell_pane_ParamLimits

0xcfe0,	// (0x0003c029) fshwr2_func_candi_cell_pane

0xf43c,	// (0x0003e485) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf43c,	// (0x0003e485) fshwr2_func_candi_cell_bg_pane

0xd02b,	// (0x0003c074) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd02b,	// (0x0003c074) fshwr2_func_candi_cell_pane_g1

0xd062,	// (0x0003c0ab) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd062,	// (0x0003c0ab) fshwr2_func_candi_cell_pane_t1

0x023e,	// (0x0002f287) bg_button_pane_cp08

0xa60a,	// (0x00039653) cell_fshwr2_syb_bg_pane

0xd07d,	// (0x0003c0c6) cell_fshwr2_syb_bg_pane_g1

0xd085,	// (0x0003c0ce) cell_fshwr2_syb_bg_pane_t1

0x3fda,	// (0x00033023) main_tmo_pane

0xdd12,	// (0x0003cd5b) uni_indicator_pane_g1_ParamLimits

0xdd27,	// (0x0003cd70) uni_indicator_pane_g2_ParamLimits

0xdd3d,	// (0x0003cd86) uni_indicator_pane_g3_ParamLimits

0x668d,	// (0x000356d6) uni_indicator_pane_g4_ParamLimits

0x668d,	// (0x000356d6) uni_indicator_pane_g4

0x66a1,	// (0x000356ea) uni_indicator_pane_g5_ParamLimits

0x66a1,	// (0x000356ea) uni_indicator_pane_g5

0x66a1,	// (0x000356ea) uni_indicator_pane_g6_ParamLimits

0x66a1,	// (0x000356ea) uni_indicator_pane_g6

0xf91c,	// (0x0003e965) uni_indicator_pane_g_ParamLimits

0xe7c4,	// (0x0003d80d) popup_tmo_note_window_ParamLimits

0xe7c4,	// (0x0003d80d) popup_tmo_note_window

0x2205,	// (0x0003124e) fshwr2_bg_pane

0xd053,	// (0x0003c09c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd053,	// (0x0003c09c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x0003eeeb) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x0003eeeb) fshwr2_func_candi_cell_pane_g

0x1f54,	// (0x00030f9d) bg_popup_window_pane_cp01

0x2af0,	// (0x00031b39) bg_popup_window_pane_g1_cp01

0xa612,	// (0x0003965b) bg_popup_window_pane_cp22_ParamLimits

0xa612,	// (0x0003965b) bg_popup_window_pane_cp22

0xa620,	// (0x00039669) listscroll_tmo_link_pane_ParamLimits

0xa620,	// (0x00039669) listscroll_tmo_link_pane

0xa660,	// (0x000396a9) popup_tmo_note_window_g1_ParamLimits

0xa660,	// (0x000396a9) popup_tmo_note_window_g1

0xa66d,	// (0x000396b6) tmo_note_info_pane_ParamLimits

0xa66d,	// (0x000396b6) tmo_note_info_pane

0xf448,	// (0x0003e491) list_tmo_note_info_pane_g1_ParamLimits

0xf448,	// (0x0003e491) list_tmo_note_info_pane_g1

0xa69e,	// (0x000396e7) list_tmo_note_info_pane_g2_ParamLimits

0xa69e,	// (0x000396e7) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x0003eef0) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x0003eef0) list_tmo_note_info_pane_g

0xa6ba,	// (0x00039703) list_tmo_note_info_text_pane_ParamLimits

0xa6ba,	// (0x00039703) list_tmo_note_info_text_pane

0xa73b,	// (0x00039784) list_tmo_link_pane

0xa748,	// (0x00039791) scroll_pane_cp20

0xa755,	// (0x0003979e) list_single_tmo_link_pane_ParamLimits

0xa755,	// (0x0003979e) list_single_tmo_link_pane

0xa765,	// (0x000397ae) list_single_tmo_link_pane_t1

0xa773,	// (0x000397bc) list_tmo_note_info_text_pane_t1_ParamLimits

0xa773,	// (0x000397bc) list_tmo_note_info_text_pane_t1

0xd406,	// (0x0003c44f) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd406,	// (0x0003c44f) aid_size_touch_scroll_bar_cp01

0xbe1a,	// (0x0003ae63) aid_size_touch_slider_marker

0xb89f,	// (0x0003a8e8) popup_settings_window_ParamLimits

0xb89f,	// (0x0003a8e8) popup_settings_window

0x2cc5,	// (0x00031d0e) popup_candi_list_indi_window

0x500f,	// (0x00034058) aid_touch_navi_pane_ParamLimits

0x2160,	// (0x000311a9) rs_clock_indi_pane

0x2169,	// (0x000311b2) sctrl_sk_bottom_pane_ParamLimits

0x217a,	// (0x000311c3) sctrl_sk_top_pane_ParamLimits

0x227d,	// (0x000312c6) popup_fep_tooltip_window

0xa0e1,	// (0x0003912a) aid_size_cell_widget_grid_ParamLimits

0xa15a,	// (0x000391a3) cell_ai5_widget_pane_g1_ParamLimits

0xa15a,	// (0x000391a3) cell_ai5_widget_pane_g1

0xa1bd,	// (0x00039206) cell_ai5_widget_pane_g6_ParamLimits

0xa1c9,	// (0x00039212) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe25,	// (0x0003ee6e) cell_ai5_widget_pane_g_ParamLimits

0xfe25,	// (0x0003ee6e) cell_ai5_widget_pane_g

0xa310,	// (0x00039359) cell_ai5_widget_pane_t10_ParamLimits

0xa310,	// (0x00039359) cell_ai5_widget_pane_t10

0xa32e,	// (0x00039377) grid_ai5_widget_pane_ParamLimits

0xa3cf,	// (0x00039418) cell_contacts_ai5_widget_pane_ParamLimits

0xa3cf,	// (0x00039418) cell_contacts_ai5_widget_pane

0xa5b1,	// (0x000395fa) popup_discreet_window_t3_ParamLimits

0xa5b1,	// (0x000395fa) popup_discreet_window_t3

0xcfb6,	// (0x0003bfff) popup_fshwr2_char_preview_window_ParamLimits

0xcfb6,	// (0x0003bfff) popup_fshwr2_char_preview_window

0xf45f,	// (0x0003e4a8) tmo_note_info_pane_t1

0xf474,	// (0x0003e4bd) tmo_note_info_pane_t2

0xf48b,	// (0x0003e4d4) tmo_note_info_pane_t3

0xa717,	// (0x00039760) tmo_note_info_pane_t4

0xa729,	// (0x00039772) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x0003eef5) tmo_note_info_pane_t

0xa73b,	// (0x00039784) list_tmo_link_pane_ParamLimits

0xa748,	// (0x00039791) scroll_pane_cp20_ParamLimits

0x023e,	// (0x0002f287) bg_popup_fep_char_preview_window_cp01

0xa78c,	// (0x000397d5) popup_fshwr2_char_preview_window_t1

0xa79a,	// (0x000397e3) popup_candi_list_indi_window_g1

0xa7a3,	// (0x000397ec) bg_cell_contacts_ai5_widget_pane

0xa7af,	// (0x000397f8) cell_contacts_ai5_widget_pane_g1

0x8161,	// (0x000371aa) cell_contacts_ai5_widget_pane_g2

0xa7c4,	// (0x0003980d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x0003ef00) cell_contacts_ai5_widget_pane_g

0xa7d0,	// (0x00039819) cell_contacts_ai5_widget_pane_t1

0x3fda,	// (0x00033023) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa847,	// (0x00039890) settings_container_pane

0x4c6f,	// (0x00033cb8) listscroll_set_pane_copy1

0x71c7,	// (0x00036210) scroll_pane_cp121_copy1

0x58ef,	// (0x00034938) set_content_pane_copy1

0xa853,	// (0x0003989c) aid_height_set_list_copy1_ParamLimits

0xa853,	// (0x0003989c) aid_height_set_list_copy1

0x6899,	// (0x000358e2) aid_size_parent_copy1_ParamLimits

0x6899,	// (0x000358e2) aid_size_parent_copy1

0xa85f,	// (0x000398a8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa85f,	// (0x000398a8) button_value_adjust_pane_cp6_copy1

0x4f93,	// (0x00033fdc) list_highlight_pane_cp2_copy1_ParamLimits

0x4f93,	// (0x00033fdc) list_highlight_pane_cp2_copy1

0xa873,	// (0x000398bc) list_set_pane_copy1_ParamLimits

0xa873,	// (0x000398bc) list_set_pane_copy1

0xa7e2,	// (0x0003982b) main_pane_set_t1_copy1_ParamLimits

0xa7e2,	// (0x0003982b) main_pane_set_t1_copy1

0xa81c,	// (0x00039865) main_pane_set_t2_copy1_ParamLimits

0xa81c,	// (0x00039865) main_pane_set_t2_copy1

0xa920,	// (0x00039969) main_pane_set_t3_copy1

0xa92e,	// (0x00039977) main_pane_set_t4_copy1

0xa83b,	// (0x00039884) set_content_pane_g1_copy1_ParamLimits

0xa83b,	// (0x00039884) set_content_pane_g1_copy1

0xa93c,	// (0x00039985) setting_code_pane_copy1

0xa944,	// (0x0003998d) setting_slider_graphic_pane_copy1

0xa944,	// (0x0003998d) setting_slider_pane_copy1

0xa944,	// (0x0003998d) setting_text_pane_copy1

0xa944,	// (0x0003998d) setting_volume_pane_copy1

0xa93c,	// (0x00039985) settings_code_pane_cp2_copy1

0xa94c,	// (0x00039995) settings_code_pane_cp_copy1_ParamLimits

0xa94c,	// (0x00039995) settings_code_pane_cp_copy1

0x2af9,	// (0x00031b42) volume_set_pane_copy1

0xa960,	// (0x000399a9) volume_set_pane_g10_copy1

0xa968,	// (0x000399b1) volume_set_pane_g1_copy1

0xa970,	// (0x000399b9) volume_set_pane_g2_copy1

0xa978,	// (0x000399c1) volume_set_pane_g3_copy1

0xa980,	// (0x000399c9) volume_set_pane_g4_copy1

0xa988,	// (0x000399d1) volume_set_pane_g5_copy1

0xa990,	// (0x000399d9) volume_set_pane_g6_copy1

0xa998,	// (0x000399e1) volume_set_pane_g7_copy1

0xa9a0,	// (0x000399e9) volume_set_pane_g8_copy1

0xa9a8,	// (0x000399f1) volume_set_pane_g9_copy1

0x3745,	// (0x0003278e) bg_set_opt_pane_cp_copy1_ParamLimits

0x3745,	// (0x0003278e) bg_set_opt_pane_cp_copy1

0x2b01,	// (0x00031b4a) setting_slider_pane_t1_copy1_ParamLimits

0x2b01,	// (0x00031b4a) setting_slider_pane_t1_copy1

0x2b1f,	// (0x00031b68) setting_slider_pane_t2_copy1_ParamLimits

0x2b1f,	// (0x00031b68) setting_slider_pane_t2_copy1

0x2b39,	// (0x00031b82) setting_slider_pane_t3_copy1_ParamLimits

0x2b39,	// (0x00031b82) setting_slider_pane_t3_copy1

0x2b51,	// (0x00031b9a) slider_set_pane_copy1_ParamLimits

0x2b51,	// (0x00031b9a) slider_set_pane_copy1

0x4032,	// (0x0003307b) set_opt_bg_pane_g1_copy2

0x403a,	// (0x00033083) set_opt_bg_pane_g2_copy2

0xa9b0,	// (0x000399f9) set_opt_bg_pane_g3_copy2

0x404a,	// (0x00033093) set_opt_bg_pane_g4_copy2

0x4052,	// (0x0003309b) set_opt_bg_pane_g5_copy2

0x405a,	// (0x000330a3) set_opt_bg_pane_g6_copy2

0xa9ba,	// (0x00039a03) set_opt_bg_pane_g7_copy2

0xa9c2,	// (0x00039a0b) set_opt_bg_pane_g8_copy2

0xa9cc,	// (0x00039a15) set_opt_bg_pane_g9_copy2

0x2b67,	// (0x00031bb0) aid_size_touch_slider_mark_copy1_ParamLimits

0x2b67,	// (0x00031bb0) aid_size_touch_slider_mark_copy1

0xa9d6,	// (0x00039a1f) slider_set_pane_g1_copy1

0x2b7b,	// (0x00031bc4) slider_set_pane_g2_copy1

0x1b95,	// (0x00030bde) slider_set_pane_g3_copy1_ParamLimits

0x1b95,	// (0x00030bde) slider_set_pane_g3_copy1

0x1ba9,	// (0x00030bf2) slider_set_pane_g4_copy1_ParamLimits

0x1ba9,	// (0x00030bf2) slider_set_pane_g4_copy1

0x1bc1,	// (0x00030c0a) slider_set_pane_g5_copy1_ParamLimits

0x1bc1,	// (0x00030c0a) slider_set_pane_g5_copy1

0x1b95,	// (0x00030bde) slider_set_pane_g6_copy1_ParamLimits

0x1b95,	// (0x00030bde) slider_set_pane_g6_copy1

0x2b83,	// (0x00031bcc) slider_set_pane_g7_copy1_ParamLimits

0x2b83,	// (0x00031bcc) slider_set_pane_g7_copy1

0x3665,	// (0x000326ae) bg_set_opt_pane_cp2_copy1

0xa9df,	// (0x00039a28) setting_slider_graphic_pane_g1_copy1

0xa9e8,	// (0x00039a31) setting_slider_graphic_pane_t1_copy1

0xa9f8,	// (0x00039a41) setting_slider_graphic_pane_t2_copy1

0xaa08,	// (0x00039a51) slider_set_pane_cp_copy1

0xaa18,	// (0x00039a61) input_focus_pane_cp1_copy1

0xaa21,	// (0x00039a6a) list_set_text_pane_copy1

0xaa29,	// (0x00039a72) setting_text_pane_g1_copy1

0x0528,	// (0x0002f571) set_text_pane_t1_copy1

0xaa18,	// (0x00039a61) input_focus_pane_cp2_copy1

0xaa29,	// (0x00039a72) setting_code_pane_g1_copy1

0xaa32,	// (0x00039a7b) setting_code_pane_t1_copy1

0xaa40,	// (0x00039a89) list_set_graphic_pane_copy1

0x3665,	// (0x000326ae) bg_set_opt_pane_cp4_copy1

0x496a,	// (0x000339b3) list_set_graphic_pane_g1_copy1_ParamLimits

0x496a,	// (0x000339b3) list_set_graphic_pane_g1_copy1

0xaa53,	// (0x00039a9c) list_set_graphic_pane_g2_copy1

0x4982,	// (0x000339cb) list_set_graphic_pane_t1_copy1_ParamLimits

0x4982,	// (0x000339cb) list_set_graphic_pane_t1_copy1

0x7ab7,	// (0x00036b00) rs_clock_indi_pane_g1

0xaa5b,	// (0x00039aa4) rs_clock_indi_pane_t1

0xaa69,	// (0x00039ab2) rs_indi_pane

0xaa71,	// (0x00039aba) rs_indi_pane_g1

0xaa7a,	// (0x00039ac3) rs_indi_pane_g2

0xaa83,	// (0x00039acc) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x0003ef07) rs_indi_pane_g

0x4c6f,	// (0x00033cb8) bg_popup_preview_window_pane_cp03

0xaa8c,	// (0x00039ad5) popup_fep_tooltip_window_t1

0x873f,	// (0x00037788) popup_note2_window_g2_ParamLimits

0x873f,	// (0x00037788) popup_note2_window_g2

0x0001,

0xfc57,	// (0x0003eca0) popup_note2_window_g_ParamLimits

0xfc57,	// (0x0003eca0) popup_note2_window_g

0x8c3a,	// (0x00037c83) bg_popup_sub_pane_cp11_ParamLimits

0x8c47,	// (0x00037c90) cell_ai3_links_pane_g1_ParamLimits

0x8c5e,	// (0x00037ca7) cell_ai3_links_pane_t1

0x0528,	// (0x0002f571) set_text_pane_t1_copy1_ParamLimits

0x4b80,	// (0x00033bc9) cell_graphic_popup_pane_cp2_ParamLimits

0x4b80,	// (0x00033bc9) cell_graphic_popup_pane_cp2

0xaa9a,	// (0x00039ae3) cell_graphic_popup_pane_g1_cp2

0x3d25,	// (0x00032d6e) cell_graphic_popup_pane_g2_cp2

0xaaa2,	// (0x00039aeb) cell_graphic_popup_pane_g3_cp2

0xaaaa,	// (0x00039af3) cell_graphic_popup_pane_t2_cp2

0x3d36,	// (0x00032d7f) grid_highlight_pane_cp3_cp2

0x4377,	// (0x000333c0) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3fda,	// (0x00033023) main_tmo_pane_ParamLimits

0xe7b8,	// (0x0003d801) popup_tmo_big_image_note_window

0xa149,	// (0x00039192) cell_ai5_widget_list_pane

0xa151,	// (0x0003919a) cell_ai5_widget_lrg_icon_pane

0xf45f,	// (0x0003e4a8) tmo_note_info_pane_t1_ParamLimits

0xf474,	// (0x0003e4bd) tmo_note_info_pane_t2_ParamLimits

0xf48b,	// (0x0003e4d4) tmo_note_info_pane_t3_ParamLimits

0xa717,	// (0x00039760) tmo_note_info_pane_t4_ParamLimits

0xa729,	// (0x00039772) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x0003eef5) tmo_note_info_pane_t_ParamLimits

0xa847,	// (0x00039890) settings_container_pane_ParamLimits

0xaa10,	// (0x00039a59) indicator_popup_pane_cp5

0xaa10,	// (0x00039a59) indicator_popup_pane_cp6

0xaa40,	// (0x00039a89) list_set_graphic_pane_copy1_ParamLimits

0x3651,	// (0x0003269a) bg_popup_window_pane_cp23

0xaab8,	// (0x00039b01) popup_tmo_big_image_note_window_g1

0xaac2,	// (0x00039b0b) popup_tmo_big_image_note_window_t1

0xaad2,	// (0x00039b1b) popup_tmo_big_image_note_window_t2

0xaae2,	// (0x00039b2b) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x0003ef0e) popup_tmo_big_image_note_window_t

0x7ab7,	// (0x00036b00) cell_ai5_widget_lrg_icon_pane_g1

0xaaf2,	// (0x00039b3b) cell_ai5_widget_lrg_icon_pane_t1

0xab00,	// (0x00039b49) cell_ai5_widget_list_row_pane_ParamLimits

0xab00,	// (0x00039b49) cell_ai5_widget_list_row_pane

0xab17,	// (0x00039b60) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xab17,	// (0x00039b60) cell_ai5_widget_list_row_pane_g1

0xab24,	// (0x00039b6d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xab24,	// (0x00039b6d) cell_ai5_widget_list_row_pane_t1

0xab55,	// (0x00039b9e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xab55,	// (0x00039b9e) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x0003ef15) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x0003ef15) cell_ai5_widget_list_row_pane_t

0x023e,	// (0x0002f287) main_fep_vtchi_ss_pane

0xab9d,	// (0x00039be6) popup_fep_char_pre_window

0xaba5,	// (0x00039bee) popup_fep_ituss_window

0xf4a0,	// (0x0003e4e9) popup_fep_vkbss_window

0xf4ad,	// (0x0003e4f6) grid_vkbss_keypad_pane_ParamLimits

0xf4ad,	// (0x0003e4f6) grid_vkbss_keypad_pane

0xac00,	// (0x00039c49) ituss_keypad_pane

0x2ba5,	// (0x00031bee) aid_vkbss_key_offset_ParamLimits

0x2ba5,	// (0x00031bee) aid_vkbss_key_offset

0xd094,	// (0x0003c0dd) cell_vkbss_key_pane_ParamLimits

0xd094,	// (0x0003c0dd) cell_vkbss_key_pane

0xac0f,	// (0x00039c58) bg_cell_vkbss_key_g1_ParamLimits

0xac0f,	// (0x00039c58) bg_cell_vkbss_key_g1

0xf4bd,	// (0x0003e506) cell_vkbss_key_3p_pane_ParamLimits

0xf4bd,	// (0x0003e506) cell_vkbss_key_3p_pane

0xf4d7,	// (0x0003e520) cell_vkbss_key_g1_ParamLimits

0xf4d7,	// (0x0003e520) cell_vkbss_key_g1

0xf4f1,	// (0x0003e53a) cell_vkbss_key_t1_ParamLimits

0xf4f1,	// (0x0003e53a) cell_vkbss_key_t1

0x2bc7,	// (0x00031c10) cell_ituss_key_pane_ParamLimits

0x2bc7,	// (0x00031c10) cell_ituss_key_pane

0xac6e,	// (0x00039cb7) bg_cell_ituss_key_g1_ParamLimits

0xac6e,	// (0x00039cb7) bg_cell_ituss_key_g1

0xac7a,	// (0x00039cc3) cell_ituss_key_pane_g1_ParamLimits

0xac7a,	// (0x00039cc3) cell_ituss_key_pane_g1

0x2bd8,	// (0x00031c21) cell_ituss_key_pane_g2_ParamLimits

0x2bd8,	// (0x00031c21) cell_ituss_key_pane_g2

0x0002,

0xfed3,	// (0x0003ef1c) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0003ef1c) cell_ituss_key_pane_g

0x2c04,	// (0x00031c4d) cell_ituss_key_t1_ParamLimits

0x2c04,	// (0x00031c4d) cell_ituss_key_t1

0x2c3e,	// (0x00031c87) cell_ituss_key_t2_ParamLimits

0x2c3e,	// (0x00031c87) cell_ituss_key_t2

0x2c6f,	// (0x00031cb8) cell_ituss_key_t3_ParamLimits

0x2c6f,	// (0x00031cb8) cell_ituss_key_t3

0x2c3e,	// (0x00031c87) cell_ituss_key_t4_ParamLimits

0x2c3e,	// (0x00031c87) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0003ef23) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0003ef23) cell_ituss_key_t

0xaca6,	// (0x00039cef) cell_vkbss_key_3p_pane_g1

0xacae,	// (0x00039cf7) cell_vkbss_key_3p_pane_g2

0xacb6,	// (0x00039cff) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0003ef2e) cell_vkbss_key_3p_pane_g

0x4c6f,	// (0x00033cb8) bg_popup_fep_char_preview_window_cp02

0xacbe,	// (0x00039d07) popup_fep_char_pre_window_t1

0xf3a3,	// (0x0003e3ec) main_ai5_sk_pane

0xa7a3,	// (0x000397ec) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa7af,	// (0x000397f8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8161,	// (0x000371aa) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa7c4,	// (0x0003980d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x0003ef00) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa7d0,	// (0x00039819) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3fda,	// (0x00033023) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf51c,	// (0x0003e565) main_ai5_sk_pane_g1

0x5983,	// (0x000349cc) popup_query_code_window_g1

0xabbb,	// (0x00039c04) popup_fep_vkb_icf_pane

0xabda,	// (0x00039c23) popup_fep_vtchi_icf_pane

0xacd5,	// (0x00039d1e) bg_icf_pane

0xace1,	// (0x00039d2a) list_vkb_icf_pane

0xacf0,	// (0x00039d39) bg_icf_pane_cp01

0xad03,	// (0x00039d4c) vtchi_icf_list_pane

0xad13,	// (0x00039d5c) list_vkb_icf_pane_t1_ParamLimits

0xad13,	// (0x00039d5c) list_vkb_icf_pane_t1

0xad29,	// (0x00039d72) vtchi_icf_list_pane_t1_ParamLimits

0xad29,	// (0x00039d72) vtchi_icf_list_pane_t1

0xaba5,	// (0x00039bee) popup_fep_ituss_window_ParamLimits

0xabda,	// (0x00039c23) popup_fep_vtchi_icf_pane_ParamLimits

0xac00,	// (0x00039c49) ituss_keypad_pane_ParamLimits

0x2b99,	// (0x00031be2) ituss_sks_pane

0xacd5,	// (0x00039d1e) bg_icf_pane_ParamLimits

0xab7d,	// (0x00039bc6) icf_edit_indi_pane_ParamLimits

0xab7d,	// (0x00039bc6) icf_edit_indi_pane

0xace1,	// (0x00039d2a) list_vkb_icf_pane_ParamLimits

0xacf0,	// (0x00039d39) bg_icf_pane_cp01_ParamLimits

0xab90,	// (0x00039bd9) icf_edit_indi_pane_cp01_ParamLimits

0xab90,	// (0x00039bd9) icf_edit_indi_pane_cp01

0xad0b,	// (0x00039d54) vtchi_query_pane

0x9f58,	// (0x00038fa1) icf_edit_indi_pane_g1_ParamLimits

0x9f58,	// (0x00038fa1) icf_edit_indi_pane_g1

0xf525,	// (0x0003e56e) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0003e56e) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0003ef46) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0003ef46) icf_edit_indi_pane_g

0xf537,	// (0x0003e580) icf_edit_indi_pane_t1

0xad43,	// (0x00039d8c) bg_input_focus_pane_cp042

0x3f09,	// (0x00032f52) vtchi_button_pane

0xad4c,	// (0x00039d95) vtchi_query_pane_t1

0xad5a,	// (0x00039da3) vtchi_query_pane_t2

0xad68,	// (0x00039db1) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0003ef35) vtchi_query_pane_t

0x023e,	// (0x0002f287) bg_button_pane_cp13

0xad76,	// (0x00039dbf) vtchi_button_pane_g1

0x2cb2,	// (0x00031cfb) ituss_sks_pane_g1

0x2cbd,	// (0x00031d06) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0003ef3c) ituss_sks_pane_g

0xad7e,	// (0x00039dc7) ituss_sks_pane_t1

0xad8c,	// (0x00039dd5) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0003ef41) ituss_sks_pane_t

0x7542,	// (0x0003658b) indicator_nsta_pane_cp_g1

0x754a,	// (0x00036593) indicator_nsta_pane_cp_g2

0x7552,	// (0x0003659b) indicator_nsta_pane_cp_g3

0x7542,	// (0x0003658b) indicator_nsta_pane_cp_g4

0x754a,	// (0x00036593) indicator_nsta_pane_cp_g5

0x7552,	// (0x0003659b) indicator_nsta_pane_cp_g6

0x0005,

0xfa95,	// (0x0003eade) indicator_nsta_pane_cp_g

0xf1bb,	// (0x0003e204) cell_graphic2_pane_t2_ParamLimits

0xf1bb,	// (0x0003e204) cell_graphic2_pane_t2

0x0001,

0xfdae,	// (0x0003edf7) cell_graphic2_pane_t_ParamLimits

0xfdae,	// (0x0003edf7) cell_graphic2_pane_t

0xf1ef,	// (0x0003e238) cell_graphic2_control_pane_t1

0xd5b1,	// (0x0003c5fa) signal_pane_g3_ParamLimits

0xd5b1,	// (0x0003c5fa) signal_pane_g3

0xd5c5,	// (0x0003c60e) signal_pane_g4_ParamLimits

0xd5c5,	// (0x0003c60e) signal_pane_g4

0xab67,	// (0x00039bb0) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xab67,	// (0x00039bb0) cell_ai5_widget_list_row_pane_t3

0xac94,	// (0x00039cdd) cell_ituss_key_pane_t1_ParamLimits

0xac94,	// (0x00039cdd) cell_ituss_key_pane_t1

0x55bc,	// (0x00034605) form_field_data_wide_pane_vc_t2_ParamLimits

0x55bc,	// (0x00034605) form_field_data_wide_pane_vc_t2

0x55d0,	// (0x00034619) form_field_data_wide_pane_vc_t3_ParamLimits

0x55d0,	// (0x00034619) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0003e84d) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0003e84d) form_field_data_wide_pane_vc_t

0x7209,	// (0x00036252) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7209,	// (0x00036252) form_field_slider_wide_pane_vc_t3

0x72e7,	// (0x00036330) form_field_popup_wide_pane_vc_t2_ParamLimits

0x72e7,	// (0x00036330) form_field_popup_wide_pane_vc_t2

0x72fe,	// (0x00036347) form_field_popup_wide_pane_vc_t3_ParamLimits

0x72fe,	// (0x00036347) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa84,	// (0x0003eacd) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0003eacd) form_field_popup_wide_pane_vc_t

0xcf36,	// (0x0003bf7f) aid_fshwr2_btn_pane_ParamLimits

0xcf47,	// (0x0003bf90) aid_fshwr2_syb_pane_ParamLimits

0xcf58,	// (0x0003bfa1) aid_fshwr2_txt_pane_ParamLimits

0x2205,	// (0x0003124e) fshwr2_bg_pane_ParamLimits

0xcf64,	// (0x0003bfad) fshwr2_func_candi_pane_ParamLimits

0xcf83,	// (0x0003bfcc) fshwr2_hwr_syb_pane_ParamLimits

0xcf9e,	// (0x0003bfe7) fshwr2_icf_pane_ParamLimits

0x31ee,	// (0x00032237) list_double_graphic_pane_vc_g4_ParamLimits

0x31ee,	// (0x00032237) list_double_graphic_pane_vc_g4

0x2bf8,	// (0x00031c41) cell_ituss_key_pane_g3_ParamLimits

0x2bf8,	// (0x00031c41) cell_ituss_key_pane_g3

0x2ca0,	// (0x00031ce9) cell_ituss_key_t5_ParamLimits

0x2ca0,	// (0x00031ce9) cell_ituss_key_t5

0xf4a0,	// (0x0003e4e9) popup_fep_vkbss_window_ParamLimits

0xa0d8,	// (0x00039121) aid_cell_ai5_quarter

0xf537,	// (0x0003e580) icf_edit_indi_pane_t1_ParamLimits

0x3a76,	// (0x00032abf) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3a76,	// (0x00032abf) aid_tch_indicator_popup_pane_cp2

0x3a89,	// (0x00032ad2) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3a89,	// (0x00032ad2) aid_tch_query_popup_data_pane_cp2

0x592b,	// (0x00034974) aid_tch_query_popup_pane_ParamLimits

0x592b,	// (0x00034974) aid_tch_query_popup_pane

0x592b,	// (0x00034974) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x592b,	// (0x00034974) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small

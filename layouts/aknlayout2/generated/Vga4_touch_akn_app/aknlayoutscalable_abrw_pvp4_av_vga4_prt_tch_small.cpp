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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0002c82f };

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
0x745f,	// (0x00033c8e) Screen

0x746b,	// (0x00033c9a) application_window_ParamLimits

0x746b,	// (0x00033c9a) application_window

0x3326,	// (0x0002fb55) screen_g1

0x4b26,	// (0x00031355) area_bottom_pane_ParamLimits

0x4b26,	// (0x00031355) area_bottom_pane

0x4be6,	// (0x00031415) area_top_pane_ParamLimits

0x4be6,	// (0x00031415) area_top_pane

0x4c84,	// (0x000314b3) main_pane_ParamLimits

0x4c84,	// (0x000314b3) main_pane

0x3330,	// (0x0002fb5f) misc_graphics

0x962d,	// (0x00035e5c) battery_pane_ParamLimits

0x962d,	// (0x00035e5c) battery_pane

0xa315,	// (0x00036b44) bg_status_flat_pane_g8

0xa31d,	// (0x00036b4c) bg_status_flat_pane_g9

0x96f5,	// (0x00035f24) context_pane_ParamLimits

0x96f5,	// (0x00035f24) context_pane

0x9819,	// (0x00036048) navi_pane_ParamLimits

0x9819,	// (0x00036048) navi_pane

0x98a9,	// (0x000360d8) signal_pane_ParamLimits

0x98a9,	// (0x000360d8) signal_pane

0x0008,

0xf88a,	// (0x0003c0b9) bg_status_flat_pane_g

0x9916,	// (0x00036145) status_pane_g1_ParamLimits

0x9916,	// (0x00036145) status_pane_g1

0x992a,	// (0x00036159) status_pane_g2_ParamLimits

0x992a,	// (0x00036159) status_pane_g2

0x9936,	// (0x00036165) status_pane_g3_ParamLimits

0x9936,	// (0x00036165) status_pane_g3

0x0004,

0xf7b8,	// (0x0003bfe7) status_pane_g_ParamLimits

0xf7b8,	// (0x0003bfe7) status_pane_g

0x996a,	// (0x00036199) title_pane_ParamLimits

0x996a,	// (0x00036199) title_pane

0x99a7,	// (0x000361d6) uni_indicator_pane_ParamLimits

0x99a7,	// (0x000361d6) uni_indicator_pane

0x8f22,	// (0x00035751) bg_list_pane_ParamLimits

0x8f22,	// (0x00035751) bg_list_pane

0x8f42,	// (0x00035771) find_pane

0x8f4a,	// (0x00035779) listscroll_app_pane_ParamLimits

0x8f4a,	// (0x00035779) listscroll_app_pane

0x8f56,	// (0x00035785) listscroll_form_pane

0x8f5e,	// (0x0003578d) listscroll_gen_pane_ParamLimits

0x8f5e,	// (0x0003578d) listscroll_gen_pane

0x8f56,	// (0x00035785) listscroll_set_pane

0x7fc3,	// (0x000347f2) main_idle_act_pane

0x8bfe,	// (0x0003542d) main_idle_trad_pane

0x8bfe,	// (0x0003542d) main_list_empty_pane

0x8f84,	// (0x000357b3) main_midp_pane

0x8f90,	// (0x000357bf) main_pane_g1_ParamLimits

0x8f90,	// (0x000357bf) main_pane_g1

0x8f9e,	// (0x000357cd) popup_ai_message_window_ParamLimits

0x8f9e,	// (0x000357cd) popup_ai_message_window

0x904e,	// (0x0003587d) popup_fep_china_uni_window_ParamLimits

0x904e,	// (0x0003587d) popup_fep_china_uni_window

0x90ae,	// (0x000358dd) popup_fep_japan_candidate_window_ParamLimits

0x90ae,	// (0x000358dd) popup_fep_japan_candidate_window

0x90d8,	// (0x00035907) popup_fep_japan_predictive_window_ParamLimits

0x90d8,	// (0x00035907) popup_fep_japan_predictive_window

0x910e,	// (0x0003593d) popup_find_window

0x911b,	// (0x0003594a) popup_grid_graphic_window_ParamLimits

0x911b,	// (0x0003594a) popup_grid_graphic_window

0x9149,	// (0x00035978) popup_large_graphic_colour_window

0x916f,	// (0x0003599e) popup_menu_window_ParamLimits

0x916f,	// (0x0003599e) popup_menu_window

0x9339,	// (0x00035b68) popup_note_image_window

0x9323,	// (0x00035b52) popup_note_wait_window_ParamLimits

0x9323,	// (0x00035b52) popup_note_wait_window

0x9323,	// (0x00035b52) popup_note_window_ParamLimits

0x9323,	// (0x00035b52) popup_note_window

0x939f,	// (0x00035bce) popup_query_code_window_ParamLimits

0x939f,	// (0x00035bce) popup_query_code_window

0x93b5,	// (0x00035be4) popup_query_data_code_window_ParamLimits

0x93b5,	// (0x00035be4) popup_query_data_code_window

0x93d8,	// (0x00035c07) popup_query_data_window_ParamLimits

0x93d8,	// (0x00035c07) popup_query_data_window

0x93fa,	// (0x00035c29) popup_query_sat_info_window_ParamLimits

0x93fa,	// (0x00035c29) popup_query_sat_info_window

0x9439,	// (0x00035c68) popup_snote_single_graphic_window_ParamLimits

0x9439,	// (0x00035c68) popup_snote_single_graphic_window

0x9439,	// (0x00035c68) popup_snote_single_text_window_ParamLimits

0x9439,	// (0x00035c68) popup_snote_single_text_window

0x9450,	// (0x00035c7f) popup_sub_window_general

0x9596,	// (0x00035dc5) popup_window_general_ParamLimits

0x9596,	// (0x00035dc5) popup_window_general

0x95af,	// (0x00035dde) power_save_pane

0x5b99,	// (0x000323c8) control_pane_g1_ParamLimits

0x5b99,	// (0x000323c8) control_pane_g1

0x5bc2,	// (0x000323f1) control_pane_g2_ParamLimits

0x5bc2,	// (0x000323f1) control_pane_g2

0x8ecb,	// (0x000356fa) control_pane_g3_ParamLimits

0x8ecb,	// (0x000356fa) control_pane_g3

0x0007,

0xf7a0,	// (0x0003bfcf) control_pane_g_ParamLimits

0xf7a0,	// (0x0003bfcf) control_pane_g

0x5c0a,	// (0x00032439) control_pane_t1_ParamLimits

0x5c0a,	// (0x00032439) control_pane_t1

0x5c56,	// (0x00032485) control_pane_t2_ParamLimits

0x5c56,	// (0x00032485) control_pane_t2

0x0002,

0xf7b1,	// (0x0003bfe0) control_pane_t_ParamLimits

0xf7b1,	// (0x0003bfe0) control_pane_t

0x8dec,	// (0x0003561b) navi_navi_volume_pane_cp1

0x8df5,	// (0x00035624) status_small_icon_pane

0x8dfd,	// (0x0003562c) status_small_pane_g1_ParamLimits

0x8dfd,	// (0x0003562c) status_small_pane_g1

0x8e31,	// (0x00035660) status_small_pane_g2_ParamLimits

0x8e31,	// (0x00035660) status_small_pane_g2

0x8e3d,	// (0x0003566c) status_small_pane_g3_ParamLimits

0x8e3d,	// (0x0003566c) status_small_pane_g3

0x8e49,	// (0x00035678) status_small_pane_g4_ParamLimits

0x8e49,	// (0x00035678) status_small_pane_g4

0x8e55,	// (0x00035684) status_small_pane_g5_ParamLimits

0x8e55,	// (0x00035684) status_small_pane_g5

0x8e64,	// (0x00035693) status_small_pane_g6_ParamLimits

0x8e64,	// (0x00035693) status_small_pane_g6

0x0007,

0xf78f,	// (0x0003bfbe) status_small_pane_g_ParamLimits

0xf78f,	// (0x0003bfbe) status_small_pane_g

0x8e94,	// (0x000356c3) status_small_pane_t1

0x8eb7,	// (0x000356e6) status_small_wait_pane_ParamLimits

0x8eb7,	// (0x000356e6) status_small_wait_pane

0x866f,	// (0x00034e9e) aid_levels_signal_ParamLimits

0x866f,	// (0x00034e9e) aid_levels_signal

0x8681,	// (0x00034eb0) signal_pane_g1_ParamLimits

0x8681,	// (0x00034eb0) signal_pane_g1

0x8696,	// (0x00034ec5) signal_pane_g2_ParamLimits

0x8696,	// (0x00034ec5) signal_pane_g2

0x0003,

0xf720,	// (0x0003bf4f) signal_pane_g_ParamLimits

0xf720,	// (0x0003bf4f) signal_pane_g

0x86d1,	// (0x00034f00) context_pane_g1

0x747b,	// (0x00033caa) title_pane_g1

0x74a5,	// (0x00033cd4) title_pane_t1

0x750d,	// (0x00033d3c) title_pane_t2

0x7533,	// (0x00033d62) title_pane_t3

0x0002,

0xf56f,	// (0x0003bd9e) title_pane_t

0x99bf,	// (0x000361ee) aid_levels_battery_ParamLimits

0x99bf,	// (0x000361ee) aid_levels_battery

0x99d3,	// (0x00036202) battery_pane_g1_ParamLimits

0x99d3,	// (0x00036202) battery_pane_g1

0x99e9,	// (0x00036218) battery_pane_g2_ParamLimits

0x99e9,	// (0x00036218) battery_pane_g2

0x0001,

0xf7c3,	// (0x0003bff2) battery_pane_g_ParamLimits

0xf7c3,	// (0x0003bff2) battery_pane_g

0xac65,	// (0x00037494) uni_indicator_pane_g1

0xac7a,	// (0x000374a9) uni_indicator_pane_g2

0xac90,	// (0x000374bf) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x0003c161) uni_indicator_pane_g

0x8a6c,	// (0x0003529b) navi_icon_pane_ParamLimits

0x8a6c,	// (0x0003529b) navi_icon_pane

0x89b3,	// (0x000351e2) navi_midp_pane

0x8a88,	// (0x000352b7) navi_navi_pane

0x8a92,	// (0x000352c1) navi_text_pane_ParamLimits

0x8a92,	// (0x000352c1) navi_text_pane

0x3326,	// (0x0002fb55) status_small_wait_pane_g1

0x7977,	// (0x000341a6) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x0003c15c) status_small_wait_pane_g

0xa978,	// (0x000371a7) navi_navi_icon_text_pane

0xa980,	// (0x000371af) navi_navi_pane_g1_ParamLimits

0xa980,	// (0x000371af) navi_navi_pane_g1

0xa992,	// (0x000371c1) navi_navi_pane_g2_ParamLimits

0xa992,	// (0x000371c1) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x0003c12a) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x0003c12a) navi_navi_pane_g

0xa9a4,	// (0x000371d3) navi_navi_tabs_pane

0xa9ad,	// (0x000371dc) navi_navi_text_pane

0xa978,	// (0x000371a7) navi_navi_volume_pane

0xa951,	// (0x00037180) navi_text_pane_t1

0xa942,	// (0x00037171) navi_icon_pane_g1

0xa895,	// (0x000370c4) navi_navi_text_pane_t1

0x6035,	// (0x00032864) navi_navi_volume_pane_g1

0x603d,	// (0x0003286c) volume_small_pane

0xa7fb,	// (0x0003702a) navi_navi_icon_text_pane_g1

0xa803,	// (0x00037032) navi_navi_icon_text_pane_t1

0x8a88,	// (0x000352b7) navi_tabs_2_long_pane

0x8a88,	// (0x000352b7) navi_tabs_2_pane

0x8a88,	// (0x000352b7) navi_tabs_3_long_pane

0x8a88,	// (0x000352b7) navi_tabs_3_pane

0x8a88,	// (0x000352b7) navi_tabs_4_pane

0x6015,	// (0x00032844) tabs_2_active_pane_ParamLimits

0x6015,	// (0x00032844) tabs_2_active_pane

0x6025,	// (0x00032854) tabs_2_passive_pane_ParamLimits

0x6025,	// (0x00032854) tabs_2_passive_pane

0x5fe3,	// (0x00032812) tabs_3_active_pane_ParamLimits

0x5fe3,	// (0x00032812) tabs_3_active_pane

0x5ff3,	// (0x00032822) tabs_3_passive_pane_ParamLimits

0x5ff3,	// (0x00032822) tabs_3_passive_pane

0x6004,	// (0x00032833) tabs_3_passive_pane_cp_ParamLimits

0x6004,	// (0x00032833) tabs_3_passive_pane_cp

0x5f97,	// (0x000327c6) tabs_4_active_pane_ParamLimits

0x5f97,	// (0x000327c6) tabs_4_active_pane

0x5faa,	// (0x000327d9) tabs_4_passive_pane_ParamLimits

0x5faa,	// (0x000327d9) tabs_4_passive_pane

0x5fbb,	// (0x000327ea) tabs_4_passive_pane_cp_ParamLimits

0x5fbb,	// (0x000327ea) tabs_4_passive_pane_cp

0x5fcc,	// (0x000327fb) tabs_4_passive_pane_cp2_ParamLimits

0x5fcc,	// (0x000327fb) tabs_4_passive_pane_cp2

0x5f73,	// (0x000327a2) tabs_2_long_active_pane_ParamLimits

0x5f73,	// (0x000327a2) tabs_2_long_active_pane

0x5f85,	// (0x000327b4) tabs_2_long_passive_pane_ParamLimits

0x5f85,	// (0x000327b4) tabs_2_long_passive_pane

0x5f34,	// (0x00032763) tabs_3_long_active_pane_ParamLimits

0x5f34,	// (0x00032763) tabs_3_long_active_pane

0x5f47,	// (0x00032776) tabs_3_long_passive_pane_ParamLimits

0x5f47,	// (0x00032776) tabs_3_long_passive_pane

0x5f60,	// (0x0003278f) tabs_3_long_passive_pane_cp_ParamLimits

0x5f60,	// (0x0003278f) tabs_3_long_passive_pane_cp

0x5eda,	// (0x00032709) volume_small_pane_g1

0x5ee3,	// (0x00032712) volume_small_pane_g2

0x5eec,	// (0x0003271b) volume_small_pane_g3

0x5ef5,	// (0x00032724) volume_small_pane_g4

0x5efe,	// (0x0003272d) volume_small_pane_g5

0x5f07,	// (0x00032736) volume_small_pane_g6

0x5f10,	// (0x0003273f) volume_small_pane_g7

0x5f19,	// (0x00032748) volume_small_pane_g8

0x5f22,	// (0x00032751) volume_small_pane_g9

0x5f2b,	// (0x0003275a) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x0003c0f6) volume_small_pane_g

0x7545,	// (0x00033d74) bg_active_tab_pane_cp2_ParamLimits

0x7545,	// (0x00033d74) bg_active_tab_pane_cp2

0x7553,	// (0x00033d82) tabs_3_active_pane_g1

0x755b,	// (0x00033d8a) tabs_3_active_pane_t1

0x7545,	// (0x00033d74) bg_passive_tab_pane_cp2_ParamLimits

0x7545,	// (0x00033d74) bg_passive_tab_pane_cp2

0x7553,	// (0x00033d82) tabs_3_passive_pane_g1

0x755b,	// (0x00033d8a) tabs_3_passive_pane_t1

0x7545,	// (0x00033d74) bg_active_tab_pane_cp3_ParamLimits

0x7545,	// (0x00033d74) bg_active_tab_pane_cp3

0x756d,	// (0x00033d9c) tabs_4_active_pane_g1

0x7575,	// (0x00033da4) tabs_4_active_pane_t1

0x7545,	// (0x00033d74) bg_passive_tab_pane_cp3_ParamLimits

0x7545,	// (0x00033d74) bg_passive_tab_pane_cp3

0x756d,	// (0x00033d9c) tabs_4_1_passive_pane_g1

0x7575,	// (0x00033da4) tabs_4_1_passive_pane_t1

0x8f84,	// (0x000357b3) list_highlight_pane_cp2

0xaef4,	// (0x00037723) list_set_pane_ParamLimits

0xaef4,	// (0x00037723) list_set_pane

0xafbc,	// (0x000377eb) main_pane_set_t1_ParamLimits

0xafbc,	// (0x000377eb) main_pane_set_t1

0xafdc,	// (0x0003780b) main_pane_set_t2_ParamLimits

0xafdc,	// (0x0003780b) main_pane_set_t2

0xaff0,	// (0x0003781f) main_pane_set_t3_ParamLimits

0xaff0,	// (0x0003781f) main_pane_set_t3

0xb004,	// (0x00037833) main_pane_set_t4_ParamLimits

0xb004,	// (0x00037833) main_pane_set_t4

0x0003,

0xf997,	// (0x0003c1c6) main_pane_set_t_ParamLimits

0xf997,	// (0x0003c1c6) main_pane_set_t

0xb024,	// (0x00037853) setting_code_pane

0xb02e,	// (0x0003785d) setting_slider_graphic_pane

0xb02e,	// (0x0003785d) setting_slider_pane

0xb02e,	// (0x0003785d) setting_text_pane

0xb02e,	// (0x0003785d) setting_volume_pane

0x4edb,	// (0x0003170a) volume_set_pane

0x7545,	// (0x00033d74) bg_set_opt_pane_cp

0x4ee5,	// (0x00031714) setting_slider_pane_t1

0x4efb,	// (0x0003172a) setting_slider_pane_t2

0x4f15,	// (0x00031744) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0003bda5) setting_slider_pane_t

0x4f2d,	// (0x0003175c) slider_set_pane

0x3330,	// (0x0002fb5f) bg_set_opt_pane_cp2

0x7587,	// (0x00033db6) setting_slider_graphic_pane_g1

0x4f43,	// (0x00031772) setting_slider_graphic_pane_t1

0x4f53,	// (0x00031782) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0003bdac) setting_slider_graphic_pane_t

0x4f63,	// (0x00031792) slider_set_pane_cp

0x3330,	// (0x0002fb5f) input_focus_pane_cp1

0xaeb5,	// (0x000376e4) list_set_text_pane

0x3326,	// (0x0002fb55) setting_text_pane_g1

0x3330,	// (0x0002fb5f) input_focus_pane_cp2

0x3326,	// (0x0002fb55) setting_code_pane_g1

0x7590,	// (0x00033dbf) setting_code_pane_t1

0x408b,	// (0x000308ba) set_text_pane_t1_ParamLimits

0x408b,	// (0x000308ba) set_text_pane_t1

0x7e33,	// (0x00034662) set_opt_bg_pane_g1

0x7e3b,	// (0x0003466a) set_opt_bg_pane_g2

0xae8d,	// (0x000376bc) set_opt_bg_pane_g3

0x7e4b,	// (0x0003467a) set_opt_bg_pane_g4

0x7e53,	// (0x00034682) set_opt_bg_pane_g5

0x7e5b,	// (0x0003468a) set_opt_bg_pane_g6

0xae97,	// (0x000376c6) set_opt_bg_pane_g7

0xaea1,	// (0x000376d0) set_opt_bg_pane_g8

0xaeab,	// (0x000376da) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x0003c1b3) set_opt_bg_pane_g

0xae80,	// (0x000376af) slider_set_pane_g1

0x60e6,	// (0x00032915) slider_set_pane_g2

0x0006,

0xf975,	// (0x0003c1a4) slider_set_pane_g

0x6046,	// (0x00032875) volume_set_pane_g1

0x6050,	// (0x0003287f) volume_set_pane_g2

0x605a,	// (0x00032889) volume_set_pane_g3

0x6064,	// (0x00032893) volume_set_pane_g4

0x606e,	// (0x0003289d) volume_set_pane_g5

0x6078,	// (0x000328a7) volume_set_pane_g6

0x6082,	// (0x000328b1) volume_set_pane_g7

0x608c,	// (0x000328bb) volume_set_pane_g8

0x6096,	// (0x000328c5) volume_set_pane_g9

0x60a0,	// (0x000328cf) volume_set_pane_g10

0x0009,

0xf94d,	// (0x0003c17c) volume_set_pane_g

0x759e,	// (0x00033dcd) indicator_pane_ParamLimits

0x759e,	// (0x00033dcd) indicator_pane

0x75aa,	// (0x00033dd9) main_idle_pane_g2_ParamLimits

0x75aa,	// (0x00033dd9) main_idle_pane_g2

0x75d2,	// (0x00033e01) main_pane_idle_g1_ParamLimits

0x75d2,	// (0x00033e01) main_pane_idle_g1

0x75e0,	// (0x00033e0f) popup_clock_digital_analogue_window_ParamLimits

0x75e0,	// (0x00033e0f) popup_clock_digital_analogue_window

0x75f7,	// (0x00033e26) soft_indicator_pane_ParamLimits

0x75f7,	// (0x00033e26) soft_indicator_pane

0x7605,	// (0x00033e34) wallpaper_pane_ParamLimits

0x7605,	// (0x00033e34) wallpaper_pane

0x3326,	// (0x0002fb55) wallpaper_pane_g1

0x7619,	// (0x00033e48) indicator_pane_g1_ParamLimits

0x7619,	// (0x00033e48) indicator_pane_g1

0xb2f2,	// (0x00037b21) navi_navi_icon_text_pane_srt_g1

0x7634,	// (0x00033e63) soft_indicator_pane_t1

0x764e,	// (0x00033e7d) aid_ps_area_pane

0x765f,	// (0x00033e8e) aid_ps_clock_pane

0x766d,	// (0x00033e9c) aid_ps_indicator_pane

0x7679,	// (0x00033ea8) indicator_ps_pane_ParamLimits

0x7679,	// (0x00033ea8) indicator_ps_pane

0x7688,	// (0x00033eb7) power_save_pane_g1_ParamLimits

0x7688,	// (0x00033eb7) power_save_pane_g1

0x7694,	// (0x00033ec3) power_save_pane_g2_ParamLimits

0x7694,	// (0x00033ec3) power_save_pane_g2

0x4ada,	// (0x00031309) aid_navinavi_width_pane

0x764e,	// (0x00033e7d) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0003bdb1) power_save_pane_g_ParamLimits

0xf582,	// (0x0003bdb1) power_save_pane_g

0x76a2,	// (0x00033ed1) power_save_pane_t1_ParamLimits

0x76a2,	// (0x00033ed1) power_save_pane_t1

0x765f,	// (0x00033e8e) aid_ps_clock_pane_ParamLimits

0x766d,	// (0x00033e9c) aid_ps_indicator_pane_ParamLimits

0x76b4,	// (0x00033ee3) power_save_pane_t4_ParamLimits

0x76b4,	// (0x00033ee3) power_save_pane_t4

0x0001,

0xf587,	// (0x0003bdb6) power_save_pane_t_ParamLimits

0xf587,	// (0x0003bdb6) power_save_pane_t

0x76de,	// (0x00033f0d) power_save_t3_ParamLimits

0x76de,	// (0x00033f0d) power_save_t3

0x76c9,	// (0x00033ef8) power_save_t2_ParamLimits

0x76c9,	// (0x00033ef8) power_save_t2

0x76f3,	// (0x00033f22) indicator_ps_pane_g1

0x76fc,	// (0x00033f2b) ai_gene_pane_ParamLimits

0x76fc,	// (0x00033f2b) ai_gene_pane

0x7708,	// (0x00033f37) ai_links_pane_ParamLimits

0x7708,	// (0x00033f37) ai_links_pane

0x7714,	// (0x00033f43) indicator_pane_cp1_ParamLimits

0x7714,	// (0x00033f43) indicator_pane_cp1

0x7720,	// (0x00033f4f) main_pane_idle_g1_cp_ParamLimits

0x7720,	// (0x00033f4f) main_pane_idle_g1_cp

0x772c,	// (0x00033f5b) popup_ai_links_title_window

0x7735,	// (0x00033f64) soft_indicator_pane_cp1_ParamLimits

0x7735,	// (0x00033f64) soft_indicator_pane_cp1

0xac53,	// (0x00037482) ai_links_pane_g1

0xac5c,	// (0x0003748b) grid_ai_links_pane

0xac38,	// (0x00037467) ai_gene_pane_1

0xac41,	// (0x00037470) ai_gene_pane_2

0xac4a,	// (0x00037479) list_highlight_pane_cp4

0xac18,	// (0x00037447) cell_ai_link_pane_ParamLimits

0xac18,	// (0x00037447) cell_ai_link_pane

0xac10,	// (0x0003743f) cell_ai_link_pane_g1

0x7977,	// (0x000341a6) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x0003c157) cell_ai_link_pane_g

0x3330,	// (0x0002fb5f) grid_highlight_cp2

0x3330,	// (0x0002fb5f) bg_popup_sub_pane_cp1

0x774f,	// (0x00033f7e) popup_ai_links_title_window_t1

0xab5c,	// (0x0003738b) ai_gene_pane_1_g1_ParamLimits

0xab5c,	// (0x0003738b) ai_gene_pane_1_g1

0xab68,	// (0x00037397) ai_gene_pane_1_g2_ParamLimits

0xab68,	// (0x00037397) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x0003c14d) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x0003c14d) ai_gene_pane_1_g

0xab75,	// (0x000373a4) ai_gene_pane_1_t1_ParamLimits

0xab75,	// (0x000373a4) ai_gene_pane_1_t1

0xaba9,	// (0x000373d8) grid_ai_soft_ind_pane

0xab47,	// (0x00037376) ai_gene_pane_2_t1_ParamLimits

0xab47,	// (0x00037376) ai_gene_pane_2_t1

0x775e,	// (0x00033f8d) main_pane_empty_t1_ParamLimits

0x775e,	// (0x00033f8d) main_pane_empty_t1

0x7776,	// (0x00033fa5) main_pane_empty_t2_ParamLimits

0x7776,	// (0x00033fa5) main_pane_empty_t2

0x778b,	// (0x00033fba) main_pane_empty_t3_ParamLimits

0x778b,	// (0x00033fba) main_pane_empty_t3

0x779d,	// (0x00033fcc) main_pane_empty_t4_ParamLimits

0x779d,	// (0x00033fcc) main_pane_empty_t4

0x77af,	// (0x00033fde) main_pane_empty_t5_ParamLimits

0x77af,	// (0x00033fde) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0003bdbb) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0003bdbb) main_pane_empty_t

0x7e84,	// (0x000346b3) bg_popup_window_pane_ParamLimits

0x7e84,	// (0x000346b3) bg_popup_window_pane

0xa8a3,	// (0x000370d2) find_popup_pane_cp2_ParamLimits

0xa8a3,	// (0x000370d2) find_popup_pane_cp2

0xa8af,	// (0x000370de) heading_pane_ParamLimits

0xa8af,	// (0x000370de) heading_pane

0x3330,	// (0x0002fb5f) bg_popup_sub_pane

0xa81d,	// (0x0003704c) bg_popup_window_pane_g1_ParamLimits

0xa81d,	// (0x0003704c) bg_popup_window_pane_g1

0xa829,	// (0x00037058) bg_popup_window_pane_g2_ParamLimits

0xa829,	// (0x00037058) bg_popup_window_pane_g2

0xa835,	// (0x00037064) bg_popup_window_pane_g3_ParamLimits

0xa835,	// (0x00037064) bg_popup_window_pane_g3

0xa841,	// (0x00037070) bg_popup_window_pane_g4_ParamLimits

0xa841,	// (0x00037070) bg_popup_window_pane_g4

0xa84d,	// (0x0003707c) bg_popup_window_pane_g5_ParamLimits

0xa84d,	// (0x0003707c) bg_popup_window_pane_g5

0xa859,	// (0x00037088) bg_popup_window_pane_g6_ParamLimits

0xa859,	// (0x00037088) bg_popup_window_pane_g6

0xa865,	// (0x00037094) bg_popup_window_pane_g7_ParamLimits

0xa865,	// (0x00037094) bg_popup_window_pane_g7

0xa871,	// (0x000370a0) bg_popup_window_pane_g8_ParamLimits

0xa871,	// (0x000370a0) bg_popup_window_pane_g8

0xa87d,	// (0x000370ac) bg_popup_window_pane_g9_ParamLimits

0xa87d,	// (0x000370ac) bg_popup_window_pane_g9

0xa889,	// (0x000370b8) bg_popup_window_pane_g10_ParamLimits

0xa889,	// (0x000370b8) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x0003c115) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x0003c115) bg_popup_window_pane_g

0xa7b2,	// (0x00036fe1) bg_popup_heading_pane_ParamLimits

0xa7b2,	// (0x00036fe1) bg_popup_heading_pane

0x620c,	// (0x00032a3b) tabs_4_passive_pane_cp_srt_ParamLimits

0x620c,	// (0x00032a3b) tabs_4_passive_pane_cp_srt

0x621e,	// (0x00032a4d) tabs_4_passive_pane_srt_ParamLimits

0xa7c6,	// (0x00036ff5) heading_pane_g2

0x621e,	// (0x00032a4d) tabs_4_passive_pane_srt

0x8f84,	// (0x000357b3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8f84,	// (0x000357b3) bg_passive_tab_pane_cp3_srt

0xa7ce,	// (0x00036ffd) heading_pane_t1_ParamLimits

0xa7ce,	// (0x00036ffd) heading_pane_t1

0xa7e5,	// (0x00037014) heading_pane_t2_ParamLimits

0xa7e5,	// (0x00037014) heading_pane_t2

0x0001,

0xf8e1,	// (0x0003c110) heading_pane_t_ParamLimits

0xf8e1,	// (0x0003c110) heading_pane_t

0xa2dd,	// (0x00036b0c) bg_popup_heading_pane_g1

0xa38c,	// (0x00036bbb) bg_popup_heading_pane_g2

0xa396,	// (0x00036bc5) bg_popup_heading_pane_g3

0xa3a0,	// (0x00036bcf) bg_popup_heading_pane_g4

0xa3aa,	// (0x00036bd9) bg_popup_heading_pane_g5

0xa3b4,	// (0x00036be3) bg_popup_heading_pane_g6

0xa3bc,	// (0x00036beb) bg_popup_heading_pane_g7

0xa3c4,	// (0x00036bf3) bg_popup_heading_pane_g8

0xa3ce,	// (0x00036bfd) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x0003c0cc) bg_popup_heading_pane_g

0x9ac1,	// (0x000362f0) bg_popup_sub_pane_g1

0x9ad1,	// (0x00036300) bg_popup_sub_pane_g2

0x9ac9,	// (0x000362f8) bg_popup_sub_pane_g3

0x9ae1,	// (0x00036310) bg_popup_sub_pane_g4

0x9ad9,	// (0x00036308) bg_popup_sub_pane_g5

0x9ae9,	// (0x00036318) bg_popup_sub_pane_g6

0x9af1,	// (0x00036320) bg_popup_sub_pane_g7

0x9b01,	// (0x00036330) bg_popup_sub_pane_g8

0x9af9,	// (0x00036328) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x0003c0a6) bg_popup_sub_pane_g

0x77c1,	// (0x00033ff0) bg_popup_window_pane_cp5_ParamLimits

0x77c1,	// (0x00033ff0) bg_popup_window_pane_cp5

0x77dd,	// (0x0003400c) popup_note_window_g1_ParamLimits

0x77dd,	// (0x0003400c) popup_note_window_g1

0x77e9,	// (0x00034018) popup_note_window_t1_ParamLimits

0x77e9,	// (0x00034018) popup_note_window_t1

0x77ff,	// (0x0003402e) popup_note_window_t2_ParamLimits

0x77ff,	// (0x0003402e) popup_note_window_t2

0x7815,	// (0x00034044) popup_note_window_t3_ParamLimits

0x7815,	// (0x00034044) popup_note_window_t3

0x782b,	// (0x0003405a) popup_note_window_t4_ParamLimits

0x782b,	// (0x0003405a) popup_note_window_t4

0x7853,	// (0x00034082) popup_note_window_t5_ParamLimits

0x7853,	// (0x00034082) popup_note_window_t5

0x0004,

0xf597,	// (0x0003bdc6) popup_note_window_t_ParamLimits

0xf597,	// (0x0003bdc6) popup_note_window_t

0x7877,	// (0x000340a6) bg_popup_window_pane_cp6_ParamLimits

0x7877,	// (0x000340a6) bg_popup_window_pane_cp6

0xa259,	// (0x00036a88) popup_note_image_window_g1_ParamLimits

0xa259,	// (0x00036a88) popup_note_image_window_g1

0xa265,	// (0x00036a94) popup_note_image_window_g2_ParamLimits

0xa265,	// (0x00036a94) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x0003c09a) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x0003c09a) popup_note_image_window_g

0xa27e,	// (0x00036aad) popup_note_image_window_t1_ParamLimits

0xa27e,	// (0x00036aad) popup_note_image_window_t1

0xa297,	// (0x00036ac6) popup_note_image_window_t2_ParamLimits

0xa297,	// (0x00036ac6) popup_note_image_window_t2

0xa2b0,	// (0x00036adf) popup_note_image_window_t3_ParamLimits

0xa2b0,	// (0x00036adf) popup_note_image_window_t3

0x0002,

0xf870,	// (0x0003c09f) popup_note_image_window_t_ParamLimits

0xf870,	// (0x0003c09f) popup_note_image_window_t

0xa119,	// (0x00036948) bg_popup_window_pane_cp7_ParamLimits

0xa119,	// (0x00036948) bg_popup_window_pane_cp7

0xa149,	// (0x00036978) popup_note_wait_window_g1_ParamLimits

0xa149,	// (0x00036978) popup_note_wait_window_g1

0xa155,	// (0x00036984) popup_note_wait_window_g2_ParamLimits

0xa155,	// (0x00036984) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x0003c088) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x0003c088) popup_note_wait_window_g

0xa16d,	// (0x0003699c) popup_note_wait_window_t1_ParamLimits

0xa16d,	// (0x0003699c) popup_note_wait_window_t1

0xa194,	// (0x000369c3) popup_note_wait_window_t2_ParamLimits

0xa194,	// (0x000369c3) popup_note_wait_window_t2

0xa1b2,	// (0x000369e1) popup_note_wait_window_t3_ParamLimits

0xa1b2,	// (0x000369e1) popup_note_wait_window_t3

0xa1c5,	// (0x000369f4) popup_note_wait_window_t4_ParamLimits

0xa1c5,	// (0x000369f4) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x0003c08f) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x0003c08f) popup_note_wait_window_t

0xa1ea,	// (0x00036a19) wait_bar_pane_ParamLimits

0xa1ea,	// (0x00036a19) wait_bar_pane

0x3330,	// (0x0002fb5f) wait_anim_pane

0x3330,	// (0x0002fb5f) wait_border_pane

0x3326,	// (0x0002fb55) wait_anim_pane_g1

0x3326,	// (0x0002fb55) wait_anim_pane_g2

0x0001,

0xf71b,	// (0x0003bf4a) wait_anim_pane_g

0xa0bd,	// (0x000368ec) wait_border_pane_g1

0xa0c8,	// (0x000368f7) wait_border_pane_g2

0xa0d1,	// (0x00036900) wait_border_pane_g3

0x0002,

0xf852,	// (0x0003c081) wait_border_pane_g

0x9f27,	// (0x00036756) bg_popup_window_pane_cp16_ParamLimits

0x9f27,	// (0x00036756) bg_popup_window_pane_cp16

0xa027,	// (0x00036856) indicator_popup_pane_cp4_ParamLimits

0xa027,	// (0x00036856) indicator_popup_pane_cp4

0xa03b,	// (0x0003686a) popup_query_data_window_t1_ParamLimits

0xa03b,	// (0x0003686a) popup_query_data_window_t1

0xa04d,	// (0x0003687c) popup_query_data_window_t2_ParamLimits

0xa04d,	// (0x0003687c) popup_query_data_window_t2

0xa066,	// (0x00036895) popup_query_data_window_t3_ParamLimits

0xa066,	// (0x00036895) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x0003c07a) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x0003c07a) popup_query_data_window_t

0xa080,	// (0x000368af) query_popup_data_pane_ParamLimits

0xa080,	// (0x000368af) query_popup_data_pane

0xa094,	// (0x000368c3) query_popup_data_pane_cp1_ParamLimits

0xa094,	// (0x000368c3) query_popup_data_pane_cp1

0x9f27,	// (0x00036756) bg_popup_window_pane_cp10_ParamLimits

0x9f27,	// (0x00036756) bg_popup_window_pane_cp10

0x9f59,	// (0x00036788) indicator_popup_pane_ParamLimits

0x9f59,	// (0x00036788) indicator_popup_pane

0x9f7b,	// (0x000367aa) popup_query_code_window_t1_ParamLimits

0x9f7b,	// (0x000367aa) popup_query_code_window_t1

0x9f95,	// (0x000367c4) popup_query_code_window_t2_ParamLimits

0x9f95,	// (0x000367c4) popup_query_code_window_t2

0x9fde,	// (0x0003680d) popup_query_code_window_t3_ParamLimits

0x9fde,	// (0x0003680d) popup_query_code_window_t3

0x0002,

0xf844,	// (0x0003c073) popup_query_code_window_t_ParamLimits

0xf844,	// (0x0003c073) popup_query_code_window_t

0xa00d,	// (0x0003683c) query_popup_pane_ParamLimits

0xa00d,	// (0x0003683c) query_popup_pane

0x7877,	// (0x000340a6) bg_popup_window_pane_cp15_ParamLimits

0x7877,	// (0x000340a6) bg_popup_window_pane_cp15

0x7897,	// (0x000340c6) indicator_popup_pane_cp1_ParamLimits

0x7897,	// (0x000340c6) indicator_popup_pane_cp1

0x78aa,	// (0x000340d9) indicator_popup_pane_cp2_ParamLimits

0x78aa,	// (0x000340d9) indicator_popup_pane_cp2

0x78c5,	// (0x000340f4) popup_query_data_code_window_g1_ParamLimits

0x78c5,	// (0x000340f4) popup_query_data_code_window_g1

0x78d8,	// (0x00034107) popup_query_data_code_window_t1_ParamLimits

0x78d8,	// (0x00034107) popup_query_data_code_window_t1

0x78ea,	// (0x00034119) popup_query_data_code_window_t2_ParamLimits

0x78ea,	// (0x00034119) popup_query_data_code_window_t2

0x78fc,	// (0x0003412b) popup_query_data_code_window_t3_ParamLimits

0x78fc,	// (0x0003412b) popup_query_data_code_window_t3

0x7912,	// (0x00034141) popup_query_data_code_window_t4_ParamLimits

0x7912,	// (0x00034141) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0003bdd1) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0003bdd1) popup_query_data_code_window_t

0x5d82,	// (0x000325b1) list_single_midp_graphic_pane_g3

0x792c,	// (0x0003415b) query_popup_data_pane_cp2_ParamLimits

0x793f,	// (0x0003416e) query_popup_pane_cp2_ParamLimits

0x793f,	// (0x0003416e) query_popup_pane_cp2

0x3330,	// (0x0002fb5f) bg_popup_window_pane_cp11

0x9f1f,	// (0x0003674e) heading_pane_cp5

0x7a2f,	// (0x0003425e) listscroll_popup_info_pane

0x3330,	// (0x0002fb5f) input_focus_pane_cp3

0x795a,	// (0x00034189) query_popup_pane_t1

0x7968,	// (0x00034197) list_popup_info_pane_ParamLimits

0x7968,	// (0x00034197) list_popup_info_pane

0x7977,	// (0x000341a6) listscroll_popup_info_pane_g1

0x797f,	// (0x000341ae) scroll_pane_cp7

0x7989,	// (0x000341b8) popup_info_list_pane_t1_ParamLimits

0x7989,	// (0x000341b8) popup_info_list_pane_t1

0x79a3,	// (0x000341d2) popup_info_list_pane_t2_ParamLimits

0x79a3,	// (0x000341d2) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0003bdda) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0003bdda) popup_info_list_pane_t

0x3330,	// (0x0002fb5f) bg_popup_window_pane_cp12

0xb30c,	// (0x00037b3b) find_popup_pane

0x7545,	// (0x00033d74) bg_popup_window_pane_cp3

0x79bd,	// (0x000341ec) heading_pane_cp3

0x79c9,	// (0x000341f8) listscroll_popup_graphic_pane

0x3330,	// (0x0002fb5f) bg_popup_window_pane_cp4

0x7a25,	// (0x00034254) heading_pane_cp4

0x7a2f,	// (0x0003425e) listscroll_popup_colour_pane

0x7a37,	// (0x00034266) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7a37,	// (0x00034266) cell_large_graphic_colour_none_popup_pane

0x7a4b,	// (0x0003427a) grid_large_graphic_colour_popup_pane_ParamLimits

0x7a4b,	// (0x0003427a) grid_large_graphic_colour_popup_pane

0x7a77,	// (0x000342a6) listscroll_popup_colour_pane_g1_ParamLimits

0x7a77,	// (0x000342a6) listscroll_popup_colour_pane_g1

0x7a8e,	// (0x000342bd) listscroll_popup_colour_pane_g2_ParamLimits

0x7a8e,	// (0x000342bd) listscroll_popup_colour_pane_g2

0x7aa5,	// (0x000342d4) listscroll_popup_colour_pane_g3_ParamLimits

0x7aa5,	// (0x000342d4) listscroll_popup_colour_pane_g3

0x7ab5,	// (0x000342e4) listscroll_popup_colour_pane_g4_ParamLimits

0x7ab5,	// (0x000342e4) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0003bddf) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0003bddf) listscroll_popup_colour_pane_g

0x7ac9,	// (0x000342f8) scroll_pane_cp6_ParamLimits

0x7ac9,	// (0x000342f8) scroll_pane_cp6

0x7adb,	// (0x0003430a) cell_large_graphic_colour_popup_pane_ParamLimits

0x7adb,	// (0x0003430a) cell_large_graphic_colour_popup_pane

0x7b00,	// (0x0003432f) cell_large_graphic_colour_none_popup_pane_t1

0x3330,	// (0x0002fb5f) grid_highlight_pane_cp5

0x7b0f,	// (0x0003433e) cell_large_graphic_colour_popup_pane_g1

0x7b17,	// (0x00034346) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0003bde8) cell_large_graphic_colour_popup_pane_g

0x7b1f,	// (0x0003434e) cell_large_graphic_colour_popup_pane_g2_copy1

0x7b28,	// (0x00034357) grid_highlight_pane_cp4

0x7b30,	// (0x0003435f) bg_popup_window_pane_cp8_ParamLimits

0x7b30,	// (0x0003435f) bg_popup_window_pane_cp8

0x7b4b,	// (0x0003437a) popup_snote_single_text_window_g1_ParamLimits

0x7b4b,	// (0x0003437a) popup_snote_single_text_window_g1

0x7b5d,	// (0x0003438c) popup_snote_single_text_window_t1_ParamLimits

0x7b5d,	// (0x0003438c) popup_snote_single_text_window_t1

0x7b70,	// (0x0003439f) popup_snote_single_text_window_t2_ParamLimits

0x7b70,	// (0x0003439f) popup_snote_single_text_window_t2

0x7b83,	// (0x000343b2) popup_snote_single_text_window_t3_ParamLimits

0x7b83,	// (0x000343b2) popup_snote_single_text_window_t3

0x7bbc,	// (0x000343eb) popup_snote_single_text_window_t4_ParamLimits

0x7bbc,	// (0x000343eb) popup_snote_single_text_window_t4

0x7bf0,	// (0x0003441f) popup_snote_single_text_window_t5_ParamLimits

0x7bf0,	// (0x0003441f) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0003bded) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0003bded) popup_snote_single_text_window_t

0x7c1f,	// (0x0003444e) bg_popup_window_pane_cp9_ParamLimits

0x7c1f,	// (0x0003444e) bg_popup_window_pane_cp9

0x7b4b,	// (0x0003437a) popup_snote_single_graphic_window_g1_ParamLimits

0x7b4b,	// (0x0003437a) popup_snote_single_graphic_window_g1

0x7c2d,	// (0x0003445c) popup_snote_single_graphic_window_g2_ParamLimits

0x7c2d,	// (0x0003445c) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0003bdf8) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0003bdf8) popup_snote_single_graphic_window_g

0x7c39,	// (0x00034468) popup_snote_single_graphic_window_t1_ParamLimits

0x7c39,	// (0x00034468) popup_snote_single_graphic_window_t1

0x7c4c,	// (0x0003447b) popup_snote_single_graphic_window_t2_ParamLimits

0x7c4c,	// (0x0003447b) popup_snote_single_graphic_window_t2

0x7c5f,	// (0x0003448e) popup_snote_single_graphic_window_t3_ParamLimits

0x7c5f,	// (0x0003448e) popup_snote_single_graphic_window_t3

0x7c98,	// (0x000344c7) popup_snote_single_graphic_window_t4_ParamLimits

0x7c98,	// (0x000344c7) popup_snote_single_graphic_window_t4

0x7ccc,	// (0x000344fb) popup_snote_single_graphic_window_t5_ParamLimits

0x7ccc,	// (0x000344fb) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0003bdfd) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0003bdfd) popup_snote_single_graphic_window_t

0xb24a,	// (0x00037a79) grid_graphic_popup_pane_ParamLimits

0xb24a,	// (0x00037a79) grid_graphic_popup_pane

0xb278,	// (0x00037aa7) listscroll_popup_graphic_pane_g1_ParamLimits

0xb278,	// (0x00037aa7) listscroll_popup_graphic_pane_g1

0xb28c,	// (0x00037abb) listscroll_popup_graphic_pane_g2_ParamLimits

0xb28c,	// (0x00037abb) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x0003c1f0) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x0003c1f0) listscroll_popup_graphic_pane_g

0xb2a0,	// (0x00037acf) scroll_pane_cp5

0xb1f2,	// (0x00037a21) cell_graphic_popup_pane_ParamLimits

0xb1f2,	// (0x00037a21) cell_graphic_popup_pane

0xb1d3,	// (0x00037a02) cell_graphic_popup_pane_g1

0xb1db,	// (0x00037a0a) cell_graphic_popup_pane_g2

0x7b1f,	// (0x0003434e) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x0003c1e9) cell_graphic_popup_pane_g

0xb1e4,	// (0x00037a13) cell_graphic_popup_pane_t2

0x7b28,	// (0x00034357) grid_highlight_pane_cp3

0x7d0d,	// (0x0003453c) list_gen_pane_ParamLimits

0x7d0d,	// (0x0003453c) list_gen_pane

0x7d3f,	// (0x0003456e) scroll_pane

0xb135,	// (0x00037964) bg_list_pane_g1_ParamLimits

0xb135,	// (0x00037964) bg_list_pane_g1

0xb150,	// (0x0003797f) bg_list_pane_g2_ParamLimits

0xb150,	// (0x0003797f) bg_list_pane_g2

0xb163,	// (0x00037992) bg_list_pane_g3_ParamLimits

0xb163,	// (0x00037992) bg_list_pane_g3

0xb175,	// (0x000379a4) bg_list_pane_g4_ParamLimits

0xb175,	// (0x000379a4) bg_list_pane_g4

0xb187,	// (0x000379b6) bg_list_pane_g5_ParamLimits

0xb187,	// (0x000379b6) bg_list_pane_g5

0x0004,

0xf9af,	// (0x0003c1de) bg_list_pane_g_ParamLimits

0xf9af,	// (0x0003c1de) bg_list_pane_g

0x618e,	// (0x000329bd) list_double2_graphic_large_graphic_pane_ParamLimits

0x618e,	// (0x000329bd) list_double2_graphic_large_graphic_pane

0x618e,	// (0x000329bd) list_double2_graphic_pane_ParamLimits

0x618e,	// (0x000329bd) list_double2_graphic_pane

0x618e,	// (0x000329bd) list_double2_large_graphic_pane_ParamLimits

0x618e,	// (0x000329bd) list_double2_large_graphic_pane

0xb0c6,	// (0x000378f5) list_double2_pane_ParamLimits

0xb0c6,	// (0x000378f5) list_double2_pane

0x618e,	// (0x000329bd) list_double_graphic_heading_pane_ParamLimits

0x618e,	// (0x000329bd) list_double_graphic_heading_pane

0x618e,	// (0x000329bd) list_double_graphic_pane_ParamLimits

0x618e,	// (0x000329bd) list_double_graphic_pane

0x618e,	// (0x000329bd) list_double_heading_pane_ParamLimits

0x618e,	// (0x000329bd) list_double_heading_pane

0x618e,	// (0x000329bd) list_double_large_graphic_pane_ParamLimits

0x618e,	// (0x000329bd) list_double_large_graphic_pane

0x618e,	// (0x000329bd) list_double_number_pane_ParamLimits

0x618e,	// (0x000329bd) list_double_number_pane

0x618e,	// (0x000329bd) list_double_pane_ParamLimits

0x618e,	// (0x000329bd) list_double_pane

0x618e,	// (0x000329bd) list_double_time_pane_ParamLimits

0x618e,	// (0x000329bd) list_double_time_pane

0x618e,	// (0x000329bd) list_setting_number_pane_ParamLimits

0x618e,	// (0x000329bd) list_setting_number_pane

0x618e,	// (0x000329bd) list_setting_pane_ParamLimits

0x618e,	// (0x000329bd) list_setting_pane

0xb0f1,	// (0x00037920) list_single_2graphic_pane_ParamLimits

0xb0f1,	// (0x00037920) list_single_2graphic_pane

0xb0f1,	// (0x00037920) list_single_graphic_heading_pane_ParamLimits

0xb0f1,	// (0x00037920) list_single_graphic_heading_pane

0xb0f1,	// (0x00037920) list_single_graphic_pane_ParamLimits

0xb0f1,	// (0x00037920) list_single_graphic_pane

0xb0f1,	// (0x00037920) list_single_heading_pane_ParamLimits

0xb0f1,	// (0x00037920) list_single_heading_pane

0x61cd,	// (0x000329fc) list_single_large_graphic_pane_ParamLimits

0x61cd,	// (0x000329fc) list_single_large_graphic_pane

0xb0f1,	// (0x00037920) list_single_number_heading_pane_ParamLimits

0xb0f1,	// (0x00037920) list_single_number_heading_pane

0xb0f1,	// (0x00037920) list_single_number_pane_ParamLimits

0xb0f1,	// (0x00037920) list_single_number_pane

0xb0f1,	// (0x00037920) list_single_pane_ParamLimits

0xb0f1,	// (0x00037920) list_single_pane

0x3330,	// (0x0002fb5f) list_highlight_pane_cp1

0x40bb,	// (0x000308ea) list_single_pane_g1_ParamLimits

0x40bb,	// (0x000308ea) list_single_pane_g1

0x4f77,	// (0x000317a6) list_single_pane_g2_ParamLimits

0x4f77,	// (0x000317a6) list_single_pane_g2

0x0001,

0xf5e0,	// (0x0003be0f) list_single_pane_g_ParamLimits

0xf5e0,	// (0x0003be0f) list_single_pane_g

0x6178,	// (0x000329a7) list_single_pane_t1_ParamLimits

0x6178,	// (0x000329a7) list_single_pane_t1

0x40bb,	// (0x000308ea) list_single_number_pane_g1_ParamLimits

0x40bb,	// (0x000308ea) list_single_number_pane_g1

0x4f77,	// (0x000317a6) list_single_number_pane_g2_ParamLimits

0x4f77,	// (0x000317a6) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x0003be0f) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x0003be0f) list_single_number_pane_g

0x60aa,	// (0x000328d9) list_single_number_pane_t1_ParamLimits

0x60aa,	// (0x000328d9) list_single_number_pane_t1

0x60c0,	// (0x000328ef) list_single_number_pane_t2_ParamLimits

0x60c0,	// (0x000328ef) list_single_number_pane_t2

0x0001,

0xf970,	// (0x0003c19f) list_single_number_pane_t_ParamLimits

0xf970,	// (0x0003c19f) list_single_number_pane_t

0x4f6b,	// (0x0003179a) list_single_graphic_pane_g1_ParamLimits

0x4f6b,	// (0x0003179a) list_single_graphic_pane_g1

0x40bb,	// (0x000308ea) list_single_graphic_pane_g2_ParamLimits

0x40bb,	// (0x000308ea) list_single_graphic_pane_g2

0x4f77,	// (0x000317a6) list_single_graphic_pane_g3_ParamLimits

0x4f77,	// (0x000317a6) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0003be08) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0003be08) list_single_graphic_pane_g

0x4f83,	// (0x000317b2) list_single_graphic_pane_t1_ParamLimits

0x4f83,	// (0x000317b2) list_single_graphic_pane_t1

0x40bb,	// (0x000308ea) list_single_heading_pane_g1_ParamLimits

0x40bb,	// (0x000308ea) list_single_heading_pane_g1

0x4f77,	// (0x000317a6) list_single_heading_pane_g2_ParamLimits

0x4f77,	// (0x000317a6) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0003be0f) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0003be0f) list_single_heading_pane_g

0x4f99,	// (0x000317c8) list_single_heading_pane_t1_ParamLimits

0x4f99,	// (0x000317c8) list_single_heading_pane_t1

0x4faf,	// (0x000317de) list_single_heading_pane_t2_ParamLimits

0x4faf,	// (0x000317de) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0003be14) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0003be14) list_single_heading_pane_t

0x40bb,	// (0x000308ea) list_single_number_heading_pane_g1_ParamLimits

0x40bb,	// (0x000308ea) list_single_number_heading_pane_g1

0x4f77,	// (0x000317a6) list_single_number_heading_pane_g2_ParamLimits

0x4f77,	// (0x000317a6) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x0003be0f) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x0003be0f) list_single_number_heading_pane_g

0x4f99,	// (0x000317c8) list_single_number_heading_pane_t1_ParamLimits

0x4f99,	// (0x000317c8) list_single_number_heading_pane_t1

0x4fc1,	// (0x000317f0) list_single_number_heading_pane_t2_ParamLimits

0x4fc1,	// (0x000317f0) list_single_number_heading_pane_t2

0x4fd3,	// (0x00031802) list_single_number_heading_pane_t3_ParamLimits

0x4fd3,	// (0x00031802) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x0003be19) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x0003be19) list_single_number_heading_pane_t

0x4fe5,	// (0x00031814) list_single_graphic_heading_pane_g1_ParamLimits

0x4fe5,	// (0x00031814) list_single_graphic_heading_pane_g1

0x4ff1,	// (0x00031820) list_single_graphic_heading_pane_g4_ParamLimits

0x4ff1,	// (0x00031820) list_single_graphic_heading_pane_g4

0x4f77,	// (0x000317a6) list_single_graphic_heading_pane_g5_ParamLimits

0x4f77,	// (0x000317a6) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x0003be20) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x0003be20) list_single_graphic_heading_pane_g

0x4f99,	// (0x000317c8) list_single_graphic_heading_pane_t1_ParamLimits

0x4f99,	// (0x000317c8) list_single_graphic_heading_pane_t1

0x5002,	// (0x00031831) list_single_graphic_heading_pane_t2_ParamLimits

0x5002,	// (0x00031831) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x0003be27) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x0003be27) list_single_graphic_heading_pane_t

0x5014,	// (0x00031843) list_single_large_graphic_pane_g1_ParamLimits

0x5014,	// (0x00031843) list_single_large_graphic_pane_g1

0x40bb,	// (0x000308ea) list_single_large_graphic_pane_g2_ParamLimits

0x40bb,	// (0x000308ea) list_single_large_graphic_pane_g2

0x4f77,	// (0x000317a6) list_single_large_graphic_pane_g3_ParamLimits

0x4f77,	// (0x000317a6) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x0003be2c) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x0003be2c) list_single_large_graphic_pane_g

0xa0c8,	// (0x000368f7) wait_border_pane_g2_copy1

0x5020,	// (0x0003184f) list_single_large_graphic_pane_g4_cp2

0x4f99,	// (0x000317c8) list_single_large_graphic_pane_t1_ParamLimits

0x4f99,	// (0x000317c8) list_single_large_graphic_pane_t1

0x5028,	// (0x00031857) list_double_pane_g1_ParamLimits

0x5028,	// (0x00031857) list_double_pane_g1

0x5034,	// (0x00031863) list_double_pane_g2_ParamLimits

0x5034,	// (0x00031863) list_double_pane_g2

0x0001,

0xf604,	// (0x0003be33) list_double_pane_g_ParamLimits

0xf604,	// (0x0003be33) list_double_pane_g

0x5040,	// (0x0003186f) list_double_pane_t1_ParamLimits

0x5040,	// (0x0003186f) list_double_pane_t1

0x5056,	// (0x00031885) list_double_pane_t2_ParamLimits

0x5056,	// (0x00031885) list_double_pane_t2

0x0001,

0xf609,	// (0x0003be38) list_double_pane_t_ParamLimits

0xf609,	// (0x0003be38) list_double_pane_t

0x5068,	// (0x00031897) list_double2_pane_g1_ParamLimits

0x5068,	// (0x00031897) list_double2_pane_g1

0x5079,	// (0x000318a8) list_double2_pane_g2_ParamLimits

0x5079,	// (0x000318a8) list_double2_pane_g2

0x0001,

0xf60e,	// (0x0003be3d) list_double2_pane_g_ParamLimits

0xf60e,	// (0x0003be3d) list_double2_pane_g

0x5085,	// (0x000318b4) list_double2_pane_t1_ParamLimits

0x5085,	// (0x000318b4) list_double2_pane_t1

0x509b,	// (0x000318ca) list_double2_pane_t2_ParamLimits

0x509b,	// (0x000318ca) list_double2_pane_t2

0x0001,

0xf613,	// (0x0003be42) list_double2_pane_t_ParamLimits

0xf613,	// (0x0003be42) list_double2_pane_t

0x5028,	// (0x00031857) list_double_number_pane_g1_ParamLimits

0x5028,	// (0x00031857) list_double_number_pane_g1

0x5034,	// (0x00031863) list_double_number_pane_g2_ParamLimits

0x5034,	// (0x00031863) list_double_number_pane_g2

0x0001,

0xf604,	// (0x0003be33) list_double_number_pane_g_ParamLimits

0xf604,	// (0x0003be33) list_double_number_pane_g

0x50ad,	// (0x000318dc) list_double_number_pane_t1_ParamLimits

0x50ad,	// (0x000318dc) list_double_number_pane_t1

0x50bf,	// (0x000318ee) list_double_number_pane_t2_ParamLimits

0x50bf,	// (0x000318ee) list_double_number_pane_t2

0x50d5,	// (0x00031904) list_double_number_pane_t3_ParamLimits

0x50d5,	// (0x00031904) list_double_number_pane_t3

0x0002,

0xf618,	// (0x0003be47) list_double_number_pane_t_ParamLimits

0xf618,	// (0x0003be47) list_double_number_pane_t

0x50e7,	// (0x00031916) list_double_graphic_pane_g1_ParamLimits

0x50e7,	// (0x00031916) list_double_graphic_pane_g1

0x50f3,	// (0x00031922) list_double_graphic_pane_g2_ParamLimits

0x50f3,	// (0x00031922) list_double_graphic_pane_g2

0x5102,	// (0x00031931) list_double_graphic_pane_g3_ParamLimits

0x5102,	// (0x00031931) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x0003be4e) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x0003be4e) list_double_graphic_pane_g

0x511a,	// (0x00031949) list_double_graphic_pane_t1_ParamLimits

0x511a,	// (0x00031949) list_double_graphic_pane_t1

0x5130,	// (0x0003195f) list_double_graphic_pane_t2_ParamLimits

0x5130,	// (0x0003195f) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x0003be57) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x0003be57) list_double_graphic_pane_t

0x5142,	// (0x00031971) list_double2_graphic_pane_g1_ParamLimits

0x5142,	// (0x00031971) list_double2_graphic_pane_g1

0x514e,	// (0x0003197d) list_double2_graphic_pane_g2_ParamLimits

0x514e,	// (0x0003197d) list_double2_graphic_pane_g2

0x515a,	// (0x00031989) list_double2_graphic_pane_g3_ParamLimits

0x515a,	// (0x00031989) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x0003be5c) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x0003be5c) list_double2_graphic_pane_g

0x5166,	// (0x00031995) list_double2_graphic_pane_t1_ParamLimits

0x5166,	// (0x00031995) list_double2_graphic_pane_t1

0x517c,	// (0x000319ab) list_double2_graphic_pane_t2_ParamLimits

0x517c,	// (0x000319ab) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x0003be63) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x0003be63) list_double2_graphic_pane_t

0x518e,	// (0x000319bd) list_double_large_graphic_pane_g1_ParamLimits

0x518e,	// (0x000319bd) list_double_large_graphic_pane_g1

0x51b9,	// (0x000319e8) list_double_large_graphic_pane_g2_ParamLimits

0x51b9,	// (0x000319e8) list_double_large_graphic_pane_g2

0x5034,	// (0x00031863) list_double_large_graphic_pane_g3_ParamLimits

0x5034,	// (0x00031863) list_double_large_graphic_pane_g3

0x51ca,	// (0x000319f9) list_double_large_graphic_pane_g4_ParamLimits

0x51ca,	// (0x000319f9) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x0003be68) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x0003be68) list_double_large_graphic_pane_g

0x51dd,	// (0x00031a0c) list_double_large_graphic_pane_t1_ParamLimits

0x51dd,	// (0x00031a0c) list_double_large_graphic_pane_t1

0x51f6,	// (0x00031a25) list_double_large_graphic_pane_t2_ParamLimits

0x51f6,	// (0x00031a25) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x0003be73) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x0003be73) list_double_large_graphic_pane_t

0x5208,	// (0x00031a37) list_double2_large_graphic_pane_g1_ParamLimits

0x5208,	// (0x00031a37) list_double2_large_graphic_pane_g1

0x5214,	// (0x00031a43) list_double2_large_graphic_pane_g2_ParamLimits

0x5214,	// (0x00031a43) list_double2_large_graphic_pane_g2

0x5225,	// (0x00031a54) list_double2_large_graphic_pane_g3_ParamLimits

0x5225,	// (0x00031a54) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x0003be78) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x0003be78) list_double2_large_graphic_pane_g

0x5231,	// (0x00031a60) list_double2_large_graphic_pane_t1_ParamLimits

0x5231,	// (0x00031a60) list_double2_large_graphic_pane_t1

0x5247,	// (0x00031a76) list_double2_large_graphic_pane_t2_ParamLimits

0x5247,	// (0x00031a76) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x0003be7f) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x0003be7f) list_double2_large_graphic_pane_t

0x5259,	// (0x00031a88) list_double_heading_pane_g1_ParamLimits

0x5259,	// (0x00031a88) list_double_heading_pane_g1

0x526a,	// (0x00031a99) list_double_heading_pane_g2_ParamLimits

0x526a,	// (0x00031a99) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x0003be84) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x0003be84) list_double_heading_pane_g

0x5276,	// (0x00031aa5) list_double_heading_pane_t1_ParamLimits

0x5276,	// (0x00031aa5) list_double_heading_pane_t1

0x528c,	// (0x00031abb) list_double_heading_pane_t2_ParamLimits

0x528c,	// (0x00031abb) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x0003be89) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x0003be89) list_double_heading_pane_t

0x529e,	// (0x00031acd) list_double_graphic_heading_pane_g1_ParamLimits

0x529e,	// (0x00031acd) list_double_graphic_heading_pane_g1

0x5259,	// (0x00031a88) list_double_graphic_heading_pane_g2_ParamLimits

0x5259,	// (0x00031a88) list_double_graphic_heading_pane_g2

0x526a,	// (0x00031a99) list_double_graphic_heading_pane_g3_ParamLimits

0x526a,	// (0x00031a99) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x0003be8e) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x0003be8e) list_double_graphic_heading_pane_g

0x52aa,	// (0x00031ad9) list_double_graphic_heading_pane_t1_ParamLimits

0x52aa,	// (0x00031ad9) list_double_graphic_heading_pane_t1

0x517c,	// (0x000319ab) list_double_graphic_heading_pane_t2_ParamLimits

0x517c,	// (0x000319ab) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x0003be95) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x0003be95) list_double_graphic_heading_pane_t

0x51b9,	// (0x000319e8) list_double_time_pane_g1_ParamLimits

0x51b9,	// (0x000319e8) list_double_time_pane_g1

0x5034,	// (0x00031863) list_double_time_pane_g2_ParamLimits

0x5034,	// (0x00031863) list_double_time_pane_g2

0x0001,

0xf66b,	// (0x0003be9a) list_double_time_pane_g_ParamLimits

0xf66b,	// (0x0003be9a) list_double_time_pane_g

0x52c0,	// (0x00031aef) list_double_time_pane_t1_ParamLimits

0x52c0,	// (0x00031aef) list_double_time_pane_t1

0x52d6,	// (0x00031b05) list_double_time_pane_t2_ParamLimits

0x52d6,	// (0x00031b05) list_double_time_pane_t2

0x52e8,	// (0x00031b17) list_double_time_pane_t3_ParamLimits

0x52e8,	// (0x00031b17) list_double_time_pane_t3

0x52fa,	// (0x00031b29) list_double_time_pane_t4_ParamLimits

0x52fa,	// (0x00031b29) list_double_time_pane_t4

0x0003,

0xf670,	// (0x0003be9f) list_double_time_pane_t_ParamLimits

0xf670,	// (0x0003be9f) list_double_time_pane_t

0x530c,	// (0x00031b3b) list_setting_pane_g1_ParamLimits

0x530c,	// (0x00031b3b) list_setting_pane_g1

0x5318,	// (0x00031b47) list_setting_pane_g2_ParamLimits

0x5318,	// (0x00031b47) list_setting_pane_g2

0x0001,

0xf679,	// (0x0003bea8) list_setting_pane_g_ParamLimits

0xf679,	// (0x0003bea8) list_setting_pane_g

0x5324,	// (0x00031b53) list_setting_pane_t1_ParamLimits

0x5324,	// (0x00031b53) list_setting_pane_t1

0x533e,	// (0x00031b6d) list_setting_pane_t2_ParamLimits

0x533e,	// (0x00031b6d) list_setting_pane_t2

0x0002,

0xf67e,	// (0x0003bead) list_setting_pane_t_ParamLimits

0xf67e,	// (0x0003bead) list_setting_pane_t

0x537d,	// (0x00031bac) set_value_pane_cp_ParamLimits

0x537d,	// (0x00031bac) set_value_pane_cp

0x538b,	// (0x00031bba) list_setting_number_pane_g1_ParamLimits

0x538b,	// (0x00031bba) list_setting_number_pane_g1

0x5397,	// (0x00031bc6) list_setting_number_pane_g2_ParamLimits

0x5397,	// (0x00031bc6) list_setting_number_pane_g2

0x0001,

0xf685,	// (0x0003beb4) list_setting_number_pane_g_ParamLimits

0xf685,	// (0x0003beb4) list_setting_number_pane_g

0x53a3,	// (0x00031bd2) list_setting_number_pane_t1_ParamLimits

0x53a3,	// (0x00031bd2) list_setting_number_pane_t1

0x53bc,	// (0x00031beb) list_setting_number_pane_t2_ParamLimits

0x53bc,	// (0x00031beb) list_setting_number_pane_t2

0x53d6,	// (0x00031c05) list_setting_number_pane_t3_ParamLimits

0x53d6,	// (0x00031c05) list_setting_number_pane_t3

0x0003,

0xf68a,	// (0x0003beb9) list_setting_number_pane_t_ParamLimits

0xf68a,	// (0x0003beb9) list_setting_number_pane_t

0x537d,	// (0x00031bac) set_value_pane_ParamLimits

0x537d,	// (0x00031bac) set_value_pane

0x7d73,	// (0x000345a2) bg_set_opt_pane_ParamLimits

0x7d73,	// (0x000345a2) bg_set_opt_pane

0x5419,	// (0x00031c48) set_value_pane_t1

0x7d94,	// (0x000345c3) slider_set_pane_cp3

0x7d9d,	// (0x000345cc) volume_small_pane_cp

0x7da6,	// (0x000345d5) list_form_gen_pane

0x7daf,	// (0x000345de) scroll_pane_cp8

0x5427,	// (0x00031c56) form_field_data_pane_ParamLimits

0x5427,	// (0x00031c56) form_field_data_pane

0x544d,	// (0x00031c7c) form_field_data_wide_pane_ParamLimits

0x544d,	// (0x00031c7c) form_field_data_wide_pane

0x5474,	// (0x00031ca3) form_field_popup_pane_ParamLimits

0x5474,	// (0x00031ca3) form_field_popup_pane

0x5496,	// (0x00031cc5) form_field_popup_wide_pane_ParamLimits

0x5496,	// (0x00031cc5) form_field_popup_wide_pane

0x54b7,	// (0x00031ce6) form_field_slider_pane_ParamLimits

0x54b7,	// (0x00031ce6) form_field_slider_pane

0x54ca,	// (0x00031cf9) form_field_slider_wide_pane_ParamLimits

0x54ca,	// (0x00031cf9) form_field_slider_wide_pane

0x7dc0,	// (0x000345ef) data_form_pane

0x54e7,	// (0x00031d16) form_field_data_pane_t1

0x7dcc,	// (0x000345fb) input_focus_pane

0x7dda,	// (0x00034609) data_form_wide_pane

0x550d,	// (0x00031d3c) form_field_data_wide_pane_t1

0x7b3d,	// (0x0003436c) input_focus_pane_cp6

0x552f,	// (0x00031d5e) form_field_popup_pane_t1

0x7dcc,	// (0x000345fb) input_focus_pane_cp7

0x7e06,	// (0x00034635) list_form_pane

0x5551,	// (0x00031d80) form_field_popup_wide_pane_t1

0x7dcc,	// (0x000345fb) input_focus_pane_cp8

0x7e12,	// (0x00034641) list_form_wide_pane

0x556e,	// (0x00031d9d) form_field_slider_pane_t1_ParamLimits

0x556e,	// (0x00031d9d) form_field_slider_pane_t1

0x5586,	// (0x00031db5) form_field_slider_pane_t2_ParamLimits

0x5586,	// (0x00031db5) form_field_slider_pane_t2

0x0001,

0xf69a,	// (0x0003bec9) form_field_slider_pane_t_ParamLimits

0xf69a,	// (0x0003bec9) form_field_slider_pane_t

0x77c1,	// (0x00033ff0) input_focus_pane_cp9_ParamLimits

0x77c1,	// (0x00033ff0) input_focus_pane_cp9

0x559b,	// (0x00031dca) slider_cont_pane_ParamLimits

0x559b,	// (0x00031dca) slider_cont_pane

0x7e21,	// (0x00034650) form_field_slider_wide_pane_t1_ParamLimits

0x7e21,	// (0x00034650) form_field_slider_wide_pane_t1

0x55af,	// (0x00031dde) form_field_slider_wide_pane_t2_ParamLimits

0x55af,	// (0x00031dde) form_field_slider_wide_pane_t2

0x0001,

0xf69f,	// (0x0003bece) form_field_slider_wide_pane_t_ParamLimits

0xf69f,	// (0x0003bece) form_field_slider_wide_pane_t

0x77c1,	// (0x00033ff0) input_focus_pane_cp10_ParamLimits

0x77c1,	// (0x00033ff0) input_focus_pane_cp10

0x55c1,	// (0x00031df0) slider_cont_pane_cp1_ParamLimits

0x55c1,	// (0x00031df0) slider_cont_pane_cp1

0x55d5,	// (0x00031e04) slider_form_pane_cp

0x7e33,	// (0x00034662) input_focus_pane_g1

0x7e3b,	// (0x0003466a) input_focus_pane_g2

0x7e43,	// (0x00034672) input_focus_pane_g3

0x7e4b,	// (0x0003467a) input_focus_pane_g4

0x7e53,	// (0x00034682) input_focus_pane_g5

0x7e5b,	// (0x0003468a) input_focus_pane_g6

0x7e63,	// (0x00034692) input_focus_pane_g7

0x7e6b,	// (0x0003469a) input_focus_pane_g8

0x7e73,	// (0x000346a2) input_focus_pane_g9

0x3326,	// (0x0002fb55) input_focus_pane_g10

0x0009,

0xf6a4,	// (0x0003bed3) input_focus_pane_g

0xa0d1,	// (0x00036900) wait_border_pane_g3_copy1

0x55dd,	// (0x00031e0c) data_form_pane_t1

0x3326,	// (0x0002fb55) wait_anim_pane_g1_copy1

0x614a,	// (0x00032979) data_form_wide_pane_t1

0x55fa,	// (0x00031e29) list_form_graphic_pane_cp_ParamLimits

0x55fa,	// (0x00031e29) list_form_graphic_pane_cp

0xb056,	// (0x00037885) slider_form_pane_g1

0xb05f,	// (0x0003788e) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x0003c1cf) slider_form_pane_g

0x560f,	// (0x00031e3e) list_form_graphic_pane_ParamLimits

0x560f,	// (0x00031e3e) list_form_graphic_pane

0x5621,	// (0x00031e50) list_form_graphic_pane_g1

0x5629,	// (0x00031e58) list_form_graphic_pane_t1_ParamLimits

0x5629,	// (0x00031e58) list_form_graphic_pane_t1

0x7545,	// (0x00033d74) list_highlight_pane_cp5_ParamLimits

0x7545,	// (0x00033d74) list_highlight_pane_cp5

0x563e,	// (0x00031e6d) find_pane_g1

0x7e7b,	// (0x000346aa) input_find_pane

0x5647,	// (0x00031e76) input_find_pane_g1_ParamLimits

0x5647,	// (0x00031e76) input_find_pane_g1

0x5653,	// (0x00031e82) input_find_pane_t1_ParamLimits

0x5653,	// (0x00031e82) input_find_pane_t1

0x5668,	// (0x00031e97) input_find_pane_t2_ParamLimits

0x5668,	// (0x00031e97) input_find_pane_t2

0x0001,

0xf6b9,	// (0x0003bee8) input_find_pane_t_ParamLimits

0xf6b9,	// (0x0003bee8) input_find_pane_t

0x7e84,	// (0x000346b3) input_focus_pane_cp5_ParamLimits

0x7e84,	// (0x000346b3) input_focus_pane_cp5

0x7e9e,	// (0x000346cd) bg_popup_window_pane_cp2_ParamLimits

0x7e9e,	// (0x000346cd) bg_popup_window_pane_cp2

0x7eab,	// (0x000346da) listscroll_menu_pane_ParamLimits

0x7eab,	// (0x000346da) listscroll_menu_pane

0x7eb7,	// (0x000346e6) popup_submenu_window_ParamLimits

0x7eb7,	// (0x000346e6) popup_submenu_window

0x7ee7,	// (0x00034716) find_popup_pane_g1

0x7eef,	// (0x0003471e) input_popup_find_pane_cp

0x7e84,	// (0x000346b3) input_focus_pane_cp4_ParamLimits

0x7e84,	// (0x000346b3) input_focus_pane_cp4

0x7f07,	// (0x00034736) input_popup_find_pane_t1_ParamLimits

0x7f07,	// (0x00034736) input_popup_find_pane_t1

0x3330,	// (0x0002fb5f) bg_popup_sub_pane_cp

0x7f35,	// (0x00034764) listscroll_popup_sub_pane

0x7f3d,	// (0x0003476c) list_submenu_pane_ParamLimits

0x7f3d,	// (0x0003476c) list_submenu_pane

0x7f4e,	// (0x0003477d) scroll_pane_cp4

0x7f56,	// (0x00034785) list_single_popup_submenu_pane_ParamLimits

0x7f56,	// (0x00034785) list_single_popup_submenu_pane

0x7f6b,	// (0x0003479a) list_single_popup_submenu_pane_g1

0x7f73,	// (0x000347a2) list_single_popup_submenu_pane_t1_ParamLimits

0x7f73,	// (0x000347a2) list_single_popup_submenu_pane_t1

0x7545,	// (0x00033d74) bg_active_tab_pane_cp1_ParamLimits

0x7545,	// (0x00033d74) bg_active_tab_pane_cp1

0x7f88,	// (0x000347b7) tabs_2_active_pane_g1

0x7f90,	// (0x000347bf) tabs_2_active_pane_t1

0x7545,	// (0x00033d74) bg_passive_tab_pane_cp1_ParamLimits

0x7545,	// (0x00033d74) bg_passive_tab_pane_cp1

0x7f88,	// (0x000347b7) tabs_2_passive_pane_g1

0x7f90,	// (0x000347bf) tabs_2_passive_pane_t1

0x7fa2,	// (0x000347d1) bg_active_tab_pane_cp4

0x7fb0,	// (0x000347df) tabs_2_long_active_pane_t1

0x7fc3,	// (0x000347f2) bg_passive_tab_pane_cp4

0x5d8a,	// (0x000325b9) list_single_midp_graphic_pane_g4_ParamLimits

0x7fa2,	// (0x000347d1) bg_active_tab_pane_cp5

0x7fcf,	// (0x000347fe) tabs_3_long_active_pane_t1

0x7fc3,	// (0x000347f2) bg_passive_tab_pane_cp5

0x5d8a,	// (0x000325b9) list_single_midp_graphic_pane_g4

0x7545,	// (0x00033d74) bg_popup_window_pane_cp13_ParamLimits

0x7545,	// (0x00033d74) bg_popup_window_pane_cp13

0x7fea,	// (0x00034819) listscroll_popup_fast_pane_ParamLimits

0x7fea,	// (0x00034819) listscroll_popup_fast_pane

0x7ff9,	// (0x00034828) grid_popup_fast_pane_ParamLimits

0x7ff9,	// (0x00034828) grid_popup_fast_pane

0x800b,	// (0x0003483a) scroll_pane_cp9_ParamLimits

0x800b,	// (0x0003483a) scroll_pane_cp9

0xc8f5,	// (0x00039124) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc8f5,	// (0x00039124) list_single_graphic_hl_pane_t1_cp2

0x802f,	// (0x0003485e) input_focus_pane_cp20_ParamLimits

0x802f,	// (0x0003485e) input_focus_pane_cp20

0x803d,	// (0x0003486c) query_popup_data_pane_t1_ParamLimits

0x803d,	// (0x0003486c) query_popup_data_pane_t1

0x8050,	// (0x0003487f) query_popup_data_pane_t2_ParamLimits

0x8050,	// (0x0003487f) query_popup_data_pane_t2

0x8096,	// (0x000348c5) query_popup_data_pane_t3_ParamLimits

0x8096,	// (0x000348c5) query_popup_data_pane_t3

0x80d7,	// (0x00034906) query_popup_data_pane_t4_ParamLimits

0x80d7,	// (0x00034906) query_popup_data_pane_t4

0x8113,	// (0x00034942) query_popup_data_pane_t5_ParamLimits

0x8113,	// (0x00034942) query_popup_data_pane_t5

0x0004,

0xf6be,	// (0x0003beed) query_popup_data_pane_t_ParamLimits

0xf6be,	// (0x0003beed) query_popup_data_pane_t

0x7e33,	// (0x00034662) bg_set_opt_pane_g1

0x7e3b,	// (0x0003466a) bg_set_opt_pane_g2

0x7e43,	// (0x00034672) bg_set_opt_pane_g3

0x7e4b,	// (0x0003467a) bg_set_opt_pane_g4

0x7e53,	// (0x00034682) bg_set_opt_pane_g5

0x7e5b,	// (0x0003468a) bg_set_opt_pane_g6

0x7e63,	// (0x00034692) bg_set_opt_pane_g7

0x7e6b,	// (0x0003469a) bg_set_opt_pane_g8

0x7e73,	// (0x000346a2) bg_set_opt_pane_g9

0x0008,

0xf6c9,	// (0x0003bef8) bg_set_opt_pane_g

0x59ac,	// (0x000321db) control_top_pane_stacon_ParamLimits

0x59ac,	// (0x000321db) control_top_pane_stacon

0x59ff,	// (0x0003222e) signal_pane_stacon_ParamLimits

0x59ff,	// (0x0003222e) signal_pane_stacon

0x8893,	// (0x000350c2) stacon_top_pane_g1_ParamLimits

0x8893,	// (0x000350c2) stacon_top_pane_g1

0x5a24,	// (0x00032253) title_pane_stacon_ParamLimits

0x5a24,	// (0x00032253) title_pane_stacon

0x5a4e,	// (0x0003227d) uni_indicator_pane_stacon_ParamLimits

0x5a4e,	// (0x0003227d) uni_indicator_pane_stacon

0x5a66,	// (0x00032295) battery_pane_stacon_ParamLimits

0x5a66,	// (0x00032295) battery_pane_stacon

0x5aaa,	// (0x000322d9) control_bottom_pane_stacon_ParamLimits

0x5aaa,	// (0x000322d9) control_bottom_pane_stacon

0x5acd,	// (0x000322fc) navi_pane_stacon_ParamLimits

0x5acd,	// (0x000322fc) navi_pane_stacon

0x88b5,	// (0x000350e4) stacon_bottom_pane_g1_ParamLimits

0x88b5,	// (0x000350e4) stacon_bottom_pane_g1

0x567d,	// (0x00031eac) aid_levels_signal_lsc_ParamLimits

0x567d,	// (0x00031eac) aid_levels_signal_lsc

0x5694,	// (0x00031ec3) signal_pane_stacon_g1_ParamLimits

0x5694,	// (0x00031ec3) signal_pane_stacon_g1

0x56a8,	// (0x00031ed7) signal_pane_stacon_g2_ParamLimits

0x56a8,	// (0x00031ed7) signal_pane_stacon_g2

0x0001,

0xf6dc,	// (0x0003bf0b) signal_pane_stacon_g_ParamLimits

0xf6dc,	// (0x0003bf0b) signal_pane_stacon_g

0x56dd,	// (0x00031f0c) title_pane_stacon_t1_ParamLimits

0x56dd,	// (0x00031f0c) title_pane_stacon_t1

0x8300,	// (0x00034b2f) uni_indicator_pane_stacon_g1

0x830a,	// (0x00034b39) uni_indicator_pane_stacon_g2

0x8314,	// (0x00034b43) uni_indicator_pane_stacon_g3

0x831e,	// (0x00034b4d) uni_indicator_pane_stacon_g4

0x0003,

0xf6e8,	// (0x0003bf17) uni_indicator_pane_stacon_g

0x5702,	// (0x00031f31) control_top_pane_stacon_g1

0x570a,	// (0x00031f39) control_top_pane_stacon_t1_ParamLimits

0x570a,	// (0x00031f39) control_top_pane_stacon_t1

0x5741,	// (0x00031f70) aid_levels_battery_lsc_ParamLimits

0x5741,	// (0x00031f70) aid_levels_battery_lsc

0x5759,	// (0x00031f88) battery_pane_stacon_g1_ParamLimits

0x5759,	// (0x00031f88) battery_pane_stacon_g1

0x576c,	// (0x00031f9b) battery_pane_stacon_g2_ParamLimits

0x576c,	// (0x00031f9b) battery_pane_stacon_g2

0x0001,

0xf6f1,	// (0x0003bf20) battery_pane_stacon_g_ParamLimits

0xf6f1,	// (0x0003bf20) battery_pane_stacon_g

0x57aa,	// (0x00031fd9) navi_icon_pane_stacon

0x57be,	// (0x00031fed) navi_navi_pane_stacon

0x57aa,	// (0x00031fd9) navi_text_pane_stacon

0x5702,	// (0x00031f31) control_bottom_pane_stacon_g1

0x57d4,	// (0x00032003) control_bottom_pane_stacon_t1_ParamLimits

0x57d4,	// (0x00032003) control_bottom_pane_stacon_t1

0x8342,	// (0x00034b71) grid_app_pane_ParamLimits

0x8342,	// (0x00034b71) grid_app_pane

0x8366,	// (0x00034b95) scroll_pane_cp15_ParamLimits

0x8366,	// (0x00034b95) scroll_pane_cp15

0x837b,	// (0x00034baa) cell_app_pane_ParamLimits

0x837b,	// (0x00034baa) cell_app_pane

0x83a7,	// (0x00034bd6) cell_app_pane_g1_ParamLimits

0x83a7,	// (0x00034bd6) cell_app_pane_g1

0x83cb,	// (0x00034bfa) cell_app_pane_g2_ParamLimits

0x83cb,	// (0x00034bfa) cell_app_pane_g2

0x0001,

0xf6f6,	// (0x0003bf25) cell_app_pane_g_ParamLimits

0xf6f6,	// (0x0003bf25) cell_app_pane_g

0x83d7,	// (0x00034c06) cell_app_pane_t1_ParamLimits

0x83d7,	// (0x00034c06) cell_app_pane_t1

0x83e9,	// (0x00034c18) grid_highlight_pane_ParamLimits

0x83e9,	// (0x00034c18) grid_highlight_pane

0x7e33,	// (0x00034662) cell_highlight_pane_g1

0x7e3b,	// (0x0003466a) cell_highlight_pane_g2

0x7e43,	// (0x00034672) cell_highlight_pane_g3

0x7e4b,	// (0x0003467a) cell_highlight_pane_g4

0x7e53,	// (0x00034682) cell_highlight_pane_g5

0x7e5b,	// (0x0003468a) cell_highlight_pane_g6

0x7e63,	// (0x00034692) cell_highlight_pane_g7

0x7e6b,	// (0x0003469a) cell_highlight_pane_g8

0x7e73,	// (0x000346a2) cell_highlight_pane_g9

0x3326,	// (0x0002fb55) cell_highlight_pane_g10

0x0009,

0xf6a4,	// (0x0003bed3) cell_highlight_pane_g

0x83fa,	// (0x00034c29) bg_scroll_pane

0x581e,	// (0x0003204d) scroll_handle_pane

0x8441,	// (0x00034c70) scroll_bg_pane_g1

0x8456,	// (0x00034c85) scroll_bg_pane_g2

0x846e,	// (0x00034c9d) scroll_bg_pane_g3

0x0002,

0xf6fb,	// (0x0003bf2a) scroll_bg_pane_g

0x8483,	// (0x00034cb2) scroll_handle_focus_pane_ParamLimits

0x8483,	// (0x00034cb2) scroll_handle_focus_pane

0x8441,	// (0x00034c70) scroll_handle_pane_g1

0x8490,	// (0x00034cbf) scroll_handle_pane_g2

0x846e,	// (0x00034c9d) scroll_handle_pane_g3

0x0002,

0xf702,	// (0x0003bf31) scroll_handle_pane_g

0x7e84,	// (0x000346b3) bg_popup_sub_pane_cp21_ParamLimits

0x7e84,	// (0x000346b3) bg_popup_sub_pane_cp21

0x84a4,	// (0x00034cd3) popup_fep_japan_predictive_window_t1_ParamLimits

0x84a4,	// (0x00034cd3) popup_fep_japan_predictive_window_t1

0x84bb,	// (0x00034cea) popup_fep_japan_predictive_window_t2_ParamLimits

0x84bb,	// (0x00034cea) popup_fep_japan_predictive_window_t2

0x84ee,	// (0x00034d1d) popup_fep_japan_predictive_window_t3_ParamLimits

0x84ee,	// (0x00034d1d) popup_fep_japan_predictive_window_t3

0x0002,

0xf709,	// (0x0003bf38) popup_fep_japan_predictive_window_t_ParamLimits

0xf709,	// (0x0003bf38) popup_fep_japan_predictive_window_t

0x3330,	// (0x0002fb5f) bg_popup_sub_pane_cp23

0x8525,	// (0x00034d54) listscroll_japin_cand_pane

0x852d,	// (0x00034d5c) popup_fep_japan_candidate_window_t1

0x853b,	// (0x00034d6a) candidate_pane_ParamLimits

0x853b,	// (0x00034d6a) candidate_pane

0x854d,	// (0x00034d7c) scroll_pane_cp30

0x8557,	// (0x00034d86) list_single_popup_jap_candidate_pane_ParamLimits

0x8557,	// (0x00034d86) list_single_popup_jap_candidate_pane

0x3330,	// (0x0002fb5f) list_highlight_pane_cp30

0x856b,	// (0x00034d9a) list_single_popup_jap_candidate_pane_t1

0x857a,	// (0x00034da9) level_1_signal

0x8587,	// (0x00034db6) level_2_signal

0x8594,	// (0x00034dc3) level_3_signal

0x85a1,	// (0x00034dd0) level_4_signal

0x85ae,	// (0x00034ddd) level_5_signal

0x85bb,	// (0x00034dea) level_6_signal

0x85c8,	// (0x00034df7) level_7_signal

0x857a,	// (0x00034da9) level_1_battery

0x8587,	// (0x00034db6) level_2_battery

0x8594,	// (0x00034dc3) level_3_battery

0x85a1,	// (0x00034dd0) level_4_battery

0x85ae,	// (0x00034ddd) level_5_battery

0x85bb,	// (0x00034dea) level_6_battery

0x85c8,	// (0x00034df7) level_7_battery

0x85ed,	// (0x00034e1c) list_menu_pane_ParamLimits

0x85ed,	// (0x00034e1c) list_menu_pane

0x8603,	// (0x00034e32) scroll_pane_cp25_ParamLimits

0x8603,	// (0x00034e32) scroll_pane_cp25

0x861c,	// (0x00034e4b) list_double2_graphic_pane_cp2_ParamLimits

0x861c,	// (0x00034e4b) list_double2_graphic_pane_cp2

0x861c,	// (0x00034e4b) list_double2_large_graphic_pane_cp2_ParamLimits

0x861c,	// (0x00034e4b) list_double2_large_graphic_pane_cp2

0x861c,	// (0x00034e4b) list_double2_pane_cp2_ParamLimits

0x861c,	// (0x00034e4b) list_double2_pane_cp2

0x861c,	// (0x00034e4b) list_double_graphic_pane_cp2_ParamLimits

0x861c,	// (0x00034e4b) list_double_graphic_pane_cp2

0x861c,	// (0x00034e4b) list_double_large_graphic_pane_cp2_ParamLimits

0x861c,	// (0x00034e4b) list_double_large_graphic_pane_cp2

0x861c,	// (0x00034e4b) list_double_number_pane_cp2_ParamLimits

0x861c,	// (0x00034e4b) list_double_number_pane_cp2

0x861c,	// (0x00034e4b) list_double_pane_cp2_ParamLimits

0x861c,	// (0x00034e4b) list_double_pane_cp2

0x8642,	// (0x00034e71) list_single_2graphic_pane_cp2_ParamLimits

0x8642,	// (0x00034e71) list_single_2graphic_pane_cp2

0x8642,	// (0x00034e71) list_single_graphic_heading_pane_cp2_ParamLimits

0x8642,	// (0x00034e71) list_single_graphic_heading_pane_cp2

0x8642,	// (0x00034e71) list_single_graphic_pane_cp2_ParamLimits

0x8642,	// (0x00034e71) list_single_graphic_pane_cp2

0x8642,	// (0x00034e71) list_single_heading_pane_cp2_ParamLimits

0x8642,	// (0x00034e71) list_single_heading_pane_cp2

0x865f,	// (0x00034e8e) list_single_large_graphic_pane_cp2_ParamLimits

0x865f,	// (0x00034e8e) list_single_large_graphic_pane_cp2

0x8642,	// (0x00034e71) list_single_number_heading_pane_cp2_ParamLimits

0x8642,	// (0x00034e71) list_single_number_heading_pane_cp2

0x8642,	// (0x00034e71) list_single_number_pane_cp2_ParamLimits

0x8642,	// (0x00034e71) list_single_number_pane_cp2

0x8642,	// (0x00034e71) list_single_pane_cp2_ParamLimits

0x8642,	// (0x00034e71) list_single_pane_cp2

0x86da,	// (0x00034f09) bg_popup_sub_pane_cp22

0x58d0,	// (0x000320ff) popup_side_volume_key_window_g1

0x58fa,	// (0x00032129) popup_side_volume_key_window_t1

0x5918,	// (0x00032147) volume_small_pane_cp1

0x77c1,	// (0x00033ff0) bg_popup_sub_pane_cp24_ParamLimits

0x77c1,	// (0x00033ff0) bg_popup_sub_pane_cp24

0x86f0,	// (0x00034f1f) fep_china_uni_candidate_pane_ParamLimits

0x86f0,	// (0x00034f1f) fep_china_uni_candidate_pane

0x8704,	// (0x00034f33) fep_china_uni_entry_pane

0x8714,	// (0x00034f43) popup_fep_china_uni_window_g1

0x8730,	// (0x00034f5f) fep_china_uni_entry_pane_g1

0x873a,	// (0x00034f69) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x0003bf69) fep_china_uni_entry_pane_g

0x8744,	// (0x00034f73) fep_entry_item_pane

0x874e,	// (0x00034f7d) fep_candidate_item_pane

0x8756,	// (0x00034f85) fep_china_uni_candidate_pane_g1

0x8760,	// (0x00034f8f) fep_china_uni_candidate_pane_g2

0x8768,	// (0x00034f97) fep_china_uni_candidate_pane_g3

0x8770,	// (0x00034f9f) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x0003bf6e) fep_china_uni_candidate_pane_g

0x3326,	// (0x0002fb55) fep_entry_item_pane_g1

0x877a,	// (0x00034fa9) fep_entry_item_pane_t1_ParamLimits

0x877a,	// (0x00034fa9) fep_entry_item_pane_t1

0x8790,	// (0x00034fbf) fep_candidate_item_pane_t1_ParamLimits

0x8790,	// (0x00034fbf) fep_candidate_item_pane_t1

0x87a5,	// (0x00034fd4) fep_candidate_item_pane_t2_ParamLimits

0x87a5,	// (0x00034fd4) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0003bf77) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0003bf77) fep_candidate_item_pane_t

0x7545,	// (0x00033d74) list_highlight_pane_cp31_ParamLimits

0x7545,	// (0x00033d74) list_highlight_pane_cp31

0x87b7,	// (0x00034fe6) level_1_signal_lsc

0x87c0,	// (0x00034fef) level_2_signal_lsc

0x87c9,	// (0x00034ff8) level_3_signal_lsc

0x87d2,	// (0x00035001) level_4_signal_lsc

0x87db,	// (0x0003500a) level_5_signal_lsc

0x87e4,	// (0x00035013) level_6_signal_lsc

0x87ed,	// (0x0003501c) level_7_signal_lsc

0x87ed,	// (0x0003501c) level_1_battery_lsc

0x87f6,	// (0x00035025) level_2_battery_lsc

0x87ff,	// (0x0003502e) level_3_battery_lsc

0x8808,	// (0x00035037) level_4_battery_lsc

0x8811,	// (0x00035040) level_5_battery_lsc

0x881a,	// (0x00035049) level_6_battery_lsc

0x87b7,	// (0x00034fe6) level_7_battery_lsc

0x8823,	// (0x00035052) scroll_handle_focus_pane_g1

0x882c,	// (0x0003505b) scroll_handle_focus_pane_g2

0x8835,	// (0x00035064) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x0003bf7c) scroll_handle_focus_pane_g

0x5920,	// (0x0003214f) list_single_2graphic_pane_g1_ParamLimits

0x5920,	// (0x0003214f) list_single_2graphic_pane_g1

0x4ff1,	// (0x00031820) list_single_2graphic_pane_g2_ParamLimits

0x4ff1,	// (0x00031820) list_single_2graphic_pane_g2

0x4f77,	// (0x000317a6) list_single_2graphic_pane_g3_ParamLimits

0x4f77,	// (0x000317a6) list_single_2graphic_pane_g3

0x592c,	// (0x0003215b) list_single_2graphic_pane_g4_ParamLimits

0x592c,	// (0x0003215b) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0003bf83) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0003bf83) list_single_2graphic_pane_g

0x5938,	// (0x00032167) list_single_2graphic_pane_t1_ParamLimits

0x5938,	// (0x00032167) list_single_2graphic_pane_t1

0x5966,	// (0x00032195) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5966,	// (0x00032195) list_double2_graphic_large_graphic_pane_g1

0x5214,	// (0x00031a43) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5214,	// (0x00031a43) list_double2_graphic_large_graphic_pane_g2

0x5225,	// (0x00031a54) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5225,	// (0x00031a54) list_double2_graphic_large_graphic_pane_g3

0x5978,	// (0x000321a7) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5978,	// (0x000321a7) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x0003bf8c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x0003bf8c) list_double2_graphic_large_graphic_pane_g

0x5984,	// (0x000321b3) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5984,	// (0x000321b3) list_double2_graphic_large_graphic_pane_t1

0x599a,	// (0x000321c9) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x599a,	// (0x000321c9) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0003bf95) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0003bf95) list_double2_graphic_large_graphic_pane_t

0x8977,	// (0x000351a6) popup_fast_swap_window_ParamLimits

0x8977,	// (0x000351a6) popup_fast_swap_window

0x8995,	// (0x000351c4) popup_side_volume_key_window

0x89b3,	// (0x000351e2) stacon_top_pane

0x89bd,	// (0x000351ec) status_pane_ParamLimits

0x89bd,	// (0x000351ec) status_pane

0x89b3,	// (0x000351e2) status_small_pane

0x3330,	// (0x0002fb5f) control_pane

0x3330,	// (0x0002fb5f) stacon_bottom_pane

0x7daf,	// (0x000345de) scroll_pane_cp121

0x7da6,	// (0x000345d5) set_content_pane

0x883e,	// (0x0003506d) bg_active_tab_pane_g1_cp1

0x8847,	// (0x00035076) bg_active_tab_pane_g2_cp1

0x8850,	// (0x0003507f) bg_active_tab_pane_g3_cp1

0x883e,	// (0x0003506d) bg_passive_tab_pane_g1_cp1

0x8847,	// (0x00035076) bg_passive_tab_pane_g2_cp1

0x8850,	// (0x0003507f) bg_passive_tab_pane_g3_cp1

0x8859,	// (0x00035088) bg_active_tab_pane_g1_cp2

0x8847,	// (0x00035076) bg_active_tab_pane_g2_cp2

0x8862,	// (0x00035091) bg_active_tab_pane_g3_cp2

0x8859,	// (0x00035088) bg_passive_tab_pane_g1_cp2

0x8847,	// (0x00035076) bg_passive_tab_pane_g2_cp2

0x8862,	// (0x00035091) bg_passive_tab_pane_g3_cp2

0x886b,	// (0x0003509a) bg_active_tab_pane_g1_cp3

0x8847,	// (0x00035076) bg_active_tab_pane_g2_cp3

0x8874,	// (0x000350a3) bg_active_tab_pane_g3_cp3

0x886b,	// (0x0003509a) bg_passive_tab_pane_g1_cp3

0x8847,	// (0x00035076) bg_passive_tab_pane_g2_cp3

0x8874,	// (0x000350a3) bg_passive_tab_pane_g3_cp3

0x887d,	// (0x000350ac) bg_active_tab_pane_g1_cp4

0x8847,	// (0x00035076) bg_active_tab_pane_g2_cp4

0x8888,	// (0x000350b7) bg_active_tab_pane_g3_cp4

0x887d,	// (0x000350ac) bg_passive_tab_pane_g1_cp4

0x8847,	// (0x00035076) bg_passive_tab_pane_g2_cp4

0x8888,	// (0x000350b7) bg_passive_tab_pane_g3_cp4

0x88d1,	// (0x00035100) bg_active_tab_pane_g1_cp5

0x8847,	// (0x00035076) bg_active_tab_pane_g2_cp5

0x88da,	// (0x00035109) bg_active_tab_pane_g3_cp5

0x88d1,	// (0x00035100) bg_passive_tab_pane_g1_cp5

0x8847,	// (0x00035076) bg_passive_tab_pane_g2_cp5

0x88da,	// (0x00035109) bg_passive_tab_pane_g3_cp5

0x88e3,	// (0x00035112) list_set_graphic_pane_ParamLimits

0x88e3,	// (0x00035112) list_set_graphic_pane

0x3330,	// (0x0002fb5f) bg_set_opt_pane_cp4

0x88f8,	// (0x00035127) list_set_graphic_pane_g1_ParamLimits

0x88f8,	// (0x00035127) list_set_graphic_pane_g1

0x8904,	// (0x00035133) list_set_graphic_pane_g2_ParamLimits

0x8904,	// (0x00035133) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x0003bf9a) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x0003bf9a) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0003c304) volume_small_pane_cp_g

0x8928,	// (0x00035157) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8928,	// (0x00035157) list_double2_large_graphic_pane_g1_cp2

0x8936,	// (0x00035165) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8936,	// (0x00035165) list_double2_large_graphic_pane_g2_cp2

0x8947,	// (0x00035176) list_double2_large_graphic_pane_g3_cp2

0x894f,	// (0x0003517e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x894f,	// (0x0003517e) list_double2_large_graphic_pane_t1_cp2

0x8965,	// (0x00035194) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8965,	// (0x00035194) list_double2_large_graphic_pane_t2_cp2

0xabbb,	// (0x000373ea) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xabbb,	// (0x000373ea) list_double_large_graphic_pane_g1_cp2

0xabce,	// (0x000373fd) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xabce,	// (0x000373fd) list_double_large_graphic_pane_g2_cp2

0x8adb,	// (0x0003530a) list_double_large_graphic_pane_g3_cp2

0xabdf,	// (0x0003740e) list_double_large_graphic_pane_g4_cp

0xabe7,	// (0x00037416) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xabe7,	// (0x00037416) list_double_large_graphic_pane_t1_cp2

0xabfe,	// (0x0003742d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xabfe,	// (0x0003742d) list_double_large_graphic_pane_t2_cp2

0x89cb,	// (0x000351fa) list_double2_graphic_pane_g1_cp2_ParamLimits

0x89cb,	// (0x000351fa) list_double2_graphic_pane_g1_cp2

0x89d9,	// (0x00035208) list_double2_graphic_pane_g2_cp2_ParamLimits

0x89d9,	// (0x00035208) list_double2_graphic_pane_g2_cp2

0x89ea,	// (0x00035219) list_double2_graphic_pane_g3_cp2

0x89f4,	// (0x00035223) list_double2_graphic_pane_t1_cp2_ParamLimits

0x89f4,	// (0x00035223) list_double2_graphic_pane_t1_cp2

0x8a0a,	// (0x00035239) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8a0a,	// (0x00035239) list_double2_graphic_pane_t2_cp2

0x8a1c,	// (0x0003524b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8a1c,	// (0x0003524b) list_single_number_heading_pane_g1_cp2

0x8a28,	// (0x00035257) list_single_number_heading_pane_g2_cp2

0x8a30,	// (0x0003525f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8a30,	// (0x0003525f) list_single_number_heading_pane_t1_cp2

0x8a46,	// (0x00035275) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8a46,	// (0x00035275) list_single_number_heading_pane_t2_cp2

0x8a5a,	// (0x00035289) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8a5a,	// (0x00035289) list_single_number_heading_pane_t3_cp2

0x8a1c,	// (0x0003524b) list_single_heading_pane_g1_cp2_ParamLimits

0x8a1c,	// (0x0003524b) list_single_heading_pane_g1_cp2

0x8a28,	// (0x00035257) list_single_heading_pane_g2_cp2

0x8a30,	// (0x0003525f) list_single_heading_pane_t1_cp2_ParamLimits

0x8a30,	// (0x0003525f) list_single_heading_pane_t1_cp2

0xa9b5,	// (0x000371e4) list_single_heading_pane_t2_cp2_ParamLimits

0xa9b5,	// (0x000371e4) list_single_heading_pane_t2_cp2

0xa8f7,	// (0x00037126) list_double_graphic_pane_g1_cp2_ParamLimits

0xa8f7,	// (0x00037126) list_double_graphic_pane_g1_cp2

0xa903,	// (0x00037132) list_double_graphic_pane_g2_cp2_ParamLimits

0xa903,	// (0x00037132) list_double_graphic_pane_g2_cp2

0xa912,	// (0x00037141) list_double_graphic_pane_g3_cp2

0xa91a,	// (0x00037149) list_double_graphic_pane_t1_cp2_ParamLimits

0xa91a,	// (0x00037149) list_double_graphic_pane_t1_cp2

0xa930,	// (0x0003715f) list_double_graphic_pane_t2_cp2_ParamLimits

0xa930,	// (0x0003715f) list_double_graphic_pane_t2_cp2

0x8acf,	// (0x000352fe) list_double_number_pane_g1_cp2_ParamLimits

0x8acf,	// (0x000352fe) list_double_number_pane_g1_cp2

0x8adb,	// (0x0003530a) list_double_number_pane_g2_cp2

0xa8bb,	// (0x000370ea) list_double_number_pane_t1_cp2_ParamLimits

0xa8bb,	// (0x000370ea) list_double_number_pane_t1_cp2

0xa8cf,	// (0x000370fe) list_double_number_pane_t2_cp2_ParamLimits

0xa8cf,	// (0x000370fe) list_double_number_pane_t2_cp2

0xa8e5,	// (0x00037114) list_double_number_pane_t3_cp2_ParamLimits

0xa8e5,	// (0x00037114) list_double_number_pane_t3_cp2

0xa7a4,	// (0x00036fd3) list_single_graphic_pane_g1_cp2_ParamLimits

0xa7a4,	// (0x00036fd3) list_single_graphic_pane_g1_cp2

0x8b35,	// (0x00035364) list_single_graphic_pane_g2_cp2_ParamLimits

0x8b35,	// (0x00035364) list_single_graphic_pane_g2_cp2

0x8b41,	// (0x00035370) list_single_graphic_pane_g3_cp2

0xa77a,	// (0x00036fa9) list_single_graphic_pane_t1_cp2_ParamLimits

0xa77a,	// (0x00036fa9) list_single_graphic_pane_t1_cp2

0x8b35,	// (0x00035364) list_single_number_pane_g1_cp2_ParamLimits

0x8b35,	// (0x00035364) list_single_number_pane_g1_cp2

0x8b41,	// (0x00035370) list_single_number_pane_g2_cp2

0xa77a,	// (0x00036fa9) list_single_number_pane_t1_cp2_ParamLimits

0xa77a,	// (0x00036fa9) list_single_number_pane_t1_cp2

0xa790,	// (0x00036fbf) list_single_number_pane_t2_cp2_ParamLimits

0xa790,	// (0x00036fbf) list_single_number_pane_t2_cp2

0x8936,	// (0x00035165) list_double2_pane_g1_cp2_ParamLimits

0x8936,	// (0x00035165) list_double2_pane_g1_cp2

0x8947,	// (0x00035176) list_double2_pane_g2_cp2

0x8aa7,	// (0x000352d6) list_double2_pane_t1_cp2_ParamLimits

0x8aa7,	// (0x000352d6) list_double2_pane_t1_cp2

0x8abd,	// (0x000352ec) list_double2_pane_t2_cp2_ParamLimits

0x8abd,	// (0x000352ec) list_double2_pane_t2_cp2

0x8acf,	// (0x000352fe) list_double_pane_g1_cp2_ParamLimits

0x8acf,	// (0x000352fe) list_double_pane_g1_cp2

0x8adb,	// (0x0003530a) list_double_pane_g2_cp2

0x8ae3,	// (0x00035312) list_double_pane_t1_cp2_ParamLimits

0x8ae3,	// (0x00035312) list_double_pane_t1_cp2

0x8af9,	// (0x00035328) list_double_pane_t2_cp2_ParamLimits

0x8af9,	// (0x00035328) list_double_pane_t2_cp2

0x8b25,	// (0x00035354) list_single_pane_cp2_g3

0x8b35,	// (0x00035364) list_single_pane_g1_cp2_ParamLimits

0x8b35,	// (0x00035364) list_single_pane_g1_cp2

0x8b41,	// (0x00035370) list_single_pane_g2_cp2

0x8b49,	// (0x00035378) list_single_pane_t1_cp2_ParamLimits

0x8b49,	// (0x00035378) list_single_pane_t1_cp2

0x8b61,	// (0x00035390) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8b61,	// (0x00035390) list_single_large_graphic_pane_g1_cp2

0x8b6f,	// (0x0003539e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8b6f,	// (0x0003539e) list_single_large_graphic_pane_g2_cp2

0x8b7b,	// (0x000353aa) list_single_large_graphic_pane_g3_cp2

0x8b83,	// (0x000353b2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8b83,	// (0x000353b2) list_single_large_graphic_pane_g4_cp1

0x8b9d,	// (0x000353cc) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8b9d,	// (0x000353cc) list_single_large_graphic_pane_t1_cp2

0xa744,	// (0x00036f73) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa744,	// (0x00036f73) list_single_graphic_heading_pane_g1_cp2

0xa711,	// (0x00036f40) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa711,	// (0x00036f40) list_single_graphic_heading_pane_g4_cp2

0x8b41,	// (0x00035370) list_single_graphic_heading_pane_g5_cp2

0xa750,	// (0x00036f7f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa750,	// (0x00036f7f) list_single_graphic_heading_pane_t1_cp2

0xa766,	// (0x00036f95) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa766,	// (0x00036f95) list_single_graphic_heading_pane_t2_cp2

0xa705,	// (0x00036f34) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa705,	// (0x00036f34) list_single_2graphic_pane_g1_cp2

0xa711,	// (0x00036f40) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa711,	// (0x00036f40) list_single_2graphic_pane_g2_cp2

0x8b41,	// (0x00035370) list_single_2graphic_pane_g3_cp2

0xa722,	// (0x00036f51) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa722,	// (0x00036f51) list_single_2graphic_pane_g4_cp2

0xa72e,	// (0x00036f5d) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa72e,	// (0x00036f5d) list_single_2graphic_pane_t1_cp2

0x3326,	// (0x0002fb55) list_highlight_pane_g10_cp1

0xa2dd,	// (0x00036b0c) list_highlight_pane_g1_cp1

0xa2e5,	// (0x00036b14) list_highlight_pane_g2_cp1

0xa2ed,	// (0x00036b1c) list_highlight_pane_g3_cp1

0xa2f5,	// (0x00036b24) list_highlight_pane_g4_cp1

0xa2fd,	// (0x00036b2c) list_highlight_pane_g5_cp1

0xa305,	// (0x00036b34) list_highlight_pane_g6_cp1

0xa30d,	// (0x00036b3c) list_highlight_pane_g7_cp1

0xa315,	// (0x00036b44) list_highlight_pane_g8_cp1

0xa31d,	// (0x00036b4c) list_highlight_pane_g9_cp1

0xa1fd,	// (0x00036a2c) form_field_slider_pane_t3

0xa20b,	// (0x00036a3a) form_field_slider_pane_t4

0xa219,	// (0x00036a48) slider_form_pane_ParamLimits

0xa219,	// (0x00036a48) slider_form_pane

0x3330,	// (0x0002fb5f) control_abbreviations

0x3330,	// (0x0002fb5f) control_conventions

0x3330,	// (0x0002fb5f) control_definitions

0x3330,	// (0x0002fb5f) format_table_attribute

0xaa0b,	// (0x0003723a) bg_popup_preview_window_pane_g9

0x3330,	// (0x0002fb5f) format_table_data2

0x3330,	// (0x0002fb5f) format_table_data3

0x3330,	// (0x0002fb5f) format_table_data_example

0x0008,

0x3330,	// (0x0002fb5f) intro_purpose

0xf900,	// (0x0003c12f) bg_popup_preview_window_pane_g

0x3330,	// (0x0002fb5f) texts_category

0x3330,	// (0x0002fb5f) texts_graphics

0x8bb3,	// (0x000353e2) text_digital

0x8bc2,	// (0x000353f1) text_primary

0x8bd1,	// (0x00035400) text_primary_small

0x8be0,	// (0x0003540f) text_secondary

0x8bef,	// (0x0003541e) text_title

0xb1a7,	// (0x000379d6) bg_passive_tab_pane_g1_cp3_srt

0x8847,	// (0x00035076) bg_passive_tab_pane_g2_cp3_srt

0xb1b0,	// (0x000379df) bg_passive_tab_pane_g3_cp3_srt

0x7545,	// (0x00033d74) bg_active_tab_pane_cp3_srt_ParamLimits

0x7545,	// (0x00033d74) bg_active_tab_pane_cp3_srt

0xb1b9,	// (0x000379e8) tabs_4_active_pane_srt_g1

0xb1c1,	// (0x000379f0) tabs_4_active_pane_srt_t1_ParamLimits

0xb1c1,	// (0x000379f0) tabs_4_active_pane_srt_t1

0xb1a7,	// (0x000379d6) bg_active_tab_pane_g1_cp3_copy1

0x8847,	// (0x00035076) bg_active_tab_pane_g2_cp3_copy1

0xb1b0,	// (0x000379df) bg_active_tab_pane_g3_cp3_copy1

0x7545,	// (0x00033d74) tabs_2_long_active_pane_srt_ParamLimits

0x7545,	// (0x00033d74) tabs_2_long_active_pane_srt

0x7545,	// (0x00033d74) tabs_2_long_passive_pane_srt_ParamLimits

0x7545,	// (0x00033d74) tabs_2_long_passive_pane_srt

0x7fc3,	// (0x000347f2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7fc3,	// (0x000347f2) bg_passive_tab_pane_cp4_srt

0xae5b,	// (0x0003768a) bg_passive_tab_pane_g1_cp4_srt

0x8847,	// (0x00035076) bg_passive_tab_pane_g2_cp4_srt

0xae64,	// (0x00037693) bg_passive_tab_pane_g3_cp4_srt

0x7fa2,	// (0x000347d1) bg_active_tab_pane_cp4_srt_ParamLimits

0x7fa2,	// (0x000347d1) bg_active_tab_pane_cp4_srt

0xae6d,	// (0x0003769c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xae6d,	// (0x0003769c) tabs_2_long_active_pane_srt_t1

0xae5b,	// (0x0003768a) bg_active_tab_pane_g1_cp4_srt

0x8847,	// (0x00035076) bg_active_tab_pane_g2_cp4_srt

0xae64,	// (0x00037693) bg_active_tab_pane_g3_cp4_srt

0x77c1,	// (0x00033ff0) tabs_3_long_active_pane_srt_ParamLimits

0x77c1,	// (0x00033ff0) tabs_3_long_active_pane_srt

0x77c1,	// (0x00033ff0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x77c1,	// (0x00033ff0) tabs_3_long_passive_pane_cp_srt

0x77c1,	// (0x00033ff0) tabs_3_long_passive_pane_srt_ParamLimits

0x77c1,	// (0x00033ff0) tabs_3_long_passive_pane_srt

0x7fc3,	// (0x000347f2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7fc3,	// (0x000347f2) bg_passive_tab_pane_cp5_srt

0x88d1,	// (0x00035100) bg_passive_tab_pane_g1_cp5_srt

0x8847,	// (0x00035076) bg_passive_tab_pane_g2_cp5_srt

0x88da,	// (0x00035109) bg_passive_tab_pane_g3_cp5_srt

0x7fa2,	// (0x000347d1) bg_active_tab_pane_cp5_srt_ParamLimits

0x7fa2,	// (0x000347d1) bg_active_tab_pane_cp5_srt

0xae49,	// (0x00037678) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae49,	// (0x00037678) tabs_3_long_active_pane_srt_t1

0x88d1,	// (0x00035100) bg_active_tab_pane_g1_cp5_srt

0x8847,	// (0x00035076) bg_active_tab_pane_g2_cp5_srt

0x88da,	// (0x00035109) bg_active_tab_pane_g3_cp5_srt

0xae3b,	// (0x0003766a) navi_text_pane_srt_t1

0xae33,	// (0x00037662) navi_icon_pane_srt_g1

0x8dc6,	// (0x000355f5) midp_editing_number_pane_srt

0x8bfe,	// (0x0003542d) midp_ticker_pane_srt

0x8dce,	// (0x000355fd) midp_ticker_pane_srt_g1

0x8dd6,	// (0x00035605) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0003bfb9) midp_ticker_pane_srt_g

0x8dde,	// (0x0003560d) midp_ticker_pane_srt_t1

0xae24,	// (0x00037653) midp_editing_number_pane_t1_copy1

0x8c06,	// (0x00035435) listscroll_midp_pane

0x8c06,	// (0x00035435) midp_form_pane

0x8c74,	// (0x000354a3) midp_info_popup_window_ParamLimits

0x8c74,	// (0x000354a3) midp_info_popup_window

0x7e84,	// (0x000346b3) bg_popup_sub_pane_cp50_ParamLimits

0x7e84,	// (0x000346b3) bg_popup_sub_pane_cp50

0x9f13,	// (0x00036742) listscroll_midp_info_pane_ParamLimits

0x9f13,	// (0x00036742) listscroll_midp_info_pane

0x9efb,	// (0x0003672a) listscroll_form_midp_pane_ParamLimits

0x9efb,	// (0x0003672a) listscroll_form_midp_pane

0x9f07,	// (0x00036736) scroll_bar_cp050

0x9edb,	// (0x0003670a) list_midp_pane

0xbbf0,	// (0x0003841f) signal_pane_g2_cp

0x9e15,	// (0x00036644) listscroll_midp_info_pane_t1_ParamLimits

0x9e15,	// (0x00036644) listscroll_midp_info_pane_t1

0x9e2d,	// (0x0003665c) listscroll_midp_info_pane_t2_ParamLimits

0x9e2d,	// (0x0003665c) listscroll_midp_info_pane_t2

0x9e6b,	// (0x0003669a) listscroll_midp_info_pane_t3_ParamLimits

0x9e6b,	// (0x0003669a) listscroll_midp_info_pane_t3

0x9ea5,	// (0x000366d4) listscroll_midp_info_pane_t4_ParamLimits

0x9ea5,	// (0x000366d4) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x0003c06a) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x0003c06a) listscroll_midp_info_pane_t

0x7f4e,	// (0x0003477d) scroll_pane_cp21

0x9daf,	// (0x000365de) form_midp_field_choice_group_pane

0x9db8,	// (0x000365e7) form_midp_field_text_pane

0x9dfb,	// (0x0003662a) form_midp_field_time_pane

0x9e03,	// (0x00036632) form_midp_gauge_slider_pane

0x9e0c,	// (0x0003663b) form_midp_gauge_wait_pane

0x3330,	// (0x0002fb5f) form_midp_image_pane

0x5ec7,	// (0x000326f6) list_single_midp_pane_ParamLimits

0x5ec7,	// (0x000326f6) list_single_midp_pane

0x9d80,	// (0x000365af) form_midp_field_text_pane_t1

0x9bb3,	// (0x000363e2) input_focus_pane_cp050

0x9d9e,	// (0x000365cd) list_midp_form_text_pane

0x9d4f,	// (0x0003657e) form_midp_field_choice_group_pane_t1

0x9d5d,	// (0x0003658c) input_focus_pane_cp051

0x9d71,	// (0x000365a0) list_midp_choice_pane

0x3330,	// (0x0002fb5f) status_idle_pane

0x9d33,	// (0x00036562) form_midp_field_time_pane_t1

0x3326,	// (0x0002fb55) wait_anim_pane_g2_copy1

0x9d41,	// (0x00036570) form_midp_field_time_pane_t2

0x0001,

0x8d24,	// (0x00035553) aid_navinavi_width_2_pane

0xf836,	// (0x0003c065) form_midp_field_time_pane_t

0x3330,	// (0x0002fb5f) input_focus_pane_cp052

0x3330,	// (0x0002fb5f) bg_input_focus_pane_cp040

0x9cf3,	// (0x00036522) form_midp_gauge_slider_pane_t1

0x9d01,	// (0x00036530) form_midp_gauge_slider_pane_t2

0x9d0f,	// (0x0003653e) form_midp_gauge_slider_pane_t3

0x9d1d,	// (0x0003654c) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x0003c05c) form_midp_gauge_slider_pane_t

0x9d2b,	// (0x0003655a) form_midp_slider_pane

0x7545,	// (0x00033d74) bg_input_focus_pane_cp041_ParamLimits

0x7545,	// (0x00033d74) bg_input_focus_pane_cp041

0x9cc0,	// (0x000364ef) form_midp_gauge_wait_pane_t1_ParamLimits

0x9cc0,	// (0x000364ef) form_midp_gauge_wait_pane_t1

0x9cd2,	// (0x00036501) form_midp_gauge_wait_pane_t2_ParamLimits

0x9cd2,	// (0x00036501) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x0003c057) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x0003c057) form_midp_gauge_wait_pane_t

0x9ce4,	// (0x00036513) form_midp_wait_pane_ParamLimits

0x9ce4,	// (0x00036513) form_midp_wait_pane

0x9c8a,	// (0x000364b9) form_midp_image_pane_g1

0x9c93,	// (0x000364c2) form_midp_image_pane_t1

0x9ca2,	// (0x000364d1) form_midp_image_pane_t2

0x9cb1,	// (0x000364e0) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x0003c050) form_midp_image_pane_t

0x9c81,	// (0x000364b0) list_single_midp_pane_g1

0x5eb8,	// (0x000326e7) list_single_midp_pane_t1

0x9c70,	// (0x0003649f) list_midp_form_item_pane_ParamLimits

0x9c70,	// (0x0003649f) list_midp_form_item_pane

0x8ccc,	// (0x000354fb) list_midp_form_item_pane_t1

0x8cdb,	// (0x0003550a) midp_ticker_pane_g1

0x8ce7,	// (0x00035516) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x0003bf9f) midp_ticker_pane_g

0x8cf3,	// (0x00035522) midp_ticker_pane_t1

0xb0a3,	// (0x000378d2) midp_editing_number_pane_t1

0xb081,	// (0x000378b0) midp_editing_number_pane

0xb090,	// (0x000378bf) midp_ticker_pane

0xae14,	// (0x00037643) ai_message_heading_pane

0x3330,	// (0x0002fb5f) bg_popup_window_pane_cp14

0xae1c,	// (0x0003764b) listscroll_ai_message_pane

0xad9a,	// (0x000375c9) ai_message_heading_pane_g1_ParamLimits

0xad9a,	// (0x000375c9) ai_message_heading_pane_g1

0xada6,	// (0x000375d5) ai_message_heading_pane_g2_ParamLimits

0xada6,	// (0x000375d5) ai_message_heading_pane_g2

0xadb4,	// (0x000375e3) ai_message_heading_pane_g3_ParamLimits

0xadb4,	// (0x000375e3) ai_message_heading_pane_g3

0xadc0,	// (0x000375ef) ai_message_heading_pane_g4_ParamLimits

0xadc0,	// (0x000375ef) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x0003c191) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x0003c191) ai_message_heading_pane_g

0xadcc,	// (0x000375fb) ai_message_heading_pane_t1_ParamLimits

0xadcc,	// (0x000375fb) ai_message_heading_pane_t1

0xade6,	// (0x00037615) ai_message_heading_pane_t2_ParamLimits

0xade6,	// (0x00037615) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x0003c19a) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x0003c19a) ai_message_heading_pane_t

0xadfa,	// (0x00037629) bg_popup_heading_pane_cp1_ParamLimits

0xadfa,	// (0x00037629) bg_popup_heading_pane_cp1

0xad88,	// (0x000375b7) list_ai_message_pane_ParamLimits

0xad88,	// (0x000375b7) list_ai_message_pane

0x7f4e,	// (0x0003477d) scroll_pane_cp10

0xad24,	// (0x00037553) list_ai_message_pane_g1

0xad2c,	// (0x0003755b) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x0003c16e) list_ai_message_pane_g

0xad34,	// (0x00037563) list_ai_message_pane_t1_ParamLimits

0xad34,	// (0x00037563) list_ai_message_pane_t1

0xad49,	// (0x00037578) list_ai_message_pane_t2_ParamLimits

0xad49,	// (0x00037578) list_ai_message_pane_t2

0xad5e,	// (0x0003758d) list_ai_message_pane_t3_ParamLimits

0xad5e,	// (0x0003758d) list_ai_message_pane_t3

0xad73,	// (0x000375a2) list_ai_message_pane_t4_ParamLimits

0xad73,	// (0x000375a2) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x0003c173) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x0003c173) list_ai_message_pane_t

0xad0d,	// (0x0003753c) cell_ai_soft_ind_pane_ParamLimits

0xad0d,	// (0x0003753c) cell_ai_soft_ind_pane

0x8d05,	// (0x00035534) cell_ai_soft_ind_pane_g1_ParamLimits

0x8d05,	// (0x00035534) cell_ai_soft_ind_pane_g1

0x3330,	// (0x0002fb5f) grid_highlight_cp1

0x8d12,	// (0x00035541) text_secondary_cp56_ParamLimits

0x8d12,	// (0x00035541) text_secondary_cp56

0xace2,	// (0x00037511) example_general_pane_ParamLimits

0xace2,	// (0x00037511) example_general_pane

0xacee,	// (0x0003751d) example_parent_pane_g1_ParamLimits

0xacee,	// (0x0003751d) example_parent_pane_g1

0xacfa,	// (0x00037529) example_parent_pane_t1_ParamLimits

0xacfa,	// (0x00037529) example_parent_pane_t1

0x9347,	// (0x00035b76) popup_preview_text_window_ParamLimits

0x9347,	// (0x00035b76) popup_preview_text_window

0x8b2d,	// (0x0003535c) list_single_pane_cp2_g4

0x7877,	// (0x000340a6) bg_popup_preview_window_pane_ParamLimits

0x7877,	// (0x000340a6) bg_popup_preview_window_pane

0xaa15,	// (0x00037244) popup_preview_text_window_t1_ParamLimits

0xaa15,	// (0x00037244) popup_preview_text_window_t1

0xaa33,	// (0x00037262) popup_preview_text_window_t2_ParamLimits

0xaa33,	// (0x00037262) popup_preview_text_window_t2

0xaa7c,	// (0x000372ab) popup_preview_text_window_t3_ParamLimits

0xaa7c,	// (0x000372ab) popup_preview_text_window_t3

0xaac1,	// (0x000372f0) popup_preview_text_window_t4_ParamLimits

0xaac1,	// (0x000372f0) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x0003c142) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x0003c142) popup_preview_text_window_t

0xab3f,	// (0x0003736e) scroll_pane_cp11

0x9ac1,	// (0x000362f0) bg_popup_preview_window_pane_g1

0xa9c9,	// (0x000371f8) bg_popup_preview_window_pane_g2

0xa9d3,	// (0x00037202) bg_popup_preview_window_pane_g3

0xa9dd,	// (0x0003720c) bg_popup_preview_window_pane_g4

0xa9e7,	// (0x00037216) bg_popup_preview_window_pane_g5

0xa9f1,	// (0x00037220) bg_popup_preview_window_pane_g6

0xa9f9,	// (0x00037228) bg_popup_preview_window_pane_g7

0xaa01,	// (0x00037230) bg_popup_preview_window_pane_g8

0x4ae6,	// (0x00031315) aid_popup_width_pane

0x9323,	// (0x00035b52) popup_midp_note_alarm_window_ParamLimits

0x9323,	// (0x00035b52) popup_midp_note_alarm_window

0x7dc0,	// (0x000345ef) data_form_pane_ParamLimits

0x54dd,	// (0x00031d0c) form_field_data_pane_g1

0x54e7,	// (0x00031d16) form_field_data_pane_t1_ParamLimits

0x7dcc,	// (0x000345fb) input_focus_pane_ParamLimits

0x7dda,	// (0x00034609) data_form_wide_pane_ParamLimits

0x5501,	// (0x00031d30) form_field_data_wide_pane_g1

0x550d,	// (0x00031d3c) form_field_data_wide_pane_t1_ParamLimits

0x7b3d,	// (0x0003436c) input_focus_pane_cp6_ParamLimits

0x7ef9,	// (0x00034728) input_popup_find_pane_g1_ParamLimits

0x7ef9,	// (0x00034728) input_popup_find_pane_g1

0x577d,	// (0x00031fac) aid_navi_side_left_pane

0x5792,	// (0x00031fc1) aid_navi_side_right_pane

0xa3d8,	// (0x00036c07) bg_popup_window_pane_cp30_ParamLimits

0xa3d8,	// (0x00036c07) bg_popup_window_pane_cp30

0xa452,	// (0x00036c81) popup_midp_note_alarm_window_g1_ParamLimits

0xa452,	// (0x00036c81) popup_midp_note_alarm_window_g1

0xa482,	// (0x00036cb1) popup_midp_note_alarm_window_t1_ParamLimits

0xa482,	// (0x00036cb1) popup_midp_note_alarm_window_t1

0xa523,	// (0x00036d52) popup_midp_note_alarm_window_t2_ParamLimits

0xa523,	// (0x00036d52) popup_midp_note_alarm_window_t2

0xa5d1,	// (0x00036e00) popup_midp_note_alarm_window_t3_ParamLimits

0xa5d1,	// (0x00036e00) popup_midp_note_alarm_window_t3

0xa603,	// (0x00036e32) popup_midp_note_alarm_window_t4_ParamLimits

0xa603,	// (0x00036e32) popup_midp_note_alarm_window_t4

0xa629,	// (0x00036e58) popup_midp_note_alarm_window_t5_ParamLimits

0xa629,	// (0x00036e58) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x0003c0df) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x0003c0df) popup_midp_note_alarm_window_t

0xa6d5,	// (0x00036f04) wait_bar_pane_cp1_ParamLimits

0xa6d5,	// (0x00036f04) wait_bar_pane_cp1

0x3330,	// (0x0002fb5f) wait_anim_pane_copy1

0x3330,	// (0x0002fb5f) wait_border_pane_copy1

0xa0bd,	// (0x000368ec) wait_border_pane_g1_copy1

0x5527,	// (0x00031d56) form_field_popup_pane_g1

0x552f,	// (0x00031d5e) form_field_popup_pane_t1_ParamLimits

0x7dcc,	// (0x000345fb) input_focus_pane_cp7_ParamLimits

0x7e06,	// (0x00034635) list_form_pane_ParamLimits

0x5549,	// (0x00031d78) form_field_popup_wide_pane_g1

0x5551,	// (0x00031d80) form_field_popup_wide_pane_t1_ParamLimits

0x7dcc,	// (0x000345fb) input_focus_pane_cp8_ParamLimits

0x7e12,	// (0x00034641) list_form_wide_pane_ParamLimits

0xb234,	// (0x00037a63) aid_size_cell_graphic_pane

0x55dd,	// (0x00031e0c) data_form_pane_t1_ParamLimits

0x614a,	// (0x00032979) data_form_wide_pane_t1_ParamLimits

0x966e,	// (0x00035e9d) bg_status_flat_pane

0x74a5,	// (0x00033cd4) title_pane_t1_ParamLimits

0x750d,	// (0x00033d3c) title_pane_t2_ParamLimits

0x7533,	// (0x00033d62) title_pane_t3_ParamLimits

0xf56f,	// (0x0003bd9e) title_pane_t_ParamLimits

0x857a,	// (0x00034da9) level_1_signal_ParamLimits

0x8587,	// (0x00034db6) level_2_signal_ParamLimits

0x8594,	// (0x00034dc3) level_3_signal_ParamLimits

0x85a1,	// (0x00034dd0) level_4_signal_ParamLimits

0x85ae,	// (0x00034ddd) level_5_signal_ParamLimits

0x85bb,	// (0x00034dea) level_6_signal_ParamLimits

0x85c8,	// (0x00034df7) level_7_signal_ParamLimits

0x857a,	// (0x00034da9) level_1_battery_ParamLimits

0x8587,	// (0x00034db6) level_2_battery_ParamLimits

0x8594,	// (0x00034dc3) level_3_battery_ParamLimits

0x85a1,	// (0x00034dd0) level_4_battery_ParamLimits

0x85ae,	// (0x00034ddd) level_5_battery_ParamLimits

0x85bb,	// (0x00034dea) level_6_battery_ParamLimits

0x85c8,	// (0x00034df7) level_7_battery_ParamLimits

0xa2dd,	// (0x00036b0c) bg_status_flat_pane_g1

0xa2e5,	// (0x00036b14) bg_status_flat_pane_g2

0xa2ed,	// (0x00036b1c) bg_status_flat_pane_g3

0xa2f5,	// (0x00036b24) bg_status_flat_pane_g4

0xa2fd,	// (0x00036b2c) bg_status_flat_pane_g5

0xa305,	// (0x00036b34) bg_status_flat_pane_g6

0xa30d,	// (0x00036b3c) bg_status_flat_pane_g7

0x755b,	// (0x00033d8a) tabs_3_active_pane_t1_ParamLimits

0x755b,	// (0x00033d8a) tabs_3_passive_pane_t1_ParamLimits

0x7575,	// (0x00033da4) tabs_4_active_pane_t1_ParamLimits

0x7575,	// (0x00033da4) tabs_4_1_passive_pane_t1_ParamLimits

0x7f90,	// (0x000347bf) tabs_2_active_pane_t1_ParamLimits

0x7f90,	// (0x000347bf) tabs_2_passive_pane_t1_ParamLimits

0x7fa2,	// (0x000347d1) bg_active_tab_pane_cp4_ParamLimits

0x7fb0,	// (0x000347df) tabs_2_long_active_pane_t1_ParamLimits

0x7fc3,	// (0x000347f2) bg_passive_tab_pane_cp4_ParamLimits

0x5dff,	// (0x0003262e) list_single_midp_graphic_pane_t1_ParamLimits

0x7fa2,	// (0x000347d1) bg_active_tab_pane_cp5_ParamLimits

0x7fcf,	// (0x000347fe) tabs_3_long_active_pane_t1_ParamLimits

0x7fc3,	// (0x000347f2) bg_passive_tab_pane_cp5_ParamLimits

0x5dff,	// (0x0003262e) list_single_midp_graphic_pane_t1

0x966e,	// (0x00035e9d) bg_status_flat_pane_ParamLimits

0x9739,	// (0x00035f68) indicator_pane_cp2_ParamLimits

0x9739,	// (0x00035f68) indicator_pane_cp2

0x987c,	// (0x000360ab) navi_pane_srt_ParamLimits

0x987c,	// (0x000360ab) navi_pane_srt

0x98a0,	// (0x000360cf) popup_clock_digital_analogue_window_cp1

0x7625,	// (0x00033e54) indicator_pane_t1

0x8bfe,	// (0x0003542d) copy_highlight_pane

0x8bfe,	// (0x0003542d) cursor_graphics_pane

0x8bfe,	// (0x0003542d) graphic_within_text_pane

0x8bfe,	// (0x0003542d) link_highlight_pane

0xab02,	// (0x00037331) popup_preview_text_window_t5_ParamLimits

0xab02,	// (0x00037331) popup_preview_text_window_t5

0x8d2e,	// (0x0003555d) cursor_digital_pane

0x8d2e,	// (0x0003555d) cursor_primary_pane

0x8d3f,	// (0x0003556e) cursor_primary_small_pane

0x8d47,	// (0x00035576) cursor_secondary_pane

0x8d4f,	// (0x0003557e) cursor_title_pane

0x8d2e,	// (0x0003555d) link_highlight_digital_pane

0x8d36,	// (0x00035565) link_highlight_primary_pane

0x8d3f,	// (0x0003556e) link_highlight_primary_small_pane

0x8d47,	// (0x00035576) link_highlight_secondary_pane

0x8d4f,	// (0x0003557e) link_highlight_title_pane

0x8d2e,	// (0x0003555d) copy_highlight_digital_pane

0x8d2e,	// (0x0003555d) copy_highlight_primary_pane

0x8d3f,	// (0x0003556e) copy_highlight_primary_small_pane

0x8d47,	// (0x00035576) copy_highlight_secondary_pane

0x8d4f,	// (0x0003557e) copy_highlight_title_pane

0x8d47,	// (0x00035576) graphic_text_digital_pane

0xa37b,	// (0x00036baa) graphic_text_primary_pane

0xa384,	// (0x00036bb3) graphic_text_primary_small_pane

0x8d3f,	// (0x0003556e) graphic_text_secondary_pane

0x8d2e,	// (0x0003555d) graphic_text_title_pane

0x8d57,	// (0x00035586) cursor_primary_pane_g1

0xa36d,	// (0x00036b9c) cursor_text_primary_t1

0xa355,	// (0x00036b84) cursor_primary_small_pane_g1

0xa35f,	// (0x00036b8e) cursor_text_primary_small_t1

0xa33d,	// (0x00036b6c) cursor_primary_small_pane_g1_copy1

0xa347,	// (0x00036b76) cursor_text_primary_small_t1_copy1

0xa325,	// (0x00036b54) cursor_text_title_t1

0xa333,	// (0x00036b62) cursor_title_pane_g1

0x8d57,	// (0x00035586) cursor_digital_pane_g1

0x8d61,	// (0x00035590) cursor_text_digital_t1

0x8d6f,	// (0x0003559e) link_highlight_primary_pane_g1

0xa2ce,	// (0x00036afd) link_highlight_primary_pane_t1

0x8d6f,	// (0x0003559e) link_highlight_primary_small_pane_g1

0x8d77,	// (0x000355a6) link_highlight_primary_small_pane_t1

0x8d86,	// (0x000355b5) link_highlight_secondary_pane_g1

0x8d8e,	// (0x000355bd) link_highlight_secondary_pane_t1

0xa242,	// (0x00036a71) link_highlight_title_pane_g1

0xa24a,	// (0x00036a79) link_highlight_title_pane_t1

0xa22b,	// (0x00036a5a) link_highlight_digital_pane_g1

0xa233,	// (0x00036a62) link_highlight_digital_pane_t1

0xa0f3,	// (0x00036922) copy_highlight_primary_pane_g1

0xa10a,	// (0x00036939) copy_highlight_primary_pane_t1

0xa0f3,	// (0x00036922) copy_highlight_primary_small_pane_g1

0xa0fb,	// (0x0003692a) copy_highlight_primary_small_pane_t1

0x8d9d,	// (0x000355cc) copy_highlight_secondary_pane_g1

0x8da5,	// (0x000355d4) copy_highlight_secondary_pane_t1

0xa0dc,	// (0x0003690b) copy_highlight_title_pane_g1

0xa0e4,	// (0x00036913) copy_highlight_title_pane_t1

0xa0f3,	// (0x00036922) copy_highlight_digital_pane_g1

0xb404,	// (0x00037c33) copy_highlight_digital_pane_t1

0xb358,	// (0x00037b87) graphic_text_primary_pane_g1

0xb3e8,	// (0x00037c17) graphic_text_primary_pane_t1

0xb3f6,	// (0x00037c25) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x0003c20e) graphic_text_primary_pane_t

0xb3c4,	// (0x00037bf3) graphic_text_primary_small_pane_g1

0xb3cc,	// (0x00037bfb) graphic_text_primary_small_pane_t1

0xb3da,	// (0x00037c09) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x0003c209) graphic_text_primary_small_pane_t

0xb3a0,	// (0x00037bcf) graphic_text_secondary_pane_g1

0xb3a8,	// (0x00037bd7) graphic_text_secondary_pane_t1

0xb3b6,	// (0x00037be5) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x0003c204) graphic_text_secondary_pane_t

0xb37c,	// (0x00037bab) graphic_text_title_pane_g1

0xb384,	// (0x00037bb3) graphic_text_title_pane_t1

0xb392,	// (0x00037bc1) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x0003c1ff) graphic_text_title_pane_t

0xb358,	// (0x00037b87) graphic_text_digital_pane_g1

0xb360,	// (0x00037b8f) graphic_text_digital_pane_t1

0xb36e,	// (0x00037b9d) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x0003c1fa) graphic_text_digital_pane_t

0x7545,	// (0x00033d74) navi_icon_pane_srt_ParamLimits

0x7545,	// (0x00033d74) navi_icon_pane_srt

0x3330,	// (0x0002fb5f) navi_midp_pane_srt

0x3330,	// (0x0002fb5f) navi_navi_pane_srt

0x7545,	// (0x00033d74) navi_text_pane_srt_ParamLimits

0x7545,	// (0x00033d74) navi_text_pane_srt

0xb323,	// (0x00037b52) navi_navi_icon_text_pane_srt

0xb32b,	// (0x00037b5a) navi_navi_pane_srt_g1_ParamLimits

0xb32b,	// (0x00037b5a) navi_navi_pane_srt_g1

0xb33d,	// (0x00037b6c) navi_navi_pane_srt_g2_ParamLimits

0xb33d,	// (0x00037b6c) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x0003c1f5) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x0003c1f5) navi_navi_pane_srt_g

0xb34f,	// (0x00037b7e) navi_navi_tabs_pane_srt

0xb323,	// (0x00037b52) navi_navi_text_pane_srt

0xb323,	// (0x00037b52) navi_navi_volume_pane_srt

0xb314,	// (0x00037b43) navi_navi_text_pane_srt_t1

0x6283,	// (0x00032ab2) navi_navi_volume_pane_srt_g1

0x628b,	// (0x00032aba) volume_small_pane_srt_ParamLimits

0x628b,	// (0x00032aba) volume_small_pane_srt

0x5af0,	// (0x0003231f) volume_small_pane_srt_g1_ParamLimits

0x5af0,	// (0x0003231f) volume_small_pane_srt_g1

0x5b00,	// (0x0003232f) volume_small_pane_srt_g2_ParamLimits

0x5b00,	// (0x0003232f) volume_small_pane_srt_g2

0x5b11,	// (0x00032340) volume_small_pane_srt_g3_ParamLimits

0x5b11,	// (0x00032340) volume_small_pane_srt_g3

0x5b22,	// (0x00032351) volume_small_pane_srt_g4_ParamLimits

0x5b22,	// (0x00032351) volume_small_pane_srt_g4

0x5b33,	// (0x00032362) volume_small_pane_srt_g5_ParamLimits

0x5b33,	// (0x00032362) volume_small_pane_srt_g5

0x5b44,	// (0x00032373) volume_small_pane_srt_g6_ParamLimits

0x5b44,	// (0x00032373) volume_small_pane_srt_g6

0x5b55,	// (0x00032384) volume_small_pane_srt_g7_ParamLimits

0x5b55,	// (0x00032384) volume_small_pane_srt_g7

0x5b66,	// (0x00032395) volume_small_pane_srt_g8_ParamLimits

0x5b66,	// (0x00032395) volume_small_pane_srt_g8

0x5b77,	// (0x000323a6) volume_small_pane_srt_g9_ParamLimits

0x5b77,	// (0x000323a6) volume_small_pane_srt_g9

0x5b88,	// (0x000323b7) volume_small_pane_srt_g10_ParamLimits

0x5b88,	// (0x000323b7) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0003bfa4) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0003bfa4) volume_small_pane_srt_g

0x792c,	// (0x0003415b) query_popup_data_pane_cp2

0xb2fa,	// (0x00037b29) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2fa,	// (0x00037b29) navi_navi_icon_text_pane_srt_t1

0xa37b,	// (0x00036baa) navi_tabs_2_long_pane_srt

0xa37b,	// (0x00036baa) navi_tabs_2_pane_srt

0xa37b,	// (0x00036baa) navi_tabs_3_long_pane_srt

0xa37b,	// (0x00036baa) navi_tabs_3_pane_srt

0xa37b,	// (0x00036baa) navi_tabs_4_pane_srt

0x6263,	// (0x00032a92) tabs_2_active_pane_srt_ParamLimits

0x6263,	// (0x00032a92) tabs_2_active_pane_srt

0x6273,	// (0x00032aa2) tabs_2_passive_pane_srt_ParamLimits

0x6273,	// (0x00032aa2) tabs_2_passive_pane_srt

0x8f84,	// (0x000357b3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8f84,	// (0x000357b3) bg_passive_tab_pane_cp1_srt

0xb2c6,	// (0x00037af5) bg_passive_tab_pane_g1_cp1_srt

0x8847,	// (0x00035076) bg_passive_tab_pane_g2_cp1_srt

0xb2cf,	// (0x00037afe) bg_passive_tab_pane_g3_cp1_srt

0x7545,	// (0x00033d74) bg_active_tab_pane_cp1_srt_ParamLimits

0x7545,	// (0x00033d74) bg_active_tab_pane_cp1_srt

0xb2d8,	// (0x00037b07) tabs_2_active_pane_srt_g1

0xb2e0,	// (0x00037b0f) tabs_2_active_pane_srt_t1_ParamLimits

0xb2e0,	// (0x00037b0f) tabs_2_active_pane_srt_t1

0xb2c6,	// (0x00037af5) bg_active_tab_pane_g1_cp1_srt

0x8847,	// (0x00035076) bg_active_tab_pane_g2_cp1_srt

0xb2cf,	// (0x00037afe) bg_active_tab_pane_g3_cp1_srt

0x6230,	// (0x00032a5f) tabs_3_active_pane_srt_ParamLimits

0x6230,	// (0x00032a5f) tabs_3_active_pane_srt

0x6241,	// (0x00032a70) tabs_3_passive_pane_cp_srt_ParamLimits

0x6241,	// (0x00032a70) tabs_3_passive_pane_cp_srt

0x6252,	// (0x00032a81) tabs_3_passive_pane_srt_ParamLimits

0x6252,	// (0x00032a81) tabs_3_passive_pane_srt

0x8f84,	// (0x000357b3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8f84,	// (0x000357b3) bg_passive_tab_pane_cp2_srt

0x8db4,	// (0x000355e3) bg_passive_tab_pane_g1_cp2_srt

0x8847,	// (0x00035076) bg_passive_tab_pane_g2_cp2_srt

0x8dbd,	// (0x000355ec) bg_passive_tab_pane_g3_cp2_srt

0x7545,	// (0x00033d74) bg_active_tab_pane_cp2_srt_ParamLimits

0x7545,	// (0x00033d74) bg_active_tab_pane_cp2_srt

0xb2ac,	// (0x00037adb) tabs_3_active_pane_srt_g1

0xb2b4,	// (0x00037ae3) tabs_3_active_pane_srt_t1_ParamLimits

0xb2b4,	// (0x00037ae3) tabs_3_active_pane_srt_t1

0x8db4,	// (0x000355e3) bg_active_tab_pane_g1_cp2_srt

0x8847,	// (0x00035076) bg_active_tab_pane_g2_cp2_srt

0x8dbd,	// (0x000355ec) bg_active_tab_pane_g3_cp2_srt

0x61e8,	// (0x00032a17) tabs_4_active_pane_srt_ParamLimits

0x61e8,	// (0x00032a17) tabs_4_active_pane_srt

0x61fa,	// (0x00032a29) tabs_4_passive_pane_cp2_srt_ParamLimits

0x61fa,	// (0x00032a29) tabs_4_passive_pane_cp2_srt

0x8f12,	// (0x00035741) aid_size_cell_toolbar

0x7fc3,	// (0x000347f2) main_idle_act_pane_ParamLimits

0x9149,	// (0x00035978) popup_large_graphic_colour_window_ParamLimits

0x94f0,	// (0x00035d1f) popup_toolbar_window_ParamLimits

0x94f0,	// (0x00035d1f) popup_toolbar_window

0x61a3,	// (0x000329d2) list_single_graphic_2heading_pane_ParamLimits

0x61a3,	// (0x000329d2) list_single_graphic_2heading_pane

0x8328,	// (0x00034b57) aid_size_cell_apps_grid_lsc_pane

0x833a,	// (0x00034b69) aid_size_cell_apps_grid_prt_pane

0x8f84,	// (0x000357b3) bg_wml_button_pane_cp1_ParamLimits

0x8f84,	// (0x000357b3) bg_wml_button_pane_cp1

0x9d80,	// (0x000365af) form_midp_field_text_pane_t1_ParamLimits

0x9bb3,	// (0x000363e2) input_focus_pane_cp050_ParamLimits

0x9d9e,	// (0x000365cd) list_midp_form_text_pane_ParamLimits

0x9d5d,	// (0x0003658c) input_focus_pane_cp051_ParamLimits

0x9d71,	// (0x000365a0) list_midp_choice_pane_ParamLimits

0x9c44,	// (0x00036473) list_single_2graphic_pane_cp3_ParamLimits

0x9c44,	// (0x00036473) list_single_2graphic_pane_cp3

0x9c54,	// (0x00036483) list_single_midp_graphic_pane_ParamLimits

0x9c54,	// (0x00036483) list_single_midp_graphic_pane

0x4a6e,	// (0x0003129d) list_single_graphic_2heading_pane_g1_ParamLimits

0x4a6e,	// (0x0003129d) list_single_graphic_2heading_pane_g1

0x4a7a,	// (0x000312a9) list_single_graphic_2heading_pane_g4_ParamLimits

0x4a7a,	// (0x000312a9) list_single_graphic_2heading_pane_g4

0x4a86,	// (0x000312b5) list_single_graphic_2heading_pane_g5_ParamLimits

0x4a86,	// (0x000312b5) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x0003bff7) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x0003bff7) list_single_graphic_2heading_pane_g

0x4a92,	// (0x000312c1) list_single_graphic_2heading_pane_t1_ParamLimits

0x4a92,	// (0x000312c1) list_single_graphic_2heading_pane_t1

0x4aa6,	// (0x000312d5) list_single_graphic_2heading_pane_t2_ParamLimits

0x4aa6,	// (0x000312d5) list_single_graphic_2heading_pane_t2

0x4ac2,	// (0x000312f1) list_single_graphic_2heading_pane_t3_ParamLimits

0x4ac2,	// (0x000312f1) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x0003bffe) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x0003bffe) list_single_graphic_2heading_pane_t

0x99ff,	// (0x0003622e) bg_popup_sub_pane_cp2

0x9a29,	// (0x00036258) grid_toobar_pane

0x5cf3,	// (0x00032522) cell_toolbar_pane_ParamLimits

0x5cf3,	// (0x00032522) cell_toolbar_pane

0x9a65,	// (0x00036294) cell_toolbar_pane_g1_ParamLimits

0x9a65,	// (0x00036294) cell_toolbar_pane_g1

0x9a79,	// (0x000362a8) cell_toolbar_pane_g2_ParamLimits

0x9a79,	// (0x000362a8) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x0003c00c) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x0003c00c) cell_toolbar_pane_g

0x9a9b,	// (0x000362ca) grid_highlight_pane_cp2_ParamLimits

0x9a9b,	// (0x000362ca) grid_highlight_pane_cp2

0x9ab5,	// (0x000362e4) toolbar_button_pane

0x9ac1,	// (0x000362f0) toolbar_button_pane_g1

0x9ac9,	// (0x000362f8) toolbar_button_pane_g2

0x9ad1,	// (0x00036300) toolbar_button_pane_g3

0x9ad9,	// (0x00036308) toolbar_button_pane_g4

0x9ae1,	// (0x00036310) toolbar_button_pane_g5

0x9ae9,	// (0x00036318) toolbar_button_pane_g6

0x9af1,	// (0x00036320) toolbar_button_pane_g7

0x9af9,	// (0x00036328) toolbar_button_pane_g8

0x9b01,	// (0x00036330) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x0003c011) toolbar_button_pane_g

0x5d65,	// (0x00032594) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5d65,	// (0x00032594) list_single_2graphic_pane_g1_cp3

0x5d71,	// (0x000325a0) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5d71,	// (0x000325a0) list_single_2graphic_pane_g2_cp3

0x5d82,	// (0x000325b1) list_single_2graphic_pane_g3_cp3

0x5d8a,	// (0x000325b9) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5d8a,	// (0x000325b9) list_single_2graphic_pane_g4_cp3

0x5d96,	// (0x000325c5) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5d96,	// (0x000325c5) list_single_2graphic_pane_t1_cp3

0x5df3,	// (0x00032622) list_single_midp_graphic_pane_g2_ParamLimits

0x5df3,	// (0x00032622) list_single_midp_graphic_pane_g2

0x8f1a,	// (0x00035749) aid_zoom_text_primary

0x5ce3,	// (0x00032512) aid_zoom_text_secondary

0x8e71,	// (0x000356a0) status_small_pane_g7_ParamLimits

0x8e71,	// (0x000356a0) status_small_pane_g7

0x8e94,	// (0x000356c3) status_small_pane_t1_ParamLimits

0x7488,	// (0x00033cb7) title_pane_g2

0x0003,

0xf566,	// (0x0003bd95) title_pane_g

0x79d5,	// (0x00034204) aid_size_cell_colour_1_pane_ParamLimits

0x79d5,	// (0x00034204) aid_size_cell_colour_1_pane

0x79e9,	// (0x00034218) aid_size_cell_colour_2_pane_ParamLimits

0x79e9,	// (0x00034218) aid_size_cell_colour_2_pane

0x79fd,	// (0x0003422c) aid_size_cell_colour_3_pane_ParamLimits

0x79fd,	// (0x0003422c) aid_size_cell_colour_3_pane

0x7a11,	// (0x00034240) aid_size_cell_colour_4_pane_ParamLimits

0x7a11,	// (0x00034240) aid_size_cell_colour_4_pane

0x56b9,	// (0x00031ee8) title_pane_stacon_g1_ParamLimits

0x56b9,	// (0x00031ee8) title_pane_stacon_g1

0xa161,	// (0x00036990) popup_note_wait_window_g3_ParamLimits

0xa161,	// (0x00036990) popup_note_wait_window_g3

0xa1d8,	// (0x00036a07) popup_note_wait_window_t5_ParamLimits

0xa1d8,	// (0x00036a07) popup_note_wait_window_t5

0x3330,	// (0x0002fb5f) main_feb_china_hwr_fs_writing_pane

0x9010,	// (0x0003583f) popup_feb_china_hwr_fs_window_ParamLimits

0x9010,	// (0x0003583f) popup_feb_china_hwr_fs_window

0x5e15,	// (0x00032644) aid_size_cell_hwr_fs_ParamLimits

0x5e15,	// (0x00032644) aid_size_cell_hwr_fs

0x9bb3,	// (0x000363e2) bg_popup_sub_pane_cp3_ParamLimits

0x9bb3,	// (0x000363e2) bg_popup_sub_pane_cp3

0x5e2a,	// (0x00032659) grid_hwr_fs_pane_ParamLimits

0x5e2a,	// (0x00032659) grid_hwr_fs_pane

0x5e42,	// (0x00032671) linegrid_hwr_fs_pane_ParamLimits

0x5e42,	// (0x00032671) linegrid_hwr_fs_pane

0x5e52,	// (0x00032681) cell_hwr_fs_pane_ParamLimits

0x5e52,	// (0x00032681) cell_hwr_fs_pane

0x9bbf,	// (0x000363ee) linegrid_hwr_fs_pane_g1_ParamLimits

0x9bbf,	// (0x000363ee) linegrid_hwr_fs_pane_g1

0x9bcb,	// (0x000363fa) linegrid_hwr_fs_pane_g2_ParamLimits

0x9bcb,	// (0x000363fa) linegrid_hwr_fs_pane_g2

0x9bdd,	// (0x0003640c) linegrid_hwr_fs_pane_g3_ParamLimits

0x9bdd,	// (0x0003640c) linegrid_hwr_fs_pane_g3

0x5e76,	// (0x000326a5) linegrid_hwr_fs_pane_g4_ParamLimits

0x5e76,	// (0x000326a5) linegrid_hwr_fs_pane_g4

0x5e94,	// (0x000326c3) linegrid_hwr_fs_pane_g5_ParamLimits

0x5e94,	// (0x000326c3) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x0003c03c) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x0003c03c) linegrid_hwr_fs_pane_g

0x9be9,	// (0x00036418) cell_hwr_fs_pane_g1_ParamLimits

0x9be9,	// (0x00036418) cell_hwr_fs_pane_g1

0x9936,	// (0x00036165) cell_hwr_fs_pane_g2_ParamLimits

0x9936,	// (0x00036165) cell_hwr_fs_pane_g2

0x9bff,	// (0x0003642e) cell_hwr_fs_pane_g3_ParamLimits

0x9bff,	// (0x0003642e) cell_hwr_fs_pane_g3

0x9c0c,	// (0x0003643b) cell_hwr_fs_pane_g4_ParamLimits

0x9c0c,	// (0x0003643b) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x0003c047) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x0003c047) cell_hwr_fs_pane_g

0x5eaa,	// (0x000326d9) cell_hwr_fs_pane_t1

0x3330,	// (0x0002fb5f) grid_highlight_pane_cp6

0x3330,	// (0x0002fb5f) main_idle_act2_pane

0x7f35,	// (0x00034764) aid_inside_area_popup_secondary

0xa811,	// (0x00037040) aid_inside_area_window_primary_ParamLimits

0xa811,	// (0x00037040) aid_inside_area_window_primary

0xb413,	// (0x00037c42) ai2_news_ticker_pane

0xb41b,	// (0x00037c4a) aid_size_cell_ai1_link_ParamLimits

0xb41b,	// (0x00037c4a) aid_size_cell_ai1_link

0xb435,	// (0x00037c64) popup_ai2_data_window_ParamLimits

0xb435,	// (0x00037c64) popup_ai2_data_window

0xb453,	// (0x00037c82) popup_ai2_link_window_ParamLimits

0xb453,	// (0x00037c82) popup_ai2_link_window

0x9bb3,	// (0x000363e2) bg_popup_sub_pane_cp4_ParamLimits

0x9bb3,	// (0x000363e2) bg_popup_sub_pane_cp4

0xb469,	// (0x00037c98) grid_ai2_link_pane_ParamLimits

0xb469,	// (0x00037c98) grid_ai2_link_pane

0xb480,	// (0x00037caf) popup_ai2_link_window_g1_ParamLimits

0xb480,	// (0x00037caf) popup_ai2_link_window_g1

0xb48c,	// (0x00037cbb) popup_ai2_link_window_g2_ParamLimits

0xb48c,	// (0x00037cbb) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x0003c213) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x0003c213) popup_ai2_link_window_g

0xb49d,	// (0x00037ccc) ai2_mp_button_pane

0xb4a5,	// (0x00037cd4) ai2_mp_volume_pane

0x9d5d,	// (0x0003658c) bg_popup_sub_pane_cp5_ParamLimits

0x9d5d,	// (0x0003658c) bg_popup_sub_pane_cp5

0xb4ad,	// (0x00037cdc) heading_ai2_gene_pane_ParamLimits

0xb4ad,	// (0x00037cdc) heading_ai2_gene_pane

0xb4b9,	// (0x00037ce8) list_ai2_gene_pane_ParamLimits

0xb4b9,	// (0x00037ce8) list_ai2_gene_pane

0xb501,	// (0x00037d30) cell_ai2_link_pane_ParamLimits

0xb501,	// (0x00037d30) cell_ai2_link_pane

0xb517,	// (0x00037d46) cell_ai2_link_pane_g1

0x3330,	// (0x0002fb5f) grid_highlight_pane_cp7

0x62a0,	// (0x00032acf) ai2_mp_volume_pane_g1

0xb5ea,	// (0x00037e19) ai2_mp_volume_pane_g2

0xb55f,	// (0x00037d8e) list_ai2_gene_pane_t1

0xb5f2,	// (0x00037e21) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x0003c22c) ai2_mp_volume_pane_g

0x62a8,	// (0x00032ad7) volume_small_pane_cp3

0xb5fa,	// (0x00037e29) aid_size_cell_ai2_button

0xb602,	// (0x00037e31) grid_ai2_button_pane

0xb60b,	// (0x00037e3a) cell_ai2_button_pane_ParamLimits

0xb60b,	// (0x00037e3a) cell_ai2_button_pane

0x3326,	// (0x0002fb55) cell_ai2_button_pane_g1

0x3330,	// (0x0002fb5f) grid_highlight_pane_cp8

0xb5aa,	// (0x00037dd9) ai2_gene_pane_t1_ParamLimits

0xb5aa,	// (0x00037dd9) ai2_gene_pane_t1

0x8f08,	// (0x00035737) aid_height_parent_landscape

0xaebd,	// (0x000376ec) aid_height_set_list

0xaece,	// (0x000376fd) aid_size_parent

0xb234,	// (0x00037a63) aid_size_cell_graphic_pane_ParamLimits

0xb4c9,	// (0x00037cf8) popup_ai2_data_window_g1_ParamLimits

0xb4c9,	// (0x00037cf8) popup_ai2_data_window_g1

0xb4d5,	// (0x00037d04) ai2_news_ticker_pane_g1

0xb4dd,	// (0x00037d0c) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x0003c218) ai2_news_ticker_pane_g

0xb4e5,	// (0x00037d14) ai2_news_ticker_pane_t1

0xb4f3,	// (0x00037d22) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x0003c21d) ai2_news_ticker_pane_t

0xb520,	// (0x00037d4f) heading_ai2_gene_pane_g1

0xb528,	// (0x00037d57) heading_ai2_gene_pane_t1_ParamLimits

0xb528,	// (0x00037d57) heading_ai2_gene_pane_t1

0xb53d,	// (0x00037d6c) list_highlight_pane_cp6

0xb545,	// (0x00037d74) ai2_gene_pane_ParamLimits

0xb545,	// (0x00037d74) ai2_gene_pane

0xb56d,	// (0x00037d9c) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x0003c222) list_ai2_gene_pane_t

0xb57b,	// (0x00037daa) list_highlight_pane_cp8_ParamLimits

0xb57b,	// (0x00037daa) list_highlight_pane_cp8

0xb58c,	// (0x00037dbb) ai2_gene_pane_g1_ParamLimits

0xb58c,	// (0x00037dbb) ai2_gene_pane_g1

0xb59e,	// (0x00037dcd) ai2_gene_pane_g2_ParamLimits

0xb59e,	// (0x00037dcd) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x0003c227) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x0003c227) ai2_gene_pane_g

0x7d62,	// (0x00034591) scroll_pane_cp12

0x5ca2,	// (0x000324d1) control_pane_t3_ParamLimits

0x5ca2,	// (0x000324d1) control_pane_t3

0x8e85,	// (0x000356b4) status_small_pane_g8_ParamLimits

0x8e85,	// (0x000356b4) status_small_pane_g8

0x910e,	// (0x0003593d) popup_find_window_ParamLimits

0x9339,	// (0x00035b68) popup_note_image_window_ParamLimits

0x5d23,	// (0x00032552) list_double2_graphic_pane_vc_g1_ParamLimits

0x5d23,	// (0x00032552) list_double2_graphic_pane_vc_g1

0x5d2f,	// (0x0003255e) list_double2_graphic_pane_vc_g2_ParamLimits

0x5d2f,	// (0x0003255e) list_double2_graphic_pane_vc_g2

0x5d3b,	// (0x0003256a) list_double2_graphic_pane_vc_g3_ParamLimits

0x5d3b,	// (0x0003256a) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x0003c005) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x0003c005) list_double2_graphic_pane_vc_g

0x5d47,	// (0x00032576) list_double2_graphic_pane_vc_t1_ParamLimits

0x5d47,	// (0x00032576) list_double2_graphic_pane_vc_t1

0x5db1,	// (0x000325e0) list_single_heading_pane_vc_g1_ParamLimits

0x5db1,	// (0x000325e0) list_single_heading_pane_vc_g1

0x5dbd,	// (0x000325ec) list_single_heading_pane_vc_g2_ParamLimits

0x5dbd,	// (0x000325ec) list_single_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003c026) list_single_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003c026) list_single_heading_pane_vc_g

0x5dc9,	// (0x000325f8) list_single_heading_pane_vc_t1_ParamLimits

0x5dc9,	// (0x000325f8) list_single_heading_pane_vc_t1

0x5de1,	// (0x00032610) list_single_heading_pane_vc_t2_ParamLimits

0x5de1,	// (0x00032610) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x0003c02b) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x0003c02b) list_single_heading_pane_vc_t

0x9b09,	// (0x00036338) list_setting_number_pane_vc_g1_ParamLimits

0x9b09,	// (0x00036338) list_setting_number_pane_vc_g1

0x9b15,	// (0x00036344) list_setting_number_pane_vc_g2_ParamLimits

0x9b15,	// (0x00036344) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0003c030) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0003c030) list_setting_number_pane_vc_g

0x9b21,	// (0x00036350) list_setting_number_pane_vc_t1_ParamLimits

0x9b21,	// (0x00036350) list_setting_number_pane_vc_t1

0x9b35,	// (0x00036364) list_setting_number_pane_vc_t2_ParamLimits

0x9b35,	// (0x00036364) list_setting_number_pane_vc_t2

0x9b51,	// (0x00036380) list_setting_number_pane_vc_t3_ParamLimits

0x9b51,	// (0x00036380) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x0003c035) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x0003c035) list_setting_number_pane_vc_t

0x9b79,	// (0x000363a8) set_value_pane_vc_ParamLimits

0x9b79,	// (0x000363a8) set_value_pane_vc

0x61a3,	// (0x000329d2) list_double2_graphic_pane_vc_ParamLimits

0x61a3,	// (0x000329d2) list_double2_graphic_pane_vc

0xb0b2,	// (0x000378e1) list_double2_large_graphic_pane_vc_ParamLimits

0xb0b2,	// (0x000378e1) list_double2_large_graphic_pane_vc

0x61a3,	// (0x000329d2) list_double2_pane_vc_ParamLimits

0x61a3,	// (0x000329d2) list_double2_pane_vc

0x61a3,	// (0x000329d2) list_double_graphic_heading_pane_vc_ParamLimits

0x61a3,	// (0x000329d2) list_double_graphic_heading_pane_vc

0x61a3,	// (0x000329d2) list_double_graphic_pane_vc_ParamLimits

0x61a3,	// (0x000329d2) list_double_graphic_pane_vc

0x61a3,	// (0x000329d2) list_double_heading_pane_vc_ParamLimits

0x61a3,	// (0x000329d2) list_double_heading_pane_vc

0xb0b2,	// (0x000378e1) list_double_large_graphic_pane_vc_ParamLimits

0xb0b2,	// (0x000378e1) list_double_large_graphic_pane_vc

0x61a3,	// (0x000329d2) list_double_number_pane_vc_ParamLimits

0x61a3,	// (0x000329d2) list_double_number_pane_vc

0x61a3,	// (0x000329d2) list_double_pane_vc_ParamLimits

0x61a3,	// (0x000329d2) list_double_pane_vc

0x61a3,	// (0x000329d2) list_double_time_pane_vc_ParamLimits

0x61a3,	// (0x000329d2) list_double_time_pane_vc

0x61a3,	// (0x000329d2) list_setting_number_pane_vc_ParamLimits

0x61a3,	// (0x000329d2) list_setting_number_pane_vc

0x61a3,	// (0x000329d2) list_setting_pane_vc_ParamLimits

0x61a3,	// (0x000329d2) list_setting_pane_vc

0x61a3,	// (0x000329d2) list_single_graphic_heading_pane_vc_ParamLimits

0x61a3,	// (0x000329d2) list_single_graphic_heading_pane_vc

0x61a3,	// (0x000329d2) list_single_heading_pane_vc_ParamLimits

0x61a3,	// (0x000329d2) list_single_heading_pane_vc

0xb0da,	// (0x00037909) list_single_number_heading_pane_vc_ParamLimits

0xb0da,	// (0x00037909) list_single_number_heading_pane_vc

0x5d23,	// (0x00032552) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5d23,	// (0x00032552) list_double_graphic_heading_pane_vc_g1

0x5db1,	// (0x000325e0) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5db1,	// (0x000325e0) list_double_graphic_heading_pane_vc_g2

0x5dbd,	// (0x000325ec) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5dbd,	// (0x000325ec) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x0003c233) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0003c233) list_double_graphic_heading_pane_vc_g

0x62b1,	// (0x00032ae0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x62b1,	// (0x00032ae0) list_double_graphic_heading_pane_vc_t1

0x5dc9,	// (0x000325f8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5dc9,	// (0x000325f8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x0003c23a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x0003c23a) list_double_graphic_heading_pane_vc_t

0x9b09,	// (0x00036338) list_setting_pane_vc_g1_ParamLimits

0x9b09,	// (0x00036338) list_setting_pane_vc_g1

0x9b15,	// (0x00036344) list_setting_pane_vc_g2_ParamLimits

0x9b15,	// (0x00036344) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0003c030) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0003c030) list_setting_pane_vc_g

0xb847,	// (0x00038076) list_setting_pane_vc_t1_ParamLimits

0xb847,	// (0x00038076) list_setting_pane_vc_t1

0xb85b,	// (0x0003808a) list_setting_pane_vc_t2_ParamLimits

0xb85b,	// (0x0003808a) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x0003c268) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x0003c268) list_setting_pane_vc_t

0x9b79,	// (0x000363a8) set_value_pane_cp_vc_ParamLimits

0x9b79,	// (0x000363a8) set_value_pane_cp_vc

0x5db1,	// (0x000325e0) list_single_number_heading_pane_vc_g1_ParamLimits

0x5db1,	// (0x000325e0) list_single_number_heading_pane_vc_g1

0x5dbd,	// (0x000325ec) list_single_number_heading_pane_vc_g2_ParamLimits

0x5dbd,	// (0x000325ec) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003c026) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003c026) list_single_number_heading_pane_vc_g

0x5dc9,	// (0x000325f8) list_single_number_heading_pane_vc_t1_ParamLimits

0x5dc9,	// (0x000325f8) list_single_number_heading_pane_vc_t1

0x62c3,	// (0x00032af2) list_single_number_heading_pane_vc_t2_ParamLimits

0x62c3,	// (0x00032af2) list_single_number_heading_pane_vc_t2

0x62d5,	// (0x00032b04) list_single_number_heading_pane_vc_t3_ParamLimits

0x62d5,	// (0x00032b04) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x0003c26d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003c26d) list_single_number_heading_pane_vc_t

0x5d23,	// (0x00032552) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5d23,	// (0x00032552) list_single_graphic_heading_pane_vc_g1

0x5db1,	// (0x000325e0) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5db1,	// (0x000325e0) list_single_graphic_heading_pane_vc_g4

0x5dbd,	// (0x000325ec) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5dbd,	// (0x000325ec) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa04,	// (0x0003c233) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0003c233) list_single_graphic_heading_pane_vc_g

0x5dc9,	// (0x000325f8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5dc9,	// (0x000325f8) list_single_graphic_heading_pane_vc_t1

0x62e7,	// (0x00032b16) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x62e7,	// (0x00032b16) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x0003c274) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0003c274) list_single_graphic_heading_pane_vc_t

0x5db1,	// (0x000325e0) list_double2_pane_vc_g1_ParamLimits

0x5db1,	// (0x000325e0) list_double2_pane_vc_g1

0x5dbd,	// (0x000325ec) list_double2_pane_vc_g2_ParamLimits

0x5dbd,	// (0x000325ec) list_double2_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003c026) list_double2_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003c026) list_double2_pane_vc_g

0x62f9,	// (0x00032b28) list_double2_pane_vc_t1_ParamLimits

0x62f9,	// (0x00032b28) list_double2_pane_vc_t1

0x630f,	// (0x00032b3e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x630f,	// (0x00032b3e) list_double2_large_graphic_pane_vc_g1

0x631b,	// (0x00032b4a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x631b,	// (0x00032b4a) list_double2_large_graphic_pane_vc_g2

0x6327,	// (0x00032b56) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6327,	// (0x00032b56) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4a,	// (0x0003c279) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x0003c279) list_double2_large_graphic_pane_vc_g

0x6333,	// (0x00032b62) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6333,	// (0x00032b62) list_double2_large_graphic_pane_vc_t1

0x6349,	// (0x00032b78) list_double_time_pane_vc_g1_ParamLimits

0x6349,	// (0x00032b78) list_double_time_pane_vc_g1

0x6355,	// (0x00032b84) list_double_time_pane_vc_g2_ParamLimits

0x6355,	// (0x00032b84) list_double_time_pane_vc_g2

0x0001,

0xfa51,	// (0x0003c280) list_double_time_pane_vc_g_ParamLimits

0xfa51,	// (0x0003c280) list_double_time_pane_vc_g

0x6361,	// (0x00032b90) list_double_time_pane_vc_t1_ParamLimits

0x6361,	// (0x00032b90) list_double_time_pane_vc_t1

0x637c,	// (0x00032bab) list_double_time_pane_vc_t2_ParamLimits

0x637c,	// (0x00032bab) list_double_time_pane_vc_t2

0x63ba,	// (0x00032be9) list_double_time_pane_vc_t3_ParamLimits

0x63ba,	// (0x00032be9) list_double_time_pane_vc_t3

0x63d2,	// (0x00032c01) list_double_time_pane_vc_t4_ParamLimits

0x63d2,	// (0x00032c01) list_double_time_pane_vc_t4

0x0003,

0xfa56,	// (0x0003c285) list_double_time_pane_vc_t_ParamLimits

0xfa56,	// (0x0003c285) list_double_time_pane_vc_t

0x5db1,	// (0x000325e0) list_double_pane_vc_g1_ParamLimits

0x5db1,	// (0x000325e0) list_double_pane_vc_g1

0x5dbd,	// (0x000325ec) list_double_pane_vc_g2_ParamLimits

0x5dbd,	// (0x000325ec) list_double_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003c026) list_double_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003c026) list_double_pane_vc_g

0x63e6,	// (0x00032c15) list_double_pane_vc_t1_ParamLimits

0x63e6,	// (0x00032c15) list_double_pane_vc_t1

0x63fa,	// (0x00032c29) list_double_pane_vc_t2_ParamLimits

0x63fa,	// (0x00032c29) list_double_pane_vc_t2

0x0001,

0xfa5f,	// (0x0003c28e) list_double_pane_vc_t_ParamLimits

0xfa5f,	// (0x0003c28e) list_double_pane_vc_t

0x5db1,	// (0x000325e0) list_double_number_pane_vc_g1_ParamLimits

0x5db1,	// (0x000325e0) list_double_number_pane_vc_g1

0x5dbd,	// (0x000325ec) list_double_number_pane_vc_g2_ParamLimits

0x5dbd,	// (0x000325ec) list_double_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003c026) list_double_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003c026) list_double_number_pane_vc_g

0x6410,	// (0x00032c3f) list_double_number_pane_vc_t1_ParamLimits

0x6410,	// (0x00032c3f) list_double_number_pane_vc_t1

0x6424,	// (0x00032c53) list_double_number_pane_vc_t2_ParamLimits

0x6424,	// (0x00032c53) list_double_number_pane_vc_t2

0x63fa,	// (0x00032c29) list_double_number_pane_vc_t3_ParamLimits

0x63fa,	// (0x00032c29) list_double_number_pane_vc_t3

0x0002,

0xfa64,	// (0x0003c293) list_double_number_pane_vc_t_ParamLimits

0xfa64,	// (0x0003c293) list_double_number_pane_vc_t

0x6438,	// (0x00032c67) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6438,	// (0x00032c67) list_double_large_graphic_pane_vc_g1

0x6444,	// (0x00032c73) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6444,	// (0x00032c73) list_double_large_graphic_pane_vc_g2

0x6327,	// (0x00032b56) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6327,	// (0x00032b56) list_double_large_graphic_pane_vc_g3

0x6453,	// (0x00032c82) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6453,	// (0x00032c82) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6b,	// (0x0003c29a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0003c29a) list_double_large_graphic_pane_vc_g

0x645f,	// (0x00032c8e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x645f,	// (0x00032c8e) list_double_large_graphic_pane_vc_t1

0x6473,	// (0x00032ca2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6473,	// (0x00032ca2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0003c2a3) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0003c2a3) list_double_large_graphic_pane_vc_t

0x5db1,	// (0x000325e0) list_double_heading_pane_vc_g1_ParamLimits

0x5db1,	// (0x000325e0) list_double_heading_pane_vc_g1

0x5dbd,	// (0x000325ec) list_double_heading_pane_vc_g2_ParamLimits

0x5dbd,	// (0x000325ec) list_double_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003c026) list_double_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003c026) list_double_heading_pane_vc_g

0x648a,	// (0x00032cb9) list_double_heading_pane_vc_t1_ParamLimits

0x648a,	// (0x00032cb9) list_double_heading_pane_vc_t1

0x5dc9,	// (0x000325f8) list_double_heading_pane_vc_t2_ParamLimits

0x5dc9,	// (0x000325f8) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x0003c2a8) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x0003c2a8) list_double_heading_pane_vc_t

0x649c,	// (0x00032ccb) list_double_graphic_pane_vc_g1_ParamLimits

0x649c,	// (0x00032ccb) list_double_graphic_pane_vc_g1

0x64ac,	// (0x00032cdb) list_double_graphic_pane_vc_g2_ParamLimits

0x64ac,	// (0x00032cdb) list_double_graphic_pane_vc_g2

0x64bb,	// (0x00032cea) list_double_graphic_pane_vc_g3_ParamLimits

0x64bb,	// (0x00032cea) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x0003c2ad) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0003c2ad) list_double_graphic_pane_vc_g

0x64c7,	// (0x00032cf6) list_double_graphic_pane_vc_t1_ParamLimits

0x64c7,	// (0x00032cf6) list_double_graphic_pane_vc_t1

0x63fa,	// (0x00032c29) list_double_graphic_pane_vc_t2_ParamLimits

0x63fa,	// (0x00032c29) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x0003c2b4) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x0003c2b4) list_double_graphic_pane_vc_t

0x4af2,	// (0x00031321) aid_size_cell_fastswap

0x4afa,	// (0x00031329) aid_size_cell_touch_ParamLimits

0x4afa,	// (0x00031329) aid_size_cell_touch

0x4d65,	// (0x00031594) popup_fast_swap_wide_window_ParamLimits

0x4d65,	// (0x00031594) popup_fast_swap_wide_window

0x4e7b,	// (0x000316aa) touch_pane_ParamLimits

0x4e7b,	// (0x000316aa) touch_pane

0x7db8,	// (0x000345e7) button_value_adjust_pane_cp2

0x7db8,	// (0x000345e7) button_value_adjust_pane_cp4

0x5445,	// (0x00031c74) form_field_data_pane_cp2

0x546a,	// (0x00031c99) form_field_data_wide_pane_cp2

0x83fa,	// (0x00034c29) bg_scroll_pane_ParamLimits

0x581e,	// (0x0003204d) scroll_handle_pane_ParamLimits

0x5832,	// (0x00032061) scroll_sc2_down_pane_ParamLimits

0x5832,	// (0x00032061) scroll_sc2_down_pane

0x842b,	// (0x00034c5a) scroll_sc2_up_pane_ParamLimits

0x842b,	// (0x00034c5a) scroll_sc2_up_pane

0xbcd8,	// (0x00038507) grid_wheel_folder_pane_g1_ParamLimits

0xbcd8,	// (0x00038507) grid_wheel_folder_pane_g1

0x5a88,	// (0x000322b7) clock_nsta_pane_cp2_ParamLimits

0x5a88,	// (0x000322b7) clock_nsta_pane_cp2

0x8c06,	// (0x00035435) listscroll_midp_pane_ParamLimits

0x8c12,	// (0x00035441) midp_canvas_pane

0x8f00,	// (0x0003572f) nsta_clock_indic_pane

0x8f56,	// (0x00035785) listscroll_form_pane_vc

0x8f72,	// (0x000357a1) listscroll_set_pane_vc_ParamLimits

0x8f72,	// (0x000357a1) listscroll_set_pane_vc

0x968a,	// (0x00035eb9) clock_nsta_pane

0x9707,	// (0x00035f36) indicator_nsta_pane

0x99ff,	// (0x0003622e) bg_popup_sub_pane_cp2_ParamLimits

0x9a13,	// (0x00036242) find_pane_cp2_ParamLimits

0x9a13,	// (0x00036242) find_pane_cp2

0x9a29,	// (0x00036258) grid_toobar_pane_ParamLimits

0x9b87,	// (0x000363b6) list_form_gen_pane_vc_ParamLimits

0x9b87,	// (0x000363b6) list_form_gen_pane_vc

0x9b9d,	// (0x000363cc) scroll_pane_cp8_vc_ParamLimits

0x9b9d,	// (0x000363cc) scroll_pane_cp8_vc

0x9c19,	// (0x00036448) data_form_wide_pane_vc_ParamLimits

0x9c19,	// (0x00036448) data_form_wide_pane_vc

0x9c25,	// (0x00036454) form_field_data_wide_pane_vc_g1

0x9c2d,	// (0x0003645c) form_field_data_wide_pane_vc_t1_ParamLimits

0x9c2d,	// (0x0003645c) form_field_data_wide_pane_vc_t1

0x7dcc,	// (0x000345fb) input_focus_pane_cp6_vc_ParamLimits

0x7dcc,	// (0x000345fb) input_focus_pane_cp6_vc

0x9edb,	// (0x0003670a) list_midp_pane_ParamLimits

0x9ee7,	// (0x00036716) scroll_pane_cp16_ParamLimits

0x9ee7,	// (0x00036716) scroll_pane_cp16

0x9f35,	// (0x00036764) button_value_adjust_pane_ParamLimits

0x9f35,	// (0x00036764) button_value_adjust_pane

0xaee0,	// (0x0003770f) button_value_adjust_pane_cp6_ParamLimits

0xaee0,	// (0x0003770f) button_value_adjust_pane_cp6

0xb03a,	// (0x00037869) settings_code_pane_cp_ParamLimits

0xb03a,	// (0x00037869) settings_code_pane_cp

0x3326,	// (0x0002fb55) cell_touch_pane_g1

0x3326,	// (0x0002fb55) cell_touch_pane_g2

0x0001,

0xf71b,	// (0x0003bf4a) cell_touch_pane_g

0xb61d,	// (0x00037e4c) cell_touch_pane_cp_ParamLimits

0xb61d,	// (0x00037e4c) cell_touch_pane_cp

0xb62d,	// (0x00037e5c) cell_touch_pane_ParamLimits

0xb62d,	// (0x00037e5c) cell_touch_pane

0x3326,	// (0x0002fb55) scroll_sc2_down_pane_g1

0x3326,	// (0x0002fb55) scroll_sc2_up_pane_g1

0x3330,	// (0x0002fb5f) bg_set_opt_pane_cp4_vc

0xb63e,	// (0x00037e6d) list_set_graphic_pane_vc_g1_ParamLimits

0xb63e,	// (0x00037e6d) list_set_graphic_pane_vc_g1

0xb64a,	// (0x00037e79) list_set_graphic_pane_vc_g2_ParamLimits

0xb64a,	// (0x00037e79) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x0003c23f) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x0003c23f) list_set_graphic_pane_vc_g

0xb656,	// (0x00037e85) text_primary_small_cp13_vc_ParamLimits

0xb656,	// (0x00037e85) text_primary_small_cp13_vc

0xb66e,	// (0x00037e9d) list_set_graphic_pane_vc_ParamLimits

0xb66e,	// (0x00037e9d) list_set_graphic_pane_vc

0x3330,	// (0x0002fb5f) input_focus_pane_cp2_vc

0x3326,	// (0x0002fb55) setting_code_pane_vc_g1

0xb682,	// (0x00037eb1) setting_code_pane_vc_t1

0xb690,	// (0x00037ebf) set_text_pane_vc_t1_ParamLimits

0xb690,	// (0x00037ebf) set_text_pane_vc_t1

0x3330,	// (0x0002fb5f) input_focus_pane_cp1_vc

0xb6ae,	// (0x00037edd) list_set_text_pane_vc

0x3326,	// (0x0002fb55) setting_text_pane_vc_g1

0x3330,	// (0x0002fb5f) bg_set_opt_pane_cp2_vc

0xb6b8,	// (0x00037ee7) setting_slider_graphic_pane_vc_g1

0xb6c0,	// (0x00037eef) setting_slider_graphic_pane_vc_t1

0xb6ce,	// (0x00037efd) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x0003c244) setting_slider_graphic_pane_vc_t

0xb6dc,	// (0x00037f0b) slider_set_pane_cp_vc

0xb6e4,	// (0x00037f13) slider_set_pane_vc_g1

0xb6ed,	// (0x00037f1c) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x0003c249) slider_set_pane_vc_g

0x7e33,	// (0x00034662) set_opt_bg_pane_g1_copy1

0x7e3b,	// (0x0003466a) set_opt_bg_pane_g2_copy1

0xb719,	// (0x00037f48) set_opt_bg_pane_g3_copy1

0x7e4b,	// (0x0003467a) set_opt_bg_pane_g4_copy1

0x7e53,	// (0x00034682) set_opt_bg_pane_g5_copy1

0x7e5b,	// (0x0003468a) set_opt_bg_pane_g6_copy1

0xb723,	// (0x00037f52) set_opt_bg_pane_g7_copy1

0xb72d,	// (0x00037f5c) set_opt_bg_pane_g8_copy1

0xb737,	// (0x00037f66) set_opt_bg_pane_g9_copy1

0x3330,	// (0x0002fb5f) bg_set_opt_pane_cp_vc

0xb741,	// (0x00037f70) setting_slider_pane_vc_t1

0xb6c0,	// (0x00037eef) setting_slider_pane_vc_t2

0xb6ce,	// (0x00037efd) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x0003c258) setting_slider_pane_vc_t

0xb6dc,	// (0x00037f0b) slider_set_pane_vc

0x5eda,	// (0x00032709) volume_set_pane_vc_g1

0x5ee3,	// (0x00032712) volume_set_pane_vc_g2

0x5eec,	// (0x0003271b) volume_set_pane_vc_g3

0x5ef5,	// (0x00032724) volume_set_pane_vc_g4

0x5efe,	// (0x0003272d) volume_set_pane_vc_g5

0x5f07,	// (0x00032736) volume_set_pane_vc_g6

0x5f10,	// (0x0003273f) volume_set_pane_vc_g7

0x5f19,	// (0x00032748) volume_set_pane_vc_g8

0x5f22,	// (0x00032751) volume_set_pane_vc_g9

0x5f2b,	// (0x0003275a) volume_set_pane_vc_g10

0x0009,

0xf8c7,	// (0x0003c0f6) volume_set_pane_vc_g

0xb750,	// (0x00037f7f) volume_set_pane_vc

0xb758,	// (0x00037f87) button_value_adjust_pane_cp1_vc

0xb762,	// (0x00037f91) list_highlight_pane_cp2_vc

0xb76b,	// (0x00037f9a) list_set_pane_vc_ParamLimits

0xb76b,	// (0x00037f9a) list_set_pane_vc

0xb7d5,	// (0x00038004) main_pane_set_vc_t1_ParamLimits

0xb7d5,	// (0x00038004) main_pane_set_vc_t1

0xb7ea,	// (0x00038019) main_pane_set_vc_t2_ParamLimits

0xb7ea,	// (0x00038019) main_pane_set_vc_t2

0xb7fc,	// (0x0003802b) main_pane_set_vc_t3_ParamLimits

0xb7fc,	// (0x0003802b) main_pane_set_vc_t3

0xb810,	// (0x0003803f) main_pane_set_vc_t4_ParamLimits

0xb810,	// (0x0003803f) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x0003c25f) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x0003c25f) main_pane_set_vc_t

0xb824,	// (0x00038053) setting_code_pane_vc_ParamLimits

0xb824,	// (0x00038053) setting_code_pane_vc

0xb835,	// (0x00038064) setting_slider_graphic_pane_vc

0xb835,	// (0x00038064) setting_slider_pane_vc

0xb835,	// (0x00038064) setting_text_pane_vc

0xb835,	// (0x00038064) setting_volume_pane_vc

0xb83f,	// (0x0003806e) scroll_pane_cp121_vc

0x7da6,	// (0x000345d5) set_content_pane_vc

0xb87d,	// (0x000380ac) button_value_adjust_pane_g1

0xb886,	// (0x000380b5) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x0003c2b9) button_value_adjust_pane_g

0xb88f,	// (0x000380be) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb88f,	// (0x000380be) form_field_slider_wide_pane_vc_t1

0xb8a3,	// (0x000380d2) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb8a3,	// (0x000380d2) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x0003c2be) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x0003c2be) form_field_slider_wide_pane_vc_t

0x77c1,	// (0x00033ff0) input_focus_pane_cp10_vc_ParamLimits

0x77c1,	// (0x00033ff0) input_focus_pane_cp10_vc

0xb8b5,	// (0x000380e4) slider_cont_pane_cp1_vc_ParamLimits

0xb8b5,	// (0x000380e4) slider_cont_pane_cp1_vc

0xb6e4,	// (0x00037f13) slider_form_pane_g1_cp2

0xb6ed,	// (0x00037f1c) slider_form_pane_g2_cp2

0xb8ce,	// (0x000380fd) form_field_slider_pane_vc_t3

0xb8dc,	// (0x0003810b) form_field_slider_pane_vc_t4

0xb8ea,	// (0x00038119) slider_form_pane_vc_ParamLimits

0xb8ea,	// (0x00038119) slider_form_pane_vc

0xb8f7,	// (0x00038126) form_field_slider_pane_vc_t1_ParamLimits

0xb8f7,	// (0x00038126) form_field_slider_pane_vc_t1

0xb8a3,	// (0x000380d2) form_field_slider_pane_vc_t2_ParamLimits

0xb8a3,	// (0x000380d2) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0003c2ce) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0003c2ce) form_field_slider_pane_vc_t

0x77c1,	// (0x00033ff0) input_focus_pane_cp9_vc_ParamLimits

0x77c1,	// (0x00033ff0) input_focus_pane_cp9_vc

0xb913,	// (0x00038142) slider_cont_pane_vc_ParamLimits

0xb913,	// (0x00038142) slider_cont_pane_vc

0xb925,	// (0x00038154) list_form_graphic_pane_cp_vc_ParamLimits

0xb925,	// (0x00038154) list_form_graphic_pane_cp_vc

0x9c25,	// (0x00036454) form_field_popup_wide_pane_vc_g1

0xb93a,	// (0x00038169) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb93a,	// (0x00038169) form_field_popup_wide_pane_vc_t1

0x7dcc,	// (0x000345fb) input_focus_pane_cp8_vc_ParamLimits

0x7dcc,	// (0x000345fb) input_focus_pane_cp8_vc

0xb951,	// (0x00038180) list_form_wide_pane_vc_ParamLimits

0xb951,	// (0x00038180) list_form_wide_pane_vc

0xb95d,	// (0x0003818c) list_form_graphic_pane_vc_g1

0xb965,	// (0x00038194) list_form_graphic_pane_vc_t1_ParamLimits

0xb965,	// (0x00038194) list_form_graphic_pane_vc_t1

0x7545,	// (0x00033d74) list_highlight_pane_cp5_vc_ParamLimits

0x7545,	// (0x00033d74) list_highlight_pane_cp5_vc

0xb981,	// (0x000381b0) list_form_graphic_pane_vc_ParamLimits

0xb981,	// (0x000381b0) list_form_graphic_pane_vc

0x9c25,	// (0x00036454) form_field_popup_pane_vc_g1

0xb997,	// (0x000381c6) form_field_popup_pane_vc_t1_ParamLimits

0xb997,	// (0x000381c6) form_field_popup_pane_vc_t1

0x7dcc,	// (0x000345fb) input_focus_pane_cp7_vc_ParamLimits

0x7dcc,	// (0x000345fb) input_focus_pane_cp7_vc

0xb9ae,	// (0x000381dd) list_form_pane_vc_ParamLimits

0xb9ae,	// (0x000381dd) list_form_pane_vc

0xb9ba,	// (0x000381e9) data_form_pane_vc_t1_ParamLimits

0xb9ba,	// (0x000381e9) data_form_pane_vc_t1

0x7e33,	// (0x00034662) input_focus_pane_vc_g1

0x7e3b,	// (0x0003466a) input_focus_pane_vc_g2

0x7e43,	// (0x00034672) input_focus_pane_vc_g3

0x7e4b,	// (0x0003467a) input_focus_pane_vc_g4

0x7e53,	// (0x00034682) input_focus_pane_vc_g5

0x7e5b,	// (0x0003468a) input_focus_pane_vc_g6

0x7e63,	// (0x00034692) input_focus_pane_vc_g7

0x7e6b,	// (0x0003469a) input_focus_pane_vc_g8

0x7e73,	// (0x000346a2) input_focus_pane_vc_g9

0x3326,	// (0x0002fb55) input_focus_pane_vc_g10

0x0009,

0xf6a4,	// (0x0003bed3) input_focus_pane_vc_g

0x9c19,	// (0x00036448) data_form_pane_vc_ParamLimits

0x9c19,	// (0x00036448) data_form_pane_vc

0x9c25,	// (0x00036454) form_field_data_pane_vc_g1

0xb9d7,	// (0x00038206) form_field_data_pane_vc_t1_ParamLimits

0xb9d7,	// (0x00038206) form_field_data_pane_vc_t1

0x7dcc,	// (0x000345fb) input_focus_pane_vc_ParamLimits

0x7dcc,	// (0x000345fb) input_focus_pane_vc

0xb9f1,	// (0x00038220) button_value_adjust_pane_cp3_vc

0xb9f9,	// (0x00038228) button_value_adjust_pane_cp5_vc

0xba01,	// (0x00038230) form_field_data_pane_vc_ParamLimits

0xba01,	// (0x00038230) form_field_data_pane_vc

0xba1c,	// (0x0003824b) form_field_data_pane_vc_cp2

0xba24,	// (0x00038253) form_field_data_wide_pane_vc_ParamLimits

0xba24,	// (0x00038253) form_field_data_wide_pane_vc

0xba3e,	// (0x0003826d) form_field_data_wide_pane_vc_cp2

0xba46,	// (0x00038275) form_field_popup_pane_vc_ParamLimits

0xba46,	// (0x00038275) form_field_popup_pane_vc

0xba61,	// (0x00038290) form_field_popup_wide_pane_vc_ParamLimits

0xba61,	// (0x00038290) form_field_popup_wide_pane_vc

0xba7b,	// (0x000382aa) form_field_slider_pane_vc_ParamLimits

0xba7b,	// (0x000382aa) form_field_slider_pane_vc

0xba8e,	// (0x000382bd) form_field_slider_wide_pane_vc_ParamLimits

0xba8e,	// (0x000382bd) form_field_slider_wide_pane_vc

0xbaa1,	// (0x000382d0) grid_touch_1_pane_ParamLimits

0xbaa1,	// (0x000382d0) grid_touch_1_pane

0xbaad,	// (0x000382dc) grid_touch_2_pane_ParamLimits

0xbaad,	// (0x000382dc) grid_touch_2_pane

0x8ecb,	// (0x000356fa) touch_pane_g1_ParamLimits

0x8ecb,	// (0x000356fa) touch_pane_g1

0xbac7,	// (0x000382f6) cell_app_pane_cp_wide_ParamLimits

0xbac7,	// (0x000382f6) cell_app_pane_cp_wide

0xbad8,	// (0x00038307) grid_popup_fast_wide_pane_ParamLimits

0xbad8,	// (0x00038307) grid_popup_fast_wide_pane

0xbaec,	// (0x0003831b) scroll_pane_cp19_ParamLimits

0xbaec,	// (0x0003831b) scroll_pane_cp19

0x3330,	// (0x0002fb5f) bg_popup_window_pane_cp20

0xbb00,	// (0x0003832f) listscroll_popup_fast_wide_pane

0x7545,	// (0x00033d74) grid_indicator_nsta_pane

0xbb08,	// (0x00038337) clock_nsta_pane_g1

0xbb11,	// (0x00038340) clock_nsta_pane_t1

0xbb2d,	// (0x0003835c) cell_indicator_nsta_pane_ParamLimits

0xbb2d,	// (0x0003835c) cell_indicator_nsta_pane

0xbb65,	// (0x00038394) cell_indicator_nsta_pane_g1

0xbb73,	// (0x000383a2) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x0003c2d8) cell_indicator_nsta_pane_g

0xbb89,	// (0x000383b8) clock_nsta_pane_cp

0xbb91,	// (0x000383c0) indicator_nsta_pane_cp

0xbb99,	// (0x000383c8) nsta_clock_indic_pane_g1

0x7611,	// (0x00033e40) grid_indicator_pane

0x851d,	// (0x00034d4c) scroll_pane_cp29

0x59d4,	// (0x00032203) indicator_nsta_pane_cp2_ParamLimits

0x59d4,	// (0x00032203) indicator_nsta_pane_cp2

0x7545,	// (0x00033d74) main_apps_wheel_pane

0x9db8,	// (0x000365e7) form_midp_field_text_pane_ParamLimits

0x9f07,	// (0x00036736) scroll_bar_cp050_ParamLimits

0xbc02,	// (0x00038431) cell_indicator_pane_ParamLimits

0xbc02,	// (0x00038431) cell_indicator_pane

0xbc1a,	// (0x00038449) cell_indicator_pane_g1

0xbc24,	// (0x00038453) grid_wheel_folder_pane_ParamLimits

0xbc24,	// (0x00038453) grid_wheel_folder_pane

0xbc38,	// (0x00038467) list_wheel_apps_pane_ParamLimits

0xbc38,	// (0x00038467) list_wheel_apps_pane

0xbc4b,	// (0x0003847a) main_apps_wheel_pane_g1_ParamLimits

0xbc4b,	// (0x0003847a) main_apps_wheel_pane_g1

0xbc67,	// (0x00038496) main_apps_wheel_pane_g2_ParamLimits

0xbc67,	// (0x00038496) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0003c2f4) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0003c2f4) main_apps_wheel_pane_g

0xbc83,	// (0x000384b2) main_apps_wheel_pane_t1_ParamLimits

0xbc83,	// (0x000384b2) main_apps_wheel_pane_t1

0xbcac,	// (0x000384db) list_wheel_apps_pane_g1

0xbcb4,	// (0x000384e3) list_wheel_apps_pane_g2

0xbcbc,	// (0x000384eb) list_wheel_apps_pane_g3

0xbcc4,	// (0x000384f3) list_wheel_apps_pane_g4

0xbcce,	// (0x000384fd) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0003c2f9) list_wheel_apps_pane_g

0x8a7a,	// (0x000352a9) navi_icon_text_pane

0x95b7,	// (0x00035de6) aid_fill_nsta

0xbcef,	// (0x0003851e) navi_icon_text_pane_g1

0xbcfe,	// (0x0003852d) navi_icon_text_pane_t1

0x8910,	// (0x0003513f) list_set_graphic_pane_t1_ParamLimits

0x8910,	// (0x0003513f) list_set_graphic_pane_t1

0xa658,	// (0x00036e87) popup_midp_note_alarm_window_t6_ParamLimits

0xa658,	// (0x00036e87) popup_midp_note_alarm_window_t6

0xa66a,	// (0x00036e99) popup_midp_note_alarm_window_t7_ParamLimits

0xa66a,	// (0x00036e99) popup_midp_note_alarm_window_t7

0xa67c,	// (0x00036eab) popup_midp_note_alarm_window_t8_ParamLimits

0xa67c,	// (0x00036eab) popup_midp_note_alarm_window_t8

0xa68e,	// (0x00036ebd) popup_midp_note_alarm_window_t9_ParamLimits

0xa68e,	// (0x00036ebd) popup_midp_note_alarm_window_t9

0xa6a0,	// (0x00036ecf) popup_midp_note_alarm_window_t10_ParamLimits

0xa6a0,	// (0x00036ecf) popup_midp_note_alarm_window_t10

0xa6b2,	// (0x00036ee1) popup_midp_note_alarm_window_t11_ParamLimits

0xa6b2,	// (0x00036ee1) popup_midp_note_alarm_window_t11

0xa6c4,	// (0x00036ef3) scroll_pane_cp17_ParamLimits

0xa6c4,	// (0x00036ef3) scroll_pane_cp17

0x5eda,	// (0x00032709) volume_small_pane_cp_g1

0x64db,	// (0x00032d0a) volume_small_pane_cp_g2

0x64e4,	// (0x00032d13) volume_small_pane_cp_g3

0x64ed,	// (0x00032d1c) volume_small_pane_cp_g4

0x64f6,	// (0x00032d25) volume_small_pane_cp_g5

0x64ff,	// (0x00032d2e) volume_small_pane_cp_g6

0x6508,	// (0x00032d37) volume_small_pane_cp_g7

0x6511,	// (0x00032d40) volume_small_pane_cp_g8

0x651a,	// (0x00032d49) volume_small_pane_cp_g9

0x6523,	// (0x00032d52) volume_small_pane_cp_g10

0x8cdb,	// (0x0003550a) midp_ticker_pane_g1_ParamLimits

0x8ce7,	// (0x00035516) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x0003bf9f) midp_ticker_pane_g_ParamLimits

0x8cf3,	// (0x00035522) midp_ticker_pane_t1_ParamLimits

0x95cd,	// (0x00035dfc) aid_fill_nsta_2

0x9ef3,	// (0x00036722) list_form2_midp_pane

0xb081,	// (0x000378b0) midp_editing_number_pane_ParamLimits

0xb090,	// (0x000378bf) midp_ticker_pane_ParamLimits

0xbd13,	// (0x00038542) form2_midp_field_pane

0xbd37,	// (0x00038566) scroll_pane_cp51

0xbd57,	// (0x00038586) form2_midp_button_pane_ParamLimits

0xbd57,	// (0x00038586) form2_midp_button_pane

0xbd69,	// (0x00038598) form2_midp_content_pane_ParamLimits

0xbd69,	// (0x00038598) form2_midp_content_pane

0xbd83,	// (0x000385b2) form2_midp_field_choice_group_pane

0xbd8b,	// (0x000385ba) form2_midp_field_pane_g1

0xbd93,	// (0x000385c2) form2_midp_field_pane_g2

0xbd9b,	// (0x000385ca) form2_midp_field_pane_g3

0xbda3,	// (0x000385d2) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0003c31e) form2_midp_field_pane_g

0xbdab,	// (0x000385da) form2_midp_gauge_slider_pane

0xbdb3,	// (0x000385e2) form2_midp_gauge_wait_pane

0xbdbb,	// (0x000385ea) form2_midp_image_pane_ParamLimits

0xbdbb,	// (0x000385ea) form2_midp_image_pane

0xbdd6,	// (0x00038605) form2_midp_label_pane_ParamLimits

0xbdd6,	// (0x00038605) form2_midp_label_pane

0xbdef,	// (0x0003861e) form2_midp_label_pane_cp_ParamLimits

0xbdef,	// (0x0003861e) form2_midp_label_pane_cp

0xbe0e,	// (0x0003863d) form2_midp_string_pane_ParamLimits

0xbe0e,	// (0x0003863d) form2_midp_string_pane

0x652c,	// (0x00032d5b) form2_midp_text_pane_ParamLimits

0x652c,	// (0x00032d5b) form2_midp_text_pane

0xbe20,	// (0x0003864f) form2_midp_time_pane

0xbe30,	// (0x0003865f) input_focus_pane_cp51_ParamLimits

0xbe30,	// (0x0003865f) input_focus_pane_cp51

0xbe48,	// (0x00038677) form2_midp_label_pane_t1_ParamLimits

0xbe48,	// (0x00038677) form2_midp_label_pane_t1

0x6545,	// (0x00032d74) form2_mdip_text_pane_t1_ParamLimits

0x6545,	// (0x00032d74) form2_mdip_text_pane_t1

0x655d,	// (0x00032d8c) form2_midp_time_pane_t1

0xbe86,	// (0x000386b5) form2_midp_gauge_slider_pane_t1

0xbe98,	// (0x000386c7) form2_midp_gauge_slider_pane_t2

0xbeaa,	// (0x000386d9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0003c327) form2_midp_gauge_slider_pane_t

0xbebc,	// (0x000386eb) form2_midp_slider_pane

0xbec8,	// (0x000386f7) form2_midp_gauge_wait_pane_t1

0xbed6,	// (0x00038705) form2_midp_wait_pane_ParamLimits

0xbed6,	// (0x00038705) form2_midp_wait_pane

0xbf01,	// (0x00038730) list_single_2graphic_pane_cp4_ParamLimits

0xbf01,	// (0x00038730) list_single_2graphic_pane_cp4

0x9c54,	// (0x00036483) list_single_midp_graphic_pane_cp_ParamLimits

0x9c54,	// (0x00036483) list_single_midp_graphic_pane_cp

0x3330,	// (0x0002fb5f) list_highlight_pane_cp20

0xbf12,	// (0x00038741) list_single_2graphic_pane_g1_cp4

0xb520,	// (0x00037d4f) list_single_2graphic_pane_g2_cp4

0xbf1a,	// (0x00038749) list_single_2graphic_pane_t1_cp4

0x7545,	// (0x00033d74) list_highlight_pane_cp21

0xbf29,	// (0x00038758) list_single_midp_graphic_pane_g4_cp

0xbf38,	// (0x00038767) list_single_midp_graphic_pane_t1_cp

0xbf4d,	// (0x0003877c) form2_mdip_string_pane_t1_ParamLimits

0xbf4d,	// (0x0003877c) form2_mdip_string_pane_t1

0x3330,	// (0x0002fb5f) bg_wml_button_pane_cp2

0x3326,	// (0x0002fb55) form2_midp_image_pane_g1

0x40a6,	// (0x000308d5) list_double_large_graphic_pane_g5_ParamLimits

0x40a6,	// (0x000308d5) list_double_large_graphic_pane_g5

0x8c06,	// (0x00035435) midp_form_pane_ParamLimits

0x7545,	// (0x00033d74) main_apps_wheel_pane_ParamLimits

0x9361,	// (0x00035b90) popup_preview_window_ParamLimits

0x9361,	// (0x00035b90) popup_preview_window

0x9548,	// (0x00035d77) popup_touch_info_window_ParamLimits

0x9548,	// (0x00035d77) popup_touch_info_window

0x956a,	// (0x00035d99) popup_touch_menu_window_ParamLimits

0x956a,	// (0x00035d99) popup_touch_menu_window

0x331c,	// (0x0002fb4b) bg_popup_sub_pane_cp6

0xbfa7,	// (0x000387d6) list_touch_menu_pane

0xbfaf,	// (0x000387de) list_single_touch_menu_pane_ParamLimits

0xbfaf,	// (0x000387de) list_single_touch_menu_pane

0xbfca,	// (0x000387f9) list_single_touch_menu_pane_t1

0x7545,	// (0x00033d74) bg_popup_sub_pane_cp7_ParamLimits

0x7545,	// (0x00033d74) bg_popup_sub_pane_cp7

0xbfd8,	// (0x00038807) heading_sub_pane

0xbfe0,	// (0x0003880f) list_touch_info_pane_ParamLimits

0xbfe0,	// (0x0003880f) list_touch_info_pane

0xbfef,	// (0x0003881e) list_single_touch_info_pane_ParamLimits

0xbfef,	// (0x0003881e) list_single_touch_info_pane

0xc001,	// (0x00038830) list_single_touch_info_pane_t1

0xc00f,	// (0x0003883e) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0003c335) list_single_touch_info_pane_t

0x8bfe,	// (0x0003542d) bg_popup_heading_pane_cp

0xc01d,	// (0x0003884c) heading_sub_pane_t1

0x9bb3,	// (0x000363e2) bg_popup_preview_window_pane_cp_ParamLimits

0x9bb3,	// (0x000363e2) bg_popup_preview_window_pane_cp

0xbfd8,	// (0x00038807) heading_preview_pane

0xbfe0,	// (0x0003880f) list_preview_pane_ParamLimits

0xbfe0,	// (0x0003880f) list_preview_pane

0xc02b,	// (0x0003885a) popup_preview_window_g1

0xbfef,	// (0x0003881e) list_single_preview_pane_ParamLimits

0xbfef,	// (0x0003881e) list_single_preview_pane

0xc033,	// (0x00038862) list_single_preview_pane_g1

0xc03b,	// (0x0003886a) list_single_preview_pane_t1

0xc001,	// (0x00038830) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0003c33a) list_single_preview_pane_t

0xc049,	// (0x00038878) bg_popup_heading_pane_cp2_ParamLimits

0xc049,	// (0x00038878) bg_popup_heading_pane_cp2

0xc05f,	// (0x0003888e) heading_preview_pane_g1

0xc067,	// (0x00038896) heading_preview_pane_t1_ParamLimits

0xc067,	// (0x00038896) heading_preview_pane_t1

0x7634,	// (0x00033e63) soft_indicator_pane_t1_ParamLimits

0x7d3f,	// (0x0003456e) scroll_pane_ParamLimits

0x8419,	// (0x00034c48) scroll_sc2_left_pane

0x8422,	// (0x00034c51) scroll_sc2_right_pane

0x8441,	// (0x00034c70) scroll_bg_pane_g1_ParamLimits

0x8456,	// (0x00034c85) scroll_bg_pane_g2_ParamLimits

0x846e,	// (0x00034c9d) scroll_bg_pane_g3_ParamLimits

0xf6fb,	// (0x0003bf2a) scroll_bg_pane_g_ParamLimits

0x8441,	// (0x00034c70) scroll_handle_pane_g1_ParamLimits

0x8490,	// (0x00034cbf) scroll_handle_pane_g2_ParamLimits

0x846e,	// (0x00034c9d) scroll_handle_pane_g3_ParamLimits

0xf702,	// (0x0003bf31) scroll_handle_pane_g_ParamLimits

0x8fac,	// (0x000357db) popup_choice_list_window_ParamLimits

0x8fac,	// (0x000357db) popup_choice_list_window

0x9a0b,	// (0x0003623a) choice_list_pane

0x9a8d,	// (0x000362bc) cell_toolbar_pane_t1

0x9ab5,	// (0x000362e4) toolbar_button_pane_ParamLimits

0xab94,	// (0x000373c3) ai_gene_pane_1_t2_ParamLimits

0xab94,	// (0x000373c3) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x0003c152) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x0003c152) ai_gene_pane_1_t

0xc084,	// (0x000388b3) scroll_sc2_left_pane_g1

0xc084,	// (0x000388b3) scroll_sc2_right_pane_g1

0x8f84,	// (0x000357b3) bg_popup_sub_pane_cp10

0xc08e,	// (0x000388bd) list_choice_list_pane

0xc0a5,	// (0x000388d4) list_single_choice_list_pane_ParamLimits

0xc0a5,	// (0x000388d4) list_single_choice_list_pane

0xc0b9,	// (0x000388e8) list_single_choice_list_pane_g1

0xc0c1,	// (0x000388f0) list_single_choice_list_pane_t1_ParamLimits

0xc0c1,	// (0x000388f0) list_single_choice_list_pane_t1

0xc0d6,	// (0x00038905) choice_list_pane_g1

0xc0de,	// (0x0003890d) choice_list_pane_t1

0x331c,	// (0x0002fb4b) input_focus_pane_cp11

0x82f3,	// (0x00034b22) title_pane_stacon_g2_ParamLimits

0x82f3,	// (0x00034b22) title_pane_stacon_g2

0x0002,

0xf6e1,	// (0x0003bf10) title_pane_stacon_g_ParamLimits

0xf6e1,	// (0x0003bf10) title_pane_stacon_g

0x8bfe,	// (0x0003542d) cursor_press_pane

0x9062,	// (0x00035891) popup_fep_hwr_window_ParamLimits

0x9062,	// (0x00035891) popup_fep_hwr_window

0x90ec,	// (0x0003591b) popup_fep_vkb_window_ParamLimits

0x90ec,	// (0x0003591b) popup_fep_vkb_window

0xc0ec,	// (0x0003891b) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0003c363) fep_vkb_side_pane_g_ParamLimits

0x65a9,	// (0x00032dd8) fep_hwr_candidate_pane_ParamLimits

0x65a9,	// (0x00032dd8) fep_hwr_candidate_pane

0x65d3,	// (0x00032e02) fep_hwr_side_pane_ParamLimits

0x65d3,	// (0x00032e02) fep_hwr_side_pane

0x65f5,	// (0x00032e24) fep_hwr_top_pane_ParamLimits

0x65f5,	// (0x00032e24) fep_hwr_top_pane

0x660d,	// (0x00032e3c) fep_hwr_write_pane_ParamLimits

0x660d,	// (0x00032e3c) fep_hwr_write_pane

0xfb34,	// (0x0003c363) fep_vkb_side_pane_g

0xc0f4,	// (0x00038923) fep_hwr_top_pane_g1

0xc106,	// (0x00038935) fep_hwr_top_pane_g2

0x6647,	// (0x00032e76) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x0003c33f) fep_hwr_top_pane_g

0x665c,	// (0x00032e8b) fep_hwr_top_text_pane

0x85e5,	// (0x00034e14) fep_hwr_top_text_pane_g1

0xc13c,	// (0x0003896b) fep_hwr_top_text_pane_t1

0x6766,	// (0x00032f95) fep_hwr_candidate_pane_g1

0xc387,	// (0x00038bb6) fep_vkb_keypad_pane_g3_ParamLimits

0xc387,	// (0x00038bb6) fep_vkb_keypad_pane_g3

0xc3b3,	// (0x00038be2) fep_vkb_keypad_pane_g4_ParamLimits

0xc3b3,	// (0x00038be2) fep_vkb_keypad_pane_g4

0xc42a,	// (0x00038c59) fep_vkb_bottom_pane_g2_ParamLimits

0xc42a,	// (0x00038c59) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0003c36a) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0003c36a) fep_vkb_bottom_pane_g

0xc084,	// (0x000388b3) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0003c374) cell_vkb_side_pane_g

0xc4b5,	// (0x00038ce4) cell_vkb_side_pane_t1

0xc4c3,	// (0x00038cf2) cell_vkb_side_pane_t1_copy1

0xc084,	// (0x000388b3) bg_fep_vkb_candidate_pane_g2

0xc607,	// (0x00038e36) cell_vkb_candidate_pane_ParamLimits

0xc14a,	// (0x00038979) aid_size_cell_vkb_ParamLimits

0xc14a,	// (0x00038979) aid_size_cell_vkb

0xc607,	// (0x00038e36) cell_vkb_candidate_pane

0x678d,	// (0x00032fbc) bg_popup_fep_shadow_pane_g1

0xc1dc,	// (0x00038a0b) fep_vkb_bottom_pane_ParamLimits

0xc1dc,	// (0x00038a0b) fep_vkb_bottom_pane

0xc219,	// (0x00038a48) fep_vkb_candidate_pane_ParamLimits

0xc219,	// (0x00038a48) fep_vkb_candidate_pane

0xc235,	// (0x00038a64) fep_vkb_keypad_pane_ParamLimits

0xc235,	// (0x00038a64) fep_vkb_keypad_pane

0xc268,	// (0x00038a97) fep_vkb_side_pane_ParamLimits

0xc268,	// (0x00038a97) fep_vkb_side_pane

0xc2a4,	// (0x00038ad3) fep_vkb_top_pane_ParamLimits

0xc2a4,	// (0x00038ad3) fep_vkb_top_pane

0xc2e0,	// (0x00038b0f) fep_vkb_top_pane_g1_ParamLimits

0xc2e0,	// (0x00038b0f) fep_vkb_top_pane_g1

0xc2ef,	// (0x00038b1e) fep_vkb_top_pane_g2_ParamLimits

0xc2ef,	// (0x00038b1e) fep_vkb_top_pane_g2

0xc2fe,	// (0x00038b2d) fep_vkb_top_pane_g3_ParamLimits

0xc2fe,	// (0x00038b2d) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0003c35a) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0003c35a) fep_vkb_top_pane_g

0xc31c,	// (0x00038b4b) fep_vkb_top_text_pane_ParamLimits

0xc31c,	// (0x00038b4b) fep_vkb_top_text_pane

0xc32d,	// (0x00038b5c) fep_vkb_side_pane_g1_ParamLimits

0xc32d,	// (0x00038b5c) fep_vkb_side_pane_g1

0xc376,	// (0x00038ba5) grid_vkb_side_pane_ParamLimits

0xc376,	// (0x00038ba5) grid_vkb_side_pane

0x6795,	// (0x00032fc4) bg_popup_fep_shadow_pane_g2

0x679e,	// (0x00032fcd) bg_popup_fep_shadow_pane_g3

0x67a6,	// (0x00032fd5) bg_popup_fep_shadow_pane_g4

0x67af,	// (0x00032fde) bg_popup_fep_shadow_pane_g5

0x67b9,	// (0x00032fe8) bg_popup_fep_shadow_pane_g6

0x67c1,	// (0x00032ff0) bg_popup_fep_shadow_pane_g7

0x7e4b,	// (0x0003467a) bg_popup_fep_shadow_pane_g8

0xc3d5,	// (0x00038c04) grid_vkb_keypad_number_pane_ParamLimits

0xc3d5,	// (0x00038c04) grid_vkb_keypad_number_pane

0xc3e9,	// (0x00038c18) grid_vkb_keypad_pane_ParamLimits

0xc3e9,	// (0x00038c18) grid_vkb_keypad_pane

0xc40f,	// (0x00038c3e) fep_vkb_bottom_pane_g1_ParamLimits

0xc40f,	// (0x00038c3e) fep_vkb_bottom_pane_g1

0xc438,	// (0x00038c67) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc438,	// (0x00038c67) grid_vkb_keypad_bottom_left_pane

0xc44d,	// (0x00038c7c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc44d,	// (0x00038c7c) grid_vkb_keypad_bottom_right_pane

0xc462,	// (0x00038c91) fep_vkb_top_text_pane_g1

0xc47d,	// (0x00038cac) fep_vkb_top_text_pane_t1

0xc492,	// (0x00038cc1) cell_vkb_side_pane_ParamLimits

0xc492,	// (0x00038cc1) cell_vkb_side_pane

0xc084,	// (0x000388b3) cell_vkb_side_pane_g1

0xc4d1,	// (0x00038d00) cell_vkb_keypad_pane_ParamLimits

0xc4d1,	// (0x00038d00) cell_vkb_keypad_pane

0xc55e,	// (0x00038d8d) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0003c387) bg_popup_fep_shadow_pane_g

0x67d3,	// (0x00033002) cell_hwr_side_pane_g1

0x67d3,	// (0x00033002) cell_hwr_side_pane_g2

0xc568,	// (0x00038d97) cell_vkb_keypad_pane_t1

0xc576,	// (0x00038da5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc576,	// (0x00038da5) cell_vkb_keypad_bottom_left_pane

0xc593,	// (0x00038dc2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc593,	// (0x00038dc2) cell_vkb_keypad_bottom_right_pane

0xc084,	// (0x000388b3) cell_vkb_keypad_bottom_left_pane_g1

0xc084,	// (0x000388b3) cell_vkb_keypad_bottom_right_pane_g1

0xc5cc,	// (0x00038dfb) cell_vkb_keypad_number_pane_ParamLimits

0xc5cc,	// (0x00038dfb) cell_vkb_keypad_number_pane

0xc5eb,	// (0x00038e1a) cell_vkb_keypad_number_pane_g1

0xc5f5,	// (0x00038e24) cell_vkb_keypad_number_pane_g2

0xc5fe,	// (0x00038e2d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0003c379) cell_vkb_keypad_number_pane_g

0xc568,	// (0x00038d97) cell_vkb_keypad_number_pane_t1

0xc628,	// (0x00038e57) fep_vkb_candidate_pane_g1

0x0001,

0xfb6b,	// (0x0003c39a) cell_hwr_side_pane_g

0xc641,	// (0x00038e70) cell_hwr_side_pane_t1

0x67dd,	// (0x0003300c) cell_hwr_side_pane_t1_copy1

0x67eb,	// (0x0003301a) cell_hwr_candidate_pane_g1

0x681a,	// (0x00033049) cell_hwr_candidate_pane_t1

0xc084,	// (0x000388b3) cell_vkb_candidate_pane_g2

0xc685,	// (0x00038eb4) cell_vkb_candidate_pane_t1

0x6570,	// (0x00032d9f) bg_popup_fep_shadow_pane_ParamLimits

0x6570,	// (0x00032d9f) bg_popup_fep_shadow_pane

0x6627,	// (0x00032e56) bg_fep_hwr_top_pane_g4

0xc118,	// (0x00038947) bg_hwr_side_pane_g1_ParamLimits

0xc118,	// (0x00038947) bg_hwr_side_pane_g1

0x669a,	// (0x00032ec9) cell_hwr_side_pane_ParamLimits

0x669a,	// (0x00032ec9) cell_hwr_side_pane

0x66d7,	// (0x00032f06) fep_hwr_write_pane_g1_ParamLimits

0x66d7,	// (0x00032f06) fep_hwr_write_pane_g1

0x66e4,	// (0x00032f13) fep_hwr_write_pane_g2_ParamLimits

0x66e4,	// (0x00032f13) fep_hwr_write_pane_g2

0x66f1,	// (0x00032f20) fep_hwr_write_pane_g3_ParamLimits

0x66f1,	// (0x00032f20) fep_hwr_write_pane_g3

0x66ff,	// (0x00032f2e) fep_hwr_write_pane_g4_ParamLimits

0x66ff,	// (0x00032f2e) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0003c346) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0003c346) fep_hwr_write_pane_g

0x6627,	// (0x00032e56) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6627,	// (0x00032e56) bg_fep_hwr_candidate_pane_g2

0x6714,	// (0x00032f43) cell_hwr_candidate_pane_ParamLimits

0x6714,	// (0x00032f43) cell_hwr_candidate_pane

0x6766,	// (0x00032f95) fep_hwr_candidate_pane_g1_ParamLimits

0xc178,	// (0x000389a7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc178,	// (0x000389a7) bg_popup_fep_shadow_pane_cp2

0xc30e,	// (0x00038b3d) fep_vkb_top_pane_g4_ParamLimits

0xc30e,	// (0x00038b3d) fep_vkb_top_pane_g4

0xc354,	// (0x00038b83) fep_vkb_side_pane_g2_ParamLimits

0xc354,	// (0x00038b83) fep_vkb_side_pane_g2

0x5352,	// (0x00031b81) list_setting_pane_t4_ParamLimits

0x5352,	// (0x00031b81) list_setting_pane_t4

0x53ee,	// (0x00031c1d) list_setting_number_pane_t5_ParamLimits

0x53ee,	// (0x00031c1d) list_setting_number_pane_t5

0x862c,	// (0x00034e5b) list_double_heading_pane_cp2_ParamLimits

0x862c,	// (0x00034e5b) list_double_heading_pane_cp2

0x7de6,	// (0x00034615) list_double_heading_pane_g1_cp2_ParamLimits

0x7de6,	// (0x00034615) list_double_heading_pane_g1_cp2

0x7df2,	// (0x00034621) list_double_heading_pane_g2_cp2_ParamLimits

0x7df2,	// (0x00034621) list_double_heading_pane_g2_cp2

0xc693,	// (0x00038ec2) list_double_heading_pane_t1_cp2_ParamLimits

0xc693,	// (0x00038ec2) list_double_heading_pane_t1_cp2

0xc6a9,	// (0x00038ed8) list_double_heading_pane_t2_cp2_ParamLimits

0xc6a9,	// (0x00038ed8) list_double_heading_pane_t2_cp2

0x3314,	// (0x0002fb43) aid_value_unit2

0x4dc3,	// (0x000315f2) popup_preview_fixed_window

0x77cf,	// (0x00033ffe) bg_popup_preview_window_pane_cp02

0xc6bb,	// (0x00038eea) list_preview_fixed_pane

0xc701,	// (0x00038f30) list_empty_pane_fp_ParamLimits

0xc701,	// (0x00038f30) list_empty_pane_fp

0xc701,	// (0x00038f30) list_single_cale_day_pane_fp_ParamLimits

0xc701,	// (0x00038f30) list_single_cale_day_pane_fp

0xc701,	// (0x00038f30) list_single_graphic_heading_pane_fp_ParamLimits

0xc701,	// (0x00038f30) list_single_graphic_heading_pane_fp

0xc701,	// (0x00038f30) list_single_graphic_pane_fp_ParamLimits

0xc701,	// (0x00038f30) list_single_graphic_pane_fp

0xc701,	// (0x00038f30) list_single_heading_pane_fp_ParamLimits

0xc701,	// (0x00038f30) list_single_heading_pane_fp

0xc701,	// (0x00038f30) list_single_pane_fp_ParamLimits

0xc701,	// (0x00038f30) list_single_pane_fp

0xc71a,	// (0x00038f49) list_single_pane_fp_g1_ParamLimits

0xc71a,	// (0x00038f49) list_single_pane_fp_g1

0x6838,	// (0x00033067) list_single_pane_fp_g2_ParamLimits

0x6838,	// (0x00033067) list_single_pane_fp_g2

0x6844,	// (0x00033073) list_single_pane_fp_g3_ParamLimits

0x6844,	// (0x00033073) list_single_pane_fp_g3

0xc726,	// (0x00038f55) list_single_pane_fp_g4_ParamLimits

0xc726,	// (0x00038f55) list_single_pane_fp_g4

0x0003,

0xfb7e,	// (0x0003c3ad) list_single_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003c3ad) list_single_pane_fp_g

0x6858,	// (0x00033087) list_single_pane_fp_t1_ParamLimits

0x6858,	// (0x00033087) list_single_pane_fp_t1

0x686f,	// (0x0003309e) list_single_graphic_pane_fp_g1_ParamLimits

0x686f,	// (0x0003309e) list_single_graphic_pane_fp_g1

0xc71a,	// (0x00038f49) list_single_graphic_pane_fp_g2_ParamLimits

0xc71a,	// (0x00038f49) list_single_graphic_pane_fp_g2

0x6838,	// (0x00033067) list_single_graphic_pane_fp_g3_ParamLimits

0x6838,	// (0x00033067) list_single_graphic_pane_fp_g3

0x6844,	// (0x00033073) list_single_graphic_pane_fp_g4_ParamLimits

0x6844,	// (0x00033073) list_single_graphic_pane_fp_g4

0xc726,	// (0x00038f55) list_single_graphic_pane_fp_g5_ParamLimits

0xc726,	// (0x00038f55) list_single_graphic_pane_fp_g5

0x0004,

0xfb87,	// (0x0003c3b6) list_single_graphic_pane_fp_g_ParamLimits

0xfb87,	// (0x0003c3b6) list_single_graphic_pane_fp_g

0x687b,	// (0x000330aa) list_single_graphic_pane_fp_t1_ParamLimits

0x687b,	// (0x000330aa) list_single_graphic_pane_fp_t1

0x686f,	// (0x0003309e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x686f,	// (0x0003309e) list_single_graphic_heading_pane_fp_g1

0xc71a,	// (0x00038f49) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc71a,	// (0x00038f49) list_single_graphic_heading_pane_fp_g2

0x6838,	// (0x00033067) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6838,	// (0x00033067) list_single_graphic_heading_pane_fp_g3

0x6844,	// (0x00033073) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6844,	// (0x00033073) list_single_graphic_heading_pane_fp_g4

0xc726,	// (0x00038f55) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc726,	// (0x00038f55) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0003c3b6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0003c3b6) list_single_graphic_heading_pane_fp_g

0x6891,	// (0x000330c0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6891,	// (0x000330c0) list_single_graphic_heading_pane_fp_t1

0x68a7,	// (0x000330d6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x68a7,	// (0x000330d6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x0003c3c1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x0003c3c1) list_single_graphic_heading_pane_fp_t

0x68b9,	// (0x000330e8) list_single_cale_day_pane_fp_g1_ParamLimits

0x68b9,	// (0x000330e8) list_single_cale_day_pane_fp_g1

0xc732,	// (0x00038f61) list_single_cale_day_pane_fp_g2_ParamLimits

0xc732,	// (0x00038f61) list_single_cale_day_pane_fp_g2

0x68f1,	// (0x00033120) list_single_cale_day_pane_fp_g3_ParamLimits

0x68f1,	// (0x00033120) list_single_cale_day_pane_fp_g3

0x6919,	// (0x00033148) list_single_cale_day_pane_fp_g4_ParamLimits

0x6919,	// (0x00033148) list_single_cale_day_pane_fp_g4

0x693d,	// (0x0003316c) list_single_cale_day_pane_fp_g5_ParamLimits

0x693d,	// (0x0003316c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb97,	// (0x0003c3c6) list_single_cale_day_pane_fp_g_ParamLimits

0xfb97,	// (0x0003c3c6) list_single_cale_day_pane_fp_g

0x6961,	// (0x00033190) list_single_cale_day_pane_fp_t1_ParamLimits

0x6961,	// (0x00033190) list_single_cale_day_pane_fp_t1

0x6987,	// (0x000331b6) list_single_cale_day_pane_fp_t2_ParamLimits

0x6987,	// (0x000331b6) list_single_cale_day_pane_fp_t2

0x69a0,	// (0x000331cf) list_single_cale_day_pane_fp_t3_ParamLimits

0x69a0,	// (0x000331cf) list_single_cale_day_pane_fp_t3

0x0002,

0xfba2,	// (0x0003c3d1) list_single_cale_day_pane_fp_t_ParamLimits

0xfba2,	// (0x0003c3d1) list_single_cale_day_pane_fp_t

0xc71a,	// (0x00038f49) list_empty_pane_fp_g1_ParamLimits

0xc71a,	// (0x00038f49) list_empty_pane_fp_g1

0x69b9,	// (0x000331e8) list_empty_pane_fp_t1

0x69c7,	// (0x000331f6) list_empty_pane_fp_t2

0x0001,

0xfba9,	// (0x0003c3d8) list_empty_pane_fp_t

0xc71a,	// (0x00038f49) list_single_heading_pane_fp_g1_ParamLimits

0xc71a,	// (0x00038f49) list_single_heading_pane_fp_g1

0x6838,	// (0x00033067) list_single_heading_pane_fp_g2_ParamLimits

0x6838,	// (0x00033067) list_single_heading_pane_fp_g2

0x6844,	// (0x00033073) list_single_heading_pane_fp_g3_ParamLimits

0x6844,	// (0x00033073) list_single_heading_pane_fp_g3

0x0002,

0xfbae,	// (0x0003c3dd) list_single_heading_pane_fp_g_ParamLimits

0xfbae,	// (0x0003c3dd) list_single_heading_pane_fp_g

0x69d5,	// (0x00033204) list_single_heading_pane_fp_t1_ParamLimits

0x69d5,	// (0x00033204) list_single_heading_pane_fp_t1

0x69e7,	// (0x00033216) list_single_heading_pane_fp_t2_ParamLimits

0x69e7,	// (0x00033216) list_single_heading_pane_fp_t2

0x0001,

0xfbb5,	// (0x0003c3e4) list_single_heading_pane_fp_t_ParamLimits

0xfbb5,	// (0x0003c3e4) list_single_heading_pane_fp_t

0x7fe1,	// (0x00034810) aid_size_cell_fast

0x7741,	// (0x00033f70) soft_indicator_pane_cp1_t1

0x801e,	// (0x0003484d) cell_app_pane_cp2_ParamLimits

0x801e,	// (0x0003484d) cell_app_pane_cp2

0x6592,	// (0x00032dc1) fep_hwr_candidate_drop_down_list_pane

0x6780,	// (0x00032faf) fep_hwr_candidate_pane_g3_ParamLimits

0x6780,	// (0x00032faf) fep_hwr_candidate_pane_g3

0x3307,	// (0x0002fb36) fep_hwr_candidate_pane_g4_ParamLimits

0x3307,	// (0x0002fb36) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0003c353) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0003c353) fep_hwr_candidate_pane_g

0xc208,	// (0x00038a37) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc208,	// (0x00038a37) fep_vkb_candidate_drop_down_list_pane

0xc630,	// (0x00038e5f) fep_vkb_candidate_pane_g3

0xc638,	// (0x00038e67) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x0003c380) fep_vkb_candidate_pane_g

0x67eb,	// (0x0003301a) cell_hwr_candidate_pane_g1_ParamLimits

0x67f9,	// (0x00033028) cell_hwr_candidate_pane_g3_ParamLimits

0x67f9,	// (0x00033028) cell_hwr_candidate_pane_g3

0xdc1e,	// (0x0003a44d) cell_hwr_candidate_pane_g4_ParamLimits

0xdc1e,	// (0x0003a44d) cell_hwr_candidate_pane_g4

0x0002,

0xfb70,	// (0x0003c39f) cell_hwr_candidate_pane_g_ParamLimits

0xfb70,	// (0x0003c39f) cell_hwr_candidate_pane_g

0xc64f,	// (0x00038e7e) cell_vkb_candidate_pane_g3_ParamLimits

0xc64f,	// (0x00038e7e) cell_vkb_candidate_pane_g3

0xc66a,	// (0x00038e99) cell_vkb_candidate_pane_g4_ParamLimits

0xc66a,	// (0x00038e99) cell_vkb_candidate_pane_g4

0xc73e,	// (0x00038f6d) cell_app_pane_cp2_g1_ParamLimits

0xc73e,	// (0x00038f6d) cell_app_pane_cp2_g1

0xc75c,	// (0x00038f8b) cell_app_pane_cp2_g2_ParamLimits

0xc75c,	// (0x00038f8b) cell_app_pane_cp2_g2

0x0001,

0xfbba,	// (0x0003c3e9) cell_app_pane_cp2_g_ParamLimits

0xfbba,	// (0x0003c3e9) cell_app_pane_cp2_g

0xc768,	// (0x00038f97) cell_app_pane_cp2_t1_ParamLimits

0xc768,	// (0x00038f97) cell_app_pane_cp2_t1

0x7dcc,	// (0x000345fb) grid_highlight_pane_cp1_ParamLimits

0x7dcc,	// (0x000345fb) grid_highlight_pane_cp1

0x69fd,	// (0x0003322c) cell_hwr_candidate_pane_cp1_ParamLimits

0x69fd,	// (0x0003322c) cell_hwr_candidate_pane_cp1

0x67eb,	// (0x0003301a) fep_hwr_candidate_drop_down_list_pane_g1

0x6a21,	// (0x00033250) fep_hwr_candidate_drop_down_list_pane_g2

0x6a2e,	// (0x0003325d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x0003c3ee) fep_hwr_candidate_drop_down_list_pane_g

0x6a3b,	// (0x0003326a) fep_hwr_candidate_drop_down_list_scroll_pane

0x6a44,	// (0x00033273) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6a44,	// (0x00033273) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6a51,	// (0x00033280) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6a51,	// (0x00033280) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6a5e,	// (0x0003328d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6a5e,	// (0x0003328d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6a6b,	// (0x0003329a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6a6b,	// (0x0003329a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6a86,	// (0x000332b5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6a86,	// (0x000332b5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6aa1,	// (0x000332d0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6aa1,	// (0x000332d0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6abc,	// (0x000332eb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6abc,	// (0x000332eb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6ad7,	// (0x00033306) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6ad7,	// (0x00033306) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x0003c3f5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x0003c3f5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc77a,	// (0x00038fa9) cell_vkb_candidate_pane_cp1_ParamLimits

0xc77a,	// (0x00038fa9) cell_vkb_candidate_pane_cp1

0xc30e,	// (0x00038b3d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc30e,	// (0x00038b3d) fep_vkb_candidate_drop_down_list_pane_g1

0xc7a0,	// (0x00038fcf) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7a0,	// (0x00038fcf) fep_vkb_candidate_drop_down_list_pane_g2

0xc7ad,	// (0x00038fdc) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7ad,	// (0x00038fdc) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0003c406) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd7,	// (0x0003c406) fep_vkb_candidate_drop_down_list_pane_g

0xc7ba,	// (0x00038fe9) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7ba,	// (0x00038fe9) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7c7,	// (0x00038ff6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7c7,	// (0x00038ff6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7d4,	// (0x00039003) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7d4,	// (0x00039003) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7e0,	// (0x0003900f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7e0,	// (0x0003900f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7ec,	// (0x0003901b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7ec,	// (0x0003901b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc80d,	// (0x0003903c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc80d,	// (0x0003903c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc82e,	// (0x0003905d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc82e,	// (0x0003905d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc84f,	// (0x0003907e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc84f,	// (0x0003907e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc870,	// (0x0003909f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc870,	// (0x0003909f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0003c40d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0003c40d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x747b,	// (0x00033caa) title_pane_g1_ParamLimits

0x7488,	// (0x00033cb7) title_pane_g2_ParamLimits

0xf566,	// (0x0003bd95) title_pane_g_ParamLimits

0x85d5,	// (0x00034e04) aid_call2_pane

0x85dd,	// (0x00034e0c) aid_call_pane

0x85e5,	// (0x00034e14) popup_clock_analogue_window_g1

0x85e5,	// (0x00034e14) popup_clock_analogue_window_g2

0x5847,	// (0x00032076) popup_clock_analogue_window_g3

0x5850,	// (0x0003207f) popup_clock_analogue_window_g4

0x3326,	// (0x0002fb55) popup_clock_analogue_window_g5

0x0004,

0xf710,	// (0x0003bf3f) popup_clock_analogue_window_g

0x5858,	// (0x00032087) popup_clock_analogue_window_t1

0x5866,	// (0x00032095) clock_digital_number_pane_ParamLimits

0x5866,	// (0x00032095) clock_digital_number_pane

0x5872,	// (0x000320a1) clock_digital_number_pane_cp02_ParamLimits

0x5872,	// (0x000320a1) clock_digital_number_pane_cp02

0x587e,	// (0x000320ad) clock_digital_number_pane_cp03_ParamLimits

0x587e,	// (0x000320ad) clock_digital_number_pane_cp03

0x588a,	// (0x000320b9) clock_digital_number_pane_cp04_ParamLimits

0x588a,	// (0x000320b9) clock_digital_number_pane_cp04

0x5896,	// (0x000320c5) clock_digital_separator_pane_ParamLimits

0x5896,	// (0x000320c5) clock_digital_separator_pane

0x58a2,	// (0x000320d1) popup_clock_digital_window_t1_ParamLimits

0x58a2,	// (0x000320d1) popup_clock_digital_window_t1

0x3326,	// (0x0002fb55) clock_digital_number_pane_g1

0x3326,	// (0x0002fb55) clock_digital_number_pane_g2

0x0001,

0xf71b,	// (0x0003bf4a) clock_digital_number_pane_g

0x3326,	// (0x0002fb55) clock_digital_separator_pane_g1

0x3326,	// (0x0002fb55) clock_digital_separator_pane_g2

0x0001,

0xf71b,	// (0x0003bf4a) clock_digital_separator_pane_g

0x95b7,	// (0x00035de6) aid_fill_nsta_ParamLimits

0x9707,	// (0x00035f36) indicator_nsta_pane_ParamLimits

0x9898,	// (0x000360c7) popup_clock_analogue_window

0x9898,	// (0x000360c7) popup_clock_digital_window

0x7545,	// (0x00033d74) grid_indicator_nsta_pane_ParamLimits

0xbb1f,	// (0x0003834e) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0003c2d3) clock_nsta_pane_t

0x580b,	// (0x0003203a) aid_size_max_handle

0x5815,	// (0x00032044) aid_size_min_handle

0x8bfe,	// (0x0003542d) editor_scroll_pane

0xc88b,	// (0x000390ba) ex_editor_pane

0x7f4e,	// (0x0003477d) scroll_pane_cp13

0x7d6b,	// (0x0003459a) scroll_pane_cp14

0x8614,	// (0x00034e43) scroll_pane_cp36

0x8642,	// (0x00034e71) list_single_graphic_hl_pane_cp2_ParamLimits

0x8642,	// (0x00034e71) list_single_graphic_hl_pane_cp2

0x61b8,	// (0x000329e7) list_single_graphic_hl_pane_ParamLimits

0x61b8,	// (0x000329e7) list_single_graphic_hl_pane

0x6af2,	// (0x00033321) aid_size_min_hl_cp1

0xc893,	// (0x000390c2) list_highlight_pane_cp34_ParamLimits

0xc893,	// (0x000390c2) list_highlight_pane_cp34

0xc8a4,	// (0x000390d3) list_single_graphic_hl_pane_g1_ParamLimits

0xc8a4,	// (0x000390d3) list_single_graphic_hl_pane_g1

0x6afb,	// (0x0003332a) list_single_graphic_hl_pane_g2_ParamLimits

0x6afb,	// (0x0003332a) list_single_graphic_hl_pane_g2

0x6afb,	// (0x0003332a) list_single_graphic_hl_pane_g3_ParamLimits

0x6afb,	// (0x0003332a) list_single_graphic_hl_pane_g3

0x5db1,	// (0x000325e0) list_single_graphic_hl_pane_g4_ParamLimits

0x5db1,	// (0x000325e0) list_single_graphic_hl_pane_g4

0x6b07,	// (0x00033336) list_single_graphic_hl_pane_g5_ParamLimits

0x6b07,	// (0x00033336) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x0003c41e) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x0003c41e) list_single_graphic_hl_pane_g

0x6b1b,	// (0x0003334a) list_single_graphic_hl_pane_t1_ParamLimits

0x6b1b,	// (0x0003334a) list_single_graphic_hl_pane_t1

0xc8b1,	// (0x000390e0) aid_size_min_hl_cp2

0xc8ba,	// (0x000390e9) list_highlight_pane_cp34_cp2_ParamLimits

0xc8ba,	// (0x000390e9) list_highlight_pane_cp34_cp2

0xc8a4,	// (0x000390d3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8a4,	// (0x000390d3) list_single_graphic_hl_pane_g1_cp2

0xc8c7,	// (0x000390f6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8c7,	// (0x000390f6) list_single_graphic_hl_pane_g2_cp2

0xc8d3,	// (0x00039102) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8d3,	// (0x00039102) list_single_graphic_hl_pane_g3_cp2

0x814a,	// (0x00034979) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x814a,	// (0x00034979) list_single_graphic_hl_pane_g4_cp2

0xc8e1,	// (0x00039110) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc8e1,	// (0x00039110) list_single_graphic_hl_pane_g5_cp2

0x5be7,	// (0x00032416) control_pane_g4_ParamLimits

0x5be7,	// (0x00032416) control_pane_g4

0x8f84,	// (0x000357b3) bg_popup_sub_pane_cp10_ParamLimits

0xc08e,	// (0x000388bd) list_choice_list_pane_ParamLimits

0xc09d,	// (0x000388cc) scroll_pane_cp23

0x77cf,	// (0x00033ffe) bg_popup_preview_window_pane_cp02_ParamLimits

0xc6bb,	// (0x00038eea) list_preview_fixed_pane_ParamLimits

0xc6d1,	// (0x00038f00) list_preview_fixed_pane_cp_ParamLimits

0xc6d1,	// (0x00038f00) list_preview_fixed_pane_cp

0xc6dd,	// (0x00038f0c) popup_preview_fixed_window_g1_ParamLimits

0xc6dd,	// (0x00038f0c) popup_preview_fixed_window_g1

0xc6e9,	// (0x00038f18) popup_preview_fixed_window_g2_ParamLimits

0xc6e9,	// (0x00038f18) popup_preview_fixed_window_g2

0x0002,

0xfb77,	// (0x0003c3a6) popup_preview_fixed_window_g_ParamLimits

0xfb77,	// (0x0003c3a6) popup_preview_fixed_window_g

0x577d,	// (0x00031fac) aid_navi_side_left_pane_ParamLimits

0x5792,	// (0x00031fc1) aid_navi_side_right_pane_ParamLimits

0x57aa,	// (0x00031fd9) navi_icon_pane_stacon_ParamLimits

0x57be,	// (0x00031fed) navi_navi_pane_stacon_ParamLimits

0x57aa,	// (0x00031fd9) navi_text_pane_stacon_ParamLimits

0x331c,	// (0x0002fb4b) main_text_info_pane

0xc90b,	// (0x0003913a) listscroll_text_info_pane

0xc913,	// (0x00039142) list_text_info_pane_ParamLimits

0xc913,	// (0x00039142) list_text_info_pane

0xc922,	// (0x00039151) scroll_pane_cp24_ParamLimits

0xc922,	// (0x00039151) scroll_pane_cp24

0xc940,	// (0x0003916f) list_text_info_pane_t1_ParamLimits

0xc940,	// (0x0003916f) list_text_info_pane_t1

0x8fca,	// (0x000357f9) popup_fast_swap2_window_ParamLimits

0x8fca,	// (0x000357f9) popup_fast_swap2_window

0xc965,	// (0x00039194) aid_size_cell_fast2

0x331c,	// (0x0002fb4b) bg_popup_window_pane_cp17

0x9f1f,	// (0x0003674e) heading_pane_cp2

0x7a2f,	// (0x0003425e) listscroll_fast2_pane

0xc96f,	// (0x0003919e) grid_fast2_pane

0xc979,	// (0x000391a8) listscroll_fast2_pane_g1

0xc983,	// (0x000391b2) listscroll_fast2_pane_g2

0x0001,

0xfbfa,	// (0x0003c429) listscroll_fast2_pane_g

0x7f4e,	// (0x0003477d) scroll_pane_cp26

0xc98d,	// (0x000391bc) cell_fast2_pane_ParamLimits

0xc98d,	// (0x000391bc) cell_fast2_pane

0xc9a4,	// (0x000391d3) cell_fast2_pane_g1

0xc9ad,	// (0x000391dc) cell_fast2_pane_g2

0xc9b6,	// (0x000391e5) cell_fast2_pane_g3

0x0002,

0xfbff,	// (0x0003c42e) cell_fast2_pane_g

0x7b28,	// (0x00034357) grid_highlight_pane_cp9

0x7b3d,	// (0x0003436c) main_eswt_pane_ParamLimits

0x7b3d,	// (0x0003436c) main_eswt_pane

0xc937,	// (0x00039166) list_single_text_info_pane

0xc9be,	// (0x000391ed) eswt_ctrl_button_pane

0xc9be,	// (0x000391ed) eswt_ctrl_canvas_pane

0xc9c6,	// (0x000391f5) eswt_ctrl_combo_pane

0xc9be,	// (0x000391ed) eswt_ctrl_default_pane

0xc9be,	// (0x000391ed) eswt_ctrl_label_pane

0xc9ce,	// (0x000391fd) eswt_ctrl_wait_pane

0xc9d6,	// (0x00039205) eswt_shell_pane

0x331c,	// (0x0002fb4b) listscroll_eswt_app_pane

0xc9f6,	// (0x00039225) popup_eswt_tasktip_window_ParamLimits

0xc9f6,	// (0x00039225) popup_eswt_tasktip_window

0x9bb3,	// (0x000363e2) bg_popup_window_pane_cp18

0xca07,	// (0x00039236) eswt_control_pane_g1_ParamLimits

0xca07,	// (0x00039236) eswt_control_pane_g1

0xca14,	// (0x00039243) eswt_control_pane_g2_ParamLimits

0xca14,	// (0x00039243) eswt_control_pane_g2

0xca21,	// (0x00039250) eswt_control_pane_g3_ParamLimits

0xca21,	// (0x00039250) eswt_control_pane_g3

0xca2e,	// (0x0003925d) eswt_control_pane_g4_ParamLimits

0xca2e,	// (0x0003925d) eswt_control_pane_g4

0x0003,

0xfc06,	// (0x0003c435) eswt_control_pane_g_ParamLimits

0xfc06,	// (0x0003c435) eswt_control_pane_g

0x7dcc,	// (0x000345fb) bg_button_pane_ParamLimits

0x7dcc,	// (0x000345fb) bg_button_pane

0x7b3d,	// (0x0003436c) common_borders_pane_copy2_ParamLimits

0x7b3d,	// (0x0003436c) common_borders_pane_copy2

0xca3b,	// (0x0003926a) control_button_pane_g1_ParamLimits

0xca3b,	// (0x0003926a) control_button_pane_g1

0xca47,	// (0x00039276) control_button_pane_g2_ParamLimits

0xca47,	// (0x00039276) control_button_pane_g2

0xca53,	// (0x00039282) control_button_pane_g3_ParamLimits

0xca53,	// (0x00039282) control_button_pane_g3

0x0002,

0xfc0f,	// (0x0003c43e) control_button_pane_g_ParamLimits

0xfc0f,	// (0x0003c43e) control_button_pane_g

0xca67,	// (0x00039296) control_button_pane_t1

0xca75,	// (0x000392a4) control_button_pane_t2

0x0001,

0xfc16,	// (0x0003c445) control_button_pane_t

0x9ac1,	// (0x000362f0) bg_button_pane_g1

0x9ad1,	// (0x00036300) bg_button_pane_g2

0x9ac9,	// (0x000362f8) bg_button_pane_g3

0x9ae1,	// (0x00036310) bg_button_pane_g4

0x9ad9,	// (0x00036308) bg_button_pane_g5

0x9ae9,	// (0x00036318) bg_button_pane_g6

0x9af1,	// (0x00036320) bg_button_pane_g7

0x9b01,	// (0x00036330) bg_button_pane_g8

0x9af9,	// (0x00036328) bg_button_pane_g9

0x0008,

0xf877,	// (0x0003c0a6) bg_button_pane_g

0xc049,	// (0x00038878) common_borders_pane_ParamLimits

0xc049,	// (0x00038878) common_borders_pane

0xca07,	// (0x00039236) eswt_control_pane_g1_copy1_ParamLimits

0xca07,	// (0x00039236) eswt_control_pane_g1_copy1

0xca14,	// (0x00039243) eswt_control_pane_g2_copy1_ParamLimits

0xca14,	// (0x00039243) eswt_control_pane_g2_copy1

0xca21,	// (0x00039250) eswt_control_pane_g3_copy1_ParamLimits

0xca21,	// (0x00039250) eswt_control_pane_g3_copy1

0xca2e,	// (0x0003925d) eswt_control_pane_g4_copy1_ParamLimits

0xca2e,	// (0x0003925d) eswt_control_pane_g4_copy1

0xc084,	// (0x000388b3) bg_eswt_ctrl_canvas_pane_g1

0xc049,	// (0x00038878) common_borders_pane_cp2_ParamLimits

0xc049,	// (0x00038878) common_borders_pane_cp2

0xc049,	// (0x00038878) common_borders_pane_cp3_ParamLimits

0xc049,	// (0x00038878) common_borders_pane_cp3

0xca83,	// (0x000392b2) separator_horizontal_pane

0xca8b,	// (0x000392ba) separator_vertical_pane

0xca07,	// (0x00039236) eswt_control_pane_g1_copy2_ParamLimits

0xca07,	// (0x00039236) eswt_control_pane_g1_copy2

0xca14,	// (0x00039243) eswt_control_pane_g2_copy2_ParamLimits

0xca14,	// (0x00039243) eswt_control_pane_g2_copy2

0xca21,	// (0x00039250) eswt_control_pane_g3_copy2_ParamLimits

0xca21,	// (0x00039250) eswt_control_pane_g3_copy2

0xca2e,	// (0x0003925d) eswt_control_pane_g4_copy2_ParamLimits

0xca2e,	// (0x0003925d) eswt_control_pane_g4_copy2

0x331c,	// (0x0002fb4b) common_borders_pane_cp4

0xca94,	// (0x000392c3) separator_horizontal_pane_g1

0xca9d,	// (0x000392cc) separator_horizontal_pane_g2

0xcaa6,	// (0x000392d5) separator_horizontal_pane_g3

0x0002,

0xfc1b,	// (0x0003c44a) separator_horizontal_pane_g

0xca07,	// (0x00039236) eswt_control_pane_g1_copy3_ParamLimits

0xca07,	// (0x00039236) eswt_control_pane_g1_copy3

0xca14,	// (0x00039243) eswt_control_pane_g2_copy3_ParamLimits

0xca14,	// (0x00039243) eswt_control_pane_g2_copy3

0xca21,	// (0x00039250) eswt_control_pane_g3_copy3_ParamLimits

0xca21,	// (0x00039250) eswt_control_pane_g3_copy3

0xca2e,	// (0x0003925d) eswt_control_pane_g4_copy3_ParamLimits

0xca2e,	// (0x0003925d) eswt_control_pane_g4_copy3

0x331c,	// (0x0002fb4b) common_borders_pane_cp5

0xcaaf,	// (0x000392de) separator_vertical_pane_g1

0xcab8,	// (0x000392e7) separator_vertical_pane_g2

0xcac1,	// (0x000392f0) separator_vertical_pane_g3

0x0002,

0xfc22,	// (0x0003c451) separator_vertical_pane_g

0xca07,	// (0x00039236) eswt_control_pane_g1_copy4_ParamLimits

0xca07,	// (0x00039236) eswt_control_pane_g1_copy4

0xca14,	// (0x00039243) eswt_control_pane_g2_copy4_ParamLimits

0xca14,	// (0x00039243) eswt_control_pane_g2_copy4

0xca21,	// (0x00039250) eswt_control_pane_g3_copy4_ParamLimits

0xca21,	// (0x00039250) eswt_control_pane_g3_copy4

0xca2e,	// (0x0003925d) eswt_control_pane_g4_copy4_ParamLimits

0xca2e,	// (0x0003925d) eswt_control_pane_g4_copy4

0xcaca,	// (0x000392f9) eswt_ctrl_combo_button_pane

0xcad2,	// (0x00039301) eswt_ctrl_input_pane

0xcada,	// (0x00039309) popup_choice_list_window_cp70

0xcae2,	// (0x00039311) eswt_ctrl_input_pane_t1

0x331c,	// (0x0002fb4b) input_focus_pane_cp70

0xc049,	// (0x00038878) bg_button_pane_cp70_ParamLimits

0xc049,	// (0x00038878) bg_button_pane_cp70

0xcaf0,	// (0x0003931f) eswt_ctrl_combo_button_pane_g1

0xcaf8,	// (0x00039327) wait_bar_pane_cp70

0x9bb3,	// (0x000363e2) bg_popup_window_pane_cp70_ParamLimits

0x9bb3,	// (0x000363e2) bg_popup_window_pane_cp70

0xcb00,	// (0x0003932f) popup_eswt_tasktip_window_t1

0xcb16,	// (0x00039345) wait_bar_pane_cp71_ParamLimits

0xcb16,	// (0x00039345) wait_bar_pane_cp71

0xcb22,	// (0x00039351) grid_eswt_app_pane

0x8419,	// (0x00034c48) scroll_pane_cp70

0xcb2b,	// (0x0003935a) cell_eswt_app_pane_ParamLimits

0xcb2b,	// (0x0003935a) cell_eswt_app_pane

0xcb5d,	// (0x0003938c) cell_eswt_app_pane_g1_ParamLimits

0xcb5d,	// (0x0003938c) cell_eswt_app_pane_g1

0xcb8c,	// (0x000393bb) cell_eswt_app_pane_g2_ParamLimits

0xcb8c,	// (0x000393bb) cell_eswt_app_pane_g2

0x0001,

0xfc29,	// (0x0003c458) cell_eswt_app_pane_g_ParamLimits

0xfc29,	// (0x0003c458) cell_eswt_app_pane_g

0xcbb5,	// (0x000393e4) cell_eswt_app_pane_t1_ParamLimits

0xcbb5,	// (0x000393e4) cell_eswt_app_pane_t1

0xcbe7,	// (0x00039416) grid_highlight_pane_cp70_ParamLimits

0xcbe7,	// (0x00039416) grid_highlight_pane_cp70

0xb018,	// (0x00037847) set_content_pane_g1

0x8eae,	// (0x000356dd) status_small_volume_pane

0x6b31,	// (0x00033360) status_small_volume_pane_g1

0x6b39,	// (0x00033368) volume_small2_pane

0x6b42,	// (0x00033371) volume_small2_pane_g1

0x6b4b,	// (0x0003337a) volume_small2_pane_g2

0x6b54,	// (0x00033383) volume_small2_pane_g3

0x6b5d,	// (0x0003338c) volume_small2_pane_g4

0x6b66,	// (0x00033395) volume_small2_pane_g5

0x6b6f,	// (0x0003339e) volume_small2_pane_g6

0x6b78,	// (0x000333a7) volume_small2_pane_g7

0x6b81,	// (0x000333b0) volume_small2_pane_g8

0x6b8a,	// (0x000333b9) volume_small2_pane_g9

0x6b93,	// (0x000333c2) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x0003c45d) volume_small2_pane_g

0xc462,	// (0x00038c91) fep_vkb_top_text_pane_g1_ParamLimits

0xc47d,	// (0x00038cac) fep_vkb_top_text_pane_t1_ParamLimits

0xc6f5,	// (0x00038f24) popup_preview_fixed_window_g3_ParamLimits

0xc6f5,	// (0x00038f24) popup_preview_fixed_window_g3

0x94db,	// (0x00035d0a) popup_toolbar_trans_pane

0xaebd,	// (0x000376ec) aid_height_set_list_ParamLimits

0xaece,	// (0x000376fd) aid_size_parent_ParamLimits

0x8f84,	// (0x000357b3) list_highlight_pane_cp2_ParamLimits

0xb018,	// (0x00037847) set_content_pane_g1_ParamLimits

0xb121,	// (0x00037950) list_single_image_pane_ParamLimits

0xb121,	// (0x00037950) list_single_image_pane

0xcbf3,	// (0x00039422) aid_size_cell_image_ParamLimits

0xcbf3,	// (0x00039422) aid_size_cell_image

0xcc00,	// (0x0003942f) grid_single_image_pane_ParamLimits

0xcc00,	// (0x0003942f) grid_single_image_pane

0x7de6,	// (0x00034615) list_single_image_pane_g1_ParamLimits

0x7de6,	// (0x00034615) list_single_image_pane_g1

0x7df2,	// (0x00034621) list_single_image_pane_g2_ParamLimits

0x7df2,	// (0x00034621) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x0003c472) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x0003c472) list_single_image_pane_g

0xcc0e,	// (0x0003943d) list_single_image_pane_t1_ParamLimits

0xcc0e,	// (0x0003943d) list_single_image_pane_t1

0xcc24,	// (0x00039453) cell_image_list_pane_ParamLimits

0xcc24,	// (0x00039453) cell_image_list_pane

0xcc3a,	// (0x00039469) cell_image_list_pane_g1

0xcc43,	// (0x00039472) cell_image_list_pane_g2

0x0001,

0xfc48,	// (0x0003c477) cell_image_list_pane_g

0xcc4c,	// (0x0003947b) aid_size_cell_tb_trans_pane

0x7dcc,	// (0x000345fb) bg_tb_trans_pane

0xcc5e,	// (0x0003948d) grid_tb_trans_pane

0x9ac1,	// (0x000362f0) bg_tb_trans_pane_g1

0x9ad1,	// (0x00036300) bg_tb_trans_pane_g2

0x9ac9,	// (0x000362f8) bg_tb_trans_pane_g3

0x9ae1,	// (0x00036310) bg_tb_trans_pane_g4

0x9ad9,	// (0x00036308) bg_tb_trans_pane_g5

0x9b01,	// (0x00036330) bg_tb_trans_pane_g6

0x9af9,	// (0x00036328) bg_tb_trans_pane_g7

0x9ae9,	// (0x00036318) bg_tb_trans_pane_g8

0x9af1,	// (0x00036320) bg_tb_trans_pane_g9

0x0008,

0xfc4d,	// (0x0003c47c) bg_tb_trans_pane_g

0xcc72,	// (0x000394a1) cell_toolbar_trans_pane_ParamLimits

0xcc72,	// (0x000394a1) cell_toolbar_trans_pane

0xc084,	// (0x000388b3) cell_toolbar_trans_pane_g1

0xbd1b,	// (0x0003854a) list_form2_midp_pane_t1

0xbd29,	// (0x00038558) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0003c319) list_form2_midp_pane_t

0xbd37,	// (0x00038566) scroll_pane_cp51_ParamLimits

0xbee6,	// (0x00038715) form2_midp_wait_pane_g1

0xbeef,	// (0x0003871e) form2_midp_wait_pane_g2

0xbef8,	// (0x00038727) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0003c32e) form2_midp_wait_pane_g

0x7545,	// (0x00033d74) list_highlight_pane_cp21_ParamLimits

0xbf29,	// (0x00038758) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf38,	// (0x00038767) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb0da,	// (0x00037909) list_single_2graphic_im_pane_ParamLimits

0xb0da,	// (0x00037909) list_single_2graphic_im_pane

0xcc98,	// (0x000394c7) list_single_2graphic_im_pane_g1_ParamLimits

0xcc98,	// (0x000394c7) list_single_2graphic_im_pane_g1

0xcca9,	// (0x000394d8) list_single_2graphic_im_pane_g2_ParamLimits

0xcca9,	// (0x000394d8) list_single_2graphic_im_pane_g2

0xccb5,	// (0x000394e4) list_single_2graphic_im_pane_g3_ParamLimits

0xccb5,	// (0x000394e4) list_single_2graphic_im_pane_g3

0x0003,

0xfc60,	// (0x0003c48f) list_single_2graphic_im_pane_g_ParamLimits

0xfc60,	// (0x0003c48f) list_single_2graphic_im_pane_g

0xccd5,	// (0x00039504) list_single_2graphic_im_pane_t1_ParamLimits

0xccd5,	// (0x00039504) list_single_2graphic_im_pane_t1

0xc701,	// (0x00038f30) list_single_graphic_2heading_pane_fp_ParamLimits

0xc701,	// (0x00038f30) list_single_graphic_2heading_pane_fp

0x686f,	// (0x0003309e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x686f,	// (0x0003309e) list_single_graphic_2heading_pane_fp_g1

0xc71a,	// (0x00038f49) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc71a,	// (0x00038f49) list_single_graphic_2heading_pane_fp_g2

0x6838,	// (0x00033067) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6838,	// (0x00033067) list_single_graphic_2heading_pane_fp_g3

0x6844,	// (0x00033073) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6844,	// (0x00033073) list_single_graphic_2heading_pane_fp_g4

0xc726,	// (0x00038f55) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc726,	// (0x00038f55) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0003c3b6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0003c3b6) list_single_graphic_2heading_pane_fp_g

0x8156,	// (0x00034985) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8156,	// (0x00034985) list_single_graphic_2heading_pane_fp_t1

0x68a7,	// (0x000330d6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x68a7,	// (0x000330d6) list_single_graphic_2heading_pane_fp_t2

0x816c,	// (0x0003499b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x816c,	// (0x0003499b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x0003c498) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x0003c498) list_single_graphic_2heading_pane_fp_t

0xc124,	// (0x00038953) fep_hwr_write_pane_g5_ParamLimits

0xc124,	// (0x00038953) fep_hwr_write_pane_g5

0xc130,	// (0x0003895f) fep_hwr_write_pane_g6_ParamLimits

0xc130,	// (0x0003895f) fep_hwr_write_pane_g6

0xc9d6,	// (0x00039205) eswt_shell_pane_ParamLimits

0x9bb3,	// (0x000363e2) bg_popup_window_pane_cp18_ParamLimits

0xae14,	// (0x00037643) heading_pane_cp70

0xcb00,	// (0x0003932f) popup_eswt_tasktip_window_t1_ParamLimits

0x960e,	// (0x00035e3d) aid_touch_tab_arrow_left

0x961d,	// (0x00035e4c) aid_touch_tab_arrow_right

0x7499,	// (0x00033cc8) title_pane_g3_ParamLimits

0x7499,	// (0x00033cc8) title_pane_g3

0x7d8b,	// (0x000345ba) set_value_pane_g1

0x94db,	// (0x00035d0a) popup_toolbar_trans_pane_ParamLimits

0xcc4c,	// (0x0003947b) aid_size_cell_tb_trans_pane_ParamLimits

0x7dcc,	// (0x000345fb) bg_tb_trans_pane_ParamLimits

0xcc5e,	// (0x0003948d) grid_tb_trans_pane_ParamLimits

0x77cf,	// (0x00033ffe) cont_note_pane_ParamLimits

0x77cf,	// (0x00033ffe) cont_note_pane

0x7b3d,	// (0x0003436c) cont_snote2_single_text_pane_ParamLimits

0x7b3d,	// (0x0003436c) cont_snote2_single_text_pane

0x7b3d,	// (0x0003436c) cont_snote2_single_graphic_pane_ParamLimits

0x7b3d,	// (0x0003436c) cont_snote2_single_graphic_pane

0xa13b,	// (0x0003696a) cont_note_wait_pane_ParamLimits

0xa13b,	// (0x0003696a) cont_note_wait_pane

0xa13b,	// (0x0003696a) cont_note_image_pane_ParamLimits

0xa13b,	// (0x0003696a) cont_note_image_pane

0xcd06,	// (0x00039535) popup_note2_window_g1_ParamLimits

0xcd06,	// (0x00039535) popup_note2_window_g1

0xcd37,	// (0x00039566) popup_note2_window_t1_ParamLimits

0xcd37,	// (0x00039566) popup_note2_window_t1

0xcd7c,	// (0x000395ab) popup_note2_window_t2_ParamLimits

0xcd7c,	// (0x000395ab) popup_note2_window_t2

0xcdc1,	// (0x000395f0) popup_note2_window_t3_ParamLimits

0xcdc1,	// (0x000395f0) popup_note2_window_t3

0xce06,	// (0x00039635) popup_note2_window_t4_ParamLimits

0xce06,	// (0x00039635) popup_note2_window_t4

0x7853,	// (0x00034082) popup_note2_window_t5_ParamLimits

0x7853,	// (0x00034082) popup_note2_window_t5

0x0004,

0xfc75,	// (0x0003c4a4) popup_note2_window_t_ParamLimits

0xfc75,	// (0x0003c4a4) popup_note2_window_t

0xce35,	// (0x00039664) popup_note2_image_window_g1_ParamLimits

0xce35,	// (0x00039664) popup_note2_image_window_g1

0xce41,	// (0x00039670) popup_note2_image_window_g2_ParamLimits

0xce41,	// (0x00039670) popup_note2_image_window_g2

0x0001,

0xfc80,	// (0x0003c4af) popup_note2_image_window_g_ParamLimits

0xfc80,	// (0x0003c4af) popup_note2_image_window_g

0xce53,	// (0x00039682) popup_note2_image_window_t1_ParamLimits

0xce53,	// (0x00039682) popup_note2_image_window_t1

0xce6b,	// (0x0003969a) popup_note2_image_window_t2_ParamLimits

0xce6b,	// (0x0003969a) popup_note2_image_window_t2

0xce83,	// (0x000396b2) popup_note2_image_window_t3_ParamLimits

0xce83,	// (0x000396b2) popup_note2_image_window_t3

0x0002,

0xfc85,	// (0x0003c4b4) popup_note2_image_window_t_ParamLimits

0xfc85,	// (0x0003c4b4) popup_note2_image_window_t

0xa149,	// (0x00036978) popup_note2_wait_window_g1_ParamLimits

0xa149,	// (0x00036978) popup_note2_wait_window_g1

0xce9f,	// (0x000396ce) popup_note2_wait_window_g2_ParamLimits

0xce9f,	// (0x000396ce) popup_note2_wait_window_g2

0xa161,	// (0x00036990) popup_note2_wait_window_g3_ParamLimits

0xa161,	// (0x00036990) popup_note2_wait_window_g3

0x0002,

0xfc8c,	// (0x0003c4bb) popup_note2_wait_window_g_ParamLimits

0xfc8c,	// (0x0003c4bb) popup_note2_wait_window_g

0xceab,	// (0x000396da) popup_note2_wait_window_t1_ParamLimits

0xceab,	// (0x000396da) popup_note2_wait_window_t1

0xcec9,	// (0x000396f8) popup_note2_wait_window_t2_ParamLimits

0xcec9,	// (0x000396f8) popup_note2_wait_window_t2

0xcee7,	// (0x00039716) popup_note2_wait_window_t3_ParamLimits

0xcee7,	// (0x00039716) popup_note2_wait_window_t3

0xcef9,	// (0x00039728) popup_note2_wait_window_t4_ParamLimits

0xcef9,	// (0x00039728) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0003c4c2) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0003c4c2) popup_note2_wait_window_t

0xcf0b,	// (0x0003973a) wait_bar2_pane_ParamLimits

0xcf0b,	// (0x0003973a) wait_bar2_pane

0xcf23,	// (0x00039752) popup_snote2_single_text_window_g1_ParamLimits

0xcf23,	// (0x00039752) popup_snote2_single_text_window_g1

0xcf4b,	// (0x0003977a) popup_snote2_single_text_window_t1_ParamLimits

0xcf4b,	// (0x0003977a) popup_snote2_single_text_window_t1

0xcf97,	// (0x000397c6) popup_snote2_single_text_window_t2_ParamLimits

0xcf97,	// (0x000397c6) popup_snote2_single_text_window_t2

0xcfe3,	// (0x00039812) popup_snote2_single_text_window_t3_ParamLimits

0xcfe3,	// (0x00039812) popup_snote2_single_text_window_t3

0xd024,	// (0x00039853) popup_snote2_single_text_window_t4_ParamLimits

0xd024,	// (0x00039853) popup_snote2_single_text_window_t4

0xd05a,	// (0x00039889) popup_snote2_single_text_window_t5_ParamLimits

0xd05a,	// (0x00039889) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0003c4cb) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0003c4cb) popup_snote2_single_text_window_t

0xd085,	// (0x000398b4) popup_snote2_single_graphic_window_g1_ParamLimits

0xd085,	// (0x000398b4) popup_snote2_single_graphic_window_g1

0xd0ad,	// (0x000398dc) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0ad,	// (0x000398dc) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0003c4d6) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0003c4d6) popup_snote2_single_graphic_window_g

0xd0d5,	// (0x00039904) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0d5,	// (0x00039904) popup_snote2_single_graphic_window_t1

0xd121,	// (0x00039950) popup_snote2_single_graphic_window_t2_ParamLimits

0xd121,	// (0x00039950) popup_snote2_single_graphic_window_t2

0xcfe3,	// (0x00039812) popup_snote2_single_graphic_window_t3_ParamLimits

0xcfe3,	// (0x00039812) popup_snote2_single_graphic_window_t3

0xd024,	// (0x00039853) popup_snote2_single_graphic_window_t4_ParamLimits

0xd024,	// (0x00039853) popup_snote2_single_graphic_window_t4

0xd05a,	// (0x00039889) popup_snote2_single_graphic_window_t5_ParamLimits

0xd05a,	// (0x00039889) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0003c4db) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0003c4db) popup_snote2_single_graphic_window_t

0xbbe1,	// (0x00038410) clock_nsta_pane_cp2_t1

0xbbe1,	// (0x00038410) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0003c2ef) clock_nsta_pane_cp2_t

0x5501,	// (0x00031d30) form_field_data_wide_pane_g1_ParamLimits

0x7de6,	// (0x00034615) form_field_data_wide_pane_g2_ParamLimits

0x7de6,	// (0x00034615) form_field_data_wide_pane_g2

0x7df2,	// (0x00034621) form_field_data_wide_pane_g3_ParamLimits

0x7df2,	// (0x00034621) form_field_data_wide_pane_g3

0x0002,

0xf693,	// (0x0003bec2) form_field_data_wide_pane_g_ParamLimits

0xf693,	// (0x0003bec2) form_field_data_wide_pane_g

0xbabb,	// (0x000382ea) grid_touch_3_pane_ParamLimits

0xbabb,	// (0x000382ea) grid_touch_3_pane

0xd16d,	// (0x0003999c) cell_touch_3_pane_ParamLimits

0xd16d,	// (0x0003999c) cell_touch_3_pane

0xc084,	// (0x000388b3) cell_touch_3_pane_g1

0xc084,	// (0x000388b3) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0003c374) cell_touch_3_pane_g

0x7885,	// (0x000340b4) cont_query_data_pane

0x788d,	// (0x000340bc) cont_query_data_pane_cp1

0xd1a0,	// (0x000399cf) button_value_adjust_pane_cp7

0xd1a8,	// (0x000399d7) query_popup_pane_cp3

0x86da,	// (0x00034f09) bg_popup_sub_pane_cp22_ParamLimits

0x58c1,	// (0x000320f0) navi_navi_volume_pane_cp2

0x58dc,	// (0x0003210b) popup_side_volume_key_window_g2

0x58eb,	// (0x0003211a) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x0003bf58) popup_side_volume_key_window_g

0x5908,	// (0x00032137) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x0003bf5f) popup_side_volume_key_window_t

0x8995,	// (0x000351c4) popup_side_volume_key_window_ParamLimits

0x510e,	// (0x0003193d) list_double_graphic_pane_g4_ParamLimits

0x510e,	// (0x0003193d) list_double_graphic_pane_g4

0xb109,	// (0x00037938) list_single_2heading_msg_pane_ParamLimits

0xb109,	// (0x00037938) list_single_2heading_msg_pane

0x818c,	// (0x000349bb) list_single_2heading_msg_pane_g1_ParamLimits

0x818c,	// (0x000349bb) list_single_2heading_msg_pane_g1

0x40bb,	// (0x000308ea) list_single_2heading_msg_pane_g2_ParamLimits

0x40bb,	// (0x000308ea) list_single_2heading_msg_pane_g2

0x8198,	// (0x000349c7) list_single_2heading_msg_pane_g3_ParamLimits

0x8198,	// (0x000349c7) list_single_2heading_msg_pane_g3

0x81a4,	// (0x000349d3) list_single_2heading_msg_pane_g4_ParamLimits

0x81a4,	// (0x000349d3) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0003c4e6) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0003c4e6) list_single_2heading_msg_pane_g

0x81bc,	// (0x000349eb) list_single_2heading_msg_pane_t1_ParamLimits

0x81bc,	// (0x000349eb) list_single_2heading_msg_pane_t1

0x81e4,	// (0x00034a13) list_single_2heading_msg_pane_t2_ParamLimits

0x81e4,	// (0x00034a13) list_single_2heading_msg_pane_t2

0x8218,	// (0x00034a47) list_single_2heading_msg_pane_t3_ParamLimits

0x8218,	// (0x00034a47) list_single_2heading_msg_pane_t3

0x8251,	// (0x00034a80) list_single_2heading_msg_pane_t4_ParamLimits

0x8251,	// (0x00034a80) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0003c4ef) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0003c4ef) list_single_2heading_msg_pane_t

0x333a,	// (0x0002fb69) title_pane_g4_ParamLimits

0x333a,	// (0x0002fb69) title_pane_g4

0x56cd,	// (0x00031efc) title_pane_stacon_g3_ParamLimits

0x56cd,	// (0x00031efc) title_pane_stacon_g3

0xccc9,	// (0x000394f8) list_single_2graphic_im_pane_g4_ParamLimits

0xccc9,	// (0x000394f8) list_single_2graphic_im_pane_g4

0xabb1,	// (0x000373e0) popup_side_volume_key_window_cp

0xb427,	// (0x00037c56) main_idle_act2_pane_t1

0x5d5d,	// (0x0003258c) toolbar_button_pane_g10

0x7d35,	// (0x00034564) popup_toolbar_window_cp1

0xbbd2,	// (0x00038401) clock_nsta_pane_cp_t1

0xbbd2,	// (0x00038401) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0003c2ea) clock_nsta_pane_cp_t

0x58c1,	// (0x000320f0) navi_navi_volume_pane_cp2_ParamLimits

0x58d0,	// (0x000320ff) popup_side_volume_key_window_g1_ParamLimits

0x58dc,	// (0x0003210b) popup_side_volume_key_window_g2_ParamLimits

0x58eb,	// (0x0003211a) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x0003bf58) popup_side_volume_key_window_g_ParamLimits

0x657e,	// (0x00032dad) fep_hwr_aid_pane

0x6627,	// (0x00032e56) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0f4,	// (0x00038923) fep_hwr_top_pane_g1_ParamLimits

0xc106,	// (0x00038935) fep_hwr_top_pane_g2_ParamLimits

0x6647,	// (0x00032e76) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x0003c33f) fep_hwr_top_pane_g_ParamLimits

0x665c,	// (0x00032e8b) fep_hwr_top_text_pane_ParamLimits

0xa966,	// (0x00037195) aid_touch_tab_arrow_arrow_2

0xa96f,	// (0x0003719e) aid_touch_tab_arrow_left_2

0x6592,	// (0x00032dc1) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x65c9,	// (0x00032df8) fep_hwr_prediction_pane

0xc25c,	// (0x00038a8b) fep_vkb_prediction_pane

0xc362,	// (0x00038b91) fep_vkb_side_pane_g3_ParamLimits

0xc362,	// (0x00038b91) fep_vkb_side_pane_g3

0x67eb,	// (0x0003301a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6a21,	// (0x00033250) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6a2e,	// (0x0003325d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbf,	// (0x0003c3ee) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6b9c,	// (0x000333cb) fep_hwr_prediction_pane_g1

0x6ba6,	// (0x000333d5) fep_hwr_prediction_pane_g2

0x6bae,	// (0x000333dd) fep_hwr_prediction_pane_g3

0x6bb6,	// (0x000333e5) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0003c4f8) fep_hwr_prediction_pane_g

0xd1cf,	// (0x000399fe) fep_vkb_prediction_pane_g1

0xd1d9,	// (0x00039a08) fep_vkb_prediction_pane_g2

0xd1e1,	// (0x00039a10) fep_vkb_prediction_pane_g3

0xd1e9,	// (0x00039a18) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0003c501) fep_vkb_prediction_pane_g

0x60f2,	// (0x00032921) slider_set_pane_g3

0x6106,	// (0x00032935) slider_set_pane_g4

0x611e,	// (0x0003294d) slider_set_pane_g5

0x60f2,	// (0x00032921) slider_set_pane_g6

0x6134,	// (0x00032963) slider_set_pane_g7

0xb05f,	// (0x0003788e) slider_form_pane_g3

0xb068,	// (0x00037897) slider_form_pane_g4

0xb070,	// (0x0003789f) slider_form_pane_g5

0xb05f,	// (0x0003788e) slider_form_pane_g6

0xb078,	// (0x000378a7) slider_form_pane_g7

0xb6f5,	// (0x00037f24) slider_set_pane_vc_g3

0xb6fe,	// (0x00037f2d) slider_set_pane_vc_g4

0xb707,	// (0x00037f36) slider_set_pane_vc_g5

0xb6f5,	// (0x00037f24) slider_set_pane_vc_g6

0xb710,	// (0x00037f3f) slider_set_pane_vc_g7

0xb6f5,	// (0x00037f24) slider_form_pane_vc_g1

0xb6fe,	// (0x00037f2d) slider_form_pane_vc_g2

0xb707,	// (0x00037f36) slider_form_pane_vc_g3

0xb6f5,	// (0x00037f24) slider_form_pane_vc_g4

0xb8c5,	// (0x000380f4) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0003c2c3) slider_form_pane_vc_g

0x331c,	// (0x0002fb4b) main_idle_act3_pane

0xd1f1,	// (0x00039a20) ai3_links_pane

0xd1fa,	// (0x00039a29) popup_ai3_data_window_ParamLimits

0xd1fa,	// (0x00039a29) popup_ai3_data_window

0x331c,	// (0x0002fb4b) grid_ai3_links_pane

0xd218,	// (0x00039a47) cell_ai3_links_pane_ParamLimits

0xd218,	// (0x00039a47) cell_ai3_links_pane

0xd232,	// (0x00039a61) bg_popup_sub_pane_cp11

0xd23f,	// (0x00039a6e) cell_ai3_links_pane_g1

0x331c,	// (0x0002fb4b) bg_popup_sub_pane_cp12

0xd264,	// (0x00039a93) heading_ai3_data_pane

0xd26c,	// (0x00039a9b) list_ai3_gene_pane

0xd278,	// (0x00039aa7) popup_ai3_data_window_g1

0xd280,	// (0x00039aaf) heading_ai3_data_pane_g1

0xd288,	// (0x00039ab7) heading_ai3_data_pane_t1

0xd296,	// (0x00039ac5) list_double_ai3_gene_pane_ParamLimits

0xd296,	// (0x00039ac5) list_double_ai3_gene_pane

0xd2a3,	// (0x00039ad2) list_single_ai3_gene_pane_ParamLimits

0xd2a3,	// (0x00039ad2) list_single_ai3_gene_pane

0xc049,	// (0x00038878) list_highlight_pane_cp7_ParamLimits

0xc049,	// (0x00038878) list_highlight_pane_cp7

0xd2b0,	// (0x00039adf) list_single_a13_gene_pane_t1_ParamLimits

0xd2b0,	// (0x00039adf) list_single_a13_gene_pane_t1

0xd2c7,	// (0x00039af6) list_single_ai3_gene_pane_g1

0xd2d0,	// (0x00039aff) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0003c50a) list_single_ai3_gene_pane_g

0xd2d8,	// (0x00039b07) list_double_ai3_gene_pane_g1_ParamLimits

0xd2d8,	// (0x00039b07) list_double_ai3_gene_pane_g1

0xd2e4,	// (0x00039b13) list_double_ai3_gene_pane_t1_ParamLimits

0xd2e4,	// (0x00039b13) list_double_ai3_gene_pane_t1

0xd300,	// (0x00039b2f) list_double_ai3_gene_pane_t2_ParamLimits

0xd300,	// (0x00039b2f) list_double_ai3_gene_pane_t2

0xd315,	// (0x00039b44) list_double_ai3_gene_pane_t3_ParamLimits

0xd315,	// (0x00039b44) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0003c50f) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0003c50f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8182,	// (0x000349b1) aid_size_min_col_2

0xd1b9,	// (0x000399e8) aid_size_min_msg_ParamLimits

0xd1b9,	// (0x000399e8) aid_size_min_msg

0xc46e,	// (0x00038c9d) fep_vkb_top_text_pane_g2_ParamLimits

0xc46e,	// (0x00038c9d) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x0003c36f) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x0003c36f) fep_vkb_top_text_pane_g

0x331c,	// (0x0002fb4b) main_hc_apps_shell_pane

0xd332,	// (0x00039b61) grid_hc_apps_pane_ParamLimits

0xd332,	// (0x00039b61) grid_hc_apps_pane

0xd341,	// (0x00039b70) list_hc_apps_pane

0xd349,	// (0x00039b78) scroll_pane_cp37_ParamLimits

0xd349,	// (0x00039b78) scroll_pane_cp37

0xd355,	// (0x00039b84) cell_hc_apps_pane_ParamLimits

0xd355,	// (0x00039b84) cell_hc_apps_pane

0xd40d,	// (0x00039c3c) cell_hc_apps_pane_g1_ParamLimits

0xd40d,	// (0x00039c3c) cell_hc_apps_pane_g1

0xd43e,	// (0x00039c6d) cell_hc_apps_pane_g2_ParamLimits

0xd43e,	// (0x00039c6d) cell_hc_apps_pane_g2

0xd45a,	// (0x00039c89) cell_hc_apps_pane_g3_ParamLimits

0xd45a,	// (0x00039c89) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0003c516) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0003c516) cell_hc_apps_pane_g

0xd47c,	// (0x00039cab) cell_hc_apps_pane_t1_ParamLimits

0xd47c,	// (0x00039cab) cell_hc_apps_pane_t1

0x77cf,	// (0x00033ffe) grid_highlight_pane_cp10_ParamLimits

0x77cf,	// (0x00033ffe) grid_highlight_pane_cp10

0xd4bc,	// (0x00039ceb) list_single_hc_apps_pane_ParamLimits

0xd4bc,	// (0x00039ceb) list_single_hc_apps_pane

0xd4fb,	// (0x00039d2a) list_single_hc_apps_pane_g1

0x8276,	// (0x00034aa5) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0003c51d) list_single_hc_apps_pane_g

0x828f,	// (0x00034abe) list_single_hc_apps_pane_g2_copy1

0x82ab,	// (0x00034ada) list_single_hc_apps_pane_t1

0x7545,	// (0x00033d74) bg_set_opt_pane_cp_ParamLimits

0x4ee5,	// (0x00031714) setting_slider_pane_t1_ParamLimits

0x4efb,	// (0x0003172a) setting_slider_pane_t2_ParamLimits

0x4f15,	// (0x00031744) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0003bda5) setting_slider_pane_t_ParamLimits

0x4f2d,	// (0x0003175c) slider_set_pane_ParamLimits

0x5bfb,	// (0x0003242a) control_pane_g5_ParamLimits

0x5bfb,	// (0x0003242a) control_pane_g5

0xae80,	// (0x000376af) slider_set_pane_g1_ParamLimits

0x60e6,	// (0x00032915) slider_set_pane_g2_ParamLimits

0x60f2,	// (0x00032921) slider_set_pane_g3_ParamLimits

0x6106,	// (0x00032935) slider_set_pane_g4_ParamLimits

0x611e,	// (0x0003294d) slider_set_pane_g5_ParamLimits

0x60f2,	// (0x00032921) slider_set_pane_g6_ParamLimits

0x6134,	// (0x00032963) slider_set_pane_g7_ParamLimits

0xf975,	// (0x0003c1a4) slider_set_pane_g_ParamLimits

0x8a7a,	// (0x000352a9) navi_icon_text_pane_ParamLimits

0x95cd,	// (0x00035dfc) aid_fill_nsta_2_ParamLimits

0x960e,	// (0x00035e3d) aid_touch_tab_arrow_left_ParamLimits

0x961d,	// (0x00035e4c) aid_touch_tab_arrow_right_ParamLimits

0x968a,	// (0x00035eb9) clock_nsta_pane_ParamLimits

0xa942,	// (0x00037171) navi_icon_pane_g1_ParamLimits

0xa951,	// (0x00037180) navi_text_pane_t1_ParamLimits

0xbcef,	// (0x0003851e) navi_icon_text_pane_g1_ParamLimits

0xbcfe,	// (0x0003852d) navi_icon_text_pane_t1_ParamLimits

0xd4fb,	// (0x00039d2a) list_single_hc_apps_pane_g1_ParamLimits

0x8276,	// (0x00034aa5) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0003c51d) list_single_hc_apps_pane_g_ParamLimits

0x828f,	// (0x00034abe) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x82ab,	// (0x00034ada) list_single_hc_apps_pane_t1_ParamLimits

0x4def,	// (0x0003161e) popup_toolbar2_fixed_window_ParamLimits

0x4def,	// (0x0003161e) popup_toolbar2_fixed_window

0x94d1,	// (0x00035d00) popup_toolbar2_float_window

0x331c,	// (0x0002fb4b) bg_popup_sub_pane_cp27

0xd514,	// (0x00039d43) grid_toolbar2_float_pane

0x331c,	// (0x0002fb4b) bg_popup_sub_pane_cp26

0xd514,	// (0x00039d43) grid_toolbar2_fixed_pane

0xd51c,	// (0x00039d4b) cell_toolbar2_fixed_pane_ParamLimits

0xd51c,	// (0x00039d4b) cell_toolbar2_fixed_pane

0xd52c,	// (0x00039d5b) cell_toolbar2_fixed_pane_g1

0xd535,	// (0x00039d64) toolbar2_fixed_button_pane

0x9ac1,	// (0x000362f0) toolbar2_fixed_button_pane_g1

0x9ad1,	// (0x00036300) toolbar2_fixed_button_pane_g2

0x9ac9,	// (0x000362f8) toolbar2_fixed_button_pane_g3

0x9ae1,	// (0x00036310) toolbar2_fixed_button_pane_g4

0x9ad9,	// (0x00036308) toolbar2_fixed_button_pane_g5

0x9ae9,	// (0x00036318) toolbar2_fixed_button_pane_g6

0x9af1,	// (0x00036320) toolbar2_fixed_button_pane_g7

0x9b01,	// (0x00036330) toolbar2_fixed_button_pane_g8

0x9af9,	// (0x00036328) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x0003c0a6) toolbar2_fixed_button_pane_g

0xd53d,	// (0x00039d6c) cell_toolbar2_float_pane_ParamLimits

0xd53d,	// (0x00039d6c) cell_toolbar2_float_pane

0xd54e,	// (0x00039d7d) cell_toolbar2_float_pane_g1

0xd535,	// (0x00039d64) toolbar2_fixed_button_pane_cp

0xc1ca,	// (0x000389f9) fep_vkb_accented_list_pane_ParamLimits

0xc1ca,	// (0x000389f9) fep_vkb_accented_list_pane

0x67cb,	// (0x00032ffa) bg_popup_fep_shadow_pane_g9

0x8bfe,	// (0x0003542d) bg_popup_fep_shadow_pane_cp3

0x7f35,	// (0x00034764) list_accented_list_pane

0xd557,	// (0x00039d86) list_single_accented_list_pane_ParamLimits

0xd557,	// (0x00039d86) list_single_accented_list_pane

0x8bfe,	// (0x0003542d) list_highlight_pane_cp10

0xd568,	// (0x00039d97) list_single_accented_list_pane_t1

0x9417,	// (0x00035c46) popup_slider_window_ParamLimits

0x9417,	// (0x00035c46) popup_slider_window

0xd1b0,	// (0x000399df) aid_indentation_list_msg

0xd634,	// (0x00039e63) bg_popup_window_pane_cp19

0xd6a2,	// (0x00039ed1) popup_slider_window_g1

0xd6be,	// (0x00039eed) popup_slider_window_g2

0xd6da,	// (0x00039f09) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0003c522) popup_slider_window_g

0xd736,	// (0x00039f65) popup_slider_window_t1

0xd7aa,	// (0x00039fd9) small_volume_slider_vertical_pane

0xc084,	// (0x000388b3) small_volume_slider_vertical_pane_g1

0xc084,	// (0x000388b3) small_volume_slider_vertical_pane_g2

0xd7c6,	// (0x00039ff5) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0003c534) small_volume_slider_vertical_pane_g

0x4b9d,	// (0x000313cc) area_side_right_pane_ParamLimits

0x4b9d,	// (0x000313cc) area_side_right_pane

0x6bbe,	// (0x000333ed) aid_size_side_button_ParamLimits

0x6bbe,	// (0x000333ed) aid_size_side_button

0x6bd2,	// (0x00033401) grid_sctrl_middle_pane_ParamLimits

0x6bd2,	// (0x00033401) grid_sctrl_middle_pane

0x6bf2,	// (0x00033421) sctrl_sk_bottom_pane

0x6c03,	// (0x00033432) sctrl_sk_top_pane

0x6c15,	// (0x00033444) aid_touch_sctrl_top

0x6c22,	// (0x00033451) bg_sctrl_sk_pane_ParamLimits

0x6c22,	// (0x00033451) bg_sctrl_sk_pane

0x6c30,	// (0x0003345f) sctrl_sk_top_pane_g1

0x6c3d,	// (0x0003346c) sctrl_sk_top_pane_t1

0x6c15,	// (0x00033444) aid_touch_sctrl_bottom

0x6c22,	// (0x00033451) bg_sctrl_sk_pane_cp_ParamLimits

0x6c22,	// (0x00033451) bg_sctrl_sk_pane_cp

0x6c58,	// (0x00033487) sctrl_sk_bottom_pane_g1

0x6c3d,	// (0x0003346c) sctrl_sk_bottom_pane_t1

0x6c61,	// (0x00033490) cell_sctrl_middle_pane_ParamLimits

0x6c61,	// (0x00033490) cell_sctrl_middle_pane

0x6c7e,	// (0x000334ad) aid_touch_sctrl_middle_ParamLimits

0x6c7e,	// (0x000334ad) aid_touch_sctrl_middle

0x6c90,	// (0x000334bf) bg_sctrl_middle_pane_ParamLimits

0x6c90,	// (0x000334bf) bg_sctrl_middle_pane

0x67eb,	// (0x0003301a) cell_sctrl_middle_pane_g1_ParamLimits

0x67eb,	// (0x0003301a) cell_sctrl_middle_pane_g1

0x6c9e,	// (0x000334cd) cell_sctrl_middle_pane_g2_ParamLimits

0x6c9e,	// (0x000334cd) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0003c540) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0003c540) cell_sctrl_middle_pane_g

0x9ac1,	// (0x000362f0) bg_sctrl_middle_pane_g1

0x9ac9,	// (0x000362f8) bg_sctrl_middle_pane_g2

0x9ad1,	// (0x00036300) bg_sctrl_middle_pane_g3

0x9ad9,	// (0x00036308) bg_sctrl_middle_pane_g4

0x9ae1,	// (0x00036310) bg_sctrl_middle_pane_g5

0x9ae9,	// (0x00036318) bg_sctrl_middle_pane_g6

0x9af1,	// (0x00036320) bg_sctrl_middle_pane_g7

0x9af9,	// (0x00036328) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0003c545) bg_sctrl_middle_pane_g

0x9b01,	// (0x00036330) bg_sctrl_middle_pane_g8_copy1

0x9ac1,	// (0x000362f0) bg_sctrl_sk_pane_g1

0x9ad1,	// (0x00036300) bg_sctrl_sk_pane_g2

0x9ac9,	// (0x000362f8) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x0003c0a6) bg_sctrl_sk_pane_g

0x7cfb,	// (0x0003452a) aid_size_touch_scroll_bar

0x9ae1,	// (0x00036310) bg_sctrl_sk_pane_g4

0x9ad9,	// (0x00036308) bg_sctrl_sk_pane_g5

0x9ae9,	// (0x00036318) bg_sctrl_sk_pane_g6

0x9af1,	// (0x00036320) bg_sctrl_sk_pane_g7

0x9b01,	// (0x00036330) bg_sctrl_sk_pane_g8

0x9af9,	// (0x00036328) bg_sctrl_sk_pane_g9

0x902e,	// (0x0003585d) popup_fep_china_hwr2_fs_candidate_window

0x9038,	// (0x00035867) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9038,	// (0x00035867) popup_fep_china_hwr2_fs_control_window

0x67eb,	// (0x0003301a) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0003c53b) sctrl_sk_top_pane_g

0xd7cf,	// (0x00039ffe) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7cf,	// (0x00039ffe) aid_fep_china_hwr2_fs_cell

0xd7e2,	// (0x0003a011) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7e2,	// (0x0003a011) bg_popup_fep_shadow_pane_cp4

0xd7fb,	// (0x0003a02a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7fb,	// (0x0003a02a) bg_popup_fep_shadow_pane_cp5

0xd80d,	// (0x0003a03c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd80d,	// (0x0003a03c) popup_fep_china_hwr2_fs_control_bar_grid

0xd81d,	// (0x0003a04c) popup_fep_china_hwr2_fs_control_funtion_grid

0xd825,	// (0x0003a054) aid_fep_china_hwr2_fs_candi_cell

0x331c,	// (0x0002fb4b) bg_popup_fep_shadow_pane_cp6

0xd82f,	// (0x0003a05e) popup_fep_china_hwr2_fs_candidate_grid

0xd839,	// (0x0003a068) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd839,	// (0x0003a068) cell_fep_china_hwr2_fs_funtion_grid

0xc084,	// (0x000388b3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd851,	// (0x0003a080) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd851,	// (0x0003a080) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd85f,	// (0x0003a08e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd85f,	// (0x0003a08e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0003c556) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0003c556) cell_fep_china_hwr2_fs_funtion_grid_g

0xd875,	// (0x0003a0a4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd875,	// (0x0003a0a4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd88a,	// (0x0003a0b9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd88a,	// (0x0003a0b9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0003c55b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0003c55b) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8a6,	// (0x0003a0d5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8ae,	// (0x0003a0dd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8b6,	// (0x0003a0e5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0003c560) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8be,	// (0x0003a0ed) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8be,	// (0x0003a0ed) cell_fep_china_hwr2_fs_candidate_grid

0xd8dd,	// (0x0003a10c) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8e5,	// (0x0003a114) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc084,	// (0x000388b3) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc084,	// (0x000388b3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0003c374) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8ed,	// (0x0003a11c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x969d,	// (0x00035ecc) clock_nsta_pane_cp_24_ParamLimits

0x969d,	// (0x00035ecc) clock_nsta_pane_cp_24

0x971d,	// (0x00035f4c) indicator_nsta_pane_cp_24_ParamLimits

0x971d,	// (0x00035f4c) indicator_nsta_pane_cp_24

0xa7be,	// (0x00036fed) heading_pane_g1

0x0001,

0xf8dc,	// (0x0003c10b) heading_pane_g

0xb26e,	// (0x00037a9d) grid_sct_catagory_button_pane

0xb2a0,	// (0x00037acf) scroll_pane_cp5_ParamLimits

0xbd43,	// (0x00038572) button_value_adjust_pane_cp5_ParamLimits

0xbd43,	// (0x00038572) button_value_adjust_pane_cp5

0xbe20,	// (0x0003864f) form2_midp_time_pane_ParamLimits

0xd8fb,	// (0x0003a12a) cell_sct_catagory_button_pane_ParamLimits

0xd8fb,	// (0x0003a12a) cell_sct_catagory_button_pane

0xc049,	// (0x00038878) bg_button_pane_cp01_ParamLimits

0xc049,	// (0x00038878) bg_button_pane_cp01

0xc084,	// (0x000388b3) cell_sct_catagory_button_pane_g1

0x9458,	// (0x00035c87) popup_tb_extension_window

0xd90d,	// (0x0003a13c) aid_size_cell_ext_ParamLimits

0xd90d,	// (0x0003a13c) aid_size_cell_ext

0x77cf,	// (0x00033ffe) bg_tb_trans_pane_cp1_ParamLimits

0x77cf,	// (0x00033ffe) bg_tb_trans_pane_cp1

0xd92d,	// (0x0003a15c) grid_tb_ext_pane_ParamLimits

0xd92d,	// (0x0003a15c) grid_tb_ext_pane

0xd95d,	// (0x0003a18c) cell_tb_ext_pane_ParamLimits

0xd95d,	// (0x0003a18c) cell_tb_ext_pane

0xd974,	// (0x0003a1a3) cell_tb_ext_pane_g1_ParamLimits

0xd974,	// (0x0003a1a3) cell_tb_ext_pane_g1

0xd991,	// (0x0003a1c0) cell_tb_ext_pane_t1

0x77cf,	// (0x00033ffe) list_highlight_pane_cp11_ParamLimits

0x77cf,	// (0x00033ffe) list_highlight_pane_cp11

0x4e0e,	// (0x0003163d) popup_uni_indicator_window_ParamLimits

0x4e0e,	// (0x0003163d) popup_uni_indicator_window

0x7dcc,	// (0x000345fb) bg_popup_sub_pane_cp14

0xd9ac,	// (0x0003a1db) list_uniindi_pane

0xd9b8,	// (0x0003a1e7) uniindi_top_pane

0x77cf,	// (0x00033ffe) bg_uniindi_top_pane

0xd9d9,	// (0x0003a208) uniindi_top_pane_g1

0xd9ef,	// (0x0003a21e) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0003c567) uniindi_top_pane_g

0xda19,	// (0x0003a248) uniindi_top_pane_t1

0xda45,	// (0x0003a274) list_single_uniindi_pane_ParamLimits

0xda45,	// (0x0003a274) list_single_uniindi_pane

0xc084,	// (0x000388b3) bg_uniindi_top_pane_g1

0xda57,	// (0x0003a286) list_single_uniindi_pane_g1

0xda6a,	// (0x0003a299) list_single_uniindi_pane_t1

0x4c7a,	// (0x000314a9) control_bg_pane

0xda8f,	// (0x0003a2be) bg_sctrl_sk_pane_cp1

0xda98,	// (0x0003a2c7) bg_sctrl_sk_pane_cp2

0xdaa1,	// (0x0003a2d0) control_bg_pane_g1

0xdaaa,	// (0x0003a2d9) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0003c570) control_bg_pane_g

0xbb65,	// (0x00038394) cell_indicator_nsta_pane_g1_ParamLimits

0xbb73,	// (0x000383a2) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x0003c2d8) cell_indicator_nsta_pane_g_ParamLimits

0x655d,	// (0x00032d8c) form2_midp_time_pane_t1_ParamLimits

0x7b3d,	// (0x0003436c) main_idle_act4_pane_ParamLimits

0x7b3d,	// (0x0003436c) main_idle_act4_pane

0x9458,	// (0x00035c87) popup_tb_extension_window_ParamLimits

0xd94f,	// (0x0003a17e) tb_ext_find_pane_ParamLimits

0xd94f,	// (0x0003a17e) tb_ext_find_pane

0xdab3,	// (0x0003a2e2) ai_gene_pane_1_cp1

0x8d47,	// (0x00035576) ai_gene_pane_2_cp1

0xdabb,	// (0x0003a2ea) list_single_idle_plugin_calendar_pane

0xdac4,	// (0x0003a2f3) list_single_idle_plugin_notification_pane

0xdacd,	// (0x0003a2fc) list_single_idle_plugin_player_pane

0xdad6,	// (0x0003a305) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdad6,	// (0x0003a305) list_single_idle_plugin_shortcut_pane

0xdaf8,	// (0x0003a327) main_idle_act4_pane_t1

0xdb0a,	// (0x0003a339) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0003c575) main_idle_act4_pane_t

0xdb1c,	// (0x0003a34b) middle_sk_idle_act4_pane_ParamLimits

0xdb1c,	// (0x0003a34b) middle_sk_idle_act4_pane

0xdb32,	// (0x0003a361) popup_clock_digital_analogue_window_cp2

0xdb4c,	// (0x0003a37b) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb4c,	// (0x0003a37b) shortcut_wheel_idle_act4_pane

0xc084,	// (0x000388b3) shortcut_wheel_idle_act4_pane_g1

0xc084,	// (0x000388b3) shortcut_wheel_idle_act4_pane_g2

0xc084,	// (0x000388b3) shortcut_wheel_idle_act4_pane_g3

0xc084,	// (0x000388b3) shortcut_wheel_idle_act4_pane_g4

0xc084,	// (0x000388b3) shortcut_wheel_idle_act4_pane_g5

0xdb60,	// (0x0003a38f) shortcut_wheel_idle_act4_pane_g6

0xdb68,	// (0x0003a397) shortcut_wheel_idle_act4_pane_g7

0xdb70,	// (0x0003a39f) shortcut_wheel_idle_act4_pane_g8

0xdb78,	// (0x0003a3a7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0003c57a) shortcut_wheel_idle_act4_pane_g

0xc30e,	// (0x00038b3d) middle_sk_idle_act4_pane_g1_ParamLimits

0xc30e,	// (0x00038b3d) middle_sk_idle_act4_pane_g1

0xdbdc,	// (0x0003a40b) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbdc,	// (0x0003a40b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0003c59d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0003c59d) middle_sk_idle_act4_pane_g

0xdbe8,	// (0x0003a417) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbe8,	// (0x0003a417) middle_sk_idle_act4_pane_t1

0xdc05,	// (0x0003a434) grid_ai_shortcut_pane_ParamLimits

0xdc05,	// (0x0003a434) grid_ai_shortcut_pane

0xdc3f,	// (0x0003a46e) list_highlight_pane_cp16_ParamLimits

0xdc3f,	// (0x0003a46e) list_highlight_pane_cp16

0xdc4c,	// (0x0003a47b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc4c,	// (0x0003a47b) list_single_idle_plugin_shortcut_pane_g1

0xdc58,	// (0x0003a487) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc58,	// (0x0003a487) list_single_idle_plugin_shortcut_pane_g2

0xdc72,	// (0x0003a4a1) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc72,	// (0x0003a4a1) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0003c5a2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0003c5a2) list_single_idle_plugin_shortcut_pane_g

0xdc85,	// (0x0003a4b4) cell_ai_shortcut_pane_ParamLimits

0xdc85,	// (0x0003a4b4) cell_ai_shortcut_pane

0xdca8,	// (0x0003a4d7) cell_ai_shortcut_pane_g1_ParamLimits

0xdca8,	// (0x0003a4d7) cell_ai_shortcut_pane_g1

0xdab3,	// (0x0003a2e2) ai_gene_pane_1_cp2

0xdcca,	// (0x0003a4f9) ai_gene_pane_2_cp2

0xdcd2,	// (0x0003a501) list_highlight_pane_cp15

0xdcdb,	// (0x0003a50a) list_single_idle_plugin_calendar_pane_g1

0xdcd2,	// (0x0003a501) list_highlight_pane_cp17

0xdce3,	// (0x0003a512) list_single_idle_plugin_calendar_pane_g1_copy1

0xdceb,	// (0x0003a51a) list_single_idle_plugin_player_pane_g1

0xb4d5,	// (0x00037d04) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0003c5a9) list_single_idle_plugin_player_pane_g

0xdcf3,	// (0x0003a522) list_single_idle_plugin_player_pane_t1

0xdd01,	// (0x0003a530) list_single_idle_plugin_player_pane_t2

0xdd0f,	// (0x0003a53e) list_single_idle_plugin_player_pane_t3

0xdd1d,	// (0x0003a54c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0003c5ae) list_single_idle_plugin_player_pane_t

0xdd2b,	// (0x0003a55a) wait_bar_pane_cp15

0xdd33,	// (0x0003a562) grid_ai_notification_pane

0xb4d5,	// (0x00037d04) list_single_idle_plugin_notification_pane_g1

0xdd3c,	// (0x0003a56b) cell_ai_notification_pane_ParamLimits

0xdd3c,	// (0x0003a56b) cell_ai_notification_pane

0xdd49,	// (0x0003a578) cell_ai_notification_pane_g1

0xdd51,	// (0x0003a580) cell_ai_notification_pane_t1

0xdd5f,	// (0x0003a58e) tb_ext_find_button_pane

0xdd67,	// (0x0003a596) tb_ext_find_pane_g1

0xdd6f,	// (0x0003a59e) tb_ext_find_pane_t1

0x85e5,	// (0x00034e14) tb_ext_find_button_pane_g1

0xdd7d,	// (0x0003a5ac) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0003c5b7) tb_ext_find_button_pane_g

0xdaf8,	// (0x0003a327) main_idle_act4_pane_t1_ParamLimits

0xdb0a,	// (0x0003a339) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0003c575) main_idle_act4_pane_t_ParamLimits

0xdb32,	// (0x0003a361) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb40,	// (0x0003a36f) sat_plugin_idle_act4_pane_ParamLimits

0xdb40,	// (0x0003a36f) sat_plugin_idle_act4_pane

0xdd86,	// (0x0003a5b5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd86,	// (0x0003a5b5) sat_plugin_idle_act4_pane_t1

0xdd99,	// (0x0003a5c8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd99,	// (0x0003a5c8) sat_plugin_idle_act4_pane_t2

0xddac,	// (0x0003a5db) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddac,	// (0x0003a5db) sat_plugin_idle_act4_pane_t3

0xddbf,	// (0x0003a5ee) sat_plugin_idle_act4_pane_t4_ParamLimits

0xddbf,	// (0x0003a5ee) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0003c5bc) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0003c5bc) sat_plugin_idle_act4_pane_t

0x4d3f,	// (0x0003156e) popup_battery_window_ParamLimits

0x4d3f,	// (0x0003156e) popup_battery_window

0x77cf,	// (0x00033ffe) bg_popup_sub_pane_cp25_ParamLimits

0x77cf,	// (0x00033ffe) bg_popup_sub_pane_cp25

0xddd2,	// (0x0003a601) popup_battery_window_g1_ParamLimits

0xddd2,	// (0x0003a601) popup_battery_window_g1

0xddde,	// (0x0003a60d) popup_battery_window_t1_ParamLimits

0xddde,	// (0x0003a60d) popup_battery_window_t1

0xddf0,	// (0x0003a61f) popup_battery_window_t2_ParamLimits

0xddf0,	// (0x0003a61f) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0003c5c5) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0003c5c5) popup_battery_window_t

0x8c12,	// (0x00035441) midp_canvas_pane_ParamLimits

0x8c89,	// (0x000354b8) midp_keypad_pane_ParamLimits

0x8c89,	// (0x000354b8) midp_keypad_pane

0x8f84,	// (0x000357b3) main_midp_pane_ParamLimits

0xbbf0,	// (0x0003841f) signal_pane_g2_cp_ParamLimits

0xde0d,	// (0x0003a63c) aid_size_cell_midp_keypad_ParamLimits

0xde0d,	// (0x0003a63c) aid_size_cell_midp_keypad

0xde27,	// (0x0003a656) midp_keyp_game_grid_pane_ParamLimits

0xde27,	// (0x0003a656) midp_keyp_game_grid_pane

0xde47,	// (0x0003a676) midp_keyp_rocker_pane_ParamLimits

0xde47,	// (0x0003a676) midp_keyp_rocker_pane

0xde76,	// (0x0003a6a5) midp_keyp_sk_left_pane_ParamLimits

0xde76,	// (0x0003a6a5) midp_keyp_sk_left_pane

0xded0,	// (0x0003a6ff) midp_keyp_sk_right_pane_ParamLimits

0xded0,	// (0x0003a6ff) midp_keyp_sk_right_pane

0x331c,	// (0x0002fb4b) bg_button_pane_cp03

0xdf2a,	// (0x0003a759) midp_keyp_sk_left_pane_g1

0x331c,	// (0x0002fb4b) bg_button_pane_cp04

0xdf2a,	// (0x0003a759) midp_keyp_sk_right_pane_g1

0xc084,	// (0x000388b3) midp_keyp_rocker_pane_g1

0xdf33,	// (0x0003a762) keyp_game_cell_pane_ParamLimits

0xdf33,	// (0x0003a762) keyp_game_cell_pane

0x331c,	// (0x0002fb4b) bg_button_pane_cp02

0xdf46,	// (0x0003a775) keyp_game_cell_pane_g1

0x4d89,	// (0x000315b8) popup_fep_vkb2_window_ParamLimits

0x4d89,	// (0x000315b8) popup_fep_vkb2_window

0x6cc0,	// (0x000334ef) aid_size_cell_vkb2_ParamLimits

0x6cc0,	// (0x000334ef) aid_size_cell_vkb2

0x6d0c,	// (0x0003353b) popup_fep_vkb2_window_g1_ParamLimits

0x6d0c,	// (0x0003353b) popup_fep_vkb2_window_g1

0x6d54,	// (0x00033583) vkb2_area_bottom_pane_ParamLimits

0x6d54,	// (0x00033583) vkb2_area_bottom_pane

0x6da8,	// (0x000335d7) vkb2_area_keypad_pane_ParamLimits

0x6da8,	// (0x000335d7) vkb2_area_keypad_pane

0x6dee,	// (0x0003361d) vkb2_area_top_pane_ParamLimits

0x6dee,	// (0x0003361d) vkb2_area_top_pane

0x6e68,	// (0x00033697) vkb2_top_entry_pane_ParamLimits

0x6e68,	// (0x00033697) vkb2_top_entry_pane

0x6e92,	// (0x000336c1) vkb2_top_grid_left_pane_ParamLimits

0x6e92,	// (0x000336c1) vkb2_top_grid_left_pane

0x6eb0,	// (0x000336df) vkb2_top_grid_right_pane_ParamLimits

0x6eb0,	// (0x000336df) vkb2_top_grid_right_pane

0x6ece,	// (0x000336fd) vkb2_cell_keypad_pane_ParamLimits

0x6ece,	// (0x000336fd) vkb2_cell_keypad_pane

0x6f84,	// (0x000337b3) vkb2_area_bottom_grid_pane_ParamLimits

0x6f84,	// (0x000337b3) vkb2_area_bottom_grid_pane

0x6faa,	// (0x000337d9) vkb2_area_bottom_pane_g1_ParamLimits

0x6faa,	// (0x000337d9) vkb2_area_bottom_pane_g1

0x6fce,	// (0x000337fd) vkb2_area_bottom_pane_g2_ParamLimits

0x6fce,	// (0x000337fd) vkb2_area_bottom_pane_g2

0x6ffc,	// (0x0003382b) vkb2_area_bottom_pane_g3_ParamLimits

0x6ffc,	// (0x0003382b) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0003c5ca) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0003c5ca) vkb2_area_bottom_pane_g

0x705d,	// (0x0003388c) vkb2_top_cell_left_pane_ParamLimits

0x705d,	// (0x0003388c) vkb2_top_cell_left_pane

0xdf57,	// (0x0003a786) vkb2_top_entry_pane_g1_ParamLimits

0xdf57,	// (0x0003a786) vkb2_top_entry_pane_g1

0xdf65,	// (0x0003a794) vkb2_top_entry_pane_t1_ParamLimits

0xdf65,	// (0x0003a794) vkb2_top_entry_pane_t1

0xdf7d,	// (0x0003a7ac) vkb2_top_entry_pane_t2_ParamLimits

0xdf7d,	// (0x0003a7ac) vkb2_top_entry_pane_t2

0xdf95,	// (0x0003a7c4) vkb2_top_entry_pane_t3_ParamLimits

0xdf95,	// (0x0003a7c4) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0003c5d1) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0003c5d1) vkb2_top_entry_pane_t

0x70aa,	// (0x000338d9) vkb2_top_grid_right_pane_g1_ParamLimits

0x70aa,	// (0x000338d9) vkb2_top_grid_right_pane_g1

0x70c0,	// (0x000338ef) vkb2_top_grid_right_pane_g2_ParamLimits

0x70c0,	// (0x000338ef) vkb2_top_grid_right_pane_g2

0x70d8,	// (0x00033907) vkb2_top_grid_right_pane_g3_ParamLimits

0x70d8,	// (0x00033907) vkb2_top_grid_right_pane_g3

0x70f0,	// (0x0003391f) vkb2_top_grid_right_pane_g4_ParamLimits

0x70f0,	// (0x0003391f) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0003c5d8) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0003c5d8) vkb2_top_grid_right_pane_g

0x7106,	// (0x00033935) vkb2_top_cell_left_pane_g1

0x711d,	// (0x0003394c) vkb2_cell_keypad_pane_g1_ParamLimits

0x711d,	// (0x0003394c) vkb2_cell_keypad_pane_g1

0xdfab,	// (0x0003a7da) vkb2_cell_keypad_pane_t1_ParamLimits

0xdfab,	// (0x0003a7da) vkb2_cell_keypad_pane_t1

0x7141,	// (0x00033970) vkb2_cell_bottom_grid_pane_ParamLimits

0x7141,	// (0x00033970) vkb2_cell_bottom_grid_pane

0x717a,	// (0x000339a9) vkb2_cell_bottom_grid_pane_g1

0xdb80,	// (0x0003a3af) aid_call2_pane_cp02

0xdb88,	// (0x0003a3b7) aid_call_pane_cp02

0xdb90,	// (0x0003a3bf) clock_digital_number_pane_cp10

0xdb98,	// (0x0003a3c7) clock_digital_number_pane_cp11

0xdba0,	// (0x0003a3cf) clock_digital_number_pane_cp12

0xdba8,	// (0x0003a3d7) clock_digital_number_pane_cp13

0xdbb0,	// (0x0003a3df) clock_digital_separator_pane_cp10

0x85e5,	// (0x00034e14) popup_clock_digital_analogue_window_cp2_g1

0x85e5,	// (0x00034e14) popup_clock_digital_analogue_window_cp2_g2

0xdbb8,	// (0x0003a3e7) popup_clock_digital_analogue_window_cp2_g3

0x85e5,	// (0x00034e14) popup_clock_digital_analogue_window_cp2_g4

0xdbb8,	// (0x0003a3e7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0003c58d) popup_clock_digital_analogue_window_cp2_g

0xdbc0,	// (0x0003a3ef) popup_clock_digital_analogue_window_cp2_t1

0xdbce,	// (0x0003a3fd) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0003c598) popup_clock_digital_analogue_window_cp2_t

0xc084,	// (0x000388b3) clock_digital_number_pane_cp10_g1

0xc084,	// (0x000388b3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0003c374) clock_digital_number_pane_cp10_g

0xc084,	// (0x000388b3) clock_digital_separator_pane_cp10_g1

0xc084,	// (0x000388b3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0003c374) clock_digital_separator_pane_cp10_g

0xd9fb,	// (0x0003a22a) uniindi_top_pane_g3

0xda0c,	// (0x0003a23b) uniindi_top_pane_g4

0x6f3e,	// (0x0003376d) vkb2_row_keypad_pane_ParamLimits

0x6f3e,	// (0x0003376d) vkb2_row_keypad_pane

0x7196,	// (0x000339c5) vkb2_cell_t_keypad_pane_ParamLimits

0x7196,	// (0x000339c5) vkb2_cell_t_keypad_pane

0x71a6,	// (0x000339d5) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x71a6,	// (0x000339d5) vkb2_cell_t_keypad_pane_cp08

0x71bb,	// (0x000339ea) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x71bb,	// (0x000339ea) vkb2_cell_t_keypad_pane_cp09

0x71cf,	// (0x000339fe) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x71cf,	// (0x000339fe) vkb2_cell_t_keypad_pane_cp01

0x71e0,	// (0x00033a0f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x71e0,	// (0x00033a0f) vkb2_cell_t_keypad_pane_cp02

0x71f1,	// (0x00033a20) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x71f1,	// (0x00033a20) vkb2_cell_t_keypad_pane_cp03

0x7202,	// (0x00033a31) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7202,	// (0x00033a31) vkb2_cell_t_keypad_pane_cp04

0x7213,	// (0x00033a42) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7213,	// (0x00033a42) vkb2_cell_t_keypad_pane_cp05

0x7224,	// (0x00033a53) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7224,	// (0x00033a53) vkb2_cell_t_keypad_pane_cp06

0x7237,	// (0x00033a66) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7237,	// (0x00033a66) vkb2_cell_t_keypad_pane_cp07

0x724c,	// (0x00033a7b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x724c,	// (0x00033a7b) vkb2_cell_t_keypad_pane_cp10

0x67eb,	// (0x0003301a) vkb2_cell_t_keypad_pane_g1

0xdfc2,	// (0x0003a7f1) vkb2_cell_t_keypad_pane_t1

0x4c7a,	// (0x000314a9) popup_grid_graphic2_window

0xdfd4,	// (0x0003a803) aid_size_cell_graphic2_ParamLimits

0xdfd4,	// (0x0003a803) aid_size_cell_graphic2

0xe00c,	// (0x0003a83b) bg_popup_window_pane_cp21_ParamLimits

0xe00c,	// (0x0003a83b) bg_popup_window_pane_cp21

0xe01a,	// (0x0003a849) graphic2_pages_pane_ParamLimits

0xe01a,	// (0x0003a849) graphic2_pages_pane

0xe060,	// (0x0003a88f) grid_graphic2_control_pane_ParamLimits

0xe060,	// (0x0003a88f) grid_graphic2_control_pane

0xe09e,	// (0x0003a8cd) grid_graphic2_pane_ParamLimits

0xe09e,	// (0x0003a8cd) grid_graphic2_pane

0xe114,	// (0x0003a943) cell_graphic2_pane

0x331c,	// (0x0002fb4b) main_comp_mode_pane

0xd26c,	// (0x00039a9b) list_ai3_gene_pane_ParamLimits

0xd634,	// (0x00039e63) bg_popup_window_pane_cp19_ParamLimits

0xd640,	// (0x00039e6f) bg_touch_area_indi_pane_ParamLimits

0xd640,	// (0x00039e6f) bg_touch_area_indi_pane

0xd656,	// (0x00039e85) bg_touch_area_indi_pane_cp01_ParamLimits

0xd656,	// (0x00039e85) bg_touch_area_indi_pane_cp01

0xd66e,	// (0x00039e9d) bg_touch_area_indi_pane_cp02_ParamLimits

0xd66e,	// (0x00039e9d) bg_touch_area_indi_pane_cp02

0xd688,	// (0x00039eb7) bg_touch_area_indi_pane_cp03_ParamLimits

0xd688,	// (0x00039eb7) bg_touch_area_indi_pane_cp03

0xd6a2,	// (0x00039ed1) popup_slider_window_g1_ParamLimits

0xd6be,	// (0x00039eed) popup_slider_window_g2_ParamLimits

0xd6da,	// (0x00039f09) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0003c522) popup_slider_window_g_ParamLimits

0xd736,	// (0x00039f65) popup_slider_window_t1_ParamLimits

0xd7aa,	// (0x00039fd9) small_volume_slider_vertical_pane_ParamLimits

0xe114,	// (0x0003a943) cell_graphic2_pane_ParamLimits

0xe166,	// (0x0003a995) bg_button_pane_cp10_ParamLimits

0xe166,	// (0x0003a995) bg_button_pane_cp10

0xe17b,	// (0x0003a9aa) bg_button_pane_cp11_ParamLimits

0xe17b,	// (0x0003a9aa) bg_button_pane_cp11

0xe190,	// (0x0003a9bf) graphic2_pages_pane_g1_ParamLimits

0xe190,	// (0x0003a9bf) graphic2_pages_pane_g1

0xe1ab,	// (0x0003a9da) graphic2_pages_pane_g2_ParamLimits

0xe1ab,	// (0x0003a9da) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0003c5e6) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0003c5e6) graphic2_pages_pane_g

0xe1c3,	// (0x0003a9f2) graphic2_pages_pane_t1_ParamLimits

0xe1c3,	// (0x0003a9f2) graphic2_pages_pane_t1

0xe1d9,	// (0x0003aa08) cell_graphic2_control_pane_ParamLimits

0xe1d9,	// (0x0003aa08) cell_graphic2_control_pane

0xe1f3,	// (0x0003aa22) cell_graphic2_pane_g1_ParamLimits

0xe1f3,	// (0x0003aa22) cell_graphic2_pane_g1

0xe200,	// (0x0003aa2f) cell_graphic2_pane_g2_ParamLimits

0xe200,	// (0x0003aa2f) cell_graphic2_pane_g2

0xe20d,	// (0x0003aa3c) cell_graphic2_pane_g3_ParamLimits

0xe20d,	// (0x0003aa3c) cell_graphic2_pane_g3

0xe21a,	// (0x0003aa49) cell_graphic2_pane_g4_ParamLimits

0xe21a,	// (0x0003aa49) cell_graphic2_pane_g4

0xe227,	// (0x0003aa56) cell_graphic2_pane_g5_ParamLimits

0xe227,	// (0x0003aa56) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0003c5eb) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0003c5eb) cell_graphic2_pane_g

0xe242,	// (0x0003aa71) cell_graphic2_pane_t1_ParamLimits

0xe242,	// (0x0003aa71) cell_graphic2_pane_t1

0x9bb3,	// (0x000363e2) grid_highlight_pane_cp11_ParamLimits

0x9bb3,	// (0x000363e2) grid_highlight_pane_cp11

0x77cf,	// (0x00033ffe) bg_button_pane_cp05

0xe26b,	// (0x0003aa9a) cell_graphic2_control_pane_g1

0xc084,	// (0x000388b3) bg_touch_area_indi_pane_g1

0xe293,	// (0x0003aac2) aid_cmod_rocker_key_size

0xe29d,	// (0x0003aacc) aid_cmode_itu_key_size

0xe2a7,	// (0x0003aad6) main_cmode_video_pane

0xe2b1,	// (0x0003aae0) main_comp_mode_itu_pane

0xe2bd,	// (0x0003aaec) main_comp_mode_rocker_pane

0xe2c9,	// (0x0003aaf8) cell_cmode_rocker_pane_ParamLimits

0xe2c9,	// (0x0003aaf8) cell_cmode_rocker_pane

0xe2dd,	// (0x0003ab0c) cell_cmode_itu_pane_ParamLimits

0xe2dd,	// (0x0003ab0c) cell_cmode_itu_pane

0x7dcc,	// (0x000345fb) bg_button_pane_cp06_ParamLimits

0x7dcc,	// (0x000345fb) bg_button_pane_cp06

0xc30e,	// (0x00038b3d) cell_cmode_rocker_pane_g1_ParamLimits

0xc30e,	// (0x00038b3d) cell_cmode_rocker_pane_g1

0xd851,	// (0x0003a080) cell_cmode_rocker_pane_g2_ParamLimits

0xd851,	// (0x0003a080) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0003c5fb) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0003c5fb) cell_cmode_rocker_pane_g

0x331c,	// (0x0002fb4b) bg_button_pane_cp07

0xe2f4,	// (0x0003ab23) cell_cmode_itu_pane_g1

0xe2fd,	// (0x0003ab2c) cell_cmode_itu_pane_t1

0xe30b,	// (0x0003ab3a) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0003c600) cell_cmode_itu_pane_t

0xda7f,	// (0x0003a2ae) aid_touch_ctrl_left

0xda87,	// (0x0003a2b6) aid_touch_ctrl_right

0x331c,	// (0x0002fb4b) compa_mode_pane

0xe319,	// (0x0003ab48) aid_cmod_rocker_key_size_cp

0xe323,	// (0x0003ab52) aid_cmode_itu_key_size_cp

0xe32d,	// (0x0003ab5c) compa_mode_pane_g1

0xe335,	// (0x0003ab64) compa_mode_pane_g2

0xe33d,	// (0x0003ab6c) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0003c605) compa_mode_pane_g

0xe345,	// (0x0003ab74) main_comp_mode_itu_pane_cp

0xe34d,	// (0x0003ab7c) main_comp_mode_rocker_pane_cp

0xe355,	// (0x0003ab84) cell_cmode_itu_pane_cp_ParamLimits

0xe355,	// (0x0003ab84) cell_cmode_itu_pane_cp

0xe36a,	// (0x0003ab99) cell_cmode_rocker_pane_cp_ParamLimits

0xe36a,	// (0x0003ab99) cell_cmode_rocker_pane_cp

0x7dcc,	// (0x000345fb) bg_button_pane_cp06_cp_ParamLimits

0x7dcc,	// (0x000345fb) bg_button_pane_cp06_cp

0xc30e,	// (0x00038b3d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc30e,	// (0x00038b3d) cell_cmode_rocker_pane_g1_cp

0xc084,	// (0x000388b3) cell_cmode_rocker_pane_g2_cp

0x331c,	// (0x0002fb4b) bg_button_pane_cp07_cp

0xe37c,	// (0x0003abab) cell_cmode_itu_pane_g1_cp

0xe385,	// (0x0003abb4) cell_cmode_itu_pane_t1_cp

0xe385,	// (0x0003abb4) cell_cmode_itu_pane_t2_cp

0xb04e,	// (0x0003787d) settings_code_pane_cp2

0x7545,	// (0x00033d74) bg_popup_window_pane_cp3_ParamLimits

0x79bd,	// (0x000341ec) heading_pane_cp3_ParamLimits

0x79c9,	// (0x000341f8) listscroll_popup_graphic_pane_ParamLimits

0x657e,	// (0x00032dad) fep_hwr_aid_pane_ParamLimits

0x6c15,	// (0x00033444) aid_touch_sctrl_top_ParamLimits

0x6c30,	// (0x0003345f) sctrl_sk_top_pane_g1_ParamLimits

0x67eb,	// (0x0003301a) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0003c53b) sctrl_sk_top_pane_g_ParamLimits

0x6c3d,	// (0x0003346c) sctrl_sk_top_pane_t1_ParamLimits

0x6c15,	// (0x00033444) aid_touch_sctrl_bottom_ParamLimits

0x6c3d,	// (0x0003346c) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9c5,	// (0x0003a1f4) aid_area_touch_clock

0x6e30,	// (0x0003365f) aid_vkb2_area_top_pane_cell_ParamLimits

0x6e30,	// (0x0003365f) aid_vkb2_area_top_pane_cell

0x6f60,	// (0x0003378f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6f60,	// (0x0003378f) aid_vkb2_area_bottom_pane_cell

0xdf4f,	// (0x0003a77e) popup_char_count_window

0xe393,	// (0x0003abc2) popup_char_count_window_g1

0xe39c,	// (0x0003abcb) popup_char_count_window_g2

0xe3a5,	// (0x0003abd4) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0003c60c) popup_char_count_window_g

0xe3ae,	// (0x0003abdd) popup_char_count_window_t1

0x6cea,	// (0x00033519) popup_fep_char_preview_window_ParamLimits

0x6cea,	// (0x00033519) popup_fep_char_preview_window

0x6e4e,	// (0x0003367d) vkb2_top_candi_pane_ParamLimits

0x6e4e,	// (0x0003367d) vkb2_top_candi_pane

0xe3bc,	// (0x0003abeb) cell_vkb2_top_candi_pane_ParamLimits

0xe3bc,	// (0x0003abeb) cell_vkb2_top_candi_pane

0x7261,	// (0x00033a90) bg_popup_fep_char_preview_window_ParamLimits

0x7261,	// (0x00033a90) bg_popup_fep_char_preview_window

0x726f,	// (0x00033a9e) popup_fep_char_preview_window_t1_ParamLimits

0x726f,	// (0x00033a9e) popup_fep_char_preview_window_t1

0xe40d,	// (0x0003ac3c) bg_popup_fep_char_preview_window_g1

0xe415,	// (0x0003ac44) bg_popup_fep_char_preview_window_g2

0xe41d,	// (0x0003ac4c) bg_popup_fep_char_preview_window_g3

0xe425,	// (0x0003ac54) bg_popup_fep_char_preview_window_g4

0xe42d,	// (0x0003ac5c) bg_popup_fep_char_preview_window_g5

0x72a9,	// (0x00033ad8) bg_popup_fep_char_preview_window_g6

0xe435,	// (0x0003ac64) bg_popup_fep_char_preview_window_g7

0xe43d,	// (0x0003ac6c) bg_popup_fep_char_preview_window_g8

0xe445,	// (0x0003ac74) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0003c613) bg_popup_fep_char_preview_window_g

0x67eb,	// (0x0003301a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x67eb,	// (0x0003301a) cell_vkb2_top_candi_pane_g1

0x67f9,	// (0x00033028) cell_vkb2_top_candi_pane_g2_ParamLimits

0x67f9,	// (0x00033028) cell_vkb2_top_candi_pane_g2

0xdc1e,	// (0x0003a44d) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdc1e,	// (0x0003a44d) cell_vkb2_top_candi_pane_g3

0x72b1,	// (0x00033ae0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x72b1,	// (0x00033ae0) cell_vkb2_top_candi_pane_g4

0xc80d,	// (0x0003903c) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc80d,	// (0x0003903c) cell_vkb2_top_candi_pane_g5

0x72d2,	// (0x00033b01) cell_vkb2_top_candi_pane_g6_ParamLimits

0x72d2,	// (0x00033b01) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0003c626) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0003c626) cell_vkb2_top_candi_pane_g

0x72e0,	// (0x00033b0f) cell_vkb2_top_candi_pane_t1

0x60d2,	// (0x00032901) aid_size_touch_slider_mark_ParamLimits

0x60d2,	// (0x00032901) aid_size_touch_slider_mark

0xe050,	// (0x0003a87f) grid_graphic2_catg_pane_ParamLimits

0xe050,	// (0x0003a87f) grid_graphic2_catg_pane

0xe0ee,	// (0x0003a91d) popup_grid_graphic2_window_t1_ParamLimits

0xe0ee,	// (0x0003a91d) popup_grid_graphic2_window_t1

0xe100,	// (0x0003a92f) popup_grid_graphic2_window_t2_ParamLimits

0xe100,	// (0x0003a92f) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0003c5e1) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0003c5e1) popup_grid_graphic2_window_t

0x77cf,	// (0x00033ffe) bg_button_pane_cp05_ParamLimits

0xe26b,	// (0x0003aa9a) cell_graphic2_control_pane_g1_ParamLimits

0xe44d,	// (0x0003ac7c) cell_graphic2_catg_pane_ParamLimits

0xe44d,	// (0x0003ac7c) cell_graphic2_catg_pane

0x331c,	// (0x0002fb4b) bg_button_pane_cp12

0xe45f,	// (0x0003ac8e) cell_graphic2_catg_pane_g1

0xd991,	// (0x0003a1c0) cell_tb_ext_pane_t1_ParamLimits

0x707d,	// (0x000338ac) vkb2_top_cell_right_narrow_pane_ParamLimits

0x707d,	// (0x000338ac) vkb2_top_cell_right_narrow_pane

0x7095,	// (0x000338c4) vkb2_top_cell_right_wide_pane_ParamLimits

0x7095,	// (0x000338c4) vkb2_top_cell_right_wide_pane

0x6570,	// (0x00032d9f) bg_vkb2_func_pane_ParamLimits

0x6570,	// (0x00032d9f) bg_vkb2_func_pane

0x7106,	// (0x00033935) vkb2_top_cell_left_pane_g1_ParamLimits

0x6570,	// (0x00032d9f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6570,	// (0x00032d9f) bg_vkb2_fuc_pane_cp03

0x717a,	// (0x000339a9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9ac9,	// (0x000362f8) bg_vkb2_func_pane_g1

0x9ad1,	// (0x00036300) bg_vkb2_func_pane_g2

0x9ae1,	// (0x00036310) bg_vkb2_func_pane_g3

0x9ad9,	// (0x00036308) bg_vkb2_func_pane_g4

0x9ae9,	// (0x00036318) bg_vkb2_func_pane_g5

0x9af1,	// (0x00036320) bg_vkb2_func_pane_g6

0x9af9,	// (0x00036328) bg_vkb2_func_pane_g7

0x9b01,	// (0x00036330) bg_vkb2_func_pane_g8

0x9ac1,	// (0x000362f0) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0003c633) bg_vkb2_func_pane_g

0x6570,	// (0x00032d9f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6570,	// (0x00032d9f) bg_vkb2_fuc_pane_cp01

0x7106,	// (0x00033935) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7106,	// (0x00033935) vkb2_top_cell_right_wide_pane_g1

0x6570,	// (0x00032d9f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6570,	// (0x00032d9f) bg_vkb2_fuc_pane_cp02

0x717a,	// (0x000339a9) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x717a,	// (0x000339a9) vkb2_top_cell_right_narrow_pane_g1

0xd5b2,	// (0x00039de1) aid_touch_area_decrease_ParamLimits

0xd5b2,	// (0x00039de1) aid_touch_area_decrease

0xd5d6,	// (0x00039e05) aid_touch_area_increase_ParamLimits

0xd5d6,	// (0x00039e05) aid_touch_area_increase

0xd5e2,	// (0x00039e11) aid_touch_area_mute_ParamLimits

0xd5e2,	// (0x00039e11) aid_touch_area_mute

0xd606,	// (0x00039e35) aid_touch_area_slider_ParamLimits

0xd606,	// (0x00039e35) aid_touch_area_slider

0xd6f6,	// (0x00039f25) popup_slider_window_g4_ParamLimits

0xd6f6,	// (0x00039f25) popup_slider_window_g4

0xd702,	// (0x00039f31) popup_slider_window_g5_ParamLimits

0xd702,	// (0x00039f31) popup_slider_window_g5

0xd724,	// (0x00039f53) popup_slider_window_g6_ParamLimits

0xd724,	// (0x00039f53) popup_slider_window_g6

0xd764,	// (0x00039f93) popup_slider_window_t2_ParamLimits

0xd764,	// (0x00039f93) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0003c52f) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0003c52f) popup_slider_window_t

0xd77c,	// (0x00039fab) slider_pane_ParamLimits

0xd77c,	// (0x00039fab) slider_pane

0xe468,	// (0x0003ac97) slider_pane_g1_ParamLimits

0xe468,	// (0x0003ac97) slider_pane_g1

0xe47c,	// (0x0003acab) slider_pane_g2_ParamLimits

0xe47c,	// (0x0003acab) slider_pane_g2

0xe492,	// (0x0003acc1) slider_pane_g3_ParamLimits

0xe492,	// (0x0003acc1) slider_pane_g3

0x0003,

0xfe17,	// (0x0003c646) slider_pane_g_ParamLimits

0xfe17,	// (0x0003c646) slider_pane_g

0x94ba,	// (0x00035ce9) popup_tb_float_extension_window_ParamLimits

0x94ba,	// (0x00035ce9) popup_tb_float_extension_window

0xe4be,	// (0x0003aced) aid_size_cell_tb_float_ext

0x331c,	// (0x0002fb4b) bg_popup_sub_window_cp28

0xe4ca,	// (0x0003acf9) grid_tb_float_ext_pane

0xe4d6,	// (0x0003ad05) cell_tb_float_ext_pane_ParamLimits

0xe4d6,	// (0x0003ad05) cell_tb_float_ext_pane

0xe4f2,	// (0x0003ad21) cell_tb_float_ext_pane_g1

0xe4fb,	// (0x0003ad2a) grid_highlight_pane_cp12

0x66c5,	// (0x00032ef4) cell_last_hwr_side_pane_ParamLimits

0x66c5,	// (0x00032ef4) cell_last_hwr_side_pane

0xc084,	// (0x000388b3) cell_last_hwr_side_pane_g1

0xe504,	// (0x0003ad33) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0003c64f) cell_last_hwr_side_pane_g

0x702c,	// (0x0003385b) vkb2_area_bottom_space_btn_pane_ParamLimits

0x702c,	// (0x0003385b) vkb2_area_bottom_space_btn_pane

0x67eb,	// (0x0003301a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfc2,	// (0x0003a7f1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x72e0,	// (0x00033b0f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x72fe,	// (0x00033b2d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x72fe,	// (0x00033b2d) vkb2_area_bottom_space_btn_pane_g1

0x7338,	// (0x00033b67) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7338,	// (0x00033b67) vkb2_area_bottom_space_btn_pane_g2

0x736e,	// (0x00033b9d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x736e,	// (0x00033b9d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0003c654) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0003c654) vkb2_area_bottom_space_btn_pane_g

0x6635,	// (0x00032e64) cel_fep_hwr_func_pane_ParamLimits

0x6635,	// (0x00032e64) cel_fep_hwr_func_pane

0x6671,	// (0x00032ea0) cell_hwr_side_button_pane_ParamLimits

0x6671,	// (0x00032ea0) cell_hwr_side_button_pane

0xd9c5,	// (0x0003a1f4) aid_area_touch_clock_ParamLimits

0x77cf,	// (0x00033ffe) bg_uniindi_top_pane_ParamLimits

0xd9d9,	// (0x0003a208) uniindi_top_pane_g1_ParamLimits

0xd9ef,	// (0x0003a21e) uniindi_top_pane_g2_ParamLimits

0xd9fb,	// (0x0003a22a) uniindi_top_pane_g3_ParamLimits

0xda0c,	// (0x0003a23b) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0003c567) uniindi_top_pane_g_ParamLimits

0xda19,	// (0x0003a248) uniindi_top_pane_t1_ParamLimits

0x77cf,	// (0x00033ffe) bg_vkb2_func_pane_cp01_ParamLimits

0x77cf,	// (0x00033ffe) bg_vkb2_func_pane_cp01

0xe50d,	// (0x0003ad3c) cel_fep_hwr_func_pane_g1_ParamLimits

0xe50d,	// (0x0003ad3c) cel_fep_hwr_func_pane_g1

0x77cf,	// (0x00033ffe) bg_vkb2_func_pane_cp02_ParamLimits

0x77cf,	// (0x00033ffe) bg_vkb2_func_pane_cp02

0xe50d,	// (0x0003ad3c) cell_hwr_side_button_pane_g1_ParamLimits

0xe50d,	// (0x0003ad3c) cell_hwr_side_button_pane_g1

0x9942,	// (0x00036171) status_pane_g4_ParamLimits

0x9942,	// (0x00036171) status_pane_g4

0x995c,	// (0x0003618b) status_pane_t1

0xbe7e,	// (0x000386ad) form2_midp_gauge_slider_cont_pane

0xbe86,	// (0x000386b5) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe98,	// (0x000386c7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbeaa,	// (0x000386d9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0003c327) form2_midp_gauge_slider_pane_t_ParamLimits

0xbebc,	// (0x000386eb) form2_midp_slider_pane_ParamLimits

0x6cb2,	// (0x000334e1) aid_size_cell_func_vkb2_ParamLimits

0x6cb2,	// (0x000334e1) aid_size_cell_func_vkb2

0xe4aa,	// (0x0003acd9) slider_pane_g4_ParamLimits

0xe4aa,	// (0x0003acd9) slider_pane_g4

0x73b8,	// (0x00033be7) form2_midp_gauge_slider_pane_t2_cp01

0x73c6,	// (0x00033bf5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x73c6,	// (0x00033bf5) form2_midp_gauge_slider_pane_t3_cp01

0x73e3,	// (0x00033c12) form2_midp_slider_pane_cp01

0x331c,	// (0x0002fb4b) navi_smil_pane

0xe546,	// (0x0003ad75) navi_smil_pane_g1

0xe54e,	// (0x0003ad7d) navi_smil_pane_t1

0xe51b,	// (0x0003ad4a) form2_midp_slider_pane_g1

0xe524,	// (0x0003ad53) form2_midp_slider_pane_g2

0xe52c,	// (0x0003ad5b) form2_midp_slider_pane_g3

0xe51b,	// (0x0003ad4a) form2_midp_slider_pane_g4

0xe534,	// (0x0003ad63) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0003c65d) form2_midp_slider_pane_g

0x73a8,	// (0x00033bd7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x73a8,	// (0x00033bd7) vkb2_area_bottom_space_btn_pane_g4

0x9759,	// (0x00035f88) lc0_navi_pane_ParamLimits

0x9759,	// (0x00035f88) lc0_navi_pane

0x97d5,	// (0x00036004) lc0_stat_indi_pane_ParamLimits

0x97d5,	// (0x00036004) lc0_stat_indi_pane

0x97ec,	// (0x0003601b) ls0_title_pane_ParamLimits

0x97ec,	// (0x0003601b) ls0_title_pane

0x7dcc,	// (0x000345fb) bg_popup_sub_pane_cp14_ParamLimits

0xd9ac,	// (0x0003a1db) list_uniindi_pane_ParamLimits

0xd9b8,	// (0x0003a1e7) uniindi_top_pane_ParamLimits

0xda57,	// (0x0003a286) list_single_uniindi_pane_g1_ParamLimits

0xda6a,	// (0x0003a299) list_single_uniindi_pane_t1_ParamLimits

0x73ec,	// (0x00033c1b) lc0_stat_clock_pane_ParamLimits

0x73ec,	// (0x00033c1b) lc0_stat_clock_pane

0xe55c,	// (0x0003ad8b) lc0_stat_indi_pane_g1_ParamLimits

0xe55c,	// (0x0003ad8b) lc0_stat_indi_pane_g1

0xe569,	// (0x0003ad98) lc0_stat_indi_pane_g2_ParamLimits

0xe569,	// (0x0003ad98) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0003c668) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0003c668) lc0_stat_indi_pane_g

0x73f9,	// (0x00033c28) lc0_uni_indicator_pane_ParamLimits

0x73f9,	// (0x00033c28) lc0_uni_indicator_pane

0xe576,	// (0x0003ada5) ls0_title_pane_g1_ParamLimits

0xe576,	// (0x0003ada5) ls0_title_pane_g1

0xe58a,	// (0x0003adb9) ls0_title_pane_t1_ParamLimits

0xe58a,	// (0x0003adb9) ls0_title_pane_t1

0x7406,	// (0x00033c35) lc0_uni_indicator_pane_g1_ParamLimits

0x7406,	// (0x00033c35) lc0_uni_indicator_pane_g1

0xe5c0,	// (0x0003adef) lc0_stat_clock_pane_t1

0x331c,	// (0x0002fb4b) main_ai5_pane

0xe5ce,	// (0x0003adfd) ai5_sk_pane_ParamLimits

0xe5ce,	// (0x0003adfd) ai5_sk_pane

0xe5db,	// (0x0003ae0a) cell_ai5_widget_pane_ParamLimits

0xe5db,	// (0x0003ae0a) cell_ai5_widget_pane

0xe651,	// (0x0003ae80) aid_size_cell_widget_grid

0xe665,	// (0x0003ae94) bg_ai5_widget_pane_ParamLimits

0xe665,	// (0x0003ae94) bg_ai5_widget_pane

0xe68d,	// (0x0003aebc) cell_ai5_widget_pane_g2

0xe69d,	// (0x0003aecc) cell_ai5_widget_pane_g3

0xe6bc,	// (0x0003aeeb) cell_ai5_widget_pane_g4

0xe6c8,	// (0x0003aef7) cell_ai5_widget_pane_g5

0xe6d4,	// (0x0003af03) cell_ai5_widget_pane_g6

0xe6e2,	// (0x0003af11) cell_ai5_widget_pane_g7

0xe72a,	// (0x0003af59) cell_ai5_widget_pane_t1_ParamLimits

0xe72a,	// (0x0003af59) cell_ai5_widget_pane_t1

0xe747,	// (0x0003af76) cell_ai5_widget_pane_t2_ParamLimits

0xe747,	// (0x0003af76) cell_ai5_widget_pane_t2

0xe75f,	// (0x0003af8e) cell_ai5_widget_pane_t3_ParamLimits

0xe75f,	// (0x0003af8e) cell_ai5_widget_pane_t3

0xe777,	// (0x0003afa6) cell_ai5_widget_pane_t4_ParamLimits

0xe777,	// (0x0003afa6) cell_ai5_widget_pane_t4

0xe791,	// (0x0003afc0) cell_ai5_widget_pane_t5_ParamLimits

0xe791,	// (0x0003afc0) cell_ai5_widget_pane_t5

0xe7b0,	// (0x0003afdf) cell_ai5_widget_pane_t6_ParamLimits

0xe7b0,	// (0x0003afdf) cell_ai5_widget_pane_t6

0xe7c2,	// (0x0003aff1) cell_ai5_widget_pane_t7_ParamLimits

0xe7c2,	// (0x0003aff1) cell_ai5_widget_pane_t7

0xe7db,	// (0x0003b00a) cell_ai5_widget_pane_t8_ParamLimits

0xe7db,	// (0x0003b00a) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0003c682) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0003c682) cell_ai5_widget_pane_t

0xe827,	// (0x0003b056) grid_ai5_widget_pane

0x7dcc,	// (0x000345fb) highlight_cell_ai5_widget_pane_ParamLimits

0x7dcc,	// (0x000345fb) highlight_cell_ai5_widget_pane

0xe83e,	// (0x0003b06d) ai5_sk_left_pane

0xe848,	// (0x0003b077) ai5_sk_middle_pane

0xe852,	// (0x0003b081) ai5_sk_right_pane

0xe85c,	// (0x0003b08b) bg_ai5_widget_pane_g1_ParamLimits

0xe85c,	// (0x0003b08b) bg_ai5_widget_pane_g1

0xe868,	// (0x0003b097) bg_ai5_widget_pane_g2_ParamLimits

0xe868,	// (0x0003b097) bg_ai5_widget_pane_g2

0xe874,	// (0x0003b0a3) bg_ai5_widget_pane_g3_ParamLimits

0xe874,	// (0x0003b0a3) bg_ai5_widget_pane_g3

0xe880,	// (0x0003b0af) bg_ai5_widget_pane_g4_ParamLimits

0xe880,	// (0x0003b0af) bg_ai5_widget_pane_g4

0xe88c,	// (0x0003b0bb) bg_ai5_widget_pane_g5_ParamLimits

0xe88c,	// (0x0003b0bb) bg_ai5_widget_pane_g5

0xe898,	// (0x0003b0c7) bg_ai5_widget_pane_g6_ParamLimits

0xe898,	// (0x0003b0c7) bg_ai5_widget_pane_g6

0xe8a4,	// (0x0003b0d3) bg_ai5_widget_pane_g7_ParamLimits

0xe8a4,	// (0x0003b0d3) bg_ai5_widget_pane_g7

0xe8b0,	// (0x0003b0df) bg_ai5_widget_pane_g8_ParamLimits

0xe8b0,	// (0x0003b0df) bg_ai5_widget_pane_g8

0xe8bc,	// (0x0003b0eb) bg_ai5_widget_pane_g9_ParamLimits

0xe8bc,	// (0x0003b0eb) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0003c697) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0003c697) bg_ai5_widget_pane_g

0xe8e3,	// (0x0003b112) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8e3,	// (0x0003b112) cell_shortcut_ai5_widget_pane

0x7611,	// (0x00033e40) bg_cell_shortcut_ai5_widget_pane

0xe8f5,	// (0x0003b124) cell_grid_ai5_widget_pane_g1

0xe8fe,	// (0x0003b12d) highlight_cell_shortcut_ai5_widget_pane

0x9ac9,	// (0x000362f8) ai5_sk_left_pane_g1

0xe906,	// (0x0003b135) ai5_sk_left_pane_g2

0xe90e,	// (0x0003b13d) ai5_sk_left_pane_g3

0xe916,	// (0x0003b145) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0003c6aa) ai5_sk_left_pane_g

0xe91e,	// (0x0003b14d) ai5_sk_left_pane_t1

0x9ad1,	// (0x00036300) ai5_sk_right_pane_g1

0xe92c,	// (0x0003b15b) ai5_sk_right_pane_g2

0xe934,	// (0x0003b163) ai5_sk_right_pane_g3

0xe93c,	// (0x0003b16b) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0003c6b3) ai5_sk_right_pane_g

0xe944,	// (0x0003b173) ai5_sk_right_pane_t1

0x9ad1,	// (0x00036300) ai5_sk_middle_pane_g1

0x9ac9,	// (0x000362f8) ai5_sk_middle_pane_g2

0x9ae9,	// (0x00036318) ai5_sk_middle_pane_g3

0xe934,	// (0x0003b163) ai5_sk_middle_pane_g4

0xe90e,	// (0x0003b13d) ai5_sk_middle_pane_g5

0xe952,	// (0x0003b181) ai5_sk_middle_pane_g6

0xe95a,	// (0x0003b189) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0003c6bc) ai5_sk_middle_pane_g

0x95db,	// (0x00035e0a) aid_touch_area_size_lc0_ParamLimits

0x95db,	// (0x00035e0a) aid_touch_area_size_lc0

0x681a,	// (0x00033049) cell_hwr_candidate_pane_t1_ParamLimits

0x95f9,	// (0x00035e28) aid_touch_navi_pane

0x98ec,	// (0x0003611b) status_dt_navi_pane_ParamLimits

0x98ec,	// (0x0003611b) status_dt_navi_pane

0x98f9,	// (0x00036128) status_dt_sta_pane_ParamLimits

0x98f9,	// (0x00036128) status_dt_sta_pane

0xe962,	// (0x0003b191) dt_sta_controll_pane

0xe96f,	// (0x0003b19e) dt_sta_indi_pane

0xe980,	// (0x0003b1af) dt_sta_title_pane

0x77cf,	// (0x00033ffe) bg_dt_sta_indi_pane_ParamLimits

0x77cf,	// (0x00033ffe) bg_dt_sta_indi_pane

0xe993,	// (0x0003b1c2) dt_sta_battery_pane

0xe99b,	// (0x0003b1ca) dt_sta_indi_pane_g1

0xe9a4,	// (0x0003b1d3) dt_sta_indi_pane_g2

0xe9ad,	// (0x0003b1dc) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0003c6cb) dt_sta_indi_pane_g

0xe9b6,	// (0x0003b1e5) dt_sta_signal_pane

0x7dcc,	// (0x000345fb) bg_dt_sta_title_pane_ParamLimits

0x7dcc,	// (0x000345fb) bg_dt_sta_title_pane

0xe9bf,	// (0x0003b1ee) dt_sta_title_pane_g1

0xe9c7,	// (0x0003b1f6) dt_sta_title_pane_t1_ParamLimits

0xe9c7,	// (0x0003b1f6) dt_sta_title_pane_t1

0x331c,	// (0x0002fb4b) bg_dt_sta_control_pane

0xe9dc,	// (0x0003b20b) dt_sta_controll_pane_g1

0xe9e5,	// (0x0003b214) bg_dt_sta_title_pane_g1

0xe9ee,	// (0x0003b21d) bg_dt_sta_title_pane_g2

0xe9f7,	// (0x0003b226) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0003c6d2) bg_dt_sta_title_pane_g

0xc084,	// (0x000388b3) bg_dt_sta_indi_pane_g1

0xea00,	// (0x0003b22f) dt_sta_signal_pane_g1

0xea08,	// (0x0003b237) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0003c6d9) dt_sta_signal_pane_g

0xea10,	// (0x0003b23f) dt_sta_battery_pane_g1

0xea19,	// (0x0003b248) dt_sta_battery_pane_t1

0xc084,	// (0x000388b3) bg_dt_sta_control_pane_g1

0x86fc,	// (0x00034f2b) fep_china_uni_eep_pane

0x8704,	// (0x00034f33) fep_china_uni_entry_pane_ParamLimits

0x8714,	// (0x00034f43) popup_fep_china_uni_window_g1_ParamLimits

0x8724,	// (0x00034f53) popup_fep_china_uni_window_g2_ParamLimits

0x8724,	// (0x00034f53) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0003bf64) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0003bf64) popup_fep_china_uni_window_g

0xea28,	// (0x0003b257) fep_china_uni_eep_pane_g1

0xea30,	// (0x0003b25f) fep_china_uni_eep_pane_t1

0xe53d,	// (0x0003ad6c) aid_touch_area_size_smil_player

0x9751,	// (0x00035f80) lc0_clock_pane

0x9950,	// (0x0003617f) status_pane_g5_ParamLimits

0x9950,	// (0x0003617f) status_pane_g5

0x913f,	// (0x0003596e) popup_keymap_window

0x990e,	// (0x0003613d) status_icon_pane

0xe69d,	// (0x0003aecc) cell_ai5_widget_pane_g3_ParamLimits

0xe6bc,	// (0x0003aeeb) cell_ai5_widget_pane_g4_ParamLimits

0xe6c8,	// (0x0003aef7) cell_ai5_widget_pane_g5_ParamLimits

0xe6ee,	// (0x0003af1d) cell_ai5_widget_pane_g8_ParamLimits

0xe6ee,	// (0x0003af1d) cell_ai5_widget_pane_g8

0xe702,	// (0x0003af31) cell_ai5_widget_pane_g9_ParamLimits

0xe702,	// (0x0003af31) cell_ai5_widget_pane_g9

0xe716,	// (0x0003af45) cell_ai5_widget_pane_g10_ParamLimits

0xe716,	// (0x0003af45) cell_ai5_widget_pane_g10

0xea3f,	// (0x0003b26e) status_icon_pane_g1

0x331c,	// (0x0002fb4b) bg_popup_sub_pane_cp13

0xea47,	// (0x0003b276) popup_keymap_window_t1

0x8ed9,	// (0x00035708) control_pane_g6_ParamLimits

0x8ed9,	// (0x00035708) control_pane_g6

0x8ee6,	// (0x00035715) control_pane_g7_ParamLimits

0x8ee6,	// (0x00035715) control_pane_g7

0x8ef3,	// (0x00035722) control_pane_g8_ParamLimits

0x8ef3,	// (0x00035722) control_pane_g8

0xe962,	// (0x0003b191) dt_sta_controll_pane_ParamLimits

0xe96f,	// (0x0003b19e) dt_sta_indi_pane_ParamLimits

0xe980,	// (0x0003b1af) dt_sta_title_pane_ParamLimits

0x7d04,	// (0x00034533) aid_size_touch_scroll_bar_cale

0x4d57,	// (0x00031586) popup_discreet_window_ParamLimits

0x4d57,	// (0x00031586) popup_discreet_window

0x4de5,	// (0x00031614) popup_sk_window

0xa13b,	// (0x0003696a) bg_popup_sub_pane_cp28_ParamLimits

0xa13b,	// (0x0003696a) bg_popup_sub_pane_cp28

0xea55,	// (0x0003b284) popup_discreet_window_g1_ParamLimits

0xea55,	// (0x0003b284) popup_discreet_window_g1

0xea75,	// (0x0003b2a4) popup_discreet_window_t1_ParamLimits

0xea75,	// (0x0003b2a4) popup_discreet_window_t1

0xea93,	// (0x0003b2c2) popup_discreet_window_t2_ParamLimits

0xea93,	// (0x0003b2c2) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0003c6de) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0003c6de) popup_discreet_window_t

0x7419,	// (0x00033c48) popup_sk_window_g1

0x7423,	// (0x00033c52) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0003c6e5) popup_sk_window_g

0xeae5,	// (0x0003b314) popup_sk_window_t1

0xeaf3,	// (0x0003b322) popup_sk_window_t1_copy1

0xe68d,	// (0x0003aebc) cell_ai5_widget_pane_g2_ParamLimits

0xe7ed,	// (0x0003b01c) cell_ai5_widget_pane_t9_ParamLimits

0xe7ed,	// (0x0003b01c) cell_ai5_widget_pane_t9

0x331c,	// (0x0002fb4b) main_fep_fshwr2_pane

0xeb01,	// (0x0003b330) aid_fshwr2_btn_pane

0xeb09,	// (0x0003b338) aid_fshwr2_syb_pane

0xeb11,	// (0x0003b340) aid_fshwr2_txt_pane

0xeb19,	// (0x0003b348) fshwr2_func_candi_pane

0xeb23,	// (0x0003b352) fshwr2_hwr_syb_pane

0xeb2d,	// (0x0003b35c) fshwr2_icf_pane

0x331c,	// (0x0002fb4b) fshwr2_icf_bg_pane

0xeb4f,	// (0x0003b37e) fshwr2_icf_pane_t1_ParamLimits

0xeb4f,	// (0x0003b37e) fshwr2_icf_pane_t1

0xc084,	// (0x000388b3) fshwr2_func_candi_pane_g1

0xeb66,	// (0x0003b395) fshwr2_func_candi_row_pane_ParamLimits

0xeb66,	// (0x0003b395) fshwr2_func_candi_row_pane

0xeb77,	// (0x0003b3a6) cell_fshwr2_syb_pane_ParamLimits

0xeb77,	// (0x0003b3a6) cell_fshwr2_syb_pane

0xc30e,	// (0x00038b3d) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc30e,	// (0x00038b3d) fshwr2_hwr_syb_pane_g1

0x331c,	// (0x0002fb4b) bg_popup_call_pane_cp01

0xeb91,	// (0x0003b3c0) fshwr2_func_candi_cell_pane_ParamLimits

0xeb91,	// (0x0003b3c0) fshwr2_func_candi_cell_pane

0xebc3,	// (0x0003b3f2) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xebc3,	// (0x0003b3f2) fshwr2_func_candi_cell_bg_pane

0xebdd,	// (0x0003b40c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebdd,	// (0x0003b40c) fshwr2_func_candi_cell_pane_g1

0xebfd,	// (0x0003b42c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebfd,	// (0x0003b42c) fshwr2_func_candi_cell_pane_t1

0x331c,	// (0x0002fb4b) bg_button_pane_cp08

0x8bfe,	// (0x0003542d) cell_fshwr2_syb_bg_pane

0xec10,	// (0x0003b43f) cell_fshwr2_syb_bg_pane_g1

0xec18,	// (0x0003b447) cell_fshwr2_syb_bg_pane_t1

0x7dcc,	// (0x000345fb) main_tmo_pane

0xac65,	// (0x00037494) uni_indicator_pane_g1_ParamLimits

0xac7a,	// (0x000374a9) uni_indicator_pane_g2_ParamLimits

0xac90,	// (0x000374bf) uni_indicator_pane_g3_ParamLimits

0xaca6,	// (0x000374d5) uni_indicator_pane_g4_ParamLimits

0xaca6,	// (0x000374d5) uni_indicator_pane_g4

0xacba,	// (0x000374e9) uni_indicator_pane_g5_ParamLimits

0xacba,	// (0x000374e9) uni_indicator_pane_g5

0xacce,	// (0x000374fd) uni_indicator_pane_g6_ParamLimits

0xacce,	// (0x000374fd) uni_indicator_pane_g6

0xf932,	// (0x0003c161) uni_indicator_pane_g_ParamLimits

0xd582,	// (0x00039db1) popup_tmo_note_window_ParamLimits

0xd582,	// (0x00039db1) popup_tmo_note_window

0x331c,	// (0x0002fb4b) fshwr2_bg_pane

0xebee,	// (0x0003b41d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebee,	// (0x0003b41d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0003c6ea) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0003c6ea) fshwr2_func_candi_cell_pane_g

0xc084,	// (0x000388b3) bg_popup_window_pane_cp01

0xec27,	// (0x0003b456) bg_popup_window_pane_g1_cp01

0xec30,	// (0x0003b45f) bg_popup_window_pane_cp22_ParamLimits

0xec30,	// (0x0003b45f) bg_popup_window_pane_cp22

0xec3e,	// (0x0003b46d) listscroll_tmo_link_pane_ParamLimits

0xec3e,	// (0x0003b46d) listscroll_tmo_link_pane

0xec7e,	// (0x0003b4ad) popup_tmo_note_window_g1_ParamLimits

0xec7e,	// (0x0003b4ad) popup_tmo_note_window_g1

0xec8b,	// (0x0003b4ba) tmo_note_info_pane_ParamLimits

0xec8b,	// (0x0003b4ba) tmo_note_info_pane

0xeca5,	// (0x0003b4d4) list_tmo_note_info_pane_g1_ParamLimits

0xeca5,	// (0x0003b4d4) list_tmo_note_info_pane_g1

0xecbc,	// (0x0003b4eb) list_tmo_note_info_pane_g2_ParamLimits

0xecbc,	// (0x0003b4eb) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0003c6ef) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0003c6ef) list_tmo_note_info_pane_g

0xecd8,	// (0x0003b507) list_tmo_note_info_text_pane_ParamLimits

0xecd8,	// (0x0003b507) list_tmo_note_info_text_pane

0xed5d,	// (0x0003b58c) list_tmo_link_pane

0xed6a,	// (0x0003b599) scroll_pane_cp20

0xed77,	// (0x0003b5a6) list_single_tmo_link_pane_ParamLimits

0xed77,	// (0x0003b5a6) list_single_tmo_link_pane

0xed87,	// (0x0003b5b6) list_single_tmo_link_pane_t1

0xed95,	// (0x0003b5c4) list_tmo_note_info_text_pane_t1_ParamLimits

0xed95,	// (0x0003b5c4) list_tmo_note_info_text_pane_t1

0x7e92,	// (0x000346c1) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7e92,	// (0x000346c1) aid_size_touch_scroll_bar_cp01

0x5566,	// (0x00031d95) aid_size_touch_slider_marker

0x4dcd,	// (0x000315fc) popup_settings_window_ParamLimits

0x4dcd,	// (0x000315fc) popup_settings_window

0x5ceb,	// (0x0003251a) popup_candi_list_indi_window

0x95f9,	// (0x00035e28) aid_touch_navi_pane_ParamLimits

0x6be9,	// (0x00033418) rs_clock_indi_pane

0x6bf2,	// (0x00033421) sctrl_sk_bottom_pane_ParamLimits

0x6c03,	// (0x00033432) sctrl_sk_top_pane_ParamLimits

0x6d04,	// (0x00033533) popup_fep_tooltip_window

0xe651,	// (0x0003ae80) aid_size_cell_widget_grid_ParamLimits

0xe681,	// (0x0003aeb0) cell_ai5_widget_pane_g1_ParamLimits

0xe681,	// (0x0003aeb0) cell_ai5_widget_pane_g1

0xe6d4,	// (0x0003af03) cell_ai5_widget_pane_g6_ParamLimits

0xe6e2,	// (0x0003af11) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0003c66d) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0003c66d) cell_ai5_widget_pane_g

0xe811,	// (0x0003b040) cell_ai5_widget_pane_t10_ParamLimits

0xe811,	// (0x0003b040) cell_ai5_widget_pane_t10

0xe827,	// (0x0003b056) grid_ai5_widget_pane_ParamLimits

0xe8c8,	// (0x0003b0f7) cell_contacts_ai5_widget_pane_ParamLimits

0xe8c8,	// (0x0003b0f7) cell_contacts_ai5_widget_pane

0xeaa8,	// (0x0003b2d7) popup_discreet_window_t3_ParamLimits

0xeaa8,	// (0x0003b2d7) popup_discreet_window_t3

0xeb37,	// (0x0003b366) popup_fshwr2_char_preview_window_ParamLimits

0xeb37,	// (0x0003b366) popup_fshwr2_char_preview_window

0xecf6,	// (0x0003b525) tmo_note_info_pane_t1

0xed0b,	// (0x0003b53a) tmo_note_info_pane_t2

0xed24,	// (0x0003b553) tmo_note_info_pane_t3

0xed39,	// (0x0003b568) tmo_note_info_pane_t4

0xed4b,	// (0x0003b57a) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0003c6f4) tmo_note_info_pane_t

0xed5d,	// (0x0003b58c) list_tmo_link_pane_ParamLimits

0xed6a,	// (0x0003b599) scroll_pane_cp20_ParamLimits

0x331c,	// (0x0002fb4b) bg_popup_fep_char_preview_window_cp01

0xedae,	// (0x0003b5dd) popup_fshwr2_char_preview_window_t1

0xedbc,	// (0x0003b5eb) popup_candi_list_indi_window_g1

0xedc5,	// (0x0003b5f4) bg_cell_contacts_ai5_widget_pane

0xedd1,	// (0x0003b600) cell_contacts_ai5_widget_pane_g1

0xede5,	// (0x0003b614) cell_contacts_ai5_widget_pane_g2

0xedf4,	// (0x0003b623) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0003c6ff) cell_contacts_ai5_widget_pane_g

0xee07,	// (0x0003b636) cell_contacts_ai5_widget_pane_t1

0x7dcc,	// (0x000345fb) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee81,	// (0x0003b6b0) settings_container_pane

0x8bfe,	// (0x0003542d) listscroll_set_pane_copy1

0xb83f,	// (0x0003806e) scroll_pane_cp121_copy1

0xee8d,	// (0x0003b6bc) set_content_pane_copy1

0xee95,	// (0x0003b6c4) aid_height_set_list_copy1_ParamLimits

0xee95,	// (0x0003b6c4) aid_height_set_list_copy1

0xaece,	// (0x000376fd) aid_size_parent_copy1_ParamLimits

0xaece,	// (0x000376fd) aid_size_parent_copy1

0xeea1,	// (0x0003b6d0) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeea1,	// (0x0003b6d0) button_value_adjust_pane_cp6_copy1

0x8f84,	// (0x000357b3) list_highlight_pane_cp2_copy1_ParamLimits

0x8f84,	// (0x000357b3) list_highlight_pane_cp2_copy1

0xeeb5,	// (0x0003b6e4) list_set_pane_copy1_ParamLimits

0xeeb5,	// (0x0003b6e4) list_set_pane_copy1

0xee1c,	// (0x0003b64b) main_pane_set_t1_copy1_ParamLimits

0xee1c,	// (0x0003b64b) main_pane_set_t1_copy1

0xee56,	// (0x0003b685) main_pane_set_t2_copy1_ParamLimits

0xee56,	// (0x0003b685) main_pane_set_t2_copy1

0xef7c,	// (0x0003b7ab) main_pane_set_t3_copy1

0xef8a,	// (0x0003b7b9) main_pane_set_t4_copy1

0xee75,	// (0x0003b6a4) set_content_pane_g1_copy1_ParamLimits

0xee75,	// (0x0003b6a4) set_content_pane_g1_copy1

0xef98,	// (0x0003b7c7) setting_code_pane_copy1

0xefa2,	// (0x0003b7d1) setting_slider_graphic_pane_copy1

0xefa2,	// (0x0003b7d1) setting_slider_pane_copy1

0xefa2,	// (0x0003b7d1) setting_text_pane_copy1

0xefac,	// (0x0003b7db) setting_volume_pane_copy1

0xefb5,	// (0x0003b7e4) settings_code_pane_cp2_copy1

0xefbd,	// (0x0003b7ec) settings_code_pane_cp_copy1_ParamLimits

0xefbd,	// (0x0003b7ec) settings_code_pane_cp_copy1

0xefd1,	// (0x0003b800) volume_set_pane_copy1

0xefdd,	// (0x0003b80c) volume_set_pane_g10_copy1

0xefe9,	// (0x0003b818) volume_set_pane_g1_copy1

0xeff3,	// (0x0003b822) volume_set_pane_g2_copy1

0xeffd,	// (0x0003b82c) volume_set_pane_g3_copy1

0xf007,	// (0x0003b836) volume_set_pane_g4_copy1

0xf011,	// (0x0003b840) volume_set_pane_g5_copy1

0xf01b,	// (0x0003b84a) volume_set_pane_g6_copy1

0xf025,	// (0x0003b854) volume_set_pane_g7_copy1

0xf02f,	// (0x0003b85e) volume_set_pane_g8_copy1

0xf039,	// (0x0003b868) volume_set_pane_g9_copy1

0x7545,	// (0x00033d74) bg_set_opt_pane_cp_copy1_ParamLimits

0x7545,	// (0x00033d74) bg_set_opt_pane_cp_copy1

0xf043,	// (0x0003b872) setting_slider_pane_t1_copy1_ParamLimits

0xf043,	// (0x0003b872) setting_slider_pane_t1_copy1

0xf061,	// (0x0003b890) setting_slider_pane_t2_copy1_ParamLimits

0xf061,	// (0x0003b890) setting_slider_pane_t2_copy1

0xf07b,	// (0x0003b8aa) setting_slider_pane_t3_copy1_ParamLimits

0xf07b,	// (0x0003b8aa) setting_slider_pane_t3_copy1

0xf093,	// (0x0003b8c2) slider_set_pane_copy1_ParamLimits

0xf093,	// (0x0003b8c2) slider_set_pane_copy1

0x7e33,	// (0x00034662) set_opt_bg_pane_g1_copy2

0x7e3b,	// (0x0003466a) set_opt_bg_pane_g2_copy2

0xf0a9,	// (0x0003b8d8) set_opt_bg_pane_g3_copy2

0x7e4b,	// (0x0003467a) set_opt_bg_pane_g4_copy2

0x7e53,	// (0x00034682) set_opt_bg_pane_g5_copy2

0x7e5b,	// (0x0003468a) set_opt_bg_pane_g6_copy2

0xf0b3,	// (0x0003b8e2) set_opt_bg_pane_g7_copy2

0xf0bd,	// (0x0003b8ec) set_opt_bg_pane_g8_copy2

0xf0c7,	// (0x0003b8f6) set_opt_bg_pane_g9_copy2

0x742d,	// (0x00033c5c) aid_size_touch_slider_mark_copy1_ParamLimits

0x742d,	// (0x00033c5c) aid_size_touch_slider_mark_copy1

0xf0d1,	// (0x0003b900) slider_set_pane_g1_copy1

0x7441,	// (0x00033c70) slider_set_pane_g2_copy1

0x60f2,	// (0x00032921) slider_set_pane_g3_copy1_ParamLimits

0x60f2,	// (0x00032921) slider_set_pane_g3_copy1

0x6106,	// (0x00032935) slider_set_pane_g4_copy1_ParamLimits

0x6106,	// (0x00032935) slider_set_pane_g4_copy1

0x611e,	// (0x0003294d) slider_set_pane_g5_copy1_ParamLimits

0x611e,	// (0x0003294d) slider_set_pane_g5_copy1

0x60f2,	// (0x00032921) slider_set_pane_g6_copy1_ParamLimits

0x60f2,	// (0x00032921) slider_set_pane_g6_copy1

0x7449,	// (0x00033c78) slider_set_pane_g7_copy1_ParamLimits

0x7449,	// (0x00033c78) slider_set_pane_g7_copy1

0x3330,	// (0x0002fb5f) bg_set_opt_pane_cp2_copy1

0xf0da,	// (0x0003b909) setting_slider_graphic_pane_g1_copy1

0xf0e3,	// (0x0003b912) setting_slider_graphic_pane_t1_copy1

0xf0f3,	// (0x0003b922) setting_slider_graphic_pane_t2_copy1

0xf103,	// (0x0003b932) slider_set_pane_cp_copy1

0xf113,	// (0x0003b942) input_focus_pane_cp1_copy1

0xf11c,	// (0x0003b94b) list_set_text_pane_copy1

0xf124,	// (0x0003b953) setting_text_pane_g1_copy1

0x82d9,	// (0x00034b08) set_text_pane_t1_copy1

0xf113,	// (0x0003b942) input_focus_pane_cp2_copy1

0xf124,	// (0x0003b953) setting_code_pane_g1_copy1

0xf12d,	// (0x0003b95c) setting_code_pane_t1_copy1

0xf13b,	// (0x0003b96a) list_set_graphic_pane_copy1

0x3330,	// (0x0002fb5f) bg_set_opt_pane_cp4_copy1

0x88f8,	// (0x00035127) list_set_graphic_pane_g1_copy1_ParamLimits

0x88f8,	// (0x00035127) list_set_graphic_pane_g1_copy1

0xf14d,	// (0x0003b97c) list_set_graphic_pane_g2_copy1

0x8910,	// (0x0003513f) list_set_graphic_pane_t1_copy1_ParamLimits

0x8910,	// (0x0003513f) list_set_graphic_pane_t1_copy1

0xc084,	// (0x000388b3) rs_clock_indi_pane_g1

0xf155,	// (0x0003b984) rs_clock_indi_pane_t1

0xf163,	// (0x0003b992) rs_indi_pane

0xf16b,	// (0x0003b99a) rs_indi_pane_g1

0xf174,	// (0x0003b9a3) rs_indi_pane_g2

0xf17d,	// (0x0003b9ac) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0003c706) rs_indi_pane_g

0x8bfe,	// (0x0003542d) bg_popup_preview_window_pane_cp03

0xf186,	// (0x0003b9b5) popup_fep_tooltip_window_t1

0xcd2a,	// (0x00039559) popup_note2_window_g2_ParamLimits

0xcd2a,	// (0x00039559) popup_note2_window_g2

0x0001,

0xfc70,	// (0x0003c49f) popup_note2_window_g_ParamLimits

0xfc70,	// (0x0003c49f) popup_note2_window_g

0xd232,	// (0x00039a61) bg_popup_sub_pane_cp11_ParamLimits

0xd23f,	// (0x00039a6e) cell_ai3_links_pane_g1_ParamLimits

0xd256,	// (0x00039a85) cell_ai3_links_pane_t1

0x82d9,	// (0x00034b08) set_text_pane_t1_copy1_ParamLimits

0x8b0b,	// (0x0003533a) cell_graphic_popup_pane_cp2_ParamLimits

0x8b0b,	// (0x0003533a) cell_graphic_popup_pane_cp2

0xf194,	// (0x0003b9c3) cell_graphic_popup_pane_g1_cp2

0x7b17,	// (0x00034346) cell_graphic_popup_pane_g2_cp2

0xf19c,	// (0x0003b9cb) cell_graphic_popup_pane_g3_cp2

0xf1a4,	// (0x0003b9d3) cell_graphic_popup_pane_t2_cp2

0x7b28,	// (0x00034357) grid_highlight_pane_cp3_cp2

0x8328,	// (0x00034b57) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7dcc,	// (0x000345fb) main_tmo_pane_ParamLimits

0xd576,	// (0x00039da5) popup_tmo_big_image_note_window

0xe671,	// (0x0003aea0) cell_ai5_widget_list_pane

0xe679,	// (0x0003aea8) cell_ai5_widget_lrg_icon_pane

0xecf6,	// (0x0003b525) tmo_note_info_pane_t1_ParamLimits

0xed0b,	// (0x0003b53a) tmo_note_info_pane_t2_ParamLimits

0xed24,	// (0x0003b553) tmo_note_info_pane_t3_ParamLimits

0xed39,	// (0x0003b568) tmo_note_info_pane_t4_ParamLimits

0xed4b,	// (0x0003b57a) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0003c6f4) tmo_note_info_pane_t_ParamLimits

0xee81,	// (0x0003b6b0) settings_container_pane_ParamLimits

0xf10b,	// (0x0003b93a) indicator_popup_pane_cp5

0xf10b,	// (0x0003b93a) indicator_popup_pane_cp6

0xf13b,	// (0x0003b96a) list_set_graphic_pane_copy1_ParamLimits

0x331c,	// (0x0002fb4b) bg_popup_window_pane_cp23

0xf1b2,	// (0x0003b9e1) popup_tmo_big_image_note_window_g1

0xf1be,	// (0x0003b9ed) popup_tmo_big_image_note_window_t1

0xf1ce,	// (0x0003b9fd) popup_tmo_big_image_note_window_t2

0xf1de,	// (0x0003ba0d) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0003c70d) popup_tmo_big_image_note_window_t

0xf1ee,	// (0x0003ba1d) cell_ai5_widget_lrg_icon_pane_g1

0xf1f6,	// (0x0003ba25) cell_ai5_widget_lrg_icon_pane_t1

0xf204,	// (0x0003ba33) cell_ai5_widget_list_row_pane_ParamLimits

0xf204,	// (0x0003ba33) cell_ai5_widget_list_row_pane

0xf21d,	// (0x0003ba4c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf21d,	// (0x0003ba4c) cell_ai5_widget_list_row_pane_g1

0xf22a,	// (0x0003ba59) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf22a,	// (0x0003ba59) cell_ai5_widget_list_row_pane_t1

0xf242,	// (0x0003ba71) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf242,	// (0x0003ba71) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee5,	// (0x0003c714) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0003c714) cell_ai5_widget_list_row_pane_t

0x4c7a,	// (0x000314a9) main_fep_vtchi_ss_pane

0xf254,	// (0x0003ba83) popup_fep_char_pre_window

0xf25c,	// (0x0003ba8b) popup_fep_ituss_window

0xf276,	// (0x0003baa5) popup_fep_vkbss_window

0xf296,	// (0x0003bac5) grid_vkbss_keypad_pane_ParamLimits

0xf296,	// (0x0003bac5) grid_vkbss_keypad_pane

0xf2a6,	// (0x0003bad5) ituss_keypad_pane

0xf2bc,	// (0x0003baeb) aid_vkbss_key_offset_ParamLimits

0xf2bc,	// (0x0003baeb) aid_vkbss_key_offset

0xf2c8,	// (0x0003baf7) cell_vkbss_key_pane_ParamLimits

0xf2c8,	// (0x0003baf7) cell_vkbss_key_pane

0xf2de,	// (0x0003bb0d) bg_cell_vkbss_key_g1_ParamLimits

0xf2de,	// (0x0003bb0d) bg_cell_vkbss_key_g1

0xf2ea,	// (0x0003bb19) cell_vkbss_key_3p_pane_ParamLimits

0xf2ea,	// (0x0003bb19) cell_vkbss_key_3p_pane

0xf304,	// (0x0003bb33) cell_vkbss_key_g1_ParamLimits

0xf304,	// (0x0003bb33) cell_vkbss_key_g1

0xf31e,	// (0x0003bb4d) cell_vkbss_key_t1_ParamLimits

0xf31e,	// (0x0003bb4d) cell_vkbss_key_t1

0xf349,	// (0x0003bb78) cell_ituss_key_pane_ParamLimits

0xf349,	// (0x0003bb78) cell_ituss_key_pane

0xf359,	// (0x0003bb88) bg_cell_ituss_key_g1_ParamLimits

0xf359,	// (0x0003bb88) bg_cell_ituss_key_g1

0xf365,	// (0x0003bb94) cell_ituss_key_pane_g1_ParamLimits

0xf365,	// (0x0003bb94) cell_ituss_key_pane_g1

0xf371,	// (0x0003bba0) cell_ituss_key_pane_g2_ParamLimits

0xf371,	// (0x0003bba0) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x0003c719) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0003c719) cell_ituss_key_pane_g

0xf38a,	// (0x0003bbb9) cell_ituss_key_t1_ParamLimits

0xf38a,	// (0x0003bbb9) cell_ituss_key_t1

0xf3b8,	// (0x0003bbe7) cell_ituss_key_t2_ParamLimits

0xf3b8,	// (0x0003bbe7) cell_ituss_key_t2

0xf3e9,	// (0x0003bc18) cell_ituss_key_t3_ParamLimits

0xf3e9,	// (0x0003bc18) cell_ituss_key_t3

0xf41a,	// (0x0003bc49) cell_ituss_key_t4_ParamLimits

0xf41a,	// (0x0003bc49) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0003c71e) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0003c71e) cell_ituss_key_t

0xf44b,	// (0x0003bc7a) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x0003bc82) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x0003bc8a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0003c727) cell_vkbss_key_3p_pane_g

0x331c,	// (0x0002fb4b) bg_popup_fep_char_preview_window_cp02

0xf463,	// (0x0003bc92) popup_fep_char_pre_window_t1

0xe647,	// (0x0003ae76) main_ai5_sk_pane

0xedc5,	// (0x0003b5f4) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xedd1,	// (0x0003b600) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xede5,	// (0x0003b614) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedf4,	// (0x0003b623) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0003c6ff) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee07,	// (0x0003b636) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7dcc,	// (0x000345fb) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf472,	// (0x0003bca1) main_ai5_sk_pane_g1

0x9f73,	// (0x000367a2) popup_query_code_window_g1

0xf26b,	// (0x0003ba9a) popup_fep_vkb_icf_pane

0xf281,	// (0x0003bab0) popup_fep_vtchi_icf_pane

0x7dcc,	// (0x000345fb) bg_icf_pane

0xf48a,	// (0x0003bcb9) list_vkb_icf_pane

0x7dcc,	// (0x000345fb) bg_icf_pane_cp01

0xf4a2,	// (0x0003bcd1) vtchi_icf_list_pane

0xf4b2,	// (0x0003bce1) list_vkb_icf_pane_t1_ParamLimits

0xf4b2,	// (0x0003bce1) list_vkb_icf_pane_t1

0xf4c9,	// (0x0003bcf8) vtchi_icf_list_pane_t1_ParamLimits

0xf4c9,	// (0x0003bcf8) vtchi_icf_list_pane_t1

0xf25c,	// (0x0003ba8b) popup_fep_ituss_window_ParamLimits

0xf281,	// (0x0003bab0) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a6,	// (0x0003bad5) ituss_keypad_pane_ParamLimits

0xf2b2,	// (0x0003bae1) ituss_sks_pane

0x7dcc,	// (0x000345fb) bg_icf_pane_ParamLimits

0xf47b,	// (0x0003bcaa) icf_edit_indi_pane_ParamLimits

0xf47b,	// (0x0003bcaa) icf_edit_indi_pane

0xf48a,	// (0x0003bcb9) list_vkb_icf_pane_ParamLimits

0x7dcc,	// (0x000345fb) bg_icf_pane_cp01_ParamLimits

0xf496,	// (0x0003bcc5) icf_edit_indi_pane_cp01_ParamLimits

0xf496,	// (0x0003bcc5) icf_edit_indi_pane_cp01

0xf4aa,	// (0x0003bcd9) vtchi_query_pane

0xc30e,	// (0x00038b3d) icf_edit_indi_pane_g1_ParamLimits

0xc30e,	// (0x00038b3d) icf_edit_indi_pane_g1

0xf4e2,	// (0x0003bd11) icf_edit_indi_pane_g2_ParamLimits

0xf4e2,	// (0x0003bd11) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0003c72e) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0003c72e) icf_edit_indi_pane_g

0xf4ee,	// (0x0003bd1d) icf_edit_indi_pane_t1

0xf4fc,	// (0x0003bd2b) bg_input_focus_pane_cp042

0x7cfb,	// (0x0003452a) vtchi_button_pane

0xf505,	// (0x0003bd34) vtchi_query_pane_t1

0xf513,	// (0x0003bd42) vtchi_query_pane_t2

0xf521,	// (0x0003bd50) vtchi_query_pane_t3

0x0002,

0xff04,	// (0x0003c733) vtchi_query_pane_t

0x331c,	// (0x0002fb4b) bg_button_pane_cp13

0xf52f,	// (0x0003bd5e) vtchi_button_pane_g1

0xf537,	// (0x0003bd66) ituss_sks_pane_g1

0xf542,	// (0x0003bd71) ituss_sks_pane_g2

0x0001,

0xff0b,	// (0x0003c73a) ituss_sks_pane_g

0xf54a,	// (0x0003bd79) ituss_sks_pane_t1

0xf558,	// (0x0003bd87) ituss_sks_pane_t2

0x0001,

0xff10,	// (0x0003c73f) ituss_sks_pane_t

0xbba1,	// (0x000383d0) indicator_nsta_pane_cp_g1

0xbbaa,	// (0x000383d9) indicator_nsta_pane_cp_g2

0xbbb2,	// (0x000383e1) indicator_nsta_pane_cp_g3

0xbbba,	// (0x000383e9) indicator_nsta_pane_cp_g4

0xbbc2,	// (0x000383f1) indicator_nsta_pane_cp_g5

0xbbca,	// (0x000383f9) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0003c2dd) indicator_nsta_pane_cp_g

0xe258,	// (0x0003aa87) cell_graphic2_pane_t2_ParamLimits

0xe258,	// (0x0003aa87) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0003c5f6) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0003c5f6) cell_graphic2_pane_t

0xe285,	// (0x0003aab4) cell_graphic2_control_pane_t1

0x86ab,	// (0x00034eda) signal_pane_g3_ParamLimits

0x86ab,	// (0x00034eda) signal_pane_g3

0x86bd,	// (0x00034eec) signal_pane_g4_ParamLimits

0x86bd,	// (0x00034eec) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small

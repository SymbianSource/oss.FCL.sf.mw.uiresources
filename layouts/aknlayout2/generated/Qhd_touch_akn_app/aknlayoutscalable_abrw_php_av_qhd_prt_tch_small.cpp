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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002abef };

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
0x7676,	// (0x00032265) Screen

0x768a,	// (0x00032279) application_window_ParamLimits

0x768a,	// (0x00032279) application_window

0x76a4,	// (0x00032293) screen_g1

0x4927,	// (0x0002f516) area_bottom_pane_ParamLimits

0x4927,	// (0x0002f516) area_bottom_pane

0x49e7,	// (0x0002f5d6) area_top_pane_ParamLimits

0x49e7,	// (0x0002f5d6) area_top_pane

0x4a85,	// (0x0002f674) main_pane_ParamLimits

0x4a85,	// (0x0002f674) main_pane

0x76ae,	// (0x0003229d) misc_graphics

0x9818,	// (0x00034407) battery_pane_ParamLimits

0x9818,	// (0x00034407) battery_pane

0xa4de,	// (0x000350cd) bg_status_flat_pane_g8

0xa4e6,	// (0x000350d5) bg_status_flat_pane_g9

0x98da,	// (0x000344c9) context_pane_ParamLimits

0x98da,	// (0x000344c9) context_pane

0x99f0,	// (0x000345df) navi_pane_ParamLimits

0x99f0,	// (0x000345df) navi_pane

0x9a74,	// (0x00034663) signal_pane_ParamLimits

0x9a74,	// (0x00034663) signal_pane

0x0008,

0xf879,	// (0x0003a468) bg_status_flat_pane_g

0x9ae1,	// (0x000346d0) status_pane_g1_ParamLimits

0x9ae1,	// (0x000346d0) status_pane_g1

0x9af5,	// (0x000346e4) status_pane_g2_ParamLimits

0x9af5,	// (0x000346e4) status_pane_g2

0x9b01,	// (0x000346f0) status_pane_g3_ParamLimits

0x9b01,	// (0x000346f0) status_pane_g3

0x0004,

0xf7a0,	// (0x0003a38f) status_pane_g_ParamLimits

0xf7a0,	// (0x0003a38f) status_pane_g

0x9b35,	// (0x00034724) title_pane_ParamLimits

0x9b35,	// (0x00034724) title_pane

0x9b72,	// (0x00034761) uni_indicator_pane_ParamLimits

0x9b72,	// (0x00034761) uni_indicator_pane

0x973c,	// (0x0003432b) bg_list_pane_ParamLimits

0x973c,	// (0x0003432b) bg_list_pane

0x5af5,	// (0x000306e4) find_pane

0x975c,	// (0x0003434b) listscroll_app_pane_ParamLimits

0x975c,	// (0x0003434b) listscroll_app_pane

0x9768,	// (0x00034357) listscroll_form_pane

0x485d,	// (0x0002f44c) listscroll_gen_pane_ParamLimits

0x485d,	// (0x0002f44c) listscroll_gen_pane

0x5afd,	// (0x000306ec) listscroll_set_pane

0x8992,	// (0x00033581) main_idle_act_pane

0x9444,	// (0x00034033) main_idle_trad_pane

0x9444,	// (0x00034033) main_list_empty_pane

0x9782,	// (0x00034371) main_midp_pane

0x978e,	// (0x0003437d) main_pane_g1_ParamLimits

0x978e,	// (0x0003437d) main_pane_g1

0x5b13,	// (0x00030702) popup_ai_message_window_ParamLimits

0x5b13,	// (0x00030702) popup_ai_message_window

0x5bc1,	// (0x000307b0) popup_fep_china_uni_window_ParamLimits

0x5bc1,	// (0x000307b0) popup_fep_china_uni_window

0x5c1d,	// (0x0003080c) popup_fep_japan_candidate_window_ParamLimits

0x5c1d,	// (0x0003080c) popup_fep_japan_candidate_window

0x5c3d,	// (0x0003082c) popup_fep_japan_predictive_window_ParamLimits

0x5c3d,	// (0x0003082c) popup_fep_japan_predictive_window

0x5c6d,	// (0x0003085c) popup_find_window

0x5c7a,	// (0x00030869) popup_grid_graphic_window_ParamLimits

0x5c7a,	// (0x00030869) popup_grid_graphic_window

0x5ca4,	// (0x00030893) popup_large_graphic_colour_window

0x5cca,	// (0x000308b9) popup_menu_window_ParamLimits

0x5cca,	// (0x000308b9) popup_menu_window

0x5e82,	// (0x00030a71) popup_note_image_window

0x5e6e,	// (0x00030a5d) popup_note_wait_window_ParamLimits

0x5e6e,	// (0x00030a5d) popup_note_wait_window

0x5e6e,	// (0x00030a5d) popup_note_window_ParamLimits

0x5e6e,	// (0x00030a5d) popup_note_window

0x5ed8,	// (0x00030ac7) popup_query_code_window_ParamLimits

0x5ed8,	// (0x00030ac7) popup_query_code_window

0x5eec,	// (0x00030adb) popup_query_data_code_window_ParamLimits

0x5eec,	// (0x00030adb) popup_query_data_code_window

0x5f09,	// (0x00030af8) popup_query_data_window_ParamLimits

0x5f09,	// (0x00030af8) popup_query_data_window

0x5f25,	// (0x00030b14) popup_query_sat_info_window_ParamLimits

0x5f25,	// (0x00030b14) popup_query_sat_info_window

0x5f5e,	// (0x00030b4d) popup_snote_single_graphic_window_ParamLimits

0x5f5e,	// (0x00030b4d) popup_snote_single_graphic_window

0x5f5e,	// (0x00030b4d) popup_snote_single_text_window_ParamLimits

0x5f5e,	// (0x00030b4d) popup_snote_single_text_window

0x5f73,	// (0x00030b62) popup_sub_window_general

0x60a3,	// (0x00030c92) popup_window_general_ParamLimits

0x60a3,	// (0x00030c92) popup_window_general

0x979c,	// (0x0003438b) power_save_pane

0x5991,	// (0x00030580) control_pane_g1_ParamLimits

0x5991,	// (0x00030580) control_pane_g1

0x59b8,	// (0x000305a7) control_pane_g2_ParamLimits

0x59b8,	// (0x000305a7) control_pane_g2

0x96ff,	// (0x000342ee) control_pane_g3_ParamLimits

0x96ff,	// (0x000342ee) control_pane_g3

0x0007,

0xf788,	// (0x0003a377) control_pane_g_ParamLimits

0xf788,	// (0x0003a377) control_pane_g

0x5a02,	// (0x000305f1) control_pane_t1_ParamLimits

0x5a02,	// (0x000305f1) control_pane_t1

0x5a4e,	// (0x0003063d) control_pane_t2_ParamLimits

0x5a4e,	// (0x0003063d) control_pane_t2

0x0002,

0xf799,	// (0x0003a388) control_pane_t_ParamLimits

0xf799,	// (0x0003a388) control_pane_t

0x9624,	// (0x00034213) navi_navi_volume_pane_cp1

0x962c,	// (0x0003421b) status_small_icon_pane

0x9634,	// (0x00034223) status_small_pane_g1_ParamLimits

0x9634,	// (0x00034223) status_small_pane_g1

0x9668,	// (0x00034257) status_small_pane_g2_ParamLimits

0x9668,	// (0x00034257) status_small_pane_g2

0x9674,	// (0x00034263) status_small_pane_g3_ParamLimits

0x9674,	// (0x00034263) status_small_pane_g3

0x9680,	// (0x0003426f) status_small_pane_g4_ParamLimits

0x9680,	// (0x0003426f) status_small_pane_g4

0x968c,	// (0x0003427b) status_small_pane_g5_ParamLimits

0x968c,	// (0x0003427b) status_small_pane_g5

0x969a,	// (0x00034289) status_small_pane_g6_ParamLimits

0x969a,	// (0x00034289) status_small_pane_g6

0x0007,

0xf777,	// (0x0003a366) status_small_pane_g_ParamLimits

0xf777,	// (0x0003a366) status_small_pane_g

0x96c9,	// (0x000342b8) status_small_pane_t1

0x96eb,	// (0x000342da) status_small_wait_pane_ParamLimits

0x96eb,	// (0x000342da) status_small_wait_pane

0x8eb6,	// (0x00033aa5) aid_levels_signal_ParamLimits

0x8eb6,	// (0x00033aa5) aid_levels_signal

0x8ec8,	// (0x00033ab7) signal_pane_g1_ParamLimits

0x8ec8,	// (0x00033ab7) signal_pane_g1

0x8edd,	// (0x00033acc) signal_pane_g2_ParamLimits

0x8edd,	// (0x00033acc) signal_pane_g2

0x0003,

0xf708,	// (0x0003a2f7) signal_pane_g_ParamLimits

0xf708,	// (0x0003a2f7) signal_pane_g

0x8f18,	// (0x00033b07) context_pane_g1

0x76b8,	// (0x000322a7) title_pane_g1

0x76ee,	// (0x000322dd) title_pane_t1

0x7756,	// (0x00032345) title_pane_t2

0x777c,	// (0x0003236b) title_pane_t3

0x0002,

0xf557,	// (0x0003a146) title_pane_t

0x9b8a,	// (0x00034779) aid_levels_battery_ParamLimits

0x9b8a,	// (0x00034779) aid_levels_battery

0x9b9e,	// (0x0003478d) battery_pane_g1_ParamLimits

0x9b9e,	// (0x0003478d) battery_pane_g1

0x9bb4,	// (0x000347a3) battery_pane_g2_ParamLimits

0x9bb4,	// (0x000347a3) battery_pane_g2

0x0001,

0xf7ab,	// (0x0003a39a) battery_pane_g_ParamLimits

0xf7ab,	// (0x0003a39a) battery_pane_g

0xae20,	// (0x00035a0f) uni_indicator_pane_g1

0xae36,	// (0x00035a25) uni_indicator_pane_g2

0xae4c,	// (0x00035a3b) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0003a510) uni_indicator_pane_g

0x92b6,	// (0x00033ea5) navi_icon_pane_ParamLimits

0x92b6,	// (0x00033ea5) navi_icon_pane

0x91f4,	// (0x00033de3) navi_midp_pane

0x92d2,	// (0x00033ec1) navi_navi_pane

0x92dc,	// (0x00033ecb) navi_text_pane_ParamLimits

0x92dc,	// (0x00033ecb) navi_text_pane

0x76a4,	// (0x00032293) status_small_wait_pane_g1

0x835c,	// (0x00032f4b) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0003a50b) status_small_wait_pane_g

0xab45,	// (0x00035734) navi_navi_icon_text_pane

0xab4d,	// (0x0003573c) navi_navi_pane_g1_ParamLimits

0xab4d,	// (0x0003573c) navi_navi_pane_g1

0xab5f,	// (0x0003574e) navi_navi_pane_g2_ParamLimits

0xab5f,	// (0x0003574e) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0003a4d9) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0003a4d9) navi_navi_pane_g

0xab71,	// (0x00035760) navi_navi_tabs_pane

0xab7a,	// (0x00035769) navi_navi_text_pane

0xab45,	// (0x00035734) navi_navi_volume_pane

0xab21,	// (0x00035710) navi_text_pane_t1

0xab15,	// (0x00035704) navi_icon_pane_g1

0xaa68,	// (0x00035657) navi_navi_text_pane_t1

0x6474,	// (0x00031063) navi_navi_volume_pane_g1

0x647c,	// (0x0003106b) volume_small_pane

0xa9c2,	// (0x000355b1) navi_navi_icon_text_pane_g1

0xa9ca,	// (0x000355b9) navi_navi_icon_text_pane_t1

0x92d2,	// (0x00033ec1) navi_tabs_2_long_pane

0x92d2,	// (0x00033ec1) navi_tabs_2_pane

0x92d2,	// (0x00033ec1) navi_tabs_3_long_pane

0x92d2,	// (0x00033ec1) navi_tabs_3_pane

0x92d2,	// (0x00033ec1) navi_tabs_4_pane

0x6454,	// (0x00031043) tabs_2_active_pane_ParamLimits

0x6454,	// (0x00031043) tabs_2_active_pane

0x6464,	// (0x00031053) tabs_2_passive_pane_ParamLimits

0x6464,	// (0x00031053) tabs_2_passive_pane

0x6422,	// (0x00031011) tabs_3_active_pane_ParamLimits

0x6422,	// (0x00031011) tabs_3_active_pane

0x6432,	// (0x00031021) tabs_3_passive_pane_ParamLimits

0x6432,	// (0x00031021) tabs_3_passive_pane

0x6443,	// (0x00031032) tabs_3_passive_pane_cp_ParamLimits

0x6443,	// (0x00031032) tabs_3_passive_pane_cp

0x63de,	// (0x00030fcd) tabs_4_active_pane_ParamLimits

0x63de,	// (0x00030fcd) tabs_4_active_pane

0x63ef,	// (0x00030fde) tabs_4_passive_pane_ParamLimits

0x63ef,	// (0x00030fde) tabs_4_passive_pane

0x6400,	// (0x00030fef) tabs_4_passive_pane_cp_ParamLimits

0x6400,	// (0x00030fef) tabs_4_passive_pane_cp

0x6411,	// (0x00031000) tabs_4_passive_pane_cp2_ParamLimits

0x6411,	// (0x00031000) tabs_4_passive_pane_cp2

0x63ba,	// (0x00030fa9) tabs_2_long_active_pane_ParamLimits

0x63ba,	// (0x00030fa9) tabs_2_long_active_pane

0x63cc,	// (0x00030fbb) tabs_2_long_passive_pane_ParamLimits

0x63cc,	// (0x00030fbb) tabs_2_long_passive_pane

0x637b,	// (0x00030f6a) tabs_3_long_active_pane_ParamLimits

0x637b,	// (0x00030f6a) tabs_3_long_active_pane

0x638e,	// (0x00030f7d) tabs_3_long_passive_pane_ParamLimits

0x638e,	// (0x00030f7d) tabs_3_long_passive_pane

0x63a7,	// (0x00030f96) tabs_3_long_passive_pane_cp_ParamLimits

0x63a7,	// (0x00030f96) tabs_3_long_passive_pane_cp

0x6321,	// (0x00030f10) volume_small_pane_g1

0x632a,	// (0x00030f19) volume_small_pane_g2

0x6333,	// (0x00030f22) volume_small_pane_g3

0x633c,	// (0x00030f2b) volume_small_pane_g4

0x6345,	// (0x00030f34) volume_small_pane_g5

0x634e,	// (0x00030f3d) volume_small_pane_g6

0x6357,	// (0x00030f46) volume_small_pane_g7

0x6360,	// (0x00030f4f) volume_small_pane_g8

0x6369,	// (0x00030f58) volume_small_pane_g9

0x6372,	// (0x00030f61) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0003a4a5) volume_small_pane_g

0x778e,	// (0x0003237d) bg_active_tab_pane_cp2_ParamLimits

0x778e,	// (0x0003237d) bg_active_tab_pane_cp2

0x779c,	// (0x0003238b) tabs_3_active_pane_g1

0x77a4,	// (0x00032393) tabs_3_active_pane_t1

0x778e,	// (0x0003237d) bg_passive_tab_pane_cp2_ParamLimits

0x778e,	// (0x0003237d) bg_passive_tab_pane_cp2

0x779c,	// (0x0003238b) tabs_3_passive_pane_g1

0x77a4,	// (0x00032393) tabs_3_passive_pane_t1

0x778e,	// (0x0003237d) bg_active_tab_pane_cp3_ParamLimits

0x778e,	// (0x0003237d) bg_active_tab_pane_cp3

0x77b6,	// (0x000323a5) tabs_4_active_pane_g1

0x77be,	// (0x000323ad) tabs_4_active_pane_t1

0x778e,	// (0x0003237d) bg_passive_tab_pane_cp3_ParamLimits

0x778e,	// (0x0003237d) bg_passive_tab_pane_cp3

0x77b6,	// (0x000323a5) tabs_4_1_passive_pane_g1

0x77be,	// (0x000323ad) tabs_4_1_passive_pane_t1

0x9782,	// (0x00034371) list_highlight_pane_cp2

0xb094,	// (0x00035c83) list_set_pane_ParamLimits

0xb094,	// (0x00035c83) list_set_pane

0xb13a,	// (0x00035d29) main_pane_set_t1_ParamLimits

0xb13a,	// (0x00035d29) main_pane_set_t1

0xb15a,	// (0x00035d49) main_pane_set_t2_ParamLimits

0xb15a,	// (0x00035d49) main_pane_set_t2

0xb16e,	// (0x00035d5d) main_pane_set_t3_ParamLimits

0xb16e,	// (0x00035d5d) main_pane_set_t3

0xb180,	// (0x00035d6f) main_pane_set_t4_ParamLimits

0xb180,	// (0x00035d6f) main_pane_set_t4

0x0003,

0xf986,	// (0x0003a575) main_pane_set_t_ParamLimits

0xf986,	// (0x0003a575) main_pane_set_t

0xb192,	// (0x00035d81) setting_code_pane

0xb19e,	// (0x00035d8d) setting_slider_graphic_pane

0xb19e,	// (0x00035d8d) setting_slider_pane

0xb19e,	// (0x00035d8d) setting_text_pane

0xb19e,	// (0x00035d8d) setting_volume_pane

0x4cd4,	// (0x0002f8c3) volume_set_pane

0x778e,	// (0x0003237d) bg_set_opt_pane_cp

0x4cdc,	// (0x0002f8cb) setting_slider_pane_t1

0x4cf5,	// (0x0002f8e4) setting_slider_pane_t2

0x4d0f,	// (0x0002f8fe) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003a14d) setting_slider_pane_t

0x4d27,	// (0x0002f916) slider_set_pane

0x76ae,	// (0x0003229d) bg_set_opt_pane_cp2

0x77d0,	// (0x000323bf) setting_slider_graphic_pane_g1

0x4d3d,	// (0x0002f92c) setting_slider_graphic_pane_t1

0x4d4d,	// (0x0002f93c) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003a154) setting_slider_graphic_pane_t

0x4d5d,	// (0x0002f94c) slider_set_pane_cp

0x76ae,	// (0x0003229d) input_focus_pane_cp1

0xb053,	// (0x00035c42) list_set_text_pane

0x76a4,	// (0x00032293) setting_text_pane_g1

0x76ae,	// (0x0003229d) input_focus_pane_cp2

0x76a4,	// (0x00032293) setting_code_pane_g1

0x77d9,	// (0x000323c8) setting_code_pane_t1

0x4d65,	// (0x0002f954) set_text_pane_t1_ParamLimits

0x4d65,	// (0x0002f954) set_text_pane_t1

0x8809,	// (0x000333f8) set_opt_bg_pane_g1

0x8811,	// (0x00033400) set_opt_bg_pane_g2

0xb02d,	// (0x00035c1c) set_opt_bg_pane_g3

0x8821,	// (0x00033410) set_opt_bg_pane_g4

0x8829,	// (0x00033418) set_opt_bg_pane_g5

0x8831,	// (0x00033420) set_opt_bg_pane_g6

0xb037,	// (0x00035c26) set_opt_bg_pane_g7

0xb03f,	// (0x00035c2e) set_opt_bg_pane_g8

0xb049,	// (0x00035c38) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0003a562) set_opt_bg_pane_g

0xb020,	// (0x00035c0f) slider_set_pane_g1

0x6511,	// (0x00031100) slider_set_pane_g2

0x0006,

0xf964,	// (0x0003a553) slider_set_pane_g

0x6485,	// (0x00031074) volume_set_pane_g1

0x648d,	// (0x0003107c) volume_set_pane_g2

0x6495,	// (0x00031084) volume_set_pane_g3

0x649d,	// (0x0003108c) volume_set_pane_g4

0x64a5,	// (0x00031094) volume_set_pane_g5

0x64ad,	// (0x0003109c) volume_set_pane_g6

0x64b5,	// (0x000310a4) volume_set_pane_g7

0x64bd,	// (0x000310ac) volume_set_pane_g8

0x64c5,	// (0x000310b4) volume_set_pane_g9

0x64cd,	// (0x000310bc) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0003a52b) volume_set_pane_g

0x77e7,	// (0x000323d6) indicator_pane_ParamLimits

0x77e7,	// (0x000323d6) indicator_pane

0x77f3,	// (0x000323e2) main_idle_pane_g2_ParamLimits

0x77f3,	// (0x000323e2) main_idle_pane_g2

0x781b,	// (0x0003240a) main_pane_idle_g1_ParamLimits

0x781b,	// (0x0003240a) main_pane_idle_g1

0x7828,	// (0x00032417) popup_clock_digital_analogue_window_ParamLimits

0x7828,	// (0x00032417) popup_clock_digital_analogue_window

0x783f,	// (0x0003242e) soft_indicator_pane_ParamLimits

0x783f,	// (0x0003242e) soft_indicator_pane

0x784b,	// (0x0003243a) wallpaper_pane_ParamLimits

0x784b,	// (0x0003243a) wallpaper_pane

0x76a4,	// (0x00032293) wallpaper_pane_g1

0x785f,	// (0x0003244e) indicator_pane_g1_ParamLimits

0x785f,	// (0x0003244e) indicator_pane_g1

0xb457,	// (0x00036046) navi_navi_icon_text_pane_srt_g1

0x787a,	// (0x00032469) soft_indicator_pane_t1

0x7894,	// (0x00032483) aid_ps_area_pane

0x78a5,	// (0x00032494) aid_ps_clock_pane

0x78b3,	// (0x000324a2) aid_ps_indicator_pane

0x78bf,	// (0x000324ae) indicator_ps_pane_ParamLimits

0x78bf,	// (0x000324ae) indicator_ps_pane

0x78ce,	// (0x000324bd) power_save_pane_g1_ParamLimits

0x78ce,	// (0x000324bd) power_save_pane_g1

0x78da,	// (0x000324c9) power_save_pane_g2_ParamLimits

0x78da,	// (0x000324c9) power_save_pane_g2

0x48db,	// (0x0002f4ca) aid_navinavi_width_pane

0x7894,	// (0x00032483) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003a159) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003a159) power_save_pane_g

0x78e8,	// (0x000324d7) power_save_pane_t1_ParamLimits

0x78e8,	// (0x000324d7) power_save_pane_t1

0x78a5,	// (0x00032494) aid_ps_clock_pane_ParamLimits

0x78b3,	// (0x000324a2) aid_ps_indicator_pane_ParamLimits

0x78fa,	// (0x000324e9) power_save_pane_t4_ParamLimits

0x78fa,	// (0x000324e9) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003a15e) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003a15e) power_save_pane_t

0x80d5,	// (0x00032cc4) power_save_t3_ParamLimits

0x80d5,	// (0x00032cc4) power_save_t3

0x80c0,	// (0x00032caf) power_save_t2_ParamLimits

0x80c0,	// (0x00032caf) power_save_t2

0x80ea,	// (0x00032cd9) indicator_ps_pane_g1

0x80f3,	// (0x00032ce2) ai_gene_pane_ParamLimits

0x80f3,	// (0x00032ce2) ai_gene_pane

0x80ff,	// (0x00032cee) ai_links_pane_ParamLimits

0x80ff,	// (0x00032cee) ai_links_pane

0x810b,	// (0x00032cfa) indicator_pane_cp1_ParamLimits

0x810b,	// (0x00032cfa) indicator_pane_cp1

0x8117,	// (0x00032d06) main_pane_idle_g1_cp_ParamLimits

0x8117,	// (0x00032d06) main_pane_idle_g1_cp

0x8123,	// (0x00032d12) popup_ai_links_title_window

0x812c,	// (0x00032d1b) soft_indicator_pane_cp1_ParamLimits

0x812c,	// (0x00032d1b) soft_indicator_pane_cp1

0xae0e,	// (0x000359fd) ai_links_pane_g1

0xae17,	// (0x00035a06) grid_ai_links_pane

0xadf1,	// (0x000359e0) ai_gene_pane_1

0xadfc,	// (0x000359eb) ai_gene_pane_2

0xae05,	// (0x000359f4) list_highlight_pane_cp4

0xadd5,	// (0x000359c4) cell_ai_link_pane_ParamLimits

0xadd5,	// (0x000359c4) cell_ai_link_pane

0xadcd,	// (0x000359bc) cell_ai_link_pane_g1

0x835c,	// (0x00032f4b) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0003a506) cell_ai_link_pane_g

0x76ae,	// (0x0003229d) grid_highlight_cp2

0x76ae,	// (0x0003229d) bg_popup_sub_pane_cp1

0x8146,	// (0x00032d35) popup_ai_links_title_window_t1

0xad1b,	// (0x0003590a) ai_gene_pane_1_g1_ParamLimits

0xad1b,	// (0x0003590a) ai_gene_pane_1_g1

0xad27,	// (0x00035916) ai_gene_pane_1_g2_ParamLimits

0xad27,	// (0x00035916) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0003a4fc) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0003a4fc) ai_gene_pane_1_g

0xad34,	// (0x00035923) ai_gene_pane_1_t1_ParamLimits

0xad34,	// (0x00035923) ai_gene_pane_1_t1

0xad68,	// (0x00035957) grid_ai_soft_ind_pane

0xad06,	// (0x000358f5) ai_gene_pane_2_t1_ParamLimits

0xad06,	// (0x000358f5) ai_gene_pane_2_t1

0x8155,	// (0x00032d44) main_pane_empty_t1_ParamLimits

0x8155,	// (0x00032d44) main_pane_empty_t1

0x816d,	// (0x00032d5c) main_pane_empty_t2_ParamLimits

0x816d,	// (0x00032d5c) main_pane_empty_t2

0x8182,	// (0x00032d71) main_pane_empty_t3_ParamLimits

0x8182,	// (0x00032d71) main_pane_empty_t3

0x8194,	// (0x00032d83) main_pane_empty_t4_ParamLimits

0x8194,	// (0x00032d83) main_pane_empty_t4

0x81a6,	// (0x00032d95) main_pane_empty_t5_ParamLimits

0x81a6,	// (0x00032d95) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003a163) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003a163) main_pane_empty_t

0x885a,	// (0x00033449) bg_popup_window_pane_ParamLimits

0x885a,	// (0x00033449) bg_popup_window_pane

0xaa76,	// (0x00035665) find_popup_pane_cp2_ParamLimits

0xaa76,	// (0x00035665) find_popup_pane_cp2

0xaa82,	// (0x00035671) heading_pane_ParamLimits

0xaa82,	// (0x00035671) heading_pane

0x76ae,	// (0x0003229d) bg_popup_sub_pane

0xa9e4,	// (0x000355d3) bg_popup_window_pane_g1_ParamLimits

0xa9e4,	// (0x000355d3) bg_popup_window_pane_g1

0xa9f0,	// (0x000355df) bg_popup_window_pane_g2_ParamLimits

0xa9f0,	// (0x000355df) bg_popup_window_pane_g2

0xaa08,	// (0x000355f7) bg_popup_window_pane_g3_ParamLimits

0xaa08,	// (0x000355f7) bg_popup_window_pane_g3

0xaa14,	// (0x00035603) bg_popup_window_pane_g4_ParamLimits

0xaa14,	// (0x00035603) bg_popup_window_pane_g4

0xaa20,	// (0x0003560f) bg_popup_window_pane_g5_ParamLimits

0xaa20,	// (0x0003560f) bg_popup_window_pane_g5

0xaa2c,	// (0x0003561b) bg_popup_window_pane_g6_ParamLimits

0xaa2c,	// (0x0003561b) bg_popup_window_pane_g6

0xaa38,	// (0x00035627) bg_popup_window_pane_g7_ParamLimits

0xaa38,	// (0x00035627) bg_popup_window_pane_g7

0xaa44,	// (0x00035633) bg_popup_window_pane_g8_ParamLimits

0xaa44,	// (0x00035633) bg_popup_window_pane_g8

0xaa50,	// (0x0003563f) bg_popup_window_pane_g9_ParamLimits

0xaa50,	// (0x0003563f) bg_popup_window_pane_g9

0xaa5c,	// (0x0003564b) bg_popup_window_pane_g10_ParamLimits

0xaa5c,	// (0x0003564b) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0003a4c4) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0003a4c4) bg_popup_window_pane_g

0xa979,	// (0x00035568) bg_popup_heading_pane_ParamLimits

0xa979,	// (0x00035568) bg_popup_heading_pane

0x65c7,	// (0x000311b6) tabs_4_passive_pane_cp_srt_ParamLimits

0x65c7,	// (0x000311b6) tabs_4_passive_pane_cp_srt

0x65d9,	// (0x000311c8) tabs_4_passive_pane_srt_ParamLimits

0xa98d,	// (0x0003557c) heading_pane_g2

0x65d9,	// (0x000311c8) tabs_4_passive_pane_srt

0x9782,	// (0x00034371) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9782,	// (0x00034371) bg_passive_tab_pane_cp3_srt

0xa995,	// (0x00035584) heading_pane_t1_ParamLimits

0xa995,	// (0x00035584) heading_pane_t1

0xa9ac,	// (0x0003559b) heading_pane_t2_ParamLimits

0xa9ac,	// (0x0003559b) heading_pane_t2

0x0001,

0xf8d0,	// (0x0003a4bf) heading_pane_t_ParamLimits

0xf8d0,	// (0x0003a4bf) heading_pane_t

0xa4a6,	// (0x00035095) bg_popup_heading_pane_g1

0xa555,	// (0x00035144) bg_popup_heading_pane_g2

0xa55f,	// (0x0003514e) bg_popup_heading_pane_g3

0xa569,	// (0x00035158) bg_popup_heading_pane_g4

0xa573,	// (0x00035162) bg_popup_heading_pane_g5

0xa57d,	// (0x0003516c) bg_popup_heading_pane_g6

0xa585,	// (0x00035174) bg_popup_heading_pane_g7

0xa58d,	// (0x0003517c) bg_popup_heading_pane_g8

0xa597,	// (0x00035186) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0003a47b) bg_popup_heading_pane_g

0x9c8c,	// (0x0003487b) bg_popup_sub_pane_g1

0x9c9c,	// (0x0003488b) bg_popup_sub_pane_g2

0x9c94,	// (0x00034883) bg_popup_sub_pane_g3

0x9cac,	// (0x0003489b) bg_popup_sub_pane_g4

0x9ca4,	// (0x00034893) bg_popup_sub_pane_g5

0x9cb4,	// (0x000348a3) bg_popup_sub_pane_g6

0x9cbc,	// (0x000348ab) bg_popup_sub_pane_g7

0x9ccc,	// (0x000348bb) bg_popup_sub_pane_g8

0x9cc4,	// (0x000348b3) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0003a455) bg_popup_sub_pane_g

0x81ba,	// (0x00032da9) bg_popup_window_pane_cp5_ParamLimits

0x81ba,	// (0x00032da9) bg_popup_window_pane_cp5

0x81d6,	// (0x00032dc5) popup_note_window_g1_ParamLimits

0x81d6,	// (0x00032dc5) popup_note_window_g1

0x81e2,	// (0x00032dd1) popup_note_window_t1_ParamLimits

0x81e2,	// (0x00032dd1) popup_note_window_t1

0x81f8,	// (0x00032de7) popup_note_window_t2_ParamLimits

0x81f8,	// (0x00032de7) popup_note_window_t2

0x820e,	// (0x00032dfd) popup_note_window_t3_ParamLimits

0x820e,	// (0x00032dfd) popup_note_window_t3

0x8224,	// (0x00032e13) popup_note_window_t4_ParamLimits

0x8224,	// (0x00032e13) popup_note_window_t4

0x824c,	// (0x00032e3b) popup_note_window_t5_ParamLimits

0x824c,	// (0x00032e3b) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003a16e) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003a16e) popup_note_window_t

0x8270,	// (0x00032e5f) bg_popup_window_pane_cp6_ParamLimits

0x8270,	// (0x00032e5f) bg_popup_window_pane_cp6

0xa422,	// (0x00035011) popup_note_image_window_g1_ParamLimits

0xa422,	// (0x00035011) popup_note_image_window_g1

0xa42e,	// (0x0003501d) popup_note_image_window_g2_ParamLimits

0xa42e,	// (0x0003501d) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0003a449) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0003a449) popup_note_image_window_g

0xa447,	// (0x00035036) popup_note_image_window_t1_ParamLimits

0xa447,	// (0x00035036) popup_note_image_window_t1

0xa460,	// (0x0003504f) popup_note_image_window_t2_ParamLimits

0xa460,	// (0x0003504f) popup_note_image_window_t2

0xa479,	// (0x00035068) popup_note_image_window_t3_ParamLimits

0xa479,	// (0x00035068) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0003a44e) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0003a44e) popup_note_image_window_t

0xa2e3,	// (0x00034ed2) bg_popup_window_pane_cp7_ParamLimits

0xa2e3,	// (0x00034ed2) bg_popup_window_pane_cp7

0xa313,	// (0x00034f02) popup_note_wait_window_g1_ParamLimits

0xa313,	// (0x00034f02) popup_note_wait_window_g1

0xa31f,	// (0x00034f0e) popup_note_wait_window_g2_ParamLimits

0xa31f,	// (0x00034f0e) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0003a437) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0003a437) popup_note_wait_window_g

0xa337,	// (0x00034f26) popup_note_wait_window_t1_ParamLimits

0xa337,	// (0x00034f26) popup_note_wait_window_t1

0xa35e,	// (0x00034f4d) popup_note_wait_window_t2_ParamLimits

0xa35e,	// (0x00034f4d) popup_note_wait_window_t2

0xa37b,	// (0x00034f6a) popup_note_wait_window_t3_ParamLimits

0xa37b,	// (0x00034f6a) popup_note_wait_window_t3

0xa38e,	// (0x00034f7d) popup_note_wait_window_t4_ParamLimits

0xa38e,	// (0x00034f7d) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0003a43e) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0003a43e) popup_note_wait_window_t

0xa3b3,	// (0x00034fa2) wait_bar_pane_ParamLimits

0xa3b3,	// (0x00034fa2) wait_bar_pane

0x76ae,	// (0x0003229d) wait_anim_pane

0x76ae,	// (0x0003229d) wait_border_pane

0x76a4,	// (0x00032293) wait_anim_pane_g1

0x76a4,	// (0x00032293) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0003a2f2) wait_anim_pane_g

0xa287,	// (0x00034e76) wait_border_pane_g1

0xa292,	// (0x00034e81) wait_border_pane_g2

0xa29b,	// (0x00034e8a) wait_border_pane_g3

0x0002,

0xf841,	// (0x0003a430) wait_border_pane_g

0xa0f2,	// (0x00034ce1) bg_popup_window_pane_cp16_ParamLimits

0xa0f2,	// (0x00034ce1) bg_popup_window_pane_cp16

0xa1f2,	// (0x00034de1) indicator_popup_pane_cp4_ParamLimits

0xa1f2,	// (0x00034de1) indicator_popup_pane_cp4

0xa206,	// (0x00034df5) popup_query_data_window_t1_ParamLimits

0xa206,	// (0x00034df5) popup_query_data_window_t1

0xa218,	// (0x00034e07) popup_query_data_window_t2_ParamLimits

0xa218,	// (0x00034e07) popup_query_data_window_t2

0xa231,	// (0x00034e20) popup_query_data_window_t3_ParamLimits

0xa231,	// (0x00034e20) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0003a429) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0003a429) popup_query_data_window_t

0xa24b,	// (0x00034e3a) query_popup_data_pane_ParamLimits

0xa24b,	// (0x00034e3a) query_popup_data_pane

0xa25f,	// (0x00034e4e) query_popup_data_pane_cp1_ParamLimits

0xa25f,	// (0x00034e4e) query_popup_data_pane_cp1

0xa0f2,	// (0x00034ce1) bg_popup_window_pane_cp10_ParamLimits

0xa0f2,	// (0x00034ce1) bg_popup_window_pane_cp10

0xa124,	// (0x00034d13) indicator_popup_pane_ParamLimits

0xa124,	// (0x00034d13) indicator_popup_pane

0xa146,	// (0x00034d35) popup_query_code_window_t1_ParamLimits

0xa146,	// (0x00034d35) popup_query_code_window_t1

0xa160,	// (0x00034d4f) popup_query_code_window_t2_ParamLimits

0xa160,	// (0x00034d4f) popup_query_code_window_t2

0xa1a9,	// (0x00034d98) popup_query_code_window_t3_ParamLimits

0xa1a9,	// (0x00034d98) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0003a422) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0003a422) popup_query_code_window_t

0xa1d8,	// (0x00034dc7) query_popup_pane_ParamLimits

0xa1d8,	// (0x00034dc7) query_popup_pane

0x8270,	// (0x00032e5f) bg_popup_window_pane_cp15_ParamLimits

0x8270,	// (0x00032e5f) bg_popup_window_pane_cp15

0x828e,	// (0x00032e7d) indicator_popup_pane_cp1_ParamLimits

0x828e,	// (0x00032e7d) indicator_popup_pane_cp1

0x82a1,	// (0x00032e90) indicator_popup_pane_cp2_ParamLimits

0x82a1,	// (0x00032e90) indicator_popup_pane_cp2

0x82b4,	// (0x00032ea3) popup_query_data_code_window_g1_ParamLimits

0x82b4,	// (0x00032ea3) popup_query_data_code_window_g1

0x82c7,	// (0x00032eb6) popup_query_data_code_window_t1_ParamLimits

0x82c7,	// (0x00032eb6) popup_query_data_code_window_t1

0x82d9,	// (0x00032ec8) popup_query_data_code_window_t2_ParamLimits

0x82d9,	// (0x00032ec8) popup_query_data_code_window_t2

0x82eb,	// (0x00032eda) popup_query_data_code_window_t3_ParamLimits

0x82eb,	// (0x00032eda) popup_query_data_code_window_t3

0x8301,	// (0x00032ef0) popup_query_data_code_window_t4_ParamLimits

0x8301,	// (0x00032ef0) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003a179) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003a179) popup_query_data_code_window_t

0x6147,	// (0x00030d36) list_single_midp_graphic_pane_g3

0x8319,	// (0x00032f08) query_popup_data_pane_cp2_ParamLimits

0x832c,	// (0x00032f1b) query_popup_pane_cp2_ParamLimits

0x832c,	// (0x00032f1b) query_popup_pane_cp2

0x76ae,	// (0x0003229d) bg_popup_window_pane_cp11

0xa0ea,	// (0x00034cd9) heading_pane_cp5

0x8417,	// (0x00033006) listscroll_popup_info_pane

0x76ae,	// (0x0003229d) input_focus_pane_cp3

0x833f,	// (0x00032f2e) query_popup_pane_t1

0x834d,	// (0x00032f3c) list_popup_info_pane_ParamLimits

0x834d,	// (0x00032f3c) list_popup_info_pane

0x835c,	// (0x00032f4b) listscroll_popup_info_pane_g1

0x8364,	// (0x00032f53) scroll_pane_cp7

0x836e,	// (0x00032f5d) popup_info_list_pane_t1_ParamLimits

0x836e,	// (0x00032f5d) popup_info_list_pane_t1

0x8388,	// (0x00032f77) popup_info_list_pane_t2_ParamLimits

0x8388,	// (0x00032f77) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003a182) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003a182) popup_info_list_pane_t

0x76ae,	// (0x0003229d) bg_popup_window_pane_cp12

0xb471,	// (0x00036060) find_popup_pane

0x778e,	// (0x0003237d) bg_popup_window_pane_cp3

0x83a2,	// (0x00032f91) heading_pane_cp3

0x83ae,	// (0x00032f9d) listscroll_popup_graphic_pane

0x76ae,	// (0x0003229d) bg_popup_window_pane_cp4

0x840d,	// (0x00032ffc) heading_pane_cp4

0x8417,	// (0x00033006) listscroll_popup_colour_pane

0x841f,	// (0x0003300e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x841f,	// (0x0003300e) cell_large_graphic_colour_none_popup_pane

0x8433,	// (0x00033022) grid_large_graphic_colour_popup_pane_ParamLimits

0x8433,	// (0x00033022) grid_large_graphic_colour_popup_pane

0x845f,	// (0x0003304e) listscroll_popup_colour_pane_g1_ParamLimits

0x845f,	// (0x0003304e) listscroll_popup_colour_pane_g1

0x8476,	// (0x00033065) listscroll_popup_colour_pane_g2_ParamLimits

0x8476,	// (0x00033065) listscroll_popup_colour_pane_g2

0x848d,	// (0x0003307c) listscroll_popup_colour_pane_g3_ParamLimits

0x848d,	// (0x0003307c) listscroll_popup_colour_pane_g3

0x849d,	// (0x0003308c) listscroll_popup_colour_pane_g4_ParamLimits

0x849d,	// (0x0003308c) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003a187) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003a187) listscroll_popup_colour_pane_g

0x84b1,	// (0x000330a0) scroll_pane_cp6_ParamLimits

0x84b1,	// (0x000330a0) scroll_pane_cp6

0x84c3,	// (0x000330b2) cell_large_graphic_colour_popup_pane_ParamLimits

0x84c3,	// (0x000330b2) cell_large_graphic_colour_popup_pane

0x84e2,	// (0x000330d1) cell_large_graphic_colour_none_popup_pane_t1

0x76ae,	// (0x0003229d) grid_highlight_pane_cp5

0x84f1,	// (0x000330e0) cell_large_graphic_colour_popup_pane_g1

0x84f9,	// (0x000330e8) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003a190) cell_large_graphic_colour_popup_pane_g

0x8501,	// (0x000330f0) cell_large_graphic_colour_popup_pane_g2_copy1

0x850a,	// (0x000330f9) grid_highlight_pane_cp4

0x8512,	// (0x00033101) bg_popup_window_pane_cp8_ParamLimits

0x8512,	// (0x00033101) bg_popup_window_pane_cp8

0x852d,	// (0x0003311c) popup_snote_single_text_window_g1_ParamLimits

0x852d,	// (0x0003311c) popup_snote_single_text_window_g1

0x853f,	// (0x0003312e) popup_snote_single_text_window_t1_ParamLimits

0x853f,	// (0x0003312e) popup_snote_single_text_window_t1

0x8552,	// (0x00033141) popup_snote_single_text_window_t2_ParamLimits

0x8552,	// (0x00033141) popup_snote_single_text_window_t2

0x8565,	// (0x00033154) popup_snote_single_text_window_t3_ParamLimits

0x8565,	// (0x00033154) popup_snote_single_text_window_t3

0x859e,	// (0x0003318d) popup_snote_single_text_window_t4_ParamLimits

0x859e,	// (0x0003318d) popup_snote_single_text_window_t4

0x85d2,	// (0x000331c1) popup_snote_single_text_window_t5_ParamLimits

0x85d2,	// (0x000331c1) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003a195) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003a195) popup_snote_single_text_window_t

0x8601,	// (0x000331f0) bg_popup_window_pane_cp9_ParamLimits

0x8601,	// (0x000331f0) bg_popup_window_pane_cp9

0x852d,	// (0x0003311c) popup_snote_single_graphic_window_g1_ParamLimits

0x852d,	// (0x0003311c) popup_snote_single_graphic_window_g1

0x860f,	// (0x000331fe) popup_snote_single_graphic_window_g2_ParamLimits

0x860f,	// (0x000331fe) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003a1a0) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003a1a0) popup_snote_single_graphic_window_g

0x861b,	// (0x0003320a) popup_snote_single_graphic_window_t1_ParamLimits

0x861b,	// (0x0003320a) popup_snote_single_graphic_window_t1

0x862e,	// (0x0003321d) popup_snote_single_graphic_window_t2_ParamLimits

0x862e,	// (0x0003321d) popup_snote_single_graphic_window_t2

0x8641,	// (0x00033230) popup_snote_single_graphic_window_t3_ParamLimits

0x8641,	// (0x00033230) popup_snote_single_graphic_window_t3

0x867a,	// (0x00033269) popup_snote_single_graphic_window_t4_ParamLimits

0x867a,	// (0x00033269) popup_snote_single_graphic_window_t4

0x86ae,	// (0x0003329d) popup_snote_single_graphic_window_t5_ParamLimits

0x86ae,	// (0x0003329d) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003a1a5) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003a1a5) popup_snote_single_graphic_window_t

0xb3b5,	// (0x00035fa4) grid_graphic_popup_pane_ParamLimits

0xb3b5,	// (0x00035fa4) grid_graphic_popup_pane

0xb3dd,	// (0x00035fcc) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3dd,	// (0x00035fcc) listscroll_popup_graphic_pane_g1

0xb3f1,	// (0x00035fe0) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3f1,	// (0x00035fe0) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0003a59f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0003a59f) listscroll_popup_graphic_pane_g

0xb405,	// (0x00035ff4) scroll_pane_cp5

0xb352,	// (0x00035f41) cell_graphic_popup_pane_ParamLimits

0xb352,	// (0x00035f41) cell_graphic_popup_pane

0xb333,	// (0x00035f22) cell_graphic_popup_pane_g1

0xb33b,	// (0x00035f2a) cell_graphic_popup_pane_g2

0x8501,	// (0x000330f0) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0003a598) cell_graphic_popup_pane_g

0xb344,	// (0x00035f33) cell_graphic_popup_pane_t2

0x850a,	// (0x000330f9) grid_highlight_pane_cp3

0x86ef,	// (0x000332de) list_gen_pane_ParamLimits

0x86ef,	// (0x000332de) list_gen_pane

0x8721,	// (0x00033310) scroll_pane

0xb28b,	// (0x00035e7a) bg_list_pane_g1_ParamLimits

0xb28b,	// (0x00035e7a) bg_list_pane_g1

0xb2a8,	// (0x00035e97) bg_list_pane_g2_ParamLimits

0xb2a8,	// (0x00035e97) bg_list_pane_g2

0xb2bd,	// (0x00035eac) bg_list_pane_g3_ParamLimits

0xb2bd,	// (0x00035eac) bg_list_pane_g3

0xb2d1,	// (0x00035ec0) bg_list_pane_g4_ParamLimits

0xb2d1,	// (0x00035ec0) bg_list_pane_g4

0xb2e5,	// (0x00035ed4) bg_list_pane_g5_ParamLimits

0xb2e5,	// (0x00035ed4) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0003a58d) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0003a58d) bg_list_pane_g

0x7925,	// (0x00032514) list_double2_graphic_large_graphic_pane_ParamLimits

0x7925,	// (0x00032514) list_double2_graphic_large_graphic_pane

0x7925,	// (0x00032514) list_double2_graphic_pane_ParamLimits

0x7925,	// (0x00032514) list_double2_graphic_pane

0x7925,	// (0x00032514) list_double2_large_graphic_pane_ParamLimits

0x7925,	// (0x00032514) list_double2_large_graphic_pane

0x7925,	// (0x00032514) list_double2_pane_ParamLimits

0x7925,	// (0x00032514) list_double2_pane

0x7925,	// (0x00032514) list_double_graphic_heading_pane_ParamLimits

0x7925,	// (0x00032514) list_double_graphic_heading_pane

0x7925,	// (0x00032514) list_double_graphic_pane_ParamLimits

0x7925,	// (0x00032514) list_double_graphic_pane

0x7925,	// (0x00032514) list_double_heading_pane_ParamLimits

0x7925,	// (0x00032514) list_double_heading_pane

0x7925,	// (0x00032514) list_double_large_graphic_pane_ParamLimits

0x7925,	// (0x00032514) list_double_large_graphic_pane

0x7925,	// (0x00032514) list_double_number_pane_ParamLimits

0x7925,	// (0x00032514) list_double_number_pane

0x7925,	// (0x00032514) list_double_pane_ParamLimits

0x7925,	// (0x00032514) list_double_pane

0x7925,	// (0x00032514) list_double_time_pane_ParamLimits

0x7925,	// (0x00032514) list_double_time_pane

0x7925,	// (0x00032514) list_setting_number_pane_ParamLimits

0x7925,	// (0x00032514) list_setting_number_pane

0x7925,	// (0x00032514) list_setting_pane_ParamLimits

0x7925,	// (0x00032514) list_setting_pane

0x7960,	// (0x0003254f) list_single_2graphic_pane_ParamLimits

0x7960,	// (0x0003254f) list_single_2graphic_pane

0x7960,	// (0x0003254f) list_single_graphic_heading_pane_ParamLimits

0x7960,	// (0x0003254f) list_single_graphic_heading_pane

0x7960,	// (0x0003254f) list_single_graphic_pane_ParamLimits

0x7960,	// (0x0003254f) list_single_graphic_pane

0x7960,	// (0x0003254f) list_single_heading_pane_ParamLimits

0x7960,	// (0x0003254f) list_single_heading_pane

0x79a0,	// (0x0003258f) list_single_large_graphic_pane_ParamLimits

0x79a0,	// (0x0003258f) list_single_large_graphic_pane

0x7960,	// (0x0003254f) list_single_number_heading_pane_ParamLimits

0x7960,	// (0x0003254f) list_single_number_heading_pane

0x7960,	// (0x0003254f) list_single_number_pane_ParamLimits

0x7960,	// (0x0003254f) list_single_number_pane

0x7960,	// (0x0003254f) list_single_pane_ParamLimits

0x7960,	// (0x0003254f) list_single_pane

0x76ae,	// (0x0003229d) list_highlight_pane_cp1

0x4d8c,	// (0x0002f97b) list_single_pane_g1_ParamLimits

0x4d8c,	// (0x0002f97b) list_single_pane_g1

0x4d98,	// (0x0002f987) list_single_pane_g2_ParamLimits

0x4d98,	// (0x0002f987) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003a1b7) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003a1b7) list_single_pane_g

0x790f,	// (0x000324fe) list_single_pane_t1_ParamLimits

0x790f,	// (0x000324fe) list_single_pane_t1

0x4d8c,	// (0x0002f97b) list_single_number_pane_g1_ParamLimits

0x4d8c,	// (0x0002f97b) list_single_number_pane_g1

0x4d98,	// (0x0002f987) list_single_number_pane_g2_ParamLimits

0x4d98,	// (0x0002f987) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003a1b7) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003a1b7) list_single_number_pane_g

0x64d5,	// (0x000310c4) list_single_number_pane_t1_ParamLimits

0x64d5,	// (0x000310c4) list_single_number_pane_t1

0x64eb,	// (0x000310da) list_single_number_pane_t2_ParamLimits

0x64eb,	// (0x000310da) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0003a54e) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0003a54e) list_single_number_pane_t

0x4d80,	// (0x0002f96f) list_single_graphic_pane_g1_ParamLimits

0x4d80,	// (0x0002f96f) list_single_graphic_pane_g1

0x4d8c,	// (0x0002f97b) list_single_graphic_pane_g2_ParamLimits

0x4d8c,	// (0x0002f97b) list_single_graphic_pane_g2

0x4d98,	// (0x0002f987) list_single_graphic_pane_g3_ParamLimits

0x4d98,	// (0x0002f987) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003a1b0) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003a1b0) list_single_graphic_pane_g

0x4da4,	// (0x0002f993) list_single_graphic_pane_t1_ParamLimits

0x4da4,	// (0x0002f993) list_single_graphic_pane_t1

0x4d8c,	// (0x0002f97b) list_single_heading_pane_g1_ParamLimits

0x4d8c,	// (0x0002f97b) list_single_heading_pane_g1

0x4d98,	// (0x0002f987) list_single_heading_pane_g2_ParamLimits

0x4d98,	// (0x0002f987) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003a1b7) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003a1b7) list_single_heading_pane_g

0x4dba,	// (0x0002f9a9) list_single_heading_pane_t1_ParamLimits

0x4dba,	// (0x0002f9a9) list_single_heading_pane_t1

0x4dd0,	// (0x0002f9bf) list_single_heading_pane_t2_ParamLimits

0x4dd0,	// (0x0002f9bf) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003a1bc) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003a1bc) list_single_heading_pane_t

0x4d8c,	// (0x0002f97b) list_single_number_heading_pane_g1_ParamLimits

0x4d8c,	// (0x0002f97b) list_single_number_heading_pane_g1

0x4d98,	// (0x0002f987) list_single_number_heading_pane_g2_ParamLimits

0x4d98,	// (0x0002f987) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003a1b7) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003a1b7) list_single_number_heading_pane_g

0x4dba,	// (0x0002f9a9) list_single_number_heading_pane_t1_ParamLimits

0x4dba,	// (0x0002f9a9) list_single_number_heading_pane_t1

0x4de2,	// (0x0002f9d1) list_single_number_heading_pane_t2_ParamLimits

0x4de2,	// (0x0002f9d1) list_single_number_heading_pane_t2

0x4df4,	// (0x0002f9e3) list_single_number_heading_pane_t3_ParamLimits

0x4df4,	// (0x0002f9e3) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003a1c1) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003a1c1) list_single_number_heading_pane_t

0x4e06,	// (0x0002f9f5) list_single_graphic_heading_pane_g1_ParamLimits

0x4e06,	// (0x0002f9f5) list_single_graphic_heading_pane_g1

0x4e12,	// (0x0002fa01) list_single_graphic_heading_pane_g4_ParamLimits

0x4e12,	// (0x0002fa01) list_single_graphic_heading_pane_g4

0x4d98,	// (0x0002f987) list_single_graphic_heading_pane_g5_ParamLimits

0x4d98,	// (0x0002f987) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003a1c8) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003a1c8) list_single_graphic_heading_pane_g

0x4dba,	// (0x0002f9a9) list_single_graphic_heading_pane_t1_ParamLimits

0x4dba,	// (0x0002f9a9) list_single_graphic_heading_pane_t1

0x4e23,	// (0x0002fa12) list_single_graphic_heading_pane_t2_ParamLimits

0x4e23,	// (0x0002fa12) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003a1cf) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003a1cf) list_single_graphic_heading_pane_t

0x4e35,	// (0x0002fa24) list_single_large_graphic_pane_g1_ParamLimits

0x4e35,	// (0x0002fa24) list_single_large_graphic_pane_g1

0x4e41,	// (0x0002fa30) list_single_large_graphic_pane_g2_ParamLimits

0x4e41,	// (0x0002fa30) list_single_large_graphic_pane_g2

0x4e4d,	// (0x0002fa3c) list_single_large_graphic_pane_g3_ParamLimits

0x4e4d,	// (0x0002fa3c) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003a1d4) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003a1d4) list_single_large_graphic_pane_g

0xa292,	// (0x00034e81) wait_border_pane_g2_copy1

0x4e59,	// (0x0002fa48) list_single_large_graphic_pane_g4_cp2

0x4e61,	// (0x0002fa50) list_single_large_graphic_pane_t1_ParamLimits

0x4e61,	// (0x0002fa50) list_single_large_graphic_pane_t1

0x4e77,	// (0x0002fa66) list_double_pane_g1_ParamLimits

0x4e77,	// (0x0002fa66) list_double_pane_g1

0x4e83,	// (0x0002fa72) list_double_pane_g2_ParamLimits

0x4e83,	// (0x0002fa72) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003a1db) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003a1db) list_double_pane_g

0x4e8f,	// (0x0002fa7e) list_double_pane_t1_ParamLimits

0x4e8f,	// (0x0002fa7e) list_double_pane_t1

0x4ea5,	// (0x0002fa94) list_double_pane_t2_ParamLimits

0x4ea5,	// (0x0002fa94) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003a1e0) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003a1e0) list_double_pane_t

0x4eb7,	// (0x0002faa6) list_double2_pane_g1_ParamLimits

0x4eb7,	// (0x0002faa6) list_double2_pane_g1

0x4ec8,	// (0x0002fab7) list_double2_pane_g2_ParamLimits

0x4ec8,	// (0x0002fab7) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003a1e5) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003a1e5) list_double2_pane_g

0x4ed4,	// (0x0002fac3) list_double2_pane_t1_ParamLimits

0x4ed4,	// (0x0002fac3) list_double2_pane_t1

0x4eea,	// (0x0002fad9) list_double2_pane_t2_ParamLimits

0x4eea,	// (0x0002fad9) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003a1ea) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003a1ea) list_double2_pane_t

0x4e77,	// (0x0002fa66) list_double_number_pane_g1_ParamLimits

0x4e77,	// (0x0002fa66) list_double_number_pane_g1

0x4e83,	// (0x0002fa72) list_double_number_pane_g2_ParamLimits

0x4e83,	// (0x0002fa72) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003a1db) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003a1db) list_double_number_pane_g

0x4efc,	// (0x0002faeb) list_double_number_pane_t1_ParamLimits

0x4efc,	// (0x0002faeb) list_double_number_pane_t1

0x4f0e,	// (0x0002fafd) list_double_number_pane_t2_ParamLimits

0x4f0e,	// (0x0002fafd) list_double_number_pane_t2

0x4f24,	// (0x0002fb13) list_double_number_pane_t3_ParamLimits

0x4f24,	// (0x0002fb13) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003a1ef) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003a1ef) list_double_number_pane_t

0x4f36,	// (0x0002fb25) list_double_graphic_pane_g1_ParamLimits

0x4f36,	// (0x0002fb25) list_double_graphic_pane_g1

0x4f42,	// (0x0002fb31) list_double_graphic_pane_g2_ParamLimits

0x4f42,	// (0x0002fb31) list_double_graphic_pane_g2

0x4f51,	// (0x0002fb40) list_double_graphic_pane_g3_ParamLimits

0x4f51,	// (0x0002fb40) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003a1f6) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003a1f6) list_double_graphic_pane_g

0x4f69,	// (0x0002fb58) list_double_graphic_pane_t1_ParamLimits

0x4f69,	// (0x0002fb58) list_double_graphic_pane_t1

0x4f7f,	// (0x0002fb6e) list_double_graphic_pane_t2_ParamLimits

0x4f7f,	// (0x0002fb6e) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003a1ff) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003a1ff) list_double_graphic_pane_t

0x4f91,	// (0x0002fb80) list_double2_graphic_pane_g1_ParamLimits

0x4f91,	// (0x0002fb80) list_double2_graphic_pane_g1

0x4f9d,	// (0x0002fb8c) list_double2_graphic_pane_g2_ParamLimits

0x4f9d,	// (0x0002fb8c) list_double2_graphic_pane_g2

0x4ec8,	// (0x0002fab7) list_double2_graphic_pane_g3_ParamLimits

0x4ec8,	// (0x0002fab7) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003a204) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003a204) list_double2_graphic_pane_g

0x4fa9,	// (0x0002fb98) list_double2_graphic_pane_t1_ParamLimits

0x4fa9,	// (0x0002fb98) list_double2_graphic_pane_t1

0x4fbf,	// (0x0002fbae) list_double2_graphic_pane_t2_ParamLimits

0x4fbf,	// (0x0002fbae) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003a20b) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003a20b) list_double2_graphic_pane_t

0x4fd1,	// (0x0002fbc0) list_double_large_graphic_pane_g1_ParamLimits

0x4fd1,	// (0x0002fbc0) list_double_large_graphic_pane_g1

0x4fe4,	// (0x0002fbd3) list_double_large_graphic_pane_g2_ParamLimits

0x4fe4,	// (0x0002fbd3) list_double_large_graphic_pane_g2

0x4e83,	// (0x0002fa72) list_double_large_graphic_pane_g3_ParamLimits

0x4e83,	// (0x0002fa72) list_double_large_graphic_pane_g3

0x4ff5,	// (0x0002fbe4) list_double_large_graphic_pane_g4_ParamLimits

0x4ff5,	// (0x0002fbe4) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003a210) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003a210) list_double_large_graphic_pane_g

0x501c,	// (0x0002fc0b) list_double_large_graphic_pane_t1_ParamLimits

0x501c,	// (0x0002fc0b) list_double_large_graphic_pane_t1

0x5035,	// (0x0002fc24) list_double_large_graphic_pane_t2_ParamLimits

0x5035,	// (0x0002fc24) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003a21b) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003a21b) list_double_large_graphic_pane_t

0x5047,	// (0x0002fc36) list_double2_large_graphic_pane_g1_ParamLimits

0x5047,	// (0x0002fc36) list_double2_large_graphic_pane_g1

0x4eb7,	// (0x0002faa6) list_double2_large_graphic_pane_g2_ParamLimits

0x4eb7,	// (0x0002faa6) list_double2_large_graphic_pane_g2

0x4ec8,	// (0x0002fab7) list_double2_large_graphic_pane_g3_ParamLimits

0x4ec8,	// (0x0002fab7) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003a220) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003a220) list_double2_large_graphic_pane_g

0x5053,	// (0x0002fc42) list_double2_large_graphic_pane_t1_ParamLimits

0x5053,	// (0x0002fc42) list_double2_large_graphic_pane_t1

0x5069,	// (0x0002fc58) list_double2_large_graphic_pane_t2_ParamLimits

0x5069,	// (0x0002fc58) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0003a227) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0003a227) list_double2_large_graphic_pane_t

0x507b,	// (0x0002fc6a) list_double_heading_pane_g1_ParamLimits

0x507b,	// (0x0002fc6a) list_double_heading_pane_g1

0x508c,	// (0x0002fc7b) list_double_heading_pane_g2_ParamLimits

0x508c,	// (0x0002fc7b) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003a22c) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003a22c) list_double_heading_pane_g

0x5098,	// (0x0002fc87) list_double_heading_pane_t1_ParamLimits

0x5098,	// (0x0002fc87) list_double_heading_pane_t1

0x4eea,	// (0x0002fad9) list_double_heading_pane_t2_ParamLimits

0x4eea,	// (0x0002fad9) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0003a231) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0003a231) list_double_heading_pane_t

0x50ae,	// (0x0002fc9d) list_double_graphic_heading_pane_g1_ParamLimits

0x50ae,	// (0x0002fc9d) list_double_graphic_heading_pane_g1

0x507b,	// (0x0002fc6a) list_double_graphic_heading_pane_g2_ParamLimits

0x507b,	// (0x0002fc6a) list_double_graphic_heading_pane_g2

0x508c,	// (0x0002fc7b) list_double_graphic_heading_pane_g3_ParamLimits

0x508c,	// (0x0002fc7b) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0003a236) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0003a236) list_double_graphic_heading_pane_g

0x50ba,	// (0x0002fca9) list_double_graphic_heading_pane_t1_ParamLimits

0x50ba,	// (0x0002fca9) list_double_graphic_heading_pane_t1

0x4fbf,	// (0x0002fbae) list_double_graphic_heading_pane_t2_ParamLimits

0x4fbf,	// (0x0002fbae) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003a23d) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003a23d) list_double_graphic_heading_pane_t

0x4fe4,	// (0x0002fbd3) list_double_time_pane_g1_ParamLimits

0x4fe4,	// (0x0002fbd3) list_double_time_pane_g1

0x4e83,	// (0x0002fa72) list_double_time_pane_g2_ParamLimits

0x4e83,	// (0x0002fa72) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0003a242) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0003a242) list_double_time_pane_g

0x50d0,	// (0x0002fcbf) list_double_time_pane_t1_ParamLimits

0x50d0,	// (0x0002fcbf) list_double_time_pane_t1

0x50e6,	// (0x0002fcd5) list_double_time_pane_t2_ParamLimits

0x50e6,	// (0x0002fcd5) list_double_time_pane_t2

0x50f8,	// (0x0002fce7) list_double_time_pane_t3_ParamLimits

0x50f8,	// (0x0002fce7) list_double_time_pane_t3

0x510a,	// (0x0002fcf9) list_double_time_pane_t4_ParamLimits

0x510a,	// (0x0002fcf9) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0003a247) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0003a247) list_double_time_pane_t

0x4f9d,	// (0x0002fb8c) list_setting_pane_g1_ParamLimits

0x4f9d,	// (0x0002fb8c) list_setting_pane_g1

0x4ec8,	// (0x0002fab7) list_setting_pane_g2_ParamLimits

0x4ec8,	// (0x0002fab7) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003a250) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003a250) list_setting_pane_g

0x511c,	// (0x0002fd0b) list_setting_pane_t1_ParamLimits

0x511c,	// (0x0002fd0b) list_setting_pane_t1

0x5136,	// (0x0002fd25) list_setting_pane_t2_ParamLimits

0x5136,	// (0x0002fd25) list_setting_pane_t2

0x0002,

0xf666,	// (0x0003a255) list_setting_pane_t_ParamLimits

0xf666,	// (0x0003a255) list_setting_pane_t

0x5175,	// (0x0002fd64) set_value_pane_cp_ParamLimits

0x5175,	// (0x0002fd64) set_value_pane_cp

0x5181,	// (0x0002fd70) list_setting_number_pane_g1_ParamLimits

0x5181,	// (0x0002fd70) list_setting_number_pane_g1

0x518d,	// (0x0002fd7c) list_setting_number_pane_g2_ParamLimits

0x518d,	// (0x0002fd7c) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0003a25c) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0003a25c) list_setting_number_pane_g

0x5199,	// (0x0002fd88) list_setting_number_pane_t1_ParamLimits

0x5199,	// (0x0002fd88) list_setting_number_pane_t1

0x51b2,	// (0x0002fda1) list_setting_number_pane_t2_ParamLimits

0x51b2,	// (0x0002fda1) list_setting_number_pane_t2

0x51cc,	// (0x0002fdbb) list_setting_number_pane_t3_ParamLimits

0x51cc,	// (0x0002fdbb) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003a261) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003a261) list_setting_number_pane_t

0x5175,	// (0x0002fd64) set_value_pane_ParamLimits

0x5175,	// (0x0002fd64) set_value_pane

0x8755,	// (0x00033344) bg_set_opt_pane_ParamLimits

0x8755,	// (0x00033344) bg_set_opt_pane

0x520f,	// (0x0002fdfe) set_value_pane_t1

0x8776,	// (0x00033365) slider_set_pane_cp3

0x877f,	// (0x0003336e) volume_small_pane_cp

0x8788,	// (0x00033377) list_form_gen_pane

0x8791,	// (0x00033380) scroll_pane_cp8

0x5225,	// (0x0002fe14) form_field_data_pane_ParamLimits

0x5225,	// (0x0002fe14) form_field_data_pane

0x5245,	// (0x0002fe34) form_field_data_wide_pane_ParamLimits

0x5245,	// (0x0002fe34) form_field_data_wide_pane

0x5266,	// (0x0002fe55) form_field_popup_pane_ParamLimits

0x5266,	// (0x0002fe55) form_field_popup_pane

0x5286,	// (0x0002fe75) form_field_popup_wide_pane_ParamLimits

0x5286,	// (0x0002fe75) form_field_popup_wide_pane

0x52a3,	// (0x0002fe92) form_field_slider_pane_ParamLimits

0x52a3,	// (0x0002fe92) form_field_slider_pane

0x52b6,	// (0x0002fea5) form_field_slider_wide_pane_ParamLimits

0x52b6,	// (0x0002fea5) form_field_slider_wide_pane

0x87a2,	// (0x00033391) data_form_pane

0x52d3,	// (0x0002fec2) form_field_data_pane_t1

0x87ae,	// (0x0003339d) input_focus_pane

0x52eb,	// (0x0002feda) data_form_wide_pane

0x5308,	// (0x0002fef7) form_field_data_wide_pane_t1

0x851f,	// (0x0003310e) input_focus_pane_cp6

0x532a,	// (0x0002ff19) form_field_popup_pane_t1

0x87ae,	// (0x0003339d) input_focus_pane_cp7

0x87dc,	// (0x000333cb) list_form_pane

0x534a,	// (0x0002ff39) form_field_popup_wide_pane_t1

0x87ae,	// (0x0003339d) input_focus_pane_cp8

0x87e8,	// (0x000333d7) list_form_wide_pane

0x5367,	// (0x0002ff56) form_field_slider_pane_t1_ParamLimits

0x5367,	// (0x0002ff56) form_field_slider_pane_t1

0x537d,	// (0x0002ff6c) form_field_slider_pane_t2_ParamLimits

0x537d,	// (0x0002ff6c) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003a271) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003a271) form_field_slider_pane_t

0x81ba,	// (0x00032da9) input_focus_pane_cp9_ParamLimits

0x81ba,	// (0x00032da9) input_focus_pane_cp9

0x5392,	// (0x0002ff81) slider_cont_pane_ParamLimits

0x5392,	// (0x0002ff81) slider_cont_pane

0x87f7,	// (0x000333e6) form_field_slider_wide_pane_t1_ParamLimits

0x87f7,	// (0x000333e6) form_field_slider_wide_pane_t1

0x53a6,	// (0x0002ff95) form_field_slider_wide_pane_t2_ParamLimits

0x53a6,	// (0x0002ff95) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0003a276) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0003a276) form_field_slider_wide_pane_t

0x81ba,	// (0x00032da9) input_focus_pane_cp10_ParamLimits

0x81ba,	// (0x00032da9) input_focus_pane_cp10

0x53b8,	// (0x0002ffa7) slider_cont_pane_cp1_ParamLimits

0x53b8,	// (0x0002ffa7) slider_cont_pane_cp1

0x53cc,	// (0x0002ffbb) slider_form_pane_cp

0x8809,	// (0x000333f8) input_focus_pane_g1

0x8811,	// (0x00033400) input_focus_pane_g2

0x8819,	// (0x00033408) input_focus_pane_g3

0x8821,	// (0x00033410) input_focus_pane_g4

0x8829,	// (0x00033418) input_focus_pane_g5

0x8831,	// (0x00033420) input_focus_pane_g6

0x8839,	// (0x00033428) input_focus_pane_g7

0x8841,	// (0x00033430) input_focus_pane_g8

0x8849,	// (0x00033438) input_focus_pane_g9

0x76a4,	// (0x00032293) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0003a27b) input_focus_pane_g

0xa29b,	// (0x00034e8a) wait_border_pane_g3_copy1

0x53d4,	// (0x0002ffc3) data_form_pane_t1

0x76a4,	// (0x00032293) wait_anim_pane_g1_copy1

0x6575,	// (0x00031164) data_form_wide_pane_t1

0x53ef,	// (0x0002ffde) list_form_graphic_pane_cp_ParamLimits

0x53ef,	// (0x0002ffde) list_form_graphic_pane_cp

0xb1c8,	// (0x00035db7) slider_form_pane_g1

0xb1d1,	// (0x00035dc0) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0003a57e) slider_form_pane_g

0x5408,	// (0x0002fff7) list_form_graphic_pane_ParamLimits

0x5408,	// (0x0002fff7) list_form_graphic_pane

0x5424,	// (0x00030013) list_form_graphic_pane_g1

0x542c,	// (0x0003001b) list_form_graphic_pane_t1_ParamLimits

0x542c,	// (0x0003001b) list_form_graphic_pane_t1

0x778e,	// (0x0003237d) list_highlight_pane_cp5_ParamLimits

0x778e,	// (0x0003237d) list_highlight_pane_cp5

0x5441,	// (0x00030030) find_pane_g1

0x8851,	// (0x00033440) input_find_pane

0x544a,	// (0x00030039) input_find_pane_g1_ParamLimits

0x544a,	// (0x00030039) input_find_pane_g1

0x5456,	// (0x00030045) input_find_pane_t1_ParamLimits

0x5456,	// (0x00030045) input_find_pane_t1

0x546b,	// (0x0003005a) input_find_pane_t2_ParamLimits

0x546b,	// (0x0003005a) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003a290) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003a290) input_find_pane_t

0x885a,	// (0x00033449) input_focus_pane_cp5_ParamLimits

0x885a,	// (0x00033449) input_focus_pane_cp5

0x8874,	// (0x00033463) bg_popup_window_pane_cp2_ParamLimits

0x8874,	// (0x00033463) bg_popup_window_pane_cp2

0x8881,	// (0x00033470) listscroll_menu_pane_ParamLimits

0x8881,	// (0x00033470) listscroll_menu_pane

0x888d,	// (0x0003347c) popup_submenu_window_ParamLimits

0x888d,	// (0x0003347c) popup_submenu_window

0x88b9,	// (0x000334a8) find_popup_pane_g1

0x88c1,	// (0x000334b0) input_popup_find_pane_cp

0x885a,	// (0x00033449) input_focus_pane_cp4_ParamLimits

0x885a,	// (0x00033449) input_focus_pane_cp4

0x88d7,	// (0x000334c6) input_popup_find_pane_t1_ParamLimits

0x88d7,	// (0x000334c6) input_popup_find_pane_t1

0x76ae,	// (0x0003229d) bg_popup_sub_pane_cp

0x8905,	// (0x000334f4) listscroll_popup_sub_pane

0x890d,	// (0x000334fc) list_submenu_pane_ParamLimits

0x890d,	// (0x000334fc) list_submenu_pane

0x891e,	// (0x0003350d) scroll_pane_cp4

0x8926,	// (0x00033515) list_single_popup_submenu_pane_ParamLimits

0x8926,	// (0x00033515) list_single_popup_submenu_pane

0x893a,	// (0x00033529) list_single_popup_submenu_pane_g1

0x8942,	// (0x00033531) list_single_popup_submenu_pane_t1_ParamLimits

0x8942,	// (0x00033531) list_single_popup_submenu_pane_t1

0x778e,	// (0x0003237d) bg_active_tab_pane_cp1_ParamLimits

0x778e,	// (0x0003237d) bg_active_tab_pane_cp1

0x8957,	// (0x00033546) tabs_2_active_pane_g1

0x895f,	// (0x0003354e) tabs_2_active_pane_t1

0x778e,	// (0x0003237d) bg_passive_tab_pane_cp1_ParamLimits

0x778e,	// (0x0003237d) bg_passive_tab_pane_cp1

0x8957,	// (0x00033546) tabs_2_passive_pane_g1

0x895f,	// (0x0003354e) tabs_2_passive_pane_t1

0x8971,	// (0x00033560) bg_active_tab_pane_cp4

0x897f,	// (0x0003356e) tabs_2_long_active_pane_t1

0x8992,	// (0x00033581) bg_passive_tab_pane_cp4

0x614f,	// (0x00030d3e) list_single_midp_graphic_pane_g4_ParamLimits

0x8971,	// (0x00033560) bg_active_tab_pane_cp5

0x899e,	// (0x0003358d) tabs_3_long_active_pane_t1

0x8992,	// (0x00033581) bg_passive_tab_pane_cp5

0x614f,	// (0x00030d3e) list_single_midp_graphic_pane_g4

0x778e,	// (0x0003237d) bg_popup_window_pane_cp13_ParamLimits

0x778e,	// (0x0003237d) bg_popup_window_pane_cp13

0x89b9,	// (0x000335a8) listscroll_popup_fast_pane_ParamLimits

0x89b9,	// (0x000335a8) listscroll_popup_fast_pane

0x89c8,	// (0x000335b7) grid_popup_fast_pane_ParamLimits

0x89c8,	// (0x000335b7) grid_popup_fast_pane

0x89da,	// (0x000335c9) scroll_pane_cp9_ParamLimits

0x89da,	// (0x000335c9) scroll_pane_cp9

0xcae3,	// (0x000376d2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae3,	// (0x000376d2) list_single_graphic_hl_pane_t1_cp2

0x89fe,	// (0x000335ed) input_focus_pane_cp20_ParamLimits

0x89fe,	// (0x000335ed) input_focus_pane_cp20

0x8a0c,	// (0x000335fb) query_popup_data_pane_t1_ParamLimits

0x8a0c,	// (0x000335fb) query_popup_data_pane_t1

0x8a1f,	// (0x0003360e) query_popup_data_pane_t2_ParamLimits

0x8a1f,	// (0x0003360e) query_popup_data_pane_t2

0x8a65,	// (0x00033654) query_popup_data_pane_t3_ParamLimits

0x8a65,	// (0x00033654) query_popup_data_pane_t3

0x8aa6,	// (0x00033695) query_popup_data_pane_t4_ParamLimits

0x8aa6,	// (0x00033695) query_popup_data_pane_t4

0x8ae2,	// (0x000336d1) query_popup_data_pane_t5_ParamLimits

0x8ae2,	// (0x000336d1) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0003a295) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0003a295) query_popup_data_pane_t

0x8809,	// (0x000333f8) bg_set_opt_pane_g1

0x8811,	// (0x00033400) bg_set_opt_pane_g2

0x8819,	// (0x00033408) bg_set_opt_pane_g3

0x8821,	// (0x00033410) bg_set_opt_pane_g4

0x8829,	// (0x00033418) bg_set_opt_pane_g5

0x8831,	// (0x00033420) bg_set_opt_pane_g6

0x8839,	// (0x00033428) bg_set_opt_pane_g7

0x8841,	// (0x00033430) bg_set_opt_pane_g8

0x8849,	// (0x00033438) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0003a2a0) bg_set_opt_pane_g

0x57a7,	// (0x00030396) control_top_pane_stacon_ParamLimits

0x57a7,	// (0x00030396) control_top_pane_stacon

0x57fa,	// (0x000303e9) signal_pane_stacon_ParamLimits

0x57fa,	// (0x000303e9) signal_pane_stacon

0x90d2,	// (0x00033cc1) stacon_top_pane_g1_ParamLimits

0x90d2,	// (0x00033cc1) stacon_top_pane_g1

0x581f,	// (0x0003040e) title_pane_stacon_ParamLimits

0x581f,	// (0x0003040e) title_pane_stacon

0x5849,	// (0x00030438) uni_indicator_pane_stacon_ParamLimits

0x5849,	// (0x00030438) uni_indicator_pane_stacon

0x585e,	// (0x0003044d) battery_pane_stacon_ParamLimits

0x585e,	// (0x0003044d) battery_pane_stacon

0x58a2,	// (0x00030491) control_bottom_pane_stacon_ParamLimits

0x58a2,	// (0x00030491) control_bottom_pane_stacon

0x58c5,	// (0x000304b4) navi_pane_stacon_ParamLimits

0x58c5,	// (0x000304b4) navi_pane_stacon

0x90f4,	// (0x00033ce3) stacon_bottom_pane_g1_ParamLimits

0x90f4,	// (0x00033ce3) stacon_bottom_pane_g1

0x5480,	// (0x0003006f) aid_levels_signal_lsc_ParamLimits

0x5480,	// (0x0003006f) aid_levels_signal_lsc

0x5496,	// (0x00030085) signal_pane_stacon_g1_ParamLimits

0x5496,	// (0x00030085) signal_pane_stacon_g1

0x54aa,	// (0x00030099) signal_pane_stacon_g2_ParamLimits

0x54aa,	// (0x00030099) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0003a2b3) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003a2b3) signal_pane_stacon_g

0x54df,	// (0x000300ce) title_pane_stacon_t1_ParamLimits

0x54df,	// (0x000300ce) title_pane_stacon_t1

0x8b26,	// (0x00033715) uni_indicator_pane_stacon_g1

0x8b30,	// (0x0003371f) uni_indicator_pane_stacon_g2

0x8b3a,	// (0x00033729) uni_indicator_pane_stacon_g3

0x8b44,	// (0x00033733) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0003a2bf) uni_indicator_pane_stacon_g

0x5504,	// (0x000300f3) control_top_pane_stacon_g1

0x550c,	// (0x000300fb) control_top_pane_stacon_t1_ParamLimits

0x550c,	// (0x000300fb) control_top_pane_stacon_t1

0x5543,	// (0x00030132) aid_levels_battery_lsc_ParamLimits

0x5543,	// (0x00030132) aid_levels_battery_lsc

0x555a,	// (0x00030149) battery_pane_stacon_g1_ParamLimits

0x555a,	// (0x00030149) battery_pane_stacon_g1

0x556d,	// (0x0003015c) battery_pane_stacon_g2_ParamLimits

0x556d,	// (0x0003015c) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0003a2c8) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0003a2c8) battery_pane_stacon_g

0x55ab,	// (0x0003019a) navi_icon_pane_stacon

0x55bf,	// (0x000301ae) navi_navi_pane_stacon

0x55ab,	// (0x0003019a) navi_text_pane_stacon

0x5504,	// (0x000300f3) control_bottom_pane_stacon_g1

0x55d3,	// (0x000301c2) control_bottom_pane_stacon_t1_ParamLimits

0x55d3,	// (0x000301c2) control_bottom_pane_stacon_t1

0x8b68,	// (0x00033757) grid_app_pane_ParamLimits

0x8b68,	// (0x00033757) grid_app_pane

0x8b8c,	// (0x0003377b) scroll_pane_cp15_ParamLimits

0x8b8c,	// (0x0003377b) scroll_pane_cp15

0x8b9f,	// (0x0003378e) cell_app_pane_ParamLimits

0x8b9f,	// (0x0003378e) cell_app_pane

0x8bc3,	// (0x000337b2) cell_app_pane_g1_ParamLimits

0x8bc3,	// (0x000337b2) cell_app_pane_g1

0x8be7,	// (0x000337d6) cell_app_pane_g2_ParamLimits

0x8be7,	// (0x000337d6) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0003a2cd) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0003a2cd) cell_app_pane_g

0x8bf3,	// (0x000337e2) cell_app_pane_t1_ParamLimits

0x8bf3,	// (0x000337e2) cell_app_pane_t1

0x8c0a,	// (0x000337f9) grid_highlight_pane_ParamLimits

0x8c0a,	// (0x000337f9) grid_highlight_pane

0x8809,	// (0x000333f8) cell_highlight_pane_g1

0x8811,	// (0x00033400) cell_highlight_pane_g2

0x8819,	// (0x00033408) cell_highlight_pane_g3

0x8821,	// (0x00033410) cell_highlight_pane_g4

0x8829,	// (0x00033418) cell_highlight_pane_g5

0x8831,	// (0x00033420) cell_highlight_pane_g6

0x8839,	// (0x00033428) cell_highlight_pane_g7

0x8841,	// (0x00033430) cell_highlight_pane_g8

0x8849,	// (0x00033438) cell_highlight_pane_g9

0x76a4,	// (0x00032293) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0003a27b) cell_highlight_pane_g

0x8c1b,	// (0x0003380a) bg_scroll_pane

0x561d,	// (0x0003020c) scroll_handle_pane

0x8c62,	// (0x00033851) scroll_bg_pane_g1

0x8c77,	// (0x00033866) scroll_bg_pane_g2

0x8c8f,	// (0x0003387e) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0003a2d2) scroll_bg_pane_g

0x8ca4,	// (0x00033893) scroll_handle_focus_pane_ParamLimits

0x8ca4,	// (0x00033893) scroll_handle_focus_pane

0x8c62,	// (0x00033851) scroll_handle_pane_g1

0x8cb1,	// (0x000338a0) scroll_handle_pane_g2

0x8c8f,	// (0x0003387e) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0003a2d9) scroll_handle_pane_g

0x885a,	// (0x00033449) bg_popup_sub_pane_cp21_ParamLimits

0x885a,	// (0x00033449) bg_popup_sub_pane_cp21

0x8cc5,	// (0x000338b4) popup_fep_japan_predictive_window_t1_ParamLimits

0x8cc5,	// (0x000338b4) popup_fep_japan_predictive_window_t1

0x8cdf,	// (0x000338ce) popup_fep_japan_predictive_window_t2_ParamLimits

0x8cdf,	// (0x000338ce) popup_fep_japan_predictive_window_t2

0x8d12,	// (0x00033901) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d12,	// (0x00033901) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0003a2e0) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0003a2e0) popup_fep_japan_predictive_window_t

0x76ae,	// (0x0003229d) bg_popup_sub_pane_cp23

0x8d49,	// (0x00033938) listscroll_japin_cand_pane

0x8d51,	// (0x00033940) popup_fep_japan_candidate_window_t1

0x8d5f,	// (0x0003394e) candidate_pane_ParamLimits

0x8d5f,	// (0x0003394e) candidate_pane

0x8d71,	// (0x00033960) scroll_pane_cp30

0x8d79,	// (0x00033968) list_single_popup_jap_candidate_pane_ParamLimits

0x8d79,	// (0x00033968) list_single_popup_jap_candidate_pane

0x76ae,	// (0x0003229d) list_highlight_pane_cp30

0x8d8e,	// (0x0003397d) list_single_popup_jap_candidate_pane_t1

0x8d9d,	// (0x0003398c) level_1_signal

0x8daf,	// (0x0003399e) level_2_signal

0x8dc2,	// (0x000339b1) level_3_signal

0x8dd5,	// (0x000339c4) level_4_signal

0x8de8,	// (0x000339d7) level_5_signal

0x8dfb,	// (0x000339ea) level_6_signal

0x8e0e,	// (0x000339fd) level_7_signal

0x8d9d,	// (0x0003398c) level_1_battery

0x8daf,	// (0x0003399e) level_2_battery

0x8dc2,	// (0x000339b1) level_3_battery

0x8dd5,	// (0x000339c4) level_4_battery

0x8de8,	// (0x000339d7) level_5_battery

0x8dfb,	// (0x000339ea) level_6_battery

0x8e0e,	// (0x000339fd) level_7_battery

0x8e39,	// (0x00033a28) list_menu_pane_ParamLimits

0x8e39,	// (0x00033a28) list_menu_pane

0x8e4f,	// (0x00033a3e) scroll_pane_cp25_ParamLimits

0x8e4f,	// (0x00033a3e) scroll_pane_cp25

0x8e68,	// (0x00033a57) list_double2_graphic_pane_cp2_ParamLimits

0x8e68,	// (0x00033a57) list_double2_graphic_pane_cp2

0x8e68,	// (0x00033a57) list_double2_large_graphic_pane_cp2_ParamLimits

0x8e68,	// (0x00033a57) list_double2_large_graphic_pane_cp2

0x8e68,	// (0x00033a57) list_double2_pane_cp2_ParamLimits

0x8e68,	// (0x00033a57) list_double2_pane_cp2

0x8e68,	// (0x00033a57) list_double_graphic_pane_cp2_ParamLimits

0x8e68,	// (0x00033a57) list_double_graphic_pane_cp2

0x8e68,	// (0x00033a57) list_double_large_graphic_pane_cp2_ParamLimits

0x8e68,	// (0x00033a57) list_double_large_graphic_pane_cp2

0x8e68,	// (0x00033a57) list_double_number_pane_cp2_ParamLimits

0x8e68,	// (0x00033a57) list_double_number_pane_cp2

0x8e68,	// (0x00033a57) list_double_pane_cp2_ParamLimits

0x8e68,	// (0x00033a57) list_double_pane_cp2

0x8e8c,	// (0x00033a7b) list_single_2graphic_pane_cp2_ParamLimits

0x8e8c,	// (0x00033a7b) list_single_2graphic_pane_cp2

0x8e8c,	// (0x00033a7b) list_single_graphic_heading_pane_cp2_ParamLimits

0x8e8c,	// (0x00033a7b) list_single_graphic_heading_pane_cp2

0x8e8c,	// (0x00033a7b) list_single_graphic_pane_cp2_ParamLimits

0x8e8c,	// (0x00033a7b) list_single_graphic_pane_cp2

0x8e8c,	// (0x00033a7b) list_single_heading_pane_cp2_ParamLimits

0x8e8c,	// (0x00033a7b) list_single_heading_pane_cp2

0x8ea5,	// (0x00033a94) list_single_large_graphic_pane_cp2_ParamLimits

0x8ea5,	// (0x00033a94) list_single_large_graphic_pane_cp2

0x8e8c,	// (0x00033a7b) list_single_number_heading_pane_cp2_ParamLimits

0x8e8c,	// (0x00033a7b) list_single_number_heading_pane_cp2

0x8e8c,	// (0x00033a7b) list_single_number_pane_cp2_ParamLimits

0x8e8c,	// (0x00033a7b) list_single_number_pane_cp2

0x8e8c,	// (0x00033a7b) list_single_pane_cp2_ParamLimits

0x8e8c,	// (0x00033a7b) list_single_pane_cp2

0x8f21,	// (0x00033b10) bg_popup_sub_pane_cp22

0x56cf,	// (0x000302be) popup_side_volume_key_window_g1

0x56f9,	// (0x000302e8) popup_side_volume_key_window_t1

0x5715,	// (0x00030304) volume_small_pane_cp1

0x81ba,	// (0x00032da9) bg_popup_sub_pane_cp24_ParamLimits

0x81ba,	// (0x00032da9) bg_popup_sub_pane_cp24

0x8f37,	// (0x00033b26) fep_china_uni_candidate_pane_ParamLimits

0x8f37,	// (0x00033b26) fep_china_uni_candidate_pane

0x8f4b,	// (0x00033b3a) fep_china_uni_entry_pane

0x8f5b,	// (0x00033b4a) popup_fep_china_uni_window_g1

0x8f77,	// (0x00033b66) fep_china_uni_entry_pane_g1

0x8f7f,	// (0x00033b6e) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0003a311) fep_china_uni_entry_pane_g

0x8f87,	// (0x00033b76) fep_entry_item_pane

0x8f91,	// (0x00033b80) fep_candidate_item_pane

0x8f99,	// (0x00033b88) fep_china_uni_candidate_pane_g1

0x8fa1,	// (0x00033b90) fep_china_uni_candidate_pane_g2

0x8fa9,	// (0x00033b98) fep_china_uni_candidate_pane_g3

0x8fb1,	// (0x00033ba0) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0003a316) fep_china_uni_candidate_pane_g

0x76a4,	// (0x00032293) fep_entry_item_pane_g1

0x8fb9,	// (0x00033ba8) fep_entry_item_pane_t1_ParamLimits

0x8fb9,	// (0x00033ba8) fep_entry_item_pane_t1

0x8fcf,	// (0x00033bbe) fep_candidate_item_pane_t1_ParamLimits

0x8fcf,	// (0x00033bbe) fep_candidate_item_pane_t1

0x8fe4,	// (0x00033bd3) fep_candidate_item_pane_t2_ParamLimits

0x8fe4,	// (0x00033bd3) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003a31f) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003a31f) fep_candidate_item_pane_t

0x778e,	// (0x0003237d) list_highlight_pane_cp31_ParamLimits

0x778e,	// (0x0003237d) list_highlight_pane_cp31

0x8ff6,	// (0x00033be5) level_1_signal_lsc

0x8fff,	// (0x00033bee) level_2_signal_lsc

0x9008,	// (0x00033bf7) level_3_signal_lsc

0x9011,	// (0x00033c00) level_4_signal_lsc

0x901a,	// (0x00033c09) level_5_signal_lsc

0x9023,	// (0x00033c12) level_6_signal_lsc

0x902c,	// (0x00033c1b) level_7_signal_lsc

0x902c,	// (0x00033c1b) level_1_battery_lsc

0x9035,	// (0x00033c24) level_2_battery_lsc

0x903e,	// (0x00033c2d) level_3_battery_lsc

0x9047,	// (0x00033c36) level_4_battery_lsc

0x9050,	// (0x00033c3f) level_5_battery_lsc

0x9059,	// (0x00033c48) level_6_battery_lsc

0x8ff6,	// (0x00033be5) level_7_battery_lsc

0x9062,	// (0x00033c51) scroll_handle_focus_pane_g1

0x906b,	// (0x00033c5a) scroll_handle_focus_pane_g2

0x9074,	// (0x00033c63) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0003a324) scroll_handle_focus_pane_g

0x571d,	// (0x0003030c) list_single_2graphic_pane_g1_ParamLimits

0x571d,	// (0x0003030c) list_single_2graphic_pane_g1

0x4e12,	// (0x0002fa01) list_single_2graphic_pane_g2_ParamLimits

0x4e12,	// (0x0002fa01) list_single_2graphic_pane_g2

0x4d98,	// (0x0002f987) list_single_2graphic_pane_g3_ParamLimits

0x4d98,	// (0x0002f987) list_single_2graphic_pane_g3

0x5729,	// (0x00030318) list_single_2graphic_pane_g4_ParamLimits

0x5729,	// (0x00030318) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0003a32b) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0003a32b) list_single_2graphic_pane_g

0x5735,	// (0x00030324) list_single_2graphic_pane_t1_ParamLimits

0x5735,	// (0x00030324) list_single_2graphic_pane_t1

0x5763,	// (0x00030352) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5763,	// (0x00030352) list_double2_graphic_large_graphic_pane_g1

0x4eb7,	// (0x0002faa6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4eb7,	// (0x0002faa6) list_double2_graphic_large_graphic_pane_g2

0x4ec8,	// (0x0002fab7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4ec8,	// (0x0002fab7) list_double2_graphic_large_graphic_pane_g3

0x5773,	// (0x00030362) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5773,	// (0x00030362) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0003a334) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0003a334) list_double2_graphic_large_graphic_pane_g

0x577f,	// (0x0003036e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x577f,	// (0x0003036e) list_double2_graphic_large_graphic_pane_t1

0x5795,	// (0x00030384) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5795,	// (0x00030384) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003a33d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003a33d) list_double2_graphic_large_graphic_pane_t

0x91bc,	// (0x00033dab) popup_fast_swap_window_ParamLimits

0x91bc,	// (0x00033dab) popup_fast_swap_window

0x91d8,	// (0x00033dc7) popup_side_volume_key_window

0x91f4,	// (0x00033de3) stacon_top_pane

0x91fe,	// (0x00033ded) status_pane_ParamLimits

0x91fe,	// (0x00033ded) status_pane

0x920c,	// (0x00033dfb) status_small_pane

0x76ae,	// (0x0003229d) control_pane

0x76ae,	// (0x0003229d) stacon_bottom_pane

0x8791,	// (0x00033380) scroll_pane_cp121

0x8788,	// (0x00033377) set_content_pane

0x907d,	// (0x00033c6c) bg_active_tab_pane_g1_cp1

0x9086,	// (0x00033c75) bg_active_tab_pane_g2_cp1

0x908f,	// (0x00033c7e) bg_active_tab_pane_g3_cp1

0x907d,	// (0x00033c6c) bg_passive_tab_pane_g1_cp1

0x9086,	// (0x00033c75) bg_passive_tab_pane_g2_cp1

0x908f,	// (0x00033c7e) bg_passive_tab_pane_g3_cp1

0x9098,	// (0x00033c87) bg_active_tab_pane_g1_cp2

0x9086,	// (0x00033c75) bg_active_tab_pane_g2_cp2

0x90a1,	// (0x00033c90) bg_active_tab_pane_g3_cp2

0x9098,	// (0x00033c87) bg_passive_tab_pane_g1_cp2

0x9086,	// (0x00033c75) bg_passive_tab_pane_g2_cp2

0x90a1,	// (0x00033c90) bg_passive_tab_pane_g3_cp2

0x90aa,	// (0x00033c99) bg_active_tab_pane_g1_cp3

0x9086,	// (0x00033c75) bg_active_tab_pane_g2_cp3

0x90b3,	// (0x00033ca2) bg_active_tab_pane_g3_cp3

0x90aa,	// (0x00033c99) bg_passive_tab_pane_g1_cp3

0x9086,	// (0x00033c75) bg_passive_tab_pane_g2_cp3

0x90b3,	// (0x00033ca2) bg_passive_tab_pane_g3_cp3

0x90bc,	// (0x00033cab) bg_active_tab_pane_g1_cp4

0x9086,	// (0x00033c75) bg_active_tab_pane_g2_cp4

0x90c7,	// (0x00033cb6) bg_active_tab_pane_g3_cp4

0x90bc,	// (0x00033cab) bg_passive_tab_pane_g1_cp4

0x9086,	// (0x00033c75) bg_passive_tab_pane_g2_cp4

0x90c7,	// (0x00033cb6) bg_passive_tab_pane_g3_cp4

0x9110,	// (0x00033cff) bg_active_tab_pane_g1_cp5

0x9086,	// (0x00033c75) bg_active_tab_pane_g2_cp5

0x9119,	// (0x00033d08) bg_active_tab_pane_g3_cp5

0x9110,	// (0x00033cff) bg_passive_tab_pane_g1_cp5

0x9086,	// (0x00033c75) bg_passive_tab_pane_g2_cp5

0x9119,	// (0x00033d08) bg_passive_tab_pane_g3_cp5

0x9122,	// (0x00033d11) list_set_graphic_pane_ParamLimits

0x9122,	// (0x00033d11) list_set_graphic_pane

0x76ae,	// (0x0003229d) bg_set_opt_pane_cp4

0x913f,	// (0x00033d2e) list_set_graphic_pane_g1_ParamLimits

0x913f,	// (0x00033d2e) list_set_graphic_pane_g1

0x914b,	// (0x00033d3a) list_set_graphic_pane_g2_ParamLimits

0x914b,	// (0x00033d3a) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003a342) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003a342) list_set_graphic_pane_g

0x0009,

0xfac8,	// (0x0003a6b7) volume_small_pane_cp_g

0x916f,	// (0x00033d5e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x916f,	// (0x00033d5e) list_double2_large_graphic_pane_g1_cp2

0x917b,	// (0x00033d6a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x917b,	// (0x00033d6a) list_double2_large_graphic_pane_g2_cp2

0x918c,	// (0x00033d7b) list_double2_large_graphic_pane_g3_cp2

0x9194,	// (0x00033d83) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9194,	// (0x00033d83) list_double2_large_graphic_pane_t1_cp2

0x91aa,	// (0x00033d99) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x91aa,	// (0x00033d99) list_double2_large_graphic_pane_t2_cp2

0xad7a,	// (0x00035969) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad7a,	// (0x00035969) list_double_large_graphic_pane_g1_cp2

0xad8b,	// (0x0003597a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad8b,	// (0x0003597a) list_double_large_graphic_pane_g2_cp2

0x9325,	// (0x00033f14) list_double_large_graphic_pane_g3_cp2

0xad9c,	// (0x0003598b) list_double_large_graphic_pane_g4_cp

0xada4,	// (0x00035993) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xada4,	// (0x00035993) list_double_large_graphic_pane_t1_cp2

0xadbb,	// (0x000359aa) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xadbb,	// (0x000359aa) list_double_large_graphic_pane_t2_cp2

0x9217,	// (0x00033e06) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9217,	// (0x00033e06) list_double2_graphic_pane_g1_cp2

0x9225,	// (0x00033e14) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9225,	// (0x00033e14) list_double2_graphic_pane_g2_cp2

0x9236,	// (0x00033e25) list_double2_graphic_pane_g3_cp2

0x9240,	// (0x00033e2f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9240,	// (0x00033e2f) list_double2_graphic_pane_t1_cp2

0x9256,	// (0x00033e45) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9256,	// (0x00033e45) list_double2_graphic_pane_t2_cp2

0x9268,	// (0x00033e57) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9268,	// (0x00033e57) list_single_number_heading_pane_g1_cp2

0x9274,	// (0x00033e63) list_single_number_heading_pane_g2_cp2

0x927c,	// (0x00033e6b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x927c,	// (0x00033e6b) list_single_number_heading_pane_t1_cp2

0x9292,	// (0x00033e81) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9292,	// (0x00033e81) list_single_number_heading_pane_t2_cp2

0x92a4,	// (0x00033e93) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92a4,	// (0x00033e93) list_single_number_heading_pane_t3_cp2

0x9268,	// (0x00033e57) list_single_heading_pane_g1_cp2_ParamLimits

0x9268,	// (0x00033e57) list_single_heading_pane_g1_cp2

0x9274,	// (0x00033e63) list_single_heading_pane_g2_cp2

0x927c,	// (0x00033e6b) list_single_heading_pane_t1_cp2_ParamLimits

0x927c,	// (0x00033e6b) list_single_heading_pane_t1_cp2

0xab82,	// (0x00035771) list_single_heading_pane_t2_cp2_ParamLimits

0xab82,	// (0x00035771) list_single_heading_pane_t2_cp2

0xaaca,	// (0x000356b9) list_double_graphic_pane_g1_cp2_ParamLimits

0xaaca,	// (0x000356b9) list_double_graphic_pane_g1_cp2

0xaad6,	// (0x000356c5) list_double_graphic_pane_g2_cp2_ParamLimits

0xaad6,	// (0x000356c5) list_double_graphic_pane_g2_cp2

0xaae5,	// (0x000356d4) list_double_graphic_pane_g3_cp2

0xaaed,	// (0x000356dc) list_double_graphic_pane_t1_cp2_ParamLimits

0xaaed,	// (0x000356dc) list_double_graphic_pane_t1_cp2

0xab03,	// (0x000356f2) list_double_graphic_pane_t2_cp2_ParamLimits

0xab03,	// (0x000356f2) list_double_graphic_pane_t2_cp2

0x9319,	// (0x00033f08) list_double_number_pane_g1_cp2_ParamLimits

0x9319,	// (0x00033f08) list_double_number_pane_g1_cp2

0x9325,	// (0x00033f14) list_double_number_pane_g2_cp2

0xaa8e,	// (0x0003567d) list_double_number_pane_t1_cp2_ParamLimits

0xaa8e,	// (0x0003567d) list_double_number_pane_t1_cp2

0xaaa2,	// (0x00035691) list_double_number_pane_t2_cp2_ParamLimits

0xaaa2,	// (0x00035691) list_double_number_pane_t2_cp2

0xaab8,	// (0x000356a7) list_double_number_pane_t3_cp2_ParamLimits

0xaab8,	// (0x000356a7) list_double_number_pane_t3_cp2

0xa96b,	// (0x0003555a) list_single_graphic_pane_g1_cp2_ParamLimits

0xa96b,	// (0x0003555a) list_single_graphic_pane_g1_cp2

0x937d,	// (0x00033f6c) list_single_graphic_pane_g2_cp2_ParamLimits

0x937d,	// (0x00033f6c) list_single_graphic_pane_g2_cp2

0x9389,	// (0x00033f78) list_single_graphic_pane_g3_cp2

0xa941,	// (0x00035530) list_single_graphic_pane_t1_cp2_ParamLimits

0xa941,	// (0x00035530) list_single_graphic_pane_t1_cp2

0x937d,	// (0x00033f6c) list_single_number_pane_g1_cp2_ParamLimits

0x937d,	// (0x00033f6c) list_single_number_pane_g1_cp2

0x9389,	// (0x00033f78) list_single_number_pane_g2_cp2

0xa941,	// (0x00035530) list_single_number_pane_t1_cp2_ParamLimits

0xa941,	// (0x00035530) list_single_number_pane_t1_cp2

0xa957,	// (0x00035546) list_single_number_pane_t2_cp2_ParamLimits

0xa957,	// (0x00035546) list_single_number_pane_t2_cp2

0x917b,	// (0x00033d6a) list_double2_pane_g1_cp2_ParamLimits

0x917b,	// (0x00033d6a) list_double2_pane_g1_cp2

0x918c,	// (0x00033d7b) list_double2_pane_g2_cp2

0x92f1,	// (0x00033ee0) list_double2_pane_t1_cp2_ParamLimits

0x92f1,	// (0x00033ee0) list_double2_pane_t1_cp2

0x9307,	// (0x00033ef6) list_double2_pane_t2_cp2_ParamLimits

0x9307,	// (0x00033ef6) list_double2_pane_t2_cp2

0x9319,	// (0x00033f08) list_double_pane_g1_cp2_ParamLimits

0x9319,	// (0x00033f08) list_double_pane_g1_cp2

0x9325,	// (0x00033f14) list_double_pane_g2_cp2

0x932d,	// (0x00033f1c) list_double_pane_t1_cp2_ParamLimits

0x932d,	// (0x00033f1c) list_double_pane_t1_cp2

0x9343,	// (0x00033f32) list_double_pane_t2_cp2_ParamLimits

0x9343,	// (0x00033f32) list_double_pane_t2_cp2

0x936d,	// (0x00033f5c) list_single_pane_cp2_g3

0x937d,	// (0x00033f6c) list_single_pane_g1_cp2_ParamLimits

0x937d,	// (0x00033f6c) list_single_pane_g1_cp2

0x9389,	// (0x00033f78) list_single_pane_g2_cp2

0x9391,	// (0x00033f80) list_single_pane_t1_cp2_ParamLimits

0x9391,	// (0x00033f80) list_single_pane_t1_cp2

0x93a9,	// (0x00033f98) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x93a9,	// (0x00033f98) list_single_large_graphic_pane_g1_cp2

0x93b5,	// (0x00033fa4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x93b5,	// (0x00033fa4) list_single_large_graphic_pane_g2_cp2

0x93c1,	// (0x00033fb0) list_single_large_graphic_pane_g3_cp2

0x93c9,	// (0x00033fb8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x93c9,	// (0x00033fb8) list_single_large_graphic_pane_g4_cp1

0x93e3,	// (0x00033fd2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x93e3,	// (0x00033fd2) list_single_large_graphic_pane_t1_cp2

0xa90d,	// (0x000354fc) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa90d,	// (0x000354fc) list_single_graphic_heading_pane_g1_cp2

0xa8da,	// (0x000354c9) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa8da,	// (0x000354c9) list_single_graphic_heading_pane_g4_cp2

0x9389,	// (0x00033f78) list_single_graphic_heading_pane_g5_cp2

0xa919,	// (0x00035508) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa919,	// (0x00035508) list_single_graphic_heading_pane_t1_cp2

0xa92f,	// (0x0003551e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa92f,	// (0x0003551e) list_single_graphic_heading_pane_t2_cp2

0xa8ce,	// (0x000354bd) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa8ce,	// (0x000354bd) list_single_2graphic_pane_g1_cp2

0xa8da,	// (0x000354c9) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa8da,	// (0x000354c9) list_single_2graphic_pane_g2_cp2

0x9389,	// (0x00033f78) list_single_2graphic_pane_g3_cp2

0xa8eb,	// (0x000354da) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa8eb,	// (0x000354da) list_single_2graphic_pane_g4_cp2

0xa8f7,	// (0x000354e6) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa8f7,	// (0x000354e6) list_single_2graphic_pane_t1_cp2

0x76a4,	// (0x00032293) list_highlight_pane_g10_cp1

0xa4a6,	// (0x00035095) list_highlight_pane_g1_cp1

0xa4ae,	// (0x0003509d) list_highlight_pane_g2_cp1

0xa4b6,	// (0x000350a5) list_highlight_pane_g3_cp1

0xa4be,	// (0x000350ad) list_highlight_pane_g4_cp1

0xa4c6,	// (0x000350b5) list_highlight_pane_g5_cp1

0xa4ce,	// (0x000350bd) list_highlight_pane_g6_cp1

0xa4d6,	// (0x000350c5) list_highlight_pane_g7_cp1

0xa4de,	// (0x000350cd) list_highlight_pane_g8_cp1

0xa4e6,	// (0x000350d5) list_highlight_pane_g9_cp1

0xa3c6,	// (0x00034fb5) form_field_slider_pane_t3

0xa3d4,	// (0x00034fc3) form_field_slider_pane_t4

0xa3e2,	// (0x00034fd1) slider_form_pane_ParamLimits

0xa3e2,	// (0x00034fd1) slider_form_pane

0x76ae,	// (0x0003229d) control_abbreviations

0x76ae,	// (0x0003229d) control_conventions

0x76ae,	// (0x0003229d) control_definitions

0x76ae,	// (0x0003229d) format_table_attribute

0xabcc,	// (0x000357bb) bg_popup_preview_window_pane_g9

0x76ae,	// (0x0003229d) format_table_data2

0x76ae,	// (0x0003229d) format_table_data3

0x76ae,	// (0x0003229d) format_table_data_example

0x0008,

0x76ae,	// (0x0003229d) intro_purpose

0xf8ef,	// (0x0003a4de) bg_popup_preview_window_pane_g

0x76ae,	// (0x0003229d) texts_category

0x76ae,	// (0x0003229d) texts_graphics

0x93f9,	// (0x00033fe8) text_digital

0x9408,	// (0x00033ff7) text_primary

0x9417,	// (0x00034006) text_primary_small

0x9426,	// (0x00034015) text_secondary

0x9435,	// (0x00034024) text_title

0xb307,	// (0x00035ef6) bg_passive_tab_pane_g1_cp3_srt

0x9086,	// (0x00033c75) bg_passive_tab_pane_g2_cp3_srt

0xb310,	// (0x00035eff) bg_passive_tab_pane_g3_cp3_srt

0x778e,	// (0x0003237d) bg_active_tab_pane_cp3_srt_ParamLimits

0x778e,	// (0x0003237d) bg_active_tab_pane_cp3_srt

0xb319,	// (0x00035f08) tabs_4_active_pane_srt_g1

0xb321,	// (0x00035f10) tabs_4_active_pane_srt_t1_ParamLimits

0xb321,	// (0x00035f10) tabs_4_active_pane_srt_t1

0xb307,	// (0x00035ef6) bg_active_tab_pane_g1_cp3_copy1

0x9086,	// (0x00033c75) bg_active_tab_pane_g2_cp3_copy1

0xb310,	// (0x00035eff) bg_active_tab_pane_g3_cp3_copy1

0x778e,	// (0x0003237d) tabs_2_long_active_pane_srt_ParamLimits

0x778e,	// (0x0003237d) tabs_2_long_active_pane_srt

0x778e,	// (0x0003237d) tabs_2_long_passive_pane_srt_ParamLimits

0x778e,	// (0x0003237d) tabs_2_long_passive_pane_srt

0x8992,	// (0x00033581) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8992,	// (0x00033581) bg_passive_tab_pane_cp4_srt

0xaffb,	// (0x00035bea) bg_passive_tab_pane_g1_cp4_srt

0x9086,	// (0x00033c75) bg_passive_tab_pane_g2_cp4_srt

0xb004,	// (0x00035bf3) bg_passive_tab_pane_g3_cp4_srt

0x8971,	// (0x00033560) bg_active_tab_pane_cp4_srt_ParamLimits

0x8971,	// (0x00033560) bg_active_tab_pane_cp4_srt

0xb00d,	// (0x00035bfc) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb00d,	// (0x00035bfc) tabs_2_long_active_pane_srt_t1

0xaffb,	// (0x00035bea) bg_active_tab_pane_g1_cp4_srt

0x9086,	// (0x00033c75) bg_active_tab_pane_g2_cp4_srt

0xb004,	// (0x00035bf3) bg_active_tab_pane_g3_cp4_srt

0x81ba,	// (0x00032da9) tabs_3_long_active_pane_srt_ParamLimits

0x81ba,	// (0x00032da9) tabs_3_long_active_pane_srt

0x81ba,	// (0x00032da9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x81ba,	// (0x00032da9) tabs_3_long_passive_pane_cp_srt

0x81ba,	// (0x00032da9) tabs_3_long_passive_pane_srt_ParamLimits

0x81ba,	// (0x00032da9) tabs_3_long_passive_pane_srt

0x8992,	// (0x00033581) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8992,	// (0x00033581) bg_passive_tab_pane_cp5_srt

0x9110,	// (0x00033cff) bg_passive_tab_pane_g1_cp5_srt

0x9086,	// (0x00033c75) bg_passive_tab_pane_g2_cp5_srt

0x9119,	// (0x00033d08) bg_passive_tab_pane_g3_cp5_srt

0x8971,	// (0x00033560) bg_active_tab_pane_cp5_srt_ParamLimits

0x8971,	// (0x00033560) bg_active_tab_pane_cp5_srt

0xafe9,	// (0x00035bd8) tabs_3_long_active_pane_srt_t1_ParamLimits

0xafe9,	// (0x00035bd8) tabs_3_long_active_pane_srt_t1

0x9110,	// (0x00033cff) bg_active_tab_pane_g1_cp5_srt

0x9086,	// (0x00033c75) bg_active_tab_pane_g2_cp5_srt

0x9119,	// (0x00033d08) bg_active_tab_pane_g3_cp5_srt

0xafdb,	// (0x00035bca) navi_text_pane_srt_t1

0xafd3,	// (0x00035bc2) navi_icon_pane_srt_g1

0x95fe,	// (0x000341ed) midp_editing_number_pane_srt

0x9444,	// (0x00034033) midp_ticker_pane_srt

0x9606,	// (0x000341f5) midp_ticker_pane_srt_g1

0x960e,	// (0x000341fd) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003a361) midp_ticker_pane_srt_g

0x9616,	// (0x00034205) midp_ticker_pane_srt_t1

0xafc4,	// (0x00035bb3) midp_editing_number_pane_t1_copy1

0x8992,	// (0x00033581) listscroll_midp_pane

0x8992,	// (0x00033581) midp_form_pane

0x94b0,	// (0x0003409f) midp_info_popup_window_ParamLimits

0x94b0,	// (0x0003409f) midp_info_popup_window

0x885a,	// (0x00033449) bg_popup_sub_pane_cp50_ParamLimits

0x885a,	// (0x00033449) bg_popup_sub_pane_cp50

0xa0de,	// (0x00034ccd) listscroll_midp_info_pane_ParamLimits

0xa0de,	// (0x00034ccd) listscroll_midp_info_pane

0xa0c6,	// (0x00034cb5) listscroll_form_midp_pane_ParamLimits

0xa0c6,	// (0x00034cb5) listscroll_form_midp_pane

0xa0d2,	// (0x00034cc1) scroll_bar_cp050

0xa0a6,	// (0x00034c95) list_midp_pane

0xbd5c,	// (0x0003694b) signal_pane_g2_cp

0x9fe0,	// (0x00034bcf) listscroll_midp_info_pane_t1_ParamLimits

0x9fe0,	// (0x00034bcf) listscroll_midp_info_pane_t1

0x9ff8,	// (0x00034be7) listscroll_midp_info_pane_t2_ParamLimits

0x9ff8,	// (0x00034be7) listscroll_midp_info_pane_t2

0xa036,	// (0x00034c25) listscroll_midp_info_pane_t3_ParamLimits

0xa036,	// (0x00034c25) listscroll_midp_info_pane_t3

0xa070,	// (0x00034c5f) listscroll_midp_info_pane_t4_ParamLimits

0xa070,	// (0x00034c5f) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0003a419) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0003a419) listscroll_midp_info_pane_t

0x891e,	// (0x0003350d) scroll_pane_cp21

0x9f7e,	// (0x00034b6d) form_midp_field_choice_group_pane

0x9f87,	// (0x00034b76) form_midp_field_text_pane

0x9fc6,	// (0x00034bb5) form_midp_field_time_pane

0x9fce,	// (0x00034bbd) form_midp_gauge_slider_pane

0x9fd7,	// (0x00034bc6) form_midp_gauge_wait_pane

0x76ae,	// (0x0003229d) form_midp_image_pane

0x62ef,	// (0x00030ede) list_single_midp_pane_ParamLimits

0x62ef,	// (0x00030ede) list_single_midp_pane

0x9f36,	// (0x00034b25) form_midp_field_text_pane_t1

0x9d00,	// (0x000348ef) input_focus_pane_cp050

0x9f6d,	// (0x00034b5c) list_midp_form_text_pane

0x9f05,	// (0x00034af4) form_midp_field_choice_group_pane_t1

0x9f13,	// (0x00034b02) input_focus_pane_cp051

0x9f27,	// (0x00034b16) list_midp_choice_pane

0x76ae,	// (0x0003229d) status_idle_pane

0x9ee9,	// (0x00034ad8) form_midp_field_time_pane_t1

0x76a4,	// (0x00032293) wait_anim_pane_g2_copy1

0x9ef7,	// (0x00034ae6) form_midp_field_time_pane_t2

0x0001,

0x955e,	// (0x0003414d) aid_navinavi_width_2_pane

0xf825,	// (0x0003a414) form_midp_field_time_pane_t

0x76ae,	// (0x0003229d) input_focus_pane_cp052

0x76ae,	// (0x0003229d) bg_input_focus_pane_cp040

0x9ea9,	// (0x00034a98) form_midp_gauge_slider_pane_t1

0x9eb7,	// (0x00034aa6) form_midp_gauge_slider_pane_t2

0x9ec5,	// (0x00034ab4) form_midp_gauge_slider_pane_t3

0x9ed3,	// (0x00034ac2) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0003a40b) form_midp_gauge_slider_pane_t

0x9ee1,	// (0x00034ad0) form_midp_slider_pane

0x778e,	// (0x0003237d) bg_input_focus_pane_cp041_ParamLimits

0x778e,	// (0x0003237d) bg_input_focus_pane_cp041

0x9e76,	// (0x00034a65) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e76,	// (0x00034a65) form_midp_gauge_wait_pane_t1

0x9e88,	// (0x00034a77) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e88,	// (0x00034a77) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0003a406) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0003a406) form_midp_gauge_wait_pane_t

0x9e9a,	// (0x00034a89) form_midp_wait_pane_ParamLimits

0x9e9a,	// (0x00034a89) form_midp_wait_pane

0x9e40,	// (0x00034a2f) form_midp_image_pane_g1

0x9e49,	// (0x00034a38) form_midp_image_pane_t1

0x9e58,	// (0x00034a47) form_midp_image_pane_t2

0x9e67,	// (0x00034a56) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0003a3ff) form_midp_image_pane_t

0x9e37,	// (0x00034a26) list_single_midp_pane_g1

0x62e0,	// (0x00030ecf) list_single_midp_pane_t1

0x9e0f,	// (0x000349fe) list_midp_form_item_pane_ParamLimits

0x9e0f,	// (0x000349fe) list_midp_form_item_pane

0x9506,	// (0x000340f5) list_midp_form_item_pane_t1

0x9515,	// (0x00034104) midp_ticker_pane_g1

0x9521,	// (0x00034110) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0003a347) midp_ticker_pane_g

0x952d,	// (0x0003411c) midp_ticker_pane_t1

0xb215,	// (0x00035e04) midp_editing_number_pane_t1

0xb1f3,	// (0x00035de2) midp_editing_number_pane

0xb202,	// (0x00035df1) midp_ticker_pane

0xafb4,	// (0x00035ba3) ai_message_heading_pane

0x76ae,	// (0x0003229d) bg_popup_window_pane_cp14

0xafbc,	// (0x00035bab) listscroll_ai_message_pane

0xaf3e,	// (0x00035b2d) ai_message_heading_pane_g1_ParamLimits

0xaf3e,	// (0x00035b2d) ai_message_heading_pane_g1

0xaf4a,	// (0x00035b39) ai_message_heading_pane_g2_ParamLimits

0xaf4a,	// (0x00035b39) ai_message_heading_pane_g2

0xaf56,	// (0x00035b45) ai_message_heading_pane_g3_ParamLimits

0xaf56,	// (0x00035b45) ai_message_heading_pane_g3

0xaf62,	// (0x00035b51) ai_message_heading_pane_g4_ParamLimits

0xaf62,	// (0x00035b51) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0003a540) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0003a540) ai_message_heading_pane_g

0xaf6e,	// (0x00035b5d) ai_message_heading_pane_t1_ParamLimits

0xaf6e,	// (0x00035b5d) ai_message_heading_pane_t1

0xaf88,	// (0x00035b77) ai_message_heading_pane_t2_ParamLimits

0xaf88,	// (0x00035b77) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0003a549) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0003a549) ai_message_heading_pane_t

0xaf9a,	// (0x00035b89) bg_popup_heading_pane_cp1_ParamLimits

0xaf9a,	// (0x00035b89) bg_popup_heading_pane_cp1

0xaf2c,	// (0x00035b1b) list_ai_message_pane_ParamLimits

0xaf2c,	// (0x00035b1b) list_ai_message_pane

0x891e,	// (0x0003350d) scroll_pane_cp10

0xaec8,	// (0x00035ab7) list_ai_message_pane_g1

0xaed0,	// (0x00035abf) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0003a51d) list_ai_message_pane_g

0xaed8,	// (0x00035ac7) list_ai_message_pane_t1_ParamLimits

0xaed8,	// (0x00035ac7) list_ai_message_pane_t1

0xaeed,	// (0x00035adc) list_ai_message_pane_t2_ParamLimits

0xaeed,	// (0x00035adc) list_ai_message_pane_t2

0xaf02,	// (0x00035af1) list_ai_message_pane_t3_ParamLimits

0xaf02,	// (0x00035af1) list_ai_message_pane_t3

0xaf17,	// (0x00035b06) list_ai_message_pane_t4_ParamLimits

0xaf17,	// (0x00035b06) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0003a522) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0003a522) list_ai_message_pane_t

0xaeb3,	// (0x00035aa2) cell_ai_soft_ind_pane_ParamLimits

0xaeb3,	// (0x00035aa2) cell_ai_soft_ind_pane

0x953f,	// (0x0003412e) cell_ai_soft_ind_pane_g1_ParamLimits

0x953f,	// (0x0003412e) cell_ai_soft_ind_pane_g1

0x76ae,	// (0x0003229d) grid_highlight_cp1

0x954c,	// (0x0003413b) text_secondary_cp56_ParamLimits

0x954c,	// (0x0003413b) text_secondary_cp56

0xae88,	// (0x00035a77) example_general_pane_ParamLimits

0xae88,	// (0x00035a77) example_general_pane

0xae94,	// (0x00035a83) example_parent_pane_g1_ParamLimits

0xae94,	// (0x00035a83) example_parent_pane_g1

0xaea0,	// (0x00035a8f) example_parent_pane_t1_ParamLimits

0xaea0,	// (0x00035a8f) example_parent_pane_t1

0x5e90,	// (0x00030a7f) popup_preview_text_window_ParamLimits

0x5e90,	// (0x00030a7f) popup_preview_text_window

0x9375,	// (0x00033f64) list_single_pane_cp2_g4

0x8270,	// (0x00032e5f) bg_popup_preview_window_pane_ParamLimits

0x8270,	// (0x00032e5f) bg_popup_preview_window_pane

0xabd4,	// (0x000357c3) popup_preview_text_window_t1_ParamLimits

0xabd4,	// (0x000357c3) popup_preview_text_window_t1

0xabf2,	// (0x000357e1) popup_preview_text_window_t2_ParamLimits

0xabf2,	// (0x000357e1) popup_preview_text_window_t2

0xac3b,	// (0x0003582a) popup_preview_text_window_t3_ParamLimits

0xac3b,	// (0x0003582a) popup_preview_text_window_t3

0xac80,	// (0x0003586f) popup_preview_text_window_t4_ParamLimits

0xac80,	// (0x0003586f) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0003a4f1) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0003a4f1) popup_preview_text_window_t

0xacfe,	// (0x000358ed) scroll_pane_cp11

0x9c8c,	// (0x0003487b) bg_popup_preview_window_pane_g1

0xab94,	// (0x00035783) bg_popup_preview_window_pane_g2

0xab9c,	// (0x0003578b) bg_popup_preview_window_pane_g3

0xaba4,	// (0x00035793) bg_popup_preview_window_pane_g4

0xabac,	// (0x0003579b) bg_popup_preview_window_pane_g5

0xabb4,	// (0x000357a3) bg_popup_preview_window_pane_g6

0xabbc,	// (0x000357ab) bg_popup_preview_window_pane_g7

0xabc4,	// (0x000357b3) bg_popup_preview_window_pane_g8

0x48e7,	// (0x0002f4d6) aid_popup_width_pane

0x5e6e,	// (0x00030a5d) popup_midp_note_alarm_window_ParamLimits

0x5e6e,	// (0x00030a5d) popup_midp_note_alarm_window

0x87a2,	// (0x00033391) data_form_pane_ParamLimits

0x52c9,	// (0x0002feb8) form_field_data_pane_g1

0x52d3,	// (0x0002fec2) form_field_data_pane_t1_ParamLimits

0x87ae,	// (0x0003339d) input_focus_pane_ParamLimits

0x52eb,	// (0x0002feda) data_form_wide_pane_ParamLimits

0x52fc,	// (0x0002feeb) form_field_data_wide_pane_g1

0x5308,	// (0x0002fef7) form_field_data_wide_pane_t1_ParamLimits

0x851f,	// (0x0003310e) input_focus_pane_cp6_ParamLimits

0x88cb,	// (0x000334ba) input_popup_find_pane_g1_ParamLimits

0x88cb,	// (0x000334ba) input_popup_find_pane_g1

0x557e,	// (0x0003016d) aid_navi_side_left_pane

0x5593,	// (0x00030182) aid_navi_side_right_pane

0xa5a1,	// (0x00035190) bg_popup_window_pane_cp30_ParamLimits

0xa5a1,	// (0x00035190) bg_popup_window_pane_cp30

0xa61b,	// (0x0003520a) popup_midp_note_alarm_window_g1_ParamLimits

0xa61b,	// (0x0003520a) popup_midp_note_alarm_window_g1

0xa64b,	// (0x0003523a) popup_midp_note_alarm_window_t1_ParamLimits

0xa64b,	// (0x0003523a) popup_midp_note_alarm_window_t1

0xa6ec,	// (0x000352db) popup_midp_note_alarm_window_t2_ParamLimits

0xa6ec,	// (0x000352db) popup_midp_note_alarm_window_t2

0xa79a,	// (0x00035389) popup_midp_note_alarm_window_t3_ParamLimits

0xa79a,	// (0x00035389) popup_midp_note_alarm_window_t3

0xa7cc,	// (0x000353bb) popup_midp_note_alarm_window_t4_ParamLimits

0xa7cc,	// (0x000353bb) popup_midp_note_alarm_window_t4

0xa7f2,	// (0x000353e1) popup_midp_note_alarm_window_t5_ParamLimits

0xa7f2,	// (0x000353e1) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0003a48e) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0003a48e) popup_midp_note_alarm_window_t

0xa89e,	// (0x0003548d) wait_bar_pane_cp1_ParamLimits

0xa89e,	// (0x0003548d) wait_bar_pane_cp1

0x76ae,	// (0x0003229d) wait_anim_pane_copy1

0x76ae,	// (0x0003229d) wait_border_pane_copy1

0xa287,	// (0x00034e76) wait_border_pane_g1_copy1

0x5322,	// (0x0002ff11) form_field_popup_pane_g1

0x532a,	// (0x0002ff19) form_field_popup_pane_t1_ParamLimits

0x87ae,	// (0x0003339d) input_focus_pane_cp7_ParamLimits

0x87dc,	// (0x000333cb) list_form_pane_ParamLimits

0x5342,	// (0x0002ff31) form_field_popup_wide_pane_g1

0x534a,	// (0x0002ff39) form_field_popup_wide_pane_t1_ParamLimits

0x87ae,	// (0x0003339d) input_focus_pane_cp8_ParamLimits

0x87e8,	// (0x000333d7) list_form_wide_pane_ParamLimits

0xb39f,	// (0x00035f8e) aid_size_cell_graphic_pane

0x53d4,	// (0x0002ffc3) data_form_pane_t1_ParamLimits

0x6575,	// (0x00031164) data_form_wide_pane_t1_ParamLimits

0x9859,	// (0x00034448) bg_status_flat_pane

0x76ee,	// (0x000322dd) title_pane_t1_ParamLimits

0x7756,	// (0x00032345) title_pane_t2_ParamLimits

0x777c,	// (0x0003236b) title_pane_t3_ParamLimits

0xf557,	// (0x0003a146) title_pane_t_ParamLimits

0x8d9d,	// (0x0003398c) level_1_signal_ParamLimits

0x8daf,	// (0x0003399e) level_2_signal_ParamLimits

0x8dc2,	// (0x000339b1) level_3_signal_ParamLimits

0x8dd5,	// (0x000339c4) level_4_signal_ParamLimits

0x8de8,	// (0x000339d7) level_5_signal_ParamLimits

0x8dfb,	// (0x000339ea) level_6_signal_ParamLimits

0x8e0e,	// (0x000339fd) level_7_signal_ParamLimits

0x8d9d,	// (0x0003398c) level_1_battery_ParamLimits

0x8daf,	// (0x0003399e) level_2_battery_ParamLimits

0x8dc2,	// (0x000339b1) level_3_battery_ParamLimits

0x8dd5,	// (0x000339c4) level_4_battery_ParamLimits

0x8de8,	// (0x000339d7) level_5_battery_ParamLimits

0x8dfb,	// (0x000339ea) level_6_battery_ParamLimits

0x8e0e,	// (0x000339fd) level_7_battery_ParamLimits

0xa4a6,	// (0x00035095) bg_status_flat_pane_g1

0xa4ae,	// (0x0003509d) bg_status_flat_pane_g2

0xa4b6,	// (0x000350a5) bg_status_flat_pane_g3

0xa4be,	// (0x000350ad) bg_status_flat_pane_g4

0xa4c6,	// (0x000350b5) bg_status_flat_pane_g5

0xa4ce,	// (0x000350bd) bg_status_flat_pane_g6

0xa4d6,	// (0x000350c5) bg_status_flat_pane_g7

0x77a4,	// (0x00032393) tabs_3_active_pane_t1_ParamLimits

0x77a4,	// (0x00032393) tabs_3_passive_pane_t1_ParamLimits

0x77be,	// (0x000323ad) tabs_4_active_pane_t1_ParamLimits

0x77be,	// (0x000323ad) tabs_4_1_passive_pane_t1_ParamLimits

0x895f,	// (0x0003354e) tabs_2_active_pane_t1_ParamLimits

0x895f,	// (0x0003354e) tabs_2_passive_pane_t1_ParamLimits

0x8971,	// (0x00033560) bg_active_tab_pane_cp4_ParamLimits

0x897f,	// (0x0003356e) tabs_2_long_active_pane_t1_ParamLimits

0x8992,	// (0x00033581) bg_passive_tab_pane_cp4_ParamLimits

0x61b7,	// (0x00030da6) list_single_midp_graphic_pane_t1_ParamLimits

0x8971,	// (0x00033560) bg_active_tab_pane_cp5_ParamLimits

0x899e,	// (0x0003358d) tabs_3_long_active_pane_t1_ParamLimits

0x8992,	// (0x00033581) bg_passive_tab_pane_cp5_ParamLimits

0x61b7,	// (0x00030da6) list_single_midp_graphic_pane_t1

0x9859,	// (0x00034448) bg_status_flat_pane_ParamLimits

0x991c,	// (0x0003450b) indicator_pane_cp2_ParamLimits

0x991c,	// (0x0003450b) indicator_pane_cp2

0x9a47,	// (0x00034636) navi_pane_srt_ParamLimits

0x9a47,	// (0x00034636) navi_pane_srt

0x9a6b,	// (0x0003465a) popup_clock_digital_analogue_window_cp1

0x786b,	// (0x0003245a) indicator_pane_t1

0x9444,	// (0x00034033) copy_highlight_pane

0x9444,	// (0x00034033) cursor_graphics_pane

0x9444,	// (0x00034033) graphic_within_text_pane

0x9444,	// (0x00034033) link_highlight_pane

0xacc1,	// (0x000358b0) popup_preview_text_window_t5_ParamLimits

0xacc1,	// (0x000358b0) popup_preview_text_window_t5

0x9566,	// (0x00034155) cursor_digital_pane

0x9566,	// (0x00034155) cursor_primary_pane

0x9577,	// (0x00034166) cursor_primary_small_pane

0x957f,	// (0x0003416e) cursor_secondary_pane

0x9587,	// (0x00034176) cursor_title_pane

0x9566,	// (0x00034155) link_highlight_digital_pane

0x956e,	// (0x0003415d) link_highlight_primary_pane

0x9577,	// (0x00034166) link_highlight_primary_small_pane

0x957f,	// (0x0003416e) link_highlight_secondary_pane

0x9587,	// (0x00034176) link_highlight_title_pane

0x9566,	// (0x00034155) copy_highlight_digital_pane

0x9566,	// (0x00034155) copy_highlight_primary_pane

0x9577,	// (0x00034166) copy_highlight_primary_small_pane

0x957f,	// (0x0003416e) copy_highlight_secondary_pane

0x9587,	// (0x00034176) copy_highlight_title_pane

0x957f,	// (0x0003416e) graphic_text_digital_pane

0xa544,	// (0x00035133) graphic_text_primary_pane

0xa54d,	// (0x0003513c) graphic_text_primary_small_pane

0x9577,	// (0x00034166) graphic_text_secondary_pane

0x9566,	// (0x00034155) graphic_text_title_pane

0x958f,	// (0x0003417e) cursor_primary_pane_g1

0xa536,	// (0x00035125) cursor_text_primary_t1

0xa51e,	// (0x0003510d) cursor_primary_small_pane_g1

0xa528,	// (0x00035117) cursor_text_primary_small_t1

0xa506,	// (0x000350f5) cursor_primary_small_pane_g1_copy1

0xa510,	// (0x000350ff) cursor_text_primary_small_t1_copy1

0xa4ee,	// (0x000350dd) cursor_text_title_t1

0xa4fc,	// (0x000350eb) cursor_title_pane_g1

0x958f,	// (0x0003417e) cursor_digital_pane_g1

0x9599,	// (0x00034188) cursor_text_digital_t1

0x95be,	// (0x000341ad) link_highlight_primary_pane_g1

0xa497,	// (0x00035086) link_highlight_primary_pane_t1

0x95a7,	// (0x00034196) link_highlight_primary_small_pane_g1

0x95af,	// (0x0003419e) link_highlight_primary_small_pane_t1

0x95be,	// (0x000341ad) link_highlight_secondary_pane_g1

0x95c6,	// (0x000341b5) link_highlight_secondary_pane_t1

0xa40b,	// (0x00034ffa) link_highlight_title_pane_g1

0xa413,	// (0x00035002) link_highlight_title_pane_t1

0xa3f4,	// (0x00034fe3) link_highlight_digital_pane_g1

0xa3fc,	// (0x00034feb) link_highlight_digital_pane_t1

0xa2cc,	// (0x00034ebb) copy_highlight_primary_pane_g1

0xa2d4,	// (0x00034ec3) copy_highlight_primary_pane_t1

0xa2a6,	// (0x00034e95) copy_highlight_primary_small_pane_g1

0xa2bd,	// (0x00034eac) copy_highlight_primary_small_pane_t1

0x95d5,	// (0x000341c4) copy_highlight_secondary_pane_g1

0x95dd,	// (0x000341cc) copy_highlight_secondary_pane_t1

0xa2a6,	// (0x00034e95) copy_highlight_title_pane_g1

0xa2ae,	// (0x00034e9d) copy_highlight_title_pane_t1

0xa2cc,	// (0x00034ebb) copy_highlight_digital_pane_g1

0xb569,	// (0x00036158) copy_highlight_digital_pane_t1

0xb4bd,	// (0x000360ac) graphic_text_primary_pane_g1

0xb54d,	// (0x0003613c) graphic_text_primary_pane_t1

0xb55b,	// (0x0003614a) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0003a5bd) graphic_text_primary_pane_t

0xb529,	// (0x00036118) graphic_text_primary_small_pane_g1

0xb531,	// (0x00036120) graphic_text_primary_small_pane_t1

0xb53f,	// (0x0003612e) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0003a5b8) graphic_text_primary_small_pane_t

0xb505,	// (0x000360f4) graphic_text_secondary_pane_g1

0xb50d,	// (0x000360fc) graphic_text_secondary_pane_t1

0xb51b,	// (0x0003610a) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0003a5b3) graphic_text_secondary_pane_t

0xb4e1,	// (0x000360d0) graphic_text_title_pane_g1

0xb4e9,	// (0x000360d8) graphic_text_title_pane_t1

0xb4f7,	// (0x000360e6) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0003a5ae) graphic_text_title_pane_t

0xb4bd,	// (0x000360ac) graphic_text_digital_pane_g1

0xb4c5,	// (0x000360b4) graphic_text_digital_pane_t1

0xb4d3,	// (0x000360c2) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0003a5a9) graphic_text_digital_pane_t

0x778e,	// (0x0003237d) navi_icon_pane_srt_ParamLimits

0x778e,	// (0x0003237d) navi_icon_pane_srt

0x76ae,	// (0x0003229d) navi_midp_pane_srt

0x76ae,	// (0x0003229d) navi_navi_pane_srt

0x778e,	// (0x0003237d) navi_text_pane_srt_ParamLimits

0x778e,	// (0x0003237d) navi_text_pane_srt

0xb488,	// (0x00036077) navi_navi_icon_text_pane_srt

0xb490,	// (0x0003607f) navi_navi_pane_srt_g1_ParamLimits

0xb490,	// (0x0003607f) navi_navi_pane_srt_g1

0xb4a2,	// (0x00036091) navi_navi_pane_srt_g2_ParamLimits

0xb4a2,	// (0x00036091) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0003a5a4) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0003a5a4) navi_navi_pane_srt_g

0xb4b4,	// (0x000360a3) navi_navi_tabs_pane_srt

0xb488,	// (0x00036077) navi_navi_text_pane_srt

0xb488,	// (0x00036077) navi_navi_volume_pane_srt

0xb479,	// (0x00036068) navi_navi_text_pane_srt_t1

0x663e,	// (0x0003122d) navi_navi_volume_pane_srt_g1

0x6646,	// (0x00031235) volume_small_pane_srt_ParamLimits

0x6646,	// (0x00031235) volume_small_pane_srt

0x58e8,	// (0x000304d7) volume_small_pane_srt_g1_ParamLimits

0x58e8,	// (0x000304d7) volume_small_pane_srt_g1

0x58f8,	// (0x000304e7) volume_small_pane_srt_g2_ParamLimits

0x58f8,	// (0x000304e7) volume_small_pane_srt_g2

0x5909,	// (0x000304f8) volume_small_pane_srt_g3_ParamLimits

0x5909,	// (0x000304f8) volume_small_pane_srt_g3

0x591a,	// (0x00030509) volume_small_pane_srt_g4_ParamLimits

0x591a,	// (0x00030509) volume_small_pane_srt_g4

0x592b,	// (0x0003051a) volume_small_pane_srt_g5_ParamLimits

0x592b,	// (0x0003051a) volume_small_pane_srt_g5

0x593c,	// (0x0003052b) volume_small_pane_srt_g6_ParamLimits

0x593c,	// (0x0003052b) volume_small_pane_srt_g6

0x594d,	// (0x0003053c) volume_small_pane_srt_g7_ParamLimits

0x594d,	// (0x0003053c) volume_small_pane_srt_g7

0x595e,	// (0x0003054d) volume_small_pane_srt_g8_ParamLimits

0x595e,	// (0x0003054d) volume_small_pane_srt_g8

0x596f,	// (0x0003055e) volume_small_pane_srt_g9_ParamLimits

0x596f,	// (0x0003055e) volume_small_pane_srt_g9

0x5980,	// (0x0003056f) volume_small_pane_srt_g10_ParamLimits

0x5980,	// (0x0003056f) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003a34c) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003a34c) volume_small_pane_srt_g

0x8319,	// (0x00032f08) query_popup_data_pane_cp2

0xb45f,	// (0x0003604e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb45f,	// (0x0003604e) navi_navi_icon_text_pane_srt_t1

0xa544,	// (0x00035133) navi_tabs_2_long_pane_srt

0xa544,	// (0x00035133) navi_tabs_2_pane_srt

0xa544,	// (0x00035133) navi_tabs_3_long_pane_srt

0xa544,	// (0x00035133) navi_tabs_3_pane_srt

0xa544,	// (0x00035133) navi_tabs_4_pane_srt

0x661e,	// (0x0003120d) tabs_2_active_pane_srt_ParamLimits

0x661e,	// (0x0003120d) tabs_2_active_pane_srt

0x662e,	// (0x0003121d) tabs_2_passive_pane_srt_ParamLimits

0x662e,	// (0x0003121d) tabs_2_passive_pane_srt

0x9782,	// (0x00034371) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9782,	// (0x00034371) bg_passive_tab_pane_cp1_srt

0xb42b,	// (0x0003601a) bg_passive_tab_pane_g1_cp1_srt

0x9086,	// (0x00033c75) bg_passive_tab_pane_g2_cp1_srt

0xb434,	// (0x00036023) bg_passive_tab_pane_g3_cp1_srt

0x778e,	// (0x0003237d) bg_active_tab_pane_cp1_srt_ParamLimits

0x778e,	// (0x0003237d) bg_active_tab_pane_cp1_srt

0xb43d,	// (0x0003602c) tabs_2_active_pane_srt_g1

0xb445,	// (0x00036034) tabs_2_active_pane_srt_t1_ParamLimits

0xb445,	// (0x00036034) tabs_2_active_pane_srt_t1

0xb42b,	// (0x0003601a) bg_active_tab_pane_g1_cp1_srt

0x9086,	// (0x00033c75) bg_active_tab_pane_g2_cp1_srt

0xb434,	// (0x00036023) bg_active_tab_pane_g3_cp1_srt

0x65eb,	// (0x000311da) tabs_3_active_pane_srt_ParamLimits

0x65eb,	// (0x000311da) tabs_3_active_pane_srt

0x65fc,	// (0x000311eb) tabs_3_passive_pane_cp_srt_ParamLimits

0x65fc,	// (0x000311eb) tabs_3_passive_pane_cp_srt

0x660d,	// (0x000311fc) tabs_3_passive_pane_srt_ParamLimits

0x660d,	// (0x000311fc) tabs_3_passive_pane_srt

0x9782,	// (0x00034371) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9782,	// (0x00034371) bg_passive_tab_pane_cp2_srt

0x95ec,	// (0x000341db) bg_passive_tab_pane_g1_cp2_srt

0x9086,	// (0x00033c75) bg_passive_tab_pane_g2_cp2_srt

0x95f5,	// (0x000341e4) bg_passive_tab_pane_g3_cp2_srt

0x778e,	// (0x0003237d) bg_active_tab_pane_cp2_srt_ParamLimits

0x778e,	// (0x0003237d) bg_active_tab_pane_cp2_srt

0xb411,	// (0x00036000) tabs_3_active_pane_srt_g1

0xb419,	// (0x00036008) tabs_3_active_pane_srt_t1_ParamLimits

0xb419,	// (0x00036008) tabs_3_active_pane_srt_t1

0x95ec,	// (0x000341db) bg_active_tab_pane_g1_cp2_srt

0x9086,	// (0x00033c75) bg_active_tab_pane_g2_cp2_srt

0x95f5,	// (0x000341e4) bg_active_tab_pane_g3_cp2_srt

0x65a3,	// (0x00031192) tabs_4_active_pane_srt_ParamLimits

0x65a3,	// (0x00031192) tabs_4_active_pane_srt

0x65b5,	// (0x000311a4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x65b5,	// (0x000311a4) tabs_4_passive_pane_cp2_srt

0x5ae5,	// (0x000306d4) aid_size_cell_toolbar

0x8992,	// (0x00033581) main_idle_act_pane_ParamLimits

0x5ca4,	// (0x00030893) popup_large_graphic_colour_window_ParamLimits

0x600b,	// (0x00030bfa) popup_toolbar_window_ParamLimits

0x600b,	// (0x00030bfa) popup_toolbar_window

0xb224,	// (0x00035e13) list_single_graphic_2heading_pane_ParamLimits

0xb224,	// (0x00035e13) list_single_graphic_2heading_pane

0x8b4e,	// (0x0003373d) aid_size_cell_apps_grid_lsc_pane

0x8b60,	// (0x0003374f) aid_size_cell_apps_grid_prt_pane

0x9782,	// (0x00034371) bg_wml_button_pane_cp1_ParamLimits

0x9782,	// (0x00034371) bg_wml_button_pane_cp1

0x9f36,	// (0x00034b25) form_midp_field_text_pane_t1_ParamLimits

0x9d00,	// (0x000348ef) input_focus_pane_cp050_ParamLimits

0x9f6d,	// (0x00034b5c) list_midp_form_text_pane_ParamLimits

0x9f13,	// (0x00034b02) input_focus_pane_cp051_ParamLimits

0x9f27,	// (0x00034b16) list_midp_choice_pane_ParamLimits

0x9db9,	// (0x000349a8) list_single_2graphic_pane_cp3_ParamLimits

0x9db9,	// (0x000349a8) list_single_2graphic_pane_cp3

0x9ddd,	// (0x000349cc) list_single_midp_graphic_pane_ParamLimits

0x9ddd,	// (0x000349cc) list_single_midp_graphic_pane

0x4871,	// (0x0002f460) list_single_graphic_2heading_pane_g1_ParamLimits

0x4871,	// (0x0002f460) list_single_graphic_2heading_pane_g1

0x487d,	// (0x0002f46c) list_single_graphic_2heading_pane_g4_ParamLimits

0x487d,	// (0x0002f46c) list_single_graphic_2heading_pane_g4

0x4889,	// (0x0002f478) list_single_graphic_2heading_pane_g5_ParamLimits

0x4889,	// (0x0002f478) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003a39f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003a39f) list_single_graphic_2heading_pane_g

0x4895,	// (0x0002f484) list_single_graphic_2heading_pane_t1_ParamLimits

0x4895,	// (0x0002f484) list_single_graphic_2heading_pane_t1

0x48a9,	// (0x0002f498) list_single_graphic_2heading_pane_t2_ParamLimits

0x48a9,	// (0x0002f498) list_single_graphic_2heading_pane_t2

0x48c3,	// (0x0002f4b2) list_single_graphic_2heading_pane_t3_ParamLimits

0x48c3,	// (0x0002f4b2) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003a3a6) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003a3a6) list_single_graphic_2heading_pane_t

0x9bca,	// (0x000347b9) bg_popup_sub_pane_cp2

0x9bf4,	// (0x000347e3) grid_toobar_pane

0x60b8,	// (0x00030ca7) cell_toolbar_pane_ParamLimits

0x60b8,	// (0x00030ca7) cell_toolbar_pane

0x9c30,	// (0x0003481f) cell_toolbar_pane_g1_ParamLimits

0x9c30,	// (0x0003481f) cell_toolbar_pane_g1

0x9c44,	// (0x00034833) cell_toolbar_pane_g2_ParamLimits

0x9c44,	// (0x00034833) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003a3b4) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003a3b4) cell_toolbar_pane_g

0x9c66,	// (0x00034855) grid_highlight_pane_cp2_ParamLimits

0x9c66,	// (0x00034855) grid_highlight_pane_cp2

0x9c80,	// (0x0003486f) toolbar_button_pane

0x9c8c,	// (0x0003487b) toolbar_button_pane_g1

0x9c94,	// (0x00034883) toolbar_button_pane_g2

0x9c9c,	// (0x0003488b) toolbar_button_pane_g3

0x9ca4,	// (0x00034893) toolbar_button_pane_g4

0x9cac,	// (0x0003489b) toolbar_button_pane_g5

0x9cb4,	// (0x000348a3) toolbar_button_pane_g6

0x9cbc,	// (0x000348ab) toolbar_button_pane_g7

0x9cc4,	// (0x000348b3) toolbar_button_pane_g8

0x9ccc,	// (0x000348bb) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0003a3b9) toolbar_button_pane_g

0x612a,	// (0x00030d19) list_single_2graphic_pane_g1_cp3_ParamLimits

0x612a,	// (0x00030d19) list_single_2graphic_pane_g1_cp3

0x6136,	// (0x00030d25) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6136,	// (0x00030d25) list_single_2graphic_pane_g2_cp3

0x6147,	// (0x00030d36) list_single_2graphic_pane_g3_cp3

0x614f,	// (0x00030d3e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x614f,	// (0x00030d3e) list_single_2graphic_pane_g4_cp3

0x615b,	// (0x00030d4a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x615b,	// (0x00030d4a) list_single_2graphic_pane_t1_cp3

0x61ab,	// (0x00030d9a) list_single_midp_graphic_pane_g2_ParamLimits

0x61ab,	// (0x00030d9a) list_single_midp_graphic_pane_g2

0x5aed,	// (0x000306dc) aid_zoom_text_primary

0x4855,	// (0x0002f444) aid_zoom_text_secondary

0x96a6,	// (0x00034295) status_small_pane_g7_ParamLimits

0x96a6,	// (0x00034295) status_small_pane_g7

0x96c9,	// (0x000342b8) status_small_pane_t1_ParamLimits

0x76c5,	// (0x000322b4) title_pane_g2

0x0003,

0xf54e,	// (0x0003a13d) title_pane_g

0x83bd,	// (0x00032fac) aid_size_cell_colour_1_pane_ParamLimits

0x83bd,	// (0x00032fac) aid_size_cell_colour_1_pane

0x83d1,	// (0x00032fc0) aid_size_cell_colour_2_pane_ParamLimits

0x83d1,	// (0x00032fc0) aid_size_cell_colour_2_pane

0x83e5,	// (0x00032fd4) aid_size_cell_colour_3_pane_ParamLimits

0x83e5,	// (0x00032fd4) aid_size_cell_colour_3_pane

0x83f9,	// (0x00032fe8) aid_size_cell_colour_4_pane_ParamLimits

0x83f9,	// (0x00032fe8) aid_size_cell_colour_4_pane

0x54bb,	// (0x000300aa) title_pane_stacon_g1_ParamLimits

0x54bb,	// (0x000300aa) title_pane_stacon_g1

0xa32b,	// (0x00034f1a) popup_note_wait_window_g3_ParamLimits

0xa32b,	// (0x00034f1a) popup_note_wait_window_g3

0xa3a1,	// (0x00034f90) popup_note_wait_window_t5_ParamLimits

0xa3a1,	// (0x00034f90) popup_note_wait_window_t5

0x76ae,	// (0x0003229d) main_feb_china_hwr_fs_writing_pane

0x5b87,	// (0x00030776) popup_feb_china_hwr_fs_window_ParamLimits

0x5b87,	// (0x00030776) popup_feb_china_hwr_fs_window

0x6243,	// (0x00030e32) aid_size_cell_hwr_fs_ParamLimits

0x6243,	// (0x00030e32) aid_size_cell_hwr_fs

0x9d00,	// (0x000348ef) bg_popup_sub_pane_cp3_ParamLimits

0x9d00,	// (0x000348ef) bg_popup_sub_pane_cp3

0x6258,	// (0x00030e47) grid_hwr_fs_pane_ParamLimits

0x6258,	// (0x00030e47) grid_hwr_fs_pane

0x6270,	// (0x00030e5f) linegrid_hwr_fs_pane_ParamLimits

0x6270,	// (0x00030e5f) linegrid_hwr_fs_pane

0x6280,	// (0x00030e6f) cell_hwr_fs_pane_ParamLimits

0x6280,	// (0x00030e6f) cell_hwr_fs_pane

0x9d0c,	// (0x000348fb) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d0c,	// (0x000348fb) linegrid_hwr_fs_pane_g1

0x9d18,	// (0x00034907) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d18,	// (0x00034907) linegrid_hwr_fs_pane_g2

0x9d2a,	// (0x00034919) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d2a,	// (0x00034919) linegrid_hwr_fs_pane_g3

0x62a2,	// (0x00030e91) linegrid_hwr_fs_pane_g4_ParamLimits

0x62a2,	// (0x00030e91) linegrid_hwr_fs_pane_g4

0x62bc,	// (0x00030eab) linegrid_hwr_fs_pane_g5_ParamLimits

0x62bc,	// (0x00030eab) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0003a3e4) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0003a3e4) linegrid_hwr_fs_pane_g

0x9d36,	// (0x00034925) cell_hwr_fs_pane_g1_ParamLimits

0x9d36,	// (0x00034925) cell_hwr_fs_pane_g1

0x9b01,	// (0x000346f0) cell_hwr_fs_pane_g2_ParamLimits

0x9b01,	// (0x000346f0) cell_hwr_fs_pane_g2

0x9d4c,	// (0x0003493b) cell_hwr_fs_pane_g3_ParamLimits

0x9d4c,	// (0x0003493b) cell_hwr_fs_pane_g3

0x9d59,	// (0x00034948) cell_hwr_fs_pane_g4_ParamLimits

0x9d59,	// (0x00034948) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0003a3ef) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0003a3ef) cell_hwr_fs_pane_g

0x62d2,	// (0x00030ec1) cell_hwr_fs_pane_t1

0x76ae,	// (0x0003229d) grid_highlight_pane_cp6

0x76ae,	// (0x0003229d) main_idle_act2_pane

0x8905,	// (0x000334f4) aid_inside_area_popup_secondary

0xa9d8,	// (0x000355c7) aid_inside_area_window_primary_ParamLimits

0xa9d8,	// (0x000355c7) aid_inside_area_window_primary

0xb578,	// (0x00036167) ai2_news_ticker_pane

0xb580,	// (0x0003616f) aid_size_cell_ai1_link_ParamLimits

0xb580,	// (0x0003616f) aid_size_cell_ai1_link

0xb59a,	// (0x00036189) popup_ai2_data_window_ParamLimits

0xb59a,	// (0x00036189) popup_ai2_data_window

0xb5b0,	// (0x0003619f) popup_ai2_link_window_ParamLimits

0xb5b0,	// (0x0003619f) popup_ai2_link_window

0x9d00,	// (0x000348ef) bg_popup_sub_pane_cp4_ParamLimits

0x9d00,	// (0x000348ef) bg_popup_sub_pane_cp4

0xb5c4,	// (0x000361b3) grid_ai2_link_pane_ParamLimits

0xb5c4,	// (0x000361b3) grid_ai2_link_pane

0xb5db,	// (0x000361ca) popup_ai2_link_window_g1_ParamLimits

0xb5db,	// (0x000361ca) popup_ai2_link_window_g1

0xb5e7,	// (0x000361d6) popup_ai2_link_window_g2_ParamLimits

0xb5e7,	// (0x000361d6) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0003a5c2) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0003a5c2) popup_ai2_link_window_g

0xb5f6,	// (0x000361e5) ai2_mp_button_pane

0xb5fe,	// (0x000361ed) ai2_mp_volume_pane

0x9f13,	// (0x00034b02) bg_popup_sub_pane_cp5_ParamLimits

0x9f13,	// (0x00034b02) bg_popup_sub_pane_cp5

0xb606,	// (0x000361f5) heading_ai2_gene_pane_ParamLimits

0xb606,	// (0x000361f5) heading_ai2_gene_pane

0xb612,	// (0x00036201) list_ai2_gene_pane_ParamLimits

0xb612,	// (0x00036201) list_ai2_gene_pane

0xb65a,	// (0x00036249) cell_ai2_link_pane_ParamLimits

0xb65a,	// (0x00036249) cell_ai2_link_pane

0xb670,	// (0x0003625f) cell_ai2_link_pane_g1

0x76ae,	// (0x0003229d) grid_highlight_pane_cp7

0x665b,	// (0x0003124a) ai2_mp_volume_pane_g1

0xb740,	// (0x0003632f) ai2_mp_volume_pane_g2

0xb6b5,	// (0x000362a4) list_ai2_gene_pane_t1

0xb748,	// (0x00036337) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0003a5db) ai2_mp_volume_pane_g

0x6663,	// (0x00031252) volume_small_pane_cp3

0xb750,	// (0x0003633f) aid_size_cell_ai2_button

0xb758,	// (0x00036347) grid_ai2_button_pane

0xb761,	// (0x00036350) cell_ai2_button_pane_ParamLimits

0xb761,	// (0x00036350) cell_ai2_button_pane

0x76a4,	// (0x00032293) cell_ai2_button_pane_g1

0x76ae,	// (0x0003229d) grid_highlight_pane_cp8

0xb700,	// (0x000362ef) ai2_gene_pane_t1_ParamLimits

0xb700,	// (0x000362ef) ai2_gene_pane_t1

0x5adb,	// (0x000306ca) aid_height_parent_landscape

0xb05b,	// (0x00035c4a) aid_height_set_list

0xb06c,	// (0x00035c5b) aid_size_parent

0xb39f,	// (0x00035f8e) aid_size_cell_graphic_pane_ParamLimits

0xb622,	// (0x00036211) popup_ai2_data_window_g1_ParamLimits

0xb622,	// (0x00036211) popup_ai2_data_window_g1

0xb62e,	// (0x0003621d) ai2_news_ticker_pane_g1

0xb636,	// (0x00036225) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0003a5c7) ai2_news_ticker_pane_g

0xb63e,	// (0x0003622d) ai2_news_ticker_pane_t1

0xb64c,	// (0x0003623b) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0003a5cc) ai2_news_ticker_pane_t

0xb679,	// (0x00036268) heading_ai2_gene_pane_g1

0xb681,	// (0x00036270) heading_ai2_gene_pane_t1_ParamLimits

0xb681,	// (0x00036270) heading_ai2_gene_pane_t1

0xb696,	// (0x00036285) list_highlight_pane_cp6

0xb69e,	// (0x0003628d) ai2_gene_pane_ParamLimits

0xb69e,	// (0x0003628d) ai2_gene_pane

0xb6c3,	// (0x000362b2) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0003a5d1) list_ai2_gene_pane_t

0xb6d1,	// (0x000362c0) list_highlight_pane_cp8_ParamLimits

0xb6d1,	// (0x000362c0) list_highlight_pane_cp8

0xb6e2,	// (0x000362d1) ai2_gene_pane_g1_ParamLimits

0xb6e2,	// (0x000362d1) ai2_gene_pane_g1

0xb6f4,	// (0x000362e3) ai2_gene_pane_g2_ParamLimits

0xb6f4,	// (0x000362e3) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0003a5d6) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0003a5d6) ai2_gene_pane_g

0x8744,	// (0x00033333) scroll_pane_cp12

0x5a9a,	// (0x00030689) control_pane_t3_ParamLimits

0x5a9a,	// (0x00030689) control_pane_t3

0x96ba,	// (0x000342a9) status_small_pane_g8_ParamLimits

0x96ba,	// (0x000342a9) status_small_pane_g8

0x5c6d,	// (0x0003085c) popup_find_window_ParamLimits

0x5e82,	// (0x00030a71) popup_note_image_window_ParamLimits

0x60e8,	// (0x00030cd7) list_double2_graphic_pane_vc_g1_ParamLimits

0x60e8,	// (0x00030cd7) list_double2_graphic_pane_vc_g1

0x60f4,	// (0x00030ce3) list_double2_graphic_pane_vc_g2_ParamLimits

0x60f4,	// (0x00030ce3) list_double2_graphic_pane_vc_g2

0x6100,	// (0x00030cef) list_double2_graphic_pane_vc_g3_ParamLimits

0x6100,	// (0x00030cef) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0003a3ad) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0003a3ad) list_double2_graphic_pane_vc_g

0x610c,	// (0x00030cfb) list_double2_graphic_pane_vc_t1_ParamLimits

0x610c,	// (0x00030cfb) list_double2_graphic_pane_vc_t1

0x60f4,	// (0x00030ce3) list_single_heading_pane_vc_g1_ParamLimits

0x60f4,	// (0x00030ce3) list_single_heading_pane_vc_g1

0x6100,	// (0x00030cef) list_single_heading_pane_vc_g2_ParamLimits

0x6100,	// (0x00030cef) list_single_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3ce) list_single_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3ce) list_single_heading_pane_vc_g

0x6177,	// (0x00030d66) list_single_heading_pane_vc_t1_ParamLimits

0x6177,	// (0x00030d66) list_single_heading_pane_vc_t1

0x618f,	// (0x00030d7e) list_single_heading_pane_vc_t2_ParamLimits

0x618f,	// (0x00030d7e) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0003a3d3) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003a3d3) list_single_heading_pane_vc_t

0x61cd,	// (0x00030dbc) list_setting_number_pane_vc_g1_ParamLimits

0x61cd,	// (0x00030dbc) list_setting_number_pane_vc_g1

0x61d9,	// (0x00030dc8) list_setting_number_pane_vc_g2_ParamLimits

0x61d9,	// (0x00030dc8) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003a3d8) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003a3d8) list_setting_number_pane_vc_g

0x61e5,	// (0x00030dd4) list_setting_number_pane_vc_t1_ParamLimits

0x61e5,	// (0x00030dd4) list_setting_number_pane_vc_t1

0x61f9,	// (0x00030de8) list_setting_number_pane_vc_t2_ParamLimits

0x61f9,	// (0x00030de8) list_setting_number_pane_vc_t2

0x6215,	// (0x00030e04) list_setting_number_pane_vc_t3_ParamLimits

0x6215,	// (0x00030e04) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0003a3dd) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0003a3dd) list_setting_number_pane_vc_t

0x6233,	// (0x00030e22) set_value_pane_vc_ParamLimits

0x6233,	// (0x00030e22) set_value_pane_vc

0xb224,	// (0x00035e13) list_double2_graphic_pane_vc_ParamLimits

0xb224,	// (0x00035e13) list_double2_graphic_pane_vc

0xb224,	// (0x00035e13) list_double2_large_graphic_pane_vc_ParamLimits

0xb224,	// (0x00035e13) list_double2_large_graphic_pane_vc

0xb224,	// (0x00035e13) list_double2_pane_vc_ParamLimits

0xb224,	// (0x00035e13) list_double2_pane_vc

0xb224,	// (0x00035e13) list_double_graphic_heading_pane_vc_ParamLimits

0xb224,	// (0x00035e13) list_double_graphic_heading_pane_vc

0xb224,	// (0x00035e13) list_double_graphic_pane_vc_ParamLimits

0xb224,	// (0x00035e13) list_double_graphic_pane_vc

0xb224,	// (0x00035e13) list_double_heading_pane_vc_ParamLimits

0xb224,	// (0x00035e13) list_double_heading_pane_vc

0xb236,	// (0x00035e25) list_double_large_graphic_pane_vc_ParamLimits

0xb236,	// (0x00035e25) list_double_large_graphic_pane_vc

0xb224,	// (0x00035e13) list_double_number_pane_vc_ParamLimits

0xb224,	// (0x00035e13) list_double_number_pane_vc

0xb224,	// (0x00035e13) list_double_pane_vc_ParamLimits

0xb224,	// (0x00035e13) list_double_pane_vc

0xb224,	// (0x00035e13) list_double_time_pane_vc_ParamLimits

0xb224,	// (0x00035e13) list_double_time_pane_vc

0xb224,	// (0x00035e13) list_setting_number_pane_vc_ParamLimits

0xb224,	// (0x00035e13) list_setting_number_pane_vc

0xb224,	// (0x00035e13) list_setting_pane_vc_ParamLimits

0xb224,	// (0x00035e13) list_setting_pane_vc

0xb224,	// (0x00035e13) list_single_graphic_heading_pane_vc_ParamLimits

0xb224,	// (0x00035e13) list_single_graphic_heading_pane_vc

0xb224,	// (0x00035e13) list_single_heading_pane_vc_ParamLimits

0xb224,	// (0x00035e13) list_single_heading_pane_vc

0x7941,	// (0x00032530) list_single_number_heading_pane_vc_ParamLimits

0x7941,	// (0x00032530) list_single_number_heading_pane_vc

0x60e8,	// (0x00030cd7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x60e8,	// (0x00030cd7) list_double_graphic_heading_pane_vc_g1

0x60f4,	// (0x00030ce3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x60f4,	// (0x00030ce3) list_double_graphic_heading_pane_vc_g2

0x6100,	// (0x00030cef) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6100,	// (0x00030cef) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0003a3ad) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003a3ad) list_double_graphic_heading_pane_vc_g

0x79c2,	// (0x000325b1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x79c2,	// (0x000325b1) list_double_graphic_heading_pane_vc_t1

0x79de,	// (0x000325cd) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x79de,	// (0x000325cd) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0003a5e2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0003a5e2) list_double_graphic_heading_pane_vc_t

0x61cd,	// (0x00030dbc) list_setting_pane_vc_g1_ParamLimits

0x61cd,	// (0x00030dbc) list_setting_pane_vc_g1

0x61d9,	// (0x00030dc8) list_setting_pane_vc_g2_ParamLimits

0x61d9,	// (0x00030dc8) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003a3d8) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003a3d8) list_setting_pane_vc_g

0x79fc,	// (0x000325eb) list_setting_pane_vc_t1_ParamLimits

0x79fc,	// (0x000325eb) list_setting_pane_vc_t1

0x7a18,	// (0x00032607) list_setting_pane_vc_t2_ParamLimits

0x7a18,	// (0x00032607) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0003a610) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0003a610) list_setting_pane_vc_t

0x6233,	// (0x00030e22) set_value_pane_cp_vc_ParamLimits

0x6233,	// (0x00030e22) set_value_pane_cp_vc

0x60f4,	// (0x00030ce3) list_single_number_heading_pane_vc_g1_ParamLimits

0x60f4,	// (0x00030ce3) list_single_number_heading_pane_vc_g1

0x6100,	// (0x00030cef) list_single_number_heading_pane_vc_g2_ParamLimits

0x6100,	// (0x00030cef) list_single_number_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3ce) list_single_number_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3ce) list_single_number_heading_pane_vc_g

0x6177,	// (0x00030d66) list_single_number_heading_pane_vc_t1_ParamLimits

0x6177,	// (0x00030d66) list_single_number_heading_pane_vc_t1

0x7a34,	// (0x00032623) list_single_number_heading_pane_vc_t2_ParamLimits

0x7a34,	// (0x00032623) list_single_number_heading_pane_vc_t2

0x7a48,	// (0x00032637) list_single_number_heading_pane_vc_t3_ParamLimits

0x7a48,	// (0x00032637) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0003a615) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0003a615) list_single_number_heading_pane_vc_t

0x60e8,	// (0x00030cd7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x60e8,	// (0x00030cd7) list_single_graphic_heading_pane_vc_g1

0x60f4,	// (0x00030ce3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x60f4,	// (0x00030ce3) list_single_graphic_heading_pane_vc_g4

0x6100,	// (0x00030cef) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6100,	// (0x00030cef) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0003a3ad) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003a3ad) list_single_graphic_heading_pane_vc_g

0x6177,	// (0x00030d66) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6177,	// (0x00030d66) list_single_graphic_heading_pane_vc_t1

0x7a5a,	// (0x00032649) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7a5a,	// (0x00032649) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0003a61c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0003a61c) list_single_graphic_heading_pane_vc_t

0x60f4,	// (0x00030ce3) list_double2_pane_vc_g1_ParamLimits

0x60f4,	// (0x00030ce3) list_double2_pane_vc_g1

0x6100,	// (0x00030cef) list_double2_pane_vc_g2_ParamLimits

0x6100,	// (0x00030cef) list_double2_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3ce) list_double2_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3ce) list_double2_pane_vc_g

0x7a6e,	// (0x0003265d) list_double2_pane_vc_t1_ParamLimits

0x7a6e,	// (0x0003265d) list_double2_pane_vc_t1

0x7a84,	// (0x00032673) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7a84,	// (0x00032673) list_double2_large_graphic_pane_vc_g1

0x60f4,	// (0x00030ce3) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x60f4,	// (0x00030ce3) list_double2_large_graphic_pane_vc_g2

0x6100,	// (0x00030cef) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6100,	// (0x00030cef) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa32,	// (0x0003a621) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa32,	// (0x0003a621) list_double2_large_graphic_pane_vc_g

0x7a90,	// (0x0003267f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7a90,	// (0x0003267f) list_double2_large_graphic_pane_vc_t1

0x7aa6,	// (0x00032695) list_double_time_pane_vc_g1_ParamLimits

0x7aa6,	// (0x00032695) list_double_time_pane_vc_g1

0x7ab2,	// (0x000326a1) list_double_time_pane_vc_g2_ParamLimits

0x7ab2,	// (0x000326a1) list_double_time_pane_vc_g2

0x0001,

0xfa39,	// (0x0003a628) list_double_time_pane_vc_g_ParamLimits

0xfa39,	// (0x0003a628) list_double_time_pane_vc_g

0x7abe,	// (0x000326ad) list_double_time_pane_vc_t1_ParamLimits

0x7abe,	// (0x000326ad) list_double_time_pane_vc_t1

0x7ae2,	// (0x000326d1) list_double_time_pane_vc_t2_ParamLimits

0x7ae2,	// (0x000326d1) list_double_time_pane_vc_t2

0x7b31,	// (0x00032720) list_double_time_pane_vc_t3_ParamLimits

0x7b31,	// (0x00032720) list_double_time_pane_vc_t3

0x7b43,	// (0x00032732) list_double_time_pane_vc_t4_ParamLimits

0x7b43,	// (0x00032732) list_double_time_pane_vc_t4

0x0003,

0xfa3e,	// (0x0003a62d) list_double_time_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003a62d) list_double_time_pane_vc_t

0x60f4,	// (0x00030ce3) list_double_pane_vc_g1_ParamLimits

0x60f4,	// (0x00030ce3) list_double_pane_vc_g1

0x6100,	// (0x00030cef) list_double_pane_vc_g2_ParamLimits

0x6100,	// (0x00030cef) list_double_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3ce) list_double_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3ce) list_double_pane_vc_g

0x7b57,	// (0x00032746) list_double_pane_vc_t1_ParamLimits

0x7b57,	// (0x00032746) list_double_pane_vc_t1

0x7b6b,	// (0x0003275a) list_double_pane_vc_t2_ParamLimits

0x7b6b,	// (0x0003275a) list_double_pane_vc_t2

0x0001,

0xfa47,	// (0x0003a636) list_double_pane_vc_t_ParamLimits

0xfa47,	// (0x0003a636) list_double_pane_vc_t

0x60f4,	// (0x00030ce3) list_double_number_pane_vc_g1_ParamLimits

0x60f4,	// (0x00030ce3) list_double_number_pane_vc_g1

0x6100,	// (0x00030cef) list_double_number_pane_vc_g2_ParamLimits

0x6100,	// (0x00030cef) list_double_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3ce) list_double_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3ce) list_double_number_pane_vc_g

0x7b83,	// (0x00032772) list_double_number_pane_vc_t1_ParamLimits

0x7b83,	// (0x00032772) list_double_number_pane_vc_t1

0x7b95,	// (0x00032784) list_double_number_pane_vc_t2_ParamLimits

0x7b95,	// (0x00032784) list_double_number_pane_vc_t2

0x7ba9,	// (0x00032798) list_double_number_pane_vc_t3_ParamLimits

0x7ba9,	// (0x00032798) list_double_number_pane_vc_t3

0x0002,

0xfa4c,	// (0x0003a63b) list_double_number_pane_vc_t_ParamLimits

0xfa4c,	// (0x0003a63b) list_double_number_pane_vc_t

0x7bc1,	// (0x000327b0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7bc1,	// (0x000327b0) list_double_large_graphic_pane_vc_g1

0x7be3,	// (0x000327d2) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7be3,	// (0x000327d2) list_double_large_graphic_pane_vc_g2

0x7bf7,	// (0x000327e6) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7bf7,	// (0x000327e6) list_double_large_graphic_pane_vc_g3

0x7c06,	// (0x000327f5) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7c06,	// (0x000327f5) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa53,	// (0x0003a642) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0003a642) list_double_large_graphic_pane_vc_g

0x7c12,	// (0x00032801) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7c12,	// (0x00032801) list_double_large_graphic_pane_vc_t1

0x7c2e,	// (0x0003281d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7c2e,	// (0x0003281d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0003a64b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0003a64b) list_double_large_graphic_pane_vc_t

0x60f4,	// (0x00030ce3) list_double_heading_pane_vc_g1_ParamLimits

0x60f4,	// (0x00030ce3) list_double_heading_pane_vc_g1

0x6100,	// (0x00030cef) list_double_heading_pane_vc_g2_ParamLimits

0x6100,	// (0x00030cef) list_double_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3ce) list_double_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3ce) list_double_heading_pane_vc_g

0x7c50,	// (0x0003283f) list_double_heading_pane_vc_t1_ParamLimits

0x7c50,	// (0x0003283f) list_double_heading_pane_vc_t1

0x6177,	// (0x00030d66) list_double_heading_pane_vc_t2_ParamLimits

0x6177,	// (0x00030d66) list_double_heading_pane_vc_t2

0x0001,

0xfa61,	// (0x0003a650) list_double_heading_pane_vc_t_ParamLimits

0xfa61,	// (0x0003a650) list_double_heading_pane_vc_t

0x7c64,	// (0x00032853) list_double_graphic_pane_vc_g1_ParamLimits

0x7c64,	// (0x00032853) list_double_graphic_pane_vc_g1

0x7c70,	// (0x0003285f) list_double_graphic_pane_vc_g2_ParamLimits

0x7c70,	// (0x0003285f) list_double_graphic_pane_vc_g2

0x60f4,	// (0x00030ce3) list_double_graphic_pane_vc_g3_ParamLimits

0x60f4,	// (0x00030ce3) list_double_graphic_pane_vc_g3

0x0003,

0xfa66,	// (0x0003a655) list_double_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x0003a655) list_double_graphic_pane_vc_g

0x7c8d,	// (0x0003287c) list_double_graphic_pane_vc_t1_ParamLimits

0x7c8d,	// (0x0003287c) list_double_graphic_pane_vc_t1

0x7cb7,	// (0x000328a6) list_double_graphic_pane_vc_t2_ParamLimits

0x7cb7,	// (0x000328a6) list_double_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x0003a65e) list_double_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x0003a65e) list_double_graphic_pane_vc_t

0x48f3,	// (0x0002f4e2) aid_size_cell_fastswap

0x48fb,	// (0x0002f4ea) aid_size_cell_touch_ParamLimits

0x48fb,	// (0x0002f4ea) aid_size_cell_touch

0x4b60,	// (0x0002f74f) popup_fast_swap_wide_window_ParamLimits

0x4b60,	// (0x0002f74f) popup_fast_swap_wide_window

0x4c74,	// (0x0002f863) touch_pane_ParamLimits

0x4c74,	// (0x0002f863) touch_pane

0x879a,	// (0x00033389) button_value_adjust_pane_cp2

0x521d,	// (0x0002fe0c) button_value_adjust_pane_cp4

0x523d,	// (0x0002fe2c) form_field_data_pane_cp2

0x525c,	// (0x0002fe4b) form_field_data_wide_pane_cp2

0x8c1b,	// (0x0003380a) bg_scroll_pane_ParamLimits

0x561d,	// (0x0003020c) scroll_handle_pane_ParamLimits

0x5631,	// (0x00030220) scroll_sc2_down_pane_ParamLimits

0x5631,	// (0x00030220) scroll_sc2_down_pane

0x8c4c,	// (0x0003383b) scroll_sc2_up_pane_ParamLimits

0x8c4c,	// (0x0003383b) scroll_sc2_up_pane

0xbe31,	// (0x00036a20) grid_wheel_folder_pane_g1_ParamLimits

0xbe31,	// (0x00036a20) grid_wheel_folder_pane_g1

0x5880,	// (0x0003046f) clock_nsta_pane_cp2_ParamLimits

0x5880,	// (0x0003046f) clock_nsta_pane_cp2

0x8992,	// (0x00033581) listscroll_midp_pane_ParamLimits

0x944c,	// (0x0003403b) midp_canvas_pane

0x9734,	// (0x00034323) nsta_clock_indic_pane

0x9768,	// (0x00034357) listscroll_form_pane_vc

0x9770,	// (0x0003435f) listscroll_set_pane_vc_ParamLimits

0x9770,	// (0x0003435f) listscroll_set_pane_vc

0x9875,	// (0x00034464) clock_nsta_pane

0x98ea,	// (0x000344d9) indicator_nsta_pane

0x9bca,	// (0x000347b9) bg_popup_sub_pane_cp2_ParamLimits

0x9bde,	// (0x000347cd) find_pane_cp2_ParamLimits

0x9bde,	// (0x000347cd) find_pane_cp2

0x9bf4,	// (0x000347e3) grid_toobar_pane_ParamLimits

0x9cd4,	// (0x000348c3) list_form_gen_pane_vc_ParamLimits

0x9cd4,	// (0x000348c3) list_form_gen_pane_vc

0x9cea,	// (0x000348d9) scroll_pane_cp8_vc_ParamLimits

0x9cea,	// (0x000348d9) scroll_pane_cp8_vc

0x9d66,	// (0x00034955) data_form_wide_pane_vc_ParamLimits

0x9d66,	// (0x00034955) data_form_wide_pane_vc

0x9d72,	// (0x00034961) form_field_data_wide_pane_vc_g1

0x9d7a,	// (0x00034969) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d7a,	// (0x00034969) form_field_data_wide_pane_vc_t1

0x87ae,	// (0x0003339d) input_focus_pane_cp6_vc_ParamLimits

0x87ae,	// (0x0003339d) input_focus_pane_cp6_vc

0xa0a6,	// (0x00034c95) list_midp_pane_ParamLimits

0xa0b2,	// (0x00034ca1) scroll_pane_cp16_ParamLimits

0xa0b2,	// (0x00034ca1) scroll_pane_cp16

0xa100,	// (0x00034cef) button_value_adjust_pane_ParamLimits

0xa100,	// (0x00034cef) button_value_adjust_pane

0xb07e,	// (0x00035c6d) button_value_adjust_pane_cp6_ParamLimits

0xb07e,	// (0x00035c6d) button_value_adjust_pane_cp6

0xb1a8,	// (0x00035d97) settings_code_pane_cp_ParamLimits

0xb1a8,	// (0x00035d97) settings_code_pane_cp

0x76a4,	// (0x00032293) cell_touch_pane_g1

0x76a4,	// (0x00032293) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0003a2f2) cell_touch_pane_g

0xb773,	// (0x00036362) cell_touch_pane_cp_ParamLimits

0xb773,	// (0x00036362) cell_touch_pane_cp

0xb783,	// (0x00036372) cell_touch_pane_ParamLimits

0xb783,	// (0x00036372) cell_touch_pane

0x76a4,	// (0x00032293) scroll_sc2_down_pane_g1

0x76a4,	// (0x00032293) scroll_sc2_up_pane_g1

0x76ae,	// (0x0003229d) bg_set_opt_pane_cp4_vc

0xb795,	// (0x00036384) list_set_graphic_pane_vc_g1_ParamLimits

0xb795,	// (0x00036384) list_set_graphic_pane_vc_g1

0xb7a1,	// (0x00036390) list_set_graphic_pane_vc_g2_ParamLimits

0xb7a1,	// (0x00036390) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0003a5e7) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0003a5e7) list_set_graphic_pane_vc_g

0xb7ad,	// (0x0003639c) text_primary_small_cp13_vc_ParamLimits

0xb7ad,	// (0x0003639c) text_primary_small_cp13_vc

0xb7c5,	// (0x000363b4) list_set_graphic_pane_vc_ParamLimits

0xb7c5,	// (0x000363b4) list_set_graphic_pane_vc

0x76ae,	// (0x0003229d) input_focus_pane_cp2_vc

0x76a4,	// (0x00032293) setting_code_pane_vc_g1

0x77d9,	// (0x000323c8) setting_code_pane_vc_t1

0xb7d8,	// (0x000363c7) set_text_pane_vc_t1_ParamLimits

0xb7d8,	// (0x000363c7) set_text_pane_vc_t1

0x76ae,	// (0x0003229d) input_focus_pane_cp1_vc

0xb7f4,	// (0x000363e3) list_set_text_pane_vc

0x76a4,	// (0x00032293) setting_text_pane_vc_g1

0x76ae,	// (0x0003229d) bg_set_opt_pane_cp2_vc

0x77d0,	// (0x000323bf) setting_slider_graphic_pane_vc_g1

0xb7fe,	// (0x000363ed) setting_slider_graphic_pane_vc_t1

0xb80e,	// (0x000363fd) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0003a5ec) setting_slider_graphic_pane_vc_t

0xb81e,	// (0x0003640d) slider_set_pane_cp_vc

0xb826,	// (0x00036415) slider_set_pane_vc_g1

0xb82f,	// (0x0003641e) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0003a5f1) slider_set_pane_vc_g

0x8809,	// (0x000333f8) set_opt_bg_pane_g1_copy1

0x8811,	// (0x00033400) set_opt_bg_pane_g2_copy1

0xb85b,	// (0x0003644a) set_opt_bg_pane_g3_copy1

0x8821,	// (0x00033410) set_opt_bg_pane_g4_copy1

0x8829,	// (0x00033418) set_opt_bg_pane_g5_copy1

0x8831,	// (0x00033420) set_opt_bg_pane_g6_copy1

0xb865,	// (0x00036454) set_opt_bg_pane_g7_copy1

0xb86d,	// (0x0003645c) set_opt_bg_pane_g8_copy1

0xb877,	// (0x00036466) set_opt_bg_pane_g9_copy1

0x76ae,	// (0x0003229d) bg_set_opt_pane_cp_vc

0xb881,	// (0x00036470) setting_slider_pane_vc_t1

0xb890,	// (0x0003647f) setting_slider_pane_vc_t2

0xb8a0,	// (0x0003648f) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0003a600) setting_slider_pane_vc_t

0xb8b0,	// (0x0003649f) slider_set_pane_vc

0x6321,	// (0x00030f10) volume_set_pane_vc_g1

0x632a,	// (0x00030f19) volume_set_pane_vc_g2

0x6333,	// (0x00030f22) volume_set_pane_vc_g3

0x633c,	// (0x00030f2b) volume_set_pane_vc_g4

0x6345,	// (0x00030f34) volume_set_pane_vc_g5

0x634e,	// (0x00030f3d) volume_set_pane_vc_g6

0x6357,	// (0x00030f46) volume_set_pane_vc_g7

0x6360,	// (0x00030f4f) volume_set_pane_vc_g8

0x6369,	// (0x00030f58) volume_set_pane_vc_g9

0x6372,	// (0x00030f61) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0003a4a5) volume_set_pane_vc_g

0xb8b8,	// (0x000364a7) volume_set_pane_vc

0xb8c0,	// (0x000364af) button_value_adjust_pane_cp1_vc

0xb8ca,	// (0x000364b9) list_highlight_pane_cp2_vc

0xb8d3,	// (0x000364c2) list_set_pane_vc_ParamLimits

0xb8d3,	// (0x000364c2) list_set_pane_vc

0xb931,	// (0x00036520) main_pane_set_vc_t1_ParamLimits

0xb931,	// (0x00036520) main_pane_set_vc_t1

0xb946,	// (0x00036535) main_pane_set_vc_t2_ParamLimits

0xb946,	// (0x00036535) main_pane_set_vc_t2

0xb958,	// (0x00036547) main_pane_set_vc_t3_ParamLimits

0xb958,	// (0x00036547) main_pane_set_vc_t3

0xb96c,	// (0x0003655b) main_pane_set_vc_t4_ParamLimits

0xb96c,	// (0x0003655b) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0003a607) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0003a607) main_pane_set_vc_t

0xb980,	// (0x0003656f) setting_code_pane_vc_ParamLimits

0xb980,	// (0x0003656f) setting_code_pane_vc

0xb991,	// (0x00036580) setting_slider_graphic_pane_vc

0xb991,	// (0x00036580) setting_slider_pane_vc

0xb991,	// (0x00036580) setting_text_pane_vc

0xb991,	// (0x00036580) setting_volume_pane_vc

0xb99b,	// (0x0003658a) scroll_pane_cp121_vc

0x8788,	// (0x00033377) set_content_pane_vc

0xb9a3,	// (0x00036592) button_value_adjust_pane_g1

0xb9ac,	// (0x0003659b) button_value_adjust_pane_g2

0x0001,

0xfa74,	// (0x0003a663) button_value_adjust_pane_g

0xb9b5,	// (0x000365a4) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9b5,	// (0x000365a4) form_field_slider_wide_pane_vc_t1

0xb9c9,	// (0x000365b8) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9c9,	// (0x000365b8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa79,	// (0x0003a668) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa79,	// (0x0003a668) form_field_slider_wide_pane_vc_t

0x81ba,	// (0x00032da9) input_focus_pane_cp10_vc_ParamLimits

0x81ba,	// (0x00032da9) input_focus_pane_cp10_vc

0xb9f7,	// (0x000365e6) slider_cont_pane_cp1_vc_ParamLimits

0xb9f7,	// (0x000365e6) slider_cont_pane_cp1_vc

0xba09,	// (0x000365f8) slider_form_pane_g1_cp2

0xb82f,	// (0x0003641e) slider_form_pane_g2_cp2

0xba36,	// (0x00036625) form_field_slider_pane_vc_t3

0xba44,	// (0x00036633) form_field_slider_pane_vc_t4

0xba52,	// (0x00036641) slider_form_pane_vc_ParamLimits

0xba52,	// (0x00036641) slider_form_pane_vc

0xba5f,	// (0x0003664e) form_field_slider_pane_vc_t1_ParamLimits

0xba5f,	// (0x0003664e) form_field_slider_pane_vc_t1

0xb9c9,	// (0x000365b8) form_field_slider_pane_vc_t2_ParamLimits

0xb9c9,	// (0x000365b8) form_field_slider_pane_vc_t2

0x0001,

0xfa8b,	// (0x0003a67a) form_field_slider_pane_vc_t_ParamLimits

0xfa8b,	// (0x0003a67a) form_field_slider_pane_vc_t

0x81ba,	// (0x00032da9) input_focus_pane_cp9_vc_ParamLimits

0x81ba,	// (0x00032da9) input_focus_pane_cp9_vc

0xba7b,	// (0x0003666a) slider_cont_pane_vc_ParamLimits

0xba7b,	// (0x0003666a) slider_cont_pane_vc

0xba8f,	// (0x0003667e) list_form_graphic_pane_cp_vc_ParamLimits

0xba8f,	// (0x0003667e) list_form_graphic_pane_cp_vc

0x9d72,	// (0x00034961) form_field_popup_wide_pane_vc_g1

0xbaa4,	// (0x00036693) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbaa4,	// (0x00036693) form_field_popup_wide_pane_vc_t1

0x87ae,	// (0x0003339d) input_focus_pane_cp8_vc_ParamLimits

0x87ae,	// (0x0003339d) input_focus_pane_cp8_vc

0xbae9,	// (0x000366d8) list_form_wide_pane_vc_ParamLimits

0xbae9,	// (0x000366d8) list_form_wide_pane_vc

0xbaf5,	// (0x000366e4) list_form_graphic_pane_vc_g1

0xbafd,	// (0x000366ec) list_form_graphic_pane_vc_t1_ParamLimits

0xbafd,	// (0x000366ec) list_form_graphic_pane_vc_t1

0x778e,	// (0x0003237d) list_highlight_pane_cp5_vc_ParamLimits

0x778e,	// (0x0003237d) list_highlight_pane_cp5_vc

0xbb19,	// (0x00036708) list_form_graphic_pane_vc_ParamLimits

0xbb19,	// (0x00036708) list_form_graphic_pane_vc

0x9d72,	// (0x00034961) form_field_popup_pane_vc_g1

0xbb2f,	// (0x0003671e) form_field_popup_pane_vc_t1_ParamLimits

0xbb2f,	// (0x0003671e) form_field_popup_pane_vc_t1

0x87ae,	// (0x0003339d) input_focus_pane_cp7_vc_ParamLimits

0x87ae,	// (0x0003339d) input_focus_pane_cp7_vc

0xbb46,	// (0x00036735) list_form_pane_vc_ParamLimits

0xbb46,	// (0x00036735) list_form_pane_vc

0xbb52,	// (0x00036741) data_form_pane_vc_t1_ParamLimits

0xbb52,	// (0x00036741) data_form_pane_vc_t1

0x8809,	// (0x000333f8) input_focus_pane_vc_g1

0x8811,	// (0x00033400) input_focus_pane_vc_g2

0x8819,	// (0x00033408) input_focus_pane_vc_g3

0x8821,	// (0x00033410) input_focus_pane_vc_g4

0x8829,	// (0x00033418) input_focus_pane_vc_g5

0x8831,	// (0x00033420) input_focus_pane_vc_g6

0x8839,	// (0x00033428) input_focus_pane_vc_g7

0x8841,	// (0x00033430) input_focus_pane_vc_g8

0x8849,	// (0x00033438) input_focus_pane_vc_g9

0x76a4,	// (0x00032293) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0003a27b) input_focus_pane_vc_g

0x9d66,	// (0x00034955) data_form_pane_vc_ParamLimits

0x9d66,	// (0x00034955) data_form_pane_vc

0x9d72,	// (0x00034961) form_field_data_pane_vc_g1

0xbb6d,	// (0x0003675c) form_field_data_pane_vc_t1_ParamLimits

0xbb6d,	// (0x0003675c) form_field_data_pane_vc_t1

0x87ae,	// (0x0003339d) input_focus_pane_vc_ParamLimits

0x87ae,	// (0x0003339d) input_focus_pane_vc

0xbb87,	// (0x00036776) button_value_adjust_pane_cp3_vc

0xbb8f,	// (0x0003677e) button_value_adjust_pane_cp5_vc

0xbb97,	// (0x00036786) form_field_data_pane_vc_ParamLimits

0xbb97,	// (0x00036786) form_field_data_pane_vc

0xbbae,	// (0x0003679d) form_field_data_pane_vc_cp2

0xbbb6,	// (0x000367a5) form_field_data_wide_pane_vc_ParamLimits

0xbbb6,	// (0x000367a5) form_field_data_wide_pane_vc

0xbbcc,	// (0x000367bb) form_field_data_wide_pane_vc_cp2

0xbbd4,	// (0x000367c3) form_field_popup_pane_vc_ParamLimits

0xbbd4,	// (0x000367c3) form_field_popup_pane_vc

0xbbeb,	// (0x000367da) form_field_popup_wide_pane_vc_ParamLimits

0xbbeb,	// (0x000367da) form_field_popup_wide_pane_vc

0xbc01,	// (0x000367f0) form_field_slider_pane_vc_ParamLimits

0xbc01,	// (0x000367f0) form_field_slider_pane_vc

0xbc14,	// (0x00036803) form_field_slider_wide_pane_vc_ParamLimits

0xbc14,	// (0x00036803) form_field_slider_wide_pane_vc

0xbc27,	// (0x00036816) grid_touch_1_pane_ParamLimits

0xbc27,	// (0x00036816) grid_touch_1_pane

0xbc33,	// (0x00036822) grid_touch_2_pane_ParamLimits

0xbc33,	// (0x00036822) grid_touch_2_pane

0x96ff,	// (0x000342ee) touch_pane_g1_ParamLimits

0x96ff,	// (0x000342ee) touch_pane_g1

0xbc4b,	// (0x0003683a) cell_app_pane_cp_wide_ParamLimits

0xbc4b,	// (0x0003683a) cell_app_pane_cp_wide

0xbc5c,	// (0x0003684b) grid_popup_fast_wide_pane_ParamLimits

0xbc5c,	// (0x0003684b) grid_popup_fast_wide_pane

0xbc70,	// (0x0003685f) scroll_pane_cp19_ParamLimits

0xbc70,	// (0x0003685f) scroll_pane_cp19

0x76ae,	// (0x0003229d) bg_popup_window_pane_cp20

0xbc84,	// (0x00036873) listscroll_popup_fast_wide_pane

0x778e,	// (0x0003237d) grid_indicator_nsta_pane

0xbc8c,	// (0x0003687b) clock_nsta_pane_g1

0xbc95,	// (0x00036884) clock_nsta_pane_t1

0xbcb1,	// (0x000368a0) cell_indicator_nsta_pane_ParamLimits

0xbcb1,	// (0x000368a0) cell_indicator_nsta_pane

0xbce2,	// (0x000368d1) cell_indicator_nsta_pane_g1

0xbcf0,	// (0x000368df) cell_indicator_nsta_pane_g2

0x0001,

0xfa9c,	// (0x0003a68b) cell_indicator_nsta_pane_g

0xbcfd,	// (0x000368ec) clock_nsta_pane_cp

0xbd05,	// (0x000368f4) indicator_nsta_pane_cp

0xbd0d,	// (0x000368fc) nsta_clock_indic_pane_g1

0x7857,	// (0x00032446) grid_indicator_pane

0x8d41,	// (0x00033930) scroll_pane_cp29

0x57cf,	// (0x000303be) indicator_nsta_pane_cp2_ParamLimits

0x57cf,	// (0x000303be) indicator_nsta_pane_cp2

0x778e,	// (0x0003237d) main_apps_wheel_pane

0x9f87,	// (0x00034b76) form_midp_field_text_pane_ParamLimits

0xa0d2,	// (0x00034cc1) scroll_bar_cp050_ParamLimits

0xbd6e,	// (0x0003695d) cell_indicator_pane_ParamLimits

0xbd6e,	// (0x0003695d) cell_indicator_pane

0xbd85,	// (0x00036974) cell_indicator_pane_g1

0xbd8f,	// (0x0003697e) grid_wheel_folder_pane_ParamLimits

0xbd8f,	// (0x0003697e) grid_wheel_folder_pane

0xbda5,	// (0x00036994) list_wheel_apps_pane_ParamLimits

0xbda5,	// (0x00036994) list_wheel_apps_pane

0xbdb6,	// (0x000369a5) main_apps_wheel_pane_g1_ParamLimits

0xbdb6,	// (0x000369a5) main_apps_wheel_pane_g1

0xbdca,	// (0x000369b9) main_apps_wheel_pane_g2_ParamLimits

0xbdca,	// (0x000369b9) main_apps_wheel_pane_g2

0x0001,

0xfab8,	// (0x0003a6a7) main_apps_wheel_pane_g_ParamLimits

0xfab8,	// (0x0003a6a7) main_apps_wheel_pane_g

0xbde2,	// (0x000369d1) main_apps_wheel_pane_t1_ParamLimits

0xbde2,	// (0x000369d1) main_apps_wheel_pane_t1

0xbe05,	// (0x000369f4) list_wheel_apps_pane_g1

0xbe0d,	// (0x000369fc) list_wheel_apps_pane_g2

0xbe15,	// (0x00036a04) list_wheel_apps_pane_g3

0xbe1d,	// (0x00036a0c) list_wheel_apps_pane_g4

0xbe27,	// (0x00036a16) list_wheel_apps_pane_g5

0x0004,

0xfabd,	// (0x0003a6ac) list_wheel_apps_pane_g

0x92c4,	// (0x00033eb3) navi_icon_text_pane

0x97a4,	// (0x00034393) aid_fill_nsta

0xbe4a,	// (0x00036a39) navi_icon_text_pane_g1

0xbe56,	// (0x00036a45) navi_icon_text_pane_t1

0x9157,	// (0x00033d46) list_set_graphic_pane_t1_ParamLimits

0x9157,	// (0x00033d46) list_set_graphic_pane_t1

0xa821,	// (0x00035410) popup_midp_note_alarm_window_t6_ParamLimits

0xa821,	// (0x00035410) popup_midp_note_alarm_window_t6

0xa833,	// (0x00035422) popup_midp_note_alarm_window_t7_ParamLimits

0xa833,	// (0x00035422) popup_midp_note_alarm_window_t7

0xa845,	// (0x00035434) popup_midp_note_alarm_window_t8_ParamLimits

0xa845,	// (0x00035434) popup_midp_note_alarm_window_t8

0xa857,	// (0x00035446) popup_midp_note_alarm_window_t9_ParamLimits

0xa857,	// (0x00035446) popup_midp_note_alarm_window_t9

0xa869,	// (0x00035458) popup_midp_note_alarm_window_t10_ParamLimits

0xa869,	// (0x00035458) popup_midp_note_alarm_window_t10

0xa87b,	// (0x0003546a) popup_midp_note_alarm_window_t11_ParamLimits

0xa87b,	// (0x0003546a) popup_midp_note_alarm_window_t11

0xa88d,	// (0x0003547c) scroll_pane_cp17_ParamLimits

0xa88d,	// (0x0003547c) scroll_pane_cp17

0x6321,	// (0x00030f10) volume_small_pane_cp_g1

0x666c,	// (0x0003125b) volume_small_pane_cp_g2

0x6675,	// (0x00031264) volume_small_pane_cp_g3

0x667e,	// (0x0003126d) volume_small_pane_cp_g4

0x6687,	// (0x00031276) volume_small_pane_cp_g5

0x6690,	// (0x0003127f) volume_small_pane_cp_g6

0x6699,	// (0x00031288) volume_small_pane_cp_g7

0x66a2,	// (0x00031291) volume_small_pane_cp_g8

0x66ab,	// (0x0003129a) volume_small_pane_cp_g9

0x66b4,	// (0x000312a3) volume_small_pane_cp_g10

0x9515,	// (0x00034104) midp_ticker_pane_g1_ParamLimits

0x9521,	// (0x00034110) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0003a347) midp_ticker_pane_g_ParamLimits

0x952d,	// (0x0003411c) midp_ticker_pane_t1_ParamLimits

0x97ba,	// (0x000343a9) aid_fill_nsta_2

0xa0be,	// (0x00034cad) list_form2_midp_pane

0xb1f3,	// (0x00035de2) midp_editing_number_pane_ParamLimits

0xb202,	// (0x00035df1) midp_ticker_pane_ParamLimits

0xbe68,	// (0x00036a57) form2_midp_field_pane

0xbe98,	// (0x00036a87) scroll_pane_cp51

0xbeb8,	// (0x00036aa7) form2_midp_button_pane_ParamLimits

0xbeb8,	// (0x00036aa7) form2_midp_button_pane

0xbeca,	// (0x00036ab9) form2_midp_content_pane_ParamLimits

0xbeca,	// (0x00036ab9) form2_midp_content_pane

0xbee4,	// (0x00036ad3) form2_midp_field_choice_group_pane

0xbeec,	// (0x00036adb) form2_midp_field_pane_g1

0xbef4,	// (0x00036ae3) form2_midp_field_pane_g2

0xbefc,	// (0x00036aeb) form2_midp_field_pane_g3

0xbf04,	// (0x00036af3) form2_midp_field_pane_g4

0x0003,

0xfae2,	// (0x0003a6d1) form2_midp_field_pane_g

0xbf0c,	// (0x00036afb) form2_midp_gauge_slider_pane

0xbf14,	// (0x00036b03) form2_midp_gauge_wait_pane

0xbf1c,	// (0x00036b0b) form2_midp_image_pane_ParamLimits

0xbf1c,	// (0x00036b0b) form2_midp_image_pane

0xbf37,	// (0x00036b26) form2_midp_label_pane_ParamLimits

0xbf37,	// (0x00036b26) form2_midp_label_pane

0xbf50,	// (0x00036b3f) form2_midp_label_pane_cp_ParamLimits

0xbf50,	// (0x00036b3f) form2_midp_label_pane_cp

0xbf71,	// (0x00036b60) form2_midp_string_pane_ParamLimits

0xbf71,	// (0x00036b60) form2_midp_string_pane

0x7ce1,	// (0x000328d0) form2_midp_text_pane_ParamLimits

0x7ce1,	// (0x000328d0) form2_midp_text_pane

0xbf83,	// (0x00036b72) form2_midp_time_pane

0xbf93,	// (0x00036b82) input_focus_pane_cp51_ParamLimits

0xbf93,	// (0x00036b82) input_focus_pane_cp51

0xbfab,	// (0x00036b9a) form2_midp_label_pane_t1_ParamLimits

0xbfab,	// (0x00036b9a) form2_midp_label_pane_t1

0x7cfc,	// (0x000328eb) form2_mdip_text_pane_t1_ParamLimits

0x7cfc,	// (0x000328eb) form2_mdip_text_pane_t1

0x7d1a,	// (0x00032909) form2_midp_time_pane_t1

0xbff4,	// (0x00036be3) form2_midp_gauge_slider_pane_t1

0xc006,	// (0x00036bf5) form2_midp_gauge_slider_pane_t2

0xc018,	// (0x00036c07) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaeb,	// (0x0003a6da) form2_midp_gauge_slider_pane_t

0xc02a,	// (0x00036c19) form2_midp_slider_pane

0xc036,	// (0x00036c25) form2_midp_gauge_wait_pane_t1

0xc044,	// (0x00036c33) form2_midp_wait_pane_ParamLimits

0xc044,	// (0x00036c33) form2_midp_wait_pane

0x9db9,	// (0x000349a8) list_single_2graphic_pane_cp4_ParamLimits

0x9db9,	// (0x000349a8) list_single_2graphic_pane_cp4

0xc06f,	// (0x00036c5e) list_single_midp_graphic_pane_cp_ParamLimits

0xc06f,	// (0x00036c5e) list_single_midp_graphic_pane_cp

0x76ae,	// (0x0003229d) list_highlight_pane_cp20

0xc09e,	// (0x00036c8d) list_single_2graphic_pane_g1_cp4

0xc0a6,	// (0x00036c95) list_single_2graphic_pane_g2_cp4

0xc0ae,	// (0x00036c9d) list_single_2graphic_pane_t1_cp4

0x778e,	// (0x0003237d) list_highlight_pane_cp21

0xc0bd,	// (0x00036cac) list_single_midp_graphic_pane_g4_cp

0xc0cc,	// (0x00036cbb) list_single_midp_graphic_pane_t1_cp

0xc0e1,	// (0x00036cd0) form2_mdip_string_pane_t1_ParamLimits

0xc0e1,	// (0x00036cd0) form2_mdip_string_pane_t1

0x76ae,	// (0x0003229d) bg_wml_button_pane_cp2

0x76a4,	// (0x00032293) form2_midp_image_pane_g1

0x5007,	// (0x0002fbf6) list_double_large_graphic_pane_g5_ParamLimits

0x5007,	// (0x0002fbf6) list_double_large_graphic_pane_g5

0x8992,	// (0x00033581) midp_form_pane_ParamLimits

0x778e,	// (0x0003237d) main_apps_wheel_pane_ParamLimits

0x5ea8,	// (0x00030a97) popup_preview_window_ParamLimits

0x5ea8,	// (0x00030a97) popup_preview_window

0x6063,	// (0x00030c52) popup_touch_info_window_ParamLimits

0x6063,	// (0x00030c52) popup_touch_info_window

0x6081,	// (0x00030c70) popup_touch_menu_window_ParamLimits

0x6081,	// (0x00030c70) popup_touch_menu_window

0x769a,	// (0x00032289) bg_popup_sub_pane_cp6

0xc1da,	// (0x00036dc9) list_touch_menu_pane

0xc1e2,	// (0x00036dd1) list_single_touch_menu_pane_ParamLimits

0xc1e2,	// (0x00036dd1) list_single_touch_menu_pane

0xc1f8,	// (0x00036de7) list_single_touch_menu_pane_t1

0x778e,	// (0x0003237d) bg_popup_sub_pane_cp7_ParamLimits

0x778e,	// (0x0003237d) bg_popup_sub_pane_cp7

0xc206,	// (0x00036df5) heading_sub_pane

0xc20e,	// (0x00036dfd) list_touch_info_pane_ParamLimits

0xc20e,	// (0x00036dfd) list_touch_info_pane

0xc21d,	// (0x00036e0c) list_single_touch_info_pane_ParamLimits

0xc21d,	// (0x00036e0c) list_single_touch_info_pane

0xc22f,	// (0x00036e1e) list_single_touch_info_pane_t1

0xc23d,	// (0x00036e2c) list_single_touch_info_pane_t2

0x0001,

0xfaf9,	// (0x0003a6e8) list_single_touch_info_pane_t

0x9444,	// (0x00034033) bg_popup_heading_pane_cp

0xc24b,	// (0x00036e3a) heading_sub_pane_t1

0x9d00,	// (0x000348ef) bg_popup_preview_window_pane_cp_ParamLimits

0x9d00,	// (0x000348ef) bg_popup_preview_window_pane_cp

0xc206,	// (0x00036df5) heading_preview_pane

0xc20e,	// (0x00036dfd) list_preview_pane_ParamLimits

0xc20e,	// (0x00036dfd) list_preview_pane

0xc259,	// (0x00036e48) popup_preview_window_g1

0xc21d,	// (0x00036e0c) list_single_preview_pane_ParamLimits

0xc21d,	// (0x00036e0c) list_single_preview_pane

0xc261,	// (0x00036e50) list_single_preview_pane_g1

0xc269,	// (0x00036e58) list_single_preview_pane_t1

0xc22f,	// (0x00036e1e) list_single_preview_pane_t2

0x0001,

0xfafe,	// (0x0003a6ed) list_single_preview_pane_t

0xc277,	// (0x00036e66) bg_popup_heading_pane_cp2_ParamLimits

0xc277,	// (0x00036e66) bg_popup_heading_pane_cp2

0xc28d,	// (0x00036e7c) heading_preview_pane_g1

0xc295,	// (0x00036e84) heading_preview_pane_t1_ParamLimits

0xc295,	// (0x00036e84) heading_preview_pane_t1

0x787a,	// (0x00032469) soft_indicator_pane_t1_ParamLimits

0x8721,	// (0x00033310) scroll_pane_ParamLimits

0x8c3a,	// (0x00033829) scroll_sc2_left_pane

0x8c43,	// (0x00033832) scroll_sc2_right_pane

0x8c62,	// (0x00033851) scroll_bg_pane_g1_ParamLimits

0x8c77,	// (0x00033866) scroll_bg_pane_g2_ParamLimits

0x8c8f,	// (0x0003387e) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0003a2d2) scroll_bg_pane_g_ParamLimits

0x8c62,	// (0x00033851) scroll_handle_pane_g1_ParamLimits

0x8cb1,	// (0x000338a0) scroll_handle_pane_g2_ParamLimits

0x8c8f,	// (0x0003387e) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0003a2d9) scroll_handle_pane_g_ParamLimits

0x5b29,	// (0x00030718) popup_choice_list_window_ParamLimits

0x5b29,	// (0x00030718) popup_choice_list_window

0x9bd6,	// (0x000347c5) choice_list_pane

0x9c58,	// (0x00034847) cell_toolbar_pane_t1

0x9c80,	// (0x0003486f) toolbar_button_pane_ParamLimits

0xad53,	// (0x00035942) ai_gene_pane_1_t2_ParamLimits

0xad53,	// (0x00035942) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0003a501) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0003a501) ai_gene_pane_1_t

0xc2b2,	// (0x00036ea1) scroll_sc2_left_pane_g1

0xc2b2,	// (0x00036ea1) scroll_sc2_right_pane_g1

0x9782,	// (0x00034371) bg_popup_sub_pane_cp10

0xc2bc,	// (0x00036eab) list_choice_list_pane

0xc2d5,	// (0x00036ec4) list_single_choice_list_pane_ParamLimits

0xc2d5,	// (0x00036ec4) list_single_choice_list_pane

0xc2e8,	// (0x00036ed7) list_single_choice_list_pane_g1

0x8942,	// (0x00033531) list_single_choice_list_pane_t1_ParamLimits

0x8942,	// (0x00033531) list_single_choice_list_pane_t1

0xc2f0,	// (0x00036edf) choice_list_pane_g1

0xc2f8,	// (0x00036ee7) choice_list_pane_t1

0x769a,	// (0x00032289) input_focus_pane_cp11

0x8b19,	// (0x00033708) title_pane_stacon_g2_ParamLimits

0x8b19,	// (0x00033708) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0003a2b8) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003a2b8) title_pane_stacon_g

0x9444,	// (0x00034033) cursor_press_pane

0x5bd5,	// (0x000307c4) popup_fep_hwr_window_ParamLimits

0x5bd5,	// (0x000307c4) popup_fep_hwr_window

0x5c4f,	// (0x0003083e) popup_fep_vkb_window_ParamLimits

0x5c4f,	// (0x0003083e) popup_fep_vkb_window

0xc306,	// (0x00036ef5) cursor_press_pane_g1

0x0002,

0xfb27,	// (0x0003a716) fep_vkb_side_pane_g_ParamLimits

0x66f6,	// (0x000312e5) fep_hwr_candidate_pane_ParamLimits

0x66f6,	// (0x000312e5) fep_hwr_candidate_pane

0x6720,	// (0x0003130f) fep_hwr_side_pane_ParamLimits

0x6720,	// (0x0003130f) fep_hwr_side_pane

0x6740,	// (0x0003132f) fep_hwr_top_pane_ParamLimits

0x6740,	// (0x0003132f) fep_hwr_top_pane

0x6758,	// (0x00031347) fep_hwr_write_pane_ParamLimits

0x6758,	// (0x00031347) fep_hwr_write_pane

0xfb27,	// (0x0003a716) fep_vkb_side_pane_g

0xc30e,	// (0x00036efd) fep_hwr_top_pane_g1

0xc320,	// (0x00036f0f) fep_hwr_top_pane_g2

0x6792,	// (0x00031381) fep_hwr_top_pane_g3

0x0002,

0xfb03,	// (0x0003a6f2) fep_hwr_top_pane_g

0x67a7,	// (0x00031396) fep_hwr_top_text_pane

0x8e31,	// (0x00033a20) fep_hwr_top_text_pane_g1

0xc356,	// (0x00036f45) fep_hwr_top_text_pane_t1

0x689d,	// (0x0003148c) fep_hwr_candidate_pane_g1

0xc5a9,	// (0x00037198) fep_vkb_keypad_pane_g3_ParamLimits

0xc5a9,	// (0x00037198) fep_vkb_keypad_pane_g3

0xc5d1,	// (0x000371c0) fep_vkb_keypad_pane_g4_ParamLimits

0xc5d1,	// (0x000371c0) fep_vkb_keypad_pane_g4

0xc640,	// (0x0003722f) fep_vkb_bottom_pane_g2_ParamLimits

0xc640,	// (0x0003722f) fep_vkb_bottom_pane_g2

0x0001,

0xfb2e,	// (0x0003a71d) fep_vkb_bottom_pane_g_ParamLimits

0xfb2e,	// (0x0003a71d) fep_vkb_bottom_pane_g

0xc2b2,	// (0x00036ea1) cell_vkb_side_pane_g2

0x0001,

0xfb38,	// (0x0003a727) cell_vkb_side_pane_g

0xc6cb,	// (0x000372ba) cell_vkb_side_pane_t1

0xc6d9,	// (0x000372c8) cell_vkb_side_pane_t1_copy1

0xc2b2,	// (0x00036ea1) bg_fep_vkb_candidate_pane_g2

0xc805,	// (0x000373f4) cell_vkb_candidate_pane_ParamLimits

0xc364,	// (0x00036f53) aid_size_cell_vkb_ParamLimits

0xc364,	// (0x00036f53) aid_size_cell_vkb

0xc805,	// (0x000373f4) cell_vkb_candidate_pane

0x68c4,	// (0x000314b3) bg_popup_fep_shadow_pane_g1

0xc3f2,	// (0x00036fe1) fep_vkb_bottom_pane_ParamLimits

0xc3f2,	// (0x00036fe1) fep_vkb_bottom_pane

0xc428,	// (0x00037017) fep_vkb_candidate_pane_ParamLimits

0xc428,	// (0x00037017) fep_vkb_candidate_pane

0xc444,	// (0x00037033) fep_vkb_keypad_pane_ParamLimits

0xc444,	// (0x00037033) fep_vkb_keypad_pane

0xc48a,	// (0x00037079) fep_vkb_side_pane_ParamLimits

0xc48a,	// (0x00037079) fep_vkb_side_pane

0xc4c6,	// (0x000370b5) fep_vkb_top_pane_ParamLimits

0xc4c6,	// (0x000370b5) fep_vkb_top_pane

0xc502,	// (0x000370f1) fep_vkb_top_pane_g1_ParamLimits

0xc502,	// (0x000370f1) fep_vkb_top_pane_g1

0xc511,	// (0x00037100) fep_vkb_top_pane_g2_ParamLimits

0xc511,	// (0x00037100) fep_vkb_top_pane_g2

0xc520,	// (0x0003710f) fep_vkb_top_pane_g3_ParamLimits

0xc520,	// (0x0003710f) fep_vkb_top_pane_g3

0x0003,

0xfb1e,	// (0x0003a70d) fep_vkb_top_pane_g_ParamLimits

0xfb1e,	// (0x0003a70d) fep_vkb_top_pane_g

0xc53e,	// (0x0003712d) fep_vkb_top_text_pane_ParamLimits

0xc53e,	// (0x0003712d) fep_vkb_top_text_pane

0xc54f,	// (0x0003713e) fep_vkb_side_pane_g1_ParamLimits

0xc54f,	// (0x0003713e) fep_vkb_side_pane_g1

0xc598,	// (0x00037187) grid_vkb_side_pane_ParamLimits

0xc598,	// (0x00037187) grid_vkb_side_pane

0x68cc,	// (0x000314bb) bg_popup_fep_shadow_pane_g2

0x68d5,	// (0x000314c4) bg_popup_fep_shadow_pane_g3

0x68dd,	// (0x000314cc) bg_popup_fep_shadow_pane_g4

0x68e6,	// (0x000314d5) bg_popup_fep_shadow_pane_g5

0x68f0,	// (0x000314df) bg_popup_fep_shadow_pane_g6

0x68f8,	// (0x000314e7) bg_popup_fep_shadow_pane_g7

0x8821,	// (0x00033410) bg_popup_fep_shadow_pane_g8

0xc5ef,	// (0x000371de) grid_vkb_keypad_number_pane_ParamLimits

0xc5ef,	// (0x000371de) grid_vkb_keypad_number_pane

0xc5ff,	// (0x000371ee) grid_vkb_keypad_pane_ParamLimits

0xc5ff,	// (0x000371ee) grid_vkb_keypad_pane

0xc625,	// (0x00037214) fep_vkb_bottom_pane_g1_ParamLimits

0xc625,	// (0x00037214) fep_vkb_bottom_pane_g1

0xc64e,	// (0x0003723d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc64e,	// (0x0003723d) grid_vkb_keypad_bottom_left_pane

0xc663,	// (0x00037252) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc663,	// (0x00037252) grid_vkb_keypad_bottom_right_pane

0xc678,	// (0x00037267) fep_vkb_top_text_pane_g1

0xc693,	// (0x00037282) fep_vkb_top_text_pane_t1

0xc6a8,	// (0x00037297) cell_vkb_side_pane_ParamLimits

0xc6a8,	// (0x00037297) cell_vkb_side_pane

0xc2b2,	// (0x00036ea1) cell_vkb_side_pane_g1

0xc6e7,	// (0x000372d6) cell_vkb_keypad_pane_ParamLimits

0xc6e7,	// (0x000372d6) cell_vkb_keypad_pane

0xc75c,	// (0x0003734b) cell_vkb_keypad_pane_g1

0x0008,

0xfb4b,	// (0x0003a73a) bg_popup_fep_shadow_pane_g

0x690a,	// (0x000314f9) cell_hwr_side_pane_g1

0x690a,	// (0x000314f9) cell_hwr_side_pane_g2

0xc766,	// (0x00037355) cell_vkb_keypad_pane_t1

0xc774,	// (0x00037363) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc774,	// (0x00037363) cell_vkb_keypad_bottom_left_pane

0xc791,	// (0x00037380) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc791,	// (0x00037380) cell_vkb_keypad_bottom_right_pane

0xc2b2,	// (0x00036ea1) cell_vkb_keypad_bottom_left_pane_g1

0xc2b2,	// (0x00036ea1) cell_vkb_keypad_bottom_right_pane_g1

0xc7ca,	// (0x000373b9) cell_vkb_keypad_number_pane_ParamLimits

0xc7ca,	// (0x000373b9) cell_vkb_keypad_number_pane

0xc7e9,	// (0x000373d8) cell_vkb_keypad_number_pane_g1

0xc7f3,	// (0x000373e2) cell_vkb_keypad_number_pane_g2

0xc7fc,	// (0x000373eb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3d,	// (0x0003a72c) cell_vkb_keypad_number_pane_g

0xc766,	// (0x00037355) cell_vkb_keypad_number_pane_t1

0xc820,	// (0x0003740f) fep_vkb_candidate_pane_g1

0x0001,

0xfb5e,	// (0x0003a74d) cell_hwr_side_pane_g

0xc839,	// (0x00037428) cell_hwr_side_pane_t1

0x6914,	// (0x00031503) cell_hwr_side_pane_t1_copy1

0x6922,	// (0x00031511) cell_hwr_candidate_pane_g1

0x6951,	// (0x00031540) cell_hwr_candidate_pane_t1

0xc2b2,	// (0x00036ea1) cell_vkb_candidate_pane_g2

0xc87d,	// (0x0003746c) cell_vkb_candidate_pane_t1

0x66bd,	// (0x000312ac) bg_popup_fep_shadow_pane_ParamLimits

0x66bd,	// (0x000312ac) bg_popup_fep_shadow_pane

0x6772,	// (0x00031361) bg_fep_hwr_top_pane_g4

0xc332,	// (0x00036f21) bg_hwr_side_pane_g1_ParamLimits

0xc332,	// (0x00036f21) bg_hwr_side_pane_g1

0x67e3,	// (0x000313d2) cell_hwr_side_pane_ParamLimits

0x67e3,	// (0x000313d2) cell_hwr_side_pane

0x681e,	// (0x0003140d) fep_hwr_write_pane_g1_ParamLimits

0x681e,	// (0x0003140d) fep_hwr_write_pane_g1

0x682b,	// (0x0003141a) fep_hwr_write_pane_g2_ParamLimits

0x682b,	// (0x0003141a) fep_hwr_write_pane_g2

0x6838,	// (0x00031427) fep_hwr_write_pane_g3_ParamLimits

0x6838,	// (0x00031427) fep_hwr_write_pane_g3

0x6846,	// (0x00031435) fep_hwr_write_pane_g4_ParamLimits

0x6846,	// (0x00031435) fep_hwr_write_pane_g4

0x0005,

0xfb0a,	// (0x0003a6f9) fep_hwr_write_pane_g_ParamLimits

0xfb0a,	// (0x0003a6f9) fep_hwr_write_pane_g

0x6772,	// (0x00031361) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6772,	// (0x00031361) bg_fep_hwr_candidate_pane_g2

0x685b,	// (0x0003144a) cell_hwr_candidate_pane_ParamLimits

0x685b,	// (0x0003144a) cell_hwr_candidate_pane

0x689d,	// (0x0003148c) fep_hwr_candidate_pane_g1_ParamLimits

0xc392,	// (0x00036f81) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc392,	// (0x00036f81) bg_popup_fep_shadow_pane_cp2

0xc530,	// (0x0003711f) fep_vkb_top_pane_g4_ParamLimits

0xc530,	// (0x0003711f) fep_vkb_top_pane_g4

0xc576,	// (0x00037165) fep_vkb_side_pane_g2_ParamLimits

0xc576,	// (0x00037165) fep_vkb_side_pane_g2

0x514a,	// (0x0002fd39) list_setting_pane_t4_ParamLimits

0x514a,	// (0x0002fd39) list_setting_pane_t4

0x51e4,	// (0x0002fdd3) list_setting_number_pane_t5_ParamLimits

0x51e4,	// (0x0002fdd3) list_setting_number_pane_t5

0x8e78,	// (0x00033a67) list_double_heading_pane_cp2_ParamLimits

0x8e78,	// (0x00033a67) list_double_heading_pane_cp2

0x87bc,	// (0x000333ab) list_double_heading_pane_g1_cp2_ParamLimits

0x87bc,	// (0x000333ab) list_double_heading_pane_g1_cp2

0x87c8,	// (0x000333b7) list_double_heading_pane_g2_cp2_ParamLimits

0x87c8,	// (0x000333b7) list_double_heading_pane_g2_cp2

0xc88b,	// (0x0003747a) list_double_heading_pane_t1_cp2_ParamLimits

0xc88b,	// (0x0003747a) list_double_heading_pane_t1_cp2

0xc8a1,	// (0x00037490) list_double_heading_pane_t2_cp2_ParamLimits

0xc8a1,	// (0x00037490) list_double_heading_pane_t2_cp2

0x7682,	// (0x00032271) aid_value_unit2

0x4bba,	// (0x0002f7a9) popup_preview_fixed_window

0x81c8,	// (0x00032db7) bg_popup_preview_window_pane_cp02

0xc8b3,	// (0x000374a2) list_preview_fixed_pane

0xc8f9,	// (0x000374e8) list_empty_pane_fp_ParamLimits

0xc8f9,	// (0x000374e8) list_empty_pane_fp

0xc8f9,	// (0x000374e8) list_single_cale_day_pane_fp_ParamLimits

0xc8f9,	// (0x000374e8) list_single_cale_day_pane_fp

0xc8f9,	// (0x000374e8) list_single_graphic_heading_pane_fp_ParamLimits

0xc8f9,	// (0x000374e8) list_single_graphic_heading_pane_fp

0xc8f9,	// (0x000374e8) list_single_graphic_pane_fp_ParamLimits

0xc8f9,	// (0x000374e8) list_single_graphic_pane_fp

0xc8f9,	// (0x000374e8) list_single_heading_pane_fp_ParamLimits

0xc8f9,	// (0x000374e8) list_single_heading_pane_fp

0xc8f9,	// (0x000374e8) list_single_pane_fp_ParamLimits

0xc8f9,	// (0x000374e8) list_single_pane_fp

0xc90e,	// (0x000374fd) list_single_pane_fp_g1_ParamLimits

0xc90e,	// (0x000374fd) list_single_pane_fp_g1

0x7d2d,	// (0x0003291c) list_single_pane_fp_g2_ParamLimits

0x7d2d,	// (0x0003291c) list_single_pane_fp_g2

0x7d39,	// (0x00032928) list_single_pane_fp_g3_ParamLimits

0x7d39,	// (0x00032928) list_single_pane_fp_g3

0xc91a,	// (0x00037509) list_single_pane_fp_g4_ParamLimits

0xc91a,	// (0x00037509) list_single_pane_fp_g4

0x0003,

0xfb71,	// (0x0003a760) list_single_pane_fp_g_ParamLimits

0xfb71,	// (0x0003a760) list_single_pane_fp_g

0x7d4d,	// (0x0003293c) list_single_pane_fp_t1_ParamLimits

0x7d4d,	// (0x0003293c) list_single_pane_fp_t1

0x7d64,	// (0x00032953) list_single_graphic_pane_fp_g1_ParamLimits

0x7d64,	// (0x00032953) list_single_graphic_pane_fp_g1

0xc90e,	// (0x000374fd) list_single_graphic_pane_fp_g2_ParamLimits

0xc90e,	// (0x000374fd) list_single_graphic_pane_fp_g2

0x7d2d,	// (0x0003291c) list_single_graphic_pane_fp_g3_ParamLimits

0x7d2d,	// (0x0003291c) list_single_graphic_pane_fp_g3

0x7d39,	// (0x00032928) list_single_graphic_pane_fp_g4_ParamLimits

0x7d39,	// (0x00032928) list_single_graphic_pane_fp_g4

0xc91a,	// (0x00037509) list_single_graphic_pane_fp_g5_ParamLimits

0xc91a,	// (0x00037509) list_single_graphic_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a769) list_single_graphic_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a769) list_single_graphic_pane_fp_g

0x7d70,	// (0x0003295f) list_single_graphic_pane_fp_t1_ParamLimits

0x7d70,	// (0x0003295f) list_single_graphic_pane_fp_t1

0x7d64,	// (0x00032953) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7d64,	// (0x00032953) list_single_graphic_heading_pane_fp_g1

0xc90e,	// (0x000374fd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc90e,	// (0x000374fd) list_single_graphic_heading_pane_fp_g2

0x7d2d,	// (0x0003291c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7d2d,	// (0x0003291c) list_single_graphic_heading_pane_fp_g3

0x7d39,	// (0x00032928) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7d39,	// (0x00032928) list_single_graphic_heading_pane_fp_g4

0xc91a,	// (0x00037509) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc91a,	// (0x00037509) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a769) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a769) list_single_graphic_heading_pane_fp_g

0x7d86,	// (0x00032975) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7d86,	// (0x00032975) list_single_graphic_heading_pane_fp_t1

0x7d9c,	// (0x0003298b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7d9c,	// (0x0003298b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0003a774) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0003a774) list_single_graphic_heading_pane_fp_t

0x7dae,	// (0x0003299d) list_single_cale_day_pane_fp_g1_ParamLimits

0x7dae,	// (0x0003299d) list_single_cale_day_pane_fp_g1

0xc926,	// (0x00037515) list_single_cale_day_pane_fp_g2_ParamLimits

0xc926,	// (0x00037515) list_single_cale_day_pane_fp_g2

0x7de6,	// (0x000329d5) list_single_cale_day_pane_fp_g3_ParamLimits

0x7de6,	// (0x000329d5) list_single_cale_day_pane_fp_g3

0x7e0e,	// (0x000329fd) list_single_cale_day_pane_fp_g4_ParamLimits

0x7e0e,	// (0x000329fd) list_single_cale_day_pane_fp_g4

0x7e32,	// (0x00032a21) list_single_cale_day_pane_fp_g5_ParamLimits

0x7e32,	// (0x00032a21) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003a779) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003a779) list_single_cale_day_pane_fp_g

0x7e56,	// (0x00032a45) list_single_cale_day_pane_fp_t1_ParamLimits

0x7e56,	// (0x00032a45) list_single_cale_day_pane_fp_t1

0x7e7c,	// (0x00032a6b) list_single_cale_day_pane_fp_t2_ParamLimits

0x7e7c,	// (0x00032a6b) list_single_cale_day_pane_fp_t2

0x7e95,	// (0x00032a84) list_single_cale_day_pane_fp_t3_ParamLimits

0x7e95,	// (0x00032a84) list_single_cale_day_pane_fp_t3

0x0002,

0xfb95,	// (0x0003a784) list_single_cale_day_pane_fp_t_ParamLimits

0xfb95,	// (0x0003a784) list_single_cale_day_pane_fp_t

0xc90e,	// (0x000374fd) list_empty_pane_fp_g1_ParamLimits

0xc90e,	// (0x000374fd) list_empty_pane_fp_g1

0x7eae,	// (0x00032a9d) list_empty_pane_fp_t1

0x7ebc,	// (0x00032aab) list_empty_pane_fp_t2

0x0001,

0xfb9c,	// (0x0003a78b) list_empty_pane_fp_t

0xc90e,	// (0x000374fd) list_single_heading_pane_fp_g1_ParamLimits

0xc90e,	// (0x000374fd) list_single_heading_pane_fp_g1

0x7d2d,	// (0x0003291c) list_single_heading_pane_fp_g2_ParamLimits

0x7d2d,	// (0x0003291c) list_single_heading_pane_fp_g2

0x7d39,	// (0x00032928) list_single_heading_pane_fp_g3_ParamLimits

0x7d39,	// (0x00032928) list_single_heading_pane_fp_g3

0x0002,

0xfba1,	// (0x0003a790) list_single_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0003a790) list_single_heading_pane_fp_g

0x7eca,	// (0x00032ab9) list_single_heading_pane_fp_t1_ParamLimits

0x7eca,	// (0x00032ab9) list_single_heading_pane_fp_t1

0x7edc,	// (0x00032acb) list_single_heading_pane_fp_t2_ParamLimits

0x7edc,	// (0x00032acb) list_single_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0003a797) list_single_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0003a797) list_single_heading_pane_fp_t

0x89b0,	// (0x0003359f) aid_size_cell_fast

0x8138,	// (0x00032d27) soft_indicator_pane_cp1_t1

0x89ed,	// (0x000335dc) cell_app_pane_cp2_ParamLimits

0x89ed,	// (0x000335dc) cell_app_pane_cp2

0x66df,	// (0x000312ce) fep_hwr_candidate_drop_down_list_pane

0x68b7,	// (0x000314a6) fep_hwr_candidate_pane_g3_ParamLimits

0x68b7,	// (0x000314a6) fep_hwr_candidate_pane_g3

0x3785,	// (0x0002e374) fep_hwr_candidate_pane_g4_ParamLimits

0x3785,	// (0x0002e374) fep_hwr_candidate_pane_g4

0x0002,

0xfb17,	// (0x0003a706) fep_hwr_candidate_pane_g_ParamLimits

0xfb17,	// (0x0003a706) fep_hwr_candidate_pane_g

0xc417,	// (0x00037006) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc417,	// (0x00037006) fep_vkb_candidate_drop_down_list_pane

0xc828,	// (0x00037417) fep_vkb_candidate_pane_g3

0xc830,	// (0x0003741f) fep_vkb_candidate_pane_g4

0x0002,

0xfb44,	// (0x0003a733) fep_vkb_candidate_pane_g

0x6922,	// (0x00031511) cell_hwr_candidate_pane_g1_ParamLimits

0x6930,	// (0x0003151f) cell_hwr_candidate_pane_g3_ParamLimits

0x6930,	// (0x0003151f) cell_hwr_candidate_pane_g3

0xdd67,	// (0x00038956) cell_hwr_candidate_pane_g4_ParamLimits

0xdd67,	// (0x00038956) cell_hwr_candidate_pane_g4

0x0002,

0xfb63,	// (0x0003a752) cell_hwr_candidate_pane_g_ParamLimits

0xfb63,	// (0x0003a752) cell_hwr_candidate_pane_g

0xc847,	// (0x00037436) cell_vkb_candidate_pane_g3_ParamLimits

0xc847,	// (0x00037436) cell_vkb_candidate_pane_g3

0xc862,	// (0x00037451) cell_vkb_candidate_pane_g4_ParamLimits

0xc862,	// (0x00037451) cell_vkb_candidate_pane_g4

0xc932,	// (0x00037521) cell_app_pane_cp2_g1_ParamLimits

0xc932,	// (0x00037521) cell_app_pane_cp2_g1

0xc950,	// (0x0003753f) cell_app_pane_cp2_g2_ParamLimits

0xc950,	// (0x0003753f) cell_app_pane_cp2_g2

0x0001,

0xfbad,	// (0x0003a79c) cell_app_pane_cp2_g_ParamLimits

0xfbad,	// (0x0003a79c) cell_app_pane_cp2_g

0xc95c,	// (0x0003754b) cell_app_pane_cp2_t1_ParamLimits

0xc95c,	// (0x0003754b) cell_app_pane_cp2_t1

0x87ae,	// (0x0003339d) grid_highlight_pane_cp1_ParamLimits

0x87ae,	// (0x0003339d) grid_highlight_pane_cp1

0x696f,	// (0x0003155e) cell_hwr_candidate_pane_cp1_ParamLimits

0x696f,	// (0x0003155e) cell_hwr_candidate_pane_cp1

0x6922,	// (0x00031511) fep_hwr_candidate_drop_down_list_pane_g1

0x698e,	// (0x0003157d) fep_hwr_candidate_drop_down_list_pane_g2

0x699b,	// (0x0003158a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0003a7a1) fep_hwr_candidate_drop_down_list_pane_g

0x69a8,	// (0x00031597) fep_hwr_candidate_drop_down_list_scroll_pane

0x69b1,	// (0x000315a0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x69b1,	// (0x000315a0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x69be,	// (0x000315ad) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x69be,	// (0x000315ad) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x69cb,	// (0x000315ba) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x69cb,	// (0x000315ba) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x69d8,	// (0x000315c7) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x69d8,	// (0x000315c7) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x69f3,	// (0x000315e2) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x69f3,	// (0x000315e2) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6a0e,	// (0x000315fd) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6a0e,	// (0x000315fd) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6a29,	// (0x00031618) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6a29,	// (0x00031618) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6a44,	// (0x00031633) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6a44,	// (0x00031633) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x0003a7a8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x0003a7a8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc96e,	// (0x0003755d) cell_vkb_candidate_pane_cp1_ParamLimits

0xc96e,	// (0x0003755d) cell_vkb_candidate_pane_cp1

0xc530,	// (0x0003711f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc530,	// (0x0003711f) fep_vkb_candidate_drop_down_list_pane_g1

0xc98e,	// (0x0003757d) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc98e,	// (0x0003757d) fep_vkb_candidate_drop_down_list_pane_g2

0xc99b,	// (0x0003758a) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc99b,	// (0x0003758a) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbca,	// (0x0003a7b9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbca,	// (0x0003a7b9) fep_vkb_candidate_drop_down_list_pane_g

0xc9a8,	// (0x00037597) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9a8,	// (0x00037597) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9b5,	// (0x000375a4) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9b5,	// (0x000375a4) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9c2,	// (0x000375b1) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9c2,	// (0x000375b1) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9ce,	// (0x000375bd) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9ce,	// (0x000375bd) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc9da,	// (0x000375c9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9da,	// (0x000375c9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9fb,	// (0x000375ea) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9fb,	// (0x000375ea) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca1c,	// (0x0003760b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca1c,	// (0x0003760b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca3d,	// (0x0003762c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca3d,	// (0x0003762c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca5e,	// (0x0003764d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca5e,	// (0x0003764d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd1,	// (0x0003a7c0) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd1,	// (0x0003a7c0) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x76b8,	// (0x000322a7) title_pane_g1_ParamLimits

0x76c5,	// (0x000322b4) title_pane_g2_ParamLimits

0xf54e,	// (0x0003a13d) title_pane_g_ParamLimits

0x8e21,	// (0x00033a10) aid_call2_pane

0x8e29,	// (0x00033a18) aid_call_pane

0x8e31,	// (0x00033a20) popup_clock_analogue_window_g1

0x8e31,	// (0x00033a20) popup_clock_analogue_window_g2

0x5646,	// (0x00030235) popup_clock_analogue_window_g3

0x564f,	// (0x0003023e) popup_clock_analogue_window_g4

0x76a4,	// (0x00032293) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0003a2e7) popup_clock_analogue_window_g

0x5657,	// (0x00030246) popup_clock_analogue_window_t1

0x5665,	// (0x00030254) clock_digital_number_pane_ParamLimits

0x5665,	// (0x00030254) clock_digital_number_pane

0x5671,	// (0x00030260) clock_digital_number_pane_cp02_ParamLimits

0x5671,	// (0x00030260) clock_digital_number_pane_cp02

0x567d,	// (0x0003026c) clock_digital_number_pane_cp03_ParamLimits

0x567d,	// (0x0003026c) clock_digital_number_pane_cp03

0x5689,	// (0x00030278) clock_digital_number_pane_cp04_ParamLimits

0x5689,	// (0x00030278) clock_digital_number_pane_cp04

0x5695,	// (0x00030284) clock_digital_separator_pane_ParamLimits

0x5695,	// (0x00030284) clock_digital_separator_pane

0x56a1,	// (0x00030290) popup_clock_digital_window_t1_ParamLimits

0x56a1,	// (0x00030290) popup_clock_digital_window_t1

0x76a4,	// (0x00032293) clock_digital_number_pane_g1

0x76a4,	// (0x00032293) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0003a2f2) clock_digital_number_pane_g

0x76a4,	// (0x00032293) clock_digital_separator_pane_g1

0x76a4,	// (0x00032293) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0003a2f2) clock_digital_separator_pane_g

0x97a4,	// (0x00034393) aid_fill_nsta_ParamLimits

0x98ea,	// (0x000344d9) indicator_nsta_pane_ParamLimits

0x9a63,	// (0x00034652) popup_clock_analogue_window

0x9a63,	// (0x00034652) popup_clock_digital_window

0x778e,	// (0x0003237d) grid_indicator_nsta_pane_ParamLimits

0xbca3,	// (0x00036892) clock_nsta_pane_t2

0x0001,

0xfa97,	// (0x0003a686) clock_nsta_pane_t

0x560a,	// (0x000301f9) aid_size_max_handle

0x5614,	// (0x00030203) aid_size_min_handle

0x9444,	// (0x00034033) editor_scroll_pane

0xca79,	// (0x00037668) ex_editor_pane

0x891e,	// (0x0003350d) scroll_pane_cp13

0x874d,	// (0x0003333c) scroll_pane_cp14

0x8e60,	// (0x00033a4f) scroll_pane_cp36

0x8e8c,	// (0x00033a7b) list_single_graphic_hl_pane_cp2_ParamLimits

0x8e8c,	// (0x00033a7b) list_single_graphic_hl_pane_cp2

0xb254,	// (0x00035e43) list_single_graphic_hl_pane_ParamLimits

0xb254,	// (0x00035e43) list_single_graphic_hl_pane

0x7ef2,	// (0x00032ae1) aid_size_min_hl_cp1

0xca81,	// (0x00037670) list_highlight_pane_cp34_ParamLimits

0xca81,	// (0x00037670) list_highlight_pane_cp34

0xca92,	// (0x00037681) list_single_graphic_hl_pane_g1_ParamLimits

0xca92,	// (0x00037681) list_single_graphic_hl_pane_g1

0x7efb,	// (0x00032aea) list_single_graphic_hl_pane_g2_ParamLimits

0x7efb,	// (0x00032aea) list_single_graphic_hl_pane_g2

0x7efb,	// (0x00032aea) list_single_graphic_hl_pane_g3_ParamLimits

0x7efb,	// (0x00032aea) list_single_graphic_hl_pane_g3

0x7f07,	// (0x00032af6) list_single_graphic_hl_pane_g4_ParamLimits

0x7f07,	// (0x00032af6) list_single_graphic_hl_pane_g4

0x7f13,	// (0x00032b02) list_single_graphic_hl_pane_g5_ParamLimits

0x7f13,	// (0x00032b02) list_single_graphic_hl_pane_g5

0x0004,

0xfbe2,	// (0x0003a7d1) list_single_graphic_hl_pane_g_ParamLimits

0xfbe2,	// (0x0003a7d1) list_single_graphic_hl_pane_g

0x7f27,	// (0x00032b16) list_single_graphic_hl_pane_t1_ParamLimits

0x7f27,	// (0x00032b16) list_single_graphic_hl_pane_t1

0xca9f,	// (0x0003768e) aid_size_min_hl_cp2

0xcaa8,	// (0x00037697) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa8,	// (0x00037697) list_highlight_pane_cp34_cp2

0xca92,	// (0x00037681) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca92,	// (0x00037681) list_single_graphic_hl_pane_g1_cp2

0xcab5,	// (0x000376a4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab5,	// (0x000376a4) list_single_graphic_hl_pane_g2_cp2

0xcac1,	// (0x000376b0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcac1,	// (0x000376b0) list_single_graphic_hl_pane_g3_cp2

0xbe7e,	// (0x00036a6d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbe7e,	// (0x00036a6d) list_single_graphic_hl_pane_g4_cp2

0xcacf,	// (0x000376be) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcacf,	// (0x000376be) list_single_graphic_hl_pane_g5_cp2

0x59df,	// (0x000305ce) control_pane_g4_ParamLimits

0x59df,	// (0x000305ce) control_pane_g4

0x9782,	// (0x00034371) bg_popup_sub_pane_cp10_ParamLimits

0xc2bc,	// (0x00036eab) list_choice_list_pane_ParamLimits

0xc2cb,	// (0x00036eba) scroll_pane_cp23

0x81c8,	// (0x00032db7) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8b3,	// (0x000374a2) list_preview_fixed_pane_ParamLimits

0xc8c9,	// (0x000374b8) list_preview_fixed_pane_cp_ParamLimits

0xc8c9,	// (0x000374b8) list_preview_fixed_pane_cp

0xc8d5,	// (0x000374c4) popup_preview_fixed_window_g1_ParamLimits

0xc8d5,	// (0x000374c4) popup_preview_fixed_window_g1

0xc8e1,	// (0x000374d0) popup_preview_fixed_window_g2_ParamLimits

0xc8e1,	// (0x000374d0) popup_preview_fixed_window_g2

0x0002,

0xfb6a,	// (0x0003a759) popup_preview_fixed_window_g_ParamLimits

0xfb6a,	// (0x0003a759) popup_preview_fixed_window_g

0x557e,	// (0x0003016d) aid_navi_side_left_pane_ParamLimits

0x5593,	// (0x00030182) aid_navi_side_right_pane_ParamLimits

0x55ab,	// (0x0003019a) navi_icon_pane_stacon_ParamLimits

0x55bf,	// (0x000301ae) navi_navi_pane_stacon_ParamLimits

0x55ab,	// (0x0003019a) navi_text_pane_stacon_ParamLimits

0x4a7b,	// (0x0002f66a) main_text_info_pane

0xcaf9,	// (0x000376e8) listscroll_text_info_pane

0xcb01,	// (0x000376f0) list_text_info_pane_ParamLimits

0xcb01,	// (0x000376f0) list_text_info_pane

0xcb10,	// (0x000376ff) scroll_pane_cp24_ParamLimits

0xcb10,	// (0x000376ff) scroll_pane_cp24

0xcb2e,	// (0x0003771d) list_text_info_pane_t1_ParamLimits

0xcb2e,	// (0x0003771d) list_text_info_pane_t1

0x5b47,	// (0x00030736) popup_fast_swap2_window_ParamLimits

0x5b47,	// (0x00030736) popup_fast_swap2_window

0xcb5f,	// (0x0003774e) aid_size_cell_fast2

0x769a,	// (0x00032289) bg_popup_window_pane_cp17

0xa0ea,	// (0x00034cd9) heading_pane_cp2

0x8417,	// (0x00033006) listscroll_fast2_pane

0xcb69,	// (0x00037758) grid_fast2_pane

0xcb73,	// (0x00037762) listscroll_fast2_pane_g1

0xcb7b,	// (0x0003776a) listscroll_fast2_pane_g2

0x0001,

0xfbed,	// (0x0003a7dc) listscroll_fast2_pane_g

0x891e,	// (0x0003350d) scroll_pane_cp26

0xcb85,	// (0x00037774) cell_fast2_pane_ParamLimits

0xcb85,	// (0x00037774) cell_fast2_pane

0xcb9a,	// (0x00037789) cell_fast2_pane_g1

0xcba3,	// (0x00037792) cell_fast2_pane_g2

0xcbac,	// (0x0003779b) cell_fast2_pane_g3

0x0002,

0xfbf2,	// (0x0003a7e1) cell_fast2_pane_g

0x850a,	// (0x000330f9) grid_highlight_pane_cp9

0x5b05,	// (0x000306f4) main_eswt_pane_ParamLimits

0x5b05,	// (0x000306f4) main_eswt_pane

0xcb25,	// (0x00037714) list_single_text_info_pane

0xcbb4,	// (0x000377a3) eswt_ctrl_button_pane

0xcbb4,	// (0x000377a3) eswt_ctrl_canvas_pane

0xcbbc,	// (0x000377ab) eswt_ctrl_combo_pane

0xcbb4,	// (0x000377a3) eswt_ctrl_default_pane

0xcbb4,	// (0x000377a3) eswt_ctrl_label_pane

0xcbc4,	// (0x000377b3) eswt_ctrl_wait_pane

0xcbcc,	// (0x000377bb) eswt_shell_pane

0x769a,	// (0x00032289) listscroll_eswt_app_pane

0xcbec,	// (0x000377db) popup_eswt_tasktip_window_ParamLimits

0xcbec,	// (0x000377db) popup_eswt_tasktip_window

0x9d00,	// (0x000348ef) bg_popup_window_pane_cp18

0xcbfd,	// (0x000377ec) eswt_control_pane_g1_ParamLimits

0xcbfd,	// (0x000377ec) eswt_control_pane_g1

0xcc0a,	// (0x000377f9) eswt_control_pane_g2_ParamLimits

0xcc0a,	// (0x000377f9) eswt_control_pane_g2

0xcc17,	// (0x00037806) eswt_control_pane_g3_ParamLimits

0xcc17,	// (0x00037806) eswt_control_pane_g3

0xcc24,	// (0x00037813) eswt_control_pane_g4_ParamLimits

0xcc24,	// (0x00037813) eswt_control_pane_g4

0x0003,

0xfbf9,	// (0x0003a7e8) eswt_control_pane_g_ParamLimits

0xfbf9,	// (0x0003a7e8) eswt_control_pane_g

0x87ae,	// (0x0003339d) bg_button_pane_ParamLimits

0x87ae,	// (0x0003339d) bg_button_pane

0x851f,	// (0x0003310e) common_borders_pane_copy2_ParamLimits

0x851f,	// (0x0003310e) common_borders_pane_copy2

0xcc31,	// (0x00037820) control_button_pane_g1_ParamLimits

0xcc31,	// (0x00037820) control_button_pane_g1

0xcc3d,	// (0x0003782c) control_button_pane_g2_ParamLimits

0xcc3d,	// (0x0003782c) control_button_pane_g2

0xcc49,	// (0x00037838) control_button_pane_g3_ParamLimits

0xcc49,	// (0x00037838) control_button_pane_g3

0x0002,

0xfc02,	// (0x0003a7f1) control_button_pane_g_ParamLimits

0xfc02,	// (0x0003a7f1) control_button_pane_g

0xcc5d,	// (0x0003784c) control_button_pane_t1

0xcc6b,	// (0x0003785a) control_button_pane_t2

0x0001,

0xfc09,	// (0x0003a7f8) control_button_pane_t

0x9c8c,	// (0x0003487b) bg_button_pane_g1

0x9c9c,	// (0x0003488b) bg_button_pane_g2

0x9c94,	// (0x00034883) bg_button_pane_g3

0x9cac,	// (0x0003489b) bg_button_pane_g4

0x9ca4,	// (0x00034893) bg_button_pane_g5

0x9cb4,	// (0x000348a3) bg_button_pane_g6

0x9cbc,	// (0x000348ab) bg_button_pane_g7

0x9ccc,	// (0x000348bb) bg_button_pane_g8

0x9cc4,	// (0x000348b3) bg_button_pane_g9

0x0008,

0xf866,	// (0x0003a455) bg_button_pane_g

0xc277,	// (0x00036e66) common_borders_pane_ParamLimits

0xc277,	// (0x00036e66) common_borders_pane

0xcbfd,	// (0x000377ec) eswt_control_pane_g1_copy1_ParamLimits

0xcbfd,	// (0x000377ec) eswt_control_pane_g1_copy1

0xcc0a,	// (0x000377f9) eswt_control_pane_g2_copy1_ParamLimits

0xcc0a,	// (0x000377f9) eswt_control_pane_g2_copy1

0xcc17,	// (0x00037806) eswt_control_pane_g3_copy1_ParamLimits

0xcc17,	// (0x00037806) eswt_control_pane_g3_copy1

0xcc24,	// (0x00037813) eswt_control_pane_g4_copy1_ParamLimits

0xcc24,	// (0x00037813) eswt_control_pane_g4_copy1

0xc2b2,	// (0x00036ea1) bg_eswt_ctrl_canvas_pane_g1

0xc277,	// (0x00036e66) common_borders_pane_cp2_ParamLimits

0xc277,	// (0x00036e66) common_borders_pane_cp2

0xc277,	// (0x00036e66) common_borders_pane_cp3_ParamLimits

0xc277,	// (0x00036e66) common_borders_pane_cp3

0xcc79,	// (0x00037868) separator_horizontal_pane

0xcc81,	// (0x00037870) separator_vertical_pane

0xcbfd,	// (0x000377ec) eswt_control_pane_g1_copy2_ParamLimits

0xcbfd,	// (0x000377ec) eswt_control_pane_g1_copy2

0xcc0a,	// (0x000377f9) eswt_control_pane_g2_copy2_ParamLimits

0xcc0a,	// (0x000377f9) eswt_control_pane_g2_copy2

0xcc17,	// (0x00037806) eswt_control_pane_g3_copy2_ParamLimits

0xcc17,	// (0x00037806) eswt_control_pane_g3_copy2

0xcc24,	// (0x00037813) eswt_control_pane_g4_copy2_ParamLimits

0xcc24,	// (0x00037813) eswt_control_pane_g4_copy2

0x769a,	// (0x00032289) common_borders_pane_cp4

0xcc8a,	// (0x00037879) separator_horizontal_pane_g1

0xcc93,	// (0x00037882) separator_horizontal_pane_g2

0xcc9c,	// (0x0003788b) separator_horizontal_pane_g3

0x0002,

0xfc0e,	// (0x0003a7fd) separator_horizontal_pane_g

0xcbfd,	// (0x000377ec) eswt_control_pane_g1_copy3_ParamLimits

0xcbfd,	// (0x000377ec) eswt_control_pane_g1_copy3

0xcc0a,	// (0x000377f9) eswt_control_pane_g2_copy3_ParamLimits

0xcc0a,	// (0x000377f9) eswt_control_pane_g2_copy3

0xcc17,	// (0x00037806) eswt_control_pane_g3_copy3_ParamLimits

0xcc17,	// (0x00037806) eswt_control_pane_g3_copy3

0xcc24,	// (0x00037813) eswt_control_pane_g4_copy3_ParamLimits

0xcc24,	// (0x00037813) eswt_control_pane_g4_copy3

0x769a,	// (0x00032289) common_borders_pane_cp5

0xcca5,	// (0x00037894) separator_vertical_pane_g1

0xccae,	// (0x0003789d) separator_vertical_pane_g2

0xccb7,	// (0x000378a6) separator_vertical_pane_g3

0x0002,

0xfc15,	// (0x0003a804) separator_vertical_pane_g

0xcbfd,	// (0x000377ec) eswt_control_pane_g1_copy4_ParamLimits

0xcbfd,	// (0x000377ec) eswt_control_pane_g1_copy4

0xcc0a,	// (0x000377f9) eswt_control_pane_g2_copy4_ParamLimits

0xcc0a,	// (0x000377f9) eswt_control_pane_g2_copy4

0xcc17,	// (0x00037806) eswt_control_pane_g3_copy4_ParamLimits

0xcc17,	// (0x00037806) eswt_control_pane_g3_copy4

0xcc24,	// (0x00037813) eswt_control_pane_g4_copy4_ParamLimits

0xcc24,	// (0x00037813) eswt_control_pane_g4_copy4

0xccc0,	// (0x000378af) eswt_ctrl_combo_button_pane

0xccc8,	// (0x000378b7) eswt_ctrl_input_pane

0xccd0,	// (0x000378bf) popup_choice_list_window_cp70

0xccd8,	// (0x000378c7) eswt_ctrl_input_pane_t1

0x769a,	// (0x00032289) input_focus_pane_cp70

0xc277,	// (0x00036e66) bg_button_pane_cp70_ParamLimits

0xc277,	// (0x00036e66) bg_button_pane_cp70

0xcce6,	// (0x000378d5) eswt_ctrl_combo_button_pane_g1

0xccee,	// (0x000378dd) wait_bar_pane_cp70

0x9d00,	// (0x000348ef) bg_popup_window_pane_cp70_ParamLimits

0x9d00,	// (0x000348ef) bg_popup_window_pane_cp70

0xccf6,	// (0x000378e5) popup_eswt_tasktip_window_t1

0xcd0c,	// (0x000378fb) wait_bar_pane_cp71_ParamLimits

0xcd0c,	// (0x000378fb) wait_bar_pane_cp71

0xcd18,	// (0x00037907) grid_eswt_app_pane

0x8c3a,	// (0x00033829) scroll_pane_cp70

0xcd21,	// (0x00037910) cell_eswt_app_pane_ParamLimits

0xcd21,	// (0x00037910) cell_eswt_app_pane

0xcd51,	// (0x00037940) cell_eswt_app_pane_g1_ParamLimits

0xcd51,	// (0x00037940) cell_eswt_app_pane_g1

0xcd80,	// (0x0003796f) cell_eswt_app_pane_g2_ParamLimits

0xcd80,	// (0x0003796f) cell_eswt_app_pane_g2

0x0001,

0xfc1c,	// (0x0003a80b) cell_eswt_app_pane_g_ParamLimits

0xfc1c,	// (0x0003a80b) cell_eswt_app_pane_g

0xcda9,	// (0x00037998) cell_eswt_app_pane_t1_ParamLimits

0xcda9,	// (0x00037998) cell_eswt_app_pane_t1

0xcddb,	// (0x000379ca) grid_highlight_pane_cp70_ParamLimits

0xcddb,	// (0x000379ca) grid_highlight_pane_cp70

0x9319,	// (0x00033f08) set_content_pane_g1

0x96e3,	// (0x000342d2) status_small_volume_pane

0x6a5f,	// (0x0003164e) status_small_volume_pane_g1

0x6a67,	// (0x00031656) volume_small2_pane

0x6a70,	// (0x0003165f) volume_small2_pane_g1

0x6a79,	// (0x00031668) volume_small2_pane_g2

0x6a82,	// (0x00031671) volume_small2_pane_g3

0x6a8b,	// (0x0003167a) volume_small2_pane_g4

0x6a94,	// (0x00031683) volume_small2_pane_g5

0x6a9d,	// (0x0003168c) volume_small2_pane_g6

0x6aa6,	// (0x00031695) volume_small2_pane_g7

0x6aaf,	// (0x0003169e) volume_small2_pane_g8

0x6ab8,	// (0x000316a7) volume_small2_pane_g9

0x6ac1,	// (0x000316b0) volume_small2_pane_g10

0x0009,

0xfc21,	// (0x0003a810) volume_small2_pane_g

0xc678,	// (0x00037267) fep_vkb_top_text_pane_g1_ParamLimits

0xc693,	// (0x00037282) fep_vkb_top_text_pane_t1_ParamLimits

0xc8ed,	// (0x000374dc) popup_preview_fixed_window_g3_ParamLimits

0xc8ed,	// (0x000374dc) popup_preview_fixed_window_g3

0x5ff6,	// (0x00030be5) popup_toolbar_trans_pane

0xb05b,	// (0x00035c4a) aid_height_set_list_ParamLimits

0xb06c,	// (0x00035c5b) aid_size_parent_ParamLimits

0x9782,	// (0x00034371) list_highlight_pane_cp2_ParamLimits

0x9319,	// (0x00033f08) set_content_pane_g1_ParamLimits

0xb270,	// (0x00035e5f) list_single_image_pane_ParamLimits

0xb270,	// (0x00035e5f) list_single_image_pane

0xcde7,	// (0x000379d6) aid_size_cell_image_ParamLimits

0xcde7,	// (0x000379d6) aid_size_cell_image

0xcdf4,	// (0x000379e3) grid_single_image_pane_ParamLimits

0xcdf4,	// (0x000379e3) grid_single_image_pane

0xa9fc,	// (0x000355eb) list_single_image_pane_g1_ParamLimits

0xa9fc,	// (0x000355eb) list_single_image_pane_g1

0xce00,	// (0x000379ef) list_single_image_pane_g2_ParamLimits

0xce00,	// (0x000379ef) list_single_image_pane_g2

0x0001,

0xfc36,	// (0x0003a825) list_single_image_pane_g_ParamLimits

0xfc36,	// (0x0003a825) list_single_image_pane_g

0xce14,	// (0x00037a03) list_single_image_pane_t1_ParamLimits

0xce14,	// (0x00037a03) list_single_image_pane_t1

0xce2a,	// (0x00037a19) cell_image_list_pane_ParamLimits

0xce2a,	// (0x00037a19) cell_image_list_pane

0xce3e,	// (0x00037a2d) cell_image_list_pane_g1

0xce47,	// (0x00037a36) cell_image_list_pane_g2

0x0001,

0xfc3b,	// (0x0003a82a) cell_image_list_pane_g

0xce50,	// (0x00037a3f) aid_size_cell_tb_trans_pane

0x87ae,	// (0x0003339d) bg_tb_trans_pane

0xce62,	// (0x00037a51) grid_tb_trans_pane

0x9c8c,	// (0x0003487b) bg_tb_trans_pane_g1

0x9c9c,	// (0x0003488b) bg_tb_trans_pane_g2

0x9c94,	// (0x00034883) bg_tb_trans_pane_g3

0x9cac,	// (0x0003489b) bg_tb_trans_pane_g4

0x9ca4,	// (0x00034893) bg_tb_trans_pane_g5

0x9ccc,	// (0x000348bb) bg_tb_trans_pane_g6

0x9cc4,	// (0x000348b3) bg_tb_trans_pane_g7

0x9cb4,	// (0x000348a3) bg_tb_trans_pane_g8

0x9cbc,	// (0x000348ab) bg_tb_trans_pane_g9

0x0008,

0xfc40,	// (0x0003a82f) bg_tb_trans_pane_g

0xce76,	// (0x00037a65) cell_toolbar_trans_pane_ParamLimits

0xce76,	// (0x00037a65) cell_toolbar_trans_pane

0xc2b2,	// (0x00036ea1) cell_toolbar_trans_pane_g1

0xbe70,	// (0x00036a5f) list_form2_midp_pane_t1

0xbe8a,	// (0x00036a79) list_form2_midp_pane_t2

0x0001,

0xfadd,	// (0x0003a6cc) list_form2_midp_pane_t

0xbe98,	// (0x00036a87) scroll_pane_cp51_ParamLimits

0xc054,	// (0x00036c43) form2_midp_wait_pane_g1

0xc05d,	// (0x00036c4c) form2_midp_wait_pane_g2

0xc066,	// (0x00036c55) form2_midp_wait_pane_g3

0x0002,

0xfaf2,	// (0x0003a6e1) form2_midp_wait_pane_g

0x778e,	// (0x0003237d) list_highlight_pane_cp21_ParamLimits

0xc0bd,	// (0x00036cac) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0cc,	// (0x00036cbb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7941,	// (0x00032530) list_single_2graphic_im_pane_ParamLimits

0x7941,	// (0x00032530) list_single_2graphic_im_pane

0xce9c,	// (0x00037a8b) list_single_2graphic_im_pane_g1_ParamLimits

0xce9c,	// (0x00037a8b) list_single_2graphic_im_pane_g1

0xcead,	// (0x00037a9c) list_single_2graphic_im_pane_g2_ParamLimits

0xcead,	// (0x00037a9c) list_single_2graphic_im_pane_g2

0xceb9,	// (0x00037aa8) list_single_2graphic_im_pane_g3_ParamLimits

0xceb9,	// (0x00037aa8) list_single_2graphic_im_pane_g3

0x0003,

0xfc53,	// (0x0003a842) list_single_2graphic_im_pane_g_ParamLimits

0xfc53,	// (0x0003a842) list_single_2graphic_im_pane_g

0xced9,	// (0x00037ac8) list_single_2graphic_im_pane_t1_ParamLimits

0xced9,	// (0x00037ac8) list_single_2graphic_im_pane_t1

0xc8f9,	// (0x000374e8) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8f9,	// (0x000374e8) list_single_graphic_2heading_pane_fp

0x7d64,	// (0x00032953) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7d64,	// (0x00032953) list_single_graphic_2heading_pane_fp_g1

0xc90e,	// (0x000374fd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc90e,	// (0x000374fd) list_single_graphic_2heading_pane_fp_g2

0x7d2d,	// (0x0003291c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7d2d,	// (0x0003291c) list_single_graphic_2heading_pane_fp_g3

0x7d39,	// (0x00032928) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7d39,	// (0x00032928) list_single_graphic_2heading_pane_fp_g4

0xc91a,	// (0x00037509) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc91a,	// (0x00037509) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a769) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a769) list_single_graphic_2heading_pane_fp_g

0x7f3d,	// (0x00032b2c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7f3d,	// (0x00032b2c) list_single_graphic_2heading_pane_fp_t1

0x7d9c,	// (0x0003298b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7d9c,	// (0x0003298b) list_single_graphic_2heading_pane_fp_t2

0x7f53,	// (0x00032b42) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7f53,	// (0x00032b42) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5c,	// (0x0003a84b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5c,	// (0x0003a84b) list_single_graphic_2heading_pane_fp_t

0xc33e,	// (0x00036f2d) fep_hwr_write_pane_g5_ParamLimits

0xc33e,	// (0x00036f2d) fep_hwr_write_pane_g5

0xc34a,	// (0x00036f39) fep_hwr_write_pane_g6_ParamLimits

0xc34a,	// (0x00036f39) fep_hwr_write_pane_g6

0xcbcc,	// (0x000377bb) eswt_shell_pane_ParamLimits

0x9d00,	// (0x000348ef) bg_popup_window_pane_cp18_ParamLimits

0xafb4,	// (0x00035ba3) heading_pane_cp70

0xccf6,	// (0x000378e5) popup_eswt_tasktip_window_t1_ParamLimits

0x97f9,	// (0x000343e8) aid_touch_tab_arrow_left

0x9808,	// (0x000343f7) aid_touch_tab_arrow_right

0x76d6,	// (0x000322c5) title_pane_g3_ParamLimits

0x76d6,	// (0x000322c5) title_pane_g3

0x876d,	// (0x0003335c) set_value_pane_g1

0x5ff6,	// (0x00030be5) popup_toolbar_trans_pane_ParamLimits

0xce50,	// (0x00037a3f) aid_size_cell_tb_trans_pane_ParamLimits

0x87ae,	// (0x0003339d) bg_tb_trans_pane_ParamLimits

0xce62,	// (0x00037a51) grid_tb_trans_pane_ParamLimits

0x81c8,	// (0x00032db7) cont_note_pane_ParamLimits

0x81c8,	// (0x00032db7) cont_note_pane

0x851f,	// (0x0003310e) cont_snote2_single_text_pane_ParamLimits

0x851f,	// (0x0003310e) cont_snote2_single_text_pane

0x851f,	// (0x0003310e) cont_snote2_single_graphic_pane_ParamLimits

0x851f,	// (0x0003310e) cont_snote2_single_graphic_pane

0xa305,	// (0x00034ef4) cont_note_wait_pane_ParamLimits

0xa305,	// (0x00034ef4) cont_note_wait_pane

0xa305,	// (0x00034ef4) cont_note_image_pane_ParamLimits

0xa305,	// (0x00034ef4) cont_note_image_pane

0xcf0a,	// (0x00037af9) popup_note2_window_g1_ParamLimits

0xcf0a,	// (0x00037af9) popup_note2_window_g1

0xcf3b,	// (0x00037b2a) popup_note2_window_t1_ParamLimits

0xcf3b,	// (0x00037b2a) popup_note2_window_t1

0xcf80,	// (0x00037b6f) popup_note2_window_t2_ParamLimits

0xcf80,	// (0x00037b6f) popup_note2_window_t2

0xcfc5,	// (0x00037bb4) popup_note2_window_t3_ParamLimits

0xcfc5,	// (0x00037bb4) popup_note2_window_t3

0xd00a,	// (0x00037bf9) popup_note2_window_t4_ParamLimits

0xd00a,	// (0x00037bf9) popup_note2_window_t4

0x824c,	// (0x00032e3b) popup_note2_window_t5_ParamLimits

0x824c,	// (0x00032e3b) popup_note2_window_t5

0x0004,

0xfc68,	// (0x0003a857) popup_note2_window_t_ParamLimits

0xfc68,	// (0x0003a857) popup_note2_window_t

0xd039,	// (0x00037c28) popup_note2_image_window_g1_ParamLimits

0xd039,	// (0x00037c28) popup_note2_image_window_g1

0xd045,	// (0x00037c34) popup_note2_image_window_g2_ParamLimits

0xd045,	// (0x00037c34) popup_note2_image_window_g2

0x0001,

0xfc73,	// (0x0003a862) popup_note2_image_window_g_ParamLimits

0xfc73,	// (0x0003a862) popup_note2_image_window_g

0xd057,	// (0x00037c46) popup_note2_image_window_t1_ParamLimits

0xd057,	// (0x00037c46) popup_note2_image_window_t1

0xd06f,	// (0x00037c5e) popup_note2_image_window_t2_ParamLimits

0xd06f,	// (0x00037c5e) popup_note2_image_window_t2

0xd087,	// (0x00037c76) popup_note2_image_window_t3_ParamLimits

0xd087,	// (0x00037c76) popup_note2_image_window_t3

0x0002,

0xfc78,	// (0x0003a867) popup_note2_image_window_t_ParamLimits

0xfc78,	// (0x0003a867) popup_note2_image_window_t

0xa313,	// (0x00034f02) popup_note2_wait_window_g1_ParamLimits

0xa313,	// (0x00034f02) popup_note2_wait_window_g1

0xd0a3,	// (0x00037c92) popup_note2_wait_window_g2_ParamLimits

0xd0a3,	// (0x00037c92) popup_note2_wait_window_g2

0xa32b,	// (0x00034f1a) popup_note2_wait_window_g3_ParamLimits

0xa32b,	// (0x00034f1a) popup_note2_wait_window_g3

0x0002,

0xfc7f,	// (0x0003a86e) popup_note2_wait_window_g_ParamLimits

0xfc7f,	// (0x0003a86e) popup_note2_wait_window_g

0xd0af,	// (0x00037c9e) popup_note2_wait_window_t1_ParamLimits

0xd0af,	// (0x00037c9e) popup_note2_wait_window_t1

0xd0cd,	// (0x00037cbc) popup_note2_wait_window_t2_ParamLimits

0xd0cd,	// (0x00037cbc) popup_note2_wait_window_t2

0xd0eb,	// (0x00037cda) popup_note2_wait_window_t3_ParamLimits

0xd0eb,	// (0x00037cda) popup_note2_wait_window_t3

0xd0fd,	// (0x00037cec) popup_note2_wait_window_t4_ParamLimits

0xd0fd,	// (0x00037cec) popup_note2_wait_window_t4

0x0003,

0xfc86,	// (0x0003a875) popup_note2_wait_window_t_ParamLimits

0xfc86,	// (0x0003a875) popup_note2_wait_window_t

0xd10f,	// (0x00037cfe) wait_bar2_pane_ParamLimits

0xd10f,	// (0x00037cfe) wait_bar2_pane

0xd127,	// (0x00037d16) popup_snote2_single_text_window_g1_ParamLimits

0xd127,	// (0x00037d16) popup_snote2_single_text_window_g1

0xd14f,	// (0x00037d3e) popup_snote2_single_text_window_t1_ParamLimits

0xd14f,	// (0x00037d3e) popup_snote2_single_text_window_t1

0xd19b,	// (0x00037d8a) popup_snote2_single_text_window_t2_ParamLimits

0xd19b,	// (0x00037d8a) popup_snote2_single_text_window_t2

0xd1e7,	// (0x00037dd6) popup_snote2_single_text_window_t3_ParamLimits

0xd1e7,	// (0x00037dd6) popup_snote2_single_text_window_t3

0xd228,	// (0x00037e17) popup_snote2_single_text_window_t4_ParamLimits

0xd228,	// (0x00037e17) popup_snote2_single_text_window_t4

0xd25e,	// (0x00037e4d) popup_snote2_single_text_window_t5_ParamLimits

0xd25e,	// (0x00037e4d) popup_snote2_single_text_window_t5

0x0004,

0xfc8f,	// (0x0003a87e) popup_snote2_single_text_window_t_ParamLimits

0xfc8f,	// (0x0003a87e) popup_snote2_single_text_window_t

0xd289,	// (0x00037e78) popup_snote2_single_graphic_window_g1_ParamLimits

0xd289,	// (0x00037e78) popup_snote2_single_graphic_window_g1

0xd2b1,	// (0x00037ea0) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2b1,	// (0x00037ea0) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9a,	// (0x0003a889) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9a,	// (0x0003a889) popup_snote2_single_graphic_window_g

0xd2d9,	// (0x00037ec8) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2d9,	// (0x00037ec8) popup_snote2_single_graphic_window_t1

0xd325,	// (0x00037f14) popup_snote2_single_graphic_window_t2_ParamLimits

0xd325,	// (0x00037f14) popup_snote2_single_graphic_window_t2

0xd1e7,	// (0x00037dd6) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e7,	// (0x00037dd6) popup_snote2_single_graphic_window_t3

0xd228,	// (0x00037e17) popup_snote2_single_graphic_window_t4_ParamLimits

0xd228,	// (0x00037e17) popup_snote2_single_graphic_window_t4

0xd25e,	// (0x00037e4d) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25e,	// (0x00037e4d) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9f,	// (0x0003a88e) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9f,	// (0x0003a88e) popup_snote2_single_graphic_window_t

0xbd4d,	// (0x0003693c) clock_nsta_pane_cp2_t1

0xbd4d,	// (0x0003693c) clock_nsta_pane_cp2_t2

0x0001,

0xfab3,	// (0x0003a6a2) clock_nsta_pane_cp2_t

0x52fc,	// (0x0002feeb) form_field_data_wide_pane_g1_ParamLimits

0x87bc,	// (0x000333ab) form_field_data_wide_pane_g2_ParamLimits

0x87bc,	// (0x000333ab) form_field_data_wide_pane_g2

0x87c8,	// (0x000333b7) form_field_data_wide_pane_g3_ParamLimits

0x87c8,	// (0x000333b7) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0003a26a) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0003a26a) form_field_data_wide_pane_g

0xbc3f,	// (0x0003682e) grid_touch_3_pane_ParamLimits

0xbc3f,	// (0x0003682e) grid_touch_3_pane

0xd371,	// (0x00037f60) cell_touch_3_pane_ParamLimits

0xd371,	// (0x00037f60) cell_touch_3_pane

0xc2b2,	// (0x00036ea1) cell_touch_3_pane_g1

0xc2b2,	// (0x00036ea1) cell_touch_3_pane_g2

0x0001,

0xfb38,	// (0x0003a727) cell_touch_3_pane_g

0x827e,	// (0x00032e6d) cont_query_data_pane

0x8286,	// (0x00032e75) cont_query_data_pane_cp1

0xd39f,	// (0x00037f8e) button_value_adjust_pane_cp7

0xd3a7,	// (0x00037f96) query_popup_pane_cp3

0x8f21,	// (0x00033b10) bg_popup_sub_pane_cp22_ParamLimits

0x56c0,	// (0x000302af) navi_navi_volume_pane_cp2

0x56db,	// (0x000302ca) popup_side_volume_key_window_g2

0x56ea,	// (0x000302d9) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0003a300) popup_side_volume_key_window_g

0x5707,	// (0x000302f6) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0003a307) popup_side_volume_key_window_t

0x91d8,	// (0x00033dc7) popup_side_volume_key_window_ParamLimits

0x4f5d,	// (0x0002fb4c) list_double_graphic_pane_g4_ParamLimits

0x4f5d,	// (0x0002fb4c) list_double_graphic_pane_g4

0x7980,	// (0x0003256f) list_single_2heading_msg_pane_ParamLimits

0x7980,	// (0x0003256f) list_single_2heading_msg_pane

0x7f73,	// (0x00032b62) list_single_2heading_msg_pane_g1_ParamLimits

0x7f73,	// (0x00032b62) list_single_2heading_msg_pane_g1

0x4d8c,	// (0x0002f97b) list_single_2heading_msg_pane_g2_ParamLimits

0x4d8c,	// (0x0002f97b) list_single_2heading_msg_pane_g2

0x7f7f,	// (0x00032b6e) list_single_2heading_msg_pane_g3_ParamLimits

0x7f7f,	// (0x00032b6e) list_single_2heading_msg_pane_g3

0x7f8b,	// (0x00032b7a) list_single_2heading_msg_pane_g4_ParamLimits

0x7f8b,	// (0x00032b7a) list_single_2heading_msg_pane_g4

0x0003,

0xfcaa,	// (0x0003a899) list_single_2heading_msg_pane_g_ParamLimits

0xfcaa,	// (0x0003a899) list_single_2heading_msg_pane_g

0x7fa3,	// (0x00032b92) list_single_2heading_msg_pane_t1_ParamLimits

0x7fa3,	// (0x00032b92) list_single_2heading_msg_pane_t1

0x7fcb,	// (0x00032bba) list_single_2heading_msg_pane_t2_ParamLimits

0x7fcb,	// (0x00032bba) list_single_2heading_msg_pane_t2

0x7fff,	// (0x00032bee) list_single_2heading_msg_pane_t3_ParamLimits

0x7fff,	// (0x00032bee) list_single_2heading_msg_pane_t3

0x8038,	// (0x00032c27) list_single_2heading_msg_pane_t4_ParamLimits

0x8038,	// (0x00032c27) list_single_2heading_msg_pane_t4

0x0003,

0xfcb3,	// (0x0003a8a2) list_single_2heading_msg_pane_t_ParamLimits

0xfcb3,	// (0x0003a8a2) list_single_2heading_msg_pane_t

0x76e2,	// (0x000322d1) title_pane_g4_ParamLimits

0x76e2,	// (0x000322d1) title_pane_g4

0x54cf,	// (0x000300be) title_pane_stacon_g3_ParamLimits

0x54cf,	// (0x000300be) title_pane_stacon_g3

0xcecd,	// (0x00037abc) list_single_2graphic_im_pane_g4_ParamLimits

0xcecd,	// (0x00037abc) list_single_2graphic_im_pane_g4

0xad70,	// (0x0003595f) popup_side_volume_key_window_cp

0xb58c,	// (0x0003617b) main_idle_act2_pane_t1

0x6122,	// (0x00030d11) toolbar_button_pane_g10

0x8717,	// (0x00033306) popup_toolbar_window_cp1

0xbd3e,	// (0x0003692d) clock_nsta_pane_cp_t1

0xbd3e,	// (0x0003692d) clock_nsta_pane_cp_t2

0x0001,

0xfaae,	// (0x0003a69d) clock_nsta_pane_cp_t

0x56c0,	// (0x000302af) navi_navi_volume_pane_cp2_ParamLimits

0x56cf,	// (0x000302be) popup_side_volume_key_window_g1_ParamLimits

0x56db,	// (0x000302ca) popup_side_volume_key_window_g2_ParamLimits

0x56ea,	// (0x000302d9) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0003a300) popup_side_volume_key_window_g_ParamLimits

0x66cb,	// (0x000312ba) fep_hwr_aid_pane

0x6772,	// (0x00031361) bg_fep_hwr_top_pane_g4_ParamLimits

0xc30e,	// (0x00036efd) fep_hwr_top_pane_g1_ParamLimits

0xc320,	// (0x00036f0f) fep_hwr_top_pane_g2_ParamLimits

0x6792,	// (0x00031381) fep_hwr_top_pane_g3_ParamLimits

0xfb03,	// (0x0003a6f2) fep_hwr_top_pane_g_ParamLimits

0x67a7,	// (0x00031396) fep_hwr_top_text_pane_ParamLimits

0xab33,	// (0x00035722) aid_touch_tab_arrow_arrow_2

0xab3c,	// (0x0003572b) aid_touch_tab_arrow_left_2

0x66df,	// (0x000312ce) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6716,	// (0x00031305) fep_hwr_prediction_pane

0xc480,	// (0x0003706f) fep_vkb_prediction_pane

0xc584,	// (0x00037173) fep_vkb_side_pane_g3_ParamLimits

0xc584,	// (0x00037173) fep_vkb_side_pane_g3

0x6922,	// (0x00031511) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x698e,	// (0x0003157d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x699b,	// (0x0003158a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb2,	// (0x0003a7a1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6aca,	// (0x000316b9) fep_hwr_prediction_pane_g1

0x6ad4,	// (0x000316c3) fep_hwr_prediction_pane_g2

0x6adc,	// (0x000316cb) fep_hwr_prediction_pane_g3

0x6ae4,	// (0x000316d3) fep_hwr_prediction_pane_g4

0x0003,

0xfcbc,	// (0x0003a8ab) fep_hwr_prediction_pane_g

0xd3cc,	// (0x00037fbb) fep_vkb_prediction_pane_g1

0xd3d6,	// (0x00037fc5) fep_vkb_prediction_pane_g2

0xd3de,	// (0x00037fcd) fep_vkb_prediction_pane_g3

0xd3e6,	// (0x00037fd5) fep_vkb_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0003a8b4) fep_vkb_prediction_pane_g

0x651d,	// (0x0003110c) slider_set_pane_g3

0x6531,	// (0x00031120) slider_set_pane_g4

0x6549,	// (0x00031138) slider_set_pane_g5

0x651d,	// (0x0003110c) slider_set_pane_g6

0x655f,	// (0x0003114e) slider_set_pane_g7

0xb1d1,	// (0x00035dc0) slider_form_pane_g3

0xb1da,	// (0x00035dc9) slider_form_pane_g4

0xb1e2,	// (0x00035dd1) slider_form_pane_g5

0xb1d1,	// (0x00035dc0) slider_form_pane_g6

0xb1ea,	// (0x00035dd9) slider_form_pane_g7

0xb837,	// (0x00036426) slider_set_pane_vc_g3

0xb840,	// (0x0003642f) slider_set_pane_vc_g4

0xb849,	// (0x00036438) slider_set_pane_vc_g5

0xb837,	// (0x00036426) slider_set_pane_vc_g6

0xb852,	// (0x00036441) slider_set_pane_vc_g7

0xba12,	// (0x00036601) slider_form_pane_vc_g1

0xba1b,	// (0x0003660a) slider_form_pane_vc_g2

0xba24,	// (0x00036613) slider_form_pane_vc_g3

0xba12,	// (0x00036601) slider_form_pane_vc_g4

0xba2d,	// (0x0003661c) slider_form_pane_vc_g5

0x0004,

0xfa80,	// (0x0003a66f) slider_form_pane_vc_g

0x4a7b,	// (0x0002f66a) main_idle_act3_pane

0xd3ee,	// (0x00037fdd) ai3_links_pane

0xd3f7,	// (0x00037fe6) popup_ai3_data_window_ParamLimits

0xd3f7,	// (0x00037fe6) popup_ai3_data_window

0x769a,	// (0x00032289) grid_ai3_links_pane

0xd411,	// (0x00038000) cell_ai3_links_pane_ParamLimits

0xd411,	// (0x00038000) cell_ai3_links_pane

0xd429,	// (0x00038018) bg_popup_sub_pane_cp11

0xd436,	// (0x00038025) cell_ai3_links_pane_g1

0x769a,	// (0x00032289) bg_popup_sub_pane_cp12

0xd45b,	// (0x0003804a) heading_ai3_data_pane

0xd463,	// (0x00038052) list_ai3_gene_pane

0xd46f,	// (0x0003805e) popup_ai3_data_window_g1

0xd477,	// (0x00038066) heading_ai3_data_pane_g1

0xd47f,	// (0x0003806e) heading_ai3_data_pane_t1

0xd48d,	// (0x0003807c) list_double_ai3_gene_pane_ParamLimits

0xd48d,	// (0x0003807c) list_double_ai3_gene_pane

0xd49a,	// (0x00038089) list_single_ai3_gene_pane_ParamLimits

0xd49a,	// (0x00038089) list_single_ai3_gene_pane

0xc277,	// (0x00036e66) list_highlight_pane_cp7_ParamLimits

0xc277,	// (0x00036e66) list_highlight_pane_cp7

0xd4a7,	// (0x00038096) list_single_a13_gene_pane_t1_ParamLimits

0xd4a7,	// (0x00038096) list_single_a13_gene_pane_t1

0xd4be,	// (0x000380ad) list_single_ai3_gene_pane_g1

0xd4c7,	// (0x000380b6) list_single_ai3_gene_pane_g2

0x0001,

0xfcce,	// (0x0003a8bd) list_single_ai3_gene_pane_g

0xd4cf,	// (0x000380be) list_double_ai3_gene_pane_g1_ParamLimits

0xd4cf,	// (0x000380be) list_double_ai3_gene_pane_g1

0xd4db,	// (0x000380ca) list_double_ai3_gene_pane_t1_ParamLimits

0xd4db,	// (0x000380ca) list_double_ai3_gene_pane_t1

0xd4f7,	// (0x000380e6) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f7,	// (0x000380e6) list_double_ai3_gene_pane_t2

0xd50d,	// (0x000380fc) list_double_ai3_gene_pane_t3_ParamLimits

0xd50d,	// (0x000380fc) list_double_ai3_gene_pane_t3

0x0002,

0xfcd3,	// (0x0003a8c2) list_double_ai3_gene_pane_t_ParamLimits

0xfcd3,	// (0x0003a8c2) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7f69,	// (0x00032b58) aid_size_min_col_2

0xd3b8,	// (0x00037fa7) aid_size_min_msg_ParamLimits

0xd3b8,	// (0x00037fa7) aid_size_min_msg

0xc684,	// (0x00037273) fep_vkb_top_text_pane_g2_ParamLimits

0xc684,	// (0x00037273) fep_vkb_top_text_pane_g2

0x0001,

0xfb33,	// (0x0003a722) fep_vkb_top_text_pane_g_ParamLimits

0xfb33,	// (0x0003a722) fep_vkb_top_text_pane_g

0x4a7b,	// (0x0002f66a) main_hc_apps_shell_pane

0xd52a,	// (0x00038119) grid_hc_apps_pane_ParamLimits

0xd52a,	// (0x00038119) grid_hc_apps_pane

0xd539,	// (0x00038128) list_hc_apps_pane

0xd541,	// (0x00038130) scroll_pane_cp37_ParamLimits

0xd541,	// (0x00038130) scroll_pane_cp37

0xd54d,	// (0x0003813c) cell_hc_apps_pane_ParamLimits

0xd54d,	// (0x0003813c) cell_hc_apps_pane

0xd5fb,	// (0x000381ea) cell_hc_apps_pane_g1_ParamLimits

0xd5fb,	// (0x000381ea) cell_hc_apps_pane_g1

0xd62c,	// (0x0003821b) cell_hc_apps_pane_g2_ParamLimits

0xd62c,	// (0x0003821b) cell_hc_apps_pane_g2

0xd648,	// (0x00038237) cell_hc_apps_pane_g3_ParamLimits

0xd648,	// (0x00038237) cell_hc_apps_pane_g3

0x0002,

0xfcda,	// (0x0003a8c9) cell_hc_apps_pane_g_ParamLimits

0xfcda,	// (0x0003a8c9) cell_hc_apps_pane_g

0xd66a,	// (0x00038259) cell_hc_apps_pane_t1_ParamLimits

0xd66a,	// (0x00038259) cell_hc_apps_pane_t1

0x81c8,	// (0x00032db7) grid_highlight_pane_cp10_ParamLimits

0x81c8,	// (0x00032db7) grid_highlight_pane_cp10

0xd6aa,	// (0x00038299) list_single_hc_apps_pane_ParamLimits

0xd6aa,	// (0x00038299) list_single_hc_apps_pane

0xd706,	// (0x000382f5) list_single_hc_apps_pane_g1

0x805d,	// (0x00032c4c) list_single_hc_apps_pane_g2

0x0001,

0xfce1,	// (0x0003a8d0) list_single_hc_apps_pane_g

0x8076,	// (0x00032c65) list_single_hc_apps_pane_g2_copy1

0x8092,	// (0x00032c81) list_single_hc_apps_pane_t1

0x778e,	// (0x0003237d) bg_set_opt_pane_cp_ParamLimits

0x4cdc,	// (0x0002f8cb) setting_slider_pane_t1_ParamLimits

0x4cf5,	// (0x0002f8e4) setting_slider_pane_t2_ParamLimits

0x4d0f,	// (0x0002f8fe) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003a14d) setting_slider_pane_t_ParamLimits

0x4d27,	// (0x0002f916) slider_set_pane_ParamLimits

0x59f3,	// (0x000305e2) control_pane_g5_ParamLimits

0x59f3,	// (0x000305e2) control_pane_g5

0xb020,	// (0x00035c0f) slider_set_pane_g1_ParamLimits

0x6511,	// (0x00031100) slider_set_pane_g2_ParamLimits

0x651d,	// (0x0003110c) slider_set_pane_g3_ParamLimits

0x6531,	// (0x00031120) slider_set_pane_g4_ParamLimits

0x6549,	// (0x00031138) slider_set_pane_g5_ParamLimits

0x651d,	// (0x0003110c) slider_set_pane_g6_ParamLimits

0x655f,	// (0x0003114e) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0003a553) slider_set_pane_g_ParamLimits

0x92c4,	// (0x00033eb3) navi_icon_text_pane_ParamLimits

0x97ba,	// (0x000343a9) aid_fill_nsta_2_ParamLimits

0x97f9,	// (0x000343e8) aid_touch_tab_arrow_left_ParamLimits

0x9808,	// (0x000343f7) aid_touch_tab_arrow_right_ParamLimits

0x9875,	// (0x00034464) clock_nsta_pane_ParamLimits

0xab15,	// (0x00035704) navi_icon_pane_g1_ParamLimits

0xab21,	// (0x00035710) navi_text_pane_t1_ParamLimits

0xbe4a,	// (0x00036a39) navi_icon_text_pane_g1_ParamLimits

0xbe56,	// (0x00036a45) navi_icon_text_pane_t1_ParamLimits

0xd706,	// (0x000382f5) list_single_hc_apps_pane_g1_ParamLimits

0x805d,	// (0x00032c4c) list_single_hc_apps_pane_g2_ParamLimits

0xfce1,	// (0x0003a8d0) list_single_hc_apps_pane_g_ParamLimits

0x8076,	// (0x00032c65) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8092,	// (0x00032c81) list_single_hc_apps_pane_t1_ParamLimits

0x4be6,	// (0x0002f7d5) popup_toolbar2_fixed_window_ParamLimits

0x4be6,	// (0x0002f7d5) popup_toolbar2_fixed_window

0x5fec,	// (0x00030bdb) popup_toolbar2_float_window

0x769a,	// (0x00032289) bg_popup_sub_pane_cp27

0xd71f,	// (0x0003830e) grid_toolbar2_float_pane

0x769a,	// (0x00032289) bg_popup_sub_pane_cp26

0xd71f,	// (0x0003830e) grid_toolbar2_fixed_pane

0xd727,	// (0x00038316) cell_toolbar2_fixed_pane_ParamLimits

0xd727,	// (0x00038316) cell_toolbar2_fixed_pane

0xd737,	// (0x00038326) cell_toolbar2_fixed_pane_g1

0xd740,	// (0x0003832f) toolbar2_fixed_button_pane

0x9c8c,	// (0x0003487b) toolbar2_fixed_button_pane_g1

0x9c9c,	// (0x0003488b) toolbar2_fixed_button_pane_g2

0x9c94,	// (0x00034883) toolbar2_fixed_button_pane_g3

0x9cac,	// (0x0003489b) toolbar2_fixed_button_pane_g4

0x9ca4,	// (0x00034893) toolbar2_fixed_button_pane_g5

0x9cb4,	// (0x000348a3) toolbar2_fixed_button_pane_g6

0x9cbc,	// (0x000348ab) toolbar2_fixed_button_pane_g7

0x9ccc,	// (0x000348bb) toolbar2_fixed_button_pane_g8

0x9cc4,	// (0x000348b3) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0003a455) toolbar2_fixed_button_pane_g

0xd748,	// (0x00038337) cell_toolbar2_float_pane_ParamLimits

0xd748,	// (0x00038337) cell_toolbar2_float_pane

0xd759,	// (0x00038348) cell_toolbar2_float_pane_g1

0xd740,	// (0x0003832f) toolbar2_fixed_button_pane_cp

0xc3e0,	// (0x00036fcf) fep_vkb_accented_list_pane_ParamLimits

0xc3e0,	// (0x00036fcf) fep_vkb_accented_list_pane

0x6902,	// (0x000314f1) bg_popup_fep_shadow_pane_g9

0x9444,	// (0x00034033) bg_popup_fep_shadow_pane_cp3

0x8905,	// (0x000334f4) list_accented_list_pane

0xd762,	// (0x00038351) list_single_accented_list_pane_ParamLimits

0xd762,	// (0x00038351) list_single_accented_list_pane

0x9444,	// (0x00034033) list_highlight_pane_cp10

0xd773,	// (0x00038362) list_single_accented_list_pane_t1

0x5f3c,	// (0x00030b2b) popup_slider_window_ParamLimits

0x5f3c,	// (0x00030b2b) popup_slider_window

0xd3af,	// (0x00037f9e) aid_indentation_list_msg

0xd82d,	// (0x0003841c) bg_popup_window_pane_cp19

0xd897,	// (0x00038486) popup_slider_window_g1

0xd8b3,	// (0x000384a2) popup_slider_window_g2

0xd8cf,	// (0x000384be) popup_slider_window_g3

0x0005,

0xfce6,	// (0x0003a8d5) popup_slider_window_g

0xd92b,	// (0x0003851a) popup_slider_window_t1

0xd99f,	// (0x0003858e) small_volume_slider_vertical_pane

0xc2b2,	// (0x00036ea1) small_volume_slider_vertical_pane_g1

0xc2b2,	// (0x00036ea1) small_volume_slider_vertical_pane_g2

0xd9bb,	// (0x000385aa) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf8,	// (0x0003a8e7) small_volume_slider_vertical_pane_g

0x499e,	// (0x0002f58d) area_side_right_pane_ParamLimits

0x499e,	// (0x0002f58d) area_side_right_pane

0x6aec,	// (0x000316db) aid_size_side_button_ParamLimits

0x6aec,	// (0x000316db) aid_size_side_button

0x6b00,	// (0x000316ef) grid_sctrl_middle_pane_ParamLimits

0x6b00,	// (0x000316ef) grid_sctrl_middle_pane

0x6b1f,	// (0x0003170e) sctrl_sk_bottom_pane

0x6b30,	// (0x0003171f) sctrl_sk_top_pane

0x6b42,	// (0x00031731) aid_touch_sctrl_top

0x6b4f,	// (0x0003173e) bg_sctrl_sk_pane_ParamLimits

0x6b4f,	// (0x0003173e) bg_sctrl_sk_pane

0x6b5d,	// (0x0003174c) sctrl_sk_top_pane_g1

0x6b6a,	// (0x00031759) sctrl_sk_top_pane_t1

0x6b42,	// (0x00031731) aid_touch_sctrl_bottom

0x6b4f,	// (0x0003173e) bg_sctrl_sk_pane_cp_ParamLimits

0x6b4f,	// (0x0003173e) bg_sctrl_sk_pane_cp

0x6b85,	// (0x00031774) sctrl_sk_bottom_pane_g1

0x6b6a,	// (0x00031759) sctrl_sk_bottom_pane_t1

0x6b8e,	// (0x0003177d) cell_sctrl_middle_pane_ParamLimits

0x6b8e,	// (0x0003177d) cell_sctrl_middle_pane

0x6ba9,	// (0x00031798) aid_touch_sctrl_middle_ParamLimits

0x6ba9,	// (0x00031798) aid_touch_sctrl_middle

0x6bbb,	// (0x000317aa) bg_sctrl_middle_pane_ParamLimits

0x6bbb,	// (0x000317aa) bg_sctrl_middle_pane

0x6922,	// (0x00031511) cell_sctrl_middle_pane_g1_ParamLimits

0x6922,	// (0x00031511) cell_sctrl_middle_pane_g1

0x6bc9,	// (0x000317b8) cell_sctrl_middle_pane_g2_ParamLimits

0x6bc9,	// (0x000317b8) cell_sctrl_middle_pane_g2

0x0001,

0xfd04,	// (0x0003a8f3) cell_sctrl_middle_pane_g_ParamLimits

0xfd04,	// (0x0003a8f3) cell_sctrl_middle_pane_g

0x9c8c,	// (0x0003487b) bg_sctrl_middle_pane_g1

0x9c94,	// (0x00034883) bg_sctrl_middle_pane_g2

0x9c9c,	// (0x0003488b) bg_sctrl_middle_pane_g3

0x9ca4,	// (0x00034893) bg_sctrl_middle_pane_g4

0x9cac,	// (0x0003489b) bg_sctrl_middle_pane_g5

0x9cb4,	// (0x000348a3) bg_sctrl_middle_pane_g6

0x9cbc,	// (0x000348ab) bg_sctrl_middle_pane_g7

0x9cc4,	// (0x000348b3) bg_sctrl_middle_pane_g8

0x0007,

0xfd09,	// (0x0003a8f8) bg_sctrl_middle_pane_g

0x9ccc,	// (0x000348bb) bg_sctrl_middle_pane_g8_copy1

0x9c8c,	// (0x0003487b) bg_sctrl_sk_pane_g1

0x9c9c,	// (0x0003488b) bg_sctrl_sk_pane_g2

0x9c94,	// (0x00034883) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0003a455) bg_sctrl_sk_pane_g

0x86dd,	// (0x000332cc) aid_size_touch_scroll_bar

0x9cac,	// (0x0003489b) bg_sctrl_sk_pane_g4

0x9ca4,	// (0x00034893) bg_sctrl_sk_pane_g5

0x9cb4,	// (0x000348a3) bg_sctrl_sk_pane_g6

0x9cbc,	// (0x000348ab) bg_sctrl_sk_pane_g7

0x9ccc,	// (0x000348bb) bg_sctrl_sk_pane_g8

0x9cc4,	// (0x000348b3) bg_sctrl_sk_pane_g9

0x5ba5,	// (0x00030794) popup_fep_china_hwr2_fs_candidate_window

0x5baf,	// (0x0003079e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5baf,	// (0x0003079e) popup_fep_china_hwr2_fs_control_window

0x6922,	// (0x00031511) sctrl_sk_top_pane_g2

0x0001,

0xfcff,	// (0x0003a8ee) sctrl_sk_top_pane_g

0xd9c4,	// (0x000385b3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c4,	// (0x000385b3) aid_fep_china_hwr2_fs_cell

0xd9d6,	// (0x000385c5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d6,	// (0x000385c5) bg_popup_fep_shadow_pane_cp4

0xd9ed,	// (0x000385dc) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ed,	// (0x000385dc) bg_popup_fep_shadow_pane_cp5

0xd9ff,	// (0x000385ee) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9ff,	// (0x000385ee) popup_fep_china_hwr2_fs_control_bar_grid

0xda0f,	// (0x000385fe) popup_fep_china_hwr2_fs_control_funtion_grid

0xda17,	// (0x00038606) aid_fep_china_hwr2_fs_candi_cell

0x769a,	// (0x00032289) bg_popup_fep_shadow_pane_cp6

0xda21,	// (0x00038610) popup_fep_china_hwr2_fs_candidate_grid

0xda2b,	// (0x0003861a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda2b,	// (0x0003861a) cell_fep_china_hwr2_fs_funtion_grid

0xc2b2,	// (0x00036ea1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda43,	// (0x00038632) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda43,	// (0x00038632) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda51,	// (0x00038640) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda51,	// (0x00038640) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1a,	// (0x0003a909) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1a,	// (0x0003a909) cell_fep_china_hwr2_fs_funtion_grid_g

0xda67,	// (0x00038656) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda67,	// (0x00038656) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda7c,	// (0x0003866b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda7c,	// (0x0003866b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1f,	// (0x0003a90e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1f,	// (0x0003a90e) cell_fep_china_hwr2_fs_funtion_grid_t

0xda98,	// (0x00038687) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdaa0,	// (0x0003868f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa8,	// (0x00038697) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd24,	// (0x0003a913) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdab0,	// (0x0003869f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdab0,	// (0x0003869f) cell_fep_china_hwr2_fs_candidate_grid

0xdac9,	// (0x000386b8) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdad1,	// (0x000386c0) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2b2,	// (0x00036ea1) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2b2,	// (0x00036ea1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb38,	// (0x0003a727) cell_fep_china_hwr2_fs_candidate_grid_g

0xdad9,	// (0x000386c8) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9882,	// (0x00034471) clock_nsta_pane_cp_24_ParamLimits

0x9882,	// (0x00034471) clock_nsta_pane_cp_24

0x9900,	// (0x000344ef) indicator_nsta_pane_cp_24_ParamLimits

0x9900,	// (0x000344ef) indicator_nsta_pane_cp_24

0xa985,	// (0x00035574) heading_pane_g1

0x0001,

0xf8cb,	// (0x0003a4ba) heading_pane_g

0xb3d5,	// (0x00035fc4) grid_sct_catagory_button_pane

0xb405,	// (0x00035ff4) scroll_pane_cp5_ParamLimits

0xbea4,	// (0x00036a93) button_value_adjust_pane_cp5_ParamLimits

0xbea4,	// (0x00036a93) button_value_adjust_pane_cp5

0xbf83,	// (0x00036b72) form2_midp_time_pane_ParamLimits

0xdae7,	// (0x000386d6) cell_sct_catagory_button_pane_ParamLimits

0xdae7,	// (0x000386d6) cell_sct_catagory_button_pane

0xc277,	// (0x00036e66) bg_button_pane_cp01_ParamLimits

0xc277,	// (0x00036e66) bg_button_pane_cp01

0xc2b2,	// (0x00036ea1) cell_sct_catagory_button_pane_g1

0x5f7b,	// (0x00030b6a) popup_tb_extension_window

0xdaf9,	// (0x000386e8) aid_size_cell_ext_ParamLimits

0xdaf9,	// (0x000386e8) aid_size_cell_ext

0x81c8,	// (0x00032db7) bg_tb_trans_pane_cp1_ParamLimits

0x81c8,	// (0x00032db7) bg_tb_trans_pane_cp1

0xdb19,	// (0x00038708) grid_tb_ext_pane_ParamLimits

0xdb19,	// (0x00038708) grid_tb_ext_pane

0xdb47,	// (0x00038736) cell_tb_ext_pane_ParamLimits

0xdb47,	// (0x00038736) cell_tb_ext_pane

0xdb5e,	// (0x0003874d) cell_tb_ext_pane_g1_ParamLimits

0xdb5e,	// (0x0003874d) cell_tb_ext_pane_g1

0xdb7b,	// (0x0003876a) cell_tb_ext_pane_t1

0x81c8,	// (0x00032db7) list_highlight_pane_cp11_ParamLimits

0x81c8,	// (0x00032db7) list_highlight_pane_cp11

0x4c05,	// (0x0002f7f4) popup_uni_indicator_window_ParamLimits

0x4c05,	// (0x0002f7f4) popup_uni_indicator_window

0x87ae,	// (0x0003339d) bg_popup_sub_pane_cp14

0xdb96,	// (0x00038785) list_uniindi_pane

0xdba2,	// (0x00038791) uniindi_top_pane

0x81c8,	// (0x00032db7) bg_uniindi_top_pane

0xdbc1,	// (0x000387b0) uniindi_top_pane_g1

0xdbd7,	// (0x000387c6) uniindi_top_pane_g2

0x0003,

0xfd2b,	// (0x0003a91a) uniindi_top_pane_g

0xdc01,	// (0x000387f0) uniindi_top_pane_t1

0xdc2b,	// (0x0003881a) list_single_uniindi_pane_ParamLimits

0xdc2b,	// (0x0003881a) list_single_uniindi_pane

0xc2b2,	// (0x00036ea1) bg_uniindi_top_pane_g1

0xdc3e,	// (0x0003882d) list_single_uniindi_pane_g1

0xdc51,	// (0x00038840) list_single_uniindi_pane_t1

0x4a7b,	// (0x0002f66a) control_bg_pane

0xdc76,	// (0x00038865) bg_sctrl_sk_pane_cp1

0xdc7f,	// (0x0003886e) bg_sctrl_sk_pane_cp2

0xdc88,	// (0x00038877) control_bg_pane_g1

0xdc91,	// (0x00038880) control_bg_pane_g2

0x0001,

0xfd34,	// (0x0003a923) control_bg_pane_g

0xbce2,	// (0x000368d1) cell_indicator_nsta_pane_g1_ParamLimits

0xbcf0,	// (0x000368df) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9c,	// (0x0003a68b) cell_indicator_nsta_pane_g_ParamLimits

0x7d1a,	// (0x00032909) form2_midp_time_pane_t1_ParamLimits

0x5b05,	// (0x000306f4) main_idle_act4_pane_ParamLimits

0x5b05,	// (0x000306f4) main_idle_act4_pane

0x5f7b,	// (0x00030b6a) popup_tb_extension_window_ParamLimits

0xdb37,	// (0x00038726) tb_ext_find_pane_ParamLimits

0xdb37,	// (0x00038726) tb_ext_find_pane

0xdc9a,	// (0x00038889) ai_gene_pane_1_cp1

0x957f,	// (0x0003416e) ai_gene_pane_2_cp1

0xdca2,	// (0x00038891) list_single_idle_plugin_calendar_pane

0xdcab,	// (0x0003889a) list_single_idle_plugin_notification_pane

0xdcb4,	// (0x000388a3) list_single_idle_plugin_player_pane

0xdcbd,	// (0x000388ac) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcbd,	// (0x000388ac) list_single_idle_plugin_shortcut_pane

0xdcdf,	// (0x000388ce) main_idle_act4_pane_t1

0xdcf1,	// (0x000388e0) main_idle_act4_pane_t2

0x0001,

0xfd39,	// (0x0003a928) main_idle_act4_pane_t

0xdd03,	// (0x000388f2) middle_sk_idle_act4_pane_ParamLimits

0xdd03,	// (0x000388f2) middle_sk_idle_act4_pane

0xdd19,	// (0x00038908) popup_clock_digital_analogue_window_cp2

0xdd33,	// (0x00038922) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd33,	// (0x00038922) shortcut_wheel_idle_act4_pane

0xc2b2,	// (0x00036ea1) shortcut_wheel_idle_act4_pane_g1

0xc2b2,	// (0x00036ea1) shortcut_wheel_idle_act4_pane_g2

0xc2b2,	// (0x00036ea1) shortcut_wheel_idle_act4_pane_g3

0xc2b2,	// (0x00036ea1) shortcut_wheel_idle_act4_pane_g4

0xc2b2,	// (0x00036ea1) shortcut_wheel_idle_act4_pane_g5

0xdd47,	// (0x00038936) shortcut_wheel_idle_act4_pane_g6

0xdd4f,	// (0x0003893e) shortcut_wheel_idle_act4_pane_g7

0xdd57,	// (0x00038946) shortcut_wheel_idle_act4_pane_g8

0xdd5f,	// (0x0003894e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3e,	// (0x0003a92d) shortcut_wheel_idle_act4_pane_g

0xc530,	// (0x0003711f) middle_sk_idle_act4_pane_g1_ParamLimits

0xc530,	// (0x0003711f) middle_sk_idle_act4_pane_g1

0xdde4,	// (0x000389d3) middle_sk_idle_act4_pane_g2_ParamLimits

0xdde4,	// (0x000389d3) middle_sk_idle_act4_pane_g2

0x0001,

0xfd61,	// (0x0003a950) middle_sk_idle_act4_pane_g_ParamLimits

0xfd61,	// (0x0003a950) middle_sk_idle_act4_pane_g

0xddf0,	// (0x000389df) middle_sk_idle_act4_pane_t1_ParamLimits

0xddf0,	// (0x000389df) middle_sk_idle_act4_pane_t1

0xde0d,	// (0x000389fc) grid_ai_shortcut_pane_ParamLimits

0xde0d,	// (0x000389fc) grid_ai_shortcut_pane

0xde26,	// (0x00038a15) list_highlight_pane_cp16_ParamLimits

0xde26,	// (0x00038a15) list_highlight_pane_cp16

0xde33,	// (0x00038a22) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde33,	// (0x00038a22) list_single_idle_plugin_shortcut_pane_g1

0xde3f,	// (0x00038a2e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde3f,	// (0x00038a2e) list_single_idle_plugin_shortcut_pane_g2

0xde57,	// (0x00038a46) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde57,	// (0x00038a46) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd66,	// (0x0003a955) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd66,	// (0x0003a955) list_single_idle_plugin_shortcut_pane_g

0xde6a,	// (0x00038a59) cell_ai_shortcut_pane_ParamLimits

0xde6a,	// (0x00038a59) cell_ai_shortcut_pane

0xde8e,	// (0x00038a7d) cell_ai_shortcut_pane_g1_ParamLimits

0xde8e,	// (0x00038a7d) cell_ai_shortcut_pane_g1

0xdc9a,	// (0x00038889) ai_gene_pane_1_cp2

0xdeb0,	// (0x00038a9f) ai_gene_pane_2_cp2

0xdeb8,	// (0x00038aa7) list_highlight_pane_cp15

0xdec1,	// (0x00038ab0) list_single_idle_plugin_calendar_pane_g1

0xdeb8,	// (0x00038aa7) list_highlight_pane_cp17

0xdec9,	// (0x00038ab8) list_single_idle_plugin_calendar_pane_g1_copy1

0xded1,	// (0x00038ac0) list_single_idle_plugin_player_pane_g1

0xb62e,	// (0x0003621d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6d,	// (0x0003a95c) list_single_idle_plugin_player_pane_g

0xded9,	// (0x00038ac8) list_single_idle_plugin_player_pane_t1

0xdee7,	// (0x00038ad6) list_single_idle_plugin_player_pane_t2

0xdef5,	// (0x00038ae4) list_single_idle_plugin_player_pane_t3

0xdf03,	// (0x00038af2) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd72,	// (0x0003a961) list_single_idle_plugin_player_pane_t

0xdf11,	// (0x00038b00) wait_bar_pane_cp15

0xdf19,	// (0x00038b08) grid_ai_notification_pane

0xb62e,	// (0x0003621d) list_single_idle_plugin_notification_pane_g1

0xdf22,	// (0x00038b11) cell_ai_notification_pane_ParamLimits

0xdf22,	// (0x00038b11) cell_ai_notification_pane

0xdf2f,	// (0x00038b1e) cell_ai_notification_pane_g1

0xdf37,	// (0x00038b26) cell_ai_notification_pane_t1

0xdf45,	// (0x00038b34) tb_ext_find_button_pane

0xdf4d,	// (0x00038b3c) tb_ext_find_pane_g1

0xdf55,	// (0x00038b44) tb_ext_find_pane_t1

0x8e31,	// (0x00033a20) tb_ext_find_button_pane_g1

0xdf63,	// (0x00038b52) tb_ext_find_button_pane_g2

0x0001,

0xfd7b,	// (0x0003a96a) tb_ext_find_button_pane_g

0xdcdf,	// (0x000388ce) main_idle_act4_pane_t1_ParamLimits

0xdcf1,	// (0x000388e0) main_idle_act4_pane_t2_ParamLimits

0xfd39,	// (0x0003a928) main_idle_act4_pane_t_ParamLimits

0xdd19,	// (0x00038908) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd27,	// (0x00038916) sat_plugin_idle_act4_pane_ParamLimits

0xdd27,	// (0x00038916) sat_plugin_idle_act4_pane

0xdf6c,	// (0x00038b5b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf6c,	// (0x00038b5b) sat_plugin_idle_act4_pane_t1

0xdf7f,	// (0x00038b6e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf7f,	// (0x00038b6e) sat_plugin_idle_act4_pane_t2

0xdf92,	// (0x00038b81) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf92,	// (0x00038b81) sat_plugin_idle_act4_pane_t3

0xdfa5,	// (0x00038b94) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfa5,	// (0x00038b94) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd80,	// (0x0003a96f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd80,	// (0x0003a96f) sat_plugin_idle_act4_pane_t

0x4b40,	// (0x0002f72f) popup_battery_window_ParamLimits

0x4b40,	// (0x0002f72f) popup_battery_window

0x81c8,	// (0x00032db7) bg_popup_sub_pane_cp25_ParamLimits

0x81c8,	// (0x00032db7) bg_popup_sub_pane_cp25

0xdfb8,	// (0x00038ba7) popup_battery_window_g1_ParamLimits

0xdfb8,	// (0x00038ba7) popup_battery_window_g1

0xdfc4,	// (0x00038bb3) popup_battery_window_t1_ParamLimits

0xdfc4,	// (0x00038bb3) popup_battery_window_t1

0xdfd6,	// (0x00038bc5) popup_battery_window_t2_ParamLimits

0xdfd6,	// (0x00038bc5) popup_battery_window_t2

0x0001,

0xfd89,	// (0x0003a978) popup_battery_window_t_ParamLimits

0xfd89,	// (0x0003a978) popup_battery_window_t

0x944c,	// (0x0003403b) midp_canvas_pane_ParamLimits

0x94c3,	// (0x000340b2) midp_keypad_pane_ParamLimits

0x94c3,	// (0x000340b2) midp_keypad_pane

0x9782,	// (0x00034371) main_midp_pane_ParamLimits

0xbd5c,	// (0x0003694b) signal_pane_g2_cp_ParamLimits

0xdff3,	// (0x00038be2) aid_size_cell_midp_keypad_ParamLimits

0xdff3,	// (0x00038be2) aid_size_cell_midp_keypad

0xe00d,	// (0x00038bfc) midp_keyp_game_grid_pane_ParamLimits

0xe00d,	// (0x00038bfc) midp_keyp_game_grid_pane

0xe02d,	// (0x00038c1c) midp_keyp_rocker_pane_ParamLimits

0xe02d,	// (0x00038c1c) midp_keyp_rocker_pane

0xe066,	// (0x00038c55) midp_keyp_sk_left_pane_ParamLimits

0xe066,	// (0x00038c55) midp_keyp_sk_left_pane

0xe0c0,	// (0x00038caf) midp_keyp_sk_right_pane_ParamLimits

0xe0c0,	// (0x00038caf) midp_keyp_sk_right_pane

0x769a,	// (0x00032289) bg_button_pane_cp03

0xe11a,	// (0x00038d09) midp_keyp_sk_left_pane_g1

0x769a,	// (0x00032289) bg_button_pane_cp04

0xe11a,	// (0x00038d09) midp_keyp_sk_right_pane_g1

0xc2b2,	// (0x00036ea1) midp_keyp_rocker_pane_g1

0xe123,	// (0x00038d12) keyp_game_cell_pane_ParamLimits

0xe123,	// (0x00038d12) keyp_game_cell_pane

0x769a,	// (0x00032289) bg_button_pane_cp02

0xe136,	// (0x00038d25) keyp_game_cell_pane_g1

0x4b84,	// (0x0002f773) popup_fep_vkb2_window_ParamLimits

0x4b84,	// (0x0002f773) popup_fep_vkb2_window

0x6be7,	// (0x000317d6) aid_size_cell_vkb2_ParamLimits

0x6be7,	// (0x000317d6) aid_size_cell_vkb2

0x6c3b,	// (0x0003182a) popup_fep_vkb2_window_g1_ParamLimits

0x6c3b,	// (0x0003182a) popup_fep_vkb2_window_g1

0x6c83,	// (0x00031872) vkb2_area_bottom_pane_ParamLimits

0x6c83,	// (0x00031872) vkb2_area_bottom_pane

0x6ccf,	// (0x000318be) vkb2_area_keypad_pane_ParamLimits

0x6ccf,	// (0x000318be) vkb2_area_keypad_pane

0x6d11,	// (0x00031900) vkb2_area_top_pane_ParamLimits

0x6d11,	// (0x00031900) vkb2_area_top_pane

0x6d8b,	// (0x0003197a) vkb2_top_entry_pane_ParamLimits

0x6d8b,	// (0x0003197a) vkb2_top_entry_pane

0x6db5,	// (0x000319a4) vkb2_top_grid_left_pane_ParamLimits

0x6db5,	// (0x000319a4) vkb2_top_grid_left_pane

0x6dd3,	// (0x000319c2) vkb2_top_grid_right_pane_ParamLimits

0x6dd3,	// (0x000319c2) vkb2_top_grid_right_pane

0x6df1,	// (0x000319e0) vkb2_cell_keypad_pane_ParamLimits

0x6df1,	// (0x000319e0) vkb2_cell_keypad_pane

0x6ec2,	// (0x00031ab1) vkb2_area_bottom_grid_pane_ParamLimits

0x6ec2,	// (0x00031ab1) vkb2_area_bottom_grid_pane

0x6ee8,	// (0x00031ad7) vkb2_area_bottom_pane_g1_ParamLimits

0x6ee8,	// (0x00031ad7) vkb2_area_bottom_pane_g1

0x6f0c,	// (0x00031afb) vkb2_area_bottom_pane_g2_ParamLimits

0x6f0c,	// (0x00031afb) vkb2_area_bottom_pane_g2

0x6f3a,	// (0x00031b29) vkb2_area_bottom_pane_g3_ParamLimits

0x6f3a,	// (0x00031b29) vkb2_area_bottom_pane_g3

0x0002,

0xfd8e,	// (0x0003a97d) vkb2_area_bottom_pane_g_ParamLimits

0xfd8e,	// (0x0003a97d) vkb2_area_bottom_pane_g

0x6f9b,	// (0x00031b8a) vkb2_top_cell_left_pane_ParamLimits

0x6f9b,	// (0x00031b8a) vkb2_top_cell_left_pane

0xe147,	// (0x00038d36) vkb2_top_entry_pane_g1_ParamLimits

0xe147,	// (0x00038d36) vkb2_top_entry_pane_g1

0xe155,	// (0x00038d44) vkb2_top_entry_pane_t1_ParamLimits

0xe155,	// (0x00038d44) vkb2_top_entry_pane_t1

0xe187,	// (0x00038d76) vkb2_top_entry_pane_t2_ParamLimits

0xe187,	// (0x00038d76) vkb2_top_entry_pane_t2

0xe1b9,	// (0x00038da8) vkb2_top_entry_pane_t3_ParamLimits

0xe1b9,	// (0x00038da8) vkb2_top_entry_pane_t3

0x0002,

0xfd95,	// (0x0003a984) vkb2_top_entry_pane_t_ParamLimits

0xfd95,	// (0x0003a984) vkb2_top_entry_pane_t

0x6fe8,	// (0x00031bd7) vkb2_top_grid_right_pane_g1_ParamLimits

0x6fe8,	// (0x00031bd7) vkb2_top_grid_right_pane_g1

0x6ffe,	// (0x00031bed) vkb2_top_grid_right_pane_g2_ParamLimits

0x6ffe,	// (0x00031bed) vkb2_top_grid_right_pane_g2

0x7016,	// (0x00031c05) vkb2_top_grid_right_pane_g3_ParamLimits

0x7016,	// (0x00031c05) vkb2_top_grid_right_pane_g3

0x702e,	// (0x00031c1d) vkb2_top_grid_right_pane_g4_ParamLimits

0x702e,	// (0x00031c1d) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9c,	// (0x0003a98b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9c,	// (0x0003a98b) vkb2_top_grid_right_pane_g

0x7044,	// (0x00031c33) vkb2_top_cell_left_pane_g1

0x705b,	// (0x00031c4a) vkb2_cell_keypad_pane_g1_ParamLimits

0x705b,	// (0x00031c4a) vkb2_cell_keypad_pane_g1

0xe1dd,	// (0x00038dcc) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1dd,	// (0x00038dcc) vkb2_cell_keypad_pane_t1

0x7069,	// (0x00031c58) vkb2_cell_bottom_grid_pane_ParamLimits

0x7069,	// (0x00031c58) vkb2_cell_bottom_grid_pane

0x70a2,	// (0x00031c91) vkb2_cell_bottom_grid_pane_g1

0xdd88,	// (0x00038977) aid_call2_pane_cp02

0xdd90,	// (0x0003897f) aid_call_pane_cp02

0xdd98,	// (0x00038987) clock_digital_number_pane_cp10

0xdda0,	// (0x0003898f) clock_digital_number_pane_cp11

0xdda8,	// (0x00038997) clock_digital_number_pane_cp12

0xddb0,	// (0x0003899f) clock_digital_number_pane_cp13

0xddb8,	// (0x000389a7) clock_digital_separator_pane_cp10

0x8e31,	// (0x00033a20) popup_clock_digital_analogue_window_cp2_g1

0x8e31,	// (0x00033a20) popup_clock_digital_analogue_window_cp2_g2

0xddc0,	// (0x000389af) popup_clock_digital_analogue_window_cp2_g3

0x8e31,	// (0x00033a20) popup_clock_digital_analogue_window_cp2_g4

0xddc0,	// (0x000389af) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd51,	// (0x0003a940) popup_clock_digital_analogue_window_cp2_g

0xddc8,	// (0x000389b7) popup_clock_digital_analogue_window_cp2_t1

0xddd6,	// (0x000389c5) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5c,	// (0x0003a94b) popup_clock_digital_analogue_window_cp2_t

0xc2b2,	// (0x00036ea1) clock_digital_number_pane_cp10_g1

0xc2b2,	// (0x00036ea1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb38,	// (0x0003a727) clock_digital_number_pane_cp10_g

0xc2b2,	// (0x00036ea1) clock_digital_separator_pane_cp10_g1

0xc2b2,	// (0x00036ea1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb38,	// (0x0003a727) clock_digital_separator_pane_cp10_g

0xdbe3,	// (0x000387d2) uniindi_top_pane_g3

0xdbf4,	// (0x000387e3) uniindi_top_pane_g4

0x6e7c,	// (0x00031a6b) vkb2_row_keypad_pane_ParamLimits

0x6e7c,	// (0x00031a6b) vkb2_row_keypad_pane

0x70be,	// (0x00031cad) vkb2_cell_t_keypad_pane_ParamLimits

0x70be,	// (0x00031cad) vkb2_cell_t_keypad_pane

0x70ce,	// (0x00031cbd) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x70ce,	// (0x00031cbd) vkb2_cell_t_keypad_pane_cp08

0x70e1,	// (0x00031cd0) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x70e1,	// (0x00031cd0) vkb2_cell_t_keypad_pane_cp09

0x70f5,	// (0x00031ce4) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x70f5,	// (0x00031ce4) vkb2_cell_t_keypad_pane_cp01

0x7106,	// (0x00031cf5) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7106,	// (0x00031cf5) vkb2_cell_t_keypad_pane_cp02

0x7117,	// (0x00031d06) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7117,	// (0x00031d06) vkb2_cell_t_keypad_pane_cp03

0x7128,	// (0x00031d17) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7128,	// (0x00031d17) vkb2_cell_t_keypad_pane_cp04

0x7139,	// (0x00031d28) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7139,	// (0x00031d28) vkb2_cell_t_keypad_pane_cp05

0x714a,	// (0x00031d39) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x714a,	// (0x00031d39) vkb2_cell_t_keypad_pane_cp06

0x715b,	// (0x00031d4a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x715b,	// (0x00031d4a) vkb2_cell_t_keypad_pane_cp07

0x716c,	// (0x00031d5b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x716c,	// (0x00031d5b) vkb2_cell_t_keypad_pane_cp10

0x6922,	// (0x00031511) vkb2_cell_t_keypad_pane_g1

0xe1f4,	// (0x00038de3) vkb2_cell_t_keypad_pane_t1

0x4a7b,	// (0x0002f66a) popup_grid_graphic2_window

0xe206,	// (0x00038df5) aid_size_cell_graphic2_ParamLimits

0xe206,	// (0x00038df5) aid_size_cell_graphic2

0xe23e,	// (0x00038e2d) bg_popup_window_pane_cp21_ParamLimits

0xe23e,	// (0x00038e2d) bg_popup_window_pane_cp21

0xe24c,	// (0x00038e3b) graphic2_pages_pane_ParamLimits

0xe24c,	// (0x00038e3b) graphic2_pages_pane

0xe292,	// (0x00038e81) grid_graphic2_control_pane_ParamLimits

0xe292,	// (0x00038e81) grid_graphic2_control_pane

0xe2d0,	// (0x00038ebf) grid_graphic2_pane_ParamLimits

0xe2d0,	// (0x00038ebf) grid_graphic2_pane

0xe344,	// (0x00038f33) cell_graphic2_pane

0x4a7b,	// (0x0002f66a) main_comp_mode_pane

0xd463,	// (0x00038052) list_ai3_gene_pane_ParamLimits

0xd82d,	// (0x0003841c) bg_popup_window_pane_cp19_ParamLimits

0xd839,	// (0x00038428) bg_touch_area_indi_pane_ParamLimits

0xd839,	// (0x00038428) bg_touch_area_indi_pane

0xd84f,	// (0x0003843e) bg_touch_area_indi_pane_cp01_ParamLimits

0xd84f,	// (0x0003843e) bg_touch_area_indi_pane_cp01

0xd865,	// (0x00038454) bg_touch_area_indi_pane_cp02_ParamLimits

0xd865,	// (0x00038454) bg_touch_area_indi_pane_cp02

0xd87d,	// (0x0003846c) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87d,	// (0x0003846c) bg_touch_area_indi_pane_cp03

0xd897,	// (0x00038486) popup_slider_window_g1_ParamLimits

0xd8b3,	// (0x000384a2) popup_slider_window_g2_ParamLimits

0xd8cf,	// (0x000384be) popup_slider_window_g3_ParamLimits

0xfce6,	// (0x0003a8d5) popup_slider_window_g_ParamLimits

0xd92b,	// (0x0003851a) popup_slider_window_t1_ParamLimits

0xd99f,	// (0x0003858e) small_volume_slider_vertical_pane_ParamLimits

0xe344,	// (0x00038f33) cell_graphic2_pane_ParamLimits

0xe392,	// (0x00038f81) bg_button_pane_cp10_ParamLimits

0xe392,	// (0x00038f81) bg_button_pane_cp10

0xe3a5,	// (0x00038f94) bg_button_pane_cp11_ParamLimits

0xe3a5,	// (0x00038f94) bg_button_pane_cp11

0xe3b8,	// (0x00038fa7) graphic2_pages_pane_g1_ParamLimits

0xe3b8,	// (0x00038fa7) graphic2_pages_pane_g1

0xe3d3,	// (0x00038fc2) graphic2_pages_pane_g2_ParamLimits

0xe3d3,	// (0x00038fc2) graphic2_pages_pane_g2

0x0001,

0xfdaa,	// (0x0003a999) graphic2_pages_pane_g_ParamLimits

0xfdaa,	// (0x0003a999) graphic2_pages_pane_g

0xe3eb,	// (0x00038fda) graphic2_pages_pane_t1_ParamLimits

0xe3eb,	// (0x00038fda) graphic2_pages_pane_t1

0xe403,	// (0x00038ff2) cell_graphic2_control_pane_ParamLimits

0xe403,	// (0x00038ff2) cell_graphic2_control_pane

0xe424,	// (0x00039013) cell_graphic2_pane_g1_ParamLimits

0xe424,	// (0x00039013) cell_graphic2_pane_g1

0xe431,	// (0x00039020) cell_graphic2_pane_g2_ParamLimits

0xe431,	// (0x00039020) cell_graphic2_pane_g2

0xe43e,	// (0x0003902d) cell_graphic2_pane_g3_ParamLimits

0xe43e,	// (0x0003902d) cell_graphic2_pane_g3

0xe44b,	// (0x0003903a) cell_graphic2_pane_g4_ParamLimits

0xe44b,	// (0x0003903a) cell_graphic2_pane_g4

0xe458,	// (0x00039047) cell_graphic2_pane_g5_ParamLimits

0xe458,	// (0x00039047) cell_graphic2_pane_g5

0x0004,

0xfdaf,	// (0x0003a99e) cell_graphic2_pane_g_ParamLimits

0xfdaf,	// (0x0003a99e) cell_graphic2_pane_g

0xe473,	// (0x00039062) cell_graphic2_pane_t1_ParamLimits

0xe473,	// (0x00039062) cell_graphic2_pane_t1

0x9d00,	// (0x000348ef) grid_highlight_pane_cp11_ParamLimits

0x9d00,	// (0x000348ef) grid_highlight_pane_cp11

0x81c8,	// (0x00032db7) bg_button_pane_cp05

0xe49c,	// (0x0003908b) cell_graphic2_control_pane_g1

0xc2b2,	// (0x00036ea1) bg_touch_area_indi_pane_g1

0xe4c4,	// (0x000390b3) aid_cmod_rocker_key_size

0xe4ce,	// (0x000390bd) aid_cmode_itu_key_size

0xe4d8,	// (0x000390c7) main_cmode_video_pane

0xe4e2,	// (0x000390d1) main_comp_mode_itu_pane

0xe4ee,	// (0x000390dd) main_comp_mode_rocker_pane

0xe4fa,	// (0x000390e9) cell_cmode_rocker_pane_ParamLimits

0xe4fa,	// (0x000390e9) cell_cmode_rocker_pane

0xe50c,	// (0x000390fb) cell_cmode_itu_pane_ParamLimits

0xe50c,	// (0x000390fb) cell_cmode_itu_pane

0x87ae,	// (0x0003339d) bg_button_pane_cp06_ParamLimits

0x87ae,	// (0x0003339d) bg_button_pane_cp06

0xc530,	// (0x0003711f) cell_cmode_rocker_pane_g1_ParamLimits

0xc530,	// (0x0003711f) cell_cmode_rocker_pane_g1

0xda43,	// (0x00038632) cell_cmode_rocker_pane_g2_ParamLimits

0xda43,	// (0x00038632) cell_cmode_rocker_pane_g2

0x0001,

0xfdbf,	// (0x0003a9ae) cell_cmode_rocker_pane_g_ParamLimits

0xfdbf,	// (0x0003a9ae) cell_cmode_rocker_pane_g

0x769a,	// (0x00032289) bg_button_pane_cp07

0xe521,	// (0x00039110) cell_cmode_itu_pane_g1

0xe52a,	// (0x00039119) cell_cmode_itu_pane_t1

0xe538,	// (0x00039127) cell_cmode_itu_pane_t2

0x0001,

0xfdc4,	// (0x0003a9b3) cell_cmode_itu_pane_t

0xdc66,	// (0x00038855) aid_touch_ctrl_left

0xdc6e,	// (0x0003885d) aid_touch_ctrl_right

0x769a,	// (0x00032289) compa_mode_pane

0xe546,	// (0x00039135) aid_cmod_rocker_key_size_cp

0xe550,	// (0x0003913f) aid_cmode_itu_key_size_cp

0xe55a,	// (0x00039149) compa_mode_pane_g1

0xe562,	// (0x00039151) compa_mode_pane_g2

0xe56a,	// (0x00039159) compa_mode_pane_g3

0x0002,

0xfdc9,	// (0x0003a9b8) compa_mode_pane_g

0xe572,	// (0x00039161) main_comp_mode_itu_pane_cp

0xe57a,	// (0x00039169) main_comp_mode_rocker_pane_cp

0xe582,	// (0x00039171) cell_cmode_itu_pane_cp_ParamLimits

0xe582,	// (0x00039171) cell_cmode_itu_pane_cp

0xe597,	// (0x00039186) cell_cmode_rocker_pane_cp_ParamLimits

0xe597,	// (0x00039186) cell_cmode_rocker_pane_cp

0x87ae,	// (0x0003339d) bg_button_pane_cp06_cp_ParamLimits

0x87ae,	// (0x0003339d) bg_button_pane_cp06_cp

0xc530,	// (0x0003711f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc530,	// (0x0003711f) cell_cmode_rocker_pane_g1_cp

0xc2b2,	// (0x00036ea1) cell_cmode_rocker_pane_g2_cp

0x769a,	// (0x00032289) bg_button_pane_cp07_cp

0xb1d1,	// (0x00035dc0) cell_cmode_itu_pane_g1_cp

0xe5a9,	// (0x00039198) cell_cmode_itu_pane_t1_cp

0xe5a9,	// (0x00039198) cell_cmode_itu_pane_t2_cp

0xb1be,	// (0x00035dad) settings_code_pane_cp2

0x778e,	// (0x0003237d) bg_popup_window_pane_cp3_ParamLimits

0x83a2,	// (0x00032f91) heading_pane_cp3_ParamLimits

0x83ae,	// (0x00032f9d) listscroll_popup_graphic_pane_ParamLimits

0x66cb,	// (0x000312ba) fep_hwr_aid_pane_ParamLimits

0x6b42,	// (0x00031731) aid_touch_sctrl_top_ParamLimits

0x6b5d,	// (0x0003174c) sctrl_sk_top_pane_g1_ParamLimits

0x6922,	// (0x00031511) sctrl_sk_top_pane_g2_ParamLimits

0xfcff,	// (0x0003a8ee) sctrl_sk_top_pane_g_ParamLimits

0x6b6a,	// (0x00031759) sctrl_sk_top_pane_t1_ParamLimits

0x6b42,	// (0x00031731) aid_touch_sctrl_bottom_ParamLimits

0x6b6a,	// (0x00031759) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbaf,	// (0x0003879e) aid_area_touch_clock

0x6d53,	// (0x00031942) aid_vkb2_area_top_pane_cell_ParamLimits

0x6d53,	// (0x00031942) aid_vkb2_area_top_pane_cell

0x6e9e,	// (0x00031a8d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6e9e,	// (0x00031a8d) aid_vkb2_area_bottom_pane_cell

0xe13f,	// (0x00038d2e) popup_char_count_window

0xe5b7,	// (0x000391a6) popup_char_count_window_g1

0xe5c0,	// (0x000391af) popup_char_count_window_g2

0xe5c9,	// (0x000391b8) popup_char_count_window_g3

0x0002,

0xfdd0,	// (0x0003a9bf) popup_char_count_window_g

0xe5d2,	// (0x000391c1) popup_char_count_window_t1

0x6c19,	// (0x00031808) popup_fep_char_preview_window_ParamLimits

0x6c19,	// (0x00031808) popup_fep_char_preview_window

0x6d71,	// (0x00031960) vkb2_top_candi_pane_ParamLimits

0x6d71,	// (0x00031960) vkb2_top_candi_pane

0xe5e0,	// (0x000391cf) cell_vkb2_top_candi_pane_ParamLimits

0xe5e0,	// (0x000391cf) cell_vkb2_top_candi_pane

0x7181,	// (0x00031d70) bg_popup_fep_char_preview_window_ParamLimits

0x7181,	// (0x00031d70) bg_popup_fep_char_preview_window

0x718f,	// (0x00031d7e) popup_fep_char_preview_window_t1_ParamLimits

0x718f,	// (0x00031d7e) popup_fep_char_preview_window_t1

0xe62d,	// (0x0003921c) bg_popup_fep_char_preview_window_g1

0xe635,	// (0x00039224) bg_popup_fep_char_preview_window_g2

0xe63d,	// (0x0003922c) bg_popup_fep_char_preview_window_g3

0xe645,	// (0x00039234) bg_popup_fep_char_preview_window_g4

0xe64d,	// (0x0003923c) bg_popup_fep_char_preview_window_g5

0x71c9,	// (0x00031db8) bg_popup_fep_char_preview_window_g6

0xe655,	// (0x00039244) bg_popup_fep_char_preview_window_g7

0xe65d,	// (0x0003924c) bg_popup_fep_char_preview_window_g8

0xe665,	// (0x00039254) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd7,	// (0x0003a9c6) bg_popup_fep_char_preview_window_g

0x6922,	// (0x00031511) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6922,	// (0x00031511) cell_vkb2_top_candi_pane_g1

0x6930,	// (0x0003151f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6930,	// (0x0003151f) cell_vkb2_top_candi_pane_g2

0xdd67,	// (0x00038956) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdd67,	// (0x00038956) cell_vkb2_top_candi_pane_g3

0x71d1,	// (0x00031dc0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x71d1,	// (0x00031dc0) cell_vkb2_top_candi_pane_g4

0xc9fb,	// (0x000375ea) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9fb,	// (0x000375ea) cell_vkb2_top_candi_pane_g5

0x71f2,	// (0x00031de1) cell_vkb2_top_candi_pane_g6_ParamLimits

0x71f2,	// (0x00031de1) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdea,	// (0x0003a9d9) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdea,	// (0x0003a9d9) cell_vkb2_top_candi_pane_g

0x7200,	// (0x00031def) cell_vkb2_top_candi_pane_t1

0x64fd,	// (0x000310ec) aid_size_touch_slider_mark_ParamLimits

0x64fd,	// (0x000310ec) aid_size_touch_slider_mark

0xe282,	// (0x00038e71) grid_graphic2_catg_pane_ParamLimits

0xe282,	// (0x00038e71) grid_graphic2_catg_pane

0xe320,	// (0x00038f0f) popup_grid_graphic2_window_t1_ParamLimits

0xe320,	// (0x00038f0f) popup_grid_graphic2_window_t1

0xe332,	// (0x00038f21) popup_grid_graphic2_window_t2_ParamLimits

0xe332,	// (0x00038f21) popup_grid_graphic2_window_t2

0x0001,

0xfda5,	// (0x0003a994) popup_grid_graphic2_window_t_ParamLimits

0xfda5,	// (0x0003a994) popup_grid_graphic2_window_t

0x81c8,	// (0x00032db7) bg_button_pane_cp05_ParamLimits

0xe49c,	// (0x0003908b) cell_graphic2_control_pane_g1_ParamLimits

0xe66d,	// (0x0003925c) cell_graphic2_catg_pane_ParamLimits

0xe66d,	// (0x0003925c) cell_graphic2_catg_pane

0x769a,	// (0x00032289) bg_button_pane_cp12

0xe67f,	// (0x0003926e) cell_graphic2_catg_pane_g1

0xdb7b,	// (0x0003876a) cell_tb_ext_pane_t1_ParamLimits

0x6fbb,	// (0x00031baa) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6fbb,	// (0x00031baa) vkb2_top_cell_right_narrow_pane

0x6fd3,	// (0x00031bc2) vkb2_top_cell_right_wide_pane_ParamLimits

0x6fd3,	// (0x00031bc2) vkb2_top_cell_right_wide_pane

0x66bd,	// (0x000312ac) bg_vkb2_func_pane_ParamLimits

0x66bd,	// (0x000312ac) bg_vkb2_func_pane

0x7044,	// (0x00031c33) vkb2_top_cell_left_pane_g1_ParamLimits

0x66bd,	// (0x000312ac) bg_vkb2_fuc_pane_cp03_ParamLimits

0x66bd,	// (0x000312ac) bg_vkb2_fuc_pane_cp03

0x70a2,	// (0x00031c91) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c94,	// (0x00034883) bg_vkb2_func_pane_g1

0x9c9c,	// (0x0003488b) bg_vkb2_func_pane_g2

0x9cac,	// (0x0003489b) bg_vkb2_func_pane_g3

0x9ca4,	// (0x00034893) bg_vkb2_func_pane_g4

0x9cb4,	// (0x000348a3) bg_vkb2_func_pane_g5

0x9cbc,	// (0x000348ab) bg_vkb2_func_pane_g6

0x9cc4,	// (0x000348b3) bg_vkb2_func_pane_g7

0x9ccc,	// (0x000348bb) bg_vkb2_func_pane_g8

0x9c8c,	// (0x0003487b) bg_vkb2_func_pane_g9

0x0008,

0xfdf7,	// (0x0003a9e6) bg_vkb2_func_pane_g

0x66bd,	// (0x000312ac) bg_vkb2_fuc_pane_cp01_ParamLimits

0x66bd,	// (0x000312ac) bg_vkb2_fuc_pane_cp01

0x7044,	// (0x00031c33) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7044,	// (0x00031c33) vkb2_top_cell_right_wide_pane_g1

0x66bd,	// (0x000312ac) bg_vkb2_fuc_pane_cp02_ParamLimits

0x66bd,	// (0x000312ac) bg_vkb2_fuc_pane_cp02

0x70a2,	// (0x00031c91) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x70a2,	// (0x00031c91) vkb2_top_cell_right_narrow_pane_g1

0xd7b1,	// (0x000383a0) aid_touch_area_decrease_ParamLimits

0xd7b1,	// (0x000383a0) aid_touch_area_decrease

0xd7cf,	// (0x000383be) aid_touch_area_increase_ParamLimits

0xd7cf,	// (0x000383be) aid_touch_area_increase

0xd7db,	// (0x000383ca) aid_touch_area_mute_ParamLimits

0xd7db,	// (0x000383ca) aid_touch_area_mute

0xd7ff,	// (0x000383ee) aid_touch_area_slider_ParamLimits

0xd7ff,	// (0x000383ee) aid_touch_area_slider

0xd8eb,	// (0x000384da) popup_slider_window_g4_ParamLimits

0xd8eb,	// (0x000384da) popup_slider_window_g4

0xd8f7,	// (0x000384e6) popup_slider_window_g5_ParamLimits

0xd8f7,	// (0x000384e6) popup_slider_window_g5

0xd919,	// (0x00038508) popup_slider_window_g6_ParamLimits

0xd919,	// (0x00038508) popup_slider_window_g6

0xd959,	// (0x00038548) popup_slider_window_t2_ParamLimits

0xd959,	// (0x00038548) popup_slider_window_t2

0x0001,

0xfcf3,	// (0x0003a8e2) popup_slider_window_t_ParamLimits

0xfcf3,	// (0x0003a8e2) popup_slider_window_t

0xd971,	// (0x00038560) slider_pane_ParamLimits

0xd971,	// (0x00038560) slider_pane

0xe688,	// (0x00039277) slider_pane_g1_ParamLimits

0xe688,	// (0x00039277) slider_pane_g1

0xe69c,	// (0x0003928b) slider_pane_g2_ParamLimits

0xe69c,	// (0x0003928b) slider_pane_g2

0xe6b2,	// (0x000392a1) slider_pane_g3_ParamLimits

0xe6b2,	// (0x000392a1) slider_pane_g3

0x0003,

0xfe0a,	// (0x0003a9f9) slider_pane_g_ParamLimits

0xfe0a,	// (0x0003a9f9) slider_pane_g

0x5fd7,	// (0x00030bc6) popup_tb_float_extension_window_ParamLimits

0x5fd7,	// (0x00030bc6) popup_tb_float_extension_window

0xe6de,	// (0x000392cd) aid_size_cell_tb_float_ext

0x769a,	// (0x00032289) bg_popup_sub_window_cp28

0xe6ea,	// (0x000392d9) grid_tb_float_ext_pane

0xe6f4,	// (0x000392e3) cell_tb_float_ext_pane_ParamLimits

0xe6f4,	// (0x000392e3) cell_tb_float_ext_pane

0xe70e,	// (0x000392fd) cell_tb_float_ext_pane_g1

0xe717,	// (0x00039306) grid_highlight_pane_cp12

0x680c,	// (0x000313fb) cell_last_hwr_side_pane_ParamLimits

0x680c,	// (0x000313fb) cell_last_hwr_side_pane

0xc2b2,	// (0x00036ea1) cell_last_hwr_side_pane_g1

0xe720,	// (0x0003930f) cell_last_hwr_side_pane_g2

0x0001,

0xfe13,	// (0x0003aa02) cell_last_hwr_side_pane_g

0x6f6a,	// (0x00031b59) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6f6a,	// (0x00031b59) vkb2_area_bottom_space_btn_pane

0x6922,	// (0x00031511) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1f4,	// (0x00038de3) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7200,	// (0x00031def) cell_vkb2_top_candi_pane_t1_ParamLimits

0x721f,	// (0x00031e0e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x721f,	// (0x00031e0e) vkb2_area_bottom_space_btn_pane_g1

0x7259,	// (0x00031e48) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7259,	// (0x00031e48) vkb2_area_bottom_space_btn_pane_g2

0x728f,	// (0x00031e7e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x728f,	// (0x00031e7e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe18,	// (0x0003aa07) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe18,	// (0x0003aa07) vkb2_area_bottom_space_btn_pane_g

0x6780,	// (0x0003136f) cel_fep_hwr_func_pane_ParamLimits

0x6780,	// (0x0003136f) cel_fep_hwr_func_pane

0x67bc,	// (0x000313ab) cell_hwr_side_button_pane_ParamLimits

0x67bc,	// (0x000313ab) cell_hwr_side_button_pane

0xdbaf,	// (0x0003879e) aid_area_touch_clock_ParamLimits

0x81c8,	// (0x00032db7) bg_uniindi_top_pane_ParamLimits

0xdbc1,	// (0x000387b0) uniindi_top_pane_g1_ParamLimits

0xdbd7,	// (0x000387c6) uniindi_top_pane_g2_ParamLimits

0xdbe3,	// (0x000387d2) uniindi_top_pane_g3_ParamLimits

0xdbf4,	// (0x000387e3) uniindi_top_pane_g4_ParamLimits

0xfd2b,	// (0x0003a91a) uniindi_top_pane_g_ParamLimits

0xdc01,	// (0x000387f0) uniindi_top_pane_t1_ParamLimits

0x81c8,	// (0x00032db7) bg_vkb2_func_pane_cp01_ParamLimits

0x81c8,	// (0x00032db7) bg_vkb2_func_pane_cp01

0xe729,	// (0x00039318) cel_fep_hwr_func_pane_g1_ParamLimits

0xe729,	// (0x00039318) cel_fep_hwr_func_pane_g1

0x81c8,	// (0x00032db7) bg_vkb2_func_pane_cp02_ParamLimits

0x81c8,	// (0x00032db7) bg_vkb2_func_pane_cp02

0xe729,	// (0x00039318) cell_hwr_side_button_pane_g1_ParamLimits

0xe729,	// (0x00039318) cell_hwr_side_button_pane_g1

0x9b0d,	// (0x000346fc) status_pane_g4_ParamLimits

0x9b0d,	// (0x000346fc) status_pane_g4

0x9b27,	// (0x00034716) status_pane_t1

0xbfec,	// (0x00036bdb) form2_midp_gauge_slider_cont_pane

0xbff4,	// (0x00036be3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc006,	// (0x00036bf5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc018,	// (0x00036c07) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaeb,	// (0x0003a6da) form2_midp_gauge_slider_pane_t_ParamLimits

0xc02a,	// (0x00036c19) form2_midp_slider_pane_ParamLimits

0x6bd9,	// (0x000317c8) aid_size_cell_func_vkb2_ParamLimits

0x6bd9,	// (0x000317c8) aid_size_cell_func_vkb2

0xe6ca,	// (0x000392b9) slider_pane_g4_ParamLimits

0xe6ca,	// (0x000392b9) slider_pane_g4

0x72d9,	// (0x00031ec8) form2_midp_gauge_slider_pane_t2_cp01

0x72e7,	// (0x00031ed6) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x72e7,	// (0x00031ed6) form2_midp_gauge_slider_pane_t3_cp01

0x7304,	// (0x00031ef3) form2_midp_slider_pane_cp01

0x769a,	// (0x00032289) navi_smil_pane

0xe762,	// (0x00039351) navi_smil_pane_g1

0xe76a,	// (0x00039359) navi_smil_pane_t1

0xe737,	// (0x00039326) form2_midp_slider_pane_g1

0xe740,	// (0x0003932f) form2_midp_slider_pane_g2

0xe748,	// (0x00039337) form2_midp_slider_pane_g3

0xe737,	// (0x00039326) form2_midp_slider_pane_g4

0xe750,	// (0x0003933f) form2_midp_slider_pane_g5

0x0004,

0xfe21,	// (0x0003aa10) form2_midp_slider_pane_g

0x72c9,	// (0x00031eb8) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x72c9,	// (0x00031eb8) vkb2_area_bottom_space_btn_pane_g4

0x993c,	// (0x0003452b) lc0_navi_pane_ParamLimits

0x993c,	// (0x0003452b) lc0_navi_pane

0x99b2,	// (0x000345a1) lc0_stat_indi_pane_ParamLimits

0x99b2,	// (0x000345a1) lc0_stat_indi_pane

0x99c9,	// (0x000345b8) ls0_title_pane_ParamLimits

0x99c9,	// (0x000345b8) ls0_title_pane

0x87ae,	// (0x0003339d) bg_popup_sub_pane_cp14_ParamLimits

0xdb96,	// (0x00038785) list_uniindi_pane_ParamLimits

0xdba2,	// (0x00038791) uniindi_top_pane_ParamLimits

0xdc3e,	// (0x0003882d) list_single_uniindi_pane_g1_ParamLimits

0xdc51,	// (0x00038840) list_single_uniindi_pane_t1_ParamLimits

0x730d,	// (0x00031efc) lc0_stat_clock_pane_ParamLimits

0x730d,	// (0x00031efc) lc0_stat_clock_pane

0xe778,	// (0x00039367) lc0_stat_indi_pane_g1_ParamLimits

0xe778,	// (0x00039367) lc0_stat_indi_pane_g1

0xe785,	// (0x00039374) lc0_stat_indi_pane_g2_ParamLimits

0xe785,	// (0x00039374) lc0_stat_indi_pane_g2

0x0001,

0xfe2c,	// (0x0003aa1b) lc0_stat_indi_pane_g_ParamLimits

0xfe2c,	// (0x0003aa1b) lc0_stat_indi_pane_g

0x731a,	// (0x00031f09) lc0_uni_indicator_pane_ParamLimits

0x731a,	// (0x00031f09) lc0_uni_indicator_pane

0xe792,	// (0x00039381) ls0_title_pane_g1_ParamLimits

0xe792,	// (0x00039381) ls0_title_pane_g1

0xe7a6,	// (0x00039395) ls0_title_pane_t1_ParamLimits

0xe7a6,	// (0x00039395) ls0_title_pane_t1

0x7327,	// (0x00031f16) lc0_uni_indicator_pane_g1_ParamLimits

0x7327,	// (0x00031f16) lc0_uni_indicator_pane_g1

0xe7dc,	// (0x000393cb) lc0_stat_clock_pane_t1

0x4a7b,	// (0x0002f66a) main_ai5_pane

0xe7ea,	// (0x000393d9) ai5_sk_pane_ParamLimits

0xe7ea,	// (0x000393d9) ai5_sk_pane

0xe7f7,	// (0x000393e6) cell_ai5_widget_pane_ParamLimits

0xe7f7,	// (0x000393e6) cell_ai5_widget_pane

0xe8ad,	// (0x0003949c) aid_size_cell_widget_grid

0xe8c3,	// (0x000394b2) bg_ai5_widget_pane_ParamLimits

0xe8c3,	// (0x000394b2) bg_ai5_widget_pane

0xe937,	// (0x00039526) cell_ai5_widget_pane_g2

0xe947,	// (0x00039536) cell_ai5_widget_pane_g3

0xe95e,	// (0x0003954d) cell_ai5_widget_pane_g4

0xe96a,	// (0x00039559) cell_ai5_widget_pane_g5

0xe976,	// (0x00039565) cell_ai5_widget_pane_g6

0xe982,	// (0x00039571) cell_ai5_widget_pane_g7

0xe9ca,	// (0x000395b9) cell_ai5_widget_pane_t1_ParamLimits

0xe9ca,	// (0x000395b9) cell_ai5_widget_pane_t1

0xe9e7,	// (0x000395d6) cell_ai5_widget_pane_t2_ParamLimits

0xe9e7,	// (0x000395d6) cell_ai5_widget_pane_t2

0xe9ff,	// (0x000395ee) cell_ai5_widget_pane_t3_ParamLimits

0xe9ff,	// (0x000395ee) cell_ai5_widget_pane_t3

0xea17,	// (0x00039606) cell_ai5_widget_pane_t4_ParamLimits

0xea17,	// (0x00039606) cell_ai5_widget_pane_t4

0xea34,	// (0x00039623) cell_ai5_widget_pane_t5_ParamLimits

0xea34,	// (0x00039623) cell_ai5_widget_pane_t5

0xea53,	// (0x00039642) cell_ai5_widget_pane_t6_ParamLimits

0xea53,	// (0x00039642) cell_ai5_widget_pane_t6

0xea65,	// (0x00039654) cell_ai5_widget_pane_t7_ParamLimits

0xea65,	// (0x00039654) cell_ai5_widget_pane_t7

0xea7e,	// (0x0003966d) cell_ai5_widget_pane_t8_ParamLimits

0xea7e,	// (0x0003966d) cell_ai5_widget_pane_t8

0x0009,

0xfe46,	// (0x0003aa35) cell_ai5_widget_pane_t_ParamLimits

0xfe46,	// (0x0003aa35) cell_ai5_widget_pane_t

0xead2,	// (0x000396c1) grid_ai5_widget_pane

0x87ae,	// (0x0003339d) highlight_cell_ai5_widget_pane_ParamLimits

0x87ae,	// (0x0003339d) highlight_cell_ai5_widget_pane

0xeae9,	// (0x000396d8) ai5_sk_left_pane

0xeaf3,	// (0x000396e2) ai5_sk_middle_pane

0xeafd,	// (0x000396ec) ai5_sk_right_pane

0xeb07,	// (0x000396f6) bg_ai5_widget_pane_g1_ParamLimits

0xeb07,	// (0x000396f6) bg_ai5_widget_pane_g1

0xeb13,	// (0x00039702) bg_ai5_widget_pane_g2_ParamLimits

0xeb13,	// (0x00039702) bg_ai5_widget_pane_g2

0xeb1f,	// (0x0003970e) bg_ai5_widget_pane_g3_ParamLimits

0xeb1f,	// (0x0003970e) bg_ai5_widget_pane_g3

0xeb2b,	// (0x0003971a) bg_ai5_widget_pane_g4_ParamLimits

0xeb2b,	// (0x0003971a) bg_ai5_widget_pane_g4

0xeb37,	// (0x00039726) bg_ai5_widget_pane_g5_ParamLimits

0xeb37,	// (0x00039726) bg_ai5_widget_pane_g5

0xeb43,	// (0x00039732) bg_ai5_widget_pane_g6_ParamLimits

0xeb43,	// (0x00039732) bg_ai5_widget_pane_g6

0xeb4f,	// (0x0003973e) bg_ai5_widget_pane_g7_ParamLimits

0xeb4f,	// (0x0003973e) bg_ai5_widget_pane_g7

0xeb5b,	// (0x0003974a) bg_ai5_widget_pane_g8_ParamLimits

0xeb5b,	// (0x0003974a) bg_ai5_widget_pane_g8

0xeb67,	// (0x00039756) bg_ai5_widget_pane_g9_ParamLimits

0xeb67,	// (0x00039756) bg_ai5_widget_pane_g9

0x0008,

0xfe5b,	// (0x0003aa4a) bg_ai5_widget_pane_g_ParamLimits

0xfe5b,	// (0x0003aa4a) bg_ai5_widget_pane_g

0xeb99,	// (0x00039788) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb99,	// (0x00039788) cell_shortcut_ai5_widget_pane

0x9444,	// (0x00034033) bg_cell_shortcut_ai5_widget_pane

0xebaa,	// (0x00039799) cell_grid_ai5_widget_pane_g1

0x9444,	// (0x00034033) highlight_cell_shortcut_ai5_widget_pane

0x9c94,	// (0x00034883) ai5_sk_left_pane_g1

0xebb3,	// (0x000397a2) ai5_sk_left_pane_g2

0xebbb,	// (0x000397aa) ai5_sk_left_pane_g3

0xebc3,	// (0x000397b2) ai5_sk_left_pane_g4

0x0003,

0xfe6e,	// (0x0003aa5d) ai5_sk_left_pane_g

0xebcb,	// (0x000397ba) ai5_sk_left_pane_t1

0x9c9c,	// (0x0003488b) ai5_sk_right_pane_g1

0xebd9,	// (0x000397c8) ai5_sk_right_pane_g2

0xebe1,	// (0x000397d0) ai5_sk_right_pane_g3

0xebe9,	// (0x000397d8) ai5_sk_right_pane_g4

0x0003,

0xfe77,	// (0x0003aa66) ai5_sk_right_pane_g

0xebf1,	// (0x000397e0) ai5_sk_right_pane_t1

0x9c9c,	// (0x0003488b) ai5_sk_middle_pane_g1

0x9c94,	// (0x00034883) ai5_sk_middle_pane_g2

0x9cb4,	// (0x000348a3) ai5_sk_middle_pane_g3

0xebe1,	// (0x000397d0) ai5_sk_middle_pane_g4

0xebbb,	// (0x000397aa) ai5_sk_middle_pane_g5

0xebff,	// (0x000397ee) ai5_sk_middle_pane_g6

0xec07,	// (0x000397f6) ai5_sk_middle_pane_g7

0x0006,

0xfe80,	// (0x0003aa6f) ai5_sk_middle_pane_g

0x97c8,	// (0x000343b7) aid_touch_area_size_lc0_ParamLimits

0x97c8,	// (0x000343b7) aid_touch_area_size_lc0

0x6951,	// (0x00031540) cell_hwr_candidate_pane_t1_ParamLimits

0x97e4,	// (0x000343d3) aid_touch_navi_pane

0x9ab7,	// (0x000346a6) status_dt_navi_pane_ParamLimits

0x9ab7,	// (0x000346a6) status_dt_navi_pane

0x9ac4,	// (0x000346b3) status_dt_sta_pane_ParamLimits

0x9ac4,	// (0x000346b3) status_dt_sta_pane

0xec0f,	// (0x000397fe) dt_sta_controll_pane

0xec1c,	// (0x0003980b) dt_sta_indi_pane

0xec2d,	// (0x0003981c) dt_sta_title_pane

0x81c8,	// (0x00032db7) bg_dt_sta_indi_pane_ParamLimits

0x81c8,	// (0x00032db7) bg_dt_sta_indi_pane

0xec40,	// (0x0003982f) dt_sta_battery_pane

0xec48,	// (0x00039837) dt_sta_indi_pane_g1

0xec51,	// (0x00039840) dt_sta_indi_pane_g2

0xec5a,	// (0x00039849) dt_sta_indi_pane_g3

0x0002,

0xfe8f,	// (0x0003aa7e) dt_sta_indi_pane_g

0xec63,	// (0x00039852) dt_sta_signal_pane

0x87ae,	// (0x0003339d) bg_dt_sta_title_pane_ParamLimits

0x87ae,	// (0x0003339d) bg_dt_sta_title_pane

0xec6c,	// (0x0003985b) dt_sta_title_pane_g1

0xec74,	// (0x00039863) dt_sta_title_pane_t1_ParamLimits

0xec74,	// (0x00039863) dt_sta_title_pane_t1

0x769a,	// (0x00032289) bg_dt_sta_control_pane

0xec89,	// (0x00039878) dt_sta_controll_pane_g1

0xec92,	// (0x00039881) bg_dt_sta_title_pane_g1

0xec9b,	// (0x0003988a) bg_dt_sta_title_pane_g2

0xeca4,	// (0x00039893) bg_dt_sta_title_pane_g3

0x0002,

0xfe96,	// (0x0003aa85) bg_dt_sta_title_pane_g

0xc2b2,	// (0x00036ea1) bg_dt_sta_indi_pane_g1

0xecad,	// (0x0003989c) dt_sta_signal_pane_g1

0xecb5,	// (0x000398a4) dt_sta_signal_pane_g2

0x0001,

0xfe9d,	// (0x0003aa8c) dt_sta_signal_pane_g

0xecbd,	// (0x000398ac) dt_sta_battery_pane_g1

0xecc6,	// (0x000398b5) dt_sta_battery_pane_t1

0xc2b2,	// (0x00036ea1) bg_dt_sta_control_pane_g1

0x8f43,	// (0x00033b32) fep_china_uni_eep_pane

0x8f4b,	// (0x00033b3a) fep_china_uni_entry_pane_ParamLimits

0x8f5b,	// (0x00033b4a) popup_fep_china_uni_window_g1_ParamLimits

0x8f6b,	// (0x00033b5a) popup_fep_china_uni_window_g2_ParamLimits

0x8f6b,	// (0x00033b5a) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0003a30c) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0003a30c) popup_fep_china_uni_window_g

0xecd5,	// (0x000398c4) fep_china_uni_eep_pane_g1

0xecdd,	// (0x000398cc) fep_china_uni_eep_pane_t1

0xe759,	// (0x00039348) aid_touch_area_size_smil_player

0x9934,	// (0x00034523) lc0_clock_pane

0x9b1b,	// (0x0003470a) status_pane_g5_ParamLimits

0x9b1b,	// (0x0003470a) status_pane_g5

0x5c9c,	// (0x0003088b) popup_keymap_window

0x9ad9,	// (0x000346c8) status_icon_pane

0xe947,	// (0x00039536) cell_ai5_widget_pane_g3_ParamLimits

0xe95e,	// (0x0003954d) cell_ai5_widget_pane_g4_ParamLimits

0xe96a,	// (0x00039559) cell_ai5_widget_pane_g5_ParamLimits

0xe98e,	// (0x0003957d) cell_ai5_widget_pane_g8_ParamLimits

0xe98e,	// (0x0003957d) cell_ai5_widget_pane_g8

0xe9a2,	// (0x00039591) cell_ai5_widget_pane_g9_ParamLimits

0xe9a2,	// (0x00039591) cell_ai5_widget_pane_g9

0xe9b6,	// (0x000395a5) cell_ai5_widget_pane_g10_ParamLimits

0xe9b6,	// (0x000395a5) cell_ai5_widget_pane_g10

0xecec,	// (0x000398db) status_icon_pane_g1

0x769a,	// (0x00032289) bg_popup_sub_pane_cp13

0xecf4,	// (0x000398e3) popup_keymap_window_t1

0x970d,	// (0x000342fc) control_pane_g6_ParamLimits

0x970d,	// (0x000342fc) control_pane_g6

0x971a,	// (0x00034309) control_pane_g7_ParamLimits

0x971a,	// (0x00034309) control_pane_g7

0x9727,	// (0x00034316) control_pane_g8_ParamLimits

0x9727,	// (0x00034316) control_pane_g8

0xec0f,	// (0x000397fe) dt_sta_controll_pane_ParamLimits

0xec1c,	// (0x0003980b) dt_sta_indi_pane_ParamLimits

0xec2d,	// (0x0003981c) dt_sta_title_pane_ParamLimits

0x86e6,	// (0x000332d5) aid_size_touch_scroll_bar_cale

0x4b54,	// (0x0002f743) popup_discreet_window_ParamLimits

0x4b54,	// (0x0002f743) popup_discreet_window

0x4bdc,	// (0x0002f7cb) popup_sk_window

0xa305,	// (0x00034ef4) bg_popup_sub_pane_cp28_ParamLimits

0xa305,	// (0x00034ef4) bg_popup_sub_pane_cp28

0xed02,	// (0x000398f1) popup_discreet_window_g1_ParamLimits

0xed02,	// (0x000398f1) popup_discreet_window_g1

0xed22,	// (0x00039911) popup_discreet_window_t1_ParamLimits

0xed22,	// (0x00039911) popup_discreet_window_t1

0xed40,	// (0x0003992f) popup_discreet_window_t2_ParamLimits

0xed40,	// (0x0003992f) popup_discreet_window_t2

0x0002,

0xfea2,	// (0x0003aa91) popup_discreet_window_t_ParamLimits

0xfea2,	// (0x0003aa91) popup_discreet_window_t

0x733b,	// (0x00031f2a) popup_sk_window_g1

0x7345,	// (0x00031f34) popup_sk_window_g2

0x0001,

0xfea9,	// (0x0003aa98) popup_sk_window_g

0x734f,	// (0x00031f3e) popup_sk_window_t1

0x735d,	// (0x00031f4c) popup_sk_window_t1_copy1

0xe937,	// (0x00039526) cell_ai5_widget_pane_g2_ParamLimits

0xea90,	// (0x0003967f) cell_ai5_widget_pane_t9_ParamLimits

0xea90,	// (0x0003967f) cell_ai5_widget_pane_t9

0x769a,	// (0x00032289) main_fep_fshwr2_pane

0x736b,	// (0x00031f5a) aid_fshwr2_btn_pane

0x7377,	// (0x00031f66) aid_fshwr2_syb_pane

0x7383,	// (0x00031f72) aid_fshwr2_txt_pane

0x738f,	// (0x00031f7e) fshwr2_func_candi_pane

0x73a4,	// (0x00031f93) fshwr2_hwr_syb_pane

0x73b4,	// (0x00031fa3) fshwr2_icf_pane

0x4a7b,	// (0x0002f66a) fshwr2_icf_bg_pane

0x73dd,	// (0x00031fcc) fshwr2_icf_pane_t1_ParamLimits

0x73dd,	// (0x00031fcc) fshwr2_icf_pane_t1

0x8e31,	// (0x00033a20) fshwr2_func_candi_pane_g1

0xed92,	// (0x00039981) fshwr2_func_candi_row_pane_ParamLimits

0xed92,	// (0x00039981) fshwr2_func_candi_row_pane

0x73f5,	// (0x00031fe4) cell_fshwr2_syb_pane_ParamLimits

0x73f5,	// (0x00031fe4) cell_fshwr2_syb_pane

0x6922,	// (0x00031511) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6922,	// (0x00031511) fshwr2_hwr_syb_pane_g1

0x4a7b,	// (0x0002f66a) bg_popup_call_pane_cp01

0x740b,	// (0x00031ffa) fshwr2_func_candi_cell_pane_ParamLimits

0x740b,	// (0x00031ffa) fshwr2_func_candi_cell_pane

0xeda2,	// (0x00039991) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeda2,	// (0x00039991) fshwr2_func_candi_cell_bg_pane

0x7440,	// (0x0003202f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7440,	// (0x0003202f) fshwr2_func_candi_cell_pane_g1

0x7468,	// (0x00032057) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7468,	// (0x00032057) fshwr2_func_candi_cell_pane_t1

0x4a7b,	// (0x0002f66a) bg_button_pane_cp08

0xedae,	// (0x0003999d) cell_fshwr2_syb_bg_pane

0x747b,	// (0x0003206a) cell_fshwr2_syb_bg_pane_g1

0x7483,	// (0x00032072) cell_fshwr2_syb_bg_pane_t1

0x87ae,	// (0x0003339d) main_tmo_pane

0xae20,	// (0x00035a0f) uni_indicator_pane_g1_ParamLimits

0xae36,	// (0x00035a25) uni_indicator_pane_g2_ParamLimits

0xae4c,	// (0x00035a3b) uni_indicator_pane_g3_ParamLimits

0xae60,	// (0x00035a4f) uni_indicator_pane_g4_ParamLimits

0xae60,	// (0x00035a4f) uni_indicator_pane_g4

0xae74,	// (0x00035a63) uni_indicator_pane_g5_ParamLimits

0xae74,	// (0x00035a63) uni_indicator_pane_g5

0xae74,	// (0x00035a63) uni_indicator_pane_g6_ParamLimits

0xae74,	// (0x00035a63) uni_indicator_pane_g6

0xf921,	// (0x0003a510) uni_indicator_pane_g_ParamLimits

0xd78d,	// (0x0003837c) popup_tmo_note_window_ParamLimits

0xd78d,	// (0x0003837c) popup_tmo_note_window

0x6bbb,	// (0x000317aa) fshwr2_bg_pane

0x7459,	// (0x00032048) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7459,	// (0x00032048) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeae,	// (0x0003aa9d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeae,	// (0x0003aa9d) fshwr2_func_candi_cell_pane_g

0x690a,	// (0x000314f9) bg_popup_window_pane_cp01

0x7492,	// (0x00032081) bg_popup_window_pane_g1_cp01

0xedb6,	// (0x000399a5) bg_popup_window_pane_cp22_ParamLimits

0xedb6,	// (0x000399a5) bg_popup_window_pane_cp22

0xedc4,	// (0x000399b3) listscroll_tmo_link_pane_ParamLimits

0xedc4,	// (0x000399b3) listscroll_tmo_link_pane

0xee04,	// (0x000399f3) popup_tmo_note_window_g1_ParamLimits

0xee04,	// (0x000399f3) popup_tmo_note_window_g1

0xee11,	// (0x00039a00) tmo_note_info_pane_ParamLimits

0xee11,	// (0x00039a00) tmo_note_info_pane

0xee2b,	// (0x00039a1a) list_tmo_note_info_pane_g1_ParamLimits

0xee2b,	// (0x00039a1a) list_tmo_note_info_pane_g1

0xee42,	// (0x00039a31) list_tmo_note_info_pane_g2_ParamLimits

0xee42,	// (0x00039a31) list_tmo_note_info_pane_g2

0x0001,

0xfeb3,	// (0x0003aaa2) list_tmo_note_info_pane_g_ParamLimits

0xfeb3,	// (0x0003aaa2) list_tmo_note_info_pane_g

0xee5e,	// (0x00039a4d) list_tmo_note_info_text_pane_ParamLimits

0xee5e,	// (0x00039a4d) list_tmo_note_info_text_pane

0xeedf,	// (0x00039ace) list_tmo_link_pane

0xeeec,	// (0x00039adb) scroll_pane_cp20

0xeef9,	// (0x00039ae8) list_single_tmo_link_pane_ParamLimits

0xeef9,	// (0x00039ae8) list_single_tmo_link_pane

0xef09,	// (0x00039af8) list_single_tmo_link_pane_t1

0xef17,	// (0x00039b06) list_tmo_note_info_text_pane_t1_ParamLimits

0xef17,	// (0x00039b06) list_tmo_note_info_text_pane_t1

0x8868,	// (0x00033457) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8868,	// (0x00033457) aid_size_touch_scroll_bar_cp01

0x535f,	// (0x0002ff4e) aid_size_touch_slider_marker

0x4bc4,	// (0x0002f7b3) popup_settings_window_ParamLimits

0x4bc4,	// (0x0002f7b3) popup_settings_window

0x5b21,	// (0x00030710) popup_candi_list_indi_window

0x97e4,	// (0x000343d3) aid_touch_navi_pane_ParamLimits

0x6b16,	// (0x00031705) rs_clock_indi_pane

0x6b1f,	// (0x0003170e) sctrl_sk_bottom_pane_ParamLimits

0x6b30,	// (0x0003171f) sctrl_sk_top_pane_ParamLimits

0x6c33,	// (0x00031822) popup_fep_tooltip_window

0xe8ad,	// (0x0003949c) aid_size_cell_widget_grid_ParamLimits

0xe922,	// (0x00039511) cell_ai5_widget_pane_g1_ParamLimits

0xe922,	// (0x00039511) cell_ai5_widget_pane_g1

0xe976,	// (0x00039565) cell_ai5_widget_pane_g6_ParamLimits

0xe982,	// (0x00039571) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe31,	// (0x0003aa20) cell_ai5_widget_pane_g_ParamLimits

0xfe31,	// (0x0003aa20) cell_ai5_widget_pane_g

0xeab4,	// (0x000396a3) cell_ai5_widget_pane_t10_ParamLimits

0xeab4,	// (0x000396a3) cell_ai5_widget_pane_t10

0xead2,	// (0x000396c1) grid_ai5_widget_pane_ParamLimits

0xeb73,	// (0x00039762) cell_contacts_ai5_widget_pane_ParamLimits

0xeb73,	// (0x00039762) cell_contacts_ai5_widget_pane

0xed55,	// (0x00039944) popup_discreet_window_t3_ParamLimits

0xed55,	// (0x00039944) popup_discreet_window_t3

0x73c9,	// (0x00031fb8) popup_fshwr2_char_preview_window_ParamLimits

0x73c9,	// (0x00031fb8) popup_fshwr2_char_preview_window

0xee7c,	// (0x00039a6b) tmo_note_info_pane_t1

0xee91,	// (0x00039a80) tmo_note_info_pane_t2

0xeea6,	// (0x00039a95) tmo_note_info_pane_t3

0xeebb,	// (0x00039aaa) tmo_note_info_pane_t4

0xeecd,	// (0x00039abc) tmo_note_info_pane_t5

0x0004,

0xfeb8,	// (0x0003aaa7) tmo_note_info_pane_t

0xeedf,	// (0x00039ace) list_tmo_link_pane_ParamLimits

0xeeec,	// (0x00039adb) scroll_pane_cp20_ParamLimits

0x4a7b,	// (0x0002f66a) bg_popup_fep_char_preview_window_cp01

0xef30,	// (0x00039b1f) popup_fshwr2_char_preview_window_t1

0xef3e,	// (0x00039b2d) popup_candi_list_indi_window_g1

0xef47,	// (0x00039b36) bg_cell_contacts_ai5_widget_pane

0xef53,	// (0x00039b42) cell_contacts_ai5_widget_pane_g1

0xc950,	// (0x0003753f) cell_contacts_ai5_widget_pane_g2

0xef68,	// (0x00039b57) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec3,	// (0x0003aab2) cell_contacts_ai5_widget_pane_g

0xef74,	// (0x00039b63) cell_contacts_ai5_widget_pane_t1

0x87ae,	// (0x0003339d) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefeb,	// (0x00039bda) settings_container_pane

0x9444,	// (0x00034033) listscroll_set_pane_copy1

0xb99b,	// (0x0003658a) scroll_pane_cp121_copy1

0xeff7,	// (0x00039be6) set_content_pane_copy1

0xefff,	// (0x00039bee) aid_height_set_list_copy1_ParamLimits

0xefff,	// (0x00039bee) aid_height_set_list_copy1

0xb06c,	// (0x00035c5b) aid_size_parent_copy1_ParamLimits

0xb06c,	// (0x00035c5b) aid_size_parent_copy1

0xf00b,	// (0x00039bfa) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf00b,	// (0x00039bfa) button_value_adjust_pane_cp6_copy1

0x9782,	// (0x00034371) list_highlight_pane_cp2_copy1_ParamLimits

0x9782,	// (0x00034371) list_highlight_pane_cp2_copy1

0xf01f,	// (0x00039c0e) list_set_pane_copy1_ParamLimits

0xf01f,	// (0x00039c0e) list_set_pane_copy1

0xef86,	// (0x00039b75) main_pane_set_t1_copy1_ParamLimits

0xef86,	// (0x00039b75) main_pane_set_t1_copy1

0xefc0,	// (0x00039baf) main_pane_set_t2_copy1_ParamLimits

0xefc0,	// (0x00039baf) main_pane_set_t2_copy1

0xf0cc,	// (0x00039cbb) main_pane_set_t3_copy1

0xf0da,	// (0x00039cc9) main_pane_set_t4_copy1

0xefdf,	// (0x00039bce) set_content_pane_g1_copy1_ParamLimits

0xefdf,	// (0x00039bce) set_content_pane_g1_copy1

0xf0e8,	// (0x00039cd7) setting_code_pane_copy1

0xf0f0,	// (0x00039cdf) setting_slider_graphic_pane_copy1

0xf0f0,	// (0x00039cdf) setting_slider_pane_copy1

0xf0f0,	// (0x00039cdf) setting_text_pane_copy1

0xf0f0,	// (0x00039cdf) setting_volume_pane_copy1

0xf0e8,	// (0x00039cd7) settings_code_pane_cp2_copy1

0xf0f8,	// (0x00039ce7) settings_code_pane_cp_copy1_ParamLimits

0xf0f8,	// (0x00039ce7) settings_code_pane_cp_copy1

0x749b,	// (0x0003208a) volume_set_pane_copy1

0xf10c,	// (0x00039cfb) volume_set_pane_g10_copy1

0xf114,	// (0x00039d03) volume_set_pane_g1_copy1

0xf11c,	// (0x00039d0b) volume_set_pane_g2_copy1

0xf124,	// (0x00039d13) volume_set_pane_g3_copy1

0xf12c,	// (0x00039d1b) volume_set_pane_g4_copy1

0xf134,	// (0x00039d23) volume_set_pane_g5_copy1

0xf13c,	// (0x00039d2b) volume_set_pane_g6_copy1

0xf144,	// (0x00039d33) volume_set_pane_g7_copy1

0xf14c,	// (0x00039d3b) volume_set_pane_g8_copy1

0xf154,	// (0x00039d43) volume_set_pane_g9_copy1

0x778e,	// (0x0003237d) bg_set_opt_pane_cp_copy1_ParamLimits

0x778e,	// (0x0003237d) bg_set_opt_pane_cp_copy1

0x74a3,	// (0x00032092) setting_slider_pane_t1_copy1_ParamLimits

0x74a3,	// (0x00032092) setting_slider_pane_t1_copy1

0x74c1,	// (0x000320b0) setting_slider_pane_t2_copy1_ParamLimits

0x74c1,	// (0x000320b0) setting_slider_pane_t2_copy1

0x74db,	// (0x000320ca) setting_slider_pane_t3_copy1_ParamLimits

0x74db,	// (0x000320ca) setting_slider_pane_t3_copy1

0x74f3,	// (0x000320e2) slider_set_pane_copy1_ParamLimits

0x74f3,	// (0x000320e2) slider_set_pane_copy1

0x8809,	// (0x000333f8) set_opt_bg_pane_g1_copy2

0x8811,	// (0x00033400) set_opt_bg_pane_g2_copy2

0xf15c,	// (0x00039d4b) set_opt_bg_pane_g3_copy2

0x8821,	// (0x00033410) set_opt_bg_pane_g4_copy2

0x8829,	// (0x00033418) set_opt_bg_pane_g5_copy2

0x8831,	// (0x00033420) set_opt_bg_pane_g6_copy2

0xf166,	// (0x00039d55) set_opt_bg_pane_g7_copy2

0xf16e,	// (0x00039d5d) set_opt_bg_pane_g8_copy2

0xf178,	// (0x00039d67) set_opt_bg_pane_g9_copy2

0x7509,	// (0x000320f8) aid_size_touch_slider_mark_copy1_ParamLimits

0x7509,	// (0x000320f8) aid_size_touch_slider_mark_copy1

0xf182,	// (0x00039d71) slider_set_pane_g1_copy1

0x751d,	// (0x0003210c) slider_set_pane_g2_copy1

0x651d,	// (0x0003110c) slider_set_pane_g3_copy1_ParamLimits

0x651d,	// (0x0003110c) slider_set_pane_g3_copy1

0x6531,	// (0x00031120) slider_set_pane_g4_copy1_ParamLimits

0x6531,	// (0x00031120) slider_set_pane_g4_copy1

0x6549,	// (0x00031138) slider_set_pane_g5_copy1_ParamLimits

0x6549,	// (0x00031138) slider_set_pane_g5_copy1

0x651d,	// (0x0003110c) slider_set_pane_g6_copy1_ParamLimits

0x651d,	// (0x0003110c) slider_set_pane_g6_copy1

0x7525,	// (0x00032114) slider_set_pane_g7_copy1_ParamLimits

0x7525,	// (0x00032114) slider_set_pane_g7_copy1

0x76ae,	// (0x0003229d) bg_set_opt_pane_cp2_copy1

0xf18b,	// (0x00039d7a) setting_slider_graphic_pane_g1_copy1

0xf194,	// (0x00039d83) setting_slider_graphic_pane_t1_copy1

0xf1a4,	// (0x00039d93) setting_slider_graphic_pane_t2_copy1

0xf1b4,	// (0x00039da3) slider_set_pane_cp_copy1

0xf1c4,	// (0x00039db3) input_focus_pane_cp1_copy1

0xf1cd,	// (0x00039dbc) list_set_text_pane_copy1

0xf1d5,	// (0x00039dc4) setting_text_pane_g1_copy1

0x4d65,	// (0x0002f954) set_text_pane_t1_copy1

0xf1c4,	// (0x00039db3) input_focus_pane_cp2_copy1

0xf1d5,	// (0x00039dc4) setting_code_pane_g1_copy1

0xf1de,	// (0x00039dcd) setting_code_pane_t1_copy1

0xf1ec,	// (0x00039ddb) list_set_graphic_pane_copy1

0x76ae,	// (0x0003229d) bg_set_opt_pane_cp4_copy1

0x913f,	// (0x00033d2e) list_set_graphic_pane_g1_copy1_ParamLimits

0x913f,	// (0x00033d2e) list_set_graphic_pane_g1_copy1

0xf1fe,	// (0x00039ded) list_set_graphic_pane_g2_copy1

0x9157,	// (0x00033d46) list_set_graphic_pane_t1_copy1_ParamLimits

0x9157,	// (0x00033d46) list_set_graphic_pane_t1_copy1

0xc2b2,	// (0x00036ea1) rs_clock_indi_pane_g1

0xf206,	// (0x00039df5) rs_clock_indi_pane_t1

0xf214,	// (0x00039e03) rs_indi_pane

0xf21c,	// (0x00039e0b) rs_indi_pane_g1

0xf225,	// (0x00039e14) rs_indi_pane_g2

0xf22e,	// (0x00039e1d) rs_indi_pane_g3

0x0002,

0xfeca,	// (0x0003aab9) rs_indi_pane_g

0x9444,	// (0x00034033) bg_popup_preview_window_pane_cp03

0xf237,	// (0x00039e26) popup_fep_tooltip_window_t1

0xcf2e,	// (0x00037b1d) popup_note2_window_g2_ParamLimits

0xcf2e,	// (0x00037b1d) popup_note2_window_g2

0x0001,

0xfc63,	// (0x0003a852) popup_note2_window_g_ParamLimits

0xfc63,	// (0x0003a852) popup_note2_window_g

0xd429,	// (0x00038018) bg_popup_sub_pane_cp11_ParamLimits

0xd436,	// (0x00038025) cell_ai3_links_pane_g1_ParamLimits

0xd44d,	// (0x0003803c) cell_ai3_links_pane_t1

0x4d65,	// (0x0002f954) set_text_pane_t1_copy1_ParamLimits

0x9355,	// (0x00033f44) cell_graphic_popup_pane_cp2_ParamLimits

0x9355,	// (0x00033f44) cell_graphic_popup_pane_cp2

0xf245,	// (0x00039e34) cell_graphic_popup_pane_g1_cp2

0x84f9,	// (0x000330e8) cell_graphic_popup_pane_g2_cp2

0xf24d,	// (0x00039e3c) cell_graphic_popup_pane_g3_cp2

0xf255,	// (0x00039e44) cell_graphic_popup_pane_t2_cp2

0x850a,	// (0x000330f9) grid_highlight_pane_cp3_cp2

0x8b4e,	// (0x0003373d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x87ae,	// (0x0003339d) main_tmo_pane_ParamLimits

0xd781,	// (0x00038370) popup_tmo_big_image_note_window

0xe911,	// (0x00039500) cell_ai5_widget_list_pane

0xe919,	// (0x00039508) cell_ai5_widget_lrg_icon_pane

0xee7c,	// (0x00039a6b) tmo_note_info_pane_t1_ParamLimits

0xee91,	// (0x00039a80) tmo_note_info_pane_t2_ParamLimits

0xeea6,	// (0x00039a95) tmo_note_info_pane_t3_ParamLimits

0xeebb,	// (0x00039aaa) tmo_note_info_pane_t4_ParamLimits

0xeecd,	// (0x00039abc) tmo_note_info_pane_t5_ParamLimits

0xfeb8,	// (0x0003aaa7) tmo_note_info_pane_t_ParamLimits

0xefeb,	// (0x00039bda) settings_container_pane_ParamLimits

0xf1bc,	// (0x00039dab) indicator_popup_pane_cp5

0xf1bc,	// (0x00039dab) indicator_popup_pane_cp6

0xf1ec,	// (0x00039ddb) list_set_graphic_pane_copy1_ParamLimits

0x769a,	// (0x00032289) bg_popup_window_pane_cp23

0xf263,	// (0x00039e52) popup_tmo_big_image_note_window_g1

0xf26d,	// (0x00039e5c) popup_tmo_big_image_note_window_t1

0xf27d,	// (0x00039e6c) popup_tmo_big_image_note_window_t2

0xf28d,	// (0x00039e7c) popup_tmo_big_image_note_window_t3

0x0002,

0xfed1,	// (0x0003aac0) popup_tmo_big_image_note_window_t

0xc2b2,	// (0x00036ea1) cell_ai5_widget_lrg_icon_pane_g1

0xf29d,	// (0x00039e8c) cell_ai5_widget_lrg_icon_pane_t1

0xf2ab,	// (0x00039e9a) cell_ai5_widget_list_row_pane_ParamLimits

0xf2ab,	// (0x00039e9a) cell_ai5_widget_list_row_pane

0xf2c2,	// (0x00039eb1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c2,	// (0x00039eb1) cell_ai5_widget_list_row_pane_g1

0xf2cf,	// (0x00039ebe) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cf,	// (0x00039ebe) cell_ai5_widget_list_row_pane_t1

0xf300,	// (0x00039eef) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf300,	// (0x00039eef) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed8,	// (0x0003aac7) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed8,	// (0x0003aac7) cell_ai5_widget_list_row_pane_t

0x4a7b,	// (0x0002f66a) main_fep_vtchi_ss_pane

0xf344,	// (0x00039f33) popup_fep_char_pre_window

0xf34c,	// (0x00039f3b) popup_fep_ituss_window

0xf36d,	// (0x00039f5c) popup_fep_vkbss_window

0xf38c,	// (0x00039f7b) grid_vkbss_keypad_pane_ParamLimits

0xf38c,	// (0x00039f7b) grid_vkbss_keypad_pane

0xf39c,	// (0x00039f8b) ituss_keypad_pane

0x7547,	// (0x00032136) aid_vkbss_key_offset_ParamLimits

0x7547,	// (0x00032136) aid_vkbss_key_offset

0x7553,	// (0x00032142) cell_vkbss_key_pane_ParamLimits

0x7553,	// (0x00032142) cell_vkbss_key_pane

0xf3ab,	// (0x00039f9a) bg_cell_vkbss_key_g1_ParamLimits

0xf3ab,	// (0x00039f9a) bg_cell_vkbss_key_g1

0xf3b7,	// (0x00039fa6) cell_vkbss_key_3p_pane_ParamLimits

0xf3b7,	// (0x00039fa6) cell_vkbss_key_3p_pane

0xf3d1,	// (0x00039fc0) cell_vkbss_key_g1_ParamLimits

0xf3d1,	// (0x00039fc0) cell_vkbss_key_g1

0xf3eb,	// (0x00039fda) cell_vkbss_key_t1_ParamLimits

0xf3eb,	// (0x00039fda) cell_vkbss_key_t1

0x7569,	// (0x00032158) cell_ituss_key_pane_ParamLimits

0x7569,	// (0x00032158) cell_ituss_key_pane

0xf416,	// (0x0003a005) bg_cell_ituss_key_g1_ParamLimits

0xf416,	// (0x0003a005) bg_cell_ituss_key_g1

0xf422,	// (0x0003a011) cell_ituss_key_pane_g1_ParamLimits

0xf422,	// (0x0003a011) cell_ituss_key_pane_g1

0x757a,	// (0x00032169) cell_ituss_key_pane_g2_ParamLimits

0x757a,	// (0x00032169) cell_ituss_key_pane_g2

0x0002,

0xfedf,	// (0x0003aace) cell_ituss_key_pane_g_ParamLimits

0xfedf,	// (0x0003aace) cell_ituss_key_pane_g

0x75a6,	// (0x00032195) cell_ituss_key_t1_ParamLimits

0x75a6,	// (0x00032195) cell_ituss_key_t1

0x75e0,	// (0x000321cf) cell_ituss_key_t2_ParamLimits

0x75e0,	// (0x000321cf) cell_ituss_key_t2

0x7611,	// (0x00032200) cell_ituss_key_t3_ParamLimits

0x7611,	// (0x00032200) cell_ituss_key_t3

0x75e0,	// (0x000321cf) cell_ituss_key_t4_ParamLimits

0x75e0,	// (0x000321cf) cell_ituss_key_t4

0x0004,

0xfee6,	// (0x0003aad5) cell_ituss_key_t_ParamLimits

0xfee6,	// (0x0003aad5) cell_ituss_key_t

0xf44e,	// (0x0003a03d) cell_vkbss_key_3p_pane_g1

0xf456,	// (0x0003a045) cell_vkbss_key_3p_pane_g2

0xf45e,	// (0x0003a04d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef1,	// (0x0003aae0) cell_vkbss_key_3p_pane_g

0x4a7b,	// (0x0002f66a) bg_popup_fep_char_preview_window_cp02

0x7654,	// (0x00032243) popup_fep_char_pre_window_t1

0xe8a3,	// (0x00039492) main_ai5_sk_pane

0xef47,	// (0x00039b36) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef53,	// (0x00039b42) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc950,	// (0x0003753f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef68,	// (0x00039b57) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec3,	// (0x0003aab2) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef74,	// (0x00039b63) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x87ae,	// (0x0003339d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf466,	// (0x0003a055) main_ai5_sk_pane_g1

0xa13e,	// (0x00034d2d) popup_query_code_window_g1

0xf362,	// (0x00039f51) popup_fep_vkb_icf_pane

0xf376,	// (0x00039f65) popup_fep_vtchi_icf_pane

0xf46f,	// (0x0003a05e) bg_icf_pane

0xf47b,	// (0x0003a06a) list_vkb_icf_pane

0xf487,	// (0x0003a076) bg_icf_pane_cp01

0xf49a,	// (0x0003a089) vtchi_icf_list_pane

0xf4aa,	// (0x0003a099) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x0003a099) list_vkb_icf_pane_t1

0xf4c0,	// (0x0003a0af) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x0003a0af) vtchi_icf_list_pane_t1

0xf34c,	// (0x00039f3b) popup_fep_ituss_window_ParamLimits

0xf376,	// (0x00039f65) popup_fep_vtchi_icf_pane_ParamLimits

0xf39c,	// (0x00039f8b) ituss_keypad_pane_ParamLimits

0x753b,	// (0x0003212a) ituss_sks_pane

0xf46f,	// (0x0003a05e) bg_icf_pane_ParamLimits

0xf328,	// (0x00039f17) icf_edit_indi_pane_ParamLimits

0xf328,	// (0x00039f17) icf_edit_indi_pane

0xf47b,	// (0x0003a06a) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x0003a076) bg_icf_pane_cp01_ParamLimits

0xf337,	// (0x00039f26) icf_edit_indi_pane_cp01_ParamLimits

0xf337,	// (0x00039f26) icf_edit_indi_pane_cp01

0xf4a2,	// (0x0003a091) vtchi_query_pane

0xc530,	// (0x0003711f) icf_edit_indi_pane_g1_ParamLimits

0xc530,	// (0x0003711f) icf_edit_indi_pane_g1

0xf531,	// (0x0003a120) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0003a120) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0003aaf8) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0003aaf8) icf_edit_indi_pane_g

0xf540,	// (0x0003a12f) icf_edit_indi_pane_t1

0xf4da,	// (0x0003a0c9) bg_input_focus_pane_cp042

0x86dd,	// (0x000332cc) vtchi_button_pane

0xf4e3,	// (0x0003a0d2) vtchi_query_pane_t1

0xf4f1,	// (0x0003a0e0) vtchi_query_pane_t2

0xf4ff,	// (0x0003a0ee) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0003aae7) vtchi_query_pane_t

0x4a7b,	// (0x0002f66a) bg_button_pane_cp13

0xf50d,	// (0x0003a0fc) vtchi_button_pane_g1

0x7663,	// (0x00032252) ituss_sks_pane_g1

0x766e,	// (0x0003225d) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0003aaee) ituss_sks_pane_g

0xf515,	// (0x0003a104) ituss_sks_pane_t1

0xf523,	// (0x0003a112) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0003aaf3) ituss_sks_pane_t

0xbd15,	// (0x00036904) indicator_nsta_pane_cp_g1

0xbd1e,	// (0x0003690d) indicator_nsta_pane_cp_g2

0xbd26,	// (0x00036915) indicator_nsta_pane_cp_g3

0xbd2e,	// (0x0003691d) indicator_nsta_pane_cp_g4

0xbd36,	// (0x00036925) indicator_nsta_pane_cp_g5

0xbd36,	// (0x00036925) indicator_nsta_pane_cp_g6

0x0005,

0xfaa1,	// (0x0003a690) indicator_nsta_pane_cp_g

0xe489,	// (0x00039078) cell_graphic2_pane_t2_ParamLimits

0xe489,	// (0x00039078) cell_graphic2_pane_t2

0x0001,

0xfdba,	// (0x0003a9a9) cell_graphic2_pane_t_ParamLimits

0xfdba,	// (0x0003a9a9) cell_graphic2_pane_t

0xe4b6,	// (0x000390a5) cell_graphic2_control_pane_t1

0x8ef2,	// (0x00033ae1) signal_pane_g3_ParamLimits

0x8ef2,	// (0x00033ae1) signal_pane_g3

0x8f04,	// (0x00033af3) signal_pane_g4_ParamLimits

0x8f04,	// (0x00033af3) signal_pane_g4

0xf312,	// (0x00039f01) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf312,	// (0x00039f01) cell_ai5_widget_list_row_pane_t3

0xf43c,	// (0x0003a02b) cell_ituss_key_pane_t1_ParamLimits

0xf43c,	// (0x0003a02b) cell_ituss_key_pane_t1

0x9d91,	// (0x00034980) form_field_data_wide_pane_vc_t2_ParamLimits

0x9d91,	// (0x00034980) form_field_data_wide_pane_vc_t2

0x9da5,	// (0x00034994) form_field_data_wide_pane_vc_t3_ParamLimits

0x9da5,	// (0x00034994) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0003a3f8) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0003a3f8) form_field_data_wide_pane_vc_t

0xb9dd,	// (0x000365cc) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9dd,	// (0x000365cc) form_field_slider_wide_pane_vc_t3

0xbabb,	// (0x000366aa) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbabb,	// (0x000366aa) form_field_popup_wide_pane_vc_t2

0xbad2,	// (0x000366c1) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbad2,	// (0x000366c1) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa90,	// (0x0003a67f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa90,	// (0x0003a67f) form_field_popup_wide_pane_vc_t

0x736b,	// (0x00031f5a) aid_fshwr2_btn_pane_ParamLimits

0x7377,	// (0x00031f66) aid_fshwr2_syb_pane_ParamLimits

0x7383,	// (0x00031f72) aid_fshwr2_txt_pane_ParamLimits

0x6bbb,	// (0x000317aa) fshwr2_bg_pane_ParamLimits

0x738f,	// (0x00031f7e) fshwr2_func_candi_pane_ParamLimits

0x73a4,	// (0x00031f93) fshwr2_hwr_syb_pane_ParamLimits

0x73b4,	// (0x00031fa3) fshwr2_icf_pane_ParamLimits

0x7c81,	// (0x00032870) list_double_graphic_pane_vc_g4_ParamLimits

0x7c81,	// (0x00032870) list_double_graphic_pane_vc_g4

0x759a,	// (0x00032189) cell_ituss_key_pane_g3_ParamLimits

0x759a,	// (0x00032189) cell_ituss_key_pane_g3

0x7642,	// (0x00032231) cell_ituss_key_t5_ParamLimits

0x7642,	// (0x00032231) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

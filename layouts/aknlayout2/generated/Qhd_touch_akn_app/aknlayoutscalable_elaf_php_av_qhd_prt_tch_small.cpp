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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001ac65 };

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
0x7e27,	// (0x00022a8c) Screen

0x7e3b,	// (0x00022aa0) application_window_ParamLimits

0x7e3b,	// (0x00022aa0) application_window

0x7e55,	// (0x00022aba) screen_g1

0x5b28,	// (0x0002078d) area_bottom_pane_ParamLimits

0x5b28,	// (0x0002078d) area_bottom_pane

0x5be8,	// (0x0002084d) area_top_pane_ParamLimits

0x5be8,	// (0x0002084d) area_top_pane

0x5c7c,	// (0x000208e1) main_pane_ParamLimits

0x5c7c,	// (0x000208e1) main_pane

0x7e5f,	// (0x00022ac4) misc_graphics

0x9818,	// (0x0002447d) battery_pane_ParamLimits

0x9818,	// (0x0002447d) battery_pane

0xa4ea,	// (0x0002514f) bg_status_flat_pane_g8

0xa4f2,	// (0x00025157) bg_status_flat_pane_g9

0x98da,	// (0x0002453f) context_pane_ParamLimits

0x98da,	// (0x0002453f) context_pane

0x99f0,	// (0x00024655) navi_pane_ParamLimits

0x99f0,	// (0x00024655) navi_pane

0x9a74,	// (0x000246d9) signal_pane_ParamLimits

0x9a74,	// (0x000246d9) signal_pane

0x0008,

0xf872,	// (0x0002a4d7) bg_status_flat_pane_g

0x9ae1,	// (0x00024746) status_pane_g1_ParamLimits

0x9ae1,	// (0x00024746) status_pane_g1

0x9af5,	// (0x0002475a) status_pane_g2_ParamLimits

0x9af5,	// (0x0002475a) status_pane_g2

0x9b01,	// (0x00024766) status_pane_g3_ParamLimits

0x9b01,	// (0x00024766) status_pane_g3

0x0004,

0xf7a0,	// (0x0002a405) status_pane_g_ParamLimits

0xf7a0,	// (0x0002a405) status_pane_g

0x9b35,	// (0x0002479a) title_pane_ParamLimits

0x9b35,	// (0x0002479a) title_pane

0x9b72,	// (0x000247d7) uni_indicator_pane_ParamLimits

0x9b72,	// (0x000247d7) uni_indicator_pane

0x973c,	// (0x000243a1) bg_list_pane_ParamLimits

0x973c,	// (0x000243a1) bg_list_pane

0x5146,	// (0x0001fdab) find_pane

0x975c,	// (0x000243c1) listscroll_app_pane_ParamLimits

0x975c,	// (0x000243c1) listscroll_app_pane

0x9768,	// (0x000243cd) listscroll_form_pane

0x514e,	// (0x0001fdb3) listscroll_gen_pane_ParamLimits

0x514e,	// (0x0001fdb3) listscroll_gen_pane

0x6547,	// (0x000211ac) listscroll_set_pane

0x8992,	// (0x000235f7) main_idle_act_pane

0x9444,	// (0x000240a9) main_idle_trad_pane

0x9444,	// (0x000240a9) main_list_empty_pane

0x9782,	// (0x000243e7) main_midp_pane

0x978e,	// (0x000243f3) main_pane_g1_ParamLimits

0x978e,	// (0x000243f3) main_pane_g1

0x654f,	// (0x000211b4) popup_ai_message_window_ParamLimits

0x654f,	// (0x000211b4) popup_ai_message_window

0x65f5,	// (0x0002125a) popup_fep_china_uni_window_ParamLimits

0x65f5,	// (0x0002125a) popup_fep_china_uni_window

0x6651,	// (0x000212b6) popup_fep_japan_candidate_window_ParamLimits

0x6651,	// (0x000212b6) popup_fep_japan_candidate_window

0x6671,	// (0x000212d6) popup_fep_japan_predictive_window_ParamLimits

0x6671,	// (0x000212d6) popup_fep_japan_predictive_window

0x66a1,	// (0x00021306) popup_find_window

0x66ae,	// (0x00021313) popup_grid_graphic_window_ParamLimits

0x66ae,	// (0x00021313) popup_grid_graphic_window

0x66d8,	// (0x0002133d) popup_large_graphic_colour_window

0x66fe,	// (0x00021363) popup_menu_window_ParamLimits

0x66fe,	// (0x00021363) popup_menu_window

0x68b6,	// (0x0002151b) popup_note_image_window

0x68a2,	// (0x00021507) popup_note_wait_window_ParamLimits

0x68a2,	// (0x00021507) popup_note_wait_window

0x68a2,	// (0x00021507) popup_note_window_ParamLimits

0x68a2,	// (0x00021507) popup_note_window

0x690c,	// (0x00021571) popup_query_code_window_ParamLimits

0x690c,	// (0x00021571) popup_query_code_window

0x6920,	// (0x00021585) popup_query_data_code_window_ParamLimits

0x6920,	// (0x00021585) popup_query_data_code_window

0x693d,	// (0x000215a2) popup_query_data_window_ParamLimits

0x693d,	// (0x000215a2) popup_query_data_window

0x6959,	// (0x000215be) popup_query_sat_info_window_ParamLimits

0x6959,	// (0x000215be) popup_query_sat_info_window

0x6992,	// (0x000215f7) popup_snote_single_graphic_window_ParamLimits

0x6992,	// (0x000215f7) popup_snote_single_graphic_window

0x6992,	// (0x000215f7) popup_snote_single_text_window_ParamLimits

0x6992,	// (0x000215f7) popup_snote_single_text_window

0x69a7,	// (0x0002160c) popup_sub_window_general

0x6ad7,	// (0x0002173c) popup_window_general_ParamLimits

0x6ad7,	// (0x0002173c) popup_window_general

0x979c,	// (0x00024401) power_save_pane

0x63e3,	// (0x00021048) control_pane_g1_ParamLimits

0x63e3,	// (0x00021048) control_pane_g1

0x640a,	// (0x0002106f) control_pane_g2_ParamLimits

0x640a,	// (0x0002106f) control_pane_g2

0x96ff,	// (0x00024364) control_pane_g3_ParamLimits

0x96ff,	// (0x00024364) control_pane_g3

0x0007,

0xf788,	// (0x0002a3ed) control_pane_g_ParamLimits

0xf788,	// (0x0002a3ed) control_pane_g

0x6454,	// (0x000210b9) control_pane_t1_ParamLimits

0x6454,	// (0x000210b9) control_pane_t1

0x64a0,	// (0x00021105) control_pane_t2_ParamLimits

0x64a0,	// (0x00021105) control_pane_t2

0x0002,

0xf799,	// (0x0002a3fe) control_pane_t_ParamLimits

0xf799,	// (0x0002a3fe) control_pane_t

0x9624,	// (0x00024289) navi_navi_volume_pane_cp1

0x962c,	// (0x00024291) status_small_icon_pane

0x9634,	// (0x00024299) status_small_pane_g1_ParamLimits

0x9634,	// (0x00024299) status_small_pane_g1

0x9668,	// (0x000242cd) status_small_pane_g2_ParamLimits

0x9668,	// (0x000242cd) status_small_pane_g2

0x9674,	// (0x000242d9) status_small_pane_g3_ParamLimits

0x9674,	// (0x000242d9) status_small_pane_g3

0x9680,	// (0x000242e5) status_small_pane_g4_ParamLimits

0x9680,	// (0x000242e5) status_small_pane_g4

0x968c,	// (0x000242f1) status_small_pane_g5_ParamLimits

0x968c,	// (0x000242f1) status_small_pane_g5

0x969a,	// (0x000242ff) status_small_pane_g6_ParamLimits

0x969a,	// (0x000242ff) status_small_pane_g6

0x0007,

0xf777,	// (0x0002a3dc) status_small_pane_g_ParamLimits

0xf777,	// (0x0002a3dc) status_small_pane_g

0x96c9,	// (0x0002432e) status_small_pane_t1

0x96eb,	// (0x00024350) status_small_wait_pane_ParamLimits

0x96eb,	// (0x00024350) status_small_wait_pane

0x8eb6,	// (0x00023b1b) aid_levels_signal_ParamLimits

0x8eb6,	// (0x00023b1b) aid_levels_signal

0x8ec8,	// (0x00023b2d) signal_pane_g1_ParamLimits

0x8ec8,	// (0x00023b2d) signal_pane_g1

0x8edd,	// (0x00023b42) signal_pane_g2_ParamLimits

0x8edd,	// (0x00023b42) signal_pane_g2

0x0003,

0xf708,	// (0x0002a36d) signal_pane_g_ParamLimits

0xf708,	// (0x0002a36d) signal_pane_g

0x8f18,	// (0x00023b7d) context_pane_g1

0x7e69,	// (0x00022ace) title_pane_g1

0x7e9f,	// (0x00022b04) title_pane_t1

0x7f07,	// (0x00022b6c) title_pane_t2

0x7f2d,	// (0x00022b92) title_pane_t3

0x0002,

0xf557,	// (0x0002a1bc) title_pane_t

0x9b8a,	// (0x000247ef) aid_levels_battery_ParamLimits

0x9b8a,	// (0x000247ef) aid_levels_battery

0x9b9e,	// (0x00024803) battery_pane_g1_ParamLimits

0x9b9e,	// (0x00024803) battery_pane_g1

0x9bb4,	// (0x00024819) battery_pane_g2_ParamLimits

0x9bb4,	// (0x00024819) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002a410) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002a410) battery_pane_g

0xae20,	// (0x00025a85) uni_indicator_pane_g1

0xae36,	// (0x00025a9b) uni_indicator_pane_g2

0xae4c,	// (0x00025ab1) uni_indicator_pane_g3

0x0005,

0xf91a,	// (0x0002a57f) uni_indicator_pane_g

0x92b6,	// (0x00023f1b) navi_icon_pane_ParamLimits

0x92b6,	// (0x00023f1b) navi_icon_pane

0x91f4,	// (0x00023e59) navi_midp_pane

0x92d2,	// (0x00023f37) navi_navi_pane

0x92dc,	// (0x00023f41) navi_text_pane_ParamLimits

0x92dc,	// (0x00023f41) navi_text_pane

0x7e55,	// (0x00022aba) status_small_wait_pane_g1

0x835c,	// (0x00022fc1) status_small_wait_pane_g2

0x0001,

0xf915,	// (0x0002a57a) status_small_wait_pane_g

0xab45,	// (0x000257aa) navi_navi_icon_text_pane

0xab4d,	// (0x000257b2) navi_navi_pane_g1_ParamLimits

0xab4d,	// (0x000257b2) navi_navi_pane_g1

0xab5f,	// (0x000257c4) navi_navi_pane_g2_ParamLimits

0xab5f,	// (0x000257c4) navi_navi_pane_g2

0x0001,

0xf8e3,	// (0x0002a548) navi_navi_pane_g_ParamLimits

0xf8e3,	// (0x0002a548) navi_navi_pane_g

0xab71,	// (0x000257d6) navi_navi_tabs_pane

0xab7a,	// (0x000257df) navi_navi_text_pane

0xab45,	// (0x000257aa) navi_navi_volume_pane

0xab21,	// (0x00025786) navi_text_pane_t1

0xab15,	// (0x0002577a) navi_icon_pane_g1

0xaa68,	// (0x000256cd) navi_navi_text_pane_t1

0x6d61,	// (0x000219c6) navi_navi_volume_pane_g1

0x6d69,	// (0x000219ce) volume_small_pane

0xa9ce,	// (0x00025633) navi_navi_icon_text_pane_g1

0xa9d6,	// (0x0002563b) navi_navi_icon_text_pane_t1

0x92d2,	// (0x00023f37) navi_tabs_2_long_pane

0x92d2,	// (0x00023f37) navi_tabs_2_pane

0x92d2,	// (0x00023f37) navi_tabs_3_long_pane

0x92d2,	// (0x00023f37) navi_tabs_3_pane

0x92d2,	// (0x00023f37) navi_tabs_4_pane

0x6d41,	// (0x000219a6) tabs_2_active_pane_ParamLimits

0x6d41,	// (0x000219a6) tabs_2_active_pane

0x6d51,	// (0x000219b6) tabs_2_passive_pane_ParamLimits

0x6d51,	// (0x000219b6) tabs_2_passive_pane

0x6d0f,	// (0x00021974) tabs_3_active_pane_ParamLimits

0x6d0f,	// (0x00021974) tabs_3_active_pane

0x6d1f,	// (0x00021984) tabs_3_passive_pane_ParamLimits

0x6d1f,	// (0x00021984) tabs_3_passive_pane

0x6d30,	// (0x00021995) tabs_3_passive_pane_cp_ParamLimits

0x6d30,	// (0x00021995) tabs_3_passive_pane_cp

0x6ccb,	// (0x00021930) tabs_4_active_pane_ParamLimits

0x6ccb,	// (0x00021930) tabs_4_active_pane

0x6cdc,	// (0x00021941) tabs_4_passive_pane_ParamLimits

0x6cdc,	// (0x00021941) tabs_4_passive_pane

0x6ced,	// (0x00021952) tabs_4_passive_pane_cp_ParamLimits

0x6ced,	// (0x00021952) tabs_4_passive_pane_cp

0x6cfe,	// (0x00021963) tabs_4_passive_pane_cp2_ParamLimits

0x6cfe,	// (0x00021963) tabs_4_passive_pane_cp2

0x6ca7,	// (0x0002190c) tabs_2_long_active_pane_ParamLimits

0x6ca7,	// (0x0002190c) tabs_2_long_active_pane

0x6cb9,	// (0x0002191e) tabs_2_long_passive_pane_ParamLimits

0x6cb9,	// (0x0002191e) tabs_2_long_passive_pane

0x6c68,	// (0x000218cd) tabs_3_long_active_pane_ParamLimits

0x6c68,	// (0x000218cd) tabs_3_long_active_pane

0x6c7b,	// (0x000218e0) tabs_3_long_passive_pane_ParamLimits

0x6c7b,	// (0x000218e0) tabs_3_long_passive_pane

0x6c94,	// (0x000218f9) tabs_3_long_passive_pane_cp_ParamLimits

0x6c94,	// (0x000218f9) tabs_3_long_passive_pane_cp

0x6c0e,	// (0x00021873) volume_small_pane_g1

0x6c17,	// (0x0002187c) volume_small_pane_g2

0x6c20,	// (0x00021885) volume_small_pane_g3

0x6c29,	// (0x0002188e) volume_small_pane_g4

0x6c32,	// (0x00021897) volume_small_pane_g5

0x6c3b,	// (0x000218a0) volume_small_pane_g6

0x6c44,	// (0x000218a9) volume_small_pane_g7

0x6c4d,	// (0x000218b2) volume_small_pane_g8

0x6c56,	// (0x000218bb) volume_small_pane_g9

0x6c5f,	// (0x000218c4) volume_small_pane_g10

0x0009,

0xf8af,	// (0x0002a514) volume_small_pane_g

0x7f3f,	// (0x00022ba4) bg_active_tab_pane_cp2_ParamLimits

0x7f3f,	// (0x00022ba4) bg_active_tab_pane_cp2

0x7f4d,	// (0x00022bb2) tabs_3_active_pane_g1

0x7f55,	// (0x00022bba) tabs_3_active_pane_t1

0x7f3f,	// (0x00022ba4) bg_passive_tab_pane_cp2_ParamLimits

0x7f3f,	// (0x00022ba4) bg_passive_tab_pane_cp2

0x7f4d,	// (0x00022bb2) tabs_3_passive_pane_g1

0x7f55,	// (0x00022bba) tabs_3_passive_pane_t1

0x7f3f,	// (0x00022ba4) bg_active_tab_pane_cp3_ParamLimits

0x7f3f,	// (0x00022ba4) bg_active_tab_pane_cp3

0x7f67,	// (0x00022bcc) tabs_4_active_pane_g1

0x7f6f,	// (0x00022bd4) tabs_4_active_pane_t1

0x7f3f,	// (0x00022ba4) bg_passive_tab_pane_cp3_ParamLimits

0x7f3f,	// (0x00022ba4) bg_passive_tab_pane_cp3

0x7f67,	// (0x00022bcc) tabs_4_1_passive_pane_g1

0x7f6f,	// (0x00022bd4) tabs_4_1_passive_pane_t1

0x9782,	// (0x000243e7) list_highlight_pane_cp2

0xb094,	// (0x00025cf9) list_set_pane_ParamLimits

0xb094,	// (0x00025cf9) list_set_pane

0xb13a,	// (0x00025d9f) main_pane_set_t1_ParamLimits

0xb13a,	// (0x00025d9f) main_pane_set_t1

0xb15a,	// (0x00025dbf) main_pane_set_t2_ParamLimits

0xb15a,	// (0x00025dbf) main_pane_set_t2

0xb16e,	// (0x00025dd3) main_pane_set_t3_ParamLimits

0xb16e,	// (0x00025dd3) main_pane_set_t3

0xb180,	// (0x00025de5) main_pane_set_t4_ParamLimits

0xb180,	// (0x00025de5) main_pane_set_t4

0x0003,

0xf97f,	// (0x0002a5e4) main_pane_set_t_ParamLimits

0xf97f,	// (0x0002a5e4) main_pane_set_t

0xb192,	// (0x00025df7) setting_code_pane

0xb19e,	// (0x00025e03) setting_slider_graphic_pane

0xb19e,	// (0x00025e03) setting_slider_pane

0xb19e,	// (0x00025e03) setting_text_pane

0xb19e,	// (0x00025e03) setting_volume_pane

0x5ecb,	// (0x00020b30) volume_set_pane

0x7f3f,	// (0x00022ba4) bg_set_opt_pane_cp

0x5ed3,	// (0x00020b38) setting_slider_pane_t1

0x5eec,	// (0x00020b51) setting_slider_pane_t2

0x5f06,	// (0x00020b6b) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002a1c3) setting_slider_pane_t

0x5f1e,	// (0x00020b83) slider_set_pane

0x7e5f,	// (0x00022ac4) bg_set_opt_pane_cp2

0x7f81,	// (0x00022be6) setting_slider_graphic_pane_g1

0x5f34,	// (0x00020b99) setting_slider_graphic_pane_t1

0x5f44,	// (0x00020ba9) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002a1ca) setting_slider_graphic_pane_t

0x5f54,	// (0x00020bb9) slider_set_pane_cp

0x7e5f,	// (0x00022ac4) input_focus_pane_cp1

0xb053,	// (0x00025cb8) list_set_text_pane

0x7e55,	// (0x00022aba) setting_text_pane_g1

0x7e5f,	// (0x00022ac4) input_focus_pane_cp2

0x7e55,	// (0x00022aba) setting_code_pane_g1

0x7f8a,	// (0x00022bef) setting_code_pane_t1

0x4999,	// (0x0001f5fe) set_text_pane_t1_ParamLimits

0x4999,	// (0x0001f5fe) set_text_pane_t1

0x8809,	// (0x0002346e) set_opt_bg_pane_g1

0x8811,	// (0x00023476) set_opt_bg_pane_g2

0xb02d,	// (0x00025c92) set_opt_bg_pane_g3

0x8821,	// (0x00023486) set_opt_bg_pane_g4

0x8829,	// (0x0002348e) set_opt_bg_pane_g5

0x8831,	// (0x00023496) set_opt_bg_pane_g6

0xb037,	// (0x00025c9c) set_opt_bg_pane_g7

0xb03f,	// (0x00025ca4) set_opt_bg_pane_g8

0xb049,	// (0x00025cae) set_opt_bg_pane_g9

0x0008,

0xf96c,	// (0x0002a5d1) set_opt_bg_pane_g

0xb020,	// (0x00025c85) slider_set_pane_g1

0x6dd6,	// (0x00021a3b) slider_set_pane_g2

0x0006,

0xf95d,	// (0x0002a5c2) slider_set_pane_g

0x6d72,	// (0x000219d7) volume_set_pane_g1

0x6d7a,	// (0x000219df) volume_set_pane_g2

0x6d82,	// (0x000219e7) volume_set_pane_g3

0x6d8a,	// (0x000219ef) volume_set_pane_g4

0x6d92,	// (0x000219f7) volume_set_pane_g5

0x6d9a,	// (0x000219ff) volume_set_pane_g6

0x6da2,	// (0x00021a07) volume_set_pane_g7

0x6daa,	// (0x00021a0f) volume_set_pane_g8

0x6db2,	// (0x00021a17) volume_set_pane_g9

0x6dba,	// (0x00021a1f) volume_set_pane_g10

0x0009,

0xf935,	// (0x0002a59a) volume_set_pane_g

0x7f98,	// (0x00022bfd) indicator_pane_ParamLimits

0x7f98,	// (0x00022bfd) indicator_pane

0x7fa4,	// (0x00022c09) main_idle_pane_g2_ParamLimits

0x7fa4,	// (0x00022c09) main_idle_pane_g2

0x7fcc,	// (0x00022c31) main_pane_idle_g1_ParamLimits

0x7fcc,	// (0x00022c31) main_pane_idle_g1

0x7fd9,	// (0x00022c3e) popup_clock_digital_analogue_window_ParamLimits

0x7fd9,	// (0x00022c3e) popup_clock_digital_analogue_window

0x7ff0,	// (0x00022c55) soft_indicator_pane_ParamLimits

0x7ff0,	// (0x00022c55) soft_indicator_pane

0x7ffc,	// (0x00022c61) wallpaper_pane_ParamLimits

0x7ffc,	// (0x00022c61) wallpaper_pane

0x7e55,	// (0x00022aba) wallpaper_pane_g1

0x8010,	// (0x00022c75) indicator_pane_g1_ParamLimits

0x8010,	// (0x00022c75) indicator_pane_g1

0xb457,	// (0x000260bc) navi_navi_icon_text_pane_srt_g1

0x802b,	// (0x00022c90) soft_indicator_pane_t1

0x8045,	// (0x00022caa) aid_ps_area_pane

0x8056,	// (0x00022cbb) aid_ps_clock_pane

0x8064,	// (0x00022cc9) aid_ps_indicator_pane

0x8070,	// (0x00022cd5) indicator_ps_pane_ParamLimits

0x8070,	// (0x00022cd5) indicator_ps_pane

0x807f,	// (0x00022ce4) power_save_pane_g1_ParamLimits

0x807f,	// (0x00022ce4) power_save_pane_g1

0x808b,	// (0x00022cf0) power_save_pane_g2_ParamLimits

0x808b,	// (0x00022cf0) power_save_pane_g2

0x5adc,	// (0x00020741) aid_navinavi_width_pane

0x8045,	// (0x00022caa) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002a1cf) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002a1cf) power_save_pane_g

0x8099,	// (0x00022cfe) power_save_pane_t1_ParamLimits

0x8099,	// (0x00022cfe) power_save_pane_t1

0x8056,	// (0x00022cbb) aid_ps_clock_pane_ParamLimits

0x8064,	// (0x00022cc9) aid_ps_indicator_pane_ParamLimits

0x80ab,	// (0x00022d10) power_save_pane_t4_ParamLimits

0x80ab,	// (0x00022d10) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002a1d4) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002a1d4) power_save_pane_t

0x80d5,	// (0x00022d3a) power_save_t3_ParamLimits

0x80d5,	// (0x00022d3a) power_save_t3

0x80c0,	// (0x00022d25) power_save_t2_ParamLimits

0x80c0,	// (0x00022d25) power_save_t2

0x80ea,	// (0x00022d4f) indicator_ps_pane_g1

0x80f3,	// (0x00022d58) ai_gene_pane_ParamLimits

0x80f3,	// (0x00022d58) ai_gene_pane

0x80ff,	// (0x00022d64) ai_links_pane_ParamLimits

0x80ff,	// (0x00022d64) ai_links_pane

0x810b,	// (0x00022d70) indicator_pane_cp1_ParamLimits

0x810b,	// (0x00022d70) indicator_pane_cp1

0x8117,	// (0x00022d7c) main_pane_idle_g1_cp_ParamLimits

0x8117,	// (0x00022d7c) main_pane_idle_g1_cp

0x8123,	// (0x00022d88) popup_ai_links_title_window

0x812c,	// (0x00022d91) soft_indicator_pane_cp1_ParamLimits

0x812c,	// (0x00022d91) soft_indicator_pane_cp1

0xae0e,	// (0x00025a73) ai_links_pane_g1

0xae17,	// (0x00025a7c) grid_ai_links_pane

0xadf1,	// (0x00025a56) ai_gene_pane_1

0xadfc,	// (0x00025a61) ai_gene_pane_2

0xae05,	// (0x00025a6a) list_highlight_pane_cp4

0xadd5,	// (0x00025a3a) cell_ai_link_pane_ParamLimits

0xadd5,	// (0x00025a3a) cell_ai_link_pane

0xadcd,	// (0x00025a32) cell_ai_link_pane_g1

0x835c,	// (0x00022fc1) cell_ai_link_pane_g2

0x0001,

0xf910,	// (0x0002a575) cell_ai_link_pane_g

0x7e5f,	// (0x00022ac4) grid_highlight_cp2

0x7e5f,	// (0x00022ac4) bg_popup_sub_pane_cp1

0x8146,	// (0x00022dab) popup_ai_links_title_window_t1

0xad1b,	// (0x00025980) ai_gene_pane_1_g1_ParamLimits

0xad1b,	// (0x00025980) ai_gene_pane_1_g1

0xad27,	// (0x0002598c) ai_gene_pane_1_g2_ParamLimits

0xad27,	// (0x0002598c) ai_gene_pane_1_g2

0x0001,

0xf906,	// (0x0002a56b) ai_gene_pane_1_g_ParamLimits

0xf906,	// (0x0002a56b) ai_gene_pane_1_g

0xad34,	// (0x00025999) ai_gene_pane_1_t1_ParamLimits

0xad34,	// (0x00025999) ai_gene_pane_1_t1

0xad68,	// (0x000259cd) grid_ai_soft_ind_pane

0xad06,	// (0x0002596b) ai_gene_pane_2_t1_ParamLimits

0xad06,	// (0x0002596b) ai_gene_pane_2_t1

0x8155,	// (0x00022dba) main_pane_empty_t1_ParamLimits

0x8155,	// (0x00022dba) main_pane_empty_t1

0x816d,	// (0x00022dd2) main_pane_empty_t2_ParamLimits

0x816d,	// (0x00022dd2) main_pane_empty_t2

0x8182,	// (0x00022de7) main_pane_empty_t3_ParamLimits

0x8182,	// (0x00022de7) main_pane_empty_t3

0x8194,	// (0x00022df9) main_pane_empty_t4_ParamLimits

0x8194,	// (0x00022df9) main_pane_empty_t4

0x81a6,	// (0x00022e0b) main_pane_empty_t5_ParamLimits

0x81a6,	// (0x00022e0b) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002a1d9) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002a1d9) main_pane_empty_t

0x885a,	// (0x000234bf) bg_popup_window_pane_ParamLimits

0x885a,	// (0x000234bf) bg_popup_window_pane

0xaa76,	// (0x000256db) find_popup_pane_cp2_ParamLimits

0xaa76,	// (0x000256db) find_popup_pane_cp2

0xaa82,	// (0x000256e7) heading_pane_ParamLimits

0xaa82,	// (0x000256e7) heading_pane

0x7e5f,	// (0x00022ac4) bg_popup_sub_pane

0xa9f0,	// (0x00025655) bg_popup_window_pane_g1_ParamLimits

0xa9f0,	// (0x00025655) bg_popup_window_pane_g1

0xa9fc,	// (0x00025661) bg_popup_window_pane_g2_ParamLimits

0xa9fc,	// (0x00025661) bg_popup_window_pane_g2

0xaa08,	// (0x0002566d) bg_popup_window_pane_g3_ParamLimits

0xaa08,	// (0x0002566d) bg_popup_window_pane_g3

0xaa14,	// (0x00025679) bg_popup_window_pane_g4_ParamLimits

0xaa14,	// (0x00025679) bg_popup_window_pane_g4

0xaa20,	// (0x00025685) bg_popup_window_pane_g5_ParamLimits

0xaa20,	// (0x00025685) bg_popup_window_pane_g5

0xaa2c,	// (0x00025691) bg_popup_window_pane_g6_ParamLimits

0xaa2c,	// (0x00025691) bg_popup_window_pane_g6

0xaa38,	// (0x0002569d) bg_popup_window_pane_g7_ParamLimits

0xaa38,	// (0x0002569d) bg_popup_window_pane_g7

0xaa44,	// (0x000256a9) bg_popup_window_pane_g8_ParamLimits

0xaa44,	// (0x000256a9) bg_popup_window_pane_g8

0xaa50,	// (0x000256b5) bg_popup_window_pane_g9_ParamLimits

0xaa50,	// (0x000256b5) bg_popup_window_pane_g9

0xaa5c,	// (0x000256c1) bg_popup_window_pane_g10_ParamLimits

0xaa5c,	// (0x000256c1) bg_popup_window_pane_g10

0x0009,

0xf8ce,	// (0x0002a533) bg_popup_window_pane_g_ParamLimits

0xf8ce,	// (0x0002a533) bg_popup_window_pane_g

0xa985,	// (0x000255ea) bg_popup_heading_pane_ParamLimits

0xa985,	// (0x000255ea) bg_popup_heading_pane

0x6e5e,	// (0x00021ac3) tabs_4_passive_pane_cp_srt_ParamLimits

0x6e5e,	// (0x00021ac3) tabs_4_passive_pane_cp_srt

0x6e70,	// (0x00021ad5) tabs_4_passive_pane_srt_ParamLimits

0xa999,	// (0x000255fe) heading_pane_g2

0x6e70,	// (0x00021ad5) tabs_4_passive_pane_srt

0x9782,	// (0x000243e7) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9782,	// (0x000243e7) bg_passive_tab_pane_cp3_srt

0xa9a1,	// (0x00025606) heading_pane_t1_ParamLimits

0xa9a1,	// (0x00025606) heading_pane_t1

0xa9b8,	// (0x0002561d) heading_pane_t2_ParamLimits

0xa9b8,	// (0x0002561d) heading_pane_t2

0x0001,

0xf8c9,	// (0x0002a52e) heading_pane_t_ParamLimits

0xf8c9,	// (0x0002a52e) heading_pane_t

0xa4b2,	// (0x00025117) bg_popup_heading_pane_g1

0xa561,	// (0x000251c6) bg_popup_heading_pane_g2

0xa56b,	// (0x000251d0) bg_popup_heading_pane_g3

0xa575,	// (0x000251da) bg_popup_heading_pane_g4

0xa57f,	// (0x000251e4) bg_popup_heading_pane_g5

0xa589,	// (0x000251ee) bg_popup_heading_pane_g6

0xa591,	// (0x000251f6) bg_popup_heading_pane_g7

0xa599,	// (0x000251fe) bg_popup_heading_pane_g8

0xa5a3,	// (0x00025208) bg_popup_heading_pane_g9

0x0008,

0xf885,	// (0x0002a4ea) bg_popup_heading_pane_g

0x9c8c,	// (0x000248f1) bg_popup_sub_pane_g1

0x9c94,	// (0x000248f9) bg_popup_sub_pane_g2

0x9c9c,	// (0x00024901) bg_popup_sub_pane_g3

0x9ca4,	// (0x00024909) bg_popup_sub_pane_g4

0x9cac,	// (0x00024911) bg_popup_sub_pane_g5

0x9cb4,	// (0x00024919) bg_popup_sub_pane_g6

0x9cbc,	// (0x00024921) bg_popup_sub_pane_g7

0x9cc4,	// (0x00024929) bg_popup_sub_pane_g8

0x9ccc,	// (0x00024931) bg_popup_sub_pane_g9

0x0008,

0xf85f,	// (0x0002a4c4) bg_popup_sub_pane_g

0x81ba,	// (0x00022e1f) bg_popup_window_pane_cp5_ParamLimits

0x81ba,	// (0x00022e1f) bg_popup_window_pane_cp5

0x81d6,	// (0x00022e3b) popup_note_window_g1_ParamLimits

0x81d6,	// (0x00022e3b) popup_note_window_g1

0x81e2,	// (0x00022e47) popup_note_window_t1_ParamLimits

0x81e2,	// (0x00022e47) popup_note_window_t1

0x81f8,	// (0x00022e5d) popup_note_window_t2_ParamLimits

0x81f8,	// (0x00022e5d) popup_note_window_t2

0x820e,	// (0x00022e73) popup_note_window_t3_ParamLimits

0x820e,	// (0x00022e73) popup_note_window_t3

0x8224,	// (0x00022e89) popup_note_window_t4_ParamLimits

0x8224,	// (0x00022e89) popup_note_window_t4

0x824c,	// (0x00022eb1) popup_note_window_t5_ParamLimits

0x824c,	// (0x00022eb1) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002a1e4) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002a1e4) popup_note_window_t

0x8270,	// (0x00022ed5) bg_popup_window_pane_cp6_ParamLimits

0x8270,	// (0x00022ed5) bg_popup_window_pane_cp6

0xa42e,	// (0x00025093) popup_note_image_window_g1_ParamLimits

0xa42e,	// (0x00025093) popup_note_image_window_g1

0xa43a,	// (0x0002509f) popup_note_image_window_g2_ParamLimits

0xa43a,	// (0x0002509f) popup_note_image_window_g2

0x0001,

0xf853,	// (0x0002a4b8) popup_note_image_window_g_ParamLimits

0xf853,	// (0x0002a4b8) popup_note_image_window_g

0xa453,	// (0x000250b8) popup_note_image_window_t1_ParamLimits

0xa453,	// (0x000250b8) popup_note_image_window_t1

0xa46c,	// (0x000250d1) popup_note_image_window_t2_ParamLimits

0xa46c,	// (0x000250d1) popup_note_image_window_t2

0xa485,	// (0x000250ea) popup_note_image_window_t3_ParamLimits

0xa485,	// (0x000250ea) popup_note_image_window_t3

0x0002,

0xf858,	// (0x0002a4bd) popup_note_image_window_t_ParamLimits

0xf858,	// (0x0002a4bd) popup_note_image_window_t

0xa2ef,	// (0x00024f54) bg_popup_window_pane_cp7_ParamLimits

0xa2ef,	// (0x00024f54) bg_popup_window_pane_cp7

0xa31f,	// (0x00024f84) popup_note_wait_window_g1_ParamLimits

0xa31f,	// (0x00024f84) popup_note_wait_window_g1

0xa32b,	// (0x00024f90) popup_note_wait_window_g2_ParamLimits

0xa32b,	// (0x00024f90) popup_note_wait_window_g2

0x0002,

0xf841,	// (0x0002a4a6) popup_note_wait_window_g_ParamLimits

0xf841,	// (0x0002a4a6) popup_note_wait_window_g

0xa343,	// (0x00024fa8) popup_note_wait_window_t1_ParamLimits

0xa343,	// (0x00024fa8) popup_note_wait_window_t1

0xa36a,	// (0x00024fcf) popup_note_wait_window_t2_ParamLimits

0xa36a,	// (0x00024fcf) popup_note_wait_window_t2

0xa387,	// (0x00024fec) popup_note_wait_window_t3_ParamLimits

0xa387,	// (0x00024fec) popup_note_wait_window_t3

0xa39a,	// (0x00024fff) popup_note_wait_window_t4_ParamLimits

0xa39a,	// (0x00024fff) popup_note_wait_window_t4

0x0004,

0xf848,	// (0x0002a4ad) popup_note_wait_window_t_ParamLimits

0xf848,	// (0x0002a4ad) popup_note_wait_window_t

0xa3bf,	// (0x00025024) wait_bar_pane_ParamLimits

0xa3bf,	// (0x00025024) wait_bar_pane

0x7e5f,	// (0x00022ac4) wait_anim_pane

0x7e5f,	// (0x00022ac4) wait_border_pane

0x7e55,	// (0x00022aba) wait_anim_pane_g1

0x7e55,	// (0x00022aba) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002a368) wait_anim_pane_g

0xa293,	// (0x00024ef8) wait_border_pane_g1

0xa29e,	// (0x00024f03) wait_border_pane_g2

0xa2a7,	// (0x00024f0c) wait_border_pane_g3

0x0002,

0xf83a,	// (0x0002a49f) wait_border_pane_g

0xa0f2,	// (0x00024d57) bg_popup_window_pane_cp16_ParamLimits

0xa0f2,	// (0x00024d57) bg_popup_window_pane_cp16

0xa1fe,	// (0x00024e63) indicator_popup_pane_cp4_ParamLimits

0xa1fe,	// (0x00024e63) indicator_popup_pane_cp4

0xa212,	// (0x00024e77) popup_query_data_window_t1_ParamLimits

0xa212,	// (0x00024e77) popup_query_data_window_t1

0xa224,	// (0x00024e89) popup_query_data_window_t2_ParamLimits

0xa224,	// (0x00024e89) popup_query_data_window_t2

0xa23d,	// (0x00024ea2) popup_query_data_window_t3_ParamLimits

0xa23d,	// (0x00024ea2) popup_query_data_window_t3

0x0002,

0xf833,	// (0x0002a498) popup_query_data_window_t_ParamLimits

0xf833,	// (0x0002a498) popup_query_data_window_t

0xa257,	// (0x00024ebc) query_popup_data_pane_ParamLimits

0xa257,	// (0x00024ebc) query_popup_data_pane

0xa26b,	// (0x00024ed0) query_popup_data_pane_cp1_ParamLimits

0xa26b,	// (0x00024ed0) query_popup_data_pane_cp1

0xa0f2,	// (0x00024d57) bg_popup_window_pane_cp10_ParamLimits

0xa0f2,	// (0x00024d57) bg_popup_window_pane_cp10

0xa124,	// (0x00024d89) indicator_popup_pane_ParamLimits

0xa124,	// (0x00024d89) indicator_popup_pane

0xa152,	// (0x00024db7) popup_query_code_window_t1_ParamLimits

0xa152,	// (0x00024db7) popup_query_code_window_t1

0xa16c,	// (0x00024dd1) popup_query_code_window_t2_ParamLimits

0xa16c,	// (0x00024dd1) popup_query_code_window_t2

0xa1b5,	// (0x00024e1a) popup_query_code_window_t3_ParamLimits

0xa1b5,	// (0x00024e1a) popup_query_code_window_t3

0x0002,

0xf82c,	// (0x0002a491) popup_query_code_window_t_ParamLimits

0xf82c,	// (0x0002a491) popup_query_code_window_t

0xa1e4,	// (0x00024e49) query_popup_pane_ParamLimits

0xa1e4,	// (0x00024e49) query_popup_pane

0x8270,	// (0x00022ed5) bg_popup_window_pane_cp15_ParamLimits

0x8270,	// (0x00022ed5) bg_popup_window_pane_cp15

0x828e,	// (0x00022ef3) indicator_popup_pane_cp1_ParamLimits

0x828e,	// (0x00022ef3) indicator_popup_pane_cp1

0x82a1,	// (0x00022f06) indicator_popup_pane_cp2_ParamLimits

0x82a1,	// (0x00022f06) indicator_popup_pane_cp2

0x82b4,	// (0x00022f19) popup_query_data_code_window_g1_ParamLimits

0x82b4,	// (0x00022f19) popup_query_data_code_window_g1

0x82c7,	// (0x00022f2c) popup_query_data_code_window_t1_ParamLimits

0x82c7,	// (0x00022f2c) popup_query_data_code_window_t1

0x82d9,	// (0x00022f3e) popup_query_data_code_window_t2_ParamLimits

0x82d9,	// (0x00022f3e) popup_query_data_code_window_t2

0x82eb,	// (0x00022f50) popup_query_data_code_window_t3_ParamLimits

0x82eb,	// (0x00022f50) popup_query_data_code_window_t3

0x8301,	// (0x00022f66) popup_query_data_code_window_t4_ParamLimits

0x8301,	// (0x00022f66) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002a1ef) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002a1ef) popup_query_data_code_window_t

0x6b41,	// (0x000217a6) list_single_midp_graphic_pane_g3

0x8319,	// (0x00022f7e) query_popup_data_pane_cp2_ParamLimits

0x832c,	// (0x00022f91) query_popup_pane_cp2_ParamLimits

0x832c,	// (0x00022f91) query_popup_pane_cp2

0x7e5f,	// (0x00022ac4) bg_popup_window_pane_cp11

0xa0ea,	// (0x00024d4f) heading_pane_cp5

0x8417,	// (0x0002307c) listscroll_popup_info_pane

0x7e5f,	// (0x00022ac4) input_focus_pane_cp3

0x833f,	// (0x00022fa4) query_popup_pane_t1

0x834d,	// (0x00022fb2) list_popup_info_pane_ParamLimits

0x834d,	// (0x00022fb2) list_popup_info_pane

0x835c,	// (0x00022fc1) listscroll_popup_info_pane_g1

0x8364,	// (0x00022fc9) scroll_pane_cp7

0x836e,	// (0x00022fd3) popup_info_list_pane_t1_ParamLimits

0x836e,	// (0x00022fd3) popup_info_list_pane_t1

0x8388,	// (0x00022fed) popup_info_list_pane_t2_ParamLimits

0x8388,	// (0x00022fed) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002a1f8) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002a1f8) popup_info_list_pane_t

0x7e5f,	// (0x00022ac4) bg_popup_window_pane_cp12

0xb471,	// (0x000260d6) find_popup_pane

0x7f3f,	// (0x00022ba4) bg_popup_window_pane_cp3

0x83a2,	// (0x00023007) heading_pane_cp3

0x83ae,	// (0x00023013) listscroll_popup_graphic_pane

0x7e5f,	// (0x00022ac4) bg_popup_window_pane_cp4

0x840d,	// (0x00023072) heading_pane_cp4

0x8417,	// (0x0002307c) listscroll_popup_colour_pane

0x841f,	// (0x00023084) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x841f,	// (0x00023084) cell_large_graphic_colour_none_popup_pane

0x8433,	// (0x00023098) grid_large_graphic_colour_popup_pane_ParamLimits

0x8433,	// (0x00023098) grid_large_graphic_colour_popup_pane

0x845f,	// (0x000230c4) listscroll_popup_colour_pane_g1_ParamLimits

0x845f,	// (0x000230c4) listscroll_popup_colour_pane_g1

0x8476,	// (0x000230db) listscroll_popup_colour_pane_g2_ParamLimits

0x8476,	// (0x000230db) listscroll_popup_colour_pane_g2

0x848d,	// (0x000230f2) listscroll_popup_colour_pane_g3_ParamLimits

0x848d,	// (0x000230f2) listscroll_popup_colour_pane_g3

0x849d,	// (0x00023102) listscroll_popup_colour_pane_g4_ParamLimits

0x849d,	// (0x00023102) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002a1fd) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002a1fd) listscroll_popup_colour_pane_g

0x84b1,	// (0x00023116) scroll_pane_cp6_ParamLimits

0x84b1,	// (0x00023116) scroll_pane_cp6

0x84c3,	// (0x00023128) cell_large_graphic_colour_popup_pane_ParamLimits

0x84c3,	// (0x00023128) cell_large_graphic_colour_popup_pane

0x84e2,	// (0x00023147) cell_large_graphic_colour_none_popup_pane_t1

0x7e5f,	// (0x00022ac4) grid_highlight_pane_cp5

0x84f1,	// (0x00023156) cell_large_graphic_colour_popup_pane_g1

0x84f9,	// (0x0002315e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002a206) cell_large_graphic_colour_popup_pane_g

0x8501,	// (0x00023166) cell_large_graphic_colour_popup_pane_g2_copy1

0x850a,	// (0x0002316f) grid_highlight_pane_cp4

0x8512,	// (0x00023177) bg_popup_window_pane_cp8_ParamLimits

0x8512,	// (0x00023177) bg_popup_window_pane_cp8

0x852d,	// (0x00023192) popup_snote_single_text_window_g1_ParamLimits

0x852d,	// (0x00023192) popup_snote_single_text_window_g1

0x853f,	// (0x000231a4) popup_snote_single_text_window_t1_ParamLimits

0x853f,	// (0x000231a4) popup_snote_single_text_window_t1

0x8552,	// (0x000231b7) popup_snote_single_text_window_t2_ParamLimits

0x8552,	// (0x000231b7) popup_snote_single_text_window_t2

0x8565,	// (0x000231ca) popup_snote_single_text_window_t3_ParamLimits

0x8565,	// (0x000231ca) popup_snote_single_text_window_t3

0x859e,	// (0x00023203) popup_snote_single_text_window_t4_ParamLimits

0x859e,	// (0x00023203) popup_snote_single_text_window_t4

0x85d2,	// (0x00023237) popup_snote_single_text_window_t5_ParamLimits

0x85d2,	// (0x00023237) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002a20b) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002a20b) popup_snote_single_text_window_t

0x8601,	// (0x00023266) bg_popup_window_pane_cp9_ParamLimits

0x8601,	// (0x00023266) bg_popup_window_pane_cp9

0x852d,	// (0x00023192) popup_snote_single_graphic_window_g1_ParamLimits

0x852d,	// (0x00023192) popup_snote_single_graphic_window_g1

0x860f,	// (0x00023274) popup_snote_single_graphic_window_g2_ParamLimits

0x860f,	// (0x00023274) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002a216) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002a216) popup_snote_single_graphic_window_g

0x861b,	// (0x00023280) popup_snote_single_graphic_window_t1_ParamLimits

0x861b,	// (0x00023280) popup_snote_single_graphic_window_t1

0x862e,	// (0x00023293) popup_snote_single_graphic_window_t2_ParamLimits

0x862e,	// (0x00023293) popup_snote_single_graphic_window_t2

0x8641,	// (0x000232a6) popup_snote_single_graphic_window_t3_ParamLimits

0x8641,	// (0x000232a6) popup_snote_single_graphic_window_t3

0x867a,	// (0x000232df) popup_snote_single_graphic_window_t4_ParamLimits

0x867a,	// (0x000232df) popup_snote_single_graphic_window_t4

0x86ae,	// (0x00023313) popup_snote_single_graphic_window_t5_ParamLimits

0x86ae,	// (0x00023313) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002a21b) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002a21b) popup_snote_single_graphic_window_t

0xb3b5,	// (0x0002601a) grid_graphic_popup_pane_ParamLimits

0xb3b5,	// (0x0002601a) grid_graphic_popup_pane

0xb3dd,	// (0x00026042) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3dd,	// (0x00026042) listscroll_popup_graphic_pane_g1

0xb3f1,	// (0x00026056) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3f1,	// (0x00026056) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a9,	// (0x0002a60e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a9,	// (0x0002a60e) listscroll_popup_graphic_pane_g

0xb405,	// (0x0002606a) scroll_pane_cp5

0xb352,	// (0x00025fb7) cell_graphic_popup_pane_ParamLimits

0xb352,	// (0x00025fb7) cell_graphic_popup_pane

0xb333,	// (0x00025f98) cell_graphic_popup_pane_g1

0xb33b,	// (0x00025fa0) cell_graphic_popup_pane_g2

0x8501,	// (0x00023166) cell_graphic_popup_pane_g3

0x0002,

0xf9a2,	// (0x0002a607) cell_graphic_popup_pane_g

0xb344,	// (0x00025fa9) cell_graphic_popup_pane_t2

0x850a,	// (0x0002316f) grid_highlight_pane_cp3

0x86ef,	// (0x00023354) list_gen_pane_ParamLimits

0x86ef,	// (0x00023354) list_gen_pane

0x8721,	// (0x00023386) scroll_pane

0xb28b,	// (0x00025ef0) bg_list_pane_g1_ParamLimits

0xb28b,	// (0x00025ef0) bg_list_pane_g1

0xb2a8,	// (0x00025f0d) bg_list_pane_g2_ParamLimits

0xb2a8,	// (0x00025f0d) bg_list_pane_g2

0xb2bd,	// (0x00025f22) bg_list_pane_g3_ParamLimits

0xb2bd,	// (0x00025f22) bg_list_pane_g3

0xb2d1,	// (0x00025f36) bg_list_pane_g4_ParamLimits

0xb2d1,	// (0x00025f36) bg_list_pane_g4

0xb2e5,	// (0x00025f4a) bg_list_pane_g5_ParamLimits

0xb2e5,	// (0x00025f4a) bg_list_pane_g5

0x0004,

0xf997,	// (0x0002a5fc) bg_list_pane_g_ParamLimits

0xf997,	// (0x0002a5fc) bg_list_pane_g

0x5341,	// (0x0001ffa6) list_double2_graphic_large_graphic_pane_ParamLimits

0x5341,	// (0x0001ffa6) list_double2_graphic_large_graphic_pane

0x5341,	// (0x0001ffa6) list_double2_graphic_pane_ParamLimits

0x5341,	// (0x0001ffa6) list_double2_graphic_pane

0x5341,	// (0x0001ffa6) list_double2_large_graphic_pane_ParamLimits

0x5341,	// (0x0001ffa6) list_double2_large_graphic_pane

0x5341,	// (0x0001ffa6) list_double2_pane_ParamLimits

0x5341,	// (0x0001ffa6) list_double2_pane

0x5341,	// (0x0001ffa6) list_double_graphic_heading_pane_ParamLimits

0x5341,	// (0x0001ffa6) list_double_graphic_heading_pane

0x5341,	// (0x0001ffa6) list_double_graphic_pane_ParamLimits

0x5341,	// (0x0001ffa6) list_double_graphic_pane

0x5341,	// (0x0001ffa6) list_double_heading_pane_ParamLimits

0x5341,	// (0x0001ffa6) list_double_heading_pane

0x5341,	// (0x0001ffa6) list_double_large_graphic_pane_ParamLimits

0x5341,	// (0x0001ffa6) list_double_large_graphic_pane

0x5341,	// (0x0001ffa6) list_double_number_pane_ParamLimits

0x5341,	// (0x0001ffa6) list_double_number_pane

0x5341,	// (0x0001ffa6) list_double_pane_ParamLimits

0x5341,	// (0x0001ffa6) list_double_pane

0x5341,	// (0x0001ffa6) list_double_time_pane_ParamLimits

0x5341,	// (0x0001ffa6) list_double_time_pane

0x5341,	// (0x0001ffa6) list_setting_number_pane_ParamLimits

0x5341,	// (0x0001ffa6) list_setting_number_pane

0x5341,	// (0x0001ffa6) list_setting_pane_ParamLimits

0x5341,	// (0x0001ffa6) list_setting_pane

0x537c,	// (0x0001ffe1) list_single_2graphic_pane_ParamLimits

0x537c,	// (0x0001ffe1) list_single_2graphic_pane

0x537c,	// (0x0001ffe1) list_single_graphic_heading_pane_ParamLimits

0x537c,	// (0x0001ffe1) list_single_graphic_heading_pane

0x537c,	// (0x0001ffe1) list_single_graphic_pane_ParamLimits

0x537c,	// (0x0001ffe1) list_single_graphic_pane

0x537c,	// (0x0001ffe1) list_single_heading_pane_ParamLimits

0x537c,	// (0x0001ffe1) list_single_heading_pane

0x53bc,	// (0x00020021) list_single_large_graphic_pane_ParamLimits

0x53bc,	// (0x00020021) list_single_large_graphic_pane

0x537c,	// (0x0001ffe1) list_single_number_heading_pane_ParamLimits

0x537c,	// (0x0001ffe1) list_single_number_heading_pane

0x537c,	// (0x0001ffe1) list_single_number_pane_ParamLimits

0x537c,	// (0x0001ffe1) list_single_number_pane

0x537c,	// (0x0001ffe1) list_single_pane_ParamLimits

0x537c,	// (0x0001ffe1) list_single_pane

0x7e5f,	// (0x00022ac4) list_highlight_pane_cp1

0x49c0,	// (0x0001f625) list_single_pane_g1_ParamLimits

0x49c0,	// (0x0001f625) list_single_pane_g1

0x49cc,	// (0x0001f631) list_single_pane_g2_ParamLimits

0x49cc,	// (0x0001f631) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002a22d) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002a22d) list_single_pane_g

0x532b,	// (0x0001ff90) list_single_pane_t1_ParamLimits

0x532b,	// (0x0001ff90) list_single_pane_t1

0x49c0,	// (0x0001f625) list_single_number_pane_g1_ParamLimits

0x49c0,	// (0x0001f625) list_single_number_pane_g1

0x49cc,	// (0x0001f631) list_single_number_pane_g2_ParamLimits

0x49cc,	// (0x0001f631) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002a22d) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002a22d) list_single_number_pane_g

0x52d5,	// (0x0001ff3a) list_single_number_pane_t1_ParamLimits

0x52d5,	// (0x0001ff3a) list_single_number_pane_t1

0x52eb,	// (0x0001ff50) list_single_number_pane_t2_ParamLimits

0x52eb,	// (0x0001ff50) list_single_number_pane_t2

0x0001,

0xf958,	// (0x0002a5bd) list_single_number_pane_t_ParamLimits

0xf958,	// (0x0002a5bd) list_single_number_pane_t

0x49b4,	// (0x0001f619) list_single_graphic_pane_g1_ParamLimits

0x49b4,	// (0x0001f619) list_single_graphic_pane_g1

0x49c0,	// (0x0001f625) list_single_graphic_pane_g2_ParamLimits

0x49c0,	// (0x0001f625) list_single_graphic_pane_g2

0x49cc,	// (0x0001f631) list_single_graphic_pane_g3_ParamLimits

0x49cc,	// (0x0001f631) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002a226) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002a226) list_single_graphic_pane_g

0x49d8,	// (0x0001f63d) list_single_graphic_pane_t1_ParamLimits

0x49d8,	// (0x0001f63d) list_single_graphic_pane_t1

0x49c0,	// (0x0001f625) list_single_heading_pane_g1_ParamLimits

0x49c0,	// (0x0001f625) list_single_heading_pane_g1

0x49cc,	// (0x0001f631) list_single_heading_pane_g2_ParamLimits

0x49cc,	// (0x0001f631) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002a22d) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002a22d) list_single_heading_pane_g

0x49ee,	// (0x0001f653) list_single_heading_pane_t1_ParamLimits

0x49ee,	// (0x0001f653) list_single_heading_pane_t1

0x4a04,	// (0x0001f669) list_single_heading_pane_t2_ParamLimits

0x4a04,	// (0x0001f669) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002a232) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002a232) list_single_heading_pane_t

0x49c0,	// (0x0001f625) list_single_number_heading_pane_g1_ParamLimits

0x49c0,	// (0x0001f625) list_single_number_heading_pane_g1

0x49cc,	// (0x0001f631) list_single_number_heading_pane_g2_ParamLimits

0x49cc,	// (0x0001f631) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002a22d) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002a22d) list_single_number_heading_pane_g

0x49ee,	// (0x0001f653) list_single_number_heading_pane_t1_ParamLimits

0x49ee,	// (0x0001f653) list_single_number_heading_pane_t1

0x4a16,	// (0x0001f67b) list_single_number_heading_pane_t2_ParamLimits

0x4a16,	// (0x0001f67b) list_single_number_heading_pane_t2

0x4a28,	// (0x0001f68d) list_single_number_heading_pane_t3_ParamLimits

0x4a28,	// (0x0001f68d) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002a237) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002a237) list_single_number_heading_pane_t

0x4a3a,	// (0x0001f69f) list_single_graphic_heading_pane_g1_ParamLimits

0x4a3a,	// (0x0001f69f) list_single_graphic_heading_pane_g1

0x4a46,	// (0x0001f6ab) list_single_graphic_heading_pane_g4_ParamLimits

0x4a46,	// (0x0001f6ab) list_single_graphic_heading_pane_g4

0x49cc,	// (0x0001f631) list_single_graphic_heading_pane_g5_ParamLimits

0x49cc,	// (0x0001f631) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002a23e) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002a23e) list_single_graphic_heading_pane_g

0x49ee,	// (0x0001f653) list_single_graphic_heading_pane_t1_ParamLimits

0x49ee,	// (0x0001f653) list_single_graphic_heading_pane_t1

0x4a57,	// (0x0001f6bc) list_single_graphic_heading_pane_t2_ParamLimits

0x4a57,	// (0x0001f6bc) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002a245) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002a245) list_single_graphic_heading_pane_t

0x4a69,	// (0x0001f6ce) list_single_large_graphic_pane_g1_ParamLimits

0x4a69,	// (0x0001f6ce) list_single_large_graphic_pane_g1

0x4a75,	// (0x0001f6da) list_single_large_graphic_pane_g2_ParamLimits

0x4a75,	// (0x0001f6da) list_single_large_graphic_pane_g2

0x4a81,	// (0x0001f6e6) list_single_large_graphic_pane_g3_ParamLimits

0x4a81,	// (0x0001f6e6) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002a24a) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002a24a) list_single_large_graphic_pane_g

0xa29e,	// (0x00024f03) wait_border_pane_g2_copy1

0x4a8d,	// (0x0001f6f2) list_single_large_graphic_pane_g4_cp2

0x4a95,	// (0x0001f6fa) list_single_large_graphic_pane_t1_ParamLimits

0x4a95,	// (0x0001f6fa) list_single_large_graphic_pane_t1

0x4aab,	// (0x0001f710) list_double_pane_g1_ParamLimits

0x4aab,	// (0x0001f710) list_double_pane_g1

0x4ab7,	// (0x0001f71c) list_double_pane_g2_ParamLimits

0x4ab7,	// (0x0001f71c) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002a251) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002a251) list_double_pane_g

0x4ac3,	// (0x0001f728) list_double_pane_t1_ParamLimits

0x4ac3,	// (0x0001f728) list_double_pane_t1

0x4ad9,	// (0x0001f73e) list_double_pane_t2_ParamLimits

0x4ad9,	// (0x0001f73e) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002a256) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002a256) list_double_pane_t

0x4aeb,	// (0x0001f750) list_double2_pane_g1_ParamLimits

0x4aeb,	// (0x0001f750) list_double2_pane_g1

0x4afc,	// (0x0001f761) list_double2_pane_g2_ParamLimits

0x4afc,	// (0x0001f761) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002a25b) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002a25b) list_double2_pane_g

0x4b08,	// (0x0001f76d) list_double2_pane_t1_ParamLimits

0x4b08,	// (0x0001f76d) list_double2_pane_t1

0x4b1e,	// (0x0001f783) list_double2_pane_t2_ParamLimits

0x4b1e,	// (0x0001f783) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002a260) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002a260) list_double2_pane_t

0x4aab,	// (0x0001f710) list_double_number_pane_g1_ParamLimits

0x4aab,	// (0x0001f710) list_double_number_pane_g1

0x4ab7,	// (0x0001f71c) list_double_number_pane_g2_ParamLimits

0x4ab7,	// (0x0001f71c) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002a251) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002a251) list_double_number_pane_g

0x4b30,	// (0x0001f795) list_double_number_pane_t1_ParamLimits

0x4b30,	// (0x0001f795) list_double_number_pane_t1

0x4b42,	// (0x0001f7a7) list_double_number_pane_t2_ParamLimits

0x4b42,	// (0x0001f7a7) list_double_number_pane_t2

0x4b58,	// (0x0001f7bd) list_double_number_pane_t3_ParamLimits

0x4b58,	// (0x0001f7bd) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002a265) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002a265) list_double_number_pane_t

0x4b6a,	// (0x0001f7cf) list_double_graphic_pane_g1_ParamLimits

0x4b6a,	// (0x0001f7cf) list_double_graphic_pane_g1

0x4b76,	// (0x0001f7db) list_double_graphic_pane_g2_ParamLimits

0x4b76,	// (0x0001f7db) list_double_graphic_pane_g2

0x4b85,	// (0x0001f7ea) list_double_graphic_pane_g3_ParamLimits

0x4b85,	// (0x0001f7ea) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002a26c) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002a26c) list_double_graphic_pane_g

0x4b9d,	// (0x0001f802) list_double_graphic_pane_t1_ParamLimits

0x4b9d,	// (0x0001f802) list_double_graphic_pane_t1

0x4bb3,	// (0x0001f818) list_double_graphic_pane_t2_ParamLimits

0x4bb3,	// (0x0001f818) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002a275) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002a275) list_double_graphic_pane_t

0x4bc5,	// (0x0001f82a) list_double2_graphic_pane_g1_ParamLimits

0x4bc5,	// (0x0001f82a) list_double2_graphic_pane_g1

0x4bd1,	// (0x0001f836) list_double2_graphic_pane_g2_ParamLimits

0x4bd1,	// (0x0001f836) list_double2_graphic_pane_g2

0x4afc,	// (0x0001f761) list_double2_graphic_pane_g3_ParamLimits

0x4afc,	// (0x0001f761) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002a27a) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002a27a) list_double2_graphic_pane_g

0x4bdd,	// (0x0001f842) list_double2_graphic_pane_t1_ParamLimits

0x4bdd,	// (0x0001f842) list_double2_graphic_pane_t1

0x4bf3,	// (0x0001f858) list_double2_graphic_pane_t2_ParamLimits

0x4bf3,	// (0x0001f858) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002a281) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002a281) list_double2_graphic_pane_t

0x4c05,	// (0x0001f86a) list_double_large_graphic_pane_g1_ParamLimits

0x4c05,	// (0x0001f86a) list_double_large_graphic_pane_g1

0x4c18,	// (0x0001f87d) list_double_large_graphic_pane_g2_ParamLimits

0x4c18,	// (0x0001f87d) list_double_large_graphic_pane_g2

0x4ab7,	// (0x0001f71c) list_double_large_graphic_pane_g3_ParamLimits

0x4ab7,	// (0x0001f71c) list_double_large_graphic_pane_g3

0x4c29,	// (0x0001f88e) list_double_large_graphic_pane_g4_ParamLimits

0x4c29,	// (0x0001f88e) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002a286) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002a286) list_double_large_graphic_pane_g

0x4c50,	// (0x0001f8b5) list_double_large_graphic_pane_t1_ParamLimits

0x4c50,	// (0x0001f8b5) list_double_large_graphic_pane_t1

0x4c69,	// (0x0001f8ce) list_double_large_graphic_pane_t2_ParamLimits

0x4c69,	// (0x0001f8ce) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002a291) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002a291) list_double_large_graphic_pane_t

0x4c7b,	// (0x0001f8e0) list_double2_large_graphic_pane_g1_ParamLimits

0x4c7b,	// (0x0001f8e0) list_double2_large_graphic_pane_g1

0x4aeb,	// (0x0001f750) list_double2_large_graphic_pane_g2_ParamLimits

0x4aeb,	// (0x0001f750) list_double2_large_graphic_pane_g2

0x4afc,	// (0x0001f761) list_double2_large_graphic_pane_g3_ParamLimits

0x4afc,	// (0x0001f761) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002a296) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002a296) list_double2_large_graphic_pane_g

0x4c87,	// (0x0001f8ec) list_double2_large_graphic_pane_t1_ParamLimits

0x4c87,	// (0x0001f8ec) list_double2_large_graphic_pane_t1

0x4c9d,	// (0x0001f902) list_double2_large_graphic_pane_t2_ParamLimits

0x4c9d,	// (0x0001f902) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002a29d) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002a29d) list_double2_large_graphic_pane_t

0x4caf,	// (0x0001f914) list_double_heading_pane_g1_ParamLimits

0x4caf,	// (0x0001f914) list_double_heading_pane_g1

0x4cc0,	// (0x0001f925) list_double_heading_pane_g2_ParamLimits

0x4cc0,	// (0x0001f925) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002a2a2) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002a2a2) list_double_heading_pane_g

0x4ccc,	// (0x0001f931) list_double_heading_pane_t1_ParamLimits

0x4ccc,	// (0x0001f931) list_double_heading_pane_t1

0x4b1e,	// (0x0001f783) list_double_heading_pane_t2_ParamLimits

0x4b1e,	// (0x0001f783) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002a2a7) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002a2a7) list_double_heading_pane_t

0x4ce2,	// (0x0001f947) list_double_graphic_heading_pane_g1_ParamLimits

0x4ce2,	// (0x0001f947) list_double_graphic_heading_pane_g1

0x4caf,	// (0x0001f914) list_double_graphic_heading_pane_g2_ParamLimits

0x4caf,	// (0x0001f914) list_double_graphic_heading_pane_g2

0x4cc0,	// (0x0001f925) list_double_graphic_heading_pane_g3_ParamLimits

0x4cc0,	// (0x0001f925) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002a2ac) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002a2ac) list_double_graphic_heading_pane_g

0x4cee,	// (0x0001f953) list_double_graphic_heading_pane_t1_ParamLimits

0x4cee,	// (0x0001f953) list_double_graphic_heading_pane_t1

0x4bf3,	// (0x0001f858) list_double_graphic_heading_pane_t2_ParamLimits

0x4bf3,	// (0x0001f858) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002a2b3) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002a2b3) list_double_graphic_heading_pane_t

0x4c18,	// (0x0001f87d) list_double_time_pane_g1_ParamLimits

0x4c18,	// (0x0001f87d) list_double_time_pane_g1

0x4ab7,	// (0x0001f71c) list_double_time_pane_g2_ParamLimits

0x4ab7,	// (0x0001f71c) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002a2b8) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002a2b8) list_double_time_pane_g

0x4d04,	// (0x0001f969) list_double_time_pane_t1_ParamLimits

0x4d04,	// (0x0001f969) list_double_time_pane_t1

0x4d1a,	// (0x0001f97f) list_double_time_pane_t2_ParamLimits

0x4d1a,	// (0x0001f97f) list_double_time_pane_t2

0x4d2c,	// (0x0001f991) list_double_time_pane_t3_ParamLimits

0x4d2c,	// (0x0001f991) list_double_time_pane_t3

0x4d3e,	// (0x0001f9a3) list_double_time_pane_t4_ParamLimits

0x4d3e,	// (0x0001f9a3) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002a2bd) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002a2bd) list_double_time_pane_t

0x4bd1,	// (0x0001f836) list_setting_pane_g1_ParamLimits

0x4bd1,	// (0x0001f836) list_setting_pane_g1

0x4afc,	// (0x0001f761) list_setting_pane_g2_ParamLimits

0x4afc,	// (0x0001f761) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002a2c6) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002a2c6) list_setting_pane_g

0x4d50,	// (0x0001f9b5) list_setting_pane_t1_ParamLimits

0x4d50,	// (0x0001f9b5) list_setting_pane_t1

0x4d6a,	// (0x0001f9cf) list_setting_pane_t2_ParamLimits

0x4d6a,	// (0x0001f9cf) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002a2cb) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002a2cb) list_setting_pane_t

0x4da9,	// (0x0001fa0e) set_value_pane_cp_ParamLimits

0x4da9,	// (0x0001fa0e) set_value_pane_cp

0x4db5,	// (0x0001fa1a) list_setting_number_pane_g1_ParamLimits

0x4db5,	// (0x0001fa1a) list_setting_number_pane_g1

0x4dc1,	// (0x0001fa26) list_setting_number_pane_g2_ParamLimits

0x4dc1,	// (0x0001fa26) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002a2d2) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002a2d2) list_setting_number_pane_g

0x4dcd,	// (0x0001fa32) list_setting_number_pane_t1_ParamLimits

0x4dcd,	// (0x0001fa32) list_setting_number_pane_t1

0x4de6,	// (0x0001fa4b) list_setting_number_pane_t2_ParamLimits

0x4de6,	// (0x0001fa4b) list_setting_number_pane_t2

0x4e00,	// (0x0001fa65) list_setting_number_pane_t3_ParamLimits

0x4e00,	// (0x0001fa65) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002a2d7) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002a2d7) list_setting_number_pane_t

0x4da9,	// (0x0001fa0e) set_value_pane_ParamLimits

0x4da9,	// (0x0001fa0e) set_value_pane

0x8755,	// (0x000233ba) bg_set_opt_pane_ParamLimits

0x8755,	// (0x000233ba) bg_set_opt_pane

0x4e43,	// (0x0001faa8) set_value_pane_t1

0x8776,	// (0x000233db) slider_set_pane_cp3

0x877f,	// (0x000233e4) volume_small_pane_cp

0x8788,	// (0x000233ed) list_form_gen_pane

0x8791,	// (0x000233f6) scroll_pane_cp8

0x4e59,	// (0x0001fabe) form_field_data_pane_ParamLimits

0x4e59,	// (0x0001fabe) form_field_data_pane

0x4e79,	// (0x0001fade) form_field_data_wide_pane_ParamLimits

0x4e79,	// (0x0001fade) form_field_data_wide_pane

0x4e9a,	// (0x0001faff) form_field_popup_pane_ParamLimits

0x4e9a,	// (0x0001faff) form_field_popup_pane

0x4eba,	// (0x0001fb1f) form_field_popup_wide_pane_ParamLimits

0x4eba,	// (0x0001fb1f) form_field_popup_wide_pane

0x4ed7,	// (0x0001fb3c) form_field_slider_pane_ParamLimits

0x4ed7,	// (0x0001fb3c) form_field_slider_pane

0x4eea,	// (0x0001fb4f) form_field_slider_wide_pane_ParamLimits

0x4eea,	// (0x0001fb4f) form_field_slider_wide_pane

0x87a2,	// (0x00023407) data_form_pane

0x4f07,	// (0x0001fb6c) form_field_data_pane_t1

0x87ae,	// (0x00023413) input_focus_pane

0x4f1f,	// (0x0001fb84) data_form_wide_pane

0x4f3c,	// (0x0001fba1) form_field_data_wide_pane_t1

0x851f,	// (0x00023184) input_focus_pane_cp6

0x4f5e,	// (0x0001fbc3) form_field_popup_pane_t1

0x87ae,	// (0x00023413) input_focus_pane_cp7

0x87dc,	// (0x00023441) list_form_pane

0x4f7e,	// (0x0001fbe3) form_field_popup_wide_pane_t1

0x87ae,	// (0x00023413) input_focus_pane_cp8

0x87e8,	// (0x0002344d) list_form_wide_pane

0x4f9b,	// (0x0001fc00) form_field_slider_pane_t1_ParamLimits

0x4f9b,	// (0x0001fc00) form_field_slider_pane_t1

0x4fb1,	// (0x0001fc16) form_field_slider_pane_t2_ParamLimits

0x4fb1,	// (0x0001fc16) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002a2e7) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002a2e7) form_field_slider_pane_t

0x81ba,	// (0x00022e1f) input_focus_pane_cp9_ParamLimits

0x81ba,	// (0x00022e1f) input_focus_pane_cp9

0x4fc6,	// (0x0001fc2b) slider_cont_pane_ParamLimits

0x4fc6,	// (0x0001fc2b) slider_cont_pane

0x87f7,	// (0x0002345c) form_field_slider_wide_pane_t1_ParamLimits

0x87f7,	// (0x0002345c) form_field_slider_wide_pane_t1

0x4fda,	// (0x0001fc3f) form_field_slider_wide_pane_t2_ParamLimits

0x4fda,	// (0x0001fc3f) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002a2ec) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002a2ec) form_field_slider_wide_pane_t

0x81ba,	// (0x00022e1f) input_focus_pane_cp10_ParamLimits

0x81ba,	// (0x00022e1f) input_focus_pane_cp10

0x4fec,	// (0x0001fc51) slider_cont_pane_cp1_ParamLimits

0x4fec,	// (0x0001fc51) slider_cont_pane_cp1

0x5000,	// (0x0001fc65) slider_form_pane_cp

0x8809,	// (0x0002346e) input_focus_pane_g1

0x8811,	// (0x00023476) input_focus_pane_g2

0x8819,	// (0x0002347e) input_focus_pane_g3

0x8821,	// (0x00023486) input_focus_pane_g4

0x8829,	// (0x0002348e) input_focus_pane_g5

0x8831,	// (0x00023496) input_focus_pane_g6

0x8839,	// (0x0002349e) input_focus_pane_g7

0x8841,	// (0x000234a6) input_focus_pane_g8

0x8849,	// (0x000234ae) input_focus_pane_g9

0x7e55,	// (0x00022aba) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002a2f1) input_focus_pane_g

0xa2a7,	// (0x00024f0c) wait_border_pane_g3_copy1

0x5008,	// (0x0001fc6d) data_form_pane_t1

0x7e55,	// (0x00022aba) wait_anim_pane_g1_copy1

0x52fd,	// (0x0001ff62) data_form_wide_pane_t1

0x5023,	// (0x0001fc88) list_form_graphic_pane_cp_ParamLimits

0x5023,	// (0x0001fc88) list_form_graphic_pane_cp

0xb1c8,	// (0x00025e2d) slider_form_pane_g1

0xb1d1,	// (0x00025e36) slider_form_pane_g2

0x0006,

0xf988,	// (0x0002a5ed) slider_form_pane_g

0x503c,	// (0x0001fca1) list_form_graphic_pane_ParamLimits

0x503c,	// (0x0001fca1) list_form_graphic_pane

0x5058,	// (0x0001fcbd) list_form_graphic_pane_g1

0x5060,	// (0x0001fcc5) list_form_graphic_pane_t1_ParamLimits

0x5060,	// (0x0001fcc5) list_form_graphic_pane_t1

0x7f3f,	// (0x00022ba4) list_highlight_pane_cp5_ParamLimits

0x7f3f,	// (0x00022ba4) list_highlight_pane_cp5

0x5075,	// (0x0001fcda) find_pane_g1

0x8851,	// (0x000234b6) input_find_pane

0x507e,	// (0x0001fce3) input_find_pane_g1_ParamLimits

0x507e,	// (0x0001fce3) input_find_pane_g1

0x508a,	// (0x0001fcef) input_find_pane_t1_ParamLimits

0x508a,	// (0x0001fcef) input_find_pane_t1

0x509f,	// (0x0001fd04) input_find_pane_t2_ParamLimits

0x509f,	// (0x0001fd04) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002a306) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002a306) input_find_pane_t

0x885a,	// (0x000234bf) input_focus_pane_cp5_ParamLimits

0x885a,	// (0x000234bf) input_focus_pane_cp5

0x8874,	// (0x000234d9) bg_popup_window_pane_cp2_ParamLimits

0x8874,	// (0x000234d9) bg_popup_window_pane_cp2

0x8881,	// (0x000234e6) listscroll_menu_pane_ParamLimits

0x8881,	// (0x000234e6) listscroll_menu_pane

0x888d,	// (0x000234f2) popup_submenu_window_ParamLimits

0x888d,	// (0x000234f2) popup_submenu_window

0x88b9,	// (0x0002351e) find_popup_pane_g1

0x88c1,	// (0x00023526) input_popup_find_pane_cp

0x885a,	// (0x000234bf) input_focus_pane_cp4_ParamLimits

0x885a,	// (0x000234bf) input_focus_pane_cp4

0x88d7,	// (0x0002353c) input_popup_find_pane_t1_ParamLimits

0x88d7,	// (0x0002353c) input_popup_find_pane_t1

0x7e5f,	// (0x00022ac4) bg_popup_sub_pane_cp

0x8905,	// (0x0002356a) listscroll_popup_sub_pane

0x890d,	// (0x00023572) list_submenu_pane_ParamLimits

0x890d,	// (0x00023572) list_submenu_pane

0x891e,	// (0x00023583) scroll_pane_cp4

0x8926,	// (0x0002358b) list_single_popup_submenu_pane_ParamLimits

0x8926,	// (0x0002358b) list_single_popup_submenu_pane

0x893a,	// (0x0002359f) list_single_popup_submenu_pane_g1

0x8942,	// (0x000235a7) list_single_popup_submenu_pane_t1_ParamLimits

0x8942,	// (0x000235a7) list_single_popup_submenu_pane_t1

0x7f3f,	// (0x00022ba4) bg_active_tab_pane_cp1_ParamLimits

0x7f3f,	// (0x00022ba4) bg_active_tab_pane_cp1

0x8957,	// (0x000235bc) tabs_2_active_pane_g1

0x895f,	// (0x000235c4) tabs_2_active_pane_t1

0x7f3f,	// (0x00022ba4) bg_passive_tab_pane_cp1_ParamLimits

0x7f3f,	// (0x00022ba4) bg_passive_tab_pane_cp1

0x8957,	// (0x000235bc) tabs_2_passive_pane_g1

0x895f,	// (0x000235c4) tabs_2_passive_pane_t1

0x8971,	// (0x000235d6) bg_active_tab_pane_cp4

0x897f,	// (0x000235e4) tabs_2_long_active_pane_t1

0x8992,	// (0x000235f7) bg_passive_tab_pane_cp4

0x6b49,	// (0x000217ae) list_single_midp_graphic_pane_g4_ParamLimits

0x8971,	// (0x000235d6) bg_active_tab_pane_cp5

0x899e,	// (0x00023603) tabs_3_long_active_pane_t1

0x8992,	// (0x000235f7) bg_passive_tab_pane_cp5

0x6b49,	// (0x000217ae) list_single_midp_graphic_pane_g4

0x7f3f,	// (0x00022ba4) bg_popup_window_pane_cp13_ParamLimits

0x7f3f,	// (0x00022ba4) bg_popup_window_pane_cp13

0x89b9,	// (0x0002361e) listscroll_popup_fast_pane_ParamLimits

0x89b9,	// (0x0002361e) listscroll_popup_fast_pane

0x89c8,	// (0x0002362d) grid_popup_fast_pane_ParamLimits

0x89c8,	// (0x0002362d) grid_popup_fast_pane

0x89da,	// (0x0002363f) scroll_pane_cp9_ParamLimits

0x89da,	// (0x0002363f) scroll_pane_cp9

0xcae3,	// (0x00027748) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae3,	// (0x00027748) list_single_graphic_hl_pane_t1_cp2

0x89fe,	// (0x00023663) input_focus_pane_cp20_ParamLimits

0x89fe,	// (0x00023663) input_focus_pane_cp20

0x8a0c,	// (0x00023671) query_popup_data_pane_t1_ParamLimits

0x8a0c,	// (0x00023671) query_popup_data_pane_t1

0x8a1f,	// (0x00023684) query_popup_data_pane_t2_ParamLimits

0x8a1f,	// (0x00023684) query_popup_data_pane_t2

0x8a65,	// (0x000236ca) query_popup_data_pane_t3_ParamLimits

0x8a65,	// (0x000236ca) query_popup_data_pane_t3

0x8aa6,	// (0x0002370b) query_popup_data_pane_t4_ParamLimits

0x8aa6,	// (0x0002370b) query_popup_data_pane_t4

0x8ae2,	// (0x00023747) query_popup_data_pane_t5_ParamLimits

0x8ae2,	// (0x00023747) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002a30b) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002a30b) query_popup_data_pane_t

0x8809,	// (0x0002346e) bg_set_opt_pane_g1

0x8811,	// (0x00023476) bg_set_opt_pane_g2

0x8819,	// (0x0002347e) bg_set_opt_pane_g3

0x8821,	// (0x00023486) bg_set_opt_pane_g4

0x8829,	// (0x0002348e) bg_set_opt_pane_g5

0x8831,	// (0x00023496) bg_set_opt_pane_g6

0x8839,	// (0x0002349e) bg_set_opt_pane_g7

0x8841,	// (0x000234a6) bg_set_opt_pane_g8

0x8849,	// (0x000234ae) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002a316) bg_set_opt_pane_g

0x61f9,	// (0x00020e5e) control_top_pane_stacon_ParamLimits

0x61f9,	// (0x00020e5e) control_top_pane_stacon

0x624c,	// (0x00020eb1) signal_pane_stacon_ParamLimits

0x624c,	// (0x00020eb1) signal_pane_stacon

0x90d2,	// (0x00023d37) stacon_top_pane_g1_ParamLimits

0x90d2,	// (0x00023d37) stacon_top_pane_g1

0x6271,	// (0x00020ed6) title_pane_stacon_ParamLimits

0x6271,	// (0x00020ed6) title_pane_stacon

0x629b,	// (0x00020f00) uni_indicator_pane_stacon_ParamLimits

0x629b,	// (0x00020f00) uni_indicator_pane_stacon

0x62b0,	// (0x00020f15) battery_pane_stacon_ParamLimits

0x62b0,	// (0x00020f15) battery_pane_stacon

0x62f4,	// (0x00020f59) control_bottom_pane_stacon_ParamLimits

0x62f4,	// (0x00020f59) control_bottom_pane_stacon

0x6317,	// (0x00020f7c) navi_pane_stacon_ParamLimits

0x6317,	// (0x00020f7c) navi_pane_stacon

0x90f4,	// (0x00023d59) stacon_bottom_pane_g1_ParamLimits

0x90f4,	// (0x00023d59) stacon_bottom_pane_g1

0x5f5c,	// (0x00020bc1) aid_levels_signal_lsc_ParamLimits

0x5f5c,	// (0x00020bc1) aid_levels_signal_lsc

0x5f72,	// (0x00020bd7) signal_pane_stacon_g1_ParamLimits

0x5f72,	// (0x00020bd7) signal_pane_stacon_g1

0x5f86,	// (0x00020beb) signal_pane_stacon_g2_ParamLimits

0x5f86,	// (0x00020beb) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002a329) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002a329) signal_pane_stacon_g

0x5fbb,	// (0x00020c20) title_pane_stacon_t1_ParamLimits

0x5fbb,	// (0x00020c20) title_pane_stacon_t1

0x8b26,	// (0x0002378b) uni_indicator_pane_stacon_g1

0x8b30,	// (0x00023795) uni_indicator_pane_stacon_g2

0x8b3a,	// (0x0002379f) uni_indicator_pane_stacon_g3

0x8b44,	// (0x000237a9) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002a335) uni_indicator_pane_stacon_g

0x5fe0,	// (0x00020c45) control_top_pane_stacon_g1

0x5fe8,	// (0x00020c4d) control_top_pane_stacon_t1_ParamLimits

0x5fe8,	// (0x00020c4d) control_top_pane_stacon_t1

0x601f,	// (0x00020c84) aid_levels_battery_lsc_ParamLimits

0x601f,	// (0x00020c84) aid_levels_battery_lsc

0x6036,	// (0x00020c9b) battery_pane_stacon_g1_ParamLimits

0x6036,	// (0x00020c9b) battery_pane_stacon_g1

0x6049,	// (0x00020cae) battery_pane_stacon_g2_ParamLimits

0x6049,	// (0x00020cae) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002a33e) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002a33e) battery_pane_stacon_g

0x6087,	// (0x00020cec) navi_icon_pane_stacon

0x609b,	// (0x00020d00) navi_navi_pane_stacon

0x6087,	// (0x00020cec) navi_text_pane_stacon

0x5fe0,	// (0x00020c45) control_bottom_pane_stacon_g1

0x60af,	// (0x00020d14) control_bottom_pane_stacon_t1_ParamLimits

0x60af,	// (0x00020d14) control_bottom_pane_stacon_t1

0x8b68,	// (0x000237cd) grid_app_pane_ParamLimits

0x8b68,	// (0x000237cd) grid_app_pane

0x8b8c,	// (0x000237f1) scroll_pane_cp15_ParamLimits

0x8b8c,	// (0x000237f1) scroll_pane_cp15

0x8b9f,	// (0x00023804) cell_app_pane_ParamLimits

0x8b9f,	// (0x00023804) cell_app_pane

0x8bc3,	// (0x00023828) cell_app_pane_g1_ParamLimits

0x8bc3,	// (0x00023828) cell_app_pane_g1

0x8be7,	// (0x0002384c) cell_app_pane_g2_ParamLimits

0x8be7,	// (0x0002384c) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002a343) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002a343) cell_app_pane_g

0x8bf3,	// (0x00023858) cell_app_pane_t1_ParamLimits

0x8bf3,	// (0x00023858) cell_app_pane_t1

0x8c0a,	// (0x0002386f) grid_highlight_pane_ParamLimits

0x8c0a,	// (0x0002386f) grid_highlight_pane

0x8809,	// (0x0002346e) cell_highlight_pane_g1

0x8811,	// (0x00023476) cell_highlight_pane_g2

0x8819,	// (0x0002347e) cell_highlight_pane_g3

0x8821,	// (0x00023486) cell_highlight_pane_g4

0x8829,	// (0x0002348e) cell_highlight_pane_g5

0x8831,	// (0x00023496) cell_highlight_pane_g6

0x8839,	// (0x0002349e) cell_highlight_pane_g7

0x8841,	// (0x000234a6) cell_highlight_pane_g8

0x8849,	// (0x000234ae) cell_highlight_pane_g9

0x7e55,	// (0x00022aba) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002a2f1) cell_highlight_pane_g

0x8c1b,	// (0x00023880) bg_scroll_pane

0x60f9,	// (0x00020d5e) scroll_handle_pane

0x8c62,	// (0x000238c7) scroll_bg_pane_g1

0x8c77,	// (0x000238dc) scroll_bg_pane_g2

0x8c8f,	// (0x000238f4) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002a348) scroll_bg_pane_g

0x8ca4,	// (0x00023909) scroll_handle_focus_pane_ParamLimits

0x8ca4,	// (0x00023909) scroll_handle_focus_pane

0x8c62,	// (0x000238c7) scroll_handle_pane_g1

0x8cb1,	// (0x00023916) scroll_handle_pane_g2

0x8c8f,	// (0x000238f4) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002a34f) scroll_handle_pane_g

0x885a,	// (0x000234bf) bg_popup_sub_pane_cp21_ParamLimits

0x885a,	// (0x000234bf) bg_popup_sub_pane_cp21

0x8cc5,	// (0x0002392a) popup_fep_japan_predictive_window_t1_ParamLimits

0x8cc5,	// (0x0002392a) popup_fep_japan_predictive_window_t1

0x8cdf,	// (0x00023944) popup_fep_japan_predictive_window_t2_ParamLimits

0x8cdf,	// (0x00023944) popup_fep_japan_predictive_window_t2

0x8d12,	// (0x00023977) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d12,	// (0x00023977) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002a356) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002a356) popup_fep_japan_predictive_window_t

0x7e5f,	// (0x00022ac4) bg_popup_sub_pane_cp23

0x8d49,	// (0x000239ae) listscroll_japin_cand_pane

0x8d51,	// (0x000239b6) popup_fep_japan_candidate_window_t1

0x8d5f,	// (0x000239c4) candidate_pane_ParamLimits

0x8d5f,	// (0x000239c4) candidate_pane

0x8d71,	// (0x000239d6) scroll_pane_cp30

0x8d79,	// (0x000239de) list_single_popup_jap_candidate_pane_ParamLimits

0x8d79,	// (0x000239de) list_single_popup_jap_candidate_pane

0x7e5f,	// (0x00022ac4) list_highlight_pane_cp30

0x8d8e,	// (0x000239f3) list_single_popup_jap_candidate_pane_t1

0x8d9d,	// (0x00023a02) level_1_signal

0x8daf,	// (0x00023a14) level_2_signal

0x8dc2,	// (0x00023a27) level_3_signal

0x8dd5,	// (0x00023a3a) level_4_signal

0x8de8,	// (0x00023a4d) level_5_signal

0x8dfb,	// (0x00023a60) level_6_signal

0x8e0e,	// (0x00023a73) level_7_signal

0x8d9d,	// (0x00023a02) level_1_battery

0x8daf,	// (0x00023a14) level_2_battery

0x8dc2,	// (0x00023a27) level_3_battery

0x8dd5,	// (0x00023a3a) level_4_battery

0x8de8,	// (0x00023a4d) level_5_battery

0x8dfb,	// (0x00023a60) level_6_battery

0x8e0e,	// (0x00023a73) level_7_battery

0x8e39,	// (0x00023a9e) list_menu_pane_ParamLimits

0x8e39,	// (0x00023a9e) list_menu_pane

0x8e4f,	// (0x00023ab4) scroll_pane_cp25_ParamLimits

0x8e4f,	// (0x00023ab4) scroll_pane_cp25

0x8e68,	// (0x00023acd) list_double2_graphic_pane_cp2_ParamLimits

0x8e68,	// (0x00023acd) list_double2_graphic_pane_cp2

0x8e68,	// (0x00023acd) list_double2_large_graphic_pane_cp2_ParamLimits

0x8e68,	// (0x00023acd) list_double2_large_graphic_pane_cp2

0x8e68,	// (0x00023acd) list_double2_pane_cp2_ParamLimits

0x8e68,	// (0x00023acd) list_double2_pane_cp2

0x8e68,	// (0x00023acd) list_double_graphic_pane_cp2_ParamLimits

0x8e68,	// (0x00023acd) list_double_graphic_pane_cp2

0x8e68,	// (0x00023acd) list_double_large_graphic_pane_cp2_ParamLimits

0x8e68,	// (0x00023acd) list_double_large_graphic_pane_cp2

0x8e68,	// (0x00023acd) list_double_number_pane_cp2_ParamLimits

0x8e68,	// (0x00023acd) list_double_number_pane_cp2

0x8e68,	// (0x00023acd) list_double_pane_cp2_ParamLimits

0x8e68,	// (0x00023acd) list_double_pane_cp2

0x8e8c,	// (0x00023af1) list_single_2graphic_pane_cp2_ParamLimits

0x8e8c,	// (0x00023af1) list_single_2graphic_pane_cp2

0x8e8c,	// (0x00023af1) list_single_graphic_heading_pane_cp2_ParamLimits

0x8e8c,	// (0x00023af1) list_single_graphic_heading_pane_cp2

0x8e8c,	// (0x00023af1) list_single_graphic_pane_cp2_ParamLimits

0x8e8c,	// (0x00023af1) list_single_graphic_pane_cp2

0x8e8c,	// (0x00023af1) list_single_heading_pane_cp2_ParamLimits

0x8e8c,	// (0x00023af1) list_single_heading_pane_cp2

0x8ea5,	// (0x00023b0a) list_single_large_graphic_pane_cp2_ParamLimits

0x8ea5,	// (0x00023b0a) list_single_large_graphic_pane_cp2

0x8e8c,	// (0x00023af1) list_single_number_heading_pane_cp2_ParamLimits

0x8e8c,	// (0x00023af1) list_single_number_heading_pane_cp2

0x8e8c,	// (0x00023af1) list_single_number_pane_cp2_ParamLimits

0x8e8c,	// (0x00023af1) list_single_number_pane_cp2

0x8e8c,	// (0x00023af1) list_single_pane_cp2_ParamLimits

0x8e8c,	// (0x00023af1) list_single_pane_cp2

0x8f21,	// (0x00023b86) bg_popup_sub_pane_cp22

0x61ab,	// (0x00020e10) popup_side_volume_key_window_g1

0x61d5,	// (0x00020e3a) popup_side_volume_key_window_t1

0x61f1,	// (0x00020e56) volume_small_pane_cp1

0x81ba,	// (0x00022e1f) bg_popup_sub_pane_cp24_ParamLimits

0x81ba,	// (0x00022e1f) bg_popup_sub_pane_cp24

0x8f37,	// (0x00023b9c) fep_china_uni_candidate_pane_ParamLimits

0x8f37,	// (0x00023b9c) fep_china_uni_candidate_pane

0x8f4b,	// (0x00023bb0) fep_china_uni_entry_pane

0x8f5b,	// (0x00023bc0) popup_fep_china_uni_window_g1

0x8f77,	// (0x00023bdc) fep_china_uni_entry_pane_g1

0x8f7f,	// (0x00023be4) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002a387) fep_china_uni_entry_pane_g

0x8f87,	// (0x00023bec) fep_entry_item_pane

0x8f91,	// (0x00023bf6) fep_candidate_item_pane

0x8f99,	// (0x00023bfe) fep_china_uni_candidate_pane_g1

0x8fa1,	// (0x00023c06) fep_china_uni_candidate_pane_g2

0x8fa9,	// (0x00023c0e) fep_china_uni_candidate_pane_g3

0x8fb1,	// (0x00023c16) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002a38c) fep_china_uni_candidate_pane_g

0x7e55,	// (0x00022aba) fep_entry_item_pane_g1

0x8fb9,	// (0x00023c1e) fep_entry_item_pane_t1_ParamLimits

0x8fb9,	// (0x00023c1e) fep_entry_item_pane_t1

0x8fcf,	// (0x00023c34) fep_candidate_item_pane_t1_ParamLimits

0x8fcf,	// (0x00023c34) fep_candidate_item_pane_t1

0x8fe4,	// (0x00023c49) fep_candidate_item_pane_t2_ParamLimits

0x8fe4,	// (0x00023c49) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002a395) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002a395) fep_candidate_item_pane_t

0x7f3f,	// (0x00022ba4) list_highlight_pane_cp31_ParamLimits

0x7f3f,	// (0x00022ba4) list_highlight_pane_cp31

0x8ff6,	// (0x00023c5b) level_1_signal_lsc

0x8fff,	// (0x00023c64) level_2_signal_lsc

0x9008,	// (0x00023c6d) level_3_signal_lsc

0x9011,	// (0x00023c76) level_4_signal_lsc

0x901a,	// (0x00023c7f) level_5_signal_lsc

0x9023,	// (0x00023c88) level_6_signal_lsc

0x902c,	// (0x00023c91) level_7_signal_lsc

0x902c,	// (0x00023c91) level_1_battery_lsc

0x9035,	// (0x00023c9a) level_2_battery_lsc

0x903e,	// (0x00023ca3) level_3_battery_lsc

0x9047,	// (0x00023cac) level_4_battery_lsc

0x9050,	// (0x00023cb5) level_5_battery_lsc

0x9059,	// (0x00023cbe) level_6_battery_lsc

0x8ff6,	// (0x00023c5b) level_7_battery_lsc

0x9062,	// (0x00023cc7) scroll_handle_focus_pane_g1

0x906b,	// (0x00023cd0) scroll_handle_focus_pane_g2

0x9074,	// (0x00023cd9) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002a39a) scroll_handle_focus_pane_g

0x50b4,	// (0x0001fd19) list_single_2graphic_pane_g1_ParamLimits

0x50b4,	// (0x0001fd19) list_single_2graphic_pane_g1

0x4a46,	// (0x0001f6ab) list_single_2graphic_pane_g2_ParamLimits

0x4a46,	// (0x0001f6ab) list_single_2graphic_pane_g2

0x49cc,	// (0x0001f631) list_single_2graphic_pane_g3_ParamLimits

0x49cc,	// (0x0001f631) list_single_2graphic_pane_g3

0x50c0,	// (0x0001fd25) list_single_2graphic_pane_g4_ParamLimits

0x50c0,	// (0x0001fd25) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002a3a1) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002a3a1) list_single_2graphic_pane_g

0x50cc,	// (0x0001fd31) list_single_2graphic_pane_t1_ParamLimits

0x50cc,	// (0x0001fd31) list_single_2graphic_pane_t1

0x50fa,	// (0x0001fd5f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x50fa,	// (0x0001fd5f) list_double2_graphic_large_graphic_pane_g1

0x4aeb,	// (0x0001f750) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4aeb,	// (0x0001f750) list_double2_graphic_large_graphic_pane_g2

0x4afc,	// (0x0001f761) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4afc,	// (0x0001f761) list_double2_graphic_large_graphic_pane_g3

0x510a,	// (0x0001fd6f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x510a,	// (0x0001fd6f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002a3aa) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002a3aa) list_double2_graphic_large_graphic_pane_g

0x5116,	// (0x0001fd7b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5116,	// (0x0001fd7b) list_double2_graphic_large_graphic_pane_t1

0x512c,	// (0x0001fd91) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x512c,	// (0x0001fd91) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002a3b3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002a3b3) list_double2_graphic_large_graphic_pane_t

0x91bc,	// (0x00023e21) popup_fast_swap_window_ParamLimits

0x91bc,	// (0x00023e21) popup_fast_swap_window

0x91d8,	// (0x00023e3d) popup_side_volume_key_window

0x91f4,	// (0x00023e59) stacon_top_pane

0x91fe,	// (0x00023e63) status_pane_ParamLimits

0x91fe,	// (0x00023e63) status_pane

0x920c,	// (0x00023e71) status_small_pane

0x7e5f,	// (0x00022ac4) control_pane

0x7e5f,	// (0x00022ac4) stacon_bottom_pane

0x8791,	// (0x000233f6) scroll_pane_cp121

0x8788,	// (0x000233ed) set_content_pane

0x907d,	// (0x00023ce2) bg_active_tab_pane_g1_cp1

0x9086,	// (0x00023ceb) bg_active_tab_pane_g2_cp1

0x908f,	// (0x00023cf4) bg_active_tab_pane_g3_cp1

0x907d,	// (0x00023ce2) bg_passive_tab_pane_g1_cp1

0x9086,	// (0x00023ceb) bg_passive_tab_pane_g2_cp1

0x908f,	// (0x00023cf4) bg_passive_tab_pane_g3_cp1

0x9098,	// (0x00023cfd) bg_active_tab_pane_g1_cp2

0x9086,	// (0x00023ceb) bg_active_tab_pane_g2_cp2

0x90a1,	// (0x00023d06) bg_active_tab_pane_g3_cp2

0x9098,	// (0x00023cfd) bg_passive_tab_pane_g1_cp2

0x9086,	// (0x00023ceb) bg_passive_tab_pane_g2_cp2

0x90a1,	// (0x00023d06) bg_passive_tab_pane_g3_cp2

0x90aa,	// (0x00023d0f) bg_active_tab_pane_g1_cp3

0x9086,	// (0x00023ceb) bg_active_tab_pane_g2_cp3

0x90b3,	// (0x00023d18) bg_active_tab_pane_g3_cp3

0x90aa,	// (0x00023d0f) bg_passive_tab_pane_g1_cp3

0x9086,	// (0x00023ceb) bg_passive_tab_pane_g2_cp3

0x90b3,	// (0x00023d18) bg_passive_tab_pane_g3_cp3

0x90bc,	// (0x00023d21) bg_active_tab_pane_g1_cp4

0x9086,	// (0x00023ceb) bg_active_tab_pane_g2_cp4

0x90c7,	// (0x00023d2c) bg_active_tab_pane_g3_cp4

0x90bc,	// (0x00023d21) bg_passive_tab_pane_g1_cp4

0x9086,	// (0x00023ceb) bg_passive_tab_pane_g2_cp4

0x90c7,	// (0x00023d2c) bg_passive_tab_pane_g3_cp4

0x9110,	// (0x00023d75) bg_active_tab_pane_g1_cp5

0x9086,	// (0x00023ceb) bg_active_tab_pane_g2_cp5

0x9119,	// (0x00023d7e) bg_active_tab_pane_g3_cp5

0x9110,	// (0x00023d75) bg_passive_tab_pane_g1_cp5

0x9086,	// (0x00023ceb) bg_passive_tab_pane_g2_cp5

0x9119,	// (0x00023d7e) bg_passive_tab_pane_g3_cp5

0x9122,	// (0x00023d87) list_set_graphic_pane_ParamLimits

0x9122,	// (0x00023d87) list_set_graphic_pane

0x7e5f,	// (0x00022ac4) bg_set_opt_pane_cp4

0x913f,	// (0x00023da4) list_set_graphic_pane_g1_ParamLimits

0x913f,	// (0x00023da4) list_set_graphic_pane_g1

0x914b,	// (0x00023db0) list_set_graphic_pane_g2_ParamLimits

0x914b,	// (0x00023db0) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002a3b8) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002a3b8) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0002a726) volume_small_pane_cp_g

0x916f,	// (0x00023dd4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x916f,	// (0x00023dd4) list_double2_large_graphic_pane_g1_cp2

0x917b,	// (0x00023de0) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x917b,	// (0x00023de0) list_double2_large_graphic_pane_g2_cp2

0x918c,	// (0x00023df1) list_double2_large_graphic_pane_g3_cp2

0x9194,	// (0x00023df9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9194,	// (0x00023df9) list_double2_large_graphic_pane_t1_cp2

0x91aa,	// (0x00023e0f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x91aa,	// (0x00023e0f) list_double2_large_graphic_pane_t2_cp2

0xad7a,	// (0x000259df) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad7a,	// (0x000259df) list_double_large_graphic_pane_g1_cp2

0xad8b,	// (0x000259f0) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad8b,	// (0x000259f0) list_double_large_graphic_pane_g2_cp2

0x9325,	// (0x00023f8a) list_double_large_graphic_pane_g3_cp2

0xad9c,	// (0x00025a01) list_double_large_graphic_pane_g4_cp

0xada4,	// (0x00025a09) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xada4,	// (0x00025a09) list_double_large_graphic_pane_t1_cp2

0xadbb,	// (0x00025a20) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xadbb,	// (0x00025a20) list_double_large_graphic_pane_t2_cp2

0x9217,	// (0x00023e7c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9217,	// (0x00023e7c) list_double2_graphic_pane_g1_cp2

0x9225,	// (0x00023e8a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9225,	// (0x00023e8a) list_double2_graphic_pane_g2_cp2

0x9236,	// (0x00023e9b) list_double2_graphic_pane_g3_cp2

0x9240,	// (0x00023ea5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9240,	// (0x00023ea5) list_double2_graphic_pane_t1_cp2

0x9256,	// (0x00023ebb) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9256,	// (0x00023ebb) list_double2_graphic_pane_t2_cp2

0x9268,	// (0x00023ecd) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9268,	// (0x00023ecd) list_single_number_heading_pane_g1_cp2

0x9274,	// (0x00023ed9) list_single_number_heading_pane_g2_cp2

0x927c,	// (0x00023ee1) list_single_number_heading_pane_t1_cp2_ParamLimits

0x927c,	// (0x00023ee1) list_single_number_heading_pane_t1_cp2

0x9292,	// (0x00023ef7) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9292,	// (0x00023ef7) list_single_number_heading_pane_t2_cp2

0x92a4,	// (0x00023f09) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92a4,	// (0x00023f09) list_single_number_heading_pane_t3_cp2

0x9268,	// (0x00023ecd) list_single_heading_pane_g1_cp2_ParamLimits

0x9268,	// (0x00023ecd) list_single_heading_pane_g1_cp2

0x9274,	// (0x00023ed9) list_single_heading_pane_g2_cp2

0x927c,	// (0x00023ee1) list_single_heading_pane_t1_cp2_ParamLimits

0x927c,	// (0x00023ee1) list_single_heading_pane_t1_cp2

0xab82,	// (0x000257e7) list_single_heading_pane_t2_cp2_ParamLimits

0xab82,	// (0x000257e7) list_single_heading_pane_t2_cp2

0xaaca,	// (0x0002572f) list_double_graphic_pane_g1_cp2_ParamLimits

0xaaca,	// (0x0002572f) list_double_graphic_pane_g1_cp2

0xaad6,	// (0x0002573b) list_double_graphic_pane_g2_cp2_ParamLimits

0xaad6,	// (0x0002573b) list_double_graphic_pane_g2_cp2

0xaae5,	// (0x0002574a) list_double_graphic_pane_g3_cp2

0xaaed,	// (0x00025752) list_double_graphic_pane_t1_cp2_ParamLimits

0xaaed,	// (0x00025752) list_double_graphic_pane_t1_cp2

0xab03,	// (0x00025768) list_double_graphic_pane_t2_cp2_ParamLimits

0xab03,	// (0x00025768) list_double_graphic_pane_t2_cp2

0x9319,	// (0x00023f7e) list_double_number_pane_g1_cp2_ParamLimits

0x9319,	// (0x00023f7e) list_double_number_pane_g1_cp2

0x9325,	// (0x00023f8a) list_double_number_pane_g2_cp2

0xaa8e,	// (0x000256f3) list_double_number_pane_t1_cp2_ParamLimits

0xaa8e,	// (0x000256f3) list_double_number_pane_t1_cp2

0xaaa2,	// (0x00025707) list_double_number_pane_t2_cp2_ParamLimits

0xaaa2,	// (0x00025707) list_double_number_pane_t2_cp2

0xaab8,	// (0x0002571d) list_double_number_pane_t3_cp2_ParamLimits

0xaab8,	// (0x0002571d) list_double_number_pane_t3_cp2

0xa977,	// (0x000255dc) list_single_graphic_pane_g1_cp2_ParamLimits

0xa977,	// (0x000255dc) list_single_graphic_pane_g1_cp2

0x937d,	// (0x00023fe2) list_single_graphic_pane_g2_cp2_ParamLimits

0x937d,	// (0x00023fe2) list_single_graphic_pane_g2_cp2

0x9389,	// (0x00023fee) list_single_graphic_pane_g3_cp2

0xa94d,	// (0x000255b2) list_single_graphic_pane_t1_cp2_ParamLimits

0xa94d,	// (0x000255b2) list_single_graphic_pane_t1_cp2

0x937d,	// (0x00023fe2) list_single_number_pane_g1_cp2_ParamLimits

0x937d,	// (0x00023fe2) list_single_number_pane_g1_cp2

0x9389,	// (0x00023fee) list_single_number_pane_g2_cp2

0xa94d,	// (0x000255b2) list_single_number_pane_t1_cp2_ParamLimits

0xa94d,	// (0x000255b2) list_single_number_pane_t1_cp2

0xa963,	// (0x000255c8) list_single_number_pane_t2_cp2_ParamLimits

0xa963,	// (0x000255c8) list_single_number_pane_t2_cp2

0x917b,	// (0x00023de0) list_double2_pane_g1_cp2_ParamLimits

0x917b,	// (0x00023de0) list_double2_pane_g1_cp2

0x918c,	// (0x00023df1) list_double2_pane_g2_cp2

0x92f1,	// (0x00023f56) list_double2_pane_t1_cp2_ParamLimits

0x92f1,	// (0x00023f56) list_double2_pane_t1_cp2

0x9307,	// (0x00023f6c) list_double2_pane_t2_cp2_ParamLimits

0x9307,	// (0x00023f6c) list_double2_pane_t2_cp2

0x9319,	// (0x00023f7e) list_double_pane_g1_cp2_ParamLimits

0x9319,	// (0x00023f7e) list_double_pane_g1_cp2

0x9325,	// (0x00023f8a) list_double_pane_g2_cp2

0x932d,	// (0x00023f92) list_double_pane_t1_cp2_ParamLimits

0x932d,	// (0x00023f92) list_double_pane_t1_cp2

0x9343,	// (0x00023fa8) list_double_pane_t2_cp2_ParamLimits

0x9343,	// (0x00023fa8) list_double_pane_t2_cp2

0x936d,	// (0x00023fd2) list_single_pane_cp2_g3

0x937d,	// (0x00023fe2) list_single_pane_g1_cp2_ParamLimits

0x937d,	// (0x00023fe2) list_single_pane_g1_cp2

0x9389,	// (0x00023fee) list_single_pane_g2_cp2

0x9391,	// (0x00023ff6) list_single_pane_t1_cp2_ParamLimits

0x9391,	// (0x00023ff6) list_single_pane_t1_cp2

0x93a9,	// (0x0002400e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x93a9,	// (0x0002400e) list_single_large_graphic_pane_g1_cp2

0x93b5,	// (0x0002401a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x93b5,	// (0x0002401a) list_single_large_graphic_pane_g2_cp2

0x93c1,	// (0x00024026) list_single_large_graphic_pane_g3_cp2

0x93c9,	// (0x0002402e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x93c9,	// (0x0002402e) list_single_large_graphic_pane_g4_cp1

0x93e3,	// (0x00024048) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x93e3,	// (0x00024048) list_single_large_graphic_pane_t1_cp2

0xa919,	// (0x0002557e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa919,	// (0x0002557e) list_single_graphic_heading_pane_g1_cp2

0xa8e6,	// (0x0002554b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa8e6,	// (0x0002554b) list_single_graphic_heading_pane_g4_cp2

0x9389,	// (0x00023fee) list_single_graphic_heading_pane_g5_cp2

0xa925,	// (0x0002558a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa925,	// (0x0002558a) list_single_graphic_heading_pane_t1_cp2

0xa93b,	// (0x000255a0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa93b,	// (0x000255a0) list_single_graphic_heading_pane_t2_cp2

0xa8da,	// (0x0002553f) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa8da,	// (0x0002553f) list_single_2graphic_pane_g1_cp2

0xa8e6,	// (0x0002554b) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa8e6,	// (0x0002554b) list_single_2graphic_pane_g2_cp2

0x9389,	// (0x00023fee) list_single_2graphic_pane_g3_cp2

0xa8f7,	// (0x0002555c) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa8f7,	// (0x0002555c) list_single_2graphic_pane_g4_cp2

0xa903,	// (0x00025568) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa903,	// (0x00025568) list_single_2graphic_pane_t1_cp2

0x7e55,	// (0x00022aba) list_highlight_pane_g10_cp1

0xa4b2,	// (0x00025117) list_highlight_pane_g1_cp1

0xa4ba,	// (0x0002511f) list_highlight_pane_g2_cp1

0xa4c2,	// (0x00025127) list_highlight_pane_g3_cp1

0xa4ca,	// (0x0002512f) list_highlight_pane_g4_cp1

0xa4d2,	// (0x00025137) list_highlight_pane_g5_cp1

0xa4da,	// (0x0002513f) list_highlight_pane_g6_cp1

0xa4e2,	// (0x00025147) list_highlight_pane_g7_cp1

0xa4ea,	// (0x0002514f) list_highlight_pane_g8_cp1

0xa4f2,	// (0x00025157) list_highlight_pane_g9_cp1

0xa3d2,	// (0x00025037) form_field_slider_pane_t3

0xa3e0,	// (0x00025045) form_field_slider_pane_t4

0xa3ee,	// (0x00025053) slider_form_pane_ParamLimits

0xa3ee,	// (0x00025053) slider_form_pane

0x7e5f,	// (0x00022ac4) control_abbreviations

0x7e5f,	// (0x00022ac4) control_conventions

0x7e5f,	// (0x00022ac4) control_definitions

0x7e5f,	// (0x00022ac4) format_table_attribute

0xabcc,	// (0x00025831) bg_popup_preview_window_pane_g9

0x7e5f,	// (0x00022ac4) format_table_data2

0x7e5f,	// (0x00022ac4) format_table_data3

0x7e5f,	// (0x00022ac4) format_table_data_example

0x0008,

0x7e5f,	// (0x00022ac4) intro_purpose

0xf8e8,	// (0x0002a54d) bg_popup_preview_window_pane_g

0x7e5f,	// (0x00022ac4) texts_category

0x7e5f,	// (0x00022ac4) texts_graphics

0x93f9,	// (0x0002405e) text_digital

0x9408,	// (0x0002406d) text_primary

0x9417,	// (0x0002407c) text_primary_small

0x9426,	// (0x0002408b) text_secondary

0x9435,	// (0x0002409a) text_title

0xb307,	// (0x00025f6c) bg_passive_tab_pane_g1_cp3_srt

0x9086,	// (0x00023ceb) bg_passive_tab_pane_g2_cp3_srt

0xb310,	// (0x00025f75) bg_passive_tab_pane_g3_cp3_srt

0x7f3f,	// (0x00022ba4) bg_active_tab_pane_cp3_srt_ParamLimits

0x7f3f,	// (0x00022ba4) bg_active_tab_pane_cp3_srt

0xb319,	// (0x00025f7e) tabs_4_active_pane_srt_g1

0xb321,	// (0x00025f86) tabs_4_active_pane_srt_t1_ParamLimits

0xb321,	// (0x00025f86) tabs_4_active_pane_srt_t1

0xb307,	// (0x00025f6c) bg_active_tab_pane_g1_cp3_copy1

0x9086,	// (0x00023ceb) bg_active_tab_pane_g2_cp3_copy1

0xb310,	// (0x00025f75) bg_active_tab_pane_g3_cp3_copy1

0x7f3f,	// (0x00022ba4) tabs_2_long_active_pane_srt_ParamLimits

0x7f3f,	// (0x00022ba4) tabs_2_long_active_pane_srt

0x7f3f,	// (0x00022ba4) tabs_2_long_passive_pane_srt_ParamLimits

0x7f3f,	// (0x00022ba4) tabs_2_long_passive_pane_srt

0x8992,	// (0x000235f7) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8992,	// (0x000235f7) bg_passive_tab_pane_cp4_srt

0xaffb,	// (0x00025c60) bg_passive_tab_pane_g1_cp4_srt

0x9086,	// (0x00023ceb) bg_passive_tab_pane_g2_cp4_srt

0xb004,	// (0x00025c69) bg_passive_tab_pane_g3_cp4_srt

0x8971,	// (0x000235d6) bg_active_tab_pane_cp4_srt_ParamLimits

0x8971,	// (0x000235d6) bg_active_tab_pane_cp4_srt

0xb00d,	// (0x00025c72) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb00d,	// (0x00025c72) tabs_2_long_active_pane_srt_t1

0xaffb,	// (0x00025c60) bg_active_tab_pane_g1_cp4_srt

0x9086,	// (0x00023ceb) bg_active_tab_pane_g2_cp4_srt

0xb004,	// (0x00025c69) bg_active_tab_pane_g3_cp4_srt

0x81ba,	// (0x00022e1f) tabs_3_long_active_pane_srt_ParamLimits

0x81ba,	// (0x00022e1f) tabs_3_long_active_pane_srt

0x81ba,	// (0x00022e1f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x81ba,	// (0x00022e1f) tabs_3_long_passive_pane_cp_srt

0x81ba,	// (0x00022e1f) tabs_3_long_passive_pane_srt_ParamLimits

0x81ba,	// (0x00022e1f) tabs_3_long_passive_pane_srt

0x8992,	// (0x000235f7) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8992,	// (0x000235f7) bg_passive_tab_pane_cp5_srt

0x9110,	// (0x00023d75) bg_passive_tab_pane_g1_cp5_srt

0x9086,	// (0x00023ceb) bg_passive_tab_pane_g2_cp5_srt

0x9119,	// (0x00023d7e) bg_passive_tab_pane_g3_cp5_srt

0x8971,	// (0x000235d6) bg_active_tab_pane_cp5_srt_ParamLimits

0x8971,	// (0x000235d6) bg_active_tab_pane_cp5_srt

0xafe9,	// (0x00025c4e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xafe9,	// (0x00025c4e) tabs_3_long_active_pane_srt_t1

0x9110,	// (0x00023d75) bg_active_tab_pane_g1_cp5_srt

0x9086,	// (0x00023ceb) bg_active_tab_pane_g2_cp5_srt

0x9119,	// (0x00023d7e) bg_active_tab_pane_g3_cp5_srt

0xafdb,	// (0x00025c40) navi_text_pane_srt_t1

0xafd3,	// (0x00025c38) navi_icon_pane_srt_g1

0x95fe,	// (0x00024263) midp_editing_number_pane_srt

0x9444,	// (0x000240a9) midp_ticker_pane_srt

0x9606,	// (0x0002426b) midp_ticker_pane_srt_g1

0x960e,	// (0x00024273) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002a3d7) midp_ticker_pane_srt_g

0x9616,	// (0x0002427b) midp_ticker_pane_srt_t1

0xafc4,	// (0x00025c29) midp_editing_number_pane_t1_copy1

0x8992,	// (0x000235f7) listscroll_midp_pane

0x8992,	// (0x000235f7) midp_form_pane

0x94b0,	// (0x00024115) midp_info_popup_window_ParamLimits

0x94b0,	// (0x00024115) midp_info_popup_window

0x885a,	// (0x000234bf) bg_popup_sub_pane_cp50_ParamLimits

0x885a,	// (0x000234bf) bg_popup_sub_pane_cp50

0xa0de,	// (0x00024d43) listscroll_midp_info_pane_ParamLimits

0xa0de,	// (0x00024d43) listscroll_midp_info_pane

0xa0c6,	// (0x00024d2b) listscroll_form_midp_pane_ParamLimits

0xa0c6,	// (0x00024d2b) listscroll_form_midp_pane

0xa0d2,	// (0x00024d37) scroll_bar_cp050

0xa0a6,	// (0x00024d0b) list_midp_pane

0xbd5c,	// (0x000269c1) signal_pane_g2_cp

0x9fe0,	// (0x00024c45) listscroll_midp_info_pane_t1_ParamLimits

0x9fe0,	// (0x00024c45) listscroll_midp_info_pane_t1

0x9ff8,	// (0x00024c5d) listscroll_midp_info_pane_t2_ParamLimits

0x9ff8,	// (0x00024c5d) listscroll_midp_info_pane_t2

0xa036,	// (0x00024c9b) listscroll_midp_info_pane_t3_ParamLimits

0xa036,	// (0x00024c9b) listscroll_midp_info_pane_t3

0xa070,	// (0x00024cd5) listscroll_midp_info_pane_t4_ParamLimits

0xa070,	// (0x00024cd5) listscroll_midp_info_pane_t4

0x0003,

0xf823,	// (0x0002a488) listscroll_midp_info_pane_t_ParamLimits

0xf823,	// (0x0002a488) listscroll_midp_info_pane_t

0x891e,	// (0x00023583) scroll_pane_cp21

0x9f7e,	// (0x00024be3) form_midp_field_choice_group_pane

0x9f87,	// (0x00024bec) form_midp_field_text_pane

0x9fc6,	// (0x00024c2b) form_midp_field_time_pane

0x9fce,	// (0x00024c33) form_midp_gauge_slider_pane

0x9fd7,	// (0x00024c3c) form_midp_gauge_wait_pane

0x7e5f,	// (0x00022ac4) form_midp_image_pane

0x52a3,	// (0x0001ff08) list_single_midp_pane_ParamLimits

0x52a3,	// (0x0001ff08) list_single_midp_pane

0x9f36,	// (0x00024b9b) form_midp_field_text_pane_t1

0x9d00,	// (0x00024965) input_focus_pane_cp050

0x9f6d,	// (0x00024bd2) list_midp_form_text_pane

0x9f05,	// (0x00024b6a) form_midp_field_choice_group_pane_t1

0x9f13,	// (0x00024b78) input_focus_pane_cp051

0x9f27,	// (0x00024b8c) list_midp_choice_pane

0x7e5f,	// (0x00022ac4) status_idle_pane

0x9ee9,	// (0x00024b4e) form_midp_field_time_pane_t1

0x7e55,	// (0x00022aba) wait_anim_pane_g2_copy1

0x9ef7,	// (0x00024b5c) form_midp_field_time_pane_t2

0x0001,

0x955e,	// (0x000241c3) aid_navinavi_width_2_pane

0xf81e,	// (0x0002a483) form_midp_field_time_pane_t

0x7e5f,	// (0x00022ac4) input_focus_pane_cp052

0x7e5f,	// (0x00022ac4) bg_input_focus_pane_cp040

0x9ea9,	// (0x00024b0e) form_midp_gauge_slider_pane_t1

0x9eb7,	// (0x00024b1c) form_midp_gauge_slider_pane_t2

0x9ec5,	// (0x00024b2a) form_midp_gauge_slider_pane_t3

0x9ed3,	// (0x00024b38) form_midp_gauge_slider_pane_t4

0x0003,

0xf815,	// (0x0002a47a) form_midp_gauge_slider_pane_t

0x9ee1,	// (0x00024b46) form_midp_slider_pane

0x7f3f,	// (0x00022ba4) bg_input_focus_pane_cp041_ParamLimits

0x7f3f,	// (0x00022ba4) bg_input_focus_pane_cp041

0x9e76,	// (0x00024adb) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e76,	// (0x00024adb) form_midp_gauge_wait_pane_t1

0x9e88,	// (0x00024aed) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e88,	// (0x00024aed) form_midp_gauge_wait_pane_t2

0x0001,

0xf810,	// (0x0002a475) form_midp_gauge_wait_pane_t_ParamLimits

0xf810,	// (0x0002a475) form_midp_gauge_wait_pane_t

0x9e9a,	// (0x00024aff) form_midp_wait_pane_ParamLimits

0x9e9a,	// (0x00024aff) form_midp_wait_pane

0x9e40,	// (0x00024aa5) form_midp_image_pane_g1

0x9e49,	// (0x00024aae) form_midp_image_pane_t1

0x9e58,	// (0x00024abd) form_midp_image_pane_t2

0x9e67,	// (0x00024acc) form_midp_image_pane_t3

0x0002,

0xf809,	// (0x0002a46e) form_midp_image_pane_t

0x9e37,	// (0x00024a9c) list_single_midp_pane_g1

0x5294,	// (0x0001fef9) list_single_midp_pane_t1

0x9e0f,	// (0x00024a74) list_midp_form_item_pane_ParamLimits

0x9e0f,	// (0x00024a74) list_midp_form_item_pane

0x9506,	// (0x0002416b) list_midp_form_item_pane_t1

0x9515,	// (0x0002417a) midp_ticker_pane_g1

0x9521,	// (0x00024186) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002a3bd) midp_ticker_pane_g

0x952d,	// (0x00024192) midp_ticker_pane_t1

0xb215,	// (0x00025e7a) midp_editing_number_pane_t1

0xb1f3,	// (0x00025e58) midp_editing_number_pane

0xb202,	// (0x00025e67) midp_ticker_pane

0xafb4,	// (0x00025c19) ai_message_heading_pane

0x7e5f,	// (0x00022ac4) bg_popup_window_pane_cp14

0xafbc,	// (0x00025c21) listscroll_ai_message_pane

0xaf3e,	// (0x00025ba3) ai_message_heading_pane_g1_ParamLimits

0xaf3e,	// (0x00025ba3) ai_message_heading_pane_g1

0xaf4a,	// (0x00025baf) ai_message_heading_pane_g2_ParamLimits

0xaf4a,	// (0x00025baf) ai_message_heading_pane_g2

0xaf56,	// (0x00025bbb) ai_message_heading_pane_g3_ParamLimits

0xaf56,	// (0x00025bbb) ai_message_heading_pane_g3

0xaf62,	// (0x00025bc7) ai_message_heading_pane_g4_ParamLimits

0xaf62,	// (0x00025bc7) ai_message_heading_pane_g4

0x0003,

0xf94a,	// (0x0002a5af) ai_message_heading_pane_g_ParamLimits

0xf94a,	// (0x0002a5af) ai_message_heading_pane_g

0xaf6e,	// (0x00025bd3) ai_message_heading_pane_t1_ParamLimits

0xaf6e,	// (0x00025bd3) ai_message_heading_pane_t1

0xaf88,	// (0x00025bed) ai_message_heading_pane_t2_ParamLimits

0xaf88,	// (0x00025bed) ai_message_heading_pane_t2

0x0001,

0xf953,	// (0x0002a5b8) ai_message_heading_pane_t_ParamLimits

0xf953,	// (0x0002a5b8) ai_message_heading_pane_t

0xaf9a,	// (0x00025bff) bg_popup_heading_pane_cp1_ParamLimits

0xaf9a,	// (0x00025bff) bg_popup_heading_pane_cp1

0xaf2c,	// (0x00025b91) list_ai_message_pane_ParamLimits

0xaf2c,	// (0x00025b91) list_ai_message_pane

0x891e,	// (0x00023583) scroll_pane_cp10

0xaec8,	// (0x00025b2d) list_ai_message_pane_g1

0xaed0,	// (0x00025b35) list_ai_message_pane_g2

0x0001,

0xf927,	// (0x0002a58c) list_ai_message_pane_g

0xaed8,	// (0x00025b3d) list_ai_message_pane_t1_ParamLimits

0xaed8,	// (0x00025b3d) list_ai_message_pane_t1

0xaeed,	// (0x00025b52) list_ai_message_pane_t2_ParamLimits

0xaeed,	// (0x00025b52) list_ai_message_pane_t2

0xaf02,	// (0x00025b67) list_ai_message_pane_t3_ParamLimits

0xaf02,	// (0x00025b67) list_ai_message_pane_t3

0xaf17,	// (0x00025b7c) list_ai_message_pane_t4_ParamLimits

0xaf17,	// (0x00025b7c) list_ai_message_pane_t4

0x0003,

0xf92c,	// (0x0002a591) list_ai_message_pane_t_ParamLimits

0xf92c,	// (0x0002a591) list_ai_message_pane_t

0xaeb3,	// (0x00025b18) cell_ai_soft_ind_pane_ParamLimits

0xaeb3,	// (0x00025b18) cell_ai_soft_ind_pane

0x953f,	// (0x000241a4) cell_ai_soft_ind_pane_g1_ParamLimits

0x953f,	// (0x000241a4) cell_ai_soft_ind_pane_g1

0x7e5f,	// (0x00022ac4) grid_highlight_cp1

0x954c,	// (0x000241b1) text_secondary_cp56_ParamLimits

0x954c,	// (0x000241b1) text_secondary_cp56

0xae88,	// (0x00025aed) example_general_pane_ParamLimits

0xae88,	// (0x00025aed) example_general_pane

0xae94,	// (0x00025af9) example_parent_pane_g1_ParamLimits

0xae94,	// (0x00025af9) example_parent_pane_g1

0xaea0,	// (0x00025b05) example_parent_pane_t1_ParamLimits

0xaea0,	// (0x00025b05) example_parent_pane_t1

0x68c4,	// (0x00021529) popup_preview_text_window_ParamLimits

0x68c4,	// (0x00021529) popup_preview_text_window

0x9375,	// (0x00023fda) list_single_pane_cp2_g4

0x8270,	// (0x00022ed5) bg_popup_preview_window_pane_ParamLimits

0x8270,	// (0x00022ed5) bg_popup_preview_window_pane

0xabd4,	// (0x00025839) popup_preview_text_window_t1_ParamLimits

0xabd4,	// (0x00025839) popup_preview_text_window_t1

0xabf2,	// (0x00025857) popup_preview_text_window_t2_ParamLimits

0xabf2,	// (0x00025857) popup_preview_text_window_t2

0xac3b,	// (0x000258a0) popup_preview_text_window_t3_ParamLimits

0xac3b,	// (0x000258a0) popup_preview_text_window_t3

0xac80,	// (0x000258e5) popup_preview_text_window_t4_ParamLimits

0xac80,	// (0x000258e5) popup_preview_text_window_t4

0x0004,

0xf8fb,	// (0x0002a560) popup_preview_text_window_t_ParamLimits

0xf8fb,	// (0x0002a560) popup_preview_text_window_t

0xacfe,	// (0x00025963) scroll_pane_cp11

0x9c8c,	// (0x000248f1) bg_popup_preview_window_pane_g1

0xab94,	// (0x000257f9) bg_popup_preview_window_pane_g2

0xab9c,	// (0x00025801) bg_popup_preview_window_pane_g3

0xaba4,	// (0x00025809) bg_popup_preview_window_pane_g4

0xabac,	// (0x00025811) bg_popup_preview_window_pane_g5

0xabb4,	// (0x00025819) bg_popup_preview_window_pane_g6

0xabbc,	// (0x00025821) bg_popup_preview_window_pane_g7

0xabc4,	// (0x00025829) bg_popup_preview_window_pane_g8

0x5ae8,	// (0x0002074d) aid_popup_width_pane

0x68a2,	// (0x00021507) popup_midp_note_alarm_window_ParamLimits

0x68a2,	// (0x00021507) popup_midp_note_alarm_window

0x87a2,	// (0x00023407) data_form_pane_ParamLimits

0x4efd,	// (0x0001fb62) form_field_data_pane_g1

0x4f07,	// (0x0001fb6c) form_field_data_pane_t1_ParamLimits

0x87ae,	// (0x00023413) input_focus_pane_ParamLimits

0x4f1f,	// (0x0001fb84) data_form_wide_pane_ParamLimits

0x4f30,	// (0x0001fb95) form_field_data_wide_pane_g1

0x4f3c,	// (0x0001fba1) form_field_data_wide_pane_t1_ParamLimits

0x851f,	// (0x00023184) input_focus_pane_cp6_ParamLimits

0x88cb,	// (0x00023530) input_popup_find_pane_g1_ParamLimits

0x88cb,	// (0x00023530) input_popup_find_pane_g1

0x605a,	// (0x00020cbf) aid_navi_side_left_pane

0x606f,	// (0x00020cd4) aid_navi_side_right_pane

0xa5ad,	// (0x00025212) bg_popup_window_pane_cp30_ParamLimits

0xa5ad,	// (0x00025212) bg_popup_window_pane_cp30

0xa627,	// (0x0002528c) popup_midp_note_alarm_window_g1_ParamLimits

0xa627,	// (0x0002528c) popup_midp_note_alarm_window_g1

0xa657,	// (0x000252bc) popup_midp_note_alarm_window_t1_ParamLimits

0xa657,	// (0x000252bc) popup_midp_note_alarm_window_t1

0xa6f8,	// (0x0002535d) popup_midp_note_alarm_window_t2_ParamLimits

0xa6f8,	// (0x0002535d) popup_midp_note_alarm_window_t2

0xa7a6,	// (0x0002540b) popup_midp_note_alarm_window_t3_ParamLimits

0xa7a6,	// (0x0002540b) popup_midp_note_alarm_window_t3

0xa7d8,	// (0x0002543d) popup_midp_note_alarm_window_t4_ParamLimits

0xa7d8,	// (0x0002543d) popup_midp_note_alarm_window_t4

0xa7fe,	// (0x00025463) popup_midp_note_alarm_window_t5_ParamLimits

0xa7fe,	// (0x00025463) popup_midp_note_alarm_window_t5

0x000a,

0xf898,	// (0x0002a4fd) popup_midp_note_alarm_window_t_ParamLimits

0xf898,	// (0x0002a4fd) popup_midp_note_alarm_window_t

0xa8aa,	// (0x0002550f) wait_bar_pane_cp1_ParamLimits

0xa8aa,	// (0x0002550f) wait_bar_pane_cp1

0x7e5f,	// (0x00022ac4) wait_anim_pane_copy1

0x7e5f,	// (0x00022ac4) wait_border_pane_copy1

0xa293,	// (0x00024ef8) wait_border_pane_g1_copy1

0x4f56,	// (0x0001fbbb) form_field_popup_pane_g1

0x4f5e,	// (0x0001fbc3) form_field_popup_pane_t1_ParamLimits

0x87ae,	// (0x00023413) input_focus_pane_cp7_ParamLimits

0x87dc,	// (0x00023441) list_form_pane_ParamLimits

0x4f76,	// (0x0001fbdb) form_field_popup_wide_pane_g1

0x4f7e,	// (0x0001fbe3) form_field_popup_wide_pane_t1_ParamLimits

0x87ae,	// (0x00023413) input_focus_pane_cp8_ParamLimits

0x87e8,	// (0x0002344d) list_form_wide_pane_ParamLimits

0xb39f,	// (0x00026004) aid_size_cell_graphic_pane

0x5008,	// (0x0001fc6d) data_form_pane_t1_ParamLimits

0x52fd,	// (0x0001ff62) data_form_wide_pane_t1_ParamLimits

0x9859,	// (0x000244be) bg_status_flat_pane

0x7e9f,	// (0x00022b04) title_pane_t1_ParamLimits

0x7f07,	// (0x00022b6c) title_pane_t2_ParamLimits

0x7f2d,	// (0x00022b92) title_pane_t3_ParamLimits

0xf557,	// (0x0002a1bc) title_pane_t_ParamLimits

0x8d9d,	// (0x00023a02) level_1_signal_ParamLimits

0x8daf,	// (0x00023a14) level_2_signal_ParamLimits

0x8dc2,	// (0x00023a27) level_3_signal_ParamLimits

0x8dd5,	// (0x00023a3a) level_4_signal_ParamLimits

0x8de8,	// (0x00023a4d) level_5_signal_ParamLimits

0x8dfb,	// (0x00023a60) level_6_signal_ParamLimits

0x8e0e,	// (0x00023a73) level_7_signal_ParamLimits

0x8d9d,	// (0x00023a02) level_1_battery_ParamLimits

0x8daf,	// (0x00023a14) level_2_battery_ParamLimits

0x8dc2,	// (0x00023a27) level_3_battery_ParamLimits

0x8dd5,	// (0x00023a3a) level_4_battery_ParamLimits

0x8de8,	// (0x00023a4d) level_5_battery_ParamLimits

0x8dfb,	// (0x00023a60) level_6_battery_ParamLimits

0x8e0e,	// (0x00023a73) level_7_battery_ParamLimits

0xa4b2,	// (0x00025117) bg_status_flat_pane_g1

0xa4ba,	// (0x0002511f) bg_status_flat_pane_g2

0xa4c2,	// (0x00025127) bg_status_flat_pane_g3

0xa4ca,	// (0x0002512f) bg_status_flat_pane_g4

0xa4d2,	// (0x00025137) bg_status_flat_pane_g5

0xa4da,	// (0x0002513f) bg_status_flat_pane_g6

0xa4e2,	// (0x00025147) bg_status_flat_pane_g7

0x7f55,	// (0x00022bba) tabs_3_active_pane_t1_ParamLimits

0x7f55,	// (0x00022bba) tabs_3_passive_pane_t1_ParamLimits

0x7f6f,	// (0x00022bd4) tabs_4_active_pane_t1_ParamLimits

0x7f6f,	// (0x00022bd4) tabs_4_1_passive_pane_t1_ParamLimits

0x895f,	// (0x000235c4) tabs_2_active_pane_t1_ParamLimits

0x895f,	// (0x000235c4) tabs_2_passive_pane_t1_ParamLimits

0x8971,	// (0x000235d6) bg_active_tab_pane_cp4_ParamLimits

0x897f,	// (0x000235e4) tabs_2_long_active_pane_t1_ParamLimits

0x8992,	// (0x000235f7) bg_passive_tab_pane_cp4_ParamLimits

0x162f,	// (0x0001c294) list_single_midp_graphic_pane_t1_ParamLimits

0x8971,	// (0x000235d6) bg_active_tab_pane_cp5_ParamLimits

0x899e,	// (0x00023603) tabs_3_long_active_pane_t1_ParamLimits

0x8992,	// (0x000235f7) bg_passive_tab_pane_cp5_ParamLimits

0x162f,	// (0x0001c294) list_single_midp_graphic_pane_t1

0x9859,	// (0x000244be) bg_status_flat_pane_ParamLimits

0x991c,	// (0x00024581) indicator_pane_cp2_ParamLimits

0x991c,	// (0x00024581) indicator_pane_cp2

0x9a47,	// (0x000246ac) navi_pane_srt_ParamLimits

0x9a47,	// (0x000246ac) navi_pane_srt

0x9a6b,	// (0x000246d0) popup_clock_digital_analogue_window_cp1

0x801c,	// (0x00022c81) indicator_pane_t1

0x9444,	// (0x000240a9) copy_highlight_pane

0x9444,	// (0x000240a9) cursor_graphics_pane

0x9444,	// (0x000240a9) graphic_within_text_pane

0x9444,	// (0x000240a9) link_highlight_pane

0xacc1,	// (0x00025926) popup_preview_text_window_t5_ParamLimits

0xacc1,	// (0x00025926) popup_preview_text_window_t5

0x9566,	// (0x000241cb) cursor_digital_pane

0x9566,	// (0x000241cb) cursor_primary_pane

0x9577,	// (0x000241dc) cursor_primary_small_pane

0x957f,	// (0x000241e4) cursor_secondary_pane

0x9587,	// (0x000241ec) cursor_title_pane

0x9566,	// (0x000241cb) link_highlight_digital_pane

0x956e,	// (0x000241d3) link_highlight_primary_pane

0x9577,	// (0x000241dc) link_highlight_primary_small_pane

0x957f,	// (0x000241e4) link_highlight_secondary_pane

0x9587,	// (0x000241ec) link_highlight_title_pane

0x9566,	// (0x000241cb) copy_highlight_digital_pane

0x9566,	// (0x000241cb) copy_highlight_primary_pane

0x9577,	// (0x000241dc) copy_highlight_primary_small_pane

0x957f,	// (0x000241e4) copy_highlight_secondary_pane

0x9587,	// (0x000241ec) copy_highlight_title_pane

0x957f,	// (0x000241e4) graphic_text_digital_pane

0xa550,	// (0x000251b5) graphic_text_primary_pane

0xa559,	// (0x000251be) graphic_text_primary_small_pane

0x9577,	// (0x000241dc) graphic_text_secondary_pane

0x9566,	// (0x000241cb) graphic_text_title_pane

0x958f,	// (0x000241f4) cursor_primary_pane_g1

0xa542,	// (0x000251a7) cursor_text_primary_t1

0xa52a,	// (0x0002518f) cursor_primary_small_pane_g1

0xa534,	// (0x00025199) cursor_text_primary_small_t1

0xa512,	// (0x00025177) cursor_primary_small_pane_g1_copy1

0xa51c,	// (0x00025181) cursor_text_primary_small_t1_copy1

0xa4fa,	// (0x0002515f) cursor_text_title_t1

0xa508,	// (0x0002516d) cursor_title_pane_g1

0x958f,	// (0x000241f4) cursor_digital_pane_g1

0x9599,	// (0x000241fe) cursor_text_digital_t1

0x95be,	// (0x00024223) link_highlight_primary_pane_g1

0xa4a3,	// (0x00025108) link_highlight_primary_pane_t1

0x95a7,	// (0x0002420c) link_highlight_primary_small_pane_g1

0x95af,	// (0x00024214) link_highlight_primary_small_pane_t1

0x95be,	// (0x00024223) link_highlight_secondary_pane_g1

0x95c6,	// (0x0002422b) link_highlight_secondary_pane_t1

0xa417,	// (0x0002507c) link_highlight_title_pane_g1

0xa41f,	// (0x00025084) link_highlight_title_pane_t1

0xa400,	// (0x00025065) link_highlight_digital_pane_g1

0xa408,	// (0x0002506d) link_highlight_digital_pane_t1

0xa2d8,	// (0x00024f3d) copy_highlight_primary_pane_g1

0xa2e0,	// (0x00024f45) copy_highlight_primary_pane_t1

0xa2b2,	// (0x00024f17) copy_highlight_primary_small_pane_g1

0xa2c9,	// (0x00024f2e) copy_highlight_primary_small_pane_t1

0x95d5,	// (0x0002423a) copy_highlight_secondary_pane_g1

0x95dd,	// (0x00024242) copy_highlight_secondary_pane_t1

0xa2b2,	// (0x00024f17) copy_highlight_title_pane_g1

0xa2ba,	// (0x00024f1f) copy_highlight_title_pane_t1

0xa2d8,	// (0x00024f3d) copy_highlight_digital_pane_g1

0xb569,	// (0x000261ce) copy_highlight_digital_pane_t1

0xb4bd,	// (0x00026122) graphic_text_primary_pane_g1

0xb54d,	// (0x000261b2) graphic_text_primary_pane_t1

0xb55b,	// (0x000261c0) graphic_text_primary_pane_t2

0x0001,

0xf9c7,	// (0x0002a62c) graphic_text_primary_pane_t

0xb529,	// (0x0002618e) graphic_text_primary_small_pane_g1

0xb531,	// (0x00026196) graphic_text_primary_small_pane_t1

0xb53f,	// (0x000261a4) graphic_text_primary_small_pane_t2

0x0001,

0xf9c2,	// (0x0002a627) graphic_text_primary_small_pane_t

0xb505,	// (0x0002616a) graphic_text_secondary_pane_g1

0xb50d,	// (0x00026172) graphic_text_secondary_pane_t1

0xb51b,	// (0x00026180) graphic_text_secondary_pane_t2

0x0001,

0xf9bd,	// (0x0002a622) graphic_text_secondary_pane_t

0xb4e1,	// (0x00026146) graphic_text_title_pane_g1

0xb4e9,	// (0x0002614e) graphic_text_title_pane_t1

0xb4f7,	// (0x0002615c) graphic_text_title_pane_t2

0x0001,

0xf9b8,	// (0x0002a61d) graphic_text_title_pane_t

0xb4bd,	// (0x00026122) graphic_text_digital_pane_g1

0xb4c5,	// (0x0002612a) graphic_text_digital_pane_t1

0xb4d3,	// (0x00026138) graphic_text_digital_pane_t2

0x0001,

0xf9b3,	// (0x0002a618) graphic_text_digital_pane_t

0x7f3f,	// (0x00022ba4) navi_icon_pane_srt_ParamLimits

0x7f3f,	// (0x00022ba4) navi_icon_pane_srt

0x7e5f,	// (0x00022ac4) navi_midp_pane_srt

0x7e5f,	// (0x00022ac4) navi_navi_pane_srt

0x7f3f,	// (0x00022ba4) navi_text_pane_srt_ParamLimits

0x7f3f,	// (0x00022ba4) navi_text_pane_srt

0xb488,	// (0x000260ed) navi_navi_icon_text_pane_srt

0xb490,	// (0x000260f5) navi_navi_pane_srt_g1_ParamLimits

0xb490,	// (0x000260f5) navi_navi_pane_srt_g1

0xb4a2,	// (0x00026107) navi_navi_pane_srt_g2_ParamLimits

0xb4a2,	// (0x00026107) navi_navi_pane_srt_g2

0x0001,

0xf9ae,	// (0x0002a613) navi_navi_pane_srt_g_ParamLimits

0xf9ae,	// (0x0002a613) navi_navi_pane_srt_g

0xb4b4,	// (0x00026119) navi_navi_tabs_pane_srt

0xb488,	// (0x000260ed) navi_navi_text_pane_srt

0xb488,	// (0x000260ed) navi_navi_volume_pane_srt

0xb479,	// (0x000260de) navi_navi_text_pane_srt_t1

0x6ed5,	// (0x00021b3a) navi_navi_volume_pane_srt_g1

0x6edd,	// (0x00021b42) volume_small_pane_srt_ParamLimits

0x6edd,	// (0x00021b42) volume_small_pane_srt

0x633a,	// (0x00020f9f) volume_small_pane_srt_g1_ParamLimits

0x633a,	// (0x00020f9f) volume_small_pane_srt_g1

0x634a,	// (0x00020faf) volume_small_pane_srt_g2_ParamLimits

0x634a,	// (0x00020faf) volume_small_pane_srt_g2

0x635b,	// (0x00020fc0) volume_small_pane_srt_g3_ParamLimits

0x635b,	// (0x00020fc0) volume_small_pane_srt_g3

0x636c,	// (0x00020fd1) volume_small_pane_srt_g4_ParamLimits

0x636c,	// (0x00020fd1) volume_small_pane_srt_g4

0x637d,	// (0x00020fe2) volume_small_pane_srt_g5_ParamLimits

0x637d,	// (0x00020fe2) volume_small_pane_srt_g5

0x638e,	// (0x00020ff3) volume_small_pane_srt_g6_ParamLimits

0x638e,	// (0x00020ff3) volume_small_pane_srt_g6

0x639f,	// (0x00021004) volume_small_pane_srt_g7_ParamLimits

0x639f,	// (0x00021004) volume_small_pane_srt_g7

0x63b0,	// (0x00021015) volume_small_pane_srt_g8_ParamLimits

0x63b0,	// (0x00021015) volume_small_pane_srt_g8

0x63c1,	// (0x00021026) volume_small_pane_srt_g9_ParamLimits

0x63c1,	// (0x00021026) volume_small_pane_srt_g9

0x63d2,	// (0x00021037) volume_small_pane_srt_g10_ParamLimits

0x63d2,	// (0x00021037) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002a3c2) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002a3c2) volume_small_pane_srt_g

0x8319,	// (0x00022f7e) query_popup_data_pane_cp2

0xb45f,	// (0x000260c4) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb45f,	// (0x000260c4) navi_navi_icon_text_pane_srt_t1

0xa550,	// (0x000251b5) navi_tabs_2_long_pane_srt

0xa550,	// (0x000251b5) navi_tabs_2_pane_srt

0xa550,	// (0x000251b5) navi_tabs_3_long_pane_srt

0xa550,	// (0x000251b5) navi_tabs_3_pane_srt

0xa550,	// (0x000251b5) navi_tabs_4_pane_srt

0x6eb5,	// (0x00021b1a) tabs_2_active_pane_srt_ParamLimits

0x6eb5,	// (0x00021b1a) tabs_2_active_pane_srt

0x6ec5,	// (0x00021b2a) tabs_2_passive_pane_srt_ParamLimits

0x6ec5,	// (0x00021b2a) tabs_2_passive_pane_srt

0x9782,	// (0x000243e7) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9782,	// (0x000243e7) bg_passive_tab_pane_cp1_srt

0xb42b,	// (0x00026090) bg_passive_tab_pane_g1_cp1_srt

0x9086,	// (0x00023ceb) bg_passive_tab_pane_g2_cp1_srt

0xb434,	// (0x00026099) bg_passive_tab_pane_g3_cp1_srt

0x7f3f,	// (0x00022ba4) bg_active_tab_pane_cp1_srt_ParamLimits

0x7f3f,	// (0x00022ba4) bg_active_tab_pane_cp1_srt

0xb43d,	// (0x000260a2) tabs_2_active_pane_srt_g1

0xb445,	// (0x000260aa) tabs_2_active_pane_srt_t1_ParamLimits

0xb445,	// (0x000260aa) tabs_2_active_pane_srt_t1

0xb42b,	// (0x00026090) bg_active_tab_pane_g1_cp1_srt

0x9086,	// (0x00023ceb) bg_active_tab_pane_g2_cp1_srt

0xb434,	// (0x00026099) bg_active_tab_pane_g3_cp1_srt

0x6e82,	// (0x00021ae7) tabs_3_active_pane_srt_ParamLimits

0x6e82,	// (0x00021ae7) tabs_3_active_pane_srt

0x6e93,	// (0x00021af8) tabs_3_passive_pane_cp_srt_ParamLimits

0x6e93,	// (0x00021af8) tabs_3_passive_pane_cp_srt

0x6ea4,	// (0x00021b09) tabs_3_passive_pane_srt_ParamLimits

0x6ea4,	// (0x00021b09) tabs_3_passive_pane_srt

0x9782,	// (0x000243e7) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9782,	// (0x000243e7) bg_passive_tab_pane_cp2_srt

0x95ec,	// (0x00024251) bg_passive_tab_pane_g1_cp2_srt

0x9086,	// (0x00023ceb) bg_passive_tab_pane_g2_cp2_srt

0x95f5,	// (0x0002425a) bg_passive_tab_pane_g3_cp2_srt

0x7f3f,	// (0x00022ba4) bg_active_tab_pane_cp2_srt_ParamLimits

0x7f3f,	// (0x00022ba4) bg_active_tab_pane_cp2_srt

0xb411,	// (0x00026076) tabs_3_active_pane_srt_g1

0xb419,	// (0x0002607e) tabs_3_active_pane_srt_t1_ParamLimits

0xb419,	// (0x0002607e) tabs_3_active_pane_srt_t1

0x95ec,	// (0x00024251) bg_active_tab_pane_g1_cp2_srt

0x9086,	// (0x00023ceb) bg_active_tab_pane_g2_cp2_srt

0x95f5,	// (0x0002425a) bg_active_tab_pane_g3_cp2_srt

0x6e3a,	// (0x00021a9f) tabs_4_active_pane_srt_ParamLimits

0x6e3a,	// (0x00021a9f) tabs_4_active_pane_srt

0x6e4c,	// (0x00021ab1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6e4c,	// (0x00021ab1) tabs_4_passive_pane_cp2_srt

0x6537,	// (0x0002119c) aid_size_cell_toolbar

0x8992,	// (0x000235f7) main_idle_act_pane_ParamLimits

0x66d8,	// (0x0002133d) popup_large_graphic_colour_window_ParamLimits

0x6a3f,	// (0x000216a4) popup_toolbar_window_ParamLimits

0x6a3f,	// (0x000216a4) popup_toolbar_window

0xb224,	// (0x00025e89) list_single_graphic_2heading_pane_ParamLimits

0xb224,	// (0x00025e89) list_single_graphic_2heading_pane

0x8b4e,	// (0x000237b3) aid_size_cell_apps_grid_lsc_pane

0x8b60,	// (0x000237c5) aid_size_cell_apps_grid_prt_pane

0x9782,	// (0x000243e7) bg_wml_button_pane_cp1_ParamLimits

0x9782,	// (0x000243e7) bg_wml_button_pane_cp1

0x9f36,	// (0x00024b9b) form_midp_field_text_pane_t1_ParamLimits

0x9d00,	// (0x00024965) input_focus_pane_cp050_ParamLimits

0x9f6d,	// (0x00024bd2) list_midp_form_text_pane_ParamLimits

0x9f13,	// (0x00024b78) input_focus_pane_cp051_ParamLimits

0x9f27,	// (0x00024b8c) list_midp_choice_pane_ParamLimits

0x9db9,	// (0x00024a1e) list_single_2graphic_pane_cp3_ParamLimits

0x9db9,	// (0x00024a1e) list_single_2graphic_pane_cp3

0x9ddd,	// (0x00024a42) list_single_midp_graphic_pane_ParamLimits

0x9ddd,	// (0x00024a42) list_single_midp_graphic_pane

0x516a,	// (0x0001fdcf) list_single_graphic_2heading_pane_g1_ParamLimits

0x516a,	// (0x0001fdcf) list_single_graphic_2heading_pane_g1

0x5176,	// (0x0001fddb) list_single_graphic_2heading_pane_g4_ParamLimits

0x5176,	// (0x0001fddb) list_single_graphic_2heading_pane_g4

0x5182,	// (0x0001fde7) list_single_graphic_2heading_pane_g5_ParamLimits

0x5182,	// (0x0001fde7) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002a415) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002a415) list_single_graphic_2heading_pane_g

0x518e,	// (0x0001fdf3) list_single_graphic_2heading_pane_t1_ParamLimits

0x518e,	// (0x0001fdf3) list_single_graphic_2heading_pane_t1

0x51a2,	// (0x0001fe07) list_single_graphic_2heading_pane_t2_ParamLimits

0x51a2,	// (0x0001fe07) list_single_graphic_2heading_pane_t2

0x51bc,	// (0x0001fe21) list_single_graphic_2heading_pane_t3_ParamLimits

0x51bc,	// (0x0001fe21) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002a41c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002a41c) list_single_graphic_2heading_pane_t

0x9bca,	// (0x0002482f) bg_popup_sub_pane_cp2

0x9bf4,	// (0x00024859) grid_toobar_pane

0x6aec,	// (0x00021751) cell_toolbar_pane_ParamLimits

0x6aec,	// (0x00021751) cell_toolbar_pane

0x9c30,	// (0x00024895) cell_toolbar_pane_g1_ParamLimits

0x9c30,	// (0x00024895) cell_toolbar_pane_g1

0x9c44,	// (0x000248a9) cell_toolbar_pane_g2_ParamLimits

0x9c44,	// (0x000248a9) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0002a423) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0002a423) cell_toolbar_pane_g

0x9c66,	// (0x000248cb) grid_highlight_pane_cp2_ParamLimits

0x9c66,	// (0x000248cb) grid_highlight_pane_cp2

0x9c80,	// (0x000248e5) toolbar_button_pane

0x9c8c,	// (0x000248f1) toolbar_button_pane_g1

0x9c94,	// (0x000248f9) toolbar_button_pane_g2

0x9c9c,	// (0x00024901) toolbar_button_pane_g3

0x9ca4,	// (0x00024909) toolbar_button_pane_g4

0x9cac,	// (0x00024911) toolbar_button_pane_g5

0x9cb4,	// (0x00024919) toolbar_button_pane_g6

0x9cbc,	// (0x00024921) toolbar_button_pane_g7

0x9cc4,	// (0x00024929) toolbar_button_pane_g8

0x9ccc,	// (0x00024931) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002a428) toolbar_button_pane_g

0x6b24,	// (0x00021789) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6b24,	// (0x00021789) list_single_2graphic_pane_g1_cp3

0x6b30,	// (0x00021795) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6b30,	// (0x00021795) list_single_2graphic_pane_g2_cp3

0x6b41,	// (0x000217a6) list_single_2graphic_pane_g3_cp3

0x6b49,	// (0x000217ae) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6b49,	// (0x000217ae) list_single_2graphic_pane_g4_cp3

0x6b55,	// (0x000217ba) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6b55,	// (0x000217ba) list_single_2graphic_pane_t1_cp3

0xa13e,	// (0x00024da3) list_single_midp_graphic_pane_g2_ParamLimits

0xa13e,	// (0x00024da3) list_single_midp_graphic_pane_g2

0x653f,	// (0x000211a4) aid_zoom_text_primary

0x513e,	// (0x0001fda3) aid_zoom_text_secondary

0x96a6,	// (0x0002430b) status_small_pane_g7_ParamLimits

0x96a6,	// (0x0002430b) status_small_pane_g7

0x96c9,	// (0x0002432e) status_small_pane_t1_ParamLimits

0x7e76,	// (0x00022adb) title_pane_g2

0x0003,

0xf54e,	// (0x0002a1b3) title_pane_g

0x83bd,	// (0x00023022) aid_size_cell_colour_1_pane_ParamLimits

0x83bd,	// (0x00023022) aid_size_cell_colour_1_pane

0x83d1,	// (0x00023036) aid_size_cell_colour_2_pane_ParamLimits

0x83d1,	// (0x00023036) aid_size_cell_colour_2_pane

0x83e5,	// (0x0002304a) aid_size_cell_colour_3_pane_ParamLimits

0x83e5,	// (0x0002304a) aid_size_cell_colour_3_pane

0x83f9,	// (0x0002305e) aid_size_cell_colour_4_pane_ParamLimits

0x83f9,	// (0x0002305e) aid_size_cell_colour_4_pane

0x5f97,	// (0x00020bfc) title_pane_stacon_g1_ParamLimits

0x5f97,	// (0x00020bfc) title_pane_stacon_g1

0xa337,	// (0x00024f9c) popup_note_wait_window_g3_ParamLimits

0xa337,	// (0x00024f9c) popup_note_wait_window_g3

0xa3ad,	// (0x00025012) popup_note_wait_window_t5_ParamLimits

0xa3ad,	// (0x00025012) popup_note_wait_window_t5

0x7e5f,	// (0x00022ac4) main_feb_china_hwr_fs_writing_pane

0x65bb,	// (0x00021220) popup_feb_china_hwr_fs_window_ParamLimits

0x65bb,	// (0x00021220) popup_feb_china_hwr_fs_window

0x6b71,	// (0x000217d6) aid_size_cell_hwr_fs_ParamLimits

0x6b71,	// (0x000217d6) aid_size_cell_hwr_fs

0x9d00,	// (0x00024965) bg_popup_sub_pane_cp3_ParamLimits

0x9d00,	// (0x00024965) bg_popup_sub_pane_cp3

0x6b86,	// (0x000217eb) grid_hwr_fs_pane_ParamLimits

0x6b86,	// (0x000217eb) grid_hwr_fs_pane

0x6b9e,	// (0x00021803) linegrid_hwr_fs_pane_ParamLimits

0x6b9e,	// (0x00021803) linegrid_hwr_fs_pane

0x6bae,	// (0x00021813) cell_hwr_fs_pane_ParamLimits

0x6bae,	// (0x00021813) cell_hwr_fs_pane

0x9d0c,	// (0x00024971) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d0c,	// (0x00024971) linegrid_hwr_fs_pane_g1

0x9d18,	// (0x0002497d) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d18,	// (0x0002497d) linegrid_hwr_fs_pane_g2

0x9d2a,	// (0x0002498f) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d2a,	// (0x0002498f) linegrid_hwr_fs_pane_g3

0x6bd0,	// (0x00021835) linegrid_hwr_fs_pane_g4_ParamLimits

0x6bd0,	// (0x00021835) linegrid_hwr_fs_pane_g4

0x6bea,	// (0x0002184f) linegrid_hwr_fs_pane_g5_ParamLimits

0x6bea,	// (0x0002184f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ee,	// (0x0002a453) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ee,	// (0x0002a453) linegrid_hwr_fs_pane_g

0x9d36,	// (0x0002499b) cell_hwr_fs_pane_g1_ParamLimits

0x9d36,	// (0x0002499b) cell_hwr_fs_pane_g1

0x9b01,	// (0x00024766) cell_hwr_fs_pane_g2_ParamLimits

0x9b01,	// (0x00024766) cell_hwr_fs_pane_g2

0x9d4c,	// (0x000249b1) cell_hwr_fs_pane_g3_ParamLimits

0x9d4c,	// (0x000249b1) cell_hwr_fs_pane_g3

0x9d59,	// (0x000249be) cell_hwr_fs_pane_g4_ParamLimits

0x9d59,	// (0x000249be) cell_hwr_fs_pane_g4

0x0003,

0xf7f9,	// (0x0002a45e) cell_hwr_fs_pane_g_ParamLimits

0xf7f9,	// (0x0002a45e) cell_hwr_fs_pane_g

0x6c00,	// (0x00021865) cell_hwr_fs_pane_t1

0x7e5f,	// (0x00022ac4) grid_highlight_pane_cp6

0x7e5f,	// (0x00022ac4) main_idle_act2_pane

0x8905,	// (0x0002356a) aid_inside_area_popup_secondary

0xa9e4,	// (0x00025649) aid_inside_area_window_primary_ParamLimits

0xa9e4,	// (0x00025649) aid_inside_area_window_primary

0xb578,	// (0x000261dd) ai2_news_ticker_pane

0xb580,	// (0x000261e5) aid_size_cell_ai1_link_ParamLimits

0xb580,	// (0x000261e5) aid_size_cell_ai1_link

0xb59a,	// (0x000261ff) popup_ai2_data_window_ParamLimits

0xb59a,	// (0x000261ff) popup_ai2_data_window

0xb5b0,	// (0x00026215) popup_ai2_link_window_ParamLimits

0xb5b0,	// (0x00026215) popup_ai2_link_window

0x9d00,	// (0x00024965) bg_popup_sub_pane_cp4_ParamLimits

0x9d00,	// (0x00024965) bg_popup_sub_pane_cp4

0xb5c4,	// (0x00026229) grid_ai2_link_pane_ParamLimits

0xb5c4,	// (0x00026229) grid_ai2_link_pane

0xb5db,	// (0x00026240) popup_ai2_link_window_g1_ParamLimits

0xb5db,	// (0x00026240) popup_ai2_link_window_g1

0xb5e7,	// (0x0002624c) popup_ai2_link_window_g2_ParamLimits

0xb5e7,	// (0x0002624c) popup_ai2_link_window_g2

0x0001,

0xf9cc,	// (0x0002a631) popup_ai2_link_window_g_ParamLimits

0xf9cc,	// (0x0002a631) popup_ai2_link_window_g

0xb5f6,	// (0x0002625b) ai2_mp_button_pane

0xb5fe,	// (0x00026263) ai2_mp_volume_pane

0x9f13,	// (0x00024b78) bg_popup_sub_pane_cp5_ParamLimits

0x9f13,	// (0x00024b78) bg_popup_sub_pane_cp5

0xb606,	// (0x0002626b) heading_ai2_gene_pane_ParamLimits

0xb606,	// (0x0002626b) heading_ai2_gene_pane

0xb612,	// (0x00026277) list_ai2_gene_pane_ParamLimits

0xb612,	// (0x00026277) list_ai2_gene_pane

0xb65a,	// (0x000262bf) cell_ai2_link_pane_ParamLimits

0xb65a,	// (0x000262bf) cell_ai2_link_pane

0xb670,	// (0x000262d5) cell_ai2_link_pane_g1

0x7e5f,	// (0x00022ac4) grid_highlight_pane_cp7

0x6ef2,	// (0x00021b57) ai2_mp_volume_pane_g1

0xb740,	// (0x000263a5) ai2_mp_volume_pane_g2

0xb6b5,	// (0x0002631a) list_ai2_gene_pane_t1

0xb748,	// (0x000263ad) ai2_mp_volume_pane_g3

0x0002,

0xf9e5,	// (0x0002a64a) ai2_mp_volume_pane_g

0x6efa,	// (0x00021b5f) volume_small_pane_cp3

0xb750,	// (0x000263b5) aid_size_cell_ai2_button

0xb758,	// (0x000263bd) grid_ai2_button_pane

0xb761,	// (0x000263c6) cell_ai2_button_pane_ParamLimits

0xb761,	// (0x000263c6) cell_ai2_button_pane

0x7e55,	// (0x00022aba) cell_ai2_button_pane_g1

0x7e5f,	// (0x00022ac4) grid_highlight_pane_cp8

0xb700,	// (0x00026365) ai2_gene_pane_t1_ParamLimits

0xb700,	// (0x00026365) ai2_gene_pane_t1

0x652d,	// (0x00021192) aid_height_parent_landscape

0xb05b,	// (0x00025cc0) aid_height_set_list

0xb06c,	// (0x00025cd1) aid_size_parent

0xb39f,	// (0x00026004) aid_size_cell_graphic_pane_ParamLimits

0xb622,	// (0x00026287) popup_ai2_data_window_g1_ParamLimits

0xb622,	// (0x00026287) popup_ai2_data_window_g1

0xb62e,	// (0x00026293) ai2_news_ticker_pane_g1

0xb636,	// (0x0002629b) ai2_news_ticker_pane_g2

0x0001,

0xf9d1,	// (0x0002a636) ai2_news_ticker_pane_g

0xb63e,	// (0x000262a3) ai2_news_ticker_pane_t1

0xb64c,	// (0x000262b1) ai2_news_ticker_pane_t2

0x0001,

0xf9d6,	// (0x0002a63b) ai2_news_ticker_pane_t

0xb679,	// (0x000262de) heading_ai2_gene_pane_g1

0xb681,	// (0x000262e6) heading_ai2_gene_pane_t1_ParamLimits

0xb681,	// (0x000262e6) heading_ai2_gene_pane_t1

0xb696,	// (0x000262fb) list_highlight_pane_cp6

0xb69e,	// (0x00026303) ai2_gene_pane_ParamLimits

0xb69e,	// (0x00026303) ai2_gene_pane

0xb6c3,	// (0x00026328) list_ai2_gene_pane_t2

0x0001,

0xf9db,	// (0x0002a640) list_ai2_gene_pane_t

0xb6d1,	// (0x00026336) list_highlight_pane_cp8_ParamLimits

0xb6d1,	// (0x00026336) list_highlight_pane_cp8

0xb6e2,	// (0x00026347) ai2_gene_pane_g1_ParamLimits

0xb6e2,	// (0x00026347) ai2_gene_pane_g1

0xb6f4,	// (0x00026359) ai2_gene_pane_g2_ParamLimits

0xb6f4,	// (0x00026359) ai2_gene_pane_g2

0x0001,

0xf9e0,	// (0x0002a645) ai2_gene_pane_g_ParamLimits

0xf9e0,	// (0x0002a645) ai2_gene_pane_g

0x8744,	// (0x000233a9) scroll_pane_cp12

0x64ec,	// (0x00021151) control_pane_t3_ParamLimits

0x64ec,	// (0x00021151) control_pane_t3

0x96ba,	// (0x0002431f) status_small_pane_g8_ParamLimits

0x96ba,	// (0x0002431f) status_small_pane_g8

0x66a1,	// (0x00021306) popup_find_window_ParamLimits

0x68b6,	// (0x0002151b) popup_note_image_window_ParamLimits

0x516a,	// (0x0001fdcf) list_double2_graphic_pane_vc_g1_ParamLimits

0x516a,	// (0x0001fdcf) list_double2_graphic_pane_vc_g1

0x5176,	// (0x0001fddb) list_double2_graphic_pane_vc_g2_ParamLimits

0x5176,	// (0x0001fddb) list_double2_graphic_pane_vc_g2

0x5182,	// (0x0001fde7) list_double2_graphic_pane_vc_g3_ParamLimits

0x5182,	// (0x0001fde7) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002a415) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a415) list_double2_graphic_pane_vc_g

0x51d4,	// (0x0001fe39) list_double2_graphic_pane_vc_t1_ParamLimits

0x51d4,	// (0x0001fe39) list_double2_graphic_pane_vc_t1

0x5176,	// (0x0001fddb) list_single_heading_pane_vc_g1_ParamLimits

0x5176,	// (0x0001fddb) list_single_heading_pane_vc_g1

0x5182,	// (0x0001fde7) list_single_heading_pane_vc_g2_ParamLimits

0x5182,	// (0x0001fde7) list_single_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a43d) list_single_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a43d) list_single_heading_pane_vc_g

0x51ea,	// (0x0001fe4f) list_single_heading_pane_vc_t1_ParamLimits

0x51ea,	// (0x0001fe4f) list_single_heading_pane_vc_t1

0x5202,	// (0x0001fe67) list_single_heading_pane_vc_t2_ParamLimits

0x5202,	// (0x0001fe67) list_single_heading_pane_vc_t2

0x0001,

0xf7dd,	// (0x0002a442) list_single_heading_pane_vc_t_ParamLimits

0xf7dd,	// (0x0002a442) list_single_heading_pane_vc_t

0x521e,	// (0x0001fe83) list_setting_number_pane_vc_g1_ParamLimits

0x521e,	// (0x0001fe83) list_setting_number_pane_vc_g1

0x522a,	// (0x0001fe8f) list_setting_number_pane_vc_g2_ParamLimits

0x522a,	// (0x0001fe8f) list_setting_number_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a447) list_setting_number_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a447) list_setting_number_pane_vc_g

0x5236,	// (0x0001fe9b) list_setting_number_pane_vc_t1_ParamLimits

0x5236,	// (0x0001fe9b) list_setting_number_pane_vc_t1

0x524a,	// (0x0001feaf) list_setting_number_pane_vc_t2_ParamLimits

0x524a,	// (0x0001feaf) list_setting_number_pane_vc_t2

0x5266,	// (0x0001fecb) list_setting_number_pane_vc_t3_ParamLimits

0x5266,	// (0x0001fecb) list_setting_number_pane_vc_t3

0x0002,

0xf7e7,	// (0x0002a44c) list_setting_number_pane_vc_t_ParamLimits

0xf7e7,	// (0x0002a44c) list_setting_number_pane_vc_t

0x5284,	// (0x0001fee9) set_value_pane_vc_ParamLimits

0x5284,	// (0x0001fee9) set_value_pane_vc

0xb224,	// (0x00025e89) list_double2_graphic_pane_vc_ParamLimits

0xb224,	// (0x00025e89) list_double2_graphic_pane_vc

0xb224,	// (0x00025e89) list_double2_large_graphic_pane_vc_ParamLimits

0xb224,	// (0x00025e89) list_double2_large_graphic_pane_vc

0xb224,	// (0x00025e89) list_double2_pane_vc_ParamLimits

0xb224,	// (0x00025e89) list_double2_pane_vc

0xb224,	// (0x00025e89) list_double_graphic_heading_pane_vc_ParamLimits

0xb224,	// (0x00025e89) list_double_graphic_heading_pane_vc

0xb224,	// (0x00025e89) list_double_graphic_pane_vc_ParamLimits

0xb224,	// (0x00025e89) list_double_graphic_pane_vc

0xb224,	// (0x00025e89) list_double_heading_pane_vc_ParamLimits

0xb224,	// (0x00025e89) list_double_heading_pane_vc

0xb236,	// (0x00025e9b) list_double_large_graphic_pane_vc_ParamLimits

0xb236,	// (0x00025e9b) list_double_large_graphic_pane_vc

0xb224,	// (0x00025e89) list_double_number_pane_vc_ParamLimits

0xb224,	// (0x00025e89) list_double_number_pane_vc

0xb224,	// (0x00025e89) list_double_pane_vc_ParamLimits

0xb224,	// (0x00025e89) list_double_pane_vc

0xb224,	// (0x00025e89) list_double_time_pane_vc_ParamLimits

0xb224,	// (0x00025e89) list_double_time_pane_vc

0xb224,	// (0x00025e89) list_setting_number_pane_vc_ParamLimits

0xb224,	// (0x00025e89) list_setting_number_pane_vc

0xb224,	// (0x00025e89) list_setting_pane_vc_ParamLimits

0xb224,	// (0x00025e89) list_setting_pane_vc

0xb224,	// (0x00025e89) list_single_graphic_heading_pane_vc_ParamLimits

0xb224,	// (0x00025e89) list_single_graphic_heading_pane_vc

0xb224,	// (0x00025e89) list_single_heading_pane_vc_ParamLimits

0xb224,	// (0x00025e89) list_single_heading_pane_vc

0x535d,	// (0x0001ffc2) list_single_number_heading_pane_vc_ParamLimits

0x535d,	// (0x0001ffc2) list_single_number_heading_pane_vc

0x516a,	// (0x0001fdcf) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x516a,	// (0x0001fdcf) list_double_graphic_heading_pane_vc_g1

0x5176,	// (0x0001fddb) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5176,	// (0x0001fddb) list_double_graphic_heading_pane_vc_g2

0x5182,	// (0x0001fde7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5182,	// (0x0001fde7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002a415) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a415) list_double_graphic_heading_pane_vc_g

0x53de,	// (0x00020043) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x53de,	// (0x00020043) list_double_graphic_heading_pane_vc_t1

0x53fa,	// (0x0002005f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x53fa,	// (0x0002005f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ec,	// (0x0002a651) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ec,	// (0x0002a651) list_double_graphic_heading_pane_vc_t

0x521e,	// (0x0001fe83) list_setting_pane_vc_g1_ParamLimits

0x521e,	// (0x0001fe83) list_setting_pane_vc_g1

0x522a,	// (0x0001fe8f) list_setting_pane_vc_g2_ParamLimits

0x522a,	// (0x0001fe8f) list_setting_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a447) list_setting_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a447) list_setting_pane_vc_g

0x5418,	// (0x0002007d) list_setting_pane_vc_t1_ParamLimits

0x5418,	// (0x0002007d) list_setting_pane_vc_t1

0x5434,	// (0x00020099) list_setting_pane_vc_t2_ParamLimits

0x5434,	// (0x00020099) list_setting_pane_vc_t2

0x0001,

0xfa1a,	// (0x0002a67f) list_setting_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002a67f) list_setting_pane_vc_t

0x5284,	// (0x0001fee9) set_value_pane_cp_vc_ParamLimits

0x5284,	// (0x0001fee9) set_value_pane_cp_vc

0x5176,	// (0x0001fddb) list_single_number_heading_pane_vc_g1_ParamLimits

0x5176,	// (0x0001fddb) list_single_number_heading_pane_vc_g1

0x5182,	// (0x0001fde7) list_single_number_heading_pane_vc_g2_ParamLimits

0x5182,	// (0x0001fde7) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a43d) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a43d) list_single_number_heading_pane_vc_g

0x51ea,	// (0x0001fe4f) list_single_number_heading_pane_vc_t1_ParamLimits

0x51ea,	// (0x0001fe4f) list_single_number_heading_pane_vc_t1

0x5450,	// (0x000200b5) list_single_number_heading_pane_vc_t2_ParamLimits

0x5450,	// (0x000200b5) list_single_number_heading_pane_vc_t2

0x5464,	// (0x000200c9) list_single_number_heading_pane_vc_t3_ParamLimits

0x5464,	// (0x000200c9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1f,	// (0x0002a684) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x0002a684) list_single_number_heading_pane_vc_t

0x516a,	// (0x0001fdcf) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x516a,	// (0x0001fdcf) list_single_graphic_heading_pane_vc_g1

0x5176,	// (0x0001fddb) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5176,	// (0x0001fddb) list_single_graphic_heading_pane_vc_g4

0x5182,	// (0x0001fde7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5182,	// (0x0001fde7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0002a415) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a415) list_single_graphic_heading_pane_vc_g

0x51ea,	// (0x0001fe4f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x51ea,	// (0x0001fe4f) list_single_graphic_heading_pane_vc_t1

0x5476,	// (0x000200db) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5476,	// (0x000200db) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa26,	// (0x0002a68b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0002a68b) list_single_graphic_heading_pane_vc_t

0x5176,	// (0x0001fddb) list_double2_pane_vc_g1_ParamLimits

0x5176,	// (0x0001fddb) list_double2_pane_vc_g1

0x5182,	// (0x0001fde7) list_double2_pane_vc_g2_ParamLimits

0x5182,	// (0x0001fde7) list_double2_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a43d) list_double2_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a43d) list_double2_pane_vc_g

0x548a,	// (0x000200ef) list_double2_pane_vc_t1_ParamLimits

0x548a,	// (0x000200ef) list_double2_pane_vc_t1

0x54a0,	// (0x00020105) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x54a0,	// (0x00020105) list_double2_large_graphic_pane_vc_g1

0x5176,	// (0x0001fddb) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5176,	// (0x0001fddb) list_double2_large_graphic_pane_vc_g2

0x5182,	// (0x0001fde7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5182,	// (0x0001fde7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa2b,	// (0x0002a690) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x0002a690) list_double2_large_graphic_pane_vc_g

0x54ac,	// (0x00020111) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x54ac,	// (0x00020111) list_double2_large_graphic_pane_vc_t1

0x54c2,	// (0x00020127) list_double_time_pane_vc_g1_ParamLimits

0x54c2,	// (0x00020127) list_double_time_pane_vc_g1

0x54ce,	// (0x00020133) list_double_time_pane_vc_g2_ParamLimits

0x54ce,	// (0x00020133) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0002a697) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0002a697) list_double_time_pane_vc_g

0x54da,	// (0x0002013f) list_double_time_pane_vc_t1_ParamLimits

0x54da,	// (0x0002013f) list_double_time_pane_vc_t1

0x54fe,	// (0x00020163) list_double_time_pane_vc_t2_ParamLimits

0x54fe,	// (0x00020163) list_double_time_pane_vc_t2

0x554d,	// (0x000201b2) list_double_time_pane_vc_t3_ParamLimits

0x554d,	// (0x000201b2) list_double_time_pane_vc_t3

0x555f,	// (0x000201c4) list_double_time_pane_vc_t4_ParamLimits

0x555f,	// (0x000201c4) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0002a69c) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0002a69c) list_double_time_pane_vc_t

0x5176,	// (0x0001fddb) list_double_pane_vc_g1_ParamLimits

0x5176,	// (0x0001fddb) list_double_pane_vc_g1

0x5182,	// (0x0001fde7) list_double_pane_vc_g2_ParamLimits

0x5182,	// (0x0001fde7) list_double_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a43d) list_double_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a43d) list_double_pane_vc_g

0x5573,	// (0x000201d8) list_double_pane_vc_t1_ParamLimits

0x5573,	// (0x000201d8) list_double_pane_vc_t1

0x5587,	// (0x000201ec) list_double_pane_vc_t2_ParamLimits

0x5587,	// (0x000201ec) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0002a6a5) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0002a6a5) list_double_pane_vc_t

0x5176,	// (0x0001fddb) list_double_number_pane_vc_g1_ParamLimits

0x5176,	// (0x0001fddb) list_double_number_pane_vc_g1

0x5182,	// (0x0001fde7) list_double_number_pane_vc_g2_ParamLimits

0x5182,	// (0x0001fde7) list_double_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a43d) list_double_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a43d) list_double_number_pane_vc_g

0x559f,	// (0x00020204) list_double_number_pane_vc_t1_ParamLimits

0x559f,	// (0x00020204) list_double_number_pane_vc_t1

0x55b1,	// (0x00020216) list_double_number_pane_vc_t2_ParamLimits

0x55b1,	// (0x00020216) list_double_number_pane_vc_t2

0x55c5,	// (0x0002022a) list_double_number_pane_vc_t3_ParamLimits

0x55c5,	// (0x0002022a) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0002a6aa) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0002a6aa) list_double_number_pane_vc_t

0x55dd,	// (0x00020242) list_double_large_graphic_pane_vc_g1_ParamLimits

0x55dd,	// (0x00020242) list_double_large_graphic_pane_vc_g1

0x55ff,	// (0x00020264) list_double_large_graphic_pane_vc_g2_ParamLimits

0x55ff,	// (0x00020264) list_double_large_graphic_pane_vc_g2

0x5613,	// (0x00020278) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5613,	// (0x00020278) list_double_large_graphic_pane_vc_g3

0x5622,	// (0x00020287) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5622,	// (0x00020287) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0002a6b1) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0002a6b1) list_double_large_graphic_pane_vc_g

0x562e,	// (0x00020293) list_double_large_graphic_pane_vc_t1_ParamLimits

0x562e,	// (0x00020293) list_double_large_graphic_pane_vc_t1

0x564a,	// (0x000202af) list_double_large_graphic_pane_vc_t2_ParamLimits

0x564a,	// (0x000202af) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0002a6ba) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0002a6ba) list_double_large_graphic_pane_vc_t

0x5176,	// (0x0001fddb) list_double_heading_pane_vc_g1_ParamLimits

0x5176,	// (0x0001fddb) list_double_heading_pane_vc_g1

0x5182,	// (0x0001fde7) list_double_heading_pane_vc_g2_ParamLimits

0x5182,	// (0x0001fde7) list_double_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a43d) list_double_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a43d) list_double_heading_pane_vc_g

0x566c,	// (0x000202d1) list_double_heading_pane_vc_t1_ParamLimits

0x566c,	// (0x000202d1) list_double_heading_pane_vc_t1

0x51ea,	// (0x0001fe4f) list_double_heading_pane_vc_t2_ParamLimits

0x51ea,	// (0x0001fe4f) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0002a6bf) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0002a6bf) list_double_heading_pane_vc_t

0x5680,	// (0x000202e5) list_double_graphic_pane_vc_g1_ParamLimits

0x5680,	// (0x000202e5) list_double_graphic_pane_vc_g1

0x568c,	// (0x000202f1) list_double_graphic_pane_vc_g2_ParamLimits

0x568c,	// (0x000202f1) list_double_graphic_pane_vc_g2

0x5176,	// (0x0001fddb) list_double_graphic_pane_vc_g3_ParamLimits

0x5176,	// (0x0001fddb) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0002a6c4) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0002a6c4) list_double_graphic_pane_vc_g

0x56a9,	// (0x0002030e) list_double_graphic_pane_vc_t1_ParamLimits

0x56a9,	// (0x0002030e) list_double_graphic_pane_vc_t1

0x56d3,	// (0x00020338) list_double_graphic_pane_vc_t2_ParamLimits

0x56d3,	// (0x00020338) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0002a6cd) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0002a6cd) list_double_graphic_pane_vc_t

0x5af4,	// (0x00020759) aid_size_cell_fastswap

0x5afc,	// (0x00020761) aid_size_cell_touch_ParamLimits

0x5afc,	// (0x00020761) aid_size_cell_touch

0x5d57,	// (0x000209bc) popup_fast_swap_wide_window_ParamLimits

0x5d57,	// (0x000209bc) popup_fast_swap_wide_window

0x5e6b,	// (0x00020ad0) touch_pane_ParamLimits

0x5e6b,	// (0x00020ad0) touch_pane

0x879a,	// (0x000233ff) button_value_adjust_pane_cp2

0x4e51,	// (0x0001fab6) button_value_adjust_pane_cp4

0x4e71,	// (0x0001fad6) form_field_data_pane_cp2

0x4e90,	// (0x0001faf5) form_field_data_wide_pane_cp2

0x8c1b,	// (0x00023880) bg_scroll_pane_ParamLimits

0x60f9,	// (0x00020d5e) scroll_handle_pane_ParamLimits

0x610d,	// (0x00020d72) scroll_sc2_down_pane_ParamLimits

0x610d,	// (0x00020d72) scroll_sc2_down_pane

0x8c4c,	// (0x000238b1) scroll_sc2_up_pane_ParamLimits

0x8c4c,	// (0x000238b1) scroll_sc2_up_pane

0xbe31,	// (0x00026a96) grid_wheel_folder_pane_g1_ParamLimits

0xbe31,	// (0x00026a96) grid_wheel_folder_pane_g1

0x62d2,	// (0x00020f37) clock_nsta_pane_cp2_ParamLimits

0x62d2,	// (0x00020f37) clock_nsta_pane_cp2

0x8992,	// (0x000235f7) listscroll_midp_pane_ParamLimits

0x944c,	// (0x000240b1) midp_canvas_pane

0x9734,	// (0x00024399) nsta_clock_indic_pane

0x9768,	// (0x000243cd) listscroll_form_pane_vc

0x9770,	// (0x000243d5) listscroll_set_pane_vc_ParamLimits

0x9770,	// (0x000243d5) listscroll_set_pane_vc

0x9875,	// (0x000244da) clock_nsta_pane

0x98ea,	// (0x0002454f) indicator_nsta_pane

0x9bca,	// (0x0002482f) bg_popup_sub_pane_cp2_ParamLimits

0x9bde,	// (0x00024843) find_pane_cp2_ParamLimits

0x9bde,	// (0x00024843) find_pane_cp2

0x9bf4,	// (0x00024859) grid_toobar_pane_ParamLimits

0x9cd4,	// (0x00024939) list_form_gen_pane_vc_ParamLimits

0x9cd4,	// (0x00024939) list_form_gen_pane_vc

0x9cea,	// (0x0002494f) scroll_pane_cp8_vc_ParamLimits

0x9cea,	// (0x0002494f) scroll_pane_cp8_vc

0x9d66,	// (0x000249cb) data_form_wide_pane_vc_ParamLimits

0x9d66,	// (0x000249cb) data_form_wide_pane_vc

0x9d72,	// (0x000249d7) form_field_data_wide_pane_vc_g1

0x9d7a,	// (0x000249df) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d7a,	// (0x000249df) form_field_data_wide_pane_vc_t1

0x87ae,	// (0x00023413) input_focus_pane_cp6_vc_ParamLimits

0x87ae,	// (0x00023413) input_focus_pane_cp6_vc

0xa0a6,	// (0x00024d0b) list_midp_pane_ParamLimits

0xa0b2,	// (0x00024d17) scroll_pane_cp16_ParamLimits

0xa0b2,	// (0x00024d17) scroll_pane_cp16

0xa100,	// (0x00024d65) button_value_adjust_pane_ParamLimits

0xa100,	// (0x00024d65) button_value_adjust_pane

0xb07e,	// (0x00025ce3) button_value_adjust_pane_cp6_ParamLimits

0xb07e,	// (0x00025ce3) button_value_adjust_pane_cp6

0xb1a8,	// (0x00025e0d) settings_code_pane_cp_ParamLimits

0xb1a8,	// (0x00025e0d) settings_code_pane_cp

0x7e55,	// (0x00022aba) cell_touch_pane_g1

0x7e55,	// (0x00022aba) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002a368) cell_touch_pane_g

0xb773,	// (0x000263d8) cell_touch_pane_cp_ParamLimits

0xb773,	// (0x000263d8) cell_touch_pane_cp

0xb783,	// (0x000263e8) cell_touch_pane_ParamLimits

0xb783,	// (0x000263e8) cell_touch_pane

0x7e55,	// (0x00022aba) scroll_sc2_down_pane_g1

0x7e55,	// (0x00022aba) scroll_sc2_up_pane_g1

0x7e5f,	// (0x00022ac4) bg_set_opt_pane_cp4_vc

0xb795,	// (0x000263fa) list_set_graphic_pane_vc_g1_ParamLimits

0xb795,	// (0x000263fa) list_set_graphic_pane_vc_g1

0xb7a1,	// (0x00026406) list_set_graphic_pane_vc_g2_ParamLimits

0xb7a1,	// (0x00026406) list_set_graphic_pane_vc_g2

0x0001,

0xf9f1,	// (0x0002a656) list_set_graphic_pane_vc_g_ParamLimits

0xf9f1,	// (0x0002a656) list_set_graphic_pane_vc_g

0xb7ad,	// (0x00026412) text_primary_small_cp13_vc_ParamLimits

0xb7ad,	// (0x00026412) text_primary_small_cp13_vc

0xb7c5,	// (0x0002642a) list_set_graphic_pane_vc_ParamLimits

0xb7c5,	// (0x0002642a) list_set_graphic_pane_vc

0x7e5f,	// (0x00022ac4) input_focus_pane_cp2_vc

0x7e55,	// (0x00022aba) setting_code_pane_vc_g1

0x7f8a,	// (0x00022bef) setting_code_pane_vc_t1

0xb7d8,	// (0x0002643d) set_text_pane_vc_t1_ParamLimits

0xb7d8,	// (0x0002643d) set_text_pane_vc_t1

0x7e5f,	// (0x00022ac4) input_focus_pane_cp1_vc

0xb7f4,	// (0x00026459) list_set_text_pane_vc

0x7e55,	// (0x00022aba) setting_text_pane_vc_g1

0x7e5f,	// (0x00022ac4) bg_set_opt_pane_cp2_vc

0x7f81,	// (0x00022be6) setting_slider_graphic_pane_vc_g1

0xb7fe,	// (0x00026463) setting_slider_graphic_pane_vc_t1

0xb80e,	// (0x00026473) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f6,	// (0x0002a65b) setting_slider_graphic_pane_vc_t

0xb81e,	// (0x00026483) slider_set_pane_cp_vc

0xb826,	// (0x0002648b) slider_set_pane_vc_g1

0xb82f,	// (0x00026494) slider_set_pane_vc_g2

0x0006,

0xf9fb,	// (0x0002a660) slider_set_pane_vc_g

0x8809,	// (0x0002346e) set_opt_bg_pane_g1_copy1

0x8811,	// (0x00023476) set_opt_bg_pane_g2_copy1

0xb85b,	// (0x000264c0) set_opt_bg_pane_g3_copy1

0x8821,	// (0x00023486) set_opt_bg_pane_g4_copy1

0x8829,	// (0x0002348e) set_opt_bg_pane_g5_copy1

0x8831,	// (0x00023496) set_opt_bg_pane_g6_copy1

0xb865,	// (0x000264ca) set_opt_bg_pane_g7_copy1

0xb86d,	// (0x000264d2) set_opt_bg_pane_g8_copy1

0xb877,	// (0x000264dc) set_opt_bg_pane_g9_copy1

0x7e5f,	// (0x00022ac4) bg_set_opt_pane_cp_vc

0xb881,	// (0x000264e6) setting_slider_pane_vc_t1

0xb890,	// (0x000264f5) setting_slider_pane_vc_t2

0xb8a0,	// (0x00026505) setting_slider_pane_vc_t3

0x0002,

0xfa0a,	// (0x0002a66f) setting_slider_pane_vc_t

0xb8b0,	// (0x00026515) slider_set_pane_vc

0x6c0e,	// (0x00021873) volume_set_pane_vc_g1

0x6c17,	// (0x0002187c) volume_set_pane_vc_g2

0x6c20,	// (0x00021885) volume_set_pane_vc_g3

0x6c29,	// (0x0002188e) volume_set_pane_vc_g4

0x6c32,	// (0x00021897) volume_set_pane_vc_g5

0x6c3b,	// (0x000218a0) volume_set_pane_vc_g6

0x6c44,	// (0x000218a9) volume_set_pane_vc_g7

0x6c4d,	// (0x000218b2) volume_set_pane_vc_g8

0x6c56,	// (0x000218bb) volume_set_pane_vc_g9

0x6c5f,	// (0x000218c4) volume_set_pane_vc_g10

0x0009,

0xf8af,	// (0x0002a514) volume_set_pane_vc_g

0xb8b8,	// (0x0002651d) volume_set_pane_vc

0xb8c0,	// (0x00026525) button_value_adjust_pane_cp1_vc

0xb8ca,	// (0x0002652f) list_highlight_pane_cp2_vc

0xb8d3,	// (0x00026538) list_set_pane_vc_ParamLimits

0xb8d3,	// (0x00026538) list_set_pane_vc

0xb931,	// (0x00026596) main_pane_set_vc_t1_ParamLimits

0xb931,	// (0x00026596) main_pane_set_vc_t1

0xb946,	// (0x000265ab) main_pane_set_vc_t2_ParamLimits

0xb946,	// (0x000265ab) main_pane_set_vc_t2

0xb958,	// (0x000265bd) main_pane_set_vc_t3_ParamLimits

0xb958,	// (0x000265bd) main_pane_set_vc_t3

0xb96c,	// (0x000265d1) main_pane_set_vc_t4_ParamLimits

0xb96c,	// (0x000265d1) main_pane_set_vc_t4

0x0003,

0xfa11,	// (0x0002a676) main_pane_set_vc_t_ParamLimits

0xfa11,	// (0x0002a676) main_pane_set_vc_t

0xb980,	// (0x000265e5) setting_code_pane_vc_ParamLimits

0xb980,	// (0x000265e5) setting_code_pane_vc

0xb991,	// (0x000265f6) setting_slider_graphic_pane_vc

0xb991,	// (0x000265f6) setting_slider_pane_vc

0xb991,	// (0x000265f6) setting_text_pane_vc

0xb991,	// (0x000265f6) setting_volume_pane_vc

0xb99b,	// (0x00026600) scroll_pane_cp121_vc

0x8788,	// (0x000233ed) set_content_pane_vc

0xb9a3,	// (0x00026608) button_value_adjust_pane_g1

0xb9ac,	// (0x00026611) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0002a6d2) button_value_adjust_pane_g

0xb9b5,	// (0x0002661a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9b5,	// (0x0002661a) form_field_slider_wide_pane_vc_t1

0xb9c9,	// (0x0002662e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9c9,	// (0x0002662e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0002a6d7) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0002a6d7) form_field_slider_wide_pane_vc_t

0x81ba,	// (0x00022e1f) input_focus_pane_cp10_vc_ParamLimits

0x81ba,	// (0x00022e1f) input_focus_pane_cp10_vc

0xb9f7,	// (0x0002665c) slider_cont_pane_cp1_vc_ParamLimits

0xb9f7,	// (0x0002665c) slider_cont_pane_cp1_vc

0xba09,	// (0x0002666e) slider_form_pane_g1_cp2

0xb82f,	// (0x00026494) slider_form_pane_g2_cp2

0xba36,	// (0x0002669b) form_field_slider_pane_vc_t3

0xba44,	// (0x000266a9) form_field_slider_pane_vc_t4

0xba52,	// (0x000266b7) slider_form_pane_vc_ParamLimits

0xba52,	// (0x000266b7) slider_form_pane_vc

0xba5f,	// (0x000266c4) form_field_slider_pane_vc_t1_ParamLimits

0xba5f,	// (0x000266c4) form_field_slider_pane_vc_t1

0xb9c9,	// (0x0002662e) form_field_slider_pane_vc_t2_ParamLimits

0xb9c9,	// (0x0002662e) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0002a6e9) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0002a6e9) form_field_slider_pane_vc_t

0x81ba,	// (0x00022e1f) input_focus_pane_cp9_vc_ParamLimits

0x81ba,	// (0x00022e1f) input_focus_pane_cp9_vc

0xba7b,	// (0x000266e0) slider_cont_pane_vc_ParamLimits

0xba7b,	// (0x000266e0) slider_cont_pane_vc

0xba8f,	// (0x000266f4) list_form_graphic_pane_cp_vc_ParamLimits

0xba8f,	// (0x000266f4) list_form_graphic_pane_cp_vc

0x9d72,	// (0x000249d7) form_field_popup_wide_pane_vc_g1

0xbaa4,	// (0x00026709) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbaa4,	// (0x00026709) form_field_popup_wide_pane_vc_t1

0x87ae,	// (0x00023413) input_focus_pane_cp8_vc_ParamLimits

0x87ae,	// (0x00023413) input_focus_pane_cp8_vc

0xbae9,	// (0x0002674e) list_form_wide_pane_vc_ParamLimits

0xbae9,	// (0x0002674e) list_form_wide_pane_vc

0xbaf5,	// (0x0002675a) list_form_graphic_pane_vc_g1

0xbafd,	// (0x00026762) list_form_graphic_pane_vc_t1_ParamLimits

0xbafd,	// (0x00026762) list_form_graphic_pane_vc_t1

0x7f3f,	// (0x00022ba4) list_highlight_pane_cp5_vc_ParamLimits

0x7f3f,	// (0x00022ba4) list_highlight_pane_cp5_vc

0xbb19,	// (0x0002677e) list_form_graphic_pane_vc_ParamLimits

0xbb19,	// (0x0002677e) list_form_graphic_pane_vc

0x9d72,	// (0x000249d7) form_field_popup_pane_vc_g1

0xbb2f,	// (0x00026794) form_field_popup_pane_vc_t1_ParamLimits

0xbb2f,	// (0x00026794) form_field_popup_pane_vc_t1

0x87ae,	// (0x00023413) input_focus_pane_cp7_vc_ParamLimits

0x87ae,	// (0x00023413) input_focus_pane_cp7_vc

0xbb46,	// (0x000267ab) list_form_pane_vc_ParamLimits

0xbb46,	// (0x000267ab) list_form_pane_vc

0xbb52,	// (0x000267b7) data_form_pane_vc_t1_ParamLimits

0xbb52,	// (0x000267b7) data_form_pane_vc_t1

0x8809,	// (0x0002346e) input_focus_pane_vc_g1

0x8811,	// (0x00023476) input_focus_pane_vc_g2

0x8819,	// (0x0002347e) input_focus_pane_vc_g3

0x8821,	// (0x00023486) input_focus_pane_vc_g4

0x8829,	// (0x0002348e) input_focus_pane_vc_g5

0x8831,	// (0x00023496) input_focus_pane_vc_g6

0x8839,	// (0x0002349e) input_focus_pane_vc_g7

0x8841,	// (0x000234a6) input_focus_pane_vc_g8

0x8849,	// (0x000234ae) input_focus_pane_vc_g9

0x7e55,	// (0x00022aba) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002a2f1) input_focus_pane_vc_g

0x9d66,	// (0x000249cb) data_form_pane_vc_ParamLimits

0x9d66,	// (0x000249cb) data_form_pane_vc

0x9d72,	// (0x000249d7) form_field_data_pane_vc_g1

0xbb6d,	// (0x000267d2) form_field_data_pane_vc_t1_ParamLimits

0xbb6d,	// (0x000267d2) form_field_data_pane_vc_t1

0x87ae,	// (0x00023413) input_focus_pane_vc_ParamLimits

0x87ae,	// (0x00023413) input_focus_pane_vc

0xbb87,	// (0x000267ec) button_value_adjust_pane_cp3_vc

0xbb8f,	// (0x000267f4) button_value_adjust_pane_cp5_vc

0xbb97,	// (0x000267fc) form_field_data_pane_vc_ParamLimits

0xbb97,	// (0x000267fc) form_field_data_pane_vc

0xbbae,	// (0x00026813) form_field_data_pane_vc_cp2

0xbbb6,	// (0x0002681b) form_field_data_wide_pane_vc_ParamLimits

0xbbb6,	// (0x0002681b) form_field_data_wide_pane_vc

0xbbcc,	// (0x00026831) form_field_data_wide_pane_vc_cp2

0xbbd4,	// (0x00026839) form_field_popup_pane_vc_ParamLimits

0xbbd4,	// (0x00026839) form_field_popup_pane_vc

0xbbeb,	// (0x00026850) form_field_popup_wide_pane_vc_ParamLimits

0xbbeb,	// (0x00026850) form_field_popup_wide_pane_vc

0xbc01,	// (0x00026866) form_field_slider_pane_vc_ParamLimits

0xbc01,	// (0x00026866) form_field_slider_pane_vc

0xbc14,	// (0x00026879) form_field_slider_wide_pane_vc_ParamLimits

0xbc14,	// (0x00026879) form_field_slider_wide_pane_vc

0xbc27,	// (0x0002688c) grid_touch_1_pane_ParamLimits

0xbc27,	// (0x0002688c) grid_touch_1_pane

0xbc33,	// (0x00026898) grid_touch_2_pane_ParamLimits

0xbc33,	// (0x00026898) grid_touch_2_pane

0x96ff,	// (0x00024364) touch_pane_g1_ParamLimits

0x96ff,	// (0x00024364) touch_pane_g1

0xbc4b,	// (0x000268b0) cell_app_pane_cp_wide_ParamLimits

0xbc4b,	// (0x000268b0) cell_app_pane_cp_wide

0xbc5c,	// (0x000268c1) grid_popup_fast_wide_pane_ParamLimits

0xbc5c,	// (0x000268c1) grid_popup_fast_wide_pane

0xbc70,	// (0x000268d5) scroll_pane_cp19_ParamLimits

0xbc70,	// (0x000268d5) scroll_pane_cp19

0x7e5f,	// (0x00022ac4) bg_popup_window_pane_cp20

0xbc84,	// (0x000268e9) listscroll_popup_fast_wide_pane

0x7f3f,	// (0x00022ba4) grid_indicator_nsta_pane

0xbc8c,	// (0x000268f1) clock_nsta_pane_g1

0xbc95,	// (0x000268fa) clock_nsta_pane_t1

0xbcb1,	// (0x00026916) cell_indicator_nsta_pane_ParamLimits

0xbcb1,	// (0x00026916) cell_indicator_nsta_pane

0xbce2,	// (0x00026947) cell_indicator_nsta_pane_g1

0xbcf0,	// (0x00026955) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0002a6fa) cell_indicator_nsta_pane_g

0xbcfd,	// (0x00026962) clock_nsta_pane_cp

0xbd05,	// (0x0002696a) indicator_nsta_pane_cp

0xbd0d,	// (0x00026972) nsta_clock_indic_pane_g1

0x8008,	// (0x00022c6d) grid_indicator_pane

0x8d41,	// (0x000239a6) scroll_pane_cp29

0x6221,	// (0x00020e86) indicator_nsta_pane_cp2_ParamLimits

0x6221,	// (0x00020e86) indicator_nsta_pane_cp2

0x7f3f,	// (0x00022ba4) main_apps_wheel_pane

0x9f87,	// (0x00024bec) form_midp_field_text_pane_ParamLimits

0xa0d2,	// (0x00024d37) scroll_bar_cp050_ParamLimits

0xbd6e,	// (0x000269d3) cell_indicator_pane_ParamLimits

0xbd6e,	// (0x000269d3) cell_indicator_pane

0xbd85,	// (0x000269ea) cell_indicator_pane_g1

0xbd8f,	// (0x000269f4) grid_wheel_folder_pane_ParamLimits

0xbd8f,	// (0x000269f4) grid_wheel_folder_pane

0xbda5,	// (0x00026a0a) list_wheel_apps_pane_ParamLimits

0xbda5,	// (0x00026a0a) list_wheel_apps_pane

0xbdb6,	// (0x00026a1b) main_apps_wheel_pane_g1_ParamLimits

0xbdb6,	// (0x00026a1b) main_apps_wheel_pane_g1

0xbdca,	// (0x00026a2f) main_apps_wheel_pane_g2_ParamLimits

0xbdca,	// (0x00026a2f) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0002a716) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0002a716) main_apps_wheel_pane_g

0xbde2,	// (0x00026a47) main_apps_wheel_pane_t1_ParamLimits

0xbde2,	// (0x00026a47) main_apps_wheel_pane_t1

0xbe05,	// (0x00026a6a) list_wheel_apps_pane_g1

0xbe0d,	// (0x00026a72) list_wheel_apps_pane_g2

0xbe15,	// (0x00026a7a) list_wheel_apps_pane_g3

0xbe1d,	// (0x00026a82) list_wheel_apps_pane_g4

0xbe27,	// (0x00026a8c) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0002a71b) list_wheel_apps_pane_g

0x92c4,	// (0x00023f29) navi_icon_text_pane

0x97a4,	// (0x00024409) aid_fill_nsta

0xbe4a,	// (0x00026aaf) navi_icon_text_pane_g1

0xbe56,	// (0x00026abb) navi_icon_text_pane_t1

0x9157,	// (0x00023dbc) list_set_graphic_pane_t1_ParamLimits

0x9157,	// (0x00023dbc) list_set_graphic_pane_t1

0xa82d,	// (0x00025492) popup_midp_note_alarm_window_t6_ParamLimits

0xa82d,	// (0x00025492) popup_midp_note_alarm_window_t6

0xa83f,	// (0x000254a4) popup_midp_note_alarm_window_t7_ParamLimits

0xa83f,	// (0x000254a4) popup_midp_note_alarm_window_t7

0xa851,	// (0x000254b6) popup_midp_note_alarm_window_t8_ParamLimits

0xa851,	// (0x000254b6) popup_midp_note_alarm_window_t8

0xa863,	// (0x000254c8) popup_midp_note_alarm_window_t9_ParamLimits

0xa863,	// (0x000254c8) popup_midp_note_alarm_window_t9

0xa875,	// (0x000254da) popup_midp_note_alarm_window_t10_ParamLimits

0xa875,	// (0x000254da) popup_midp_note_alarm_window_t10

0xa887,	// (0x000254ec) popup_midp_note_alarm_window_t11_ParamLimits

0xa887,	// (0x000254ec) popup_midp_note_alarm_window_t11

0xa899,	// (0x000254fe) scroll_pane_cp17_ParamLimits

0xa899,	// (0x000254fe) scroll_pane_cp17

0x6c0e,	// (0x00021873) volume_small_pane_cp_g1

0x6f03,	// (0x00021b68) volume_small_pane_cp_g2

0x6f0c,	// (0x00021b71) volume_small_pane_cp_g3

0x6f15,	// (0x00021b7a) volume_small_pane_cp_g4

0x6f1e,	// (0x00021b83) volume_small_pane_cp_g5

0x6f27,	// (0x00021b8c) volume_small_pane_cp_g6

0x6f30,	// (0x00021b95) volume_small_pane_cp_g7

0x6f39,	// (0x00021b9e) volume_small_pane_cp_g8

0x6f42,	// (0x00021ba7) volume_small_pane_cp_g9

0x6f4b,	// (0x00021bb0) volume_small_pane_cp_g10

0x9515,	// (0x0002417a) midp_ticker_pane_g1_ParamLimits

0x9521,	// (0x00024186) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002a3bd) midp_ticker_pane_g_ParamLimits

0x952d,	// (0x00024192) midp_ticker_pane_t1_ParamLimits

0x97ba,	// (0x0002441f) aid_fill_nsta_2

0xa0be,	// (0x00024d23) list_form2_midp_pane

0xb1f3,	// (0x00025e58) midp_editing_number_pane_ParamLimits

0xb202,	// (0x00025e67) midp_ticker_pane_ParamLimits

0xbe68,	// (0x00026acd) form2_midp_field_pane

0xbe98,	// (0x00026afd) scroll_pane_cp51

0xbeb8,	// (0x00026b1d) form2_midp_button_pane_ParamLimits

0xbeb8,	// (0x00026b1d) form2_midp_button_pane

0xbeca,	// (0x00026b2f) form2_midp_content_pane_ParamLimits

0xbeca,	// (0x00026b2f) form2_midp_content_pane

0xbee4,	// (0x00026b49) form2_midp_field_choice_group_pane

0xbeec,	// (0x00026b51) form2_midp_field_pane_g1

0xbef4,	// (0x00026b59) form2_midp_field_pane_g2

0xbefc,	// (0x00026b61) form2_midp_field_pane_g3

0xbf04,	// (0x00026b69) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0002a740) form2_midp_field_pane_g

0xbf0c,	// (0x00026b71) form2_midp_gauge_slider_pane

0xbf14,	// (0x00026b79) form2_midp_gauge_wait_pane

0xbf1c,	// (0x00026b81) form2_midp_image_pane_ParamLimits

0xbf1c,	// (0x00026b81) form2_midp_image_pane

0xbf37,	// (0x00026b9c) form2_midp_label_pane_ParamLimits

0xbf37,	// (0x00026b9c) form2_midp_label_pane

0xbf50,	// (0x00026bb5) form2_midp_label_pane_cp_ParamLimits

0xbf50,	// (0x00026bb5) form2_midp_label_pane_cp

0xbf71,	// (0x00026bd6) form2_midp_string_pane_ParamLimits

0xbf71,	// (0x00026bd6) form2_midp_string_pane

0x56fd,	// (0x00020362) form2_midp_text_pane_ParamLimits

0x56fd,	// (0x00020362) form2_midp_text_pane

0xbf83,	// (0x00026be8) form2_midp_time_pane

0xbf93,	// (0x00026bf8) input_focus_pane_cp51_ParamLimits

0xbf93,	// (0x00026bf8) input_focus_pane_cp51

0xbfab,	// (0x00026c10) form2_midp_label_pane_t1_ParamLimits

0xbfab,	// (0x00026c10) form2_midp_label_pane_t1

0x5718,	// (0x0002037d) form2_mdip_text_pane_t1_ParamLimits

0x5718,	// (0x0002037d) form2_mdip_text_pane_t1

0x5736,	// (0x0002039b) form2_midp_time_pane_t1

0xbff4,	// (0x00026c59) form2_midp_gauge_slider_pane_t1

0xc006,	// (0x00026c6b) form2_midp_gauge_slider_pane_t2

0xc018,	// (0x00026c7d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0002a749) form2_midp_gauge_slider_pane_t

0xc02a,	// (0x00026c8f) form2_midp_slider_pane

0xc036,	// (0x00026c9b) form2_midp_gauge_wait_pane_t1

0xc044,	// (0x00026ca9) form2_midp_wait_pane_ParamLimits

0xc044,	// (0x00026ca9) form2_midp_wait_pane

0x9db9,	// (0x00024a1e) list_single_2graphic_pane_cp4_ParamLimits

0x9db9,	// (0x00024a1e) list_single_2graphic_pane_cp4

0xc06f,	// (0x00026cd4) list_single_midp_graphic_pane_cp_ParamLimits

0xc06f,	// (0x00026cd4) list_single_midp_graphic_pane_cp

0x7e5f,	// (0x00022ac4) list_highlight_pane_cp20

0xc09e,	// (0x00026d03) list_single_2graphic_pane_g1_cp4

0xc0a6,	// (0x00026d0b) list_single_2graphic_pane_g2_cp4

0xc0ae,	// (0x00026d13) list_single_2graphic_pane_t1_cp4

0x7f3f,	// (0x00022ba4) list_highlight_pane_cp21

0xc0bd,	// (0x00026d22) list_single_midp_graphic_pane_g4_cp

0xc0cc,	// (0x00026d31) list_single_midp_graphic_pane_t1_cp

0xc0e1,	// (0x00026d46) form2_mdip_string_pane_t1_ParamLimits

0xc0e1,	// (0x00026d46) form2_mdip_string_pane_t1

0x7e5f,	// (0x00022ac4) bg_wml_button_pane_cp2

0x7e55,	// (0x00022aba) form2_midp_image_pane_g1

0x4c3b,	// (0x0001f8a0) list_double_large_graphic_pane_g5_ParamLimits

0x4c3b,	// (0x0001f8a0) list_double_large_graphic_pane_g5

0x8992,	// (0x000235f7) midp_form_pane_ParamLimits

0x7f3f,	// (0x00022ba4) main_apps_wheel_pane_ParamLimits

0x68dc,	// (0x00021541) popup_preview_window_ParamLimits

0x68dc,	// (0x00021541) popup_preview_window

0x6a97,	// (0x000216fc) popup_touch_info_window_ParamLimits

0x6a97,	// (0x000216fc) popup_touch_info_window

0x6ab5,	// (0x0002171a) popup_touch_menu_window_ParamLimits

0x6ab5,	// (0x0002171a) popup_touch_menu_window

0x7e4b,	// (0x00022ab0) bg_popup_sub_pane_cp6

0xc1da,	// (0x00026e3f) list_touch_menu_pane

0xc1e2,	// (0x00026e47) list_single_touch_menu_pane_ParamLimits

0xc1e2,	// (0x00026e47) list_single_touch_menu_pane

0xc1f8,	// (0x00026e5d) list_single_touch_menu_pane_t1

0x7f3f,	// (0x00022ba4) bg_popup_sub_pane_cp7_ParamLimits

0x7f3f,	// (0x00022ba4) bg_popup_sub_pane_cp7

0xc206,	// (0x00026e6b) heading_sub_pane

0xc20e,	// (0x00026e73) list_touch_info_pane_ParamLimits

0xc20e,	// (0x00026e73) list_touch_info_pane

0xc21d,	// (0x00026e82) list_single_touch_info_pane_ParamLimits

0xc21d,	// (0x00026e82) list_single_touch_info_pane

0xc22f,	// (0x00026e94) list_single_touch_info_pane_t1

0xc23d,	// (0x00026ea2) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0002a757) list_single_touch_info_pane_t

0x9444,	// (0x000240a9) bg_popup_heading_pane_cp

0xc24b,	// (0x00026eb0) heading_sub_pane_t1

0x9d00,	// (0x00024965) bg_popup_preview_window_pane_cp_ParamLimits

0x9d00,	// (0x00024965) bg_popup_preview_window_pane_cp

0xc206,	// (0x00026e6b) heading_preview_pane

0xc20e,	// (0x00026e73) list_preview_pane_ParamLimits

0xc20e,	// (0x00026e73) list_preview_pane

0xc259,	// (0x00026ebe) popup_preview_window_g1

0xc21d,	// (0x00026e82) list_single_preview_pane_ParamLimits

0xc21d,	// (0x00026e82) list_single_preview_pane

0xc261,	// (0x00026ec6) list_single_preview_pane_g1

0xc269,	// (0x00026ece) list_single_preview_pane_t1

0xc22f,	// (0x00026e94) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0002a75c) list_single_preview_pane_t

0xc277,	// (0x00026edc) bg_popup_heading_pane_cp2_ParamLimits

0xc277,	// (0x00026edc) bg_popup_heading_pane_cp2

0xc28d,	// (0x00026ef2) heading_preview_pane_g1

0xc295,	// (0x00026efa) heading_preview_pane_t1_ParamLimits

0xc295,	// (0x00026efa) heading_preview_pane_t1

0x802b,	// (0x00022c90) soft_indicator_pane_t1_ParamLimits

0x8721,	// (0x00023386) scroll_pane_ParamLimits

0x8c3a,	// (0x0002389f) scroll_sc2_left_pane

0x8c43,	// (0x000238a8) scroll_sc2_right_pane

0x8c62,	// (0x000238c7) scroll_bg_pane_g1_ParamLimits

0x8c77,	// (0x000238dc) scroll_bg_pane_g2_ParamLimits

0x8c8f,	// (0x000238f4) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002a348) scroll_bg_pane_g_ParamLimits

0x8c62,	// (0x000238c7) scroll_handle_pane_g1_ParamLimits

0x8cb1,	// (0x00023916) scroll_handle_pane_g2_ParamLimits

0x8c8f,	// (0x000238f4) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002a34f) scroll_handle_pane_g_ParamLimits

0x655d,	// (0x000211c2) popup_choice_list_window_ParamLimits

0x655d,	// (0x000211c2) popup_choice_list_window

0x9bd6,	// (0x0002483b) choice_list_pane

0x9c58,	// (0x000248bd) cell_toolbar_pane_t1

0x9c80,	// (0x000248e5) toolbar_button_pane_ParamLimits

0xad53,	// (0x000259b8) ai_gene_pane_1_t2_ParamLimits

0xad53,	// (0x000259b8) ai_gene_pane_1_t2

0x0001,

0xf90b,	// (0x0002a570) ai_gene_pane_1_t_ParamLimits

0xf90b,	// (0x0002a570) ai_gene_pane_1_t

0xc2b2,	// (0x00026f17) scroll_sc2_left_pane_g1

0xc2b2,	// (0x00026f17) scroll_sc2_right_pane_g1

0x9782,	// (0x000243e7) bg_popup_sub_pane_cp10

0xc2bc,	// (0x00026f21) list_choice_list_pane

0xc2d5,	// (0x00026f3a) list_single_choice_list_pane_ParamLimits

0xc2d5,	// (0x00026f3a) list_single_choice_list_pane

0xc2e8,	// (0x00026f4d) list_single_choice_list_pane_g1

0x8942,	// (0x000235a7) list_single_choice_list_pane_t1_ParamLimits

0x8942,	// (0x000235a7) list_single_choice_list_pane_t1

0xc2f0,	// (0x00026f55) choice_list_pane_g1

0xc2f8,	// (0x00026f5d) choice_list_pane_t1

0x7e4b,	// (0x00022ab0) input_focus_pane_cp11

0x8b19,	// (0x0002377e) title_pane_stacon_g2_ParamLimits

0x8b19,	// (0x0002377e) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002a32e) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002a32e) title_pane_stacon_g

0x9444,	// (0x000240a9) cursor_press_pane

0x6609,	// (0x0002126e) popup_fep_hwr_window_ParamLimits

0x6609,	// (0x0002126e) popup_fep_hwr_window

0x6683,	// (0x000212e8) popup_fep_vkb_window_ParamLimits

0x6683,	// (0x000212e8) popup_fep_vkb_window

0xc306,	// (0x00026f6b) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0002a785) fep_vkb_side_pane_g_ParamLimits

0x6f8d,	// (0x00021bf2) fep_hwr_candidate_pane_ParamLimits

0x6f8d,	// (0x00021bf2) fep_hwr_candidate_pane

0x6fb7,	// (0x00021c1c) fep_hwr_side_pane_ParamLimits

0x6fb7,	// (0x00021c1c) fep_hwr_side_pane

0x6fd7,	// (0x00021c3c) fep_hwr_top_pane_ParamLimits

0x6fd7,	// (0x00021c3c) fep_hwr_top_pane

0x6fef,	// (0x00021c54) fep_hwr_write_pane_ParamLimits

0x6fef,	// (0x00021c54) fep_hwr_write_pane

0xfb20,	// (0x0002a785) fep_vkb_side_pane_g

0xc30e,	// (0x00026f73) fep_hwr_top_pane_g1

0xc320,	// (0x00026f85) fep_hwr_top_pane_g2

0x701b,	// (0x00021c80) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0002a761) fep_hwr_top_pane_g

0x7030,	// (0x00021c95) fep_hwr_top_text_pane

0x8e31,	// (0x00023a96) fep_hwr_top_text_pane_g1

0xc356,	// (0x00026fbb) fep_hwr_top_text_pane_t1

0x7126,	// (0x00021d8b) fep_hwr_candidate_pane_g1

0xc5a9,	// (0x0002720e) fep_vkb_keypad_pane_g3_ParamLimits

0xc5a9,	// (0x0002720e) fep_vkb_keypad_pane_g3

0xc5d1,	// (0x00027236) fep_vkb_keypad_pane_g4_ParamLimits

0xc5d1,	// (0x00027236) fep_vkb_keypad_pane_g4

0xc640,	// (0x000272a5) fep_vkb_bottom_pane_g2_ParamLimits

0xc640,	// (0x000272a5) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0002a78c) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0002a78c) fep_vkb_bottom_pane_g

0xc2b2,	// (0x00026f17) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0002a796) cell_vkb_side_pane_g

0xc6cb,	// (0x00027330) cell_vkb_side_pane_t1

0xc6d9,	// (0x0002733e) cell_vkb_side_pane_t1_copy1

0xc2b2,	// (0x00026f17) bg_fep_vkb_candidate_pane_g2

0xc805,	// (0x0002746a) cell_vkb_candidate_pane_ParamLimits

0xc364,	// (0x00026fc9) aid_size_cell_vkb_ParamLimits

0xc364,	// (0x00026fc9) aid_size_cell_vkb

0xc805,	// (0x0002746a) cell_vkb_candidate_pane

0x7140,	// (0x00021da5) bg_popup_fep_shadow_pane_g1

0xc3f2,	// (0x00027057) fep_vkb_bottom_pane_ParamLimits

0xc3f2,	// (0x00027057) fep_vkb_bottom_pane

0xc428,	// (0x0002708d) fep_vkb_candidate_pane_ParamLimits

0xc428,	// (0x0002708d) fep_vkb_candidate_pane

0xc444,	// (0x000270a9) fep_vkb_keypad_pane_ParamLimits

0xc444,	// (0x000270a9) fep_vkb_keypad_pane

0xc48a,	// (0x000270ef) fep_vkb_side_pane_ParamLimits

0xc48a,	// (0x000270ef) fep_vkb_side_pane

0xc4c6,	// (0x0002712b) fep_vkb_top_pane_ParamLimits

0xc4c6,	// (0x0002712b) fep_vkb_top_pane

0xc502,	// (0x00027167) fep_vkb_top_pane_g1_ParamLimits

0xc502,	// (0x00027167) fep_vkb_top_pane_g1

0xc511,	// (0x00027176) fep_vkb_top_pane_g2_ParamLimits

0xc511,	// (0x00027176) fep_vkb_top_pane_g2

0xc520,	// (0x00027185) fep_vkb_top_pane_g3_ParamLimits

0xc520,	// (0x00027185) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0002a77c) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0002a77c) fep_vkb_top_pane_g

0xc53e,	// (0x000271a3) fep_vkb_top_text_pane_ParamLimits

0xc53e,	// (0x000271a3) fep_vkb_top_text_pane

0xc54f,	// (0x000271b4) fep_vkb_side_pane_g1_ParamLimits

0xc54f,	// (0x000271b4) fep_vkb_side_pane_g1

0xc598,	// (0x000271fd) grid_vkb_side_pane_ParamLimits

0xc598,	// (0x000271fd) grid_vkb_side_pane

0x7148,	// (0x00021dad) bg_popup_fep_shadow_pane_g2

0x7151,	// (0x00021db6) bg_popup_fep_shadow_pane_g3

0x7159,	// (0x00021dbe) bg_popup_fep_shadow_pane_g4

0x7162,	// (0x00021dc7) bg_popup_fep_shadow_pane_g5

0x716c,	// (0x00021dd1) bg_popup_fep_shadow_pane_g6

0x7174,	// (0x00021dd9) bg_popup_fep_shadow_pane_g7

0x8829,	// (0x0002348e) bg_popup_fep_shadow_pane_g8

0xc5ef,	// (0x00027254) grid_vkb_keypad_number_pane_ParamLimits

0xc5ef,	// (0x00027254) grid_vkb_keypad_number_pane

0xc5ff,	// (0x00027264) grid_vkb_keypad_pane_ParamLimits

0xc5ff,	// (0x00027264) grid_vkb_keypad_pane

0xc625,	// (0x0002728a) fep_vkb_bottom_pane_g1_ParamLimits

0xc625,	// (0x0002728a) fep_vkb_bottom_pane_g1

0xc64e,	// (0x000272b3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc64e,	// (0x000272b3) grid_vkb_keypad_bottom_left_pane

0xc663,	// (0x000272c8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc663,	// (0x000272c8) grid_vkb_keypad_bottom_right_pane

0xc678,	// (0x000272dd) fep_vkb_top_text_pane_g1

0xc693,	// (0x000272f8) fep_vkb_top_text_pane_t1

0xc6a8,	// (0x0002730d) cell_vkb_side_pane_ParamLimits

0xc6a8,	// (0x0002730d) cell_vkb_side_pane

0xc2b2,	// (0x00026f17) cell_vkb_side_pane_g1

0xc6e7,	// (0x0002734c) cell_vkb_keypad_pane_ParamLimits

0xc6e7,	// (0x0002734c) cell_vkb_keypad_pane

0xc75c,	// (0x000273c1) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0002a7a9) bg_popup_fep_shadow_pane_g

0xc2b2,	// (0x00026f17) cell_hwr_side_pane_g1

0xc2b2,	// (0x00026f17) cell_hwr_side_pane_g2

0xc766,	// (0x000273cb) cell_vkb_keypad_pane_t1

0xc774,	// (0x000273d9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc774,	// (0x000273d9) cell_vkb_keypad_bottom_left_pane

0xc791,	// (0x000273f6) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc791,	// (0x000273f6) cell_vkb_keypad_bottom_right_pane

0xc2b2,	// (0x00026f17) cell_vkb_keypad_bottom_left_pane_g1

0xc2b2,	// (0x00026f17) cell_vkb_keypad_bottom_right_pane_g1

0xc7ca,	// (0x0002742f) cell_vkb_keypad_number_pane_ParamLimits

0xc7ca,	// (0x0002742f) cell_vkb_keypad_number_pane

0xc7e9,	// (0x0002744e) cell_vkb_keypad_number_pane_g1

0xc7f3,	// (0x00027458) cell_vkb_keypad_number_pane_g2

0xc7fc,	// (0x00027461) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0002a79b) cell_vkb_keypad_number_pane_g

0xc766,	// (0x000273cb) cell_vkb_keypad_number_pane_t1

0xc820,	// (0x00027485) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x0002a796) cell_hwr_side_pane_g

0xc839,	// (0x0002749e) cell_hwr_side_pane_t1

0x7186,	// (0x00021deb) cell_hwr_side_pane_t1_copy1

0xc530,	// (0x00027195) cell_hwr_candidate_pane_g1

0x7194,	// (0x00021df9) cell_hwr_candidate_pane_t1

0xc2b2,	// (0x00026f17) cell_vkb_candidate_pane_g2

0xc87d,	// (0x000274e2) cell_vkb_candidate_pane_t1

0x6f54,	// (0x00021bb9) bg_popup_fep_shadow_pane_ParamLimits

0x6f54,	// (0x00021bb9) bg_popup_fep_shadow_pane

0x1e45,	// (0x0001caaa) bg_fep_hwr_top_pane_g4

0xc332,	// (0x00026f97) bg_hwr_side_pane_g1_ParamLimits

0xc332,	// (0x00026f97) bg_hwr_side_pane_g1

0x706c,	// (0x00021cd1) cell_hwr_side_pane_ParamLimits

0x706c,	// (0x00021cd1) cell_hwr_side_pane

0x70a7,	// (0x00021d0c) fep_hwr_write_pane_g1_ParamLimits

0x70a7,	// (0x00021d0c) fep_hwr_write_pane_g1

0x70b4,	// (0x00021d19) fep_hwr_write_pane_g2_ParamLimits

0x70b4,	// (0x00021d19) fep_hwr_write_pane_g2

0x70c1,	// (0x00021d26) fep_hwr_write_pane_g3_ParamLimits

0x70c1,	// (0x00021d26) fep_hwr_write_pane_g3

0x70cf,	// (0x00021d34) fep_hwr_write_pane_g4_ParamLimits

0x70cf,	// (0x00021d34) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0002a768) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0002a768) fep_hwr_write_pane_g

0x1e45,	// (0x0001caaa) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1e45,	// (0x0001caaa) bg_fep_hwr_candidate_pane_g2

0x70e4,	// (0x00021d49) cell_hwr_candidate_pane_ParamLimits

0x70e4,	// (0x00021d49) cell_hwr_candidate_pane

0x7126,	// (0x00021d8b) fep_hwr_candidate_pane_g1_ParamLimits

0xc392,	// (0x00026ff7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc392,	// (0x00026ff7) bg_popup_fep_shadow_pane_cp2

0xc530,	// (0x00027195) fep_vkb_top_pane_g4_ParamLimits

0xc530,	// (0x00027195) fep_vkb_top_pane_g4

0xc576,	// (0x000271db) fep_vkb_side_pane_g2_ParamLimits

0xc576,	// (0x000271db) fep_vkb_side_pane_g2

0x4d7e,	// (0x0001f9e3) list_setting_pane_t4_ParamLimits

0x4d7e,	// (0x0001f9e3) list_setting_pane_t4

0x4e18,	// (0x0001fa7d) list_setting_number_pane_t5_ParamLimits

0x4e18,	// (0x0001fa7d) list_setting_number_pane_t5

0x8e78,	// (0x00023add) list_double_heading_pane_cp2_ParamLimits

0x8e78,	// (0x00023add) list_double_heading_pane_cp2

0x87bc,	// (0x00023421) list_double_heading_pane_g1_cp2_ParamLimits

0x87bc,	// (0x00023421) list_double_heading_pane_g1_cp2

0x87c8,	// (0x0002342d) list_double_heading_pane_g2_cp2_ParamLimits

0x87c8,	// (0x0002342d) list_double_heading_pane_g2_cp2

0xc88b,	// (0x000274f0) list_double_heading_pane_t1_cp2_ParamLimits

0xc88b,	// (0x000274f0) list_double_heading_pane_t1_cp2

0xc8a1,	// (0x00027506) list_double_heading_pane_t2_cp2_ParamLimits

0xc8a1,	// (0x00027506) list_double_heading_pane_t2_cp2

0x7e33,	// (0x00022a98) aid_value_unit2

0x5db1,	// (0x00020a16) popup_preview_fixed_window

0x81c8,	// (0x00022e2d) bg_popup_preview_window_pane_cp02

0xc8b3,	// (0x00027518) list_preview_fixed_pane

0xc8f9,	// (0x0002755e) list_empty_pane_fp_ParamLimits

0xc8f9,	// (0x0002755e) list_empty_pane_fp

0xc8f9,	// (0x0002755e) list_single_cale_day_pane_fp_ParamLimits

0xc8f9,	// (0x0002755e) list_single_cale_day_pane_fp

0xc8f9,	// (0x0002755e) list_single_graphic_heading_pane_fp_ParamLimits

0xc8f9,	// (0x0002755e) list_single_graphic_heading_pane_fp

0xc8f9,	// (0x0002755e) list_single_graphic_pane_fp_ParamLimits

0xc8f9,	// (0x0002755e) list_single_graphic_pane_fp

0xc8f9,	// (0x0002755e) list_single_heading_pane_fp_ParamLimits

0xc8f9,	// (0x0002755e) list_single_heading_pane_fp

0xc8f9,	// (0x0002755e) list_single_pane_fp_ParamLimits

0xc8f9,	// (0x0002755e) list_single_pane_fp

0xc90e,	// (0x00027573) list_single_pane_fp_g1_ParamLimits

0xc90e,	// (0x00027573) list_single_pane_fp_g1

0x5749,	// (0x000203ae) list_single_pane_fp_g2_ParamLimits

0x5749,	// (0x000203ae) list_single_pane_fp_g2

0x5755,	// (0x000203ba) list_single_pane_fp_g3_ParamLimits

0x5755,	// (0x000203ba) list_single_pane_fp_g3

0xc91a,	// (0x0002757f) list_single_pane_fp_g4_ParamLimits

0xc91a,	// (0x0002757f) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0002a7ca) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0002a7ca) list_single_pane_fp_g

0x5769,	// (0x000203ce) list_single_pane_fp_t1_ParamLimits

0x5769,	// (0x000203ce) list_single_pane_fp_t1

0x5780,	// (0x000203e5) list_single_graphic_pane_fp_g1_ParamLimits

0x5780,	// (0x000203e5) list_single_graphic_pane_fp_g1

0xc90e,	// (0x00027573) list_single_graphic_pane_fp_g2_ParamLimits

0xc90e,	// (0x00027573) list_single_graphic_pane_fp_g2

0x5749,	// (0x000203ae) list_single_graphic_pane_fp_g3_ParamLimits

0x5749,	// (0x000203ae) list_single_graphic_pane_fp_g3

0x5755,	// (0x000203ba) list_single_graphic_pane_fp_g4_ParamLimits

0x5755,	// (0x000203ba) list_single_graphic_pane_fp_g4

0xc91a,	// (0x0002757f) list_single_graphic_pane_fp_g5_ParamLimits

0xc91a,	// (0x0002757f) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a7d3) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a7d3) list_single_graphic_pane_fp_g

0x578c,	// (0x000203f1) list_single_graphic_pane_fp_t1_ParamLimits

0x578c,	// (0x000203f1) list_single_graphic_pane_fp_t1

0x5780,	// (0x000203e5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5780,	// (0x000203e5) list_single_graphic_heading_pane_fp_g1

0xc90e,	// (0x00027573) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc90e,	// (0x00027573) list_single_graphic_heading_pane_fp_g2

0x5749,	// (0x000203ae) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5749,	// (0x000203ae) list_single_graphic_heading_pane_fp_g3

0x5755,	// (0x000203ba) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5755,	// (0x000203ba) list_single_graphic_heading_pane_fp_g4

0xc91a,	// (0x0002757f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc91a,	// (0x0002757f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a7d3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a7d3) list_single_graphic_heading_pane_fp_g

0x57a2,	// (0x00020407) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x57a2,	// (0x00020407) list_single_graphic_heading_pane_fp_t1

0x57b8,	// (0x0002041d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x57b8,	// (0x0002041d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0002a7de) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0002a7de) list_single_graphic_heading_pane_fp_t

0x57ca,	// (0x0002042f) list_single_cale_day_pane_fp_g1_ParamLimits

0x57ca,	// (0x0002042f) list_single_cale_day_pane_fp_g1

0xc926,	// (0x0002758b) list_single_cale_day_pane_fp_g2_ParamLimits

0xc926,	// (0x0002758b) list_single_cale_day_pane_fp_g2

0x5802,	// (0x00020467) list_single_cale_day_pane_fp_g3_ParamLimits

0x5802,	// (0x00020467) list_single_cale_day_pane_fp_g3

0x582a,	// (0x0002048f) list_single_cale_day_pane_fp_g4_ParamLimits

0x582a,	// (0x0002048f) list_single_cale_day_pane_fp_g4

0x584e,	// (0x000204b3) list_single_cale_day_pane_fp_g5_ParamLimits

0x584e,	// (0x000204b3) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0002a7e3) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002a7e3) list_single_cale_day_pane_fp_g

0x5872,	// (0x000204d7) list_single_cale_day_pane_fp_t1_ParamLimits

0x5872,	// (0x000204d7) list_single_cale_day_pane_fp_t1

0x5898,	// (0x000204fd) list_single_cale_day_pane_fp_t2_ParamLimits

0x5898,	// (0x000204fd) list_single_cale_day_pane_fp_t2

0x58b1,	// (0x00020516) list_single_cale_day_pane_fp_t3_ParamLimits

0x58b1,	// (0x00020516) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0002a7ee) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0002a7ee) list_single_cale_day_pane_fp_t

0xc90e,	// (0x00027573) list_empty_pane_fp_g1_ParamLimits

0xc90e,	// (0x00027573) list_empty_pane_fp_g1

0x58ca,	// (0x0002052f) list_empty_pane_fp_t1

0x58d8,	// (0x0002053d) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0002a7f5) list_empty_pane_fp_t

0xc90e,	// (0x00027573) list_single_heading_pane_fp_g1_ParamLimits

0xc90e,	// (0x00027573) list_single_heading_pane_fp_g1

0x5749,	// (0x000203ae) list_single_heading_pane_fp_g2_ParamLimits

0x5749,	// (0x000203ae) list_single_heading_pane_fp_g2

0x5755,	// (0x000203ba) list_single_heading_pane_fp_g3_ParamLimits

0x5755,	// (0x000203ba) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0002a7fa) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0002a7fa) list_single_heading_pane_fp_g

0x58e6,	// (0x0002054b) list_single_heading_pane_fp_t1_ParamLimits

0x58e6,	// (0x0002054b) list_single_heading_pane_fp_t1

0x58f8,	// (0x0002055d) list_single_heading_pane_fp_t2_ParamLimits

0x58f8,	// (0x0002055d) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0002a801) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0002a801) list_single_heading_pane_fp_t

0x89b0,	// (0x00023615) aid_size_cell_fast

0x8138,	// (0x00022d9d) soft_indicator_pane_cp1_t1

0x89ed,	// (0x00023652) cell_app_pane_cp2_ParamLimits

0x89ed,	// (0x00023652) cell_app_pane_cp2

0x6f76,	// (0x00021bdb) fep_hwr_candidate_drop_down_list_pane

0x1e53,	// (0x0001cab8) fep_hwr_candidate_pane_g3_ParamLimits

0x1e53,	// (0x0001cab8) fep_hwr_candidate_pane_g3

0x1e60,	// (0x0001cac5) fep_hwr_candidate_pane_g4_ParamLimits

0x1e60,	// (0x0001cac5) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0002a775) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0002a775) fep_hwr_candidate_pane_g

0xc417,	// (0x0002707c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc417,	// (0x0002707c) fep_vkb_candidate_drop_down_list_pane

0xc828,	// (0x0002748d) fep_vkb_candidate_pane_g3

0xc830,	// (0x00027495) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0002a7a2) fep_vkb_candidate_pane_g

0xc530,	// (0x00027195) cell_hwr_candidate_pane_g1_ParamLimits

0xc950,	// (0x000275b5) cell_hwr_candidate_pane_g3_ParamLimits

0xc950,	// (0x000275b5) cell_hwr_candidate_pane_g3

0xc971,	// (0x000275d6) cell_hwr_candidate_pane_g4_ParamLimits

0xc971,	// (0x000275d6) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0002a7bc) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0002a7bc) cell_hwr_candidate_pane_g

0xc847,	// (0x000274ac) cell_vkb_candidate_pane_g3_ParamLimits

0xc847,	// (0x000274ac) cell_vkb_candidate_pane_g3

0xc862,	// (0x000274c7) cell_vkb_candidate_pane_g4_ParamLimits

0xc862,	// (0x000274c7) cell_vkb_candidate_pane_g4

0xc932,	// (0x00027597) cell_app_pane_cp2_g1_ParamLimits

0xc932,	// (0x00027597) cell_app_pane_cp2_g1

0xc992,	// (0x000275f7) cell_app_pane_cp2_g2_ParamLimits

0xc992,	// (0x000275f7) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0002a806) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0002a806) cell_app_pane_cp2_g

0xc99e,	// (0x00027603) cell_app_pane_cp2_t1_ParamLimits

0xc99e,	// (0x00027603) cell_app_pane_cp2_t1

0x87ae,	// (0x00023413) grid_highlight_pane_cp1_ParamLimits

0x87ae,	// (0x00023413) grid_highlight_pane_cp1

0x71b2,	// (0x00021e17) cell_hwr_candidate_pane_cp1_ParamLimits

0x71b2,	// (0x00021e17) cell_hwr_candidate_pane_cp1

0xc530,	// (0x00027195) fep_hwr_candidate_drop_down_list_pane_g1

0xc9b0,	// (0x00027615) fep_hwr_candidate_drop_down_list_pane_g2

0xc9bd,	// (0x00027622) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0002a80b) fep_hwr_candidate_drop_down_list_pane_g

0x71d1,	// (0x00021e36) fep_hwr_candidate_drop_down_list_scroll_pane

0x71da,	// (0x00021e3f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71da,	// (0x00021e3f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71e7,	// (0x00021e4c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71e7,	// (0x00021e4c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x71f4,	// (0x00021e59) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71f4,	// (0x00021e59) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc847,	// (0x000274ac) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc847,	// (0x000274ac) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc862,	// (0x000274c7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc862,	// (0x000274c7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7201,	// (0x00021e66) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7201,	// (0x00021e66) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x721c,	// (0x00021e81) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x721c,	// (0x00021e81) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7237,	// (0x00021e9c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7237,	// (0x00021e9c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0002a812) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0002a812) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9ca,	// (0x0002762f) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9ca,	// (0x0002762f) cell_vkb_candidate_pane_cp1

0xc530,	// (0x00027195) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc530,	// (0x00027195) fep_vkb_candidate_drop_down_list_pane_g1

0xc9b0,	// (0x00027615) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9b0,	// (0x00027615) fep_vkb_candidate_drop_down_list_pane_g2

0xc9bd,	// (0x00027622) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc9bd,	// (0x00027622) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0002a80b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x0002a80b) fep_vkb_candidate_drop_down_list_pane_g

0xc9ea,	// (0x0002764f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9ea,	// (0x0002764f) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9f7,	// (0x0002765c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9f7,	// (0x0002765c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca04,	// (0x00027669) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca04,	// (0x00027669) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca10,	// (0x00027675) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca10,	// (0x00027675) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc950,	// (0x000275b5) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc950,	// (0x000275b5) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc971,	// (0x000275d6) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc971,	// (0x000275d6) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca1c,	// (0x00027681) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca1c,	// (0x00027681) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca3d,	// (0x000276a2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca3d,	// (0x000276a2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca5e,	// (0x000276c3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca5e,	// (0x000276c3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0002a823) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0002a823) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7e69,	// (0x00022ace) title_pane_g1_ParamLimits

0x7e76,	// (0x00022adb) title_pane_g2_ParamLimits

0xf54e,	// (0x0002a1b3) title_pane_g_ParamLimits

0x8e21,	// (0x00023a86) aid_call2_pane

0x8e29,	// (0x00023a8e) aid_call_pane

0x8e31,	// (0x00023a96) popup_clock_analogue_window_g1

0x8e31,	// (0x00023a96) popup_clock_analogue_window_g2

0x6122,	// (0x00020d87) popup_clock_analogue_window_g3

0x612b,	// (0x00020d90) popup_clock_analogue_window_g4

0x7e55,	// (0x00022aba) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002a35d) popup_clock_analogue_window_g

0x6133,	// (0x00020d98) popup_clock_analogue_window_t1

0x6141,	// (0x00020da6) clock_digital_number_pane_ParamLimits

0x6141,	// (0x00020da6) clock_digital_number_pane

0x614d,	// (0x00020db2) clock_digital_number_pane_cp02_ParamLimits

0x614d,	// (0x00020db2) clock_digital_number_pane_cp02

0x6159,	// (0x00020dbe) clock_digital_number_pane_cp03_ParamLimits

0x6159,	// (0x00020dbe) clock_digital_number_pane_cp03

0x6165,	// (0x00020dca) clock_digital_number_pane_cp04_ParamLimits

0x6165,	// (0x00020dca) clock_digital_number_pane_cp04

0x6171,	// (0x00020dd6) clock_digital_separator_pane_ParamLimits

0x6171,	// (0x00020dd6) clock_digital_separator_pane

0x617d,	// (0x00020de2) popup_clock_digital_window_t1_ParamLimits

0x617d,	// (0x00020de2) popup_clock_digital_window_t1

0x7e55,	// (0x00022aba) clock_digital_number_pane_g1

0x7e55,	// (0x00022aba) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002a368) clock_digital_number_pane_g

0x7e55,	// (0x00022aba) clock_digital_separator_pane_g1

0x7e55,	// (0x00022aba) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002a368) clock_digital_separator_pane_g

0x97a4,	// (0x00024409) aid_fill_nsta_ParamLimits

0x98ea,	// (0x0002454f) indicator_nsta_pane_ParamLimits

0x9a63,	// (0x000246c8) popup_clock_analogue_window

0x9a63,	// (0x000246c8) popup_clock_digital_window

0x7f3f,	// (0x00022ba4) grid_indicator_nsta_pane_ParamLimits

0xbca3,	// (0x00026908) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0002a6f5) clock_nsta_pane_t

0x60e6,	// (0x00020d4b) aid_size_max_handle

0x60f0,	// (0x00020d55) aid_size_min_handle

0x9444,	// (0x000240a9) editor_scroll_pane

0xca79,	// (0x000276de) ex_editor_pane

0x891e,	// (0x00023583) scroll_pane_cp13

0x874d,	// (0x000233b2) scroll_pane_cp14

0x8e60,	// (0x00023ac5) scroll_pane_cp36

0x8e8c,	// (0x00023af1) list_single_graphic_hl_pane_cp2_ParamLimits

0x8e8c,	// (0x00023af1) list_single_graphic_hl_pane_cp2

0xb254,	// (0x00025eb9) list_single_graphic_hl_pane_ParamLimits

0xb254,	// (0x00025eb9) list_single_graphic_hl_pane

0x590e,	// (0x00020573) aid_size_min_hl_cp1

0xca81,	// (0x000276e6) list_highlight_pane_cp34_ParamLimits

0xca81,	// (0x000276e6) list_highlight_pane_cp34

0xca92,	// (0x000276f7) list_single_graphic_hl_pane_g1_ParamLimits

0xca92,	// (0x000276f7) list_single_graphic_hl_pane_g1

0x5917,	// (0x0002057c) list_single_graphic_hl_pane_g2_ParamLimits

0x5917,	// (0x0002057c) list_single_graphic_hl_pane_g2

0x5917,	// (0x0002057c) list_single_graphic_hl_pane_g3_ParamLimits

0x5917,	// (0x0002057c) list_single_graphic_hl_pane_g3

0x5923,	// (0x00020588) list_single_graphic_hl_pane_g4_ParamLimits

0x5923,	// (0x00020588) list_single_graphic_hl_pane_g4

0x592f,	// (0x00020594) list_single_graphic_hl_pane_g5_ParamLimits

0x592f,	// (0x00020594) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x0002a834) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x0002a834) list_single_graphic_hl_pane_g

0x5943,	// (0x000205a8) list_single_graphic_hl_pane_t1_ParamLimits

0x5943,	// (0x000205a8) list_single_graphic_hl_pane_t1

0xca9f,	// (0x00027704) aid_size_min_hl_cp2

0xcaa8,	// (0x0002770d) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa8,	// (0x0002770d) list_highlight_pane_cp34_cp2

0xca92,	// (0x000276f7) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca92,	// (0x000276f7) list_single_graphic_hl_pane_g1_cp2

0xcab5,	// (0x0002771a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab5,	// (0x0002771a) list_single_graphic_hl_pane_g2_cp2

0xcac1,	// (0x00027726) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcac1,	// (0x00027726) list_single_graphic_hl_pane_g3_cp2

0xbe70,	// (0x00026ad5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbe70,	// (0x00026ad5) list_single_graphic_hl_pane_g4_cp2

0xcacf,	// (0x00027734) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcacf,	// (0x00027734) list_single_graphic_hl_pane_g5_cp2

0x6431,	// (0x00021096) control_pane_g4_ParamLimits

0x6431,	// (0x00021096) control_pane_g4

0x9782,	// (0x000243e7) bg_popup_sub_pane_cp10_ParamLimits

0xc2bc,	// (0x00026f21) list_choice_list_pane_ParamLimits

0xc2cb,	// (0x00026f30) scroll_pane_cp23

0x81c8,	// (0x00022e2d) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8b3,	// (0x00027518) list_preview_fixed_pane_ParamLimits

0xc8c9,	// (0x0002752e) list_preview_fixed_pane_cp_ParamLimits

0xc8c9,	// (0x0002752e) list_preview_fixed_pane_cp

0xc8d5,	// (0x0002753a) popup_preview_fixed_window_g1_ParamLimits

0xc8d5,	// (0x0002753a) popup_preview_fixed_window_g1

0xc8e1,	// (0x00027546) popup_preview_fixed_window_g2_ParamLimits

0xc8e1,	// (0x00027546) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0002a7c3) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0002a7c3) popup_preview_fixed_window_g

0x605a,	// (0x00020cbf) aid_navi_side_left_pane_ParamLimits

0x606f,	// (0x00020cd4) aid_navi_side_right_pane_ParamLimits

0x6087,	// (0x00020cec) navi_icon_pane_stacon_ParamLimits

0x609b,	// (0x00020d00) navi_navi_pane_stacon_ParamLimits

0x6087,	// (0x00020cec) navi_text_pane_stacon_ParamLimits

0x7e4b,	// (0x00022ab0) main_text_info_pane

0xcaf9,	// (0x0002775e) listscroll_text_info_pane

0xcb01,	// (0x00027766) list_text_info_pane_ParamLimits

0xcb01,	// (0x00027766) list_text_info_pane

0xcb10,	// (0x00027775) scroll_pane_cp24_ParamLimits

0xcb10,	// (0x00027775) scroll_pane_cp24

0xcb2e,	// (0x00027793) list_text_info_pane_t1_ParamLimits

0xcb2e,	// (0x00027793) list_text_info_pane_t1

0x657b,	// (0x000211e0) popup_fast_swap2_window_ParamLimits

0x657b,	// (0x000211e0) popup_fast_swap2_window

0xcb5f,	// (0x000277c4) aid_size_cell_fast2

0x7e4b,	// (0x00022ab0) bg_popup_window_pane_cp17

0xa0ea,	// (0x00024d4f) heading_pane_cp2

0x8417,	// (0x0002307c) listscroll_fast2_pane

0xcb69,	// (0x000277ce) grid_fast2_pane

0xcb73,	// (0x000277d8) listscroll_fast2_pane_g1

0xcb7b,	// (0x000277e0) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x0002a83f) listscroll_fast2_pane_g

0x891e,	// (0x00023583) scroll_pane_cp26

0xcb85,	// (0x000277ea) cell_fast2_pane_ParamLimits

0xcb85,	// (0x000277ea) cell_fast2_pane

0xcb9a,	// (0x000277ff) cell_fast2_pane_g1

0xcba3,	// (0x00027808) cell_fast2_pane_g2

0xcbac,	// (0x00027811) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x0002a844) cell_fast2_pane_g

0x850a,	// (0x0002316f) grid_highlight_pane_cp9

0x851f,	// (0x00023184) main_eswt_pane_ParamLimits

0x851f,	// (0x00023184) main_eswt_pane

0xcb25,	// (0x0002778a) list_single_text_info_pane

0xcbb4,	// (0x00027819) eswt_ctrl_button_pane

0xcbb4,	// (0x00027819) eswt_ctrl_canvas_pane

0xcbbc,	// (0x00027821) eswt_ctrl_combo_pane

0xcbb4,	// (0x00027819) eswt_ctrl_default_pane

0xcbb4,	// (0x00027819) eswt_ctrl_label_pane

0xcbc4,	// (0x00027829) eswt_ctrl_wait_pane

0xcbcc,	// (0x00027831) eswt_shell_pane

0x7e4b,	// (0x00022ab0) listscroll_eswt_app_pane

0xcbec,	// (0x00027851) popup_eswt_tasktip_window_ParamLimits

0xcbec,	// (0x00027851) popup_eswt_tasktip_window

0x9d00,	// (0x00024965) bg_popup_window_pane_cp18

0xcbfd,	// (0x00027862) eswt_control_pane_g1_ParamLimits

0xcbfd,	// (0x00027862) eswt_control_pane_g1

0xcc0a,	// (0x0002786f) eswt_control_pane_g2_ParamLimits

0xcc0a,	// (0x0002786f) eswt_control_pane_g2

0xcc17,	// (0x0002787c) eswt_control_pane_g3_ParamLimits

0xcc17,	// (0x0002787c) eswt_control_pane_g3

0xcc24,	// (0x00027889) eswt_control_pane_g4_ParamLimits

0xcc24,	// (0x00027889) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x0002a84b) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x0002a84b) eswt_control_pane_g

0x87ae,	// (0x00023413) bg_button_pane_ParamLimits

0x87ae,	// (0x00023413) bg_button_pane

0x851f,	// (0x00023184) common_borders_pane_copy2_ParamLimits

0x851f,	// (0x00023184) common_borders_pane_copy2

0xcc31,	// (0x00027896) control_button_pane_g1_ParamLimits

0xcc31,	// (0x00027896) control_button_pane_g1

0xcc3d,	// (0x000278a2) control_button_pane_g2_ParamLimits

0xcc3d,	// (0x000278a2) control_button_pane_g2

0xcc49,	// (0x000278ae) control_button_pane_g3_ParamLimits

0xcc49,	// (0x000278ae) control_button_pane_g3

0x0002,

0xfbef,	// (0x0002a854) control_button_pane_g_ParamLimits

0xfbef,	// (0x0002a854) control_button_pane_g

0xcc5d,	// (0x000278c2) control_button_pane_t1

0xcc6b,	// (0x000278d0) control_button_pane_t2

0x0001,

0xfbf6,	// (0x0002a85b) control_button_pane_t

0x9c8c,	// (0x000248f1) bg_button_pane_g1

0x9c94,	// (0x000248f9) bg_button_pane_g2

0x9c9c,	// (0x00024901) bg_button_pane_g3

0x9ca4,	// (0x00024909) bg_button_pane_g4

0x9cac,	// (0x00024911) bg_button_pane_g5

0x9cb4,	// (0x00024919) bg_button_pane_g6

0x9cbc,	// (0x00024921) bg_button_pane_g7

0x9cc4,	// (0x00024929) bg_button_pane_g8

0x9ccc,	// (0x00024931) bg_button_pane_g9

0x0008,

0xf85f,	// (0x0002a4c4) bg_button_pane_g

0xc277,	// (0x00026edc) common_borders_pane_ParamLimits

0xc277,	// (0x00026edc) common_borders_pane

0xcbfd,	// (0x00027862) eswt_control_pane_g1_copy1_ParamLimits

0xcbfd,	// (0x00027862) eswt_control_pane_g1_copy1

0xcc0a,	// (0x0002786f) eswt_control_pane_g2_copy1_ParamLimits

0xcc0a,	// (0x0002786f) eswt_control_pane_g2_copy1

0xcc17,	// (0x0002787c) eswt_control_pane_g3_copy1_ParamLimits

0xcc17,	// (0x0002787c) eswt_control_pane_g3_copy1

0xcc24,	// (0x00027889) eswt_control_pane_g4_copy1_ParamLimits

0xcc24,	// (0x00027889) eswt_control_pane_g4_copy1

0xc2b2,	// (0x00026f17) bg_eswt_ctrl_canvas_pane_g1

0xc277,	// (0x00026edc) common_borders_pane_cp2_ParamLimits

0xc277,	// (0x00026edc) common_borders_pane_cp2

0xc277,	// (0x00026edc) common_borders_pane_cp3_ParamLimits

0xc277,	// (0x00026edc) common_borders_pane_cp3

0xcc79,	// (0x000278de) separator_horizontal_pane

0xcc81,	// (0x000278e6) separator_vertical_pane

0xcbfd,	// (0x00027862) eswt_control_pane_g1_copy2_ParamLimits

0xcbfd,	// (0x00027862) eswt_control_pane_g1_copy2

0xcc0a,	// (0x0002786f) eswt_control_pane_g2_copy2_ParamLimits

0xcc0a,	// (0x0002786f) eswt_control_pane_g2_copy2

0xcc17,	// (0x0002787c) eswt_control_pane_g3_copy2_ParamLimits

0xcc17,	// (0x0002787c) eswt_control_pane_g3_copy2

0xcc24,	// (0x00027889) eswt_control_pane_g4_copy2_ParamLimits

0xcc24,	// (0x00027889) eswt_control_pane_g4_copy2

0x7e4b,	// (0x00022ab0) common_borders_pane_cp4

0xcc8a,	// (0x000278ef) separator_horizontal_pane_g1

0xcc93,	// (0x000278f8) separator_horizontal_pane_g2

0xcc9c,	// (0x00027901) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x0002a860) separator_horizontal_pane_g

0xcbfd,	// (0x00027862) eswt_control_pane_g1_copy3_ParamLimits

0xcbfd,	// (0x00027862) eswt_control_pane_g1_copy3

0xcc0a,	// (0x0002786f) eswt_control_pane_g2_copy3_ParamLimits

0xcc0a,	// (0x0002786f) eswt_control_pane_g2_copy3

0xcc17,	// (0x0002787c) eswt_control_pane_g3_copy3_ParamLimits

0xcc17,	// (0x0002787c) eswt_control_pane_g3_copy3

0xcc24,	// (0x00027889) eswt_control_pane_g4_copy3_ParamLimits

0xcc24,	// (0x00027889) eswt_control_pane_g4_copy3

0x7e4b,	// (0x00022ab0) common_borders_pane_cp5

0xcca5,	// (0x0002790a) separator_vertical_pane_g1

0xccae,	// (0x00027913) separator_vertical_pane_g2

0xccb7,	// (0x0002791c) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x0002a867) separator_vertical_pane_g

0xcbfd,	// (0x00027862) eswt_control_pane_g1_copy4_ParamLimits

0xcbfd,	// (0x00027862) eswt_control_pane_g1_copy4

0xcc0a,	// (0x0002786f) eswt_control_pane_g2_copy4_ParamLimits

0xcc0a,	// (0x0002786f) eswt_control_pane_g2_copy4

0xcc17,	// (0x0002787c) eswt_control_pane_g3_copy4_ParamLimits

0xcc17,	// (0x0002787c) eswt_control_pane_g3_copy4

0xcc24,	// (0x00027889) eswt_control_pane_g4_copy4_ParamLimits

0xcc24,	// (0x00027889) eswt_control_pane_g4_copy4

0xccc0,	// (0x00027925) eswt_ctrl_combo_button_pane

0xccc8,	// (0x0002792d) eswt_ctrl_input_pane

0xccd0,	// (0x00027935) popup_choice_list_window_cp70

0xccd8,	// (0x0002793d) eswt_ctrl_input_pane_t1

0x7e4b,	// (0x00022ab0) input_focus_pane_cp70

0xc277,	// (0x00026edc) bg_button_pane_cp70_ParamLimits

0xc277,	// (0x00026edc) bg_button_pane_cp70

0xcce6,	// (0x0002794b) eswt_ctrl_combo_button_pane_g1

0xccee,	// (0x00027953) wait_bar_pane_cp70

0x9d00,	// (0x00024965) bg_popup_window_pane_cp70_ParamLimits

0x9d00,	// (0x00024965) bg_popup_window_pane_cp70

0xccf6,	// (0x0002795b) popup_eswt_tasktip_window_t1

0xcd0c,	// (0x00027971) wait_bar_pane_cp71_ParamLimits

0xcd0c,	// (0x00027971) wait_bar_pane_cp71

0xcd18,	// (0x0002797d) grid_eswt_app_pane

0x8c43,	// (0x000238a8) scroll_pane_cp70

0xcd21,	// (0x00027986) cell_eswt_app_pane_ParamLimits

0xcd21,	// (0x00027986) cell_eswt_app_pane

0xcd51,	// (0x000279b6) cell_eswt_app_pane_g1_ParamLimits

0xcd51,	// (0x000279b6) cell_eswt_app_pane_g1

0xcd80,	// (0x000279e5) cell_eswt_app_pane_g2_ParamLimits

0xcd80,	// (0x000279e5) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x0002a86e) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x0002a86e) cell_eswt_app_pane_g

0xcda9,	// (0x00027a0e) cell_eswt_app_pane_t1_ParamLimits

0xcda9,	// (0x00027a0e) cell_eswt_app_pane_t1

0xcddb,	// (0x00027a40) grid_highlight_pane_cp70_ParamLimits

0xcddb,	// (0x00027a40) grid_highlight_pane_cp70

0x9319,	// (0x00023f7e) set_content_pane_g1

0x96e3,	// (0x00024348) status_small_volume_pane

0x7252,	// (0x00021eb7) status_small_volume_pane_g1

0x725a,	// (0x00021ebf) volume_small2_pane

0x7263,	// (0x00021ec8) volume_small2_pane_g1

0x726c,	// (0x00021ed1) volume_small2_pane_g2

0x7275,	// (0x00021eda) volume_small2_pane_g3

0x727e,	// (0x00021ee3) volume_small2_pane_g4

0x7287,	// (0x00021eec) volume_small2_pane_g5

0x7290,	// (0x00021ef5) volume_small2_pane_g6

0x7299,	// (0x00021efe) volume_small2_pane_g7

0x72a2,	// (0x00021f07) volume_small2_pane_g8

0x72ab,	// (0x00021f10) volume_small2_pane_g9

0x72b4,	// (0x00021f19) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x0002a873) volume_small2_pane_g

0xc678,	// (0x000272dd) fep_vkb_top_text_pane_g1_ParamLimits

0xc693,	// (0x000272f8) fep_vkb_top_text_pane_t1_ParamLimits

0xc8ed,	// (0x00027552) popup_preview_fixed_window_g3_ParamLimits

0xc8ed,	// (0x00027552) popup_preview_fixed_window_g3

0x6a2a,	// (0x0002168f) popup_toolbar_trans_pane

0xb05b,	// (0x00025cc0) aid_height_set_list_ParamLimits

0xb06c,	// (0x00025cd1) aid_size_parent_ParamLimits

0x9782,	// (0x000243e7) list_highlight_pane_cp2_ParamLimits

0x9319,	// (0x00023f7e) set_content_pane_g1_ParamLimits

0xb270,	// (0x00025ed5) list_single_image_pane_ParamLimits

0xb270,	// (0x00025ed5) list_single_image_pane

0xcde7,	// (0x00027a4c) aid_size_cell_image_ParamLimits

0xcde7,	// (0x00027a4c) aid_size_cell_image

0xcdf4,	// (0x00027a59) grid_single_image_pane_ParamLimits

0xcdf4,	// (0x00027a59) grid_single_image_pane

0xa13e,	// (0x00024da3) list_single_image_pane_g1_ParamLimits

0xa13e,	// (0x00024da3) list_single_image_pane_g1

0xce00,	// (0x00027a65) list_single_image_pane_g2_ParamLimits

0xce00,	// (0x00027a65) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x0002a888) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x0002a888) list_single_image_pane_g

0xce14,	// (0x00027a79) list_single_image_pane_t1_ParamLimits

0xce14,	// (0x00027a79) list_single_image_pane_t1

0xce2a,	// (0x00027a8f) cell_image_list_pane_ParamLimits

0xce2a,	// (0x00027a8f) cell_image_list_pane

0xce3e,	// (0x00027aa3) cell_image_list_pane_g1

0xce47,	// (0x00027aac) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0002a88d) cell_image_list_pane_g

0xce50,	// (0x00027ab5) aid_size_cell_tb_trans_pane

0x87ae,	// (0x00023413) bg_tb_trans_pane

0xce62,	// (0x00027ac7) grid_tb_trans_pane

0x9c8c,	// (0x000248f1) bg_tb_trans_pane_g1

0x9c94,	// (0x000248f9) bg_tb_trans_pane_g2

0x9c9c,	// (0x00024901) bg_tb_trans_pane_g3

0x9ca4,	// (0x00024909) bg_tb_trans_pane_g4

0x9cac,	// (0x00024911) bg_tb_trans_pane_g5

0x9cc4,	// (0x00024929) bg_tb_trans_pane_g6

0x9ccc,	// (0x00024931) bg_tb_trans_pane_g7

0x9cb4,	// (0x00024919) bg_tb_trans_pane_g8

0x9cbc,	// (0x00024921) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x0002a892) bg_tb_trans_pane_g

0xce76,	// (0x00027adb) cell_toolbar_trans_pane_ParamLimits

0xce76,	// (0x00027adb) cell_toolbar_trans_pane

0xc2b2,	// (0x00026f17) cell_toolbar_trans_pane_g1

0xbe7c,	// (0x00026ae1) list_form2_midp_pane_t1

0xbe8a,	// (0x00026aef) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0002a73b) list_form2_midp_pane_t

0xbe98,	// (0x00026afd) scroll_pane_cp51_ParamLimits

0xc054,	// (0x00026cb9) form2_midp_wait_pane_g1

0xc05d,	// (0x00026cc2) form2_midp_wait_pane_g2

0xc066,	// (0x00026ccb) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0002a750) form2_midp_wait_pane_g

0x7f3f,	// (0x00022ba4) list_highlight_pane_cp21_ParamLimits

0xc0bd,	// (0x00026d22) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0cc,	// (0x00026d31) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x535d,	// (0x0001ffc2) list_single_2graphic_im_pane_ParamLimits

0x535d,	// (0x0001ffc2) list_single_2graphic_im_pane

0xce9c,	// (0x00027b01) list_single_2graphic_im_pane_g1_ParamLimits

0xce9c,	// (0x00027b01) list_single_2graphic_im_pane_g1

0xcead,	// (0x00027b12) list_single_2graphic_im_pane_g2_ParamLimits

0xcead,	// (0x00027b12) list_single_2graphic_im_pane_g2

0xceb9,	// (0x00027b1e) list_single_2graphic_im_pane_g3_ParamLimits

0xceb9,	// (0x00027b1e) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x0002a8a5) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x0002a8a5) list_single_2graphic_im_pane_g

0xced9,	// (0x00027b3e) list_single_2graphic_im_pane_t1_ParamLimits

0xced9,	// (0x00027b3e) list_single_2graphic_im_pane_t1

0xc8f9,	// (0x0002755e) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8f9,	// (0x0002755e) list_single_graphic_2heading_pane_fp

0x5780,	// (0x000203e5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5780,	// (0x000203e5) list_single_graphic_2heading_pane_fp_g1

0xc90e,	// (0x00027573) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc90e,	// (0x00027573) list_single_graphic_2heading_pane_fp_g2

0x5749,	// (0x000203ae) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5749,	// (0x000203ae) list_single_graphic_2heading_pane_fp_g3

0x5755,	// (0x000203ba) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5755,	// (0x000203ba) list_single_graphic_2heading_pane_fp_g4

0xc91a,	// (0x0002757f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc91a,	// (0x0002757f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a7d3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a7d3) list_single_graphic_2heading_pane_fp_g

0x5959,	// (0x000205be) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5959,	// (0x000205be) list_single_graphic_2heading_pane_fp_t1

0x57b8,	// (0x0002041d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x57b8,	// (0x0002041d) list_single_graphic_2heading_pane_fp_t2

0x596f,	// (0x000205d4) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x596f,	// (0x000205d4) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0002a8ae) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0002a8ae) list_single_graphic_2heading_pane_fp_t

0xc33e,	// (0x00026fa3) fep_hwr_write_pane_g5_ParamLimits

0xc33e,	// (0x00026fa3) fep_hwr_write_pane_g5

0xc34a,	// (0x00026faf) fep_hwr_write_pane_g6_ParamLimits

0xc34a,	// (0x00026faf) fep_hwr_write_pane_g6

0xcbcc,	// (0x00027831) eswt_shell_pane_ParamLimits

0x9d00,	// (0x00024965) bg_popup_window_pane_cp18_ParamLimits

0xafb4,	// (0x00025c19) heading_pane_cp70

0xccf6,	// (0x0002795b) popup_eswt_tasktip_window_t1_ParamLimits

0x97f9,	// (0x0002445e) aid_touch_tab_arrow_left

0x9808,	// (0x0002446d) aid_touch_tab_arrow_right

0x7e87,	// (0x00022aec) title_pane_g3_ParamLimits

0x7e87,	// (0x00022aec) title_pane_g3

0x876d,	// (0x000233d2) set_value_pane_g1

0x6a2a,	// (0x0002168f) popup_toolbar_trans_pane_ParamLimits

0xce50,	// (0x00027ab5) aid_size_cell_tb_trans_pane_ParamLimits

0x87ae,	// (0x00023413) bg_tb_trans_pane_ParamLimits

0xce62,	// (0x00027ac7) grid_tb_trans_pane_ParamLimits

0x81c8,	// (0x00022e2d) cont_note_pane_ParamLimits

0x81c8,	// (0x00022e2d) cont_note_pane

0x851f,	// (0x00023184) cont_snote2_single_text_pane_ParamLimits

0x851f,	// (0x00023184) cont_snote2_single_text_pane

0x851f,	// (0x00023184) cont_snote2_single_graphic_pane_ParamLimits

0x851f,	// (0x00023184) cont_snote2_single_graphic_pane

0xa311,	// (0x00024f76) cont_note_wait_pane_ParamLimits

0xa311,	// (0x00024f76) cont_note_wait_pane

0xa311,	// (0x00024f76) cont_note_image_pane_ParamLimits

0xa311,	// (0x00024f76) cont_note_image_pane

0xcf0a,	// (0x00027b6f) popup_note2_window_g1_ParamLimits

0xcf0a,	// (0x00027b6f) popup_note2_window_g1

0xcf3b,	// (0x00027ba0) popup_note2_window_t1_ParamLimits

0xcf3b,	// (0x00027ba0) popup_note2_window_t1

0xcf80,	// (0x00027be5) popup_note2_window_t2_ParamLimits

0xcf80,	// (0x00027be5) popup_note2_window_t2

0xcfc5,	// (0x00027c2a) popup_note2_window_t3_ParamLimits

0xcfc5,	// (0x00027c2a) popup_note2_window_t3

0xd00a,	// (0x00027c6f) popup_note2_window_t4_ParamLimits

0xd00a,	// (0x00027c6f) popup_note2_window_t4

0x824c,	// (0x00022eb1) popup_note2_window_t5_ParamLimits

0x824c,	// (0x00022eb1) popup_note2_window_t5

0x0004,

0xfc55,	// (0x0002a8ba) popup_note2_window_t_ParamLimits

0xfc55,	// (0x0002a8ba) popup_note2_window_t

0xd039,	// (0x00027c9e) popup_note2_image_window_g1_ParamLimits

0xd039,	// (0x00027c9e) popup_note2_image_window_g1

0xd045,	// (0x00027caa) popup_note2_image_window_g2_ParamLimits

0xd045,	// (0x00027caa) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x0002a8c5) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x0002a8c5) popup_note2_image_window_g

0xd057,	// (0x00027cbc) popup_note2_image_window_t1_ParamLimits

0xd057,	// (0x00027cbc) popup_note2_image_window_t1

0xd06f,	// (0x00027cd4) popup_note2_image_window_t2_ParamLimits

0xd06f,	// (0x00027cd4) popup_note2_image_window_t2

0xd087,	// (0x00027cec) popup_note2_image_window_t3_ParamLimits

0xd087,	// (0x00027cec) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x0002a8ca) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x0002a8ca) popup_note2_image_window_t

0xa31f,	// (0x00024f84) popup_note2_wait_window_g1_ParamLimits

0xa31f,	// (0x00024f84) popup_note2_wait_window_g1

0xd0a3,	// (0x00027d08) popup_note2_wait_window_g2_ParamLimits

0xd0a3,	// (0x00027d08) popup_note2_wait_window_g2

0xa337,	// (0x00024f9c) popup_note2_wait_window_g3_ParamLimits

0xa337,	// (0x00024f9c) popup_note2_wait_window_g3

0x0002,

0xfc6c,	// (0x0002a8d1) popup_note2_wait_window_g_ParamLimits

0xfc6c,	// (0x0002a8d1) popup_note2_wait_window_g

0xd0af,	// (0x00027d14) popup_note2_wait_window_t1_ParamLimits

0xd0af,	// (0x00027d14) popup_note2_wait_window_t1

0xd0cd,	// (0x00027d32) popup_note2_wait_window_t2_ParamLimits

0xd0cd,	// (0x00027d32) popup_note2_wait_window_t2

0xd0eb,	// (0x00027d50) popup_note2_wait_window_t3_ParamLimits

0xd0eb,	// (0x00027d50) popup_note2_wait_window_t3

0xd0fd,	// (0x00027d62) popup_note2_wait_window_t4_ParamLimits

0xd0fd,	// (0x00027d62) popup_note2_wait_window_t4

0x0003,

0xfc73,	// (0x0002a8d8) popup_note2_wait_window_t_ParamLimits

0xfc73,	// (0x0002a8d8) popup_note2_wait_window_t

0xd10f,	// (0x00027d74) wait_bar2_pane_ParamLimits

0xd10f,	// (0x00027d74) wait_bar2_pane

0xd127,	// (0x00027d8c) popup_snote2_single_text_window_g1_ParamLimits

0xd127,	// (0x00027d8c) popup_snote2_single_text_window_g1

0xd14f,	// (0x00027db4) popup_snote2_single_text_window_t1_ParamLimits

0xd14f,	// (0x00027db4) popup_snote2_single_text_window_t1

0xd19b,	// (0x00027e00) popup_snote2_single_text_window_t2_ParamLimits

0xd19b,	// (0x00027e00) popup_snote2_single_text_window_t2

0xd1e7,	// (0x00027e4c) popup_snote2_single_text_window_t3_ParamLimits

0xd1e7,	// (0x00027e4c) popup_snote2_single_text_window_t3

0xd228,	// (0x00027e8d) popup_snote2_single_text_window_t4_ParamLimits

0xd228,	// (0x00027e8d) popup_snote2_single_text_window_t4

0xd25e,	// (0x00027ec3) popup_snote2_single_text_window_t5_ParamLimits

0xd25e,	// (0x00027ec3) popup_snote2_single_text_window_t5

0x0004,

0xfc7c,	// (0x0002a8e1) popup_snote2_single_text_window_t_ParamLimits

0xfc7c,	// (0x0002a8e1) popup_snote2_single_text_window_t

0xd289,	// (0x00027eee) popup_snote2_single_graphic_window_g1_ParamLimits

0xd289,	// (0x00027eee) popup_snote2_single_graphic_window_g1

0xd2b1,	// (0x00027f16) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2b1,	// (0x00027f16) popup_snote2_single_graphic_window_g2

0x0001,

0xfc87,	// (0x0002a8ec) popup_snote2_single_graphic_window_g_ParamLimits

0xfc87,	// (0x0002a8ec) popup_snote2_single_graphic_window_g

0xd2d9,	// (0x00027f3e) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2d9,	// (0x00027f3e) popup_snote2_single_graphic_window_t1

0xd325,	// (0x00027f8a) popup_snote2_single_graphic_window_t2_ParamLimits

0xd325,	// (0x00027f8a) popup_snote2_single_graphic_window_t2

0xd1e7,	// (0x00027e4c) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e7,	// (0x00027e4c) popup_snote2_single_graphic_window_t3

0xd228,	// (0x00027e8d) popup_snote2_single_graphic_window_t4_ParamLimits

0xd228,	// (0x00027e8d) popup_snote2_single_graphic_window_t4

0xd25e,	// (0x00027ec3) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25e,	// (0x00027ec3) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8c,	// (0x0002a8f1) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8c,	// (0x0002a8f1) popup_snote2_single_graphic_window_t

0xbd4d,	// (0x000269b2) clock_nsta_pane_cp2_t1

0xbd4d,	// (0x000269b2) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0002a711) clock_nsta_pane_cp2_t

0x4f30,	// (0x0001fb95) form_field_data_wide_pane_g1_ParamLimits

0x87bc,	// (0x00023421) form_field_data_wide_pane_g2_ParamLimits

0x87bc,	// (0x00023421) form_field_data_wide_pane_g2

0x87c8,	// (0x0002342d) form_field_data_wide_pane_g3_ParamLimits

0x87c8,	// (0x0002342d) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002a2e0) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002a2e0) form_field_data_wide_pane_g

0xbc3f,	// (0x000268a4) grid_touch_3_pane_ParamLimits

0xbc3f,	// (0x000268a4) grid_touch_3_pane

0xd371,	// (0x00027fd6) cell_touch_3_pane_ParamLimits

0xd371,	// (0x00027fd6) cell_touch_3_pane

0xc2b2,	// (0x00026f17) cell_touch_3_pane_g1

0xc2b2,	// (0x00026f17) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0002a796) cell_touch_3_pane_g

0x827e,	// (0x00022ee3) cont_query_data_pane

0x8286,	// (0x00022eeb) cont_query_data_pane_cp1

0xd39f,	// (0x00028004) button_value_adjust_pane_cp7

0xd3a7,	// (0x0002800c) query_popup_pane_cp3

0x8f21,	// (0x00023b86) bg_popup_sub_pane_cp22_ParamLimits

0x619c,	// (0x00020e01) navi_navi_volume_pane_cp2

0x61b7,	// (0x00020e1c) popup_side_volume_key_window_g2

0x61c6,	// (0x00020e2b) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002a376) popup_side_volume_key_window_g

0x61e3,	// (0x00020e48) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002a37d) popup_side_volume_key_window_t

0x91d8,	// (0x00023e3d) popup_side_volume_key_window_ParamLimits

0x4b91,	// (0x0001f7f6) list_double_graphic_pane_g4_ParamLimits

0x4b91,	// (0x0001f7f6) list_double_graphic_pane_g4

0x539c,	// (0x00020001) list_single_2heading_msg_pane_ParamLimits

0x539c,	// (0x00020001) list_single_2heading_msg_pane

0x598f,	// (0x000205f4) list_single_2heading_msg_pane_g1_ParamLimits

0x598f,	// (0x000205f4) list_single_2heading_msg_pane_g1

0x49c0,	// (0x0001f625) list_single_2heading_msg_pane_g2_ParamLimits

0x49c0,	// (0x0001f625) list_single_2heading_msg_pane_g2

0x599b,	// (0x00020600) list_single_2heading_msg_pane_g3_ParamLimits

0x599b,	// (0x00020600) list_single_2heading_msg_pane_g3

0x59a7,	// (0x0002060c) list_single_2heading_msg_pane_g4_ParamLimits

0x59a7,	// (0x0002060c) list_single_2heading_msg_pane_g4

0x0003,

0xfc97,	// (0x0002a8fc) list_single_2heading_msg_pane_g_ParamLimits

0xfc97,	// (0x0002a8fc) list_single_2heading_msg_pane_g

0x59bf,	// (0x00020624) list_single_2heading_msg_pane_t1_ParamLimits

0x59bf,	// (0x00020624) list_single_2heading_msg_pane_t1

0x59e7,	// (0x0002064c) list_single_2heading_msg_pane_t2_ParamLimits

0x59e7,	// (0x0002064c) list_single_2heading_msg_pane_t2

0x5a1b,	// (0x00020680) list_single_2heading_msg_pane_t3_ParamLimits

0x5a1b,	// (0x00020680) list_single_2heading_msg_pane_t3

0x5a54,	// (0x000206b9) list_single_2heading_msg_pane_t4_ParamLimits

0x5a54,	// (0x000206b9) list_single_2heading_msg_pane_t4

0x0003,

0xfca0,	// (0x0002a905) list_single_2heading_msg_pane_t_ParamLimits

0xfca0,	// (0x0002a905) list_single_2heading_msg_pane_t

0x7e93,	// (0x00022af8) title_pane_g4_ParamLimits

0x7e93,	// (0x00022af8) title_pane_g4

0x5fab,	// (0x00020c10) title_pane_stacon_g3_ParamLimits

0x5fab,	// (0x00020c10) title_pane_stacon_g3

0xcecd,	// (0x00027b32) list_single_2graphic_im_pane_g4_ParamLimits

0xcecd,	// (0x00027b32) list_single_2graphic_im_pane_g4

0xad70,	// (0x000259d5) popup_side_volume_key_window_cp

0xb58c,	// (0x000261f1) main_idle_act2_pane_t1

0x6b1c,	// (0x00021781) toolbar_button_pane_g10

0x8717,	// (0x0002337c) popup_toolbar_window_cp1

0xbd3e,	// (0x000269a3) clock_nsta_pane_cp_t1

0xbd3e,	// (0x000269a3) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0002a70c) clock_nsta_pane_cp_t

0x619c,	// (0x00020e01) navi_navi_volume_pane_cp2_ParamLimits

0x61ab,	// (0x00020e10) popup_side_volume_key_window_g1_ParamLimits

0x61b7,	// (0x00020e1c) popup_side_volume_key_window_g2_ParamLimits

0x61c6,	// (0x00020e2b) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002a376) popup_side_volume_key_window_g_ParamLimits

0x6f62,	// (0x00021bc7) fep_hwr_aid_pane

0x1e45,	// (0x0001caaa) bg_fep_hwr_top_pane_g4_ParamLimits

0xc30e,	// (0x00026f73) fep_hwr_top_pane_g1_ParamLimits

0xc320,	// (0x00026f85) fep_hwr_top_pane_g2_ParamLimits

0x701b,	// (0x00021c80) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0002a761) fep_hwr_top_pane_g_ParamLimits

0x7030,	// (0x00021c95) fep_hwr_top_text_pane_ParamLimits

0xab33,	// (0x00025798) aid_touch_tab_arrow_arrow_2

0xab3c,	// (0x000257a1) aid_touch_tab_arrow_left_2

0x6f76,	// (0x00021bdb) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6fad,	// (0x00021c12) fep_hwr_prediction_pane

0xc480,	// (0x000270e5) fep_vkb_prediction_pane

0xc584,	// (0x000271e9) fep_vkb_side_pane_g3_ParamLimits

0xc584,	// (0x000271e9) fep_vkb_side_pane_g3

0xc530,	// (0x00027195) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc9b0,	// (0x00027615) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc9bd,	// (0x00027622) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0002a80b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd3cc,	// (0x00028031) fep_hwr_prediction_pane_g1

0x72bd,	// (0x00021f22) fep_hwr_prediction_pane_g2

0x72c5,	// (0x00021f2a) fep_hwr_prediction_pane_g3

0x72cd,	// (0x00021f32) fep_hwr_prediction_pane_g4

0x0003,

0xfca9,	// (0x0002a90e) fep_hwr_prediction_pane_g

0xd3cc,	// (0x00028031) fep_vkb_prediction_pane_g1

0xd3d6,	// (0x0002803b) fep_vkb_prediction_pane_g2

0xd3de,	// (0x00028043) fep_vkb_prediction_pane_g3

0xd3e6,	// (0x0002804b) fep_vkb_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0002a917) fep_vkb_prediction_pane_g

0x6de2,	// (0x00021a47) slider_set_pane_g3

0x6df6,	// (0x00021a5b) slider_set_pane_g4

0x6e0e,	// (0x00021a73) slider_set_pane_g5

0x6de2,	// (0x00021a47) slider_set_pane_g6

0x6e24,	// (0x00021a89) slider_set_pane_g7

0xb1d1,	// (0x00025e36) slider_form_pane_g3

0xb1da,	// (0x00025e3f) slider_form_pane_g4

0xb1e2,	// (0x00025e47) slider_form_pane_g5

0xb1d1,	// (0x00025e36) slider_form_pane_g6

0xb1ea,	// (0x00025e4f) slider_form_pane_g7

0xb837,	// (0x0002649c) slider_set_pane_vc_g3

0xb840,	// (0x000264a5) slider_set_pane_vc_g4

0xb849,	// (0x000264ae) slider_set_pane_vc_g5

0xb837,	// (0x0002649c) slider_set_pane_vc_g6

0xb852,	// (0x000264b7) slider_set_pane_vc_g7

0xba12,	// (0x00026677) slider_form_pane_vc_g1

0xba1b,	// (0x00026680) slider_form_pane_vc_g2

0xba24,	// (0x00026689) slider_form_pane_vc_g3

0xba12,	// (0x00026677) slider_form_pane_vc_g4

0xba2d,	// (0x00026692) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0002a6de) slider_form_pane_vc_g

0x7e4b,	// (0x00022ab0) main_idle_act3_pane

0xd3ee,	// (0x00028053) ai3_links_pane

0xd3f7,	// (0x0002805c) popup_ai3_data_window_ParamLimits

0xd3f7,	// (0x0002805c) popup_ai3_data_window

0x7e4b,	// (0x00022ab0) grid_ai3_links_pane

0xd411,	// (0x00028076) cell_ai3_links_pane_ParamLimits

0xd411,	// (0x00028076) cell_ai3_links_pane

0xd429,	// (0x0002808e) bg_popup_sub_pane_cp11

0xd436,	// (0x0002809b) cell_ai3_links_pane_g1

0x7e4b,	// (0x00022ab0) bg_popup_sub_pane_cp12

0xd45b,	// (0x000280c0) heading_ai3_data_pane

0xd463,	// (0x000280c8) list_ai3_gene_pane

0xd46f,	// (0x000280d4) popup_ai3_data_window_g1

0xd477,	// (0x000280dc) heading_ai3_data_pane_g1

0xd47f,	// (0x000280e4) heading_ai3_data_pane_t1

0xd48d,	// (0x000280f2) list_double_ai3_gene_pane_ParamLimits

0xd48d,	// (0x000280f2) list_double_ai3_gene_pane

0xd49a,	// (0x000280ff) list_single_ai3_gene_pane_ParamLimits

0xd49a,	// (0x000280ff) list_single_ai3_gene_pane

0xc277,	// (0x00026edc) list_highlight_pane_cp7_ParamLimits

0xc277,	// (0x00026edc) list_highlight_pane_cp7

0xd4a7,	// (0x0002810c) list_single_a13_gene_pane_t1_ParamLimits

0xd4a7,	// (0x0002810c) list_single_a13_gene_pane_t1

0xd4be,	// (0x00028123) list_single_ai3_gene_pane_g1

0xd4c7,	// (0x0002812c) list_single_ai3_gene_pane_g2

0x0001,

0xfcbb,	// (0x0002a920) list_single_ai3_gene_pane_g

0xd4cf,	// (0x00028134) list_double_ai3_gene_pane_g1_ParamLimits

0xd4cf,	// (0x00028134) list_double_ai3_gene_pane_g1

0xd4db,	// (0x00028140) list_double_ai3_gene_pane_t1_ParamLimits

0xd4db,	// (0x00028140) list_double_ai3_gene_pane_t1

0xd4f7,	// (0x0002815c) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f7,	// (0x0002815c) list_double_ai3_gene_pane_t2

0xd50d,	// (0x00028172) list_double_ai3_gene_pane_t3_ParamLimits

0xd50d,	// (0x00028172) list_double_ai3_gene_pane_t3

0x0002,

0xfcc0,	// (0x0002a925) list_double_ai3_gene_pane_t_ParamLimits

0xfcc0,	// (0x0002a925) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5985,	// (0x000205ea) aid_size_min_col_2

0xd3b8,	// (0x0002801d) aid_size_min_msg_ParamLimits

0xd3b8,	// (0x0002801d) aid_size_min_msg

0xc684,	// (0x000272e9) fep_vkb_top_text_pane_g2_ParamLimits

0xc684,	// (0x000272e9) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0002a791) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0002a791) fep_vkb_top_text_pane_g

0x7e4b,	// (0x00022ab0) main_hc_apps_shell_pane

0xd52a,	// (0x0002818f) grid_hc_apps_pane_ParamLimits

0xd52a,	// (0x0002818f) grid_hc_apps_pane

0xd539,	// (0x0002819e) list_hc_apps_pane

0xd541,	// (0x000281a6) scroll_pane_cp37_ParamLimits

0xd541,	// (0x000281a6) scroll_pane_cp37

0xd54d,	// (0x000281b2) cell_hc_apps_pane_ParamLimits

0xd54d,	// (0x000281b2) cell_hc_apps_pane

0xd5fb,	// (0x00028260) cell_hc_apps_pane_g1_ParamLimits

0xd5fb,	// (0x00028260) cell_hc_apps_pane_g1

0xd62c,	// (0x00028291) cell_hc_apps_pane_g2_ParamLimits

0xd62c,	// (0x00028291) cell_hc_apps_pane_g2

0xd648,	// (0x000282ad) cell_hc_apps_pane_g3_ParamLimits

0xd648,	// (0x000282ad) cell_hc_apps_pane_g3

0x0002,

0xfcc7,	// (0x0002a92c) cell_hc_apps_pane_g_ParamLimits

0xfcc7,	// (0x0002a92c) cell_hc_apps_pane_g

0xd66a,	// (0x000282cf) cell_hc_apps_pane_t1_ParamLimits

0xd66a,	// (0x000282cf) cell_hc_apps_pane_t1

0x81c8,	// (0x00022e2d) grid_highlight_pane_cp10_ParamLimits

0x81c8,	// (0x00022e2d) grid_highlight_pane_cp10

0xd6aa,	// (0x0002830f) list_single_hc_apps_pane_ParamLimits

0xd6aa,	// (0x0002830f) list_single_hc_apps_pane

0xd706,	// (0x0002836b) list_single_hc_apps_pane_g1

0x5a79,	// (0x000206de) list_single_hc_apps_pane_g2

0x0001,

0xfcce,	// (0x0002a933) list_single_hc_apps_pane_g

0x5a92,	// (0x000206f7) list_single_hc_apps_pane_g2_copy1

0x5aae,	// (0x00020713) list_single_hc_apps_pane_t1

0x7f3f,	// (0x00022ba4) bg_set_opt_pane_cp_ParamLimits

0x5ed3,	// (0x00020b38) setting_slider_pane_t1_ParamLimits

0x5eec,	// (0x00020b51) setting_slider_pane_t2_ParamLimits

0x5f06,	// (0x00020b6b) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002a1c3) setting_slider_pane_t_ParamLimits

0x5f1e,	// (0x00020b83) slider_set_pane_ParamLimits

0x6445,	// (0x000210aa) control_pane_g5_ParamLimits

0x6445,	// (0x000210aa) control_pane_g5

0xb020,	// (0x00025c85) slider_set_pane_g1_ParamLimits

0x6dd6,	// (0x00021a3b) slider_set_pane_g2_ParamLimits

0x6de2,	// (0x00021a47) slider_set_pane_g3_ParamLimits

0x6df6,	// (0x00021a5b) slider_set_pane_g4_ParamLimits

0x6e0e,	// (0x00021a73) slider_set_pane_g5_ParamLimits

0x6de2,	// (0x00021a47) slider_set_pane_g6_ParamLimits

0x6e24,	// (0x00021a89) slider_set_pane_g7_ParamLimits

0xf95d,	// (0x0002a5c2) slider_set_pane_g_ParamLimits

0x92c4,	// (0x00023f29) navi_icon_text_pane_ParamLimits

0x97ba,	// (0x0002441f) aid_fill_nsta_2_ParamLimits

0x97f9,	// (0x0002445e) aid_touch_tab_arrow_left_ParamLimits

0x9808,	// (0x0002446d) aid_touch_tab_arrow_right_ParamLimits

0x9875,	// (0x000244da) clock_nsta_pane_ParamLimits

0xab15,	// (0x0002577a) navi_icon_pane_g1_ParamLimits

0xab21,	// (0x00025786) navi_text_pane_t1_ParamLimits

0xbe4a,	// (0x00026aaf) navi_icon_text_pane_g1_ParamLimits

0xbe56,	// (0x00026abb) navi_icon_text_pane_t1_ParamLimits

0xd706,	// (0x0002836b) list_single_hc_apps_pane_g1_ParamLimits

0x5a79,	// (0x000206de) list_single_hc_apps_pane_g2_ParamLimits

0xfcce,	// (0x0002a933) list_single_hc_apps_pane_g_ParamLimits

0x5a92,	// (0x000206f7) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5aae,	// (0x00020713) list_single_hc_apps_pane_t1_ParamLimits

0x5ddd,	// (0x00020a42) popup_toolbar2_fixed_window_ParamLimits

0x5ddd,	// (0x00020a42) popup_toolbar2_fixed_window

0x6a20,	// (0x00021685) popup_toolbar2_float_window

0x7e4b,	// (0x00022ab0) bg_popup_sub_pane_cp27

0xd71f,	// (0x00028384) grid_toolbar2_float_pane

0x7e4b,	// (0x00022ab0) bg_popup_sub_pane_cp26

0xd71f,	// (0x00028384) grid_toolbar2_fixed_pane

0xd727,	// (0x0002838c) cell_toolbar2_fixed_pane_ParamLimits

0xd727,	// (0x0002838c) cell_toolbar2_fixed_pane

0xd737,	// (0x0002839c) cell_toolbar2_fixed_pane_g1

0xd740,	// (0x000283a5) toolbar2_fixed_button_pane

0x9c8c,	// (0x000248f1) toolbar2_fixed_button_pane_g1

0x9c94,	// (0x000248f9) toolbar2_fixed_button_pane_g2

0x9c9c,	// (0x00024901) toolbar2_fixed_button_pane_g3

0x9ca4,	// (0x00024909) toolbar2_fixed_button_pane_g4

0x9cac,	// (0x00024911) toolbar2_fixed_button_pane_g5

0x9cb4,	// (0x00024919) toolbar2_fixed_button_pane_g6

0x9cbc,	// (0x00024921) toolbar2_fixed_button_pane_g7

0x9cc4,	// (0x00024929) toolbar2_fixed_button_pane_g8

0x9ccc,	// (0x00024931) toolbar2_fixed_button_pane_g9

0x0008,

0xf85f,	// (0x0002a4c4) toolbar2_fixed_button_pane_g

0xd748,	// (0x000283ad) cell_toolbar2_float_pane_ParamLimits

0xd748,	// (0x000283ad) cell_toolbar2_float_pane

0xd759,	// (0x000283be) cell_toolbar2_float_pane_g1

0xd740,	// (0x000283a5) toolbar2_fixed_button_pane_cp

0xc3e0,	// (0x00027045) fep_vkb_accented_list_pane_ParamLimits

0xc3e0,	// (0x00027045) fep_vkb_accented_list_pane

0x717e,	// (0x00021de3) bg_popup_fep_shadow_pane_g9

0x9444,	// (0x000240a9) bg_popup_fep_shadow_pane_cp3

0x8905,	// (0x0002356a) list_accented_list_pane

0xd762,	// (0x000283c7) list_single_accented_list_pane_ParamLimits

0xd762,	// (0x000283c7) list_single_accented_list_pane

0x9444,	// (0x000240a9) list_highlight_pane_cp10

0xd773,	// (0x000283d8) list_single_accented_list_pane_t1

0x6970,	// (0x000215d5) popup_slider_window_ParamLimits

0x6970,	// (0x000215d5) popup_slider_window

0xd3af,	// (0x00028014) aid_indentation_list_msg

0xd82d,	// (0x00028492) bg_popup_window_pane_cp19

0xd897,	// (0x000284fc) popup_slider_window_g1

0xd8b3,	// (0x00028518) popup_slider_window_g2

0xd8cf,	// (0x00028534) popup_slider_window_g3

0x0005,

0xfcd3,	// (0x0002a938) popup_slider_window_g

0xd92b,	// (0x00028590) popup_slider_window_t1

0xd99f,	// (0x00028604) small_volume_slider_vertical_pane

0xc2b2,	// (0x00026f17) small_volume_slider_vertical_pane_g1

0xc2b2,	// (0x00026f17) small_volume_slider_vertical_pane_g2

0xd9bb,	// (0x00028620) small_volume_slider_vertical_pane_g3

0x0002,

0xfce5,	// (0x0002a94a) small_volume_slider_vertical_pane_g

0x5b9f,	// (0x00020804) area_side_right_pane_ParamLimits

0x5b9f,	// (0x00020804) area_side_right_pane

0x72d5,	// (0x00021f3a) aid_size_side_button_ParamLimits

0x72d5,	// (0x00021f3a) aid_size_side_button

0x72e9,	// (0x00021f4e) grid_sctrl_middle_pane_ParamLimits

0x72e9,	// (0x00021f4e) grid_sctrl_middle_pane

0x7308,	// (0x00021f6d) sctrl_sk_bottom_pane

0x7319,	// (0x00021f7e) sctrl_sk_top_pane

0x732b,	// (0x00021f90) aid_touch_sctrl_top

0x81c8,	// (0x00022e2d) bg_sctrl_sk_pane_ParamLimits

0x81c8,	// (0x00022e2d) bg_sctrl_sk_pane

0x7338,	// (0x00021f9d) sctrl_sk_top_pane_g1

0x7345,	// (0x00021faa) sctrl_sk_top_pane_t1

0x732b,	// (0x00021f90) aid_touch_sctrl_bottom

0x81c8,	// (0x00022e2d) bg_sctrl_sk_pane_cp_ParamLimits

0x81c8,	// (0x00022e2d) bg_sctrl_sk_pane_cp

0x7360,	// (0x00021fc5) sctrl_sk_bottom_pane_g1

0x7345,	// (0x00021faa) sctrl_sk_bottom_pane_t1

0x7369,	// (0x00021fce) cell_sctrl_middle_pane_ParamLimits

0x7369,	// (0x00021fce) cell_sctrl_middle_pane

0x7384,	// (0x00021fe9) aid_touch_sctrl_middle_ParamLimits

0x7384,	// (0x00021fe9) aid_touch_sctrl_middle

0x87ae,	// (0x00023413) bg_sctrl_middle_pane_ParamLimits

0x87ae,	// (0x00023413) bg_sctrl_middle_pane

0xc530,	// (0x00027195) cell_sctrl_middle_pane_g1_ParamLimits

0xc530,	// (0x00027195) cell_sctrl_middle_pane_g1

0x7396,	// (0x00021ffb) cell_sctrl_middle_pane_g2_ParamLimits

0x7396,	// (0x00021ffb) cell_sctrl_middle_pane_g2

0x0001,

0xfcf1,	// (0x0002a956) cell_sctrl_middle_pane_g_ParamLimits

0xfcf1,	// (0x0002a956) cell_sctrl_middle_pane_g

0x9c8c,	// (0x000248f1) bg_sctrl_middle_pane_g1

0x9c94,	// (0x000248f9) bg_sctrl_middle_pane_g2

0x9c9c,	// (0x00024901) bg_sctrl_middle_pane_g3

0x9ca4,	// (0x00024909) bg_sctrl_middle_pane_g4

0x9cac,	// (0x00024911) bg_sctrl_middle_pane_g5

0x9cb4,	// (0x00024919) bg_sctrl_middle_pane_g6

0x9cbc,	// (0x00024921) bg_sctrl_middle_pane_g7

0x9cc4,	// (0x00024929) bg_sctrl_middle_pane_g8

0x0007,

0xfcf6,	// (0x0002a95b) bg_sctrl_middle_pane_g

0x9ccc,	// (0x00024931) bg_sctrl_middle_pane_g8_copy1

0x9c8c,	// (0x000248f1) bg_sctrl_sk_pane_g1

0x9c94,	// (0x000248f9) bg_sctrl_sk_pane_g2

0x9c9c,	// (0x00024901) bg_sctrl_sk_pane_g3

0x0008,

0xf85f,	// (0x0002a4c4) bg_sctrl_sk_pane_g

0x86dd,	// (0x00023342) aid_size_touch_scroll_bar

0x9ca4,	// (0x00024909) bg_sctrl_sk_pane_g4

0x9cac,	// (0x00024911) bg_sctrl_sk_pane_g5

0x9cb4,	// (0x00024919) bg_sctrl_sk_pane_g6

0x9cbc,	// (0x00024921) bg_sctrl_sk_pane_g7

0x9cc4,	// (0x00024929) bg_sctrl_sk_pane_g8

0x9ccc,	// (0x00024931) bg_sctrl_sk_pane_g9

0x65d9,	// (0x0002123e) popup_fep_china_hwr2_fs_candidate_window

0x65e3,	// (0x00021248) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x65e3,	// (0x00021248) popup_fep_china_hwr2_fs_control_window

0xc530,	// (0x00027195) sctrl_sk_top_pane_g2

0x0001,

0xfcec,	// (0x0002a951) sctrl_sk_top_pane_g

0xd9c4,	// (0x00028629) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c4,	// (0x00028629) aid_fep_china_hwr2_fs_cell

0xd9d6,	// (0x0002863b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d6,	// (0x0002863b) bg_popup_fep_shadow_pane_cp4

0xd9ed,	// (0x00028652) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ed,	// (0x00028652) bg_popup_fep_shadow_pane_cp5

0xd9ff,	// (0x00028664) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9ff,	// (0x00028664) popup_fep_china_hwr2_fs_control_bar_grid

0xda0f,	// (0x00028674) popup_fep_china_hwr2_fs_control_funtion_grid

0xda17,	// (0x0002867c) aid_fep_china_hwr2_fs_candi_cell

0x7e4b,	// (0x00022ab0) bg_popup_fep_shadow_pane_cp6

0xda21,	// (0x00028686) popup_fep_china_hwr2_fs_candidate_grid

0xda2b,	// (0x00028690) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda2b,	// (0x00028690) cell_fep_china_hwr2_fs_funtion_grid

0xc2b2,	// (0x00026f17) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda43,	// (0x000286a8) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda43,	// (0x000286a8) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda51,	// (0x000286b6) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda51,	// (0x000286b6) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd07,	// (0x0002a96c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd07,	// (0x0002a96c) cell_fep_china_hwr2_fs_funtion_grid_g

0xda67,	// (0x000286cc) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda67,	// (0x000286cc) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda7c,	// (0x000286e1) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda7c,	// (0x000286e1) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0c,	// (0x0002a971) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0c,	// (0x0002a971) cell_fep_china_hwr2_fs_funtion_grid_t

0xda98,	// (0x000286fd) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdaa0,	// (0x00028705) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa8,	// (0x0002870d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd11,	// (0x0002a976) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdab0,	// (0x00028715) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdab0,	// (0x00028715) cell_fep_china_hwr2_fs_candidate_grid

0xdac9,	// (0x0002872e) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdad1,	// (0x00028736) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2b2,	// (0x00026f17) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2b2,	// (0x00026f17) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0002a796) cell_fep_china_hwr2_fs_candidate_grid_g

0xdad9,	// (0x0002873e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9882,	// (0x000244e7) clock_nsta_pane_cp_24_ParamLimits

0x9882,	// (0x000244e7) clock_nsta_pane_cp_24

0x9900,	// (0x00024565) indicator_nsta_pane_cp_24_ParamLimits

0x9900,	// (0x00024565) indicator_nsta_pane_cp_24

0xa991,	// (0x000255f6) heading_pane_g1

0x0001,

0xf8c4,	// (0x0002a529) heading_pane_g

0xb3d5,	// (0x0002603a) grid_sct_catagory_button_pane

0xb405,	// (0x0002606a) scroll_pane_cp5_ParamLimits

0xbea4,	// (0x00026b09) button_value_adjust_pane_cp5_ParamLimits

0xbea4,	// (0x00026b09) button_value_adjust_pane_cp5

0xbf83,	// (0x00026be8) form2_midp_time_pane_ParamLimits

0xdae7,	// (0x0002874c) cell_sct_catagory_button_pane_ParamLimits

0xdae7,	// (0x0002874c) cell_sct_catagory_button_pane

0xc277,	// (0x00026edc) bg_button_pane_cp01_ParamLimits

0xc277,	// (0x00026edc) bg_button_pane_cp01

0xc2b2,	// (0x00026f17) cell_sct_catagory_button_pane_g1

0x69af,	// (0x00021614) popup_tb_extension_window

0xdaf9,	// (0x0002875e) aid_size_cell_ext_ParamLimits

0xdaf9,	// (0x0002875e) aid_size_cell_ext

0x81c8,	// (0x00022e2d) bg_tb_trans_pane_cp1_ParamLimits

0x81c8,	// (0x00022e2d) bg_tb_trans_pane_cp1

0xdb19,	// (0x0002877e) grid_tb_ext_pane_ParamLimits

0xdb19,	// (0x0002877e) grid_tb_ext_pane

0xdb47,	// (0x000287ac) cell_tb_ext_pane_ParamLimits

0xdb47,	// (0x000287ac) cell_tb_ext_pane

0xdb5e,	// (0x000287c3) cell_tb_ext_pane_g1_ParamLimits

0xdb5e,	// (0x000287c3) cell_tb_ext_pane_g1

0xdb7b,	// (0x000287e0) cell_tb_ext_pane_t1

0x81c8,	// (0x00022e2d) list_highlight_pane_cp11_ParamLimits

0x81c8,	// (0x00022e2d) list_highlight_pane_cp11

0x5dfc,	// (0x00020a61) popup_uni_indicator_window_ParamLimits

0x5dfc,	// (0x00020a61) popup_uni_indicator_window

0x87ae,	// (0x00023413) bg_popup_sub_pane_cp14

0xdb96,	// (0x000287fb) list_uniindi_pane

0xdba2,	// (0x00028807) uniindi_top_pane

0x81c8,	// (0x00022e2d) bg_uniindi_top_pane

0xdbc1,	// (0x00028826) uniindi_top_pane_g1

0xdbd7,	// (0x0002883c) uniindi_top_pane_g2

0x0003,

0xfd18,	// (0x0002a97d) uniindi_top_pane_g

0xdc01,	// (0x00028866) uniindi_top_pane_t1

0xdc2b,	// (0x00028890) list_single_uniindi_pane_ParamLimits

0xdc2b,	// (0x00028890) list_single_uniindi_pane

0xc2b2,	// (0x00026f17) bg_uniindi_top_pane_g1

0xdc3e,	// (0x000288a3) list_single_uniindi_pane_g1

0xdc51,	// (0x000288b6) list_single_uniindi_pane_t1

0x7e4b,	// (0x00022ab0) control_bg_pane

0xdc76,	// (0x000288db) bg_sctrl_sk_pane_cp1

0xdc7f,	// (0x000288e4) bg_sctrl_sk_pane_cp2

0xdc88,	// (0x000288ed) control_bg_pane_g1

0xdc91,	// (0x000288f6) control_bg_pane_g2

0x0001,

0xfd21,	// (0x0002a986) control_bg_pane_g

0xbce2,	// (0x00026947) cell_indicator_nsta_pane_g1_ParamLimits

0xbcf0,	// (0x00026955) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0002a6fa) cell_indicator_nsta_pane_g_ParamLimits

0x5736,	// (0x0002039b) form2_midp_time_pane_t1_ParamLimits

0x851f,	// (0x00023184) main_idle_act4_pane_ParamLimits

0x851f,	// (0x00023184) main_idle_act4_pane

0x69af,	// (0x00021614) popup_tb_extension_window_ParamLimits

0xdb37,	// (0x0002879c) tb_ext_find_pane_ParamLimits

0xdb37,	// (0x0002879c) tb_ext_find_pane

0xdc9a,	// (0x000288ff) ai_gene_pane_1_cp1

0x957f,	// (0x000241e4) ai_gene_pane_2_cp1

0xdca2,	// (0x00028907) list_single_idle_plugin_calendar_pane

0xdcab,	// (0x00028910) list_single_idle_plugin_notification_pane

0xdcb4,	// (0x00028919) list_single_idle_plugin_player_pane

0xdcbd,	// (0x00028922) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcbd,	// (0x00028922) list_single_idle_plugin_shortcut_pane

0xdcdf,	// (0x00028944) main_idle_act4_pane_t1

0xdcf1,	// (0x00028956) main_idle_act4_pane_t2

0x0001,

0xfd26,	// (0x0002a98b) main_idle_act4_pane_t

0xdd03,	// (0x00028968) middle_sk_idle_act4_pane_ParamLimits

0xdd03,	// (0x00028968) middle_sk_idle_act4_pane

0xdd19,	// (0x0002897e) popup_clock_digital_analogue_window_cp2

0xdd33,	// (0x00028998) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd33,	// (0x00028998) shortcut_wheel_idle_act4_pane

0xc2b2,	// (0x00026f17) shortcut_wheel_idle_act4_pane_g1

0xc2b2,	// (0x00026f17) shortcut_wheel_idle_act4_pane_g2

0xc2b2,	// (0x00026f17) shortcut_wheel_idle_act4_pane_g3

0xc2b2,	// (0x00026f17) shortcut_wheel_idle_act4_pane_g4

0xc2b2,	// (0x00026f17) shortcut_wheel_idle_act4_pane_g5

0xdd47,	// (0x000289ac) shortcut_wheel_idle_act4_pane_g6

0xdd4f,	// (0x000289b4) shortcut_wheel_idle_act4_pane_g7

0xdd57,	// (0x000289bc) shortcut_wheel_idle_act4_pane_g8

0xdd5f,	// (0x000289c4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2b,	// (0x0002a990) shortcut_wheel_idle_act4_pane_g

0xc530,	// (0x00027195) middle_sk_idle_act4_pane_g1_ParamLimits

0xc530,	// (0x00027195) middle_sk_idle_act4_pane_g1

0xddc3,	// (0x00028a28) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc3,	// (0x00028a28) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4e,	// (0x0002a9b3) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4e,	// (0x0002a9b3) middle_sk_idle_act4_pane_g

0xddcf,	// (0x00028a34) middle_sk_idle_act4_pane_t1_ParamLimits

0xddcf,	// (0x00028a34) middle_sk_idle_act4_pane_t1

0xddec,	// (0x00028a51) grid_ai_shortcut_pane_ParamLimits

0xddec,	// (0x00028a51) grid_ai_shortcut_pane

0xde05,	// (0x00028a6a) list_highlight_pane_cp16_ParamLimits

0xde05,	// (0x00028a6a) list_highlight_pane_cp16

0xde12,	// (0x00028a77) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde12,	// (0x00028a77) list_single_idle_plugin_shortcut_pane_g1

0xde1e,	// (0x00028a83) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1e,	// (0x00028a83) list_single_idle_plugin_shortcut_pane_g2

0xde36,	// (0x00028a9b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde36,	// (0x00028a9b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd53,	// (0x0002a9b8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd53,	// (0x0002a9b8) list_single_idle_plugin_shortcut_pane_g

0xde49,	// (0x00028aae) cell_ai_shortcut_pane_ParamLimits

0xde49,	// (0x00028aae) cell_ai_shortcut_pane

0xde6d,	// (0x00028ad2) cell_ai_shortcut_pane_g1_ParamLimits

0xde6d,	// (0x00028ad2) cell_ai_shortcut_pane_g1

0xdc9a,	// (0x000288ff) ai_gene_pane_1_cp2

0xde8f,	// (0x00028af4) ai_gene_pane_2_cp2

0xde97,	// (0x00028afc) list_highlight_pane_cp15

0xdea0,	// (0x00028b05) list_single_idle_plugin_calendar_pane_g1

0xde97,	// (0x00028afc) list_highlight_pane_cp17

0xdea8,	// (0x00028b0d) list_single_idle_plugin_calendar_pane_g1_copy1

0xdeb0,	// (0x00028b15) list_single_idle_plugin_player_pane_g1

0xb62e,	// (0x00026293) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5a,	// (0x0002a9bf) list_single_idle_plugin_player_pane_g

0xdeb8,	// (0x00028b1d) list_single_idle_plugin_player_pane_t1

0xdec6,	// (0x00028b2b) list_single_idle_plugin_player_pane_t2

0xded4,	// (0x00028b39) list_single_idle_plugin_player_pane_t3

0xdee2,	// (0x00028b47) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5f,	// (0x0002a9c4) list_single_idle_plugin_player_pane_t

0xdef0,	// (0x00028b55) wait_bar_pane_cp15

0xdef8,	// (0x00028b5d) grid_ai_notification_pane

0xb62e,	// (0x00026293) list_single_idle_plugin_notification_pane_g1

0xdf01,	// (0x00028b66) cell_ai_notification_pane_ParamLimits

0xdf01,	// (0x00028b66) cell_ai_notification_pane

0xdf0e,	// (0x00028b73) cell_ai_notification_pane_g1

0xdf16,	// (0x00028b7b) cell_ai_notification_pane_t1

0xdf24,	// (0x00028b89) tb_ext_find_button_pane

0xdf2c,	// (0x00028b91) tb_ext_find_pane_g1

0xdf34,	// (0x00028b99) tb_ext_find_pane_t1

0x8e31,	// (0x00023a96) tb_ext_find_button_pane_g1

0xdf42,	// (0x00028ba7) tb_ext_find_button_pane_g2

0x0001,

0xfd68,	// (0x0002a9cd) tb_ext_find_button_pane_g

0xdcdf,	// (0x00028944) main_idle_act4_pane_t1_ParamLimits

0xdcf1,	// (0x00028956) main_idle_act4_pane_t2_ParamLimits

0xfd26,	// (0x0002a98b) main_idle_act4_pane_t_ParamLimits

0xdd19,	// (0x0002897e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd27,	// (0x0002898c) sat_plugin_idle_act4_pane_ParamLimits

0xdd27,	// (0x0002898c) sat_plugin_idle_act4_pane

0xdf4b,	// (0x00028bb0) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf4b,	// (0x00028bb0) sat_plugin_idle_act4_pane_t1

0xdf5e,	// (0x00028bc3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5e,	// (0x00028bc3) sat_plugin_idle_act4_pane_t2

0xdf71,	// (0x00028bd6) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf71,	// (0x00028bd6) sat_plugin_idle_act4_pane_t3

0xdf84,	// (0x00028be9) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf84,	// (0x00028be9) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6d,	// (0x0002a9d2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6d,	// (0x0002a9d2) sat_plugin_idle_act4_pane_t

0x5d37,	// (0x0002099c) popup_battery_window_ParamLimits

0x5d37,	// (0x0002099c) popup_battery_window

0x81c8,	// (0x00022e2d) bg_popup_sub_pane_cp25_ParamLimits

0x81c8,	// (0x00022e2d) bg_popup_sub_pane_cp25

0xdf97,	// (0x00028bfc) popup_battery_window_g1_ParamLimits

0xdf97,	// (0x00028bfc) popup_battery_window_g1

0xdfa3,	// (0x00028c08) popup_battery_window_t1_ParamLimits

0xdfa3,	// (0x00028c08) popup_battery_window_t1

0xdfb5,	// (0x00028c1a) popup_battery_window_t2_ParamLimits

0xdfb5,	// (0x00028c1a) popup_battery_window_t2

0x0001,

0xfd76,	// (0x0002a9db) popup_battery_window_t_ParamLimits

0xfd76,	// (0x0002a9db) popup_battery_window_t

0x944c,	// (0x000240b1) midp_canvas_pane_ParamLimits

0x94c3,	// (0x00024128) midp_keypad_pane_ParamLimits

0x94c3,	// (0x00024128) midp_keypad_pane

0x9782,	// (0x000243e7) main_midp_pane_ParamLimits

0xbd5c,	// (0x000269c1) signal_pane_g2_cp_ParamLimits

0xdfd2,	// (0x00028c37) aid_size_cell_midp_keypad_ParamLimits

0xdfd2,	// (0x00028c37) aid_size_cell_midp_keypad

0xdfec,	// (0x00028c51) midp_keyp_game_grid_pane_ParamLimits

0xdfec,	// (0x00028c51) midp_keyp_game_grid_pane

0xe00c,	// (0x00028c71) midp_keyp_rocker_pane_ParamLimits

0xe00c,	// (0x00028c71) midp_keyp_rocker_pane

0xe045,	// (0x00028caa) midp_keyp_sk_left_pane_ParamLimits

0xe045,	// (0x00028caa) midp_keyp_sk_left_pane

0xe09f,	// (0x00028d04) midp_keyp_sk_right_pane_ParamLimits

0xe09f,	// (0x00028d04) midp_keyp_sk_right_pane

0x7e4b,	// (0x00022ab0) bg_button_pane_cp03

0xe0f9,	// (0x00028d5e) midp_keyp_sk_left_pane_g1

0x7e4b,	// (0x00022ab0) bg_button_pane_cp04

0xe0f9,	// (0x00028d5e) midp_keyp_sk_right_pane_g1

0xc2b2,	// (0x00026f17) midp_keyp_rocker_pane_g1

0xe102,	// (0x00028d67) keyp_game_cell_pane_ParamLimits

0xe102,	// (0x00028d67) keyp_game_cell_pane

0x7e4b,	// (0x00022ab0) bg_button_pane_cp02

0xe115,	// (0x00028d7a) keyp_game_cell_pane_g1

0x5d7b,	// (0x000209e0) popup_fep_vkb2_window_ParamLimits

0x5d7b,	// (0x000209e0) popup_fep_vkb2_window

0x73b4,	// (0x00022019) aid_size_cell_vkb2_ParamLimits

0x73b4,	// (0x00022019) aid_size_cell_vkb2

0x7408,	// (0x0002206d) popup_fep_vkb2_window_g1_ParamLimits

0x7408,	// (0x0002206d) popup_fep_vkb2_window_g1

0x7450,	// (0x000220b5) vkb2_area_bottom_pane_ParamLimits

0x7450,	// (0x000220b5) vkb2_area_bottom_pane

0x749c,	// (0x00022101) vkb2_area_keypad_pane_ParamLimits

0x749c,	// (0x00022101) vkb2_area_keypad_pane

0x74de,	// (0x00022143) vkb2_area_top_pane_ParamLimits

0x74de,	// (0x00022143) vkb2_area_top_pane

0x7558,	// (0x000221bd) vkb2_top_entry_pane_ParamLimits

0x7558,	// (0x000221bd) vkb2_top_entry_pane

0x7582,	// (0x000221e7) vkb2_top_grid_left_pane_ParamLimits

0x7582,	// (0x000221e7) vkb2_top_grid_left_pane

0x75a0,	// (0x00022205) vkb2_top_grid_right_pane_ParamLimits

0x75a0,	// (0x00022205) vkb2_top_grid_right_pane

0x75be,	// (0x00022223) vkb2_cell_keypad_pane_ParamLimits

0x75be,	// (0x00022223) vkb2_cell_keypad_pane

0x768f,	// (0x000222f4) vkb2_area_bottom_grid_pane_ParamLimits

0x768f,	// (0x000222f4) vkb2_area_bottom_grid_pane

0x76b5,	// (0x0002231a) vkb2_area_bottom_pane_g1_ParamLimits

0x76b5,	// (0x0002231a) vkb2_area_bottom_pane_g1

0x76d9,	// (0x0002233e) vkb2_area_bottom_pane_g2_ParamLimits

0x76d9,	// (0x0002233e) vkb2_area_bottom_pane_g2

0x7707,	// (0x0002236c) vkb2_area_bottom_pane_g3_ParamLimits

0x7707,	// (0x0002236c) vkb2_area_bottom_pane_g3

0x0002,

0xfd7b,	// (0x0002a9e0) vkb2_area_bottom_pane_g_ParamLimits

0xfd7b,	// (0x0002a9e0) vkb2_area_bottom_pane_g

0x7768,	// (0x000223cd) vkb2_top_cell_left_pane_ParamLimits

0x7768,	// (0x000223cd) vkb2_top_cell_left_pane

0xe126,	// (0x00028d8b) vkb2_top_entry_pane_g1_ParamLimits

0xe126,	// (0x00028d8b) vkb2_top_entry_pane_g1

0xe134,	// (0x00028d99) vkb2_top_entry_pane_t1_ParamLimits

0xe134,	// (0x00028d99) vkb2_top_entry_pane_t1

0xe166,	// (0x00028dcb) vkb2_top_entry_pane_t2_ParamLimits

0xe166,	// (0x00028dcb) vkb2_top_entry_pane_t2

0xe198,	// (0x00028dfd) vkb2_top_entry_pane_t3_ParamLimits

0xe198,	// (0x00028dfd) vkb2_top_entry_pane_t3

0x0002,

0xfd82,	// (0x0002a9e7) vkb2_top_entry_pane_t_ParamLimits

0xfd82,	// (0x0002a9e7) vkb2_top_entry_pane_t

0x77b5,	// (0x0002241a) vkb2_top_grid_right_pane_g1_ParamLimits

0x77b5,	// (0x0002241a) vkb2_top_grid_right_pane_g1

0x77cb,	// (0x00022430) vkb2_top_grid_right_pane_g2_ParamLimits

0x77cb,	// (0x00022430) vkb2_top_grid_right_pane_g2

0x77e3,	// (0x00022448) vkb2_top_grid_right_pane_g3_ParamLimits

0x77e3,	// (0x00022448) vkb2_top_grid_right_pane_g3

0x77fb,	// (0x00022460) vkb2_top_grid_right_pane_g4_ParamLimits

0x77fb,	// (0x00022460) vkb2_top_grid_right_pane_g4

0x0003,

0xfd89,	// (0x0002a9ee) vkb2_top_grid_right_pane_g_ParamLimits

0xfd89,	// (0x0002a9ee) vkb2_top_grid_right_pane_g

0x7811,	// (0x00022476) vkb2_top_cell_left_pane_g1

0x7828,	// (0x0002248d) vkb2_cell_keypad_pane_g1_ParamLimits

0x7828,	// (0x0002248d) vkb2_cell_keypad_pane_g1

0xe1bc,	// (0x00028e21) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1bc,	// (0x00028e21) vkb2_cell_keypad_pane_t1

0x7836,	// (0x0002249b) vkb2_cell_bottom_grid_pane_ParamLimits

0x7836,	// (0x0002249b) vkb2_cell_bottom_grid_pane

0x786f,	// (0x000224d4) vkb2_cell_bottom_grid_pane_g1

0xdd67,	// (0x000289cc) aid_call2_pane_cp02

0xdd6f,	// (0x000289d4) aid_call_pane_cp02

0xdd77,	// (0x000289dc) clock_digital_number_pane_cp10

0xdd7f,	// (0x000289e4) clock_digital_number_pane_cp11

0xdd87,	// (0x000289ec) clock_digital_number_pane_cp12

0xdd8f,	// (0x000289f4) clock_digital_number_pane_cp13

0xdd97,	// (0x000289fc) clock_digital_separator_pane_cp10

0x8e31,	// (0x00023a96) popup_clock_digital_analogue_window_cp2_g1

0x8e31,	// (0x00023a96) popup_clock_digital_analogue_window_cp2_g2

0xdd9f,	// (0x00028a04) popup_clock_digital_analogue_window_cp2_g3

0x8e31,	// (0x00023a96) popup_clock_digital_analogue_window_cp2_g4

0xdd9f,	// (0x00028a04) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3e,	// (0x0002a9a3) popup_clock_digital_analogue_window_cp2_g

0xdda7,	// (0x00028a0c) popup_clock_digital_analogue_window_cp2_t1

0xddb5,	// (0x00028a1a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd49,	// (0x0002a9ae) popup_clock_digital_analogue_window_cp2_t

0xc2b2,	// (0x00026f17) clock_digital_number_pane_cp10_g1

0xc2b2,	// (0x00026f17) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0002a796) clock_digital_number_pane_cp10_g

0xc2b2,	// (0x00026f17) clock_digital_separator_pane_cp10_g1

0xc2b2,	// (0x00026f17) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0002a796) clock_digital_separator_pane_cp10_g

0xdbe3,	// (0x00028848) uniindi_top_pane_g3

0xdbf4,	// (0x00028859) uniindi_top_pane_g4

0x7649,	// (0x000222ae) vkb2_row_keypad_pane_ParamLimits

0x7649,	// (0x000222ae) vkb2_row_keypad_pane

0x788b,	// (0x000224f0) vkb2_cell_t_keypad_pane_ParamLimits

0x788b,	// (0x000224f0) vkb2_cell_t_keypad_pane

0x789b,	// (0x00022500) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x789b,	// (0x00022500) vkb2_cell_t_keypad_pane_cp08

0x78ae,	// (0x00022513) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x78ae,	// (0x00022513) vkb2_cell_t_keypad_pane_cp09

0x78c2,	// (0x00022527) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x78c2,	// (0x00022527) vkb2_cell_t_keypad_pane_cp01

0x78d3,	// (0x00022538) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x78d3,	// (0x00022538) vkb2_cell_t_keypad_pane_cp02

0x78e4,	// (0x00022549) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x78e4,	// (0x00022549) vkb2_cell_t_keypad_pane_cp03

0x78f5,	// (0x0002255a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x78f5,	// (0x0002255a) vkb2_cell_t_keypad_pane_cp04

0x7906,	// (0x0002256b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7906,	// (0x0002256b) vkb2_cell_t_keypad_pane_cp05

0x7917,	// (0x0002257c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7917,	// (0x0002257c) vkb2_cell_t_keypad_pane_cp06

0x7928,	// (0x0002258d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7928,	// (0x0002258d) vkb2_cell_t_keypad_pane_cp07

0x7939,	// (0x0002259e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7939,	// (0x0002259e) vkb2_cell_t_keypad_pane_cp10

0xc530,	// (0x00027195) vkb2_cell_t_keypad_pane_g1

0xe1d3,	// (0x00028e38) vkb2_cell_t_keypad_pane_t1

0x7e4b,	// (0x00022ab0) popup_grid_graphic2_window

0xe1e5,	// (0x00028e4a) aid_size_cell_graphic2_ParamLimits

0xe1e5,	// (0x00028e4a) aid_size_cell_graphic2

0xe21d,	// (0x00028e82) bg_popup_window_pane_cp21_ParamLimits

0xe21d,	// (0x00028e82) bg_popup_window_pane_cp21

0xe22b,	// (0x00028e90) graphic2_pages_pane_ParamLimits

0xe22b,	// (0x00028e90) graphic2_pages_pane

0xe271,	// (0x00028ed6) grid_graphic2_control_pane_ParamLimits

0xe271,	// (0x00028ed6) grid_graphic2_control_pane

0xe2af,	// (0x00028f14) grid_graphic2_pane_ParamLimits

0xe2af,	// (0x00028f14) grid_graphic2_pane

0xe323,	// (0x00028f88) cell_graphic2_pane

0x7e4b,	// (0x00022ab0) main_comp_mode_pane

0xd463,	// (0x000280c8) list_ai3_gene_pane_ParamLimits

0xd82d,	// (0x00028492) bg_popup_window_pane_cp19_ParamLimits

0xd839,	// (0x0002849e) bg_touch_area_indi_pane_ParamLimits

0xd839,	// (0x0002849e) bg_touch_area_indi_pane

0xd84f,	// (0x000284b4) bg_touch_area_indi_pane_cp01_ParamLimits

0xd84f,	// (0x000284b4) bg_touch_area_indi_pane_cp01

0xd865,	// (0x000284ca) bg_touch_area_indi_pane_cp02_ParamLimits

0xd865,	// (0x000284ca) bg_touch_area_indi_pane_cp02

0xd87d,	// (0x000284e2) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87d,	// (0x000284e2) bg_touch_area_indi_pane_cp03

0xd897,	// (0x000284fc) popup_slider_window_g1_ParamLimits

0xd8b3,	// (0x00028518) popup_slider_window_g2_ParamLimits

0xd8cf,	// (0x00028534) popup_slider_window_g3_ParamLimits

0xfcd3,	// (0x0002a938) popup_slider_window_g_ParamLimits

0xd92b,	// (0x00028590) popup_slider_window_t1_ParamLimits

0xd99f,	// (0x00028604) small_volume_slider_vertical_pane_ParamLimits

0xe323,	// (0x00028f88) cell_graphic2_pane_ParamLimits

0xe371,	// (0x00028fd6) bg_button_pane_cp10_ParamLimits

0xe371,	// (0x00028fd6) bg_button_pane_cp10

0xe384,	// (0x00028fe9) bg_button_pane_cp11_ParamLimits

0xe384,	// (0x00028fe9) bg_button_pane_cp11

0xe397,	// (0x00028ffc) graphic2_pages_pane_g1_ParamLimits

0xe397,	// (0x00028ffc) graphic2_pages_pane_g1

0xe3b2,	// (0x00029017) graphic2_pages_pane_g2_ParamLimits

0xe3b2,	// (0x00029017) graphic2_pages_pane_g2

0x0001,

0xfd97,	// (0x0002a9fc) graphic2_pages_pane_g_ParamLimits

0xfd97,	// (0x0002a9fc) graphic2_pages_pane_g

0xe3ca,	// (0x0002902f) graphic2_pages_pane_t1_ParamLimits

0xe3ca,	// (0x0002902f) graphic2_pages_pane_t1

0xe3e2,	// (0x00029047) cell_graphic2_control_pane_ParamLimits

0xe3e2,	// (0x00029047) cell_graphic2_control_pane

0xe403,	// (0x00029068) cell_graphic2_pane_g1_ParamLimits

0xe403,	// (0x00029068) cell_graphic2_pane_g1

0xe410,	// (0x00029075) cell_graphic2_pane_g2_ParamLimits

0xe410,	// (0x00029075) cell_graphic2_pane_g2

0xe41d,	// (0x00029082) cell_graphic2_pane_g3_ParamLimits

0xe41d,	// (0x00029082) cell_graphic2_pane_g3

0xe42a,	// (0x0002908f) cell_graphic2_pane_g4_ParamLimits

0xe42a,	// (0x0002908f) cell_graphic2_pane_g4

0xe437,	// (0x0002909c) cell_graphic2_pane_g5_ParamLimits

0xe437,	// (0x0002909c) cell_graphic2_pane_g5

0x0004,

0xfd9c,	// (0x0002aa01) cell_graphic2_pane_g_ParamLimits

0xfd9c,	// (0x0002aa01) cell_graphic2_pane_g

0xe452,	// (0x000290b7) cell_graphic2_pane_t1_ParamLimits

0xe452,	// (0x000290b7) cell_graphic2_pane_t1

0x9d00,	// (0x00024965) grid_highlight_pane_cp11_ParamLimits

0x9d00,	// (0x00024965) grid_highlight_pane_cp11

0x81c8,	// (0x00022e2d) bg_button_pane_cp05

0xe47b,	// (0x000290e0) cell_graphic2_control_pane_g1

0xc2b2,	// (0x00026f17) bg_touch_area_indi_pane_g1

0xe4a3,	// (0x00029108) aid_cmod_rocker_key_size

0xe4ad,	// (0x00029112) aid_cmode_itu_key_size

0xe4b7,	// (0x0002911c) main_cmode_video_pane

0xe4c1,	// (0x00029126) main_comp_mode_itu_pane

0xe4cd,	// (0x00029132) main_comp_mode_rocker_pane

0xe4d9,	// (0x0002913e) cell_cmode_rocker_pane_ParamLimits

0xe4d9,	// (0x0002913e) cell_cmode_rocker_pane

0xe4eb,	// (0x00029150) cell_cmode_itu_pane_ParamLimits

0xe4eb,	// (0x00029150) cell_cmode_itu_pane

0x87ae,	// (0x00023413) bg_button_pane_cp06_ParamLimits

0x87ae,	// (0x00023413) bg_button_pane_cp06

0xc530,	// (0x00027195) cell_cmode_rocker_pane_g1_ParamLimits

0xc530,	// (0x00027195) cell_cmode_rocker_pane_g1

0xda43,	// (0x000286a8) cell_cmode_rocker_pane_g2_ParamLimits

0xda43,	// (0x000286a8) cell_cmode_rocker_pane_g2

0x0001,

0xfdac,	// (0x0002aa11) cell_cmode_rocker_pane_g_ParamLimits

0xfdac,	// (0x0002aa11) cell_cmode_rocker_pane_g

0x7e4b,	// (0x00022ab0) bg_button_pane_cp07

0xe500,	// (0x00029165) cell_cmode_itu_pane_g1

0xe509,	// (0x0002916e) cell_cmode_itu_pane_t1

0xe517,	// (0x0002917c) cell_cmode_itu_pane_t2

0x0001,

0xfdb1,	// (0x0002aa16) cell_cmode_itu_pane_t

0xdc66,	// (0x000288cb) aid_touch_ctrl_left

0xdc6e,	// (0x000288d3) aid_touch_ctrl_right

0x7e4b,	// (0x00022ab0) compa_mode_pane

0xe525,	// (0x0002918a) aid_cmod_rocker_key_size_cp

0xe52f,	// (0x00029194) aid_cmode_itu_key_size_cp

0xe539,	// (0x0002919e) compa_mode_pane_g1

0xe541,	// (0x000291a6) compa_mode_pane_g2

0xe549,	// (0x000291ae) compa_mode_pane_g3

0x0002,

0xfdb6,	// (0x0002aa1b) compa_mode_pane_g

0xe551,	// (0x000291b6) main_comp_mode_itu_pane_cp

0xe559,	// (0x000291be) main_comp_mode_rocker_pane_cp

0xe561,	// (0x000291c6) cell_cmode_itu_pane_cp_ParamLimits

0xe561,	// (0x000291c6) cell_cmode_itu_pane_cp

0xe576,	// (0x000291db) cell_cmode_rocker_pane_cp_ParamLimits

0xe576,	// (0x000291db) cell_cmode_rocker_pane_cp

0x87ae,	// (0x00023413) bg_button_pane_cp06_cp_ParamLimits

0x87ae,	// (0x00023413) bg_button_pane_cp06_cp

0xc530,	// (0x00027195) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc530,	// (0x00027195) cell_cmode_rocker_pane_g1_cp

0xc2b2,	// (0x00026f17) cell_cmode_rocker_pane_g2_cp

0x7e4b,	// (0x00022ab0) bg_button_pane_cp07_cp

0xb1d1,	// (0x00025e36) cell_cmode_itu_pane_g1_cp

0xe588,	// (0x000291ed) cell_cmode_itu_pane_t1_cp

0xe588,	// (0x000291ed) cell_cmode_itu_pane_t2_cp

0xb1be,	// (0x00025e23) settings_code_pane_cp2

0x7f3f,	// (0x00022ba4) bg_popup_window_pane_cp3_ParamLimits

0x83a2,	// (0x00023007) heading_pane_cp3_ParamLimits

0x83ae,	// (0x00023013) listscroll_popup_graphic_pane_ParamLimits

0x6f62,	// (0x00021bc7) fep_hwr_aid_pane_ParamLimits

0x732b,	// (0x00021f90) aid_touch_sctrl_top_ParamLimits

0x7338,	// (0x00021f9d) sctrl_sk_top_pane_g1_ParamLimits

0xc530,	// (0x00027195) sctrl_sk_top_pane_g2_ParamLimits

0xfcec,	// (0x0002a951) sctrl_sk_top_pane_g_ParamLimits

0x7345,	// (0x00021faa) sctrl_sk_top_pane_t1_ParamLimits

0x732b,	// (0x00021f90) aid_touch_sctrl_bottom_ParamLimits

0x7345,	// (0x00021faa) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbaf,	// (0x00028814) aid_area_touch_clock

0x7520,	// (0x00022185) aid_vkb2_area_top_pane_cell_ParamLimits

0x7520,	// (0x00022185) aid_vkb2_area_top_pane_cell

0x766b,	// (0x000222d0) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x766b,	// (0x000222d0) aid_vkb2_area_bottom_pane_cell

0xe11e,	// (0x00028d83) popup_char_count_window

0xe596,	// (0x000291fb) popup_char_count_window_g1

0xe59f,	// (0x00029204) popup_char_count_window_g2

0xe5a8,	// (0x0002920d) popup_char_count_window_g3

0x0002,

0xfdbd,	// (0x0002aa22) popup_char_count_window_g

0xe5b1,	// (0x00029216) popup_char_count_window_t1

0x73e6,	// (0x0002204b) popup_fep_char_preview_window_ParamLimits

0x73e6,	// (0x0002204b) popup_fep_char_preview_window

0x753e,	// (0x000221a3) vkb2_top_candi_pane_ParamLimits

0x753e,	// (0x000221a3) vkb2_top_candi_pane

0xe5bf,	// (0x00029224) cell_vkb2_top_candi_pane_ParamLimits

0xe5bf,	// (0x00029224) cell_vkb2_top_candi_pane

0xa311,	// (0x00024f76) bg_popup_fep_char_preview_window_ParamLimits

0xa311,	// (0x00024f76) bg_popup_fep_char_preview_window

0x794e,	// (0x000225b3) popup_fep_char_preview_window_t1_ParamLimits

0x794e,	// (0x000225b3) popup_fep_char_preview_window_t1

0xe62d,	// (0x00029292) bg_popup_fep_char_preview_window_g1

0xe635,	// (0x0002929a) bg_popup_fep_char_preview_window_g2

0xe63d,	// (0x000292a2) bg_popup_fep_char_preview_window_g3

0xe645,	// (0x000292aa) bg_popup_fep_char_preview_window_g4

0xe64d,	// (0x000292b2) bg_popup_fep_char_preview_window_g5

0x7988,	// (0x000225ed) bg_popup_fep_char_preview_window_g6

0xe655,	// (0x000292ba) bg_popup_fep_char_preview_window_g7

0xe65d,	// (0x000292c2) bg_popup_fep_char_preview_window_g8

0xe665,	// (0x000292ca) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc4,	// (0x0002aa29) bg_popup_fep_char_preview_window_g

0xc530,	// (0x00027195) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc530,	// (0x00027195) cell_vkb2_top_candi_pane_g1

0xc950,	// (0x000275b5) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc950,	// (0x000275b5) cell_vkb2_top_candi_pane_g2

0xc971,	// (0x000275d6) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc971,	// (0x000275d6) cell_vkb2_top_candi_pane_g3

0x7990,	// (0x000225f5) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7990,	// (0x000225f5) cell_vkb2_top_candi_pane_g4

0xe60c,	// (0x00029271) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe60c,	// (0x00029271) cell_vkb2_top_candi_pane_g5

0xda43,	// (0x000286a8) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda43,	// (0x000286a8) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x0002aa3c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x0002aa3c) cell_vkb2_top_candi_pane_g

0x79b1,	// (0x00022616) cell_vkb2_top_candi_pane_t1

0x6dc2,	// (0x00021a27) aid_size_touch_slider_mark_ParamLimits

0x6dc2,	// (0x00021a27) aid_size_touch_slider_mark

0xe261,	// (0x00028ec6) grid_graphic2_catg_pane_ParamLimits

0xe261,	// (0x00028ec6) grid_graphic2_catg_pane

0xe2ff,	// (0x00028f64) popup_grid_graphic2_window_t1_ParamLimits

0xe2ff,	// (0x00028f64) popup_grid_graphic2_window_t1

0xe311,	// (0x00028f76) popup_grid_graphic2_window_t2_ParamLimits

0xe311,	// (0x00028f76) popup_grid_graphic2_window_t2

0x0001,

0xfd92,	// (0x0002a9f7) popup_grid_graphic2_window_t_ParamLimits

0xfd92,	// (0x0002a9f7) popup_grid_graphic2_window_t

0x81c8,	// (0x00022e2d) bg_button_pane_cp05_ParamLimits

0xe47b,	// (0x000290e0) cell_graphic2_control_pane_g1_ParamLimits

0xe66d,	// (0x000292d2) cell_graphic2_catg_pane_ParamLimits

0xe66d,	// (0x000292d2) cell_graphic2_catg_pane

0x7e4b,	// (0x00022ab0) bg_button_pane_cp12

0xe67f,	// (0x000292e4) cell_graphic2_catg_pane_g1

0xdb7b,	// (0x000287e0) cell_tb_ext_pane_t1_ParamLimits

0x7788,	// (0x000223ed) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7788,	// (0x000223ed) vkb2_top_cell_right_narrow_pane

0x77a0,	// (0x00022405) vkb2_top_cell_right_wide_pane_ParamLimits

0x77a0,	// (0x00022405) vkb2_top_cell_right_wide_pane

0x6f54,	// (0x00021bb9) bg_vkb2_func_pane_ParamLimits

0x6f54,	// (0x00021bb9) bg_vkb2_func_pane

0x7811,	// (0x00022476) vkb2_top_cell_left_pane_g1_ParamLimits

0x6f54,	// (0x00021bb9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6f54,	// (0x00021bb9) bg_vkb2_fuc_pane_cp03

0x786f,	// (0x000224d4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c94,	// (0x000248f9) bg_vkb2_func_pane_g1

0x9c9c,	// (0x00024901) bg_vkb2_func_pane_g2

0x9cac,	// (0x00024911) bg_vkb2_func_pane_g3

0x9ca4,	// (0x00024909) bg_vkb2_func_pane_g4

0x9cb4,	// (0x00024919) bg_vkb2_func_pane_g5

0x9cbc,	// (0x00024921) bg_vkb2_func_pane_g6

0x9cc4,	// (0x00024929) bg_vkb2_func_pane_g7

0x9ccc,	// (0x00024931) bg_vkb2_func_pane_g8

0x9c8c,	// (0x000248f1) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x0002aa49) bg_vkb2_func_pane_g

0x6f54,	// (0x00021bb9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6f54,	// (0x00021bb9) bg_vkb2_fuc_pane_cp01

0x7811,	// (0x00022476) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7811,	// (0x00022476) vkb2_top_cell_right_wide_pane_g1

0x6f54,	// (0x00021bb9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6f54,	// (0x00021bb9) bg_vkb2_fuc_pane_cp02

0x786f,	// (0x000224d4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x786f,	// (0x000224d4) vkb2_top_cell_right_narrow_pane_g1

0xd7b1,	// (0x00028416) aid_touch_area_decrease_ParamLimits

0xd7b1,	// (0x00028416) aid_touch_area_decrease

0xd7cf,	// (0x00028434) aid_touch_area_increase_ParamLimits

0xd7cf,	// (0x00028434) aid_touch_area_increase

0xd7db,	// (0x00028440) aid_touch_area_mute_ParamLimits

0xd7db,	// (0x00028440) aid_touch_area_mute

0xd7ff,	// (0x00028464) aid_touch_area_slider_ParamLimits

0xd7ff,	// (0x00028464) aid_touch_area_slider

0xd8eb,	// (0x00028550) popup_slider_window_g4_ParamLimits

0xd8eb,	// (0x00028550) popup_slider_window_g4

0xd8f7,	// (0x0002855c) popup_slider_window_g5_ParamLimits

0xd8f7,	// (0x0002855c) popup_slider_window_g5

0xd919,	// (0x0002857e) popup_slider_window_g6_ParamLimits

0xd919,	// (0x0002857e) popup_slider_window_g6

0xd959,	// (0x000285be) popup_slider_window_t2_ParamLimits

0xd959,	// (0x000285be) popup_slider_window_t2

0x0001,

0xfce0,	// (0x0002a945) popup_slider_window_t_ParamLimits

0xfce0,	// (0x0002a945) popup_slider_window_t

0xd971,	// (0x000285d6) slider_pane_ParamLimits

0xd971,	// (0x000285d6) slider_pane

0xe688,	// (0x000292ed) slider_pane_g1_ParamLimits

0xe688,	// (0x000292ed) slider_pane_g1

0xe69c,	// (0x00029301) slider_pane_g2_ParamLimits

0xe69c,	// (0x00029301) slider_pane_g2

0xe6b2,	// (0x00029317) slider_pane_g3_ParamLimits

0xe6b2,	// (0x00029317) slider_pane_g3

0x0003,

0xfdf7,	// (0x0002aa5c) slider_pane_g_ParamLimits

0xfdf7,	// (0x0002aa5c) slider_pane_g

0x6a0b,	// (0x00021670) popup_tb_float_extension_window_ParamLimits

0x6a0b,	// (0x00021670) popup_tb_float_extension_window

0xe6de,	// (0x00029343) aid_size_cell_tb_float_ext

0x7e4b,	// (0x00022ab0) bg_popup_sub_window_cp28

0xe6ea,	// (0x0002934f) grid_tb_float_ext_pane

0xe6f4,	// (0x00029359) cell_tb_float_ext_pane_ParamLimits

0xe6f4,	// (0x00029359) cell_tb_float_ext_pane

0xe70e,	// (0x00029373) cell_tb_float_ext_pane_g1

0xe717,	// (0x0002937c) grid_highlight_pane_cp12

0x7095,	// (0x00021cfa) cell_last_hwr_side_pane_ParamLimits

0x7095,	// (0x00021cfa) cell_last_hwr_side_pane

0xc2b2,	// (0x00026f17) cell_last_hwr_side_pane_g1

0xe720,	// (0x00029385) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x0002aa65) cell_last_hwr_side_pane_g

0x7737,	// (0x0002239c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7737,	// (0x0002239c) vkb2_area_bottom_space_btn_pane

0xc530,	// (0x00027195) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1d3,	// (0x00028e38) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x79b1,	// (0x00022616) cell_vkb2_top_candi_pane_t1_ParamLimits

0x79d0,	// (0x00022635) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x79d0,	// (0x00022635) vkb2_area_bottom_space_btn_pane_g1

0x7a0a,	// (0x0002266f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7a0a,	// (0x0002266f) vkb2_area_bottom_space_btn_pane_g2

0x7a40,	// (0x000226a5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a40,	// (0x000226a5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x0002aa6a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x0002aa6a) vkb2_area_bottom_space_btn_pane_g

0x7009,	// (0x00021c6e) cel_fep_hwr_func_pane_ParamLimits

0x7009,	// (0x00021c6e) cel_fep_hwr_func_pane

0x7045,	// (0x00021caa) cell_hwr_side_button_pane_ParamLimits

0x7045,	// (0x00021caa) cell_hwr_side_button_pane

0xdbaf,	// (0x00028814) aid_area_touch_clock_ParamLimits

0x81c8,	// (0x00022e2d) bg_uniindi_top_pane_ParamLimits

0xdbc1,	// (0x00028826) uniindi_top_pane_g1_ParamLimits

0xdbd7,	// (0x0002883c) uniindi_top_pane_g2_ParamLimits

0xdbe3,	// (0x00028848) uniindi_top_pane_g3_ParamLimits

0xdbf4,	// (0x00028859) uniindi_top_pane_g4_ParamLimits

0xfd18,	// (0x0002a97d) uniindi_top_pane_g_ParamLimits

0xdc01,	// (0x00028866) uniindi_top_pane_t1_ParamLimits

0x81c8,	// (0x00022e2d) bg_vkb2_func_pane_cp01_ParamLimits

0x81c8,	// (0x00022e2d) bg_vkb2_func_pane_cp01

0xe729,	// (0x0002938e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe729,	// (0x0002938e) cel_fep_hwr_func_pane_g1

0x81c8,	// (0x00022e2d) bg_vkb2_func_pane_cp02_ParamLimits

0x81c8,	// (0x00022e2d) bg_vkb2_func_pane_cp02

0xe729,	// (0x0002938e) cell_hwr_side_button_pane_g1_ParamLimits

0xe729,	// (0x0002938e) cell_hwr_side_button_pane_g1

0x9b0d,	// (0x00024772) status_pane_g4_ParamLimits

0x9b0d,	// (0x00024772) status_pane_g4

0x9b27,	// (0x0002478c) status_pane_t1

0xbfec,	// (0x00026c51) form2_midp_gauge_slider_cont_pane

0xbff4,	// (0x00026c59) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc006,	// (0x00026c6b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc018,	// (0x00026c7d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0002a749) form2_midp_gauge_slider_pane_t_ParamLimits

0xc02a,	// (0x00026c8f) form2_midp_slider_pane_ParamLimits

0x73a6,	// (0x0002200b) aid_size_cell_func_vkb2_ParamLimits

0x73a6,	// (0x0002200b) aid_size_cell_func_vkb2

0xe6ca,	// (0x0002932f) slider_pane_g4_ParamLimits

0xe6ca,	// (0x0002932f) slider_pane_g4

0x7a8a,	// (0x000226ef) form2_midp_gauge_slider_pane_t2_cp01

0x7a98,	// (0x000226fd) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7a98,	// (0x000226fd) form2_midp_gauge_slider_pane_t3_cp01

0x7ab5,	// (0x0002271a) form2_midp_slider_pane_cp01

0x7e4b,	// (0x00022ab0) navi_smil_pane

0xe762,	// (0x000293c7) navi_smil_pane_g1

0xe76a,	// (0x000293cf) navi_smil_pane_t1

0xe737,	// (0x0002939c) form2_midp_slider_pane_g1

0xe740,	// (0x000293a5) form2_midp_slider_pane_g2

0xe748,	// (0x000293ad) form2_midp_slider_pane_g3

0xe737,	// (0x0002939c) form2_midp_slider_pane_g4

0xe750,	// (0x000293b5) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x0002aa73) form2_midp_slider_pane_g

0x7a7a,	// (0x000226df) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7a7a,	// (0x000226df) vkb2_area_bottom_space_btn_pane_g4

0x993c,	// (0x000245a1) lc0_navi_pane_ParamLimits

0x993c,	// (0x000245a1) lc0_navi_pane

0x99b2,	// (0x00024617) lc0_stat_indi_pane_ParamLimits

0x99b2,	// (0x00024617) lc0_stat_indi_pane

0x99c9,	// (0x0002462e) ls0_title_pane_ParamLimits

0x99c9,	// (0x0002462e) ls0_title_pane

0x87ae,	// (0x00023413) bg_popup_sub_pane_cp14_ParamLimits

0xdb96,	// (0x000287fb) list_uniindi_pane_ParamLimits

0xdba2,	// (0x00028807) uniindi_top_pane_ParamLimits

0xdc3e,	// (0x000288a3) list_single_uniindi_pane_g1_ParamLimits

0xdc51,	// (0x000288b6) list_single_uniindi_pane_t1_ParamLimits

0x7abe,	// (0x00022723) lc0_stat_clock_pane_ParamLimits

0x7abe,	// (0x00022723) lc0_stat_clock_pane

0xe778,	// (0x000293dd) lc0_stat_indi_pane_g1_ParamLimits

0xe778,	// (0x000293dd) lc0_stat_indi_pane_g1

0xe785,	// (0x000293ea) lc0_stat_indi_pane_g2_ParamLimits

0xe785,	// (0x000293ea) lc0_stat_indi_pane_g2

0x0001,

0xfe19,	// (0x0002aa7e) lc0_stat_indi_pane_g_ParamLimits

0xfe19,	// (0x0002aa7e) lc0_stat_indi_pane_g

0x7acb,	// (0x00022730) lc0_uni_indicator_pane_ParamLimits

0x7acb,	// (0x00022730) lc0_uni_indicator_pane

0xe792,	// (0x000293f7) ls0_title_pane_g1_ParamLimits

0xe792,	// (0x000293f7) ls0_title_pane_g1

0xe7a6,	// (0x0002940b) ls0_title_pane_t1_ParamLimits

0xe7a6,	// (0x0002940b) ls0_title_pane_t1

0x7ad8,	// (0x0002273d) lc0_uni_indicator_pane_g1_ParamLimits

0x7ad8,	// (0x0002273d) lc0_uni_indicator_pane_g1

0xe7dc,	// (0x00029441) lc0_stat_clock_pane_t1

0x7e4b,	// (0x00022ab0) main_ai5_pane

0xe7ea,	// (0x0002944f) ai5_sk_pane_ParamLimits

0xe7ea,	// (0x0002944f) ai5_sk_pane

0xe7f7,	// (0x0002945c) cell_ai5_widget_pane_ParamLimits

0xe7f7,	// (0x0002945c) cell_ai5_widget_pane

0xe8ad,	// (0x00029512) aid_size_cell_widget_grid

0xe8c3,	// (0x00029528) bg_ai5_widget_pane_ParamLimits

0xe8c3,	// (0x00029528) bg_ai5_widget_pane

0xe937,	// (0x0002959c) cell_ai5_widget_pane_g2

0xe947,	// (0x000295ac) cell_ai5_widget_pane_g3

0xe95e,	// (0x000295c3) cell_ai5_widget_pane_g4

0xe96a,	// (0x000295cf) cell_ai5_widget_pane_g5

0xe976,	// (0x000295db) cell_ai5_widget_pane_g6

0xe982,	// (0x000295e7) cell_ai5_widget_pane_g7

0xe9ca,	// (0x0002962f) cell_ai5_widget_pane_t1_ParamLimits

0xe9ca,	// (0x0002962f) cell_ai5_widget_pane_t1

0xe9e7,	// (0x0002964c) cell_ai5_widget_pane_t2_ParamLimits

0xe9e7,	// (0x0002964c) cell_ai5_widget_pane_t2

0xe9ff,	// (0x00029664) cell_ai5_widget_pane_t3_ParamLimits

0xe9ff,	// (0x00029664) cell_ai5_widget_pane_t3

0xea17,	// (0x0002967c) cell_ai5_widget_pane_t4_ParamLimits

0xea17,	// (0x0002967c) cell_ai5_widget_pane_t4

0xea34,	// (0x00029699) cell_ai5_widget_pane_t5_ParamLimits

0xea34,	// (0x00029699) cell_ai5_widget_pane_t5

0xea53,	// (0x000296b8) cell_ai5_widget_pane_t6_ParamLimits

0xea53,	// (0x000296b8) cell_ai5_widget_pane_t6

0xea65,	// (0x000296ca) cell_ai5_widget_pane_t7_ParamLimits

0xea65,	// (0x000296ca) cell_ai5_widget_pane_t7

0xea7e,	// (0x000296e3) cell_ai5_widget_pane_t8_ParamLimits

0xea7e,	// (0x000296e3) cell_ai5_widget_pane_t8

0x0009,

0xfe33,	// (0x0002aa98) cell_ai5_widget_pane_t_ParamLimits

0xfe33,	// (0x0002aa98) cell_ai5_widget_pane_t

0xead2,	// (0x00029737) grid_ai5_widget_pane

0x87ae,	// (0x00023413) highlight_cell_ai5_widget_pane_ParamLimits

0x87ae,	// (0x00023413) highlight_cell_ai5_widget_pane

0xeae9,	// (0x0002974e) ai5_sk_left_pane

0xeaf3,	// (0x00029758) ai5_sk_middle_pane

0xeafd,	// (0x00029762) ai5_sk_right_pane

0xeb07,	// (0x0002976c) bg_ai5_widget_pane_g1_ParamLimits

0xeb07,	// (0x0002976c) bg_ai5_widget_pane_g1

0xeb13,	// (0x00029778) bg_ai5_widget_pane_g2_ParamLimits

0xeb13,	// (0x00029778) bg_ai5_widget_pane_g2

0xeb1f,	// (0x00029784) bg_ai5_widget_pane_g3_ParamLimits

0xeb1f,	// (0x00029784) bg_ai5_widget_pane_g3

0xeb2b,	// (0x00029790) bg_ai5_widget_pane_g4_ParamLimits

0xeb2b,	// (0x00029790) bg_ai5_widget_pane_g4

0xeb37,	// (0x0002979c) bg_ai5_widget_pane_g5_ParamLimits

0xeb37,	// (0x0002979c) bg_ai5_widget_pane_g5

0xeb43,	// (0x000297a8) bg_ai5_widget_pane_g6_ParamLimits

0xeb43,	// (0x000297a8) bg_ai5_widget_pane_g6

0xeb4f,	// (0x000297b4) bg_ai5_widget_pane_g7_ParamLimits

0xeb4f,	// (0x000297b4) bg_ai5_widget_pane_g7

0xeb5b,	// (0x000297c0) bg_ai5_widget_pane_g8_ParamLimits

0xeb5b,	// (0x000297c0) bg_ai5_widget_pane_g8

0xeb67,	// (0x000297cc) bg_ai5_widget_pane_g9_ParamLimits

0xeb67,	// (0x000297cc) bg_ai5_widget_pane_g9

0x0008,

0xfe48,	// (0x0002aaad) bg_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0002aaad) bg_ai5_widget_pane_g

0xeb99,	// (0x000297fe) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb99,	// (0x000297fe) cell_shortcut_ai5_widget_pane

0x9444,	// (0x000240a9) bg_cell_shortcut_ai5_widget_pane

0xebaa,	// (0x0002980f) cell_grid_ai5_widget_pane_g1

0x9444,	// (0x000240a9) highlight_cell_shortcut_ai5_widget_pane

0x9c9c,	// (0x00024901) ai5_sk_left_pane_g1

0xebb3,	// (0x00029818) ai5_sk_left_pane_g2

0xebbb,	// (0x00029820) ai5_sk_left_pane_g3

0xebc3,	// (0x00029828) ai5_sk_left_pane_g4

0x0003,

0xfe5b,	// (0x0002aac0) ai5_sk_left_pane_g

0xebcb,	// (0x00029830) ai5_sk_left_pane_t1

0x9c94,	// (0x000248f9) ai5_sk_right_pane_g1

0xebd9,	// (0x0002983e) ai5_sk_right_pane_g2

0xebe1,	// (0x00029846) ai5_sk_right_pane_g3

0xebe9,	// (0x0002984e) ai5_sk_right_pane_g4

0x0003,

0xfe64,	// (0x0002aac9) ai5_sk_right_pane_g

0xebf1,	// (0x00029856) ai5_sk_right_pane_t1

0x9c94,	// (0x000248f9) ai5_sk_middle_pane_g1

0x9c9c,	// (0x00024901) ai5_sk_middle_pane_g2

0x9cb4,	// (0x00024919) ai5_sk_middle_pane_g3

0xebe1,	// (0x00029846) ai5_sk_middle_pane_g4

0xebbb,	// (0x00029820) ai5_sk_middle_pane_g5

0xebff,	// (0x00029864) ai5_sk_middle_pane_g6

0xec07,	// (0x0002986c) ai5_sk_middle_pane_g7

0x0006,

0xfe6d,	// (0x0002aad2) ai5_sk_middle_pane_g

0x97c8,	// (0x0002442d) aid_touch_area_size_lc0_ParamLimits

0x97c8,	// (0x0002442d) aid_touch_area_size_lc0

0x7194,	// (0x00021df9) cell_hwr_candidate_pane_t1_ParamLimits

0x97e4,	// (0x00024449) aid_touch_navi_pane

0x9ab7,	// (0x0002471c) status_dt_navi_pane_ParamLimits

0x9ab7,	// (0x0002471c) status_dt_navi_pane

0x9ac4,	// (0x00024729) status_dt_sta_pane_ParamLimits

0x9ac4,	// (0x00024729) status_dt_sta_pane

0xec0f,	// (0x00029874) dt_sta_controll_pane

0xec1c,	// (0x00029881) dt_sta_indi_pane

0xec2d,	// (0x00029892) dt_sta_title_pane

0x81c8,	// (0x00022e2d) bg_dt_sta_indi_pane_ParamLimits

0x81c8,	// (0x00022e2d) bg_dt_sta_indi_pane

0xec40,	// (0x000298a5) dt_sta_battery_pane

0xec48,	// (0x000298ad) dt_sta_indi_pane_g1

0xec51,	// (0x000298b6) dt_sta_indi_pane_g2

0xec5a,	// (0x000298bf) dt_sta_indi_pane_g3

0x0002,

0x002b,	// (0x0001ac90) dt_sta_indi_pane_g

0xec63,	// (0x000298c8) dt_sta_signal_pane

0x87ae,	// (0x00023413) bg_dt_sta_title_pane_ParamLimits

0x87ae,	// (0x00023413) bg_dt_sta_title_pane

0xec6c,	// (0x000298d1) dt_sta_title_pane_g1

0xec74,	// (0x000298d9) dt_sta_title_pane_t1_ParamLimits

0xec74,	// (0x000298d9) dt_sta_title_pane_t1

0x7e4b,	// (0x00022ab0) bg_dt_sta_control_pane

0xec89,	// (0x000298ee) dt_sta_controll_pane_g1

0xec92,	// (0x000298f7) bg_dt_sta_title_pane_g1

0xec9b,	// (0x00029900) bg_dt_sta_title_pane_g2

0xeca4,	// (0x00029909) bg_dt_sta_title_pane_g3

0x0002,

0x0032,	// (0x0001ac97) bg_dt_sta_title_pane_g

0xc2b2,	// (0x00026f17) bg_dt_sta_indi_pane_g1

0xecad,	// (0x00029912) dt_sta_signal_pane_g1

0xecb5,	// (0x0002991a) dt_sta_signal_pane_g2

0x0001,

0x0039,	// (0x0001ac9e) dt_sta_signal_pane_g

0xecbd,	// (0x00029922) dt_sta_battery_pane_g1

0xecc6,	// (0x0002992b) dt_sta_battery_pane_t1

0xc2b2,	// (0x00026f17) bg_dt_sta_control_pane_g1

0x8f43,	// (0x00023ba8) fep_china_uni_eep_pane

0x8f4b,	// (0x00023bb0) fep_china_uni_entry_pane_ParamLimits

0x8f5b,	// (0x00023bc0) popup_fep_china_uni_window_g1_ParamLimits

0x8f6b,	// (0x00023bd0) popup_fep_china_uni_window_g2_ParamLimits

0x8f6b,	// (0x00023bd0) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002a382) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002a382) popup_fep_china_uni_window_g

0xecd5,	// (0x0002993a) fep_china_uni_eep_pane_g1

0xecdd,	// (0x00029942) fep_china_uni_eep_pane_t1

0xe759,	// (0x000293be) aid_touch_area_size_smil_player

0x9934,	// (0x00024599) lc0_clock_pane

0x9b1b,	// (0x00024780) status_pane_g5_ParamLimits

0x9b1b,	// (0x00024780) status_pane_g5

0x66d0,	// (0x00021335) popup_keymap_window

0x9ad9,	// (0x0002473e) status_icon_pane

0xe947,	// (0x000295ac) cell_ai5_widget_pane_g3_ParamLimits

0xe95e,	// (0x000295c3) cell_ai5_widget_pane_g4_ParamLimits

0xe96a,	// (0x000295cf) cell_ai5_widget_pane_g5_ParamLimits

0xe98e,	// (0x000295f3) cell_ai5_widget_pane_g8_ParamLimits

0xe98e,	// (0x000295f3) cell_ai5_widget_pane_g8

0xe9a2,	// (0x00029607) cell_ai5_widget_pane_g9_ParamLimits

0xe9a2,	// (0x00029607) cell_ai5_widget_pane_g9

0xe9b6,	// (0x0002961b) cell_ai5_widget_pane_g10_ParamLimits

0xe9b6,	// (0x0002961b) cell_ai5_widget_pane_g10

0xecec,	// (0x00029951) status_icon_pane_g1

0x7e4b,	// (0x00022ab0) bg_popup_sub_pane_cp13

0xecf4,	// (0x00029959) popup_keymap_window_t1

0x970d,	// (0x00024372) control_pane_g6_ParamLimits

0x970d,	// (0x00024372) control_pane_g6

0x971a,	// (0x0002437f) control_pane_g7_ParamLimits

0x971a,	// (0x0002437f) control_pane_g7

0x9727,	// (0x0002438c) control_pane_g8_ParamLimits

0x9727,	// (0x0002438c) control_pane_g8

0xec0f,	// (0x00029874) dt_sta_controll_pane_ParamLimits

0xec1c,	// (0x00029881) dt_sta_indi_pane_ParamLimits

0xec2d,	// (0x00029892) dt_sta_title_pane_ParamLimits

0x86e6,	// (0x0002334b) aid_size_touch_scroll_bar_cale

0x5d4b,	// (0x000209b0) popup_discreet_window_ParamLimits

0x5d4b,	// (0x000209b0) popup_discreet_window

0x5dd3,	// (0x00020a38) popup_sk_window

0xa311,	// (0x00024f76) bg_popup_sub_pane_cp28_ParamLimits

0xa311,	// (0x00024f76) bg_popup_sub_pane_cp28

0xed02,	// (0x00029967) popup_discreet_window_g1_ParamLimits

0xed02,	// (0x00029967) popup_discreet_window_g1

0xed22,	// (0x00029987) popup_discreet_window_t1_ParamLimits

0xed22,	// (0x00029987) popup_discreet_window_t1

0xed40,	// (0x000299a5) popup_discreet_window_t2_ParamLimits

0xed40,	// (0x000299a5) popup_discreet_window_t2

0x0002,

0x003e,	// (0x0001aca3) popup_discreet_window_t_ParamLimits

0x003e,	// (0x0001aca3) popup_discreet_window_t

0x7aec,	// (0x00022751) popup_sk_window_g1

0x7af6,	// (0x0002275b) popup_sk_window_g2

0x0001,

0xfe7c,	// (0x0002aae1) popup_sk_window_g

0x7b00,	// (0x00022765) popup_sk_window_t1

0x7b0e,	// (0x00022773) popup_sk_window_t1_copy1

0xe937,	// (0x0002959c) cell_ai5_widget_pane_g2_ParamLimits

0xea90,	// (0x000296f5) cell_ai5_widget_pane_t9_ParamLimits

0xea90,	// (0x000296f5) cell_ai5_widget_pane_t9

0x7e4b,	// (0x00022ab0) main_fep_fshwr2_pane

0x7b1c,	// (0x00022781) aid_fshwr2_btn_pane

0x7b28,	// (0x0002278d) aid_fshwr2_syb_pane

0x7b34,	// (0x00022799) aid_fshwr2_txt_pane

0x7b40,	// (0x000227a5) fshwr2_func_candi_pane

0x7b55,	// (0x000227ba) fshwr2_hwr_syb_pane

0x7b65,	// (0x000227ca) fshwr2_icf_pane

0x7e4b,	// (0x00022ab0) fshwr2_icf_bg_pane

0x7b8e,	// (0x000227f3) fshwr2_icf_pane_t1_ParamLimits

0x7b8e,	// (0x000227f3) fshwr2_icf_pane_t1

0x8e31,	// (0x00023a96) fshwr2_func_candi_pane_g1

0xed92,	// (0x000299f7) fshwr2_func_candi_row_pane_ParamLimits

0xed92,	// (0x000299f7) fshwr2_func_candi_row_pane

0x7ba6,	// (0x0002280b) cell_fshwr2_syb_pane_ParamLimits

0x7ba6,	// (0x0002280b) cell_fshwr2_syb_pane

0xc530,	// (0x00027195) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc530,	// (0x00027195) fshwr2_hwr_syb_pane_g1

0x7e4b,	// (0x00022ab0) bg_popup_call_pane_cp01

0x7bbc,	// (0x00022821) fshwr2_func_candi_cell_pane_ParamLimits

0x7bbc,	// (0x00022821) fshwr2_func_candi_cell_pane

0xeda2,	// (0x00029a07) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeda2,	// (0x00029a07) fshwr2_func_candi_cell_bg_pane

0x7bf1,	// (0x00022856) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7bf1,	// (0x00022856) fshwr2_func_candi_cell_pane_g1

0x7c19,	// (0x0002287e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7c19,	// (0x0002287e) fshwr2_func_candi_cell_pane_t1

0x7e4b,	// (0x00022ab0) bg_button_pane_cp08

0xedae,	// (0x00029a13) cell_fshwr2_syb_bg_pane

0x7c2c,	// (0x00022891) cell_fshwr2_syb_bg_pane_g1

0x7c34,	// (0x00022899) cell_fshwr2_syb_bg_pane_t1

0x87ae,	// (0x00023413) main_tmo_pane

0xae20,	// (0x00025a85) uni_indicator_pane_g1_ParamLimits

0xae36,	// (0x00025a9b) uni_indicator_pane_g2_ParamLimits

0xae4c,	// (0x00025ab1) uni_indicator_pane_g3_ParamLimits

0xae60,	// (0x00025ac5) uni_indicator_pane_g4_ParamLimits

0xae60,	// (0x00025ac5) uni_indicator_pane_g4

0xae74,	// (0x00025ad9) uni_indicator_pane_g5_ParamLimits

0xae74,	// (0x00025ad9) uni_indicator_pane_g5

0xae74,	// (0x00025ad9) uni_indicator_pane_g6_ParamLimits

0xae74,	// (0x00025ad9) uni_indicator_pane_g6

0xf91a,	// (0x0002a57f) uni_indicator_pane_g_ParamLimits

0xd78d,	// (0x000283f2) popup_tmo_note_window_ParamLimits

0xd78d,	// (0x000283f2) popup_tmo_note_window

0x87ae,	// (0x00023413) fshwr2_bg_pane

0x7c0a,	// (0x0002286f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7c0a,	// (0x0002286f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe81,	// (0x0002aae6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe81,	// (0x0002aae6) fshwr2_func_candi_cell_pane_g

0xc2b2,	// (0x00026f17) bg_popup_window_pane_cp01

0x7c43,	// (0x000228a8) bg_popup_window_pane_g1_cp01

0xedb6,	// (0x00029a1b) bg_popup_window_pane_cp22_ParamLimits

0xedb6,	// (0x00029a1b) bg_popup_window_pane_cp22

0xedc4,	// (0x00029a29) listscroll_tmo_link_pane_ParamLimits

0xedc4,	// (0x00029a29) listscroll_tmo_link_pane

0xee04,	// (0x00029a69) popup_tmo_note_window_g1_ParamLimits

0xee04,	// (0x00029a69) popup_tmo_note_window_g1

0xee11,	// (0x00029a76) tmo_note_info_pane_ParamLimits

0xee11,	// (0x00029a76) tmo_note_info_pane

0xee2b,	// (0x00029a90) list_tmo_note_info_pane_g1_ParamLimits

0xee2b,	// (0x00029a90) list_tmo_note_info_pane_g1

0xee42,	// (0x00029aa7) list_tmo_note_info_pane_g2_ParamLimits

0xee42,	// (0x00029aa7) list_tmo_note_info_pane_g2

0x0001,

0x004f,	// (0x0001acb4) list_tmo_note_info_pane_g_ParamLimits

0x004f,	// (0x0001acb4) list_tmo_note_info_pane_g

0xee5e,	// (0x00029ac3) list_tmo_note_info_text_pane_ParamLimits

0xee5e,	// (0x00029ac3) list_tmo_note_info_text_pane

0xeedf,	// (0x00029b44) list_tmo_link_pane

0xeeec,	// (0x00029b51) scroll_pane_cp20

0xeef9,	// (0x00029b5e) list_single_tmo_link_pane_ParamLimits

0xeef9,	// (0x00029b5e) list_single_tmo_link_pane

0xef09,	// (0x00029b6e) list_single_tmo_link_pane_t1

0xef17,	// (0x00029b7c) list_tmo_note_info_text_pane_t1_ParamLimits

0xef17,	// (0x00029b7c) list_tmo_note_info_text_pane_t1

0x8868,	// (0x000234cd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8868,	// (0x000234cd) aid_size_touch_scroll_bar_cp01

0x4f93,	// (0x0001fbf8) aid_size_touch_slider_marker

0x5dbb,	// (0x00020a20) popup_settings_window_ParamLimits

0x5dbb,	// (0x00020a20) popup_settings_window

0x5162,	// (0x0001fdc7) popup_candi_list_indi_window

0x97e4,	// (0x00024449) aid_touch_navi_pane_ParamLimits

0x72ff,	// (0x00021f64) rs_clock_indi_pane

0x7308,	// (0x00021f6d) sctrl_sk_bottom_pane_ParamLimits

0x7319,	// (0x00021f7e) sctrl_sk_top_pane_ParamLimits

0x7400,	// (0x00022065) popup_fep_tooltip_window

0xe8ad,	// (0x00029512) aid_size_cell_widget_grid_ParamLimits

0xe922,	// (0x00029587) cell_ai5_widget_pane_g1_ParamLimits

0xe922,	// (0x00029587) cell_ai5_widget_pane_g1

0xe976,	// (0x000295db) cell_ai5_widget_pane_g6_ParamLimits

0xe982,	// (0x000295e7) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1e,	// (0x0002aa83) cell_ai5_widget_pane_g_ParamLimits

0xfe1e,	// (0x0002aa83) cell_ai5_widget_pane_g

0xeab4,	// (0x00029719) cell_ai5_widget_pane_t10_ParamLimits

0xeab4,	// (0x00029719) cell_ai5_widget_pane_t10

0xead2,	// (0x00029737) grid_ai5_widget_pane_ParamLimits

0xeb73,	// (0x000297d8) cell_contacts_ai5_widget_pane_ParamLimits

0xeb73,	// (0x000297d8) cell_contacts_ai5_widget_pane

0xed55,	// (0x000299ba) popup_discreet_window_t3_ParamLimits

0xed55,	// (0x000299ba) popup_discreet_window_t3

0x7b7a,	// (0x000227df) popup_fshwr2_char_preview_window_ParamLimits

0x7b7a,	// (0x000227df) popup_fshwr2_char_preview_window

0xee7c,	// (0x00029ae1) tmo_note_info_pane_t1

0xee91,	// (0x00029af6) tmo_note_info_pane_t2

0xeea6,	// (0x00029b0b) tmo_note_info_pane_t3

0xeebb,	// (0x00029b20) tmo_note_info_pane_t4

0xeecd,	// (0x00029b32) tmo_note_info_pane_t5

0x0004,

0x0054,	// (0x0001acb9) tmo_note_info_pane_t

0xeedf,	// (0x00029b44) list_tmo_link_pane_ParamLimits

0xeeec,	// (0x00029b51) scroll_pane_cp20_ParamLimits

0x7e4b,	// (0x00022ab0) bg_popup_fep_char_preview_window_cp01

0xef30,	// (0x00029b95) popup_fshwr2_char_preview_window_t1

0xef3e,	// (0x00029ba3) popup_candi_list_indi_window_g1

0xef47,	// (0x00029bac) bg_cell_contacts_ai5_widget_pane

0xef53,	// (0x00029bb8) cell_contacts_ai5_widget_pane_g1

0xc992,	// (0x000275f7) cell_contacts_ai5_widget_pane_g2

0xef68,	// (0x00029bcd) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe86,	// (0x0002aaeb) cell_contacts_ai5_widget_pane_g

0xef74,	// (0x00029bd9) cell_contacts_ai5_widget_pane_t1

0x87ae,	// (0x00023413) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefeb,	// (0x00029c50) settings_container_pane

0x9444,	// (0x000240a9) listscroll_set_pane_copy1

0xb99b,	// (0x00026600) scroll_pane_cp121_copy1

0xeff7,	// (0x00029c5c) set_content_pane_copy1

0xefff,	// (0x00029c64) aid_height_set_list_copy1_ParamLimits

0xefff,	// (0x00029c64) aid_height_set_list_copy1

0xb06c,	// (0x00025cd1) aid_size_parent_copy1_ParamLimits

0xb06c,	// (0x00025cd1) aid_size_parent_copy1

0xf00b,	// (0x00029c70) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf00b,	// (0x00029c70) button_value_adjust_pane_cp6_copy1

0x9782,	// (0x000243e7) list_highlight_pane_cp2_copy1_ParamLimits

0x9782,	// (0x000243e7) list_highlight_pane_cp2_copy1

0xf01f,	// (0x00029c84) list_set_pane_copy1_ParamLimits

0xf01f,	// (0x00029c84) list_set_pane_copy1

0xef86,	// (0x00029beb) main_pane_set_t1_copy1_ParamLimits

0xef86,	// (0x00029beb) main_pane_set_t1_copy1

0xefc0,	// (0x00029c25) main_pane_set_t2_copy1_ParamLimits

0xefc0,	// (0x00029c25) main_pane_set_t2_copy1

0xf0cc,	// (0x00029d31) main_pane_set_t3_copy1

0xf0da,	// (0x00029d3f) main_pane_set_t4_copy1

0xefdf,	// (0x00029c44) set_content_pane_g1_copy1_ParamLimits

0xefdf,	// (0x00029c44) set_content_pane_g1_copy1

0xf0e8,	// (0x00029d4d) setting_code_pane_copy1

0xf0f0,	// (0x00029d55) setting_slider_graphic_pane_copy1

0xf0f0,	// (0x00029d55) setting_slider_pane_copy1

0xf0f0,	// (0x00029d55) setting_text_pane_copy1

0xf0f0,	// (0x00029d55) setting_volume_pane_copy1

0xf0e8,	// (0x00029d4d) settings_code_pane_cp2_copy1

0xf0f8,	// (0x00029d5d) settings_code_pane_cp_copy1_ParamLimits

0xf0f8,	// (0x00029d5d) settings_code_pane_cp_copy1

0x7c4c,	// (0x000228b1) volume_set_pane_copy1

0xf10c,	// (0x00029d71) volume_set_pane_g10_copy1

0xf114,	// (0x00029d79) volume_set_pane_g1_copy1

0xf11c,	// (0x00029d81) volume_set_pane_g2_copy1

0xf124,	// (0x00029d89) volume_set_pane_g3_copy1

0xf12c,	// (0x00029d91) volume_set_pane_g4_copy1

0xf134,	// (0x00029d99) volume_set_pane_g5_copy1

0xf13c,	// (0x00029da1) volume_set_pane_g6_copy1

0xf144,	// (0x00029da9) volume_set_pane_g7_copy1

0xf14c,	// (0x00029db1) volume_set_pane_g8_copy1

0xf154,	// (0x00029db9) volume_set_pane_g9_copy1

0x7f3f,	// (0x00022ba4) bg_set_opt_pane_cp_copy1_ParamLimits

0x7f3f,	// (0x00022ba4) bg_set_opt_pane_cp_copy1

0x7c54,	// (0x000228b9) setting_slider_pane_t1_copy1_ParamLimits

0x7c54,	// (0x000228b9) setting_slider_pane_t1_copy1

0x7c72,	// (0x000228d7) setting_slider_pane_t2_copy1_ParamLimits

0x7c72,	// (0x000228d7) setting_slider_pane_t2_copy1

0x7c8c,	// (0x000228f1) setting_slider_pane_t3_copy1_ParamLimits

0x7c8c,	// (0x000228f1) setting_slider_pane_t3_copy1

0x7ca4,	// (0x00022909) slider_set_pane_copy1_ParamLimits

0x7ca4,	// (0x00022909) slider_set_pane_copy1

0x8809,	// (0x0002346e) set_opt_bg_pane_g1_copy2

0x8811,	// (0x00023476) set_opt_bg_pane_g2_copy2

0xf15c,	// (0x00029dc1) set_opt_bg_pane_g3_copy2

0x8821,	// (0x00023486) set_opt_bg_pane_g4_copy2

0x8829,	// (0x0002348e) set_opt_bg_pane_g5_copy2

0x8831,	// (0x00023496) set_opt_bg_pane_g6_copy2

0xf166,	// (0x00029dcb) set_opt_bg_pane_g7_copy2

0xf16e,	// (0x00029dd3) set_opt_bg_pane_g8_copy2

0xf178,	// (0x00029ddd) set_opt_bg_pane_g9_copy2

0x7cba,	// (0x0002291f) aid_size_touch_slider_mark_copy1_ParamLimits

0x7cba,	// (0x0002291f) aid_size_touch_slider_mark_copy1

0xf182,	// (0x00029de7) slider_set_pane_g1_copy1

0x7cce,	// (0x00022933) slider_set_pane_g2_copy1

0x6de2,	// (0x00021a47) slider_set_pane_g3_copy1_ParamLimits

0x6de2,	// (0x00021a47) slider_set_pane_g3_copy1

0x6df6,	// (0x00021a5b) slider_set_pane_g4_copy1_ParamLimits

0x6df6,	// (0x00021a5b) slider_set_pane_g4_copy1

0x6e0e,	// (0x00021a73) slider_set_pane_g5_copy1_ParamLimits

0x6e0e,	// (0x00021a73) slider_set_pane_g5_copy1

0x6de2,	// (0x00021a47) slider_set_pane_g6_copy1_ParamLimits

0x6de2,	// (0x00021a47) slider_set_pane_g6_copy1

0x7cd6,	// (0x0002293b) slider_set_pane_g7_copy1_ParamLimits

0x7cd6,	// (0x0002293b) slider_set_pane_g7_copy1

0x7e5f,	// (0x00022ac4) bg_set_opt_pane_cp2_copy1

0xf18b,	// (0x00029df0) setting_slider_graphic_pane_g1_copy1

0xf194,	// (0x00029df9) setting_slider_graphic_pane_t1_copy1

0xf1a4,	// (0x00029e09) setting_slider_graphic_pane_t2_copy1

0xf1b4,	// (0x00029e19) slider_set_pane_cp_copy1

0xf1c4,	// (0x00029e29) input_focus_pane_cp1_copy1

0xf1cd,	// (0x00029e32) list_set_text_pane_copy1

0xf1d5,	// (0x00029e3a) setting_text_pane_g1_copy1

0x4999,	// (0x0001f5fe) set_text_pane_t1_copy1

0xf1c4,	// (0x00029e29) input_focus_pane_cp2_copy1

0xf1d5,	// (0x00029e3a) setting_code_pane_g1_copy1

0xf1de,	// (0x00029e43) setting_code_pane_t1_copy1

0xf1ec,	// (0x00029e51) list_set_graphic_pane_copy1

0x7e5f,	// (0x00022ac4) bg_set_opt_pane_cp4_copy1

0x913f,	// (0x00023da4) list_set_graphic_pane_g1_copy1_ParamLimits

0x913f,	// (0x00023da4) list_set_graphic_pane_g1_copy1

0xf1fe,	// (0x00029e63) list_set_graphic_pane_g2_copy1

0x9157,	// (0x00023dbc) list_set_graphic_pane_t1_copy1_ParamLimits

0x9157,	// (0x00023dbc) list_set_graphic_pane_t1_copy1

0xc2b2,	// (0x00026f17) rs_clock_indi_pane_g1

0xf206,	// (0x00029e6b) rs_clock_indi_pane_t1

0xf214,	// (0x00029e79) rs_indi_pane

0xf21c,	// (0x00029e81) rs_indi_pane_g1

0xf225,	// (0x00029e8a) rs_indi_pane_g2

0xf22e,	// (0x00029e93) rs_indi_pane_g3

0x0002,

0x0066,	// (0x0001accb) rs_indi_pane_g

0x9444,	// (0x000240a9) bg_popup_preview_window_pane_cp03

0xf237,	// (0x00029e9c) popup_fep_tooltip_window_t1

0xcf2e,	// (0x00027b93) popup_note2_window_g2_ParamLimits

0xcf2e,	// (0x00027b93) popup_note2_window_g2

0x0001,

0xfc50,	// (0x0002a8b5) popup_note2_window_g_ParamLimits

0xfc50,	// (0x0002a8b5) popup_note2_window_g

0xd429,	// (0x0002808e) bg_popup_sub_pane_cp11_ParamLimits

0xd436,	// (0x0002809b) cell_ai3_links_pane_g1_ParamLimits

0xd44d,	// (0x000280b2) cell_ai3_links_pane_t1

0x4999,	// (0x0001f5fe) set_text_pane_t1_copy1_ParamLimits

0x9355,	// (0x00023fba) cell_graphic_popup_pane_cp2_ParamLimits

0x9355,	// (0x00023fba) cell_graphic_popup_pane_cp2

0xf245,	// (0x00029eaa) cell_graphic_popup_pane_g1_cp2

0x84f9,	// (0x0002315e) cell_graphic_popup_pane_g2_cp2

0xf24d,	// (0x00029eb2) cell_graphic_popup_pane_g3_cp2

0xf255,	// (0x00029eba) cell_graphic_popup_pane_t2_cp2

0x850a,	// (0x0002316f) grid_highlight_pane_cp3_cp2

0x8b4e,	// (0x000237b3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x87ae,	// (0x00023413) main_tmo_pane_ParamLimits

0xd781,	// (0x000283e6) popup_tmo_big_image_note_window

0xe911,	// (0x00029576) cell_ai5_widget_list_pane

0xe919,	// (0x0002957e) cell_ai5_widget_lrg_icon_pane

0xee7c,	// (0x00029ae1) tmo_note_info_pane_t1_ParamLimits

0xee91,	// (0x00029af6) tmo_note_info_pane_t2_ParamLimits

0xeea6,	// (0x00029b0b) tmo_note_info_pane_t3_ParamLimits

0xeebb,	// (0x00029b20) tmo_note_info_pane_t4_ParamLimits

0xeecd,	// (0x00029b32) tmo_note_info_pane_t5_ParamLimits

0x0054,	// (0x0001acb9) tmo_note_info_pane_t_ParamLimits

0xefeb,	// (0x00029c50) settings_container_pane_ParamLimits

0xf1bc,	// (0x00029e21) indicator_popup_pane_cp5

0xf1bc,	// (0x00029e21) indicator_popup_pane_cp6

0xf1ec,	// (0x00029e51) list_set_graphic_pane_copy1_ParamLimits

0x7e4b,	// (0x00022ab0) bg_popup_window_pane_cp23

0xf263,	// (0x00029ec8) popup_tmo_big_image_note_window_g1

0xf26d,	// (0x00029ed2) popup_tmo_big_image_note_window_t1

0xf27d,	// (0x00029ee2) popup_tmo_big_image_note_window_t2

0xf28d,	// (0x00029ef2) popup_tmo_big_image_note_window_t3

0x0002,

0x006d,	// (0x0001acd2) popup_tmo_big_image_note_window_t

0xc2b2,	// (0x00026f17) cell_ai5_widget_lrg_icon_pane_g1

0xf29d,	// (0x00029f02) cell_ai5_widget_lrg_icon_pane_t1

0xf2ab,	// (0x00029f10) cell_ai5_widget_list_row_pane_ParamLimits

0xf2ab,	// (0x00029f10) cell_ai5_widget_list_row_pane

0xf2c2,	// (0x00029f27) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c2,	// (0x00029f27) cell_ai5_widget_list_row_pane_g1

0xf2cf,	// (0x00029f34) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cf,	// (0x00029f34) cell_ai5_widget_list_row_pane_t1

0xf300,	// (0x00029f65) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf300,	// (0x00029f65) cell_ai5_widget_list_row_pane_t2

0x0002,

0x0074,	// (0x0001acd9) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0074,	// (0x0001acd9) cell_ai5_widget_list_row_pane_t

0x7e4b,	// (0x00022ab0) main_fep_vtchi_ss_pane

0xf344,	// (0x00029fa9) popup_fep_char_pre_window

0xf34c,	// (0x00029fb1) popup_fep_ituss_window

0xf36d,	// (0x00029fd2) popup_fep_vkbss_window

0xf38c,	// (0x00029ff1) grid_vkbss_keypad_pane_ParamLimits

0xf38c,	// (0x00029ff1) grid_vkbss_keypad_pane

0xf39c,	// (0x0002a001) ituss_keypad_pane

0x7cf8,	// (0x0002295d) aid_vkbss_key_offset_ParamLimits

0x7cf8,	// (0x0002295d) aid_vkbss_key_offset

0x7d04,	// (0x00022969) cell_vkbss_key_pane_ParamLimits

0x7d04,	// (0x00022969) cell_vkbss_key_pane

0xf3ab,	// (0x0002a010) bg_cell_vkbss_key_g1_ParamLimits

0xf3ab,	// (0x0002a010) bg_cell_vkbss_key_g1

0xf3b7,	// (0x0002a01c) cell_vkbss_key_3p_pane_ParamLimits

0xf3b7,	// (0x0002a01c) cell_vkbss_key_3p_pane

0xf3d1,	// (0x0002a036) cell_vkbss_key_g1_ParamLimits

0xf3d1,	// (0x0002a036) cell_vkbss_key_g1

0xf3eb,	// (0x0002a050) cell_vkbss_key_t1_ParamLimits

0xf3eb,	// (0x0002a050) cell_vkbss_key_t1

0x7d1a,	// (0x0002297f) cell_ituss_key_pane_ParamLimits

0x7d1a,	// (0x0002297f) cell_ituss_key_pane

0xf416,	// (0x0002a07b) bg_cell_ituss_key_g1_ParamLimits

0xf416,	// (0x0002a07b) bg_cell_ituss_key_g1

0xf422,	// (0x0002a087) cell_ituss_key_pane_g1_ParamLimits

0xf422,	// (0x0002a087) cell_ituss_key_pane_g1

0x7d2b,	// (0x00022990) cell_ituss_key_pane_g2_ParamLimits

0x7d2b,	// (0x00022990) cell_ituss_key_pane_g2

0x0002,

0xfe8d,	// (0x0002aaf2) cell_ituss_key_pane_g_ParamLimits

0xfe8d,	// (0x0002aaf2) cell_ituss_key_pane_g

0x7d57,	// (0x000229bc) cell_ituss_key_t1_ParamLimits

0x7d57,	// (0x000229bc) cell_ituss_key_t1

0x7d91,	// (0x000229f6) cell_ituss_key_t2_ParamLimits

0x7d91,	// (0x000229f6) cell_ituss_key_t2

0x7dc2,	// (0x00022a27) cell_ituss_key_t3_ParamLimits

0x7dc2,	// (0x00022a27) cell_ituss_key_t3

0x7d91,	// (0x000229f6) cell_ituss_key_t4_ParamLimits

0x7d91,	// (0x000229f6) cell_ituss_key_t4

0x0004,

0xfe94,	// (0x0002aaf9) cell_ituss_key_t_ParamLimits

0xfe94,	// (0x0002aaf9) cell_ituss_key_t

0xf44e,	// (0x0002a0b3) cell_vkbss_key_3p_pane_g1

0xf456,	// (0x0002a0bb) cell_vkbss_key_3p_pane_g2

0xf45e,	// (0x0002a0c3) cell_vkbss_key_3p_pane_g3

0x0002,

0x008d,	// (0x0001acf2) cell_vkbss_key_3p_pane_g

0x7e4b,	// (0x00022ab0) bg_popup_fep_char_preview_window_cp02

0x7e05,	// (0x00022a6a) popup_fep_char_pre_window_t1

0xe8a3,	// (0x00029508) main_ai5_sk_pane

0xef47,	// (0x00029bac) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef53,	// (0x00029bb8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc992,	// (0x000275f7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef68,	// (0x00029bcd) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe86,	// (0x0002aaeb) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef74,	// (0x00029bd9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x87ae,	// (0x00023413) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf466,	// (0x0002a0cb) main_ai5_sk_pane_g1

0xa14a,	// (0x00024daf) popup_query_code_window_g1

0xf362,	// (0x00029fc7) popup_fep_vkb_icf_pane

0xf376,	// (0x00029fdb) popup_fep_vtchi_icf_pane

0xf46f,	// (0x0002a0d4) bg_icf_pane

0xf47b,	// (0x0002a0e0) list_vkb_icf_pane

0xf487,	// (0x0002a0ec) bg_icf_pane_cp01

0xf49a,	// (0x0002a0ff) vtchi_icf_list_pane

0xf4aa,	// (0x0002a10f) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x0002a10f) list_vkb_icf_pane_t1

0xf4c0,	// (0x0002a125) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x0002a125) vtchi_icf_list_pane_t1

0xf34c,	// (0x00029fb1) popup_fep_ituss_window_ParamLimits

0xf376,	// (0x00029fdb) popup_fep_vtchi_icf_pane_ParamLimits

0xf39c,	// (0x0002a001) ituss_keypad_pane_ParamLimits

0x7cec,	// (0x00022951) ituss_sks_pane

0xf46f,	// (0x0002a0d4) bg_icf_pane_ParamLimits

0xf328,	// (0x00029f8d) icf_edit_indi_pane_ParamLimits

0xf328,	// (0x00029f8d) icf_edit_indi_pane

0xf47b,	// (0x0002a0e0) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x0002a0ec) bg_icf_pane_cp01_ParamLimits

0xf337,	// (0x00029f9c) icf_edit_indi_pane_cp01_ParamLimits

0xf337,	// (0x00029f9c) icf_edit_indi_pane_cp01

0xf4a2,	// (0x0002a107) vtchi_query_pane

0xc530,	// (0x00027195) icf_edit_indi_pane_g1_ParamLimits

0xc530,	// (0x00027195) icf_edit_indi_pane_g1

0xf531,	// (0x0002a196) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0002a196) icf_edit_indi_pane_g2

0x0001,

0xfea4,	// (0x0002ab09) icf_edit_indi_pane_g_ParamLimits

0xfea4,	// (0x0002ab09) icf_edit_indi_pane_g

0xf540,	// (0x0002a1a5) icf_edit_indi_pane_t1

0xf4da,	// (0x0002a13f) bg_input_focus_pane_cp042

0x86dd,	// (0x00023342) vtchi_button_pane

0xf4e3,	// (0x0002a148) vtchi_query_pane_t1

0xf4f1,	// (0x0002a156) vtchi_query_pane_t2

0xf4ff,	// (0x0002a164) vtchi_query_pane_t3

0x0002,

0x0094,	// (0x0001acf9) vtchi_query_pane_t

0x7e4b,	// (0x00022ab0) bg_button_pane_cp13

0xf50d,	// (0x0002a172) vtchi_button_pane_g1

0x7e14,	// (0x00022a79) ituss_sks_pane_g1

0x7e1f,	// (0x00022a84) ituss_sks_pane_g2

0x0001,

0xfe9f,	// (0x0002ab04) ituss_sks_pane_g

0xf515,	// (0x0002a17a) ituss_sks_pane_t1

0xf523,	// (0x0002a188) ituss_sks_pane_t2

0x0001,

0x00a0,	// (0x0001ad05) ituss_sks_pane_t

0xbd15,	// (0x0002697a) indicator_nsta_pane_cp_g1

0xbd1e,	// (0x00026983) indicator_nsta_pane_cp_g2

0xbd26,	// (0x0002698b) indicator_nsta_pane_cp_g3

0xbd2e,	// (0x00026993) indicator_nsta_pane_cp_g4

0xbd36,	// (0x0002699b) indicator_nsta_pane_cp_g5

0xbd36,	// (0x0002699b) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0002a6ff) indicator_nsta_pane_cp_g

0xe468,	// (0x000290cd) cell_graphic2_pane_t2_ParamLimits

0xe468,	// (0x000290cd) cell_graphic2_pane_t2

0x0001,

0xfda7,	// (0x0002aa0c) cell_graphic2_pane_t_ParamLimits

0xfda7,	// (0x0002aa0c) cell_graphic2_pane_t

0xe495,	// (0x000290fa) cell_graphic2_control_pane_t1

0x8ef2,	// (0x00023b57) signal_pane_g3_ParamLimits

0x8ef2,	// (0x00023b57) signal_pane_g3

0x8f04,	// (0x00023b69) signal_pane_g4_ParamLimits

0x8f04,	// (0x00023b69) signal_pane_g4

0xf312,	// (0x00029f77) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf312,	// (0x00029f77) cell_ai5_widget_list_row_pane_t3

0xf43c,	// (0x0002a0a1) cell_ituss_key_pane_t1_ParamLimits

0xf43c,	// (0x0002a0a1) cell_ituss_key_pane_t1

0x9d91,	// (0x000249f6) form_field_data_wide_pane_vc_t2_ParamLimits

0x9d91,	// (0x000249f6) form_field_data_wide_pane_vc_t2

0x9da5,	// (0x00024a0a) form_field_data_wide_pane_vc_t3_ParamLimits

0x9da5,	// (0x00024a0a) form_field_data_wide_pane_vc_t3

0x0002,

0xf802,	// (0x0002a467) form_field_data_wide_pane_vc_t_ParamLimits

0xf802,	// (0x0002a467) form_field_data_wide_pane_vc_t

0xb9dd,	// (0x00026642) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9dd,	// (0x00026642) form_field_slider_wide_pane_vc_t3

0xbabb,	// (0x00026720) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbabb,	// (0x00026720) form_field_popup_wide_pane_vc_t2

0xbad2,	// (0x00026737) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbad2,	// (0x00026737) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0002a6ee) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0002a6ee) form_field_popup_wide_pane_vc_t

0x7b1c,	// (0x00022781) aid_fshwr2_btn_pane_ParamLimits

0x7b28,	// (0x0002278d) aid_fshwr2_syb_pane_ParamLimits

0x7b34,	// (0x00022799) aid_fshwr2_txt_pane_ParamLimits

0x87ae,	// (0x00023413) fshwr2_bg_pane_ParamLimits

0x7b40,	// (0x000227a5) fshwr2_func_candi_pane_ParamLimits

0x7b55,	// (0x000227ba) fshwr2_hwr_syb_pane_ParamLimits

0x7b65,	// (0x000227ca) fshwr2_icf_pane_ParamLimits

0x569d,	// (0x00020302) list_double_graphic_pane_vc_g4_ParamLimits

0x569d,	// (0x00020302) list_double_graphic_pane_vc_g4

0x7d4b,	// (0x000229b0) cell_ituss_key_pane_g3_ParamLimits

0x7d4b,	// (0x000229b0) cell_ituss_key_pane_g3

0x7df3,	// (0x00022a58) cell_ituss_key_t5_ParamLimits

0x7df3,	// (0x00022a58) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small

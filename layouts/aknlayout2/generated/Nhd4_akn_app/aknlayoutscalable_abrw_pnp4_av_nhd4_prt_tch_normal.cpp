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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000d5a7 };

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
0x7b60,	// (0x00015107) Screen

0x7b6c,	// (0x00015113) application_window_ParamLimits

0x7b6c,	// (0x00015113) application_window

0x36e9,	// (0x00010c90) screen_g1

0x5539,	// (0x00012ae0) area_bottom_pane_ParamLimits

0x5539,	// (0x00012ae0) area_bottom_pane

0x55f9,	// (0x00012ba0) area_top_pane_ParamLimits

0x55f9,	// (0x00012ba0) area_top_pane

0x5697,	// (0x00012c3e) main_pane_ParamLimits

0x5697,	// (0x00012c3e) main_pane

0x3713,	// (0x00010cba) misc_graphics

0x8c9e,	// (0x00016245) battery_pane_ParamLimits

0x8c9e,	// (0x00016245) battery_pane

0x9a8f,	// (0x00017036) bg_status_flat_pane_g8

0x9a97,	// (0x0001703e) bg_status_flat_pane_g9

0x8d66,	// (0x0001630d) context_pane_ParamLimits

0x8d66,	// (0x0001630d) context_pane

0x8e7c,	// (0x00016423) navi_pane_ParamLimits

0x8e7c,	// (0x00016423) navi_pane

0x8f00,	// (0x000164a7) signal_pane_ParamLimits

0x8f00,	// (0x000164a7) signal_pane

0x0008,

0xf845,	// (0x0001cdec) bg_status_flat_pane_g

0x8f6d,	// (0x00016514) status_pane_g1_ParamLimits

0x8f6d,	// (0x00016514) status_pane_g1

0x8f81,	// (0x00016528) status_pane_g2_ParamLimits

0x8f81,	// (0x00016528) status_pane_g2

0x8f8d,	// (0x00016534) status_pane_g3_ParamLimits

0x8f8d,	// (0x00016534) status_pane_g3

0x0004,

0xf76c,	// (0x0001cd13) status_pane_g_ParamLimits

0xf76c,	// (0x0001cd13) status_pane_g

0x8fc1,	// (0x00016568) title_pane_ParamLimits

0x8fc1,	// (0x00016568) title_pane

0x8ffe,	// (0x000165a5) uni_indicator_pane_ParamLimits

0x8ffe,	// (0x000165a5) uni_indicator_pane

0x4abd,	// (0x00012064) bg_list_pane_ParamLimits

0x4abd,	// (0x00012064) bg_list_pane

0x8c1a,	// (0x000161c1) find_pane

0x4a20,	// (0x00011fc7) listscroll_app_pane_ParamLimits

0x4a20,	// (0x00011fc7) listscroll_app_pane

0x4add,	// (0x00012084) listscroll_form_pane

0x5f61,	// (0x00013508) listscroll_gen_pane_ParamLimits

0x5f61,	// (0x00013508) listscroll_gen_pane

0x5f75,	// (0x0001351c) listscroll_set_pane

0x86de,	// (0x00015c85) main_idle_act_pane

0x4875,	// (0x00011e1c) main_idle_trad_pane

0x4875,	// (0x00011e1c) main_list_empty_pane

0x4a20,	// (0x00011fc7) main_midp_pane

0x4aff,	// (0x000120a6) main_pane_g1_ParamLimits

0x4aff,	// (0x000120a6) main_pane_g1

0x5f8b,	// (0x00013532) popup_ai_message_window_ParamLimits

0x5f8b,	// (0x00013532) popup_ai_message_window

0x602f,	// (0x000135d6) popup_fep_china_uni_window_ParamLimits

0x602f,	// (0x000135d6) popup_fep_china_uni_window

0x6089,	// (0x00013630) popup_fep_japan_candidate_window_ParamLimits

0x6089,	// (0x00013630) popup_fep_japan_candidate_window

0x60a7,	// (0x0001364e) popup_fep_japan_predictive_window_ParamLimits

0x60a7,	// (0x0001364e) popup_fep_japan_predictive_window

0x60d7,	// (0x0001367e) popup_find_window

0x60e4,	// (0x0001368b) popup_grid_graphic_window_ParamLimits

0x60e4,	// (0x0001368b) popup_grid_graphic_window

0x610e,	// (0x000136b5) popup_large_graphic_colour_window

0x6134,	// (0x000136db) popup_menu_window_ParamLimits

0x6134,	// (0x000136db) popup_menu_window

0x62f0,	// (0x00013897) popup_note_image_window

0x62dc,	// (0x00013883) popup_note_wait_window_ParamLimits

0x62dc,	// (0x00013883) popup_note_wait_window

0x62dc,	// (0x00013883) popup_note_window_ParamLimits

0x62dc,	// (0x00013883) popup_note_window

0x6346,	// (0x000138ed) popup_query_code_window_ParamLimits

0x6346,	// (0x000138ed) popup_query_code_window

0x635a,	// (0x00013901) popup_query_data_code_window_ParamLimits

0x635a,	// (0x00013901) popup_query_data_code_window

0x6377,	// (0x0001391e) popup_query_data_window_ParamLimits

0x6377,	// (0x0001391e) popup_query_data_window

0x6393,	// (0x0001393a) popup_query_sat_info_window_ParamLimits

0x6393,	// (0x0001393a) popup_query_sat_info_window

0x63cc,	// (0x00013973) popup_snote_single_graphic_window_ParamLimits

0x63cc,	// (0x00013973) popup_snote_single_graphic_window

0x63cc,	// (0x00013973) popup_snote_single_text_window_ParamLimits

0x63cc,	// (0x00013973) popup_snote_single_text_window

0x63e1,	// (0x00013988) popup_sub_window_general

0x6511,	// (0x00013ab8) popup_window_general_ParamLimits

0x6511,	// (0x00013ab8) popup_window_general

0x8c22,	// (0x000161c9) power_save_pane

0x5de7,	// (0x0001338e) control_pane_g1_ParamLimits

0x5de7,	// (0x0001338e) control_pane_g1

0x5e0e,	// (0x000133b5) control_pane_g2_ParamLimits

0x5e0e,	// (0x000133b5) control_pane_g2

0x4a80,	// (0x00012027) control_pane_g3_ParamLimits

0x4a80,	// (0x00012027) control_pane_g3

0x0007,

0xf754,	// (0x0001ccfb) control_pane_g_ParamLimits

0xf754,	// (0x0001ccfb) control_pane_g

0x5e58,	// (0x000133ff) control_pane_t1_ParamLimits

0x5e58,	// (0x000133ff) control_pane_t1

0x5eae,	// (0x00013455) control_pane_t2_ParamLimits

0x5eae,	// (0x00013455) control_pane_t2

0x0002,

0xf765,	// (0x0001cd0c) control_pane_t_ParamLimits

0xf765,	// (0x0001cd0c) control_pane_t

0x8b6c,	// (0x00016113) navi_navi_volume_pane_cp1

0x8b74,	// (0x0001611b) status_small_icon_pane

0x4a2c,	// (0x00011fd3) status_small_pane_g1_ParamLimits

0x4a2c,	// (0x00011fd3) status_small_pane_g1

0x8b7c,	// (0x00016123) status_small_pane_g2_ParamLimits

0x8b7c,	// (0x00016123) status_small_pane_g2

0x4a60,	// (0x00012007) status_small_pane_g3_ParamLimits

0x4a60,	// (0x00012007) status_small_pane_g3

0x8b88,	// (0x0001612f) status_small_pane_g4_ParamLimits

0x8b88,	// (0x0001612f) status_small_pane_g4

0x8b94,	// (0x0001613b) status_small_pane_g5_ParamLimits

0x8b94,	// (0x0001613b) status_small_pane_g5

0x8ba2,	// (0x00016149) status_small_pane_g6_ParamLimits

0x8ba2,	// (0x00016149) status_small_pane_g6

0x0007,

0xf743,	// (0x0001ccea) status_small_pane_g_ParamLimits

0xf743,	// (0x0001ccea) status_small_pane_g

0x8bbd,	// (0x00016164) status_small_pane_t1

0x8bdf,	// (0x00016186) status_small_wait_pane_ParamLimits

0x8bdf,	// (0x00016186) status_small_wait_pane

0x8887,	// (0x00015e2e) aid_levels_signal_ParamLimits

0x8887,	// (0x00015e2e) aid_levels_signal

0x8899,	// (0x00015e40) signal_pane_g1_ParamLimits

0x8899,	// (0x00015e40) signal_pane_g1

0x88ae,	// (0x00015e55) signal_pane_g2_ParamLimits

0x88ae,	// (0x00015e55) signal_pane_g2

0x0003,

0xf6d4,	// (0x0001cc7b) signal_pane_g_ParamLimits

0xf6d4,	// (0x0001cc7b) signal_pane_g

0x4300,	// (0x000118a7) context_pane_g1

0x7b7c,	// (0x00015123) title_pane_g1

0x7ba6,	// (0x0001514d) title_pane_t1

0x3749,	// (0x00010cf0) title_pane_t2

0x376f,	// (0x00010d16) title_pane_t3

0x0002,

0xf532,	// (0x0001cad9) title_pane_t

0x9016,	// (0x000165bd) aid_levels_battery_ParamLimits

0x9016,	// (0x000165bd) aid_levels_battery

0x902a,	// (0x000165d1) battery_pane_g1_ParamLimits

0x902a,	// (0x000165d1) battery_pane_g1

0x9040,	// (0x000165e7) battery_pane_g2_ParamLimits

0x9040,	// (0x000165e7) battery_pane_g2

0x0001,

0xf777,	// (0x0001cd1e) battery_pane_g_ParamLimits

0xf777,	// (0x0001cd1e) battery_pane_g

0xa3b3,	// (0x0001795a) uni_indicator_pane_g1

0xa3c6,	// (0x0001796d) uni_indicator_pane_g2

0xa3d8,	// (0x0001797f) uni_indicator_pane_g3

0x0005,

0xf8ed,	// (0x0001ce94) uni_indicator_pane_g

0x470c,	// (0x00011cb3) navi_icon_pane_ParamLimits

0x470c,	// (0x00011cb3) navi_icon_pane

0x4661,	// (0x00011c08) navi_midp_pane

0x4728,	// (0x00011ccf) navi_navi_pane

0x4732,	// (0x00011cd9) navi_text_pane_ParamLimits

0x4732,	// (0x00011cd9) navi_text_pane

0x36e9,	// (0x00010c90) status_small_wait_pane_g1

0x39da,	// (0x00010f81) status_small_wait_pane_g2

0x0001,

0xf8e8,	// (0x0001ce8f) status_small_wait_pane_g

0xa0da,	// (0x00017681) navi_navi_icon_text_pane

0xa0e2,	// (0x00017689) navi_navi_pane_g1_ParamLimits

0xa0e2,	// (0x00017689) navi_navi_pane_g1

0xa0f4,	// (0x0001769b) navi_navi_pane_g2_ParamLimits

0xa0f4,	// (0x0001769b) navi_navi_pane_g2

0x0001,

0xf8b6,	// (0x0001ce5d) navi_navi_pane_g_ParamLimits

0xf8b6,	// (0x0001ce5d) navi_navi_pane_g

0xa106,	// (0x000176ad) navi_navi_tabs_pane

0xa10f,	// (0x000176b6) navi_navi_text_pane

0xa0da,	// (0x00017681) navi_navi_volume_pane

0xa0b6,	// (0x0001765d) navi_text_pane_t1

0xa0aa,	// (0x00017651) navi_icon_pane_g1

0x9ffd,	// (0x000175a4) navi_navi_text_pane_t1

0x682d,	// (0x00013dd4) navi_navi_volume_pane_g1

0x6835,	// (0x00013ddc) volume_small_pane

0x9f63,	// (0x0001750a) navi_navi_icon_text_pane_g1

0x9f6b,	// (0x00017512) navi_navi_icon_text_pane_t1

0x4728,	// (0x00011ccf) navi_tabs_2_long_pane

0x4728,	// (0x00011ccf) navi_tabs_2_pane

0x4728,	// (0x00011ccf) navi_tabs_3_long_pane

0x4728,	// (0x00011ccf) navi_tabs_3_pane

0x4728,	// (0x00011ccf) navi_tabs_4_pane

0x680d,	// (0x00013db4) tabs_2_active_pane_ParamLimits

0x680d,	// (0x00013db4) tabs_2_active_pane

0x681d,	// (0x00013dc4) tabs_2_passive_pane_ParamLimits

0x681d,	// (0x00013dc4) tabs_2_passive_pane

0x67db,	// (0x00013d82) tabs_3_active_pane_ParamLimits

0x67db,	// (0x00013d82) tabs_3_active_pane

0x67eb,	// (0x00013d92) tabs_3_passive_pane_ParamLimits

0x67eb,	// (0x00013d92) tabs_3_passive_pane

0x67fc,	// (0x00013da3) tabs_3_passive_pane_cp_ParamLimits

0x67fc,	// (0x00013da3) tabs_3_passive_pane_cp

0x6797,	// (0x00013d3e) tabs_4_active_pane_ParamLimits

0x6797,	// (0x00013d3e) tabs_4_active_pane

0x67a8,	// (0x00013d4f) tabs_4_passive_pane_ParamLimits

0x67a8,	// (0x00013d4f) tabs_4_passive_pane

0x67b9,	// (0x00013d60) tabs_4_passive_pane_cp_ParamLimits

0x67b9,	// (0x00013d60) tabs_4_passive_pane_cp

0x67ca,	// (0x00013d71) tabs_4_passive_pane_cp2_ParamLimits

0x67ca,	// (0x00013d71) tabs_4_passive_pane_cp2

0x6773,	// (0x00013d1a) tabs_2_long_active_pane_ParamLimits

0x6773,	// (0x00013d1a) tabs_2_long_active_pane

0x6785,	// (0x00013d2c) tabs_2_long_passive_pane_ParamLimits

0x6785,	// (0x00013d2c) tabs_2_long_passive_pane

0x672e,	// (0x00013cd5) tabs_3_long_active_pane_ParamLimits

0x672e,	// (0x00013cd5) tabs_3_long_active_pane

0x6747,	// (0x00013cee) tabs_3_long_passive_pane_ParamLimits

0x6747,	// (0x00013cee) tabs_3_long_passive_pane

0x675a,	// (0x00013d01) tabs_3_long_passive_pane_cp_ParamLimits

0x675a,	// (0x00013d01) tabs_3_long_passive_pane_cp

0x66d4,	// (0x00013c7b) volume_small_pane_g1

0x66dd,	// (0x00013c84) volume_small_pane_g2

0x66e6,	// (0x00013c8d) volume_small_pane_g3

0x66ef,	// (0x00013c96) volume_small_pane_g4

0x66f8,	// (0x00013c9f) volume_small_pane_g5

0x6701,	// (0x00013ca8) volume_small_pane_g6

0x670a,	// (0x00013cb1) volume_small_pane_g7

0x6713,	// (0x00013cba) volume_small_pane_g8

0x671c,	// (0x00013cc3) volume_small_pane_g9

0x6725,	// (0x00013ccc) volume_small_pane_g10

0x0009,

0xf882,	// (0x0001ce29) volume_small_pane_g

0x378f,	// (0x00010d36) bg_active_tab_pane_cp2_ParamLimits

0x378f,	// (0x00010d36) bg_active_tab_pane_cp2

0x7c0e,	// (0x000151b5) tabs_3_active_pane_g1

0x7c16,	// (0x000151bd) tabs_3_active_pane_t1

0x378f,	// (0x00010d36) bg_passive_tab_pane_cp2_ParamLimits

0x378f,	// (0x00010d36) bg_passive_tab_pane_cp2

0x7c0e,	// (0x000151b5) tabs_3_passive_pane_g1

0x7c16,	// (0x000151bd) tabs_3_passive_pane_t1

0x378f,	// (0x00010d36) bg_active_tab_pane_cp3_ParamLimits

0x378f,	// (0x00010d36) bg_active_tab_pane_cp3

0x7c28,	// (0x000151cf) tabs_4_active_pane_g1

0x7c30,	// (0x000151d7) tabs_4_active_pane_t1

0x378f,	// (0x00010d36) bg_passive_tab_pane_cp3_ParamLimits

0x378f,	// (0x00010d36) bg_passive_tab_pane_cp3

0x7c28,	// (0x000151cf) tabs_4_1_passive_pane_g1

0x7c30,	// (0x000151d7) tabs_4_1_passive_pane_t1

0x4a20,	// (0x00011fc7) list_highlight_pane_cp2

0xa62d,	// (0x00017bd4) list_set_pane_ParamLimits

0xa62d,	// (0x00017bd4) list_set_pane

0xa6cf,	// (0x00017c76) main_pane_set_t1_ParamLimits

0xa6cf,	// (0x00017c76) main_pane_set_t1

0xa6ef,	// (0x00017c96) main_pane_set_t2_ParamLimits

0xa6ef,	// (0x00017c96) main_pane_set_t2

0xa703,	// (0x00017caa) main_pane_set_t3_ParamLimits

0xa703,	// (0x00017caa) main_pane_set_t3

0xa715,	// (0x00017cbc) main_pane_set_t4_ParamLimits

0xa715,	// (0x00017cbc) main_pane_set_t4

0x0003,

0xf952,	// (0x0001cef9) main_pane_set_t_ParamLimits

0xf952,	// (0x0001cef9) main_pane_set_t

0xa727,	// (0x00017cce) setting_code_pane

0xa733,	// (0x00017cda) setting_slider_graphic_pane

0xa733,	// (0x00017cda) setting_slider_pane

0xa733,	// (0x00017cda) setting_text_pane

0xa733,	// (0x00017cda) setting_volume_pane

0x58d8,	// (0x00012e7f) volume_set_pane

0x378f,	// (0x00010d36) bg_set_opt_pane_cp

0x58e0,	// (0x00012e87) setting_slider_pane_t1

0x58f9,	// (0x00012ea0) setting_slider_pane_t2

0x5913,	// (0x00012eba) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001cae0) setting_slider_pane_t

0x592b,	// (0x00012ed2) slider_set_pane

0x3713,	// (0x00010cba) bg_set_opt_pane_cp2

0x379d,	// (0x00010d44) setting_slider_graphic_pane_g1

0x5941,	// (0x00012ee8) setting_slider_graphic_pane_t1

0x5951,	// (0x00012ef8) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001cae7) setting_slider_graphic_pane_t

0x5961,	// (0x00012f08) slider_set_pane_cp

0x3713,	// (0x00010cba) input_focus_pane_cp1

0xa5ec,	// (0x00017b93) list_set_text_pane

0x36e9,	// (0x00010c90) setting_text_pane_g1

0x3713,	// (0x00010cba) input_focus_pane_cp2

0x36e9,	// (0x00010c90) setting_code_pane_g1

0x37a6,	// (0x00010d4d) setting_code_pane_t1

0x37b4,	// (0x00010d5b) set_text_pane_t1_ParamLimits

0x37b4,	// (0x00010d5b) set_text_pane_t1

0x3c77,	// (0x0001121e) set_opt_bg_pane_g1

0x3c7f,	// (0x00011226) set_opt_bg_pane_g2

0xa5c6,	// (0x00017b6d) set_opt_bg_pane_g3

0x3c8f,	// (0x00011236) set_opt_bg_pane_g4

0x3c97,	// (0x0001123e) set_opt_bg_pane_g5

0x3c9f,	// (0x00011246) set_opt_bg_pane_g6

0xa5d0,	// (0x00017b77) set_opt_bg_pane_g7

0xa5d8,	// (0x00017b7f) set_opt_bg_pane_g8

0xa5e2,	// (0x00017b89) set_opt_bg_pane_g9

0x0008,

0xf93f,	// (0x0001cee6) set_opt_bg_pane_g

0xa5b9,	// (0x00017b60) slider_set_pane_g1

0x68a2,	// (0x00013e49) slider_set_pane_g2

0x0006,

0xf930,	// (0x0001ced7) slider_set_pane_g

0x683e,	// (0x00013de5) volume_set_pane_g1

0x6846,	// (0x00013ded) volume_set_pane_g2

0x684e,	// (0x00013df5) volume_set_pane_g3

0x6856,	// (0x00013dfd) volume_set_pane_g4

0x685e,	// (0x00013e05) volume_set_pane_g5

0x6866,	// (0x00013e0d) volume_set_pane_g6

0x686e,	// (0x00013e15) volume_set_pane_g7

0x6876,	// (0x00013e1d) volume_set_pane_g8

0x687e,	// (0x00013e25) volume_set_pane_g9

0x6886,	// (0x00013e2d) volume_set_pane_g10

0x0009,

0xf908,	// (0x0001ceaf) volume_set_pane_g

0x7c42,	// (0x000151e9) indicator_pane_ParamLimits

0x7c42,	// (0x000151e9) indicator_pane

0x7c4e,	// (0x000151f5) main_idle_pane_g2_ParamLimits

0x7c4e,	// (0x000151f5) main_idle_pane_g2

0x7c76,	// (0x0001521d) main_pane_idle_g1_ParamLimits

0x7c76,	// (0x0001521d) main_pane_idle_g1

0x37ce,	// (0x00010d75) popup_clock_digital_analogue_window_ParamLimits

0x37ce,	// (0x00010d75) popup_clock_digital_analogue_window

0x7c83,	// (0x0001522a) soft_indicator_pane_ParamLimits

0x7c83,	// (0x0001522a) soft_indicator_pane

0x7c8f,	// (0x00015236) wallpaper_pane_ParamLimits

0x7c8f,	// (0x00015236) wallpaper_pane

0x36e9,	// (0x00010c90) wallpaper_pane_g1

0x7c9b,	// (0x00015242) indicator_pane_g1_ParamLimits

0x7c9b,	// (0x00015242) indicator_pane_g1

0xaadd,	// (0x00018084) navi_navi_icon_text_pane_srt_g1

0x37fc,	// (0x00010da3) soft_indicator_pane_t1

0x3816,	// (0x00010dbd) aid_ps_area_pane

0x7ca7,	// (0x0001524e) aid_ps_clock_pane

0x3827,	// (0x00010dce) aid_ps_indicator_pane

0x3833,	// (0x00010dda) indicator_ps_pane_ParamLimits

0x3833,	// (0x00010dda) indicator_ps_pane

0x3842,	// (0x00010de9) power_save_pane_g1_ParamLimits

0x3842,	// (0x00010de9) power_save_pane_g1

0x384e,	// (0x00010df5) power_save_pane_g2_ParamLimits

0x384e,	// (0x00010df5) power_save_pane_g2

0x54ed,	// (0x00012a94) aid_navinavi_width_pane

0x3816,	// (0x00010dbd) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001caec) power_save_pane_g_ParamLimits

0xf545,	// (0x0001caec) power_save_pane_g

0x385c,	// (0x00010e03) power_save_pane_t1_ParamLimits

0x385c,	// (0x00010e03) power_save_pane_t1

0x7ca7,	// (0x0001524e) aid_ps_clock_pane_ParamLimits

0x3827,	// (0x00010dce) aid_ps_indicator_pane_ParamLimits

0x386e,	// (0x00010e15) power_save_pane_t4_ParamLimits

0x386e,	// (0x00010e15) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001caf1) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001caf1) power_save_pane_t

0x3898,	// (0x00010e3f) power_save_t3_ParamLimits

0x3898,	// (0x00010e3f) power_save_t3

0x3883,	// (0x00010e2a) power_save_t2_ParamLimits

0x3883,	// (0x00010e2a) power_save_t2

0x38ad,	// (0x00010e54) indicator_ps_pane_g1

0x7cb5,	// (0x0001525c) ai_gene_pane_ParamLimits

0x7cb5,	// (0x0001525c) ai_gene_pane

0x7cc1,	// (0x00015268) ai_links_pane_ParamLimits

0x7cc1,	// (0x00015268) ai_links_pane

0x7ccd,	// (0x00015274) indicator_pane_cp1_ParamLimits

0x7ccd,	// (0x00015274) indicator_pane_cp1

0x7cd9,	// (0x00015280) main_pane_idle_g1_cp_ParamLimits

0x7cd9,	// (0x00015280) main_pane_idle_g1_cp

0x7ce5,	// (0x0001528c) popup_ai_links_title_window

0x7cee,	// (0x00015295) soft_indicator_pane_cp1_ParamLimits

0x7cee,	// (0x00015295) soft_indicator_pane_cp1

0xa3a1,	// (0x00017948) ai_links_pane_g1

0xa3aa,	// (0x00017951) grid_ai_links_pane

0xa384,	// (0x0001792b) ai_gene_pane_1

0xa38f,	// (0x00017936) ai_gene_pane_2

0xa398,	// (0x0001793f) list_highlight_pane_cp4

0xa368,	// (0x0001790f) cell_ai_link_pane_ParamLimits

0xa368,	// (0x0001790f) cell_ai_link_pane

0xa360,	// (0x00017907) cell_ai_link_pane_g1

0x39da,	// (0x00010f81) cell_ai_link_pane_g2

0x0001,

0xf8e3,	// (0x0001ce8a) cell_ai_link_pane_g

0x3713,	// (0x00010cba) grid_highlight_cp2

0x3713,	// (0x00010cba) bg_popup_sub_pane_cp1

0x38c4,	// (0x00010e6b) popup_ai_links_title_window_t1

0xa2b0,	// (0x00017857) ai_gene_pane_1_g1_ParamLimits

0xa2b0,	// (0x00017857) ai_gene_pane_1_g1

0xa2bc,	// (0x00017863) ai_gene_pane_1_g2_ParamLimits

0xa2bc,	// (0x00017863) ai_gene_pane_1_g2

0x0001,

0xf8d9,	// (0x0001ce80) ai_gene_pane_1_g_ParamLimits

0xf8d9,	// (0x0001ce80) ai_gene_pane_1_g

0xa2c9,	// (0x00017870) ai_gene_pane_1_t1_ParamLimits

0xa2c9,	// (0x00017870) ai_gene_pane_1_t1

0xa2fd,	// (0x000178a4) grid_ai_soft_ind_pane

0xa29b,	// (0x00017842) ai_gene_pane_2_t1_ParamLimits

0xa29b,	// (0x00017842) ai_gene_pane_2_t1

0x7cfa,	// (0x000152a1) main_pane_empty_t1_ParamLimits

0x7cfa,	// (0x000152a1) main_pane_empty_t1

0x7d12,	// (0x000152b9) main_pane_empty_t2_ParamLimits

0x7d12,	// (0x000152b9) main_pane_empty_t2

0x7d27,	// (0x000152ce) main_pane_empty_t3_ParamLimits

0x7d27,	// (0x000152ce) main_pane_empty_t3

0x7d39,	// (0x000152e0) main_pane_empty_t4_ParamLimits

0x7d39,	// (0x000152e0) main_pane_empty_t4

0x7d4b,	// (0x000152f2) main_pane_empty_t5_ParamLimits

0x7d4b,	// (0x000152f2) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001caf6) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001caf6) main_pane_empty_t

0x3cfc,	// (0x000112a3) bg_popup_window_pane_ParamLimits

0x3cfc,	// (0x000112a3) bg_popup_window_pane

0xa00b,	// (0x000175b2) find_popup_pane_cp2_ParamLimits

0xa00b,	// (0x000175b2) find_popup_pane_cp2

0xa017,	// (0x000175be) heading_pane_ParamLimits

0xa017,	// (0x000175be) heading_pane

0x3713,	// (0x00010cba) bg_popup_sub_pane

0x9f85,	// (0x0001752c) bg_popup_window_pane_g1_ParamLimits

0x9f85,	// (0x0001752c) bg_popup_window_pane_g1

0x9f91,	// (0x00017538) bg_popup_window_pane_g2_ParamLimits

0x9f91,	// (0x00017538) bg_popup_window_pane_g2

0x9f9d,	// (0x00017544) bg_popup_window_pane_g3_ParamLimits

0x9f9d,	// (0x00017544) bg_popup_window_pane_g3

0x9fa9,	// (0x00017550) bg_popup_window_pane_g4_ParamLimits

0x9fa9,	// (0x00017550) bg_popup_window_pane_g4

0x9fb5,	// (0x0001755c) bg_popup_window_pane_g5_ParamLimits

0x9fb5,	// (0x0001755c) bg_popup_window_pane_g5

0x9fc1,	// (0x00017568) bg_popup_window_pane_g6_ParamLimits

0x9fc1,	// (0x00017568) bg_popup_window_pane_g6

0x9fcd,	// (0x00017574) bg_popup_window_pane_g7_ParamLimits

0x9fcd,	// (0x00017574) bg_popup_window_pane_g7

0x9fd9,	// (0x00017580) bg_popup_window_pane_g8_ParamLimits

0x9fd9,	// (0x00017580) bg_popup_window_pane_g8

0x9fe5,	// (0x0001758c) bg_popup_window_pane_g9_ParamLimits

0x9fe5,	// (0x0001758c) bg_popup_window_pane_g9

0x9ff1,	// (0x00017598) bg_popup_window_pane_g10_ParamLimits

0x9ff1,	// (0x00017598) bg_popup_window_pane_g10

0x0009,

0xf8a1,	// (0x0001ce48) bg_popup_window_pane_g_ParamLimits

0xf8a1,	// (0x0001ce48) bg_popup_window_pane_g

0x9f1a,	// (0x000174c1) bg_popup_heading_pane_ParamLimits

0x9f1a,	// (0x000174c1) bg_popup_heading_pane

0x692a,	// (0x00013ed1) tabs_4_passive_pane_cp_srt_ParamLimits

0x692a,	// (0x00013ed1) tabs_4_passive_pane_cp_srt

0x693c,	// (0x00013ee3) tabs_4_passive_pane_srt_ParamLimits

0x9f2e,	// (0x000174d5) heading_pane_g2

0x693c,	// (0x00013ee3) tabs_4_passive_pane_srt

0x4a20,	// (0x00011fc7) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4a20,	// (0x00011fc7) bg_passive_tab_pane_cp3_srt

0x9f36,	// (0x000174dd) heading_pane_t1_ParamLimits

0x9f36,	// (0x000174dd) heading_pane_t1

0x9f4d,	// (0x000174f4) heading_pane_t2_ParamLimits

0x9f4d,	// (0x000174f4) heading_pane_t2

0x0001,

0xf89c,	// (0x0001ce43) heading_pane_t_ParamLimits

0xf89c,	// (0x0001ce43) heading_pane_t

0x9a57,	// (0x00016ffe) bg_popup_heading_pane_g1

0x9b06,	// (0x000170ad) bg_popup_heading_pane_g2

0x9b10,	// (0x000170b7) bg_popup_heading_pane_g3

0x9b1a,	// (0x000170c1) bg_popup_heading_pane_g4

0x9b24,	// (0x000170cb) bg_popup_heading_pane_g5

0x9b2e,	// (0x000170d5) bg_popup_heading_pane_g6

0x9b36,	// (0x000170dd) bg_popup_heading_pane_g7

0x9b3e,	// (0x000170e5) bg_popup_heading_pane_g8

0x9b48,	// (0x000170ef) bg_popup_heading_pane_g9

0x0008,

0xf858,	// (0x0001cdff) bg_popup_heading_pane_g

0x9143,	// (0x000166ea) bg_popup_sub_pane_g1

0x9153,	// (0x000166fa) bg_popup_sub_pane_g2

0x914b,	// (0x000166f2) bg_popup_sub_pane_g3

0x9163,	// (0x0001670a) bg_popup_sub_pane_g4

0x915b,	// (0x00016702) bg_popup_sub_pane_g5

0x916b,	// (0x00016712) bg_popup_sub_pane_g6

0x9173,	// (0x0001671a) bg_popup_sub_pane_g7

0x9183,	// (0x0001672a) bg_popup_sub_pane_g8

0x917b,	// (0x00016722) bg_popup_sub_pane_g9

0x0008,

0xf832,	// (0x0001cdd9) bg_popup_sub_pane_g

0x3781,	// (0x00010d28) bg_popup_window_pane_cp5_ParamLimits

0x3781,	// (0x00010d28) bg_popup_window_pane_cp5

0x38e1,	// (0x00010e88) popup_note_window_g1_ParamLimits

0x38e1,	// (0x00010e88) popup_note_window_g1

0x38ed,	// (0x00010e94) popup_note_window_t1_ParamLimits

0x38ed,	// (0x00010e94) popup_note_window_t1

0x3903,	// (0x00010eaa) popup_note_window_t2_ParamLimits

0x3903,	// (0x00010eaa) popup_note_window_t2

0x3919,	// (0x00010ec0) popup_note_window_t3_ParamLimits

0x3919,	// (0x00010ec0) popup_note_window_t3

0x392f,	// (0x00010ed6) popup_note_window_t4_ParamLimits

0x392f,	// (0x00010ed6) popup_note_window_t4

0x3957,	// (0x00010efe) popup_note_window_t5_ParamLimits

0x3957,	// (0x00010efe) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001cb01) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001cb01) popup_note_window_t

0x397b,	// (0x00010f22) bg_popup_window_pane_cp6_ParamLimits

0x397b,	// (0x00010f22) bg_popup_window_pane_cp6

0x99d3,	// (0x00016f7a) popup_note_image_window_g1_ParamLimits

0x99d3,	// (0x00016f7a) popup_note_image_window_g1

0x99df,	// (0x00016f86) popup_note_image_window_g2_ParamLimits

0x99df,	// (0x00016f86) popup_note_image_window_g2

0x0001,

0xf826,	// (0x0001cdcd) popup_note_image_window_g_ParamLimits

0xf826,	// (0x0001cdcd) popup_note_image_window_g

0x99f8,	// (0x00016f9f) popup_note_image_window_t1_ParamLimits

0x99f8,	// (0x00016f9f) popup_note_image_window_t1

0x9a11,	// (0x00016fb8) popup_note_image_window_t2_ParamLimits

0x9a11,	// (0x00016fb8) popup_note_image_window_t2

0x9a2a,	// (0x00016fd1) popup_note_image_window_t3_ParamLimits

0x9a2a,	// (0x00016fd1) popup_note_image_window_t3

0x0002,

0xf82b,	// (0x0001cdd2) popup_note_image_window_t_ParamLimits

0xf82b,	// (0x0001cdd2) popup_note_image_window_t

0x989c,	// (0x00016e43) bg_popup_window_pane_cp7_ParamLimits

0x989c,	// (0x00016e43) bg_popup_window_pane_cp7

0x98cc,	// (0x00016e73) popup_note_wait_window_g1_ParamLimits

0x98cc,	// (0x00016e73) popup_note_wait_window_g1

0x98d8,	// (0x00016e7f) popup_note_wait_window_g2_ParamLimits

0x98d8,	// (0x00016e7f) popup_note_wait_window_g2

0x0002,

0xf814,	// (0x0001cdbb) popup_note_wait_window_g_ParamLimits

0xf814,	// (0x0001cdbb) popup_note_wait_window_g

0x98f0,	// (0x00016e97) popup_note_wait_window_t1_ParamLimits

0x98f0,	// (0x00016e97) popup_note_wait_window_t1

0x9917,	// (0x00016ebe) popup_note_wait_window_t2_ParamLimits

0x9917,	// (0x00016ebe) popup_note_wait_window_t2

0x9934,	// (0x00016edb) popup_note_wait_window_t3_ParamLimits

0x9934,	// (0x00016edb) popup_note_wait_window_t3

0x9947,	// (0x00016eee) popup_note_wait_window_t4_ParamLimits

0x9947,	// (0x00016eee) popup_note_wait_window_t4

0x0004,

0xf81b,	// (0x0001cdc2) popup_note_wait_window_t_ParamLimits

0xf81b,	// (0x0001cdc2) popup_note_wait_window_t

0x996c,	// (0x00016f13) wait_bar_pane_ParamLimits

0x996c,	// (0x00016f13) wait_bar_pane

0x3713,	// (0x00010cba) wait_anim_pane

0x3713,	// (0x00010cba) wait_border_pane

0x36e9,	// (0x00010c90) wait_anim_pane_g1

0x36e9,	// (0x00010c90) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x0001cc76) wait_anim_pane_g

0x9848,	// (0x00016def) wait_border_pane_g1

0x9853,	// (0x00016dfa) wait_border_pane_g2

0x985c,	// (0x00016e03) wait_border_pane_g3

0x0002,

0xf80d,	// (0x0001cdb4) wait_border_pane_g

0x96b3,	// (0x00016c5a) bg_popup_window_pane_cp16_ParamLimits

0x96b3,	// (0x00016c5a) bg_popup_window_pane_cp16

0x97b3,	// (0x00016d5a) indicator_popup_pane_cp4_ParamLimits

0x97b3,	// (0x00016d5a) indicator_popup_pane_cp4

0x97c7,	// (0x00016d6e) popup_query_data_window_t1_ParamLimits

0x97c7,	// (0x00016d6e) popup_query_data_window_t1

0x97d9,	// (0x00016d80) popup_query_data_window_t2_ParamLimits

0x97d9,	// (0x00016d80) popup_query_data_window_t2

0x97f2,	// (0x00016d99) popup_query_data_window_t3_ParamLimits

0x97f2,	// (0x00016d99) popup_query_data_window_t3

0x0002,

0xf806,	// (0x0001cdad) popup_query_data_window_t_ParamLimits

0xf806,	// (0x0001cdad) popup_query_data_window_t

0x980c,	// (0x00016db3) query_popup_data_pane_ParamLimits

0x980c,	// (0x00016db3) query_popup_data_pane

0x9820,	// (0x00016dc7) query_popup_data_pane_cp1_ParamLimits

0x9820,	// (0x00016dc7) query_popup_data_pane_cp1

0x96b3,	// (0x00016c5a) bg_popup_window_pane_cp10_ParamLimits

0x96b3,	// (0x00016c5a) bg_popup_window_pane_cp10

0x96e5,	// (0x00016c8c) indicator_popup_pane_ParamLimits

0x96e5,	// (0x00016c8c) indicator_popup_pane

0x9707,	// (0x00016cae) popup_query_code_window_t1_ParamLimits

0x9707,	// (0x00016cae) popup_query_code_window_t1

0x9721,	// (0x00016cc8) popup_query_code_window_t2_ParamLimits

0x9721,	// (0x00016cc8) popup_query_code_window_t2

0x976a,	// (0x00016d11) popup_query_code_window_t3_ParamLimits

0x976a,	// (0x00016d11) popup_query_code_window_t3

0x0002,

0xf7ff,	// (0x0001cda6) popup_query_code_window_t_ParamLimits

0xf7ff,	// (0x0001cda6) popup_query_code_window_t

0x9799,	// (0x00016d40) query_popup_pane_ParamLimits

0x9799,	// (0x00016d40) query_popup_pane

0x397b,	// (0x00010f22) bg_popup_window_pane_cp15_ParamLimits

0x397b,	// (0x00010f22) bg_popup_window_pane_cp15

0x7d85,	// (0x0001532c) indicator_popup_pane_cp1_ParamLimits

0x7d85,	// (0x0001532c) indicator_popup_pane_cp1

0x7d98,	// (0x0001533f) indicator_popup_pane_cp2_ParamLimits

0x7d98,	// (0x0001533f) indicator_popup_pane_cp2

0x7dab,	// (0x00015352) popup_query_data_code_window_g1_ParamLimits

0x7dab,	// (0x00015352) popup_query_data_code_window_g1

0x3999,	// (0x00010f40) popup_query_data_code_window_t1_ParamLimits

0x3999,	// (0x00010f40) popup_query_data_code_window_t1

0x39ab,	// (0x00010f52) popup_query_data_code_window_t2_ParamLimits

0x39ab,	// (0x00010f52) popup_query_data_code_window_t2

0x7dbe,	// (0x00015365) popup_query_data_code_window_t3_ParamLimits

0x7dbe,	// (0x00015365) popup_query_data_code_window_t3

0x7dd4,	// (0x0001537b) popup_query_data_code_window_t4_ParamLimits

0x7dd4,	// (0x0001537b) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001cb0c) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001cb0c) popup_query_data_code_window_t

0x65e5,	// (0x00013b8c) list_single_midp_graphic_pane_g3

0x7dec,	// (0x00015393) query_popup_data_pane_cp2_ParamLimits

0x7dff,	// (0x000153a6) query_popup_pane_cp2_ParamLimits

0x7dff,	// (0x000153a6) query_popup_pane_cp2

0x3713,	// (0x00010cba) bg_popup_window_pane_cp11

0x9697,	// (0x00016c3e) heading_pane_cp5

0x969f,	// (0x00016c46) listscroll_popup_info_pane

0x3713,	// (0x00010cba) input_focus_pane_cp3

0x39bd,	// (0x00010f64) query_popup_pane_t1

0x39cb,	// (0x00010f72) list_popup_info_pane_ParamLimits

0x39cb,	// (0x00010f72) list_popup_info_pane

0x39da,	// (0x00010f81) listscroll_popup_info_pane_g1

0x39e2,	// (0x00010f89) scroll_pane_cp7

0x7e12,	// (0x000153b9) popup_info_list_pane_t1_ParamLimits

0x7e12,	// (0x000153b9) popup_info_list_pane_t1

0x7e2c,	// (0x000153d3) popup_info_list_pane_t2_ParamLimits

0x7e2c,	// (0x000153d3) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001cb15) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001cb15) popup_info_list_pane_t

0x3713,	// (0x00010cba) bg_popup_window_pane_cp12

0xaaf7,	// (0x0001809e) find_popup_pane

0x378f,	// (0x00010d36) bg_popup_window_pane_cp3

0x39ec,	// (0x00010f93) heading_pane_cp3

0x39fb,	// (0x00010fa2) listscroll_popup_graphic_pane

0x3713,	// (0x00010cba) bg_popup_window_pane_cp4

0x7e96,	// (0x0001543d) heading_pane_cp4

0x3a0b,	// (0x00010fb2) listscroll_popup_colour_pane

0x7ea0,	// (0x00015447) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7ea0,	// (0x00015447) cell_large_graphic_colour_none_popup_pane

0x7eb4,	// (0x0001545b) grid_large_graphic_colour_popup_pane_ParamLimits

0x7eb4,	// (0x0001545b) grid_large_graphic_colour_popup_pane

0x7ed8,	// (0x0001547f) listscroll_popup_colour_pane_g1_ParamLimits

0x7ed8,	// (0x0001547f) listscroll_popup_colour_pane_g1

0x7eef,	// (0x00015496) listscroll_popup_colour_pane_g2_ParamLimits

0x7eef,	// (0x00015496) listscroll_popup_colour_pane_g2

0x7f06,	// (0x000154ad) listscroll_popup_colour_pane_g3_ParamLimits

0x7f06,	// (0x000154ad) listscroll_popup_colour_pane_g3

0x7f16,	// (0x000154bd) listscroll_popup_colour_pane_g4_ParamLimits

0x7f16,	// (0x000154bd) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001cb1a) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001cb1a) listscroll_popup_colour_pane_g

0x3a13,	// (0x00010fba) scroll_pane_cp6_ParamLimits

0x3a13,	// (0x00010fba) scroll_pane_cp6

0x7f26,	// (0x000154cd) cell_large_graphic_colour_popup_pane_ParamLimits

0x7f26,	// (0x000154cd) cell_large_graphic_colour_popup_pane

0x7f45,	// (0x000154ec) cell_large_graphic_colour_none_popup_pane_t1

0x3713,	// (0x00010cba) grid_highlight_pane_cp5

0x3a25,	// (0x00010fcc) cell_large_graphic_colour_popup_pane_g1

0x3a2d,	// (0x00010fd4) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001cb23) cell_large_graphic_colour_popup_pane_g

0x3a35,	// (0x00010fdc) cell_large_graphic_colour_popup_pane_g2_copy1

0x3a3e,	// (0x00010fe5) grid_highlight_pane_cp4

0x3a46,	// (0x00010fed) bg_popup_window_pane_cp8_ParamLimits

0x3a46,	// (0x00010fed) bg_popup_window_pane_cp8

0x7f54,	// (0x000154fb) popup_snote_single_text_window_g1_ParamLimits

0x7f54,	// (0x000154fb) popup_snote_single_text_window_g1

0x7f66,	// (0x0001550d) popup_snote_single_text_window_t1_ParamLimits

0x7f66,	// (0x0001550d) popup_snote_single_text_window_t1

0x7f79,	// (0x00015520) popup_snote_single_text_window_t2_ParamLimits

0x7f79,	// (0x00015520) popup_snote_single_text_window_t2

0x7f8c,	// (0x00015533) popup_snote_single_text_window_t3_ParamLimits

0x7f8c,	// (0x00015533) popup_snote_single_text_window_t3

0x7fc5,	// (0x0001556c) popup_snote_single_text_window_t4_ParamLimits

0x7fc5,	// (0x0001556c) popup_snote_single_text_window_t4

0x7ff9,	// (0x000155a0) popup_snote_single_text_window_t5_ParamLimits

0x7ff9,	// (0x000155a0) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001cb28) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001cb28) popup_snote_single_text_window_t

0x3a61,	// (0x00011008) bg_popup_window_pane_cp9_ParamLimits

0x3a61,	// (0x00011008) bg_popup_window_pane_cp9

0x7f54,	// (0x000154fb) popup_snote_single_graphic_window_g1_ParamLimits

0x7f54,	// (0x000154fb) popup_snote_single_graphic_window_g1

0x3a6f,	// (0x00011016) popup_snote_single_graphic_window_g2_ParamLimits

0x3a6f,	// (0x00011016) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001cb33) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001cb33) popup_snote_single_graphic_window_g

0x3a7b,	// (0x00011022) popup_snote_single_graphic_window_t1_ParamLimits

0x3a7b,	// (0x00011022) popup_snote_single_graphic_window_t1

0x3a8e,	// (0x00011035) popup_snote_single_graphic_window_t2_ParamLimits

0x3a8e,	// (0x00011035) popup_snote_single_graphic_window_t2

0x8028,	// (0x000155cf) popup_snote_single_graphic_window_t3_ParamLimits

0x8028,	// (0x000155cf) popup_snote_single_graphic_window_t3

0x8061,	// (0x00015608) popup_snote_single_graphic_window_t4_ParamLimits

0x8061,	// (0x00015608) popup_snote_single_graphic_window_t4

0x8095,	// (0x0001563c) popup_snote_single_graphic_window_t5_ParamLimits

0x8095,	// (0x0001563c) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001cb38) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001cb38) popup_snote_single_graphic_window_t

0xaa39,	// (0x00017fe0) grid_graphic_popup_pane_ParamLimits

0xaa39,	// (0x00017fe0) grid_graphic_popup_pane

0xaa63,	// (0x0001800a) listscroll_popup_graphic_pane_g1_ParamLimits

0xaa63,	// (0x0001800a) listscroll_popup_graphic_pane_g1

0xaa77,	// (0x0001801e) listscroll_popup_graphic_pane_g2_ParamLimits

0xaa77,	// (0x0001801e) listscroll_popup_graphic_pane_g2

0x0001,

0xf97c,	// (0x0001cf23) listscroll_popup_graphic_pane_g_ParamLimits

0xf97c,	// (0x0001cf23) listscroll_popup_graphic_pane_g

0xaa8b,	// (0x00018032) scroll_pane_cp5

0xa9cf,	// (0x00017f76) cell_graphic_popup_pane_ParamLimits

0xa9cf,	// (0x00017f76) cell_graphic_popup_pane

0xa9b0,	// (0x00017f57) cell_graphic_popup_pane_g1

0xa9b8,	// (0x00017f5f) cell_graphic_popup_pane_g2

0x3a35,	// (0x00010fdc) cell_graphic_popup_pane_g3

0x0002,

0xf975,	// (0x0001cf1c) cell_graphic_popup_pane_g

0xa9c1,	// (0x00017f68) cell_graphic_popup_pane_t2

0x3a3e,	// (0x00010fe5) grid_highlight_pane_cp3

0x3ab3,	// (0x0001105a) list_gen_pane_ParamLimits

0x3ab3,	// (0x0001105a) list_gen_pane

0x3adb,	// (0x00011082) scroll_pane

0xa908,	// (0x00017eaf) bg_list_pane_g1_ParamLimits

0xa908,	// (0x00017eaf) bg_list_pane_g1

0xa925,	// (0x00017ecc) bg_list_pane_g2_ParamLimits

0xa925,	// (0x00017ecc) bg_list_pane_g2

0xa93a,	// (0x00017ee1) bg_list_pane_g3_ParamLimits

0xa93a,	// (0x00017ee1) bg_list_pane_g3

0xa94e,	// (0x00017ef5) bg_list_pane_g4_ParamLimits

0xa94e,	// (0x00017ef5) bg_list_pane_g4

0xa962,	// (0x00017f09) bg_list_pane_g5_ParamLimits

0xa962,	// (0x00017f09) bg_list_pane_g5

0x0004,

0xf96a,	// (0x0001cf11) bg_list_pane_g_ParamLimits

0xf96a,	// (0x0001cf11) bg_list_pane_g

0xa7ec,	// (0x00017d93) list_double2_graphic_large_graphic_pane_ParamLimits

0xa7ec,	// (0x00017d93) list_double2_graphic_large_graphic_pane

0xa7ec,	// (0x00017d93) list_double2_graphic_pane_ParamLimits

0xa7ec,	// (0x00017d93) list_double2_graphic_pane

0xa7ec,	// (0x00017d93) list_double2_large_graphic_pane_ParamLimits

0xa7ec,	// (0x00017d93) list_double2_large_graphic_pane

0xa7ec,	// (0x00017d93) list_double2_pane_ParamLimits

0xa7ec,	// (0x00017d93) list_double2_pane

0xa7ec,	// (0x00017d93) list_double_graphic_heading_pane_ParamLimits

0xa7ec,	// (0x00017d93) list_double_graphic_heading_pane

0xa7ec,	// (0x00017d93) list_double_graphic_pane_ParamLimits

0xa7ec,	// (0x00017d93) list_double_graphic_pane

0xa7ec,	// (0x00017d93) list_double_heading_pane_ParamLimits

0xa7ec,	// (0x00017d93) list_double_heading_pane

0xa7ec,	// (0x00017d93) list_double_large_graphic_pane_ParamLimits

0xa7ec,	// (0x00017d93) list_double_large_graphic_pane

0xa7ec,	// (0x00017d93) list_double_number_pane_ParamLimits

0xa7ec,	// (0x00017d93) list_double_number_pane

0xa7ec,	// (0x00017d93) list_double_pane_ParamLimits

0xa7ec,	// (0x00017d93) list_double_pane

0xa7ec,	// (0x00017d93) list_double_time_pane_ParamLimits

0xa7ec,	// (0x00017d93) list_double_time_pane

0xa7ec,	// (0x00017d93) list_setting_number_pane_ParamLimits

0xa7ec,	// (0x00017d93) list_setting_number_pane

0xa7ec,	// (0x00017d93) list_setting_pane_ParamLimits

0xa7ec,	// (0x00017d93) list_setting_pane

0xa86a,	// (0x00017e11) list_single_2graphic_pane_ParamLimits

0xa86a,	// (0x00017e11) list_single_2graphic_pane

0xa86a,	// (0x00017e11) list_single_graphic_heading_pane_ParamLimits

0xa86a,	// (0x00017e11) list_single_graphic_heading_pane

0xa86a,	// (0x00017e11) list_single_graphic_pane_ParamLimits

0xa86a,	// (0x00017e11) list_single_graphic_pane

0xa86a,	// (0x00017e11) list_single_heading_pane_ParamLimits

0xa86a,	// (0x00017e11) list_single_heading_pane

0xa8e5,	// (0x00017e8c) list_single_large_graphic_pane_ParamLimits

0xa8e5,	// (0x00017e8c) list_single_large_graphic_pane

0xa86a,	// (0x00017e11) list_single_number_heading_pane_ParamLimits

0xa86a,	// (0x00017e11) list_single_number_heading_pane

0xa86a,	// (0x00017e11) list_single_number_pane_ParamLimits

0xa86a,	// (0x00017e11) list_single_number_pane

0xa86a,	// (0x00017e11) list_single_pane_ParamLimits

0xa86a,	// (0x00017e11) list_single_pane

0x3713,	// (0x00010cba) list_highlight_pane_cp1

0x80da,	// (0x00015681) list_single_pane_g1_ParamLimits

0x80da,	// (0x00015681) list_single_pane_g1

0x80e6,	// (0x0001568d) list_single_pane_g2_ParamLimits

0x80e6,	// (0x0001568d) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001cb4a) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001cb4a) list_single_pane_g

0xa7a5,	// (0x00017d4c) list_single_pane_t1_ParamLimits

0xa7a5,	// (0x00017d4c) list_single_pane_t1

0x80da,	// (0x00015681) list_single_number_pane_g1_ParamLimits

0x80da,	// (0x00015681) list_single_number_pane_g1

0x80e6,	// (0x0001568d) list_single_number_pane_g2_ParamLimits

0x80e6,	// (0x0001568d) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001cb4a) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001cb4a) list_single_number_pane_g

0x80f2,	// (0x00015699) list_single_number_pane_t1_ParamLimits

0x80f2,	// (0x00015699) list_single_number_pane_t1

0xa54b,	// (0x00017af2) list_single_number_pane_t2_ParamLimits

0xa54b,	// (0x00017af2) list_single_number_pane_t2

0x0001,

0xf92b,	// (0x0001ced2) list_single_number_pane_t_ParamLimits

0xf92b,	// (0x0001ced2) list_single_number_pane_t

0x80ce,	// (0x00015675) list_single_graphic_pane_g1_ParamLimits

0x80ce,	// (0x00015675) list_single_graphic_pane_g1

0x80da,	// (0x00015681) list_single_graphic_pane_g2_ParamLimits

0x80da,	// (0x00015681) list_single_graphic_pane_g2

0x80e6,	// (0x0001568d) list_single_graphic_pane_g3_ParamLimits

0x80e6,	// (0x0001568d) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001cb43) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001cb43) list_single_graphic_pane_g

0x80f2,	// (0x00015699) list_single_graphic_pane_t1_ParamLimits

0x80f2,	// (0x00015699) list_single_graphic_pane_t1

0x80da,	// (0x00015681) list_single_heading_pane_g1_ParamLimits

0x80da,	// (0x00015681) list_single_heading_pane_g1

0x80e6,	// (0x0001568d) list_single_heading_pane_g2_ParamLimits

0x80e6,	// (0x0001568d) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001cb4a) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001cb4a) list_single_heading_pane_g

0x8108,	// (0x000156af) list_single_heading_pane_t1_ParamLimits

0x8108,	// (0x000156af) list_single_heading_pane_t1

0x811e,	// (0x000156c5) list_single_heading_pane_t2_ParamLimits

0x811e,	// (0x000156c5) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001cb4f) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001cb4f) list_single_heading_pane_t

0x80da,	// (0x00015681) list_single_number_heading_pane_g1_ParamLimits

0x80da,	// (0x00015681) list_single_number_heading_pane_g1

0x80e6,	// (0x0001568d) list_single_number_heading_pane_g2_ParamLimits

0x80e6,	// (0x0001568d) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001cb4a) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001cb4a) list_single_number_heading_pane_g

0x8108,	// (0x000156af) list_single_number_heading_pane_t1_ParamLimits

0x8108,	// (0x000156af) list_single_number_heading_pane_t1

0x8130,	// (0x000156d7) list_single_number_heading_pane_t2_ParamLimits

0x8130,	// (0x000156d7) list_single_number_heading_pane_t2

0x8142,	// (0x000156e9) list_single_number_heading_pane_t3_ParamLimits

0x8142,	// (0x000156e9) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001cb54) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001cb54) list_single_number_heading_pane_t

0x8154,	// (0x000156fb) list_single_graphic_heading_pane_g1_ParamLimits

0x8154,	// (0x000156fb) list_single_graphic_heading_pane_g1

0x8160,	// (0x00015707) list_single_graphic_heading_pane_g4_ParamLimits

0x8160,	// (0x00015707) list_single_graphic_heading_pane_g4

0x80e6,	// (0x0001568d) list_single_graphic_heading_pane_g5_ParamLimits

0x80e6,	// (0x0001568d) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001cb5b) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001cb5b) list_single_graphic_heading_pane_g

0x8108,	// (0x000156af) list_single_graphic_heading_pane_t1_ParamLimits

0x8108,	// (0x000156af) list_single_graphic_heading_pane_t1

0x8171,	// (0x00015718) list_single_graphic_heading_pane_t2_ParamLimits

0x8171,	// (0x00015718) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001cb62) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001cb62) list_single_graphic_heading_pane_t

0x8183,	// (0x0001572a) list_single_large_graphic_pane_g1_ParamLimits

0x8183,	// (0x0001572a) list_single_large_graphic_pane_g1

0x80da,	// (0x00015681) list_single_large_graphic_pane_g2_ParamLimits

0x80da,	// (0x00015681) list_single_large_graphic_pane_g2

0x80e6,	// (0x0001568d) list_single_large_graphic_pane_g3_ParamLimits

0x80e6,	// (0x0001568d) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001cb67) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001cb67) list_single_large_graphic_pane_g

0x9853,	// (0x00016dfa) wait_border_pane_g2_copy1

0x818f,	// (0x00015736) list_single_large_graphic_pane_g4_cp2

0x80f2,	// (0x00015699) list_single_large_graphic_pane_t1_ParamLimits

0x80f2,	// (0x00015699) list_single_large_graphic_pane_t1

0x3e42,	// (0x000113e9) list_double_pane_g1_ParamLimits

0x3e42,	// (0x000113e9) list_double_pane_g1

0x8197,	// (0x0001573e) list_double_pane_g2_ParamLimits

0x8197,	// (0x0001573e) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001cb6e) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001cb6e) list_double_pane_g

0x81a3,	// (0x0001574a) list_double_pane_t1_ParamLimits

0x81a3,	// (0x0001574a) list_double_pane_t1

0x81b9,	// (0x00015760) list_double_pane_t2_ParamLimits

0x81b9,	// (0x00015760) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001cb73) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001cb73) list_double_pane_t

0x81cb,	// (0x00015772) list_double2_pane_g1_ParamLimits

0x81cb,	// (0x00015772) list_double2_pane_g1

0x81dc,	// (0x00015783) list_double2_pane_g2_ParamLimits

0x81dc,	// (0x00015783) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001cb78) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001cb78) list_double2_pane_g

0x81e8,	// (0x0001578f) list_double2_pane_t1_ParamLimits

0x81e8,	// (0x0001578f) list_double2_pane_t1

0x81fe,	// (0x000157a5) list_double2_pane_t2_ParamLimits

0x81fe,	// (0x000157a5) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001cb7d) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001cb7d) list_double2_pane_t

0x3e42,	// (0x000113e9) list_double_number_pane_g1_ParamLimits

0x3e42,	// (0x000113e9) list_double_number_pane_g1

0x8197,	// (0x0001573e) list_double_number_pane_g2_ParamLimits

0x8197,	// (0x0001573e) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001cb6e) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001cb6e) list_double_number_pane_g

0x8210,	// (0x000157b7) list_double_number_pane_t1_ParamLimits

0x8210,	// (0x000157b7) list_double_number_pane_t1

0x8222,	// (0x000157c9) list_double_number_pane_t2_ParamLimits

0x8222,	// (0x000157c9) list_double_number_pane_t2

0x8238,	// (0x000157df) list_double_number_pane_t3_ParamLimits

0x8238,	// (0x000157df) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001cb82) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001cb82) list_double_number_pane_t

0x824a,	// (0x000157f1) list_double_graphic_pane_g1_ParamLimits

0x824a,	// (0x000157f1) list_double_graphic_pane_g1

0x8256,	// (0x000157fd) list_double_graphic_pane_g2_ParamLimits

0x8256,	// (0x000157fd) list_double_graphic_pane_g2

0x8265,	// (0x0001580c) list_double_graphic_pane_g3_ParamLimits

0x8265,	// (0x0001580c) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001cb89) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001cb89) list_double_graphic_pane_g

0x8222,	// (0x000157c9) list_double_graphic_pane_t1_ParamLimits

0x8222,	// (0x000157c9) list_double_graphic_pane_t1

0x8238,	// (0x000157df) list_double_graphic_pane_t2_ParamLimits

0x8238,	// (0x000157df) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001cb92) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001cb92) list_double_graphic_pane_t

0x827d,	// (0x00015824) list_double2_graphic_pane_g1_ParamLimits

0x827d,	// (0x00015824) list_double2_graphic_pane_g1

0x3e4e,	// (0x000113f5) list_double2_graphic_pane_g2_ParamLimits

0x3e4e,	// (0x000113f5) list_double2_graphic_pane_g2

0x81dc,	// (0x00015783) list_double2_graphic_pane_g3_ParamLimits

0x81dc,	// (0x00015783) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001cb97) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001cb97) list_double2_graphic_pane_g

0x8289,	// (0x00015830) list_double2_graphic_pane_t1_ParamLimits

0x8289,	// (0x00015830) list_double2_graphic_pane_t1

0x829f,	// (0x00015846) list_double2_graphic_pane_t2_ParamLimits

0x829f,	// (0x00015846) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001cb9e) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001cb9e) list_double2_graphic_pane_t

0x82b1,	// (0x00015858) list_double_large_graphic_pane_g1_ParamLimits

0x82b1,	// (0x00015858) list_double_large_graphic_pane_g1

0x82d0,	// (0x00015877) list_double_large_graphic_pane_g2_ParamLimits

0x82d0,	// (0x00015877) list_double_large_graphic_pane_g2

0x8197,	// (0x0001573e) list_double_large_graphic_pane_g3_ParamLimits

0x8197,	// (0x0001573e) list_double_large_graphic_pane_g3

0x82e1,	// (0x00015888) list_double_large_graphic_pane_g4_ParamLimits

0x82e1,	// (0x00015888) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001cba3) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001cba3) list_double_large_graphic_pane_g

0x82f4,	// (0x0001589b) list_double_large_graphic_pane_t1_ParamLimits

0x82f4,	// (0x0001589b) list_double_large_graphic_pane_t1

0x830d,	// (0x000158b4) list_double_large_graphic_pane_t2_ParamLimits

0x830d,	// (0x000158b4) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001cbae) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001cbae) list_double_large_graphic_pane_t

0x831f,	// (0x000158c6) list_double2_large_graphic_pane_g1_ParamLimits

0x831f,	// (0x000158c6) list_double2_large_graphic_pane_g1

0x81cb,	// (0x00015772) list_double2_large_graphic_pane_g2_ParamLimits

0x81cb,	// (0x00015772) list_double2_large_graphic_pane_g2

0x81dc,	// (0x00015783) list_double2_large_graphic_pane_g3_ParamLimits

0x81dc,	// (0x00015783) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001cbb3) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001cbb3) list_double2_large_graphic_pane_g

0x8289,	// (0x00015830) list_double2_large_graphic_pane_t1_ParamLimits

0x8289,	// (0x00015830) list_double2_large_graphic_pane_t1

0x829f,	// (0x00015846) list_double2_large_graphic_pane_t2_ParamLimits

0x829f,	// (0x00015846) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001cb9e) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001cb9e) list_double2_large_graphic_pane_t

0x832b,	// (0x000158d2) list_double_heading_pane_g1_ParamLimits

0x832b,	// (0x000158d2) list_double_heading_pane_g1

0x3b0f,	// (0x000110b6) list_double_heading_pane_g2_ParamLimits

0x3b0f,	// (0x000110b6) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0001cbba) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0001cbba) list_double_heading_pane_g

0x833c,	// (0x000158e3) list_double_heading_pane_t1_ParamLimits

0x833c,	// (0x000158e3) list_double_heading_pane_t1

0x829f,	// (0x00015846) list_double_heading_pane_t2_ParamLimits

0x829f,	// (0x00015846) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0001cbbf) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0001cbbf) list_double_heading_pane_t

0x824a,	// (0x000157f1) list_double_graphic_heading_pane_g1_ParamLimits

0x824a,	// (0x000157f1) list_double_graphic_heading_pane_g1

0x832b,	// (0x000158d2) list_double_graphic_heading_pane_g2_ParamLimits

0x832b,	// (0x000158d2) list_double_graphic_heading_pane_g2

0x3b0f,	// (0x000110b6) list_double_graphic_heading_pane_g3_ParamLimits

0x3b0f,	// (0x000110b6) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0001cbc4) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001cbc4) list_double_graphic_heading_pane_g

0x833c,	// (0x000158e3) list_double_graphic_heading_pane_t1_ParamLimits

0x833c,	// (0x000158e3) list_double_graphic_heading_pane_t1

0x829f,	// (0x00015846) list_double_graphic_heading_pane_t2_ParamLimits

0x829f,	// (0x00015846) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0001cbbf) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0001cbbf) list_double_graphic_heading_pane_t

0x82d0,	// (0x00015877) list_double_time_pane_g1_ParamLimits

0x82d0,	// (0x00015877) list_double_time_pane_g1

0x8197,	// (0x0001573e) list_double_time_pane_g2_ParamLimits

0x8197,	// (0x0001573e) list_double_time_pane_g2

0x0001,

0xf624,	// (0x0001cbcb) list_double_time_pane_g_ParamLimits

0xf624,	// (0x0001cbcb) list_double_time_pane_g

0x8352,	// (0x000158f9) list_double_time_pane_t1_ParamLimits

0x8352,	// (0x000158f9) list_double_time_pane_t1

0x8368,	// (0x0001590f) list_double_time_pane_t2_ParamLimits

0x8368,	// (0x0001590f) list_double_time_pane_t2

0x837a,	// (0x00015921) list_double_time_pane_t3_ParamLimits

0x837a,	// (0x00015921) list_double_time_pane_t3

0x838c,	// (0x00015933) list_double_time_pane_t4_ParamLimits

0x838c,	// (0x00015933) list_double_time_pane_t4

0x0003,

0xf629,	// (0x0001cbd0) list_double_time_pane_t_ParamLimits

0xf629,	// (0x0001cbd0) list_double_time_pane_t

0x3e4e,	// (0x000113f5) list_setting_pane_g1_ParamLimits

0x3e4e,	// (0x000113f5) list_setting_pane_g1

0x81dc,	// (0x00015783) list_setting_pane_g2_ParamLimits

0x81dc,	// (0x00015783) list_setting_pane_g2

0x0001,

0xf632,	// (0x0001cbd9) list_setting_pane_g_ParamLimits

0xf632,	// (0x0001cbd9) list_setting_pane_g

0x839e,	// (0x00015945) list_setting_pane_t1_ParamLimits

0x839e,	// (0x00015945) list_setting_pane_t1

0x83b5,	// (0x0001595c) list_setting_pane_t2_ParamLimits

0x83b5,	// (0x0001595c) list_setting_pane_t2

0x0002,

0xf637,	// (0x0001cbde) list_setting_pane_t_ParamLimits

0xf637,	// (0x0001cbde) list_setting_pane_t

0x83f2,	// (0x00015999) set_value_pane_cp_ParamLimits

0x83f2,	// (0x00015999) set_value_pane_cp

0x3e4e,	// (0x000113f5) list_setting_number_pane_g1_ParamLimits

0x3e4e,	// (0x000113f5) list_setting_number_pane_g1

0x81dc,	// (0x00015783) list_setting_number_pane_g2_ParamLimits

0x81dc,	// (0x00015783) list_setting_number_pane_g2

0x0001,

0xf632,	// (0x0001cbd9) list_setting_number_pane_g_ParamLimits

0xf632,	// (0x0001cbd9) list_setting_number_pane_g

0x83fe,	// (0x000159a5) list_setting_number_pane_t1_ParamLimits

0x83fe,	// (0x000159a5) list_setting_number_pane_t1

0x8412,	// (0x000159b9) list_setting_number_pane_t2_ParamLimits

0x8412,	// (0x000159b9) list_setting_number_pane_t2

0x8429,	// (0x000159d0) list_setting_number_pane_t3_ParamLimits

0x8429,	// (0x000159d0) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x0001cbe5) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x0001cbe5) list_setting_number_pane_t

0x83f2,	// (0x00015999) set_value_pane_ParamLimits

0x83f2,	// (0x00015999) set_value_pane

0x3b30,	// (0x000110d7) bg_set_opt_pane_ParamLimits

0x3b30,	// (0x000110d7) bg_set_opt_pane

0x3b51,	// (0x000110f8) set_value_pane_t1

0x3b5f,	// (0x00011106) slider_set_pane_cp3

0x846c,	// (0x00015a13) volume_small_pane_cp

0x3b68,	// (0x0001110f) list_form_gen_pane

0x3b71,	// (0x00011118) scroll_pane_cp8

0x8475,	// (0x00015a1c) form_field_data_pane_ParamLimits

0x8475,	// (0x00015a1c) form_field_data_pane

0x848d,	// (0x00015a34) form_field_data_wide_pane_ParamLimits

0x848d,	// (0x00015a34) form_field_data_wide_pane

0x84ae,	// (0x00015a55) form_field_popup_pane_ParamLimits

0x84ae,	// (0x00015a55) form_field_popup_pane

0x84ce,	// (0x00015a75) form_field_popup_wide_pane_ParamLimits

0x84ce,	// (0x00015a75) form_field_popup_wide_pane

0x3b92,	// (0x00011139) form_field_slider_pane_ParamLimits

0x3b92,	// (0x00011139) form_field_slider_pane

0x84eb,	// (0x00015a92) form_field_slider_wide_pane_ParamLimits

0x84eb,	// (0x00015a92) form_field_slider_wide_pane

0x3ba5,	// (0x0001114c) data_form_pane

0x8508,	// (0x00015aaf) form_field_data_pane_t1

0x3bb1,	// (0x00011158) input_focus_pane

0x3bbf,	// (0x00011166) data_form_wide_pane

0x3bfc,	// (0x000111a3) form_field_data_wide_pane_t1

0x3a53,	// (0x00010ffa) input_focus_pane_cp6

0x8520,	// (0x00015ac7) form_field_popup_pane_t1

0x3bb1,	// (0x00011158) input_focus_pane_cp7

0x3c1e,	// (0x000111c5) list_form_pane

0x3c32,	// (0x000111d9) form_field_popup_wide_pane_t1

0x3bb1,	// (0x00011158) input_focus_pane_cp8

0x3c47,	// (0x000111ee) list_form_wide_pane

0x8540,	// (0x00015ae7) form_field_slider_pane_t1_ParamLimits

0x8540,	// (0x00015ae7) form_field_slider_pane_t1

0x8552,	// (0x00015af9) form_field_slider_pane_t2_ParamLimits

0x8552,	// (0x00015af9) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x0001cbf5) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x0001cbf5) form_field_slider_pane_t

0x3781,	// (0x00010d28) input_focus_pane_cp9_ParamLimits

0x3781,	// (0x00010d28) input_focus_pane_cp9

0x8564,	// (0x00015b0b) slider_cont_pane_ParamLimits

0x8564,	// (0x00015b0b) slider_cont_pane

0x3c53,	// (0x000111fa) form_field_slider_wide_pane_t1_ParamLimits

0x3c53,	// (0x000111fa) form_field_slider_wide_pane_t1

0x3c65,	// (0x0001120c) form_field_slider_wide_pane_t2_ParamLimits

0x3c65,	// (0x0001120c) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x0001cbfa) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x0001cbfa) form_field_slider_wide_pane_t

0x3781,	// (0x00010d28) input_focus_pane_cp10_ParamLimits

0x3781,	// (0x00010d28) input_focus_pane_cp10

0x8578,	// (0x00015b1f) slider_cont_pane_cp1_ParamLimits

0x8578,	// (0x00015b1f) slider_cont_pane_cp1

0x858c,	// (0x00015b33) slider_form_pane_cp

0x3c77,	// (0x0001121e) input_focus_pane_g1

0x3c7f,	// (0x00011226) input_focus_pane_g2

0x3c87,	// (0x0001122e) input_focus_pane_g3

0x3c8f,	// (0x00011236) input_focus_pane_g4

0x3c97,	// (0x0001123e) input_focus_pane_g5

0x3c9f,	// (0x00011246) input_focus_pane_g6

0x3ca7,	// (0x0001124e) input_focus_pane_g7

0x3caf,	// (0x00011256) input_focus_pane_g8

0x3cb7,	// (0x0001125e) input_focus_pane_g9

0x36e9,	// (0x00010c90) input_focus_pane_g10

0x0009,

0xf658,	// (0x0001cbff) input_focus_pane_g

0x985c,	// (0x00016e03) wait_border_pane_g3_copy1

0x8594,	// (0x00015b3b) data_form_pane_t1

0x36e9,	// (0x00010c90) wait_anim_pane_g1_copy1

0xa788,	// (0x00017d2f) data_form_wide_pane_t1

0x85af,	// (0x00015b56) list_form_graphic_pane_cp_ParamLimits

0x85af,	// (0x00015b56) list_form_graphic_pane_cp

0xa75d,	// (0x00017d04) slider_form_pane_g1

0xa766,	// (0x00017d0d) slider_form_pane_g2

0x0006,

0xf95b,	// (0x0001cf02) slider_form_pane_g

0x85c3,	// (0x00015b6a) list_form_graphic_pane_ParamLimits

0x85c3,	// (0x00015b6a) list_form_graphic_pane

0x85da,	// (0x00015b81) list_form_graphic_pane_g1

0x85e2,	// (0x00015b89) list_form_graphic_pane_t1_ParamLimits

0x85e2,	// (0x00015b89) list_form_graphic_pane_t1

0x378f,	// (0x00010d36) list_highlight_pane_cp5_ParamLimits

0x378f,	// (0x00010d36) list_highlight_pane_cp5

0x85f7,	// (0x00015b9e) find_pane_g1

0x3cbf,	// (0x00011266) input_find_pane

0x8600,	// (0x00015ba7) input_find_pane_g1_ParamLimits

0x8600,	// (0x00015ba7) input_find_pane_g1

0x860c,	// (0x00015bb3) input_find_pane_t1_ParamLimits

0x860c,	// (0x00015bb3) input_find_pane_t1

0x8621,	// (0x00015bc8) input_find_pane_t2_ParamLimits

0x8621,	// (0x00015bc8) input_find_pane_t2

0x0001,

0xf66d,	// (0x0001cc14) input_find_pane_t_ParamLimits

0xf66d,	// (0x0001cc14) input_find_pane_t

0x3cc8,	// (0x0001126f) input_focus_pane_cp5_ParamLimits

0x3cc8,	// (0x0001126f) input_focus_pane_cp5

0x3cdb,	// (0x00011282) bg_popup_window_pane_cp2_ParamLimits

0x3cdb,	// (0x00011282) bg_popup_window_pane_cp2

0x3ce8,	// (0x0001128f) listscroll_menu_pane_ParamLimits

0x3ce8,	// (0x0001128f) listscroll_menu_pane

0x8642,	// (0x00015be9) popup_submenu_window_ParamLimits

0x8642,	// (0x00015be9) popup_submenu_window

0x3cf4,	// (0x0001129b) find_popup_pane_g1

0x866a,	// (0x00015c11) input_popup_find_pane_cp

0x3cfc,	// (0x000112a3) input_focus_pane_cp4_ParamLimits

0x3cfc,	// (0x000112a3) input_focus_pane_cp4

0x3d0a,	// (0x000112b1) input_popup_find_pane_t1_ParamLimits

0x3d0a,	// (0x000112b1) input_popup_find_pane_t1

0x3713,	// (0x00010cba) bg_popup_sub_pane_cp

0x3d38,	// (0x000112df) listscroll_popup_sub_pane

0x3d40,	// (0x000112e7) list_submenu_pane_ParamLimits

0x3d40,	// (0x000112e7) list_submenu_pane

0x3d51,	// (0x000112f8) scroll_pane_cp4

0x8682,	// (0x00015c29) list_single_popup_submenu_pane_ParamLimits

0x8682,	// (0x00015c29) list_single_popup_submenu_pane

0x3e3a,	// (0x000113e1) list_single_popup_submenu_pane_g1

0x8696,	// (0x00015c3d) list_single_popup_submenu_pane_t1_ParamLimits

0x8696,	// (0x00015c3d) list_single_popup_submenu_pane_t1

0x378f,	// (0x00010d36) bg_active_tab_pane_cp1_ParamLimits

0x378f,	// (0x00010d36) bg_active_tab_pane_cp1

0x3d59,	// (0x00011300) tabs_2_active_pane_g1

0x86ab,	// (0x00015c52) tabs_2_active_pane_t1

0x378f,	// (0x00010d36) bg_passive_tab_pane_cp1_ParamLimits

0x378f,	// (0x00010d36) bg_passive_tab_pane_cp1

0x3d59,	// (0x00011300) tabs_2_passive_pane_g1

0x86ab,	// (0x00015c52) tabs_2_passive_pane_t1

0x86bd,	// (0x00015c64) bg_active_tab_pane_cp4

0x86cb,	// (0x00015c72) tabs_2_long_active_pane_t1

0x86de,	// (0x00015c85) bg_passive_tab_pane_cp4

0x65ed,	// (0x00013b94) list_single_midp_graphic_pane_g4_ParamLimits

0x86bd,	// (0x00015c64) bg_active_tab_pane_cp5

0x86ea,	// (0x00015c91) tabs_3_long_active_pane_t1

0x86de,	// (0x00015c85) bg_passive_tab_pane_cp5

0x65ed,	// (0x00013b94) list_single_midp_graphic_pane_g4

0x378f,	// (0x00010d36) bg_popup_window_pane_cp13_ParamLimits

0x378f,	// (0x00010d36) bg_popup_window_pane_cp13

0x3d61,	// (0x00011308) listscroll_popup_fast_pane_ParamLimits

0x3d61,	// (0x00011308) listscroll_popup_fast_pane

0x3d6d,	// (0x00011314) grid_popup_fast_pane_ParamLimits

0x3d6d,	// (0x00011314) grid_popup_fast_pane

0x3d7f,	// (0x00011326) scroll_pane_cp9_ParamLimits

0x3d7f,	// (0x00011326) scroll_pane_cp9

0xc6d9,	// (0x00019c80) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc6d9,	// (0x00019c80) list_single_graphic_hl_pane_t1_cp2

0x3d92,	// (0x00011339) input_focus_pane_cp20_ParamLimits

0x3d92,	// (0x00011339) input_focus_pane_cp20

0x3da0,	// (0x00011347) query_popup_data_pane_t1_ParamLimits

0x3da0,	// (0x00011347) query_popup_data_pane_t1

0x3db3,	// (0x0001135a) query_popup_data_pane_t2_ParamLimits

0x3db3,	// (0x0001135a) query_popup_data_pane_t2

0x3df9,	// (0x000113a0) query_popup_data_pane_t3_ParamLimits

0x3df9,	// (0x000113a0) query_popup_data_pane_t3

0x3e5a,	// (0x00011401) query_popup_data_pane_t4_ParamLimits

0x3e5a,	// (0x00011401) query_popup_data_pane_t4

0x3e96,	// (0x0001143d) query_popup_data_pane_t5_ParamLimits

0x3e96,	// (0x0001143d) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x0001cc19) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x0001cc19) query_popup_data_pane_t

0x3c77,	// (0x0001121e) bg_set_opt_pane_g1

0x3c7f,	// (0x00011226) bg_set_opt_pane_g2

0x3c87,	// (0x0001122e) bg_set_opt_pane_g3

0x3c8f,	// (0x00011236) bg_set_opt_pane_g4

0x3c97,	// (0x0001123e) bg_set_opt_pane_g5

0x3c9f,	// (0x00011246) bg_set_opt_pane_g6

0x3ca7,	// (0x0001124e) bg_set_opt_pane_g7

0x3caf,	// (0x00011256) bg_set_opt_pane_g8

0x3cb7,	// (0x0001125e) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x0001cc24) bg_set_opt_pane_g

0x5bfd,	// (0x000131a4) control_top_pane_stacon_ParamLimits

0x5bfd,	// (0x000131a4) control_top_pane_stacon

0x5c50,	// (0x000131f7) signal_pane_stacon_ParamLimits

0x5c50,	// (0x000131f7) signal_pane_stacon

0x44eb,	// (0x00011a92) stacon_top_pane_g1_ParamLimits

0x44eb,	// (0x00011a92) stacon_top_pane_g1

0x5c75,	// (0x0001321c) title_pane_stacon_ParamLimits

0x5c75,	// (0x0001321c) title_pane_stacon

0x5c9f,	// (0x00013246) uni_indicator_pane_stacon_ParamLimits

0x5c9f,	// (0x00013246) uni_indicator_pane_stacon

0x5cb4,	// (0x0001325b) battery_pane_stacon_ParamLimits

0x5cb4,	// (0x0001325b) battery_pane_stacon

0x5cf8,	// (0x0001329f) control_bottom_pane_stacon_ParamLimits

0x5cf8,	// (0x0001329f) control_bottom_pane_stacon

0x5d1b,	// (0x000132c2) navi_pane_stacon_ParamLimits

0x5d1b,	// (0x000132c2) navi_pane_stacon

0x45d6,	// (0x00011b7d) stacon_bottom_pane_g1_ParamLimits

0x45d6,	// (0x00011b7d) stacon_bottom_pane_g1

0x5969,	// (0x00012f10) aid_levels_signal_lsc_ParamLimits

0x5969,	// (0x00012f10) aid_levels_signal_lsc

0x597f,	// (0x00012f26) signal_pane_stacon_g1_ParamLimits

0x597f,	// (0x00012f26) signal_pane_stacon_g1

0x5993,	// (0x00012f3a) signal_pane_stacon_g2_ParamLimits

0x5993,	// (0x00012f3a) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x0001cc37) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x0001cc37) signal_pane_stacon_g

0x59c8,	// (0x00012f6f) title_pane_stacon_t1_ParamLimits

0x59c8,	// (0x00012f6f) title_pane_stacon_t1

0x3f72,	// (0x00011519) uni_indicator_pane_stacon_g1

0x3f7c,	// (0x00011523) uni_indicator_pane_stacon_g2

0x3f5e,	// (0x00011505) uni_indicator_pane_stacon_g3

0x3f68,	// (0x0001150f) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x0001cc43) uni_indicator_pane_stacon_g

0x59ed,	// (0x00012f94) control_top_pane_stacon_g1

0x59f5,	// (0x00012f9c) control_top_pane_stacon_t1_ParamLimits

0x59f5,	// (0x00012f9c) control_top_pane_stacon_t1

0x5a2c,	// (0x00012fd3) aid_levels_battery_lsc_ParamLimits

0x5a2c,	// (0x00012fd3) aid_levels_battery_lsc

0x5a43,	// (0x00012fea) battery_pane_stacon_g1_ParamLimits

0x5a43,	// (0x00012fea) battery_pane_stacon_g1

0x5a56,	// (0x00012ffd) battery_pane_stacon_g2_ParamLimits

0x5a56,	// (0x00012ffd) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x0001cc4c) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x0001cc4c) battery_pane_stacon_g

0x5a94,	// (0x0001303b) navi_icon_pane_stacon

0x5aa8,	// (0x0001304f) navi_navi_pane_stacon

0x5a94,	// (0x0001303b) navi_text_pane_stacon

0x59ed,	// (0x00012f94) control_bottom_pane_stacon_g1

0x5abc,	// (0x00013063) control_bottom_pane_stacon_t1_ParamLimits

0x5abc,	// (0x00013063) control_bottom_pane_stacon_t1

0x8716,	// (0x00015cbd) grid_app_pane_ParamLimits

0x8716,	// (0x00015cbd) grid_app_pane

0x8738,	// (0x00015cdf) scroll_pane_cp15_ParamLimits

0x8738,	// (0x00015cdf) scroll_pane_cp15

0x874b,	// (0x00015cf2) cell_app_pane_ParamLimits

0x874b,	// (0x00015cf2) cell_app_pane

0x8773,	// (0x00015d1a) cell_app_pane_g1_ParamLimits

0x8773,	// (0x00015d1a) cell_app_pane_g1

0x40a6,	// (0x0001164d) cell_app_pane_g2_ParamLimits

0x40a6,	// (0x0001164d) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x0001cc51) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x0001cc51) cell_app_pane_g

0x8797,	// (0x00015d3e) cell_app_pane_t1_ParamLimits

0x8797,	// (0x00015d3e) cell_app_pane_t1

0x40b2,	// (0x00011659) grid_highlight_pane_ParamLimits

0x40b2,	// (0x00011659) grid_highlight_pane

0x3c77,	// (0x0001121e) cell_highlight_pane_g1

0x3c7f,	// (0x00011226) cell_highlight_pane_g2

0x3c87,	// (0x0001122e) cell_highlight_pane_g3

0x3c8f,	// (0x00011236) cell_highlight_pane_g4

0x3c97,	// (0x0001123e) cell_highlight_pane_g5

0x3c9f,	// (0x00011246) cell_highlight_pane_g6

0x3ca7,	// (0x0001124e) cell_highlight_pane_g7

0x3caf,	// (0x00011256) cell_highlight_pane_g8

0x3cb7,	// (0x0001125e) cell_highlight_pane_g9

0x36e9,	// (0x00010c90) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x0001cbff) cell_highlight_pane_g

0x40cd,	// (0x00011674) bg_scroll_pane

0x5b06,	// (0x000130ad) scroll_handle_pane

0x4129,	// (0x000116d0) scroll_bg_pane_g1

0x413e,	// (0x000116e5) scroll_bg_pane_g2

0x4156,	// (0x000116fd) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x0001cc56) scroll_bg_pane_g

0x87ae,	// (0x00015d55) scroll_handle_focus_pane_ParamLimits

0x87ae,	// (0x00015d55) scroll_handle_focus_pane

0x4129,	// (0x000116d0) scroll_handle_pane_g1

0x416b,	// (0x00011712) scroll_handle_pane_g2

0x4156,	// (0x000116fd) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x0001cc5d) scroll_handle_pane_g

0x3cfc,	// (0x000112a3) bg_popup_sub_pane_cp21_ParamLimits

0x3cfc,	// (0x000112a3) bg_popup_sub_pane_cp21

0x87bb,	// (0x00015d62) popup_fep_japan_predictive_window_t1_ParamLimits

0x87bb,	// (0x00015d62) popup_fep_japan_predictive_window_t1

0x87d5,	// (0x00015d7c) popup_fep_japan_predictive_window_t2_ParamLimits

0x87d5,	// (0x00015d7c) popup_fep_japan_predictive_window_t2

0x8808,	// (0x00015daf) popup_fep_japan_predictive_window_t3_ParamLimits

0x8808,	// (0x00015daf) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x0001cc64) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x0001cc64) popup_fep_japan_predictive_window_t

0x3713,	// (0x00010cba) bg_popup_sub_pane_cp23

0x438b,	// (0x00011932) listscroll_japin_cand_pane

0x417f,	// (0x00011726) popup_fep_japan_candidate_window_t1

0x418d,	// (0x00011734) candidate_pane_ParamLimits

0x418d,	// (0x00011734) candidate_pane

0x883f,	// (0x00015de6) scroll_pane_cp30

0x419f,	// (0x00011746) list_single_popup_jap_candidate_pane_ParamLimits

0x419f,	// (0x00011746) list_single_popup_jap_candidate_pane

0x3713,	// (0x00010cba) list_highlight_pane_cp30

0x41b4,	// (0x0001175b) list_single_popup_jap_candidate_pane_t1

0x41c3,	// (0x0001176a) level_1_signal

0x41d0,	// (0x00011777) level_2_signal

0x41dd,	// (0x00011784) level_3_signal

0x41ea,	// (0x00011791) level_4_signal

0x41f7,	// (0x0001179e) level_5_signal

0x4204,	// (0x000117ab) level_6_signal

0x4211,	// (0x000117b8) level_7_signal

0x41c3,	// (0x0001176a) level_1_battery

0x41d0,	// (0x00011777) level_2_battery

0x41dd,	// (0x00011784) level_3_battery

0x41ea,	// (0x00011791) level_4_battery

0x41f7,	// (0x0001179e) level_5_battery

0x4204,	// (0x000117ab) level_6_battery

0x4211,	// (0x000117b8) level_7_battery

0x4255,	// (0x000117fc) list_menu_pane_ParamLimits

0x4255,	// (0x000117fc) list_menu_pane

0x426b,	// (0x00011812) scroll_pane_cp25_ParamLimits

0x426b,	// (0x00011812) scroll_pane_cp25

0x4284,	// (0x0001182b) list_double2_graphic_pane_cp2_ParamLimits

0x4284,	// (0x0001182b) list_double2_graphic_pane_cp2

0x4284,	// (0x0001182b) list_double2_large_graphic_pane_cp2_ParamLimits

0x4284,	// (0x0001182b) list_double2_large_graphic_pane_cp2

0x4284,	// (0x0001182b) list_double2_pane_cp2_ParamLimits

0x4284,	// (0x0001182b) list_double2_pane_cp2

0x4284,	// (0x0001182b) list_double_graphic_pane_cp2_ParamLimits

0x4284,	// (0x0001182b) list_double_graphic_pane_cp2

0x4284,	// (0x0001182b) list_double_large_graphic_pane_cp2_ParamLimits

0x4284,	// (0x0001182b) list_double_large_graphic_pane_cp2

0x4284,	// (0x0001182b) list_double_number_pane_cp2_ParamLimits

0x4284,	// (0x0001182b) list_double_number_pane_cp2

0x4284,	// (0x0001182b) list_double_pane_cp2_ParamLimits

0x4284,	// (0x0001182b) list_double_pane_cp2

0x885b,	// (0x00015e02) list_single_2graphic_pane_cp2_ParamLimits

0x885b,	// (0x00015e02) list_single_2graphic_pane_cp2

0x885b,	// (0x00015e02) list_single_graphic_heading_pane_cp2_ParamLimits

0x885b,	// (0x00015e02) list_single_graphic_heading_pane_cp2

0x885b,	// (0x00015e02) list_single_graphic_pane_cp2_ParamLimits

0x885b,	// (0x00015e02) list_single_graphic_pane_cp2

0x885b,	// (0x00015e02) list_single_heading_pane_cp2_ParamLimits

0x885b,	// (0x00015e02) list_single_heading_pane_cp2

0x4294,	// (0x0001183b) list_single_large_graphic_pane_cp2_ParamLimits

0x4294,	// (0x0001183b) list_single_large_graphic_pane_cp2

0x885b,	// (0x00015e02) list_single_number_heading_pane_cp2_ParamLimits

0x885b,	// (0x00015e02) list_single_number_heading_pane_cp2

0x885b,	// (0x00015e02) list_single_number_pane_cp2_ParamLimits

0x885b,	// (0x00015e02) list_single_number_pane_cp2

0x8871,	// (0x00015e18) list_single_pane_cp2_ParamLimits

0x8871,	// (0x00015e18) list_single_pane_cp2

0x4309,	// (0x000118b0) bg_popup_sub_pane_cp22

0x5bb5,	// (0x0001315c) popup_side_volume_key_window_g1

0x5bd9,	// (0x00013180) popup_side_volume_key_window_t1

0x5bf5,	// (0x0001319c) volume_small_pane_cp1

0x3781,	// (0x00010d28) bg_popup_sub_pane_cp24_ParamLimits

0x3781,	// (0x00010d28) bg_popup_sub_pane_cp24

0x4339,	// (0x000118e0) fep_china_uni_candidate_pane_ParamLimits

0x4339,	// (0x000118e0) fep_china_uni_candidate_pane

0x434d,	// (0x000118f4) fep_china_uni_entry_pane

0x435d,	// (0x00011904) popup_fep_china_uni_window_g1

0x88e2,	// (0x00015e89) fep_china_uni_entry_pane_g1

0x88ea,	// (0x00015e91) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x0001cc95) fep_china_uni_entry_pane_g

0x4379,	// (0x00011920) fep_entry_item_pane

0x4383,	// (0x0001192a) fep_candidate_item_pane

0x88f2,	// (0x00015e99) fep_china_uni_candidate_pane_g1

0x439f,	// (0x00011946) fep_china_uni_candidate_pane_g2

0x43a7,	// (0x0001194e) fep_china_uni_candidate_pane_g3

0x88fa,	// (0x00015ea1) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x0001cc9a) fep_china_uni_candidate_pane_g

0x36e9,	// (0x00010c90) fep_entry_item_pane_g1

0x43af,	// (0x00011956) fep_entry_item_pane_t1_ParamLimits

0x43af,	// (0x00011956) fep_entry_item_pane_t1

0x43c5,	// (0x0001196c) fep_candidate_item_pane_t1_ParamLimits

0x43c5,	// (0x0001196c) fep_candidate_item_pane_t1

0x43da,	// (0x00011981) fep_candidate_item_pane_t2_ParamLimits

0x43da,	// (0x00011981) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x0001cca3) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x0001cca3) fep_candidate_item_pane_t

0x378f,	// (0x00010d36) list_highlight_pane_cp31_ParamLimits

0x378f,	// (0x00010d36) list_highlight_pane_cp31

0x43ec,	// (0x00011993) level_1_signal_lsc

0x43f5,	// (0x0001199c) level_2_signal_lsc

0x43fe,	// (0x000119a5) level_3_signal_lsc

0x4407,	// (0x000119ae) level_4_signal_lsc

0x4410,	// (0x000119b7) level_5_signal_lsc

0x4419,	// (0x000119c0) level_6_signal_lsc

0x4422,	// (0x000119c9) level_7_signal_lsc

0x4422,	// (0x000119c9) level_1_battery_lsc

0x442b,	// (0x000119d2) level_2_battery_lsc

0x4434,	// (0x000119db) level_3_battery_lsc

0x443d,	// (0x000119e4) level_4_battery_lsc

0x4446,	// (0x000119ed) level_5_battery_lsc

0x444f,	// (0x000119f6) level_6_battery_lsc

0x43ec,	// (0x00011993) level_7_battery_lsc

0x4458,	// (0x000119ff) scroll_handle_focus_pane_g1

0x4461,	// (0x00011a08) scroll_handle_focus_pane_g2

0x446a,	// (0x00011a11) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x0001cca8) scroll_handle_focus_pane_g

0x8902,	// (0x00015ea9) list_single_2graphic_pane_g1_ParamLimits

0x8902,	// (0x00015ea9) list_single_2graphic_pane_g1

0x8160,	// (0x00015707) list_single_2graphic_pane_g2_ParamLimits

0x8160,	// (0x00015707) list_single_2graphic_pane_g2

0x80e6,	// (0x0001568d) list_single_2graphic_pane_g3_ParamLimits

0x80e6,	// (0x0001568d) list_single_2graphic_pane_g3

0x890e,	// (0x00015eb5) list_single_2graphic_pane_g4_ParamLimits

0x890e,	// (0x00015eb5) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x0001ccaf) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x0001ccaf) list_single_2graphic_pane_g

0x891f,	// (0x00015ec6) list_single_2graphic_pane_t1_ParamLimits

0x891f,	// (0x00015ec6) list_single_2graphic_pane_t1

0x894d,	// (0x00015ef4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x894d,	// (0x00015ef4) list_double2_graphic_large_graphic_pane_g1

0x81cb,	// (0x00015772) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x81cb,	// (0x00015772) list_double2_graphic_large_graphic_pane_g2

0x81dc,	// (0x00015783) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x81dc,	// (0x00015783) list_double2_graphic_large_graphic_pane_g3

0x895d,	// (0x00015f04) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x895d,	// (0x00015f04) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x0001ccb8) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x0001ccb8) list_double2_graphic_large_graphic_pane_g

0x8969,	// (0x00015f10) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8969,	// (0x00015f10) list_double2_graphic_large_graphic_pane_t1

0x897f,	// (0x00015f26) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x897f,	// (0x00015f26) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x0001ccc1) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x0001ccc1) list_double2_graphic_large_graphic_pane_t

0x8a22,	// (0x00015fc9) popup_fast_swap_window_ParamLimits

0x8a22,	// (0x00015fc9) popup_fast_swap_window

0x8a3e,	// (0x00015fe5) popup_side_volume_key_window

0x4661,	// (0x00011c08) stacon_top_pane

0x466b,	// (0x00011c12) status_pane_ParamLimits

0x466b,	// (0x00011c12) status_pane

0x36df,	// (0x00010c86) status_small_pane

0x3713,	// (0x00010cba) control_pane

0x3713,	// (0x00010cba) stacon_bottom_pane

0x3b71,	// (0x00011118) scroll_pane_cp121

0x3b68,	// (0x0001110f) set_content_pane

0x8991,	// (0x00015f38) bg_active_tab_pane_g1_cp1

0x899a,	// (0x00015f41) bg_active_tab_pane_g2_cp1

0x89a3,	// (0x00015f4a) bg_active_tab_pane_g3_cp1

0x8991,	// (0x00015f38) bg_passive_tab_pane_g1_cp1

0x899a,	// (0x00015f41) bg_passive_tab_pane_g2_cp1

0x89a3,	// (0x00015f4a) bg_passive_tab_pane_g3_cp1

0x89ac,	// (0x00015f53) bg_active_tab_pane_g1_cp2

0x899a,	// (0x00015f41) bg_active_tab_pane_g2_cp2

0x89b5,	// (0x00015f5c) bg_active_tab_pane_g3_cp2

0x89ac,	// (0x00015f53) bg_passive_tab_pane_g1_cp2

0x899a,	// (0x00015f41) bg_passive_tab_pane_g2_cp2

0x89b5,	// (0x00015f5c) bg_passive_tab_pane_g3_cp2

0x89be,	// (0x00015f65) bg_active_tab_pane_g1_cp3

0x899a,	// (0x00015f41) bg_active_tab_pane_g2_cp3

0x89c7,	// (0x00015f6e) bg_active_tab_pane_g3_cp3

0x89be,	// (0x00015f65) bg_passive_tab_pane_g1_cp3

0x899a,	// (0x00015f41) bg_passive_tab_pane_g2_cp3

0x89c7,	// (0x00015f6e) bg_passive_tab_pane_g3_cp3

0x89d0,	// (0x00015f77) bg_active_tab_pane_g1_cp4

0x899a,	// (0x00015f41) bg_active_tab_pane_g2_cp4

0x89db,	// (0x00015f82) bg_active_tab_pane_g3_cp4

0x89d0,	// (0x00015f77) bg_passive_tab_pane_g1_cp4

0x899a,	// (0x00015f41) bg_passive_tab_pane_g2_cp4

0x89db,	// (0x00015f82) bg_passive_tab_pane_g3_cp4

0x89e6,	// (0x00015f8d) bg_active_tab_pane_g1_cp5

0x899a,	// (0x00015f41) bg_active_tab_pane_g2_cp5

0x89ef,	// (0x00015f96) bg_active_tab_pane_g3_cp5

0x89e6,	// (0x00015f8d) bg_passive_tab_pane_g1_cp5

0x899a,	// (0x00015f41) bg_passive_tab_pane_g2_cp5

0x89ef,	// (0x00015f96) bg_passive_tab_pane_g3_cp5

0x89f8,	// (0x00015f9f) list_set_graphic_pane_ParamLimits

0x89f8,	// (0x00015f9f) list_set_graphic_pane

0x3713,	// (0x00010cba) bg_set_opt_pane_cp4

0x45f2,	// (0x00011b99) list_set_graphic_pane_g1_ParamLimits

0x45f2,	// (0x00011b99) list_set_graphic_pane_g1

0x45fe,	// (0x00011ba5) list_set_graphic_pane_g2_ParamLimits

0x45fe,	// (0x00011ba5) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x0001ccc6) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x0001ccc6) list_set_graphic_pane_g

0x0009,

0xfab7,	// (0x0001d05e) volume_small_pane_cp_g

0x8a16,	// (0x00015fbd) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a16,	// (0x00015fbd) list_double2_large_graphic_pane_g1_cp2

0x4620,	// (0x00011bc7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4620,	// (0x00011bc7) list_double2_large_graphic_pane_g2_cp2

0x4631,	// (0x00011bd8) list_double2_large_graphic_pane_g3_cp2

0x4639,	// (0x00011be0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4639,	// (0x00011be0) list_double2_large_graphic_pane_t1_cp2

0x464f,	// (0x00011bf6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x464f,	// (0x00011bf6) list_double2_large_graphic_pane_t2_cp2

0xa30d,	// (0x000178b4) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa30d,	// (0x000178b4) list_double_large_graphic_pane_g1_cp2

0xa31e,	// (0x000178c5) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa31e,	// (0x000178c5) list_double_large_graphic_pane_g2_cp2

0x4787,	// (0x00011d2e) list_double_large_graphic_pane_g3_cp2

0xa32f,	// (0x000178d6) list_double_large_graphic_pane_g4_cp

0xa337,	// (0x000178de) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa337,	// (0x000178de) list_double_large_graphic_pane_t1_cp2

0xa34e,	// (0x000178f5) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa34e,	// (0x000178f5) list_double_large_graphic_pane_t2_cp2

0x4679,	// (0x00011c20) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4679,	// (0x00011c20) list_double2_graphic_pane_g1_cp2

0x4687,	// (0x00011c2e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4687,	// (0x00011c2e) list_double2_graphic_pane_g2_cp2

0x4698,	// (0x00011c3f) list_double2_graphic_pane_g3_cp2

0x46a2,	// (0x00011c49) list_double2_graphic_pane_t1_cp2_ParamLimits

0x46a2,	// (0x00011c49) list_double2_graphic_pane_t1_cp2

0x46b8,	// (0x00011c5f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x46b8,	// (0x00011c5f) list_double2_graphic_pane_t2_cp2

0x4393,	// (0x0001193a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4393,	// (0x0001193a) list_single_number_heading_pane_g1_cp2

0x46ca,	// (0x00011c71) list_single_number_heading_pane_g2_cp2

0x46d2,	// (0x00011c79) list_single_number_heading_pane_t1_cp2_ParamLimits

0x46d2,	// (0x00011c79) list_single_number_heading_pane_t1_cp2

0x46e8,	// (0x00011c8f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x46e8,	// (0x00011c8f) list_single_number_heading_pane_t2_cp2

0x46fa,	// (0x00011ca1) list_single_number_heading_pane_t3_cp2_ParamLimits

0x46fa,	// (0x00011ca1) list_single_number_heading_pane_t3_cp2

0x4393,	// (0x0001193a) list_single_heading_pane_g1_cp2_ParamLimits

0x4393,	// (0x0001193a) list_single_heading_pane_g1_cp2

0x46ca,	// (0x00011c71) list_single_heading_pane_g2_cp2

0x46d2,	// (0x00011c79) list_single_heading_pane_t1_cp2_ParamLimits

0x46d2,	// (0x00011c79) list_single_heading_pane_t1_cp2

0xa117,	// (0x000176be) list_single_heading_pane_t2_cp2_ParamLimits

0xa117,	// (0x000176be) list_single_heading_pane_t2_cp2

0xa05f,	// (0x00017606) list_double_graphic_pane_g1_cp2_ParamLimits

0xa05f,	// (0x00017606) list_double_graphic_pane_g1_cp2

0xa06b,	// (0x00017612) list_double_graphic_pane_g2_cp2_ParamLimits

0xa06b,	// (0x00017612) list_double_graphic_pane_g2_cp2

0xa07a,	// (0x00017621) list_double_graphic_pane_g3_cp2

0xa082,	// (0x00017629) list_double_graphic_pane_t1_cp2_ParamLimits

0xa082,	// (0x00017629) list_double_graphic_pane_t1_cp2

0xa098,	// (0x0001763f) list_double_graphic_pane_t2_cp2_ParamLimits

0xa098,	// (0x0001763f) list_double_graphic_pane_t2_cp2

0x477b,	// (0x00011d22) list_double_number_pane_g1_cp2_ParamLimits

0x477b,	// (0x00011d22) list_double_number_pane_g1_cp2

0x4787,	// (0x00011d2e) list_double_number_pane_g2_cp2

0xa023,	// (0x000175ca) list_double_number_pane_t1_cp2_ParamLimits

0xa023,	// (0x000175ca) list_double_number_pane_t1_cp2

0xa037,	// (0x000175de) list_double_number_pane_t2_cp2_ParamLimits

0xa037,	// (0x000175de) list_double_number_pane_t2_cp2

0xa04d,	// (0x000175f4) list_double_number_pane_t3_cp2_ParamLimits

0xa04d,	// (0x000175f4) list_double_number_pane_t3_cp2

0x9f0c,	// (0x000174b3) list_single_graphic_pane_g1_cp2_ParamLimits

0x9f0c,	// (0x000174b3) list_single_graphic_pane_g1_cp2

0x476f,	// (0x00011d16) list_single_graphic_pane_g2_cp2_ParamLimits

0x476f,	// (0x00011d16) list_single_graphic_pane_g2_cp2

0x47e0,	// (0x00011d87) list_single_graphic_pane_g3_cp2

0x9ee2,	// (0x00017489) list_single_graphic_pane_t1_cp2_ParamLimits

0x9ee2,	// (0x00017489) list_single_graphic_pane_t1_cp2

0x476f,	// (0x00011d16) list_single_number_pane_g1_cp2_ParamLimits

0x476f,	// (0x00011d16) list_single_number_pane_g1_cp2

0x47e0,	// (0x00011d87) list_single_number_pane_g2_cp2

0x9ee2,	// (0x00017489) list_single_number_pane_t1_cp2_ParamLimits

0x9ee2,	// (0x00017489) list_single_number_pane_t1_cp2

0x9ef8,	// (0x0001749f) list_single_number_pane_t2_cp2_ParamLimits

0x9ef8,	// (0x0001749f) list_single_number_pane_t2_cp2

0x4620,	// (0x00011bc7) list_double2_pane_g1_cp2_ParamLimits

0x4620,	// (0x00011bc7) list_double2_pane_g1_cp2

0x4631,	// (0x00011bd8) list_double2_pane_g2_cp2

0x4747,	// (0x00011cee) list_double2_pane_t1_cp2_ParamLimits

0x4747,	// (0x00011cee) list_double2_pane_t1_cp2

0x475d,	// (0x00011d04) list_double2_pane_t2_cp2_ParamLimits

0x475d,	// (0x00011d04) list_double2_pane_t2_cp2

0x477b,	// (0x00011d22) list_double_pane_g1_cp2_ParamLimits

0x477b,	// (0x00011d22) list_double_pane_g1_cp2

0x4787,	// (0x00011d2e) list_double_pane_g2_cp2

0x478f,	// (0x00011d36) list_double_pane_t1_cp2_ParamLimits

0x478f,	// (0x00011d36) list_double_pane_t1_cp2

0x47a5,	// (0x00011d4c) list_double_pane_t2_cp2_ParamLimits

0x47a5,	// (0x00011d4c) list_double_pane_t2_cp2

0x8a58,	// (0x00015fff) list_single_pane_cp2_g3

0x476f,	// (0x00011d16) list_single_pane_g1_cp2_ParamLimits

0x476f,	// (0x00011d16) list_single_pane_g1_cp2

0x47e0,	// (0x00011d87) list_single_pane_g2_cp2

0x47e8,	// (0x00011d8f) list_single_pane_t1_cp2_ParamLimits

0x47e8,	// (0x00011d8f) list_single_pane_t1_cp2

0x8a60,	// (0x00016007) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a60,	// (0x00016007) list_single_large_graphic_pane_g1_cp2

0x4800,	// (0x00011da7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4800,	// (0x00011da7) list_single_large_graphic_pane_g2_cp2

0x480c,	// (0x00011db3) list_single_large_graphic_pane_g3_cp2

0x8a6c,	// (0x00016013) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8a6c,	// (0x00016013) list_single_large_graphic_pane_g4_cp1

0x4814,	// (0x00011dbb) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4814,	// (0x00011dbb) list_single_large_graphic_pane_t1_cp2

0x9eae,	// (0x00017455) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9eae,	// (0x00017455) list_single_graphic_heading_pane_g1_cp2

0x9e7b,	// (0x00017422) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9e7b,	// (0x00017422) list_single_graphic_heading_pane_g4_cp2

0x47e0,	// (0x00011d87) list_single_graphic_heading_pane_g5_cp2

0x9eba,	// (0x00017461) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9eba,	// (0x00017461) list_single_graphic_heading_pane_t1_cp2

0x9ed0,	// (0x00017477) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9ed0,	// (0x00017477) list_single_graphic_heading_pane_t2_cp2

0x9e6f,	// (0x00017416) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9e6f,	// (0x00017416) list_single_2graphic_pane_g1_cp2

0x9e7b,	// (0x00017422) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9e7b,	// (0x00017422) list_single_2graphic_pane_g2_cp2

0x47e0,	// (0x00011d87) list_single_2graphic_pane_g3_cp2

0x9e8c,	// (0x00017433) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9e8c,	// (0x00017433) list_single_2graphic_pane_g4_cp2

0x9e98,	// (0x0001743f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9e98,	// (0x0001743f) list_single_2graphic_pane_t1_cp2

0x36e9,	// (0x00010c90) list_highlight_pane_g10_cp1

0x9a57,	// (0x00016ffe) list_highlight_pane_g1_cp1

0x9a5f,	// (0x00017006) list_highlight_pane_g2_cp1

0x9a67,	// (0x0001700e) list_highlight_pane_g3_cp1

0x9a6f,	// (0x00017016) list_highlight_pane_g4_cp1

0x9a77,	// (0x0001701e) list_highlight_pane_g5_cp1

0x9a7f,	// (0x00017026) list_highlight_pane_g6_cp1

0x9a87,	// (0x0001702e) list_highlight_pane_g7_cp1

0x9a8f,	// (0x00017036) list_highlight_pane_g8_cp1

0x9a97,	// (0x0001703e) list_highlight_pane_g9_cp1

0x997f,	// (0x00016f26) form_field_slider_pane_t3

0x998d,	// (0x00016f34) form_field_slider_pane_t4

0x999b,	// (0x00016f42) slider_form_pane_ParamLimits

0x999b,	// (0x00016f42) slider_form_pane

0x3713,	// (0x00010cba) control_abbreviations

0x3713,	// (0x00010cba) control_conventions

0x3713,	// (0x00010cba) control_definitions

0x3713,	// (0x00010cba) format_table_attribute

0xa161,	// (0x00017708) bg_popup_preview_window_pane_g9

0x3713,	// (0x00010cba) format_table_data2

0x3713,	// (0x00010cba) format_table_data3

0x3713,	// (0x00010cba) format_table_data_example

0x0008,

0x3713,	// (0x00010cba) intro_purpose

0xf8bb,	// (0x0001ce62) bg_popup_preview_window_pane_g

0x3713,	// (0x00010cba) texts_category

0x3713,	// (0x00010cba) texts_graphics

0x482a,	// (0x00011dd1) text_digital

0x4839,	// (0x00011de0) text_primary

0x4848,	// (0x00011def) text_primary_small

0x4857,	// (0x00011dfe) text_secondary

0x4866,	// (0x00011e0d) text_title

0xa984,	// (0x00017f2b) bg_passive_tab_pane_g1_cp3_srt

0x899a,	// (0x00015f41) bg_passive_tab_pane_g2_cp3_srt

0xa98d,	// (0x00017f34) bg_passive_tab_pane_g3_cp3_srt

0x378f,	// (0x00010d36) bg_active_tab_pane_cp3_srt_ParamLimits

0x378f,	// (0x00010d36) bg_active_tab_pane_cp3_srt

0xa996,	// (0x00017f3d) tabs_4_active_pane_srt_g1

0xa99e,	// (0x00017f45) tabs_4_active_pane_srt_t1_ParamLimits

0xa99e,	// (0x00017f45) tabs_4_active_pane_srt_t1

0xa984,	// (0x00017f2b) bg_active_tab_pane_g1_cp3_copy1

0x899a,	// (0x00015f41) bg_active_tab_pane_g2_cp3_copy1

0xa98d,	// (0x00017f34) bg_active_tab_pane_g3_cp3_copy1

0x378f,	// (0x00010d36) tabs_2_long_active_pane_srt_ParamLimits

0x378f,	// (0x00010d36) tabs_2_long_active_pane_srt

0x378f,	// (0x00010d36) tabs_2_long_passive_pane_srt_ParamLimits

0x378f,	// (0x00010d36) tabs_2_long_passive_pane_srt

0x86de,	// (0x00015c85) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86de,	// (0x00015c85) bg_passive_tab_pane_cp4_srt

0xa594,	// (0x00017b3b) bg_passive_tab_pane_g1_cp4_srt

0x899a,	// (0x00015f41) bg_passive_tab_pane_g2_cp4_srt

0xa59d,	// (0x00017b44) bg_passive_tab_pane_g3_cp4_srt

0x86bd,	// (0x00015c64) bg_active_tab_pane_cp4_srt_ParamLimits

0x86bd,	// (0x00015c64) bg_active_tab_pane_cp4_srt

0xa5a6,	// (0x00017b4d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa5a6,	// (0x00017b4d) tabs_2_long_active_pane_srt_t1

0xa594,	// (0x00017b3b) bg_active_tab_pane_g1_cp4_srt

0x899a,	// (0x00015f41) bg_active_tab_pane_g2_cp4_srt

0xa59d,	// (0x00017b44) bg_active_tab_pane_g3_cp4_srt

0x3781,	// (0x00010d28) tabs_3_long_active_pane_srt_ParamLimits

0x3781,	// (0x00010d28) tabs_3_long_active_pane_srt

0x3781,	// (0x00010d28) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3781,	// (0x00010d28) tabs_3_long_passive_pane_cp_srt

0x3781,	// (0x00010d28) tabs_3_long_passive_pane_srt_ParamLimits

0x3781,	// (0x00010d28) tabs_3_long_passive_pane_srt

0x86de,	// (0x00015c85) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86de,	// (0x00015c85) bg_passive_tab_pane_cp5_srt

0x89e6,	// (0x00015f8d) bg_passive_tab_pane_g1_cp5_srt

0x899a,	// (0x00015f41) bg_passive_tab_pane_g2_cp5_srt

0x89ef,	// (0x00015f96) bg_passive_tab_pane_g3_cp5_srt

0x86bd,	// (0x00015c64) bg_active_tab_pane_cp5_srt_ParamLimits

0x86bd,	// (0x00015c64) bg_active_tab_pane_cp5_srt

0xa582,	// (0x00017b29) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa582,	// (0x00017b29) tabs_3_long_active_pane_srt_t1

0x89e6,	// (0x00015f8d) bg_active_tab_pane_g1_cp5_srt

0x899a,	// (0x00015f41) bg_active_tab_pane_g2_cp5_srt

0x89ef,	// (0x00015f96) bg_active_tab_pane_g3_cp5_srt

0xa574,	// (0x00017b1b) navi_text_pane_srt_t1

0xa56c,	// (0x00017b13) navi_icon_pane_srt_g1

0x49fa,	// (0x00011fa1) midp_editing_number_pane_srt

0x4875,	// (0x00011e1c) midp_ticker_pane_srt

0x4a02,	// (0x00011fa9) midp_ticker_pane_srt_g1

0x4a0a,	// (0x00011fb1) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x0001cce5) midp_ticker_pane_srt_g

0x4a12,	// (0x00011fb9) midp_ticker_pane_srt_t1

0xa55d,	// (0x00017b04) midp_editing_number_pane_t1_copy1

0x8a86,	// (0x0001602d) listscroll_midp_pane

0x8a86,	// (0x0001602d) midp_form_pane

0x8af8,	// (0x0001609f) midp_info_popup_window_ParamLimits

0x8af8,	// (0x0001609f) midp_info_popup_window

0x3cfc,	// (0x000112a3) bg_popup_sub_pane_cp50_ParamLimits

0x3cfc,	// (0x000112a3) bg_popup_sub_pane_cp50

0x968b,	// (0x00016c32) listscroll_midp_info_pane_ParamLimits

0x968b,	// (0x00016c32) listscroll_midp_info_pane

0x966b,	// (0x00016c12) listscroll_form_midp_pane_ParamLimits

0x966b,	// (0x00016c12) listscroll_form_midp_pane

0x9677,	// (0x00016c1e) scroll_bar_cp050

0x964b,	// (0x00016bf2) list_midp_pane

0xb723,	// (0x00018cca) signal_pane_g2_cp

0x9585,	// (0x00016b2c) listscroll_midp_info_pane_t1_ParamLimits

0x9585,	// (0x00016b2c) listscroll_midp_info_pane_t1

0x959d,	// (0x00016b44) listscroll_midp_info_pane_t2_ParamLimits

0x959d,	// (0x00016b44) listscroll_midp_info_pane_t2

0x95db,	// (0x00016b82) listscroll_midp_info_pane_t3_ParamLimits

0x95db,	// (0x00016b82) listscroll_midp_info_pane_t3

0x9615,	// (0x00016bbc) listscroll_midp_info_pane_t4_ParamLimits

0x9615,	// (0x00016bbc) listscroll_midp_info_pane_t4

0x0003,

0xf7f6,	// (0x0001cd9d) listscroll_midp_info_pane_t_ParamLimits

0xf7f6,	// (0x0001cd9d) listscroll_midp_info_pane_t

0x3d51,	// (0x000112f8) scroll_pane_cp21

0x9525,	// (0x00016acc) form_midp_field_choice_group_pane

0x952e,	// (0x00016ad5) form_midp_field_text_pane

0x956b,	// (0x00016b12) form_midp_field_time_pane

0x9573,	// (0x00016b1a) form_midp_gauge_slider_pane

0x957c,	// (0x00016b23) form_midp_gauge_wait_pane

0x3713,	// (0x00010cba) form_midp_image_pane

0x94f3,	// (0x00016a9a) list_single_midp_pane_ParamLimits

0x94f3,	// (0x00016a9a) list_single_midp_pane

0x94a8,	// (0x00016a4f) form_midp_field_text_pane_t1

0x9263,	// (0x0001680a) input_focus_pane_cp050

0x94e2,	// (0x00016a89) list_midp_form_text_pane

0x9477,	// (0x00016a1e) form_midp_field_choice_group_pane_t1

0x9485,	// (0x00016a2c) input_focus_pane_cp051

0x9499,	// (0x00016a40) list_midp_choice_pane

0x3713,	// (0x00010cba) status_idle_pane

0x945b,	// (0x00016a02) form_midp_field_time_pane_t1

0x36e9,	// (0x00010c90) wait_anim_pane_g2_copy1

0x9469,	// (0x00016a10) form_midp_field_time_pane_t2

0x0001,

0x48d5,	// (0x00011e7c) aid_navinavi_width_2_pane

0xf7f1,	// (0x0001cd98) form_midp_field_time_pane_t

0x3713,	// (0x00010cba) input_focus_pane_cp052

0x3713,	// (0x00010cba) bg_input_focus_pane_cp040

0x941b,	// (0x000169c2) form_midp_gauge_slider_pane_t1

0x9429,	// (0x000169d0) form_midp_gauge_slider_pane_t2

0x9437,	// (0x000169de) form_midp_gauge_slider_pane_t3

0x9445,	// (0x000169ec) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e8,	// (0x0001cd8f) form_midp_gauge_slider_pane_t

0x9453,	// (0x000169fa) form_midp_slider_pane

0x378f,	// (0x00010d36) bg_input_focus_pane_cp041_ParamLimits

0x378f,	// (0x00010d36) bg_input_focus_pane_cp041

0x93e8,	// (0x0001698f) form_midp_gauge_wait_pane_t1_ParamLimits

0x93e8,	// (0x0001698f) form_midp_gauge_wait_pane_t1

0x93fa,	// (0x000169a1) form_midp_gauge_wait_pane_t2_ParamLimits

0x93fa,	// (0x000169a1) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e3,	// (0x0001cd8a) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e3,	// (0x0001cd8a) form_midp_gauge_wait_pane_t

0x940c,	// (0x000169b3) form_midp_wait_pane_ParamLimits

0x940c,	// (0x000169b3) form_midp_wait_pane

0x93b2,	// (0x00016959) form_midp_image_pane_g1

0x93bb,	// (0x00016962) form_midp_image_pane_t1

0x93ca,	// (0x00016971) form_midp_image_pane_t2

0x93d9,	// (0x00016980) form_midp_image_pane_t3

0x0002,

0xf7dc,	// (0x0001cd83) form_midp_image_pane_t

0x939a,	// (0x00016941) list_single_midp_pane_g1

0x93a3,	// (0x0001694a) list_single_midp_pane_t1

0x9371,	// (0x00016918) list_midp_form_item_pane_ParamLimits

0x9371,	// (0x00016918) list_midp_form_item_pane

0x487d,	// (0x00011e24) list_midp_form_item_pane_t1

0x488c,	// (0x00011e33) midp_ticker_pane_g1

0x4898,	// (0x00011e3f) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x0001cccb) midp_ticker_pane_g

0x48a4,	// (0x00011e4b) midp_ticker_pane_t1

0xa7dd,	// (0x00017d84) midp_editing_number_pane_t1

0xa7bb,	// (0x00017d62) midp_editing_number_pane

0xa7ca,	// (0x00017d71) midp_ticker_pane

0xa53b,	// (0x00017ae2) ai_message_heading_pane

0x3713,	// (0x00010cba) bg_popup_window_pane_cp14

0xa543,	// (0x00017aea) listscroll_ai_message_pane

0xa4c5,	// (0x00017a6c) ai_message_heading_pane_g1_ParamLimits

0xa4c5,	// (0x00017a6c) ai_message_heading_pane_g1

0xa4d1,	// (0x00017a78) ai_message_heading_pane_g2_ParamLimits

0xa4d1,	// (0x00017a78) ai_message_heading_pane_g2

0xa4dd,	// (0x00017a84) ai_message_heading_pane_g3_ParamLimits

0xa4dd,	// (0x00017a84) ai_message_heading_pane_g3

0xa4e9,	// (0x00017a90) ai_message_heading_pane_g4_ParamLimits

0xa4e9,	// (0x00017a90) ai_message_heading_pane_g4

0x0003,

0xf91d,	// (0x0001cec4) ai_message_heading_pane_g_ParamLimits

0xf91d,	// (0x0001cec4) ai_message_heading_pane_g

0xa4f5,	// (0x00017a9c) ai_message_heading_pane_t1_ParamLimits

0xa4f5,	// (0x00017a9c) ai_message_heading_pane_t1

0xa50f,	// (0x00017ab6) ai_message_heading_pane_t2_ParamLimits

0xa50f,	// (0x00017ab6) ai_message_heading_pane_t2

0x0001,

0xf926,	// (0x0001cecd) ai_message_heading_pane_t_ParamLimits

0xf926,	// (0x0001cecd) ai_message_heading_pane_t

0xa521,	// (0x00017ac8) bg_popup_heading_pane_cp1_ParamLimits

0xa521,	// (0x00017ac8) bg_popup_heading_pane_cp1

0xa4b3,	// (0x00017a5a) list_ai_message_pane_ParamLimits

0xa4b3,	// (0x00017a5a) list_ai_message_pane

0x3d51,	// (0x000112f8) scroll_pane_cp10

0xa44f,	// (0x000179f6) list_ai_message_pane_g1

0xa457,	// (0x000179fe) list_ai_message_pane_g2

0x0001,

0xf8fa,	// (0x0001cea1) list_ai_message_pane_g

0xa45f,	// (0x00017a06) list_ai_message_pane_t1_ParamLimits

0xa45f,	// (0x00017a06) list_ai_message_pane_t1

0xa474,	// (0x00017a1b) list_ai_message_pane_t2_ParamLimits

0xa474,	// (0x00017a1b) list_ai_message_pane_t2

0xa489,	// (0x00017a30) list_ai_message_pane_t3_ParamLimits

0xa489,	// (0x00017a30) list_ai_message_pane_t3

0xa49e,	// (0x00017a45) list_ai_message_pane_t4_ParamLimits

0xa49e,	// (0x00017a45) list_ai_message_pane_t4

0x0003,

0xf8ff,	// (0x0001cea6) list_ai_message_pane_t_ParamLimits

0xf8ff,	// (0x0001cea6) list_ai_message_pane_t

0xa43a,	// (0x000179e1) cell_ai_soft_ind_pane_ParamLimits

0xa43a,	// (0x000179e1) cell_ai_soft_ind_pane

0x48b6,	// (0x00011e5d) cell_ai_soft_ind_pane_g1_ParamLimits

0x48b6,	// (0x00011e5d) cell_ai_soft_ind_pane_g1

0x3713,	// (0x00010cba) grid_highlight_cp1

0x48c3,	// (0x00011e6a) text_secondary_cp56_ParamLimits

0x48c3,	// (0x00011e6a) text_secondary_cp56

0xa40f,	// (0x000179b6) example_general_pane_ParamLimits

0xa40f,	// (0x000179b6) example_general_pane

0xa41b,	// (0x000179c2) example_parent_pane_g1_ParamLimits

0xa41b,	// (0x000179c2) example_parent_pane_g1

0xa427,	// (0x000179ce) example_parent_pane_t1_ParamLimits

0xa427,	// (0x000179ce) example_parent_pane_t1

0x62fe,	// (0x000138a5) popup_preview_text_window_ParamLimits

0x62fe,	// (0x000138a5) popup_preview_text_window

0x47d8,	// (0x00011d7f) list_single_pane_cp2_g4

0x397b,	// (0x00010f22) bg_popup_preview_window_pane_ParamLimits

0x397b,	// (0x00010f22) bg_popup_preview_window_pane

0xa169,	// (0x00017710) popup_preview_text_window_t1_ParamLimits

0xa169,	// (0x00017710) popup_preview_text_window_t1

0xa187,	// (0x0001772e) popup_preview_text_window_t2_ParamLimits

0xa187,	// (0x0001772e) popup_preview_text_window_t2

0xa1d0,	// (0x00017777) popup_preview_text_window_t3_ParamLimits

0xa1d0,	// (0x00017777) popup_preview_text_window_t3

0xa215,	// (0x000177bc) popup_preview_text_window_t4_ParamLimits

0xa215,	// (0x000177bc) popup_preview_text_window_t4

0x0004,

0xf8ce,	// (0x0001ce75) popup_preview_text_window_t_ParamLimits

0xf8ce,	// (0x0001ce75) popup_preview_text_window_t

0xa293,	// (0x0001783a) scroll_pane_cp11

0x9143,	// (0x000166ea) bg_popup_preview_window_pane_g1

0xa129,	// (0x000176d0) bg_popup_preview_window_pane_g2

0xa131,	// (0x000176d8) bg_popup_preview_window_pane_g3

0xa139,	// (0x000176e0) bg_popup_preview_window_pane_g4

0xa141,	// (0x000176e8) bg_popup_preview_window_pane_g5

0xa149,	// (0x000176f0) bg_popup_preview_window_pane_g6

0xa151,	// (0x000176f8) bg_popup_preview_window_pane_g7

0xa159,	// (0x00017700) bg_popup_preview_window_pane_g8

0x54f9,	// (0x00012aa0) aid_popup_width_pane

0x62dc,	// (0x00013883) popup_midp_note_alarm_window_ParamLimits

0x62dc,	// (0x00013883) popup_midp_note_alarm_window

0x3ba5,	// (0x0001114c) data_form_pane_ParamLimits

0x84fe,	// (0x00015aa5) form_field_data_pane_g1

0x8508,	// (0x00015aaf) form_field_data_pane_t1_ParamLimits

0x3bb1,	// (0x00011158) input_focus_pane_ParamLimits

0x3bbf,	// (0x00011166) data_form_wide_pane_ParamLimits

0x3bd0,	// (0x00011177) form_field_data_wide_pane_g1

0x3bfc,	// (0x000111a3) form_field_data_wide_pane_t1_ParamLimits

0x3a53,	// (0x00010ffa) input_focus_pane_cp6_ParamLimits

0x8674,	// (0x00015c1b) input_popup_find_pane_g1_ParamLimits

0x8674,	// (0x00015c1b) input_popup_find_pane_g1

0x5a67,	// (0x0001300e) aid_navi_side_left_pane

0x5a7c,	// (0x00013023) aid_navi_side_right_pane

0x9b52,	// (0x000170f9) bg_popup_window_pane_cp30_ParamLimits

0x9b52,	// (0x000170f9) bg_popup_window_pane_cp30

0x9bcc,	// (0x00017173) popup_midp_note_alarm_window_g1_ParamLimits

0x9bcc,	// (0x00017173) popup_midp_note_alarm_window_g1

0x9bfc,	// (0x000171a3) popup_midp_note_alarm_window_t1_ParamLimits

0x9bfc,	// (0x000171a3) popup_midp_note_alarm_window_t1

0x9c9d,	// (0x00017244) popup_midp_note_alarm_window_t2_ParamLimits

0x9c9d,	// (0x00017244) popup_midp_note_alarm_window_t2

0x9d4b,	// (0x000172f2) popup_midp_note_alarm_window_t3_ParamLimits

0x9d4b,	// (0x000172f2) popup_midp_note_alarm_window_t3

0x9d73,	// (0x0001731a) popup_midp_note_alarm_window_t4_ParamLimits

0x9d73,	// (0x0001731a) popup_midp_note_alarm_window_t4

0x9d93,	// (0x0001733a) popup_midp_note_alarm_window_t5_ParamLimits

0x9d93,	// (0x0001733a) popup_midp_note_alarm_window_t5

0x000a,

0xf86b,	// (0x0001ce12) popup_midp_note_alarm_window_t_ParamLimits

0xf86b,	// (0x0001ce12) popup_midp_note_alarm_window_t

0x9e3f,	// (0x000173e6) wait_bar_pane_cp1_ParamLimits

0x9e3f,	// (0x000173e6) wait_bar_pane_cp1

0x3713,	// (0x00010cba) wait_anim_pane_copy1

0x3713,	// (0x00010cba) wait_border_pane_copy1

0x9848,	// (0x00016def) wait_border_pane_g1_copy1

0x3c16,	// (0x000111bd) form_field_popup_pane_g1

0x8520,	// (0x00015ac7) form_field_popup_pane_t1_ParamLimits

0x3bb1,	// (0x00011158) input_focus_pane_cp7_ParamLimits

0x3c1e,	// (0x000111c5) list_form_pane_ParamLimits

0x3c2a,	// (0x000111d1) form_field_popup_wide_pane_g1

0x3c32,	// (0x000111d9) form_field_popup_wide_pane_t1_ParamLimits

0x3bb1,	// (0x00011158) input_focus_pane_cp8_ParamLimits

0x3c47,	// (0x000111ee) list_form_wide_pane_ParamLimits

0xaa21,	// (0x00017fc8) aid_size_cell_graphic_pane

0x8594,	// (0x00015b3b) data_form_pane_t1_ParamLimits

0xa788,	// (0x00017d2f) data_form_wide_pane_t1_ParamLimits

0x8cdf,	// (0x00016286) bg_status_flat_pane

0x7ba6,	// (0x0001514d) title_pane_t1_ParamLimits

0x3749,	// (0x00010cf0) title_pane_t2_ParamLimits

0x376f,	// (0x00010d16) title_pane_t3_ParamLimits

0xf532,	// (0x0001cad9) title_pane_t_ParamLimits

0x41c3,	// (0x0001176a) level_1_signal_ParamLimits

0x41d0,	// (0x00011777) level_2_signal_ParamLimits

0x41dd,	// (0x00011784) level_3_signal_ParamLimits

0x41ea,	// (0x00011791) level_4_signal_ParamLimits

0x41f7,	// (0x0001179e) level_5_signal_ParamLimits

0x4204,	// (0x000117ab) level_6_signal_ParamLimits

0x4211,	// (0x000117b8) level_7_signal_ParamLimits

0x41c3,	// (0x0001176a) level_1_battery_ParamLimits

0x41d0,	// (0x00011777) level_2_battery_ParamLimits

0x41dd,	// (0x00011784) level_3_battery_ParamLimits

0x41ea,	// (0x00011791) level_4_battery_ParamLimits

0x41f7,	// (0x0001179e) level_5_battery_ParamLimits

0x4204,	// (0x000117ab) level_6_battery_ParamLimits

0x4211,	// (0x000117b8) level_7_battery_ParamLimits

0x9a57,	// (0x00016ffe) bg_status_flat_pane_g1

0x9a5f,	// (0x00017006) bg_status_flat_pane_g2

0x9a67,	// (0x0001700e) bg_status_flat_pane_g3

0x9a6f,	// (0x00017016) bg_status_flat_pane_g4

0x9a77,	// (0x0001701e) bg_status_flat_pane_g5

0x9a7f,	// (0x00017026) bg_status_flat_pane_g6

0x9a87,	// (0x0001702e) bg_status_flat_pane_g7

0x7c16,	// (0x000151bd) tabs_3_active_pane_t1_ParamLimits

0x7c16,	// (0x000151bd) tabs_3_passive_pane_t1_ParamLimits

0x7c30,	// (0x000151d7) tabs_4_active_pane_t1_ParamLimits

0x7c30,	// (0x000151d7) tabs_4_1_passive_pane_t1_ParamLimits

0x86ab,	// (0x00015c52) tabs_2_active_pane_t1_ParamLimits

0x86ab,	// (0x00015c52) tabs_2_passive_pane_t1_ParamLimits

0x86bd,	// (0x00015c64) bg_active_tab_pane_cp4_ParamLimits

0x86cb,	// (0x00015c72) tabs_2_long_active_pane_t1_ParamLimits

0x86de,	// (0x00015c85) bg_passive_tab_pane_cp4_ParamLimits

0x6621,	// (0x00013bc8) list_single_midp_graphic_pane_t1_ParamLimits

0x86bd,	// (0x00015c64) bg_active_tab_pane_cp5_ParamLimits

0x86ea,	// (0x00015c91) tabs_3_long_active_pane_t1_ParamLimits

0x86de,	// (0x00015c85) bg_passive_tab_pane_cp5_ParamLimits

0x6621,	// (0x00013bc8) list_single_midp_graphic_pane_t1

0x8cdf,	// (0x00016286) bg_status_flat_pane_ParamLimits

0x8da8,	// (0x0001634f) indicator_pane_cp2_ParamLimits

0x8da8,	// (0x0001634f) indicator_pane_cp2

0x8ed3,	// (0x0001647a) navi_pane_srt_ParamLimits

0x8ed3,	// (0x0001647a) navi_pane_srt

0x8ef7,	// (0x0001649e) popup_clock_digital_analogue_window_cp1

0x37ed,	// (0x00010d94) indicator_pane_t1

0x4875,	// (0x00011e1c) copy_highlight_pane

0x4875,	// (0x00011e1c) cursor_graphics_pane

0x4875,	// (0x00011e1c) graphic_within_text_pane

0x4875,	// (0x00011e1c) link_highlight_pane

0xa256,	// (0x000177fd) popup_preview_text_window_t5_ParamLimits

0xa256,	// (0x000177fd) popup_preview_text_window_t5

0x48dd,	// (0x00011e84) cursor_digital_pane

0x48dd,	// (0x00011e84) cursor_primary_pane

0x48ee,	// (0x00011e95) cursor_primary_small_pane

0x48f6,	// (0x00011e9d) cursor_secondary_pane

0x48fe,	// (0x00011ea5) cursor_title_pane

0x48dd,	// (0x00011e84) link_highlight_digital_pane

0x48e5,	// (0x00011e8c) link_highlight_primary_pane

0x48ee,	// (0x00011e95) link_highlight_primary_small_pane

0x48f6,	// (0x00011e9d) link_highlight_secondary_pane

0x48fe,	// (0x00011ea5) link_highlight_title_pane

0x48dd,	// (0x00011e84) copy_highlight_digital_pane

0x48dd,	// (0x00011e84) copy_highlight_primary_pane

0x48ee,	// (0x00011e95) copy_highlight_primary_small_pane

0x48f6,	// (0x00011e9d) copy_highlight_secondary_pane

0x48fe,	// (0x00011ea5) copy_highlight_title_pane

0x48f6,	// (0x00011e9d) graphic_text_digital_pane

0x9af5,	// (0x0001709c) graphic_text_primary_pane

0x9afe,	// (0x000170a5) graphic_text_primary_small_pane

0x48ee,	// (0x00011e95) graphic_text_secondary_pane

0x48dd,	// (0x00011e84) graphic_text_title_pane

0x8b50,	// (0x000160f7) cursor_primary_pane_g1

0x9ae7,	// (0x0001708e) cursor_text_primary_t1

0x9acf,	// (0x00017076) cursor_primary_small_pane_g1

0x9ad9,	// (0x00017080) cursor_text_primary_small_t1

0x9ab7,	// (0x0001705e) cursor_primary_small_pane_g1_copy1

0x9ac1,	// (0x00017068) cursor_text_primary_small_t1_copy1

0x9a9f,	// (0x00017046) cursor_text_title_t1

0x9aad,	// (0x00017054) cursor_title_pane_g1

0x8b50,	// (0x000160f7) cursor_digital_pane_g1

0x4906,	// (0x00011ead) cursor_text_digital_t1

0x4914,	// (0x00011ebb) link_highlight_primary_pane_g1

0x9a48,	// (0x00016fef) link_highlight_primary_pane_t1

0x4914,	// (0x00011ebb) link_highlight_primary_small_pane_g1

0x491c,	// (0x00011ec3) link_highlight_primary_small_pane_t1

0x4914,	// (0x00011ebb) link_highlight_secondary_pane_g1

0x492b,	// (0x00011ed2) link_highlight_secondary_pane_t1

0x99ad,	// (0x00016f54) link_highlight_title_pane_g1

0x99c4,	// (0x00016f6b) link_highlight_title_pane_t1

0x99ad,	// (0x00016f54) link_highlight_digital_pane_g1

0x99b5,	// (0x00016f5c) link_highlight_digital_pane_t1

0x9867,	// (0x00016e0e) copy_highlight_primary_pane_g1

0x988d,	// (0x00016e34) copy_highlight_primary_pane_t1

0x9867,	// (0x00016e0e) copy_highlight_primary_small_pane_g1

0x987e,	// (0x00016e25) copy_highlight_primary_small_pane_t1

0x493a,	// (0x00011ee1) copy_highlight_secondary_pane_g1

0x4942,	// (0x00011ee9) copy_highlight_secondary_pane_t1

0x9867,	// (0x00016e0e) copy_highlight_title_pane_g1

0x986f,	// (0x00016e16) copy_highlight_title_pane_t1

0x9867,	// (0x00016e0e) copy_highlight_digital_pane_g1

0xabef,	// (0x00018196) copy_highlight_digital_pane_t1

0xab43,	// (0x000180ea) graphic_text_primary_pane_g1

0xabd3,	// (0x0001817a) graphic_text_primary_pane_t1

0xabe1,	// (0x00018188) graphic_text_primary_pane_t2

0x0001,

0xf99a,	// (0x0001cf41) graphic_text_primary_pane_t

0xabaf,	// (0x00018156) graphic_text_primary_small_pane_g1

0xabb7,	// (0x0001815e) graphic_text_primary_small_pane_t1

0xabc5,	// (0x0001816c) graphic_text_primary_small_pane_t2

0x0001,

0xf995,	// (0x0001cf3c) graphic_text_primary_small_pane_t

0xab8b,	// (0x00018132) graphic_text_secondary_pane_g1

0xab93,	// (0x0001813a) graphic_text_secondary_pane_t1

0xaba1,	// (0x00018148) graphic_text_secondary_pane_t2

0x0001,

0xf990,	// (0x0001cf37) graphic_text_secondary_pane_t

0xab67,	// (0x0001810e) graphic_text_title_pane_g1

0xab6f,	// (0x00018116) graphic_text_title_pane_t1

0xab7d,	// (0x00018124) graphic_text_title_pane_t2

0x0001,

0xf98b,	// (0x0001cf32) graphic_text_title_pane_t

0xab43,	// (0x000180ea) graphic_text_digital_pane_g1

0xab4b,	// (0x000180f2) graphic_text_digital_pane_t1

0xab59,	// (0x00018100) graphic_text_digital_pane_t2

0x0001,

0xf986,	// (0x0001cf2d) graphic_text_digital_pane_t

0x378f,	// (0x00010d36) navi_icon_pane_srt_ParamLimits

0x378f,	// (0x00010d36) navi_icon_pane_srt

0x3713,	// (0x00010cba) navi_midp_pane_srt

0x3713,	// (0x00010cba) navi_navi_pane_srt

0x378f,	// (0x00010d36) navi_text_pane_srt_ParamLimits

0x378f,	// (0x00010d36) navi_text_pane_srt

0xab0e,	// (0x000180b5) navi_navi_icon_text_pane_srt

0xab16,	// (0x000180bd) navi_navi_pane_srt_g1_ParamLimits

0xab16,	// (0x000180bd) navi_navi_pane_srt_g1

0xab28,	// (0x000180cf) navi_navi_pane_srt_g2_ParamLimits

0xab28,	// (0x000180cf) navi_navi_pane_srt_g2

0x0001,

0xf981,	// (0x0001cf28) navi_navi_pane_srt_g_ParamLimits

0xf981,	// (0x0001cf28) navi_navi_pane_srt_g

0xab3a,	// (0x000180e1) navi_navi_tabs_pane_srt

0xab0e,	// (0x000180b5) navi_navi_text_pane_srt

0xab0e,	// (0x000180b5) navi_navi_volume_pane_srt

0xaaff,	// (0x000180a6) navi_navi_text_pane_srt_t1

0x69a1,	// (0x00013f48) navi_navi_volume_pane_srt_g1

0x69a9,	// (0x00013f50) volume_small_pane_srt_ParamLimits

0x69a9,	// (0x00013f50) volume_small_pane_srt

0x5d3e,	// (0x000132e5) volume_small_pane_srt_g1_ParamLimits

0x5d3e,	// (0x000132e5) volume_small_pane_srt_g1

0x5d4e,	// (0x000132f5) volume_small_pane_srt_g2_ParamLimits

0x5d4e,	// (0x000132f5) volume_small_pane_srt_g2

0x5d5f,	// (0x00013306) volume_small_pane_srt_g3_ParamLimits

0x5d5f,	// (0x00013306) volume_small_pane_srt_g3

0x5d70,	// (0x00013317) volume_small_pane_srt_g4_ParamLimits

0x5d70,	// (0x00013317) volume_small_pane_srt_g4

0x5d81,	// (0x00013328) volume_small_pane_srt_g5_ParamLimits

0x5d81,	// (0x00013328) volume_small_pane_srt_g5

0x5d92,	// (0x00013339) volume_small_pane_srt_g6_ParamLimits

0x5d92,	// (0x00013339) volume_small_pane_srt_g6

0x5da3,	// (0x0001334a) volume_small_pane_srt_g7_ParamLimits

0x5da3,	// (0x0001334a) volume_small_pane_srt_g7

0x5db4,	// (0x0001335b) volume_small_pane_srt_g8_ParamLimits

0x5db4,	// (0x0001335b) volume_small_pane_srt_g8

0x5dc5,	// (0x0001336c) volume_small_pane_srt_g9_ParamLimits

0x5dc5,	// (0x0001336c) volume_small_pane_srt_g9

0x5dd6,	// (0x0001337d) volume_small_pane_srt_g10_ParamLimits

0x5dd6,	// (0x0001337d) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x0001ccd0) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x0001ccd0) volume_small_pane_srt_g

0x7dec,	// (0x00015393) query_popup_data_pane_cp2

0xaae5,	// (0x0001808c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaae5,	// (0x0001808c) navi_navi_icon_text_pane_srt_t1

0x9af5,	// (0x0001709c) navi_tabs_2_long_pane_srt

0x9af5,	// (0x0001709c) navi_tabs_2_pane_srt

0x9af5,	// (0x0001709c) navi_tabs_3_long_pane_srt

0x9af5,	// (0x0001709c) navi_tabs_3_pane_srt

0x9af5,	// (0x0001709c) navi_tabs_4_pane_srt

0x6981,	// (0x00013f28) tabs_2_active_pane_srt_ParamLimits

0x6981,	// (0x00013f28) tabs_2_active_pane_srt

0x6991,	// (0x00013f38) tabs_2_passive_pane_srt_ParamLimits

0x6991,	// (0x00013f38) tabs_2_passive_pane_srt

0x4a20,	// (0x00011fc7) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4a20,	// (0x00011fc7) bg_passive_tab_pane_cp1_srt

0xaab1,	// (0x00018058) bg_passive_tab_pane_g1_cp1_srt

0x899a,	// (0x00015f41) bg_passive_tab_pane_g2_cp1_srt

0xaaba,	// (0x00018061) bg_passive_tab_pane_g3_cp1_srt

0x378f,	// (0x00010d36) bg_active_tab_pane_cp1_srt_ParamLimits

0x378f,	// (0x00010d36) bg_active_tab_pane_cp1_srt

0xaac3,	// (0x0001806a) tabs_2_active_pane_srt_g1

0xaacb,	// (0x00018072) tabs_2_active_pane_srt_t1_ParamLimits

0xaacb,	// (0x00018072) tabs_2_active_pane_srt_t1

0xaab1,	// (0x00018058) bg_active_tab_pane_g1_cp1_srt

0x899a,	// (0x00015f41) bg_active_tab_pane_g2_cp1_srt

0xaaba,	// (0x00018061) bg_active_tab_pane_g3_cp1_srt

0x694e,	// (0x00013ef5) tabs_3_active_pane_srt_ParamLimits

0x694e,	// (0x00013ef5) tabs_3_active_pane_srt

0x695f,	// (0x00013f06) tabs_3_passive_pane_cp_srt_ParamLimits

0x695f,	// (0x00013f06) tabs_3_passive_pane_cp_srt

0x6970,	// (0x00013f17) tabs_3_passive_pane_srt_ParamLimits

0x6970,	// (0x00013f17) tabs_3_passive_pane_srt

0x4a20,	// (0x00011fc7) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4a20,	// (0x00011fc7) bg_passive_tab_pane_cp2_srt

0x8b5a,	// (0x00016101) bg_passive_tab_pane_g1_cp2_srt

0x899a,	// (0x00015f41) bg_passive_tab_pane_g2_cp2_srt

0x8b63,	// (0x0001610a) bg_passive_tab_pane_g3_cp2_srt

0x378f,	// (0x00010d36) bg_active_tab_pane_cp2_srt_ParamLimits

0x378f,	// (0x00010d36) bg_active_tab_pane_cp2_srt

0xaa97,	// (0x0001803e) tabs_3_active_pane_srt_g1

0xaa9f,	// (0x00018046) tabs_3_active_pane_srt_t1_ParamLimits

0xaa9f,	// (0x00018046) tabs_3_active_pane_srt_t1

0x8b5a,	// (0x00016101) bg_active_tab_pane_g1_cp2_srt

0x899a,	// (0x00015f41) bg_active_tab_pane_g2_cp2_srt

0x8b63,	// (0x0001610a) bg_active_tab_pane_g3_cp2_srt

0x6906,	// (0x00013ead) tabs_4_active_pane_srt_ParamLimits

0x6906,	// (0x00013ead) tabs_4_active_pane_srt

0x6918,	// (0x00013ebf) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6918,	// (0x00013ebf) tabs_4_passive_pane_cp2_srt

0x5f49,	// (0x000134f0) aid_size_cell_toolbar

0x86de,	// (0x00015c85) main_idle_act_pane_ParamLimits

0x610e,	// (0x000136b5) popup_large_graphic_colour_window_ParamLimits

0x6479,	// (0x00013a20) popup_toolbar_window_ParamLimits

0x6479,	// (0x00013a20) popup_toolbar_window

0xa808,	// (0x00017daf) list_single_graphic_2heading_pane_ParamLimits

0xa808,	// (0x00017daf) list_single_graphic_2heading_pane

0x408c,	// (0x00011633) aid_size_cell_apps_grid_lsc_pane

0x409e,	// (0x00011645) aid_size_cell_apps_grid_prt_pane

0x4a20,	// (0x00011fc7) bg_wml_button_pane_cp1_ParamLimits

0x4a20,	// (0x00011fc7) bg_wml_button_pane_cp1

0x94a8,	// (0x00016a4f) form_midp_field_text_pane_t1_ParamLimits

0x9263,	// (0x0001680a) input_focus_pane_cp050_ParamLimits

0x94e2,	// (0x00016a89) list_midp_form_text_pane_ParamLimits

0x9485,	// (0x00016a2c) input_focus_pane_cp051_ParamLimits

0x9499,	// (0x00016a40) list_midp_choice_pane_ParamLimits

0x9319,	// (0x000168c0) list_single_2graphic_pane_cp3_ParamLimits

0x9319,	// (0x000168c0) list_single_2graphic_pane_cp3

0x933e,	// (0x000168e5) list_single_midp_graphic_pane_ParamLimits

0x933e,	// (0x000168e5) list_single_midp_graphic_pane

0x6526,	// (0x00013acd) list_single_graphic_2heading_pane_g1_ParamLimits

0x6526,	// (0x00013acd) list_single_graphic_2heading_pane_g1

0x6532,	// (0x00013ad9) list_single_graphic_2heading_pane_g4_ParamLimits

0x6532,	// (0x00013ad9) list_single_graphic_2heading_pane_g4

0x653e,	// (0x00013ae5) list_single_graphic_2heading_pane_g5_ParamLimits

0x653e,	// (0x00013ae5) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x0001cd23) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x0001cd23) list_single_graphic_2heading_pane_g

0x654a,	// (0x00013af1) list_single_graphic_2heading_pane_t1_ParamLimits

0x654a,	// (0x00013af1) list_single_graphic_2heading_pane_t1

0x655e,	// (0x00013b05) list_single_graphic_2heading_pane_t2_ParamLimits

0x655e,	// (0x00013b05) list_single_graphic_2heading_pane_t2

0x6578,	// (0x00013b1f) list_single_graphic_2heading_pane_t3_ParamLimits

0x6578,	// (0x00013b1f) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x0001cd2a) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x0001cd2a) list_single_graphic_2heading_pane_t

0x9053,	// (0x000165fa) bg_popup_sub_pane_cp2

0x907d,	// (0x00016624) grid_toobar_pane

0x6590,	// (0x00013b37) cell_toolbar_pane_ParamLimits

0x6590,	// (0x00013b37) cell_toolbar_pane

0x90e7,	// (0x0001668e) cell_toolbar_pane_g1_ParamLimits

0x90e7,	// (0x0001668e) cell_toolbar_pane_g1

0x90fb,	// (0x000166a2) cell_toolbar_pane_g2_ParamLimits

0x90fb,	// (0x000166a2) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x0001cd38) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x0001cd38) cell_toolbar_pane_g

0x911d,	// (0x000166c4) grid_highlight_pane_cp2_ParamLimits

0x911d,	// (0x000166c4) grid_highlight_pane_cp2

0x9137,	// (0x000166de) toolbar_button_pane

0x9143,	// (0x000166ea) toolbar_button_pane_g1

0x914b,	// (0x000166f2) toolbar_button_pane_g2

0x9153,	// (0x000166fa) toolbar_button_pane_g3

0x915b,	// (0x00016702) toolbar_button_pane_g4

0x9163,	// (0x0001670a) toolbar_button_pane_g5

0x916b,	// (0x00016712) toolbar_button_pane_g6

0x9173,	// (0x0001671a) toolbar_button_pane_g7

0x917b,	// (0x00016722) toolbar_button_pane_g8

0x9183,	// (0x0001672a) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x0001cd3d) toolbar_button_pane_g

0x65c8,	// (0x00013b6f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x65c8,	// (0x00013b6f) list_single_2graphic_pane_g1_cp3

0x65d4,	// (0x00013b7b) list_single_2graphic_pane_g2_cp3_ParamLimits

0x65d4,	// (0x00013b7b) list_single_2graphic_pane_g2_cp3

0x65e5,	// (0x00013b8c) list_single_2graphic_pane_g3_cp3

0x65ed,	// (0x00013b94) list_single_2graphic_pane_g4_cp3_ParamLimits

0x65ed,	// (0x00013b94) list_single_2graphic_pane_g4_cp3

0x65f9,	// (0x00013ba0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x65f9,	// (0x00013ba0) list_single_2graphic_pane_t1_cp3

0x6615,	// (0x00013bbc) list_single_midp_graphic_pane_g2_ParamLimits

0x6615,	// (0x00013bbc) list_single_midp_graphic_pane_g2

0x5f51,	// (0x000134f8) aid_zoom_text_primary

0x5f59,	// (0x00013500) aid_zoom_text_secondary

0x4a6c,	// (0x00012013) status_small_pane_g7_ParamLimits

0x4a6c,	// (0x00012013) status_small_pane_g7

0x8bbd,	// (0x00016164) status_small_pane_t1_ParamLimits

0x7b89,	// (0x00015130) title_pane_g2

0x0003,

0xf529,	// (0x0001cad0) title_pane_g

0x7e46,	// (0x000153ed) aid_size_cell_colour_1_pane_ParamLimits

0x7e46,	// (0x000153ed) aid_size_cell_colour_1_pane

0x7e5a,	// (0x00015401) aid_size_cell_colour_2_pane_ParamLimits

0x7e5a,	// (0x00015401) aid_size_cell_colour_2_pane

0x7e6e,	// (0x00015415) aid_size_cell_colour_3_pane_ParamLimits

0x7e6e,	// (0x00015415) aid_size_cell_colour_3_pane

0x7e82,	// (0x00015429) aid_size_cell_colour_4_pane_ParamLimits

0x7e82,	// (0x00015429) aid_size_cell_colour_4_pane

0x59a4,	// (0x00012f4b) title_pane_stacon_g1_ParamLimits

0x59a4,	// (0x00012f4b) title_pane_stacon_g1

0x98e4,	// (0x00016e8b) popup_note_wait_window_g3_ParamLimits

0x98e4,	// (0x00016e8b) popup_note_wait_window_g3

0x995a,	// (0x00016f01) popup_note_wait_window_t5_ParamLimits

0x995a,	// (0x00016f01) popup_note_wait_window_t5

0x3713,	// (0x00010cba) main_feb_china_hwr_fs_writing_pane

0x5ff5,	// (0x0001359c) popup_feb_china_hwr_fs_window_ParamLimits

0x5ff5,	// (0x0001359c) popup_feb_china_hwr_fs_window

0x6637,	// (0x00013bde) aid_size_cell_hwr_fs_ParamLimits

0x6637,	// (0x00013bde) aid_size_cell_hwr_fs

0x9263,	// (0x0001680a) bg_popup_sub_pane_cp3_ParamLimits

0x9263,	// (0x0001680a) bg_popup_sub_pane_cp3

0x664c,	// (0x00013bf3) grid_hwr_fs_pane_ParamLimits

0x664c,	// (0x00013bf3) grid_hwr_fs_pane

0x6664,	// (0x00013c0b) linegrid_hwr_fs_pane_ParamLimits

0x6664,	// (0x00013c0b) linegrid_hwr_fs_pane

0x6674,	// (0x00013c1b) cell_hwr_fs_pane_ParamLimits

0x6674,	// (0x00013c1b) cell_hwr_fs_pane

0x926f,	// (0x00016816) linegrid_hwr_fs_pane_g1_ParamLimits

0x926f,	// (0x00016816) linegrid_hwr_fs_pane_g1

0x927b,	// (0x00016822) linegrid_hwr_fs_pane_g2_ParamLimits

0x927b,	// (0x00016822) linegrid_hwr_fs_pane_g2

0x928d,	// (0x00016834) linegrid_hwr_fs_pane_g3_ParamLimits

0x928d,	// (0x00016834) linegrid_hwr_fs_pane_g3

0x6696,	// (0x00013c3d) linegrid_hwr_fs_pane_g4_ParamLimits

0x6696,	// (0x00013c3d) linegrid_hwr_fs_pane_g4

0x66b0,	// (0x00013c57) linegrid_hwr_fs_pane_g5_ParamLimits

0x66b0,	// (0x00013c57) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c1,	// (0x0001cd68) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c1,	// (0x0001cd68) linegrid_hwr_fs_pane_g

0x9299,	// (0x00016840) cell_hwr_fs_pane_g1_ParamLimits

0x9299,	// (0x00016840) cell_hwr_fs_pane_g1

0x8f8d,	// (0x00016534) cell_hwr_fs_pane_g2_ParamLimits

0x8f8d,	// (0x00016534) cell_hwr_fs_pane_g2

0x92af,	// (0x00016856) cell_hwr_fs_pane_g3_ParamLimits

0x92af,	// (0x00016856) cell_hwr_fs_pane_g3

0x92bc,	// (0x00016863) cell_hwr_fs_pane_g4_ParamLimits

0x92bc,	// (0x00016863) cell_hwr_fs_pane_g4

0x0003,

0xf7cc,	// (0x0001cd73) cell_hwr_fs_pane_g_ParamLimits

0xf7cc,	// (0x0001cd73) cell_hwr_fs_pane_g

0x66c6,	// (0x00013c6d) cell_hwr_fs_pane_t1

0x3713,	// (0x00010cba) grid_highlight_pane_cp6

0x3713,	// (0x00010cba) main_idle_act2_pane

0x3d38,	// (0x000112df) aid_inside_area_popup_secondary

0x9f79,	// (0x00017520) aid_inside_area_window_primary_ParamLimits

0x9f79,	// (0x00017520) aid_inside_area_window_primary

0xabfe,	// (0x000181a5) ai2_news_ticker_pane

0xac06,	// (0x000181ad) aid_size_cell_ai1_link_ParamLimits

0xac06,	// (0x000181ad) aid_size_cell_ai1_link

0xac20,	// (0x000181c7) popup_ai2_data_window_ParamLimits

0xac20,	// (0x000181c7) popup_ai2_data_window

0xac36,	// (0x000181dd) popup_ai2_link_window_ParamLimits

0xac36,	// (0x000181dd) popup_ai2_link_window

0x9263,	// (0x0001680a) bg_popup_sub_pane_cp4_ParamLimits

0x9263,	// (0x0001680a) bg_popup_sub_pane_cp4

0xac4a,	// (0x000181f1) grid_ai2_link_pane_ParamLimits

0xac4a,	// (0x000181f1) grid_ai2_link_pane

0xac61,	// (0x00018208) popup_ai2_link_window_g1_ParamLimits

0xac61,	// (0x00018208) popup_ai2_link_window_g1

0xac6d,	// (0x00018214) popup_ai2_link_window_g2_ParamLimits

0xac6d,	// (0x00018214) popup_ai2_link_window_g2

0x0001,

0xf99f,	// (0x0001cf46) popup_ai2_link_window_g_ParamLimits

0xf99f,	// (0x0001cf46) popup_ai2_link_window_g

0xac7c,	// (0x00018223) ai2_mp_button_pane

0xac84,	// (0x0001822b) ai2_mp_volume_pane

0x9485,	// (0x00016a2c) bg_popup_sub_pane_cp5_ParamLimits

0x9485,	// (0x00016a2c) bg_popup_sub_pane_cp5

0xac8c,	// (0x00018233) heading_ai2_gene_pane_ParamLimits

0xac8c,	// (0x00018233) heading_ai2_gene_pane

0xac98,	// (0x0001823f) list_ai2_gene_pane_ParamLimits

0xac98,	// (0x0001823f) list_ai2_gene_pane

0xace0,	// (0x00018287) cell_ai2_link_pane_ParamLimits

0xace0,	// (0x00018287) cell_ai2_link_pane

0xacf6,	// (0x0001829d) cell_ai2_link_pane_g1

0x3713,	// (0x00010cba) grid_highlight_pane_cp7

0x69be,	// (0x00013f65) ai2_mp_volume_pane_g1

0xadc6,	// (0x0001836d) ai2_mp_volume_pane_g2

0xad3b,	// (0x000182e2) list_ai2_gene_pane_t1

0xadce,	// (0x00018375) ai2_mp_volume_pane_g3

0x0002,

0xf9b8,	// (0x0001cf5f) ai2_mp_volume_pane_g

0x69c6,	// (0x00013f6d) volume_small_pane_cp3

0xadd6,	// (0x0001837d) aid_size_cell_ai2_button

0xadde,	// (0x00018385) grid_ai2_button_pane

0xade7,	// (0x0001838e) cell_ai2_button_pane_ParamLimits

0xade7,	// (0x0001838e) cell_ai2_button_pane

0x36e9,	// (0x00010c90) cell_ai2_button_pane_g1

0x3713,	// (0x00010cba) grid_highlight_pane_cp8

0xad86,	// (0x0001832d) ai2_gene_pane_t1_ParamLimits

0xad86,	// (0x0001832d) ai2_gene_pane_t1

0x5f3f,	// (0x000134e6) aid_height_parent_landscape

0xa5f4,	// (0x00017b9b) aid_height_set_list

0xa605,	// (0x00017bac) aid_size_parent

0xaa21,	// (0x00017fc8) aid_size_cell_graphic_pane_ParamLimits

0xaca8,	// (0x0001824f) popup_ai2_data_window_g1_ParamLimits

0xaca8,	// (0x0001824f) popup_ai2_data_window_g1

0xacb4,	// (0x0001825b) ai2_news_ticker_pane_g1

0xacbc,	// (0x00018263) ai2_news_ticker_pane_g2

0x0001,

0xf9a4,	// (0x0001cf4b) ai2_news_ticker_pane_g

0xacc4,	// (0x0001826b) ai2_news_ticker_pane_t1

0xacd2,	// (0x00018279) ai2_news_ticker_pane_t2

0x0001,

0xf9a9,	// (0x0001cf50) ai2_news_ticker_pane_t

0xacff,	// (0x000182a6) heading_ai2_gene_pane_g1

0xad07,	// (0x000182ae) heading_ai2_gene_pane_t1_ParamLimits

0xad07,	// (0x000182ae) heading_ai2_gene_pane_t1

0xad1c,	// (0x000182c3) list_highlight_pane_cp6

0xad24,	// (0x000182cb) ai2_gene_pane_ParamLimits

0xad24,	// (0x000182cb) ai2_gene_pane

0xad49,	// (0x000182f0) list_ai2_gene_pane_t2

0x0001,

0xf9ae,	// (0x0001cf55) list_ai2_gene_pane_t

0xad57,	// (0x000182fe) list_highlight_pane_cp8_ParamLimits

0xad57,	// (0x000182fe) list_highlight_pane_cp8

0xad68,	// (0x0001830f) ai2_gene_pane_g1_ParamLimits

0xad68,	// (0x0001830f) ai2_gene_pane_g1

0xad7a,	// (0x00018321) ai2_gene_pane_g2_ParamLimits

0xad7a,	// (0x00018321) ai2_gene_pane_g2

0x0001,

0xf9b3,	// (0x0001cf5a) ai2_gene_pane_g_ParamLimits

0xf9b3,	// (0x0001cf5a) ai2_gene_pane_g

0x3afe,	// (0x000110a5) scroll_pane_cp12

0x5efc,	// (0x000134a3) control_pane_t3_ParamLimits

0x5efc,	// (0x000134a3) control_pane_t3

0x8bae,	// (0x00016155) status_small_pane_g8_ParamLimits

0x8bae,	// (0x00016155) status_small_pane_g8

0x60d7,	// (0x0001367e) popup_find_window_ParamLimits

0x62f0,	// (0x00013897) popup_note_image_window_ParamLimits

0x90b9,	// (0x00016660) list_double2_graphic_pane_vc_g1_ParamLimits

0x90b9,	// (0x00016660) list_double2_graphic_pane_vc_g1

0x476f,	// (0x00011d16) list_double2_graphic_pane_vc_g2_ParamLimits

0x476f,	// (0x00011d16) list_double2_graphic_pane_vc_g2

0x90c5,	// (0x0001666c) list_double2_graphic_pane_vc_g3_ParamLimits

0x90c5,	// (0x0001666c) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x0001cd31) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x0001cd31) list_double2_graphic_pane_vc_g

0x90d1,	// (0x00016678) list_double2_graphic_pane_vc_t1_ParamLimits

0x90d1,	// (0x00016678) list_double2_graphic_pane_vc_t1

0x476f,	// (0x00011d16) list_single_heading_pane_vc_g1_ParamLimits

0x476f,	// (0x00011d16) list_single_heading_pane_vc_g1

0x90c5,	// (0x0001666c) list_single_heading_pane_vc_g2_ParamLimits

0x90c5,	// (0x0001666c) list_single_heading_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd52) list_single_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd52) list_single_heading_pane_vc_g

0x918b,	// (0x00016732) list_single_heading_pane_vc_t1_ParamLimits

0x918b,	// (0x00016732) list_single_heading_pane_vc_t1

0x91a1,	// (0x00016748) list_single_heading_pane_vc_t2_ParamLimits

0x91a1,	// (0x00016748) list_single_heading_pane_vc_t2

0x0001,

0xf7b0,	// (0x0001cd57) list_single_heading_pane_vc_t_ParamLimits

0xf7b0,	// (0x0001cd57) list_single_heading_pane_vc_t

0x91b3,	// (0x0001675a) list_setting_number_pane_vc_g1_ParamLimits

0x91b3,	// (0x0001675a) list_setting_number_pane_vc_g1

0x91bf,	// (0x00016766) list_setting_number_pane_vc_g2_ParamLimits

0x91bf,	// (0x00016766) list_setting_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001cd5c) list_setting_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001cd5c) list_setting_number_pane_vc_g

0x91cb,	// (0x00016772) list_setting_number_pane_vc_t1_ParamLimits

0x91cb,	// (0x00016772) list_setting_number_pane_vc_t1

0x91df,	// (0x00016786) list_setting_number_pane_vc_t2_ParamLimits

0x91df,	// (0x00016786) list_setting_number_pane_vc_t2

0x91fb,	// (0x000167a2) list_setting_number_pane_vc_t3_ParamLimits

0x91fb,	// (0x000167a2) list_setting_number_pane_vc_t3

0x0002,

0xf7ba,	// (0x0001cd61) list_setting_number_pane_vc_t_ParamLimits

0xf7ba,	// (0x0001cd61) list_setting_number_pane_vc_t

0x9227,	// (0x000167ce) set_value_pane_vc_ParamLimits

0x9227,	// (0x000167ce) set_value_pane_vc

0xa808,	// (0x00017daf) list_double2_graphic_pane_vc_ParamLimits

0xa808,	// (0x00017daf) list_double2_graphic_pane_vc

0xa81b,	// (0x00017dc2) list_double2_large_graphic_pane_vc_ParamLimits

0xa81b,	// (0x00017dc2) list_double2_large_graphic_pane_vc

0xa808,	// (0x00017daf) list_double2_pane_vc_ParamLimits

0xa808,	// (0x00017daf) list_double2_pane_vc

0xa808,	// (0x00017daf) list_double_graphic_heading_pane_vc_ParamLimits

0xa808,	// (0x00017daf) list_double_graphic_heading_pane_vc

0xa808,	// (0x00017daf) list_double_graphic_pane_vc_ParamLimits

0xa808,	// (0x00017daf) list_double_graphic_pane_vc

0xa808,	// (0x00017daf) list_double_heading_pane_vc_ParamLimits

0xa808,	// (0x00017daf) list_double_heading_pane_vc

0xa82d,	// (0x00017dd4) list_double_large_graphic_pane_vc_ParamLimits

0xa82d,	// (0x00017dd4) list_double_large_graphic_pane_vc

0xa808,	// (0x00017daf) list_double_number_pane_vc_ParamLimits

0xa808,	// (0x00017daf) list_double_number_pane_vc

0xa808,	// (0x00017daf) list_double_pane_vc_ParamLimits

0xa808,	// (0x00017daf) list_double_pane_vc

0xa808,	// (0x00017daf) list_double_time_pane_vc_ParamLimits

0xa808,	// (0x00017daf) list_double_time_pane_vc

0xa808,	// (0x00017daf) list_setting_number_pane_vc_ParamLimits

0xa808,	// (0x00017daf) list_setting_number_pane_vc

0xa808,	// (0x00017daf) list_setting_pane_vc_ParamLimits

0xa808,	// (0x00017daf) list_setting_pane_vc

0xa808,	// (0x00017daf) list_single_graphic_heading_pane_vc_ParamLimits

0xa808,	// (0x00017daf) list_single_graphic_heading_pane_vc

0xa808,	// (0x00017daf) list_single_heading_pane_vc_ParamLimits

0xa808,	// (0x00017daf) list_single_heading_pane_vc

0xa84b,	// (0x00017df2) list_single_number_heading_pane_vc_ParamLimits

0xa84b,	// (0x00017df2) list_single_number_heading_pane_vc

0xae1b,	// (0x000183c2) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xae1b,	// (0x000183c2) list_double_graphic_heading_pane_vc_g1

0x476f,	// (0x00011d16) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x476f,	// (0x00011d16) list_double_graphic_heading_pane_vc_g2

0x90c5,	// (0x0001666c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x90c5,	// (0x0001666c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9bf,	// (0x0001cf66) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9bf,	// (0x0001cf66) list_double_graphic_heading_pane_vc_g

0xae27,	// (0x000183ce) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xae27,	// (0x000183ce) list_double_graphic_heading_pane_vc_t1

0xae3b,	// (0x000183e2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xae3b,	// (0x000183e2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c6,	// (0x0001cf6d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c6,	// (0x0001cf6d) list_double_graphic_heading_pane_vc_t

0x91b3,	// (0x0001675a) list_setting_pane_vc_g1_ParamLimits

0x91b3,	// (0x0001675a) list_setting_pane_vc_g1

0x91bf,	// (0x00016766) list_setting_pane_vc_g2_ParamLimits

0x91bf,	// (0x00016766) list_setting_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001cd5c) list_setting_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001cd5c) list_setting_pane_vc_g

0xb058,	// (0x000185ff) list_setting_pane_vc_t1_ParamLimits

0xb058,	// (0x000185ff) list_setting_pane_vc_t1

0xb074,	// (0x0001861b) list_setting_pane_vc_t2_ParamLimits

0xb074,	// (0x0001861b) list_setting_pane_vc_t2

0x0001,

0xfa09,	// (0x0001cfb0) list_setting_pane_vc_t_ParamLimits

0xfa09,	// (0x0001cfb0) list_setting_pane_vc_t

0x9227,	// (0x000167ce) set_value_pane_cp_vc_ParamLimits

0x9227,	// (0x000167ce) set_value_pane_cp_vc

0x476f,	// (0x00011d16) list_single_number_heading_pane_vc_g1_ParamLimits

0x476f,	// (0x00011d16) list_single_number_heading_pane_vc_g1

0x90c5,	// (0x0001666c) list_single_number_heading_pane_vc_g2_ParamLimits

0x90c5,	// (0x0001666c) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd52) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd52) list_single_number_heading_pane_vc_g

0xb08e,	// (0x00018635) list_single_number_heading_pane_vc_t1_ParamLimits

0xb08e,	// (0x00018635) list_single_number_heading_pane_vc_t1

0xb0a4,	// (0x0001864b) list_single_number_heading_pane_vc_t2_ParamLimits

0xb0a4,	// (0x0001864b) list_single_number_heading_pane_vc_t2

0xb0ba,	// (0x00018661) list_single_number_heading_pane_vc_t3_ParamLimits

0xb0ba,	// (0x00018661) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0e,	// (0x0001cfb5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0e,	// (0x0001cfb5) list_single_number_heading_pane_vc_t

0xb0cc,	// (0x00018673) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb0cc,	// (0x00018673) list_single_graphic_heading_pane_vc_g1

0x476f,	// (0x00011d16) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x476f,	// (0x00011d16) list_single_graphic_heading_pane_vc_g4

0x90c5,	// (0x0001666c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x90c5,	// (0x0001666c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa15,	// (0x0001cfbc) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa15,	// (0x0001cfbc) list_single_graphic_heading_pane_vc_g

0xb08e,	// (0x00018635) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb08e,	// (0x00018635) list_single_graphic_heading_pane_vc_t1

0xb0d8,	// (0x0001867f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb0d8,	// (0x0001867f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1c,	// (0x0001cfc3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1c,	// (0x0001cfc3) list_single_graphic_heading_pane_vc_t

0x476f,	// (0x00011d16) list_double2_pane_vc_g1_ParamLimits

0x476f,	// (0x00011d16) list_double2_pane_vc_g1

0x90c5,	// (0x0001666c) list_double2_pane_vc_g2_ParamLimits

0x90c5,	// (0x0001666c) list_double2_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd52) list_double2_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd52) list_double2_pane_vc_g

0xb0ea,	// (0x00018691) list_double2_pane_vc_t1_ParamLimits

0xb0ea,	// (0x00018691) list_double2_pane_vc_t1

0xb102,	// (0x000186a9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb102,	// (0x000186a9) list_double2_large_graphic_pane_vc_g1

0xb10e,	// (0x000186b5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb10e,	// (0x000186b5) list_double2_large_graphic_pane_vc_g2

0xb11a,	// (0x000186c1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb11a,	// (0x000186c1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa21,	// (0x0001cfc8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa21,	// (0x0001cfc8) list_double2_large_graphic_pane_vc_g

0xb126,	// (0x000186cd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb126,	// (0x000186cd) list_double2_large_graphic_pane_vc_t1

0xb13c,	// (0x000186e3) list_double_time_pane_vc_g1_ParamLimits

0xb13c,	// (0x000186e3) list_double_time_pane_vc_g1

0xb148,	// (0x000186ef) list_double_time_pane_vc_g2_ParamLimits

0xb148,	// (0x000186ef) list_double_time_pane_vc_g2

0x0001,

0xfa28,	// (0x0001cfcf) list_double_time_pane_vc_g_ParamLimits

0xfa28,	// (0x0001cfcf) list_double_time_pane_vc_g

0xb154,	// (0x000186fb) list_double_time_pane_vc_t1_ParamLimits

0xb154,	// (0x000186fb) list_double_time_pane_vc_t1

0xb178,	// (0x0001871f) list_double_time_pane_vc_t2_ParamLimits

0xb178,	// (0x0001871f) list_double_time_pane_vc_t2

0xb1a7,	// (0x0001874e) list_double_time_pane_vc_t3_ParamLimits

0xb1a7,	// (0x0001874e) list_double_time_pane_vc_t3

0xb1b9,	// (0x00018760) list_double_time_pane_vc_t4_ParamLimits

0xb1b9,	// (0x00018760) list_double_time_pane_vc_t4

0x0003,

0xfa2d,	// (0x0001cfd4) list_double_time_pane_vc_t_ParamLimits

0xfa2d,	// (0x0001cfd4) list_double_time_pane_vc_t

0x476f,	// (0x00011d16) list_double_pane_vc_g1_ParamLimits

0x476f,	// (0x00011d16) list_double_pane_vc_g1

0x90c5,	// (0x0001666c) list_double_pane_vc_g2_ParamLimits

0x90c5,	// (0x0001666c) list_double_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd52) list_double_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd52) list_double_pane_vc_g

0xb1cd,	// (0x00018774) list_double_pane_vc_t1_ParamLimits

0xb1cd,	// (0x00018774) list_double_pane_vc_t1

0xb1e1,	// (0x00018788) list_double_pane_vc_t2_ParamLimits

0xb1e1,	// (0x00018788) list_double_pane_vc_t2

0x0001,

0xfa36,	// (0x0001cfdd) list_double_pane_vc_t_ParamLimits

0xfa36,	// (0x0001cfdd) list_double_pane_vc_t

0x476f,	// (0x00011d16) list_double_number_pane_vc_g1_ParamLimits

0x476f,	// (0x00011d16) list_double_number_pane_vc_g1

0x90c5,	// (0x0001666c) list_double_number_pane_vc_g2_ParamLimits

0x90c5,	// (0x0001666c) list_double_number_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd52) list_double_number_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd52) list_double_number_pane_vc_g

0xb1f9,	// (0x000187a0) list_double_number_pane_vc_t1_ParamLimits

0xb1f9,	// (0x000187a0) list_double_number_pane_vc_t1

0xb1cd,	// (0x00018774) list_double_number_pane_vc_t2_ParamLimits

0xb1cd,	// (0x00018774) list_double_number_pane_vc_t2

0xb20b,	// (0x000187b2) list_double_number_pane_vc_t3_ParamLimits

0xb20b,	// (0x000187b2) list_double_number_pane_vc_t3

0x0002,

0xfa3b,	// (0x0001cfe2) list_double_number_pane_vc_t_ParamLimits

0xfa3b,	// (0x0001cfe2) list_double_number_pane_vc_t

0xb223,	// (0x000187ca) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb223,	// (0x000187ca) list_double_large_graphic_pane_vc_g1

0xb23f,	// (0x000187e6) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb23f,	// (0x000187e6) list_double_large_graphic_pane_vc_g2

0xb253,	// (0x000187fa) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb253,	// (0x000187fa) list_double_large_graphic_pane_vc_g3

0xb262,	// (0x00018809) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb262,	// (0x00018809) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa42,	// (0x0001cfe9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa42,	// (0x0001cfe9) list_double_large_graphic_pane_vc_g

0xb271,	// (0x00018818) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb271,	// (0x00018818) list_double_large_graphic_pane_vc_t1

0xb28d,	// (0x00018834) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb28d,	// (0x00018834) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4b,	// (0x0001cff2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4b,	// (0x0001cff2) list_double_large_graphic_pane_vc_t

0x476f,	// (0x00011d16) list_double_heading_pane_vc_g1_ParamLimits

0x476f,	// (0x00011d16) list_double_heading_pane_vc_g1

0x90c5,	// (0x0001666c) list_double_heading_pane_vc_g2_ParamLimits

0x90c5,	// (0x0001666c) list_double_heading_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd52) list_double_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd52) list_double_heading_pane_vc_g

0xb2af,	// (0x00018856) list_double_heading_pane_vc_t1_ParamLimits

0xb2af,	// (0x00018856) list_double_heading_pane_vc_t1

0xb2c3,	// (0x0001886a) list_double_heading_pane_vc_t2_ParamLimits

0xb2c3,	// (0x0001886a) list_double_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x0001cff7) list_double_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x0001cff7) list_double_heading_pane_vc_t

0xb2db,	// (0x00018882) list_double_graphic_pane_vc_g1_ParamLimits

0xb2db,	// (0x00018882) list_double_graphic_pane_vc_g1

0xb2ee,	// (0x00018895) list_double_graphic_pane_vc_g2_ParamLimits

0xb2ee,	// (0x00018895) list_double_graphic_pane_vc_g2

0x476f,	// (0x00011d16) list_double_graphic_pane_vc_g3_ParamLimits

0x476f,	// (0x00011d16) list_double_graphic_pane_vc_g3

0x0003,

0xfa55,	// (0x0001cffc) list_double_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001cffc) list_double_graphic_pane_vc_g

0xb30b,	// (0x000188b2) list_double_graphic_pane_vc_t1_ParamLimits

0xb30b,	// (0x000188b2) list_double_graphic_pane_vc_t1

0xb32a,	// (0x000188d1) list_double_graphic_pane_vc_t2_ParamLimits

0xb32a,	// (0x000188d1) list_double_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001d005) list_double_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001d005) list_double_graphic_pane_vc_t

0x5505,	// (0x00012aac) aid_size_cell_fastswap

0x550d,	// (0x00012ab4) aid_size_cell_touch_ParamLimits

0x550d,	// (0x00012ab4) aid_size_cell_touch

0x5772,	// (0x00012d19) popup_fast_swap_wide_window_ParamLimits

0x5772,	// (0x00012d19) popup_fast_swap_wide_window

0x5878,	// (0x00012e1f) touch_pane_ParamLimits

0x5878,	// (0x00012e1f) touch_pane

0x3b7a,	// (0x00011121) button_value_adjust_pane_cp2

0x3b82,	// (0x00011129) button_value_adjust_pane_cp4

0x3b8a,	// (0x00011131) form_field_data_pane_cp2

0x84a4,	// (0x00015a4b) form_field_data_wide_pane_cp2

0x40cd,	// (0x00011674) bg_scroll_pane_ParamLimits

0x5b06,	// (0x000130ad) scroll_handle_pane_ParamLimits

0x5b1a,	// (0x000130c1) scroll_sc2_down_pane_ParamLimits

0x5b1a,	// (0x000130c1) scroll_sc2_down_pane

0x4113,	// (0x000116ba) scroll_sc2_up_pane_ParamLimits

0x4113,	// (0x000116ba) scroll_sc2_up_pane

0xb7fc,	// (0x00018da3) grid_wheel_folder_pane_g1_ParamLimits

0xb7fc,	// (0x00018da3) grid_wheel_folder_pane_g1

0x5cd6,	// (0x0001327d) clock_nsta_pane_cp2_ParamLimits

0x5cd6,	// (0x0001327d) clock_nsta_pane_cp2

0x8a86,	// (0x0001602d) listscroll_midp_pane_ParamLimits

0x8a92,	// (0x00016039) midp_canvas_pane

0x4a9d,	// (0x00012044) nsta_clock_indic_pane

0x4add,	// (0x00012084) listscroll_form_pane_vc

0x4aed,	// (0x00012094) listscroll_set_pane_vc_ParamLimits

0x4aed,	// (0x00012094) listscroll_set_pane_vc

0x8cfb,	// (0x000162a2) clock_nsta_pane

0x8d76,	// (0x0001631d) indicator_nsta_pane

0x9053,	// (0x000165fa) bg_popup_sub_pane_cp2_ParamLimits

0x9067,	// (0x0001660e) find_pane_cp2_ParamLimits

0x9067,	// (0x0001660e) find_pane_cp2

0x907d,	// (0x00016624) grid_toobar_pane_ParamLimits

0x9237,	// (0x000167de) list_form_gen_pane_vc_ParamLimits

0x9237,	// (0x000167de) list_form_gen_pane_vc

0x924d,	// (0x000167f4) scroll_pane_cp8_vc_ParamLimits

0x924d,	// (0x000167f4) scroll_pane_cp8_vc

0x92c9,	// (0x00016870) data_form_wide_pane_vc_ParamLimits

0x92c9,	// (0x00016870) data_form_wide_pane_vc

0x92d5,	// (0x0001687c) form_field_data_wide_pane_vc_g1

0x92dd,	// (0x00016884) form_field_data_wide_pane_vc_t1_ParamLimits

0x92dd,	// (0x00016884) form_field_data_wide_pane_vc_t1

0x3bb1,	// (0x00011158) input_focus_pane_cp6_vc_ParamLimits

0x3bb1,	// (0x00011158) input_focus_pane_cp6_vc

0x964b,	// (0x00016bf2) list_midp_pane_ParamLimits

0x9657,	// (0x00016bfe) scroll_pane_cp16_ParamLimits

0x9657,	// (0x00016bfe) scroll_pane_cp16

0x96c1,	// (0x00016c68) button_value_adjust_pane_ParamLimits

0x96c1,	// (0x00016c68) button_value_adjust_pane

0xa617,	// (0x00017bbe) button_value_adjust_pane_cp6_ParamLimits

0xa617,	// (0x00017bbe) button_value_adjust_pane_cp6

0xa73d,	// (0x00017ce4) settings_code_pane_cp_ParamLimits

0xa73d,	// (0x00017ce4) settings_code_pane_cp

0x36e9,	// (0x00010c90) cell_touch_pane_g1

0x36e9,	// (0x00010c90) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x0001cc76) cell_touch_pane_g

0xadf9,	// (0x000183a0) cell_touch_pane_cp_ParamLimits

0xadf9,	// (0x000183a0) cell_touch_pane_cp

0xae09,	// (0x000183b0) cell_touch_pane_ParamLimits

0xae09,	// (0x000183b0) cell_touch_pane

0x36e9,	// (0x00010c90) scroll_sc2_down_pane_g1

0x36e9,	// (0x00010c90) scroll_sc2_up_pane_g1

0x3713,	// (0x00010cba) bg_set_opt_pane_cp4_vc

0xae53,	// (0x000183fa) list_set_graphic_pane_vc_g1_ParamLimits

0xae53,	// (0x000183fa) list_set_graphic_pane_vc_g1

0xae5f,	// (0x00018406) list_set_graphic_pane_vc_g2_ParamLimits

0xae5f,	// (0x00018406) list_set_graphic_pane_vc_g2

0x0001,

0xf9cb,	// (0x0001cf72) list_set_graphic_pane_vc_g_ParamLimits

0xf9cb,	// (0x0001cf72) list_set_graphic_pane_vc_g

0xae6b,	// (0x00018412) text_primary_small_cp13_vc_ParamLimits

0xae6b,	// (0x00018412) text_primary_small_cp13_vc

0xae83,	// (0x0001842a) list_set_graphic_pane_vc_ParamLimits

0xae83,	// (0x0001842a) list_set_graphic_pane_vc

0x3713,	// (0x00010cba) input_focus_pane_cp2_vc

0x36e9,	// (0x00010c90) setting_code_pane_vc_g1

0x37a6,	// (0x00010d4d) setting_code_pane_vc_t1

0xae96,	// (0x0001843d) set_text_pane_vc_t1_ParamLimits

0xae96,	// (0x0001843d) set_text_pane_vc_t1

0x3713,	// (0x00010cba) input_focus_pane_cp1_vc

0xaeb3,	// (0x0001845a) list_set_text_pane_vc

0x36e9,	// (0x00010c90) setting_text_pane_vc_g1

0x3713,	// (0x00010cba) bg_set_opt_pane_cp2_vc

0x379d,	// (0x00010d44) setting_slider_graphic_pane_vc_g1

0xaebd,	// (0x00018464) setting_slider_graphic_pane_vc_t1

0xaecd,	// (0x00018474) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d0,	// (0x0001cf77) setting_slider_graphic_pane_vc_t

0xaedd,	// (0x00018484) slider_set_pane_cp_vc

0xaee5,	// (0x0001848c) slider_set_pane_vc_g1

0xaeee,	// (0x00018495) slider_set_pane_vc_g2

0x0006,

0xf9d5,	// (0x0001cf7c) slider_set_pane_vc_g

0x3c77,	// (0x0001121e) set_opt_bg_pane_g1_copy1

0x3c7f,	// (0x00011226) set_opt_bg_pane_g2_copy1

0xaf1a,	// (0x000184c1) set_opt_bg_pane_g3_copy1

0x3c8f,	// (0x00011236) set_opt_bg_pane_g4_copy1

0x3c97,	// (0x0001123e) set_opt_bg_pane_g5_copy1

0x3c9f,	// (0x00011246) set_opt_bg_pane_g6_copy1

0xaf22,	// (0x000184c9) set_opt_bg_pane_g7_copy1

0xaf2c,	// (0x000184d3) set_opt_bg_pane_g8_copy1

0xaf34,	// (0x000184db) set_opt_bg_pane_g9_copy1

0x3713,	// (0x00010cba) bg_set_opt_pane_cp_vc

0xaf3c,	// (0x000184e3) setting_slider_pane_vc_t1

0xaf4b,	// (0x000184f2) setting_slider_pane_vc_t2

0xaf5b,	// (0x00018502) setting_slider_pane_vc_t3

0x0002,

0xf9e4,	// (0x0001cf8b) setting_slider_pane_vc_t

0xaf6b,	// (0x00018512) slider_set_pane_vc

0x66d4,	// (0x00013c7b) volume_set_pane_vc_g1

0x69cf,	// (0x00013f76) volume_set_pane_vc_g2

0x69d8,	// (0x00013f7f) volume_set_pane_vc_g3

0x69e1,	// (0x00013f88) volume_set_pane_vc_g4

0x69ea,	// (0x00013f91) volume_set_pane_vc_g5

0x69f3,	// (0x00013f9a) volume_set_pane_vc_g6

0x69fc,	// (0x00013fa3) volume_set_pane_vc_g7

0x6a05,	// (0x00013fac) volume_set_pane_vc_g8

0x6a0e,	// (0x00013fb5) volume_set_pane_vc_g9

0x6a17,	// (0x00013fbe) volume_set_pane_vc_g10

0x0009,

0xf9eb,	// (0x0001cf92) volume_set_pane_vc_g

0xaf73,	// (0x0001851a) volume_set_pane_vc

0xaf7d,	// (0x00018524) button_value_adjust_pane_cp1_vc

0xaf87,	// (0x0001852e) list_highlight_pane_cp2_vc

0xaf90,	// (0x00018537) list_set_pane_vc_ParamLimits

0xaf90,	// (0x00018537) list_set_pane_vc

0xafee,	// (0x00018595) main_pane_set_vc_t1_ParamLimits

0xafee,	// (0x00018595) main_pane_set_vc_t1

0xb003,	// (0x000185aa) main_pane_set_vc_t2_ParamLimits

0xb003,	// (0x000185aa) main_pane_set_vc_t2

0xb015,	// (0x000185bc) main_pane_set_vc_t3_ParamLimits

0xb015,	// (0x000185bc) main_pane_set_vc_t3

0xb027,	// (0x000185ce) main_pane_set_vc_t4_ParamLimits

0xb027,	// (0x000185ce) main_pane_set_vc_t4

0x0003,

0xfa00,	// (0x0001cfa7) main_pane_set_vc_t_ParamLimits

0xfa00,	// (0x0001cfa7) main_pane_set_vc_t

0xb039,	// (0x000185e0) setting_code_pane_vc_ParamLimits

0xb039,	// (0x000185e0) setting_code_pane_vc

0xb048,	// (0x000185ef) setting_slider_graphic_pane_vc

0xb048,	// (0x000185ef) setting_slider_pane_vc

0xb048,	// (0x000185ef) setting_text_pane_vc

0xb048,	// (0x000185ef) setting_volume_pane_vc

0xb050,	// (0x000185f7) scroll_pane_cp121_vc

0x3b68,	// (0x0001110f) set_content_pane_vc

0xb354,	// (0x000188fb) button_value_adjust_pane_g1

0xb35d,	// (0x00018904) button_value_adjust_pane_g2

0x0001,

0xfa63,	// (0x0001d00a) button_value_adjust_pane_g

0xb366,	// (0x0001890d) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb366,	// (0x0001890d) form_field_slider_wide_pane_vc_t1

0xb37a,	// (0x00018921) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb37a,	// (0x00018921) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa68,	// (0x0001d00f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa68,	// (0x0001d00f) form_field_slider_wide_pane_vc_t

0x3781,	// (0x00010d28) input_focus_pane_cp10_vc_ParamLimits

0x3781,	// (0x00010d28) input_focus_pane_cp10_vc

0xb3a8,	// (0x0001894f) slider_cont_pane_cp1_vc_ParamLimits

0xb3a8,	// (0x0001894f) slider_cont_pane_cp1_vc

0xb3ba,	// (0x00018961) slider_form_pane_g1_cp2

0xaeee,	// (0x00018495) slider_form_pane_g2_cp2

0xb3e7,	// (0x0001898e) form_field_slider_pane_vc_t3

0xb3f5,	// (0x0001899c) form_field_slider_pane_vc_t4

0xb403,	// (0x000189aa) slider_form_pane_vc_ParamLimits

0xb403,	// (0x000189aa) slider_form_pane_vc

0xb410,	// (0x000189b7) form_field_slider_pane_vc_t1_ParamLimits

0xb410,	// (0x000189b7) form_field_slider_pane_vc_t1

0xb37a,	// (0x00018921) form_field_slider_pane_vc_t2_ParamLimits

0xb37a,	// (0x00018921) form_field_slider_pane_vc_t2

0x0001,

0xfa7a,	// (0x0001d021) form_field_slider_pane_vc_t_ParamLimits

0xfa7a,	// (0x0001d021) form_field_slider_pane_vc_t

0x3781,	// (0x00010d28) input_focus_pane_cp9_vc_ParamLimits

0x3781,	// (0x00010d28) input_focus_pane_cp9_vc

0xb42c,	// (0x000189d3) slider_cont_pane_vc_ParamLimits

0xb42c,	// (0x000189d3) slider_cont_pane_vc

0xb440,	// (0x000189e7) list_form_graphic_pane_cp_vc_ParamLimits

0xb440,	// (0x000189e7) list_form_graphic_pane_cp_vc

0x92d5,	// (0x0001687c) form_field_popup_wide_pane_vc_g1

0xb455,	// (0x000189fc) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb455,	// (0x000189fc) form_field_popup_wide_pane_vc_t1

0x3bb1,	// (0x00011158) input_focus_pane_cp8_vc_ParamLimits

0x3bb1,	// (0x00011158) input_focus_pane_cp8_vc

0xb49a,	// (0x00018a41) list_form_wide_pane_vc_ParamLimits

0xb49a,	// (0x00018a41) list_form_wide_pane_vc

0xb4a6,	// (0x00018a4d) list_form_graphic_pane_vc_g1

0xb4ae,	// (0x00018a55) list_form_graphic_pane_vc_t1_ParamLimits

0xb4ae,	// (0x00018a55) list_form_graphic_pane_vc_t1

0x378f,	// (0x00010d36) list_highlight_pane_cp5_vc_ParamLimits

0x378f,	// (0x00010d36) list_highlight_pane_cp5_vc

0xb4ca,	// (0x00018a71) list_form_graphic_pane_vc_ParamLimits

0xb4ca,	// (0x00018a71) list_form_graphic_pane_vc

0x92d5,	// (0x0001687c) form_field_popup_pane_vc_g1

0xb4e0,	// (0x00018a87) form_field_popup_pane_vc_t1_ParamLimits

0xb4e0,	// (0x00018a87) form_field_popup_pane_vc_t1

0x3bb1,	// (0x00011158) input_focus_pane_cp7_vc_ParamLimits

0x3bb1,	// (0x00011158) input_focus_pane_cp7_vc

0xb4f7,	// (0x00018a9e) list_form_pane_vc_ParamLimits

0xb4f7,	// (0x00018a9e) list_form_pane_vc

0xb503,	// (0x00018aaa) data_form_pane_vc_t1_ParamLimits

0xb503,	// (0x00018aaa) data_form_pane_vc_t1

0x3c77,	// (0x0001121e) input_focus_pane_vc_g1

0x3c7f,	// (0x00011226) input_focus_pane_vc_g2

0x3c87,	// (0x0001122e) input_focus_pane_vc_g3

0x3c8f,	// (0x00011236) input_focus_pane_vc_g4

0x3c97,	// (0x0001123e) input_focus_pane_vc_g5

0x3c9f,	// (0x00011246) input_focus_pane_vc_g6

0x3ca7,	// (0x0001124e) input_focus_pane_vc_g7

0x3caf,	// (0x00011256) input_focus_pane_vc_g8

0x3cb7,	// (0x0001125e) input_focus_pane_vc_g9

0x36e9,	// (0x00010c90) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x0001cbff) input_focus_pane_vc_g

0x92c9,	// (0x00016870) data_form_pane_vc_ParamLimits

0x92c9,	// (0x00016870) data_form_pane_vc

0x92d5,	// (0x0001687c) form_field_data_pane_vc_g1

0xb51e,	// (0x00018ac5) form_field_data_pane_vc_t1_ParamLimits

0xb51e,	// (0x00018ac5) form_field_data_pane_vc_t1

0x3bb1,	// (0x00011158) input_focus_pane_vc_ParamLimits

0x3bb1,	// (0x00011158) input_focus_pane_vc

0xb538,	// (0x00018adf) button_value_adjust_pane_cp3_vc

0xb540,	// (0x00018ae7) button_value_adjust_pane_cp5_vc

0xb548,	// (0x00018aef) form_field_data_pane_vc_ParamLimits

0xb548,	// (0x00018aef) form_field_data_pane_vc

0xb55f,	// (0x00018b06) form_field_data_pane_vc_cp2

0xb567,	// (0x00018b0e) form_field_data_wide_pane_vc_ParamLimits

0xb567,	// (0x00018b0e) form_field_data_wide_pane_vc

0xb57d,	// (0x00018b24) form_field_data_wide_pane_vc_cp2

0xb585,	// (0x00018b2c) form_field_popup_pane_vc_ParamLimits

0xb585,	// (0x00018b2c) form_field_popup_pane_vc

0xb59c,	// (0x00018b43) form_field_popup_wide_pane_vc_ParamLimits

0xb59c,	// (0x00018b43) form_field_popup_wide_pane_vc

0xb5b2,	// (0x00018b59) form_field_slider_pane_vc_ParamLimits

0xb5b2,	// (0x00018b59) form_field_slider_pane_vc

0xb5c5,	// (0x00018b6c) form_field_slider_wide_pane_vc_ParamLimits

0xb5c5,	// (0x00018b6c) form_field_slider_wide_pane_vc

0xb5d8,	// (0x00018b7f) grid_touch_1_pane_ParamLimits

0xb5d8,	// (0x00018b7f) grid_touch_1_pane

0xb5e4,	// (0x00018b8b) grid_touch_2_pane_ParamLimits

0xb5e4,	// (0x00018b8b) grid_touch_2_pane

0x4a80,	// (0x00012027) touch_pane_g1_ParamLimits

0x4a80,	// (0x00012027) touch_pane_g1

0xb5fc,	// (0x00018ba3) cell_app_pane_cp_wide_ParamLimits

0xb5fc,	// (0x00018ba3) cell_app_pane_cp_wide

0xb60d,	// (0x00018bb4) grid_popup_fast_wide_pane_ParamLimits

0xb60d,	// (0x00018bb4) grid_popup_fast_wide_pane

0xb621,	// (0x00018bc8) scroll_pane_cp19_ParamLimits

0xb621,	// (0x00018bc8) scroll_pane_cp19

0x3713,	// (0x00010cba) bg_popup_window_pane_cp20

0xb635,	// (0x00018bdc) listscroll_popup_fast_wide_pane

0xb63d,	// (0x00018be4) grid_indicator_nsta_pane

0xb64f,	// (0x00018bf6) clock_nsta_pane_g1

0xb658,	// (0x00018bff) clock_nsta_pane_t1

0xb674,	// (0x00018c1b) cell_indicator_nsta_pane_ParamLimits

0xb674,	// (0x00018c1b) cell_indicator_nsta_pane

0xb6a9,	// (0x00018c50) cell_indicator_nsta_pane_g1

0xb6b7,	// (0x00018c5e) cell_indicator_nsta_pane_g2

0x0001,

0xfa8b,	// (0x0001d032) cell_indicator_nsta_pane_g

0xb6c9,	// (0x00018c70) clock_nsta_pane_cp

0xb6d2,	// (0x00018c79) indicator_nsta_pane_cp

0xb6dc,	// (0x00018c83) nsta_clock_indic_pane_g1

0x37e5,	// (0x00010d8c) grid_indicator_pane

0x8837,	// (0x00015dde) scroll_pane_cp29

0x5c25,	// (0x000131cc) indicator_nsta_pane_cp2_ParamLimits

0x5c25,	// (0x000131cc) indicator_nsta_pane_cp2

0x378f,	// (0x00010d36) main_apps_wheel_pane

0x952e,	// (0x00016ad5) form_midp_field_text_pane_ParamLimits

0x9677,	// (0x00016c1e) scroll_bar_cp050_ParamLimits

0xb735,	// (0x00018cdc) cell_indicator_pane_ParamLimits

0xb735,	// (0x00018cdc) cell_indicator_pane

0xb74e,	// (0x00018cf5) cell_indicator_pane_g1

0xb758,	// (0x00018cff) grid_wheel_folder_pane_ParamLimits

0xb758,	// (0x00018cff) grid_wheel_folder_pane

0xb76e,	// (0x00018d15) list_wheel_apps_pane_ParamLimits

0xb76e,	// (0x00018d15) list_wheel_apps_pane

0xb77f,	// (0x00018d26) main_apps_wheel_pane_g1_ParamLimits

0xb77f,	// (0x00018d26) main_apps_wheel_pane_g1

0xb793,	// (0x00018d3a) main_apps_wheel_pane_g2_ParamLimits

0xb793,	// (0x00018d3a) main_apps_wheel_pane_g2

0x0001,

0xfaa7,	// (0x0001d04e) main_apps_wheel_pane_g_ParamLimits

0xfaa7,	// (0x0001d04e) main_apps_wheel_pane_g

0xb7ab,	// (0x00018d52) main_apps_wheel_pane_t1_ParamLimits

0xb7ab,	// (0x00018d52) main_apps_wheel_pane_t1

0xb7ce,	// (0x00018d75) list_wheel_apps_pane_g1

0xb7d6,	// (0x00018d7d) list_wheel_apps_pane_g2

0xb7de,	// (0x00018d85) list_wheel_apps_pane_g3

0xb7e8,	// (0x00018d8f) list_wheel_apps_pane_g4

0xb7f2,	// (0x00018d99) list_wheel_apps_pane_g5

0x0004,

0xfaac,	// (0x0001d053) list_wheel_apps_pane_g

0x471a,	// (0x00011cc1) navi_icon_text_pane

0x8c2a,	// (0x000161d1) aid_fill_nsta

0xb815,	// (0x00018dbc) navi_icon_text_pane_g1

0xb821,	// (0x00018dc8) navi_icon_text_pane_t1

0x460a,	// (0x00011bb1) list_set_graphic_pane_t1_ParamLimits

0x460a,	// (0x00011bb1) list_set_graphic_pane_t1

0x9dc2,	// (0x00017369) popup_midp_note_alarm_window_t6_ParamLimits

0x9dc2,	// (0x00017369) popup_midp_note_alarm_window_t6

0x9dd4,	// (0x0001737b) popup_midp_note_alarm_window_t7_ParamLimits

0x9dd4,	// (0x0001737b) popup_midp_note_alarm_window_t7

0x9de6,	// (0x0001738d) popup_midp_note_alarm_window_t8_ParamLimits

0x9de6,	// (0x0001738d) popup_midp_note_alarm_window_t8

0x9df8,	// (0x0001739f) popup_midp_note_alarm_window_t9_ParamLimits

0x9df8,	// (0x0001739f) popup_midp_note_alarm_window_t9

0x9e0a,	// (0x000173b1) popup_midp_note_alarm_window_t10_ParamLimits

0x9e0a,	// (0x000173b1) popup_midp_note_alarm_window_t10

0x9e1c,	// (0x000173c3) popup_midp_note_alarm_window_t11_ParamLimits

0x9e1c,	// (0x000173c3) popup_midp_note_alarm_window_t11

0x9e2e,	// (0x000173d5) scroll_pane_cp17_ParamLimits

0x9e2e,	// (0x000173d5) scroll_pane_cp17

0x66d4,	// (0x00013c7b) volume_small_pane_cp_g1

0x6a20,	// (0x00013fc7) volume_small_pane_cp_g2

0x6a29,	// (0x00013fd0) volume_small_pane_cp_g3

0x6a32,	// (0x00013fd9) volume_small_pane_cp_g4

0x6a3b,	// (0x00013fe2) volume_small_pane_cp_g5

0x69ea,	// (0x00013f91) volume_small_pane_cp_g6

0x6a44,	// (0x00013feb) volume_small_pane_cp_g7

0x6a4d,	// (0x00013ff4) volume_small_pane_cp_g8

0x6a56,	// (0x00013ffd) volume_small_pane_cp_g9

0x6a5f,	// (0x00014006) volume_small_pane_cp_g10

0x488c,	// (0x00011e33) midp_ticker_pane_g1_ParamLimits

0x4898,	// (0x00011e3f) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x0001cccb) midp_ticker_pane_g_ParamLimits

0x48a4,	// (0x00011e4b) midp_ticker_pane_t1_ParamLimits

0x8c40,	// (0x000161e7) aid_fill_nsta_2

0x9663,	// (0x00016c0a) list_form2_midp_pane

0xa7bb,	// (0x00017d62) midp_editing_number_pane_ParamLimits

0xa7ca,	// (0x00017d71) midp_ticker_pane_ParamLimits

0xb833,	// (0x00018dda) form2_midp_field_pane

0xb857,	// (0x00018dfe) scroll_pane_cp51

0xb877,	// (0x00018e1e) form2_midp_button_pane_ParamLimits

0xb877,	// (0x00018e1e) form2_midp_button_pane

0xb889,	// (0x00018e30) form2_midp_content_pane_ParamLimits

0xb889,	// (0x00018e30) form2_midp_content_pane

0xb8a3,	// (0x00018e4a) form2_midp_field_choice_group_pane

0xb8ab,	// (0x00018e52) form2_midp_field_pane_g1

0xb8b3,	// (0x00018e5a) form2_midp_field_pane_g2

0xb8bb,	// (0x00018e62) form2_midp_field_pane_g3

0xb8c3,	// (0x00018e6a) form2_midp_field_pane_g4

0x0003,

0xfad1,	// (0x0001d078) form2_midp_field_pane_g

0xb8cb,	// (0x00018e72) form2_midp_gauge_slider_pane

0xb8d3,	// (0x00018e7a) form2_midp_gauge_wait_pane

0xb8db,	// (0x00018e82) form2_midp_image_pane_ParamLimits

0xb8db,	// (0x00018e82) form2_midp_image_pane

0xb8f6,	// (0x00018e9d) form2_midp_label_pane_ParamLimits

0xb8f6,	// (0x00018e9d) form2_midp_label_pane

0xb90f,	// (0x00018eb6) form2_midp_label_pane_cp_ParamLimits

0xb90f,	// (0x00018eb6) form2_midp_label_pane_cp

0xb930,	// (0x00018ed7) form2_midp_string_pane_ParamLimits

0xb930,	// (0x00018ed7) form2_midp_string_pane

0xb942,	// (0x00018ee9) form2_midp_text_pane_ParamLimits

0xb942,	// (0x00018ee9) form2_midp_text_pane

0xb95d,	// (0x00018f04) form2_midp_time_pane

0xb96d,	// (0x00018f14) input_focus_pane_cp51_ParamLimits

0xb96d,	// (0x00018f14) input_focus_pane_cp51

0xb985,	// (0x00018f2c) form2_midp_label_pane_t1_ParamLimits

0xb985,	// (0x00018f2c) form2_midp_label_pane_t1

0xb9c6,	// (0x00018f6d) form2_mdip_text_pane_t1_ParamLimits

0xb9c6,	// (0x00018f6d) form2_mdip_text_pane_t1

0xb9e5,	// (0x00018f8c) form2_midp_time_pane_t1

0xba00,	// (0x00018fa7) form2_midp_gauge_slider_pane_t1

0xba12,	// (0x00018fb9) form2_midp_gauge_slider_pane_t2

0xba24,	// (0x00018fcb) form2_midp_gauge_slider_pane_t3

0x0002,

0xfada,	// (0x0001d081) form2_midp_gauge_slider_pane_t

0xba36,	// (0x00018fdd) form2_midp_slider_pane

0xba42,	// (0x00018fe9) form2_midp_gauge_wait_pane_t1

0xba50,	// (0x00018ff7) form2_midp_wait_pane_ParamLimits

0xba50,	// (0x00018ff7) form2_midp_wait_pane

0xba7b,	// (0x00019022) list_single_2graphic_pane_cp4_ParamLimits

0xba7b,	// (0x00019022) list_single_2graphic_pane_cp4

0x933e,	// (0x000168e5) list_single_midp_graphic_pane_cp_ParamLimits

0x933e,	// (0x000168e5) list_single_midp_graphic_pane_cp

0x3713,	// (0x00010cba) list_highlight_pane_cp20

0xbaa3,	// (0x0001904a) list_single_2graphic_pane_g1_cp4

0xacff,	// (0x000182a6) list_single_2graphic_pane_g2_cp4

0xbaab,	// (0x00019052) list_single_2graphic_pane_t1_cp4

0x378f,	// (0x00010d36) list_highlight_pane_cp21

0xbaba,	// (0x00019061) list_single_midp_graphic_pane_g4_cp

0xbac9,	// (0x00019070) list_single_midp_graphic_pane_t1_cp

0xbade,	// (0x00019085) form2_mdip_string_pane_t1_ParamLimits

0xbade,	// (0x00019085) form2_mdip_string_pane_t1

0x3713,	// (0x00010cba) bg_wml_button_pane_cp2

0x36e9,	// (0x00010c90) form2_midp_image_pane_g1

0x3b1b,	// (0x000110c2) list_double_large_graphic_pane_g5_ParamLimits

0x3b1b,	// (0x000110c2) list_double_large_graphic_pane_g5

0x8a86,	// (0x0001602d) midp_form_pane_ParamLimits

0x378f,	// (0x00010d36) main_apps_wheel_pane_ParamLimits

0x6316,	// (0x000138bd) popup_preview_window_ParamLimits

0x6316,	// (0x000138bd) popup_preview_window

0x64d1,	// (0x00013a78) popup_touch_info_window_ParamLimits

0x64d1,	// (0x00013a78) popup_touch_info_window

0x64ef,	// (0x00013a96) popup_touch_menu_window_ParamLimits

0x64ef,	// (0x00013a96) popup_touch_menu_window

0x36df,	// (0x00010c86) bg_popup_sub_pane_cp6

0xbbe5,	// (0x0001918c) list_touch_menu_pane

0xbbed,	// (0x00019194) list_single_touch_menu_pane_ParamLimits

0xbbed,	// (0x00019194) list_single_touch_menu_pane

0xbc03,	// (0x000191aa) list_single_touch_menu_pane_t1

0x378f,	// (0x00010d36) bg_popup_sub_pane_cp7_ParamLimits

0x378f,	// (0x00010d36) bg_popup_sub_pane_cp7

0xbc11,	// (0x000191b8) heading_sub_pane

0xbc19,	// (0x000191c0) list_touch_info_pane_ParamLimits

0xbc19,	// (0x000191c0) list_touch_info_pane

0xbc28,	// (0x000191cf) list_single_touch_info_pane_ParamLimits

0xbc28,	// (0x000191cf) list_single_touch_info_pane

0xbc3a,	// (0x000191e1) list_single_touch_info_pane_t1

0xbc48,	// (0x000191ef) list_single_touch_info_pane_t2

0x0001,

0xfae8,	// (0x0001d08f) list_single_touch_info_pane_t

0x4875,	// (0x00011e1c) bg_popup_heading_pane_cp

0xbc56,	// (0x000191fd) heading_sub_pane_t1

0x9263,	// (0x0001680a) bg_popup_preview_window_pane_cp_ParamLimits

0x9263,	// (0x0001680a) bg_popup_preview_window_pane_cp

0xbc11,	// (0x000191b8) heading_preview_pane

0xbc19,	// (0x000191c0) list_preview_pane_ParamLimits

0xbc19,	// (0x000191c0) list_preview_pane

0xbc64,	// (0x0001920b) popup_preview_window_g1

0xbc28,	// (0x000191cf) list_single_preview_pane_ParamLimits

0xbc28,	// (0x000191cf) list_single_preview_pane

0xbc6c,	// (0x00019213) list_single_preview_pane_g1

0xbc74,	// (0x0001921b) list_single_preview_pane_t1

0xbc3a,	// (0x000191e1) list_single_preview_pane_t2

0x0001,

0xfaed,	// (0x0001d094) list_single_preview_pane_t

0xbc82,	// (0x00019229) bg_popup_heading_pane_cp2_ParamLimits

0xbc82,	// (0x00019229) bg_popup_heading_pane_cp2

0xbc98,	// (0x0001923f) heading_preview_pane_g1

0xbca0,	// (0x00019247) heading_preview_pane_t1_ParamLimits

0xbca0,	// (0x00019247) heading_preview_pane_t1

0x37fc,	// (0x00010da3) soft_indicator_pane_t1_ParamLimits

0x3adb,	// (0x00011082) scroll_pane_ParamLimits

0x410a,	// (0x000116b1) scroll_sc2_left_pane

0x4101,	// (0x000116a8) scroll_sc2_right_pane

0x4129,	// (0x000116d0) scroll_bg_pane_g1_ParamLimits

0x413e,	// (0x000116e5) scroll_bg_pane_g2_ParamLimits

0x4156,	// (0x000116fd) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x0001cc56) scroll_bg_pane_g_ParamLimits

0x4129,	// (0x000116d0) scroll_handle_pane_g1_ParamLimits

0x416b,	// (0x00011712) scroll_handle_pane_g2_ParamLimits

0x4156,	// (0x000116fd) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x0001cc5d) scroll_handle_pane_g_ParamLimits

0x5f99,	// (0x00013540) popup_choice_list_window_ParamLimits

0x5f99,	// (0x00013540) popup_choice_list_window

0x905f,	// (0x00016606) choice_list_pane

0x910f,	// (0x000166b6) cell_toolbar_pane_t1

0x9137,	// (0x000166de) toolbar_button_pane_ParamLimits

0xa2e8,	// (0x0001788f) ai_gene_pane_1_t2_ParamLimits

0xa2e8,	// (0x0001788f) ai_gene_pane_1_t2

0x0001,

0xf8de,	// (0x0001ce85) ai_gene_pane_1_t_ParamLimits

0xf8de,	// (0x0001ce85) ai_gene_pane_1_t

0xbcbd,	// (0x00019264) scroll_sc2_left_pane_g1

0xbcbd,	// (0x00019264) scroll_sc2_right_pane_g1

0x4a20,	// (0x00011fc7) bg_popup_sub_pane_cp10

0xbcc7,	// (0x0001926e) list_choice_list_pane

0xbce0,	// (0x00019287) list_single_choice_list_pane_ParamLimits

0xbce0,	// (0x00019287) list_single_choice_list_pane

0xbcf3,	// (0x0001929a) list_single_choice_list_pane_g1

0x8696,	// (0x00015c3d) list_single_choice_list_pane_t1_ParamLimits

0x8696,	// (0x00015c3d) list_single_choice_list_pane_t1

0xbcfb,	// (0x000192a2) choice_list_pane_g1

0xbd03,	// (0x000192aa) choice_list_pane_t1

0x36df,	// (0x00010c86) input_focus_pane_cp11

0x3f1c,	// (0x000114c3) title_pane_stacon_g2_ParamLimits

0x3f1c,	// (0x000114c3) title_pane_stacon_g2

0x0002,

0xf695,	// (0x0001cc3c) title_pane_stacon_g_ParamLimits

0xf695,	// (0x0001cc3c) title_pane_stacon_g

0x4875,	// (0x00011e1c) cursor_press_pane

0x6041,	// (0x000135e8) popup_fep_hwr_window_ParamLimits

0x6041,	// (0x000135e8) popup_fep_hwr_window

0x60b9,	// (0x00013660) popup_fep_vkb_window_ParamLimits

0x60b9,	// (0x00013660) popup_fep_vkb_window

0xbd11,	// (0x000192b8) cursor_press_pane_g1

0x0002,

0xfb16,	// (0x0001d0bd) fep_vkb_side_pane_g_ParamLimits

0x6aa1,	// (0x00014048) fep_hwr_candidate_pane_ParamLimits

0x6aa1,	// (0x00014048) fep_hwr_candidate_pane

0x6acb,	// (0x00014072) fep_hwr_side_pane_ParamLimits

0x6acb,	// (0x00014072) fep_hwr_side_pane

0x6aeb,	// (0x00014092) fep_hwr_top_pane_ParamLimits

0x6aeb,	// (0x00014092) fep_hwr_top_pane

0x6b03,	// (0x000140aa) fep_hwr_write_pane_ParamLimits

0x6b03,	// (0x000140aa) fep_hwr_write_pane

0xfb16,	// (0x0001d0bd) fep_vkb_side_pane_g

0xbd19,	// (0x000192c0) fep_hwr_top_pane_g1

0xbd2b,	// (0x000192d2) fep_hwr_top_pane_g2

0x6b3d,	// (0x000140e4) fep_hwr_top_pane_g3

0x0002,

0xfaf2,	// (0x0001d099) fep_hwr_top_pane_g

0x6b52,	// (0x000140f9) fep_hwr_top_text_pane

0x422e,	// (0x000117d5) fep_hwr_top_text_pane_g1

0xbd61,	// (0x00019308) fep_hwr_top_text_pane_t1

0x6c48,	// (0x000141ef) fep_hwr_candidate_pane_g1

0xbfa6,	// (0x0001954d) fep_vkb_keypad_pane_g3_ParamLimits

0xbfa6,	// (0x0001954d) fep_vkb_keypad_pane_g3

0xbfce,	// (0x00019575) fep_vkb_keypad_pane_g4_ParamLimits

0xbfce,	// (0x00019575) fep_vkb_keypad_pane_g4

0xc03d,	// (0x000195e4) fep_vkb_bottom_pane_g2_ParamLimits

0xc03d,	// (0x000195e4) fep_vkb_bottom_pane_g2

0x0001,

0xfb1d,	// (0x0001d0c4) fep_vkb_bottom_pane_g_ParamLimits

0xfb1d,	// (0x0001d0c4) fep_vkb_bottom_pane_g

0xbcbd,	// (0x00019264) cell_vkb_side_pane_g2

0x0001,

0xfb27,	// (0x0001d0ce) cell_vkb_side_pane_g

0xc0c8,	// (0x0001966f) cell_vkb_side_pane_t1

0xc0d6,	// (0x0001967d) cell_vkb_side_pane_t1_copy1

0xbcbd,	// (0x00019264) bg_fep_vkb_candidate_pane_g2

0xc202,	// (0x000197a9) cell_vkb_candidate_pane_ParamLimits

0xbd6f,	// (0x00019316) aid_size_cell_vkb_ParamLimits

0xbd6f,	// (0x00019316) aid_size_cell_vkb

0xc202,	// (0x000197a9) cell_vkb_candidate_pane

0x6c6f,	// (0x00014216) bg_popup_fep_shadow_pane_g1

0xbdfd,	// (0x000193a4) fep_vkb_bottom_pane_ParamLimits

0xbdfd,	// (0x000193a4) fep_vkb_bottom_pane

0xbe33,	// (0x000193da) fep_vkb_candidate_pane_ParamLimits

0xbe33,	// (0x000193da) fep_vkb_candidate_pane

0xbe4f,	// (0x000193f6) fep_vkb_keypad_pane_ParamLimits

0xbe4f,	// (0x000193f6) fep_vkb_keypad_pane

0xbe8e,	// (0x00019435) fep_vkb_side_pane_ParamLimits

0xbe8e,	// (0x00019435) fep_vkb_side_pane

0xbeca,	// (0x00019471) fep_vkb_top_pane_ParamLimits

0xbeca,	// (0x00019471) fep_vkb_top_pane

0xbeff,	// (0x000194a6) fep_vkb_top_pane_g1_ParamLimits

0xbeff,	// (0x000194a6) fep_vkb_top_pane_g1

0xbf0e,	// (0x000194b5) fep_vkb_top_pane_g2_ParamLimits

0xbf0e,	// (0x000194b5) fep_vkb_top_pane_g2

0xbf1d,	// (0x000194c4) fep_vkb_top_pane_g3_ParamLimits

0xbf1d,	// (0x000194c4) fep_vkb_top_pane_g3

0x0003,

0xfb0d,	// (0x0001d0b4) fep_vkb_top_pane_g_ParamLimits

0xfb0d,	// (0x0001d0b4) fep_vkb_top_pane_g

0xbf3b,	// (0x000194e2) fep_vkb_top_text_pane_ParamLimits

0xbf3b,	// (0x000194e2) fep_vkb_top_text_pane

0xbf4c,	// (0x000194f3) fep_vkb_side_pane_g1_ParamLimits

0xbf4c,	// (0x000194f3) fep_vkb_side_pane_g1

0xbf95,	// (0x0001953c) grid_vkb_side_pane_ParamLimits

0xbf95,	// (0x0001953c) grid_vkb_side_pane

0x6c77,	// (0x0001421e) bg_popup_fep_shadow_pane_g2

0x6c80,	// (0x00014227) bg_popup_fep_shadow_pane_g3

0x6c88,	// (0x0001422f) bg_popup_fep_shadow_pane_g4

0x6c91,	// (0x00014238) bg_popup_fep_shadow_pane_g5

0x6c9b,	// (0x00014242) bg_popup_fep_shadow_pane_g6

0x6ca3,	// (0x0001424a) bg_popup_fep_shadow_pane_g7

0x3c8f,	// (0x00011236) bg_popup_fep_shadow_pane_g8

0xbfec,	// (0x00019593) grid_vkb_keypad_number_pane_ParamLimits

0xbfec,	// (0x00019593) grid_vkb_keypad_number_pane

0xbffc,	// (0x000195a3) grid_vkb_keypad_pane_ParamLimits

0xbffc,	// (0x000195a3) grid_vkb_keypad_pane

0xc022,	// (0x000195c9) fep_vkb_bottom_pane_g1_ParamLimits

0xc022,	// (0x000195c9) fep_vkb_bottom_pane_g1

0xc04b,	// (0x000195f2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc04b,	// (0x000195f2) grid_vkb_keypad_bottom_left_pane

0xc060,	// (0x00019607) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc060,	// (0x00019607) grid_vkb_keypad_bottom_right_pane

0xc075,	// (0x0001961c) fep_vkb_top_text_pane_g1

0xc090,	// (0x00019637) fep_vkb_top_text_pane_t1

0xc0a5,	// (0x0001964c) cell_vkb_side_pane_ParamLimits

0xc0a5,	// (0x0001964c) cell_vkb_side_pane

0xbcbd,	// (0x00019264) cell_vkb_side_pane_g1

0xc0e4,	// (0x0001968b) cell_vkb_keypad_pane_ParamLimits

0xc0e4,	// (0x0001968b) cell_vkb_keypad_pane

0xc159,	// (0x00019700) cell_vkb_keypad_pane_g1

0x0008,

0xfb3a,	// (0x0001d0e1) bg_popup_fep_shadow_pane_g

0x6cb5,	// (0x0001425c) cell_hwr_side_pane_g1

0x6cb5,	// (0x0001425c) cell_hwr_side_pane_g2

0xc163,	// (0x0001970a) cell_vkb_keypad_pane_t1

0xc171,	// (0x00019718) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc171,	// (0x00019718) cell_vkb_keypad_bottom_left_pane

0xc18e,	// (0x00019735) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc18e,	// (0x00019735) cell_vkb_keypad_bottom_right_pane

0xbcbd,	// (0x00019264) cell_vkb_keypad_bottom_left_pane_g1

0xbcbd,	// (0x00019264) cell_vkb_keypad_bottom_right_pane_g1

0xc1c7,	// (0x0001976e) cell_vkb_keypad_number_pane_ParamLimits

0xc1c7,	// (0x0001976e) cell_vkb_keypad_number_pane

0xc1e6,	// (0x0001978d) cell_vkb_keypad_number_pane_g1

0xc1f0,	// (0x00019797) cell_vkb_keypad_number_pane_g2

0xc1f9,	// (0x000197a0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2c,	// (0x0001d0d3) cell_vkb_keypad_number_pane_g

0xc163,	// (0x0001970a) cell_vkb_keypad_number_pane_t1

0xc21d,	// (0x000197c4) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x0001d0f4) cell_hwr_side_pane_g

0xc236,	// (0x000197dd) cell_hwr_side_pane_t1

0x6cbf,	// (0x00014266) cell_hwr_side_pane_t1_copy1

0x6ccd,	// (0x00014274) cell_hwr_candidate_pane_g1

0x6cfc,	// (0x000142a3) cell_hwr_candidate_pane_t1

0xbcbd,	// (0x00019264) cell_vkb_candidate_pane_g2

0xc27a,	// (0x00019821) cell_vkb_candidate_pane_t1

0x6a68,	// (0x0001400f) bg_popup_fep_shadow_pane_ParamLimits

0x6a68,	// (0x0001400f) bg_popup_fep_shadow_pane

0x6b1d,	// (0x000140c4) bg_fep_hwr_top_pane_g4

0xbd3d,	// (0x000192e4) bg_hwr_side_pane_g1_ParamLimits

0xbd3d,	// (0x000192e4) bg_hwr_side_pane_g1

0x6b8e,	// (0x00014135) cell_hwr_side_pane_ParamLimits

0x6b8e,	// (0x00014135) cell_hwr_side_pane

0x6bc9,	// (0x00014170) fep_hwr_write_pane_g1_ParamLimits

0x6bc9,	// (0x00014170) fep_hwr_write_pane_g1

0x6bd6,	// (0x0001417d) fep_hwr_write_pane_g2_ParamLimits

0x6bd6,	// (0x0001417d) fep_hwr_write_pane_g2

0x6be3,	// (0x0001418a) fep_hwr_write_pane_g3_ParamLimits

0x6be3,	// (0x0001418a) fep_hwr_write_pane_g3

0x6bf1,	// (0x00014198) fep_hwr_write_pane_g4_ParamLimits

0x6bf1,	// (0x00014198) fep_hwr_write_pane_g4

0x0005,

0xfaf9,	// (0x0001d0a0) fep_hwr_write_pane_g_ParamLimits

0xfaf9,	// (0x0001d0a0) fep_hwr_write_pane_g

0x6b1d,	// (0x000140c4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6b1d,	// (0x000140c4) bg_fep_hwr_candidate_pane_g2

0x6c06,	// (0x000141ad) cell_hwr_candidate_pane_ParamLimits

0x6c06,	// (0x000141ad) cell_hwr_candidate_pane

0x6c48,	// (0x000141ef) fep_hwr_candidate_pane_g1_ParamLimits

0xbd9d,	// (0x00019344) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbd9d,	// (0x00019344) bg_popup_fep_shadow_pane_cp2

0xbf2d,	// (0x000194d4) fep_vkb_top_pane_g4_ParamLimits

0xbf2d,	// (0x000194d4) fep_vkb_top_pane_g4

0xbf73,	// (0x0001951a) fep_vkb_side_pane_g2_ParamLimits

0xbf73,	// (0x0001951a) fep_vkb_side_pane_g2

0x83c7,	// (0x0001596e) list_setting_pane_t4_ParamLimits

0x83c7,	// (0x0001596e) list_setting_pane_t4

0x8441,	// (0x000159e8) list_setting_number_pane_t5_ParamLimits

0x8441,	// (0x000159e8) list_setting_number_pane_t5

0x8847,	// (0x00015dee) list_double_heading_pane_cp2_ParamLimits

0x8847,	// (0x00015dee) list_double_heading_pane_cp2

0x3e42,	// (0x000113e9) list_double_heading_pane_g1_cp2_ParamLimits

0x3e42,	// (0x000113e9) list_double_heading_pane_g1_cp2

0xc288,	// (0x0001982f) list_double_heading_pane_g2_cp2_ParamLimits

0xc288,	// (0x0001982f) list_double_heading_pane_g2_cp2

0xc29c,	// (0x00019843) list_double_heading_pane_t1_cp2_ParamLimits

0xc29c,	// (0x00019843) list_double_heading_pane_t1_cp2

0xc2b2,	// (0x00019859) list_double_heading_pane_t2_cp2_ParamLimits

0xc2b2,	// (0x00019859) list_double_heading_pane_t2_cp2

0x36d7,	// (0x00010c7e) aid_value_unit2

0x57be,	// (0x00012d65) popup_preview_fixed_window

0x38d3,	// (0x00010e7a) bg_popup_preview_window_pane_cp02

0xc2c4,	// (0x0001986b) list_preview_fixed_pane

0xc30a,	// (0x000198b1) list_empty_pane_fp_ParamLimits

0xc30a,	// (0x000198b1) list_empty_pane_fp

0xc30a,	// (0x000198b1) list_single_cale_day_pane_fp_ParamLimits

0xc30a,	// (0x000198b1) list_single_cale_day_pane_fp

0xc30a,	// (0x000198b1) list_single_graphic_heading_pane_fp_ParamLimits

0xc30a,	// (0x000198b1) list_single_graphic_heading_pane_fp

0xc30a,	// (0x000198b1) list_single_graphic_pane_fp_ParamLimits

0xc30a,	// (0x000198b1) list_single_graphic_pane_fp

0xc30a,	// (0x000198b1) list_single_heading_pane_fp_ParamLimits

0xc30a,	// (0x000198b1) list_single_heading_pane_fp

0xc30a,	// (0x000198b1) list_single_pane_fp_ParamLimits

0xc30a,	// (0x000198b1) list_single_pane_fp

0xc320,	// (0x000198c7) list_single_pane_fp_g1_ParamLimits

0xc320,	// (0x000198c7) list_single_pane_fp_g1

0x3e4e,	// (0x000113f5) list_single_pane_fp_g2_ParamLimits

0x3e4e,	// (0x000113f5) list_single_pane_fp_g2

0xc32c,	// (0x000198d3) list_single_pane_fp_g3_ParamLimits

0xc32c,	// (0x000198d3) list_single_pane_fp_g3

0xc340,	// (0x000198e7) list_single_pane_fp_g4_ParamLimits

0xc340,	// (0x000198e7) list_single_pane_fp_g4

0x0003,

0xfb60,	// (0x0001d107) list_single_pane_fp_g_ParamLimits

0xfb60,	// (0x0001d107) list_single_pane_fp_g

0xc34c,	// (0x000198f3) list_single_pane_fp_t1_ParamLimits

0xc34c,	// (0x000198f3) list_single_pane_fp_t1

0xc363,	// (0x0001990a) list_single_graphic_pane_fp_g1_ParamLimits

0xc363,	// (0x0001990a) list_single_graphic_pane_fp_g1

0xc320,	// (0x000198c7) list_single_graphic_pane_fp_g2_ParamLimits

0xc320,	// (0x000198c7) list_single_graphic_pane_fp_g2

0x3e4e,	// (0x000113f5) list_single_graphic_pane_fp_g3_ParamLimits

0x3e4e,	// (0x000113f5) list_single_graphic_pane_fp_g3

0xc32c,	// (0x000198d3) list_single_graphic_pane_fp_g4_ParamLimits

0xc32c,	// (0x000198d3) list_single_graphic_pane_fp_g4

0xc340,	// (0x000198e7) list_single_graphic_pane_fp_g5_ParamLimits

0xc340,	// (0x000198e7) list_single_graphic_pane_fp_g5

0x0004,

0xfb69,	// (0x0001d110) list_single_graphic_pane_fp_g_ParamLimits

0xfb69,	// (0x0001d110) list_single_graphic_pane_fp_g

0xc36f,	// (0x00019916) list_single_graphic_pane_fp_t1_ParamLimits

0xc36f,	// (0x00019916) list_single_graphic_pane_fp_t1

0xc363,	// (0x0001990a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc363,	// (0x0001990a) list_single_graphic_heading_pane_fp_g1

0xc320,	// (0x000198c7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc320,	// (0x000198c7) list_single_graphic_heading_pane_fp_g2

0x3e4e,	// (0x000113f5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3e4e,	// (0x000113f5) list_single_graphic_heading_pane_fp_g3

0xc32c,	// (0x000198d3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc32c,	// (0x000198d3) list_single_graphic_heading_pane_fp_g4

0xc340,	// (0x000198e7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc340,	// (0x000198e7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb69,	// (0x0001d110) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb69,	// (0x0001d110) list_single_graphic_heading_pane_fp_g

0xc385,	// (0x0001992c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc385,	// (0x0001992c) list_single_graphic_heading_pane_fp_t1

0xc39b,	// (0x00019942) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc39b,	// (0x00019942) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb74,	// (0x0001d11b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb74,	// (0x0001d11b) list_single_graphic_heading_pane_fp_t

0xc3ad,	// (0x00019954) list_single_cale_day_pane_fp_g1_ParamLimits

0xc3ad,	// (0x00019954) list_single_cale_day_pane_fp_g1

0xc3e5,	// (0x0001998c) list_single_cale_day_pane_fp_g2_ParamLimits

0xc3e5,	// (0x0001998c) list_single_cale_day_pane_fp_g2

0xc3f1,	// (0x00019998) list_single_cale_day_pane_fp_g3_ParamLimits

0xc3f1,	// (0x00019998) list_single_cale_day_pane_fp_g3

0xc419,	// (0x000199c0) list_single_cale_day_pane_fp_g4_ParamLimits

0xc419,	// (0x000199c0) list_single_cale_day_pane_fp_g4

0xc43d,	// (0x000199e4) list_single_cale_day_pane_fp_g5_ParamLimits

0xc43d,	// (0x000199e4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb79,	// (0x0001d120) list_single_cale_day_pane_fp_g_ParamLimits

0xfb79,	// (0x0001d120) list_single_cale_day_pane_fp_g

0xc461,	// (0x00019a08) list_single_cale_day_pane_fp_t1_ParamLimits

0xc461,	// (0x00019a08) list_single_cale_day_pane_fp_t1

0xc487,	// (0x00019a2e) list_single_cale_day_pane_fp_t2_ParamLimits

0xc487,	// (0x00019a2e) list_single_cale_day_pane_fp_t2

0xc4a0,	// (0x00019a47) list_single_cale_day_pane_fp_t3_ParamLimits

0xc4a0,	// (0x00019a47) list_single_cale_day_pane_fp_t3

0x0002,

0xfb84,	// (0x0001d12b) list_single_cale_day_pane_fp_t_ParamLimits

0xfb84,	// (0x0001d12b) list_single_cale_day_pane_fp_t

0xc320,	// (0x000198c7) list_empty_pane_fp_g1_ParamLimits

0xc320,	// (0x000198c7) list_empty_pane_fp_g1

0xc4b9,	// (0x00019a60) list_empty_pane_fp_t1

0xc4c7,	// (0x00019a6e) list_empty_pane_fp_t2

0x0001,

0xfb8b,	// (0x0001d132) list_empty_pane_fp_t

0xc320,	// (0x000198c7) list_single_heading_pane_fp_g1_ParamLimits

0xc320,	// (0x000198c7) list_single_heading_pane_fp_g1

0x3e4e,	// (0x000113f5) list_single_heading_pane_fp_g2_ParamLimits

0x3e4e,	// (0x000113f5) list_single_heading_pane_fp_g2

0xc32c,	// (0x000198d3) list_single_heading_pane_fp_g3_ParamLimits

0xc32c,	// (0x000198d3) list_single_heading_pane_fp_g3

0x0002,

0xfb90,	// (0x0001d137) list_single_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x0001d137) list_single_heading_pane_fp_g

0xc4d5,	// (0x00019a7c) list_single_heading_pane_fp_t1_ParamLimits

0xc4d5,	// (0x00019a7c) list_single_heading_pane_fp_t1

0xc4e7,	// (0x00019a8e) list_single_heading_pane_fp_t2_ParamLimits

0xc4e7,	// (0x00019a8e) list_single_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x0001d13e) list_single_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x0001d13e) list_single_heading_pane_fp_t

0x86fc,	// (0x00015ca3) aid_size_cell_fast

0x38b6,	// (0x00010e5d) soft_indicator_pane_cp1_t1

0x8705,	// (0x00015cac) cell_app_pane_cp2_ParamLimits

0x8705,	// (0x00015cac) cell_app_pane_cp2

0x6a8a,	// (0x00014031) fep_hwr_candidate_drop_down_list_pane

0x6c62,	// (0x00014209) fep_hwr_candidate_pane_g3_ParamLimits

0x6c62,	// (0x00014209) fep_hwr_candidate_pane_g3

0x2bd0,	// (0x00010177) fep_hwr_candidate_pane_g4_ParamLimits

0x2bd0,	// (0x00010177) fep_hwr_candidate_pane_g4

0x0002,

0xfb06,	// (0x0001d0ad) fep_hwr_candidate_pane_g_ParamLimits

0xfb06,	// (0x0001d0ad) fep_hwr_candidate_pane_g

0xbe22,	// (0x000193c9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe22,	// (0x000193c9) fep_vkb_candidate_drop_down_list_pane

0xc225,	// (0x000197cc) fep_vkb_candidate_pane_g3

0xc22d,	// (0x000197d4) fep_vkb_candidate_pane_g4

0x0002,

0xfb33,	// (0x0001d0da) fep_vkb_candidate_pane_g

0x6ccd,	// (0x00014274) cell_hwr_candidate_pane_g1_ParamLimits

0x6cdb,	// (0x00014282) cell_hwr_candidate_pane_g3_ParamLimits

0x6cdb,	// (0x00014282) cell_hwr_candidate_pane_g3

0xdf94,	// (0x0001b53b) cell_hwr_candidate_pane_g4_ParamLimits

0xdf94,	// (0x0001b53b) cell_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x0001d0f9) cell_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x0001d0f9) cell_hwr_candidate_pane_g

0xc244,	// (0x000197eb) cell_vkb_candidate_pane_g3_ParamLimits

0xc244,	// (0x000197eb) cell_vkb_candidate_pane_g3

0xc25f,	// (0x00019806) cell_vkb_candidate_pane_g4_ParamLimits

0xc25f,	// (0x00019806) cell_vkb_candidate_pane_g4

0xc4fd,	// (0x00019aa4) cell_app_pane_cp2_g1_ParamLimits

0xc4fd,	// (0x00019aa4) cell_app_pane_cp2_g1

0xc51b,	// (0x00019ac2) cell_app_pane_cp2_g2_ParamLimits

0xc51b,	// (0x00019ac2) cell_app_pane_cp2_g2

0x0001,

0xfb9c,	// (0x0001d143) cell_app_pane_cp2_g_ParamLimits

0xfb9c,	// (0x0001d143) cell_app_pane_cp2_g

0xc527,	// (0x00019ace) cell_app_pane_cp2_t1_ParamLimits

0xc527,	// (0x00019ace) cell_app_pane_cp2_t1

0x3bb1,	// (0x00011158) grid_highlight_pane_cp1_ParamLimits

0x3bb1,	// (0x00011158) grid_highlight_pane_cp1

0x6d1a,	// (0x000142c1) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d1a,	// (0x000142c1) cell_hwr_candidate_pane_cp1

0x6ccd,	// (0x00014274) fep_hwr_candidate_drop_down_list_pane_g1

0x6d39,	// (0x000142e0) fep_hwr_candidate_drop_down_list_pane_g2

0x6d46,	// (0x000142ed) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba1,	// (0x0001d148) fep_hwr_candidate_drop_down_list_pane_g

0x6d53,	// (0x000142fa) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d5c,	// (0x00014303) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d5c,	// (0x00014303) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6d69,	// (0x00014310) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6d69,	// (0x00014310) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6d76,	// (0x0001431d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6d76,	// (0x0001431d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6d83,	// (0x0001432a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d83,	// (0x0001432a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6d9e,	// (0x00014345) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d9e,	// (0x00014345) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6db9,	// (0x00014360) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6db9,	// (0x00014360) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6dd4,	// (0x0001437b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6dd4,	// (0x0001437b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6def,	// (0x00014396) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6def,	// (0x00014396) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba8,	// (0x0001d14f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba8,	// (0x0001d14f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc539,	// (0x00019ae0) cell_vkb_candidate_pane_cp1_ParamLimits

0xc539,	// (0x00019ae0) cell_vkb_candidate_pane_cp1

0xbf2d,	// (0x000194d4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf2d,	// (0x000194d4) fep_vkb_candidate_drop_down_list_pane_g1

0xc559,	// (0x00019b00) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc559,	// (0x00019b00) fep_vkb_candidate_drop_down_list_pane_g2

0xc566,	// (0x00019b0d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc566,	// (0x00019b0d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001d160) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb9,	// (0x0001d160) fep_vkb_candidate_drop_down_list_pane_g

0xc573,	// (0x00019b1a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc573,	// (0x00019b1a) fep_vkb_candidate_drop_down_list_scroll_pane

0xc580,	// (0x00019b27) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc580,	// (0x00019b27) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc58d,	// (0x00019b34) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc58d,	// (0x00019b34) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc599,	// (0x00019b40) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc599,	// (0x00019b40) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5a5,	// (0x00019b4c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5a5,	// (0x00019b4c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5c6,	// (0x00019b6d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5c6,	// (0x00019b6d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc5e7,	// (0x00019b8e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc5e7,	// (0x00019b8e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc608,	// (0x00019baf) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc608,	// (0x00019baf) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc629,	// (0x00019bd0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc629,	// (0x00019bd0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001d167) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001d167) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7b7c,	// (0x00015123) title_pane_g1_ParamLimits

0x7b89,	// (0x00015130) title_pane_g2_ParamLimits

0xf529,	// (0x0001cad0) title_pane_g_ParamLimits

0x4226,	// (0x000117cd) aid_call2_pane

0x421e,	// (0x000117c5) aid_call_pane

0x422e,	// (0x000117d5) popup_clock_analogue_window_g1

0x422e,	// (0x000117d5) popup_clock_analogue_window_g2

0x5b2f,	// (0x000130d6) popup_clock_analogue_window_g3

0x5b38,	// (0x000130df) popup_clock_analogue_window_g4

0x36e9,	// (0x00010c90) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x0001cc6b) popup_clock_analogue_window_g

0x5b40,	// (0x000130e7) popup_clock_analogue_window_t1

0x5b4e,	// (0x000130f5) clock_digital_number_pane_ParamLimits

0x5b4e,	// (0x000130f5) clock_digital_number_pane

0x5b5a,	// (0x00013101) clock_digital_number_pane_cp02_ParamLimits

0x5b5a,	// (0x00013101) clock_digital_number_pane_cp02

0x5b66,	// (0x0001310d) clock_digital_number_pane_cp03_ParamLimits

0x5b66,	// (0x0001310d) clock_digital_number_pane_cp03

0x5b72,	// (0x00013119) clock_digital_number_pane_cp04_ParamLimits

0x5b72,	// (0x00013119) clock_digital_number_pane_cp04

0x5b7e,	// (0x00013125) clock_digital_separator_pane_ParamLimits

0x5b7e,	// (0x00013125) clock_digital_separator_pane

0x5b8a,	// (0x00013131) popup_clock_digital_window_t1_ParamLimits

0x5b8a,	// (0x00013131) popup_clock_digital_window_t1

0x36e9,	// (0x00010c90) clock_digital_number_pane_g1

0x36e9,	// (0x00010c90) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x0001cc76) clock_digital_number_pane_g

0x36e9,	// (0x00010c90) clock_digital_separator_pane_g1

0x36e9,	// (0x00010c90) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x0001cc76) clock_digital_separator_pane_g

0x8c2a,	// (0x000161d1) aid_fill_nsta_ParamLimits

0x8d76,	// (0x0001631d) indicator_nsta_pane_ParamLimits

0x8eef,	// (0x00016496) popup_clock_analogue_window

0x8eef,	// (0x00016496) popup_clock_digital_window

0xb63d,	// (0x00018be4) grid_indicator_nsta_pane_ParamLimits

0xb666,	// (0x00018c0d) clock_nsta_pane_t2

0x0001,

0xfa86,	// (0x0001d02d) clock_nsta_pane_t

0x5af3,	// (0x0001309a) aid_size_max_handle

0x5afd,	// (0x000130a4) aid_size_min_handle

0x4875,	// (0x00011e1c) editor_scroll_pane

0xc644,	// (0x00019beb) ex_editor_pane

0x3d51,	// (0x000112f8) scroll_pane_cp13

0x3b07,	// (0x000110ae) scroll_pane_cp14

0x427c,	// (0x00011823) scroll_pane_cp36

0x885b,	// (0x00015e02) list_single_graphic_hl_pane_cp2_ParamLimits

0x885b,	// (0x00015e02) list_single_graphic_hl_pane_cp2

0xa8aa,	// (0x00017e51) list_single_graphic_hl_pane_ParamLimits

0xa8aa,	// (0x00017e51) list_single_graphic_hl_pane

0xc64c,	// (0x00019bf3) aid_size_min_hl_cp1

0xc655,	// (0x00019bfc) list_highlight_pane_cp34_ParamLimits

0xc655,	// (0x00019bfc) list_highlight_pane_cp34

0xc666,	// (0x00019c0d) list_single_graphic_hl_pane_g1_ParamLimits

0xc666,	// (0x00019c0d) list_single_graphic_hl_pane_g1

0xc673,	// (0x00019c1a) list_single_graphic_hl_pane_g2_ParamLimits

0xc673,	// (0x00019c1a) list_single_graphic_hl_pane_g2

0xc673,	// (0x00019c1a) list_single_graphic_hl_pane_g3_ParamLimits

0xc673,	// (0x00019c1a) list_single_graphic_hl_pane_g3

0x476f,	// (0x00011d16) list_single_graphic_hl_pane_g4_ParamLimits

0x476f,	// (0x00011d16) list_single_graphic_hl_pane_g4

0xc67f,	// (0x00019c26) list_single_graphic_hl_pane_g5_ParamLimits

0xc67f,	// (0x00019c26) list_single_graphic_hl_pane_g5

0x0004,

0xfbd1,	// (0x0001d178) list_single_graphic_hl_pane_g_ParamLimits

0xfbd1,	// (0x0001d178) list_single_graphic_hl_pane_g

0xc693,	// (0x00019c3a) list_single_graphic_hl_pane_t1_ParamLimits

0xc693,	// (0x00019c3a) list_single_graphic_hl_pane_t1

0xc6a9,	// (0x00019c50) aid_size_min_hl_cp2

0xc6b2,	// (0x00019c59) list_highlight_pane_cp34_cp2_ParamLimits

0xc6b2,	// (0x00019c59) list_highlight_pane_cp34_cp2

0xc666,	// (0x00019c0d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc666,	// (0x00019c0d) list_single_graphic_hl_pane_g1_cp2

0xc6bf,	// (0x00019c66) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc6bf,	// (0x00019c66) list_single_graphic_hl_pane_g2_cp2

0xc6cb,	// (0x00019c72) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc6cb,	// (0x00019c72) list_single_graphic_hl_pane_g3_cp2

0x476f,	// (0x00011d16) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x476f,	// (0x00011d16) list_single_graphic_hl_pane_g4_cp2

0xc67f,	// (0x00019c26) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc67f,	// (0x00019c26) list_single_graphic_hl_pane_g5_cp2

0x5e35,	// (0x000133dc) control_pane_g4_ParamLimits

0x5e35,	// (0x000133dc) control_pane_g4

0x4a20,	// (0x00011fc7) bg_popup_sub_pane_cp10_ParamLimits

0xbcc7,	// (0x0001926e) list_choice_list_pane_ParamLimits

0xbcd6,	// (0x0001927d) scroll_pane_cp23

0x38d3,	// (0x00010e7a) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2c4,	// (0x0001986b) list_preview_fixed_pane_ParamLimits

0xc2da,	// (0x00019881) list_preview_fixed_pane_cp_ParamLimits

0xc2da,	// (0x00019881) list_preview_fixed_pane_cp

0xc2e6,	// (0x0001988d) popup_preview_fixed_window_g1_ParamLimits

0xc2e6,	// (0x0001988d) popup_preview_fixed_window_g1

0xc2f2,	// (0x00019899) popup_preview_fixed_window_g2_ParamLimits

0xc2f2,	// (0x00019899) popup_preview_fixed_window_g2

0x0002,

0xfb59,	// (0x0001d100) popup_preview_fixed_window_g_ParamLimits

0xfb59,	// (0x0001d100) popup_preview_fixed_window_g

0x5a67,	// (0x0001300e) aid_navi_side_left_pane_ParamLimits

0x5a7c,	// (0x00013023) aid_navi_side_right_pane_ParamLimits

0x5a94,	// (0x0001303b) navi_icon_pane_stacon_ParamLimits

0x5aa8,	// (0x0001304f) navi_navi_pane_stacon_ParamLimits

0x5a94,	// (0x0001303b) navi_text_pane_stacon_ParamLimits

0x568d,	// (0x00012c34) main_text_info_pane

0xc6ef,	// (0x00019c96) listscroll_text_info_pane

0xc6f7,	// (0x00019c9e) list_text_info_pane_ParamLimits

0xc6f7,	// (0x00019c9e) list_text_info_pane

0xc706,	// (0x00019cad) scroll_pane_cp24_ParamLimits

0xc706,	// (0x00019cad) scroll_pane_cp24

0xc724,	// (0x00019ccb) list_text_info_pane_t1_ParamLimits

0xc724,	// (0x00019ccb) list_text_info_pane_t1

0x5fb5,	// (0x0001355c) popup_fast_swap2_window_ParamLimits

0x5fb5,	// (0x0001355c) popup_fast_swap2_window

0xc758,	// (0x00019cff) aid_size_cell_fast2

0x36df,	// (0x00010c86) bg_popup_window_pane_cp17

0xc762,	// (0x00019d09) heading_pane_cp2

0xc76a,	// (0x00019d11) listscroll_fast2_pane

0xc772,	// (0x00019d19) grid_fast2_pane

0xc77c,	// (0x00019d23) listscroll_fast2_pane_g1

0xc784,	// (0x00019d2b) listscroll_fast2_pane_g2

0x0001,

0xfbdc,	// (0x0001d183) listscroll_fast2_pane_g

0x3d51,	// (0x000112f8) scroll_pane_cp26

0xc78e,	// (0x00019d35) cell_fast2_pane_ParamLimits

0xc78e,	// (0x00019d35) cell_fast2_pane

0xc7a3,	// (0x00019d4a) cell_fast2_pane_g1

0xc7ac,	// (0x00019d53) cell_fast2_pane_g2

0xc7b5,	// (0x00019d5c) cell_fast2_pane_g3

0x0002,

0xfbe1,	// (0x0001d188) cell_fast2_pane_g

0x3a3e,	// (0x00010fe5) grid_highlight_pane_cp9

0x5f7d,	// (0x00013524) main_eswt_pane_ParamLimits

0x5f7d,	// (0x00013524) main_eswt_pane

0xc71b,	// (0x00019cc2) list_single_text_info_pane

0xc7bd,	// (0x00019d64) eswt_ctrl_button_pane

0xc7bd,	// (0x00019d64) eswt_ctrl_canvas_pane

0xc7c5,	// (0x00019d6c) eswt_ctrl_combo_pane

0xc7bd,	// (0x00019d64) eswt_ctrl_default_pane

0xc7bd,	// (0x00019d64) eswt_ctrl_label_pane

0xc7cd,	// (0x00019d74) eswt_ctrl_wait_pane

0xc7d5,	// (0x00019d7c) eswt_shell_pane

0x36df,	// (0x00010c86) listscroll_eswt_app_pane

0xc7f5,	// (0x00019d9c) popup_eswt_tasktip_window_ParamLimits

0xc7f5,	// (0x00019d9c) popup_eswt_tasktip_window

0x9263,	// (0x0001680a) bg_popup_window_pane_cp18

0xc80e,	// (0x00019db5) eswt_control_pane_g1_ParamLimits

0xc80e,	// (0x00019db5) eswt_control_pane_g1

0xc81b,	// (0x00019dc2) eswt_control_pane_g2_ParamLimits

0xc81b,	// (0x00019dc2) eswt_control_pane_g2

0xc828,	// (0x00019dcf) eswt_control_pane_g3_ParamLimits

0xc828,	// (0x00019dcf) eswt_control_pane_g3

0xc835,	// (0x00019ddc) eswt_control_pane_g4_ParamLimits

0xc835,	// (0x00019ddc) eswt_control_pane_g4

0x0003,

0xfbe8,	// (0x0001d18f) eswt_control_pane_g_ParamLimits

0xfbe8,	// (0x0001d18f) eswt_control_pane_g

0x3bb1,	// (0x00011158) bg_button_pane_ParamLimits

0x3bb1,	// (0x00011158) bg_button_pane

0x3a53,	// (0x00010ffa) common_borders_pane_copy2_ParamLimits

0x3a53,	// (0x00010ffa) common_borders_pane_copy2

0xc842,	// (0x00019de9) control_button_pane_g1_ParamLimits

0xc842,	// (0x00019de9) control_button_pane_g1

0xc84e,	// (0x00019df5) control_button_pane_g2_ParamLimits

0xc84e,	// (0x00019df5) control_button_pane_g2

0xc85a,	// (0x00019e01) control_button_pane_g3_ParamLimits

0xc85a,	// (0x00019e01) control_button_pane_g3

0x0002,

0xfbf1,	// (0x0001d198) control_button_pane_g_ParamLimits

0xfbf1,	// (0x0001d198) control_button_pane_g

0xc86e,	// (0x00019e15) control_button_pane_t1

0xc87c,	// (0x00019e23) control_button_pane_t2

0x0001,

0xfbf8,	// (0x0001d19f) control_button_pane_t

0x9143,	// (0x000166ea) bg_button_pane_g1

0x9153,	// (0x000166fa) bg_button_pane_g2

0x914b,	// (0x000166f2) bg_button_pane_g3

0x9163,	// (0x0001670a) bg_button_pane_g4

0x915b,	// (0x00016702) bg_button_pane_g5

0x916b,	// (0x00016712) bg_button_pane_g6

0x9173,	// (0x0001671a) bg_button_pane_g7

0x9183,	// (0x0001672a) bg_button_pane_g8

0x917b,	// (0x00016722) bg_button_pane_g9

0x0008,

0xf832,	// (0x0001cdd9) bg_button_pane_g

0xbc82,	// (0x00019229) common_borders_pane_ParamLimits

0xbc82,	// (0x00019229) common_borders_pane

0xc80e,	// (0x00019db5) eswt_control_pane_g1_copy1_ParamLimits

0xc80e,	// (0x00019db5) eswt_control_pane_g1_copy1

0xc81b,	// (0x00019dc2) eswt_control_pane_g2_copy1_ParamLimits

0xc81b,	// (0x00019dc2) eswt_control_pane_g2_copy1

0xc828,	// (0x00019dcf) eswt_control_pane_g3_copy1_ParamLimits

0xc828,	// (0x00019dcf) eswt_control_pane_g3_copy1

0xc835,	// (0x00019ddc) eswt_control_pane_g4_copy1_ParamLimits

0xc835,	// (0x00019ddc) eswt_control_pane_g4_copy1

0xbcbd,	// (0x00019264) bg_eswt_ctrl_canvas_pane_g1

0xbc82,	// (0x00019229) common_borders_pane_cp2_ParamLimits

0xbc82,	// (0x00019229) common_borders_pane_cp2

0xbc82,	// (0x00019229) common_borders_pane_cp3_ParamLimits

0xbc82,	// (0x00019229) common_borders_pane_cp3

0xc88a,	// (0x00019e31) separator_horizontal_pane

0xc892,	// (0x00019e39) separator_vertical_pane

0xc80e,	// (0x00019db5) eswt_control_pane_g1_copy2_ParamLimits

0xc80e,	// (0x00019db5) eswt_control_pane_g1_copy2

0xc81b,	// (0x00019dc2) eswt_control_pane_g2_copy2_ParamLimits

0xc81b,	// (0x00019dc2) eswt_control_pane_g2_copy2

0xc828,	// (0x00019dcf) eswt_control_pane_g3_copy2_ParamLimits

0xc828,	// (0x00019dcf) eswt_control_pane_g3_copy2

0xc835,	// (0x00019ddc) eswt_control_pane_g4_copy2_ParamLimits

0xc835,	// (0x00019ddc) eswt_control_pane_g4_copy2

0x36df,	// (0x00010c86) common_borders_pane_cp4

0xc89b,	// (0x00019e42) separator_horizontal_pane_g1

0xc8a4,	// (0x00019e4b) separator_horizontal_pane_g2

0xc8ad,	// (0x00019e54) separator_horizontal_pane_g3

0x0002,

0xfbfd,	// (0x0001d1a4) separator_horizontal_pane_g

0xc80e,	// (0x00019db5) eswt_control_pane_g1_copy3_ParamLimits

0xc80e,	// (0x00019db5) eswt_control_pane_g1_copy3

0xc81b,	// (0x00019dc2) eswt_control_pane_g2_copy3_ParamLimits

0xc81b,	// (0x00019dc2) eswt_control_pane_g2_copy3

0xc828,	// (0x00019dcf) eswt_control_pane_g3_copy3_ParamLimits

0xc828,	// (0x00019dcf) eswt_control_pane_g3_copy3

0xc835,	// (0x00019ddc) eswt_control_pane_g4_copy3_ParamLimits

0xc835,	// (0x00019ddc) eswt_control_pane_g4_copy3

0x36df,	// (0x00010c86) common_borders_pane_cp5

0xc8b6,	// (0x00019e5d) separator_vertical_pane_g1

0xc8bf,	// (0x00019e66) separator_vertical_pane_g2

0xc8c8,	// (0x00019e6f) separator_vertical_pane_g3

0x0002,

0xfc04,	// (0x0001d1ab) separator_vertical_pane_g

0xc80e,	// (0x00019db5) eswt_control_pane_g1_copy4_ParamLimits

0xc80e,	// (0x00019db5) eswt_control_pane_g1_copy4

0xc81b,	// (0x00019dc2) eswt_control_pane_g2_copy4_ParamLimits

0xc81b,	// (0x00019dc2) eswt_control_pane_g2_copy4

0xc828,	// (0x00019dcf) eswt_control_pane_g3_copy4_ParamLimits

0xc828,	// (0x00019dcf) eswt_control_pane_g3_copy4

0xc835,	// (0x00019ddc) eswt_control_pane_g4_copy4_ParamLimits

0xc835,	// (0x00019ddc) eswt_control_pane_g4_copy4

0xc8d1,	// (0x00019e78) eswt_ctrl_combo_button_pane

0xc8d9,	// (0x00019e80) eswt_ctrl_input_pane

0xc8e1,	// (0x00019e88) popup_choice_list_window_cp70

0xc8e9,	// (0x00019e90) eswt_ctrl_input_pane_t1

0x36df,	// (0x00010c86) input_focus_pane_cp70

0xbc82,	// (0x00019229) bg_button_pane_cp70_ParamLimits

0xbc82,	// (0x00019229) bg_button_pane_cp70

0xc8f7,	// (0x00019e9e) eswt_ctrl_combo_button_pane_g1

0xc8ff,	// (0x00019ea6) wait_bar_pane_cp70

0x9263,	// (0x0001680a) bg_popup_window_pane_cp70_ParamLimits

0x9263,	// (0x0001680a) bg_popup_window_pane_cp70

0xc907,	// (0x00019eae) popup_eswt_tasktip_window_t1

0xc91d,	// (0x00019ec4) wait_bar_pane_cp71_ParamLimits

0xc91d,	// (0x00019ec4) wait_bar_pane_cp71

0xc929,	// (0x00019ed0) grid_eswt_app_pane

0x410a,	// (0x000116b1) scroll_pane_cp70

0xc932,	// (0x00019ed9) cell_eswt_app_pane_ParamLimits

0xc932,	// (0x00019ed9) cell_eswt_app_pane

0xc962,	// (0x00019f09) cell_eswt_app_pane_g1_ParamLimits

0xc962,	// (0x00019f09) cell_eswt_app_pane_g1

0xc991,	// (0x00019f38) cell_eswt_app_pane_g2_ParamLimits

0xc991,	// (0x00019f38) cell_eswt_app_pane_g2

0x0001,

0xfc0b,	// (0x0001d1b2) cell_eswt_app_pane_g_ParamLimits

0xfc0b,	// (0x0001d1b2) cell_eswt_app_pane_g

0xc9b5,	// (0x00019f5c) cell_eswt_app_pane_t1_ParamLimits

0xc9b5,	// (0x00019f5c) cell_eswt_app_pane_t1

0xc9e7,	// (0x00019f8e) grid_highlight_pane_cp70_ParamLimits

0xc9e7,	// (0x00019f8e) grid_highlight_pane_cp70

0x477b,	// (0x00011d22) set_content_pane_g1

0x8bd7,	// (0x0001617e) status_small_volume_pane

0x6e0a,	// (0x000143b1) status_small_volume_pane_g1

0x6e12,	// (0x000143b9) volume_small2_pane

0x6e1b,	// (0x000143c2) volume_small2_pane_g1

0x6e24,	// (0x000143cb) volume_small2_pane_g2

0x6e2d,	// (0x000143d4) volume_small2_pane_g3

0x6e36,	// (0x000143dd) volume_small2_pane_g4

0x6e3f,	// (0x000143e6) volume_small2_pane_g5

0x6e48,	// (0x000143ef) volume_small2_pane_g6

0x6e51,	// (0x000143f8) volume_small2_pane_g7

0x6e5a,	// (0x00014401) volume_small2_pane_g8

0x6e63,	// (0x0001440a) volume_small2_pane_g9

0x6e6c,	// (0x00014413) volume_small2_pane_g10

0x0009,

0xfc10,	// (0x0001d1b7) volume_small2_pane_g

0xc075,	// (0x0001961c) fep_vkb_top_text_pane_g1_ParamLimits

0xc090,	// (0x00019637) fep_vkb_top_text_pane_t1_ParamLimits

0xc2fe,	// (0x000198a5) popup_preview_fixed_window_g3_ParamLimits

0xc2fe,	// (0x000198a5) popup_preview_fixed_window_g3

0x6464,	// (0x00013a0b) popup_toolbar_trans_pane

0xa5f4,	// (0x00017b9b) aid_height_set_list_ParamLimits

0xa605,	// (0x00017bac) aid_size_parent_ParamLimits

0x4a20,	// (0x00011fc7) list_highlight_pane_cp2_ParamLimits

0x477b,	// (0x00011d22) set_content_pane_g1_ParamLimits

0xa8c9,	// (0x00017e70) list_single_image_pane_ParamLimits

0xa8c9,	// (0x00017e70) list_single_image_pane

0xc9f3,	// (0x00019f9a) aid_size_cell_image_ParamLimits

0xc9f3,	// (0x00019f9a) aid_size_cell_image

0xca00,	// (0x00019fa7) grid_single_image_pane_ParamLimits

0xca00,	// (0x00019fa7) grid_single_image_pane

0x3e4e,	// (0x000113f5) list_single_image_pane_g1_ParamLimits

0x3e4e,	// (0x000113f5) list_single_image_pane_g1

0xc32c,	// (0x000198d3) list_single_image_pane_g2_ParamLimits

0xc32c,	// (0x000198d3) list_single_image_pane_g2

0x0001,

0xfc25,	// (0x0001d1cc) list_single_image_pane_g_ParamLimits

0xfc25,	// (0x0001d1cc) list_single_image_pane_g

0xca0c,	// (0x00019fb3) list_single_image_pane_t1_ParamLimits

0xca0c,	// (0x00019fb3) list_single_image_pane_t1

0xca22,	// (0x00019fc9) cell_image_list_pane_ParamLimits

0xca22,	// (0x00019fc9) cell_image_list_pane

0xca36,	// (0x00019fdd) cell_image_list_pane_g1

0xca3f,	// (0x00019fe6) cell_image_list_pane_g2

0x0001,

0xfc2a,	// (0x0001d1d1) cell_image_list_pane_g

0xca48,	// (0x00019fef) aid_size_cell_tb_trans_pane

0x3bb1,	// (0x00011158) bg_tb_trans_pane

0xca5a,	// (0x0001a001) grid_tb_trans_pane

0x9143,	// (0x000166ea) bg_tb_trans_pane_g1

0x9153,	// (0x000166fa) bg_tb_trans_pane_g2

0x914b,	// (0x000166f2) bg_tb_trans_pane_g3

0x9163,	// (0x0001670a) bg_tb_trans_pane_g4

0x915b,	// (0x00016702) bg_tb_trans_pane_g5

0x9183,	// (0x0001672a) bg_tb_trans_pane_g6

0x917b,	// (0x00016722) bg_tb_trans_pane_g7

0x916b,	// (0x00016712) bg_tb_trans_pane_g8

0x9173,	// (0x0001671a) bg_tb_trans_pane_g9

0x0008,

0xfc2f,	// (0x0001d1d6) bg_tb_trans_pane_g

0xca6e,	// (0x0001a015) cell_toolbar_trans_pane_ParamLimits

0xca6e,	// (0x0001a015) cell_toolbar_trans_pane

0xbcbd,	// (0x00019264) cell_toolbar_trans_pane_g1

0xb83b,	// (0x00018de2) list_form2_midp_pane_t1

0xb849,	// (0x00018df0) list_form2_midp_pane_t2

0x0001,

0xfacc,	// (0x0001d073) list_form2_midp_pane_t

0xb857,	// (0x00018dfe) scroll_pane_cp51_ParamLimits

0xba60,	// (0x00019007) form2_midp_wait_pane_g1

0xba69,	// (0x00019010) form2_midp_wait_pane_g2

0xba72,	// (0x00019019) form2_midp_wait_pane_g3

0x0002,

0xfae1,	// (0x0001d088) form2_midp_wait_pane_g

0x378f,	// (0x00010d36) list_highlight_pane_cp21_ParamLimits

0xbaba,	// (0x00019061) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbac9,	// (0x00019070) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa84b,	// (0x00017df2) list_single_2graphic_im_pane_ParamLimits

0xa84b,	// (0x00017df2) list_single_2graphic_im_pane

0xca94,	// (0x0001a03b) list_single_2graphic_im_pane_g1_ParamLimits

0xca94,	// (0x0001a03b) list_single_2graphic_im_pane_g1

0xcaa5,	// (0x0001a04c) list_single_2graphic_im_pane_g2_ParamLimits

0xcaa5,	// (0x0001a04c) list_single_2graphic_im_pane_g2

0xcab1,	// (0x0001a058) list_single_2graphic_im_pane_g3_ParamLimits

0xcab1,	// (0x0001a058) list_single_2graphic_im_pane_g3

0x0003,

0xfc42,	// (0x0001d1e9) list_single_2graphic_im_pane_g_ParamLimits

0xfc42,	// (0x0001d1e9) list_single_2graphic_im_pane_g

0xcad1,	// (0x0001a078) list_single_2graphic_im_pane_t1_ParamLimits

0xcad1,	// (0x0001a078) list_single_2graphic_im_pane_t1

0xc30a,	// (0x000198b1) list_single_graphic_2heading_pane_fp_ParamLimits

0xc30a,	// (0x000198b1) list_single_graphic_2heading_pane_fp

0xc363,	// (0x0001990a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc363,	// (0x0001990a) list_single_graphic_2heading_pane_fp_g1

0xc320,	// (0x000198c7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc320,	// (0x000198c7) list_single_graphic_2heading_pane_fp_g2

0x3e4e,	// (0x000113f5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3e4e,	// (0x000113f5) list_single_graphic_2heading_pane_fp_g3

0xc32c,	// (0x000198d3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc32c,	// (0x000198d3) list_single_graphic_2heading_pane_fp_g4

0xc340,	// (0x000198e7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc340,	// (0x000198e7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb69,	// (0x0001d110) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb69,	// (0x0001d110) list_single_graphic_2heading_pane_fp_g

0xcb02,	// (0x0001a0a9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcb02,	// (0x0001a0a9) list_single_graphic_2heading_pane_fp_t1

0xc39b,	// (0x00019942) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc39b,	// (0x00019942) list_single_graphic_2heading_pane_fp_t2

0xcb18,	// (0x0001a0bf) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcb18,	// (0x0001a0bf) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4b,	// (0x0001d1f2) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4b,	// (0x0001d1f2) list_single_graphic_2heading_pane_fp_t

0xbd49,	// (0x000192f0) fep_hwr_write_pane_g5_ParamLimits

0xbd49,	// (0x000192f0) fep_hwr_write_pane_g5

0xbd55,	// (0x000192fc) fep_hwr_write_pane_g6_ParamLimits

0xbd55,	// (0x000192fc) fep_hwr_write_pane_g6

0xc7d5,	// (0x00019d7c) eswt_shell_pane_ParamLimits

0x9263,	// (0x0001680a) bg_popup_window_pane_cp18_ParamLimits

0xc806,	// (0x00019dad) heading_pane_cp70

0xc907,	// (0x00019eae) popup_eswt_tasktip_window_t1_ParamLimits

0x8c7f,	// (0x00016226) aid_touch_tab_arrow_left

0x8c8e,	// (0x00016235) aid_touch_tab_arrow_right

0x7b9a,	// (0x00015141) title_pane_g3_ParamLimits

0x7b9a,	// (0x00015141) title_pane_g3

0x3b48,	// (0x000110ef) set_value_pane_g1

0x6464,	// (0x00013a0b) popup_toolbar_trans_pane_ParamLimits

0xca48,	// (0x00019fef) aid_size_cell_tb_trans_pane_ParamLimits

0x3bb1,	// (0x00011158) bg_tb_trans_pane_ParamLimits

0xca5a,	// (0x0001a001) grid_tb_trans_pane_ParamLimits

0x38d3,	// (0x00010e7a) cont_note_pane_ParamLimits

0x38d3,	// (0x00010e7a) cont_note_pane

0x3a53,	// (0x00010ffa) cont_snote2_single_text_pane_ParamLimits

0x3a53,	// (0x00010ffa) cont_snote2_single_text_pane

0x3a53,	// (0x00010ffa) cont_snote2_single_graphic_pane_ParamLimits

0x3a53,	// (0x00010ffa) cont_snote2_single_graphic_pane

0x98be,	// (0x00016e65) cont_note_wait_pane_ParamLimits

0x98be,	// (0x00016e65) cont_note_wait_pane

0x98be,	// (0x00016e65) cont_note_image_pane_ParamLimits

0x98be,	// (0x00016e65) cont_note_image_pane

0xcb2e,	// (0x0001a0d5) popup_note2_window_g1_ParamLimits

0xcb2e,	// (0x0001a0d5) popup_note2_window_g1

0xcb5f,	// (0x0001a106) popup_note2_window_t1_ParamLimits

0xcb5f,	// (0x0001a106) popup_note2_window_t1

0xcba4,	// (0x0001a14b) popup_note2_window_t2_ParamLimits

0xcba4,	// (0x0001a14b) popup_note2_window_t2

0xcbe9,	// (0x0001a190) popup_note2_window_t3_ParamLimits

0xcbe9,	// (0x0001a190) popup_note2_window_t3

0xcc2e,	// (0x0001a1d5) popup_note2_window_t4_ParamLimits

0xcc2e,	// (0x0001a1d5) popup_note2_window_t4

0x3957,	// (0x00010efe) popup_note2_window_t5_ParamLimits

0x3957,	// (0x00010efe) popup_note2_window_t5

0x0004,

0xfc57,	// (0x0001d1fe) popup_note2_window_t_ParamLimits

0xfc57,	// (0x0001d1fe) popup_note2_window_t

0xcc5d,	// (0x0001a204) popup_note2_image_window_g1_ParamLimits

0xcc5d,	// (0x0001a204) popup_note2_image_window_g1

0xcc69,	// (0x0001a210) popup_note2_image_window_g2_ParamLimits

0xcc69,	// (0x0001a210) popup_note2_image_window_g2

0x0001,

0xfc62,	// (0x0001d209) popup_note2_image_window_g_ParamLimits

0xfc62,	// (0x0001d209) popup_note2_image_window_g

0xcc7b,	// (0x0001a222) popup_note2_image_window_t1_ParamLimits

0xcc7b,	// (0x0001a222) popup_note2_image_window_t1

0xcc93,	// (0x0001a23a) popup_note2_image_window_t2_ParamLimits

0xcc93,	// (0x0001a23a) popup_note2_image_window_t2

0xccab,	// (0x0001a252) popup_note2_image_window_t3_ParamLimits

0xccab,	// (0x0001a252) popup_note2_image_window_t3

0x0002,

0xfc67,	// (0x0001d20e) popup_note2_image_window_t_ParamLimits

0xfc67,	// (0x0001d20e) popup_note2_image_window_t

0x98cc,	// (0x00016e73) popup_note2_wait_window_g1_ParamLimits

0x98cc,	// (0x00016e73) popup_note2_wait_window_g1

0x98d8,	// (0x00016e7f) popup_note2_wait_window_g2_ParamLimits

0x98d8,	// (0x00016e7f) popup_note2_wait_window_g2

0x98e4,	// (0x00016e8b) popup_note2_wait_window_g3_ParamLimits

0x98e4,	// (0x00016e8b) popup_note2_wait_window_g3

0x0002,

0xf814,	// (0x0001cdbb) popup_note2_wait_window_g_ParamLimits

0xf814,	// (0x0001cdbb) popup_note2_wait_window_g

0xccc7,	// (0x0001a26e) popup_note2_wait_window_t1_ParamLimits

0xccc7,	// (0x0001a26e) popup_note2_wait_window_t1

0xcce5,	// (0x0001a28c) popup_note2_wait_window_t2_ParamLimits

0xcce5,	// (0x0001a28c) popup_note2_wait_window_t2

0xcd03,	// (0x0001a2aa) popup_note2_wait_window_t3_ParamLimits

0xcd03,	// (0x0001a2aa) popup_note2_wait_window_t3

0xcd15,	// (0x0001a2bc) popup_note2_wait_window_t4_ParamLimits

0xcd15,	// (0x0001a2bc) popup_note2_wait_window_t4

0x0003,

0xfc6e,	// (0x0001d215) popup_note2_wait_window_t_ParamLimits

0xfc6e,	// (0x0001d215) popup_note2_wait_window_t

0xcd27,	// (0x0001a2ce) wait_bar2_pane_ParamLimits

0xcd27,	// (0x0001a2ce) wait_bar2_pane

0xcd3f,	// (0x0001a2e6) popup_snote2_single_text_window_g1_ParamLimits

0xcd3f,	// (0x0001a2e6) popup_snote2_single_text_window_g1

0xcd67,	// (0x0001a30e) popup_snote2_single_text_window_t1_ParamLimits

0xcd67,	// (0x0001a30e) popup_snote2_single_text_window_t1

0xcdb3,	// (0x0001a35a) popup_snote2_single_text_window_t2_ParamLimits

0xcdb3,	// (0x0001a35a) popup_snote2_single_text_window_t2

0xcdff,	// (0x0001a3a6) popup_snote2_single_text_window_t3_ParamLimits

0xcdff,	// (0x0001a3a6) popup_snote2_single_text_window_t3

0xce40,	// (0x0001a3e7) popup_snote2_single_text_window_t4_ParamLimits

0xce40,	// (0x0001a3e7) popup_snote2_single_text_window_t4

0xce76,	// (0x0001a41d) popup_snote2_single_text_window_t5_ParamLimits

0xce76,	// (0x0001a41d) popup_snote2_single_text_window_t5

0x0004,

0xfc77,	// (0x0001d21e) popup_snote2_single_text_window_t_ParamLimits

0xfc77,	// (0x0001d21e) popup_snote2_single_text_window_t

0xcea1,	// (0x0001a448) popup_snote2_single_graphic_window_g1_ParamLimits

0xcea1,	// (0x0001a448) popup_snote2_single_graphic_window_g1

0xcec9,	// (0x0001a470) popup_snote2_single_graphic_window_g2_ParamLimits

0xcec9,	// (0x0001a470) popup_snote2_single_graphic_window_g2

0x0001,

0xfc82,	// (0x0001d229) popup_snote2_single_graphic_window_g_ParamLimits

0xfc82,	// (0x0001d229) popup_snote2_single_graphic_window_g

0xcef1,	// (0x0001a498) popup_snote2_single_graphic_window_t1_ParamLimits

0xcef1,	// (0x0001a498) popup_snote2_single_graphic_window_t1

0xcf3d,	// (0x0001a4e4) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf3d,	// (0x0001a4e4) popup_snote2_single_graphic_window_t2

0xcdff,	// (0x0001a3a6) popup_snote2_single_graphic_window_t3_ParamLimits

0xcdff,	// (0x0001a3a6) popup_snote2_single_graphic_window_t3

0xce40,	// (0x0001a3e7) popup_snote2_single_graphic_window_t4_ParamLimits

0xce40,	// (0x0001a3e7) popup_snote2_single_graphic_window_t4

0xce76,	// (0x0001a41d) popup_snote2_single_graphic_window_t5_ParamLimits

0xce76,	// (0x0001a41d) popup_snote2_single_graphic_window_t5

0x0004,

0xfc87,	// (0x0001d22e) popup_snote2_single_graphic_window_t_ParamLimits

0xfc87,	// (0x0001d22e) popup_snote2_single_graphic_window_t

0xb714,	// (0x00018cbb) clock_nsta_pane_cp2_t1

0xb714,	// (0x00018cbb) clock_nsta_pane_cp2_t2

0x0001,

0xfaa2,	// (0x0001d049) clock_nsta_pane_cp2_t

0x3bd0,	// (0x00011177) form_field_data_wide_pane_g1_ParamLimits

0x3bdc,	// (0x00011183) form_field_data_wide_pane_g2_ParamLimits

0x3bdc,	// (0x00011183) form_field_data_wide_pane_g2

0x3be8,	// (0x0001118f) form_field_data_wide_pane_g3_ParamLimits

0x3be8,	// (0x0001118f) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x0001cbee) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x0001cbee) form_field_data_wide_pane_g

0xb5f0,	// (0x00018b97) grid_touch_3_pane_ParamLimits

0xb5f0,	// (0x00018b97) grid_touch_3_pane

0xcf89,	// (0x0001a530) cell_touch_3_pane_ParamLimits

0xcf89,	// (0x0001a530) cell_touch_3_pane

0xbcbd,	// (0x00019264) cell_touch_3_pane_g1

0xbcbd,	// (0x00019264) cell_touch_3_pane_g2

0x0001,

0xfb27,	// (0x0001d0ce) cell_touch_3_pane_g

0x3989,	// (0x00010f30) cont_query_data_pane

0x3991,	// (0x00010f38) cont_query_data_pane_cp1

0xcfb7,	// (0x0001a55e) button_value_adjust_pane_cp7

0xcfbf,	// (0x0001a566) query_popup_pane_cp3

0x4309,	// (0x000118b0) bg_popup_sub_pane_cp22_ParamLimits

0x5ba9,	// (0x00013150) navi_navi_volume_pane_cp2

0x5bc1,	// (0x00013168) popup_side_volume_key_window_g2

0x5bcd,	// (0x00013174) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x0001cc84) popup_side_volume_key_window_g

0x5be7,	// (0x0001318e) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x0001cc8b) popup_side_volume_key_window_t

0x8a3e,	// (0x00015fe5) popup_side_volume_key_window_ParamLimits

0x8271,	// (0x00015818) list_double_graphic_pane_g4_ParamLimits

0x8271,	// (0x00015818) list_double_graphic_pane_g4

0xa88a,	// (0x00017e31) list_single_2heading_msg_pane_ParamLimits

0xa88a,	// (0x00017e31) list_single_2heading_msg_pane

0xcfee,	// (0x0001a595) list_single_2heading_msg_pane_g1_ParamLimits

0xcfee,	// (0x0001a595) list_single_2heading_msg_pane_g1

0x80da,	// (0x00015681) list_single_2heading_msg_pane_g2_ParamLimits

0x80da,	// (0x00015681) list_single_2heading_msg_pane_g2

0xcffa,	// (0x0001a5a1) list_single_2heading_msg_pane_g3_ParamLimits

0xcffa,	// (0x0001a5a1) list_single_2heading_msg_pane_g3

0xd006,	// (0x0001a5ad) list_single_2heading_msg_pane_g4_ParamLimits

0xd006,	// (0x0001a5ad) list_single_2heading_msg_pane_g4

0x0003,

0xfc92,	// (0x0001d239) list_single_2heading_msg_pane_g_ParamLimits

0xfc92,	// (0x0001d239) list_single_2heading_msg_pane_g

0xd01e,	// (0x0001a5c5) list_single_2heading_msg_pane_t1_ParamLimits

0xd01e,	// (0x0001a5c5) list_single_2heading_msg_pane_t1

0xd046,	// (0x0001a5ed) list_single_2heading_msg_pane_t2_ParamLimits

0xd046,	// (0x0001a5ed) list_single_2heading_msg_pane_t2

0xd075,	// (0x0001a61c) list_single_2heading_msg_pane_t3_ParamLimits

0xd075,	// (0x0001a61c) list_single_2heading_msg_pane_t3

0xd0ae,	// (0x0001a655) list_single_2heading_msg_pane_t4_ParamLimits

0xd0ae,	// (0x0001a655) list_single_2heading_msg_pane_t4

0x0003,

0xfc9b,	// (0x0001d242) list_single_2heading_msg_pane_t_ParamLimits

0xfc9b,	// (0x0001d242) list_single_2heading_msg_pane_t

0x373d,	// (0x00010ce4) title_pane_g4_ParamLimits

0x373d,	// (0x00010ce4) title_pane_g4

0x59b8,	// (0x00012f5f) title_pane_stacon_g3_ParamLimits

0x59b8,	// (0x00012f5f) title_pane_stacon_g3

0xcac5,	// (0x0001a06c) list_single_2graphic_im_pane_g4_ParamLimits

0xcac5,	// (0x0001a06c) list_single_2graphic_im_pane_g4

0xa305,	// (0x000178ac) popup_side_volume_key_window_cp

0xac12,	// (0x000181b9) main_idle_act2_pane_t1

0x65c0,	// (0x00013b67) toolbar_button_pane_g10

0x80c4,	// (0x0001566b) popup_toolbar_window_cp1

0xb705,	// (0x00018cac) clock_nsta_pane_cp_t1

0xb705,	// (0x00018cac) clock_nsta_pane_cp_t2

0x0001,

0xfa9d,	// (0x0001d044) clock_nsta_pane_cp_t

0x5ba9,	// (0x00013150) navi_navi_volume_pane_cp2_ParamLimits

0x5bb5,	// (0x0001315c) popup_side_volume_key_window_g1_ParamLimits

0x5bc1,	// (0x00013168) popup_side_volume_key_window_g2_ParamLimits

0x5bcd,	// (0x00013174) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x0001cc84) popup_side_volume_key_window_g_ParamLimits

0x6a76,	// (0x0001401d) fep_hwr_aid_pane

0x6b1d,	// (0x000140c4) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd19,	// (0x000192c0) fep_hwr_top_pane_g1_ParamLimits

0xbd2b,	// (0x000192d2) fep_hwr_top_pane_g2_ParamLimits

0x6b3d,	// (0x000140e4) fep_hwr_top_pane_g3_ParamLimits

0xfaf2,	// (0x0001d099) fep_hwr_top_pane_g_ParamLimits

0x6b52,	// (0x000140f9) fep_hwr_top_text_pane_ParamLimits

0xa0c8,	// (0x0001766f) aid_touch_tab_arrow_arrow_2

0xa0d1,	// (0x00017678) aid_touch_tab_arrow_left_2

0x6a8a,	// (0x00014031) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6ac1,	// (0x00014068) fep_hwr_prediction_pane

0xbe84,	// (0x0001942b) fep_vkb_prediction_pane

0xbf81,	// (0x00019528) fep_vkb_side_pane_g3_ParamLimits

0xbf81,	// (0x00019528) fep_vkb_side_pane_g3

0x6ccd,	// (0x00014274) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6d39,	// (0x000142e0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6d46,	// (0x000142ed) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba1,	// (0x0001d148) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6e75,	// (0x0001441c) fep_hwr_prediction_pane_g1

0x6e7f,	// (0x00014426) fep_hwr_prediction_pane_g2

0x6e87,	// (0x0001442e) fep_hwr_prediction_pane_g3

0x6e8f,	// (0x00014436) fep_hwr_prediction_pane_g4

0x0003,

0xfca4,	// (0x0001d24b) fep_hwr_prediction_pane_g

0xd0d3,	// (0x0001a67a) fep_vkb_prediction_pane_g1

0xd0dd,	// (0x0001a684) fep_vkb_prediction_pane_g2

0xd0e5,	// (0x0001a68c) fep_vkb_prediction_pane_g3

0xd0ed,	// (0x0001a694) fep_vkb_prediction_pane_g4

0x0003,

0xfcad,	// (0x0001d254) fep_vkb_prediction_pane_g

0x68ae,	// (0x00013e55) slider_set_pane_g3

0x68c2,	// (0x00013e69) slider_set_pane_g4

0x68da,	// (0x00013e81) slider_set_pane_g5

0x68ae,	// (0x00013e55) slider_set_pane_g6

0x68f0,	// (0x00013e97) slider_set_pane_g7

0xa766,	// (0x00017d0d) slider_form_pane_g3

0xa76f,	// (0x00017d16) slider_form_pane_g4

0xa777,	// (0x00017d1e) slider_form_pane_g5

0xa766,	// (0x00017d0d) slider_form_pane_g6

0xa77f,	// (0x00017d26) slider_form_pane_g7

0xaef6,	// (0x0001849d) slider_set_pane_vc_g3

0xaeff,	// (0x000184a6) slider_set_pane_vc_g4

0xaf08,	// (0x000184af) slider_set_pane_vc_g5

0xaef6,	// (0x0001849d) slider_set_pane_vc_g6

0xaf11,	// (0x000184b8) slider_set_pane_vc_g7

0xb3c3,	// (0x0001896a) slider_form_pane_vc_g1

0xb3cc,	// (0x00018973) slider_form_pane_vc_g2

0xb3d5,	// (0x0001897c) slider_form_pane_vc_g3

0xb3c3,	// (0x0001896a) slider_form_pane_vc_g4

0xb3de,	// (0x00018985) slider_form_pane_vc_g5

0x0004,

0xfa6f,	// (0x0001d016) slider_form_pane_vc_g

0x568d,	// (0x00012c34) main_idle_act3_pane

0xd0f5,	// (0x0001a69c) ai3_links_pane

0xd0fe,	// (0x0001a6a5) popup_ai3_data_window_ParamLimits

0xd0fe,	// (0x0001a6a5) popup_ai3_data_window

0x36df,	// (0x00010c86) grid_ai3_links_pane

0xd116,	// (0x0001a6bd) cell_ai3_links_pane_ParamLimits

0xd116,	// (0x0001a6bd) cell_ai3_links_pane

0xd12e,	// (0x0001a6d5) bg_popup_sub_pane_cp11

0xd13b,	// (0x0001a6e2) cell_ai3_links_pane_g1

0x36df,	// (0x00010c86) bg_popup_sub_pane_cp12

0xd160,	// (0x0001a707) heading_ai3_data_pane

0xd168,	// (0x0001a70f) list_ai3_gene_pane

0xd174,	// (0x0001a71b) popup_ai3_data_window_g1

0xd17c,	// (0x0001a723) heading_ai3_data_pane_g1

0xd184,	// (0x0001a72b) heading_ai3_data_pane_t1

0xd192,	// (0x0001a739) list_double_ai3_gene_pane_ParamLimits

0xd192,	// (0x0001a739) list_double_ai3_gene_pane

0xd19f,	// (0x0001a746) list_single_ai3_gene_pane_ParamLimits

0xd19f,	// (0x0001a746) list_single_ai3_gene_pane

0xbc82,	// (0x00019229) list_highlight_pane_cp7_ParamLimits

0xbc82,	// (0x00019229) list_highlight_pane_cp7

0xd1ac,	// (0x0001a753) list_single_a13_gene_pane_t1_ParamLimits

0xd1ac,	// (0x0001a753) list_single_a13_gene_pane_t1

0xd1c3,	// (0x0001a76a) list_single_ai3_gene_pane_g1

0xd1cc,	// (0x0001a773) list_single_ai3_gene_pane_g2

0x0001,

0xfcb6,	// (0x0001d25d) list_single_ai3_gene_pane_g

0xd1d4,	// (0x0001a77b) list_double_ai3_gene_pane_g1_ParamLimits

0xd1d4,	// (0x0001a77b) list_double_ai3_gene_pane_g1

0xd1e0,	// (0x0001a787) list_double_ai3_gene_pane_t1_ParamLimits

0xd1e0,	// (0x0001a787) list_double_ai3_gene_pane_t1

0xd1fc,	// (0x0001a7a3) list_double_ai3_gene_pane_t2_ParamLimits

0xd1fc,	// (0x0001a7a3) list_double_ai3_gene_pane_t2

0xd211,	// (0x0001a7b8) list_double_ai3_gene_pane_t3_ParamLimits

0xd211,	// (0x0001a7b8) list_double_ai3_gene_pane_t3

0x0002,

0xfcbb,	// (0x0001d262) list_double_ai3_gene_pane_t_ParamLimits

0xfcbb,	// (0x0001d262) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcfd0,	// (0x0001a577) aid_size_min_col_2

0xcfda,	// (0x0001a581) aid_size_min_msg_ParamLimits

0xcfda,	// (0x0001a581) aid_size_min_msg

0xc081,	// (0x00019628) fep_vkb_top_text_pane_g2_ParamLimits

0xc081,	// (0x00019628) fep_vkb_top_text_pane_g2

0x0001,

0xfb22,	// (0x0001d0c9) fep_vkb_top_text_pane_g_ParamLimits

0xfb22,	// (0x0001d0c9) fep_vkb_top_text_pane_g

0x568d,	// (0x00012c34) main_hc_apps_shell_pane

0xd22e,	// (0x0001a7d5) grid_hc_apps_pane_ParamLimits

0xd22e,	// (0x0001a7d5) grid_hc_apps_pane

0xd240,	// (0x0001a7e7) list_hc_apps_pane

0xd248,	// (0x0001a7ef) scroll_pane_cp37_ParamLimits

0xd248,	// (0x0001a7ef) scroll_pane_cp37

0xd254,	// (0x0001a7fb) cell_hc_apps_pane_ParamLimits

0xd254,	// (0x0001a7fb) cell_hc_apps_pane

0xd302,	// (0x0001a8a9) cell_hc_apps_pane_g1_ParamLimits

0xd302,	// (0x0001a8a9) cell_hc_apps_pane_g1

0xd332,	// (0x0001a8d9) cell_hc_apps_pane_g2_ParamLimits

0xd332,	// (0x0001a8d9) cell_hc_apps_pane_g2

0xd34e,	// (0x0001a8f5) cell_hc_apps_pane_g3_ParamLimits

0xd34e,	// (0x0001a8f5) cell_hc_apps_pane_g3

0x0002,

0xfcc2,	// (0x0001d269) cell_hc_apps_pane_g_ParamLimits

0xfcc2,	// (0x0001d269) cell_hc_apps_pane_g

0xd370,	// (0x0001a917) cell_hc_apps_pane_t1_ParamLimits

0xd370,	// (0x0001a917) cell_hc_apps_pane_t1

0x38d3,	// (0x00010e7a) grid_highlight_pane_cp10_ParamLimits

0x38d3,	// (0x00010e7a) grid_highlight_pane_cp10

0xd3b0,	// (0x0001a957) list_single_hc_apps_pane_ParamLimits

0xd3b0,	// (0x0001a957) list_single_hc_apps_pane

0xd413,	// (0x0001a9ba) list_single_hc_apps_pane_g1

0xd42c,	// (0x0001a9d3) list_single_hc_apps_pane_g2

0x0001,

0xfcc9,	// (0x0001d270) list_single_hc_apps_pane_g

0xd445,	// (0x0001a9ec) list_single_hc_apps_pane_g2_copy1

0xd461,	// (0x0001aa08) list_single_hc_apps_pane_t1

0x378f,	// (0x00010d36) bg_set_opt_pane_cp_ParamLimits

0x58e0,	// (0x00012e87) setting_slider_pane_t1_ParamLimits

0x58f9,	// (0x00012ea0) setting_slider_pane_t2_ParamLimits

0x5913,	// (0x00012eba) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001cae0) setting_slider_pane_t_ParamLimits

0x592b,	// (0x00012ed2) slider_set_pane_ParamLimits

0x5e49,	// (0x000133f0) control_pane_g5_ParamLimits

0x5e49,	// (0x000133f0) control_pane_g5

0xa5b9,	// (0x00017b60) slider_set_pane_g1_ParamLimits

0x68a2,	// (0x00013e49) slider_set_pane_g2_ParamLimits

0x68ae,	// (0x00013e55) slider_set_pane_g3_ParamLimits

0x68c2,	// (0x00013e69) slider_set_pane_g4_ParamLimits

0x68da,	// (0x00013e81) slider_set_pane_g5_ParamLimits

0x68ae,	// (0x00013e55) slider_set_pane_g6_ParamLimits

0x68f0,	// (0x00013e97) slider_set_pane_g7_ParamLimits

0xf930,	// (0x0001ced7) slider_set_pane_g_ParamLimits

0x471a,	// (0x00011cc1) navi_icon_text_pane_ParamLimits

0x8c40,	// (0x000161e7) aid_fill_nsta_2_ParamLimits

0x8c7f,	// (0x00016226) aid_touch_tab_arrow_left_ParamLimits

0x8c8e,	// (0x00016235) aid_touch_tab_arrow_right_ParamLimits

0x8cfb,	// (0x000162a2) clock_nsta_pane_ParamLimits

0xa0aa,	// (0x00017651) navi_icon_pane_g1_ParamLimits

0xa0b6,	// (0x0001765d) navi_text_pane_t1_ParamLimits

0xb815,	// (0x00018dbc) navi_icon_text_pane_g1_ParamLimits

0xb821,	// (0x00018dc8) navi_icon_text_pane_t1_ParamLimits

0xd413,	// (0x0001a9ba) list_single_hc_apps_pane_g1_ParamLimits

0xd42c,	// (0x0001a9d3) list_single_hc_apps_pane_g2_ParamLimits

0xfcc9,	// (0x0001d270) list_single_hc_apps_pane_g_ParamLimits

0xd445,	// (0x0001a9ec) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd461,	// (0x0001aa08) list_single_hc_apps_pane_t1_ParamLimits

0x57ea,	// (0x00012d91) popup_toolbar2_fixed_window_ParamLimits

0x57ea,	// (0x00012d91) popup_toolbar2_fixed_window

0x645a,	// (0x00013a01) popup_toolbar2_float_window

0x36df,	// (0x00010c86) bg_popup_sub_pane_cp27

0xd48f,	// (0x0001aa36) grid_toolbar2_float_pane

0x36df,	// (0x00010c86) bg_popup_sub_pane_cp26

0xd48f,	// (0x0001aa36) grid_toolbar2_fixed_pane

0xd497,	// (0x0001aa3e) cell_toolbar2_fixed_pane_ParamLimits

0xd497,	// (0x0001aa3e) cell_toolbar2_fixed_pane

0xd4a7,	// (0x0001aa4e) cell_toolbar2_fixed_pane_g1

0x632c,	// (0x000138d3) toolbar2_fixed_button_pane

0x9143,	// (0x000166ea) toolbar2_fixed_button_pane_g1

0x9153,	// (0x000166fa) toolbar2_fixed_button_pane_g2

0x914b,	// (0x000166f2) toolbar2_fixed_button_pane_g3

0x9163,	// (0x0001670a) toolbar2_fixed_button_pane_g4

0x915b,	// (0x00016702) toolbar2_fixed_button_pane_g5

0x916b,	// (0x00016712) toolbar2_fixed_button_pane_g6

0x9173,	// (0x0001671a) toolbar2_fixed_button_pane_g7

0x9183,	// (0x0001672a) toolbar2_fixed_button_pane_g8

0x917b,	// (0x00016722) toolbar2_fixed_button_pane_g9

0x0008,

0xf832,	// (0x0001cdd9) toolbar2_fixed_button_pane_g

0xd4b0,	// (0x0001aa57) cell_toolbar2_float_pane_ParamLimits

0xd4b0,	// (0x0001aa57) cell_toolbar2_float_pane

0xd4c1,	// (0x0001aa68) cell_toolbar2_float_pane_g1

0x632c,	// (0x000138d3) toolbar2_fixed_button_pane_cp

0xbdeb,	// (0x00019392) fep_vkb_accented_list_pane_ParamLimits

0xbdeb,	// (0x00019392) fep_vkb_accented_list_pane

0x6cad,	// (0x00014254) bg_popup_fep_shadow_pane_g9

0x4875,	// (0x00011e1c) bg_popup_fep_shadow_pane_cp3

0x3d38,	// (0x000112df) list_accented_list_pane

0xd4ca,	// (0x0001aa71) list_single_accented_list_pane_ParamLimits

0xd4ca,	// (0x0001aa71) list_single_accented_list_pane

0x4875,	// (0x00011e1c) list_highlight_pane_cp10

0xd4db,	// (0x0001aa82) list_single_accented_list_pane_t1

0x63aa,	// (0x00013951) popup_slider_window_ParamLimits

0x63aa,	// (0x00013951) popup_slider_window

0xcfc7,	// (0x0001a56e) aid_indentation_list_msg

0xd599,	// (0x0001ab40) bg_popup_window_pane_cp19

0xd601,	// (0x0001aba8) popup_slider_window_g1

0xd61d,	// (0x0001abc4) popup_slider_window_g2

0xd639,	// (0x0001abe0) popup_slider_window_g3

0x0005,

0xfcce,	// (0x0001d275) popup_slider_window_g

0xd69f,	// (0x0001ac46) popup_slider_window_t1

0xd713,	// (0x0001acba) small_volume_slider_vertical_pane

0xbcbd,	// (0x00019264) small_volume_slider_vertical_pane_g1

0xbcbd,	// (0x00019264) small_volume_slider_vertical_pane_g2

0xd72f,	// (0x0001acd6) small_volume_slider_vertical_pane_g3

0x0002,

0xfce0,	// (0x0001d287) small_volume_slider_vertical_pane_g

0x55b0,	// (0x00012b57) area_side_right_pane_ParamLimits

0x55b0,	// (0x00012b57) area_side_right_pane

0x6e97,	// (0x0001443e) aid_size_side_button_ParamLimits

0x6e97,	// (0x0001443e) aid_size_side_button

0x6eab,	// (0x00014452) grid_sctrl_middle_pane_ParamLimits

0x6eab,	// (0x00014452) grid_sctrl_middle_pane

0x6eca,	// (0x00014471) sctrl_sk_bottom_pane

0x6edb,	// (0x00014482) sctrl_sk_top_pane

0x6eed,	// (0x00014494) aid_touch_sctrl_top

0x6efa,	// (0x000144a1) bg_sctrl_sk_pane_ParamLimits

0x6efa,	// (0x000144a1) bg_sctrl_sk_pane

0x6f08,	// (0x000144af) sctrl_sk_top_pane_g1

0x6f15,	// (0x000144bc) sctrl_sk_top_pane_t1

0x6eed,	// (0x00014494) aid_touch_sctrl_bottom

0x6efa,	// (0x000144a1) bg_sctrl_sk_pane_cp_ParamLimits

0x6efa,	// (0x000144a1) bg_sctrl_sk_pane_cp

0x6f30,	// (0x000144d7) sctrl_sk_bottom_pane_g1

0x6f15,	// (0x000144bc) sctrl_sk_bottom_pane_t1

0x6f39,	// (0x000144e0) cell_sctrl_middle_pane_ParamLimits

0x6f39,	// (0x000144e0) cell_sctrl_middle_pane

0x6f54,	// (0x000144fb) aid_touch_sctrl_middle_ParamLimits

0x6f54,	// (0x000144fb) aid_touch_sctrl_middle

0x6f66,	// (0x0001450d) bg_sctrl_middle_pane_ParamLimits

0x6f66,	// (0x0001450d) bg_sctrl_middle_pane

0x6ccd,	// (0x00014274) cell_sctrl_middle_pane_g1_ParamLimits

0x6ccd,	// (0x00014274) cell_sctrl_middle_pane_g1

0x6f74,	// (0x0001451b) cell_sctrl_middle_pane_g2_ParamLimits

0x6f74,	// (0x0001451b) cell_sctrl_middle_pane_g2

0x0001,

0xfcec,	// (0x0001d293) cell_sctrl_middle_pane_g_ParamLimits

0xfcec,	// (0x0001d293) cell_sctrl_middle_pane_g

0x9143,	// (0x000166ea) bg_sctrl_middle_pane_g1

0x914b,	// (0x000166f2) bg_sctrl_middle_pane_g2

0x9153,	// (0x000166fa) bg_sctrl_middle_pane_g3

0x915b,	// (0x00016702) bg_sctrl_middle_pane_g4

0x9163,	// (0x0001670a) bg_sctrl_middle_pane_g5

0x916b,	// (0x00016712) bg_sctrl_middle_pane_g6

0x9173,	// (0x0001671a) bg_sctrl_middle_pane_g7

0x917b,	// (0x00016722) bg_sctrl_middle_pane_g8

0x0007,

0xfcf1,	// (0x0001d298) bg_sctrl_middle_pane_g

0x9183,	// (0x0001672a) bg_sctrl_middle_pane_g8_copy1

0x9143,	// (0x000166ea) bg_sctrl_sk_pane_g1

0x9153,	// (0x000166fa) bg_sctrl_sk_pane_g2

0x914b,	// (0x000166f2) bg_sctrl_sk_pane_g3

0x0008,

0xf832,	// (0x0001cdd9) bg_sctrl_sk_pane_g

0x3aa1,	// (0x00011048) aid_size_touch_scroll_bar

0x9163,	// (0x0001670a) bg_sctrl_sk_pane_g4

0x915b,	// (0x00016702) bg_sctrl_sk_pane_g5

0x916b,	// (0x00016712) bg_sctrl_sk_pane_g6

0x9173,	// (0x0001671a) bg_sctrl_sk_pane_g7

0x9183,	// (0x0001672a) bg_sctrl_sk_pane_g8

0x917b,	// (0x00016722) bg_sctrl_sk_pane_g9

0x6013,	// (0x000135ba) popup_fep_china_hwr2_fs_candidate_window

0x601d,	// (0x000135c4) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x601d,	// (0x000135c4) popup_fep_china_hwr2_fs_control_window

0x6ccd,	// (0x00014274) sctrl_sk_top_pane_g2

0x0001,

0xfce7,	// (0x0001d28e) sctrl_sk_top_pane_g

0xd738,	// (0x0001acdf) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd738,	// (0x0001acdf) aid_fep_china_hwr2_fs_cell

0xd74a,	// (0x0001acf1) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd74a,	// (0x0001acf1) bg_popup_fep_shadow_pane_cp4

0xd761,	// (0x0001ad08) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd761,	// (0x0001ad08) bg_popup_fep_shadow_pane_cp5

0xd773,	// (0x0001ad1a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd773,	// (0x0001ad1a) popup_fep_china_hwr2_fs_control_bar_grid

0xd783,	// (0x0001ad2a) popup_fep_china_hwr2_fs_control_funtion_grid

0xd78b,	// (0x0001ad32) aid_fep_china_hwr2_fs_candi_cell

0x36df,	// (0x00010c86) bg_popup_fep_shadow_pane_cp6

0xd795,	// (0x0001ad3c) popup_fep_china_hwr2_fs_candidate_grid

0xd79f,	// (0x0001ad46) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd79f,	// (0x0001ad46) cell_fep_china_hwr2_fs_funtion_grid

0xbcbd,	// (0x00019264) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7b7,	// (0x0001ad5e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7b7,	// (0x0001ad5e) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7c5,	// (0x0001ad6c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7c5,	// (0x0001ad6c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd02,	// (0x0001d2a9) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd02,	// (0x0001d2a9) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7db,	// (0x0001ad82) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7db,	// (0x0001ad82) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7f0,	// (0x0001ad97) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7f0,	// (0x0001ad97) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd07,	// (0x0001d2ae) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd07,	// (0x0001d2ae) cell_fep_china_hwr2_fs_funtion_grid_t

0xd80c,	// (0x0001adb3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd814,	// (0x0001adbb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd81c,	// (0x0001adc3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0c,	// (0x0001d2b3) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd824,	// (0x0001adcb) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd824,	// (0x0001adcb) cell_fep_china_hwr2_fs_candidate_grid

0xd83d,	// (0x0001ade4) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd845,	// (0x0001adec) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbcbd,	// (0x00019264) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbcbd,	// (0x00019264) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb27,	// (0x0001d0ce) cell_fep_china_hwr2_fs_candidate_grid_g

0xd84d,	// (0x0001adf4) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8d0e,	// (0x000162b5) clock_nsta_pane_cp_24_ParamLimits

0x8d0e,	// (0x000162b5) clock_nsta_pane_cp_24

0x8d8c,	// (0x00016333) indicator_nsta_pane_cp_24_ParamLimits

0x8d8c,	// (0x00016333) indicator_nsta_pane_cp_24

0x9f26,	// (0x000174cd) heading_pane_g1

0x0001,

0xf897,	// (0x0001ce3e) heading_pane_g

0xaa5b,	// (0x00018002) grid_sct_catagory_button_pane

0xaa8b,	// (0x00018032) scroll_pane_cp5_ParamLimits

0xb863,	// (0x00018e0a) button_value_adjust_pane_cp5_ParamLimits

0xb863,	// (0x00018e0a) button_value_adjust_pane_cp5

0xb95d,	// (0x00018f04) form2_midp_time_pane_ParamLimits

0xd85b,	// (0x0001ae02) cell_sct_catagory_button_pane_ParamLimits

0xd85b,	// (0x0001ae02) cell_sct_catagory_button_pane

0xbc82,	// (0x00019229) bg_button_pane_cp01_ParamLimits

0xbc82,	// (0x00019229) bg_button_pane_cp01

0xbcbd,	// (0x00019264) cell_sct_catagory_button_pane_g1

0x63e9,	// (0x00013990) popup_tb_extension_window

0xd86d,	// (0x0001ae14) aid_size_cell_ext_ParamLimits

0xd86d,	// (0x0001ae14) aid_size_cell_ext

0x38d3,	// (0x00010e7a) bg_tb_trans_pane_cp1_ParamLimits

0x38d3,	// (0x00010e7a) bg_tb_trans_pane_cp1

0xd88d,	// (0x0001ae34) grid_tb_ext_pane_ParamLimits

0xd88d,	// (0x0001ae34) grid_tb_ext_pane

0xd8bd,	// (0x0001ae64) cell_tb_ext_pane_ParamLimits

0xd8bd,	// (0x0001ae64) cell_tb_ext_pane

0xd8d4,	// (0x0001ae7b) cell_tb_ext_pane_g1_ParamLimits

0xd8d4,	// (0x0001ae7b) cell_tb_ext_pane_g1

0xd8f1,	// (0x0001ae98) cell_tb_ext_pane_t1

0x38d3,	// (0x00010e7a) list_highlight_pane_cp11_ParamLimits

0x38d3,	// (0x00010e7a) list_highlight_pane_cp11

0x5809,	// (0x00012db0) popup_uni_indicator_window_ParamLimits

0x5809,	// (0x00012db0) popup_uni_indicator_window

0x3bb1,	// (0x00011158) bg_popup_sub_pane_cp14

0xd90d,	// (0x0001aeb4) list_uniindi_pane

0xd919,	// (0x0001aec0) uniindi_top_pane

0x38d3,	// (0x00010e7a) bg_uniindi_top_pane

0xd938,	// (0x0001aedf) uniindi_top_pane_g1

0xd94e,	// (0x0001aef5) uniindi_top_pane_g2

0x0003,

0xfd13,	// (0x0001d2ba) uniindi_top_pane_g

0xd978,	// (0x0001af1f) uniindi_top_pane_t1

0xd9a2,	// (0x0001af49) list_single_uniindi_pane_ParamLimits

0xd9a2,	// (0x0001af49) list_single_uniindi_pane

0xbcbd,	// (0x00019264) bg_uniindi_top_pane_g1

0xd9b5,	// (0x0001af5c) list_single_uniindi_pane_g1

0xd9c8,	// (0x0001af6f) list_single_uniindi_pane_t1

0x568d,	// (0x00012c34) control_bg_pane

0xd9ed,	// (0x0001af94) bg_sctrl_sk_pane_cp1

0xd9f6,	// (0x0001af9d) bg_sctrl_sk_pane_cp2

0xd9ff,	// (0x0001afa6) control_bg_pane_g1

0xda08,	// (0x0001afaf) control_bg_pane_g2

0x0001,

0xfd1c,	// (0x0001d2c3) control_bg_pane_g

0xb6a9,	// (0x00018c50) cell_indicator_nsta_pane_g1_ParamLimits

0xb6b7,	// (0x00018c5e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8b,	// (0x0001d032) cell_indicator_nsta_pane_g_ParamLimits

0xb9e5,	// (0x00018f8c) form2_midp_time_pane_t1_ParamLimits

0x5f7d,	// (0x00013524) main_idle_act4_pane_ParamLimits

0x5f7d,	// (0x00013524) main_idle_act4_pane

0x63e9,	// (0x00013990) popup_tb_extension_window_ParamLimits

0xd8ad,	// (0x0001ae54) tb_ext_find_pane_ParamLimits

0xd8ad,	// (0x0001ae54) tb_ext_find_pane

0xda11,	// (0x0001afb8) ai_gene_pane_1_cp1

0x48f6,	// (0x00011e9d) ai_gene_pane_2_cp1

0xda19,	// (0x0001afc0) list_single_idle_plugin_calendar_pane

0xda22,	// (0x0001afc9) list_single_idle_plugin_notification_pane

0xda2b,	// (0x0001afd2) list_single_idle_plugin_player_pane

0xda34,	// (0x0001afdb) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda34,	// (0x0001afdb) list_single_idle_plugin_shortcut_pane

0xda56,	// (0x0001affd) main_idle_act4_pane_t1

0xda68,	// (0x0001b00f) main_idle_act4_pane_t2

0x0001,

0xfd21,	// (0x0001d2c8) main_idle_act4_pane_t

0xda7a,	// (0x0001b021) middle_sk_idle_act4_pane_ParamLimits

0xda7a,	// (0x0001b021) middle_sk_idle_act4_pane

0xda90,	// (0x0001b037) popup_clock_digital_analogue_window_cp2

0xdaaa,	// (0x0001b051) shortcut_wheel_idle_act4_pane_ParamLimits

0xdaaa,	// (0x0001b051) shortcut_wheel_idle_act4_pane

0xbcbd,	// (0x00019264) shortcut_wheel_idle_act4_pane_g1

0xbcbd,	// (0x00019264) shortcut_wheel_idle_act4_pane_g2

0xbcbd,	// (0x00019264) shortcut_wheel_idle_act4_pane_g3

0xbcbd,	// (0x00019264) shortcut_wheel_idle_act4_pane_g4

0xbcbd,	// (0x00019264) shortcut_wheel_idle_act4_pane_g5

0xdabe,	// (0x0001b065) shortcut_wheel_idle_act4_pane_g6

0xdac6,	// (0x0001b06d) shortcut_wheel_idle_act4_pane_g7

0xdace,	// (0x0001b075) shortcut_wheel_idle_act4_pane_g8

0xdad6,	// (0x0001b07d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd26,	// (0x0001d2cd) shortcut_wheel_idle_act4_pane_g

0xbf2d,	// (0x000194d4) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf2d,	// (0x000194d4) middle_sk_idle_act4_pane_g1

0xdb3a,	// (0x0001b0e1) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb3a,	// (0x0001b0e1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd49,	// (0x0001d2f0) middle_sk_idle_act4_pane_g_ParamLimits

0xfd49,	// (0x0001d2f0) middle_sk_idle_act4_pane_g

0xdb46,	// (0x0001b0ed) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb46,	// (0x0001b0ed) middle_sk_idle_act4_pane_t1

0xdb63,	// (0x0001b10a) grid_ai_shortcut_pane_ParamLimits

0xdb63,	// (0x0001b10a) grid_ai_shortcut_pane

0xdb7c,	// (0x0001b123) list_highlight_pane_cp16_ParamLimits

0xdb7c,	// (0x0001b123) list_highlight_pane_cp16

0xdb89,	// (0x0001b130) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb89,	// (0x0001b130) list_single_idle_plugin_shortcut_pane_g1

0xdb95,	// (0x0001b13c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb95,	// (0x0001b13c) list_single_idle_plugin_shortcut_pane_g2

0xdbad,	// (0x0001b154) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbad,	// (0x0001b154) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4e,	// (0x0001d2f5) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4e,	// (0x0001d2f5) list_single_idle_plugin_shortcut_pane_g

0xdbc0,	// (0x0001b167) cell_ai_shortcut_pane_ParamLimits

0xdbc0,	// (0x0001b167) cell_ai_shortcut_pane

0xdbe4,	// (0x0001b18b) cell_ai_shortcut_pane_g1_ParamLimits

0xdbe4,	// (0x0001b18b) cell_ai_shortcut_pane_g1

0xda11,	// (0x0001afb8) ai_gene_pane_1_cp2

0xdc06,	// (0x0001b1ad) ai_gene_pane_2_cp2

0xdc0e,	// (0x0001b1b5) list_highlight_pane_cp15

0xdc17,	// (0x0001b1be) list_single_idle_plugin_calendar_pane_g1

0xdc0e,	// (0x0001b1b5) list_highlight_pane_cp17

0xdc1f,	// (0x0001b1c6) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc27,	// (0x0001b1ce) list_single_idle_plugin_player_pane_g1

0xacb4,	// (0x0001825b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd55,	// (0x0001d2fc) list_single_idle_plugin_player_pane_g

0xdc2f,	// (0x0001b1d6) list_single_idle_plugin_player_pane_t1

0xdc3d,	// (0x0001b1e4) list_single_idle_plugin_player_pane_t2

0xdc4b,	// (0x0001b1f2) list_single_idle_plugin_player_pane_t3

0xdc59,	// (0x0001b200) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5a,	// (0x0001d301) list_single_idle_plugin_player_pane_t

0xdc67,	// (0x0001b20e) wait_bar_pane_cp15

0xdc6f,	// (0x0001b216) grid_ai_notification_pane

0xacb4,	// (0x0001825b) list_single_idle_plugin_notification_pane_g1

0xdc78,	// (0x0001b21f) cell_ai_notification_pane_ParamLimits

0xdc78,	// (0x0001b21f) cell_ai_notification_pane

0xdc85,	// (0x0001b22c) cell_ai_notification_pane_g1

0xdc8d,	// (0x0001b234) cell_ai_notification_pane_t1

0xdc9b,	// (0x0001b242) tb_ext_find_button_pane

0xdca3,	// (0x0001b24a) tb_ext_find_pane_g1

0xdcab,	// (0x0001b252) tb_ext_find_pane_t1

0x422e,	// (0x000117d5) tb_ext_find_button_pane_g1

0xdcb9,	// (0x0001b260) tb_ext_find_button_pane_g2

0x0001,

0xfd63,	// (0x0001d30a) tb_ext_find_button_pane_g

0xda56,	// (0x0001affd) main_idle_act4_pane_t1_ParamLimits

0xda68,	// (0x0001b00f) main_idle_act4_pane_t2_ParamLimits

0xfd21,	// (0x0001d2c8) main_idle_act4_pane_t_ParamLimits

0xda90,	// (0x0001b037) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda9e,	// (0x0001b045) sat_plugin_idle_act4_pane_ParamLimits

0xda9e,	// (0x0001b045) sat_plugin_idle_act4_pane

0xdcc2,	// (0x0001b269) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcc2,	// (0x0001b269) sat_plugin_idle_act4_pane_t1

0xdcd5,	// (0x0001b27c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcd5,	// (0x0001b27c) sat_plugin_idle_act4_pane_t2

0xdce8,	// (0x0001b28f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdce8,	// (0x0001b28f) sat_plugin_idle_act4_pane_t3

0xdcfb,	// (0x0001b2a2) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdcfb,	// (0x0001b2a2) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd68,	// (0x0001d30f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd68,	// (0x0001d30f) sat_plugin_idle_act4_pane_t

0x5752,	// (0x00012cf9) popup_battery_window_ParamLimits

0x5752,	// (0x00012cf9) popup_battery_window

0x38d3,	// (0x00010e7a) bg_popup_sub_pane_cp25_ParamLimits

0x38d3,	// (0x00010e7a) bg_popup_sub_pane_cp25

0xdd0e,	// (0x0001b2b5) popup_battery_window_g1_ParamLimits

0xdd0e,	// (0x0001b2b5) popup_battery_window_g1

0xdd1a,	// (0x0001b2c1) popup_battery_window_t1_ParamLimits

0xdd1a,	// (0x0001b2c1) popup_battery_window_t1

0xdd2c,	// (0x0001b2d3) popup_battery_window_t2_ParamLimits

0xdd2c,	// (0x0001b2d3) popup_battery_window_t2

0x0001,

0xfd71,	// (0x0001d318) popup_battery_window_t_ParamLimits

0xfd71,	// (0x0001d318) popup_battery_window_t

0x8a92,	// (0x00016039) midp_canvas_pane_ParamLimits

0x8b0b,	// (0x000160b2) midp_keypad_pane_ParamLimits

0x8b0b,	// (0x000160b2) midp_keypad_pane

0x4a20,	// (0x00011fc7) main_midp_pane_ParamLimits

0xb723,	// (0x00018cca) signal_pane_g2_cp_ParamLimits

0xdd49,	// (0x0001b2f0) aid_size_cell_midp_keypad_ParamLimits

0xdd49,	// (0x0001b2f0) aid_size_cell_midp_keypad

0xdd63,	// (0x0001b30a) midp_keyp_game_grid_pane_ParamLimits

0xdd63,	// (0x0001b30a) midp_keyp_game_grid_pane

0xdd83,	// (0x0001b32a) midp_keyp_rocker_pane_ParamLimits

0xdd83,	// (0x0001b32a) midp_keyp_rocker_pane

0xddbc,	// (0x0001b363) midp_keyp_sk_left_pane_ParamLimits

0xddbc,	// (0x0001b363) midp_keyp_sk_left_pane

0xde16,	// (0x0001b3bd) midp_keyp_sk_right_pane_ParamLimits

0xde16,	// (0x0001b3bd) midp_keyp_sk_right_pane

0x36df,	// (0x00010c86) bg_button_pane_cp03

0xde70,	// (0x0001b417) midp_keyp_sk_left_pane_g1

0x36df,	// (0x00010c86) bg_button_pane_cp04

0xde70,	// (0x0001b417) midp_keyp_sk_right_pane_g1

0xbcbd,	// (0x00019264) midp_keyp_rocker_pane_g1

0xde79,	// (0x0001b420) keyp_game_cell_pane_ParamLimits

0xde79,	// (0x0001b420) keyp_game_cell_pane

0x36df,	// (0x00010c86) bg_button_pane_cp02

0xde8c,	// (0x0001b433) keyp_game_cell_pane_g1

0x5788,	// (0x00012d2f) popup_fep_vkb2_window_ParamLimits

0x5788,	// (0x00012d2f) popup_fep_vkb2_window

0x6f92,	// (0x00014539) aid_size_cell_vkb2_ParamLimits

0x6f92,	// (0x00014539) aid_size_cell_vkb2

0x6fde,	// (0x00014585) popup_fep_vkb2_window_g1_ParamLimits

0x6fde,	// (0x00014585) popup_fep_vkb2_window_g1

0x7026,	// (0x000145cd) vkb2_area_bottom_pane_ParamLimits

0x7026,	// (0x000145cd) vkb2_area_bottom_pane

0x7072,	// (0x00014619) vkb2_area_keypad_pane_ParamLimits

0x7072,	// (0x00014619) vkb2_area_keypad_pane

0x70b4,	// (0x0001465b) vkb2_area_top_pane_ParamLimits

0x70b4,	// (0x0001465b) vkb2_area_top_pane

0x7133,	// (0x000146da) vkb2_top_entry_pane_ParamLimits

0x7133,	// (0x000146da) vkb2_top_entry_pane

0x715d,	// (0x00014704) vkb2_top_grid_left_pane_ParamLimits

0x715d,	// (0x00014704) vkb2_top_grid_left_pane

0x717c,	// (0x00014723) vkb2_top_grid_right_pane_ParamLimits

0x717c,	// (0x00014723) vkb2_top_grid_right_pane

0x719b,	// (0x00014742) vkb2_cell_keypad_pane_ParamLimits

0x719b,	// (0x00014742) vkb2_cell_keypad_pane

0x726c,	// (0x00014813) vkb2_area_bottom_grid_pane_ParamLimits

0x726c,	// (0x00014813) vkb2_area_bottom_grid_pane

0x7292,	// (0x00014839) vkb2_area_bottom_pane_g1_ParamLimits

0x7292,	// (0x00014839) vkb2_area_bottom_pane_g1

0x72b6,	// (0x0001485d) vkb2_area_bottom_pane_g2_ParamLimits

0x72b6,	// (0x0001485d) vkb2_area_bottom_pane_g2

0x72e4,	// (0x0001488b) vkb2_area_bottom_pane_g3_ParamLimits

0x72e4,	// (0x0001488b) vkb2_area_bottom_pane_g3

0x0002,

0xfd76,	// (0x0001d31d) vkb2_area_bottom_pane_g_ParamLimits

0xfd76,	// (0x0001d31d) vkb2_area_bottom_pane_g

0x7345,	// (0x000148ec) vkb2_top_cell_left_pane_ParamLimits

0x7345,	// (0x000148ec) vkb2_top_cell_left_pane

0xde9d,	// (0x0001b444) vkb2_top_entry_pane_g1_ParamLimits

0xde9d,	// (0x0001b444) vkb2_top_entry_pane_g1

0xdeab,	// (0x0001b452) vkb2_top_entry_pane_t1_ParamLimits

0xdeab,	// (0x0001b452) vkb2_top_entry_pane_t1

0xdedd,	// (0x0001b484) vkb2_top_entry_pane_t2_ParamLimits

0xdedd,	// (0x0001b484) vkb2_top_entry_pane_t2

0xdf0f,	// (0x0001b4b6) vkb2_top_entry_pane_t3_ParamLimits

0xdf0f,	// (0x0001b4b6) vkb2_top_entry_pane_t3

0x0002,

0xfd7d,	// (0x0001d324) vkb2_top_entry_pane_t_ParamLimits

0xfd7d,	// (0x0001d324) vkb2_top_entry_pane_t

0x7392,	// (0x00014939) vkb2_top_grid_right_pane_g1_ParamLimits

0x7392,	// (0x00014939) vkb2_top_grid_right_pane_g1

0x73a8,	// (0x0001494f) vkb2_top_grid_right_pane_g2_ParamLimits

0x73a8,	// (0x0001494f) vkb2_top_grid_right_pane_g2

0x73c0,	// (0x00014967) vkb2_top_grid_right_pane_g3_ParamLimits

0x73c0,	// (0x00014967) vkb2_top_grid_right_pane_g3

0x73d8,	// (0x0001497f) vkb2_top_grid_right_pane_g4_ParamLimits

0x73d8,	// (0x0001497f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd84,	// (0x0001d32b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd84,	// (0x0001d32b) vkb2_top_grid_right_pane_g

0x73ee,	// (0x00014995) vkb2_top_cell_left_pane_g1

0x7405,	// (0x000149ac) vkb2_cell_keypad_pane_g1_ParamLimits

0x7405,	// (0x000149ac) vkb2_cell_keypad_pane_g1

0xdf33,	// (0x0001b4da) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf33,	// (0x0001b4da) vkb2_cell_keypad_pane_t1

0x7413,	// (0x000149ba) vkb2_cell_bottom_grid_pane_ParamLimits

0x7413,	// (0x000149ba) vkb2_cell_bottom_grid_pane

0x744c,	// (0x000149f3) vkb2_cell_bottom_grid_pane_g1

0xdade,	// (0x0001b085) aid_call2_pane_cp02

0xdae6,	// (0x0001b08d) aid_call_pane_cp02

0xdaee,	// (0x0001b095) clock_digital_number_pane_cp10

0xdaf6,	// (0x0001b09d) clock_digital_number_pane_cp11

0xdafe,	// (0x0001b0a5) clock_digital_number_pane_cp12

0xdb06,	// (0x0001b0ad) clock_digital_number_pane_cp13

0xdb0e,	// (0x0001b0b5) clock_digital_separator_pane_cp10

0x422e,	// (0x000117d5) popup_clock_digital_analogue_window_cp2_g1

0x422e,	// (0x000117d5) popup_clock_digital_analogue_window_cp2_g2

0xdb16,	// (0x0001b0bd) popup_clock_digital_analogue_window_cp2_g3

0x422e,	// (0x000117d5) popup_clock_digital_analogue_window_cp2_g4

0xdb16,	// (0x0001b0bd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd39,	// (0x0001d2e0) popup_clock_digital_analogue_window_cp2_g

0xdb1e,	// (0x0001b0c5) popup_clock_digital_analogue_window_cp2_t1

0xdb2c,	// (0x0001b0d3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd44,	// (0x0001d2eb) popup_clock_digital_analogue_window_cp2_t

0xbcbd,	// (0x00019264) clock_digital_number_pane_cp10_g1

0xbcbd,	// (0x00019264) clock_digital_number_pane_cp10_g2

0x0001,

0xfb27,	// (0x0001d0ce) clock_digital_number_pane_cp10_g

0xbcbd,	// (0x00019264) clock_digital_separator_pane_cp10_g1

0xbcbd,	// (0x00019264) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb27,	// (0x0001d0ce) clock_digital_separator_pane_cp10_g

0xd95a,	// (0x0001af01) uniindi_top_pane_g3

0xd96b,	// (0x0001af12) uniindi_top_pane_g4

0x7226,	// (0x000147cd) vkb2_row_keypad_pane_ParamLimits

0x7226,	// (0x000147cd) vkb2_row_keypad_pane

0x746c,	// (0x00014a13) vkb2_cell_t_keypad_pane_ParamLimits

0x746c,	// (0x00014a13) vkb2_cell_t_keypad_pane

0x747c,	// (0x00014a23) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x747c,	// (0x00014a23) vkb2_cell_t_keypad_pane_cp08

0x748f,	// (0x00014a36) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x748f,	// (0x00014a36) vkb2_cell_t_keypad_pane_cp09

0x74a3,	// (0x00014a4a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x74a3,	// (0x00014a4a) vkb2_cell_t_keypad_pane_cp01

0x74b4,	// (0x00014a5b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x74b4,	// (0x00014a5b) vkb2_cell_t_keypad_pane_cp02

0x74c5,	// (0x00014a6c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x74c5,	// (0x00014a6c) vkb2_cell_t_keypad_pane_cp03

0x74d6,	// (0x00014a7d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x74d6,	// (0x00014a7d) vkb2_cell_t_keypad_pane_cp04

0x74e7,	// (0x00014a8e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x74e7,	// (0x00014a8e) vkb2_cell_t_keypad_pane_cp05

0x74f8,	// (0x00014a9f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x74f8,	// (0x00014a9f) vkb2_cell_t_keypad_pane_cp06

0x7509,	// (0x00014ab0) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7509,	// (0x00014ab0) vkb2_cell_t_keypad_pane_cp07

0x751a,	// (0x00014ac1) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x751a,	// (0x00014ac1) vkb2_cell_t_keypad_pane_cp10

0x6ccd,	// (0x00014274) vkb2_cell_t_keypad_pane_g1

0xdf4a,	// (0x0001b4f1) vkb2_cell_t_keypad_pane_t1

0x568d,	// (0x00012c34) popup_grid_graphic2_window

0xdf5c,	// (0x0001b503) aid_size_cell_graphic2_ParamLimits

0xdf5c,	// (0x0001b503) aid_size_cell_graphic2

0xdfb5,	// (0x0001b55c) bg_popup_window_pane_cp21_ParamLimits

0xdfb5,	// (0x0001b55c) bg_popup_window_pane_cp21

0xdfc3,	// (0x0001b56a) graphic2_pages_pane_ParamLimits

0xdfc3,	// (0x0001b56a) graphic2_pages_pane

0xe009,	// (0x0001b5b0) grid_graphic2_control_pane_ParamLimits

0xe009,	// (0x0001b5b0) grid_graphic2_control_pane

0xe047,	// (0x0001b5ee) grid_graphic2_pane_ParamLimits

0xe047,	// (0x0001b5ee) grid_graphic2_pane

0xe0bb,	// (0x0001b662) cell_graphic2_pane

0x568d,	// (0x00012c34) main_comp_mode_pane

0xd168,	// (0x0001a70f) list_ai3_gene_pane_ParamLimits

0xd599,	// (0x0001ab40) bg_popup_window_pane_cp19_ParamLimits

0xd5a5,	// (0x0001ab4c) bg_touch_area_indi_pane_ParamLimits

0xd5a5,	// (0x0001ab4c) bg_touch_area_indi_pane

0xd5bb,	// (0x0001ab62) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5bb,	// (0x0001ab62) bg_touch_area_indi_pane_cp01

0xd5d1,	// (0x0001ab78) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5d1,	// (0x0001ab78) bg_touch_area_indi_pane_cp02

0xd5e7,	// (0x0001ab8e) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5e7,	// (0x0001ab8e) bg_touch_area_indi_pane_cp03

0xd601,	// (0x0001aba8) popup_slider_window_g1_ParamLimits

0xd61d,	// (0x0001abc4) popup_slider_window_g2_ParamLimits

0xd639,	// (0x0001abe0) popup_slider_window_g3_ParamLimits

0xfcce,	// (0x0001d275) popup_slider_window_g_ParamLimits

0xd69f,	// (0x0001ac46) popup_slider_window_t1_ParamLimits

0xd713,	// (0x0001acba) small_volume_slider_vertical_pane_ParamLimits

0xe0bb,	// (0x0001b662) cell_graphic2_pane_ParamLimits

0xe10a,	// (0x0001b6b1) bg_button_pane_cp10_ParamLimits

0xe10a,	// (0x0001b6b1) bg_button_pane_cp10

0xe11d,	// (0x0001b6c4) bg_button_pane_cp11_ParamLimits

0xe11d,	// (0x0001b6c4) bg_button_pane_cp11

0xe130,	// (0x0001b6d7) graphic2_pages_pane_g1_ParamLimits

0xe130,	// (0x0001b6d7) graphic2_pages_pane_g1

0xe14b,	// (0x0001b6f2) graphic2_pages_pane_g2_ParamLimits

0xe14b,	// (0x0001b6f2) graphic2_pages_pane_g2

0x0001,

0xfd92,	// (0x0001d339) graphic2_pages_pane_g_ParamLimits

0xfd92,	// (0x0001d339) graphic2_pages_pane_g

0xe163,	// (0x0001b70a) graphic2_pages_pane_t1_ParamLimits

0xe163,	// (0x0001b70a) graphic2_pages_pane_t1

0xe17b,	// (0x0001b722) cell_graphic2_control_pane_ParamLimits

0xe17b,	// (0x0001b722) cell_graphic2_control_pane

0xe199,	// (0x0001b740) cell_graphic2_pane_g1_ParamLimits

0xe199,	// (0x0001b740) cell_graphic2_pane_g1

0xe1a6,	// (0x0001b74d) cell_graphic2_pane_g2_ParamLimits

0xe1a6,	// (0x0001b74d) cell_graphic2_pane_g2

0xe1b3,	// (0x0001b75a) cell_graphic2_pane_g3_ParamLimits

0xe1b3,	// (0x0001b75a) cell_graphic2_pane_g3

0xe1c0,	// (0x0001b767) cell_graphic2_pane_g4_ParamLimits

0xe1c0,	// (0x0001b767) cell_graphic2_pane_g4

0xe1cd,	// (0x0001b774) cell_graphic2_pane_g5_ParamLimits

0xe1cd,	// (0x0001b774) cell_graphic2_pane_g5

0x0004,

0xfd97,	// (0x0001d33e) cell_graphic2_pane_g_ParamLimits

0xfd97,	// (0x0001d33e) cell_graphic2_pane_g

0xe1e6,	// (0x0001b78d) cell_graphic2_pane_t1_ParamLimits

0xe1e6,	// (0x0001b78d) cell_graphic2_pane_t1

0x9263,	// (0x0001680a) grid_highlight_pane_cp11_ParamLimits

0x9263,	// (0x0001680a) grid_highlight_pane_cp11

0x38d3,	// (0x00010e7a) bg_button_pane_cp05

0xe21c,	// (0x0001b7c3) cell_graphic2_control_pane_g1

0xbcbd,	// (0x00019264) bg_touch_area_indi_pane_g1

0xe244,	// (0x0001b7eb) aid_cmod_rocker_key_size

0xe24e,	// (0x0001b7f5) aid_cmode_itu_key_size

0xe258,	// (0x0001b7ff) main_cmode_video_pane

0xe262,	// (0x0001b809) main_comp_mode_itu_pane

0xe26e,	// (0x0001b815) main_comp_mode_rocker_pane

0xe27a,	// (0x0001b821) cell_cmode_rocker_pane_ParamLimits

0xe27a,	// (0x0001b821) cell_cmode_rocker_pane

0xe28c,	// (0x0001b833) cell_cmode_itu_pane_ParamLimits

0xe28c,	// (0x0001b833) cell_cmode_itu_pane

0x3bb1,	// (0x00011158) bg_button_pane_cp06_ParamLimits

0x3bb1,	// (0x00011158) bg_button_pane_cp06

0xbf2d,	// (0x000194d4) cell_cmode_rocker_pane_g1_ParamLimits

0xbf2d,	// (0x000194d4) cell_cmode_rocker_pane_g1

0xd7b7,	// (0x0001ad5e) cell_cmode_rocker_pane_g2_ParamLimits

0xd7b7,	// (0x0001ad5e) cell_cmode_rocker_pane_g2

0x0001,

0xfda7,	// (0x0001d34e) cell_cmode_rocker_pane_g_ParamLimits

0xfda7,	// (0x0001d34e) cell_cmode_rocker_pane_g

0x36df,	// (0x00010c86) bg_button_pane_cp07

0xe2a1,	// (0x0001b848) cell_cmode_itu_pane_g1

0xe2aa,	// (0x0001b851) cell_cmode_itu_pane_t1

0xe2b8,	// (0x0001b85f) cell_cmode_itu_pane_t2

0x0001,

0xfdac,	// (0x0001d353) cell_cmode_itu_pane_t

0xd9dd,	// (0x0001af84) aid_touch_ctrl_left

0xd9e5,	// (0x0001af8c) aid_touch_ctrl_right

0x36df,	// (0x00010c86) compa_mode_pane

0xe2c6,	// (0x0001b86d) aid_cmod_rocker_key_size_cp

0xe2d0,	// (0x0001b877) aid_cmode_itu_key_size_cp

0xe2da,	// (0x0001b881) compa_mode_pane_g1

0xe2e2,	// (0x0001b889) compa_mode_pane_g2

0xe2ea,	// (0x0001b891) compa_mode_pane_g3

0x0002,

0xfdb1,	// (0x0001d358) compa_mode_pane_g

0xe2f2,	// (0x0001b899) main_comp_mode_itu_pane_cp

0xe2fa,	// (0x0001b8a1) main_comp_mode_rocker_pane_cp

0xe302,	// (0x0001b8a9) cell_cmode_itu_pane_cp_ParamLimits

0xe302,	// (0x0001b8a9) cell_cmode_itu_pane_cp

0xe317,	// (0x0001b8be) cell_cmode_rocker_pane_cp_ParamLimits

0xe317,	// (0x0001b8be) cell_cmode_rocker_pane_cp

0x3bb1,	// (0x00011158) bg_button_pane_cp06_cp_ParamLimits

0x3bb1,	// (0x00011158) bg_button_pane_cp06_cp

0xbf2d,	// (0x000194d4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf2d,	// (0x000194d4) cell_cmode_rocker_pane_g1_cp

0xbcbd,	// (0x00019264) cell_cmode_rocker_pane_g2_cp

0x36df,	// (0x00010c86) bg_button_pane_cp07_cp

0xe329,	// (0x0001b8d0) cell_cmode_itu_pane_g1_cp

0xe332,	// (0x0001b8d9) cell_cmode_itu_pane_t1_cp

0xe332,	// (0x0001b8d9) cell_cmode_itu_pane_t2_cp

0xa753,	// (0x00017cfa) settings_code_pane_cp2

0x378f,	// (0x00010d36) bg_popup_window_pane_cp3_ParamLimits

0x39ec,	// (0x00010f93) heading_pane_cp3_ParamLimits

0x39fb,	// (0x00010fa2) listscroll_popup_graphic_pane_ParamLimits

0x6a76,	// (0x0001401d) fep_hwr_aid_pane_ParamLimits

0x6eed,	// (0x00014494) aid_touch_sctrl_top_ParamLimits

0x6f08,	// (0x000144af) sctrl_sk_top_pane_g1_ParamLimits

0x6ccd,	// (0x00014274) sctrl_sk_top_pane_g2_ParamLimits

0xfce7,	// (0x0001d28e) sctrl_sk_top_pane_g_ParamLimits

0x6f15,	// (0x000144bc) sctrl_sk_top_pane_t1_ParamLimits

0x6eed,	// (0x00014494) aid_touch_sctrl_bottom_ParamLimits

0x6f15,	// (0x000144bc) sctrl_sk_bottom_pane_t1_ParamLimits

0xd926,	// (0x0001aecd) aid_area_touch_clock

0x70fa,	// (0x000146a1) aid_vkb2_area_top_pane_cell_ParamLimits

0x70fa,	// (0x000146a1) aid_vkb2_area_top_pane_cell

0x7248,	// (0x000147ef) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7248,	// (0x000147ef) aid_vkb2_area_bottom_pane_cell

0xde95,	// (0x0001b43c) popup_char_count_window

0xe340,	// (0x0001b8e7) popup_char_count_window_g1

0xe349,	// (0x0001b8f0) popup_char_count_window_g2

0xe352,	// (0x0001b8f9) popup_char_count_window_g3

0x0002,

0xfdb8,	// (0x0001d35f) popup_char_count_window_g

0xe35b,	// (0x0001b902) popup_char_count_window_t1

0x6fbc,	// (0x00014563) popup_fep_char_preview_window_ParamLimits

0x6fbc,	// (0x00014563) popup_fep_char_preview_window

0x7118,	// (0x000146bf) vkb2_top_candi_pane_ParamLimits

0x7118,	// (0x000146bf) vkb2_top_candi_pane

0xe369,	// (0x0001b910) cell_vkb2_top_candi_pane_ParamLimits

0xe369,	// (0x0001b910) cell_vkb2_top_candi_pane

0x752f,	// (0x00014ad6) bg_popup_fep_char_preview_window_ParamLimits

0x752f,	// (0x00014ad6) bg_popup_fep_char_preview_window

0x753d,	// (0x00014ae4) popup_fep_char_preview_window_t1_ParamLimits

0x753d,	// (0x00014ae4) popup_fep_char_preview_window_t1

0xe3b3,	// (0x0001b95a) bg_popup_fep_char_preview_window_g1

0xe3bb,	// (0x0001b962) bg_popup_fep_char_preview_window_g2

0xe3c3,	// (0x0001b96a) bg_popup_fep_char_preview_window_g3

0xe3cb,	// (0x0001b972) bg_popup_fep_char_preview_window_g4

0xe3d3,	// (0x0001b97a) bg_popup_fep_char_preview_window_g5

0xe3db,	// (0x0001b982) bg_popup_fep_char_preview_window_g6

0xe3e3,	// (0x0001b98a) bg_popup_fep_char_preview_window_g7

0xe3eb,	// (0x0001b992) bg_popup_fep_char_preview_window_g8

0xe3f3,	// (0x0001b99a) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbf,	// (0x0001d366) bg_popup_fep_char_preview_window_g

0x6ccd,	// (0x00014274) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6ccd,	// (0x00014274) cell_vkb2_top_candi_pane_g1

0x6cdb,	// (0x00014282) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6cdb,	// (0x00014282) cell_vkb2_top_candi_pane_g2

0xdf94,	// (0x0001b53b) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdf94,	// (0x0001b53b) cell_vkb2_top_candi_pane_g3

0x757f,	// (0x00014b26) cell_vkb2_top_candi_pane_g4_ParamLimits

0x757f,	// (0x00014b26) cell_vkb2_top_candi_pane_g4

0xc5c6,	// (0x00019b6d) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc5c6,	// (0x00019b6d) cell_vkb2_top_candi_pane_g5

0x75a0,	// (0x00014b47) cell_vkb2_top_candi_pane_g6_ParamLimits

0x75a0,	// (0x00014b47) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd4,	// (0x0001d37b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd4,	// (0x0001d37b) cell_vkb2_top_candi_pane_g

0x75ae,	// (0x00014b55) cell_vkb2_top_candi_pane_t1

0x688e,	// (0x00013e35) aid_size_touch_slider_mark_ParamLimits

0x688e,	// (0x00013e35) aid_size_touch_slider_mark

0xdff9,	// (0x0001b5a0) grid_graphic2_catg_pane_ParamLimits

0xdff9,	// (0x0001b5a0) grid_graphic2_catg_pane

0xe097,	// (0x0001b63e) popup_grid_graphic2_window_t1_ParamLimits

0xe097,	// (0x0001b63e) popup_grid_graphic2_window_t1

0xe0a9,	// (0x0001b650) popup_grid_graphic2_window_t2_ParamLimits

0xe0a9,	// (0x0001b650) popup_grid_graphic2_window_t2

0x0001,

0xfd8d,	// (0x0001d334) popup_grid_graphic2_window_t_ParamLimits

0xfd8d,	// (0x0001d334) popup_grid_graphic2_window_t

0x38d3,	// (0x00010e7a) bg_button_pane_cp05_ParamLimits

0xe21c,	// (0x0001b7c3) cell_graphic2_control_pane_g1_ParamLimits

0xe3fb,	// (0x0001b9a2) cell_graphic2_catg_pane_ParamLimits

0xe3fb,	// (0x0001b9a2) cell_graphic2_catg_pane

0x36df,	// (0x00010c86) bg_button_pane_cp12

0xe40d,	// (0x0001b9b4) cell_graphic2_catg_pane_g1

0xd8f1,	// (0x0001ae98) cell_tb_ext_pane_t1_ParamLimits

0x7365,	// (0x0001490c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7365,	// (0x0001490c) vkb2_top_cell_right_narrow_pane

0x737d,	// (0x00014924) vkb2_top_cell_right_wide_pane_ParamLimits

0x737d,	// (0x00014924) vkb2_top_cell_right_wide_pane

0x6a68,	// (0x0001400f) bg_vkb2_func_pane_ParamLimits

0x6a68,	// (0x0001400f) bg_vkb2_func_pane

0x73ee,	// (0x00014995) vkb2_top_cell_left_pane_g1_ParamLimits

0x6a68,	// (0x0001400f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6a68,	// (0x0001400f) bg_vkb2_fuc_pane_cp03

0x744c,	// (0x000149f3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x914b,	// (0x000166f2) bg_vkb2_func_pane_g1

0x9153,	// (0x000166fa) bg_vkb2_func_pane_g2

0x9163,	// (0x0001670a) bg_vkb2_func_pane_g3

0x915b,	// (0x00016702) bg_vkb2_func_pane_g4

0x916b,	// (0x00016712) bg_vkb2_func_pane_g5

0x9173,	// (0x0001671a) bg_vkb2_func_pane_g6

0x917b,	// (0x00016722) bg_vkb2_func_pane_g7

0x9183,	// (0x0001672a) bg_vkb2_func_pane_g8

0x9143,	// (0x000166ea) bg_vkb2_func_pane_g9

0x0008,

0xfde1,	// (0x0001d388) bg_vkb2_func_pane_g

0x6a68,	// (0x0001400f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6a68,	// (0x0001400f) bg_vkb2_fuc_pane_cp01

0x73ee,	// (0x00014995) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x73ee,	// (0x00014995) vkb2_top_cell_right_wide_pane_g1

0x6a68,	// (0x0001400f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6a68,	// (0x0001400f) bg_vkb2_fuc_pane_cp02

0x75cd,	// (0x00014b74) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x75cd,	// (0x00014b74) vkb2_top_cell_right_narrow_pane_g1

0xd513,	// (0x0001aaba) aid_touch_area_decrease_ParamLimits

0xd513,	// (0x0001aaba) aid_touch_area_decrease

0xd537,	// (0x0001aade) aid_touch_area_increase_ParamLimits

0xd537,	// (0x0001aade) aid_touch_area_increase

0xd54f,	// (0x0001aaf6) aid_touch_area_mute_ParamLimits

0xd54f,	// (0x0001aaf6) aid_touch_area_mute

0xd56b,	// (0x0001ab12) aid_touch_area_slider_ParamLimits

0xd56b,	// (0x0001ab12) aid_touch_area_slider

0xd655,	// (0x0001abfc) popup_slider_window_g4_ParamLimits

0xd655,	// (0x0001abfc) popup_slider_window_g4

0xd66d,	// (0x0001ac14) popup_slider_window_g5_ParamLimits

0xd66d,	// (0x0001ac14) popup_slider_window_g5

0xd68f,	// (0x0001ac36) popup_slider_window_g6_ParamLimits

0xd68f,	// (0x0001ac36) popup_slider_window_g6

0xd6cd,	// (0x0001ac74) popup_slider_window_t2_ParamLimits

0xd6cd,	// (0x0001ac74) popup_slider_window_t2

0x0001,

0xfcdb,	// (0x0001d282) popup_slider_window_t_ParamLimits

0xfcdb,	// (0x0001d282) popup_slider_window_t

0xd6e5,	// (0x0001ac8c) slider_pane_ParamLimits

0xd6e5,	// (0x0001ac8c) slider_pane

0xe416,	// (0x0001b9bd) slider_pane_g1_ParamLimits

0xe416,	// (0x0001b9bd) slider_pane_g1

0xe42a,	// (0x0001b9d1) slider_pane_g2_ParamLimits

0xe42a,	// (0x0001b9d1) slider_pane_g2

0xe440,	// (0x0001b9e7) slider_pane_g3_ParamLimits

0xe440,	// (0x0001b9e7) slider_pane_g3

0x0003,

0xfdf4,	// (0x0001d39b) slider_pane_g_ParamLimits

0xfdf4,	// (0x0001d39b) slider_pane_g

0x6445,	// (0x000139ec) popup_tb_float_extension_window_ParamLimits

0x6445,	// (0x000139ec) popup_tb_float_extension_window

0xe46c,	// (0x0001ba13) aid_size_cell_tb_float_ext

0x36df,	// (0x00010c86) bg_popup_sub_window_cp28

0xe478,	// (0x0001ba1f) grid_tb_float_ext_pane

0xe482,	// (0x0001ba29) cell_tb_float_ext_pane_ParamLimits

0xe482,	// (0x0001ba29) cell_tb_float_ext_pane

0xe49c,	// (0x0001ba43) cell_tb_float_ext_pane_g1

0xe4a5,	// (0x0001ba4c) grid_highlight_pane_cp12

0x6bb7,	// (0x0001415e) cell_last_hwr_side_pane_ParamLimits

0x6bb7,	// (0x0001415e) cell_last_hwr_side_pane

0xbcbd,	// (0x00019264) cell_last_hwr_side_pane_g1

0xe4ae,	// (0x0001ba55) cell_last_hwr_side_pane_g2

0x0001,

0xfdfd,	// (0x0001d3a4) cell_last_hwr_side_pane_g

0x7314,	// (0x000148bb) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7314,	// (0x000148bb) vkb2_area_bottom_space_btn_pane

0x6ccd,	// (0x00014274) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf4a,	// (0x0001b4f1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x75ae,	// (0x00014b55) cell_vkb2_top_candi_pane_t1_ParamLimits

0x75ed,	// (0x00014b94) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x75ed,	// (0x00014b94) vkb2_area_bottom_space_btn_pane_g1

0x7627,	// (0x00014bce) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7627,	// (0x00014bce) vkb2_area_bottom_space_btn_pane_g2

0x765d,	// (0x00014c04) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x765d,	// (0x00014c04) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe02,	// (0x0001d3a9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe02,	// (0x0001d3a9) vkb2_area_bottom_space_btn_pane_g

0x6b2b,	// (0x000140d2) cel_fep_hwr_func_pane_ParamLimits

0x6b2b,	// (0x000140d2) cel_fep_hwr_func_pane

0x6b67,	// (0x0001410e) cell_hwr_side_button_pane_ParamLimits

0x6b67,	// (0x0001410e) cell_hwr_side_button_pane

0xd926,	// (0x0001aecd) aid_area_touch_clock_ParamLimits

0x38d3,	// (0x00010e7a) bg_uniindi_top_pane_ParamLimits

0xd938,	// (0x0001aedf) uniindi_top_pane_g1_ParamLimits

0xd94e,	// (0x0001aef5) uniindi_top_pane_g2_ParamLimits

0xd95a,	// (0x0001af01) uniindi_top_pane_g3_ParamLimits

0xd96b,	// (0x0001af12) uniindi_top_pane_g4_ParamLimits

0xfd13,	// (0x0001d2ba) uniindi_top_pane_g_ParamLimits

0xd978,	// (0x0001af1f) uniindi_top_pane_t1_ParamLimits

0x38d3,	// (0x00010e7a) bg_vkb2_func_pane_cp01_ParamLimits

0x38d3,	// (0x00010e7a) bg_vkb2_func_pane_cp01

0xe4b7,	// (0x0001ba5e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4b7,	// (0x0001ba5e) cel_fep_hwr_func_pane_g1

0x38d3,	// (0x00010e7a) bg_vkb2_func_pane_cp02_ParamLimits

0x38d3,	// (0x00010e7a) bg_vkb2_func_pane_cp02

0xe4b7,	// (0x0001ba5e) cell_hwr_side_button_pane_g1_ParamLimits

0xe4b7,	// (0x0001ba5e) cell_hwr_side_button_pane_g1

0x8f99,	// (0x00016540) status_pane_g4_ParamLimits

0x8f99,	// (0x00016540) status_pane_g4

0x8fb3,	// (0x0001655a) status_pane_t1

0xb9f8,	// (0x00018f9f) form2_midp_gauge_slider_cont_pane

0xba00,	// (0x00018fa7) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba12,	// (0x00018fb9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba24,	// (0x00018fcb) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfada,	// (0x0001d081) form2_midp_gauge_slider_pane_t_ParamLimits

0xba36,	// (0x00018fdd) form2_midp_slider_pane_ParamLimits

0x6f84,	// (0x0001452b) aid_size_cell_func_vkb2_ParamLimits

0x6f84,	// (0x0001452b) aid_size_cell_func_vkb2

0xe458,	// (0x0001b9ff) slider_pane_g4_ParamLimits

0xe458,	// (0x0001b9ff) slider_pane_g4

0x76a7,	// (0x00014c4e) form2_midp_gauge_slider_pane_t2_cp01

0x76b5,	// (0x00014c5c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x76b5,	// (0x00014c5c) form2_midp_gauge_slider_pane_t3_cp01

0x76d2,	// (0x00014c79) form2_midp_slider_pane_cp01

0x36df,	// (0x00010c86) navi_smil_pane

0xe4f0,	// (0x0001ba97) navi_smil_pane_g1

0xe4f8,	// (0x0001ba9f) navi_smil_pane_t1

0xe4c5,	// (0x0001ba6c) form2_midp_slider_pane_g1

0xe4ce,	// (0x0001ba75) form2_midp_slider_pane_g2

0xe4d6,	// (0x0001ba7d) form2_midp_slider_pane_g3

0xe4c5,	// (0x0001ba6c) form2_midp_slider_pane_g4

0xe4de,	// (0x0001ba85) form2_midp_slider_pane_g5

0x0004,

0xfe0b,	// (0x0001d3b2) form2_midp_slider_pane_g

0x7697,	// (0x00014c3e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7697,	// (0x00014c3e) vkb2_area_bottom_space_btn_pane_g4

0x8dc8,	// (0x0001636f) lc0_navi_pane_ParamLimits

0x8dc8,	// (0x0001636f) lc0_navi_pane

0x8e3e,	// (0x000163e5) lc0_stat_indi_pane_ParamLimits

0x8e3e,	// (0x000163e5) lc0_stat_indi_pane

0x8e55,	// (0x000163fc) ls0_title_pane_ParamLimits

0x8e55,	// (0x000163fc) ls0_title_pane

0x3bb1,	// (0x00011158) bg_popup_sub_pane_cp14_ParamLimits

0xd90d,	// (0x0001aeb4) list_uniindi_pane_ParamLimits

0xd919,	// (0x0001aec0) uniindi_top_pane_ParamLimits

0xd9b5,	// (0x0001af5c) list_single_uniindi_pane_g1_ParamLimits

0xd9c8,	// (0x0001af6f) list_single_uniindi_pane_t1_ParamLimits

0x76db,	// (0x00014c82) lc0_stat_clock_pane_ParamLimits

0x76db,	// (0x00014c82) lc0_stat_clock_pane

0xe506,	// (0x0001baad) lc0_stat_indi_pane_g1_ParamLimits

0xe506,	// (0x0001baad) lc0_stat_indi_pane_g1

0xe513,	// (0x0001baba) lc0_stat_indi_pane_g2_ParamLimits

0xe513,	// (0x0001baba) lc0_stat_indi_pane_g2

0x0001,

0xfe16,	// (0x0001d3bd) lc0_stat_indi_pane_g_ParamLimits

0xfe16,	// (0x0001d3bd) lc0_stat_indi_pane_g

0x76e8,	// (0x00014c8f) lc0_uni_indicator_pane_ParamLimits

0x76e8,	// (0x00014c8f) lc0_uni_indicator_pane

0xe520,	// (0x0001bac7) ls0_title_pane_g1_ParamLimits

0xe520,	// (0x0001bac7) ls0_title_pane_g1

0xe534,	// (0x0001badb) ls0_title_pane_t1_ParamLimits

0xe534,	// (0x0001badb) ls0_title_pane_t1

0x76f5,	// (0x00014c9c) lc0_uni_indicator_pane_g1_ParamLimits

0x76f5,	// (0x00014c9c) lc0_uni_indicator_pane_g1

0xe56a,	// (0x0001bb11) lc0_stat_clock_pane_t1

0x568d,	// (0x00012c34) main_ai5_pane

0xe578,	// (0x0001bb1f) ai5_sk_pane_ParamLimits

0xe578,	// (0x0001bb1f) ai5_sk_pane

0xe585,	// (0x0001bb2c) cell_ai5_widget_pane_ParamLimits

0xe585,	// (0x0001bb2c) cell_ai5_widget_pane

0xe64e,	// (0x0001bbf5) aid_size_cell_widget_grid

0xe65c,	// (0x0001bc03) bg_ai5_widget_pane_ParamLimits

0xe65c,	// (0x0001bc03) bg_ai5_widget_pane

0xe6d8,	// (0x0001bc7f) cell_ai5_widget_pane_g2

0xe6ec,	// (0x0001bc93) cell_ai5_widget_pane_g3

0xe706,	// (0x0001bcad) cell_ai5_widget_pane_g4

0xe716,	// (0x0001bcbd) cell_ai5_widget_pane_g5

0xe726,	// (0x0001bccd) cell_ai5_widget_pane_g6

0xe732,	// (0x0001bcd9) cell_ai5_widget_pane_g7

0xe79e,	// (0x0001bd45) cell_ai5_widget_pane_t1_ParamLimits

0xe79e,	// (0x0001bd45) cell_ai5_widget_pane_t1

0xe7bb,	// (0x0001bd62) cell_ai5_widget_pane_t2_ParamLimits

0xe7bb,	// (0x0001bd62) cell_ai5_widget_pane_t2

0xe7d3,	// (0x0001bd7a) cell_ai5_widget_pane_t3_ParamLimits

0xe7d3,	// (0x0001bd7a) cell_ai5_widget_pane_t3

0xe7eb,	// (0x0001bd92) cell_ai5_widget_pane_t4_ParamLimits

0xe7eb,	// (0x0001bd92) cell_ai5_widget_pane_t4

0xe811,	// (0x0001bdb8) cell_ai5_widget_pane_t5_ParamLimits

0xe811,	// (0x0001bdb8) cell_ai5_widget_pane_t5

0xe830,	// (0x0001bdd7) cell_ai5_widget_pane_t6_ParamLimits

0xe830,	// (0x0001bdd7) cell_ai5_widget_pane_t6

0xe842,	// (0x0001bde9) cell_ai5_widget_pane_t7_ParamLimits

0xe842,	// (0x0001bde9) cell_ai5_widget_pane_t7

0xe861,	// (0x0001be08) cell_ai5_widget_pane_t8_ParamLimits

0xe861,	// (0x0001be08) cell_ai5_widget_pane_t8

0x000b,

0xfe36,	// (0x0001d3dd) cell_ai5_widget_pane_t_ParamLimits

0xfe36,	// (0x0001d3dd) cell_ai5_widget_pane_t

0xe8e5,	// (0x0001be8c) grid_ai5_widget_pane

0x3bb1,	// (0x00011158) highlight_cell_ai5_widget_pane_ParamLimits

0x3bb1,	// (0x00011158) highlight_cell_ai5_widget_pane

0xe8f3,	// (0x0001be9a) ai5_sk_left_pane

0xe8fd,	// (0x0001bea4) ai5_sk_middle_pane

0xe907,	// (0x0001beae) ai5_sk_right_pane

0xe911,	// (0x0001beb8) bg_ai5_widget_pane_g1_ParamLimits

0xe911,	// (0x0001beb8) bg_ai5_widget_pane_g1

0xe91d,	// (0x0001bec4) bg_ai5_widget_pane_g2_ParamLimits

0xe91d,	// (0x0001bec4) bg_ai5_widget_pane_g2

0xe929,	// (0x0001bed0) bg_ai5_widget_pane_g3_ParamLimits

0xe929,	// (0x0001bed0) bg_ai5_widget_pane_g3

0xe935,	// (0x0001bedc) bg_ai5_widget_pane_g4_ParamLimits

0xe935,	// (0x0001bedc) bg_ai5_widget_pane_g4

0xe941,	// (0x0001bee8) bg_ai5_widget_pane_g5_ParamLimits

0xe941,	// (0x0001bee8) bg_ai5_widget_pane_g5

0xe94d,	// (0x0001bef4) bg_ai5_widget_pane_g6_ParamLimits

0xe94d,	// (0x0001bef4) bg_ai5_widget_pane_g6

0xe959,	// (0x0001bf00) bg_ai5_widget_pane_g7_ParamLimits

0xe959,	// (0x0001bf00) bg_ai5_widget_pane_g7

0xe965,	// (0x0001bf0c) bg_ai5_widget_pane_g8_ParamLimits

0xe965,	// (0x0001bf0c) bg_ai5_widget_pane_g8

0xe971,	// (0x0001bf18) bg_ai5_widget_pane_g9_ParamLimits

0xe971,	// (0x0001bf18) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x0001d3f6) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0001d3f6) bg_ai5_widget_pane_g

0xe9a3,	// (0x0001bf4a) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9a3,	// (0x0001bf4a) cell_shortcut_ai5_widget_pane

0x4875,	// (0x00011e1c) bg_cell_shortcut_ai5_widget_pane

0xe9b4,	// (0x0001bf5b) cell_grid_ai5_widget_pane_g1

0x4875,	// (0x00011e1c) highlight_cell_shortcut_ai5_widget_pane

0x914b,	// (0x000166f2) ai5_sk_left_pane_g1

0xe9bd,	// (0x0001bf64) ai5_sk_left_pane_g2

0xe9c5,	// (0x0001bf6c) ai5_sk_left_pane_g3

0xe9cd,	// (0x0001bf74) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x0001d409) ai5_sk_left_pane_g

0xe9d5,	// (0x0001bf7c) ai5_sk_left_pane_t1

0x9153,	// (0x000166fa) ai5_sk_right_pane_g1

0xe9e3,	// (0x0001bf8a) ai5_sk_right_pane_g2

0xe9eb,	// (0x0001bf92) ai5_sk_right_pane_g3

0xe9f3,	// (0x0001bf9a) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x0001d412) ai5_sk_right_pane_g

0xe9fb,	// (0x0001bfa2) ai5_sk_right_pane_t1

0x9153,	// (0x000166fa) ai5_sk_middle_pane_g1

0x914b,	// (0x000166f2) ai5_sk_middle_pane_g2

0x916b,	// (0x00016712) ai5_sk_middle_pane_g3

0xe9eb,	// (0x0001bf92) ai5_sk_middle_pane_g4

0xe9c5,	// (0x0001bf6c) ai5_sk_middle_pane_g5

0xea09,	// (0x0001bfb0) ai5_sk_middle_pane_g6

0xea11,	// (0x0001bfb8) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x0001d41b) ai5_sk_middle_pane_g

0x8c4e,	// (0x000161f5) aid_touch_area_size_lc0_ParamLimits

0x8c4e,	// (0x000161f5) aid_touch_area_size_lc0

0x6cfc,	// (0x000142a3) cell_hwr_candidate_pane_t1_ParamLimits

0x8c6a,	// (0x00016211) aid_touch_navi_pane

0x8f43,	// (0x000164ea) status_dt_navi_pane_ParamLimits

0x8f43,	// (0x000164ea) status_dt_navi_pane

0x8f50,	// (0x000164f7) status_dt_sta_pane_ParamLimits

0x8f50,	// (0x000164f7) status_dt_sta_pane

0xea19,	// (0x0001bfc0) dt_sta_controll_pane

0xea26,	// (0x0001bfcd) dt_sta_indi_pane

0xea37,	// (0x0001bfde) dt_sta_title_pane

0x38d3,	// (0x00010e7a) bg_dt_sta_indi_pane_ParamLimits

0x38d3,	// (0x00010e7a) bg_dt_sta_indi_pane

0xea4a,	// (0x0001bff1) dt_sta_battery_pane

0xea52,	// (0x0001bff9) dt_sta_indi_pane_g1

0xea5b,	// (0x0001c002) dt_sta_indi_pane_g2

0xea64,	// (0x0001c00b) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x0001d42a) dt_sta_indi_pane_g

0xea6d,	// (0x0001c014) dt_sta_signal_pane

0x3bb1,	// (0x00011158) bg_dt_sta_title_pane_ParamLimits

0x3bb1,	// (0x00011158) bg_dt_sta_title_pane

0xa07a,	// (0x00017621) dt_sta_title_pane_g1

0xea76,	// (0x0001c01d) dt_sta_title_pane_t1_ParamLimits

0xea76,	// (0x0001c01d) dt_sta_title_pane_t1

0x36df,	// (0x00010c86) bg_dt_sta_control_pane

0xea8b,	// (0x0001c032) dt_sta_controll_pane_g1

0xea94,	// (0x0001c03b) bg_dt_sta_title_pane_g1

0xea9d,	// (0x0001c044) bg_dt_sta_title_pane_g2

0xeaa6,	// (0x0001c04d) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x0001d431) bg_dt_sta_title_pane_g

0xbcbd,	// (0x00019264) bg_dt_sta_indi_pane_g1

0xeaaf,	// (0x0001c056) dt_sta_signal_pane_g1

0xeab7,	// (0x0001c05e) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x0001d438) dt_sta_signal_pane_g

0xeabf,	// (0x0001c066) dt_sta_battery_pane_g1

0xeac8,	// (0x0001c06f) dt_sta_battery_pane_t1

0xbcbd,	// (0x00019264) bg_dt_sta_control_pane_g1

0x4345,	// (0x000118ec) fep_china_uni_eep_pane

0x434d,	// (0x000118f4) fep_china_uni_entry_pane_ParamLimits

0x435d,	// (0x00011904) popup_fep_china_uni_window_g1_ParamLimits

0x436d,	// (0x00011914) popup_fep_china_uni_window_g2_ParamLimits

0x436d,	// (0x00011914) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x0001cc90) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x0001cc90) popup_fep_china_uni_window_g

0xead7,	// (0x0001c07e) fep_china_uni_eep_pane_g1

0xeadf,	// (0x0001c086) fep_china_uni_eep_pane_t1

0xe4e7,	// (0x0001ba8e) aid_touch_area_size_smil_player

0x8dc0,	// (0x00016367) lc0_clock_pane

0x8fa7,	// (0x0001654e) status_pane_g5_ParamLimits

0x8fa7,	// (0x0001654e) status_pane_g5

0x6106,	// (0x000136ad) popup_keymap_window

0x8f65,	// (0x0001650c) status_icon_pane

0xe6ec,	// (0x0001bc93) cell_ai5_widget_pane_g3_ParamLimits

0xe706,	// (0x0001bcad) cell_ai5_widget_pane_g4_ParamLimits

0xe716,	// (0x0001bcbd) cell_ai5_widget_pane_g5_ParamLimits

0xe73e,	// (0x0001bce5) cell_ai5_widget_pane_g8_ParamLimits

0xe73e,	// (0x0001bce5) cell_ai5_widget_pane_g8

0xe752,	// (0x0001bcf9) cell_ai5_widget_pane_g9_ParamLimits

0xe752,	// (0x0001bcf9) cell_ai5_widget_pane_g9

0xe766,	// (0x0001bd0d) cell_ai5_widget_pane_g10_ParamLimits

0xe766,	// (0x0001bd0d) cell_ai5_widget_pane_g10

0xeaee,	// (0x0001c095) status_icon_pane_g1

0x36df,	// (0x00010c86) bg_popup_sub_pane_cp13

0xeaf6,	// (0x0001c09d) popup_keymap_window_t1

0x8bf3,	// (0x0001619a) control_pane_g6_ParamLimits

0x8bf3,	// (0x0001619a) control_pane_g6

0x8c00,	// (0x000161a7) control_pane_g7_ParamLimits

0x8c00,	// (0x000161a7) control_pane_g7

0x8c0d,	// (0x000161b4) control_pane_g8_ParamLimits

0x8c0d,	// (0x000161b4) control_pane_g8

0xea19,	// (0x0001bfc0) dt_sta_controll_pane_ParamLimits

0xea26,	// (0x0001bfcd) dt_sta_indi_pane_ParamLimits

0xea37,	// (0x0001bfde) dt_sta_title_pane_ParamLimits

0x3aaa,	// (0x00011051) aid_size_touch_scroll_bar_cale

0x5766,	// (0x00012d0d) popup_discreet_window_ParamLimits

0x5766,	// (0x00012d0d) popup_discreet_window

0x57e0,	// (0x00012d87) popup_sk_window

0x98be,	// (0x00016e65) bg_popup_sub_pane_cp28_ParamLimits

0x98be,	// (0x00016e65) bg_popup_sub_pane_cp28

0xeb04,	// (0x0001c0ab) popup_discreet_window_g1_ParamLimits

0xeb04,	// (0x0001c0ab) popup_discreet_window_g1

0xeb24,	// (0x0001c0cb) popup_discreet_window_t1_ParamLimits

0xeb24,	// (0x0001c0cb) popup_discreet_window_t1

0xeb42,	// (0x0001c0e9) popup_discreet_window_t2_ParamLimits

0xeb42,	// (0x0001c0e9) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x0001d43d) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x0001d43d) popup_discreet_window_t

0x7709,	// (0x00014cb0) popup_sk_window_g1

0x7713,	// (0x00014cba) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x0001d444) popup_sk_window_g

0x771b,	// (0x00014cc2) popup_sk_window_t1

0x7729,	// (0x00014cd0) popup_sk_window_t1_copy1

0xe6d8,	// (0x0001bc7f) cell_ai5_widget_pane_g2_ParamLimits

0xe873,	// (0x0001be1a) cell_ai5_widget_pane_t9_ParamLimits

0xe873,	// (0x0001be1a) cell_ai5_widget_pane_t9

0x36df,	// (0x00010c86) main_fep_fshwr2_pane

0x7737,	// (0x00014cde) aid_fshwr2_btn_pane

0x774b,	// (0x00014cf2) aid_fshwr2_syb_pane

0x775f,	// (0x00014d06) aid_fshwr2_txt_pane

0x776f,	// (0x00014d16) fshwr2_func_candi_pane

0x7793,	// (0x00014d3a) fshwr2_hwr_syb_pane

0x77ad,	// (0x00014d54) fshwr2_icf_pane

0x568d,	// (0x00012c34) fshwr2_icf_bg_pane

0x77db,	// (0x00014d82) fshwr2_icf_pane_t1_ParamLimits

0x77db,	// (0x00014d82) fshwr2_icf_pane_t1

0x422e,	// (0x000117d5) fshwr2_func_candi_pane_g1

0xeb94,	// (0x0001c13b) fshwr2_func_candi_row_pane_ParamLimits

0xeb94,	// (0x0001c13b) fshwr2_func_candi_row_pane

0x77f4,	// (0x00014d9b) cell_fshwr2_syb_pane_ParamLimits

0x77f4,	// (0x00014d9b) cell_fshwr2_syb_pane

0x7817,	// (0x00014dbe) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7817,	// (0x00014dbe) fshwr2_hwr_syb_pane_g1

0x568d,	// (0x00012c34) bg_popup_call_pane_cp01

0x7825,	// (0x00014dcc) fshwr2_func_candi_cell_pane_ParamLimits

0x7825,	// (0x00014dcc) fshwr2_func_candi_cell_pane

0x9f1a,	// (0x000174c1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f1a,	// (0x000174c1) fshwr2_func_candi_cell_bg_pane

0x7870,	// (0x00014e17) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7870,	// (0x00014e17) fshwr2_func_candi_cell_pane_g1

0x7890,	// (0x00014e37) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7890,	// (0x00014e37) fshwr2_func_candi_cell_pane_t1

0x568d,	// (0x00012c34) bg_button_pane_cp08

0x4a20,	// (0x00011fc7) cell_fshwr2_syb_bg_pane

0x78a3,	// (0x00014e4a) cell_fshwr2_syb_bg_pane_g1

0x78b7,	// (0x00014e5e) cell_fshwr2_syb_bg_pane_t1

0x3bb1,	// (0x00011158) main_tmo_pane

0xa3b3,	// (0x0001795a) uni_indicator_pane_g1_ParamLimits

0xa3c6,	// (0x0001796d) uni_indicator_pane_g2_ParamLimits

0xa3d8,	// (0x0001797f) uni_indicator_pane_g3_ParamLimits

0xa3e7,	// (0x0001798e) uni_indicator_pane_g4_ParamLimits

0xa3e7,	// (0x0001798e) uni_indicator_pane_g4

0xa3fb,	// (0x000179a2) uni_indicator_pane_g5_ParamLimits

0xa3fb,	// (0x000179a2) uni_indicator_pane_g5

0xa3fb,	// (0x000179a2) uni_indicator_pane_g6_ParamLimits

0xa3fb,	// (0x000179a2) uni_indicator_pane_g6

0xf8ed,	// (0x0001ce94) uni_indicator_pane_g_ParamLimits

0xd4f5,	// (0x0001aa9c) popup_tmo_note_window_ParamLimits

0xd4f5,	// (0x0001aa9c) popup_tmo_note_window

0x6f66,	// (0x0001450d) fshwr2_bg_pane

0x7881,	// (0x00014e28) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7881,	// (0x00014e28) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x0001d449) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x0001d449) fshwr2_func_candi_cell_pane_g

0x6cb5,	// (0x0001425c) bg_popup_window_pane_cp01

0x78cd,	// (0x00014e74) bg_popup_window_pane_g1_cp01

0xebbb,	// (0x0001c162) bg_popup_window_pane_cp22_ParamLimits

0xebbb,	// (0x0001c162) bg_popup_window_pane_cp22

0xebc9,	// (0x0001c170) listscroll_tmo_link_pane_ParamLimits

0xebc9,	// (0x0001c170) listscroll_tmo_link_pane

0xec09,	// (0x0001c1b0) popup_tmo_note_window_g1_ParamLimits

0xec09,	// (0x0001c1b0) popup_tmo_note_window_g1

0xec16,	// (0x0001c1bd) tmo_note_info_pane_ParamLimits

0xec16,	// (0x0001c1bd) tmo_note_info_pane

0xec30,	// (0x0001c1d7) list_tmo_note_info_pane_g1_ParamLimits

0xec30,	// (0x0001c1d7) list_tmo_note_info_pane_g1

0xec47,	// (0x0001c1ee) list_tmo_note_info_pane_g2_ParamLimits

0xec47,	// (0x0001c1ee) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x0001d44e) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x0001d44e) list_tmo_note_info_pane_g

0xec63,	// (0x0001c20a) list_tmo_note_info_text_pane_ParamLimits

0xec63,	// (0x0001c20a) list_tmo_note_info_text_pane

0xece4,	// (0x0001c28b) list_tmo_link_pane

0xecf1,	// (0x0001c298) scroll_pane_cp20

0xecfe,	// (0x0001c2a5) list_single_tmo_link_pane_ParamLimits

0xecfe,	// (0x0001c2a5) list_single_tmo_link_pane

0xed0e,	// (0x0001c2b5) list_single_tmo_link_pane_t1

0xed1c,	// (0x0001c2c3) list_tmo_note_info_text_pane_t1_ParamLimits

0xed1c,	// (0x0001c2c3) list_tmo_note_info_text_pane_t1

0x8636,	// (0x00015bdd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8636,	// (0x00015bdd) aid_size_touch_scroll_bar_cp01

0x8538,	// (0x00015adf) aid_size_touch_slider_marker

0x57c8,	// (0x00012d6f) popup_settings_window_ParamLimits

0x57c8,	// (0x00012d6f) popup_settings_window

0x4b0d,	// (0x000120b4) popup_candi_list_indi_window

0x8c6a,	// (0x00016211) aid_touch_navi_pane_ParamLimits

0x6ec1,	// (0x00014468) rs_clock_indi_pane

0x6eca,	// (0x00014471) sctrl_sk_bottom_pane_ParamLimits

0x6edb,	// (0x00014482) sctrl_sk_top_pane_ParamLimits

0x6fd6,	// (0x0001457d) popup_fep_tooltip_window

0xe64e,	// (0x0001bbf5) aid_size_cell_widget_grid_ParamLimits

0xe6c3,	// (0x0001bc6a) cell_ai5_widget_pane_g1_ParamLimits

0xe6c3,	// (0x0001bc6a) cell_ai5_widget_pane_g1

0xe726,	// (0x0001bccd) cell_ai5_widget_pane_g6_ParamLimits

0xe732,	// (0x0001bcd9) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1b,	// (0x0001d3c2) cell_ai5_widget_pane_g_ParamLimits

0xfe1b,	// (0x0001d3c2) cell_ai5_widget_pane_g

0xe8a2,	// (0x0001be49) cell_ai5_widget_pane_t10_ParamLimits

0xe8a2,	// (0x0001be49) cell_ai5_widget_pane_t10

0xe8e5,	// (0x0001be8c) grid_ai5_widget_pane_ParamLimits

0xe97d,	// (0x0001bf24) cell_contacts_ai5_widget_pane_ParamLimits

0xe97d,	// (0x0001bf24) cell_contacts_ai5_widget_pane

0xeb57,	// (0x0001c0fe) popup_discreet_window_t3_ParamLimits

0xeb57,	// (0x0001c0fe) popup_discreet_window_t3

0x77c5,	// (0x00014d6c) popup_fshwr2_char_preview_window_ParamLimits

0x77c5,	// (0x00014d6c) popup_fshwr2_char_preview_window

0xec81,	// (0x0001c228) tmo_note_info_pane_t1

0xec96,	// (0x0001c23d) tmo_note_info_pane_t2

0xecab,	// (0x0001c252) tmo_note_info_pane_t3

0xecc0,	// (0x0001c267) tmo_note_info_pane_t4

0xecd2,	// (0x0001c279) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x0001d453) tmo_note_info_pane_t

0xece4,	// (0x0001c28b) list_tmo_link_pane_ParamLimits

0xecf1,	// (0x0001c298) scroll_pane_cp20_ParamLimits

0x568d,	// (0x00012c34) bg_popup_fep_char_preview_window_cp01

0xed35,	// (0x0001c2dc) popup_fshwr2_char_preview_window_t1

0xed43,	// (0x0001c2ea) popup_candi_list_indi_window_g1

0xed4c,	// (0x0001c2f3) bg_cell_contacts_ai5_widget_pane

0xed58,	// (0x0001c2ff) cell_contacts_ai5_widget_pane_g1

0xc51b,	// (0x00019ac2) cell_contacts_ai5_widget_pane_g2

0xed6d,	// (0x0001c314) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x0001d45e) cell_contacts_ai5_widget_pane_g

0xed79,	// (0x0001c320) cell_contacts_ai5_widget_pane_t1

0x3bb1,	// (0x00011158) highlight_cell_shortcut_ai5_widget_pane_cp01

0xedf0,	// (0x0001c397) settings_container_pane

0x4875,	// (0x00011e1c) listscroll_set_pane_copy1

0xb050,	// (0x000185f7) scroll_pane_cp121_copy1

0x9663,	// (0x00016c0a) set_content_pane_copy1

0xedfc,	// (0x0001c3a3) aid_height_set_list_copy1_ParamLimits

0xedfc,	// (0x0001c3a3) aid_height_set_list_copy1

0xa605,	// (0x00017bac) aid_size_parent_copy1_ParamLimits

0xa605,	// (0x00017bac) aid_size_parent_copy1

0xee08,	// (0x0001c3af) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee08,	// (0x0001c3af) button_value_adjust_pane_cp6_copy1

0x4a20,	// (0x00011fc7) list_highlight_pane_cp2_copy1_ParamLimits

0x4a20,	// (0x00011fc7) list_highlight_pane_cp2_copy1

0xee1c,	// (0x0001c3c3) list_set_pane_copy1_ParamLimits

0xee1c,	// (0x0001c3c3) list_set_pane_copy1

0xed8b,	// (0x0001c332) main_pane_set_t1_copy1_ParamLimits

0xed8b,	// (0x0001c332) main_pane_set_t1_copy1

0xedc5,	// (0x0001c36c) main_pane_set_t2_copy1_ParamLimits

0xedc5,	// (0x0001c36c) main_pane_set_t2_copy1

0xeec9,	// (0x0001c470) main_pane_set_t3_copy1

0xeed7,	// (0x0001c47e) main_pane_set_t4_copy1

0xede4,	// (0x0001c38b) set_content_pane_g1_copy1_ParamLimits

0xede4,	// (0x0001c38b) set_content_pane_g1_copy1

0xeee5,	// (0x0001c48c) setting_code_pane_copy1

0xeeed,	// (0x0001c494) setting_slider_graphic_pane_copy1

0xeeed,	// (0x0001c494) setting_slider_pane_copy1

0xeef5,	// (0x0001c49c) setting_text_pane_copy1

0xeef5,	// (0x0001c49c) setting_volume_pane_copy1

0xeee5,	// (0x0001c48c) settings_code_pane_cp2_copy1

0xeefd,	// (0x0001c4a4) settings_code_pane_cp_copy1_ParamLimits

0xeefd,	// (0x0001c4a4) settings_code_pane_cp_copy1

0x78d6,	// (0x00014e7d) volume_set_pane_copy1

0xef11,	// (0x0001c4b8) volume_set_pane_g10_copy1

0xef19,	// (0x0001c4c0) volume_set_pane_g1_copy1

0xef21,	// (0x0001c4c8) volume_set_pane_g2_copy1

0xef29,	// (0x0001c4d0) volume_set_pane_g3_copy1

0xef31,	// (0x0001c4d8) volume_set_pane_g4_copy1

0xef39,	// (0x0001c4e0) volume_set_pane_g5_copy1

0xef41,	// (0x0001c4e8) volume_set_pane_g6_copy1

0xef49,	// (0x0001c4f0) volume_set_pane_g7_copy1

0xef51,	// (0x0001c4f8) volume_set_pane_g8_copy1

0xef59,	// (0x0001c500) volume_set_pane_g9_copy1

0x378f,	// (0x00010d36) bg_set_opt_pane_cp_copy1_ParamLimits

0x378f,	// (0x00010d36) bg_set_opt_pane_cp_copy1

0x78de,	// (0x00014e85) setting_slider_pane_t1_copy1_ParamLimits

0x78de,	// (0x00014e85) setting_slider_pane_t1_copy1

0x78fd,	// (0x00014ea4) setting_slider_pane_t2_copy1_ParamLimits

0x78fd,	// (0x00014ea4) setting_slider_pane_t2_copy1

0x7917,	// (0x00014ebe) setting_slider_pane_t3_copy1_ParamLimits

0x7917,	// (0x00014ebe) setting_slider_pane_t3_copy1

0x792f,	// (0x00014ed6) slider_set_pane_copy1_ParamLimits

0x792f,	// (0x00014ed6) slider_set_pane_copy1

0x3c77,	// (0x0001121e) set_opt_bg_pane_g1_copy2

0x3c7f,	// (0x00011226) set_opt_bg_pane_g2_copy2

0xef61,	// (0x0001c508) set_opt_bg_pane_g3_copy2

0x3c8f,	// (0x00011236) set_opt_bg_pane_g4_copy2

0x3c97,	// (0x0001123e) set_opt_bg_pane_g5_copy2

0x3c9f,	// (0x00011246) set_opt_bg_pane_g6_copy2

0xef6b,	// (0x0001c512) set_opt_bg_pane_g7_copy2

0xef73,	// (0x0001c51a) set_opt_bg_pane_g8_copy2

0xef7d,	// (0x0001c524) set_opt_bg_pane_g9_copy2

0x7945,	// (0x00014eec) aid_size_touch_slider_mark_copy1_ParamLimits

0x7945,	// (0x00014eec) aid_size_touch_slider_mark_copy1

0xef87,	// (0x0001c52e) slider_set_pane_g1_copy1

0x7959,	// (0x00014f00) slider_set_pane_g2_copy1

0x68ae,	// (0x00013e55) slider_set_pane_g3_copy1_ParamLimits

0x68ae,	// (0x00013e55) slider_set_pane_g3_copy1

0x68c2,	// (0x00013e69) slider_set_pane_g4_copy1_ParamLimits

0x68c2,	// (0x00013e69) slider_set_pane_g4_copy1

0x68da,	// (0x00013e81) slider_set_pane_g5_copy1_ParamLimits

0x68da,	// (0x00013e81) slider_set_pane_g5_copy1

0x68ae,	// (0x00013e55) slider_set_pane_g6_copy1_ParamLimits

0x68ae,	// (0x00013e55) slider_set_pane_g6_copy1

0x7961,	// (0x00014f08) slider_set_pane_g7_copy1_ParamLimits

0x7961,	// (0x00014f08) slider_set_pane_g7_copy1

0x3713,	// (0x00010cba) bg_set_opt_pane_cp2_copy1

0xef90,	// (0x0001c537) setting_slider_graphic_pane_g1_copy1

0xef99,	// (0x0001c540) setting_slider_graphic_pane_t1_copy1

0xefa9,	// (0x0001c550) setting_slider_graphic_pane_t2_copy1

0xefb9,	// (0x0001c560) slider_set_pane_cp_copy1

0xefc9,	// (0x0001c570) input_focus_pane_cp1_copy1

0xefd2,	// (0x0001c579) list_set_text_pane_copy1

0xefda,	// (0x0001c581) setting_text_pane_g1_copy1

0xefe3,	// (0x0001c58a) set_text_pane_t1_copy1

0xefc9,	// (0x0001c570) input_focus_pane_cp2_copy1

0xefda,	// (0x0001c581) setting_code_pane_g1_copy1

0xeffe,	// (0x0001c5a5) setting_code_pane_t1_copy1

0xf00c,	// (0x0001c5b3) list_set_graphic_pane_copy1

0x3713,	// (0x00010cba) bg_set_opt_pane_cp4_copy1

0x45f2,	// (0x00011b99) list_set_graphic_pane_g1_copy1_ParamLimits

0x45f2,	// (0x00011b99) list_set_graphic_pane_g1_copy1

0xf020,	// (0x0001c5c7) list_set_graphic_pane_g2_copy1

0x460a,	// (0x00011bb1) list_set_graphic_pane_t1_copy1_ParamLimits

0x460a,	// (0x00011bb1) list_set_graphic_pane_t1_copy1

0xbcbd,	// (0x00019264) rs_clock_indi_pane_g1

0xf028,	// (0x0001c5cf) rs_clock_indi_pane_t1

0xf036,	// (0x0001c5dd) rs_indi_pane

0xf03e,	// (0x0001c5e5) rs_indi_pane_g1

0xf047,	// (0x0001c5ee) rs_indi_pane_g2

0xed43,	// (0x0001c2ea) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x0001d465) rs_indi_pane_g

0x4875,	// (0x00011e1c) bg_popup_preview_window_pane_cp03

0xf050,	// (0x0001c5f7) popup_fep_tooltip_window_t1

0xcb52,	// (0x0001a0f9) popup_note2_window_g2_ParamLimits

0xcb52,	// (0x0001a0f9) popup_note2_window_g2

0x0001,

0xfc52,	// (0x0001d1f9) popup_note2_window_g_ParamLimits

0xfc52,	// (0x0001d1f9) popup_note2_window_g

0xd12e,	// (0x0001a6d5) bg_popup_sub_pane_cp11_ParamLimits

0xd13b,	// (0x0001a6e2) cell_ai3_links_pane_g1_ParamLimits

0xd152,	// (0x0001a6f9) cell_ai3_links_pane_t1

0xefe3,	// (0x0001c58a) set_text_pane_t1_copy1_ParamLimits

0x47b7,	// (0x00011d5e) cell_graphic_popup_pane_cp2_ParamLimits

0x47b7,	// (0x00011d5e) cell_graphic_popup_pane_cp2

0xf05e,	// (0x0001c605) cell_graphic_popup_pane_g1_cp2

0x3a2d,	// (0x00010fd4) cell_graphic_popup_pane_g2_cp2

0xf066,	// (0x0001c60d) cell_graphic_popup_pane_g3_cp2

0xf06e,	// (0x0001c615) cell_graphic_popup_pane_t2_cp2

0x3a3e,	// (0x00010fe5) grid_highlight_pane_cp3_cp2

0x408c,	// (0x00011633) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3bb1,	// (0x00011158) main_tmo_pane_ParamLimits

0xd4e9,	// (0x0001aa90) popup_tmo_big_image_note_window

0xe6b2,	// (0x0001bc59) cell_ai5_widget_list_pane

0xe6ba,	// (0x0001bc61) cell_ai5_widget_lrg_icon_pane

0xec81,	// (0x0001c228) tmo_note_info_pane_t1_ParamLimits

0xec96,	// (0x0001c23d) tmo_note_info_pane_t2_ParamLimits

0xecab,	// (0x0001c252) tmo_note_info_pane_t3_ParamLimits

0xecc0,	// (0x0001c267) tmo_note_info_pane_t4_ParamLimits

0xecd2,	// (0x0001c279) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x0001d453) tmo_note_info_pane_t_ParamLimits

0xedf0,	// (0x0001c397) settings_container_pane_ParamLimits

0xefc1,	// (0x0001c568) indicator_popup_pane_cp5

0xefc1,	// (0x0001c568) indicator_popup_pane_cp6

0xf00c,	// (0x0001c5b3) list_set_graphic_pane_copy1_ParamLimits

0x36df,	// (0x00010c86) bg_popup_window_pane_cp23

0xf07c,	// (0x0001c623) popup_tmo_big_image_note_window_g1

0xf085,	// (0x0001c62c) popup_tmo_big_image_note_window_t1

0xf095,	// (0x0001c63c) popup_tmo_big_image_note_window_t2

0xf0a5,	// (0x0001c64c) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x0001d46c) popup_tmo_big_image_note_window_t

0xbcbd,	// (0x00019264) cell_ai5_widget_lrg_icon_pane_g1

0xf0b5,	// (0x0001c65c) cell_ai5_widget_lrg_icon_pane_t1

0xf0c3,	// (0x0001c66a) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c3,	// (0x0001c66a) cell_ai5_widget_list_row_pane

0xf0da,	// (0x0001c681) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0da,	// (0x0001c681) cell_ai5_widget_list_row_pane_g1

0xf0e7,	// (0x0001c68e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0e7,	// (0x0001c68e) cell_ai5_widget_list_row_pane_t1

0xf112,	// (0x0001c6b9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf112,	// (0x0001c6b9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x0001d473) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x0001d473) cell_ai5_widget_list_row_pane_t

0x568d,	// (0x00012c34) main_fep_vtchi_ss_pane

0xf162,	// (0x0001c709) popup_fep_char_pre_window

0xf16a,	// (0x0001c711) popup_fep_ituss_window

0xf196,	// (0x0001c73d) popup_fep_vkbss_window

0x4a20,	// (0x00011fc7) grid_vkbss_keypad_pane_ParamLimits

0x4a20,	// (0x00011fc7) grid_vkbss_keypad_pane

0xf1d6,	// (0x0001c77d) ituss_keypad_pane

0x7981,	// (0x00014f28) aid_vkbss_key_offset_ParamLimits

0x7981,	// (0x00014f28) aid_vkbss_key_offset

0x798d,	// (0x00014f34) cell_vkbss_key_pane_ParamLimits

0x798d,	// (0x00014f34) cell_vkbss_key_pane

0xf1e6,	// (0x0001c78d) bg_cell_vkbss_key_g1_ParamLimits

0xf1e6,	// (0x0001c78d) bg_cell_vkbss_key_g1

0xf1f2,	// (0x0001c799) cell_vkbss_key_3p_pane_ParamLimits

0xf1f2,	// (0x0001c799) cell_vkbss_key_3p_pane

0xf228,	// (0x0001c7cf) cell_vkbss_key_g1_ParamLimits

0xf228,	// (0x0001c7cf) cell_vkbss_key_g1

0xf25e,	// (0x0001c805) cell_vkbss_key_t1_ParamLimits

0xf25e,	// (0x0001c805) cell_vkbss_key_t1

0x79d8,	// (0x00014f7f) cell_ituss_key_pane_ParamLimits

0x79d8,	// (0x00014f7f) cell_ituss_key_pane

0xf2ba,	// (0x0001c861) bg_cell_ituss_key_g1_ParamLimits

0xf2ba,	// (0x0001c861) bg_cell_ituss_key_g1

0xf2c6,	// (0x0001c86d) cell_ituss_key_pane_g1_ParamLimits

0xf2c6,	// (0x0001c86d) cell_ituss_key_pane_g1

0x79e9,	// (0x00014f90) cell_ituss_key_pane_g2_ParamLimits

0x79e9,	// (0x00014f90) cell_ituss_key_pane_g2

0x0005,

0xfed3,	// (0x0001d47a) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0001d47a) cell_ituss_key_pane_g

0x7a6d,	// (0x00015014) cell_ituss_key_t1_ParamLimits

0x7a6d,	// (0x00015014) cell_ituss_key_t1

0x7aa7,	// (0x0001504e) cell_ituss_key_t2_ParamLimits

0x7aa7,	// (0x0001504e) cell_ituss_key_t2

0x7ad9,	// (0x00015080) cell_ituss_key_t3_ParamLimits

0x7ad9,	// (0x00015080) cell_ituss_key_t3

0x7b0a,	// (0x000150b1) cell_ituss_key_t4_ParamLimits

0x7b0a,	// (0x000150b1) cell_ituss_key_t4

0x0004,

0xfee0,	// (0x0001d487) cell_ituss_key_t_ParamLimits

0xfee0,	// (0x0001d487) cell_ituss_key_t

0xf2ec,	// (0x0001c893) cell_vkbss_key_3p_pane_g1

0xf2f4,	// (0x0001c89b) cell_vkbss_key_3p_pane_g2

0xf2fc,	// (0x0001c8a3) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeeb,	// (0x0001d492) cell_vkbss_key_3p_pane_g

0x4875,	// (0x00011e1c) bg_popup_fep_char_preview_window_cp02

0xf304,	// (0x0001c8ab) popup_fep_char_pre_window_t1

0xe63b,	// (0x0001bbe2) main_ai5_sk_pane

0xed4c,	// (0x0001c2f3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed58,	// (0x0001c2ff) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc51b,	// (0x00019ac2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed6d,	// (0x0001c314) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x0001d45e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed79,	// (0x0001c320) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3bb1,	// (0x00011158) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf312,	// (0x0001c8b9) main_ai5_sk_pane_g1

0x96ff,	// (0x00016ca6) popup_query_code_window_g1

0xf180,	// (0x0001c727) popup_fep_vkb_icf_pane

0xf1ad,	// (0x0001c754) popup_fep_vtchi_icf_pane

0xf31b,	// (0x0001c8c2) bg_icf_pane

0xf31b,	// (0x0001c8c2) list_vkb_icf_pane

0xf327,	// (0x0001c8ce) bg_icf_pane_cp01

0xf33a,	// (0x0001c8e1) vtchi_icf_list_pane

0xf39a,	// (0x0001c941) list_vkb_icf_pane_t1_ParamLimits

0xf39a,	// (0x0001c941) list_vkb_icf_pane_t1

0xf3bf,	// (0x0001c966) vtchi_icf_list_pane_t1_ParamLimits

0xf3bf,	// (0x0001c966) vtchi_icf_list_pane_t1

0xf16a,	// (0x0001c711) popup_fep_ituss_window_ParamLimits

0xf1ad,	// (0x0001c754) popup_fep_vtchi_icf_pane_ParamLimits

0xf1d6,	// (0x0001c77d) ituss_keypad_pane_ParamLimits

0x7977,	// (0x00014f1e) ituss_sks_pane

0xf31b,	// (0x0001c8c2) bg_icf_pane_ParamLimits

0xf13a,	// (0x0001c6e1) icf_edit_indi_pane_ParamLimits

0xf13a,	// (0x0001c6e1) icf_edit_indi_pane

0xf31b,	// (0x0001c8c2) list_vkb_icf_pane_ParamLimits

0xf327,	// (0x0001c8ce) bg_icf_pane_cp01_ParamLimits

0xf155,	// (0x0001c6fc) icf_edit_indi_pane_cp01_ParamLimits

0xf155,	// (0x0001c6fc) icf_edit_indi_pane_cp01

0xf33a,	// (0x0001c8e1) vtchi_query_pane

0xe4b7,	// (0x0001ba5e) icf_edit_indi_pane_g1_ParamLimits

0xe4b7,	// (0x0001ba5e) icf_edit_indi_pane_g1

0xf43a,	// (0x0001c9e1) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0001c9e1) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x0001d4bd) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x0001d4bd) icf_edit_indi_pane_g

0xf44e,	// (0x0001c9f5) icf_edit_indi_pane_t1

0xf3e3,	// (0x0001c98a) bg_input_focus_pane_cp042

0x3aa1,	// (0x00011048) vtchi_button_pane

0xf3ec,	// (0x0001c993) vtchi_query_pane_t1

0xf3fa,	// (0x0001c9a1) vtchi_query_pane_t2

0xf408,	// (0x0001c9af) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x0001d4ac) vtchi_query_pane_t

0x568d,	// (0x00012c34) bg_button_pane_cp13

0xf416,	// (0x0001c9bd) vtchi_button_pane_g1

0x7b4d,	// (0x000150f4) ituss_sks_pane_g1

0x7b58,	// (0x000150ff) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x0001d4b3) ituss_sks_pane_g

0xf41e,	// (0x0001c9c5) ituss_sks_pane_t1

0xf42c,	// (0x0001c9d3) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x0001d4b8) ituss_sks_pane_t

0xb6e4,	// (0x00018c8b) indicator_nsta_pane_cp_g1

0xb6ed,	// (0x00018c94) indicator_nsta_pane_cp_g2

0xb6f5,	// (0x00018c9c) indicator_nsta_pane_cp_g3

0xb6fd,	// (0x00018ca4) indicator_nsta_pane_cp_g4

0xb6ed,	// (0x00018c94) indicator_nsta_pane_cp_g5

0xb6f5,	// (0x00018c9c) indicator_nsta_pane_cp_g6

0x0005,

0xfa90,	// (0x0001d037) indicator_nsta_pane_cp_g

0xe20a,	// (0x0001b7b1) cell_graphic2_pane_t2_ParamLimits

0xe20a,	// (0x0001b7b1) cell_graphic2_pane_t2

0x0001,

0xfda2,	// (0x0001d349) cell_graphic2_pane_t_ParamLimits

0xfda2,	// (0x0001d349) cell_graphic2_pane_t

0xe236,	// (0x0001b7dd) cell_graphic2_control_pane_t1

0x88c0,	// (0x00015e67) signal_pane_g3_ParamLimits

0x88c0,	// (0x00015e67) signal_pane_g3

0x88d2,	// (0x00015e79) signal_pane_g4_ParamLimits

0x88d2,	// (0x00015e79) signal_pane_g4

0xf124,	// (0x0001c6cb) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf124,	// (0x0001c6cb) cell_ai5_widget_list_row_pane_t3

0xf2da,	// (0x0001c881) cell_ituss_key_pane_t1_ParamLimits

0xf2da,	// (0x0001c881) cell_ituss_key_pane_t1

0x92f1,	// (0x00016898) form_field_data_wide_pane_vc_t2_ParamLimits

0x92f1,	// (0x00016898) form_field_data_wide_pane_vc_t2

0x9305,	// (0x000168ac) form_field_data_wide_pane_vc_t3_ParamLimits

0x9305,	// (0x000168ac) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d5,	// (0x0001cd7c) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d5,	// (0x0001cd7c) form_field_data_wide_pane_vc_t

0xb38e,	// (0x00018935) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb38e,	// (0x00018935) form_field_slider_wide_pane_vc_t3

0xb46c,	// (0x00018a13) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb46c,	// (0x00018a13) form_field_popup_wide_pane_vc_t2

0xb483,	// (0x00018a2a) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb483,	// (0x00018a2a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7f,	// (0x0001d026) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0001d026) form_field_popup_wide_pane_vc_t

0x7737,	// (0x00014cde) aid_fshwr2_btn_pane_ParamLimits

0x774b,	// (0x00014cf2) aid_fshwr2_syb_pane_ParamLimits

0x775f,	// (0x00014d06) aid_fshwr2_txt_pane_ParamLimits

0x6f66,	// (0x0001450d) fshwr2_bg_pane_ParamLimits

0x776f,	// (0x00014d16) fshwr2_func_candi_pane_ParamLimits

0x7793,	// (0x00014d3a) fshwr2_hwr_syb_pane_ParamLimits

0x77ad,	// (0x00014d54) fshwr2_icf_pane_ParamLimits

0xb2ff,	// (0x000188a6) list_double_graphic_pane_vc_g4_ParamLimits

0xb2ff,	// (0x000188a6) list_double_graphic_pane_vc_g4

0x7a09,	// (0x00014fb0) cell_ituss_key_pane_g3_ParamLimits

0x7a09,	// (0x00014fb0) cell_ituss_key_pane_g3

0x7b3b,	// (0x000150e2) cell_ituss_key_t5_ParamLimits

0x7b3b,	// (0x000150e2) cell_ituss_key_t5

0xf196,	// (0x0001c73d) popup_fep_vkbss_window_ParamLimits

0xe645,	// (0x0001bbec) aid_cell_ai5_quarter

0xf44e,	// (0x0001c9f5) icf_edit_indi_pane_t1_ParamLimits

0x7d5f,	// (0x00015306) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7d5f,	// (0x00015306) aid_tch_indicator_popup_pane_cp2

0x7d72,	// (0x00015319) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7d72,	// (0x00015319) aid_tch_query_popup_data_pane_cp2

0x96a7,	// (0x00016c4e) aid_tch_query_popup_pane_ParamLimits

0x96a7,	// (0x00016c4e) aid_tch_query_popup_pane

0x96a7,	// (0x00016c4e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x96a7,	// (0x00016c4e) aid_tch_query_popup_data_pane_cp1

0x4a20,	// (0x00011fc7) cell_fshwr2_syb_bg_pane_ParamLimits

0x78a3,	// (0x00014e4a) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x78b7,	// (0x00014e5e) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf180,	// (0x0001c727) popup_fep_vkb_icf_pane_ParamLimits

0x7577,	// (0x00014b1e) bg_popup_fep_char_preview_window_g10

0xe77a,	// (0x0001bd21) cell_ai5_widget_pane_g11_ParamLimits

0xe77a,	// (0x0001bd21) cell_ai5_widget_pane_g11

0xe786,	// (0x0001bd2d) cell_ai5_widget_pane_g12_ParamLimits

0xe786,	// (0x0001bd2d) cell_ai5_widget_pane_g12

0xe792,	// (0x0001bd39) cell_ai5_widget_pane_g13_ParamLimits

0xe792,	// (0x0001bd39) cell_ai5_widget_pane_g13

0xe8c1,	// (0x0001be68) cell_ai5_widget_pane_t11_ParamLimits

0xe8c1,	// (0x0001be68) cell_ai5_widget_pane_t11

0xe8d3,	// (0x0001be7a) cell_ai5_widget_pane_t12_ParamLimits

0xe8d3,	// (0x0001be7a) cell_ai5_widget_pane_t12

0x7a15,	// (0x00014fbc) cell_ituss_key_pane_g4_ParamLimits

0x7a15,	// (0x00014fbc) cell_ituss_key_pane_g4

0x7a31,	// (0x00014fd8) cell_ituss_key_pane_g5_ParamLimits

0x7a31,	// (0x00014fd8) cell_ituss_key_pane_g5

0x7a4d,	// (0x00014ff4) cell_ituss_key_pane_g6_ParamLimits

0x7a4d,	// (0x00014ff4) cell_ituss_key_pane_g6

0x9143,	// (0x000166ea) bg_icf_pane_g1

0xf342,	// (0x0001c8e9) bg_icf_pane_g2

0xf34e,	// (0x0001c8f5) bg_icf_pane_g3

0xf358,	// (0x0001c8ff) bg_icf_pane_g4

0xf364,	// (0x0001c90b) bg_icf_pane_g5

0xf36e,	// (0x0001c915) bg_icf_pane_g6

0xf37a,	// (0x0001c921) bg_icf_pane_g7

0xf384,	// (0x0001c92b) bg_icf_pane_g8

0xf390,	// (0x0001c937) bg_icf_pane_g9

0x0008,

0xfef2,	// (0x0001d499) bg_icf_pane_g

0xf1c3,	// (0x0001c76a) popup_hyb_candi_window_ParamLimits

0xf1c3,	// (0x0001c76a) popup_hyb_candi_window

0x9263,	// (0x0001680a) bg_popup_sub_pane_cp01_ParamLimits

0x9263,	// (0x0001680a) bg_popup_sub_pane_cp01

0xf467,	// (0x0001ca0e) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0001ca0e) entry_hyb_candi_pane

0xf476,	// (0x0001ca1d) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0001ca1d) grid_hyb_candi_pane

0xf48b,	// (0x0001ca32) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0001ca32) grid_hyb_phrase_pane

0xf49a,	// (0x0001ca41) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0001ca41) cell_hyb_candi_pane

0xf4bd,	// (0x0001ca64) cell_hyb_candi_scroll_pane

0x422e,	// (0x000117d5) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0001ca6d) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0001ca7b) cell_hyb_phrase_pane

0x422e,	// (0x000117d5) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0001ca84) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0001ca92) entry_hyb_candi_pane_t1

0x4875,	// (0x00011e1c) input_focus_pane_cp06

0xf4f9,	// (0x0001caa0) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0001caa8) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0001cab0) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0001cab8) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0001cac0) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0001cac8) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal

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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000d685 };

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
0x7ba0,	// (0x00015225) Screen

0x7bac,	// (0x00015231) application_window_ParamLimits

0x7bac,	// (0x00015231) application_window

0x366c,	// (0x00010cf1) screen_g1

0x5509,	// (0x00012b8e) area_bottom_pane_ParamLimits

0x5509,	// (0x00012b8e) area_bottom_pane

0x55cf,	// (0x00012c54) area_top_pane_ParamLimits

0x55cf,	// (0x00012c54) area_top_pane

0x566d,	// (0x00012cf2) main_pane_ParamLimits

0x566d,	// (0x00012cf2) main_pane

0x3696,	// (0x00010d1b) misc_graphics

0x8cb4,	// (0x00016339) battery_pane_ParamLimits

0x8cb4,	// (0x00016339) battery_pane

0x9aa5,	// (0x0001712a) bg_status_flat_pane_g8

0x9aad,	// (0x00017132) bg_status_flat_pane_g9

0x8d7c,	// (0x00016401) context_pane_ParamLimits

0x8d7c,	// (0x00016401) context_pane

0x8e92,	// (0x00016517) navi_pane_ParamLimits

0x8e92,	// (0x00016517) navi_pane

0x8f16,	// (0x0001659b) signal_pane_ParamLimits

0x8f16,	// (0x0001659b) signal_pane

0x0008,

0xf83e,	// (0x0001cec3) bg_status_flat_pane_g

0x8f83,	// (0x00016608) status_pane_g1_ParamLimits

0x8f83,	// (0x00016608) status_pane_g1

0x8f97,	// (0x0001661c) status_pane_g2_ParamLimits

0x8f97,	// (0x0001661c) status_pane_g2

0x8fa3,	// (0x00016628) status_pane_g3_ParamLimits

0x8fa3,	// (0x00016628) status_pane_g3

0x0004,

0xf765,	// (0x0001cdea) status_pane_g_ParamLimits

0xf765,	// (0x0001cdea) status_pane_g

0x8fd7,	// (0x0001665c) title_pane_ParamLimits

0x8fd7,	// (0x0001665c) title_pane

0x9014,	// (0x00016699) uni_indicator_pane_ParamLimits

0x9014,	// (0x00016699) uni_indicator_pane

0x4a5c,	// (0x000120e1) bg_list_pane_ParamLimits

0x4a5c,	// (0x000120e1) bg_list_pane

0x8c30,	// (0x000162b5) find_pane

0x4a30,	// (0x000120b5) listscroll_app_pane_ParamLimits

0x4a30,	// (0x000120b5) listscroll_app_pane

0x4a7c,	// (0x00012101) listscroll_form_pane

0x5f37,	// (0x000135bc) listscroll_gen_pane_ParamLimits

0x5f37,	// (0x000135bc) listscroll_gen_pane

0x5f4b,	// (0x000135d0) listscroll_set_pane

0x86f4,	// (0x00015d79) main_idle_act_pane

0x4814,	// (0x00011e99) main_idle_trad_pane

0x4814,	// (0x00011e99) main_list_empty_pane

0x4a30,	// (0x000120b5) main_midp_pane

0x4a9e,	// (0x00012123) main_pane_g1_ParamLimits

0x4a9e,	// (0x00012123) main_pane_g1

0x5f61,	// (0x000135e6) popup_ai_message_window_ParamLimits

0x5f61,	// (0x000135e6) popup_ai_message_window

0x6005,	// (0x0001368a) popup_fep_china_uni_window_ParamLimits

0x6005,	// (0x0001368a) popup_fep_china_uni_window

0x605f,	// (0x000136e4) popup_fep_japan_candidate_window_ParamLimits

0x605f,	// (0x000136e4) popup_fep_japan_candidate_window

0x607d,	// (0x00013702) popup_fep_japan_predictive_window_ParamLimits

0x607d,	// (0x00013702) popup_fep_japan_predictive_window

0x60ad,	// (0x00013732) popup_find_window

0x60ba,	// (0x0001373f) popup_grid_graphic_window_ParamLimits

0x60ba,	// (0x0001373f) popup_grid_graphic_window

0x60e4,	// (0x00013769) popup_large_graphic_colour_window

0x610a,	// (0x0001378f) popup_menu_window_ParamLimits

0x610a,	// (0x0001378f) popup_menu_window

0x62c6,	// (0x0001394b) popup_note_image_window

0x62b2,	// (0x00013937) popup_note_wait_window_ParamLimits

0x62b2,	// (0x00013937) popup_note_wait_window

0x62b2,	// (0x00013937) popup_note_window_ParamLimits

0x62b2,	// (0x00013937) popup_note_window

0x631c,	// (0x000139a1) popup_query_code_window_ParamLimits

0x631c,	// (0x000139a1) popup_query_code_window

0x6330,	// (0x000139b5) popup_query_data_code_window_ParamLimits

0x6330,	// (0x000139b5) popup_query_data_code_window

0x634d,	// (0x000139d2) popup_query_data_window_ParamLimits

0x634d,	// (0x000139d2) popup_query_data_window

0x6369,	// (0x000139ee) popup_query_sat_info_window_ParamLimits

0x6369,	// (0x000139ee) popup_query_sat_info_window

0x63a2,	// (0x00013a27) popup_snote_single_graphic_window_ParamLimits

0x63a2,	// (0x00013a27) popup_snote_single_graphic_window

0x63a2,	// (0x00013a27) popup_snote_single_text_window_ParamLimits

0x63a2,	// (0x00013a27) popup_snote_single_text_window

0x63b7,	// (0x00013a3c) popup_sub_window_general

0x64e7,	// (0x00013b6c) popup_window_general_ParamLimits

0x64e7,	// (0x00013b6c) popup_window_general

0x8c38,	// (0x000162bd) power_save_pane

0x5dbd,	// (0x00013442) control_pane_g1_ParamLimits

0x5dbd,	// (0x00013442) control_pane_g1

0x5de4,	// (0x00013469) control_pane_g2_ParamLimits

0x5de4,	// (0x00013469) control_pane_g2

0x4a13,	// (0x00012098) control_pane_g3_ParamLimits

0x4a13,	// (0x00012098) control_pane_g3

0x0007,

0xf74d,	// (0x0001cdd2) control_pane_g_ParamLimits

0xf74d,	// (0x0001cdd2) control_pane_g

0x5e2e,	// (0x000134b3) control_pane_t1_ParamLimits

0x5e2e,	// (0x000134b3) control_pane_t1

0x5e84,	// (0x00013509) control_pane_t2_ParamLimits

0x5e84,	// (0x00013509) control_pane_t2

0x0002,

0xf75e,	// (0x0001cde3) control_pane_t_ParamLimits

0xf75e,	// (0x0001cde3) control_pane_t

0x8b82,	// (0x00016207) navi_navi_volume_pane_cp1

0x8b8a,	// (0x0001620f) status_small_icon_pane

0x49bf,	// (0x00012044) status_small_pane_g1_ParamLimits

0x49bf,	// (0x00012044) status_small_pane_g1

0x8b92,	// (0x00016217) status_small_pane_g2_ParamLimits

0x8b92,	// (0x00016217) status_small_pane_g2

0x49f3,	// (0x00012078) status_small_pane_g3_ParamLimits

0x49f3,	// (0x00012078) status_small_pane_g3

0x8b9e,	// (0x00016223) status_small_pane_g4_ParamLimits

0x8b9e,	// (0x00016223) status_small_pane_g4

0x8baa,	// (0x0001622f) status_small_pane_g5_ParamLimits

0x8baa,	// (0x0001622f) status_small_pane_g5

0x8bb8,	// (0x0001623d) status_small_pane_g6_ParamLimits

0x8bb8,	// (0x0001623d) status_small_pane_g6

0x0007,

0xf73c,	// (0x0001cdc1) status_small_pane_g_ParamLimits

0xf73c,	// (0x0001cdc1) status_small_pane_g

0x8bd3,	// (0x00016258) status_small_pane_t1

0x8bf5,	// (0x0001627a) status_small_wait_pane_ParamLimits

0x8bf5,	// (0x0001627a) status_small_wait_pane

0x889d,	// (0x00015f22) aid_levels_signal_ParamLimits

0x889d,	// (0x00015f22) aid_levels_signal

0x88af,	// (0x00015f34) signal_pane_g1_ParamLimits

0x88af,	// (0x00015f34) signal_pane_g1

0x88c4,	// (0x00015f49) signal_pane_g2_ParamLimits

0x88c4,	// (0x00015f49) signal_pane_g2

0x0003,

0xf6cd,	// (0x0001cd52) signal_pane_g_ParamLimits

0xf6cd,	// (0x0001cd52) signal_pane_g

0x429b,	// (0x00011920) context_pane_g1

0x7bbc,	// (0x00015241) title_pane_g1

0x7be6,	// (0x0001526b) title_pane_t1

0x36cc,	// (0x00010d51) title_pane_t2

0x36f2,	// (0x00010d77) title_pane_t3

0x0002,

0xf530,	// (0x0001cbb5) title_pane_t

0x902c,	// (0x000166b1) aid_levels_battery_ParamLimits

0x902c,	// (0x000166b1) aid_levels_battery

0x9040,	// (0x000166c5) battery_pane_g1_ParamLimits

0x9040,	// (0x000166c5) battery_pane_g1

0x9056,	// (0x000166db) battery_pane_g2_ParamLimits

0x9056,	// (0x000166db) battery_pane_g2

0x0001,

0xf770,	// (0x0001cdf5) battery_pane_g_ParamLimits

0xf770,	// (0x0001cdf5) battery_pane_g

0xa3c9,	// (0x00017a4e) uni_indicator_pane_g1

0xa3dc,	// (0x00017a61) uni_indicator_pane_g2

0xa3ee,	// (0x00017a73) uni_indicator_pane_g3

0x0005,

0xf8e6,	// (0x0001cf6b) uni_indicator_pane_g

0x46b3,	// (0x00011d38) navi_icon_pane_ParamLimits

0x46b3,	// (0x00011d38) navi_icon_pane

0x4608,	// (0x00011c8d) navi_midp_pane

0x46cf,	// (0x00011d54) navi_navi_pane

0x46d9,	// (0x00011d5e) navi_text_pane_ParamLimits

0x46d9,	// (0x00011d5e) navi_text_pane

0x366c,	// (0x00010cf1) status_small_wait_pane_g1

0x395d,	// (0x00010fe2) status_small_wait_pane_g2

0x0001,

0xf8e1,	// (0x0001cf66) status_small_wait_pane_g

0xa0f0,	// (0x00017775) navi_navi_icon_text_pane

0xa0f8,	// (0x0001777d) navi_navi_pane_g1_ParamLimits

0xa0f8,	// (0x0001777d) navi_navi_pane_g1

0xa10a,	// (0x0001778f) navi_navi_pane_g2_ParamLimits

0xa10a,	// (0x0001778f) navi_navi_pane_g2

0x0001,

0xf8af,	// (0x0001cf34) navi_navi_pane_g_ParamLimits

0xf8af,	// (0x0001cf34) navi_navi_pane_g

0xa11c,	// (0x000177a1) navi_navi_tabs_pane

0xa125,	// (0x000177aa) navi_navi_text_pane

0xa0f0,	// (0x00017775) navi_navi_volume_pane

0xa0cc,	// (0x00017751) navi_text_pane_t1

0xa0c0,	// (0x00017745) navi_icon_pane_g1

0xa013,	// (0x00017698) navi_navi_text_pane_t1

0x6803,	// (0x00013e88) navi_navi_volume_pane_g1

0x680b,	// (0x00013e90) volume_small_pane

0x9f79,	// (0x000175fe) navi_navi_icon_text_pane_g1

0x9f81,	// (0x00017606) navi_navi_icon_text_pane_t1

0x46cf,	// (0x00011d54) navi_tabs_2_long_pane

0x46cf,	// (0x00011d54) navi_tabs_2_pane

0x46cf,	// (0x00011d54) navi_tabs_3_long_pane

0x46cf,	// (0x00011d54) navi_tabs_3_pane

0x46cf,	// (0x00011d54) navi_tabs_4_pane

0x67e3,	// (0x00013e68) tabs_2_active_pane_ParamLimits

0x67e3,	// (0x00013e68) tabs_2_active_pane

0x67f3,	// (0x00013e78) tabs_2_passive_pane_ParamLimits

0x67f3,	// (0x00013e78) tabs_2_passive_pane

0x67b1,	// (0x00013e36) tabs_3_active_pane_ParamLimits

0x67b1,	// (0x00013e36) tabs_3_active_pane

0x67c1,	// (0x00013e46) tabs_3_passive_pane_ParamLimits

0x67c1,	// (0x00013e46) tabs_3_passive_pane

0x67d2,	// (0x00013e57) tabs_3_passive_pane_cp_ParamLimits

0x67d2,	// (0x00013e57) tabs_3_passive_pane_cp

0x676d,	// (0x00013df2) tabs_4_active_pane_ParamLimits

0x676d,	// (0x00013df2) tabs_4_active_pane

0x677e,	// (0x00013e03) tabs_4_passive_pane_ParamLimits

0x677e,	// (0x00013e03) tabs_4_passive_pane

0x678f,	// (0x00013e14) tabs_4_passive_pane_cp_ParamLimits

0x678f,	// (0x00013e14) tabs_4_passive_pane_cp

0x67a0,	// (0x00013e25) tabs_4_passive_pane_cp2_ParamLimits

0x67a0,	// (0x00013e25) tabs_4_passive_pane_cp2

0x6749,	// (0x00013dce) tabs_2_long_active_pane_ParamLimits

0x6749,	// (0x00013dce) tabs_2_long_active_pane

0x675b,	// (0x00013de0) tabs_2_long_passive_pane_ParamLimits

0x675b,	// (0x00013de0) tabs_2_long_passive_pane

0x6704,	// (0x00013d89) tabs_3_long_active_pane_ParamLimits

0x6704,	// (0x00013d89) tabs_3_long_active_pane

0x671d,	// (0x00013da2) tabs_3_long_passive_pane_ParamLimits

0x671d,	// (0x00013da2) tabs_3_long_passive_pane

0x6730,	// (0x00013db5) tabs_3_long_passive_pane_cp_ParamLimits

0x6730,	// (0x00013db5) tabs_3_long_passive_pane_cp

0x66aa,	// (0x00013d2f) volume_small_pane_g1

0x66b3,	// (0x00013d38) volume_small_pane_g2

0x66bc,	// (0x00013d41) volume_small_pane_g3

0x66c5,	// (0x00013d4a) volume_small_pane_g4

0x66ce,	// (0x00013d53) volume_small_pane_g5

0x66d7,	// (0x00013d5c) volume_small_pane_g6

0x66e0,	// (0x00013d65) volume_small_pane_g7

0x66e9,	// (0x00013d6e) volume_small_pane_g8

0x66f2,	// (0x00013d77) volume_small_pane_g9

0x66fb,	// (0x00013d80) volume_small_pane_g10

0x0009,

0xf87b,	// (0x0001cf00) volume_small_pane_g

0x3712,	// (0x00010d97) bg_active_tab_pane_cp2_ParamLimits

0x3712,	// (0x00010d97) bg_active_tab_pane_cp2

0x7c4e,	// (0x000152d3) tabs_3_active_pane_g1

0x7c56,	// (0x000152db) tabs_3_active_pane_t1

0x3712,	// (0x00010d97) bg_passive_tab_pane_cp2_ParamLimits

0x3712,	// (0x00010d97) bg_passive_tab_pane_cp2

0x7c4e,	// (0x000152d3) tabs_3_passive_pane_g1

0x7c56,	// (0x000152db) tabs_3_passive_pane_t1

0x3712,	// (0x00010d97) bg_active_tab_pane_cp3_ParamLimits

0x3712,	// (0x00010d97) bg_active_tab_pane_cp3

0x7c68,	// (0x000152ed) tabs_4_active_pane_g1

0x7c70,	// (0x000152f5) tabs_4_active_pane_t1

0x3712,	// (0x00010d97) bg_passive_tab_pane_cp3_ParamLimits

0x3712,	// (0x00010d97) bg_passive_tab_pane_cp3

0x7c68,	// (0x000152ed) tabs_4_1_passive_pane_g1

0x7c70,	// (0x000152f5) tabs_4_1_passive_pane_t1

0x4a30,	// (0x000120b5) list_highlight_pane_cp2

0xa633,	// (0x00017cb8) list_set_pane_ParamLimits

0xa633,	// (0x00017cb8) list_set_pane

0xa6d5,	// (0x00017d5a) main_pane_set_t1_ParamLimits

0xa6d5,	// (0x00017d5a) main_pane_set_t1

0xa6f5,	// (0x00017d7a) main_pane_set_t2_ParamLimits

0xa6f5,	// (0x00017d7a) main_pane_set_t2

0xa709,	// (0x00017d8e) main_pane_set_t3_ParamLimits

0xa709,	// (0x00017d8e) main_pane_set_t3

0xa71b,	// (0x00017da0) main_pane_set_t4_ParamLimits

0xa71b,	// (0x00017da0) main_pane_set_t4

0x0003,

0xf94b,	// (0x0001cfd0) main_pane_set_t_ParamLimits

0xf94b,	// (0x0001cfd0) main_pane_set_t

0xa72d,	// (0x00017db2) setting_code_pane

0xa739,	// (0x00017dbe) setting_slider_graphic_pane

0xa739,	// (0x00017dbe) setting_slider_pane

0xa739,	// (0x00017dbe) setting_text_pane

0xa739,	// (0x00017dbe) setting_volume_pane

0x58ae,	// (0x00012f33) volume_set_pane

0x3712,	// (0x00010d97) bg_set_opt_pane_cp

0x58b6,	// (0x00012f3b) setting_slider_pane_t1

0x58cf,	// (0x00012f54) setting_slider_pane_t2

0x58e9,	// (0x00012f6e) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0001cbbc) setting_slider_pane_t

0x5901,	// (0x00012f86) slider_set_pane

0x3696,	// (0x00010d1b) bg_set_opt_pane_cp2

0x3720,	// (0x00010da5) setting_slider_graphic_pane_g1

0x5917,	// (0x00012f9c) setting_slider_graphic_pane_t1

0x5927,	// (0x00012fac) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x0001cbc3) setting_slider_graphic_pane_t

0x5937,	// (0x00012fbc) slider_set_pane_cp

0x3696,	// (0x00010d1b) input_focus_pane_cp1

0xa5f2,	// (0x00017c77) list_set_text_pane

0x366c,	// (0x00010cf1) setting_text_pane_g1

0x3696,	// (0x00010d1b) input_focus_pane_cp2

0x366c,	// (0x00010cf1) setting_code_pane_g1

0x3729,	// (0x00010dae) setting_code_pane_t1

0x3737,	// (0x00010dbc) set_text_pane_t1_ParamLimits

0x3737,	// (0x00010dbc) set_text_pane_t1

0x3bfa,	// (0x0001127f) set_opt_bg_pane_g1

0x3c02,	// (0x00011287) set_opt_bg_pane_g2

0xa5cc,	// (0x00017c51) set_opt_bg_pane_g3

0x3c12,	// (0x00011297) set_opt_bg_pane_g4

0x3c1a,	// (0x0001129f) set_opt_bg_pane_g5

0x3c22,	// (0x000112a7) set_opt_bg_pane_g6

0xa5d6,	// (0x00017c5b) set_opt_bg_pane_g7

0xa5de,	// (0x00017c63) set_opt_bg_pane_g8

0xa5e8,	// (0x00017c6d) set_opt_bg_pane_g9

0x0008,

0xf938,	// (0x0001cfbd) set_opt_bg_pane_g

0xa5bf,	// (0x00017c44) slider_set_pane_g1

0x6878,	// (0x00013efd) slider_set_pane_g2

0x0006,

0xf929,	// (0x0001cfae) slider_set_pane_g

0x6814,	// (0x00013e99) volume_set_pane_g1

0x681c,	// (0x00013ea1) volume_set_pane_g2

0x6824,	// (0x00013ea9) volume_set_pane_g3

0x682c,	// (0x00013eb1) volume_set_pane_g4

0x6834,	// (0x00013eb9) volume_set_pane_g5

0x683c,	// (0x00013ec1) volume_set_pane_g6

0x6844,	// (0x00013ec9) volume_set_pane_g7

0x684c,	// (0x00013ed1) volume_set_pane_g8

0x6854,	// (0x00013ed9) volume_set_pane_g9

0x685c,	// (0x00013ee1) volume_set_pane_g10

0x0009,

0xf901,	// (0x0001cf86) volume_set_pane_g

0x7c82,	// (0x00015307) indicator_pane_ParamLimits

0x7c82,	// (0x00015307) indicator_pane

0x7c8e,	// (0x00015313) main_idle_pane_g2_ParamLimits

0x7c8e,	// (0x00015313) main_idle_pane_g2

0x7cb6,	// (0x0001533b) main_pane_idle_g1_ParamLimits

0x7cb6,	// (0x0001533b) main_pane_idle_g1

0x3751,	// (0x00010dd6) popup_clock_digital_analogue_window_ParamLimits

0x3751,	// (0x00010dd6) popup_clock_digital_analogue_window

0x7cc3,	// (0x00015348) soft_indicator_pane_ParamLimits

0x7cc3,	// (0x00015348) soft_indicator_pane

0x7ccf,	// (0x00015354) wallpaper_pane_ParamLimits

0x7ccf,	// (0x00015354) wallpaper_pane

0x366c,	// (0x00010cf1) wallpaper_pane_g1

0x7cdb,	// (0x00015360) indicator_pane_g1_ParamLimits

0x7cdb,	// (0x00015360) indicator_pane_g1

0xaad4,	// (0x00018159) navi_navi_icon_text_pane_srt_g1

0x377f,	// (0x00010e04) soft_indicator_pane_t1

0x3799,	// (0x00010e1e) aid_ps_area_pane

0x7ce7,	// (0x0001536c) aid_ps_clock_pane

0x37aa,	// (0x00010e2f) aid_ps_indicator_pane

0x37b6,	// (0x00010e3b) indicator_ps_pane_ParamLimits

0x37b6,	// (0x00010e3b) indicator_ps_pane

0x37c5,	// (0x00010e4a) power_save_pane_g1_ParamLimits

0x37c5,	// (0x00010e4a) power_save_pane_g1

0x37d1,	// (0x00010e56) power_save_pane_g2_ParamLimits

0x37d1,	// (0x00010e56) power_save_pane_g2

0x54bd,	// (0x00012b42) aid_navinavi_width_pane

0x3799,	// (0x00010e1e) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0001cbc8) power_save_pane_g_ParamLimits

0xf543,	// (0x0001cbc8) power_save_pane_g

0x37df,	// (0x00010e64) power_save_pane_t1_ParamLimits

0x37df,	// (0x00010e64) power_save_pane_t1

0x7ce7,	// (0x0001536c) aid_ps_clock_pane_ParamLimits

0x37aa,	// (0x00010e2f) aid_ps_indicator_pane_ParamLimits

0x37f1,	// (0x00010e76) power_save_pane_t4_ParamLimits

0x37f1,	// (0x00010e76) power_save_pane_t4

0x0001,

0xf548,	// (0x0001cbcd) power_save_pane_t_ParamLimits

0xf548,	// (0x0001cbcd) power_save_pane_t

0x381b,	// (0x00010ea0) power_save_t3_ParamLimits

0x381b,	// (0x00010ea0) power_save_t3

0x3806,	// (0x00010e8b) power_save_t2_ParamLimits

0x3806,	// (0x00010e8b) power_save_t2

0x3830,	// (0x00010eb5) indicator_ps_pane_g1

0x7cf5,	// (0x0001537a) ai_gene_pane_ParamLimits

0x7cf5,	// (0x0001537a) ai_gene_pane

0x7d01,	// (0x00015386) ai_links_pane_ParamLimits

0x7d01,	// (0x00015386) ai_links_pane

0x7d0d,	// (0x00015392) indicator_pane_cp1_ParamLimits

0x7d0d,	// (0x00015392) indicator_pane_cp1

0x7d19,	// (0x0001539e) main_pane_idle_g1_cp_ParamLimits

0x7d19,	// (0x0001539e) main_pane_idle_g1_cp

0x7d25,	// (0x000153aa) popup_ai_links_title_window

0x7d2e,	// (0x000153b3) soft_indicator_pane_cp1_ParamLimits

0x7d2e,	// (0x000153b3) soft_indicator_pane_cp1

0xa3b7,	// (0x00017a3c) ai_links_pane_g1

0xa3c0,	// (0x00017a45) grid_ai_links_pane

0xa39a,	// (0x00017a1f) ai_gene_pane_1

0xa3a5,	// (0x00017a2a) ai_gene_pane_2

0xa3ae,	// (0x00017a33) list_highlight_pane_cp4

0xa37e,	// (0x00017a03) cell_ai_link_pane_ParamLimits

0xa37e,	// (0x00017a03) cell_ai_link_pane

0xa376,	// (0x000179fb) cell_ai_link_pane_g1

0x395d,	// (0x00010fe2) cell_ai_link_pane_g2

0x0001,

0xf8dc,	// (0x0001cf61) cell_ai_link_pane_g

0x3696,	// (0x00010d1b) grid_highlight_cp2

0x3696,	// (0x00010d1b) bg_popup_sub_pane_cp1

0x3847,	// (0x00010ecc) popup_ai_links_title_window_t1

0xa2c6,	// (0x0001794b) ai_gene_pane_1_g1_ParamLimits

0xa2c6,	// (0x0001794b) ai_gene_pane_1_g1

0xa2d2,	// (0x00017957) ai_gene_pane_1_g2_ParamLimits

0xa2d2,	// (0x00017957) ai_gene_pane_1_g2

0x0001,

0xf8d2,	// (0x0001cf57) ai_gene_pane_1_g_ParamLimits

0xf8d2,	// (0x0001cf57) ai_gene_pane_1_g

0xa2df,	// (0x00017964) ai_gene_pane_1_t1_ParamLimits

0xa2df,	// (0x00017964) ai_gene_pane_1_t1

0xa313,	// (0x00017998) grid_ai_soft_ind_pane

0xa2b1,	// (0x00017936) ai_gene_pane_2_t1_ParamLimits

0xa2b1,	// (0x00017936) ai_gene_pane_2_t1

0x7d3a,	// (0x000153bf) main_pane_empty_t1_ParamLimits

0x7d3a,	// (0x000153bf) main_pane_empty_t1

0x7d52,	// (0x000153d7) main_pane_empty_t2_ParamLimits

0x7d52,	// (0x000153d7) main_pane_empty_t2

0x7d67,	// (0x000153ec) main_pane_empty_t3_ParamLimits

0x7d67,	// (0x000153ec) main_pane_empty_t3

0x7d79,	// (0x000153fe) main_pane_empty_t4_ParamLimits

0x7d79,	// (0x000153fe) main_pane_empty_t4

0x7d8b,	// (0x00015410) main_pane_empty_t5_ParamLimits

0x7d8b,	// (0x00015410) main_pane_empty_t5

0x0004,

0xf54d,	// (0x0001cbd2) main_pane_empty_t_ParamLimits

0xf54d,	// (0x0001cbd2) main_pane_empty_t

0x3c7f,	// (0x00011304) bg_popup_window_pane_ParamLimits

0x3c7f,	// (0x00011304) bg_popup_window_pane

0xa021,	// (0x000176a6) find_popup_pane_cp2_ParamLimits

0xa021,	// (0x000176a6) find_popup_pane_cp2

0xa02d,	// (0x000176b2) heading_pane_ParamLimits

0xa02d,	// (0x000176b2) heading_pane

0x3696,	// (0x00010d1b) bg_popup_sub_pane

0x9f9b,	// (0x00017620) bg_popup_window_pane_g1_ParamLimits

0x9f9b,	// (0x00017620) bg_popup_window_pane_g1

0x9fa7,	// (0x0001762c) bg_popup_window_pane_g2_ParamLimits

0x9fa7,	// (0x0001762c) bg_popup_window_pane_g2

0x9fb3,	// (0x00017638) bg_popup_window_pane_g3_ParamLimits

0x9fb3,	// (0x00017638) bg_popup_window_pane_g3

0x9fbf,	// (0x00017644) bg_popup_window_pane_g4_ParamLimits

0x9fbf,	// (0x00017644) bg_popup_window_pane_g4

0x9fcb,	// (0x00017650) bg_popup_window_pane_g5_ParamLimits

0x9fcb,	// (0x00017650) bg_popup_window_pane_g5

0x9fd7,	// (0x0001765c) bg_popup_window_pane_g6_ParamLimits

0x9fd7,	// (0x0001765c) bg_popup_window_pane_g6

0x9fe3,	// (0x00017668) bg_popup_window_pane_g7_ParamLimits

0x9fe3,	// (0x00017668) bg_popup_window_pane_g7

0x9fef,	// (0x00017674) bg_popup_window_pane_g8_ParamLimits

0x9fef,	// (0x00017674) bg_popup_window_pane_g8

0x9ffb,	// (0x00017680) bg_popup_window_pane_g9_ParamLimits

0x9ffb,	// (0x00017680) bg_popup_window_pane_g9

0xa007,	// (0x0001768c) bg_popup_window_pane_g10_ParamLimits

0xa007,	// (0x0001768c) bg_popup_window_pane_g10

0x0009,

0xf89a,	// (0x0001cf1f) bg_popup_window_pane_g_ParamLimits

0xf89a,	// (0x0001cf1f) bg_popup_window_pane_g

0x9f30,	// (0x000175b5) bg_popup_heading_pane_ParamLimits

0x9f30,	// (0x000175b5) bg_popup_heading_pane

0x6900,	// (0x00013f85) tabs_4_passive_pane_cp_srt_ParamLimits

0x6900,	// (0x00013f85) tabs_4_passive_pane_cp_srt

0x6912,	// (0x00013f97) tabs_4_passive_pane_srt_ParamLimits

0x9f44,	// (0x000175c9) heading_pane_g2

0x6912,	// (0x00013f97) tabs_4_passive_pane_srt

0x4a30,	// (0x000120b5) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4a30,	// (0x000120b5) bg_passive_tab_pane_cp3_srt

0x9f4c,	// (0x000175d1) heading_pane_t1_ParamLimits

0x9f4c,	// (0x000175d1) heading_pane_t1

0x9f63,	// (0x000175e8) heading_pane_t2_ParamLimits

0x9f63,	// (0x000175e8) heading_pane_t2

0x0001,

0xf895,	// (0x0001cf1a) heading_pane_t_ParamLimits

0xf895,	// (0x0001cf1a) heading_pane_t

0x9a6d,	// (0x000170f2) bg_popup_heading_pane_g1

0x9b1c,	// (0x000171a1) bg_popup_heading_pane_g2

0x9b26,	// (0x000171ab) bg_popup_heading_pane_g3

0x9b30,	// (0x000171b5) bg_popup_heading_pane_g4

0x9b3a,	// (0x000171bf) bg_popup_heading_pane_g5

0x9b44,	// (0x000171c9) bg_popup_heading_pane_g6

0x9b4c,	// (0x000171d1) bg_popup_heading_pane_g7

0x9b54,	// (0x000171d9) bg_popup_heading_pane_g8

0x9b5e,	// (0x000171e3) bg_popup_heading_pane_g9

0x0008,

0xf851,	// (0x0001ced6) bg_popup_heading_pane_g

0x9159,	// (0x000167de) bg_popup_sub_pane_g1

0x9169,	// (0x000167ee) bg_popup_sub_pane_g2

0x9161,	// (0x000167e6) bg_popup_sub_pane_g3

0x9179,	// (0x000167fe) bg_popup_sub_pane_g4

0x9171,	// (0x000167f6) bg_popup_sub_pane_g5

0x9181,	// (0x00016806) bg_popup_sub_pane_g6

0x9189,	// (0x0001680e) bg_popup_sub_pane_g7

0x9199,	// (0x0001681e) bg_popup_sub_pane_g8

0x9191,	// (0x00016816) bg_popup_sub_pane_g9

0x0008,

0xf82b,	// (0x0001ceb0) bg_popup_sub_pane_g

0x3704,	// (0x00010d89) bg_popup_window_pane_cp5_ParamLimits

0x3704,	// (0x00010d89) bg_popup_window_pane_cp5

0x3864,	// (0x00010ee9) popup_note_window_g1_ParamLimits

0x3864,	// (0x00010ee9) popup_note_window_g1

0x3870,	// (0x00010ef5) popup_note_window_t1_ParamLimits

0x3870,	// (0x00010ef5) popup_note_window_t1

0x3886,	// (0x00010f0b) popup_note_window_t2_ParamLimits

0x3886,	// (0x00010f0b) popup_note_window_t2

0x389c,	// (0x00010f21) popup_note_window_t3_ParamLimits

0x389c,	// (0x00010f21) popup_note_window_t3

0x38b2,	// (0x00010f37) popup_note_window_t4_ParamLimits

0x38b2,	// (0x00010f37) popup_note_window_t4

0x38da,	// (0x00010f5f) popup_note_window_t5_ParamLimits

0x38da,	// (0x00010f5f) popup_note_window_t5

0x0004,

0xf558,	// (0x0001cbdd) popup_note_window_t_ParamLimits

0xf558,	// (0x0001cbdd) popup_note_window_t

0x38fe,	// (0x00010f83) bg_popup_window_pane_cp6_ParamLimits

0x38fe,	// (0x00010f83) bg_popup_window_pane_cp6

0x99e9,	// (0x0001706e) popup_note_image_window_g1_ParamLimits

0x99e9,	// (0x0001706e) popup_note_image_window_g1

0x99f5,	// (0x0001707a) popup_note_image_window_g2_ParamLimits

0x99f5,	// (0x0001707a) popup_note_image_window_g2

0x0001,

0xf81f,	// (0x0001cea4) popup_note_image_window_g_ParamLimits

0xf81f,	// (0x0001cea4) popup_note_image_window_g

0x9a0e,	// (0x00017093) popup_note_image_window_t1_ParamLimits

0x9a0e,	// (0x00017093) popup_note_image_window_t1

0x9a27,	// (0x000170ac) popup_note_image_window_t2_ParamLimits

0x9a27,	// (0x000170ac) popup_note_image_window_t2

0x9a40,	// (0x000170c5) popup_note_image_window_t3_ParamLimits

0x9a40,	// (0x000170c5) popup_note_image_window_t3

0x0002,

0xf824,	// (0x0001cea9) popup_note_image_window_t_ParamLimits

0xf824,	// (0x0001cea9) popup_note_image_window_t

0x98b2,	// (0x00016f37) bg_popup_window_pane_cp7_ParamLimits

0x98b2,	// (0x00016f37) bg_popup_window_pane_cp7

0x98e2,	// (0x00016f67) popup_note_wait_window_g1_ParamLimits

0x98e2,	// (0x00016f67) popup_note_wait_window_g1

0x98ee,	// (0x00016f73) popup_note_wait_window_g2_ParamLimits

0x98ee,	// (0x00016f73) popup_note_wait_window_g2

0x0002,

0xf80d,	// (0x0001ce92) popup_note_wait_window_g_ParamLimits

0xf80d,	// (0x0001ce92) popup_note_wait_window_g

0x9906,	// (0x00016f8b) popup_note_wait_window_t1_ParamLimits

0x9906,	// (0x00016f8b) popup_note_wait_window_t1

0x992d,	// (0x00016fb2) popup_note_wait_window_t2_ParamLimits

0x992d,	// (0x00016fb2) popup_note_wait_window_t2

0x994a,	// (0x00016fcf) popup_note_wait_window_t3_ParamLimits

0x994a,	// (0x00016fcf) popup_note_wait_window_t3

0x995d,	// (0x00016fe2) popup_note_wait_window_t4_ParamLimits

0x995d,	// (0x00016fe2) popup_note_wait_window_t4

0x0004,

0xf814,	// (0x0001ce99) popup_note_wait_window_t_ParamLimits

0xf814,	// (0x0001ce99) popup_note_wait_window_t

0x9982,	// (0x00017007) wait_bar_pane_ParamLimits

0x9982,	// (0x00017007) wait_bar_pane

0x3696,	// (0x00010d1b) wait_anim_pane

0x3696,	// (0x00010d1b) wait_border_pane

0x366c,	// (0x00010cf1) wait_anim_pane_g1

0x366c,	// (0x00010cf1) wait_anim_pane_g2

0x0001,

0xf6c8,	// (0x0001cd4d) wait_anim_pane_g

0x985e,	// (0x00016ee3) wait_border_pane_g1

0x9869,	// (0x00016eee) wait_border_pane_g2

0x9872,	// (0x00016ef7) wait_border_pane_g3

0x0002,

0xf806,	// (0x0001ce8b) wait_border_pane_g

0x96c9,	// (0x00016d4e) bg_popup_window_pane_cp16_ParamLimits

0x96c9,	// (0x00016d4e) bg_popup_window_pane_cp16

0x97c9,	// (0x00016e4e) indicator_popup_pane_cp4_ParamLimits

0x97c9,	// (0x00016e4e) indicator_popup_pane_cp4

0x97dd,	// (0x00016e62) popup_query_data_window_t1_ParamLimits

0x97dd,	// (0x00016e62) popup_query_data_window_t1

0x97ef,	// (0x00016e74) popup_query_data_window_t2_ParamLimits

0x97ef,	// (0x00016e74) popup_query_data_window_t2

0x9808,	// (0x00016e8d) popup_query_data_window_t3_ParamLimits

0x9808,	// (0x00016e8d) popup_query_data_window_t3

0x0002,

0xf7ff,	// (0x0001ce84) popup_query_data_window_t_ParamLimits

0xf7ff,	// (0x0001ce84) popup_query_data_window_t

0x9822,	// (0x00016ea7) query_popup_data_pane_ParamLimits

0x9822,	// (0x00016ea7) query_popup_data_pane

0x9836,	// (0x00016ebb) query_popup_data_pane_cp1_ParamLimits

0x9836,	// (0x00016ebb) query_popup_data_pane_cp1

0x96c9,	// (0x00016d4e) bg_popup_window_pane_cp10_ParamLimits

0x96c9,	// (0x00016d4e) bg_popup_window_pane_cp10

0x96fb,	// (0x00016d80) indicator_popup_pane_ParamLimits

0x96fb,	// (0x00016d80) indicator_popup_pane

0x971d,	// (0x00016da2) popup_query_code_window_t1_ParamLimits

0x971d,	// (0x00016da2) popup_query_code_window_t1

0x9737,	// (0x00016dbc) popup_query_code_window_t2_ParamLimits

0x9737,	// (0x00016dbc) popup_query_code_window_t2

0x9780,	// (0x00016e05) popup_query_code_window_t3_ParamLimits

0x9780,	// (0x00016e05) popup_query_code_window_t3

0x0002,

0xf7f8,	// (0x0001ce7d) popup_query_code_window_t_ParamLimits

0xf7f8,	// (0x0001ce7d) popup_query_code_window_t

0x97af,	// (0x00016e34) query_popup_pane_ParamLimits

0x97af,	// (0x00016e34) query_popup_pane

0x38fe,	// (0x00010f83) bg_popup_window_pane_cp15_ParamLimits

0x38fe,	// (0x00010f83) bg_popup_window_pane_cp15

0x7dc5,	// (0x0001544a) indicator_popup_pane_cp1_ParamLimits

0x7dc5,	// (0x0001544a) indicator_popup_pane_cp1

0x7dd8,	// (0x0001545d) indicator_popup_pane_cp2_ParamLimits

0x7dd8,	// (0x0001545d) indicator_popup_pane_cp2

0x7deb,	// (0x00015470) popup_query_data_code_window_g1_ParamLimits

0x7deb,	// (0x00015470) popup_query_data_code_window_g1

0x391c,	// (0x00010fa1) popup_query_data_code_window_t1_ParamLimits

0x391c,	// (0x00010fa1) popup_query_data_code_window_t1

0x392e,	// (0x00010fb3) popup_query_data_code_window_t2_ParamLimits

0x392e,	// (0x00010fb3) popup_query_data_code_window_t2

0x7dfe,	// (0x00015483) popup_query_data_code_window_t3_ParamLimits

0x7dfe,	// (0x00015483) popup_query_data_code_window_t3

0x7e14,	// (0x00015499) popup_query_data_code_window_t4_ParamLimits

0x7e14,	// (0x00015499) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0001cbe8) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0001cbe8) popup_query_data_code_window_t

0x65bb,	// (0x00013c40) list_single_midp_graphic_pane_g3

0x7e2c,	// (0x000154b1) query_popup_data_pane_cp2_ParamLimits

0x7e3f,	// (0x000154c4) query_popup_pane_cp2_ParamLimits

0x7e3f,	// (0x000154c4) query_popup_pane_cp2

0x3696,	// (0x00010d1b) bg_popup_window_pane_cp11

0x96ad,	// (0x00016d32) heading_pane_cp5

0x96b5,	// (0x00016d3a) listscroll_popup_info_pane

0x3696,	// (0x00010d1b) input_focus_pane_cp3

0x3940,	// (0x00010fc5) query_popup_pane_t1

0x394e,	// (0x00010fd3) list_popup_info_pane_ParamLimits

0x394e,	// (0x00010fd3) list_popup_info_pane

0x395d,	// (0x00010fe2) listscroll_popup_info_pane_g1

0x3965,	// (0x00010fea) scroll_pane_cp7

0x7e52,	// (0x000154d7) popup_info_list_pane_t1_ParamLimits

0x7e52,	// (0x000154d7) popup_info_list_pane_t1

0x7e6c,	// (0x000154f1) popup_info_list_pane_t2_ParamLimits

0x7e6c,	// (0x000154f1) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x0001cbf1) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x0001cbf1) popup_info_list_pane_t

0x3696,	// (0x00010d1b) bg_popup_window_pane_cp12

0xaaee,	// (0x00018173) find_popup_pane

0x3712,	// (0x00010d97) bg_popup_window_pane_cp3

0x396f,	// (0x00010ff4) heading_pane_cp3

0x397e,	// (0x00011003) listscroll_popup_graphic_pane

0x3696,	// (0x00010d1b) bg_popup_window_pane_cp4

0x7ed6,	// (0x0001555b) heading_pane_cp4

0x398e,	// (0x00011013) listscroll_popup_colour_pane

0x7ee0,	// (0x00015565) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7ee0,	// (0x00015565) cell_large_graphic_colour_none_popup_pane

0x7ef4,	// (0x00015579) grid_large_graphic_colour_popup_pane_ParamLimits

0x7ef4,	// (0x00015579) grid_large_graphic_colour_popup_pane

0x7f18,	// (0x0001559d) listscroll_popup_colour_pane_g1_ParamLimits

0x7f18,	// (0x0001559d) listscroll_popup_colour_pane_g1

0x7f2f,	// (0x000155b4) listscroll_popup_colour_pane_g2_ParamLimits

0x7f2f,	// (0x000155b4) listscroll_popup_colour_pane_g2

0x7f46,	// (0x000155cb) listscroll_popup_colour_pane_g3_ParamLimits

0x7f46,	// (0x000155cb) listscroll_popup_colour_pane_g3

0x7f56,	// (0x000155db) listscroll_popup_colour_pane_g4_ParamLimits

0x7f56,	// (0x000155db) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x0001cbf6) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x0001cbf6) listscroll_popup_colour_pane_g

0x3996,	// (0x0001101b) scroll_pane_cp6_ParamLimits

0x3996,	// (0x0001101b) scroll_pane_cp6

0x7f66,	// (0x000155eb) cell_large_graphic_colour_popup_pane_ParamLimits

0x7f66,	// (0x000155eb) cell_large_graphic_colour_popup_pane

0x7f85,	// (0x0001560a) cell_large_graphic_colour_none_popup_pane_t1

0x3696,	// (0x00010d1b) grid_highlight_pane_cp5

0x39a8,	// (0x0001102d) cell_large_graphic_colour_popup_pane_g1

0x39b0,	// (0x00011035) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x0001cbff) cell_large_graphic_colour_popup_pane_g

0x39b8,	// (0x0001103d) cell_large_graphic_colour_popup_pane_g2_copy1

0x39c1,	// (0x00011046) grid_highlight_pane_cp4

0x39c9,	// (0x0001104e) bg_popup_window_pane_cp8_ParamLimits

0x39c9,	// (0x0001104e) bg_popup_window_pane_cp8

0x7f94,	// (0x00015619) popup_snote_single_text_window_g1_ParamLimits

0x7f94,	// (0x00015619) popup_snote_single_text_window_g1

0x7fa6,	// (0x0001562b) popup_snote_single_text_window_t1_ParamLimits

0x7fa6,	// (0x0001562b) popup_snote_single_text_window_t1

0x7fb9,	// (0x0001563e) popup_snote_single_text_window_t2_ParamLimits

0x7fb9,	// (0x0001563e) popup_snote_single_text_window_t2

0x7fcc,	// (0x00015651) popup_snote_single_text_window_t3_ParamLimits

0x7fcc,	// (0x00015651) popup_snote_single_text_window_t3

0x8005,	// (0x0001568a) popup_snote_single_text_window_t4_ParamLimits

0x8005,	// (0x0001568a) popup_snote_single_text_window_t4

0x8039,	// (0x000156be) popup_snote_single_text_window_t5_ParamLimits

0x8039,	// (0x000156be) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x0001cc04) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x0001cc04) popup_snote_single_text_window_t

0x39e4,	// (0x00011069) bg_popup_window_pane_cp9_ParamLimits

0x39e4,	// (0x00011069) bg_popup_window_pane_cp9

0x7f94,	// (0x00015619) popup_snote_single_graphic_window_g1_ParamLimits

0x7f94,	// (0x00015619) popup_snote_single_graphic_window_g1

0x39f2,	// (0x00011077) popup_snote_single_graphic_window_g2_ParamLimits

0x39f2,	// (0x00011077) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x0001cc0f) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x0001cc0f) popup_snote_single_graphic_window_g

0x39fe,	// (0x00011083) popup_snote_single_graphic_window_t1_ParamLimits

0x39fe,	// (0x00011083) popup_snote_single_graphic_window_t1

0x3a11,	// (0x00011096) popup_snote_single_graphic_window_t2_ParamLimits

0x3a11,	// (0x00011096) popup_snote_single_graphic_window_t2

0x8068,	// (0x000156ed) popup_snote_single_graphic_window_t3_ParamLimits

0x8068,	// (0x000156ed) popup_snote_single_graphic_window_t3

0x80a1,	// (0x00015726) popup_snote_single_graphic_window_t4_ParamLimits

0x80a1,	// (0x00015726) popup_snote_single_graphic_window_t4

0x80d5,	// (0x0001575a) popup_snote_single_graphic_window_t5_ParamLimits

0x80d5,	// (0x0001575a) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x0001cc14) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x0001cc14) popup_snote_single_graphic_window_t

0xaa30,	// (0x000180b5) grid_graphic_popup_pane_ParamLimits

0xaa30,	// (0x000180b5) grid_graphic_popup_pane

0xaa5a,	// (0x000180df) listscroll_popup_graphic_pane_g1_ParamLimits

0xaa5a,	// (0x000180df) listscroll_popup_graphic_pane_g1

0xaa6e,	// (0x000180f3) listscroll_popup_graphic_pane_g2_ParamLimits

0xaa6e,	// (0x000180f3) listscroll_popup_graphic_pane_g2

0x0001,

0xf975,	// (0x0001cffa) listscroll_popup_graphic_pane_g_ParamLimits

0xf975,	// (0x0001cffa) listscroll_popup_graphic_pane_g

0xaa82,	// (0x00018107) scroll_pane_cp5

0xa9bf,	// (0x00018044) cell_graphic_popup_pane_ParamLimits

0xa9bf,	// (0x00018044) cell_graphic_popup_pane

0xa9a0,	// (0x00018025) cell_graphic_popup_pane_g1

0xa9a8,	// (0x0001802d) cell_graphic_popup_pane_g2

0x39b8,	// (0x0001103d) cell_graphic_popup_pane_g3

0x0002,

0xf96e,	// (0x0001cff3) cell_graphic_popup_pane_g

0xa9b1,	// (0x00018036) cell_graphic_popup_pane_t2

0x39c1,	// (0x00011046) grid_highlight_pane_cp3

0x3a36,	// (0x000110bb) list_gen_pane_ParamLimits

0x3a36,	// (0x000110bb) list_gen_pane

0x3a5e,	// (0x000110e3) scroll_pane

0xa8f8,	// (0x00017f7d) bg_list_pane_g1_ParamLimits

0xa8f8,	// (0x00017f7d) bg_list_pane_g1

0xa915,	// (0x00017f9a) bg_list_pane_g2_ParamLimits

0xa915,	// (0x00017f9a) bg_list_pane_g2

0xa92a,	// (0x00017faf) bg_list_pane_g3_ParamLimits

0xa92a,	// (0x00017faf) bg_list_pane_g3

0xa93e,	// (0x00017fc3) bg_list_pane_g4_ParamLimits

0xa93e,	// (0x00017fc3) bg_list_pane_g4

0xa952,	// (0x00017fd7) bg_list_pane_g5_ParamLimits

0xa952,	// (0x00017fd7) bg_list_pane_g5

0x0004,

0xf963,	// (0x0001cfe8) bg_list_pane_g_ParamLimits

0xf963,	// (0x0001cfe8) bg_list_pane_g

0xa7dc,	// (0x00017e61) list_double2_graphic_large_graphic_pane_ParamLimits

0xa7dc,	// (0x00017e61) list_double2_graphic_large_graphic_pane

0xa7dc,	// (0x00017e61) list_double2_graphic_pane_ParamLimits

0xa7dc,	// (0x00017e61) list_double2_graphic_pane

0xa7dc,	// (0x00017e61) list_double2_large_graphic_pane_ParamLimits

0xa7dc,	// (0x00017e61) list_double2_large_graphic_pane

0xa7dc,	// (0x00017e61) list_double2_pane_ParamLimits

0xa7dc,	// (0x00017e61) list_double2_pane

0xa7dc,	// (0x00017e61) list_double_graphic_heading_pane_ParamLimits

0xa7dc,	// (0x00017e61) list_double_graphic_heading_pane

0xa7dc,	// (0x00017e61) list_double_graphic_pane_ParamLimits

0xa7dc,	// (0x00017e61) list_double_graphic_pane

0xa7dc,	// (0x00017e61) list_double_heading_pane_ParamLimits

0xa7dc,	// (0x00017e61) list_double_heading_pane

0xa7dc,	// (0x00017e61) list_double_large_graphic_pane_ParamLimits

0xa7dc,	// (0x00017e61) list_double_large_graphic_pane

0xa7dc,	// (0x00017e61) list_double_number_pane_ParamLimits

0xa7dc,	// (0x00017e61) list_double_number_pane

0xa7dc,	// (0x00017e61) list_double_pane_ParamLimits

0xa7dc,	// (0x00017e61) list_double_pane

0xa7dc,	// (0x00017e61) list_double_time_pane_ParamLimits

0xa7dc,	// (0x00017e61) list_double_time_pane

0xa7dc,	// (0x00017e61) list_setting_number_pane_ParamLimits

0xa7dc,	// (0x00017e61) list_setting_number_pane

0xa7dc,	// (0x00017e61) list_setting_pane_ParamLimits

0xa7dc,	// (0x00017e61) list_setting_pane

0xa85a,	// (0x00017edf) list_single_2graphic_pane_ParamLimits

0xa85a,	// (0x00017edf) list_single_2graphic_pane

0xa85a,	// (0x00017edf) list_single_graphic_heading_pane_ParamLimits

0xa85a,	// (0x00017edf) list_single_graphic_heading_pane

0xa85a,	// (0x00017edf) list_single_graphic_pane_ParamLimits

0xa85a,	// (0x00017edf) list_single_graphic_pane

0xa85a,	// (0x00017edf) list_single_heading_pane_ParamLimits

0xa85a,	// (0x00017edf) list_single_heading_pane

0xa8d5,	// (0x00017f5a) list_single_large_graphic_pane_ParamLimits

0xa8d5,	// (0x00017f5a) list_single_large_graphic_pane

0xa85a,	// (0x00017edf) list_single_number_heading_pane_ParamLimits

0xa85a,	// (0x00017edf) list_single_number_heading_pane

0xa85a,	// (0x00017edf) list_single_number_pane_ParamLimits

0xa85a,	// (0x00017edf) list_single_number_pane

0xa85a,	// (0x00017edf) list_single_pane_ParamLimits

0xa85a,	// (0x00017edf) list_single_pane

0x3696,	// (0x00010d1b) list_highlight_pane_cp1

0x3e30,	// (0x000114b5) list_single_pane_g1_ParamLimits

0x3e30,	// (0x000114b5) list_single_pane_g1

0x3e3c,	// (0x000114c1) list_single_pane_g2_ParamLimits

0x3e3c,	// (0x000114c1) list_single_pane_g2

0x0001,

0xf5a1,	// (0x0001cc26) list_single_pane_g_ParamLimits

0xf5a1,	// (0x0001cc26) list_single_pane_g

0x811a,	// (0x0001579f) list_single_pane_t1_ParamLimits

0x811a,	// (0x0001579f) list_single_pane_t1

0x3e30,	// (0x000114b5) list_single_number_pane_g1_ParamLimits

0x3e30,	// (0x000114b5) list_single_number_pane_g1

0x3e3c,	// (0x000114c1) list_single_number_pane_g2_ParamLimits

0x3e3c,	// (0x000114c1) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x0001cc26) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x0001cc26) list_single_number_pane_g

0x811a,	// (0x0001579f) list_single_number_pane_t1_ParamLimits

0x811a,	// (0x0001579f) list_single_number_pane_t1

0xa551,	// (0x00017bd6) list_single_number_pane_t2_ParamLimits

0xa551,	// (0x00017bd6) list_single_number_pane_t2

0x0001,

0xf924,	// (0x0001cfa9) list_single_number_pane_t_ParamLimits

0xf924,	// (0x0001cfa9) list_single_number_pane_t

0x810e,	// (0x00015793) list_single_graphic_pane_g1_ParamLimits

0x810e,	// (0x00015793) list_single_graphic_pane_g1

0x3e30,	// (0x000114b5) list_single_graphic_pane_g2_ParamLimits

0x3e30,	// (0x000114b5) list_single_graphic_pane_g2

0x3e3c,	// (0x000114c1) list_single_graphic_pane_g3_ParamLimits

0x3e3c,	// (0x000114c1) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x0001cc1f) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x0001cc1f) list_single_graphic_pane_g

0x811a,	// (0x0001579f) list_single_graphic_pane_t1_ParamLimits

0x811a,	// (0x0001579f) list_single_graphic_pane_t1

0x3e30,	// (0x000114b5) list_single_heading_pane_g1_ParamLimits

0x3e30,	// (0x000114b5) list_single_heading_pane_g1

0x3e3c,	// (0x000114c1) list_single_heading_pane_g2_ParamLimits

0x3e3c,	// (0x000114c1) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x0001cc26) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x0001cc26) list_single_heading_pane_g

0x8130,	// (0x000157b5) list_single_heading_pane_t1_ParamLimits

0x8130,	// (0x000157b5) list_single_heading_pane_t1

0x8146,	// (0x000157cb) list_single_heading_pane_t2_ParamLimits

0x8146,	// (0x000157cb) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0001cc2b) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0001cc2b) list_single_heading_pane_t

0x3e30,	// (0x000114b5) list_single_number_heading_pane_g1_ParamLimits

0x3e30,	// (0x000114b5) list_single_number_heading_pane_g1

0x3e3c,	// (0x000114c1) list_single_number_heading_pane_g2_ParamLimits

0x3e3c,	// (0x000114c1) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x0001cc26) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x0001cc26) list_single_number_heading_pane_g

0x8130,	// (0x000157b5) list_single_number_heading_pane_t1_ParamLimits

0x8130,	// (0x000157b5) list_single_number_heading_pane_t1

0x8158,	// (0x000157dd) list_single_number_heading_pane_t2_ParamLimits

0x8158,	// (0x000157dd) list_single_number_heading_pane_t2

0x816a,	// (0x000157ef) list_single_number_heading_pane_t3_ParamLimits

0x816a,	// (0x000157ef) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x0001cc30) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x0001cc30) list_single_number_heading_pane_t

0x817c,	// (0x00015801) list_single_graphic_heading_pane_g1_ParamLimits

0x817c,	// (0x00015801) list_single_graphic_heading_pane_g1

0x8188,	// (0x0001580d) list_single_graphic_heading_pane_g4_ParamLimits

0x8188,	// (0x0001580d) list_single_graphic_heading_pane_g4

0x3e3c,	// (0x000114c1) list_single_graphic_heading_pane_g5_ParamLimits

0x3e3c,	// (0x000114c1) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x0001cc37) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x0001cc37) list_single_graphic_heading_pane_g

0x8130,	// (0x000157b5) list_single_graphic_heading_pane_t1_ParamLimits

0x8130,	// (0x000157b5) list_single_graphic_heading_pane_t1

0x8199,	// (0x0001581e) list_single_graphic_heading_pane_t2_ParamLimits

0x8199,	// (0x0001581e) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x0001cc3e) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x0001cc3e) list_single_graphic_heading_pane_t

0x81ab,	// (0x00015830) list_single_large_graphic_pane_g1_ParamLimits

0x81ab,	// (0x00015830) list_single_large_graphic_pane_g1

0x3e30,	// (0x000114b5) list_single_large_graphic_pane_g2_ParamLimits

0x3e30,	// (0x000114b5) list_single_large_graphic_pane_g2

0x3e3c,	// (0x000114c1) list_single_large_graphic_pane_g3_ParamLimits

0x3e3c,	// (0x000114c1) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x0001cc43) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x0001cc43) list_single_large_graphic_pane_g

0x9869,	// (0x00016eee) wait_border_pane_g2_copy1

0x81b7,	// (0x0001583c) list_single_large_graphic_pane_g4_cp2

0x81bf,	// (0x00015844) list_single_large_graphic_pane_t1_ParamLimits

0x81bf,	// (0x00015844) list_single_large_graphic_pane_t1

0x3e50,	// (0x000114d5) list_double_pane_g1_ParamLimits

0x3e50,	// (0x000114d5) list_double_pane_g1

0x81d5,	// (0x0001585a) list_double_pane_g2_ParamLimits

0x81d5,	// (0x0001585a) list_double_pane_g2

0x0001,

0xf5c5,	// (0x0001cc4a) list_double_pane_g_ParamLimits

0xf5c5,	// (0x0001cc4a) list_double_pane_g

0x81e1,	// (0x00015866) list_double_pane_t1_ParamLimits

0x81e1,	// (0x00015866) list_double_pane_t1

0x81f7,	// (0x0001587c) list_double_pane_t2_ParamLimits

0x81f7,	// (0x0001587c) list_double_pane_t2

0x0001,

0xf5ca,	// (0x0001cc4f) list_double_pane_t_ParamLimits

0xf5ca,	// (0x0001cc4f) list_double_pane_t

0x8209,	// (0x0001588e) list_double2_pane_g1_ParamLimits

0x8209,	// (0x0001588e) list_double2_pane_g1

0x821a,	// (0x0001589f) list_double2_pane_g2_ParamLimits

0x821a,	// (0x0001589f) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x0001cc54) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x0001cc54) list_double2_pane_g

0x8226,	// (0x000158ab) list_double2_pane_t1_ParamLimits

0x8226,	// (0x000158ab) list_double2_pane_t1

0x823c,	// (0x000158c1) list_double2_pane_t2_ParamLimits

0x823c,	// (0x000158c1) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x0001cc59) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x0001cc59) list_double2_pane_t

0x3e50,	// (0x000114d5) list_double_number_pane_g1_ParamLimits

0x3e50,	// (0x000114d5) list_double_number_pane_g1

0x81d5,	// (0x0001585a) list_double_number_pane_g2_ParamLimits

0x81d5,	// (0x0001585a) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x0001cc4a) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x0001cc4a) list_double_number_pane_g

0x824e,	// (0x000158d3) list_double_number_pane_t1_ParamLimits

0x824e,	// (0x000158d3) list_double_number_pane_t1

0x81e1,	// (0x00015866) list_double_number_pane_t2_ParamLimits

0x81e1,	// (0x00015866) list_double_number_pane_t2

0x81f7,	// (0x0001587c) list_double_number_pane_t3_ParamLimits

0x81f7,	// (0x0001587c) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x0001cc5e) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x0001cc5e) list_double_number_pane_t

0x8260,	// (0x000158e5) list_double_graphic_pane_g1_ParamLimits

0x8260,	// (0x000158e5) list_double_graphic_pane_g1

0x826c,	// (0x000158f1) list_double_graphic_pane_g2_ParamLimits

0x826c,	// (0x000158f1) list_double_graphic_pane_g2

0x827b,	// (0x00015900) list_double_graphic_pane_g3_ParamLimits

0x827b,	// (0x00015900) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x0001cc65) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x0001cc65) list_double_graphic_pane_g

0x81e1,	// (0x00015866) list_double_graphic_pane_t1_ParamLimits

0x81e1,	// (0x00015866) list_double_graphic_pane_t1

0x81f7,	// (0x0001587c) list_double_graphic_pane_t2_ParamLimits

0x81f7,	// (0x0001587c) list_double_graphic_pane_t2

0x0001,

0xf5ca,	// (0x0001cc4f) list_double_graphic_pane_t_ParamLimits

0xf5ca,	// (0x0001cc4f) list_double_graphic_pane_t

0x8293,	// (0x00015918) list_double2_graphic_pane_g1_ParamLimits

0x8293,	// (0x00015918) list_double2_graphic_pane_g1

0x3e5c,	// (0x000114e1) list_double2_graphic_pane_g2_ParamLimits

0x3e5c,	// (0x000114e1) list_double2_graphic_pane_g2

0x821a,	// (0x0001589f) list_double2_graphic_pane_g3_ParamLimits

0x821a,	// (0x0001589f) list_double2_graphic_pane_g3

0x0002,

0xf5e9,	// (0x0001cc6e) list_double2_graphic_pane_g_ParamLimits

0xf5e9,	// (0x0001cc6e) list_double2_graphic_pane_g

0x8226,	// (0x000158ab) list_double2_graphic_pane_t1_ParamLimits

0x8226,	// (0x000158ab) list_double2_graphic_pane_t1

0x823c,	// (0x000158c1) list_double2_graphic_pane_t2_ParamLimits

0x823c,	// (0x000158c1) list_double2_graphic_pane_t2

0x0001,

0xf5d4,	// (0x0001cc59) list_double2_graphic_pane_t_ParamLimits

0xf5d4,	// (0x0001cc59) list_double2_graphic_pane_t

0x829f,	// (0x00015924) list_double_large_graphic_pane_g1_ParamLimits

0x829f,	// (0x00015924) list_double_large_graphic_pane_g1

0x82be,	// (0x00015943) list_double_large_graphic_pane_g2_ParamLimits

0x82be,	// (0x00015943) list_double_large_graphic_pane_g2

0x81d5,	// (0x0001585a) list_double_large_graphic_pane_g3_ParamLimits

0x81d5,	// (0x0001585a) list_double_large_graphic_pane_g3

0x82cf,	// (0x00015954) list_double_large_graphic_pane_g4_ParamLimits

0x82cf,	// (0x00015954) list_double_large_graphic_pane_g4

0x0004,

0xf5f0,	// (0x0001cc75) list_double_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001cc75) list_double_large_graphic_pane_g

0x82e2,	// (0x00015967) list_double_large_graphic_pane_t1_ParamLimits

0x82e2,	// (0x00015967) list_double_large_graphic_pane_t1

0x82fb,	// (0x00015980) list_double_large_graphic_pane_t2_ParamLimits

0x82fb,	// (0x00015980) list_double_large_graphic_pane_t2

0x0001,

0xf5fb,	// (0x0001cc80) list_double_large_graphic_pane_t_ParamLimits

0xf5fb,	// (0x0001cc80) list_double_large_graphic_pane_t

0x830d,	// (0x00015992) list_double2_large_graphic_pane_g1_ParamLimits

0x830d,	// (0x00015992) list_double2_large_graphic_pane_g1

0x8209,	// (0x0001588e) list_double2_large_graphic_pane_g2_ParamLimits

0x8209,	// (0x0001588e) list_double2_large_graphic_pane_g2

0x821a,	// (0x0001589f) list_double2_large_graphic_pane_g3_ParamLimits

0x821a,	// (0x0001589f) list_double2_large_graphic_pane_g3

0x0002,

0xf600,	// (0x0001cc85) list_double2_large_graphic_pane_g_ParamLimits

0xf600,	// (0x0001cc85) list_double2_large_graphic_pane_g

0x8319,	// (0x0001599e) list_double2_large_graphic_pane_t1_ParamLimits

0x8319,	// (0x0001599e) list_double2_large_graphic_pane_t1

0x832f,	// (0x000159b4) list_double2_large_graphic_pane_t2_ParamLimits

0x832f,	// (0x000159b4) list_double2_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001cc8c) list_double2_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001cc8c) list_double2_large_graphic_pane_t

0x8341,	// (0x000159c6) list_double_heading_pane_g1_ParamLimits

0x8341,	// (0x000159c6) list_double_heading_pane_g1

0x3a92,	// (0x00011117) list_double_heading_pane_g2_ParamLimits

0x3a92,	// (0x00011117) list_double_heading_pane_g2

0x0001,

0xf60c,	// (0x0001cc91) list_double_heading_pane_g_ParamLimits

0xf60c,	// (0x0001cc91) list_double_heading_pane_g

0x8352,	// (0x000159d7) list_double_heading_pane_t1_ParamLimits

0x8352,	// (0x000159d7) list_double_heading_pane_t1

0x823c,	// (0x000158c1) list_double_heading_pane_t2_ParamLimits

0x823c,	// (0x000158c1) list_double_heading_pane_t2

0x0001,

0xf611,	// (0x0001cc96) list_double_heading_pane_t_ParamLimits

0xf611,	// (0x0001cc96) list_double_heading_pane_t

0x8260,	// (0x000158e5) list_double_graphic_heading_pane_g1_ParamLimits

0x8260,	// (0x000158e5) list_double_graphic_heading_pane_g1

0x8341,	// (0x000159c6) list_double_graphic_heading_pane_g2_ParamLimits

0x8341,	// (0x000159c6) list_double_graphic_heading_pane_g2

0x3a92,	// (0x00011117) list_double_graphic_heading_pane_g3_ParamLimits

0x3a92,	// (0x00011117) list_double_graphic_heading_pane_g3

0x0002,

0xf616,	// (0x0001cc9b) list_double_graphic_heading_pane_g_ParamLimits

0xf616,	// (0x0001cc9b) list_double_graphic_heading_pane_g

0x8352,	// (0x000159d7) list_double_graphic_heading_pane_t1_ParamLimits

0x8352,	// (0x000159d7) list_double_graphic_heading_pane_t1

0x823c,	// (0x000158c1) list_double_graphic_heading_pane_t2_ParamLimits

0x823c,	// (0x000158c1) list_double_graphic_heading_pane_t2

0x0001,

0xf611,	// (0x0001cc96) list_double_graphic_heading_pane_t_ParamLimits

0xf611,	// (0x0001cc96) list_double_graphic_heading_pane_t

0x82be,	// (0x00015943) list_double_time_pane_g1_ParamLimits

0x82be,	// (0x00015943) list_double_time_pane_g1

0x81d5,	// (0x0001585a) list_double_time_pane_g2_ParamLimits

0x81d5,	// (0x0001585a) list_double_time_pane_g2

0x0001,

0xf61d,	// (0x0001cca2) list_double_time_pane_g_ParamLimits

0xf61d,	// (0x0001cca2) list_double_time_pane_g

0x8368,	// (0x000159ed) list_double_time_pane_t1_ParamLimits

0x8368,	// (0x000159ed) list_double_time_pane_t1

0x837e,	// (0x00015a03) list_double_time_pane_t2_ParamLimits

0x837e,	// (0x00015a03) list_double_time_pane_t2

0x8390,	// (0x00015a15) list_double_time_pane_t3_ParamLimits

0x8390,	// (0x00015a15) list_double_time_pane_t3

0x83a2,	// (0x00015a27) list_double_time_pane_t4_ParamLimits

0x83a2,	// (0x00015a27) list_double_time_pane_t4

0x0003,

0xf622,	// (0x0001cca7) list_double_time_pane_t_ParamLimits

0xf622,	// (0x0001cca7) list_double_time_pane_t

0x3e5c,	// (0x000114e1) list_setting_pane_g1_ParamLimits

0x3e5c,	// (0x000114e1) list_setting_pane_g1

0x821a,	// (0x0001589f) list_setting_pane_g2_ParamLimits

0x821a,	// (0x0001589f) list_setting_pane_g2

0x0001,

0xf62b,	// (0x0001ccb0) list_setting_pane_g_ParamLimits

0xf62b,	// (0x0001ccb0) list_setting_pane_g

0x83b4,	// (0x00015a39) list_setting_pane_t1_ParamLimits

0x83b4,	// (0x00015a39) list_setting_pane_t1

0x83cb,	// (0x00015a50) list_setting_pane_t2_ParamLimits

0x83cb,	// (0x00015a50) list_setting_pane_t2

0x0002,

0xf630,	// (0x0001ccb5) list_setting_pane_t_ParamLimits

0xf630,	// (0x0001ccb5) list_setting_pane_t

0x8408,	// (0x00015a8d) set_value_pane_cp_ParamLimits

0x8408,	// (0x00015a8d) set_value_pane_cp

0x3e5c,	// (0x000114e1) list_setting_number_pane_g1_ParamLimits

0x3e5c,	// (0x000114e1) list_setting_number_pane_g1

0x821a,	// (0x0001589f) list_setting_number_pane_g2_ParamLimits

0x821a,	// (0x0001589f) list_setting_number_pane_g2

0x0001,

0xf62b,	// (0x0001ccb0) list_setting_number_pane_g_ParamLimits

0xf62b,	// (0x0001ccb0) list_setting_number_pane_g

0x8414,	// (0x00015a99) list_setting_number_pane_t1_ParamLimits

0x8414,	// (0x00015a99) list_setting_number_pane_t1

0x8428,	// (0x00015aad) list_setting_number_pane_t2_ParamLimits

0x8428,	// (0x00015aad) list_setting_number_pane_t2

0x843f,	// (0x00015ac4) list_setting_number_pane_t3_ParamLimits

0x843f,	// (0x00015ac4) list_setting_number_pane_t3

0x0003,

0xf637,	// (0x0001ccbc) list_setting_number_pane_t_ParamLimits

0xf637,	// (0x0001ccbc) list_setting_number_pane_t

0x8408,	// (0x00015a8d) set_value_pane_ParamLimits

0x8408,	// (0x00015a8d) set_value_pane

0x3ab3,	// (0x00011138) bg_set_opt_pane_ParamLimits

0x3ab3,	// (0x00011138) bg_set_opt_pane

0x3ad4,	// (0x00011159) set_value_pane_t1

0x3ae2,	// (0x00011167) slider_set_pane_cp3

0x8482,	// (0x00015b07) volume_small_pane_cp

0x3aeb,	// (0x00011170) list_form_gen_pane

0x3af4,	// (0x00011179) scroll_pane_cp8

0x848b,	// (0x00015b10) form_field_data_pane_ParamLimits

0x848b,	// (0x00015b10) form_field_data_pane

0x84a3,	// (0x00015b28) form_field_data_wide_pane_ParamLimits

0x84a3,	// (0x00015b28) form_field_data_wide_pane

0x84c4,	// (0x00015b49) form_field_popup_pane_ParamLimits

0x84c4,	// (0x00015b49) form_field_popup_pane

0x84e4,	// (0x00015b69) form_field_popup_wide_pane_ParamLimits

0x84e4,	// (0x00015b69) form_field_popup_wide_pane

0x3b15,	// (0x0001119a) form_field_slider_pane_ParamLimits

0x3b15,	// (0x0001119a) form_field_slider_pane

0x8501,	// (0x00015b86) form_field_slider_wide_pane_ParamLimits

0x8501,	// (0x00015b86) form_field_slider_wide_pane

0x3b28,	// (0x000111ad) data_form_pane

0x851e,	// (0x00015ba3) form_field_data_pane_t1

0x3b34,	// (0x000111b9) input_focus_pane

0x3b42,	// (0x000111c7) data_form_wide_pane

0x3b7f,	// (0x00011204) form_field_data_wide_pane_t1

0x39d6,	// (0x0001105b) input_focus_pane_cp6

0x8536,	// (0x00015bbb) form_field_popup_pane_t1

0x3b34,	// (0x000111b9) input_focus_pane_cp7

0x3ba1,	// (0x00011226) list_form_pane

0x3bb5,	// (0x0001123a) form_field_popup_wide_pane_t1

0x3b34,	// (0x000111b9) input_focus_pane_cp8

0x3bca,	// (0x0001124f) list_form_wide_pane

0x8556,	// (0x00015bdb) form_field_slider_pane_t1_ParamLimits

0x8556,	// (0x00015bdb) form_field_slider_pane_t1

0x8568,	// (0x00015bed) form_field_slider_pane_t2_ParamLimits

0x8568,	// (0x00015bed) form_field_slider_pane_t2

0x0001,

0xf647,	// (0x0001cccc) form_field_slider_pane_t_ParamLimits

0xf647,	// (0x0001cccc) form_field_slider_pane_t

0x3704,	// (0x00010d89) input_focus_pane_cp9_ParamLimits

0x3704,	// (0x00010d89) input_focus_pane_cp9

0x857a,	// (0x00015bff) slider_cont_pane_ParamLimits

0x857a,	// (0x00015bff) slider_cont_pane

0x3bd6,	// (0x0001125b) form_field_slider_wide_pane_t1_ParamLimits

0x3bd6,	// (0x0001125b) form_field_slider_wide_pane_t1

0x3be8,	// (0x0001126d) form_field_slider_wide_pane_t2_ParamLimits

0x3be8,	// (0x0001126d) form_field_slider_wide_pane_t2

0x0001,

0xf64c,	// (0x0001ccd1) form_field_slider_wide_pane_t_ParamLimits

0xf64c,	// (0x0001ccd1) form_field_slider_wide_pane_t

0x3704,	// (0x00010d89) input_focus_pane_cp10_ParamLimits

0x3704,	// (0x00010d89) input_focus_pane_cp10

0x858e,	// (0x00015c13) slider_cont_pane_cp1_ParamLimits

0x858e,	// (0x00015c13) slider_cont_pane_cp1

0x85a2,	// (0x00015c27) slider_form_pane_cp

0x3bfa,	// (0x0001127f) input_focus_pane_g1

0x3c02,	// (0x00011287) input_focus_pane_g2

0x3c0a,	// (0x0001128f) input_focus_pane_g3

0x3c12,	// (0x00011297) input_focus_pane_g4

0x3c1a,	// (0x0001129f) input_focus_pane_g5

0x3c22,	// (0x000112a7) input_focus_pane_g6

0x3c2a,	// (0x000112af) input_focus_pane_g7

0x3c32,	// (0x000112b7) input_focus_pane_g8

0x3c3a,	// (0x000112bf) input_focus_pane_g9

0x366c,	// (0x00010cf1) input_focus_pane_g10

0x0009,

0xf651,	// (0x0001ccd6) input_focus_pane_g

0x9872,	// (0x00016ef7) wait_border_pane_g3_copy1

0x85aa,	// (0x00015c2f) data_form_pane_t1

0x366c,	// (0x00010cf1) wait_anim_pane_g1_copy1

0xa78e,	// (0x00017e13) data_form_wide_pane_t1

0x85c5,	// (0x00015c4a) list_form_graphic_pane_cp_ParamLimits

0x85c5,	// (0x00015c4a) list_form_graphic_pane_cp

0xa763,	// (0x00017de8) slider_form_pane_g1

0xa76c,	// (0x00017df1) slider_form_pane_g2

0x0006,

0xf954,	// (0x0001cfd9) slider_form_pane_g

0x85d9,	// (0x00015c5e) list_form_graphic_pane_ParamLimits

0x85d9,	// (0x00015c5e) list_form_graphic_pane

0x85f0,	// (0x00015c75) list_form_graphic_pane_g1

0x85f8,	// (0x00015c7d) list_form_graphic_pane_t1_ParamLimits

0x85f8,	// (0x00015c7d) list_form_graphic_pane_t1

0x3712,	// (0x00010d97) list_highlight_pane_cp5_ParamLimits

0x3712,	// (0x00010d97) list_highlight_pane_cp5

0x860d,	// (0x00015c92) find_pane_g1

0x3c42,	// (0x000112c7) input_find_pane

0x8616,	// (0x00015c9b) input_find_pane_g1_ParamLimits

0x8616,	// (0x00015c9b) input_find_pane_g1

0x8622,	// (0x00015ca7) input_find_pane_t1_ParamLimits

0x8622,	// (0x00015ca7) input_find_pane_t1

0x8637,	// (0x00015cbc) input_find_pane_t2_ParamLimits

0x8637,	// (0x00015cbc) input_find_pane_t2

0x0001,

0xf666,	// (0x0001cceb) input_find_pane_t_ParamLimits

0xf666,	// (0x0001cceb) input_find_pane_t

0x3c4b,	// (0x000112d0) input_focus_pane_cp5_ParamLimits

0x3c4b,	// (0x000112d0) input_focus_pane_cp5

0x3c5e,	// (0x000112e3) bg_popup_window_pane_cp2_ParamLimits

0x3c5e,	// (0x000112e3) bg_popup_window_pane_cp2

0x3c6b,	// (0x000112f0) listscroll_menu_pane_ParamLimits

0x3c6b,	// (0x000112f0) listscroll_menu_pane

0x8658,	// (0x00015cdd) popup_submenu_window_ParamLimits

0x8658,	// (0x00015cdd) popup_submenu_window

0x3c77,	// (0x000112fc) find_popup_pane_g1

0x8680,	// (0x00015d05) input_popup_find_pane_cp

0x3c7f,	// (0x00011304) input_focus_pane_cp4_ParamLimits

0x3c7f,	// (0x00011304) input_focus_pane_cp4

0x3c8d,	// (0x00011312) input_popup_find_pane_t1_ParamLimits

0x3c8d,	// (0x00011312) input_popup_find_pane_t1

0x3696,	// (0x00010d1b) bg_popup_sub_pane_cp

0x3cbb,	// (0x00011340) listscroll_popup_sub_pane

0x3cc3,	// (0x00011348) list_submenu_pane_ParamLimits

0x3cc3,	// (0x00011348) list_submenu_pane

0x3cd4,	// (0x00011359) scroll_pane_cp4

0x8698,	// (0x00015d1d) list_single_popup_submenu_pane_ParamLimits

0x8698,	// (0x00015d1d) list_single_popup_submenu_pane

0x3e48,	// (0x000114cd) list_single_popup_submenu_pane_g1

0x86ac,	// (0x00015d31) list_single_popup_submenu_pane_t1_ParamLimits

0x86ac,	// (0x00015d31) list_single_popup_submenu_pane_t1

0x3712,	// (0x00010d97) bg_active_tab_pane_cp1_ParamLimits

0x3712,	// (0x00010d97) bg_active_tab_pane_cp1

0x3cdc,	// (0x00011361) tabs_2_active_pane_g1

0x86c1,	// (0x00015d46) tabs_2_active_pane_t1

0x3712,	// (0x00010d97) bg_passive_tab_pane_cp1_ParamLimits

0x3712,	// (0x00010d97) bg_passive_tab_pane_cp1

0x3cdc,	// (0x00011361) tabs_2_passive_pane_g1

0x86c1,	// (0x00015d46) tabs_2_passive_pane_t1

0x86d3,	// (0x00015d58) bg_active_tab_pane_cp4

0x86e1,	// (0x00015d66) tabs_2_long_active_pane_t1

0x86f4,	// (0x00015d79) bg_passive_tab_pane_cp4

0x65c3,	// (0x00013c48) list_single_midp_graphic_pane_g4_ParamLimits

0x86d3,	// (0x00015d58) bg_active_tab_pane_cp5

0x8700,	// (0x00015d85) tabs_3_long_active_pane_t1

0x86f4,	// (0x00015d79) bg_passive_tab_pane_cp5

0x65c3,	// (0x00013c48) list_single_midp_graphic_pane_g4

0x3712,	// (0x00010d97) bg_popup_window_pane_cp13_ParamLimits

0x3712,	// (0x00010d97) bg_popup_window_pane_cp13

0x3ce4,	// (0x00011369) listscroll_popup_fast_pane_ParamLimits

0x3ce4,	// (0x00011369) listscroll_popup_fast_pane

0x3cf0,	// (0x00011375) grid_popup_fast_pane_ParamLimits

0x3cf0,	// (0x00011375) grid_popup_fast_pane

0x3d02,	// (0x00011387) scroll_pane_cp9_ParamLimits

0x3d02,	// (0x00011387) scroll_pane_cp9

0xc6cb,	// (0x00019d50) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc6cb,	// (0x00019d50) list_single_graphic_hl_pane_t1_cp2

0x3d15,	// (0x0001139a) input_focus_pane_cp20_ParamLimits

0x3d15,	// (0x0001139a) input_focus_pane_cp20

0x3d23,	// (0x000113a8) query_popup_data_pane_t1_ParamLimits

0x3d23,	// (0x000113a8) query_popup_data_pane_t1

0x3d36,	// (0x000113bb) query_popup_data_pane_t2_ParamLimits

0x3d36,	// (0x000113bb) query_popup_data_pane_t2

0x3d7c,	// (0x00011401) query_popup_data_pane_t3_ParamLimits

0x3d7c,	// (0x00011401) query_popup_data_pane_t3

0x3dbd,	// (0x00011442) query_popup_data_pane_t4_ParamLimits

0x3dbd,	// (0x00011442) query_popup_data_pane_t4

0x3df9,	// (0x0001147e) query_popup_data_pane_t5_ParamLimits

0x3df9,	// (0x0001147e) query_popup_data_pane_t5

0x0004,

0xf66b,	// (0x0001ccf0) query_popup_data_pane_t_ParamLimits

0xf66b,	// (0x0001ccf0) query_popup_data_pane_t

0x3bfa,	// (0x0001127f) bg_set_opt_pane_g1

0x3c02,	// (0x00011287) bg_set_opt_pane_g2

0x3c0a,	// (0x0001128f) bg_set_opt_pane_g3

0x3c12,	// (0x00011297) bg_set_opt_pane_g4

0x3c1a,	// (0x0001129f) bg_set_opt_pane_g5

0x3c22,	// (0x000112a7) bg_set_opt_pane_g6

0x3c2a,	// (0x000112af) bg_set_opt_pane_g7

0x3c32,	// (0x000112b7) bg_set_opt_pane_g8

0x3c3a,	// (0x000112bf) bg_set_opt_pane_g9

0x0008,

0xf676,	// (0x0001ccfb) bg_set_opt_pane_g

0x5bd3,	// (0x00013258) control_top_pane_stacon_ParamLimits

0x5bd3,	// (0x00013258) control_top_pane_stacon

0x5c26,	// (0x000132ab) signal_pane_stacon_ParamLimits

0x5c26,	// (0x000132ab) signal_pane_stacon

0x4492,	// (0x00011b17) stacon_top_pane_g1_ParamLimits

0x4492,	// (0x00011b17) stacon_top_pane_g1

0x5c4b,	// (0x000132d0) title_pane_stacon_ParamLimits

0x5c4b,	// (0x000132d0) title_pane_stacon

0x5c75,	// (0x000132fa) uni_indicator_pane_stacon_ParamLimits

0x5c75,	// (0x000132fa) uni_indicator_pane_stacon

0x5c8a,	// (0x0001330f) battery_pane_stacon_ParamLimits

0x5c8a,	// (0x0001330f) battery_pane_stacon

0x5cce,	// (0x00013353) control_bottom_pane_stacon_ParamLimits

0x5cce,	// (0x00013353) control_bottom_pane_stacon

0x5cf1,	// (0x00013376) navi_pane_stacon_ParamLimits

0x5cf1,	// (0x00013376) navi_pane_stacon

0x457d,	// (0x00011c02) stacon_bottom_pane_g1_ParamLimits

0x457d,	// (0x00011c02) stacon_bottom_pane_g1

0x593f,	// (0x00012fc4) aid_levels_signal_lsc_ParamLimits

0x593f,	// (0x00012fc4) aid_levels_signal_lsc

0x5955,	// (0x00012fda) signal_pane_stacon_g1_ParamLimits

0x5955,	// (0x00012fda) signal_pane_stacon_g1

0x5969,	// (0x00012fee) signal_pane_stacon_g2_ParamLimits

0x5969,	// (0x00012fee) signal_pane_stacon_g2

0x0001,

0xf689,	// (0x0001cd0e) signal_pane_stacon_g_ParamLimits

0xf689,	// (0x0001cd0e) signal_pane_stacon_g

0x599e,	// (0x00013023) title_pane_stacon_t1_ParamLimits

0x599e,	// (0x00013023) title_pane_stacon_t1

0x3f0d,	// (0x00011592) uni_indicator_pane_stacon_g1

0x3f17,	// (0x0001159c) uni_indicator_pane_stacon_g2

0x3ef9,	// (0x0001157e) uni_indicator_pane_stacon_g3

0x3f03,	// (0x00011588) uni_indicator_pane_stacon_g4

0x0003,

0xf695,	// (0x0001cd1a) uni_indicator_pane_stacon_g

0x59c3,	// (0x00013048) control_top_pane_stacon_g1

0x59cb,	// (0x00013050) control_top_pane_stacon_t1_ParamLimits

0x59cb,	// (0x00013050) control_top_pane_stacon_t1

0x5a02,	// (0x00013087) aid_levels_battery_lsc_ParamLimits

0x5a02,	// (0x00013087) aid_levels_battery_lsc

0x5a19,	// (0x0001309e) battery_pane_stacon_g1_ParamLimits

0x5a19,	// (0x0001309e) battery_pane_stacon_g1

0x5a2c,	// (0x000130b1) battery_pane_stacon_g2_ParamLimits

0x5a2c,	// (0x000130b1) battery_pane_stacon_g2

0x0001,

0xf69e,	// (0x0001cd23) battery_pane_stacon_g_ParamLimits

0xf69e,	// (0x0001cd23) battery_pane_stacon_g

0x5a6a,	// (0x000130ef) navi_icon_pane_stacon

0x5a7e,	// (0x00013103) navi_navi_pane_stacon

0x5a6a,	// (0x000130ef) navi_text_pane_stacon

0x59c3,	// (0x00013048) control_bottom_pane_stacon_g1

0x5a92,	// (0x00013117) control_bottom_pane_stacon_t1_ParamLimits

0x5a92,	// (0x00013117) control_bottom_pane_stacon_t1

0x872c,	// (0x00015db1) grid_app_pane_ParamLimits

0x872c,	// (0x00015db1) grid_app_pane

0x874e,	// (0x00015dd3) scroll_pane_cp15_ParamLimits

0x874e,	// (0x00015dd3) scroll_pane_cp15

0x8761,	// (0x00015de6) cell_app_pane_ParamLimits

0x8761,	// (0x00015de6) cell_app_pane

0x8789,	// (0x00015e0e) cell_app_pane_g1_ParamLimits

0x8789,	// (0x00015e0e) cell_app_pane_g1

0x4041,	// (0x000116c6) cell_app_pane_g2_ParamLimits

0x4041,	// (0x000116c6) cell_app_pane_g2

0x0001,

0xf6a3,	// (0x0001cd28) cell_app_pane_g_ParamLimits

0xf6a3,	// (0x0001cd28) cell_app_pane_g

0x87ad,	// (0x00015e32) cell_app_pane_t1_ParamLimits

0x87ad,	// (0x00015e32) cell_app_pane_t1

0x404d,	// (0x000116d2) grid_highlight_pane_ParamLimits

0x404d,	// (0x000116d2) grid_highlight_pane

0x3bfa,	// (0x0001127f) cell_highlight_pane_g1

0x3c02,	// (0x00011287) cell_highlight_pane_g2

0x3c0a,	// (0x0001128f) cell_highlight_pane_g3

0x3c12,	// (0x00011297) cell_highlight_pane_g4

0x3c1a,	// (0x0001129f) cell_highlight_pane_g5

0x3c22,	// (0x000112a7) cell_highlight_pane_g6

0x3c2a,	// (0x000112af) cell_highlight_pane_g7

0x3c32,	// (0x000112b7) cell_highlight_pane_g8

0x3c3a,	// (0x000112bf) cell_highlight_pane_g9

0x366c,	// (0x00010cf1) cell_highlight_pane_g10

0x0009,

0xf651,	// (0x0001ccd6) cell_highlight_pane_g

0x4068,	// (0x000116ed) bg_scroll_pane

0x5adc,	// (0x00013161) scroll_handle_pane

0x40c4,	// (0x00011749) scroll_bg_pane_g1

0x40d9,	// (0x0001175e) scroll_bg_pane_g2

0x40f1,	// (0x00011776) scroll_bg_pane_g3

0x0002,

0xf6a8,	// (0x0001cd2d) scroll_bg_pane_g

0x87c4,	// (0x00015e49) scroll_handle_focus_pane_ParamLimits

0x87c4,	// (0x00015e49) scroll_handle_focus_pane

0x40c4,	// (0x00011749) scroll_handle_pane_g1

0x4106,	// (0x0001178b) scroll_handle_pane_g2

0x40f1,	// (0x00011776) scroll_handle_pane_g3

0x0002,

0xf6af,	// (0x0001cd34) scroll_handle_pane_g

0x3c7f,	// (0x00011304) bg_popup_sub_pane_cp21_ParamLimits

0x3c7f,	// (0x00011304) bg_popup_sub_pane_cp21

0x87d1,	// (0x00015e56) popup_fep_japan_predictive_window_t1_ParamLimits

0x87d1,	// (0x00015e56) popup_fep_japan_predictive_window_t1

0x87eb,	// (0x00015e70) popup_fep_japan_predictive_window_t2_ParamLimits

0x87eb,	// (0x00015e70) popup_fep_japan_predictive_window_t2

0x881e,	// (0x00015ea3) popup_fep_japan_predictive_window_t3_ParamLimits

0x881e,	// (0x00015ea3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6b6,	// (0x0001cd3b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6b6,	// (0x0001cd3b) popup_fep_japan_predictive_window_t

0x3696,	// (0x00010d1b) bg_popup_sub_pane_cp23

0x43fa,	// (0x00011a7f) listscroll_japin_cand_pane

0x411a,	// (0x0001179f) popup_fep_japan_candidate_window_t1

0x4128,	// (0x000117ad) candidate_pane_ParamLimits

0x4128,	// (0x000117ad) candidate_pane

0x8855,	// (0x00015eda) scroll_pane_cp30

0x413a,	// (0x000117bf) list_single_popup_jap_candidate_pane_ParamLimits

0x413a,	// (0x000117bf) list_single_popup_jap_candidate_pane

0x3696,	// (0x00010d1b) list_highlight_pane_cp30

0x414f,	// (0x000117d4) list_single_popup_jap_candidate_pane_t1

0x415e,	// (0x000117e3) level_1_signal

0x416b,	// (0x000117f0) level_2_signal

0x4178,	// (0x000117fd) level_3_signal

0x4185,	// (0x0001180a) level_4_signal

0x4192,	// (0x00011817) level_5_signal

0x419f,	// (0x00011824) level_6_signal

0x41ac,	// (0x00011831) level_7_signal

0x415e,	// (0x000117e3) level_1_battery

0x416b,	// (0x000117f0) level_2_battery

0x4178,	// (0x000117fd) level_3_battery

0x4185,	// (0x0001180a) level_4_battery

0x4192,	// (0x00011817) level_5_battery

0x419f,	// (0x00011824) level_6_battery

0x41ac,	// (0x00011831) level_7_battery

0x41f0,	// (0x00011875) list_menu_pane_ParamLimits

0x41f0,	// (0x00011875) list_menu_pane

0x4206,	// (0x0001188b) scroll_pane_cp25_ParamLimits

0x4206,	// (0x0001188b) scroll_pane_cp25

0x421f,	// (0x000118a4) list_double2_graphic_pane_cp2_ParamLimits

0x421f,	// (0x000118a4) list_double2_graphic_pane_cp2

0x421f,	// (0x000118a4) list_double2_large_graphic_pane_cp2_ParamLimits

0x421f,	// (0x000118a4) list_double2_large_graphic_pane_cp2

0x421f,	// (0x000118a4) list_double2_pane_cp2_ParamLimits

0x421f,	// (0x000118a4) list_double2_pane_cp2

0x421f,	// (0x000118a4) list_double_graphic_pane_cp2_ParamLimits

0x421f,	// (0x000118a4) list_double_graphic_pane_cp2

0x421f,	// (0x000118a4) list_double_large_graphic_pane_cp2_ParamLimits

0x421f,	// (0x000118a4) list_double_large_graphic_pane_cp2

0x421f,	// (0x000118a4) list_double_number_pane_cp2_ParamLimits

0x421f,	// (0x000118a4) list_double_number_pane_cp2

0x421f,	// (0x000118a4) list_double_pane_cp2_ParamLimits

0x421f,	// (0x000118a4) list_double_pane_cp2

0x8871,	// (0x00015ef6) list_single_2graphic_pane_cp2_ParamLimits

0x8871,	// (0x00015ef6) list_single_2graphic_pane_cp2

0x8871,	// (0x00015ef6) list_single_graphic_heading_pane_cp2_ParamLimits

0x8871,	// (0x00015ef6) list_single_graphic_heading_pane_cp2

0x8871,	// (0x00015ef6) list_single_graphic_pane_cp2_ParamLimits

0x8871,	// (0x00015ef6) list_single_graphic_pane_cp2

0x8871,	// (0x00015ef6) list_single_heading_pane_cp2_ParamLimits

0x8871,	// (0x00015ef6) list_single_heading_pane_cp2

0x422f,	// (0x000118b4) list_single_large_graphic_pane_cp2_ParamLimits

0x422f,	// (0x000118b4) list_single_large_graphic_pane_cp2

0x8871,	// (0x00015ef6) list_single_number_heading_pane_cp2_ParamLimits

0x8871,	// (0x00015ef6) list_single_number_heading_pane_cp2

0x8871,	// (0x00015ef6) list_single_number_pane_cp2_ParamLimits

0x8871,	// (0x00015ef6) list_single_number_pane_cp2

0x8887,	// (0x00015f0c) list_single_pane_cp2_ParamLimits

0x8887,	// (0x00015f0c) list_single_pane_cp2

0x42a4,	// (0x00011929) bg_popup_sub_pane_cp22

0x5b8b,	// (0x00013210) popup_side_volume_key_window_g1

0x5baf,	// (0x00013234) popup_side_volume_key_window_t1

0x5bcb,	// (0x00013250) volume_small_pane_cp1

0x3704,	// (0x00010d89) bg_popup_sub_pane_cp24_ParamLimits

0x3704,	// (0x00010d89) bg_popup_sub_pane_cp24

0x42d4,	// (0x00011959) fep_china_uni_candidate_pane_ParamLimits

0x42d4,	// (0x00011959) fep_china_uni_candidate_pane

0x42e8,	// (0x0001196d) fep_china_uni_entry_pane

0x42f8,	// (0x0001197d) popup_fep_china_uni_window_g1

0x88f8,	// (0x00015f7d) fep_china_uni_entry_pane_g1

0x8900,	// (0x00015f85) fep_china_uni_entry_pane_g2

0x0001,

0xf6e7,	// (0x0001cd6c) fep_china_uni_entry_pane_g

0x4314,	// (0x00011999) fep_entry_item_pane

0x431e,	// (0x000119a3) fep_candidate_item_pane

0x8908,	// (0x00015f8d) fep_china_uni_candidate_pane_g1

0x4326,	// (0x000119ab) fep_china_uni_candidate_pane_g2

0x432e,	// (0x000119b3) fep_china_uni_candidate_pane_g3

0x8910,	// (0x00015f95) fep_china_uni_candidate_pane_g4

0x0003,

0xf6ec,	// (0x0001cd71) fep_china_uni_candidate_pane_g

0x366c,	// (0x00010cf1) fep_entry_item_pane_g1

0x4336,	// (0x000119bb) fep_entry_item_pane_t1_ParamLimits

0x4336,	// (0x000119bb) fep_entry_item_pane_t1

0x434c,	// (0x000119d1) fep_candidate_item_pane_t1_ParamLimits

0x434c,	// (0x000119d1) fep_candidate_item_pane_t1

0x4361,	// (0x000119e6) fep_candidate_item_pane_t2_ParamLimits

0x4361,	// (0x000119e6) fep_candidate_item_pane_t2

0x0001,

0xf6f5,	// (0x0001cd7a) fep_candidate_item_pane_t_ParamLimits

0xf6f5,	// (0x0001cd7a) fep_candidate_item_pane_t

0x3712,	// (0x00010d97) list_highlight_pane_cp31_ParamLimits

0x3712,	// (0x00010d97) list_highlight_pane_cp31

0x4373,	// (0x000119f8) level_1_signal_lsc

0x437c,	// (0x00011a01) level_2_signal_lsc

0x4385,	// (0x00011a0a) level_3_signal_lsc

0x438e,	// (0x00011a13) level_4_signal_lsc

0x4397,	// (0x00011a1c) level_5_signal_lsc

0x43a0,	// (0x00011a25) level_6_signal_lsc

0x43a9,	// (0x00011a2e) level_7_signal_lsc

0x43a9,	// (0x00011a2e) level_1_battery_lsc

0x43b2,	// (0x00011a37) level_2_battery_lsc

0x43bb,	// (0x00011a40) level_3_battery_lsc

0x43c4,	// (0x00011a49) level_4_battery_lsc

0x43cd,	// (0x00011a52) level_5_battery_lsc

0x43d6,	// (0x00011a5b) level_6_battery_lsc

0x4373,	// (0x000119f8) level_7_battery_lsc

0x43df,	// (0x00011a64) scroll_handle_focus_pane_g1

0x43e8,	// (0x00011a6d) scroll_handle_focus_pane_g2

0x43f1,	// (0x00011a76) scroll_handle_focus_pane_g3

0x0002,

0xf6fa,	// (0x0001cd7f) scroll_handle_focus_pane_g

0x8918,	// (0x00015f9d) list_single_2graphic_pane_g1_ParamLimits

0x8918,	// (0x00015f9d) list_single_2graphic_pane_g1

0x8188,	// (0x0001580d) list_single_2graphic_pane_g2_ParamLimits

0x8188,	// (0x0001580d) list_single_2graphic_pane_g2

0x3e3c,	// (0x000114c1) list_single_2graphic_pane_g3_ParamLimits

0x3e3c,	// (0x000114c1) list_single_2graphic_pane_g3

0x8924,	// (0x00015fa9) list_single_2graphic_pane_g4_ParamLimits

0x8924,	// (0x00015fa9) list_single_2graphic_pane_g4

0x0003,

0xf701,	// (0x0001cd86) list_single_2graphic_pane_g_ParamLimits

0xf701,	// (0x0001cd86) list_single_2graphic_pane_g

0x8935,	// (0x00015fba) list_single_2graphic_pane_t1_ParamLimits

0x8935,	// (0x00015fba) list_single_2graphic_pane_t1

0x8963,	// (0x00015fe8) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8963,	// (0x00015fe8) list_double2_graphic_large_graphic_pane_g1

0x8209,	// (0x0001588e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8209,	// (0x0001588e) list_double2_graphic_large_graphic_pane_g2

0x821a,	// (0x0001589f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x821a,	// (0x0001589f) list_double2_graphic_large_graphic_pane_g3

0x8973,	// (0x00015ff8) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8973,	// (0x00015ff8) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf70a,	// (0x0001cd8f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf70a,	// (0x0001cd8f) list_double2_graphic_large_graphic_pane_g

0x897f,	// (0x00016004) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x897f,	// (0x00016004) list_double2_graphic_large_graphic_pane_t1

0x8995,	// (0x0001601a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8995,	// (0x0001601a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf713,	// (0x0001cd98) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf713,	// (0x0001cd98) list_double2_graphic_large_graphic_pane_t

0x8a38,	// (0x000160bd) popup_fast_swap_window_ParamLimits

0x8a38,	// (0x000160bd) popup_fast_swap_window

0x8a54,	// (0x000160d9) popup_side_volume_key_window

0x4608,	// (0x00011c8d) stacon_top_pane

0x4612,	// (0x00011c97) status_pane_ParamLimits

0x4612,	// (0x00011c97) status_pane

0x3662,	// (0x00010ce7) status_small_pane

0x3696,	// (0x00010d1b) control_pane

0x3696,	// (0x00010d1b) stacon_bottom_pane

0x3af4,	// (0x00011179) scroll_pane_cp121

0x3aeb,	// (0x00011170) set_content_pane

0x89a7,	// (0x0001602c) bg_active_tab_pane_g1_cp1

0x89b0,	// (0x00016035) bg_active_tab_pane_g2_cp1

0x89b9,	// (0x0001603e) bg_active_tab_pane_g3_cp1

0x89a7,	// (0x0001602c) bg_passive_tab_pane_g1_cp1

0x89b0,	// (0x00016035) bg_passive_tab_pane_g2_cp1

0x89b9,	// (0x0001603e) bg_passive_tab_pane_g3_cp1

0x89c2,	// (0x00016047) bg_active_tab_pane_g1_cp2

0x89b0,	// (0x00016035) bg_active_tab_pane_g2_cp2

0x89cb,	// (0x00016050) bg_active_tab_pane_g3_cp2

0x89c2,	// (0x00016047) bg_passive_tab_pane_g1_cp2

0x89b0,	// (0x00016035) bg_passive_tab_pane_g2_cp2

0x89cb,	// (0x00016050) bg_passive_tab_pane_g3_cp2

0x89d4,	// (0x00016059) bg_active_tab_pane_g1_cp3

0x89b0,	// (0x00016035) bg_active_tab_pane_g2_cp3

0x89dd,	// (0x00016062) bg_active_tab_pane_g3_cp3

0x89d4,	// (0x00016059) bg_passive_tab_pane_g1_cp3

0x89b0,	// (0x00016035) bg_passive_tab_pane_g2_cp3

0x89dd,	// (0x00016062) bg_passive_tab_pane_g3_cp3

0x89e6,	// (0x0001606b) bg_active_tab_pane_g1_cp4

0x89b0,	// (0x00016035) bg_active_tab_pane_g2_cp4

0x89f1,	// (0x00016076) bg_active_tab_pane_g3_cp4

0x89e6,	// (0x0001606b) bg_passive_tab_pane_g1_cp4

0x89b0,	// (0x00016035) bg_passive_tab_pane_g2_cp4

0x89f1,	// (0x00016076) bg_passive_tab_pane_g3_cp4

0x89fc,	// (0x00016081) bg_active_tab_pane_g1_cp5

0x89b0,	// (0x00016035) bg_active_tab_pane_g2_cp5

0x8a05,	// (0x0001608a) bg_active_tab_pane_g3_cp5

0x89fc,	// (0x00016081) bg_passive_tab_pane_g1_cp5

0x89b0,	// (0x00016035) bg_passive_tab_pane_g2_cp5

0x8a05,	// (0x0001608a) bg_passive_tab_pane_g3_cp5

0x8a0e,	// (0x00016093) list_set_graphic_pane_ParamLimits

0x8a0e,	// (0x00016093) list_set_graphic_pane

0x3696,	// (0x00010d1b) bg_set_opt_pane_cp4

0x4599,	// (0x00011c1e) list_set_graphic_pane_g1_ParamLimits

0x4599,	// (0x00011c1e) list_set_graphic_pane_g1

0x45a5,	// (0x00011c2a) list_set_graphic_pane_g2_ParamLimits

0x45a5,	// (0x00011c2a) list_set_graphic_pane_g2

0x0001,

0xf718,	// (0x0001cd9d) list_set_graphic_pane_g_ParamLimits

0xf718,	// (0x0001cd9d) list_set_graphic_pane_g

0x0009,

0xfab0,	// (0x0001d135) volume_small_pane_cp_g

0x8a2c,	// (0x000160b1) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a2c,	// (0x000160b1) list_double2_large_graphic_pane_g1_cp2

0x45c7,	// (0x00011c4c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x45c7,	// (0x00011c4c) list_double2_large_graphic_pane_g2_cp2

0x45d8,	// (0x00011c5d) list_double2_large_graphic_pane_g3_cp2

0x45e0,	// (0x00011c65) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x45e0,	// (0x00011c65) list_double2_large_graphic_pane_t1_cp2

0x45f6,	// (0x00011c7b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x45f6,	// (0x00011c7b) list_double2_large_graphic_pane_t2_cp2

0xa323,	// (0x000179a8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa323,	// (0x000179a8) list_double_large_graphic_pane_g1_cp2

0xa334,	// (0x000179b9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa334,	// (0x000179b9) list_double_large_graphic_pane_g2_cp2

0x4722,	// (0x00011da7) list_double_large_graphic_pane_g3_cp2

0xa345,	// (0x000179ca) list_double_large_graphic_pane_g4_cp

0xa34d,	// (0x000179d2) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa34d,	// (0x000179d2) list_double_large_graphic_pane_t1_cp2

0xa364,	// (0x000179e9) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa364,	// (0x000179e9) list_double_large_graphic_pane_t2_cp2

0x4620,	// (0x00011ca5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4620,	// (0x00011ca5) list_double2_graphic_pane_g1_cp2

0x462e,	// (0x00011cb3) list_double2_graphic_pane_g2_cp2_ParamLimits

0x462e,	// (0x00011cb3) list_double2_graphic_pane_g2_cp2

0x463f,	// (0x00011cc4) list_double2_graphic_pane_g3_cp2

0x4649,	// (0x00011cce) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4649,	// (0x00011cce) list_double2_graphic_pane_t1_cp2

0x465f,	// (0x00011ce4) list_double2_graphic_pane_t2_cp2_ParamLimits

0x465f,	// (0x00011ce4) list_double2_graphic_pane_t2_cp2

0x440e,	// (0x00011a93) list_single_number_heading_pane_g1_cp2_ParamLimits

0x440e,	// (0x00011a93) list_single_number_heading_pane_g1_cp2

0x4671,	// (0x00011cf6) list_single_number_heading_pane_g2_cp2

0x4679,	// (0x00011cfe) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4679,	// (0x00011cfe) list_single_number_heading_pane_t1_cp2

0x468f,	// (0x00011d14) list_single_number_heading_pane_t2_cp2_ParamLimits

0x468f,	// (0x00011d14) list_single_number_heading_pane_t2_cp2

0x46a1,	// (0x00011d26) list_single_number_heading_pane_t3_cp2_ParamLimits

0x46a1,	// (0x00011d26) list_single_number_heading_pane_t3_cp2

0x440e,	// (0x00011a93) list_single_heading_pane_g1_cp2_ParamLimits

0x440e,	// (0x00011a93) list_single_heading_pane_g1_cp2

0x4671,	// (0x00011cf6) list_single_heading_pane_g2_cp2

0x4679,	// (0x00011cfe) list_single_heading_pane_t1_cp2_ParamLimits

0x4679,	// (0x00011cfe) list_single_heading_pane_t1_cp2

0xa12d,	// (0x000177b2) list_single_heading_pane_t2_cp2_ParamLimits

0xa12d,	// (0x000177b2) list_single_heading_pane_t2_cp2

0xa075,	// (0x000176fa) list_double_graphic_pane_g1_cp2_ParamLimits

0xa075,	// (0x000176fa) list_double_graphic_pane_g1_cp2

0xa081,	// (0x00017706) list_double_graphic_pane_g2_cp2_ParamLimits

0xa081,	// (0x00017706) list_double_graphic_pane_g2_cp2

0xa090,	// (0x00017715) list_double_graphic_pane_g3_cp2

0xa098,	// (0x0001771d) list_double_graphic_pane_t1_cp2_ParamLimits

0xa098,	// (0x0001771d) list_double_graphic_pane_t1_cp2

0xa0ae,	// (0x00017733) list_double_graphic_pane_t2_cp2_ParamLimits

0xa0ae,	// (0x00017733) list_double_graphic_pane_t2_cp2

0x4716,	// (0x00011d9b) list_double_number_pane_g1_cp2_ParamLimits

0x4716,	// (0x00011d9b) list_double_number_pane_g1_cp2

0x4722,	// (0x00011da7) list_double_number_pane_g2_cp2

0xa039,	// (0x000176be) list_double_number_pane_t1_cp2_ParamLimits

0xa039,	// (0x000176be) list_double_number_pane_t1_cp2

0xa04d,	// (0x000176d2) list_double_number_pane_t2_cp2_ParamLimits

0xa04d,	// (0x000176d2) list_double_number_pane_t2_cp2

0xa063,	// (0x000176e8) list_double_number_pane_t3_cp2_ParamLimits

0xa063,	// (0x000176e8) list_double_number_pane_t3_cp2

0x9f22,	// (0x000175a7) list_single_graphic_pane_g1_cp2_ParamLimits

0x9f22,	// (0x000175a7) list_single_graphic_pane_g1_cp2

0x4402,	// (0x00011a87) list_single_graphic_pane_g2_cp2_ParamLimits

0x4402,	// (0x00011a87) list_single_graphic_pane_g2_cp2

0x477f,	// (0x00011e04) list_single_graphic_pane_g3_cp2

0x9ef8,	// (0x0001757d) list_single_graphic_pane_t1_cp2_ParamLimits

0x9ef8,	// (0x0001757d) list_single_graphic_pane_t1_cp2

0x4402,	// (0x00011a87) list_single_number_pane_g1_cp2_ParamLimits

0x4402,	// (0x00011a87) list_single_number_pane_g1_cp2

0x477f,	// (0x00011e04) list_single_number_pane_g2_cp2

0x9ef8,	// (0x0001757d) list_single_number_pane_t1_cp2_ParamLimits

0x9ef8,	// (0x0001757d) list_single_number_pane_t1_cp2

0x9f0e,	// (0x00017593) list_single_number_pane_t2_cp2_ParamLimits

0x9f0e,	// (0x00017593) list_single_number_pane_t2_cp2

0x45c7,	// (0x00011c4c) list_double2_pane_g1_cp2_ParamLimits

0x45c7,	// (0x00011c4c) list_double2_pane_g1_cp2

0x45d8,	// (0x00011c5d) list_double2_pane_g2_cp2

0x46ee,	// (0x00011d73) list_double2_pane_t1_cp2_ParamLimits

0x46ee,	// (0x00011d73) list_double2_pane_t1_cp2

0x4704,	// (0x00011d89) list_double2_pane_t2_cp2_ParamLimits

0x4704,	// (0x00011d89) list_double2_pane_t2_cp2

0x4716,	// (0x00011d9b) list_double_pane_g1_cp2_ParamLimits

0x4716,	// (0x00011d9b) list_double_pane_g1_cp2

0x4722,	// (0x00011da7) list_double_pane_g2_cp2

0x472a,	// (0x00011daf) list_double_pane_t1_cp2_ParamLimits

0x472a,	// (0x00011daf) list_double_pane_t1_cp2

0x4740,	// (0x00011dc5) list_double_pane_t2_cp2_ParamLimits

0x4740,	// (0x00011dc5) list_double_pane_t2_cp2

0x8a6e,	// (0x000160f3) list_single_pane_cp2_g3

0x4402,	// (0x00011a87) list_single_pane_g1_cp2_ParamLimits

0x4402,	// (0x00011a87) list_single_pane_g1_cp2

0x477f,	// (0x00011e04) list_single_pane_g2_cp2

0x4787,	// (0x00011e0c) list_single_pane_t1_cp2_ParamLimits

0x4787,	// (0x00011e0c) list_single_pane_t1_cp2

0x8a76,	// (0x000160fb) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a76,	// (0x000160fb) list_single_large_graphic_pane_g1_cp2

0x479f,	// (0x00011e24) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x479f,	// (0x00011e24) list_single_large_graphic_pane_g2_cp2

0x47ab,	// (0x00011e30) list_single_large_graphic_pane_g3_cp2

0x8a82,	// (0x00016107) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8a82,	// (0x00016107) list_single_large_graphic_pane_g4_cp1

0x47b3,	// (0x00011e38) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x47b3,	// (0x00011e38) list_single_large_graphic_pane_t1_cp2

0x9ec4,	// (0x00017549) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9ec4,	// (0x00017549) list_single_graphic_heading_pane_g1_cp2

0x9e91,	// (0x00017516) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9e91,	// (0x00017516) list_single_graphic_heading_pane_g4_cp2

0x477f,	// (0x00011e04) list_single_graphic_heading_pane_g5_cp2

0x9ed0,	// (0x00017555) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9ed0,	// (0x00017555) list_single_graphic_heading_pane_t1_cp2

0x9ee6,	// (0x0001756b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9ee6,	// (0x0001756b) list_single_graphic_heading_pane_t2_cp2

0x9e85,	// (0x0001750a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9e85,	// (0x0001750a) list_single_2graphic_pane_g1_cp2

0x9e91,	// (0x00017516) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9e91,	// (0x00017516) list_single_2graphic_pane_g2_cp2

0x477f,	// (0x00011e04) list_single_2graphic_pane_g3_cp2

0x9ea2,	// (0x00017527) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9ea2,	// (0x00017527) list_single_2graphic_pane_g4_cp2

0x9eae,	// (0x00017533) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9eae,	// (0x00017533) list_single_2graphic_pane_t1_cp2

0x366c,	// (0x00010cf1) list_highlight_pane_g10_cp1

0x9a6d,	// (0x000170f2) list_highlight_pane_g1_cp1

0x9a75,	// (0x000170fa) list_highlight_pane_g2_cp1

0x9a7d,	// (0x00017102) list_highlight_pane_g3_cp1

0x9a85,	// (0x0001710a) list_highlight_pane_g4_cp1

0x9a8d,	// (0x00017112) list_highlight_pane_g5_cp1

0x9a95,	// (0x0001711a) list_highlight_pane_g6_cp1

0x9a9d,	// (0x00017122) list_highlight_pane_g7_cp1

0x9aa5,	// (0x0001712a) list_highlight_pane_g8_cp1

0x9aad,	// (0x00017132) list_highlight_pane_g9_cp1

0x9995,	// (0x0001701a) form_field_slider_pane_t3

0x99a3,	// (0x00017028) form_field_slider_pane_t4

0x99b1,	// (0x00017036) slider_form_pane_ParamLimits

0x99b1,	// (0x00017036) slider_form_pane

0x3696,	// (0x00010d1b) control_abbreviations

0x3696,	// (0x00010d1b) control_conventions

0x3696,	// (0x00010d1b) control_definitions

0x3696,	// (0x00010d1b) format_table_attribute

0xa177,	// (0x000177fc) bg_popup_preview_window_pane_g9

0x3696,	// (0x00010d1b) format_table_data2

0x3696,	// (0x00010d1b) format_table_data3

0x3696,	// (0x00010d1b) format_table_data_example

0x0008,

0x3696,	// (0x00010d1b) intro_purpose

0xf8b4,	// (0x0001cf39) bg_popup_preview_window_pane_g

0x3696,	// (0x00010d1b) texts_category

0x3696,	// (0x00010d1b) texts_graphics

0x47c9,	// (0x00011e4e) text_digital

0x47d8,	// (0x00011e5d) text_primary

0x47e7,	// (0x00011e6c) text_primary_small

0x47f6,	// (0x00011e7b) text_secondary

0x4805,	// (0x00011e8a) text_title

0xa974,	// (0x00017ff9) bg_passive_tab_pane_g1_cp3_srt

0x89b0,	// (0x00016035) bg_passive_tab_pane_g2_cp3_srt

0xa97d,	// (0x00018002) bg_passive_tab_pane_g3_cp3_srt

0x3712,	// (0x00010d97) bg_active_tab_pane_cp3_srt_ParamLimits

0x3712,	// (0x00010d97) bg_active_tab_pane_cp3_srt

0xa986,	// (0x0001800b) tabs_4_active_pane_srt_g1

0xa98e,	// (0x00018013) tabs_4_active_pane_srt_t1_ParamLimits

0xa98e,	// (0x00018013) tabs_4_active_pane_srt_t1

0xa974,	// (0x00017ff9) bg_active_tab_pane_g1_cp3_copy1

0x89b0,	// (0x00016035) bg_active_tab_pane_g2_cp3_copy1

0xa97d,	// (0x00018002) bg_active_tab_pane_g3_cp3_copy1

0x3712,	// (0x00010d97) tabs_2_long_active_pane_srt_ParamLimits

0x3712,	// (0x00010d97) tabs_2_long_active_pane_srt

0x3712,	// (0x00010d97) tabs_2_long_passive_pane_srt_ParamLimits

0x3712,	// (0x00010d97) tabs_2_long_passive_pane_srt

0x86f4,	// (0x00015d79) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86f4,	// (0x00015d79) bg_passive_tab_pane_cp4_srt

0xa59a,	// (0x00017c1f) bg_passive_tab_pane_g1_cp4_srt

0x89b0,	// (0x00016035) bg_passive_tab_pane_g2_cp4_srt

0xa5a3,	// (0x00017c28) bg_passive_tab_pane_g3_cp4_srt

0x86d3,	// (0x00015d58) bg_active_tab_pane_cp4_srt_ParamLimits

0x86d3,	// (0x00015d58) bg_active_tab_pane_cp4_srt

0xa5ac,	// (0x00017c31) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa5ac,	// (0x00017c31) tabs_2_long_active_pane_srt_t1

0xa59a,	// (0x00017c1f) bg_active_tab_pane_g1_cp4_srt

0x89b0,	// (0x00016035) bg_active_tab_pane_g2_cp4_srt

0xa5a3,	// (0x00017c28) bg_active_tab_pane_g3_cp4_srt

0x3704,	// (0x00010d89) tabs_3_long_active_pane_srt_ParamLimits

0x3704,	// (0x00010d89) tabs_3_long_active_pane_srt

0x3704,	// (0x00010d89) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3704,	// (0x00010d89) tabs_3_long_passive_pane_cp_srt

0x3704,	// (0x00010d89) tabs_3_long_passive_pane_srt_ParamLimits

0x3704,	// (0x00010d89) tabs_3_long_passive_pane_srt

0x86f4,	// (0x00015d79) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86f4,	// (0x00015d79) bg_passive_tab_pane_cp5_srt

0x89fc,	// (0x00016081) bg_passive_tab_pane_g1_cp5_srt

0x89b0,	// (0x00016035) bg_passive_tab_pane_g2_cp5_srt

0x8a05,	// (0x0001608a) bg_passive_tab_pane_g3_cp5_srt

0x86d3,	// (0x00015d58) bg_active_tab_pane_cp5_srt_ParamLimits

0x86d3,	// (0x00015d58) bg_active_tab_pane_cp5_srt

0xa588,	// (0x00017c0d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa588,	// (0x00017c0d) tabs_3_long_active_pane_srt_t1

0x89fc,	// (0x00016081) bg_active_tab_pane_g1_cp5_srt

0x89b0,	// (0x00016035) bg_active_tab_pane_g2_cp5_srt

0x8a05,	// (0x0001608a) bg_active_tab_pane_g3_cp5_srt

0xa57a,	// (0x00017bff) navi_text_pane_srt_t1

0xa572,	// (0x00017bf7) navi_icon_pane_srt_g1

0x4999,	// (0x0001201e) midp_editing_number_pane_srt

0x4814,	// (0x00011e99) midp_ticker_pane_srt

0x49a1,	// (0x00012026) midp_ticker_pane_srt_g1

0x49a9,	// (0x0001202e) midp_ticker_pane_srt_g2

0x0001,

0xf737,	// (0x0001cdbc) midp_ticker_pane_srt_g

0x49b1,	// (0x00012036) midp_ticker_pane_srt_t1

0xa563,	// (0x00017be8) midp_editing_number_pane_t1_copy1

0x8a9c,	// (0x00016121) listscroll_midp_pane

0x8a9c,	// (0x00016121) midp_form_pane

0x8b0e,	// (0x00016193) midp_info_popup_window_ParamLimits

0x8b0e,	// (0x00016193) midp_info_popup_window

0x3c7f,	// (0x00011304) bg_popup_sub_pane_cp50_ParamLimits

0x3c7f,	// (0x00011304) bg_popup_sub_pane_cp50

0x96a1,	// (0x00016d26) listscroll_midp_info_pane_ParamLimits

0x96a1,	// (0x00016d26) listscroll_midp_info_pane

0x9681,	// (0x00016d06) listscroll_form_midp_pane_ParamLimits

0x9681,	// (0x00016d06) listscroll_form_midp_pane

0x968d,	// (0x00016d12) scroll_bar_cp050

0x9661,	// (0x00016ce6) list_midp_pane

0xb71c,	// (0x00018da1) signal_pane_g2_cp

0x959b,	// (0x00016c20) listscroll_midp_info_pane_t1_ParamLimits

0x959b,	// (0x00016c20) listscroll_midp_info_pane_t1

0x95b3,	// (0x00016c38) listscroll_midp_info_pane_t2_ParamLimits

0x95b3,	// (0x00016c38) listscroll_midp_info_pane_t2

0x95f1,	// (0x00016c76) listscroll_midp_info_pane_t3_ParamLimits

0x95f1,	// (0x00016c76) listscroll_midp_info_pane_t3

0x962b,	// (0x00016cb0) listscroll_midp_info_pane_t4_ParamLimits

0x962b,	// (0x00016cb0) listscroll_midp_info_pane_t4

0x0003,

0xf7ef,	// (0x0001ce74) listscroll_midp_info_pane_t_ParamLimits

0xf7ef,	// (0x0001ce74) listscroll_midp_info_pane_t

0x3cd4,	// (0x00011359) scroll_pane_cp21

0x953b,	// (0x00016bc0) form_midp_field_choice_group_pane

0x9544,	// (0x00016bc9) form_midp_field_text_pane

0x9581,	// (0x00016c06) form_midp_field_time_pane

0x9589,	// (0x00016c0e) form_midp_gauge_slider_pane

0x9592,	// (0x00016c17) form_midp_gauge_wait_pane

0x3696,	// (0x00010d1b) form_midp_image_pane

0x9509,	// (0x00016b8e) list_single_midp_pane_ParamLimits

0x9509,	// (0x00016b8e) list_single_midp_pane

0x94be,	// (0x00016b43) form_midp_field_text_pane_t1

0x9279,	// (0x000168fe) input_focus_pane_cp050

0x94f8,	// (0x00016b7d) list_midp_form_text_pane

0x948d,	// (0x00016b12) form_midp_field_choice_group_pane_t1

0x949b,	// (0x00016b20) input_focus_pane_cp051

0x94af,	// (0x00016b34) list_midp_choice_pane

0x3696,	// (0x00010d1b) status_idle_pane

0x9471,	// (0x00016af6) form_midp_field_time_pane_t1

0x366c,	// (0x00010cf1) wait_anim_pane_g2_copy1

0x947f,	// (0x00016b04) form_midp_field_time_pane_t2

0x0001,

0x4874,	// (0x00011ef9) aid_navinavi_width_2_pane

0xf7ea,	// (0x0001ce6f) form_midp_field_time_pane_t

0x3696,	// (0x00010d1b) input_focus_pane_cp052

0x3696,	// (0x00010d1b) bg_input_focus_pane_cp040

0x9431,	// (0x00016ab6) form_midp_gauge_slider_pane_t1

0x943f,	// (0x00016ac4) form_midp_gauge_slider_pane_t2

0x944d,	// (0x00016ad2) form_midp_gauge_slider_pane_t3

0x945b,	// (0x00016ae0) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e1,	// (0x0001ce66) form_midp_gauge_slider_pane_t

0x9469,	// (0x00016aee) form_midp_slider_pane

0x3712,	// (0x00010d97) bg_input_focus_pane_cp041_ParamLimits

0x3712,	// (0x00010d97) bg_input_focus_pane_cp041

0x93fe,	// (0x00016a83) form_midp_gauge_wait_pane_t1_ParamLimits

0x93fe,	// (0x00016a83) form_midp_gauge_wait_pane_t1

0x9410,	// (0x00016a95) form_midp_gauge_wait_pane_t2_ParamLimits

0x9410,	// (0x00016a95) form_midp_gauge_wait_pane_t2

0x0001,

0xf7dc,	// (0x0001ce61) form_midp_gauge_wait_pane_t_ParamLimits

0xf7dc,	// (0x0001ce61) form_midp_gauge_wait_pane_t

0x9422,	// (0x00016aa7) form_midp_wait_pane_ParamLimits

0x9422,	// (0x00016aa7) form_midp_wait_pane

0x93c8,	// (0x00016a4d) form_midp_image_pane_g1

0x93d1,	// (0x00016a56) form_midp_image_pane_t1

0x93e0,	// (0x00016a65) form_midp_image_pane_t2

0x93ef,	// (0x00016a74) form_midp_image_pane_t3

0x0002,

0xf7d5,	// (0x0001ce5a) form_midp_image_pane_t

0x93b0,	// (0x00016a35) list_single_midp_pane_g1

0x93b9,	// (0x00016a3e) list_single_midp_pane_t1

0x9387,	// (0x00016a0c) list_midp_form_item_pane_ParamLimits

0x9387,	// (0x00016a0c) list_midp_form_item_pane

0x481c,	// (0x00011ea1) list_midp_form_item_pane_t1

0x482b,	// (0x00011eb0) midp_ticker_pane_g1

0x4837,	// (0x00011ebc) midp_ticker_pane_g2

0x0001,

0xf71d,	// (0x0001cda2) midp_ticker_pane_g

0x4843,	// (0x00011ec8) midp_ticker_pane_t1

0xa7cd,	// (0x00017e52) midp_editing_number_pane_t1

0xa7ab,	// (0x00017e30) midp_editing_number_pane

0xa7ba,	// (0x00017e3f) midp_ticker_pane

0x96ad,	// (0x00016d32) ai_message_heading_pane

0x3696,	// (0x00010d1b) bg_popup_window_pane_cp14

0x96b5,	// (0x00016d3a) listscroll_ai_message_pane

0xa4db,	// (0x00017b60) ai_message_heading_pane_g1_ParamLimits

0xa4db,	// (0x00017b60) ai_message_heading_pane_g1

0xa4e7,	// (0x00017b6c) ai_message_heading_pane_g2_ParamLimits

0xa4e7,	// (0x00017b6c) ai_message_heading_pane_g2

0xa4f3,	// (0x00017b78) ai_message_heading_pane_g3_ParamLimits

0xa4f3,	// (0x00017b78) ai_message_heading_pane_g3

0xa4ff,	// (0x00017b84) ai_message_heading_pane_g4_ParamLimits

0xa4ff,	// (0x00017b84) ai_message_heading_pane_g4

0x0003,

0xf916,	// (0x0001cf9b) ai_message_heading_pane_g_ParamLimits

0xf916,	// (0x0001cf9b) ai_message_heading_pane_g

0xa50b,	// (0x00017b90) ai_message_heading_pane_t1_ParamLimits

0xa50b,	// (0x00017b90) ai_message_heading_pane_t1

0xa525,	// (0x00017baa) ai_message_heading_pane_t2_ParamLimits

0xa525,	// (0x00017baa) ai_message_heading_pane_t2

0x0001,

0xf91f,	// (0x0001cfa4) ai_message_heading_pane_t_ParamLimits

0xf91f,	// (0x0001cfa4) ai_message_heading_pane_t

0xa537,	// (0x00017bbc) bg_popup_heading_pane_cp1_ParamLimits

0xa537,	// (0x00017bbc) bg_popup_heading_pane_cp1

0xa4c9,	// (0x00017b4e) list_ai_message_pane_ParamLimits

0xa4c9,	// (0x00017b4e) list_ai_message_pane

0x3cd4,	// (0x00011359) scroll_pane_cp10

0xa465,	// (0x00017aea) list_ai_message_pane_g1

0xa46d,	// (0x00017af2) list_ai_message_pane_g2

0x0001,

0xf8f3,	// (0x0001cf78) list_ai_message_pane_g

0xa475,	// (0x00017afa) list_ai_message_pane_t1_ParamLimits

0xa475,	// (0x00017afa) list_ai_message_pane_t1

0xa48a,	// (0x00017b0f) list_ai_message_pane_t2_ParamLimits

0xa48a,	// (0x00017b0f) list_ai_message_pane_t2

0xa49f,	// (0x00017b24) list_ai_message_pane_t3_ParamLimits

0xa49f,	// (0x00017b24) list_ai_message_pane_t3

0xa4b4,	// (0x00017b39) list_ai_message_pane_t4_ParamLimits

0xa4b4,	// (0x00017b39) list_ai_message_pane_t4

0x0003,

0xf8f8,	// (0x0001cf7d) list_ai_message_pane_t_ParamLimits

0xf8f8,	// (0x0001cf7d) list_ai_message_pane_t

0xa450,	// (0x00017ad5) cell_ai_soft_ind_pane_ParamLimits

0xa450,	// (0x00017ad5) cell_ai_soft_ind_pane

0x4855,	// (0x00011eda) cell_ai_soft_ind_pane_g1_ParamLimits

0x4855,	// (0x00011eda) cell_ai_soft_ind_pane_g1

0x3696,	// (0x00010d1b) grid_highlight_cp1

0x4862,	// (0x00011ee7) text_secondary_cp56_ParamLimits

0x4862,	// (0x00011ee7) text_secondary_cp56

0xa425,	// (0x00017aaa) example_general_pane_ParamLimits

0xa425,	// (0x00017aaa) example_general_pane

0xa431,	// (0x00017ab6) example_parent_pane_g1_ParamLimits

0xa431,	// (0x00017ab6) example_parent_pane_g1

0xa43d,	// (0x00017ac2) example_parent_pane_t1_ParamLimits

0xa43d,	// (0x00017ac2) example_parent_pane_t1

0x62d4,	// (0x00013959) popup_preview_text_window_ParamLimits

0x62d4,	// (0x00013959) popup_preview_text_window

0x4777,	// (0x00011dfc) list_single_pane_cp2_g4

0x38fe,	// (0x00010f83) bg_popup_preview_window_pane_ParamLimits

0x38fe,	// (0x00010f83) bg_popup_preview_window_pane

0xa17f,	// (0x00017804) popup_preview_text_window_t1_ParamLimits

0xa17f,	// (0x00017804) popup_preview_text_window_t1

0xa19d,	// (0x00017822) popup_preview_text_window_t2_ParamLimits

0xa19d,	// (0x00017822) popup_preview_text_window_t2

0xa1e6,	// (0x0001786b) popup_preview_text_window_t3_ParamLimits

0xa1e6,	// (0x0001786b) popup_preview_text_window_t3

0xa22b,	// (0x000178b0) popup_preview_text_window_t4_ParamLimits

0xa22b,	// (0x000178b0) popup_preview_text_window_t4

0x0004,

0xf8c7,	// (0x0001cf4c) popup_preview_text_window_t_ParamLimits

0xf8c7,	// (0x0001cf4c) popup_preview_text_window_t

0xa2a9,	// (0x0001792e) scroll_pane_cp11

0x9159,	// (0x000167de) bg_popup_preview_window_pane_g1

0xa13f,	// (0x000177c4) bg_popup_preview_window_pane_g2

0xa147,	// (0x000177cc) bg_popup_preview_window_pane_g3

0xa14f,	// (0x000177d4) bg_popup_preview_window_pane_g4

0xa157,	// (0x000177dc) bg_popup_preview_window_pane_g5

0xa15f,	// (0x000177e4) bg_popup_preview_window_pane_g6

0xa167,	// (0x000177ec) bg_popup_preview_window_pane_g7

0xa16f,	// (0x000177f4) bg_popup_preview_window_pane_g8

0x54c9,	// (0x00012b4e) aid_popup_width_pane

0x62b2,	// (0x00013937) popup_midp_note_alarm_window_ParamLimits

0x62b2,	// (0x00013937) popup_midp_note_alarm_window

0x3b28,	// (0x000111ad) data_form_pane_ParamLimits

0x8514,	// (0x00015b99) form_field_data_pane_g1

0x851e,	// (0x00015ba3) form_field_data_pane_t1_ParamLimits

0x3b34,	// (0x000111b9) input_focus_pane_ParamLimits

0x3b42,	// (0x000111c7) data_form_wide_pane_ParamLimits

0x3b53,	// (0x000111d8) form_field_data_wide_pane_g1

0x3b7f,	// (0x00011204) form_field_data_wide_pane_t1_ParamLimits

0x39d6,	// (0x0001105b) input_focus_pane_cp6_ParamLimits

0x868a,	// (0x00015d0f) input_popup_find_pane_g1_ParamLimits

0x868a,	// (0x00015d0f) input_popup_find_pane_g1

0x5a3d,	// (0x000130c2) aid_navi_side_left_pane

0x5a52,	// (0x000130d7) aid_navi_side_right_pane

0x9b68,	// (0x000171ed) bg_popup_window_pane_cp30_ParamLimits

0x9b68,	// (0x000171ed) bg_popup_window_pane_cp30

0x9be2,	// (0x00017267) popup_midp_note_alarm_window_g1_ParamLimits

0x9be2,	// (0x00017267) popup_midp_note_alarm_window_g1

0x9c12,	// (0x00017297) popup_midp_note_alarm_window_t1_ParamLimits

0x9c12,	// (0x00017297) popup_midp_note_alarm_window_t1

0x9cb3,	// (0x00017338) popup_midp_note_alarm_window_t2_ParamLimits

0x9cb3,	// (0x00017338) popup_midp_note_alarm_window_t2

0x9d61,	// (0x000173e6) popup_midp_note_alarm_window_t3_ParamLimits

0x9d61,	// (0x000173e6) popup_midp_note_alarm_window_t3

0x9d89,	// (0x0001740e) popup_midp_note_alarm_window_t4_ParamLimits

0x9d89,	// (0x0001740e) popup_midp_note_alarm_window_t4

0x9da9,	// (0x0001742e) popup_midp_note_alarm_window_t5_ParamLimits

0x9da9,	// (0x0001742e) popup_midp_note_alarm_window_t5

0x000a,

0xf864,	// (0x0001cee9) popup_midp_note_alarm_window_t_ParamLimits

0xf864,	// (0x0001cee9) popup_midp_note_alarm_window_t

0x9e55,	// (0x000174da) wait_bar_pane_cp1_ParamLimits

0x9e55,	// (0x000174da) wait_bar_pane_cp1

0x3696,	// (0x00010d1b) wait_anim_pane_copy1

0x3696,	// (0x00010d1b) wait_border_pane_copy1

0x985e,	// (0x00016ee3) wait_border_pane_g1_copy1

0x3b99,	// (0x0001121e) form_field_popup_pane_g1

0x8536,	// (0x00015bbb) form_field_popup_pane_t1_ParamLimits

0x3b34,	// (0x000111b9) input_focus_pane_cp7_ParamLimits

0x3ba1,	// (0x00011226) list_form_pane_ParamLimits

0x3bad,	// (0x00011232) form_field_popup_wide_pane_g1

0x3bb5,	// (0x0001123a) form_field_popup_wide_pane_t1_ParamLimits

0x3b34,	// (0x000111b9) input_focus_pane_cp8_ParamLimits

0x3bca,	// (0x0001124f) list_form_wide_pane_ParamLimits

0xaa18,	// (0x0001809d) aid_size_cell_graphic_pane

0x85aa,	// (0x00015c2f) data_form_pane_t1_ParamLimits

0xa78e,	// (0x00017e13) data_form_wide_pane_t1_ParamLimits

0x8cf5,	// (0x0001637a) bg_status_flat_pane

0x7be6,	// (0x0001526b) title_pane_t1_ParamLimits

0x36cc,	// (0x00010d51) title_pane_t2_ParamLimits

0x36f2,	// (0x00010d77) title_pane_t3_ParamLimits

0xf530,	// (0x0001cbb5) title_pane_t_ParamLimits

0x415e,	// (0x000117e3) level_1_signal_ParamLimits

0x416b,	// (0x000117f0) level_2_signal_ParamLimits

0x4178,	// (0x000117fd) level_3_signal_ParamLimits

0x4185,	// (0x0001180a) level_4_signal_ParamLimits

0x4192,	// (0x00011817) level_5_signal_ParamLimits

0x419f,	// (0x00011824) level_6_signal_ParamLimits

0x41ac,	// (0x00011831) level_7_signal_ParamLimits

0x415e,	// (0x000117e3) level_1_battery_ParamLimits

0x416b,	// (0x000117f0) level_2_battery_ParamLimits

0x4178,	// (0x000117fd) level_3_battery_ParamLimits

0x4185,	// (0x0001180a) level_4_battery_ParamLimits

0x4192,	// (0x00011817) level_5_battery_ParamLimits

0x419f,	// (0x00011824) level_6_battery_ParamLimits

0x41ac,	// (0x00011831) level_7_battery_ParamLimits

0x9a6d,	// (0x000170f2) bg_status_flat_pane_g1

0x9a75,	// (0x000170fa) bg_status_flat_pane_g2

0x9a7d,	// (0x00017102) bg_status_flat_pane_g3

0x9a85,	// (0x0001710a) bg_status_flat_pane_g4

0x9a8d,	// (0x00017112) bg_status_flat_pane_g5

0x9a95,	// (0x0001711a) bg_status_flat_pane_g6

0x9a9d,	// (0x00017122) bg_status_flat_pane_g7

0x7c56,	// (0x000152db) tabs_3_active_pane_t1_ParamLimits

0x7c56,	// (0x000152db) tabs_3_passive_pane_t1_ParamLimits

0x7c70,	// (0x000152f5) tabs_4_active_pane_t1_ParamLimits

0x7c70,	// (0x000152f5) tabs_4_1_passive_pane_t1_ParamLimits

0x86c1,	// (0x00015d46) tabs_2_active_pane_t1_ParamLimits

0x86c1,	// (0x00015d46) tabs_2_passive_pane_t1_ParamLimits

0x86d3,	// (0x00015d58) bg_active_tab_pane_cp4_ParamLimits

0x86e1,	// (0x00015d66) tabs_2_long_active_pane_t1_ParamLimits

0x86f4,	// (0x00015d79) bg_passive_tab_pane_cp4_ParamLimits

0x65f7,	// (0x00013c7c) list_single_midp_graphic_pane_t1_ParamLimits

0x86d3,	// (0x00015d58) bg_active_tab_pane_cp5_ParamLimits

0x8700,	// (0x00015d85) tabs_3_long_active_pane_t1_ParamLimits

0x86f4,	// (0x00015d79) bg_passive_tab_pane_cp5_ParamLimits

0x65f7,	// (0x00013c7c) list_single_midp_graphic_pane_t1

0x8cf5,	// (0x0001637a) bg_status_flat_pane_ParamLimits

0x8dbe,	// (0x00016443) indicator_pane_cp2_ParamLimits

0x8dbe,	// (0x00016443) indicator_pane_cp2

0x8ee9,	// (0x0001656e) navi_pane_srt_ParamLimits

0x8ee9,	// (0x0001656e) navi_pane_srt

0x8f0d,	// (0x00016592) popup_clock_digital_analogue_window_cp1

0x3770,	// (0x00010df5) indicator_pane_t1

0x4814,	// (0x00011e99) copy_highlight_pane

0x4814,	// (0x00011e99) cursor_graphics_pane

0x4814,	// (0x00011e99) graphic_within_text_pane

0x4814,	// (0x00011e99) link_highlight_pane

0xa26c,	// (0x000178f1) popup_preview_text_window_t5_ParamLimits

0xa26c,	// (0x000178f1) popup_preview_text_window_t5

0x487c,	// (0x00011f01) cursor_digital_pane

0x487c,	// (0x00011f01) cursor_primary_pane

0x488d,	// (0x00011f12) cursor_primary_small_pane

0x4895,	// (0x00011f1a) cursor_secondary_pane

0x489d,	// (0x00011f22) cursor_title_pane

0x487c,	// (0x00011f01) link_highlight_digital_pane

0x4884,	// (0x00011f09) link_highlight_primary_pane

0x488d,	// (0x00011f12) link_highlight_primary_small_pane

0x4895,	// (0x00011f1a) link_highlight_secondary_pane

0x489d,	// (0x00011f22) link_highlight_title_pane

0x487c,	// (0x00011f01) copy_highlight_digital_pane

0x487c,	// (0x00011f01) copy_highlight_primary_pane

0x488d,	// (0x00011f12) copy_highlight_primary_small_pane

0x4895,	// (0x00011f1a) copy_highlight_secondary_pane

0x489d,	// (0x00011f22) copy_highlight_title_pane

0x4895,	// (0x00011f1a) graphic_text_digital_pane

0x9b0b,	// (0x00017190) graphic_text_primary_pane

0x9b14,	// (0x00017199) graphic_text_primary_small_pane

0x488d,	// (0x00011f12) graphic_text_secondary_pane

0x487c,	// (0x00011f01) graphic_text_title_pane

0x8b66,	// (0x000161eb) cursor_primary_pane_g1

0x9afd,	// (0x00017182) cursor_text_primary_t1

0x9ae5,	// (0x0001716a) cursor_primary_small_pane_g1

0x9aef,	// (0x00017174) cursor_text_primary_small_t1

0x9acd,	// (0x00017152) cursor_primary_small_pane_g1_copy1

0x9ad7,	// (0x0001715c) cursor_text_primary_small_t1_copy1

0x9ab5,	// (0x0001713a) cursor_text_title_t1

0x9ac3,	// (0x00017148) cursor_title_pane_g1

0x8b66,	// (0x000161eb) cursor_digital_pane_g1

0x48a5,	// (0x00011f2a) cursor_text_digital_t1

0x48b3,	// (0x00011f38) link_highlight_primary_pane_g1

0x9a5e,	// (0x000170e3) link_highlight_primary_pane_t1

0x48b3,	// (0x00011f38) link_highlight_primary_small_pane_g1

0x48bb,	// (0x00011f40) link_highlight_primary_small_pane_t1

0x48b3,	// (0x00011f38) link_highlight_secondary_pane_g1

0x48ca,	// (0x00011f4f) link_highlight_secondary_pane_t1

0x99c3,	// (0x00017048) link_highlight_title_pane_g1

0x99da,	// (0x0001705f) link_highlight_title_pane_t1

0x99c3,	// (0x00017048) link_highlight_digital_pane_g1

0x99cb,	// (0x00017050) link_highlight_digital_pane_t1

0x987d,	// (0x00016f02) copy_highlight_primary_pane_g1

0x98a3,	// (0x00016f28) copy_highlight_primary_pane_t1

0x987d,	// (0x00016f02) copy_highlight_primary_small_pane_g1

0x9894,	// (0x00016f19) copy_highlight_primary_small_pane_t1

0x48d9,	// (0x00011f5e) copy_highlight_secondary_pane_g1

0x48e1,	// (0x00011f66) copy_highlight_secondary_pane_t1

0x987d,	// (0x00016f02) copy_highlight_title_pane_g1

0x9885,	// (0x00016f0a) copy_highlight_title_pane_t1

0x987d,	// (0x00016f02) copy_highlight_digital_pane_g1

0xabe6,	// (0x0001826b) copy_highlight_digital_pane_t1

0xab3a,	// (0x000181bf) graphic_text_primary_pane_g1

0xabca,	// (0x0001824f) graphic_text_primary_pane_t1

0xabd8,	// (0x0001825d) graphic_text_primary_pane_t2

0x0001,

0xf993,	// (0x0001d018) graphic_text_primary_pane_t

0xaba6,	// (0x0001822b) graphic_text_primary_small_pane_g1

0xabae,	// (0x00018233) graphic_text_primary_small_pane_t1

0xabbc,	// (0x00018241) graphic_text_primary_small_pane_t2

0x0001,

0xf98e,	// (0x0001d013) graphic_text_primary_small_pane_t

0xab82,	// (0x00018207) graphic_text_secondary_pane_g1

0xab8a,	// (0x0001820f) graphic_text_secondary_pane_t1

0xab98,	// (0x0001821d) graphic_text_secondary_pane_t2

0x0001,

0xf989,	// (0x0001d00e) graphic_text_secondary_pane_t

0xab5e,	// (0x000181e3) graphic_text_title_pane_g1

0xab66,	// (0x000181eb) graphic_text_title_pane_t1

0xab74,	// (0x000181f9) graphic_text_title_pane_t2

0x0001,

0xf984,	// (0x0001d009) graphic_text_title_pane_t

0xab3a,	// (0x000181bf) graphic_text_digital_pane_g1

0xab42,	// (0x000181c7) graphic_text_digital_pane_t1

0xab50,	// (0x000181d5) graphic_text_digital_pane_t2

0x0001,

0xf97f,	// (0x0001d004) graphic_text_digital_pane_t

0x3712,	// (0x00010d97) navi_icon_pane_srt_ParamLimits

0x3712,	// (0x00010d97) navi_icon_pane_srt

0x3696,	// (0x00010d1b) navi_midp_pane_srt

0x3696,	// (0x00010d1b) navi_navi_pane_srt

0x3712,	// (0x00010d97) navi_text_pane_srt_ParamLimits

0x3712,	// (0x00010d97) navi_text_pane_srt

0xab05,	// (0x0001818a) navi_navi_icon_text_pane_srt

0xab0d,	// (0x00018192) navi_navi_pane_srt_g1_ParamLimits

0xab0d,	// (0x00018192) navi_navi_pane_srt_g1

0xab1f,	// (0x000181a4) navi_navi_pane_srt_g2_ParamLimits

0xab1f,	// (0x000181a4) navi_navi_pane_srt_g2

0x0001,

0xf97a,	// (0x0001cfff) navi_navi_pane_srt_g_ParamLimits

0xf97a,	// (0x0001cfff) navi_navi_pane_srt_g

0xab31,	// (0x000181b6) navi_navi_tabs_pane_srt

0xab05,	// (0x0001818a) navi_navi_text_pane_srt

0xab05,	// (0x0001818a) navi_navi_volume_pane_srt

0xaaf6,	// (0x0001817b) navi_navi_text_pane_srt_t1

0x6977,	// (0x00013ffc) navi_navi_volume_pane_srt_g1

0x697f,	// (0x00014004) volume_small_pane_srt_ParamLimits

0x697f,	// (0x00014004) volume_small_pane_srt

0x5d14,	// (0x00013399) volume_small_pane_srt_g1_ParamLimits

0x5d14,	// (0x00013399) volume_small_pane_srt_g1

0x5d24,	// (0x000133a9) volume_small_pane_srt_g2_ParamLimits

0x5d24,	// (0x000133a9) volume_small_pane_srt_g2

0x5d35,	// (0x000133ba) volume_small_pane_srt_g3_ParamLimits

0x5d35,	// (0x000133ba) volume_small_pane_srt_g3

0x5d46,	// (0x000133cb) volume_small_pane_srt_g4_ParamLimits

0x5d46,	// (0x000133cb) volume_small_pane_srt_g4

0x5d57,	// (0x000133dc) volume_small_pane_srt_g5_ParamLimits

0x5d57,	// (0x000133dc) volume_small_pane_srt_g5

0x5d68,	// (0x000133ed) volume_small_pane_srt_g6_ParamLimits

0x5d68,	// (0x000133ed) volume_small_pane_srt_g6

0x5d79,	// (0x000133fe) volume_small_pane_srt_g7_ParamLimits

0x5d79,	// (0x000133fe) volume_small_pane_srt_g7

0x5d8a,	// (0x0001340f) volume_small_pane_srt_g8_ParamLimits

0x5d8a,	// (0x0001340f) volume_small_pane_srt_g8

0x5d9b,	// (0x00013420) volume_small_pane_srt_g9_ParamLimits

0x5d9b,	// (0x00013420) volume_small_pane_srt_g9

0x5dac,	// (0x00013431) volume_small_pane_srt_g10_ParamLimits

0x5dac,	// (0x00013431) volume_small_pane_srt_g10

0x0009,

0xf722,	// (0x0001cda7) volume_small_pane_srt_g_ParamLimits

0xf722,	// (0x0001cda7) volume_small_pane_srt_g

0x7e2c,	// (0x000154b1) query_popup_data_pane_cp2

0xaadc,	// (0x00018161) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaadc,	// (0x00018161) navi_navi_icon_text_pane_srt_t1

0x9b0b,	// (0x00017190) navi_tabs_2_long_pane_srt

0x9b0b,	// (0x00017190) navi_tabs_2_pane_srt

0x9b0b,	// (0x00017190) navi_tabs_3_long_pane_srt

0x9b0b,	// (0x00017190) navi_tabs_3_pane_srt

0x9b0b,	// (0x00017190) navi_tabs_4_pane_srt

0x6957,	// (0x00013fdc) tabs_2_active_pane_srt_ParamLimits

0x6957,	// (0x00013fdc) tabs_2_active_pane_srt

0x6967,	// (0x00013fec) tabs_2_passive_pane_srt_ParamLimits

0x6967,	// (0x00013fec) tabs_2_passive_pane_srt

0x4a30,	// (0x000120b5) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4a30,	// (0x000120b5) bg_passive_tab_pane_cp1_srt

0xaaa8,	// (0x0001812d) bg_passive_tab_pane_g1_cp1_srt

0x89b0,	// (0x00016035) bg_passive_tab_pane_g2_cp1_srt

0xaab1,	// (0x00018136) bg_passive_tab_pane_g3_cp1_srt

0x3712,	// (0x00010d97) bg_active_tab_pane_cp1_srt_ParamLimits

0x3712,	// (0x00010d97) bg_active_tab_pane_cp1_srt

0xaaba,	// (0x0001813f) tabs_2_active_pane_srt_g1

0xaac2,	// (0x00018147) tabs_2_active_pane_srt_t1_ParamLimits

0xaac2,	// (0x00018147) tabs_2_active_pane_srt_t1

0xaaa8,	// (0x0001812d) bg_active_tab_pane_g1_cp1_srt

0x89b0,	// (0x00016035) bg_active_tab_pane_g2_cp1_srt

0xaab1,	// (0x00018136) bg_active_tab_pane_g3_cp1_srt

0x6924,	// (0x00013fa9) tabs_3_active_pane_srt_ParamLimits

0x6924,	// (0x00013fa9) tabs_3_active_pane_srt

0x6935,	// (0x00013fba) tabs_3_passive_pane_cp_srt_ParamLimits

0x6935,	// (0x00013fba) tabs_3_passive_pane_cp_srt

0x6946,	// (0x00013fcb) tabs_3_passive_pane_srt_ParamLimits

0x6946,	// (0x00013fcb) tabs_3_passive_pane_srt

0x4a30,	// (0x000120b5) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4a30,	// (0x000120b5) bg_passive_tab_pane_cp2_srt

0x8b70,	// (0x000161f5) bg_passive_tab_pane_g1_cp2_srt

0x89b0,	// (0x00016035) bg_passive_tab_pane_g2_cp2_srt

0x8b79,	// (0x000161fe) bg_passive_tab_pane_g3_cp2_srt

0x3712,	// (0x00010d97) bg_active_tab_pane_cp2_srt_ParamLimits

0x3712,	// (0x00010d97) bg_active_tab_pane_cp2_srt

0xaa8e,	// (0x00018113) tabs_3_active_pane_srt_g1

0xaa96,	// (0x0001811b) tabs_3_active_pane_srt_t1_ParamLimits

0xaa96,	// (0x0001811b) tabs_3_active_pane_srt_t1

0x8b70,	// (0x000161f5) bg_active_tab_pane_g1_cp2_srt

0x89b0,	// (0x00016035) bg_active_tab_pane_g2_cp2_srt

0x8b79,	// (0x000161fe) bg_active_tab_pane_g3_cp2_srt

0x68dc,	// (0x00013f61) tabs_4_active_pane_srt_ParamLimits

0x68dc,	// (0x00013f61) tabs_4_active_pane_srt

0x68ee,	// (0x00013f73) tabs_4_passive_pane_cp2_srt_ParamLimits

0x68ee,	// (0x00013f73) tabs_4_passive_pane_cp2_srt

0x5f1f,	// (0x000135a4) aid_size_cell_toolbar

0x86f4,	// (0x00015d79) main_idle_act_pane_ParamLimits

0x60e4,	// (0x00013769) popup_large_graphic_colour_window_ParamLimits

0x644f,	// (0x00013ad4) popup_toolbar_window_ParamLimits

0x644f,	// (0x00013ad4) popup_toolbar_window

0xa7f8,	// (0x00017e7d) list_single_graphic_2heading_pane_ParamLimits

0xa7f8,	// (0x00017e7d) list_single_graphic_2heading_pane

0x4027,	// (0x000116ac) aid_size_cell_apps_grid_lsc_pane

0x4039,	// (0x000116be) aid_size_cell_apps_grid_prt_pane

0x4a30,	// (0x000120b5) bg_wml_button_pane_cp1_ParamLimits

0x4a30,	// (0x000120b5) bg_wml_button_pane_cp1

0x94be,	// (0x00016b43) form_midp_field_text_pane_t1_ParamLimits

0x9279,	// (0x000168fe) input_focus_pane_cp050_ParamLimits

0x94f8,	// (0x00016b7d) list_midp_form_text_pane_ParamLimits

0x949b,	// (0x00016b20) input_focus_pane_cp051_ParamLimits

0x94af,	// (0x00016b34) list_midp_choice_pane_ParamLimits

0x932f,	// (0x000169b4) list_single_2graphic_pane_cp3_ParamLimits

0x932f,	// (0x000169b4) list_single_2graphic_pane_cp3

0x9354,	// (0x000169d9) list_single_midp_graphic_pane_ParamLimits

0x9354,	// (0x000169d9) list_single_midp_graphic_pane

0x64fc,	// (0x00013b81) list_single_graphic_2heading_pane_g1_ParamLimits

0x64fc,	// (0x00013b81) list_single_graphic_2heading_pane_g1

0x6508,	// (0x00013b8d) list_single_graphic_2heading_pane_g4_ParamLimits

0x6508,	// (0x00013b8d) list_single_graphic_2heading_pane_g4

0x6514,	// (0x00013b99) list_single_graphic_2heading_pane_g5_ParamLimits

0x6514,	// (0x00013b99) list_single_graphic_2heading_pane_g5

0x0002,

0xf775,	// (0x0001cdfa) list_single_graphic_2heading_pane_g_ParamLimits

0xf775,	// (0x0001cdfa) list_single_graphic_2heading_pane_g

0x6520,	// (0x00013ba5) list_single_graphic_2heading_pane_t1_ParamLimits

0x6520,	// (0x00013ba5) list_single_graphic_2heading_pane_t1

0x6534,	// (0x00013bb9) list_single_graphic_2heading_pane_t2_ParamLimits

0x6534,	// (0x00013bb9) list_single_graphic_2heading_pane_t2

0x654e,	// (0x00013bd3) list_single_graphic_2heading_pane_t3_ParamLimits

0x654e,	// (0x00013bd3) list_single_graphic_2heading_pane_t3

0x0002,

0xf77c,	// (0x0001ce01) list_single_graphic_2heading_pane_t_ParamLimits

0xf77c,	// (0x0001ce01) list_single_graphic_2heading_pane_t

0x9069,	// (0x000166ee) bg_popup_sub_pane_cp2

0x9093,	// (0x00016718) grid_toobar_pane

0x6566,	// (0x00013beb) cell_toolbar_pane_ParamLimits

0x6566,	// (0x00013beb) cell_toolbar_pane

0x90fd,	// (0x00016782) cell_toolbar_pane_g1_ParamLimits

0x90fd,	// (0x00016782) cell_toolbar_pane_g1

0x9111,	// (0x00016796) cell_toolbar_pane_g2_ParamLimits

0x9111,	// (0x00016796) cell_toolbar_pane_g2

0x0001,

0xf78a,	// (0x0001ce0f) cell_toolbar_pane_g_ParamLimits

0xf78a,	// (0x0001ce0f) cell_toolbar_pane_g

0x9133,	// (0x000167b8) grid_highlight_pane_cp2_ParamLimits

0x9133,	// (0x000167b8) grid_highlight_pane_cp2

0x914d,	// (0x000167d2) toolbar_button_pane

0x9159,	// (0x000167de) toolbar_button_pane_g1

0x9161,	// (0x000167e6) toolbar_button_pane_g2

0x9169,	// (0x000167ee) toolbar_button_pane_g3

0x9171,	// (0x000167f6) toolbar_button_pane_g4

0x9179,	// (0x000167fe) toolbar_button_pane_g5

0x9181,	// (0x00016806) toolbar_button_pane_g6

0x9189,	// (0x0001680e) toolbar_button_pane_g7

0x9191,	// (0x00016816) toolbar_button_pane_g8

0x9199,	// (0x0001681e) toolbar_button_pane_g9

0x0009,

0xf78f,	// (0x0001ce14) toolbar_button_pane_g

0x659e,	// (0x00013c23) list_single_2graphic_pane_g1_cp3_ParamLimits

0x659e,	// (0x00013c23) list_single_2graphic_pane_g1_cp3

0x65aa,	// (0x00013c2f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x65aa,	// (0x00013c2f) list_single_2graphic_pane_g2_cp3

0x65bb,	// (0x00013c40) list_single_2graphic_pane_g3_cp3

0x65c3,	// (0x00013c48) list_single_2graphic_pane_g4_cp3_ParamLimits

0x65c3,	// (0x00013c48) list_single_2graphic_pane_g4_cp3

0x65cf,	// (0x00013c54) list_single_2graphic_pane_t1_cp3_ParamLimits

0x65cf,	// (0x00013c54) list_single_2graphic_pane_t1_cp3

0x65eb,	// (0x00013c70) list_single_midp_graphic_pane_g2_ParamLimits

0x65eb,	// (0x00013c70) list_single_midp_graphic_pane_g2

0x5f27,	// (0x000135ac) aid_zoom_text_primary

0x5f2f,	// (0x000135b4) aid_zoom_text_secondary

0x49ff,	// (0x00012084) status_small_pane_g7_ParamLimits

0x49ff,	// (0x00012084) status_small_pane_g7

0x8bd3,	// (0x00016258) status_small_pane_t1_ParamLimits

0x7bc9,	// (0x0001524e) title_pane_g2

0x0003,

0xf527,	// (0x0001cbac) title_pane_g

0x7e86,	// (0x0001550b) aid_size_cell_colour_1_pane_ParamLimits

0x7e86,	// (0x0001550b) aid_size_cell_colour_1_pane

0x7e9a,	// (0x0001551f) aid_size_cell_colour_2_pane_ParamLimits

0x7e9a,	// (0x0001551f) aid_size_cell_colour_2_pane

0x7eae,	// (0x00015533) aid_size_cell_colour_3_pane_ParamLimits

0x7eae,	// (0x00015533) aid_size_cell_colour_3_pane

0x7ec2,	// (0x00015547) aid_size_cell_colour_4_pane_ParamLimits

0x7ec2,	// (0x00015547) aid_size_cell_colour_4_pane

0x597a,	// (0x00012fff) title_pane_stacon_g1_ParamLimits

0x597a,	// (0x00012fff) title_pane_stacon_g1

0x98fa,	// (0x00016f7f) popup_note_wait_window_g3_ParamLimits

0x98fa,	// (0x00016f7f) popup_note_wait_window_g3

0x9970,	// (0x00016ff5) popup_note_wait_window_t5_ParamLimits

0x9970,	// (0x00016ff5) popup_note_wait_window_t5

0x3696,	// (0x00010d1b) main_feb_china_hwr_fs_writing_pane

0x5fcb,	// (0x00013650) popup_feb_china_hwr_fs_window_ParamLimits

0x5fcb,	// (0x00013650) popup_feb_china_hwr_fs_window

0x660d,	// (0x00013c92) aid_size_cell_hwr_fs_ParamLimits

0x660d,	// (0x00013c92) aid_size_cell_hwr_fs

0x9279,	// (0x000168fe) bg_popup_sub_pane_cp3_ParamLimits

0x9279,	// (0x000168fe) bg_popup_sub_pane_cp3

0x6622,	// (0x00013ca7) grid_hwr_fs_pane_ParamLimits

0x6622,	// (0x00013ca7) grid_hwr_fs_pane

0x663a,	// (0x00013cbf) linegrid_hwr_fs_pane_ParamLimits

0x663a,	// (0x00013cbf) linegrid_hwr_fs_pane

0x664a,	// (0x00013ccf) cell_hwr_fs_pane_ParamLimits

0x664a,	// (0x00013ccf) cell_hwr_fs_pane

0x9285,	// (0x0001690a) linegrid_hwr_fs_pane_g1_ParamLimits

0x9285,	// (0x0001690a) linegrid_hwr_fs_pane_g1

0x9291,	// (0x00016916) linegrid_hwr_fs_pane_g2_ParamLimits

0x9291,	// (0x00016916) linegrid_hwr_fs_pane_g2

0x92a3,	// (0x00016928) linegrid_hwr_fs_pane_g3_ParamLimits

0x92a3,	// (0x00016928) linegrid_hwr_fs_pane_g3

0x666c,	// (0x00013cf1) linegrid_hwr_fs_pane_g4_ParamLimits

0x666c,	// (0x00013cf1) linegrid_hwr_fs_pane_g4

0x6686,	// (0x00013d0b) linegrid_hwr_fs_pane_g5_ParamLimits

0x6686,	// (0x00013d0b) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ba,	// (0x0001ce3f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ba,	// (0x0001ce3f) linegrid_hwr_fs_pane_g

0x92af,	// (0x00016934) cell_hwr_fs_pane_g1_ParamLimits

0x92af,	// (0x00016934) cell_hwr_fs_pane_g1

0x8fa3,	// (0x00016628) cell_hwr_fs_pane_g2_ParamLimits

0x8fa3,	// (0x00016628) cell_hwr_fs_pane_g2

0x92c5,	// (0x0001694a) cell_hwr_fs_pane_g3_ParamLimits

0x92c5,	// (0x0001694a) cell_hwr_fs_pane_g3

0x92d2,	// (0x00016957) cell_hwr_fs_pane_g4_ParamLimits

0x92d2,	// (0x00016957) cell_hwr_fs_pane_g4

0x0003,

0xf7c5,	// (0x0001ce4a) cell_hwr_fs_pane_g_ParamLimits

0xf7c5,	// (0x0001ce4a) cell_hwr_fs_pane_g

0x669c,	// (0x00013d21) cell_hwr_fs_pane_t1

0x3696,	// (0x00010d1b) grid_highlight_pane_cp6

0x3696,	// (0x00010d1b) main_idle_act2_pane

0x3cbb,	// (0x00011340) aid_inside_area_popup_secondary

0x9f8f,	// (0x00017614) aid_inside_area_window_primary_ParamLimits

0x9f8f,	// (0x00017614) aid_inside_area_window_primary

0xabf5,	// (0x0001827a) ai2_news_ticker_pane

0xabfd,	// (0x00018282) aid_size_cell_ai1_link_ParamLimits

0xabfd,	// (0x00018282) aid_size_cell_ai1_link

0xac17,	// (0x0001829c) popup_ai2_data_window_ParamLimits

0xac17,	// (0x0001829c) popup_ai2_data_window

0xac2d,	// (0x000182b2) popup_ai2_link_window_ParamLimits

0xac2d,	// (0x000182b2) popup_ai2_link_window

0x9279,	// (0x000168fe) bg_popup_sub_pane_cp4_ParamLimits

0x9279,	// (0x000168fe) bg_popup_sub_pane_cp4

0xac41,	// (0x000182c6) grid_ai2_link_pane_ParamLimits

0xac41,	// (0x000182c6) grid_ai2_link_pane

0xac58,	// (0x000182dd) popup_ai2_link_window_g1_ParamLimits

0xac58,	// (0x000182dd) popup_ai2_link_window_g1

0xac64,	// (0x000182e9) popup_ai2_link_window_g2_ParamLimits

0xac64,	// (0x000182e9) popup_ai2_link_window_g2

0x0001,

0xf998,	// (0x0001d01d) popup_ai2_link_window_g_ParamLimits

0xf998,	// (0x0001d01d) popup_ai2_link_window_g

0xac73,	// (0x000182f8) ai2_mp_button_pane

0xac7b,	// (0x00018300) ai2_mp_volume_pane

0x949b,	// (0x00016b20) bg_popup_sub_pane_cp5_ParamLimits

0x949b,	// (0x00016b20) bg_popup_sub_pane_cp5

0xac83,	// (0x00018308) heading_ai2_gene_pane_ParamLimits

0xac83,	// (0x00018308) heading_ai2_gene_pane

0xac8f,	// (0x00018314) list_ai2_gene_pane_ParamLimits

0xac8f,	// (0x00018314) list_ai2_gene_pane

0xacd7,	// (0x0001835c) cell_ai2_link_pane_ParamLimits

0xacd7,	// (0x0001835c) cell_ai2_link_pane

0xaced,	// (0x00018372) cell_ai2_link_pane_g1

0x3696,	// (0x00010d1b) grid_highlight_pane_cp7

0x6994,	// (0x00014019) ai2_mp_volume_pane_g1

0xadbd,	// (0x00018442) ai2_mp_volume_pane_g2

0xad32,	// (0x000183b7) list_ai2_gene_pane_t1

0xadc5,	// (0x0001844a) ai2_mp_volume_pane_g3

0x0002,

0xf9b1,	// (0x0001d036) ai2_mp_volume_pane_g

0x699c,	// (0x00014021) volume_small_pane_cp3

0xadcd,	// (0x00018452) aid_size_cell_ai2_button

0xadd5,	// (0x0001845a) grid_ai2_button_pane

0xadde,	// (0x00018463) cell_ai2_button_pane_ParamLimits

0xadde,	// (0x00018463) cell_ai2_button_pane

0x366c,	// (0x00010cf1) cell_ai2_button_pane_g1

0x3696,	// (0x00010d1b) grid_highlight_pane_cp8

0xad7d,	// (0x00018402) ai2_gene_pane_t1_ParamLimits

0xad7d,	// (0x00018402) ai2_gene_pane_t1

0x5f15,	// (0x0001359a) aid_height_parent_landscape

0xa5fa,	// (0x00017c7f) aid_height_set_list

0xa60b,	// (0x00017c90) aid_size_parent

0xaa18,	// (0x0001809d) aid_size_cell_graphic_pane_ParamLimits

0xac9f,	// (0x00018324) popup_ai2_data_window_g1_ParamLimits

0xac9f,	// (0x00018324) popup_ai2_data_window_g1

0xacab,	// (0x00018330) ai2_news_ticker_pane_g1

0xacb3,	// (0x00018338) ai2_news_ticker_pane_g2

0x0001,

0xf99d,	// (0x0001d022) ai2_news_ticker_pane_g

0xacbb,	// (0x00018340) ai2_news_ticker_pane_t1

0xacc9,	// (0x0001834e) ai2_news_ticker_pane_t2

0x0001,

0xf9a2,	// (0x0001d027) ai2_news_ticker_pane_t

0xacf6,	// (0x0001837b) heading_ai2_gene_pane_g1

0xacfe,	// (0x00018383) heading_ai2_gene_pane_t1_ParamLimits

0xacfe,	// (0x00018383) heading_ai2_gene_pane_t1

0xad13,	// (0x00018398) list_highlight_pane_cp6

0xad1b,	// (0x000183a0) ai2_gene_pane_ParamLimits

0xad1b,	// (0x000183a0) ai2_gene_pane

0xad40,	// (0x000183c5) list_ai2_gene_pane_t2

0x0001,

0xf9a7,	// (0x0001d02c) list_ai2_gene_pane_t

0xad4e,	// (0x000183d3) list_highlight_pane_cp8_ParamLimits

0xad4e,	// (0x000183d3) list_highlight_pane_cp8

0xad5f,	// (0x000183e4) ai2_gene_pane_g1_ParamLimits

0xad5f,	// (0x000183e4) ai2_gene_pane_g1

0xad71,	// (0x000183f6) ai2_gene_pane_g2_ParamLimits

0xad71,	// (0x000183f6) ai2_gene_pane_g2

0x0001,

0xf9ac,	// (0x0001d031) ai2_gene_pane_g_ParamLimits

0xf9ac,	// (0x0001d031) ai2_gene_pane_g

0x3a81,	// (0x00011106) scroll_pane_cp12

0x5ed2,	// (0x00013557) control_pane_t3_ParamLimits

0x5ed2,	// (0x00013557) control_pane_t3

0x8bc4,	// (0x00016249) status_small_pane_g8_ParamLimits

0x8bc4,	// (0x00016249) status_small_pane_g8

0x60ad,	// (0x00013732) popup_find_window_ParamLimits

0x62c6,	// (0x0001394b) popup_note_image_window_ParamLimits

0x90cf,	// (0x00016754) list_double2_graphic_pane_vc_g1_ParamLimits

0x90cf,	// (0x00016754) list_double2_graphic_pane_vc_g1

0x4402,	// (0x00011a87) list_double2_graphic_pane_vc_g2_ParamLimits

0x4402,	// (0x00011a87) list_double2_graphic_pane_vc_g2

0x90db,	// (0x00016760) list_double2_graphic_pane_vc_g3_ParamLimits

0x90db,	// (0x00016760) list_double2_graphic_pane_vc_g3

0x0002,

0xf783,	// (0x0001ce08) list_double2_graphic_pane_vc_g_ParamLimits

0xf783,	// (0x0001ce08) list_double2_graphic_pane_vc_g

0x90e7,	// (0x0001676c) list_double2_graphic_pane_vc_t1_ParamLimits

0x90e7,	// (0x0001676c) list_double2_graphic_pane_vc_t1

0x4402,	// (0x00011a87) list_single_heading_pane_vc_g1_ParamLimits

0x4402,	// (0x00011a87) list_single_heading_pane_vc_g1

0x90db,	// (0x00016760) list_single_heading_pane_vc_g2_ParamLimits

0x90db,	// (0x00016760) list_single_heading_pane_vc_g2

0x0001,

0xf7a4,	// (0x0001ce29) list_single_heading_pane_vc_g_ParamLimits

0xf7a4,	// (0x0001ce29) list_single_heading_pane_vc_g

0x91a1,	// (0x00016826) list_single_heading_pane_vc_t1_ParamLimits

0x91a1,	// (0x00016826) list_single_heading_pane_vc_t1

0x91b7,	// (0x0001683c) list_single_heading_pane_vc_t2_ParamLimits

0x91b7,	// (0x0001683c) list_single_heading_pane_vc_t2

0x0001,

0xf7a9,	// (0x0001ce2e) list_single_heading_pane_vc_t_ParamLimits

0xf7a9,	// (0x0001ce2e) list_single_heading_pane_vc_t

0x91c9,	// (0x0001684e) list_setting_number_pane_vc_g1_ParamLimits

0x91c9,	// (0x0001684e) list_setting_number_pane_vc_g1

0x91d5,	// (0x0001685a) list_setting_number_pane_vc_g2_ParamLimits

0x91d5,	// (0x0001685a) list_setting_number_pane_vc_g2

0x0001,

0xf7ae,	// (0x0001ce33) list_setting_number_pane_vc_g_ParamLimits

0xf7ae,	// (0x0001ce33) list_setting_number_pane_vc_g

0x91e1,	// (0x00016866) list_setting_number_pane_vc_t1_ParamLimits

0x91e1,	// (0x00016866) list_setting_number_pane_vc_t1

0x91f5,	// (0x0001687a) list_setting_number_pane_vc_t2_ParamLimits

0x91f5,	// (0x0001687a) list_setting_number_pane_vc_t2

0x9211,	// (0x00016896) list_setting_number_pane_vc_t3_ParamLimits

0x9211,	// (0x00016896) list_setting_number_pane_vc_t3

0x0002,

0xf7b3,	// (0x0001ce38) list_setting_number_pane_vc_t_ParamLimits

0xf7b3,	// (0x0001ce38) list_setting_number_pane_vc_t

0x923d,	// (0x000168c2) set_value_pane_vc_ParamLimits

0x923d,	// (0x000168c2) set_value_pane_vc

0xa7f8,	// (0x00017e7d) list_double2_graphic_pane_vc_ParamLimits

0xa7f8,	// (0x00017e7d) list_double2_graphic_pane_vc

0xa80b,	// (0x00017e90) list_double2_large_graphic_pane_vc_ParamLimits

0xa80b,	// (0x00017e90) list_double2_large_graphic_pane_vc

0xa7f8,	// (0x00017e7d) list_double2_pane_vc_ParamLimits

0xa7f8,	// (0x00017e7d) list_double2_pane_vc

0xa7f8,	// (0x00017e7d) list_double_graphic_heading_pane_vc_ParamLimits

0xa7f8,	// (0x00017e7d) list_double_graphic_heading_pane_vc

0xa7f8,	// (0x00017e7d) list_double_graphic_pane_vc_ParamLimits

0xa7f8,	// (0x00017e7d) list_double_graphic_pane_vc

0xa7f8,	// (0x00017e7d) list_double_heading_pane_vc_ParamLimits

0xa7f8,	// (0x00017e7d) list_double_heading_pane_vc

0xa81d,	// (0x00017ea2) list_double_large_graphic_pane_vc_ParamLimits

0xa81d,	// (0x00017ea2) list_double_large_graphic_pane_vc

0xa7f8,	// (0x00017e7d) list_double_number_pane_vc_ParamLimits

0xa7f8,	// (0x00017e7d) list_double_number_pane_vc

0xa7f8,	// (0x00017e7d) list_double_pane_vc_ParamLimits

0xa7f8,	// (0x00017e7d) list_double_pane_vc

0xa7f8,	// (0x00017e7d) list_double_time_pane_vc_ParamLimits

0xa7f8,	// (0x00017e7d) list_double_time_pane_vc

0xa7f8,	// (0x00017e7d) list_setting_number_pane_vc_ParamLimits

0xa7f8,	// (0x00017e7d) list_setting_number_pane_vc

0xa7f8,	// (0x00017e7d) list_setting_pane_vc_ParamLimits

0xa7f8,	// (0x00017e7d) list_setting_pane_vc

0xa7f8,	// (0x00017e7d) list_single_graphic_heading_pane_vc_ParamLimits

0xa7f8,	// (0x00017e7d) list_single_graphic_heading_pane_vc

0xa7f8,	// (0x00017e7d) list_single_heading_pane_vc_ParamLimits

0xa7f8,	// (0x00017e7d) list_single_heading_pane_vc

0xa83b,	// (0x00017ec0) list_single_number_heading_pane_vc_ParamLimits

0xa83b,	// (0x00017ec0) list_single_number_heading_pane_vc

0xae12,	// (0x00018497) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xae12,	// (0x00018497) list_double_graphic_heading_pane_vc_g1

0x3e30,	// (0x000114b5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3e30,	// (0x000114b5) list_double_graphic_heading_pane_vc_g2

0x3e3c,	// (0x000114c1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3e3c,	// (0x000114c1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9b8,	// (0x0001d03d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9b8,	// (0x0001d03d) list_double_graphic_heading_pane_vc_g

0xae1e,	// (0x000184a3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xae1e,	// (0x000184a3) list_double_graphic_heading_pane_vc_t1

0xae32,	// (0x000184b7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xae32,	// (0x000184b7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9bf,	// (0x0001d044) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9bf,	// (0x0001d044) list_double_graphic_heading_pane_vc_t

0x91c9,	// (0x0001684e) list_setting_pane_vc_g1_ParamLimits

0x91c9,	// (0x0001684e) list_setting_pane_vc_g1

0x91d5,	// (0x0001685a) list_setting_pane_vc_g2_ParamLimits

0x91d5,	// (0x0001685a) list_setting_pane_vc_g2

0x0001,

0xf7ae,	// (0x0001ce33) list_setting_pane_vc_g_ParamLimits

0xf7ae,	// (0x0001ce33) list_setting_pane_vc_g

0xb04f,	// (0x000186d4) list_setting_pane_vc_t1_ParamLimits

0xb04f,	// (0x000186d4) list_setting_pane_vc_t1

0xb06b,	// (0x000186f0) list_setting_pane_vc_t2_ParamLimits

0xb06b,	// (0x000186f0) list_setting_pane_vc_t2

0x0001,

0xfa02,	// (0x0001d087) list_setting_pane_vc_t_ParamLimits

0xfa02,	// (0x0001d087) list_setting_pane_vc_t

0x923d,	// (0x000168c2) set_value_pane_cp_vc_ParamLimits

0x923d,	// (0x000168c2) set_value_pane_cp_vc

0x4402,	// (0x00011a87) list_single_number_heading_pane_vc_g1_ParamLimits

0x4402,	// (0x00011a87) list_single_number_heading_pane_vc_g1

0x90db,	// (0x00016760) list_single_number_heading_pane_vc_g2_ParamLimits

0x90db,	// (0x00016760) list_single_number_heading_pane_vc_g2

0x0001,

0xf7a4,	// (0x0001ce29) list_single_number_heading_pane_vc_g_ParamLimits

0xf7a4,	// (0x0001ce29) list_single_number_heading_pane_vc_g

0xb085,	// (0x0001870a) list_single_number_heading_pane_vc_t1_ParamLimits

0xb085,	// (0x0001870a) list_single_number_heading_pane_vc_t1

0xb09b,	// (0x00018720) list_single_number_heading_pane_vc_t2_ParamLimits

0xb09b,	// (0x00018720) list_single_number_heading_pane_vc_t2

0xb0b1,	// (0x00018736) list_single_number_heading_pane_vc_t3_ParamLimits

0xb0b1,	// (0x00018736) list_single_number_heading_pane_vc_t3

0x0002,

0xfa07,	// (0x0001d08c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa07,	// (0x0001d08c) list_single_number_heading_pane_vc_t

0xb0c3,	// (0x00018748) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb0c3,	// (0x00018748) list_single_graphic_heading_pane_vc_g1

0x4402,	// (0x00011a87) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4402,	// (0x00011a87) list_single_graphic_heading_pane_vc_g4

0x90db,	// (0x00016760) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x90db,	// (0x00016760) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0e,	// (0x0001d093) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0e,	// (0x0001d093) list_single_graphic_heading_pane_vc_g

0xb085,	// (0x0001870a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb085,	// (0x0001870a) list_single_graphic_heading_pane_vc_t1

0xb0cf,	// (0x00018754) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb0cf,	// (0x00018754) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa15,	// (0x0001d09a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa15,	// (0x0001d09a) list_single_graphic_heading_pane_vc_t

0x4402,	// (0x00011a87) list_double2_pane_vc_g1_ParamLimits

0x4402,	// (0x00011a87) list_double2_pane_vc_g1

0x90db,	// (0x00016760) list_double2_pane_vc_g2_ParamLimits

0x90db,	// (0x00016760) list_double2_pane_vc_g2

0x0001,

0xf7a4,	// (0x0001ce29) list_double2_pane_vc_g_ParamLimits

0xf7a4,	// (0x0001ce29) list_double2_pane_vc_g

0xb0e1,	// (0x00018766) list_double2_pane_vc_t1_ParamLimits

0xb0e1,	// (0x00018766) list_double2_pane_vc_t1

0xb0f9,	// (0x0001877e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb0f9,	// (0x0001877e) list_double2_large_graphic_pane_vc_g1

0xb105,	// (0x0001878a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb105,	// (0x0001878a) list_double2_large_graphic_pane_vc_g2

0xb111,	// (0x00018796) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb111,	// (0x00018796) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa1a,	// (0x0001d09f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa1a,	// (0x0001d09f) list_double2_large_graphic_pane_vc_g

0xb11d,	// (0x000187a2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb11d,	// (0x000187a2) list_double2_large_graphic_pane_vc_t1

0xb133,	// (0x000187b8) list_double_time_pane_vc_g1_ParamLimits

0xb133,	// (0x000187b8) list_double_time_pane_vc_g1

0xb13f,	// (0x000187c4) list_double_time_pane_vc_g2_ParamLimits

0xb13f,	// (0x000187c4) list_double_time_pane_vc_g2

0x0001,

0xfa21,	// (0x0001d0a6) list_double_time_pane_vc_g_ParamLimits

0xfa21,	// (0x0001d0a6) list_double_time_pane_vc_g

0xb14b,	// (0x000187d0) list_double_time_pane_vc_t1_ParamLimits

0xb14b,	// (0x000187d0) list_double_time_pane_vc_t1

0xb16f,	// (0x000187f4) list_double_time_pane_vc_t2_ParamLimits

0xb16f,	// (0x000187f4) list_double_time_pane_vc_t2

0xb199,	// (0x0001881e) list_double_time_pane_vc_t3_ParamLimits

0xb199,	// (0x0001881e) list_double_time_pane_vc_t3

0xb1ab,	// (0x00018830) list_double_time_pane_vc_t4_ParamLimits

0xb1ab,	// (0x00018830) list_double_time_pane_vc_t4

0x0003,

0xfa26,	// (0x0001d0ab) list_double_time_pane_vc_t_ParamLimits

0xfa26,	// (0x0001d0ab) list_double_time_pane_vc_t

0x4402,	// (0x00011a87) list_double_pane_vc_g1_ParamLimits

0x4402,	// (0x00011a87) list_double_pane_vc_g1

0x90db,	// (0x00016760) list_double_pane_vc_g2_ParamLimits

0x90db,	// (0x00016760) list_double_pane_vc_g2

0x0001,

0xf7a4,	// (0x0001ce29) list_double_pane_vc_g_ParamLimits

0xf7a4,	// (0x0001ce29) list_double_pane_vc_g

0xb1bf,	// (0x00018844) list_double_pane_vc_t1_ParamLimits

0xb1bf,	// (0x00018844) list_double_pane_vc_t1

0xb1d3,	// (0x00018858) list_double_pane_vc_t2_ParamLimits

0xb1d3,	// (0x00018858) list_double_pane_vc_t2

0x0001,

0xfa2f,	// (0x0001d0b4) list_double_pane_vc_t_ParamLimits

0xfa2f,	// (0x0001d0b4) list_double_pane_vc_t

0x4402,	// (0x00011a87) list_double_number_pane_vc_g1_ParamLimits

0x4402,	// (0x00011a87) list_double_number_pane_vc_g1

0x90db,	// (0x00016760) list_double_number_pane_vc_g2_ParamLimits

0x90db,	// (0x00016760) list_double_number_pane_vc_g2

0x0001,

0xf7a4,	// (0x0001ce29) list_double_number_pane_vc_g_ParamLimits

0xf7a4,	// (0x0001ce29) list_double_number_pane_vc_g

0xb1eb,	// (0x00018870) list_double_number_pane_vc_t1_ParamLimits

0xb1eb,	// (0x00018870) list_double_number_pane_vc_t1

0xb1bf,	// (0x00018844) list_double_number_pane_vc_t2_ParamLimits

0xb1bf,	// (0x00018844) list_double_number_pane_vc_t2

0xb1fd,	// (0x00018882) list_double_number_pane_vc_t3_ParamLimits

0xb1fd,	// (0x00018882) list_double_number_pane_vc_t3

0x0002,

0xfa34,	// (0x0001d0b9) list_double_number_pane_vc_t_ParamLimits

0xfa34,	// (0x0001d0b9) list_double_number_pane_vc_t

0xb217,	// (0x0001889c) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb217,	// (0x0001889c) list_double_large_graphic_pane_vc_g1

0xb233,	// (0x000188b8) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb233,	// (0x000188b8) list_double_large_graphic_pane_vc_g2

0xb247,	// (0x000188cc) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb247,	// (0x000188cc) list_double_large_graphic_pane_vc_g3

0xb256,	// (0x000188db) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb256,	// (0x000188db) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3b,	// (0x0001d0c0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3b,	// (0x0001d0c0) list_double_large_graphic_pane_vc_g

0xb265,	// (0x000188ea) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb265,	// (0x000188ea) list_double_large_graphic_pane_vc_t1

0xb281,	// (0x00018906) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb281,	// (0x00018906) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa44,	// (0x0001d0c9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa44,	// (0x0001d0c9) list_double_large_graphic_pane_vc_t

0x3e30,	// (0x000114b5) list_double_heading_pane_vc_g1_ParamLimits

0x3e30,	// (0x000114b5) list_double_heading_pane_vc_g1

0x3e3c,	// (0x000114c1) list_double_heading_pane_vc_g2_ParamLimits

0x3e3c,	// (0x000114c1) list_double_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x0001cc26) list_double_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x0001cc26) list_double_heading_pane_vc_g

0xb2a3,	// (0x00018928) list_double_heading_pane_vc_t1_ParamLimits

0xb2a3,	// (0x00018928) list_double_heading_pane_vc_t1

0xb2b7,	// (0x0001893c) list_double_heading_pane_vc_t2_ParamLimits

0xb2b7,	// (0x0001893c) list_double_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0001d0ce) list_double_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0001d0ce) list_double_heading_pane_vc_t

0xb2cf,	// (0x00018954) list_double_graphic_pane_vc_g1_ParamLimits

0xb2cf,	// (0x00018954) list_double_graphic_pane_vc_g1

0xb2e2,	// (0x00018967) list_double_graphic_pane_vc_g2_ParamLimits

0xb2e2,	// (0x00018967) list_double_graphic_pane_vc_g2

0x4402,	// (0x00011a87) list_double_graphic_pane_vc_g3_ParamLimits

0x4402,	// (0x00011a87) list_double_graphic_pane_vc_g3

0x0003,

0xfa4e,	// (0x0001d0d3) list_double_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x0001d0d3) list_double_graphic_pane_vc_g

0xb2ff,	// (0x00018984) list_double_graphic_pane_vc_t1_ParamLimits

0xb2ff,	// (0x00018984) list_double_graphic_pane_vc_t1

0xb31e,	// (0x000189a3) list_double_graphic_pane_vc_t2_ParamLimits

0xb31e,	// (0x000189a3) list_double_graphic_pane_vc_t2

0x0001,

0xfa57,	// (0x0001d0dc) list_double_graphic_pane_vc_t_ParamLimits

0xfa57,	// (0x0001d0dc) list_double_graphic_pane_vc_t

0x54d5,	// (0x00012b5a) aid_size_cell_fastswap

0x54dd,	// (0x00012b62) aid_size_cell_touch_ParamLimits

0x54dd,	// (0x00012b62) aid_size_cell_touch

0x5748,	// (0x00012dcd) popup_fast_swap_wide_window_ParamLimits

0x5748,	// (0x00012dcd) popup_fast_swap_wide_window

0x584e,	// (0x00012ed3) touch_pane_ParamLimits

0x584e,	// (0x00012ed3) touch_pane

0x3afd,	// (0x00011182) button_value_adjust_pane_cp2

0x3b05,	// (0x0001118a) button_value_adjust_pane_cp4

0x3b0d,	// (0x00011192) form_field_data_pane_cp2

0x84ba,	// (0x00015b3f) form_field_data_wide_pane_cp2

0x4068,	// (0x000116ed) bg_scroll_pane_ParamLimits

0x5adc,	// (0x00013161) scroll_handle_pane_ParamLimits

0x5af0,	// (0x00013175) scroll_sc2_down_pane_ParamLimits

0x5af0,	// (0x00013175) scroll_sc2_down_pane

0x40ae,	// (0x00011733) scroll_sc2_up_pane_ParamLimits

0x40ae,	// (0x00011733) scroll_sc2_up_pane

0xb7f5,	// (0x00018e7a) grid_wheel_folder_pane_g1_ParamLimits

0xb7f5,	// (0x00018e7a) grid_wheel_folder_pane_g1

0x5cac,	// (0x00013331) clock_nsta_pane_cp2_ParamLimits

0x5cac,	// (0x00013331) clock_nsta_pane_cp2

0x8a9c,	// (0x00016121) listscroll_midp_pane_ParamLimits

0x8aa8,	// (0x0001612d) midp_canvas_pane

0x4a3c,	// (0x000120c1) nsta_clock_indic_pane

0x4a7c,	// (0x00012101) listscroll_form_pane_vc

0x4a8c,	// (0x00012111) listscroll_set_pane_vc_ParamLimits

0x4a8c,	// (0x00012111) listscroll_set_pane_vc

0x8d11,	// (0x00016396) clock_nsta_pane

0x8d8c,	// (0x00016411) indicator_nsta_pane

0x9069,	// (0x000166ee) bg_popup_sub_pane_cp2_ParamLimits

0x907d,	// (0x00016702) find_pane_cp2_ParamLimits

0x907d,	// (0x00016702) find_pane_cp2

0x9093,	// (0x00016718) grid_toobar_pane_ParamLimits

0x924d,	// (0x000168d2) list_form_gen_pane_vc_ParamLimits

0x924d,	// (0x000168d2) list_form_gen_pane_vc

0x9263,	// (0x000168e8) scroll_pane_cp8_vc_ParamLimits

0x9263,	// (0x000168e8) scroll_pane_cp8_vc

0x92df,	// (0x00016964) data_form_wide_pane_vc_ParamLimits

0x92df,	// (0x00016964) data_form_wide_pane_vc

0x92eb,	// (0x00016970) form_field_data_wide_pane_vc_g1

0x92f3,	// (0x00016978) form_field_data_wide_pane_vc_t1_ParamLimits

0x92f3,	// (0x00016978) form_field_data_wide_pane_vc_t1

0x3b34,	// (0x000111b9) input_focus_pane_cp6_vc_ParamLimits

0x3b34,	// (0x000111b9) input_focus_pane_cp6_vc

0x9661,	// (0x00016ce6) list_midp_pane_ParamLimits

0x966d,	// (0x00016cf2) scroll_pane_cp16_ParamLimits

0x966d,	// (0x00016cf2) scroll_pane_cp16

0x96d7,	// (0x00016d5c) button_value_adjust_pane_ParamLimits

0x96d7,	// (0x00016d5c) button_value_adjust_pane

0xa61d,	// (0x00017ca2) button_value_adjust_pane_cp6_ParamLimits

0xa61d,	// (0x00017ca2) button_value_adjust_pane_cp6

0xa743,	// (0x00017dc8) settings_code_pane_cp_ParamLimits

0xa743,	// (0x00017dc8) settings_code_pane_cp

0x366c,	// (0x00010cf1) cell_touch_pane_g1

0x366c,	// (0x00010cf1) cell_touch_pane_g2

0x0001,

0xf6c8,	// (0x0001cd4d) cell_touch_pane_g

0xadf0,	// (0x00018475) cell_touch_pane_cp_ParamLimits

0xadf0,	// (0x00018475) cell_touch_pane_cp

0xae00,	// (0x00018485) cell_touch_pane_ParamLimits

0xae00,	// (0x00018485) cell_touch_pane

0x366c,	// (0x00010cf1) scroll_sc2_down_pane_g1

0x366c,	// (0x00010cf1) scroll_sc2_up_pane_g1

0x3696,	// (0x00010d1b) bg_set_opt_pane_cp4_vc

0xae4a,	// (0x000184cf) list_set_graphic_pane_vc_g1_ParamLimits

0xae4a,	// (0x000184cf) list_set_graphic_pane_vc_g1

0xae56,	// (0x000184db) list_set_graphic_pane_vc_g2_ParamLimits

0xae56,	// (0x000184db) list_set_graphic_pane_vc_g2

0x0001,

0xf9c4,	// (0x0001d049) list_set_graphic_pane_vc_g_ParamLimits

0xf9c4,	// (0x0001d049) list_set_graphic_pane_vc_g

0xae62,	// (0x000184e7) text_primary_small_cp13_vc_ParamLimits

0xae62,	// (0x000184e7) text_primary_small_cp13_vc

0xae7a,	// (0x000184ff) list_set_graphic_pane_vc_ParamLimits

0xae7a,	// (0x000184ff) list_set_graphic_pane_vc

0x3696,	// (0x00010d1b) input_focus_pane_cp2_vc

0x366c,	// (0x00010cf1) setting_code_pane_vc_g1

0x3729,	// (0x00010dae) setting_code_pane_vc_t1

0xae8d,	// (0x00018512) set_text_pane_vc_t1_ParamLimits

0xae8d,	// (0x00018512) set_text_pane_vc_t1

0x3696,	// (0x00010d1b) input_focus_pane_cp1_vc

0xaeaa,	// (0x0001852f) list_set_text_pane_vc

0x366c,	// (0x00010cf1) setting_text_pane_vc_g1

0x3696,	// (0x00010d1b) bg_set_opt_pane_cp2_vc

0x3720,	// (0x00010da5) setting_slider_graphic_pane_vc_g1

0xaeb4,	// (0x00018539) setting_slider_graphic_pane_vc_t1

0xaec4,	// (0x00018549) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c9,	// (0x0001d04e) setting_slider_graphic_pane_vc_t

0xaed4,	// (0x00018559) slider_set_pane_cp_vc

0xaedc,	// (0x00018561) slider_set_pane_vc_g1

0xaee5,	// (0x0001856a) slider_set_pane_vc_g2

0x0006,

0xf9ce,	// (0x0001d053) slider_set_pane_vc_g

0x3bfa,	// (0x0001127f) set_opt_bg_pane_g1_copy1

0x3c02,	// (0x00011287) set_opt_bg_pane_g2_copy1

0xaf11,	// (0x00018596) set_opt_bg_pane_g3_copy1

0x3c12,	// (0x00011297) set_opt_bg_pane_g4_copy1

0x3c1a,	// (0x0001129f) set_opt_bg_pane_g5_copy1

0x3c22,	// (0x000112a7) set_opt_bg_pane_g6_copy1

0xaf19,	// (0x0001859e) set_opt_bg_pane_g7_copy1

0xaf23,	// (0x000185a8) set_opt_bg_pane_g8_copy1

0xaf2b,	// (0x000185b0) set_opt_bg_pane_g9_copy1

0x3696,	// (0x00010d1b) bg_set_opt_pane_cp_vc

0xaf33,	// (0x000185b8) setting_slider_pane_vc_t1

0xaf42,	// (0x000185c7) setting_slider_pane_vc_t2

0xaf52,	// (0x000185d7) setting_slider_pane_vc_t3

0x0002,

0xf9dd,	// (0x0001d062) setting_slider_pane_vc_t

0xaf62,	// (0x000185e7) slider_set_pane_vc

0x66aa,	// (0x00013d2f) volume_set_pane_vc_g1

0x69a5,	// (0x0001402a) volume_set_pane_vc_g2

0x69ae,	// (0x00014033) volume_set_pane_vc_g3

0x69b7,	// (0x0001403c) volume_set_pane_vc_g4

0x69c0,	// (0x00014045) volume_set_pane_vc_g5

0x69c9,	// (0x0001404e) volume_set_pane_vc_g6

0x69d2,	// (0x00014057) volume_set_pane_vc_g7

0x69db,	// (0x00014060) volume_set_pane_vc_g8

0x69e4,	// (0x00014069) volume_set_pane_vc_g9

0x69ed,	// (0x00014072) volume_set_pane_vc_g10

0x0009,

0xf9e4,	// (0x0001d069) volume_set_pane_vc_g

0xaf6a,	// (0x000185ef) volume_set_pane_vc

0xaf74,	// (0x000185f9) button_value_adjust_pane_cp1_vc

0xaf7e,	// (0x00018603) list_highlight_pane_cp2_vc

0xaf87,	// (0x0001860c) list_set_pane_vc_ParamLimits

0xaf87,	// (0x0001860c) list_set_pane_vc

0xafe5,	// (0x0001866a) main_pane_set_vc_t1_ParamLimits

0xafe5,	// (0x0001866a) main_pane_set_vc_t1

0xaffa,	// (0x0001867f) main_pane_set_vc_t2_ParamLimits

0xaffa,	// (0x0001867f) main_pane_set_vc_t2

0xb00c,	// (0x00018691) main_pane_set_vc_t3_ParamLimits

0xb00c,	// (0x00018691) main_pane_set_vc_t3

0xb01e,	// (0x000186a3) main_pane_set_vc_t4_ParamLimits

0xb01e,	// (0x000186a3) main_pane_set_vc_t4

0x0003,

0xf9f9,	// (0x0001d07e) main_pane_set_vc_t_ParamLimits

0xf9f9,	// (0x0001d07e) main_pane_set_vc_t

0xb030,	// (0x000186b5) setting_code_pane_vc_ParamLimits

0xb030,	// (0x000186b5) setting_code_pane_vc

0xb03f,	// (0x000186c4) setting_slider_graphic_pane_vc

0xb03f,	// (0x000186c4) setting_slider_pane_vc

0xb03f,	// (0x000186c4) setting_text_pane_vc

0xb03f,	// (0x000186c4) setting_volume_pane_vc

0xb047,	// (0x000186cc) scroll_pane_cp121_vc

0x3aeb,	// (0x00011170) set_content_pane_vc

0xb34d,	// (0x000189d2) button_value_adjust_pane_g1

0xb356,	// (0x000189db) button_value_adjust_pane_g2

0x0001,

0xfa5c,	// (0x0001d0e1) button_value_adjust_pane_g

0xb35f,	// (0x000189e4) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb35f,	// (0x000189e4) form_field_slider_wide_pane_vc_t1

0xb373,	// (0x000189f8) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb373,	// (0x000189f8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa61,	// (0x0001d0e6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa61,	// (0x0001d0e6) form_field_slider_wide_pane_vc_t

0x3704,	// (0x00010d89) input_focus_pane_cp10_vc_ParamLimits

0x3704,	// (0x00010d89) input_focus_pane_cp10_vc

0xb3a1,	// (0x00018a26) slider_cont_pane_cp1_vc_ParamLimits

0xb3a1,	// (0x00018a26) slider_cont_pane_cp1_vc

0xb3b3,	// (0x00018a38) slider_form_pane_g1_cp2

0xaee5,	// (0x0001856a) slider_form_pane_g2_cp2

0xb3e0,	// (0x00018a65) form_field_slider_pane_vc_t3

0xb3ee,	// (0x00018a73) form_field_slider_pane_vc_t4

0xb3fc,	// (0x00018a81) slider_form_pane_vc_ParamLimits

0xb3fc,	// (0x00018a81) slider_form_pane_vc

0xb409,	// (0x00018a8e) form_field_slider_pane_vc_t1_ParamLimits

0xb409,	// (0x00018a8e) form_field_slider_pane_vc_t1

0xb373,	// (0x000189f8) form_field_slider_pane_vc_t2_ParamLimits

0xb373,	// (0x000189f8) form_field_slider_pane_vc_t2

0x0001,

0xfa73,	// (0x0001d0f8) form_field_slider_pane_vc_t_ParamLimits

0xfa73,	// (0x0001d0f8) form_field_slider_pane_vc_t

0x3704,	// (0x00010d89) input_focus_pane_cp9_vc_ParamLimits

0x3704,	// (0x00010d89) input_focus_pane_cp9_vc

0xb425,	// (0x00018aaa) slider_cont_pane_vc_ParamLimits

0xb425,	// (0x00018aaa) slider_cont_pane_vc

0xb439,	// (0x00018abe) list_form_graphic_pane_cp_vc_ParamLimits

0xb439,	// (0x00018abe) list_form_graphic_pane_cp_vc

0x92eb,	// (0x00016970) form_field_popup_wide_pane_vc_g1

0xb44e,	// (0x00018ad3) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb44e,	// (0x00018ad3) form_field_popup_wide_pane_vc_t1

0x3b34,	// (0x000111b9) input_focus_pane_cp8_vc_ParamLimits

0x3b34,	// (0x000111b9) input_focus_pane_cp8_vc

0xb493,	// (0x00018b18) list_form_wide_pane_vc_ParamLimits

0xb493,	// (0x00018b18) list_form_wide_pane_vc

0xb49f,	// (0x00018b24) list_form_graphic_pane_vc_g1

0xb4a7,	// (0x00018b2c) list_form_graphic_pane_vc_t1_ParamLimits

0xb4a7,	// (0x00018b2c) list_form_graphic_pane_vc_t1

0x3712,	// (0x00010d97) list_highlight_pane_cp5_vc_ParamLimits

0x3712,	// (0x00010d97) list_highlight_pane_cp5_vc

0xb4c3,	// (0x00018b48) list_form_graphic_pane_vc_ParamLimits

0xb4c3,	// (0x00018b48) list_form_graphic_pane_vc

0x92eb,	// (0x00016970) form_field_popup_pane_vc_g1

0xb4d9,	// (0x00018b5e) form_field_popup_pane_vc_t1_ParamLimits

0xb4d9,	// (0x00018b5e) form_field_popup_pane_vc_t1

0x3b34,	// (0x000111b9) input_focus_pane_cp7_vc_ParamLimits

0x3b34,	// (0x000111b9) input_focus_pane_cp7_vc

0xb4f0,	// (0x00018b75) list_form_pane_vc_ParamLimits

0xb4f0,	// (0x00018b75) list_form_pane_vc

0xb4fc,	// (0x00018b81) data_form_pane_vc_t1_ParamLimits

0xb4fc,	// (0x00018b81) data_form_pane_vc_t1

0x3bfa,	// (0x0001127f) input_focus_pane_vc_g1

0x3c02,	// (0x00011287) input_focus_pane_vc_g2

0x3c0a,	// (0x0001128f) input_focus_pane_vc_g3

0x3c12,	// (0x00011297) input_focus_pane_vc_g4

0x3c1a,	// (0x0001129f) input_focus_pane_vc_g5

0x3c22,	// (0x000112a7) input_focus_pane_vc_g6

0x3c2a,	// (0x000112af) input_focus_pane_vc_g7

0x3c32,	// (0x000112b7) input_focus_pane_vc_g8

0x3c3a,	// (0x000112bf) input_focus_pane_vc_g9

0x366c,	// (0x00010cf1) input_focus_pane_vc_g10

0x0009,

0xf651,	// (0x0001ccd6) input_focus_pane_vc_g

0x92df,	// (0x00016964) data_form_pane_vc_ParamLimits

0x92df,	// (0x00016964) data_form_pane_vc

0x92eb,	// (0x00016970) form_field_data_pane_vc_g1

0xb517,	// (0x00018b9c) form_field_data_pane_vc_t1_ParamLimits

0xb517,	// (0x00018b9c) form_field_data_pane_vc_t1

0x3b34,	// (0x000111b9) input_focus_pane_vc_ParamLimits

0x3b34,	// (0x000111b9) input_focus_pane_vc

0xb531,	// (0x00018bb6) button_value_adjust_pane_cp3_vc

0xb539,	// (0x00018bbe) button_value_adjust_pane_cp5_vc

0xb541,	// (0x00018bc6) form_field_data_pane_vc_ParamLimits

0xb541,	// (0x00018bc6) form_field_data_pane_vc

0xb558,	// (0x00018bdd) form_field_data_pane_vc_cp2

0xb560,	// (0x00018be5) form_field_data_wide_pane_vc_ParamLimits

0xb560,	// (0x00018be5) form_field_data_wide_pane_vc

0xb576,	// (0x00018bfb) form_field_data_wide_pane_vc_cp2

0xb57e,	// (0x00018c03) form_field_popup_pane_vc_ParamLimits

0xb57e,	// (0x00018c03) form_field_popup_pane_vc

0xb595,	// (0x00018c1a) form_field_popup_wide_pane_vc_ParamLimits

0xb595,	// (0x00018c1a) form_field_popup_wide_pane_vc

0xb5ab,	// (0x00018c30) form_field_slider_pane_vc_ParamLimits

0xb5ab,	// (0x00018c30) form_field_slider_pane_vc

0xb5be,	// (0x00018c43) form_field_slider_wide_pane_vc_ParamLimits

0xb5be,	// (0x00018c43) form_field_slider_wide_pane_vc

0xb5d1,	// (0x00018c56) grid_touch_1_pane_ParamLimits

0xb5d1,	// (0x00018c56) grid_touch_1_pane

0xb5dd,	// (0x00018c62) grid_touch_2_pane_ParamLimits

0xb5dd,	// (0x00018c62) grid_touch_2_pane

0x4a13,	// (0x00012098) touch_pane_g1_ParamLimits

0x4a13,	// (0x00012098) touch_pane_g1

0xb5f5,	// (0x00018c7a) cell_app_pane_cp_wide_ParamLimits

0xb5f5,	// (0x00018c7a) cell_app_pane_cp_wide

0xb606,	// (0x00018c8b) grid_popup_fast_wide_pane_ParamLimits

0xb606,	// (0x00018c8b) grid_popup_fast_wide_pane

0xb61a,	// (0x00018c9f) scroll_pane_cp19_ParamLimits

0xb61a,	// (0x00018c9f) scroll_pane_cp19

0x3696,	// (0x00010d1b) bg_popup_window_pane_cp20

0xb62e,	// (0x00018cb3) listscroll_popup_fast_wide_pane

0xb636,	// (0x00018cbb) grid_indicator_nsta_pane

0xb648,	// (0x00018ccd) clock_nsta_pane_g1

0xb651,	// (0x00018cd6) clock_nsta_pane_t1

0xb66d,	// (0x00018cf2) cell_indicator_nsta_pane_ParamLimits

0xb66d,	// (0x00018cf2) cell_indicator_nsta_pane

0xb6a2,	// (0x00018d27) cell_indicator_nsta_pane_g1

0xb6b0,	// (0x00018d35) cell_indicator_nsta_pane_g2

0x0001,

0xfa84,	// (0x0001d109) cell_indicator_nsta_pane_g

0xb6c2,	// (0x00018d47) clock_nsta_pane_cp

0xb6cb,	// (0x00018d50) indicator_nsta_pane_cp

0xb6d5,	// (0x00018d5a) nsta_clock_indic_pane_g1

0x3768,	// (0x00010ded) grid_indicator_pane

0x884d,	// (0x00015ed2) scroll_pane_cp29

0x5bfb,	// (0x00013280) indicator_nsta_pane_cp2_ParamLimits

0x5bfb,	// (0x00013280) indicator_nsta_pane_cp2

0x3712,	// (0x00010d97) main_apps_wheel_pane

0x9544,	// (0x00016bc9) form_midp_field_text_pane_ParamLimits

0x968d,	// (0x00016d12) scroll_bar_cp050_ParamLimits

0xb72e,	// (0x00018db3) cell_indicator_pane_ParamLimits

0xb72e,	// (0x00018db3) cell_indicator_pane

0xb747,	// (0x00018dcc) cell_indicator_pane_g1

0xb751,	// (0x00018dd6) grid_wheel_folder_pane_ParamLimits

0xb751,	// (0x00018dd6) grid_wheel_folder_pane

0xb767,	// (0x00018dec) list_wheel_apps_pane_ParamLimits

0xb767,	// (0x00018dec) list_wheel_apps_pane

0xb778,	// (0x00018dfd) main_apps_wheel_pane_g1_ParamLimits

0xb778,	// (0x00018dfd) main_apps_wheel_pane_g1

0xb78c,	// (0x00018e11) main_apps_wheel_pane_g2_ParamLimits

0xb78c,	// (0x00018e11) main_apps_wheel_pane_g2

0x0001,

0xfaa0,	// (0x0001d125) main_apps_wheel_pane_g_ParamLimits

0xfaa0,	// (0x0001d125) main_apps_wheel_pane_g

0xb7a4,	// (0x00018e29) main_apps_wheel_pane_t1_ParamLimits

0xb7a4,	// (0x00018e29) main_apps_wheel_pane_t1

0xb7c7,	// (0x00018e4c) list_wheel_apps_pane_g1

0xb7cf,	// (0x00018e54) list_wheel_apps_pane_g2

0xb7d7,	// (0x00018e5c) list_wheel_apps_pane_g3

0xb7e1,	// (0x00018e66) list_wheel_apps_pane_g4

0xb7eb,	// (0x00018e70) list_wheel_apps_pane_g5

0x0004,

0xfaa5,	// (0x0001d12a) list_wheel_apps_pane_g

0x46c1,	// (0x00011d46) navi_icon_text_pane

0x8c40,	// (0x000162c5) aid_fill_nsta

0xb80e,	// (0x00018e93) navi_icon_text_pane_g1

0xb81a,	// (0x00018e9f) navi_icon_text_pane_t1

0x45b1,	// (0x00011c36) list_set_graphic_pane_t1_ParamLimits

0x45b1,	// (0x00011c36) list_set_graphic_pane_t1

0x9dd8,	// (0x0001745d) popup_midp_note_alarm_window_t6_ParamLimits

0x9dd8,	// (0x0001745d) popup_midp_note_alarm_window_t6

0x9dea,	// (0x0001746f) popup_midp_note_alarm_window_t7_ParamLimits

0x9dea,	// (0x0001746f) popup_midp_note_alarm_window_t7

0x9dfc,	// (0x00017481) popup_midp_note_alarm_window_t8_ParamLimits

0x9dfc,	// (0x00017481) popup_midp_note_alarm_window_t8

0x9e0e,	// (0x00017493) popup_midp_note_alarm_window_t9_ParamLimits

0x9e0e,	// (0x00017493) popup_midp_note_alarm_window_t9

0x9e20,	// (0x000174a5) popup_midp_note_alarm_window_t10_ParamLimits

0x9e20,	// (0x000174a5) popup_midp_note_alarm_window_t10

0x9e32,	// (0x000174b7) popup_midp_note_alarm_window_t11_ParamLimits

0x9e32,	// (0x000174b7) popup_midp_note_alarm_window_t11

0x9e44,	// (0x000174c9) scroll_pane_cp17_ParamLimits

0x9e44,	// (0x000174c9) scroll_pane_cp17

0x66aa,	// (0x00013d2f) volume_small_pane_cp_g1

0x69f6,	// (0x0001407b) volume_small_pane_cp_g2

0x69ff,	// (0x00014084) volume_small_pane_cp_g3

0x6a08,	// (0x0001408d) volume_small_pane_cp_g4

0x6a11,	// (0x00014096) volume_small_pane_cp_g5

0x69c0,	// (0x00014045) volume_small_pane_cp_g6

0x6a1a,	// (0x0001409f) volume_small_pane_cp_g7

0x6a23,	// (0x000140a8) volume_small_pane_cp_g8

0x6a2c,	// (0x000140b1) volume_small_pane_cp_g9

0x6a35,	// (0x000140ba) volume_small_pane_cp_g10

0x482b,	// (0x00011eb0) midp_ticker_pane_g1_ParamLimits

0x4837,	// (0x00011ebc) midp_ticker_pane_g2_ParamLimits

0xf71d,	// (0x0001cda2) midp_ticker_pane_g_ParamLimits

0x4843,	// (0x00011ec8) midp_ticker_pane_t1_ParamLimits

0x8c56,	// (0x000162db) aid_fill_nsta_2

0x9679,	// (0x00016cfe) list_form2_midp_pane

0xa7ab,	// (0x00017e30) midp_editing_number_pane_ParamLimits

0xa7ba,	// (0x00017e3f) midp_ticker_pane_ParamLimits

0xb82c,	// (0x00018eb1) form2_midp_field_pane

0xb850,	// (0x00018ed5) scroll_pane_cp51

0xb870,	// (0x00018ef5) form2_midp_button_pane_ParamLimits

0xb870,	// (0x00018ef5) form2_midp_button_pane

0xb882,	// (0x00018f07) form2_midp_content_pane_ParamLimits

0xb882,	// (0x00018f07) form2_midp_content_pane

0xb89c,	// (0x00018f21) form2_midp_field_choice_group_pane

0xb8a4,	// (0x00018f29) form2_midp_field_pane_g1

0xb8ac,	// (0x00018f31) form2_midp_field_pane_g2

0xb8b4,	// (0x00018f39) form2_midp_field_pane_g3

0xb8bc,	// (0x00018f41) form2_midp_field_pane_g4

0x0003,

0xfaca,	// (0x0001d14f) form2_midp_field_pane_g

0xb8c4,	// (0x00018f49) form2_midp_gauge_slider_pane

0xb8cc,	// (0x00018f51) form2_midp_gauge_wait_pane

0xb8d4,	// (0x00018f59) form2_midp_image_pane_ParamLimits

0xb8d4,	// (0x00018f59) form2_midp_image_pane

0xb8ef,	// (0x00018f74) form2_midp_label_pane_ParamLimits

0xb8ef,	// (0x00018f74) form2_midp_label_pane

0xb908,	// (0x00018f8d) form2_midp_label_pane_cp_ParamLimits

0xb908,	// (0x00018f8d) form2_midp_label_pane_cp

0xb929,	// (0x00018fae) form2_midp_string_pane_ParamLimits

0xb929,	// (0x00018fae) form2_midp_string_pane

0xb93b,	// (0x00018fc0) form2_midp_text_pane_ParamLimits

0xb93b,	// (0x00018fc0) form2_midp_text_pane

0xb956,	// (0x00018fdb) form2_midp_time_pane

0xb966,	// (0x00018feb) input_focus_pane_cp51_ParamLimits

0xb966,	// (0x00018feb) input_focus_pane_cp51

0xb97e,	// (0x00019003) form2_midp_label_pane_t1_ParamLimits

0xb97e,	// (0x00019003) form2_midp_label_pane_t1

0xb9bf,	// (0x00019044) form2_mdip_text_pane_t1_ParamLimits

0xb9bf,	// (0x00019044) form2_mdip_text_pane_t1

0xb9de,	// (0x00019063) form2_midp_time_pane_t1

0xb9f9,	// (0x0001907e) form2_midp_gauge_slider_pane_t1

0xba0b,	// (0x00019090) form2_midp_gauge_slider_pane_t2

0xba1d,	// (0x000190a2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad3,	// (0x0001d158) form2_midp_gauge_slider_pane_t

0xba2f,	// (0x000190b4) form2_midp_slider_pane

0xba3b,	// (0x000190c0) form2_midp_gauge_wait_pane_t1

0xba49,	// (0x000190ce) form2_midp_wait_pane_ParamLimits

0xba49,	// (0x000190ce) form2_midp_wait_pane

0xba74,	// (0x000190f9) list_single_2graphic_pane_cp4_ParamLimits

0xba74,	// (0x000190f9) list_single_2graphic_pane_cp4

0x9354,	// (0x000169d9) list_single_midp_graphic_pane_cp_ParamLimits

0x9354,	// (0x000169d9) list_single_midp_graphic_pane_cp

0x3696,	// (0x00010d1b) list_highlight_pane_cp20

0xba9c,	// (0x00019121) list_single_2graphic_pane_g1_cp4

0xacf6,	// (0x0001837b) list_single_2graphic_pane_g2_cp4

0xbaa4,	// (0x00019129) list_single_2graphic_pane_t1_cp4

0x3712,	// (0x00010d97) list_highlight_pane_cp21

0xbab3,	// (0x00019138) list_single_midp_graphic_pane_g4_cp

0xbac2,	// (0x00019147) list_single_midp_graphic_pane_t1_cp

0xbad7,	// (0x0001915c) form2_mdip_string_pane_t1_ParamLimits

0xbad7,	// (0x0001915c) form2_mdip_string_pane_t1

0x3696,	// (0x00010d1b) bg_wml_button_pane_cp2

0x366c,	// (0x00010cf1) form2_midp_image_pane_g1

0x3a9e,	// (0x00011123) list_double_large_graphic_pane_g5_ParamLimits

0x3a9e,	// (0x00011123) list_double_large_graphic_pane_g5

0x8a9c,	// (0x00016121) midp_form_pane_ParamLimits

0x3712,	// (0x00010d97) main_apps_wheel_pane_ParamLimits

0x62ec,	// (0x00013971) popup_preview_window_ParamLimits

0x62ec,	// (0x00013971) popup_preview_window

0x64a7,	// (0x00013b2c) popup_touch_info_window_ParamLimits

0x64a7,	// (0x00013b2c) popup_touch_info_window

0x64c5,	// (0x00013b4a) popup_touch_menu_window_ParamLimits

0x64c5,	// (0x00013b4a) popup_touch_menu_window

0x3662,	// (0x00010ce7) bg_popup_sub_pane_cp6

0xbbde,	// (0x00019263) list_touch_menu_pane

0xbbe6,	// (0x0001926b) list_single_touch_menu_pane_ParamLimits

0xbbe6,	// (0x0001926b) list_single_touch_menu_pane

0xbbfc,	// (0x00019281) list_single_touch_menu_pane_t1

0x3712,	// (0x00010d97) bg_popup_sub_pane_cp7_ParamLimits

0x3712,	// (0x00010d97) bg_popup_sub_pane_cp7

0x96ad,	// (0x00016d32) heading_sub_pane

0xbc0a,	// (0x0001928f) list_touch_info_pane_ParamLimits

0xbc0a,	// (0x0001928f) list_touch_info_pane

0xbc1a,	// (0x0001929f) list_single_touch_info_pane_ParamLimits

0xbc1a,	// (0x0001929f) list_single_touch_info_pane

0xbc2c,	// (0x000192b1) list_single_touch_info_pane_t1

0xbc3a,	// (0x000192bf) list_single_touch_info_pane_t2

0x0001,

0xfae1,	// (0x0001d166) list_single_touch_info_pane_t

0x4814,	// (0x00011e99) bg_popup_heading_pane_cp

0xbc48,	// (0x000192cd) heading_sub_pane_t1

0x9279,	// (0x000168fe) bg_popup_preview_window_pane_cp_ParamLimits

0x9279,	// (0x000168fe) bg_popup_preview_window_pane_cp

0x96ad,	// (0x00016d32) heading_preview_pane

0xbc0a,	// (0x0001928f) list_preview_pane_ParamLimits

0xbc0a,	// (0x0001928f) list_preview_pane

0xbc56,	// (0x000192db) popup_preview_window_g1

0xbc1a,	// (0x0001929f) list_single_preview_pane_ParamLimits

0xbc1a,	// (0x0001929f) list_single_preview_pane

0xbc5e,	// (0x000192e3) list_single_preview_pane_g1

0xbc66,	// (0x000192eb) list_single_preview_pane_t1

0xbc2c,	// (0x000192b1) list_single_preview_pane_t2

0x0001,

0xfae6,	// (0x0001d16b) list_single_preview_pane_t

0xbc74,	// (0x000192f9) bg_popup_heading_pane_cp2_ParamLimits

0xbc74,	// (0x000192f9) bg_popup_heading_pane_cp2

0xbc8a,	// (0x0001930f) heading_preview_pane_g1

0xbc92,	// (0x00019317) heading_preview_pane_t1_ParamLimits

0xbc92,	// (0x00019317) heading_preview_pane_t1

0x377f,	// (0x00010e04) soft_indicator_pane_t1_ParamLimits

0x3a5e,	// (0x000110e3) scroll_pane_ParamLimits

0x40a5,	// (0x0001172a) scroll_sc2_left_pane

0x409c,	// (0x00011721) scroll_sc2_right_pane

0x40c4,	// (0x00011749) scroll_bg_pane_g1_ParamLimits

0x40d9,	// (0x0001175e) scroll_bg_pane_g2_ParamLimits

0x40f1,	// (0x00011776) scroll_bg_pane_g3_ParamLimits

0xf6a8,	// (0x0001cd2d) scroll_bg_pane_g_ParamLimits

0x40c4,	// (0x00011749) scroll_handle_pane_g1_ParamLimits

0x4106,	// (0x0001178b) scroll_handle_pane_g2_ParamLimits

0x40f1,	// (0x00011776) scroll_handle_pane_g3_ParamLimits

0xf6af,	// (0x0001cd34) scroll_handle_pane_g_ParamLimits

0x5f6f,	// (0x000135f4) popup_choice_list_window_ParamLimits

0x5f6f,	// (0x000135f4) popup_choice_list_window

0x9075,	// (0x000166fa) choice_list_pane

0x9125,	// (0x000167aa) cell_toolbar_pane_t1

0x914d,	// (0x000167d2) toolbar_button_pane_ParamLimits

0xa2fe,	// (0x00017983) ai_gene_pane_1_t2_ParamLimits

0xa2fe,	// (0x00017983) ai_gene_pane_1_t2

0x0001,

0xf8d7,	// (0x0001cf5c) ai_gene_pane_1_t_ParamLimits

0xf8d7,	// (0x0001cf5c) ai_gene_pane_1_t

0xbcaf,	// (0x00019334) scroll_sc2_left_pane_g1

0xbcaf,	// (0x00019334) scroll_sc2_right_pane_g1

0x4a30,	// (0x000120b5) bg_popup_sub_pane_cp10

0xbcb9,	// (0x0001933e) list_choice_list_pane

0xbcd2,	// (0x00019357) list_single_choice_list_pane_ParamLimits

0xbcd2,	// (0x00019357) list_single_choice_list_pane

0xbce5,	// (0x0001936a) list_single_choice_list_pane_g1

0x86ac,	// (0x00015d31) list_single_choice_list_pane_t1_ParamLimits

0x86ac,	// (0x00015d31) list_single_choice_list_pane_t1

0xbced,	// (0x00019372) choice_list_pane_g1

0xbcf5,	// (0x0001937a) choice_list_pane_t1

0x3662,	// (0x00010ce7) input_focus_pane_cp11

0x3eb7,	// (0x0001153c) title_pane_stacon_g2_ParamLimits

0x3eb7,	// (0x0001153c) title_pane_stacon_g2

0x0002,

0xf68e,	// (0x0001cd13) title_pane_stacon_g_ParamLimits

0xf68e,	// (0x0001cd13) title_pane_stacon_g

0x4814,	// (0x00011e99) cursor_press_pane

0x6017,	// (0x0001369c) popup_fep_hwr_window_ParamLimits

0x6017,	// (0x0001369c) popup_fep_hwr_window

0x608f,	// (0x00013714) popup_fep_vkb_window_ParamLimits

0x608f,	// (0x00013714) popup_fep_vkb_window

0xbd03,	// (0x00019388) cursor_press_pane_g1

0x0002,

0xfb0f,	// (0x0001d194) fep_vkb_side_pane_g_ParamLimits

0x6a77,	// (0x000140fc) fep_hwr_candidate_pane_ParamLimits

0x6a77,	// (0x000140fc) fep_hwr_candidate_pane

0x6aa1,	// (0x00014126) fep_hwr_side_pane_ParamLimits

0x6aa1,	// (0x00014126) fep_hwr_side_pane

0x6ac1,	// (0x00014146) fep_hwr_top_pane_ParamLimits

0x6ac1,	// (0x00014146) fep_hwr_top_pane

0x6ad9,	// (0x0001415e) fep_hwr_write_pane_ParamLimits

0x6ad9,	// (0x0001415e) fep_hwr_write_pane

0xfb0f,	// (0x0001d194) fep_vkb_side_pane_g

0xbd0b,	// (0x00019390) fep_hwr_top_pane_g1

0xbd1d,	// (0x000193a2) fep_hwr_top_pane_g2

0x6b13,	// (0x00014198) fep_hwr_top_pane_g3

0x0002,

0xfaeb,	// (0x0001d170) fep_hwr_top_pane_g

0x6b28,	// (0x000141ad) fep_hwr_top_text_pane

0x41c9,	// (0x0001184e) fep_hwr_top_text_pane_g1

0xbd53,	// (0x000193d8) fep_hwr_top_text_pane_t1

0x6c1e,	// (0x000142a3) fep_hwr_candidate_pane_g1

0xbf98,	// (0x0001961d) fep_vkb_keypad_pane_g3_ParamLimits

0xbf98,	// (0x0001961d) fep_vkb_keypad_pane_g3

0xbfc0,	// (0x00019645) fep_vkb_keypad_pane_g4_ParamLimits

0xbfc0,	// (0x00019645) fep_vkb_keypad_pane_g4

0xc02f,	// (0x000196b4) fep_vkb_bottom_pane_g2_ParamLimits

0xc02f,	// (0x000196b4) fep_vkb_bottom_pane_g2

0x0001,

0xfb16,	// (0x0001d19b) fep_vkb_bottom_pane_g_ParamLimits

0xfb16,	// (0x0001d19b) fep_vkb_bottom_pane_g

0xbcaf,	// (0x00019334) cell_vkb_side_pane_g2

0x0001,

0xfb20,	// (0x0001d1a5) cell_vkb_side_pane_g

0xc0ba,	// (0x0001973f) cell_vkb_side_pane_t1

0xc0c8,	// (0x0001974d) cell_vkb_side_pane_t1_copy1

0xbcaf,	// (0x00019334) bg_fep_vkb_candidate_pane_g2

0xc1f4,	// (0x00019879) cell_vkb_candidate_pane_ParamLimits

0xbd61,	// (0x000193e6) aid_size_cell_vkb_ParamLimits

0xbd61,	// (0x000193e6) aid_size_cell_vkb

0xc1f4,	// (0x00019879) cell_vkb_candidate_pane

0x6c45,	// (0x000142ca) bg_popup_fep_shadow_pane_g1

0xbdef,	// (0x00019474) fep_vkb_bottom_pane_ParamLimits

0xbdef,	// (0x00019474) fep_vkb_bottom_pane

0xbe25,	// (0x000194aa) fep_vkb_candidate_pane_ParamLimits

0xbe25,	// (0x000194aa) fep_vkb_candidate_pane

0xbe41,	// (0x000194c6) fep_vkb_keypad_pane_ParamLimits

0xbe41,	// (0x000194c6) fep_vkb_keypad_pane

0xbe80,	// (0x00019505) fep_vkb_side_pane_ParamLimits

0xbe80,	// (0x00019505) fep_vkb_side_pane

0xbebc,	// (0x00019541) fep_vkb_top_pane_ParamLimits

0xbebc,	// (0x00019541) fep_vkb_top_pane

0xbef1,	// (0x00019576) fep_vkb_top_pane_g1_ParamLimits

0xbef1,	// (0x00019576) fep_vkb_top_pane_g1

0xbf00,	// (0x00019585) fep_vkb_top_pane_g2_ParamLimits

0xbf00,	// (0x00019585) fep_vkb_top_pane_g2

0xbf0f,	// (0x00019594) fep_vkb_top_pane_g3_ParamLimits

0xbf0f,	// (0x00019594) fep_vkb_top_pane_g3

0x0003,

0xfb06,	// (0x0001d18b) fep_vkb_top_pane_g_ParamLimits

0xfb06,	// (0x0001d18b) fep_vkb_top_pane_g

0xbf2d,	// (0x000195b2) fep_vkb_top_text_pane_ParamLimits

0xbf2d,	// (0x000195b2) fep_vkb_top_text_pane

0xbf3e,	// (0x000195c3) fep_vkb_side_pane_g1_ParamLimits

0xbf3e,	// (0x000195c3) fep_vkb_side_pane_g1

0xbf87,	// (0x0001960c) grid_vkb_side_pane_ParamLimits

0xbf87,	// (0x0001960c) grid_vkb_side_pane

0x6c4d,	// (0x000142d2) bg_popup_fep_shadow_pane_g2

0x6c56,	// (0x000142db) bg_popup_fep_shadow_pane_g3

0x6c5e,	// (0x000142e3) bg_popup_fep_shadow_pane_g4

0x6c67,	// (0x000142ec) bg_popup_fep_shadow_pane_g5

0x6c71,	// (0x000142f6) bg_popup_fep_shadow_pane_g6

0x6c79,	// (0x000142fe) bg_popup_fep_shadow_pane_g7

0x3c12,	// (0x00011297) bg_popup_fep_shadow_pane_g8

0xbfde,	// (0x00019663) grid_vkb_keypad_number_pane_ParamLimits

0xbfde,	// (0x00019663) grid_vkb_keypad_number_pane

0xbfee,	// (0x00019673) grid_vkb_keypad_pane_ParamLimits

0xbfee,	// (0x00019673) grid_vkb_keypad_pane

0xc014,	// (0x00019699) fep_vkb_bottom_pane_g1_ParamLimits

0xc014,	// (0x00019699) fep_vkb_bottom_pane_g1

0xc03d,	// (0x000196c2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc03d,	// (0x000196c2) grid_vkb_keypad_bottom_left_pane

0xc052,	// (0x000196d7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc052,	// (0x000196d7) grid_vkb_keypad_bottom_right_pane

0xc067,	// (0x000196ec) fep_vkb_top_text_pane_g1

0xc082,	// (0x00019707) fep_vkb_top_text_pane_t1

0xc097,	// (0x0001971c) cell_vkb_side_pane_ParamLimits

0xc097,	// (0x0001971c) cell_vkb_side_pane

0xbcaf,	// (0x00019334) cell_vkb_side_pane_g1

0xc0d6,	// (0x0001975b) cell_vkb_keypad_pane_ParamLimits

0xc0d6,	// (0x0001975b) cell_vkb_keypad_pane

0xc14b,	// (0x000197d0) cell_vkb_keypad_pane_g1

0x0008,

0xfb33,	// (0x0001d1b8) bg_popup_fep_shadow_pane_g

0x6c8b,	// (0x00014310) cell_hwr_side_pane_g1

0x6c8b,	// (0x00014310) cell_hwr_side_pane_g2

0xc155,	// (0x000197da) cell_vkb_keypad_pane_t1

0xc163,	// (0x000197e8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc163,	// (0x000197e8) cell_vkb_keypad_bottom_left_pane

0xc180,	// (0x00019805) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc180,	// (0x00019805) cell_vkb_keypad_bottom_right_pane

0xbcaf,	// (0x00019334) cell_vkb_keypad_bottom_left_pane_g1

0xbcaf,	// (0x00019334) cell_vkb_keypad_bottom_right_pane_g1

0xc1b9,	// (0x0001983e) cell_vkb_keypad_number_pane_ParamLimits

0xc1b9,	// (0x0001983e) cell_vkb_keypad_number_pane

0xc1d8,	// (0x0001985d) cell_vkb_keypad_number_pane_g1

0xc1e2,	// (0x00019867) cell_vkb_keypad_number_pane_g2

0xc1eb,	// (0x00019870) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb25,	// (0x0001d1aa) cell_vkb_keypad_number_pane_g

0xc155,	// (0x000197da) cell_vkb_keypad_number_pane_t1

0xc20f,	// (0x00019894) fep_vkb_candidate_pane_g1

0x0001,

0xfb46,	// (0x0001d1cb) cell_hwr_side_pane_g

0xc228,	// (0x000198ad) cell_hwr_side_pane_t1

0x6c95,	// (0x0001431a) cell_hwr_side_pane_t1_copy1

0x6ca3,	// (0x00014328) cell_hwr_candidate_pane_g1

0x6cd2,	// (0x00014357) cell_hwr_candidate_pane_t1

0xbcaf,	// (0x00019334) cell_vkb_candidate_pane_g2

0xc26c,	// (0x000198f1) cell_vkb_candidate_pane_t1

0x6a3e,	// (0x000140c3) bg_popup_fep_shadow_pane_ParamLimits

0x6a3e,	// (0x000140c3) bg_popup_fep_shadow_pane

0x6af3,	// (0x00014178) bg_fep_hwr_top_pane_g4

0xbd2f,	// (0x000193b4) bg_hwr_side_pane_g1_ParamLimits

0xbd2f,	// (0x000193b4) bg_hwr_side_pane_g1

0x6b64,	// (0x000141e9) cell_hwr_side_pane_ParamLimits

0x6b64,	// (0x000141e9) cell_hwr_side_pane

0x6b9f,	// (0x00014224) fep_hwr_write_pane_g1_ParamLimits

0x6b9f,	// (0x00014224) fep_hwr_write_pane_g1

0x6bac,	// (0x00014231) fep_hwr_write_pane_g2_ParamLimits

0x6bac,	// (0x00014231) fep_hwr_write_pane_g2

0x6bb9,	// (0x0001423e) fep_hwr_write_pane_g3_ParamLimits

0x6bb9,	// (0x0001423e) fep_hwr_write_pane_g3

0x6bc7,	// (0x0001424c) fep_hwr_write_pane_g4_ParamLimits

0x6bc7,	// (0x0001424c) fep_hwr_write_pane_g4

0x0005,

0xfaf2,	// (0x0001d177) fep_hwr_write_pane_g_ParamLimits

0xfaf2,	// (0x0001d177) fep_hwr_write_pane_g

0x6af3,	// (0x00014178) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6af3,	// (0x00014178) bg_fep_hwr_candidate_pane_g2

0x6bdc,	// (0x00014261) cell_hwr_candidate_pane_ParamLimits

0x6bdc,	// (0x00014261) cell_hwr_candidate_pane

0x6c1e,	// (0x000142a3) fep_hwr_candidate_pane_g1_ParamLimits

0xbd8f,	// (0x00019414) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbd8f,	// (0x00019414) bg_popup_fep_shadow_pane_cp2

0xbf1f,	// (0x000195a4) fep_vkb_top_pane_g4_ParamLimits

0xbf1f,	// (0x000195a4) fep_vkb_top_pane_g4

0xbf65,	// (0x000195ea) fep_vkb_side_pane_g2_ParamLimits

0xbf65,	// (0x000195ea) fep_vkb_side_pane_g2

0x83dd,	// (0x00015a62) list_setting_pane_t4_ParamLimits

0x83dd,	// (0x00015a62) list_setting_pane_t4

0x8457,	// (0x00015adc) list_setting_number_pane_t5_ParamLimits

0x8457,	// (0x00015adc) list_setting_number_pane_t5

0x885d,	// (0x00015ee2) list_double_heading_pane_cp2_ParamLimits

0x885d,	// (0x00015ee2) list_double_heading_pane_cp2

0x3e50,	// (0x000114d5) list_double_heading_pane_g1_cp2_ParamLimits

0x3e50,	// (0x000114d5) list_double_heading_pane_g1_cp2

0xc27a,	// (0x000198ff) list_double_heading_pane_g2_cp2_ParamLimits

0xc27a,	// (0x000198ff) list_double_heading_pane_g2_cp2

0xc28e,	// (0x00019913) list_double_heading_pane_t1_cp2_ParamLimits

0xc28e,	// (0x00019913) list_double_heading_pane_t1_cp2

0xc2a4,	// (0x00019929) list_double_heading_pane_t2_cp2_ParamLimits

0xc2a4,	// (0x00019929) list_double_heading_pane_t2_cp2

0x365a,	// (0x00010cdf) aid_value_unit2

0x5794,	// (0x00012e19) popup_preview_fixed_window

0x3856,	// (0x00010edb) bg_popup_preview_window_pane_cp02

0xc2b6,	// (0x0001993b) list_preview_fixed_pane

0xc2fc,	// (0x00019981) list_empty_pane_fp_ParamLimits

0xc2fc,	// (0x00019981) list_empty_pane_fp

0xc2fc,	// (0x00019981) list_single_cale_day_pane_fp_ParamLimits

0xc2fc,	// (0x00019981) list_single_cale_day_pane_fp

0xc2fc,	// (0x00019981) list_single_graphic_heading_pane_fp_ParamLimits

0xc2fc,	// (0x00019981) list_single_graphic_heading_pane_fp

0xc2fc,	// (0x00019981) list_single_graphic_pane_fp_ParamLimits

0xc2fc,	// (0x00019981) list_single_graphic_pane_fp

0xc2fc,	// (0x00019981) list_single_heading_pane_fp_ParamLimits

0xc2fc,	// (0x00019981) list_single_heading_pane_fp

0xc2fc,	// (0x00019981) list_single_pane_fp_ParamLimits

0xc2fc,	// (0x00019981) list_single_pane_fp

0xc312,	// (0x00019997) list_single_pane_fp_g1_ParamLimits

0xc312,	// (0x00019997) list_single_pane_fp_g1

0x3e5c,	// (0x000114e1) list_single_pane_fp_g2_ParamLimits

0x3e5c,	// (0x000114e1) list_single_pane_fp_g2

0xc31e,	// (0x000199a3) list_single_pane_fp_g3_ParamLimits

0xc31e,	// (0x000199a3) list_single_pane_fp_g3

0xc332,	// (0x000199b7) list_single_pane_fp_g4_ParamLimits

0xc332,	// (0x000199b7) list_single_pane_fp_g4

0x0003,

0xfb59,	// (0x0001d1de) list_single_pane_fp_g_ParamLimits

0xfb59,	// (0x0001d1de) list_single_pane_fp_g

0xc33e,	// (0x000199c3) list_single_pane_fp_t1_ParamLimits

0xc33e,	// (0x000199c3) list_single_pane_fp_t1

0xc355,	// (0x000199da) list_single_graphic_pane_fp_g1_ParamLimits

0xc355,	// (0x000199da) list_single_graphic_pane_fp_g1

0xc312,	// (0x00019997) list_single_graphic_pane_fp_g2_ParamLimits

0xc312,	// (0x00019997) list_single_graphic_pane_fp_g2

0x3e5c,	// (0x000114e1) list_single_graphic_pane_fp_g3_ParamLimits

0x3e5c,	// (0x000114e1) list_single_graphic_pane_fp_g3

0xc31e,	// (0x000199a3) list_single_graphic_pane_fp_g4_ParamLimits

0xc31e,	// (0x000199a3) list_single_graphic_pane_fp_g4

0xc332,	// (0x000199b7) list_single_graphic_pane_fp_g5_ParamLimits

0xc332,	// (0x000199b7) list_single_graphic_pane_fp_g5

0x0004,

0xfb62,	// (0x0001d1e7) list_single_graphic_pane_fp_g_ParamLimits

0xfb62,	// (0x0001d1e7) list_single_graphic_pane_fp_g

0xc361,	// (0x000199e6) list_single_graphic_pane_fp_t1_ParamLimits

0xc361,	// (0x000199e6) list_single_graphic_pane_fp_t1

0xc355,	// (0x000199da) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc355,	// (0x000199da) list_single_graphic_heading_pane_fp_g1

0xc312,	// (0x00019997) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc312,	// (0x00019997) list_single_graphic_heading_pane_fp_g2

0x3e5c,	// (0x000114e1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3e5c,	// (0x000114e1) list_single_graphic_heading_pane_fp_g3

0xc31e,	// (0x000199a3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc31e,	// (0x000199a3) list_single_graphic_heading_pane_fp_g4

0xc332,	// (0x000199b7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc332,	// (0x000199b7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0001d1e7) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0001d1e7) list_single_graphic_heading_pane_fp_g

0xc377,	// (0x000199fc) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc377,	// (0x000199fc) list_single_graphic_heading_pane_fp_t1

0xc38d,	// (0x00019a12) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc38d,	// (0x00019a12) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6d,	// (0x0001d1f2) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6d,	// (0x0001d1f2) list_single_graphic_heading_pane_fp_t

0xc39f,	// (0x00019a24) list_single_cale_day_pane_fp_g1_ParamLimits

0xc39f,	// (0x00019a24) list_single_cale_day_pane_fp_g1

0xc3d7,	// (0x00019a5c) list_single_cale_day_pane_fp_g2_ParamLimits

0xc3d7,	// (0x00019a5c) list_single_cale_day_pane_fp_g2

0xc3e3,	// (0x00019a68) list_single_cale_day_pane_fp_g3_ParamLimits

0xc3e3,	// (0x00019a68) list_single_cale_day_pane_fp_g3

0xc40b,	// (0x00019a90) list_single_cale_day_pane_fp_g4_ParamLimits

0xc40b,	// (0x00019a90) list_single_cale_day_pane_fp_g4

0xc42f,	// (0x00019ab4) list_single_cale_day_pane_fp_g5_ParamLimits

0xc42f,	// (0x00019ab4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb72,	// (0x0001d1f7) list_single_cale_day_pane_fp_g_ParamLimits

0xfb72,	// (0x0001d1f7) list_single_cale_day_pane_fp_g

0xc453,	// (0x00019ad8) list_single_cale_day_pane_fp_t1_ParamLimits

0xc453,	// (0x00019ad8) list_single_cale_day_pane_fp_t1

0xc479,	// (0x00019afe) list_single_cale_day_pane_fp_t2_ParamLimits

0xc479,	// (0x00019afe) list_single_cale_day_pane_fp_t2

0xc492,	// (0x00019b17) list_single_cale_day_pane_fp_t3_ParamLimits

0xc492,	// (0x00019b17) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7d,	// (0x0001d202) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7d,	// (0x0001d202) list_single_cale_day_pane_fp_t

0xc312,	// (0x00019997) list_empty_pane_fp_g1_ParamLimits

0xc312,	// (0x00019997) list_empty_pane_fp_g1

0xc4ab,	// (0x00019b30) list_empty_pane_fp_t1

0xc4b9,	// (0x00019b3e) list_empty_pane_fp_t2

0x0001,

0xfb84,	// (0x0001d209) list_empty_pane_fp_t

0xc312,	// (0x00019997) list_single_heading_pane_fp_g1_ParamLimits

0xc312,	// (0x00019997) list_single_heading_pane_fp_g1

0x3e5c,	// (0x000114e1) list_single_heading_pane_fp_g2_ParamLimits

0x3e5c,	// (0x000114e1) list_single_heading_pane_fp_g2

0xc31e,	// (0x000199a3) list_single_heading_pane_fp_g3_ParamLimits

0xc31e,	// (0x000199a3) list_single_heading_pane_fp_g3

0x0002,

0xfb89,	// (0x0001d20e) list_single_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0001d20e) list_single_heading_pane_fp_g

0xc4c7,	// (0x00019b4c) list_single_heading_pane_fp_t1_ParamLimits

0xc4c7,	// (0x00019b4c) list_single_heading_pane_fp_t1

0xc4d9,	// (0x00019b5e) list_single_heading_pane_fp_t2_ParamLimits

0xc4d9,	// (0x00019b5e) list_single_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0001d215) list_single_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0001d215) list_single_heading_pane_fp_t

0x8712,	// (0x00015d97) aid_size_cell_fast

0x3839,	// (0x00010ebe) soft_indicator_pane_cp1_t1

0x871b,	// (0x00015da0) cell_app_pane_cp2_ParamLimits

0x871b,	// (0x00015da0) cell_app_pane_cp2

0x6a60,	// (0x000140e5) fep_hwr_candidate_drop_down_list_pane

0x6c38,	// (0x000142bd) fep_hwr_candidate_pane_g3_ParamLimits

0x6c38,	// (0x000142bd) fep_hwr_candidate_pane_g3

0x2b84,	// (0x00010209) fep_hwr_candidate_pane_g4_ParamLimits

0x2b84,	// (0x00010209) fep_hwr_candidate_pane_g4

0x0002,

0xfaff,	// (0x0001d184) fep_hwr_candidate_pane_g_ParamLimits

0xfaff,	// (0x0001d184) fep_hwr_candidate_pane_g

0xbe14,	// (0x00019499) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe14,	// (0x00019499) fep_vkb_candidate_drop_down_list_pane

0xc217,	// (0x0001989c) fep_vkb_candidate_pane_g3

0xc21f,	// (0x000198a4) fep_vkb_candidate_pane_g4

0x0002,

0xfb2c,	// (0x0001d1b1) fep_vkb_candidate_pane_g

0x6ca3,	// (0x00014328) cell_hwr_candidate_pane_g1_ParamLimits

0x6cb1,	// (0x00014336) cell_hwr_candidate_pane_g3_ParamLimits

0x6cb1,	// (0x00014336) cell_hwr_candidate_pane_g3

0xe1cb,	// (0x0001b850) cell_hwr_candidate_pane_g4_ParamLimits

0xe1cb,	// (0x0001b850) cell_hwr_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0001d1d0) cell_hwr_candidate_pane_g_ParamLimits

0xfb4b,	// (0x0001d1d0) cell_hwr_candidate_pane_g

0xc236,	// (0x000198bb) cell_vkb_candidate_pane_g3_ParamLimits

0xc236,	// (0x000198bb) cell_vkb_candidate_pane_g3

0xc251,	// (0x000198d6) cell_vkb_candidate_pane_g4_ParamLimits

0xc251,	// (0x000198d6) cell_vkb_candidate_pane_g4

0xc4ef,	// (0x00019b74) cell_app_pane_cp2_g1_ParamLimits

0xc4ef,	// (0x00019b74) cell_app_pane_cp2_g1

0xc50d,	// (0x00019b92) cell_app_pane_cp2_g2_ParamLimits

0xc50d,	// (0x00019b92) cell_app_pane_cp2_g2

0x0001,

0xfb95,	// (0x0001d21a) cell_app_pane_cp2_g_ParamLimits

0xfb95,	// (0x0001d21a) cell_app_pane_cp2_g

0xc519,	// (0x00019b9e) cell_app_pane_cp2_t1_ParamLimits

0xc519,	// (0x00019b9e) cell_app_pane_cp2_t1

0x3b34,	// (0x000111b9) grid_highlight_pane_cp1_ParamLimits

0x3b34,	// (0x000111b9) grid_highlight_pane_cp1

0x6cf0,	// (0x00014375) cell_hwr_candidate_pane_cp1_ParamLimits

0x6cf0,	// (0x00014375) cell_hwr_candidate_pane_cp1

0x6ca3,	// (0x00014328) fep_hwr_candidate_drop_down_list_pane_g1

0x6d0f,	// (0x00014394) fep_hwr_candidate_drop_down_list_pane_g2

0x6d1c,	// (0x000143a1) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0001d21f) fep_hwr_candidate_drop_down_list_pane_g

0x6d29,	// (0x000143ae) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d32,	// (0x000143b7) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d32,	// (0x000143b7) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6d3f,	// (0x000143c4) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6d3f,	// (0x000143c4) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6d4c,	// (0x000143d1) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6d4c,	// (0x000143d1) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6d59,	// (0x000143de) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d59,	// (0x000143de) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6d74,	// (0x000143f9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d74,	// (0x000143f9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6d8f,	// (0x00014414) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6d8f,	// (0x00014414) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6daa,	// (0x0001442f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6daa,	// (0x0001442f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6dc5,	// (0x0001444a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6dc5,	// (0x0001444a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba1,	// (0x0001d226) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba1,	// (0x0001d226) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc52b,	// (0x00019bb0) cell_vkb_candidate_pane_cp1_ParamLimits

0xc52b,	// (0x00019bb0) cell_vkb_candidate_pane_cp1

0xbf1f,	// (0x000195a4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf1f,	// (0x000195a4) fep_vkb_candidate_drop_down_list_pane_g1

0xc54b,	// (0x00019bd0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc54b,	// (0x00019bd0) fep_vkb_candidate_drop_down_list_pane_g2

0xc558,	// (0x00019bdd) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc558,	// (0x00019bdd) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0001d237) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb2,	// (0x0001d237) fep_vkb_candidate_drop_down_list_pane_g

0xc565,	// (0x00019bea) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc565,	// (0x00019bea) fep_vkb_candidate_drop_down_list_scroll_pane

0xc572,	// (0x00019bf7) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc572,	// (0x00019bf7) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc57f,	// (0x00019c04) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc57f,	// (0x00019c04) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc58b,	// (0x00019c10) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc58b,	// (0x00019c10) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc597,	// (0x00019c1c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc597,	// (0x00019c1c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5b8,	// (0x00019c3d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5b8,	// (0x00019c3d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc5d9,	// (0x00019c5e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc5d9,	// (0x00019c5e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc5fa,	// (0x00019c7f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc5fa,	// (0x00019c7f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc61b,	// (0x00019ca0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc61b,	// (0x00019ca0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x0001d23e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x0001d23e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7bbc,	// (0x00015241) title_pane_g1_ParamLimits

0x7bc9,	// (0x0001524e) title_pane_g2_ParamLimits

0xf527,	// (0x0001cbac) title_pane_g_ParamLimits

0x41c1,	// (0x00011846) aid_call2_pane

0x41b9,	// (0x0001183e) aid_call_pane

0x41c9,	// (0x0001184e) popup_clock_analogue_window_g1

0x41c9,	// (0x0001184e) popup_clock_analogue_window_g2

0x5b05,	// (0x0001318a) popup_clock_analogue_window_g3

0x5b0e,	// (0x00013193) popup_clock_analogue_window_g4

0x366c,	// (0x00010cf1) popup_clock_analogue_window_g5

0x0004,

0xf6bd,	// (0x0001cd42) popup_clock_analogue_window_g

0x5b16,	// (0x0001319b) popup_clock_analogue_window_t1

0x5b24,	// (0x000131a9) clock_digital_number_pane_ParamLimits

0x5b24,	// (0x000131a9) clock_digital_number_pane

0x5b30,	// (0x000131b5) clock_digital_number_pane_cp02_ParamLimits

0x5b30,	// (0x000131b5) clock_digital_number_pane_cp02

0x5b3c,	// (0x000131c1) clock_digital_number_pane_cp03_ParamLimits

0x5b3c,	// (0x000131c1) clock_digital_number_pane_cp03

0x5b48,	// (0x000131cd) clock_digital_number_pane_cp04_ParamLimits

0x5b48,	// (0x000131cd) clock_digital_number_pane_cp04

0x5b54,	// (0x000131d9) clock_digital_separator_pane_ParamLimits

0x5b54,	// (0x000131d9) clock_digital_separator_pane

0x5b60,	// (0x000131e5) popup_clock_digital_window_t1_ParamLimits

0x5b60,	// (0x000131e5) popup_clock_digital_window_t1

0x366c,	// (0x00010cf1) clock_digital_number_pane_g1

0x366c,	// (0x00010cf1) clock_digital_number_pane_g2

0x0001,

0xf6c8,	// (0x0001cd4d) clock_digital_number_pane_g

0x366c,	// (0x00010cf1) clock_digital_separator_pane_g1

0x366c,	// (0x00010cf1) clock_digital_separator_pane_g2

0x0001,

0xf6c8,	// (0x0001cd4d) clock_digital_separator_pane_g

0x8c40,	// (0x000162c5) aid_fill_nsta_ParamLimits

0x8d8c,	// (0x00016411) indicator_nsta_pane_ParamLimits

0x8f05,	// (0x0001658a) popup_clock_analogue_window

0x8f05,	// (0x0001658a) popup_clock_digital_window

0xb636,	// (0x00018cbb) grid_indicator_nsta_pane_ParamLimits

0xb65f,	// (0x00018ce4) clock_nsta_pane_t2

0x0001,

0xfa7f,	// (0x0001d104) clock_nsta_pane_t

0x5ac9,	// (0x0001314e) aid_size_max_handle

0x5ad3,	// (0x00013158) aid_size_min_handle

0x4814,	// (0x00011e99) editor_scroll_pane

0xc636,	// (0x00019cbb) ex_editor_pane

0x3cd4,	// (0x00011359) scroll_pane_cp13

0x3a8a,	// (0x0001110f) scroll_pane_cp14

0x4217,	// (0x0001189c) scroll_pane_cp36

0x8871,	// (0x00015ef6) list_single_graphic_hl_pane_cp2_ParamLimits

0x8871,	// (0x00015ef6) list_single_graphic_hl_pane_cp2

0xa89a,	// (0x00017f1f) list_single_graphic_hl_pane_ParamLimits

0xa89a,	// (0x00017f1f) list_single_graphic_hl_pane

0xc63e,	// (0x00019cc3) aid_size_min_hl_cp1

0xc647,	// (0x00019ccc) list_highlight_pane_cp34_ParamLimits

0xc647,	// (0x00019ccc) list_highlight_pane_cp34

0xc658,	// (0x00019cdd) list_single_graphic_hl_pane_g1_ParamLimits

0xc658,	// (0x00019cdd) list_single_graphic_hl_pane_g1

0xc665,	// (0x00019cea) list_single_graphic_hl_pane_g2_ParamLimits

0xc665,	// (0x00019cea) list_single_graphic_hl_pane_g2

0xc665,	// (0x00019cea) list_single_graphic_hl_pane_g3_ParamLimits

0xc665,	// (0x00019cea) list_single_graphic_hl_pane_g3

0x4402,	// (0x00011a87) list_single_graphic_hl_pane_g4_ParamLimits

0x4402,	// (0x00011a87) list_single_graphic_hl_pane_g4

0xc671,	// (0x00019cf6) list_single_graphic_hl_pane_g5_ParamLimits

0xc671,	// (0x00019cf6) list_single_graphic_hl_pane_g5

0x0004,

0xfbca,	// (0x0001d24f) list_single_graphic_hl_pane_g_ParamLimits

0xfbca,	// (0x0001d24f) list_single_graphic_hl_pane_g

0xc685,	// (0x00019d0a) list_single_graphic_hl_pane_t1_ParamLimits

0xc685,	// (0x00019d0a) list_single_graphic_hl_pane_t1

0xc69b,	// (0x00019d20) aid_size_min_hl_cp2

0xc6a4,	// (0x00019d29) list_highlight_pane_cp34_cp2_ParamLimits

0xc6a4,	// (0x00019d29) list_highlight_pane_cp34_cp2

0xc658,	// (0x00019cdd) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc658,	// (0x00019cdd) list_single_graphic_hl_pane_g1_cp2

0xc6b1,	// (0x00019d36) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc6b1,	// (0x00019d36) list_single_graphic_hl_pane_g2_cp2

0xc6bd,	// (0x00019d42) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc6bd,	// (0x00019d42) list_single_graphic_hl_pane_g3_cp2

0x4402,	// (0x00011a87) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4402,	// (0x00011a87) list_single_graphic_hl_pane_g4_cp2

0xc671,	// (0x00019cf6) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc671,	// (0x00019cf6) list_single_graphic_hl_pane_g5_cp2

0x5e0b,	// (0x00013490) control_pane_g4_ParamLimits

0x5e0b,	// (0x00013490) control_pane_g4

0x4a30,	// (0x000120b5) bg_popup_sub_pane_cp10_ParamLimits

0xbcb9,	// (0x0001933e) list_choice_list_pane_ParamLimits

0xbcc8,	// (0x0001934d) scroll_pane_cp23

0x3856,	// (0x00010edb) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2b6,	// (0x0001993b) list_preview_fixed_pane_ParamLimits

0xc2cc,	// (0x00019951) list_preview_fixed_pane_cp_ParamLimits

0xc2cc,	// (0x00019951) list_preview_fixed_pane_cp

0xc2d8,	// (0x0001995d) popup_preview_fixed_window_g1_ParamLimits

0xc2d8,	// (0x0001995d) popup_preview_fixed_window_g1

0xc2e4,	// (0x00019969) popup_preview_fixed_window_g2_ParamLimits

0xc2e4,	// (0x00019969) popup_preview_fixed_window_g2

0x0002,

0xfb52,	// (0x0001d1d7) popup_preview_fixed_window_g_ParamLimits

0xfb52,	// (0x0001d1d7) popup_preview_fixed_window_g

0x5a3d,	// (0x000130c2) aid_navi_side_left_pane_ParamLimits

0x5a52,	// (0x000130d7) aid_navi_side_right_pane_ParamLimits

0x5a6a,	// (0x000130ef) navi_icon_pane_stacon_ParamLimits

0x5a7e,	// (0x00013103) navi_navi_pane_stacon_ParamLimits

0x5a6a,	// (0x000130ef) navi_text_pane_stacon_ParamLimits

0x5663,	// (0x00012ce8) main_text_info_pane

0xc6e1,	// (0x00019d66) listscroll_text_info_pane

0xc6e9,	// (0x00019d6e) list_text_info_pane_ParamLimits

0xc6e9,	// (0x00019d6e) list_text_info_pane

0xc6f8,	// (0x00019d7d) scroll_pane_cp24_ParamLimits

0xc6f8,	// (0x00019d7d) scroll_pane_cp24

0xc716,	// (0x00019d9b) list_text_info_pane_t1_ParamLimits

0xc716,	// (0x00019d9b) list_text_info_pane_t1

0x5f8b,	// (0x00013610) popup_fast_swap2_window_ParamLimits

0x5f8b,	// (0x00013610) popup_fast_swap2_window

0xc74a,	// (0x00019dcf) aid_size_cell_fast2

0x3662,	// (0x00010ce7) bg_popup_window_pane_cp17

0x96ad,	// (0x00016d32) heading_pane_cp2

0xc754,	// (0x00019dd9) listscroll_fast2_pane

0xc75c,	// (0x00019de1) grid_fast2_pane

0xc766,	// (0x00019deb) listscroll_fast2_pane_g1

0xc76e,	// (0x00019df3) listscroll_fast2_pane_g2

0x0001,

0xfbd5,	// (0x0001d25a) listscroll_fast2_pane_g

0x3cd4,	// (0x00011359) scroll_pane_cp26

0xc778,	// (0x00019dfd) cell_fast2_pane_ParamLimits

0xc778,	// (0x00019dfd) cell_fast2_pane

0xc78d,	// (0x00019e12) cell_fast2_pane_g1

0xc796,	// (0x00019e1b) cell_fast2_pane_g2

0xc79f,	// (0x00019e24) cell_fast2_pane_g3

0x0002,

0xfbda,	// (0x0001d25f) cell_fast2_pane_g

0x39c1,	// (0x00011046) grid_highlight_pane_cp9

0x5f53,	// (0x000135d8) main_eswt_pane_ParamLimits

0x5f53,	// (0x000135d8) main_eswt_pane

0xc70d,	// (0x00019d92) list_single_text_info_pane

0xc7a7,	// (0x00019e2c) eswt_ctrl_button_pane

0xc7a7,	// (0x00019e2c) eswt_ctrl_canvas_pane

0xc7af,	// (0x00019e34) eswt_ctrl_combo_pane

0xc7a7,	// (0x00019e2c) eswt_ctrl_default_pane

0xc7a7,	// (0x00019e2c) eswt_ctrl_label_pane

0xc7b7,	// (0x00019e3c) eswt_ctrl_wait_pane

0xc7bf,	// (0x00019e44) eswt_shell_pane

0x3662,	// (0x00010ce7) listscroll_eswt_app_pane

0xc7df,	// (0x00019e64) popup_eswt_tasktip_window_ParamLimits

0xc7df,	// (0x00019e64) popup_eswt_tasktip_window

0x9279,	// (0x000168fe) bg_popup_window_pane_cp18

0xc7f0,	// (0x00019e75) eswt_control_pane_g1_ParamLimits

0xc7f0,	// (0x00019e75) eswt_control_pane_g1

0xc7fd,	// (0x00019e82) eswt_control_pane_g2_ParamLimits

0xc7fd,	// (0x00019e82) eswt_control_pane_g2

0xc80a,	// (0x00019e8f) eswt_control_pane_g3_ParamLimits

0xc80a,	// (0x00019e8f) eswt_control_pane_g3

0xc817,	// (0x00019e9c) eswt_control_pane_g4_ParamLimits

0xc817,	// (0x00019e9c) eswt_control_pane_g4

0x0003,

0xfbe1,	// (0x0001d266) eswt_control_pane_g_ParamLimits

0xfbe1,	// (0x0001d266) eswt_control_pane_g

0x3b34,	// (0x000111b9) bg_button_pane_ParamLimits

0x3b34,	// (0x000111b9) bg_button_pane

0x39d6,	// (0x0001105b) common_borders_pane_copy2_ParamLimits

0x39d6,	// (0x0001105b) common_borders_pane_copy2

0xc824,	// (0x00019ea9) control_button_pane_g1_ParamLimits

0xc824,	// (0x00019ea9) control_button_pane_g1

0xc830,	// (0x00019eb5) control_button_pane_g2_ParamLimits

0xc830,	// (0x00019eb5) control_button_pane_g2

0xc83c,	// (0x00019ec1) control_button_pane_g3_ParamLimits

0xc83c,	// (0x00019ec1) control_button_pane_g3

0x0002,

0xfbea,	// (0x0001d26f) control_button_pane_g_ParamLimits

0xfbea,	// (0x0001d26f) control_button_pane_g

0xc850,	// (0x00019ed5) control_button_pane_t1

0xc85e,	// (0x00019ee3) control_button_pane_t2

0x0001,

0xfbf1,	// (0x0001d276) control_button_pane_t

0x9159,	// (0x000167de) bg_button_pane_g1

0x9169,	// (0x000167ee) bg_button_pane_g2

0x9161,	// (0x000167e6) bg_button_pane_g3

0x9179,	// (0x000167fe) bg_button_pane_g4

0x9171,	// (0x000167f6) bg_button_pane_g5

0x9181,	// (0x00016806) bg_button_pane_g6

0x9189,	// (0x0001680e) bg_button_pane_g7

0x9199,	// (0x0001681e) bg_button_pane_g8

0x9191,	// (0x00016816) bg_button_pane_g9

0x0008,

0xf82b,	// (0x0001ceb0) bg_button_pane_g

0xbc74,	// (0x000192f9) common_borders_pane_ParamLimits

0xbc74,	// (0x000192f9) common_borders_pane

0xc7f0,	// (0x00019e75) eswt_control_pane_g1_copy1_ParamLimits

0xc7f0,	// (0x00019e75) eswt_control_pane_g1_copy1

0xc7fd,	// (0x00019e82) eswt_control_pane_g2_copy1_ParamLimits

0xc7fd,	// (0x00019e82) eswt_control_pane_g2_copy1

0xc80a,	// (0x00019e8f) eswt_control_pane_g3_copy1_ParamLimits

0xc80a,	// (0x00019e8f) eswt_control_pane_g3_copy1

0xc817,	// (0x00019e9c) eswt_control_pane_g4_copy1_ParamLimits

0xc817,	// (0x00019e9c) eswt_control_pane_g4_copy1

0xbcaf,	// (0x00019334) bg_eswt_ctrl_canvas_pane_g1

0xbc74,	// (0x000192f9) common_borders_pane_cp2_ParamLimits

0xbc74,	// (0x000192f9) common_borders_pane_cp2

0xbc74,	// (0x000192f9) common_borders_pane_cp3_ParamLimits

0xbc74,	// (0x000192f9) common_borders_pane_cp3

0xc86c,	// (0x00019ef1) separator_horizontal_pane

0xc874,	// (0x00019ef9) separator_vertical_pane

0xc7f0,	// (0x00019e75) eswt_control_pane_g1_copy2_ParamLimits

0xc7f0,	// (0x00019e75) eswt_control_pane_g1_copy2

0xc7fd,	// (0x00019e82) eswt_control_pane_g2_copy2_ParamLimits

0xc7fd,	// (0x00019e82) eswt_control_pane_g2_copy2

0xc80a,	// (0x00019e8f) eswt_control_pane_g3_copy2_ParamLimits

0xc80a,	// (0x00019e8f) eswt_control_pane_g3_copy2

0xc817,	// (0x00019e9c) eswt_control_pane_g4_copy2_ParamLimits

0xc817,	// (0x00019e9c) eswt_control_pane_g4_copy2

0x3662,	// (0x00010ce7) common_borders_pane_cp4

0xc87d,	// (0x00019f02) separator_horizontal_pane_g1

0xc886,	// (0x00019f0b) separator_horizontal_pane_g2

0xc88f,	// (0x00019f14) separator_horizontal_pane_g3

0x0002,

0xfbf6,	// (0x0001d27b) separator_horizontal_pane_g

0xc7f0,	// (0x00019e75) eswt_control_pane_g1_copy3_ParamLimits

0xc7f0,	// (0x00019e75) eswt_control_pane_g1_copy3

0xc7fd,	// (0x00019e82) eswt_control_pane_g2_copy3_ParamLimits

0xc7fd,	// (0x00019e82) eswt_control_pane_g2_copy3

0xc80a,	// (0x00019e8f) eswt_control_pane_g3_copy3_ParamLimits

0xc80a,	// (0x00019e8f) eswt_control_pane_g3_copy3

0xc817,	// (0x00019e9c) eswt_control_pane_g4_copy3_ParamLimits

0xc817,	// (0x00019e9c) eswt_control_pane_g4_copy3

0x3662,	// (0x00010ce7) common_borders_pane_cp5

0xc898,	// (0x00019f1d) separator_vertical_pane_g1

0xc8a1,	// (0x00019f26) separator_vertical_pane_g2

0xc8aa,	// (0x00019f2f) separator_vertical_pane_g3

0x0002,

0xfbfd,	// (0x0001d282) separator_vertical_pane_g

0xc7f0,	// (0x00019e75) eswt_control_pane_g1_copy4_ParamLimits

0xc7f0,	// (0x00019e75) eswt_control_pane_g1_copy4

0xc7fd,	// (0x00019e82) eswt_control_pane_g2_copy4_ParamLimits

0xc7fd,	// (0x00019e82) eswt_control_pane_g2_copy4

0xc80a,	// (0x00019e8f) eswt_control_pane_g3_copy4_ParamLimits

0xc80a,	// (0x00019e8f) eswt_control_pane_g3_copy4

0xc817,	// (0x00019e9c) eswt_control_pane_g4_copy4_ParamLimits

0xc817,	// (0x00019e9c) eswt_control_pane_g4_copy4

0xc8b3,	// (0x00019f38) eswt_ctrl_combo_button_pane

0xc8bb,	// (0x00019f40) eswt_ctrl_input_pane

0xc8c3,	// (0x00019f48) popup_choice_list_window_cp70

0xc8cb,	// (0x00019f50) eswt_ctrl_input_pane_t1

0x3662,	// (0x00010ce7) input_focus_pane_cp70

0xbc74,	// (0x000192f9) bg_button_pane_cp70_ParamLimits

0xbc74,	// (0x000192f9) bg_button_pane_cp70

0xc8d9,	// (0x00019f5e) eswt_ctrl_combo_button_pane_g1

0xc8e1,	// (0x00019f66) wait_bar_pane_cp70

0x9279,	// (0x000168fe) bg_popup_window_pane_cp70_ParamLimits

0x9279,	// (0x000168fe) bg_popup_window_pane_cp70

0xc8e9,	// (0x00019f6e) popup_eswt_tasktip_window_t1

0xc8ff,	// (0x00019f84) wait_bar_pane_cp71_ParamLimits

0xc8ff,	// (0x00019f84) wait_bar_pane_cp71

0xc90b,	// (0x00019f90) grid_eswt_app_pane

0x40a5,	// (0x0001172a) scroll_pane_cp70

0xc914,	// (0x00019f99) cell_eswt_app_pane_ParamLimits

0xc914,	// (0x00019f99) cell_eswt_app_pane

0xc944,	// (0x00019fc9) cell_eswt_app_pane_g1_ParamLimits

0xc944,	// (0x00019fc9) cell_eswt_app_pane_g1

0xc973,	// (0x00019ff8) cell_eswt_app_pane_g2_ParamLimits

0xc973,	// (0x00019ff8) cell_eswt_app_pane_g2

0x0001,

0xfc04,	// (0x0001d289) cell_eswt_app_pane_g_ParamLimits

0xfc04,	// (0x0001d289) cell_eswt_app_pane_g

0xc997,	// (0x0001a01c) cell_eswt_app_pane_t1_ParamLimits

0xc997,	// (0x0001a01c) cell_eswt_app_pane_t1

0xc9c9,	// (0x0001a04e) grid_highlight_pane_cp70_ParamLimits

0xc9c9,	// (0x0001a04e) grid_highlight_pane_cp70

0x4716,	// (0x00011d9b) set_content_pane_g1

0x8bed,	// (0x00016272) status_small_volume_pane

0x6de0,	// (0x00014465) status_small_volume_pane_g1

0x6de8,	// (0x0001446d) volume_small2_pane

0x6df1,	// (0x00014476) volume_small2_pane_g1

0x6dfa,	// (0x0001447f) volume_small2_pane_g2

0x6e03,	// (0x00014488) volume_small2_pane_g3

0x6e0c,	// (0x00014491) volume_small2_pane_g4

0x6e15,	// (0x0001449a) volume_small2_pane_g5

0x6e1e,	// (0x000144a3) volume_small2_pane_g6

0x6e27,	// (0x000144ac) volume_small2_pane_g7

0x6e30,	// (0x000144b5) volume_small2_pane_g8

0x6e39,	// (0x000144be) volume_small2_pane_g9

0x6e42,	// (0x000144c7) volume_small2_pane_g10

0x0009,

0xfc09,	// (0x0001d28e) volume_small2_pane_g

0xc067,	// (0x000196ec) fep_vkb_top_text_pane_g1_ParamLimits

0xc082,	// (0x00019707) fep_vkb_top_text_pane_t1_ParamLimits

0xc2f0,	// (0x00019975) popup_preview_fixed_window_g3_ParamLimits

0xc2f0,	// (0x00019975) popup_preview_fixed_window_g3

0x643a,	// (0x00013abf) popup_toolbar_trans_pane

0xa5fa,	// (0x00017c7f) aid_height_set_list_ParamLimits

0xa60b,	// (0x00017c90) aid_size_parent_ParamLimits

0x4a30,	// (0x000120b5) list_highlight_pane_cp2_ParamLimits

0x4716,	// (0x00011d9b) set_content_pane_g1_ParamLimits

0xa8b9,	// (0x00017f3e) list_single_image_pane_ParamLimits

0xa8b9,	// (0x00017f3e) list_single_image_pane

0xc9d5,	// (0x0001a05a) aid_size_cell_image_ParamLimits

0xc9d5,	// (0x0001a05a) aid_size_cell_image

0xc9e2,	// (0x0001a067) grid_single_image_pane_ParamLimits

0xc9e2,	// (0x0001a067) grid_single_image_pane

0x3e5c,	// (0x000114e1) list_single_image_pane_g1_ParamLimits

0x3e5c,	// (0x000114e1) list_single_image_pane_g1

0xc31e,	// (0x000199a3) list_single_image_pane_g2_ParamLimits

0xc31e,	// (0x000199a3) list_single_image_pane_g2

0x0001,

0xfc1e,	// (0x0001d2a3) list_single_image_pane_g_ParamLimits

0xfc1e,	// (0x0001d2a3) list_single_image_pane_g

0xc9ee,	// (0x0001a073) list_single_image_pane_t1_ParamLimits

0xc9ee,	// (0x0001a073) list_single_image_pane_t1

0xca04,	// (0x0001a089) cell_image_list_pane_ParamLimits

0xca04,	// (0x0001a089) cell_image_list_pane

0xca18,	// (0x0001a09d) cell_image_list_pane_g1

0xca21,	// (0x0001a0a6) cell_image_list_pane_g2

0x0001,

0xfc23,	// (0x0001d2a8) cell_image_list_pane_g

0xca2a,	// (0x0001a0af) aid_size_cell_tb_trans_pane

0x3b34,	// (0x000111b9) bg_tb_trans_pane

0xca3c,	// (0x0001a0c1) grid_tb_trans_pane

0x9159,	// (0x000167de) bg_tb_trans_pane_g1

0x9169,	// (0x000167ee) bg_tb_trans_pane_g2

0x9161,	// (0x000167e6) bg_tb_trans_pane_g3

0x9179,	// (0x000167fe) bg_tb_trans_pane_g4

0x9171,	// (0x000167f6) bg_tb_trans_pane_g5

0x9199,	// (0x0001681e) bg_tb_trans_pane_g6

0x9191,	// (0x00016816) bg_tb_trans_pane_g7

0x9181,	// (0x00016806) bg_tb_trans_pane_g8

0x9189,	// (0x0001680e) bg_tb_trans_pane_g9

0x0008,

0xfc28,	// (0x0001d2ad) bg_tb_trans_pane_g

0xca50,	// (0x0001a0d5) cell_toolbar_trans_pane_ParamLimits

0xca50,	// (0x0001a0d5) cell_toolbar_trans_pane

0xbcaf,	// (0x00019334) cell_toolbar_trans_pane_g1

0xb834,	// (0x00018eb9) list_form2_midp_pane_t1

0xb842,	// (0x00018ec7) list_form2_midp_pane_t2

0x0001,

0xfac5,	// (0x0001d14a) list_form2_midp_pane_t

0xb850,	// (0x00018ed5) scroll_pane_cp51_ParamLimits

0xba59,	// (0x000190de) form2_midp_wait_pane_g1

0xba62,	// (0x000190e7) form2_midp_wait_pane_g2

0xba6b,	// (0x000190f0) form2_midp_wait_pane_g3

0x0002,

0xfada,	// (0x0001d15f) form2_midp_wait_pane_g

0x3712,	// (0x00010d97) list_highlight_pane_cp21_ParamLimits

0xbab3,	// (0x00019138) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbac2,	// (0x00019147) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa83b,	// (0x00017ec0) list_single_2graphic_im_pane_ParamLimits

0xa83b,	// (0x00017ec0) list_single_2graphic_im_pane

0xca76,	// (0x0001a0fb) list_single_2graphic_im_pane_g1_ParamLimits

0xca76,	// (0x0001a0fb) list_single_2graphic_im_pane_g1

0xca87,	// (0x0001a10c) list_single_2graphic_im_pane_g2_ParamLimits

0xca87,	// (0x0001a10c) list_single_2graphic_im_pane_g2

0xca93,	// (0x0001a118) list_single_2graphic_im_pane_g3_ParamLimits

0xca93,	// (0x0001a118) list_single_2graphic_im_pane_g3

0x0003,

0xfc3b,	// (0x0001d2c0) list_single_2graphic_im_pane_g_ParamLimits

0xfc3b,	// (0x0001d2c0) list_single_2graphic_im_pane_g

0xcab3,	// (0x0001a138) list_single_2graphic_im_pane_t1_ParamLimits

0xcab3,	// (0x0001a138) list_single_2graphic_im_pane_t1

0xc2fc,	// (0x00019981) list_single_graphic_2heading_pane_fp_ParamLimits

0xc2fc,	// (0x00019981) list_single_graphic_2heading_pane_fp

0xc355,	// (0x000199da) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc355,	// (0x000199da) list_single_graphic_2heading_pane_fp_g1

0xc312,	// (0x00019997) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc312,	// (0x00019997) list_single_graphic_2heading_pane_fp_g2

0x3e5c,	// (0x000114e1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3e5c,	// (0x000114e1) list_single_graphic_2heading_pane_fp_g3

0xc31e,	// (0x000199a3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc31e,	// (0x000199a3) list_single_graphic_2heading_pane_fp_g4

0xc332,	// (0x000199b7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc332,	// (0x000199b7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0001d1e7) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0001d1e7) list_single_graphic_2heading_pane_fp_g

0xcae4,	// (0x0001a169) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcae4,	// (0x0001a169) list_single_graphic_2heading_pane_fp_t1

0xc38d,	// (0x00019a12) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc38d,	// (0x00019a12) list_single_graphic_2heading_pane_fp_t2

0xcafa,	// (0x0001a17f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcafa,	// (0x0001a17f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc44,	// (0x0001d2c9) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc44,	// (0x0001d2c9) list_single_graphic_2heading_pane_fp_t

0xbd3b,	// (0x000193c0) fep_hwr_write_pane_g5_ParamLimits

0xbd3b,	// (0x000193c0) fep_hwr_write_pane_g5

0xbd47,	// (0x000193cc) fep_hwr_write_pane_g6_ParamLimits

0xbd47,	// (0x000193cc) fep_hwr_write_pane_g6

0xc7bf,	// (0x00019e44) eswt_shell_pane_ParamLimits

0x9279,	// (0x000168fe) bg_popup_window_pane_cp18_ParamLimits

0x96ad,	// (0x00016d32) heading_pane_cp70

0xc8e9,	// (0x00019f6e) popup_eswt_tasktip_window_t1_ParamLimits

0x8c95,	// (0x0001631a) aid_touch_tab_arrow_left

0x8ca4,	// (0x00016329) aid_touch_tab_arrow_right

0x7bda,	// (0x0001525f) title_pane_g3_ParamLimits

0x7bda,	// (0x0001525f) title_pane_g3

0x3acb,	// (0x00011150) set_value_pane_g1

0x643a,	// (0x00013abf) popup_toolbar_trans_pane_ParamLimits

0xca2a,	// (0x0001a0af) aid_size_cell_tb_trans_pane_ParamLimits

0x3b34,	// (0x000111b9) bg_tb_trans_pane_ParamLimits

0xca3c,	// (0x0001a0c1) grid_tb_trans_pane_ParamLimits

0x3856,	// (0x00010edb) cont_note_pane_ParamLimits

0x3856,	// (0x00010edb) cont_note_pane

0x39d6,	// (0x0001105b) cont_snote2_single_text_pane_ParamLimits

0x39d6,	// (0x0001105b) cont_snote2_single_text_pane

0x39d6,	// (0x0001105b) cont_snote2_single_graphic_pane_ParamLimits

0x39d6,	// (0x0001105b) cont_snote2_single_graphic_pane

0x98d4,	// (0x00016f59) cont_note_wait_pane_ParamLimits

0x98d4,	// (0x00016f59) cont_note_wait_pane

0x98d4,	// (0x00016f59) cont_note_image_pane_ParamLimits

0x98d4,	// (0x00016f59) cont_note_image_pane

0xcb10,	// (0x0001a195) popup_note2_window_g1_ParamLimits

0xcb10,	// (0x0001a195) popup_note2_window_g1

0xcb41,	// (0x0001a1c6) popup_note2_window_t1_ParamLimits

0xcb41,	// (0x0001a1c6) popup_note2_window_t1

0xcb86,	// (0x0001a20b) popup_note2_window_t2_ParamLimits

0xcb86,	// (0x0001a20b) popup_note2_window_t2

0xcbcb,	// (0x0001a250) popup_note2_window_t3_ParamLimits

0xcbcb,	// (0x0001a250) popup_note2_window_t3

0xcc10,	// (0x0001a295) popup_note2_window_t4_ParamLimits

0xcc10,	// (0x0001a295) popup_note2_window_t4

0x38da,	// (0x00010f5f) popup_note2_window_t5_ParamLimits

0x38da,	// (0x00010f5f) popup_note2_window_t5

0x0004,

0xfc50,	// (0x0001d2d5) popup_note2_window_t_ParamLimits

0xfc50,	// (0x0001d2d5) popup_note2_window_t

0xcc3f,	// (0x0001a2c4) popup_note2_image_window_g1_ParamLimits

0xcc3f,	// (0x0001a2c4) popup_note2_image_window_g1

0xcc4b,	// (0x0001a2d0) popup_note2_image_window_g2_ParamLimits

0xcc4b,	// (0x0001a2d0) popup_note2_image_window_g2

0x0001,

0xfc5b,	// (0x0001d2e0) popup_note2_image_window_g_ParamLimits

0xfc5b,	// (0x0001d2e0) popup_note2_image_window_g

0xcc5d,	// (0x0001a2e2) popup_note2_image_window_t1_ParamLimits

0xcc5d,	// (0x0001a2e2) popup_note2_image_window_t1

0xcc75,	// (0x0001a2fa) popup_note2_image_window_t2_ParamLimits

0xcc75,	// (0x0001a2fa) popup_note2_image_window_t2

0xcc8d,	// (0x0001a312) popup_note2_image_window_t3_ParamLimits

0xcc8d,	// (0x0001a312) popup_note2_image_window_t3

0x0002,

0xfc60,	// (0x0001d2e5) popup_note2_image_window_t_ParamLimits

0xfc60,	// (0x0001d2e5) popup_note2_image_window_t

0x98e2,	// (0x00016f67) popup_note2_wait_window_g1_ParamLimits

0x98e2,	// (0x00016f67) popup_note2_wait_window_g1

0x98ee,	// (0x00016f73) popup_note2_wait_window_g2_ParamLimits

0x98ee,	// (0x00016f73) popup_note2_wait_window_g2

0x98fa,	// (0x00016f7f) popup_note2_wait_window_g3_ParamLimits

0x98fa,	// (0x00016f7f) popup_note2_wait_window_g3

0x0002,

0xf80d,	// (0x0001ce92) popup_note2_wait_window_g_ParamLimits

0xf80d,	// (0x0001ce92) popup_note2_wait_window_g

0xcca9,	// (0x0001a32e) popup_note2_wait_window_t1_ParamLimits

0xcca9,	// (0x0001a32e) popup_note2_wait_window_t1

0xccc7,	// (0x0001a34c) popup_note2_wait_window_t2_ParamLimits

0xccc7,	// (0x0001a34c) popup_note2_wait_window_t2

0xcce5,	// (0x0001a36a) popup_note2_wait_window_t3_ParamLimits

0xcce5,	// (0x0001a36a) popup_note2_wait_window_t3

0xccf7,	// (0x0001a37c) popup_note2_wait_window_t4_ParamLimits

0xccf7,	// (0x0001a37c) popup_note2_wait_window_t4

0x0003,

0xfc67,	// (0x0001d2ec) popup_note2_wait_window_t_ParamLimits

0xfc67,	// (0x0001d2ec) popup_note2_wait_window_t

0xcd09,	// (0x0001a38e) wait_bar2_pane_ParamLimits

0xcd09,	// (0x0001a38e) wait_bar2_pane

0xcd21,	// (0x0001a3a6) popup_snote2_single_text_window_g1_ParamLimits

0xcd21,	// (0x0001a3a6) popup_snote2_single_text_window_g1

0xcd49,	// (0x0001a3ce) popup_snote2_single_text_window_t1_ParamLimits

0xcd49,	// (0x0001a3ce) popup_snote2_single_text_window_t1

0xcd95,	// (0x0001a41a) popup_snote2_single_text_window_t2_ParamLimits

0xcd95,	// (0x0001a41a) popup_snote2_single_text_window_t2

0xcde1,	// (0x0001a466) popup_snote2_single_text_window_t3_ParamLimits

0xcde1,	// (0x0001a466) popup_snote2_single_text_window_t3

0xce22,	// (0x0001a4a7) popup_snote2_single_text_window_t4_ParamLimits

0xce22,	// (0x0001a4a7) popup_snote2_single_text_window_t4

0xce58,	// (0x0001a4dd) popup_snote2_single_text_window_t5_ParamLimits

0xce58,	// (0x0001a4dd) popup_snote2_single_text_window_t5

0x0004,

0xfc70,	// (0x0001d2f5) popup_snote2_single_text_window_t_ParamLimits

0xfc70,	// (0x0001d2f5) popup_snote2_single_text_window_t

0xce83,	// (0x0001a508) popup_snote2_single_graphic_window_g1_ParamLimits

0xce83,	// (0x0001a508) popup_snote2_single_graphic_window_g1

0xceab,	// (0x0001a530) popup_snote2_single_graphic_window_g2_ParamLimits

0xceab,	// (0x0001a530) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7b,	// (0x0001d300) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7b,	// (0x0001d300) popup_snote2_single_graphic_window_g

0xced3,	// (0x0001a558) popup_snote2_single_graphic_window_t1_ParamLimits

0xced3,	// (0x0001a558) popup_snote2_single_graphic_window_t1

0xcf1f,	// (0x0001a5a4) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf1f,	// (0x0001a5a4) popup_snote2_single_graphic_window_t2

0xcde1,	// (0x0001a466) popup_snote2_single_graphic_window_t3_ParamLimits

0xcde1,	// (0x0001a466) popup_snote2_single_graphic_window_t3

0xce22,	// (0x0001a4a7) popup_snote2_single_graphic_window_t4_ParamLimits

0xce22,	// (0x0001a4a7) popup_snote2_single_graphic_window_t4

0xce58,	// (0x0001a4dd) popup_snote2_single_graphic_window_t5_ParamLimits

0xce58,	// (0x0001a4dd) popup_snote2_single_graphic_window_t5

0x0004,

0xfc80,	// (0x0001d305) popup_snote2_single_graphic_window_t_ParamLimits

0xfc80,	// (0x0001d305) popup_snote2_single_graphic_window_t

0xb70d,	// (0x00018d92) clock_nsta_pane_cp2_t1

0xb70d,	// (0x00018d92) clock_nsta_pane_cp2_t2

0x0001,

0xfa9b,	// (0x0001d120) clock_nsta_pane_cp2_t

0x3b53,	// (0x000111d8) form_field_data_wide_pane_g1_ParamLimits

0x3b5f,	// (0x000111e4) form_field_data_wide_pane_g2_ParamLimits

0x3b5f,	// (0x000111e4) form_field_data_wide_pane_g2

0x3b6b,	// (0x000111f0) form_field_data_wide_pane_g3_ParamLimits

0x3b6b,	// (0x000111f0) form_field_data_wide_pane_g3

0x0002,

0xf640,	// (0x0001ccc5) form_field_data_wide_pane_g_ParamLimits

0xf640,	// (0x0001ccc5) form_field_data_wide_pane_g

0xb5e9,	// (0x00018c6e) grid_touch_3_pane_ParamLimits

0xb5e9,	// (0x00018c6e) grid_touch_3_pane

0xcf6b,	// (0x0001a5f0) cell_touch_3_pane_ParamLimits

0xcf6b,	// (0x0001a5f0) cell_touch_3_pane

0xbcaf,	// (0x00019334) cell_touch_3_pane_g1

0xbcaf,	// (0x00019334) cell_touch_3_pane_g2

0x0001,

0xfb20,	// (0x0001d1a5) cell_touch_3_pane_g

0x390c,	// (0x00010f91) cont_query_data_pane

0x3914,	// (0x00010f99) cont_query_data_pane_cp1

0xcf99,	// (0x0001a61e) button_value_adjust_pane_cp7

0xcfa1,	// (0x0001a626) query_popup_pane_cp3

0x42a4,	// (0x00011929) bg_popup_sub_pane_cp22_ParamLimits

0x5b7f,	// (0x00013204) navi_navi_volume_pane_cp2

0x5b97,	// (0x0001321c) popup_side_volume_key_window_g2

0x5ba3,	// (0x00013228) popup_side_volume_key_window_g3

0x0002,

0xf6d6,	// (0x0001cd5b) popup_side_volume_key_window_g

0x5bbd,	// (0x00013242) popup_side_volume_key_window_t2

0x0001,

0xf6dd,	// (0x0001cd62) popup_side_volume_key_window_t

0x8a54,	// (0x000160d9) popup_side_volume_key_window_ParamLimits

0x8287,	// (0x0001590c) list_double_graphic_pane_g4_ParamLimits

0x8287,	// (0x0001590c) list_double_graphic_pane_g4

0xa87a,	// (0x00017eff) list_single_2heading_msg_pane_ParamLimits

0xa87a,	// (0x00017eff) list_single_2heading_msg_pane

0xcfd0,	// (0x0001a655) list_single_2heading_msg_pane_g1_ParamLimits

0xcfd0,	// (0x0001a655) list_single_2heading_msg_pane_g1

0x3e30,	// (0x000114b5) list_single_2heading_msg_pane_g2_ParamLimits

0x3e30,	// (0x000114b5) list_single_2heading_msg_pane_g2

0xcfdc,	// (0x0001a661) list_single_2heading_msg_pane_g3_ParamLimits

0xcfdc,	// (0x0001a661) list_single_2heading_msg_pane_g3

0xcfe8,	// (0x0001a66d) list_single_2heading_msg_pane_g4_ParamLimits

0xcfe8,	// (0x0001a66d) list_single_2heading_msg_pane_g4

0x0003,

0xfc8b,	// (0x0001d310) list_single_2heading_msg_pane_g_ParamLimits

0xfc8b,	// (0x0001d310) list_single_2heading_msg_pane_g

0xd000,	// (0x0001a685) list_single_2heading_msg_pane_t1_ParamLimits

0xd000,	// (0x0001a685) list_single_2heading_msg_pane_t1

0xd028,	// (0x0001a6ad) list_single_2heading_msg_pane_t2_ParamLimits

0xd028,	// (0x0001a6ad) list_single_2heading_msg_pane_t2

0xd057,	// (0x0001a6dc) list_single_2heading_msg_pane_t3_ParamLimits

0xd057,	// (0x0001a6dc) list_single_2heading_msg_pane_t3

0xd090,	// (0x0001a715) list_single_2heading_msg_pane_t4_ParamLimits

0xd090,	// (0x0001a715) list_single_2heading_msg_pane_t4

0x0003,

0xfc94,	// (0x0001d319) list_single_2heading_msg_pane_t_ParamLimits

0xfc94,	// (0x0001d319) list_single_2heading_msg_pane_t

0x36c0,	// (0x00010d45) title_pane_g4_ParamLimits

0x36c0,	// (0x00010d45) title_pane_g4

0x598e,	// (0x00013013) title_pane_stacon_g3_ParamLimits

0x598e,	// (0x00013013) title_pane_stacon_g3

0xcaa7,	// (0x0001a12c) list_single_2graphic_im_pane_g4_ParamLimits

0xcaa7,	// (0x0001a12c) list_single_2graphic_im_pane_g4

0xa31b,	// (0x000179a0) popup_side_volume_key_window_cp

0xac09,	// (0x0001828e) main_idle_act2_pane_t1

0x6596,	// (0x00013c1b) toolbar_button_pane_g10

0x8104,	// (0x00015789) popup_toolbar_window_cp1

0xb6fe,	// (0x00018d83) clock_nsta_pane_cp_t1

0xb6fe,	// (0x00018d83) clock_nsta_pane_cp_t2

0x0001,

0xfa96,	// (0x0001d11b) clock_nsta_pane_cp_t

0x5b7f,	// (0x00013204) navi_navi_volume_pane_cp2_ParamLimits

0x5b8b,	// (0x00013210) popup_side_volume_key_window_g1_ParamLimits

0x5b97,	// (0x0001321c) popup_side_volume_key_window_g2_ParamLimits

0x5ba3,	// (0x00013228) popup_side_volume_key_window_g3_ParamLimits

0xf6d6,	// (0x0001cd5b) popup_side_volume_key_window_g_ParamLimits

0x6a4c,	// (0x000140d1) fep_hwr_aid_pane

0x6af3,	// (0x00014178) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd0b,	// (0x00019390) fep_hwr_top_pane_g1_ParamLimits

0xbd1d,	// (0x000193a2) fep_hwr_top_pane_g2_ParamLimits

0x6b13,	// (0x00014198) fep_hwr_top_pane_g3_ParamLimits

0xfaeb,	// (0x0001d170) fep_hwr_top_pane_g_ParamLimits

0x6b28,	// (0x000141ad) fep_hwr_top_text_pane_ParamLimits

0xa0de,	// (0x00017763) aid_touch_tab_arrow_arrow_2

0xa0e7,	// (0x0001776c) aid_touch_tab_arrow_left_2

0x6a60,	// (0x000140e5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6a97,	// (0x0001411c) fep_hwr_prediction_pane

0xbe76,	// (0x000194fb) fep_vkb_prediction_pane

0xbf73,	// (0x000195f8) fep_vkb_side_pane_g3_ParamLimits

0xbf73,	// (0x000195f8) fep_vkb_side_pane_g3

0x6ca3,	// (0x00014328) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6d0f,	// (0x00014394) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6d1c,	// (0x000143a1) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9a,	// (0x0001d21f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6e4b,	// (0x000144d0) fep_hwr_prediction_pane_g1

0x6e55,	// (0x000144da) fep_hwr_prediction_pane_g2

0x6e5d,	// (0x000144e2) fep_hwr_prediction_pane_g3

0x6e65,	// (0x000144ea) fep_hwr_prediction_pane_g4

0x0003,

0xfc9d,	// (0x0001d322) fep_hwr_prediction_pane_g

0xd0b5,	// (0x0001a73a) fep_vkb_prediction_pane_g1

0xd0bf,	// (0x0001a744) fep_vkb_prediction_pane_g2

0xd0c7,	// (0x0001a74c) fep_vkb_prediction_pane_g3

0xd0cf,	// (0x0001a754) fep_vkb_prediction_pane_g4

0x0003,

0xfca6,	// (0x0001d32b) fep_vkb_prediction_pane_g

0x6884,	// (0x00013f09) slider_set_pane_g3

0x6898,	// (0x00013f1d) slider_set_pane_g4

0x68b0,	// (0x00013f35) slider_set_pane_g5

0x6884,	// (0x00013f09) slider_set_pane_g6

0x68c6,	// (0x00013f4b) slider_set_pane_g7

0xa76c,	// (0x00017df1) slider_form_pane_g3

0xa775,	// (0x00017dfa) slider_form_pane_g4

0xa77d,	// (0x00017e02) slider_form_pane_g5

0xa76c,	// (0x00017df1) slider_form_pane_g6

0xa785,	// (0x00017e0a) slider_form_pane_g7

0xaeed,	// (0x00018572) slider_set_pane_vc_g3

0xaef6,	// (0x0001857b) slider_set_pane_vc_g4

0xaeff,	// (0x00018584) slider_set_pane_vc_g5

0xaeed,	// (0x00018572) slider_set_pane_vc_g6

0xaf08,	// (0x0001858d) slider_set_pane_vc_g7

0xb3bc,	// (0x00018a41) slider_form_pane_vc_g1

0xb3c5,	// (0x00018a4a) slider_form_pane_vc_g2

0xb3ce,	// (0x00018a53) slider_form_pane_vc_g3

0xb3bc,	// (0x00018a41) slider_form_pane_vc_g4

0xb3d7,	// (0x00018a5c) slider_form_pane_vc_g5

0x0004,

0xfa68,	// (0x0001d0ed) slider_form_pane_vc_g

0x5663,	// (0x00012ce8) main_idle_act3_pane

0xd0d7,	// (0x0001a75c) ai3_links_pane

0xd0e0,	// (0x0001a765) popup_ai3_data_window_ParamLimits

0xd0e0,	// (0x0001a765) popup_ai3_data_window

0x3662,	// (0x00010ce7) grid_ai3_links_pane

0xd0f8,	// (0x0001a77d) cell_ai3_links_pane_ParamLimits

0xd0f8,	// (0x0001a77d) cell_ai3_links_pane

0xd110,	// (0x0001a795) bg_popup_sub_pane_cp11

0xd11d,	// (0x0001a7a2) cell_ai3_links_pane_g1

0x3662,	// (0x00010ce7) bg_popup_sub_pane_cp12

0xd142,	// (0x0001a7c7) heading_ai3_data_pane

0xd14a,	// (0x0001a7cf) list_ai3_gene_pane

0xd156,	// (0x0001a7db) popup_ai3_data_window_g1

0xd15e,	// (0x0001a7e3) heading_ai3_data_pane_g1

0xd166,	// (0x0001a7eb) heading_ai3_data_pane_t1

0xd174,	// (0x0001a7f9) list_double_ai3_gene_pane_ParamLimits

0xd174,	// (0x0001a7f9) list_double_ai3_gene_pane

0xd181,	// (0x0001a806) list_single_ai3_gene_pane_ParamLimits

0xd181,	// (0x0001a806) list_single_ai3_gene_pane

0xbc74,	// (0x000192f9) list_highlight_pane_cp7_ParamLimits

0xbc74,	// (0x000192f9) list_highlight_pane_cp7

0xd18e,	// (0x0001a813) list_single_a13_gene_pane_t1_ParamLimits

0xd18e,	// (0x0001a813) list_single_a13_gene_pane_t1

0xd1a5,	// (0x0001a82a) list_single_ai3_gene_pane_g1

0xd1ae,	// (0x0001a833) list_single_ai3_gene_pane_g2

0x0001,

0xfcaf,	// (0x0001d334) list_single_ai3_gene_pane_g

0xd1b6,	// (0x0001a83b) list_double_ai3_gene_pane_g1_ParamLimits

0xd1b6,	// (0x0001a83b) list_double_ai3_gene_pane_g1

0xd1c2,	// (0x0001a847) list_double_ai3_gene_pane_t1_ParamLimits

0xd1c2,	// (0x0001a847) list_double_ai3_gene_pane_t1

0xd1de,	// (0x0001a863) list_double_ai3_gene_pane_t2_ParamLimits

0xd1de,	// (0x0001a863) list_double_ai3_gene_pane_t2

0xd1f3,	// (0x0001a878) list_double_ai3_gene_pane_t3_ParamLimits

0xd1f3,	// (0x0001a878) list_double_ai3_gene_pane_t3

0x0002,

0xfcb4,	// (0x0001d339) list_double_ai3_gene_pane_t_ParamLimits

0xfcb4,	// (0x0001d339) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcfb2,	// (0x0001a637) aid_size_min_col_2

0xcfbc,	// (0x0001a641) aid_size_min_msg_ParamLimits

0xcfbc,	// (0x0001a641) aid_size_min_msg

0xc073,	// (0x000196f8) fep_vkb_top_text_pane_g2_ParamLimits

0xc073,	// (0x000196f8) fep_vkb_top_text_pane_g2

0x0001,

0xfb1b,	// (0x0001d1a0) fep_vkb_top_text_pane_g_ParamLimits

0xfb1b,	// (0x0001d1a0) fep_vkb_top_text_pane_g

0x5663,	// (0x00012ce8) main_hc_apps_shell_pane

0xd210,	// (0x0001a895) grid_hc_apps_pane_ParamLimits

0xd210,	// (0x0001a895) grid_hc_apps_pane

0xd222,	// (0x0001a8a7) list_hc_apps_pane

0xd22a,	// (0x0001a8af) scroll_pane_cp37_ParamLimits

0xd22a,	// (0x0001a8af) scroll_pane_cp37

0xd236,	// (0x0001a8bb) cell_hc_apps_pane_ParamLimits

0xd236,	// (0x0001a8bb) cell_hc_apps_pane

0xd2e4,	// (0x0001a969) cell_hc_apps_pane_g1_ParamLimits

0xd2e4,	// (0x0001a969) cell_hc_apps_pane_g1

0xd314,	// (0x0001a999) cell_hc_apps_pane_g2_ParamLimits

0xd314,	// (0x0001a999) cell_hc_apps_pane_g2

0xd330,	// (0x0001a9b5) cell_hc_apps_pane_g3_ParamLimits

0xd330,	// (0x0001a9b5) cell_hc_apps_pane_g3

0x0002,

0xfcbb,	// (0x0001d340) cell_hc_apps_pane_g_ParamLimits

0xfcbb,	// (0x0001d340) cell_hc_apps_pane_g

0xd352,	// (0x0001a9d7) cell_hc_apps_pane_t1_ParamLimits

0xd352,	// (0x0001a9d7) cell_hc_apps_pane_t1

0x3856,	// (0x00010edb) grid_highlight_pane_cp10_ParamLimits

0x3856,	// (0x00010edb) grid_highlight_pane_cp10

0xd392,	// (0x0001aa17) list_single_hc_apps_pane_ParamLimits

0xd392,	// (0x0001aa17) list_single_hc_apps_pane

0xd3f5,	// (0x0001aa7a) list_single_hc_apps_pane_g1

0xd40e,	// (0x0001aa93) list_single_hc_apps_pane_g2

0x0001,

0xfcc2,	// (0x0001d347) list_single_hc_apps_pane_g

0xd427,	// (0x0001aaac) list_single_hc_apps_pane_g2_copy1

0xd443,	// (0x0001aac8) list_single_hc_apps_pane_t1

0x3712,	// (0x00010d97) bg_set_opt_pane_cp_ParamLimits

0x58b6,	// (0x00012f3b) setting_slider_pane_t1_ParamLimits

0x58cf,	// (0x00012f54) setting_slider_pane_t2_ParamLimits

0x58e9,	// (0x00012f6e) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0001cbbc) setting_slider_pane_t_ParamLimits

0x5901,	// (0x00012f86) slider_set_pane_ParamLimits

0x5e1f,	// (0x000134a4) control_pane_g5_ParamLimits

0x5e1f,	// (0x000134a4) control_pane_g5

0xa5bf,	// (0x00017c44) slider_set_pane_g1_ParamLimits

0x6878,	// (0x00013efd) slider_set_pane_g2_ParamLimits

0x6884,	// (0x00013f09) slider_set_pane_g3_ParamLimits

0x6898,	// (0x00013f1d) slider_set_pane_g4_ParamLimits

0x68b0,	// (0x00013f35) slider_set_pane_g5_ParamLimits

0x6884,	// (0x00013f09) slider_set_pane_g6_ParamLimits

0x68c6,	// (0x00013f4b) slider_set_pane_g7_ParamLimits

0xf929,	// (0x0001cfae) slider_set_pane_g_ParamLimits

0x46c1,	// (0x00011d46) navi_icon_text_pane_ParamLimits

0x8c56,	// (0x000162db) aid_fill_nsta_2_ParamLimits

0x8c95,	// (0x0001631a) aid_touch_tab_arrow_left_ParamLimits

0x8ca4,	// (0x00016329) aid_touch_tab_arrow_right_ParamLimits

0x8d11,	// (0x00016396) clock_nsta_pane_ParamLimits

0xa0c0,	// (0x00017745) navi_icon_pane_g1_ParamLimits

0xa0cc,	// (0x00017751) navi_text_pane_t1_ParamLimits

0xb80e,	// (0x00018e93) navi_icon_text_pane_g1_ParamLimits

0xb81a,	// (0x00018e9f) navi_icon_text_pane_t1_ParamLimits

0xd3f5,	// (0x0001aa7a) list_single_hc_apps_pane_g1_ParamLimits

0xd40e,	// (0x0001aa93) list_single_hc_apps_pane_g2_ParamLimits

0xfcc2,	// (0x0001d347) list_single_hc_apps_pane_g_ParamLimits

0xd427,	// (0x0001aaac) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd443,	// (0x0001aac8) list_single_hc_apps_pane_t1_ParamLimits

0x57c0,	// (0x00012e45) popup_toolbar2_fixed_window_ParamLimits

0x57c0,	// (0x00012e45) popup_toolbar2_fixed_window

0x6430,	// (0x00013ab5) popup_toolbar2_float_window

0x3662,	// (0x00010ce7) bg_popup_sub_pane_cp27

0xd471,	// (0x0001aaf6) grid_toolbar2_float_pane

0x3662,	// (0x00010ce7) bg_popup_sub_pane_cp26

0xd471,	// (0x0001aaf6) grid_toolbar2_fixed_pane

0xd479,	// (0x0001aafe) cell_toolbar2_fixed_pane_ParamLimits

0xd479,	// (0x0001aafe) cell_toolbar2_fixed_pane

0xd489,	// (0x0001ab0e) cell_toolbar2_fixed_pane_g1

0x6302,	// (0x00013987) toolbar2_fixed_button_pane

0x9159,	// (0x000167de) toolbar2_fixed_button_pane_g1

0x9169,	// (0x000167ee) toolbar2_fixed_button_pane_g2

0x9161,	// (0x000167e6) toolbar2_fixed_button_pane_g3

0x9179,	// (0x000167fe) toolbar2_fixed_button_pane_g4

0x9171,	// (0x000167f6) toolbar2_fixed_button_pane_g5

0x9181,	// (0x00016806) toolbar2_fixed_button_pane_g6

0x9189,	// (0x0001680e) toolbar2_fixed_button_pane_g7

0x9199,	// (0x0001681e) toolbar2_fixed_button_pane_g8

0x9191,	// (0x00016816) toolbar2_fixed_button_pane_g9

0x0008,

0xf82b,	// (0x0001ceb0) toolbar2_fixed_button_pane_g

0xd492,	// (0x0001ab17) cell_toolbar2_float_pane_ParamLimits

0xd492,	// (0x0001ab17) cell_toolbar2_float_pane

0xd4a3,	// (0x0001ab28) cell_toolbar2_float_pane_g1

0x6302,	// (0x00013987) toolbar2_fixed_button_pane_cp

0xbddd,	// (0x00019462) fep_vkb_accented_list_pane_ParamLimits

0xbddd,	// (0x00019462) fep_vkb_accented_list_pane

0x6c83,	// (0x00014308) bg_popup_fep_shadow_pane_g9

0x4814,	// (0x00011e99) bg_popup_fep_shadow_pane_cp3

0x3cbb,	// (0x00011340) list_accented_list_pane

0xd4ac,	// (0x0001ab31) list_single_accented_list_pane_ParamLimits

0xd4ac,	// (0x0001ab31) list_single_accented_list_pane

0x4814,	// (0x00011e99) list_highlight_pane_cp10

0xd4bd,	// (0x0001ab42) list_single_accented_list_pane_t1

0x6380,	// (0x00013a05) popup_slider_window_ParamLimits

0x6380,	// (0x00013a05) popup_slider_window

0xcfa9,	// (0x0001a62e) aid_indentation_list_msg

0xd57b,	// (0x0001ac00) bg_popup_window_pane_cp19

0xd5e3,	// (0x0001ac68) popup_slider_window_g1

0xd5ff,	// (0x0001ac84) popup_slider_window_g2

0xd61b,	// (0x0001aca0) popup_slider_window_g3

0x0005,

0xfcc7,	// (0x0001d34c) popup_slider_window_g

0xd681,	// (0x0001ad06) popup_slider_window_t1

0xd6f5,	// (0x0001ad7a) small_volume_slider_vertical_pane

0xbcaf,	// (0x00019334) small_volume_slider_vertical_pane_g1

0xbcaf,	// (0x00019334) small_volume_slider_vertical_pane_g2

0xd711,	// (0x0001ad96) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd9,	// (0x0001d35e) small_volume_slider_vertical_pane_g

0x5580,	// (0x00012c05) area_side_right_pane_ParamLimits

0x5580,	// (0x00012c05) area_side_right_pane

0x6e6d,	// (0x000144f2) aid_size_side_button_ParamLimits

0x6e6d,	// (0x000144f2) aid_size_side_button

0x6e81,	// (0x00014506) grid_sctrl_middle_pane_ParamLimits

0x6e81,	// (0x00014506) grid_sctrl_middle_pane

0x6ea0,	// (0x00014525) sctrl_sk_bottom_pane

0x6eb1,	// (0x00014536) sctrl_sk_top_pane

0x6ec3,	// (0x00014548) aid_touch_sctrl_top

0x6ed0,	// (0x00014555) bg_sctrl_sk_pane_ParamLimits

0x6ed0,	// (0x00014555) bg_sctrl_sk_pane

0x6ede,	// (0x00014563) sctrl_sk_top_pane_g1

0x6eeb,	// (0x00014570) sctrl_sk_top_pane_t1

0x6ec3,	// (0x00014548) aid_touch_sctrl_bottom

0x6ed0,	// (0x00014555) bg_sctrl_sk_pane_cp_ParamLimits

0x6ed0,	// (0x00014555) bg_sctrl_sk_pane_cp

0x6f06,	// (0x0001458b) sctrl_sk_bottom_pane_g1

0x6eeb,	// (0x00014570) sctrl_sk_bottom_pane_t1

0x6f0f,	// (0x00014594) cell_sctrl_middle_pane_ParamLimits

0x6f0f,	// (0x00014594) cell_sctrl_middle_pane

0x6f2a,	// (0x000145af) aid_touch_sctrl_middle_ParamLimits

0x6f2a,	// (0x000145af) aid_touch_sctrl_middle

0x6f3c,	// (0x000145c1) bg_sctrl_middle_pane_ParamLimits

0x6f3c,	// (0x000145c1) bg_sctrl_middle_pane

0x6ca3,	// (0x00014328) cell_sctrl_middle_pane_g1_ParamLimits

0x6ca3,	// (0x00014328) cell_sctrl_middle_pane_g1

0x6f4a,	// (0x000145cf) cell_sctrl_middle_pane_g2_ParamLimits

0x6f4a,	// (0x000145cf) cell_sctrl_middle_pane_g2

0x0001,

0xfce5,	// (0x0001d36a) cell_sctrl_middle_pane_g_ParamLimits

0xfce5,	// (0x0001d36a) cell_sctrl_middle_pane_g

0x9159,	// (0x000167de) bg_sctrl_middle_pane_g1

0x9161,	// (0x000167e6) bg_sctrl_middle_pane_g2

0x9169,	// (0x000167ee) bg_sctrl_middle_pane_g3

0x9171,	// (0x000167f6) bg_sctrl_middle_pane_g4

0x9179,	// (0x000167fe) bg_sctrl_middle_pane_g5

0x9181,	// (0x00016806) bg_sctrl_middle_pane_g6

0x9189,	// (0x0001680e) bg_sctrl_middle_pane_g7

0x9191,	// (0x00016816) bg_sctrl_middle_pane_g8

0x0007,

0xfcea,	// (0x0001d36f) bg_sctrl_middle_pane_g

0x9199,	// (0x0001681e) bg_sctrl_middle_pane_g8_copy1

0x9159,	// (0x000167de) bg_sctrl_sk_pane_g1

0x9169,	// (0x000167ee) bg_sctrl_sk_pane_g2

0x9161,	// (0x000167e6) bg_sctrl_sk_pane_g3

0x0008,

0xf82b,	// (0x0001ceb0) bg_sctrl_sk_pane_g

0x3a24,	// (0x000110a9) aid_size_touch_scroll_bar

0x9179,	// (0x000167fe) bg_sctrl_sk_pane_g4

0x9171,	// (0x000167f6) bg_sctrl_sk_pane_g5

0x9181,	// (0x00016806) bg_sctrl_sk_pane_g6

0x9189,	// (0x0001680e) bg_sctrl_sk_pane_g7

0x9199,	// (0x0001681e) bg_sctrl_sk_pane_g8

0x9191,	// (0x00016816) bg_sctrl_sk_pane_g9

0x5fe9,	// (0x0001366e) popup_fep_china_hwr2_fs_candidate_window

0x5ff3,	// (0x00013678) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5ff3,	// (0x00013678) popup_fep_china_hwr2_fs_control_window

0x6ca3,	// (0x00014328) sctrl_sk_top_pane_g2

0x0001,

0xfce0,	// (0x0001d365) sctrl_sk_top_pane_g

0xd71a,	// (0x0001ad9f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd71a,	// (0x0001ad9f) aid_fep_china_hwr2_fs_cell

0xd72c,	// (0x0001adb1) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd72c,	// (0x0001adb1) bg_popup_fep_shadow_pane_cp4

0xd743,	// (0x0001adc8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd743,	// (0x0001adc8) bg_popup_fep_shadow_pane_cp5

0xd755,	// (0x0001adda) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd755,	// (0x0001adda) popup_fep_china_hwr2_fs_control_bar_grid

0xd765,	// (0x0001adea) popup_fep_china_hwr2_fs_control_funtion_grid

0xd76d,	// (0x0001adf2) aid_fep_china_hwr2_fs_candi_cell

0x3662,	// (0x00010ce7) bg_popup_fep_shadow_pane_cp6

0xd777,	// (0x0001adfc) popup_fep_china_hwr2_fs_candidate_grid

0xd781,	// (0x0001ae06) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd781,	// (0x0001ae06) cell_fep_china_hwr2_fs_funtion_grid

0xbcaf,	// (0x00019334) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd799,	// (0x0001ae1e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd799,	// (0x0001ae1e) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7a7,	// (0x0001ae2c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7a7,	// (0x0001ae2c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfb,	// (0x0001d380) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfb,	// (0x0001d380) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7bd,	// (0x0001ae42) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7bd,	// (0x0001ae42) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7d2,	// (0x0001ae57) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7d2,	// (0x0001ae57) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd00,	// (0x0001d385) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd00,	// (0x0001d385) cell_fep_china_hwr2_fs_funtion_grid_t

0xd7ee,	// (0x0001ae73) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd7f6,	// (0x0001ae7b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd7fe,	// (0x0001ae83) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd05,	// (0x0001d38a) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd806,	// (0x0001ae8b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd806,	// (0x0001ae8b) cell_fep_china_hwr2_fs_candidate_grid

0xd81f,	// (0x0001aea4) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd827,	// (0x0001aeac) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbcaf,	// (0x00019334) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbcaf,	// (0x00019334) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb20,	// (0x0001d1a5) cell_fep_china_hwr2_fs_candidate_grid_g

0xd82f,	// (0x0001aeb4) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8d24,	// (0x000163a9) clock_nsta_pane_cp_24_ParamLimits

0x8d24,	// (0x000163a9) clock_nsta_pane_cp_24

0x8da2,	// (0x00016427) indicator_nsta_pane_cp_24_ParamLimits

0x8da2,	// (0x00016427) indicator_nsta_pane_cp_24

0x9f3c,	// (0x000175c1) heading_pane_g1

0x0001,

0xf890,	// (0x0001cf15) heading_pane_g

0xaa52,	// (0x000180d7) grid_sct_catagory_button_pane

0xaa82,	// (0x00018107) scroll_pane_cp5_ParamLimits

0xb85c,	// (0x00018ee1) button_value_adjust_pane_cp5_ParamLimits

0xb85c,	// (0x00018ee1) button_value_adjust_pane_cp5

0xb956,	// (0x00018fdb) form2_midp_time_pane_ParamLimits

0xd83d,	// (0x0001aec2) cell_sct_catagory_button_pane_ParamLimits

0xd83d,	// (0x0001aec2) cell_sct_catagory_button_pane

0xbc74,	// (0x000192f9) bg_button_pane_cp01_ParamLimits

0xbc74,	// (0x000192f9) bg_button_pane_cp01

0xbcaf,	// (0x00019334) cell_sct_catagory_button_pane_g1

0x63bf,	// (0x00013a44) popup_tb_extension_window

0xd84f,	// (0x0001aed4) aid_size_cell_ext_ParamLimits

0xd84f,	// (0x0001aed4) aid_size_cell_ext

0x3856,	// (0x00010edb) bg_tb_trans_pane_cp1_ParamLimits

0x3856,	// (0x00010edb) bg_tb_trans_pane_cp1

0xd86f,	// (0x0001aef4) grid_tb_ext_pane_ParamLimits

0xd86f,	// (0x0001aef4) grid_tb_ext_pane

0xd89f,	// (0x0001af24) cell_tb_ext_pane_ParamLimits

0xd89f,	// (0x0001af24) cell_tb_ext_pane

0xd8b6,	// (0x0001af3b) cell_tb_ext_pane_g1_ParamLimits

0xd8b6,	// (0x0001af3b) cell_tb_ext_pane_g1

0xd8d3,	// (0x0001af58) cell_tb_ext_pane_t1

0x3856,	// (0x00010edb) list_highlight_pane_cp11_ParamLimits

0x3856,	// (0x00010edb) list_highlight_pane_cp11

0x57df,	// (0x00012e64) popup_uni_indicator_window_ParamLimits

0x57df,	// (0x00012e64) popup_uni_indicator_window

0x3b34,	// (0x000111b9) bg_popup_sub_pane_cp14

0xd8ef,	// (0x0001af74) list_uniindi_pane

0xd8fb,	// (0x0001af80) uniindi_top_pane

0x3856,	// (0x00010edb) bg_uniindi_top_pane

0xd91a,	// (0x0001af9f) uniindi_top_pane_g1

0xd930,	// (0x0001afb5) uniindi_top_pane_g2

0x0003,

0xfd0c,	// (0x0001d391) uniindi_top_pane_g

0xd95a,	// (0x0001afdf) uniindi_top_pane_t1

0xd984,	// (0x0001b009) list_single_uniindi_pane_ParamLimits

0xd984,	// (0x0001b009) list_single_uniindi_pane

0xbcaf,	// (0x00019334) bg_uniindi_top_pane_g1

0xd997,	// (0x0001b01c) list_single_uniindi_pane_g1

0xd9aa,	// (0x0001b02f) list_single_uniindi_pane_t1

0x5663,	// (0x00012ce8) control_bg_pane

0xd9cf,	// (0x0001b054) bg_sctrl_sk_pane_cp1

0xd9d8,	// (0x0001b05d) bg_sctrl_sk_pane_cp2

0xd9e1,	// (0x0001b066) control_bg_pane_g1

0xd9ea,	// (0x0001b06f) control_bg_pane_g2

0x0001,

0xfd15,	// (0x0001d39a) control_bg_pane_g

0xb6a2,	// (0x00018d27) cell_indicator_nsta_pane_g1_ParamLimits

0xb6b0,	// (0x00018d35) cell_indicator_nsta_pane_g2_ParamLimits

0xfa84,	// (0x0001d109) cell_indicator_nsta_pane_g_ParamLimits

0xb9de,	// (0x00019063) form2_midp_time_pane_t1_ParamLimits

0x5f53,	// (0x000135d8) main_idle_act4_pane_ParamLimits

0x5f53,	// (0x000135d8) main_idle_act4_pane

0x63bf,	// (0x00013a44) popup_tb_extension_window_ParamLimits

0xd88f,	// (0x0001af14) tb_ext_find_pane_ParamLimits

0xd88f,	// (0x0001af14) tb_ext_find_pane

0xd9f3,	// (0x0001b078) ai_gene_pane_1_cp1

0x4895,	// (0x00011f1a) ai_gene_pane_2_cp1

0xd9fb,	// (0x0001b080) list_single_idle_plugin_calendar_pane

0xda04,	// (0x0001b089) list_single_idle_plugin_notification_pane

0xda0d,	// (0x0001b092) list_single_idle_plugin_player_pane

0xda16,	// (0x0001b09b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda16,	// (0x0001b09b) list_single_idle_plugin_shortcut_pane

0xda38,	// (0x0001b0bd) main_idle_act4_pane_t1

0xda4a,	// (0x0001b0cf) main_idle_act4_pane_t2

0x0001,

0xfd1a,	// (0x0001d39f) main_idle_act4_pane_t

0xda5c,	// (0x0001b0e1) middle_sk_idle_act4_pane_ParamLimits

0xda5c,	// (0x0001b0e1) middle_sk_idle_act4_pane

0xda72,	// (0x0001b0f7) popup_clock_digital_analogue_window_cp2

0xda8c,	// (0x0001b111) shortcut_wheel_idle_act4_pane_ParamLimits

0xda8c,	// (0x0001b111) shortcut_wheel_idle_act4_pane

0xbcaf,	// (0x00019334) shortcut_wheel_idle_act4_pane_g1

0xbcaf,	// (0x00019334) shortcut_wheel_idle_act4_pane_g2

0xbcaf,	// (0x00019334) shortcut_wheel_idle_act4_pane_g3

0xbcaf,	// (0x00019334) shortcut_wheel_idle_act4_pane_g4

0xbcaf,	// (0x00019334) shortcut_wheel_idle_act4_pane_g5

0xdaa0,	// (0x0001b125) shortcut_wheel_idle_act4_pane_g6

0xdaa8,	// (0x0001b12d) shortcut_wheel_idle_act4_pane_g7

0xdab0,	// (0x0001b135) shortcut_wheel_idle_act4_pane_g8

0xdab8,	// (0x0001b13d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1f,	// (0x0001d3a4) shortcut_wheel_idle_act4_pane_g

0xbf1f,	// (0x000195a4) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf1f,	// (0x000195a4) middle_sk_idle_act4_pane_g1

0xdb1c,	// (0x0001b1a1) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb1c,	// (0x0001b1a1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd42,	// (0x0001d3c7) middle_sk_idle_act4_pane_g_ParamLimits

0xfd42,	// (0x0001d3c7) middle_sk_idle_act4_pane_g

0xdb28,	// (0x0001b1ad) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb28,	// (0x0001b1ad) middle_sk_idle_act4_pane_t1

0xdb45,	// (0x0001b1ca) grid_ai_shortcut_pane_ParamLimits

0xdb45,	// (0x0001b1ca) grid_ai_shortcut_pane

0xdb5e,	// (0x0001b1e3) list_highlight_pane_cp16_ParamLimits

0xdb5e,	// (0x0001b1e3) list_highlight_pane_cp16

0xdb6b,	// (0x0001b1f0) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb6b,	// (0x0001b1f0) list_single_idle_plugin_shortcut_pane_g1

0xdb77,	// (0x0001b1fc) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb77,	// (0x0001b1fc) list_single_idle_plugin_shortcut_pane_g2

0xdb8f,	// (0x0001b214) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdb8f,	// (0x0001b214) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd47,	// (0x0001d3cc) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd47,	// (0x0001d3cc) list_single_idle_plugin_shortcut_pane_g

0xdba2,	// (0x0001b227) cell_ai_shortcut_pane_ParamLimits

0xdba2,	// (0x0001b227) cell_ai_shortcut_pane

0xdbc6,	// (0x0001b24b) cell_ai_shortcut_pane_g1_ParamLimits

0xdbc6,	// (0x0001b24b) cell_ai_shortcut_pane_g1

0xd9f3,	// (0x0001b078) ai_gene_pane_1_cp2

0xdbe8,	// (0x0001b26d) ai_gene_pane_2_cp2

0xdbf0,	// (0x0001b275) list_highlight_pane_cp15

0xdbf9,	// (0x0001b27e) list_single_idle_plugin_calendar_pane_g1

0xdbf0,	// (0x0001b275) list_highlight_pane_cp17

0xdc01,	// (0x0001b286) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc09,	// (0x0001b28e) list_single_idle_plugin_player_pane_g1

0xacab,	// (0x00018330) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4e,	// (0x0001d3d3) list_single_idle_plugin_player_pane_g

0xdc11,	// (0x0001b296) list_single_idle_plugin_player_pane_t1

0xdc1f,	// (0x0001b2a4) list_single_idle_plugin_player_pane_t2

0xdc2d,	// (0x0001b2b2) list_single_idle_plugin_player_pane_t3

0xdc3b,	// (0x0001b2c0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd53,	// (0x0001d3d8) list_single_idle_plugin_player_pane_t

0xdc49,	// (0x0001b2ce) wait_bar_pane_cp15

0xdc51,	// (0x0001b2d6) grid_ai_notification_pane

0xacab,	// (0x00018330) list_single_idle_plugin_notification_pane_g1

0xdc5a,	// (0x0001b2df) cell_ai_notification_pane_ParamLimits

0xdc5a,	// (0x0001b2df) cell_ai_notification_pane

0xdc67,	// (0x0001b2ec) cell_ai_notification_pane_g1

0xdc6f,	// (0x0001b2f4) cell_ai_notification_pane_t1

0xdc7d,	// (0x0001b302) tb_ext_find_button_pane

0xdc85,	// (0x0001b30a) tb_ext_find_pane_g1

0xdc8d,	// (0x0001b312) tb_ext_find_pane_t1

0x41c9,	// (0x0001184e) tb_ext_find_button_pane_g1

0xdc9b,	// (0x0001b320) tb_ext_find_button_pane_g2

0x0001,

0xfd5c,	// (0x0001d3e1) tb_ext_find_button_pane_g

0xda38,	// (0x0001b0bd) main_idle_act4_pane_t1_ParamLimits

0xda4a,	// (0x0001b0cf) main_idle_act4_pane_t2_ParamLimits

0xfd1a,	// (0x0001d39f) main_idle_act4_pane_t_ParamLimits

0xda72,	// (0x0001b0f7) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda80,	// (0x0001b105) sat_plugin_idle_act4_pane_ParamLimits

0xda80,	// (0x0001b105) sat_plugin_idle_act4_pane

0xdca4,	// (0x0001b329) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdca4,	// (0x0001b329) sat_plugin_idle_act4_pane_t1

0xdcb7,	// (0x0001b33c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcb7,	// (0x0001b33c) sat_plugin_idle_act4_pane_t2

0xdcca,	// (0x0001b34f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdcca,	// (0x0001b34f) sat_plugin_idle_act4_pane_t3

0xdcdd,	// (0x0001b362) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdcdd,	// (0x0001b362) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd61,	// (0x0001d3e6) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd61,	// (0x0001d3e6) sat_plugin_idle_act4_pane_t

0x5728,	// (0x00012dad) popup_battery_window_ParamLimits

0x5728,	// (0x00012dad) popup_battery_window

0x3856,	// (0x00010edb) bg_popup_sub_pane_cp25_ParamLimits

0x3856,	// (0x00010edb) bg_popup_sub_pane_cp25

0xdcf0,	// (0x0001b375) popup_battery_window_g1_ParamLimits

0xdcf0,	// (0x0001b375) popup_battery_window_g1

0xdcfc,	// (0x0001b381) popup_battery_window_t1_ParamLimits

0xdcfc,	// (0x0001b381) popup_battery_window_t1

0xdd0e,	// (0x0001b393) popup_battery_window_t2_ParamLimits

0xdd0e,	// (0x0001b393) popup_battery_window_t2

0x0001,

0xfd6a,	// (0x0001d3ef) popup_battery_window_t_ParamLimits

0xfd6a,	// (0x0001d3ef) popup_battery_window_t

0x8aa8,	// (0x0001612d) midp_canvas_pane_ParamLimits

0x8b21,	// (0x000161a6) midp_keypad_pane_ParamLimits

0x8b21,	// (0x000161a6) midp_keypad_pane

0x4a30,	// (0x000120b5) main_midp_pane_ParamLimits

0xb71c,	// (0x00018da1) signal_pane_g2_cp_ParamLimits

0xdd2b,	// (0x0001b3b0) aid_size_cell_midp_keypad_ParamLimits

0xdd2b,	// (0x0001b3b0) aid_size_cell_midp_keypad

0xdd45,	// (0x0001b3ca) midp_keyp_game_grid_pane_ParamLimits

0xdd45,	// (0x0001b3ca) midp_keyp_game_grid_pane

0xdd65,	// (0x0001b3ea) midp_keyp_rocker_pane_ParamLimits

0xdd65,	// (0x0001b3ea) midp_keyp_rocker_pane

0xdd9e,	// (0x0001b423) midp_keyp_sk_left_pane_ParamLimits

0xdd9e,	// (0x0001b423) midp_keyp_sk_left_pane

0xddf8,	// (0x0001b47d) midp_keyp_sk_right_pane_ParamLimits

0xddf8,	// (0x0001b47d) midp_keyp_sk_right_pane

0x3662,	// (0x00010ce7) bg_button_pane_cp03

0xde52,	// (0x0001b4d7) midp_keyp_sk_left_pane_g1

0x3662,	// (0x00010ce7) bg_button_pane_cp04

0xde52,	// (0x0001b4d7) midp_keyp_sk_right_pane_g1

0xbcaf,	// (0x00019334) midp_keyp_rocker_pane_g1

0xde5b,	// (0x0001b4e0) keyp_game_cell_pane_ParamLimits

0xde5b,	// (0x0001b4e0) keyp_game_cell_pane

0x3662,	// (0x00010ce7) bg_button_pane_cp02

0xde6e,	// (0x0001b4f3) keyp_game_cell_pane_g1

0x575e,	// (0x00012de3) popup_fep_vkb2_window_ParamLimits

0x575e,	// (0x00012de3) popup_fep_vkb2_window

0x6f68,	// (0x000145ed) aid_size_cell_vkb2_ParamLimits

0x6f68,	// (0x000145ed) aid_size_cell_vkb2

0x6fb4,	// (0x00014639) popup_fep_vkb2_window_g1_ParamLimits

0x6fb4,	// (0x00014639) popup_fep_vkb2_window_g1

0x6ffc,	// (0x00014681) vkb2_area_bottom_pane_ParamLimits

0x6ffc,	// (0x00014681) vkb2_area_bottom_pane

0x7048,	// (0x000146cd) vkb2_area_keypad_pane_ParamLimits

0x7048,	// (0x000146cd) vkb2_area_keypad_pane

0x708a,	// (0x0001470f) vkb2_area_top_pane_ParamLimits

0x708a,	// (0x0001470f) vkb2_area_top_pane

0x7109,	// (0x0001478e) vkb2_top_entry_pane_ParamLimits

0x7109,	// (0x0001478e) vkb2_top_entry_pane

0x7133,	// (0x000147b8) vkb2_top_grid_left_pane_ParamLimits

0x7133,	// (0x000147b8) vkb2_top_grid_left_pane

0x7152,	// (0x000147d7) vkb2_top_grid_right_pane_ParamLimits

0x7152,	// (0x000147d7) vkb2_top_grid_right_pane

0x7171,	// (0x000147f6) vkb2_cell_keypad_pane_ParamLimits

0x7171,	// (0x000147f6) vkb2_cell_keypad_pane

0x7242,	// (0x000148c7) vkb2_area_bottom_grid_pane_ParamLimits

0x7242,	// (0x000148c7) vkb2_area_bottom_grid_pane

0x7268,	// (0x000148ed) vkb2_area_bottom_pane_g1_ParamLimits

0x7268,	// (0x000148ed) vkb2_area_bottom_pane_g1

0x728c,	// (0x00014911) vkb2_area_bottom_pane_g2_ParamLimits

0x728c,	// (0x00014911) vkb2_area_bottom_pane_g2

0x72ba,	// (0x0001493f) vkb2_area_bottom_pane_g3_ParamLimits

0x72ba,	// (0x0001493f) vkb2_area_bottom_pane_g3

0x0002,

0xfd6f,	// (0x0001d3f4) vkb2_area_bottom_pane_g_ParamLimits

0xfd6f,	// (0x0001d3f4) vkb2_area_bottom_pane_g

0x731b,	// (0x000149a0) vkb2_top_cell_left_pane_ParamLimits

0x731b,	// (0x000149a0) vkb2_top_cell_left_pane

0xde7f,	// (0x0001b504) vkb2_top_entry_pane_g1_ParamLimits

0xde7f,	// (0x0001b504) vkb2_top_entry_pane_g1

0xde8d,	// (0x0001b512) vkb2_top_entry_pane_t1_ParamLimits

0xde8d,	// (0x0001b512) vkb2_top_entry_pane_t1

0xdebf,	// (0x0001b544) vkb2_top_entry_pane_t2_ParamLimits

0xdebf,	// (0x0001b544) vkb2_top_entry_pane_t2

0xdef1,	// (0x0001b576) vkb2_top_entry_pane_t3_ParamLimits

0xdef1,	// (0x0001b576) vkb2_top_entry_pane_t3

0x0002,

0xfd76,	// (0x0001d3fb) vkb2_top_entry_pane_t_ParamLimits

0xfd76,	// (0x0001d3fb) vkb2_top_entry_pane_t

0x7368,	// (0x000149ed) vkb2_top_grid_right_pane_g1_ParamLimits

0x7368,	// (0x000149ed) vkb2_top_grid_right_pane_g1

0x737e,	// (0x00014a03) vkb2_top_grid_right_pane_g2_ParamLimits

0x737e,	// (0x00014a03) vkb2_top_grid_right_pane_g2

0x7396,	// (0x00014a1b) vkb2_top_grid_right_pane_g3_ParamLimits

0x7396,	// (0x00014a1b) vkb2_top_grid_right_pane_g3

0x73ae,	// (0x00014a33) vkb2_top_grid_right_pane_g4_ParamLimits

0x73ae,	// (0x00014a33) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7d,	// (0x0001d402) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7d,	// (0x0001d402) vkb2_top_grid_right_pane_g

0x73c4,	// (0x00014a49) vkb2_top_cell_left_pane_g1

0x73e6,	// (0x00014a6b) vkb2_cell_keypad_pane_g1_ParamLimits

0x73e6,	// (0x00014a6b) vkb2_cell_keypad_pane_g1

0xdf15,	// (0x0001b59a) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf15,	// (0x0001b59a) vkb2_cell_keypad_pane_t1

0x73f4,	// (0x00014a79) vkb2_cell_bottom_grid_pane_ParamLimits

0x73f4,	// (0x00014a79) vkb2_cell_bottom_grid_pane

0x742d,	// (0x00014ab2) vkb2_cell_bottom_grid_pane_g1

0xdac0,	// (0x0001b145) aid_call2_pane_cp02

0xdac8,	// (0x0001b14d) aid_call_pane_cp02

0xdad0,	// (0x0001b155) clock_digital_number_pane_cp10

0xdad8,	// (0x0001b15d) clock_digital_number_pane_cp11

0xdae0,	// (0x0001b165) clock_digital_number_pane_cp12

0xdae8,	// (0x0001b16d) clock_digital_number_pane_cp13

0xdaf0,	// (0x0001b175) clock_digital_separator_pane_cp10

0x41c9,	// (0x0001184e) popup_clock_digital_analogue_window_cp2_g1

0x41c9,	// (0x0001184e) popup_clock_digital_analogue_window_cp2_g2

0xdaf8,	// (0x0001b17d) popup_clock_digital_analogue_window_cp2_g3

0x41c9,	// (0x0001184e) popup_clock_digital_analogue_window_cp2_g4

0xdaf8,	// (0x0001b17d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd32,	// (0x0001d3b7) popup_clock_digital_analogue_window_cp2_g

0xdb00,	// (0x0001b185) popup_clock_digital_analogue_window_cp2_t1

0xdb0e,	// (0x0001b193) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3d,	// (0x0001d3c2) popup_clock_digital_analogue_window_cp2_t

0xbcaf,	// (0x00019334) clock_digital_number_pane_cp10_g1

0xbcaf,	// (0x00019334) clock_digital_number_pane_cp10_g2

0x0001,

0xfb20,	// (0x0001d1a5) clock_digital_number_pane_cp10_g

0xbcaf,	// (0x00019334) clock_digital_separator_pane_cp10_g1

0xbcaf,	// (0x00019334) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb20,	// (0x0001d1a5) clock_digital_separator_pane_cp10_g

0xd93c,	// (0x0001afc1) uniindi_top_pane_g3

0xd94d,	// (0x0001afd2) uniindi_top_pane_g4

0x71fc,	// (0x00014881) vkb2_row_keypad_pane_ParamLimits

0x71fc,	// (0x00014881) vkb2_row_keypad_pane

0x744d,	// (0x00014ad2) vkb2_cell_t_keypad_pane_ParamLimits

0x744d,	// (0x00014ad2) vkb2_cell_t_keypad_pane

0x745d,	// (0x00014ae2) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x745d,	// (0x00014ae2) vkb2_cell_t_keypad_pane_cp08

0x7470,	// (0x00014af5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7470,	// (0x00014af5) vkb2_cell_t_keypad_pane_cp09

0x7484,	// (0x00014b09) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7484,	// (0x00014b09) vkb2_cell_t_keypad_pane_cp01

0x7495,	// (0x00014b1a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7495,	// (0x00014b1a) vkb2_cell_t_keypad_pane_cp02

0x74a6,	// (0x00014b2b) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x74a6,	// (0x00014b2b) vkb2_cell_t_keypad_pane_cp03

0x74b7,	// (0x00014b3c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x74b7,	// (0x00014b3c) vkb2_cell_t_keypad_pane_cp04

0x74c8,	// (0x00014b4d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x74c8,	// (0x00014b4d) vkb2_cell_t_keypad_pane_cp05

0x74d9,	// (0x00014b5e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x74d9,	// (0x00014b5e) vkb2_cell_t_keypad_pane_cp06

0x74ea,	// (0x00014b6f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x74ea,	// (0x00014b6f) vkb2_cell_t_keypad_pane_cp07

0x74fb,	// (0x00014b80) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x74fb,	// (0x00014b80) vkb2_cell_t_keypad_pane_cp10

0x6ca3,	// (0x00014328) vkb2_cell_t_keypad_pane_g1

0xdf2c,	// (0x0001b5b1) vkb2_cell_t_keypad_pane_t1

0x5663,	// (0x00012ce8) popup_grid_graphic2_window

0xdf3e,	// (0x0001b5c3) aid_size_cell_graphic2_ParamLimits

0xdf3e,	// (0x0001b5c3) aid_size_cell_graphic2

0xdf76,	// (0x0001b5fb) bg_popup_window_pane_cp21_ParamLimits

0xdf76,	// (0x0001b5fb) bg_popup_window_pane_cp21

0xdf84,	// (0x0001b609) graphic2_pages_pane_ParamLimits

0xdf84,	// (0x0001b609) graphic2_pages_pane

0xdfca,	// (0x0001b64f) grid_graphic2_control_pane_ParamLimits

0xdfca,	// (0x0001b64f) grid_graphic2_control_pane

0xe008,	// (0x0001b68d) grid_graphic2_pane_ParamLimits

0xe008,	// (0x0001b68d) grid_graphic2_pane

0xe07c,	// (0x0001b701) cell_graphic2_pane

0x5663,	// (0x00012ce8) main_comp_mode_pane

0xd14a,	// (0x0001a7cf) list_ai3_gene_pane_ParamLimits

0xd57b,	// (0x0001ac00) bg_popup_window_pane_cp19_ParamLimits

0xd587,	// (0x0001ac0c) bg_touch_area_indi_pane_ParamLimits

0xd587,	// (0x0001ac0c) bg_touch_area_indi_pane

0xd59d,	// (0x0001ac22) bg_touch_area_indi_pane_cp01_ParamLimits

0xd59d,	// (0x0001ac22) bg_touch_area_indi_pane_cp01

0xd5b3,	// (0x0001ac38) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5b3,	// (0x0001ac38) bg_touch_area_indi_pane_cp02

0xd5c9,	// (0x0001ac4e) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5c9,	// (0x0001ac4e) bg_touch_area_indi_pane_cp03

0xd5e3,	// (0x0001ac68) popup_slider_window_g1_ParamLimits

0xd5ff,	// (0x0001ac84) popup_slider_window_g2_ParamLimits

0xd61b,	// (0x0001aca0) popup_slider_window_g3_ParamLimits

0xfcc7,	// (0x0001d34c) popup_slider_window_g_ParamLimits

0xd681,	// (0x0001ad06) popup_slider_window_t1_ParamLimits

0xd6f5,	// (0x0001ad7a) small_volume_slider_vertical_pane_ParamLimits

0xe07c,	// (0x0001b701) cell_graphic2_pane_ParamLimits

0xe0cb,	// (0x0001b750) bg_button_pane_cp10_ParamLimits

0xe0cb,	// (0x0001b750) bg_button_pane_cp10

0xe0de,	// (0x0001b763) bg_button_pane_cp11_ParamLimits

0xe0de,	// (0x0001b763) bg_button_pane_cp11

0xe0f1,	// (0x0001b776) graphic2_pages_pane_g1_ParamLimits

0xe0f1,	// (0x0001b776) graphic2_pages_pane_g1

0xe10c,	// (0x0001b791) graphic2_pages_pane_g2_ParamLimits

0xe10c,	// (0x0001b791) graphic2_pages_pane_g2

0x0001,

0xfd8b,	// (0x0001d410) graphic2_pages_pane_g_ParamLimits

0xfd8b,	// (0x0001d410) graphic2_pages_pane_g

0xe124,	// (0x0001b7a9) graphic2_pages_pane_t1_ParamLimits

0xe124,	// (0x0001b7a9) graphic2_pages_pane_t1

0xe13c,	// (0x0001b7c1) cell_graphic2_control_pane_ParamLimits

0xe13c,	// (0x0001b7c1) cell_graphic2_control_pane

0xe15a,	// (0x0001b7df) cell_graphic2_pane_g1_ParamLimits

0xe15a,	// (0x0001b7df) cell_graphic2_pane_g1

0xe167,	// (0x0001b7ec) cell_graphic2_pane_g2_ParamLimits

0xe167,	// (0x0001b7ec) cell_graphic2_pane_g2

0xe174,	// (0x0001b7f9) cell_graphic2_pane_g3_ParamLimits

0xe174,	// (0x0001b7f9) cell_graphic2_pane_g3

0xe181,	// (0x0001b806) cell_graphic2_pane_g4_ParamLimits

0xe181,	// (0x0001b806) cell_graphic2_pane_g4

0xe18e,	// (0x0001b813) cell_graphic2_pane_g5_ParamLimits

0xe18e,	// (0x0001b813) cell_graphic2_pane_g5

0x0004,

0xfd90,	// (0x0001d415) cell_graphic2_pane_g_ParamLimits

0xfd90,	// (0x0001d415) cell_graphic2_pane_g

0xe1a7,	// (0x0001b82c) cell_graphic2_pane_t1_ParamLimits

0xe1a7,	// (0x0001b82c) cell_graphic2_pane_t1

0x9279,	// (0x000168fe) grid_highlight_pane_cp11_ParamLimits

0x9279,	// (0x000168fe) grid_highlight_pane_cp11

0x3856,	// (0x00010edb) bg_button_pane_cp05

0xe1fe,	// (0x0001b883) cell_graphic2_control_pane_g1

0xbcaf,	// (0x00019334) bg_touch_area_indi_pane_g1

0xe226,	// (0x0001b8ab) aid_cmod_rocker_key_size

0xe230,	// (0x0001b8b5) aid_cmode_itu_key_size

0xe23a,	// (0x0001b8bf) main_cmode_video_pane

0xe244,	// (0x0001b8c9) main_comp_mode_itu_pane

0xe250,	// (0x0001b8d5) main_comp_mode_rocker_pane

0xe25c,	// (0x0001b8e1) cell_cmode_rocker_pane_ParamLimits

0xe25c,	// (0x0001b8e1) cell_cmode_rocker_pane

0xe26e,	// (0x0001b8f3) cell_cmode_itu_pane_ParamLimits

0xe26e,	// (0x0001b8f3) cell_cmode_itu_pane

0x3b34,	// (0x000111b9) bg_button_pane_cp06_ParamLimits

0x3b34,	// (0x000111b9) bg_button_pane_cp06

0xbf1f,	// (0x000195a4) cell_cmode_rocker_pane_g1_ParamLimits

0xbf1f,	// (0x000195a4) cell_cmode_rocker_pane_g1

0xd799,	// (0x0001ae1e) cell_cmode_rocker_pane_g2_ParamLimits

0xd799,	// (0x0001ae1e) cell_cmode_rocker_pane_g2

0x0001,

0xfda0,	// (0x0001d425) cell_cmode_rocker_pane_g_ParamLimits

0xfda0,	// (0x0001d425) cell_cmode_rocker_pane_g

0x3662,	// (0x00010ce7) bg_button_pane_cp07

0xe283,	// (0x0001b908) cell_cmode_itu_pane_g1

0xe28c,	// (0x0001b911) cell_cmode_itu_pane_t1

0xe29a,	// (0x0001b91f) cell_cmode_itu_pane_t2

0x0001,

0xfda5,	// (0x0001d42a) cell_cmode_itu_pane_t

0xd9bf,	// (0x0001b044) aid_touch_ctrl_left

0xd9c7,	// (0x0001b04c) aid_touch_ctrl_right

0x3662,	// (0x00010ce7) compa_mode_pane

0xe2a8,	// (0x0001b92d) aid_cmod_rocker_key_size_cp

0xe2b2,	// (0x0001b937) aid_cmode_itu_key_size_cp

0xe2bc,	// (0x0001b941) compa_mode_pane_g1

0xe2c4,	// (0x0001b949) compa_mode_pane_g2

0xe2cc,	// (0x0001b951) compa_mode_pane_g3

0x0002,

0xfdaa,	// (0x0001d42f) compa_mode_pane_g

0xe2d4,	// (0x0001b959) main_comp_mode_itu_pane_cp

0xe2dc,	// (0x0001b961) main_comp_mode_rocker_pane_cp

0xe2e4,	// (0x0001b969) cell_cmode_itu_pane_cp_ParamLimits

0xe2e4,	// (0x0001b969) cell_cmode_itu_pane_cp

0xe2f9,	// (0x0001b97e) cell_cmode_rocker_pane_cp_ParamLimits

0xe2f9,	// (0x0001b97e) cell_cmode_rocker_pane_cp

0x3b34,	// (0x000111b9) bg_button_pane_cp06_cp_ParamLimits

0x3b34,	// (0x000111b9) bg_button_pane_cp06_cp

0xbf1f,	// (0x000195a4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf1f,	// (0x000195a4) cell_cmode_rocker_pane_g1_cp

0xbcaf,	// (0x00019334) cell_cmode_rocker_pane_g2_cp

0x3662,	// (0x00010ce7) bg_button_pane_cp07_cp

0xe30b,	// (0x0001b990) cell_cmode_itu_pane_g1_cp

0xe314,	// (0x0001b999) cell_cmode_itu_pane_t1_cp

0xe314,	// (0x0001b999) cell_cmode_itu_pane_t2_cp

0xa759,	// (0x00017dde) settings_code_pane_cp2

0x3712,	// (0x00010d97) bg_popup_window_pane_cp3_ParamLimits

0x396f,	// (0x00010ff4) heading_pane_cp3_ParamLimits

0x397e,	// (0x00011003) listscroll_popup_graphic_pane_ParamLimits

0x6a4c,	// (0x000140d1) fep_hwr_aid_pane_ParamLimits

0x6ec3,	// (0x00014548) aid_touch_sctrl_top_ParamLimits

0x6ede,	// (0x00014563) sctrl_sk_top_pane_g1_ParamLimits

0x6ca3,	// (0x00014328) sctrl_sk_top_pane_g2_ParamLimits

0xfce0,	// (0x0001d365) sctrl_sk_top_pane_g_ParamLimits

0x6eeb,	// (0x00014570) sctrl_sk_top_pane_t1_ParamLimits

0x6ec3,	// (0x00014548) aid_touch_sctrl_bottom_ParamLimits

0x6eeb,	// (0x00014570) sctrl_sk_bottom_pane_t1_ParamLimits

0xd908,	// (0x0001af8d) aid_area_touch_clock

0x70d0,	// (0x00014755) aid_vkb2_area_top_pane_cell_ParamLimits

0x70d0,	// (0x00014755) aid_vkb2_area_top_pane_cell

0x721e,	// (0x000148a3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x721e,	// (0x000148a3) aid_vkb2_area_bottom_pane_cell

0xde77,	// (0x0001b4fc) popup_char_count_window

0xe322,	// (0x0001b9a7) popup_char_count_window_g1

0xe32b,	// (0x0001b9b0) popup_char_count_window_g2

0xe334,	// (0x0001b9b9) popup_char_count_window_g3

0x0002,

0xfdb1,	// (0x0001d436) popup_char_count_window_g

0xe33d,	// (0x0001b9c2) popup_char_count_window_t1

0x6f92,	// (0x00014617) popup_fep_char_preview_window_ParamLimits

0x6f92,	// (0x00014617) popup_fep_char_preview_window

0x70ee,	// (0x00014773) vkb2_top_candi_pane_ParamLimits

0x70ee,	// (0x00014773) vkb2_top_candi_pane

0xe34b,	// (0x0001b9d0) cell_vkb2_top_candi_pane_ParamLimits

0xe34b,	// (0x0001b9d0) cell_vkb2_top_candi_pane

0x7510,	// (0x00014b95) bg_popup_fep_char_preview_window_ParamLimits

0x7510,	// (0x00014b95) bg_popup_fep_char_preview_window

0x751e,	// (0x00014ba3) popup_fep_char_preview_window_t1_ParamLimits

0x751e,	// (0x00014ba3) popup_fep_char_preview_window_t1

0xe395,	// (0x0001ba1a) bg_popup_fep_char_preview_window_g1

0xe39d,	// (0x0001ba22) bg_popup_fep_char_preview_window_g2

0xe3a5,	// (0x0001ba2a) bg_popup_fep_char_preview_window_g3

0xe3ad,	// (0x0001ba32) bg_popup_fep_char_preview_window_g4

0xe3b5,	// (0x0001ba3a) bg_popup_fep_char_preview_window_g5

0xe3bd,	// (0x0001ba42) bg_popup_fep_char_preview_window_g6

0xe3c5,	// (0x0001ba4a) bg_popup_fep_char_preview_window_g7

0xe3cd,	// (0x0001ba52) bg_popup_fep_char_preview_window_g8

0xe3d5,	// (0x0001ba5a) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb8,	// (0x0001d43d) bg_popup_fep_char_preview_window_g

0x6ca3,	// (0x00014328) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6ca3,	// (0x00014328) cell_vkb2_top_candi_pane_g1

0x6cb1,	// (0x00014336) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6cb1,	// (0x00014336) cell_vkb2_top_candi_pane_g2

0xe1cb,	// (0x0001b850) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe1cb,	// (0x0001b850) cell_vkb2_top_candi_pane_g3

0x7560,	// (0x00014be5) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7560,	// (0x00014be5) cell_vkb2_top_candi_pane_g4

0xc5b8,	// (0x00019c3d) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc5b8,	// (0x00019c3d) cell_vkb2_top_candi_pane_g5

0x7581,	// (0x00014c06) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7581,	// (0x00014c06) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcd,	// (0x0001d452) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcd,	// (0x0001d452) cell_vkb2_top_candi_pane_g

0x758f,	// (0x00014c14) cell_vkb2_top_candi_pane_t1

0x6864,	// (0x00013ee9) aid_size_touch_slider_mark_ParamLimits

0x6864,	// (0x00013ee9) aid_size_touch_slider_mark

0xdfba,	// (0x0001b63f) grid_graphic2_catg_pane_ParamLimits

0xdfba,	// (0x0001b63f) grid_graphic2_catg_pane

0xe058,	// (0x0001b6dd) popup_grid_graphic2_window_t1_ParamLimits

0xe058,	// (0x0001b6dd) popup_grid_graphic2_window_t1

0xe06a,	// (0x0001b6ef) popup_grid_graphic2_window_t2_ParamLimits

0xe06a,	// (0x0001b6ef) popup_grid_graphic2_window_t2

0x0001,

0xfd86,	// (0x0001d40b) popup_grid_graphic2_window_t_ParamLimits

0xfd86,	// (0x0001d40b) popup_grid_graphic2_window_t

0x3856,	// (0x00010edb) bg_button_pane_cp05_ParamLimits

0xe1fe,	// (0x0001b883) cell_graphic2_control_pane_g1_ParamLimits

0xe3dd,	// (0x0001ba62) cell_graphic2_catg_pane_ParamLimits

0xe3dd,	// (0x0001ba62) cell_graphic2_catg_pane

0x3662,	// (0x00010ce7) bg_button_pane_cp12

0xe3ef,	// (0x0001ba74) cell_graphic2_catg_pane_g1

0xd8d3,	// (0x0001af58) cell_tb_ext_pane_t1_ParamLimits

0x733b,	// (0x000149c0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x733b,	// (0x000149c0) vkb2_top_cell_right_narrow_pane

0x7353,	// (0x000149d8) vkb2_top_cell_right_wide_pane_ParamLimits

0x7353,	// (0x000149d8) vkb2_top_cell_right_wide_pane

0x6a3e,	// (0x000140c3) bg_vkb2_func_pane_ParamLimits

0x6a3e,	// (0x000140c3) bg_vkb2_func_pane

0x73c4,	// (0x00014a49) vkb2_top_cell_left_pane_g1_ParamLimits

0x6a3e,	// (0x000140c3) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6a3e,	// (0x000140c3) bg_vkb2_fuc_pane_cp03

0x742d,	// (0x00014ab2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9161,	// (0x000167e6) bg_vkb2_func_pane_g1

0x9169,	// (0x000167ee) bg_vkb2_func_pane_g2

0x9179,	// (0x000167fe) bg_vkb2_func_pane_g3

0x9171,	// (0x000167f6) bg_vkb2_func_pane_g4

0x9181,	// (0x00016806) bg_vkb2_func_pane_g5

0x9189,	// (0x0001680e) bg_vkb2_func_pane_g6

0x9191,	// (0x00016816) bg_vkb2_func_pane_g7

0x9199,	// (0x0001681e) bg_vkb2_func_pane_g8

0x9159,	// (0x000167de) bg_vkb2_func_pane_g9

0x0008,

0xfdda,	// (0x0001d45f) bg_vkb2_func_pane_g

0x6a3e,	// (0x000140c3) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6a3e,	// (0x000140c3) bg_vkb2_fuc_pane_cp01

0x73c4,	// (0x00014a49) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x73c4,	// (0x00014a49) vkb2_top_cell_right_wide_pane_g1

0x6a3e,	// (0x000140c3) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6a3e,	// (0x000140c3) bg_vkb2_fuc_pane_cp02

0x75ae,	// (0x00014c33) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x75ae,	// (0x00014c33) vkb2_top_cell_right_narrow_pane_g1

0xd4f5,	// (0x0001ab7a) aid_touch_area_decrease_ParamLimits

0xd4f5,	// (0x0001ab7a) aid_touch_area_decrease

0xd519,	// (0x0001ab9e) aid_touch_area_increase_ParamLimits

0xd519,	// (0x0001ab9e) aid_touch_area_increase

0xd531,	// (0x0001abb6) aid_touch_area_mute_ParamLimits

0xd531,	// (0x0001abb6) aid_touch_area_mute

0xd54d,	// (0x0001abd2) aid_touch_area_slider_ParamLimits

0xd54d,	// (0x0001abd2) aid_touch_area_slider

0xd637,	// (0x0001acbc) popup_slider_window_g4_ParamLimits

0xd637,	// (0x0001acbc) popup_slider_window_g4

0xd64f,	// (0x0001acd4) popup_slider_window_g5_ParamLimits

0xd64f,	// (0x0001acd4) popup_slider_window_g5

0xd671,	// (0x0001acf6) popup_slider_window_g6_ParamLimits

0xd671,	// (0x0001acf6) popup_slider_window_g6

0xd6af,	// (0x0001ad34) popup_slider_window_t2_ParamLimits

0xd6af,	// (0x0001ad34) popup_slider_window_t2

0x0001,

0xfcd4,	// (0x0001d359) popup_slider_window_t_ParamLimits

0xfcd4,	// (0x0001d359) popup_slider_window_t

0xd6c7,	// (0x0001ad4c) slider_pane_ParamLimits

0xd6c7,	// (0x0001ad4c) slider_pane

0xe3f8,	// (0x0001ba7d) slider_pane_g1_ParamLimits

0xe3f8,	// (0x0001ba7d) slider_pane_g1

0xe40c,	// (0x0001ba91) slider_pane_g2_ParamLimits

0xe40c,	// (0x0001ba91) slider_pane_g2

0xe422,	// (0x0001baa7) slider_pane_g3_ParamLimits

0xe422,	// (0x0001baa7) slider_pane_g3

0x0003,

0xfded,	// (0x0001d472) slider_pane_g_ParamLimits

0xfded,	// (0x0001d472) slider_pane_g

0x641b,	// (0x00013aa0) popup_tb_float_extension_window_ParamLimits

0x641b,	// (0x00013aa0) popup_tb_float_extension_window

0xe44e,	// (0x0001bad3) aid_size_cell_tb_float_ext

0x3662,	// (0x00010ce7) bg_popup_sub_window_cp28

0xe45a,	// (0x0001badf) grid_tb_float_ext_pane

0xe464,	// (0x0001bae9) cell_tb_float_ext_pane_ParamLimits

0xe464,	// (0x0001bae9) cell_tb_float_ext_pane

0xe47e,	// (0x0001bb03) cell_tb_float_ext_pane_g1

0xe487,	// (0x0001bb0c) grid_highlight_pane_cp12

0x6b8d,	// (0x00014212) cell_last_hwr_side_pane_ParamLimits

0x6b8d,	// (0x00014212) cell_last_hwr_side_pane

0xbcaf,	// (0x00019334) cell_last_hwr_side_pane_g1

0xe490,	// (0x0001bb15) cell_last_hwr_side_pane_g2

0x0001,

0xfdf6,	// (0x0001d47b) cell_last_hwr_side_pane_g

0x72ea,	// (0x0001496f) vkb2_area_bottom_space_btn_pane_ParamLimits

0x72ea,	// (0x0001496f) vkb2_area_bottom_space_btn_pane

0x6ca3,	// (0x00014328) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf2c,	// (0x0001b5b1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x758f,	// (0x00014c14) cell_vkb2_top_candi_pane_t1_ParamLimits

0x75ce,	// (0x00014c53) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x75ce,	// (0x00014c53) vkb2_area_bottom_space_btn_pane_g1

0x7608,	// (0x00014c8d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7608,	// (0x00014c8d) vkb2_area_bottom_space_btn_pane_g2

0x763e,	// (0x00014cc3) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x763e,	// (0x00014cc3) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfb,	// (0x0001d480) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfb,	// (0x0001d480) vkb2_area_bottom_space_btn_pane_g

0x6b01,	// (0x00014186) cel_fep_hwr_func_pane_ParamLimits

0x6b01,	// (0x00014186) cel_fep_hwr_func_pane

0x6b3d,	// (0x000141c2) cell_hwr_side_button_pane_ParamLimits

0x6b3d,	// (0x000141c2) cell_hwr_side_button_pane

0xd908,	// (0x0001af8d) aid_area_touch_clock_ParamLimits

0x3856,	// (0x00010edb) bg_uniindi_top_pane_ParamLimits

0xd91a,	// (0x0001af9f) uniindi_top_pane_g1_ParamLimits

0xd930,	// (0x0001afb5) uniindi_top_pane_g2_ParamLimits

0xd93c,	// (0x0001afc1) uniindi_top_pane_g3_ParamLimits

0xd94d,	// (0x0001afd2) uniindi_top_pane_g4_ParamLimits

0xfd0c,	// (0x0001d391) uniindi_top_pane_g_ParamLimits

0xd95a,	// (0x0001afdf) uniindi_top_pane_t1_ParamLimits

0x3856,	// (0x00010edb) bg_vkb2_func_pane_cp01_ParamLimits

0x3856,	// (0x00010edb) bg_vkb2_func_pane_cp01

0xe499,	// (0x0001bb1e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe499,	// (0x0001bb1e) cel_fep_hwr_func_pane_g1

0x3856,	// (0x00010edb) bg_vkb2_func_pane_cp02_ParamLimits

0x3856,	// (0x00010edb) bg_vkb2_func_pane_cp02

0xe499,	// (0x0001bb1e) cell_hwr_side_button_pane_g1_ParamLimits

0xe499,	// (0x0001bb1e) cell_hwr_side_button_pane_g1

0x8faf,	// (0x00016634) status_pane_g4_ParamLimits

0x8faf,	// (0x00016634) status_pane_g4

0x8fc9,	// (0x0001664e) status_pane_t1

0xb9f1,	// (0x00019076) form2_midp_gauge_slider_cont_pane

0xb9f9,	// (0x0001907e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba0b,	// (0x00019090) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba1d,	// (0x000190a2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad3,	// (0x0001d158) form2_midp_gauge_slider_pane_t_ParamLimits

0xba2f,	// (0x000190b4) form2_midp_slider_pane_ParamLimits

0x6f5a,	// (0x000145df) aid_size_cell_func_vkb2_ParamLimits

0x6f5a,	// (0x000145df) aid_size_cell_func_vkb2

0xe43a,	// (0x0001babf) slider_pane_g4_ParamLimits

0xe43a,	// (0x0001babf) slider_pane_g4

0x7688,	// (0x00014d0d) form2_midp_gauge_slider_pane_t2_cp01

0x7696,	// (0x00014d1b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7696,	// (0x00014d1b) form2_midp_gauge_slider_pane_t3_cp01

0x76b3,	// (0x00014d38) form2_midp_slider_pane_cp01

0x3662,	// (0x00010ce7) navi_smil_pane

0xe4d2,	// (0x0001bb57) navi_smil_pane_g1

0xe4da,	// (0x0001bb5f) navi_smil_pane_t1

0xe4a7,	// (0x0001bb2c) form2_midp_slider_pane_g1

0xe4b0,	// (0x0001bb35) form2_midp_slider_pane_g2

0xe4b8,	// (0x0001bb3d) form2_midp_slider_pane_g3

0xe4a7,	// (0x0001bb2c) form2_midp_slider_pane_g4

0xe4c0,	// (0x0001bb45) form2_midp_slider_pane_g5

0x0004,

0xfe04,	// (0x0001d489) form2_midp_slider_pane_g

0x7678,	// (0x00014cfd) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7678,	// (0x00014cfd) vkb2_area_bottom_space_btn_pane_g4

0x8dde,	// (0x00016463) lc0_navi_pane_ParamLimits

0x8dde,	// (0x00016463) lc0_navi_pane

0x8e54,	// (0x000164d9) lc0_stat_indi_pane_ParamLimits

0x8e54,	// (0x000164d9) lc0_stat_indi_pane

0x8e6b,	// (0x000164f0) ls0_title_pane_ParamLimits

0x8e6b,	// (0x000164f0) ls0_title_pane

0x3b34,	// (0x000111b9) bg_popup_sub_pane_cp14_ParamLimits

0xd8ef,	// (0x0001af74) list_uniindi_pane_ParamLimits

0xd8fb,	// (0x0001af80) uniindi_top_pane_ParamLimits

0xd997,	// (0x0001b01c) list_single_uniindi_pane_g1_ParamLimits

0xd9aa,	// (0x0001b02f) list_single_uniindi_pane_t1_ParamLimits

0x76bc,	// (0x00014d41) lc0_stat_clock_pane_ParamLimits

0x76bc,	// (0x00014d41) lc0_stat_clock_pane

0xe4e8,	// (0x0001bb6d) lc0_stat_indi_pane_g1_ParamLimits

0xe4e8,	// (0x0001bb6d) lc0_stat_indi_pane_g1

0xe4f5,	// (0x0001bb7a) lc0_stat_indi_pane_g2_ParamLimits

0xe4f5,	// (0x0001bb7a) lc0_stat_indi_pane_g2

0x0001,

0xfe0f,	// (0x0001d494) lc0_stat_indi_pane_g_ParamLimits

0xfe0f,	// (0x0001d494) lc0_stat_indi_pane_g

0x76c9,	// (0x00014d4e) lc0_uni_indicator_pane_ParamLimits

0x76c9,	// (0x00014d4e) lc0_uni_indicator_pane

0xe502,	// (0x0001bb87) ls0_title_pane_g1_ParamLimits

0xe502,	// (0x0001bb87) ls0_title_pane_g1

0xe516,	// (0x0001bb9b) ls0_title_pane_t1_ParamLimits

0xe516,	// (0x0001bb9b) ls0_title_pane_t1

0x76d6,	// (0x00014d5b) lc0_uni_indicator_pane_g1_ParamLimits

0x76d6,	// (0x00014d5b) lc0_uni_indicator_pane_g1

0xe54c,	// (0x0001bbd1) lc0_stat_clock_pane_t1

0x5663,	// (0x00012ce8) main_ai5_pane

0xe562,	// (0x0001bbe7) ai5_sk_pane_ParamLimits

0xe562,	// (0x0001bbe7) ai5_sk_pane

0xe56f,	// (0x0001bbf4) cell_ai5_widget_pane_ParamLimits

0xe56f,	// (0x0001bbf4) cell_ai5_widget_pane

0xe638,	// (0x0001bcbd) aid_size_cell_widget_grid

0xe646,	// (0x0001bccb) bg_ai5_widget_pane_ParamLimits

0xe646,	// (0x0001bccb) bg_ai5_widget_pane

0xe6c4,	// (0x0001bd49) cell_ai5_widget_pane_g2

0xe6d8,	// (0x0001bd5d) cell_ai5_widget_pane_g3

0xe6f2,	// (0x0001bd77) cell_ai5_widget_pane_g4

0xe702,	// (0x0001bd87) cell_ai5_widget_pane_g5

0xe712,	// (0x0001bd97) cell_ai5_widget_pane_g6

0xe71e,	// (0x0001bda3) cell_ai5_widget_pane_g7

0xe78a,	// (0x0001be0f) cell_ai5_widget_pane_t1_ParamLimits

0xe78a,	// (0x0001be0f) cell_ai5_widget_pane_t1

0xe7a7,	// (0x0001be2c) cell_ai5_widget_pane_t2_ParamLimits

0xe7a7,	// (0x0001be2c) cell_ai5_widget_pane_t2

0xe7bf,	// (0x0001be44) cell_ai5_widget_pane_t3_ParamLimits

0xe7bf,	// (0x0001be44) cell_ai5_widget_pane_t3

0xe7d7,	// (0x0001be5c) cell_ai5_widget_pane_t4_ParamLimits

0xe7d7,	// (0x0001be5c) cell_ai5_widget_pane_t4

0xe7fd,	// (0x0001be82) cell_ai5_widget_pane_t5_ParamLimits

0xe7fd,	// (0x0001be82) cell_ai5_widget_pane_t5

0xe81c,	// (0x0001bea1) cell_ai5_widget_pane_t6_ParamLimits

0xe81c,	// (0x0001bea1) cell_ai5_widget_pane_t6

0xe82e,	// (0x0001beb3) cell_ai5_widget_pane_t7_ParamLimits

0xe82e,	// (0x0001beb3) cell_ai5_widget_pane_t7

0xe84d,	// (0x0001bed2) cell_ai5_widget_pane_t8_ParamLimits

0xe84d,	// (0x0001bed2) cell_ai5_widget_pane_t8

0x000b,

0xfe2f,	// (0x0001d4b4) cell_ai5_widget_pane_t_ParamLimits

0xfe2f,	// (0x0001d4b4) cell_ai5_widget_pane_t

0xe8d1,	// (0x0001bf56) grid_ai5_widget_pane

0x3b34,	// (0x000111b9) highlight_cell_ai5_widget_pane_ParamLimits

0x3b34,	// (0x000111b9) highlight_cell_ai5_widget_pane

0xe8e5,	// (0x0001bf6a) ai5_sk_left_pane

0xe8ef,	// (0x0001bf74) ai5_sk_middle_pane

0xe8f9,	// (0x0001bf7e) ai5_sk_right_pane

0xe903,	// (0x0001bf88) bg_ai5_widget_pane_g1_ParamLimits

0xe903,	// (0x0001bf88) bg_ai5_widget_pane_g1

0xe90f,	// (0x0001bf94) bg_ai5_widget_pane_g2_ParamLimits

0xe90f,	// (0x0001bf94) bg_ai5_widget_pane_g2

0xe91b,	// (0x0001bfa0) bg_ai5_widget_pane_g3_ParamLimits

0xe91b,	// (0x0001bfa0) bg_ai5_widget_pane_g3

0xe927,	// (0x0001bfac) bg_ai5_widget_pane_g4_ParamLimits

0xe927,	// (0x0001bfac) bg_ai5_widget_pane_g4

0xe933,	// (0x0001bfb8) bg_ai5_widget_pane_g5_ParamLimits

0xe933,	// (0x0001bfb8) bg_ai5_widget_pane_g5

0xe93f,	// (0x0001bfc4) bg_ai5_widget_pane_g6_ParamLimits

0xe93f,	// (0x0001bfc4) bg_ai5_widget_pane_g6

0xe94b,	// (0x0001bfd0) bg_ai5_widget_pane_g7_ParamLimits

0xe94b,	// (0x0001bfd0) bg_ai5_widget_pane_g7

0xe957,	// (0x0001bfdc) bg_ai5_widget_pane_g8_ParamLimits

0xe957,	// (0x0001bfdc) bg_ai5_widget_pane_g8

0xe963,	// (0x0001bfe8) bg_ai5_widget_pane_g9_ParamLimits

0xe963,	// (0x0001bfe8) bg_ai5_widget_pane_g9

0x0008,

0xfe48,	// (0x0001d4cd) bg_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0001d4cd) bg_ai5_widget_pane_g

0xe995,	// (0x0001c01a) cell_shortcut_ai5_widget_pane_ParamLimits

0xe995,	// (0x0001c01a) cell_shortcut_ai5_widget_pane

0x4814,	// (0x00011e99) bg_cell_shortcut_ai5_widget_pane

0xe9a6,	// (0x0001c02b) cell_grid_ai5_widget_pane_g1

0x4814,	// (0x00011e99) highlight_cell_shortcut_ai5_widget_pane

0x9161,	// (0x000167e6) ai5_sk_left_pane_g1

0xe9af,	// (0x0001c034) ai5_sk_left_pane_g2

0xe9b7,	// (0x0001c03c) ai5_sk_left_pane_g3

0xe9bf,	// (0x0001c044) ai5_sk_left_pane_g4

0x0003,

0xfe5b,	// (0x0001d4e0) ai5_sk_left_pane_g

0xe9c7,	// (0x0001c04c) ai5_sk_left_pane_t1

0x9169,	// (0x000167ee) ai5_sk_right_pane_g1

0xe9d5,	// (0x0001c05a) ai5_sk_right_pane_g2

0xe9dd,	// (0x0001c062) ai5_sk_right_pane_g3

0xe9e5,	// (0x0001c06a) ai5_sk_right_pane_g4

0x0003,

0xfe64,	// (0x0001d4e9) ai5_sk_right_pane_g

0xe9ed,	// (0x0001c072) ai5_sk_right_pane_t1

0x9169,	// (0x000167ee) ai5_sk_middle_pane_g1

0x9161,	// (0x000167e6) ai5_sk_middle_pane_g2

0x9181,	// (0x00016806) ai5_sk_middle_pane_g3

0xe9dd,	// (0x0001c062) ai5_sk_middle_pane_g4

0xe9b7,	// (0x0001c03c) ai5_sk_middle_pane_g5

0xe9fb,	// (0x0001c080) ai5_sk_middle_pane_g6

0xea03,	// (0x0001c088) ai5_sk_middle_pane_g7

0x0006,

0xfe6d,	// (0x0001d4f2) ai5_sk_middle_pane_g

0x8c64,	// (0x000162e9) aid_touch_area_size_lc0_ParamLimits

0x8c64,	// (0x000162e9) aid_touch_area_size_lc0

0x6cd2,	// (0x00014357) cell_hwr_candidate_pane_t1_ParamLimits

0x8c80,	// (0x00016305) aid_touch_navi_pane

0x8f59,	// (0x000165de) status_dt_navi_pane_ParamLimits

0x8f59,	// (0x000165de) status_dt_navi_pane

0x8f66,	// (0x000165eb) status_dt_sta_pane_ParamLimits

0x8f66,	// (0x000165eb) status_dt_sta_pane

0xea0b,	// (0x0001c090) dt_sta_controll_pane

0xea18,	// (0x0001c09d) dt_sta_indi_pane

0xea29,	// (0x0001c0ae) dt_sta_title_pane

0x3856,	// (0x00010edb) bg_dt_sta_indi_pane_ParamLimits

0x3856,	// (0x00010edb) bg_dt_sta_indi_pane

0xea3c,	// (0x0001c0c1) dt_sta_battery_pane

0xea44,	// (0x0001c0c9) dt_sta_indi_pane_g1

0xea4d,	// (0x0001c0d2) dt_sta_indi_pane_g2

0xea56,	// (0x0001c0db) dt_sta_indi_pane_g3

0x0002,

0xfe7c,	// (0x0001d501) dt_sta_indi_pane_g

0xea5f,	// (0x0001c0e4) dt_sta_signal_pane

0x3b34,	// (0x000111b9) bg_dt_sta_title_pane_ParamLimits

0x3b34,	// (0x000111b9) bg_dt_sta_title_pane

0xa090,	// (0x00017715) dt_sta_title_pane_g1

0xea68,	// (0x0001c0ed) dt_sta_title_pane_t1_ParamLimits

0xea68,	// (0x0001c0ed) dt_sta_title_pane_t1

0x3662,	// (0x00010ce7) bg_dt_sta_control_pane

0xea7d,	// (0x0001c102) dt_sta_controll_pane_g1

0xea86,	// (0x0001c10b) bg_dt_sta_title_pane_g1

0xea8f,	// (0x0001c114) bg_dt_sta_title_pane_g2

0xea98,	// (0x0001c11d) bg_dt_sta_title_pane_g3

0x0002,

0xfe83,	// (0x0001d508) bg_dt_sta_title_pane_g

0xbcaf,	// (0x00019334) bg_dt_sta_indi_pane_g1

0xeaa1,	// (0x0001c126) dt_sta_signal_pane_g1

0xeaa9,	// (0x0001c12e) dt_sta_signal_pane_g2

0x0001,

0xfe8a,	// (0x0001d50f) dt_sta_signal_pane_g

0xeab1,	// (0x0001c136) dt_sta_battery_pane_g1

0xeaba,	// (0x0001c13f) dt_sta_battery_pane_t1

0xbcaf,	// (0x00019334) bg_dt_sta_control_pane_g1

0x42e0,	// (0x00011965) fep_china_uni_eep_pane

0x42e8,	// (0x0001196d) fep_china_uni_entry_pane_ParamLimits

0x42f8,	// (0x0001197d) popup_fep_china_uni_window_g1_ParamLimits

0x4308,	// (0x0001198d) popup_fep_china_uni_window_g2_ParamLimits

0x4308,	// (0x0001198d) popup_fep_china_uni_window_g2

0x0001,

0xf6e2,	// (0x0001cd67) popup_fep_china_uni_window_g_ParamLimits

0xf6e2,	// (0x0001cd67) popup_fep_china_uni_window_g

0xeac9,	// (0x0001c14e) fep_china_uni_eep_pane_g1

0xead1,	// (0x0001c156) fep_china_uni_eep_pane_t1

0xe4c9,	// (0x0001bb4e) aid_touch_area_size_smil_player

0x8dd6,	// (0x0001645b) lc0_clock_pane

0x8fbd,	// (0x00016642) status_pane_g5_ParamLimits

0x8fbd,	// (0x00016642) status_pane_g5

0x60dc,	// (0x00013761) popup_keymap_window

0x8f7b,	// (0x00016600) status_icon_pane

0xe6d8,	// (0x0001bd5d) cell_ai5_widget_pane_g3_ParamLimits

0xe6f2,	// (0x0001bd77) cell_ai5_widget_pane_g4_ParamLimits

0xe702,	// (0x0001bd87) cell_ai5_widget_pane_g5_ParamLimits

0xe72a,	// (0x0001bdaf) cell_ai5_widget_pane_g8_ParamLimits

0xe72a,	// (0x0001bdaf) cell_ai5_widget_pane_g8

0xe73e,	// (0x0001bdc3) cell_ai5_widget_pane_g9_ParamLimits

0xe73e,	// (0x0001bdc3) cell_ai5_widget_pane_g9

0xe752,	// (0x0001bdd7) cell_ai5_widget_pane_g10_ParamLimits

0xe752,	// (0x0001bdd7) cell_ai5_widget_pane_g10

0xeae0,	// (0x0001c165) status_icon_pane_g1

0x3662,	// (0x00010ce7) bg_popup_sub_pane_cp13

0xeae8,	// (0x0001c16d) popup_keymap_window_t1

0x8c09,	// (0x0001628e) control_pane_g6_ParamLimits

0x8c09,	// (0x0001628e) control_pane_g6

0x8c16,	// (0x0001629b) control_pane_g7_ParamLimits

0x8c16,	// (0x0001629b) control_pane_g7

0x8c23,	// (0x000162a8) control_pane_g8_ParamLimits

0x8c23,	// (0x000162a8) control_pane_g8

0xea0b,	// (0x0001c090) dt_sta_controll_pane_ParamLimits

0xea18,	// (0x0001c09d) dt_sta_indi_pane_ParamLimits

0xea29,	// (0x0001c0ae) dt_sta_title_pane_ParamLimits

0x3a2d,	// (0x000110b2) aid_size_touch_scroll_bar_cale

0x573c,	// (0x00012dc1) popup_discreet_window_ParamLimits

0x573c,	// (0x00012dc1) popup_discreet_window

0x57b6,	// (0x00012e3b) popup_sk_window

0x98d4,	// (0x00016f59) bg_popup_sub_pane_cp28_ParamLimits

0x98d4,	// (0x00016f59) bg_popup_sub_pane_cp28

0xeaf6,	// (0x0001c17b) popup_discreet_window_g1_ParamLimits

0xeaf6,	// (0x0001c17b) popup_discreet_window_g1

0xeb16,	// (0x0001c19b) popup_discreet_window_t1_ParamLimits

0xeb16,	// (0x0001c19b) popup_discreet_window_t1

0xeb34,	// (0x0001c1b9) popup_discreet_window_t2_ParamLimits

0xeb34,	// (0x0001c1b9) popup_discreet_window_t2

0x0002,

0xfe8f,	// (0x0001d514) popup_discreet_window_t_ParamLimits

0xfe8f,	// (0x0001d514) popup_discreet_window_t

0x76ea,	// (0x00014d6f) popup_sk_window_g1

0x76f4,	// (0x00014d79) popup_sk_window_g2

0x0001,

0xfe96,	// (0x0001d51b) popup_sk_window_g

0x76fc,	// (0x00014d81) popup_sk_window_t1

0x770a,	// (0x00014d8f) popup_sk_window_t1_copy1

0xe6c4,	// (0x0001bd49) cell_ai5_widget_pane_g2_ParamLimits

0xe85f,	// (0x0001bee4) cell_ai5_widget_pane_t9_ParamLimits

0xe85f,	// (0x0001bee4) cell_ai5_widget_pane_t9

0x3662,	// (0x00010ce7) main_fep_fshwr2_pane

0x7718,	// (0x00014d9d) aid_fshwr2_btn_pane

0x772c,	// (0x00014db1) aid_fshwr2_syb_pane

0x7740,	// (0x00014dc5) aid_fshwr2_txt_pane

0x7750,	// (0x00014dd5) fshwr2_func_candi_pane

0x7774,	// (0x00014df9) fshwr2_hwr_syb_pane

0x778e,	// (0x00014e13) fshwr2_icf_pane

0x5663,	// (0x00012ce8) fshwr2_icf_bg_pane

0x77bc,	// (0x00014e41) fshwr2_icf_pane_t1_ParamLimits

0x77bc,	// (0x00014e41) fshwr2_icf_pane_t1

0x41c9,	// (0x0001184e) fshwr2_func_candi_pane_g1

0xeb86,	// (0x0001c20b) fshwr2_func_candi_row_pane_ParamLimits

0xeb86,	// (0x0001c20b) fshwr2_func_candi_row_pane

0x77d5,	// (0x00014e5a) cell_fshwr2_syb_pane_ParamLimits

0x77d5,	// (0x00014e5a) cell_fshwr2_syb_pane

0x77f8,	// (0x00014e7d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x77f8,	// (0x00014e7d) fshwr2_hwr_syb_pane_g1

0x5663,	// (0x00012ce8) bg_popup_call_pane_cp01

0x7806,	// (0x00014e8b) fshwr2_func_candi_cell_pane_ParamLimits

0x7806,	// (0x00014e8b) fshwr2_func_candi_cell_pane

0x9f30,	// (0x000175b5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f30,	// (0x000175b5) fshwr2_func_candi_cell_bg_pane

0x7851,	// (0x00014ed6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7851,	// (0x00014ed6) fshwr2_func_candi_cell_pane_g1

0x7871,	// (0x00014ef6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7871,	// (0x00014ef6) fshwr2_func_candi_cell_pane_t1

0x5663,	// (0x00012ce8) bg_button_pane_cp08

0x4a30,	// (0x000120b5) cell_fshwr2_syb_bg_pane

0x7884,	// (0x00014f09) cell_fshwr2_syb_bg_pane_g1

0x7898,	// (0x00014f1d) cell_fshwr2_syb_bg_pane_t1

0x3b34,	// (0x000111b9) main_tmo_pane

0xa3c9,	// (0x00017a4e) uni_indicator_pane_g1_ParamLimits

0xa3dc,	// (0x00017a61) uni_indicator_pane_g2_ParamLimits

0xa3ee,	// (0x00017a73) uni_indicator_pane_g3_ParamLimits

0xa3fd,	// (0x00017a82) uni_indicator_pane_g4_ParamLimits

0xa3fd,	// (0x00017a82) uni_indicator_pane_g4

0xa411,	// (0x00017a96) uni_indicator_pane_g5_ParamLimits

0xa411,	// (0x00017a96) uni_indicator_pane_g5

0xa411,	// (0x00017a96) uni_indicator_pane_g6_ParamLimits

0xa411,	// (0x00017a96) uni_indicator_pane_g6

0xf8e6,	// (0x0001cf6b) uni_indicator_pane_g_ParamLimits

0xd4d7,	// (0x0001ab5c) popup_tmo_note_window_ParamLimits

0xd4d7,	// (0x0001ab5c) popup_tmo_note_window

0x6f3c,	// (0x000145c1) fshwr2_bg_pane

0x7862,	// (0x00014ee7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7862,	// (0x00014ee7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9b,	// (0x0001d520) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9b,	// (0x0001d520) fshwr2_func_candi_cell_pane_g

0x6c8b,	// (0x00014310) bg_popup_window_pane_cp01

0x78ae,	// (0x00014f33) bg_popup_window_pane_g1_cp01

0xebad,	// (0x0001c232) bg_popup_window_pane_cp22_ParamLimits

0xebad,	// (0x0001c232) bg_popup_window_pane_cp22

0xebbb,	// (0x0001c240) listscroll_tmo_link_pane_ParamLimits

0xebbb,	// (0x0001c240) listscroll_tmo_link_pane

0xebfb,	// (0x0001c280) popup_tmo_note_window_g1_ParamLimits

0xebfb,	// (0x0001c280) popup_tmo_note_window_g1

0xec08,	// (0x0001c28d) tmo_note_info_pane_ParamLimits

0xec08,	// (0x0001c28d) tmo_note_info_pane

0xec22,	// (0x0001c2a7) list_tmo_note_info_pane_g1_ParamLimits

0xec22,	// (0x0001c2a7) list_tmo_note_info_pane_g1

0xec39,	// (0x0001c2be) list_tmo_note_info_pane_g2_ParamLimits

0xec39,	// (0x0001c2be) list_tmo_note_info_pane_g2

0x0001,

0xfea0,	// (0x0001d525) list_tmo_note_info_pane_g_ParamLimits

0xfea0,	// (0x0001d525) list_tmo_note_info_pane_g

0xec55,	// (0x0001c2da) list_tmo_note_info_text_pane_ParamLimits

0xec55,	// (0x0001c2da) list_tmo_note_info_text_pane

0xecd6,	// (0x0001c35b) list_tmo_link_pane

0xece3,	// (0x0001c368) scroll_pane_cp20

0xecf0,	// (0x0001c375) list_single_tmo_link_pane_ParamLimits

0xecf0,	// (0x0001c375) list_single_tmo_link_pane

0xed00,	// (0x0001c385) list_single_tmo_link_pane_t1

0xed0e,	// (0x0001c393) list_tmo_note_info_text_pane_t1_ParamLimits

0xed0e,	// (0x0001c393) list_tmo_note_info_text_pane_t1

0x864c,	// (0x00015cd1) aid_size_touch_scroll_bar_cp01_ParamLimits

0x864c,	// (0x00015cd1) aid_size_touch_scroll_bar_cp01

0x854e,	// (0x00015bd3) aid_size_touch_slider_marker

0x579e,	// (0x00012e23) popup_settings_window_ParamLimits

0x579e,	// (0x00012e23) popup_settings_window

0x4aac,	// (0x00012131) popup_candi_list_indi_window

0x8c80,	// (0x00016305) aid_touch_navi_pane_ParamLimits

0x6e97,	// (0x0001451c) rs_clock_indi_pane

0x6ea0,	// (0x00014525) sctrl_sk_bottom_pane_ParamLimits

0x6eb1,	// (0x00014536) sctrl_sk_top_pane_ParamLimits

0x6fac,	// (0x00014631) popup_fep_tooltip_window

0xe638,	// (0x0001bcbd) aid_size_cell_widget_grid_ParamLimits

0xe6ad,	// (0x0001bd32) cell_ai5_widget_pane_g1_ParamLimits

0xe6ad,	// (0x0001bd32) cell_ai5_widget_pane_g1

0xe712,	// (0x0001bd97) cell_ai5_widget_pane_g6_ParamLimits

0xe71e,	// (0x0001bda3) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe14,	// (0x0001d499) cell_ai5_widget_pane_g_ParamLimits

0xfe14,	// (0x0001d499) cell_ai5_widget_pane_g

0xe88e,	// (0x0001bf13) cell_ai5_widget_pane_t10_ParamLimits

0xe88e,	// (0x0001bf13) cell_ai5_widget_pane_t10

0xe8d1,	// (0x0001bf56) grid_ai5_widget_pane_ParamLimits

0xe96f,	// (0x0001bff4) cell_contacts_ai5_widget_pane_ParamLimits

0xe96f,	// (0x0001bff4) cell_contacts_ai5_widget_pane

0xeb49,	// (0x0001c1ce) popup_discreet_window_t3_ParamLimits

0xeb49,	// (0x0001c1ce) popup_discreet_window_t3

0x77a6,	// (0x00014e2b) popup_fshwr2_char_preview_window_ParamLimits

0x77a6,	// (0x00014e2b) popup_fshwr2_char_preview_window

0xec73,	// (0x0001c2f8) tmo_note_info_pane_t1

0xec88,	// (0x0001c30d) tmo_note_info_pane_t2

0xec9d,	// (0x0001c322) tmo_note_info_pane_t3

0xecb2,	// (0x0001c337) tmo_note_info_pane_t4

0xecc4,	// (0x0001c349) tmo_note_info_pane_t5

0x0004,

0xfea5,	// (0x0001d52a) tmo_note_info_pane_t

0xecd6,	// (0x0001c35b) list_tmo_link_pane_ParamLimits

0xece3,	// (0x0001c368) scroll_pane_cp20_ParamLimits

0x5663,	// (0x00012ce8) bg_popup_fep_char_preview_window_cp01

0xed27,	// (0x0001c3ac) popup_fshwr2_char_preview_window_t1

0xed35,	// (0x0001c3ba) popup_candi_list_indi_window_g1

0xed3e,	// (0x0001c3c3) bg_cell_contacts_ai5_widget_pane

0xed4a,	// (0x0001c3cf) cell_contacts_ai5_widget_pane_g1

0xc50d,	// (0x00019b92) cell_contacts_ai5_widget_pane_g2

0xed5f,	// (0x0001c3e4) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb0,	// (0x0001d535) cell_contacts_ai5_widget_pane_g

0xed6b,	// (0x0001c3f0) cell_contacts_ai5_widget_pane_t1

0x3b34,	// (0x000111b9) highlight_cell_shortcut_ai5_widget_pane_cp01

0xede2,	// (0x0001c467) settings_container_pane

0x4814,	// (0x00011e99) listscroll_set_pane_copy1

0xb047,	// (0x000186cc) scroll_pane_cp121_copy1

0x9679,	// (0x00016cfe) set_content_pane_copy1

0xedee,	// (0x0001c473) aid_height_set_list_copy1_ParamLimits

0xedee,	// (0x0001c473) aid_height_set_list_copy1

0xa60b,	// (0x00017c90) aid_size_parent_copy1_ParamLimits

0xa60b,	// (0x00017c90) aid_size_parent_copy1

0xedfa,	// (0x0001c47f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xedfa,	// (0x0001c47f) button_value_adjust_pane_cp6_copy1

0x4a30,	// (0x000120b5) list_highlight_pane_cp2_copy1_ParamLimits

0x4a30,	// (0x000120b5) list_highlight_pane_cp2_copy1

0xee0e,	// (0x0001c493) list_set_pane_copy1_ParamLimits

0xee0e,	// (0x0001c493) list_set_pane_copy1

0xed7d,	// (0x0001c402) main_pane_set_t1_copy1_ParamLimits

0xed7d,	// (0x0001c402) main_pane_set_t1_copy1

0xedb7,	// (0x0001c43c) main_pane_set_t2_copy1_ParamLimits

0xedb7,	// (0x0001c43c) main_pane_set_t2_copy1

0xeebb,	// (0x0001c540) main_pane_set_t3_copy1

0xeec9,	// (0x0001c54e) main_pane_set_t4_copy1

0xedd6,	// (0x0001c45b) set_content_pane_g1_copy1_ParamLimits

0xedd6,	// (0x0001c45b) set_content_pane_g1_copy1

0xeed7,	// (0x0001c55c) setting_code_pane_copy1

0xeedf,	// (0x0001c564) setting_slider_graphic_pane_copy1

0xeedf,	// (0x0001c564) setting_slider_pane_copy1

0xeee7,	// (0x0001c56c) setting_text_pane_copy1

0xeee7,	// (0x0001c56c) setting_volume_pane_copy1

0xeed7,	// (0x0001c55c) settings_code_pane_cp2_copy1

0xeeef,	// (0x0001c574) settings_code_pane_cp_copy1_ParamLimits

0xeeef,	// (0x0001c574) settings_code_pane_cp_copy1

0x78b7,	// (0x00014f3c) volume_set_pane_copy1

0xef03,	// (0x0001c588) volume_set_pane_g10_copy1

0xef0b,	// (0x0001c590) volume_set_pane_g1_copy1

0xef13,	// (0x0001c598) volume_set_pane_g2_copy1

0xef1b,	// (0x0001c5a0) volume_set_pane_g3_copy1

0xef23,	// (0x0001c5a8) volume_set_pane_g4_copy1

0xef2b,	// (0x0001c5b0) volume_set_pane_g5_copy1

0xef33,	// (0x0001c5b8) volume_set_pane_g6_copy1

0xef3b,	// (0x0001c5c0) volume_set_pane_g7_copy1

0xef43,	// (0x0001c5c8) volume_set_pane_g8_copy1

0xef4b,	// (0x0001c5d0) volume_set_pane_g9_copy1

0x3712,	// (0x00010d97) bg_set_opt_pane_cp_copy1_ParamLimits

0x3712,	// (0x00010d97) bg_set_opt_pane_cp_copy1

0x78bf,	// (0x00014f44) setting_slider_pane_t1_copy1_ParamLimits

0x78bf,	// (0x00014f44) setting_slider_pane_t1_copy1

0x78de,	// (0x00014f63) setting_slider_pane_t2_copy1_ParamLimits

0x78de,	// (0x00014f63) setting_slider_pane_t2_copy1

0x78f8,	// (0x00014f7d) setting_slider_pane_t3_copy1_ParamLimits

0x78f8,	// (0x00014f7d) setting_slider_pane_t3_copy1

0x7910,	// (0x00014f95) slider_set_pane_copy1_ParamLimits

0x7910,	// (0x00014f95) slider_set_pane_copy1

0x3bfa,	// (0x0001127f) set_opt_bg_pane_g1_copy2

0x3c02,	// (0x00011287) set_opt_bg_pane_g2_copy2

0xef53,	// (0x0001c5d8) set_opt_bg_pane_g3_copy2

0x3c12,	// (0x00011297) set_opt_bg_pane_g4_copy2

0x3c1a,	// (0x0001129f) set_opt_bg_pane_g5_copy2

0x3c22,	// (0x000112a7) set_opt_bg_pane_g6_copy2

0xef5d,	// (0x0001c5e2) set_opt_bg_pane_g7_copy2

0xef65,	// (0x0001c5ea) set_opt_bg_pane_g8_copy2

0xef6f,	// (0x0001c5f4) set_opt_bg_pane_g9_copy2

0x7926,	// (0x00014fab) aid_size_touch_slider_mark_copy1_ParamLimits

0x7926,	// (0x00014fab) aid_size_touch_slider_mark_copy1

0xef79,	// (0x0001c5fe) slider_set_pane_g1_copy1

0x793a,	// (0x00014fbf) slider_set_pane_g2_copy1

0x6884,	// (0x00013f09) slider_set_pane_g3_copy1_ParamLimits

0x6884,	// (0x00013f09) slider_set_pane_g3_copy1

0x6898,	// (0x00013f1d) slider_set_pane_g4_copy1_ParamLimits

0x6898,	// (0x00013f1d) slider_set_pane_g4_copy1

0x68b0,	// (0x00013f35) slider_set_pane_g5_copy1_ParamLimits

0x68b0,	// (0x00013f35) slider_set_pane_g5_copy1

0x6884,	// (0x00013f09) slider_set_pane_g6_copy1_ParamLimits

0x6884,	// (0x00013f09) slider_set_pane_g6_copy1

0x7942,	// (0x00014fc7) slider_set_pane_g7_copy1_ParamLimits

0x7942,	// (0x00014fc7) slider_set_pane_g7_copy1

0x3696,	// (0x00010d1b) bg_set_opt_pane_cp2_copy1

0xef82,	// (0x0001c607) setting_slider_graphic_pane_g1_copy1

0xef8b,	// (0x0001c610) setting_slider_graphic_pane_t1_copy1

0xef9b,	// (0x0001c620) setting_slider_graphic_pane_t2_copy1

0xefab,	// (0x0001c630) slider_set_pane_cp_copy1

0xefbb,	// (0x0001c640) input_focus_pane_cp1_copy1

0xefc4,	// (0x0001c649) list_set_text_pane_copy1

0xefcc,	// (0x0001c651) setting_text_pane_g1_copy1

0xefd5,	// (0x0001c65a) set_text_pane_t1_copy1

0xefbb,	// (0x0001c640) input_focus_pane_cp2_copy1

0xefcc,	// (0x0001c651) setting_code_pane_g1_copy1

0xeff0,	// (0x0001c675) setting_code_pane_t1_copy1

0xeffe,	// (0x0001c683) list_set_graphic_pane_copy1

0x3696,	// (0x00010d1b) bg_set_opt_pane_cp4_copy1

0x4599,	// (0x00011c1e) list_set_graphic_pane_g1_copy1_ParamLimits

0x4599,	// (0x00011c1e) list_set_graphic_pane_g1_copy1

0xf012,	// (0x0001c697) list_set_graphic_pane_g2_copy1

0x45b1,	// (0x00011c36) list_set_graphic_pane_t1_copy1_ParamLimits

0x45b1,	// (0x00011c36) list_set_graphic_pane_t1_copy1

0xbcaf,	// (0x00019334) rs_clock_indi_pane_g1

0xf01a,	// (0x0001c69f) rs_clock_indi_pane_t1

0xf028,	// (0x0001c6ad) rs_indi_pane

0xf030,	// (0x0001c6b5) rs_indi_pane_g1

0xf039,	// (0x0001c6be) rs_indi_pane_g2

0xed35,	// (0x0001c3ba) rs_indi_pane_g3

0x0002,

0xfeb7,	// (0x0001d53c) rs_indi_pane_g

0x4814,	// (0x00011e99) bg_popup_preview_window_pane_cp03

0xf042,	// (0x0001c6c7) popup_fep_tooltip_window_t1

0xcb34,	// (0x0001a1b9) popup_note2_window_g2_ParamLimits

0xcb34,	// (0x0001a1b9) popup_note2_window_g2

0x0001,

0xfc4b,	// (0x0001d2d0) popup_note2_window_g_ParamLimits

0xfc4b,	// (0x0001d2d0) popup_note2_window_g

0xd110,	// (0x0001a795) bg_popup_sub_pane_cp11_ParamLimits

0xd11d,	// (0x0001a7a2) cell_ai3_links_pane_g1_ParamLimits

0xd134,	// (0x0001a7b9) cell_ai3_links_pane_t1

0xefd5,	// (0x0001c65a) set_text_pane_t1_copy1_ParamLimits

0x4752,	// (0x00011dd7) cell_graphic_popup_pane_cp2_ParamLimits

0x4752,	// (0x00011dd7) cell_graphic_popup_pane_cp2

0xf050,	// (0x0001c6d5) cell_graphic_popup_pane_g1_cp2

0x39b0,	// (0x00011035) cell_graphic_popup_pane_g2_cp2

0xf058,	// (0x0001c6dd) cell_graphic_popup_pane_g3_cp2

0xf060,	// (0x0001c6e5) cell_graphic_popup_pane_t2_cp2

0x39c1,	// (0x00011046) grid_highlight_pane_cp3_cp2

0x4027,	// (0x000116ac) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3b34,	// (0x000111b9) main_tmo_pane_ParamLimits

0xd4cb,	// (0x0001ab50) popup_tmo_big_image_note_window

0xe69c,	// (0x0001bd21) cell_ai5_widget_list_pane

0xe6a4,	// (0x0001bd29) cell_ai5_widget_lrg_icon_pane

0xec73,	// (0x0001c2f8) tmo_note_info_pane_t1_ParamLimits

0xec88,	// (0x0001c30d) tmo_note_info_pane_t2_ParamLimits

0xec9d,	// (0x0001c322) tmo_note_info_pane_t3_ParamLimits

0xecb2,	// (0x0001c337) tmo_note_info_pane_t4_ParamLimits

0xecc4,	// (0x0001c349) tmo_note_info_pane_t5_ParamLimits

0xfea5,	// (0x0001d52a) tmo_note_info_pane_t_ParamLimits

0xede2,	// (0x0001c467) settings_container_pane_ParamLimits

0xefb3,	// (0x0001c638) indicator_popup_pane_cp5

0xefb3,	// (0x0001c638) indicator_popup_pane_cp6

0xeffe,	// (0x0001c683) list_set_graphic_pane_copy1_ParamLimits

0x3662,	// (0x00010ce7) bg_popup_window_pane_cp23

0xf06e,	// (0x0001c6f3) popup_tmo_big_image_note_window_g1

0xf077,	// (0x0001c6fc) popup_tmo_big_image_note_window_t1

0xf087,	// (0x0001c70c) popup_tmo_big_image_note_window_t2

0xf097,	// (0x0001c71c) popup_tmo_big_image_note_window_t3

0x0002,

0xfebe,	// (0x0001d543) popup_tmo_big_image_note_window_t

0xbcaf,	// (0x00019334) cell_ai5_widget_lrg_icon_pane_g1

0xf0a7,	// (0x0001c72c) cell_ai5_widget_lrg_icon_pane_t1

0xf0b5,	// (0x0001c73a) cell_ai5_widget_list_row_pane_ParamLimits

0xf0b5,	// (0x0001c73a) cell_ai5_widget_list_row_pane

0xf0cc,	// (0x0001c751) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0cc,	// (0x0001c751) cell_ai5_widget_list_row_pane_g1

0xf0d9,	// (0x0001c75e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0d9,	// (0x0001c75e) cell_ai5_widget_list_row_pane_t1

0xf104,	// (0x0001c789) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf104,	// (0x0001c789) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec5,	// (0x0001d54a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec5,	// (0x0001d54a) cell_ai5_widget_list_row_pane_t

0x5663,	// (0x00012ce8) main_fep_vtchi_ss_pane

0xf154,	// (0x0001c7d9) popup_fep_char_pre_window

0xf15c,	// (0x0001c7e1) popup_fep_ituss_window

0xf18e,	// (0x0001c813) popup_fep_vkbss_window

0x4a30,	// (0x000120b5) grid_vkbss_keypad_pane_ParamLimits

0x4a30,	// (0x000120b5) grid_vkbss_keypad_pane

0xf1d4,	// (0x0001c859) ituss_keypad_pane

0x7983,	// (0x00015008) aid_vkbss_key_offset_ParamLimits

0x7983,	// (0x00015008) aid_vkbss_key_offset

0x798f,	// (0x00015014) cell_vkbss_key_pane_ParamLimits

0x798f,	// (0x00015014) cell_vkbss_key_pane

0xf1e4,	// (0x0001c869) bg_cell_vkbss_key_g1_ParamLimits

0xf1e4,	// (0x0001c869) bg_cell_vkbss_key_g1

0xf1f0,	// (0x0001c875) cell_vkbss_key_3p_pane_ParamLimits

0xf1f0,	// (0x0001c875) cell_vkbss_key_3p_pane

0xf226,	// (0x0001c8ab) cell_vkbss_key_g1_ParamLimits

0xf226,	// (0x0001c8ab) cell_vkbss_key_g1

0xf25c,	// (0x0001c8e1) cell_vkbss_key_t1_ParamLimits

0xf25c,	// (0x0001c8e1) cell_vkbss_key_t1

0x79da,	// (0x0001505f) cell_ituss_key_pane_ParamLimits

0x79da,	// (0x0001505f) cell_ituss_key_pane

0xf2b8,	// (0x0001c93d) bg_cell_ituss_key_g1_ParamLimits

0xf2b8,	// (0x0001c93d) bg_cell_ituss_key_g1

0xf2c4,	// (0x0001c949) cell_ituss_key_pane_g1_ParamLimits

0xf2c4,	// (0x0001c949) cell_ituss_key_pane_g1

0x79eb,	// (0x00015070) cell_ituss_key_pane_g2_ParamLimits

0x79eb,	// (0x00015070) cell_ituss_key_pane_g2

0x0005,

0xfecc,	// (0x0001d551) cell_ituss_key_pane_g_ParamLimits

0xfecc,	// (0x0001d551) cell_ituss_key_pane_g

0x7a6f,	// (0x000150f4) cell_ituss_key_t1_ParamLimits

0x7a6f,	// (0x000150f4) cell_ituss_key_t1

0x7aa9,	// (0x0001512e) cell_ituss_key_t2_ParamLimits

0x7aa9,	// (0x0001512e) cell_ituss_key_t2

0x7adb,	// (0x00015160) cell_ituss_key_t3_ParamLimits

0x7adb,	// (0x00015160) cell_ituss_key_t3

0x7b0c,	// (0x00015191) cell_ituss_key_t4_ParamLimits

0x7b0c,	// (0x00015191) cell_ituss_key_t4

0x0005,

0xfed9,	// (0x0001d55e) cell_ituss_key_t_ParamLimits

0xfed9,	// (0x0001d55e) cell_ituss_key_t

0xf2ea,	// (0x0001c96f) cell_vkbss_key_3p_pane_g1

0xf2f2,	// (0x0001c977) cell_vkbss_key_3p_pane_g2

0xf2fa,	// (0x0001c97f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee6,	// (0x0001d56b) cell_vkbss_key_3p_pane_g

0x4814,	// (0x00011e99) bg_popup_fep_char_preview_window_cp02

0xf302,	// (0x0001c987) popup_fep_char_pre_window_t1

0xe625,	// (0x0001bcaa) main_ai5_sk_pane

0xed3e,	// (0x0001c3c3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed4a,	// (0x0001c3cf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc50d,	// (0x00019b92) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed5f,	// (0x0001c3e4) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb0,	// (0x0001d535) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed6b,	// (0x0001c3f0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3b34,	// (0x000111b9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf310,	// (0x0001c995) main_ai5_sk_pane_g1

0x9715,	// (0x00016d9a) popup_query_code_window_g1

0xf175,	// (0x0001c7fa) popup_fep_vkb_icf_pane

0xf1a8,	// (0x0001c82d) popup_fep_vtchi_icf_pane

0xf319,	// (0x0001c99e) bg_icf_pane

0xf319,	// (0x0001c99e) list_vkb_icf_pane

0xf325,	// (0x0001c9aa) bg_icf_pane_cp01

0xf338,	// (0x0001c9bd) vtchi_icf_list_pane

0xf398,	// (0x0001ca1d) list_vkb_icf_pane_t1_ParamLimits

0xf398,	// (0x0001ca1d) list_vkb_icf_pane_t1

0xf3bd,	// (0x0001ca42) vtchi_icf_list_pane_t1_ParamLimits

0xf3bd,	// (0x0001ca42) vtchi_icf_list_pane_t1

0xf15c,	// (0x0001c7e1) popup_fep_ituss_window_ParamLimits

0xf1a8,	// (0x0001c82d) popup_fep_vtchi_icf_pane_ParamLimits

0xf1d4,	// (0x0001c859) ituss_keypad_pane_ParamLimits

0x7979,	// (0x00014ffe) ituss_sks_pane

0xf319,	// (0x0001c99e) bg_icf_pane_ParamLimits

0xf12c,	// (0x0001c7b1) icf_edit_indi_pane_ParamLimits

0xf12c,	// (0x0001c7b1) icf_edit_indi_pane

0xf319,	// (0x0001c99e) list_vkb_icf_pane_ParamLimits

0xf325,	// (0x0001c9aa) bg_icf_pane_cp01_ParamLimits

0xf147,	// (0x0001c7cc) icf_edit_indi_pane_cp01_ParamLimits

0xf147,	// (0x0001c7cc) icf_edit_indi_pane_cp01

0xf338,	// (0x0001c9bd) vtchi_query_pane

0xe499,	// (0x0001bb1e) icf_edit_indi_pane_g1_ParamLimits

0xe499,	// (0x0001bb1e) icf_edit_indi_pane_g1

0xf438,	// (0x0001cabd) icf_edit_indi_pane_g2_ParamLimits

0xf438,	// (0x0001cabd) icf_edit_indi_pane_g2

0x0001,

0xff11,	// (0x0001d596) icf_edit_indi_pane_g_ParamLimits

0xff11,	// (0x0001d596) icf_edit_indi_pane_g

0xf44c,	// (0x0001cad1) icf_edit_indi_pane_t1

0xf3e1,	// (0x0001ca66) bg_input_focus_pane_cp042

0x3a24,	// (0x000110a9) vtchi_button_pane

0xf3ea,	// (0x0001ca6f) vtchi_query_pane_t1

0xf3f8,	// (0x0001ca7d) vtchi_query_pane_t2

0xf406,	// (0x0001ca8b) vtchi_query_pane_t3

0x0002,

0xff00,	// (0x0001d585) vtchi_query_pane_t

0x5663,	// (0x00012ce8) bg_button_pane_cp13

0xf414,	// (0x0001ca99) vtchi_button_pane_g1

0x7b8d,	// (0x00015212) ituss_sks_pane_g1

0x7b98,	// (0x0001521d) ituss_sks_pane_g2

0x0001,

0xff07,	// (0x0001d58c) ituss_sks_pane_g

0xf41c,	// (0x0001caa1) ituss_sks_pane_t1

0xf42a,	// (0x0001caaf) ituss_sks_pane_t2

0x0001,

0xff0c,	// (0x0001d591) ituss_sks_pane_t

0xb6dd,	// (0x00018d62) indicator_nsta_pane_cp_g1

0xb6e6,	// (0x00018d6b) indicator_nsta_pane_cp_g2

0xb6ee,	// (0x00018d73) indicator_nsta_pane_cp_g3

0xb6f6,	// (0x00018d7b) indicator_nsta_pane_cp_g4

0xb6e6,	// (0x00018d6b) indicator_nsta_pane_cp_g5

0xb6ee,	// (0x00018d73) indicator_nsta_pane_cp_g6

0x0005,

0xfa89,	// (0x0001d10e) indicator_nsta_pane_cp_g

0xe1ec,	// (0x0001b871) cell_graphic2_pane_t2_ParamLimits

0xe1ec,	// (0x0001b871) cell_graphic2_pane_t2

0x0001,

0xfd9b,	// (0x0001d420) cell_graphic2_pane_t_ParamLimits

0xfd9b,	// (0x0001d420) cell_graphic2_pane_t

0xe218,	// (0x0001b89d) cell_graphic2_control_pane_t1

0x88d6,	// (0x00015f5b) signal_pane_g3_ParamLimits

0x88d6,	// (0x00015f5b) signal_pane_g3

0x88e8,	// (0x00015f6d) signal_pane_g4_ParamLimits

0x88e8,	// (0x00015f6d) signal_pane_g4

0xf116,	// (0x0001c79b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf116,	// (0x0001c79b) cell_ai5_widget_list_row_pane_t3

0xf2d8,	// (0x0001c95d) cell_ituss_key_pane_t1_ParamLimits

0xf2d8,	// (0x0001c95d) cell_ituss_key_pane_t1

0x9307,	// (0x0001698c) form_field_data_wide_pane_vc_t2_ParamLimits

0x9307,	// (0x0001698c) form_field_data_wide_pane_vc_t2

0x931b,	// (0x000169a0) form_field_data_wide_pane_vc_t3_ParamLimits

0x931b,	// (0x000169a0) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ce,	// (0x0001ce53) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ce,	// (0x0001ce53) form_field_data_wide_pane_vc_t

0xb387,	// (0x00018a0c) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb387,	// (0x00018a0c) form_field_slider_wide_pane_vc_t3

0xb465,	// (0x00018aea) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb465,	// (0x00018aea) form_field_popup_wide_pane_vc_t2

0xb47c,	// (0x00018b01) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb47c,	// (0x00018b01) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa78,	// (0x0001d0fd) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa78,	// (0x0001d0fd) form_field_popup_wide_pane_vc_t

0x7718,	// (0x00014d9d) aid_fshwr2_btn_pane_ParamLimits

0x772c,	// (0x00014db1) aid_fshwr2_syb_pane_ParamLimits

0x7740,	// (0x00014dc5) aid_fshwr2_txt_pane_ParamLimits

0x6f3c,	// (0x000145c1) fshwr2_bg_pane_ParamLimits

0x7750,	// (0x00014dd5) fshwr2_func_candi_pane_ParamLimits

0x7774,	// (0x00014df9) fshwr2_hwr_syb_pane_ParamLimits

0x778e,	// (0x00014e13) fshwr2_icf_pane_ParamLimits

0xb2f3,	// (0x00018978) list_double_graphic_pane_vc_g4_ParamLimits

0xb2f3,	// (0x00018978) list_double_graphic_pane_vc_g4

0x7a0b,	// (0x00015090) cell_ituss_key_pane_g3_ParamLimits

0x7a0b,	// (0x00015090) cell_ituss_key_pane_g3

0x7b3d,	// (0x000151c2) cell_ituss_key_t5_ParamLimits

0x7b3d,	// (0x000151c2) cell_ituss_key_t5

0xf18e,	// (0x0001c813) popup_fep_vkbss_window_ParamLimits

0xe62f,	// (0x0001bcb4) aid_cell_ai5_quarter

0xf44c,	// (0x0001cad1) icf_edit_indi_pane_t1_ParamLimits

0x7d9f,	// (0x00015424) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7d9f,	// (0x00015424) aid_tch_indicator_popup_pane_cp2

0x7db2,	// (0x00015437) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7db2,	// (0x00015437) aid_tch_query_popup_data_pane_cp2

0x96bd,	// (0x00016d42) aid_tch_query_popup_pane_ParamLimits

0x96bd,	// (0x00016d42) aid_tch_query_popup_pane

0x96bd,	// (0x00016d42) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x96bd,	// (0x00016d42) aid_tch_query_popup_data_pane_cp1

0x4a30,	// (0x000120b5) cell_fshwr2_syb_bg_pane_ParamLimits

0x7884,	// (0x00014f09) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7898,	// (0x00014f1d) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf175,	// (0x0001c7fa) popup_fep_vkb_icf_pane_ParamLimits

0x7558,	// (0x00014bdd) bg_popup_fep_char_preview_window_g10

0xe766,	// (0x0001bdeb) cell_ai5_widget_pane_g11_ParamLimits

0xe766,	// (0x0001bdeb) cell_ai5_widget_pane_g11

0xe772,	// (0x0001bdf7) cell_ai5_widget_pane_g12_ParamLimits

0xe772,	// (0x0001bdf7) cell_ai5_widget_pane_g12

0xe77e,	// (0x0001be03) cell_ai5_widget_pane_g13_ParamLimits

0xe77e,	// (0x0001be03) cell_ai5_widget_pane_g13

0xe8ad,	// (0x0001bf32) cell_ai5_widget_pane_t11_ParamLimits

0xe8ad,	// (0x0001bf32) cell_ai5_widget_pane_t11

0xe8bf,	// (0x0001bf44) cell_ai5_widget_pane_t12_ParamLimits

0xe8bf,	// (0x0001bf44) cell_ai5_widget_pane_t12

0x7a17,	// (0x0001509c) cell_ituss_key_pane_g4_ParamLimits

0x7a17,	// (0x0001509c) cell_ituss_key_pane_g4

0x7a33,	// (0x000150b8) cell_ituss_key_pane_g5_ParamLimits

0x7a33,	// (0x000150b8) cell_ituss_key_pane_g5

0x7a4f,	// (0x000150d4) cell_ituss_key_pane_g6_ParamLimits

0x7a4f,	// (0x000150d4) cell_ituss_key_pane_g6

0x9159,	// (0x000167de) bg_icf_pane_g1

0xf340,	// (0x0001c9c5) bg_icf_pane_g2

0xf34c,	// (0x0001c9d1) bg_icf_pane_g3

0xf356,	// (0x0001c9db) bg_icf_pane_g4

0xf362,	// (0x0001c9e7) bg_icf_pane_g5

0xf36c,	// (0x0001c9f1) bg_icf_pane_g6

0xf378,	// (0x0001c9fd) bg_icf_pane_g7

0xf382,	// (0x0001ca07) bg_icf_pane_g8

0xf38e,	// (0x0001ca13) bg_icf_pane_g9

0x0008,

0xfeed,	// (0x0001d572) bg_icf_pane_g

0xf1c1,	// (0x0001c846) popup_hyb_candi_window_ParamLimits

0xf1c1,	// (0x0001c846) popup_hyb_candi_window

0x9279,	// (0x000168fe) bg_popup_sub_pane_cp01_ParamLimits

0x9279,	// (0x000168fe) bg_popup_sub_pane_cp01

0xf465,	// (0x0001caea) entry_hyb_candi_pane_ParamLimits

0xf465,	// (0x0001caea) entry_hyb_candi_pane

0xf474,	// (0x0001caf9) grid_hyb_candi_pane_ParamLimits

0xf474,	// (0x0001caf9) grid_hyb_candi_pane

0xf489,	// (0x0001cb0e) grid_hyb_phrase_pane_ParamLimits

0xf489,	// (0x0001cb0e) grid_hyb_phrase_pane

0xf498,	// (0x0001cb1d) cell_hyb_candi_pane_ParamLimits

0xf498,	// (0x0001cb1d) cell_hyb_candi_pane

0xf4bb,	// (0x0001cb40) cell_hyb_candi_scroll_pane

0x41c9,	// (0x0001184e) cell_hyb_candi_pane_g1

0xf4c4,	// (0x0001cb49) cell_hyb_candi_pane_t1

0xf4d2,	// (0x0001cb57) cell_hyb_phrase_pane

0x41c9,	// (0x0001184e) cell_hyb_phrase_pane_g1

0xf4db,	// (0x0001cb60) cell_hyb_phrase_pane_t1

0xf4e9,	// (0x0001cb6e) entry_hyb_candi_pane_t1

0x4814,	// (0x00011e99) input_focus_pane_cp06

0xf4f7,	// (0x0001cb7c) cell_hyb_candi_scroll_pane_g1

0xf4ff,	// (0x0001cb84) cell_hyb_candi_scroll_pane_g1_aid

0xf507,	// (0x0001cb8c) cell_hyb_candi_scroll_pane_g2

0xf50f,	// (0x0001cb94) cell_hyb_candi_scroll_pane_g2_aid

0xf517,	// (0x0001cb9c) cell_hyb_candi_scroll_pane_g3

0xf51f,	// (0x0001cba4) cell_hyb_candi_scroll_pane_g4

0xe55a,	// (0x0001bbdf) ai5_page_g1

0x7b4f,	// (0x000151d4) cell_ituss_key_t6_ParamLimits

0x7b4f,	// (0x000151d4) cell_ituss_key_t6

0x7958,	// (0x00014fdd) icf_edit_indi_pane_cp02_ParamLimits

0x7958,	// (0x00014fdd) icf_edit_indi_pane_cp02

0x796c,	// (0x00014ff1) icf_edit_indi_pane_cp03_ParamLimits

0x796c,	// (0x00014ff1) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
